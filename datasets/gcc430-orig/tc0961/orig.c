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



static int g_3 = 0x6CDEAD9BL;
static int g_27 = 9L;
static int g_28[3] = {1L,1L,1L};
static int *g_49 = &g_3;
static int **g_48 = &g_49;
static int g_132 = 0xEF0A2812L;
static char g_134[1][2] = {{0x8EL,0x8EL}};
static unsigned g_155 = 0x7CC4F2F6L;
static unsigned short g_160 = 1UL;
static unsigned g_232 = 4294967287UL;
static int g_257 = 0L;
static unsigned g_275 = 0x56EAE445L;
static int g_295 = 9L;
static unsigned short g_413 = 0x615AL;
static const int *g_438 = &g_27;
static char g_482 = 0x3FL;
static char g_491 = 4L;
static char g_577 = 0x34L;
static int *g_660 = &g_27;
static unsigned g_686 = 18446744073709551615UL;
static int g_864 = 0x9BE016CAL;
static short g_1049 = 0xAF5AL;
static int g_1064 = (-7L);



static int func_1(void);
static char func_14(int p_15, char p_16, unsigned short p_17, const unsigned p_18, unsigned p_19);
static int func_22(unsigned p_23, int p_24);
static unsigned char func_34(int * p_35, int p_36, unsigned p_37, const unsigned p_38, char p_39);
static int ** func_40(unsigned short p_41, unsigned p_42, unsigned short p_43, unsigned char p_44);
static int func_56(const int ** const p_57, int p_58, unsigned p_59, unsigned short p_60, const int * p_61);
static const int ** func_62(int p_63, unsigned p_64);
static unsigned func_84(unsigned char p_85, int * p_86, int * p_87, char p_88, int * p_89);
static int func_95(unsigned short p_96, int * p_97, int ** p_98, const int * p_99);
static unsigned func_100(char p_101, int ** const * p_102);
static int func_1(void)
{
    int l_2[4][3][7] = {{{0xB63E8E1BL,0x85B7F37CL,1L,1L,0x85B7F37CL,0xB63E8E1BL,0xD15DE05DL},{0L,(-1L),0xE5A60D00L,0xE5A60D00L,(-1L),0L,0x8E56F9B2L},{0xB63E8E1BL,0x85B7F37CL,1L,1L,0x85B7F37CL,0xB63E8E1BL,0xD15DE05DL}},{{0L,(-1L),0xE5A60D00L,0xE5A60D00L,(-1L),0L,0x8E56F9B2L},{0xB63E8E1BL,0x85B7F37CL,1L,1L,0x85B7F37CL,0xB63E8E1BL,0xD15DE05DL},{0L,(-1L),0xE5A60D00L,0xE5A60D00L,(-1L),0L,(-1L)}},{{0x85B7F37CL,0xD15DE05DL,0xD8C45CDBL,0xD8C45CDBL,0xD15DE05DL,0x85B7F37CL,0x10B999FBL},{(-1L),0x8E56F9B2L,(-1L),(-1L),0x8E56F9B2L,(-1L),(-1L)},{0x85B7F37CL,0xD15DE05DL,0xD8C45CDBL,0xD8C45CDBL,0xD15DE05DL,0x85B7F37CL,0x10B999FBL}},{{(-1L),0x8E56F9B2L,(-1L),(-1L),0x8E56F9B2L,(-1L),(-1L)},{0x85B7F37CL,0xD15DE05DL,0xD8C45CDBL,0xD8C45CDBL,0xD15DE05DL,0x85B7F37CL,0x10B999FBL},{(-1L),0x8E56F9B2L,(-1L),(-1L),0x8E56F9B2L,(-1L),(-1L)}}};
    int l_1050 = 5L;
    unsigned short l_1062 = 0x370FL;
    int ** const *l_1063 = (void*)0;
    int i, j, k;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        unsigned l_20 = 1UL;
        int l_21 = 0xEB5EA28CL;
        unsigned char l_1014 = 255UL;
        unsigned l_1026[7][3][1] = {{{0x21298B0EL},{18446744073709551615UL},{0x21298B0EL}},{{18446744073709551610UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551610UL},{0x21298B0EL},{18446744073709551615UL}},{{0x21298B0EL},{18446744073709551610UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551610UL},{0x21298B0EL}},{{18446744073709551615UL},{0x21298B0EL},{18446744073709551610UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551610UL}}};
        int ***l_1043 = (void*)0;
        int i, j, k;
        l_1014 |= ((safe_sub_func_int32_t_s_s(g_3, (((safe_sub_func_int32_t_s_s(g_3, (l_2[0][2][1] , (g_3 == (safe_sub_func_int32_t_s_s((g_3 | g_3), 0xFE24307AL)))))) >= (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(func_14(g_3, (l_20 ^ g_3), l_2[2][1][1], l_20, l_21), 255UL)), 0xADL))) == 0x47L))) > l_20);
        (*g_660) = (-1L);
        for (l_20 = 0; (l_20 <= 2); l_20 += 1)
        {
            unsigned short l_1024 = 0x4C51L;
            int **l_1025 = &g_660;
            int l_1037 = (-9L);
            const int * const l_1048 = &g_132;
            (*g_48) = &l_21;

            ;
            for (g_295 = 2; (g_295 >= 0); g_295 -= 1)
            {
                short l_1015 = 0xD332L;
                int ** const *l_1032 = &g_48;
                int i, j, k;
                (*g_48) = &l_2[(g_295 + 1)][g_295][g_3];

                ;
                if ((+((l_1015 >= ((((((l_2[0][0][5] , g_864) | (((1L | g_864) >= (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_295, (((safe_add_func_uint32_t_u_u(l_1024, (l_1025 == (void*)0))) > l_21) && g_686))), l_1026[6][1][0])), g_155))) && 1UL)) > (**g_48)) > g_160) | g_28[2]) <= l_2[3][0][4])) == (-5L))))
                {
                    unsigned l_1031 = 0UL;
                    l_21 &= (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((((*g_660) & (((func_100(l_1031, &g_48) , (((&l_1025 == l_1032) , ((***l_1032) != (-6L))) != ((safe_mul_func_int16_t_s_s(g_134[0][0], (**l_1025))) , 8L))) , (void*)0) == (void*)0)) || g_577) , g_413), (**g_48))), g_491));
                    for (g_864 = 0; (g_864 != (-26)); g_864--)
                    {
                        l_2[0][1][0] |= (*g_660);
                        return l_2[3][0][6];


                    }
                    return g_155;


                }
                else
                {
                    int **l_1042 = &g_660;
                    (**l_1025) = 0xE17B35E9L;
                    (**l_1042) = (l_1037 , (safe_div_func_uint8_t_u_u((func_22(((safe_rshift_func_uint8_t_u_u(g_155, (g_27 >= (l_1042 == (void*)0)))) , (((void*)0 == l_1043) != ((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((*g_48) != l_1048), 4294967287UL)) < 0L), (-4L))) != g_1049))), (**l_1042)) == 0x3157L), g_28[2])));
                    (**l_1032) = (*g_48);
                }
                if ((**l_1025))
                    break;
            }

            ;
        }


        l_1050 ^= (l_2[3][1][2] <= g_134[0][0]);
    }


    (*g_48) = &l_1050;

    ;
    for (g_491 = (-27); (g_491 != 3); g_491 = safe_add_func_int16_t_s_s(g_491, 6))
    {
        unsigned l_1055[1];
        int **l_1077 = &g_49;
        unsigned char l_1078 = 0x10L;
        int i;
        for (i = 0; i < 1; i++)
            l_1055[i] = 0xDCF02B69L;
        (**g_48) = (func_22((safe_rshift_func_uint8_t_u_s(0x07L, l_1055[0])), ((l_2[0][0][1] | (func_100(((g_27 , ((l_1050 & 0x50E2L) ^ ((safe_mod_func_uint16_t_u_u(0xC1FFL, (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_1062, (((*g_48) == (*g_48)) , l_1062))), 0x0C318046L)))) & g_686))) >= (*g_49)), l_1063) & g_1064)) ^ (*g_438))) , (**g_48));
        (**g_48) = (((l_1055[0] , (safe_lshift_func_int8_t_s_u(0xEAL, ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_14(l_1055[0], g_1064, (safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((8UL & (safe_lshift_func_int16_t_s_s(l_1055[0], (l_1055[0] , ((((g_28[0] == g_132) | 0L) , (void*)0) == l_1077))))), l_1078)) , g_27), (-3L))), g_275, g_134[0][1]), g_1064)), (**l_1077))) ^ 0x64CC4E74L)))) <= (**l_1077)) == g_491);
        for (g_1064 = 0; (g_1064 >= 0); g_1064 -= 1)
        {
            (*g_48) = (*g_48);
        }
        (**l_1077) = ((((safe_div_func_int32_t_s_s(((**l_1077) || g_155), l_1062)) && 0x63B4L) & (**l_1077)) | (&l_1077 == l_1063));
    }
    return g_864;


}







static char func_14(int p_15, char p_16, unsigned short p_17, const unsigned p_18, unsigned p_19)
{
    int l_25 = 0x7B88CDF8L;
    int *l_26 = &g_27;
    int ** const *l_816[4] = {&g_48,&g_48,&g_48,&g_48};
    int l_908 = 0x59B942D7L;
    int l_933 = 3L;
    unsigned char l_961 = 0x44L;
    int i;
    (*l_26) |= func_22(l_25, (~p_18));
    for (p_17 = 0; (p_17 <= 2); p_17 += 1)
    {
        int *l_31 = &g_3;
        int i;
    }
    (*l_26) = (*g_438);
    for (g_160 = (-20); (g_160 == 3); g_160++)
    {
        unsigned short l_755 = 65535UL;
        int **l_758 = &l_26;
        int l_764 = 7L;
        unsigned l_874[6];
        char l_875 = 1L;
        int i;
        for (i = 0; i < 6; i++)
            l_874[i] = 0xEC6FC3B2L;
    }
    return p_19;
}







static int func_22(unsigned p_23, int p_24)
{
    return g_3;
}







static unsigned char func_34(int * p_35, int p_36, unsigned p_37, const unsigned p_38, char p_39)
{
    int l_45 = 0L;
    int ***l_50 = &g_48;
    unsigned char l_53[8] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
    int *l_720 = &g_295;
    int i;
    (*l_50) = func_40(p_38, p_38, l_45, g_3);
    for (p_39 = 0; (p_39 != (-7)); --p_39)
    {
        int *l_54[5][2][2] = {{{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_3,&g_3}}};
        int ***l_718[6][10][4] = {{{(void*)0,(void*)0,&g_48,(void*)0},{&g_48,(void*)0,(void*)0,(void*)0},{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,(void*)0},{(void*)0,(void*)0,&g_48,(void*)0},{&g_48,(void*)0,(void*)0,&g_48},{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,(void*)0},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,(void*)0}},{{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,(void*)0},{&g_48,&g_48,&g_48,(void*)0},{&g_48,&g_48,(void*)0,&g_48},{&g_48,(void*)0,&g_48,&g_48},{(void*)0,(void*)0,(void*)0,&g_48},{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,(void*)0,&g_48}},{{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,(void*)0,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48},{&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{(void*)0,(void*)0,&g_48,&g_48},{&g_48,&g_48,&g_48,(void*)0},{&g_48,&g_48,&g_48,(void*)0},{&g_48,&g_48,&g_48,&g_48}},{{&g_48,(void*)0,(void*)0,(void*)0},{&g_48,&g_48,&g_48,&g_48},{&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,(void*)0,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48}},{{(void*)0,&g_48,(void*)0,(void*)0},{&g_48,&g_48,(void*)0,&g_48},{(void*)0,&g_48,(void*)0,&g_48},{(void*)0,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,(void*)0},{(void*)0,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,(void*)0},{&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48}},{{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,&g_48},{&g_48,&g_48,(void*)0,(void*)0},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48},{&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,(void*)0,(void*)0}}};
        int i, j, k;
        for (p_37 = 0; (p_37 <= 7); p_37 += 1)
        {
            unsigned l_55 = 0xF3C25A1BL;
            short l_77 = 0x490EL;
            const short l_78 = 4L;
            int **l_688 = &l_54[1][0][0];
            const unsigned l_691 = 9UL;
            const unsigned l_723 = 4294967293UL;
            int i;
            for (p_36 = 1; (p_36 <= 7); p_36 += 1)
            {
                const int *l_449 = &l_45;
                int l_679 = 1L;
                int i;
                for (l_45 = 7; (l_45 >= 2); l_45 -= 1)
                {
                    int i;
                    if (l_53[l_45])
                        break;
                    (**l_50) = l_54[1][0][0];

                    ;
                }
                if (l_53[p_36])
                    break;
                if (((l_55 , ((func_56(func_62(func_22((p_36 ^ (safe_mod_func_int32_t_s_s(((0x9900L > ((safe_mod_func_int16_t_s_s(p_36, p_39)) | ((!((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((func_22((&g_49 != (void*)0), g_3) < 0x1B63E3B6L) <= p_39), 0x4FL)), l_53[p_36])) , l_55), 0UL)), g_28[2])) , l_77)) < g_27))) == l_78), p_38))), g_28[2]), g_28[1]), p_37, g_3, p_37, l_449) , (void*)0) == (void*)0)) <= g_577))
                {
                    for (g_232 = 20; (g_232 != 46); g_232 = safe_add_func_uint16_t_u_u(g_232, 7))
                    {
                        if ((*g_660))
                            break;
                    }
                    if ((*p_35))
                    {
                        l_679 &= (*g_660);
                        l_45 = (*p_35);
                    }
                    else
                    {
                        unsigned l_687 = 0x93498FE5L;
                        int l_692[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_692[i] = 0L;
                        l_679 = ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x23D3L, (((safe_mod_func_int8_t_s_s(((((g_686 | 4L) > p_38) >= ((p_37 & func_22(l_687, l_687)) == (&p_35 != l_688))) == p_37), g_686)) & g_482) == p_36))), (*p_35))) , (*p_35));
                        l_692[0] |= (safe_rshift_func_uint8_t_u_u((0L == l_691), g_155));
                    }
                    l_45 = (*p_35);
                }
                else
                {
                    (**l_50) = (*g_48);
                }
                for (l_45 = (-17); (l_45 <= 22); l_45++)
                {
                    return g_155;


                }
            }
            if ((safe_mod_func_uint8_t_u_u(l_53[p_37], ((((safe_div_func_int16_t_s_s(l_53[p_37], 0x2B4FL)) == g_28[0]) , (safe_rshift_func_int16_t_s_s(((void*)0 != &g_48), g_132))) , g_134[0][0]))))
            {
                if ((*p_35))
                    break;
            }
            else
            {
                int ***l_701 = &l_688;
                int l_721[8] = {0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL,0x1FFC9D4CL};
                int i;
                p_36 ^= ((void*)0 != l_701);
                g_132 = (-1L);
                for (p_36 = 1; (p_36 == (-30)); p_36--)
                {
                    unsigned char l_722 = 0x4FL;
                    if ((*p_35))
                    {
                        short l_719 = (-7L);
                        (*l_720) ^= (safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((*g_438), (safe_mod_func_int8_t_s_s(func_95(((((((safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((g_155 >= (g_28[0] || (((p_37 | (safe_lshift_func_int8_t_s_u((l_718[5][4][3] == (void*)0), 5))) , &p_36) != (((func_22(l_719, p_39) < l_719) , p_36) , l_720)))), g_257)) | l_721[7]) >= l_719), 9UL)) & g_3) && 255UL) || l_722) == 250UL) == l_719), (*g_48), &g_49, (**l_701)), l_723)))) && g_482), 4));
                        return g_132;


                    }
                    else
                    {
                        (**l_50) = &p_36;

                        ;
                    }

                    ;
                    (*l_720) &= l_77;
                    if (l_722)
                        continue;
                    if (l_722)
                        break;
                }

                ;
            }

            ;
            for (g_257 = 0; (g_257 < (-15)); --g_257)
            {
                char l_728 = 0x48L;
                unsigned char l_729 = 0x23L;
                int *l_744 = &l_45;
                for (g_155 = 0; (g_155 >= 23); g_155++)
                {
                    int *** const l_734 = &l_688;
                    if (l_728)
                        break;
                }
            }
            return g_160;


        }
    }

    ;
    return (*l_720);


}







static int ** func_40(unsigned short p_41, unsigned p_42, unsigned short p_43, unsigned char p_44)
{
    int *l_47 = (void*)0;
    int **l_46 = &l_47;
    return g_48;


}







static int func_56(const int ** const p_57, int p_58, unsigned p_59, unsigned short p_60, const int * p_61)
{
    unsigned l_452 = 0xCB792CD1L;
    int *l_453 = (void*)0;
    unsigned l_457 = 0xA229762AL;
    int l_458[2];
    char l_487 = 0xD0L;
    unsigned l_492 = 0x3E13CB00L;
    unsigned l_497[5] = {6UL,6UL,6UL,6UL,6UL};
    int l_498 = 0x595E78FDL;
    int ** const *l_552 = &g_48;
    int l_569 = 0xDCC2655FL;
    unsigned short l_630 = 0xA42DL;
    int l_631[10];
    int l_653 = 0x8637718BL;
    int *l_661 = &g_295;
    int l_676 = 0x1C22A243L;
    int i;
    for (i = 0; i < 2; i++)
        l_458[i] = (-1L);
    for (i = 0; i < 10; i++)
        l_631[i] = 0x17B992FFL;
    if ((safe_mod_func_uint32_t_u_u(l_452, 3UL)))
    {
        const int *l_456[4] = {&g_132,&g_132,&g_132,&g_132};
        int i;
        (*g_48) = l_453;

        ;
        (*p_57) = (*p_57);
        l_458[0] |= ((!0UL) != ((((g_232 >= ((g_155 , (safe_mul_func_uint16_t_u_u((p_59 < func_95(g_275, (*g_48), &g_49, l_456[0])), l_452))) , g_28[0])) , l_457) , p_59) < 0xFAB55B46L));
    }
    else
    {
        unsigned l_463 = 0x5FCF6166L;
        int l_473[7] = {6L,6L,6L,6L,6L,6L,6L};
        int l_488 = (-1L);
        const int **l_522 = &g_438;
        const int ***l_521 = &l_522;
        unsigned l_523 = 0x1767AF3AL;
        const short l_537[2][5] = {{1L,0x04FEL,0x3F1EL,0x04FEL,1L},{1L,0x04FEL,0x3F1EL,0x04FEL,1L}};
        int l_578[10];
        int ** const *l_597 = (void*)0;
        unsigned l_608[3];
        unsigned char l_643 = 0UL;
        int l_659 = 7L;
        int i, j;
        for (i = 0; i < 10; i++)
            l_578[i] = 0x7DEC948FL;
        for (i = 0; i < 3; i++)
            l_608[i] = 0x67F9B9FBL;
        for (g_160 = 0; (g_160 <= 0); g_160 += 1)
        {
            char l_493 = 0x5AL;
            int *l_494 = &l_458[0];
            char l_504[1][9][3] = {{{0x3DL,0L,0L},{(-10L),(-1L),(-10L)},{0x3DL,0x3DL,0L},{0L,(-1L),0L},{0x3DL,0L,0L},{(-10L),(-1L),(-10L)},{0x3DL,0x3DL,0L},{0L,(-1L),0L},{0x3DL,0L,0L}}};
            int ** const *l_520 = &g_48;
            const int l_532 = (-1L);
            const unsigned l_551 = 0x38E7E735L;
            int i, j, k;
            for (g_275 = 0; (g_275 <= 0); g_275 += 1)
            {
                int *l_474 = &g_132;
                int i, j;
                (*l_474) = (safe_mod_func_uint16_t_u_u(g_134[g_275][g_275], (((func_22(p_59, g_134[g_275][g_275]) == ((safe_mod_func_uint16_t_u_u(g_413, (l_463 , (safe_mod_func_uint32_t_u_u(((0x36BCL ^ (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_unary_minus_func_uint32_t_u(p_59)) == ((safe_mod_func_uint32_t_u_u((p_58 , 0x57EE0AC2L), g_134[g_275][g_275])) != g_413)) < g_134[0][0]) , g_28[1]), 0x75D6L)), 0x0FL))) > 0x42L), l_473[0]))))) < 4294967295UL)) <= p_60) || g_275)));
                for (g_155 = (-8); (g_155 > 34); g_155++)
                {
                    if ((*p_61))
                        break;
                    (*l_474) = (&p_61 == (void*)0);
                }
                for (p_58 = 15; (p_58 > 5); p_58--)
                {
                    int *l_481 = &g_132;
                    for (l_463 = 21; (l_463 >= 30); l_463++)
                    {
                        (*g_48) = l_481;

                        ;
                    }
                    return g_482;
                }
            }
            (*l_494) = (((~l_463) , (g_295 != (~(safe_mod_func_int16_t_s_s((65533UL == ((safe_sub_func_uint32_t_u_u((func_22(g_275, (((l_487 && l_473[2]) < l_488) && (safe_div_func_uint32_t_u_u(((g_491 , ((p_59 != p_60) || l_492)) <= 0xC2AD8B43L), l_493)))) , 0x1BF4CB5FL), 0x8FC29F0AL)) , p_59)), p_58))))) >= l_493);
        }
        if (((((void*)0 != (*l_552)) , &l_522) != (void*)0))
        {
            int *l_634 = &l_578[9];
            (*l_634) = ((safe_div_func_uint8_t_u_u(g_134[0][0], 0xF0L)) & (&p_57 == &g_48));
            if ((((p_60 , func_100((***l_521), l_552)) & (~9L)) , (0x39L ^ (safe_mod_func_uint32_t_u_u(g_160, (safe_div_func_uint32_t_u_u(((**l_522) >= ((((safe_add_func_uint32_t_u_u((**l_522), p_58)) , g_491) ^ p_58) <= 0xE6L)), p_59)))))))
            {
                int *l_644 = (void*)0;
                for (l_457 = 0; (l_457 == 55); l_457 = safe_add_func_int32_t_s_s(l_457, 5))
                {
                    unsigned short l_654 = 0x4B1FL;
                    g_295 ^= (0x351BL > ((p_59 | g_577) <= (((0x55L | (func_22(func_22((p_60 , func_95(g_134[0][0], (**l_552), func_40(p_59, func_22(p_58, (***l_521)), p_58, p_58), (*g_48))), g_482), l_643) , p_60)) >= p_60) < 1L)));
                    (*g_48) = l_644;

                    ;
                    l_654 = ((((func_100((!((l_458[0] ^ (safe_div_func_uint32_t_u_u(((func_95((~(*l_634)), (*g_48), &l_644, (*g_48)) , (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((**l_522), g_155)), (((safe_add_func_int16_t_s_s(((~p_59) ^ (*g_438)), g_577)) , &p_57) == &g_48)))) > g_155), (*l_634)))) , l_653)), l_597) | 0xCD970CB7L) , p_58) , (*l_552)) == &p_61);
                }
            }
            else
            {
                int *l_662 = &g_295;
                (*l_634) = ((+((void*)0 == &g_438)) >= (g_577 , (((0xE0E9L < ((0x4995L == func_84((safe_mod_func_uint16_t_u_u((func_22((safe_rshift_func_uint8_t_u_s(((*l_634) < (*l_634)), 7)), l_659) >= g_27), g_134[0][0])), g_660, l_661, g_413, l_662)) == 6L)) , g_134[0][0]) | g_28[1])));
                (**l_552) = (**l_552);
                (*l_661) = (*p_61);
            }
        }
        else
        {
            int ***l_673[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            (*l_661) = (safe_div_func_uint16_t_u_u(g_577, ((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0x517A7377L, (safe_div_func_uint16_t_u_u(g_577, (0xEFB74714L && (**p_57)))))), (safe_mul_func_int8_t_s_s(g_132, (func_22((l_673[0] != &p_57), p_58) < 9UL))))) , (void*)0) == &g_660) & g_3)));
        }
    }
    (*l_661) |= (safe_mul_func_int8_t_s_s(p_59, l_676));
    return (*p_61);
}







static const int ** func_62(int p_63, unsigned p_64)
{
    unsigned char l_81 = 255UL;
    const int **l_94 = (void*)0;
    const int ***l_93 = &l_94;
    int **l_191 = &g_49;
    int *l_193 = &g_27;
    int l_440 = 2L;
    for (p_63 = 0; (p_63 > (-15)); p_63 = safe_sub_func_uint32_t_u_u(p_63, 2))
    {
        unsigned l_92 = 3UL;
        int ** const *l_103 = (void*)0;
        int *l_194 = &g_3;
        l_440 = (l_81 != (((safe_mod_func_uint32_t_u_u(func_84((safe_add_func_int32_t_s_s((l_92 , (func_22(((-1L) ^ ((void*)0 != l_93)), func_95(l_92, (((func_100(g_3, l_103) , &l_94) != (void*)0) , (void*)0), l_191, (*g_48))) <= l_92)), g_28[0])), &g_3, l_193, p_63, l_194), p_63)) != (*l_194)) < g_28[1]));
    }
    for (g_295 = 0; (g_295 < (-20)); --g_295)
    {
        int l_447[5] = {1L,1L,1L,1L,1L};
        int *l_448 = &g_132;
        int i;
        (*l_448) &= (((g_232 == p_64) , (safe_add_func_int8_t_s_s(p_64, ((((-10L) <= (safe_mod_func_uint8_t_u_u((2L ^ (&g_48 != ((((p_63 <= (0x741CL | ((!4294967292UL) >= l_447[2]))) || l_447[3]) == p_63) , &g_48))), 0xCBL))) | p_64) , g_3)))) , 9L);
    }
    return &g_438;


}







static unsigned func_84(unsigned char p_85, int * p_86, int * p_87, char p_88, int * p_89)
{
    short l_201[5][7][4] = {{{0xE91FL,(-4L),0x828CL,3L},{0L,0xDABFL,(-9L),0xDFD8L},{(-10L),0x26B0L,0xE653L,0x5CEBL},{0x74B8L,0xB9C6L,0x2533L,9L},{1L,0L,(-1L),(-4L)},{0xFC3AL,0x1F2EL,0x9E17L,(-1L)},{0x601FL,0x9E17L,0L,0xCA42L}},{{(-4L),0x5374L,(-4L),1L},{(-2L),0xFA72L,0xE74CL,(-8L)},{0x1F2EL,0xEEADL,(-10L),0xFA72L},{(-1L),(-4L),(-10L),(-4L)},{0x1F2EL,8L,0xE74CL,0L},{(-2L),(-9L),(-4L),0x00CCL},{(-4L),0x00CCL,0L,(-6L)}},{{0x601FL,0xCB6CL,0x9E17L,(-2L)},{0xFC3AL,3L,(-1L),0x2533L},{1L,3L,0x2533L,0xCB6CL},{0x74B8L,1L,0x1807L,0xE653L},{9L,(-10L),0x1F2EL,0x2533L},{1L,9L,0xDFD8L,(-1L)},{(-6L),0xEEADL,0xE91FL,0x9E17L}},{{0x5374L,1L,(-1L),0L},{(-4L),0xB9C6L,0xB9C6L,(-4L)},{0x5CEBL,0xDFD8L,0x00CCL,0xE74CL},{(-1L),0x601FL,1L,(-10L)},{5L,0L,0x5374L,(-10L)},{0x17D0L,0x601FL,0x9C68L,0xE74CL},{0x828CL,0xDFD8L,0L,(-4L)}},{{3L,0xB9C6L,0xCB6CL,0L},{(-4L),1L,(-2L),0x9E17L},{0L,0xEEADL,(-8L),(-1L)},{0x1F2EL,9L,0xFC3AL,0x2533L},{(-8L),(-10L),0x26B0L,0xE653L},{0xFBF1L,0x9C68L,0L,(-9L)},{(-9L),0L,8L,0x828CL}}};
    int *l_202 = &g_132;
    int ** const *l_209 = &g_48;
    unsigned l_255 = 0xBA4A9376L;
    unsigned l_289[9] = {0x4264CA55L,18446744073709551615UL,0x4264CA55L,18446744073709551615UL,0x4264CA55L,18446744073709551615UL,0x4264CA55L,18446744073709551615UL,0x4264CA55L};
    char l_297 = 0xD9L;
    int **l_340[3];
    char l_366 = 0x89L;
    int l_434[7];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_340[i] = &g_49;
    for (i = 0; i < 7; i++)
        l_434[i] = 0xCFCC655CL;
    (*l_202) = ((safe_lshift_func_int16_t_s_s((g_134[0][0] <= (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((0L || p_85), l_201[1][5][0])), l_201[0][6][1]))), 5)) , 0xDFF747F2L);
    if (p_85)
        goto lbl_203;
lbl_203:
    (*g_48) = (*g_48);
    if ((safe_lshift_func_uint16_t_u_u(p_88, 3)))
    {
        short l_224[8] = {9L,7L,7L,9L,7L,7L,9L,7L};
        const int *l_241 = &g_132;
        int l_276 = 0x044646C5L;
        int ***l_288[9];
        char l_290 = (-7L);
        int i;
        for (i = 0; i < 9; i++)
            l_288[i] = &g_48;
        for (p_88 = 0; (p_88 > (-25)); p_88 = safe_sub_func_uint16_t_u_u(p_88, 8))
        {
            return p_85;
        }
        if ((*l_202))
        {
            int *l_208 = &g_132;
            (*g_48) = l_208;

            ;
            (**g_48) = func_100((((4L >= func_100(p_88, l_209)) && p_85) , (((safe_mul_func_int16_t_s_s(((&g_49 == &g_49) ^ p_88), (p_88 , 0x0580L))) || p_88) || 0L)), &g_48);
        }
        else
        {
            int * const l_222[5][1][7] = {{{(void*)0,(void*)0,&g_3,(void*)0,(void*)0,&g_3,(void*)0}},{{&g_27,&g_3,&g_3,&g_132,&g_3,&g_3,&g_132}},{{&g_3,&g_27,&g_3,&g_3,&g_27,&g_3,&g_3}},{{&g_132,&g_132,&g_27,&g_132,&g_132,&g_27,&g_132}},{{&g_27,&g_3,&g_3,&g_27,&g_3,&g_3,&g_27}}};
            int *l_225[6][6];
            char l_239[9] = {0xC1L,0x2CL,0xC1L,0xC1L,0x2CL,0xC1L,0xC1L,0x2CL,0xC1L};
            int ** const *l_270 = &g_48;
            int ***l_274 = &g_48;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 6; j++)
                    l_225[i][j] = &g_132;
            }
            for (g_155 = 0; (g_155 >= 15); g_155++)
            {
                unsigned char l_223 = 0x67L;
                for (p_88 = (-11); (p_88 >= (-30)); --p_88)
                {
                    for (g_160 = 0; (g_160 >= 18); ++g_160)
                    {
                        if ((*p_86))
                            break;
                        l_223 |= (((void*)0 == &g_48) || (safe_add_func_uint16_t_u_u(0xD4EFL, (safe_mul_func_int8_t_s_s((l_222[2][0][5] == (void*)0), 0x1FL)))));
                        (**l_209) = (void*)0;

                        ;
                    }
                    if (l_224[5])
                    {
                        l_225[5][5] = (*g_48);
                    }
                    else
                    {
                        (*l_202) |= ((((0xE4L ^ (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_155, 2L)), 0))) || 4294967287UL) , func_22(g_3, g_27)) , l_223);
                        if ((*p_89))
                            continue;
                    }
                }
            }


            for (g_132 = 0; (g_132 > 6); ++g_132)
            {
                return g_232;
            }
            for (g_160 = 0; (g_160 >= 14); g_160 = safe_add_func_uint16_t_u_u(g_160, 1))
            {
                short l_252 = (-10L);
                int ** const *l_256 = &g_48;
                int *l_271 = &g_27;
                if ((*p_89))
                    break;
                for (g_232 = (-2); (g_232 < 23); g_232 = safe_add_func_uint16_t_u_u(g_232, 3))
                {
                    unsigned short l_240 = 65526UL;
                    for (g_155 = 0; (g_155 < 1); g_155 = safe_add_func_uint8_t_u_u(g_155, 5))
                    {
                        l_240 |= l_239[1];
                        if ((*p_86))
                            continue;
                    }
                    if (func_95(p_85, p_89, &p_89, l_241))
                    {
                        unsigned l_258 = 0UL;
                        (*l_202) = (((void*)0 != &g_48) >= (g_27 == g_134[0][0]));
                        (**l_209) = (void*)0;

                        ;
                        g_257 &= (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((g_27 || (safe_add_func_int16_t_s_s(l_252, (safe_lshift_func_int16_t_s_u(l_255, 12))))) , p_85) != (((p_88 & func_100((0x2A262BF9L ^ (func_22(p_88, (((void*)0 == &p_87) , p_88)) , 0xABC46375L)), l_256)) || g_232) <= (-2L))) ^ 255UL), 15)), p_88)) ^ g_27), g_28[2]));
                        l_258 = (p_85 == (*p_87));
                    }
                    else
                    {
                        int l_269 = 0x0D747A76L;
                        (*l_202) = (((safe_add_func_uint32_t_u_u(func_100((func_95((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((~(p_85 | ((g_132 == (safe_sub_func_uint8_t_u_u(p_85, func_22((g_3 , (safe_mod_func_int8_t_s_s((-1L), p_88))), ((*p_86) || 3L))))) && 0L))), l_269)) > (*p_87)), p_85)), p_87, &g_49, (**l_256)) ^ p_88), l_270), 0xC293D81AL)) , p_86) == l_271);
                        return (*l_241);
                    }

                    ;

                    return g_134[0][1];
                }
            }
            g_275 &= ((9UL >= g_132) ^ (((safe_rshift_func_uint8_t_u_u((g_160 >= g_3), ((p_85 < (func_22(((*l_202) , ((((((g_3 , &g_48) != (func_22((*l_241), g_28[0]) , l_274)) && 251UL) ^ (*p_87)) , g_155) , 0UL)), g_257) || (*l_241))) ^ 0L))) || 65526UL) & (*l_241)));
        }
        l_276 = ((p_88 , &g_49) != &g_49);
        (*l_202) = (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_88 , ((+(0xCBL >= (((0xA7L | (safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u((g_3 == (*p_86)), ((((((p_88 & (&g_48 != ((safe_unary_minus_func_uint32_t_u((((g_132 != (*p_87)) == p_85) <= 0x68L))) , l_288[2]))) & (*p_86)) & g_275) && g_134[0][1]) || l_289[5]) | 2L))) , g_134[0][0]) < g_275) , 0x53795DC2L), l_290))) && 1UL) < (*l_241)))) | (*p_89))), p_88)), 0x41L));
    }
    else
    {
        unsigned l_320[3];
        int *l_354 = &g_27;
        int ***l_364 = (void*)0;
        char l_395 = 0x94L;
        int i;
        for (i = 0; i < 3; i++)
            l_320[i] = 0x62D915F2L;
        for (g_257 = 0; (g_257 >= (-11)); g_257 = safe_sub_func_uint32_t_u_u(g_257, 2))
        {
            unsigned char l_307 = 255UL;
            int *l_308 = &g_132;
            const char l_341 = 1L;
            int ** const *l_356 = &l_340[2];
            for (g_160 = 0; (g_160 != 10); ++g_160)
            {
                int *l_300[8] = {&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295};
                short l_309[5][3][6] = {{{2L,7L,0x97BBL,(-7L),0x80D6L,0L},{(-1L),0x7AC9L,0x413DL,(-4L),(-4L),0x413DL},{(-6L),(-6L),(-4L),1L,0x1C71L,8L}},{{3L,0x80D6L,0xAA90L,0L,(-8L),(-4L)},{0L,3L,0xAA90L,7L,(-6L),8L},{(-7L),7L,(-4L),0L,(-7L),0x413DL}},{{0L,(-7L),0x413DL,1L,(-1L),0L},{0x7041L,0L,0x97BBL,1L,0x97BBL,0L},{0x97BBL,0x7AC9L,0L,8L,1L,1L}},{{0xF8BFL,8L,0xDAF5L,0xAA90L,(-1L),2L},{0L,8L,0xDEA9L,(-7L),1L,0x280AL},{0x84E6L,7L,0L,0x9955L,8L,0x7AC9L}},{{2L,0x07ABL,0L,(-1L),0xAA90L,(-7L)},{0x9955L,3L,8L,8L,3L,0x9955L},{0L,0x9955L,(-3L),0xAA90L,0xF8BFL,0x07ABL}}};
                int ***l_323 = &g_48;
                unsigned l_339 = 0xDDD172D4L;
                int i, j, k;
                for (g_132 = 0; (g_132 <= 0); g_132 += 1)
                {
                    short l_296 = (-1L);
                    int i, j;
                    for (g_155 = 0; (g_155 <= 3); g_155 += 1)
                    {
                        int i, j, k;
                        g_295 = (g_134[g_132][g_132] , g_134[g_132][(g_132 + 1)]);
                        l_296 = l_289[(g_155 + 5)];
                        p_89 = (*g_48);
                        l_297 = l_201[(g_132 + 4)][(g_155 + 2)][(g_132 + 2)];
                    }
                    if ((((safe_sub_func_uint16_t_u_u((g_134[g_132][(g_132 + 1)] , ((((l_300[0] != ((safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((g_134[g_132][g_132] & g_134[g_132][(g_132 + 1)]) ^ g_134[g_132][(g_132 + 1)]) > ((&p_89 != &p_89) , l_307)), (p_85 != 1L))) > p_85), 65527UL)) , (void*)0) == &g_49), l_307)) , l_308)) | 0x310EL) , g_134[0][0]) & l_309[4][2][3])), g_28[2])) & 6L) | (*p_86)))
                    {
                        g_295 = func_22(g_275, func_22((safe_mul_func_uint16_t_u_u(0x6BE4L, ((g_134[0][0] <= (g_160 > l_296)) | ((safe_lshift_func_int8_t_s_u(0x37L, 4)) == ((&g_49 == ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((((((func_22(l_320[2], func_22((safe_mul_func_uint8_t_u_u(((void*)0 == l_323), g_134[0][0])), g_232)) >= 0x88L) & p_88) >= l_296) , p_88) && p_88) >= 255UL), (-8L))) | g_132), (*l_308))) , &p_87)) | 4294967293UL))))), g_257));
                    }
                    else
                    {
                        (**l_323) = (*g_48);
                    }
                    g_295 = (((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(p_85, p_85)) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(0x6FL, 3)), (l_320[2] != func_22((g_134[0][0] == func_22(p_88, p_85)), p_85))))), 8L)) <= 0x34L) || g_134[g_132][(g_132 + 1)]);
                    for (l_255 = 0; (l_255 <= 0); l_255 += 1)
                    {
                        unsigned l_332 = 9UL;
                        int l_342 = 0x4996438BL;
                        if ((*p_87))
                            break;
                        l_342 = ((l_332 == func_22((safe_sub_func_uint16_t_u_u(l_320[2], p_85)), (((safe_add_func_int8_t_s_s(g_134[g_132][(g_132 + 1)], p_85)) , (((safe_lshift_func_int16_t_s_s((l_332 > l_339), (((l_296 == (((*g_48) != (void*)0) < p_88)) , l_340[2]) == (void*)0))) || l_341) | 253UL)) , p_85))) == p_85);
                        if (g_28[0])
                            continue;
                    }
                }
                for (g_295 = 1; (g_295 >= 20); g_295 = safe_add_func_int16_t_s_s(g_295, 1))
                {
                    char l_349 = (-1L);
                    (*g_48) = (*g_48);
                    (*l_308) &= (-10L);
                    for (g_155 = 0; (g_155 < 39); ++g_155)
                    {
                        int l_355 = 0x8D473569L;
                        (**l_209) = (*g_48);
                        (*l_308) = (((safe_mod_func_int8_t_s_s(g_3, l_349)) , p_85) <= func_100((safe_mod_func_int8_t_s_s((((-1L) || (((((((7UL == (g_160 != (safe_mod_func_uint8_t_u_u(((func_95(g_257, l_354, func_40(l_355, p_85, l_355, l_355), p_87) , 0x57FDL) != g_232), g_275)))) & p_85) ^ p_88) , p_85) < g_27) >= g_295) != 0x22L)) <= (*p_87)), p_88)), l_356));
                    }
                    (*l_323) = func_40(p_88, (&g_49 == (void*)0), (g_232 >= 0xFA734033L), func_100(g_275, l_323));
                }
            }
        }


        if (func_22((*l_202), g_27))
        {
            unsigned l_365 = 0x36928767L;
            int l_414 = 8L;
            for (g_155 = (-4); (g_155 <= 44); ++g_155)
            {
                unsigned char l_361 = 255UL;
                int l_396 = 0xE0BB2F9CL;
                for (g_232 = 0; (g_232 >= 36); g_232++)
                {
                    if (l_361)
                        break;
                }
            }
            l_414 = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(func_95(p_85, (func_22((safe_mul_func_int8_t_s_s(p_88, (safe_mod_func_int32_t_s_s(((~(safe_add_func_int8_t_s_s(8L, ((safe_lshift_func_int16_t_s_s(0x0326L, 8)) ^ l_365)))) > (safe_mod_func_uint32_t_u_u(4294967295UL, ((safe_sub_func_int8_t_s_s((-7L), ((1UL < (func_22(g_295, p_85) && g_160)) , p_88))) , 0xBD5D1643L)))), g_295)))), g_257) , (*g_48)), &g_49, (*g_48)), p_85)), (*l_354))) , g_413);
        }
        else
        {
            int ** const *l_427 = &l_340[2];
            (**l_209) = p_87;

            ;
            g_295 = func_22((safe_div_func_uint8_t_u_u((func_22((func_100((safe_mod_func_uint16_t_u_u(((***l_209) || (***l_209)), (g_295 , (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s(255UL, (2L > 7L))) | (safe_add_func_int16_t_s_s(func_22((safe_lshift_func_uint16_t_u_u(p_88, p_88)), p_88), 1UL))) <= g_160), p_88))))), l_427) , (***l_427)), g_413) > 6L), p_85)), p_85);
            (*l_202) = func_100(g_3, ((safe_div_func_uint16_t_u_u(((((p_85 | ((**g_48) >= ((*l_209) == &g_49))) || (p_85 , ((((*g_49) > (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((***l_427), 0UL)) , 0x72L), p_88))) & 1L) <= g_275))) != 0x35956511L) || l_434[0]), (-1L))) , (void*)0));
        }
        for (l_395 = 0; (l_395 <= (-26)); l_395--)
        {
            short l_437 = (-1L);
            int l_439 = 0xE1099E26L;
            l_439 ^= func_95(l_437, (*g_48), &l_202, g_438);
            if ((*g_438))
                break;
        }


    }



    return p_88;
}







static int func_95(unsigned short p_96, int * p_97, int ** p_98, const int * p_99)
{
    unsigned short l_192[6] = {0xBC77L,0x153DL,0x153DL,0xBC77L,0x153DL,0x153DL};
    int i;
    l_192[0] = func_100(p_96, &g_48);
    (*p_98) = (*g_48);
    return p_96;
}







static unsigned func_100(char p_101, int ** const * p_102)
{
    unsigned char l_104 = 0xADL;
    int *l_123[4][1][2];
    int * const *l_125 = &l_123[2][0][1];
    int * const **l_124 = &l_125;
    int l_126 = 0L;
    int l_146 = 0x45A8A01FL;
    unsigned l_162 = 8UL;
    unsigned char l_165 = 5UL;
    int l_172 = 0x7FD144FBL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_123[i][j][k] = &g_3;
        }
    }
    if ((func_22(l_104, (((safe_sub_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((g_27 ^ (safe_sub_func_int8_t_s_s(p_101, ((safe_div_func_int8_t_s_s(g_3, (safe_div_func_int32_t_s_s(func_22(l_104, ((void*)0 == l_123[3][0][1])), 0xD98BCDAFL)))) > p_101)))) && 0x3EF0L), g_27)), 0x7AL)), 0x5FE41CD9L)), g_27)), g_28[1])) <= 0xFC83C047L), g_3)) , p_102) == l_124)) != 0xA349BDABL))
    {
        int *l_129 = &g_27;
        const int l_144[9][4] = {{(-1L),(-1L),(-1L),9L},{(-1L),(-1L),(-1L),0xC81A46AFL},{0xC81A46AFL,0x7C8792F5L,(-1L),(-1L)},{(-6L),(-1L),(-1L),(-6L)},{0xC81A46AFL,9L,(-1L),(-1L)},{(-1L),7L,(-1L),4L},{(-1L),4L,0L,4L},{(-1L),7L,0x7C8792F5L,(-1L)},{0x53257E1EL,9L,4L,(-6L)}};
        int l_145 = 1L;
        int i, j;
        for (p_101 = 0; (p_101 >= 0); p_101 -= 1)
        {
            int *l_133 = &g_132;
            int l_148[8][8][4] = {{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}},{{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL},{0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL,0xDFBC4F1BL}}};
            int i, j, k;
            if (l_126)
                break;
            for (l_104 = 0; (l_104 <= 0); l_104 += 1)
            {
                int **l_127 = &l_123[3][0][1];
                int l_128 = (-1L);
                (*l_127) = (**l_124);
                for (l_126 = 0; (l_126 <= 0); l_126 += 1)
                {
                    int i, j, k;
                    l_128 = 0x8CE927CFL;
                    (*l_127) = l_123[(l_104 + 1)][p_101][(l_126 + 1)];
                }
                (*l_127) = l_129;
                for (l_128 = 0; (l_128 >= 0); l_128 -= 1)
                {
                    int i, j, k;
                    g_132 ^= (safe_add_func_int8_t_s_s(g_28[1], g_27));
                    (*l_127) = l_123[l_104][l_128][(l_128 + 1)];
                    if (p_101)
                        break;
                }
                for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
                {
                    int l_147 = 0x2B4E2EDBL;
                    int i, j, k;
                    g_134[0][0] = ((((+(7L >= (l_123[(l_104 + 3)][l_104][l_104] != l_133))) , (void*)0) == (void*)0) >= p_101);
                    l_147 &= ((0xB26CL | (safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s((((*l_129) >= (**l_127)) >= ((((**l_127) && ((*l_133) && ((safe_unary_minus_func_int8_t_s(p_101)) , (safe_sub_func_int32_t_s_s(l_144[7][2], (l_145 , func_22(p_101, (*l_133)))))))) | (*l_133)) != 249UL)), (*l_133))) || 0L), (**l_127)))) == l_146);
                    l_148[3][5][0] |= (*l_133);
                    l_128 |= 0L;
                }
            }


            return (*l_129);
        }
        g_132 ^= (-1L);
    }
    else
    {
        int *l_161 = &g_3;
        int **l_163 = &l_123[3][0][1];
        g_132 &= ((safe_div_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_u(0UL, 2)) , ((safe_sub_func_uint16_t_u_u((g_155 ^ ((safe_mod_func_uint32_t_u_u(g_155, p_101)) >= ((safe_lshift_func_int8_t_s_s(((((0UL && (0x00L >= ((**l_125) != (((g_160 , l_161) != (*g_48)) , 9L)))) & (*l_161)) , g_155) == g_160), g_134[0][1])) , g_28[1]))), g_155)) <= 0x5070L)) && l_162) | 0x1A4FFB4BL) || 0x95L), (*l_161))) , (*l_161));
        if (g_160)
            goto lbl_164;
lbl_164:
        (*l_163) = (**l_124);
        l_165 |= (p_101 != g_27);
    }
    for (p_101 = 0; (p_101 > (-4)); p_101 = safe_sub_func_int32_t_s_s(p_101, 2))
    {
        unsigned l_170 = 0x82E1C061L;
        char l_171 = 0x96L;
        int l_188 = (-7L);
        if ((safe_mod_func_uint16_t_u_u(g_155, func_22((((func_22((0xEDEDAE18L || l_170), (l_170 < (((**l_125) & p_101) && (g_134[0][0] , l_171)))) >= 0L) && p_101) != 0UL), l_172))))
        {
            char l_177 = 0x73L;
            unsigned char l_182 = 4UL;
            int l_187 = 0x28B4A309L;
            l_188 &= (((**l_125) , (safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((+l_177) == g_3), g_160)) != (safe_lshift_func_int16_t_s_u((p_101 ^ g_27), 8))), ((((safe_mul_func_uint16_t_u_u((0x12C6L > func_22(l_182, (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(l_171, 0x83L)), (**l_125))))), g_134[0][0])) & g_27) , &l_125) == (void*)0)))) && l_187);
            for (l_104 = 0; (l_104 <= 36); l_104 = safe_add_func_int32_t_s_s(l_104, 9))
            {
                return p_101;
            }
            return p_101;
        }
        else
        {
            return l_188;
        }
    }
    return p_101;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_134[i][j], "g_134[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
