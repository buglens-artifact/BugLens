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
   int f0;
   unsigned f1 : 30;
};

struct S1 {
   unsigned f0;
   signed f1 : 29;
   unsigned : 0;
   unsigned f2 : 1;
   unsigned f3 : 19;
   signed f4 : 5;
};

struct S2 {
   signed f0 : 19;
};

struct S3 {
   unsigned f0 : 11;
   short f1;
   unsigned short f2;
   int f3;
};


static short g_27 = 0x0045L;
static struct S2 g_48 = {-591};
static int g_52 = 0L;
static int *g_51 = &g_52;
static unsigned char g_59 = 254UL;
static unsigned char g_74[3] = {0UL,0UL,0UL};
static struct S0 g_75[10] = {{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600},{1L,23600}};
static unsigned char *g_85[6] = {&g_59,&g_59,&g_59,&g_59,&g_59,&g_59};
static unsigned char **g_84 = &g_85[2];
static unsigned char **g_87 = &g_85[2];
static struct S3 g_93[10][5][5] = {{{{10,0x3A56L,0x0A4BL,-1L},{0,0xA040L,65535UL,0L},{42,-10L,3UL,0x41D14881L},{22,0x310FL,0x9FE9L,0x54B42CA7L},{20,0x074BL,0x71F3L,1L}},{{14,0L,1UL,1L},{4,0x9A20L,0x7CEEL,0xDE0CEE11L},{37,0xAD7DL,65526UL,-6L},{3,-8L,0x59B5L,1L},{34,0x950AL,65534UL,0x3F866D66L}},{{16,0xACFCL,0x972DL,5L},{1,-1L,0x56FCL,-7L},{20,0xF385L,0x1945L,0xCBE952D2L},{24,-2L,9UL,0xF79D74A7L},{21,0xBC58L,0x0DBAL,-1L}},{{37,0xAD7DL,65526UL,-6L},{41,4L,0UL,0xD90C2879L},{5,0x611DL,1UL,-1L},{5,0x611DL,1UL,-1L},{41,4L,0UL,0xD90C2879L}},{{18,1L,65529UL,0x41A7DDF2L},{22,0x310FL,0x9FE9L,0x54B42CA7L},{23,0x539EL,0x6F40L,0x2E0B307BL},{34,0x4BDEL,6UL,-2L},{42,-10L,3UL,0x41D14881L}}},{{{42,0x59CCL,1UL,0x737C25DAL},{13,-10L,65533UL,1L},{18,0xC05AL,3UL,-2L},{41,4L,0UL,0xD90C2879L},{2,0x2569L,0xF44CL,0xA7E671B3L}},{{16,-6L,0xDC5EL,0xF8BD7A0FL},{0,0xA040L,65535UL,0L},{20,0x074BL,0x71F3L,1L},{42,0xD4C1L,0xEDC4L,0x01C99F48L},{2,0x99B7L,1UL,-1L}},{{14,-1L,0x463FL,0x5419F12AL},{35,0L,0x6599L,0L},{23,0xB1BCL,1UL,0x7C8AD55DL},{14,0L,1UL,1L},{3,-8L,0x59B5L,1L}},{{29,0x843DL,0xAEA6L,0x54E2A72BL},{35,4L,0x9A2EL,0xC1CDF14EL},{18,1L,65529UL,0x41A7DDF2L},{1,-1L,0x56FCL,-7L},{10,0x3A56L,0x0A4BL,-1L}},{{9,-6L,0UL,0x7A74CFD5L},{34,0x950AL,65534UL,0x3F866D66L},{3,1L,1UL,0x5346B7FDL},{34,0x950AL,65534UL,0x3F866D66L},{9,-6L,0UL,0x7A74CFD5L}}},{{{23,0x2317L,0x37F7L,1L},{22,0x375AL,0x760AL,-8L},{29,1L,65533UL,0x52EC9A0CL},{26,0x933BL,1UL,0xBDA80610L},{21,0xBC58L,0x0DBAL,-1L}},{{34,0x950AL,65534UL,0x3F866D66L},{6,0x5341L,65535UL,0L},{34,0xC407L,0UL,0x1E6C6A7DL},{40,0x8B66L,0xCD2BL,0x11D3B62AL},{13,-10L,65533UL,1L}},{{25,-1L,65535UL,3L},{42,0x6F03L,0UL,0xD5568E7AL},{16,0xACFCL,0x972DL,5L},{22,0x375AL,0x760AL,-8L},{21,0xBC58L,0x0DBAL,-1L}},{{35,0x3621L,1UL,0x49A4E49BL},{40,0x8B66L,0xCD2BL,0x11D3B62AL},{40,0x5358L,8UL,-9L},{44,0x6F68L,65535UL,-7L},{9,-6L,0UL,0x7A74CFD5L}},{{21,0xBC58L,0x0DBAL,-1L},{42,0xD4C1L,0xEDC4L,0x01C99F48L},{38,0x7F40L,0x1A7DL,0x0A60FE93L},{31,0xEAFDL,0UL,-9L},{10,0x3A56L,0x0A4BL,-1L}}},{{{18,0xC05AL,3UL,-2L},{11,-4L,0x41EAL,-3L},{11,-4L,0x41EAL,-3L},{18,0xC05AL,3UL,-2L},{3,-8L,0x59B5L,1L}},{{29,1L,65533UL,0x52EC9A0CL},{13,-1L,65531UL,0xAD3E241DL},{23,0x539EL,0x6F40L,0x2E0B307BL},{39,0x29DAL,0xEC30L,0x26F2AC0DL},{2,0x99B7L,1UL,-1L}},{{13,-10L,65533UL,1L},{14,-1L,0x463FL,0x5419F12AL},{34,0x950AL,65534UL,0x3F866D66L},{5,0x611DL,1UL,-1L},{2,0x2569L,0xF44CL,0xA7E671B3L}},{{18,-1L,0xB5B3L,0xFF2D55D3L},{10,0x695EL,7UL,0xE21AE28EL},{10,0x3A56L,0x0A4BL,-1L},{39,0x29DAL,0xEC30L,0x26F2AC0DL},{32,0xDB97L,0xA770L,8L}},{{11,-4L,0x41EAL,-3L},{9,9L,65535UL,-7L},{13,-10L,65533UL,1L},{18,0xC05AL,3UL,-2L},{3,1L,1UL,0x5346B7FDL}}},{{{31,0xA26FL,1UL,-2L},{22,0x310FL,0x9FE9L,0x54B42CA7L},{42,3L,0x5997L,0x6083ECD7L},{31,0xEAFDL,0UL,-9L},{18,-1L,0xB5B3L,0xFF2D55D3L}},{{35,0L,0x6599L,0L},{42,0x59CCL,1UL,0x737C25DAL},{35,0L,0x6599L,0L},{44,0x6F68L,65535UL,-7L},{41,4L,0UL,0xD90C2879L}},{{2,8L,0xFC83L,-2L},{33,0xC468L,9UL,0xFC87B302L},{24,1L,0x3A19L,0x56D68B9CL},{22,0x375AL,0x760AL,-8L},{24,6L,65535UL,0x1168E687L}},{{34,1L,0x682DL,0x6B4874BDL},{9,-6L,0UL,0x7A74CFD5L},{41,4L,0UL,0xD90C2879L},{40,0x8B66L,0xCD2BL,0x11D3B62AL},{12,0x76ABL,0x3E6AL,1L}},{{12,0x4406L,65535UL,0x2AE1B054L},{11,0x75ADL,0x045EL,0x451B5D95L},{2,0x99B7L,1UL,-1L},{34,0x4BDEL,6UL,-2L},{18,1L,65529UL,0x41A7DDF2L}}},{{{11,-4L,0x41EAL,-3L},{5,0x2B9BL,0x39F1L,-7L},{12,0x76ABL,0x3E6AL,1L},{6,0x5341L,65535UL,0L},{9,-6L,0UL,0x7A74CFD5L}},{{12,0x4406L,65535UL,0x2AE1B054L},{33,0xC468L,9UL,0xFC87B302L},{23,0x539EL,0x6F40L,0x2E0B307BL},{42,0xD4C1L,0xEDC4L,0x01C99F48L},{23,0x539EL,0x6F40L,0x2E0B307BL}},{{34,0xC407L,0UL,0x1E6C6A7DL},{34,0xC407L,0UL,0x1E6C6A7DL},{37,0xAD7DL,65526UL,-6L},{43,1L,1UL,-4L},{3,1L,1UL,0x5346B7FDL}},{{20,0xF385L,0x1945L,0xCBE952D2L},{8,0x589BL,65529UL,4L},{32,0xDB97L,0xA770L,8L},{15,1L,7UL,0x35F3850EL},{19,0xC372L,8UL,0x9B7F5435L}},{{41,4L,0UL,0xD90C2879L},{23,0xB1BCL,1UL,0x7C8AD55DL},{6,0x5341L,65535UL,0L},{5,0x2B9BL,0x39F1L,-7L},{3,-8L,0x59B5L,1L}}},{{{25,-1L,65535UL,3L},{8,0x589BL,65529UL,4L},{38,0x3A16L,0xF6E3L,0x92C773C3L},{22,0x310FL,0x9FE9L,0x54B42CA7L},{16,-6L,0xDC5EL,0xF8BD7A0FL}},{{22,-5L,0x8C20L,0x361CED51L},{34,0xC407L,0UL,0x1E6C6A7DL},{44,0x6F68L,65535UL,-7L},{18,0xC05AL,3UL,-2L},{4,0x9A20L,0x7CEEL,0xDE0CEE11L}},{{38,0x3A16L,0xF6E3L,0x92C773C3L},{33,0xC468L,9UL,0xFC87B302L},{16,0xACFCL,0x972DL,5L},{16,1L,0x9018L,-1L},{31,0xA26FL,1UL,-2L}},{{9,9L,65535UL,-7L},{5,0x2B9BL,0x39F1L,-7L},{23,0xB1BCL,1UL,0x7C8AD55DL},{34,0x950AL,65534UL,0x3F866D66L},{6,0x5341L,65535UL,0L}},{{38,0x7F40L,0x1A7DL,0x0A60FE93L},{0,0xA040L,65535UL,0L},{12,0x4406L,65535UL,0x2AE1B054L},{39,0x899DL,0x2363L,2L},{16,0xACFCL,0x972DL,5L}}},{{{3,1L,1UL,0x5346B7FDL},{35,0x3621L,1UL,0x49A4E49BL},{34,1L,0x682DL,0x6B4874BDL},{44,0x6F68L,65535UL,-7L},{2,0x2569L,0xF44CL,0xA7E671B3L}},{{38,0x7F40L,0x1A7DL,0x0A60FE93L},{29,0x56C0L,0UL,0xA2236089L},{2,8L,0xFC83L,-2L},{8,0x589BL,65529UL,4L},{42,-10L,3UL,0x41D14881L}},{{9,9L,65535UL,-7L},{5,0x611DL,1UL,-1L},{35,0L,0x6599L,0L},{11,-4L,0x41EAL,-3L},{34,0x950AL,65534UL,0x3F866D66L}},{{38,0x3A16L,0xF6E3L,0x92C773C3L},{10,0x695EL,7UL,0xE21AE28EL},{31,0xA26FL,1UL,-2L},{10,0x695EL,7UL,0xE21AE28EL},{38,0x3A16L,0xF6E3L,0x92C773C3L}},{{22,-5L,0x8C20L,0x361CED51L},{40,0x8B66L,0xCD2BL,0x11D3B62AL},{11,-4L,0x41EAL,-3L},{3,-8L,0x59B5L,1L},{34,0xC407L,0UL,0x1E6C6A7DL}}},{{{25,-1L,65535UL,3L},{6,-3L,0xA085L,-1L},{18,-1L,0xB5B3L,0xFF2D55D3L},{35,4L,0x9A2EL,0xC1CDF14EL},{23,0x2317L,0x37F7L,1L}},{{41,4L,0UL,0xD90C2879L},{2,0x2569L,0xF44CL,0xA7E671B3L},{13,-10L,65533UL,1L},{40,0x8B66L,0xCD2BL,0x11D3B62AL},{34,0xC407L,0UL,0x1E6C6A7DL}},{{20,0xF385L,0x1945L,0xCBE952D2L},{35,4L,0x9A2EL,0xC1CDF14EL},{29,1L,65533UL,0x52EC9A0CL},{30,1L,0xA5D8L,-1L},{38,0x3A16L,0xF6E3L,0x92C773C3L}},{{34,0xC407L,0UL,0x1E6C6A7DL},{44,0x6F68L,65535UL,-7L},{18,0xC05AL,3UL,-2L},{14,0L,1UL,1L},{41,4L,0UL,0xD90C2879L}},{{42,3L,0x5997L,0x6083ECD7L},{31,0xEAFDL,0UL,-9L},{18,-1L,0xB5B3L,0xFF2D55D3L},{11,0x75ADL,0x045EL,0x451B5D95L},{32,0xDB97L,0xA770L,8L}}},{{{34,0xC407L,0UL,0x1E6C6A7DL},{14,-1L,0x463FL,0x5419F12AL},{23,0xB1BCL,1UL,0x7C8AD55DL},{11,-4L,0x41EAL,-3L},{13,-10L,65533UL,1L}},{{23,0x539EL,0x6F40L,0x2E0B307BL},{39,0x00C3L,0x8A0FL,0L},{16,-6L,0xDC5EL,0xF8BD7A0FL},{16,1L,0x9018L,-1L},{23,0x2317L,0x37F7L,1L}},{{14,0L,1UL,1L},{3,1L,1UL,0x5346B7FDL},{41,4L,0UL,0xD90C2879L},{11,-4L,0x41EAL,-3L},{5,0x2B9BL,0x39F1L,-7L}},{{18,-1L,0xB5B3L,0xFF2D55D3L},{24,-2L,9UL,0xF79D74A7L},{23,0x539EL,0x6F40L,0x2E0B307BL},{11,0x75ADL,0x045EL,0x451B5D95L},{19,0xC372L,8UL,0x9B7F5435L}},{{40,0x8B66L,0xCD2BL,0x11D3B62AL},{5,0x2B9BL,0x39F1L,-7L},{40,0x5358L,8UL,-9L},{14,0L,1UL,1L},{14,0L,1UL,1L}}}};
static int g_119 = (-3L);
static int g_134 = 0x18C3DD0EL;
static short g_136 = 0xC6DAL;
static short g_138[7] = {0x96FAL,0x96FAL,0x96FAL,0x96FAL,0x96FAL,0x96FAL,0x96FAL};
static int g_139 = 0L;
static unsigned g_140 = 0x7FC6ADC0L;
static struct S2 *g_146 = (void*)0;
static unsigned g_153 = 0x2B0F9EBFL;
static char g_171 = 0x75L;
static struct S0 g_179 = {0x88447C76L,21088};
static struct S1 g_188 = {0x1A32069CL,23160,0,248,-3};
static short g_226 = 0x58BBL;
static char g_227 = 5L;
static unsigned char g_229 = 9UL;
static unsigned short **g_250 = (void*)0;
static struct S0 *g_287 = (void*)0;
static struct S0 **g_286 = &g_287;
static struct S3 g_300 = {34,0xADE4L,9UL,0x9AD38F8DL};
static int g_338 = 0x4B756C93L;
static unsigned char g_339 = 9UL;
static int g_364 = (-5L);
static unsigned g_365 = 4UL;
static short g_371 = 0x7B78L;
static unsigned g_372 = 0UL;
static unsigned short g_400 = 65528UL;
static struct S3 *g_406[3] = {&g_93[0][1][0],&g_93[0][1][0],&g_93[0][1][0]};
static struct S3 **g_405 = &g_406[0];
static unsigned *g_469 = &g_153;
static unsigned **g_468 = &g_469;
static short g_476 = 0xF3D4L;
static unsigned char g_478 = 0xA1L;
static unsigned g_484 = 0UL;
static int ***g_519 = (void*)0;
static struct S1 *g_566 = &g_188;
static struct S1 **g_565 = &g_566;
static short g_630[7] = {1L,1L,1L,1L,1L,1L,1L};
static unsigned g_631 = 18446744073709551606UL;
static int g_667 = (-2L);
static short g_674 = 0xD144L;
static unsigned short g_675 = 0x3859L;
static unsigned short g_698[10][1] = {{0UL},{0UL},{65526UL},{0UL},{0UL},{65526UL},{0UL},{0UL},{65526UL},{0UL}};
static unsigned g_707[3][8] = {{18446744073709551606UL,8UL,18446744073709551612UL,18446744073709551614UL,18446744073709551614UL,18446744073709551612UL,8UL,18446744073709551606UL},{3UL,0x0A3C338EL,18446744073709551612UL,0xCCC3F5A6L,6UL,3UL,6UL,0xCCC3F5A6L},{18446744073709551614UL,0x52C462A3L,18446744073709551614UL,0xB50C7779L,0xCCC3F5A6L,3UL,18446744073709551612UL,18446744073709551612UL}};
static char *g_741 = (void*)0;
static char **g_740 = &g_741;
static short g_794 = 1L;
static unsigned g_795 = 0x1D2903BEL;
static unsigned g_914 = 0x07B59C83L;
static short g_981[5] = {0x1374L,0x1374L,0x1374L,0x1374L,0x1374L};
static unsigned g_983 = 0xDBD0F898L;
static short *g_1069 = &g_138[5];
static short **g_1068 = &g_1069;
static unsigned char ***g_1099 = &g_87;
static unsigned char ****g_1098 = &g_1099;
static struct S2 g_1100 = {-353};
static unsigned g_1157 = 0x633429BCL;
static struct S1 g_1174[1][9] = {{{0x951104EBL,-4620,0,371,-2},{0x6A759EC6L,-12870,0,271,-4},{0x951104EBL,-4620,0,371,-2},{0x6A759EC6L,-12870,0,271,-4},{0x951104EBL,-4620,0,371,-2},{0x6A759EC6L,-12870,0,271,-4},{0x951104EBL,-4620,0,371,-2},{0x6A759EC6L,-12870,0,271,-4},{0x951104EBL,-4620,0,371,-2}}};
static int g_1186 = 0L;
static short g_1188 = 0x1216L;
static struct S2 *g_1195 = &g_48;
static struct S0 ***g_1207 = &g_286;
static unsigned g_1300 = 0x2AB0567DL;
static short g_1361[7][6][6] = {{{0x443BL,6L,0xF82BL,(-5L),0x32BEL,0x0912L},{1L,0x443BL,0xF82BL,0xFE49L,0xC725L,0x37BAL},{(-6L),0xFE49L,0x0912L,0xF82BL,2L,6L},{0xF82BL,2L,6L,0xAF21L,6L,2L},{(-7L),(-5L),6L,(-5L),0x37BAL,0xC725L},{0x37BAL,1L,0x9B1AL,0x6824L,0x0912L,0x32BEL}},{{0x9DD7L,1L,(-5L),0L,0x37BAL,0xC8ACL},{0xAF21L,(-5L),(-2L),0x37BAL,6L,0x9DD7L},{0x7F73L,2L,0x32BEL,0x32BEL,2L,0x7F73L},{1L,0xFE49L,0xAF21L,(-2L),0xC725L,0x443BL},{0x0912L,0x443BL,0x37BAL,0x4C0BL,0x32BEL,(-7L)},{0x0912L,6L,0x4C0BL,(-2L),0xC8ACL,(-5L)}},{{1L,0xC725L,(-6L),0x32BEL,0x9DD7L,(-5L)},{0x7F73L,0x37BAL,2L,0x37BAL,0x7F73L,(-2L)},{0xAF21L,0x6824L,0x7F73L,0L,0x443BL,(-2L)},{0x9DD7L,0x7F73L,(-5L),0x4C0BL,0x6824L,4L},{(-5L),0x37BAL,6L,1L,2L,(-5L)},{0x6824L,0x443BL,(-7L),0xC725L,1L,1L}},{{1L,0x9B1AL,0x9B1AL,1L,(-5L),2L},{0x9B1AL,0xFE49L,0x32BEL,0x34B6L,4L,0x6824L},{0xC8ACL,(-6L),(-5L),2L,4L,0xF82BL},{0xF82BL,0xFE49L,0xC725L,0x37BAL,(-5L),6L},{0x9DD7L,0x9B1AL,0x0912L,(-2L),1L,(-2L)},{0xFE49L,0x443BL,0xFE49L,0x9DD7L,2L,(-2L)}},{{0xAF21L,0x37BAL,1L,0x9B1AL,0x6824L,0x0912L},{(-2L),6L,(-2L),0x9B1AL,0xF82BL,0x9DD7L},{0xAF21L,0x4C0BL,(-6L),0x9DD7L,6L,(-7L)},{0xFE49L,(-5L),0L,(-2L),(-2L),0L},{0x9DD7L,0x9DD7L,6L,0x37BAL,(-2L),(-5L)},{0xF82BL,0L,1L,2L,0x0912L,6L}},{{0xC8ACL,0xF82BL,1L,0x34B6L,0x9DD7L,(-5L)},{0x9B1AL,0x34B6L,6L,6L,0xFE49L,6L},{6L,0xFE49L,6L,0x9B1AL,6L,0xFE49L},{0x34B6L,(-2L),0xC725L,(-5L),0xC8ACL,(-2L)},{0xC8ACL,2L,(-2L),0x443BL,0x7F73L,1L},{4L,2L,(-5L),(-6L),0xC8ACL,(-7L)}},{{0x9B1AL,(-2L),0x6824L,0xC8ACL,6L,4L},{0xAF21L,0xFE49L,1L,1L,0xFE49L,0xAF21L},{0L,0x4C0BL,0x9B1AL,(-5L),(-2L),0x0912L},{0x7F73L,0x0912L,0xC8ACL,0xF82BL,1L,0x34B6L},{0x7F73L,6L,0xF82BL,(-5L),(-7L),(-2L)},{0L,(-2L),0x9DD7L,1L,4L,(-5L)}}};
static unsigned short *g_1383[5][1][5] = {{{&g_300.f2,&g_300.f2,&g_93[3][2][0].f2,&g_300.f2,&g_300.f2}},{{&g_300.f2,&g_300.f2,&g_93[3][2][0].f2,&g_300.f2,&g_300.f2}},{{&g_300.f2,&g_300.f2,&g_93[3][2][0].f2,&g_300.f2,&g_300.f2}},{{&g_300.f2,&g_300.f2,&g_93[3][2][0].f2,&g_300.f2,&g_300.f2}},{{&g_300.f2,&g_300.f2,&g_93[3][2][0].f2,&g_300.f2,&g_300.f2}}};
static unsigned short **g_1382 = &g_1383[2][0][2];
static unsigned char g_1428 = 0xCFL;
static short g_1430 = 9L;
static unsigned g_1479[1][6] = {{0UL,0UL,0UL,0UL,0UL,0UL}};
static unsigned *g_1538 = &g_365;
static unsigned **g_1537 = &g_1538;
static int g_1561 = 0x4259B01EL;
static unsigned g_1562 = 0x0C8537B5L;
static short g_1597 = 0x5966L;
static int *g_1643 = &g_119;
static int g_1650 = 0xB1A4D70DL;
static unsigned g_1660 = 0xCF1BE319L;
static unsigned *g_1672 = &g_631;
static unsigned ***g_1684 = (void*)0;
static unsigned short g_1688[8] = {1UL,65526UL,65526UL,0xC1CAL,65526UL,65526UL,0xC1CAL,65526UL};
static struct S0 g_1701 = {0xE5628B36L,19281};
static struct S1 g_1733 = {0x1301062EL,11530,0,223,0};
static unsigned g_1751 = 1UL;
static short g_1782[9][2] = {{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L}};
static short g_1783 = 1L;
static unsigned g_1784 = 0x9A5AFE31L;
static char g_1796[4] = {(-5L),(-5L),(-5L),(-5L)};



static struct S0 func_1(void);
static int func_2(unsigned p_3, struct S1 p_4, short p_5, char p_6);
static unsigned short func_11(int p_12);
static int func_13(unsigned p_14, unsigned p_15, unsigned short p_16, unsigned short p_17, short p_18);
static unsigned func_19(struct S0 p_20, char p_21, struct S3 p_22, unsigned p_23);
static struct S0 func_24(unsigned p_25);
static unsigned func_28(char p_29, struct S3 p_30, int p_31);
static struct S3 func_32(unsigned char p_33, unsigned p_34, struct S2 p_35, int p_36);
static int func_39(struct S0 p_40, short p_41, struct S3 p_42);
static struct S0 func_43(int p_44, struct S2 p_45, int p_46, int p_47);
static struct S0 func_1(void)
{
    unsigned short l_26 = 0x2ABAL;
    struct S1 l_49 = {0UL,-7573,0,329,-4};
    struct S0 *l_92[5][3][8] = {{{&g_75[5],&g_75[7],(void*)0,&g_75[0],&g_75[9],&g_75[0],(void*)0,&g_75[7]},{&g_75[3],(void*)0,&g_75[3],&g_75[0],&g_75[3],&g_75[8],&g_75[8],&g_75[3]},{&g_75[3],&g_75[3],&g_75[3],&g_75[3],&g_75[3],&g_75[7],&g_75[8],&g_75[5]}},{{(void*)0,&g_75[3],&g_75[3],&g_75[8],&g_75[3],&g_75[3],(void*)0,&g_75[9]},{&g_75[3],&g_75[3],(void*)0,&g_75[9],&g_75[7],&g_75[7],&g_75[9],(void*)0},{&g_75[3],&g_75[3],&g_75[3],&g_75[3],&g_75[7],&g_75[8],&g_75[5],&g_75[8]}},{{&g_75[3],(void*)0,&g_75[3],(void*)0,&g_75[3],&g_75[0],&g_75[3],&g_75[8]},{(void*)0,&g_75[7],&g_75[5],&g_75[3],&g_75[3],&g_75[5],&g_75[7],(void*)0},{&g_75[3],&g_75[0],&g_75[5],&g_75[5],&g_75[9],&g_75[0],&g_75[9],&g_75[5]}},{{&g_75[3],&g_75[3],&g_75[3],&g_75[9],&g_75[5],&g_75[0],&g_75[3],&g_75[3]},{&g_75[3],&g_75[8],(void*)0,(void*)0,&g_75[8],&g_75[3],&g_75[5],&g_75[9]},{&g_75[3],&g_75[3],&g_75[7],&g_75[8],&g_75[5],&g_75[8],&g_75[7],&g_75[3]}},{{&g_75[3],&g_75[7],&g_75[0],&g_75[8],&g_75[9],&g_75[9],&g_75[9],&g_75[9]},{(void*)0,&g_75[9],&g_75[9],(void*)0,&g_75[3],&g_75[3],&g_75[9],&g_75[3]},{&g_75[7],(void*)0,&g_75[0],&g_75[9],&g_75[0],(void*)0,&g_75[7],&g_75[5]}}};
    struct S2 l_290 = {146};
    struct S3 l_352 = {23,0xCD34L,0xEA1EL,0xF7FB21DBL};
    short l_375 = 0xA518L;
    int *l_1304 = (void*)0;
    int *l_1305 = &g_119;
    struct S1 l_1325 = {0UL,12401,0,76,-1};
    unsigned char ***l_1328 = &g_84;
    char l_1360 = 7L;
    unsigned short **l_1384 = &g_1383[2][0][1];
    struct S3 ***l_1421 = &g_405;
    short l_1434[9] = {0x31D5L,7L,7L,0x31D5L,7L,7L,0x31D5L,7L,7L};
    int l_1517 = (-1L);
    unsigned l_1541 = 18446744073709551615UL;
    struct S2 *l_1548[8][9] = {{&l_290,&g_48,&g_48,&l_290,&g_48,&g_48,&l_290,&g_48,&g_48},{&g_48,&g_1100,&g_1100,&g_48,&g_1100,&g_1100,&g_48,&g_1100,&g_1100},{&l_290,&g_48,&g_48,&l_290,&g_48,&g_48,&l_290,&g_48,&g_48},{&g_48,&g_1100,&g_1100,&g_48,&g_1100,&g_1100,&g_1100,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_1100,&g_48,&g_48,&g_1100,&g_48,&g_48,&g_1100,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_1100,&g_48,&g_48,&g_1100,&g_48,&g_48,&g_1100,&g_48,&g_48}};
    unsigned l_1590 = 9UL;
    short **l_1602 = &g_1069;
    int l_1618 = (-8L);
    char l_1640 = 0xDBL;
    int l_1655 = 0x50DA6F11L;
    struct S3 l_1659 = {37,1L,0xF78AL,0xB4C1E1D0L};
    unsigned ***l_1685 = (void*)0;
    char l_1687[1][8] = {{0x3FL,0L,0L,0x3FL,0L,0L,0x3FL,0L}};
    unsigned char l_1691[9][8] = {{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L}};
    struct S2 *l_1708 = &l_290;
    struct S3 l_1807 = {4,-1L,4UL,0x88F20A8CL};
    struct S0 l_1812 = {-3L,30813};
    int i, j, k;
    if (((*l_1305) = func_2((((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u(func_11(func_13(func_19(func_24((l_26 , (g_27 | (func_28(l_26, func_32((safe_mul_func_int16_t_s_s(l_26, (l_26 <= (func_39((g_75[1] = func_43(l_26, g_48, (l_49 , l_49.f4), g_27)), g_27, g_93[3][2][0]) <= g_93[3][2][0].f3)))), l_49.f3, l_290, g_179.f0), l_49.f4) > 0UL)))), g_226, l_352, g_226), g_300.f3, l_49.f0, l_49.f4, l_352.f2)), l_290.f0)) , l_352.f0) == l_375) && l_49.f3), g_93[3][2][0].f0)) | 0x5CL) , g_139), l_49, l_375, l_49.f1)))
    {
        char l_1311 = 0L;
        unsigned char ***l_1327[3][9] = {{&g_87,&g_84,&g_87,&g_84,&g_84,&g_87,&g_84,&g_87,&g_84},{&g_84,&g_87,&g_87,&g_84,&g_84,&g_84,&g_87,&g_87,&g_84},{(void*)0,&g_84,(void*)0,&g_84,(void*)0,(void*)0,&g_84,(void*)0,&g_84}};
        struct S0 l_1362[1] = {{0xBC84DE9BL,2402}};
        struct S3 l_1374 = {37,0xA44AL,0xB2A4L,0xB1DEF238L};
        int l_1388 = 0x8A2875ECL;
        int l_1400 = 1L;
        int l_1429 = 0x8CCDCC3BL;
        char l_1432 = 0x7CL;
        unsigned l_1461 = 0x1C8877BFL;
        struct S2 l_1468 = {322};
        unsigned l_1482[1];
        unsigned char l_1507 = 0x8DL;
        int **l_1533 = &l_1304;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1482[i] = 0UL;
        for (g_1157 = 0; (g_1157 <= 5); g_1157 += 1)
        {
            struct S0 l_1306 = {0x917DD74BL,18086};
            char *l_1314 = &g_227;
            unsigned char *l_1326 = &g_74[2];
            struct S3 l_1343 = {6,0L,0x003CL,0xFB73BC4AL};
            int *l_1347 = &g_119;
            int l_1372 = 0x1A8D75AFL;
            unsigned l_1373 = 0xD4FFD412L;
            unsigned char l_1397 = 0UL;
            struct S2 l_1409 = {-559};
            struct S1 l_1431 = {1UL,-10268,0,54,-2};
            if ((l_1306 , (l_1306.f0 > (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((l_1311 | (safe_mod_func_int16_t_s_s((((*l_1314) = l_1306.f0) ^ (-4L)), ((safe_mul_func_int8_t_s_s((g_171 = l_1311), ((*l_1326) ^= ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((*g_1069), (((((safe_rshift_func_uint16_t_u_u((+(l_1325 , (&g_741 != (void*)0))), l_1306.f0)) , 0x010C8C8BL) , l_1306.f1) < l_1306.f1) ^ l_1306.f0))), 0xE2A7L)), l_1311)) | l_1311)))) , 0xDC29L)))), g_698[8][0])) , l_1327[2][1]) == l_1328), 0x4951FC13L)))))
            {
                unsigned l_1329 = 0x33B4B945L;
                l_1329--;
            }
            else
            {
                int l_1334 = 0L;
                unsigned l_1359 = 3UL;
                struct S0 l_1365 = {1L,12954};
                struct S1 *l_1379 = &g_188;
                unsigned l_1398 = 18446744073709551609UL;
                if ((safe_mul_func_int32_t_s_s(l_1334, ((**g_565) , ((safe_mul_func_int8_t_s_s(0x91L, g_139)) <= (*g_1069))))))
                {
                    return l_1306;
                }
                else
                {
                    unsigned char l_1346 = 252UL;
                    (*l_1305) ^= (safe_rshift_func_uint16_t_u_s(l_1346, (*g_1069)));
                    l_1347 = &g_134;
                    g_1361[4][5][3] &= (65527UL || (safe_add_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((*l_1347))) && func_11((safe_mod_func_int16_t_s_s((!(((((**g_565) , (*g_566)) , &l_352) != (void*)0) , (safe_add_func_uint8_t_u_u(func_13((((*g_1069) = ((func_32(((safe_sub_func_int8_t_s_s(l_1311, (safe_rshift_func_int8_t_s_u((*l_1305), 0)))) && (*l_1347)), l_1311, (*g_1195), (*l_1347)) , (**g_468)) < 0x41AF468FL)) <= l_1334), g_74[0], l_1334, l_1359, l_1334), l_1311)))), 0x0D7CL)))) < l_1360), 0x206BL)));
                }
                if (func_19(l_1362[0], (safe_mul_func_uint8_t_u_u(l_1373, (*l_1305))), l_1374, g_476))
                {
                    unsigned short *l_1387 = &g_698[2][0];
                    struct S0 l_1389 = {0x870083F7L,19032};
                    (*l_1305) ^= ((safe_sub_func_uint8_t_u_u(0xB5L, (--(*l_1326)))) > (((l_1379 == (*g_565)) ^ (((safe_sub_func_uint8_t_u_u((1L != 65530UL), (g_1382 == l_1384))) != (safe_lshift_func_uint16_t_u_u(((*l_1387) = 7UL), func_2(g_227, (**g_565), l_1388, g_630[2])))) > 0UL)) <= l_1365.f1));
                    return l_1389;
                }
                else
                {
                    unsigned char l_1392 = 253UL;
                    (*l_1305) |= ((l_290 , func_2((*l_1347), (**g_565), (safe_mod_func_int32_t_s_s(g_300.f0, (l_1392 ^ ((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((*g_1069) = (**g_1068)), 0L)) & ((4294967288UL >= l_1365.f0) <= l_1397)), l_1359)) , (**g_468)) , l_1398) != l_1392)))), l_1392)) < l_1365.f0);
                    if ((l_1362[0].f0 , (!((**g_468) > g_140))))
                    {
                        (*l_1305) |= 0x84AFFCC0L;
                    }
                    else
                    {
                        int **l_1399 = &g_51;
                        (*l_1399) = &g_338;
                        if ((*g_51))
                            continue;
                    }
                }
                for (g_171 = 0; (g_171 <= 2); g_171 += 1)
                {
                    unsigned l_1406 = 0x415B8ED3L;
                    int l_1407 = 0L;
                    (*l_1347) |= 4L;
                    if (l_1400)
                        continue;
                    for (g_338 = 2; (g_338 >= 0); g_338 -= 1)
                    {
                        unsigned *l_1405 = &g_484;
                        l_1406 |= (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*g_469) <= l_1359), (((*l_1347) = ((*l_1405) = l_1359)) >= 0UL))), 0));
                        (*l_1347) = (((l_1407 = 0x9BD56DDDL) != ((*g_469) &= 8UL)) > 1UL);
                    }
                }
            }
            for (g_400 = 0; (g_400 <= 2); g_400 += 1)
            {
                int l_1408 = 0xBCA2D057L;
                unsigned short l_1410 = 0xEE39L;
                unsigned l_1419[6];
                struct S3 ***l_1420 = &g_405;
                int l_1439 = 0x9D23F3C4L;
                int l_1447[2];
                unsigned char *l_1470 = &g_1428;
                int *l_1483 = &l_1388;
                int *l_1484[8][9][2] = {{{&l_1439,&g_338},{&l_1429,&g_52},{&l_1447[1],&l_1447[0]},{(void*)0,(void*)0},{&g_119,&g_119},{&g_52,&g_52},{&l_1439,&g_119},{&g_119,&l_1447[1]},{&l_1439,&l_1388}},{{&g_52,&l_1439},{&l_1388,&l_1447[1]},{&l_1388,&l_1439},{&g_52,&l_1388},{&l_1439,&l_1447[1]},{&g_119,&g_119},{&l_1439,&g_52},{&g_52,&g_119},{&g_119,(void*)0}},{{(void*)0,&l_1447[0]},{&l_1447[1],&g_52},{&l_1429,&g_338},{&l_1439,&l_1429},{&l_1439,&l_1447[0]},{&g_338,(void*)0},{&l_1447[0],&l_1447[1]},{&l_1447[1],&l_1447[1]},{&l_1447[0],(void*)0}},{{&g_338,&l_1447[0]},{&l_1439,&g_119},{&g_52,(void*)0},{&l_1429,&l_1439},{&g_119,&g_338},{&l_1447[1],&l_1429},{&l_1439,(void*)0},{&l_1447[0],&l_1447[0]},{(void*)0,&g_52}},{{(void*)0,&g_119},{&g_119,&g_119},{&l_1388,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{&l_1388,&g_119},{&g_119,&g_119},{(void*)0,&g_52},{(void*)0,&l_1447[0]}},{{&l_1447[0],(void*)0},{&l_1439,&l_1429},{&l_1447[1],&g_338},{&g_119,&l_1439},{&l_1429,(void*)0},{&g_52,&g_119},{&l_1439,&l_1447[0]},{&g_338,(void*)0},{&l_1447[0],&l_1447[1]}},{{&l_1447[1],&l_1447[1]},{&l_1447[0],(void*)0},{&g_338,&l_1447[0]},{&l_1439,&g_119},{&g_52,(void*)0},{&l_1429,&l_1439},{&g_119,&g_338},{&l_1447[1],&l_1429},{&l_1439,(void*)0}},{{&l_1447[0],&l_1447[0]},{(void*)0,&g_52},{(void*)0,&g_119},{&g_119,&g_119},{&l_1388,&g_119},{(void*)0,&g_119},{(void*)0,&g_52},{(void*)0,&l_1447[1]},{&g_52,&l_1429}}};
                unsigned l_1485 = 0xEDFB554FL;
                struct S0 l_1494 = {0x1E421CA0L,3239};
                struct S2 l_1498 = {608};
                unsigned short l_1500 = 0x312BL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1419[i] = 18446744073709551614UL;
                for (i = 0; i < 2; i++)
                    l_1447[i] = 0xC3FEE3F1L;
                l_1374 = func_32(l_1408, l_1374.f0, (((*g_1069) >= l_1362[0].f0) , l_1409), l_1410);
                if (((!((((safe_sub_func_uint16_t_u_u(l_1362[0].f0, ((*l_1347) || (safe_mul_func_uint8_t_u_u(func_2(l_1419[0], l_1431, (*l_1305), g_365), 0xD0L))))) >= 0x2CB3117FL) & l_1432) ^ (*l_1347))) , l_1419[0]))
                {
                    unsigned char l_1433 = 0x3FL;
                    int l_1435 = 0xE2F5E7C6L;
                    (*l_1305) &= (((*g_1069) = ((l_1433 ^ l_1362[0].f0) != (**g_468))) <= l_1434[0]);
                    for (g_478 = 1; (g_478 <= 5); g_478 += 1)
                    {
                        l_1435 ^= (*l_1347);
                        if (g_226)
                            break;
                    }
                }
                else
                {
                    unsigned short l_1450[9][3][6] = {{{65532UL,0xD63FL,65528UL,0x6FFBL,0x486DL,0xA825L},{65535UL,65535UL,0x8265L,65535UL,65535UL,0xA047L},{0x2FF2L,0x486DL,0xF545L,0x8265L,0xA047L,65535UL}},{{6UL,65535UL,0x6DBCL,0x486DL,0xD63FL,65535UL},{0UL,0x790FL,0xF545L,65532UL,1UL,0xA047L},{0xD63FL,0x6FBAL,0x8265L,0x056CL,0UL,0xA825L}},{{0xA825L,0UL,65528UL,65529UL,0x3E2DL,65535UL},{0x77E7L,0xF545L,1UL,0x8AC0L,0x8807L,65535UL},{0x2C72L,0UL,6UL,65531UL,65528UL,65528UL}},{{0UL,65532UL,65532UL,0UL,0x8AC0L,0x6FBAL},{65535UL,0UL,65535UL,0x3DD9L,0UL,0xD308L},{0x6FBAL,0xA825L,0x5CE8L,0x3E2DL,0UL,0x8265L}},{{0xD3D7L,0UL,0x790FL,65528UL,0x8AC0L,1UL},{0xCCE1L,65532UL,0xD3D7L,0xAEA2L,65528UL,65534UL},{65529UL,0UL,0x6FFBL,0x790FL,0x8807L,0x5CE8L}},{{0x77E7L,0xD308L,0x46D2L,65535UL,0UL,0xA047L},{0x6DBCL,0xAEA2L,0x8807L,0x77E7L,7UL,0x77E7L},{65534UL,0x056CL,65534UL,0UL,0xA825L,0xD308L}},{{0x3DD9L,0x6FBAL,65535UL,0xF545L,65535UL,0x954CL},{65535UL,65532UL,0x056CL,0xF545L,0x8807L,0UL},{0x3DD9L,0xD3D7L,0UL,0UL,0UL,0x46D2L}},{{65534UL,6UL,65529UL,0x77E7L,0xD3D7L,65535UL},{0x6DBCL,65535UL,0x486DL,65535UL,0xA047L,0x5CE8L},{0x77E7L,1UL,0x2FF2L,0x6FBAL,0x8AC0L,0UL}},{{1UL,0x6DBCL,0x8AC0L,0x2C72L,0x2C72L,0x8AC0L},{0x6FFBL,0x6FFBL,0xF545L,65527UL,0xD63FL,65535UL},{0xCCE1L,65528UL,65535UL,0UL,65534UL,0xF545L}}};
                    unsigned char *l_1469 = (void*)0;
                    struct S3 l_1471 = {4,0x191EL,0UL,8L};
                    int *l_1472 = (void*)0;
                    int *l_1473 = &g_52;
                    int *l_1474 = &l_1388;
                    int *l_1475 = &g_134;
                    int *l_1476 = &l_1439;
                    int *l_1477 = (void*)0;
                    int *l_1478[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_1478[i] = &g_119;
                    if (l_1374.f0)
                    {
                        int *l_1436 = &l_1388;
                        int *l_1437 = &g_119;
                        int *l_1438 = &g_52;
                        int *l_1440 = &l_1429;
                        int *l_1441 = &g_52;
                        int *l_1442 = &l_1429;
                        int *l_1443 = (void*)0;
                        int *l_1444 = &l_1439;
                        int *l_1445 = &g_134;
                        int l_1446[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                        int *l_1448 = &l_1439;
                        int *l_1449[4] = {&l_1447[1],&l_1447[1],&l_1447[1],&l_1447[1]};
                        int i, j;
                        ++l_1450[8][0][0];
                        if ((*l_1437))
                            continue;
                        (*l_1445) ^= g_300.f3;
                        return l_1362[0];
                    }
                    else
                    {
                        if (g_1188)
                            break;
                    }
                    (*l_1347) |= l_1450[8][0][0];
                    ++g_1479[0][2];
                    if (l_1482[0])
                        continue;
                }
                l_1485--;
                for (l_1311 = 2; (l_1311 >= 0); l_1311 -= 1)
                {
                    unsigned short l_1490 = 1UL;
                    unsigned short *l_1497 = &l_1343.f2;
                    unsigned short *l_1499 = &g_698[2][0];
                    int i, j, k;
                    (*l_1483) |= (((safe_sub_func_int16_t_s_s(((*g_1069) |= (l_1461 ^ (l_1490 & (safe_unary_minus_func_uint16_t_u((*l_1305)))))), g_93[(g_1157 + 1)][(l_1311 + 1)][(g_400 + 2)].f3)) , (*g_565)) == (void*)0);
                }
            }
        }
        for (g_372 = 0; (g_372 <= 5); g_372 += 1)
        {
            int l_1510 = 0xC6ADECC6L;
            int l_1512 = 1L;
            int l_1516 = 6L;
            int i;
            for (l_49.f0 = 0; (l_49.f0 <= 0); l_49.f0 += 1)
            {
                unsigned short l_1511 = 0x0DC5L;
                unsigned char l_1518 = 0x15L;
                unsigned char l_1542[10][4] = {{0xB2L,0x5AL,0UL,0xB5L},{0xF5L,254UL,0xF5L,0UL},{1UL,1UL,0x67L,1UL},{1UL,0xE4L,0x5AL,0xB5L},{0xE4L,1UL,0x5AL,0x5AL},{1UL,1UL,1UL,0xB2L},{254UL,0UL,0UL,0xB5L},{0UL,0xB5L,0xE4L,0UL},{1UL,0xB5L,247UL,0xB5L},{0xB5L,0UL,0x5AL,0xB2L}};
                int i, j;
                for (l_1360 = 0; (l_1360 <= 5); l_1360 += 1)
                {
                    int **l_1501 = (void*)0;
                    int **l_1502 = &l_1304;
                    int *l_1513 = &l_1429;
                    unsigned **l_1536 = &g_469;
                    int i, j, k;
                    (*l_1502) = &g_119;
                    (*l_1513) ^= ((((safe_lshift_func_int8_t_s_u((((g_1361[(l_1360 + 1)][l_1360][l_1360] , (l_1512 <= 0xDCEFL)) | l_1511) & (**g_1068)), 0)) ^ (*l_1304)) , 253UL) < (**l_1502));
                    if ((**l_1502))
                    {
                        int *l_1514 = (void*)0;
                        int *l_1515[8] = {&l_1429,&l_1429,&l_1429,&l_1429,&l_1429,&l_1429,&l_1429,&l_1429};
                        int i;
                        l_1518++;
                    }
                    else
                    {
                        int ***l_1534 = &l_1501;
                        unsigned **l_1535 = &g_469;
                        unsigned l_1539 = 0x8490BC0CL;
                        char *l_1540[8][7] = {{&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360,&l_1432},{&l_1360,&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360},{&l_1432,&l_1432,&g_227,&l_1432,&l_1432,&g_227,&l_1432},{&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360,&l_1432},{&l_1360,&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360},{&l_1432,&l_1432,&g_227,&l_1432,&l_1432,&g_227,&l_1432},{&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360,&l_1432},{&l_1360,&l_1432,&l_1360,&l_1360,&l_1432,&l_1360,&l_1360}};
                        struct S0 l_1543 = {0L,7215};
                        int i, j;
                        (*l_1513) = ((+(safe_mul_func_uint8_t_u_u((l_1362[0].f0 , ((safe_mul_func_uint8_t_u_u(((*l_1304) = (g_1174[l_49.f0][(l_1360 + 2)].f4 &= ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((l_1311 <= ((((safe_sub_func_uint32_t_u_u((**g_468), (l_1541 , l_1516))) || 0x96171B83L) < l_1542[8][3]) > (**l_1533))), 0)) | 65527UL) >= (**g_1068)), 0xF206L)) || (*l_1304)))), l_1512)) , 0x39L)), 0UL))) < 255UL);
                        (**g_1207) = (**g_1207);
                        if ((*l_1305))
                            break;
                        return l_1543;
                    }
                    for (g_674 = 9; (g_674 >= 0); g_674 -= 1)
                    {
                        (*l_1305) = func_2(((((0x0E33F842L || 0UL) > (l_1510 || 0x4CCAL)) , ((**l_1502) = (l_1542[5][2] & 0x16L))) || 0xA8142992L), (*g_566), (*g_1069), g_188.f2);
                    }
                }
            }
            (*g_1195) = (*g_1195);
            return g_75[(g_372 + 4)];
        }
        (*g_565) = (void*)0;
        (*l_1305) ^= l_1482[0];
    }
    else
    {
        return g_75[6];
    }
    for (g_229 = 29; (g_229 < 20); g_229 = safe_sub_func_int32_t_s_s(g_229, 9))
    {
        unsigned l_1549 = 4294967286UL;
        int *l_1578[10] = {&g_338,(void*)0,&g_338,&g_338,&g_338,&g_338,&g_52,&g_338,&g_338,&g_338};
        short **l_1606 = &g_1069;
        struct S1 l_1619 = {0xC48F5792L,-10628,0,388,-1};
        struct S0 l_1644 = {-1L,9228};
        struct S3 l_1654 = {15,1L,1UL,7L};
        unsigned l_1658[7] = {0x1F7C378EL,0x1F7C378EL,0x1F7C378EL,0x1F7C378EL,0x1F7C378EL,0x1F7C378EL,0x1F7C378EL};
        unsigned *l_1673 = (void*)0;
        short l_1686[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1686[i] = 0xAFBFL;
        for (g_1300 = 0; (g_1300 == 44); ++g_1300)
        {
            int *l_1550 = &g_119;
            int l_1559 = 9L;
            int l_1560 = 0xDC865233L;
            struct S0 l_1595 = {0xA4597365L,14333};
            unsigned short l_1625 = 0xE2DBL;
            struct S1 *l_1631 = &l_1619;
            struct S0 ****l_1637[6] = {&g_1207,&g_1207,&g_1207,&g_1207,&g_1207,&g_1207};
            struct S3 l_1679 = {41,1L,0xAEA4L,0L};
            int i;
            g_1195 = l_1548[6][8];
            if ((g_119 &= (l_1549 | 0x6040064FL)))
            {
                int **l_1551 = &g_51;
                struct S3 **l_1589 = &g_406[0];
                int l_1594[2];
                int l_1599 = (-1L);
                unsigned short l_1617 = 65531UL;
                struct S2 *l_1621 = &g_1100;
                int l_1641 = 1L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1594[i] = (-1L);
                (*l_1551) = l_1550;
                if ((safe_rshift_func_uint8_t_u_s(((**l_1551) & ((*g_1069) & 0L)), l_1549)))
                {
                    int *l_1554 = &l_1517;
                    int *l_1555 = (void*)0;
                    int *l_1556 = &g_52;
                    int *l_1557 = &g_52;
                    int *l_1558[1][9][2];
                    unsigned short *l_1567 = &g_675;
                    int *l_1575 = &g_139;
                    int **l_1574 = &l_1575;
                    int *l_1577[2][8];
                    int **l_1576 = &l_1577[0][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1558[i][j][k] = &g_52;
                        }
                    }
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_1577[i][j] = &g_139;
                    }
                    g_1562--;
                    (*l_1551) = (((**l_1551) , ((safe_mul_func_uint16_t_u_u(((**l_1551) , ((*l_1567)--)), ((((*l_1554) != (!((func_11((safe_mod_func_int8_t_s_s(((*g_1195) , g_171), (safe_lshift_func_int8_t_s_u(((&g_286 == &g_286) , (((*l_1574) = (void*)0) == ((*l_1576) = &g_139))), (**l_1551)))))) > (*l_1550)) <= (*l_1550)))) , 5UL) , (*l_1550)))) < (**g_1068))) , l_1578[3]);
                    for (g_1561 = 0; g_1561 < 3; g_1561 += 1)
                    {
                        g_406[g_1561] = &g_300;
                    }
                }
                else
                {
                    short l_1591[6][9] = {{0x770EL,(-10L),(-1L),0L,0L,0xC94EL,7L,(-1L),7L},{(-10L),0xD4AFL,0x203CL,0x203CL,0xD4AFL,(-10L),(-1L),(-1L),0x728BL},{0xC94EL,0L,0L,(-1L),(-10L),0x770EL,0xE561L,(-10L),(-1L)},{0L,(-1L),(-1L),7L,2L,0L,(-1L),0L,2L},{(-1L),(-10L),(-10L),(-1L),0x4CCCL,0L,7L,(-10L),(-1L)},{0xA10AL,7L,0x728BL,2L,0L,0x770EL,0L,0x728BL,(-10L)}};
                    struct S3 l_1596 = {0,0x5275L,0xAD47L,0xC49DF6AAL};
                    unsigned short *l_1598 = &l_26;
                    unsigned char *l_1600 = (void*)0;
                    unsigned char *l_1601[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int l_1623[9][3][9] = {{{0x3B91A31DL,0x1B758C4CL,0x5A85A0BEL,0x727ECAECL,0x3B91A31DL,(-8L),0x3B91A31DL,0x727ECAECL,0x5A85A0BEL},{3L,0x77A257D6L,0x52DEB41CL,(-8L),0x77A257D6L,0x10D21B93L,0xEA0FA13DL,0xEA0FA13DL,0x10D21B93L},{1L,0x727ECAECL,3L,0x727ECAECL,1L,0xE35E8681L,0L,0x727ECAECL,0x20610D18L}},{{0x77A257D6L,(-8L),0x52DEB41CL,0x77A257D6L,3L,0xC9B79806L,0xEA0FA13DL,3L,9L},{0x3B91A31DL,0x727ECAECL,0x5A85A0BEL,0x1B758C4CL,0x3B91A31DL,0xE35E8681L,0x3B91A31DL,0x1B758C4CL,0x5A85A0BEL},{0x77A257D6L,0x77A257D6L,0xC9B79806L,(-8L),3L,0x10D21B93L,(-8L),0xEA0FA13DL,9L}},{{1L,0x1B758C4CL,3L,0x1B758C4CL,1L,(-8L),0L,0x1B758C4CL,0x20610D18L},{3L,(-8L),0xC9B79806L,0x77A257D6L,0x77A257D6L,0xC9B79806L,(-8L),3L,0x10D21B93L},{0x3B91A31DL,0x1B758C4CL,0x5A85A0BEL,0x727ECAECL,0x3B91A31DL,(-8L),0x3B91A31DL,0x727ECAECL,0x5A85A0BEL}},{{3L,0x77A257D6L,0x52DEB41CL,(-8L),0x77A257D6L,0x10D21B93L,0xEA0FA13DL,0xEA0FA13DL,0x10D21B93L},{1L,0x727ECAECL,3L,0x727ECAECL,1L,0xE35E8681L,0L,0x727ECAECL,0x20610D18L},{0x77A257D6L,(-8L),0x52DEB41CL,0x77A257D6L,3L,0xC9B79806L,0xEA0FA13DL,3L,0x77A257D6L}},{{0xD8321F91L,0xFD756F36L,0x3B91A31DL,9L,0xD8321F91L,0x727ECAECL,0xD8321F91L,9L,0x3B91A31DL},{1L,1L,0xEA0FA13DL,7L,(-1L),3L,7L,0xCB5FDF16L,0x77A257D6L},{1L,9L,0L,9L,1L,0x1B758C4CL,7L,9L,1L}},{{(-1L),7L,0xEA0FA13DL,1L,1L,0xEA0FA13DL,7L,(-1L),3L},{0xD8321F91L,9L,0x3B91A31DL,0xFD756F36L,0xD8321F91L,0x1B758C4CL,0xD8321F91L,0xFD756F36L,0x3B91A31DL},{(-1L),1L,(-8L),7L,1L,3L,0xCB5FDF16L,0xCB5FDF16L,3L}},{{1L,0xFD756F36L,0L,0xFD756F36L,1L,0x727ECAECL,7L,0xFD756F36L,1L},{1L,7L,(-8L),1L,(-1L),0xEA0FA13DL,0xCB5FDF16L,(-1L),0x77A257D6L},{0xD8321F91L,0xFD756F36L,0x3B91A31DL,9L,0xD8321F91L,0x727ECAECL,0xD8321F91L,9L,0x3B91A31DL}},{{1L,1L,0xEA0FA13DL,7L,(-1L),3L,7L,0xCB5FDF16L,0x77A257D6L},{1L,9L,0L,9L,1L,0x1B758C4CL,7L,9L,1L},{(-1L),7L,0xEA0FA13DL,1L,1L,0xEA0FA13DL,7L,(-1L),3L}},{{0xD8321F91L,9L,0x3B91A31DL,0xFD756F36L,0xD8321F91L,0x1B758C4CL,0xD8321F91L,0xFD756F36L,0x3B91A31DL},{(-1L),1L,(-8L),7L,1L,3L,0xCB5FDF16L,0xCB5FDF16L,3L},{1L,0xFD756F36L,0L,0xFD756F36L,1L,0x727ECAECL,7L,0xFD756F36L,1L}}};
                    struct S1 *l_1632 = &g_188;
                    struct S0 ****l_1639 = &g_1207;
                    int i, j, k;
                    if ((g_48.f0 ^= (safe_mod_func_int32_t_s_s(((((**l_1551) = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((**l_1551), (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_1550) > (((**g_1068) &= (((*l_1421) = l_1589) == (l_1590 , &g_406[1]))) ^ (l_1591[3][0] , ((**l_1551) >= (l_1594[1] <= ((l_1599 = (((*l_1598) = func_19(l_1595, g_698[2][0], l_1596, g_1597)) ^ l_1596.f0)) , (*l_1550))))))), 4294967295UL)), 0x3631L)))), l_1591[2][3]))) & 1UL) && 0x8F8D3B68L), 4294967289UL))))
                    {
                        short ***l_1603 = &l_1602;
                        short ***l_1604 = (void*)0;
                        short ***l_1605[4] = {&g_1068,&g_1068,&g_1068,&g_1068};
                        unsigned short *l_1609 = &g_698[4][0];
                        int l_1614[4][9][7] = {{{0x7B95BC1FL,0xB0A43C6CL,(-9L),0x319457F6L,0xF71D0D8DL,0xB0A43C6CL,0x07F3F498L},{0xA0EB58A6L,0L,0x434FEA92L,(-1L),0x434FEA92L,0L,0xA0EB58A6L},{0x7B95BC1FL,(-10L),(-9L),1L,0xF71D0D8DL,(-10L),0x07F3F498L},{6L,0L,0x64D9FF8FL,(-1L),0x64D9FF8FL,0L,6L},{0x7B95BC1FL,0xB0A43C6CL,(-9L),0x319457F6L,0xF71D0D8DL,0xB0A43C6CL,0x07F3F498L},{0xA0EB58A6L,0L,0x434FEA92L,(-1L),0x434FEA92L,0L,0xA0EB58A6L},{0x7B95BC1FL,(-10L),(-9L),1L,0xF71D0D8DL,(-10L),0x07F3F498L},{6L,(-1L),(-10L),0xD95BC94CL,(-10L),(-1L),1L},{0xCEBB2494L,1L,0xB0A43C6CL,0xD7451AB0L,(-10L),1L,1L}},{{4L,(-1L),8L,0xD95BC94CL,8L,(-1L),4L},{0xCEBB2494L,0x319457F6L,0xB0A43C6CL,(-8L),(-10L),0x319457F6L,1L},{1L,(-1L),(-10L),0xD95BC94CL,(-10L),(-1L),1L},{0xCEBB2494L,1L,0xB0A43C6CL,0xD7451AB0L,(-10L),1L,1L},{4L,(-1L),8L,0xD95BC94CL,8L,(-1L),4L},{0xCEBB2494L,0x319457F6L,0xB0A43C6CL,(-8L),(-10L),0x319457F6L,1L},{1L,(-1L),(-10L),0xD95BC94CL,(-10L),(-1L),1L},{0xCEBB2494L,1L,0xB0A43C6CL,0xD7451AB0L,(-10L),1L,1L},{4L,(-1L),8L,0xD95BC94CL,8L,(-1L),4L}},{{0xCEBB2494L,0x319457F6L,0xB0A43C6CL,(-8L),(-10L),0x319457F6L,1L},{1L,(-1L),(-10L),0xD95BC94CL,(-10L),(-1L),1L},{0xCEBB2494L,1L,0xB0A43C6CL,0xD7451AB0L,(-10L),1L,1L},{0x9B5DC528L,0x86B83794L,0xC6FBEBD7L,0x85CBA248L,0xC6FBEBD7L,0x86B83794L,0x9B5DC528L},{0x319457F6L,0x7B95BC1FL,1L,1L,0x751F4E1CL,0x7B95BC1FL,1L},{0L,0x86B83794L,(-1L),0x85CBA248L,(-1L),0x86B83794L,0L},{0x319457F6L,0x07F3F498L,1L,0xCEBB2494L,0x751F4E1CL,0x07F3F498L,1L},{0x9B5DC528L,0x86B83794L,0xC6FBEBD7L,0x85CBA248L,0xC6FBEBD7L,0x86B83794L,0x9B5DC528L},{0x319457F6L,0x7B95BC1FL,1L,1L,0x751F4E1CL,0x7B95BC1FL,1L}},{{0L,0x86B83794L,(-1L),0x85CBA248L,(-1L),0x86B83794L,0L},{0x319457F6L,0x07F3F498L,1L,0xCEBB2494L,0x751F4E1CL,0x07F3F498L,1L},{0x9B5DC528L,0x86B83794L,0xC6FBEBD7L,0x85CBA248L,0xC6FBEBD7L,0x86B83794L,0x9B5DC528L},{0x319457F6L,0x7B95BC1FL,1L,1L,0x751F4E1CL,0x7B95BC1FL,1L},{0L,0x86B83794L,(-1L),0x85CBA248L,(-1L),0x86B83794L,0L},{0x319457F6L,0x07F3F498L,1L,0xCEBB2494L,0x751F4E1CL,0x07F3F498L,1L},{0x9B5DC528L,0x86B83794L,0xC6FBEBD7L,0x85CBA248L,0xC6FBEBD7L,0x86B83794L,0x9B5DC528L},{0x319457F6L,0x7B95BC1FL,1L,(-9L),0x7B95BC1FL,0xCEBB2494L,(-8L)},{0xCEA9E07FL,0x85CBA248L,6L,(-1L),6L,0x85CBA248L,0xCEA9E07FL}}};
                        struct S3 l_1620[4] = {{11,0xF317L,1UL,0x7F068D36L},{11,0xF317L,1UL,0x7F068D36L},{11,0xF317L,1UL,0x7F068D36L},{11,0xF317L,1UL,0x7F068D36L}};
                        int *l_1622[10] = {&g_139,&g_93[3][2][0].f3,&g_139,&l_1596.f3,&l_1596.f3,&g_139,&g_93[3][2][0].f3,&g_139,&l_1596.f3,&l_1596.f3};
                        struct S2 **l_1624 = &g_1195;
                        int i, j, k;
                        (*l_1624) = ((l_1623[3][0][0] ^= ((((*l_1603) = l_1602) == (l_1606 = &g_1069)) == func_11(((((((((*g_1069) , (l_1596.f1 | ((safe_rshift_func_uint16_t_u_s(((*l_1609) |= ((*l_1598) = 0xCA83L)), 1)) <= l_1620[1].f1))) , (void*)0) != l_1621) < (*l_1550)) && (*g_469)) , (*l_1305)) , (**l_1551))))) , &g_1100);
                        return l_1595;
                    }
                    else
                    {
                        struct S2 l_1630 = {-394};
                        struct S0 *****l_1638[7] = {&l_1637[4],&l_1637[4],&l_1637[3],&l_1637[4],&l_1637[4],&l_1637[3],&l_1637[4]};
                        int l_1642[4][6][8] = {{{0L,0L,0x2CE92143L,0x0D9C46C8L,0x2CE92143L,0L,0L,0x34562C74L},{0xA3FD8918L,0x1AF0EE50L,0x34562C74L,0L,(-9L),0L,0x50B82D5CL,0xD745F579L},{0xD745F579L,0x798ED4A7L,0x0D9C46C8L,1L,(-9L),(-9L),1L,0x0D9C46C8L},{0xA3FD8918L,0xA3FD8918L,0xCCF9041FL,0xD745F579L,0x2CE92143L,0L,0x0D9C46C8L,0x9F361B55L},{0L,0xA01B1D5FL,0xA3FD8918L,0x2CE92143L,1L,0x9F361B55L,0x1AF0EE50L,0x9F361B55L},{0xA01B1D5FL,0xD745F579L,(-9L),0xD745F579L,0xA01B1D5FL,1L,0xCCF9041FL,0x0D9C46C8L}},{{(-9L),0x50B82D5CL,0x798ED4A7L,1L,1L,0x2CE92143L,0x34562C74L,0xD745F579L},{0x34562C74L,0xCCF9041FL,0x798ED4A7L,0L,0L,0x798ED4A7L,0xCCF9041FL,0L},{0x0D9C46C8L,0xD5F7AC9EL,0x798ED4A7L,0x9F361B55L,0x2CE92143L,0x1AF0EE50L,0L,0x50B82D5CL},{0xA01B1D5FL,0xA3FD8918L,0x2CE92143L,1L,0x9F361B55L,0x1AF0EE50L,0x9F361B55L,1L},{1L,0xD5F7AC9EL,1L,0x798ED4A7L,0x1AF0EE50L,0x50B82D5CL,0xA3FD8918L,0x0D9C46C8L},{1L,1L,0x9F361B55L,0L,0xA01B1D5FL,(-9L),0x1AF0EE50L,0x1AF0EE50L}},{{1L,0x1AF0EE50L,0L,0L,0x1AF0EE50L,1L,0xD5F7AC9EL,0xCCF9041FL},{1L,1L,(-9L),0xD5F7AC9EL,0x9F361B55L,0L,0x0D9C46C8L,0x34562C74L},{0xA01B1D5FL,0xCCF9041FL,0L,0xD5F7AC9EL,0x2CE92143L,0xD5F7AC9EL,0L,0xCCF9041FL},{0x0D9C46C8L,0x2CE92143L,0L,0L,0x34562C74L,0x798ED4A7L,0xA01B1D5FL,0x1AF0EE50L},{0L,0x50B82D5CL,0xCCF9041FL,0L,0x0D9C46C8L,0xA01B1D5FL,0xA01B1D5FL,0x0D9C46C8L},{0x798ED4A7L,0L,0L,0x798ED4A7L,0xCCF9041FL,0x34562C74L,0L,1L}},{{0xCCF9041FL,0x34562C74L,0L,1L,0xA3FD8918L,1L,0x0D9C46C8L,0x50B82D5CL},{0xD5F7AC9EL,0x34562C74L,(-9L),0x9F361B55L,(-9L),0x34562C74L,0xD5F7AC9EL,(-9L)},{0L,0xA3FD8918L,(-9L),0x2CE92143L,0xCCF9041FL,0xD5F7AC9EL,1L,0x1AF0EE50L},{0x1AF0EE50L,1L,0x34562C74L,0x9F361B55L,0xCCF9041FL,0xCCF9041FL,0x9F361B55L,0x34562C74L},{0L,0L,1L,0x1AF0EE50L,0xA01B1D5FL,0x798ED4A7L,0x34562C74L,0L},{0x798ED4A7L,0xD745F579L,0L,0xA01B1D5FL,0x9F361B55L,0L,0xA3FD8918L,0L}}};
                        int i, j, k;
                        l_1625++;
                        (**l_1589) = (**g_405);
                        l_1642[2][2][6] ^= ((*l_1305) |= ((!((safe_sub_func_uint8_t_u_u(0x34L, l_1591[3][0])) == (l_1630 , l_1623[3][0][0]))) < ((l_1631 == ((*g_565) = l_1632)) >= (l_1630.f0 == ((0x1EA2L == (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((((((l_1637[4] = l_1637[3]) != l_1639) > l_1630.f0) && l_1640) , (*g_1069)), 2)) , l_1641), l_1596.f1))) && 0xDBL)))));
                        l_1305 = &g_134;
                    }
                    (*l_1551) = g_1643;
                    (*l_1305) ^= (*g_51);
                    if ((**l_1551))
                        continue;
                }
            }
            else
            {
                int l_1653 = 0xEA732CD0L;
                unsigned char *l_1656 = (void*)0;
                unsigned char *l_1657 = &g_74[1];
                (*g_1643) = (func_19(l_1644, ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s(((**l_1602) = (safe_mul_func_uint8_t_u_u(g_1650, (((((**g_468) && (safe_lshift_func_int8_t_s_u((*l_1550), (l_1560 = ((*l_1657) = ((*l_1305) && ((0xE53FL >= (*l_1550)) != l_1653))))))) < (*g_1069)) , l_1658[5]) != l_1653)))), g_1479[0][2])))) > 9L), l_1659, (*l_1550)) , (*g_1643));
                g_1660--;
            }
            if (((*l_1305) == 0xE65DDDA7L))
            {
                struct S0 l_1665 = {0xE1873C2EL,23435};
                unsigned *l_1671 = &g_1479[0][2];
                unsigned **l_1670[6][7][3] = {{{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,(void*)0,&l_1671},{&l_1671,(void*)0,&l_1671},{(void*)0,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671}},{{&l_1671,(void*)0,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,(void*)0,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671}},{{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{(void*)0,&l_1671,&l_1671},{&l_1671,&l_1671,(void*)0},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671}},{{&l_1671,(void*)0,(void*)0},{&l_1671,&l_1671,&l_1671},{(void*)0,(void*)0,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,(void*)0},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671}},{{(void*)0,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{(void*)0,&l_1671,&l_1671},{&l_1671,&l_1671,(void*)0},{&l_1671,&l_1671,&l_1671}},{{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{(void*)0,&l_1671,(void*)0},{&l_1671,&l_1671,(void*)0},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,&l_1671},{&l_1671,&l_1671,(void*)0}}};
                unsigned l_1678 = 0UL;
                struct S3 l_1682 = {15,0x52D3L,65535UL,8L};
                short l_1683 = 1L;
                int i, j, k;
                for (l_49.f0 = 0; (l_49.f0 < 57); l_49.f0 = safe_add_func_uint8_t_u_u(l_49.f0, 2))
                {
                    return l_1665;
                }
                l_1559 &= (safe_mul_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(((((*g_1069) = ((g_1672 = &l_1541) == (l_1673 = &g_140))) , (safe_lshift_func_int8_t_s_s((~((safe_mod_func_int8_t_s_s((func_19(l_1665, l_1678, l_1679, (*g_1672)) ^ l_1683), 0x5DL)) || (*l_1550))), l_1682.f2))) ^ l_1683), 0UL)) , g_1684) == l_1685) | l_1682.f3), l_1682.f0));
            }
            else
            {
                g_188.f4 |= func_11(((*l_1305) = (*l_1550)));
            }
            l_1560 &= (g_134 |= (*g_1643));
        }
        if ((*l_1305))
            break;
        --g_1688[6];
    }
    if (l_1691[4][0])
    {
        struct S0 l_1692 = {-1L,29637};
        g_1561 &= (*l_1305);
        return l_1692;
    }
    else
    {
        char l_1709 = (-2L);
        struct S2 l_1716 = {680};
        struct S0 l_1722[1][4][1] = {{{{-1L,30981}},{{1L,17032}},{{-1L,30981}},{{1L,17032}}}};
        struct S3 l_1723 = {0,0L,65533UL,0xB7F293B6L};
        unsigned short l_1727 = 0x9919L;
        int l_1731 = 0xDAAB75B9L;
        unsigned char l_1736 = 0UL;
        struct S1 l_1776 = {1UL,21628,0,42,-0};
        char l_1777[4][10][1] = {{{0L},{0x25L},{0L},{0L},{0x25L},{0L},{(-1L)},{0x6FL},{(-6L)},{0x6FL}},{{(-1L)},{0L},{0x25L},{0L},{0L},{0x25L},{0L},{(-1L)},{0x6FL},{(-6L)}},{{0x6FL},{(-1L)},{0L},{0x25L},{0L},{0L},{0x25L},{0L},{0x6FL},{0L}},{{1L},{0L},{0x6FL},{0L},{0x58L},{(-6L)},{(-6L)},{0x58L},{0L},{0x6FL}}};
        struct S3 l_1802 = {28,0L,1UL,0x5F1142E6L};
        int i, j, k;
lbl_1743:
        for (g_371 = 0; (g_371 != 0); g_371 = safe_add_func_uint16_t_u_u(g_371, 9))
        {
            short l_1700 = 0x2EF4L;
            struct S0 l_1715 = {0x53326922L,24368};
            for (g_27 = 3; (g_27 < 26); g_27 = safe_add_func_uint8_t_u_u(g_27, 2))
            {
                unsigned short l_1699[9];
                struct S0 l_1705 = {0xC1D80F91L,8136};
                struct S2 l_1717 = {-628};
                int l_1730 = 0x23972A1BL;
                int l_1739 = 0x1AD68775L;
                char *l_1740 = &l_1709;
                unsigned short l_1741[5] = {0xA4D0L,0xA4D0L,0xA4D0L,0xA4D0L,0xA4D0L};
                int i;
                for (i = 0; i < 9; i++)
                    l_1699[i] = 1UL;
                for (g_226 = (-17); (g_226 == 1); ++g_226)
                {
                    if (l_1699[4])
                        break;
                    if ((*g_1643))
                        continue;
                }
                for (g_400 = 0; (g_400 <= 7); g_400 += 1)
                {
                    struct S3 l_1702 = {11,0xCB4EL,65535UL,0x5CDC5700L};
                    struct S0 l_1732 = {1L,2010};
                    (*g_1643) = l_1700;
                    if ((*g_1643))
                    {
                        struct S3 l_1710 = {23,1L,0xDC2AL,-1L};
                        unsigned short *l_1711 = &l_1699[4];
                        int *l_1712[7][3][8] = {{{&l_1517,&l_1655,&g_134,&l_1655,&l_1655,&g_134,&l_1655,&l_1517},{&l_1517,&l_1655,&l_1655,&g_52,&l_1655,(void*)0,&g_134,(void*)0},{&g_52,&l_1655,&g_1561,&l_1655,&g_52,(void*)0,(void*)0,&l_1655}},{{&g_1561,&l_1655,&l_1655,&l_1517,&g_134,&g_134,&l_1517,&l_1655},{&l_1655,&l_1655,&l_1655,&l_1517,&l_1655,&l_1655,(void*)0,&g_1561},{&g_134,(void*)0,&g_1561,&l_1655,&g_1561,(void*)0,&g_134,&g_1561}},{{(void*)0,&l_1655,&l_1655,&l_1517,&l_1655,&l_1655,&l_1655,&l_1655},{&l_1517,&g_134,&g_134,&l_1517,&l_1655,&l_1655,&g_1561,&l_1655},{(void*)0,(void*)0,&g_52,&l_1655,&g_1561,&l_1655,&g_52,(void*)0}},{{&g_134,(void*)0,&l_1655,&g_52,&l_1655,&l_1655,&l_1655,&l_1655},{&g_1561,(void*)0,&l_1655,&l_1655,(void*)0,&g_1561,&l_1655,&l_1655},{(void*)0,&l_1655,&g_1561,&g_134,&l_1517,&g_52,&l_1517,&g_134}},{{&l_1517,&g_52,&l_1517,&g_134,&g_1561,&l_1655,(void*)0,&l_1655},{&l_1655,&g_1561,(void*)0,&l_1655,&l_1655,(void*)0,&g_1561,&l_1655},{&l_1655,&g_134,&l_1655,&l_1517,&g_1561,&l_1517,(void*)0,&l_1517}},{{&l_1517,&g_1561,&l_1655,&g_1561,&l_1517,&l_1517,&g_52,&g_1561},{(void*)0,&g_134,&g_1561,&l_1655,(void*)0,(void*)0,&l_1655,&g_1561},{&g_1561,&g_1561,&g_1561,&l_1655,&l_1655,&l_1655,&g_52,(void*)0}},{{(void*)0,&g_52,&l_1655,&g_1561,&l_1655,&g_52,(void*)0,(void*)0},{&g_52,&l_1655,&l_1655,&l_1655,&g_1561,&g_1561,&g_1561,&g_1561},{&l_1655,(void*)0,(void*)0,&l_1655,&g_1561,&g_134,(void*)0,&g_1561}}};
                        int i, j, k;
                        g_1174[0][1].f1 |= func_19(g_1701, l_1700, l_1702, (((*l_1711) = ((0xD6L || (safe_sub_func_int8_t_s_s(func_19((l_1700 , (g_75[3] = l_1705)), (safe_sub_func_uint16_t_u_u((0L <= (((((*g_1643) || (&l_290 == l_1708)) , l_1699[3]) | l_1709) & 0x23L)), (*g_1069))), l_1710, (*g_1672)), 0x8AL))) | l_1702.f1)) != 0x3B88L));
                    }
                    else
                    {
                        unsigned short l_1720 = 0UL;
                        struct S0 l_1721 = {1L,10892};
                        int *l_1724[3][8][4] = {{{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561}},{{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561}},{{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561}}};
                        char *l_1725 = &g_227;
                        int i, j, k;
                        (*g_1643) = ((safe_lshift_func_int16_t_s_s(func_19(l_1715, ((*l_1725) |= (((*g_469) ^ ((l_1716 = ((*l_1708) = (*g_1195))) , ((void*)0 == &g_1383[4][0][2]))) | ((l_1717 , (safe_rshift_func_int8_t_s_s((l_1720 , ((g_52 |= ((*g_1643) ^= (l_1721 , func_19(l_1722[0][1][0], l_1721.f1, l_1723, (*g_1672))))) & l_1702.f0)), 2))) != (*g_1538)))), (**g_405), (*g_1672)), l_1723.f1)) <= l_1702.f2);
                        l_1717.f0 = l_1705.f1;
                    }
                    for (l_1705.f0 = 7; (l_1705.f0 >= 2); l_1705.f0 -= 1)
                    {
                        int **l_1726 = &g_51;
                        int i;
                        (*l_1726) = &g_338;
                        if (l_1727)
                            continue;
                        (*g_51) = (safe_add_func_int16_t_s_s(((*g_1672) , l_1730), (l_1434[(l_1705.f0 + 1)] = l_1727)));
                        if (l_1731)
                            continue;
                    }
                    for (l_1702.f1 = 0; (l_1702.f1 <= 4); l_1702.f1 += 1)
                    {
                        if (l_1715.f1)
                            break;
                        return l_1732;
                    }
                }
                if (l_1741[3])
                {
                    short l_1742 = 0x7F7CL;
                    l_1742 &= (*l_1305);
                }
                else
                {
                    if ((*g_1643))
                        break;
                    if (l_352.f1)
                        goto lbl_1743;
                }
            }
            return g_179;
        }
        for (g_400 = 0; (g_400 == 56); g_400 = safe_add_func_uint8_t_u_u(g_400, 7))
        {
            unsigned l_1750 = 0xD211E4B3L;
            struct S0 l_1752 = {0L,5794};
            int l_1760[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            unsigned l_1797 = 1UL;
            int i;
            (*g_1643) = l_1722[0][1][0].f1;
            for (g_371 = 13; (g_371 == 14); g_371++)
            {
                int l_1754 = 1L;
                int l_1761 = 0x2D6850BEL;
                int l_1762 = 0xB4C38170L;
                int l_1763 = 0x79CC9D83L;
                unsigned l_1764 = 0x72CCB3F2L;
                unsigned char *l_1769 = &g_74[0];
                int l_1781[3];
                struct S0 l_1803 = {1L,14260};
                int *l_1804[8][10][3] = {{{&g_93[3][2][0].f3,&g_1650,&g_1186},{&g_139,&g_93[3][2][0].f3,&g_1186},{&g_139,&l_1752.f0,&g_1650},{&l_1659.f3,(void*)0,&l_1659.f3},{&g_93[3][2][0].f3,&g_1186,&g_1650},{&g_364,(void*)0,&g_1186},{(void*)0,&g_139,&g_1186},{&g_1701.f0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1723.f3},{&g_364,&g_93[3][2][0].f3,&l_1754}},{{&g_93[3][2][0].f3,&g_93[3][2][0].f3,&g_1186},{&l_1659.f3,&g_93[3][2][0].f3,&g_1701.f0},{&g_139,(void*)0,&g_1650},{&g_139,(void*)0,&g_139},{&g_93[3][2][0].f3,&g_139,&g_1650},{&g_75[3].f0,(void*)0,&g_1701.f0},{(void*)0,&g_1186,&g_1186},{&g_1186,(void*)0,&l_1754},{(void*)0,&l_1752.f0,&l_1723.f3},{&g_75[3].f0,&g_93[3][2][0].f3,(void*)0}},{{&g_93[3][2][0].f3,&g_1650,&g_1186},{&g_139,&g_93[3][2][0].f3,&g_1186},{&g_139,&l_1752.f0,&g_1650},{&l_1659.f3,(void*)0,&l_1659.f3},{&g_93[3][2][0].f3,&g_1186,&g_1650},{&g_364,(void*)0,&g_1186},{(void*)0,&g_139,&g_1186},{&g_1701.f0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1723.f3},{&g_364,&g_93[3][2][0].f3,&l_1754}},{{&g_93[3][2][0].f3,&g_93[3][2][0].f3,&g_1650},{&g_1701.f0,(void*)0,&g_75[3].f0},{&g_93[3][2][0].f3,&g_1650,&l_1723.f3},{&g_1186,&g_667,&g_1186},{&l_1752.f0,&g_93[3][2][0].f3,&l_1723.f3},{&g_364,(void*)0,&g_75[3].f0},{&g_139,&g_1650,&g_1650},{&g_364,&g_667,&g_139},{&g_139,&g_93[3][2][0].f3,&g_1186},{&g_364,(void*)0,&l_1659.f3}},{{&l_1752.f0,(void*)0,&g_1650},{&g_1186,(void*)0,&g_364},{&g_93[3][2][0].f3,&g_93[3][2][0].f3,&l_1723.f3},{&g_1701.f0,&g_667,&g_1701.f0},{&l_1752.f0,&g_1650,&l_1723.f3},{(void*)0,(void*)0,&g_364},{&g_139,&g_93[3][2][0].f3,&g_1650},{&g_75[3].f0,&g_667,&l_1659.f3},{&g_139,&g_1650,&g_1186},{(void*)0,(void*)0,&g_139}},{{&l_1752.f0,&l_1752.f0,&g_1650},{&g_1701.f0,(void*)0,&g_75[3].f0},{&g_93[3][2][0].f3,&g_1650,&l_1723.f3},{&g_1186,&g_667,&g_1186},{&l_1752.f0,&g_93[3][2][0].f3,&l_1723.f3},{&g_364,(void*)0,&g_75[3].f0},{&g_139,&g_1650,&g_1650},{&g_364,&g_667,&g_139},{&g_139,&g_93[3][2][0].f3,&g_1186},{&g_364,(void*)0,&l_1659.f3}},{{&l_1752.f0,(void*)0,&g_1650},{&g_1186,(void*)0,&g_364},{&g_93[3][2][0].f3,&g_93[3][2][0].f3,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_139,&l_1723.f3,(void*)0},{&g_1186,&g_93[3][2][0].f3,&g_139},{&g_93[3][2][0].f3,(void*)0,&l_1723.f3},{&l_1659.f3,(void*)0,&g_364},{&g_93[3][2][0].f3,&g_1650,&g_1650},{&g_1186,&g_1650,(void*)0}},{{&g_139,&g_139,&l_1723.f3},{(void*)0,&g_1650,&l_1659.f3},{(void*)0,&g_1650,(void*)0},{&l_1754,(void*)0,&l_1754},{&g_139,(void*)0,(void*)0},{&g_1701.f0,&g_93[3][2][0].f3,&l_1659.f3},{&g_93[3][2][0].f3,&l_1723.f3,&l_1723.f3},{&g_139,(void*)0,(void*)0},{&g_93[3][2][0].f3,&g_93[3][2][0].f3,&g_1650},{&g_1701.f0,&g_1650,&g_364}}};
                int *l_1808 = &l_1781[1];
                int *l_1809 = &g_338;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1781[i] = 0x40991841L;
                if ((g_1660 ^ (((*g_469) ^ (safe_lshift_func_int16_t_s_s(l_1750, (l_1736 <= ((func_13((*l_1305), ((*g_1672) = ((l_1722[0][1][0] , &g_1383[2][0][2]) == (l_1722[0][0][0] , l_1384))), (*l_1305), g_1751, (**g_1068)) , (**g_468)) == (*l_1305)))))) > (**g_468))))
                {
                    return l_1752;
                }
                else
                {
                    int *l_1753 = &l_1517;
                    int *l_1755 = &l_1731;
                    int *l_1756 = &g_52;
                    int *l_1757 = &g_119;
                    int *l_1758 = &g_52;
                    int *l_1759[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1759[i] = &l_1731;
                    --l_1764;
                }
                if (((((*l_1769) = (safe_rshift_func_int8_t_s_s((*l_1305), l_1752.f1))) | (l_1731 = 251UL)) >= ((((((safe_mul_func_int16_t_s_s(l_1763, ((0xDAL <= (safe_lshift_func_int16_t_s_u((-1L), (safe_lshift_func_uint8_t_u_u(l_1723.f1, (l_1776 , (g_631 | 0xABL))))))) != l_1777[0][9][0]))) ^ l_1722[0][1][0].f0) >= l_1776.f3) ^ l_1752.f1) || 0x947758ABL) , (*l_1305))))
                {
                    int *l_1778 = &l_1760[0];
                    int *l_1779 = &l_1760[0];
                    int *l_1780[10][4][4] = {{{&l_1762,&l_1762,&l_1760[4],&l_1760[6]},{&l_1731,&g_1561,&l_1763,&g_119},{&l_1762,&l_1760[4],(void*)0,&l_1763},{&l_1763,&l_1760[4],&l_1761,&g_119}},{{&l_1760[4],&g_1561,&l_1760[1],&l_1760[6]},{&l_1517,&l_1762,&g_338,&g_338},{&l_1763,&l_1763,&l_1763,&l_1760[4]},{&l_1763,(void*)0,&l_1517,&l_1763}},{{&g_119,&l_1517,(void*)0,(void*)0},{&l_1760[4],&l_1760[4],(void*)0,&l_1761},{&g_119,&l_1762,&l_1517,(void*)0},{&l_1760[4],&g_338,&l_1517,&l_1763}},{{&l_1517,&l_1763,&l_1763,&l_1517},{&l_1763,&l_1762,(void*)0,&g_119},{&g_119,(void*)0,&l_1763,&l_1762},{&l_1517,&g_1561,&l_1517,&l_1762}},{{(void*)0,(void*)0,&l_1517,&g_119},{&g_119,&l_1762,&g_119,&l_1517},{&g_1561,&l_1763,&l_1731,&l_1763},{&g_119,&g_338,&l_1763,(void*)0}},{{&l_1760[4],&g_1561,&l_1762,&l_1763},{&g_338,&l_1760[6],&l_1517,&l_1517},{&g_338,&g_119,&l_1762,&l_1517},{&l_1760[4],&l_1517,&l_1763,&g_119}},{{&g_119,&l_1761,&l_1731,&l_1731},{&g_1561,&g_1561,&g_119,&l_1763},{&g_119,&l_1760[1],&l_1517,&l_1762},{(void*)0,&g_119,&l_1517,&l_1517}},{{&l_1517,&g_119,&l_1763,&l_1762},{&g_119,&l_1760[1],(void*)0,&l_1763},{&l_1763,&g_1561,&l_1763,&l_1731},{&l_1517,&l_1761,&l_1517,&g_119}},{{&l_1760[4],&l_1517,&g_119,&l_1517},{&g_134,&g_119,&l_1762,&l_1517},{&g_119,&l_1760[6],&g_134,&g_1561},{(void*)0,&l_1760[4],&l_1762,&l_1760[4]}},{{&l_1760[1],&l_1517,(void*)0,&l_1763},{(void*)0,&l_1763,&l_1763,(void*)0},{&g_119,&l_1763,&l_1760[4],&l_1762},{(void*)0,&g_119,&g_1561,&g_134}}};
                    int i, j, k;
                    g_1784--;
                    if (l_1752.f0)
                        continue;
                }
                else
                {
                    unsigned **l_1787 = &g_1538;
                    int *l_1788 = &g_1561;
                    int l_1793 = 0L;
                    int l_1794 = 0x570DA4B9L;
                    int l_1795 = 0xF2D67100L;
                    struct S0 l_1801 = {0xB5D6248AL,20246};
                    if (((*l_1788) = ((*g_1643) = (&g_469 != l_1787))))
                    {
                        unsigned short l_1789 = 0UL;
                        int *l_1792[3][3] = {{&g_134,&g_134,&g_134},{&l_1517,&l_1517,&l_1517},{&g_134,&g_134,&g_134}};
                        int i, j;
                        l_1789++;
                        l_1797++;
                    }
                    else
                    {
                        int **l_1800 = &g_51;
                        (*l_1800) = &l_1794;
                        if (l_1776.f1)
                            break;
                    }
                    return l_1801;
                }
                (*l_1809) &= (+((*l_1808) ^= (l_1752.f0 >= (safe_rshift_func_int8_t_s_u((l_1760[4] , ((*l_1305) &= l_1736)), l_1763)))));
                for (l_1763 = (-5); (l_1763 != 11); l_1763++)
                {
                    return l_1752;
                }
            }
        }
    }
    return l_1812;
}







static int func_2(unsigned p_3, struct S1 p_4, short p_5, char p_6)
{
    char l_389 = 0xF2L;
    int l_390 = 0x7D13E45CL;
    int l_397 = 0x27857436L;
    int l_398 = 0x9946F9E5L;
    int l_399 = (-1L);
    struct S3 **l_409 = &g_406[1];
    struct S0 l_423 = {7L,8587};
    struct S3 l_438[9][1] = {{{5,0x438FL,0x3FCDL,0xC2D70EF0L}},{{25,0xACA6L,65529UL,0L}},{{25,0xACA6L,65529UL,0L}},{{5,0x438FL,0x3FCDL,0xC2D70EF0L}},{{25,0xACA6L,65529UL,0L}},{{25,0xACA6L,65529UL,0L}},{{5,0x438FL,0x3FCDL,0xC2D70EF0L}},{{25,0xACA6L,65529UL,0L}},{{25,0xACA6L,65529UL,0L}}};
    unsigned l_439 = 18446744073709551615UL;
    unsigned char **l_449 = &g_85[2];
    char l_452 = 0x09L;
    unsigned char l_504 = 0x78L;
    struct S0 *l_512 = (void*)0;
    struct S2 l_564 = {500};
    unsigned short *l_583[4] = {&g_400,&g_400,&g_400,&g_400};
    unsigned short **l_582 = &l_583[3];
    unsigned l_611 = 0x33B45F67L;
    char l_622 = (-4L);
    short l_623 = (-1L);
    int *l_636 = &g_134;
    struct S0 l_701 = {0xAB49F041L,8510};
    short *l_789 = &g_226;
    short **l_788 = &l_789;
    struct S2 l_878[8][8] = {{{-89},{-89},{623},{-89},{-89},{623},{-89},{-89}},{{-118},{-89},{-118},{-118},{-89},{-118},{-118},{-89}},{{-89},{-118},{-118},{-89},{-118},{-118},{-89},{-118}},{{-89},{-89},{623},{-89},{-89},{623},{-89},{-89}},{{-118},{-89},{-118},{-118},{-89},{-118},{-118},{-89}},{{-89},{-118},{-118},{-89},{-118},{-118},{-89},{-118}},{{-89},{-89},{623},{-118},{-118},{-89},{-118},{-118}},{{623},{-118},{623},{623},{-118},{623},{623},{-118}}};
    unsigned char l_904[5];
    unsigned short l_956[3];
    unsigned *l_991 = &l_611;
    unsigned **l_990 = &l_991;
    int *l_1053[1][7][10] = {{{&g_134,&g_134,(void*)0,&g_52,(void*)0,&g_52,(void*)0,&g_134,&g_134,(void*)0},{&g_52,&g_52,&l_397,&l_397,&g_52,&g_52,(void*)0,&g_52,&g_52,&l_397},{&l_397,&g_134,&l_397,&l_397,(void*)0,(void*)0,&l_397,&l_397,&g_134,&l_397},{&l_397,&g_52,&g_134,&g_52,&g_134,&g_52,&l_397,&l_397,&g_52,&g_134},{&g_52,&l_397,&l_397,&g_52,&g_134,&g_52,&g_134,&g_52,&l_397,&l_397},{&g_134,&l_397,&l_397,(void*)0,(void*)0,&l_397,&l_397,&g_134,&l_397,&l_397},{&g_52,&g_52,(void*)0,&g_52,&g_52,&l_397,&l_397,&g_52,&g_52,(void*)0}}};
    unsigned l_1070 = 0x92E13E1AL;
    unsigned l_1080 = 1UL;
    struct S1 **l_1104 = (void*)0;
    unsigned l_1194 = 1UL;
    unsigned l_1200 = 0x9C2522DEL;
    unsigned **l_1216 = &g_469;
    unsigned **l_1243 = &g_469;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_904[i] = 0x8FL;
    for (i = 0; i < 3; i++)
        l_956[i] = 65530UL;
    for (g_139 = 0; (g_139 > (-5)); g_139 = safe_sub_func_int32_t_s_s(g_139, 9))
    {
        unsigned char l_378 = 0x41L;
        return l_378;
    }
    return p_4.f4;
}







static unsigned short func_11(int p_12)
{
    unsigned char *l_359 = (void*)0;
    int *l_361 = &g_52;
    int *l_362 = &g_52;
    int *l_363[4];
    struct S3 *l_368[10][3] = {{&g_93[3][2][0],&g_93[3][2][0],&g_93[3][2][0]},{&g_93[0][4][3],&g_93[0][4][3],&g_93[0][4][3]},{&g_93[3][2][0],&g_93[3][2][0],&g_93[3][2][0]},{&g_93[0][4][3],&g_93[0][4][3],&g_93[0][4][3]},{&g_93[3][2][0],&g_93[3][2][0],&g_93[3][2][0]},{&g_93[0][4][3],&g_93[0][4][3],&g_93[0][4][3]},{&g_93[3][2][0],&g_93[3][2][0],&g_93[3][2][0]},{&g_93[0][4][3],&g_93[0][4][3],&g_93[0][4][3]},{&g_93[3][2][0],&g_93[3][2][0],&g_93[3][2][0]},{&g_93[0][4][3],&g_93[0][4][3],&g_93[0][4][3]}};
    struct S3 **l_369 = &l_368[7][2];
    int i, j;
    for (i = 0; i < 4; i++)
        l_363[i] = &g_134;
    (*l_361) &= ((safe_add_func_uint32_t_u_u((((*g_84) = l_359) != (void*)0), g_171)) , (safe_unary_minus_func_uint16_t_u(p_12)));
    if (g_171)
        goto lbl_370;
    g_365--;
lbl_370:
    (*l_369) = l_368[7][2];
    --g_372;
    return p_12;
}







static int func_13(unsigned p_14, unsigned p_15, unsigned short p_16, unsigned short p_17, short p_18)
{
    int *l_355 = &g_134;
    int **l_356 = &l_355;
    (*l_356) = l_355;
    return p_18;
}







static unsigned func_19(struct S0 p_20, char p_21, struct S3 p_22, unsigned p_23)
{
    short l_353 = 1L;
    int *l_354 = &g_338;
    (*l_354) |= l_353;
    return g_188.f1;
}







static struct S0 func_24(unsigned p_25)
{
    char l_325 = 1L;
    unsigned char *l_326 = &g_229;
    int l_332 = 0xC41B6C5DL;
    int l_336 = (-4L);
    int l_337[8][8] = {{1L,0xF5BB7B7CL,(-6L),1L,(-6L),0xF5BB7B7CL,1L,1L},{0xF5BB7B7CL,1L,(-10L),(-10L),1L,0xF5BB7B7CL,(-1L),0xF5BB7B7CL},{1L,0xF5BB7B7CL,(-1L),0xF5BB7B7CL,1L,(-10L),(-10L),1L},{0xF5BB7B7CL,1L,1L,0xF5BB7B7CL,(-6L),1L,(-6L),0xF5BB7B7CL},{1L,(-6L),1L,(-10L),(-1L),(-1L),(-10L),1L},{(-6L),(-6L),(-1L),1L,(-1L),1L,(-1L),(-6L)},{(-6L),1L,(-10L),(-1L),(-1L),(-10L),1L,(-6L)},{1L,0xF5BB7B7CL,(-6L),1L,(-6L),0xF5BB7B7CL,1L,1L}};
    struct S0 l_345 = {-1L,7365};
    struct S3 l_350 = {31,0xAF13L,8UL,-1L};
    int i, j;
    if ((((**g_84) = 253UL) & (++(*l_326))))
    {
        int *l_329 = &g_52;
        int *l_330 = &g_134;
        int *l_331 = &g_134;
        int *l_333 = (void*)0;
        int *l_334 = (void*)0;
        int *l_335[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_335[i][j] = &g_134;
        }
        g_339++;
    }
    else
    {
        unsigned short l_344[2][9] = {{65535UL,65528UL,0xFFC8L,0xFFC8L,65528UL,65535UL,0x7714L,65535UL,65528UL},{65535UL,4UL,4UL,65535UL,65535UL,0x7714L,65535UL,65528UL,0xFFC8L}};
        struct S2 l_348 = {-412};
        struct S0 l_349 = {-1L,12670};
        int *l_351 = &l_336;
        int i, j;
        (*l_351) &= ((safe_mul_func_uint16_t_u_u(l_344[0][1], func_28(((((l_345 , (-2L)) > g_93[3][2][0].f2) >= ((safe_sub_func_uint32_t_u_u((l_349 , p_25), 0x0EB3F9F7L)) == g_229)) & l_349.f0), l_350, l_350.f0))) && p_25);
    }
    return l_345;
}







static unsigned func_28(char p_29, struct S3 p_30, int p_31)
{
    int l_315 = 0xD4C1ED87L;
    unsigned l_322 = 0xF771EE44L;
    for (g_171 = 2; (g_171 >= 0); g_171 -= 1)
    {
        int l_306 = 0x24F04A66L;
        int *l_311 = &g_52;
        int **l_314 = &l_311;
        unsigned l_318 = 0UL;
        struct S0 l_319 = {0xF26B18DDL,8391};
        unsigned short *l_323[6];
        int *l_324 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_323[i] = &g_93[3][2][0].f2;
        (*l_314) = ((((*l_311) = (l_306 >= (safe_mul_func_uint8_t_u_u((g_74[g_171]++), g_136)))) | (safe_lshift_func_uint16_t_u_u(p_31, 15))) , &l_306);
        if (p_31)
            break;
        g_134 ^= ((((((l_315 < (((*l_311) | p_30.f1) < (--(**g_87)))) , l_318) , p_30.f3) | l_315) & p_30.f0) && (((g_300.f2 = (p_30.f2 = (l_319 , (safe_rshift_func_int16_t_s_s(((g_139 == l_315) && l_322), p_30.f0))))) , 0xED70L) | g_171));
    }
    return p_30.f1;
}







static struct S3 func_32(unsigned char p_33, unsigned p_34, struct S2 p_35, int p_36)
{
    unsigned short *l_297 = &g_93[3][2][0].f2;
    struct S1 *l_298 = (void*)0;
    struct S1 *l_299 = &g_188;
    struct S3 *l_302 = &g_300;
    struct S3 **l_301 = &l_302;
    unsigned *l_303[10];
    int l_304 = 0xEF829056L;
    int *l_305[7][7][5] = {{{&g_119,&g_119,&g_52,(void*)0,(void*)0},{&g_134,&g_52,&g_134,&g_119,&g_134},{&g_134,&g_52,&g_52,(void*)0,&g_119},{&g_119,&g_52,&g_52,&g_52,&g_134},{&g_52,&g_52,&g_52,&g_119,(void*)0},{&g_119,(void*)0,&g_52,&g_52,(void*)0},{&g_52,&g_52,&g_52,&g_134,&g_52}},{{&g_52,&g_119,&g_52,&g_134,&g_52},{(void*)0,&g_119,&g_119,&g_119,&g_52},{&g_52,&g_52,&g_134,&g_52,&g_134},{(void*)0,&g_119,&g_119,(void*)0,&g_52},{(void*)0,&g_134,&g_134,(void*)0,&g_52},{(void*)0,&g_134,(void*)0,&g_134,(void*)0},{&g_119,&g_52,&g_52,&g_119,&g_119}},{{(void*)0,(void*)0,(void*)0,&g_134,&g_52},{&g_119,&g_134,&g_119,(void*)0,&g_134},{&g_119,&g_119,&g_119,(void*)0,&g_52},{&g_52,&g_134,&g_134,&g_52,&g_119},{&g_119,&g_52,&g_119,&g_52,&g_119},{&g_134,&g_119,&g_119,&g_52,&g_119},{&g_119,&g_52,&g_52,&g_119,&g_52}},{{&g_52,(void*)0,&g_134,&g_134,&g_134},{&g_52,&g_119,(void*)0,&g_119,(void*)0},{&g_119,&g_134,&g_52,&g_134,&g_119},{&g_119,(void*)0,&g_119,(void*)0,&g_134},{&g_52,&g_119,&g_119,&g_52,&g_134},{&g_52,&g_52,(void*)0,(void*)0,&g_134},{&g_134,&g_52,&g_52,&g_119,&g_119}},{{&g_134,&g_119,&g_119,&g_119,(void*)0},{&g_119,&g_52,&g_134,&g_134,&g_134},{(void*)0,&g_134,(void*)0,&g_52,&g_52},{&g_52,&g_134,&g_134,(void*)0,&g_119},{&g_52,(void*)0,&g_52,&g_52,&g_119},{&g_134,&g_119,&g_134,&g_134,&g_134},{&g_134,(void*)0,&g_134,(void*)0,&g_119}},{{&g_52,&g_119,&g_119,&g_119,&g_119},{&g_134,&g_52,&g_119,&g_52,&g_119},{&g_134,(void*)0,&g_134,(void*)0,&g_134},{(void*)0,&g_134,(void*)0,&g_52,&g_134},{&g_52,&g_134,&g_119,&g_134,&g_52},{&g_119,(void*)0,&g_134,&g_52,(void*)0},{&g_119,(void*)0,&g_52,(void*)0,&g_134}},{{&g_134,&g_119,(void*)0,&g_134,&g_119},{&g_119,&g_134,&g_52,&g_119,&g_119},{(void*)0,&g_52,&g_134,(void*)0,&g_52},{&g_119,&g_134,&g_134,&g_134,&g_134},{&g_119,&g_52,&g_119,&g_52,&g_119},{(void*)0,&g_119,&g_134,&g_52,&g_134},{(void*)0,(void*)0,&g_119,&g_119,&g_119}}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_303[i] = &g_153;
    g_52 ^= ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((*l_297) &= p_33) & (((g_59 != g_48.f0) , 1L) | p_36)), (((*l_299) = g_188) , (l_304 = (255UL ^ ((g_300 , l_301) != &l_302)))))), g_136)), p_35.f0)) >= p_34);
    return (**l_301);
}







static int func_39(struct S0 p_40, short p_41, struct S3 p_42)
{
    unsigned l_114[10];
    int l_120 = 0x63CD1322L;
    int l_128[5][9] = {{0L,0L,(-1L),0L,0xED8AAA03L,0L,(-1L),0L,0L},{0L,0x0E6B5D3EL,(-6L),0x79F67429L,(-6L),0x0E6B5D3EL,0L,0L,0x0E6B5D3EL},{0L,0x9BB4E8AFL,(-1L),0x9BB4E8AFL,0L,0x3BCDCC49L,0x3BCDCC49L,0L,0x9BB4E8AFL},{0L,(-6L),0L,0L,(-3L),(-3L),0L,0L,(-6L)},{0L,0x9BB4E8AFL,0L,0x3BCDCC49L,0x3BCDCC49L,0L,0x9BB4E8AFL,(-1L),0x9BB4E8AFL}};
    unsigned char **l_149 = (void*)0;
    struct S2 l_161 = {-701};
    short l_270 = 0xF727L;
    char l_275 = 3L;
    int l_283 = 0xFD7CA8B9L;
    struct S0 **l_288[6][7] = {{&g_287,(void*)0,&g_287,&g_287,&g_287,&g_287,&g_287},{&g_287,&g_287,&g_287,&g_287,&g_287,&g_287,(void*)0},{&g_287,(void*)0,&g_287,(void*)0,&g_287,&g_287,&g_287},{&g_287,&g_287,(void*)0,(void*)0,&g_287,&g_287,(void*)0},{&g_287,&g_287,&g_287,(void*)0,&g_287,&g_287,&g_287},{&g_287,&g_287,&g_287,(void*)0,(void*)0,(void*)0,&g_287}};
    struct S0 ***l_289 = &l_288[5][6];
    int i, j;
    for (i = 0; i < 10; i++)
        l_114[i] = 0x488C446EL;
    for (p_42.f2 = 0; (p_42.f2 > 13); p_42.f2 = safe_add_func_int32_t_s_s(p_42.f2, 1))
    {
        unsigned l_99 = 0UL;
        int l_132[3][8][8] = {{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}}};
        unsigned char **l_147 = &g_85[2];
        int *l_157 = &l_132[1][0][7];
        char *l_170[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned *l_172[10][2][9] = {{{&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153},{&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153}},{{&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153,&g_153},{&g_153,&g_153,&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,&g_153}},{{&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153},{&g_153,&g_153,&g_153,(void*)0,&g_153,(void*)0,&g_153,&g_153,&g_153}},{{&g_153,(void*)0,&g_153,&g_153,&g_153,(void*)0,&g_153,(void*)0,&g_153},{&g_153,(void*)0,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,(void*)0}},{{&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,&g_153,(void*)0,&g_153},{&g_153,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153}},{{(void*)0,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153,(void*)0},{&g_153,&g_153,&g_153,&g_153,&g_153,(void*)0,(void*)0,(void*)0,&g_153}},{{&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153},{(void*)0,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153}},{{(void*)0,&g_153,(void*)0,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153},{&g_153,(void*)0,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153}},{{&g_153,&g_153,&g_153,(void*)0,&g_153,(void*)0,&g_153,&g_153,&g_153},{&g_153,(void*)0,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153,&g_153}},{{&g_153,&g_153,&g_153,&g_153,&g_153,(void*)0,&g_153,&g_153,(void*)0},{&g_153,&g_153,&g_153,(void*)0,(void*)0,(void*)0,&g_153,&g_153,&g_153}}};
        short *l_173 = (void*)0;
        short *l_174 = &g_138[5];
        short *l_175 = &g_136;
        struct S2 l_191 = {-655};
        int l_224 = 0x6FC1D8D4L;
        int l_265 = 0xB700E47CL;
        int l_277 = (-1L);
        unsigned l_278 = 0x84FA7075L;
        int i, j, k;
        for (p_40.f0 = (-2); (p_40.f0 >= 16); p_40.f0 = safe_add_func_int32_t_s_s(p_40.f0, 1))
        {
            int l_98 = 0x9A4742CAL;
            unsigned short l_110 = 0x2FB8L;
            int *l_111 = &g_52;
            int *l_117 = &l_98;
            int *l_118[1][6] = {{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119}};
            int **l_121 = &l_111;
            struct S2 *l_145 = &g_48;
            int i, j;
            l_120 ^= ((*l_117) = (l_98 | (l_99 , (((l_99 > ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((!(safe_mod_func_uint8_t_u_u((g_48.f0 , (((safe_mod_func_int32_t_s_s(((*l_111) = l_110), p_42.f0)) != (g_93[9][3][3] , (safe_lshift_func_int8_t_s_s(l_114[6], 0)))) , (safe_sub_func_uint32_t_u_u((1L >= 0x6589L), p_42.f1)))), 0xB9L))), g_74[1])), p_40.f1)), p_42.f3)) & (-7L))) , 0L) <= p_40.f1))));
            (*l_121) = &l_120;
            if (p_42.f0)
            {
                short l_122 = 0xFFE4L;
                int *l_123 = (void*)0;
                int l_126 = 1L;
                int l_133 = 0L;
                int l_135 = 0L;
                int l_137[1][3][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
                int i, j, k;
                if (l_122)
                {
                    (*l_121) = l_123;
                }
                else
                {
                    unsigned l_129 = 0xFD58D487L;
                    for (l_120 = 2; (l_120 > 4); l_120++)
                    {
                        int l_127 = 0x5B9867C3L;
                        --l_129;
                    }
                }
                --g_140;
                if (l_128[0][3])
                    break;
                for (l_135 = 0; (l_135 >= 15); l_135 = safe_add_func_int32_t_s_s(l_135, 1))
                {
                    unsigned char ***l_148 = &g_84;
                    g_146 = l_145;
                    l_128[1][3] |= (1UL < (((*l_148) = l_147) == (l_149 = (void*)0)));
                }
            }
            else
            {
                for (g_119 = (-3); (g_119 >= 17); g_119++)
                {
                    struct S0 l_152 = {0xEACF7F05L,30517};
                    if (l_132[0][0][3])
                    {
                        return p_40.f1;
                    }
                    else
                    {
                        l_152 = g_75[3];
                    }
                    --g_153;
                    (*l_111) |= (+(*l_117));
                    (*l_121) = (*l_121);
                }
                l_157 = ((l_128[1][4] = (safe_unary_minus_func_int32_t_s(p_40.f0))) , (*l_121));
                for (g_134 = 0; (g_134 < (-8)); --g_134)
                {
                    unsigned l_160 = 0x55062A83L;
                    return l_160;
                }
                (*l_121) = &l_128[0][4];
            }
            if (p_42.f0)
                continue;
        }
        if ((0xF8A6L > (+(l_161 , (((safe_mul_func_int16_t_s_s(((*l_175) = ((l_120 , ((*l_174) = ((safe_sub_func_uint16_t_u_u(g_138[5], (safe_mul_func_int8_t_s_s((p_41 <= (safe_lshift_func_uint8_t_u_s(l_114[9], 0))), (((*l_157) = g_134) < p_40.f0))))) | (g_153 = g_75[3].f0)))) >= p_42.f0)), 0xD99EL)) <= 0xECBAF703L) | g_171)))))
        {
            struct S0 *l_176 = (void*)0;
            struct S0 *l_177 = &g_75[3];
            struct S0 *l_178[3][3] = {{&g_179,&g_179,&g_179},{&g_179,&g_179,&g_179},{&g_179,&g_179,&g_179}};
            int i, j;
            p_40 = ((*l_177) = g_75[3]);
        }
        else
        {
            return l_114[4];
        }
        if ((safe_lshift_func_int8_t_s_s((l_120 = (safe_add_func_uint8_t_u_u(p_42.f3, (g_138[5] < (safe_rshift_func_int16_t_s_s(((*l_175) = (safe_lshift_func_uint16_t_u_u((*l_157), (*l_157)))), (g_188 , p_40.f1))))))), 1)))
        {
            struct S1 l_189 = {0x08B5A751L,-13015,0,241,4};
            struct S1 *l_190[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            g_188 = l_189;
            (*l_157) |= (g_93[3][2][0] , ((l_191 , 0xA8L) & (**g_87)));
        }
        else
        {
            char **l_196 = &l_170[0];
            int l_203 = 0xA55A67DAL;
            l_203 |= (l_161 , ((*l_157) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((*l_196) = &g_171) != (void*)0) , p_42.f0), (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_42.f0, 0x62D5B2A2L)), p_42.f1)), 0x7BE34D85L)))), (**g_84)))));
            if (g_188.f4)
                break;
            for (g_153 = 0; g_153 < 5; g_153 += 1)
            {
                for (g_171 = 0; g_171 < 9; g_171 += 1)
                {
                    l_128[g_153][g_171] = 6L;
                }
            }
            for (g_136 = 4; (g_136 >= 0); g_136 -= 1)
            {
                int **l_207[10] = {&g_51,&g_51,(void*)0,&g_51,&g_51,(void*)0,&g_51,&g_51,(void*)0,&g_51};
                int i;
                for (g_119 = 0; (g_119 <= 9); g_119 += 1)
                {
                    for (g_134 = 4; (g_134 >= 0); g_134 -= 1)
                    {
                        struct S1 *l_204 = (void*)0;
                        struct S1 **l_205 = &l_204;
                        int i, j;
                        if (l_128[g_136][(g_134 + 1)])
                            break;
                        (*l_205) = l_204;
                        (*l_157) |= l_203;
                    }
                    for (g_52 = 2; (g_52 <= 9); g_52 += 1)
                    {
                        l_203 = (safe_unary_minus_func_uint32_t_u(p_42.f3));
                        if (p_40.f1)
                            break;
                    }
                }
                l_157 = (g_51 = &l_128[0][6]);
            }
        }
        for (l_99 = 25; (l_99 <= 57); l_99++)
        {
            int l_212 = 0x2F2A417AL;
            int l_215 = 0L;
            int l_225 = 4L;
            int l_228 = 0L;
            struct S2 **l_232 = &g_146;
            unsigned char l_237 = 0x8BL;
            unsigned char *l_257 = &g_74[1];
            char l_261 = 0L;
            if ((*l_157))
            {
                int **l_220 = &g_51;
                (*l_220) = ((((**g_84) = p_42.f3) ^ (safe_sub_func_uint32_t_u_u((l_212 = g_75[3].f1), ((((safe_rshift_func_int16_t_s_s((l_215 , (safe_lshift_func_uint8_t_u_s(((g_74[0] == l_128[0][4]) == (safe_lshift_func_int16_t_s_s(p_40.f0, ((*l_174) = 0L)))), 4))), 6)) != 65534UL) <= 0x27C4B1F3L) >= l_114[6])))) , (void*)0);
                if (g_93[3][2][0].f0)
                    continue;
                for (g_188.f0 = 0; (g_188.f0 <= 3); g_188.f0 += 1)
                {
                    for (g_134 = 0; (g_134 <= 4); g_134 += 1)
                    {
                        if (p_42.f2)
                            break;
                    }
                }
            }
            else
            {
                unsigned short l_221 = 1UL;
                int *l_222 = &l_128[0][4];
                int *l_223[8][9][3] = {{{&l_212,(void*)0,&l_212},{(void*)0,&l_128[0][1],&l_120},{&l_215,&g_119,&g_52},{&g_119,(void*)0,&g_134},{&l_132[1][0][7],&g_119,&l_132[1][0][7]},{&g_119,&l_128[0][1],&l_120},{&l_212,&l_132[1][0][7],&g_119},{(void*)0,&g_119,&g_134},{(void*)0,&l_215,(void*)0}},{{(void*)0,&l_120,&l_120},{&l_212,&l_120,&l_215},{&g_119,(void*)0,&l_132[1][0][7]},{&l_132[1][0][7],&l_215,&l_215},{&g_119,&l_132[1][0][7],&l_132[1][0][7]},{&l_215,&l_132[1][0][7],&l_215},{(void*)0,&g_119,&l_120},{&l_215,&g_119,(void*)0},{&g_119,(void*)0,&g_134}},{{&g_119,&g_119,&g_119},{&g_119,&g_119,&l_120},{&l_128[0][4],&l_132[1][0][7],&l_132[1][0][7]},{(void*)0,&l_132[1][0][7],&g_134},{&l_128[0][4],&l_215,&g_52},{(void*)0,(void*)0,&l_120},{&l_128[0][4],&l_120,&l_212},{&g_119,&l_120,&l_132[1][0][7]},{&g_119,&l_215,&l_215}},{{&g_119,&g_119,&l_132[1][0][7]},{&l_215,&l_132[1][0][7],&l_212},{(void*)0,&l_128[0][1],&l_120},{&l_215,&g_119,&g_52},{&g_119,(void*)0,&g_134},{&l_132[1][0][7],&l_132[0][4][4],&l_128[0][4]},{&g_119,&g_134,&l_120},{&l_120,&l_215,&l_212},{&g_52,&g_119,(void*)0}},{{&l_132[1][0][7],(void*)0,&l_212},{&g_52,&l_120,&g_134},{&l_120,&l_132[1][0][7],&l_128[0][4]},{&g_119,&g_52,&l_128[0][1]},{&l_128[0][4],(void*)0,(void*)0},{&g_119,&l_128[0][1],&l_128[0][1]},{&g_52,&l_215,&l_128[0][4]},{&g_119,&g_119,&g_134},{(void*)0,&l_132[0][4][4],&l_212}},{{&g_119,&l_132[1][0][7],(void*)0},{&l_212,&l_132[0][4][4],&l_212},{&g_119,&g_119,&l_120},{&g_119,&l_215,&l_128[0][4]},{&g_52,&l_128[0][1],(void*)0},{&g_119,(void*)0,&l_215},{&g_52,&g_52,&g_134},{&g_119,&l_132[1][0][7],(void*)0},{&g_119,&l_120,&l_128[0][1]}},{{&l_212,(void*)0,&g_52},{&g_119,&g_119,&l_128[0][1]},{(void*)0,&l_215,(void*)0},{&g_119,&g_134,&g_134},{&g_52,&l_132[0][4][4],&l_215},{&g_119,&g_119,(void*)0},{&l_128[0][4],&l_132[0][4][4],&l_128[0][4]},{&g_119,&g_134,&l_120},{&l_120,&l_215,&l_212}},{{&g_52,&g_119,(void*)0},{&l_212,&l_132[1][0][7],&l_215},{&g_119,&g_134,&l_120},{&g_119,&l_132[1][7][5],&g_52},{(void*)0,&g_119,(void*)0},{(void*)0,&l_132[1][0][7],&g_119},{&g_119,(void*)0,(void*)0},{&l_120,&l_120,&g_52},{&l_132[1][2][0],&g_119,&l_120}}};
                int i, j, k;
                if (p_42.f2)
                    break;
                if (l_221)
                    break;
                g_229--;
            }
            (*l_232) = &l_191;
            if (p_42.f2)
            {
                unsigned l_245 = 0xF3C1CD71L;
                unsigned short *l_249[8];
                unsigned short **l_248 = &l_249[0];
                struct S3 *l_252 = &g_93[3][2][0];
                struct S3 **l_251 = &l_252;
                int i;
                for (i = 0; i < 8; i++)
                    l_249[i] = &g_93[3][2][0].f2;
                for (g_229 = 23; (g_229 > 49); g_229 = safe_add_func_uint16_t_u_u(g_229, 7))
                {
                    struct S1 l_238[9] = {{0xA0BC8CE9L,9513,0,9,-1},{1UL,-9936,0,647,1},{1UL,-9936,0,647,1},{0xA0BC8CE9L,9513,0,9,-1},{1UL,-9936,0,647,1},{1UL,-9936,0,647,1},{0xA0BC8CE9L,9513,0,9,-1},{1UL,-9936,0,647,1},{1UL,-9936,0,647,1}};
                    unsigned short *l_241[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_241[i] = &g_93[3][2][0].f2;
                    if ((*l_157))
                        break;
                    if ((safe_rshift_func_uint8_t_u_s(p_42.f0, (((0x2654L == g_229) == ((((l_237 | p_41) , (l_238[8] , (safe_mod_func_uint16_t_u_u((l_225 = p_40.f0), 65535UL)))) , (l_238[8].f1 == (*l_157))) | (-10L))) , l_238[8].f2))))
                    {
                        char l_242 = 0x50L;
                        if (l_242)
                            break;
                        g_250 = ((((p_40.f1 = (((0x1AF65337L <= ((*l_157) = ((g_93[3][2][0].f3 >= (safe_sub_func_uint16_t_u_u(p_40.f1, (p_40.f1 <= (((l_245 &= 65530UL) != (p_42.f3 , ((safe_lshift_func_uint8_t_u_s(p_42.f2, 7)) >= ((&g_171 != (void*)0) || 0x26L)))) < 65530UL))))) <= 1UL))) > p_42.f0) || p_41)) >= p_40.f0) == p_42.f1) , l_248);
                    }
                    else
                    {
                        return p_41;
                    }
                }
                (*l_251) = &g_93[3][2][0];
            }
            else
            {
                unsigned short l_258 = 5UL;
                unsigned l_266 = 0x6451CC23L;
                int l_276 = 0xC54DAA02L;
                if ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((l_114[6] <= 0xC874L) , (*g_84)) == l_257) == l_128[0][4]), (l_258 == (((8L & (((safe_add_func_uint16_t_u_u(9UL, ((((((**g_84) | p_42.f1) , l_128[0][4]) == 1UL) ^ g_59) && l_261))) <= p_42.f1) < l_225)) || g_188.f3) && 0x07L)))) >= 0x41L), 11)))
                {
                    int l_262 = 0xDCF0F107L;
                    int *l_263 = &l_228;
                    int *l_264[5] = {&l_212,&l_212,&l_212,&l_212,&l_212};
                    int i;
                    l_266--;
                    for (p_41 = 4; (p_41 >= 0); p_41 -= 1)
                    {
                        (*l_157) &= (g_52 | l_225);
                        (*l_263) |= 0x0CA74BF8L;
                    }
                }
                else
                {
                    int *l_269 = (void*)0;
                    int *l_271 = &l_120;
                    int *l_272 = (void*)0;
                    int *l_273 = &l_132[1][0][7];
                    int *l_274[7][8][4] = {{{&l_212,&g_52,&l_132[1][0][7],&l_128[1][6]},{&l_212,&l_224,&l_120,&l_228},{(void*)0,&l_128[1][6],&g_119,&l_215},{&l_212,&l_265,(void*)0,&l_265},{&l_212,&l_215,&g_119,&l_128[1][6]},{(void*)0,&l_228,&l_120,&l_224},{&l_212,&l_128[1][6],&l_132[1][0][7],&g_52},{&l_212,&l_212,&l_120,&l_265}},{{(void*)0,&g_52,&g_119,&g_52},{&l_212,&l_228,(void*)0,&l_228},{&l_212,&g_52,&g_119,&g_52},{(void*)0,&l_265,&l_120,&l_212},{&l_212,&g_52,&l_132[1][0][7],&l_128[1][6]},{&l_212,&l_224,&l_120,&l_228},{(void*)0,&l_128[1][6],&g_119,&l_215},{&l_212,&l_265,(void*)0,&l_265}},{{&l_212,&l_215,&g_119,&l_128[1][6]},{(void*)0,&l_228,&l_120,&l_224},{&l_212,&l_128[1][6],&l_132[1][0][7],&g_52},{&l_212,&l_212,&l_120,&l_265},{(void*)0,&g_52,&g_119,&g_52},{&l_212,&l_228,(void*)0,&l_228},{&l_212,&g_52,&g_119,&g_52},{(void*)0,&l_265,&l_120,&l_212}},{{&l_212,&g_52,&l_132[1][0][7],&l_128[1][6]},{&l_212,&l_224,&l_120,&l_228},{(void*)0,&l_128[1][6],&g_119,&l_215},{&l_212,&l_265,(void*)0,&l_265},{&l_212,&l_215,&g_119,&l_128[1][6]},{(void*)0,&l_228,&l_120,&l_224},{&l_212,&l_128[1][6],&l_132[1][0][7],&g_52},{&l_212,&l_212,&l_120,&l_265}},{{(void*)0,&g_52,&g_119,&g_52},{&l_212,&l_228,(void*)0,&l_228},{&l_212,&g_52,&g_119,&g_52},{(void*)0,&l_265,&l_120,&l_212},{&l_212,&g_52,&l_132[1][0][7],&l_128[1][6]},{&l_212,&l_224,&l_120,&l_228},{(void*)0,&g_52,&l_132[1][0][7],&g_119},{(void*)0,&l_212,&l_128[3][2],&l_212}},{{(void*)0,&g_119,&l_132[1][0][7],&g_52},{&g_119,&l_224,(void*)0,&l_132[1][7][3]},{(void*)0,&g_52,&l_132[2][7][1],&l_215},{(void*)0,&l_128[0][4],(void*)0,&l_212},{&g_119,&l_215,&l_132[1][0][7],&l_265},{(void*)0,&l_224,&l_128[3][2],&l_224},{(void*)0,&l_265,&l_132[1][0][7],&l_215},{&g_119,&l_212,(void*)0,&l_128[0][4]}},{{(void*)0,&l_215,&l_132[2][7][1],&g_52},{(void*)0,&l_132[1][7][3],(void*)0,&l_224},{&g_119,&g_52,&l_132[1][0][7],&g_119},{(void*)0,&l_212,&l_128[3][2],&l_212},{(void*)0,&g_119,&l_132[1][0][7],&g_52},{&g_119,&l_224,(void*)0,&l_132[1][7][3]},{(void*)0,&g_52,&l_132[2][7][1],&l_215},{(void*)0,&l_128[0][4],(void*)0,&l_212}}};
                    int i, j, k;
                    --l_278;
                }
                return p_40.f1;
            }
        }
    }
    l_161.f0 &= (((&g_27 != (void*)0) && (safe_add_func_int16_t_s_s(((l_128[2][3] >= (l_283 < (!(!(safe_lshift_func_int16_t_s_u(g_171, 2)))))) > (g_286 != ((*l_289) = l_288[4][5]))), (g_48 , 1UL)))) & p_40.f0);
    return l_114[1];
}







static struct S0 func_43(int p_44, struct S2 p_45, int p_46, int p_47)
{
    struct S1 l_50 = {0xB9622CFBL,-22882,0,147,0};
    int **l_53[9][8] = {{&g_51,&g_51,(void*)0,&g_51,&g_51,&g_51,(void*)0,&g_51},{&g_51,(void*)0,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,(void*)0,&g_51,&g_51,(void*)0,&g_51,&g_51},{&g_51,&g_51,&g_51,(void*)0,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,(void*)0,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,(void*)0,(void*)0,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,(void*)0,&g_51,(void*)0,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51}};
    struct S0 *l_81 = (void*)0;
    int i, j;
lbl_82:
    g_51 = (l_50 , g_51);
    if (((-10L) & g_48.f0))
    {
        struct S0 l_54[1][8][3] = {{{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}},{{0xE33BD0D8L,737},{-5L,13600},{0xE33BD0D8L,737}}}};
        int i, j, k;
        return l_54[0][7][1];
    }
    else
    {
        unsigned l_55 = 0x28E8BF32L;
        int **l_76 = &g_51;
        struct S0 l_83 = {0xEF25AD8BL,17651};
        unsigned char ***l_86 = &g_84;
        int l_88[1][2];
        unsigned l_89 = 0xC9451C11L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_88[i][j] = 0x4AF2C2A8L;
        }
        for (g_52 = 1; (g_52 <= 7); g_52 += 1)
        {
            int l_72 = 0L;
            int **l_77 = &g_51;
            int l_78[7][6] = {{(-7L),0x7473AC07L,(-7L),0xA8832714L,0x7473AC07L,1L},{(-7L),0xA51C30C3L,0xA8832714L,0xA8832714L,0xA51C30C3L,(-7L)},{(-7L),0L,1L,0xA8832714L,0L,0xA8832714L},{(-7L),0x7473AC07L,(-7L),0xA8832714L,0x7473AC07L,1L},{(-10L),(-7L),0x6F217CF0L,0x6F217CF0L,(-7L),(-10L)},{(-10L),1L,(-4L),0x6F217CF0L,1L,0x6F217CF0L},{(-10L),0xA8832714L,(-10L),0x6F217CF0L,0xA8832714L,(-4L)}};
            int i, j;
            for (p_47 = 7; (p_47 >= 0); p_47 -= 1)
            {
                int i, j;
                p_45.f0 ^= 0L;
                for (p_44 = 7; (p_44 >= 1); p_44 -= 1)
                {
                    unsigned char *l_56 = (void*)0;
                    unsigned char *l_57 = (void*)0;
                    unsigned char *l_58 = &g_59;
                    unsigned char *l_73 = &g_74[0];
                    int i, j;
                    p_46 = (~(l_55 , (8L >= ((*l_58) = g_27))));
                    if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_59, g_48.f0)), ((safe_sub_func_uint32_t_u_u((l_53[p_44][p_44] != l_53[6][3]), g_52)) <= (6UL || (safe_mul_func_uint8_t_u_u(((*l_73) = (safe_lshift_func_uint8_t_u_s(p_47, (((l_72 &= (*g_51)) && 8L) == 0L)))), g_59)))))), g_52)))
                    {
                        return g_75[3];
                    }
                    else
                    {
                        struct S0 *l_80 = &g_75[3];
                        struct S0 **l_79[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_79[i] = &l_80;
                        l_78[3][3] |= ((((void*)0 == l_76) , l_77) != &g_51);
                        p_46 &= p_47;
                        if (p_44)
                            continue;
                        l_81 = &g_75[3];
                    }
                    if (l_50.f2)
                        goto lbl_82;
                    if (p_47)
                        break;
                }
            }
            return l_83;
        }
        g_87 = ((*l_86) = g_84);
        ++l_89;
        (*g_51) = p_45.f0;
    }
    g_51 = &p_46;
    return g_75[4];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_75[i].f0, "g_75[i].f0", print_hash_value);
        transparent_crc(g_75[i].f1, "g_75[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_93[i][j][k].f0, "g_93[i][j][k].f0", print_hash_value);
                transparent_crc(g_93[i][j][k].f1, "g_93[i][j][k].f1", print_hash_value);
                transparent_crc(g_93[i][j][k].f2, "g_93[i][j][k].f2", print_hash_value);
                transparent_crc(g_93[i][j][k].f3, "g_93[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_138[i], "g_138[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_188.f3, "g_188.f3", print_hash_value);
    transparent_crc(g_188.f4, "g_188.f4", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_300.f0, "g_300.f0", print_hash_value);
    transparent_crc(g_300.f1, "g_300.f1", print_hash_value);
    transparent_crc(g_300.f2, "g_300.f2", print_hash_value);
    transparent_crc(g_300.f3, "g_300.f3", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_630[i], "g_630[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_698[i][j], "g_698[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_707[i][j], "g_707[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_981[i], "g_981[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1100.f0, "g_1100.f0", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1174[i][j].f0, "g_1174[i][j].f0", print_hash_value);
            transparent_crc(g_1174[i][j].f1, "g_1174[i][j].f1", print_hash_value);
            transparent_crc(g_1174[i][j].f2, "g_1174[i][j].f2", print_hash_value);
            transparent_crc(g_1174[i][j].f3, "g_1174[i][j].f3", print_hash_value);
            transparent_crc(g_1174[i][j].f4, "g_1174[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1300, "g_1300", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1361[i][j][k], "g_1361[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1428, "g_1428", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1479[i][j], "g_1479[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1561, "g_1561", print_hash_value);
    transparent_crc(g_1562, "g_1562", print_hash_value);
    transparent_crc(g_1597, "g_1597", print_hash_value);
    transparent_crc(g_1650, "g_1650", print_hash_value);
    transparent_crc(g_1660, "g_1660", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1688[i], "g_1688[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1701.f0, "g_1701.f0", print_hash_value);
    transparent_crc(g_1701.f1, "g_1701.f1", print_hash_value);
    transparent_crc(g_1733.f0, "g_1733.f0", print_hash_value);
    transparent_crc(g_1733.f1, "g_1733.f1", print_hash_value);
    transparent_crc(g_1733.f2, "g_1733.f2", print_hash_value);
    transparent_crc(g_1733.f3, "g_1733.f3", print_hash_value);
    transparent_crc(g_1733.f4, "g_1733.f4", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1782[i][j], "g_1782[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1783, "g_1783", print_hash_value);
    transparent_crc(g_1784, "g_1784", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1796[i], "g_1796[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
