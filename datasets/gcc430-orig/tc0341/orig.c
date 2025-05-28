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


union U0 {
   const int f0;
   const char f1;
   short f2;
   unsigned short f3;
   short f4;
};

union U1 {
   unsigned short f0;
   unsigned char f1;
   int f2;
   unsigned short f3;
};


static int g_2 = (-1L);
static unsigned g_12 = 1UL;
static int g_61 = (-8L);
static int *g_60 = &g_61;
static unsigned char g_64[6] = {0x9FL,0x9FL,0x9FL,0x9FL,0x9FL,0x9FL};
static short g_74[4] = {1L,1L,1L,1L};
static int *g_85 = &g_2;
static int g_96[2] = {(-6L),(-6L)};
static int g_99 = (-9L);
static short g_100 = 0xAAF9L;
static const int g_120 = (-6L);
static unsigned short g_122 = 0x25F8L;
static unsigned short *g_121 = &g_122;
static unsigned short g_152 = 0x6AACL;
static int **g_193[5][1] = {{&g_60},{&g_85},{&g_60},{&g_85},{&g_60}};
static unsigned char g_241[9][6] = {{0x9AL,252UL,0x9AL,0x58L,1UL,0UL},{246UL,0x58L,0UL,1UL,253UL,253UL},{1UL,253UL,253UL,1UL,0UL,0x58L},{246UL,0UL,1UL,0x58L,0x9AL,252UL},{0x9AL,0UL,0x89L,0UL,0x9AL,1UL},{0x9AL,0x58L,1UL,0UL,246UL,0x89L},{0x89L,254UL,0x58L,0x58L,254UL,0x89L},{0UL,253UL,1UL,1UL,0x89L,1UL},{254UL,0x9AL,0UL,0x89L,0UL,0x9AL}};
static union U0 g_245 = {-2L};
static union U0 *g_244 = &g_245;
static unsigned *g_254 = (void*)0;
static unsigned g_330 = 0xC04F28E0L;
static short g_352[9][3][6] = {{{0xFA1FL,(-1L),(-8L),(-8L),(-9L),0xE992L},{1L,9L,0x0F0BL,1L,(-4L),(-6L)},{1L,8L,(-1L),0x9256L,9L,0x853EL}},{{(-1L),1L,1L,0xFAFCL,0L,0L},{0x9256L,0L,(-8L),0x084AL,0x65F7L,0xA5A9L},{0x853EL,(-6L),(-9L),(-3L),0xEBA5L,0x52F1L}},{{(-6L),0L,0L,1L,0x5B9DL,0x5B9DL},{0x20FEL,(-10L),(-10L),0x20FEL,(-8L),(-1L)},{0x5EB5L,0xF7CFL,(-2L),0x5B9DL,(-1L),0x0F0BL}},{{0L,(-8L),0xFAFCL,(-1L),(-1L),0L},{(-10L),0xF7CFL,0xA5A9L,8L,(-8L),0x802AL},{0x3A90L,(-10L),0L,0xE992L,0x3A90L,(-3L)}},{{1L,0x084AL,0L,0L,(-9L),(-6L)},{0xA5A9L,0xFEE0L,(-4L),(-1L),0x853EL,0L},{0x20FEL,0x6685L,0L,(-10L),1L,1L}},{{(-3L),(-6L),0L,8L,0L,0L},{0xEBA5L,0x20FEL,1L,0x853EL,0L,0x853EL},{0x3A90L,0L,0x3A90L,0x2D40L,1L,0L}},{{0x6685L,0L,0L,(-6L),0L,(-10L)},{0L,0x65F7L,(-10L),(-6L),1L,0x2D40L},{0x6685L,(-10L),0x5B9DL,0x2D40L,(-6L),(-1L)}},{{0x3A90L,0x5EB5L,9L,0x853EL,0xA5A9L,0L},{0xEBA5L,0L,(-10L),8L,0x5B9DL,1L},{(-3L),0L,0x802AL,(-10L),(-1L),0x65F7L}},{{0x20FEL,8L,(-9L),(-1L),0x5EB5L,0xE992L},{0xA5A9L,(-2L),0x5EB5L,0L,(-8L),0x6685L},{1L,0L,(-2L),0xEBA5L,0xEBA5L,(-2L)}}};
static unsigned g_374 = 0xEE80A6DDL;
static union U1 g_382[6] = {{0xB334L},{0xB334L},{0xB334L},{0xB334L},{0xB334L},{0xB334L}};
static unsigned *g_397 = &g_374;
static union U1 **g_463 = (void*)0;
static unsigned short g_541 = 65534UL;
static char g_584 = 0xBDL;
static unsigned g_594 = 0x951D44C4L;
static char *g_656 = &g_584;
static const int *g_674 = &g_120;
static const int **g_673 = &g_674;
static union U1 *g_691 = &g_382[1];
static union U0 g_737[8][10] = {{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}},{{-1L},{-1L},{0L},{0x4B567034L},{0L},{-1L},{-1L},{0L},{0x4B567034L},{0L}}};
static char g_790[9][5][5] = {{{5L,1L,0xF7L,0x43L,0xF7L},{0x5CL,0x5CL,(-10L),0xEFL,0x49L},{5L,1L,0xF4L,0x5CL,0x43L},{0x93L,0xE9L,0x43L,0xB9L,0L},{0xB4L,0x09L,0x8EL,7L,0L}},{{6L,0x29L,0x83L,5L,0x43L},{(-8L),6L,0x8EL,0L,0xEFL},{(-8L),0x21L,0x43L,1L,1L},{6L,0xCEL,(-3L),0L,0x83L},{0xB4L,0xCEL,(-4L),5L,0x43L}},{{0x93L,0x21L,1L,7L,0x83L},{0x21L,6L,1L,0xB9L,1L},{0x29L,0x29L,(-4L),0x5CL,0xEFL},{0x21L,0x09L,(-3L),0x5CL,0x43L},{0x93L,0xE9L,0x43L,0xB9L,0L}},{{0xB4L,0x09L,0x8EL,7L,0L},{6L,0x29L,0x83L,5L,0x43L},{(-8L),6L,0x8EL,0L,0xEFL},{(-8L),0x21L,0x43L,1L,1L},{6L,0xCEL,(-3L),0L,0x83L}},{{0xB4L,0xCEL,(-4L),5L,0x43L},{0x93L,0x21L,1L,(-6L),0xCEL},{0x4CL,0x1FL,0x98L,0x72L,0x98L},{0L,0L,0x93L,0xE1L,0xE9L},{0x4CL,0xF7L,0x09L,0xE1L,(-8L)}},{{0xAAL,(-1L),(-8L),0x72L,0x21L},{0x7CL,0xF7L,0x29L,(-6L),0x21L},{0x1FL,0L,0xCEL,1L,(-8L)},{0xF4L,0x1FL,0x29L,0x13L,0xE9L},{0xF4L,0x4CL,(-8L),(-1L),0x98L}},{{0x1FL,(-10L),0x09L,0x13L,0xCEL},{0x7CL,(-10L),0x93L,1L,0xB4L},{0xAAL,0x4CL,0x98L,(-6L),0xCEL},{0x4CL,0x1FL,0x98L,0x72L,0x98L},{0L,0L,0x93L,0xE1L,0xE9L}},{{0x4CL,0xF7L,0x09L,0xE1L,(-8L)},{0xAAL,(-1L),(-8L),0x72L,0x21L},{0x7CL,0xF7L,0x29L,(-6L),0x21L},{0x1FL,0L,0xCEL,1L,(-8L)},{0xF4L,0x1FL,0x29L,0x13L,0xE9L}},{{0xF4L,0x4CL,(-8L),(-1L),(-6L)},{0x83L,(-4L),1L,0x7CL,0x31L},{0x43L,(-4L),(-1L),0x4CL,0x72L},{0x43L,0L,(-6L),0x48L,0x31L},{0L,0x83L,(-6L),0x49L,(-6L)}}};
static unsigned short *g_811 = &g_245.f3;
static short *g_833 = &g_352[8][1][5];
static short **g_832[1][5][5] = {{{&g_833,&g_833,&g_833,&g_833,&g_833},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_833,&g_833,&g_833,&g_833,&g_833},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_833,&g_833,&g_833,&g_833,&g_833}}};
static short *** const g_831 = &g_832[0][1][0];
static int *g_852 = &g_96[1];
static int g_905 = 0xAD98B8CDL;
static int *g_976 = &g_96[0];
static int **g_1015[1][7][7] = {{{&g_976,&g_852,&g_85,&g_976,&g_85,&g_85,&g_976},{&g_852,&g_852,&g_852,&g_976,&g_976,&g_976,&g_976},{&g_85,&g_852,&g_976,&g_976,&g_976,&g_852,&g_85},{&g_852,(void*)0,&g_976,&g_976,&g_852,&g_976,&g_852},{&g_852,&g_852,&g_852,&g_852,&g_852,&g_85,&g_976},{&g_85,&g_85,&g_976,&g_852,&g_852,&g_976,&g_85},{&g_852,&g_85,&g_976,(void*)0,&g_852,&g_976,&g_976}}};
static int ***g_1014 = &g_1015[0][5][6];
static short * const g_1155 = &g_737[4][3].f4;
static const union U1 g_1300 = {0x9733L};
static short ****g_1405 = (void*)0;
static short *****g_1404[10] = {&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405};
static unsigned *g_1409 = &g_374;
static int ****g_1415 = (void*)0;
static int ****g_1416 = &g_1014;
static union U0 **g_1443 = &g_244;



static short func_1(void);
static unsigned func_7(unsigned p_8, int p_9);
static int func_13(union U1 p_14, unsigned short p_15);
static union U1 func_16(int p_17, char p_18, unsigned char p_19, unsigned * p_20, unsigned * p_21);
static int func_22(union U0 p_23, unsigned * p_24, unsigned short p_25, const unsigned p_26, short p_27);
static union U0 func_28(unsigned * p_29, int p_30);
static unsigned * func_31(unsigned short p_32);
static short func_34(int p_35, unsigned * p_36, int p_37, unsigned * p_38);
static unsigned func_39(unsigned * const p_40, int p_41, char p_42, const unsigned p_43, unsigned * p_44);
static int func_49(unsigned * p_50, unsigned * p_51, int p_52, int p_53, unsigned * p_54);
static short func_1(void)
{
    unsigned char l_10 = 0UL;
    unsigned *l_1017 = &g_594;
    int l_1018[7][2][3] = {{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L}}};
    unsigned *l_1044 = &g_594;
    unsigned *l_1045 = &g_374;
    short **l_1050 = &g_833;
    union U1 **l_1060 = &g_691;
    int *l_1078 = &g_99;
    int l_1093[9][1] = {{4L},{0x2D2780E9L},{4L},{0x2D2780E9L},{4L},{0x2D2780E9L},{4L},{0x2D2780E9L},{4L}};
    unsigned short l_1096 = 0x1B41L;
    int l_1148[9][1] = {{(-4L)},{0xCD4DB2AAL},{(-4L)},{0xCD4DB2AAL},{(-4L)},{0xCD4DB2AAL},{(-4L)},{0xCD4DB2AAL},{(-4L)}};
    union U0 **l_1179 = &g_244;
    unsigned short l_1185 = 7UL;
    int l_1331 = 0x17E70AB2L;
    const union U0 *l_1339 = &g_245;
    const union U0 **l_1338 = &l_1339;
    union U1 l_1367[8][8][3] = {{{{0x1316L},{6UL},{65535UL}},{{0x684AL},{1UL},{65531UL}},{{0UL},{65532UL},{65535UL}},{{0x02C2L},{65535UL},{65534UL}},{{0x820EL},{0UL},{65528UL}},{{1UL},{0x234EL},{6UL}},{{0x36D2L},{0xA106L},{6UL}},{{0x2E56L},{0x63BFL},{65528UL}}},{{{65535UL},{0xC650L},{65529UL}},{{65535UL},{0xB0C7L},{1UL}},{{6UL},{65535UL},{65535UL}},{{0xC650L},{65529UL},{65535UL}},{{0x1316L},{0x63BFL},{0x63BFL}},{{0x02C2L},{65532UL},{0x1316L}},{{65534UL},{65535UL},{0x0116L}},{{0x2E56L},{0xD3E9L},{0xF816L}}},{{{0x64A0L},{65535UL},{0xE257L}},{{6UL},{0xD3E9L},{1UL}},{{9UL},{65535UL},{6UL}},{{1UL},{65532UL},{1UL}},{{1UL},{0x63BFL},{0xD3E9L}},{{65528UL},{65529UL},{6UL}},{{0xE257L},{65535UL},{0x02C2L}},{{0xF074L},{0xB0C7L},{65535UL}}},{{{65532UL},{0xF816L},{7UL}},{{0x157EL},{0xFAA3L},{0xB0C7L}},{{0xF816L},{0x684AL},{65535UL}},{{0xF816L},{0xC650L},{65532UL}},{{0x157EL},{0x905FL},{0x36D2L}},{{65532UL},{1UL},{1UL}},{{0xF074L},{0x2E56L},{65529UL}},{{0xE257L},{0x73E8L},{9UL}}},{{{65528UL},{0xADB0L},{0x157EL}},{{1UL},{1UL},{1UL}},{{1UL},{65535UL},{65531UL}},{{9UL},{0x234EL},{65531UL}},{{6UL},{1UL},{0UL}},{{0x64A0L},{9UL},{65531UL}},{{0x2E56L},{0UL},{65531UL}},{{65534UL},{65529UL},{1UL}}},{{{0x02C2L},{65534UL},{0xF074L}},{{0x4D64L},{65529UL},{0x544DL}},{{65532UL},{0xF074L},{0xA106L}},{{65529UL},{0x5F70L},{0xA7F1L}},{{9UL},{0xD3E9L},{0x02C2L}},{{0UL},{0x6C03L},{65535UL}},{{65535UL},{0x234EL},{1UL}},{{0x18B6L},{0x234EL},{1UL}}},{{{0xA7F1L},{0x6C03L},{1UL}},{{6UL},{0xD3E9L},{0x0116L}},{{0x63BFL},{0x5F70L},{0xADB0L}},{{0xF816L},{0xF074L},{65529UL}},{{0x36D2L},{65529UL},{7UL}},{{0UL},{65534UL},{0UL}},{{65534UL},{65531UL},{0UL}},{{6UL},{0x18B6L},{65535UL}}},{{{9UL},{0x544DL},{65528UL}},{{65535UL},{0UL},{0x2E56L}},{{9UL},{0x157EL},{0x234EL}},{{6UL},{9UL},{0x4D64L}},{{65534UL},{65535UL},{65535UL}},{{0UL},{0x905FL},{9UL}},{{0x36D2L},{0x64A0L},{65535UL}},{{0xF816L},{0xE257L},{0UL}}}};
    int *l_1371 = &l_1093[4][0];
    const char l_1391[1] = {0xF2L};
    int ****l_1413 = &g_1014;
    unsigned l_1465 = 0xEB55C496L;
    int i, j, k;
lbl_1434:
    for (g_2 = 0; (g_2 > (-26)); g_2--)
    {
        unsigned *l_11 = &g_12;
        unsigned **l_459 = (void*)0;
        unsigned **l_460 = &l_11;
        unsigned *l_562 = &g_374;
        const int l_1003 = 0x2AEE9842L;
        union U0 *l_1021[6][9][4] = {{{(void*)0,&g_737[4][3],&g_245,(void*)0},{&g_245,(void*)0,(void*)0,&g_245},{&g_245,(void*)0,(void*)0,&g_245},{(void*)0,&g_245,(void*)0,&g_737[4][3]},{&g_737[7][2],&g_737[4][3],&g_245,&g_737[4][3]},{&g_737[4][3],&g_245,&g_737[7][2],&g_737[4][3]},{&g_245,&g_737[7][2],&g_245,(void*)0},{&g_245,&g_245,(void*)0,&g_245},{&g_737[4][3],&g_245,&g_245,&g_245}},{{&g_737[4][3],&g_245,(void*)0,(void*)0},{&g_245,&g_245,&g_245,&g_245},{&g_245,&g_245,(void*)0,&g_737[7][2]},{(void*)0,&g_737[4][3],(void*)0,(void*)0},{(void*)0,&g_737[4][3],&g_245,&g_737[7][2]},{&g_737[4][3],&g_245,&g_737[4][3],&g_245},{&g_245,&g_245,&g_245,(void*)0},{(void*)0,&g_245,&g_245,&g_245},{&g_737[7][2],&g_245,&g_245,&g_245}},{{(void*)0,&g_245,&g_245,(void*)0},{&g_245,&g_737[7][2],&g_737[4][3],&g_737[4][3]},{&g_737[4][3],&g_737[4][3],&g_245,&g_245},{(void*)0,&g_737[4][3],(void*)0,&g_245},{(void*)0,&g_737[4][3],(void*)0,&g_737[4][3]},{&g_245,&g_737[7][2],&g_245,(void*)0},{&g_245,&g_245,(void*)0,&g_245},{&g_737[4][3],&g_245,&g_245,&g_245},{&g_737[4][3],&g_245,(void*)0,(void*)0}},{{&g_245,&g_245,&g_245,&g_245},{&g_245,&g_245,(void*)0,&g_737[7][2]},{(void*)0,&g_737[4][3],(void*)0,(void*)0},{(void*)0,&g_245,&g_737[7][2],&g_245},{&g_245,&g_737[4][3],&g_245,&g_245},{(void*)0,&g_737[7][2],&g_245,(void*)0},{&g_245,(void*)0,&g_245,&g_737[7][2]},{&g_245,&g_737[4][3],&g_245,&g_737[4][3]},{&g_245,&g_245,&g_245,&g_245}},{{(void*)0,&g_245,&g_245,(void*)0},{&g_245,(void*)0,&g_737[7][2],&g_737[4][3]},{(void*)0,&g_245,(void*)0,&g_737[4][3]},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_245,&g_245,&g_737[4][3],&g_245},{&g_737[7][2],&g_245,(void*)0,&g_737[4][3]},{&g_245,&g_737[4][3],&g_737[4][3],&g_737[7][2]},{&g_245,(void*)0,(void*)0,(void*)0},{&g_737[7][2],&g_737[7][2],&g_737[4][3],&g_245}},{{&g_245,&g_737[4][3],(void*)0,&g_245},{(void*)0,&g_245,(void*)0,(void*)0},{(void*)0,&g_245,&g_737[7][2],&g_245},{&g_245,&g_737[4][3],&g_245,&g_245},{(void*)0,&g_737[7][2],&g_245,(void*)0},{&g_245,(void*)0,&g_245,&g_737[7][2]},{&g_245,&g_737[4][3],&g_245,&g_737[4][3]},{&g_245,&g_245,&g_245,&g_245},{(void*)0,&g_245,(void*)0,&g_245}}};
        short **l_1049 = &g_833;
        int *l_1077 = &g_96[0];
        int *l_1094 = &g_61;
        char *l_1106 = &g_790[0][0][2];
        union U1 l_1112 = {65535UL};
        int i, j, k;
    }
    if (((*l_1078) && 0xAEC9L))
    {
        int l_1164 = 0xB67E45D9L;
        unsigned char *l_1173 = &g_64[2];
        union U1 l_1174 = {0xE65CL};
        int *l_1175 = (void*)0;
        int *l_1176 = &l_1018[4][0][2];
        (*g_85) = l_1164;
        (*g_673) = (void*)0;

        ;
        (*g_60) = (safe_rshift_func_uint8_t_u_s(g_2, 4));
        (*l_1176) |= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((func_22((*g_244), &g_594, (*l_1078), (*l_1078), (safe_rshift_func_uint8_t_u_u(((*l_1173) = g_737[4][3].f4), (func_13(l_1174, l_1174.f3) && ((*g_656) = (-3L)))))) > g_905), g_905)) != 0xE486L), g_2));

        ;
        ;
                ;
        ;
    }
    else
    {
        union U0 **l_1177[8][9][3] = {{{&g_244,&g_244,(void*)0},{(void*)0,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,&g_244},{&g_244,(void*)0,&g_244},{(void*)0,(void*)0,(void*)0},{&g_244,(void*)0,&g_244},{&g_244,&g_244,&g_244}},{{&g_244,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,&g_244},{&g_244,&g_244,(void*)0},{(void*)0,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,&g_244}},{{&g_244,(void*)0,&g_244},{(void*)0,(void*)0,(void*)0},{&g_244,(void*)0,&g_244},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,&g_244},{&g_244,&g_244,(void*)0}},{{(void*)0,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,&g_244},{&g_244,&g_244,&g_244},{(void*)0,&g_244,(void*)0},{&g_244,&g_244,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244}},{{(void*)0,(void*)0,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,(void*)0},{&g_244,&g_244,(void*)0},{&g_244,(void*)0,&g_244},{&g_244,&g_244,&g_244},{&g_244,&g_244,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244}},{{(void*)0,&g_244,(void*)0},{&g_244,&g_244,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,(void*)0,&g_244},{&g_244,&g_244,&g_244},{&g_244,(void*)0,(void*)0},{&g_244,&g_244,(void*)0},{&g_244,(void*)0,&g_244}},{{&g_244,&g_244,&g_244},{&g_244,&g_244,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,&g_244,(void*)0},{&g_244,&g_244,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,(void*)0,&g_244}},{{(void*)0,(void*)0,&g_244},{&g_244,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244},{(void*)0,&g_244,&g_244},{&g_244,&g_244,(void*)0}}};
        union U0 ***l_1178 = &l_1177[3][8][2];
        const int l_1194 = 0xD848A0FEL;
        short ***l_1232 = (void*)0;
        unsigned l_1254 = 0x9691E2ABL;
        int l_1275 = 0x204E6956L;
        int l_1332 = 8L;
        unsigned short *l_1368 = &g_122;
        unsigned *l_1392 = (void*)0;
        unsigned *l_1402 = &g_12;
        int i, j, k;
        if ((((*l_1178) = l_1177[3][8][2]) != l_1179))
        {
            int l_1180 = 0xA85E2AF1L;
            int ****l_1188[8];
            int l_1237 = 0L;
            const char l_1266 = 0x5CL;
            unsigned short l_1303 = 65527UL;
            unsigned * const l_1337 = &g_12;
            int *l_1369 = &g_2;
            int i;
            for (i = 0; i < 8; i++)
                l_1188[i] = &g_1014;
            (*g_60) ^= ((void*)0 != &g_691);
            if ((*g_674))
            {
                union U0 **l_1195[3][3] = {{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244},{&g_244,&g_244,&g_244}};
                union U1 l_1200 = {1UL};
                int * const l_1280 = &g_2;
                unsigned *l_1334 = &g_374;
                int i, j;
                (*g_852) &= l_1180;
            }
            else
            {
                const int l_1366[5] = {0L,0L,0L,0L,0L};
                int *l_1370 = &l_1237;
                union U0 *l_1375[5] = {&g_737[4][8],&g_737[4][8],&g_737[4][8],&g_737[4][8],&g_737[4][8]};
                union U1 l_1386[7][2][5] = {{{{0UL},{65533UL},{7UL},{0UL},{65532UL}},{{0xEF16L},{0x1D83L},{0xDB1FL},{0x7FE4L},{0xDB1FL}}},{{{65532UL},{65532UL},{65535UL},{65533UL},{65532UL}},{{0x84F1L},{0x7FE4L},{0x84F1L},{0x1D83L},{0xCEE4L}}},{{{65532UL},{7UL},{7UL},{65532UL},{0UL}},{{0xEF16L},{0x7FE4L},{65526UL},{0x7FE4L},{0xEF16L}}},{{{0UL},{65532UL},{7UL},{7UL},{65532UL}},{{0xCEE4L},{0x1D83L},{0x84F1L},{0x7FE4L},{0x84F1L}}},{{{65532UL},{65533UL},{65535UL},{65532UL},{65532UL}},{{0xDB1FL},{0x7FE4L},{0xDB1FL},{0x1D83L},{0xDB1FL}}},{{{0UL},{65527UL},{65535UL},{7UL},{65527UL}},{{0x84F1L},{0x1D83L},{0xCEE4L},{0x1D83L},{0x84F1L}}},{{{65527UL},{7UL},{65535UL},{65527UL},{0UL}},{{0xDB1FL},{0x1675L},{65526UL},{0x1D83L},{65526UL}}}};
                short ****l_1398 = &l_1232;
                short ***** const l_1397 = &l_1398;
                int i, j, k;
                (*g_852) = (safe_mul_func_uint16_t_u_u(((*g_833) || ((**l_1050) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_1078) >= l_1366[1]), ((*g_60) >= ((*g_397) = (*l_1078))))), func_13(l_1367[5][2][1], (*g_811)))))), ((void*)0 == l_1368)));
                if ((l_1369 != (l_1371 = l_1370)))
                {
                    unsigned l_1383 = 0x25441E9EL;
                    for (l_1254 = (-11); (l_1254 <= 51); l_1254++)
                    {
                        unsigned short l_1374[7][2][3] = {{{0xA53DL,1UL,0xB60EL},{0xB60EL,0UL,5UL}},{{0x062CL,65533UL,0UL},{0xB60EL,65535UL,65526UL}},{{0xA53DL,0xA53DL,1UL},{1UL,0xA53DL,1UL}},{{0UL,65535UL,0xA53DL},{65535UL,65533UL,65534UL}},{{65526UL,0UL,0xA53DL},{65535UL,1UL,1UL}},{{9UL,0x062CL,1UL},{9UL,1UL,65526UL}},{{65535UL,1UL,0UL},{65526UL,65535UL,5UL}}};
                        int i, j, k;
                        if (l_1374[4][0][2])
                            break;
                        (*g_976) |= l_1374[4][0][2];
                        (*l_1338) = l_1375[4];

                        ;
                    }

                    ;
                    if ((0xC1L == (*l_1371)))
                    {
                        unsigned **l_1382[8][7][4] = {{{&l_1044,&l_1044,&g_254,(void*)0},{(void*)0,&g_254,&g_397,&g_254},{(void*)0,&l_1045,&g_397,&l_1044},{&l_1017,&l_1017,(void*)0,&l_1044},{&l_1045,&g_397,&g_254,&l_1017},{&l_1045,&l_1044,(void*)0,&g_397},{&l_1017,&l_1017,&g_397,&g_397}},{{(void*)0,&g_254,&g_397,&l_1044},{(void*)0,(void*)0,&g_397,&g_397},{(void*)0,&l_1045,&l_1017,&g_254},{&l_1044,&l_1044,(void*)0,(void*)0},{&l_1045,&g_397,(void*)0,&l_1017},{&l_1017,&l_1044,&l_1045,(void*)0},{&g_254,&l_1044,&g_397,&g_397}},{{&g_397,&g_397,&g_397,&l_1045},{(void*)0,(void*)0,&g_254,&l_1017},{&l_1044,&g_254,&l_1044,&g_254},{(void*)0,&g_254,&g_397,&l_1017},{&g_254,(void*)0,(void*)0,&l_1045},{(void*)0,&g_397,&l_1017,&g_397},{(void*)0,&l_1044,&l_1044,(void*)0}},{{(void*)0,&l_1044,(void*)0,&l_1017},{(void*)0,&g_397,&g_397,(void*)0},{&g_254,&l_1044,&g_254,&g_254},{(void*)0,&l_1045,&g_254,&g_397},{&l_1044,(void*)0,(void*)0,(void*)0},{&g_397,(void*)0,&g_397,&l_1017},{&g_397,&l_1044,(void*)0,&l_1044}},{{&g_397,(void*)0,&g_254,&l_1044},{(void*)0,(void*)0,&g_254,&g_254},{&g_397,&g_397,(void*)0,&g_254},{&g_397,&g_397,&g_397,&l_1044},{&g_254,&l_1045,&l_1017,&g_397},{&l_1017,(void*)0,&g_397,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1044}},{{&g_254,(void*)0,&g_254,&g_397},{&g_397,&l_1044,&g_397,(void*)0},{&l_1017,&l_1044,&g_397,&l_1044},{&g_254,&g_397,&g_397,&g_254},{&l_1044,&l_1017,&l_1017,&g_254},{&g_397,&g_254,&l_1044,&g_397},{(void*)0,(void*)0,&g_254,&g_397}},{{(void*)0,&g_254,&l_1044,&g_254},{&g_397,&l_1017,&g_397,&g_254},{&g_397,&g_397,&l_1044,&l_1044},{&l_1044,&l_1044,(void*)0,(void*)0},{&g_397,&l_1044,&l_1017,&g_397},{(void*)0,(void*)0,&l_1044,&l_1044},{&l_1045,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1044,&g_397},{&g_397,&l_1045,(void*)0,&l_1045},{&l_1044,&l_1044,&l_1044,&l_1044},{&l_1017,&g_254,&l_1017,&l_1044},{&l_1044,&g_254,&l_1017,(void*)0},{&l_1044,(void*)0,&l_1017,&g_254},{&l_1017,(void*)0,&l_1044,(void*)0}}};
                        int i, j, k;
                        (*l_1078) = ((void*)0 != &l_1375[4]);
                        (*g_673) = (*g_673);
                        (*g_976) = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, func_22((*g_244), &g_374, (*g_811), (safe_add_func_uint8_t_u_u(func_49(&g_374, &g_12, (*g_85), (*g_60), (g_254 = l_1369)), 0x0EL)), (*l_1370)))), l_1383));

                        ;
                        ;
                                                ;
                        ;
                    }
                    else
                    {
                        return (*g_1155);


                    }

                    ;
                    ;
                                        ;
                    ;
                    (*g_673) = func_31((*g_121));

                    ;
                    (*g_976) = (*g_976);
                }
                else
                {
                    (*l_1369) = 7L;
                }

                ;
                ;
                                ;
                ;
                ;
                ;
                ;
                for (l_1275 = (-14); (l_1275 >= (-23)); --l_1275)
                {
                    unsigned **l_1393 = &l_1045;
                    int l_1394 = 0x3A1DB7E0L;
                    (*l_1369) &= func_13(l_1386[0][1][2], (safe_mod_func_int8_t_s_s((*l_1078), l_1394)));
                }
                for (g_245.f3 = 0; (g_245.f3 <= 4); g_245.f3 += 1)
                {
                    int *l_1399 = &g_99;
                    for (g_584 = 4; (g_584 >= 0); g_584 -= 1)
                    {
                        (*l_1078) |= (safe_add_func_uint32_t_u_u(((void*)0 == l_1397), (*g_85)));
                        if ((*g_852))
                            continue;
                    }
                    (*l_1078) = 0xBA92B18CL;
                    (*g_673) = l_1399;

                    ;
                    for (g_99 = 0; (g_99 <= 2); g_99 += 1)
                    {
                        (*l_1060) = &g_382[1];
                    }
                }

                                ;
            }

            ;
            ;
                        ;
            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned **l_1400 = (void*)0;
            unsigned **l_1401[9][3];
            int l_1403 = 1L;
            int *l_1406 = (void*)0;
            int *l_1407 = &l_1367[5][2][1].f2;
            int *l_1408[4];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1401[i][j] = &g_254;
            }
            for (i = 0; i < 4; i++)
                l_1408[i] = &l_1018[2][0][1];
            (*g_85) ^= (g_152 != 0UL);
            for (g_594 = 0; (g_594 != 4); g_594 = safe_add_func_uint8_t_u_u(g_594, 1))
            {
                unsigned short l_1426 = 0x7307L;
                for (g_61 = 4; (g_61 >= 1); g_61 -= 1)
                {
                    unsigned char l_1419 = 0x18L;
                    int l_1430 = 0x49D2BF13L;
                    if (((*l_1078) = (-1L)))
                    {
                        (*l_1078) &= (safe_unary_minus_func_uint32_t_u(((*l_1402) = (*g_1409))));
                    }
                    else
                    {
                        int *****l_1414[4];
                        short *l_1429[7] = {&g_100,&g_245.f2,&g_100,&g_100,&g_245.f2,&g_100,&g_100};
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1414[i] = (void*)0;
                        (*l_1371) = ((((*g_1409) & ((l_1413 == (g_1416 = (g_1415 = &g_1014))) ^ ((safe_sub_func_int8_t_s_s((*g_656), (l_1419 & (*g_121)))) != ((*l_1402) = (((*g_833) == (l_1430 = (safe_add_func_int32_t_s_s((l_1275 = (safe_lshift_func_int16_t_s_s(((*g_1155) = (((safe_sub_func_int16_t_s_s((l_1426 = l_1419), (safe_lshift_func_int16_t_s_s((*g_833), (*g_833))))) != 4294967295UL) || l_1419)), 9))), 0x59BE2A52L)))) || l_1426))))) & (*g_656)) | 0xB732L);

                        ;
                    }
                }
                l_1408[2] = (void*)0;
                if (g_245.f1)
                    goto lbl_1434;
                for (g_374 = 0; (g_374 <= 1); g_374 += 1)
                {
                    for (g_541 = 0; (g_541 <= 5); g_541 += 1)
                    {
                        int i, j, k;
                        (*g_673) = func_31((((*g_60) = l_1018[(g_541 + 1)][g_374][(g_374 + 1)]) | l_1018[g_541][g_374][g_374]));

                        ;
                                                ;
                        ;
                        ;
                        return l_1018[g_541][g_374][(g_374 + 1)];
                    }
                    for (g_330 = 0; (g_330 <= 1); g_330 += 1)
                    {
                        int i, j, k;
                        (*g_673) = (void*)0;

                        ;
                        (*g_673) = &l_1018[(g_374 + 3)][g_330][(g_330 + 1)];

                        ;
                        (*g_976) = (-4L);
                    }
                }
            }


            l_1275 = ((*g_656) | g_737[4][3].f4);
        }

        ;
        ;
                ;
        ;
        ;
        ;

        for (g_152 = 0; (g_152 >= 16); g_152 = safe_add_func_int8_t_s_s(g_152, 1))
        {
            char l_1439[4][5] = {{1L,(-5L),1L,(-5L),1L},{0L,0x72L,0x72L,0L,0L},{0x8CL,(-5L),0x8CL,(-5L),0x8CL},{0L,0L,0x72L,0x72L,0L}};
            union U0 ***l_1442[3][4];
            union U1 ***l_1461 = &l_1060;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1442[i][j] = &l_1179;
            }
            (*l_1078) = (safe_sub_func_uint8_t_u_u(l_1439[3][3], (safe_mul_func_int8_t_s_s(((g_1443 = ((*l_1178) = (*l_1178))) != &g_244), 0UL))));
            for (l_1185 = 0; (l_1185 != 23); l_1185++)
            {
                unsigned l_1448 = 0xE4699329L;
                short l_1452[2];
                union U1 ** const *l_1462 = &g_463;
                int i;
                for (i = 0; i < 2; i++)
                    l_1452[i] = 0xEB5AL;
                if ((safe_sub_func_uint16_t_u_u(((*l_1368) = (*g_811)), (0x4F07L | (0xE5L <= l_1448)))))
                {
                    int l_1451 = 1L;
                    for (g_330 = (-7); (g_330 != 53); g_330 = safe_add_func_uint8_t_u_u(g_330, 5))
                    {
                        if ((*g_976))
                            break;
                        if (l_1448)
                            continue;
                    }
                    if (l_1451)
                        break;
                    (*g_976) = l_1452[1];
                    for (g_100 = (-29); (g_100 >= (-16)); ++g_100)
                    {
                        return l_1275;


                    }
                }
                else
                {
                    int *l_1463[10][7][1] = {{{&g_905},{&l_1332},{&l_1332},{&l_1331},{&g_905},{(void*)0},{&g_905}},{{&l_1331},{&l_1332},{&l_1332},{&g_905},{&l_1331},{&g_905},{&l_1331}},{{&g_905},{&l_1332},{&l_1332},{&l_1331},{&g_905},{(void*)0},{&g_905}},{{&l_1331},{&l_1332},{&l_1332},{&g_905},{&l_1331},{&g_905},{&l_1331}},{{&g_905},{&l_1332},{&l_1332},{&l_1331},{&g_905},{(void*)0},{&g_905}},{{&l_1331},{&l_1332},{&l_1332},{&g_905},{&l_1331},{&g_905},{&l_1331}},{{&g_905},{&l_1332},{&l_1332},{&l_1331},{&g_905},{(void*)0},{&g_905}},{{&l_1331},{&l_1332},{&l_1332},{&g_905},{&l_1331},{&g_905},{&l_1331}},{{&g_905},{&l_1332},{&l_1332},{&l_1331},{&g_905},{(void*)0},{&g_905}},{{&l_1331},{&l_1332},{&l_1332},{&g_905},{(void*)0},{&l_1332},{(void*)0}}};
                    const int l_1464 = 0x41532CB8L;
                    int i, j, k;
                    (*l_1078) = (3UL < (safe_rshift_func_int16_t_s_u(((((*g_121) = ((~func_39(&g_374, (g_905 ^= (((safe_sub_func_uint16_t_u_u((*g_811), ((*g_833) &= (*g_1155)))) & (*g_397)) != ((*l_1368) = (safe_mul_func_uint16_t_u_u((&g_382[3] == (void*)0), (l_1461 != l_1462)))))), (*g_656), l_1464, &g_330)) > (*g_397))) <= 0xFF82L) || 0xACA14752L), 7)));
                }
                for (g_245.f2 = 0; g_245.f2 < 9; g_245.f2 += 1)
                {
                    for (g_61 = 0; g_61 < 1; g_61 += 1)
                    {
                        l_1093[g_245.f2][g_61] = 0xC0DAB763L;
                    }
                }
                (*l_1078) ^= (1L <= l_1439[3][3]);
                (*g_85) = l_1254;
            }
        }

        ;
        l_1465 &= 0L;
    }

    ;
    ;
        ;
    ;
    ;
    ;
    ;

    return (*l_1078);


}







static unsigned func_7(unsigned p_8, int p_9)
{
    unsigned *l_765[3][5][2] = {{{&g_12,&g_374},{&g_330,&g_374},{&g_12,&g_374},{&g_330,&g_374},{&g_12,&g_374}},{{&g_330,&g_374},{&g_12,&g_374},{&g_330,&g_374},{&g_12,&g_374},{&g_330,&g_374}},{{&g_12,&g_374},{&g_330,&g_374},{&g_12,&g_374},{&g_330,&g_374},{&g_12,&g_374}}};
    int l_771 = 4L;
    short *l_825 = &g_74[1];
    short **l_824 = &l_825;
    short ***l_823 = &l_824;
    int l_867 = 0xA6F6D503L;
    const unsigned char l_903 = 0x1EL;
    unsigned *l_906 = &g_12;
    union U0 **l_910 = &g_244;
    union U0 ***l_909[4][2][1] = {{{(void*)0},{&l_910}},{{(void*)0},{&l_910}},{{(void*)0},{&l_910}},{{(void*)0},{&l_910}}};
    int **l_918[3][1][9] = {{{&g_852,&g_852,&g_852,&g_852,&g_852,&g_852,&g_852,&g_852,&g_85}},{{&g_60,&g_852,&g_852,&g_85,&g_852,&g_852,&g_85,&g_852,&g_852}},{{&g_852,&g_852,&g_60,&g_85,&g_60,(void*)0,(void*)0,&g_60,&g_85}}};
    unsigned l_935[2];
    int **l_937 = &g_852;
    const int **l_938 = &g_674;
    union U1 ***l_984 = &g_463;
    unsigned short l_996 = 0xB85DL;
    const unsigned l_1000 = 8UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_935[i] = 18446744073709551610UL;
    for (g_99 = 5; (g_99 >= 0); g_99 -= 1)
    {
        char l_762 = 1L;
        int *l_763 = &g_96[1];
        unsigned l_847 = 0xC9AC6989L;
        unsigned l_868 = 18446744073709551615UL;
        int l_889 = 0L;
        unsigned char l_923 = 4UL;
        short l_970 = 5L;
        unsigned short l_977 = 65535UL;
        if ((*g_674))
            break;
        l_762 ^= p_9;
        (*l_763) ^= (((*g_121) <= 0xD629L) > p_9);
        for (p_8 = 0; (p_8 <= 5); p_8 += 1)
        {
            const char l_764[1][9][5] = {{{0x4AL,2L,1L,(-9L),2L},{9L,(-1L),(-1L),9L,1L},{0x2CL,(-1L),0xCCL,2L,2L},{0xDFL,9L,0xDFL,1L,9L},{2L,1L,(-9L),2L,(-9L)},{(-6L),(-6L),3L,(-6L),9L},{(-9L),(-1L),1L,1L,(-1L)},{9L,0xDFL,1L,9L,(-1L)},{2L,(-1L),0x70L,(-1L),2L}}};
            unsigned *l_766 = &g_374;
            unsigned short *l_809[1][4][2] = {{{&g_382[1].f3,&g_122},{&g_382[1].f3,&g_122},{&g_382[1].f3,&g_122},{&g_382[1].f3,&g_122}}};
            int *l_813[3][7][10] = {{{&g_61,(void*)0,(void*)0,&g_96[1],(void*)0,&g_2,&l_771,&g_96[1],&g_96[1],&g_382[1].f2},{&g_2,&l_771,&l_771,&g_2,&g_61,&g_2,&g_2,&g_61,&g_96[1],&g_96[0]},{&g_61,(void*)0,&g_61,&g_61,&g_99,&g_99,&g_99,&g_61,&g_61,(void*)0},{&l_771,&g_96[1],&g_2,&g_2,&l_771,&g_99,&g_96[1],&g_61,(void*)0,&g_96[1]},{&g_2,&l_771,&g_61,&g_2,&g_61,&g_99,&g_2,&g_96[1],&g_61,&g_2},{&l_771,&g_2,&l_771,&g_96[1],&g_61,&g_99,&g_96[1],(void*)0,&g_2,&g_96[1]},{&g_61,&g_96[1],(void*)0,&g_2,&g_96[1],&g_2,&g_96[1],(void*)0,&g_99,&g_2}},{{&g_96[1],&g_96[1],&g_96[1],&g_2,(void*)0,&l_771,(void*)0,&l_771,&g_96[0],&g_96[1]},{&g_99,&l_771,&g_61,&g_2,&g_96[1],&g_2,&g_96[1],&g_2,&g_99,&l_771},{&l_771,&g_96[1],&g_61,&g_96[1],(void*)0,&g_99,&g_96[1],&g_61,&g_61,&g_99},{&g_96[1],&g_99,&g_96[1],&g_61,&g_99,&g_61,&g_61,&g_96[0],&g_61,&g_96[1]},{&g_96[0],&g_96[1],&l_771,&g_2,(void*)0,&g_2,&g_2,&g_96[1],&g_61,(void*)0},{&l_771,(void*)0,&g_99,&l_771,&g_2,&g_96[1],&g_96[1],&g_2,&l_771,&g_99},{&l_771,&l_771,&g_99,&g_96[0],&g_99,&g_96[1],(void*)0,&g_99,&g_96[1],&g_2}},{{&g_99,&g_61,&g_2,&g_96[1],&g_61,(void*)0,(void*)0,&l_771,&g_99,&g_96[1]},{&g_96[1],&l_771,&g_2,&g_61,&g_2,&g_2,&g_96[1],&g_61,&g_96[0],(void*)0},{&g_96[1],(void*)0,&g_96[1],&g_2,&g_99,(void*)0,&g_2,&g_61,&g_2,&g_99},{&g_96[1],&g_99,&g_99,&g_2,&g_2,&g_96[1],&g_2,&g_96[1],&g_382[1].f2,&g_96[1]},{&g_2,&g_61,&g_2,&g_61,&g_96[1],(void*)0,&g_2,&g_2,&g_61,&g_2},{&g_382[1].f2,&l_771,&g_96[0],(void*)0,(void*)0,&g_61,(void*)0,&g_2,&g_96[1],&l_771},{&l_771,&g_2,(void*)0,&g_2,&g_96[1],&g_2,&g_96[1],&l_771,&l_771,&g_96[1]}}};
            short *l_828 = (void*)0;
            union U1 *l_838 = &g_382[1];
            unsigned char *l_866 = &g_241[8][5];
            const int **l_940 = &g_674;
            int l_944[5] = {0x3B33D292L,0x3B33D292L,0x3B33D292L,0x3B33D292L,0x3B33D292L};
            int l_969 = 0x24EB1E22L;
            union U0 *l_971 = &g_737[4][3];
            int i, j, k;
        }
    }
    for (g_905 = 0; (g_905 >= 0); g_905 -= 1)
    {
        unsigned *l_982 = &g_594;
        int l_983 = 0x8EB80F17L;
        unsigned char *l_991 = &g_382[1].f1;
        unsigned char *l_992 = &g_241[0][4];
        union U0 *l_993 = &g_245;
        int i;
        (*g_976) ^= func_49(l_982, &p_8, ((void*)0 != &g_831), (~(**l_938)), l_906);
        (**l_937) &= p_9;
        p_9 ^= (((void*)0 == l_984) || ((*g_976) = 3L));
        g_382[(g_905 + 1)].f2 = (safe_add_func_int16_t_s_s(p_9, ((safe_rshift_func_int8_t_s_u(((*g_656) = (p_8 <= (safe_add_func_int32_t_s_s((((253UL != g_245.f1) & ((*g_121) &= (p_8 || (((*l_992) = g_382[(g_905 + 1)].f0) < (((*l_982) = (l_993 != l_993)) > (safe_mod_func_uint32_t_u_u(l_996, 4294967286UL))))))) && 1L), 0xAA56FA04L)))), 5)) & 2UL)));
        for (g_245.f3 = 0; (g_245.f3 <= 0); g_245.f3 += 1)
        {
            unsigned *l_1001[3];
            union U0 *l_1002 = &g_737[4][3];
            int i;
            for (i = 0; i < 3; i++)
                l_1001[i] = (void*)0;
            (*l_938) = &p_9;

            ;
            if ((**g_673))
                break;
            if ((!((0xDAL > (((*g_674) | (safe_add_func_uint32_t_u_u(((*g_656) <= (func_39(&g_374, p_8, p_8, func_39(l_982, (safe_unary_minus_func_uint16_t_u(l_1000)), func_49(l_1001[0], &g_594, p_9, p_8, &g_594), (*g_397), &g_330), l_1001[0]) == (**g_673))), 0x57D2B9BAL))) < p_8)) ^ (*g_656))))
            {
                if (l_983)
                    break;
                l_983 = func_49(&g_330, &p_8, (*g_85), p_8, &g_12);
                (*l_938) = &p_9;
                for (g_584 = 0; (g_584 <= 4); g_584 += 1)
                {
                    int i, j, k;
                    (*g_976) &= g_790[(g_584 + 4)][g_245.f3][g_584];
                }
            }
            else
            {
                l_1002 = l_1002;
            }
            if (l_983)
                continue;
            for (l_996 = 0; (l_996 <= 0); l_996 += 1)
            {
                return p_9;


            }
        }

    }

    ;
    return (*g_397);


}







static int func_13(union U1 p_14, unsigned short p_15)
{
    unsigned **l_760 = (void*)0;
    unsigned ***l_759 = &l_760;
    int l_761 = 0x6A108A4AL;
    l_761 ^= (l_759 != &l_760);
    return l_761;
}







static union U1 func_16(int p_17, char p_18, unsigned char p_19, unsigned * p_20, unsigned * p_21)
{
    unsigned char l_568 = 1UL;
    int l_570 = 0x46BB51FAL;
    int ***l_589 = (void*)0;
    int l_592 = 0x119536F7L;
    int l_596[6][5][4] = {{{0xF69FEBE9L,(-1L),7L,0x39B72B15L},{(-3L),0x43C3A60BL,0x2F6DC7A6L,9L},{0x72716CB6L,0x90133109L,(-10L),9L},{0L,0x43C3A60BL,3L,0x39B72B15L},{0L,(-1L),0L,0x2C3AAD6DL}},{{0x766B66E1L,(-7L),(-3L),0x3A022EDBL},{0x43C3A60BL,1L,0xD7967F70L,0x0DF4136CL},{0x683593A0L,(-10L),0x59E46A4BL,0L},{0xDD43AD8FL,(-3L),0x39B72B15L,0x8F28484CL},{(-7L),0x2F6DC7A6L,0L,(-1L)}},{{0x90133109L,0x39B72B15L,(-7L),2L},{2L,0x72716CB6L,(-7L),0x39B72B15L},{0xAD933D28L,(-3L),0x3283B95BL,0L},{0x74276C7EL,0x683593A0L,2L,(-3L)},{0L,(-7L),2L,(-3L)}},{{0x74276C7EL,0x72716CB6L,0x3283B95BL,9L},{0xAD933D28L,0xCA67752DL,(-7L),0xD7967F70L},{(-7L),0xD7967F70L,8L,0L},{0xF172B251L,0x3A022EDBL,0xAAED65EEL,0L},{9L,0xAAED65EEL,0x039A31A2L,0L}},{{0L,0x43C3A60BL,0x0DF4136CL,0x72716CB6L},{0xF69FEBE9L,0x74276C7EL,0x2F6DC7A6L,(-10L)},{0L,0L,0x766B66E1L,0x766B66E1L},{(-1L),(-1L),(-3L),0xAAED65EEL},{0xD7967F70L,0xDD43AD8FL,(-7L),0x8F28484CL}},{{0x39B72B15L,0x766B66E1L,0x37AD3B34L,(-7L)},{2L,0x766B66E1L,1L,0x8F28484CL},{0x766B66E1L,0xDD43AD8FL,0x72716CB6L,0xAAED65EEL},{0L,(-1L),9L,0x766B66E1L},{0x3A022EDBL,0L,0L,(-10L)}}};
    unsigned **l_623 = &g_397;
    union U1 l_636 = {0UL};
    unsigned short l_643 = 0x36A3L;
    int *l_720 = &l_570;
    const unsigned *l_727 = &g_374;
    const unsigned **l_726 = &l_727;
    union U0 *l_734 = &g_245;
    union U1 **l_739 = &g_691;
    int i, j, k;
    for (g_245.f2 = 0; (g_245.f2 == 11); g_245.f2 = safe_add_func_uint32_t_u_u(g_245.f2, 3))
    {
        char l_565 = (-7L);
        union U0 *l_566 = (void*)0;
        short *l_567 = &g_74[2];
        unsigned *l_591 = &g_374;
        int l_595 = 1L;
        if ((func_39(&g_374, l_565, p_18, ((void*)0 != l_566), p_20) <= (((*l_567) = l_565) || l_568)))
        {
            int *l_569[6];
            int i;
            for (i = 0; i < 6; i++)
                l_569[i] = &g_96[0];
            l_569[0] = l_569[1];
            if (p_18)
                continue;
            l_570 |= (&g_193[1][0] != &g_193[0][0]);
            for (g_99 = 4; (g_99 != (-30)); g_99--)
            {
                char *l_583[8] = {&l_565,&l_565,&l_565,&l_565,&l_565,&l_565,&l_565,&l_565};
                int l_590 = 0x7830C7B1L;
                int l_593 = 9L;
                int i;
                l_596[2][2][0] = (l_595 = (safe_mul_func_uint8_t_u_u(g_100, (g_594 |= (safe_mod_func_int32_t_s_s(p_18, (safe_lshift_func_uint8_t_u_u((((*g_121) = ((safe_mul_func_uint16_t_u_u(func_34((safe_lshift_func_int8_t_s_s(g_2, (g_584 = (p_19 && (*p_21))))), p_21, (safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((l_590 = ((void*)0 == l_589)), (func_49(p_20, l_591, (*g_85), p_17, l_569[0]) | (*g_121)))) | l_592), 65532UL)), p_20), (*g_121))) & 0xAAL)) != l_593), l_593))))))));

                ;
            }
        }
        else
        {
            char l_597[3];
            unsigned char l_620 = 0xF6L;
            union U1 l_629 = {0x26A6L};
            int i;
            for (i = 0; i < 3; i++)
                l_597[i] = 1L;
            l_596[2][2][0] = l_597[0];
            for (g_594 = (-16); (g_594 > 42); g_594 = safe_add_func_uint16_t_u_u(g_594, 3))
            {
                int **l_600 = &g_60;
                (*l_600) = p_20;

                ;
                for (l_595 = 5; (l_595 >= 0); l_595 -= 1)
                {
                    int i;
                    if ((safe_mul_func_int16_t_s_s(g_241[8][5], (((l_565 ^ (*g_397)) & (g_64[l_595] = 248UL)) ^ (safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u(((p_18 | (g_382[1].f0 = (0L < ((*g_121) = (safe_add_func_int32_t_s_s(((void*)0 == &g_122), (safe_add_func_int16_t_s_s((**l_600), (**l_600))))))))) != g_241[1][4]), 0x93D8L)) > p_17) >= l_595), 9))))))
                    {
                        (*l_600) = p_21;
                        (*l_600) = (*l_600);
                        (*l_600) = p_21;
                        (**l_600) = (safe_add_func_int16_t_s_s(0x6AEBL, 0xA92DL));
                    }
                    else
                    {
                        (**l_600) = (*g_85);
                    }
                    if (p_19)
                        break;
                }
            }
            if ((safe_mod_func_uint32_t_u_u((*p_20), (*p_21))))
            {
                char l_624 = 0xECL;
                for (l_568 = 0; (l_568 <= 3); l_568 += 1)
                {
                    unsigned char l_615 = 249UL;
                    int *l_617 = (void*)0;
                    l_615 ^= l_597[1];
                    for (g_152 = 0; (g_152 <= 3); g_152 += 1)
                    {
                        int **l_616[9] = {&g_85,&g_60,&g_85,&g_85,&g_60,&g_85,&g_85,&g_60,&g_85};
                        int i, j, k;
                        l_617 = &l_595;

                        ;
                        l_596[(g_152 + 1)][l_568][g_152] ^= ((0x23L > 1UL) != ((*g_121) | (safe_lshift_func_uint16_t_u_s(l_620, 12))));
                    }

                    ;
                }
                l_624 |= (safe_mul_func_int16_t_s_s(((void*)0 != l_623), p_18));
            }
            else
            {
                int *l_626 = &l_596[2][2][0];
                if (func_34((0x491B9C3CL > 0L), p_21, l_620, &g_12))
                {
                    int l_625 = (-7L);
                    int **l_627 = (void*)0;
                    int **l_628[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_628[i] = &g_60;
                    l_625 |= p_18;
                    l_626 = l_626;
                    return l_629;

                                    }
                else
                {
                    for (g_12 = 16; (g_12 != 53); g_12 = safe_add_func_int8_t_s_s(g_12, 4))
                    {
                        (*l_626) &= 0x54CAE85BL;
                    }
                }

                ;
            }
        }
    }

    ;
    for (g_99 = 1; (g_99 <= 5); g_99 += 1)
    {
        int l_634 = (-7L);
        unsigned * const l_648[5] = {&g_12,&g_12,&g_12,&g_12,&g_12};
        char * const l_657 = &g_584;
        short *l_687[6][3] = {{&g_352[7][1][5],&g_245.f4,&g_245.f4},{&g_352[7][1][5],&g_245.f4,&g_245.f4},{&g_352[7][1][5],&g_245.f4,&g_245.f4},{&g_352[7][1][5],&g_245.f4,&g_245.f4},{&g_352[7][1][5],&g_245.f4,&g_245.f4},{&g_352[7][1][5],&g_245.f4,&g_245.f4}};
        short **l_686 = &l_687[5][0];
        int l_715 = 1L;
        union U1 *l_717 = &g_382[0];
        int *l_721 = (void*)0;
        unsigned *l_731 = &g_594;
        union U0 *l_736 = &g_737[4][3];
        union U0 *l_738 = &g_245;
        int *l_755 = &g_96[1];
        int *l_756[5];
        union U1 l_758 = {65534UL};
        int i, j;
        for (i = 0; i < 5; i++)
            l_756[i] = &l_592;
    }
    return (**l_739);

    }







static int func_22(union U0 p_23, unsigned * p_24, unsigned short p_25, const unsigned p_26, short p_27)
{
    unsigned *l_512 = (void*)0;
    int l_513[1];
    int *l_520 = (void*)0;
    int *l_521 = &g_96[0];
    int i;
    for (i = 0; i < 1; i++)
        l_513[i] = 0xDD73A450L;
    for (g_330 = 0; (g_330 >= 50); g_330++)
    {
        int l_507[9];
        unsigned * const l_510 = &g_12;
        unsigned *l_511 = (void*)0;
        int *l_514 = &g_96[0];
        int i;
        for (i = 0; i < 9; i++)
            l_507[i] = 0x3C3F8B04L;
        (*l_514) = (safe_sub_func_int32_t_s_s(l_507[7], ((safe_sub_func_int32_t_s_s((func_39(&g_330, func_39(l_510, g_241[8][5], l_507[4], func_34(p_23.f1, p_24, p_23.f3, l_511), l_512), l_513[0], (*p_24), l_511) && g_96[1]), 0xA27F2B72L)) & 0UL)));

        ;
        l_513[0] = p_27;
        (*l_514) = 0x28FD4CB0L;
        for (g_100 = (-23); (g_100 > (-6)); g_100 = safe_add_func_uint16_t_u_u(g_100, 7))
        {
            int **l_517 = &g_85;
            (*l_517) = p_24;

            ;
        }
    }

    ;
    (*l_521) &= l_513[0];
    if (p_23.f1)
    {
        unsigned short l_522 = 1UL;
        unsigned *l_523 = &g_374;
        int l_526 = (-3L);
        l_526 |= (func_49(func_31(l_522), l_523, (safe_lshift_func_uint8_t_u_s(g_2, l_522)), (*g_85), &g_374) ^ (((l_522 == 0xD0L) < 0xD5766EEEL) || 0xF1L));
    }
    else
    {
        unsigned short l_527 = 65532UL;
        unsigned short *l_544 = &g_541;
        const unsigned **l_552 = (void*)0;
        const unsigned ***l_551 = &l_552;
        int *l_553 = (void*)0;
        (*l_521) = l_527;
        for (p_23.f4 = 0; (p_23.f4 < 19); p_23.f4 = safe_add_func_int32_t_s_s(p_23.f4, 1))
        {
            unsigned l_539[2];
            unsigned short *l_540 = &g_541;
            int *l_560[5];
            int **l_561 = &l_521;
            int i;
            for (i = 0; i < 2; i++)
                l_539[i] = 1UL;
            for (i = 0; i < 5; i++)
                l_560[i] = &g_96[1];
            for (g_100 = 24; (g_100 > (-4)); g_100 = safe_sub_func_uint8_t_u_u(g_100, 5))
            {
                int l_534[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_534[i] = 0xE3D127D1L;
                if (p_23.f4)
                {
                    return g_99;
                }
                else
                {
                    for (g_99 = (-16); (g_99 != (-30)); g_99--)
                    {
                        l_534[0] &= 0x077F3E17L;
                    }
                    return g_245.f4;
                }
            }
            if ((*g_85))
            {
                (*l_521) = ((((void*)0 == &l_513[0]) | (((void*)0 != l_544) > l_539[1])) <= ((((safe_add_func_int16_t_s_s(p_26, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x32B6L, 4)), (l_551 == &l_552))))) | 1UL) & 0x37L) == 0xE9L));
                l_520 = l_553;
                (*l_521) &= p_23.f2;
            }
            else
            {
                return g_352[0][1][4];
            }
            for (g_541 = 0; (g_541 <= 1); g_541 += 1)
            {
                int *l_558 = (void*)0;
                int *l_559 = &g_99;
                int i;
                (*l_559) = (0xB9L & func_34((safe_sub_func_int32_t_s_s((((*g_121) |= (((g_96[g_541] ^ (safe_sub_func_int16_t_s_s(func_49(&g_12, l_553, ((*l_559) = (g_61 < p_27)), p_26, l_559), 0xF9B3L))) > p_23.f3) > 0UL)) | 0xFC6BL), l_539[1])), &g_330, p_23.f4, p_24));

                ;
            }
            (*l_561) = l_560[3];
        }

            }

        (*l_521) |= p_23.f2;
    return g_245.f4;
}







static union U0 func_28(unsigned * p_29, int p_30)
{
    unsigned l_462 = 0x77285750L;
    int l_467 = 0xF0423EBEL;
    union U0 **l_474 = &g_244;
    short l_475 = 1L;
    unsigned * const l_482 = &g_374;
    int l_497 = (-1L);
    short l_498 = (-3L);
    int *l_499 = (void*)0;
    int *l_500 = &g_382[1].f2;
    int *l_501 = &g_61;
    union U0 l_502 = {4L};
    for (g_100 = 0; (g_100 <= 5); g_100 += 1)
    {
        const short l_461[7] = {1L,1L,1L,1L,1L,1L,1L};
        int *l_466 = &g_99;
        int i;
        (*l_466) = (g_352[7][0][5] || l_461[2]);
        for (g_122 = 0; (g_122 <= 0); g_122 += 1)
        {
            int i, j;
            g_193[(g_122 + 1)][g_122] = g_193[(g_122 + 4)][g_122];
        }
    }
    l_467 ^= l_462;
    for (g_152 = 0; (g_152 == 60); g_152 = safe_add_func_int16_t_s_s(g_152, 1))
    {
        unsigned short l_470[5][2] = {{0x55CAL,0x035FL},{0x035FL,0x55CAL},{0x035FL,0x035FL},{0x55CAL,0x035FL},{0x035FL,0x55CAL}};
        int *l_471 = &g_99;
        unsigned **l_479 = &g_254;
        int i, j;
        (*l_471) &= l_470[2][0];
        l_475 ^= ((safe_add_func_int16_t_s_s(func_49(p_29, &g_12, l_462, (*l_471), &g_12), (l_474 == l_474))) | p_30);
        if (p_30)
            continue;
        (*l_471) ^= (safe_mod_func_int16_t_s_s(0xFFD0L, ((safe_unary_minus_func_int16_t_s(func_49(((*l_479) = l_471), &g_330, ((safe_add_func_uint16_t_u_u(func_39(l_482, (g_382[1].f3 != p_30), l_475, (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_39(&g_12, (safe_rshift_func_uint8_t_u_s(l_462, 2)), p_30, (*g_397), p_29), 0)), l_475)), &g_374), p_30)) <= 0x2A53L), p_30, p_29))) | 0xF9C7A52EL)));

        ;
    }
    l_467 &= ((*l_501) ^= (safe_mul_func_int16_t_s_s(l_462, ((((safe_lshift_func_int8_t_s_s(p_30, g_74[2])) <= (safe_sub_func_int8_t_s_s(((*g_121) <= (safe_add_func_uint32_t_u_u(l_497, l_498))), l_462))) && l_475) == (-1L)))));
    return l_502;

    }







static unsigned * func_31(unsigned short p_32)
{
    unsigned l_33[7] = {0xC8CAC31EL,0xC8CAC31EL,0xC8CAC31EL,0xC8CAC31EL,0xC8CAC31EL,0xC8CAC31EL,0xC8CAC31EL};
    unsigned *l_55 = &g_12;
    short *l_73 = &g_74[2];
    const int **l_82 = (void*)0;
    int l_94 = (-8L);
    int *l_144 = &g_61;
    char l_170 = 0x68L;
    unsigned l_177 = 0x2A51B156L;
    char l_223 = 0x47L;
    union U0 *l_295 = &g_245;
    int *l_314 = &g_99;
    int l_360[5];
    int l_376[1][8];
    unsigned char l_377 = 0UL;
    union U1 *l_383 = &g_382[1];
    unsigned short l_421[7][8][4] = {{{9UL,0x2CB7L,0x8D24L,5UL},{0x2CB7L,9UL,65528UL,0xFEEDL},{0x2CB7L,0x3E85L,0x8D24L,4UL},{9UL,0x98DAL,4UL,4UL},{0x3E85L,0x3E85L,0x0D92L,0xFEEDL},{0x98DAL,9UL,0x0D92L,5UL},{0x3E85L,0x2CB7L,4UL,0x0D92L},{9UL,0x2CB7L,0x8D24L,5UL}},{{0x2CB7L,9UL,65528UL,0xFEEDL},{0x2CB7L,0x3E85L,0x8D24L,4UL},{9UL,0x98DAL,4UL,4UL},{0x3E85L,0x3E85L,0x0D92L,0xFEEDL},{0x98DAL,9UL,0x0D92L,5UL},{9UL,0x1034L,65528UL,0xEB8EL},{0x98DAL,0x1034L,4UL,0xFEEDL},{0x1034L,0x98DAL,5UL,0x0D92L}},{{0x1034L,9UL,4UL,65528UL},{0x98DAL,0x9D16L,65528UL,65528UL},{9UL,9UL,0xEB8EL,0x0D92L},{0x9D16L,0x98DAL,0xEB8EL,0xFEEDL},{9UL,0x1034L,65528UL,0xEB8EL},{0x98DAL,0x1034L,4UL,0xFEEDL},{0x1034L,0x98DAL,5UL,0x0D92L},{0x1034L,9UL,4UL,65528UL}},{{0x98DAL,0x9D16L,65528UL,65528UL},{9UL,9UL,0xEB8EL,0x0D92L},{0x9D16L,0x98DAL,0xEB8EL,0xFEEDL},{9UL,0x1034L,65528UL,0xEB8EL},{0x98DAL,0x1034L,4UL,0xFEEDL},{0x1034L,0x98DAL,5UL,0x0D92L},{0x1034L,9UL,4UL,65528UL},{0x98DAL,0x9D16L,65528UL,65528UL}},{{9UL,9UL,0xEB8EL,0x0D92L},{0x9D16L,0x98DAL,0xEB8EL,0xFEEDL},{9UL,0x1034L,65528UL,0xEB8EL},{0x98DAL,0x1034L,4UL,0xFEEDL},{0x1034L,0x98DAL,5UL,0x0D92L},{0x98DAL,0UL,0xFEEDL,0x0D92L},{0x2CB7L,0x1034L,0x0D92L,0x0D92L},{0UL,0UL,65528UL,4UL}},{{0x1034L,0x2CB7L,65528UL,0x8D24L},{0UL,0x98DAL,0x0D92L,65528UL},{0x2CB7L,0x98DAL,0xFEEDL,0x8D24L},{0x98DAL,0x2CB7L,0xEB8EL,4UL},{0x98DAL,0UL,0xFEEDL,0x0D92L},{0x2CB7L,0x1034L,0x0D92L,0x0D92L},{0UL,0UL,65528UL,4UL},{0x1034L,0x2CB7L,65528UL,0x8D24L}},{{0UL,0x98DAL,0x0D92L,65528UL},{0x2CB7L,0x98DAL,0xFEEDL,0x8D24L},{0x98DAL,0x2CB7L,0xEB8EL,4UL},{0x98DAL,0UL,0xFEEDL,0x0D92L},{0x2CB7L,0x1034L,0x0D92L,0x0D92L},{0UL,0UL,65528UL,4UL},{0x1034L,0x2CB7L,65528UL,0x8D24L},{0UL,0x98DAL,0x0D92L,65528UL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_360[i] = (-1L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_376[i][j] = (-4L);
    }
    if ((l_33[0] | (((*l_73) = func_34((((*l_55) = func_39(&g_12, l_33[0], (safe_lshift_func_uint8_t_u_u(g_12, (safe_mod_func_uint32_t_u_u(p_32, func_49(&g_12, l_55, (safe_mod_func_uint8_t_u_u(p_32, g_12)), p_32, &g_12))))), g_12, &g_12)) <= g_2), l_55, g_64[3], l_55)) && p_32)))
    {
        unsigned short l_81 = 0x65D2L;
        int l_115 = 0x3021B5A5L;
        unsigned *l_116 = (void*)0;
        short *l_132[7] = {&g_100,&g_100,&g_74[2],&g_100,&g_100,&g_74[2],&g_100};
        int l_162[4];
        int *l_203 = &l_94;
        unsigned *l_225 = &g_12;
        char l_259 = 0xE2L;
        union U0 *l_304 = &g_245;
        union U0 **l_305 = (void*)0;
        union U0 **l_306 = &l_295;
        unsigned short *l_307 = &g_245.f3;
        char l_308 = 0x77L;
        unsigned short l_309 = 65535UL;
        int i;
        for (i = 0; i < 4; i++)
            l_162[i] = 0xA330EBA2L;
        if (g_61)
        {
            unsigned l_106 = 4294967295UL;
            int l_136 = 0x58067933L;
            unsigned *l_147 = &l_106;
            const int *l_181 = &l_94;
            const int **l_180[3][1][8] = {{{&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181}},{{&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181}},{{&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181,&l_181}}};
            int i, j, k;
            if ((safe_sub_func_int16_t_s_s(p_32, 0x158EL)))
            {
                int **l_86 = &g_60;
                unsigned *l_105[5][8] = {{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12}};
                unsigned char l_112[7][2];
                short l_160 = 0x1460L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_112[i][j] = 0xF2L;
                }
                if (((safe_add_func_uint8_t_u_u(((l_81 | (l_82 != (void*)0)) > p_32), (safe_mul_func_uint16_t_u_u((p_32 >= 0x45L), ((g_64[1] != ((g_85 != ((*l_86) = (void*)0)) != p_32)) == p_32))))) && 0xB759L))
                {
                    unsigned l_93[5][9][5] = {{{8UL,0UL,0UL,8UL,1UL},{0x0D6A5A8EL,0x93E9ABA4L,0x93E9ABA4L,0x0D6A5A8EL,2UL},{8UL,0UL,0UL,8UL,1UL},{0x0D6A5A8EL,0x93E9ABA4L,0x93E9ABA4L,0x0D6A5A8EL,2UL},{8UL,0UL,0UL,8UL,1UL},{0x0D6A5A8EL,0x93E9ABA4L,0x93E9ABA4L,0x0D6A5A8EL,2UL},{8UL,0UL,0UL,8UL,1UL},{0x0D6A5A8EL,0x93E9ABA4L,0x93E9ABA4L,0x0D6A5A8EL,2UL},{8UL,0UL,0UL,8UL,0UL}},{{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L}},{{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL},{2UL,0xF045C746L,0xF045C746L,2UL,0x93E9ABA4L},{1UL,0xA14F8299L,0xA14F8299L,1UL,0UL}},{{2UL,0xF045C746L,0xF045C746L,2UL,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L}},{{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL},{0xF045C746L,0x0D6A5A8EL,0x0D6A5A8EL,0xF045C746L,0x556AD515L},{0xA14F8299L,8UL,8UL,0xA14F8299L,4294967292UL}}};
                    int *l_97 = &g_2;
                    unsigned short *l_111 = &l_81;
                    int *l_113 = &g_96[1];
                    int *l_114 = &g_61;
                    const int **l_117 = (void*)0;
                    const int *l_119 = &g_120;
                    const int **l_118 = &l_119;
                    int i, j, k;
                    for (g_61 = (-2); (g_61 > 0); g_61 = safe_add_func_uint8_t_u_u(g_61, 1))
                    {
                        int *l_95 = &g_96[1];
                        int *l_98[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_98[i] = &g_99;
                        g_100 |= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((l_93[4][1][0] <= ((*l_95) ^= (l_94 = (*g_85)))) == ((*l_55) = g_12)), (l_97 != l_97))) != (g_99 |= func_49(l_95, g_60, p_32, p_32, &l_93[4][1][0]))), p_32));
                    }

                    ;
                    l_112[3][1] = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_49(&g_12, l_105[1][4], l_106, p_32, &g_12), (safe_lshift_func_uint16_t_u_s(((((*l_111) = g_96[1]) != ((*l_97) >= (*g_85))) > (*l_97)), 3)))), 0x155EL));
                    if (((*l_114) &= ((*l_113) = (*l_97))))
                    {
                        (*l_114) &= p_32;
                    }
                    else
                    {
                        l_115 ^= 0L;
                        (*l_113) = func_34((*l_113), l_55, (p_32 < ((*l_55) &= g_99)), l_116);

                        ;
                        (*l_114) = (*g_85);
                        return l_116;


                    }
                    g_99 = ((((*l_113) = (((((((*l_86) = l_114) == ((*l_118) = &g_96[1])) | (&p_32 != g_121)) != (safe_add_func_uint8_t_u_u(((*g_121) ^ p_32), p_32))) || p_32) > 65535UL)) < (*g_85)) >= (*l_114));

                    ;
                    ;
                }
                else
                {
                    int *l_127[8][5] = {{&g_96[0],&l_94,&g_96[0],&g_96[0],&l_94},{&l_115,&l_94,&l_94,&l_115,&l_94},{&l_94,&l_94,&g_96[1],&l_94,&l_94},{&l_94,&l_115,&l_94,&l_94,&l_115},{&l_94,&g_96[0],&g_96[0],&l_94,&g_96[0]},{&l_115,&l_115,&g_61,&l_115,&l_115},{&g_96[0],&l_94,&g_96[0],&g_96[0],&l_94},{&l_115,&l_94,&l_94,&l_115,&l_94}};
                    unsigned char *l_135 = &g_64[5];
                    int i, j;
                    l_94 |= (((+((*g_85) >= 0x00CEE564L)) || (*g_121)) | (safe_rshift_func_uint16_t_u_u(p_32, 11)));
                    l_136 = ((safe_add_func_uint16_t_u_u((((&l_115 != &g_61) || (-3L)) && ((*l_135) = (safe_sub_func_int32_t_s_s(((0UL >= (l_115 &= ((l_132[3] == &g_74[0]) || ((safe_add_func_uint16_t_u_u((*g_121), l_81)) >= p_32)))) >= g_74[2]), p_32)))), 0x5C63L)) && p_32);
                    for (l_106 = 0; (l_106 == 38); ++l_106)
                    {
                        unsigned short l_141 = 0xDBCCL;
                        l_94 |= (l_106 <= (safe_rshift_func_uint8_t_u_s(g_122, l_141)));
                    }
                    return &g_12;


                }

                ;
                for (g_122 = 1; (g_122 <= 5); g_122 += 1)
                {
                    unsigned *l_167[5] = {&l_106,&l_106,&l_106,&l_106,&l_106};
                    int l_190[1][7];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_190[i][j] = (-9L);
                    }
                }
            }
            else
            {
                return &g_12;


            }

            ;
            for (p_32 = 2; (p_32 <= 6); p_32 += 1)
            {
                int ***l_192 = (void*)0;
                int *l_194[2][5] = {{&g_61,&l_162[3],&l_162[3],&g_61,&l_94},{&g_61,&l_162[3],&l_162[3],&g_61,&l_94}};
                int i, j;
                (*l_144) = ((-1L) || ((g_193[3][0] = &g_60) != &g_60));
                (*l_144) |= 0x45441F61L;
            }
        }
        else
        {
            int *l_249 = (void*)0;
            int l_271 = 0x9D52D591L;
            int **l_291[5][6][8] = {{{&l_249,&l_249,(void*)0,&l_144,&l_144,&l_249,&g_85,&l_203},{&l_249,&l_249,(void*)0,&l_144,&l_203,&l_144,&l_249,&l_144},{&l_249,&l_249,&l_144,(void*)0,&l_249,(void*)0,&l_144,&l_249},{&l_203,&l_144,&l_203,&l_249,(void*)0,&l_249,(void*)0,(void*)0},{(void*)0,(void*)0,&l_144,&g_85,&l_203,&l_144,(void*)0,(void*)0},{&l_144,&g_85,&l_203,&l_249,(void*)0,(void*)0,&l_144,&l_144}},{{(void*)0,(void*)0,&l_249,&l_249,&l_203,&l_203,(void*)0,&l_249},{&l_203,(void*)0,&l_144,&g_85,(void*)0,&g_85,(void*)0,(void*)0},{&l_203,(void*)0,&l_249,&g_85,(void*)0,&l_144,&g_85,&l_249},{(void*)0,(void*)0,&l_203,&l_249,&l_144,&g_85,&l_144,&l_249},{(void*)0,&l_249,(void*)0,(void*)0,(void*)0,&l_144,(void*)0,&l_144},{&l_144,&l_203,&l_144,(void*)0,&l_249,&l_249,(void*)0,&l_249}},{{&l_144,(void*)0,&l_203,&g_85,(void*)0,&l_249,&l_249,&l_203},{(void*)0,&l_144,&l_144,&l_144,&l_144,&l_144,&l_144,(void*)0},{(void*)0,&g_85,&l_249,(void*)0,(void*)0,(void*)0,&l_203,&l_144},{&l_203,&l_249,&l_144,(void*)0,(void*)0,(void*)0,&l_249,&l_203},{&l_203,&g_85,&l_249,&l_249,&l_203,&l_144,&l_249,&l_144},{&l_203,&l_144,&l_203,&l_144,&l_203,&l_249,(void*)0,&l_249}},{{&l_249,&g_85,&l_144,(void*)0,&g_85,&l_249,(void*)0,&l_203},{(void*)0,(void*)0,&l_144,&l_249,&l_203,&l_203,&g_85,(void*)0},{&g_85,&l_144,(void*)0,&l_203,&l_144,&l_144,&l_203,(void*)0},{&l_144,&l_144,(void*)0,&g_85,&l_203,&l_203,&l_249,&l_144},{(void*)0,&l_249,&l_203,(void*)0,&l_249,&g_85,(void*)0,&l_144},{&l_249,&g_85,&l_203,&g_85,(void*)0,&l_249,&l_203,(void*)0}},{{&l_249,(void*)0,&l_203,&l_203,&l_203,(void*)0,&l_249,(void*)0},{&l_203,&l_249,&l_249,&l_249,&l_249,&l_249,&l_144,&l_203},{&l_203,&l_249,&l_144,(void*)0,&l_249,&l_144,&l_249,&l_203},{&l_203,&l_144,&g_85,&l_203,&l_203,(void*)0,(void*)0,&l_203},{&l_249,(void*)0,(void*)0,&l_249,(void*)0,&l_144,&l_144,&l_249},{&l_249,&l_203,&l_249,&l_144,&l_249,(void*)0,&l_249,&l_144}}};
            int i, j, k;
            for (g_99 = 0; (g_99 < 5); g_99++)
            {
                int l_230[4] = {0xBEFCDEB6L,0xBEFCDEB6L,0xBEFCDEB6L,0xBEFCDEB6L};
                unsigned *l_243 = &g_12;
                int *l_251 = &l_162[1];
                unsigned *l_268 = &g_12;
                int i;
            }
            l_203 = &l_115;

            ;
            for (g_99 = 0; (g_99 <= 8); g_99 = safe_add_func_int32_t_s_s(g_99, 5))
            {
                int *l_294 = &g_61;
                union U0 **l_296 = (void*)0;
                union U0 **l_297 = &l_295;
                l_294 = l_294;
                (*l_297) = l_295;
            }
            l_144 = &l_115;

            ;
        }

        ;
        ;
        ;
        (*l_144) = ((safe_rshift_func_uint16_t_u_s(((*g_121) = (*g_121)), (*l_144))) || ((*l_225) = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_304 == ((*l_306) = (void*)0)), 3)), ((*l_307) &= ((*g_121) = (!(*l_144)))))) != (l_308 == ((*l_203) == (l_309 && 0x0304D74AL))))));

        ;
        (*l_144) = 0x268208D1L;
    }
    else
    {
        int * const l_310 = (void*)0;
        int **l_311 = &g_60;
        (*l_311) = l_310;
    }

    ;

    ;
    if (((-9L) && (g_152 & (p_32 < ((*l_314) = (safe_add_func_uint16_t_u_u(((*g_121) = (*g_121)), g_96[1])))))))
    {
        int l_317[4][8] = {{2L,0L,0L,2L,0L,0L,2L,0L},{2L,2L,1L,2L,2L,1L,2L,2L},{0L,2L,0L,0L,2L,0L,0L,2L},{2L,0L,0L,2L,0L,0L,2L,0L}};
        unsigned char *l_326 = &g_241[4][2];
        unsigned *l_327 = (void*)0;
        unsigned *l_328 = &g_12;
        unsigned *l_329[7][10] = {{&g_330,&g_330,&g_330,(void*)0,(void*)0,&g_330,&g_330,&g_330,(void*)0,(void*)0},{&g_330,&g_330,&g_330,&g_330,(void*)0,&g_330,&g_330,&g_330,(void*)0,(void*)0},{(void*)0,&g_330,&g_330,(void*)0,&g_330,&g_330,&g_330,&g_330,&g_330,(void*)0},{&g_330,(void*)0,&g_330,(void*)0,&g_330,&g_330,(void*)0,&g_330,(void*)0,&g_330},{&g_330,(void*)0,&g_330,&g_330,(void*)0,(void*)0,(void*)0,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,(void*)0,(void*)0,&g_330,&g_330,&g_330,(void*)0,(void*)0},{(void*)0,(void*)0,&g_330,&g_330,&g_330,(void*)0,(void*)0,&g_330,&g_330,&g_330}};
        unsigned *l_331 = &g_330;
        unsigned char l_332 = 254UL;
        int l_333 = 0x314DBC26L;
        const union U0 *l_345 = &g_245;
        unsigned char l_375 = 251UL;
        int i, j;
        l_333 = ((safe_add_func_uint16_t_u_u(65535UL, (l_317[2][3] || ((l_332 = func_39(&g_12, func_39(l_55, (*l_314), p_32, ((*l_331) = ((*l_328) &= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(p_32, (safe_rshift_func_uint8_t_u_u(((*l_326) = p_32), 3)))), (l_295 == (void*)0))), 0UL)))), l_55), g_245.f4, p_32, g_85)) >= p_32)))) | (*l_314));
        for (g_122 = 5; (g_122 < 60); ++g_122)
        {
            int *l_342 = &g_96[1];
            union U1 *l_343 = (void*)0;
            union U0 *l_346 = (void*)0;
            (*l_342) ^= (safe_mod_func_int16_t_s_s((~(safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_32, func_34(((func_34((l_333 && (*g_121)), &g_330, p_32, &g_330) != ((l_317[2][3] | l_333) < 0xAF31L)) < l_332), l_314, (*l_314), &g_330))), g_245.f4))), p_32));

            ;
            for (g_245.f3 = 0; (g_245.f3 <= 5); g_245.f3 += 1)
            {
                union U1 **l_344 = &l_343;
                int i, j;
                (*l_344) = l_343;
                (*l_342) = (l_345 == l_346);
                if (g_241[g_245.f3][g_245.f3])
                    break;
            }
            (*l_314) = (safe_lshift_func_uint8_t_u_u(l_317[1][4], p_32));
            if (p_32)
                continue;
        }
lbl_378:
        for (g_152 = (-22); (g_152 != 20); g_152++)
        {
            for (l_333 = 0; l_333 < 7; l_333 += 1)
            {
                l_33[l_333] = 0x914F165CL;
            }
            return l_327;


        }
        for (g_245.f4 = 0; (g_245.f4 <= 1); g_245.f4 += 1)
        {
            unsigned **l_351 = &g_254;
            short *l_353 = &g_245.f2;
            short **l_354 = &l_73;
            int *l_355[1];
            int i;
            for (i = 0; i < 1; i++)
                l_355[i] = &l_333;
            (*l_314) &= (g_96[g_245.f4] ^= (~0x4F618083L));
            l_94 ^= (((*l_314) &= g_96[g_245.f4]) > func_39(((*l_351) = l_331), (g_352[0][1][4] = g_241[1][4]), (((*l_354) = l_353) == (void*)0), p_32, &g_12));

            ;
            ;
            (*l_314) = func_39((*l_351), l_333, ((*l_314) = l_332), func_49(&g_330, l_329[2][7], (safe_add_func_int32_t_s_s((l_317[2][3] < ((safe_sub_func_uint8_t_u_u(g_352[0][1][4], (l_360[3] | (*g_121)))) || l_317[0][3])), l_332)), p_32, l_329[6][2]), (*l_351));
            for (g_100 = 0; (g_100 <= 1); g_100 += 1)
            {
                int l_363 = 6L;
                int i;
                (*l_314) = g_96[g_245.f4];
                l_363 |= (g_96[g_245.f4] = (safe_rshift_func_int8_t_s_s(1L, 5)));
                (*l_314) = (safe_sub_func_uint8_t_u_u(p_32, (safe_rshift_func_uint8_t_u_s(p_32, g_96[g_245.f4]))));
                if (p_32)
                    goto lbl_378;
            }
        }

    }
    else
    {
        union U1 * const l_381 = &g_382[1];
        int l_394 = 0xFE040A30L;
        unsigned *l_396 = &g_12;
        int l_398[1];
        int **l_401 = (void*)0;
        int **l_402 = (void*)0;
        int **l_403 = (void*)0;
        unsigned l_418 = 0UL;
        int *l_419 = &g_382[1].f2;
        int *l_420 = &g_61;
        unsigned char l_423[4][9][1] = {{{251UL},{1UL},{0x61L},{1UL},{251UL},{251UL},{1UL},{0x61L},{1UL}},{{251UL},{251UL},{1UL},{0x61L},{1UL},{251UL},{251UL},{1UL},{0x61L}},{{1UL},{251UL},{251UL},{1UL},{0x61L},{1UL},{251UL},{251UL},{1UL}},{{0x61L},{1UL},{251UL},{251UL},{1UL},{0x61L},{1UL},{251UL},{251UL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_398[i] = 2L;
        for (g_245.f3 = (-20); (g_245.f3 > 58); ++g_245.f3)
        {
            int l_386 = 0xF2A4D9E2L;
            unsigned *l_393[7];
            char *l_395 = &l_223;
            int i;
            for (i = 0; i < 7; i++)
                l_393[i] = (void*)0;
            l_383 = l_381;
            l_394 = (g_374 ^ (((*l_314) <= ((l_398[0] &= (l_386 != (safe_sub_func_int16_t_s_s(func_34((safe_mod_func_int16_t_s_s(p_32, func_34((safe_mod_func_uint16_t_u_u((!(0xC8L & func_49(&g_374, l_393[5], (p_32 != (((*l_395) = ((*l_314) < l_394)) & (*l_314))), l_394, l_396))), 1UL)), &g_374, (*g_85), &g_374))), l_396, p_32, g_397), g_100)))) >= 1L)) != p_32));

            ;
            for (g_152 = 0; (g_152 <= 57); g_152 = safe_add_func_uint8_t_u_u(g_152, 1))
            {
                return &g_374;


            }
        }
        l_314 = &l_398[0];

        ;
        if (((*l_419) = ((*l_314) = func_49(&g_12, l_314, ((*l_420) &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((0x8C7C0D02L > (*l_314)), (((((*g_121) = ((!(safe_sub_func_uint8_t_u_u((p_32 | (safe_lshift_func_int8_t_s_u(g_96[1], 2))), ((!((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_352[0][1][4] || (&l_396 == &g_397)), 2L)), p_32)) >= p_32)) ^ 1UL)))) <= l_418)) > p_32) < (*l_314)) ^ p_32))), (*l_314))), g_99))), l_421[2][0][3], l_396))))
        {
            int l_422 = 0x0AD72819L;
            (*l_420) ^= ((*l_314) = (*g_85));
            (*l_419) = l_422;
        }
        else
        {
            (*l_314) = l_423[0][3][0];
        }

        ;
        for (l_94 = 2; (l_94 >= 0); l_94 -= 1)
        {
            short l_424 = 4L;
            (*l_420) = ((*l_314) = (l_424 | p_32));
            for (g_245.f4 = 0; (g_245.f4 <= 2); g_245.f4 += 1)
            {
                return &g_12;


            }

        }
    }

    ;
    ;

    for (p_32 = 0; (p_32 <= 4); p_32 += 1)
    {
        unsigned **l_429 = &g_397;
        int *l_430 = &g_96[0];
        unsigned *l_450[5][1][9] = {{{&g_330,&g_12,&g_12,&g_12,&g_12,&g_330,&g_374,&g_330,&g_12}},{{&g_330,&g_374,&g_374,&g_330,&g_12,&g_12,&g_12,&g_330,&g_374}},{{&g_12,&g_12,&g_374,&g_12,&g_330,&g_12,&g_374,&g_12,&g_12}},{{&g_374,&g_330,&g_12,&g_12,&g_12,&g_330,&g_374,&g_374,&g_330}},{{&g_12,&g_330,&g_374,&g_330,&g_12,&g_12,&g_12,&g_12,&g_330}}};
        unsigned l_454 = 0UL;
        int i, j, k;
        for (g_245.f3 = 0; (g_245.f3 <= 0); g_245.f3 += 1)
        {
            int i;
            g_96[g_245.f3] = l_360[g_245.f3];
            return &g_12;


        }

        if (l_360[p_32])
            continue;
        (*l_430) = ((l_360[p_32] = (p_32 < (l_360[p_32] != g_241[8][5]))) >= (safe_add_func_uint16_t_u_u(func_34((~(safe_rshift_func_int8_t_s_u(0L, 2))), ((*l_429) = &g_374), (0xAC0DL || 65535UL), &g_330), g_382[1].f3)));

        ;
        ;
        for (g_330 = 0; (g_330 <= 60); g_330 = safe_add_func_int8_t_s_s(g_330, 1))
        {
            unsigned l_435 = 18446744073709551612UL;
            unsigned short *l_436 = &g_382[1].f3;
            int *l_437 = &g_382[1].f2;
            int l_458 = (-1L);
            for (g_245.f3 = 17; (g_245.f3 != 11); g_245.f3 = safe_sub_func_int8_t_s_s(g_245.f3, 8))
            {
                (*l_430) |= p_32;
                (*l_430) = p_32;
            }
            if (((0xDE8DL & g_12) | ((*l_436) = ((*g_121) = l_435))))
            {
                int **l_438 = &l_144;
                (*l_438) = (l_437 = &l_360[p_32]);

                ;
                ;
                if ((*l_430))
                {
                    (**l_438) &= (*l_430);
                }
                else
                {
                    (*l_437) = p_32;
                }
                for (g_12 = 1; (g_12 <= 4); g_12 += 1)
                {
                    unsigned ***l_439 = &l_429;
                    (*l_439) = &l_55;

                    ;
                }
            }
            else
            {
                unsigned l_442 = 0xE118DF4FL;
                unsigned **l_449 = &g_397;
                int l_451[5][4][9] = {{{0xF425049EL,(-10L),0xFBA7764CL,0x81BAFAF9L,8L,8L,(-10L),(-10L),0xDE2E0F4BL},{0L,(-10L),3L,0L,8L,3L,(-10L),0xDE2E0F4BL,(-10L)},{(-4L),0x4C83E276L,3L,(-10L),0x4C83E276L,(-1L),0L,(-1L),0x4C83E276L},{(-4L),(-10L),(-10L),(-4L),0xDE2E0F4BL,0x4C83E276L,0L,(-1L),(-10L)}},{{0L,0xDE2E0F4BL,8L,0x9C973EA4L,(-2L),0x4C83E276L,0L,0xDE2E0F4BL,0xDE2E0F4BL},{(-10L),(-1L),0xDE2E0F4BL,0x9C973EA4L,0xDE2E0F4BL,(-1L),(-10L),(-10L),(-1L)},{0x9C973EA4L,(-1L),8L,(-4L),0x4C83E276L,3L,(-10L),0x4C83E276L,(-1L)},{(-10L),0xDE2E0F4BL,(-10L),(-10L),8L,8L,(-10L),(-10L),0xDE2E0F4BL}},{{0L,(-10L),3L,0L,8L,3L,(-10L),0xDE2E0F4BL,(-10L)},{(-4L),0x4C83E276L,3L,(-10L),0x4C83E276L,(-1L),0L,(-1L),0x4C83E276L},{(-4L),(-10L),(-10L),(-4L),0xDE2E0F4BL,0x4C83E276L,0L,(-1L),(-10L)},{0L,8L,3L,(-10L),0xDE2E0F4BL,(-10L),(-10L),8L,8L}},{{(-4L),(-2L),8L,(-10L),8L,(-2L),(-4L),(-1L),(-2L)},{(-10L),(-2L),3L,0xFBA7764CL,(-10L),0x4C83E276L,0x9C973EA4L,(-10L),(-2L)},{(-4L),8L,(-1L),0x9C973EA4L,3L,3L,0x9C973EA4L,(-1L),8L},{0L,(-1L),0x4C83E276L,(-10L),3L,0x4C83E276L,(-4L),8L,(-1L)}},{{0xFBA7764CL,(-10L),0x4C83E276L,0x9C973EA4L,(-10L),(-2L),(-10L),(-2L),(-10L)},{0xFBA7764CL,(-1L),(-1L),0xFBA7764CL,8L,(-10L),0L,(-2L),(-1L)},{0L,8L,3L,(-10L),0xDE2E0F4BL,(-10L),(-10L),8L,8L},{(-4L),(-2L),8L,(-10L),8L,(-2L),(-4L),(-1L),(-2L)}}};
                int *l_452 = (void*)0;
                int l_453 = 1L;
                int *l_457 = &g_99;
                int i, j, k;
                l_453 ^= (4294967288UL > (!((((~p_32) != (safe_mul_func_uint16_t_u_u(l_442, (*l_430)))) < ((*l_436) |= ((l_451[3][0][0] &= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_32, (safe_mul_func_int16_t_s_s(l_442, (6UL > g_122))))), func_39(((*l_449) = &g_330), p_32, p_32, p_32, l_450[0][0][3])))) | 0L))) <= (-6L))));

                ;
                ;
                if (l_454)
                    break;
                l_360[p_32] ^= (p_32 & ((*l_430) <= func_34(g_245.f4, (*l_449), (safe_rshift_func_uint16_t_u_u((*g_121), (+(func_49(&g_330, &g_374, ((*l_457) &= (-1L)), p_32, (*l_449)) >= p_32)))), &g_330)));

                ;
            }

            ;
            l_458 &= (((*l_430) |= 8L) <= p_32);
        }

        ;
        ;
        ;
    }


    return &g_374;


}







static short func_34(int p_35, unsigned * p_36, int p_37, unsigned * p_38)
{
    int **l_72 = &g_60;
    g_61 = (safe_mul_func_int8_t_s_s((((*l_72) = (void*)0) == (void*)0), (g_61 ^ (((-9L) && ((g_64[3] >= ((*p_36) ^ (*p_36))) >= (0UL < p_35))) > 4294967294UL))));

    ;
    return g_12;
}







static unsigned func_39(unsigned * const p_40, int p_41, char p_42, const unsigned p_43, unsigned * p_44)
{
    unsigned short l_63 = 0x7A83L;
    int l_66 = 0xFFC5A258L;
    if (l_63)
    {
        for (l_63 = 0; (l_63 <= 5); l_63 += 1)
        {
            int *l_65[5] = {&g_61,&g_61,&g_61,&g_61,&g_61};
            int i;
            l_66 = ((g_64[l_63] != 0x07L) | 0xB96BC97DL);
            return g_64[5];
        }
        return (*p_40);
    }
    else
    {
        for (g_61 = 0; (g_61 >= 26); g_61++)
        {
            int **l_69 = &g_60;
            (*l_69) = p_44;


        }


    }


    g_60 = &g_61;

    ;
    return g_64[5];
}







static int func_49(unsigned * p_50, unsigned * p_51, int p_52, int p_53, unsigned * p_54)
{
    unsigned char l_58[4];
    int l_62 = (-7L);
    int i;
    for (i = 0; i < 4; i++)
        l_58[i] = 0x96L;
    for (p_53 = 3; (p_53 >= 0); p_53 -= 1)
    {
        int *l_59 = &g_2;
        int i;
        g_60 = l_59;

        ;
        return l_58[p_53];
    }
    return l_62;
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
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_241[i][j], "g_241[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_245.f2, "g_245.f2", print_hash_value);
    transparent_crc(g_245.f3, "g_245.f3", print_hash_value);
    transparent_crc(g_245.f4, "g_245.f4", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_352[i][j][k], "g_352[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_382[i].f0, "g_382[i].f0", print_hash_value);
        transparent_crc(g_382[i].f1, "g_382[i].f1", print_hash_value);
        transparent_crc(g_382[i].f3, "g_382[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_737[i][j].f1, "g_737[i][j].f1", print_hash_value);
            transparent_crc(g_737[i][j].f2, "g_737[i][j].f2", print_hash_value);
            transparent_crc(g_737[i][j].f3, "g_737[i][j].f3", print_hash_value);
            transparent_crc(g_737[i][j].f4, "g_737[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_790[i][j][k], "g_790[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1300.f0, "g_1300.f0", print_hash_value);
    transparent_crc(g_1300.f1, "g_1300.f1", print_hash_value);
    transparent_crc(g_1300.f3, "g_1300.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
