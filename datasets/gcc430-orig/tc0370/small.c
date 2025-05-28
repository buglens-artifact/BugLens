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



static volatile unsigned g_16 = 0xB63E8E1BL;
static short g_20[6][4] = {{0xFCE2L,(-7L),0xFCE2L,6L},{(-10L),(-7L),2L,1L},{(-7L),(-1L),(-1L),(-7L)},{0xFCE2L,1L,(-1L),6L},{(-7L),(-10L),2L,(-10L)},{(-10L),(-1L),0xFCE2L,(-10L)}};
static int g_30 = 0xC2489102L;
static int g_32 = 0L;
static unsigned long long g_64 = 0xBDED69B12DB22C08LL;
static unsigned long long g_71 = 18446744073709551606UL;
static unsigned char g_74[2] = {255UL,255UL};
static unsigned g_77 = 4294967292UL;
static const int g_83[5][7][4] = {{{(-1L),(-2L),(-4L),1L},{0x54743E03L,1L,0x84E05906L,0xFD34EA09L},{0L,1L,0x464C6607L,0xD6BBB239L},{0x02B236EDL,0x78C4B1E4L,0x78C4B1E4L,0x02B236EDL},{(-1L),1L,0xC796D631L,(-8L)},{0xFD34EA09L,0x84E05906L,1L,0x54743E03L},{0xBE9C2C51L,0x24228194L,(-1L),0x54743E03L}},{{0x78C4B1E4L,0x84E05906L,0xC78C3D28L,0xB41E2253L},{(-6L),1L,1L,0xD2804091L},{1L,0x992CE4CAL,0xBE9C2C51L,1L},{0x02B236EDL,0xDD559FE4L,1L,0xE2BB11FEL},{0xC796D631L,0xA242739AL,0x24D3E44EL,0x7C51C8BDL},{0xB41E2253L,1L,0x80F86AEFL,0xD6BBB239L},{(-1L),0xD2804091L,0x84E05906L,1L}},{{0x464C6607L,(-2L),0x54743E03L,0x992CE4CAL},{0x992CE4CAL,(-1L),1L,0xA415DBE4L},{0x84E05906L,(-1L),0xA415DBE4L,(-1L)},{(-4L),(-6L),(-8L),0xDD559FE4L},{0L,(-4L),0x464C6607L,0xFD34EA09L},{0xEA4B5445L,0xE2BB11FEL,0x3D82F881L,(-2L)},{0xEA4B5445L,(-1L),0x464C6607L,0x37316A37L}},{{0L,(-2L),(-8L),0x3D82F881L},{(-4L),0L,0xA415DBE4L,1L},{0x84E05906L,0xBFFD659CL,1L,(-1L)},{0x992CE4CAL,0x022B26CBL,0x54743E03L,0x80F86AEFL},{0x464C6607L,0x54743E03L,0x84E05906L,0x137C5FD5L},{(-1L),0x24D3E44EL,0x80F86AEFL,0x78C4B1E4L},{0xB41E2253L,0xD3A0C94AL,0x24D3E44EL,(-1L)}},{{0xC796D631L,0L,1L,0x24228194L},{0L,1L,1L,1L},{0xA415DBE4L,0xA415DBE4L,0x80F86AEFL,0x37316A37L},{0xD2804091L,0x125B66FFL,(-1L),(-4L)},{0x7C51C8BDL,0x94902949L,0x992CE4CAL,(-1L)},{1L,0x94902949L,1L,(-4L)},{0x94902949L,0x125B66FFL,0xBE9C2C51L,0x37316A37L}}};
static const int g_85[3] = {(-8L),(-8L),(-8L)};
static const int *g_84 = &g_85[2];
static const int *g_86 = &g_30;
static char g_92 = 4L;
static unsigned g_154 = 9UL;
static unsigned char g_156 = 246UL;
static int *g_172[10][10][2] = {{{(void*)0,(void*)0},{&g_32,&g_32},{&g_30,(void*)0},{&g_32,&g_30},{&g_32,&g_30},{&g_30,&g_30},{&g_32,&g_32},{(void*)0,&g_30},{&g_32,(void*)0},{&g_32,&g_30}},{{(void*)0,&g_32},{(void*)0,(void*)0},{(void*)0,&g_32},{(void*)0,&g_30},{&g_32,(void*)0},{&g_32,&g_30},{(void*)0,&g_32},{&g_32,&g_30},{&g_30,&g_30},{&g_32,&g_30}},{{&g_32,(void*)0},{&g_30,&g_32},{&g_32,(void*)0},{(void*)0,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_32,&g_32},{&g_30,&g_32},{&g_30,&g_32},{&g_30,&g_32}},{{&g_32,&g_30},{&g_30,&g_30},{&g_30,&g_30},{(void*)0,(void*)0},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,(void*)0},{(void*)0,&g_32},{&g_32,&g_32},{&g_32,&g_32}},{{(void*)0,&g_32},{(void*)0,&g_32},{&g_30,&g_32},{&g_30,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{&g_30,&g_32},{&g_30,&g_32},{(void*)0,&g_32},{(void*)0,&g_32}},{{&g_32,&g_32},{&g_32,&g_32},{(void*)0,(void*)0},{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_32},{(void*)0,&g_32},{&g_30,&g_32},{&g_32,(void*)0},{(void*)0,&g_32}},{{&g_32,&g_32},{&g_32,&g_32},{&g_32,&g_32},{(void*)0,(void*)0},{&g_32,&g_32},{&g_30,&g_32},{(void*)0,&g_32},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,(void*)0}},{{(void*)0,&g_32},{&g_32,&g_32},{&g_32,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{&g_30,&g_32},{&g_30,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{&g_30,&g_32}},{{&g_30,&g_32},{(void*)0,(void*)0},{&g_32,&g_32},{&g_32,(void*)0},{&g_30,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_32},{&g_32,(void*)0},{&g_32,&g_30},{&g_32,&g_32}},{{&g_32,&g_30},{&g_32,(void*)0},{&g_32,(void*)0},{&g_30,&g_32},{(void*)0,&g_32},{&g_30,(void*)0},{&g_32,(void*)0},{&g_32,&g_30},{&g_32,&g_32},{&g_32,&g_30}}};
static short g_182 = 0xA32CL;
static int *g_185 = &g_30;
static const unsigned long long *g_216[10][1][7] = {{{&g_71,(void*)0,&g_71,&g_71,(void*)0,&g_64,&g_64}},{{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,(void*)0}},{{&g_64,&g_64,&g_71,&g_64,&g_71,&g_64,&g_64}},{{&g_71,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_64,&g_64,&g_64,(void*)0,&g_71,&g_64,&g_71}},{{&g_71,(void*)0,(void*)0,&g_71,(void*)0,&g_71,&g_71}},{{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_64}},{{&g_71,&g_71,&g_71,(void*)0,(void*)0,&g_71,&g_71}},{{&g_71,&g_64,&g_64,&g_71,&g_71,&g_71,&g_71}},{{&g_71,(void*)0,&g_71,&g_64,(void*)0,&g_71,&g_71}}};
static const unsigned long long **g_215 = &g_216[5][0][0];
static volatile unsigned long long **g_217 = (void*)0;
static unsigned g_241 = 0x20BBD9F0L;
static unsigned g_244 = 18446744073709551615UL;
static unsigned short g_245 = 0xDF4BL;
static unsigned *g_247 = &g_154;
static unsigned **g_246 = &g_247;
static unsigned long long *g_280 = &g_64;
static unsigned long long **g_279 = &g_280;
static unsigned char g_327[7][8][4] = {{{251UL,255UL,0x7BL,0x30L},{0x9AL,2UL,1UL,8UL},{0x72L,0x5FL,250UL,0x9AL},{8UL,1UL,0x9AL,1UL},{2UL,0x98L,0x82L,0x4BL},{0x5FL,0x51L,2UL,0x9EL},{253UL,251UL,251UL,253UL},{1UL,250UL,0x9EL,0x51L}},{{0x89L,1UL,255UL,0x24L},{0xC5L,0x30L,0x36L,0x24L},{0x54L,1UL,0x69L,0x51L},{0x4BL,250UL,0UL,253UL},{1UL,251UL,0xD3L,0x9EL},{255UL,0x51L,250UL,0x4BL},{0xAAL,0x98L,0x95L,1UL},{2UL,1UL,0x72L,0x9AL}},{{0xD3L,0x5FL,0x89L,8UL},{255UL,2UL,255UL,0x30L},{0x30L,255UL,1UL,0x37L},{1UL,0x24L,255UL,255UL},{255UL,0x7BL,255UL,1UL},{0x54L,0UL,0x24L,0x89L},{0x9AL,0x54L,0x37L,2UL},{0x37L,2UL,0x82L,0xECL}},{{0x98L,0x36L,0xAAL,251UL},{0x4BL,0x89L,255UL,250UL},{255UL,1UL,0x89L,0xAAL},{0xFAL,1UL,0x98L,0x98L},{6UL,6UL,250UL,253UL},{250UL,0x9EL,0x51L,1UL},{0x36L,0x82L,1UL,0x51L},{1UL,0x82L,0xFAL,1UL}},{{0x82L,0x9EL,255UL,253UL},{0x5FL,6UL,0xECL,0x98L},{0x58L,1UL,0xDBL,0xAAL},{0x72L,1UL,2UL,250UL},{0xDBL,0x89L,0x9EL,251UL},{1UL,0x36L,1UL,0xECL},{0xAAL,2UL,0x54L,2UL},{0x9EL,0x54L,255UL,0x89L}},{{0xECL,0UL,255UL,6UL},{253UL,255UL,1UL,0xE4L},{253UL,8UL,255UL,0xC5L},{0xECL,0xE4L,255UL,0x9AL},{0x9EL,0x4BL,0x54L,0x9EL},{0x37L,255UL,0x69L,0xD3L},{0x9EL,0x7BL,0xD3L,0x30L},{1UL,0x82L,0x36L,0x58L}},{{255UL,0xFAL,1UL,0x98L},{0x72L,0xE4L,0xE4L,0x72L},{0x7BL,0x69L,0x98L,0xFAL},{0x54L,0x30L,1UL,0x9AL},{6UL,255UL,0xECL,0x9AL},{251UL,0x30L,255UL,0xFAL},{0x58L,0x69L,8UL,0x72L},{0x51L,0xE4L,0x89L,0x98L}}};
static volatile char *g_367 = (void*)0;
static volatile char ** const g_366 = &g_367;
static const long long **g_395 = (void*)0;
static long long g_411 = (-1L);
static const unsigned g_508 = 6UL;
static volatile short g_521[10][5][5] = {{{(-1L),(-10L),0L,0xBAB9L,0xA9FAL},{0L,1L,(-10L),1L,0L},{0xE41BL,0L,0xA796L,3L,(-10L)},{0L,0xBAB9L,0L,0x2BE4L,0x341FL},{0L,0x2976L,0x7058L,0x211EL,(-1L)}},{{0L,0x68CFL,0xA855L,(-4L),0xE41BL},{(-4L),(-7L),0xA855L,(-2L),0xC88DL},{3L,0L,0x7058L,0x4305L,0xA9A8L},{(-1L),9L,0L,0L,0x2976L},{0L,1L,0xA796L,0x6019L,0xA855L}},{{0x6F3EL,(-1L),5L,5L,(-1L)},{1L,9L,0xAB55L,0L,(-10L)},{1L,0xAB55L,0x68CFL,(-10L),0xD36FL},{5L,0L,0x158EL,0L,0x6BAAL},{1L,0xD701L,0L,9L,0xC436L}},{{1L,5L,1L,1L,0x2BE4L},{0L,0xA9A8L,0x7058L,(-1L),9L},{0xE41BL,0x99ACL,9L,(-2L),0x0FFCL},{0xD701L,0L,(-6L),(-10L),0x6F3EL},{0x158EL,(-1L),8L,0L,0xE41BL}},{{0x5D0DL,0L,0xA9A8L,0L,1L},{(-1L),0xE1EBL,0x0FFCL,(-10L),0x5750L},{0xAB55L,0L,0L,(-2L),0L},{0xA796L,(-1L),3L,(-1L),(-2L)},{(-7L),0x0FFCL,0x7892L,1L,0x7892L}},{{3L,3L,1L,9L,8L},{0x99ACL,1L,0x211EL,0L,1L},{(-10L),0x0AE5L,0xE41BL,(-10L),0x5037L},{1L,1L,0x3DBCL,0L,0x5D0DL},{0xBAB9L,(-7L),1L,0xA9A8L,0xE41BL}},{{0L,0xD36FL,0x3DBCL,0x8501L,0L},{0xA855L,(-1L),0L,0x7058L,3L},{(-10L),5L,8L,0xBAB9L,0x0AE5L},{0x68CFL,9L,(-1L),0x0AE5L,0x2976L},{0x341FL,(-9L),1L,1L,0x2976L}},{{9L,0L,0x6F3EL,1L,0x0AE5L},{0L,1L,9L,0xA855L,3L},{1L,1L,1L,0x0967L,0L},{0xE1EBL,0xD701L,0x7058L,0xE41BL,0xE41BL},{(-1L),0xA9A8L,(-1L),(-10L),1L}},{{0x2976L,3L,9L,0L,0x7892L},{0x0967L,0xA796L,0xAB55L,(-6L),0L},{(-10L),(-2L),9L,0x7892L,0x8501L},{0xD701L,(-6L),(-1L),0x6BAAL,(-4L)},{(-4L),0x0967L,0x7058L,0x5037L,9L}},{{0x0FFCL,(-4L),1L,3L,0x6019L},{1L,0L,9L,0L,0xAB55L},{0x8501L,8L,0x6F3EL,1L,0x158EL},{0L,(-9L),0x68CFL,0L,0x99ACL},{0xA796L,0x2976L,(-10L),0xAB55L,0x6019L}}};
static volatile short *g_520 = &g_521[5][4][4];
static volatile short **g_519 = &g_520;
static unsigned char *g_554[6] = {&g_74[0],&g_74[0],&g_74[0],&g_74[0],&g_74[0],&g_74[0]};
static unsigned char ** const g_553 = &g_554[5];
static unsigned long long g_589 = 7UL;
static const unsigned long long ***g_615 = &g_215;
static unsigned short g_619 = 2UL;
static unsigned ***g_753 = (void*)0;
static unsigned ****g_752[8][2][6] = {{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0}},{{&g_753,&g_753,(void*)0,&g_753,&g_753,(void*)0},{&g_753,&g_753,(void*)0,&g_753,&g_753,&g_753}},{{&g_753,&g_753,&g_753,&g_753,&g_753,&g_753},{&g_753,&g_753,&g_753,&g_753,&g_753,&g_753}}};
static unsigned short g_766 = 0x53F8L;
static unsigned short g_768 = 0xAADEL;
static unsigned long long *g_795 = &g_589;
static unsigned long long ** const g_794 = &g_795;
static unsigned long long ** const *g_793 = &g_794;
static long long *g_885 = (void*)0;
static long long **g_884 = &g_885;
static long long **g_888[10] = {&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885};
static int g_925 = 0L;
static long long g_936 = 0L;
static long long * const g_935 = &g_936;
static long long * const *g_934[2] = {&g_935,&g_935};
static volatile unsigned short **g_982 = (void*)0;
static volatile unsigned short g_986 = 9UL;
static short g_1075[1] = {1L};
static unsigned char g_1076[6][2] = {{0x00L,0x00L},{0x00L,0x00L},{0x00L,0x00L},{0x00L,0x00L},{0x00L,0x00L},{0x00L,0x00L}};
static int g_1097 = 6L;
static unsigned g_1098 = 0xC62EBC48L;
static unsigned g_1105 = 0x0182D197L;
static long long g_1127 = 0xDE428833F1BB5D15LL;
static unsigned short g_1132 = 0xB9AFL;
static unsigned char **g_1155[4][6] = {{&g_554[3],&g_554[5],&g_554[1],&g_554[5],&g_554[5],(void*)0},{(void*)0,&g_554[5],&g_554[5],&g_554[5],&g_554[5],(void*)0},{&g_554[5],&g_554[5],(void*)0,&g_554[5],&g_554[5],&g_554[1]},{&g_554[1],&g_554[5],&g_554[3],&g_554[5],&g_554[1],&g_554[5]}};
static unsigned char ***g_1154[3] = {&g_1155[1][4],&g_1155[1][4],&g_1155[1][4]};
static unsigned short g_1205 = 65534UL;
static const unsigned long long g_1235[7] = {0xB99979C4F403B6B9LL,0x01D4AF05E10AC6BCLL,0x01D4AF05E10AC6BCLL,0xB99979C4F403B6B9LL,0x01D4AF05E10AC6BCLL,0x01D4AF05E10AC6BCLL,0xB99979C4F403B6B9LL};
static int ***g_1266[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static char g_1306 = (-10L);
static unsigned short g_1307 = 0x254BL;
static char g_1310 = 1L;
static const char g_1334 = (-2L);
static unsigned *g_1338 = (void*)0;
static unsigned **g_1337 = &g_1338;
static const short *g_1343 = &g_1075[0];
static const short **g_1342[8] = {&g_1343,&g_1343,&g_1343,&g_1343,&g_1343,&g_1343,&g_1343,&g_1343};
static char g_1353 = 0x41L;
static int g_1355 = 5L;
static int *g_1397 = &g_30;
static short **g_1414 = (void*)0;
static short **g_1415 = (void*)0;
static int *g_1485 = &g_30;
static int g_1487 = 1L;
static int *g_1492[7] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
static unsigned long long g_1506 = 0x0145373AB34115CCLL;
static long long * const **g_1512 = &g_934[0];
static const unsigned *g_1654 = (void*)0;
static const unsigned **g_1653 = &g_1654;
static int g_1726[1] = {(-6L)};
static int *g_1956[6][4] = {{&g_1097,&g_1097,&g_1097,(void*)0},{&g_1097,&g_1097,(void*)0,&g_1097},{&g_1097,(void*)0,&g_1097,&g_1097},{&g_1097,&g_1097,&g_1097,(void*)0},{&g_1097,&g_1097,(void*)0,&g_1097},{&g_1097,(void*)0,&g_1097,&g_1097}};
static char g_2054 = 0x57L;
static int *g_2153[6] = {(void*)0,&g_1726[0],(void*)0,(void*)0,&g_1726[0],(void*)0};
static unsigned char ****g_2187 = &g_1154[0];
static int **g_2241 = &g_185;
static int ***g_2240 = &g_2241;
static unsigned short *g_2305 = &g_1205;
static unsigned short **g_2304 = &g_2305;
static long long ***g_2377 = (void*)0;
static long long ****g_2376[10] = {&g_2377,&g_2377,&g_2377,&g_2377,&g_2377,&g_2377,&g_2377,&g_2377,&g_2377,&g_2377};
static int * const *g_2478[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int * const **g_2477 = &g_2478[7];
static unsigned ***g_2506 = (void*)0;
static unsigned ****g_2505[3] = {&g_2506,&g_2506,&g_2506};
static unsigned long long **g_2526[3][5] = {{&g_795,&g_280,&g_795,&g_795,&g_280},{(void*)0,&g_795,&g_795,(void*)0,&g_795},{&g_280,&g_280,(void*)0,&g_280,&g_280}};
static int *g_2582 = &g_1097;



static int func_1(void);
static int * func_2(int * p_3);
static int * func_4(int * p_5, unsigned short p_6, unsigned p_7, int * p_8, int p_9);
static int * func_10(unsigned short p_11, unsigned p_12, int * p_13, int p_14, long long p_15);
static unsigned long long func_17(int p_18, int * p_19);
static int * func_21(int * p_22, unsigned char p_23, unsigned char p_24);
static int * func_25(long long p_26);
static short func_41(int * p_42);
static int func_43(unsigned p_44, int * p_45, int * p_46);
static int * func_48(unsigned p_49, unsigned char p_50, int * p_51, const unsigned short p_52);
static int func_1(void)
{
    int l_27[1][7] = {{0x307A329EL,0L,0x307A329EL,0x307A329EL,0L,0x307A329EL,0x307A329EL}};
    char *l_829 = (void*)0;
    char **l_828[1];
    unsigned short *l_1824 = (void*)0;
    unsigned short *l_1825 = &g_1205;
    int *l_1857 = &l_27[0][2];
    unsigned l_2594 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_828[i] = &l_829;
    (*g_2241) = func_2(func_4(func_10(((*l_1825) = (g_16 == ((**g_794) = func_17(g_20[1][0], func_21(func_25((0x15256EE9L && l_27[0][0])), (l_828[0] != &l_829), l_27[0][2]))))), l_27[0][0], &l_27[0][0], l_27[0][0], l_27[0][0]), l_27[0][0], l_27[0][0], l_1857, g_83[2][6][0]));


    ;

    ;

    ;



    ;

    ;



    ;

    return l_2594;



}







static int * func_2(int * p_3)
{
    int *l_2033 = &g_32;
    unsigned short *l_2034 = &g_766;
    int l_2061 = 1L;
    long long l_2088 = 0xBA2F20D432AC0F9FLL;
    unsigned l_2129 = 0UL;
    unsigned **l_2133[8][2][8] = {{{(void*)0,&g_1338,(void*)0,&g_1338,&g_1338,(void*)0,&g_1338,(void*)0},{&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338,(void*)0}},{{&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338},{&g_1338,&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338}},{{&g_1338,(void*)0,(void*)0,(void*)0,(void*)0,&g_1338,(void*)0,(void*)0},{&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338,(void*)0,&g_1338}},{{&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338,(void*)0},{&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338}},{{&g_1338,&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338},{&g_1338,(void*)0,(void*)0,(void*)0,(void*)0,&g_1338,(void*)0,(void*)0}},{{&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338,(void*)0,&g_1338},{&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338,(void*)0}},{{&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338,&g_1338},{&g_1338,&g_1338,&g_1338,&g_1338,(void*)0,&g_1338,&g_1338,&g_1338}},{{&g_1338,(void*)0,(void*)0,(void*)0,(void*)0,&g_1338,&g_1338,&g_1338},{(void*)0,&g_1338,(void*)0,(void*)0,(void*)0,(void*)0,&g_1338,(void*)0}}};
    long long * const * const *l_2182 = &g_934[0];
    const unsigned **l_2267 = &g_1654;
    short *l_2292[5] = {&g_1075[0],&g_1075[0],&g_1075[0],&g_1075[0],&g_1075[0]};
    short **l_2291 = &l_2292[0];
    int *l_2354 = &g_1726[0];
    char l_2371 = (-10L);
    int l_2373[4] = {0L,0L,0L,0L};
    int l_2386 = 0L;
    unsigned *** const *l_2387 = &g_753;
    const int l_2415[1][10][4] = {{{0xF0F8E61DL,(-1L),0xF0F8E61DL,1L},{(-3L),(-1L),(-1L),(-1L)},{(-3L),1L,0xF0F8E61DL,(-1L)},{0xF0F8E61DL,(-1L),0xF0F8E61DL,1L},{(-3L),(-1L),(-1L),(-1L)},{(-3L),1L,0xF0F8E61DL,(-1L)},{0xF0F8E61DL,(-1L),0xF0F8E61DL,1L},{(-3L),(-1L),(-1L),(-1L)},{(-3L),1L,0xF0F8E61DL,(-1L)},{0xF0F8E61DL,(-1L),0xF0F8E61DL,1L}}};
    unsigned long long l_2421 = 0UL;
    char **l_2493 = (void*)0;
    char ***l_2492 = &l_2493;
    unsigned long long **l_2516 = (void*)0;
    int i, j, k;
    if (((*l_2033) != (0x38C0L > ((*l_2034) = 0UL))))
    {
        int **l_2035 = &g_1956[1][1];
        unsigned long long *l_2036 = &g_64;
        unsigned short * const l_2053 = &g_245;
        int l_2087 = (-6L);
        unsigned long long l_2090 = 0UL;
        int *l_2154 = &g_30;
        unsigned ***l_2177 = &g_246;
        int *l_2188 = &g_32;
        int *l_2227 = &g_30;
        long long l_2229 = 0x35A863490CC5EBB2LL;
        unsigned long long ***l_2236[6][10][4] = {{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,&g_279}}};
        char **l_2248 = (void*)0;
        char ***l_2247 = &l_2248;
        unsigned l_2249 = 0x23920E6FL;
        unsigned **l_2260[9] = {&g_1338,&g_1338,&g_1338,&g_1338,&g_1338,&g_1338,&g_1338,&g_1338,&g_1338};
        int i, j, k;
        (*l_2035) = p_3;


        if ((l_2036 != l_2036))
        {
            char l_2039 = 1L;
            char l_2051[2];
            int *l_2052 = &g_1097;
            unsigned long long *l_2064[7][2] = {{&g_1506,&g_1506},{&g_1506,&g_1506},{&g_1506,&g_1506},{&g_1506,&g_1506},{&g_1506,&g_1506},{&g_1506,&g_1506},{&g_1506,&g_1506}};
            int *l_2074 = &g_925;
            short *l_2089 = &g_182;
            char *l_2091[3][7][7] = {{{&g_1306,&l_2039,&g_1353,(void*)0,(void*)0,(void*)0,&g_1306},{&g_1306,(void*)0,&l_2051[0],&g_92,&g_2054,(void*)0,&l_2051[0]},{&g_92,&l_2051[0],&g_1353,&g_1306,&g_2054,&g_1353,&g_2054},{&l_2051[0],&g_1306,&l_2051[0],&g_92,&g_1353,&l_2051[1],&l_2051[1]},{&l_2039,&l_2051[1],&g_1353,&l_2051[1],&l_2039,(void*)0,&g_1306},{(void*)0,&l_2051[1],&g_2054,&g_1306,(void*)0,&l_2039,&l_2051[1]},{&g_1353,&g_1306,&l_2051[1],(void*)0,&g_1306,&g_92,&g_92}},{{(void*)0,&g_1306,&g_92,&g_2054,&g_92,&l_2051[0],&l_2051[1]},{&l_2039,&g_1306,&g_1310,&l_2051[0],&g_1353,&g_1353,&l_2051[1]},{&g_2054,(void*)0,&g_1306,(void*)0,(void*)0,&l_2051[0],&g_1353},{&g_92,&l_2039,(void*)0,&l_2051[0],&g_2054,&l_2051[0],&g_2054},{&g_2054,&l_2051[0],(void*)0,&g_2054,&g_1306,&g_1306,&g_2054},{&g_92,&l_2051[0],&g_1306,&g_1353,&g_2054,&g_1310,&g_2054},{&g_1310,(void*)0,&l_2051[0],&l_2039,(void*)0,&l_2039,&l_2051[0]}},{{&l_2051[1],&l_2051[1],&l_2039,&g_2054,&g_92,&g_2054,&g_92},{&g_2054,(void*)0,&g_2054,&l_2051[0],&g_1310,&g_1353,&l_2039},{&g_1306,&g_1306,(void*)0,&l_2039,&g_92,&g_1306,(void*)0},{&g_2054,&l_2051[0],&l_2051[1],&g_1306,(void*)0,&g_1353,&l_2051[1]},{&l_2051[1],&l_2051[1],&l_2051[0],&g_1353,&g_2054,(void*)0,&g_1353},{&g_1306,&g_1353,&g_1306,&l_2051[0],&g_1306,&g_2054,(void*)0},{&l_2051[0],&g_1306,&l_2051[0],&g_2054,&g_2054,&g_1353,(void*)0}}};
            short ***l_2150 = &g_1414;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2051[i] = 0x8FL;
            for (g_1487 = (-2); (g_1487 != (-8)); g_1487 = safe_sub_func_uint8_t_u_u(g_1487, 6))
            {
                unsigned long long l_2044 = 0x1E13EB617E8C32D8LL;
                (*l_2035) = l_2052;
            }
            g_2054 = ((void*)0 == l_2053);
            for (g_241 = 17; (g_241 <= 46); g_241 = safe_add_func_uint32_t_u_u(g_241, 4))
            {
                int l_2068[5][6][8] = {{{0xC6E78A99L,0xF6B840DBL,0x97907575L,9L,0L,1L,(-1L),0x7387C862L},{0xC6E78A99L,9L,(-5L),0x109BC59DL,0xB1C3E3E5L,(-9L),0xE8C08C31L,0x7955EBE2L},{0L,0x109BC59DL,0xD08DA151L,0xC27D9A3AL,0xD0B7C614L,0xD1BDEAE5L,0x82F4B536L,0x7B129827L},{0xD0B7C614L,0xD1BDEAE5L,0x82F4B536L,0x7B129827L,(-1L),1L,0xF6B840DBL,0x82F4B536L},{(-5L),0x2E279C7BL,0x109BC59DL,8L,6L,0L,0L,0xC27D9A3AL},{1L,0x96DE9DF2L,0x86A9DFC9L,0x7DC428EBL,1L,0x97C5ACADL,9L,0x644CAD18L}},{{0x4D80886DL,6L,0x7955EBE2L,0xB1C3E3E5L,0xB1C3E3E5L,0x7955EBE2L,6L,0x4D80886DL},{0xD1BDEAE5L,0x97C5ACADL,0x0F32F536L,0x2FC2602AL,0xE4FDCD62L,0xD0B7C614L,0x2E279C7BL,0x7B129827L},{0xE4DDDFC1L,(-1L),0xB1C3E3E5L,0x644CAD18L,0x2FC2602AL,0xD0B7C614L,0xD6583733L,0L},{0x7955EBE2L,0x97C5ACADL,0x109BC59DL,0xC6E78A99L,(-1L),0x7955EBE2L,0x2FC2602AL,0x2E279C7BL},{0L,6L,0x7DC428EBL,(-1L),4L,0x97C5ACADL,0x96DE9DF2L,0x3BFB9D23L},{8L,0x96DE9DF2L,1L,0x97C5ACADL,0x2E279C7BL,0L,0xE8C08C31L,(-5L)}},{{0xD1BDEAE5L,0x2E279C7BL,0x7387C862L,0x109BC59DL,0xE4DDDFC1L,1L,0xC27D9A3AL,0xD1BDEAE5L},{(-9L),0x4D80886DL,(-1L),0xF6B840DBL,(-1L),0x4D80886DL,(-9L),0x0F32F536L},{(-1L),0x7DC428EBL,0x3BFB9D23L,0L,0xB1C3E3E5L,0x97907575L,0x0F32F536L,0x3BFB9D23L},{1L,4L,0L,0xE4FDCD62L,0xB1C3E3E5L,0x7B129827L,0x109BC59DL,0xF6B840DBL},{(-1L),(-1L),9L,0x3BFB9D23L,(-1L),0xE8C08C31L,4L,4L},{(-9L),0x86A9DFC9L,0xD1BDEAE5L,0x7387C862L,(-5L),0xC6E78A99L,0x86A9DFC9L,1L}},{{0x4D80886DL,0L,(-8L),0xD6583733L,1L,0L,1L,0x0F32F536L},{9L,0xD08DA151L,0x7387C862L,4L,0L,(-1L),(-8L),(-8L)},{(-8L),0xC27D9A3AL,0L,0L,0xC27D9A3AL,(-8L),0L,(-1L)},{0x4C0A0335L,0xB1C3E3E5L,6L,0x644CAD18L,0x0F32F536L,0xE8C08C31L,(-1L),0x97907575L},{(-5L),0x3BFB9D23L,(-2L),0x644CAD18L,1L,0L,0x7B129827L,(-1L)},{0x4D80886DL,1L,1L,0L,0x7387C862L,8L,0L,(-8L)}},{{6L,0x7DC428EBL,(-1L),4L,0x97C5ACADL,0x96DE9DF2L,1L,(-9L)},{0x7955EBE2L,0xE4FDCD62L,0xA985B222L,6L,0xD0B7C614L,1L,1L,0xA985B222L},{0x644CAD18L,1L,0x7387C862L,0L,1L,0x7DC428EBL,0xE4DDDFC1L,0x7DC428EBL},{0L,1L,(-1L),1L,0L,0x109BC59DL,0L,0x96DE9DF2L},{4L,1L,8L,(-1L),0L,0xB1C3E3E5L,1L,1L},{0x7387C862L,0xC6E78A99L,8L,0x3BFB9D23L,1L,0x0F32F536L,0L,(-9L)}}};
                int i, j, k;
                for (g_1310 = 0; (g_1310 != (-19)); g_1310 = safe_sub_func_int8_t_s_s(g_1310, 2))
                {
                    unsigned char *l_2062 = &g_327[6][2][0];
                    int l_2063 = 1L;
                    if (((safe_rshift_func_int8_t_s_s(((~func_43((*l_2052), func_10(((l_2061 >= (l_2062 == (*g_553))) || (l_2063 >= ((*l_2034) = ((*l_2053) = l_2063)))), (*l_2033), p_3, ((*l_2052) == (*l_2052)), (*g_935)), l_2052)) || (*l_2052)), 2)) <= (-1L)))
                    {
                        (*l_2052) = (func_43(((*g_215) != l_2064[2][0]), p_3, &l_2063) & (*l_2033));
                    }
                    else
                    {
                        unsigned long long l_2067[4] = {0x834F90516C846680LL,0x834F90516C846680LL,0x834F90516C846680LL,0x834F90516C846680LL};
                        int i;
                        (*l_2035) = p_3;
                        (*l_2033) = ((safe_lshift_func_int8_t_s_s(0x08L, 4)) | (func_43(l_2068[2][4][3], func_10(l_2068[2][4][3], l_2067[2], &l_2061, (*p_3), l_2067[2]), &l_2061) || l_2067[3]));
                    }
                }
                for (g_1205 = (-18); (g_1205 > 23); g_1205 = safe_add_func_uint32_t_u_u(g_1205, 6))
                {
                    unsigned short * const *l_2072[7] = {&l_2034,&l_2034,(void*)0,&l_2034,&l_2034,(void*)0,&l_2034};
                    unsigned short * const **l_2071 = &l_2072[4];
                    int *l_2073 = &g_30;
                    int i;
                    (*l_2071) = &l_2053;
                    (*g_1485) = func_43((**g_246), l_2073, l_2074);
                }
                if (l_2068[2][4][3])
                {
                    for (g_2054 = 0; (g_2054 > (-24)); g_2054--)
                    {
                        (*l_2035) = p_3;
                        (*l_2052) = (*p_3);
                    }
                }
                else
                {
                    short l_2079 = 1L;
                    char *l_2080[7][6] = {{&g_2054,(void*)0,&l_2051[0],(void*)0,&g_2054,&g_2054},{&g_92,(void*)0,(void*)0,&g_92,&g_1353,&g_92},{&g_92,&g_1353,&g_92,(void*)0,(void*)0,&g_92},{&g_2054,&g_2054,(void*)0,&l_2051[0],(void*)0,&g_2054},{(void*)0,&g_1353,&l_2051[0],&l_2051[0],&g_1353,(void*)0},{&g_2054,(void*)0,&l_2051[0],(void*)0,&g_2054,&g_2054},{&g_92,(void*)0,(void*)0,&g_92,&g_1353,&g_92}};
                    int *l_2081 = (void*)0;
                    int **l_2084 = &g_172[2][4][1];
                    int i, j;
                    if (((*l_2074) = (safe_rshift_func_uint16_t_u_u(l_2079, ((g_1310 = (*l_2033)) ^ (((*g_935) = func_43(l_2079, ((*l_2035) = l_2081), &l_2068[4][2][2])) == (*l_2033)))))))
                    {
                        (*l_2052) = (+(*l_2074));
                    }
                    else
                    {
                        (*l_2074) = ((*g_1485) = (*l_2052));
                        return p_3;


                    }
                }
            }
            if ((safe_lshift_func_int16_t_s_s((((!l_2088) >= ((*l_2089) = ((void*)0 == &g_888[6]))) ^ (g_1310 = func_43((0x6F6FFBC799EB8210LL > l_2090), l_2074, p_3))), (*l_2052))))
            {
                int l_2092 = 0xE0683A7CL;
                (*l_2035) = l_2052;
                (*p_3) = (l_2092 ^ (-1L));
            }
            else
            {
                unsigned long long l_2104 = 0x4BBE106EBC6C7BBCLL;
                long long ****l_2107 = (void*)0;
                int *l_2141[10] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
                int i;
                for (l_2061 = 0; (l_2061 > (-26)); l_2061--)
                {
                    long long l_2103 = (-1L);
                    int *l_2105 = &g_925;
                    long long ***l_2112 = &g_884;
                }
                for (l_2088 = 0; (l_2088 != 9); l_2088 = safe_add_func_uint16_t_u_u(l_2088, 8))
                {
                    unsigned short l_2123 = 0UL;
                    unsigned char *l_2126 = &g_156;
                    unsigned **l_2132 = &g_1338;
                    int *l_2136[6] = {&g_1726[0],(void*)0,&g_1726[0],&g_1726[0],(void*)0,&g_1726[0]};
                    int i;
                    for (g_241 = 0; (g_241 <= 2); g_241 += 1)
                    {
                        long long **l_2121 = &g_885;
                        long long *l_2122 = &l_2088;
                        int l_2127 = 0x5D8816F9L;
                        unsigned *l_2128 = &g_77;
                        p_3 = func_10((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_2034) = 0xB0E0L), (safe_lshift_func_uint16_t_u_u((((*p_3) = l_2104) < ((*l_2128) = (((((*l_2121) = &l_2088) == l_2122) | l_2123) > (safe_add_func_int64_t_s_s(((0xB058C0D5740C4E83LL > (l_2091[2][4][1] != (l_2126 = l_2126))) || ((*l_2033) & l_2104)), l_2127))))), 6)))) == (*l_2033)), l_2129)), l_2127, (*l_2035), (*l_2033), (*l_2033));

                        ;
                        ;
                        (*p_3) = (l_2127 == (safe_mul_func_int8_t_s_s((&l_2123 == l_2053), (*l_2033))));
                        (*p_3) = (l_2132 != l_2133[6][0][2]);
                        if ((*p_3))
                            break;
                    }

                    ;
                    (*p_3) = (safe_add_func_uint16_t_u_u(l_2123, 6L));
                    return l_2136[1];



                }
                for (g_1205 = 21; (g_1205 >= 34); ++g_1205)
                {
                    long long l_2143 = 0x66D8371A7F228939LL;
                    for (g_1506 = (-14); (g_1506 < 51); g_1506++)
                    {
                        long long l_2142 = 0x3DDD5FCD7DF10BCDLL;
                        short ***l_2151[4] = {&g_1415,&g_1415,&g_1415,&g_1415};
                        int *l_2152 = &l_2061;
                        int i;
                        (*l_2035) = (*l_2035);
                        (*l_2052) = (l_2143 >= l_2143);
                        (*l_2035) = p_3;
                        l_2154 = g_2153[2];
                    }
                }

                ;
            }

            ;
        }
        else
        {
            const unsigned char l_2155 = 252UL;
            unsigned char ****l_2183 = &g_1154[2];
            unsigned char *****l_2184 = &l_2183;
            unsigned char ****l_2186 = (void*)0;
            unsigned char *****l_2185[4] = {&l_2186,&l_2186,&l_2186,&l_2186};
            int ***l_2238 = (void*)0;
            int i;
            for (g_1097 = 0; (g_1097 <= 1); g_1097 += 1)
            {
                unsigned char l_2158[6];
                int l_2161 = 1L;
                int i;
                for (i = 0; i < 6; i++)
                    l_2158[i] = 255UL;
                if (l_2155)
                    break;
                for (g_92 = 7; (g_92 >= 0); g_92 -= 1)
                {
                    int l_2157 = 2L;
                    int *l_2166 = &g_30;
                    int l_2179[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_2179[i] = 1L;
                    if (g_1076[(g_1097 + 1)][g_1097])
                    {
                        int *l_2156 = (void*)0;
                        long long ***l_2160 = &g_884;
                        long long ****l_2159[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2159[i] = &l_2160;
                        (*l_2033) = (*l_2154);
                        l_2157 = ((*l_2154) = ((*l_2033) = (*g_86)));
                        l_2161 = (l_2158[5] | (((l_2159[0] == (void*)0) < (l_2157 > l_2155)) < (*l_2033)));
                        (*g_1485) = 0xC8FFB2ADL;
                    }
                    else
                    {
                        int i;
                        g_1342[(g_1097 + 3)] = g_1342[(g_1097 + 2)];
                        return p_3;



                    }
                    (*p_3) = ((*l_2154) & (l_2158[5] == (-3L)));
                    for (g_156 = 0; (g_156 >= 9); ++g_156)
                    {
                        char l_2176 = 0L;
                        int *l_2178 = &g_1355;
                        l_2166 = p_3;
                        (*l_2035) = &l_2161;
                        (*l_2035) = (p_3 = p_3);
                        l_2179[0] = 6L;
                    }


                    if (l_2158[5])
                        break;
                }


            }


            if ((~((*l_2033) != (safe_sub_func_uint64_t_u_u(((void*)0 == l_2182), func_43(((g_2187 = ((*l_2184) = l_2183)) != &g_1154[2]), ((*l_2035) = l_2188), p_3))))))
            {
                long long l_2193 = 0L;
                int *l_2215 = &g_1726[0];
                (*l_2035) = p_3;
                for (g_32 = 0; (g_32 > 3); ++g_32)
                {
                    short l_2204 = (-3L);
                    int *l_2205[7][2] = {{&g_1726[0],&g_32},{&g_1726[0],&g_1726[0]},{&g_32,&g_1726[0]},{&g_1726[0],&g_32},{&g_1726[0],&g_1726[0]},{&g_32,&g_1726[0]},{&g_1726[0],&g_32}};
                    int **l_2206 = &g_172[7][1][0];
                    int **l_2207 = &g_2153[2];
                    short *l_2208 = (void*)0;
                    short *l_2209 = (void*)0;
                    short *l_2210 = (void*)0;
                    short *l_2211 = (void*)0;
                    short *l_2212 = &g_20[1][0];
                    int i, j;
                    (*g_1485) = (0x74L & (0xA46DL | ((safe_div_func_uint64_t_u_u((((2UL >= ((l_2193 != ((safe_rshift_func_uint16_t_u_u((*l_2188), 5)) <= ((*l_2212) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((**g_794) = (safe_mul_func_int8_t_s_s(l_2204, (((*l_2034) = (~l_2193)) ^ ((((*l_2207) = l_2205[2][0]) == (void*)0) < 0xDFL))))), 0xCEBB29BF55DF2CBDLL)), (*g_1343))), (*l_2033)))))) == 0x5EED2478L)) < l_2193) <= 8UL), 1UL)) & 4294967291UL)));
                }


                if (((*l_2154) && 9L))
                {
                    (*l_2035) = p_3;
                    for (g_1098 = 23; (g_1098 <= 32); g_1098 = safe_add_func_int64_t_s_s(g_1098, 3))
                    {
                        (*l_2035) = p_3;
                    }
                }
                else
                {
                    char *l_2218 = (void*)0;
                    char *l_2219 = &g_1310;
                    int l_2228 = 2L;
                    (*l_2035) = (void*)0;
                    (*l_2035) = p_3;
                    (*l_2033) = ((*l_2227) = ((*l_2033) <= ((*l_2033) > l_2228)));
                }
            }
            else
            {
                unsigned l_2242 = 4294967295UL;
                for (g_154 = 0; (g_154 < 13); g_154 = safe_add_func_uint32_t_u_u(g_154, 8))
                {
                    unsigned long long ****l_2237 = &l_2236[3][3][0];
                    int ****l_2239[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2239[i] = &l_2238;
                    p_3 = func_10((safe_add_func_int64_t_s_s(((l_2155 | ((safe_sub_func_uint64_t_u_u(((*l_2036) = l_2155), (((*l_2237) = l_2236[3][3][0]) == (void*)0))) ^ 0x04L)) ^ (*l_2188)), (g_1266[4] == (g_2240 = l_2238)))), (*l_2033), p_3, (*l_2154), l_2242);

                    ;
                    ;
                }

                ;
            }



            ;
        }



        ;
        ;
        for (g_71 = 6; (g_71 > 50); g_71 = safe_add_func_uint16_t_u_u(g_71, 4))
        {
            unsigned l_2253 = 0xCE7D4A83L;
            int *l_2258 = &g_1726[0];
            unsigned **l_2261 = (void*)0;
            if (((*l_2033) = ((safe_lshift_func_int8_t_s_s((&g_366 != l_2247), 7)) && l_2249)))
            {
                const char l_2250[9] = {0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L};
                int i;
                (*l_2035) = p_3;
            }
            else
            {
                unsigned **l_2259 = &g_1338;
                (*l_2227) = ((l_2260[3] = l_2259) == l_2261);
            }
        }
    }
    else
    {
        long long l_2266[10][5] = {{0xEA36A465758E0273LL,0x7FCF5500603A1499LL,0x6805AABB30019CF6LL,(-6L),0L},{0xC62D855080A58E90LL,(-1L),1L,0x42ABFE1DBE54A2CCLL,9L},{0x7FCF5500603A1499LL,0x42ABFE1DBE54A2CCLL,0xB8AC890F423862C7LL,0x39FD3E47B8499D63LL,0x39FD3E47B8499D63LL},{0xC62D855080A58E90LL,0x6805AABB30019CF6LL,0xC62D855080A58E90LL,0xB8AC890F423862C7LL,1L},{0xEA36A465758E0273LL,0x6805AABB30019CF6LL,0x74824F5AB431F9F0LL,0x7FCF5500603A1499LL,(-1L)},{1L,0x42ABFE1DBE54A2CCLL,0x39FD3E47B8499D63LL,1L,0xEA36A465758E0273LL},{0x26A40258002737D7LL,(-1L),0x74824F5AB431F9F0LL,(-1L),0x26A40258002737D7LL},{0L,0x7FCF5500603A1499LL,0xC62D855080A58E90LL,(-1L),1L},{(-6L),0L,0xB8AC890F423862C7LL,1L,4L},{0x74824F5AB431F9F0LL,0xC62D855080A58E90LL,1L,0x7FCF5500603A1499LL,0x7FCF5500603A1499LL}};
        const unsigned **l_2268 = &g_1654;
        unsigned **l_2296 = &g_1338;
        int l_2316 = 0x90FF7B7BL;
        const char l_2322 = 0L;
        int i, j;
        if (((safe_add_func_uint32_t_u_u(l_2266[4][3], (l_2267 == l_2268))) != ((*l_2033) == 0x82E8593AF68B4EADLL)))
        {
            short l_2275 = (-1L);
            unsigned ***l_2280 = (void*)0;
            int l_2281 = 1L;
            int l_2303 = 0x291A2316L;
            unsigned short **l_2308 = &g_2305;
            (*g_1485) = func_43((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_2275, (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s((l_2266[4][3] == (l_2275 | ((void*)0 == l_2280))), l_2281)), l_2266[4][3])))), 0x9CL)), 1L)), p_3, p_3);
            for (g_77 = 0; (g_77 != 37); ++g_77)
            {
                int l_2286 = 0xB13C0EC1L;
                short **l_2295 = &l_2292[0];
                for (g_1307 = 18; (g_1307 > 3); g_1307 = safe_sub_func_uint8_t_u_u(g_1307, 3))
                {
                    short **l_2293 = (void*)0;
                    short ***l_2294[4][4][2] = {{{&l_2291,&g_1415},{&g_1415,&l_2291},{&g_1415,&g_1415},{&l_2291,&l_2291}},{{&g_1415,&g_1415},{&l_2291,&g_1415},{&g_1415,&l_2291},{&l_2291,&g_1415}},{{&g_1415,&l_2291},{&g_1415,&g_1415},{&l_2291,&l_2291},{&g_1415,&g_1415}},{{&l_2291,&g_1415},{&g_1415,&l_2291},{&l_2291,&g_1415},{&g_1415,&l_2291}}};
                    const int l_2299 = 0x947F95C8L;
                    unsigned long long ***l_2300[8];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_2300[i] = &g_279;
                    (*p_3) = l_2286;
                    (*g_1485) = (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((l_2281 != ((l_2293 = l_2291) == (l_2295 = &l_2292[0]))), (!(&g_1338 == l_2296)))), (((*g_935) = (safe_sub_func_uint8_t_u_u((l_2299 <= (l_2300[0] == (void*)0)), ((safe_rshift_func_int16_t_s_s(((**l_2291) = l_2281), l_2286)) ^ l_2286)))) > 8UL)));

                    ;
                    (*p_3) = (l_2303 = 0xFABF3418L);
                    (*l_2033) = (*l_2033);
                }
            }
            if ((*p_3))
            {
                const int *l_2310 = &g_1726[0];
                int *l_2312 = (void*)0;
                for (g_1310 = 0; (g_1310 <= 9); g_1310 += 1)
                {
                    unsigned short ***l_2306 = (void*)0;
                    unsigned short ***l_2307 = &g_2304;
                    const int *l_2309 = &g_1726[0];
                    unsigned l_2313[6][4][1] = {{{5UL},{0x419E7095L},{0x27FE4751L},{0x1735623FL}},{{0x419E7095L},{0x1735623FL},{0x27FE4751L},{0x419E7095L}},{{5UL},{5UL},{0x419E7095L},{0x27FE4751L}},{{0x1735623FL},{0x419E7095L},{0x1735623FL},{0x27FE4751L}},{{0x419E7095L},{5UL},{5UL},{0x419E7095L}},{{0x27FE4751L},{0x1735623FL},{0x419E7095L},{0x1735623FL}}};
                    int i, j, k;
                    if ((((((*l_2307) = g_2304) == l_2308) & l_2281) || l_2266[3][3]))
                    {
                        int *l_2311 = (void*)0;
                        l_2310 = l_2309;
                        (**g_2240) = l_2311;

                        ;
                        l_2312 = ((*g_2241) = l_2312);
                    }
                    else
                    {
                        if ((*p_3))
                            break;
                        (*p_3) = (*g_86);
                        (**g_2240) = p_3;


                        return (*g_2241);


                    }

                    ;
                    (*l_2033) = ((*p_3) = l_2313[5][2][0]);
                }


                (*p_3) = (safe_mod_func_uint64_t_u_u((((**g_2304) ^ (**g_2304)) & (((**g_794) = (*l_2033)) > (l_2275 > (*l_2033)))), (l_2316 = 0x96C3B39EC8621756LL)));
                (*g_2241) = p_3;


                p_3 = p_3;
            }
            else
            {
                int *l_2317 = (void*)0;
                (*p_3) = (*l_2033);
                return l_2317;


            }


        }
        else
        {
            unsigned char l_2327[10] = {0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L};
            int l_2340 = 0xC79E76B1L;
            int *****l_2347 = (void*)0;
            int ****l_2349 = &g_2240;
            int *****l_2348 = &l_2349;
            int l_2350 = 0xC89AD413L;
            char *l_2353 = &g_2054;
            int i;
            for (g_1105 = 0; g_1105 < 6; g_1105 += 1)
            {
                for (l_2061 = 0; l_2061 < 2; l_2061 += 1)
                {
                    g_1076[g_1105][l_2061] = 0x11L;
                }
            }
            for (g_77 = 0; (g_77 <= 53); g_77++)
            {
                int l_2329[5] = {0L,0L,0L,0L,0L};
                int *l_2330 = &l_2316;
                int i;
                for (g_589 = (-3); (g_589 >= 30); g_589++)
                {
                    long long l_2328 = 0xAB88EBA7B24F975ALL;
                    if (l_2322)
                        break;
                    if ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(5UL, (-7L))) > (((void*)0 == &g_982) & l_2327[0])), 4)))
                    {
                        unsigned short l_2333 = 0xFE74L;
                        int **l_2334 = &g_1956[3][1];
                        (*l_2334) = func_10((*l_2033), (l_2333 = (((**l_2291) = func_43((l_2329[3] = l_2328), l_2330, p_3)) && ((safe_lshift_func_uint8_t_u_s(8UL, 0)) || ((*l_2330) = 255UL)))), ((*l_2334) = ((*g_2241) = (void*)0)), (*l_2033), l_2327[3]);
                        (*g_2241) = p_3;


                        return p_3;


                    }
                    else
                    {
                        int l_2337 = 3L;
                        (*l_2033) = 0xFD933958L;
                        if ((*p_3))
                            break;
                        (*g_1485) = ((safe_rshift_func_uint8_t_u_s((l_2337 = l_2328), (*l_2033))) | (safe_lshift_func_uint8_t_u_u(((*l_2330) ^ l_2327[0]), 6)));
                    }
                    l_2340 = ((*g_615) != (void*)0);
                }
            }
            l_2316 = ((*p_3) = (safe_mod_func_uint16_t_u_u(((*l_2033) & l_2266[6][0]), (safe_unary_minus_func_int8_t_s(((*l_2353) = ((((safe_unary_minus_func_uint64_t_u(8UL)) < ((l_2350 = (((*l_2348) = &g_1266[0]) != (void*)0)) == (*l_2033))) != ((*p_3) == (safe_rshift_func_int16_t_s_s(l_2316, 10)))) < 0xE247L)))))));

            ;
            (*p_3) = (-1L);
        }


    }




    ;
    (*g_2241) = l_2354;

    ;
    (*l_2033) = ((*l_2354) <= (*l_2033));
    if ((*p_3))
    {
        int *l_2355 = (void*)0;
        p_3 = l_2355;

        ;
    }
    else
    {
        unsigned l_2358 = 0xBCC144A1L;
        char l_2365 = 0xBDL;
        unsigned char l_2402 = 0xC0L;
        unsigned long long *l_2403[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int *l_2439 = &l_2061;
        unsigned ***l_2444[10][8] = {{(void*)0,&g_246,&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246},{&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{(void*)0,&g_246,&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246},{&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,(void*)0,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246}};
        int *l_2486 = &l_2386;
        int l_2504 = 0xCD6001EBL;
        int *l_2546 = &g_1487;
        int *l_2547 = &l_2373[3];
        int *l_2548 = (void*)0;
        long long *** const *l_2586 = (void*)0;
        long long *** const **l_2585 = &l_2586;
        int i, j;
        (*g_2241) = p_3;


        if ((*p_3))
        {
            unsigned l_2372 = 0x6A9ABB46L;
            unsigned ****l_2388 = &g_753;
            const int * const l_2416 = &g_32;
            if (((safe_mod_func_uint64_t_u_u((((l_2358 & (((*l_2033) = (safe_rshift_func_uint16_t_u_s(((*l_2034) = ((**g_2304) = (safe_mod_func_int32_t_s_s(((*p_3) = (*g_185)), (-1L))))), (safe_add_func_int64_t_s_s((l_2365 == ((0xB6L >= l_2365) < ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(0xB2A42E17L, (safe_unary_minus_func_uint16_t_u(((l_2371 == l_2372) || (*l_2033)))))), l_2365)) <= l_2373[2]))), 0x77D6FC80048827EFLL))))) & l_2372)) >= l_2358) && (*p_3)), l_2372)) && l_2372))
            {
                unsigned char l_2385 = 0xAAL;
                for (g_182 = 0; (g_182 <= 3); g_182 += 1)
                {
                    const long long ***l_2379[8] = {&g_395,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395};
                    const long long ****l_2378 = &l_2379[5];
                    const long long *****l_2380 = &l_2378;
                    char *l_2389[2][10] = {{&g_1353,&l_2365,&g_1353,&g_1353,&l_2365,&g_1353,&g_1353,&l_2365,&g_1353,&g_1353},{&l_2365,&l_2365,(void*)0,&l_2365,&l_2365,(void*)0,&l_2365,&l_2365,(void*)0,&l_2365}};
                    int l_2393 = (-8L);
                    int i, j;
                    if (l_2365)
                        break;
                    if ((*l_2354))
                        break;
                }
            }
            else
            {
                unsigned long long l_2410 = 0x3402F86495972815LL;
                const int **l_2417 = (void*)0;
                const int **l_2418 = &g_86;
                (*g_1485) = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((0UL <= l_2410) > l_2415[0][2][0]), l_2410)), (*g_2305))) ^ (*p_3));
                (*l_2418) = l_2416;

                ;
            }
        }
        else
        {
            const short l_2419 = 1L;
            int *l_2429 = &g_1097;
            int * const *l_2468 = &g_1492[0];
            int * const **l_2467 = &l_2468;
            unsigned l_2484 = 4294967286UL;
            int *l_2485 = &l_2386;
            unsigned ****l_2508 = (void*)0;
            const long long *l_2529 = &g_1127;
            const long long **l_2528[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2528[i] = &l_2529;
            for (g_1205 = 0; (g_1205 <= 0); g_1205 += 1)
            {
                unsigned l_2420 = 0x8B6730B7L;
                int l_2428[6][3][8] = {{{0x7DEDAFF1L,9L,0xF254BA1EL,0x5297982BL,0xDCB1D4FBL,3L,8L,1L},{1L,(-5L),0x50685044L,0xFB0516CEL,0xD40E8A95L,5L,0x3CF5A10EL,1L},{0xF254BA1EL,0L,0x1B55F808L,(-1L),9L,(-8L),1L,0x0B8BC49EL}},{{0x0B8BC49EL,(-6L),4L,0x1B55F808L,7L,0x4472519DL,0xDCB1D4FBL,0x7ED64AB2L},{(-1L),0x7ED64AB2L,8L,9L,(-5L),(-5L),9L,8L},{0x4472519DL,0x4472519DL,0xA33989CBL,0L,1L,7L,4L,0xFB0516CEL}},{{0xF4796001L,0x421C7A73L,3L,0L,0x7F015D84L,(-1L),1L,0xFB0516CEL},{0x421C7A73L,2L,0L,0L,0x5297982BL,0x69368970L,9L,8L},{0x91E329F8L,5L,0x421C7A73L,9L,1L,0xFB0516CEL,9L,0x7ED64AB2L}},{{0x1D97099FL,0x50685044L,0L,0x1B55F808L,1L,0L,0xD40E8A95L,0x0B8BC49EL},{0xDCB1D4FBL,0x88730001L,9L,(-1L),(-6L),0x3CF5A10EL,7L,1L},{0xADEB6444L,0x769A612DL,0x7ED64AB2L,0xFB0516CEL,0L,4L,0x21A50BF9L,1L}},{{(-1L),0xDA97C1D1L,0L,0xE60B9F5BL,0L,0xDA97C1D1L,0xDCB1D4FBL,0x769A612DL},{7L,3L,0x5297982BL,0L,(-6L),0xDCB1D4FBL,0x8178375EL,1L},{0x7F015D84L,0x0B8BC49EL,1L,0x21A50BF9L,(-6L),0xA33989CBL,3L,0xE60B9F5BL}},{{7L,(-5L),0x0B8BC49EL,1L,0L,0x421C7A73L,0xFB0516CEL,1L},{0xDCB1D4FBL,1L,0xDA97C1D1L,7L,5L,0x21A50BF9L,0xF254BA1EL,0xFB0516CEL},{0x5536B339L,0L,0L,1L,0x769A612DL,(-6L),0x5297982BL,0xADEB6444L}}};
                short ***l_2461 = &g_1415;
                int i, j, k;
            }
            if ((!(-9L)))
            {
                (*p_3) = (*l_2439);
            }
            else
            {
                int ***l_2479 = &g_2241;
                unsigned *****l_2507 = &g_2505[0];
                long long *l_2513[7][4][3] = {{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}},{{&g_936,&l_2088,&g_936},{&g_1127,&g_936,&g_936},{&l_2088,&l_2088,&l_2088},{&g_1127,&g_1127,&g_936}}};
                unsigned long long ***l_2517 = (void*)0;
                unsigned long long ***l_2518 = &g_279;
                unsigned long long ***l_2519 = &g_279;
                unsigned long long ***l_2520 = &g_279;
                unsigned long long ***l_2521 = &g_279;
                unsigned long long ***l_2522 = (void*)0;
                unsigned long long ***l_2523 = &g_279;
                unsigned long long ***l_2524 = (void*)0;
                unsigned long long ***l_2525[2];
                char *l_2527 = &l_2365;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2525[i] = &g_279;
                for (g_1097 = 0; (g_1097 == 15); g_1097++)
                {
                    int * const ***l_2469 = &l_2467;
                    int * const **l_2471 = (void*)0;
                    int * const ***l_2470 = &l_2471;
                    int * const **l_2473 = (void*)0;
                    int * const ***l_2472 = &l_2473;
                    int * const ***l_2474 = (void*)0;
                    int * const **l_2476 = (void*)0;
                    int * const ***l_2475[9][4] = {{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476},{&l_2476,&l_2476,&l_2476,&l_2476}};
                    int ****l_2480 = &l_2479;
                    int i, j;
                    (*l_2033) = ((g_2477 = ((*l_2472) = ((*l_2470) = ((*l_2469) = l_2467)))) == ((*l_2480) = l_2479));

                    ;
                    ;
                    ;
                    for (l_2421 = 0; (l_2421 <= 53); l_2421++)
                    {
                        unsigned l_2483[6][7] = {{0x38F4374DL,4294967295UL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL},{7UL,7UL,0UL,0xE74A3B05L,0UL,2UL,4294967295UL},{0x25D402CDL,4294967287UL,0xE74A3B05L,7UL,4294967295UL,0xA6857371L,0xA6857371L},{0UL,4294967295UL,0x38F4374DL,4294967295UL,0xFFDF010AL,4294967295UL,0x6AC3832CL},{0x25D402CDL,0xA6857371L,7UL,0x38F4374DL,4294967295UL,4294967295UL,0UL},{0x38F4374DL,0UL,0UL,4294967295UL,4294967295UL,0UL,0UL}};
                        int **l_2487 = &l_2354;
                        int i, j;
                        p_3 = p_3;
                        (*g_2241) = p_3;
                        if ((***l_2479))
                            break;
                        (*p_3) = 0x4586B63FL;
                    }
                    (**l_2479) = (*g_2241);
                }

                ;
                (*g_2241) = &l_2504;

                ;
                (*g_185) = ((*l_2429) >= (((((***l_2479) | (safe_div_func_uint16_t_u_u(((l_2513[2][0][2] = l_2403[2]) != (void*)0), ((**l_2291) = (safe_lshift_func_int8_t_s_s(0x9CL, ((*l_2527) = (l_2516 != (g_2526[1][1] = &g_280))))))))) != (*l_2486)) > (*l_2429)) | (***l_2479)));


            }


            ;
            (*l_2033) = ((l_2528[0] == (*g_1512)) != (safe_add_func_int64_t_s_s((*l_2429), ((*g_280) = (*l_2439)))));
            for (g_1506 = 0; (g_1506 <= 8); g_1506++)
            {
                unsigned char l_2544 = 0x0FL;
                for (l_2402 = 0; (l_2402 <= 22); l_2402++)
                {
                    unsigned short l_2545[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2545[i][j] = 0xB0E3L;
                    }
                    for (l_2061 = 0; (l_2061 != 0); ++l_2061)
                    {
                        unsigned l_2542 = 0x641517F8L;
                        int l_2543 = 0x389EEEE8L;
                        (*l_2354) = (0x4562BA1692EA5BFCLL && (!(safe_add_func_int16_t_s_s(((*l_2429) = ((((safe_mod_func_int64_t_s_s((l_2543 = ((*g_935) = l_2542)), (*l_2354))) & 0x00L) >= 18446744073709551608UL) < (**g_519))), (-9L)))));
                        (*g_185) = (*g_86);
                        if ((*p_3))
                            break;
                    }
                    (*l_2429) = ((l_2545[0][1] = l_2544) || 1L);
                }
                (*l_2033) = 7L;
                if ((*l_2033))
                    break;
            }
        }



        if ((*l_2354))
        {
            (*g_2241) = &l_2504;

            ;
        }
        else
        {
            unsigned short **l_2565 = &l_2034;
            int l_2566 = 1L;
            int l_2567 = (-1L);
            (*p_3) = (((safe_lshift_func_int16_t_s_u((*l_2486), ((safe_div_func_uint32_t_u_u((4L < 1L), (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_1310 = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_2403[6] == (void*)0), ((**g_794) >= (func_43((l_2566 = (((l_2565 == l_2565) > (*l_2486)) & (*l_2033))), &l_2386, &l_2386) == l_2567)))), 1))), 2)) ^ (*l_2439)), (*l_2486))), (*l_2486))))) && (*l_2439)))) > (*l_2486)) | (*l_2033));
            for (g_936 = (-27); (g_936 <= 29); g_936 = safe_add_func_int64_t_s_s(g_936, 1))
            {
                unsigned l_2570 = 0xB19BF4A8L;
                int *l_2593 = &l_2504;
                if (((((*g_2304) == (void*)0) != ((*l_2033) < (l_2570 == (*l_2439)))) < (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((*l_2486), ((**g_553) = l_2566))), (l_2570 & (7L >= l_2566))))))
                {
                    int *l_2575 = &g_925;
                    p_3 = l_2575;

                    ;
                    for (l_2566 = 0; (l_2566 > (-10)); l_2566 = safe_sub_func_int16_t_s_s(l_2566, 2))
                    {
                        (*p_3) = (*p_3);
                    }
                }
                else
                {
                    unsigned short l_2578 = 65528UL;
                    char *l_2579 = (void*)0;
                    char *l_2580[2];
                    int l_2581 = 0xCD67E397L;
                    long long *** const ***l_2587 = &l_2585;
                    int **l_2588 = &g_1492[6];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2580[i] = &g_2054;
                    (*l_2588) = ((*g_2241) = func_21(g_2582, l_2566, (safe_mod_func_uint64_t_u_u(((&g_2376[6] == ((*l_2587) = l_2585)) < 0xA80EF56BL), l_2581))));

                    ;
                    (*g_1485) = l_2570;
                    (*g_185) = ((safe_rshift_func_int8_t_s_s((*l_2354), (l_2566 < ((*g_280) = ((void*)0 != &l_2493))))) | (*l_2354));
                }


                (*g_2241) = &l_2061;

                ;
                for (g_182 = 0; (g_182 <= 26); ++g_182)
                {
                    return p_3;



                }
            }





        }





    }






    return p_3;



}







static int * func_4(int * p_5, unsigned short p_6, unsigned p_7, int * p_8, int p_9)
{
    short *l_1859[10] = {(void*)0,&g_1075[0],&g_1075[0],(void*)0,&g_1075[0],&g_1075[0],(void*)0,&g_1075[0],&g_1075[0],(void*)0};
    short **l_1858 = &l_1859[2];
    short ***l_1860 = (void*)0;
    short ***l_1861 = &g_1415;
    const int *l_1867 = &g_83[0][3][1];
    int l_1895 = (-1L);
    int *l_1896 = &g_1726[0];
    unsigned char ***l_1926 = &g_1155[3][5];
    unsigned char ***l_1927 = &g_1155[1][4];
    unsigned char l_1967 = 8UL;
    unsigned long long * const *l_1992 = &g_795;
    char *l_2017 = &g_1306;
    unsigned l_2026[10][7] = {{18446744073709551615UL,0x27369165L,18446744073709551615UL,0xD37F24DCL,0xD37F24DCL,18446744073709551615UL,0x27369165L},{0x566CE641L,18446744073709551606UL,18446744073709551613UL,0xE9F930B7L,0xE9F930B7L,18446744073709551613UL,18446744073709551606UL},{18446744073709551615UL,0x27369165L,18446744073709551615UL,0xD37F24DCL,0xD37F24DCL,18446744073709551615UL,0x27369165L},{0x566CE641L,18446744073709551606UL,18446744073709551613UL,0xE9F930B7L,0xE9F930B7L,18446744073709551613UL,18446744073709551606UL},{18446744073709551615UL,0x27369165L,18446744073709551615UL,0xD37F24DCL,0xD37F24DCL,18446744073709551615UL,0x27369165L},{0x566CE641L,18446744073709551606UL,18446744073709551613UL,0xE9F930B7L,0xE9F930B7L,18446744073709551613UL,18446744073709551606UL},{18446744073709551615UL,0x27369165L,18446744073709551615UL,0xD37F24DCL,0xD37F24DCL,18446744073709551615UL,0x27369165L},{0x566CE641L,18446744073709551606UL,18446744073709551613UL,0xE9F930B7L,0xE9F930B7L,18446744073709551613UL,18446744073709551606UL},{18446744073709551615UL,0x27369165L,18446744073709551615UL,0xD37F24DCL,0xD37F24DCL,18446744073709551615UL,0x27369165L},{0x566CE641L,18446744073709551606UL,18446744073709551613UL,0xE9F930B7L,18446744073709551612UL,0x566CE641L,18446744073709551613UL}};
    int i, j;
    (*l_1861) = l_1858;

    ;
    if ((p_9 < (-2L)))
    {
        int *l_1864 = &g_1726[0];
        int *l_1865 = &g_32;
        unsigned l_1910 = 8UL;
        unsigned long long *l_1960 = &g_589;
        int **l_1979 = &g_1956[5][1];
        for (p_9 = 0; (p_9 >= (-17)); p_9--)
        {
            return l_1864;



        }
        for (g_154 = 1; (g_154 <= 9); g_154 += 1)
        {
            const int *l_1869 = &g_1726[0];
            long long *l_1875[6][10][1] = {{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}},{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}},{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}},{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}},{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}},{{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411},{&g_1127},{&g_936},{&g_1127},{&g_411},{&g_411}}};
            int l_1904 = 0xBA71E67BL;
            long long l_1940 = (-1L);
            char *l_1953 = &g_1310;
            unsigned short l_1974[9] = {0x860CL,0x860CL,0xAEFBL,0x860CL,0x860CL,0xAEFBL,0x860CL,0x860CL,0xAEFBL};
            int *l_1975[4][1];
            unsigned long long * const *l_1989 = (void*)0;
            char *l_2016 = &g_1306;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1975[i][j] = &l_1895;
            }
        }
        (*g_1485) = (*l_1867);
    }
    else
    {
        int *l_2024 = &g_1726[0];
        int **l_2025[10][7][3] = {{{&g_1956[5][2],&g_1956[5][2],(void*)0},{&g_1956[4][1],&g_1492[1],&g_172[2][4][1]},{&g_1485,(void*)0,(void*)0},{&g_1492[1],&g_1485,&g_1485},{&g_185,&g_1485,(void*)0},{(void*)0,(void*)0,&g_172[2][4][1]},{&g_172[3][8][1],&g_1492[0],(void*)0}},{{&g_1956[4][0],&g_1397,&g_1485},{&g_1485,&g_172[1][0][0],(void*)0},{(void*)0,&g_1956[4][0],&g_1492[1]},{&g_1492[0],&g_1485,&g_1956[5][2]},{&g_1397,&g_1397,&g_172[2][4][1]},{&g_1492[0],&g_1485,&g_1485},{(void*)0,&g_172[2][4][1],&g_172[2][4][1]}},{{&g_1485,&g_1956[4][0],&g_1956[4][0]},{&g_1485,(void*)0,&g_172[2][4][1]},{(void*)0,&g_185,&g_1485},{&g_1492[1],&g_172[9][0][1],&g_172[2][4][1]},{&g_1956[5][2],(void*)0,&g_1956[5][2]},{&g_172[2][4][1],&g_172[9][0][1],&g_1492[1]},{&g_1485,&g_185,(void*)0}},{{&g_172[2][4][1],(void*)0,&g_1485},{&g_1956[4][0],&g_1956[4][0],&g_1485},{&g_172[2][4][1],&g_172[2][4][1],(void*)0},{&g_1485,&g_1485,&g_1492[0]},{&g_172[2][4][1],&g_1397,&g_1397},{&g_1956[5][2],&g_1485,&g_1492[0]},{&g_1492[1],&g_1956[4][0],(void*)0}},{{(void*)0,&g_172[1][0][0],&g_1485},{&g_1485,&g_1956[4][1],&g_1485},{&g_1485,&g_172[1][0][0],(void*)0},{(void*)0,&g_1956[4][0],&g_1492[1]},{&g_1492[0],&g_1485,&g_1956[5][2]},{&g_1397,&g_1397,&g_172[2][4][1]},{&g_1492[0],&g_1485,&g_1485}},{{(void*)0,&g_172[2][4][1],&g_172[2][4][1]},{&g_1485,&g_1956[4][0],&g_1956[4][0]},{&g_1485,(void*)0,&g_172[2][4][1]},{(void*)0,&g_185,&g_1485},{&g_1492[1],&g_172[9][0][1],&g_1485},{&g_1492[0],&g_1956[1][1],&g_1492[0]},{&g_1485,&g_1492[1],&g_1956[4][0]}},{{&g_1956[4][0],(void*)0,&g_185},{(void*)0,&g_1397,&g_172[2][4][1]},{&g_172[1][0][0],&g_172[1][0][0],&g_1956[5][2]},{(void*)0,&g_1485,&g_1397},{&g_1956[4][0],&g_1956[5][2],&g_172[3][8][1]},{&g_1485,&g_172[9][0][1],&g_172[9][0][1]},{&g_1492[0],&g_1956[4][0],&g_172[3][8][1]}},{{&g_1956[4][0],&g_1956[4][1],&g_1397},{&g_185,(void*)0,&g_1956[5][2]},{&g_172[2][4][1],(void*)0,&g_172[2][4][1]},{&g_1956[5][2],(void*)0,&g_185},{&g_1397,&g_1956[4][1],&g_1956[4][0]},{&g_172[3][8][1],&g_1956[4][0],&g_1492[0]},{&g_172[9][0][1],&g_172[9][0][1],&g_1485}},{{&g_172[3][8][1],&g_1956[5][2],&g_1956[4][0]},{&g_1397,&g_1485,(void*)0},{&g_1956[5][2],&g_172[1][0][0],&g_172[1][0][0]},{&g_172[2][4][1],&g_1397,(void*)0},{&g_185,(void*)0,&g_1956[4][0]},{&g_1956[4][0],&g_1492[1],&g_1485},{&g_1492[0],&g_1956[1][1],&g_1492[0]}},{{&g_1485,&g_1492[1],&g_1956[4][0]},{&g_1956[4][0],(void*)0,&g_185},{(void*)0,&g_1397,&g_172[2][4][1]},{&g_172[1][0][0],&g_172[1][0][0],&g_1956[5][2]},{(void*)0,&g_1485,&g_1397},{&g_1956[4][0],&g_1956[5][2],&g_172[3][8][1]},{&g_1485,&g_172[9][0][1],&g_172[9][0][1]}}};
        int i, j, k;
        for (g_619 = (-30); (g_619 != 10); g_619++)
        {
            unsigned short *l_2022 = &g_1132;
            const int l_2023[1] = {(-8L)};
            int i;
            (*g_1485) = (p_9 || (((*l_2022) = g_77) && l_2023[0]));
        }
        l_1867 = (p_5 = (l_1896 = (l_2024 = p_8)));





        (*g_1397) = (l_2026[1][6] | (safe_div_func_int8_t_s_s((*l_1867), 251UL)));
        (*p_8) = (((*l_1896) || (*l_1867)) & (safe_div_func_uint16_t_u_u((*l_2024), (*l_1867))));
    }




    if ((*l_1867))
    {
        int **l_2031 = &g_1397;
        (*l_2031) = (void*)0;

        ;
    }
    else
    {
        int **l_2032 = &g_172[3][8][1];
        (*l_2032) = &l_1895;


    }


    ;
    return p_5;




}







static int * func_10(unsigned short p_11, unsigned p_12, int * p_13, int p_14, long long p_15)
{
    int **** const l_1832 = &g_1266[0];
    short l_1851[8] = {0x4FD4L,0x8C52L,0x4FD4L,0x8C52L,0x4FD4L,0x8C52L,0x4FD4L,0x8C52L};
    int **l_1852 = &g_172[2][4][1];
    int **l_1853 = &g_185;
    unsigned **l_1854[7][9][1] = {{{&g_1338},{&g_1338},{(void*)0},{(void*)0},{&g_1338},{(void*)0},{&g_1338},{(void*)0},{(void*)0}},{{&g_1338},{&g_1338},{&g_1338},{(void*)0},{&g_1338},{&g_1338},{&g_1338},{&g_1338},{&g_1338}},{{&g_1338},{&g_1338},{&g_1338},{(void*)0},{&g_1338},{&g_1338},{&g_1338},{(void*)0},{(void*)0}},{{&g_1338},{(void*)0},{&g_1338},{(void*)0},{(void*)0},{&g_1338},{&g_1338},{&g_1338},{(void*)0}},{{&g_1338},{&g_1338},{&g_1338},{&g_1338},{&g_1338},{&g_1338},{&g_1338},{&g_1338},{(void*)0}},{{&g_1338},{&g_1338},{&g_1338},{(void*)0},{(void*)0},{&g_1338},{(void*)0},{&g_1338},{(void*)0}},{{(void*)0},{&g_1338},{&g_1338},{&g_1338},{(void*)0},{&g_1338},{&g_1338},{&g_1338},{&g_1338}}};
    unsigned ***l_1855 = &l_1854[0][8][0];
    int *l_1856 = &g_30;
    int i, j, k;
    for (g_1307 = 2; (g_1307 <= 40); g_1307 = safe_add_func_int8_t_s_s(g_1307, 1))
    {
        int ****l_1830 = &g_1266[0];
        int *****l_1831 = &l_1830;
        int *l_1833 = &g_1726[0];
        int **l_1834 = &g_172[9][2][0];
        int **l_1839[10];
        unsigned short *l_1844 = &g_1205;
        int i;
        for (i = 0; i < 10; i++)
            l_1839[i] = &g_1492[2];
        (*l_1834) = func_48(p_15, ((**g_553) = (safe_rshift_func_int16_t_s_s((((*l_1831) = l_1830) == l_1832), (*g_520)))), l_1833, g_766);


        ;
        (*l_1833) = (safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((*l_1833), (((func_43((*l_1833), (p_13 = ((*l_1834) = (void*)0)), &p_14) < ((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x6AL, 0)), ((*l_1844) = 0x8974L))) < (safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((*g_280), (safe_add_func_uint64_t_u_u(p_14, 0xB4C3DAABD51E4B76LL)))) != 0x81L), p_12)))) | 0xDBL) && 1L))) ^ l_1851[7]), p_12));

        ;
        (*l_1833) = (*l_1833);
    }
    (*l_1853) = ((*l_1852) = &p_14);


    ;
    (*l_1855) = l_1854[0][8][0];
    return l_1856;




}







static unsigned long long func_17(int p_18, int * p_19)
{
    int *l_1531[6];
    int * const *l_1532 = &l_1531[5];
    unsigned short *l_1545 = &g_1205;
    unsigned short **l_1544 = &l_1545;
    unsigned short ***l_1543 = &l_1544;
    int *l_1622 = &g_925;
    unsigned **l_1652 = &g_247;
    long long l_1788 = 4L;
    int *l_1794 = &g_30;
    int i;
    for (i = 0; i < 6; i++)
        l_1531[i] = &g_1097;
    if ((p_18 || (*g_795)))
    {
        unsigned *l_1552 = &g_1105;
        int l_1563 = 1L;
        char *l_1564 = (void*)0;
        int l_1565[9][3] = {{0x364AC13CL,1L,0x6B2D1442L},{1L,0x364AC13CL,0x364AC13CL},{0x6B2D1442L,0x364AC13CL,(-1L)},{(-7L),1L,1L},{0x6B2D1442L,0x6B2D1442L,1L},{1L,(-7L),(-1L)},{0x364AC13CL,0x6B2D1442L,0x364AC13CL},{0x364AC13CL,1L,0x6B2D1442L},{1L,0x364AC13CL,0x364AC13CL}};
        int i, j;
        (*g_185) = (safe_add_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((+((p_18 >= 0x4AL) ^ ((*g_280) = p_18))), (((((*g_795) & (((**g_553) = (6UL < ((*l_1552) = p_18))) == (((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((**l_1532), ((safe_div_func_int8_t_s_s((l_1563 = (((safe_div_func_uint32_t_u_u(0x501F526AL, ((p_18 ^ p_18) || l_1563))) <= 7UL) & 0xF8BBA258FA1D998CLL)), g_327[6][2][0])) <= 0x20L))), l_1565[7][1])), (*g_1485))) | (*p_19)) || (-1L)))) | 0x9B611415L) == 0xA67A313382B5ED80LL) < 5UL))), 1L)) != (*p_19)) && l_1565[4][0]) || p_18), p_18));
    }
    else
    {
        unsigned long long l_1568 = 0x97409811CA41BFD1LL;
        (*g_1485) = (safe_lshift_func_int8_t_s_u((!(l_1568 || (*p_19))), 0));
    }
    l_1531[3] = (void*)0;


    l_1531[1] = (void*)0;
    for (g_1205 = 0; (g_1205 <= 3); g_1205 += 1)
    {
        const unsigned ***l_1579 = (void*)0;
        int l_1590[2][5];
        char l_1598 = 0x23L;
        unsigned char l_1725 = 0x55L;
        int *l_1733 = &l_1590[1][2];
        unsigned char l_1787 = 0x8FL;
        unsigned short *l_1792 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_1590[i][j] = 7L;
        }
        for (g_1353 = 0; (g_1353 <= 5); g_1353 += 1)
        {
            const unsigned ****l_1580 = &l_1579;
            unsigned ***l_1581[6];
            unsigned ****l_1582 = &l_1581[4];
            int l_1583 = 0xD8F83E92L;
            int i;
            for (i = 0; i < 6; i++)
                l_1581[i] = &g_1337;
            (*g_185) = (p_18 != (safe_div_func_uint32_t_u_u(0x12135007L, (*p_19))));
            l_1583 = (g_936 && (((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((0xCBL || (safe_add_func_int64_t_s_s(((~(p_18 <= ((safe_mod_func_int32_t_s_s(((*g_1485) = (*g_86)), g_619)) ^ g_1353))) ^ (((*l_1580) = l_1579) == ((*l_1582) = l_1581[2]))), 0xB1A0782F6663BD87LL))) >= g_156), p_18)), g_1235[5])) != p_18) <= 0x32L));
            for (l_1583 = 0; (l_1583 <= 1); l_1583 += 1)
            {
                (*p_19) = (*p_19);
            }
        }
        for (g_1353 = 3; (g_1353 >= 0); g_1353 -= 1)
        {
            int l_1596 = (-8L);
            short l_1610 = (-1L);
            int l_1611[1];
            unsigned short *l_1682 = (void*)0;
            const unsigned *l_1690 = &g_508;
            long long *l_1719 = &g_1127;
            int i;
            for (i = 0; i < 1; i++)
                l_1611[i] = 0xE52BF412L;
            for (g_154 = 0; (g_154 <= 3); g_154 += 1)
            {
                unsigned short *l_1593 = &g_766;
                int l_1597[7] = {0L,0L,0xC7806AD2L,0L,0L,0xC7806AD2L,0L};
                unsigned ***l_1629 = (void*)0;
                int **l_1665 = &l_1531[0];
                int i;
            }
            if ((*p_19))
                continue;
            for (g_589 = 0; (g_589 <= 3); g_589 += 1)
            {
                long long l_1677 = (-1L);
                long long ***l_1695 = &g_884;
                long long ****l_1694[2][8][8] = {{{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,(void*)0,&l_1695,(void*)0,&l_1695},{&l_1695,(void*)0,(void*)0,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{(void*)0,(void*)0,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695}},{{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,(void*)0},{&l_1695,&l_1695,&l_1695,(void*)0,&l_1695,(void*)0,&l_1695,(void*)0},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,(void*)0},{(void*)0,&l_1695,&l_1695,(void*)0,&l_1695,&l_1695,(void*)0,&l_1695},{(void*)0,&l_1695,&l_1695,(void*)0,&l_1695,&l_1695,&l_1695,(void*)0},{&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695,&l_1695}}};
                int i, j, k;
                if (l_1590[0][2])
                {
                    int *l_1666 = &g_30;
                    l_1666 = (void*)0;

                    ;
                    return l_1611[0];


                }
                else
                {
                    long long l_1683 = 0x70B85730EFA7CC49LL;
                    unsigned short *l_1684 = (void*)0;
                    unsigned short *l_1685 = &g_1307;
                    short l_1691 = 3L;
                    int l_1692 = 0L;
                    int **l_1693 = &g_172[1][4][0];
                    (*p_19) = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(g_1075[0], p_18)) | (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((~(((*l_1685) = (l_1677 != (safe_div_func_int8_t_s_s((func_43((safe_mul_func_uint16_t_u_u((0xA6L && (l_1683 = ((l_1682 = (void*)0) != ((*l_1544) = &g_619)))), (*g_1343))), p_19, l_1622) > 18446744073709551613UL), 255UL)))) == p_18)) || 0x39B8L), 15)), 3UL))), 8)), l_1677));
                    (*g_1397) = l_1611[0];
                    (*l_1693) = &l_1611[0];
                }
            }


            ;
            return (*l_1622);


        }
        if (((*g_1485) = (*g_1397)))
        {
            unsigned ***l_1744 = (void*)0;
            int l_1745 = 0L;
            const unsigned l_1746 = 0x137F7046L;
            for (g_1105 = 0; (g_1105 <= 3); g_1105 += 1)
            {
                for (g_1097 = 3; (g_1097 >= 0); g_1097 -= 1)
                {
                    for (g_1132 = 0; (g_1132 <= 3); g_1132 += 1)
                    {
                        return (*g_280);
                    }
                }
            }
            for (g_589 = 0; (g_589 <= 3); g_589 += 1)
            {
                unsigned long long l_1727 = 1UL;
                if (g_1726[0])
                    break;
                if (l_1727)
                {
                    int *l_1728 = &g_1726[0];
                    for (g_1098 = 0; (g_1098 <= 3); g_1098 += 1)
                    {
                        int **l_1729 = (void*)0;
                        int **l_1730 = &g_1485;
                        (*l_1730) = l_1728;

                        ;
                    }
                }
                else
                {
                    int l_1731 = 0x7737685EL;
                    (*g_1397) = ((*l_1622) = l_1731);
                }
                if (l_1727)
                    break;
                if (l_1590[0][2])
                    continue;
            }
            for (g_1098 = 0; (g_1098 <= 3); g_1098 += 1)
            {
                int **l_1732[8] = {&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0]};
                unsigned long long l_1734 = 0x5D026DF340E7382ELL;
                char *l_1741[1][1][2];
                short *l_1747[1];
                unsigned *l_1748 = &g_77;
                short l_1786 = 2L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1741[i][j][k] = &g_1306;
                    }
                }
                for (i = 0; i < 1; i++)
                    l_1747[i] = &g_1075[0];
                l_1733 = p_19;

                ;
            }

            ;
            if ((((*g_935) = 0x5038207CFF00F735LL) == (safe_lshift_func_int16_t_s_s(((0xACL | (~0x01L)) | p_18), 5))))
            {
                if ((*p_19))
                    break;
                if ((*g_1485))
                    continue;
            }
            else
            {
                p_19 = (void*)0;

                ;
                return p_18;
            }
        }
        else
        {
            int **l_1793[4] = {&l_1531[0],&l_1531[0],&l_1531[0],&l_1531[0]};
            int i;
            if ((*p_19))
                break;
            if ((*g_1397))
                break;
            for (g_1506 = 0; (g_1506 <= 3); g_1506 += 1)
            {
                (*g_1397) = ((void*)0 == l_1792);
            }
            l_1794 = p_19;
        }

        ;
        for (g_589 = 0; (g_589 <= 3); g_589 += 1)
        {
            int **l_1795 = &g_1492[4];
            int **l_1796 = &l_1531[2];
            const unsigned short l_1802[1] = {0UL};
            short *l_1811[10] = {&g_1075[0],&g_182,&g_1075[0],&g_1075[0],&g_182,&g_1075[0],&g_182,&g_1075[0],&g_1075[0],&g_182};
            unsigned short *l_1812 = (void*)0;
            int i;
            (*l_1796) = ((*l_1795) = p_19);
            if (((safe_mul_func_uint8_t_u_u(255UL, (+0xBFL))) ^ (safe_div_func_int64_t_s_s(p_18, p_18))))
            {
                return p_18;
            }
            else
            {
                (*l_1796) = p_19;
                if ((*l_1622))
                    break;
                for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                {
                    long long l_1801 = 0xBAB8B2CA17444255LL;
                    int i, j, k;
                    for (g_32 = 0; (g_32 <= 1); g_32 += 1)
                    {
                        int i, j, k;
                        g_172[(g_589 + 4)][(g_589 + 2)][g_77] = (void*)0;
                        return l_1801;
                    }
                    (*l_1796) = func_48(p_18, (*l_1733), p_19, l_1802[0]);


                    ;
                    (*l_1622) = 0x05EF0100L;
                }
            }
            (*p_19) = (safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(p_18, ((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (**g_794))) ^ (safe_rshift_func_int16_t_s_u((g_20[1][0] = (*l_1622)), (g_768 = 0x414CL)))))), (safe_sub_func_uint64_t_u_u(p_18, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(func_43(((safe_sub_func_int64_t_s_s(((*l_1794) | (safe_unary_minus_func_int64_t_s(p_18))), (0UL > g_1076[2][0]))) & 65526UL), &l_1590[0][2], p_19), 1)), (**g_553))), p_18))))));
            (*p_19) = 0x754D2AE9L;
        }
    }


    ;


    ;
    return p_18;
}







static int * func_21(int * p_22, unsigned char p_23, unsigned char p_24)
{
    int *l_838 = &g_32;
    unsigned char l_896 = 255UL;
    int l_923 = 0x57505B20L;
    unsigned char l_926 = 0x4BL;
    const int *l_941[8][3] = {{&g_32,&g_83[1][4][2],(void*)0},{&g_32,&g_925,&g_32},{&g_32,&g_83[2][6][0],&l_923},{&g_32,&g_83[1][4][2],(void*)0},{&g_32,&g_925,&g_32},{&g_32,&g_83[2][6][0],&l_923},{&g_32,&g_83[1][4][2],(void*)0},{&g_32,&g_925,&g_32}};
    unsigned **l_948 = &g_247;
    int *l_975[3];
    unsigned long long *l_1014 = &g_71;
    unsigned short * const l_1174 = &g_766;
    unsigned short * const *l_1173 = &l_1174;
    unsigned long long ***l_1213 = (void*)0;
    unsigned long long *** const *l_1212[4] = {&l_1213,&l_1213,&l_1213,&l_1213};
    char *l_1336 = &g_1310;
    char **l_1335[5] = {&l_1336,&l_1336,&l_1336,&l_1336,&l_1336};
    unsigned long long l_1361 = 18446744073709551608UL;
    unsigned char ****l_1389 = (void*)0;
    short *l_1412[5][1][6] = {{{&g_20[5][0],(void*)0,&g_20[5][0],&g_20[5][0],(void*)0,&g_20[5][0]}},{{&g_20[5][0],(void*)0,&g_20[5][0],&g_20[5][0],(void*)0,&g_20[5][0]}},{{&g_20[5][0],(void*)0,&g_20[5][0],&g_20[5][0],(void*)0,&g_20[5][0]}},{{&g_20[5][0],(void*)0,&g_20[5][0],&g_20[5][0],(void*)0,&g_20[5][0]}},{{&g_20[5][0],(void*)0,&g_20[5][0],&g_20[5][0],(void*)0,&g_20[5][0]}}};
    short **l_1411 = &l_1412[1][0][0];
    unsigned **l_1440 = (void*)0;
    const int ** const *l_1451 = (void*)0;
    long long l_1467 = 0xB57128A98C99325ELL;
    int *l_1474 = &g_30;
    int *l_1475 = &g_1097;
    int *l_1478[6] = {&g_30,(void*)0,&g_30,&g_30,(void*)0,&g_30};
    unsigned long long l_1497[3];
    unsigned short l_1501 = 0x1EAEL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_975[i] = &l_923;
    for (i = 0; i < 3; i++)
        l_1497[i] = 0x88A535EEE1AFF269LL;
    (*p_22) = (*p_22);
    for (p_23 = 0; (p_23 != 29); p_23 = safe_add_func_int64_t_s_s(p_23, 2))
    {
        unsigned char l_832 = 0xCBL;
        unsigned **l_869[10] = {&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247};
        int *l_871 = &g_32;
        short l_916 = (-8L);
        int l_921 = 0L;
        long long * const *l_932 = &g_885;
        long long ** const l_937 = (void*)0;
        int i;
        (*g_185) = 0xA3B34E93L;
        if (l_832)
        {
            int *l_841 = (void*)0;
            int *l_842 = &g_32;
            unsigned char l_870 = 255UL;
            const unsigned short *l_872 = (void*)0;
            for (g_30 = 13; (g_30 < 24); g_30 = safe_add_func_uint16_t_u_u(g_30, 2))
            {
                int **l_835 = &g_172[2][4][1];
                const int **l_845 = &g_86;
                (*l_835) = p_22;
                for (g_71 = 0; (g_71 >= 14); ++g_71)
                {
                    (*l_835) = l_838;
                    (*l_838) = l_832;
                    for (g_77 = 16; (g_77 <= 18); g_77++)
                    {
                        const int **l_843 = (void*)0;
                        const int **l_844 = &g_84;
                        l_842 = (l_841 = p_22);

                        ;
                        if ((*p_22))
                            continue;
                        (*l_844) = &g_85[1];

                        ;
                        (*l_835) = p_22;
                    }
                }
                (*l_835) = l_838;
                (*l_845) = &g_85[2];

                ;
            }

            ;
            ;
            if ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((*l_838), 65532UL)), (*l_838))))
            {
                (*p_22) = 0xCE506908L;
            }
            else
            {
                int l_853 = 0x770C747EL;
                const unsigned l_861 = 3UL;
                if ((*p_22))
                {
                    int **l_850 = &l_842;
                    (*l_850) = (g_185 = l_838);

                    ;
                    ;
                    for (g_154 = 0; (g_154 <= 0); g_154 += 1)
                    {
                        int *l_854 = &g_30;
                        (*l_838) = (p_24 >= (safe_mod_func_int16_t_s_s(l_853, g_77)));
                        p_22 = l_854;

                        ;
                        (*l_850) = &l_853;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    const int **l_855 = &g_86;
                    unsigned *l_858 = &g_241;
                    (*l_855) = &g_83[1][0][1];

                    ;
                    if ((0x8A81974AL <= ((safe_div_func_uint32_t_u_u(((-10L) | (p_24 || g_241)), 0x5DE5C3A0L)) < ((g_77 = ((((((void*)0 != l_858) == ((**g_794) = func_43((l_853 & ((safe_add_func_int16_t_s_s((l_861 || 0xEDL), (**l_855))) || 1UL)), &g_30, p_22))) <= 1L) ^ g_245) >= (*g_86))) && l_832))))
                    {
                        (*l_855) = &g_30;

                        ;
                        (*l_838) = (*p_22);
                        if ((*g_185))
                            break;
                    }
                    else
                    {
                        return l_842;


                    }

                    ;
                    for (p_24 = (-10); (p_24 == 7); p_24 = safe_add_func_int32_t_s_s(p_24, 5))
                    {
                        int l_866 = 0xACB2DA21L;
                        char *l_867 = (void*)0;
                        char *l_868 = &g_92;
                        const unsigned short **l_873 = &l_872;
                        unsigned *l_874 = &g_77;
                        int **l_875[10][4][6] = {{{&g_172[6][2][0],&g_172[6][2][0],&l_841,&g_172[2][4][1],&l_841,&g_172[6][2][0]},{&l_841,&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841},{&g_172[6][2][0],&l_841,&g_172[2][4][1],&l_841,&g_172[6][2][0],&g_172[6][2][0]},{(void*)0,&l_841,&l_841,(void*)0,&g_172[9][4][1],(void*)0}},{{(void*)0,&g_172[9][4][1],(void*)0,&l_841,&l_841,(void*)0},{&g_172[6][2][0],&g_172[6][2][0],&l_841,&g_172[2][4][1],&l_841,&g_172[6][2][0]},{&l_841,&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841},{&g_172[6][2][0],&l_841,&g_172[2][4][1],&l_841,&g_172[6][2][0],&g_172[6][2][0]}},{{(void*)0,&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841,&g_172[9][4][1]},{&g_172[9][4][1],&l_841,&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1]},{(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0},{&g_172[2][4][1],&l_841,&g_172[6][2][0],&g_172[6][2][0],&l_841,&g_172[2][4][1]}},{{(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0},{&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841,&g_172[9][4][1]},{&g_172[9][4][1],&l_841,&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1]},{(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0}},{{&g_172[2][4][1],&l_841,&g_172[6][2][0],&g_172[6][2][0],&l_841,&g_172[2][4][1]},{(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0},{&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841,&g_172[9][4][1]},{&g_172[9][4][1],&l_841,&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1]}},{{(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0},{&g_172[2][4][1],&l_841,&g_172[6][2][0],&g_172[6][2][0],&l_841,&g_172[2][4][1]},{(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0},{&g_172[9][4][1],&g_172[2][4][1],&g_172[2][4][1],&g_172[9][4][1],&l_841,&g_172[9][4][1]}},{{&g_172[9][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1]},{&l_841,&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841},{(void*)0,&g_172[6][2][0],&g_172[9][4][1],&g_172[9][4][1],&g_172[6][2][0],(void*)0},{&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841,&l_841}},{{&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1]},{&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1]},{&l_841,&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841},{(void*)0,&g_172[6][2][0],&g_172[9][4][1],&g_172[9][4][1],&g_172[6][2][0],(void*)0}},{{&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841,&l_841},{&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1]},{&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1]},{&l_841,&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841}},{{(void*)0,&g_172[6][2][0],&g_172[9][4][1],&g_172[9][4][1],&g_172[6][2][0],(void*)0},{&l_841,(void*)0,&g_172[9][4][1],(void*)0,&l_841,&l_841},{&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1]},{&g_172[2][4][1],&g_172[6][2][0],&g_172[2][4][1],(void*)0,(void*)0,&g_172[2][4][1]}}};
                        int i, j, k;
                        if ((*p_22))
                            break;
                    }
                }

                ;
                ;
                for (g_619 = 0; (g_619 < 24); ++g_619)
                {
                    return p_22;


                }
                return p_22;


            }
            (*l_871) = (18446744073709551607UL != p_23);
        }
        else
        {
            return p_22;


        }
        for (g_589 = 9; (g_589 <= 10); g_589++)
        {
            long long *l_883 = &g_411;
            long long **l_882 = &l_883;
            int l_899 = (-9L);
            int *l_904 = &l_899;
            int l_908[2][1];
            unsigned long long l_913 = 18446744073709551614UL;
            int **l_917 = &l_904;
            char l_920 = 0x44L;
            int *l_922 = &l_908[0][0];
            int *l_924 = &g_925;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_908[i][j] = 0xCD21B4EBL;
            }
            for (g_92 = 0; (g_92 >= (-1)); --g_92)
            {
                long long **l_887 = &l_883;
                long long ***l_886[7] = {&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887};
                int l_889 = 0x2374DB23L;
                int i;
                if ((~(l_889 = (((g_884 = l_882) == (g_888[6] = &g_885)) != l_889))))
                {
                    return &g_30;



                }
                else
                {
                    short ***l_907 = (void*)0;
                    int **l_909 = &g_172[2][4][1];
                    const int **l_910 = &g_86;
                    for (g_619 = 3; (g_619 >= 24); ++g_619)
                    {
                        int *l_900 = &g_30;
                        int **l_901 = &l_900;
                        int **l_902 = (void*)0;
                        int **l_903[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_903[i] = &g_172[2][4][1];
                        (*l_900) = (safe_sub_func_int32_t_s_s(((*p_22) = 0L), (safe_add_func_int8_t_s_s((l_896 < (((((safe_sub_func_int32_t_s_s((0xAE2D444BL <= 0x2E5C3632L), (g_619 ^ l_899))) == 0xC682B4BBL) & g_768) | (2UL > p_23)) != l_889)), g_74[0]))));
                        l_904 = ((*l_901) = &g_30);

                        ;
                    }
                    l_908[0][0] = (p_24 ^ (safe_mul_func_uint8_t_u_u(247UL, ((g_20[1][1] != ((void*)0 == l_907)) & ((*l_904) = ((*p_22) = l_889))))));
                    (*l_909) = p_22;
                    (*l_910) = &g_85[2];

                    ;
                }

                ;
                ;
            }


            ;
            (*l_924) = (l_923 = ((*l_922) = ((**l_917) = (l_921 = ((*l_838) = ((!0x77025579BE016CAFLL) <= ((safe_sub_func_uint64_t_u_u(((l_913 || (safe_div_func_uint16_t_u_u((l_916 <= (*l_871)), g_768))) > (safe_mod_func_uint32_t_u_u(l_920, g_85[1]))), p_23)) || (*l_838))))))));
        }
        if ((*l_871))
        {
            (*l_838) = l_926;
        }
        else
        {
            int l_929 = (-1L);
            long long * const **l_933 = &l_932;
            (*l_871) = (-3L);
            (*p_22) = ((safe_mod_func_uint8_t_u_u(l_929, (**g_553))) == (safe_add_func_uint64_t_u_u(((void*)0 != &g_508), ((*l_838) & (((g_934[0] = ((*l_933) = l_932)) != l_937) || 65535UL)))));
        }
    }
    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
    {
        long long *l_938 = &g_411;
        unsigned **l_950[2];
        char *l_1036 = &g_92;
        char **l_1035 = &l_1036;
        char ***l_1034 = &l_1035;
        unsigned short *l_1064[3];
        unsigned short **l_1063 = &l_1064[1];
        const int l_1080[5] = {0xBE338C7CL,0xBE338C7CL,0xBE338C7CL,0xBE338C7CL,0xBE338C7CL};
        int *l_1093 = &g_925;
        unsigned l_1141 = 5UL;
        short l_1160 = 8L;
        unsigned long long ***l_1211 = &g_279;
        unsigned long long **** const l_1210 = &l_1211;
        long long **l_1256 = &g_885;
        long long l_1327 = 0xD791CB890D0C0EDFLL;
        const char **l_1331 = (void*)0;
        int l_1386 = 0xAF82E9F9L;
        int l_1408 = (-1L);
        const int *l_1455[10] = {&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2],&g_85[2]};
        const int *l_1456 = &g_85[2];
        const int ** const l_1454[7] = {&l_1455[6],&l_1455[6],&l_1455[6],&l_1455[6],&l_1455[6],&l_1455[6],&l_1455[6]};
        const int ** const *l_1453 = &l_1454[5];
        unsigned l_1477[1];
        int *l_1498 = (void*)0;
        int *l_1517 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_950[i] = &g_247;
        for (i = 0; i < 3; i++)
            l_1064[i] = &g_245;
        for (i = 0; i < 1; i++)
            l_1477[i] = 0xDD2D9890L;
    }
    return p_22;


}







static int * func_25(long long p_26)
{
    int l_28 = 0xA85F88E1L;
    int *l_29 = &g_30;
    int *l_31 = &g_32;
    l_28 = p_26;
    (*l_31) = ((*l_29) = l_28);
    (*l_29) = (safe_mod_func_uint16_t_u_u((&g_30 != (void*)0), (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(g_32, 7)), (safe_rshift_func_uint16_t_u_s(p_26, func_41(&g_32)))))));


    ;

    ;

    ;
    return l_31;


}







static short func_41(int * p_42)
{
    long long l_47[8][7][4] = {{{(-2L),0xD69B45C761B8CE22LL,0xF0E77DA19AE86A67LL,0xF0E77DA19AE86A67LL},{(-1L),(-1L),0L,0L},{0x55D4826422F8DC70LL,0L,0x07E294B58FE4DE5ALL,0L},{0xF0E77DA19AE86A67LL,1L,0x06E82A74DB503B5BLL,0x07E294B58FE4DE5ALL},{0x07E294B58FE4DE5ALL,1L,(-1L),0L},{1L,0L,1L,0L},{0xD69B45C761B8CE22LL,(-1L),0x6B3883FAA058A13CLL,0xF0E77DA19AE86A67LL}},{{0x992DB756FD8C6581LL,0xD69B45C761B8CE22LL,0L,(-1L)},{0L,0xE46552DED1456B86LL,0L,(-10L)},{0x992DB756FD8C6581LL,0x6B3883FAA058A13CLL,0x6B3883FAA058A13CLL,0x992DB756FD8C6581LL},{0xD69B45C761B8CE22LL,0L,1L,0x2A6F944DCD6A9B03LL},{1L,0x2A6F944DCD6A9B03LL,(-1L),0xE46552DED1456B86LL},{0x07E294B58FE4DE5ALL,(-2L),0x06E82A74DB503B5BLL,0xE46552DED1456B86LL},{0xF0E77DA19AE86A67LL,0x2A6F944DCD6A9B03LL,0x07E294B58FE4DE5ALL,0x2A6F944DCD6A9B03LL}},{{0x55D4826422F8DC70LL,0L,0L,0x992DB756FD8C6581LL},{(-1L),0x6B3883FAA058A13CLL,0xF0E77DA19AE86A67LL,(-10L)},{(-2L),0xE46552DED1456B86LL,1L,0L},{(-1L),0x06E82A74DB503B5BLL,0L,0L},{0L,0L,(-2L),0x6B3883FAA058A13CLL},{0xD69B45C761B8CE22LL,(-2L),0x992DB756FD8C6581LL,0x55D4826422F8DC70LL},{0L,0L,0xF0E77DA19AE86A67LL,0x992DB756FD8C6581LL}},{{0x992DB756FD8C6581LL,0L,0L,0x55D4826422F8DC70LL},{0L,(-2L),0L,0x6B3883FAA058A13CLL},{0x06E82A74DB503B5BLL,0L,(-10L),0L},{0L,0x06E82A74DB503B5BLL,0x6B3883FAA058A13CLL,0L},{0x55D4826422F8DC70LL,0x2A6F944DCD6A9B03LL,0x6B3883FAA058A13CLL,1L},{0L,(-10L),(-10L),0L},{0x06E82A74DB503B5BLL,0x55D4826422F8DC70LL,0L,0x07E294B58FE4DE5ALL}},{{0L,0x07E294B58FE4DE5ALL,0L,0x2A6F944DCD6A9B03LL},{0x992DB756FD8C6581LL,(-1L),0xF0E77DA19AE86A67LL,0x2A6F944DCD6A9B03LL},{0L,0x07E294B58FE4DE5ALL,0x992DB756FD8C6581LL,0x07E294B58FE4DE5ALL},{0xD69B45C761B8CE22LL,0x55D4826422F8DC70LL,(-2L),0L},{0L,(-10L),0L,1L},{(-1L),0x2A6F944DCD6A9B03LL,1L,0L},{(-1L),0x06E82A74DB503B5BLL,0L,0L}},{{0L,0L,(-2L),0x6B3883FAA058A13CLL},{0xD69B45C761B8CE22LL,(-2L),0x992DB756FD8C6581LL,0x55D4826422F8DC70LL},{0L,0L,0xF0E77DA19AE86A67LL,0x992DB756FD8C6581LL},{0x992DB756FD8C6581LL,0L,0L,0x55D4826422F8DC70LL},{0L,(-2L),0L,0x6B3883FAA058A13CLL},{0x06E82A74DB503B5BLL,0L,0x06E82A74DB503B5BLL,1L},{0x55D4826422F8DC70LL,0x6B3883FAA058A13CLL,0xD69B45C761B8CE22LL,0x07E294B58FE4DE5ALL}},{{0x992DB756FD8C6581LL,(-2L),0xD69B45C761B8CE22LL,0xF0E77DA19AE86A67LL},{0x55D4826422F8DC70LL,0x06E82A74DB503B5BLL,0x06E82A74DB503B5BLL,0x55D4826422F8DC70LL},{0x6B3883FAA058A13CLL,0x992DB756FD8C6581LL,0L,(-1L)},{0L,(-1L),0x07E294B58FE4DE5ALL,(-2L)},{0L,0x2A6F944DCD6A9B03LL,(-10L),(-2L)},{1L,(-1L),0L,(-1L)},{0L,0x992DB756FD8C6581LL,0xE46552DED1456B86LL,0x55D4826422F8DC70LL}},{{0x07E294B58FE4DE5ALL,0x06E82A74DB503B5BLL,1L,0xF0E77DA19AE86A67LL},{0x2A6F944DCD6A9B03LL,(-2L),0xF0E77DA19AE86A67LL,0x07E294B58FE4DE5ALL},{0x2A6F944DCD6A9B03LL,0x6B3883FAA058A13CLL,1L,1L},{0x07E294B58FE4DE5ALL,0x07E294B58FE4DE5ALL,0xE46552DED1456B86LL,0xD69B45C761B8CE22LL},{0L,0xE46552DED1456B86LL,0L,0x992DB756FD8C6581LL},{1L,0L,(-10L),0L},{0L,0L,0x07E294B58FE4DE5ALL,0x992DB756FD8C6581LL}}};
    int l_78 = 0xB3A3C3A8L;
    unsigned long long *l_163 = &g_71;
    unsigned long long ** const l_162 = &l_163;
    unsigned long long ** const *l_161 = &l_162;
    short l_168 = 0x5396L;
    int l_198 = (-1L);
    long long l_357 = 1L;
    const unsigned *l_507 = &g_508;
    int ** const l_543[5] = {&g_185,&g_185,&g_185,&g_185,&g_185};
    const int *l_552 = (void*)0;
    int *l_585 = (void*)0;
    long long *l_594 = &g_411;
    long long **l_593 = &l_594;
    char l_662 = 0x68L;
    unsigned long long l_674 = 0xD772B57E3AB2A21DLL;
    unsigned ****l_754 = &g_753;
    const int **l_808 = &g_86;
    int *l_813[1];
    unsigned char l_814 = 0x56L;
    char l_815[10][7] = {{0L,0L,0xD4L,0L,0L,0xD4L,0L},{0L,0xC1L,0xC1L,0L,0xC1L,0xC1L,0L},{0xC1L,0L,0xC1L,0xC1L,0L,0xC1L,0xC1L},{0L,0L,0xD4L,0L,0L,0xD4L,0L},{0xC1L,0xD4L,0xD4L,0xC1L,0xD4L,0xD4L,0xC1L},{0xD4L,0xC1L,0xD4L,0xD4L,0xC1L,0xD4L,0xD4L},{0xC1L,0xC1L,0L,0xC1L,0xC1L,0L,0xC1L},{0xC1L,0xD4L,0xD4L,0xC1L,0xD4L,0xD4L,0xC1L},{0xD4L,0xC1L,0xD4L,0xD4L,0xC1L,0xD4L,0xD4L},{0xC1L,0xC1L,0L,0xC1L,0xC1L,0L,0xC1L}};
    const short l_820[4][2][10] = {{{0x900CL,5L,5L,0x900CL,(-1L),3L,(-6L),5L,3L,3L},{3L,(-6L),5L,3L,3L,3L,5L,(-6L),3L,(-1L)}},{{0x900CL,(-6L),0x0803L,0x900CL,3L,(-1L),(-6L),(-6L),(-1L),3L},{0x900CL,5L,5L,0x900CL,(-1L),3L,(-6L),5L,3L,3L}},{{3L,(-6L),5L,3L,3L,3L,5L,(-6L),3L,(-1L)},{0x900CL,(-6L),0x0803L,3L,(-6L),(-1L),0L,0L,(-1L),(-6L)}},{{3L,(-5L),(-5L),3L,5L,(-1L),0L,(-5L),(-1L),(-6L)},{(-1L),0L,(-5L),(-1L),(-6L),(-1L),(-5L),0L,(-1L),5L}}};
    int l_823 = 0x0CA7438CL;
    int *l_824 = &l_78;
    short l_827 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_813[i] = &l_198;
    if (g_32)
    {
        short l_62 = (-6L);
        unsigned long long *l_63 = &g_64;
        unsigned long long *l_70 = &g_64;
        unsigned long long **l_69 = &l_70;
        unsigned char *l_72 = (void*)0;
        unsigned char *l_73 = &g_74[1];
        int l_75 = 0xEF6E88F3L;
        unsigned *l_76[2];
        int l_186 = (-1L);
        int *l_187[1];
        unsigned long long l_221 = 0x76C4A1A27E34FB19LL;
        unsigned long long **l_276 = &l_163;
        unsigned char l_307[1];
        int *l_340[8] = {&l_186,&l_186,&l_186,&l_186,&l_186,&l_186,&l_186,&l_186};
        unsigned short * const l_356 = &g_245;
        const unsigned short l_376 = 65535UL;
        char * const l_404 = &g_92;
        char * const *l_403 = &l_404;
        long long **l_565 = (void*)0;
        int l_658 = 7L;
        int i;
        for (i = 0; i < 2; i++)
            l_76[i] = &g_77;
        for (i = 0; i < 1; i++)
            l_187[i] = &g_30;
        for (i = 0; i < 1; i++)
            l_307[i] = 0x8CL;
        if (func_43(l_47[4][4][0], func_48((l_78 = (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_47[2][1][2], (l_75 = ((safe_sub_func_uint32_t_u_u((((*l_73) = (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(((*l_63) = (l_47[3][4][3] < l_62)))) && (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_63 == ((*l_69) = l_63)), l_47[5][2][0])), l_62))), (g_71 = g_20[1][0])))) & 0UL), l_62)) && (-3L))))), g_32))), l_62, &g_32, g_32), &g_32))
        {
            long long l_139 = (-6L);
            int l_144 = (-1L);
            int *l_150 = (void*)0;
            if ((*p_42))
            {
                unsigned long long ***l_141 = &l_69;
                unsigned long long **l_143 = &l_63;
                unsigned long long ***l_142 = &l_143;
                int *l_145[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_145[i] = &g_30;
                g_30 = ((safe_sub_func_int16_t_s_s(1L, (l_139 >= (safe_unary_minus_func_uint16_t_u(l_78))))) == 0x44L);
                (*l_142) = ((*l_141) = &l_70);

                ;
                g_30 = l_144;
            }
            else
            {
                int *l_148[9];
                int **l_151 = &l_150;
                int **l_152 = &l_148[2];
                unsigned *l_153 = &g_154;
                unsigned char *l_155 = &g_156;
                int i;
                for (i = 0; i < 9; i++)
                    l_148[i] = &l_75;
                for (g_30 = (-29); (g_30 < 22); g_30 = safe_add_func_uint64_t_u_u(g_30, 6))
                {
                    int **l_149 = &l_148[4];
                    l_150 = ((*l_149) = l_148[4]);

                    ;
                }

                ;
                (*l_152) = ((*l_151) = &g_32);


                ;
                (*l_151) = func_48((((*l_151) = ((*l_152) = &g_30)) != (void*)0), l_47[4][0][3], &g_32, g_92);


                ;
                g_30 = (*p_42);
            }

            ;
            return l_78;
        }
        else
        {
            int *l_169 = &l_78;
            int l_199 = 0L;
            int l_200 = (-10L);
            if ((func_43((g_74[1] == ((*l_169) = (l_75 != ((g_32 | ((void*)0 == l_161)) == (!(safe_add_func_uint64_t_u_u((g_71 ^ 7L), (l_62 && ((safe_mod_func_uint16_t_u_u(0x4FFBL, l_168)) <= 0x1890F00BL))))))))), p_42, p_42) | (*g_86)))
            {
                short l_173 = (-7L);
                int *l_179 = &g_32;
                if ((safe_div_func_uint32_t_u_u((0x761F4025DD512011LL && ((***l_161) = (!(*l_169)))), func_43(g_85[1], (g_172[2][4][1] = &g_32), l_169))))
                {
                    long long l_174 = 0L;
                    (*l_169) = l_173;
                    return l_174;
                }
                else
                {
                    int **l_188 = (void*)0;
                    int **l_189 = &g_172[2][4][1];
                    for (l_75 = 0; (l_75 != (-8)); l_75--)
                    {
                        char *l_180 = (void*)0;
                        char *l_181 = (void*)0;
                        int **l_183 = &g_172[7][8][1];
                        int **l_184[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_184[i] = &l_169;
                        (*l_169) = ((g_85[2] || l_75) >= (safe_add_func_int8_t_s_s(func_43(g_83[2][6][0], l_179, &g_30), (((g_182 = l_78) && ((g_85[0] > (0UL > 9UL)) >= g_20[1][0])) <= g_83[2][6][0]))));
                        l_186 = ((*l_169) = func_43(g_64, p_42, (g_185 = ((*l_183) = &g_30))));
                    }
                    (*l_189) = l_187[0];
                    (*g_185) = ((*l_169) = (*p_42));
                }
            }
            else
            {
                l_200 = (l_199 = (g_20[0][3] > (~(((l_198 = (((*g_185) = ((*l_169) = (safe_rshift_func_int8_t_s_s(l_47[5][5][3], g_71)))) >= (safe_sub_func_int8_t_s_s((((&g_64 == ((*l_162) = &g_64)) >= 1L) < (*p_42)), (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_168, (l_168 && 0xE3700449L))), g_85[2])))))) && l_168) != (*p_42)))));

                ;
            }

            ;
        }


        ;
        ;
        for (g_71 = 0; (g_71 <= 1); g_71 += 1)
        {
            unsigned short l_220 = 65528UL;
            int **l_223 = &g_172[2][4][1];
            const unsigned *l_236[4] = {&g_154,&g_154,&g_154,&g_154};
            const unsigned **l_235 = &l_236[1];
            int i;
            for (l_75 = 1; (l_75 >= 0); l_75 -= 1)
            {
                char *l_202 = &g_92;
                char **l_201 = &l_202;
                char *l_203[5][8] = {{&g_92,&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,(void*)0,(void*)0,(void*)0,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92}};
                char **l_204 = (void*)0;
                char **l_205 = (void*)0;
                char **l_206 = &l_203[3][1];
                int *l_222 = &l_198;
                int i, j;
                (*l_222) = ((((*l_201) = &g_92) == ((*l_206) = l_203[3][1])) || (safe_rshift_func_int8_t_s_u(((0xEAFE74C3FBF1EE3ALL == (safe_rshift_func_int16_t_s_s(func_43((!((safe_lshift_func_uint8_t_u_u((g_215 == g_217), g_74[l_75])) <= ((((((*l_69) == (void*)0) && ((safe_mul_func_uint8_t_u_u(l_220, 0x3FL)) <= g_74[l_75])) || l_221) && g_20[1][0]) >= g_85[2]))), l_222, p_42), (*l_222)))) >= (*p_42)), 2)));
            }
            (*l_223) = p_42;
            for (g_77 = 0; (g_77 <= 1); g_77 += 1)
            {
                int *l_252 = &l_186;
                unsigned ** const l_259 = &g_247;
                unsigned ***l_260 = &g_246;
                for (g_154 = 0; (g_154 <= 1); g_154 += 1)
                {
                    int l_232 = 0x50133C60L;
                    long long l_237 = (-4L);
                    l_232 = (safe_rshift_func_uint16_t_u_s(func_43(g_83[2][3][2], p_42, &g_30), (safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s(g_74[0], (safe_lshift_func_uint8_t_u_u(l_232, 7)))), (g_71 || g_20[1][0])))));
                    for (l_75 = 1; (l_75 >= 0); l_75 -= 1)
                    {
                        const unsigned *l_234[5];
                        const unsigned **l_233 = &l_234[2];
                        unsigned *l_240 = &g_241;
                        unsigned *l_242 = (void*)0;
                        unsigned *l_243 = &g_244;
                        unsigned ***l_248 = (void*)0;
                        unsigned **l_250[9][1] = {{&g_247},{&l_240},{&g_247},{&l_240},{&g_247},{&l_240},{&g_247},{&l_240},{&g_247}};
                        unsigned ***l_249 = &l_250[2][0];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_234[i] = &g_154;
                        l_235 = l_233;

                        ;
                        if (l_237)
                            continue;

                        l_198 = ((((*g_185) = ((safe_sub_func_int8_t_s_s(func_43((g_245 = ((*l_243) = ((*l_240) = func_43(l_198, &g_32, &l_232)))), p_42, &l_232), (g_246 == ((*l_249) = &g_247)))) & 4294967295UL)) || (*p_42)) | l_237);
                        (*l_223) = &l_75;
                    }
                }
                for (g_92 = 0; (g_92 <= 1); g_92 += 1)
                {
                    const long long l_251 = 0x5586E65512604FD5LL;
                    (*g_185) = l_251;
                    l_252 = &g_32;

                    ;
                }

                ;
                (*g_185) = (safe_mod_func_uint32_t_u_u((+(safe_mul_func_int16_t_s_s(g_77, (((safe_mod_func_int64_t_s_s((l_259 == ((*l_260) = &g_247)), ((0x8D0EL || g_83[1][1][2]) && (safe_lshift_func_uint8_t_u_u((0xA105L != (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(l_198, (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_182, (g_85[0] != l_198))) && (*l_252)), g_85[2])))) & (*l_252)), 9))), g_182))))) != g_85[0]) & l_168)))), l_47[3][6][0]));
                (*g_185) = (*g_185);
            }


        }


        if ((l_47[4][4][0] && 4294967295UL))
        {
            unsigned char l_292 = 0UL;
            if ((*p_42))
            {
                short l_271 = (-1L);
                int l_293 = 4L;
                for (l_186 = 0; (l_186 <= 3); l_186 += 1)
                {
                    char l_294 = 4L;
                    l_271 = ((void*)0 != &g_77);
                    for (l_75 = 1; (l_75 >= 0); l_75 -= 1)
                    {
                        unsigned long long **l_277 = &l_70;
                        unsigned long long ***l_278[10] = {&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69};
                        short *l_285 = &l_271;
                        unsigned short *l_288 = &g_245;
                        int l_289[9] = {0x240FB07EL,0x75AF26B0L,0x240FB07EL,0x240FB07EL,0x75AF26B0L,0x240FB07EL,0x240FB07EL,0x75AF26B0L,0x240FB07EL};
                        unsigned short l_290[6][4] = {{0UL,1UL,0UL,0x28F5L},{0x0287L,0xFF8DL,0x54FCL,0xFF8DL},{0xFF8DL,0UL,0UL,0xFF8DL},{0UL,0xFF8DL,0x28F5L,0x28F5L},{1UL,1UL,0x54FCL,0x0287L},{1UL,0UL,0x28F5L,1UL}};
                        long long *l_291 = &l_47[4][4][0];
                        int i, j;
                        (*g_185) = ((safe_div_func_uint64_t_u_u((l_293 = (l_292 = (safe_mul_func_int8_t_s_s(((*p_42) ^ l_78), (((((**l_69) = (l_276 != (g_279 = l_277))) <= (+(((*l_291) = (9L | (safe_sub_func_int32_t_s_s(((&g_84 != &p_42) != ((safe_lshift_func_int16_t_s_s(((*l_285) = l_271), (((*l_288) = ((safe_add_func_uint16_t_u_u(4UL, 0xD8E9L)) >= (*p_42))) != (-1L)))) & l_289[5])), l_290[2][0])))) == l_168))) & g_74[1]) >= l_198))))), l_294)) <= g_241);

                        ;
                        (*g_185) = (safe_sub_func_int32_t_s_s(func_43(((*g_247) = 9UL), func_48(func_43((((safe_add_func_int8_t_s_s(l_289[5], ((safe_lshift_func_int8_t_s_u(l_292, (safe_div_func_int32_t_s_s((*p_42), (safe_div_func_uint64_t_u_u(0x044646C5116D4348LL, l_289[7])))))) ^ (safe_add_func_int64_t_s_s(l_198, (l_294 > 0xD4L)))))) < 0x11AB2A09282D32F5LL) != l_293), &g_30, &g_30), l_307[0], &g_32, g_20[5][2]), &g_32), 2L));
                    }
                }

                ;
            }
            else
            {
                return g_83[2][6][0];


            }

            ;
        }
        else
        {
            unsigned char l_308 = 0UL;
            unsigned l_309 = 0x9089C4C4L;
            char *l_323[6][4] = {{&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92}};
            unsigned short l_326 = 1UL;
            unsigned long long l_338 = 0UL;
            int *l_339 = &l_78;
            unsigned long long ***l_435 = &g_279;
            long long *l_439 = &l_47[4][4][0];
            long long * const *l_438 = &l_439;
            unsigned char *l_509 = &l_307[0];
            int i, j;
            if (((*g_185) = (((**g_279) & ((l_308 = 4294967295UL) > 1UL)) < 0x64FB6539L)))
            {
                unsigned l_316 = 0x8DC62426L;
                long long *l_317 = &l_47[4][4][0];
                int **l_318 = &g_172[9][9][0];
                (*l_318) = func_48(l_168, l_309, &g_32, ((safe_lshift_func_int16_t_s_s((((void*)0 == &l_168) ^ ((*l_317) = (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((*g_185) >= (-1L)), 5UL)), l_316)))), 9)) & l_198));
                for (g_30 = 29; (g_30 != (-15)); --g_30)
                {
                    g_327[6][2][0] = (safe_div_func_int32_t_s_s(((void*)0 != l_323[1][3]), (l_326 = (safe_lshift_func_uint8_t_u_s((p_42 != p_42), 3)))));
                    for (g_244 = 0; (g_244 != 7); g_244 = safe_add_func_uint16_t_u_u(g_244, 6))
                    {
                        int *l_330 = &g_32;
                        int l_331 = 0L;
                        (*l_318) = l_330;
                        l_331 = (*p_42);
                        (*l_318) = (void*)0;
                    }
                }
                for (l_316 = 0; (l_316 > 54); l_316++)
                {
                    int l_355 = 0x46DE6448L;
                    if ((func_43(((**g_246) = ((safe_mul_func_uint16_t_u_u(0x453CL, ((l_338 = (safe_rshift_func_uint8_t_u_u(g_30, 5))) && func_43(func_43(l_198, l_339, &g_32), &g_32, &g_32)))) ^ (-10L))), l_340[4], &l_198) > (*l_339)))
                    {
                        short *l_345 = &l_62;
                        int l_346 = 0x78A4FEAAL;
                        short *l_347 = (void*)0;
                        short *l_348 = &l_168;
                        unsigned char **l_362 = &l_72;
                        (*g_185) = (((*l_348) = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 == &g_246), ((*l_345) = g_83[1][3][1]))), l_346))) != ((*l_356) = (safe_sub_func_int64_t_s_s(((l_346 && g_83[2][6][0]) == (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_355 && ((!(((*l_339) = (l_356 == &g_245)) | l_346)) || l_198)), l_198)), l_47[4][4][0]))), l_346))));
                        (*l_318) = func_48(l_357, l_346, p_42, ((+func_43((**g_246), &g_30, &l_198)) && l_346));
                        (*l_318) = p_42;
                        (*l_339) = (safe_sub_func_int16_t_s_s(0x453DL, (safe_rshift_func_int16_t_s_s((((&g_74[1] != ((*l_362) = &l_308)) && l_346) != ((g_92 = (*l_339)) && ((*l_73) = l_168))), (2L >= l_355)))));

                        ;
                    }
                    else
                    {
                        long long **l_363[2][5] = {{&l_317,&l_317,&l_317,&l_317,&l_317},{(void*)0,&l_317,(void*)0,&l_317,(void*)0}};
                        long long ***l_364 = &l_363[1][3];
                        int i, j;
                        (*l_318) = (*l_318);
                        (*l_364) = l_363[1][3];
                    }
                }

                ;
                for (g_92 = 1; (g_92 >= 0); g_92 -= 1)
                {
                    unsigned l_365 = 4294967295UL;
                    for (l_326 = 0; (l_326 <= 1); l_326 += 1)
                    {
                        volatile char **l_369 = &g_367;
                        volatile char ***l_368 = &l_369;
                        int i;
                        l_365 = ((*g_185) = ((*l_339) = ((void*)0 != &l_323[1][3])));
                        (*l_368) = g_366;
                        (*l_339) = (!((*g_185) = (0x0A6E4B32C98B7927LL >= ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0x18L, (((safe_mul_func_int8_t_s_s(func_43(g_74[l_326], (*l_318), &g_32), g_74[l_326])) == ((0xA99FCA559DDD172DLL == (~((l_376 && g_245) & 1UL))) != g_327[2][7][2])) >= l_365))), g_64)) & g_327[6][2][0]))));
                    }
                }
            }
            else
            {
                const char l_389[9][4][6] = {{{(-6L),0x34L,0L,0x96L,0x5FL,(-5L)},{0L,1L,(-6L),0x34L,0xEDL,(-5L)},{0x4CL,0L,0L,0xE7L,0x40L,0x5FL},{0xEDL,0L,0x96L,0x46L,(-6L),(-1L)}},{{(-1L),(-6L),1L,(-6L),(-10L),0x2FL},{(-6L),6L,8L,0L,0x34L,0x9EL},{0x35L,0x40L,0x4DL,0L,1L,1L},{0L,0x8AL,0x8AL,0L,0L,0L}},{{0x2FL,(-1L),1L,0xB8L,0x0FL,0x7FL},{0L,0xE7L,0L,(-10L),0x0FL,0x46L},{(-6L),(-1L),0xFAL,1L,0L,(-5L)},{7L,0x8AL,(-6L),0L,1L,0x5CL}},{{(-6L),0x40L,0x34L,0xFAL,0x34L,0L},{(-7L),6L,0x0FL,0xC6L,(-10L),0x40L},{0L,0L,(-1L),(-7L),(-1L),(-7L)},{0xEDL,0L,0xEDL,8L,1L,6L}},{{0L,0xFAL,0x4CL,0xD2L,3L,0x35L},{0x46L,1L,0L,0xD2L,(-1L),8L},{0L,0x04L,(-6L),8L,0x9EL,0x0FL},{0xEDL,0x2FL,0x5CL,(-7L),0x04L,0xB8L}},{{0L,0x9EL,0x04L,0L,(-1L),0L},{(-6L),(-5L),0xDAL,0L,0L,0L},{8L,0x96L,0L,0x35L,0x35L,0L},{0x34L,0x34L,6L,(-6L),3L,1L}},{{7L,1L,0x9EL,0L,0x5CL,6L},{0xEDL,7L,0x9EL,0xC6L,0x34L,1L},{0x4DL,0xC6L,6L,0L,0xD2L,0L},{0L,0xD2L,0L,0L,0x0FL,0L}},{{(-10L),0x46L,0xDAL,0xB8L,0x40L,0L},{0x40L,(-6L),0x04L,8L,0xFAL,0xC6L},{0x04L,0x4CL,(-6L),0x5CL,(-6L),0x4CL},{0x9EL,(-1L),0x40L,(-10L),0xC6L,0x0FL}},{{(-1L),0x35L,0xEDL,(-6L),0x4DL,(-10L)},{3L,0x35L,0x5FL,0x2FL,0xC6L,0x7FL},{1L,(-1L),0x5CL,0x4DL,(-6L),(-6L)},{(-1L),0x4CL,0x34L,0xD2L,0xFAL,(-1L)}}};
                int *l_426 = &l_75;
                unsigned long long *l_462[7] = {&g_64,&g_64,&l_221,&g_64,&g_64,&l_221,&g_64};
                int *l_478 = &l_186;
                int i, j, k;
                for (g_244 = (-17); (g_244 <= 37); ++g_244)
                {
                    unsigned l_387[4][2][7] = {{{18446744073709551614UL,0x8CE2EFB7L,18446744073709551615UL,18446744073709551613UL,3UL,18446744073709551613UL,18446744073709551615UL},{0x838F8EF5L,0x838F8EF5L,0UL,0xD862755CL,1UL,6UL,0x195AE9B3L}},{{18446744073709551614UL,18446744073709551613UL,0x9A831C4CL,0x9A831C4CL,18446744073709551613UL,18446744073709551614UL,3UL},{18446744073709551612UL,0UL,18446744073709551615UL,0xD1249C85L,1UL,1UL,0xD1249C85L}},{{0xB8D09D46L,1UL,0xB8D09D46L,0x772E995CL,3UL,0x5693799BL,18446744073709551614UL},{18446744073709551615UL,0UL,18446744073709551612UL,6UL,18446744073709551612UL,0UL,18446744073709551615UL}},{{0x9A831C4CL,18446744073709551613UL,18446744073709551614UL,3UL,18446744073709551608UL,0x5693799BL,18446744073709551608UL},{0UL,0x838F8EF5L,0x838F8EF5L,0UL,0xD862755CL,1UL,6UL}}};
                    int **l_390 = (void*)0;
                    int **l_391 = &l_340[5];
                    const int **l_392 = &g_84;
                    int i, j, k;
                    for (l_357 = 24; (l_357 > (-4)); --l_357)
                    {
                        unsigned l_381[6][3] = {{0x5EFCAC26L,0x5EFCAC26L,0xAF7ECD43L},{1UL,0xAF7ECD43L,0xAF7ECD43L},{0xAF7ECD43L,0xDD203B5EL,0UL},{1UL,0xDD203B5EL,1UL},{0x5EFCAC26L,0xAF7ECD43L,0UL},{0x5EFCAC26L,0x5EFCAC26L,0xAF7ECD43L}};
                        unsigned short *l_382 = (void*)0;
                        short *l_388 = &g_182;
                        int i, j;
                        (*g_185) = (((**l_276) = (l_381[1][0] == ((g_77 = (l_382 != (void*)0)) <= ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-1L), 6)), (0x48EEB5581C0DE0B7LL > func_43((l_387[1][0][5] & ((*l_388) = (((g_83[0][6][0] ^ l_198) != l_78) == 0x3B48L))), &g_30, &g_32)))) || (-1L))))) | l_389[1][0][4]);
                    }
                    (*l_391) = p_42;
                    (*l_392) = &g_85[2];

                    ;
                }



                if ((*p_42))
                {
                    for (g_245 = 0; (g_245 < 21); g_245 = safe_add_func_uint8_t_u_u(g_245, 1))
                    {
                        const long long ***l_396 = &g_395;
                        int **l_397 = (void*)0;
                        int **l_398[10] = {&l_339,&g_185,&l_339,&g_185,&l_339,&g_185,&l_339,&g_185,&l_339,&g_185};
                        int i;
                        (*g_185) = (((*l_396) = g_395) != (void*)0);
                        p_42 = p_42;
                        return l_389[1][0][4];


                    }
                    return g_244;


                }
                else
                {
                    int **l_399 = &l_340[7];
                    int l_406 = 0x083281BDL;
                    const int **l_416 = &g_84;
                    (*l_399) = (void*)0;


                    (*l_339) = (safe_unary_minus_func_int32_t_s((*g_86)));
                    for (g_77 = 0; (g_77 == 51); g_77 = safe_add_func_int16_t_s_s(g_77, 1))
                    {
                        char * const **l_405 = &l_403;
                        int l_414 = 6L;
                        const int l_415[6][9] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL}};
                        int i, j;
                        (*l_405) = l_403;
                        (*l_399) = &g_32;
                        (*g_185) = (*p_42);
                        (*l_399) = func_48(l_406, (safe_rshift_func_uint8_t_u_s(g_83[2][6][0], (safe_sub_func_int8_t_s_s(((l_389[7][0][2] & (g_411 = func_43((*g_247), p_42, ((*l_399) = &g_30)))) || (safe_mod_func_uint32_t_u_u((l_414 = (((void*)0 == &g_182) > l_414)), (*l_339)))), l_389[7][3][4])))), p_42, l_415[0][5]);


                    }


                    (*l_416) = &g_83[2][6][0];

                    ;
                }

                ;

                for (l_309 = 0; (l_309 <= 0); l_309 += 1)
                {
                    unsigned l_420 = 0UL;
                    for (l_308 = 0; (l_308 <= 0); l_308 += 1)
                    {
                        unsigned l_417[4] = {0x214D1C14L,0x214D1C14L,0x214D1C14L,0x214D1C14L};
                        char *l_425[4][10][6] = {{{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,(void*)0,(void*)0,(void*)0},{&g_92,(void*)0,&g_92,(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0},{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92},{(void*)0,&g_92,(void*)0,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0},{&g_92,&g_92,(void*)0,&g_92,&g_92,&g_92}},{{&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0},{&g_92,(void*)0,&g_92,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,(void*)0,(void*)0,&g_92},{&g_92,(void*)0,&g_92,(void*)0,&g_92,(void*)0},{&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0},{&g_92,&g_92,&g_92,&g_92,(void*)0,(void*)0},{(void*)0,&g_92,(void*)0,&g_92,&g_92,&g_92},{&g_92,&g_92,(void*)0,&g_92,&g_92,&g_92}},{{&g_92,&g_92,(void*)0,&g_92,(void*)0,(void*)0},{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92,(void*)0,&g_92,(void*)0},{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92,&g_92,(void*)0,(void*)0},{&g_92,(void*)0,&g_92,&g_92,(void*)0,(void*)0},{&g_92,&g_92,(void*)0,&g_92,&g_92,&g_92},{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,(void*)0,&g_92,&g_92,&g_92}},{{(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92,&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,(void*)0,&g_92,(void*)0,&g_92},{&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92},{&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92,&g_92,(void*)0,(void*)0},{&g_92,(void*)0,&g_92,&g_92,&g_92,&g_92}}};
                        char **l_424 = &l_425[2][2][4];
                        int i, j, k;
                        (*g_185) = func_43(l_417[2], l_187[l_308], l_187[l_308]);
                        (*l_339) = ((safe_mul_func_uint8_t_u_u(l_47[6][5][2], func_43(l_420, &g_32, func_48((5UL && (safe_rshift_func_uint8_t_u_s(l_420, (g_154 == l_420)))), (safe_unary_minus_func_int32_t_s((((l_323[1][3] == ((*l_424) = l_73)) ^ 1L) & (*l_339)))), l_426, l_357)))) & 0xF517L);

                        ;

                    }
                    for (l_75 = 0; (l_75 >= 0); l_75 -= 1)
                    {
                        int **l_427 = &l_340[4];
                        short *l_432 = &l_168;
                        (*l_427) = (void*)0;
                        (*g_185) = (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((-9L), ((*l_432) = l_78))), (l_420 && (func_43((safe_mod_func_int8_t_s_s(((l_435 != &g_217) | ((*g_185) = ((*g_86) != (safe_div_func_uint64_t_u_u(((void*)0 == l_438), 0x45681259CDCF29FALL))))), (*l_426))), &g_32, p_42) > l_357))));
                        if (l_357)
                            break;
                    }
                }


                ;
                for (g_154 = 0; (g_154 <= 1); g_154 += 1)
                {
                    const int l_459 = 0x733C2BF1L;
                    int l_479 = (-1L);
                    for (g_77 = 0; (g_77 <= 7); g_77 += 1)
                    {
                        unsigned *l_458 = &g_241;
                        unsigned char **l_471 = &l_73;
                        int i;
                        l_340[g_77] = func_48((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u(0x029FL, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(func_43(((*l_458) = (func_43((+(safe_rshift_func_int8_t_s_s(func_43(g_74[g_154], func_48(g_74[g_154], ((safe_sub_func_int32_t_s_s((*p_42), (*l_426))) || (*l_426)), &g_32, l_168), &g_32), 1))), &g_32, p_42) & 0xD7E0083D8C6B96F1LL)), p_42, l_426), (*l_339))), g_154)))), l_47[1][4][0])), (*l_339))) == (*l_426)), (*l_426))), l_168)), (*l_339), p_42, l_459);


                        ;
                        (*l_339) = ((*l_426) = l_198);
                        (*l_339) = ((func_43((safe_div_func_int64_t_s_s(((void*)0 != l_462[3]), func_43((safe_div_func_uint64_t_u_u(func_43((safe_rshift_func_int16_t_s_s(g_182, ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((*l_471) = &g_74[1]) != &l_307[0]), l_47[6][3][2])), 6)) != (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((0x0734E14868E69F4ELL >= g_92), (safe_lshift_func_int8_t_s_u(l_459, 0)))), 8UL))))), p_42, l_478), g_182)), &g_32, &g_32))), p_42, &g_32) | l_459) | (*g_86));
                    }
                    if ((*p_42))
                        continue;
                    (*g_185) = ((*l_426) = l_47[4][4][0]);
                    for (l_78 = 0; (l_78 <= 3); l_78 += 1)
                    {
                        unsigned short l_486 = 0xA4CCL;
                        int *l_487 = (void*)0;
                        unsigned short *l_494 = (void*)0;
                        unsigned short *l_495[6] = {&l_326,&l_486,&l_326,&l_326,&l_486,&l_326};
                        unsigned short *l_496 = (void*)0;
                        unsigned short *l_497[1][7][9] = {{{&l_486,(void*)0,(void*)0,(void*)0,(void*)0,&l_486,&l_326,&l_326,(void*)0},{&l_326,&l_326,&l_326,&l_486,&l_486,&l_326,&l_326,&l_326,&l_326},{(void*)0,(void*)0,&l_486,&l_326,(void*)0,(void*)0,&l_326,&l_486,(void*)0},{&l_486,&l_326,&l_486,&l_326,&g_245,&l_486,&l_486,&g_245,&l_326},{&g_245,(void*)0,&g_245,&l_486,&l_326,(void*)0,&l_486,&l_486,(void*)0},{&l_486,&l_326,&l_486,&l_326,&l_486,&l_326,&g_245,&l_486,&l_486},{&l_486,(void*)0,(void*)0,&l_486,(void*)0,(void*)0,&l_486,&l_326,(void*)0}}};
                        unsigned short *l_498 = &l_326;
                        int **l_499 = &l_478;
                        int i, j, k;
                        l_479 = 1L;
                        (*l_499) = &g_32;

                        ;
                        (*l_499) = l_339;

                        ;
                    }
                }


                ;
            }

            ;

            ;

            for (l_78 = 22; (l_78 < (-30)); l_78 = safe_sub_func_int32_t_s_s(l_78, 7))
            {
                int **l_502 = &l_339;
                (*l_502) = p_42;

                ;
            }

            ;
            (*g_185) = (((void*)0 != &l_162) & (safe_rshift_func_int8_t_s_s(func_43(((**g_246) = (safe_sub_func_uint32_t_u_u((+0UL), l_198))), &l_198, func_48(((l_507 = (void*)0) != (l_76[1] = &l_309)), ((*l_509) = ((*l_73) = l_47[4][4][0])), p_42, l_47[4][4][0])), g_327[6][2][0])));



            ;
            ;
        }



        ;

        ;
        if ((*g_86))
        {
            short l_538 = 1L;
            const int *l_541 = (void*)0;
            int *l_602 = &g_32;
            int l_633 = (-1L);
            if (((0xFD01L == g_508) | 0xF8L))
            {
                const int **l_510 = &g_84;
                (*l_510) = &g_85[0];

                ;
                (*g_185) = (((((safe_add_func_int16_t_s_s(l_168, (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(1L, (safe_mod_func_int8_t_s_s((+((func_43((**l_510), &l_186, &l_78) == 4294967290UL) & (((**l_510) || (**l_510)) < l_198))), (**l_510))))), (**l_510))))) | l_78) > 0x7EL) >= g_74[1]) & (**l_510));
            }
            else
            {
                volatile short ***l_522 = &g_519;
                (*l_522) = g_519;
            }


            for (l_168 = 16; (l_168 < 28); ++l_168)
            {
                char l_525[10][7] = {{5L,(-9L),0x7FL,0x7FL,(-9L),5L,(-5L)},{(-9L),0x63L,0x69L,0x9CL,0x9CL,0x69L,0x63L},{(-9L),(-5L),5L,(-9L),0x7FL,1L,5L},{0x69L,0x7FL,0x69L,1L,0x7FL,(-9L),(-9L)},{0x7FL,5L,0x63L,5L,0x7FL,0x63L,(-5L)},{(-5L),(-9L),1L,(-5L),1L,(-9L),(-5L)},{0x69L,(-5L),(-9L),1L,(-5L),1L,(-9L)},{(-5L),(-5L),0x63L,0x7FL,5L,0x63L,5L},{0x7FL,(-9L),(-9L),0x7FL,1L,0x69L,0x7FL},{0x69L,5L,1L,1L,5L,0x69L,(-9L)}};
                int * const l_547 = &l_186;
                int *l_569 = &g_30;
                const unsigned long long * const l_575 = &l_221;
                int i, j;
            }
            for (l_75 = 0; (l_75 <= 1); l_75 += 1)
            {
                short l_590[10];
                long long *l_592 = &l_357;
                long long **l_591 = &l_592;
                int i;
                for (i = 0; i < 10; i++)
                    l_590[i] = 0xF4D3L;
                (*g_185) = (*p_42);
                (*g_185) = 0xDD997315L;
                for (l_538 = 1; (l_538 >= 0); l_538 -= 1)
                {
                    return g_589;



                }
                l_590[6] = (*p_42);
                for (l_198 = 0; (l_198 <= 1); l_198 += 1)
                {
                    if ((*p_42))
                        break;
                    for (l_186 = 0; (l_186 <= 1); l_186 += 1)
                    {
                        int l_595 = (-7L);
                        int i, j, k;
                        l_595 = ((l_47[(l_75 + 5)][(l_75 + 5)][(l_198 + 2)] == l_47[(l_186 + 5)][(l_75 + 1)][(l_75 + 2)]) || (l_591 != l_593));
                        return g_85[2];



                    }
                }
            }
            if ((safe_mod_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s(g_245, func_43((*g_247), p_42, l_602))) ^ (!(((g_279 = &l_163) == (*l_161)) && (*l_602)))) && 0xE008L) & 0x1C8EF2555A16D29CLL), g_32)))
            {
                int l_608 = 0x9C39B503L;
                const unsigned long long ***l_613 = &g_215;
                const unsigned long long ****l_614[8] = {&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613};
                unsigned long long ***l_617 = &l_276;
                unsigned long long ****l_616 = &l_617;
                short *l_618 = &g_182;
                int l_643 = 0x7AB7FAC2L;
                int i;
                for (g_411 = 0; (g_411 <= 14); g_411 = safe_add_func_int64_t_s_s(g_411, 9))
                {
                    g_185 = p_42;

                    ;
                }

                ;
                g_172[2][4][1] = &g_32;
                if ((safe_div_func_int64_t_s_s(((((safe_unary_minus_func_uint16_t_u(((*l_356) = (g_327[0][4][0] || (*g_86))))) <= (l_608 > (safe_rshift_func_int16_t_s_u(((*l_618) = (safe_sub_func_uint32_t_u_u((~g_77), ((g_615 = l_613) == ((*l_616) = &g_279))))), 11)))) < (-1L)) != g_619), (safe_unary_minus_func_int8_t_s(g_327[6][2][0])))))
                {
                    l_633 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0xD0L, (((safe_mod_func_uint16_t_u_u(g_589, (safe_div_func_uint16_t_u_u(g_20[4][3], 0xB963L)))) > (safe_lshift_func_int16_t_s_u((((*l_594) = 0xED6B7D9FB5B13F03LL) > (*l_602)), 2))) == 7L))), g_241)) & (safe_mod_func_int32_t_s_s((l_608 == (-10L)), 1L)));
                }
                else
                {
                    unsigned l_636[6] = {0x7C123EA1L,0x041AD4BFL,0x7C123EA1L,0x7C123EA1L,0x041AD4BFL,0x7C123EA1L};
                    int i;
                    for (g_182 = (-8); (g_182 != (-1)); g_182++)
                    {
                        const char l_644 = 0x50L;
                        short *l_645 = &l_538;
                        unsigned *l_646 = &g_241;
                        p_42 = func_48(g_85[2], ((func_43(((*l_646) = ((**g_246) = ((((*l_404) = func_43(l_636[3], p_42, &l_608)) || (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((*l_602), ((*l_645) = (safe_rshift_func_int16_t_s_s((0L < (l_643 < (l_636[2] ^ 0x57L))), l_644))))), 11))) >= 6UL))), &g_32, p_42) | (-1L)) ^ (*g_280)), &g_32, (*l_602));


                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                p_42 = &l_186;

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            int l_659 = 0L;
            int *l_667 = &l_186;
            int *l_669 = (void*)0;
            int l_673[7][7] = {{8L,0x9C513906L,0x0CB393EDL,0x0CB393EDL,0x9C513906L,8L,0xDA2D072FL},{0x9C513906L,(-1L),0x0C330F69L,0x0CB393EDL,0x504FA382L,(-5L),0xE4360E00L},{(-7L),8L,0x204BF3CBL,0x972BED4DL,1L,0x972BED4DL,0x204BF3CBL},{(-1L),(-1L),0xDFE30651L,(-1L),0x0CB393EDL,0x0CAD9678L,0x204BF3CBL},{0xDA2D072FL,0x9C513906L,(-5L),1L,0x0C330F69L,0x0CAD9678L,0x0CAD9678L},{0x504FA382L,8L,(-1L),8L,0x504FA382L,1L,0x41C204FAL},{0xDA2D072FL,0xE4360E00L,(-1L),(-7L),8L,0x204BF3CBL,0x972BED4DL}};
            int l_690[4][10][6] = {{{0L,(-1L),0x20C23B3CL,(-1L),0xC8F4B1FEL,0x20C23B3CL},{1L,0xC63A4807L,(-1L),4L,0x2C9D11ACL,0x820EB353L},{(-4L),0x70CB769CL,0x6FC8AB34L,0x6BFBF480L,0x2591FF20L,(-1L)},{0x7992E8DEL,4L,0x6FC8AB34L,(-5L),0xC63A4807L,0x820EB353L},{0xC8F4B1FEL,0xB2B7471CL,(-1L),1L,0x7992E8DEL,0x20C23B3CL},{1L,0x7992E8DEL,0x20C23B3CL,0x7992E8DEL,1L,(-1L)},{1L,0x2591FF20L,0x820EB353L,0xC63A4807L,(-5L),0x6FC8AB34L},{3L,1L,(-1L),0x2591FF20L,0x6BFBF480L,0x6FC8AB34L},{0x0E9EE20FL,0xF6787409L,0x820EB353L,0x2C9D11ACL,4L,(-1L)},{0x6BFBF480L,0L,0x20C23B3CL,0xC8F4B1FEL,(-1L),0x20C23B3CL}},{{0xC63A4807L,1L,(-1L),0x87132F3EL,0x70CB769CL,0x820EB353L},{4L,1L,0x6FC8AB34L,0xF6787409L,0L,(-1L)},{1L,(-4L),0x6FC8AB34L,0xB2B7471CL,1L,0L},{(-7L),1L,(-1L),0xD2F74CB9L,1L,0x2591FF20L},{0xD2F74CB9L,1L,0x2591FF20L,0L,0xED6733CBL,(-1L)},{0xD5DC6C65L,(-1L),0L,(-9L),0xA042791AL,0x0E9EE20FL},{1L,0L,(-1L),0x3B326253L,0xFEC0527EL,0x0E9EE20FL},{(-1L),1L,0L,0x40D3B7B0L,8L,(-1L)},{0x9854C4BEL,(-5L),0x2591FF20L,(-7L),(-7L),0x2591FF20L},{(-9L),(-9L),(-1L),8L,0x40D3B7B0L,0L}},{{0L,0xE70787FEL,0x0E9EE20FL,0xFEC0527EL,0x3B326253L,(-1L)},{1L,0L,0x0E9EE20FL,0xA042791AL,(-9L),0L},{(-8L),0xA042791AL,(-1L),0xED6733CBL,0L,0x2591FF20L},{0xED6733CBL,0L,0x2591FF20L,1L,0xD2F74CB9L,(-1L)},{0xE70787FEL,0x3B326253L,0L,0x28D67F7AL,2L,0x0E9EE20FL},{2L,(-8L),(-1L),(-1L),0x9854C4BEL,0x0E9EE20FL},{(-1L),0xFEC0527EL,0L,0xD5DC6C65L,0L,(-1L)},{0xFEC0527EL,0xED6733CBL,0x2591FF20L,(-8L),0L,0x2591FF20L},{0x28D67F7AL,1L,(-1L),0x595539CDL,0L,(-5L)},{(-9L),0x595539CDL,3L,0xED6733CBL,2L,0xC8F4B1FEL}},{{0x3B326253L,0x28D67F7AL,3L,1L,1L,(-5L)},{0x40D3B7B0L,0x9854C4BEL,0xC8F4B1FEL,(-7L),0x3B326253L,0xB2B7471CL},{(-7L),0x3B326253L,0xB2B7471CL,0x3B326253L,(-7L),0xC8F4B1FEL},{8L,2L,(-5L),1L,1L,3L},{0xFEC0527EL,0xD5DC6C65L,0xC8F4B1FEL,2L,0xED6733CBL,3L},{0xA042791AL,(-5L),(-5L),0L,0x28D67F7AL,0xC8F4B1FEL},{0xED6733CBL,(-8L),0xB2B7471CL,0x40D3B7B0L,0xE70787FEL,0xB2B7471CL},{1L,0L,0xC8F4B1FEL,1L,0x595539CDL,(-5L)},{0x28D67F7AL,8L,3L,(-5L),1L,0xC8F4B1FEL},{(-1L),(-9L),3L,0x9854C4BEL,0L,(-5L)}}};
            int i, j, k;
            for (l_62 = 0; (l_62 != (-24)); l_62--)
            {
                unsigned char l_651 = 246UL;
                int l_664 = 0x467F9B9FL;
                int *l_666 = &l_78;
                unsigned char * const *l_675 = (void*)0;
            }
            return g_85[2];



        }

        ;

        ;
        ;
    }
    else
    {
        int **l_709[5][5] = {{&l_585,(void*)0,&l_585,(void*)0,&l_585},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_585,(void*)0,&l_585,(void*)0,&l_585},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_585,(void*)0,&l_585,(void*)0,&l_585}};
        char l_776 = 1L;
        const unsigned long long ** const *l_778 = (void*)0;
        const unsigned long long ** const * const * const l_777 = &l_778;
        int i, j;
        for (g_154 = 0; (g_154 <= 1); g_154 += 1)
        {
            int l_711 = 0L;
            int l_801 = 8L;
            p_42 = (void*)0;

            ;
            for (g_619 = 0; (g_619 <= 1); g_619 += 1)
            {
                unsigned *l_700 = &g_77;
                int l_701[8] = {0L,0xE523DD45L,(-10L),0xE523DD45L,(-10L),(-10L),0xE523DD45L,(-10L)};
                unsigned char l_712[8] = {0x21L,0x21L,0xC6L,0x21L,0x21L,0xC6L,0x21L,0x21L};
                unsigned char **l_723 = &g_554[5];
                unsigned char **l_724 = &g_554[5];
                int l_746 = 0xBE47E690L;
                unsigned long long *l_799 = (void*)0;
                unsigned long long ** const l_798 = &l_799;
                unsigned long long ** const *l_797 = &l_798;
                int i;
                (*g_185) = (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(g_619)), ((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_92, ((*l_700) = 4294967289UL))), func_43((l_701[6] = (9L <= func_43(l_701[6], &g_30, &g_32))), &g_32, p_42))) == (-1L))));
                for (l_78 = 0; (l_78 <= 1); l_78 += 1)
                {
                    int i, j, k;
                    g_172[(g_154 + 3)][(g_154 + 8)][g_619] = p_42;
                }
                for (g_182 = 3; (g_182 >= 0); g_182 -= 1)
                {
                    int * const *l_706 = (void*)0;
                    int **l_710 = &g_172[2][4][1];
                    unsigned char **l_722[1];
                    unsigned char ***l_721[1];
                    int *l_734 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_722[i] = &g_554[5];
                    for (i = 0; i < 1; i++)
                        l_721[i] = &l_722[0];
                    for (g_77 = 0; (g_77 <= 3); g_77 += 1)
                    {
                        int * const **l_707 = (void*)0;
                        int * const **l_708 = &l_706;
                        int i, j, k;
                        (*g_185) = (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((*l_708) = l_706) == (l_710 = l_709[3][0])), (!((0x5B423D33L >= 7UL) & g_327[g_77][(g_619 + 2)][(g_619 + 2)])))), func_43((func_43(l_711, func_48(l_712[5], (safe_add_func_uint8_t_u_u(((*g_86) || 0xCCEFC858L), g_77)), &g_32, g_182), &l_701[0]) < 18446744073709551608UL), &g_32, &l_701[6])));


                        ;
                        ;
                    }

                    ;
                    (*g_185) = func_43((safe_add_func_uint8_t_u_u(0x66L, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((l_712[5] & ((func_43((((l_724 = (l_723 = &g_554[5])) != (void*)0) < (g_74[g_619] = (safe_div_func_int8_t_s_s(((l_711 && (safe_unary_minus_func_int64_t_s((safe_mul_func_int8_t_s_s((!(safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(1L, g_327[6][2][0])), (g_327[6][6][0] ^ (4294967288UL ^ l_711))))), l_711))))) < l_701[3]), g_411)))), &g_30, &g_30) <= l_711) || 4294967287UL)), 0x16ECL)), g_92)))), l_734, p_42);
                    for (l_168 = 0; (l_168 <= 3); l_168 += 1)
                    {
                        unsigned ***l_740 = &g_246;
                        unsigned ****l_739 = &l_740;
                        int l_745 = (-5L);
                        const int **l_747 = &g_84;
                        p_42 = p_42;
                        l_701[6] = (0xB8L | (safe_add_func_uint32_t_u_u(((p_42 != (*g_246)) || (((*l_739) = &g_246) != &g_246)), (safe_sub_func_uint16_t_u_u(g_74[1], (safe_rshift_func_int8_t_s_s((g_92 = l_745), l_746)))))));
                        (*l_747) = &g_85[0];

                        ;
                    }
                }
                for (l_746 = 1; (l_746 >= 0); l_746 -= 1)
                {
                    unsigned long long l_764 = 0xE5F3EE395B63D813LL;
                    unsigned long long ** const **l_796 = (void*)0;
                    unsigned long long ** const **l_800 = &l_161;
                    int l_807 = 0x83486672L;
                    if ((safe_mod_func_int32_t_s_s((l_701[1] < l_701[6]), l_701[5])))
                    {
                        unsigned short *l_762 = &g_245;
                        char *l_763[10] = {(void*)0,&l_662,(void*)0,(void*)0,&l_662,(void*)0,(void*)0,&l_662,(void*)0,(void*)0};
                        unsigned short *l_765 = &g_766;
                        unsigned short *l_767 = &g_768;
                        int i;
                        p_42 = p_42;
                        l_711 = (0x71L & (l_701[6] = l_764));
                        return g_77;
                    }
                    else
                    {
                        unsigned char l_769 = 0xCFL;
                        (*g_185) = (g_74[1] ^ (l_769 == (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((!(g_245 <= (safe_add_func_int16_t_s_s(l_776, (l_777 != (void*)0))))), (g_182 <= ((void*)0 == p_42)))) <= 0x3E9E2C7C4BA1C056LL), g_77))));
                        (*g_185) = (safe_sub_func_int64_t_s_s(0L, l_764));
                    }
                    if ((((safe_add_func_uint64_t_u_u((~(~(!(safe_sub_func_int64_t_s_s(((-1L) > l_746), (l_746 || (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_74[1], (**g_553))), ((safe_add_func_int16_t_s_s(0x32EFL, ((((*l_800) = (l_797 = (g_793 = (void*)0))) != &g_215) >= ((void*)0 != &g_554[5])))) | l_711))))))))), 0L)) >= 0xF121L) | l_801))
                    {
                        if ((*g_185))
                            break;
                    }
                    else
                    {
                        unsigned **l_802 = &l_700;
                        (*g_185) = ((((*l_802) = &g_77) != (void*)0) || (safe_mod_func_uint64_t_u_u(func_43((l_807 = (g_74[0] == 0L)), p_42, &g_30), 0x7848893C0383DBC6LL)));
                        (*g_185) = l_711;
                    }
                }

                ;
            }
        }

        ;

        ;
        ;
        ;
    }



    ;
    ;
    ;

    ;
    ;
    ;
    ;
    (*l_808) = &g_85[2];

    ;
    l_815[3][0] = (safe_add_func_int64_t_s_s(func_43((((g_327[4][4][3] | ((g_768 | func_43((((void*)0 != (*l_754)) < (safe_mod_func_uint16_t_u_u((&l_162 == &l_162), g_92))), (g_172[2][4][1] = &g_32), (l_813[0] = &g_30))) | (**l_808))) <= 65533UL) > (**l_808)), &g_32, &g_32), l_814));


    (*l_824) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_245, l_820[2][1][8])), (safe_add_func_int64_t_s_s(((**l_593) = l_823), ((func_43((**l_808), l_824, &g_32) == (safe_rshift_func_int8_t_s_s(g_508, 2))) < ((*l_824) && g_92))))));
    return l_827;


}







static int func_43(unsigned p_44, int * p_45, int * p_46)
{
    int *l_135 = &g_30;
    int l_136[5][3] = {{8L,8L,0x0DA0945AL},{8L,8L,0x0DA0945AL},{8L,8L,0x0DA0945AL},{8L,8L,0x0DA0945AL},{8L,8L,0x0DA0945AL}};
    int i, j;
    (*l_135) = (g_64 == g_92);
    return l_136[3][1];
}







static int * func_48(unsigned p_49, unsigned char p_50, int * p_51, const unsigned short p_52)
{
    int l_79 = 0x3585F1C2L;
    int *l_80[8][2] = {{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32},{(void*)0,&g_32}};
    const int *l_82[3];
    const int **l_81[1];
    const unsigned l_128 = 3UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_82[i] = &g_83[2][6][0];
    for (i = 0; i < 1; i++)
        l_81[i] = &l_82[1];
    l_79 = (g_64 <= g_32);
    g_30 = l_79;
    g_86 = (g_84 = p_51);



    for (p_50 = 0; (p_50 <= 1); p_50 += 1)
    {
        unsigned char *l_91[10] = {(void*)0,&g_74[1],(void*)0,&g_74[1],(void*)0,&g_74[1],(void*)0,&g_74[1],(void*)0,&g_74[1]};
        int *l_106 = &g_32;
        int l_109[9] = {0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L,0xDABD6516L};
        int i;
        if (((safe_div_func_uint32_t_u_u(g_74[p_50], (safe_lshift_func_uint8_t_u_s(((g_92 = (0x5C0EL > ((void*)0 != &p_49))) || g_71), 2)))) == p_50))
        {
            unsigned l_95 = 1UL;
            int **l_107 = &l_80[6][1];
            int l_111 = 0x89450AD3L;
            if ((l_109[1] = (safe_add_func_uint8_t_u_u(g_32, (l_95 != (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_50, (&g_85[2] != l_106))), (&p_51 != l_107))), ((safe_unary_minus_func_uint16_t_u((*l_106))) == (((*l_106) <= g_30) && 0UL)))), 12)), 1UL)))))))
            {
                int l_112[5][10] = {{0x534E3A65L,(-8L),1L,0x85036670L,1L,(-8L),0x534E3A65L,0x534E3A65L,(-8L),1L},{(-8L),0x534E3A65L,0x534E3A65L,(-8L),1L,0x85036670L,1L,(-8L),0x534E3A65L,0x534E3A65L},{1L,0x534E3A65L,0x85036670L,0xE7150262L,0xE7150262L,0x85036670L,(-8L),0x9A124D13L,(-8L),0x85036670L},{0x534E3A65L,0L,0xE7150262L,0L,0x534E3A65L,0x85036670L,0x85036670L,0x534E3A65L,0L,0xE7150262L},{0x9A124D13L,0x9A124D13L,0xE7150262L,0x534E3A65L,1L,0x534E3A65L,0xE7150262L,0x9A124D13L,0x9A124D13L,0xE7150262L}};
                int i, j;
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                {
                    const char l_110 = 0x95L;
                    int *l_116 = &l_109[5];
                    for (g_71 = 0; (g_71 <= 1); g_71 += 1)
                    {
                        int i, j;
                        g_30 = (*g_84);
                        if (l_110)
                            break;
                        l_111 = 0x0F7E9ACAL;
                        l_112[0][8] = ((*p_51) > (g_77 >= g_74[1]));
                    }
                    g_84 = &g_83[3][5][3];

                    ;
                    for (g_30 = (-24); (g_30 > 21); g_30 = safe_add_func_int8_t_s_s(g_30, 2))
                    {
                        int *l_115 = &l_109[2];
                        l_116 = l_115;
                    }
                }


                return &g_32;


            }
            else
            {
                int * const l_117 = &l_109[2];
                int **l_118 = &l_80[6][1];
                (*l_118) = l_117;


            }


        }
        else
        {
            unsigned char l_127 = 0x70L;
            int *l_131 = &l_109[5];
            for (l_79 = 0; (l_79 < (-8)); --l_79)
            {
                g_30 = (*p_51);
                for (g_64 = 0; (g_64 <= 31); g_64 = safe_add_func_uint64_t_u_u(g_64, 9))
                {
                    for (p_49 = 0; (p_49 > 39); ++p_49)
                    {
                        g_30 = (l_127 = (((safe_rshift_func_int8_t_s_s((*l_106), 5)) & p_49) > p_52));
                    }
                    if (l_128)
                        break;
                    for (g_30 = 0; (g_30 < (-2)); g_30 = safe_sub_func_int16_t_s_s(g_30, 1))
                    {
                        int l_132[10][9][2] = {{{0xAFD11974L,0x128C81A4L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0x128C81A4L},{0xAFD11974L,0x7C8792F5L},{0L,0xAFD11974L},{0x7C8792F5L,0x128C81A4L},{0x7C8792F5L,0xAFD11974L},{0L,0x7C8792F5L}},{{0xAFD11974L,0x128C81A4L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0x128C81A4L},{0xAFD11974L,0x7C8792F5L},{0L,0xAFD11974L},{0x7C8792F5L,0x128C81A4L},{0x7C8792F5L,0xAFD11974L},{0L,0x7C8792F5L}},{{0xAFD11974L,0x128C81A4L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0x128C81A4L},{0xAFD11974L,0x7C8792F5L},{0L,0xAFD11974L},{0x7C8792F5L,0x128C81A4L},{0x7C8792F5L,0xAFD11974L},{0L,0x7C8792F5L}},{{0xAFD11974L,0x128C81A4L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0x128C81A4L},{0xAFD11974L,0x7C8792F5L},{0L,0xAFD11974L},{0x7C8792F5L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{(-1L),0L},{0x128C81A4L,0x128C81A4L},{0xE1E0ADEDL,0x128C81A4L},{0x128C81A4L,0L},{(-1L),0L},{0xE1E0ADEDL,(-1L)},{0L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{(-1L),0L},{0x128C81A4L,0x128C81A4L},{0xE1E0ADEDL,0x128C81A4L},{0x128C81A4L,0L},{(-1L),0L},{0xE1E0ADEDL,(-1L)},{0L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{(-1L),0L},{0x128C81A4L,0x128C81A4L},{0xE1E0ADEDL,0x128C81A4L},{0x128C81A4L,0L},{(-1L),0L},{0xE1E0ADEDL,(-1L)},{0L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{(-1L),0L},{0x128C81A4L,0x128C81A4L},{0xE1E0ADEDL,0x128C81A4L},{0x128C81A4L,0L},{(-1L),0L},{0xE1E0ADEDL,(-1L)},{0L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{(-1L),0L},{0x128C81A4L,0x128C81A4L},{0xE1E0ADEDL,0x128C81A4L},{0x128C81A4L,0L},{(-1L),0L},{0xE1E0ADEDL,(-1L)},{0L,0L},{0L,(-1L)},{0xE1E0ADEDL,0L}},{{0x128C81A4L,0xE1E0ADEDL},{0L,0L},{4L,0L},{0L,0xE1E0ADEDL},{0x128C81A4L,(-1L)},{4L,0x128C81A4L},{(-1L),0xE1E0ADEDL},{(-1L),0x128C81A4L},{4L,(-1L)}}};
                        int i, j, k;
                        g_84 = l_131;

                        ;
                        l_132[8][4][1] = (*l_106);
                    }
                }
                for (g_64 = (-14); (g_64 != 47); g_64 = safe_add_func_uint16_t_u_u(g_64, 6))
                {
                    return &g_32;



                }
                g_30 = (*l_131);
            }


        }



        return &g_32;



    }
    return l_80[6][1];


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_327[i][j][k], "g_327[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_521[i][j][k], "g_521[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1075[i], "g_1075[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1076[i][j], "g_1076[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1205, "g_1205", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1235[i], "g_1235[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1310, "g_1310", print_hash_value);
    transparent_crc(g_1334, "g_1334", print_hash_value);
    transparent_crc(g_1353, "g_1353", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    transparent_crc(g_1506, "g_1506", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1726[i], "g_1726[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2054, "g_2054", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
