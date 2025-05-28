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



static volatile unsigned g_16[6] = {0xBF33880EL,0xBF33880EL,0xBF33880EL,0xBF33880EL,0xBF33880EL,0xBF33880EL};
static unsigned g_18 = 0x67101392L;
static unsigned short g_24 = 0x0351L;
static int g_32 = 0x9495E0E2L;
static unsigned g_48 = 0x618DE0F4L;
static unsigned *g_47 = &g_48;
static unsigned g_65 = 0x23EBAA2DL;
static const int g_68 = 0x4B46114AL;
static short g_70 = 0x237EL;
static short g_72 = 0x93B6L;
static int g_78 = 0x8DDFA37AL;
static int *g_77 = &g_78;
static int *g_79 = &g_78;
static char g_105 = 0x77L;
static unsigned long long g_125 = 18446744073709551611UL;
static int g_128 = 3L;
static long long g_178 = 0L;
static char g_186[1][2] = {{(-7L),(-7L)}};
static unsigned long long g_222 = 0x7B0E3E12D5311EAFLL;
static unsigned char g_238 = 0xD0L;
static volatile char *g_269 = (void*)0;
static volatile char **g_268 = &g_269;
static unsigned short g_275 = 0x97CAL;
static unsigned short g_277 = 65529UL;
static const int *g_281 = &g_78;
static unsigned *g_286 = &g_48;
static unsigned **g_285 = &g_286;
static char g_295[3] = {0L,0L,0L};
static unsigned *g_323 = (void*)0;
static volatile long long *g_328 = (void*)0;
static volatile long long ** const g_327[5] = {&g_328,&g_328,&g_328,&g_328,&g_328};
static int g_381 = 3L;
static short *g_403 = &g_72;
static short **g_402[3][9][3] = {{{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{(void*)0,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,(void*)0,&g_403},{&g_403,&g_403,&g_403},{&g_403,(void*)0,&g_403},{&g_403,&g_403,(void*)0},{&g_403,(void*)0,&g_403}},{{(void*)0,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,(void*)0},{&g_403,&g_403,(void*)0},{&g_403,&g_403,(void*)0},{&g_403,&g_403,&g_403},{&g_403,(void*)0,&g_403}},{{&g_403,(void*)0,&g_403},{&g_403,(void*)0,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,&g_403},{&g_403,&g_403,(void*)0},{&g_403,&g_403,(void*)0},{&g_403,&g_403,(void*)0}}};
static short ***g_401 = &g_402[0][1][2];
static short ****g_400 = &g_401;
static unsigned char g_443 = 0x4CL;
static char *g_459 = &g_295[1];
static char **g_458 = &g_459;
static unsigned short g_470[3] = {0x3296L,0x3296L,0x3296L};
static unsigned short g_475[2] = {0x6345L,0x6345L};
static long long g_510 = 0L;
static const int g_533 = 1L;
static long long g_574 = 1L;
static short g_603 = 0xE6B7L;
static unsigned g_616 = 0xB05777F1L;
static unsigned long long g_656 = 0x0841A4477D505B77LL;
static char **g_669 = (void*)0;
static long long *g_681[4][7] = {{&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510},{&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510},{&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510},{&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510}};
static long long ****g_699 = (void*)0;
static unsigned long long *g_726 = &g_222;
static unsigned long long **g_725 = &g_726;
static int g_753 = (-10L);
static const volatile unsigned short g_876 = 0x1E66L;



static unsigned long long func_1(void);
static unsigned short func_2(char p_3, short p_4, int p_5);
static char func_6(char p_7, unsigned p_8, int p_9, char p_10);
static char func_19(unsigned p_20, unsigned long long p_21, int p_22, unsigned * const p_23);
static int func_25(unsigned short p_26);
static int * func_28(int p_29, int * p_30);
static const int * func_33(const long long p_34, int * p_35, int p_36);
static unsigned long long func_41(unsigned long long p_42, unsigned * p_43, int * p_44, int * p_45, const unsigned short p_46);
static int * func_49(unsigned p_50, int p_51, const char p_52, unsigned short p_53);
static long long func_54(unsigned long long p_55, unsigned * p_56, unsigned short p_57, unsigned char p_58, const short p_59);
static unsigned long long func_1(void)
{
    const unsigned l_13[6][5] = {{0xBE8F2100L,0xBE8F2100L,0UL,0xBE8F2100L,0xBE8F2100L},{0x934215E1L,18446744073709551615UL,0x934215E1L,0x934215E1L,18446744073709551615UL},{0xBE8F2100L,0x4678DC2AL,0x4678DC2AL,0xBE8F2100L,0x4678DC2AL},{18446744073709551615UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL},{0x4678DC2AL,0xBE8F2100L,0x4678DC2AL,0x4678DC2AL,0xBE8F2100L},{18446744073709551615UL,0x934215E1L,0x934215E1L,18446744073709551615UL,0x934215E1L}};
    unsigned *l_17 = &g_18;
    long long l_27[4][9][3] = {{{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL}},{{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L}},{{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL}},{{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L},{0x359B504DBF0CF865LL,0x359B504DBF0CF865LL,0x359B504DBF0CF865LL},{2L,2L,2L}}};
    int *l_606 = (void*)0;
    int *l_607 = &g_78;
    int *l_880 = &g_32;
    int i, j, k;
    (*l_880) = ((*l_607) = ((+0L) | func_2(func_6((safe_div_func_uint16_t_u_u(l_13[1][1], 0x43B2L)), ((*l_17) = (safe_rshift_func_int8_t_s_u(g_16[0], 2))), l_13[1][1], ((*l_607) = func_19(g_24, l_13[2][3], ((*l_607) = func_25(l_27[2][2][2])), g_286))), l_27[2][8][2], g_475[0])));

    ;



    ;
    return (*g_726);
}







static unsigned short func_2(char p_3, short p_4, int p_5)
{
    return p_4;
}







static char func_6(char p_7, unsigned p_8, int p_9, char p_10)
{
    int **l_858 = &g_77;
    unsigned short l_877 = 0x63BFL;
    (*l_858) = (void*)0;

    ;
    for (p_10 = 2; (p_10 >= 0); p_10 -= 1)
    {
        short l_875 = 0L;
        long long *l_878 = (void*)0;
        long long *l_879 = &g_178;
        int i;
        (*l_858) = &g_78;

        ;
    }

    ;
    return l_877;
}







static char func_19(unsigned p_20, unsigned long long p_21, int p_22, unsigned * const p_23)
{
    char l_608 = 0x9FL;
    long long *l_609 = &g_178;
    unsigned **l_612 = &g_47;
    unsigned ***l_613 = &l_612;
    int *l_614 = (void*)0;
    long long l_624[9][3] = {{(-1L),(-1L),0xA7E381A9682A7927LL},{5L,0L,0x86F8B911EFF09AA6LL},{(-1L),(-1L),0xA7E381A9682A7927LL},{5L,0L,0x86F8B911EFF09AA6LL},{(-1L),(-1L),0xA7E381A9682A7927LL},{5L,0L,0x86F8B911EFF09AA6LL},{(-1L),(-1L),0xA7E381A9682A7927LL},{5L,0L,0x86F8B911EFF09AA6LL},{(-1L),(-1L),0xA7E381A9682A7927LL}};
    int *l_627 = &g_32;
    unsigned short *l_652 = &g_475[0];
    char *l_664 = (void*)0;
    char *l_668 = &g_105;
    char **l_667 = &l_668;
    unsigned *l_745 = &g_65;
    short l_759[10];
    unsigned l_784[8][7] = {{0x0B9211B6L,0x835D72DCL,0x8E408536L,1UL,0x4CBFF2D1L,0UL,0x4CBFF2D1L},{0x6DEAA2CDL,1UL,1UL,0x6DEAA2CDL,18446744073709551614UL,0x6DEAA2CDL,1UL},{18446744073709551615UL,0xC4A30F02L,0x0B9211B6L,1UL,0x0B9211B6L,0xC4A30F02L,18446744073709551615UL},{0UL,1UL,0xCEE83863L,1UL,0UL,0UL,1UL},{0UL,0x835D72DCL,0UL,0UL,0x0B9211B6L,0x61D71CBBL,0x4CBFF2D1L},{1UL,18446744073709551614UL,0UL,0UL,1UL,0xCEE83863L,1UL},{0x4CBFF2D1L,1UL,0x8E408536L,0x835D72DCL,0x0B9211B6L,0x835D72DCL,0x8E408536L},{0x6DEAA2CDL,0x6DEAA2CDL,0xCEE83863L,0UL,0xCEE83863L,0x6DEAA2CDL,0x6DEAA2CDL}};
    int *l_786 = &g_78;
    long long **l_800 = &l_609;
    unsigned char l_817 = 0xD7L;
    int i, j;
    for (i = 0; i < 10; i++)
        l_759[i] = 0xB9ECL;
    if (((p_22 >= (((*l_609) = l_608) | (safe_mul_func_uint8_t_u_u((p_20 | (func_41((&g_323 != ((*l_613) = l_612)), &g_65, l_614, &g_78, func_41(p_22, &g_65, l_614, &g_78, g_381)) && g_125)), p_20)))) | (*g_459)))
    {
        unsigned long long l_615 = 18446744073709551615UL;
        unsigned char *l_617 = (void*)0;
        unsigned char *l_618[7];
        int l_619 = 0x9D2F84F1L;
        long long ** const l_621 = &l_609;
        long long ** const *l_620 = &l_621;
        long long ** const **l_622 = &l_620;
        unsigned char l_623 = 0UL;
        int **l_625 = &l_614;
        int **l_626[2];
        int i;
        for (i = 0; i < 7; i++)
            l_618[i] = &g_238;
        for (i = 0; i < 2; i++)
            l_626[i] = &g_79;
        l_627 = ((*l_625) = &l_619);

        ;
        ;
        return (*g_459);
    }
    else
    {
        unsigned *l_630[2][9][6] = {{{&g_616,&g_616,&g_65,&g_616,(void*)0,&g_616},{&g_616,&g_616,&g_616,&g_616,(void*)0,&g_616},{&g_616,(void*)0,&g_616,&g_616,&g_616,&g_616},{&g_616,(void*)0,&g_616,&g_65,&g_616,&g_616},{&g_616,(void*)0,&g_65,&g_65,(void*)0,&g_616},{&g_616,&g_616,&g_65,&g_616,(void*)0,&g_616},{&g_616,&g_616,&g_616,&g_616,(void*)0,&g_616},{&g_616,(void*)0,&g_616,&g_616,&g_616,&g_616},{&g_616,(void*)0,&g_616,&g_65,&g_616,&g_616}},{{&g_616,(void*)0,&g_65,&g_65,(void*)0,&g_616},{&g_616,&g_616,&g_65,&g_616,(void*)0,&g_616},{&g_616,&g_616,&g_616,&g_616,(void*)0,&g_616},{&g_616,(void*)0,&g_616,&g_616,&g_616,(void*)0},{&g_65,&g_616,&g_48,&g_65,&g_616,&g_65},{&g_48,&g_65,&g_65,&g_65,&g_65,&g_48},{&g_65,&g_616,&g_65,&g_48,&g_616,&g_65},{(void*)0,&g_616,&g_48,(void*)0,&g_65,(void*)0},{(void*)0,&g_65,(void*)0,&g_48,&g_616,(void*)0}}};
        int **l_631 = &g_77;
        int l_638[9][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
        unsigned short *l_639 = (void*)0;
        unsigned short *l_640 = &g_470[0];
        char **l_665 = &g_459;
        short **l_672 = (void*)0;
        int l_720 = 0L;
        unsigned long long **l_727[7][4] = {{(void*)0,&g_726,&g_726,&g_726},{(void*)0,(void*)0,(void*)0,&g_726},{&g_726,&g_726,&g_726,(void*)0},{&g_726,(void*)0,(void*)0,&g_726},{(void*)0,(void*)0,&g_726,(void*)0},{(void*)0,&g_726,&g_726,&g_726},{(void*)0,(void*)0,(void*)0,&g_726}};
        long long **l_808 = &g_681[3][1];
        long long ***l_807[9][3][7] = {{{&l_808,&l_808,&l_808,&l_808,&l_808,(void*)0,&l_808},{&l_808,(void*)0,&l_808,(void*)0,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,&l_808,&l_808,&l_808,&l_808}},{{(void*)0,&l_808,&l_808,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,(void*)0,&l_808,&l_808,&l_808,&l_808}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_808,&l_808,&l_808},{(void*)0,&l_808,&l_808,&l_808,&l_808,&l_808,(void*)0},{&l_808,&l_808,&l_808,&l_808,&l_808,&l_808,&l_808}},{{&l_808,(void*)0,&l_808,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,(void*)0,(void*)0,&l_808,&l_808},{&l_808,(void*)0,&l_808,&l_808,(void*)0,&l_808,&l_808}},{{&l_808,&l_808,&l_808,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,(void*)0,&l_808,(void*)0,&l_808,&l_808},{(void*)0,&l_808,(void*)0,&l_808,&l_808,&l_808,&l_808}},{{&l_808,&l_808,&l_808,&l_808,&l_808,(void*)0,(void*)0},{&l_808,(void*)0,&l_808,&l_808,&l_808,(void*)0,&l_808},{&l_808,&l_808,&l_808,&l_808,(void*)0,(void*)0,(void*)0}},{{&l_808,(void*)0,&l_808,&l_808,&l_808,(void*)0,&l_808},{&l_808,&l_808,(void*)0,(void*)0,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,(void*)0,&l_808,(void*)0,&l_808}},{{(void*)0,(void*)0,(void*)0,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,&l_808,(void*)0,&l_808,(void*)0},{(void*)0,&l_808,&l_808,(void*)0,(void*)0,&l_808,&l_808}},{{&l_808,(void*)0,&l_808,&l_808,&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808,&l_808,(void*)0,&l_808,(void*)0},{&l_808,&l_808,(void*)0,(void*)0,&l_808,&l_808,&l_808}}};
        unsigned short ** const l_809 = &l_639;
        short l_845 = (-5L);
        int i, j, k;
        (*l_613) = (void*)0;

        ;
        if ((safe_add_func_int8_t_s_s(p_22, p_22)))
        {
            short **l_647[7] = {&g_403,&g_403,&g_403,&g_403,&g_403,&g_403,&g_403};
            int l_650 = 0x6DA11F16L;
            unsigned short **l_651[9] = {&l_639,(void*)0,(void*)0,&l_639,(void*)0,(void*)0,&l_639,(void*)0,(void*)0};
            unsigned short l_692 = 65535UL;
            const int *l_709 = &g_32;
            char *l_746 = &l_608;
            unsigned *l_752 = &g_65;
            unsigned char *l_778 = (void*)0;
            unsigned char *l_779 = &g_443;
            long long **l_798 = &g_681[1][2];
            int i;
            if (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_32, 7)), (safe_add_func_int16_t_s_s(((((l_647[6] != (void*)0) < (~g_65)) || (safe_div_func_int8_t_s_s((p_21 & p_20), 0xC9L))) && l_650), (-10L))))) >= p_21))
            {
                unsigned long long *l_653 = &g_222;
                unsigned long long *l_654 = &g_125;
                unsigned long long *l_655[2];
                int l_657 = 0x9CC394D7L;
                int i;
                for (i = 0; i < 2; i++)
                    l_655[i] = &g_656;
                p_22 = (g_510 != (l_657 = ((*l_654) = ((*l_653) = p_22))));
                (*l_631) = &g_32;

                ;
            }
            else
            {
                const short *l_661 = (void*)0;
                const short **l_660 = &l_661;
                const int l_662 = (-1L);
                int *l_673 = &g_78;
                long long *l_678 = (void*)0;
                int *l_697 = &g_128;
                const int *l_756 = &g_32;
                if ((*l_627))
                {
                    p_22 = (0xACL <= (((*g_403) = ((p_22 & g_295[0]) ^ (safe_mod_func_uint16_t_u_u((l_660 == &l_661), l_662)))) && l_662));
                    (*l_627) = l_662;
                }
                else
                {
                    char *l_663[3];
                    char ***l_666[10][6] = {{&g_458,&l_665,&g_458,&l_665,&l_665,&g_458},{&l_665,&l_665,&l_665,&g_458,&l_665,&l_665},{&l_665,&l_665,&g_458,&g_458,&l_665,&l_665},{&l_665,&l_665,&g_458,&l_665,&l_665,&l_665},{&g_458,&l_665,&l_665,&g_458,&l_665,&g_458},{&g_458,&l_665,&g_458,&l_665,&l_665,&g_458},{&l_665,&l_665,&l_665,&g_458,&l_665,&l_665},{&l_665,&l_665,&g_458,&g_458,&l_665,&l_665},{&l_665,&l_665,&g_458,&l_665,&l_665,&l_665},{&g_458,&l_665,&l_665,&g_458,&l_665,&g_458}};
                    const unsigned l_696 = 18446744073709551609UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_663[i] = &g_186[0][1];
                    (*l_673) = ((((l_663[2] != (l_664 = (*g_458))) | func_41(((1L <= ((l_667 = l_665) == (g_669 = l_665))) < (safe_mod_func_int8_t_s_s(((l_672 = (**g_400)) == (**g_400)), p_20))), &g_616, l_673, &g_128, p_20)) < 18446744073709551615UL) != (-10L));

                    ;
                    ;
                    ;
                    ;
                    for (g_381 = 0; (g_381 <= 3); g_381 += 1)
                    {
                        const unsigned l_676 = 18446744073709551609UL;
                        long long *l_677[6] = {&l_624[2][0],&g_510,&g_510,&l_624[2][0],&g_510,&g_510};
                        long long **l_679 = (void*)0;
                        long long **l_680[8][9][1] = {{{&l_677[3]},{&l_677[3]},{&l_677[3]},{&l_609},{&l_677[2]},{&l_609},{&l_678},{&l_677[3]},{&l_677[2]}},{{&l_678},{&l_677[2]},{&l_678},{&l_677[2]},{&l_677[3]},{&l_678},{&l_678},{&l_677[2]},{&l_677[2]}},{{&l_677[2]},{(void*)0},{&l_677[2]},{&l_677[2]},{&l_677[2]},{&l_678},{(void*)0},{(void*)0},{&l_678}},{{&l_677[3]},{&l_677[2]},{&l_677[3]},{&l_678},{(void*)0},{(void*)0},{&l_678},{&l_677[2]},{&l_677[2]}},{{&l_677[2]},{(void*)0},{&l_677[2]},{&l_677[2]},{&l_677[2]},{&l_678},{(void*)0},{(void*)0},{&l_678}},{{&l_677[3]},{&l_677[2]},{&l_677[3]},{&l_678},{(void*)0},{(void*)0},{&l_678},{&l_677[2]},{&l_677[2]}},{{&l_677[2]},{(void*)0},{&l_677[2]},{&l_677[2]},{&l_677[2]},{&l_678},{(void*)0},{(void*)0},{&l_678}},{{&l_677[3]},{&l_677[2]},{&l_677[3]},{&l_678},{(void*)0},{(void*)0},{&l_678},{&l_677[2]},{&l_677[2]}}};
                        unsigned char *l_693 = (void*)0;
                        unsigned char *l_694 = &g_238;
                        const int **l_695 = &g_281;
                        int i, j, k;
                        (*l_695) = &l_662;

                        ;
                        (*l_695) = func_33(l_696, &p_22, (*l_673));

                        ;
                        (*l_631) = (void*)0;

                        ;
                        (*l_695) = ((*l_631) = &p_22);

                        ;
                        ;
                    }

                    ;
                    ;
                    (*l_697) = l_696;
                    if (((l_661 == l_639) == (g_48 | ((*g_403) = (safe_unary_minus_func_uint32_t_u((g_616 = (g_699 != (void*)0))))))))
                    {
                        (*l_697) = (((&g_286 == (*l_613)) <= (safe_sub_func_uint8_t_u_u(0x5BL, (*l_697)))) <= (!(l_650 = p_22)));
                    }
                    else
                    {
                        return l_650;



                    }
                }

                ;
                ;
                ;
                ;
                ;
                ;
                for (g_128 = (-11); (g_128 >= (-30)); --g_128)
                {
                    long long **l_705 = &g_681[3][1];
                    long long ***l_704 = &l_705;
                    (*l_704) = &l_678;

                    ;
                    for (g_510 = (-9); (g_510 == 7); g_510 = safe_add_func_uint8_t_u_u(g_510, 7))
                    {
                        const int **l_708[8][10][3] = {{{&g_281,&g_281,(void*)0},{&g_281,&g_281,&g_281},{&g_281,(void*)0,&g_281},{&g_281,&g_281,(void*)0},{&g_281,(void*)0,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{&g_281,(void*)0,&g_281},{&g_281,(void*)0,&g_281}},{{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,(void*)0,(void*)0},{&g_281,&g_281,&g_281},{&g_281,&g_281,(void*)0},{(void*)0,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,(void*)0,&g_281},{&g_281,(void*)0,&g_281}},{{&g_281,&g_281,(void*)0},{(void*)0,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,(void*)0,&g_281},{&g_281,(void*)0,&g_281},{(void*)0,&g_281,&g_281},{&g_281,&g_281,(void*)0},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{(void*)0,&g_281,(void*)0}},{{&g_281,(void*)0,&g_281},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,&g_281},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,(void*)0},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,&g_281}},{{&g_281,(void*)0,(void*)0},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,(void*)0},{&g_281,(void*)0,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,(void*)0},{(void*)0,&g_281,&g_281}},{{&g_281,&g_281,(void*)0},{&g_281,&g_281,(void*)0},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{(void*)0,&g_281,&g_281},{(void*)0,(void*)0,&g_281},{&g_281,&g_281,&g_281},{&g_281,(void*)0,(void*)0},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281}},{{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,(void*)0,(void*)0},{&g_281,&g_281,(void*)0},{&g_281,&g_281,&g_281}},{{&g_281,&g_281,&g_281},{&g_281,(void*)0,(void*)0},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{&g_281,&g_281,&g_281},{(void*)0,&g_281,&g_281},{&g_281,(void*)0,&g_281}}};
                        int i, j, k;
                        l_709 = &g_533;

                        ;
                    }
                    for (g_24 = 0; (g_24 >= 42); g_24 = safe_add_func_uint32_t_u_u(g_24, 6))
                    {
                        int *l_712 = &g_78;
                        (*l_631) = l_712;

                        ;
                        (*l_627) = (1UL & (*p_23));
                        (*l_631) = &p_22;

                        ;
                        (*l_673) = (*l_673);
                    }
                }

                ;
                for (g_616 = (-24); (g_616 == 60); g_616 = safe_add_func_uint8_t_u_u(g_616, 3))
                {
                    long long l_717 = 6L;
                    int l_728 = (-1L);
                    for (l_608 = 0; (l_608 != (-19)); l_608 = safe_sub_func_uint64_t_u_u(l_608, 1))
                    {
                        g_77 = &p_22;

                        ;
                        (*l_631) = &p_22;
                    }
                    (*l_627) = 0x357FC061L;
                    if (((*l_673) = (l_717 < (safe_mul_func_int16_t_s_s(((*g_403) = ((*l_709) != (*g_403))), 65528UL)))))
                    {
                        return (**g_458);



                    }
                    else
                    {
                        long long *l_735 = &g_178;
                        l_728 = ((*l_697) = (safe_div_func_int64_t_s_s((g_725 != l_727[2][0]), 18446744073709551615UL)));
                        (*l_697) = ((*l_627) = (safe_div_func_int64_t_s_s(((**g_458) || p_22), 9UL)));
                    }
                }
                if ((((*g_726) = ((65535UL ^ 0x80FAL) < (safe_add_func_uint8_t_u_u(g_277, (*l_627))))) == p_22))
                {
                    const int **l_738 = &g_281;
                    (*l_738) = &g_68;

                    ;
                    for (p_20 = (-5); (p_20 == 15); p_20 = safe_add_func_int8_t_s_s(p_20, 9))
                    {
                        (*l_627) = 0x3F13B1E0L;
                        if ((*g_281))
                            break;
                        (*l_738) = &g_68;
                    }
                    for (g_238 = (-6); (g_238 != 56); g_238 = safe_add_func_uint32_t_u_u(g_238, 7))
                    {
                        return p_21;


                    }
                    if ((*l_697))
                    {
                        (*l_627) = 0L;
                        (*l_738) = (void*)0;

                        ;
                        return (**g_458);


                    }
                    else
                    {
                        unsigned l_747 = 0UL;
                        int *l_748 = &l_720;
                        (*l_738) = func_33(p_21, &g_128, ((*l_748) = (((void*)0 != (*l_665)) == (safe_rshift_func_uint8_t_u_s((((*l_697) || l_747) != 0x647030D6L), 3)))));

                        ;
                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    long long *l_749 = &l_624[8][1];
                    const int **l_754 = (void*)0;
                    const int **l_755[5][10] = {{&l_709,&g_281,&l_709,(void*)0,&l_709,&l_709,&l_709,&l_709,(void*)0,&l_709},{&l_709,&l_709,&l_709,&l_709,(void*)0,&l_709,&l_709,&g_281,&l_709,&l_709},{&l_709,&l_709,&l_709,&g_281,&l_709,&l_709,&l_709,&g_281,&l_709,&l_709},{&l_709,&l_709,(void*)0,&l_709,&l_709,&g_281,&l_709,&l_709,&l_709,&g_281},{&l_709,&g_281,&l_709,&l_709,&g_281,&g_281,&l_709,&l_709,&g_281,&l_709}};
                    int i, j;
                    l_756 = func_33((*l_627), ((*l_631) = &p_22), (safe_add_func_uint16_t_u_u(((p_20 < (0x060863C5L && 4294967291UL)) || (~func_41((**g_725), l_752, &g_128, &g_128, g_65))), g_753)));

                    ;
                    ;
                    for (g_178 = 0; (g_178 <= 2); g_178 += 1)
                    {
                        g_281 = &l_650;

                        ;
                    }

                    ;
                    if ((((*g_77) || (*g_286)) & (safe_add_func_uint16_t_u_u(((*l_640) = 0UL), ((-5L) < 0UL)))))
                    {
                        int l_762 = 0x2EAC16B9L;
                        p_22 = ((**l_631) < l_759[9]);
                        (*l_673) = (safe_lshift_func_int8_t_s_u(l_762, 1));
                    }
                    else
                    {
                        unsigned long long l_765 = 0xF1C41C638C37C2DFLL;
                        (*l_697) = ((*l_627) = (((**l_631) = (safe_mul_func_int8_t_s_s(l_765, ((safe_div_func_uint16_t_u_u(p_22, (**l_631))) > ((*l_709) != 2L))))) || ((*l_640) = (**l_631))));
                        (*l_631) = &p_22;

                        ;
                    }
                }

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
            p_22 = (*l_709);
            (*l_627) = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((*g_403), (safe_sub_func_int8_t_s_s((-3L), (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((*l_667) != (void*)0), (((**g_458) ^ ((*l_779) = (g_238 = (*l_709)))) <= (&g_269 == (void*)0)))) > (*l_627)), g_70)))))), 0xBDBEL));
            if (p_20)
            {
                int *l_785 = &g_128;
                (*l_627) = (safe_mod_func_uint8_t_u_u(g_68, (+p_22)));
                for (g_65 = 0; (g_65 > 8); g_65++)
                {
                    int *l_793 = (void*)0;
                    if ((*g_281))
                        break;
                    (*l_631) = l_786;

                    ;
                    for (g_275 = 0; (g_275 != 23); g_275 = safe_add_func_int32_t_s_s(g_275, 1))
                    {
                    }
                }
            }
            else
            {
                long long ***l_799 = &l_798;
                short *l_812[7];
                unsigned l_814[9][1] = {{0xDC3A07F4L},{0xDC3A07F4L},{1UL},{0xDC3A07F4L},{0xDC3A07F4L},{1UL},{0xDC3A07F4L},{0xDC3A07F4L},{1UL}};
                int i, j;
                for (i = 0; i < 7; i++)
                    l_812[i] = &g_603;
                (*l_786) = (safe_sub_func_uint16_t_u_u(g_178, (safe_lshift_func_uint16_t_u_u(((*p_23) & p_21), 0))));
                if (p_21)
                {
                    (*l_627) = p_20;
                }
                else
                {
                    unsigned short ***l_810 = &l_651[6];
                    int *l_811 = &l_650;
                    short *l_813[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_813[i] = &g_603;
                    (*l_810) = l_809;
                    (*l_631) = (l_811 = &p_22);

                    ;
                    ;
                    if (((*g_726) & ((l_813[5] = l_812[2]) != l_640)))
                    {
                        (*l_786) = (-1L);
                        (*l_631) = (*l_631);
                        return l_814[7][0];



                    }
                    else
                    {
                        int *l_820[8] = {&g_381,&g_381,&g_381,&g_381,&g_381,&g_381,&g_381,&g_381};
                        int i;
                        (*g_77) = p_20;
                    }
                }
            }
        }
        else
        {
            const int l_831 = 0x41E4E623L;
            (*l_786) = ((safe_mod_func_uint16_t_u_u((((((p_21 & p_20) == (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((!(safe_sub_func_uint8_t_u_u(l_831, p_20))) == 0UL), (safe_mod_func_int16_t_s_s(p_20, g_222)))) < (*l_786)), (-3L))), l_831))) < 0xBCB790C0L) ^ g_275) != p_21), l_831)) < g_65);
            return (**g_458);
        }

        ;

        ;
        ;
        ;
        ;
        for (l_608 = 0; (l_608 == 2); l_608 = safe_add_func_uint64_t_u_u(l_608, 1))
        {
            short l_849 = 0x50C9L;
            long long ***l_856 = &l_800;
            unsigned *l_857 = &g_65;
            for (g_125 = 0; (g_125 < 57); g_125 = safe_add_func_int8_t_s_s(g_125, 1))
            {
                unsigned *l_846 = &g_48;
                for (g_72 = 0; (g_72 != (-1)); --g_72)
                {
                    int l_842 = 0L;
                    (*l_627) = (func_41((safe_lshift_func_int8_t_s_s((p_21 && (l_842 == (safe_mul_func_uint8_t_u_u(func_41(l_845, l_846, &p_22, l_846, p_22), (&g_78 != (void*)0))))), 7)), l_846, (*l_631), &g_128, g_443) || (**g_458));
                    for (l_720 = 25; (l_720 == (-5)); --l_720)
                    {
                        (*l_631) = &p_22;

                        ;
                        return l_849;



                    }
                }
                if (p_20)
                    break;
                (*l_631) = (void*)0;

                ;
                (*l_631) = (void*)0;
            }
            (*l_786) = p_21;
            (*l_627) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(func_41((p_22 <= p_22), l_630[1][2][4], &g_78, &g_78, g_72), (-10L))), g_381));
        }
    }

    ;

    ;
    ;
    ;
    ;
    return p_21;



}







static int func_25(unsigned short p_26)
{
    int * const l_31[6] = {&g_32,&g_32,&g_32,&g_32,&g_32,&g_32};
    long long *l_176 = (void*)0;
    long long *l_177 = &g_178;
    char *l_179 = &g_105;
    int l_180 = 0xA1934B4EL;
    int **l_421 = &g_77;
    int **l_422 = &g_79;
    int **l_423 = &g_79;
    int **l_424 = (void*)0;
    int **l_425 = &g_77;
    int **l_426 = &g_77;
    int *l_427 = &g_78;
    unsigned long long *l_429 = &g_222;
    const int *l_532 = &g_533;
    int i;
    (*l_425) = func_28((~(l_31[1] != (l_532 = func_33(((&g_32 == l_31[1]) > ((safe_rshift_func_uint16_t_u_s((((g_32 = 1L) < (safe_mod_func_uint64_t_u_u(((*l_429) = func_41(p_26, g_47, (l_427 = func_49((*g_47), g_24, ((*l_179) = ((((*l_177) = func_54((l_31[1] != l_31[5]), &g_48, g_48, p_26, g_48)) & p_26) & g_24)), l_180)), g_47, p_26)), 0xAD0FB63536DD3460LL))) > 0x04E9CB992B39E4F2LL), p_26)) & 4294967292UL)), g_286, g_381)))), g_323);

    ;

    ;

    ;
    ;
    g_128 = ((*g_77) = p_26);
    if ((!(*g_77)))
    {
        (*l_427) = p_26;
        (*l_426) = ((*l_423) = (void*)0);

        ;
        ;
        for (g_78 = 1; (g_78 != (-27)); g_78--)
        {
            g_32 = (*g_281);
        }
        for (g_275 = 0; (g_275 <= 2); g_275 += 1)
        {
            (*l_427) = (-6L);
            for (g_277 = 0; (g_277 <= 2); g_277 += 1)
            {
                int i;
                return g_470[g_277];
            }
        }
    }
    else
    {
        (**l_425) = 0x7C8E55D7L;
        return (*g_281);
    }

    ;
    ;
    return p_26;
}







static int * func_28(int p_29, int * p_30)
{
    int l_534[6][7][5] = {{{0xC020F91DL,(-1L),(-8L),6L,2L},{0x21B43033L,(-1L),3L,(-4L),1L},{0x21B43033L,0x32E2BC6CL,0x0EAA6FD4L,0x80A4429DL,0x0EAA6FD4L},{2L,2L,0xD7414F73L,0x4B52D4FCL,5L},{(-1L),0xC58488FEL,(-10L),0xD2D178D8L,(-1L)},{(-1L),0xE7AED57EL,(-4L),(-1L),0x948DEA45L},{0x80A4429DL,0xC58488FEL,7L,0xF389BCA5L,0xB6327CC1L}},{{0xF389BCA5L,2L,(-1L),6L,7L},{0x62B206D3L,0x32E2BC6CL,0xD2D178D8L,0xA53778EEL,(-8L)},{6L,0xD7414F73L,0xD2D178D8L,3L,1L},{0xE7AED57EL,(-1L),(-1L),0xE7AED57EL,(-7L)},{0x56621EC0L,1L,7L,3L,(-1L)},{0xC58488FEL,0xA53778EEL,(-4L),0xC020F91DL,(-10L)},{0xD2D178D8L,0xBEC96C75L,(-10L),3L,0xE7AED57EL}},{{0xB6327CC1L,0x62B206D3L,0xD7414F73L,0xE7AED57EL,0xC020F91DL},{1L,0x4B79F2A6L,0x0EAA6FD4L,3L,0x21B43033L},{0xBEC96C75L,0xB6327CC1L,3L,0xA53778EEL,0x21B43033L},{0xF03F9184L,0xC020F91DL,6L,6L,0xC020F91DL},{(-1L),6L,5L,0xF389BCA5L,0xE7AED57EL},{0xA53778EEL,1L,0x80A4429DL,(-1L),(-10L)},{1L,0x4B52D4FCL,0x62B206D3L,0xD2D178D8L,(-1L)}},{{0xA53778EEL,3L,5L,1L,0xF389BCA5L},{0xD2D178D8L,0xC58488FEL,0x0EAA6FD4L,0x948DEA45L,0x62B206D3L},{0x0EAA6FD4L,1L,0L,(-1L),6L},{(-4L),1L,0xA53778EEL,0xE7AED57EL,0xE7AED57EL},{0x62B206D3L,0xC58488FEL,0x62B206D3L,(-1L),0x56621EC0L},{0x56621EC0L,3L,2L,(-1L),0xC58488FEL},{0x21B43033L,1L,0x4B52D4FCL,0x62B206D3L,0xD2D178D8L}},{{0x32E2BC6CL,0L,2L,0xC58488FEL,0xB6327CC1L},{0x4B79F2A6L,7L,0x62B206D3L,3L,1L},{(-1L),2L,0xA53778EEL,0xF389BCA5L,0xBEC96C75L},{7L,0x56621EC0L,0L,0xF389BCA5L,0xF03F9184L},{(-1L),3L,0x0EAA6FD4L,3L,(-1L)},{0x4B52D4FCL,(-1L),5L,0xC58488FEL,0xA53778EEL},{0x948DEA45L,(-4L),(-1L),0x62B206D3L,1L}},{{0x80A4429DL,0xF03F9184L,0x948DEA45L,(-1L),0xA53778EEL},{0xD7414F73L,0x62B206D3L,0xB6327CC1L,(-1L),(-1L)},{0xA53778EEL,0xC020F91DL,7L,0xE7AED57EL,0xF03F9184L},{0xB6327CC1L,(-7L),(-8L),(-1L),0xBEC96C75L},{0xB6327CC1L,(-1L),1L,0x948DEA45L,1L},{0xA53778EEL,0xA53778EEL,0xF389BCA5L,0L,0x56621EC0L},{(-7L),(-1L),0x80A4429DL,5L,0x21B43033L}}};
    short ***l_535 = (void*)0;
    short *l_546 = &g_72;
    unsigned char *l_547 = &g_443;
    unsigned *l_548 = &g_48;
    int **l_549 = &g_77;
    unsigned *l_600[9][6][4] = {{{&g_65,&g_65,&g_65,(void*)0},{(void*)0,&g_65,&g_48,&g_65},{(void*)0,&g_48,&g_65,(void*)0},{&g_65,&g_48,&g_65,&g_65},{&g_65,(void*)0,&g_65,&g_65},{&g_65,(void*)0,(void*)0,&g_65}},{{&g_48,&g_48,&g_65,(void*)0},{&g_65,(void*)0,(void*)0,(void*)0},{&g_65,(void*)0,&g_48,(void*)0},{&g_65,(void*)0,&g_65,(void*)0},{&g_65,&g_48,&g_48,&g_65},{&g_65,(void*)0,&g_48,&g_65}},{{(void*)0,(void*)0,(void*)0,&g_65},{(void*)0,&g_48,&g_65,(void*)0},{&g_65,&g_48,(void*)0,&g_65},{&g_48,&g_65,&g_65,(void*)0},{(void*)0,&g_65,(void*)0,(void*)0},{(void*)0,&g_65,(void*)0,&g_48}},{{&g_65,(void*)0,&g_48,&g_65},{&g_65,&g_65,&g_48,&g_65},{&g_65,&g_48,(void*)0,(void*)0},{(void*)0,&g_65,(void*)0,&g_65},{&g_48,&g_65,&g_65,&g_65},{&g_48,&g_48,(void*)0,(void*)0}},{{&g_65,&g_65,&g_48,(void*)0},{(void*)0,(void*)0,&g_65,(void*)0},{&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,(void*)0,&g_65},{&g_48,&g_65,(void*)0,&g_65},{&g_48,&g_65,&g_48,(void*)0}},{{(void*)0,&g_65,&g_48,&g_65},{&g_65,&g_65,&g_65,&g_65},{&g_65,&g_48,&g_65,&g_48},{&g_65,&g_48,(void*)0,(void*)0},{(void*)0,(void*)0,&g_65,(void*)0},{(void*)0,&g_65,&g_65,(void*)0}},{{&g_65,&g_48,&g_65,&g_65},{(void*)0,&g_65,&g_65,&g_65},{&g_65,&g_65,(void*)0,&g_65},{&g_65,&g_48,(void*)0,&g_48},{&g_65,(void*)0,(void*)0,(void*)0},{&g_65,(void*)0,(void*)0,&g_65}},{{&g_65,(void*)0,(void*)0,&g_65},{&g_65,&g_65,&g_65,&g_65},{(void*)0,(void*)0,&g_65,&g_65},{&g_65,&g_65,&g_65,(void*)0},{&g_48,&g_65,&g_48,&g_65},{(void*)0,&g_48,&g_48,&g_48}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,&g_48,&g_48},{&g_65,(void*)0,(void*)0,&g_65},{&g_48,&g_48,&g_65,&g_65},{(void*)0,(void*)0,(void*)0,&g_48},{&g_65,&g_65,(void*)0,(void*)0}}};
    int i, j, k;
    (*l_549) = &l_534[2][3][3];

    ;
    for (g_105 = 0; (g_105 != 14); g_105 = safe_add_func_int64_t_s_s(g_105, 7))
    {
        int *l_556[5] = {&l_534[2][3][3],&l_534[2][3][3],&l_534[2][3][3],&l_534[2][3][3],&l_534[2][3][3]};
        int i;
        (*g_77) = (safe_add_func_uint64_t_u_u((((*g_458) = (*g_458)) != (void*)0), g_470[0]));
        if ((*g_281))
            break;
        for (g_70 = 0; (g_70 <= 1); g_70 += 1)
        {
            int *l_560[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned long long *l_586 = (void*)0;
            unsigned char l_592 = 0UL;
            int i;
            (**l_549) = (safe_add_func_uint64_t_u_u((!func_41(g_128, p_30, l_556[2], &g_128, p_29)), (safe_rshift_func_uint16_t_u_s(((*g_286) > (**l_549)), 10))));
            for (g_78 = 0; (g_78 <= 1); g_78 += 1)
            {
                int l_559 = 0xAF1566B6L;
                int *l_583 = &l_534[2][3][3];
                int i;
                if (((**l_549) = ((1UL <= g_470[g_78]) == (l_547 != (void*)0))))
                {
                    l_559 = 0xF150C3EEL;
                    for (g_48 = 0; (g_48 <= 1); g_48 += 1)
                    {
                        unsigned char *l_573[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_573[i] = &g_238;
                        p_30 = l_560[3];
                        (**l_549) = ((8L <= (((*l_546) = g_470[g_78]) ^ 0xACC7L)) != (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(6L, (p_29 >= 0x0A254A61L))), (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_559 < p_29) & (g_238 = ((*l_547) = (safe_rshift_func_int16_t_s_u((p_29 <= 255UL), g_275))))), 0x9DL)), g_574)))), 6)));
                    }

                    ;
                }
                else
                {
                    short *l_581 = &g_70;
                    int i;
                    (*g_77) = (0x50CCCCA5L & (((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_295[(g_78 + 1)] = (p_29 < ((!(*g_47)) < (((safe_lshift_func_int8_t_s_u(p_29, 2)) != ((p_29 >= (0xC2L == (**l_549))) & (**g_285))) | ((l_559 && 0x0E896A1127499F9DLL) | g_178))))), 0x59L)), (*g_403))) > p_29) & 0xB9L));
                    for (g_238 = 0; (g_238 <= 2); g_238 += 1)
                    {
                        (*g_77) = ((void*)0 != l_581);
                    }
                }

                ;
                for (g_72 = 1; (g_72 >= 0); g_72 -= 1)
                {
                    unsigned ***l_582 = &g_285;
                    (*l_549) = l_556[0];
                    (*l_582) = &l_548;

                    ;
                    (*l_549) = (l_556[1] = l_560[8]);
                    l_583 = (void*)0;

                    ;
                }

                ;
                ;

                ;
                return &g_78;




            }
            (*g_77) = (*g_77);
            if ((**l_549))
                continue;
            for (g_125 = 0; (g_125 <= 1); g_125 += 1)
            {
                unsigned long long *l_588 = &g_222;
                unsigned long long **l_587 = &l_588;
                char **l_590 = &g_459;
                unsigned *l_598[8][8][2] = {{{&g_65,&g_48},{&g_65,&g_65},{&g_65,&g_65},{(void*)0,&g_65},{&g_65,&g_48},{&g_48,&g_48},{&g_65,&g_65},{(void*)0,&g_65}},{{&g_65,&g_65},{&g_65,&g_48},{&g_65,(void*)0},{&g_65,&g_48},{(void*)0,&g_65},{(void*)0,&g_65},{(void*)0,&g_65},{(void*)0,&g_48}},{{&g_65,(void*)0},{&g_65,&g_48},{&g_65,&g_65},{&g_65,&g_65},{(void*)0,&g_65},{&g_65,&g_48},{&g_48,&g_48},{&g_65,&g_65}},{{&g_48,&g_65},{&g_48,&g_48},{(void*)0,(void*)0},{(void*)0,&g_65},{(void*)0,&g_65},{&g_48,(void*)0},{&g_65,&g_48},{&g_65,(void*)0}},{{&g_48,&g_65},{(void*)0,&g_65},{(void*)0,(void*)0},{(void*)0,&g_48},{&g_48,&g_65},{&g_48,(void*)0},{&g_48,(void*)0},{(void*)0,(void*)0}},{{&g_48,(void*)0},{&g_48,&g_65},{&g_48,&g_48},{(void*)0,(void*)0},{(void*)0,&g_65},{(void*)0,&g_65},{&g_48,(void*)0},{&g_65,&g_48}},{{&g_65,(void*)0},{&g_48,&g_65},{(void*)0,&g_65},{(void*)0,(void*)0},{(void*)0,&g_48},{&g_48,&g_65},{&g_48,(void*)0},{&g_48,(void*)0}},{{(void*)0,(void*)0},{&g_48,(void*)0},{&g_48,&g_65},{&g_48,&g_48},{(void*)0,(void*)0},{(void*)0,&g_65},{(void*)0,&g_65},{&g_48,(void*)0}}};
                int l_602 = 2L;
                int i, j, k;
            }
        }
    }
    (*g_77) = g_603;
    return &g_32;



}







static const int * func_33(const long long p_34, int * p_35, int p_36)
{
    const int *l_430 = &g_68;
    int *l_444 = &g_128;
    int *l_446 = &g_78;
    char *l_483 = &g_295[0];
    if ((*p_35))
    {
        return l_430;


    }
    else
    {
        int *l_431 = &g_78;
        int **l_432 = &g_77;
        long long *l_438[9] = {&g_178,&g_178,&g_178,&g_178,&g_178,&g_178,&g_178,&g_178,&g_178};
        long long **l_437 = &l_438[1];
        int i;
        (*l_432) = l_431;

        ;
        for (g_238 = 0; (g_238 <= 2); g_238 += 1)
        {
            long long ***l_439 = (void*)0;
            long long ***l_440 = &l_437;
            int l_441 = 9L;
            unsigned char *l_442 = &g_443;
            int **l_445 = &l_444;
            int i;
            (*p_35) = ((*g_77) = g_295[g_238]);
        }
    }

    ;
    l_446 = &g_32;

    ;
    for (g_105 = 0; (g_105 == 22); g_105 = safe_add_func_int16_t_s_s(g_105, 3))
    {
        short * const l_461 = &g_72;
        int l_511 = 0x3D45638AL;
        for (g_275 = 0; (g_275 <= 2); g_275 += 1)
        {
            unsigned l_451 = 0x3235C774L;
            char *l_457 = &g_105;
            char **l_456 = &l_457;
            char ***l_460 = &g_458;
            short *l_462 = &g_70;
            int l_463 = (-8L);
            const int *l_495 = (void*)0;
            unsigned *l_501 = &g_65;
            if ((*g_77))
                break;
            if ((*g_281))
                continue;
        }
        for (g_125 = 0; (g_125 > 48); g_125++)
        {
            int **l_523 = &g_77;
            unsigned long long *l_526 = &g_222;
            short *l_531 = &g_72;
            (*l_523) = p_35;


            for (g_32 = 0; (g_32 <= 0); g_32 += 1)
            {
                return l_446;


            }
            (*l_444) = (p_36 == (safe_mod_func_int32_t_s_s((((*g_281) > (((*g_286) = 9UL) >= l_511)) != (((p_34 == ((*l_526) = p_34)) < (safe_lshift_func_int16_t_s_u(0x2C6AL, (safe_div_func_uint8_t_u_u((l_531 == (void*)0), (*l_446)))))) & 0x65L)), p_36)));
            if ((*g_77))
                break;
        }
    }


    return p_35;


}







static unsigned long long func_41(unsigned long long p_42, unsigned * p_43, int * p_44, int * p_45, const unsigned short p_46)
{
    unsigned l_428 = 0x6EED4D99L;
    (*p_45) = (-1L);
    return l_428;
}







static int * func_49(unsigned p_50, int p_51, const char p_52, unsigned short p_53)
{
    unsigned l_183 = 0x46C1EB29L;
    char *l_184 = &g_105;
    char *l_185 = &g_186[0][1];
    unsigned * const *l_193 = &g_47;
    unsigned * const **l_194 = &l_193;
    int l_195 = 0x014F3C25L;
    short *l_198 = (void*)0;
    short *l_199 = (void*)0;
    short *l_200[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int l_201[5][7][7] = {{{0xBD3E61D3L,0x5CE17B37L,0x123DB9FBL,8L,6L,(-1L),4L},{0x6954D5C3L,0xDC35AD3CL,(-9L),0x3D1283D6L,8L,0x3D1283D6L,(-9L)},{1L,1L,(-4L),7L,0x6B455545L,0xA71E2FDBL,0L},{1L,0x08DF259CL,0x092AB72FL,0x9C8CF917L,1L,0x092AB72FL,(-7L)},{3L,0L,6L,0x123DB9FBL,0x6B455545L,0x4FB26F9EL,0L},{1L,0x8D65414BL,0xA55D307AL,(-7L),8L,0L,1L},{7L,0x4FB26F9EL,0x61558F2BL,0xBD3E61D3L,6L,0L,(-6L)}},{{0x08DF259CL,1L,1L,1L,1L,0x08DF259CL,(-9L)},{0L,0L,0x7D6F5CEDL,7L,0x8B487628L,0L,1L},{(-9L),0x3D1283D6L,1L,0x4EEA4509L,(-9L),0x81DB17C0L,0x8D65414BL},{0x8A3C79E3L,0L,6L,0x4FB26F9EL,0xBD3E61D3L,0x5CE17B37L,0x123DB9FBL},{2L,1L,0xFD4C6E64L,2L,0x4EEA4509L,0x6B89A323L,0x258CBBCEL},{4L,0x4FB26F9EL,0x8A3C79E3L,0x6B455545L,0L,0L,0x6B455545L},{(-9L),(-9L),(-9L),0x092AB72FL,8L,0x2C16FF76L,0x6954D5C3L}},{{0xBD3E61D3L,0L,(-6L),4L,0x8B487628L,(-1L),7L},{8L,1L,(-1L),0x9C8CF917L,0x08DF259CL,0x2C16FF76L,(-9L)},{(-1L),(-3L),0L,0x4FB26F9EL,8L,0L,0xDFB74B67L},{0xDC35AD3CL,2L,0xA55D307AL,1L,(-7L),0xFD4C6E64L,0x9C8CF917L},{0L,0x123DB9FBL,8L,(-3L),8L,0x123DB9FBL,0L},{1L,1L,0x08DF259CL,(-9L),8L,4L,0x81DB17C0L},{(-3L),0L,(-3L),8L,0L,0x9B584F45L,0L}},{{(-9L),0x2C16FF76L,0x08DF259CL,0x9C8CF917L,(-1L),1L,8L},{0L,4L,8L,0x8A3C79E3L,7L,0x9AA81E76L,0x123DB9FBL},{0x8D65414BL,8L,0xA55D307AL,1L,1L,2L,1L},{0x6B455545L,0L,0L,0x6B455545L,0x8A3C79E3L,3L,0L},{0x6954D5C3L,1L,(-1L),0x866F7BE1L,0xDC35AD3CL,0x81DB17C0L,0x86291552L},{(-1L),0L,0L,0L,8L,(-6L),0x123DB9FBL},{(-9L),8L,0xB1173BA9L,0x6954D5C3L,0x2E4B3AABL,0L,1L}},{{(-4L),8L,0x726CC1D1L,(-3L),0xDFB74B67L,5L,(-6L)},{0x2C16FF76L,0x3D1283D6L,2L,0x092AB72FL,0x092AB72FL,2L,0x3D1283D6L},{0x9AA81E76L,0x7D6F5CEDL,(-4L),(-1L),0x9B584F45L,0xA79352E0L,0x4FB26F9EL},{0xBD749904L,(-9L),0x2E4B3AABL,0L,(-1L),0x456252ADL,0xBD749904L},{0x4FB26F9EL,0L,(-3L),(-1L),8L,0x6B455545L,0x9AA81E76L},{0x3D1283D6L,0xBD749904L,0xFD4C6E64L,0x092AB72FL,0xBD749904L,0L,0x2C16FF76L},{(-6L),3L,0x9B584F45L,(-3L),0x5CE17B37L,(-4L),(-4L)}}};
    int l_202 = 0x56195176L;
    int l_203 = 0x1FE1FC20L;
    unsigned long long *l_214 = (void*)0;
    unsigned long long *l_215[2][8][9] = {{{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125}},{{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,(void*)0,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125,&g_125}}};
    long long l_235 = 0x7A56BC6BD49ADAADLL;
    short l_262 = 0x66AAL;
    unsigned char *l_363 = &g_238;
    long long l_389 = (-1L);
    int i, j, k;
    l_203 = ((+(safe_lshift_func_int16_t_s_u((((*l_185) = ((*l_184) = (l_183 & g_125))) | ((l_183 && (l_202 = ((l_195 = (safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u(p_50, (-7L))), (safe_mul_func_uint16_t_u_u((((*l_194) = l_193) == &g_47), g_68))))) > ((g_72 = (l_201[3][5][2] = (safe_rshift_func_int16_t_s_u((g_70 = g_48), p_53)))) & 0xA65EL)))) > p_50)), g_178))) < 0xB4D028B1L);
    if ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((l_203 = l_195) <= ((&g_47 == (void*)0) >= (-6L))), l_183)), g_105)), 7)))
    {
        const short l_216 = 0xC288L;
        int l_239 = 0xE11B270AL;
        short **l_257 = &l_200[2][1];
        short ***l_256 = &l_257;
        const char *l_315 = (void*)0;
        const char **l_314 = &l_315;
        int *l_340 = &l_202;
        unsigned long long * const l_346 = &g_222;
        const int *l_355 = &g_78;
        unsigned *l_376 = &g_65;
        unsigned l_419 = 1UL;
        if ((l_203 > l_216))
        {
            int **l_217 = &g_77;
            long long *l_221[8];
            long long **l_220 = &l_221[0];
            unsigned char l_224 = 0x91L;
            int l_229 = (-1L);
            const short l_271 = 0x1279L;
            char **l_321 = (void*)0;
            int *l_339 = &g_128;
            unsigned char l_350 = 1UL;
            const int l_368 = 0x7E2C84D7L;
            int i;
            for (i = 0; i < 8; i++)
                l_221[i] = &g_178;
            (*l_217) = &g_128;

            ;
            for (g_70 = 0; (g_70 >= 12); g_70 = safe_add_func_uint16_t_u_u(g_70, 6))
            {
                return &g_128;


            }
            if (((((((*l_220) = &g_178) == (void*)0) ^ g_222) & p_51) | g_178))
            {
                int *l_223 = &l_202;
                (*l_217) = l_223;

                ;
                (**l_217) = (l_224 = (*g_77));
                for (l_195 = 0; (l_195 > 11); l_195 = safe_add_func_uint64_t_u_u(l_195, 6))
                {
                    (*l_217) = &g_78;

                    ;
                    (*l_217) = &g_128;

                    ;
                    if (l_216)
                        continue;
                }

                ;
            }
            else
            {
                unsigned l_234 = 4294967295UL;
                unsigned char l_248 = 3UL;
                int *l_250 = &l_239;
                unsigned short *l_270 = (void*)0;
                char **l_322[8] = {(void*)0,&l_185,(void*)0,&l_185,(void*)0,&l_185,(void*)0,&l_185};
                int l_362 = 0x8DF6ADCCL;
                int i;
                for (l_202 = 3; (l_202 >= 0); l_202 -= 1)
                {
                    unsigned char *l_236 = &l_224;
                    unsigned char *l_237 = &g_238;
                    int l_244 = 0L;
                    int l_247[6] = {(-2L),0x5B2C149BL,(-2L),(-2L),0x5B2C149BL,(-2L)};
                    int i;
                    (*l_217) = (void*)0;

                    ;
                    l_239 = (p_53 ^ (((safe_mod_func_int32_t_s_s(l_216, 0x3F68B5D4L)) < 4294967291UL) <= g_128));
                    l_239 = (((~(safe_div_func_int8_t_s_s(((*l_184) = ((*l_185) = (safe_add_func_uint64_t_u_u(l_244, g_65)))), l_234))) ^ p_51) <= 0x82L);
                    for (g_78 = 0; (g_78 <= 7); g_78 += 1)
                    {
                        int *l_249[3];
                        short ***l_259 = &l_257;
                        short ****l_258 = &l_259;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_249[i] = &l_195;
                        l_250 = l_249[0];

                        ;
                        (*l_217) = l_250;

                        ;
                        l_201[4][4][0] = (0x13D7L == (g_178 <= (safe_unary_minus_func_int16_t_s(((**l_217) = ((safe_mul_func_int16_t_s_s((g_72 = ((l_256 != ((*l_258) = (void*)0)) & (p_50 == l_183))), p_53)) | ((safe_mul_func_uint16_t_u_u((**l_217), l_262)) || p_53)))))));

                        ;
                    }

                    ;
                }

                ;
                ;
                for (g_65 = 0; (g_65 >= 43); g_65 = safe_add_func_int8_t_s_s(g_65, 6))
                {
                    int l_265 = 0xD4DC7898L;
                    l_239 = p_53;
                    l_201[3][5][2] = (l_265 = (-9L));
                }
                if ((*l_250))
                {
                    unsigned char l_305 = 0x78L;
                    int l_309 = 0x32699893L;
                    if ((&g_78 != &g_68))
                    {
                        unsigned short *l_274 = &g_275;
                        unsigned short *l_276 = &g_277;
                        int **l_278 = &l_250;
                        (*l_217) = &l_203;

                        ;
                        (**l_217) = (safe_div_func_uint16_t_u_u(((*l_276) = ((*l_274) = (p_51 != ((*l_250) & (p_50 == 0x005004D9L))))), 9L));
                        (*g_77) = p_53;
                        (*l_278) = ((*l_217) = &g_78);

                        ;
                        ;
                    }
                    else
                    {
                        const int *l_280[6];
                        const int **l_279 = &l_280[2];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_280[i] = &g_68;
                        (*l_217) = &l_239;

                        ;
                        (*l_279) = &g_68;
                        g_281 = &g_68;

                        ;
                        (*g_77) = 0xCB9613DEL;
                    }

                    ;
                    ;
                    (**l_217) = l_183;
                    if ((**l_217))
                    {
                        unsigned **l_284 = &g_47;
                        char *l_294 = &g_295[0];
                        int *l_296[10][7][1] = {{{&l_201[3][5][2]},{&g_128},{&l_203},{&g_78},{&l_203},{&l_195},{&l_195}},{{&l_203},{&g_78},{&l_203},{&g_128},{&l_201[3][5][2]},{&l_201[3][6][1]},{&l_201[3][5][2]}},{{(void*)0},{&g_128},{&g_128},{&l_201[3][5][2]},{&l_201[3][5][2]},{&g_78},{(void*)0}},{{&g_78},{&l_201[3][5][2]},{&l_201[3][5][2]},{&g_128},{&g_128},{(void*)0},{&l_201[3][5][2]}},{{&l_201[3][6][1]},{&l_201[3][5][2]},{&g_128},{&l_203},{&g_78},{&l_203},{&l_195}},{{&l_195},{&l_203},{&g_78},{&l_203},{&g_128},{&l_201[3][5][2]},{&l_201[3][6][1]}},{{&l_201[3][5][2]},{(void*)0},{&g_128},{&g_128},{&l_201[3][5][2]},{&l_201[3][5][2]},{&g_78}},{{(void*)0},{&g_78},{&l_201[3][5][2]},{&l_201[3][5][2]},{&g_128},{&g_128},{(void*)0}},{{&l_201[3][5][2]},{&l_201[3][6][1]},{&l_201[3][5][2]},{&g_128},{&l_203},{&g_78},{&l_203}},{{&l_195},{(void*)0},{&l_201[3][5][2]},{&g_128},{&l_195},{&l_202},{&g_128}}};
                        int i, j, k;
                        g_128 = (p_50 | ((*l_294) = (safe_mul_func_int16_t_s_s(p_51, (((g_285 = l_284) != (*l_194)) | ((safe_mul_func_int8_t_s_s(((*l_185) = (safe_lshift_func_uint8_t_u_u(3UL, (l_239 = 0UL)))), ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((*l_184) = g_128))), (0x7B210912981ACFEALL == (p_53 > 0x83CFL)))) != (-1L)))) <= 0x50CEE0398EE97617LL))))));

                        ;
                    }
                    else
                    {
                        unsigned short *l_306 = &g_277;
                        (**l_217) = ((safe_mod_func_int8_t_s_s(g_24, 1L)) & 0x0B567D36L);
                        l_239 = (safe_div_func_uint16_t_u_u((l_309 = 65529UL), p_52));
                    }
                }
                else
                {
                    unsigned l_316 = 0xFB6EF145L;
                    const int *l_324 = &l_195;
                    long long **l_329 = &l_221[6];
                    int l_338 = (-1L);
                    const int **l_342 = &g_281;
                    if ((g_24 & p_53))
                    {
                        g_79 = (*l_217);

                        ;
                        (*l_217) = l_250;

                        ;
                        g_281 = l_324;

                        ;
                        (*g_77) = (l_338 = (p_51 >= (((0x242FL > g_78) & (g_327[3] == l_329)) >= (safe_mul_func_uint8_t_u_u(g_65, ((safe_div_func_int16_t_s_s((l_216 | (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(0x1AL, 2)) <= (!4UL)), 4294967295UL)) == g_277) && 0x1C2DE78825F0558DLL)), (-1L))) & p_52))))));
                    }
                    else
                    {
                        int *l_341[8][7] = {{&l_229,&l_229,&l_338,&l_338,&l_229,&l_229,&l_201[3][5][2]},{&l_239,(void*)0,&l_239,&l_239,(void*)0,&l_239,&l_201[3][5][2]},{&l_229,&l_229,&l_338,&l_338,&l_229,&l_229,&l_201[3][5][2]},{&l_239,(void*)0,&l_239,&l_239,(void*)0,&l_239,&l_201[3][5][2]},{&l_229,&l_229,&l_338,&l_338,&l_229,&l_229,&l_201[3][5][2]},{&l_239,(void*)0,&l_239,&l_239,(void*)0,&l_239,&l_201[3][5][2]},{&l_229,&l_229,&l_338,&l_338,&l_229,&l_229,&l_201[3][5][2]},{&l_239,(void*)0,&l_239,&l_239,(void*)0,&l_239,&l_201[3][5][2]}};
                        int i, j;
                        l_339 = l_250;

                        ;
                        l_340 = (void*)0;

                        ;
                        (*l_217) = &g_128;

                        ;
                        (*l_217) = l_341[4][1];

                        ;
                    }

                    ;

                    ;
                    ;
                    ;
                    (*l_342) = &g_68;

                    ;
                    for (l_195 = 0; (l_195 > (-17)); l_195--)
                    {
                        int *l_345 = &l_201[3][5][2];
                        (*l_345) = (**l_342);
                    }
                    if (((*l_339) = (g_186[0][1] ^ ((0L < (l_221[2] == l_346)) >= g_238))))
                    {
                        int ***l_349 = &l_217;
                        int *l_353 = &l_202;
                        (*l_250) = ((safe_rshift_func_uint8_t_u_s((&l_339 == ((*l_349) = &g_79)), (g_295[0] && l_350))) && ((*g_47) <= (*l_324)));

                        ;
                        (*l_353) = (((safe_mod_func_int32_t_s_s(p_53, p_51)) >= ((*g_47) < ((*l_250) = (*l_339)))) & p_53);
                    }
                    else
                    {
                        const int *l_354 = &l_195;
                        (*l_339) = p_53;
                        l_355 = l_354;

                        ;
                    }

                    ;
                    ;
                }



                ;
                ;
                ;
                ;
                ;
                if ((safe_add_func_uint8_t_u_u(g_295[2], (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(l_362, (((*l_250) == (g_186[0][1] | (&l_224 == l_363))) ^ 0x4CC9D79BECE96C51LL))), (!((g_275 = (p_51 & ((*g_286) = 0x460E461BL))) <= p_52)))))))
                {
                    int l_366 = 1L;
                    int l_369 = 0x966BDC56L;
                    l_369 = ((((g_295[0] = p_52) & p_53) != 1UL) < g_277);
                    (*l_250) = p_52;
                    for (g_178 = 5; (g_178 == (-29)); --g_178)
                    {
                        unsigned short *l_379[6][1][6] = {{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_24}}};
                        int l_380 = 0xC5580D74L;
                        int i, j, k;
                        (*l_250) = (p_53 == (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_238, p_53)), g_277)));
                        (*l_217) = &g_78;
                    }
                }
                else
                {
                    for (l_229 = 0; (l_229 <= 0); l_229 += 1)
                    {
                        unsigned short *l_388 = &g_275;
                        (*l_339) = p_50;
                        (*l_217) = &l_239;
                        g_78 = ((safe_mul_func_uint8_t_u_u((((void*)0 != (*g_285)) ^ ((safe_add_func_uint16_t_u_u(((*l_388) = (safe_add_func_uint64_t_u_u(p_52, g_275))), p_51)) == l_389)), g_105)) || (*l_250));
                    }


                }


            }



            ;
            ;
            ;
            ;
        }
        else
        {
            if (p_51)
            {
                for (g_128 = 0; (g_128 > (-14)); g_128--)
                {
                    (*g_77) = 0x21A64336L;
                    (*g_77) = 0L;
                }
            }
            else
            {
                int l_396 = 0xB94F274CL;
                int l_399 = 0xD7EF58F4L;
                for (g_65 = 0; (g_65 != 2); g_65 = safe_add_func_int8_t_s_s(g_65, 4))
                {
                    int *l_404 = &l_201[0][6][3];
                    int **l_405[9][1][4] = {{{&g_79,(void*)0,&g_79,&g_79}},{{(void*)0,(void*)0,&l_404,(void*)0}},{{(void*)0,&g_79,&g_79,(void*)0}},{{&g_79,(void*)0,&g_79,&g_79}},{{(void*)0,(void*)0,&l_404,(void*)0}},{{(void*)0,&g_79,&g_79,(void*)0}},{{&g_79,(void*)0,&g_79,&g_79}},{{(void*)0,(void*)0,&l_404,(void*)0}},{{(void*)0,&g_79,&g_79,(void*)0}}};
                    int i, j, k;
                    (*l_340) = (safe_div_func_uint64_t_u_u((l_396 = (0x4B953AF3L & l_201[3][5][2])), ((safe_div_func_int16_t_s_s(g_222, l_399)) & ((0xD5F4L && (((void*)0 != g_400) <= ((p_51 && (*l_340)) || (*g_281)))) | p_53))));
                    g_77 = l_404;

                    ;
                }

                ;
            }

            ;
            for (l_195 = 0; (l_195 <= 2); l_195 += 1)
            {
                int *l_408 = &l_201[2][5][4];
                (*g_77) = (*g_281);
                if (p_50)
                    break;
                for (l_262 = 0; (l_262 <= 0); l_262 += 1)
                {
                    int **l_406[3][10][2] = {{{&l_340,&g_77},{&g_79,&l_340},{(void*)0,&l_340},{&g_79,&g_77},{&l_340,&l_340},{(void*)0,(void*)0},{&g_77,(void*)0},{&g_77,(void*)0},{&g_77,&l_340},{&g_79,&g_77}},{{(void*)0,&g_79},{(void*)0,&g_77},{&g_79,&l_340},{&g_77,(void*)0},{&g_77,(void*)0},{&g_77,(void*)0},{(void*)0,&l_340},{&l_340,&g_77},{&g_79,&l_340},{(void*)0,&l_340}},{{&g_79,&g_77},{&l_340,&l_340},{(void*)0,(void*)0},{&g_77,(void*)0},{&g_77,(void*)0},{&g_77,&l_340},{&g_79,&g_77},{(void*)0,&g_79},{(void*)0,&g_79},{&l_340,&g_79}}};
                    int *l_407[6][2][9] = {{{&l_201[1][0][2],&l_201[3][5][2],&l_201[1][0][2],&l_201[2][1][5],&l_195,&g_128,&l_201[1][0][2],&g_78,&l_201[1][0][2]},{(void*)0,&l_203,(void*)0,(void*)0,&l_203,(void*)0,(void*)0,&l_195,(void*)0}},{{&l_203,&g_78,(void*)0,&l_201[2][1][5],&g_78,&l_201[2][1][5],(void*)0,&g_78,&l_203},{(void*)0,&l_203,(void*)0,(void*)0,&g_128,(void*)0,(void*)0,&g_128,(void*)0}},{{&l_201[1][0][2],&g_78,&l_201[1][0][2],&g_128,&l_195,&l_201[2][1][5],&l_201[1][0][2],&l_201[3][5][2],&l_201[1][0][2]},{(void*)0,&l_203,(void*)0,(void*)0,&g_128,(void*)0,(void*)0,&l_195,(void*)0}},{{&l_203,&l_201[3][5][2],(void*)0,&g_128,&g_78,&g_128,(void*)0,&l_201[3][5][2],&l_203},{(void*)0,&l_203,(void*)0,(void*)0,&l_203,(void*)0,(void*)0,&g_128,(void*)0}},{{&l_201[1][0][2],&l_201[3][5][2],&l_201[1][0][2],&l_201[2][1][5],&l_195,&g_128,&l_201[1][0][2],&g_78,&l_201[1][0][2]},{(void*)0,&l_203,(void*)0,(void*)0,&l_203,(void*)0,(void*)0,&l_195,(void*)0}},{{&l_203,&g_78,&l_202,&l_203,&l_203,&l_203,&l_202,&l_201[2][1][5],&g_78},{&l_195,(void*)0,&l_201[2][2][4],&l_195,(void*)0,(void*)0,(void*)0,(void*)0,&l_195}}};
                    int i, j, k;
                    l_407[2][0][7] = &g_78;
                    l_408 = (void*)0;

                    ;
                }

                ;
            }
            g_79 = &g_128;

            ;
        }



        ;
        ;
        l_419 = ((g_295[2] <= g_24) ^ (safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s(g_70, (((safe_add_func_uint32_t_u_u(((*g_47) = (**g_285)), g_72)) | ((void*)0 != (*l_257))) == (safe_rshift_func_uint8_t_u_s(l_235, 2))))), (safe_mod_func_int32_t_s_s(l_202, p_50)))));
    }
    else
    {
        short *l_420 = &l_262;
        (*g_77) = (l_420 != l_420);
        return &g_128;


    }



    return &g_78;




}







static long long func_54(unsigned long long p_55, unsigned * p_56, unsigned short p_57, unsigned char p_58, const short p_59)
{
    unsigned short l_60 = 0x9052L;
    int l_62[9][7] = {{0x5E3087C3L,0L,0xC547FCE3L,0x5E3087C3L,(-1L),3L,0x0B182BC9L},{7L,0L,7L,7L,(-1L),1L,(-1L)},{7L,0xC547FCE3L,0xC547FCE3L,7L,0x0B182BC9L,3L,(-1L)},{0x5E3087C3L,0L,0xC547FCE3L,0x5E3087C3L,(-1L),3L,0x0B182BC9L},{7L,0L,7L,7L,(-1L),1L,(-1L)},{7L,0xC547FCE3L,0xC547FCE3L,7L,0x0B182BC9L,3L,(-1L)},{0x5E3087C3L,0L,0xC547FCE3L,0x5E3087C3L,(-1L),3L,0x0B182BC9L},{7L,0L,7L,7L,(-1L),1L,(-1L)},{7L,0xC547FCE3L,0xC547FCE3L,7L,0x0B182BC9L,3L,(-1L)}};
    int *l_64 = &l_62[6][0];
    unsigned l_163 = 1UL;
    short *l_168[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    short **l_167 = &l_168[3];
    short ***l_169 = &l_167;
    int i, j;
    if ((l_60 = g_24))
    {
        return p_57;
    }
    else
    {
        int *l_61 = (void*)0;
        int **l_63[5] = {&l_61,&l_61,&l_61,&l_61,&l_61};
        const int *l_67 = &g_68;
        const int **l_66 = &l_67;
        short *l_69 = &g_70;
        short *l_71[2];
        int i;
        for (i = 0; i < 2; i++)
            l_71[i] = &g_72;
        l_62[1][5] = 0x016FEFD5L;
        l_64 = g_47;

        ;
        g_65 = g_48;
        if (((((*l_66) = p_56) == &l_62[3][5]) ^ ((*l_64) != (((-4L) <= p_55) > ((*p_56) != ((((g_72 = ((*l_69) = (*l_64))) <= 0xC085L) != (*l_64)) == p_58))))))
        {
            int *l_80 = &g_78;
            int l_85[9][6][4] = {{{0L,0x86B8A71AL,0x955DDCF3L,0xF5D9662AL},{0L,0L,1L,0L},{0xEAFE12C2L,0x86B8A71AL,1L,6L},{0L,0xF5D9662AL,0xC0F78337L,(-4L)},{0x9DC0630FL,5L,0xCF88EA9DL,0L},{0xCF88EA9DL,0L,0xEAFE12C2L,0x3CDA06E2L}},{{0L,0L,2L,0L},{(-6L),5L,1L,(-4L)},{0L,0xF5D9662AL,0xEAFE12C2L,6L},{0x9DC0630FL,0x86B8A71AL,0xF0B38F1CL,0L},{0x9DC0630FL,0L,0xEAFE12C2L,7L},{0L,0L,1L,0L}},{{(-6L),0x86B8A71AL,2L,(-4L)},{0L,0x6B21CEB8L,0xEAFE12C2L,(-4L)},{0xCF88EA9DL,0x86B8A71AL,0xCF88EA9DL,0L},{0x9DC0630FL,0L,0xC0F78337L,7L},{0L,0L,1L,0L},{0xEAFE12C2L,0x86B8A71AL,1L,6L}},{{0L,0xF5D9662AL,0xC0F78337L,(-4L)},{0x9DC0630FL,5L,0xCF88EA9DL,0L},{0xCF88EA9DL,0L,0xEAFE12C2L,0x3CDA06E2L},{0L,0L,2L,0L},{(-6L),5L,1L,(-4L)},{0L,0xF5D9662AL,0xEAFE12C2L,6L}},{{0x9DC0630FL,0x86B8A71AL,0xF0B38F1CL,0x6B21CEB8L},{0xEAFE12C2L,0x6A221E12L,0x1F3C6E3AL,0L},{0x955DDCF3L,0x6B21CEB8L,0xF0B38F1CL,0x6A221E12L},{0L,6L,0x9DC0630FL,0x3CDA06E2L},{0L,4L,0x1F3C6E3AL,0x3CDA06E2L},{0xC0F78337L,6L,0xC0F78337L,0x6A221E12L}},{{0xEAFE12C2L,0x6B21CEB8L,0L,0L},{0L,0x6A221E12L,0xF0B38F1CL,0x6B21CEB8L},{0x1F3C6E3AL,6L,0xF0B38F1CL,8L},{0L,5L,0L,0x3CDA06E2L},{0xEAFE12C2L,0xFC11C930L,0xC0F78337L,0x6B21CEB8L},{0xC0F78337L,0x6B21CEB8L,0x1F3C6E3AL,0L}},{{0L,0x6B21CEB8L,0x9DC0630FL,0x6B21CEB8L},{0L,0xFC11C930L,0xF0B38F1CL,0x3CDA06E2L},{0x955DDCF3L,5L,0x1F3C6E3AL,8L},{0xEAFE12C2L,6L,(-6L),0x6B21CEB8L},{0xEAFE12C2L,0x6A221E12L,0x1F3C6E3AL,0L},{0x955DDCF3L,0x6B21CEB8L,0xF0B38F1CL,0x6A221E12L}},{{0L,6L,0x9DC0630FL,0x3CDA06E2L},{0L,4L,0x1F3C6E3AL,0x3CDA06E2L},{0xC0F78337L,6L,0xC0F78337L,0x6A221E12L},{0xEAFE12C2L,0x6B21CEB8L,0L,0L},{0L,0x6A221E12L,0xF0B38F1CL,0x6B21CEB8L},{0x1F3C6E3AL,6L,0xF0B38F1CL,8L}},{{0L,5L,0x9DC0630FL,5L},{1L,0x6A221E12L,2L,0x3CDA06E2L},{2L,0x3CDA06E2L,0xF0B38F1CL,0xFC11C930L},{0xEAFE12C2L,0x3CDA06E2L,(-9L),0x3CDA06E2L},{0xCF88EA9DL,0x6A221E12L,0x955DDCF3L,5L},{0xC0F78337L,0L,0xF0B38F1CL,4L}}};
            unsigned *l_111 = &g_65;
            int i, j, k;
            for (p_55 = 0; (p_55 < 37); p_55++)
            {
                unsigned l_110[4] = {0xF4C61C4CL,0xF4C61C4CL,0xF4C61C4CL,0xF4C61C4CL};
                int i;
                (*l_66) = &g_68;

                ;
                for (g_65 = 0; (g_65 == 14); g_65 = safe_add_func_uint32_t_u_u(g_65, 2))
                {
                    int * const l_83 = (void*)0;
                    int *l_84 = &l_62[5][2];
                    g_79 = (g_77 = g_47);

                    ;
                    ;
                    g_79 = l_80;

                    ;
                    for (g_78 = (-28); (g_78 != (-6)); g_78 = safe_add_func_uint8_t_u_u(g_78, 2))
                    {
                        unsigned l_94 = 0xA4EABE0FL;
                        char *l_104 = &g_105;
                        unsigned short *l_106 = (void*)0;
                        unsigned short *l_107 = &l_60;
                        int l_108 = (-5L);
                        int l_109 = (-6L);
                        l_84 = l_83;

                        ;
                        l_85[4][0][3] = (*g_79);
                        if ((*l_64))
                            continue;
                        l_109 = (((void*)0 == &g_68) != (safe_mul_func_uint8_t_u_u(((*l_80) || p_59), ((safe_div_func_int16_t_s_s(((*l_69) = (((((l_108 = (safe_add_func_uint16_t_u_u(((*l_107) = (safe_mul_func_int8_t_s_s((l_94 = g_48), ((*l_104) = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(g_72)), (safe_mod_func_uint64_t_u_u(p_58, (safe_add_func_uint8_t_u_u(p_59, ((safe_mul_func_uint16_t_u_u(p_59, g_70)) ^ (*l_64)))))))))))), 5L))) > 0x854C362A02F93315LL) != (-9L)) || (*g_47)) || 0L)), g_78)) > 0x8188D8CC678F9D62LL))));
                    }

                    ;
                }
                l_110[3] = (((void*)0 == l_80) <= ((*g_79) = p_57));
            }

            ;
            ;
            (*l_80) = (*g_79);
            (*l_80) = ((0x1BBB5DFEAAC53A07LL ^ g_48) != ((*l_111) = (*p_56)));
        }
        else
        {
            for (g_72 = (-25); (g_72 == 13); ++g_72)
            {
                (*g_79) = 0x48A9CFEDL;
            }
            (*l_66) = &l_62[2][1];

            ;
            (*l_66) = &g_68;

            ;
        }

        ;
        ;
    }

    ;
    ;
    for (p_57 = (-25); (p_57 <= 30); p_57++)
    {
        unsigned short l_121 = 65535UL;
        int *l_130 = &g_128;
        char *l_141 = &g_105;
        if (p_58)
        {
            return g_72;


        }
        else
        {
            unsigned *l_117 = (void*)0;
            unsigned **l_116 = &l_117;
            int **l_129[7];
            int i;
            for (i = 0; i < 7; i++)
                l_129[i] = &g_79;
            if ((p_56 == ((*l_116) = (void*)0)))
            {
                unsigned long long *l_124 = &g_125;
                int *l_126 = (void*)0;
                int *l_127 = &g_128;
                for (g_78 = 0; (g_78 >= 28); ++g_78)
                {
                    int **l_120 = &g_79;
                    (*l_120) = &l_62[3][3];

                    ;
                }
                l_121 = p_57;
                (*l_127) = ((*g_79) = (safe_rshift_func_int16_t_s_s((((*l_124) = g_105) != g_70), 5)));
            }
            else
            {
                (*g_79) = (*g_79);
                g_77 = p_56;

                ;
            }
            (*g_79) = (*g_79);
            l_130 = &g_128;
            for (g_70 = (-7); (g_70 < 25); ++g_70)
            {
                short l_133 = 0L;
                if ((((*l_130) < ((void*)0 == &g_77)) >= (*l_130)))
                {
                    return l_133;


                }
                else
                {
                    int *l_134 = &g_128;
                    l_134 = &g_128;
                }
                for (g_65 = 10; (g_65 <= 7); g_65 = safe_sub_func_int16_t_s_s(g_65, 5))
                {
                    char *l_140 = &g_105;
                    char **l_139 = &l_140;
                    unsigned ***l_142 = (void*)0;
                    unsigned ***l_143 = &l_116;
                    int l_150 = 0x9D5DD3FFL;
                    (*l_130) = (((g_24 != (-1L)) < (((*l_139) = &g_105) != (l_141 = l_141))) & (((*l_143) = &p_56) == (void*)0));

                    ;
                    if ((((safe_rshift_func_int8_t_s_u(g_128, (((((*l_143) = &p_56) == &p_56) >= 0xF7L) < (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(p_57, (p_58 == (l_150 < 1UL)))), (*g_47)))))) <= 7L) == p_58))
                    {
                        l_64 = p_56;
                    }
                    else
                    {
                        (*g_79) = (safe_lshift_func_int8_t_s_u(((*l_141) = 0xF4L), (p_58 > ((((1L || p_59) <= (p_58 <= ((*l_130) < (*g_47)))) <= (safe_sub_func_int16_t_s_s(p_59, (&l_150 != p_56)))) && l_133))));
                        if (p_57)
                            break;
                        return p_58;


                    }
                }

                ;
                return p_55;


            }
        }
        for (g_65 = 0; (g_65 <= 6); g_65 += 1)
        {
            int i, j;
            l_62[g_65][g_65] = ((safe_rshift_func_int8_t_s_s(l_62[(g_65 + 1)][g_65], ((*l_141) = ((*l_130) || l_62[(g_65 + 1)][g_65])))) >= (safe_mul_func_int8_t_s_s((*l_64), p_57)));
            for (g_78 = 29; (g_78 > 12); g_78--)
            {
                (*l_130) = ((safe_mul_func_int8_t_s_s(0x0DL, (((l_163 | (-10L)) != (safe_unary_minus_func_uint64_t_u(g_68))) ^ (+(safe_lshift_func_uint16_t_u_u(l_62[g_65][g_65], 8)))))) == l_62[g_65][g_65]);
            }
        }
    }

    ;
    (*l_169) = l_167;
    (*g_79) = (+(safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(p_58, (safe_mod_func_uint8_t_u_u((g_78 && (*l_64)), g_78)))), 1)));
    return p_58;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_186[i][j], "g_186[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_295[i], "g_295[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_470[i], "g_470[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_475[i], "g_475[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
