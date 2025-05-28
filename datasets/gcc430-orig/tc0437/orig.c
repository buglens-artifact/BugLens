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



static char g_2 = 0xBDL;
static int g_79 = 1L;
static unsigned char g_91 = 0x59L;
static int g_96[10][10][2] = {{{0x37093F07L,2L},{7L,0x37093F07L},{0xF5864DC9L,0x0996A0D2L},{0xF5864DC9L,0x37093F07L},{7L,2L},{0x37093F07L,(-1L)},{1L,1L},{2L,0x8DB49C3BL},{0x8DB49C3BL,0x8DB49C3BL},{2L,1L}},{{1L,(-1L)},{0x37093F07L,2L},{7L,0x37093F07L},{0xF5864DC9L,0x0996A0D2L},{0xF5864DC9L,0x37093F07L},{7L,2L},{0x37093F07L,(-1L)},{1L,1L},{2L,0x8DB49C3BL},{0x8DB49C3BL,0x8DB49C3BL}},{{2L,1L},{1L,(-1L)},{0x37093F07L,2L},{0x6F4200C2L,0x8DB49C3BL},{7L,0x41AE354AL},{7L,0x8DB49C3BL},{0x6F4200C2L,0xF5864DC9L},{0x8DB49C3BL,0x0996A0D2L},{(-1L),1L},{0xF5864DC9L,1L}},{{1L,1L},{0xF5864DC9L,1L},{(-1L),0x0996A0D2L},{0x8DB49C3BL,0xF5864DC9L},{0x6F4200C2L,0x8DB49C3BL},{7L,0x41AE354AL},{7L,0x8DB49C3BL},{0x6F4200C2L,0xF5864DC9L},{0x8DB49C3BL,0x0996A0D2L},{(-1L),1L}},{{0xF5864DC9L,1L},{1L,1L},{0xF5864DC9L,1L},{(-1L),0x0996A0D2L},{0x8DB49C3BL,0xF5864DC9L},{0x6F4200C2L,0x8DB49C3BL},{7L,0x41AE354AL},{7L,0x8DB49C3BL},{0x6F4200C2L,0xF5864DC9L},{0x8DB49C3BL,0x0996A0D2L}},{{(-1L),1L},{0xF5864DC9L,1L},{1L,1L},{0xF5864DC9L,1L},{(-1L),0x0996A0D2L},{0x8DB49C3BL,0xF5864DC9L},{0x6F4200C2L,0x8DB49C3BL},{7L,0x41AE354AL},{7L,0x8DB49C3BL},{0x6F4200C2L,0xF5864DC9L}},{{0x8DB49C3BL,0x0996A0D2L},{(-1L),1L},{0xF5864DC9L,1L},{1L,1L},{0xF5864DC9L,1L},{(-1L),0x0996A0D2L},{0x8DB49C3BL,0xF5864DC9L},{0x6F4200C2L,0x8DB49C3BL},{7L,0x41AE354AL},{7L,0x8DB49C3BL}},{{0x6F4200C2L,0x8DB49C3BL},{0x0996A0D2L,7L},{0xF5864DC9L,2L},{0x8DB49C3BL,0x41AE354AL},{0x41AE354AL,0x41AE354AL},{0x8DB49C3BL,2L},{0xF5864DC9L,7L},{0x0996A0D2L,0x8DB49C3BL},{1L,0x0996A0D2L},{1L,0x6F4200C2L}},{{1L,0x0996A0D2L},{1L,0x8DB49C3BL},{0x0996A0D2L,7L},{0xF5864DC9L,2L},{0x8DB49C3BL,0x41AE354AL},{0x41AE354AL,0x41AE354AL},{0x8DB49C3BL,2L},{0xF5864DC9L,7L},{0x0996A0D2L,0x8DB49C3BL},{1L,0x0996A0D2L}},{{1L,0x6F4200C2L},{1L,0x0996A0D2L},{1L,0x8DB49C3BL},{0x0996A0D2L,7L},{0xF5864DC9L,2L},{0x8DB49C3BL,0x41AE354AL},{0x41AE354AL,0x41AE354AL},{0x8DB49C3BL,2L},{0xF5864DC9L,7L},{0x0996A0D2L,0x8DB49C3BL}}};
static unsigned g_273[1][2] = {{0UL,0UL}};
static int *g_275 = &g_96[7][1][0];
static int **g_274 = &g_275;
static int g_620 = 0x37AEEFE5L;
static unsigned long long g_641 = 1UL;
static int g_646 = 0x47F24918L;
static unsigned short g_738 = 65535UL;
static char g_760[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
static short g_876 = (-3L);
static short g_891 = 4L;
static unsigned char g_904 = 0xABL;
static short g_922 = 1L;
static int *g_924 = &g_96[1][1][0];
static char g_995 = 0x9FL;
static unsigned g_1037[6] = {2UL,2UL,2UL,2UL,2UL,2UL};



static unsigned short func_1(void);
static int func_5(char p_6, unsigned p_7);
static char func_8(int p_9, unsigned p_10, char p_11, char p_12);
static char func_13(char p_14, char p_15);
static char func_18(long long p_19, unsigned p_20, unsigned p_21, unsigned char p_22);
static long long func_23(unsigned p_24, unsigned short p_25, int p_26, long long p_27, unsigned long long p_28);
static int func_31(unsigned p_32, char p_33, char p_34, int p_35, short p_36);
static unsigned short func_40(long long p_41, unsigned char p_42, int p_43);
static int func_50(unsigned char p_51, unsigned short p_52);
static short func_64(unsigned long long p_65, unsigned long long p_66, unsigned short p_67, short p_68, long long p_69);
static unsigned short func_1(void)
{
    unsigned short l_3 = 1UL;
    int l_4 = 0x0BD035C5L;
    unsigned char l_863[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};
    unsigned l_923 = 0x53CC923BL;
    int l_930 = 7L;
    int l_931[3][3] = {{0x842136BBL,0x54DFA37CL,0x842136BBL},{0L,0L,0L},{0x842136BBL,0x54DFA37CL,0x842136BBL}};
    unsigned short l_947 = 65529UL;
    char l_954 = 0xE6L;
    unsigned long long l_1016[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    unsigned long long l_1041 = 0xD4BE8AE320DF1B0CLL;
    int l_1076 = 0x39F67C1CL;
    int ***l_1101[2];
    int l_1104[6] = {(-1L),0x25FD8CECL,(-1L),(-1L),0x25FD8CECL,(-1L)};
    short l_1105 = 0x6699L;
    unsigned char l_1106[9][5] = {{0x03L,0x03L,0x03L,0x03L,0x03L},{253UL,253UL,253UL,253UL,253UL},{0x03L,0x03L,0x03L,0x03L,0x03L},{253UL,253UL,253UL,253UL,253UL},{0x03L,0x03L,0x03L,0x03L,0x03L},{253UL,253UL,253UL,253UL,253UL},{0x03L,0x03L,0x03L,0x03L,0x03L},{253UL,253UL,253UL,253UL,253UL},{0x03L,0x03L,0x03L,0x03L,0x03L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1101[i] = &g_274;
    if ((g_2 > ((l_3 > ((g_2 ^ l_4) >= func_5(func_8(g_2, (l_4 <= g_2), (func_13(g_2, g_2) | 255UL), g_91), l_3))) <= 0x213F1126L)))
    {
        int l_839 = 0L;
        int l_850 = 0xC8270D1CL;
        unsigned short l_868 = 0xD20CL;
        int l_899 = 0xDFD14FF6L;
        int l_902 = (-2L);
        int l_932 = 1L;
        int l_933 = 1L;
        int l_934 = (-3L);
        int l_935 = 0L;
        int l_936 = 0x47428C34L;
        long long l_937 = 0L;
        int l_938 = (-7L);
        int l_939 = 0x4799CE90L;
        int l_1022 = 0x1EBDAAD1L;
        long long l_1036 = 1L;
        if (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0x8DL, l_839)), 11)) <= (safe_rshift_func_uint16_t_u_s(((g_641 <= (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(g_646, g_96[1][1][0])) ^ func_13((g_273[0][1] >= (safe_add_func_int64_t_s_s(g_96[1][1][0], (((safe_lshift_func_uint16_t_u_u(g_760[3], ((g_646 || 0x842BBA1CL) < g_91))) < g_91) < g_760[1])))), l_850)), l_850))) & l_3), 1))))
        {
            unsigned l_892 = 0xD85393DBL;
            int l_898 = (-4L);
            int l_900 = 0x97CF7BA5L;
            int l_903 = 0x31D544ABL;
            int **l_907 = &g_275;
            unsigned l_940 = 0x94E35E78L;
            for (l_3 = 0; (l_3 == 59); l_3++)
            {
                int *l_866 = (void*)0;
                unsigned l_867[7] = {4294967295UL,0x50A2953BL,4294967295UL,4294967295UL,0x50A2953BL,4294967295UL,4294967295UL};
                int l_901 = 0xB16376A5L;
                int i;
                if (((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_96[3][0][0], g_646)), (((safe_lshift_func_uint16_t_u_u(((+((safe_mod_func_uint8_t_u_u(l_863[0], 0x2AL)) > 4UL)) != ((safe_lshift_func_uint16_t_u_s(((l_866 == (void*)0) < func_40(g_91, l_867[6], l_850)), l_868)) != g_760[2])), 3)) != 0x76L) | g_96[6][4][1]))) <= 0xCE5CE477L))
                {
                    unsigned l_869 = 0UL;
                    l_869++;
                }
                else
                {
                    unsigned short l_893[6];
                    int l_897 = 2L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_893[i] = 65535UL;
                    (*g_274) = &g_96[0][3][0];

                    ;
                    (**g_274) = (**g_274);
                    if ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((func_5(g_876, l_863[0]) && (safe_div_func_int8_t_s_s(((func_23((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((g_641 <= (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((g_738 || (safe_rshift_func_uint16_t_u_u(l_868, 6))), 2)) | g_2), (safe_sub_func_uint8_t_u_u(255UL, (func_23(g_620, l_4, l_863[6], g_641, g_891) <= 0x70L)))))), g_738)), l_892)), g_760[4], g_2, g_273[0][1], l_863[0]) ^ 0xF67695A6L) ^ g_273[0][0]), g_91))), l_893[0])), 2)))
                    {
                        int *l_894 = (void*)0;
                        int *l_895 = &l_839;
                        int *l_896[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_896[i] = (void*)0;
                        ++g_904;
                    }
                    else
                    {
                        (**g_274) |= 5L;
                        (*g_274) = (void*)0;

                        ;
                        (*g_274) = (*g_274);
                    }

                    ;
                }
            }


            if (((g_91 & g_646) & (((6L ^ (l_907 == &g_275)) & ((func_40(g_91, ((g_760[3] == ((void*)0 != &g_275)) != g_646), l_892) && l_839) < 255UL)) <= g_760[2])))
            {
                int *l_913 = &l_4;
                int *l_925 = &g_96[9][6][1];
                for (l_850 = 7; (l_850 != (-18)); l_850 = safe_sub_func_int32_t_s_s(l_850, 3))
                {
                    int *l_910 = (void*)0;
                    (*g_274) = l_910;

                    ;
                    (*l_907) = (*l_907);
                    if ((g_620 & 5UL))
                    {
                        (*l_907) = (*g_274);
                        l_910 = g_924;

                        ;
                        (*l_907) = (*g_274);
                        (*l_907) = l_925;

                        ;
                    }
                    else
                    {
                        int *l_926 = (void*)0;
                        l_899 |= 1L;
                        if ((*g_924))
                            break;
                        (*g_274) = l_926;
                    }

                    ;
                    ;
                }
                return g_760[2];
            }
            else
            {
                int *l_927 = &l_839;
                int *l_928 = &g_96[1][1][0];
                int *l_929[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_929[i] = &l_900;
                l_940--;
                l_931[2][0] &= (*g_924);
                (*l_927) ^= 0xE5474799L;
                for (l_3 = 7; (l_3 >= 36); l_3 = safe_add_func_int32_t_s_s(l_3, 8))
                {
                    (*g_924) &= (&g_79 != &g_96[1][1][0]);
                    if (l_863[0])
                        break;
                }
            }
            (*l_907) = &l_933;

            ;
        }
        else
        {
            int *l_945 = (void*)0;
            int *l_946[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned long long l_1032 = 18446744073709551611UL;
            long long l_1033[6] = {0x1A9A2D88D9DCF4E6LL,0x1A9A2D88D9DCF4E6LL,0x1A9A2D88D9DCF4E6LL,0x1A9A2D88D9DCF4E6LL,0x1A9A2D88D9DCF4E6LL,0x1A9A2D88D9DCF4E6LL};
            int i;
            l_947++;
            for (l_937 = 0; (l_937 < 6); l_937++)
            {
                unsigned l_969 = 0x75B1CB8BL;
                int l_972[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_972[i] = 0x43F19C3BL;
                if ((func_40(g_738, (safe_rshift_func_uint16_t_u_u((l_954 || g_2), g_876)), (*g_924)) < g_876))
                {
                    long long l_957 = 0x072E7C61FFA07CD2LL;
                    int l_958[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_958[i] = 0xD6DE2981L;
                    if ((*g_924))
                        break;
                    for (l_850 = 0; (l_850 > (-14)); l_850 = safe_sub_func_uint16_t_u_u(l_850, 3))
                    {
                        unsigned l_959[9][1][9] = {{{0x5C7C09B1L,0UL,2UL,4294967295UL,4294967295UL,2UL,0UL,0x5C7C09B1L,2UL}},{{1UL,6UL,0UL,4294967286UL,4294967286UL,0UL,6UL,1UL,0UL}},{{0x5C7C09B1L,0UL,2UL,4294967295UL,0x5C7C09B1L,0UL,4294967295UL,0UL,0UL}},{{6UL,4294967286UL,0xAC3E30A9L,1UL,1UL,0xAC3E30A9L,4294967286UL,6UL,0xAC3E30A9L}},{{0UL,4294967295UL,0UL,0x5C7C09B1L,0x5C7C09B1L,0UL,4294967295UL,0UL,0UL}},{{6UL,4294967286UL,0xAC3E30A9L,1UL,1UL,0xAC3E30A9L,4294967286UL,6UL,0xAC3E30A9L}},{{0UL,4294967295UL,0UL,0x5C7C09B1L,0x5C7C09B1L,0UL,4294967295UL,0UL,0UL}},{{6UL,4294967286UL,0xAC3E30A9L,1UL,1UL,0xAC3E30A9L,4294967286UL,6UL,0xAC3E30A9L}},{{0UL,4294967295UL,0UL,0x5C7C09B1L,0x5C7C09B1L,0UL,4294967295UL,0UL,0UL}}};
                        int i, j, k;
                        if ((*g_924))
                            break;
                        l_959[4][0][2]++;
                    }
                    for (l_923 = 26; (l_923 <= 11); l_923 = safe_sub_func_uint32_t_u_u(l_923, 8))
                    {
                        l_899 ^= 1L;
                        l_4 ^= (l_958[3] ^ g_876);
                    }
                    l_958[3] = 0x62B125A2L;
                }
                else
                {
                    unsigned short l_966 = 0xD4D4L;
                    int l_980 = 4L;
                    int l_981 = 3L;
                    unsigned short l_982[10][3][3] = {{{65535UL,65535UL,0UL},{65535UL,65535UL,0UL},{65535UL,65535UL,0UL}},{{65535UL,65535UL,0UL},{65535UL,65535UL,0UL},{65535UL,65535UL,0UL}},{{65535UL,65535UL,0UL},{65535UL,65535UL,0UL},{65535UL,65535UL,0UL}},{{65535UL,65535UL,0UL},{65535UL,65535UL,0UL},{65535UL,65535UL,0UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}},{{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL},{65527UL,65527UL,65535UL}}};
                    int i, j, k;
                    if (l_839)
                        break;
                    if (func_13(l_863[0], g_646))
                    {
                        unsigned l_964 = 18446744073709551615UL;
                        int *l_965 = &l_939;
                        l_964 |= (*g_924);
                        (*g_924) = ((void*)0 != &g_275);
                        if (l_930)
                            continue;
                        (*g_274) = l_965;

                        ;
                    }
                    else
                    {
                        l_966++;
                        return l_4;


                    }

                    ;
                    for (l_923 = 0; (l_923 <= 2); l_923 += 1)
                    {
                        int i, j;
                        --l_969;
                        (*g_924) = l_972[2];
                        (*g_275) ^= ((safe_rshift_func_int16_t_s_u((func_40(((((g_904 & (safe_unary_minus_func_uint8_t_u(g_922))) == l_969) != g_922) | l_966), g_641, (safe_lshift_func_uint16_t_u_u(0x6505L, 12))) >= g_273[0][1]), 11)) || l_954);
                    }
                    for (l_935 = (-1); (l_935 >= (-8)); --l_935)
                    {
                        ++l_982[3][1][1];
                    }
                }
                for (l_969 = 0; (l_969 <= 5); l_969 += 1)
                {
                    int i;
                    if (g_760[l_969])
                        break;
                    if (l_863[0])
                    {
                        unsigned long long l_985 = 18446744073709551615UL;
                        if (g_760[l_969])
                            break;
                        l_935 |= (g_922 < l_985);
                        (*g_274) = &l_939;

                        ;
                    }
                    else
                    {
                        int *l_986 = &l_902;
                        long long l_987 = 1L;
                        int l_988 = 1L;
                        int l_989[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                        unsigned l_990[6] = {0x03935978L,1UL,1UL,0x03935978L,1UL,1UL};
                        int i;
                        (*g_274) = l_986;

                        ;
                        ++l_990[3];
                        return g_738;


                    }

                    ;
                    if (l_969)
                        break;
                    if ((g_96[0][1][1] & (&g_275 == &g_275)))
                    {
                        (*g_274) = &l_899;

                        ;
                        if ((**g_274))
                            continue;
                    }
                    else
                    {
                        (**g_274) |= l_923;
                    }

                    ;
                }
                if ((((&l_936 != l_945) != g_995) > (safe_rshift_func_int8_t_s_s(((void*)0 == &g_274), (safe_rshift_func_int8_t_s_s(l_969, 3))))))
                {
                    int l_1000 = 0xF75052EDL;
                    (*g_274) = &l_972[1];

                    ;
                    (*g_924) &= func_50(l_1000, l_972[2]);
                    l_931[0][0] = (safe_rshift_func_uint16_t_u_u((((l_923 >= ((((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_931[1][2], 7)), (func_8(g_273[0][1], ((0xA0L < 255UL) ^ l_868), (safe_add_func_uint64_t_u_u(g_646, ((&l_939 != (*g_274)) ^ g_891))), g_641) & l_932))), 3UL)) < l_4) & l_863[0]) & g_922)) ^ l_863[2]) | g_995), g_2));


                    for (l_935 = 26; (l_935 >= (-19)); l_935 = safe_sub_func_uint16_t_u_u(l_935, 5))
                    {
                        return g_738;


                    }
                }
                else
                {
                    unsigned long long l_1013 = 0x88156819F546BCA7LL;
                    long long l_1017 = (-10L);
                    (*g_924) = l_1013;
                    (*g_924) ^= ((void*)0 == &g_924);
                    (*g_924) &= (safe_add_func_int8_t_s_s(l_932, l_1022));
                    for (l_4 = 1; (l_4 <= 5); l_4 += 1)
                    {
                        return g_904;


                    }
                }


            }


            if ((+(-1L)))
            {
                int *l_1023 = &l_934;
                for (l_939 = 8; (l_939 >= 2); l_939 -= 1)
                {
                    int i;
                    l_946[l_939] = &l_939;
                    for (g_738 = 2; (g_738 <= 6); g_738 += 1)
                    {
                        l_1023 = &l_899;

                        ;
                    }
                }


                ;
                g_1037[5] ^= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0x11L, g_273[0][0])) <= (safe_sub_func_uint64_t_u_u((l_1032 ^ (-1L)), func_23(g_738, l_1033[4], l_850, (safe_lshift_func_uint8_t_u_s((0x474EL || ((*l_1023) <= l_1036)), g_760[0])), l_902)))), 0xE6088C65L)), 3));
                for (g_91 = 0; (g_91 == 60); ++g_91)
                {
                    (*g_274) = l_1023;

                    ;
                }


            }
            else
            {
                short l_1040 = 0xBD45L;
                char l_1044 = 0xA6L;
                int l_1045 = 0L;
                int l_1046 = 0xDF3C82EFL;
                int l_1047 = 0xE402EE9FL;
                int l_1048 = 0L;
                unsigned l_1049 = 0xB2C2E1C3L;
                l_1041--;
                (*g_274) = &l_936;

                ;
                l_1049++;
                for (l_934 = 0; (l_934 > (-19)); l_934 = safe_sub_func_int16_t_s_s(l_934, 6))
                {
                    for (g_646 = 0; (g_646 == 28); ++g_646)
                    {
                        unsigned long long l_1056 = 0x7FE89E1AAF222087LL;
                        --l_1056;
                        if (l_1041)
                            break;
                    }
                }
            }



            (*g_274) = &g_96[6][4][0];

            ;
        }

        ;
    }
    else
    {
        long long l_1068 = (-6L);
        unsigned short l_1080 = 0xEFF5L;
        for (g_904 = 27; (g_904 < 44); g_904 = safe_add_func_int32_t_s_s(g_904, 6))
        {
            char l_1061[4];
            unsigned l_1079 = 0x7BEB8243L;
            int *l_1083 = &l_931[2][0];
            int i;
            for (i = 0; i < 4; i++)
                l_1061[i] = 0L;
            l_1061[0] = (((&g_274 == (void*)0) == (&g_924 == (void*)0)) & (((void*)0 == &g_274) == g_96[1][1][0]));
            for (g_738 = (-6); (g_738 < 41); g_738 = safe_add_func_uint64_t_u_u(g_738, 9))
            {
                unsigned char l_1069 = 0xC6L;
                int l_1086 = 3L;
                l_1080 |= (l_863[2] >= (safe_sub_func_int64_t_s_s((l_1068 | (func_23(g_904, g_273[0][1], l_1069, (g_1037[5] >= ((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((l_1076 <= l_1068), (safe_sub_func_uint64_t_u_u((1L != (-6L)), 0L)))), 1)) == g_876)), l_1068) != l_1061[2])), l_1079)));
                (*g_274) = &g_96[1][1][0];

                ;
                g_79 ^= ((l_1069 <= (!(+((((safe_rshift_func_int8_t_s_s((((l_1083 == (*g_274)) < (func_40(((((((safe_mod_func_uint16_t_u_u((!((void*)0 != &g_924)), g_760[2])) | 0x79ED452AL) > 0xBB81450DL) && (func_13(g_91, g_620) <= l_1069)) & l_4) & g_904), g_620, l_1086) > l_1068)) & l_1086), g_96[6][6][1])) < g_96[1][1][0]) != g_96[0][2][1]) < g_904)))) < g_738);
            }
            g_79 &= (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_273[0][1], (((1UL ^ ((~(safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_1076, (safe_add_func_int16_t_s_s(g_641, 0xC959L)))), 5))) | (safe_mod_func_uint8_t_u_u(((void*)0 != l_1101[0]), g_96[9][7][0])))) <= (l_1068 == 1UL)) > (*l_1083)))), l_1068)) < l_1080), 15));
        }
        (*g_274) = (void*)0;

        ;
        (*g_274) = (void*)0;
    }


    for (l_4 = 2; (l_4 >= 0); l_4 -= 1)
    {
        char l_1102 = 0xA7L;
        int **l_1103[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1103[i] = (void*)0;
        if (l_1102)
            break;
        if ((*g_924))
            break;
        for (g_891 = 2; (g_891 >= 0); g_891 -= 1)
        {
            int i, j;
            l_931[g_891][l_4] ^= (l_1103[1] == (void*)0);
            l_931[g_891][l_4] = 0xE812032CL;
            (*g_274) = &l_931[l_4][g_891];

            ;
        }
    }


    ++l_1106[0][0];
    return g_738;


}







static int func_5(char p_6, unsigned p_7)
{
    int *l_792 = &g_96[1][1][0];
    unsigned long long l_797 = 0x4A833340E0FDA899LL;
    int **l_815[9] = {&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792};
    int l_817 = 0x615A9D42L;
    int *l_818 = &g_96[1][1][0];
    int i;
    if ((((l_792 != l_792) || 0x562F17A3D8A65816LL) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_760[3], ((&g_275 == &g_275) >= (func_31(g_641, func_23(p_7, (*l_792), p_7, p_6, p_6), g_2, p_7, p_7) != 1UL)))), l_797))))
    {
        (*g_274) = &g_96[1][1][0];

        ;
        (*g_274) = (*g_274);
        return (*l_792);
    }
    else
    {
        short l_813 = 0xC280L;
        int l_816 = 7L;
        int *l_819 = &g_79;
        int l_822 = 1L;
        int l_823 = 0xFB1416C9L;
        int l_824 = 6L;
        for (g_738 = 0; (g_738 != 15); g_738 = safe_add_func_int32_t_s_s(g_738, 1))
        {
            return p_7;
        }
        for (g_641 = 0; (g_641 > 19); g_641 = safe_add_func_uint32_t_u_u(g_641, 3))
        {
            int **l_802 = &g_275;
            int *l_806 = &g_96[2][2][0];
            int l_820[6][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
            unsigned char l_825 = 0x7EL;
            int i, j;
            for (p_7 = 0; (p_7 <= 5); p_7 += 1)
            {
                for (g_79 = 0; (g_79 <= 5); g_79 += 1)
                {
                    int i;
                    if (g_760[g_79])
                    {
                        (*l_792) ^= (-6L);
                        if (p_6)
                            continue;
                        (*l_792) |= ((void*)0 != l_802);
                    }
                    else
                    {
                        unsigned l_803 = 4294967293UL;
                        return l_803;
                    }
                    for (g_91 = 0; (g_91 > 51); g_91 = safe_add_func_int8_t_s_s(g_91, 3))
                    {
                        int *l_807 = &g_96[1][4][1];
                        (*l_802) = l_806;

                        ;
                        (*l_802) = l_807;
                    }
                }
                for (g_620 = 0; (g_620 != (-4)); g_620--)
                {
                    int *l_814 = &g_96[9][3][0];
                    for (l_797 = 0; (l_797 < 8); l_797 = safe_add_func_int32_t_s_s(l_797, 2))
                    {
                        int l_812 = 0xDE64127DL;
                        l_813 &= (g_760[5] >= l_812);
                        (*l_802) = l_814;

                        ;
                        (*g_275) ^= 0x829E8470L;
                    }
                    if ((*l_814))
                        break;
                    for (l_797 = 0; (l_797 <= 5); l_797 += 1)
                    {
                        (*l_814) = (&l_806 == l_815[4]);
                    }
                    for (g_91 = 0; (g_91 <= 1); g_91 += 1)
                    {
                        int i, j, k;
                        l_816 &= g_96[(g_91 + 8)][(p_7 + 1)][g_91];
                        (*l_814) ^= p_6;
                        l_817 ^= p_7;
                        (*l_806) = p_7;
                    }
                }
            }
            if (p_6)
            {
                (*l_802) = l_818;

                ;
                (*g_274) = l_819;

                ;
            }
            else
            {
                int l_821[9][7] = {{0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L},{0x9ECD4019L,0x9ECD4019L,0x3158FD09L,0x3158FD09L,0x9ECD4019L,0x9ECD4019L,0x3158FD09L},{0xA21BD8DAL,(-7L),0xA21BD8DAL,(-7L),0xA21BD8DAL,(-7L),0xA21BD8DAL},{0x9ECD4019L,0x3158FD09L,0x3158FD09L,0x9ECD4019L,0x9ECD4019L,0x3158FD09L,0x3158FD09L},{0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L},{0x9ECD4019L,0x9ECD4019L,0x3158FD09L,0x3158FD09L,0x9ECD4019L,0x9ECD4019L,0x3158FD09L},{0xA21BD8DAL,(-7L),0xA21BD8DAL,(-7L),0xA21BD8DAL,(-7L),0xA21BD8DAL},{0x9ECD4019L,0x3158FD09L,0x3158FD09L,0x9ECD4019L,0x9ECD4019L,0x3158FD09L,0x3158FD09L},{0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L,(-7L),0xDABD5E64L}};
                int i, j;
                ++l_825;
                (*l_792) ^= p_7;
                if ((*l_819))
                    break;
                l_821[0][2] ^= (((*l_806) | p_7) && 0x7AD3L);
            }


            (*l_806) |= p_6;
            return g_641;
        }
        (*l_819) = (safe_add_func_int16_t_s_s((*l_819), p_6));
        for (p_7 = 0; (p_7 <= 9); ++p_7)
        {
            unsigned short l_832 = 0x669BL;
            (*l_792) ^= l_832;
            for (g_79 = 0; (g_79 <= 5); g_79 += 1)
            {
                for (l_832 = 0; (l_832 <= 5); l_832 += 1)
                {
                    for (l_816 = 5; (l_816 >= 0); l_816 -= 1)
                    {
                        int i;
                        (*l_792) = g_760[l_832];
                    }
                }
            }
        }
    }
    (*l_818) ^= (safe_sub_func_uint16_t_u_u((0x6CL >= g_760[3]), ((void*)0 == &l_792)));
    return (*l_792);
}







static char func_8(int p_9, unsigned p_10, char p_11, char p_12)
{
    int **l_572 = &g_275;
    int l_600 = (-5L);
    int l_603 = 0L;
    int l_604 = 0x26FC68A5L;
    int l_605 = (-1L);
    int l_606[8][7] = {{0x0AB33919L,(-10L),0x08236489L,0x0AB33919L,0x08236489L,(-10L),0x0AB33919L},{0x87C43CC6L,0x0AB33919L,(-10L),0x08236489L,0x0AB33919L,0x08236489L,(-10L)},{0x0AB33919L,0x0AB33919L,0x6700696FL,0xA15BD2FAL,0x3864BE97L,0x6700696FL,0x3864BE97L},{0xA15BD2FAL,(-10L),(-10L),0xA15BD2FAL,0x08236489L,0x87C43CC6L,0xA15BD2FAL},{0x6700696FL,0x87C43CC6L,0x62C2CD3FL,0x62C2CD3FL,0x87C43CC6L,0x6700696FL,0x37943D17L},{0x87C43CC6L,0x08236489L,0xA15BD2FAL,(-10L),(-10L),0xA15BD2FAL,0x08236489L},{0x87C43CC6L,0x37943D17L,0x6700696FL,0x87C43CC6L,0x62C2CD3FL,0x62C2CD3FL,0x87C43CC6L},{0x6700696FL,0x08236489L,0x6700696FL,0x62C2CD3FL,0x08236489L,0x37943D17L,0x37943D17L}};
    unsigned char l_613 = 0UL;
    short l_630 = (-1L);
    unsigned l_654[7][2][2];
    int l_702 = 0x44CC6614L;
    int l_728 = 0xBD59D8A8L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_654[i][j][k] = 0x6397DBF1L;
        }
    }
    (**l_572) = (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s((&g_275 == l_572))), p_9));
    if (func_23(g_2, g_91, (((*l_572) == (void*)0) <= p_9), (safe_div_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((0x312EL || 0x3093L) >= ((g_2 <= p_11) && (**l_572))), 5)), (**l_572))) != 0xFDL), (-1L))), (**l_572)))
    {
        int *l_589 = &g_79;
        int l_602[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
        unsigned long long l_607[4][10] = {{0x973A592C067B41DCLL,4UL,1UL,4UL,0x973A592C067B41DCLL,1UL,6UL,6UL,1UL,0x973A592C067B41DCLL},{0x973A592C067B41DCLL,18446744073709551612UL,18446744073709551612UL,0x973A592C067B41DCLL,0xAA3631386EA49388LL,1UL,0x973A592C067B41DCLL,1UL,0xAA3631386EA49388LL,0x973A592C067B41DCLL},{1UL,0x973A592C067B41DCLL,1UL,0xAA3631386EA49388LL,0x973A592C067B41DCLL,18446744073709551612UL,18446744073709551612UL,0x973A592C067B41DCLL,0xAA3631386EA49388LL,1UL},{6UL,6UL,1UL,0x973A592C067B41DCLL,4UL,1UL,4UL,0x973A592C067B41DCLL,1UL,6UL}};
        long long l_610[6][9][4] = {{{7L,(-2L),0L,0x120546836638B27DLL},{(-1L),(-1L),(-1L),(-1L)},{0x120546836638B27DLL,0L,(-2L),7L},{0x7F983381357E075FLL,0L,0x81CFE884469CB813LL,(-1L)},{(-2L),0xD363BBF2E91FB2D8LL,(-1L),0x120546836638B27DLL},{1L,(-1L),(-1L),0xD363BBF2E91FB2D8LL},{0L,(-2L),(-1L),0L},{0L,0x120546836638B27DLL,0L,0x2886F1AE7D3A74AFLL},{0x17BFDFEB8F1F4B45LL,0xC000D67ECA4848A9LL,0x0F4BFF47B2350F44LL,5L}},{{(-2L),0x046E5A437B48FDB2LL,5L,0xC000D67ECA4848A9LL},{(-1L),0x81CFE884469CB813LL,5L,1L},{(-2L),(-1L),0x0F4BFF47B2350F44LL,0L},{0x17BFDFEB8F1F4B45LL,(-1L),0L,0L},{0L,0L,(-1L),0x17BFDFEB8F1F4B45LL},{0L,0x0F4BFF47B2350F44LL,(-1L),(-2L)},{1L,5L,0x81CFE884469CB813LL,(-1L)},{0xC000D67ECA4848A9LL,5L,0x046E5A437B48FDB2LL,(-2L)},{5L,0x0F4BFF47B2350F44LL,0xC000D67ECA4848A9LL,0x17BFDFEB8F1F4B45LL}},{{0x2886F1AE7D3A74AFLL,0L,0x120546836638B27DLL,0L},{0L,(-1L),(-2L),0L},{0xD363BBF2E91FB2D8LL,(-1L),(-1L),1L},{0x120546836638B27DLL,0x81CFE884469CB813LL,0x12C83C6E5FB33746LL,0xC000D67ECA4848A9LL},{0x120546836638B27DLL,0x046E5A437B48FDB2LL,(-1L),5L},{0xD363BBF2E91FB2D8LL,0xC000D67ECA4848A9LL,(-2L),0x2886F1AE7D3A74AFLL},{0L,0x120546836638B27DLL,0x120546836638B27DLL,0L},{0x2886F1AE7D3A74AFLL,(-2L),0xC000D67ECA4848A9LL,0xD363BBF2E91FB2D8LL},{5L,(-1L),0x046E5A437B48FDB2LL,0x120546836638B27DLL}},{{0xC000D67ECA4848A9LL,0x12C83C6E5FB33746LL,0x81CFE884469CB813LL,0x120546836638B27DLL},{1L,(-1L),0L,(-2L)},{0L,(-1L),0xD363BBF2E91FB2D8LL,0x0F4BFF47B2350F44LL},{1L,0x046E5A437B48FDB2LL,1L,0x0C44E29D410E4B0BLL},{0x12C83C6E5FB33746LL,0x120546836638B27DLL,(-1L),7L},{(-1L),(-1L),7L,0x120546836638B27DLL},{0L,5L,7L,0x2886F1AE7D3A74AFLL},{(-1L),0L,(-1L),0L},{0x12C83C6E5FB33746LL,0xD363BBF2E91FB2D8LL,1L,1L}},{{1L,1L,0xD363BBF2E91FB2D8LL,0x12C83C6E5FB33746LL},{0L,(-1L),0L,(-1L)},{0x2886F1AE7D3A74AFLL,7L,5L,0L},{0x120546836638B27DLL,7L,(-1L),(-1L)},{7L,(-1L),0x120546836638B27DLL,0x12C83C6E5FB33746LL},{0x0C44E29D410E4B0BLL,1L,0x046E5A437B48FDB2LL,1L},{0x0F4BFF47B2350F44LL,0xD363BBF2E91FB2D8LL,(-1L),0L},{(-2L),0L,0x7F983381357E075FLL,0x2886F1AE7D3A74AFLL},{0x046E5A437B48FDB2LL,5L,0xC000D67ECA4848A9LL,0x120546836638B27DLL}},{{0x046E5A437B48FDB2LL,(-1L),0x7F983381357E075FLL,7L},{(-2L),0x120546836638B27DLL,(-1L),0x0C44E29D410E4B0BLL},{0x0F4BFF47B2350F44LL,0x046E5A437B48FDB2LL,0x046E5A437B48FDB2LL,0x0F4BFF47B2350F44LL},{0x0C44E29D410E4B0BLL,(-1L),0x120546836638B27DLL,(-2L)},{7L,0x7F983381357E075FLL,(-1L),0x046E5A437B48FDB2LL},{0x120546836638B27DLL,0xC000D67ECA4848A9LL,5L,0x046E5A437B48FDB2LL},{0x2886F1AE7D3A74AFLL,0x7F983381357E075FLL,0L,(-2L)},{0L,0x120546836638B27DLL,0x12C83C6E5FB33746LL,(-1L)},{0x7F983381357E075FLL,0x0C44E29D410E4B0BLL,0x7F983381357E075FLL,(-1L)}}};
        long long l_611 = 6L;
        int l_612 = 0xF2746492L;
        unsigned l_627 = 0x7FC67666L;
        int i, j, k;
        if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(func_40(p_11, ((safe_sub_func_uint8_t_u_u((g_273[0][1] > (**l_572)), (g_2 < ((g_79 | ((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(p_11, (l_589 != (void*)0))), (safe_div_func_int32_t_s_s(p_12, (**l_572))))) || (**l_572))) ^ 6UL)))) <= (**l_572)), p_12), g_273[0][1])), g_2)))
        {
            int *l_592 = &g_96[1][1][0];
            int *l_593 = &g_79;
            int *l_594 = &g_96[1][1][0];
            int l_595 = 0x21AF52F5L;
            int *l_596 = &g_96[8][8][0];
            int *l_597 = (void*)0;
            int *l_598 = &g_96[1][1][0];
            int *l_599[3];
            short l_601[8];
            long long l_645 = 0xD1F222108406755FLL;
            int i;
            for (i = 0; i < 3; i++)
                l_599[i] = &g_96[8][3][1];
            for (i = 0; i < 8; i++)
                l_601[i] = (-1L);
            l_607[3][1]++;
            ++l_613;
            if ((*l_589))
            {
                int l_636 = 5L;
                int l_639[1][8][9] = {{{0xD79337A5L,0xC5092848L,0x2C1B5E5AL,0xC5092848L,0xD79337A5L,0xD79337A5L,0xC5092848L,0x2C1B5E5AL,0xC5092848L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0xD79337A5L,0xD79337A5L,0xC5092848L,0x2C1B5E5AL,0xC5092848L,0xD79337A5L,0xD79337A5L,0xC5092848L,0x2C1B5E5AL},{0x08BD0A21L,0L,0x08BD0A21L,0L,0L,0x08BD0A21L,0L,0x08BD0A21L,0L},{0L,0xC5092848L,0xC5092848L,0L,0x468E3C53L,0L,0xC5092848L,0xC5092848L,0L},{(-8L),0L,0L,0L,(-8L),(-8L),0L,0L,0L},{0xC5092848L,0x468E3C53L,0x2C1B5E5AL,0x2C1B5E5AL,0x468E3C53L,0xC5092848L,0x468E3C53L,0x2C1B5E5AL,0x2C1B5E5AL},{(-8L),(-8L),0L,0L,0L,(-8L),(-8L),0L,0L}}};
                char l_644 = (-1L);
                unsigned l_647 = 0xD7BD9407L;
                int i, j, k;
                for (p_10 = 0; (p_10 != 29); p_10++)
                {
                    int l_621 = 0x8E4D0E56L;
                    int l_637 = 0x780D3762L;
                    if ((((**l_572) == p_12) & 0x23L))
                    {
                        short l_631 = 0x63F0L;
                        (*g_275) ^= (250UL || (&l_599[0] == (void*)0));
                        l_631 ^= (!(func_31(g_620, (g_273[0][1] ^ l_621), (((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(0L, (safe_unary_minus_func_uint32_t_u((l_627 >= (*l_589)))))), g_96[9][3][1])) & p_11) ^ (safe_rshift_func_uint8_t_u_s(func_40(p_11, l_630, (*g_275)), 1))), p_12, g_96[1][1][0]) <= 18446744073709551615UL));
                        (*g_275) = (((safe_rshift_func_int8_t_s_s(((0UL >= (*l_589)) & (safe_add_func_uint64_t_u_u((p_10 & func_40(l_631, g_96[1][1][0], l_631)), g_96[2][9][1]))), 0)) || func_31(g_2, l_631, g_79, p_11, (**l_572))) <= g_96[7][3][1]);
                        (*g_274) = (*g_274);
                    }
                    else
                    {
                        char l_638 = 0x0DL;
                        int l_640[9][1] = {{0x64537965L},{0x6E143E26L},{0x64537965L},{0x64537965L},{0x6E143E26L},{0x64537965L},{0x64537965L},{0x6E143E26L},{0x64537965L}};
                        int i, j;
                        g_641++;
                        if ((**l_572))
                            break;
                        return g_96[0][8][1];
                    }
                    return g_620;
                }
                l_647--;
            }
            else
            {
                unsigned long long l_655[4][8] = {{0x7D476422F3B06C23LL,1UL,0x7D476422F3B06C23LL,0x719D5D83AAF8817ALL,18446744073709551607UL,0UL,0x72F6E8A9AE925E59LL,18446744073709551606UL},{0UL,18446744073709551606UL,18446744073709551610UL,0x719D5D83AAF8817ALL,0x719D5D83AAF8817ALL,18446744073709551610UL,18446744073709551606UL,0UL},{0UL,18446744073709551608UL,18446744073709551607UL,0xAB9AD223A0241C7BLL,18446744073709551606UL,0UL,18446744073709551610UL,0UL},{0xAB9AD223A0241C7BLL,0x72F6E8A9AE925E59LL,0xD3734B6C0A000D29LL,0x72F6E8A9AE925E59LL,0xAB9AD223A0241C7BLL,0UL,0x7D476422F3B06C23LL,18446744073709551606UL}};
                int *l_656 = &l_603;
                int i, j;
                l_655[2][2] = ((&g_274 != (void*)0) == ((g_620 & (((safe_mod_func_uint16_t_u_u(0x8026L, p_10)) & (func_18((~0xE0638D45E51EBCCFLL), (1L & ((**l_572) | 0xAAL)), g_641, g_96[3][0][1]) <= 0x94938B3BL)) | l_654[2][0][0])) | 0L));


                (*g_274) = l_656;

                ;
                for (l_612 = 0; (l_612 < 25); l_612++)
                {
                    (**g_274) = (g_2 ^ 0x56C6L);
                    return g_273[0][1];


                }
            }


        }
        else
        {
            (*l_572) = (*g_274);
        }


        (**g_274) = (((*l_589) & p_12) >= func_40((safe_add_func_uint32_t_u_u(p_10, ((*l_589) != (((safe_lshift_func_uint16_t_u_s(((g_273[0][1] >= (safe_sub_func_uint16_t_u_u(g_79, (((((0xA201C9055F9B0B6FLL == ((g_91 && (p_12 || 8UL)) & g_2)) != g_646) & (*l_589)) || p_9) < (*l_589))))) < 0x1B52L), (*l_589))) != g_96[2][1][0]) >= g_620)))), (*l_589), p_9));
        (*l_572) = (*l_572);
        (*l_589) |= (1UL ^ (safe_sub_func_uint16_t_u_u((**l_572), (~1L))));
    }
    else
    {
        int **l_686 = (void*)0;
        unsigned l_712 = 18446744073709551612UL;
        int l_718 = 0xFFEA689FL;
        int l_720 = 0x08F9F071L;
        int l_723[5][2] = {{8L,8L},{1L,8L},{8L,1L},{8L,8L},{1L,8L}};
        int i, j;
        for (g_641 = (-6); (g_641 > 30); g_641 = safe_add_func_uint64_t_u_u(g_641, 5))
        {
            unsigned short l_673 = 0xAEF9L;
            int l_700 = 1L;
            int l_701 = 0x986A50FFL;
            int l_705 = 0xD8345063L;
            char l_706 = 0xD8L;
            int l_709 = 7L;
            int l_710[7] = {0x9AF0D2F4L,0x9AF0D2F4L,0x9AF0D2F4L,0x9AF0D2F4L,0x9AF0D2F4L,0x9AF0D2F4L,0x9AF0D2F4L};
            int l_725 = (-1L);
            unsigned l_729 = 18446744073709551608UL;
            int i;
            for (l_604 = 2; (l_604 >= 18); l_604++)
            {
                unsigned l_678[3][10] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
                unsigned char l_679 = 6UL;
                int i, j;
                (*l_572) = (*l_572);
                if (p_10)
                    continue;
                if ((*g_275))
                    break;
                (**l_572) = ((**l_572) | ((safe_rshift_func_int8_t_s_u((-1L), (l_673 < 0x330E6AC7L))) ^ (((*g_275) & (safe_mod_func_int32_t_s_s((+(&g_274 != &g_274)), ((func_13((safe_div_func_uint16_t_u_u((p_11 >= (l_678[2][8] | g_641)), g_273[0][1])), g_91) ^ p_12) | 18446744073709551610UL)))) > l_679)));
            }
            if (func_18((safe_rshift_func_int8_t_s_s(g_79, (safe_mod_func_uint32_t_u_u(g_96[2][8][0], l_673)))), (safe_lshift_func_int16_t_s_u((l_686 == (void*)0), 4)), (safe_add_func_int64_t_s_s(((l_686 != &g_275) & g_79), (((g_96[1][1][0] >= p_11) ^ 0xF9EBL) && p_11))), p_9))
            {
                long long l_694 = 0x997671E3EB19B5E2LL;
                int l_703 = 0xDFCE629AL;
                int l_704 = 5L;
                int l_716 = 0x63B314AAL;
                int l_717 = 0x1DACCB1CL;
                int l_719 = 0xFBE6F93BL;
                int l_721[4][2][4] = {{{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L},{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L}},{{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L},{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L}},{{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L},{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L}},{{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L},{(-2L),0xCB960BB1L,(-2L),0xCB960BB1L}}};
                char l_741[6][6] = {{0x23L,1L,1L,(-1L),1L,1L},{1L,0x23L,1L,0x15L,0x15L,1L},{1L,1L,0x15L,(-1L),(-10L),(-1L)},{0x23L,1L,0x23L,1L,0x15L,0x15L},{1L,0x23L,0x23L,1L,1L,(-1L)},{(-1L),1L,0x15L,1L,(-1L),1L}};
                int i, j, k;
                for (g_646 = 1; (g_646 >= 0); g_646 -= 1)
                {
                    int l_691 = 0xAE0B4BD7L;
                    int l_699 = 0xADE91E62L;
                    int l_707 = 0xAE3AA19DL;
                    int l_708 = (-1L);
                    short l_711 = 0L;
                    int l_715 = 0L;
                    int l_724[2];
                    int l_726[2][3][3] = {{{0xAA6D3B9AL,(-1L),(-1L)},{0xAA6D3B9AL,(-1L),(-1L)},{0xAA6D3B9AL,(-1L),(-1L)}},{{0xAA6D3B9AL,(-1L),(-1L)},{0xAA6D3B9AL,(-1L),(-1L)},{0xAA6D3B9AL,(-1L),(-1L)}}};
                    char l_740 = 0L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_724[i] = 0x6DFCB812L;
                    for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
                    {
                        int l_695[6][10] = {{1L,(-1L),(-1L),1L,0x64E06301L,0x2F457DF9L,1L,1L,(-1L),(-1L)},{0x6572135BL,0L,(-1L),1L,(-1L),0x7DE054A7L,(-1L),1L,(-1L),0L},{0xABE23BC0L,(-1L),0xD3E4AE60L,1L,(-8L),0xCA508FC6L,0x2F457DF9L,(-1L),0x64E06301L,0x64E06301L},{(-1L),(-1L),0xCA508FC6L,0L,0L,(-1L),0xA72F4D86L,0xABE23BC0L,0xCA508FC6L,(-1L)},{(-8L),1L,1L,0xABE23BC0L,1L,0L,0x2F457DF9L,(-1L),0x2F457DF9L,0L},{0x64E06301L,1L,1L,1L,0x64E06301L,(-1L),0xCA508FC6L,0xABE23BC0L,0xA72F4D86L,(-1L)}};
                        int *l_696 = &l_606[4][1];
                        int i, j, k;
                        l_695[4][2] |= ((safe_mod_func_uint64_t_u_u(((!func_13(l_654[(g_646 + 2)][p_9][p_9], l_691)) >= g_91), (safe_mod_func_uint8_t_u_u(l_694, p_9)))) & p_10);
                        (*l_696) &= p_9;
                    }
                    for (l_673 = 0; (l_673 <= 1); l_673 += 1)
                    {
                        int *l_697 = &g_96[1][1][0];
                        int *l_698[10][5] = {{(void*)0,&l_606[1][2],&g_79,(void*)0,&g_96[1][1][0]},{&g_79,(void*)0,&l_606[2][2],(void*)0,&g_79},{&g_79,&l_606[1][0],&l_606[1][2],&g_96[1][1][0],&l_606[1][0]},{&g_79,&l_606[1][2],&l_606[1][2],&g_79,&g_96[1][1][0]},{(void*)0,&g_79,&l_606[2][2],&l_606[1][0],&l_606[1][0]},{&g_79,&g_79,&g_79,&g_96[1][1][0],&g_79},{&l_606[1][0],&l_606[1][2],&g_96[1][1][0],&l_606[1][0],&g_96[1][1][0]},{&l_606[1][0],&l_606[1][0],&l_606[2][2],&g_79,(void*)0},{&g_79,(void*)0,&g_96[1][1][0],&g_96[1][1][0],(void*)0},{(void*)0,&l_606[1][2],&g_79,(void*)0,&g_96[1][1][0]}};
                        int l_722 = (-1L);
                        char l_727 = 6L;
                        int l_739 = 1L;
                        int i, j;
                        --l_712;
                        --l_729;
                        l_708 |= func_50(g_646, (safe_div_func_int16_t_s_s(g_273[0][1], ((p_12 & (g_641 > (safe_sub_func_int32_t_s_s(((void*)0 == &g_79), (g_96[1][1][0] == (safe_div_func_uint64_t_u_u(func_31((g_738 | func_40((&l_572 != &g_274), g_96[1][1][0], l_739)), l_721[2][0][0], l_740, l_741[4][1], l_711), g_2))))))) || 3L))));
                    }
                }
            }
            else
            {
                int *l_748 = (void*)0;
                int l_763 = 0x93BD99E3L;
                int l_779[1][1][10] = {{{0x37FD8724L,0x454C5BD1L,0x37FD8724L,0x454C5BD1L,0x37FD8724L,0x454C5BD1L,0x37FD8724L,0x454C5BD1L,0x37FD8724L,0x454C5BD1L}}};
                int i, j, k;
                for (p_9 = 0; (p_9 >= (-2)); p_9 = safe_sub_func_uint64_t_u_u(p_9, 4))
                {
                    int *l_749 = &l_718;
                    char l_766 = 0x43L;
                    for (l_604 = 7; (l_604 != 17); ++l_604)
                    {
                        l_710[1] = (~(safe_lshift_func_uint16_t_u_u((g_641 != 18446744073709551615UL), 13)));
                    }
                    (*l_749) = ((void*)0 != l_748);
                    for (l_728 = 28; (l_728 < 24); l_728 = safe_sub_func_int64_t_s_s(l_728, 4))
                    {
                        (*l_749) ^= p_9;
                        if (p_10)
                            break;
                        l_763 |= func_13(g_760[2], g_2);
                    }
                    for (g_79 = 0; (g_79 <= 1); g_79 += 1)
                    {
                        int i, j;
                        (*l_749) = ((safe_rshift_func_uint8_t_u_u(l_723[(g_79 + 1)][g_79], 6)) != l_723[(g_79 + 1)][g_79]);
                        l_766 = l_709;
                        if (p_11)
                            continue;
                    }
                }
                if (p_9)
                {
                    int l_769 = 0x85785D92L;
                    int l_774[5];
                    int ***l_778 = (void*)0;
                    int *l_780 = &g_96[3][1][0];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_774[i] = 0xA9C7B560L;
                    if ((safe_add_func_int8_t_s_s((6UL || func_40(l_769, g_96[6][0][1], l_769)), g_646)))
                    {
                        int *l_770 = (void*)0;
                        int *l_771 = &l_718;
                        (*l_771) = (-1L);
                        (*l_771) = ((p_11 & g_646) && (0xB0D95D2FL | (p_12 && func_64(g_646, (p_9 == 0UL), g_641, p_12, g_96[1][1][0]))));
                    }
                    else
                    {
                        unsigned l_775 = 0x99864573L;
                        l_775--;
                        l_779[0][0][8] = (l_778 == &g_274);
                        return p_12;


                    }
                    (*g_274) = (void*)0;

                    ;
                    (*l_780) = p_11;
                }
                else
                {
                    int *l_781 = &g_96[8][7][0];
                    (*g_274) = l_781;

                    ;
                    for (l_709 = 0; (l_709 <= 1); l_709 += 1)
                    {
                        int *l_782 = &l_718;
                        int i;
                        l_782 = &l_710[(l_709 + 1)];

                        ;
                        (*l_572) = &l_710[(l_709 + 5)];

                        ;
                        (*l_572) = &l_710[(l_709 + 3)];
                        if ((*l_782))
                            break;
                    }

                    ;
                    if ((**l_572))
                        break;

                    (**g_274) |= func_13(g_2, g_760[2]);
                }

                ;
            }


            (*g_274) = &l_723[0][0];

            ;
            (**g_274) |= ((((0L && ((~func_50(p_12, g_91)) <= ((safe_sub_func_int16_t_s_s(l_710[1], g_91)) ^ (safe_unary_minus_func_uint16_t_u(0UL))))) != ((safe_rshift_func_int8_t_s_u((-3L), g_641)) <= 0xB205L)) >= 0UL) | 0x9085C53CL);
        }


    }


    return g_760[4];


}







static char func_13(char p_14, char p_15)
{
    unsigned char l_46 = 0UL;
    int l_49[1];
    long long l_142 = (-10L);
    unsigned l_544 = 0x2BF30B22L;
    int *l_557 = &l_49[0];
    int *l_558 = &l_49[0];
    int *l_559 = &g_79;
    int *l_560 = (void*)0;
    int *l_561 = &l_49[0];
    int *l_562 = &l_49[0];
    int *l_563 = &g_96[6][1][0];
    int *l_564[4][1][1];
    short l_565[3];
    unsigned l_566[6][7] = {{0x3F477E50L,0x0C0CDE61L,0x3F477E50L,4294967292UL,0x3F477E50L,0x0C0CDE61L,0x3F477E50L},{0xE5F95A98L,0x49A4BD57L,0x49A4BD57L,0xE5F95A98L,0UL,0xB71F9F1AL,0xB71F9F1AL},{4294967293UL,0x0C0CDE61L,0xE444631AL,0x0C0CDE61L,4294967293UL,0x0C0CDE61L,0xE444631AL},{0UL,0xE5F95A98L,0x49A4BD57L,0x49A4BD57L,0xE5F95A98L,0UL,0xB71F9F1AL},{0x3F477E50L,4294967292UL,0x3F477E50L,0x0C0CDE61L,0x3F477E50L,4294967292UL,0x3F477E50L},{0UL,0x49A4BD57L,0xB71F9F1AL,0xE5F95A98L,0xE5F95A98L,0xB71F9F1AL,0x49A4BD57L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_49[i] = 0xE7CCCE1CL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_564[i][j][k] = &g_79;
        }
    }
    for (i = 0; i < 3; i++)
        l_565[i] = (-1L);
    for (p_15 = 0; (p_15 >= (-20)); p_15--)
    {
        int l_37 = (-3L);
        int *l_532 = &g_79;
        int l_537 = 0x88FA732AL;
        int l_538 = 0x6FAD5FEBL;
        int l_539 = 0L;
        int l_540 = (-1L);
        int l_541 = 0xFE06B0E0L;
        int l_542 = 0x38688160L;
        int l_543[7][5][1] = {{{0L},{2L},{0L},{0xEBF61345L},{0x0B090413L}},{{0x2580D25EL},{5L},{0x2580D25EL},{0x0B090413L},{0xEBF61345L}},{{0L},{2L},{0L},{0xEBF61345L},{0x0B090413L}},{{0x2580D25EL},{5L},{0x2580D25EL},{0x0B090413L},{0xEBF61345L}},{{0L},{2L},{0L},{0xEBF61345L},{0x0B090413L}},{{0x2580D25EL},{5L},{0x2580D25EL},{0x0B090413L},{0xEBF61345L}},{{0L},{2L},{0L},{0xEBF61345L},{0x0B090413L}}};
        short l_547 = (-1L);
        int i, j, k;
    }
    for (l_142 = 0; l_142 < 1; l_142 += 1)
    {
        for (p_15 = 0; p_15 < 2; p_15 += 1)
        {
            g_273[l_142][p_15] = 0xF62EE068L;
        }
    }
    l_566[2][0]--;
    return g_91;
}







static char func_18(long long p_19, unsigned p_20, unsigned p_21, unsigned char p_22)
{
    int l_144 = (-7L);
    int l_166 = 0xC5F34EB0L;
    int l_171 = 9L;
    int l_172 = 1L;
    int l_174[7] = {0x6930D83EL,0x6930D83EL,(-2L),0x6930D83EL,0x6930D83EL,(-2L),0x6930D83EL};
    unsigned l_187 = 0x25D17A2BL;
    int *l_208 = &l_166;
    unsigned long long l_213[5];
    char l_240 = 0xA0L;
    unsigned char l_251 = 0x1DL;
    int ***l_300 = (void*)0;
    int l_361 = 0L;
    unsigned char l_366 = 249UL;
    char l_460 = 7L;
    int l_461 = 0x3DC82C9FL;
    int *l_463 = (void*)0;
    unsigned long long l_529 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 5; i++)
        l_213[i] = 18446744073709551615UL;
    if (l_144)
    {
        int l_146[8][6][2] = {{{(-4L),0x36249A0EL},{4L,4L},{(-1L),0xD3E0DDACL},{0x07550281L,0x736CA90BL},{0x2757DA90L,0x7441625CL},{(-4L),0x2757DA90L}},{{0xA1F86F26L,0xC0AFFF8CL},{0xA1F86F26L,0x2757DA90L},{(-4L),0x7441625CL},{0x2757DA90L,0x736CA90BL},{(-1L),0x07550281L},{(-1L),0xD3E0DDACL}},{{0xD3E0DDACL,(-4L)},{0x20FB557DL,(-1L)},{4L,0x7441625CL},{0x07550281L,0x7441625CL},{4L,(-1L)},{0x20FB557DL,(-4L)}},{{0xD3E0DDACL,0xD3E0DDACL},{(-1L),0x07550281L},{(-1L),0xC0AFFF8CL},{0x736CA90BL,0xA1F86F26L},{0x7F9B73E1L,0x736CA90BL},{(-4L),4L}},{{(-4L),0x736CA90BL},{0x7F9B73E1L,0xA1F86F26L},{0x736CA90BL,0xC0AFFF8CL},{(-1L),0x07550281L},{(-1L),0xD3E0DDACL},{0xD3E0DDACL,(-4L)}},{{0x20FB557DL,(-1L)},{4L,0x7441625CL},{0x07550281L,0x7441625CL},{4L,(-1L)},{0x20FB557DL,(-4L)},{0xD3E0DDACL,0xD3E0DDACL}},{{(-1L),0x07550281L},{(-1L),0xC0AFFF8CL},{0x736CA90BL,0xA1F86F26L},{0x7F9B73E1L,0x736CA90BL},{(-4L),4L},{(-4L),0x736CA90BL}},{{0x7F9B73E1L,0xA1F86F26L},{0x736CA90BL,0xC0AFFF8CL},{(-1L),0x07550281L},{(-1L),0xD3E0DDACL},{0xD3E0DDACL,(-4L)},{0x20FB557DL,(-1L)}}};
        int l_152 = 0x8501F8A6L;
        int l_160 = 0x593A31CAL;
        int l_169 = 0L;
        int l_170 = (-7L);
        int l_173 = 0x91180856L;
        int l_175 = 0x51E4EA56L;
        int l_176 = 0x44F0F885L;
        int l_177 = 0x980C72C3L;
        short l_178 = 1L;
        int l_179 = (-1L);
        int l_180 = (-7L);
        int l_181 = 1L;
        int l_182 = 0L;
        int l_183 = 1L;
        int l_184 = 0xB2649211L;
        int l_185 = 0x1E5330FBL;
        int l_186 = 0x32F71DAFL;
        int *l_205 = &l_152;
        int ***l_223 = (void*)0;
        int i, j, k;
        if (p_21)
        {
            long long l_145 = (-1L);
            int l_147 = (-1L);
            l_147 ^= (func_23((p_20 > 0xBB63C67237AF6748LL), func_64(g_2, p_21, p_21, g_96[6][8][1], func_50(((l_145 > 0UL) & ((0xD7L >= g_2) ^ p_19)), g_2)), l_146[1][5][1], p_22, g_91) == (-1L));
        }
        else
        {
            int *l_148 = (void*)0;
            int *l_149 = &l_144;
            int *l_150 = &g_96[8][5][0];
            int *l_151 = (void*)0;
            int *l_153 = &g_79;
            int *l_154 = &l_152;
            int *l_155 = &g_96[5][4][0];
            int *l_156 = &g_79;
            int *l_157 = &l_152;
            int *l_158 = (void*)0;
            int *l_159 = &l_144;
            int *l_161 = &l_152;
            int *l_162 = &l_152;
            int *l_163 = &l_160;
            int *l_164 = &l_144;
            int *l_165 = &l_144;
            int *l_167 = (void*)0;
            int *l_168[10][3][6] = {{{&l_166,(void*)0,(void*)0,&l_166,&l_166,&l_152},{&l_166,&l_166,&l_152,&l_160,(void*)0,&l_152},{&g_79,&g_79,(void*)0,&g_96[1][1][0],(void*)0,&g_79}},{{&l_160,(void*)0,&g_79,&g_79,(void*)0,&g_96[1][1][0]},{&l_166,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152,&l_152},{&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],(void*)0,&l_166}},{{&g_96[1][1][0],(void*)0,&l_166,&g_96[1][1][0],&g_96[1][1][0],&l_166},{&l_166,&l_152,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152},{&g_96[1][1][0],(void*)0,&g_79,&g_79,(void*)0,&g_96[1][1][0]}},{{&l_166,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152,&l_152},{&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],(void*)0,&l_166},{&g_96[1][1][0],(void*)0,&l_166,&g_96[1][1][0],&g_96[1][1][0],&l_166}},{{&l_166,&l_152,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152},{&g_96[1][1][0],(void*)0,&g_79,&g_79,(void*)0,&g_96[1][1][0]},{&l_166,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152,&l_152}},{{&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],&g_96[1][1][0],(void*)0,&l_166},{&g_96[1][1][0],(void*)0,&l_166,&g_96[1][1][0],&g_96[1][1][0],&l_166},{&l_166,&l_152,&g_96[1][1][0],&g_79,&g_96[1][1][0],&l_152}},{{&g_96[1][1][0],(void*)0,&g_79,&g_79,(void*)0,&g_96[1][1][0]},{&l_166,&g_96[4][0][0],&l_152,&l_152,&l_152,&l_152},{&g_96[1][1][0],&g_96[4][0][0],&g_96[4][0][0],&g_96[1][1][0],(void*)0,&l_152}},{{&g_96[1][1][0],(void*)0,&l_152,&l_152,&g_96[4][0][0],&l_152},{(void*)0,&l_152,&g_96[4][0][0],&l_166,&g_96[4][0][0],&l_152},{&l_152,(void*)0,&l_152,&l_166,(void*)0,&g_96[4][0][0]}},{{(void*)0,&g_96[4][0][0],&l_152,&l_152,&l_152,&l_152},{&g_96[1][1][0],&g_96[4][0][0],&g_96[4][0][0],&g_96[1][1][0],(void*)0,&l_152},{&g_96[1][1][0],(void*)0,&l_152,&l_152,&g_96[4][0][0],&l_152}},{{(void*)0,&l_152,&g_96[4][0][0],&l_166,&g_96[4][0][0],&l_152},{&l_152,(void*)0,&l_152,&l_166,(void*)0,&g_96[4][0][0]},{(void*)0,&g_96[4][0][0],&l_152,&l_152,&l_152,&l_152}}};
            int i, j, k;
            l_187++;
            (*l_159) = (safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(0x8EEF4AF9L, g_2)), (safe_rshift_func_uint16_t_u_s(0UL, (&g_79 == (void*)0))))), ((safe_lshift_func_uint16_t_u_u(p_19, 5)) > ((*l_155) < g_96[2][0][0]))));
            (*l_162) = l_172;
        }
        if (l_172)
        {
            int **l_202 = (void*)0;
            int *l_204 = &l_186;
            int **l_203[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_205 = &g_96[7][7][0];

            ;
        }
        else
        {
            int **l_207[8];
            int ***l_206 = &l_207[1];
            char l_226[1];
            unsigned l_234 = 1UL;
            unsigned short l_238 = 0xB092L;
            int i;
            for (i = 0; i < 8; i++)
                l_207[i] = &l_205;
            for (i = 0; i < 1; i++)
                l_226[i] = 7L;
            (*l_206) = &l_205;
            for (l_183 = 1; (l_183 >= 0); l_183 -= 1)
            {
                int l_227 = (-8L);
                int l_233[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_233[i] = (-1L);
                l_208 = &l_172;

                ;
            }

            ;
            (*l_208) = (&g_96[7][8][0] != (void*)0);
        }

        ;
        ;
    }
    else
    {
        int **l_239 = &l_208;
        int l_247 = 0xEFD839D0L;
        int l_248 = 2L;
        int l_249 = 0L;
        int l_250[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_258 = 0x41B5CCA7L;
        int i;
        (*l_239) = &l_171;

        ;
        if (l_240)
        {
            int *l_241 = &l_174[3];
            int *l_242 = &l_172;
            int *l_243 = (void*)0;
            char l_244 = 3L;
            int *l_245 = &g_96[1][1][0];
            int *l_246[6];
            int l_272 = 0L;
            int i;
            for (i = 0; i < 6; i++)
                l_246[i] = &l_171;
            l_251++;
            for (l_166 = 0; (l_166 == 9); l_166++)
            {
                unsigned l_259[7] = {0x3B5E6BF7L,0x3B5E6BF7L,0x1A364701L,0x3B5E6BF7L,0x3B5E6BF7L,0x1A364701L,0x3B5E6BF7L};
                int *l_262[9] = {&l_144,(void*)0,&l_144,(void*)0,&l_144,(void*)0,&l_144,(void*)0,&l_144};
                int i;
                for (p_21 = 0; (p_21 <= 43); p_21++)
                {
                    --l_259[2];
                }
                for (l_172 = 1; (l_172 <= 4); l_172 += 1)
                {
                    long long l_271[1][10] = {{9L,9L,9L,9L,9L,9L,9L,9L,9L,9L}};
                    int i, j;
                    g_273[0][1] &= ((((&g_79 == l_262[4]) && (p_20 < (!(!((((safe_rshift_func_int8_t_s_u((func_23(((((((safe_div_func_int16_t_s_s((l_271[0][5] >= (1L | l_271[0][5])), 0x0AC4L)) <= ((**l_239) != p_20)) | l_272) == p_22) <= p_20) || g_2), (*l_208), g_96[1][1][0], g_2, g_2) >= p_21), p_22)) >= g_91) < g_91) <= 0UL))))) == 1L) & g_2);
                }
            }
            (*g_275) = func_40((*l_208), (((void*)0 != g_274) <= func_31(g_79, (**l_239), p_19, p_20, (*l_242))), p_22);
            for (p_21 = (-10); (p_21 != 58); p_21 = safe_add_func_uint32_t_u_u(p_21, 6))
            {
                unsigned long long l_280 = 1UL;
                if (p_20)
                {
                    return p_22;


                }
                else
                {
                    int *l_282[5] = {&l_166,&l_166,&l_166,&l_166,&l_166};
                    int i;
                    for (l_251 = (-27); (l_251 < 10); l_251++)
                    {
                        int ***l_281 = &g_274;
                        (*l_241) &= (0x1608L == g_273[0][1]);
                        if (p_19)
                            break;
                        (***l_281) = (p_19 == (0x2CDCAF69L <= (((g_273[0][1] & l_280) == ((void*)0 == l_281)) >= p_22)));
                        (*g_274) = l_282[4];

                        ;
                    }


                    if ((**g_274))
                    {
                        int l_283 = (-8L);
                        (*l_242) = (**g_274);
                        if ((*g_275))
                            break;
                        (*l_208) |= l_283;
                        (**g_274) |= 0x0603867BL;
                    }
                    else
                    {
                        int *l_284 = &l_174[1];
                        (*g_274) = l_284;

                        ;
                        if (p_19)
                            continue;
                    }
                }


                return p_21;


            }


        }
        else
        {
            unsigned long long l_285 = 0x5E0A1B0E9A87DC64LL;
            short l_342[6] = {(-1L),(-10L),(-10L),(-1L),(-10L),(-10L)};
            int l_346 = 0xB0BE778CL;
            int l_347 = 4L;
            unsigned l_355 = 0x709605DDL;
            int **l_360[7][7][5] = {{{&l_208,&l_208,&g_275,(void*)0,&g_275},{&g_275,&l_208,&g_275,&l_208,&g_275},{(void*)0,(void*)0,&l_208,&l_208,&g_275},{&g_275,&l_208,&g_275,(void*)0,&g_275},{&g_275,&g_275,(void*)0,&l_208,&l_208},{(void*)0,&g_275,&g_275,&g_275,&g_275},{&l_208,&l_208,&g_275,&l_208,&l_208}},{{&g_275,&g_275,&g_275,&l_208,&l_208},{&g_275,&l_208,&l_208,&g_275,&l_208},{&l_208,&g_275,(void*)0,&l_208,&l_208},{&l_208,&g_275,&l_208,(void*)0,(void*)0},{&l_208,(void*)0,&g_275,&l_208,(void*)0},{(void*)0,(void*)0,(void*)0,&l_208,(void*)0},{&l_208,&g_275,&g_275,(void*)0,&g_275}},{{&g_275,&l_208,&l_208,&g_275,&l_208},{&g_275,&l_208,(void*)0,(void*)0,&g_275},{&l_208,&g_275,&l_208,&l_208,(void*)0},{&l_208,&g_275,&l_208,&l_208,&l_208},{&g_275,&g_275,&g_275,&l_208,(void*)0},{&l_208,&g_275,(void*)0,&g_275,&g_275},{&g_275,&g_275,&l_208,&l_208,&g_275}},{{(void*)0,&g_275,(void*)0,&l_208,(void*)0},{(void*)0,&g_275,&g_275,&l_208,(void*)0},{&g_275,&g_275,&g_275,(void*)0,&l_208},{(void*)0,(void*)0,&g_275,&l_208,&g_275},{(void*)0,&g_275,&l_208,(void*)0,&l_208},{&g_275,&l_208,&g_275,&g_275,&l_208},{&l_208,(void*)0,&g_275,&g_275,&g_275}},{{&g_275,&l_208,&l_208,&g_275,&g_275},{&l_208,(void*)0,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208},{&g_275,&l_208,&l_208,&g_275,&g_275},{&g_275,&l_208,&l_208,&l_208,&l_208},{&g_275,(void*)0,&l_208,(void*)0,(void*)0},{(void*)0,&l_208,(void*)0,(void*)0,&g_275}},{{&g_275,&g_275,&l_208,&l_208,&g_275},{&l_208,&l_208,&g_275,&g_275,&g_275},{(void*)0,&l_208,&g_275,&l_208,&l_208},{&l_208,&g_275,&g_275,&g_275,(void*)0},{&l_208,&l_208,&g_275,&l_208,&g_275},{&l_208,&g_275,&g_275,&g_275,(void*)0},{&g_275,&g_275,&g_275,&g_275,&g_275}},{{&l_208,&l_208,&l_208,&l_208,&g_275},{(void*)0,(void*)0,&l_208,&g_275,&l_208},{&g_275,&l_208,&l_208,&g_275,&g_275},{&l_208,(void*)0,&l_208,(void*)0,&g_275},{&g_275,&l_208,&l_208,&g_275,&g_275},{&g_275,&g_275,&g_275,&l_208,&g_275},{(void*)0,&g_275,&g_275,&g_275,&l_208}}};
            int i, j, k;
            (*l_239) = &l_144;

            ;
            ++l_285;
            for (l_171 = 0; (l_171 <= 5); l_171 += 1)
            {
                unsigned l_340[2][7][3] = {{{0xF501A3F5L,0xA27B1B8DL,4294967295UL},{0xCAEB6208L,0xA395CD1FL,0xCAEB6208L},{1UL,0xF501A3F5L,4294967295UL},{5UL,5UL,0xDDC266FCL},{0UL,0xF501A3F5L,0xF501A3F5L},{0xDDC266FCL,0xA395CD1FL,0xDC848210L},{0UL,0xA27B1B8DL,0UL}},{{5UL,0xDDC266FCL,0xCAEB6208L},{0xA27B1B8DL,0xA27B1B8DL,1UL},{0xDDC266FCL,5UL,5UL},{1UL,4294967295UL,0UL},{0xDDC266FCL,0xDC848210L,0xDDC266FCL},{0xA27B1B8DL,1UL,0UL},{0xA395CD1FL,0xA395CD1FL,5UL}}};
                unsigned char l_349[4] = {4UL,4UL,4UL,4UL};
                int l_364[6];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_364[i] = (-1L);
            }
            --l_366;
        }

        ;

    }

    ;

    (*g_274) = (*g_274);
    for (p_21 = 0; p_21 < 5; p_21 += 1)
    {
        l_213[p_21] = 0x43CFCDDD6CE07A3ELL;
    }
    for (l_361 = 1; (l_361 >= 0); l_361 -= 1)
    {
        int *l_369 = &g_79;
        int ***l_370 = &g_274;
        int l_394 = 0x45A170B9L;
        int l_395 = 0x5042F52BL;
        long long l_402 = 0x9D6595C8F116ACDCLL;
        int l_439 = 1L;
        int l_441 = 0xC9A607A2L;
        int l_442 = 0xABC02B33L;
        int l_443 = 6L;
        int l_444 = (-9L);
        int l_445 = 6L;
        int l_447[9][10][2] = {{{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L}},{{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L}},{{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L}},{{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L}},{{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L}},{{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L}},{{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L}},{{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L}},{{0L,0xA6C16757L},{0xA6C16757L,0L},{0xA6C16757L,0xA6C16757L},{0L,0xA6C16757L},{0L,0x16913AACL},{0L,0L},{0x16913AACL,0L},{0L,0x16913AACL},{0L,0L},{0x16913AACL,0L}}};
        unsigned char l_448 = 255UL;
        unsigned l_469 = 0xC6BE7F95L;
        int l_488 = 0xF9C7B3B3L;
        int **l_500 = &l_208;
        char l_524[2][1];
        unsigned long long l_526[2][9][10] = {{{0x0C446676C953A1F9LL,0UL,0xF87F9BE3DF3A458BLL,0x0C446676C953A1F9LL,18446744073709551613UL,0x9A28CC2A3B522196LL,18446744073709551615UL,5UL,7UL,18446744073709551615UL},{7UL,18446744073709551615UL,1UL,0xFED6F3641B011954LL,0x78BBDA18BDCD3AE9LL,18446744073709551615UL,0UL,0x51B3EE105B85C10ELL,0UL,18446744073709551615UL},{0xE802528D225FF147LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xE802528D225FF147LL,0x54577E0D34D4A3DFLL,0UL,0x369FA2E835B62970LL,0UL,18446744073709551615UL},{0xE9722AC7F24C4270LL,18446744073709551615UL,18446744073709551615UL,0xE802528D225FF147LL,0xDDEA0169262A8623LL,1UL,18446744073709551615UL,7UL,18446744073709551613UL,18446744073709551615UL},{5UL,0xE802528D225FF147LL,18446744073709551615UL,1UL,0xE802528D225FF147LL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,0x3D9286445DF67443LL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x5115F97BF88DEDF4LL,0xF8FCF2547A4136E1LL,0x78BBDA18BDCD3AE9LL,18446744073709551615UL,0x0E32F749A11D5682LL,7UL,0xAFF7B2476343994DLL,18446744073709551615UL},{18446744073709551615UL,18446744073709551609UL,7UL,0xD891A42F66C0B359LL,18446744073709551613UL,0x848704CCE7BEA4F1LL,18446744073709551615UL,7UL,18446744073709551609UL,0x51B3EE105B85C10ELL},{5UL,18446744073709551615UL,0UL,0x848704CCE7BEA4F1LL,18446744073709551615UL,0x3D9286445DF67443LL,18446744073709551615UL,0x0C446676C953A1F9LL,7UL,7UL},{0x51B3EE105B85C10ELL,7UL,0x54577E0D34D4A3DFLL,0x0E32F749A11D5682LL,0x0E32F749A11D5682LL,0UL,0x0C446676C953A1F9LL,18446744073709551615UL,0UL,0xE802528D225FF147LL}},{{18446744073709551615UL,1UL,0xDF6645A1A400451ALL,0UL,0UL,1UL,0xD891A42F66C0B359LL,0xF87F9BE3DF3A458BLL,0xDDEA0169262A8623LL,0x0E32F749A11D5682LL},{0xFED6F3641B011954LL,18446744073709551615UL,0xDF6645A1A400451ALL,0UL,0xE9722AC7F24C4270LL,0xF87F9BE3DF3A458BLL,18446744073709551615UL,18446744073709551615UL,0x5FD2C50379BE5DA6LL,1UL},{18446744073709551614UL,7UL,0UL,0xE802528D225FF147LL,18446744073709551615UL,0x48805FD4E172B5A0LL,0x0E32F749A11D5682LL,0UL,0x0E871B21C4809958LL,0x369FA2E835B62970LL},{0x0C446676C953A1F9LL,0x5FD2C50379BE5DA6LL,5UL,0x369FA2E835B62970LL,0xDF6645A1A400451ALL,1UL,0x369FA2E835B62970LL,0x848704CCE7BEA4F1LL,18446744073709551615UL,0x0C446676C953A1F9LL},{0x848704CCE7BEA4F1LL,18446744073709551614UL,0xFED6F3641B011954LL,0UL,0UL,1UL,5UL,0x0C446676C953A1F9LL,0UL,0xFED6F3641B011954LL},{0UL,18446744073709551615UL,0UL,18446744073709551614UL,18446744073709551615UL,0x0E871B21C4809958LL,18446744073709551615UL,18446744073709551614UL,0UL,18446744073709551615UL},{18446744073709551615UL,5UL,0x3D9286445DF67443LL,0xF8FCF2547A4136E1LL,0xDF6645A1A400451ALL,0x9A28CC2A3B522196LL,18446744073709551615UL,0xFED6F3641B011954LL,5UL,0xE802528D225FF147LL},{0xF87F9BE3DF3A458BLL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0x9A28CC2A3B522196LL,1UL,18446744073709551615UL,0xDDEA0169262A8623LL,1UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0x51B3EE105B85C10ELL,0x0E871B21C4809958LL,0UL,18446744073709551615UL,18446744073709551614UL,18446744073709551613UL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_524[i][j] = 0x69L;
        }
    }
    return p_21;


}







static long long func_23(unsigned p_24, unsigned short p_25, int p_26, long long p_27, unsigned long long p_28)
{
    int *l_143[8] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
    int i;
    g_79 = 0L;
    l_143[5] = l_143[5];
    g_96[2][3][0] = (-4L);
    return p_25;
}







static int func_31(unsigned p_32, char p_33, char p_34, int p_35, short p_36)
{
    unsigned l_61[9] = {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL};
    int l_84 = (-10L);
    int l_85 = (-6L);
    int l_86 = 0xFA7F9CD9L;
    char l_87 = 0L;
    int l_88 = 0x619AF7C7L;
    int l_89 = 0x88F49E03L;
    int l_90 = 1L;
    unsigned l_139 = 0xBFD217CEL;
    int i;
    if ((func_50((((func_40(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((~(safe_rshift_func_int8_t_s_s(func_40(l_61[2], (safe_lshift_func_int16_t_s_s(((func_64(l_61[0], l_61[1], ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(p_36, 4)) | l_61[2]), (safe_sub_func_uint64_t_u_u((func_40(l_61[0], (0x7132C267L == (9L > ((safe_sub_func_int64_t_s_s((4294967295UL && 0xB827BE62L), g_2)) >= (-1L)))), g_2) ^ g_2), 0x28B80BBE90AECF93LL)))) <= l_61[7]), g_2, g_2) != 0x43FDL) | g_2), l_61[2])), g_2), g_2))), l_61[3])), g_2)), 6)) == g_2), g_2, l_61[4]) | l_61[0]) == 0xB0L) && p_36), l_61[2]) ^ g_2))
    {
        int *l_83[5][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,(void*)0,&g_79,(void*)0,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        g_91--;
        for (p_33 = (-30); (p_33 < (-2)); p_33 = safe_add_func_int32_t_s_s(p_33, 5))
        {
            unsigned short l_97 = 0xD9B3L;
            unsigned short l_124 = 0x4F7BL;
            for (l_86 = 3; (l_86 <= 8); l_86 += 1)
            {
                int i;
                --l_97;
                l_124 = (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_61[l_86] > (safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(p_33, (safe_lshift_func_uint8_t_u_u(p_33, (safe_rshift_func_uint16_t_u_s(func_40((g_2 || (g_2 >= (func_64((safe_mod_func_uint16_t_u_u((((void*)0 != &l_88) <= (safe_mod_func_uint16_t_u_u((((void*)0 != &p_35) == l_61[l_86]), 0x26F7L))), 0xD436L)), g_2, p_36, p_36, g_79) >= g_91))), g_2, g_2), 11)))))), g_96[4][6][0])) < 0x65L) >= g_96[1][1][0]), p_35))), 0xCFL)) && p_33), 3)), l_86)), p_34));
            }
        }
        for (l_87 = 21; (l_87 < 7); l_87 = safe_sub_func_int64_t_s_s(l_87, 1))
        {
            int l_131 = 0x06419DAFL;
            p_35 = (safe_lshift_func_uint8_t_u_s((&g_79 == &p_35), func_50(p_35, ((((+((l_89 || 0x126CF246L) >= p_34)) != func_64(((((safe_lshift_func_int8_t_s_u(0x42L, g_91)) == (((0x6A62L > l_131) > 0UL) != p_36)) >= 0xCFD8255CL) & 0xAD619F20ACEFA754LL), g_96[1][1][0], p_32, l_61[2], p_34)) || 0xF77BL) >= p_36))));
            if (l_131)
                continue;
        }
    }
    else
    {
        int l_136 = 0x0ED8B559L;
        int *l_140 = (void*)0;
        int *l_141 = &l_90;
        (*l_141) = ((0x2495124C238B7C09LL <= 0UL) | ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(p_33, ((func_64(l_136, func_50(l_86, (safe_lshift_func_int8_t_s_s(g_91, 5))), l_86, (1L & l_136), l_86) == l_139) >= p_36))) || g_2), 14)) <= g_96[1][1][0]));
        return p_32;
    }
    return g_96[1][1][0];
}







static unsigned short func_40(long long p_41, unsigned char p_42, int p_43)
{
    return p_43;
}







static int func_50(unsigned char p_51, unsigned short p_52)
{
    int l_80[7];
    short l_81 = 0L;
    int *l_82 = &g_79;
    int i;
    for (i = 0; i < 7; i++)
        l_80[i] = 0xB57DC510L;
    (*l_82) = (((0x8AE633C5L | g_2) & l_80[1]) <= ((g_79 > g_79) && l_81));
    return p_51;
}







static short func_64(unsigned long long p_65, unsigned long long p_66, unsigned short p_67, short p_68, long long p_69)
{
    int *l_78 = &g_79;
    (*l_78) |= (+p_68);
    return (*l_78);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_273[i][j], "g_273[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_760[i], "g_760[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_995, "g_995", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1037[i], "g_1037[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
