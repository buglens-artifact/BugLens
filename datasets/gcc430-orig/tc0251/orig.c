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



static int g_7 = 1L;
static short g_10[8][7] = {{0x4800L,1L,0x4800L,0x4800L,1L,0x4800L,0x4800L},{0L,0L,0xB37BL,0L,0L,0xB37BL,0L},{1L,0x4800L,0x4800L,1L,0x4800L,0x4800L,1L},{0xFCC5L,0L,0xFCC5L,0xFCC5L,0L,0xFCC5L,0xFCC5L},{1L,1L,8L,1L,1L,8L,1L},{0L,0xFCC5L,0xFCC5L,0L,0xFCC5L,0xFCC5L,0L},{0x4800L,1L,0x4800L,0x4800L,0x4800L,8L,8L},{0xFCC5L,0xFCC5L,0L,0xFCC5L,0xFCC5L,0L,0xFCC5L}};
static int g_11 = 0x2E1DFE00L;
static unsigned g_88 = 18446744073709551606UL;
static int g_89 = 0xB0F60517L;
static unsigned g_96 = 18446744073709551615UL;
static const unsigned short g_107 = 65535UL;
static unsigned short g_114 = 9UL;
static short g_115 = 0x4078L;
static unsigned short g_120[10] = {0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L,0x4B22L};
static char g_129 = 0x4DL;
static unsigned short g_147[2][9][2] = {{{0x4296L,0x9FAEL},{0xB865L,6UL},{0x9FAEL,65533UL},{0xB9ACL,0x9FAEL},{65528UL,0x4296L},{65528UL,0x9FAEL},{0xB9ACL,65533UL},{0x9FAEL,6UL},{0xB865L,0x9FAEL}},{{0x4296L,65528UL},{65528UL,1UL},{0xB865L,65533UL},{1UL,65533UL},{0xB865L,1UL},{65528UL,65528UL},{0x4296L,0x9FAEL},{0xB865L,6UL},{0x9FAEL,65533UL}}};
static int g_152 = (-2L);
static unsigned char g_173 = 0x43L;
static short g_212 = (-8L);
static char g_248 = (-1L);
static short g_266 = 1L;
static unsigned short g_340 = 65530UL;
static unsigned char g_497 = 0xF5L;
static unsigned short g_535 = 1UL;
static unsigned g_777 = 0x57DF9A32L;
static char g_790 = 0xCEL;
static unsigned char g_822 = 0x07L;
static unsigned char g_844 = 0xC9L;
static int g_886[9][7][4] = {{{(-1L),0L,0xA3565D66L,9L},{0x9C1D465CL,0x87678372L,1L,0x377F6F77L},{0x60DC3D40L,1L,0x5049A7B9L,(-4L)},{0x6607799EL,1L,0L,0x2370DAEDL},{0L,0x2A59EBC3L,0x62F2ADA6L,0x2A59EBC3L},{0L,0x6607799EL,0xC8850E34L,0x8686A73BL},{1L,(-1L),(-2L),0L}},{{0x508D80FAL,0x107D6908L,1L,0xBA6060D5L},{0x508D80FAL,7L,(-2L),(-1L)},{1L,0xBA6060D5L,0xC8850E34L,0xABAB3116L},{0x508D80FAL,(-1L),0x4162119BL,0x1B1509FCL},{0L,(-6L),0xE1E2A2F2L,0x60DC3D40L},{(-6L),0x6C485CF8L,1L,0xEA0B4C81L},{0xF6A7C823L,0x9C1D465CL,0x8FD0FAD6L,0x377F6F77L}},{{0L,(-1L),3L,0x4F373AE2L},{0xD0DE03B2L,0x99141D33L,0x78CAAB68L,(-5L)},{1L,0x60DC3D40L,(-1L),0x9C1D465CL},{(-1L),0L,(-4L),0L},{0L,0x99141D33L,0xC8850E34L,0x5049A7B9L},{0x107D6908L,0L,2L,0x377F6F77L},{0x5B0E03ACL,0x78CAAB68L,(-1L),0x8686A73BL}},{{0x4B646305L,0x6C485CF8L,0x01F345D0L,0L},{0x1ED2F8B1L,0L,0x0369FD8EL,0x1B1509FCL},{0L,0xC16F3DD1L,0x12F6E2C1L,0x87678372L},{0x063315A8L,0L,9L,0x2370DAEDL},{0x1B1509FCL,0x04A39A81L,0x98A0E97AL,0L},{0x1A3028A5L,0x5049A7B9L,(-5L),0x5959B4B9L},{(-4L),1L,9L,0x7362705BL}},{{0x2A59EBC3L,0x377F6F77L,0xD80EB22EL,(-1L)},{0L,1L,0xEB01C3BEL,1L},{(-1L),0x04C2CACCL,0x01F345D0L,0x01FC1B02L},{0x04A39A81L,0xBA6060D5L,0xAE328AB0L,0x8B8EFD07L},{0x5B0E03ACL,0xF0A3A417L,0xF0A3A417L,0x5B0E03ACL},{0x7362705BL,0L,0xC8850E34L,0xCD7047C7L},{1L,7L,(-1L),3L}},{{(-4L),6L,(-4L),3L},{0x184408B4L,7L,0xAE328AB0L,0xCD7047C7L},{0x063315A8L,0L,0x8686A73BL,0xA3565D66L},{0L,0xC3C64D9EL,(-9L),1L},{0x0369FD8EL,0x12F6E2C1L,0xA72FE008L,(-3L)},{9L,0xEA0B4C81L,0x00AB039DL,0x6607799EL},{0L,0x3EA68B91L,0x0369FD8EL,0x2370DAEDL}},{{0x056209C9L,9L,0xD89B9B75L,0xDF060BF4L},{3L,(-6L),(-1L),0xC8850E34L},{0xC8850E34L,(-3L),0xDF060BF4L,(-5L)},{0x4D5A2835L,(-2L),(-3L),1L},{3L,(-5L),0x6C485CF8L,0xF0A3A417L},{0xE1E2A2F2L,0xCD7047C7L,0x0369FD8EL,0xC16F3DD1L},{(-2L),0xABAB3116L,0x4D5A2835L,0x4162119BL}},{{9L,0x063315A8L,1L,0x7362705BL},{0xEB01C3BEL,0xAE328AB0L,(-9L),9L},{0x62F2ADA6L,0L,1L,(-3L)},{0x063315A8L,0x01F345D0L,0L,0L},{(-6L),0x4162119BL,(-4L),(-1L)},{(-1L),1L,0x4D4792B0L,(-2L)},{1L,0x01F345D0L,0x1ED2F8B1L,1L}},{{0x5049A7B9L,0x62F2ADA6L,0xC3C64D9EL,9L},{6L,(-1L),0x4162119BL,0xDF060BF4L},{0x01FC1B02L,1L,0x377F6F77L,0xEB01C3BEL},{0x063315A8L,2L,0x98A0E97AL,0x8CD738D4L},{(-2L),(-6L),(-2L),0xC3C64D9EL},{0x2370DAEDL,0L,1L,0x6607799EL},{0x8CD738D4L,(-4L),0x056209C9L,0L}}};
static unsigned short g_1070[4] = {0x3831L,0x3831L,0x3831L,0x3831L};
static unsigned char g_1112[1] = {0x3EL};
static unsigned short g_1199 = 0xA65DL;
static unsigned g_1232 = 0UL;
static int g_1238 = (-1L);
static int g_1271 = 2L;
static unsigned char g_1300 = 0xC6L;
static const unsigned short g_1438 = 1UL;
static unsigned g_1581 = 2UL;
static short g_1639 = (-4L);
static const char g_1747 = 0x37L;



static int func_1(void);
static short func_2(unsigned p_3);
static int func_20(unsigned p_21, char p_22);
static const int func_23(char p_24, char p_25, unsigned short p_26);
static int func_32(char p_33, char p_34, const unsigned char p_35);
static int func_36(unsigned p_37, int p_38, int p_39, short p_40, unsigned short p_41);
static const short func_44(unsigned char p_45, const unsigned p_46, unsigned short p_47);
static unsigned func_48(short p_49);
static short func_66(int p_67, int p_68, const char p_69, char p_70, const int p_71);
static int func_72(char p_73, short p_74);
static int func_1(void)
{
    int l_4 = 1L;
    int l_1077 = 0xFEDD5FC8L;
    char l_1096 = 0x88L;
    unsigned l_1265 = 0x6DF31C54L;
    unsigned l_1270[7] = {0x6832E21DL,0x6832E21DL,0x6832E21DL,0x6832E21DL,0x6832E21DL,0x6832E21DL,0x6832E21DL};
    const short l_1290 = 0L;
    int l_1305 = 0x2758F658L;
    const unsigned l_1326 = 3UL;
    int l_1377 = 0xE844E96BL;
    unsigned char l_1396 = 1UL;
    int l_1398 = 0x57E88F9FL;
    const unsigned l_1399 = 0x81D8FEBEL;
    short l_1400 = (-4L);
    const unsigned l_1436 = 0x8E6B94E5L;
    unsigned l_1437 = 18446744073709551615UL;
    int l_1464 = 8L;
    unsigned l_1472 = 0x97EAF102L;
    int l_1501 = 0L;
    unsigned char l_1504[5];
    int l_1584 = 0x9FCF483FL;
    unsigned char l_1592[4];
    char l_1694 = 0L;
    int i;
    for (i = 0; i < 5; i++)
        l_1504[i] = 0xE5L;
    for (i = 0; i < 4; i++)
        l_1592[i] = 0xEAL;
    if ((func_2(l_4) && (((((safe_mod_func_uint32_t_u_u(func_2(l_4), func_20(l_4, l_4))) || ((safe_lshift_func_uint8_t_u_u(0xDBL, 7)) | g_777)) | g_1070[1]) < 0x55044B20L) != g_1070[1])))
    {
        unsigned l_1078 = 0x01257BB2L;
        unsigned short l_1138 = 0x1178L;
        l_1077 = g_173;
        l_1078 = l_1077;
        for (g_11 = 0; (g_11 <= 3); g_11 += 1)
        {
            int l_1079 = (-4L);
            const short l_1110 = 0x9A57L;
            unsigned short l_1152 = 0xC4ADL;
            int i;
            l_1079 = g_1070[g_11];
            g_89 = g_1070[g_11];
            if ((g_248 & l_4))
            {
                char l_1082[5];
                unsigned short l_1097 = 0x5235L;
                int l_1124 = (-9L);
                int i;
                for (i = 0; i < 5; i++)
                    l_1082[i] = 9L;
                l_1077 = g_7;
                if ((g_152 <= (safe_lshift_func_int8_t_s_s(l_1077, 7))))
                {
                    int l_1090 = (-1L);
                    short l_1123 = 0xC2AEL;
                    for (g_790 = 2; (g_790 <= 6); g_790 += 1)
                    {
                        int l_1083[5];
                        char l_1095 = 1L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1083[i] = 0xEBCAF768L;
                        g_886[0][0][0] = g_10[g_11][g_11];
                        l_1077 = l_1082[3];
                        l_1083[0] = g_120[6];
                        g_886[7][6][2] = (g_535 | (246UL > ((safe_mod_func_uint32_t_u_u((((((!(safe_add_func_int16_t_s_s(((((g_152 != (safe_lshift_func_int16_t_s_u(((l_1090 ^ l_1082[3]) || (safe_add_func_uint8_t_u_u(g_147[0][4][1], (safe_lshift_func_uint8_t_u_u((0x6FEEEFABL <= 0xFD910B4BL), g_497))))), 0))) ^ l_1090) <= l_1095) > g_790), g_1070[3]))) ^ l_1096) ^ 255UL) | 0x4AA8L) && 0L), g_114)) | 0L)));
                    }
                    for (l_1078 = 0; (l_1078 <= 1); l_1078 += 1)
                    {
                        int l_1111 = 0x776D7B29L;
                        int i, j;
                        l_1111 = ((((!g_10[(l_1078 + 4)][l_1078]) ^ ((+l_1097) < 0L)) == g_822) != (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((0xE2L < ((safe_rshift_func_int8_t_s_s((~g_129), 6)) < (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((func_32((l_1078 & (-2L)), g_114, g_107) | g_1070[g_11]), g_535)), l_1110)))), 4294967292UL)), g_10[(l_1078 + 4)][l_1078])), 0x72EC67F0L)));
                        g_886[7][6][2] = g_248;
                        l_1079 = g_1112[0];
                    }
                    for (g_790 = 3; (g_790 >= 0); g_790 -= 1)
                    {
                        int l_1122[1][3][7] = {{{1L,0x8109E38DL,1L,0x8109E38DL,1L,1L,0x8109E38DL},{0x94F1F666L,0xB318ED5DL,0x94F1F666L,0x8109E38DL,0x8109E38DL,0x94F1F666L,0xB318ED5DL},{0x8109E38DL,0xB318ED5DL,1L,1L,0xB318ED5DL,0x8109E38DL,0xB318ED5DL}}};
                        int i, j, k;
                        g_89 = 0xB12CFBCAL;
                        l_1124 = (func_36(g_89, g_844, (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(l_1078)) <= ((((((!l_1077) <= g_535) > (safe_sub_func_uint16_t_u_u((l_1078 < g_115), (safe_sub_func_uint32_t_u_u(0xB907A845L, ((safe_lshift_func_int16_t_s_u((l_1078 | g_147[0][4][1]), g_120[7])) < l_1122[0][1][3])))))) == l_1078) == l_1123) != g_1070[g_11])), 2)), g_120[9], g_777) < l_1122[0][1][3]);
                    }
                }
                else
                {
                    l_1079 = 0x140391CAL;
                    if (g_1070[1])
                        continue;
                }
                g_886[7][6][2] = (safe_mod_func_uint16_t_u_u((l_1077 ^ 0xBCL), ((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int8_t_s_s(0xF1L, g_822)) > func_66((func_66(g_844, (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((func_66(g_1070[g_11], g_886[7][6][2], (((l_1078 && l_1138) || g_114) || g_1070[g_11]), l_1096, g_790) & g_173))), 2)) > l_1082[4]), 0x2F0257A1L)) < l_1138) || g_152), 5)), g_1112[0], g_10[5][5], g_7) >= l_1079), g_1070[3], g_886[7][6][2], g_212, g_1070[g_11])) != l_1138), 0)) ^ 0x77L)));
            }
            else
            {
                char l_1147 = 0xF4L;
                l_1152 = (safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_44(g_96, g_777, (g_1112[0] & (g_89 == g_152))), ((-3L) < (safe_sub_func_int8_t_s_s((l_1147 > (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((0x6D31L & l_1078) != l_1078), 11)), l_1110))), 0x17L))))), l_1138)) >= g_10[2][3]), l_1138));
            }
        }
    }
    else
    {
        char l_1153[6];
        int l_1174 = (-1L);
        int l_1200 = 0L;
        int l_1202 = 0L;
        int l_1376 = 0xE2E5371CL;
        int i;
        for (i = 0; i < 6; i++)
            l_1153[i] = 0xDFL;
        if (l_1153[1])
        {
            return g_120[9];
        }
        else
        {
            int l_1173 = 0xAA7CD071L;
            g_886[7][6][2] = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_96, (safe_rshift_func_uint16_t_u_u(1UL, 4)))) > (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(func_2((safe_unary_minus_func_uint32_t_u(4294967293UL))), g_248))))), 2)), (safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(0x5BL, g_10[3][2])))) ^ func_32((func_32(g_266, l_1173, g_886[7][6][2]) == g_1070[1]), g_1112[0], l_1077)) > l_1153[2]), 1L)) == 1L) > g_114), 0xE3L)))) | g_1112[0]);
            l_1174 = l_4;
            for (g_173 = 0; (g_173 <= 15); g_173 = safe_add_func_uint32_t_u_u(g_173, 5))
            {
                unsigned l_1188 = 0UL;
                int l_1203 = 0x94D61725L;
                for (g_340 = (-26); (g_340 == 26); g_340 = safe_add_func_uint8_t_u_u(g_340, 1))
                {
                    unsigned l_1181 = 4294967290UL;
                    const unsigned char l_1201 = 255UL;
                    g_886[7][6][2] = (safe_lshift_func_int16_t_s_u(l_1077, l_1181));
                    if (g_11)
                    {
                        g_7 = l_1181;
                    }
                    else
                    {
                        l_1203 = ((safe_sub_func_int8_t_s_s((0x5591L || (g_1112[0] >= (safe_lshift_func_int8_t_s_s(func_32(((safe_add_func_int32_t_s_s(l_1188, (-6L))) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_1174 | (g_790 > ((((g_886[6][1][3] <= (safe_mul_func_int16_t_s_s(func_32((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0x8DL, 1UL)), g_120[9])), l_1077, g_886[7][6][2]), g_1199))) != 4294967295UL) < g_266) & l_1200))), g_7)), l_1201))), l_1202, g_777), l_1181)))), g_1070[0])) != 0x8D9DC30FL);
                    }
                    return g_1199;
                }
                g_11 = g_11;
            }
        }
        g_886[8][5][2] = l_1174;
        for (g_11 = (-5); (g_11 > (-16)); g_11 = safe_sub_func_uint16_t_u_u(g_11, 1))
        {
            const unsigned char l_1216[10][5] = {{6UL,1UL,6UL,2UL,246UL},{0x60L,0x3FL,0x3FL,0x60L,255UL},{6UL,1UL,6UL,2UL,246UL},{0x60L,0x3FL,0x3FL,0x60L,255UL},{6UL,1UL,6UL,2UL,246UL},{0x60L,0x3FL,0x3FL,0x60L,255UL},{6UL,1UL,6UL,2UL,246UL},{0x60L,0x3FL,0x3FL,0x60L,255UL},{6UL,0x4BL,8UL,1UL,253UL},{0x3FL,1UL,1UL,0x3FL,0x06L}};
            int l_1241[7] = {0x824D3F58L,1L,1L,0x824D3F58L,1L,1L,0x824D3F58L};
            char l_1354 = 0x25L;
            int i, j;
            if (((-4L) >= (~(!(safe_add_func_uint16_t_u_u(l_1096, (((func_44(((safe_rshift_func_uint8_t_u_s(252UL, 4)) ^ (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_1174 < ((g_147[0][3][1] <= (l_1216[4][3] | (safe_sub_func_int32_t_s_s(l_1077, (~func_32((safe_rshift_func_uint8_t_u_s(l_1200, 4)), g_340, g_107)))))) < 0x89B8FBE0L)), (-10L))), g_115)) > 0x534202A4L) < l_1216[5][4])), g_886[7][6][2], g_1112[0]) || g_147[0][3][0]) == l_1200) != g_1199)))))))
            {
                unsigned l_1223 = 18446744073709551612UL;
                char l_1299[7] = {(-10L),0L,(-10L),(-10L),0L,(-10L),(-10L)};
                int l_1329 = 0x6A34B53DL;
                unsigned short l_1337 = 0x612EL;
                int i;
                if ((((safe_rshift_func_uint16_t_u_s(0xC820L, 7)) > func_72(l_1174, l_1223)) & l_1216[8][2]))
                {
                    int l_1235 = (-1L);
                    for (l_4 = (-17); (l_4 != 16); l_4++)
                    {
                        l_1077 = func_48((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((l_1200 <= g_1232), (0xEE54L && (safe_sub_func_uint8_t_u_u(func_23(g_147[0][4][1], l_1077, g_1112[0]), (-6L)))))) ^ g_10[6][3]), g_1112[0])), g_107)));
                    }
                    for (g_790 = 0; g_790 < 9; g_790 += 1)
                    {
                        for (l_4 = 0; l_4 < 7; l_4 += 1)
                        {
                            for (g_89 = 0; g_89 < 4; g_89 += 1)
                            {
                                g_886[g_790][l_4][g_89] = 0xEB3E68E5L;
                            }
                        }
                    }
                    if (g_497)
                    {
                        int l_1239 = 0x1382B41AL;
                        l_1239 = (((0x01389613L ^ (((l_1235 < (safe_sub_func_int16_t_s_s(l_1235, g_129))) || ((g_152 && ((~((g_129 >= l_1223) != (l_1235 && ((0L != 1L) | l_1096)))) ^ l_1223)) <= 0x346FAD28L)) ^ g_1238)) != g_248) | l_4);
                        l_1174 = g_1199;
                    }
                    else
                    {
                        char l_1240 = 0L;
                        l_1241[4] = l_1240;
                    }
                }
                else
                {
                    unsigned l_1252[6];
                    int l_1253 = 0x2B4BE29CL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1252[i] = 0x542F8FD7L;
                    l_1253 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((((l_1096 == ((+(safe_mul_func_int16_t_s_s((g_1112[0] != ((-4L) <= ((g_1112[0] && g_89) | l_1153[1]))), (safe_mod_func_uint8_t_u_u(l_1077, (safe_lshift_func_uint8_t_u_u(l_1241[4], 3))))))) <= 1UL)) && l_1252[5]) == l_1252[5]) ^ g_129), 2)) > (-1L)), l_1252[5]));
                    for (g_114 = 18; (g_114 < 7); g_114 = safe_sub_func_uint16_t_u_u(g_114, 3))
                    {
                        unsigned l_1256 = 0x9548714EL;
                        g_89 = l_1153[4];
                        return l_1256;
                    }
                    l_1077 = (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0xB9L, (g_120[9] != g_147[0][4][1]))) && (func_44(g_886[7][6][2], (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(l_1265, l_1253)) != ((safe_mul_func_uint8_t_u_u(l_1216[0][4], l_1253)) && l_1241[4])) != l_1216[4][3]), g_1112[0])), g_340) || 0x5D5CB4FAL)), 0x0FACL));
                    l_1174 = func_72((safe_lshift_func_uint8_t_u_s(g_1232, l_1270[0])), l_1223);
                }
                if (((l_1077 < 0xA5L) == 0UL))
                {
                    unsigned short l_1272[4][7][9] = {{{0xB8A3L,0UL,0xC5B1L,0x58CBL,0x56D1L,0xC0B6L,0x56D1L,0x58CBL,0xC5B1L},{0x959AL,0x959AL,7UL,0x00F4L,0xEB6DL,65531UL,0x1EE4L,0xB8A3L,0xC0B6L},{0x959AL,0x035FL,65531UL,0UL,0x035FL,0xC5B1L,0x00F4L,9UL,1UL},{0xB8A3L,0x58CBL,7UL,0x0824L,0x035FL,0xA5ADL,0x0824L,0x738FL,0UL},{0x035FL,9UL,0xC5B1L,0x56D1L,0xEB6DL,0UL,0x00F4L,0x00F4L,0UL},{0x56D1L,0x738FL,0x70A6L,0x738FL,0x56D1L,65535UL,0x1EE4L,0x959AL,1UL},{0x1EE4L,9UL,0xBE21L,0x738FL,9UL,7UL,0x56D1L,9UL,0xC0B6L}},{{0x00F4L,0x58CBL,65531UL,0x56D1L,0x959AL,65535UL,0x035FL,9UL,0xC5B1L},{0xEB6DL,9UL,65535UL,0xEB6DL,0xB8A3L,0xA5ADL,0x1EE4L,9UL,0xC5B1L},{0UL,9UL,65535UL,0x58CBL,0x58CBL,65535UL,9UL,0UL,7UL},{0x56D1L,0x58CBL,0xC5B1L,0UL,0xB8A3L,0x70A6L,9UL,0xB8A3L,65531UL},{0x00F4L,0x56D1L,0x1AA8L,0x035FL,9UL,0UL,0x1EE4L,0x738FL,7UL},{9UL,0x56D1L,7UL,9UL,0x738FL,0xBE21L,9UL,0x1EE4L,0xC5B1L},{0x1EE4L,0x58CBL,0x70A6L,0x035FL,0x00F4L,0xBE21L,0x00F4L,0x035FL,0x70A6L}},{{9UL,9UL,0UL,0UL,0x959AL,0UL,0x56D1L,0x1EE4L,0xBE21L},{9UL,9UL,0UL,0x58CBL,9UL,0x70A6L,0UL,0x738FL,65531UL},{0x1EE4L,0x035FL,0UL,0xEB6DL,9UL,65535UL,0xEB6DL,0xB8A3L,0xA5ADL},{9UL,0x0824L,0x70A6L,0x00F4L,0x959AL,0xA5ADL,0UL,0UL,0xA5ADL},{0x00F4L,0xB8A3L,7UL,0xB8A3L,0x00F4L,0xEB6DL,0x673AL,0x93C3L,0x959AL},{0x673AL,65535UL,0UL,1UL,1UL,0x1EE4L,1UL,65535UL,0x00F4L},{0xC9FDL,0x583AL,9UL,1UL,0x93C3L,0xEB6DL,0x780CL,65535UL,0x738FL}},{{0x106DL,0x780CL,0x0824L,0x106DL,1UL,9UL,0xC488L,0x93C3L,9UL},{0xC9FDL,0x93C3L,0x0824L,0x792DL,0x792DL,0x0824L,0x93C3L,0xC9FDL,0xB8A3L},{0x673AL,0x792DL,9UL,0xC9FDL,1UL,0x738FL,0x93C3L,1UL,0x58CBL},{1UL,0x673AL,0UL,0x583AL,0x93C3L,0x035FL,0xC488L,1UL,0xB8A3L},{0x780CL,0x673AL,0xB8A3L,0x93C3L,1UL,0x00F4L,0x780CL,0xC488L,9UL},{0xC488L,0x792DL,0x738FL,0x583AL,1UL,0x00F4L,1UL,0x583AL,0x738FL},{0x93C3L,0x93C3L,0x1EE4L,0xC9FDL,65535UL,0x035FL,0x673AL,0xC488L,0x00F4L}}};
                    int i, j, k;
                    g_886[7][6][2] = (65532UL ^ g_212);
                    g_1271 = g_1112[0];
                    if ((l_1216[2][1] >= g_120[1]))
                    {
                        unsigned short l_1273[9] = {0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L,0xC9A4L};
                        int l_1274 = 0x008256EBL;
                        int i;
                        g_7 = l_1272[2][5][2];
                        l_1274 = l_1273[7];
                    }
                    else
                    {
                        unsigned l_1283 = 0xA2E09FBBL;
                        int l_1311 = 0L;
                        l_1077 = ((((0xF6D12788L || (0x7FCAL ^ g_777)) || (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((func_20((safe_rshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(l_1283, (safe_add_func_uint8_t_u_u((+(0x93ADL != ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((~(l_1290 || func_36((safe_mul_func_uint16_t_u_u((l_1241[4] <= func_36(((safe_mod_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((0x55F9B722L && (func_23(g_340, l_1272[2][5][2], l_4) > g_1271)), l_1283)) < g_1271), g_1199)) > l_1223) ^ l_1216[4][3]) >= l_1200), 0xB1L)) > g_1271), l_1202, l_1299[5], g_1232, l_1241[4])), l_1216[4][3])), g_1070[1], g_1070[1], g_10[5][0], g_11))) > l_1283), l_1216[4][3])), g_1300)) || 65535UL))), l_1272[2][5][6])))) || (-1L)) || g_266), 3)), l_1174) || 1L), l_1299[5])), g_11))) > g_1070[1]) || g_886[4][5][1]);
                        g_89 = ((safe_rshift_func_uint16_t_u_u(((((l_1153[2] != (safe_sub_func_int16_t_s_s((((l_1272[2][5][2] <= l_1270[3]) == ((l_1305 && 0x5CL) && (l_1270[3] != (safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_s((g_844 <= 5L), 6)) & (safe_rshift_func_int8_t_s_u((0xF1L >= l_1311), 6)))))))) <= g_886[5][0][0]), l_1299[5]))) == g_96) == g_1112[0]) | 8L), l_1299[5])) != g_89);
                    }
                }
                else
                {
                    unsigned char l_1330[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1330[i] = 1UL;
                    g_886[7][6][2] = (l_1299[1] != ((safe_lshift_func_int8_t_s_s((l_1299[5] && ((l_1223 & g_129) && g_89)), 4)) | (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((0UL <= 0L), g_7)), 3))));
                    l_1241[4] = (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_1241[4], func_48(l_1241[4]))), 7)) <= (g_340 & ((l_1326 > g_886[7][6][2]) <= g_886[7][4][0]))), (l_1241[5] | g_535)));
                    for (g_1271 = 1; (g_1271 <= 5); g_1271 += 1)
                    {
                        unsigned l_1338 = 18446744073709551615UL;
                        int i;
                        l_1329 = (l_1153[g_1271] == ((safe_rshift_func_int8_t_s_s(g_790, (0x9E1DL || l_1299[2]))) ^ 0x922CL));
                        l_1077 = func_36(l_1223, l_1330[1], g_147[0][4][1], (((safe_add_func_int8_t_s_s(l_1153[2], l_1241[4])) != (l_1241[4] || ((safe_lshift_func_uint16_t_u_u(func_66(g_777, ((g_340 < 4L) != l_1337), g_1112[0], g_886[4][1][2], l_1174), l_1338)) == 0L))) >= l_1241[4]), l_1337);
                    }
                }
            }
            else
            {
                unsigned short l_1349 = 0x29E4L;
                l_1174 = (safe_mod_func_int16_t_s_s(0x2267L, func_72(l_1216[4][3], func_20(g_1199, (0xA6L > (~(safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((0x3C097313L <= func_36((safe_mod_func_int32_t_s_s(l_1349, g_114)), (safe_lshift_func_uint8_t_u_u((1UL <= ((safe_rshift_func_int8_t_s_u((l_1305 ^ g_340), 7)) | g_1199)), g_886[6][6][0])), g_7, l_1354, g_212)), l_1349)), l_1174)), (-3L)))))))));
            }
        }
        for (l_1174 = 0; (l_1174 <= 0); l_1174 += 1)
        {
            int l_1373 = (-4L);
            int i;
            l_1305 = (safe_mul_func_uint8_t_u_u(g_1112[l_1174], (safe_sub_func_uint8_t_u_u(((~((g_844 && (~(safe_mod_func_uint32_t_u_u(g_266, (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(func_32(g_535, g_1112[0], ((safe_lshift_func_uint8_t_u_u(l_1200, 3)) == g_114)), ((0L && l_1153[3]) ^ g_107))), l_1305)) < g_88), 2)), l_1174)))))) <= 0x62L)) & (-1L)), 0x9FL))));
            l_1376 = (safe_mod_func_uint32_t_u_u(g_1112[0], (l_1373 | func_32((safe_rshift_func_uint8_t_u_s(l_1153[1], 4)), l_1200, l_1373))));
        }
    }
    for (g_497 = 0; (g_497 <= 6); g_497 += 1)
    {
        int l_1380 = 0x6BED0F44L;
        unsigned char l_1397 = 248UL;
        int i;
        l_1377 = l_1270[g_497];
        l_1380 = (safe_mod_func_uint16_t_u_u(g_790, g_497));
        l_1400 = func_32(g_790, (g_147[0][6][1] == (((safe_mod_func_int8_t_s_s((-1L), l_1290)) && (safe_rshift_func_int8_t_s_u((func_66(func_66(func_66(func_2(g_1199), (safe_add_func_int32_t_s_s(0xCC890170L, g_152)), (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(l_1396)), l_1397)), g_340)), (-1L))) >= 255UL), g_886[7][3][2])), l_1398, g_777), l_1290, g_88, g_88, l_1377), g_248, l_1399, l_1326, l_1397) ^ 0xB85F1E80L), l_1270[5]))) || 4L)), g_115);
    }
    for (g_114 = 0; g_114 < 7; g_114 += 1)
    {
        l_1270[g_114] = 4294967295UL;
    }
    for (l_1305 = 0; (l_1305 > (-14)); --l_1305)
    {
        unsigned l_1403 = 0xB6E12235L;
        unsigned l_1412[4];
        unsigned l_1461 = 4294967293UL;
        int l_1473 = 0x36884BA0L;
        unsigned char l_1480 = 1UL;
        int l_1486 = (-1L);
        short l_1561 = 0x5192L;
        unsigned l_1589 = 0x0D892DC2L;
        unsigned l_1708 = 0xE1770FBAL;
        unsigned short l_1722 = 1UL;
        unsigned short l_1760 = 0xE3EDL;
        int l_1762 = 0x25ABC4D0L;
        int i;
        for (i = 0; i < 4; i++)
            l_1412[i] = 4UL;
        if (l_1403)
        {
            short l_1406 = 0x7EE0L;
            const short l_1407[10][6][3] = {{{0x12F2L,0xB58DL,0x9869L},{0x4A5AL,0xB58DL,(-6L)},{0x177BL,0xFBD6L,5L},{0L,0x4504L,(-6L)},{3L,0x12F2L,0x9869L},{0x177BL,0x4A5AL,0x9869L}},{{0x4504L,(-1L),(-6L)},{(-1L),0xB58DL,5L},{0x12F2L,0x4A5AL,(-6L)},{0L,0L,0x9869L},{(-1L),0xDFA3L,0x9869L},{0xDFA3L,0xFBD6L,(-6L)}},{{(-2L),(-1L),5L},{3L,0xDFA3L,(-6L)},{0x12F2L,3L,0x9869L},{(-2L),0x4504L,0x9869L},{0x4A5AL,0xB58DL,(-6L)},{0x177BL,0xFBD6L,5L}},{{0L,0x4504L,(-6L)},{3L,0x12F2L,0x9869L},{0x177BL,0x4A5AL,0x9869L},{0x4504L,(-1L),(-6L)},{(-1L),0xB58DL,5L},{0x12F2L,0x4A5AL,(-6L)}},{{0L,0L,0x9869L},{(-1L),0xDFA3L,0x9869L},{0xDFA3L,0xFBD6L,(-6L)},{(-2L),(-1L),5L},{3L,0xDFA3L,(-6L)},{0x12F2L,3L,0x9869L}},{{(-2L),0x4504L,0x9869L},{0x4A5AL,0xB58DL,(-6L)},{0x177BL,1L,0xDFA3L},{0x4064L,0xC21EL,0x177BL},{0x44C4L,1L,0x12F2L},{0x8F99L,0x4340L,0x12F2L}},{{0xC21EL,(-1L),0x177BL},{0x9906L,0xB7ADL,0xDFA3L},{1L,0x4340L,0x177BL},{0x4064L,0x4064L,0x12F2L},{0x9906L,(-10L),0x12F2L},{(-10L),1L,0x177BL}},{{(-1L),(-1L),0xDFA3L},{0x44C4L,(-10L),0x177BL},{1L,0x44C4L,0x12F2L},{(-1L),0xC21EL,0x12F2L},{0x4340L,0xB7ADL,0x177BL},{0x8F99L,1L,0xDFA3L}},{{0x4064L,0xC21EL,0x177BL},{0x44C4L,1L,0x12F2L},{0x8F99L,0x4340L,0x12F2L},{0xC21EL,(-1L),0x177BL},{0x9906L,0xB7ADL,0xDFA3L},{1L,0x4340L,0x177BL}},{{0x4064L,0x4064L,0x12F2L},{0x9906L,(-10L),0x12F2L},{(-10L),1L,0x177BL},{(-1L),(-1L),0xDFA3L},{0x44C4L,(-10L),0x177BL},{1L,0x44C4L,0x12F2L}}};
            char l_1427 = 9L;
            int i, j, k;
            if (func_44((((g_10[7][6] <= func_32(l_1406, l_1403, l_1406)) <= ((l_1407[7][1][1] < (l_1403 & (safe_mod_func_int16_t_s_s(0x1829L, (l_1406 ^ 0L))))) > 0x7473ED1CL)) == g_88), l_1305, l_1412[1]))
            {
                for (l_4 = (-5); (l_4 < (-26)); l_4 = safe_sub_func_uint32_t_u_u(l_4, 5))
                {
                    if (g_248)
                        break;
                    g_89 = (safe_rshift_func_int16_t_s_u(0L, 3));
                }
                for (g_1232 = 1; (g_1232 < 42); g_1232 = safe_add_func_uint16_t_u_u(g_1232, 4))
                {
                    for (g_212 = 0; g_212 < 2; g_212 += 1)
                    {
                        for (g_96 = 0; g_96 < 9; g_96 += 1)
                        {
                            for (l_1396 = 0; l_1396 < 2; l_1396 += 1)
                            {
                                g_147[g_212][g_96][l_1396] = 65533UL;
                            }
                        }
                    }
                }
            }
            else
            {
                g_11 = (safe_mul_func_uint16_t_u_u(0xB775L, g_1070[1]));
            }
            g_7 = (func_66(l_1403, (safe_lshift_func_uint16_t_u_u(func_48((g_11 && (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_1427, (safe_lshift_func_uint16_t_u_s(((g_1070[1] & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((g_1238 && 7L) >= (0L | (((safe_mul_func_int16_t_s_s(l_1412[1], l_1436)) < g_10[7][2]) & 0L))), 13)), g_7))) | l_1412[2]), l_1412[1])))), l_1437)) == 6L) == g_129))), l_1326)), g_1438, g_10[0][2], l_1407[1][5][1]) <= 0x0B6DL);
            g_7 = l_1406;
        }
        else
        {
            char l_1449 = (-8L);
            unsigned char l_1452 = 0xD5L;
            int l_1475 = (-1L);
            unsigned char l_1512[9] = {0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL};
            char l_1523 = 0x99L;
            unsigned l_1585 = 0UL;
            int i;
            for (g_790 = 20; (g_790 < 6); g_790 = safe_sub_func_int32_t_s_s(g_790, 3))
            {
                short l_1445 = 0x4606L;
                unsigned l_1474 = 18446744073709551613UL;
                unsigned l_1485 = 0x5C9E8678L;
                short l_1502 = 0x00BFL;
                int l_1505 = 0x12847B24L;
                const unsigned l_1562 = 0xE6D4B4CFL;
                for (l_1400 = 27; (l_1400 <= 4); l_1400--)
                {
                    unsigned char l_1448 = 248UL;
                    for (g_844 = (-13); (g_844 == 32); g_844++)
                    {
                        unsigned l_1446[8][3][7] = {{{18446744073709551615UL,0x3359F737L,4UL,18446744073709551615UL,0xF2FFA4DAL,0xF2FFA4DAL,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,18446744073709551609UL,0x392BFDDBL,0x28BCD97AL,0x47B4C318L,0x79CB454BL},{18446744073709551615UL,0xCF2D6965L,4UL,0xBA5E3D57L,8UL,18446744073709551615UL,0x7F189B69L}},{{0x3359F737L,2UL,18446744073709551615UL,18446744073709551615UL,0x60D6EB54L,0x47B4C318L,0xCF2D6965L},{18446744073709551615UL,18446744073709551615UL,9UL,2UL,0x7CCF4888L,0xF2FFA4DAL,18446744073709551614UL},{0xBA5E3D57L,0xE490617CL,18446744073709551614UL,18446744073709551615UL,18446744073709551613UL,0x52E93768L,2UL}},{{0x3F55DA88L,0xC8A649CAL,0xCE5DCF20L,0xE30E6B73L,18446744073709551615UL,18446744073709551609UL,0x7CCF4888L},{0xC9BD7030L,0x6D23F644L,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,0xB65CEFD6L},{18446744073709551606UL,0xDA8C9344L,0x7E5B54B0L,18446744073709551609UL,18446744073709551613UL,0xCE5DCF20L,4UL}},{{0xEE5BE441L,18446744073709551615UL,18446744073709551615UL,0x7CCF4888L,0x7CCF4888L,18446744073709551615UL,18446744073709551615UL},{0x1051F0DFL,0x3F55DA88L,6UL,0x09986AE5L,0x60D6EB54L,0x392BFDDBL,0xB0C5C03FL},{0x79CB454BL,18446744073709551615UL,0xEE5BE441L,18446744073709551613UL,8UL,18446744073709551615UL,9UL}},{{0xF2FFA4DAL,0xC9BD7030L,9UL,0x09986AE5L,0x28BCD97AL,0x0616BD15L,0xBA5E3D57L},{18446744073709551615UL,9UL,2UL,0x7CCF4888L,0xF2FFA4DAL,18446744073709551614UL,1UL},{9UL,0xEE5BE441L,0xC9BD7030L,8UL,18446744073709551615UL,0xBA5E3D57L,18446744073709551615UL}},{{0x529E0786L,18446744073709551609UL,0x79CB454BL,0x392BFDDBL,8UL,0x52E93768L,0xC8A649CAL},{0xF2FFA4DAL,0x3F55DA88L,0x79CB454BL,18446744073709551614UL,1UL,0xCE5DCF20L,9UL},{18446744073709551615UL,18446744073709551615UL,0xC9BD7030L,18446744073709551615UL,18446744073709551609UL,0xF2FFA4DAL,0UL}},{{0x60D6EB54L,18446744073709551614UL,0xCE5DCF20L,0xCE5DCF20L,18446744073709551614UL,0x60D6EB54L,18446744073709551609UL},{18446744073709551615UL,0x28BCD97AL,0xC8A649CAL,0xDA8C9344L,9UL,0x3F55DA88L,0x6D23F644L},{2UL,0xB0C5C03FL,0xE30E6B73L,0x3F55DA88L,0xBA5E3D57L,0xC8A649CAL,18446744073709551606UL}},{{0x3359F737L,0x28BCD97AL,18446744073709551614UL,0x09986AE5L,18446744073709551614UL,18446744073709551611UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL,18446744073709551615UL,0xB65CEFD6L,0xC8A649CAL,8UL,0x5D8096B1L},{18446744073709551614UL,18446744073709551615UL,18446744073709551613UL,0x52E93768L,2UL,6UL,18446744073709551615UL}}};
                        int l_1447 = 0x558555E1L;
                        int i, j, k;
                        l_1447 = ((l_1445 > l_1412[1]) <= func_48(l_1446[3][2][1]));
                        l_1077 = g_7;
                        return l_1448;
                    }
                    if (l_1449)
                    {
                        unsigned char l_1471 = 0xB2L;
                        g_886[7][6][2] = ((safe_add_func_uint8_t_u_u(g_152, (l_1452 > (g_1070[1] == (safe_add_func_int8_t_s_s(l_1448, (g_1070[1] ^ l_1445))))))) <= g_173);
                        if (g_11)
                            continue;
                        l_1473 = (((g_790 | (safe_lshift_func_int8_t_s_u(7L, (safe_mul_func_int16_t_s_s(((func_36((safe_add_func_uint8_t_u_u(l_1461, g_266)), l_1449, (((safe_mod_func_int16_t_s_s((l_1464 ^ (safe_rshift_func_int8_t_s_s(1L, 6))), (((((safe_sub_func_uint16_t_u_u(l_1290, ((safe_add_func_uint32_t_u_u(9UL, 0xD8D2401EL)) <= l_1445))) || g_822) != g_248) < 0x132510FDL) && g_777))) <= l_1471) | l_1403), g_152, l_1472) || g_10[0][6]) && g_147[0][4][1]), g_1112[0]))))) & (-5L)) | l_1290);
                        return g_266;
                    }
                    else
                    {
                        g_7 = (g_1112[0] >= l_1445);
                        l_1475 = l_1474;
                        g_11 = 0xF0F729AAL;
                        l_1475 = g_1070[1];
                    }
                    if (g_790)
                        continue;
                    g_886[7][6][2] = l_1461;
                }
                l_1480 = (((safe_add_func_uint8_t_u_u((((l_1403 || (((((safe_sub_func_int32_t_s_s((0x3D02L != (65530UL < g_1238)), (l_4 <= (l_1399 >= 255UL)))) || g_114) == ((g_886[7][6][2] ^ l_1445) ^ g_96)) > 5L) <= l_1290)) & g_1232) ^ 0xD8L), g_248)) >= g_88) == g_1112[0]);
                for (g_844 = 0; (g_844 < 7); g_844 = safe_add_func_uint32_t_u_u(g_844, 2))
                {
                    unsigned l_1503 = 0x94D1C8F9L;
                    unsigned char l_1524 = 0x19L;
                    char l_1542 = (-3L);
                    int l_1543 = 0x03254DEFL;
                    unsigned l_1570 = 0xA68ECFDBL;
                    if (((safe_mul_func_int16_t_s_s(((0UL != func_32(l_1485, g_1199, (0x0B09B356L & g_114))) != l_1486), 65535UL)) | (6L ^ g_88)))
                    {
                        l_1505 = (func_32(l_1452, g_777, (safe_mod_func_int8_t_s_s(((~((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(((+(((g_107 == ((1L || (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((((g_886[7][6][2] | (safe_mod_func_uint8_t_u_u(l_1449, l_1501))) == l_1502) && l_1503) > l_1504[4]) < g_1112[0]) & g_120[9]), 0xECL)), l_1436))) >= 0xFBL)) ^ g_120[9]) & l_1475)) && 0x6AFEA20AL), l_1412[2])) | 9UL), g_790)), 11)) <= g_7)) <= l_1452), g_212))) ^ 0x4EB5837EL);
                        if (g_147[0][4][1])
                            continue;
                    }
                    else
                    {
                        const short l_1525 = 0xFE02L;
                        l_1473 = (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(func_66(g_1238, (func_2(((safe_add_func_int16_t_s_s((3UL || g_10[0][1]), (l_1512[2] && (((safe_sub_func_int16_t_s_s(g_1199, (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(65535UL, (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(0xA130L, ((~(g_886[7][6][2] | func_44(l_1445, g_1112[0], g_1112[0]))) & g_1438))) < g_790), l_1452)))), l_1523)))) & g_886[7][6][2]) <= l_1524)))) ^ g_1438)) == g_1438), g_1438, g_1271, l_1525), g_1070[1])) | 65528UL), 1L));
                        if (g_7)
                            continue;
                        g_886[8][3][0] = (0x25DCL < (safe_mod_func_uint16_t_u_u(g_89, (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_1238, l_1524)) > (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((!func_2(l_1504[4])), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(g_107, 7)), 6)))), ((l_1403 | l_1525) ^ l_1525)))), g_152)), l_1542)))));
                        if (l_1543)
                            continue;
                    }
                    for (l_1461 = 0; (l_1461 > 38); l_1461++)
                    {
                        g_7 = 0x52517196L;
                        return g_1300;
                    }
                    if (g_11)
                    {
                        int l_1550[5][3] = {{0x8457655EL,0x950DB86CL,0L},{(-1L),0x76509E2BL,(-1L)},{(-1L),0x8457655EL,0x76509E2BL},{0x8457655EL,(-1L),(-1L)},{0x76509E2BL,(-1L),0L}};
                        int i, j;
                        l_1550[3][0] = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_535, l_1542)), 10));
                        l_1505 = ((((l_1502 >= (safe_add_func_uint32_t_u_u(0UL, l_1505))) && ((g_212 == g_1070[1]) == l_1543)) >= (safe_mod_func_int16_t_s_s(l_1512[2], l_1523))) > g_1070[1]);
                        g_89 = (g_115 && (safe_rshift_func_uint16_t_u_u(g_120[9], 6)));
                    }
                    else
                    {
                        short l_1569 = (-7L);
                        l_1501 = ((func_36(l_1270[0], l_1543, g_120[9], (g_886[7][6][2] ^ g_1271), l_4) < ((+0x18L) > (((-1L) == l_1524) != g_11))) ^ 0xFCL);
                        g_7 = (l_1436 != (0xEEL <= (safe_mul_func_int16_t_s_s((((func_44(g_266, g_89, g_115) & l_1475) & (g_886[7][6][2] == (((((((l_1561 >= 0xB904BCC9L) <= (-1L)) | g_497) | l_1452) <= 0x4BE9L) || 0x11L) == l_1504[4]))) <= l_1562), 65535UL))));
                        g_7 = (g_10[0][2] | ((0xD2EFL && (safe_mul_func_int16_t_s_s((((l_1475 <= g_886[3][4][3]) > func_66(l_1542, ((l_1480 <= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_886[4][4][2], func_32(((((l_1562 == 8UL) < l_1523) > l_1485) >= 0L), l_1569, l_1569))), (-3L)))) || l_1569), g_96, l_1543, g_822)) ^ g_886[5][4][2]), g_1438))) & 0x1600L));
                        l_1505 = (((l_1570 != ((l_1399 || func_2(g_844)) <= (0x33A7L >= (safe_lshift_func_uint16_t_u_u(l_4, 1))))) ^ (safe_unary_minus_func_uint8_t_u((g_1070[3] ^ func_72(g_886[7][6][2], l_1485))))) >= l_1569);
                    }
                }
            }
            g_11 = 0L;
            if ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+l_1412[1]), l_1449)), (safe_mod_func_uint32_t_u_u(l_1486, l_1077)))))
            {
                g_886[5][0][0] = g_114;
            }
            else
            {
                unsigned char l_1580 = 251UL;
                unsigned char l_1586 = 1UL;
                if (l_1580)
                    break;
                g_1581 = (l_1403 != l_1475);
                for (g_1300 = (-15); (g_1300 < 43); g_1300 = safe_add_func_int16_t_s_s(g_1300, 2))
                {
                    g_11 = (l_1580 && (0x4A36DF7DL < (l_1584 > g_886[4][5][3])));
                    l_1585 = (g_340 == (-8L));
                }
                g_886[6][6][0] = (252UL <= func_23(l_1400, g_497, l_1586));
            }
        }
        g_11 = 0xDA63FDAFL;
        for (g_212 = 12; (g_212 < 18); g_212++)
        {
            char l_1596[9][7][4] = {{{0x88L,1L,0x43L,0x29L},{0x1CL,0x52L,2L,0x0CL},{(-2L),0x49L,9L,1L},{0x29L,3L,4L,(-5L)},{0xDEL,0x0CL,1L,0x34L},{(-3L),9L,(-1L),0L},{0xB0L,0xC1L,9L,(-1L)}},{{0x52L,0xAAL,2L,(-1L)},{0x59L,(-5L),1L,0xA4L},{(-1L),1L,(-1L),0xADL},{0L,0x35L,6L,0x7BL},{0x0EL,0xDFL,1L,1L},{1L,6L,0L,0L},{6L,6L,0xA4L,0x52L}},{{0x49L,(-10L),0x8BL,0xAAL},{0xC1L,0xDEL,7L,0x8BL},{(-1L),0xDEL,0x29L,0xAAL},{0xDEL,(-10L),(-9L),0x52L},{0xC1L,6L,0L,0L},{(-3L),6L,(-1L),1L},{0x5DL,0xDFL,2L,0x7BL}},{{0x00L,0x35L,0x1FL,0xADL},{4L,1L,7L,0xA4L},{0x7BL,(-5L),0x1CL,(-1L)},{0x0EL,0xAAL,9L,(-1L)},{0x1CL,0xC1L,1L,0L},{1L,9L,0xE3L,0x0CL},{3L,0xAAL,0x5EL,9L}},{{0L,0x7BL,0x1CL,0x25L},{(-3L),1L,0x5DL,1L},{0x7BL,0xC4L,0x09L,0xCEL},{0L,0x25L,0x35L,0x77L},{0x88L,0x35L,0x21L,(-9L)},{0xCEL,9L,6L,0x5DL},{(-1L),(-3L),0xC6L,1L}},{{0xECL,0x49L,0x1CL,0x49L},{0x35L,1L,0x43L,0xC6L},{0x00L,(-1L),0xBDL,3L},{7L,0L,0xAAL,0x77L},{7L,(-1L),0xBDL,0x0CL},{0x00L,0x77L,0x43L,0xC1L},{0x35L,(-1L),0x1CL,(-9L)}},{{0xECL,0x7BL,0xC6L,6L},{(-1L),0xC4L,6L,9L},{0xCEL,7L,0x21L,(-5L)},{0x88L,0L,0x35L,2L},{0L,0x7BL,0x09L,0x5DL},{0x7BL,(-1L),0x5DL,0xE3L},{(-3L),0xBAL,0x1CL,1L}},{{0L,(-1L),0x5EL,0x52L},{3L,(-1L),0L,6L},{1L,(-1L),6L,0L},{0x9CL,1L,0x0FL,0xC4L},{0x7BL,1L,0x9CL,0L},{0x7AL,0x34L,1L,0xA4L},{9L,0xC6L,0x0CL,0x21L}},{{0x34L,0L,0x43L,(-2L)},{0x2AL,0x9CL,(-1L),0xC1L},{0x1CL,(-1L),(-1L),0x1CL},{(-5L),(-5L),0x5EL,0L},{0x52L,0xFBL,0xCEL,0L},{1L,(-1L),1L,0L},{(-7L),0xFBL,9L,0L}}};
            int l_1600 = 0xBB9F257BL;
            unsigned char l_1637 = 0UL;
            int l_1654 = 0xDE840553L;
            unsigned short l_1655 = 4UL;
            int i, j, k;
            if (func_72(l_1403, l_1589))
            {
                int l_1593[3][10] = {{0xE40391EBL,0xE40391EBL,0xCC01A452L,0xE40391EBL,0xE40391EBL,0xCC01A452L,0xE40391EBL,0xE40391EBL,0xCC01A452L,0xE40391EBL},{0xE40391EBL,0xF58A192AL,0xF58A192AL,0xE40391EBL,0xF58A192AL,0xF58A192AL,0xE40391EBL,0xF58A192AL,0xF58A192AL,0xE40391EBL},{0xF58A192AL,0xE40391EBL,0xF58A192AL,0xF58A192AL,0xE40391EBL,0xF58A192AL,0xF58A192AL,0xE40391EBL,0xF58A192AL,0xF58A192AL}};
                unsigned char l_1615 = 3UL;
                char l_1616 = 5L;
                unsigned l_1617[8][5] = {{0UL,0x3723CA7CL,0xA540E00AL,0xA540E00AL,0x3723CA7CL},{0x3723CA7CL,2UL,0UL,0x540384D8L,4294967292UL},{0xE9834489L,2UL,0x540384D8L,0x5B2035B3L,0UL},{4294967292UL,2UL,2UL,4294967292UL,0x6A79EABDL},{0x540384D8L,7UL,0UL,0xA540E00AL,0x6A79EABDL},{2UL,0x540384D8L,0x5B2035B3L,0UL,0x5B2035B3L},{0UL,0UL,0x6A79EABDL,0xA540E00AL,0UL},{0xE9834489L,0x3723CA7CL,0x6A79EABDL,4294967292UL,2UL}};
                int l_1618 = 0L;
                short l_1662 = (-4L);
                int i, j;
                g_886[7][1][1] = ((safe_lshift_func_uint8_t_u_u((l_1461 == (func_32((l_1592[3] > ((0x09L < g_173) && (func_72(func_66(g_1438, l_1593[0][9], g_147[0][4][1], g_107, ((func_32((safe_lshift_func_int16_t_s_u(7L, g_11)), l_1596[4][3][0], g_1070[1]) == 1L) ^ 1UL)), l_1589) & 0x48L))), l_1398, g_10[3][3]) & l_1593[0][9])), g_844)) | l_1593[1][9]);
                for (l_1396 = 0; (l_1396 >= 39); l_1396 = safe_add_func_int32_t_s_s(l_1396, 3))
                {
                    unsigned short l_1599[7][6] = {{1UL,0x616EL,0UL,0x616EL,1UL,1UL},{65528UL,0x616EL,0x616EL,65528UL,65530UL,65528UL},{65528UL,65530UL,65528UL,0x616EL,0x616EL,65528UL},{1UL,1UL,0x616EL,0UL,0x616EL,1UL},{0x616EL,65530UL,0UL,0UL,65530UL,0x616EL},{1UL,0x616EL,0UL,0x616EL,1UL,1UL},{65528UL,0x616EL,0x616EL,65528UL,65530UL,65528UL}};
                    int i, j;
                    l_1600 = l_1599[3][1];
                    for (l_4 = 0; (l_4 != 17); l_4++)
                    {
                        g_886[7][6][2] = (l_1400 <= func_66((0xC9ABL & ((l_1593[0][9] & (((0x01EC7B87L < (safe_mod_func_int8_t_s_s(l_1473, (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_10[0][2] <= 0x967AL), ((safe_add_func_uint32_t_u_u(g_89, (safe_mul_func_uint8_t_u_u(4UL, 0x96L)))) ^ 4294967290UL))), l_1615)), (-6L)))))) <= g_11) == 0x48L)) | 9UL)), l_1616, l_1400, l_1584, g_120[9]));
                        l_1617[7][2] = g_1112[0];
                        l_1618 = 0xCCE97922L;
                        return l_1473;
                    }
                }
                for (l_1561 = 26; (l_1561 <= 27); l_1561 = safe_add_func_int16_t_s_s(l_1561, 7))
                {
                    unsigned l_1638 = 0UL;
                    for (g_535 = 29; (g_535 > 59); g_535 = safe_add_func_uint8_t_u_u(g_535, 7))
                    {
                        g_1639 = (~(func_66(l_1617[6][2], l_1593[0][9], (1UL ^ ((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(1L, (safe_mul_func_int16_t_s_s(g_340, (safe_lshift_func_uint8_t_u_s((func_72(g_844, ((func_72((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_1593[1][8], (g_497 && (safe_mod_func_uint32_t_u_u((l_1403 > g_1070[1]), l_1618))))), g_11)), l_1637) && 6UL) || 1UL)) < l_1638), 0)))))), 249UL)) > 0x84L) <= 4294967295UL) == 6UL) > l_1638) >= g_212)), g_11, g_535) & 0xC9L));
                        g_886[7][6][2] = ((g_1438 & (-7L)) <= ((-4L) < (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_88, (safe_mod_func_uint16_t_u_u(((l_1617[3][0] >= (safe_rshift_func_int16_t_s_s(g_1438, 7))) < (safe_mul_func_int16_t_s_s((l_1637 || g_212), (safe_sub_func_int8_t_s_s((!((safe_mul_func_int8_t_s_s((g_147[1][6][0] && g_1112[0]), l_1403)) | l_1654)), l_1655))))), l_1589)))), g_886[7][6][0]))));
                    }
                    if ((((((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(func_72(l_1638, (safe_add_func_int16_t_s_s(g_89, l_1617[7][2]))), l_1662)) >= (safe_add_func_uint16_t_u_u((func_2((safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(g_1070[1], (-2L))) >= (safe_add_func_int32_t_s_s((func_2((0x085BL && (0xA820L ^ l_1655))) != g_1438), g_1070[1]))), l_1638))) == 1UL), 0x3EC2L))), g_790)) && 0xCFL) <= 0xA58DAFF1L) && 2UL) < 0xE699L))
                    {
                        unsigned l_1681 = 0x64F5821BL;
                        g_886[7][6][2] = (((l_1615 | (l_1473 < (+g_1438))) != ((safe_add_func_uint32_t_u_u(l_1305, ((l_1654 < g_1070[1]) && (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int32_t_s_s((g_120[9] > g_497), ((safe_lshift_func_int8_t_s_s(func_32(g_777, l_1437, g_1581), 2)) > 9L))), l_1681)), 0xD96BL))))) & l_1638)) < g_115);
                        l_1618 = l_1377;
                    }
                    else
                    {
                        g_11 = g_1581;
                    }
                    g_11 = ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_10[2][1] ^ (safe_sub_func_int32_t_s_s((g_340 & l_1596[4][3][0]), l_1638))), (safe_rshift_func_int16_t_s_u(((((((((l_1412[3] == (safe_lshift_func_int8_t_s_u(l_1694, ((g_152 <= g_120[9]) >= (((g_1070[1] && l_1473) > 0xBE84L) <= g_790))))) != l_1638) | 0L) && g_497) & l_1589) | g_886[4][4][2]) | l_1617[7][2]) || (-3L)), 11)))), g_11)) || g_1070[1]);
                }
                for (l_1437 = 0; (l_1437 <= 6); l_1437 += 1)
                {
                    int i, j;
                    g_886[3][0][2] = g_10[(l_1437 + 1)][l_1437];
                    for (l_1584 = 0; (l_1584 > (-1)); l_1584--)
                    {
                        g_7 = (safe_sub_func_uint8_t_u_u(g_886[7][6][2], g_340));
                        l_1473 = ((safe_mod_func_uint8_t_u_u(l_1501, (safe_mul_func_uint16_t_u_u(g_173, l_1694)))) <= g_107);
                        if (l_1403)
                            break;
                        return g_1112[0];
                    }
                    for (g_1300 = (-11); (g_1300 >= 10); g_1300 = safe_add_func_uint32_t_u_u(g_1300, 1))
                    {
                        unsigned char l_1705[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1705[i] = 0xC0L;
                        return l_1705[0];
                    }
                }
            }
            else
            {
                g_886[7][6][2] = (safe_rshift_func_uint8_t_u_s((g_107 ^ 0x9A87L), l_1708));
            }
            if ((((safe_lshift_func_int16_t_s_u(g_173, 3)) < (0x26315A82L & 0xDBD53CFFL)) && 0x9C3E51DDL))
            {
                unsigned l_1713[3];
                int l_1723 = 0L;
                unsigned l_1755 = 0xE5DAD7A9L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1713[i] = 0UL;
                if (((0x0E65CCE1L && (safe_mod_func_uint8_t_u_u(g_115, l_1713[1]))) && ((l_1589 < ((safe_rshift_func_int8_t_s_s(g_886[7][6][2], 0)) <= (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((4294967295UL > g_173), func_66(l_1713[2], func_66((g_120[6] > 0L), l_1461, l_1399, l_1600, g_1070[2]), g_1271, l_1722, g_777))), l_1713[1])), l_1713[1])))) || 0x6706DE53L)))
                {
                    g_886[0][3][2] = 0x918FFF57L;
                    if (g_822)
                        break;
                    l_1723 = g_1581;
                }
                else
                {
                    int l_1742 = 0xCB39A0CCL;
                    unsigned l_1748 = 0xE0E46A05L;
                    unsigned l_1761[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1761[i] = 6UL;
                    for (l_1265 = 0; (l_1265 <= 3); l_1265 += 1)
                    {
                        int i;
                        g_886[7][6][2] = ((safe_sub_func_uint16_t_u_u((2UL | (safe_rshift_func_uint16_t_u_u((l_1412[l_1265] < l_1412[l_1265]), 9))), (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_1270[(l_1265 + 3)], (safe_mod_func_int32_t_s_s(func_32((safe_rshift_func_uint8_t_u_s(0x43L, 3)), (safe_mul_func_int8_t_s_s((func_2(l_1742) < g_1070[3]), (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_1747, 0x7BF5L)) || 0L), l_1437)))), g_129), l_4)))), g_147[0][4][1])) <= l_1748), 0UL)), 0L)))) || 1L);
                        g_89 = l_1713[0];
                        if (g_266)
                            continue;
                    }
                    for (l_1077 = 0; (l_1077 >= 8); l_1077 = safe_add_func_int16_t_s_s(l_1077, 2))
                    {
                        unsigned l_1763 = 0UL;
                        g_7 = ((-1L) && (!func_32(((g_1070[0] > ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((l_1755 ^ (-1L)) & (l_1722 == func_66(g_535, (0x66L <= func_32((l_1486 == ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((l_1755 | 0xC37B2E6AL) && 0L) && l_1760), 0xF8234E20L)), l_1761[0])) || 0L)), l_1761[0], l_1755)), g_88, l_1305, g_114))), g_790)) | 0x75L), 65529UL)) ^ g_497)) | 0L), g_248, l_1504[3])));
                        l_1762 = 0x110F329CL;
                        if (l_1400)
                            break;
                        g_886[3][0][3] = l_1763;
                    }
                }
            }
            else
            {
                unsigned l_1767 = 0x93433205L;
                if (l_1637)
                {
                    const int l_1772[10][3] = {{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L},{0x5FE1CAE7L,0x5FE1CAE7L,0x5FE1CAE7L}};
                    int i, j;
                    for (g_11 = 3; (g_11 <= 9); g_11 += 1)
                    {
                        int i;
                        return g_120[g_11];
                    }
                    for (l_1561 = 6; (l_1561 >= 2); l_1561 -= 1)
                    {
                        unsigned char l_1764[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1764[i] = 0x7FL;
                        if (g_340)
                            break;
                        g_7 = (-8L);
                        l_1473 = (0x1BE5L ^ l_1764[0]);
                        g_7 = (g_790 == func_66(l_1592[3], g_248, l_1398, (safe_sub_func_int8_t_s_s(l_1767, ((65535UL == g_115) <= (safe_add_func_int8_t_s_s(func_66((~(safe_lshift_func_int8_t_s_u(g_497, (g_1581 < l_1767)))), l_1762, l_1767, g_88, l_1772[5][2]), g_120[9]))))), g_115));
                    }
                }
                else
                {
                    g_7 = (g_107 > (safe_sub_func_uint32_t_u_u(g_129, l_1655)));
                    for (g_777 = 0; (g_777 != 7); ++g_777)
                    {
                        return l_1655;
                    }
                    g_89 = g_1232;
                }
            }
            l_1600 = 0x0A0796F1L;
        }
    }
    return l_1398;
}







static short func_2(unsigned p_3)
{
    unsigned l_14 = 0x8D383303L;
    int l_17 = (-5L);
    for (p_3 = (-10); (p_3 != 36); p_3++)
    {
        for (g_7 = 29; (g_7 > (-2)); --g_7)
        {
            int l_15 = (-1L);
            int l_16 = (-4L);
            for (g_11 = 5; (g_11 >= 0); g_11 -= 1)
            {
                int i, j;
                l_14 = (safe_lshift_func_int8_t_s_u(g_10[(g_11 + 1)][g_11], 4));
            }
            l_16 = l_15;
        }
        l_17 = (-8L);
        if (p_3)
            break;
    }
    g_7 = (p_3 && p_3);
    return p_3;
}







static int func_20(unsigned p_21, char p_22)
{
    unsigned char l_27 = 0xC2L;
    short l_1074 = (-1L);
    l_1074 = func_23(l_27, (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((func_32((func_36((safe_mul_func_int16_t_s_s(func_44(l_27, p_21, (g_10[6][1] && (l_27 || ((func_48(g_10[7][4]) <= (safe_add_func_int32_t_s_s(g_107, (safe_add_func_int8_t_s_s(l_27, 0x08L))))) > g_10[3][2])))), l_27)), p_22, l_27, l_27, l_27) == l_27), g_107, g_10[1][6]) || 0x72AC0348L), 7UL)), 1UL)), l_27);
    return l_27;
}







static const int func_23(char p_24, char p_25, unsigned short p_26)
{
    char l_579 = 0x37L;
    short l_586 = 0x96BDL;
    const unsigned short l_604 = 1UL;
    const unsigned l_611 = 18446744073709551615UL;
    int l_621 = 0xA0031D75L;
    int l_664 = 0x933CA411L;
    int l_667 = 0x8E217BCAL;
    const int l_687 = 0x00C246EAL;
    short l_763 = 0xB7FCL;
    char l_821[4][3][10] = {{{2L,0x84L,0L,(-1L),(-3L),1L,0x84L,1L,(-3L),(-1L)},{0L,(-7L),0L,0x87L,(-1L),0xC7L,(-7L),1L,0xBEL,(-3L)},{0x07L,1L,0L,(-3L),0x87L,2L,1L,1L,(-1L),(-1L)}},{{1L,(-5L),0L,0xBEL,0xBEL,0L,(-5L),1L,(-1L),0x87L},{0xC7L,(-1L),0L,(-1L),(-1L),0x07L,(-1L),1L,0x87L,0xBEL},{2L,0x84L,0L,(-1L),(-3L),1L,0x84L,1L,(-3L),(-1L)}},{{0L,(-7L),0L,0x87L,(-1L),0xC7L,(-7L),1L,0xBEL,(-3L)},{0x07L,1L,0L,(-3L),0x87L,2L,1L,1L,(-1L),(-1L)},{1L,(-5L),0L,0xBEL,0xBEL,0L,(-5L),1L,(-1L),0x87L}},{{0xC7L,(-1L),0L,(-1L),0L,0xBEL,2L,0x87L,(-1L),4L},{(-3L),0xD5L,(-1L),0L,(-5L),0x87L,0xD5L,0x87L,(-5L),0L},{(-1L),0xEBL,(-1L),(-1L),0L,(-1L),0xEBL,0x87L,4L,(-5L)}}};
    short l_928 = 0xA694L;
    const unsigned l_945 = 0UL;
    unsigned short l_963 = 0xA5ECL;
    int i, j, k;
    for (g_96 = 0; (g_96 <= 58); ++g_96)
    {
        int l_576 = 8L;
        const unsigned l_631 = 0x7233032BL;
        int l_677 = 0L;
        l_576 = 0x65521EE6L;
        g_89 = g_114;
        l_576 = (func_32(((p_25 <= (l_576 > ((((safe_mul_func_uint16_t_u_u(p_25, (((l_576 >= func_32(l_579, func_32((g_88 || (((((((func_32((safe_add_func_uint32_t_u_u(p_26, ((((!func_32((safe_add_func_uint16_t_u_u(l_576, 0UL)), p_26, g_120[9])) & p_25) && p_26) == g_147[0][4][1]))), p_25, g_535) ^ p_26) < 0xB672L) ^ 0xE1E5L) < 8UL) | l_579) >= l_579) > l_579)), g_114, g_107), l_576)) & 0x943EL) && l_579))) != l_579) ^ p_24) & g_120[9]))) != 0x73L), l_576, l_576) & g_129);
        if (l_586)
        {
            unsigned l_587 = 0xF58B0784L;
            char l_605 = 0L;
            int l_632 = 0x720BD1C2L;
            l_587 = p_26;
            if (((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_24, (safe_mul_func_uint8_t_u_u(func_32(p_25, (safe_mod_func_int8_t_s_s(g_120[9], (safe_mod_func_int16_t_s_s((1UL > l_586), ((safe_sub_func_uint16_t_u_u((0x70FE9FFAL || (func_32(p_26, ((-8L) | p_24), g_266) >= (-6L))), 0x4D6CL)) & 0xFB19L))))), l_604), g_266)))) <= l_604), 0x29B0L)) | p_24), 11)), l_576)) <= 0xB2FDL) >= l_605) | l_604))
            {
                int l_610 = 0x80F93FE5L;
                for (p_25 = 0; (p_25 == (-19)); p_25 = safe_sub_func_int8_t_s_s(p_25, 3))
                {
                    unsigned l_618 = 0x7BB4D0ADL;
                    short l_622 = 9L;
                    for (g_88 = (-5); (g_88 <= 52); g_88 = safe_add_func_int8_t_s_s(g_88, 1))
                    {
                        if (p_24)
                            break;
                        l_610 = l_604;
                    }
                    if (l_576)
                    {
                        return l_611;
                    }
                    else
                    {
                        l_621 = (safe_sub_func_uint8_t_u_u(248UL, ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_497, func_32(func_32(l_618, (l_604 ^ (func_32((safe_lshift_func_int8_t_s_u((p_26 && (0x3672L ^ ((g_89 ^ (65535UL | p_25)) & 0UL))), p_25)), g_535, g_89) && p_25)), g_340), p_26, p_26))), l_610)) | g_147[0][6][1])));
                    }
                    if (l_622)
                        break;
                    if (l_576)
                        break;
                }
                if (p_25)
                    continue;
                l_632 = (0x981995CFL >= (+(func_32(g_115, (safe_sub_func_uint32_t_u_u(g_147[0][8][1], ((l_610 != ((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(g_129, 11)) < p_25) | (safe_rshift_func_uint16_t_u_s(func_32(l_576, g_120[9], l_610), g_120[8]))), l_587)) ^ g_535)) < 0x99B1L))), l_631) >= 0x60C5FCF6L)));
                for (g_497 = (-30); (g_497 != 30); g_497++)
                {
                    for (g_88 = 0; (g_88 > 11); g_88 = safe_add_func_int16_t_s_s(g_88, 4))
                    {
                        g_89 = (-5L);
                    }
                }
            }
            else
            {
                unsigned char l_637[6][6][3] = {{{2UL,0x5AL,0xC9L},{5UL,0x58L,0x58L},{1UL,0x5AL,0UL},{3UL,0x58L,255UL},{0xF7L,0x5AL,0x5AL},{252UL,0x58L,1UL}},{{2UL,0x5AL,0xC9L},{5UL,0x58L,0x58L},{1UL,0x5AL,0UL},{3UL,0x58L,255UL},{0xF7L,0x5AL,0x5AL},{252UL,0x58L,1UL}},{{2UL,0x5AL,0xC9L},{5UL,0x58L,0x58L},{1UL,0x5AL,0UL},{3UL,0x58L,255UL},{0xF7L,0x5AL,0x5AL},{252UL,0x58L,1UL}},{{2UL,0x5AL,0xC9L},{5UL,0x58L,0x58L},{1UL,0x5AL,0UL},{3UL,0x58L,255UL},{0xF7L,0x5AL,0x5AL},{5UL,1UL,255UL}},{{1UL,0UL,0x5AL},{3UL,1UL,1UL},{0xF7L,0UL,0xC9L},{252UL,1UL,0x58L},{2UL,0UL,0UL},{5UL,1UL,255UL}},{{1UL,0UL,0x5AL},{3UL,1UL,1UL},{0xF7L,0UL,0xC9L},{252UL,1UL,0x58L},{2UL,0UL,0UL},{5UL,1UL,255UL}}};
                int i, j, k;
                l_637[4][1][2] = p_25;
            }
            if (l_576)
                continue;
            l_621 = (safe_sub_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_s((((g_96 >= ((safe_mul_func_int8_t_s_s((func_32(p_24, l_631, g_89) & ((safe_mod_func_uint32_t_u_u(l_579, g_147[1][8][1])) | (0xEE1539DFL > g_340))), l_611)) <= g_147[0][4][1])) & g_147[0][4][1]) != p_26), p_26))));
        }
        else
        {
            int l_646[10][10] = {{0xB6DA1CAAL,0x1757D152L,0L,0x34130F2BL,0x99C48B1EL,0x832B7E75L,0L,(-10L),(-10L),0L},{0xABD8FDAEL,0xB6DA1CAAL,0x34130F2BL,0x34130F2BL,0xB6DA1CAAL,0xABD8FDAEL,1L,0x832B7E75L,0x013C8B39L,8L},{8L,(-10L),0x1757D152L,0x91ED3D61L,0L,0x8A672581L,0xABD8FDAEL,0x8A672581L,0L,0x91ED3D61L},{8L,0x8A672581L,8L,0x68773307L,0L,0xABD8FDAEL,0x91ED3D61L,0x99C48B1EL,0x1757D152L,0x832B7E75L},{0xABD8FDAEL,0x91ED3D61L,0x99C48B1EL,0x1757D152L,0x832B7E75L,0x832B7E75L,0x1757D152L,0x99C48B1EL,0x91ED3D61L,0xABD8FDAEL},{0xB6DA1CAAL,(-1L),8L,(-10L),0x1757D152L,0x91ED3D61L,0x99C48B1EL,0xABD8FDAEL,0x1757D152L,0xABD8FDAEL},{1L,0x8A672581L,(-1L),0x832B7E75L,(-1L),0x8A672581L,1L,0xB6DA1CAAL,0x68773307L,0x1757D152L},{(-1L),0x99C48B1EL,0L,8L,0xB6DA1CAAL,0x91ED3D61L,0x013C8B39L,0x013C8B39L,0x91ED3D61L,0xB6DA1CAAL},{0x68773307L,0x99C48B1EL,0x99C48B1EL,0x68773307L,0x91ED3D61L,(-1L),1L,0x1757D152L,0x34130F2BL,(-10L)},{0L,0x8A672581L,0x34130F2BL,1L,0x99C48B1EL,8L,0x99C48B1EL,1L,0x34130F2BL,0x8A672581L}};
            int i, j;
            l_621 = l_646[2][8];
            if (p_25)
                break;
            if (func_32((safe_sub_func_uint32_t_u_u(l_631, (p_26 <= p_24))), l_631, (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((p_26 == (((((+(safe_mul_func_int8_t_s_s(l_621, (safe_lshift_func_int16_t_s_u(l_576, (safe_mul_func_int8_t_s_s(g_266, func_32((safe_sub_func_int16_t_s_s((l_576 || l_631), 0x5CFBL)), p_24, g_115)))))))) < 65528UL) & (-8L)) ^ 0xF4L) >= 0x2DBF22E7L)), 0xF25A8567L)), 0L))))
            {
                int l_663 = 0xD576B5BEL;
                l_576 = (safe_mod_func_uint8_t_u_u(l_663, 3L));
                if (l_664)
                    break;
            }
            else
            {
                int l_674 = 4L;
                l_674 = ((safe_add_func_uint8_t_u_u((func_32(l_667, func_32((((9L >= ((safe_mul_func_uint16_t_u_u(p_26, (!1UL))) && (p_26 != 0x5BL))) && (safe_sub_func_uint32_t_u_u((0x2C6AB1B0L ^ 0x26DCFB23L), (safe_mul_func_uint16_t_u_u(p_25, 65535UL))))) == g_89), g_115, p_25), g_147[0][4][1]) >= p_25), 251UL)) ^ g_96);
                l_674 = (p_24 != (g_173 | ((p_25 < g_497) <= (((safe_add_func_uint8_t_u_u(0x28L, (((-2L) & l_677) >= (0xC2L ^ (safe_lshift_func_int16_t_s_s(func_32(((((func_32(((0x7566EFB9L < g_497) ^ 253UL), g_535, l_646[8][2]) || p_24) == g_96) < p_25) != 0xE8L), p_25, p_26), g_96)))))) | 0x80B0L) || l_631))));
            }
            l_621 = g_147[0][4][1];
        }
    }
    for (l_621 = 0; (l_621 > 10); l_621 = safe_add_func_int16_t_s_s(l_621, 2))
    {
        char l_682[2][6][7] = {{{(-5L),(-7L),0x08L,0xD6L,0x49L,(-5L),0xD6L},{1L,0L,0x17L,(-7L),(-7L),0x17L,0L},{(-7L),(-4L),0x08L,(-4L),(-4L),0xD6L,0L},{0L,(-7L),0xD6L,0L,0L,0L,0xD6L},{0x49L,0x49L,1L,(-4L),(-7L),0x4EL,0x49L},{0x49L,0xD6L,0x08L,(-7L),(-5L),(-5L),(-7L)}},{{0L,0L,0L,0xD6L,(-7L),0L,(-4L)},{(-7L),0L,0L,0x49L,(-7L),0L,(-7L)},{0L,0x08L,0x08L,0L,0xD6L,(-4L),(-4L)},{0L,1L,0x08L,(-5L),(-4L),0L,0L},{1L,(-4L),0x4EL,(-4L),1L,0x17L,(-4L)},{0L,0xD6L,(-4L),(-4L),0x08L,(-4L),(-7L)}}};
        unsigned l_698 = 1UL;
        int l_699 = 3L;
        int i, j, k;
        l_682[0][3][6] = (((!p_24) == p_24) != l_586);
        if (g_535)
        {
            short l_688 = (-1L);
            int l_692 = 0x48A9F104L;
            g_89 = 0x5D45A269L;
            if (func_66((!((safe_lshift_func_int16_t_s_s((g_120[9] <= ((-9L) > (safe_mul_func_uint16_t_u_u((65527UL <= (func_32(g_88, (g_147[0][4][1] < (func_66(p_25, ((((p_25 & 0x5FF4C767L) <= p_25) <= 0x2B0EL) | l_687), g_88, l_688, g_129) && p_25)), p_25) == 1L)), g_88)))), 2)) & g_212)), g_248, p_24, p_24, l_688))
            {
                for (g_266 = (-4); (g_266 >= (-23)); --g_266)
                {
                    for (g_88 = 0; (g_88 <= 9); g_88 += 1)
                    {
                        int i;
                        l_692 = (((func_66(g_120[g_88], g_120[g_88], l_579, p_25, (0x5BL == l_688)) >= (((+((l_688 == ((safe_unary_minus_func_uint16_t_u(g_147[0][4][1])) | p_26)) ^ l_688)) < 255UL) && l_688)) && p_25) & 3L);
                        l_692 = (g_340 >= (g_120[g_88] && p_25));
                        return p_25;
                    }
                    return p_26;
                }
            }
            else
            {
                char l_695 = 0xC6L;
                if ((5L && (safe_rshift_func_uint16_t_u_s(l_695, l_695))))
                {
                    l_698 = (g_89 >= (safe_rshift_func_int8_t_s_u(p_26, 1)));
                }
                else
                {
                    g_89 = (g_114 && p_26);
                }
                l_699 = 0xCBE6606DL;
                for (l_688 = 0; (l_688 == (-5)); --l_688)
                {
                    return l_699;
                }
            }
        }
        else
        {
            char l_714 = 1L;
            int l_715[1];
            int i;
            for (i = 0; i < 1; i++)
                l_715[i] = 0L;
            l_715[0] = ((((p_26 > (p_25 <= g_120[9])) <= 0x3AL) <= func_66(g_147[0][4][1], (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((~(((safe_sub_func_uint8_t_u_u(p_25, 0xAFL)) < ((((safe_sub_func_uint32_t_u_u(1UL, (l_687 & l_586))) < p_26) == l_604) != 0xA5BDL)) && l_714)) ^ g_152) > l_714), 6)), g_248)), l_687)), l_714)) || p_24) ^ p_26), l_687, p_24, p_26)) & l_714);
            for (g_88 = 0; (g_88 <= 56); ++g_88)
            {
                unsigned short l_718 = 1UL;
                int l_753 = 0x4E430FA7L;
                if (l_718)
                    break;
                if (func_32(l_715[0], ((~(0x7B8BL > ((2L <= l_718) || l_718))) | 0x6564L), (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_89, g_266)), 4))))
                {
                    unsigned char l_738 = 9UL;
                    for (l_664 = (-5); (l_664 < 17); l_664++)
                    {
                        unsigned l_725 = 0xDE1AA9ABL;
                        l_725 = 0x33E56C48L;
                        l_715[0] = ((safe_lshift_func_int16_t_s_s(l_698, (safe_lshift_func_int8_t_s_s(0x16L, (((safe_lshift_func_uint16_t_u_u((p_25 != (safe_add_func_uint8_t_u_u(g_340, p_26))), g_89)) & (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_738, (g_96 && (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint8_t_u(p_25))))))), 6))) ^ g_147[0][7][1]))))) ^ l_586);
                        l_715[0] = g_107;
                    }
                    return l_698;
                }
                else
                {
                    unsigned short l_749 = 0xB9AAL;
                    int l_750 = 2L;
                    for (g_248 = 1; (g_248 >= 0); g_248 -= 1)
                    {
                        int i, j, k;
                        if (l_682[g_248][(g_248 + 1)][(g_248 + 5)])
                            break;
                        l_750 = (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(3UL, ((~0L) ^ func_32(l_682[g_248][g_248][(g_248 + 2)], (+0xBDL), g_147[g_248][(g_248 + 5)][g_248])))) > (safe_sub_func_int32_t_s_s(((1L == 1L) >= ((safe_sub_func_uint32_t_u_u(((l_699 >= 0xD8D18D83L) >= l_715[0]), l_749)) || 4294967295UL)), 0x5606815AL))) | l_698), p_26));
                        l_753 = (p_24 <= (safe_mul_func_uint8_t_u_u(g_535, func_66(g_114, l_715[0], g_147[0][6][0], l_750, g_147[0][6][0]))));
                    }
                    l_715[0] = 1L;
                    if (p_24)
                        continue;
                    g_89 = l_715[0];
                }
                for (l_753 = 29; (l_753 < (-9)); l_753 = safe_sub_func_int8_t_s_s(l_753, 6))
                {
                    const unsigned short l_758 = 0x019CL;
                    unsigned short l_827 = 0UL;
                    l_763 = (safe_lshift_func_int8_t_s_s((0xBDL && (func_66(g_120[1], l_715[0], g_114, g_115, l_758) <= (((+l_699) <= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((0x9076L > 0x2393L), 7)), 0L))) & g_115))), 7));
                    if ((safe_lshift_func_uint16_t_u_u(p_25, (((safe_rshift_func_int16_t_s_u((func_66(((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x91B8L, 0x15FDL)), (safe_lshift_func_uint8_t_u_u((p_26 < ((g_266 < (g_88 > 65535UL)) >= p_26)), (g_88 >= l_758))))) >= p_26), p_25, p_24, g_173, p_26) < p_26), 10)) || g_147[0][3][0]) || 0L))))
                    {
                        g_790 = ((safe_mul_func_uint16_t_u_u(((((safe_unary_minus_func_uint32_t_u(0x47BDC010L)) || (g_777 || 0UL)) & (((l_718 <= (safe_mod_func_int32_t_s_s((func_32((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(g_115, (((safe_add_func_uint16_t_u_u(0xC12CL, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_26, 0x6CE7D614L)), g_89)))) & l_714) | 0UL))) & 0xBCL), 3)), l_698, l_687) || p_26), g_535))) >= 0x70FFAF3FL) > g_497)) & l_758), g_152)) | l_664);
                        g_89 = (safe_sub_func_int16_t_s_s(p_25, (safe_unary_minus_func_int32_t_s(1L))));
                        if (l_715[0])
                            break;
                    }
                    else
                    {
                        l_699 = ((((safe_mod_func_int16_t_s_s(g_88, (safe_mul_func_int16_t_s_s((!func_66(l_763, l_758, (g_10[1][3] | (+p_24)), (safe_unary_minus_func_uint32_t_u((p_26 < (g_266 && func_32(p_24, p_25, g_790))))), g_120[9])), g_266)))) ^ g_120[9]) < (-1L)) != p_24);
                        g_822 = (safe_lshift_func_int8_t_s_u((0L && (safe_sub_func_uint32_t_u_u((((((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(l_718, (func_66(((((((((l_758 > ((0x2BC9FA6AL || (safe_mod_func_uint16_t_u_u(func_66(g_248, (safe_sub_func_int16_t_s_s(0xA93AL, p_25)), (((!(safe_sub_func_int16_t_s_s(p_24, (-8L)))) == l_621) == l_586), p_26, l_604), 65535UL))) <= (-2L))) && p_26) != g_10[4][3]) == p_25) != g_10[5][4]) & 0x063AL) | p_24) == p_24), l_821[3][1][9], g_129, p_24, p_24) | 0x6D591BE5L))) && g_115) ^ g_173), p_26)), g_88)) && p_26), 5)), 0x6B65CEACL)) ^ p_26) && l_758) >= 0x102C2635L) > p_24), l_698))), 4));
                    }
                    for (g_212 = 10; (g_212 > 2); g_212 = safe_sub_func_int32_t_s_s(g_212, 6))
                    {
                        return p_26;
                    }
                    for (l_667 = 0; (l_667 < (-22)); --l_667)
                    {
                        l_827 = l_586;
                        l_715[0] = (g_266 != 0xCAL);
                    }
                }
            }
        }
        l_699 = g_88;
    }
    for (l_586 = 0; (l_586 <= 1); l_586 += 1)
    {
        unsigned l_843[2];
        int l_859 = (-1L);
        short l_885 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_843[i] = 0x1A7F405EL;
        for (g_212 = 2; (g_212 >= 0); g_212 -= 1)
        {
            int i;
            if (g_120[(g_212 + 1)])
                break;
            return g_10[2][2];
        }
        for (g_777 = 0; (g_777 <= 1); g_777 += 1)
        {
            unsigned char l_834 = 1UL;
            l_621 = (g_114 < (p_26 <= p_24));
            g_844 = (safe_lshift_func_int8_t_s_s((p_26 != ((g_152 != 0xEEL) <= func_32((safe_add_func_uint16_t_u_u(l_834, (((safe_sub_func_uint16_t_u_u((0x8A15691FL && l_579), (safe_mul_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((func_32(l_586, g_535, g_340) < p_26), (-4L))), 0x2F5CL)) >= (-1L)) == 65532UL), 0L)))) && p_25) || 0x00318133L))), l_843[0], p_26))), 6));
            for (l_579 = 0; (l_579 <= 1); l_579 += 1)
            {
                unsigned char l_866 = 255UL;
                if ((l_834 < func_48(((4294967290UL && 0xE1C2A8B6L) | (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((0x2CL > (safe_lshift_func_uint8_t_u_s(func_36((safe_mul_func_int16_t_s_s(((l_859 >= 1UL) ^ g_147[0][6][0]), (safe_sub_func_uint32_t_u_u(p_25, (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((func_32(((0xC9L && 0x1AL) <= p_26), l_866, g_96) != 0xBFL), p_24)), g_129)))))), p_26, g_340, p_26, l_621), g_777))), p_24)), l_843[1])), 4)) <= p_25), 0xA4L)), 2))))))
                {
                    unsigned short l_867 = 0x4B5CL;
                    l_867 = (1UL && l_579);
                    l_621 = 0x22ED2F0FL;
                    for (l_866 = 0; (l_866 <= 2); l_866 += 1)
                    {
                        g_89 = (safe_add_func_uint8_t_u_u(8UL, 0xAEL));
                    }
                    g_886[7][6][2] = (func_32((p_24 ^ (-1L)), (g_844 >= ((safe_unary_minus_func_uint32_t_u(g_115)) & (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(0xB6L, (safe_add_func_uint32_t_u_u(g_777, (((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(l_586, func_32((safe_mod_func_int32_t_s_s(func_66(l_664, (safe_add_func_uint16_t_u_u((g_212 || l_664), 0xF250L)), p_26, l_885, g_88), 3L)), g_107, p_24))) == 65535UL), l_867)) <= g_844) && g_535))))) | 1L), 4)))), l_866) == l_834);
                }
                else
                {
                    if (p_24)
                        break;
                    return l_859;
                }
                for (g_535 = 0; (g_535 <= 1); g_535 += 1)
                {
                    for (p_25 = 1; (p_25 >= 0); p_25 -= 1)
                    {
                        unsigned l_887 = 18446744073709551609UL;
                        g_89 = 1L;
                        g_886[0][3][1] = func_72(g_10[4][1], l_887);
                        l_621 = p_25;
                    }
                    l_621 = l_821[3][1][9];
                    if ((safe_add_func_int32_t_s_s(func_72(l_834, (safe_rshift_func_uint8_t_u_u(p_24, (l_885 != p_24)))), g_107)))
                    {
                        unsigned char l_896 = 0x29L;
                        l_621 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_866, 7L)), 9));
                        l_896 = ((0xE494L || l_866) == 9L);
                    }
                    else
                    {
                        g_89 = ((safe_unary_minus_func_uint32_t_u(4294967295UL)) > g_152);
                        g_886[6][3][1] = l_667;
                        g_886[7][6][2] = (safe_rshift_func_int8_t_s_s(p_25, 6));
                        if (g_844)
                            continue;
                    }
                }
            }
        }
    }
    if (l_821[3][1][9])
    {
        unsigned char l_908 = 255UL;
        int l_909 = 0xBD61532DL;
        unsigned l_914 = 0xD5D2954BL;
        l_909 = ((g_129 & func_32((safe_lshift_func_int8_t_s_s((p_26 && ((((p_24 <= ((safe_lshift_func_int8_t_s_s(((!0x4093L) ^ (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_66(g_822, l_908, g_147[0][4][1], l_763, p_25), 3)) >= l_908), p_25))), 5)) | g_88)) != p_24) | g_822) | g_248)), g_107)), l_687, p_26)) & l_908);
        g_886[7][6][2] = ((-1L) > (p_26 == (safe_mul_func_uint16_t_u_u(g_147[0][5][0], (+(p_25 != l_821[1][1][1]))))));
        l_909 = g_777;
        for (g_340 = (-22); (g_340 >= 30); g_340 = safe_add_func_uint8_t_u_u(g_340, 1))
        {
            short l_925 = 0x448DL;
            unsigned l_1069 = 18446744073709551612UL;
            if ((func_44(l_914, (g_89 ^ 0x65017F20L), l_914) && (((-7L) & (safe_add_func_uint32_t_u_u((p_26 | func_72((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(g_844, (((safe_lshift_func_int16_t_s_s(p_26, l_925)) <= p_25) >= g_89))) == l_914) <= p_26) && l_687), 0x7EE5L)), g_129)), g_790)), 0x8AB3E17EL))) <= p_25)))
            {
                unsigned l_934 = 18446744073709551615UL;
                int l_970[10][9] = {{1L,0xF03546CDL,(-6L),0x0DA3BA49L,0x5EA8F78DL,0x0DA3BA49L,(-6L),0xF03546CDL,1L},{0L,0x43E4A292L,5L,0x4740F4A1L,0L,(-8L),0L,0x4740F4A1L,5L},{(-8L),(-8L),(-8L),0xCEF29971L,0xF03546CDL,0xFD6EB899L,1L,0xFD6EB899L,0xF03546CDL},{0L,0L,0L,0L,(-3L),(-7L),(-1L),5L,(-1L)},{1L,0x0DA3BA49L,(-8L),(-8L),0x0DA3BA49L,1L,0x5EA8F78DL,(-8L),1L},{0x81F6705BL,(-7L),5L,(-3L),(-3L),5L,(-7L),0x81F6705BL,0x43E4A292L},{1L,(-8L),(-6L),0x5EA8F78DL,0xF03546CDL,0xF03546CDL,0x5EA8F78DL,(-6L),(-8L)},{(-8L),0L,0x4740F4A1L,5L,0x43E4A292L,0L,0L,0x43E4A292L,5L},{1L,0xFD6EB899L,1L,(-8L),(-6L),0x5EA8F78DL,0xF03546CDL,0xF03546CDL,0x5EA8F78DL},{0x4740F4A1L,0L,(-8L),0L,0x4740F4A1L,5L,0x43E4A292L,0L,0L}};
                int i, j;
                l_621 = (safe_rshift_func_int16_t_s_u(l_928, g_266));
                for (p_24 = 0; (p_24 >= 7); p_24++)
                {
                    if (g_212)
                    {
                        unsigned char l_931[6] = {4UL,2UL,4UL,4UL,2UL,4UL};
                        int l_954 = 1L;
                        int i;
                        g_886[0][2][3] = func_44(l_931[1], (((((((safe_mul_func_uint16_t_u_u(l_934, ((g_152 | (safe_sub_func_uint16_t_u_u(0x3453L, (safe_lshift_func_uint8_t_u_s(0xBAL, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_24 || (l_925 ^ (!0x4DL))), l_931[4])), 0xE2L)), g_115))))))) ^ 0UL))) == l_945) < l_586) != 0x1A465805L) == g_822) & 4294967287UL) && 1L), g_96);
                        l_954 = (safe_mod_func_uint16_t_u_u(((((!(+(p_26 | p_26))) || 255UL) || (safe_mod_func_int32_t_s_s(0x0F158596L, 0x88DC7F65L))) >= ((func_72(g_173, (((safe_add_func_int16_t_s_s(0xDB03L, ((((safe_mod_func_int32_t_s_s(func_66((func_32(l_908, (p_25 < 0xA0L), g_886[8][4][2]) || g_10[7][6]), g_173, l_931[3], l_908, g_173), 8UL)) | g_147[0][5][1]) == 0x8009715AL) && g_152))) || p_26) <= p_24)) ^ 0xF0E6451BL) >= g_535)), g_212));
                        if (g_790)
                            continue;
                        if (l_579)
                            break;
                    }
                    else
                    {
                        g_886[7][6][2] = g_147[1][5][1];
                    }
                }
                l_970[3][6] = (func_48((safe_mul_func_uint16_t_u_u(l_945, p_25))) >= (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_963 || l_821[3][2][1]), l_925)), (safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_822, (safe_sub_func_int32_t_s_s((g_107 || ((0x0F1BL <= g_10[1][3]) & 0x36L)), g_777)))) > p_25), 1UL)))), g_822)));
            }
            else
            {
                unsigned char l_981[8][8][2] = {{{255UL,0xF3L},{0xE2L,0x28L},{252UL,0UL},{0x36L,0xBDL},{0x1AL,255UL},{255UL,1UL},{251UL,0x8DL},{252UL,0x8DL}},{{251UL,1UL},{255UL,255UL},{0x1AL,0xBDL},{0x36L,0UL},{252UL,0x28L},{0xE2L,0xF3L},{255UL,255UL},{0x44L,0x1FL}},{{0x24L,253UL},{252UL,0xBBL},{0x10L,252UL},{0xB7L,255UL},{0xB7L,252UL},{0x10L,0xBBL},{252UL,253UL},{0x24L,0x1FL}},{{0x44L,255UL},{255UL,0xF3L},{0xE2L,0x28L},{252UL,0UL},{0x36L,0xBDL},{0x1AL,255UL},{255UL,1UL},{0x8DL,0xF3L}},{{0x73L,0xF3L},{0x8DL,0x0FL},{0x10L,0x36L},{251UL,0x56L},{253UL,0xBDL},{0x73L,0x1FL},{0xBBL,0x69L},{0x36L,0x36L}},{{0x24L,0xA0L},{0x28L,252UL},{0x73L,1UL},{0UL,0x73L},{0xE2L,0x36L},{0xE2L,0x73L},{0UL,1UL},{0x73L,252UL}},{{0x28L,0xA0L},{0x24L,0x36L},{0x36L,0x69L},{0xBBL,0x1FL},{0x73L,0xBDL},{253UL,0x56L},{251UL,0x36L},{0x10L,0x0FL}},{{0x8DL,0xF3L},{0x73L,0xF3L},{0x8DL,0x0FL},{0x10L,0x36L},{251UL,0x56L},{253UL,0xBDL},{0x73L,0x1FL},{0xBBL,0x69L}}};
                unsigned l_998[5] = {0xF2209786L,0xF2209786L,0xF2209786L,0xF2209786L,0xF2209786L};
                int l_1016 = 0xC26C2E1EL;
                int i, j, k;
                if ((safe_add_func_int8_t_s_s(func_48(l_925), (0x2EL && g_535))))
                {
                    l_909 = ((safe_sub_func_int32_t_s_s(((((safe_mod_func_int32_t_s_s(0xE261888FL, (safe_lshift_func_int8_t_s_u((-9L), 6)))) >= l_928) | p_25) & p_25), ((((p_25 != (!0L)) == p_26) > ((func_44(l_925, l_914, l_821[3][1][9]) > g_777) || g_96)) >= (-1L)))) < 0x43B3C8F3L);
                }
                else
                {
                    return p_24;
                }
                for (g_152 = 2; (g_152 >= 0); g_152 -= 1)
                {
                    unsigned l_986 = 2UL;
                    for (l_925 = 0; (l_925 <= 2); l_925 += 1)
                    {
                        int i, j, k;
                        l_986 = (safe_mod_func_uint16_t_u_u((((l_821[l_925][l_925][(l_925 + 3)] >= g_88) > ((l_925 | 0x40393301L) >= ((l_821[l_925][l_925][(l_925 + 3)] <= l_981[0][6][0]) != (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_822 > 6L), func_32(g_777, g_89, g_115))), p_24))))) == 0x6BL), (-9L)));
                        if (p_26)
                            continue;
                    }
                    for (l_908 = 0; (l_908 <= 2); l_908 += 1)
                    {
                        int l_987[2][7][1] = {{{1L},{6L},{1L},{(-1L)},{(-1L)},{1L},{6L}},{{1L},{(-1L)},{(-1L)},{1L},{6L},{1L},{(-1L)}}};
                        int i, j, k;
                        l_987[1][4][0] = func_32(l_821[(l_908 + 1)][g_152][(l_908 + 3)], g_152, l_925);
                        l_987[1][4][0] = g_886[5][3][2];
                    }
                    g_89 = l_981[4][3][1];
                    if (g_266)
                    {
                        const unsigned l_1007 = 1UL;
                        l_1016 = ((safe_rshift_func_uint16_t_u_u(0x7333L, ((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(func_32(l_998[1], g_844, ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_32((safe_sub_func_int32_t_s_s((l_1007 == (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-2L), (safe_rshift_func_int16_t_s_s((65535UL ^ ((0x93L < l_986) <= g_790)), 5)))), l_986)), 15))), l_925)), g_147[1][6][0], p_25), g_114)), l_914)), l_986)) | g_147[0][3][0])), g_790)), 6)) > p_25), g_886[0][4][0])), l_986)) || l_981[0][6][0]))) & p_26);
                        if (l_925)
                            continue;
                        return g_10[6][4];
                    }
                    else
                    {
                        l_621 = ((l_908 ^ 4294967286UL) > (safe_mod_func_uint32_t_u_u((g_340 == (((((safe_rshift_func_uint8_t_u_u(func_32(func_32(((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((l_986 ^ func_32(func_32(p_25, (g_822 ^ (g_120[9] > (5L == 0UL))), g_129), g_10[4][3], l_925)), 0x6F8C4147L)) >= 1L), 0xF78BL)), 10)) >= 0x93F14F40L), p_26)) | 0UL), p_26, l_925), g_844, g_152), p_24)) | 249UL) >= g_886[7][6][2]) || p_26) != p_24)), l_925)));
                    }
                    for (g_88 = 0; (g_88 <= 2); g_88 += 1)
                    {
                        const unsigned short l_1045 = 0x1E89L;
                        g_886[7][0][3] = ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((4294967295UL < func_32(((safe_add_func_int8_t_s_s(p_24, p_25)) < l_908), p_24, (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_32(g_790, p_26, (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((!((p_24 & ((g_107 == p_24) >= l_925)) > p_26)), 65526UL)), g_10[2][6]))), p_26)), g_497)))) == l_1045), p_24)) < p_25), 7)) < l_925);
                        l_621 = 7L;
                        l_909 = ((safe_add_func_int32_t_s_s(func_32(p_24, ((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((~(0x7BL != (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((((l_664 && g_88) >= 0x6954L) || func_32((func_32(g_886[7][6][2], g_173, func_32(l_908, g_822, g_147[0][4][1])) || g_886[7][6][2]), p_26, p_25)) | p_25), p_25)) && 0x7AD63B21L) <= p_25) >= l_945), 14)) || 0x61L) <= p_26), p_25)))), g_790)) != 0xA2L), 0xA28AL)) <= 0xD4456D9CL) | 0x90D9L) && l_925), g_120[8]), 0xAA7F82C8L)) <= 0x10L);
                        g_886[7][6][2] = p_25;
                    }
                }
            }
            for (p_24 = 2; (p_24 <= 9); p_24 += 1)
            {
                short l_1058 = 0x3908L;
                int l_1061 = 0xEACAC5E8L;
                for (l_763 = 9; (l_763 >= 0); l_763 -= 1)
                {
                    int l_1062 = 0xF257DFA2L;
                    int i;
                    if (func_44(g_120[p_24], (g_120[p_24] ^ (l_687 ^ func_32((p_26 || p_25), l_1058, g_120[9]))), (safe_mul_func_uint8_t_u_u(p_24, p_25))))
                    {
                        l_1061 = 0xE599359BL;
                    }
                    else
                    {
                        l_1062 = 0L;
                        return l_1062;
                    }
                    for (g_129 = 6; (g_129 >= 0); g_129 -= 1)
                    {
                        l_909 = g_844;
                    }
                    l_909 = (0xC0D927F4L | (l_1058 == ((g_89 > (0xED155D30L != ((((safe_mod_func_int8_t_s_s(0x60L, l_1061)) < (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_1069, l_621)), l_1061))) <= g_248) >= p_25))) ^ p_26)));
                    l_909 = g_120[p_24];
                }
            }
        }
    }
    else
    {
        int l_1073 = 0x7648B70BL;
        l_1073 = (g_1070[1] <= (func_48(p_24) <= (g_777 <= (safe_lshift_func_int16_t_s_s((p_26 || l_963), 4)))));
    }
    return g_10[2][5];
}







static int func_32(char p_33, char p_34, const unsigned char p_35)
{
    char l_564 = 1L;
    int l_567 = 0x0CEDB90BL;
    l_564 = 3L;
    l_567 = (p_35 == ((safe_lshift_func_int8_t_s_s(p_33, 5)) >= g_114));
    g_89 = ((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((p_35 != (l_564 <= l_567)), p_33)), p_35)) != 0x89CEA372L);
    l_567 = g_114;
    return l_564;
}







static int func_36(unsigned p_37, int p_38, int p_39, short p_40, unsigned short p_41)
{
    short l_436 = 0xDACEL;
    int l_476 = 0x2AFD83F5L;
    for (p_37 = 3; (p_37 <= 9); p_37 += 1)
    {
        unsigned short l_414 = 4UL;
        unsigned l_421 = 0x95154B60L;
        int l_423 = 0L;
        int l_424 = 0x05B41BC4L;
        const int l_496[1][8][7] = {{{0L,(-10L),0L,0xAA18BF9BL,0xAA18BF9BL,0L,(-10L)},{(-7L),3L,0xB9021076L,(-3L),(-3L),1L,1L},{(-1L),(-1L),0xCB2505EBL,(-1L),(-1L),0L,(-2L)},{(-9L),(-1L),(-10L),0xE17E45DDL,3L,0xE17E45DDL,(-10L)},{(-2L),(-2L),0xAA18BF9BL,0xCB2505EBL,(-1L),0xD8AE5C08L,(-10L)},{(-9L),0xE17E45DDL,(-7L),(-7L),0xE17E45DDL,(-9L),3L},{(-1L),0xAA18BF9BL,(-1L),0L,(-1L),(-1L),0L},{0xB9021076L,0x56BCE59CL,0xB9021076L,1L,3L,(-1L),(-9L)}}};
        int l_534 = 0x6B410ACAL;
        unsigned l_561[4] = {0x8126CA8BL,0x8126CA8BL,0x8126CA8BL,0x8126CA8BL};
        int i, j, k;
        for (g_114 = 3; (g_114 <= 9); g_114 += 1)
        {
            int i;
            return g_120[p_37];
        }
        p_39 = ((safe_sub_func_int16_t_s_s(g_115, (((safe_lshift_func_int16_t_s_u(p_39, 11)) > func_66((l_414 <= (safe_mul_func_int8_t_s_s((0xAF761C27L ^ p_38), (((p_38 && ((0x97L || (safe_lshift_func_int8_t_s_u(p_38, (safe_rshift_func_uint16_t_u_u((((g_173 > g_212) || g_120[9]) | p_38), g_96))))) < (-1L))) > g_248) < g_88)))), p_37, l_414, p_38, p_39)) > l_421))) && (-1L));
        for (l_421 = 0; (l_421 <= 9); l_421 += 1)
        {
            const unsigned char l_429 = 7UL;
            int l_500[7];
            int i;
            for (i = 0; i < 7; i++)
                l_500[i] = 2L;
            for (p_38 = 2; (p_38 <= 9); p_38 += 1)
            {
                unsigned short l_422 = 65535UL;
                int l_472 = 0L;
                l_423 = func_72(p_41, l_422);
                for (l_422 = 0; (l_422 <= 1); l_422 += 1)
                {
                    int l_475[5][4][7] = {{{(-1L),0L,0xB9976B92L,0L,(-1L),0x468B30C7L,6L},{0xDAB85B1BL,(-7L),0x4A1695D7L,0x1330A687L,6L,0x5ECD1025L,(-1L)},{0x4A1695D7L,0x468B30C7L,4L,1L,0x231961AEL,(-1L),2L},{0xDAB85B1BL,0x1330A687L,0x76933132L,2L,0x76933132L,0x1330A687L,0xDAB85B1BL}},{{(-1L),0x1330A687L,0x2AB6F653L,6L,0L,0xDAB85B1BL,0xB9976B92L},{0xB9976B92L,0x468B30C7L,5L,0x2AB6F653L,2L,(-1L),(-7L)},{4L,(-7L),0x2AB6F653L,0x82B65BB6L,0x2AB6F653L,0xDAB85B1BL,1L},{0x5ECD1025L,0x5ECD1025L,0x82B65BB6L,0xDAB85B1BL,0x542AFAB8L,2L,2L}},{{0x2AB6F653L,0x542AFAB8L,0x76933132L,1L,(-1L),(-1L),6L},{0L,0x468B30C7L,2L,5L,0x542AFAB8L,6L,0x542AFAB8L},{0x1330A687L,(-1L),(-1L),0x1330A687L,0x2AB6F653L,6L,0L},{5L,2L,0x468B30C7L,0L,0x1330A687L,(-1L),0xDAB85B1BL}},{{1L,0x76933132L,0x542AFAB8L,0x2AB6F653L,0x5ECD1025L,2L,0L},{0xDAB85B1BL,0x82B65BB6L,0x5ECD1025L,0x5ECD1025L,0x82B65BB6L,0xDAB85B1BL,0x542AFAB8L},{0xDAB85B1BL,1L,(-1L),0x76933132L,2L,0xB9976B92L,6L},{1L,0L,6L,(-1L),5L,(-7L),2L}},{{5L,1L,0x2AB6F653L,0x231961AEL,0x231961AEL,0x2AB6F653L,1L},{0x1330A687L,0x82B65BB6L,0x2AB6F653L,(-7L),4L,0x231961AEL,(-1L)},{0L,0x76933132L,6L,2L,6L,0x468B30C7L,(-1L)},{0x2AB6F653L,2L,(-1L),(-7L),6L,6L,(-7L)}}};
                    int i, j, k;
                    l_424 = g_147[l_422][(l_422 + 7)][l_422];
                    for (l_414 = 0; (l_414 <= 9); l_414 += 1)
                    {
                        const unsigned short l_439 = 0x513EL;
                        unsigned char l_440 = 254UL;
                        l_424 = (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_429, ((!p_40) < (safe_sub_func_int8_t_s_s((0x98EB2AF3L && (func_66(g_115, (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u(l_436, func_66(g_340, (((g_147[l_422][(l_422 + 7)][l_422] && ((0UL & (safe_rshift_func_int16_t_s_s(g_147[l_422][(l_422 + 7)][l_422], 15))) >= p_37)) == g_114) < 65531UL), l_439, p_40, g_120[9]))) > l_429), 5)), g_173, g_115, g_88) | 0L)), 0UL))))), l_440));
                    }
                    if ((safe_sub_func_uint16_t_u_u(((g_147[l_422][(l_422 + 7)][l_422] || g_107) ^ (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((func_66(p_37, (((safe_rshift_func_int16_t_s_s(func_66((((safe_add_func_uint32_t_u_u(p_37, (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_429, ((safe_mod_func_int32_t_s_s((func_66((((+((safe_mul_func_int8_t_s_s(0x1CL, func_66(g_152, p_38, l_422, p_39, p_40))) < g_107)) > 0x42L) ^ l_421), g_147[l_422][(l_422 + 7)][l_422], l_429, l_422, l_436) >= l_414), 4294967291UL)) || 6UL))), 0x2BL)) | 0x320C1507L) >= l_429))) >= l_429) != p_37), g_173, p_40, g_212, l_422), 14)) & g_147[l_422][(l_422 + 7)][l_422]) >= l_429), l_422, g_248, g_120[0]) > g_10[2][4]) || (-3L)), p_37)), g_147[0][4][1]))), l_436)))
                    {
                        int l_471[9][2] = {{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L},{0xF79201D8L,0x5F10CFA0L}};
                        int i, j;
                        l_472 = ((g_10[3][5] >= (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_38 < (safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(0x94C6A02EL, g_89)) & (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(p_38, 6)) || (l_471[4][0] != p_38)) && (((p_38 == (65535UL == p_38)) ^ g_266) > p_40)), 14))), g_147[l_422][(l_422 + 7)][l_422]))), g_340)), g_147[0][4][1]))) && 0x84C86307L);
                        return g_173;
                    }
                    else
                    {
                        g_89 = (safe_lshift_func_uint16_t_u_u(g_147[l_422][(l_422 + 7)][l_422], 3));
                    }
                    if (l_423)
                    {
                        g_89 = 4L;
                        p_39 = (!(-2L));
                        l_475[3][1][0] = ((-1L) >= 0x7846B967L);
                        l_476 = l_472;
                    }
                    else
                    {
                        p_39 = g_147[l_422][(l_422 + 7)][l_422];
                        g_89 = p_40;
                        return g_212;
                    }
                }
                g_497 = (func_66((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_37, (((((safe_mod_func_uint16_t_u_u(l_424, (safe_add_func_uint32_t_u_u(g_212, (safe_sub_func_uint32_t_u_u(((((~(safe_rshift_func_int16_t_s_u((0xB2L ^ (safe_rshift_func_uint8_t_u_u(((g_147[0][4][1] ^ (safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((0x09F6B528L >= (p_37 && ((safe_unary_minus_func_int32_t_s(func_66(g_152, (0xCDL | l_422), l_429, p_39, p_37))) & l_472))), p_40)) >= 1L) | 0x040BL), p_37))) & l_476), l_429))), 9))) < g_107) || l_421) ^ l_436), p_39)))))) & 5UL) >= l_436) | p_40) == l_496[0][6][2]))), 15)), g_115, p_40, g_147[0][8][0], g_120[3]) > p_41);
            }
            l_500[1] = (safe_sub_func_int16_t_s_s(l_429, (g_173 ^ (-9L))));
            l_476 = (safe_sub_func_uint8_t_u_u((g_152 == ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_476, 4)) | p_37), 0)) & l_500[1])), (safe_add_func_uint32_t_u_u(l_436, (p_40 && ((0L & g_10[4][1]) >= l_500[5]))))));
            l_500[1] = g_340;
        }
        l_476 = ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_497, (p_39 && (p_37 >= (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((func_48((safe_add_func_int8_t_s_s(p_38, l_496[0][6][2]))) ^ l_423), l_414)), l_436)), g_10[0][4])))))), p_38)) && 255UL);
        for (l_421 = 0; (l_421 <= 9); l_421 += 1)
        {
            int l_525 = 7L;
            g_535 = ((g_173 != (p_41 && func_66((safe_mul_func_uint16_t_u_u(g_96, g_340)), (safe_mul_func_uint8_t_u_u((g_89 <= l_525), (safe_sub_func_int16_t_s_s(((l_476 && (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((!g_120[5]) & p_40), p_37)), g_120[9])), l_436))) == l_496[0][6][2]), l_534)))), g_173, l_534, g_89))) || g_248);
            for (l_525 = 0; (l_525 <= 9); l_525 += 1)
            {
                int l_553 = 0L;
                l_424 = (safe_sub_func_int16_t_s_s((func_44(((safe_mod_func_int8_t_s_s(func_44(func_48((g_114 >= g_89)), (safe_sub_func_uint32_t_u_u(((!(0L || (safe_unary_minus_func_uint8_t_u(3UL)))) == (p_38 >= ((l_414 == 0x365AL) || p_40))), p_39)), l_525), p_41)) | g_10[1][5]), g_497, l_436) && 0L), 0UL));
                if (g_173)
                {
                    if (p_37)
                        break;
                }
                else
                {
                    int l_560 = 8L;
                    l_534 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(4294967295UL, ((l_525 < p_38) & (((safe_mul_func_uint8_t_u_u(g_107, (p_40 ^ p_37))) == (0x90L || 0x95L)) >= 1L)))) & p_39), g_10[0][0])), g_152));
                    g_89 = ((-6L) > (safe_sub_func_uint32_t_u_u(g_115, (p_37 & (l_553 != (((l_525 || ((!((safe_sub_func_uint32_t_u_u((g_152 > (safe_lshift_func_uint8_t_u_u(0x58L, 5))), p_37)) >= ((safe_mod_func_uint8_t_u_u(p_39, l_560)) <= 0x1072L))) <= p_38)) >= l_496[0][6][2]) || 246UL))))));
                    for (g_173 = 2; (g_173 <= 9); g_173 += 1)
                    {
                        return l_560;
                    }
                    if (g_248)
                        continue;
                }
                if (l_561[0])
                    continue;
                if (p_38)
                    break;
            }
            p_39 = (0x6FL < (safe_lshift_func_uint8_t_u_u(0x65L, 5)));
        }
    }
    return p_39;
}







static const short func_44(unsigned char p_45, const unsigned p_46, unsigned short p_47)
{
    char l_387 = (-1L);
    l_387 = ((((((g_107 || 0x3CA1L) ^ 0xD9C8L) & (safe_rshift_func_int8_t_s_u(0x11L, 0))) > p_45) != func_48((g_147[0][1][1] ^ g_114))) != g_10[5][4]);
    g_89 = (l_387 > (l_387 < p_45));
    for (g_88 = 14; (g_88 >= 26); g_88 = safe_add_func_int16_t_s_s(g_88, 9))
    {
        unsigned l_406 = 1UL;
        int l_409 = (-8L);
        for (p_45 = 1; (p_45 <= 9); p_45 += 1)
        {
            int i;
            g_89 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((g_120[p_45] | (+(0x0AB8L ^ ((safe_mul_func_uint8_t_u_u(0xF7L, (safe_sub_func_int8_t_s_s(g_120[9], (p_47 < (p_47 & p_45)))))) == (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_387 && p_46), g_147[1][0][0])), 0UL)))))) | g_107), g_114)), 0L));
            if (p_47)
                break;
            l_409 = (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_120[p_45] < g_114), l_406)), (safe_sub_func_int32_t_s_s(0L, p_46))));
        }
    }
    return p_47;
}







static unsigned func_48(short p_49)
{
    unsigned l_175 = 0x8A10D3ACL;
    int l_276[5][3][7] = {{{0x22E7C7CCL,(-4L),0x4C534E02L,0x945547A3L,0x945547A3L,0x4C534E02L,(-4L)},{(-1L),1L,0x6D48F99CL,0x385C5DCDL,0x29AA79E0L,(-1L),0xBCA0A6BEL},{0x13EDC32EL,0L,3L,0xA9E05B60L,0x4C534E02L,0xBCA0A6BEL,1L}},{{1L,0x29AA79E0L,0x87C8608FL,0x385C5DCDL,0x22E7C7CCL,(-1L),3L},{(-1L),1L,3L,0x945547A3L,0x7B5E051AL,0x87C8608FL,0x5A60EC3EL},{8L,0x8D64B5F3L,(-1L),0x87C8608FL,(-1L),0x13EDC32EL,(-1L)}},{{8L,0x13EDC32EL,0xD8E07C21L,1L,(-1L),1L,0xD8E07C21L},{(-1L),(-1L),(-1L),0x319FEF01L,1L,0x385C5DCDL,0x13EDC32EL},{1L,1L,0x35490DECL,2L,1L,(-2L),0x22E7C7CCL}},{{0x13EDC32EL,0x87C8608FL,0xA9E05B60L,(-4L),1L,(-9L),0x6D48F99CL},{(-1L),0L,1L,8L,(-1L),1L,0L},{0x22E7C7CCL,(-1L),0x4C534E02L,0x385C5DCDL,(-1L),0xBCA0A6BEL,0xC8CDDD8CL}},{{1L,0x87C8608FL,0L,(-9L),0L,0L,(-9L)},{(-7L),1L,(-7L),(-1L),0x7112B941L,0x8D64B5F3L,0L},{0x59E1138FL,1L,0x29AA79E0L,8L,0x319FEF01L,0x385C5DCDL,(-1L)}}};
    unsigned char l_338 = 8UL;
    const int l_339 = 0x96C24658L;
    int l_370 = 0x0128B7AFL;
    int i, j, k;
    g_212 = (safe_mul_func_int16_t_s_s((-8L), ((!g_10[4][6]) ^ (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x83781CDFL, (safe_rshift_func_int8_t_s_u(0x7AL, 0)))), (0x24L > g_10[6][2]))), ((safe_mod_func_int32_t_s_s((g_10[0][1] || func_66(func_72(((0x604CL ^ 9UL) && 0xB036L), p_49), g_107, g_107, l_175, l_175)), 0x722C89E7L)) ^ 3L))) & g_10[6][2]), l_175)), 0xB8E9L)))));
    if ((safe_unary_minus_func_int16_t_s(l_175)))
    {
        unsigned l_221 = 1UL;
        int l_341 = 0x27637BC2L;
        for (g_173 = 16; (g_173 < 16); g_173 = safe_add_func_int8_t_s_s(g_173, 9))
        {
            const unsigned l_216 = 0x4C0183FCL;
            char l_283 = 1L;
            const int l_312 = 0x1040B897L;
            int l_322 = 0xE282A758L;
            if (l_175)
                break;
            l_221 = func_66(l_175, (g_120[4] | p_49), l_216, l_216, (safe_sub_func_int8_t_s_s(func_66((safe_rshift_func_uint16_t_u_s(func_66(l_175, (((g_96 || l_175) <= g_89) < p_49), l_216, l_175, g_88), 2)), g_147[0][4][1], g_115, p_49, g_147[1][7][1]), g_147[0][4][1])));
            for (l_175 = 16; (l_175 != 59); l_175 = safe_add_func_uint8_t_u_u(l_175, 5))
            {
                unsigned char l_265 = 252UL;
                int l_307 = 0x481D2320L;
                short l_321 = 1L;
                if (l_221)
                    break;
                for (g_88 = 0; (g_88 == 4); g_88 = safe_add_func_int8_t_s_s(g_88, 1))
                {
                    unsigned char l_243 = 0x69L;
                    int l_244 = 0xB750C1D0L;
                    l_244 = ((safe_mod_func_uint16_t_u_u(l_221, (g_173 & 8L))) <= (safe_mul_func_int16_t_s_s((g_10[6][0] >= (safe_lshift_func_int8_t_s_u(g_129, ((g_120[9] > (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((((((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(func_66(func_66(((safe_mod_func_uint8_t_u_u(l_221, l_175)) < (~((l_216 || 0x4480L) == 0x7C014DE8L))), g_120[9], g_89, l_221, g_114), p_49, g_147[0][4][1], l_243, l_243), p_49)) == p_49), 0)))) <= 0x3B8B36CBL) | g_173) | g_129) <= 8UL) != 247UL) && l_216) <= 9UL), 10)), 1))) >= l_221)))), p_49)));
                    for (g_89 = 21; (g_89 == (-2)); g_89 = safe_sub_func_int16_t_s_s(g_89, 3))
                    {
                        char l_247 = 0x23L;
                        g_248 = l_247;
                        l_244 = p_49;
                        if (p_49)
                            continue;
                    }
                }
                for (g_88 = 0; (g_88 <= 9); g_88 += 1)
                {
                    int l_275 = (-1L);
                    for (l_221 = 0; (l_221 <= 9); l_221 += 1)
                    {
                        int i;
                        g_266 = (0xE5E6B278L | (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_120[g_88] || 255UL), 5)), (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_49, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(0x19L, (g_120[g_88] && func_66(g_88, p_49, (safe_mul_func_uint8_t_u_u(func_66(p_49, g_120[9], p_49, g_152, g_120[7]), l_265)), p_49, p_49)))), 3)), l_265)))) > 0x39L), 4)))));
                        if (p_49)
                            continue;
                        if (g_120[9])
                            break;
                    }
                    l_276[4][0][1] = (safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(func_66(g_129, l_175, p_49, l_216, g_89), l_175)), (g_88 || ((safe_mod_func_uint32_t_u_u((g_10[2][6] == l_275), p_49)) == 0x8477L)))) > g_147[0][0][1]) != l_216), g_10[5][3]));
                    if ((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(p_49, p_49)) ^ (g_129 >= (p_49 > l_283))) < (safe_mul_func_uint8_t_u_u((func_66(p_49, (l_221 > (func_66(g_248, l_175, l_276[4][0][6], p_49, g_173) & 0UL)), l_265, g_248, l_221) < l_275), g_147[0][4][1]))) <= g_115), g_129)))
                    {
                        return p_49;
                    }
                    else
                    {
                        short l_298 = 1L;
                        l_307 = (safe_mul_func_int8_t_s_s((g_147[0][4][0] || ((l_276[2][2][4] & (func_66(p_49, p_49, ((((safe_lshift_func_uint16_t_u_u(g_115, 9)) == func_66(((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_49, l_298)), (safe_add_func_int8_t_s_s(g_212, ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(1UL, 15)), 7)) != 0xF1C6E7CBL), g_89)) < l_283))))), p_49)) != 0x3C9AB741L), 0xBEL)) != 0x81L), p_49, l_283, p_49, g_88)) < g_120[9]) ^ l_265), p_49, p_49) || g_88)) || 0L)), 0xA4L));
                    }
                }
                l_322 = (safe_mul_func_uint8_t_u_u((func_66((safe_add_func_uint16_t_u_u(func_66(p_49, p_49, l_312, g_147[0][1][0], (l_265 < (safe_lshift_func_uint8_t_u_s((((~(~((-7L) != p_49))) == 0x4DL) || (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((p_49 == l_276[4][0][1]) < 0x68L), l_307)), g_147[0][4][1])) && g_152), g_120[4]))), 1)))), g_266)), p_49, l_221, l_283, g_88) | l_321), 0x5DL));
            }
        }
        for (p_49 = 2; (p_49 <= 7); p_49++)
        {
            int l_329[3];
            int i;
            for (i = 0; i < 3; i++)
                l_329[i] = (-9L);
            l_341 = ((l_221 > ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_329[1], ((safe_rshift_func_int8_t_s_s(l_329[1], 0)) < g_147[1][2][0]))), g_88)) || (safe_lshift_func_int8_t_s_u(g_129, (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((0xEBL | 0L) != func_66(g_107, l_338, l_339, g_340, l_329[1])), p_49)), l_329[1])))))) | l_338);
            for (g_115 = 2; (g_115 <= 4); g_115++)
            {
                char l_354[10] = {0x16L,1L,1L,0x16L,1L,1L,0x16L,1L,1L,0x16L};
                char l_355 = (-4L);
                int i;
                for (l_341 = 25; (l_341 > 17); l_341 = safe_sub_func_int16_t_s_s(l_341, 1))
                {
                    l_355 = (safe_mul_func_int8_t_s_s(g_89, ((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((~p_49), 8UL)) || l_338), 10)) || (((safe_add_func_uint16_t_u_u(0x024FL, l_354[1])) == p_49) & l_329[0]))));
                    if (g_96)
                        continue;
                }
                l_276[3][2][0] = g_107;
                g_89 = (-1L);
                g_89 = ((p_49 == (safe_add_func_uint16_t_u_u(g_96, 3UL))) <= (safe_rshift_func_int16_t_s_s(l_175, p_49)));
            }
            l_341 = 0x3B8C2FFFL;
        }
        for (l_175 = 0; (l_175 >= 46); ++l_175)
        {
            l_276[4][0][1] = p_49;
            l_341 = (safe_mul_func_uint16_t_u_u(0x64BEL, p_49));
        }
        g_89 = (safe_lshift_func_int8_t_s_s(0xC7L, 0));
    }
    else
    {
        unsigned l_375 = 4UL;
        int l_380[1];
        int i;
        for (i = 0; i < 1; i++)
            l_380[i] = (-1L);
        l_380[0] = (((safe_add_func_int32_t_s_s(0x94154AC2L, ((((safe_mul_func_int16_t_s_s(func_66(g_89, l_370, ((safe_rshift_func_int16_t_s_u(p_49, ((safe_lshift_func_uint8_t_u_u(g_212, l_375)) < ((l_276[2][0][5] >= (p_49 >= (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(g_88, g_212)) | 65533UL), l_375)))) | g_10[0][1])))) >= 0x13E63DB5L), p_49, p_49), p_49)) || g_173) ^ 4294967295UL) == p_49))) || l_338) == l_380[0]);
    }
    return l_276[4][2][0];
}







static short func_66(int p_67, int p_68, const char p_69, char p_70, const int p_71)
{
    int l_180 = 0xC425155AL;
    unsigned char l_193[3];
    short l_211[10] = {0x3C7DL,0x24A2L,0x3C7DL,0x3C7DL,0x24A2L,0x3C7DL,0x3C7DL,0x24A2L,0x3C7DL,0x3C7DL};
    int i;
    for (i = 0; i < 3; i++)
        l_193[i] = 0UL;
    for (g_96 = (-22); (g_96 < 19); g_96 = safe_add_func_int8_t_s_s(g_96, 2))
    {
        unsigned l_181 = 0x11DC8AE0L;
        int l_185 = (-8L);
        int l_198 = 1L;
        g_89 = ((safe_lshift_func_int8_t_s_u((l_180 == p_67), (l_181 ^ g_147[1][1][0]))) != g_129);
        if (g_120[7])
        {
            const int l_184[1][4] = {{(-6L),(-6L),(-6L),(-6L)}};
            int i, j;
            l_185 = (safe_add_func_uint16_t_u_u(l_184[0][3], g_147[1][7][1]));
        }
        else
        {
            for (g_152 = 0; (g_152 >= (-14)); g_152 = safe_sub_func_uint8_t_u_u(g_152, 1))
            {
                short l_203[4] = {1L,1L,1L,1L};
                int l_206[6] = {0x4371E877L,0x4371E877L,0x4371E877L,0x4371E877L,0x4371E877L,0x4371E877L};
                int i;
                if (l_180)
                    break;
                if ((g_89 == p_71))
                {
                    int l_188 = 0x38B24C03L;
                    l_198 = (((l_188 <= 0L) || (safe_sub_func_int8_t_s_s(g_173, ((safe_mod_func_uint16_t_u_u((l_193[1] == (l_181 == (g_96 <= l_181))), l_193[1])) && (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0x2B0CL, l_198)), p_70)) && p_67) > p_70))))) >= 0xE24FL);
                    for (g_114 = 0; (g_114 <= 1); g_114 += 1)
                    {
                        int i, j, k;
                        return g_147[g_114][(g_114 + 5)][g_114];
                    }
                    for (l_180 = 0; (l_180 != 12); l_180++)
                    {
                        l_203[3] = ((safe_rshift_func_uint16_t_u_u((p_68 && p_67), 15)) > g_152);
                    }
                    l_206[2] = ((g_107 ^ 6L) > (safe_add_func_uint8_t_u_u(l_203[3], p_67)));
                }
                else
                {
                    g_89 = (!(safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((-7L), (65528UL ^ l_206[2]))), 1)));
                    p_68 = 0xA62810AEL;
                }
                l_198 = g_114;
            }
        }
    }
    g_89 = ((!p_70) <= 0x53AEL);
    l_180 = 1L;
    return l_211[6];
}







static int func_72(char p_73, short p_74)
{
    int l_75[3][1];
    unsigned l_164 = 2UL;
    int l_168 = (-5L);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_75[i][j] = (-1L);
    }
    l_75[2][0] = g_10[5][5];
    g_88 = (safe_mul_func_int8_t_s_s((g_10[4][6] > ((safe_lshift_func_int16_t_s_u(l_75[0][0], 14)) > ((safe_mul_func_uint16_t_u_u(p_73, (safe_add_func_uint16_t_u_u(((p_73 != l_75[1][0]) != ((safe_add_func_uint32_t_u_u(p_74, l_75[0][0])) < (safe_sub_func_int32_t_s_s(g_10[7][4], 0x879C9350L)))), l_75[1][0])))) ^ l_75[2][0]))), 1UL));
    for (p_73 = 0; (p_73 >= 0); p_73 -= 1)
    {
        unsigned short l_92 = 0UL;
        int l_108[2];
        int i;
        for (i = 0; i < 2; i++)
            l_108[i] = 0xC8FA0D63L;
        for (p_74 = 0; (p_74 >= 0); p_74 -= 1)
        {
            unsigned char l_93[4];
            int i;
            for (i = 0; i < 4; i++)
                l_93[i] = 9UL;
            g_89 = g_10[6][3];
            if (g_88)
                break;
            l_93[3] = (safe_mul_func_uint8_t_u_u(l_75[2][0], l_92));
        }
        for (g_88 = 0; (g_88 <= 0); g_88 += 1)
        {
            unsigned l_95 = 8UL;
            int l_109 = 0xD19747A0L;
            for (g_89 = 0; (g_89 <= 0); g_89 += 1)
            {
                int l_113[10][6] = {{1L,0x90943893L,0L,0xFB991B7FL,2L,(-1L)},{0x1DA9CEE8L,0xE50A8E06L,0xD1E93126L,2L,0xD1E93126L,0xE50A8E06L},{0x1DA9CEE8L,(-1L),2L,0xFB991B7FL,0L,0x90943893L},{1L,2L,0x1DA9CEE8L,(-1L),(-1L),0x1DA9CEE8L},{2L,2L,0xABE16947L,1L,0L,(-1L)},{0xE50A8E06L,(-1L),0xFB991B7FL,0xABE16947L,0xD1E93126L,(-10L)},{1L,0xFB991B7FL,1L,0x1DA9CEE8L,0xD1E93126L,0x90943893L},{0xE50A8E06L,0x1DA9CEE8L,(-10L),0L,(-1L),(-1L)},{0L,(-1L),(-1L),0L,(-10L),0x1DA9CEE8L},{0xE50A8E06L,0x90943893L,0xD1E93126L,0x1DA9CEE8L,1L,0xFB991B7FL}};
                int l_165 = 1L;
                int i, j;
                for (p_74 = 0; (p_74 <= 0); p_74 += 1)
                {
                    short l_94 = 0L;
                    l_95 = l_94;
                    for (l_95 = 0; (l_95 <= 0); l_95 += 1)
                    {
                        g_96 = g_89;
                    }
                    l_108[1] = ((safe_rshift_func_uint8_t_u_u((p_73 > 0xFF5532CFL), 5)) > (((g_10[6][4] > (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(g_96, (((safe_rshift_func_uint8_t_u_s((((0xD4AD0BC0L | p_74) > (4294967295UL == ((l_75[1][0] || g_10[5][4]) < l_92))) <= g_107), 6)) || 1L) == 4294967295UL))), 0)), p_73)) || l_95) && l_95)) || 0x38C1L) | 0xB5L));
                }
                l_109 = p_73;
                if (g_107)
                {
                    int l_112[5] = {0xFE20FE05L,0xFE20FE05L,0xFE20FE05L,0xFE20FE05L,0xFE20FE05L};
                    int i;
                    if (g_107)
                    {
                        l_108[1] = (safe_mod_func_uint32_t_u_u((p_73 >= 65528UL), l_112[1]));
                        g_114 = (l_113[6][4] == l_112[1]);
                        g_115 = p_74;
                        g_120[9] = ((0x69F93285L < (g_114 ^ 0x24L)) || ((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_95, 0x8DL)) & p_73), (g_10[4][1] < 5L))) & (g_89 == 0x4C5B336EL)) != l_108[1]) && p_73));
                    }
                    else
                    {
                        return g_96;
                    }
                    g_129 = (safe_sub_func_uint32_t_u_u(p_74, (((safe_sub_func_uint32_t_u_u(g_88, ((g_115 && l_108[1]) < ((((safe_sub_func_uint8_t_u_u(p_74, (safe_mod_func_int16_t_s_s(p_73, l_75[2][0])))) <= (4L < g_96)) < 0xA6L) | (-5L))))) ^ p_74) < 0x9C8C9C88L)));
                }
                else
                {
                    const unsigned l_142 = 0UL;
                    int l_166 = 9L;
                    g_147[0][4][1] = ((safe_add_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(l_75[2][0], (p_73 <= (~l_113[0][4])))) ^ (0L & (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_73, 1)), 2)))) >= (safe_mod_func_uint8_t_u_u(l_142, (safe_lshift_func_uint16_t_u_s(g_129, 6))))), l_142)) | ((safe_add_func_uint32_t_u_u(4294967288UL, p_74)) && 1UL));
                    for (g_115 = 5; (g_115 >= 0); g_115 -= 1)
                    {
                        int l_153 = (-1L);
                        int i, j, k;
                        g_152 = (safe_add_func_uint16_t_u_u(((0xA6A5L <= (safe_add_func_uint16_t_u_u(l_113[(g_88 + 6)][(g_88 + 1)], g_147[g_89][(g_88 + 4)][g_88]))) > g_115), (-5L)));
                        l_153 = g_114;
                        l_108[1] = ((p_74 != ((safe_sub_func_uint16_t_u_u(p_73, (((safe_lshift_func_int8_t_s_u(p_74, 3)) ^ (1L < 65535UL)) > ((+l_75[2][0]) != p_73)))) == (p_73 > (((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(g_96, (-4L))), l_95)) | l_113[6][2]), (-9L))) && p_73) < l_164)))) ^ g_89);
                        l_165 = p_73;
                    }
                    l_166 = (p_73 && l_142);
                }
                for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                {
                    unsigned short l_174 = 65528UL;
                    if ((safe_unary_minus_func_uint16_t_u((p_74 > g_107))))
                    {
                        l_108[1] = l_108[1];
                        if (l_108[0])
                            continue;
                    }
                    else
                    {
                        l_168 = g_114;
                        if (g_10[7][5])
                            break;
                        g_173 = (l_108[1] & (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(l_113[6][4], p_73)), 0)));
                        l_174 = p_73;
                    }
                }
            }
            l_108[0] = (g_152 != p_73);
        }
    }
    return l_168;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_147[i][j][k], "g_147[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_886[i][j][k], "g_886[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1070[i], "g_1070[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1112[i], "g_1112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1232, "g_1232", print_hash_value);
    transparent_crc(g_1238, "g_1238", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1300, "g_1300", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1639, "g_1639", print_hash_value);
    transparent_crc(g_1747, "g_1747", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
