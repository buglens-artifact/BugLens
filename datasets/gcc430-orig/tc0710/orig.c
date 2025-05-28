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



static unsigned g_4 = 0xCE53D8DAL;
static unsigned char g_10[2][7][4] = {{{0x15L,255UL,0x15L,0UL},{0xE3L,255UL,0x9AL,0x07L},{255UL,249UL,249UL,255UL},{0x15L,0x07L,249UL,0UL},{255UL,0xE3L,0x9AL,0xE3L},{0xE3L,249UL,0x15L,0xE3L},{0x15L,0xE3L,0UL,0UL}},{{0x07L,0x07L,0x9AL,255UL},{0x07L,249UL,0UL,0x07L},{0x15L,255UL,0x15L,0UL},{0xE3L,255UL,0x9AL,0x07L},{255UL,249UL,0x75L,0UL},{0x9AL,249UL,0x75L,0x19L},{0UL,0x15L,255UL,0x15L}}};
static unsigned g_13 = 9UL;
static unsigned short g_17 = 1UL;
static unsigned short g_20 = 0x1500L;
static unsigned g_52 = 0xA361F882L;
static char g_136 = 0x78L;
static unsigned short g_147[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static short g_149 = (-7L);
static unsigned short g_155 = 0x226BL;
static unsigned g_160 = 5UL;
static unsigned g_166[7] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static unsigned g_170 = 1UL;
static unsigned g_175 = 18446744073709551615UL;
static unsigned short g_181 = 6UL;
static char g_182 = (-2L);
static int g_190 = 0xBDEA83D7L;
static short g_196 = 0xCE34L;
static unsigned g_197 = 0xE78DB235L;
static short g_208 = (-1L);
static int g_214 = 1L;
static const unsigned g_234 = 0xA971ECD1L;
static unsigned short g_251[3] = {0x7B2DL,0x7B2DL,0x7B2DL};
static int g_252 = (-1L);
static short g_277 = 0x48ACL;
static char g_279 = 0xBFL;
static char g_288 = 9L;
static char g_297[7] = {1L,0x8DL,0x8DL,1L,0x8DL,0x8DL,1L};
static int g_304[8][7][2] = {{{1L,0x3C8533CAL},{0xD40C0448L,0xD40C0448L},{(-3L),0x78289562L},{1L,0xFFD927F8L},{0xE2AB5A91L,0x1E035591L},{0x5A178EDEL,0xE2AB5A91L},{0xC21DECECL,0x2D46C6D6L}},{{0xC21DECECL,0xE2AB5A91L},{0x5A178EDEL,0x1E035591L},{0xE2AB5A91L,0xFFD927F8L},{1L,0x78289562L},{(-3L),0xD40C0448L},{0xD40C0448L,0x3C8533CAL},{1L,(-8L)}},{{0xFD4301AFL,0xC21DECECL},{0xD5CE5177L,0x96347A8CL},{0x78289562L,(-3L)},{0x3C8533CAL,0x7243F07FL},{0x96347A8CL,0x7243F07FL},{0x3C8533CAL,(-3L)},{0x78289562L,0x96347A8CL}},{{0xD5CE5177L,0xC21DECECL},{0xFD4301AFL,(-8L)},{1L,0x3C8533CAL},{0xD40C0448L,0xD40C0448L},{(-3L),0x78289562L},{1L,0xFFD927F8L},{0xE2AB5A91L,0x1E035591L}},{{0x5A178EDEL,0xE2AB5A91L},{0xC21DECECL,0x2D46C6D6L},{0xC21DECECL,0xE2AB5A91L},{0x5A178EDEL,0x7243F07FL},{(-8L),0x260AA1E2L},{0xFFD927F8L,0xC21DECECL},{0x7486EB96L,0x1E035591L}},{{0x1E035591L,(-3L)},{0x78289562L,0xFD4301AFL},{1L,0x5A178EDEL},{0x2D46C6D6L,1L},{0xC21DECECL,(-2L)},{(-3L),(-3L)},{1L,(-3L)}},{{(-3L),(-2L)},{0xC21DECECL,1L},{0x2D46C6D6L,0x5A178EDEL},{1L,0xFD4301AFL},{0x78289562L,(-3L)},{0x1E035591L,0x1E035591L},{0x7486EB96L,0xC21DECECL}},{{0xFFD927F8L,0x260AA1E2L},{(-8L),0x7243F07FL},{0x88732A64L,(-8L)},{0x5A178EDEL,0xD40C0448L},{0x5A178EDEL,(-8L)},{0x88732A64L,0x7243F07FL},{(-8L),0x260AA1E2L}}};
static short g_306 = (-1L);
static short g_307[1] = {0xCC7DL};
static unsigned char g_330[8][4][6] = {{{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,1UL,255UL}},{{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,1UL,255UL},{0x67L,255UL,1UL,1UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}},{{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL},{1UL,0xADL,0x4CL,255UL,0x4CL,0xADL}}};
static int g_339 = 0x797F3908L;
static unsigned g_346 = 1UL;
static unsigned g_365 = 1UL;
static unsigned g_438 = 4294967295UL;
static unsigned short g_492 = 0x4F61L;
static unsigned g_521 = 0UL;
static int g_544 = 0xC4A01EF8L;
static unsigned char g_575 = 249UL;
static short g_603[2][2] = {{0x5AFCL,0x5AFCL},{0x5AFCL,0x5AFCL}};
static char g_714[8][10] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
static short g_759[9][10] = {{0x2BC4L,0L,0L,0x2BC4L,0x7C5CL,4L,0x2BC4L,4L,0x7C5CL,0x2BC4L},{4L,0x2BC4L,4L,0x7C5CL,0x2BC4L,0L,0L,0x2BC4L,0x7C5CL,4L},{(-1L),(-1L),0x9177L,0x2BC4L,(-1L),0x9177L,(-1L),0x2BC4L,0x9177L,(-1L)},{(-1L),0L,4L,(-1L),0x7C5CL,0x7C5CL,(-1L),4L,0L,(-1L)},{4L,(-1L),0L,0x7C5CL,(-1L),0x7C5CL,0L,(-1L),4L,4L},{(-1L),0x2BC4L,0x9177L,(-1L),(-1L),0x9177L,(-1L),0x2BC4L,0x492DL,0x2BC4L},{(-1L),4L,0L,(-1L),0L,4L,(-1L),0x7C5CL,0x7C5CL,(-1L)},{0x7C5CL,0x2BC4L,0L,0L,0x2BC4L,0x7C5CL,4L,0x2BC4L,4L,0x7C5CL},{(-1L),0x2BC4L,0x492DL,0x2BC4L,(-1L),0x492DL,(-1L),(-1L),0x492DL,(-1L)}};
static char g_803 = 0L;
static unsigned g_835[1] = {0UL};
static char g_843[10] = {9L,0L,9L,0x1BL,0x1BL,9L,0L,9L,0x1BL,0x1BL};
static unsigned g_864 = 0x490A9B42L;
static const int g_895 = 0xC9DF7138L;
static char g_920 = 0xC5L;
static unsigned char g_945 = 0UL;



static unsigned func_1(void);
static char func_5(short p_6, unsigned char p_7, char p_8, unsigned short p_9);
static const char func_23(const unsigned p_24, unsigned p_25, unsigned p_26);
static unsigned func_33(unsigned short p_34, unsigned p_35, char p_36, const unsigned short p_37);
static unsigned char func_56(unsigned p_57, unsigned short p_58, char p_59);
static unsigned char func_66(short p_67, unsigned char p_68, int p_69, unsigned p_70, unsigned p_71);
static char func_100(unsigned p_101, int p_102);
static short func_112(short p_113, int p_114, int p_115, int p_116);
static int func_120(short p_121, unsigned p_122, int p_123);
static short func_126(const int p_127, unsigned p_128);
static unsigned func_1(void)
{
    unsigned l_14 = 0x0866193FL;
    int l_15 = 0x0639E6A4L;
    int l_16 = 0xA8FAD749L;
    unsigned char l_19 = 255UL;
    char l_31 = 0x5CL;
    int l_32 = 0x9C906054L;
    int l_733[3];
    int l_1084 = 0x18F9FBBDL;
    int l_1085 = 0xCD7CC71AL;
    int i;
    for (i = 0; i < 3; i++)
        l_733[i] = 0xFD35061CL;
    g_20 |= (l_19 |= (g_4 && (0x4074DD03L < ((func_5((g_10[0][2][2] &= g_4), g_4, (g_17 |= (((g_4 && (g_4 > (l_16 = (safe_add_func_uint32_t_u_u(((g_13 |= g_4) ^ ((((g_4 == (((((l_15 = ((g_4 || l_14) < 4UL)) && (-8L)) || 4294967287UL) == l_14) ^ g_4)) ^ 0x1EL) <= l_14) > g_4)), (-3L)))))) , g_13) & l_14)), l_14) & 0x30L) != 0L))));
    for (g_20 = 0; g_20 < 2; g_20 += 1)
    {
        for (g_13 = 0; g_13 < 7; g_13 += 1)
        {
            for (g_17 = 0; g_17 < 4; g_17 += 1)
            {
                g_10[g_20][g_13][g_17] = 0xD1L;
            }
        }
    }
    l_1085 |= ((func_5((func_5((l_16 , (l_733[1] = (safe_rshift_func_int8_t_s_u(((func_23(l_15, g_17, ((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((l_31 , ((l_32 = (7L & l_32)) && ((func_33(g_4, (1L ^ l_15), l_14, g_13) == l_14) != l_733[0]))), 0)) , 0x2DC5914CL) == g_234), l_733[0])) , l_31)) ^ (-2L)) || g_304[2][0][1]), l_15)))), g_346, l_31, g_714[1][9]) | l_1084), g_714[3][3], g_895, l_15) , g_365) && 0xBA33A65EL);
    for (g_17 = 0; (g_17 <= 0); g_17 += 1)
    {
        unsigned char l_1090 = 0UL;
        int l_1095 = 0x15DE734DL;
        int i;
        l_1095 = (!(safe_lshift_func_int8_t_s_s((g_803 = func_66(l_19, ((safe_mod_func_int16_t_s_s((g_307[g_17] = l_1090), func_120((7L != (g_149 , ((((0xC8L <= (func_5(l_1090, ((safe_sub_func_int8_t_s_s(g_330[5][3][2], 255UL)) || (safe_rshift_func_int16_t_s_u(g_197, 11))), l_1090, g_297[3]) & g_17)) & (-7L)) || l_32) != 0xE2CE9DA8L))), l_1090, l_1090))) < 0x86L), g_803, g_803, l_32)), 4)));
    }
    return l_32;
}







static char func_5(short p_6, unsigned char p_7, char p_8, unsigned short p_9)
{
    int l_18[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_18[i][j] = 0x01C8D535L;
    }
    l_18[1][1] = 0xB05EF135L;
    return g_17;
}







static const char func_23(const unsigned p_24, unsigned p_25, unsigned p_26)
{
    int l_754 = 4L;
    unsigned char l_756[5][4][7] = {{{252UL,0x91L,0x92L,0xB6L,4UL,0x57L,1UL},{255UL,1UL,1UL,1UL,0xFBL,1UL,0x9AL},{0xCFL,1UL,0x76L,4UL,255UL,252UL,0x9AL},{0x6CL,255UL,5UL,6UL,0x9AL,1UL,1UL}},{{0x92L,0x70L,0x82L,254UL,0x51L,0x51L,254UL},{255UL,254UL,255UL,0x82L,0x31L,0xCFL,0x96L},{0x00L,0x63L,0xB6L,0xFEL,255UL,5UL,1UL},{0x43L,0x57L,0x82L,1UL,0x68L,254UL,0x6CL}},{{6UL,0x82L,0xE3L,0x57L,0xFBL,0UL,0xB6L},{255UL,255UL,0x9AL,0xCDL,0x63L,0x17L,0x57L},{0x96L,0x51L,0UL,1UL,0x70L,0x5AL,0xFBL},{255UL,1UL,1UL,0x82L,0x70L,0x63L,1UL}},{{0x92L,0xDCL,1UL,0xD8L,0x63L,0UL,0x53L},{252UL,1UL,4UL,0xFBL,0xFBL,4UL,1UL},{1UL,0x96L,9UL,0x00L,0x68L,1UL,0UL},{0x31L,4UL,252UL,0x63L,0x43L,255UL,0xE3L}},{{0UL,255UL,1UL,0x00L,0x2EL,0xCFL,255UL},{0x82L,0xE3L,0x57L,0xFBL,0UL,0xB6L,255UL},{1UL,0UL,0x17L,0xD8L,1UL,0xFEL,0x76L},{0xB6L,252UL,0x96L,0x82L,0xD8L,1UL,1UL}}};
    unsigned l_770 = 0UL;
    int l_795 = (-1L);
    unsigned l_863 = 0x731D3AE7L;
    int l_882[10][7][1] = {{{0x0B9E4BE7L},{0xA599F174L},{0x9A7F7885L},{0xE62E9669L},{0xC55D365AL},{0xC55D365AL},{0x0B9E4BE7L}},{{(-1L)},{8L},{0L},{0x67CBF635L},{0xC9BAAA66L},{(-1L)},{0xF2E32487L}},{{4L},{6L},{0xC55D365AL},{(-1L)},{0xC55D365AL},{6L},{4L}},{{0xF2E32487L},{(-1L)},{0xC9BAAA66L},{0x67CBF635L},{0L},{8L},{(-1L)}},{{0x0B9E4BE7L},{1L},{1L},{0x0B9E4BE7L},{(-1L)},{8L},{0L}},{{0x67CBF635L},{0xC9BAAA66L},{(-1L)},{0xF2E32487L},{4L},{6L},{0xC55D365AL}},{{(-1L)},{0xC55D365AL},{6L},{4L},{0xF2E32487L},{(-1L)},{0xC9BAAA66L}},{{0x67CBF635L},{0L},{8L},{(-1L)},{0x0B9E4BE7L},{1L},{1L}},{{0x0B9E4BE7L},{(-1L)},{8L},{0L},{0x67CBF635L},{0xC9BAAA66L},{(-1L)}},{{0xF2E32487L},{4L},{6L},{0xC55D365AL},{(-1L)},{0xC55D365AL},{6L}}};
    unsigned short l_918 = 0x4E00L;
    const int l_927[7][6] = {{9L,9L,(-7L),(-7L),9L,9L},{9L,(-7L),(-7L),9L,9L,(-7L)},{9L,9L,(-7L),(-7L),9L,9L},{9L,(-7L),(-7L),9L,9L,(-7L)},{9L,9L,(-7L),(-7L),9L,9L},{9L,(-7L),(-7L),9L,9L,(-7L)},{9L,9L,(-7L),(-7L),9L,9L}};
    const unsigned l_935[7][3][10] = {{{4294967289UL,0x31FA9796L,0x0C83AEB8L,0x6000428BL,0UL,0UL,1UL,0UL,0x31FA9796L,0xD5D94BF4L},{4294967289UL,4294967295UL,0UL,4294967295UL,0xE096BEC1L,0UL,0xD5D94BF4L,0x574E50A9L,4294967295UL,0xE65294FEL},{0UL,0xD5D94BF4L,0x574E50A9L,4294967295UL,0xE65294FEL,4294967295UL,0x86D47DD2L,4294967288UL,0x4034ABDBL,0x0C83AEB8L}},{{0x31FA9796L,0x56E55B0BL,0xEC6E17C2L,3UL,0xEB08195BL,0x9D135F5FL,0x574E50A9L,0x31FA9796L,0x574E50A9L,0x9D135F5FL},{4294967295UL,1UL,4294967295UL,1UL,4294967295UL,1UL,0x6000428BL,0x669D9B17L,1UL,4294967295UL},{0xE65294FEL,0xE096BEC1L,0UL,0x906601E2L,1UL,5UL,1UL,4294967295UL,0UL,4294967295UL}},{{4294967288UL,0x906601E2L,1UL,0x4E596077L,4294967295UL,4294967295UL,0xEB08195BL,1UL,5UL,0x9D135F5FL},{0x56E55B0BL,0xE65294FEL,4294967289UL,0xEC6E17C2L,0xEB08195BL,0UL,0x4E596077L,0xD5D94BF4L,0xE65294FEL,0x0C83AEB8L},{0x574E50A9L,1UL,0UL,5UL,1UL,1UL,0UL,0UL,1UL,1UL}},{{0xAAE9C8BEL,4294967288UL,4294967288UL,0xAAE9C8BEL,0UL,0x56E55B0BL,0UL,1UL,0UL,4294967295UL},{0UL,1UL,0x6BC8C1A1L,0xEC6E17C2L,0xA7CD59DDL,4294967295UL,4294967288UL,0UL,0UL,0x906601E2L},{0x4034ABDBL,0UL,0x9D135F5FL,0xAAE9C8BEL,0x574E50A9L,0x669D9B17L,4294967295UL,0x56E55B0BL,1UL,0x9D135F5FL}},{{1UL,3UL,1UL,0UL,0xE65294FEL,0x574E50A9L,0xA7CD59DDL,0UL,1UL,0x6000428BL},{2UL,0x574E50A9L,0x906601E2L,0UL,0UL,0xAAE9C8BEL,0xEC6E17C2L,0xAAE9C8BEL,0UL,0UL},{1UL,1UL,1UL,0x906601E2L,1UL,0x9D135F5FL,0x6BC8C1A1L,4294967288UL,1UL,1UL}},{{0UL,0xAAE9C8BEL,1UL,0x574E50A9L,3UL,0UL,1UL,4294967288UL,0UL,1UL},{0UL,0UL,1UL,2UL,1UL,0x4034ABDBL,0UL,0xAAE9C8BEL,4294967295UL,0UL},{0UL,4294967295UL,0x906601E2L,0xEC6E17C2L,1UL,4294967295UL,1UL,0UL,4294967288UL,5UL}},{{1UL,0x574E50A9L,0x1FBAD43AL,0x56E55B0BL,0x4E596077L,0UL,0UL,0x4E596077L,0x56E55B0BL,0x1FBAD43AL},{0UL,0UL,0x31FA9796L,0x9D135F5FL,4294967295UL,0x6000428BL,0UL,0x81FA2C21L,1UL,0xE096BEC1L},{0x56E55B0BL,1UL,0xEB08195BL,1UL,0xA7CD59DDL,0x0C83AEB8L,0UL,0x574E50A9L,0xEC6E17C2L,4294967295UL}}};
    int l_953[2];
    unsigned char l_996 = 0UL;
    unsigned char l_1081 = 0x16L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_953[i] = (-8L);
    for (g_155 = 0; (g_155 == 43); ++g_155)
    {
        unsigned l_755 = 0x61B1C2BBL;
        int l_796 = 0xB6CD8A11L;
        unsigned l_919 = 1UL;
        for (g_190 = 0; (g_190 > 26); ++g_190)
        {
            int l_762[6] = {0L,0L,0L,0L,0L,0L};
            int l_794 = 1L;
            unsigned char l_892[5][5][7] = {{{3UL,0xB0L,0x5CL,0x5CL,0xB0L,3UL,0x90L},{254UL,0x16L,0x6EL,0UL,251UL,0xC2L,253UL},{0xE5L,3UL,0x74L,0x6BL,255UL,0x6BL,0x74L},{255UL,0x16L,0xFDL,0x7BL,0x31L,0UL,0x33L},{0x90L,0xB0L,250UL,255UL,0x74L,2UL,2UL}},{{0x31L,248UL,250UL,248UL,0x31L,0x16L,0x71L},{252UL,0xF8L,0xE5L,1UL,255UL,4UL,3UL},{0x07L,0x8CL,0x60L,249UL,251UL,0x7BL,1UL},{252UL,1UL,0xF8L,1UL,250UL,252UL,255UL},{251UL,0UL,0x6EL,0x16L,254UL,255UL,254UL}},{{1UL,0xB0L,0xB0L,1UL,246UL,255UL,255UL},{255UL,254UL,251UL,255UL,0x71L,0UL,0xA5L},{255UL,0x5CL,255UL,0xE5L,255UL,0x5CL,255UL},{0x60L,1UL,0x31L,1UL,255UL,0x6BL,254UL},{0x6BL,0xF8L,0x74L,255UL,0x90L,0x90L,255UL}},{{0x31L,254UL,0x31L,0xC2L,4UL,0x8CL,0xFDL},{0x5CL,3UL,255UL,0xF8L,0xB0L,2UL,0x6BL},{1UL,0x7BL,251UL,249UL,0x60L,0x8CL,0x07L},{250UL,255UL,0xB0L,4UL,0x74L,0x90L,246UL},{255UL,0x8CL,0x6EL,0x6BL,0xA5L,0x6BL,0x6EL}},{{255UL,255UL,2UL,252UL,4UL,0x5CL,1UL},{0x07L,0x7BL,8UL,248UL,0x6EL,0UL,4UL},{246UL,255UL,1UL,255UL,246UL,0xE5L,252UL},{0x60L,0x8CL,0x07L,0x69L,255UL,0UL,255UL},{0x90L,3UL,0xB0L,0x5CL,0x5CL,0xB0L,3UL}}};
            int i, j, k;
            if ((p_26 , (((((g_208 == (g_160 > 0x10AB602CL)) ^ (safe_sub_func_uint8_t_u_u(p_24, ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((l_754 ^= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_26, (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_13, 7)), func_5(g_339, p_26, g_251[1], p_24))))), (-8L))) != p_25), g_330[5][3][2]))), 5)) , p_24), p_26)) & p_24)))) ^ l_755) > p_25) | l_756[4][3][6])))
            {
                int l_765 = (-4L);
                int l_856 = 1L;
                g_339 = g_521;
                for (g_339 = 15; (g_339 != 8); g_339--)
                {
                    g_759[5][3] = 0x52257687L;
                }
                if ((safe_mod_func_int16_t_s_s(((l_762[3] = g_13) <= (safe_lshift_func_int16_t_s_s(((l_756[2][2][1] ^ ((func_120(p_25, p_24, p_24) | ((l_765 , (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_756[4][3][6] || l_755) , 0L), 10)), p_25))) , 0xB5L)) > g_136)) , l_770), 5))), g_214)))
                {
                    int l_793 = 0L;
                    if (((((safe_sub_func_int32_t_s_s(0xD5000E07L, (safe_mod_func_uint8_t_u_u(((p_25 ^ (((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_126(g_575, (p_26 = ((safe_sub_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(g_759[5][3], (p_26 != (safe_add_func_uint8_t_u_u((l_796 = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((l_795 &= func_120(p_26, (g_521 = (((~(((g_182 , ((l_794 = func_120(p_26, p_26, l_793)) < l_765)) < g_521) == 0x35B516C0L)) < g_181) && 5L)), p_25)), 5)) <= 1L), 0x251CL)) , g_297[6])), p_25))))), l_765)), l_756[1][2][1])) , 4294967295UL) && g_166[1]) | p_24), g_304[6][2][1])) , 4294967292UL))), g_10[1][6][3])), 0UL)) ^ g_4) , g_182)) == g_190), l_755)))) & g_147[1]) , p_26) <= g_304[2][0][1]))
                    {
                        unsigned l_818 = 6UL;
                        int l_819 = 1L;
                        int l_820[10][4][6] = {{{4L,(-1L),0x86312CE3L,0L,0xC59D6126L,1L},{0xDB4D6AE3L,1L,1L,0x5B2A3D5EL,0xC59D6126L,0x1EB6A3DFL},{0L,(-1L),0x2DA52F4CL,0L,0x86312CE3L,0xA67B8023L},{0xF6D685B5L,(-1L),0xC59D6126L,4L,0xC59D6126L,(-1L)}},{{0x5B2A3D5EL,1L,5L,0xA8B951A1L,0xC59D6126L,0x86312CE3L},{0L,(-1L),1L,0L,0x86312CE3L,1L},{0L,(-1L),0x1EB6A3DFL,0xF6D685B5L,0xC59D6126L,0x2DA52F4CL},{0xA8B951A1L,1L,0xA67B8023L,0xDB4D6AE3L,0xC59D6126L,0xC59D6126L}},{{4L,(-1L),(-1L),4L,0x86312CE3L,5L},{4L,(-1L),0x86312CE3L,0L,0xC59D6126L,1L},{0xDB4D6AE3L,1L,1L,0x5B2A3D5EL,0xC59D6126L,0x1EB6A3DFL},{0L,(-1L),0x2DA52F4CL,0L,0x86312CE3L,0xA67B8023L}},{{0xF6D685B5L,(-1L),0xC59D6126L,0xA8B951A1L,0x2DA52F4CL,1L},{4L,0xA67B8023L,0x86312CE3L,0L,0x2DA52F4CL,(-1L)},{0L,1L,0xA67B8023L,0L,(-1L),0x1EB6A3DFL},{0x5B2A3D5EL,1L,1L,0xDB4D6AE3L,0x2DA52F4CL,5L}},{{0L,0xA67B8023L,0xC59D6126L,0L,0x2DA52F4CL,0x2DA52F4CL},{4L,1L,1L,4L,(-1L),0x86312CE3L},{0xA8B951A1L,1L,(-1L),0x5B2A3D5EL,0x2DA52F4CL,0xA67B8023L},{0L,0xA67B8023L,0x1EB6A3DFL,4L,0x2DA52F4CL,1L}},{{0xF6D685B5L,1L,5L,0xF6D685B5L,(-1L),0xC59D6126L},{0xDB4D6AE3L,1L,0x2DA52F4CL,0xA8B951A1L,0x2DA52F4CL,1L},{4L,0xA67B8023L,0x86312CE3L,0L,0x2DA52F4CL,(-1L)},{0L,1L,0xA67B8023L,0L,(-1L),0x1EB6A3DFL}},{{0x5B2A3D5EL,1L,1L,0xDB4D6AE3L,0x2DA52F4CL,5L},{0L,0xA67B8023L,0xC59D6126L,0L,0x2DA52F4CL,0x2DA52F4CL},{4L,1L,1L,4L,(-1L),0x86312CE3L},{0xA8B951A1L,1L,(-1L),0x5B2A3D5EL,0x2DA52F4CL,0xA67B8023L}},{{0L,0xA67B8023L,0x8F4B4644L,0xC59D6126L,0xEB18C28EL,(-1L)},{(-1L),0x1DE40384L,0x68A4CF7AL,(-1L),0x38958D68L,0x3027F49AL},{1L,0x1DE40384L,0xEB18C28EL,5L,0xEB18C28EL,0x1DE40384L},{0xC59D6126L,1L,0xA77CEAFDL,0x86312CE3L,0xEB18C28EL,0x38958D68L}},{{1L,0x1DE40384L,1L,1L,0x38958D68L,0x8F4B4644L},{0xA67B8023L,0x1DE40384L,(-1L),1L,0xEB18C28EL,0x68A4CF7AL},{0x86312CE3L,1L,0x3027F49AL,0x1EB6A3DFL,0xEB18C28EL,0xEB18C28EL},{0x2DA52F4CL,0x1DE40384L,0x1DE40384L,0x2DA52F4CL,0x38958D68L,0xA77CEAFDL}},{{5L,0x1DE40384L,0x38958D68L,0xA67B8023L,0xEB18C28EL,1L},{0x1EB6A3DFL,1L,0x8F4B4644L,0xC59D6126L,0xEB18C28EL,(-1L)},{(-1L),0x1DE40384L,0x68A4CF7AL,(-1L),0x38958D68L,0x3027F49AL},{1L,0x1DE40384L,0xEB18C28EL,5L,0xEB18C28EL,0x1DE40384L}}};
                        int i, j, k;
                        g_803 &= (((((safe_rshift_func_int8_t_s_u(((func_5((g_603[1][0] = l_755), p_25, p_26, p_26) && g_234) == 0x43L), g_339)) == (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(p_24, g_544)) , l_765), p_25))) == p_25) > g_304[0][2][1]) != (-1L));
                        if (g_147[4])
                            break;
                        l_795 = (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((g_288 = (l_793 = (l_820[1][1][4] = ((safe_add_func_uint32_t_u_u(g_492, ((p_26 = g_252) & g_297[3]))) < ((+(l_819 |= (((l_796 = g_17) > ((safe_sub_func_int32_t_s_s(p_25, 0x2302D2F8L)) < (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_100((safe_add_func_int8_t_s_s((((g_714[6][9] | l_755) , 1L) >= l_818), l_762[3])), p_25), p_24)), g_251[1])))) > g_136))) , g_181))))) || l_819), 0x39L)), l_765));
                    }
                    else
                    {
                        g_339 = p_25;
                        g_339 = ((((safe_sub_func_uint32_t_u_u(p_25, p_25)) <= func_66(p_26, g_147[2], (safe_rshift_func_int16_t_s_u(l_765, (safe_add_func_int8_t_s_s((g_346 & (safe_lshift_func_int8_t_s_s((g_307[0] != 4294967293UL), 4))), g_10[0][6][1])))), p_26, p_24)) , p_24) && 0x710BL);
                        g_339 = g_288;
                    }
                    if (func_66(l_755, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_793, 13)), 4)), g_288, g_307[0], (p_25 >= l_755)))
                    {
                        g_339 &= p_25;
                        return p_25;
                    }
                    else
                    {
                        short l_840 = 0xDDFFL;
                        g_843[5] = ((((!(g_339 = func_5((safe_lshift_func_uint16_t_u_u(l_762[3], p_26)), (g_835[0] && p_25), ((func_66((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_840 , (((g_330[4][0][0] >= (safe_sub_func_uint16_t_u_u(l_793, 8UL))) == p_25) , (-1L))), 5UL)), g_214)), g_835[0], g_17, l_793, p_25) || g_147[0]) ^ l_765), p_25))) && 0x16788461L) > 6L) >= g_251[2]);
                        g_339 = g_4;
                        if (l_756[4][3][6])
                            continue;
                        g_339 = (((g_197 = l_793) , (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_796 < l_755), l_765)), (0x34DE02F9L != ((0x81L >= (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, (g_10[1][6][1] == g_365))), l_793)) != 0x211EL) , 0x07L)) && l_765))))) == p_25);
                    }
                    g_864 |= (safe_sub_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((g_252 == g_803) || (l_856 , (g_339 = (l_796 = ((p_25 < (l_856 > (((((l_794 = (safe_rshift_func_int16_t_s_u(0x92D2L, (safe_mul_func_int16_t_s_s((((p_26 = (safe_add_func_int32_t_s_s(((0x1A73A97EL | (l_863 && g_52)) | 8UL), g_182))) && p_26) && 0x2BL), g_843[9]))))) , 1L) , l_793) || l_756[3][3][6]) , l_793))) | l_762[3]))))), (-10L))) < (-10L)) != l_762[3]), g_155));
                }
                else
                {
                    g_339 &= (safe_rshift_func_uint16_t_u_u((p_26 >= g_288), 15));
                }
            }
            else
            {
                short l_877 = 0L;
                int l_883[1][2][9];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 9; k++)
                            l_883[i][j][k] = 0xCF8A38E9L;
                    }
                }
                l_795 = (safe_lshift_func_uint16_t_u_u(func_100(((((((safe_sub_func_int32_t_s_s((l_796 = g_714[4][8]), (g_438 && ((safe_rshift_func_int16_t_s_u(0xA2CCL, g_521)) != 9L)))) >= l_863) , p_26) <= 0xEBL) , (safe_sub_func_int8_t_s_s((l_794 = (safe_mul_func_int8_t_s_s((l_794 >= l_877), 0xCCL))), g_208))) <= p_24), l_762[3]), l_877));
                if (g_835[0])
                    continue;
                g_339 = ((safe_lshift_func_int8_t_s_s((-5L), ((safe_lshift_func_uint16_t_u_s((l_754 >= 7UL), 10)) | (l_883[0][1][2] = (((g_297[3] >= (l_882[4][6][0] ^= (g_759[5][3] , (p_26 & ((func_66(p_26, ((1UL != l_795) < l_755), p_26, l_877, g_182) | l_755) <= g_365))))) != g_182) & g_803))))) >= p_24);
            }
            g_339 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((func_5(((safe_lshift_func_uint16_t_u_u(0x79EDL, 15)) && (func_66(p_26, g_304[3][5][1], g_346, func_100(((l_892[3][0][0] , (func_66(g_17, (g_575 ^= (safe_lshift_func_uint8_t_u_u(p_26, g_895))), (safe_sub_func_int16_t_s_s(((255UL ^ 0x95L) == p_26), 65535UL)), p_26, g_297[3]) , p_24)) <= 0x5D42L), l_882[3][0][0]), p_24) ^ p_24)), g_160, g_492, g_297[3]) , p_24), g_759[5][3])), 9)) ^ 0x64D6B132L), g_10[0][2][2]));
            if (g_279)
                continue;
        }
        l_882[6][6][0] = (g_920 &= ((safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s(0xFEFE1889L, (safe_lshift_func_int8_t_s_u(l_754, 5)))) || (safe_lshift_func_uint8_t_u_s(((0x8A5AL < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_25, func_5((p_24 , ((l_882[4][6][0] = (g_339 &= l_918)) != p_25)), (((p_26 != (g_346 <= l_795)) , p_25) != 0x8FL), g_304[2][0][1], g_544))), l_919)), g_575)), g_136)), 13)), g_864))) >= (-1L)), 4))) , 0x90L), l_919)) , p_26));
        if (p_26)
            break;
        g_339 |= (((g_17 && 2L) > ((safe_sub_func_int32_t_s_s((l_796 = ((g_147[4] <= ((g_17 & l_755) | (func_66(l_756[4][2][2], g_208, p_24, (safe_mod_func_uint32_t_u_u(((g_714[3][5] > g_306) <= g_251[2]), p_25)), p_25) > l_754))) , p_24)), g_603[1][0])) > p_24)) < 0x99B9L);
    }
    for (l_754 = (-22); (l_754 > (-26)); l_754 = safe_sub_func_uint16_t_u_u(l_754, 8))
    {
        if (l_927[4][3])
            break;
    }
    if ((l_882[4][6][0] = func_120(p_26, ((p_25 && (safe_sub_func_uint16_t_u_u(p_25, ((l_882[4][6][0] = (safe_unary_minus_func_int8_t_s(p_24))) , (((g_297[3] = (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_935[5][2][7], 13)), ((p_24 >= (g_339 = (((((g_759[5][3] , ((safe_rshift_func_int8_t_s_u(l_882[4][6][0], 0)) && p_25)) ^ 0x0B2A8BBCL) > g_234) ^ g_277) | g_603[0][0]))) ^ (-4L))))) & p_25) , 65528UL))))) , p_25), p_25)))
    {
        short l_944 = (-1L);
        g_945 = (0x581CL != (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_756[4][3][6], (((+g_843[5]) || ((safe_sub_func_uint16_t_u_u((g_214 > (g_339 &= (((l_795 = ((1L == (l_882[4][6][0] = 1UL)) || ((l_944 < ((0xB0L || ((~(l_944 & l_795)) , 0UL)) < 0xD0DCCDD0L)) != l_944))) , 0xB9146BFCL) <= 0xB1AD59A7L))), 0xA2CFL)) , g_17)) < g_714[3][7]))), l_756[3][0][4])));
    }
    else
    {
        for (g_20 = 0; g_20 < 1; g_20 += 1)
        {
            g_835[g_20] = 18446744073709551615UL;
        }
        l_795 = g_297[3];
    }
    for (g_544 = 0; (g_544 < (-19)); g_544--)
    {
        int l_950 = 0L;
        int l_980 = (-1L);
        unsigned char l_1012[6][8][5] = {{{0x8EL,254UL,0xCBL,0xA3L,1UL},{255UL,0x7BL,0x7BL,255UL,247UL},{5UL,0xA3L,0UL,0x9EL,255UL},{247UL,0x07L,0x7FL,0x56L,1UL},{1UL,254UL,1UL,0x9EL,0xCBL},{0x07L,0xEFL,0x7FL,0xE4L,0x07L},{5UL,1UL,1UL,255UL,1UL},{1UL,1UL,0x7FL,0x7BL,247UL}},{{1UL,0xF7L,0UL,1UL,0xCBL},{0xE4L,0x7BL,9UL,1UL,0x07L},{1UL,0xF7L,255UL,0x9EL,0UL},{255UL,1UL,255UL,9UL,247UL},{1UL,1UL,248UL,1UL,1UL},{255UL,0xEFL,0x56L,0x07L,1UL},{1UL,0xC6L,0UL,255UL,0x41L},{0xE4L,255UL,255UL,0xEFL,1UL}},{{1UL,255UL,0xB6L,0xA3L,1UL},{1UL,255UL,9UL,247UL,247UL},{5UL,0xC6L,5UL,0xA3L,0UL},{0x07L,0xE4L,0x7FL,0xEFL,0x07L},{0UL,1UL,0xCBL,255UL,0xCBL},{1UL,0x56L,0x7FL,0x07L,247UL},{251UL,0xF7L,5UL,1UL,1UL},{0xE4L,0x07L,9UL,9UL,0x07L}},{{0xCBL,0xA3L,0xCBL,254UL,0x8EL},{1UL,0xEFL,9UL,1UL,247UL},{0UL,255UL,0x41L,255UL,0UL},{1UL,0x07L,0xEFL,0x7FL,0xE4L},{1UL,1UL,0x8EL,0x9EL,0UL},{0x07L,9UL,9UL,0x07L,0xE4L},{0x4CL,0x9EL,1UL,0xC6L,0UL},{0xE4L,1UL,0x56L,0x2AL,247UL}},{{0xB6L,1UL,0xB6L,0xC6L,0x8EL},{247UL,0x7BL,0x2AL,0x07L,247UL},{255UL,255UL,251UL,0x9EL,251UL},{0xE4L,0xE4L,0x2AL,0x7FL,255UL},{1UL,0xA3L,0xB6L,255UL,1UL},{0x07L,0x7FL,0x56L,1UL,247UL},{251UL,0xA3L,1UL,254UL,0x41L},{1UL,0xE4L,9UL,0x56L,247UL}},{{248UL,255UL,0x8EL,255UL,248UL},{1UL,0x7BL,0xEFL,247UL,0xE4L},{251UL,1UL,0x41L,0x9EL,5UL},{0x07L,0x07L,0x7BL,255UL,247UL},{0UL,0xA3L,248UL,0x9EL,0xB6L},{247UL,0x7BL,0x7FL,1UL,1UL},{0x4CL,254UL,0x4CL,0x9EL,1UL},{1UL,255UL,0x56L,255UL,1UL}}};
        unsigned char l_1051 = 1UL;
        int l_1061 = (-9L);
        int i, j, k;
        if (((safe_rshift_func_int16_t_s_s((l_950 , (safe_sub_func_uint16_t_u_u((((func_33(l_950, l_754, g_492, g_4) || (0x4DE2L > (l_953[0] = l_927[5][5]))) , p_26) & (-3L)), 0UL))), 8)) ^ 0UL))
        {
            unsigned char l_960 = 0x0AL;
            int l_961 = 0x2861F069L;
            int l_1076[4] = {0x255C2B91L,0x255C2B91L,0x255C2B91L,0x255C2B91L};
            int i;
            for (g_365 = 0; (g_365 == 20); ++g_365)
            {
                int l_997 = 0L;
                unsigned short l_1009 = 0x1B51L;
                int l_1026 = 0x5F54CD28L;
                g_339 = (0xFAL && 1UL);
                if (g_170)
                {
                    char l_965 = 0L;
                    int l_1008 = 0xCBD56531L;
                    if ((safe_mod_func_uint8_t_u_u((l_961 = (g_895 == (l_950 > (0xC849L <= func_126((safe_sub_func_uint8_t_u_u((g_136 || p_26), l_960)), p_25))))), l_927[0][3])))
                    {
                        unsigned l_962 = 0x7D96C4C1L;
                        unsigned char l_981 = 0x4AL;
                        l_981 &= func_5(l_961, ((((l_962 <= ((safe_lshift_func_int8_t_s_u((g_843[5] = (g_136 = (g_365 < func_126(((func_126(g_166[0], g_895) , (l_965 || (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_182 |= ((safe_mod_func_int8_t_s_s((~(((g_759[5][3] > (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(func_126((safe_lshift_func_uint8_t_u_s(((((((safe_mod_func_uint16_t_u_u((l_960 , 65535UL), g_10[0][2][2])) || 1UL) , l_962) <= l_754) && 1L) || l_950), 4)), l_962), g_330[0][0][0])) > p_24), p_24))) || l_960) || g_759[5][3])), p_25)) == g_13)), p_25)), l_950)))) >= 0xD69FL), p_24)))), 4)) && l_965)) , 0xEBL) ^ 1L) , p_26), l_980, l_965);
                    }
                    else
                    {
                        unsigned char l_985[2][3][4] = {{{0x91L,0x91L,0x91L,0x91L},{0x91L,0x91L,0x91L,0x91L},{0x91L,0x91L,0x91L,0x91L}},{{0x91L,0x91L,0x91L,0x91L},{0x91L,0x91L,0x91L,0x91L},{0x91L,0x91L,0x91L,0x91L}}};
                        int i, j, k;
                        l_882[4][6][0] ^= (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_25)), ((((l_985[0][1][2] | (l_997 = ((~(safe_lshift_func_int16_t_s_s(l_985[0][1][2], l_965))) & ((safe_add_func_int16_t_s_s((l_965 , (((safe_sub_func_uint16_t_u_u((g_277 , (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((l_961 = g_843[5]), 9UL)) >= l_965), l_965))), l_980)) , p_24) | l_996)), p_25)) != l_985[0][2][0])))) , p_26) , g_803) == l_985[0][1][2])));
                    }
                    if (g_603[0][1])
                    {
                        g_339 ^= (safe_rshift_func_uint8_t_u_u(g_160, (p_24 >= func_126(l_997, g_603[1][0]))));
                    }
                    else
                    {
                        g_339 = (safe_sub_func_uint8_t_u_u(p_25, (safe_sub_func_uint8_t_u_u((g_759[8][9] && (p_24 != p_24)), (p_25 < (l_1009 |= ((((l_1008 = (safe_mul_func_uint16_t_u_u(((((((6UL ^ ((p_25 > (0L || (safe_rshift_func_int16_t_s_u(((l_961 = g_920) != g_182), 9)))) & 1L)) > p_26) <= (-4L)) != l_965) != l_980) & l_935[5][2][7]), (-1L)))) && g_759[5][3]) && l_882[4][3][0]) , l_961)))))));
                    }
                    for (g_13 = 0; (g_13 <= 3); g_13 += 1)
                    {
                        int l_1019 = 0xE687474DL;
                        int i, j, k;
                        l_1026 = (safe_add_func_int8_t_s_s((((-1L) & (g_330[g_13][g_13][g_13] ^= l_1012[5][4][3])) , (safe_sub_func_uint32_t_u_u(g_181, g_297[2]))), (((((p_25 || func_120(l_980, g_234, (g_339 = func_66(((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((l_1019 && func_126((l_1019 = ((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u((~(safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_u((g_175 , g_307[0]), p_24))))), 3)) == l_965))) && l_1008) && g_166[6]) | p_24)), l_960)) | g_306), g_945)) >= g_843[2]), g_835[0])) , l_997), p_25, p_26, p_26, l_1009)))) != 253UL) || p_25) && p_25) != l_918)));
                        if (g_346)
                            continue;
                        g_339 ^= (safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(g_714[1][5], 6)) <= p_26), l_1019)) <= p_25), (safe_sub_func_uint32_t_u_u((((g_277 |= (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s(((g_603[1][0] = 1L) || 6UL), 3)) & g_330[5][3][2]) ^ 1UL) & (p_25 , 0x8DBBL)) != 0xBD37318DL) ^ l_953[0]), 5)) > 0UL), 0x4200L))) >= 0xC5D9L) > g_843[1]), 0L))));
                        l_882[4][6][0] = (safe_add_func_uint32_t_u_u((p_26 && (1UL < (g_160 > l_1009))), g_190));
                    }
                    g_339 &= (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_945, func_100((safe_mod_func_int16_t_s_s((l_795 &= func_126(l_882[1][0][0], (((safe_mul_func_uint8_t_u_u(((l_1026 = (((g_147[1] || (l_1051 >= (((safe_lshift_func_uint8_t_u_u(func_126((1L > ((safe_unary_minus_func_uint16_t_u((func_112((l_1061 = (safe_mul_func_uint8_t_u_u(l_1008, ((safe_add_func_int16_t_s_s((0x4864L != (safe_add_func_uint32_t_u_u((p_26 = 0x8D4A4ED6L), 0xDD9B19D5L))), l_965)) || l_965)))), g_920, l_1012[3][2][1], l_1012[3][3][2]) >= l_960))) == p_24)), l_950), l_1012[5][4][3])) > 0xC7DA2BECL) ^ p_25))) > 0x4CL) | 255UL)) != p_25), (-10L))) , 0UL) > g_166[0]))), g_306)), p_25))), g_544));
                }
                else
                {
                    unsigned short l_1077 = 0x6C95L;
                    int l_1078 = 0x6D9BF6D3L;
                    if ((safe_lshift_func_int16_t_s_s((!func_120(p_24, (safe_add_func_int32_t_s_s(l_961, (((((0x5F50E49EL <= (safe_sub_func_uint16_t_u_u(0x5027L, ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(func_120((g_196 = (((safe_rshift_func_uint16_t_u_s(((p_25 || (l_980 > 1UL)) || (safe_sub_func_int16_t_s_s((l_1078 = ((l_1076[2] = l_980) , l_1077)), l_1077))), g_304[4][6][0])) ^ p_25) < g_920)), g_330[5][3][2], g_160), 0xA7L)), p_26)) || g_306)))) ^ g_339) == 65535UL) > 0L) == p_25))), p_24)), p_24)))
                    {
                        g_339 = ((0xEA05L > l_935[5][2][7]) && ((safe_mod_func_int16_t_s_s(l_1061, (g_521 ^ l_1081))) >= p_26));
                        l_1078 &= l_756[1][1][4];
                        l_882[3][1][0] = (safe_sub_func_uint16_t_u_u((l_961 != g_147[4]), l_1009));
                        g_339 = g_803;
                    }
                    else
                    {
                        return l_960;
                    }
                    l_1076[3] = g_835[0];
                }
            }
        }
        else
        {
            return g_864;
        }
    }
    return g_330[5][3][2];
}







static unsigned func_33(unsigned short p_34, unsigned p_35, char p_36, const unsigned short p_37)
{
    int l_50 = 0xE6E1851AL;
    int l_51 = (-7L);
    unsigned l_53 = 0x898D4ED1L;
    int l_715[5][4][7] = {{{0xBC67DBCFL,0x9CF5F102L,0xBC67DBCFL,0x50C12553L,9L,0xA2BD3EDFL,2L},{0x293242C4L,1L,0x5BF28E3DL,1L,0x293242C4L,0x5BF28E3DL,0x58415E8BL},{0x10AF7FB5L,0xA2BD3EDFL,0x7879278DL,(-1L),0x7879278DL,0xA2BD3EDFL,0x10AF7FB5L},{5L,0x58415E8BL,7L,1L,0x58415E8BL,1L,7L}},{{0x10AF7FB5L,(-1L),8L,0x9CF5F102L,1L,0xA56569F3L,1L},{0x293242C4L,7L,7L,0x293242C4L,1L,5L,0x293242C4L},{0xBC67DBCFL,1L,0x76727ADDL,(-7L),0xBC67DBCFL,0xA56569F3L,0xAFF7B0EBL},{5L,1L,0x293242C4L,7L,7L,0x293242C4L,1L}},{{0xBC67DBCFL,4L,8L,1L,0x76727ADDL,(-7L),0xBC67DBCFL},{0x5BF28E3DL,1L,0x5BF28E3DL,(-5L),1L,(-1L),(-1L)},{0x7879278DL,1L,9L,1L,0x7879278DL,0x9CF5F102L,2L},{7L,(-1L),(-5L),7L,(-5L),(-1L),7L}},{{8L,0xA2BD3EDFL,0xAFF7B0EBL,(-7L),2L,(-7L),0xAFF7B0EBL},{7L,7L,0x293242C4L,1L,5L,0x293242C4L,5L},{0x7879278DL,4L,0xAFF7B0EBL,0x50C12553L,0x76727ADDL,0xA56569F3L,0x7879278DL},{0x5BF28E3DL,5L,(-5L),(-5L),5L,0x5BF28E3DL,(-1L)}},{{0xBC67DBCFL,0x50C12553L,9L,0xA2BD3EDFL,2L,0x9CF5F102L,0x7879278DL},{5L,(-1L),0x5BF28E3DL,5L,(-5L),(-5L),5L},{8L,0x50C12553L,8L,(-7L),0x7879278DL,4L,0xAFF7B0EBL},{1L,5L,0x293242C4L,5L,1L,0x293242C4L,5L}}};
    int l_716 = 0L;
    int l_717 = (-8L);
    unsigned short l_730 = 4UL;
    int i, j, k;
    l_717 = (safe_rshift_func_uint8_t_u_s((l_716 ^= (safe_rshift_func_uint16_t_u_s(g_17, ((g_10[1][5][0] = 0x1FL) <= (((l_715[4][0][3] = ((safe_lshift_func_int8_t_s_s(func_5((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u((((0x4F36L != (g_20 = ((l_51 = l_50) >= (g_52 |= p_36)))) , (l_53 <= ((safe_sub_func_uint8_t_u_u(func_56((safe_sub_func_uint16_t_u_u(((func_5((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(func_66((safe_mod_func_uint8_t_u_u((((func_5(g_17, p_36, l_50, l_51) , 0x773635D5L) || l_50) | p_35), 248UL)), l_53, l_53, g_4, l_50), g_17)) > g_17), 5)), l_53, p_36, p_36) , 0x1B86553EL) , 0x43C9L), l_53)), p_34, p_36), p_36)) >= g_544))) != l_50), g_714[0][6])) < l_50) == g_714[3][3]) , 0x22D5L), p_35)), l_53)), g_714[7][0], g_714[4][4], l_50), 2)) == g_714[4][5])) | l_53) > 0x6D99L))))), 2));
    l_717 ^= (l_51 = (p_37 == (safe_mod_func_uint16_t_u_u((l_716 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_715[4][0][3] = p_34) & (safe_lshift_func_int16_t_s_s(0x9F13L, (g_330[1][3][1] , ((safe_mod_func_uint16_t_u_u(65535UL, ((0x1B63CE6FL || ((safe_rshift_func_uint8_t_u_u(((0x11A4CD33L || l_50) , g_330[4][2][4]), p_35)) == l_51)) & g_603[1][0]))) <= 0L))))), g_297[3])), l_730))), 1UL))));
    for (g_288 = 26; (g_288 < 15); g_288--)
    {
        return p_35;
    }
    return l_716;
}







static unsigned char func_56(unsigned p_57, unsigned short p_58, char p_59)
{
    int l_86 = 0xC62902D2L;
    unsigned char l_93 = 0xF7L;
    int l_108 = 1L;
    int l_109 = 0x6A136180L;
    char l_119 = 0xC9L;
    unsigned l_178 = 18446744073709551609UL;
    int l_215[7][4][4] = {{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}},{{2L,0x08311E2FL,(-1L),0x08311E2FL},{2L,0x699BD09FL,0xBD938717L,0x3D5E54CFL},{2L,0xA08477F4L,(-1L),0xA08477F4L},{2L,0x3D5E54CFL,0xBD938717L,0x699BD09FL}}};
    int l_448[8];
    int l_512 = 0L;
    int l_551 = (-1L);
    int l_552 = 0x4D9F11B3L;
    unsigned char l_590 = 0x45L;
    int l_713 = 0xCB70FBEDL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_448[i] = 1L;
    if ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((p_59 ^= g_13), 5)), 0x9219EC18L)) ^ (safe_rshift_func_int16_t_s_s((-10L), (((((safe_mul_func_uint16_t_u_u((g_13 ^ (func_5((safe_sub_func_uint32_t_u_u(l_86, (l_109 = ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(l_93, l_86)) ^ (((!(safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_93, 14)) >= (safe_mul_func_int8_t_s_s(func_100(p_58, l_93), p_58))), g_13))) | p_57) ^ l_93)) & l_93) | g_13), l_93)), l_108)) >= g_4)))), p_57, l_86, g_20) <= l_86)), g_20)) > p_58) , g_20) & 0L) , (-1L))))), 11)))
    {
        char l_130 = 8L;
        int l_163 = 7L;
        l_163 |= (((safe_sub_func_int32_t_s_s(((func_112(p_59, (safe_add_func_int16_t_s_s(l_109, l_119)), g_13, func_120(p_59, p_58, ((safe_add_func_int16_t_s_s(func_126(g_52, g_4), l_130)) , g_52))) ^ l_109) , g_155), l_93)) >= p_59) & g_13);
        l_163 &= l_119;
        for (g_20 = 5; (g_20 <= 47); g_20 = safe_add_func_uint32_t_u_u(g_20, 2))
        {
            unsigned short l_167[2][8] = {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}};
            int i, j;
            g_166[0] = (-3L);
            g_170 = (g_147[4] && (((l_167[0][7] > (g_4 || (g_160 != (safe_mul_func_int16_t_s_s(func_66(l_167[1][0], p_58, g_147[4], p_59, func_100(g_149, p_59)), g_166[3]))))) == 0UL) == g_166[0]));
        }
    }
    else
    {
        short l_176 = 0x903EL;
        int l_177 = 0x26E06BE9L;
        unsigned l_213 = 0xA0A5ABD8L;
        int l_275 = 0x4A64B051L;
        short l_317 = (-1L);
        int l_333 = 0x828CB4A7L;
        char l_340[6];
        unsigned l_409[4][9] = {{0UL,1UL,0x3F3C6F0DL,1UL,0UL,0x8BC2A5C8L,0x8BC2A5C8L,0UL,1UL},{0xBF1F741FL,18446744073709551609UL,0xBF1F741FL,0x8BC2A5C8L,0x3F3C6F0DL,0x3F3C6F0DL,0x8BC2A5C8L,0xBF1F741FL,18446744073709551609UL},{18446744073709551609UL,0xBF1F741FL,0x8BC2A5C8L,0x3F3C6F0DL,0x3F3C6F0DL,0x8BC2A5C8L,0xBF1F741FL,18446744073709551609UL,0xBF1F741FL},{1UL,0UL,0x8BC2A5C8L,0x8BC2A5C8L,0UL,1UL,0x3F3C6F0DL,1UL,0UL}};
        int l_435 = (-6L);
        int l_439[6][9] = {{0x87CF84BCL,(-9L),0xDA1B2EFBL,(-9L),0x87CF84BCL,0x85524D17L,0x87CF84BCL,(-9L),0xDA1B2EFBL},{(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L},{0x87CF84BCL,(-9L),0xDA1B2EFBL,(-9L),0x87CF84BCL,0x85524D17L,0x87CF84BCL,(-9L),0xDA1B2EFBL},{(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L},{0x87CF84BCL,(-9L),0xDA1B2EFBL,(-9L),0x87CF84BCL,0x85524D17L,0x87CF84BCL,(-9L),0xDA1B2EFBL},{(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L,(-6L),(-6L),0xB8DCA527L}};
        char l_482[4][3] = {{0xAEL,0xAEL,(-8L)},{1L,1L,(-1L)},{0xAEL,0xAEL,(-8L)},{1L,1L,(-1L)}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_340[i] = 9L;
        g_175 &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_4, (l_86 = 0x88A45519L))), l_119));
        g_181 = ((l_176 = 8UL) == (((g_136 && func_100(g_52, func_5(l_177, (l_178 , g_166[0]), (((-1L) || g_166[1]) , (safe_sub_func_uint8_t_u_u(0xD0L, l_177))), g_166[0]))) ^ 0xD6L) < 0x33BDD32EL));
        if (l_176)
        {
            unsigned short l_188 = 0x23A6L;
            unsigned char l_189[10][8][3] = {{{246UL,8UL,0x72L},{0x5DL,0xF9L,252UL},{246UL,0x70L,254UL},{0xF9L,0x5DL,255UL},{0xA0L,0x70L,1UL},{1UL,0xF9L,0xECL},{0x92L,8UL,1UL},{0x78L,1UL,255UL}},{{0UL,0x28L,254UL},{0x78L,0x78L,252UL},{0x92L,255UL,0x72L},{1UL,0x78L,0UL},{0xA0L,0x28L,250UL},{0xF9L,1UL,0UL},{246UL,8UL,0x72L},{0x5DL,0xF9L,252UL}},{{246UL,0x70L,254UL},{0xF9L,0x5DL,255UL},{0xA0L,0x97L,255UL},{0UL,255UL,0xF9L},{0xD4L,254UL,255UL},{0xEBL,0UL,0x78L},{255UL,0x8AL,0x4BL},{0xEBL,0xEBL,3UL}},{{0xD4L,0x19L,246UL},{0UL,0xEBL,0xA2L},{249UL,0x8AL,0x92L},{255UL,0UL,0xA2L},{2UL,254UL,246UL},{0x27L,255UL,3UL},{2UL,0x97L,0x4BL},{255UL,0x27L,0x78L}},{{249UL,0x97L,255UL},{0UL,255UL,0xF9L},{0xD4L,254UL,255UL},{0xEBL,0UL,0x78L},{255UL,0x8AL,0x4BL},{0xEBL,0xEBL,3UL},{0xD4L,0x19L,246UL},{0UL,0xEBL,0xA2L}},{{249UL,0x8AL,0x92L},{255UL,0UL,0xA2L},{2UL,254UL,246UL},{0x27L,255UL,3UL},{2UL,0x97L,0x4BL},{255UL,0x27L,0x78L},{249UL,0x97L,255UL},{0UL,255UL,0xF9L}},{{0xD4L,254UL,255UL},{0xEBL,0UL,0x78L},{249UL,1UL,246UL},{255UL,255UL,0x78L},{255UL,254UL,0xC9L},{255UL,255UL,0x5DL},{0xD4L,1UL,0x4BL},{0x56L,255UL,0x5DL}},{{0x83L,0x8AL,0xC9L},{0UL,0x56L,0x78L},{0x83L,0UL,246UL},{0x56L,0UL,0x8CL},{0xD4L,0UL,0UL},{255UL,0x56L,3UL},{255UL,0x8AL,0UL},{255UL,255UL,0x8CL}},{{249UL,1UL,246UL},{255UL,255UL,0x78L},{255UL,254UL,0xC9L},{255UL,255UL,0x5DL},{0xD4L,1UL,0x4BL},{0x56L,255UL,0x5DL},{0x83L,0x8AL,0xC9L},{0UL,0x56L,0x78L}},{{0x83L,0UL,246UL},{0x56L,0UL,0x8CL},{0xD4L,0UL,0UL},{255UL,0x56L,3UL},{255UL,0x8AL,0UL},{255UL,255UL,0x8CL},{249UL,1UL,246UL},{255UL,255UL,0x78L}}};
            int l_194 = 0xC1F0966BL;
            int i, j, k;
            if (p_59)
            {
lbl_278:
                g_182 = 3L;
            }
            else
            {
                unsigned short l_185 = 5UL;
                int l_193[2];
                int l_212[1][10] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_193[i] = 0xD6EBF7B4L;
                if (((safe_sub_func_uint16_t_u_u(((0x60L ^ (~l_185)) , (((p_57 , (0xDDL != (safe_add_func_int32_t_s_s((l_188 = p_59), l_185)))) == l_189[0][6][1]) , (p_59 & (g_182 , l_188)))), 0x23A2L)) || l_185))
                {
                    unsigned l_192 = 0xB4585397L;
                    int l_195 = 1L;
                    g_190 = p_57;
                    g_197 &= (g_196 ^= (l_195 = (func_120((l_194 = (g_13 || ((safe_unary_minus_func_uint16_t_u((l_192 = func_126(g_136, g_181)))) > (p_57 , (l_193[0] &= 1UL))))), l_188, (l_189[7][2][1] | g_155)) | g_155)));
                    l_86 = g_147[3];
                }
                else
                {
                    int l_211[2][3][8] = {{{0xABDE9202L,(-1L),(-1L),0xABDE9202L,0L,0x24E14BB8L,0xABDE9202L,0x24E14BB8L},{0xABDE9202L,9L,(-1L),9L,0xABDE9202L,(-1L),0x98A1C93EL,0x98A1C93EL},{0x24E14BB8L,9L,0L,0L,9L,0x24E14BB8L,(-1L),9L}},{{0x98A1C93EL,(-1L),0L,0x98A1C93EL,0L,(-1L),0x98A1C93EL,0x24E14BB8L},{9L,0xABDE9202L,(-1L),0x98A1C93EL,0x98A1C93EL,(-1L),0xABDE9202L,9L},{0x24E14BB8L,0x98A1C93EL,(-1L),0L,0x98A1C93EL,0L,(-1L),0x98A1C93EL}}};
                    int i, j, k;
                    for (g_190 = 4; (g_190 >= 1); g_190 -= 1)
                    {
                        unsigned char l_204[2];
                        int l_207 = 0x5F7610E7L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_204[i] = 1UL;
                        g_208 = ((safe_sub_func_uint32_t_u_u(l_185, ((safe_lshift_func_int16_t_s_u((0x2DL && func_126(((((1UL && g_147[0]) ^ (l_194 = (safe_sub_func_uint16_t_u_u(func_5((l_204[0] = g_4), (p_57 == 0x155E1EFBL), (l_207 = (safe_add_func_uint16_t_u_u(5UL, 0xB8DBL))), g_13), p_59)))) & 0xE8902677L) , (-6L)), l_189[0][6][1])), g_147[g_190])) , g_182))) != 0xDDAEL);
                        l_194 = ((l_212[0][8] &= (g_149 , func_112(p_59, (p_58 ^ (((p_59 != l_193[0]) , ((((g_166[0] = (safe_mod_func_int32_t_s_s(l_211[0][1][4], (g_170 & l_204[0])))) , 0x73L) ^ 0xFFL) >= p_59)) > p_59)), p_57, p_58))) , 0x504EC7D9L);
                        g_214 ^= (((l_211[0][0][4] = l_213) > l_86) | (p_59 ^ (g_147[g_190] | 3UL)));
                        l_211[0][1][4] = l_215[3][3][2];
                    }
                    g_251[1] = ((p_59 ^ (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_136 = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_59, ((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_126(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_234, 5)), (safe_sub_func_uint8_t_u_u((l_86 | ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_160 | (safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((g_147[4] ^= (l_212[0][8] & ((+(((safe_mod_func_int32_t_s_s(p_58, g_170)) > p_58) != 0xD422F2D6L)) || 0x4871L))) >= g_160), l_176)) >= 0xBC4DL), 1UL)) && g_214), 0x82L))), p_59)), 7L)), p_59)) | 1UL)), p_57)))) , 0x237C08B2L), p_57), l_194)), l_212[0][2])), p_59)) != p_58))), 1L))) && g_175), (-2L))), 0x97L))) && g_13);
                    g_252 = g_147[4];
                }
                for (g_170 = (-11); (g_170 < 16); g_170 = safe_add_func_uint16_t_u_u(g_170, 5))
                {
                    unsigned l_255 = 0x579BDA63L;
                    unsigned l_258 = 0xF5BE081AL;
                    l_255 = p_59;
                    if ((safe_add_func_int16_t_s_s((l_258 != (p_59 , p_57)), ((g_136 ^ ((safe_sub_func_uint8_t_u_u(l_193[0], (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((g_181 > (safe_mul_func_uint8_t_u_u(func_126(l_193[0], g_175), p_59))), 11)) > p_58) | l_193[0]), l_176)))) , l_193[0])) , l_258))))
                    {
                        short l_276 = 1L;
                        int l_287[4][9] = {{0xF38967EEL,0x53F64DE0L,0x53F64DE0L,0xF38967EEL,0x3A619339L,1L,0x3A619339L,0xF38967EEL,0x53F64DE0L},{(-7L),(-7L),0x0C7D32C0L,(-2L),0L,(-2L),0x0C7D32C0L,(-7L),(-7L)},{0x53F64DE0L,0xF38967EEL,0x3A619339L,1L,0x3A619339L,0xF38967EEL,0x53F64DE0L,0x53F64DE0L,0xF38967EEL},{(-2L),(-5L),0x0C7D32C0L,(-5L),(-2L),(-1L),(-1L),(-2L),(-5L)}};
                        int i, j;
                        l_109 = (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(func_66(l_213, g_175, p_57, (((0xB5517A02L == 0x8524F432L) && (safe_mod_func_uint8_t_u_u(((func_100((func_120(p_59, (safe_lshift_func_int16_t_s_s(func_5(l_258, (((p_58 ^ (p_59 ^ p_59)) , g_251[1]) > 0xCB84L), l_275, l_276), 3)), l_193[0]) ^ g_13), g_136) , 0xB1B8L) , 249UL), l_193[0]))) >= 0x25EAL), p_58), 1)), g_277)) <= l_276) <= g_252);
                        if (l_178)
                            goto lbl_278;
                        g_279 = (-1L);
                        g_288 = (safe_sub_func_uint32_t_u_u(0x5558DF00L, ((((l_189[5][6][1] >= 0xFAB1L) , (safe_lshift_func_int16_t_s_s((g_277 = (((!(((safe_add_func_uint16_t_u_u((p_59 & (safe_unary_minus_func_int8_t_s((p_57 == (0x8525L && (((l_287[3][7] = l_212[0][0]) , l_108) >= g_147[4])))))), g_147[4])) , g_277) >= g_208)) != 8UL) , g_251[2])), 10))) >= p_58) >= 255UL)));
                    }
                    else
                    {
                        return l_258;
                    }
                }
            }
            for (l_119 = 0; (l_119 <= 2); l_119 += 1)
            {
                short l_305 = 0x112EL;
                if (p_59)
                    break;
                g_306 |= ((((8UL >= ((safe_mul_func_uint8_t_u_u(((g_196 = (l_86 |= (p_59 | func_100((safe_add_func_int8_t_s_s(g_208, g_208)), ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_297[3] = (l_275 = l_188)), (safe_mod_func_uint32_t_u_u((g_251[1] , ((func_66((safe_lshift_func_uint16_t_u_u(func_5((((safe_lshift_func_uint8_t_u_s((g_304[2][0][1] = 0x3FL), 2)) || (g_166[2] ^= g_196)) && (l_189[0][6][1] , 255UL)), p_57, g_20, g_149), p_57)), g_20, g_251[1], l_213, p_57) >= 65532UL) < p_59)), g_170)))), p_59)) == p_57))))) | g_279), p_58)) ^ l_188)) > g_175) , l_305) > g_214);
                for (g_252 = 3; (g_252 >= 0); g_252 -= 1)
                {
                    return p_59;
                }
                for (g_190 = 2; (g_190 >= 0); g_190 -= 1)
                {
                    for (l_194 = 5; (l_194 >= 0); l_194 -= 1)
                    {
                        int i, j, k;
                        g_307[0] = func_100(l_189[(l_119 + 1)][(g_190 + 5)][l_119], g_297[(l_119 + 2)]);
                        return g_251[1];
                    }
                    for (g_181 = 0; (g_181 <= 3); g_181 += 1)
                    {
                        l_275 = (-1L);
                    }
                }
            }
            if ((((safe_mod_func_int32_t_s_s(l_189[0][6][1], func_100((safe_unary_minus_func_int16_t_s((g_307[0] = (-4L)))), (p_57 > (safe_lshift_func_uint8_t_u_u((((!((safe_mod_func_uint16_t_u_u(g_136, (g_149 = (safe_lshift_func_uint16_t_u_s(g_297[1], ((p_58 = (func_126(((l_109 = l_317) , (((safe_add_func_int8_t_s_s(p_59, p_57)) != func_100(func_100((l_109 = ((safe_rshift_func_uint16_t_u_s(l_109, 8)) >= p_58)), p_58), g_304[2][0][1])) & 4L)), p_57) != g_181)) , p_58)))))) , 9L)) || 7UL) , 0UL), 2)))))) <= l_189[0][6][1]) >= 0L))
            {
                unsigned char l_329 = 1UL;
                char l_335 = 0x78L;
                int l_347 = 7L;
                unsigned l_378[6][8][5] = {{{0x74E9201BL,2UL,0x06F3F816L,0x06F3F816L,2UL},{0UL,0x4E1D7CEBL,0xB132F7EAL,18446744073709551614UL,0x06F3F816L},{0x578F8003L,0x06F3F816L,0x478E54A3L,0xA81A4737L,0x4E1D7CEBL},{0UL,2UL,0xE880600AL,0x4E1D7CEBL,7UL},{0x578F8003L,0UL,7UL,0UL,0x578F8003L},{0x2E5CBDF1L,18446744073709551615UL,7UL,0xE880600AL,0xD1E40F14L},{0xA81A4737L,0x74E9201BL,0xE880600AL,0xB132F7EAL,18446744073709551615UL},{18446744073709551615UL,0x578F8003L,0x478E54A3L,18446744073709551615UL,0xD1E40F14L}},{{7UL,0xB132F7EAL,0xB132F7EAL,7UL,0x578F8003L},{0xD1E40F14L,0xB132F7EAL,18446744073709551614UL,0x06F3F816L,7UL},{18446744073709551615UL,0x578F8003L,0xD1E40F14L,0x5567A751L,0x4E1D7CEBL},{18446744073709551614UL,0x74E9201BL,2UL,0x06F3F816L,0x06F3F816L},{0x74E9201BL,18446744073709551615UL,0x74E9201BL,7UL,0x5C9E84C1L},{0x74E9201BL,0UL,0x5567A751L,18446744073709551615UL,0xE880600AL},{18446744073709551614UL,2UL,0x578F8003L,0xB132F7EAL,0x2E5CBDF1L},{18446744073709551615UL,0x06F3F816L,0x5567A751L,0xE880600AL,0x5567A751L}},{{0xD1E40F14L,0xD1E40F14L,0x74E9201BL,0UL,0x5567A751L},{7UL,0x5C9E84C1L,2UL,0x4E1D7CEBL,0x2E5CBDF1L},{18446744073709551615UL,0x4E1D7CEBL,0xD1E40F14L,0xA81A4737L,0xE880600AL},{0xA81A4737L,0x5C9E84C1L,18446744073709551614UL,18446744073709551614UL,0x5C9E84C1L},{0x2E5CBDF1L,0xD1E40F14L,0x4E1D7CEBL,0x5567A751L,0xD1E40F14L},{18446744073709551606UL,0xD1E40F14L,18446744073709551614UL,0x2E5CBDF1L,0xE880600AL},{0x5C9E84C1L,0x74E9201BL,0x06F3F816L,0xE880600AL,0x578F8003L},{18446744073709551606UL,0x5C9E84C1L,0x578F8003L,0x5C9E84C1L,18446744073709551606UL}},{{0xB132F7EAL,7UL,0x578F8003L,0x06F3F816L,0x478E54A3L},{0x2E5CBDF1L,0UL,0x06F3F816L,0x4E1D7CEBL,18446744073709551615UL},{18446744073709551615UL,18446744073709551606UL,18446744073709551614UL,7UL,0x478E54A3L},{0x578F8003L,0x4E1D7CEBL,0x4E1D7CEBL,0x578F8003L,18446744073709551606UL},{0x478E54A3L,0x4E1D7CEBL,0x5567A751L,0xD1E40F14L,0x578F8003L},{7UL,18446744073709551606UL,0x478E54A3L,18446744073709551615UL,0xE880600AL},{0x5567A751L,0UL,0x74E9201BL,0xD1E40F14L,0xD1E40F14L},{0UL,7UL,0UL,0x578F8003L,0xA81A4737L}},{{0UL,0x5C9E84C1L,18446744073709551615UL,7UL,0x06F3F816L},{0x5567A751L,0x74E9201BL,18446744073709551606UL,0x4E1D7CEBL,0xB132F7EAL},{7UL,0xD1E40F14L,18446744073709551615UL,0x06F3F816L,18446744073709551615UL},{0x478E54A3L,0x478E54A3L,0UL,0x5C9E84C1L,18446744073709551615UL},{0x578F8003L,0xA81A4737L,0x74E9201BL,0xE880600AL,0xB132F7EAL},{18446744073709551615UL,0xE880600AL,0x478E54A3L,0x2E5CBDF1L,0x06F3F816L},{0x2E5CBDF1L,0xA81A4737L,0x5567A751L,0x5567A751L,0xA81A4737L},{0xB132F7EAL,0x478E54A3L,0x4E1D7CEBL,7UL,0x5567A751L}},{{0UL,0x5567A751L,18446744073709551615UL,0xE880600AL,0x478E54A3L},{0xB132F7EAL,0xA81A4737L,18446744073709551614UL,0x478E54A3L,0x74E9201BL},{0UL,0xB132F7EAL,0x74E9201BL,0xB132F7EAL,0UL},{0x06F3F816L,2UL,0x74E9201BL,18446744073709551614UL,18446744073709551615UL},{0xE880600AL,0x2E5CBDF1L,18446744073709551614UL,0xD1E40F14L,18446744073709551606UL},{18446744073709551606UL,0UL,18446744073709551615UL,2UL,18446744073709551615UL},{0x74E9201BL,0xD1E40F14L,0xD1E40F14L,0x74E9201BL,0UL},{18446744073709551615UL,0xD1E40F14L,7UL,0x5567A751L,0x74E9201BL}}};
                int i, j, k;
                if (p_57)
                {
                    unsigned l_322 = 18446744073709551615UL;
                    short l_323 = 0x7246L;
                    l_322 = 0xC4721F4FL;
                    l_323 |= p_59;
                    for (p_58 = 0; (p_58 <= 10); ++p_58)
                    {
                        l_109 = (g_330[5][3][2] ^= (((g_307[0] , func_126(g_304[2][0][1], l_188)) ^ func_100(func_5((l_177 = (-1L)), (l_329 &= (((safe_unary_minus_func_uint32_t_u(((((0L | p_58) < l_188) ^ (safe_mul_func_int16_t_s_s((g_136 , p_59), g_208))) <= p_59))) < 0xDF4FL) ^ (-1L))), p_59, l_86), p_59)) & (-1L)));
                    }
                    return l_329;
                }
                else
                {
                    int l_334 = 0x06C8FE72L;
                    char l_336[8][8] = {{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L},{0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L,0x03L,0xB4L}};
                    int i, j;
                    if (func_112(((func_5(g_251[1], (l_188 , (safe_lshift_func_uint8_t_u_s(l_333, 3))), l_329, g_251[2]) , func_66(g_181, l_334, p_57, g_288, p_59)) & l_119), g_147[1], l_335, p_58))
                    {
                        int l_338 = 8L;
                        l_194 = (((0x98L && ((l_336[4][7] , func_100(g_197, (safe_unary_minus_func_int32_t_s((g_166[3] == g_196))))) > (l_338 ^ ((p_59 <= g_166[3]) || g_182)))) , p_58) != g_166[0]);
                        g_339 = p_58;
                    }
                    else
                    {
                        unsigned short l_345 = 1UL;
                        l_194 ^= 0L;
                        l_109 = ((((g_234 | (l_340[2] & l_178)) != (g_307[0] = (0x75F3L > l_336[4][7]))) <= (g_166[2] & (((((~(safe_add_func_int32_t_s_s(g_190, (g_214 != ((((safe_mul_func_uint8_t_u_u(0x07L, p_58)) , 0x033E01CBL) , 0UL) | p_57))))) , l_345) | g_4) > g_346) , g_170))) , l_334);
                        l_347 ^= ((+g_190) >= (g_339 = g_234));
                        return g_288;
                    }
                    for (l_178 = (-20); (l_178 <= 59); l_178++)
                    {
                        char l_352 = 0x03L;
                        if (g_166[4])
                            break;
                        g_365 = (safe_sub_func_uint16_t_u_u(l_352, (safe_lshift_func_int16_t_s_u(g_346, (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((g_339 = (safe_sub_func_int32_t_s_s(0x5A18F370L, func_120(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((0UL > g_20) , (func_112(func_120(((p_58 >= g_175) ^ (g_170 < 0x010AL)), l_194, p_59), l_334, l_334, l_335) , g_175)) > 0xCD26L), l_352)) | p_58), g_170)) && l_189[0][6][1]), l_119, p_58)))), g_252)) | 0x80L), 0x7233L))))));
                        g_339 = (l_189[8][3][2] < ((1UL != (safe_lshift_func_int16_t_s_s((p_58 , (func_100(p_58, (l_86 = (l_347 = (p_59 >= ((safe_add_func_int8_t_s_s(((g_181 ^ (l_335 || l_178)) == p_58), (-1L))) , g_251[1]))))) >= g_330[5][3][2])), 11))) != l_188));
                    }
                }
                g_339 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_304[2][0][1], 4)), ((((func_66((safe_lshift_func_uint8_t_u_s((func_5(g_346, l_335, l_378[5][3][1], (p_58 = (3L & (((safe_sub_func_int16_t_s_s((l_378[3][3][0] || func_112(p_57, l_188, func_120(p_57, p_59, g_307[0]), l_189[6][2][0])), g_307[0])) <= l_109) > p_59)))) < p_59), l_333)), l_189[0][6][1], p_59, l_109, l_108) ^ 4294967290UL) ^ l_275) < p_59) <= 0xE6C0F035L)));
            }
            else
            {
                unsigned l_383 = 0x2D6AC200L;
                int l_387 = 0x3EE42AA8L;
                l_109 = ((safe_mod_func_int32_t_s_s((g_251[1] , 0x1E52DDF6L), ((g_208 , (func_100((g_175 = g_166[0]), (l_387 ^= ((g_330[5][3][2] = ((p_58 = (l_383 , (safe_unary_minus_func_uint16_t_u(func_112((safe_add_func_int32_t_s_s(g_279, g_307[0])), g_304[2][0][1], g_288, g_17))))) && 0x1B43L)) >= g_190))) || p_58)) & l_188))) >= g_166[0]);
                for (g_170 = 6; (g_170 < 48); g_170 = safe_add_func_uint8_t_u_u(g_170, 5))
                {
                    unsigned l_390 = 1UL;
                    l_390 ^= 0x049FB529L;
                    g_339 = l_194;
                }
            }
        }
        else
        {
            unsigned char l_395[3];
            short l_407 = (-1L);
            int l_414 = 1L;
            int l_415 = 0xF4395179L;
            unsigned short l_427 = 0x0E56L;
            short l_487[5];
            char l_497 = 2L;
            int i;
            for (i = 0; i < 3; i++)
                l_395[i] = 2UL;
            for (i = 0; i < 5; i++)
                l_487[i] = (-3L);
            if (l_177)
            {
                const int l_406[10][6] = {{0x681FD754L,0x72C66E97L,0x72C66E97L,0x681FD754L,(-1L),0x681FD754L},{0x681FD754L,(-1L),0x681FD754L,0x72C66E97L,0x72C66E97L,0x681FD754L},{6L,6L,0x72C66E97L,0x5F723D67L,0x72C66E97L,6L},{0x72C66E97L,(-1L),0x5F723D67L,0x5F723D67L,(-1L),0x72C66E97L},{6L,0x72C66E97L,0x5F723D67L,0x72C66E97L,6L,6L},{0x681FD754L,0x72C66E97L,0x72C66E97L,0x681FD754L,(-1L),0x681FD754L},{0x681FD754L,(-1L),0x681FD754L,0x72C66E97L,0x72C66E97L,0x681FD754L},{6L,6L,0x72C66E97L,0x5F723D67L,0x72C66E97L,6L},{0x72C66E97L,(-1L),0x5F723D67L,0x5F723D67L,(-1L),0x72C66E97L},{6L,0x72C66E97L,0x5F723D67L,0x72C66E97L,6L,6L}};
                int l_408 = 0xDC849F49L;
                int i, j;
                l_408 = (l_275 = func_120((p_57 , 0x4B5FL), p_58, ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_120(l_395[2], (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((l_86 = ((p_57 > ((p_57 >= ((safe_rshift_func_uint16_t_u_s((func_126(g_155, ((safe_rshift_func_int8_t_s_u((l_406[4][3] > ((((l_109 &= p_57) && p_57) < p_59) >= 3UL)), l_406[4][2])) || 0xC0L)) ^ (-4L)), 12)) == (-1L))) || p_59)) , l_407)) & 0x2E40DB03L), g_197)), l_93)), g_346), 1L)), p_59)) < p_57)));
                g_339 = 0xB15B3416L;
                if ((l_415 ^= (p_57 || ((l_409[0][2] || (((safe_sub_func_uint32_t_u_u(0xDD11894EL, g_166[2])) , func_120(l_409[0][2], (safe_add_func_int8_t_s_s((l_406[4][3] || 255UL), (p_58 > 6UL))), l_414)) <= 0xEAL)) || 253UL))))
                {
                    unsigned short l_424 = 0xE5B1L;
                    for (g_136 = 0; (g_136 <= (-6)); --g_136)
                    {
                        l_414 = ((safe_rshift_func_uint8_t_u_u(g_197, 2)) < g_4);
                    }
                    g_339 = ((((safe_sub_func_int16_t_s_s(g_52, func_126(l_408, g_288))) , 0x015F3E84L) < ((l_333 = p_57) < (+((((g_155 != (safe_rshift_func_int8_t_s_s(l_414, 7))) & ((l_407 , p_59) < p_57)) <= l_424) <= 5UL)))) , l_178);
                }
                else
                {
                    int l_432 = (-9L);
                    g_339 = (g_175 || func_5(((l_177 , l_108) ^ (l_275 = (0xB0CDF5A1L != func_100((g_13 = ((g_251[1] , (safe_mul_func_int16_t_s_s((+l_427), (safe_rshift_func_uint16_t_u_s(g_365, (p_59 ^ (((safe_sub_func_int16_t_s_s(p_57, g_136)) ^ l_432) , l_215[5][2][3]))))))) > 4294967295UL)), p_57)))), l_432, p_59, g_251[0]));
                }
                l_333 |= (((g_279 = (g_208 , g_330[5][3][2])) >= ((((l_275 == (safe_rshift_func_uint8_t_u_s(l_435, func_120(g_234, g_251[0], l_176)))) && (safe_rshift_func_uint8_t_u_s((g_438 = g_170), 5))) , (-1L)) || p_57)) | l_439[4][0]);
            }
            else
            {
                short l_485 = 0xDFE9L;
                char l_516 = 0L;
                l_333 ^= g_214;
                if ((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((l_86 || (l_109 = p_58)) , g_166[0]) , g_166[5]), (l_448[6] |= (l_333 = (safe_mul_func_int16_t_s_s(0x46ACL, 0x2A45L)))))), func_100((safe_mod_func_int16_t_s_s(func_126((safe_mod_func_uint32_t_u_u(l_427, l_215[4][0][3])), (g_304[2][0][1] , l_317)), l_395[1])), l_427))), g_13)))
                {
                    unsigned l_457 = 18446744073709551613UL;
                    unsigned short l_483 = 0x7320L;
                    int l_484 = 0L;
                    int l_486 = 0x47D737A0L;
                    g_339 = (safe_mul_func_uint16_t_u_u((func_112(((safe_rshift_func_uint16_t_u_u((l_457 < ((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((l_486 ^= ((func_100((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_57 , func_112((l_275 = func_112(func_5(func_126(((g_307[0] && ((safe_add_func_uint8_t_u_u((l_484 = (func_100(g_182, (safe_mul_func_int8_t_s_s(((0UL || 0x5AL) > (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((-8L), 4)) == ((safe_mod_func_int32_t_s_s(func_5(((+(+248UL)) , 0L), l_482[2][2], l_395[2], l_415), l_483)) < l_457)), g_438))), l_86))) & 2L)), 7L)) == p_59)) , 0x5B0F6124L), g_307[0]), p_59, g_166[4], l_485), g_147[4], g_166[0], g_251[2])), g_307[0], g_288, l_483)), p_57)), l_485)) , 1L) != l_414), l_177) | l_340[2]) , p_58)), g_234)) || 0xD213L), p_58)), 0UL)), g_166[0])), 0x72FD7F12L)) <= 0x87B0L) < 1L) > 0x4AL)), 7)) < 1L), g_170, g_175, l_109) ^ (-1L)), g_277));
                    if (l_439[4][0])
                    {
                        l_109 = func_126(((l_487[3] > (safe_mod_func_int16_t_s_s((((func_100(((l_485 , (safe_rshift_func_uint16_t_u_s(g_492, 12))) <= l_448[6]), (((safe_rshift_func_uint16_t_u_s(g_251[1], 10)) ^ (l_177 &= (safe_mul_func_int16_t_s_s(0x983EL, (g_196 = ((func_126(p_58, (l_486 = 4294967292UL)) ^ 0xCB306A14L) < g_13)))))) , 0x02064611L)) , g_288) , 0x48E87C62L) , p_59), l_497))) <= l_407), g_277);
                        l_486 = g_307[0];
                        return p_59;
                    }
                    else
                    {
                        int l_513 = 0x16A38271L;
                        int l_522 = 0xB8F4BFB0L;
                        l_513 &= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_333 ^= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_166[0], (~(safe_lshift_func_uint8_t_u_s(g_4, p_57))))), (safe_mul_func_int8_t_s_s(((+((0x65L ^ ((p_58 | g_307[0]) >= ((((p_59 | 0x280FL) , l_395[2]) != l_512) <= g_190))) , 0xFFL)) < 0UL), 246UL)))), p_57))), g_234)), 0)) < p_59);
                        l_435 = (safe_sub_func_int32_t_s_s(p_57, func_112(l_516, ((+0x7EL) || (l_86 = ((safe_mul_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((l_485 && (l_414 = (((~p_59) && (!p_59)) , g_521))), func_66((l_513 = 0xF4BBL), (func_126(g_20, l_522) , 0xC7L), g_330[5][3][2], l_522, l_522))) , 0x0CL) && 252UL) != 248UL), l_483)) ^ 0L))), l_177, l_522)));
                        l_486 |= l_340[2];
                        l_522 = ((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_58, (safe_mod_func_int8_t_s_s((((l_448[6] = (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((g_196 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(g_306, func_66(p_59, (g_330[5][3][2] = (((0L && (((g_307[0] = (l_415 &= (safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s(((p_57 == (g_13 & func_5(g_304[2][0][1], p_59, l_409[0][5], g_306))) , g_147[4]), 1)) >= g_544) == g_330[7][3][4]), p_57)))) & 0x10F4L) != p_59)) ^ g_166[0]) > p_59)), p_57, g_166[0], p_59))), 3))))) || 0x93L), l_512)), l_108))) , p_58) , 0x03L), g_306)))), l_317)) || 0xD8B22D23L), l_395[2])) & g_279);
                    }
                }
                else
                {
                    g_339 = ((((l_435 < g_306) || ((((l_485 || g_181) ^ 0x700D1B67L) && (((safe_add_func_uint16_t_u_u(((p_59 , ((l_551 = ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_304[2][0][1] <= (((1L == (p_58 > 0x6E6FL)) <= l_213) != g_521)), p_58)), 4)) >= p_59)) == p_57)) != (-4L)), l_552)) , 2L) <= g_307[0])) < g_234)) | l_215[3][3][2]) || p_58);
                    l_86 ^= 0xFA40E25AL;
                }
                for (l_516 = 0; (l_516 <= 1); l_516 += 1)
                {
                    char l_557 = (-1L);
                    int i;
                    l_557 = func_120(g_166[(l_516 + 1)], p_57, (func_120((g_521 && ((safe_add_func_uint32_t_u_u(4294967295UL, (g_155 == (!((p_58 & (((safe_sub_func_int32_t_s_s(g_166[(l_516 + 1)], (l_415 = 9L))) > (g_297[3] || 0x16L)) >= 0xD616L)) & l_485))))) | 1L)), g_492, g_330[5][3][2]) , 0x5689AB53L));
                    if (g_166[(l_516 + 1)])
                        break;
                    return g_149;
                }
            }
            for (g_136 = 0; (g_136 > 26); g_136 = safe_add_func_uint32_t_u_u(g_136, 8))
            {
                int l_570 = 0L;
                for (g_365 = 0; (g_365 >= 21); ++g_365)
                {
                    g_339 ^= 1L;
                    for (g_279 = 0; (g_279 > 12); g_279 = safe_add_func_uint32_t_u_u(g_279, 7))
                    {
                        int l_564 = 0x88CEA49BL;
                        l_414 = (-1L);
                        l_564 = g_288;
                        g_339 |= l_427;
                        return p_59;
                    }
                }
                if (l_427)
                    break;
                for (g_306 = (-2); (g_306 < 19); g_306++)
                {
                    char l_569 = 0x7FL;
                    for (g_181 = 15; (g_181 <= 50); g_181 = safe_add_func_uint32_t_u_u(g_181, 1))
                    {
                        return l_569;
                    }
                    l_415 |= g_521;
                    l_570 &= l_435;
                    return l_570;
                }
            }
        }
        g_339 ^= (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_575 = l_178), ((safe_sub_func_int32_t_s_s(g_13, (((func_112(((((((((((4L != (func_66((l_177 = (-1L)), g_492, g_175, ((l_86 = 0x8C24A603L) , ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((((!l_512) , l_435) , 7UL) , 7L), g_13)) <= 0xCA1DE5EFL), 3L)), 2)) , l_317)), g_136) | l_448[6])) != 0x9AECL) | 0xC5CAL) <= g_251[2]) != (-1L)) == 0x063EF626L) != g_330[5][3][2]) <= 0L) && l_109) , g_438), l_439[0][8], g_307[0], p_59) ^ 0x1D190E4CL) || 4294967291UL) != 0xAB334F2BL))) & l_409[0][2]))), 0x3A84520FL));
    }
    for (g_279 = 0; (g_279 <= 4); g_279 += 1)
    {
        int l_629 = 0x7AEEEAB0L;
        const int l_632 = 0L;
        short l_633[5][4] = {{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L}};
        unsigned short l_639[5] = {0xEAD5L,0xEAD5L,0xEAD5L,0xEAD5L,0xEAD5L};
        int l_648 = 0xD22636A9L;
        unsigned l_689 = 0x176E13BBL;
        int i, j;
        for (g_190 = 1; (g_190 <= 6); g_190 += 1)
        {
            int i;
            if (g_166[g_279])
                break;
        }
        g_339 = g_166[0];
        g_339 = func_66((g_304[0][2][0] && (safe_rshift_func_uint16_t_u_s(65535UL, 13))), l_108, ((safe_mod_func_int16_t_s_s((g_307[0] = (g_196 = g_166[2])), (g_147[g_279] ^= l_93))) | ((p_58 , (((((g_197 , (safe_sub_func_int8_t_s_s((l_552 || (l_590 = (func_126(func_5((p_59 > 0x6822AFA9L), l_93, p_58, g_4), p_59) | g_339))), l_448[7]))) < 0xF474L) , l_551) > l_215[3][3][2]) ^ 0x86A83F19L)) , p_59)), p_58, g_297[3]);
        for (g_521 = 0; (g_521 <= 6); g_521 += 1)
        {
            int l_591 = 0x90A21E2AL;
            int l_697[1];
            int i;
            for (i = 0; i < 1; i++)
                l_697[i] = 0xA5A3E357L;
            if ((!l_591))
            {
                int l_602 = 7L;
                g_603[1][0] |= (g_339 = (safe_mod_func_int32_t_s_s(0L, (safe_sub_func_uint32_t_u_u(func_120(g_288, g_197, (p_58 >= g_136)), ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(5L, 9)), 13)) ^ (g_214 , (((l_602 || l_86) == p_59) , l_591))), 0L)) , 0x94AD6714L))))));
            }
            else
            {
                const int l_604 = 0x8BAC01DCL;
                int l_607 = 0x19B48E57L;
                char l_690[1][7] = {{0x33L,0x33L,(-1L),0x33L,0x33L,(-1L),0x33L}};
                unsigned l_704 = 0xCC7D0B3BL;
                int i, j;
                if (l_604)
                {
                    unsigned l_620[2][6] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                    int l_651 = 0L;
                    int i, j;
                    l_607 = (safe_lshift_func_int8_t_s_u(0x6DL, 3));
                    g_339 = (safe_add_func_uint16_t_u_u(65535UL, ((0xB42EL && g_603[1][0]) , g_13)));
                    for (l_591 = 6; (l_591 >= 2); l_591 -= 1)
                    {
                        if (g_147[0])
                            break;
                    }
                    if ((l_591 |= (+g_575)))
                    {
                        g_339 = ((safe_mul_func_uint16_t_u_u(p_57, (g_147[g_279] & (3L < (~(g_147[g_279] != (safe_rshift_func_int16_t_s_u(g_147[2], (p_58 = (safe_rshift_func_int16_t_s_u(1L, ((g_330[6][2][0] = (((safe_rshift_func_int8_t_s_s(((p_59 , (safe_rshift_func_uint8_t_u_s(l_620[0][5], 3))) >= ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_126(g_307[0], p_57), 0xDFF8L)), p_59)) , l_607)), g_252)) , 3UL) <= 1UL)) > 0x64L)))))))))))) > 0x94606E7BL);
                    }
                    else
                    {
                        char l_636 = 0x97L;
                        l_512 = ((l_591 &= g_190) , (((l_629 &= (g_306 == (safe_sub_func_int16_t_s_s((l_448[6] = p_59), (safe_rshift_func_int8_t_s_u(0L, 2)))))) , func_120((safe_mod_func_int8_t_s_s(func_100(func_66(l_591, (l_632 & (g_339 = func_120((!((l_633[1][1] |= l_632) ^ (((safe_lshift_func_uint16_t_u_s((((func_120(p_57, g_297[3], g_175) , p_57) || g_346) <= g_175), 12)) , 0xE42AC70EL) || g_297[5]))), p_58, l_215[3][3][2]))), g_149, l_448[2], l_636), l_632), g_307[0])), l_591, g_20)) , p_58));
                        l_651 = ((((p_57 <= (0xF15AL || (g_149 = (g_603[0][1] = ((safe_sub_func_int8_t_s_s(((((l_629 = l_639[3]) ^ (g_306 ^ ((safe_lshift_func_int16_t_s_u(0xD1B4L, l_109)) , (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((l_648 &= g_147[4]) , ((safe_lshift_func_uint8_t_u_s(0xF7L, 1)) ^ ((((g_147[0] & l_604) != g_279) , 0L) || p_58))), g_214)), 4UL)) > 0L), g_330[5][3][2]))))) <= 0xEE54CC02L) ^ 6L), 1L)) > 1L))))) | l_607) >= p_58) == g_214);
                        l_448[7] = g_252;
                        l_629 = ((0x4645L | ((p_57 > ((safe_add_func_uint16_t_u_u(g_149, g_170)) <= (safe_rshift_func_uint16_t_u_u((p_58 = l_108), func_5((p_59 <= ((safe_mod_func_uint16_t_u_u(((((((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(p_57, (((safe_lshift_func_uint16_t_u_u(g_297[6], func_66((safe_mul_func_uint8_t_u_u(p_57, g_288)), l_620[0][5], l_639[2], p_59, l_448[6]))) >= l_448[6]) , l_632))) < 0x61FEL) | l_591), g_234)) & 0x778AL) , 0x42D8F9A9L) , 0xF0L) && g_234) != p_57), l_108)) && l_639[3])), p_57, p_59, p_57))))) & 0L)) , g_166[1]);
                    }
                }
                else
                {
                    int l_686[10][10][1] = {{{0L},{1L},{5L},{0xADD1EC8BL},{3L},{3L},{0xADD1EC8BL},{5L},{1L},{0L}},{{9L},{0L},{0x16E0D96CL},{0x957FF9C9L},{(-10L)},{0L},{(-1L)},{0xFAC9D1C0L},{0x56962F50L},{0L}},{{0x5ED2453BL},{0x1C5BBF5AL},{(-6L)},{0L},{0x50D2557EL},{0x4CCAD009L},{0xAB0F762AL},{0x320E4D9DL},{0x5509C6C6L},{0x320E4D9DL}},{{0xAB0F762AL},{0x4CCAD009L},{0x50D2557EL},{0L},{(-6L)},{0x1C5BBF5AL},{0x5ED2453BL},{0L},{0x56962F50L},{0xFAC9D1C0L}},{{(-1L)},{0L},{(-10L)},{0x957FF9C9L},{0x16E0D96CL},{0L},{9L},{0L},{1L},{5L}},{{0xADD1EC8BL},{3L},{3L},{0xADD1EC8BL},{5L},{1L},{0L},{9L},{0L},{0x16E0D96CL}},{{0x957FF9C9L},{(-10L)},{0L},{(-1L)},{0xFAC9D1C0L},{0x56962F50L},{0L},{0x5ED2453BL},{0x1C5BBF5AL},{(-6L)}},{{0L},{0x50D2557EL},{0x4CCAD009L},{0xAB0F762AL},{0x320E4D9DL},{0x5509C6C6L},{(-1L)},{0x56962F50L},{0x1C60A6B6L},{5L}},{{0xFAC9D1C0L},{0x3008CD5CL},{0xAB0F762AL},{0x2773B9D1L},{(-6L)},{(-10L)},{(-2L)},{(-1L)},{0xDB9F4E6CL},{0x9F269C36L}},{{(-1L)},{0xB6C2CB14L},{0x4CCAD009L},{1L},{0L},{9L},{8L},{0x50D2557EL},{0xADD1EC8BL},{0xADD1EC8BL}}};
                    int l_687[9][4] = {{(-1L),0x4AE832D2L,0x71CDCE64L,0xE8375E35L},{(-1L),(-1L),0L,0x7E6FD1CCL},{0x71CDCE64L,(-1L),0x2BB41A09L,0x2BB41A09L},{0x71CDCE64L,0x71CDCE64L,0L,0xEB35984BL},{(-1L),0x2BB41A09L,0x71CDCE64L,(-1L)},{(-1L),0x38C062BFL,0xB7805BE1L,0x71CDCE64L},{0xE8375E35L,0x38C062BFL,0xE8375E35L,(-1L)},{0x38C062BFL,0x2BB41A09L,0x6ACB9ECFL,0xEB35984BL},{0xEB35984BL,0x71CDCE64L,(-1L),0x2BB41A09L}};
                    unsigned l_688 = 0x65894700L;
                    int i, j, k;
                    g_339 |= (l_109 = (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_66((~(safe_mul_func_uint8_t_u_u(((g_251[1] = p_59) | ((l_551 = l_633[1][1]) ^ func_126(((l_607 = (p_57 ^ (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((-6L) | func_112((+p_58), l_607, p_57, (l_687[3][3] = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_136, ((~(((safe_sub_func_int16_t_s_s((g_330[5][3][2] | l_686[2][6][0]), g_149)) <= (-1L)) , l_686[0][8][0])) , l_639[3]))), 5)), l_607))))), p_58)), 1L)))) , p_59), l_686[2][6][0]))), l_591))), g_330[0][1][3], p_58, l_688, l_689), l_632)), 7)) || p_57) != 0x19626DC2L), 10)));
                    l_591 = g_197;
                    for (g_20 = 0; (g_20 <= 6); g_20 += 1)
                    {
                        l_629 = ((g_306 ^= (func_120(l_688, l_690[0][0], g_544) | 0xB1L)) >= g_544);
                        l_607 = l_629;
                    }
                }
                l_697[0] |= (p_57 >= (safe_rshift_func_int8_t_s_s(((((p_59 = ((((safe_add_func_uint32_t_u_u((func_100(func_120((g_181 >= (p_59 , ((g_307[0] , g_197) | (safe_mul_func_int8_t_s_s(g_365, (~((l_109 , (2L >= (l_215[3][3][2] , l_633[1][1]))) | l_639[3]))))))), l_690[0][4], l_607), l_604) != p_58), p_57)) || p_59) < g_288) , g_190)) >= l_108) >= g_147[0]) > l_591), l_86)));
                if (g_330[5][3][2])
                    continue;
                l_448[6] = (((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((g_575 = g_166[2]) == g_155) | ((p_58 && (0x1FL < ((g_136 ^= (safe_mul_func_uint8_t_u_u((func_100(g_196, (l_607 <= (l_697[0] && l_178))) ^ l_215[3][3][2]), l_86))) <= l_512))) == 0x40L)), g_160)) ^ l_704), p_58)) == 7L) > l_629);
            }
            l_697[0] = (p_57 & ((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((g_277 >= func_100(g_279, (p_59 , (safe_add_func_int16_t_s_s(0x5189L, g_307[0]))))) , func_120(((g_339 ^= (((safe_mod_func_int32_t_s_s(g_160, func_120(l_108, g_603[0][1], l_448[5]))) & g_251[1]) || 8UL)) <= 0x891AD7D2L), l_697[0], l_713)), (-1L))), g_714[3][3])) <= l_713));
            l_648 ^= p_59;
        }
    }
    g_339 = p_59;
    return g_297[6];
}







static unsigned char func_66(short p_67, unsigned char p_68, int p_69, unsigned p_70, unsigned p_71)
{
    return g_13;
}







static char func_100(unsigned p_101, int p_102)
{
    unsigned l_107 = 0x833E316EL;
    for (g_52 = 26; (g_52 == 32); g_52 = safe_add_func_uint8_t_u_u(g_52, 6))
    {
        return g_52;
    }
    p_102 = (safe_sub_func_uint8_t_u_u(g_52, l_107));
    return p_101;
}







static short func_112(short p_113, int p_114, int p_115, int p_116)
{
    short l_138 = 2L;
    const char l_141 = 0x07L;
    int l_146 = 0x088A057EL;
    for (p_114 = (-9); (p_114 < (-15)); p_114 = safe_sub_func_int32_t_s_s(p_114, 1))
    {
        int l_137 = 0x82E33F91L;
        for (g_20 = 0; (g_20 >= 53); g_20 = safe_add_func_int16_t_s_s(g_20, 3))
        {
            g_136 = g_4;
            if (l_137)
                break;
        }
        return l_138;
    }
    if (((((safe_mod_func_int8_t_s_s((-1L), l_141)) || (g_4 == (65527UL || func_66((0xAB55L & g_136), (g_147[4] = ((l_146 = (safe_sub_func_int32_t_s_s((p_114 |= 0L), (safe_rshift_func_int8_t_s_u((((l_141 , func_126((p_113 == l_141), l_141)) >= 0xBEL) <= 1L), 7))))) <= 0x54L)), p_116, g_136, l_138)))) != p_115) | 65531UL))
    {
        unsigned l_148[8] = {0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL};
        int i;
        p_114 = l_148[1];
        return g_52;
    }
    else
    {
        unsigned char l_152 = 2UL;
        const int l_156 = 0L;
        int l_157 = 1L;
        l_157 = ((g_149 = (-1L)) | (g_4 , ((safe_mod_func_uint8_t_u_u((func_120(((func_100(g_147[4], p_116) | (l_152 == (((safe_mul_func_uint8_t_u_u((g_155 = ((g_136 = (g_147[4] , (l_146 = g_20))) || (p_115 ^ 0x51B912C0L))), g_20)) > l_156) <= g_20))) == g_13), p_115, g_147[4]) <= 0xCFL), 0xA0L)) < g_20)));
        l_157 = ((safe_rshift_func_uint8_t_u_u(0xA4L, (l_146 , l_152))) == ((l_141 & (g_160 = (g_4 &= g_13))) ^ 1UL));
        for (g_160 = 7; (g_160 <= 12); g_160 = safe_add_func_uint32_t_u_u(g_160, 1))
        {
            return p_115;
        }
    }
    return l_138;
}







static int func_120(short p_121, unsigned p_122, int p_123)
{
    unsigned char l_131 = 0x9CL;
    return l_131;
}







static short func_126(const int p_127, unsigned p_128)
{
    short l_129 = 0xD66DL;
    l_129 = g_17;
    return g_20;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_10[i][j][k], "g_10[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_251[i], "g_251[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_297[i], "g_297[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_304[i][j][k], "g_304[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_306, "g_306", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_307[i], "g_307[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_330[i][j][k], "g_330[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_603[i][j], "g_603[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_714[i][j], "g_714[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_759[i][j], "g_759[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_803, "g_803", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_835[i], "g_835[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_843[i], "g_843[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
