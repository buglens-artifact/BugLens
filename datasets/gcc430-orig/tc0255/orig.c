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
   unsigned f0;
   unsigned f1;
   short f2;
   unsigned char f3;
   unsigned long long f4;
   unsigned f5;
   unsigned short f6;
   unsigned short f7;
   unsigned f8;
};


static long long g_7 = (-7L);
static unsigned long long g_11 = 0xB489F7A9D2E819D3LL;
static char g_13 = 0x19L;
static unsigned short g_21 = 0x16D2L;
static unsigned short g_23 = 0x497FL;
static int g_58 = 0xD57638FFL;
static char g_78 = 1L;
static unsigned g_81 = 4294967294UL;
static struct S0 g_90 = {0x1344E0D2L,4294967295UL,0L,255UL,0x5337C488B1902DE6LL,0UL,0x317EL,1UL,1UL};
static int *g_94[7] = {&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58};
static int g_108[7][9][3] = {{{4L,1L,(-1L)},{0x2BA90BB7L,1L,0L},{3L,0L,0xAC180700L},{0x0DCE90FCL,3L,3L},{3L,0xC4EC065BL,0x3A87377DL},{0x2BA90BB7L,0x7B376A3BL,0x3A87377DL},{4L,0x3A87377DL,3L},{(-10L),0L,0xAC180700L},{0x3A87377DL,0x3A87377DL,0L}},{{0L,0x7B376A3BL,(-1L)},{0L,0xC4EC065BL,(-10L)},{0x3A87377DL,3L,0x7B376A3BL},{(-10L),0L,(-10L)},{0x7B376A3BL,3L,0x3A87377DL},{0L,3L,0x2BA90BB7L},{0xC4EC065BL,(-10L),0L},{(-1L),0xC4EC065BL,0xC4EC065BL},{0xC4EC065BL,0x0DCE90FCL,0xAC180700L}},{{0L,1L,0xAC180700L},{0x7B376A3BL,0xAC180700L,0xC4EC065BL},{4L,0x2BA90BB7L,0L},{0xAC180700L,0xAC180700L,0x2BA90BB7L},{(-10L),1L,0x3A87377DL},{(-10L),0x0DCE90FCL,4L},{0xAC180700L,0xC4EC065BL,1L},{4L,(-10L),4L},{0x7B376A3BL,3L,0x3A87377DL}},{{0L,3L,0x2BA90BB7L},{0xC4EC065BL,(-10L),0L},{(-1L),0xC4EC065BL,0xC4EC065BL},{0xC4EC065BL,0x0DCE90FCL,0xAC180700L},{0L,1L,0xAC180700L},{0x7B376A3BL,0xAC180700L,0xC4EC065BL},{4L,0x2BA90BB7L,0L},{0xAC180700L,0xAC180700L,0x2BA90BB7L},{(-10L),1L,0x3A87377DL}},{{(-10L),0x0DCE90FCL,4L},{0xAC180700L,0xC4EC065BL,1L},{4L,(-10L),4L},{0x7B376A3BL,3L,0x3A87377DL},{0L,3L,0x2BA90BB7L},{0xC4EC065BL,(-10L),0L},{(-1L),0xC4EC065BL,0xC4EC065BL},{0xC4EC065BL,0x0DCE90FCL,0xAC180700L},{0L,1L,0L}},{{1L,0L,0x0DCE90FCL},{0x7B376A3BL,0L,0x2BA90BB7L},{0L,0L,0L},{4L,3L,0xAC180700L},{4L,(-1L),0x7B376A3BL},{0L,0x0DCE90FCL,3L},{0x7B376A3BL,4L,0x7B376A3BL},{1L,0xC4EC065BL,0xAC180700L},{(-10L),0xC4EC065BL,0L}},{{0x0DCE90FCL,4L,0x2BA90BB7L},{0x3A87377DL,0x0DCE90FCL,0x0DCE90FCL},{0x0DCE90FCL,(-1L),0L},{(-10L),3L,0L},{1L,0L,0x0DCE90FCL},{0x7B376A3BL,0L,0x2BA90BB7L},{0L,0L,0L},{4L,3L,0xAC180700L},{4L,(-1L),0x7B376A3BL}}};
static int **g_118 = &g_94[3];
static short g_132 = 6L;
static char g_161 = 0L;
static long long g_308 = 0x93D30D6FC78F7CE0LL;
static struct S0 *g_322 = (void*)0;
static struct S0 **g_321 = &g_322;
static struct S0 ***g_320 = &g_321;
static int g_355 = 0x5F94A47CL;
static unsigned **g_425 = (void*)0;
static unsigned ***g_424 = &g_425;
static unsigned short *g_439 = &g_21;
static char *g_523[10] = {&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13};
static char **g_522 = &g_523[0];
static unsigned g_559[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static unsigned long long g_562 = 0x77AFA9F35B03C4CDLL;
static int g_607[6][2] = {{0x984E6F79L,0x0818F5EEL},{0x0818F5EEL,0x984E6F79L},{0x0818F5EEL,0x0818F5EEL},{0x984E6F79L,0x0818F5EEL},{0x0818F5EEL,0x984E6F79L},{0x0818F5EEL,0x0818F5EEL}};
static struct S0 g_708 = {0UL,0xCE8B62ABL,-1L,0xA5L,0xDD85107D42AE8336LL,6UL,0UL,0x70B5L,0x38A938D1L};
static unsigned long long *g_809 = &g_11;
static unsigned long long **g_808 = &g_809;
static int *g_905[3] = {&g_108[4][8][0],&g_108[4][8][0],&g_108[4][8][0]};
static unsigned char *g_920 = &g_708.f3;
static unsigned char **g_919[8] = {&g_920,&g_920,&g_920,&g_920,&g_920,&g_920,&g_920,&g_920};
static unsigned char ***g_918 = &g_919[7];
static int g_1020 = 0xEFB10913L;
static unsigned g_1042 = 0xE0AF26FCL;



static unsigned func_1(void);
static struct S0 func_2(char p_3, struct S0 p_4, unsigned char p_5, long long p_6);
static int func_16(unsigned short p_17, char * p_18, unsigned long long p_19);
static unsigned long long func_28(unsigned long long p_29, unsigned short * p_30, int p_31);
static unsigned short * func_33(unsigned short * p_34, char * p_35, char * p_36, unsigned short p_37, char p_38);
static unsigned short * func_39(unsigned short * p_40);
static unsigned short * func_41(unsigned short p_42, unsigned p_43, char * p_44, char p_45, unsigned p_46);
static char * func_47(char * p_48, unsigned short * p_49);
static char * func_50(unsigned short * p_51, char * p_52, char * p_53);
static unsigned short * func_54(char p_55);
static unsigned func_1(void)
{
    struct S0 l_8 = {18446744073709551615UL,0x71F09A2BL,-1L,4UL,8UL,0x50A4BA31L,0x468AL,1UL,4294967294UL};
    char *l_12 = &g_13;
    struct S0 *l_911 = &g_708;
    unsigned short *l_912 = &g_708.f6;
    int l_913 = 0L;
    unsigned short *l_914 = &g_90.f6;
    unsigned char *l_917 = &g_90.f3;
    unsigned char **l_916[8][7][4] = {{{&l_917,&l_917,&l_917,&l_917},{(void*)0,(void*)0,(void*)0,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,(void*)0},{&l_917,(void*)0,(void*)0,&l_917}},{{(void*)0,&l_917,&l_917,&l_917},{&l_917,&l_917,(void*)0,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,(void*)0,(void*)0,&l_917},{&l_917,&l_917,&l_917,&l_917}},{{&l_917,&l_917,(void*)0,(void*)0},{&l_917,&l_917,&l_917,(void*)0},{(void*)0,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917}},{{&l_917,(void*)0,(void*)0,&l_917},{(void*)0,&l_917,(void*)0,&l_917},{&l_917,(void*)0,&l_917,(void*)0},{(void*)0,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917}},{{&l_917,&l_917,&l_917,&l_917},{(void*)0,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,&l_917,(void*)0,&l_917},{&l_917,(void*)0,&l_917,(void*)0},{&l_917,&l_917,&l_917,(void*)0},{&l_917,&l_917,&l_917,&l_917}},{{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,(void*)0,(void*)0},{&l_917,&l_917,&l_917,(void*)0},{&l_917,&l_917,&l_917,(void*)0},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,(void*)0}},{{(void*)0,&l_917,&l_917,(void*)0},{&l_917,(void*)0,&l_917,&l_917},{(void*)0,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,&l_917},{(void*)0,&l_917,&l_917,(void*)0}},{{&l_917,&l_917,&l_917,&l_917},{(void*)0,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,&l_917,&l_917,&l_917},{&l_917,(void*)0,&l_917,(void*)0},{(void*)0,&l_917,&l_917,(void*)0},{&l_917,(void*)0,&l_917,&l_917}}};
    unsigned char ***l_915 = &l_916[7][4][1];
    unsigned char ****l_921 = &g_918;
    unsigned char ***l_922[10][3][4] = {{{(void*)0,&l_916[7][4][1],(void*)0,&l_916[3][1][3]},{(void*)0,&l_916[3][1][3],&l_916[3][1][3],(void*)0},{&l_916[4][1][1],&l_916[3][1][3],&g_919[5],&l_916[3][1][3]}},{{&l_916[3][1][3],&l_916[7][4][1],&g_919[5],&g_919[5]},{&l_916[4][1][1],&l_916[4][1][1],&l_916[3][1][3],&g_919[5]},{(void*)0,&l_916[7][4][1],(void*)0,&l_916[3][1][3]}},{{(void*)0,&l_916[3][1][3],&l_916[3][1][3],(void*)0},{&l_916[4][1][1],&l_916[3][1][3],&g_919[5],&l_916[3][1][3]},{&l_916[3][1][3],&l_916[7][4][1],&g_919[5],&g_919[5]}},{{&l_916[4][1][1],&l_916[4][1][1],&l_916[3][1][3],&g_919[5]},{(void*)0,&l_916[7][4][1],(void*)0,&l_916[3][1][3]},{(void*)0,&l_916[3][1][3],&l_916[3][1][3],(void*)0}},{{&l_916[4][1][1],&l_916[3][1][3],&g_919[5],&l_916[3][1][3]},{&l_916[3][1][3],&l_916[7][4][1],&g_919[5],&g_919[5]},{&l_916[4][1][1],&l_916[4][1][1],&l_916[3][1][3],&g_919[5]}},{{&l_916[7][4][1],&l_916[3][1][3],&l_916[7][4][1],&g_919[5]},{&l_916[7][4][1],&g_919[5],&g_919[5],&l_916[7][4][1]},{(void*)0,&g_919[5],&l_916[4][1][1],&g_919[5]}},{{&g_919[5],&l_916[3][1][3],&l_916[4][1][1],&l_916[4][1][1]},{(void*)0,(void*)0,&g_919[5],&l_916[4][1][1]},{&l_916[7][4][1],&l_916[3][1][3],&l_916[7][4][1],&g_919[5]}},{{&l_916[7][4][1],&g_919[5],&g_919[5],&l_916[7][4][1]},{(void*)0,&g_919[5],&l_916[4][1][1],&g_919[5]},{&g_919[5],&l_916[3][1][3],&l_916[4][1][1],&l_916[4][1][1]}},{{(void*)0,(void*)0,&g_919[5],&l_916[4][1][1]},{&l_916[7][4][1],&l_916[3][1][3],&l_916[7][4][1],&g_919[5]},{&l_916[7][4][1],&g_919[5],&g_919[5],&l_916[7][4][1]}},{{(void*)0,&g_919[5],&l_916[4][1][1],&g_919[5]},{&g_919[5],&l_916[3][1][3],&l_916[4][1][1],&l_916[4][1][1]},{(void*)0,(void*)0,&g_919[5],&l_916[4][1][1]}}};
    long long *l_923 = &g_308;
    int l_924[8][10][3] = {{{(-1L),9L,1L},{6L,0xB8028EACL,(-1L)},{0xC7AA7CF6L,0x5F876A17L,0xAE13AF58L},{0xDAAEC1AAL,(-10L),0xD851E28DL},{0L,0xD3E5DFF5L,0xBE2D2940L},{0x73187438L,0xEB8E3910L,1L},{0x5F876A17L,0L,0xBE2D2940L},{6L,6L,0xD851E28DL},{1L,1L,0xAE13AF58L},{0L,0xC8CEDC1AL,(-1L)}},{{0x82E76EA7L,0xD3E5DFF5L,1L},{0L,0L,0xDAAEC1AAL},{0L,0x4FCF501AL,0x5F876A17L},{0x72570B21L,8L,0x88AD0FC5L},{(-1L),1L,(-1L)},{0xB6FD4438L,0x247A525BL,0L},{(-1L),1L,(-1L)},{0L,(-2L),0x88AD0FC5L},{1L,(-1L),0x5F876A17L},{8L,6L,0xDAAEC1AAL}},{{0x26D18542L,1L,1L},{(-2L),0xD01319E6L,0xDAAEC1AAL},{(-1L),(-1L),0x5F876A17L},{0L,(-7L),0x88AD0FC5L},{0L,0xA796FCC7L,(-1L)},{0x72570B21L,6L,0L},{0x4FCF501AL,0L,(-1L)},{(-2L),0L,0x88AD0FC5L},{(-1L),1L,0x5F876A17L},{0xD01319E6L,0L,0xDAAEC1AAL}},{{1L,0xA796FCC7L,1L},{0x34F0ED4FL,8L,0xDAAEC1AAL},{0x4FCF501AL,0L,0x5F876A17L},{0xB6FD4438L,0xD01319E6L,0x88AD0FC5L},{1L,0L,(-1L)},{0L,0L,0L},{0L,(-1L),(-1L)},{0x34F0ED4FL,0x34F0ED4FL,0x88AD0FC5L},{0x26D18542L,0L,0x5F876A17L},{(-7L),0x247A525BL,0xDAAEC1AAL}},{{(-1L),0L,1L},{0L,(-7L),0xDAAEC1AAL},{0L,0x4FCF501AL,0x5F876A17L},{0x72570B21L,8L,2L},{1L,1L,0xD3E5DFF5L},{6L,(-7L),0x977D5399L},{0x26D18542L,0x9BE03C8CL,0xD3E5DFF5L},{0xB6FD4438L,0x72570B21L,2L},{0L,1L,0x82E76EA7L},{0x0EBB45B9L,0xD01319E6L,0xA892F70AL}},{{1L,1L,1L},{0x72570B21L,0xFF8B95FFL,0xA892F70AL},{0x26D18542L,0x26D18542L,0x82E76EA7L},{0L,0x205A092CL,2L},{0x1E05DB88L,0L,0xD3E5DFF5L},{0x247A525BL,0xD01319E6L,0x977D5399L},{1L,0x1E05DB88L,0xD3E5DFF5L},{0x72570B21L,0xB6FD4438L,2L},{0xA796FCC7L,0x9BE03C8CL,0x82E76EA7L},{0xFF8B95FFL,8L,0xA892F70AL}},{{0L,0L,1L},{0L,0x0EBB45B9L,0xA892F70AL},{1L,(-1L),0x82E76EA7L},{6L,0xFF8B95FFL,2L},{0x9BE03C8CL,(-1L),0xD3E5DFF5L},{0L,8L,0x977D5399L},{(-1L),1L,0xD3E5DFF5L},{0L,0L,2L},{1L,0x1E05DB88L,0x82E76EA7L},{0x205A092CL,(-7L),0xA892F70AL}},{{0xA796FCC7L,(-1L),1L},{0xB6FD4438L,0x205A092CL,0xA892F70AL},{(-1L),1L,0x82E76EA7L},{0x247A525BL,0x0EBB45B9L,2L},{1L,1L,0xD3E5DFF5L},{6L,(-3L),0x205A092CL},{0x6D400340L,0xAE13AF58L,0L},{0L,2L,0x72570B21L},{(-7L),0x8285E24BL,(-1L)},{0xD851E28DL,0x8AB98677L,6L}}};
    unsigned char l_932 = 0xEEL;
    unsigned long long l_949 = 0xC270976EE3094D6CLL;
    unsigned char l_997 = 255UL;
    unsigned char l_1033 = 251UL;
    char l_1038 = 0x26L;
    int *l_1088 = &l_913;
    int i, j, k;
    (*l_911) = func_2(g_7, l_8, l_8.f8, (safe_rshift_func_int8_t_s_u(((*l_12) = (g_11 = l_8.f6)), l_8.f1)));
    if (l_8.f5)
    {
        unsigned long long l_927[3];
        struct S0 l_951 = {18446744073709551609UL,0x62251FE7L,0L,249UL,18446744073709551615UL,0xA1CC3B74L,65529UL,0xA817L,0x12952D32L};
        int **l_957 = (void*)0;
        int l_959 = 0xCBE1E4D3L;
        int *l_963 = &l_924[4][0][0];
        short l_986 = 0xAD11L;
        int i;
        for (i = 0; i < 3; i++)
            l_927[i] = 0x1929824A32246CADLL;
        if (l_927[0])
        {
            unsigned char l_928[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
            int l_929 = 0xA7598C17L;
            struct S0 l_952 = {0UL,4294967295UL,0x15A9L,0UL,0xC86A2365969C3419LL,0xBD04985AL,1UL,0x3F6CL,4294967288UL};
            char l_994 = (-1L);
            int **l_998 = &g_905[1];
            int i;
            if ((l_932 = (((g_108[4][8][0] < 0UL) > (l_929 = ((*l_12) = (0x3999B8B3L < l_928[5])))) ^ (safe_lshift_func_int8_t_s_s(0xFEL, 1)))))
            {
                for (l_8.f4 = 0; (l_8.f4 == 57); l_8.f4 = safe_add_func_int64_t_s_s(l_8.f4, 4))
                {
                    (*g_118) = &l_929;
                }
            }
            else
            {
                int l_944 = 0x07D41D07L;
                int l_958 = 0x00B966F4L;
                unsigned char l_988 = 0x47L;
                struct S0 l_990[8][10] = {{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL}},{{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{0x8E8EE4DDL,4294967288UL,0x4746L,250UL,0x906F36E2D257B987LL,2UL,0UL,0xE55CL,1UL},{0x188C7A71L,0UL,0x36C6L,0x74L,0x1918C989C2C0908FLL,1UL,0xA9A8L,0x9308L,0xBEF739ADL},{0x188C7A71L,0UL,0x36C6L,0x74L,0x1918C989C2C0908FLL,1UL,0xA9A8L,0x9308L,0xBEF739ADL},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L},{8UL,4294967290UL,-5L,0xA4L,0UL,0x98CD2B4AL,0x595EL,0x56ADL,0x6BD760B4L},{0x2C26D77EL,0x219576B4L,0L,0UL,18446744073709551607UL,0xF0C55C35L,65535UL,7UL,0x11598DA9L}}};
                unsigned l_993[9][2] = {{0x4A4DAC25L,0x22BBC33FL},{0UL,0x22BBC33FL},{0x4A4DAC25L,0x22BBC33FL},{0UL,0x22BBC33FL},{0x4A4DAC25L,0x22BBC33FL},{0UL,0x22BBC33FL},{0x4A4DAC25L,0x22BBC33FL},{0UL,0x22BBC33FL},{0x4A4DAC25L,0x22BBC33FL}};
                int i, j;
                if (((l_8.f3 || (l_928[0] != l_8.f8)) >= ((**g_808) ^ ((*l_923) = g_708.f7))))
                {
                    int l_943 = (-1L);
                    char *l_950 = &g_78;
                    int *l_953 = &l_913;
                    for (g_161 = (-7); (g_161 == 28); ++g_161)
                    {
                        int *l_937 = &l_913;
                        int *l_938 = &l_924[6][6][2];
                        if (l_924[6][6][2])
                            break;
                        (*l_937) = l_927[2];
                        (*g_118) = l_938;
                    }
                    (*l_911) = l_952;
                    (*g_118) = (*g_118);
                    for (g_90.f1 = 0; (g_90.f1 <= 1); g_90.f1 += 1)
                    {
                        if (l_951.f3)
                            break;
                        (*g_118) = l_953;
                    }
                }
                else
                {
                    struct S0 l_954 = {18446744073709551606UL,0UL,1L,0x57L,0x8834F6D651D9C27ALL,0x69605559L,0x60D0L,65532UL,0x9EE2D53CL};
                    int *l_962 = &g_108[4][8][0];
                    (*l_911) = l_954;
                    if ((safe_add_func_int8_t_s_s((&g_905[2] == (g_118 = l_957)), ((***g_918) = ((l_958 = g_607[3][1]) != l_944)))))
                    {
                        long long l_960 = 0L;
                        int *l_961 = &l_958;
                        l_959 = l_944;
                        (*l_961) = l_960;
                        l_963 = l_962;
                        (*l_961) = (safe_rshift_func_int16_t_s_s(0x9AE6L, 5));
                    }
                    else
                    {
                        (*l_962) = (l_958 = l_944);
                    }
                }
                for (g_90.f5 = 0; (g_90.f5 == 30); ++g_90.f5)
                {
                    long long l_987 = 1L;
                    if ((safe_div_func_int32_t_s_s((&g_905[1] == &l_963), (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(3UL, (**g_808))), (safe_add_func_int64_t_s_s(((l_988 = (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_952.f7 <= (safe_add_func_uint8_t_u_u(l_958, (safe_rshift_func_int8_t_s_s((l_986 || ((**g_808) & 18446744073709551615UL)), l_929))))), 12)) && l_987), (*g_439))), 4294967293UL))) || (*l_963)), l_987)))))))
                    {
                        int **l_989 = &g_905[2];
                        (*l_989) = &g_108[4][8][0];
                        l_929 = l_952.f1;
                    }
                    else
                    {
                        return l_8.f2;
                    }
                    return l_987;
                }
                l_951 = l_990[5][8];
                (*l_963) = ((safe_rshift_func_uint16_t_u_u((l_994 == g_559[5]), 14)) ^ (safe_div_func_int8_t_s_s(((l_932 | (*l_963)) ^ 1UL), l_997)));
            }
            (*l_998) = &g_355;
        }
        else
        {
            (*g_118) = (*g_118);
            (*l_963) = l_8.f8;
        }
    }
    else
    {
        struct S0 l_999[8] = {{9UL,4294967286UL,-9L,0xB6L,0x5242F106B18BA866LL,0x7F4A067BL,8UL,1UL,0x36B5D191L},{1UL,0x24A7C189L,3L,0xF0L,0x35CE2A49AC15F111LL,0xFA645BF6L,0xE5EEL,0UL,4294967295UL},{9UL,4294967286UL,-9L,0xB6L,0x5242F106B18BA866LL,0x7F4A067BL,8UL,1UL,0x36B5D191L},{1UL,0x24A7C189L,3L,0xF0L,0x35CE2A49AC15F111LL,0xFA645BF6L,0xE5EEL,0UL,4294967295UL},{9UL,4294967286UL,-9L,0xB6L,0x5242F106B18BA866LL,0x7F4A067BL,8UL,1UL,0x36B5D191L},{1UL,0x24A7C189L,3L,0xF0L,0x35CE2A49AC15F111LL,0xFA645BF6L,0xE5EEL,0UL,4294967295UL},{9UL,4294967286UL,-9L,0xB6L,0x5242F106B18BA866LL,0x7F4A067BL,8UL,1UL,0x36B5D191L},{1UL,0x24A7C189L,3L,0xF0L,0x35CE2A49AC15F111LL,0xFA645BF6L,0xE5EEL,0UL,4294967295UL}};
        unsigned char ***l_1003 = &l_916[7][4][1];
        unsigned char ***l_1004 = &l_916[3][0][0];
        short *l_1005 = &l_999[4].f2;
        int l_1009 = 0x7111C16FL;
        short l_1032 = 0x7CC3L;
        struct S0 l_1046 = {9UL,0UL,0xE3DCL,0UL,0xD6D780CFF2B44FF9LL,4294967294UL,65532UL,1UL,0UL};
        char *l_1067 = &g_161;
        int l_1068 = 0x470D64FDL;
        int *l_1079[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1079[i][j] = &g_58;
        }
        l_999[5] = ((*l_911) = l_999[4]);
        for (l_8.f1 = 0; (l_8.f1 != 8); ++l_8.f1)
        {
            (*g_118) = (*g_118);
            (*g_118) = (*g_118);
            return l_999[4].f3;
        }
        (*g_118) = (*g_118);
        if (((safe_unary_minus_func_int32_t_s(l_999[4].f1)) != ((*l_1005) = (l_1003 == (l_1004 = (*l_921))))))
        {
            short l_1008 = (-9L);
            struct S0 l_1048 = {1UL,4294967295UL,9L,250UL,0x1E5832E9EED4B0DBLL,0xC48095A7L,0x6D8CL,0UL,0x35D7A1B1L};
            for (l_997 = 0; (l_997 <= 2); l_997 += 1)
            {
                int l_1012 = 0L;
                unsigned char l_1028[7] = {0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL};
                unsigned short l_1044[8][1][10] = {{{0xDBD0L,1UL,0xB142L,1UL,0xDBD0L,0x716AL,65532UL,0x9802L,1UL,0x71F2L}},{{0x716AL,65532UL,0x9802L,1UL,0x71F2L,0xD9D5L,0x0AF1L,0x0AF1L,0xD9D5L,0x71F2L}},{{0xB142L,1UL,1UL,0xB142L,0xDBD0L,1UL,0UL,0x716AL,65535UL,65532UL}},{{0x5548L,0xDBD0L,65530UL,0xD9D5L,65535UL,0UL,1UL,0UL,65535UL,0xD9D5L}},{{65532UL,0x5548L,65532UL,0xB142L,0x0AF1L,0x433DL,65535UL,65534UL,0xD9D5L,0UL}},{{0UL,0x433DL,0xDBD0L,1UL,65534UL,0x71F2L,0x71F2L,65534UL,65535UL,0UL}},{{0UL,0UL,1UL,0x0AF1L,0x71F2L,0xB142L,1UL,0UL,1UL,65530UL}},{{0x5548L,0x9802L,0UL,65534UL,1UL,0x716AL,1UL,65534UL,0UL,0x9802L}}};
                struct S0 l_1050 = {2UL,0UL,0x1438L,0xA5L,0x1774B7B497B96C3CLL,0UL,4UL,0xCA8DL,4294967295UL};
                int i, j, k;
            }
        }
        else
        {
            short l_1051 = (-5L);
            int *l_1091 = &g_355;
            if (l_1051)
            {
                unsigned *l_1054 = &l_8.f5;
                int l_1056[1];
                struct S0 *l_1086[4][9][7] = {{{&g_708,&l_999[6],&l_999[6],&g_708,&l_1046,(void*)0,&l_1046},{&g_708,&l_999[4],&l_8,&g_708,&l_999[4],&l_1046,&g_708},{(void*)0,&l_999[2],&g_90,&g_708,&l_8,&l_1046,&l_1046},{&l_1046,(void*)0,&g_708,&g_90,&g_90,&g_708,&l_1046},{&g_90,&g_708,&l_1046,&g_708,&l_8,&l_999[4],&l_999[4]},{&l_999[4],(void*)0,&g_90,&l_999[4],&l_999[6],&l_999[0],&l_999[0]},{&g_90,&l_999[2],(void*)0,&l_999[2],&g_90,(void*)0,&l_1046},{&l_999[4],&l_999[4],&l_999[3],&l_8,&l_999[4],&l_1046,&l_999[3]},{&l_8,&l_8,&l_1046,&l_8,&g_708,(void*)0,(void*)0}},{{&l_999[4],&l_8,&g_90,&l_1046,(void*)0,&l_999[4],&g_90},{&g_90,&l_999[4],&g_708,&l_999[4],&g_708,&g_708,&l_1046},{(void*)0,&g_90,&l_999[3],&g_708,&l_999[3],&l_8,&g_90},{(void*)0,&l_999[4],(void*)0,(void*)0,&l_999[4],(void*)0,&g_90},{&l_999[4],&l_8,&l_1046,&l_1046,&l_999[4],&l_999[6],&g_90},{&g_90,(void*)0,&l_999[4],&g_90,&g_90,&l_1046,&g_90},{&l_1046,&l_8,&g_708,&l_999[4],&l_8,&g_90,&g_708},{&l_1046,&l_999[4],&l_999[4],(void*)0,(void*)0,&g_90,&g_90},{&l_999[4],&g_90,&l_8,&g_90,&l_8,&l_1046,&l_1046}},{{(void*)0,&g_90,&l_999[2],(void*)0,&l_999[2],&g_90,(void*)0},{&g_708,&g_708,&l_1046,&l_1046,&l_999[3],&l_8,&l_1046},{&g_708,&g_90,&g_90,(void*)0,&l_999[4],&g_90,&l_999[6]},{&g_90,&l_999[3],&l_1046,&l_1046,&l_999[6],&l_999[4],&l_1046},{&l_1046,&l_8,&l_999[2],&g_708,(void*)0,(void*)0,&l_8},{(void*)0,&g_708,&l_8,&l_1046,(void*)0,&l_999[4],&l_1046},{&g_90,(void*)0,&l_999[4],(void*)0,(void*)0,&l_999[4],(void*)0},{&l_999[6],&l_1046,&l_999[4],(void*)0,&l_1046,&l_8,&g_708},{&l_999[6],&l_999[4],&g_708,&g_90,&l_999[4],&l_8,(void*)0}},{{&l_1046,&l_1046,&l_1046,(void*)0,&g_708,&g_90,&g_90},{&g_708,(void*)0,&l_999[2],(void*)0,&l_999[4],(void*)0,&g_708},{&l_999[3],&l_999[3],&l_999[6],&l_1046,&l_8,&g_708,&l_999[3]},{&l_999[4],&l_999[6],&g_708,(void*)0,&l_999[2],(void*)0,&g_708},{&l_999[4],&l_999[4],&l_999[4],&g_708,&l_1046,(void*)0,&g_708},{&l_8,(void*)0,&l_1046,&l_8,&g_90,&g_90,&g_90},{&g_708,&l_1046,(void*)0,&l_999[4],&l_1046,&l_1046,&l_999[4]},{&g_90,&g_708,&l_8,&l_999[4],&l_999[2],&l_1046,&l_999[4]},{&g_708,&l_999[3],(void*)0,&l_999[4],&l_8,(void*)0,&g_90}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1056[i] = 0L;
                (*g_118) = (*g_118);
                if ((0xAD84C5B5L == ((*l_1054) = (safe_rshift_func_uint16_t_u_s(65529UL, 6)))))
                {
                    int *l_1055 = &l_924[1][5][2];
                    int l_1066 = 1L;
                    unsigned short *l_1075 = (void*)0;
                    struct S0 l_1087 = {18446744073709551609UL,0x9D1CECD1L,1L,0xFBL,1UL,4294967288UL,0x9524L,1UL,4294967293UL};
                    int **l_1089 = &g_905[1];
                    l_1056[0] = ((&g_90 != (void*)0) >= ((*l_1055) = 0xC238AD48L));
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((!((*l_923) = l_8.f6)), l_1046.f8)), ((*l_1005) = l_1068))))
                    {
                        int *l_1076[8][6] = {{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0},{&l_1056[0],(void*)0,(void*)0,&l_1056[0],(void*)0,(void*)0}};
                        int i, j;
                        (*g_118) = (void*)0;
                        (*g_118) = (*g_118);
                        (*l_1055) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0x3D7F90D12D613F58LL, l_1056[0])), l_1056[0])), (&g_21 == l_1075)));
                        l_1009 = ((*l_1055) = l_1051);
                    }
                    else
                    {
                        int **l_1077 = &g_905[1];
                        int **l_1078[2][1];
                        int *l_1080 = &g_355;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1078[i][j] = &l_1055;
                        }
                        g_118 = (void*)0;
                        (*l_1055) = ((+65528UL) ^ (*l_1055));
                        l_1079[3][0] = ((*l_1077) = &g_58);
                        l_1080 = &g_108[4][8][0];
                    }
                    for (g_13 = 5; (g_13 >= 1); g_13 -= 1)
                    {
                        long long l_1083 = 0xAB7217D18F1CBC3BLL;
                        int i;
                        l_924[6][6][2] = ((*g_439) != ((safe_div_func_uint64_t_u_u(8UL, l_1083)) < (((*l_914) = (l_8.f4 > (0xBAL > ((*l_1055) & (l_1056[0] <= (safe_add_func_int16_t_s_s(((*l_1005) = g_708.f1), l_1056[0]))))))) == (*g_439))));
                        (*g_321) = l_1086[1][5][6];
                        (*l_911) = l_1087;
                    }
                    (*l_1089) = l_1088;
                }
                else
                {
                    int *l_1090 = &l_1009;
                    struct S0 l_1092[8][4] = {{{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL}},{{0xEA84181BL,4294967295UL,0x4488L,0x96L,0xE196F958D70C033CLL,3UL,6UL,7UL,0x2BA4C9F0L},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL}},{{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0xB10D449AL,0xFB69A933L,0xF257L,246UL,0x61EC1B0C625A0BB5LL,5UL,0UL,1UL,0xE4B377D6L},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L}},{{0xEA84181BL,4294967295UL,0x4488L,0x96L,0xE196F958D70C033CLL,3UL,6UL,7UL,0x2BA4C9F0L},{0xEA84181BL,4294967295UL,0x4488L,0x96L,0xE196F958D70C033CLL,3UL,6UL,7UL,0x2BA4C9F0L},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L}},{{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL},{0xB10D449AL,0xFB69A933L,0xF257L,246UL,0x61EC1B0C625A0BB5LL,5UL,0UL,1UL,0xE4B377D6L},{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL}},{{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0x6898ED8CL,1UL,8L,255UL,0xA886DF913B9430CBLL,0x99CC19AAL,65535UL,0xC1ABL,4294967295UL}},{{0xEA84181BL,4294967295UL,0x4488L,0x96L,0xE196F958D70C033CLL,3UL,6UL,7UL,0x2BA4C9F0L},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L},{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL}},{{0UL,0x0A2A3E6DL,-10L,5UL,0x2B50670CC723F054LL,5UL,0x93C4L,0x13B7L,1UL},{0xB10D449AL,0xFB69A933L,0xF257L,246UL,0x61EC1B0C625A0BB5LL,5UL,0UL,1UL,0xE4B377D6L},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L},{0x23F3152AL,0x4FCE959CL,0xDC99L,0x67L,0x9AA0A4E576850155LL,4294967288UL,65535UL,65532UL,0x9CB0EA72L}}};
                    unsigned short l_1098 = 8UL;
                    int i, j;
                    l_1091 = l_1090;
                    (*l_911) = l_1092[7][2];
                    for (l_1046.f5 = 0; (l_1046.f5 <= 7); l_1046.f5 += 1)
                    {
                        int l_1095 = 0x0F1C3B4FL;
                        short *l_1105 = (void*)0;
                        short *l_1106[5];
                        int l_1107 = 0x60B828A8L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1106[i] = &l_1032;
                        l_1056[0] = ((safe_add_func_int16_t_s_s((0xE2DBL | ((l_1107 = ((***g_918) = (l_1095 >= (safe_sub_func_uint64_t_u_u(l_1098, l_1095))))) <= (*l_1090))), g_708.f0)) && 0L);
                    }
                }
            }
            else
            {
                int *l_1108 = &l_913;
                (*g_118) = l_1108;
                return (*l_1091);
            }
        }
    }
    (*l_911) = (*l_911);
    return g_1020;
}







static struct S0 func_2(char p_3, struct S0 p_4, unsigned char p_5, long long p_6)
{
    char *l_24 = &g_13;
    int l_25 = 2L;
    unsigned l_810 = 6UL;
    unsigned char *l_821 = &g_90.f3;
    unsigned char **l_820 = &l_821;
    struct S0 l_852 = {0x8E0382C3L,7UL,0xA73BL,255UL,0x972743D74D6E0631LL,0xC005FF07L,0UL,0xAB46L,0xA8CB452AL};
    unsigned *l_870 = (void*)0;
    unsigned *l_871 = &g_708.f5;
    int ***l_884 = &g_118;
    struct S0 **l_904 = &g_322;
lbl_842:
    for (p_4.f8 = 0; (p_4.f8 != 40); p_4.f8 = safe_add_func_int16_t_s_s(p_4.f8, 1))
    {
        unsigned short *l_20 = &g_21;
        unsigned short *l_22 = &g_23;
        int *l_791 = &g_108[2][0][0];
    }
    for (g_161 = 0; (g_161 != 28); ++g_161)
    {
        unsigned char **l_823 = &l_821;
        char **l_827 = &g_523[1];
        int *l_833 = &g_58;
        struct S0 l_838[7] = {{0x486EE7CFL,0xC2999263L,9L,0UL,0xC498DB5915772B02LL,0xC51D9A6AL,0xD0D9L,65526UL,4294967295UL},{0x486EE7CFL,0xC2999263L,9L,0UL,0xC498DB5915772B02LL,0xC51D9A6AL,0xD0D9L,65526UL,4294967295UL},{0UL,4294967293UL,0L,0x18L,0x53EABD5AA9313CE6LL,0xCE00111EL,65534UL,0x6555L,0x2D53DDA9L},{0x486EE7CFL,0xC2999263L,9L,0UL,0xC498DB5915772B02LL,0xC51D9A6AL,0xD0D9L,65526UL,4294967295UL},{0x486EE7CFL,0xC2999263L,9L,0UL,0xC498DB5915772B02LL,0xC51D9A6AL,0xD0D9L,65526UL,4294967295UL},{0UL,4294967293UL,0L,0x18L,0x53EABD5AA9313CE6LL,0xCE00111EL,65534UL,0x6555L,0x2D53DDA9L},{0x486EE7CFL,0xC2999263L,9L,0UL,0xC498DB5915772B02LL,0xC51D9A6AL,0xD0D9L,65526UL,4294967295UL}};
        int i;
        for (g_562 = (-1); (g_562 < 9); g_562++)
        {
            char **l_828 = &g_523[0];
            int *l_831 = (void*)0;
            for (g_81 = 0; (g_81 >= 3); g_81++)
            {
                int *l_817 = &g_58;
                char **l_826 = &g_523[0];
                struct S0 l_829 = {0x774A3661L,0x3EA0786EL,0x0486L,255UL,0xC83A4B1060B27100LL,4294967295UL,65529UL,0xE1E9L,0x7C642AEFL};
                int *l_832 = &g_108[5][2][2];
                (*g_118) = l_817;
                (*l_817) = (p_4.f0 >= ((g_708.f2 < p_4.f1) == ((**g_118) <= p_4.f6)));
                for (g_132 = 0; (g_132 != (-24)); --g_132)
                {
                    unsigned char ***l_822 = &l_820;
                    p_4 = p_4;
                    (*l_817) = p_4.f8;
                    l_823 = ((*l_822) = l_820);
                    if ((+(**g_118)))
                    {
                        (**g_118) = p_4.f8;
                        (**g_118) = (safe_rshift_func_uint16_t_u_u((p_4.f6 && (l_826 != (l_828 = l_827))), 15));
                        p_4 = p_4;
                        (*g_118) = (*g_118);
                    }
                    else
                    {
                        struct S0 *l_830 = &g_708;
                        (*l_830) = (p_4 = l_829);
                    }
                }
                for (g_708.f5 = 0; (g_708.f5 <= 9); g_708.f5 += 1)
                {
                    unsigned *l_835 = (void*)0;
                    unsigned **l_834 = &l_835;
                    for (g_90.f2 = 7; (g_90.f2 >= 2); g_90.f2 -= 1)
                    {
                        l_832 = l_831;
                    }
                    for (p_4.f0 = 0; (p_4.f0 <= 9); p_4.f0 += 1)
                    {
                        (*g_118) = l_833;
                        (*g_424) = l_834;
                    }
                    return p_4;
                }
            }
            for (g_355 = 0; (g_355 >= 15); ++g_355)
            {
                struct S0 *l_839 = (void*)0;
                struct S0 *l_840 = (void*)0;
                struct S0 *l_841 = &g_90;
                (*l_841) = l_838[5];
                l_831 = ((*g_118) = (*g_118));
                if (p_4.f1)
                    goto lbl_842;
                (*g_321) = &p_4;
            }
        }
        for (g_132 = 12; (g_132 != (-29)); --g_132)
        {
            struct S0 l_849 = {0x87D51868L,0UL,-1L,0UL,0x9D461DBD26AC0383LL,0x27887169L,0UL,3UL,0x1E3C785BL};
            for (g_21 = 0; (g_21 >= 15); g_21 = safe_add_func_uint16_t_u_u(g_21, 8))
            {
                for (g_708.f0 = 7; (g_708.f0 < 49); g_708.f0++)
                {
                    l_849 = p_4;
                }
                (**g_118) = (-1L);
            }
            for (g_81 = (-16); (g_81 >= 6); ++g_81)
            {
                return l_852;
            }
            for (p_4.f1 = 10; (p_4.f1 < 32); p_4.f1 = safe_add_func_uint16_t_u_u(p_4.f1, 2))
            {
                char l_855[7] = {0x92L,0x92L,0x92L,0x92L,0x92L,0x92L,0x92L};
                int i;
                (**g_118) = ((l_855[5] < 0xCDL) == (safe_div_func_uint32_t_u_u((0UL == ((*l_833) == (safe_rshift_func_uint16_t_u_s((*g_439), (p_4.f6 | l_849.f8))))), p_4.f0)));
                return p_4;
            }
        }
    }
    if ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((0x15C8128CC8419587LL | (safe_sub_func_uint8_t_u_u(g_13, ((**g_118) ^ ((*l_871) = p_4.f0))))), ((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_3 >= p_6), 3)) < (l_852.f0 | ((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_4.f3 = (l_852.f3 == (safe_sub_func_uint16_t_u_u(0x9068L, 0UL)))), l_852.f1)), l_852.f6)), p_6)) >= 1UL))), l_852.f5)) >= 0x97814195L) <= (*g_439)) ^ 0x6004C19AL))) > 8L) != l_852.f7), 7)), g_58)), g_23)))
    {
        long long l_899 = 1L;
        int *l_907 = &g_355;
        if (((4294967294UL | l_810) >= (l_884 != l_884)))
        {
            for (p_4.f3 = 7; (p_4.f3 >= 46); p_4.f3 = safe_add_func_int64_t_s_s(p_4.f3, 8))
            {
                if ((***l_884))
                    break;
                if (p_4.f1)
                    continue;
            }
            for (g_81 = 0; (g_81 < 48); g_81 = safe_add_func_uint64_t_u_u(g_81, 4))
            {
                return p_4;
            }
        }
        else
        {
            unsigned l_902 = 0xB0BD7683L;
            int *l_906 = &g_108[5][5][2];
            for (l_852.f1 = 0; (l_852.f1 != 19); ++l_852.f1)
            {
                unsigned l_898 = 0UL;
                for (g_90.f3 = 26; (g_90.f3 > 36); g_90.f3 = safe_add_func_uint64_t_u_u(g_90.f3, 4))
                {
                    for (l_852.f5 = 0; (l_852.f5 < 30); l_852.f5 = safe_add_func_int16_t_s_s(l_852.f5, 5))
                    {
                        int *l_895 = &g_108[0][0][1];
                        l_895 = (*g_118);
                        l_898 = (safe_sub_func_uint8_t_u_u(p_4.f5, 0L));
                    }
                    (**g_320) = (*g_321);
                }
                (**g_118) = ((l_899 || l_898) > (***l_884));
                for (g_81 = 0; (g_81 != 49); g_81++)
                {
                    struct S0 **l_903 = &g_322;
                    (***l_884) = (**g_118);
                    if (l_902)
                        break;
                    (***l_884) = ((l_903 != l_904) & (((*g_809) = 0x0F59CA11571DDC17LL) && p_3));
                    if (p_3)
                    {
                        (***l_884) = p_4.f3;
                        (**g_118) = 0x05598887L;
                    }
                    else
                    {
                        p_4 = p_4;
                    }
                }
            }
            for (g_7 = 6; (g_7 >= 0); g_7 -= 1)
            {
                int i;
                g_905[1] = (g_94[g_7] = (**l_884));
            }
            (*g_118) = l_906;
        }
        (*g_118) = l_907;
    }
    else
    {
        (*g_118) = (*g_118);
        for (g_23 = 0; (g_23 < 39); g_23++)
        {
            return p_4;
        }
        (*g_118) = (void*)0;
    }
    for (g_90.f3 = 0; (g_90.f3 <= 9); g_90.f3 += 1)
    {
        struct S0 l_910[7][4] = {{{0x588EFB98L,1UL,0xECCAL,3UL,0UL,4294967295UL,0xF250L,65534UL,1UL},{0xA03EEE7AL,0x57CA2E8DL,0xCC20L,1UL,4UL,1UL,0x3914L,0x3A78L,0xAB4D7C4DL},{18446744073709551615UL,1UL,0x1E87L,1UL,18446744073709551609UL,0xD67B466FL,65535UL,0xDFD9L,0xFA6D1383L},{0x52C62A5AL,0xAE985ACAL,1L,0x29L,18446744073709551615UL,3UL,1UL,0xAA88L,0x69C47670L}},{{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL},{0xA03EEE7AL,0x57CA2E8DL,0xCC20L,1UL,4UL,1UL,0x3914L,0x3A78L,0xAB4D7C4DL},{0xA03EEE7AL,0x57CA2E8DL,0xCC20L,1UL,4UL,1UL,0x3914L,0x3A78L,0xAB4D7C4DL},{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL}},{{0xA03EEE7AL,0x57CA2E8DL,0xCC20L,1UL,4UL,1UL,0x3914L,0x3A78L,0xAB4D7C4DL},{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL},{0x588EFB98L,1UL,0xECCAL,3UL,0UL,4294967295UL,0xF250L,65534UL,1UL},{0xFAE8E429L,0x1A99F5F3L,0xE5F5L,0x28L,0x95DDFBE1ED3799CFLL,4294967295UL,65529UL,0UL,0x04ABF851L}},{{0xA03EEE7AL,0x57CA2E8DL,0xCC20L,1UL,4UL,1UL,0x3914L,0x3A78L,0xAB4D7C4DL},{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL},{18446744073709551615UL,1UL,0x1E87L,1UL,18446744073709551609UL,0xD67B466FL,65535UL,0xDFD9L,0xFA6D1383L},{0x588EFB98L,1UL,0xECCAL,3UL,0UL,4294967295UL,0xF250L,65534UL,1UL}},{{0xFAE8E429L,0x1A99F5F3L,0xE5F5L,0x28L,0x95DDFBE1ED3799CFLL,4294967295UL,65529UL,0UL,0x04ABF851L},{0x52C62A5AL,0xAE985ACAL,1L,0x29L,18446744073709551615UL,3UL,1UL,0xAA88L,0x69C47670L},{0x588EFB98L,1UL,0xECCAL,3UL,0UL,4294967295UL,0xF250L,65534UL,1UL},{0x588EFB98L,1UL,0xECCAL,3UL,0UL,4294967295UL,0xF250L,65534UL,1UL}},{{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL},{0x2F893C6DL,0x1C11DEB3L,-1L,8UL,0xD22B462C45C4DD9ELL,0x9FD8B330L,1UL,1UL,6UL},{0xA2E76486L,8UL,-3L,0UL,0x7065BE59F163E4D6LL,1UL,0xD871L,0xBF4CL,1UL},{0x52C62A5AL,0xAE985ACAL,1L,0x29L,18446744073709551615UL,3UL,1UL,0xAA88L,0x69C47670L}},{{0x52C62A5AL,0xAE985ACAL,1L,0x29L,18446744073709551615UL,3UL,1UL,0xAA88L,0x69C47670L},{0xFAE8E429L,0x1A99F5F3L,0xE5F5L,0x28L,0x95DDFBE1ED3799CFLL,4294967295UL,65529UL,0UL,0x04ABF851L},{0xA2E76486L,8UL,-3L,0UL,0x7065BE59F163E4D6LL,1UL,0xD871L,0xBF4CL,1UL},{0xFAE8E429L,0x1A99F5F3L,0xE5F5L,0x28L,0x95DDFBE1ED3799CFLL,4294967295UL,65529UL,0UL,0x04ABF851L}}};
        int i, j;
        return l_910[1][1];
    }
    return p_4;
}







static int func_16(unsigned short p_17, char * p_18, unsigned long long p_19)
{
    int l_32 = 3L;
    char *l_160 = &g_161;
    char *l_249[6][6] = {{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161}};
    unsigned char *l_727[6] = {&g_708.f3,&g_708.f3,&g_708.f3,&g_708.f3,&g_708.f3,&g_708.f3};
    int l_728 = 1L;
    int *l_729[5] = {&g_108[4][8][1],&g_108[4][8][1],&g_108[4][8][1],&g_108[4][8][1],&g_108[4][8][1]};
    unsigned char l_730 = 0UL;
    unsigned long long l_787 = 18446744073709551607UL;
    int i, j;
    l_730 = ((l_32 = (safe_add_func_uint64_t_u_u(p_19, func_28(l_32, func_33(func_39(func_41(g_7, l_32, func_47(func_50(func_54(g_11), l_160, l_160), &g_21), g_161, p_19)), l_249[0][3], p_18, l_32, l_32), p_17)))) <= l_728);
    if (g_11)
        goto lbl_731;
lbl_731:
    (*g_118) = &l_32;
    for (g_7 = 4; (g_7 != 21); ++g_7)
    {
        int l_734 = 1L;
        if (l_734)
            break;
        return l_734;
    }
    for (g_708.f3 = 0; (g_708.f3 <= 29); ++g_708.f3)
    {
        unsigned long long l_744 = 0x2CFDAB55A731FBDBLL;
        int l_745 = (-8L);
        unsigned char *l_753 = &g_708.f3;
        int *l_769 = &l_728;
        struct S0 l_789 = {1UL,0xE9859571L,2L,0xA9L,0x4DAD8B8FF31CB2CCLL,0xEB5FF0C4L,1UL,0xC25BL,8UL};
        (*g_118) = (void*)0;
        for (g_13 = 28; (g_13 < 9); g_13 = safe_sub_func_uint16_t_u_u(g_13, 1))
        {
            unsigned char l_740 = 0xC4L;
            unsigned short **l_741 = &g_439;
            unsigned short *l_743 = &g_21;
            unsigned short **l_742 = &l_743;
            int *l_754 = &l_32;
            l_745 = (l_744 = (safe_unary_minus_func_uint64_t_u(((l_740 < (((*l_741) = &p_17) == ((*l_742) = &p_17))) == g_708.f7))));
            (*g_118) = (void*)0;
            if ((safe_rshift_func_int8_t_s_u(l_744, (g_90.f3 = ((safe_unary_minus_func_uint8_t_u((p_19 < ((*l_160) = ((safe_rshift_func_int8_t_s_u(0x2EL, 0)) < l_740))))) & (g_355 == (safe_lshift_func_int8_t_s_s((l_753 != (void*)0), l_740))))))))
            {
                if (p_19)
                    break;
                l_754 = l_754;
                (*g_118) = &g_108[4][0][0];
            }
            else
            {
                unsigned short ***l_755 = &l_741;
                int l_758 = 1L;
                int *l_762 = &g_108[3][3][0];
                (*l_755) = &g_439;
                if (p_17)
                    continue;
                if (p_19)
                {
                    struct S0 *l_759 = &g_708;
                    for (g_355 = 14; (g_355 <= (-11)); g_355 = safe_sub_func_int16_t_s_s(g_355, 8))
                    {
                        (*l_754) = p_19;
                        return l_758;
                    }
                    (*l_754) = 0x51228586L;
                    (**g_320) = l_759;
                }
                else
                {
                    for (g_708.f0 = 0; (g_708.f0 < 27); ++g_708.f0)
                    {
                        int **l_763 = &l_754;
                        (*l_763) = ((*g_118) = l_762);
                        if ((*l_762))
                            continue;
                    }
                    l_754 = l_754;
                }
            }
            for (g_161 = 0; (g_161 >= 13); g_161 = safe_add_func_int64_t_s_s(g_161, 1))
            {
                int l_766 = 0x565897FBL;
                int l_773 = 0L;
                short **l_782 = (void*)0;
                struct S0 *l_790 = &g_90;
                if (((*l_754) = (l_766 = p_19)))
                {
                    char **l_777 = &g_523[2];
                    for (g_90.f5 = (-20); (g_90.f5 > 28); g_90.f5 = safe_add_func_uint8_t_u_u(g_90.f5, 4))
                    {
                        int l_772 = 0x4B05B3A9L;
                        int l_774 = 0L;
                        (*g_118) = l_769;
                        l_774 = (safe_add_func_int64_t_s_s(l_772, (!(l_773 = p_19))));
                        return p_19;
                    }
                    for (l_773 = 0; (l_773 <= 8); l_773 = safe_add_func_uint16_t_u_u(l_773, 5))
                    {
                        l_777 = &p_18;
                    }
                }
                else
                {
                    char l_788 = 1L;
                    (*l_769) = (((safe_mod_func_int8_t_s_s(0xA9L, (((*l_769) & ((safe_mod_func_int32_t_s_s(((void*)0 == l_782), p_19)) && g_708.f2)) ^ ((*l_769) ^ (safe_lshift_func_int8_t_s_u((!(((p_19 || (safe_lshift_func_int8_t_s_u((&l_249[3][3] == &g_523[7]), 2))) & 0x01L) || 0x50EFL)), 3)))))) > l_787) == g_708.f5);
                    if (l_788)
                        continue;
                    return p_17;
                }
                (*g_118) = &g_108[4][8][0];
                (*g_118) = l_754;
                (*l_790) = l_789;
            }
        }
    }
    return p_19;
}







static unsigned long long func_28(unsigned long long p_29, unsigned short * p_30, int p_31)
{
    unsigned l_500[7][9][4] = {{{0x4FD73F48L,0xB1AF46A5L,0x30693607L,4294967294UL},{0x8B6EB9E7L,0x2477572AL,4294967295UL,0x654CB897L},{0x6A92C175L,0x3CBBC067L,0x274C5F27L,0x081317ECL},{0x274C5F27L,0x081317ECL,0UL,0xAB69953DL},{4294967295UL,0xE6A5881EL,5UL,0UL},{0xA4DA5015L,5UL,0x65B87D6AL,4294967295UL},{0x3CBBC067L,0UL,4294967294UL,9UL},{0xE6A5881EL,0x8504A013L,0x53054B23L,0UL},{0x2C89B319L,0x2C89B319L,9UL,0x3CBBC067L}},{{1UL,0xBB23840BL,0UL,0UL},{0xA4FC068CL,0x4D48C436L,0UL,0xE5CEA65AL},{0xBD9F3407L,0x6A92C175L,0UL,0UL},{0x294A298CL,4294967295UL,4294967294UL,0x0186EF07L},{0x80F3A398L,0x08AC9070L,0xE5A231AFL,0x294A298CL},{0x30693607L,0x7A42695BL,0xE62F2052L,5UL},{0UL,0xB1AF46A5L,0x1046F833L,0xA9C44CCCL},{1UL,5UL,0x30693607L,0x30693607L},{0UL,0UL,0x654CB897L,0UL}},{{8UL,4294967295UL,0x1BAE2440L,4294967294UL},{0xA9C44CCCL,0x9C89B49BL,0UL,0x1BAE2440L},{0xE6A5881EL,0x9C89B49BL,0x2477572AL,4294967294UL},{0x9C89B49BL,4294967295UL,0UL,0UL},{0x608112B4L,0UL,0x4FD73F48L,0x30693607L},{0xE62F2052L,5UL,1UL,0xA9C44CCCL},{4294967295UL,0xB1AF46A5L,0UL,5UL},{0x654CB897L,0x7A42695BL,0xA4FC068CL,0x294A298CL},{0x274C5F27L,0x08AC9070L,4294967293UL,0x0186EF07L}},{{0x8A9FB8DBL,4294967295UL,4294967295UL,0UL},{4294967293UL,0x6A92C175L,0xA2CBFC6FL,0xE5CEA65AL},{4294967295UL,0x4D48C436L,0xAB69953DL,0UL},{0xE5CEA65AL,0xBB23840BL,0x90970E6DL,0x3CBBC067L},{0x2DC88F44L,0x2C89B319L,0xCCE5C0BDL,0x53054B23L},{0x7A42695BL,0xB1AF46A5L,5UL,0xE59418DFL},{0xE6A5881EL,0x2DC88F44L,0x81FD1DC9L,0x608112B4L},{0x654CB897L,0x81FD1DC9L,4294967294UL,0x6A92C175L},{0xE59418DFL,0x3CBBC067L,0xA4FC068CL,0UL}},{{5UL,0xF4E7AF70L,0UL,0xF4E7AF70L},{4294967295UL,5UL,0x08AC9070L,1UL},{0x274C5F27L,0x53054B23L,0x1046F833L,0x3EDC65C8L},{0xBD9F3407L,0x2B9F9C04L,0xE6A5881EL,0UL},{0xBD9F3407L,0UL,0x1046F833L,0x8A9FB8DBL},{0x274C5F27L,0UL,0x08AC9070L,0x725F220EL},{4294967295UL,0xA4FC068CL,0UL,0xE5A231AFL},{5UL,0UL,0xA4FC068CL,0x0D73C414L},{0xE59418DFL,0x8B6EB9E7L,4294967294UL,0x274C5F27L}},{{0x654CB897L,8UL,0x81FD1DC9L,0xFA9DFD73L},{0xE6A5881EL,1UL,5UL,0x899A4EECL},{1UL,0UL,0x899A4EECL,0xA9C44CCCL},{0x4FD73F48L,0x80F3A398L,8UL,4294967295UL},{0x2B9F9C04L,0x899A4EECL,0UL,2UL},{4294967293UL,0UL,0xCCE5C0BDL,0x90970E6DL},{0xFA9DFD73L,0UL,0UL,4294967295UL},{4294967295UL,0x8A9FB8DBL,0xFA9DFD73L,0UL},{0xB1AF46A5L,0xE6A5881EL,0xEB1884D4L,4294967291UL}},{{0x53054B23L,4294967293UL,0x654CB897L,2UL},{0xA9C44CCCL,0x90970E6DL,0xF4E7AF70L,0xAB69953DL},{0xBD9F3407L,4294967291UL,4294967291UL,0xBD9F3407L},{0x7A42695BL,0x3EDC65C8L,0x4D48C436L,0x30693607L},{0UL,0UL,0x53054B23L,0x8B6EB9E7L},{0x3CBBC067L,0x2DC88F44L,5UL,0x8B6EB9E7L},{0xD65F0234L,0UL,0xFA9DFD73L,0x30693607L},{0x0D73C414L,0x3EDC65C8L,1UL,0xBD9F3407L},{0x6A92C175L,4294967291UL,0xA2CBFC6FL,4294967295UL}}};
    struct S0 l_539 = {1UL,4294967295UL,0xB8DEL,1UL,0xB846BA93758207DCLL,0x9CD5129EL,0x6C53L,0xC20FL,0x1FD14A1AL};
    struct S0 l_540 = {18446744073709551614UL,0x931AC86FL,6L,252UL,0xAF3774E8F814F0DDLL,0x8622C205L,0x0229L,0x6A81L,0x420F1ED9L};
    int *l_541 = &g_58;
    unsigned long long *l_544 = &l_539.f4;
    unsigned l_619 = 0x29F6B80EL;
    unsigned char l_622[7][6] = {{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL},{0x9FL,1UL,0x9FL,0x9FL,1UL,0x9FL}};
    struct S0 *l_726 = (void*)0;
    int i, j, k;
    if ((l_500[5][6][2] <= p_29))
    {
        short l_501 = 5L;
        int l_513 = 0x76B54B42L;
        unsigned l_531[2][1];
        char l_606 = 6L;
        int *l_616 = &g_108[0][3][2];
        struct S0 l_669[1] = {{0xB3F54D99L,1UL,0x7AAAL,0xD3L,0x9176A6F524D67D74LL,0xCF8B9EF6L,0xD9B4L,1UL,0xFB472A00L}};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_531[i][j] = 4UL;
        }
        if (l_501)
        {
            char *l_508 = &g_13;
            int l_518 = 0xD00189E5L;
            unsigned long long *l_519 = &g_11;
            unsigned char *l_601 = (void*)0;
            unsigned char *l_602 = &g_90.f3;
            struct S0 **l_605 = &g_322;
            unsigned long long l_650 = 0xEB2BA3EAEF9900CCLL;
            if ((p_31 >= (((*l_519) = ((safe_rshift_func_int16_t_s_u((g_23 || l_500[3][6][0]), 13)) >= ((*g_439) = (safe_add_func_int8_t_s_s(((*l_508) = p_31), (safe_mod_func_uint64_t_u_u((l_500[5][6][2] <= (((safe_rshift_func_uint8_t_u_u(p_31, (l_513 = 0x19L))) >= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_518, 4)), 5))) && p_29)), g_90.f0))))))) == p_29)))
            {
                if ((p_31 = p_29))
                {
lbl_536:
                    if (p_29)
                    {
                        char **l_520 = &l_508;
                        char ***l_521[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S0 l_524 = {0x25AA5A12L,0x45A974AAL,0xF856L,0xBEL,0xCA50729D664EF172LL,0x72D190D5L,0xDBB1L,0UL,4294967295UL};
                        int i;
                        g_522 = l_520;
                        l_524 = g_90;
                    }
                    else
                    {
                        unsigned char *l_532 = &g_90.f3;
                        int l_533 = 0xEF5EFD07L;
                        (**g_118) = (safe_div_func_int64_t_s_s((p_31 && (((*g_320) == (void*)0) <= (((*l_532) = (safe_div_func_uint16_t_u_u(((*p_30) = 0x3897L), ((safe_add_func_int16_t_s_s((255UL && 0L), p_29)) | l_531[1][0])))) | (&g_11 != (void*)0)))), l_533));
                        (**g_118) = p_29;
                    }
                }
                else
                {
                    for (l_513 = 0; (l_513 < (-27)); --l_513)
                    {
                        int l_537 = 0x51FF90CEL;
                        if (l_513)
                            break;
                        if (p_29)
                            continue;
                        if (g_90.f6)
                            goto lbl_536;
                        (**g_118) = l_537;
                    }
                }
                if ((**g_118))
                {
                    struct S0 l_538 = {0x706BBD29L,0xF02646C2L,0xB831L,0xE7L,18446744073709551606UL,1UL,65529UL,0xD044L,0x6C7D89A7L};
                    l_540 = (l_539 = l_538);
                }
                else
                {
                    (**g_118) = l_518;
                    (*g_118) = &l_513;
                }
            }
            else
            {
                unsigned l_553[10][4][6] = {{{0x373455DFL,0xF15180C7L,0x8127078DL,0x9D737CC2L,4294967289UL,1UL},{0UL,0xD3504552L,0x9D737CC2L,0xF15180C7L,1UL,1UL},{9UL,0x219F70CAL,0x8127078DL,1UL,4294967288UL,0UL},{1UL,0x58D9DE84L,0x5AAD6F7EL,0x5AAD6F7EL,4294967295UL,0x8DAD4488L}},{{0x58D9DE84L,0x219F70CAL,0UL,9UL,0UL,0x31A4A8B6L},{0xF15180C7L,0x8DAD4488L,0UL,0x8127078DL,1UL,1UL},{0xF15180C7L,0xF7C7A683L,0x8127078DL,9UL,0UL,1UL},{0x58D9DE84L,0UL,0x95A7787AL,0x5AAD6F7EL,0x95A7787AL,0UL}},{{0x8DAD4488L,0x27BFCAE0L,0x9D737CC2L,0UL,1UL,0x8DAD4488L},{0x31A4A8B6L,9UL,1UL,0UL,0UL,4294967289UL},{1UL,9UL,0x219F70CAL,0x8127078DL,1UL,4294967288UL},{1UL,0x27BFCAE0L,0x8127078DL,0x95A7787AL,0x95A7787AL,0x8127078DL}},{{0UL,0UL,0x8DAD4488L,0x9D737CC2L,0UL,0xD3504552L},{0x8DAD4488L,0xF7C7A683L,0x373455DFL,1UL,1UL,0x8DAD4488L},{4294967289UL,0x8DAD4488L,0x373455DFL,0x219F70CAL,0UL,0xD3504552L},{4294967288UL,0x219F70CAL,0x8DAD4488L,0x8127078DL,4294967295UL,0x8127078DL}},{{0x8127078DL,4294967295UL,0x8127078DL,0x8DAD4488L,0x219F70CAL,4294967288UL},{0xD3504552L,0UL,0x219F70CAL,0x373455DFL,0x8DAD4488L,4294967289UL},{0x8DAD4488L,1UL,1UL,0x373455DFL,0xF7C7A683L,0x8DAD4488L},{0xD3504552L,0UL,4294967289UL,0UL,1UL,1UL}},{{0xF7C7A683L,0x9D737CC2L,0x9D737CC2L,0xF7C7A683L,0UL,1UL},{4294967295UL,0x8DAD4488L,0xF7C7A683L,0x373455DFL,1UL,1UL},{0x8127078DL,1UL,0x5AAD6F7EL,0x31A4A8B6L,1UL,0xF15180C7L},{0UL,0x8DAD4488L,0xD3504552L,4294967289UL,0UL,0UL}},{{1UL,0x9D737CC2L,0x58D9DE84L,0x9D737CC2L,1UL,4294967288UL},{1UL,0x5AAD6F7EL,1UL,0xF7C7A683L,9UL,0x27BFCAE0L},{1UL,0x95A7787AL,0xF7C7A683L,0x5AAD6F7EL,0UL,0x27BFCAE0L},{0xF15180C7L,1UL,1UL,0xD3504552L,0x373455DFL,4294967288UL}},{{0UL,0x219F70CAL,0x58D9DE84L,0x58D9DE84L,0x219F70CAL,0UL},{4294967288UL,0x373455DFL,0xD3504552L,1UL,1UL,0xF15180C7L},{0x27BFCAE0L,0UL,0x5AAD6F7EL,0xF7C7A683L,0x95A7787AL,1UL},{0x27BFCAE0L,9UL,0xF7C7A683L,1UL,0x5AAD6F7EL,1UL}},{{4294967288UL,1UL,0x9D737CC2L,0x58D9DE84L,0x9D737CC2L,1UL},{0UL,0UL,4294967289UL,0xD3504552L,0x8DAD4488L,0UL},{0xF15180C7L,1UL,0x31A4A8B6L,0x5AAD6F7EL,1UL,0x8127078DL},{1UL,0xF15180C7L,1UL,1UL,0xD3504552L,0x373455DFL}},{{0UL,0x58D9DE84L,1UL,0x8127078DL,0x8127078DL,1UL},{0x8DAD4488L,0x8DAD4488L,1UL,0xF7C7A683L,4294967288UL,0x95A7787AL},{1UL,0x31A4A8B6L,1UL,0x27BFCAE0L,4294967289UL,1UL},{9UL,1UL,1UL,1UL,0x8DAD4488L,0x95A7787AL}}};
                int *l_592 = &g_108[4][8][0];
                int i, j, k;
                for (g_355 = 0; (g_355 <= 2); g_355 += 1)
                {
                    unsigned long long **l_545 = &l_519;
                    unsigned char *l_546 = &g_90.f3;
                    unsigned char *l_558[3];
                    int l_585[6][2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_558[i] = (void*)0;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_585[i][j] = 6L;
                    }
                }
                for (l_501 = 0; (l_501 < 23); ++l_501)
                {
                    (**g_118) = 0L;
                }
            }
            if (((safe_sub_func_uint64_t_u_u(g_11, ((((safe_add_func_int16_t_s_s((p_31 & 0x6FL), l_531[1][0])) <= (((l_513 = 1UL) >= (safe_sub_func_uint8_t_u_u(1UL, ((*l_602) = g_90.f6)))) || ((safe_div_func_uint64_t_u_u(((void*)0 != l_605), l_606)) == (*g_439)))) != l_518) <= g_607[1][1]))) && p_31))
            {
                unsigned char l_610 = 0xD6L;
                short l_611 = (-8L);
                unsigned *l_614 = &g_90.f8;
                short *l_615 = &g_132;
                if ((((*p_30) = (((0L ^ (((*l_544) = (safe_sub_func_uint16_t_u_u(l_610, (g_108[4][8][0] | g_90.f2)))) | 3L)) != (65534UL != ((l_611 == ((*l_615) = (safe_div_func_int32_t_s_s(9L, ((*l_614) = l_518))))) != (-1L)))) >= 0x9EL)) & (*l_541)))
                {
                    l_616 = ((*g_118) = (*g_118));
                    if ((0xD7F59FBAL == ((safe_sub_func_int64_t_s_s(p_31, p_29)) >= 247UL)))
                    {
                        return p_29;
                    }
                    else
                    {
                        (*l_616) = p_31;
                        (*g_118) = l_614;
                    }
                    (*g_118) = (*g_118);
                }
                else
                {
                    (*g_118) = &p_31;
                }
                return g_308;
            }
            else
            {
                int *l_623 = &l_518;
                long long l_631 = 0L;
                if ((p_31 && (*l_616)))
                {
                    struct S0 *l_620 = &l_539;
                    int *l_621 = &l_518;
                    if (((*l_541) = l_619))
                    {
                        l_620 = &l_540;
                        (**g_118) = l_518;
                        (*g_118) = l_621;
                        return l_622[1][3];
                    }
                    else
                    {
                        unsigned l_624 = 18446744073709551615UL;
                        l_623 = ((*g_118) = (*g_118));
                        (*l_616) = l_624;
                    }
                    for (g_308 = 0; (g_308 < (-9)); --g_308)
                    {
                        if ((*l_541))
                            break;
                        (*l_605) = (void*)0;
                    }
                }
                else
                {
                    unsigned *l_633 = (void*)0;
                    unsigned **l_632 = &l_633;
                    int l_649 = (-1L);
                    int l_661 = 0x4EB36306L;
                    (*l_616) = ((safe_div_func_uint16_t_u_u((*g_439), (((safe_mod_func_int16_t_s_s((*l_541), ((*p_30) = l_518))) >= (l_631 = (*l_623))) || p_31))) > ((*g_424) != l_632));
                    if ((safe_lshift_func_uint8_t_u_s(g_132, 2)))
                    {
                        int ***l_640 = &g_118;
                        int **l_641 = (void*)0;
                        int ***l_642 = (void*)0;
                        int ***l_643 = &l_641;
                        struct S0 l_644 = {18446744073709551614UL,4294967290UL,-2L,248UL,18446744073709551615UL,1UL,1UL,0x024CL,4294967292UL};
                        (*l_541) = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((*l_640) = &g_94[1]) == ((*l_643) = l_641)), (*p_30))) != p_31), (p_29 && ((0x8905L >= p_31) | (*l_616)))));
                        (*l_541) = (**g_118);
                        l_644 = l_539;
                        (*g_118) = (*g_118);
                    }
                    else
                    {
                        (*l_623) = ((*p_30) < (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(l_649, l_650)) != (((safe_unary_minus_func_uint16_t_u((*l_616))) & (safe_add_func_int16_t_s_s(p_31, ((safe_sub_func_uint8_t_u_u(((*l_602) = (safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u(((p_29 >= g_559[5]) == (safe_mod_func_uint16_t_u_u(l_518, (*g_439)))), p_29))))), g_78)) <= l_661)))) | p_29)), p_29)));
                    }
                }
            }
            (*l_616) = (1L < ((+8L) >= (safe_div_func_int32_t_s_s(0xCBD8B73EL, p_29))));
        }
        else
        {
            struct S0 l_664 = {0x0F7FC269L,4294967295UL,0xD41CL,1UL,0x2A79FBC2567D2806LL,4294967295UL,0UL,0x799CL,1UL};
            for (g_7 = 5; (g_7 >= 0); g_7 -= 1)
            {
                int i;
                for (p_31 = 6; (p_31 >= 0); p_31 -= 1)
                {
                    struct S0 *l_665 = &l_664;
                    int i, j;
                    (*l_665) = l_664;
                    if (l_622[p_31][g_7])
                    {
                        struct S0 l_666 = {0xA5D1FF4AL,0UL,0xF598L,0xC9L,0UL,4294967288UL,0x39BAL,65526UL,0x1FEBA1AFL};
                        int i;
                        g_94[g_7] = g_94[(g_7 + 1)];
                        (*l_665) = l_666;
                    }
                    else
                    {
                        unsigned long long **l_667 = &l_544;
                        unsigned long long ***l_668 = &l_667;
                        (*g_118) = (*g_118);
                        if ((*l_616))
                            continue;
                        (*l_668) = l_667;
                        (*l_616) = p_31;
                    }
                }
                for (l_539.f2 = 4; (l_539.f2 >= 2); l_539.f2 -= 1)
                {
                    int i, j;
                    for (l_540.f2 = 9; (l_540.f2 >= 0); l_540.f2 -= 1)
                    {
                        l_664 = l_669[0];
                    }
                    if (l_622[(l_539.f2 + 2)][(l_539.f2 + 1)])
                        continue;
                }
                g_94[(g_7 + 1)] = g_94[(g_7 + 1)];
                for (g_81 = 0; (g_81 <= 9); g_81 += 1)
                {
                    l_540 = l_669[0];
                    for (g_90.f1 = 1; (g_90.f1 <= 9); g_90.f1 += 1)
                    {
                        int i, j;
                        (**g_118) = l_622[g_7][g_7];
                    }
                }
            }
        }
lbl_672:
        (**g_118) = (*l_541);
        if (p_29)
        {
            int *l_670 = &g_58;
            int **l_671[7];
            int i;
            for (i = 0; i < 7; i++)
                l_671[i] = &l_616;
            l_616 = ((*g_118) = l_670);
            return p_29;
        }
        else
        {
            if (l_539.f7)
                goto lbl_672;
        }
    }
    else
    {
        struct S0 l_673 = {0xE247BE15L,0x9EBD646DL,0xBC87L,248UL,1UL,4294967290UL,65529UL,4UL,4294967287UL};
        struct S0 *l_674[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int *l_684[6][2][5] = {{{&g_355,(void*)0,&g_108[2][3][1],&g_108[0][3][0],&g_108[4][8][0]},{&g_108[5][0][0],&g_355,&g_355,&g_108[5][0][0],(void*)0}},{{&g_108[4][8][0],&g_355,&g_58,(void*)0,&g_108[5][0][0]},{&g_108[0][3][0],(void*)0,&g_108[4][8][0],&g_355,(void*)0}},{{&g_58,&g_355,&g_108[0][4][1],(void*)0,(void*)0},{&g_355,&g_108[0][3][0],&g_355,&g_108[5][0][0],&g_108[4][8][0]}},{{&g_355,&g_58,&g_355,&g_108[0][3][0],&g_58},{&g_58,&g_108[0][4][1],(void*)0,&g_355,(void*)0}},{{&g_108[0][3][0],(void*)0,&g_355,&g_58,&g_355},{&g_108[4][8][0],&g_355,&g_108[4][8][0],(void*)0,&g_108[5][0][0]}},{{&g_108[0][4][1],&g_355,&g_108[4][8][0],&g_108[4][8][0],&g_58},{(void*)0,&g_108[4][8][0],&g_355,(void*)0,&g_108[2][3][1]}}};
        int i, j, k;
lbl_709:
        g_90 = l_673;
        for (g_90.f0 = 0; (g_90.f0 == 36); g_90.f0 = safe_add_func_uint64_t_u_u(g_90.f0, 5))
        {
            int *l_683 = &g_58;
            for (l_539.f3 = 0; (l_539.f3 <= 56); l_539.f3++)
            {
                struct S0 *l_681[2][2][4] = {{{&g_90,&l_540,&l_540,&g_90},{&g_90,&l_540,&g_90,&l_540}},{{&l_540,&g_90,&l_540,&l_540},{&l_540,&l_540,&g_90,&g_90}}};
                unsigned *l_685[8][9] = {{&l_539.f8,&l_539.f8,&l_539.f1,(void*)0,(void*)0,(void*)0,(void*)0,&l_539.f1,&l_539.f8},{&l_500[5][6][2],(void*)0,(void*)0,(void*)0,&l_500[5][6][2],(void*)0,(void*)0,(void*)0,&l_500[5][6][2]},{(void*)0,(void*)0,&l_539.f1,&l_539.f8,&l_539.f8,&l_539.f1,(void*)0,(void*)0,(void*)0},{&l_500[5][6][2],(void*)0,&l_500[5][6][2],&l_539.f8,&l_500[5][6][2],(void*)0,&l_500[5][6][2],&l_539.f8,&l_500[5][6][2]},{(void*)0,&l_539.f8,(void*)0,(void*)0,&l_539.f8,(void*)0,&l_539.f1,&l_539.f1,(void*)0},{&l_500[5][6][2],&l_539.f8,(void*)0,&l_539.f8,&l_500[5][6][2],&l_539.f8,(void*)0,&l_539.f8,&l_500[5][6][2]},{&l_539.f8,(void*)0,(void*)0,&l_539.f8,(void*)0,&l_539.f1,&l_539.f1,(void*)0,&l_539.f8},{&l_500[5][6][2],&l_539.f8,&l_500[5][6][2],(void*)0,&l_500[5][6][2],&l_539.f8,&l_500[5][6][2],(void*)0,&l_500[5][6][2]}};
                int l_686 = 0x34C25B09L;
                int ***l_691 = &g_118;
                int ****l_692 = &l_691;
                short *l_695[8][8][4] = {{{&l_539.f2,(void*)0,(void*)0,(void*)0},{&l_673.f2,&l_540.f2,&g_132,&g_132},{&l_673.f2,&l_539.f2,&l_673.f2,&g_132},{(void*)0,&g_132,&g_132,&l_673.f2},{&g_132,(void*)0,&l_539.f2,&l_540.f2},{&l_539.f2,&l_673.f2,&l_540.f2,(void*)0},{(void*)0,&g_90.f2,&l_673.f2,&g_132},{&g_132,&g_132,(void*)0,&l_673.f2}},{{(void*)0,&g_90.f2,&l_540.f2,&l_673.f2},{(void*)0,&l_539.f2,&l_539.f2,(void*)0},{&l_540.f2,(void*)0,&l_673.f2,&l_539.f2},{&l_673.f2,&g_90.f2,&l_673.f2,&g_90.f2},{(void*)0,&l_673.f2,&g_132,&l_539.f2},{(void*)0,&g_132,&l_673.f2,&l_673.f2},{(void*)0,(void*)0,&l_539.f2,&l_673.f2},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_90.f2,&g_132,&l_540.f2},{&l_539.f2,&g_90.f2,&l_539.f2,&l_540.f2},{(void*)0,&l_539.f2,&l_539.f2,&l_540.f2},{&g_90.f2,&g_90.f2,(void*)0,&l_540.f2},{(void*)0,&g_90.f2,(void*)0,(void*)0},{&g_132,(void*)0,&l_673.f2,&l_673.f2},{&l_673.f2,&g_132,(void*)0,&l_539.f2},{(void*)0,&g_132,&l_540.f2,(void*)0}},{{&l_539.f2,(void*)0,&g_90.f2,&l_539.f2},{&l_539.f2,&l_673.f2,&l_673.f2,&l_540.f2},{&l_539.f2,(void*)0,&l_673.f2,(void*)0},{(void*)0,&g_90.f2,&g_132,(void*)0},{&g_90.f2,&l_673.f2,&l_539.f2,&l_673.f2},{&l_673.f2,(void*)0,(void*)0,&l_673.f2},{(void*)0,&l_539.f2,&g_90.f2,(void*)0},{(void*)0,&l_673.f2,&l_673.f2,&l_540.f2}},{{&l_540.f2,&l_673.f2,(void*)0,&l_540.f2},{(void*)0,&l_540.f2,(void*)0,(void*)0},{&g_90.f2,&l_539.f2,&g_132,(void*)0},{&g_90.f2,&g_132,&l_539.f2,&g_132},{&l_540.f2,&g_132,&l_539.f2,&g_90.f2},{(void*)0,(void*)0,&l_540.f2,&l_673.f2},{&l_673.f2,&l_673.f2,(void*)0,&l_539.f2},{&l_673.f2,&l_539.f2,&g_90.f2,&g_132}},{{(void*)0,&l_673.f2,(void*)0,&g_132},{&l_673.f2,(void*)0,&l_673.f2,&g_90.f2},{&g_132,(void*)0,&l_673.f2,&l_539.f2},{&g_90.f2,(void*)0,(void*)0,&l_673.f2},{&l_539.f2,&l_539.f2,(void*)0,(void*)0},{(void*)0,(void*)0,&l_673.f2,&l_540.f2},{&g_132,&g_132,&g_90.f2,&g_90.f2},{(void*)0,&l_539.f2,(void*)0,(void*)0}},{{&l_540.f2,(void*)0,&l_540.f2,&g_132},{&g_90.f2,(void*)0,(void*)0,(void*)0},{&l_673.f2,&l_539.f2,(void*)0,&l_673.f2},{&g_90.f2,(void*)0,&l_540.f2,&g_90.f2},{&l_540.f2,&l_673.f2,(void*)0,&l_539.f2},{(void*)0,&l_539.f2,&g_90.f2,&l_673.f2},{&g_132,&g_132,&l_673.f2,&l_540.f2},{(void*)0,&g_132,&l_673.f2,&g_132}},{{&g_132,&l_539.f2,(void*)0,&g_90.f2},{&l_539.f2,&l_540.f2,&g_90.f2,(void*)0},{&l_539.f2,&g_132,&l_540.f2,&l_673.f2},{&l_673.f2,&l_673.f2,&g_132,&l_673.f2},{(void*)0,(void*)0,(void*)0,&g_90.f2},{&l_539.f2,(void*)0,&g_90.f2,&g_132},{&l_673.f2,&g_132,(void*)0,&g_90.f2},{&l_539.f2,&g_90.f2,(void*)0,(void*)0}}};
                int i, j, k;
                for (l_539.f5 = 0; (l_539.f5 <= 2); l_539.f5 += 1)
                {
                    int *l_680 = &g_108[1][5][2];
                    char l_682 = 2L;
                    for (l_673.f2 = 2; (l_673.f2 >= 0); l_673.f2 -= 1)
                    {
                        int *l_679 = &g_58;
                        int i, j, k;
                        l_679 = &g_108[(l_539.f5 + 4)][l_539.f5][l_673.f2];
                        (*g_118) = (*g_118);
                        (*g_118) = l_680;
                        return l_500[(l_673.f2 + 1)][(l_539.f5 + 5)][l_539.f5];
                    }
                }
                (*l_683) = ((((l_686 = 4294967295UL) && (~(safe_mod_func_int16_t_s_s((((l_686 || (l_686 = (safe_add_func_uint16_t_u_u((&g_118 != ((*l_692) = l_691)), ((g_81 == (safe_add_func_int64_t_s_s(p_31, (-6L)))) && p_29))))) == (safe_add_func_int64_t_s_s((((**g_118) && 0xA2549773L) || p_31), (-1L)))) >= p_31), 0x25B6L)))) < (*g_439)) <= 0x17818E71L);
                (**l_691) = &p_31;
                if (p_31)
                    continue;
            }
            for (g_81 = 0; (g_81 <= 1); g_81 += 1)
            {
                unsigned l_725 = 0x20E23E9BL;
                if ((safe_unary_minus_func_int64_t_s(p_29)))
                {
                    (**g_118) = p_29;
                    (*g_118) = (*g_118);
                }
                else
                {
                    int i, j;
                    (**g_320) = l_674[g_81][(g_81 + 2)];
                    if ((safe_rshift_func_int16_t_s_u((3UL && (safe_div_func_uint16_t_u_u((*p_30), p_31))), 14)))
                    {
                        struct S0 l_707 = {0x3B00D5F3L,0x2124BA91L,4L,0xFCL,1UL,0UL,2UL,7UL,1UL};
                        (*l_541) = (safe_add_func_uint64_t_u_u(p_31, (safe_sub_func_uint64_t_u_u(1UL, p_29))));
                        g_708 = l_707;
                        if (p_31)
                            goto lbl_709;
                        (*l_683) = (p_31 <= ((*l_541) >= p_29));
                    }
                    else
                    {
                        unsigned short l_722 = 65535UL;
                        (*l_541) = ((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(g_708.f5, (safe_div_func_int16_t_s_s(p_31, (*p_30))))), (18446744073709551615UL >= (7UL != g_90.f5)))), ((safe_div_func_int16_t_s_s((p_29 && (((!((safe_div_func_int8_t_s_s((*l_541), 0x6DL)) && 18446744073709551610UL)) && p_29) ^ l_722)), p_29)) | 0xA8L))) != p_29);
                    }
                    (*l_683) = (safe_add_func_uint16_t_u_u(l_725, 0x3DC4L));
                }
            }
        }
        l_726 = l_726;
    }
    return g_607[1][1];
}







static unsigned short * func_33(unsigned short * p_34, char * p_35, char * p_36, unsigned short p_37, char p_38)
{
    unsigned short *l_252 = (void*)0;
    unsigned short **l_253 = &l_252;
    int **l_254[5][4] = {{&g_94[3],&g_94[3],&g_94[3],&g_94[3]},{&g_94[3],&g_94[3],&g_94[6],&g_94[3]},{&g_94[3],&g_94[3],&g_94[3],&g_94[3]},{&g_94[3],&g_94[3],&g_94[3],&g_94[3]},{&g_94[3],&g_94[3],&g_94[6],&g_94[3]}};
    unsigned short *l_259 = (void*)0;
    unsigned short *l_260 = &g_90.f6;
    unsigned *l_289 = &g_90.f5;
    unsigned **l_288 = &l_289;
    unsigned ***l_287 = &l_288;
    struct S0 l_293 = {1UL,0UL,0x70DCL,4UL,18446744073709551615UL,9UL,0x2182L,65526UL,0x7E025180L};
    struct S0 l_296 = {18446744073709551615UL,0xBC53BA5EL,-1L,0xFCL,0x89779EABF1D93518LL,4UL,65535UL,1UL,9UL};
    unsigned l_297 = 0x4B38E537L;
    int l_368 = (-4L);
    long long *l_372[3];
    short *l_373[9][2] = {{(void*)0,&l_293.f2},{(void*)0,(void*)0},{&l_293.f2,(void*)0},{(void*)0,&l_293.f2},{(void*)0,(void*)0},{&l_293.f2,(void*)0},{(void*)0,&l_293.f2},{(void*)0,(void*)0},{&l_293.f2,(void*)0}};
    int *l_374 = &g_108[4][8][0];
    int *l_377[10] = {&g_58,(void*)0,(void*)0,&g_58,(void*)0,(void*)0,&g_58,(void*)0,(void*)0,&g_58};
    int *l_378 = &l_368;
    struct S0 ***l_399 = &g_321;
    unsigned char l_400 = 0xB4L;
    unsigned short *l_499[2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_372[i] = &g_7;
    for (i = 0; i < 2; i++)
        l_499[i] = &g_90.f7;
    (**g_118) = ((safe_sub_func_uint8_t_u_u((((*l_253) = func_39(l_252)) == (void*)0), ((void*)0 != l_254[1][1]))) >= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((p_38 > g_21), 4)), ((*l_260) = p_37))) && ((((g_7 < p_38) > p_37) < g_90.f4) <= 5L)));
    for (g_13 = (-22); (g_13 > 19); g_13++)
    {
        struct S0 *l_269 = &g_90;
        struct S0 **l_268 = &l_269;
        int l_272 = (-4L);
        unsigned long long *l_273 = &g_11;
        char *l_276 = (void*)0;
        char *l_277[6];
        unsigned char *l_280 = &g_90.f3;
        long long l_290 = 1L;
        int **l_300 = &g_94[2];
        unsigned short l_324 = 0x23B5L;
        unsigned short *l_332 = &l_324;
        int l_349 = 0x8C4556BDL;
        int i;
        for (i = 0; i < 6; i++)
            l_277[i] = &g_78;
        for (g_90.f6 = 0; (g_90.f6 != 23); ++g_90.f6)
        {
            for (g_78 = (-3); (g_78 >= (-24)); --g_78)
            {
                int *l_267 = &g_108[4][8][0];
                (*g_118) = l_267;
            }
        }
        (*l_268) = &g_90;
    }
    return l_499[1];
}







static unsigned short * func_39(unsigned short * p_40)
{
    int *l_198 = &g_108[4][8][0];
    struct S0 l_214 = {1UL,0UL,-2L,253UL,0xAB1B5973A90B8220LL,4294967295UL,65535UL,65527UL,4294967295UL};
    for (g_23 = 0; (g_23 == 38); g_23 = safe_add_func_int32_t_s_s(g_23, 3))
    {
        int l_195[6][10] = {{0x5A7FEA72L,0xB1FDA6A7L,(-6L),(-6L),0xB1FDA6A7L,0x5A7FEA72L,2L,0xFD118F9FL,6L,0xFD118F9FL},{(-3L),(-6L),6L,2L,6L,(-6L),(-3L),2L,0x57EE634BL,0x57EE634BL},{(-3L),0x57EE634BL,0x5A7FEA72L,0xD8526C45L,0xD8526C45L,0x5A7FEA72L,0x57EE634BL,(-3L),0xB1FDA6A7L,2L},{0x5A7FEA72L,0x57EE634BL,(-3L),0xB1FDA6A7L,2L,0xB1FDA6A7L,(-3L),0x57EE634BL,0x5A7FEA72L,0xD8526C45L},{6L,(-6L),(-3L),2L,0x57EE634BL,0x57EE634BL,2L,(-3L),(-6L),6L},{(-6L),0xB1FDA6A7L,0x5A7FEA72L,2L,0xFD118F9FL,6L,0xFD118F9FL,2L,0x5A7FEA72L,0xB1FDA6A7L}};
        int i, j;
        if (l_195[4][0])
            break;
    }
    return p_40;
}







static unsigned short * func_41(unsigned short p_42, unsigned p_43, char * p_44, char p_45, unsigned p_46)
{
    struct S0 *l_190 = &g_90;
    struct S0 **l_191 = (void*)0;
    unsigned short *l_192 = &g_21;
    l_190 = l_190;
    for (g_21 = 0; (g_21 <= 2); g_21 += 1)
    {
        (**g_118) = p_43;
        for (g_13 = 2; (g_13 >= 0); g_13 -= 1)
        {
            return &g_23;
        }
    }
    return l_192;
}







static char * func_47(char * p_48, unsigned short * p_49)
{
    char l_182[6] = {0xC2L,0xC2L,0xC2L,0xC2L,0xC2L,0xC2L};
    int *l_183 = &g_108[4][8][0];
    struct S0 l_184 = {18446744073709551611UL,0UL,0x8F59L,255UL,0x87792124FAB6BA35LL,0xD549ECA2L,0x01B2L,0xDB73L,0x132469D7L};
    struct S0 *l_185 = &g_90;
    int i;
    for (g_132 = (-11); (g_132 <= (-3)); g_132 = safe_add_func_uint8_t_u_u(g_132, 1))
    {
        char *l_166 = (void*)0;
        struct S0 *l_168 = &g_90;
        struct S0 **l_167 = &l_168;
        int l_171 = (-1L);
        for (g_21 = 26; (g_21 == 32); g_21++)
        {
            return l_166;
        }
        (*l_167) = &g_90;
    }
    (*l_183) = ((**g_118) = l_182[0]);
    (*l_185) = l_184;
    for (g_58 = 0; (g_58 == 24); g_58++)
    {
        int *l_188 = &g_108[4][0][2];
        struct S0 l_189 = {18446744073709551615UL,4UL,0x47D9L,252UL,0xE103B0344C086913LL,0x2D3918D4L,0x521EL,0x18CEL,0x4501BE72L};
        (*g_118) = l_183;
        l_188 = (*g_118);
        (*l_185) = l_189;
    }
    return p_48;
}







static char * func_50(unsigned short * p_51, char * p_52, char * p_53)
{
    return &g_161;
}







static unsigned short * func_54(char p_55)
{
    unsigned l_56 = 0x13297949L;
    int *l_57 = &g_58;
    unsigned l_101 = 18446744073709551615UL;
    struct S0 *l_146 = &g_90;
    struct S0 **l_145 = &l_146;
    unsigned short *l_159[1];
    int i;
    for (i = 0; i < 1; i++)
        l_159[i] = &g_23;
lbl_91:
    (*l_57) = l_56;
    for (g_13 = 0; (g_13 <= 9); g_13 = safe_add_func_uint64_t_u_u(g_13, 7))
    {
        unsigned l_63[2][10][8] = {{{0xA324C99FL,4294967289UL,1UL,0xA324C99FL,0x5344FFA2L,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL}},{{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL},{0xA324C99FL,1UL,4294967289UL,0xA324C99FL,0xA324C99FL,4294967289UL,1UL,0xA324C99FL},{0x456CFC4FL,1UL,0x83D4F39AL,0x456CFC4FL,0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL},{0xA324C99FL,0x83D4F39AL,0x83D4F39AL,0xA324C99FL,0x456CFC4FL,0x83D4F39AL,1UL,0x456CFC4FL}}};
        unsigned l_64 = 0x212CF720L;
        unsigned short *l_71 = &g_23;
        int *l_110 = &g_108[6][0][1];
        int i, j, k;
        (*l_57) = (safe_add_func_int32_t_s_s((l_63[1][2][6] ^ ((l_64 > (safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0xF4L, p_55)), (safe_lshift_func_int8_t_s_u((*l_57), 4))))) != ((*l_71) = (6L > g_11)))), g_13));
        if (g_7)
            continue;
        for (l_56 = 0; (l_56 <= 1); l_56 += 1)
        {
            short l_76 = (-6L);
            int l_82 = 0x0BAB1DDAL;
            int *l_92 = &l_82;
            int **l_93[3];
            int i;
            for (i = 0; i < 3; i++)
                l_93[i] = &l_57;
            for (l_64 = 0; (l_64 <= 1); l_64 += 1)
            {
                int *l_74[1];
                int **l_75 = &l_74[0];
                char *l_77 = &g_78;
                char *l_79[10] = {&g_13,&g_13,(void*)0,&g_13,&g_13,(void*)0,&g_13,&g_13,(void*)0,&g_13};
                unsigned *l_80 = &g_81;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_74[i] = (void*)0;
                if ((((l_82 = (safe_sub_func_int16_t_s_s(((l_63[l_56][l_64][(l_56 + 4)] || ((void*)0 == &g_23)) & ((*l_80) = ((p_55 = (g_13 || ((&g_58 == ((*l_75) = l_74[0])) >= ((*l_77) = l_76)))) & l_64))), (l_63[1][9][4] ^ g_13)))) <= g_13) == l_76))
                {
                    unsigned **l_85 = &l_80;
                    struct S0 *l_89 = &g_90;
                    struct S0 **l_88 = &l_89;
                    for (l_76 = (-25); (l_76 != 20); l_76++)
                    {
                        unsigned ***l_86 = (void*)0;
                        unsigned ***l_87 = &l_85;
                        (*l_87) = l_85;
                        return l_71;
                    }
                    (*l_75) = &l_82;
                    (*l_88) = (void*)0;
                }
                else
                {
                    if (g_58)
                        goto lbl_91;
                }
            }
            (*l_92) = (0x98F2C1609A65E11ELL > ((*l_57) = 0xD755E4DDAE416057LL));
            g_94[3] = l_57;
            if (l_64)
                continue;
        }
        for (g_81 = 0; (g_81 != 23); g_81 = safe_add_func_int16_t_s_s(g_81, 7))
        {
            unsigned long long *l_102[5][1];
            int l_109 = 0xAA1B4DF1L;
            int *l_139 = (void*)0;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_102[i][j] = &g_90.f4;
            }
        }
    }
    (**g_118) = p_55;
    return l_159[0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    transparent_crc(g_90.f7, "g_90.f7", print_hash_value);
    transparent_crc(g_90.f8, "g_90.f8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_108[i][j][k], "g_108[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_559[i], "g_559[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_607[i][j], "g_607[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_708.f0, "g_708.f0", print_hash_value);
    transparent_crc(g_708.f1, "g_708.f1", print_hash_value);
    transparent_crc(g_708.f2, "g_708.f2", print_hash_value);
    transparent_crc(g_708.f3, "g_708.f3", print_hash_value);
    transparent_crc(g_708.f4, "g_708.f4", print_hash_value);
    transparent_crc(g_708.f5, "g_708.f5", print_hash_value);
    transparent_crc(g_708.f6, "g_708.f6", print_hash_value);
    transparent_crc(g_708.f7, "g_708.f7", print_hash_value);
    transparent_crc(g_708.f8, "g_708.f8", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
