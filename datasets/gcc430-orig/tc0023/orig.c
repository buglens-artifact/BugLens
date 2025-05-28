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



static unsigned char g_6 = 0xC2L;
static long long g_19 = (-9L);
static unsigned g_21 = 0xC3A065C2L;
static int g_33[7] = {(-5L),0x9B996A53L,(-5L),(-5L),0x9B996A53L,(-5L),(-5L)};
static unsigned g_36 = 18446744073709551615UL;
static unsigned g_61 = 4294967295UL;
static unsigned *g_60[9][7] = {{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61}};
static volatile int g_77 = 0xA6696B49L;
static volatile int g_78 = 0L;
static int g_79 = 0x4264A3A2L;
static volatile int g_82 = 0x929EFCF3L;
static volatile int g_83 = 0x8DFEF28EL;
static int g_84 = 0x51F4A1ABL;
static unsigned char g_90 = 0xDBL;
static char g_94 = (-8L);
static short g_149 = 0x43B8L;
static long long g_150[10] = {0x25799EF2C490428BLL,0x25799EF2C490428BLL,0x269582D88AC7E52DLL,0x25799EF2C490428BLL,0x25799EF2C490428BLL,0x269582D88AC7E52DLL,0x25799EF2C490428BLL,0x25799EF2C490428BLL,0x269582D88AC7E52DLL,0x25799EF2C490428BLL};
static volatile unsigned g_154 = 18446744073709551613UL;
static unsigned char g_161 = 253UL;
static long long g_164 = (-2L);
static long long *g_163 = &g_164;
static unsigned short g_237 = 7UL;
static unsigned short *g_236 = &g_237;
static volatile short g_304 = 0xEA66L;
static unsigned short g_334[10] = {0xAD60L,0xC407L,0xC407L,0xAD60L,0xC407L,0xC407L,0xAD60L,0xC407L,0xC407L,0xAD60L};
static unsigned long long **g_366[3] = {(void*)0,(void*)0,(void*)0};
static int *g_378 = &g_33[5];
static char g_392 = 6L;
static short g_484 = 0L;
static int g_497[4][5] = {{0x767BAFDCL,(-1L),0x767BAFDCL,(-1L),0x767BAFDCL},{0x89666E38L,0x89666E38L,8L,8L,0x89666E38L},{0x31609210L,(-1L),0x31609210L,(-1L),0x31609210L},{0x89666E38L,8L,8L,0x89666E38L,0x89666E38L}};
static unsigned g_499 = 5UL;
static unsigned **g_515 = &g_60[5][1];
static unsigned ***g_514 = &g_515;
static unsigned short g_588[3][3] = {{0x8BB2L,0x8BB2L,0x8BB2L},{0x8BB2L,0x8BB2L,0x8BB2L},{0x8BB2L,0x8BB2L,0x8BB2L}};
static int *g_591 = &g_79;
static int *g_636 = &g_497[0][0];
static int g_638 = 0x85A2EFD3L;
static int g_640 = 0x48E5CC87L;
static unsigned g_673 = 0xD2A61CEEL;
static volatile unsigned g_777 = 0x357FE724L;
static int g_846 = 0x973FD4C2L;
static unsigned *g_983 = &g_61;
static int g_988 = 0L;
static long long *g_1074 = (void*)0;
static unsigned long long g_1096 = 0UL;
static long long *g_1121 = &g_150[0];
static int g_1137 = 1L;
static volatile long long g_1197[6][3][1] = {{{(-7L)},{0x93502D0AFC64B37CLL},{(-7L)}},{{0x93502D0AFC64B37CLL},{(-7L)},{0x93502D0AFC64B37CLL}},{{(-7L)},{0x93502D0AFC64B37CLL},{(-7L)}},{{0x93502D0AFC64B37CLL},{(-7L)},{0x93502D0AFC64B37CLL}},{{(-7L)},{0x93502D0AFC64B37CLL},{(-7L)}},{{0x93502D0AFC64B37CLL},{(-7L)},{0x93502D0AFC64B37CLL}}};
static volatile long long *g_1196 = &g_1197[1][0][0];
static volatile long long **g_1195 = &g_1196;
static volatile long long ***g_1194[4][10] = {{(void*)0,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195},{&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195},{(void*)0,&g_1195,&g_1195,&g_1195,(void*)0,&g_1195,&g_1195,&g_1195,&g_1195,(void*)0},{(void*)0,&g_1195,&g_1195,(void*)0,&g_1195,&g_1195,(void*)0,&g_1195,&g_1195,(void*)0}};
static volatile char g_1302 = 0x65L;
static char *g_1316[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static volatile unsigned long long g_1338 = 0x56D6132A6E291A15LL;
static int *g_1401 = (void*)0;
static volatile unsigned g_1539 = 1UL;
static int *g_1555[7][1][5] = {{{(void*)0,&g_497[3][4],(void*)0,&g_497[3][4],(void*)0}},{{&g_988,&g_988,&g_988,&g_988,&g_988}},{{(void*)0,&g_497[3][4],(void*)0,&g_497[3][4],(void*)0}},{{&g_988,&g_988,&g_988,&g_988,&g_988}},{{(void*)0,&g_497[3][4],(void*)0,&g_497[3][4],(void*)0}},{{&g_988,&g_988,&g_988,&g_988,&g_988}},{{(void*)0,&g_497[3][4],(void*)0,&g_497[3][4],(void*)0}}};
static long long *g_1564[8][8][2] = {{{&g_19,(void*)0},{&g_150[5],&g_150[0]},{(void*)0,&g_19},{(void*)0,(void*)0},{&g_150[5],&g_19},{&g_19,&g_19},{&g_150[4],&g_19},{&g_150[5],&g_150[4]}},{{&g_150[4],(void*)0},{&g_150[5],&g_19},{(void*)0,&g_150[5]},{&g_19,&g_150[4]},{&g_150[4],&g_150[8]},{&g_150[4],&g_150[8]},{&g_150[4],&g_150[4]},{&g_19,&g_150[5]}},{{(void*)0,&g_19},{&g_150[5],(void*)0},{&g_150[5],&g_19},{(void*)0,&g_150[3]},{&g_19,&g_150[4]},{&g_19,&g_19},{&g_150[4],&g_150[4]},{&g_150[8],&g_150[4]}},{{&g_19,&g_150[5]},{(void*)0,&g_19},{&g_150[3],(void*)0},{&g_150[3],&g_19},{(void*)0,&g_150[5]},{&g_19,&g_150[4]},{&g_150[8],&g_150[4]},{&g_150[4],&g_19}},{{&g_19,&g_150[4]},{&g_19,&g_150[3]},{(void*)0,&g_19},{&g_150[5],(void*)0},{&g_150[5],&g_19},{(void*)0,&g_150[5]},{&g_19,&g_150[4]},{&g_150[4],&g_150[8]}},{{&g_150[4],&g_150[8]},{&g_150[4],&g_150[4]},{&g_19,&g_150[5]},{(void*)0,&g_19},{&g_150[5],(void*)0},{&g_150[5],&g_19},{(void*)0,&g_150[3]},{&g_19,&g_150[4]}},{{&g_19,&g_19},{&g_150[4],&g_150[4]},{&g_150[8],&g_150[4]},{&g_19,&g_150[5]},{(void*)0,&g_19},{&g_150[3],(void*)0},{&g_150[3],&g_19},{(void*)0,&g_150[5]}},{{&g_19,&g_19},{&g_150[5],&g_150[5]},{&g_19,&g_150[3]},{&g_150[3],&g_19},{&g_150[8],&g_19},{&g_150[5],&g_150[8]},{&g_19,(void*)0},{&g_19,&g_150[4]}}};
static unsigned long long ****g_1599 = (void*)0;
static unsigned *g_1604 = &g_36;
static volatile int *g_1611 = &g_82;
static short *g_1622[4] = {&g_484,&g_484,&g_484,&g_484};
static volatile char g_1687 = 6L;
static volatile unsigned g_1758 = 4294967291UL;
static short g_1773 = 0L;
static unsigned long long g_1928[8][2][1] = {{{0x6296D0D52FFC1A73LL},{0x6296D0D52FFC1A73LL}},{{0x12E5358F3EF4D0C4LL},{0x6296D0D52FFC1A73LL}},{{0x6296D0D52FFC1A73LL},{0x12E5358F3EF4D0C4LL}},{{0x6296D0D52FFC1A73LL},{0x6296D0D52FFC1A73LL}},{{0x12E5358F3EF4D0C4LL},{0x6296D0D52FFC1A73LL}},{{0x6296D0D52FFC1A73LL},{0x12E5358F3EF4D0C4LL}},{{0x6296D0D52FFC1A73LL},{0x6296D0D52FFC1A73LL}},{{0x12E5358F3EF4D0C4LL},{0x6296D0D52FFC1A73LL}}};



static char func_1(void);
static short func_7(unsigned p_8, unsigned char p_9, char p_10);
static unsigned func_22(long long * p_23, unsigned * p_24, short p_25, long long p_26, long long * p_27);
static unsigned * func_28(unsigned * p_29);
static int func_39(int * p_40, unsigned char p_41);
static int * func_42(long long * p_43, long long * p_44, unsigned p_45, int * p_46, long long * p_47);
static long long * func_50(unsigned * p_51, long long p_52, long long * p_53, int p_54);
static unsigned * func_55(unsigned * p_56, int * p_57, int * p_58, unsigned * p_59);
static int * func_62(short p_63, long long * p_64, long long p_65, unsigned p_66, int p_67);
static int func_68(unsigned * p_69, int * p_70, long long * p_71);
static char func_1(void)
{
    short l_11 = 0xB666L;
    short l_14 = 0x5A97L;
    int l_17[6];
    long long *l_18 = &g_19;
    unsigned *l_20 = &g_21;
    int l_1369 = 1L;
    int *l_1627 = &g_988;
    char l_1629 = 0x11L;
    unsigned long long *****l_1635 = &g_1599;
    unsigned l_1658[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    unsigned short l_1703[2];
    int l_1777 = 0x2D24BA0FL;
    long long *l_1778[8][6][5] = {{{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,&g_164,&g_164}},{{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,(void*)0,&g_164},{&g_164,&g_164,(void*)0,(void*)0,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0}},{{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,&g_164,&g_164},{&g_164,&g_164,&g_164,(void*)0,(void*)0}},{{&g_164,&g_164,&g_164,(void*)0,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,&g_164,&g_164,(void*)0,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0},{(void*)0,&g_164,(void*)0,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0}},{{&g_164,&g_164,&g_164,&g_164,&g_164},{(void*)0,&g_164,&g_164,&g_164,(void*)0},{&g_164,(void*)0,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164},{(void*)0,(void*)0,&g_164,&g_164,&g_164}},{{&g_164,&g_164,&g_164,&g_164,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{(void*)0,&g_164,&g_164,&g_164,&g_164},{&g_164,(void*)0,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,(void*)0}}};
    unsigned long long ***l_1781[5][2];
    unsigned char *l_1796[5];
    unsigned short l_1797 = 0xCA57L;
    char l_1798 = 0xDBL;
    short l_1799[9] = {0x41EBL,1L,0x41EBL,0x41EBL,1L,0x41EBL,0x41EBL,1L,0x41EBL};
    short *l_1800 = (void*)0;
    short *l_1801[10] = {&g_484,&g_1773,&g_1773,&g_484,&g_484,&g_484,&g_1773,&g_1773,&g_484,&g_484};
    unsigned short l_1802 = 0xDC8BL;
    int *l_1873 = &l_17[0];
    unsigned l_1874 = 4294967286UL;
    int l_1900 = 0xEA676235L;
    unsigned l_1919 = 0x175F85FEL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_17[i] = 0xD0714AD3L;
    for (i = 0; i < 2; i++)
        l_1703[i] = 8UL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1781[i][j] = &g_366[1];
    }
    for (i = 0; i < 5; i++)
        l_1796[i] = &g_90;
    (*l_1627) = (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(g_6, func_7(g_6, l_11, (safe_rshift_func_int16_t_s_u(((l_14 >= (safe_mul_func_int16_t_s_s((((*l_20) = (((*l_18) = l_17[1]) && g_19)) & (l_1369 = func_22(l_18, func_28(l_20), g_588[2][0], l_14, g_163))), (-8L)))) >= l_17[1]), l_17[1]))))), l_17[3]));

    ;




    ;
    ;
    ;
    for (g_1137 = 3; (g_1137 >= 0); g_1137 -= 1)
    {
        int **l_1628 = &g_1555[4][0][1];
        long long *l_1642 = &g_150[4];
        unsigned char l_1657 = 1UL;
        int l_1677 = 1L;
        int l_1684 = 0xC7E91535L;
        int l_1685 = 0x94CCCDD9L;
        int l_1686[9][6][4] = {{{0x7D668550L,(-1L),(-1L),0x7D668550L},{(-1L),0x7D668550L,1L,(-4L)},{(-1L),1L,(-1L),(-5L)},{0x7D668550L,(-4L),(-5L),(-5L)},{1L,1L,0xF7942C34L,(-4L)},{(-4L),0x7D668550L,0xF7942C34L,0x7D668550L}},{{1L,(-1L),(-5L),0xF7942C34L},{0x7D668550L,(-1L),(-1L),0x7D668550L},{(-1L),0x7D668550L,1L,(-4L)},{(-1L),1L,(-1L),(-5L)},{0x7D668550L,(-4L),(-5L),(-5L)},{1L,1L,0xF7942C34L,(-4L)}},{{(-4L),0x7D668550L,0xF7942C34L,0x7D668550L},{1L,(-1L),(-5L),0xF7942C34L},{0x7D668550L,(-1L),(-1L),0x7D668550L},{(-1L),0x7D668550L,1L,(-4L)},{(-1L),1L,(-1L),(-5L)},{0x7D668550L,(-4L),(-5L),(-5L)}},{{1L,1L,0xF7942C34L,(-4L)},{(-4L),0xF49668FDL,(-5L),0xF49668FDL},{0xF7942C34L,0x7D668550L,(-4L),(-5L)},{0xF49668FDL,0x7D668550L,0x7D668550L,0xF49668FDL},{0x7D668550L,0xF49668FDL,0xF7942C34L,(-1L)},{0x7D668550L,0xF7942C34L,0x7D668550L,(-4L)}},{{0xF49668FDL,(-1L),(-4L),(-4L)},{0xF7942C34L,0xF7942C34L,(-5L),(-1L)},{(-1L),0xF49668FDL,(-5L),0xF49668FDL},{0xF7942C34L,0x7D668550L,(-4L),(-5L)},{0xF49668FDL,0x7D668550L,0x7D668550L,0xF49668FDL},{0x7D668550L,0xF49668FDL,0xF7942C34L,(-1L)}},{{0x7D668550L,0xF7942C34L,0x7D668550L,(-4L)},{0xF49668FDL,(-1L),(-4L),(-4L)},{0xF7942C34L,0xF7942C34L,(-5L),(-1L)},{(-1L),0xF49668FDL,(-5L),0xF49668FDL},{0xF7942C34L,0x7D668550L,(-4L),(-5L)},{0xF49668FDL,0x7D668550L,0x7D668550L,0xF49668FDL}},{{0x7D668550L,0xF49668FDL,0xF7942C34L,(-1L)},{0x7D668550L,0xF7942C34L,0x7D668550L,(-4L)},{0xF49668FDL,(-1L),(-4L),(-4L)},{0xF7942C34L,0xF7942C34L,(-5L),(-1L)},{(-1L),0xF49668FDL,(-5L),0xF49668FDL},{0xF7942C34L,0x7D668550L,(-4L),(-5L)}},{{0xF49668FDL,0x7D668550L,0x7D668550L,0xF49668FDL},{(-4L),(-1L),0xF49668FDL,(-5L)},{(-4L),0xF49668FDL,(-4L),0xF7942C34L},{(-1L),(-5L),0xF7942C34L,0xF7942C34L},{0xF49668FDL,0xF49668FDL,1L,(-5L)},{(-5L),(-1L),1L,(-1L)}},{{0xF49668FDL,(-4L),0xF7942C34L,1L},{(-1L),(-4L),(-4L),(-1L)},{(-4L),(-1L),0xF49668FDL,(-5L)},{(-4L),0xF49668FDL,(-4L),0xF7942C34L},{(-1L),(-5L),0xF7942C34L,0xF7942C34L},{0xF49668FDL,0xF49668FDL,1L,(-5L)}}};
        int i, j, k;
        (*l_1628) = &l_17[(g_1137 + 2)];
        if (l_1629)
            continue;
        if ((*g_1611))
            continue;
    }


    if ((((*l_1627) &= ((*g_1121) = 0L)) < ((l_1777 != ((safe_mul_func_int16_t_s_s((l_1369 ^= (l_1802 &= ((l_1781[3][0] != (void*)0) | (((safe_div_func_int32_t_s_s((0x5555L && (safe_lshift_func_uint16_t_u_u((&l_1627 != (((((*g_236) , (safe_mul_func_int8_t_s_s(0x81L, (g_6 ^= (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((l_1658[4] <= l_1703[0]), l_1777)) , 1UL) >= l_1658[4]) || l_11), 8)), 1)), l_17[1])))))) == l_1629) || l_11) , (void*)0)), (*g_236)))), l_1797)) && l_1798) | l_1799[5])))), (*g_236))) > 1L)) , 5UL)))
    {
        int l_1803[4][2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_1803[i][j] = (-1L);
        }
        (*g_1611) |= (!(&l_1777 == &g_638));
        return l_1803[0][0];


    }
    else
    {
        int **l_1804 = &g_636;
        int l_1831 = 0L;
        unsigned *l_1845 = &l_1658[4];
        long long *l_1855 = &g_164;
        unsigned l_1863 = 1UL;
        unsigned char l_1872 = 1UL;
        int l_1882[1];
        unsigned l_1886[6] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
        unsigned char l_1922 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_1882[i] = 0xB5F85691L;
        (*l_1804) = &g_988;

        ;
        for (l_1777 = (-17); (l_1777 != (-30)); l_1777 = safe_sub_func_int32_t_s_s(l_1777, 7))
        {
            int *l_1811 = &l_1369;
            long long *l_1858[8] = {&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164};
            int l_1877 = (-1L);
            int l_1883 = 0L;
            int l_1885 = 0xFFCE3D7BL;
            unsigned char l_1912 = 0xA5L;
            short l_1914 = 6L;
            int *l_1915 = &l_17[4];
            int *l_1916 = &l_1882[0];
            int *l_1917 = &g_497[3][4];
            int *l_1918[7][4] = {{&l_1882[0],&l_17[1],&g_497[0][3],&l_1900},{&g_79,&g_497[0][3],&l_1882[0],&g_497[0][3]},{&l_1882[0],&g_497[0][3],&g_79,&l_1900},{&g_497[0][3],&l_17[1],&l_1882[0],&l_1882[0]},{&g_84,&l_1900,&l_1900,&g_84},{&g_84,&l_1900,&l_1882[0],&g_988},{&g_497[0][3],&g_84,&g_79,&g_33[0]}};
            int i, j;
            (*g_1611) ^= (((void*)0 != &g_6) | (*l_1627));
            if ((*g_636))
            {
                unsigned long long l_1825 = 1UL;
                unsigned *l_1850[2][8];
                unsigned **l_1851 = (void*)0;
                unsigned **l_1852 = &g_983;
                int l_1856 = (-10L);
                unsigned l_1857 = 0UL;
                int l_1875 = 0x9A8AE821L;
                unsigned l_1876 = 1UL;
                int l_1884 = 0L;
                unsigned l_1902[3];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_1850[i][j] = &g_61;
                }
                for (i = 0; i < 3; i++)
                    l_1902[i] = 0x705C358CL;
                g_1401 = &g_79;

                ;
                for (l_1797 = 0; (l_1797 == 41); l_1797 = safe_add_func_int64_t_s_s(l_1797, 8))
                {
                    unsigned l_1816 = 4294967295UL;
                    char l_1834 = 0xBEL;
                    int *l_1843 = &l_1369;
                    long long *l_1844 = &g_150[8];
                    for (g_84 = (-8); (g_84 < (-21)); --g_84)
                    {
                        unsigned l_1830[3];
                        int l_1835 = (-1L);
                        unsigned short *l_1840 = &g_588[2][2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1830[i] = 0UL;
                        if ((*g_1401))
                            break;
                        l_1627 = &l_1369;

                        ;
                        l_1831 |= (((func_39(l_1811, (~((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((+(l_1816 == (**l_1804))), 6L)), (safe_lshift_func_int8_t_s_s((((**g_1195) | (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((((**l_1804) , l_1825) , ((safe_add_func_int8_t_s_s((*l_1627), ((((safe_rshift_func_uint16_t_u_s((&g_846 != &g_640), 3)) | 0x7ED9AF03L) , (-1L)) , 0x11L))) >= l_1825)) <= (*l_1627)), l_1830[2])), l_1830[0])), 0x76L))) > (*l_1627)), 7)))) , 0x47L))) ^ l_1816) , l_1830[2]) || (*g_236));


                        (*l_1804) = func_42(&g_19, &g_164, ((safe_mul_func_int16_t_s_s((l_1835 |= l_1834), ((*g_236)--))) >= (g_1096 || (safe_div_func_uint16_t_u_u(((*l_1840)++), l_1816)))), l_1843, func_50(l_1811, (*g_163), l_1844, l_1830[2]));

                        ;
                    }

                    ;
                    (*l_1804) = &g_1137;

                    ;
                }
                if ((*l_1627))
                    continue;
                if ((*g_1611))
                {
                    int *l_1859 = (void*)0;
                    int **l_1860 = &g_1555[2][0][4];
                    (*l_1860) = ((*l_1804) = l_1859);

                    ;
                }
                else
                {
                    unsigned short l_1868 = 0x312CL;
                    int l_1869 = 0xA2273EFDL;
                    int *l_1878 = &g_1137;
                    int *l_1879 = (void*)0;
                    int *l_1880 = &g_1137;
                    int *l_1881[8][6][2] = {{{&g_84,&g_497[1][3]},{(void*)0,&g_79},{&l_1877,&g_79},{&l_17[0],&l_1856},{(void*)0,&g_79},{&g_84,&g_33[2]}},{{&l_17[0],&g_497[1][3]},{&l_1877,&l_1856},{&l_1877,&g_33[2]},{&l_1877,&l_1856},{&l_1877,&g_497[1][3]},{&l_17[0],&g_33[2]}},{{&g_84,&g_79},{&l_1877,&g_79},{&g_84,&g_33[2]},{&l_17[0],&g_497[1][3]},{&l_1877,&l_1856},{&l_1877,&g_33[2]}},{{&l_1877,&l_1856},{&l_1877,&g_497[1][3]},{&l_17[0],&g_33[2]},{&g_84,&g_79},{&l_1877,&g_79},{&g_84,&g_33[2]}},{{&l_17[0],&g_497[1][3]},{&l_1877,&l_1856},{&l_1877,&g_33[2]},{&l_1877,&l_1856},{&l_1877,&g_497[1][3]},{&l_17[0],&g_33[2]}},{{&g_84,&g_79},{&l_1877,&g_79},{&g_84,&g_33[2]},{&l_17[0],&g_497[1][3]},{&l_1877,&l_1856},{&l_1877,&g_33[2]}},{{&l_1877,&l_1856},{&l_1877,&g_497[1][3]},{&l_17[0],&g_33[2]},{&g_84,&g_79},{&l_1877,&g_79},{&g_84,&g_33[2]}},{{&l_17[0],&g_497[1][3]},{&l_1877,&l_1856},{&l_1877,&g_33[2]},{&l_1877,&l_1856},{&l_1877,&g_497[1][3]},{&l_17[0],&g_33[2]}}};
                    int i, j, k;
                    l_1876 &= ((safe_add_func_int64_t_s_s((((func_7(((**l_1804) > l_1825), (*l_1811), l_1874) < l_1875) > 0x5FL) <= (*l_1873)), 0xB6CAA592AB204B14LL)) | l_1856);


                    ++l_1886[5];
                    if ((*g_1401))
                    {
                        (*g_1611) = 0L;
                        (*l_1804) = &g_79;

                        ;
                    }
                    else
                    {
                        if ((*g_1401))
                            break;
                        (*l_1804) = &l_1883;

                        ;
                    }

                    ;
                    for (g_1773 = 0; (g_1773 == (-21)); g_1773--)
                    {
                        unsigned short l_1897[6] = {0x1A6DL,0x1A6DL,0x1A6DL,0x1A6DL,0x1A6DL,0x1A6DL};
                        unsigned *l_1898 = &l_1886[5];
                        unsigned **l_1899 = (void*)0;
                        int l_1901[5] = {2L,2L,2L,2L,2L};
                        int i;
                        (*l_1878) = (safe_mod_func_int16_t_s_s((((l_1884 < ((((0xC62BL > l_1856) != g_79) , (-8L)) <= ((l_1897[1] <= ((g_1604 = l_1898) == l_1811)) , func_39(&l_1869, g_497[3][1])))) || (*l_1873)) | (*g_236)), (*g_236)));


                        ;
                        (*l_1804) = &l_1869;

                        ;
                        ++l_1902[0];
                    }

                    ;
                }


            }
            else
            {
                short l_1908 = 1L;
                int l_1913 = 3L;
                for (g_164 = (-7); (g_164 > (-14)); g_164--)
                {
                    int *l_1907 = &g_640;
                    char l_1911[1][6] = {{0x67L,0x67L,0x67L,0x67L,0x67L,0x67L}};
                    int i, j;
                }
                (*g_636) |= (*l_1811);
            }


            (*l_1804) = &l_17[0];

            ;
            ++l_1919;
        }


        ;
        ;
        ;
        l_1922 &= (*l_1627);
        for (g_640 = 2; (g_640 == (-19)); --g_640)
        {
            unsigned l_1925[8][2] = {{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L},{0xA2D38631L,0xA2D38631L}};
            int i, j;
            l_1925[2][1]++;
        }
    }


    ;

    ;
    return g_1928[6][0][0];



}







static short func_7(unsigned p_8, unsigned char p_9, char p_10)
{
    unsigned *l_1384 = (void*)0;
    long long **l_1385 = &g_163;
    char *l_1386 = (void*)0;
    char *l_1387 = &g_94;
    unsigned l_1388 = 1UL;
    int *l_1389 = &g_497[3][4];
    int *l_1390 = &g_1137;
    int l_1416 = 0xFD46EBACL;
    int l_1418 = 0x831E27E5L;
    int l_1419 = 0x6D2E7FC6L;
    unsigned short l_1438 = 0x66F1L;
    unsigned l_1450[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    unsigned short **l_1455 = &g_236;
    unsigned short l_1501[1];
    unsigned short l_1554 = 2UL;
    unsigned char l_1563 = 253UL;
    unsigned char l_1595[10][6][1] = {{{0x9AL},{0xB7L},{0x81L},{0xB7L},{0x9AL},{255UL}},{{0x93L},{0xDBL},{0x93L},{255UL},{0x9AL},{0xB7L}},{{0x81L},{0xB7L},{0x9AL},{255UL},{0x93L},{0xDBL}},{{0x93L},{255UL},{0x9AL},{0xB7L},{0x81L},{0xB7L}},{{0x9AL},{255UL},{0x93L},{0xDBL},{0x93L},{255UL}},{{0x9AL},{0xB7L},{0x81L},{0xB7L},{0x9AL},{255UL}},{{0x93L},{0xDBL},{0x93L},{255UL},{0x9AL},{0xB7L}},{{0x81L},{0xB7L},{0x9AL},{255UL},{0x93L},{0xDBL}},{{0x93L},{255UL},{0x9AL},{0xB7L},{0x81L},{0xB7L}},{{0x9AL},{255UL},{0x93L},{0xDBL},{0x93L},{255UL}}};
    unsigned l_1609 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1501[i] = 0x0018L;
lbl_1610:
    (*l_1390) = ((*l_1389) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_1387) = (p_9 | (safe_sub_func_int8_t_s_s((g_82 || p_8), p_10)))), 2UL)), l_1388)) , p_8), p_9)), l_1388)), 15)), p_9)));
lbl_1626:
    for (g_79 = 0; (g_79 != (-27)); g_79 = safe_sub_func_uint8_t_u_u(g_79, 8))
    {
        unsigned short l_1395[10];
        int *l_1399 = &g_497[1][0];
        long long *l_1400 = (void*)0;
        int l_1417 = 6L;
        char l_1441 = 0x44L;
        unsigned short **l_1454 = &g_236;
        int l_1499[10][5] = {{0x4BBC664DL,1L,1L,0x4BBC664DL,1L},{0x4BBC664DL,0x4BBC664DL,0x4C105176L,0x4BBC664DL,0x4BBC664DL},{1L,0x4BBC664DL,1L,1L,0x4BBC664DL},{0x4BBC664DL,1L,1L,0x4BBC664DL,1L},{0x4BBC664DL,0x4BBC664DL,0x4C105176L,0x4BBC664DL,0x4BBC664DL},{1L,0x4BBC664DL,1L,1L,0x4BBC664DL},{0x4BBC664DL,1L,1L,0x4BBC664DL,1L},{0x4BBC664DL,0x4BBC664DL,0x4C105176L,0x4BBC664DL,0x4BBC664DL},{1L,0x4BBC664DL,1L,1L,0x4BBC664DL},{0x4BBC664DL,1L,1L,0x4BBC664DL,1L}};
        unsigned long long ***l_1559[8][7] = {{&g_366[1],&g_366[1],(void*)0,(void*)0,&g_366[1],&g_366[1],(void*)0},{&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0]},{&g_366[1],(void*)0,(void*)0,&g_366[1],&g_366[1],(void*)0,(void*)0},{&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0]},{&g_366[1],&g_366[1],(void*)0,(void*)0,&g_366[1],&g_366[1],(void*)0},{&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0]},{&g_366[1],(void*)0,(void*)0,&g_366[1],&g_366[1],(void*)0,(void*)0},{&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0],(void*)0,&g_366[0]}};
        short *l_1621 = &g_484;
        int i, j;
        for (i = 0; i < 10; i++)
            l_1395[i] = 0xB566L;
        if (p_8)
            break;
        for (p_10 = 0; (p_10 <= (-2)); --p_10)
        {
            (*l_1389) = l_1395[0];
        }
        for (l_1388 = 1; (l_1388 <= 6); l_1388 += 1)
        {
            int **l_1396 = &g_591;
            int l_1420[5][6][7] = {{{8L,0xE0A7E717L,0x1112F595L,0x6F4BB198L,0L,0x6F4BB198L,0x1112F595L},{0L,0L,0x286691B1L,0xFE3B3B37L,0x28F56AC6L,0xE20B61FAL,0x114106EFL},{0xFE3B3B37L,0xB691E7ECL,0x1974E6C0L,0x41CABD54L,0L,0x1974E6C0L,0L},{0x1974E6C0L,0xE0A7E717L,0xB691E7ECL,0x1112F595L,0x28F56AC6L,0xC2390445L,4L},{7L,0x114106EFL,0x59C93182L,0L,0L,0x2E4FA72EL,7L},{0xFE3B3B37L,0xC2390445L,2L,0x17EC51D5L,0xB691E7ECL,(-1L),7L}},{{0xB691E7ECL,7L,0L,0L,7L,0xB691E7ECL,4L},{0x114106EFL,0x41CABD54L,(-6L),0xFE3B3B37L,0x390E9D3AL,(-3L),0L},{0x17EC51D5L,0x6F4BB198L,0xD72B8254L,0x390E9D3AL,0x1112F595L,(-1L),0x114106EFL},{0xCE402471L,0x41CABD54L,0xB691E7ECL,0xC2390445L,0x17EC51D5L,8L,0x1112F595L},{1L,7L,0xD37C29ABL,1L,0x390E9D3AL,(-10L),0xAC4659E5L},{0xAC4659E5L,0xC2390445L,0x6F4BB198L,1L,0x1974E6C0L,0x1974E6C0L,1L}},{{0x1112F595L,0x114106EFL,0x1112F595L,0xC2390445L,0L,0L,0xCE402471L},{0x114106EFL,1L,0x2478551CL,0xAC4659E5L,0x390E9D3AL,0x62FB31A0L,0xFE3B3B37L},{0L,0xD72B8254L,0xCE402471L,0x41CABD54L,0xB691E7ECL,0xC2390445L,0x17EC51D5L},{0L,0L,(-1L),0xC2390445L,0x57D2C8F7L,(-1L),0xD72B8254L},{0xE0A7E717L,1L,0x59C93182L,0xFE3B3B37L,0L,0xD37C29ABL,0x41CABD54L},{0xE0A7E717L,0x1112F595L,0x6F4BB198L,0L,0x6F4BB198L,0x1112F595L,0xE0A7E717L}},{{0L,7L,0xB691E7ECL,4L,0L,0xB2D6F2BBL,(-1L)},{0L,0xE0A7E717L,(-10L),0x57D2C8F7L,0xE0A7E717L,0x59C93182L,0x41CABD54L},{0x17EC51D5L,0xC2390445L,0xB691E7ECL,0x41CABD54L,0xCE402471L,0xD72B8254L,0L},{4L,0xAC4659E5L,0x6F4BB198L,0xCE402471L,0xFE3B3B37L,0xB2D6F2BBL,0x1112F595L},{0x114106EFL,0x57D2C8F7L,0x59C93182L,7L,0xFE3B3B37L,2L,0xFE3B3B37L},{0x28F56AC6L,(-1L),(-1L),0x28F56AC6L,0xCE402471L,0x1974E6C0L,0x114106EFL}},{{8L,7L,0xCE402471L,2L,0xE0A7E717L,(-1L),2L},{0xFE3B3B37L,0x17EC51D5L,0x2478551CL,7L,0L,(-10L),0x114106EFL},{0x17EC51D5L,0xB2D6F2BBL,4L,0xAC4659E5L,0x6F4BB198L,0x2E4FA72EL,0L},{0x286691B1L,0x6F4BB198L,0x2E4FA72EL,(-10L),0xD72B8254L,0xD37C29ABL,0x2478551CL},{0xC2390445L,0x6F4BB198L,1L,0x1974E6C0L,0x1974E6C0L,1L,0x6F4BB198L},{0xB2D6F2BBL,(-6L),0x286691B1L,0L,0x59C93182L,0L,0xC2390445L}}};
            unsigned char l_1428[1][9] = {{0x8EL,1UL,0x8EL,0x8EL,1UL,0x8EL,0x8EL,1UL,0x8EL}};
            unsigned **l_1465 = &g_60[5][1];
            long long *l_1565 = &g_150[2];
            unsigned char l_1593 = 0xF4L;
            int i, j, k;
            (*l_1396) = &g_33[l_1388];

            ;
            for (g_1096 = 2; (g_1096 <= 6); g_1096 += 1)
            {
                if (l_1395[0])
                    break;
                return p_8;
            }
            if ((safe_mod_func_int16_t_s_s(func_39(l_1399, func_39(func_42(l_1400, l_1400, (*l_1390), g_1401, (*l_1385)), (safe_rshift_func_int8_t_s_u(((p_10 & (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(2UL, 0x9E3A9E2E4028F95ELL)), 3))) && (*g_1121)), g_19)))), (*l_1389))))
            {
                unsigned l_1421 = 18446744073709551615UL;
                int l_1432 = 0x02FA4FDCL;
                int l_1437 = 0x3C5F8C7FL;
                long long *l_1440 = (void*)0;
                unsigned char l_1464[5];
                int l_1500 = 0x1AD9824DL;
                long long l_1537 = (-1L);
                int l_1538[4][3] = {{0x44B35B77L,(-3L),0x44B35B77L},{0x44B35B77L,(-3L),0x44B35B77L},{0x44B35B77L,(-3L),0x44B35B77L},{0x44B35B77L,(-3L),0x44B35B77L}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1464[i] = 9UL;
                if (p_10)
                {
                    unsigned long long l_1412 = 18446744073709551607UL;
                    int *l_1415[9] = {&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4],&g_497[0][4]};
                    unsigned char *l_1429[3][9][7] = {{{&g_6,(void*)0,(void*)0,&g_161,&g_90,&g_6,&g_6},{(void*)0,&g_90,&g_161,&g_90,(void*)0,&l_1428[0][5],&g_90},{(void*)0,(void*)0,(void*)0,&g_90,(void*)0,(void*)0,&l_1428[0][5]},{(void*)0,&l_1428[0][5],&g_161,&g_161,&l_1428[0][5],(void*)0,(void*)0},{(void*)0,&g_90,&l_1428[0][5],(void*)0,&l_1428[0][5],&g_6,&g_90},{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,(void*)0},{(void*)0,&g_6,&g_6,&g_161,(void*)0,(void*)0,&g_161},{&l_1428[0][5],&g_90,&g_90,&g_6,&g_6,&g_90,&g_90},{&g_6,(void*)0,&g_6,(void*)0,(void*)0,&g_161,&g_90}},{{(void*)0,&g_6,&g_161,(void*)0,&g_90,(void*)0,&g_161},{(void*)0,(void*)0,&g_161,(void*)0,&g_6,&g_6,(void*)0},{(void*)0,&g_161,&g_6,&g_6,(void*)0,(void*)0,&g_6},{(void*)0,&g_90,(void*)0,&g_161,&g_6,(void*)0,(void*)0},{&g_6,&g_90,&l_1428[0][5],(void*)0,&g_90,&g_161,&g_90},{&l_1428[0][5],&g_161,&g_161,&l_1428[0][5],(void*)0,(void*)0,&g_6},{(void*)0,(void*)0,&g_161,&g_6,&g_6,(void*)0,(void*)0},{(void*)0,&g_6,&l_1428[0][5],&g_6,(void*)0,&g_6,&g_6},{&l_1428[0][5],(void*)0,(void*)0,&g_6,&g_161,(void*)0,&g_90}},{{&g_161,&g_90,&g_6,&g_6,&g_90,&g_161,(void*)0},{&l_1428[0][5],&g_6,&g_161,&l_1428[0][5],&g_90,&g_6,(void*)0},{(void*)0,&l_1428[0][5],&g_6,(void*)0,&g_6,&l_1428[0][5],(void*)0},{&l_1428[0][5],(void*)0,&g_90,&g_6,(void*)0,&l_1428[0][5],&g_6},{&g_161,&g_6,&g_6,(void*)0,(void*)0,&g_6,&g_6},{(void*)0,&l_1428[0][5],&g_90,(void*)0,&l_1428[0][5],&g_6,&g_6},{&g_161,(void*)0,&g_6,&g_161,&g_6,&g_161,&g_6},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_90,(void*)0},{(void*)0,&g_6,&g_90,(void*)0,&l_1428[0][5],&l_1428[0][5],(void*)0}}};
                    short *l_1430 = &g_149;
                    short *l_1431[7][5][7] = {{{(void*)0,&g_484,(void*)0,&g_484,&g_484,(void*)0,(void*)0},{&g_484,&g_484,&g_484,(void*)0,&g_484,(void*)0,(void*)0},{&g_484,&g_484,(void*)0,(void*)0,&g_484,&g_484,&g_484},{(void*)0,(void*)0,&g_484,(void*)0,&g_484,&g_484,(void*)0},{(void*)0,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484}},{{&g_484,(void*)0,(void*)0,&g_484,&g_484,&g_484,&g_484},{(void*)0,&g_484,&g_484,&g_484,(void*)0,&g_484,&g_484},{(void*)0,&g_484,&g_484,&g_484,&g_484,&g_484,(void*)0},{(void*)0,(void*)0,&g_484,&g_484,&g_484,&g_484,&g_484},{(void*)0,(void*)0,&g_484,&g_484,&g_484,&g_484,&g_484}},{{(void*)0,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,&g_484,(void*)0,&g_484,&g_484},{&g_484,&g_484,&g_484,(void*)0,(void*)0,(void*)0,(void*)0},{&g_484,&g_484,&g_484,&g_484,&g_484,(void*)0,&g_484},{&g_484,&g_484,&g_484,&g_484,&g_484,&g_484,&g_484}},{{&g_484,(void*)0,(void*)0,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,&g_484,(void*)0,&g_484,(void*)0},{&g_484,&g_484,&g_484,(void*)0,&g_484,&g_484,&g_484},{(void*)0,(void*)0,&g_484,&g_484,&g_484,&g_484,&g_484}},{{(void*)0,(void*)0,&g_484,&g_484,(void*)0,&g_484,&g_484},{&g_484,&g_484,&g_484,&g_484,&g_484,(void*)0,&g_484},{&g_484,(void*)0,&g_484,(void*)0,(void*)0,&g_484,&g_484},{&g_484,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,(void*)0,(void*)0,(void*)0,&g_484}},{{&g_484,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_484},{&g_484,&g_484,&g_484,(void*)0,&g_484,&g_484,&g_484},{(void*)0,&g_484,(void*)0,(void*)0,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,(void*)0,(void*)0,&g_484,(void*)0}},{{(void*)0,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484,&g_484,&g_484,(void*)0,&g_484},{&g_484,&g_484,&g_484,&g_484,&g_484,&g_484,&g_484},{&g_484,&g_484,(void*)0,(void*)0,(void*)0,(void*)0,&g_484},{(void*)0,&g_484,(void*)0,&g_484,&g_484,&g_484,&g_484}}};
                    int i, j, k;
                    for (p_9 = 1; (p_9 <= 6); p_9 += 1)
                    {
                        int l_1408 = (-1L);
                        int *l_1409 = &g_988;
                        int *l_1410 = (void*)0;
                        int *l_1411[10] = {&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4],&g_497[3][4]};
                        int i;
                        if (l_1408)
                            break;
                        if ((*l_1390))
                            break;
                        l_1412--;
                        if (l_1412)
                            continue;
                    }
                    --l_1421;
                    if ((*l_1390))
                        break;
                    l_1438 = (l_1437 |= ((safe_sub_func_int16_t_s_s(g_497[3][4], ((safe_div_func_int16_t_s_s((l_1432 = ((*l_1430) = func_39((*l_1396), (p_9 |= l_1428[0][5])))), g_6)) && ((*l_1390) = ((*g_591) = (-2L)))))) & (safe_sub_func_uint32_t_u_u(p_8, (safe_div_func_int8_t_s_s(((*l_1387) = ((void*)0 != &l_1421)), p_10))))));
                }
                else
                {
                    long long *l_1439[5];
                    int l_1453 = 2L;
                    char *l_1463 = &g_392;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1439[i] = &g_19;
                    for (p_10 = 4; (p_10 >= 0); p_10 -= 1)
                    {
                        int i;
                        (*l_1396) = func_42(((*l_1385) = func_50(&p_8, g_33[l_1388], (*l_1385), (*l_1390))), &g_150[4], p_8, func_42(l_1439[3], (((void*)0 != &g_636) , l_1400), (*l_1399), &g_33[2], l_1400), l_1440);

                        ;
                        ;
                        g_33[l_1388] = l_1441;
                        g_33[l_1388] = ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_s(p_9, p_8)) , &g_777) == ((safe_lshift_func_int16_t_s_s(0x9AD6L, ((l_1453 = ((safe_mod_func_int64_t_s_s((l_1450[3] && g_33[l_1388]), 0xE573BDBC0C2A6452LL)) && ((safe_lshift_func_int16_t_s_s((((((*l_1399) , l_1454) != l_1455) , 65535UL) == 0xD381L), p_9)) >= (**l_1396)))) , g_1197[4][0][0]))) , (void*)0)), g_33[l_1388])) , (*g_591));
                        return g_392;
                    }
                    if (l_1441)
                        goto lbl_1626;
                    if ((*l_1389))
                        continue;
                    for (l_1416 = 0; (l_1416 <= 9); l_1416 += 1)
                    {
                        char *l_1460 = &g_94;
                        char **l_1461 = (void*)0;
                        char *l_1462 = &l_1441;
                        unsigned char *l_1466 = &l_1428[0][5];
                        unsigned char *l_1467 = &l_1464[2];
                        int **l_1468[5] = {&l_1399,&l_1399,&l_1399,&l_1399,&l_1399};
                        short *l_1479 = (void*)0;
                        short *l_1480 = (void*)0;
                        long long **l_1481 = &g_1121;
                        int i;
                        (*l_1389) = (func_39(((*l_1396) = func_42(l_1440, &g_150[4], p_8, &g_33[3], &g_19)), ((*l_1467) = ((*l_1466) = (((safe_div_func_int16_t_s_s((((safe_div_func_int16_t_s_s((*l_1389), 0x7737L)) || 2L) , p_10), l_1464[0])) , (void*)0) != l_1465)))) , (-6L));

                        ;
                        g_378 = ((*l_1396) = (*l_1396));

                        ;
                        (*l_1390) = ((*g_378) = (safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(l_1464[3], p_8)) ^ (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((func_39(&g_1137, g_1096) <= ((*l_1390) , (safe_mul_func_int16_t_s_s((+p_9), ((g_484 = 0xD371L) | p_9))))) | p_9), (*g_236))), l_1453))) & p_8), 6)));
                        l_1399 = func_42(((*l_1481) = ((*l_1385) = l_1439[3])), l_1439[3], ((p_9 == (((*l_1390) >= (safe_mod_func_uint64_t_u_u(func_39((*l_1396), ((~(*l_1399)) , p_10)), (p_8 , p_8)))) ^ l_1453)) < (*l_1399)), &l_1453, &g_150[5]);

                        ;
                        ;
                    }

                    ;
                }

                ;
                for (l_1421 = 0; (l_1421 <= 0); l_1421 += 1)
                {
                    unsigned char *l_1484 = &g_161;
                    int l_1497 = 1L;
                    int l_1498[2][3][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1498[i][j][k] = 0xE30DA511L;
                        }
                    }
                    if ((l_1428[l_1421][l_1388] && ((*l_1484)--)))
                    {
                        int *l_1487 = &g_33[2];
                        int l_1488 = 1L;
                        int *l_1489 = &l_1432;
                        int *l_1490 = &g_33[l_1388];
                        int *l_1491 = &g_988;
                        int *l_1492 = &l_1417;
                        int *l_1493 = &g_33[6];
                        int l_1494[1];
                        int *l_1495 = (void*)0;
                        int *l_1496[10] = {&l_1418,&g_79,&g_79,&l_1418,&g_79,&g_79,&l_1418,&g_79,&g_79,&l_1418};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1494[i] = 0x546FBF93L;
                        l_1501[0]++;
                        if (p_9)
                            break;
                        if (p_9)
                            break;
                    }
                    else
                    {
                        (*l_1389) = func_39(((p_10 == p_8) , (*l_1396)), g_79);
                    }
                    for (p_10 = 0; (p_10 <= 9); p_10 += 1)
                    {
                        int i;
                        (*g_591) ^= 0x95330959L;
                        return g_334[(l_1388 + 1)];
                    }
                    (*l_1390) ^= ((*g_591) = l_1464[1]);
                    for (g_484 = 19; (g_484 != 10); g_484--)
                    {
                        return g_497[3][4];
                    }
                }
                g_378 = (((*l_1399) & l_1464[1]) , &g_497[3][4]);

                ;
                if (func_39((*l_1396), (*l_1399)))
                {
                    (*g_514) = l_1465;

                    ;
                }
                else
                {
                    unsigned l_1515 = 18446744073709551615UL;
                    unsigned long long l_1525[6] = {1UL,0xF5546EB8745BC9E1LL,1UL,1UL,0xF5546EB8745BC9E1LL,1UL};
                    int l_1562 = 0xF6F245AFL;
                    int i;
                    for (g_640 = (-10); (g_640 == (-14)); g_640 = safe_sub_func_uint8_t_u_u(g_640, 3))
                    {
                        unsigned short *l_1514 = &g_588[2][2];
                        (**l_1396) = (g_497[2][0] < (+((safe_div_func_uint64_t_u_u(((&g_588[0][1] == ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*l_1399) < (l_1420[3][5][1] = p_10)), g_334[0])), g_78)) , l_1514)) > (-9L)), p_10)) < l_1515)));
                        (*l_1396) = &g_1137;

                        ;
                    }

                    ;
                    for (l_1416 = 0; (l_1416 < 28); l_1416 = safe_add_func_uint16_t_u_u(l_1416, 3))
                    {
                        int *l_1518 = &g_497[2][0];
                        int *l_1519 = &l_1499[8][0];
                        int *l_1520 = &l_1500;
                        int *l_1521 = &g_988;
                        int *l_1522 = (void*)0;
                        int *l_1523 = &l_1420[1][4][1];
                        int *l_1524[8][7][4] = {{{&l_1416,&l_1418,(void*)0,&l_1499[8][3]},{&l_1499[8][3],&l_1437,&l_1417,&g_33[l_1388]},{&l_1417,&g_497[0][2],&l_1417,&g_33[l_1388]},{&l_1417,&l_1437,&l_1499[8][3],&l_1499[8][3]},{(void*)0,&l_1418,&l_1416,&l_1437},{&l_1437,&g_84,&l_1416,&l_1420[3][1][6]},{(void*)0,(void*)0,&l_1499[8][3],&l_1418}},{{&l_1417,&l_1416,&l_1417,&l_1416},{&l_1417,&l_1416,&l_1417,&l_1418},{&l_1499[8][3],(void*)0,(void*)0,&l_1420[3][1][6]},{&l_1416,&g_84,&l_1437,&l_1437},{&l_1416,&l_1418,(void*)0,&l_1499[8][3]},{&l_1499[8][3],&l_1437,&l_1417,&g_33[l_1388]},{&l_1417,&g_497[0][2],&l_1417,&l_1437}},{{&l_1499[5][0],&l_1420[3][1][6],&l_1437,&l_1416},{&g_497[3][4],&g_988,&l_1417,&l_1420[3][1][6]},{(void*)0,&l_1418,&l_1417,(void*)0},{&g_497[3][4],&g_497[0][2],&l_1437,&g_988},{&l_1499[5][0],&g_84,&l_1417,&g_84},{&l_1417,&g_84,&l_1499[5][0],&g_988},{&l_1437,&g_497[0][2],&g_497[3][4],(void*)0}},{{&l_1417,&l_1418,(void*)0,&l_1420[3][1][6]},{&l_1417,&g_988,&g_497[3][4],&l_1416},{&l_1437,&l_1420[3][1][6],&l_1499[5][0],&l_1437},{&l_1417,&g_33[l_1388],&l_1417,&l_1437},{&l_1499[5][0],&l_1420[3][1][6],&l_1437,&l_1416},{&g_497[3][4],&g_988,&l_1417,&l_1420[3][1][6]},{(void*)0,&l_1418,&l_1417,(void*)0}},{{&g_497[3][4],&g_497[0][2],&l_1437,&g_988},{&l_1499[5][0],&g_84,&l_1417,&g_84},{&l_1417,&g_84,&l_1499[5][0],&g_988},{&l_1437,&g_497[0][2],&g_497[3][4],(void*)0},{&l_1417,&l_1418,(void*)0,&l_1420[3][1][6]},{&l_1417,&g_988,&g_497[3][4],&l_1416},{&l_1437,&l_1420[3][1][6],&l_1499[5][0],&l_1437}},{{&l_1417,&g_33[l_1388],&l_1417,&l_1437},{&l_1499[5][0],&l_1420[3][1][6],&l_1437,&l_1416},{&g_497[3][4],&l_1437,&l_1437,&g_84},{&l_1419,&g_33[l_1388],&l_1437,&l_1418},{&l_1417,(void*)0,(void*)0,&l_1437},{(void*)0,&g_497[0][2],(void*)0,&g_497[0][2]},{(void*)0,&g_497[0][2],(void*)0,&l_1437}},{{(void*)0,(void*)0,&l_1417,&l_1418},{&l_1437,&g_33[l_1388],&l_1419,&g_84},{&l_1437,&l_1437,&l_1417,(void*)0},{(void*)0,&g_84,(void*)0,&l_1416},{(void*)0,&l_1499[8][3],(void*)0,&l_1416},{(void*)0,&g_84,(void*)0,(void*)0},{&l_1417,&l_1437,&l_1437,&g_84}},{{&l_1419,&g_33[l_1388],&l_1437,&l_1418},{&l_1417,(void*)0,(void*)0,&l_1437},{(void*)0,&g_497[0][2],(void*)0,&g_497[0][2]},{(void*)0,&g_497[0][2],(void*)0,&l_1437},{(void*)0,(void*)0,&l_1417,&l_1418},{&l_1437,&g_33[l_1388],&l_1419,&g_84},{&l_1437,&l_1437,&l_1417,(void*)0}}};
                        int i, j, k;
                        l_1525[1]++;
                    }
                    for (g_988 = 0; (g_988 != 5); g_988 = safe_add_func_uint32_t_u_u(g_988, 7))
                    {
                        int *l_1530 = &l_1437;
                        int *l_1531 = &g_84;
                        int *l_1532 = (void*)0;
                        int *l_1533 = &l_1499[2][0];
                        int *l_1534 = &g_1137;
                        int *l_1535 = (void*)0;
                        int *l_1536[3][3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1536[i][j] = (void*)0;
                        }
                        --g_1539;
                        return p_9;
                    }
                    for (g_1137 = 0; (g_1137 > 1); g_1137 = safe_add_func_uint64_t_u_u(g_1137, 2))
                    {
                        unsigned l_1556 = 0x4ADEE0E2L;
                        long long *l_1557 = &g_19;
                        int l_1558 = (-2L);
                        unsigned long long ****l_1560 = &l_1559[6][5];
                        int *l_1561[6] = {&g_33[0],&l_1417,&l_1417,&g_33[0],&l_1417,&l_1417};
                        int i;
                        (*l_1389) = func_39(((*l_1396) = (void*)0), ((safe_lshift_func_uint8_t_u_u((l_1558 ^= func_39(&g_497[3][4], ((safe_mod_func_uint64_t_u_u(p_9, ((safe_add_func_int32_t_s_s(p_10, ((((func_39(&l_1499[8][3], (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(func_39(func_42(func_50((func_39(((&g_33[2] == (void*)0) , func_42(&g_150[4], &g_150[4], l_1554, g_1555[4][0][2], l_1400)), g_6) , (void*)0), (*g_1121), &g_150[4], l_1556), l_1557, p_8, &g_988, l_1557), (*l_1389)), 8UL)), 0L))) != 8UL) >= p_8) , p_9) != 0UL))) , p_8))) , g_846))), 0)) , p_9));

                        ;
                        (*l_1389) = func_39(&l_1417, p_9);
                        l_1562 ^= ((*l_1399) ^= ((((*l_1560) = l_1559[3][4]) == (void*)0) , p_9));
                    }

                    ;
                    ;
                }

                ;
                ;
            }
            else
            {
                long long *l_1566[6][8][1] = {{{&g_150[4]},{&g_150[4]},{&g_150[4]},{&g_19},{&g_19},{(void*)0},{&g_150[4]},{(void*)0}},{{&g_19},{&g_19},{&g_150[4]},{&g_150[4]},{&g_150[4]},{&g_19},{&g_19},{(void*)0}},{{&g_150[4]},{(void*)0},{&g_150[4]},{&g_150[4]},{(void*)0},{(void*)0},{(void*)0},{&g_150[4]}},{{&g_150[4]},{(void*)0},{&g_150[4]},{(void*)0},{&g_150[4]},{&g_150[4]},{(void*)0},{(void*)0}},{{(void*)0},{&g_150[4]},{&g_150[4]},{(void*)0},{&g_150[4]},{(void*)0},{&g_150[4]},{&g_150[4]}},{{(void*)0},{(void*)0},{(void*)0},{&g_150[4]},{&g_150[4]},{(void*)0},{&g_150[4]},{(void*)0}}};
                int l_1572 = 0x8465C619L;
                unsigned *l_1601 = &l_1450[3];
                int *l_1623 = &g_33[0];
                int i, j, k;
                if (((*g_591) &= func_39(func_42(((*l_1385) = func_50(l_1399, (*l_1399), func_50(func_42(&g_19, (*l_1385), (*l_1399), &l_1419, func_50(func_42(func_50(&g_499, (l_1563 , (*l_1399)), &g_164, p_8), g_1564[6][6][1], p_10, (*l_1396), l_1565), p_9, l_1400, (*l_1389))), (*g_1121), l_1566[4][1][0], p_9), (*l_1399))), &g_150[4], (*g_983), &l_1419, l_1565), p_9)))
                {
                    unsigned char l_1573 = 0x04L;
                    unsigned *l_1603 = &g_36;
                    for (g_1096 = (-18); (g_1096 == 49); ++g_1096)
                    {
                        int *l_1569 = &g_33[l_1388];
                        int *l_1570 = &g_33[2];
                        int *l_1571[8] = {&g_497[3][4],&g_33[2],&g_497[3][4],&g_33[2],&g_497[3][4],&g_33[2],&g_497[3][4],&g_33[2]};
                        long long *l_1594 = &g_150[4];
                        short *l_1596 = (void*)0;
                        unsigned long long *****l_1600 = &g_1599;
                        unsigned **l_1602 = &l_1601;
                        long long l_1607 = 0L;
                        unsigned char *l_1608[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1608[i] = &l_1563;
                        l_1573++;
                        (**l_1396) = (safe_sub_func_uint64_t_u_u((((*l_1389) |= (+l_1573)) != (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((g_149 && (l_1573 , (((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((*g_1121) &= 0L))), (*l_1569))) && ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_1593, func_39(func_42(((*l_1385) = l_1565), l_1594, (g_1302 , l_1573), &g_33[2], &g_164), g_334[2]))), g_164)), 0xF9B7L)) ^ (**l_1396))), l_1595[9][1][0])) , (void*)0) != l_1596))), p_8)), (-2L)))), p_9));
                        (*l_1389) = ((((safe_mul_func_uint8_t_u_u((&g_673 == &g_1539), (g_161 |= (((!((-8L) < ((((((*l_1600) = g_1599) == (void*)0) < (0xEBL < ((((*l_1602) = l_1601) == (g_1604 = l_1603)) && ((**l_1396) ^= (safe_mul_func_uint8_t_u_u(g_21, l_1607)))))) > l_1573) ^ 0x05L))) , 1L) != p_10)))) > 1L) | p_9) & l_1609);

                        ;
                    }
                    if (p_10)
                        goto lbl_1610;
                }
                else
                {
                    for (g_1096 = 0; (g_1096 <= 6); g_1096 += 1)
                    {
                        (*g_591) = p_8;
                        return g_164;
                    }
                    (*l_1396) = &l_1418;

                    ;
                }

                ;
                ;
                g_1611 = &g_83;

                ;
                for (g_36 = 0; (g_36 == 24); g_36++)
                {
                    for (g_638 = 0; (g_638 > 5); g_638 = safe_add_func_uint8_t_u_u(g_638, 9))
                    {
                        long long *l_1616 = &g_19;
                        l_1623 = ((*l_1396) = func_42(l_1616, func_50(((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((g_1622[0] = l_1621) != (((void*)0 == &g_1137) , &g_149)), ((void*)0 == &g_1316[0]))), func_39(&l_1499[8][3], p_8))) , &p_8), p_8, l_1616, p_9), (*l_1390), &l_1572, (*l_1385)));

                        ;
                        ;
                    }

                    ;
                    (*l_1396) = &l_1416;

                    ;
                    for (g_237 = 7; (g_237 >= 50); g_237 = safe_add_func_int8_t_s_s(g_237, 7))
                    {
                        if (p_9)
                            break;
                        if ((**l_1396))
                            continue;
                        if ((*l_1390))
                            break;
                        return p_8;


                    }
                }

                ;
                ;
                return p_9;


            }

            ;
            ;

        }
    }
    return (*l_1390);
}







static unsigned func_22(long long * p_23, unsigned * p_24, short p_25, long long p_26, long long * p_27)
{
    unsigned l_785 = 4294967294UL;
    unsigned long long ***l_786[6][5] = {{&g_366[1],(void*)0,&g_366[1],(void*)0,(void*)0},{&g_366[1],(void*)0,(void*)0,(void*)0,(void*)0},{&g_366[1],&g_366[1],(void*)0,(void*)0,&g_366[1]},{&g_366[1],(void*)0,&g_366[1],(void*)0,(void*)0},{&g_366[1],(void*)0,(void*)0,(void*)0,(void*)0},{&g_366[1],&g_366[1],(void*)0,(void*)0,&g_366[1]}};
    long long *l_789 = (void*)0;
    long long *l_790 = &g_150[4];
    int *l_796 = &g_33[2];
    char *l_803 = &g_94;
    int l_845 = 1L;
    int *l_868 = (void*)0;
    int l_931 = 0xE0A0EEB9L;
    int l_950 = 0xE16E27A0L;
    int l_951 = 0L;
    short l_952 = (-1L);
    int l_954 = 0L;
    int l_957 = 0x42DDF9E0L;
    int l_958[2][3][1] = {{{0L},{0L},{0L}},{{0L},{0L},{0L}}};
    unsigned short *l_1036[3][10] = {{&g_588[0][1],(void*)0,&g_588[2][0],(void*)0,&g_588[0][1],&g_588[0][1],(void*)0,&g_588[2][0],(void*)0,&g_588[0][1]},{&g_588[0][1],(void*)0,&g_588[2][0],(void*)0,&g_588[0][1],&g_588[0][1],(void*)0,&g_588[2][0],&g_588[2][0],(void*)0},{(void*)0,&g_588[2][0],&g_588[0][1],&g_588[2][0],(void*)0,(void*)0,&g_588[2][0],&g_588[0][1],&g_588[2][0],(void*)0}};
    unsigned **l_1037[9] = {&g_60[4][2],&g_60[4][2],(void*)0,&g_60[4][2],&g_60[4][2],(void*)0,&g_60[4][2],&g_60[4][2],(void*)0};
    short l_1091 = (-1L);
    unsigned *l_1128 = &g_61;
    unsigned l_1170 = 0x3EE184E3L;
    unsigned short l_1211 = 65530UL;
    volatile int *l_1251 = &g_83;
    int l_1259 = 3L;
    char l_1321 = 0x5AL;
    int i, j, k;
    if ((safe_lshift_func_int16_t_s_u((((*g_236) = (l_785 ^ ((l_785 , (l_786[5][3] = &g_366[0])) == ((l_785 <= (&g_33[1] == (func_68(&l_785, func_42(&g_150[8], l_789, (*p_24), &g_33[2], l_789), l_790) , p_24))) , &g_366[1])))) == 0xA9C2L), 5)))
    {
        char *l_802 = &g_392;
        int l_804 = 9L;
        int **l_805 = &g_591;
        unsigned *l_843 = &l_785;
        unsigned ***l_861[5];
        int l_929 = 0L;
        int l_932 = 0x4B24C6BAL;
        int l_955 = 0x2A3BAD60L;
        int l_956 = (-8L);
        int l_961 = 0xD7872ABEL;
        int l_969 = 4L;
        int l_970 = 0x09442BE1L;
        int l_972 = (-1L);
        long long *l_991 = &g_150[4];
        long long *l_1007 = (void*)0;
        unsigned short l_1014 = 0UL;
        int i;
        for (i = 0; i < 5; i++)
            l_861[i] = &g_515;
    }
    else
    {
        long long l_1028 = 0x5AEFC84B7CFE3277LL;
        unsigned char *l_1029[4];
        int l_1034 = 0x22FECE07L;
        unsigned *l_1035 = &l_785;
        unsigned l_1122 = 0x29929842L;
        int l_1181 = 4L;
        unsigned l_1230[4][1][3];
        int l_1282 = (-1L);
        int l_1284 = (-8L);
        int l_1287[6][1][5] = {{{0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL}},{{(-2L),0L,(-2L),0L,(-2L)}},{{0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL}},{{(-2L),0L,(-2L),0L,(-2L)}},{{0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL,0xC4C665FEL}},{{(-2L),0L,(-2L),0L,(-2L)}}};
        short l_1320 = 0L;
        unsigned short l_1322[9] = {0xD082L,0xD082L,0xD082L,0xD082L,0xD082L,0xD082L,0xD082L,0xD082L,0xD082L};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1029[i] = &g_161;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1230[i][j][k] = 4UL;
            }
        }
        if (((p_26 || (g_90 = l_1028)) || ((&g_588[2][0] == ((safe_sub_func_int16_t_s_s(p_26, (safe_sub_func_uint64_t_u_u(l_1034, l_1028)))) , l_1036[0][5])) || 0xCCD8L)))
        {
            unsigned **l_1039 = &g_60[2][2];
            unsigned ***l_1038 = &l_1039;
            int l_1044 = 0L;
            short l_1049 = 0L;
            int l_1093 = 0xDBE84750L;
            int l_1095 = 2L;
            long long l_1130[1][6];
            unsigned l_1162 = 0x2BEFD0D7L;
            long long **l_1199 = &l_789;
            long long *l_1204 = &l_1130[0][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1130[i][j] = 0L;
            }
            if ((((((*g_514) = l_1037[3]) == ((*l_1038) = &p_24)) == (safe_mul_func_int8_t_s_s(((0UL >= (safe_add_func_int32_t_s_s(p_26, (*g_983)))) >= 0x5EBB36C3L), l_1044))) , ((*g_591) = (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((*g_514) = (*l_1038)) != ((((*l_803) |= g_90) && 251UL) , (void*)0)), g_36)), (*g_163))))))
            {
                char l_1050 = 4L;
                (*l_796) = p_25;
                l_1050 = l_1049;
            }
            else
            {
                return (*g_983);


            }

            ;
            ;
lbl_1198:
            if ((((*p_24) ^ (g_988 | (safe_add_func_int8_t_s_s(0x5CL, l_1049)))) >= l_1044))
            {
                unsigned short l_1059 = 0UL;
                short *l_1060 = (void*)0;
                short *l_1061[6][9] = {{&g_149,&g_149,&l_952,&g_484,(void*)0,&l_952,&g_484,(void*)0,&l_952},{&g_484,&l_1049,&l_952,&l_952,&l_952,&l_952,&l_1049,&g_484,&l_952},{(void*)0,&g_484,&l_952,(void*)0,&g_484,&l_952,&g_149,&g_149,&l_952},{&g_149,&g_149,&l_952,&g_484,(void*)0,&l_952,&g_484,(void*)0,&g_149},{&g_149,&l_1049,&g_484,(void*)0,(void*)0,&g_484,&l_1049,&g_149,&g_149},{&l_1049,&l_1049,&g_484,&l_1049,&l_1049,&g_484,&l_1049,&l_1049,&g_149}};
                unsigned ***l_1065 = &l_1037[3];
                int *l_1077 = &l_958[1][2][0];
                int l_1092 = 0xB67C5D68L;
                int l_1094 = 0x90A906D1L;
                char l_1101 = 3L;
                unsigned char l_1104 = 0xFAL;
                int i, j;
                if ((g_334[3] <= (0x64E1L == (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_1034 = (g_588[2][0] >= (safe_lshift_func_int8_t_s_u(((((***l_1038) ^= 0xD6DDF357L) ^ ((*g_591) & (func_39((l_1059 , &g_497[3][3]), g_392) >= 4294967294UL))) ^ 1L), 2)))), p_25)), 7)))))
                {
                    unsigned **l_1073 = &g_60[3][4];
                    for (p_26 = 0; (p_26 < (-23)); p_26 = safe_sub_func_uint32_t_u_u(p_26, 9))
                    {
                        unsigned short l_1064[4];
                        unsigned ***l_1072[3];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1064[i] = 65535UL;
                        for (i = 0; i < 3; i++)
                            l_1072[i] = (void*)0;
                        if (l_1064[1])
                            break;
                        (*g_591) = func_39(&g_33[4], ((void*)0 != l_1065));
                        (*g_591) &= (l_1028 , 0xEA4215CDL);
                        (*g_591) ^= ((l_1034 > (((safe_sub_func_uint32_t_u_u(0xEB4DFC2AL, ((((safe_mul_func_uint16_t_u_u(0UL, ((l_1049 & (((*l_1038) = (void*)0) == (l_1073 = ((*l_1065) = ((*g_514) = ((safe_lshift_func_uint8_t_u_s((&g_36 != (void*)0), 7)) , &p_24)))))) != p_26))) < p_25) | p_25) , (*l_796)))) == (*g_983)) && g_150[4])) > 0xA906F6EEL);

                        ;
                        ;
                    }


                    ;
                    ;
                }
                else
                {
                    int **l_1075 = (void*)0;
                    int **l_1076 = &g_378;
                    int l_1089 = (-1L);
                    int l_1090[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1090[i] = 0xCDBC7D83L;
                    g_636 = (l_1077 = ((*l_1076) = &g_988));

                    ;
                    ;
                    ;
                    for (g_846 = 0; (g_846 >= (-26)); --g_846)
                    {
                        int *l_1080 = &g_497[2][0];
                        int *l_1081 = &l_931;
                        int *l_1082 = &g_988;
                        int *l_1083 = &l_951;
                        int *l_1084 = (void*)0;
                        int *l_1085 = &g_497[3][4];
                        int *l_1086 = &l_957;
                        int *l_1087 = &l_954;
                        int *l_1088[7][2][6] = {{{&l_951,&l_957,&g_84,(void*)0,(void*)0,&g_84},{(void*)0,(void*)0,&g_84,&l_957,&l_951,&g_84}},{{&l_957,&l_951,&g_84,&l_951,&l_957,&g_84},{&l_951,&l_957,&g_84,(void*)0,(void*)0,&g_84}},{{(void*)0,(void*)0,&g_84,&l_957,&l_951,&g_84},{&l_957,&l_951,&g_84,&l_951,&l_957,&g_84}},{{&l_951,&l_957,&g_84,(void*)0,(void*)0,&g_84},{(void*)0,(void*)0,&g_84,&l_957,&l_951,&g_84}},{{&l_957,&l_951,&g_84,&l_951,&l_957,&g_84},{&l_951,&l_957,&g_84,(void*)0,(void*)0,&g_84}},{{(void*)0,(void*)0,&g_84,&l_957,&l_951,&g_84},{&l_957,&l_951,&g_84,&l_951,&l_957,&g_84}},{{&l_951,&l_957,&g_84,(void*)0,(void*)0,&g_33[2]},{&l_951,&l_951,&g_33[2],(void*)0,&l_957,&g_33[2]}}};
                        int i, j, k;
                        --g_1096;
                        (*l_1086) |= (*g_591);
                    }
                    for (p_26 = 29; (p_26 != (-8)); p_26 = safe_sub_func_uint8_t_u_u(p_26, 9))
                    {
                        unsigned long long l_1105 = 18446744073709551615UL;
                        if ((*g_378))
                            break;
                        (*g_378) = ((((0UL ^ ((*g_591) ^ ((l_1101 , func_39(p_24, ((func_39(&l_1092, (func_39(p_24, g_83) , (safe_lshift_func_int8_t_s_s(((p_24 != (void*)0) | p_25), g_673)))) , l_1104) == l_1093))) < (*g_236)))) > 255UL) ^ g_392) , l_1105);


                    }


                }




                ;
                ;
            }
            else
            {
                char l_1117 = 0xFFL;
                int l_1118 = 0x8F438CE9L;
                unsigned long long l_1120 = 18446744073709551611UL;
                unsigned *l_1129 = &g_499;
                unsigned long long ***l_1161 = &g_366[1];
                int l_1167 = 0x76FC25C0L;
                int l_1168[8][4] = {{0L,0xD64164D4L,0xD2D719CEL,0L},{1L,0xD1586E4CL,1L,7L},{0xD2D719CEL,0L,0x99BFE460L,0x99BFE460L},{0xD2D719CEL,0xD2D719CEL,1L,0x5AA49BC8L},{1L,0x99BFE460L,0xD2D719CEL,0xD1586E4CL},{0L,(-1L),0x5912F9B9L,0xD2D719CEL},{0L,(-1L),0L,0xD1586E4CL},{(-1L),0x99BFE460L,(-1L),0x5AA49BC8L}};
                int i, j;
                for (g_499 = 0; (g_499 < 12); g_499 = safe_add_func_int32_t_s_s(g_499, 4))
                {
                    long long l_1119 = 0L;
                    unsigned *l_1125 = &l_1122;
                    int l_1141 = 0x211BFE4AL;
                    unsigned long long ***l_1160 = (void*)0;
                    int l_1169 = 0xD685BB88L;
                    if ((g_392 > ((func_68(p_24, &g_497[2][0], g_1121) , l_1122) >= p_26)))
                    {
                        (*l_796) = ((safe_sub_func_uint64_t_u_u(func_39(&g_497[1][3], func_68(((*g_515) = l_1125), &g_497[3][1], &g_150[4])), 9UL)) >= p_26);


                        ;
                        if ((*g_591))
                            continue;
                        if (p_26)
                            break;
                    }
                    else
                    {
                        int *l_1140[8][1] = {{&l_1093},{&l_958[1][1][0]},{&l_958[1][1][0]},{&l_1093},{&l_958[1][1][0]},{&l_958[1][1][0]},{&l_1093},{&l_958[1][1][0]}};
                        int i, j;
                        if (p_26)
                            break;
                        l_1141 = (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((*p_24), 0x2D788C3EL)), (safe_rshift_func_uint16_t_u_u((2L != (g_1137 , (((g_161 = p_26) , &g_636) != (void*)0))), (safe_rshift_func_int16_t_s_s(p_26, ((func_39(l_1140[6][0], l_1122) <= p_26) ^ (**g_515))))))));


                        (*g_591) = l_1028;
                        (*l_796) = ((l_1141 &= (((((0L ^ l_1028) & (safe_rshift_func_uint16_t_u_s(p_26, 0))) == (*p_24)) == (safe_mod_func_int8_t_s_s((func_39(((((void*)0 == l_1128) > (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((*p_24), ((((*g_983) & func_39(&g_84, l_1093)) | (*g_1121)) , p_25))), 0xD2FBD337L))) , (void*)0), l_1130[0][4]) != p_26), g_161))) | 65528UL)) == (*g_1121));
                    }


                    for (g_79 = 0; (g_79 > 24); g_79 = safe_add_func_int8_t_s_s(g_79, 7))
                    {
                        int **l_1152 = (void*)0;
                        int **l_1153 = &l_796;
                        int **l_1154 = &g_378;
                        int **l_1155 = &g_636;
                        short *l_1164 = &g_149;
                        (*l_796) = l_1034;
                        (*l_1155) = ((*l_1154) = ((*l_1153) = &l_1034));

                        ;
                        ;
                        ;
                        l_1044 = (func_39(&l_1095, g_484) , (safe_mul_func_uint8_t_u_u((~((**l_1154) = (safe_add_func_int8_t_s_s((~((l_1160 != l_1161) , l_1028)), l_1162)))), ((safe_unary_minus_func_int8_t_s(g_499)) > ((*l_1164) = ((*g_983) | p_26))))));


                    }
                    for (g_84 = 2; (g_84 >= 0); g_84 -= 1)
                    {
                        int *l_1165 = (void*)0;
                        int *l_1166[7] = {&g_988,(void*)0,(void*)0,&g_988,(void*)0,(void*)0,&g_988};
                        long long **l_1177[10][6][4] = {{{&g_1074,&l_790,(void*)0,&g_1121},{(void*)0,&g_1121,(void*)0,(void*)0},{&g_1121,&g_1121,(void*)0,&g_1121},{&g_1121,&l_790,(void*)0,(void*)0},{&l_790,&g_163,&l_790,&g_163},{&g_1074,&g_1074,&g_1074,&l_789}},{{&g_1074,&g_1074,&l_789,&l_790},{(void*)0,(void*)0,&l_789,(void*)0},{(void*)0,&l_790,&l_789,&g_163},{&g_1074,&g_1121,&l_790,&g_1074},{&l_790,&g_1074,&g_1121,&l_789},{&g_1121,(void*)0,&g_1074,(void*)0}},{{&g_163,&g_163,(void*)0,&g_163},{&l_790,(void*)0,(void*)0,(void*)0},{&g_163,&l_789,&g_1074,&g_163},{&g_1121,&l_789,&g_1074,(void*)0},{(void*)0,&g_1074,&g_1121,&g_1121},{&g_1074,(void*)0,&l_789,&g_1121}},{{&g_163,(void*)0,&g_163,&g_1074},{&g_163,&l_789,&g_163,&g_1074},{&l_790,&g_1074,(void*)0,&l_789},{(void*)0,&g_1074,(void*)0,&g_163},{&l_790,&g_1121,&g_163,&g_163},{&g_163,&g_1074,&g_163,(void*)0}},{{&g_163,(void*)0,&l_789,(void*)0},{&g_1074,(void*)0,&g_1121,(void*)0},{(void*)0,(void*)0,&g_1074,&g_163},{&g_1121,&g_1074,&g_1074,(void*)0},{&g_163,(void*)0,(void*)0,&l_790},{&l_790,&l_790,(void*)0,&l_789}},{{&g_163,(void*)0,&g_1074,&g_1121},{&g_1121,&g_1074,&g_1121,&l_789},{&l_789,&g_1121,(void*)0,(void*)0},{&g_163,&l_789,&g_163,(void*)0},{&l_789,&g_1121,&g_1074,&g_1121},{&l_789,(void*)0,(void*)0,&l_790}},{{&g_1121,&g_163,&l_789,&g_1074},{&l_790,&l_790,&l_790,&l_790},{(void*)0,&l_790,(void*)0,&g_1121},{&l_789,(void*)0,&g_1074,(void*)0},{&g_1121,&l_789,(void*)0,(void*)0},{&g_163,(void*)0,&l_790,&g_1121}},{{(void*)0,&l_790,&g_163,&l_790},{&g_1074,&l_790,&g_163,&g_1074},{&l_789,&g_163,&l_789,&l_790},{&g_1074,(void*)0,&l_789,&g_1121},{&g_1074,&g_1121,&g_1074,&g_1121},{(void*)0,&g_163,&l_789,(void*)0}},{{(void*)0,&g_1074,&g_163,&g_1074},{&g_1074,&l_790,&g_163,(void*)0},{&g_1121,(void*)0,(void*)0,&g_1074},{&g_1121,&g_163,&g_1074,&g_1121},{&g_1074,&l_790,&g_1121,&g_1121},{(void*)0,&l_789,(void*)0,&g_163}},{{&g_1121,&l_790,&g_163,(void*)0},{(void*)0,&g_163,&l_790,&g_163},{&g_1074,(void*)0,&g_1074,(void*)0},{&l_789,&l_789,(void*)0,&g_1074},{&l_790,&g_163,&l_789,&g_1074},{(void*)0,&g_163,&l_790,&g_1074}}};
                        short *l_1180 = &l_952;
                        int i, j, k;
                        if ((*g_591))
                            break;
                        ++l_1170;
                        if (p_25)
                            goto lbl_1198;
                        l_1181 = ((!l_1169) , (safe_add_func_int64_t_s_s((*g_163), (safe_add_func_int16_t_s_s((func_39(func_42(&l_1028, (g_1074 = &g_150[4]), (*p_24), &l_1044, &p_26), (g_161 = (safe_div_func_int16_t_s_s(((*l_1180) = l_1167), (*l_796))))) , p_25), 0x397EL)))));

                        ;
                        (*l_796) = ((((safe_lshift_func_uint8_t_u_s(p_26, (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_25 && ((p_26 ^ ((*l_790) ^= func_39(func_42(&l_1119, (g_163 = &g_164), (g_164 , (*p_24)), &l_1169, l_789), g_154))) != (*g_236))), 3L)), 5)))) <= 0x2ABEL) , (void*)0) != g_1194[2][8]);
                    }
                }
                (*l_796) &= l_1028;
                for (g_82 = 0; g_82 < 7; g_82 += 1)
                {
                    g_33[g_82] = 0x078440E9L;
                }
            }




            ;
            (*l_796) = ((((l_1034 , l_1199) != (((safe_lshift_func_int8_t_s_s(0xC1L, 1)) <= ((**g_1195) & (l_1029[0] != (p_26 , &g_161)))) , l_1199)) , ((*p_27) = ((safe_mul_func_uint16_t_u_u(l_1162, g_154)) < (*p_24)))) == (-1L));
        }
        else
        {
            int *l_1212 = &g_638;
            int l_1213 = 0xF94473F8L;
            long long *l_1260 = &l_1028;
            int l_1283 = (-1L);
            int l_1285[3][3][10] = {{{0xE10F092AL,(-1L),1L,1L,(-1L),0xE10F092AL,(-1L),(-1L),(-1L),0xE10F092AL},{1L,(-1L),0xC2C26836L,(-1L),1L,0xC2C26836L,0x18EA8B3DL,0x18EA8B3DL,0xC2C26836L,1L},{1L,(-1L),(-1L),1L,1L,0xE10F092AL,1L,0xE10F092AL,1L,1L}},{{0xE10F092AL,1L,0xE10F092AL,1L,1L,(-1L),(-1L),1L,1L,0xE10F092AL},{0x18EA8B3DL,0x18EA8B3DL,0xC2C26836L,1L,(-1L),0xC2C26836L,(-1L),1L,0xC2C26836L,0x18EA8B3DL},{(-1L),(-1L),0xE10F092AL,(-1L),1L,1L,(-1L),0xE10F092AL,(-1L),(-1L)}},{{0xE10F092AL,0x18EA8B3DL,(-1L),1L,0x18EA8B3DL,1L,(-1L),0x18EA8B3DL,0xE10F092AL,0xE10F092AL},{(-1L),1L,0xC2C26836L,0x18EA8B3DL,0x18EA8B3DL,0xC2C26836L,1L,(-1L),0xC2C26836L,(-1L)},{0x18EA8B3DL,(-1L),1L,0x18EA8B3DL,1L,(-1L),0x18EA8B3DL,1L,1L,(-1L)}}};
            unsigned l_1288[6];
            unsigned char l_1330 = 1UL;
            long long l_1337[6] = {0x02C56D881A1C0166LL,0x02C56D881A1C0166LL,0x02C56D881A1C0166LL,0x02C56D881A1C0166LL,0x02C56D881A1C0166LL,0x02C56D881A1C0166LL};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1288[i] = 0x1A9DFFA1L;
            (*l_796) ^= func_39(p_24, p_25);


            if (l_1213)
            {
                unsigned l_1225 = 5UL;
                int *l_1253[2][8][10] = {{{&g_497[0][1],(void*)0,(void*)0,&g_497[0][1],&g_84,&g_497[3][4],&g_1137,(void*)0,&g_79,&l_954},{&l_1034,&g_33[2],&g_497[2][1],(void*)0,&g_33[3],&l_954,(void*)0,&g_1137,&g_79,&l_951},{&l_931,&g_84,(void*)0,&g_497[0][1],(void*)0,&g_33[2],&g_84,&g_33[2],&l_931,&g_1137},{&l_931,&l_931,(void*)0,&g_33[2],&l_954,(void*)0,&l_954,&g_33[2],(void*)0,&l_931},{&g_84,&l_1034,&l_958[1][2][0],(void*)0,&g_497[0][1],(void*)0,&g_79,&g_79,&g_497[3][3],(void*)0},{&l_957,&l_1034,&g_84,&g_497[3][4],&l_951,(void*)0,(void*)0,(void*)0,&g_84,&l_1034},{&g_84,&l_931,(void*)0,(void*)0,&l_958[0][2][0],(void*)0,&l_931,&l_958[1][2][0],&l_931,&l_931},{&l_931,&l_954,&g_33[2],&g_497[3][3],&g_497[3][3],&g_33[2],&l_954,&l_931,&l_1034,&g_84}},{{&l_931,&g_1137,(void*)0,&g_84,&l_931,&l_954,&l_1034,&l_954,&l_954,&g_497[0][1]},{&g_79,&g_33[2],&g_33[2],&l_1034,&l_931,&l_954,&l_931,&g_497[2][1],&g_79,&g_79},{&g_1137,&g_33[2],&g_33[2],(void*)0,&l_931,&g_1137,(void*)0,&l_931,(void*)0,&g_1137},{&g_84,&g_1137,&l_954,&g_1137,&g_84,&g_1137,&g_79,&l_931,(void*)0,&l_931},{&l_931,&g_497[2][1],&g_84,&g_84,&l_957,&l_931,&g_79,&l_1034,&l_958[0][2][0],&l_931},{(void*)0,&g_84,&l_931,(void*)0,&g_84,(void*)0,&l_954,(void*)0,&l_1034,&g_1137},{&l_931,&g_84,&g_79,&l_951,&l_931,&g_84,&g_84,&l_931,&l_951,&g_79},{&g_33[2],&g_33[2],&g_84,&l_957,&l_931,&l_1034,&g_84,(void*)0,&g_84,&g_497[0][1]}}};
                long long *l_1261 = &l_1028;
                unsigned l_1293 = 0x8BF2650BL;
                char *l_1315 = &g_392;
                int i, j, k;
                for (g_846 = (-13); (g_846 == 4); g_846++)
                {
                    int l_1224 = (-1L);
                    int **l_1228 = &l_796;
                    int **l_1229 = &g_636;
                    int *l_1231 = &g_33[2];
                    unsigned long long *l_1233[10] = {&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096};
                    unsigned long long **l_1232 = &l_1233[8];
                    int i;
                    (*l_1229) = ((*l_1228) = ((((safe_mod_func_uint16_t_u_u((*g_236), (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_988, (l_1034 = (((safe_div_func_int16_t_s_s(p_25, l_1224)) & ((*p_24) = l_1213)) && l_1225)))), (((*l_1035) = 0xB6B7D780L) , ((*p_27) | (safe_sub_func_int64_t_s_s((g_484 & (-2L)), l_1213)))))))) != 0x8E44382550FB601ALL) , l_1225) , (void*)0));

                    ;
                    ;
                    (*g_591) = ((g_33[2] , l_1122) != (!0x5916AC00L));
                    if (l_1230[0][0][0])
                        break;
                    if (((*l_1231) |= (*g_591)))
                    {
                        unsigned long long **l_1234 = (void*)0;
                        (*l_1228) = p_24;

                        ;
                    }
                    else
                    {
                        return (*p_24);
                    }

                    ;
                }


                ;
lbl_1252:
                for (l_785 = 0; (l_785 >= 58); l_785 = safe_add_func_uint8_t_u_u(l_785, 3))
                {
                    int *l_1243 = &l_1034;
                    (*l_1243) = (safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s((p_26 , (((((void*)0 == (*g_515)) | (safe_div_func_uint8_t_u_u(255UL, func_39(l_1243, l_1225)))) | p_26) ^ 253UL)), (*p_24))), l_1028));


                }
                for (g_161 = (-17); (g_161 == 38); g_161 = safe_add_func_uint32_t_u_u(g_161, 1))
                {
                    short l_1248 = 0x4F63L;
                    volatile int *l_1250[8][10] = {{&g_77,(void*)0,(void*)0,&g_78,&g_82,&g_77,&g_82,&g_82,&g_77,&g_83},{&g_82,&g_82,&g_82,&g_82,&g_83,&g_82,&g_82,&g_82,(void*)0,&g_77},{&g_78,&g_77,&g_83,&g_77,&g_83,&g_82,&g_77,&g_82,&g_78,(void*)0},{&g_82,&g_77,&g_78,&g_77,&g_77,&g_83,&g_83,&g_78,(void*)0,&g_82},{&g_83,&g_82,&g_83,&g_82,&g_82,&g_82,&g_82,&g_83,&g_82,&g_83},{&g_83,&g_83,&g_82,&g_82,(void*)0,&g_78,&g_82,&g_78,&g_77,&g_83},{&g_77,&g_77,&g_78,&g_83,(void*)0,&g_82,&g_83,&g_77,&g_83,&g_83},{(void*)0,&g_82,(void*)0,&g_78,&g_82,&g_83,&g_82,&g_78,(void*)0,&g_82}};
                    volatile int **l_1249[9][7] = {{&l_1250[0][0],&l_1250[0][9],&l_1250[5][5],&l_1250[2][3],&l_1250[5][5],&l_1250[7][3],&l_1250[0][0]},{&l_1250[0][0],(void*)0,&l_1250[5][5],&l_1250[2][3],&l_1250[5][5],(void*)0,&l_1250[0][0]},{&l_1250[1][6],&l_1250[0][9],&l_1250[5][5],&l_1250[6][7],&l_1250[5][5],(void*)0,&l_1250[1][6]},{&l_1250[0][0],&l_1250[0][9],&l_1250[5][5],&l_1250[2][3],&l_1250[5][5],&l_1250[7][3],&l_1250[7][6]},{&l_1250[7][6],(void*)0,&l_1250[7][3],&l_1250[5][5],&l_1250[7][3],(void*)0,&l_1250[7][6]},{&l_1250[6][1],&l_1250[6][7],&l_1250[7][3],&l_1250[5][5],(void*)0,(void*)0,&l_1250[6][1]},{&l_1250[7][6],&l_1250[6][7],&l_1250[0][9],&l_1250[5][5],(void*)0,&l_1250[2][3],&l_1250[7][6]},{&l_1250[7][6],(void*)0,&l_1250[7][3],&l_1250[5][5],&l_1250[7][3],(void*)0,&l_1250[7][6]},{&l_1250[6][1],&l_1250[6][7],&l_1250[7][3],&l_1250[5][5],(void*)0,(void*)0,&l_1250[6][1]}};
                    int *l_1262 = &l_845;
                    int i, j;
                    l_1251 = (((*p_27) = (safe_rshift_func_int16_t_s_u((0x98L | g_777), l_1248))) , &g_78);

                    ;
                    for (l_951 = 2; (l_951 >= 0); l_951 -= 1)
                    {
                        int **l_1254 = &l_868;
                        if (g_484)
                            goto lbl_1252;
                        l_1213 |= (0x57532265589A85A7LL && 0x7B567D4C5DF28DD8LL);
                        (*l_1254) = l_1253[1][4][3];
                    }
                    for (g_237 = (-23); (g_237 != 12); g_237 = safe_add_func_uint32_t_u_u(g_237, 9))
                    {
                        l_1213 = (safe_mul_func_uint8_t_u_u(l_1259, 252UL));
                        if (l_1213)
                            continue;
                        return (*p_24);
                    }
                    g_636 = func_42(((l_1253[0][6][5] != (l_1262 = func_42(l_1260, l_1261, ((((l_1230[0][0][0] | g_304) > (*g_983)) <= l_1248) & (*g_983)), &g_79, &l_1028))) , (void*)0), &g_164, (*p_24), &g_33[2], &g_150[4]);

                    ;
                    ;
                }
                if ((safe_rshift_func_int16_t_s_u((*l_1251), (safe_lshift_func_uint8_t_u_s(((((*g_591) = p_25) > 0x527E9BCBL) < p_26), p_26)))))
                {
                    unsigned *l_1271 = &l_1122;
                    int l_1272 = 0xC0A91DDAL;
                    if (((safe_add_func_uint16_t_u_u((*g_236), (*g_236))) || 0x70L))
                    {
                        int **l_1275 = &g_591;
                        (*l_1275) = &g_497[3][4];

                        ;
                    }
                    else
                    {
                        short l_1276[7][9][4] = {{{0x60F8L,0x33B0L,0xD154L,0x798EL},{1L,(-4L),0x25F2L,0x33B0L},{1L,0xAB59L,0x25F2L,(-1L)},{1L,1L,0xD154L,0xE3ECL},{0x60F8L,(-1L),(-4L),(-2L)},{(-4L),(-2L),(-8L),0x26AFL},{0L,1L,1L,0xE053L},{0xE215L,(-4L),0xF77CL,0L},{(-4L),(-2L),0xFFE0L,1L}},{{0xF21AL,0x60F8L,0xCCC7L,0xE3ECL},{0x9C67L,0x949AL,1L,0L},{0xFB98L,0xAB59L,(-4L),0xCD7AL},{0xE3ECL,0L,0x23B9L,0x798EL},{0x9C67L,0xCD7AL,0xCD7AL,0x9C67L},{(-6L),0L,0xFFE0L,0x25F2L},{0L,0xE3ECL,0x61D1L,0L},{1L,(-1L),(-8L),0L},{0x6060L,0xE3ECL,0xFFE0L,0xF77CL}},{{1L,0xE8A5L,0x43FBL,0xAB59L},{0xE053L,1L,0x26AFL,0xE3ECL},{(-1L),1L,0xF77CL,1L},{0xF21AL,1L,(-4L),0x60F8L},{0L,0xCD7AL,0x26AFL,0L},{(-8L),0xE053L,(-4L),(-6L)},{1L,0xF21AL,0x3166L,0xE8A5L},{0xE8A5L,(-4L),(-8L),0x9C67L},{(-4L),0L,0x0173L,0x6060L}},{{0L,0xF21AL,0x23B9L,0xF21AL},{0xF07CL,(-8L),1L,0L},{1L,0x33B0L,0x949AL,(-1L)},{0L,1L,0x91B2L,0x798EL},{0L,(-4L),0x949AL,0xE3ECL},{1L,0x798EL,1L,1L},{0xF07CL,0xE8A5L,0x23B9L,0x9D70L},{0L,0xFB98L,0x0173L,0L},{(-4L),0x60F8L,(-8L),(-1L)}},{{0xE8A5L,0xE3ECL,0x3166L,0x9D70L},{1L,0x6060L,(-4L),0xAB59L},{(-8L),0x798EL,0x26AFL,1L},{0x25F2L,(-6L),0xE3ECL,(-1L)},{0xCD7AL,0x43FBL,0xD154L,0xF77CL},{0x1F52L,(-1L),0x3166L,0x3166L},{0x0173L,0x0173L,0xF21AL,0xCD7AL},{(-6L),0xCCC7L,1L,1L},{0x23B9L,1L,0x61D1L,1L}},{{0x6060L,1L,0L,1L},{1L,0xCCC7L,0x91B2L,0xCD7AL},{0xE21CL,0x0173L,1L,0x3166L},{(-4L),(-1L),1L,0xF77CL},{0xFFE0L,0x43FBL,(-1L),(-1L)},{0x3166L,(-6L),0x43FBL,1L},{(-4L),(-1L),0x60F8L,(-4L)},{1L,0x23B9L,0x91B2L,0xFB98L},{(-1L),(-8L),0L,0x1F52L}},{{0x6060L,0xF77CL,0xE215L,0x25F2L},{1L,1L,1L,0xFB98L},{(-2L),1L,(-2L),0x91B2L},{0x0173L,(-1L),0x9C67L,(-8L)},{0x25F2L,(-2L),0xD154L,(-1L)},{0xCCC7L,(-4L),0xD154L,(-4L)},{0x25F2L,(-1L),0x9C67L,0xFFE0L},{0x0173L,0x61D1L,(-2L),0xCD7AL},{(-2L),0xCD7AL,0x91B2L,0xEBCFL}}};
                        int i, j, k;
                        (*g_591) = (func_39(&l_1213, ((p_24 != ((*p_27) , (void*)0)) , (g_90 = l_1276[5][0][1]))) || ((*g_1121) = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((*g_236), 0x2B6BL)), 6))));


                        (*g_591) ^= (*l_1251);
                        (*g_591) &= p_25;
                    }

                    ;
                }
                else
                {
                    short l_1281 = 0x91E4L;
                    int l_1286 = 0L;
                    int l_1291 = 9L;
                    int l_1292 = 1L;
                    int **l_1318 = &g_591;
                    l_1288[3]++;
                    --l_1293;
                    l_957 &= (safe_div_func_int8_t_s_s(((((*p_27) = ((safe_mul_func_uint8_t_u_u(3UL, 0UL)) < ((safe_add_func_int64_t_s_s((g_1302 < (((safe_mod_func_int8_t_s_s(p_25, ((g_588[2][0] < ((safe_div_func_uint16_t_u_u(((*g_591) < (l_1213 && l_1291)), (safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_25 , 0xB5L), g_161)), p_25)) , 0xC0L), 1)))) < p_26)) | p_26))) == 255UL) , (-10L))), 0x1B311641D495626ALL)) && 0xBEA7L))) <= p_26) | p_25), 0xBEL));
                    (*l_1318) = &l_957;

                    ;
                }

                ;
            }
            else
            {
                int *l_1319[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1319[i] = (void*)0;
                l_1322[3]--;
            }

            ;

            ;
            ;
            ;
            if ((g_77 <= p_25))
            {
                int **l_1325[4];
                short *l_1345 = &g_484;
                int i;
                for (i = 0; i < 4; i++)
                    l_1325[i] = &g_636;
                g_378 = p_24;

                ;
                if ((g_33[4] < func_39(p_24, (safe_rshift_func_int8_t_s_u((0L ^ (g_588[1][2] = ((*g_236) = (p_25 & ((&g_154 != ((*g_236) , func_42(&g_150[3], &l_1028, (*p_24), &l_931, l_790))) > g_1197[1][0][0]))))), p_25)))))
                {
                    char *l_1333 = &l_1321;
                    char **l_1334 = &l_803;
                    (*g_378) &= (((safe_lshift_func_uint8_t_u_s(l_1330, l_1122)) , (safe_mod_func_int32_t_s_s((!(+(l_1333 == ((*l_1334) = &g_392)))), (*g_591)))) != 0x35L);

                    ;
                }
                else
                {
                    int l_1335 = (-7L);
                    int l_1336[8] = {(-7L),0L,(-7L),0L,(-7L),0L,(-7L),0L};
                    int i;
                    --g_1338;
                }


                ;
                (*l_1251) = ((0x46A1079FEAA9BC79LL && (safe_lshift_func_uint8_t_u_s((0x5B4FL > (((*l_1345) &= 0xBC1BL) > g_392)), 3))) == (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_25, l_1288[3])), 4)));
                for (g_90 = (-13); (g_90 >= 40); g_90++)
                {
                    if (p_25)
                        break;
                }
            }
            else
            {
                int **l_1352[6] = {&g_636,&l_796,&g_636,&g_636,&l_796,&g_636};
                int i;
                g_591 = &g_79;

                ;
                l_1282 = (!0xC8079141L);
            }


            ;
            return l_1287[3][0][0];


        }


        ;

        ;
        ;

        ;
    }


    ;




    ;
    (*g_591) = (*l_1251);
    (*l_1251) = ((*g_591) = p_25);
    for (l_1259 = (-29); (l_1259 <= 17); l_1259 = safe_add_func_uint64_t_u_u(l_1259, 3))
    {
        int *l_1355 = &g_988;
        int *l_1356 = &g_79;
        int *l_1357 = &l_958[1][1][0];
        int *l_1358[4];
        unsigned l_1359 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1358[i] = &g_1137;
        ++l_1359;
        for (g_640 = 19; (g_640 < (-22)); g_640--)
        {
            unsigned short l_1364 = 0UL;
            l_1364--;
            for (g_149 = 0; (g_149 >= (-19)); g_149 = safe_sub_func_uint16_t_u_u(g_149, 3))
            {
                return (*l_1251);


            }
        }
    }
    return p_26;


}







static unsigned * func_28(unsigned * p_29)
{
    int l_30 = 0xF5AC3D6CL;
    int *l_31 = (void*)0;
    int *l_32 = &g_33[2];
    int *l_34[4];
    long long l_35 = 0xE3D97867A7BF748BLL;
    int l_48 = 0x997EC53AL;
    char l_49 = 0xDEL;
    unsigned *l_72 = &g_61;
    unsigned l_485 = 0xC9FAC771L;
    long long *l_772 = &g_164;
    long long l_773[3][1];
    unsigned *l_782 = &g_61;
    int i, j;
    for (i = 0; i < 4; i++)
        l_34[i] = &g_33[6];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_773[i][j] = 7L;
    }
    --g_36;
    if (func_39(func_42(((l_48 | l_49) , (l_772 = func_50(func_55(g_60[5][1], p_29, func_62((0xCA8BL <= (0xBA5493A5L | func_68(l_72, &g_33[2], &l_35))), g_163, (*g_163), g_164, g_164), l_34[0]), l_485, &l_35, g_334[0]))), &l_35, l_773[1][0], l_72, &l_773[1][0]), g_334[2]))
    {
        return l_32;


    }
    else
    {
        return l_782;


    }
}







static int func_39(int * p_40, unsigned char p_41)
{
    int *l_774[10] = {&g_33[2],&g_33[2],&g_79,&g_33[2],&g_79,&g_33[2],&g_33[2],&g_79,&g_33[2],&g_79};
    int l_775 = 0xC1F61408L;
    long long l_776[3][10][8] = {{{1L,0x12C01416C448E3C5LL,(-6L),0x8C9F5C4282E105F8LL,0x2F0A542B4A5BF343LL,(-1L),0x6977E19FBF3DC22ALL,0L},{1L,1L,(-6L),(-5L),8L,0x273A673F03C80ABFLL,8L,(-5L)},{0x2F0A542B4A5BF343LL,0x38B5E5EAE732C278LL,0x2F0A542B4A5BF343LL,0L,0x28B7EE4F64CB7160LL,0x273A673F03C80ABFLL,(-6L),(-1L)},{(-6L),1L,1L,0xBD168EE6ADCFB47ELL,0x494B5CD428150925LL,(-1L),0x28B7EE4F64CB7160LL,(-1L)},{(-6L),0x12C01416C448E3C5LL,1L,1L,0x28B7EE4F64CB7160LL,1L,1L,0x12C01416C448E3C5LL},{0x2F0A542B4A5BF343LL,0L,0xAB9BAD3A7BA8BBB2LL,1L,8L,0L,0x53262E574F8535D0LL,(-1L)},{1L,(-1L),8L,0xBD168EE6ADCFB47ELL,0x2F0A542B4A5BF343LL,0x12C01416C448E3C5LL,0x53262E574F8535D0LL,(-1L)},{1L,0xBD168EE6ADCFB47ELL,0xAB9BAD3A7BA8BBB2LL,0L,0xAB9BAD3A7BA8BBB2LL,0xBD168EE6ADCFB47ELL,1L,(-5L)},{0xAB9BAD3A7BA8BBB2LL,0xBD168EE6ADCFB47ELL,1L,(-5L),0x6977E19FBF3DC22ALL,0x12C01416C448E3C5LL,1L,(-1L)},{0x494B5CD428150925LL,1L,0x2F0A542B4A5BF343LL,0x273A673F03C80ABFLL,0L,0xBD168EE6ADCFB47ELL,0x6977E19FBF3DC22ALL,0xBD168EE6ADCFB47ELL}},{{0x28B7EE4F64CB7160LL,(-1L),0xAB9BAD3A7BA8BBB2LL,(-1L),0x28B7EE4F64CB7160LL,(-1L),0x494B5CD428150925LL,0xBD168EE6ADCFB47ELL},{8L,0x38B5E5EAE732C278LL,0x6977E19FBF3DC22ALL,0x273A673F03C80ABFLL,0xAB9BAD3A7BA8BBB2LL,0x12C01416C448E3C5LL,0L,(-1L)},{0x2F0A542B4A5BF343LL,(-1L),0x6977E19FBF3DC22ALL,0L,0x494B5CD428150925LL,(-5L),0x494B5CD428150925LL,0L},{0xAB9BAD3A7BA8BBB2LL,0L,0xAB9BAD3A7BA8BBB2LL,0xBD168EE6ADCFB47ELL,1L,(-5L),0x6977E19FBF3DC22ALL,0x12C01416C448E3C5LL},{0x6977E19FBF3DC22ALL,(-1L),0x2F0A542B4A5BF343LL,0x8C9F5C4282E105F8LL,(-6L),0x12C01416C448E3C5LL,1L,1L},{0x6977E19FBF3DC22ALL,0x38B5E5EAE732C278LL,8L,(-1L),1L,(-1L),8L,0x38B5E5EAE732C278LL},{0xAB9BAD3A7BA8BBB2LL,(-1L),0x28B7EE4F64CB7160LL,(-1L),0x494B5CD428150925LL,0xBD168EE6ADCFB47ELL,1L,1L},{0x2F0A542B4A5BF343LL,1L,0x494B5CD428150925LL,0x8C9F5C4282E105F8LL,0xAB9BAD3A7BA8BBB2LL,0x38B5E5EAE732C278LL,1L,0x12C01416C448E3C5LL},{8L,0x8C9F5C4282E105F8LL,0x28B7EE4F64CB7160LL,0xBD168EE6ADCFB47ELL,0x28B7EE4F64CB7160LL,0x8C9F5C4282E105F8LL,8L,0L},{0x28B7EE4F64CB7160LL,0x8C9F5C4282E105F8LL,8L,0L,0L,0x38B5E5EAE732C278LL,1L,(-1L)}},{{0x494B5CD428150925LL,1L,0x2F0A542B4A5BF343LL,0x273A673F03C80ABFLL,0L,0L,0x2F0A542B4A5BF343LL,0L},{(-6L),0x38B5E5EAE732C278LL,0x494B5CD428150925LL,0x38B5E5EAE732C278LL,(-6L),0xBD168EE6ADCFB47ELL,0x53262E574F8535D0LL,0L},{0L,0x273A673F03C80ABFLL,0x2F0A542B4A5BF343LL,1L,0x494B5CD428150925LL,0x8C9F5C4282E105F8LL,0xAB9BAD3A7BA8BBB2LL,0x38B5E5EAE732C278LL},{8L,0xBD168EE6ADCFB47ELL,0x2F0A542B4A5BF343LL,0x12C01416C448E3C5LL,0x53262E574F8535D0LL,(-1L),0x53262E574F8535D0LL,0x12C01416C448E3C5LL},{0x494B5CD428150925LL,(-5L),0x494B5CD428150925LL,0L,0x6977E19FBF3DC22ALL,(-1L),0x2F0A542B4A5BF343LL,0x8C9F5C4282E105F8LL},{0x2F0A542B4A5BF343LL,0xBD168EE6ADCFB47ELL,8L,(-1L),1L,0x8C9F5C4282E105F8LL,0x6977E19FBF3DC22ALL,0L},{0x2F0A542B4A5BF343LL,0x273A673F03C80ABFLL,0L,0xBD168EE6ADCFB47ELL,0x6977E19FBF3DC22ALL,0xBD168EE6ADCFB47ELL,0L,0x273A673F03C80ABFLL},{0x494B5CD428150925LL,0x38B5E5EAE732C278LL,(-6L),0xBD168EE6ADCFB47ELL,0x53262E574F8535D0LL,0L,1L,0L},{8L,0L,0x53262E574F8535D0LL,(-1L),0x494B5CD428150925LL,0x273A673F03C80ABFLL,1L,0x8C9F5C4282E105F8LL},{0L,(-1L),(-6L),0L,(-6L),(-1L),0L,0x12C01416C448E3C5LL}}};
    int **l_780 = &l_774[8];
    int l_781[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_781[i] = (-1L);
    g_777--;
    g_636 = ((*l_780) = &l_775);

    ;

    return l_781[0];


}







static int * func_42(long long * p_43, long long * p_44, unsigned p_45, int * p_46, long long * p_47)
{
    return &g_497[3][4];


}







static long long * func_50(unsigned * p_51, long long p_52, long long * p_53, int p_54)
{
    unsigned **l_489 = &g_60[5][1];
    int *l_495 = &g_33[2];
    unsigned char l_503 = 0UL;
    int l_521[2];
    long long l_529[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int i;
    for (i = 0; i < 2; i++)
        l_521[i] = 0x8248ECBAL;
    for (p_52 = 0; (p_52 <= 2); ++p_52)
    {
        int **l_488 = &g_378;
        (*l_488) = (void*)0;

        ;
    }
    for (g_164 = 0; (g_164 <= 9); g_164 += 1)
    {
        unsigned l_507[9][6] = {{0x4EB2ADA4L,4294967295UL,0x5346B592L,4294967292UL,4294967292UL,0x5346B592L},{0x50AB19E4L,0x50AB19E4L,1UL,4294967292UL,4294967287UL,0xD6C06943L},{2UL,0UL,0x4EB2ADA4L,0x1E0427C1L,4294967292UL,2UL},{0xDFA885A2L,2UL,0x4EB2ADA4L,0x50AB19E4L,4294967287UL,0xD6C06943L},{4294967289UL,0x50AB19E4L,2UL,0x88879EA8L,4294967288UL,0x88879EA8L},{0x88879EA8L,4294967288UL,0x88879EA8L,2UL,0x50AB19E4L,4294967289UL},{0xD6C06943L,4294967287UL,0x50AB19E4L,0x4EB2ADA4L,2UL,0xDFA885A2L},{2UL,4294967292UL,0x1E0427C1L,0x4EB2ADA4L,0UL,2UL},{0xD6C06943L,1UL,0x5346B592L,2UL,4294967287UL,4294967287UL}};
        unsigned l_516[9][5] = {{18446744073709551615UL,18446744073709551612UL,0xD0AF045AL,18446744073709551609UL,18446744073709551609UL},{0x2680E70EL,9UL,0x2680E70EL,0xEEE7F7BDL,9UL},{18446744073709551609UL,4UL,0UL,18446744073709551609UL,0UL},{18446744073709551615UL,18446744073709551615UL,0xF990B08BL,9UL,0x90CB9859L},{0xED53F31AL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{0x90CB9859L,18446744073709551615UL,0x2680E70EL,0x90CB9859L,0xEEE7F7BDL},{18446744073709551612UL,18446744073709551615UL,0xD0AF045AL,18446744073709551615UL,18446744073709551612UL},{0x2680E70EL,18446744073709551615UL,18446744073709551615UL,0xEEE7F7BDL,18446744073709551615UL},{18446744073709551612UL,4UL,4UL,18446744073709551612UL,0UL}};
        int l_527 = 0x52832849L;
        int l_530 = 0x3610A4E4L;
        int l_531[6][4][6] = {{{0L,1L,1L,0L,1L,0L},{0L,1L,1L,4L,4L,1L},{0L,0L,4L,0x54C4FB27L,4L,0L},{4L,1L,0x54C4FB27L,0x54C4FB27L,1L,4L}},{{0L,4L,0x54C4FB27L,4L,0L,0L},{1L,4L,4L,1L,1L,1L},{1L,1L,1L,4L,4L,1L},{0L,0L,4L,0x54C4FB27L,4L,0L}},{{4L,1L,0x54C4FB27L,0x54C4FB27L,1L,4L},{0L,4L,0x54C4FB27L,4L,0L,0L},{1L,4L,4L,1L,1L,1L},{1L,1L,1L,4L,4L,1L}},{{0L,0L,4L,0x54C4FB27L,4L,0L},{4L,1L,0x54C4FB27L,0x54C4FB27L,1L,4L},{0L,4L,0x54C4FB27L,4L,0L,0L},{1L,4L,4L,1L,1L,1L}},{{1L,1L,1L,4L,4L,1L},{0L,1L,0L,1L,0L,1L},{0L,0x54C4FB27L,1L,1L,0x54C4FB27L,0L},{1L,0L,1L,0L,1L,1L}},{{4L,0L,0L,4L,0x54C4FB27L,4L},{4L,0x54C4FB27L,4L,0L,0L,4L},{1L,1L,0L,1L,0L,1L},{0L,0x54C4FB27L,1L,1L,0x54C4FB27L,0L}}};
        unsigned long long l_534 = 0x50D89CF8096CDF6CLL;
        unsigned short l_586 = 0x32A5L;
        unsigned ***l_615 = &l_489;
        long long *l_625[6];
        unsigned l_687[5][5] = {{0xD1B1E812L,0xD1B1E812L,0UL,0xD1B1E812L,0xD1B1E812L},{0x15CF8F83L,1UL,0x15CF8F83L,0x15CF8F83L,1UL},{0xD1B1E812L,8UL,8UL,0xD1B1E812L,8UL},{1UL,1UL,0x97FD8CF9L,1UL,1UL},{8UL,0xD1B1E812L,8UL,8UL,0xD1B1E812L}};
        unsigned *l_696 = &g_61;
        unsigned l_752[2][6][7] = {{{4294967288UL,4294967288UL,4294967295UL,4294967295UL,4294967294UL,0UL,6UL},{4294967295UL,0xD5903C8EL,4294967295UL,4294967290UL,0UL,0xD5903C8EL,0UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967294UL,4294967295UL,1UL},{0x260D200BL,4294967295UL,0x23483287L,4294967295UL,0x260D200BL,0xD5903C8EL,0x23483287L},{0UL,4294967288UL,6UL,6UL,4294967288UL,0UL,1UL},{0UL,4294967290UL,4294967295UL,0xD5903C8EL,4294967295UL,4294967290UL,0UL}},{{0UL,6UL,1UL,4294967295UL,4294967295UL,1UL,6UL},{0x260D200BL,4294967290UL,4UL,1UL,0x260D200BL,1UL,4UL},{4294967295UL,4294967288UL,1UL,4294967295UL,0UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0UL,4294967295UL,0UL},{4294967288UL,4294967295UL,6UL,4294967295UL,0UL,4294967295UL,4294967295UL},{0x260D200BL,0xD5903C8EL,0x23483287L,0xD5903C8EL,0x260D200BL,4294967295UL,0x23483287L}}};
        unsigned long long *l_761[5][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        unsigned long long **l_760 = &l_761[1][3][0];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_625[i] = (void*)0;
    }
    return &g_150[4];


}







static unsigned * func_55(unsigned * p_56, int * p_57, int * p_58, unsigned * p_59)
{
    unsigned short l_477 = 0x0B24L;
    int *l_479 = &g_33[6];
    long long *l_480 = &g_150[4];
    if (l_477)
    {
        unsigned long long l_478 = 1UL;
        (*l_479) = (l_478 >= func_68(p_58, l_479, l_480));
    }
    else
    {
        unsigned short l_481 = 65529UL;
        (*p_58) ^= l_481;
        for (g_237 = (-26); (g_237 < 14); g_237 = safe_add_func_int16_t_s_s(g_237, 8))
        {
            return p_59;


        }
        (*p_58) |= g_484;
    }
    return p_59;


}







static int * func_62(short p_63, long long * p_64, long long p_65, unsigned p_66, int p_67)
{
    unsigned short l_176[9][9][3] = {{{0xFF0FL,0xC59DL,0UL},{8UL,65535UL,0x5FE3L},{65535UL,65527UL,0x8716L},{3UL,0x5A70L,1UL},{0UL,0UL,0x97B8L},{0x3A43L,0xB9FBL,65534UL},{65535UL,0x97B8L,0x683EL},{1UL,65535UL,0x46A8L},{65535UL,0UL,0xE073L}},{{0x1501L,0x2D74L,0x9E64L},{0x67B0L,0x8716L,0UL},{3UL,1UL,3UL},{0xFF0FL,1UL,65527UL},{0x9E64L,0x2D74L,0x1501L},{0x2FA1L,0xCACFL,0x683EL},{0x46A8L,65535UL,1UL},{0x2FA1L,0xFF0FL,0xCACFL},{0x9E64L,0x69FFL,7UL}},{{0xFF0FL,0x5131L,0x5131L},{3UL,6UL,8UL},{0x67B0L,0xC59DL,0xCACFL},{0x1501L,0x5F2DL,65535UL},{65535UL,65535UL,0x683EL},{1UL,0x5F2DL,0x6D9DL},{0UL,0xC59DL,65527UL},{7UL,6UL,0x3A43L},{0x0841L,0x5131L,0UL}},{{8UL,0x69FFL,0xAFECL},{0UL,0xFF0FL,0xE073L},{65535UL,65535UL,0x34F0L},{65535UL,0xCACFL,0xE073L},{0x6D9DL,0x2D74L,0xAFECL},{0x67B0L,1UL,0UL},{0x3A43L,1UL,0x3A43L},{0xFF0FL,0x8716L,65527UL},{0xAFECL,0x2D74L,0x6D9DL}},{{0x2FA1L,0UL,0x683EL},{0x34F0L,65535UL,65535UL},{0x2FA1L,0UL,0UL},{65526UL,6UL,2UL},{0UL,0xC314L,65535UL},{0x34F0L,0x2D74L,0x5FE3L},{0xFF0FL,0x683EL,0UL},{1UL,0xB9FBL,0xAFECL},{0x0841L,0x2FA1L,0x5131L}},{{0x9E64L,0xB9FBL,65535UL},{0xC59DL,0x683EL,0UL},{2UL,0x2D74L,0x46A8L},{0xC314L,0xC314L,0xCACFL},{0x5FE3L,6UL,0x8BABL},{0xC59DL,0xCACFL,0x8716L},{0xAFECL,1UL,65528UL},{0x0841L,0xC59DL,0x8716L},{65535UL,0x6DA8L,0x8BABL}},{{0xFF0FL,0x97B8L,0xCACFL},{0x46A8L,4UL,0x46A8L},{0UL,0x484FL,0UL},{0x8BABL,0x6DA8L,65535UL},{1UL,0UL,0x5131L},{65528UL,1UL,0xAFECL},{1UL,0UL,0UL},{0x8BABL,6UL,0x5FE3L},{0UL,65535UL,65535UL}},{{0x46A8L,0x2D74L,2UL},{0xFF0FL,65535UL,0UL},{65535UL,0xB9FBL,0x9E64L},{0x0841L,0xE073L,0x5131L},{0xAFECL,0xB9FBL,1UL},{0xC59DL,65535UL,0UL},{0x5FE3L,0x2D74L,0x34F0L},{0xC314L,0x97B8L,0x5131L},{0x6D9DL,65535UL,65528UL}},{{0xC314L,0x0841L,65527UL},{0x34F0L,0xB9FBL,8UL},{1UL,65535UL,65527UL},{3UL,4UL,65528UL},{65535UL,0xFF0FL,0x5131L},{0x5FE3L,0x5A70L,0x5FE3L},{0x0841L,0UL,0x683EL},{65528UL,4UL,3UL},{0x67B0L,0xC314L,0x8716L}}};
    long long *l_179 = &g_150[2];
    unsigned *l_216 = &g_61;
    unsigned l_234 = 5UL;
    int l_298 = 5L;
    int l_303 = 1L;
    int l_308 = 0x7E3472C8L;
    int l_310 = 6L;
    unsigned long long *l_370 = (void*)0;
    unsigned long long **l_369 = &l_370;
    unsigned short l_401 = 65534UL;
    unsigned l_408 = 18446744073709551615UL;
    int *l_467[10][8] = {{&g_33[6],&l_298,&g_33[2],&g_79,&l_308,&l_310,&l_310,&l_310},{&l_298,&g_79,&l_298,&l_298,&g_79,&l_298,&l_310,&g_79},{(void*)0,&l_298,&g_33[5],&l_308,&l_298,&l_310,(void*)0,&g_84},{&g_79,&l_308,&g_33[2],&l_308,&l_310,&g_33[2],&g_33[6],&g_79},{&g_84,&l_310,&l_298,&l_298,(void*)0,&l_298,&l_298,&l_310},{&l_298,&l_310,&g_84,&g_79,&l_298,&g_33[5],&g_79,&l_298},{&l_308,(void*)0,&l_310,&g_33[6],&l_298,&g_33[2],&g_79,&l_308},{&l_298,&g_33[6],&g_84,&g_33[5],&l_310,&l_298,&l_298,&l_310},{(void*)0,&g_79,&g_79,(void*)0,&l_298,&g_33[5],&l_308,&l_298},{&l_310,&l_308,&l_298,&l_310,&l_308,&g_33[2],&g_79,&l_298}};
    int *l_472 = &g_84;
    char l_473 = (-1L);
    unsigned l_474 = 0x074CCCD6L;
    int i, j, k;
    for (g_90 = (-19); (g_90 <= 32); g_90++)
    {
        unsigned char l_170 = 0x74L;
        int l_173 = (-5L);
        int l_174 = 0xD081FCDCL;
        unsigned short *l_184 = &l_176[6][6][1];
        unsigned *l_218 = &g_61;
        int l_222 = 0xEC6C1B36L;
        int l_223 = 0x51DCF8AAL;
        int l_224 = 0x76463CA2L;
        unsigned long long l_251 = 0x9881EC2600E6A570LL;
        int l_305 = 5L;
        int l_306 = 1L;
        int l_307 = 0xAAE5C66EL;
        int l_309 = (-1L);
        int l_311 = 1L;
        char l_407 = 1L;
        char l_425 = (-1L);
        unsigned long long **l_468 = &l_370;
        for (g_149 = (-21); (g_149 != (-5)); ++g_149)
        {
            int *l_169[6] = {&g_84,&g_79,&g_84,&g_84,&g_79,&g_84};
            int i;
            l_170--;
            for (l_170 = 0; (l_170 <= 5); l_170 += 1)
            {
                int l_175 = 0xEC739D5CL;
                int i;
                ++l_176[6][6][1];
            }
        }
        if (((l_179 != (g_150[0] , &p_65)) < (((safe_mul_func_int8_t_s_s(g_150[4], (safe_mul_func_uint16_t_u_u(((*l_184) = g_33[2]), (safe_unary_minus_func_int64_t_s(((void*)0 != &g_61))))))) ^ ((safe_mul_func_uint8_t_u_u(p_65, (safe_mul_func_int16_t_s_s((l_173 , p_65), g_36)))) != l_174)) == (*g_163))))
        {
            unsigned long long l_225 = 0x65C1140D0F7886D3LL;
            int l_238[6][6] = {{4L,0x7C5DDF7BL,0xA0AF4E1EL,0xF1462849L,0x7C5DDF7BL,0xF1462849L},{4L,0x4DC24D1BL,4L,0xF1462849L,0x4DC24D1BL,0xA0AF4E1EL},{4L,0x01473823L,0xF1462849L,0xF1462849L,0x01473823L,4L},{4L,0x7C5DDF7BL,0xA0AF4E1EL,0xF1462849L,0x7C5DDF7BL,0xF1462849L},{4L,0x4DC24D1BL,4L,0xF1462849L,0x4DC24D1BL,0xA0AF4E1EL},{4L,0x01473823L,0xF1462849L,0xF1462849L,0x01473823L,4L}};
            short *l_349[4][6][10] = {{{&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0},{&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149,&g_149,(void*)0,&g_149,&g_149},{&g_149,&g_149,(void*)0,(void*)0,&g_149,(void*)0,&g_149,&g_149,&g_149,(void*)0},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149,&g_149}},{{&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149},{&g_149,&g_149,(void*)0,&g_149,&g_149,(void*)0,(void*)0,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,(void*)0,(void*)0,&g_149,&g_149,(void*)0,&g_149},{&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149}},{{&g_149,&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0,&g_149,&g_149,(void*)0,&g_149},{(void*)0,&g_149,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,&g_149}},{{(void*)0,&g_149,(void*)0,&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{&g_149,(void*)0,&g_149,&g_149,(void*)0,(void*)0,&g_149,(void*)0,&g_149,&g_149},{(void*)0,&g_149,(void*)0,&g_149,&g_149,(void*)0,&g_149,&g_149,(void*)0,&g_149},{&g_149,&g_149,(void*)0,(void*)0,&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0},{&g_149,(void*)0,&g_149,&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149,&g_149}}};
            unsigned *l_352 = &g_61;
            int *l_354 = &l_223;
            int **l_353 = &l_354;
            int i, j, k;
            for (l_173 = 5; (l_173 != (-9)); l_173 = safe_sub_func_int8_t_s_s(l_173, 4))
            {
                long long l_194 = 0L;
                unsigned **l_217 = &l_216;
                int l_292 = 0x17BC99ACL;
                int l_294[6] = {0xB0CE8A82L,(-1L),0xB0CE8A82L,0xB0CE8A82L,(-1L),0xB0CE8A82L};
                int l_299 = 0x26C8E93BL;
                unsigned long long *l_315 = (void*)0;
                unsigned long long *l_317 = (void*)0;
                int i;
                for (p_63 = 9; (p_63 == (-25)); p_63 = safe_sub_func_int16_t_s_s(p_63, 1))
                {
                    for (g_36 = 0; (g_36 <= 2); g_36 += 1)
                    {
                        int *l_195 = &g_79;
                        int i, j, k;
                        (*l_195) = (l_176[(g_36 + 6)][(g_36 + 6)][g_36] ^ (l_174 = l_194));
                        if (p_65)
                            break;
                        if (g_164)
                            break;
                    }
                }
                if (((g_79 | ((*l_179) = ((*g_163) = (safe_sub_func_uint8_t_u_u(g_79, g_83))))) , ((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((*p_64), ((*l_179) = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_173, (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(l_194, 0x3DL)) | (~(((*l_217) = l_216) == l_218))), l_176[2][3][0])) | 0x4D8FE965L), l_170)), 0L)))), p_67))))), 0UL)), g_161)) , (-4L))))
                {
                    int l_219[6] = {0L,0xA2915EF4L,0L,0L,0xA2915EF4L,0L};
                    int *l_220 = (void*)0;
                    int *l_221[5] = {&g_79,&g_79,&g_79,&g_79,&g_79};
                    char *l_235[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_235[i] = &g_94;
                    ++l_225;
                    l_238[1][2] = (p_67 , ((g_161 >= (~(((safe_sub_func_int64_t_s_s(l_170, (+(safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_234 == 0x972EL), (g_94 = ((0x3E88C3CEL < p_67) > g_150[2])))), 1))))) != (g_236 == (void*)0)) , 1L))) > g_82));
                    if (l_225)
                        break;
                }
                else
                {
                    unsigned long long *l_239 = &l_225;
                    int *l_243 = &g_33[2];
                    unsigned **l_274 = &l_216;
                    int l_287 = 0xCDB33FEFL;
                    int l_293 = 0xF5C7FB69L;
                    int l_295 = 0L;
                    int l_296 = 0xC0DDB33CL;
                    int l_297 = 1L;
                    int l_300 = 0xA50B5D90L;
                    int l_301 = 1L;
                    int l_302[9] = {0x7E771262L,0x7980DC17L,0x7980DC17L,0x7E771262L,0x7980DC17L,0x7980DC17L,0x7E771262L,0x7980DC17L,0x7980DC17L};
                    int i;
                    if ((l_179 != l_239))
                    {
                        unsigned char l_240 = 4UL;
                        int *l_241 = &l_224;
                        (*l_241) &= l_240;
                    }
                    else
                    {
                        int *l_242[8][2][10] = {{{&l_222,&l_222,&l_222,&g_84,&g_33[6],&g_33[2],&l_222,&g_33[6],&g_79,&g_33[2]},{&g_33[6],&l_174,(void*)0,&l_224,&l_222,&l_224,(void*)0,&l_174,&g_33[6],&l_238[1][2]}},{{(void*)0,&l_223,&l_222,&g_33[3],&l_222,&g_79,&g_79,&g_33[2],&g_33[6],&l_222},{&l_224,&l_222,&l_222,&g_33[3],&g_33[2],&l_238[5][5],(void*)0,&l_224,&g_33[6],&g_33[6]}},{{(void*)0,&g_33[2],&g_33[2],&l_224,&l_224,&g_33[2],&g_33[2],(void*)0,&g_79,(void*)0},{&l_174,(void*)0,&l_238[0][0],&g_84,&g_79,&g_33[2],&l_223,&l_238[5][5],&g_33[3],&g_79}},{{&l_238[1][2],&l_222,&l_222,&l_238[1][2],&g_33[2],&l_238[5][5],&l_224,&g_33[2],&l_238[0][0],&g_33[2]},{&l_224,(void*)0,&l_222,&l_174,&l_222,(void*)0,&l_224,&l_238[1][2],&l_223,&g_33[6]}},{{&g_33[6],&l_222,&g_33[2],&g_33[6],&g_84,&l_222,&l_222,&l_222,(void*)0,&l_238[1][2]},{&l_222,&l_222,&g_33[3],&g_33[2],&l_238[5][5],(void*)0,&l_224,&g_33[6],&g_33[6],&l_224}},{{&g_33[3],(void*)0,&l_222,&l_222,(void*)0,&g_33[3],&l_224,(void*)0,(void*)0,&g_33[6]},{(void*)0,&l_222,&l_224,&l_238[5][5],&l_222,&l_238[1][2],(void*)0,&l_224,&g_79,&l_222}},{{(void*)0,&g_33[2],&l_174,&l_222,(void*)0,&g_33[3],&l_222,(void*)0,&l_222,&g_33[3]},{&g_33[3],&l_222,(void*)0,&l_222,&g_33[3],(void*)0,&l_222,&l_174,&g_33[2],(void*)0}},{{&l_222,&g_79,&l_224,(void*)0,&l_238[1][2],&l_222,&l_238[5][5],&l_224,&l_222,(void*)0},{&g_33[6],(void*)0,&g_33[6],&g_79,(void*)0,&g_84,&l_238[1][2],&l_238[1][2],&g_84,(void*)0}}};
                        int **l_244 = &l_243;
                        int i, j, k;
                        l_222 = p_66;
                        (*l_244) = l_243;
                    }
                    (*l_243) ^= ((((!g_154) && 0xC5L) | ((safe_mod_func_int64_t_s_s((((p_63 >= p_65) & (*p_64)) , ((safe_mul_func_uint8_t_u_u(((((*g_236) , p_64) != (void*)0) , 0x7CL), 251UL)) >= 1UL)), (*p_64))) < p_67)) ^ 0L);
                    if ((p_65 | ((*l_179) = (((safe_div_func_uint8_t_u_u(p_63, (((((((*l_184) = l_251) != (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(p_65, 6)) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((*p_64) = ((safe_lshift_func_uint16_t_u_s((*g_236), 5)) | ((**l_217) &= (((safe_lshift_func_uint16_t_u_u(((*l_243) ^ ((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(g_164, (0x3D38F9BDL >= (safe_mod_func_uint64_t_u_u(18446744073709551613UL, l_194))))), (*g_163))) <= 7UL)), (*g_236))) , l_274) == &g_60[5][1])))) | p_65), l_225)) & (-1L)), 0x90D0L)) & l_234) < g_90), g_33[0])), (*g_236)))) > p_67), 0x37CBL))) ^ l_234) || g_82) && g_154) & 6L))) || g_150[4]) != 1L))))
                    {
                        int *l_275 = &l_224;
                        int *l_276 = (void*)0;
                        int *l_277 = &l_223;
                        int *l_278 = &g_33[4];
                        int *l_279 = &l_222;
                        int *l_280 = &g_79;
                        int *l_281 = (void*)0;
                        int *l_282 = &l_238[3][0];
                        int *l_283 = &l_224;
                        int *l_284 = &g_79;
                        int *l_285 = &g_84;
                        int *l_286 = &l_238[3][3];
                        int *l_288 = &g_33[2];
                        int *l_289 = &l_238[1][2];
                        int *l_290 = &l_223;
                        int *l_291[5] = {&g_79,&g_79,&g_79,&g_79,&g_79};
                        unsigned long long l_312 = 0xA86A90149B8A88DELL;
                        unsigned long long **l_316 = &l_315;
                        int **l_318 = &l_288;
                        int i;
                        l_312++;
                        (*l_282) &= (((*l_316) = l_315) != (l_317 = g_163));

                        ;
                        (*l_318) = &l_294[2];

                        ;
                    }
                    else
                    {
                        return &g_79;


                    }

                    ;
                    if ((g_61 , ((+(l_274 != (void*)0)) == p_63)))
                    {
                        unsigned short *l_333[8];
                        int *l_335[3];
                        volatile int *l_337 = &g_82;
                        volatile int **l_336 = &l_337;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_333[i] = &g_334[2];
                        for (i = 0; i < 3; i++)
                            l_335[i] = &l_238[1][2];
                        l_238[2][4] ^= (l_293 = (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(((*p_64) | (g_164 || ((*l_243) = (safe_lshift_func_int16_t_s_u((1UL ^ ((p_63 , (++(*g_236))) && (p_67 , l_299))), (l_292 = ((*l_184) |= p_67))))))), 6)) , (((0xECE5EC5E385F3E33LL && (((0L || (-1L)) || 65535UL) > p_67)) , p_63) <= (*g_236))) <= p_66), 0x82BEL)) & p_63), p_66)), p_66)) > 7L), p_63)));
                        (*l_336) = &g_78;

                        ;
                    }
                    else
                    {
                        if ((*l_243))
                            break;
                        if (g_334[1])
                            continue;
                    }
                }

                ;
            }
            l_303 = (p_64 != (((safe_mul_func_int16_t_s_s(((((l_238[1][2] >= (p_66 , (safe_mod_func_uint32_t_u_u(((*l_216) &= ((p_65 , (l_309 ^ (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(((g_149 &= (g_154 >= (safe_sub_func_int64_t_s_s(0x7ED305FA5C55A6DBLL, ((p_63 = p_65) < (safe_mod_func_uint32_t_u_u((l_352 != &g_61), 0x4D3B9400L))))))) < l_305))), (*g_163))) , p_63) || 1UL), g_161)))) != l_238[0][3])), (-10L))))) == (-4L)) , p_67) || l_238[4][2]), g_237)) , 0xEA7C4602C31B24D9LL) , p_64));
            (*l_353) = &l_308;

            ;
        }
        else
        {
            unsigned short l_400 = 0xDF44L;
            int *l_424[7][1];
            unsigned long long **l_439 = &l_370;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_424[i][j] = &g_79;
            }
            if (g_150[4])
            {
                unsigned char l_373 = 0xA5L;
                for (g_79 = 0; (g_79 >= (-14)); g_79--)
                {
                    unsigned long long *l_365 = &l_251;
                    unsigned long long **l_364 = &l_365;
                    long long **l_381[4][10][1] = {{{&l_179},{&g_163},{&g_163},{&l_179},{&g_163},{&g_163},{&l_179},{&l_179},{&g_163},{&g_163}},{{&l_179},{&g_163},{&g_163},{&l_179},{&l_179},{&g_163},{&g_163},{&l_179},{&g_163},{&g_163}},{{&l_179},{&l_179},{&g_163},{&g_163},{&l_179},{&g_163},{&g_163},{&l_179},{&l_179},{&g_163}},{{&g_163},{&l_179},{&g_163},{&g_163},{&l_179},{&l_179},{&g_163},{&g_163},{&l_179},{&g_163}}};
                    int l_384 = (-1L);
                    int i, j, k;
                    g_83 &= p_63;
                    for (g_161 = 0; (g_161 == 48); g_161 = safe_add_func_int16_t_s_s(g_161, 5))
                    {
                        int *l_360 = &l_305;
                        int **l_359 = &l_360;
                        unsigned **l_363[5];
                        unsigned long long ***l_367 = (void*)0;
                        unsigned long long ***l_368[9][1] = {{&g_366[1]},{(void*)0},{(void*)0},{&g_366[1]},{(void*)0},{(void*)0},{&g_366[1]},{(void*)0},{(void*)0}};
                        int *l_371 = (void*)0;
                        int *l_372 = &l_224;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_363[i] = &g_60[6][5];
                        (*l_359) = (void*)0;

                        ;
                        (*l_372) = ((((safe_div_func_uint16_t_u_u(0xA3F1L, g_36)) <= (l_363[2] != (void*)0)) == 18446744073709551615UL) , (l_364 != (l_369 = g_366[1])));

                        ;
                        if (l_373)
                            continue;
                    }
                    for (l_303 = (-3); (l_303 != (-26)); l_303 = safe_sub_func_uint32_t_u_u(l_303, 8))
                    {
                        int *l_376[7];
                        int **l_377 = &l_376[2];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_376[i] = (void*)0;
                        l_308 ^= p_65;
                        g_378 = ((*l_377) = &g_84);

                        ;

                    }
                    for (l_311 = 0; (l_311 == 25); ++l_311)
                    {
                        long long ***l_382 = (void*)0;
                        long long ***l_383 = &l_381[1][2][0];
                        char *l_391[10][2] = {{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94}};
                        int l_393[9] = {1L,9L,1L,9L,1L,9L,1L,9L,1L};
                        int i, j;
                        (*l_383) = l_381[1][2][0];
                        if (l_384)
                            continue;
                        (*g_378) |= 0x329AF886L;
                        l_384 &= (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_94 | 0L), (~(~8UL)))), (((*g_236) , (safe_div_func_uint8_t_u_u(0UL, (l_393[8] ^= g_164)))) , 246UL)));
                    }
                }

                ;
                ;
                if ((l_223 ^ ((0x1B0531F4C52F5D63LL != ((safe_mod_func_int8_t_s_s((255UL != (&l_176[3][1][2] != &g_334[2])), (safe_unary_minus_func_int8_t_s(((p_67 , (((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u(l_308, (p_63 , (((p_67 , (*g_163)) , p_63) != p_67)))))) ^ l_176[6][6][1]) & p_66)) & l_400))))) > g_392)) | g_84)))
                {
                    int *l_404 = &g_79;
                    int *l_405 = &g_33[5];
                    int *l_406[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_406[i] = (void*)0;
                    (*g_378) &= ((0x23C5L < l_401) | ((safe_sub_func_int8_t_s_s(l_311, l_303)) && ((*g_236) = l_308)));
                    ++l_408;
                    if ((~(-1L)))
                    {
                        unsigned char *l_413[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*g_378) ^= ((p_63 | (safe_lshift_func_uint8_t_u_s((!(!((+((g_161 = g_77) < (p_67 <= (p_66 , (safe_lshift_func_uint16_t_u_u(((&g_163 != ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((*l_404), 2)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_373, (18446744073709551614UL && l_306))), p_67)))) , &p_64)) && (*l_404)), 0)))))) != 65528UL))), p_67))) != p_67);
                        return l_424[6][0];


                    }
                    else
                    {
                        unsigned long long l_428 = 0xC86E067EDE7A5479LL;
                        if (l_425)
                            break;
                        (*l_404) &= (p_65 , (safe_mod_func_uint8_t_u_u((((&g_150[4] != (p_63 , (void*)0)) , (p_67 , 0L)) && l_428), g_154)));
                        if ((*g_378))
                            break;
                        if (l_306)
                            break;
                    }
                }
                else
                {
                    return &g_84;


                }
                if (p_63)
                    break;
                for (g_94 = 2; (g_94 >= 0); g_94 -= 1)
                {
                    return &g_79;


                }
            }
            else
            {
                int *l_444 = &l_298;
                int *l_445[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_224,(void*)0,&l_224,(void*)0,&l_224,(void*)0,&l_224,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                if (p_65)
                {
                    char *l_436 = &l_425;
                    unsigned long long ***l_440[9];
                    int *l_446 = &l_311;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_440[i] = &l_439;
                    for (l_222 = 9; (l_222 == (-1)); l_222 = safe_sub_func_uint32_t_u_u(l_222, 3))
                    {
                        unsigned char l_431 = 0x59L;
                        l_431 = 1L;
                        l_424[2][0] = l_424[6][0];
                    }
                    (*g_378) = (safe_rshift_func_uint16_t_u_s((1L | (l_309 = (l_298 , l_310))), ((safe_sub_func_int8_t_s_s((g_392 || ((*l_436) = p_65)), l_308)) && (safe_mul_func_uint16_t_u_u(0x3714L, ((g_366[0] != (l_369 = l_439)) < g_237))))));
                    for (g_237 = 9; (g_237 < 39); g_237++)
                    {
                        int **l_443 = &l_424[0][0];
                        (*l_443) = (void*)0;


                        return &g_79;


                    }
                    for (p_66 = 2; (p_66 <= 9); p_66 += 1)
                    {
                        int **l_447 = &g_378;
                        short *l_450 = &g_149;
                        (*l_447) = l_446;

                        ;
                        (*g_378) = ((p_65 & (0xE602DE46L || (safe_add_func_int16_t_s_s(((*l_450) = l_251), (*g_236))))) ^ g_84);
                        return l_424[6][0];



                    }
                }
                else
                {
                    unsigned l_461 = 0UL;
                    char *l_462 = &l_407;
                    if (((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_67, (-1L))), ((*g_378) ^= 0x1A631D27L))), (safe_div_func_int16_t_s_s((((((g_83 , (safe_add_func_uint32_t_u_u(l_461, ((p_66 > 0x675A7E47L) & ((*l_462) = g_392))))) <= (safe_lshift_func_uint16_t_u_u(((*l_184) = ((*g_236) = 0xF83EL)), p_67))) , p_66) ^ 1UL) & (*g_163)), p_66)))) & p_63))
                    {
                        int **l_465[9];
                        int *l_466 = &l_307;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_465[i] = (void*)0;
                        l_467[1][4] = (l_466 = l_424[3][0]);

                        ;
                        (*l_444) ^= ((*g_378) = (l_468 == &l_370));
                    }
                    else
                    {
                        int **l_469[9] = {&l_424[5][0],&l_424[6][0],&l_424[5][0],&l_424[5][0],&l_424[6][0],&l_424[5][0],&l_424[5][0],&l_424[6][0],&l_424[5][0]};
                        int i;
                        g_378 = &l_174;

                        ;
                        (*g_378) = (safe_rshift_func_uint8_t_u_s(g_392, ((*l_462) &= ((p_65 != p_67) == (*g_236)))));
                    }

                    ;
                    for (l_309 = 2; (l_309 >= 0); l_309 -= 1)
                    {
                        int i, j;
                        (*g_378) &= p_63;
                    }
                }

                ;
            }

            ;
            ;
            return l_472;



        }
        (*l_472) = (*g_378);
    }

    ;
    ;
    l_474--;
    return &g_33[4];


}







static int func_68(unsigned * p_69, int * p_70, long long * p_71)
{
    short l_96 = 0x2910L;
    int l_106 = 0x5FDDB278L;
    int l_108 = (-1L);
    int l_110 = 0x75BA722EL;
    int l_123 = 0x3F1638C0L;
    int l_128[7] = {5L,5L,5L,5L,5L,5L,5L};
    unsigned long long l_134 = 7UL;
    unsigned char *l_159 = &g_90;
    unsigned char *l_160 = &g_161;
    short *l_162 = &g_149;
    int i;
    for (g_61 = 0; (g_61 < 39); g_61 = safe_add_func_int64_t_s_s(g_61, 6))
    {
        unsigned l_103 = 0x2C61B7CEL;
        int l_104 = 0L;
        int l_119 = 6L;
        int l_120[6][7] = {{1L,1L,(-1L),1L,1L,(-1L),1L},{0xAD1E1EA8L,0xEFEA996BL,0xEFEA996BL,0xAD1E1EA8L,0xEFEA996BL,0xEFEA996BL,0xAD1E1EA8L},{0L,1L,0L,0L,1L,0L,0L},{0xAD1E1EA8L,0xAD1E1EA8L,0xEC67F3A6L,0xAD1E1EA8L,0xAD1E1EA8L,0xEC67F3A6L,0xAD1E1EA8L},{1L,0L,0L,1L,0L,0L,1L},{0xEFEA996BL,0xAD1E1EA8L,0xEFEA996BL,0xEFEA996BL,0xAD1E1EA8L,0xEFEA996BL,0xEFEA996BL}};
        unsigned long long l_143 = 0xE05E15677DB30F1BLL;
        int i, j;
        for (g_36 = 0; (g_36 >= 42); g_36 = safe_add_func_int8_t_s_s(g_36, 8))
        {
            unsigned l_102[9][10] = {{0x9F05BB7EL,4294967289UL,0xB082E280L,4294967293UL,0xD8564F5EL,0xFA9739A1L,0x1B0FACDCL,0xD9BB22B2L,0UL,0xD9BB22B2L},{0xD9BB22B2L,0x53350B76L,3UL,0x325A1CDAL,3UL,0x53350B76L,0xD9BB22B2L,0xDE5F43C7L,0x53350B76L,0x9E0432CFL},{0x53350B76L,0xD9BB22B2L,0xDE5F43C7L,0x53350B76L,0x9E0432CFL,0x2F6E5819L,3UL,0x357609E5L,0xDE5F43C7L,0xDE5F43C7L},{0x9E0432CFL,0xD9BB22B2L,4294967289UL,0x86B00112L,0x86B00112L,4294967289UL,0xD9BB22B2L,0x9E0432CFL,4294967293UL,0x1B0FACDCL},{0x325A1CDAL,0x53350B76L,0x379BBDC2L,0x357609E5L,0x2F6E5819L,0xDDE4E4C4L,0x1B0FACDCL,0x2F6E5819L,0x53350B76L,0x86B00112L},{3UL,0x9E0432CFL,0x379BBDC2L,0x2F6E5819L,5UL,0x2F6E5819L,0x379BBDC2L,0x9E0432CFL,3UL,0x379BBDC2L},{0x357609E5L,0x325A1CDAL,4294967289UL,0x1B0FACDCL,0x325A1CDAL,4294967294UL,0x86B00112L,0x357609E5L,0xD8564F5EL,0x1B0FACDCL},{0xD9BB22B2L,3UL,0xDE5F43C7L,0x1B0FACDCL,0x379BBDC2L,0x379BBDC2L,0x1B0FACDCL,0xDE5F43C7L,3UL,0xD9BB22B2L},{0xDE5F43C7L,0x357609E5L,3UL,0x2F6E5819L,0x9E0432CFL,0x53350B76L,0xDE5F43C7L,0xD9BB22B2L,0x53350B76L,3UL}};
            int l_107 = 0x21954321L;
            int l_121 = 0xF8E2B3D6L;
            int l_122 = 0xD6CAE52FL;
            int l_124 = 7L;
            int l_125 = (-8L);
            int l_126[9][1][4] = {{{0L,(-6L),0x6F7BBE78L,(-6L)}},{{0L,(-2L),0x10315540L,(-6L)}},{{0x10315540L,(-6L),0x10315540L,(-2L)}},{{0L,(-6L),0x6F7BBE78L,(-6L)}},{{0L,(-2L),0x10315540L,(-6L)}},{{0x10315540L,(-6L),0x10315540L,(-2L)}},{{0L,(-6L),0x6F7BBE78L,(-6L)}},{{0L,(-2L),0x10315540L,(-6L)}},{{0x10315540L,(-6L),0x10315540L,(-2L)}}};
            unsigned l_129 = 0xAB333187L;
            int i, j, k;
            for (g_79 = 17; (g_79 == 1); --g_79)
            {
                int l_88 = 0x1CA9286DL;
                int l_105 = 0x84503A70L;
                int l_109 = 0x6CBD83D7L;
                unsigned l_111 = 0x0ABD0B17L;
                int l_127 = (-8L);
                for (g_84 = (-30); (g_84 == 2); g_84 = safe_add_func_uint8_t_u_u(g_84, 7))
                {
                    unsigned l_95 = 0xD24A1705L;
                    unsigned *l_101 = &g_61;
                    int *l_114 = &l_88;
                    int *l_115 = &l_109;
                    int *l_116 = &l_109;
                    int *l_117 = (void*)0;
                    int *l_118[9][2] = {{&l_106,&l_106},{&l_110,&l_106},{&l_106,&l_110},{&l_106,&l_106},{&l_110,&l_106},{&l_106,&l_110},{&l_106,&l_106},{&l_110,&l_106},{&l_106,&l_110}};
                    int i, j;
                    if (g_84)
                    {
                        return (*p_70);
                    }
                    else
                    {
                        int l_87 = (-1L);
                        int *l_89[7][1] = {{(void*)0},{(void*)0},{&g_79},{(void*)0},{(void*)0},{&g_79},{(void*)0}};
                        char *l_93[5][1][8] = {{{&g_94,&g_94,&g_94,&g_94,(void*)0,(void*)0,&g_94,&g_94}},{{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94}}};
                        int i, j, k;
                        if (l_87)
                            break;
                        g_90 ^= (l_88 , ((g_82 & g_61) , ((*p_70) = (*p_70))));
                        l_103 = ((*p_70) = (safe_mul_func_int8_t_s_s((l_96 ^= (l_95 = g_82)), (~((((g_79 & ((safe_div_func_uint32_t_u_u((*p_69), 0xDAE56B76L)) == (*p_69))) , (l_101 == (((g_33[4] , g_84) >= l_88) , (void*)0))) < l_102[3][5]) < 0xA3025762L)))));
                        ++l_111;
                    }
                    (*l_114) ^= (*p_70);
                    ++l_129;
                    (*l_114) &= (0x117FE557E69CC3E7LL > ((safe_add_func_int16_t_s_s(((void*)0 != p_70), g_78)) & (*l_116)));
                }
            }
            (*p_70) ^= l_134;
        }
        for (l_103 = 0; (l_103 <= 6); l_103 += 1)
        {
            unsigned long long *l_148[4];
            unsigned char l_151 = 0x85L;
            int i;
            for (i = 0; i < 4; i++)
                l_148[i] = (void*)0;
            l_128[l_103] = (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((-4L), g_33[l_103])), ((safe_div_func_int32_t_s_s((((((safe_sub_func_uint64_t_u_u(l_143, ((safe_lshift_func_uint16_t_u_s(g_33[l_103], g_33[l_103])) , (g_150[4] &= ((0x32L > (safe_mod_func_int64_t_s_s(((g_33[2] <= (g_149 &= (((g_33[5] ^ g_83) & l_119) && g_82))) , g_94), 0xFC8F313514C0A486LL))) || 0x57027B00L))))) > l_151) | 18446744073709551610UL) , 0x3813L) & 0x7BF4L), l_120[1][2])) | l_151)));
        }
    }
    (*p_70) = ((l_123 = ((*l_162) = (l_96 , (((safe_div_func_int32_t_s_s((g_154 != 0x8E2DF95CBA6E25E8LL), (*p_70))) >= ((*p_69) | (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_94 < (l_123 & ((*l_160) = ((*l_159) ^= 255UL)))) < (~l_110)), g_61)), l_110)))) && g_36)))) || l_108);
    return (*p_70);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_334[i], "g_334[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_497[i][j], "g_497[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_499, "g_499", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_588[i][j], "g_588[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1137, "g_1137", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1197[i][j][k], "g_1197[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1338, "g_1338", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1687, "g_1687", print_hash_value);
    transparent_crc(g_1758, "g_1758", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1928[i][j][k], "g_1928[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
