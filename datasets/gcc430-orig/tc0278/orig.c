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



static char g_11 = 1L;
static short g_13[8][2] = {{0xF889L,1L},{0x278CL,0xF889L},{(-1L),(-1L)},{(-1L),0xF889L},{0x278CL,1L},{0xF889L,1L},{0x278CL,0xF889L},{(-1L),(-1L)}};
static volatile short g_15 = 0xF157L;
static volatile short *g_14[1] = {&g_15};
static short g_21 = 0x051AL;
static int g_38 = 0x71D69170L;
static unsigned g_65 = 0x1AFC438FL;
static char g_73 = 0xB1L;
static short g_88 = (-5L);
static short *g_87 = &g_88;
static int g_91 = (-1L);
static short *g_99 = &g_88;
static long long g_108[10] = {0L,(-7L),(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L),0L};
static char g_110 = 0x02L;
static volatile int g_115 = 0x20CAD133L;
static unsigned g_117 = 18446744073709551610UL;
static int g_131[3] = {0x0EC6483DL,0x0EC6483DL,0x0EC6483DL};
static unsigned long long g_159 = 18446744073709551615UL;
static unsigned long long g_173 = 0xB0568AF3DB6E5CA0LL;
static char g_216 = 0x84L;
static int *g_220 = &g_91;
static volatile short g_249 = 0x43A1L;
static unsigned char g_312 = 1UL;
static short g_331 = 0x4F8BL;
static long long g_333 = (-1L);
static unsigned **g_436 = (void*)0;
static long long *g_462 = &g_108[5];
static long long **g_461 = &g_462;
static unsigned char g_498[7] = {0UL,4UL,0UL,0UL,4UL,0UL,0UL};
static unsigned short g_505 = 0UL;
static unsigned short g_528 = 0UL;
static unsigned char g_641[10] = {0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L};
static unsigned long long g_663 = 18446744073709551608UL;
static char **g_692 = (void*)0;
static unsigned char g_720[5][2][7] = {{{0x65L,3UL,3UL,0x65L,0xFEL,0UL,0xD1L},{0UL,0UL,0xF6L,0xFEL,0xFEL,0xF6L,0UL}},{{0xFEL,0UL,0xE3L,255UL,3UL,0xD1L,0xD1L},{0xE3L,0UL,0xFEL,0UL,0xE3L,255UL,3UL}},{{0xF6L,0UL,0UL,255UL,0x58L,255UL,0UL},{3UL,3UL,0x65L,0xFEL,0UL,0xD1L,0xF6L}},{{0xF6L,255UL,0x65L,0x65L,255UL,0xF6L,0x58L},{0xE3L,0x65L,0UL,0x58L,0UL,0UL,0x58L}},{{0xFEL,0xC7L,0xFEL,0xD1L,0x58L,0xE3L,0xF6L},{0UL,0x65L,0xE3L,0xD1L,0xE3L,0x65L,0UL}}};
static volatile int *g_758 = &g_115;
static unsigned long long g_768 = 0xBC8AF7248E48B3C6LL;
static unsigned char *g_824 = &g_720[4][0][2];
static unsigned char **g_823 = &g_824;
static unsigned long long g_826 = 18446744073709551615UL;
static char *g_851 = (void*)0;
static unsigned short g_854 = 65530UL;
static unsigned long long g_862 = 0xC5208E71D4814BCFLL;
static unsigned g_864 = 18446744073709551608UL;
static int g_876 = 0x1462E129L;
static unsigned g_933 = 18446744073709551615UL;
static unsigned g_934[7] = {0xD5E174C5L,0UL,0xD5E174C5L,0xD5E174C5L,0UL,0xD5E174C5L,0xD5E174C5L};
static volatile int g_975[3][9][7] = {{{0x07484D7FL,0x369E1185L,0x28D1DE7BL,0xA7DCF165L,1L,0x647B4B6EL,1L},{1L,0x647B4B6EL,8L,0xE7C59CB4L,0x6BBB95E0L,1L,(-7L)},{0xFE3E45A5L,0L,9L,0x3F7B34A1L,1L,0x4A96A307L,1L},{0L,0x7E66F38DL,0xC9EDC7BEL,0xA9E5D1FAL,0L,1L,9L},{1L,0xFBE7A78FL,1L,0x98FD6334L,(-4L),(-6L),1L},{0x1458D5D3L,1L,(-1L),4L,1L,8L,1L},{8L,0x1C1EC446L,0x1C1EC446L,8L,0xA5AEF1B6L,(-7L),0xE7C59CB4L},{1L,(-7L),1L,0x4A96A307L,0x369E1185L,0xE7C59CB4L,(-3L)},{0x8A81E6ABL,0x647B4B6EL,4L,1L,4L,0xA9E5D1FAL,0xE7C59CB4L}},{{0x6BBB95E0L,0x816B22F7L,0xFBE7A78FL,0x1AD8548EL,0xA9E5D1FAL,0x4D1EE134L,1L},{0x31434912L,0x2C18392EL,0xF46536C5L,(-3L),0xEB998F58L,0xE06A55D8L,1L},{0xCCCC2EC9L,0xB23D65C4L,0x31434912L,0xEB998F58L,1L,0x6BBB95E0L,9L},{0xE06A55D8L,(-1L),0x4D1EE134L,1L,0x9AA17109L,0xF46536C5L,1L},{0x1AD8548EL,0xE7C59CB4L,1L,0xCCCC2EC9L,1L,0x56ECDCB6L,(-9L)},{0x1AD8548EL,1L,0xA7DCF165L,(-1L),0x5D0AD28AL,8L,0xFE3E45A5L},{0xE06A55D8L,0xA7DCF165L,0xEB998F58L,8L,0xCCCC2EC9L,1L,4L},{0xCCCC2EC9L,(-9L),1L,9L,1L,0L,4L},{(-9L),0x28D1DE7BL,0x3F7B34A1L,0x3F7B34A1L,0x28D1DE7BL,(-9L),1L}},{{0x369E1185L,1L,1L,0xE06A55D8L,1L,0x3F7B34A1L,1L},{1L,0x4D1EE134L,5L,0x07484D7FL,0xEB998F58L,0xA5AEF1B6L,8L},{(-4L),1L,0xFBE7A78FL,(-1L),(-10L),0x2989AA1FL,1L},{0xE7C59CB4L,0x28D1DE7BL,0x56ECDCB6L,0x2989AA1FL,(-2L),8L,0x9AA17109L},{0xC9EDC7BEL,(-9L),8L,5L,0xB23D65C4L,0xA81DD634L,0x4A96A307L},{0x26912B13L,0xE06A55D8L,(-1L),0x4D1EE134L,1L,0x9AA17109L,0xF46536C5L},{0x1C1EC446L,1L,0xD36C431EL,(-1L),0xA81DD634L,0x816B22F7L,0x26912B13L},{0x36D23D3BL,0x7E66F38DL,0xD36C431EL,1L,(-9L),0xFBE7A78FL,(-7L)},{0xC74C9441L,0xD03CA93FL,(-1L),1L,9L,0xE7C59CB4L,1L}}};
static int *g_1099 = &g_91;
static unsigned long long g_1122 = 0xE1AD6C325BBDE5C8LL;
static int *g_1251 = &g_131[1];
static unsigned g_1260 = 4294967288UL;
static unsigned long long *g_1271 = &g_768;
static volatile unsigned char g_1307 = 0UL;
static int **g_1325 = (void*)0;
static unsigned ***g_1354 = &g_436;
static unsigned ****g_1353 = &g_1354;
static long long *g_1396 = &g_108[5];
static volatile char g_1436 = 1L;
static volatile short **g_1458[10][3] = {{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]},{&g_14[0],&g_14[0],&g_14[0]}};
static volatile short ***g_1457[3] = {&g_1458[8][2],&g_1458[8][2],&g_1458[8][2]};
static char g_1459 = 0xDCL;



static short func_1(void);
static unsigned char func_16(short p_17, unsigned short p_18, short * p_19);
static short func_22(unsigned short p_23, unsigned p_24, short p_25, short * p_26, int p_27);
static int * func_31(int * p_32, short * p_33, int * p_34, int p_35, int p_36);
static short * func_39(int p_40, int * p_41);
static short * func_42(short * p_43, char p_44, short * p_45, unsigned char p_46, unsigned p_47);
static short * func_48(short * p_49);
static int * func_55(unsigned p_56, unsigned short p_57, char p_58);
static char func_74(unsigned char p_75, char * p_76);
static char func_81(unsigned short p_82, unsigned p_83, short * p_84);
static short func_1(void)
{
    char l_6 = 0xADL;
    short *l_12[9] = {&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0],&g_13[3][0]};
    short *l_20 = &g_21;
    unsigned short l_1265 = 65535UL;
    unsigned *l_1277 = &g_934[5];
    unsigned long long *l_1280 = &g_826;
    int l_1314 = 1L;
    short *l_1442 = (void*)0;
    unsigned *l_1486 = &g_933;
    unsigned **l_1485 = &l_1486;
    int *l_1498[5][9][2] = {{{&g_38,&l_1314},{&g_131[1],&g_38},{&g_91,&g_91},{&g_91,&g_131[2]},{&g_131[2],&l_1314},{&g_131[2],&g_131[1]},{(void*)0,&l_1314},{&l_1314,&g_38},{&g_131[1],&g_91}},{{&g_131[1],&g_38},{&g_91,(void*)0},{&l_1314,&g_91},{&l_1314,&g_131[1]},{&g_38,&g_131[1]},{&g_131[1],&g_131[1]},{&g_38,&g_131[1]},{&l_1314,&g_91},{&l_1314,(void*)0}},{{&g_91,&g_38},{&g_131[1],&g_91},{&g_131[1],&g_38},{&l_1314,&l_1314},{(void*)0,&g_131[1]},{&g_131[2],&l_1314},{&g_131[2],&g_131[2]},{&g_91,&g_91},{&g_91,&g_38}},{{&g_131[1],&l_1314},{&g_38,&g_131[1]},{&g_38,&g_38},{&g_38,&g_131[1]},{&g_38,&l_1314},{&g_131[1],&g_38},{&g_91,&g_91},{&g_91,&g_131[2]},{&g_131[2],&l_1314}},{{&g_131[1],&g_91},{&g_131[1],&g_91},{&l_1314,&g_38},{&l_1314,&g_38},{(void*)0,&g_38},{&g_91,&g_131[1]},{&g_131[1],&g_38},{&g_91,&l_1314},{&g_38,(void*)0}}};
    unsigned long long l_1515 = 18446744073709551613UL;
    char l_1529 = 1L;
    unsigned l_1542 = 6UL;
    unsigned short l_1568 = 65535UL;
    unsigned long long l_1628 = 0UL;
    int i, j, k;
    if (((safe_add_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((l_6 ^ (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((g_13[3][0] = (0x72L >= (l_6 > g_11))) != (((void*)0 == g_14[0]) != l_6)), (!0x25L))) != func_16((g_11 != l_6), l_6, l_20)) ^ g_768), g_826))), 0x706AL)) && l_1265) != l_1265) & 1UL), g_933)) > l_6))
    {
        int **l_1266 = &g_220;
        int *l_1328 = &g_876;
        int **l_1327 = &l_1328;
        (*l_1266) = &g_38;

        ;
        for (l_6 = (-19); (l_6 <= (-5)); l_6++)
        {
            unsigned long long **l_1281 = (void*)0;
            unsigned long long **l_1282 = &l_1280;
            int l_1283 = 0xABEBDA55L;
            char ***l_1313[5];
            int ***l_1326 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_1313[i] = &g_692;
            for (g_826 = (-24); (g_826 != 17); g_826 = safe_add_func_uint64_t_u_u(g_826, 1))
            {
                char *l_1275 = &g_216;
                for (g_854 = 0; (g_854 <= 8); g_854 += 1)
                {
                    unsigned long long **l_1272 = &g_1271;
                    int l_1274 = 0xB261CC37L;
                    int l_1276 = 0x469AE06CL;
                    (*l_1266) = &g_91;

                    ;
                    if ((*g_1099))
                        break;
                }
            }
            if ((((l_1277 == &g_934[5]) < (+(safe_add_func_uint8_t_u_u(((((*l_1282) = l_1280) == &g_862) | 0xC2L), (*g_824))))) <= (l_1283 = (**l_1266))))
            {
                unsigned l_1303[9][7][4] = {{{0xC2BE32F7L,0xC2BE32F7L,4UL,0UL},{0x5E7D2FF7L,4UL,0UL,0x4BB57860L},{0UL,1UL,1UL,0UL},{0UL,1UL,0xC2BE32F7L,0x4BB57860L},{1UL,4UL,1UL,0UL},{1UL,0xC2BE32F7L,4294967292UL,0UL},{0UL,1UL,0UL,0xC2BE32F7L}},{{0x4BB57860L,3UL,0UL,0x67D39FB5L},{0UL,4294967292UL,4294967292UL,0UL},{1UL,0x4BB57860L,1UL,4UL},{1UL,4UL,0xC2BE32F7L,3UL},{0UL,5UL,1UL,3UL},{0UL,4UL,0UL,4UL},{0x5E7D2FF7L,0x4BB57860L,4UL,0UL}},{{0xC2BE32F7L,4294967292UL,0UL,0x67D39FB5L},{5UL,3UL,0x67D39FB5L,0xC2BE32F7L},{5UL,1UL,0UL,0UL},{0xC2BE32F7L,0xC2BE32F7L,4UL,0UL},{0x5E7D2FF7L,4UL,0UL,0x4BB57860L},{0UL,1UL,4294967292UL,0xC2BE32F7L},{0xC2BE32F7L,0UL,4UL,0UL}},{{0UL,0xD0C8B406L,0UL,0x5E7D2FF7L},{0UL,4UL,1UL,0x67D39FB5L},{0x4BB57860L,0UL,0x5E7D2FF7L,4UL},{0UL,4UL,0x5E7D2FF7L,1UL},{0x4BB57860L,1UL,1UL,0x4BB57860L},{0UL,0UL,0UL,5UL},{0UL,5UL,4UL,4UL}},{{0xC2BE32F7L,3UL,4294967292UL,4UL},{0x67D39FB5L,5UL,0xC2BE32F7L,5UL},{0UL,0UL,0xD0C8B406L,0x4BB57860L},{4UL,1UL,0x67D39FB5L,1UL},{3UL,4UL,1UL,4UL},{3UL,0UL,0x67D39FB5L,0x67D39FB5L},{4UL,4UL,0xD0C8B406L,0x5E7D2FF7L}},{{0UL,0xD0C8B406L,0xC2BE32F7L,0UL},{0x67D39FB5L,0UL,4294967292UL,0xC2BE32F7L},{0xC2BE32F7L,0UL,4UL,0UL},{0UL,0xD0C8B406L,0UL,0x5E7D2FF7L},{0UL,4UL,1UL,0x67D39FB5L},{0x4BB57860L,0UL,0x5E7D2FF7L,4UL},{0UL,4UL,0x5E7D2FF7L,1UL}},{{0x4BB57860L,1UL,1UL,0x4BB57860L},{0UL,0UL,0xD0C8B406L,0xC2BE32F7L},{0xD0C8B406L,0xC2BE32F7L,0UL,5UL},{0x4BB57860L,4UL,0x67D39FB5L,5UL},{1UL,0xC2BE32F7L,0x4BB57860L,0xC2BE32F7L},{0UL,0UL,3UL,0x5E7D2FF7L},{0UL,1UL,1UL,0UL}},{{4UL,5UL,0UL,0UL},{4UL,4294967292UL,1UL,1UL},{0UL,0UL,3UL,1UL},{0UL,3UL,0x4BB57860L,0UL},{1UL,0xD0C8B406L,0x67D39FB5L,0x4BB57860L},{0x4BB57860L,0xD0C8B406L,0UL,0UL},{0xD0C8B406L,3UL,0xD0C8B406L,1UL}},{{4294967292UL,0UL,1UL,1UL},{0x5E7D2FF7L,4294967292UL,1UL,0UL},{0UL,5UL,1UL,0UL},{0x5E7D2FF7L,1UL,1UL,0x5E7D2FF7L},{4294967292UL,0UL,0xD0C8B406L,0xC2BE32F7L},{0xD0C8B406L,0xC2BE32F7L,0UL,5UL},{0x4BB57860L,4UL,0x67D39FB5L,5UL}}};
                int i, j, k;
                for (g_65 = (-30); (g_65 < 47); g_65 = safe_add_func_uint16_t_u_u(g_65, 6))
                {
                    unsigned l_1294 = 0xC28495E7L;
                    int *l_1300 = &g_876;
                    int **l_1299 = &l_1300;
                    char *l_1301 = &g_216;
                    long long l_1302 = 1L;
                    unsigned char l_1304 = 252UL;
                    int *l_1305 = &g_38;
                    int *l_1306 = &l_1283;
                    (*g_758) ^= (*g_1099);
                    if ((*g_758))
                        continue;
                }
                (**l_1266) |= (-7L);
            }
            else
            {
                unsigned char l_1322[5][3] = {{249UL,249UL,249UL},{4UL,4UL,4UL},{249UL,249UL,249UL},{4UL,4UL,4UL},{249UL,249UL,249UL}};
                long long *l_1323[3][7][1] = {{{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333}},{{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333}},{{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333},{&g_333}}};
                unsigned short *l_1324[10][1][4] = {{{(void*)0,&g_854,(void*)0,&g_528}},{{(void*)0,&g_528,&g_528,(void*)0}},{{&g_505,&g_528,(void*)0,&g_528}},{{&g_528,&g_854,(void*)0,(void*)0}},{{&g_505,&g_505,&g_528,(void*)0}},{{(void*)0,&g_854,(void*)0,&g_528}},{{(void*)0,&g_528,&g_528,(void*)0}},{{&g_505,&g_528,(void*)0,&g_528}},{{&g_528,&g_854,(void*)0,(void*)0}},{{&g_505,&g_505,&g_528,(void*)0}}};
                int i, j, k;
                (*g_220) = (safe_mul_func_uint16_t_u_u((l_1313[2] == (void*)0), l_1314));
                (*g_758) ^= (!((((void*)0 == &g_975[2][7][0]) >= (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u((-6L), 5)))) > ((g_333 = ((*g_462) = (l_1322[0][2] >= (0x1FE7C815L <= g_110)))) != func_81((g_505 = func_81(l_1322[0][2], l_1322[0][2], &g_88)), g_720[4][0][2], &g_13[3][0]))), l_1322[0][2]))) ^ 0x06801E327B312952LL));
                if ((*g_758))
                    continue;
            }
            l_1327 = g_1325;

            ;
        }

        ;
        ;
        (**l_1266) = (safe_lshift_func_int16_t_s_s(((*g_462) > (*g_1271)), 13));
    }
    else
    {
        int *l_1358 = &l_1314;
        unsigned **l_1382 = (void*)0;
        short *l_1412 = &g_13[4][1];
        for (g_65 = (-23); (g_65 <= 4); g_65 = safe_add_func_int16_t_s_s(g_65, 8))
        {
            char l_1336 = (-3L);
            char *l_1362 = &l_1336;
            unsigned l_1368 = 0x3186292BL;
            short *l_1381 = (void*)0;
            short *l_1413 = &g_331;
            for (g_862 = 0; (g_862 >= 42); ++g_862)
            {
                char l_1335 = (-8L);
                unsigned char **l_1339 = &g_824;
                int *l_1356 = &l_1314;
                (*g_758) = l_1335;
                if (l_1336)
                {
                    unsigned char l_1352[5][4];
                    int **l_1357[1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1352[i][j] = 0x58L;
                    }
                    for (i = 0; i < 1; i++)
                        l_1357[i] = &g_1099;
                    for (g_505 = (-2); (g_505 < 31); g_505 = safe_add_func_int64_t_s_s(g_505, 1))
                    {
                        unsigned ****l_1355 = (void*)0;
                        (*l_1356) = ((l_1339 == (void*)0) && (safe_rshift_func_uint16_t_u_s(g_15, ((safe_rshift_func_uint8_t_u_s(((*g_1271) <= (safe_mod_func_uint8_t_u_u((+((*g_824) = (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_108[5], (safe_mul_func_int16_t_s_s(func_81(g_641[6], l_1352[4][3], func_39(((g_1353 != l_1355) && l_1335), l_1356)), l_1352[4][3])))), 4)))), g_11))), l_6)) ^ l_1265))));
                    }
                    l_1358 = &g_38;

                    ;
                }
                else
                {
                    unsigned short l_1361 = 9UL;
                    int *l_1392[9] = {&g_131[2],&g_131[2],&g_131[2],&g_131[2],&g_131[2],&g_131[2],&g_131[2],&g_131[2],&g_131[2]};
                    int **l_1398 = &g_1251;
                    int i;
                    if (((safe_lshift_func_uint8_t_u_s((+(l_1314 ^= l_1361)), 0)) < ((*g_824) |= l_1336)))
                    {
                        int l_1367[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1367[i] = 0x644CBCBDL;
                        (*g_758) |= (((void*)0 != l_1362) <= ((*l_1358) &= (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((*g_462) = ((*g_1271) > (*g_462))), (*g_1271))), l_1367[4]))));
                        (*l_1356) = (((l_1368 & ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_73, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_1361, 9)), 3)))), l_1367[4])) && (safe_div_func_uint8_t_u_u((((-5L) && ((*l_1280) = (*l_1358))) <= ((+l_1367[2]) != func_81(g_934[1], g_768, l_1381))), (*l_1356))))) && 4294967288UL) | (*g_758));
                        (*g_1354) = l_1382;

                        ;
                        (*l_1356) = (safe_sub_func_int16_t_s_s(((*l_20) &= 0x9EC2L), (0L <= l_1314)));
                    }
                    else
                    {
                        char l_1391 = 0x96L;
                        int **l_1393 = &l_1358;
                        unsigned l_1397[4][5][10] = {{{0x3801A333L,0x0555B64CL,0xA6240AAAL,1UL,0x0555B64CL,4294967292UL,0x028ED241L,4294967292UL,0x0555B64CL,1UL},{0x36AAB9B6L,0x66DA6682L,0x36AAB9B6L,0xA6240AAAL,0x028ED241L,8UL,0xA6240AAAL,5UL,0UL,0x36AAB9B6L},{5UL,0x3801A333L,0UL,0x4AF7473FL,0x66DA6682L,0x69670B02L,5UL,0xA6240AAAL,0x4AF7473FL,4294967292UL},{0x0555B64CL,0UL,0UL,0x0555B64CL,0x69670B02L,0x08420960L,4294967292UL,7UL,0UL,0xA6240AAAL},{0x69670B02L,0xA6240AAAL,0UL,4294967294UL,4294967288UL,0UL,0UL,4294967292UL,0UL,0UL}},{{8UL,0x0555B64CL,1UL,0x0555B64CL,8UL,0x66DA6682L,0UL,8UL,0x4AF7473FL,4294967288UL},{4294967292UL,0x69670B02L,4294967294UL,8UL,0UL,0x08420960L,4294967288UL,0x69670B02L,0x69670B02L,4294967288UL},{7UL,8UL,0UL,0UL,8UL,7UL,4294967294UL,0x0555B64CL,0x08420960L,0UL},{0xA6240AAAL,4294967292UL,1UL,0UL,4294967288UL,1UL,0UL,0xA6240AAAL,0x3801A333L,0xA6240AAAL},{0xA6240AAAL,7UL,0x69670B02L,8UL,0x69670B02L,7UL,0xA6240AAAL,0UL,7UL,4294967292UL}},{{7UL,0xA6240AAAL,0UL,7UL,4294967292UL,0x08420960L,0x69670B02L,0x0555B64CL,0UL,0UL},{4294967292UL,0xA6240AAAL,0x66DA6682L,4294967288UL,4294967288UL,0x66DA6682L,0xA6240AAAL,4294967292UL,1UL,0UL},{8UL,7UL,0UL,0x36AAB9B6L,0UL,0x08420960L,8UL,0UL,0UL,0UL},{4294967294UL,4294967288UL,0UL,0UL,4294967292UL,0UL,0UL,4294967288UL,4294967294UL,0UL},{0x36AAB9B6L,0xA6240AAAL,0x028ED241L,8UL,0xA6240AAAL,5UL,0UL,0x36AAB9B6L,1UL,8UL}},{{0x0555B64CL,4294967294UL,7UL,8UL,0UL,0UL,8UL,7UL,4294967294UL,0x0555B64CL},{7UL,0x36AAB9B6L,4294967294UL,0UL,4294967288UL,0UL,7UL,0x0555B64CL,0UL,4294967294UL},{0x36AAB9B6L,0x0555B64CL,0x4AF7473FL,0x36AAB9B6L,4294967288UL,1UL,4294967288UL,0x36AAB9B6L,0x4AF7473FL,0x0555B64CL},{4294967288UL,7UL,0x08420960L,0UL,0UL,0x08420960L,0x0555B64CL,4294967294UL,7UL,8UL},{0UL,0x36AAB9B6L,0UL,0UL,0xA6240AAAL,0x08420960L,0x08420960L,0xA6240AAAL,0UL,0UL}}};
                        int i, j, k;
                        l_1391 ^= ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0xFDL, 2)), (safe_lshift_func_int8_t_s_s((*l_1358), l_1336)))) != l_6);
                        (*l_1393) = l_1392[8];

                        ;
                        l_1397[2][4][5] |= (safe_sub_func_int64_t_s_s(6L, ((*g_461) == (g_1396 = (*g_461)))));
                        if ((*g_1099))
                            break;
                    }
                    (*l_1398) = &l_1314;

                    ;
                    (*g_1251) |= (-6L);
                }
                for (g_216 = 0; (g_216 <= (-2)); --g_216)
                {
                    int **l_1401 = (void*)0;
                    int **l_1402 = &l_1356;
                    (*l_1402) = &g_91;

                    ;
                    if ((*l_1356))
                        break;
                    for (l_6 = 0; (l_6 < (-10)); l_6 = safe_sub_func_int32_t_s_s(l_6, 9))
                    {
                        volatile int **l_1405[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1405[i] = &g_758;
                        g_758 = &g_115;
                    }
                    (*l_1402) = &g_38;

                    ;
                }

                ;
            }
            (*g_758) ^= func_81((((0x51786DCAL < (safe_rshift_func_int8_t_s_u(((l_1314 == 0xE8B7ADFF584B3DB3LL) && 7UL), (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(6UL, (**g_823))), g_21))))) != ((*l_1358) || func_81(g_720[2][1][1], (*l_1358), l_1412))) < l_1368), g_1260, l_1413);
            for (g_876 = (-3); (g_876 <= 0); g_876++)
            {
                return l_1368;


            }
        }

        ;
        ;
    }

    ;



    ;
    ;
    ;
    for (g_117 = 0; (g_117 < 19); g_117 = safe_add_func_uint32_t_u_u(g_117, 8))
    {
        int l_1428[6][10] = {{0L,0x66ED10AAL,0x66ED10AAL,0L,(-1L),0L,0x66ED10AAL,0x66ED10AAL,0L,(-1L)},{0L,0x66ED10AAL,0x66ED10AAL,0L,(-1L),0L,0x66ED10AAL,0x66ED10AAL,0x66ED10AAL,0x1B63D68DL},{0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL,0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL},{0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL,0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL},{0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL,0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL},{0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL,0x66ED10AAL,0x6DDD5D31L,0x6DDD5D31L,0x66ED10AAL,0x1B63D68DL}};
        short **l_1455 = &l_1442;
        short ***l_1454 = &l_1455;
        int l_1464 = 0x4E5EE4EFL;
        unsigned *l_1484 = &g_117;
        unsigned **l_1483 = &l_1484;
        char *l_1555 = &g_11;
        long long l_1584 = 0x8FA4D98D79882BFCLL;
        long long l_1608 = 1L;
        int i, j;
    }
    (*g_758) = (*g_1099);
    return l_1628;


}







static unsigned char func_16(short p_17, unsigned short p_18, short * p_19)
{
    char l_28 = 0x3CL;
    char l_29 = 0x55L;
    short *l_30 = (void*)0;
    long long **l_1263[6][2][1] = {{{&g_462},{&g_462}},{{&g_462},{&g_462}},{{&g_462},{&g_462}},{{&g_462},{&g_462}},{{&g_462},{&g_462}},{{&g_462},{&g_462}}};
    long long ***l_1262 = &l_1263[2][0][0];
    int l_1264 = 0x8C13B801L;
    int i, j, k;
    l_1264 ^= ((func_22(l_28, g_11, l_29, l_30, l_28) != 1UL) | (l_1262 != (void*)0));

    ;



    ;
    ;
    ;
    return l_29;
}







static short func_22(unsigned short p_23, unsigned p_24, short p_25, short * p_26, int p_27)
{
    int *l_37[2];
    short *l_50 = &g_21;
    unsigned long long l_859 = 0xDA0231234F997932LL;
    unsigned char *l_860 = &g_720[1][1][5];
    unsigned *l_861 = &g_117;
    unsigned *l_863 = &g_864;
    short **l_872 = &g_87;
    short **l_873 = &g_99;
    short **l_874 = &l_50;
    int *l_875 = &g_876;
    int *l_889 = (void*)0;
    int **l_1249 = &l_37[1];
    int **l_1250[1][5][4] = {{{(void*)0,(void*)0,&g_220,&g_1099},{&g_220,&l_889,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_1099,&g_220},{&g_220,&l_889,&g_1099,&g_1099}}};
    unsigned char l_1261 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_37[i] = &g_38;
    g_1251 = ((*l_1249) = func_31(l_37[1], func_39(((*l_875) |= ((((*l_874) = ((*l_872) = func_42(func_48(l_50), l_859, &g_88, p_27, ((*l_863) = (g_862 = ((*l_861) &= ((*g_823) != l_860))))))) != g_14[0]) && g_73)), l_875), l_889, g_11, g_641[9]));


    ;
    ;



    ;
    ;
    ;
    (*g_758) = (1L || ((((*g_824) &= p_27) & 0x40L) <= ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_27, ((**g_461) <= (safe_sub_func_int32_t_s_s((*g_1099), (g_1260 &= (safe_rshift_func_int16_t_s_s(p_27, 0)))))))), ((!l_1261) < (p_25 == 0x3F342B40B141BD46LL)))) > g_108[4])));
    return p_25;
}







static int * func_31(int * p_32, short * p_33, int * p_34, int p_35, int p_36)
{
    unsigned char **l_890 = &g_824;
    unsigned char ***l_891 = &g_823;
    int *l_909 = &g_131[2];
    unsigned char l_920 = 0UL;
    char *l_972 = &g_73;
    long long ***l_1006 = &g_461;
    short *l_1046[8][7] = {{&g_331,(void*)0,&g_21,(void*)0,(void*)0,&g_21,(void*)0},{&g_331,(void*)0,&g_21,(void*)0,(void*)0,&g_21,(void*)0},{&g_331,(void*)0,&g_21,(void*)0,(void*)0,&g_21,(void*)0},{(void*)0,&g_88,&g_88,&g_21,&g_21,&g_88,&g_88},{(void*)0,&g_88,&g_88,&g_21,&g_21,&g_88,&g_88},{(void*)0,&g_88,&g_88,&g_21,&g_21,&g_88,&g_88},{(void*)0,&g_88,&g_88,&g_21,&g_21,&g_88,&g_88},{(void*)0,&g_88,&g_88,&g_21,&g_21,&g_88,&g_88}};
    char l_1047 = 0L;
    int l_1055 = 0xA2CAC16CL;
    char *l_1075 = &g_11;
    unsigned *l_1087[1];
    unsigned long long l_1096 = 18446744073709551614UL;
    char l_1124 = 0x24L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1087[i] = (void*)0;
    if ((l_890 == ((*l_891) = &g_824)))
    {
        unsigned l_892 = 3UL;
        int l_959[4][4] = {{7L,(-7L),0L,0xCF1DE8ECL},{0x29247AABL,(-7L),(-7L),0x29247AABL},{(-7L),0x29247AABL,7L,(-6L)},{(-7L),7L,(-7L),0L}};
        int l_960 = 0xE279E288L;
        char ***l_963 = &g_692;
        int *l_969 = (void*)0;
        unsigned char **l_976 = &g_824;
        short *l_1019[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_21,(void*)0,&g_21,(void*)0,&g_21}};
        int i, j;
        if (l_892)
        {
            char *l_897 = (void*)0;
            char *l_898 = &g_216;
            unsigned l_913[10];
            short *l_941 = (void*)0;
            unsigned ***l_957[7][5] = {{&g_436,(void*)0,(void*)0,&g_436,&g_436},{(void*)0,&g_436,(void*)0,&g_436,(void*)0},{&g_436,&g_436,(void*)0,(void*)0,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,(void*)0,(void*)0,&g_436,&g_436},{(void*)0,&g_436,(void*)0,&g_436,(void*)0},{&g_436,&g_436,(void*)0,(void*)0,&g_436}};
            int l_964 = 2L;
            int l_965 = 0L;
            int i, j;
            for (i = 0; i < 10; i++)
                l_913[i] = 0x7EDBA00CL;
            if ((safe_mod_func_int16_t_s_s(((*g_87) = (*p_33)), ((*g_758) && (safe_div_func_int8_t_s_s(((*l_898) = p_35), (safe_lshift_func_uint16_t_u_u(g_115, 11))))))))
            {
                unsigned l_908 = 0xC9CE1A2CL;
                int *l_911 = &g_131[0];
                short *l_932[10][7] = {{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&g_21,&g_331,(void*)0,(void*)0,(void*)0,(void*)0}};
                unsigned ***l_954 = &g_436;
                unsigned ****l_955 = (void*)0;
                unsigned ****l_956 = &l_954;
                unsigned long long *l_958[1][6][8] = {{{&g_768,&g_768,&g_663,&g_768,&g_768,&g_768,&g_768,&g_663},{&g_768,&g_768,&g_768,&g_663,&g_768,&g_768,&g_768,&g_768},{&g_826,&g_768,&g_768,&g_826,(void*)0,&g_826,&g_768,&g_768},{&g_768,&g_768,&g_768,&g_768,&g_768,&g_663,&g_768,&g_768},{(void*)0,&g_768,(void*)0,&g_663,&g_663,(void*)0,&g_768,(void*)0},{&g_826,&g_663,&g_768,&g_663,&g_826,&g_826,&g_663,&g_768}}};
                int **l_966 = &l_911;
                int i, j, k;
                for (g_663 = 7; (g_663 == 58); g_663 = safe_add_func_int8_t_s_s(g_663, 7))
                {
                    int *l_905 = (void*)0;
                    unsigned short *l_912 = &g_854;
                    for (g_333 = (-27); (g_333 > 19); g_333++)
                    {
                        int **l_910 = &l_909;
                        g_220 = l_905;

                        ;
                        (*g_758) = (safe_rshift_func_uint8_t_u_u((**g_823), (l_908 ^ g_826)));
                        (*l_910) = l_909;
                        return l_911;


                    }
                    l_913[8] ^= (((*l_912) = g_876) <= (*p_33));
                    for (g_110 = 13; (g_110 == 0); g_110 = safe_sub_func_uint8_t_u_u(g_110, 9))
                    {
                        long long ***l_931 = &g_461;
                        int l_935[8][1] = {{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L}};
                        int **l_936 = &l_905;
                        unsigned short **l_942 = (void*)0;
                        unsigned short **l_943 = &l_912;
                        int i, j;
                        (*l_911) = (safe_add_func_uint8_t_u_u((((~(safe_add_func_uint16_t_u_u((l_920 < (*l_909)), ((l_935[7][0] |= (safe_mul_func_int8_t_s_s(((*l_898) = (((+((*p_32) = (*l_909))) == (g_934[5] ^= (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((func_81(func_81(p_36, (0x98L < (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((*l_912) = (*l_911)), 10)), (5UL <= (0x0F6561F06BFA0517LL || (((*l_931) = &g_462) != &g_462)))))), p_33), g_312, l_932[3][3]) < p_35) > l_892), 0xEB7CL)), g_933)))) <= p_35)), (*g_824)))) ^ (*l_909))))) & (-1L)) > l_892), (*g_824)));
                        (*l_936) = p_34;

                        ;
                        (*l_936) = &g_131[2];

                        ;
                        (*l_909) = (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((**l_890) = (((*l_943) = &g_505) == &g_528)), (safe_mul_func_uint16_t_u_u(0x0440L, l_913[8])))), g_768));

                        ;
                    }

                    ;
                    ;
                }
                l_965 &= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((func_81(((safe_mod_func_uint8_t_u_u((l_964 |= ((*l_911) && ((safe_mul_func_uint16_t_u_u((((l_959[0][1] = (((*l_956) = l_954) != (l_957[5][2] = &g_436))) == (l_960 = 18446744073709551615UL)) >= (*p_33)), g_663)) | (safe_add_func_uint64_t_u_u((l_963 == (void*)0), ((*p_33) != l_892)))))), p_35)) <= (*l_909)), g_65, p_33) && 5UL), 10)) > (**g_823)), l_913[8]));
                (*l_966) = &g_38;

                ;
                l_959[0][1] ^= (safe_mul_func_int8_t_s_s((((**l_966) > (l_969 == &g_876)) & p_36), p_35));
            }
            else
            {
                int l_971 = 0xBF2CCBAFL;
                if ((*p_32))
                {
                    int **l_970 = &l_909;
                    (*l_970) = &l_965;

                    ;
                    (**l_970) &= l_971;
                    if (((**l_970) = func_74((**l_970), l_972)))
                    {
                        char **l_974 = &l_897;
                        char ***l_973 = &l_974;
                        (*l_973) = ((*l_963) = &g_851);

                        ;
                        ;
                    }
                    else
                    {
                        (*p_32) = g_975[2][7][0];
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    return &g_38;


                }

                ;
                ;
                ;
                ;
                g_823 = l_976;
            }

            ;
            ;
            ;
            (*p_32) = (*g_758);
            for (l_964 = 1; (l_964 >= 0); l_964 -= 1)
            {
                for (g_528 = 0; (g_528 <= 1); g_528 += 1)
                {
                    int i, j;
                    (*p_32) = ((*g_758) & ((void*)0 == g_436));
                    if (l_965)
                        break;
                    for (g_216 = 1; (g_216 >= 0); g_216 -= 1)
                    {
                        int i, j, k;
                        l_965 |= g_720[g_528][g_216][(g_216 + 3)];
                    }
                }
            }
        }
        else
        {
            unsigned long long *l_977 = &g_862;
            long long *l_980 = &g_333;
            int l_998 = (-3L);
            unsigned short *l_1024 = &g_505;
            short **l_1044 = &l_1019[1][3];
            short ***l_1043 = &l_1044;
            unsigned *l_1045 = &g_864;
            int **l_1048 = &g_220;
            (*p_32) = ((~((*l_977) = 0x8C258317C50F3B7CLL)) ^ 0x765373410480A828LL);
            for (g_73 = 26; (g_73 >= 19); g_73 = safe_sub_func_uint64_t_u_u(g_73, 8))
            {
                unsigned l_985 = 0x12B2088FL;
                char *l_987 = (void*)0;
                int *l_1020[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1020[i] = &g_131[1];
                if (((l_980 = (*g_461)) == (void*)0))
                {
                    char *l_986[7];
                    char l_991 = 9L;
                    volatile int **l_999 = &g_758;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_986[i] = &g_73;
                    (*p_32) = (safe_lshift_func_uint8_t_u_u(p_35, ((((((safe_div_func_uint64_t_u_u(g_876, (**g_461))) >= l_985) ^ ((*l_909) > (l_986[4] == l_987))) || (+((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(l_991)) >= func_74(p_36, l_987)), 5)) == 0x0776E6A9L))) > 4L) > (*l_909))));
                    for (p_36 = 0; (p_36 != 14); ++p_36)
                    {
                        int **l_994 = (void*)0;
                        int **l_995[2][8][5] = {{{&g_220,&l_909,&g_220,&l_909,&l_909},{&l_909,&g_220,&l_909,&g_220,&l_909},{&g_220,&l_909,&l_909,(void*)0,&l_909},{&l_909,&l_909,&l_909,&l_909,&l_909},{&l_909,&g_220,&g_220,&l_909,&l_909},{&g_220,&l_909,(void*)0,(void*)0,&l_909},{&l_909,&g_220,&l_909,&l_909,&l_909},{&g_220,&l_909,&g_220,(void*)0,&l_909}},{{(void*)0,&l_909,&l_909,&l_909,(void*)0},{&g_220,&g_220,&l_909,&l_909,&l_909},{&l_909,&l_909,&l_909,(void*)0,&g_220},{&g_220,&g_220,&g_220,&g_220,&l_909},{&l_909,(void*)0,&l_909,&l_909,&l_909},{&g_220,(void*)0,&l_909,&l_909,&l_909},{&l_909,&l_909,&l_909,&l_909,&g_220},{&l_909,&l_909,&l_909,&l_909,&l_909}}};
                        int i, j, k;
                        g_220 = p_32;

                        ;
                        if ((*p_32))
                            continue;
                    }
                    (*p_32) |= (0x0222D4919C80D75CLL ^ (safe_div_func_int32_t_s_s((l_998 ^= (-1L)), g_768)));
                    (*l_999) = &g_115;
                }
                else
                {
                    unsigned long long l_1009 = 0xD9F2156182875CF1LL;
                    if ((safe_sub_func_uint64_t_u_u(((*l_977) ^= (safe_rshift_func_int16_t_s_u(((((safe_sub_func_uint16_t_u_u(((l_1006 != (void*)0) >= 4UL), (safe_div_func_int32_t_s_s((*l_909), (1L || ((*p_33) = (&l_987 != (void*)0))))))) & ((l_998 = func_81((p_34 != &l_998), l_1009, p_33)) ^ (-3L))) > (*l_909)) & g_975[2][7][0]), 15))), l_1009)))
                    {
                        unsigned char l_1012 = 255UL;
                        unsigned short **l_1021 = (void*)0;
                        unsigned short *l_1023 = &g_854;
                        unsigned short **l_1022[9][10] = {{&l_1023,&l_1023,(void*)0,&l_1023,&l_1023,(void*)0,&l_1023,&l_1023,(void*)0,&l_1023},{&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023,(void*)0,&l_1023,(void*)0},{&l_1023,(void*)0,&l_1023,(void*)0,&l_1023,(void*)0,&l_1023,&l_1023,&l_1023,&l_1023},{&l_1023,(void*)0,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023},{&l_1023,(void*)0,&l_1023,&l_1023,(void*)0,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023},{&l_1023,(void*)0,&l_1023,(void*)0,(void*)0,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023},{(void*)0,&l_1023,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023,&l_1023,&l_1023,&l_1023},{(void*)0,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023},{&l_1023,(void*)0,(void*)0,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,(void*)0}};
                        int i, j;
                        (*p_32) &= (safe_sub_func_uint16_t_u_u(0x2BBDL, (l_1012 & ((((*l_977) = ((l_959[0][1] = (((*g_462) = l_1012) || (((l_1024 = func_39(((safe_div_func_uint64_t_u_u(0x8BB13B075091B510LL, (+(safe_add_func_int64_t_s_s(p_36, 0xB3D9096E15969EF1LL))))) > (func_81(l_1009, l_1012, l_1019[1][3]) < (*p_33))), l_1020[0])) != (void*)0) >= l_998))) || p_36)) <= 0xB58D73A60DE32FACLL) < (*g_758)))));

                        ;
                        return &g_38;


                    }
                    else
                    {
                        return &g_38;


                    }
                }

                ;
            }

            ;
            ;
            (*l_1048) = &l_959[3][0];

            ;
        }

        ;
        ;
        ;

        return &g_91;



    }
    else
    {
        char *l_1049[2][2][10] = {{{&g_73,&g_216,&g_73,&g_73,&g_73,&g_73,&g_216,&g_73,&g_216,&g_73},{&g_73,&g_11,&g_73,&g_11,&g_73,&g_73,&g_73,&g_73,&g_11,&g_73}},{{&g_73,&g_73,&g_73,&g_73,&g_216,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_11,&g_73,&g_73,&g_73,&g_73,&g_11,&g_73,&g_11,&g_73,&g_73}}};
        char **l_1050 = &l_972;
        int l_1051 = (-1L);
        int l_1052 = 0x589D2CC7L;
        short **l_1157 = &l_1046[0][4];
        unsigned l_1169[1][7][9] = {{{18446744073709551611UL,0x7000142DL,0xD5A480E0L,18446744073709551611UL,0xD9045E92L,18446744073709551611UL,0xD5A480E0L,0x7000142DL,18446744073709551611UL},{0xC3A31923L,0x7000142DL,0x943B11AAL,0xD5A480E0L,0x83E1AB73L,0xC3A31923L,0xD5A480E0L,5UL,0xD5A480E0L},{0xD5A480E0L,0xD9045E92L,0x943B11AAL,0x943B11AAL,0xD9045E92L,0xD5A480E0L,0UL,5UL,0x943B11AAL},{0xC3A31923L,0x83E1AB73L,0xD5A480E0L,0x943B11AAL,0x7000142DL,0xC3A31923L,0xC3A31923L,0x7000142DL,0x943B11AAL},{18446744073709551611UL,0xD9045E92L,18446744073709551611UL,0xD5A480E0L,0x7000142DL,18446744073709551611UL,0UL,0UL,0xD5A480E0L},{6UL,0xC3A31923L,18446744073709551615UL,6UL,0x943B11AAL,6UL,18446744073709551615UL,0xC3A31923L,6UL},{18446744073709551615UL,0xC3A31923L,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL}}};
        long long *l_1174 = &g_108[3];
        unsigned char **l_1183 = &g_824;
        int *l_1184 = (void*)0;
        int i, j, k;
        if (func_74((**g_823), ((*l_1050) = l_1049[1][0][9])))
        {
            unsigned char *l_1054 = &g_498[6];
            unsigned short *l_1056 = &g_528;
            int l_1057 = 0x496B7896L;
            char ***l_1085 = (void*)0;
            int l_1097 = 0L;
            int l_1098 = (-5L);
            if ((((((*l_1056) = (l_1051 < ((((l_1052 = func_74(((**l_890) ^= 1UL), (*l_1050))) > ((((*l_1054) = (((!(g_88 >= ((safe_unary_minus_func_uint16_t_u((1UL != 254UL))) > g_498[5]))) == (*p_32)) & p_35)) && 6UL) > (*p_33))) != l_1055) && p_35))) <= (-1L)) <= 0x31BC52626F88BAC9LL) < 255UL))
            {
lbl_1065:
                (*g_758) = l_1057;
                for (g_173 = 28; (g_173 != 24); g_173 = safe_sub_func_uint64_t_u_u(g_173, 4))
                {
                    char l_1064 = 0xE0L;
                    if ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(g_249, (*g_99))), l_1064)))
                    {
                        unsigned *l_1066[1];
                        int l_1067 = 0x441ED088L;
                        short *l_1068[5][10][4] = {{{&g_331,(void*)0,(void*)0,&g_88},{&g_331,(void*)0,&g_331,&g_331},{&g_331,&g_331,(void*)0,&g_331},{&g_88,(void*)0,(void*)0,&g_331},{&g_88,&g_331,&g_21,(void*)0},{(void*)0,&g_331,&g_88,&g_331},{&g_331,(void*)0,(void*)0,&g_331},{&g_88,&g_331,(void*)0,&g_331},{&g_21,(void*)0,&g_331,&g_88},{&g_331,(void*)0,&g_88,&g_88}},{{(void*)0,&g_21,(void*)0,(void*)0},{(void*)0,&g_88,&g_88,&g_331},{&g_331,(void*)0,&g_331,&g_88},{&g_21,(void*)0,(void*)0,&g_21},{&g_88,&g_331,(void*)0,&g_331},{&g_331,&g_88,&g_88,(void*)0},{(void*)0,(void*)0,&g_21,(void*)0},{&g_88,&g_88,(void*)0,&g_331},{&g_88,&g_331,(void*)0,&g_21},{&g_331,&g_88,&g_88,&g_331}},{{&g_88,&g_88,&g_21,(void*)0},{(void*)0,&g_21,(void*)0,&g_88},{&g_21,&g_88,(void*)0,&g_21},{(void*)0,&g_21,&g_21,(void*)0},{&g_88,&g_331,&g_88,&g_88},{&g_88,&g_88,&g_331,&g_88},{(void*)0,&g_21,&g_21,(void*)0},{&g_21,(void*)0,&g_88,&g_21},{&g_88,(void*)0,&g_21,(void*)0},{(void*)0,&g_21,&g_88,&g_88}},{{&g_331,&g_88,&g_88,&g_88},{&g_331,&g_331,(void*)0,(void*)0},{(void*)0,&g_21,&g_21,&g_21},{&g_88,&g_88,&g_331,&g_88},{&g_88,&g_21,&g_21,(void*)0},{(void*)0,&g_88,(void*)0,&g_331},{&g_331,&g_88,&g_88,&g_331},{&g_331,(void*)0,&g_88,(void*)0},{(void*)0,&g_21,&g_21,&g_88},{&g_88,&g_331,&g_88,&g_88}},{{&g_21,&g_21,&g_21,(void*)0},{(void*)0,(void*)0,&g_331,&g_331},{&g_88,&g_88,&g_88,&g_331},{&g_331,&g_88,&g_21,&g_331},{(void*)0,&g_331,&g_331,&g_88},{(void*)0,(void*)0,&g_331,&g_331},{(void*)0,(void*)0,&g_21,&g_88},{&g_331,(void*)0,&g_21,&g_21},{&g_21,&g_21,(void*)0,&g_331},{&g_88,&g_21,(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1066[i] = &g_933;
                        if (g_312)
                            goto lbl_1065;
                        if (l_1051)
                            continue;
                        (*p_32) = ((func_81(p_36, (l_1067 = g_173), l_1068[4][6][2]) & 9UL) > (safe_lshift_func_int16_t_s_u(((*g_99) < (*l_909)), (~p_35))));
                    }
                    else
                    {
                        (*p_32) = 1L;
                        if (l_1064)
                            break;
                    }
                }
            }
            else
            {
                int l_1105[7][9][2] = {{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}},{{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)},{(-1L),0x611127C4L},{(-1L),(-1L)},{0x611127C4L,(-1L)}}};
                int *l_1108 = &l_1098;
                char *l_1123 = (void*)0;
                int i, j, k;
                if ((*g_758))
                {
                    unsigned char l_1073 = 0x55L;
                    int **l_1074 = &g_220;
                    char ***l_1084[7][8] = {{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692},{&g_692,(void*)0,(void*)0,&g_692,&g_692,(void*)0,(void*)0,&g_692}};
                    int i, j;
                    l_1057 &= (safe_lshift_func_uint16_t_u_u(func_81(l_1073, l_1073, p_33), p_36));
                    (*l_1074) = &l_1057;

                    ;
                    if (((*l_909) = func_74(p_35, l_1075)))
                    {
                        char l_1076[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1076[i] = 0L;
                        (*l_909) = l_1076[2];
                        (*l_909) |= (safe_rshift_func_int8_t_s_u(func_74((**g_823), (*l_1050)), (0xC1L || ((safe_unary_minus_func_int32_t_s((&g_854 != (void*)0))) <= (safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((l_1084[2][4] == l_1085), g_73)), 0x8967DF5CD59339B2LL))))));
                    }
                    else
                    {
                        unsigned long long l_1086[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        unsigned *l_1088[10] = {&g_934[1],&g_934[1],&g_65,&g_934[1],&g_934[1],&g_65,&g_934[1],&g_934[1],&g_65,&g_934[1]};
                        volatile int **l_1100 = &g_758;
                        int i;
                        g_1099 = ((*l_1074) = l_1088[0]);

                        ;
                        ;
                        (*l_1100) = &g_115;
                        (*l_1074) = &l_1055;

                        ;
                        (*l_1074) = &g_131[1];

                        ;
                    }

                    ;
                    ;
                    l_1105[2][2][1] &= (~(safe_lshift_func_int16_t_s_s((0L > func_74((**g_823), ((*l_1050) = &l_1047))), (safe_rshift_func_uint8_t_u_u(246UL, 7)))));

                    ;
                }
                else
                {
                    unsigned l_1121 = 0x70E99113L;
                    for (l_1052 = 7; (l_1052 != (-17)); l_1052 = safe_sub_func_int64_t_s_s(l_1052, 3))
                    {
                        int **l_1109 = &l_1108;
                        long long l_1120 = 0x3309FEB9C1113AD5LL;
                        (*l_1109) = l_1108;
                        if ((**l_1109))
                            continue;
                        l_1057 &= ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, func_74((safe_mod_func_uint32_t_u_u((g_1122 = ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_909) &= g_864) == ((((*l_1054) = (*g_824)) && func_81(((*l_1056) ^= (((**l_890) = (**g_823)) | (safe_lshift_func_int16_t_s_u((((l_1097 != p_36) >= (l_1120 > (*g_758))) >= (**l_1109)), l_1121)))), g_38, &g_331)) & 0x27L)), 5)), 7UL)) == l_1097)), g_312)), l_1123))) >= 0UL);
                        (*l_1108) &= (l_1124 &= (*g_1099));
                    }
                }

                ;
                ;
                ;
                for (l_1055 = 0; (l_1055 < (-4)); --l_1055)
                {
                    int *l_1127 = &g_38;
                    int **l_1128 = &l_1108;
                    (*l_1128) = l_1127;

                    ;
                    for (g_159 = 0; (g_159 > 2); g_159 = safe_add_func_uint64_t_u_u(g_159, 5))
                    {
                        (*g_758) &= 0xEA9F54D2L;
                    }
                }

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned l_1131 = 18446744073709551615UL;
            int *l_1132 = &g_131[2];
            for (l_920 = 0; (l_920 <= 1); l_920 += 1)
            {
                char *l_1143 = &g_11;
                int l_1146 = 0L;
                short *l_1158 = &g_331;
                if (l_1131)
                {
                    int **l_1133 = (void*)0;
                    int **l_1134 = &l_909;
                    (*l_1134) = l_1132;
                    if ((((&g_824 == ((*l_891) = &g_824)) == ((p_36 & ((((!(func_74((safe_mod_func_uint32_t_u_u(0x2E74D72DL, (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_1052, 4)), ((**g_461) = (*g_462)))))), l_1143) >= (safe_mul_func_uint16_t_u_u(l_1146, g_498[5])))) && (**g_461)) > 1L) != l_1051)) == 1UL)) <= (-10L)))
                    {
                        (*l_1134) = (*l_1134);
                    }
                    else
                    {
                        unsigned char *l_1147 = &g_720[4][0][2];
                        int l_1148[10] = {6L,6L,6L,6L,6L,6L,6L,6L,6L,6L};
                        int i;
                        (*g_758) = l_1146;
                        (*g_758) = (((*l_890) = l_1147) != (void*)0);
                        if (g_528)
                            goto lbl_1234;
                        if (l_1148[8])
                            break;
                        return p_34;


                    }
                    if ((((-4L) <= (*p_33)) | func_81(g_826, (((**l_890) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((*g_824), (safe_sub_func_uint64_t_u_u(((&g_99 != l_1157) < (func_81(g_65, p_36, &g_21) < (*l_1132))), p_35)))), p_35))) & 0x55L), l_1158)))
                    {
                        return p_32;


                    }
                    else
                    {
                        int *l_1159 = &g_131[2];
                        return l_1159;


                    }
                }
                else
                {
                    if ((((*l_1132) || 0x4CA3L) == (safe_lshift_func_uint8_t_u_u((*g_824), 6))))
                    {
                        char ***l_1162 = (void*)0;
                        char ***l_1163 = &g_692;
                        (*l_1163) = &g_851;

                        ;
                    }
                    else
                    {
                        int **l_1164 = &g_220;
                        (*l_1164) = p_32;

                        ;
                        (*p_32) &= 0xBC647D42L;
                    }

                    ;
                    if ((*p_32))
                        break;
                }

                ;
                return p_34;


            }

            ;
            return &g_91;


        }

        ;
        ;

        ;
        ;
lbl_1234:
        if ((&l_1157 != &l_1157))
        {
            int l_1175 = 0x35787496L;
            int l_1198 = 0xAFF7A8CEL;
            int l_1218 = 0x4ADCDF0EL;
            if (((((safe_lshift_func_uint8_t_u_s(l_1052, 2)) || func_81((safe_lshift_func_uint8_t_u_u(func_81(l_1169[0][6][1], g_15, &g_331), 4)), (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_1174 == l_1174), ((*l_909) <= (*p_32)))), l_1175)), p_33)) < (*l_909)) >= 18446744073709551615UL))
            {
                unsigned l_1177[1];
                char *l_1178 = &g_73;
                int **l_1185 = &l_1184;
                int i;
                for (i = 0; i < 1; i++)
                    l_1177[i] = 2UL;
                (*l_1185) = l_1184;
            }
            else
            {
                long long l_1191 = 1L;
                unsigned *l_1194 = &g_934[5];
                (*p_32) |= (p_35 && 1L);
                (*g_758) &= (&g_462 != &l_1174);
                if ((0x7C3E6BD8L <= (*l_909)))
                {
                    int **l_1186 = &g_220;
                    unsigned short *l_1192 = &g_505;
                    unsigned short *l_1193[4];
                    long long *l_1197[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1193[i] = (void*)0;
                    (*l_1186) = (void*)0;

                    ;
                    (*p_32) = (safe_add_func_uint32_t_u_u(((*p_33) & (g_528 ^= ((*l_1192) |= ((safe_sub_func_uint32_t_u_u((~g_864), l_1191)) <= g_216)))), ((void*)0 == l_1194)));
                    (*p_32) = (safe_rshift_func_int16_t_s_s(((void*)0 != l_1197[6]), 14));
                    (*g_758) = ((*l_909) ^= (l_1198 &= ((*p_32) = l_1175)));
                }
                else
                {
                    unsigned long long *l_1203[10][5][2] = {{{&g_768,&g_768},{(void*)0,&g_1122},{&g_173,&l_1096},{&g_663,(void*)0},{&g_159,&l_1096}},{{&g_159,(void*)0},{&g_663,&l_1096},{&g_173,&g_1122},{(void*)0,&g_768},{&g_768,&g_173}},{{&l_1096,&g_173},{&g_768,&g_768},{(void*)0,&g_1122},{&g_173,&l_1096},{&g_663,(void*)0}},{{&g_159,&l_1096},{&g_159,(void*)0},{&g_663,&l_1096},{&g_173,&g_1122},{(void*)0,&g_768}},{{&g_173,&l_1096},{&g_1122,&l_1096},{&g_173,&g_768},{&g_768,&g_826},{&g_159,(void*)0}},{{(void*)0,&g_1122},{&l_1096,&g_663},{&l_1096,&g_1122},{(void*)0,(void*)0},{&g_159,&g_826}},{{&g_768,&g_768},{&g_173,&l_1096},{&g_1122,&l_1096},{&g_173,&g_768},{&g_768,&g_826}},{{&g_159,(void*)0},{(void*)0,&g_1122},{&l_1096,&g_663},{&l_1096,&g_1122},{(void*)0,(void*)0}},{{&g_159,&g_826},{&g_768,&g_768},{&g_173,&l_1096},{&g_1122,&l_1096},{&g_173,&g_768}},{{&g_768,&g_826},{&g_159,(void*)0},{(void*)0,&g_1122},{&l_1096,&g_663},{&l_1096,&g_1122}}};
                    char *l_1217 = &l_1047;
                    int i, j, k;
                    if (((*p_32) = 0x12994C38L))
                    {
                        (*l_909) = l_1191;
                        g_220 = p_34;

                        ;
                    }
                    else
                    {
                        unsigned short *l_1207 = &g_854;
                        int l_1208 = 0x1B341F07L;
                        int **l_1219 = &l_1184;
                        unsigned ***l_1220[9] = {&g_436,&g_436,&g_436,&g_436,&g_436,&g_436,&g_436,&g_436,&g_436};
                        int i;
lbl_1221:
                        (*l_1219) = &l_1208;

                        ;
                        (*l_909) = 0xAA77D8AAL;
                        g_436 = &l_1194;

                        ;
                        if (l_1124)
                            goto lbl_1221;
                    }

                    ;

                    for (p_36 = (-12); (p_36 > 15); p_36++)
                    {
                        int **l_1224 = (void*)0;
                        int **l_1225 = &l_909;
                        (*l_1225) = &g_38;

                        ;
                        (*l_1225) = &g_91;

                        ;
                        (*l_1225) = &g_91;
                    }

                    ;
                    for (g_110 = 6; (g_110 >= 0); g_110 -= 1)
                    {
                        int i;
                        (*l_909) ^= g_934[g_110];
                        if ((*p_32))
                            continue;
                        if (g_934[g_110])
                            break;
                    }
                }

                ;
                ;

            }


            ;

        }
        else
        {
            char *l_1228 = &l_1124;
            int **l_1233 = &l_909;
            (*l_909) &= (*g_1099);
            (*g_758) = func_81((func_74(((safe_add_func_uint8_t_u_u((*l_909), 0x2CL)) >= (*l_909)), l_1228) | ((*l_909) & (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_35 < 0xFA8A67665D2248F8LL), p_35)), (*l_909))))), g_159, &g_21);
            (*l_1233) = p_32;

            ;
        }


        ;

        (*g_1099) = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((void*)0 != p_32), 6)) >= (safe_lshift_func_int8_t_s_s((((*p_33) &= func_81(p_35, func_74((*l_909), (*l_1050)), p_33)) > (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*g_824), 1)), 0xD5L)), 0x31L))), 6))), 2)), p_36));
        return p_34;


    }
}







static short * func_39(int p_40, int * p_41)
{
    int l_877 = 2L;
    unsigned short *l_882 = &g_505;
    unsigned long long l_885[7][4][5] = {{{18446744073709551609UL,0x58E0C85AB6E29D5ELL,18446744073709551615UL,0xBA5F6FDC8B9CCA3BLL,0x510C2266E8090E37LL},{0x6223BFA341D961C9LL,18446744073709551615UL,0UL,0UL,1UL},{0x097351829C5727F2LL,0xE2A6F34E8AA4F42FLL,18446744073709551615UL,0x510C2266E8090E37LL,0x93E984E226D982CCLL},{0UL,0x01DBA65194B29CD1LL,0UL,18446744073709551607UL,18446744073709551607UL}},{{18446744073709551615UL,1UL,18446744073709551615UL,0x0EADD73BA029BDC3LL,0xBA5F6FDC8B9CCA3BLL},{0x5EDD72629A66E895LL,1UL,0UL,1UL,0UL},{0UL,6UL,0x510C2266E8090E37LL,0xF1AB63CDEE2436D0LL,0x3D877C0E7087BBE9LL},{0UL,1UL,0UL,0UL,0UL}},{{0x0EADD73BA029BDC3LL,0x3A50FE62B6BC72FFLL,0x510C2266E8090E37LL,8UL,8UL},{0UL,0x92F1A61AA831EF4FLL,0UL,18446744073709551613UL,1UL},{0xBA5F6FDC8B9CCA3BLL,0x70A23E8B14CC6994LL,0x510C2266E8090E37LL,1UL,4UL},{18446744073709551607UL,0x2EC74FD4F9806FCBLL,0UL,0UL,18446744073709551613UL}},{{0x93E984E226D982CCLL,0UL,0x510C2266E8090E37LL,4UL,0xF1AB63CDEE2436D0LL},{1UL,1UL,0UL,18446744073709551615UL,18446744073709551615UL},{0x510C2266E8090E37LL,18446744073709551615UL,0x510C2266E8090E37LL,0x3D877C0E7087BBE9LL,1UL},{18446744073709551610UL,1UL,0UL,1UL,0UL}},{{0UL,6UL,0x510C2266E8090E37LL,0xF1AB63CDEE2436D0LL,0x3D877C0E7087BBE9LL},{0UL,1UL,0UL,0UL,0UL},{0x0EADD73BA029BDC3LL,0x3A50FE62B6BC72FFLL,0x510C2266E8090E37LL,8UL,8UL},{0UL,0x92F1A61AA831EF4FLL,0UL,18446744073709551613UL,1UL}},{{0xBA5F6FDC8B9CCA3BLL,0x70A23E8B14CC6994LL,0x510C2266E8090E37LL,1UL,4UL},{18446744073709551607UL,0x2EC74FD4F9806FCBLL,0UL,0UL,18446744073709551613UL},{0x93E984E226D982CCLL,0UL,0x510C2266E8090E37LL,4UL,0xF1AB63CDEE2436D0LL},{1UL,1UL,0UL,18446744073709551615UL,18446744073709551615UL}},{{0x510C2266E8090E37LL,1UL,0UL,3UL,0x1679DD44367876AFLL},{0x92F1A61AA831EF4FLL,18446744073709551613UL,1UL,0UL,9UL},{6UL,8UL,0UL,18446744073709551609UL,3UL},{1UL,0UL,1UL,9UL,0x5EDD72629A66E895LL}}};
    char *l_886[3];
    int l_887[10] = {0x573A662AL,1L,0x573A662AL,0xDF6F910AL,0xDF6F910AL,0x573A662AL,1L,0x573A662AL,0xDF6F910AL,0xDF6F910AL};
    int *l_888 = &g_131[2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_886[i] = &g_216;
    l_888 = &l_887[5];

    ;
    (*p_41) = (*p_41);
    return &g_331;


}







static short * func_42(short * p_43, char p_44, short * p_45, unsigned char p_46, unsigned p_47)
{
    volatile int **l_865 = (void*)0;
    volatile int **l_866 = &g_758;
    unsigned char l_869 = 1UL;
    int l_870 = 1L;
    int **l_871 = &g_220;
    (*l_866) = &g_115;
    (*l_871) = func_55((**l_866), (safe_sub_func_int64_t_s_s(((l_870 = l_869) | ((*l_866) == (void*)0)), l_869)), l_869);

    ;

    ;
    return p_43;


}







static short * func_48(short * p_49)
{
    int *l_51[6][3];
    int **l_52 = &l_51[0][0];
    int *l_796 = &g_131[0];
    short **l_819 = &g_99;
    long long l_827[2];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_51[i][j] = &g_38;
    }
    for (i = 0; i < 2; i++)
        l_827[i] = 0x42A6408BAB62C3B6LL;
    (*l_52) = l_51[4][1];
    for (g_21 = 26; (g_21 > (-21)); g_21 = safe_sub_func_int32_t_s_s(g_21, 5))
    {
        int l_790 = 0x12002AD7L;
        long long **l_799 = &g_462;
        unsigned *l_825[5] = {&g_65,&g_65,&g_65,&g_65,&g_65};
        char *l_850[8][8] = {{&g_73,&g_11,&g_110,&g_110,&g_11,&g_73,&g_216,&g_73},{&g_216,&g_73,(void*)0,&g_73,&g_216,&g_73,&g_110,&g_216},{&g_73,(void*)0,&g_216,&g_73,&g_216,&g_11,&g_110,&g_73},{(void*)0,&g_110,&g_216,&g_110,&g_11,&g_11,&g_110,&g_216},{&g_216,&g_216,(void*)0,&g_216,(void*)0,&g_110,&g_216,&g_216},{&g_110,(void*)0,&g_110,&g_11,&g_216,&g_110,&g_216,&g_216},{(void*)0,&g_73,&g_110,&g_216,&g_110,&g_73,(void*)0,&g_216},{&g_73,&g_216,&g_73,&g_110,&g_216,&g_216,&g_11,&g_11}};
        int l_855 = 1L;
        int **l_858 = &l_796;
        int i, j;
        for (g_38 = 0; (g_38 <= 2); g_38 += 1)
        {
            unsigned char *l_792 = &g_498[3];
            unsigned char **l_791[8][3] = {{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792}};
            short **l_809[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
        }
    }
    (*g_220) &= (*g_758);
    (*l_52) = (void*)0;


    return &g_88;


}







static int * func_55(unsigned p_56, unsigned short p_57, char p_58)
{
    int *l_68 = &g_38;
    int l_226 = 0x23D71A1BL;
    char l_347[6][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}}};
    unsigned char *l_385 = &g_312;
    unsigned char **l_384 = &l_385;
    unsigned long long *l_401 = &g_173;
    int l_417 = 1L;
    short *l_458[3];
    short l_501 = (-2L);
    unsigned l_609 = 0xB7AFEB56L;
    char *l_695 = &g_110;
    char **l_694[3];
    long long **l_697 = &g_462;
    volatile int *l_718 = &g_115;
    unsigned short *l_723[2];
    short **l_724 = &g_99;
    int *l_730 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_458[i] = &g_331;
    for (i = 0; i < 3; i++)
        l_694[i] = &l_695;
    for (i = 0; i < 2; i++)
        l_723[i] = (void*)0;
    if ((p_58 == p_58))
    {
        int *l_69 = &g_38;
        char *l_72 = &g_73;
        short *l_234 = &g_88;
        int *l_235 = &l_226;
        l_226 = (((l_68 == l_69) | (safe_lshift_func_int8_t_s_s(((*l_72) ^= p_56), func_74(p_58, &g_11)))) | (*l_69));

        ;
        ;
        ;
        (*l_235) = (((((safe_unary_minus_func_int32_t_s(1L)) == g_159) & ((safe_div_func_int8_t_s_s(p_56, 2UL)) != (func_81((*l_68), (safe_sub_func_uint64_t_u_u((*l_69), (*l_68))), l_234) < g_173))) && (*l_68)) == (*l_69));
    }
    else
    {
        unsigned short l_236 = 1UL;
        int *l_259 = &g_131[1];
        int *l_270 = &g_38;
        short *l_292 = (void*)0;
        int l_332[2][6][10] = {{{0xCD3D24E7L,0x8166E1F4L,0x1263A529L,0x8166E1F4L,0xCD3D24E7L,1L,0xCD3D24E7L,0x8166E1F4L,0x1263A529L,0x8166E1F4L},{2L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L,2L,0xAEF6CC77L,1L,0x8166E1F4L},{1L,0x8166E1F4L,1L,0xAEF6CC77L,0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L},{2L,0x8166E1F4L,0x67839AE7L,0x8166E1F4L,2L,1L,2L,0x8166E1F4L,0x67839AE7L,0x8166E1F4L},{0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L,0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L},{1L,0x8166E1F4L,1L,0xAEF6CC77L,2L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L}},{{0xCD3D24E7L,0x8166E1F4L,0x1263A529L,0x8166E1F4L,0xCD3D24E7L,1L,0xCD3D24E7L,0x8166E1F4L,0x1263A529L,0x8166E1F4L},{2L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L,2L,0xAEF6CC77L,1L,0x8166E1F4L},{1L,0x8166E1F4L,1L,0xAEF6CC77L,0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L},{2L,0x8166E1F4L,0x67839AE7L,0x8166E1F4L,2L,1L,2L,0x8166E1F4L,0x67839AE7L,0x8166E1F4L},{0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L,0xCD3D24E7L,0xAEF6CC77L,1L,0x8166E1F4L},{1L,0x8166E1F4L,1L,0xAEF6CC77L,2L,0xAEF6CC77L,1L,0x8166E1F4L,1L,0xAEF6CC77L}}};
        unsigned char *l_457 = &g_312;
        int l_553[2];
        unsigned short l_561 = 0xAFDCL;
        long long l_584 = 0xFB5D4092E7EC29FELL;
        int *l_644[3][2][7] = {{{&g_131[1],&g_131[1],&g_131[2],&l_553[1],&g_131[2],&g_131[1],&g_131[1]},{&g_131[1],&g_131[2],&l_553[1],&g_131[2],&g_131[1],&g_131[1],&g_131[2]}},{{&l_553[0],&l_553[0],&g_131[2],&g_131[1],&g_131[1],&g_131[2],&l_553[1]},{&g_131[1],&l_553[1],&l_553[0],&l_553[0],&l_553[1],&g_131[1],&l_553[1]}},{{&g_131[2],&g_131[1],&g_131[1],&g_131[2],&l_553[1],&g_131[2],&g_131[1]},{&l_553[0],&l_553[0],&g_131[1],&l_553[0],&g_131[1],&l_553[0],&l_553[0]}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_553[i] = 0xECEFD655L;
        if (l_236)
        {
            char l_243 = 2L;
            short *l_244 = (void*)0;
            int *l_276[8][1] = {{&g_38},{(void*)0},{&g_38},{(void*)0},{&g_38},{(void*)0},{&g_38},{(void*)0}};
            unsigned char *l_390 = &g_312;
            short *l_450 = &g_88;
            unsigned l_468 = 0x8928BFD5L;
            unsigned *l_536 = (void*)0;
            char *l_551 = (void*)0;
            char **l_550 = &l_551;
            int l_581[7] = {2L,1L,2L,2L,1L,2L,2L};
            int i, j;
            if (func_81(l_236, (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_243 = 0x98L), 0)), 4)), (g_216 = g_159))), l_244))
            {
                int **l_262 = (void*)0;
                int l_263 = 0L;
                int *l_271[9][4] = {{&g_131[1],(void*)0,&g_91,&g_91},{&g_131[1],&g_131[1],&g_91,(void*)0},{&g_131[0],&g_91,&g_38,&l_226},{&g_91,(void*)0,&g_38,&g_38},{&g_38,(void*)0,&g_131[1],&l_226},{(void*)0,&g_91,(void*)0,(void*)0},{(void*)0,&g_131[1],&g_131[1],&g_91},{&l_263,(void*)0,(void*)0,&g_131[1]},{&l_226,&g_131[1],(void*)0,(void*)0}};
                unsigned l_304 = 0x60A45B53L;
                short *l_362 = &g_331;
                int i, j;
                if (l_236)
                {
                    unsigned long long l_258 = 0x2790569669FE5E31LL;
                    int *l_272 = &g_131[2];
                    short *l_290 = &g_21;
                    if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, 13)), ((*l_68) || g_249))))
                    {
                        unsigned long long *l_254 = &g_173;
                        l_258 = ((func_81((safe_div_func_int64_t_s_s(p_56, (safe_add_func_uint64_t_u_u(((*l_254) = (*l_68)), 0xA01BD5C1137C9BD7LL)))), (safe_mul_func_uint16_t_u_u(g_11, (((p_57 >= (safe_unary_minus_func_uint16_t_u(func_74((l_68 != &g_65), &p_58)))) && p_56) < p_57))), &g_88) ^ 9L) >= l_243);

                        ;
                        ;
                        ;
                    }
                    else
                    {
                        long long *l_264 = &g_108[8];
                        int *l_265 = &l_226;
                        g_220 = l_259;

                        ;
                        (*l_265) ^= (safe_sub_func_int32_t_s_s((((void*)0 == l_262) | (*l_259)), ((-1L) && ((*l_264) = func_74((l_263 = 9UL), &g_73)))));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                    if ((safe_sub_func_int64_t_s_s((l_243 || l_258), (safe_rshift_func_int16_t_s_s((-1L), p_58)))))
                    {
                        l_271[5][0] = l_270;
                    }
                    else
                    {
                        int **l_273 = &l_270;
                        (*l_273) = l_272;

                        ;
                    }

                    ;
                    (*l_259) = func_74(p_57, &l_243);

                    ;
                    ;
                    for (g_88 = 0; (g_88 >= 19); g_88 = safe_add_func_int32_t_s_s(g_88, 1))
                    {
                        long long *l_279[9] = {&g_108[3],&g_108[3],&g_108[3],&g_108[3],&g_108[3],&g_108[3],&g_108[3],&g_108[3],&g_108[3]};
                        long long *l_281 = &g_108[5];
                        long long **l_280 = &l_281;
                        unsigned *l_291 = &g_117;
                        short *l_293[9][4] = {{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,&g_88}};
                        int i, j;
                        l_276[2][0] = l_259;
                        g_115 ^= (safe_sub_func_int8_t_s_s((~(((l_279[2] != ((*l_280) = &g_108[1])) & g_65) < (safe_add_func_int64_t_s_s(p_57, (p_58 <= ((safe_lshift_func_int16_t_s_s(func_81((func_81(g_108[5], ((*l_291) = (p_58 >= (func_81((*l_259), (safe_div_func_uint8_t_u_u(0x05L, g_108[5])), l_290) | g_131[2]))), l_292) >= 0xBA40L), g_110, l_293[7][2]), 12)) < (*l_270))))))), 1L));
                    }
                }
                else
                {
                    int l_334 = (-7L);
                    for (l_226 = 25; (l_226 != (-15)); --l_226)
                    {
                        int *l_296 = &g_91;
                        int **l_297 = &l_271[5][0];
                        unsigned char *l_311 = &g_312;
                        char *l_315 = (void*)0;
                        char *l_316 = &g_110;
                        char *l_317 = (void*)0;
                        char *l_318 = &g_216;
                        short *l_329 = (void*)0;
                        short *l_330 = &g_331;
                        (*l_297) = l_296;
                        (*l_296) &= (safe_mul_func_int16_t_s_s(p_56, (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(l_304, p_57)), (~(safe_rshift_func_uint8_t_u_u(((*l_311) |= (safe_mod_func_uint64_t_u_u(p_56, (safe_lshift_func_int8_t_s_s(p_56, 1))))), ((~(safe_div_func_int16_t_s_s(((((*l_318) = ((*l_316) = g_21)) | (p_56 <= (safe_add_func_uint16_t_u_u(0x69C6L, g_88)))) == 255UL), (*g_99)))) && (*l_68)))))))));
                        g_333 ^= (((g_65 | (func_74(g_131[1], &l_243) | (safe_div_func_int16_t_s_s((g_88 & 255UL), (safe_rshift_func_uint8_t_u_u(g_38, 2)))))) < p_56) <= (((*l_311) = ((safe_add_func_uint64_t_u_u((((*l_330) &= (((p_58 && 1L) || 0xEDC5DE54L) || 8L)) != (-1L)), 0x61C8AACF54AA532DLL)) == l_332[0][0][7])) > 1L));

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                    l_334 = p_56;
                    return l_270;


                }

                ;
                ;
                ;
                ;
                if ((safe_rshift_func_int16_t_s_u((*l_270), 13)))
                {
                    int *l_338[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_338[i] = &l_226;
                    for (g_173 = 0; (g_173 <= 1); g_173 += 1)
                    {
                        int **l_337[8] = {&l_276[2][0],&l_276[2][0],&l_68,&l_276[2][0],&l_276[2][0],&l_68,&l_276[2][0],&l_276[2][0]};
                        int i;
                        l_338[0] = &g_91;
                    }


                    for (g_65 = (-2); (g_65 < 31); g_65 = safe_add_func_int8_t_s_s(g_65, 5))
                    {
                        unsigned char l_341 = 255UL;
                        int **l_342 = &l_276[2][0];
                        int l_343 = (-5L);
                        l_341 = (*l_259);
                        (*l_342) = &l_226;
                        (*l_259) = (l_343 = p_57);
                        if (g_38)
                            goto lbl_525;
                    }


                }
                else
                {
                    int l_379 = 0xC1A1EB71L;
                    int l_382[9][9] = {{0xB4CC9C1CL,1L,(-1L),0L,(-10L),0L,(-1L),1L,0xB4CC9C1CL},{(-6L),1L,7L,0x84FCC0D0L,7L,1L,(-6L),(-6L),1L},{0x23F7F010L,0xA16205BEL,(-1L),0xA16205BEL,0x23F7F010L,(-1L),0xEE7ADF5AL,0L,6L},{(-6L),7L,(-6L),1L,4L,4L,1L,(-6L),7L},{0xB4CC9C1CL,0x29FEBA94L,0xEE7ADF5AL,0x492EAA63L,(-1L),(-1L),1L,1L,1L},{1L,0x84FCC0D0L,1L,1L,0x84FCC0D0L,1L,4L,1L,0x84FCC0D0L},{6L,0x29FEBA94L,1L,0xA16205BEL,0xB4CC9C1CL,0L,0xB4CC9C1CL,0L,0xEE7ADF5AL},{1L,1L,0x0985CDAEL,4L,(-6L),4L,0x0985CDAEL,1L,1L},{0xEE7ADF5AL,0L,6L,0x492EAA63L,6L,0L,0xEE7ADF5AL,(-1L),0x23F7F010L}};
                    int l_383 = 0x8AF8EF0CL;
                    unsigned char ***l_386 = (void*)0;
                    unsigned char ***l_387 = &l_384;
                    int i, j;
                    if ((safe_mul_func_uint16_t_u_u(((void*)0 != &p_56), 0x9495L)))
                    {
                        unsigned l_346 = 0xBDF9C3ABL;
                        l_347[4][0][3] = (l_346 = p_56);
                    }
                    else
                    {
                        unsigned char *l_356[10][2] = {{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312},{&g_312,&g_312}};
                        int l_357 = (-2L);
                        volatile int *l_364 = &g_115;
                        volatile int **l_363 = &l_364;
                        char *l_371[6];
                        unsigned long long *l_378[10] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_371[i] = &l_347[0][0][2];
                        (*l_259) = (safe_mod_func_int64_t_s_s(func_74((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(g_65, (safe_rshift_func_uint8_t_u_s((l_357 = (g_312 = (*l_68))), 4)))), 7)), &g_73), (safe_sub_func_int8_t_s_s(g_159, (safe_sub_func_int64_t_s_s(((g_38 > (l_244 == l_362)) < 0x4CL), g_131[1]))))));
                        (*l_363) = &g_115;
                        (*l_364) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((*l_259), (p_58 = g_11))), (l_383 &= (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((+(g_38 != (l_379 = func_74(g_38, &g_73)))), (safe_rshift_func_uint16_t_u_u(0xFAF0L, p_56)))), l_382[3][5])) | g_131[1]), 4))))), 0xE7L)) && g_159);
                    }
                    (*l_387) = l_384;
                    if (p_58)
                    {
                        g_131[1] |= (safe_sub_func_uint8_t_u_u((((**l_387) != l_390) | p_57), g_216));
                    }
                    else
                    {
                        g_220 = &l_226;

                        ;
                    }

                    ;
                    for (l_263 = 0; (l_263 <= 0); l_263 += 1)
                    {
                        (*l_259) = (safe_div_func_uint16_t_u_u(65535UL, (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_131[1] < ((safe_add_func_uint32_t_u_u((0x3A77L || ((void*)0 != &g_87)), (&g_159 == l_401))) >= 0x74D5L)), (safe_mul_func_uint8_t_u_u(((p_56 == (*l_68)) ^ (-1L)), p_56)))) < 0xD4L), g_159)) <= 0x6FL), (*l_68)))));
                        return &g_38;



                    }
                }

                ;

                l_226 ^= (g_91 |= ((*l_259) = (safe_mul_func_int8_t_s_s((4294967286UL < (~(0x86L || (*l_68)))), 0x2CL))));
                g_131[0] ^= 0x10B6D768L;
            }
            else
            {
                return l_276[0][0];


            }

            ;
            ;
            ;
            ;

            for (p_57 = (-6); (p_57 > 6); p_57 = safe_add_func_uint32_t_u_u(p_57, 9))
            {
                for (g_110 = 0; (g_110 >= (-27)); g_110--)
                {
                    char *l_410 = &g_73;
                    (*l_259) = (&g_73 != l_410);
                }
                return &g_131[1];



            }
lbl_525:
            for (g_159 = 0; (g_159 <= 0); g_159 += 1)
            {
                char *l_414 = &l_347[3][0][0];
                char **l_413 = &l_414;
                unsigned **l_438 = (void*)0;
                long long *l_465 = &g_108[9];
                int *l_470 = (void*)0;
                short *l_502[5] = {&l_501,&l_501,&l_501,&l_501,&l_501};
                unsigned l_506 = 0x2F5AF060L;
                int i;
                if (((safe_add_func_uint8_t_u_u(((((*l_413) = &g_11) != &g_110) != (g_131[(g_159 + 2)] >= ((((-6L) && 0L) ^ (safe_rshift_func_uint8_t_u_u((func_81(g_249, l_417, l_292) & 0x1FCDL), g_117))) | p_57))), 0xE0L)) && (*l_270)))
                {
                    unsigned char l_419 = 0xB6L;
                    unsigned l_420[2][1][2] = {{{4294967289UL,4294967289UL}},{{4294967289UL,4294967289UL}}};
                    int i, j, k;
                    (*l_259) |= 0L;
                    for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
                    {
                        int l_418 = (-1L);
                        int i, j;
                        l_419 = l_418;
                    }
                    l_420[0][0][1] = (-4L);
                }
                else
                {
                    short l_428 = (-1L);
                    for (p_58 = 0; (p_58 <= 0); p_58 += 1)
                    {
                        short **l_427 = &g_99;
                        unsigned short *l_431 = &l_236;
                        int **l_432 = &l_276[1][0];
                        (*l_259) = (safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((((void*)0 == l_427) || func_81(l_428, g_110, (*l_427))), g_131[(g_159 + 2)])), 0xE4L)) == (safe_rshift_func_uint16_t_u_s(((*l_431) |= g_312), 0))), 7));
                        (*l_432) = l_259;
                        if (p_58)
                            break;
                    }
                    if (g_173)
                    {
                        unsigned ***l_437 = &g_436;
                        unsigned ***l_439 = &l_438;
                        char *l_440[9] = {&l_347[5][0][0],&g_11,&l_347[5][0][0],&g_11,&l_347[5][0][0],&g_11,&l_347[5][0][0],&g_11,&l_347[5][0][0]};
                        int i;
                        (*l_259) = (((*l_68) >= ((safe_unary_minus_func_int16_t_s(p_56)) <= (((*l_437) = g_436) != ((*l_439) = l_438)))) <= (((void*)0 != &g_220) & (g_110 = g_88)));
                    }
                    else
                    {
                        g_115 ^= p_56;
                    }
                }

                ;
                if (p_57)
                    continue;
            }
            if ((safe_lshift_func_int8_t_s_s((g_216 &= func_74(g_73, &p_58)), (g_528 = g_11))))
            {
                return &g_131[0];



            }
            else
            {
                char l_533 = (-1L);
                unsigned short *l_537 = &l_236;
                char l_572 = 0x77L;
                char l_577[5][9][5] = {{{0x52L,0x01L,0x6BL,0xDBL,1L},{0x01L,0x52L,0x6BL,1L,0x6BL},{0x01L,0x01L,(-1L),1L,1L},{0x52L,0x01L,0x6BL,0xDBL,1L},{0x01L,0x52L,0x6BL,1L,0x6BL},{0x01L,0x01L,(-1L),0x01L,1L},{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L}},{{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L},{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L},{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L}},{{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L},{0xDDL,0x3BL,0xDBL,0x52L,1L},{0x3BL,0xDDL,0xDBL,0x01L,0xDBL},{0x3BL,0x3BL,(-1L),0x01L,1L},{0xDDL,0x3BL,0xDBL,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL}},{{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL},{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL},{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL}},{{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL},{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,8L,0x18L},{0x6BL,0x6BL,0x3BL,8L,0xDDL},{(-1L),0x6BL,0x18L,(-7L),0xDDL},{0x6BL,(-1L),0x18L,0x6BL,(-7L)},{0xDBL,0xDBL,5L,0x6BL,8L}}};
                unsigned *l_589 = &g_117;
                int i, j, k;
                if (((func_74(g_117, &l_347[4][0][3]) > ((*l_537) = ((safe_add_func_int64_t_s_s((((p_56 != p_58) || (p_56 ^ ((safe_lshift_func_int16_t_s_u(l_533, 11)) < (safe_mul_func_uint8_t_u_u((&l_468 == (l_536 = &l_468)), 0L))))) | p_57), g_312)) != 0x9383L))) > (*l_270)))
                {
                    int l_542[10] = {0xD365FE56L,0L,0xD365FE56L,0xD365FE56L,0L,0xD365FE56L,0xD365FE56L,0L,0xD365FE56L,0xD365FE56L};
                    char *l_549 = &g_73;
                    char **l_548 = &l_549;
                    long long *l_573 = &g_333;
                    int l_574 = 0x5E761DEEL;
                    int i;
                    if (((~(safe_mod_func_int64_t_s_s((**g_461), (safe_lshift_func_int16_t_s_u((((l_542[9] == (p_57 || (((void*)0 != &g_131[0]) ^ (*l_259)))) && (l_533 && (g_528 &= (safe_sub_func_uint64_t_u_u((((void*)0 != l_537) >= (-1L)), l_533))))) ^ (*l_259)), p_58))))) != (*l_68)))
                    {
                        char *l_546 = &l_243;
                        char **l_545 = &l_546;
                        char ***l_547[1][9][6] = {{{(void*)0,(void*)0,&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545,(void*)0,&l_545},{&l_545,&l_545,&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545,(void*)0,&l_545},{&l_545,&l_545,&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545,&l_545,&l_545},{&l_545,(void*)0,(void*)0,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545,&l_545,&l_545}}};
                        int **l_552 = &l_259;
                        int i, j, k;
                        (*l_259) = p_58;
                        if (l_533)
                            goto lbl_554;
                        (*l_259) = ((l_548 = l_545) == l_550);

                        ;
                        (*l_259) |= (-4L);
                        (*l_552) = &g_131[2];
                    }
                    else
                    {
lbl_554:
                        l_553[0] ^= (*l_259);
                        l_574 &= (safe_sub_func_int8_t_s_s(((*l_549) = p_58), (safe_sub_func_int64_t_s_s(((*l_573) ^= ((safe_mod_func_int8_t_s_s((g_498[5] <= (p_56 ^ l_561)), (*l_259))) != ((safe_lshift_func_uint16_t_u_s((((g_15 < g_498[6]) != (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(1L, 14)), (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_572 | (*g_462)), 12)), p_57))))) <= 9L), (*l_259))) >= g_108[9]))), g_38))));
                    }


                    l_577[1][1][2] = (safe_sub_func_int16_t_s_s((l_574 ^= (*l_68)), (p_58 | p_57)));
                }
                else
                {
                    for (g_333 = 29; (g_333 == (-30)); g_333 = safe_sub_func_uint16_t_u_u(g_333, 5))
                    {
                        int l_580 = 0x1087FBF4L;
                        l_226 = func_81(l_580, (p_57 && func_74(l_581[6], &l_577[0][6][1])), &l_501);
                    }
                    for (g_88 = 0; g_88 < 3; g_88 += 1)
                    {
                        l_458[g_88] = &g_88;
                    }

                    for (g_331 = 0; (g_331 == (-18)); --g_331)
                    {
                        if (l_584)
                            break;
                    }
                    for (l_584 = 0; l_584 < 3; l_584 += 1)
                    {
                        g_131[l_584] = 0xFFF122EDL;
                    }
                }


                ;
                l_226 ^= (safe_sub_func_int8_t_s_s((*l_68), ((g_131[1] > ((*l_68) ^ (safe_add_func_int32_t_s_s((func_81(p_57, ((*l_589) |= g_11), l_292) != (*l_259)), (18446744073709551615UL && (*l_68)))))) == p_56)));
            }


            ;
        }
        else
        {
            unsigned short *l_592[6][9] = {{&g_528,&g_528,&g_528,&g_528,&g_528,(void*)0,&g_528,&g_528,&g_528},{&g_528,&g_528,&g_528,&g_505,(void*)0,&g_505,&g_528,&g_528,&g_528},{&g_528,&g_528,&g_528,(void*)0,&g_528,&g_528,&l_561,&l_561,(void*)0},{&g_528,&g_505,(void*)0,&g_505,&g_528,&g_528,&g_528,&g_528,&g_505},{&l_561,&g_528,&l_561,&g_528,&g_505,&g_505,&g_528,&l_561,&g_528},{&g_505,&l_561,&g_528,(void*)0,(void*)0,&g_528,&l_561,&g_505,&l_561}};
            int l_605[10][9][2] = {{{0x2A583508L,0xAA7195AEL},{0x236BD122L,0x43EE5101L},{0L,1L},{(-1L),(-10L)},{0x6F89FDFAL,(-10L)},{(-1L),1L},{0L,0x43EE5101L},{0x236BD122L,0xAA7195AEL},{0x2A583508L,8L}},{{(-1L),0x58EEDA52L},{0L,0xBA58FB5BL},{6L,0xE4E7F8ACL},{0x9F0D6883L,4L},{0xB6EF4260L,(-3L)},{0x43EE5101L,0x754A0978L},{(-1L),6L},{0x83ECA2A3L,1L},{0xC7C3790DL,0x7F7860A9L}},{{(-1L),0x236BD122L},{4L,0x6AE17430L},{0xAB486E36L,0xEF56CCB1L},{4L,0x5BD152E3L},{0x561291A6L,(-1L)},{(-3L),(-1L)},{0x5BD152E3L,0x2E0405ADL},{0xE232E4B2L,(-1L)},{0xEF56CCB1L,0xAFF04843L}},{{1L,1L},{0x0E710F18L,0x0E710F18L},{(-10L),0L},{0x754A0978L,0x561291A6L},{1L,0xCAE517FEL},{0L,1L},{0xCAE517FEL,0x561291A6L},{0xCAE517FEL,(-1L)},{0x83ECA2A3L,0x17871DBCL}},{{(-1L),0x652AC1BFL},{0L,0x0E710F18L},{0x9A801F09L,0xD3025A64L},{0xD3025A64L,0x58EEDA52L},{(-3L),(-1L)},{1L,0x21DACD85L},{1L,0xC7C3790DL},{8L,0x0A26A2D9L},{0x2A583508L,0xE4E7F8ACL}},{{0x652AC1BFL,8L},{(-1L),1L},{0x561291A6L,4L},{1L,0xBA58FB5BL},{0xE232E4B2L,6L},{(-1L),(-1L)},{(-10L),0x66D57E6AL},{0xEF56CCB1L,0L},{0xE434BD60L,0x2A583508L}},{{0xB669FF21L,1L},{1L,0x43EE5101L},{0x66D57E6AL,0x754A0978L},{0x0E710F18L,0x97F66DE9L},{0x21DACD85L,0x9F0D6883L},{(-1L),1L},{0xBA58FB5BL,0xE434BD60L},{0L,0x5BD152E3L},{0xAFF04843L,0x9A801F09L}},{{0x236BD122L,0x9A801F09L},{0xAFF04843L,0x5BD152E3L},{0L,0xE434BD60L},{0xBA58FB5BL,1L},{(-1L),0x9F0D6883L},{0x21DACD85L,0x97F66DE9L},{0x0E710F18L,0x754A0978L},{0x66D57E6AL,0x43EE5101L},{1L,1L}},{{0xB669FF21L,0x2A583508L},{0xE434BD60L,0L},{0xEF56CCB1L,0x66D57E6AL},{(-10L),(-1L)},{(-1L),6L},{0xE232E4B2L,0xBA58FB5BL},{1L,4L},{0x561291A6L,1L},{(-1L),4L}},{{0xB669FF21L,(-1L)},{0x236BD122L,0L},{4L,0x9A801F09L},{(-1L),0x754A0978L},{1L,0xEF56CCB1L},{0x6F89FDFAL,0x66D57E6AL},{0xAA7195AEL,0xAA7195AEL},{1L,0x652AC1BFL},{0x561291A6L,0xB669FF21L}}};
            char *l_606 = (void*)0;
            char *l_607 = (void*)0;
            unsigned *l_608 = &g_65;
            int i, j, k;
            (*g_220) ^= ((*l_259) = 0x738F7327L);
            g_220 = &l_553[1];

            ;
            if ((p_56 & func_81((p_57 = (safe_mod_func_int8_t_s_s(0x5FL, 7UL))), (~(safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_58, g_38)), (safe_rshift_func_int16_t_s_u((l_609 |= ((((*l_608) = (safe_sub_func_int32_t_s_s(p_58, ((safe_rshift_func_int8_t_s_s(((*l_259) = l_605[9][8][0]), 6)) <= func_74((*l_270), &g_11))))) ^ (*l_68)) <= l_605[7][8][0])), 6)))), p_58))), l_292)))
            {
                int **l_610 = &g_220;
                (*l_610) = &l_553[0];

                ;
            }
            else
            {
                int **l_611 = &g_220;
                (*l_611) = &g_131[1];

                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;

        for (g_110 = 1; (g_110 >= 0); g_110 -= 1)
        {
            int l_627 = 1L;
            int l_630 = 0xF4A6B6E7L;
            for (g_117 = 0; (g_117 <= 2); g_117 += 1)
            {
                return &g_131[1];



            }
            for (g_331 = 0; (g_331 <= 2); g_331 += 1)
            {
                short *l_626[2][3] = {{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}};
                int i, j;
                for (l_226 = 0; (l_226 <= 1); l_226 += 1)
                {
                    for (g_173 = 0; (g_173 <= 2); g_173 += 1)
                    {
                        int i, j, k;
                        g_131[g_173] = (safe_lshift_func_int8_t_s_u(l_332[l_226][(g_173 + 3)][(l_226 + 6)], 6));
                    }
                }
                for (g_65 = 0; (g_65 <= 2); g_65 += 1)
                {
                    unsigned short *l_618 = &l_236;
                    unsigned short *l_619 = &g_528;
                    char *l_628 = (void*)0;
                    char *l_629 = &g_216;
                    int i;
                    l_630 |= (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u(((*l_619) ^= ((*l_618) = 0x2B66L)), (safe_mul_func_uint16_t_u_u((((void*)0 != &g_14[0]) && (6UL > 0x5CCBL)), 0xAC75L)))) != ((*l_629) &= (safe_rshift_func_int8_t_s_u((g_131[g_331] < p_56), ((safe_rshift_func_int8_t_s_s(((&g_249 == l_626[1][2]) ^ l_627), 2)) < (*l_68)))))) | (*l_68)), 15));
                }
            }
        }
        if ((func_74((safe_mod_func_uint32_t_u_u(p_56, (safe_sub_func_int64_t_s_s(func_74(((((safe_rshift_func_uint16_t_u_u(0x733FL, 3)) != (safe_div_func_int8_t_s_s(g_65, (safe_lshift_func_uint8_t_u_u((*l_68), 5))))) ^ 0xC4BC9DE0L) & g_641[9]), &g_216), (safe_lshift_func_int16_t_s_u(g_331, 0)))))), &g_216) | g_641[9]))
        {
            return &g_131[0];



        }
        else
        {
            int *l_645 = &g_91;
            return l_645;



        }
    }

    ;
    ;
    ;
lbl_731:
    for (g_88 = 0; (g_88 != 6); g_88 = safe_add_func_int32_t_s_s(g_88, 2))
    {
        int l_660 = 0x9D04F415L;
        unsigned long long *l_661 = &g_159;
        unsigned long long *l_662 = &g_663;
        short *l_664[2];
        char l_687 = 0xF2L;
        volatile int **l_719[5];
        int i;
        for (i = 0; i < 2; i++)
            l_664[i] = &l_501;
        for (i = 0; i < 5; i++)
            l_719[i] = &l_718;
        if ((func_81(g_115, (((safe_rshift_func_int16_t_s_u(0x6D83L, 0)) & (safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((*l_662) = ((*l_661) &= ((*l_401) |= (((safe_mod_func_int64_t_s_s((g_110 && (**g_461)), g_312)) || (g_528 || g_108[2])) > (safe_sub_func_uint8_t_u_u((l_660 & 1L), 0xBEL)))))) | (*l_68)), (*l_68))), g_641[3])) || 0xF8L), l_660))) <= l_660), l_664[1]) & l_660))
        {
            unsigned short *l_665 = &g_528;
            int l_666 = 0xC2CA8116L;
            g_220 = &g_91;

            ;
            l_666 |= func_81(((*l_665) = p_56), g_15, &g_88);
        }
        else
        {
            unsigned short l_679 = 65532UL;
            int l_680 = (-1L);
            int l_681 = (-1L);
            short *l_688 = &g_21;
            unsigned *l_715 = &l_609;
            for (g_159 = 0; (g_159 < 20); g_159 = safe_add_func_uint32_t_u_u(g_159, 8))
            {
                int l_686 = 0x3C8EF328L;
                int l_703 = 0x69418BA9L;
                int **l_710 = &g_220;
                if ((safe_lshift_func_uint8_t_u_u((~(p_57 > (p_58 <= (p_57 | (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((l_681 = (safe_rshift_func_int16_t_s_u((l_680 |= (safe_div_func_int32_t_s_s(p_57, (g_65 &= l_679)))), 6))), 0xCDL)), ((func_81(p_58, (safe_mul_func_uint8_t_u_u(1UL, (func_81(((safe_add_func_int32_t_s_s((1UL >= l_686), l_686)) <= 0xC2FAL), l_687, l_688) >= p_58))), &l_501) & (*l_68)) & p_58))))))), 6)))
                {
                    int *l_691 = (void*)0;
                    for (g_117 = 0; (g_117 != 17); g_117 = safe_add_func_int32_t_s_s(g_117, 8))
                    {
                        return l_691;




                    }
                }
                else
                {
                    char ***l_693 = &g_692;
                    g_131[1] = (((*l_693) = g_692) == l_694[1]);
                    if (p_58)
                    {
                        int *l_696 = &l_681;
                        long long ***l_698 = &g_461;
                        int **l_699 = (void*)0;
                        int **l_700[4] = {&l_68,&l_68,&l_68,&l_68};
                        int i;
                        (*l_696) = 1L;
                        (*l_698) = l_697;
                        if ((*l_696))
                            break;
                        g_220 = &g_131[1];

                        ;
                    }
                    else
                    {
                        char *l_701[1][7];
                        int *l_702[3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_701[i][j] = &l_687;
                        }
                        for (i = 0; i < 3; i++)
                            l_702[i] = &l_226;
                        l_703 |= func_74(p_57, l_701[0][6]);

                        ;
                    }


                }


                for (g_663 = 3; (g_663 != 24); g_663 = safe_add_func_uint32_t_u_u(g_663, 2))
                {
                    for (g_331 = 0; (g_331 >= 14); g_331 = safe_add_func_int64_t_s_s(g_331, 9))
                    {
                        unsigned ***l_708 = &g_436;
                        int **l_709 = &l_68;
                        (*l_708) = g_436;
                        (*l_709) = &g_131[1];

                        ;
                    }
                }
                (*l_710) = &l_703;

                ;
            }
            if ((safe_mul_func_uint8_t_u_u((&l_664[1] != &l_664[1]), (safe_rshift_func_uint8_t_u_u(func_81(g_641[9], ((*l_715) ^= g_115), &l_501), 3)))))
            {
                volatile int *l_717 = &g_115;
                volatile int **l_716[7][6][5] = {{{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,(void*)0,&l_717,&l_717,(void*)0}},{{&l_717,&l_717,&l_717,&l_717,(void*)0},{&l_717,(void*)0,(void*)0,&l_717,(void*)0},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,(void*)0,&l_717},{&l_717,&l_717,&l_717,&l_717,(void*)0}},{{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,(void*)0,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{(void*)0,(void*)0,&l_717,(void*)0,&l_717},{(void*)0,(void*)0,&l_717,&l_717,&l_717},{(void*)0,&l_717,(void*)0,&l_717,&l_717}},{{&l_717,(void*)0,&l_717,&l_717,&l_717},{(void*)0,(void*)0,&l_717,(void*)0,(void*)0},{&l_717,&l_717,&l_717,&l_717,(void*)0},{&l_717,&l_717,(void*)0,(void*)0,&l_717},{&l_717,&l_717,&l_717,&l_717,(void*)0},{&l_717,(void*)0,&l_717,(void*)0,(void*)0}},{{(void*)0,&l_717,(void*)0,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,(void*)0,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717}},{{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,(void*)0,(void*)0,&l_717,(void*)0},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{&l_717,&l_717,&l_717,&l_717,&l_717},{(void*)0,&l_717,(void*)0,&l_717,&l_717}},{{&l_717,&l_717,&l_717,&l_717,&l_717},{(void*)0,&l_717,&l_717,&l_717,&l_717},{(void*)0,&l_717,(void*)0,&l_717,&l_717},{&l_717,&l_717,&l_717,(void*)0,&l_717},{&l_717,&l_717,&l_717,(void*)0,&l_717},{&l_717,&l_717,&l_717,(void*)0,(void*)0}}};
                int i, j, k;
                l_718 = &g_115;
                (*l_717) = ((-1L) || g_159);
            }
            else
            {
                (*l_718) = g_15;
            }
        }
        l_718 = &g_115;
        if (g_720[4][0][2])
            continue;
    }
    if ((safe_add_func_int32_t_s_s(((*l_68) | ((*l_401) = (((*l_695) = (((*l_718) < ((void*)0 == g_692)) | func_81((p_57 = g_498[5]), g_131[1], ((*l_724) = &l_501)))) & (*l_68)))), g_11)))
    {
        int *l_736 = &l_226;
        unsigned *l_755 = &g_65;
        unsigned **l_754 = &l_755;
        for (g_110 = 11; (g_110 < 3); g_110 = safe_sub_func_int16_t_s_s(g_110, 1))
        {
            short l_732 = 0x0183L;
            int *l_733[8];
            int i;
            for (i = 0; i < 8; i++)
                l_733[i] = &g_131[1];
            for (g_73 = 0; (g_73 <= 29); g_73 = safe_add_func_uint32_t_u_u(g_73, 6))
            {
                short l_729[6] = {0xDF00L,7L,7L,0xDF00L,7L,7L};
                int i;
                if (l_729[5])
                {
                    g_220 = l_730;

                    ;
                    if (p_57)
                        break;
                }
                else
                {
                    if ((*l_68))
                        break;
                }
                if (p_57)
                {
                    if (p_57)
                        goto lbl_731;
                }
                else
                {
                    return &g_131[2];




                }
                if (l_732)
                    break;
                if (p_57)
                    continue;
            }
            (*l_718) = (g_131[0] |= p_56);
            for (l_609 = 0; (l_609 > 33); ++l_609)
            {
                unsigned *l_745 = &g_65;
                int l_746 = (-2L);
                int l_747 = (-1L);
                g_220 = l_736;

                ;
                if (p_58)
                    continue;
                (*g_220) = (l_747 ^= func_81((p_57 = (((safe_mul_func_uint16_t_u_u((g_505 = (!(*l_718))), (((*l_736) &= (+p_57)) < func_81(g_11, g_108[0], &g_331)))) & 0xF9ECL) && ((*l_736) ^= p_56))), (((*l_745) = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((p_56 == (*l_68)), p_58)), p_56)), p_56))) && l_746), (*l_724)));
                for (g_159 = 0; (g_159 == 6); g_159 = safe_add_func_int64_t_s_s(g_159, 2))
                {
                    unsigned ***l_756 = &l_754;
                    volatile int **l_757[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_757[i] = &l_718;
                    if (l_747)
                        break;
                    (*l_718) ^= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_641[6], (*l_736))), 0L));
                    (*l_756) = l_754;
                    g_758 = &g_115;
                }
            }
            (*g_758) = (func_81((g_528 = g_331), g_65, &g_21) > (*g_99));
        }
        return &g_38;




    }
    else
    {
        int **l_767 = &g_220;
        short *l_785 = &g_21;
        for (g_505 = 0; (g_505 < 35); g_505 = safe_add_func_int64_t_s_s(g_505, 3))
        {
            long long *l_769 = &g_333;
            int l_778 = 1L;
            unsigned char **l_783 = (void*)0;
            unsigned char ***l_784 = &l_384;
            short *l_786 = &g_88;
            int *l_787 = &l_417;
            int l_788[4][7][3] = {{{(-5L),0xFA9AAAEAL,(-5L)},{(-1L),0x6645059EL,(-2L)},{(-1L),(-1L),(-8L)},{3L,0x6645059EL,0x6645059EL},{(-8L),0xFA9AAAEAL,0x58C0CA02L},{3L,0x92FB3904L,3L},{(-1L),(-8L),0x58C0CA02L}},{{(-1L),(-1L),0x6645059EL},{(-5L),(-8L),(-8L)},{0x6645059EL,0x92FB3904L,(-2L)},{(-5L),0xFA9AAAEAL,(-5L)},{(-1L),0x6645059EL,(-2L)},{(-1L),(-1L),(-8L)},{3L,0x6645059EL,(-2L)}},{{0x58C0CA02L,(-8L),(-1L)},{0x92FB3904L,0x6645059EL,0x92FB3904L},{(-5L),0x58C0CA02L,(-1L)},{3L,3L,(-2L)},{0xFA9AAAEAL,0x58C0CA02L,0x58C0CA02L},{(-2L),0x6645059EL,(-1L)},{0xFA9AAAEAL,(-8L),0xFA9AAAEAL}},{{3L,(-2L),(-1L)},{(-5L),(-5L),0x58C0CA02L},{0x92FB3904L,(-2L),(-2L)},{0x58C0CA02L,(-8L),(-1L)},{0x92FB3904L,0x6645059EL,0x92FB3904L},{(-5L),0x58C0CA02L,(-1L)},{3L,3L,(-2L)}}};
            int i, j, k;
            for (g_65 = 0; g_65 < 10; g_65 += 1)
            {
                g_108[g_65] = 0xDE31C75F7F9D29A1LL;
            }
            (*g_758) = (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((void*)0 == l_767), ((*l_769) = ((**g_461) = g_768)))) != p_56), (p_58 >= g_15))), ((safe_div_func_uint32_t_u_u(1UL, func_81(p_56, (g_720[4][0][2] ^ 0x597CF981L), &g_331))) < (-4L))));
            l_788[2][3][2] ^= ((*l_787) |= ((l_778 = (((**g_461) ^= ((func_81(g_216, (safe_mul_func_uint16_t_u_u((g_528 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_778, 0)), 0x52L))), func_81(g_505, ((0x01F6L | ((((safe_mul_func_uint8_t_u_u(0UL, (p_58 < (((*l_784) = l_783) != (void*)0)))) >= 0x69L) < l_778) | p_58)) != g_216), l_785))), l_786) >= 0xF459B2C1L) > (*g_758))) && 0xD47ABDDB759058EDLL)) != g_498[5]));

            ;
        }

        ;
    }

    ;
    ;
    return &g_38;




}







static char func_74(unsigned char p_75, char * p_76)
{
    short *l_85[9][3][4] = {{{(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,(void*)0}},{{&g_21,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21},{(void*)0,&g_21,&g_21,(void*)0}},{{&g_21,&g_21,&g_21,&g_21},{(void*)0,&g_21,(void*)0,&g_21},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,(void*)0,(void*)0,&g_21},{(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,(void*)0,&g_21}},{{&g_21,(void*)0,&g_21,&g_21},{&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_21,(void*)0,&g_21}}};
    short **l_86[9][4][7] = {{{&l_85[7][2][2],&l_85[6][2][2],(void*)0,&l_85[1][0][2],&l_85[2][1][2],(void*)0,&l_85[0][0][1]},{&l_85[7][2][2],&l_85[7][2][2],&l_85[6][2][2],&l_85[1][0][2],&l_85[4][0][1],(void*)0,(void*)0},{(void*)0,&l_85[0][2][0],&l_85[4][0][1],&l_85[0][0][1],&l_85[5][1][1],(void*)0,&l_85[7][2][2]},{&l_85[0][0][1],(void*)0,&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[8][0][2]}},{{&l_85[7][2][2],&l_85[0][0][3],&l_85[8][1][1],&l_85[2][2][0],(void*)0,(void*)0,(void*)0},{&l_85[4][2][2],&l_85[5][0][1],&l_85[7][2][2],&l_85[6][2][3],&l_85[7][2][2],&l_85[0][0][1],&l_85[3][0][0]},{&l_85[1][1][0],(void*)0,(void*)0,&l_85[8][0][0],&l_85[4][0][1],(void*)0,&l_85[1][2][0]},{&l_85[4][2][0],&l_85[7][2][2],(void*)0,&l_85[8][1][1],&l_85[0][2][0],&l_85[1][2][0],&l_85[4][0][1]}},{{&l_85[0][0][1],(void*)0,&l_85[7][2][2],&l_85[7][1][2],(void*)0,(void*)0,&l_85[6][1][0]},{&l_85[7][2][2],&l_85[5][1][0],(void*)0,(void*)0,&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2]},{&l_85[7][2][2],&l_85[7][1][2],&l_85[7][1][2],&l_85[7][2][2],&l_85[3][0][0],(void*)0,&l_85[7][2][2]},{(void*)0,&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2]}},{{&l_85[3][1][0],&l_85[6][2][2],&l_85[1][2][0],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2]},{&l_85[7][1][2],&l_85[8][0][0],&l_85[7][2][2],&l_85[7][2][2],(void*)0,&l_85[6][2][2],&l_85[7][2][2]},{&l_85[4][1][1],(void*)0,&l_85[3][1][0],&l_85[7][2][2],&l_85[7][2][2],&l_85[4][0][1],&l_85[6][1][0]},{&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[4][2][0],&l_85[6][2][2],&l_85[7][2][2],&l_85[4][0][1]}},{{&l_85[3][0][0],&l_85[5][1][1],&l_85[7][2][2],&l_85[7][2][2],(void*)0,(void*)0,&l_85[1][2][0]},{(void*)0,&l_85[1][0][2],&l_85[4][2][0],&l_85[7][2][2],(void*)0,&l_85[7][2][2],&l_85[3][0][0]},{(void*)0,&l_85[7][2][2],&l_85[4][2][0],&l_85[4][0][1],&l_85[7][1][2],&l_85[6][2][3],&l_85[7][2][2]},{(void*)0,&l_85[7][2][2],&l_85[7][2][2],&l_85[0][0][1],(void*)0,&l_85[7][2][2],&l_85[7][1][2]}},{{&l_85[1][1][0],(void*)0,&l_85[7][2][2],(void*)0,&l_85[5][1][1],&l_85[4][2][0],&l_85[7][2][2]},{&l_85[7][2][2],&l_85[6][2][3],(void*)0,&l_85[7][2][2],&l_85[1][0][2],&l_85[1][0][2],&l_85[7][2][2]},{(void*)0,&l_85[7][2][2],(void*)0,&l_85[3][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[0][0][3]},{&l_85[8][1][1],&l_85[7][2][2],&l_85[1][0][2],&l_85[7][1][2],(void*)0,(void*)0,&l_85[0][2][0]}},{{&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[8][0][2],&l_85[7][2][2],&l_85[7][2][2]},{&l_85[7][2][2],&l_85[1][1][1],&l_85[5][1][1],&l_85[4][0][2],&l_85[6][2][2],&l_85[1][0][2],&l_85[8][0][2]},{&l_85[6][1][0],(void*)0,&l_85[6][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[4][2][0],&l_85[7][2][2]},{&l_85[7][2][2],&l_85[6][2][2],&l_85[7][2][2],&l_85[7][2][2],&l_85[7][0][1],&l_85[7][2][2],(void*)0}},{{(void*)0,&l_85[7][2][2],&l_85[1][0][2],&l_85[7][2][2],&l_85[6][1][0],&l_85[7][2][2],&l_85[5][1][0]},{&l_85[5][1][0],&l_85[7][2][2],&l_85[8][1][0],&l_85[7][2][2],&l_85[7][2][2],(void*)0,&l_85[6][2][3]},{(void*)0,&l_85[7][2][2],&l_85[3][0][0],&l_85[7][2][2],&l_85[7][2][2],&l_85[6][2][2],&l_85[7][2][2]},{&l_85[2][2][0],&l_85[7][2][2],&l_85[7][2][2],&l_85[1][0][2],&l_85[4][1][1],(void*)0,&l_85[3][0][0]}},{{&l_85[1][2][0],&l_85[6][2][2],&l_85[3][1][0],&l_85[7][1][2],&l_85[7][2][2],(void*)0,&l_85[6][2][2]},{&l_85[1][0][2],&l_85[7][2][2],&l_85[7][2][2],(void*)0,&l_85[7][2][2],(void*)0,&l_85[7][2][2]},{(void*)0,(void*)0,&l_85[7][2][2],&l_85[4][0][2],&l_85[7][2][2],&l_85[3][1][0],&l_85[1][1][0]},{&l_85[6][2][3],(void*)0,&l_85[4][0][1],&l_85[3][2][2],&l_85[8][0][0],&l_85[7][2][2],&l_85[0][2][0]}}};
    unsigned l_92 = 0x4BC7F4BDL;
    short *l_100 = &g_21;
    long long *l_107 = &g_108[5];
    int l_109 = 0x60A67ACBL;
    int *l_111 = (void*)0;
    int *l_112 = &g_91;
    unsigned *l_116 = &g_117;
    short *l_146 = &g_88;
    int i, j, k;
    (*l_112) = (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(func_81(g_65, g_65, (g_87 = l_85[7][2][2])), l_92)), (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((!(((safe_sub_func_uint32_t_u_u(((g_99 = &g_21) != l_100), (g_110 = (l_109 = (safe_add_func_uint64_t_u_u((((*l_107) = (safe_div_func_uint64_t_u_u(g_65, (safe_div_func_int8_t_s_s(0xACL, p_75))))) & g_15), p_75)))))) ^ l_92) >= l_92)), 0xA0L)), p_75))));

    ;
    ;
    if (func_81((safe_mod_func_int16_t_s_s(g_115, 0x3F17L)), ((*l_112) |= ((*l_116) = (&l_109 != &g_91))), &g_88))
    {
        short *l_142 = &g_21;
        short *l_143 = (void*)0;
        int l_144 = 0x577DD433L;
        short *l_145 = &g_21;
        int l_170 = 1L;
        long long l_214 = 1L;
        int *l_218 = &g_131[2];
        int **l_219[4] = {&l_112,&l_112,&l_112,&l_112};
        int i;
    }
    else
    {
        int *l_221 = (void*)0;
        int **l_222 = &g_220;
        (*l_222) = l_221;

        ;
        (*l_112) = p_75;
        for (l_109 = 11; (l_109 > 20); ++l_109)
        {
            int l_225[3][3] = {{0xF598FE16L,1L,0xF598FE16L},{0x7DB854CEL,0x7DB854CEL,0x7DB854CEL},{0xF598FE16L,1L,0xF598FE16L}};
            int i, j;
            if (p_75)
                break;
            if (l_225[2][2])
                break;
        }
    }
    return (*l_112);
}







static char func_81(unsigned short p_82, unsigned p_83, short * p_84)
{
    int l_89 = 0L;
    int *l_90 = &g_91;
    (*l_90) = (p_82 < l_89);
    return (*l_90);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_498[i], "g_498[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_641[i], "g_641[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_663, "g_663", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_720[i][j][k], "g_720[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_934[i], "g_934[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_975[i][j][k], "g_975[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1122, "g_1122", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1436, "g_1436", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
