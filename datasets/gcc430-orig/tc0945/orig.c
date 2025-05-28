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



static unsigned short g_2 = 65535UL;
static short g_13 = (-4L);
static int g_25[9][10][2] = {{{(-8L),(-1L)},{0L,0L},{(-1L),(-8L)},{0xDFC1F7B4L,(-8L)},{(-1L),0L},{0L,(-1L)},{(-8L),0xDFC1F7B4L},{(-8L),(-1L)},{0L,0L},{(-1L),(-8L)}},{{0xDFC1F7B4L,(-8L)},{(-1L),0L},{0L,(-1L)},{(-8L),0xDFC1F7B4L},{(-8L),(-1L)},{0L,0L},{(-1L),(-8L)},{0xDFC1F7B4L,(-8L)},{(-1L),0L},{0L,(-1L)}},{{(-8L),0xDFC1F7B4L},{(-8L),(-1L)},{0L,0L},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L},{(-8L),(-8L)}},{{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L},{(-8L),(-8L)},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)}},{{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L},{(-8L),(-8L)},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L}},{{(-8L),(-8L)},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L},{(-8L),(-8L)},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L}},{{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)},{0xDFC1F7B4L,0L},{(-8L),(-8L)},{0L,0xDFC1F7B4L},{(-4L),0xDFC1F7B4L},{0L,(-8L)},{(-8L),0L},{0xDFC1F7B4L,(-4L)}},{{0xDFC1F7B4L,0xDFC1F7B4L},{1L,1L},{0xDFC1F7B4L,(-1L)},{0L,(-1L)},{0xDFC1F7B4L,1L},{1L,0xDFC1F7B4L},{(-1L),0L},{(-1L),0xDFC1F7B4L},{1L,1L},{0xDFC1F7B4L,(-1L)}},{{0L,(-1L)},{0xDFC1F7B4L,1L},{1L,0xDFC1F7B4L},{(-1L),0L},{(-1L),0xDFC1F7B4L},{1L,1L},{0xDFC1F7B4L,(-1L)},{0L,(-1L)},{0xDFC1F7B4L,1L},{1L,0xDFC1F7B4L}}};
static int *g_24 = &g_25[0][3][0];
static int *g_29 = &g_25[0][3][0];
static short g_65 = (-5L);
static int g_96 = 0x56EC073BL;
static int g_98[10][10][2] = {{{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L}},{{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L}},{{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,0x6F707683L},{0xB4F51244L,0xB4F51244L},{0x6F707683L,0xB4F51244L},{0xB4F51244L,(-5L)},{0x6F707683L,0x6F707683L}},{{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L}},{{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)}},{{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L}},{{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L}},{{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)}},{{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L}},{{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L},{0x6F707683L,(-5L)},{0x6F707683L,0x6F707683L},{(-5L),0x6F707683L}}};
static int g_100 = (-5L);
static short g_116[4] = {1L,1L,1L,1L};
static unsigned short g_123[9][5] = {{0x48EDL,0x908FL,0x8060L,0xC98BL,0xC98BL},{0xA02EL,8UL,0xA02EL,0x8A64L,9UL},{0x8060L,0x908FL,0x48EDL,65533UL,0xB854L},{0x2183L,0x1874L,0x1874L,0x2183L,0xA02EL},{65532UL,8UL,0x48EDL,0xB854L,0x908FL},{65526UL,0x3BFEL,0xA02EL,0x3BFEL,65526UL},{8UL,65533UL,0x8060L,0xB854L,0xFF59L},{0x9B8DL,8UL,0x2183L,0x2183L,8UL},{0xC98BL,0x48EDL,65532UL,0x8060L,65533UL}};
static unsigned char g_130 = 251UL;
static unsigned char g_132[6] = {0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL};
static char g_138 = 0xFBL;
static int **g_157 = &g_29;
static int ***g_156 = &g_157;
static char g_212[7] = {6L,6L,6L,6L,6L,6L,6L};
static short *g_251 = &g_116[3];
static unsigned char g_254 = 255UL;
static int g_264 = (-1L);
static unsigned g_271 = 0UL;
static unsigned g_294[6] = {0x9BF9B34CL,0x9BF9B34CL,0x9BF9B34CL,0x9BF9B34CL,0x9BF9B34CL,0x9BF9B34CL};
static short g_320[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static unsigned short *g_392 = &g_2;
static unsigned short **g_391 = &g_392;
static unsigned short ***g_390 = &g_391;
static unsigned short ****g_389 = &g_390;
static char *g_401 = &g_212[1];
static unsigned short *g_405 = (void*)0;
static unsigned g_437 = 0xB47D9187L;
static unsigned g_547 = 0x0BBA1F30L;
static int g_561 = 0L;
static int *g_560 = &g_561;
static int **g_559 = &g_560;
static unsigned char *g_649 = &g_254;
static unsigned char **g_648 = &g_649;
static unsigned short *****g_662 = &g_389;
static int *g_663 = &g_25[0][3][0];
static int **g_696 = &g_663;
static unsigned *g_740 = &g_437;
static unsigned **g_739 = &g_740;
static unsigned g_745[9][6][4] = {{{4294967294UL,0x3DD1DED0L,0x314CB2B4L,1UL},{0xC1F61B8FL,0x3DD1DED0L,0UL,0x3DD1DED0L},{0x314CB2B4L,4UL,0UL,4294967295UL},{0xC1F61B8FL,7UL,0x314CB2B4L,4294967295UL},{4294967294UL,4UL,4294967294UL,0x3DD1DED0L},{4294967294UL,0x3DD1DED0L,0x314CB2B4L,1UL}},{{0xC1F61B8FL,0x3DD1DED0L,0UL,0x3DD1DED0L},{0x314CB2B4L,4UL,0UL,4294967295UL},{0xC1F61B8FL,7UL,0x314CB2B4L,4294967295UL},{4294967294UL,4UL,4294967294UL,0x3DD1DED0L},{4294967294UL,0x3DD1DED0L,0x314CB2B4L,1UL},{0xC1F61B8FL,0x3DD1DED0L,0UL,0x3DD1DED0L}},{{0x314CB2B4L,4UL,0UL,4294967295UL},{0xC1F61B8FL,7UL,0x314CB2B4L,4294967295UL},{4294967294UL,4UL,4294967294UL,0x3DD1DED0L},{4294967294UL,0x3DD1DED0L,0x314CB2B4L,1UL},{0xC1F61B8FL,0x3DD1DED0L,0xC1F61B8FL,4294967295UL},{0UL,0x3DD1DED0L,0xC1F61B8FL,7UL}},{{4294967294UL,1UL,0UL,7UL},{0xD3782240L,0x3DD1DED0L,0xD3782240L,4294967295UL},{0xD3782240L,4294967295UL,0UL,4UL},{4294967294UL,4294967295UL,0xC1F61B8FL,4294967295UL},{0UL,0x3DD1DED0L,0xC1F61B8FL,7UL},{4294967294UL,1UL,0UL,7UL}},{{0xD3782240L,0x3DD1DED0L,0xD3782240L,4294967295UL},{0xD3782240L,4294967295UL,0UL,4UL},{4294967294UL,4294967295UL,0xC1F61B8FL,4294967295UL},{0UL,0x3DD1DED0L,0xC1F61B8FL,7UL},{4294967294UL,1UL,0UL,7UL},{0xD3782240L,0x3DD1DED0L,0xD3782240L,4294967295UL}},{{0xD3782240L,4294967295UL,0UL,4UL},{4294967294UL,4294967295UL,0xC1F61B8FL,4294967295UL},{0UL,0x3DD1DED0L,0xC1F61B8FL,7UL},{4294967294UL,1UL,0UL,7UL},{0xD3782240L,0x3DD1DED0L,0xD3782240L,4294967295UL},{0xD3782240L,4294967295UL,0UL,4UL}},{{4294967294UL,4294967295UL,0xC1F61B8FL,4294967295UL},{0UL,0x3DD1DED0L,0xC1F61B8FL,7UL},{4294967294UL,1UL,0UL,7UL},{0xD3782240L,0x3DD1DED0L,0xD3782240L,4294967295UL},{0xD3782240L,1UL,4294967294UL,4294967295UL},{0x314CB2B4L,1UL,0xD3782240L,1UL}},{{4294967294UL,7UL,0xD3782240L,4UL},{0x314CB2B4L,0x3DD1DED0L,4294967294UL,4UL},{0UL,7UL,0UL,1UL},{0UL,1UL,4294967294UL,4294967295UL},{0x314CB2B4L,1UL,0xD3782240L,1UL},{4294967294UL,7UL,0xD3782240L,4UL}},{{0x314CB2B4L,0x3DD1DED0L,4294967294UL,4UL},{0UL,7UL,0UL,1UL},{0UL,1UL,4294967294UL,4294967295UL},{0x314CB2B4L,1UL,0xD3782240L,1UL},{4294967294UL,7UL,0xD3782240L,4UL},{0x314CB2B4L,0x3DD1DED0L,4294967294UL,4UL}}};
static short g_752[10] = {(-1L),0xD633L,(-1L),0xD633L,(-1L),0xD633L,(-1L),0xD633L,(-1L),0xD633L};
static short g_758 = (-1L);



static unsigned short func_1(void);
static int * func_19(int p_20, char p_21, int * p_22, int * p_23);
static int * func_26(int ** p_27);
static int ** func_44(int ** p_45, unsigned short p_46);
static int func_50(short p_51, int * p_52, unsigned p_53);
static int * func_54(short p_55, int * p_56, int * p_57);
static unsigned short func_58(short p_59, unsigned char p_60, short p_61, int * p_62, int ** p_63);
static unsigned char func_66(int ** p_67, short p_68, int p_69, unsigned p_70, int * p_71);
static int ** func_72(unsigned short p_73, char p_74);
static unsigned char func_79(int * p_80, int ** p_81);
static unsigned short func_1(void)
{
    unsigned char l_5[8][7] = {{251UL,0xBDL,0xBDL,251UL,0xBDL,0xBDL,251UL},{1UL,3UL,1UL,1UL,3UL,1UL,1UL},{251UL,251UL,253UL,251UL,251UL,253UL,251UL},{3UL,1UL,1UL,3UL,1UL,1UL,3UL},{0xBDL,251UL,0xBDL,0xBDL,251UL,0xBDL,0xBDL},{3UL,3UL,0x85L,3UL,3UL,0x85L,3UL},{251UL,0xBDL,0xBDL,251UL,0xBDL,0xBDL,251UL},{1UL,3UL,1UL,1UL,3UL,1UL,1UL}};
    int l_14 = 9L;
    int **l_713 = (void*)0;
    unsigned **l_737 = (void*)0;
    unsigned char l_743 = 0UL;
    unsigned short ******l_748 = (void*)0;
    unsigned l_755 = 18446744073709551612UL;
    unsigned *l_759 = &g_271;
    int *l_760 = &g_96;
    int i, j;
    if (g_2)
    {
        int l_8[3];
        int *l_16[3];
        int **l_15 = &l_16[0];
        int i;
        for (i = 0; i < 3; i++)
            l_8[i] = 0x1015AA96L;
        for (i = 0; i < 3; i++)
            l_16[i] = (void*)0;
        (*l_15) = ((safe_rshift_func_int8_t_s_u(0xE6L, (l_5[2][4] && ((0x94L >= (0xC5EB2006L < l_8[0])) > (safe_add_func_int16_t_s_s((l_5[2][4] & (((l_14 = (safe_lshift_func_uint16_t_u_s(g_13, l_8[1]))) > (g_2 & g_2)) != 1UL)), 0x95E2L)))))) , (void*)0);
        for (l_14 = 0; (l_14 >= (-11)); l_14--)
        {
            (*g_559) = func_19(g_13, g_2, ((g_2 == ((void*)0 != g_24)) , &g_25[0][3][0]), func_26(&g_24));
        }

        ;
        (*g_663) = l_14;
        for (g_138 = (-14); (g_138 >= (-19)); g_138--)
        {
            short l_687[5];
            int *l_695 = &g_96;
            int i;
            for (i = 0; i < 5; i++)
                l_687[i] = 0xB7BBL;
            if ((*g_29))
                break;
            if (l_687[3])
                continue;
            for (g_437 = 0; (g_437 >= 17); ++g_437)
            {
                unsigned short l_694 = 0UL;
                unsigned l_706 = 0x92B9106CL;
                int *l_707 = &g_96;
            }
            return (*l_695);
        }
    }
    else
    {
        int *l_725 = &g_96;
        short *l_728 = &g_116[2];
        unsigned ***l_738 = &l_737;
        unsigned *l_744 = &g_745[7][5][0];
        int l_746 = 0xC4995B21L;
        unsigned char *l_747[9][4][3] = {{{&g_132[1],&g_130,&l_5[6][3]},{&l_5[2][4],&g_130,&l_5[7][1]},{&l_743,&l_5[4][2],&l_5[2][4]},{&l_743,&l_743,(void*)0}},{{(void*)0,&g_130,&l_5[2][4]},{&l_5[2][4],(void*)0,&l_5[7][1]},{&g_130,&g_132[1],&l_5[6][3]},{&g_132[5],&l_5[2][4],&l_5[7][1]}},{{&g_130,&l_5[2][1],&l_5[2][4]},{(void*)0,&g_132[5],(void*)0},{&l_5[2][1],&l_743,&l_5[2][4]},{&g_130,&g_132[5],&l_5[7][1]}},{{&g_132[5],&g_132[5],&l_5[6][3]},{(void*)0,&l_743,&l_5[7][1]},{&l_5[2][4],(void*)0,&l_5[2][4]},{&g_132[5],(void*)0,(void*)0}},{{&l_5[4][2],&l_5[2][4],&l_5[2][4]},{&l_743,&l_5[2][4],&l_5[7][1]},{&g_132[1],&g_130,&l_5[6][3]},{&l_5[2][4],&g_130,&l_5[7][1]}},{{&l_743,&l_5[4][2],&l_5[2][4]},{&l_743,&l_743,(void*)0},{(void*)0,&g_130,&l_5[2][4]},{&l_5[2][4],(void*)0,&l_743}},{{(void*)0,&g_130,&l_743},{&g_130,&g_132[5],&l_743},{&l_5[2][3],&g_132[1],&g_130},{&l_5[2][4],&g_130,&g_130}},{{&g_132[1],&g_132[5],&g_130},{&g_132[5],&g_130,&l_743},{(void*)0,(void*)0,&l_743},{(void*)0,&l_5[0][5],&l_743}},{{(void*)0,(void*)0,&g_130},{&g_130,&l_5[2][4],&g_130},{&g_132[5],(void*)0,&g_130},{&l_5[0][5],(void*)0,&l_743}}};
        char **l_751 = (void*)0;
        int i, j, k;
        for (g_2 = 0; (g_2 < 4); g_2 = safe_add_func_int16_t_s_s(g_2, 2))
        {
            int *l_726 = (void*)0;
            int l_727 = 0xFBAB5345L;
            (*g_560) = l_5[2][2];
            if ((safe_rshift_func_int16_t_s_u(func_50((0xB61BL > (***g_390)), (l_726 = l_725), (l_727 = 0xFB973533L)), 1)))
            {
                (*g_696) = (void*)0;

                ;
                return (*l_725);
            }
            else
            {
                return (***g_390);
            }
        }
        (**g_559) = 0x4EF04E62L;
        (*g_560) = ((l_728 != ((((g_132[5] = (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_744) = ((*g_740) = (safe_add_func_int16_t_s_s(l_5[2][4], ((((**g_696) & 0xA4234BE6L) > ((*l_725) = ((((safe_lshift_func_uint16_t_u_s((((*l_738) = l_737) != (((**g_648) = (*l_725)) , g_739)), (safe_mod_func_int16_t_s_s(((*l_725) || 1L), (*g_251))))) ^ 0x7B286F76L) ^ (-10L)) < g_130))) > l_743))))), l_746)), 1L))) , l_748) == &g_662) , &g_116[1])) & (*g_24));
        for (l_743 = 0; (l_743 <= 17); l_743++)
        {
            (**g_559) = (((*g_251) = (l_751 != &g_401)) ^ g_752[2]);
        }
    }

    ;
    (*g_24) = (*g_663);
    (*l_760) = ((*g_663) = ((func_66((*g_156), ((safe_mod_func_uint8_t_u_u((**g_648), (*g_649))) , l_755), l_755, (!((safe_sub_func_uint16_t_u_u(((**g_391) = (*****g_662)), g_758)) , ((*l_759) = l_743))), func_26((*g_156))) && 5UL) & 0x4AL));

    ;
    return (*l_760);
}







static int * func_19(int p_20, char p_21, int * p_22, int * p_23)
{
    int **l_28 = &g_24;
    unsigned char l_49 = 0UL;
    int l_141 = 0xEF8D76BDL;
    char l_196[2][10][7] = {{{1L,1L,0x4FL,0L,0x19L,0x4FL,0x19L},{0L,0xE6L,0xE6L,0L,0x33L,0xF3L,0L},{0xF3L,0x19L,0x33L,0x33L,0x19L,0xF3L,0xE6L},{0x19L,0L,0x4FL,1L,1L,0x4FL,0L},{0x19L,0xE6L,0xF3L,0x19L,0x33L,0x33L,0x19L},{0xF3L,0L,0xF3L,0x33L,0L,0xE6L,0xE6L},{0L,0x19L,0x4FL,0x19L,0L,0x4FL,1L},{1L,0xE6L,0x33L,1L,0x33L,0xE6L,1L},{0xF3L,0x19L,0xF3L,0xE6L,0x19L,0xE6L,0xF3L},{0x19L,0x19L,(-3L),1L,0L,(-3L),0L}},{{1L,0xF3L,0xF3L,1L,0xE6L,0x33L,1L},{0x33L,0L,0xE6L,0xE6L,0L,0x33L,0xF3L},{0L,1L,(-3L),0x19L,0x19L,(-3L),1L},{0L,0xF3L,0x33L,0L,0xE6L,0xE6L,0L},{0x33L,1L,0x33L,0xE6L,1L,0xF3L,0xF3L},{1L,0L,(-3L),0L,1L,(-3L),0x19L},{0x19L,0xF3L,0xE6L,0x19L,0xE6L,0xF3L,0x19L},{0x33L,0x19L,0xF3L,0xE6L,0x19L,0xE6L,0xF3L},{0x19L,0x19L,(-3L),1L,0L,(-3L),0L},{1L,0xF3L,0xF3L,1L,0xE6L,0x33L,1L}}};
    short **l_638[8][3][1] = {{{&g_251},{&g_251},{&g_251}},{{&g_251},{&g_251},{&g_251}},{{&g_251},{&g_251},{&g_251}},{{&g_251},{&g_251},{&g_251}},{{&g_251},{&g_251},{(void*)0}},{{&g_251},{&g_251},{(void*)0}},{{&g_251},{(void*)0},{&g_251}},{{&g_251},{(void*)0},{&g_251}}};
    unsigned char **l_650[7][1];
    int **l_672 = (void*)0;
    unsigned l_683 = 4UL;
    unsigned l_684[2];
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_650[i][j] = &g_649;
    }
    for (i = 0; i < 2; i++)
        l_684[i] = 0UL;
    g_29 = ((*l_28) = &g_25[0][3][0]);
    for (p_20 = 0; (p_20 <= 1); p_20 += 1)
    {
        unsigned char l_197 = 3UL;
        short **l_634 = &g_251;
        unsigned char l_643[2][2];
        unsigned char **l_651[10][3] = {{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649},{&g_649,&g_649,&g_649}};
        int *l_654 = &g_96;
        unsigned short l_658 = 2UL;
        unsigned short l_678 = 0x9544L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_643[i][j] = 0x84L;
        }
        for (g_13 = 0; (g_13 <= 1); g_13 += 1)
        {
            char l_38 = 0xAAL;
            int *l_82 = &g_25[0][3][0];
            short **l_637 = (void*)0;
            (*l_28) = (*l_28);
            (*p_23) = (safe_mod_func_uint8_t_u_u((0x68L < (safe_lshift_func_uint8_t_u_s(0xE8L, 1))), (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((p_20 == l_38), 8)) , ((((((l_38 != (safe_lshift_func_int16_t_s_u((p_20 != 8UL), 5))) == g_2) & ((safe_div_func_uint8_t_u_u(0x61L, p_21)) != 3L)) , 0L) , p_20) == (*g_24))), (**l_28)))));
            for (l_38 = 0; (l_38 <= 1); l_38 += 1)
            {
                int *l_43[7] = {&g_25[0][3][0],&g_25[0][3][0],&g_25[0][3][0],&g_25[0][3][0],&g_25[0][3][0],&g_25[0][3][0],&g_25[0][3][0]};
                short *l_64 = &g_65;
                unsigned l_168 = 0UL;
                int *l_555 = (void*)0;
                int *l_556 = &l_141;
                int *l_557 = &g_264;
                unsigned short *l_558 = &g_123[1][4];
                int i;
                for (g_2 = 0; (g_2 <= 1); g_2 += 1)
                {
                    for (p_21 = 0; (p_21 <= 1); p_21 += 1)
                    {
                        int i, j, k;
                        if (g_25[(g_2 + 2)][(p_20 + 1)][p_20])
                            break;
                        (*l_28) = &g_25[(g_2 + 2)][(p_20 + 1)][p_20];
                        return l_43[3];


                    }
                }
            }
            for (l_197 = 0; (l_197 <= 1); l_197 += 1)
            {
                short ***l_635 = (void*)0;
                short ***l_636[6][9][4] = {{{&l_634,(void*)0,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,(void*)0,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,(void*)0,&l_634,&l_634}},{{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,(void*)0},{&l_634,&l_634,(void*)0,&l_634},{&l_634,&l_634,(void*)0,&l_634},{&l_634,&l_634,&l_634,(void*)0}},{{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,(void*)0},{&l_634,&l_634,(void*)0,(void*)0},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,(void*)0},{&l_634,&l_634,(void*)0,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634}},{{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,(void*)0},{&l_634,&l_634,(void*)0,&l_634},{(void*)0,&l_634,&l_634,(void*)0},{&l_634,&l_634,(void*)0,(void*)0},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,&l_634},{&l_634,&l_634,(void*)0,&l_634}},{{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{(void*)0,&l_634,&l_634,(void*)0},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,&l_634},{(void*)0,&l_634,&l_634,(void*)0},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,&l_634},{(void*)0,&l_634,(void*)0,(void*)0}},{{&l_634,(void*)0,&l_634,&l_634},{(void*)0,&l_634,&l_634,(void*)0},{(void*)0,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,(void*)0,&l_634},{(void*)0,&l_634,(void*)0,&l_634},{&l_634,&l_634,&l_634,(void*)0},{&l_634,&l_634,(void*)0,&l_634},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                g_25[(g_13 + 6)][(l_197 + 7)][g_13] = (safe_sub_func_uint16_t_u_u(((l_637 = l_634) != l_638[7][0][0]), ((**g_391) , (-4L))));

                ;
                p_22 = (*g_157);
            }

            ;
            for (p_21 = 1; (p_21 >= 0); p_21 -= 1)
            {
                for (l_197 = 0; (l_197 <= 1); l_197 += 1)
                {
                    for (g_138 = 0; (g_138 <= 0); g_138 += 1)
                    {
                        (*g_559) = func_26((*g_156));

                        ;
                    }
                }
                for (g_96 = 0; (g_96 >= 0); g_96 -= 1)
                {
                    (*l_28) = func_26(((*g_156) = (*g_156)));
                }
            }
        }
        for (p_21 = 0; (p_21 <= 4); p_21 += 1)
        {
            int l_657 = 1L;
            int i, j;
            for (g_96 = 1; (g_96 >= 0); g_96 -= 1)
            {
                return (*g_559);


            }
            (*l_28) = (*l_28);
        }
        for (g_2 = 0; (g_2 <= 1); g_2 += 1)
        {
            short l_659 = 0L;
            unsigned short *****l_661 = &g_389;
            unsigned short ******l_660[2];
            unsigned *l_677 = &g_437;
            int i;
            for (i = 0; i < 2; i++)
                l_660[i] = &l_661;
            (*l_28) = ((p_21 <= ((*l_654) = func_58(l_659, (**l_28), ((g_662 = &g_389) != (void*)0), p_23, l_28))) , g_663);
        }
    }
    (*g_559) = p_23;

    ;
    l_684[0] = (safe_add_func_int16_t_s_s(((l_683 = ((**l_28) = ((*g_649) = (**l_28)))) != 0UL), p_20));
    return (*l_28);


}







static int * func_26(int ** p_27)
{
    return &g_25[7][0][1];


}







static int ** func_44(int ** p_45, unsigned short p_46)
{
    unsigned short l_562 = 0x9482L;
    short *l_563 = (void*)0;
    int **l_564 = (void*)0;
    int **l_585 = &g_24;
    unsigned short *****l_599 = &g_389;
    unsigned char l_613 = 0x3EL;
    (**g_559) = (0x355EL == ((****g_389) = 65527UL));
    if ((l_562 == 0UL))
    {
        unsigned short **l_570 = &g_392;
        if ((l_563 == (void*)0))
        {
            return l_564;


        }
        else
        {
            unsigned char *l_565 = &g_132[5];
            unsigned short **l_569 = &g_405;
            int *l_571 = (void*)0;
            (*g_559) = (*g_559);
            (*g_559) = l_571;

            ;
            return p_45;


        }
    }
    else
    {
        unsigned char l_589 = 7UL;
        int **l_590 = &g_560;
        int **l_608 = &g_24;
        for (g_2 = (-26); (g_2 > 14); ++g_2)
        {
            int *l_588[3][6][5] = {{{&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0],&g_25[0][3][0]},{&g_96,(void*)0,&g_96,(void*)0,&g_96},{&g_25[0][3][0],&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0],&g_25[0][3][0]},{&g_96,(void*)0,&g_96,(void*)0,&g_96}},{{&g_25[0][3][0],&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0],&g_25[0][3][0]},{&g_96,(void*)0,&g_96,(void*)0,&g_96},{&g_25[0][3][0],&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0],&g_25[0][3][0]},{&g_96,(void*)0,&g_96,(void*)0,&g_96},{&g_25[0][3][0],&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_25[0][3][0],(void*)0,(void*)0,&g_25[0][3][0],&g_25[0][3][0]},{&g_96,(void*)0,&g_96,(void*)0,&g_96}}};
            unsigned short **l_617 = (void*)0;
            int i, j, k;
            for (g_254 = 0; (g_254 == 59); g_254 = safe_add_func_uint8_t_u_u(g_254, 1))
            {
                int *l_576 = &g_561;
                l_576 = (*g_559);

                ;
            }
            for (g_65 = 1; (g_65 >= 0); g_65 -= 1)
            {
                int l_584 = (-7L);
                int *l_611 = &g_98[0][7][0];
                unsigned short *****l_620 = (void*)0;
                unsigned l_621 = 3UL;
                for (p_46 = 0; (p_46 <= 1); p_46 += 1)
                {
                    unsigned *l_577 = &g_437;
                    int *l_581 = &g_561;
                    int **l_609[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    unsigned short *****l_619 = &g_389;
                    unsigned short ******l_618 = &l_619;
                    int i, j, k;
                    if (g_25[(g_65 + 7)][p_46][p_46])
                    {
                        unsigned **l_578 = &l_577;
                        int **l_579 = (void*)0;
                        int **l_580[10][9][2] = {{{(void*)0,&g_24},{(void*)0,&g_560},{&g_24,&g_24},{(void*)0,&g_29},{(void*)0,&g_29},{&g_29,&g_24},{&g_560,(void*)0},{&g_29,&g_560},{&g_29,&g_560}},{{&g_29,(void*)0},{&g_560,&g_24},{&g_29,&g_29},{&g_29,(void*)0},{(void*)0,&g_29},{&g_24,(void*)0},{&g_560,&g_24},{&g_560,&g_29},{&g_560,&g_24}},{{&g_560,(void*)0},{&g_24,&g_29},{(void*)0,(void*)0},{&g_29,&g_29},{&g_29,&g_24},{&g_560,&g_29},{&g_29,&g_560},{(void*)0,&g_560},{&g_29,&g_29}},{{&g_560,&g_24},{&g_29,&g_29},{&g_29,(void*)0},{(void*)0,&g_29},{&g_24,(void*)0},{&g_560,&g_24},{&g_560,&g_29},{&g_560,&g_24},{&g_560,(void*)0}},{{&g_24,&g_29},{(void*)0,(void*)0},{&g_29,&g_29},{&g_29,&g_24},{&g_560,&g_29},{&g_29,&g_560},{(void*)0,&g_560},{&g_29,&g_29},{&g_560,&g_24}},{{&g_29,&g_29},{&g_29,(void*)0},{(void*)0,&g_29},{&g_24,(void*)0},{&g_560,&g_24},{&g_560,&g_29},{&g_560,&g_24},{&g_560,(void*)0},{&g_24,&g_29}},{{(void*)0,(void*)0},{&g_29,&g_29},{&g_29,&g_24},{&g_560,&g_29},{&g_29,&g_560},{&g_560,&g_29},{&g_560,&g_24},{(void*)0,&g_29},{(void*)0,(void*)0}},{{&g_24,&g_560},{&g_560,&g_560},{&g_560,&g_29},{&g_24,&g_560},{&g_29,&g_560},{&g_29,&g_560},{&g_24,&g_29},{&g_560,&g_560},{&g_560,&g_560}},{{&g_24,(void*)0},{(void*)0,&g_29},{(void*)0,&g_24},{&g_560,&g_29},{&g_560,&g_29},{&g_560,&g_24},{(void*)0,&g_29},{(void*)0,(void*)0},{&g_24,&g_560}},{{&g_560,&g_560},{&g_560,&g_29},{&g_24,&g_560},{&g_29,&g_560},{&g_29,&g_560},{&g_24,&g_29},{&g_560,&g_560},{&g_560,&g_560},{&g_24,(void*)0}}};
                        unsigned char *l_586 = (void*)0;
                        unsigned char *l_587 = &g_254;
                        int i, j, k;
                        g_25[(p_46 + 1)][(p_46 + 7)][p_46] = func_58(g_25[(g_65 + 2)][(p_46 + 8)][g_65], p_46, (*g_251), func_26(p_45), l_590);
                        g_25[(g_65 + 2)][(g_65 + 1)][p_46] = (((*l_581) >= l_584) > g_212[1]);
                        if ((*g_560))
                            break;
                        (*g_560) = (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((7UL & ((&g_116[1] == &g_116[2]) , (*g_251))) || (((((*g_251) < 4L) ^ g_271) ^ g_320[2]) , (-6L))), p_46)), (-1L)));
                    }
                    else
                    {
                        unsigned char *l_610 = &l_589;
                        int *l_612 = &g_25[(g_65 + 7)][p_46][p_46];
                        int ***l_614 = &l_608;
                        (*l_581) = (safe_add_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(l_584, ((safe_add_func_int16_t_s_s(p_46, (****g_389))) , p_46))) , (safe_mod_func_int16_t_s_s(p_46, (***g_390)))) , l_613) <= p_46), 0x86F3C263L));
                        (*l_608) = func_26(p_45);

                        ;
                    }
                    if ((p_46 || (((p_46 , ((**g_559) , g_320[1])) , g_547) , 0x67L)))
                    {
                        if ((**g_559))
                            break;
                    }
                    else
                    {
                        int *l_622 = &g_96;
                        (*l_590) = l_622;

                        ;
                        (*l_585) = (void*)0;

                        ;
                        if ((**g_559))
                            break;
                    }
                    if ((**g_559))
                        break;
                    if (p_46)
                    {
                        int **l_623 = &l_581;
                        (*g_559) = func_26(l_623);

                        ;
                    }
                    else
                    {
                        unsigned char *l_630[3];
                        int l_631 = 1L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_630[i] = &g_254;
                        (*l_581) = (safe_mod_func_uint16_t_u_u((p_46 != l_631), 65533UL));
                    }
                }
            }
        }

        ;
    }

    ;
    return p_45;


}







static int func_50(short p_51, int * p_52, unsigned p_53)
{
    unsigned char *l_411[3][4];
    int l_413 = 0xC5EC6427L;
    unsigned short **l_430 = &g_392;
    int **l_432 = &g_24;
    int l_434 = 0xDB0F3172L;
    int l_448[1][4] = {{0xF2EB48A3L,0xF2EB48A3L,0xF2EB48A3L,0xF2EB48A3L}};
    char **l_458 = &g_401;
    int ***l_470[5];
    int ****l_469 = &l_470[1];
    unsigned short *****l_527 = &g_389;
    int l_532 = 0x536BCC8FL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_411[i][j] = &g_132[1];
    }
    for (i = 0; i < 5; i++)
        l_470[i] = &g_157;
    for (g_264 = 8; (g_264 >= 0); g_264 -= 1)
    {
        unsigned l_425 = 18446744073709551607UL;
        int **l_428[8][2][4] = {{{&g_29,&g_29,&g_29,&g_24},{&g_29,&g_29,&g_29,&g_29}},{{&g_29,&g_29,&g_29,&g_29},{&g_29,&g_29,&g_24,&g_24}},{{&g_29,&g_29,&g_29,&g_29},{&g_29,&g_29,&g_24,&g_29}},{{&g_29,&g_29,&g_29,&g_24},{&g_29,&g_29,&g_29,&g_29}},{{&g_24,&g_29,&g_29,&g_24},{&g_29,&g_29,&g_29,&g_24}},{{&g_24,&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29,&g_29}},{{&g_29,&g_29,&g_24,&g_24},{&g_29,&g_29,&g_29,&g_24}},{{&g_29,&g_29,&g_24,&g_29},{&g_29,&g_24,&g_29,&g_24}}};
        short l_433 = 1L;
        int *l_435 = &g_98[0][7][0];
        unsigned char l_466[10][3][7] = {{{251UL,1UL,0UL,0x86L,0x86L,0UL,1UL},{1UL,0xD2L,0x0CL,254UL,0x30L,9UL,255UL},{251UL,1UL,0UL,0x86L,0x86L,0UL,1UL}},{{1UL,0xD2L,0x0CL,254UL,0x30L,9UL,255UL},{251UL,1UL,0UL,0x86L,0x86L,0UL,1UL},{1UL,0xD2L,0x0CL,254UL,0x30L,9UL,255UL}},{{251UL,1UL,0UL,0x86L,0x86L,0UL,1UL},{1UL,0xD2L,0x0CL,254UL,0x30L,9UL,255UL},{251UL,1UL,0UL,0x86L,0x86L,251UL,0x0CL}},{{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL},{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL},{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL}},{{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL},{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL},{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL}},{{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL},{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL},{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL}},{{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL},{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL},{0x86L,0x0CL,251UL,0UL,0UL,251UL,0x0CL}},{{0x30L,253UL,254UL,9UL,0x0CL,0x11L,0x4AL},{0x86L,0x0CL,0x86L,251UL,251UL,0x86L,251UL},{250UL,0x11L,0x30L,2UL,1UL,254UL,254UL}},{{0x6DL,251UL,0x86L,251UL,251UL,0x86L,251UL},{250UL,0x11L,0x30L,2UL,1UL,254UL,254UL},{0x6DL,251UL,0x86L,251UL,251UL,0x86L,251UL}},{{250UL,0x11L,0x30L,2UL,1UL,254UL,254UL},{0x6DL,251UL,0x86L,251UL,251UL,0x86L,251UL},{250UL,0x11L,0x30L,2UL,1UL,254UL,254UL}}};
        int i, j, k;
        for (g_130 = 0; (g_130 <= 5); g_130 += 1)
        {
            int **l_409 = &g_29;
            for (g_254 = 0; (g_254 <= 4); g_254 += 1)
            {
                int **l_407 = (void*)0;
                int **l_408 = &g_24;
                unsigned char *l_412 = (void*)0;
                int i;
                (*l_408) = p_52;
                for (g_96 = 0; (g_96 <= 4); g_96 += 1)
                {
                    int i, j;
                    if (g_320[(g_96 + 3)])
                        break;
                    (*l_408) = func_26(((*g_156) = (l_409 = &p_52)));

                    ;
                    ;
                    ;
                    for (g_65 = 0; (g_65 <= 4); g_65 += 1)
                    {
                        int *l_410 = &g_98[0][7][0];
                        int i, j;
                    }
                }
                (*g_24) = g_320[g_264];
            }

            ;
        }
        for (g_271 = 0; (g_271 <= 8); g_271 += 1)
        {
            char l_429 = 0x64L;
            int l_455 = 0L;
            short *l_465 = &g_320[2];
            for (g_65 = 0; (g_65 <= 4); g_65 += 1)
            {
                int **l_431 = &g_24;
                unsigned *l_436 = &g_437;
                unsigned char l_456 = 0xE2L;
                int i, j;
                (*l_431) = func_26(((*g_156) = &l_435));

                ;
                ;
            }
            (*l_435) = (((((*l_435) == ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((g_13 ^ p_53) , (+0x98L)) || g_132[5]), 4)), ((*g_251) = p_51))) && (((p_51 <= (+(func_58(func_58(((*l_465) = ((((((g_254 = g_271) < p_51) || 0x7BL) | 255UL) != g_132[2]) || 9UL)), g_132[4], g_132[5], p_52, l_432), p_53, l_429, p_52, &g_24) ^ l_466[1][2][5]))) ^ p_53) > g_271)) > 1UL) , p_53)) , p_51) ^ 3L) || (**l_432));
        }


        for (g_96 = 0; (g_96 <= 5); g_96 += 1)
        {
            for (g_271 = 0; (g_271 <= 5); g_271 += 1)
            {
                int i;
                return g_132[g_96];


            }
            for (l_425 = 0; (l_425 <= 5); l_425 += 1)
            {
                p_52 = p_52;
            }
        }
    }


    if (((**l_432) = (safe_lshift_func_uint8_t_u_u((g_132[5] , g_294[1]), ((g_156 = &l_432) != ((*l_469) = &l_432))))))
    {
        unsigned l_479 = 0xED002F80L;
        unsigned l_495 = 0xE0F25921L;
        int *l_522 = &l_448[0][2];
        if ((0x30F5L >= (**l_432)))
        {
            unsigned l_477 = 1UL;
            (**g_156) = p_52;
            (**g_156) = (((p_53 ^ ((((***g_390) < ((*g_251) = (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((void*)0 != p_52), (safe_rshift_func_uint16_t_u_u(p_53, 7)))), l_477)))) <= 1UL) , (safe_unary_minus_func_int32_t_s((p_53 & ((((g_254 = l_479) , l_479) , p_53) , p_51)))))) ^ (*p_52)) , (void*)0);

            ;
            (*p_52) = ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_div_func_int32_t_s_s((*p_52), 0xA11C0EB1L)))), l_479)) && ((safe_add_func_uint32_t_u_u(l_477, (p_53 < (safe_mod_func_uint32_t_u_u((l_477 & (p_53 != l_477)), 0xC0E46932L))))) <= (*g_251)));
        }
        else
        {
            unsigned l_505 = 0x9771846BL;
            for (g_96 = (-24); (g_96 > (-25)); g_96 = safe_sub_func_int32_t_s_s(g_96, 3))
            {
                int l_503 = 0x758FC7C2L;
                unsigned *l_504 = &g_437;
                int **l_519 = &g_24;
                g_25[0][3][0] = l_495;
                if ((safe_lshift_func_uint16_t_u_u(p_51, ((****g_389) || ((*g_251) ^ (safe_div_func_uint16_t_u_u(((((safe_unary_minus_func_uint32_t_u((((*p_52) || ((g_132[5] == l_503) == p_51)) | 0xA63EL))) == (((*l_504) = g_123[1][4]) , 247UL)) < p_51) != l_505), (*g_251))))))))
                {
                    unsigned l_510 = 18446744073709551608UL;
                    g_98[3][4][0] = (safe_sub_func_int32_t_s_s((g_100 = ((*p_52) <= (*p_52))), (safe_sub_func_int16_t_s_s((l_505 > l_510), ((!(g_13 != (safe_rshift_func_uint8_t_u_u((**l_432), 7)))) >= l_505)))));
                    g_25[2][5][1] = (safe_mod_func_uint32_t_u_u(((g_123[8][0] , (safe_sub_func_int8_t_s_s(p_51, (p_53 & (safe_mul_func_uint32_t_u_u(g_116[2], ((65532UL | (p_53 ^ 0xFC60709CL)) , (0xA8DB8AA1L == l_505)))))))) < g_271), 0xAE1BEEE1L));
                }
                else
                {
                    (*l_432) = func_26(l_519);

                    ;
                    for (g_264 = (-12); (g_264 > (-9)); g_264 = safe_add_func_uint32_t_u_u(g_264, 9))
                    {
                        (**g_156) = l_522;

                        ;
                        p_52 = ((*l_519) = p_52);

                        ;
                        (*l_519) = (**g_156);
                    }

                    ;
                    for (l_505 = 0; (l_505 <= 3); l_505 += 1)
                    {
                        int i;
                        p_52 = (**g_156);
                        (**g_156) = (g_116[l_505] , p_52);
                    }
                }
            }
            (*l_522) = (*p_52);
        }

        ;
        for (g_437 = 0; (g_437 == 8); g_437++)
        {
            (*p_52) = (*p_52);
            (*l_522) = 0L;
            if ((*p_52))
                break;
            (*l_522) = ((void*)0 == &g_157);
        }
    }
    else
    {
        unsigned l_533 = 18446744073709551608UL;
        unsigned short **l_537 = &g_392;
        int **l_552 = &g_29;
        int l_554 = (-2L);
        (**l_432) = (safe_lshift_func_uint8_t_u_s(1UL, (0x4A50C52BL ^ 1UL)));
        if ((***g_156))
        {
            int *l_530 = (void*)0;
            unsigned short l_531[6] = {0x5779L,0x5779L,0x5779L,0x5779L,0x5779L,0x5779L};
            int i;
            for (l_434 = 0; (l_434 <= 0); l_434 += 1)
            {
                char l_529 = 0x76L;
                for (g_264 = 0; (g_264 >= 0); g_264 -= 1)
                {
                    unsigned short *****l_528[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_528[i] = &g_389;
                    (**g_156) = (**g_156);
                    for (p_51 = 0; (p_51 <= 0); p_51 += 1)
                    {
                        int i, j, k;
                        if (g_116[(g_264 + 2)])
                            break;
                        p_52 = &g_25[(p_51 + 4)][(p_51 + 2)][l_434];

                        ;
                    }
                    for (p_53 = 0; (p_53 <= 0); p_53 += 1)
                    {
                        int i, j;
                        l_448[l_434][(g_264 + 2)] = (l_527 != l_528[0]);
                        if (l_529)
                            continue;
                    }
                }
                (**g_156) = p_52;
                if (l_531[0])
                    break;
                for (g_138 = 0; (g_138 <= 0); g_138 += 1)
                {
                    if (l_529)
                        break;
                    (*l_432) = p_52;
                }
            }
            if ((*p_52))
            {
                (**l_432) = l_532;
            }
            else
            {
                (***g_156) = l_533;
                if ((*p_52))
                {
                    (*p_52) = (p_53 == 0xAAL);
                }
                else
                {
                    (*l_432) = p_52;
                }
            }
            (**l_432) = (l_531[1] <= 4294967295UL);
        }
        else
        {
            unsigned l_536[10][5][2] = {{{4294967293UL,0xF07C688DL},{1UL,0UL},{1UL,0xF07C688DL},{4294967293UL,4294967286UL},{0xF07C688DL,0xD2EB6CDEL}},{{1UL,4294967288UL},{0x1A29F790L,0UL},{0UL,0UL},{0UL,0xB2EE2920L},{0xF07C688DL,0UL}},{{0x5C2EA196L,0x5164C391L},{0xFF7C5D67L,0UL},{0xE4DF707AL,0x68000352L},{1UL,4294967288UL},{0xF07C688DL,4294967288UL}},{{1UL,0x68000352L},{0xE4DF707AL,0UL},{0xFF7C5D67L,0x5164C391L},{0xD2EB6CDEL,0x5164C391L},{4294967289UL,4294967288UL}},{{4294967286UL,1UL},{0x5C2EA196L,0x5C2EA196L},{1UL,4294967292UL},{0xB2EE2920L,0xF07C688DL},{4294967289UL,0x68000352L}},{{0UL,4294967289UL},{0UL,0x5C2EA196L},{0UL,4294967289UL},{0UL,0x68000352L},{4294967289UL,0xF07C688DL}},{{0xB2EE2920L,4294967292UL},{1UL,0x5C2EA196L},{0x5C2EA196L,1UL},{4294967286UL,4294967288UL},{4294967289UL,0x5164C391L}},{{0xD2EB6CDEL,4294967295UL},{1UL,0x5C2EA196L},{4294967293UL,4294967290UL},{4294967288UL,0UL},{4294967289UL,0UL}},{{4294967288UL,4294967290UL},{4294967293UL,0x5C2EA196L},{1UL,4294967295UL},{0xD2EB6CDEL,0x5164C391L},{4294967289UL,4294967288UL}},{{4294967286UL,1UL},{0x5C2EA196L,0x5C2EA196L},{1UL,4294967292UL},{0xB2EE2920L,0xF07C688DL},{4294967289UL,0x68000352L}}};
            int *l_538 = &l_448[0][2];
            unsigned char **l_549 = (void*)0;
            unsigned char ***l_548 = &l_549;
            int i, j, k;
            (**g_156) = l_538;

            ;
            (*l_548) = ((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((*l_538), (l_533 < (safe_div_func_uint8_t_u_u((!(safe_sub_func_int32_t_s_s(((((*g_156) = func_72(p_53, p_51)) != (void*)0) ^ ((((0x39B8L ^ ((*g_251) = 0xF856L)) | ((l_533 && 5UL) && 1L)) < (*l_538)) , g_547)), l_533))), g_294[5]))))), p_53)) , (void*)0);

            ;
            ;
            ;
        }

        ;
        ;
        ;
        (*p_52) = (*g_24);
        for (g_138 = 29; (g_138 >= (-30)); g_138 = safe_sub_func_int16_t_s_s(g_138, 6))
        {
            int l_553 = (-9L);
            (*p_52) = l_533;
            (*l_432) = (*l_552);
        }

        ;
    }

    ;
    ;
    ;
    ;

    for (g_138 = 0; g_138 < 6; g_138 += 1)
    {
        g_294[g_138] = 0xE7C94529L;
    }
    (*l_432) = func_26((*g_156));
    return (*p_52);




}







static int * func_54(short p_55, int * p_56, int * p_57)
{
    short l_282 = 0L;
    unsigned l_285 = 0UL;
    int *l_295 = &g_98[5][0][1];
    char l_308 = 0xAFL;
    unsigned short l_373 = 1UL;
    unsigned l_374 = 0xD75AB5A5L;
    unsigned short *l_388 = &g_123[7][2];
    unsigned short **l_387[9][10][2] = {{{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388},{(void*)0,&l_388}},{{&l_388,(void*)0},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{(void*)0,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388}},{{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388}},{{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0}},{{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388}},{{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388}},{{&l_388,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388}},{{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388},{&l_388,&l_388},{(void*)0,&l_388}},{{(void*)0,(void*)0},{(void*)0,&l_388},{(void*)0,(void*)0},{(void*)0,&l_388},{(void*)0,&l_388},{&l_388,&l_388},{&l_388,&l_388},{&l_388,(void*)0},{&l_388,&l_388},{&l_388,&l_388}}};
    unsigned short ***l_386 = &l_387[7][5][1];
    unsigned short ****l_385 = &l_386;
    short **l_397 = &g_251;
    char *l_400 = &g_212[3];
    char **l_399 = &l_400;
    int *l_404 = &g_98[0][7][0];
    int *l_406 = &g_96;
    int i, j, k;
    if ((0x09C9L < (((((((*l_295) = (safe_add_func_uint16_t_u_u(l_282, ((safe_sub_func_uint32_t_u_u(l_285, ((safe_rshift_func_uint8_t_u_u(246UL, 0)) > ((((((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_282, (*p_56))), ((+(safe_rshift_func_int16_t_s_s(p_55, 5))) | l_282))) <= ((((0x04L ^ 0x2CL) == p_55) || g_294[5]) != g_98[0][7][0])) , p_55) , 0x19L) , (*p_57)) , l_282)))) , l_282)))) && (*l_295)) && p_55) == 0x70221A42L) & l_285) || (*g_24))))
    {
        (**g_156) = func_26((*g_156));

        ;
    }
    else
    {
        unsigned char l_305[5];
        unsigned short l_346 = 5UL;
        int *l_363 = (void*)0;
        unsigned short *l_382 = &l_346;
        unsigned short **l_381[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned short ***l_380 = &l_381[4];
        unsigned short ****l_379[10] = {&l_380,&l_380,&l_380,&l_380,&l_380,&l_380,&l_380,&l_380,&l_380,&l_380};
        int i;
        for (i = 0; i < 5; i++)
            l_305[i] = 0xBFL;
        for (g_264 = (-27); (g_264 != 23); ++g_264)
        {
            short l_298[3][8] = {{0xAAA7L,7L,0x5044L,7L,0xAAA7L,0xAAA7L,7L,0x5044L},{0xAAA7L,0xAAA7L,7L,0x5044L,7L,0xAAA7L,0xAAA7L,7L},{0xCD39L,7L,7L,0xCD39L,0x163EL,0xCD39L,7L,0xAAA7L}};
            int i, j;
            for (g_138 = 1; (g_138 <= 5); g_138 += 1)
            {
                (**g_156) = (**g_156);
            }
            if (l_298[2][1])
                continue;
            (*g_157) = func_26((*g_156));

            ;
        }
        if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_sub_func_uint16_t_u_u(65535UL, (l_305[3] == 0xFA9EB540L))) , ((safe_mod_func_uint16_t_u_u((((*g_251) = (p_55 > l_308)) || p_55), l_305[3])) >= g_212[5])) > 3UL) || 0x840E0E2DL), p_55)), 7)))
        {
            (**g_156) = (*g_157);
        }
        else
        {
            unsigned char l_341 = 1UL;
            int **l_342 = &l_295;
            unsigned l_355[9][4] = {{0xCA978928L,0x1CD6FB14L,0xCA978928L,0x1E158198L},{0xCA978928L,0x1E158198L,0xCA978928L,0x1CD6FB14L},{0xCA978928L,0x1CD6FB14L,0xCA978928L,0x1E158198L},{0xCA978928L,0x1E158198L,0xCA978928L,0x1CD6FB14L},{0xCA978928L,0x1CD6FB14L,0xCA978928L,0x1E158198L},{0xCA978928L,0x1E158198L,0xCA978928L,0x1CD6FB14L},{0xCA978928L,0x1CD6FB14L,0xCA978928L,0x1E158198L},{0xCA978928L,0x1E158198L,0xCA978928L,0x1CD6FB14L},{0xCA978928L,0x1CD6FB14L,0xCA978928L,0x1E158198L}};
            int *l_356 = &g_100;
            int *l_357 = (void*)0;
            int *l_358 = &g_96;
            int i, j;
            (*g_156) = &l_295;

            ;
            if ((p_55 <= p_55))
            {
                (***g_156) = (*g_24);
            }
            else
            {
                int *l_340 = &g_98[6][4][0];
                if (((*l_295) = l_305[3]))
                {
                    int **l_309 = &l_295;
                    (**g_157) = (*p_57);
                    p_57 = func_26(((*g_156) = l_309));

                    ;
                }
                else
                {
                    for (l_282 = (-16); (l_282 <= 28); l_282 = safe_add_func_uint8_t_u_u(l_282, 3))
                    {
                        return p_56;



                    }
                }
                for (l_282 = 0; (l_282 > 9); l_282 = safe_add_func_int32_t_s_s(l_282, 7))
                {
                    unsigned short *l_323 = &g_2;
                    unsigned short **l_322 = &l_323;
                    unsigned short ***l_321 = &l_322;
                    int l_326[8][6][1] = {{{0x7851FA4AL},{4L},{0x03E24DF1L},{0xD9343633L},{0xE77E1A47L},{0xD9343633L}},{{0x03E24DF1L},{4L},{0x7851FA4AL},{1L},{0x7851FA4AL},{4L}},{{0x03E24DF1L},{0xD9343633L},{0xE77E1A47L},{0xD9343633L},{0x03E24DF1L},{4L}},{{0x7851FA4AL},{1L},{0x7851FA4AL},{4L},{0x03E24DF1L},{0xD9343633L}},{{0xE77E1A47L},{0xD9343633L},{0x03E24DF1L},{4L},{0x7851FA4AL},{1L}},{{0x7851FA4AL},{4L},{0x03E24DF1L},{0xD9343633L},{0xE77E1A47L},{0xD9343633L}},{{0x03E24DF1L},{4L},{0x7851FA4AL},{1L},{0x7851FA4AL},{4L}},{{0x03E24DF1L},{0xD9343633L},{0xE77E1A47L},{0xD9343633L},{0x03E24DF1L},{4L}}};
                    unsigned *l_345 = &l_285;
                    int i, j, k;
                }
            }
            (*l_358) = ((*l_356) = ((***g_156) = (*p_57)));
        }

        ;
        for (l_308 = (-6); (l_308 <= (-30)); l_308--)
        {
            unsigned short *l_366[9] = {&l_346,&g_123[8][2],&l_346,&g_123[8][2],&l_346,&g_123[8][2],&l_346,&g_123[8][2],&l_346};
            unsigned short *****l_383 = (void*)0;
            unsigned short *****l_384 = (void*)0;
            short **l_396 = &g_251;
            short ***l_395 = &l_396;
            int l_398 = 1L;
            int i;
        }
    }

    ;
    (*l_404) = (((+(*l_295)) , func_58(((((g_401 = ((*l_399) = (void*)0)) == (func_58((0UL != (safe_rshift_func_uint8_t_u_s(((void*)0 != g_29), 6))), (*l_295), p_55, func_26((*g_156)), &l_295) , &g_212[4])) || g_254) , 4L), p_55, (*g_251), l_404, &l_295)) > 6UL);

    ;
    ;
    (*l_386) = (void*)0;
    (*l_295) = (((*g_391) = (***g_389)) != g_405);
    return l_406;



}







static unsigned short func_58(short p_59, unsigned char p_60, short p_61, int * p_62, int ** p_63)
{
    char l_199 = (-8L);
    unsigned short *l_201 = &g_2;
    int **l_221 = &g_29;
    int l_275 = 0xED8679B8L;
    unsigned l_278 = 0xF0D012A8L;
    int *l_279 = &g_96;
    for (g_130 = 0; (g_130 <= 1); g_130 += 1)
    {
        unsigned l_198 = 0UL;
        unsigned short *l_207 = &g_123[0][0];
        int **l_222 = (void*)0;
        unsigned short l_265 = 65533UL;
        unsigned char l_266 = 0x31L;
        short *l_272 = &g_116[3];
        short *l_273 = &g_65;
        int *l_274[1][7][4] = {{{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]},{&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0],&g_98[0][7][0]}}};
        int i, j, k;
    }
    (*l_279) = (safe_add_func_int32_t_s_s((**p_63), 0xB3D6F203L));
    (*l_279) = (**p_63);
    return g_138;
}







static unsigned char func_66(int ** p_67, short p_68, int p_69, unsigned p_70, int * p_71)
{
    int *l_171 = (void*)0;
    int ***l_172 = &g_157;
    int *l_173 = &g_25[0][3][0];
    int *l_174 = (void*)0;
    int **l_185 = &g_24;
    unsigned char *l_186[4];
    char *l_193[8][6] = {{&g_138,(void*)0,&g_138,&g_138,(void*)0,&g_138},{(void*)0,&g_138,&g_138,(void*)0,&g_138,&g_138},{&g_138,(void*)0,&g_138,&g_138,&g_138,&g_138},{&g_138,&g_138,&g_138,(void*)0,(void*)0,(void*)0},{(void*)0,&g_138,(void*)0,&g_138,&g_138,&g_138},{&g_138,(void*)0,(void*)0,&g_138,&g_138,(void*)0},{(void*)0,&g_138,&g_138,&g_138,(void*)0,&g_138},{&g_138,(void*)0,&g_138,&g_138,(void*)0,&g_138}};
    short *l_194 = &g_116[2];
    int *l_195 = &g_100;
    int i, j;
    for (i = 0; i < 4; i++)
        l_186[i] = &g_130;
    p_69 = (g_98[8][0][0] = ((safe_mod_func_uint8_t_u_u((((l_171 == ((g_25[0][3][0] && (((**p_67) , ((&p_67 != l_172) > (p_70 == p_69))) && 0x68L)) , l_173)) > p_70) && p_70), 0x1EL)) == g_116[2]));
    (**g_156) = (void*)0;
    g_98[1][4][1] = (((((((safe_mod_func_uint32_t_u_u((*l_173), (*p_71))) == (safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((g_132[4] = ((safe_mod_func_int32_t_s_s((*g_24), (*g_24))) , g_100)), (*l_173))) <= p_70), g_98[3][3][0])) > p_70) | p_69), g_98[0][7][0]))) != p_68) > g_123[8][1]) , g_2) <= p_68) , (*l_173));
    (*l_195) = (safe_mod_func_uint16_t_u_u(((((g_123[0][0] >= (&g_132[5] == (void*)0)) < g_132[5]) <= (&g_138 != l_193[3][2])) , p_70), (p_68 , ((*l_194) = (g_98[0][7][0] & 0x4DL)))));
    return p_70;
}







static int ** func_72(unsigned short p_73, char p_74)
{
    int **l_142 = (void*)0;
    int **l_143 = &g_29;
    int l_148 = 0x7F47BCE9L;
    int ***l_158 = &l_142;
    char *l_166 = &g_138;
    int *l_167 = &l_148;
    (*l_143) = func_26(l_142);

    ;
    if (p_73)
    {
        unsigned short l_144 = 0xE678L;
        for (g_138 = 0; (g_138 <= 1); g_138 += 1)
        {
            int *l_145[8][5] = {{(void*)0,(void*)0,&g_25[0][3][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_25[0][3][0],(void*)0,(void*)0},{&g_25[0][3][0],(void*)0,&g_25[0][3][0],&g_25[0][3][0],(void*)0},{(void*)0,&g_25[0][3][0],&g_25[0][3][0],(void*)0,&g_25[0][3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_25[0][3][0],(void*)0,&g_25[0][3][0],&g_25[0][3][0],(void*)0}};
            int i, j;
            g_98[0][7][0] = (l_144 = (-1L));
            return &g_24;


        }
    }
    else
    {
        int **l_146[10] = {&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29};
        int ***l_147 = &l_146[7];
        int i;
        l_148 = p_73;
        for (g_100 = 0; (g_100 <= 1); g_100 += 1)
        {
            int **l_149 = &g_29;
            short *l_159 = (void*)0;
            int i;
            g_24 = &g_96;

            ;
            (*l_147) = (l_149 = (*l_147));

            ;
            (**l_147) = func_26(l_149);

            ;
            for (g_96 = 0; (g_96 <= 1); g_96 += 1)
            {
                int l_160 = 0x11D3A895L;
                if ((g_98[0][7][0] = (*g_24)))
                {
                    int *l_151 = &g_96;
                    if (p_73)
                    {
                        int l_150 = 0x97976628L;
                        if (l_150)
                            break;
                        return l_146[(g_100 + 8)];


                    }
                    else
                    {
                        (*l_143) = l_151;

                        ;
                    }

                    ;
                    g_98[0][7][0] = (safe_sub_func_uint32_t_u_u(g_96, ((l_160 = (safe_add_func_int16_t_s_s(0x50EAL, ((g_132[5] = (g_156 == (l_158 = (void*)0))) , ((&g_116[2] != l_159) & 0x8773L))))) , (**l_143))));

                    ;
                    (*l_147) = l_149;
                }
                else
                {
                    for (g_138 = 1; (g_138 >= 0); g_138 -= 1)
                    {
                        int **l_161 = &g_24;
                        return l_161;


                    }
                }
                for (p_74 = 1; (p_74 >= 0); p_74 -= 1)
                {
                    int i, j, k;
                    if (g_98[(g_96 + 2)][(g_100 + 4)][p_74])
                        break;
                }
            }
        }

        ;
        ;
    }

    ;
    ;
    (*l_167) = (0x5CCAC48AL > (((safe_mod_func_int16_t_s_s(p_74, ((***g_156) ^ (*g_24)))) , (**g_156)) != (*l_143)));
    return (*g_156);


}







static unsigned char func_79(int * p_80, int ** p_81)
{
    unsigned l_83 = 4294967287UL;
    int **l_93[6][5] = {{&g_29,&g_29,&g_29,(void*)0,&g_24},{&g_29,&g_29,&g_29,&g_29,&g_29},{&g_29,&g_29,&g_24,&g_29,&g_24},{&g_29,&g_29,&g_29,(void*)0,&g_24},{&g_29,&g_29,&g_29,&g_29,&g_29},{&g_29,&g_29,&g_24,&g_29,&g_24}};
    unsigned l_124 = 8UL;
    unsigned l_140[9][5][3] = {{{0x92D98860L,1UL,0UL},{4294967295UL,0x937C5573L,4294967288UL},{0x0DC26B4EL,0UL,0xD5C63F28L},{4294967295UL,0x9CB853F4L,0x617A08BBL},{0x92D98860L,5UL,4294967288UL}},{{0UL,7UL,0x772F823EL},{0UL,0x15294191L,4294967295UL},{0x92D98860L,0x937C5573L,1UL},{4294967295UL,0xD55F32A4L,0x555DEF73L},{0x0DC26B4EL,0x15294191L,0x617A08BBL}},{{4294967295UL,0xF3F077A8L,4294967292UL},{0x92D98860L,4294967289UL,0x555DEF73L},{0UL,0xAA70A8B0L,0UL},{0UL,0x0506A2FBL,0x617A08BBL},{0x9CCF4BB6L,0x15294191L,0x5ED220E4L}},{{0xD5C63F28L,4294967295UL,0x446B8AB0L},{0x772F823EL,0x0506A2FBL,0x906F4486L},{0xD5C63F28L,4294967295UL,4294967288UL},{0x9CCF4BB6L,0x937C5573L,0x446B8AB0L},{0UL,0x74206E04L,0x92D98860L}},{{0UL,0xD68C6BBBL,4294967292UL},{0x9CCF4BB6L,4294967295UL,0UL},{0xD5C63F28L,0UL,0x0DC26B4EL},{0x772F823EL,0xD68C6BBBL,4294967288UL},{0xD5C63F28L,0xAA70A8B0L,0x555DEF73L}},{{0x9CCF4BB6L,0xD55F32A4L,0x0DC26B4EL},{0UL,4294967295UL,0x5ED220E4L},{0UL,0UL,0xD5C63F28L},{0x9CCF4BB6L,0UL,0x92D98860L},{0xD5C63F28L,0x15294191L,1UL}},{{0x772F823EL,0UL,0x555DEF73L},{0xD5C63F28L,0x74206E04L,0x906F4486L},{0x9CCF4BB6L,1UL,1UL},{0UL,0xAA70A8B0L,0UL},{0UL,0x0506A2FBL,0x617A08BBL}},{{0x9CCF4BB6L,0x15294191L,0x5ED220E4L},{0xD5C63F28L,4294967295UL,0x446B8AB0L},{0x772F823EL,0x0506A2FBL,0x906F4486L},{0xD5C63F28L,4294967295UL,4294967288UL},{0x9CCF4BB6L,0x937C5573L,0x446B8AB0L}},{{0UL,0x74206E04L,0x92D98860L},{0UL,0xD68C6BBBL,4294967292UL},{0x9CCF4BB6L,4294967295UL,0UL},{0xD5C63F28L,0UL,0x0806C526L},{6UL,0x772F823EL,4294967291UL}}};
    int i, j, k;
    if (l_83)
    {
        int **l_92 = &g_24;
        int *l_97 = &g_98[0][7][0];
        int *l_99 = &g_100;
        (*l_99) = (0x96398086L != (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((249UL != (l_92 != (l_93[2][1] = (void*)0))), 0x69L)), (**l_92))) < l_83) != ((safe_mul_func_uint32_t_u_u((**l_92), ((((((*l_97) = (g_96 = 1L)) <= 0x448C3647L) <= (*p_80)) > 1UL) == l_83))) , l_83)), l_83)));
    }
    else
    {
        int l_104 = 0xE7B97028L;
        short *l_115[5] = {&g_13,&g_13,&g_13,&g_13,&g_13};
        int l_117[10];
        unsigned short *l_122 = &g_123[1][4];
        int l_125 = 2L;
        short l_126 = (-10L);
        unsigned char *l_129 = &g_130;
        unsigned char *l_131[1];
        char *l_137 = &g_138;
        short l_139[8] = {0x213CL,0x213CL,0x213CL,0x213CL,0x213CL,0x213CL,0x213CL,0x213CL};
        int i;
        for (i = 0; i < 10; i++)
            l_117[i] = 1L;
        for (i = 0; i < 1; i++)
            l_131[i] = &g_132[5];
        for (g_100 = 0; (g_100 >= (-22)); g_100 = safe_sub_func_int8_t_s_s(g_100, 2))
        {
            int l_103 = 6L;
            l_104 = (g_100 | l_103);
            for (l_103 = 24; (l_103 > 9); l_103 = safe_sub_func_uint8_t_u_u(l_103, 4))
            {
                if ((*g_29))
                    break;
                if ((*g_24))
                    break;
            }
        }
        g_98[0][7][0] = (((*g_29) <= (*g_24)) == (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((g_100 ^ l_104), ((((l_125 = ((g_13 > ((safe_rshift_func_int16_t_s_u((l_117[5] = g_98[0][7][0]), (safe_add_func_uint16_t_u_u(((*l_122) = (l_104 , (safe_rshift_func_int8_t_s_s(g_98[1][9][1], ((g_116[1] | l_104) == (*p_80)))))), g_25[8][8][1])))) <= g_25[0][3][0])) , l_124)) | l_104) && g_123[8][4]) ^ l_126))), 0x28E06257L)));
        l_139[7] = ((((*l_137) = ((safe_add_func_int32_t_s_s((((((((l_117[5] = (((*l_129) = 254UL) , l_117[5])) == ((g_98[0][7][0] ^ (((safe_add_func_int8_t_s_s(8L, (g_123[1][4] <= 0L))) <= ((l_125 = (safe_rshift_func_int8_t_s_u(g_132[5], ((l_104 || (-9L)) | 9L)))) < 249UL)) , g_123[1][4])) , l_104)) , &g_96) == (*p_81)) == l_126) , (void*)0) == (void*)0), g_132[5])) == g_123[0][1])) , 0x65L) <= g_25[2][1][0]);
    }
    return l_140[6][2][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_25[i][j][k], "g_25[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_98[i][j][k], "g_98[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_116[i], "g_116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_123[i][j], "g_123[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_132[i], "g_132[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_320[i], "g_320[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_745[i][j][k], "g_745[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_752[i], "g_752[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_758, "g_758", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
