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



static int g_19[2][7][6] = {{{(-6L),0xDADE661FL,0xE8B01213L,(-1L),0x02A3062AL,0x8CAE2FE8L},{0x4F77722AL,0xDADE661FL,(-1L),0xA07563FFL,0x7C7747BBL,0x86D6DBC1L},{1L,0xF2BA167CL,0x3063D62AL,0xB4746A1CL,(-2L),0xE8B01213L},{0x91A83ACDL,0x9AE4F78DL,0xC9FA8BC0L,0xDADE661FL,0x86D6DBC1L,(-2L)},{(-8L),0x4C7BA3F3L,2L,(-3L),(-6L),0xA07563FFL},{0xF2BA167CL,0xA07563FFL,0xA2A67F6AL,0xA2A67F6AL,0xA07563FFL,0xF2BA167CL},{1L,0x8CAE2FE8L,0x4C7BA3F3L,1L,(-1L),0x702377D6L}},{{0x7C7747BBL,(-4L),0x4F77722AL,0xAC89D73AL,0x9AE4F78DL,0x91A83ACDL},{(-2L),1L,0xC9FA8BC0L,0xA2A67F6AL,0xE8B01213L,0x86D6DBC1L},{(-4L),(-3L),0x720D7006L,0x234AC019L,0x4F77722AL,(-1L)},{0x09EB818FL,(-6L),(-8L),0x7C7747BBL,0x91A83ACDL,0x702377D6L},{(-6L),(-1L),(-4L),0x711A53FDL,0x7C7747BBL,0xE8B01213L},{9L,0x4C7BA3F3L,0x7C7747BBL,0x4C7BA3F3L,9L,0x720D7006L},{0xA2A67F6AL,0x02A3062AL,(-3L),0xB15D3E99L,0x711A53FDL,0xC2076ACBL}}};
static char g_20 = 0x71L;
static int g_40 = 1L;
static int *g_39 = &g_40;
static int **g_77 = (void*)0;
static unsigned char g_79 = 0UL;
static unsigned short g_84 = 4UL;
static unsigned char g_109 = 0UL;
static unsigned char g_115[10][1] = {{0x9EL},{9UL},{0x9EL},{9UL},{0x9EL},{9UL},{0x9EL},{9UL},{0x9EL},{9UL}};
static short g_116 = (-1L);
static short g_134 = 0L;
static volatile short g_158 = (-2L);
static int g_178 = 0xD55D3BE8L;
static int g_240 = 0x0838230FL;
static unsigned short *g_263[1] = {(void*)0};
static int *g_264 = (void*)0;
static volatile unsigned g_303 = 1UL;
static volatile unsigned short g_310 = 65535UL;
static volatile unsigned short *g_309 = &g_310;
static volatile unsigned short **g_308[3][9] = {{&g_309,&g_309,(void*)0,(void*)0,&g_309,&g_309,&g_309,(void*)0,(void*)0},{&g_309,&g_309,&g_309,(void*)0,&g_309,&g_309,&g_309,&g_309,(void*)0},{&g_309,&g_309,&g_309,&g_309,&g_309,&g_309,&g_309,&g_309,&g_309}};
static int *g_335[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int ***g_344[5] = {&g_77,&g_77,&g_77,&g_77,&g_77};
static unsigned g_365 = 0UL;
static unsigned short g_408 = 65535UL;
static int g_434[8] = {0L,0L,(-1L),0L,0L,(-1L),0L,0L};
static unsigned char **g_543 = (void*)0;
static volatile unsigned char g_546[4] = {0x69L,0x69L,0x69L,0x69L};
static volatile unsigned char *g_545 = &g_546[2];
static volatile unsigned char **g_544 = &g_545;
static int *g_607 = &g_178;
static volatile int g_630[8][1][2] = {{{(-9L),0x729A08C1L}},{{(-9L),0x7D7A3125L}},{{0x408892ACL,0x408892ACL}},{{0x7D7A3125L,(-9L)}},{{0x729A08C1L,(-9L)}},{{0x7D7A3125L,0x408892ACL}},{{0x408892ACL,0x7D7A3125L}},{{(-9L),0x729A08C1L}}};
static unsigned char ***g_644 = &g_543;
static unsigned char ****g_643 = &g_644;
static unsigned g_688 = 0x58EB65ABL;
static unsigned g_690 = 4294967295UL;
static int *g_716 = &g_178;
static unsigned short g_746 = 1UL;
static int ***g_758 = &g_77;
static int ***g_760 = &g_77;
static int ***g_761 = (void*)0;
static short g_836 = 0x848FL;
static volatile short *g_873 = &g_158;
static volatile short **g_872 = &g_873;
static volatile short ***g_871[10][1][10] = {{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}},{{&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872,&g_872}}};
static int g_874 = 0xCBD2DFBCL;
static int g_960 = 0xF5603F0EL;



static unsigned short func_1(void);
static char func_6(char p_7, unsigned char p_8, unsigned short p_9, unsigned p_10, int p_11);
static char func_12(int p_13);
static unsigned func_21(int * p_22, unsigned p_23);
static int * func_24(int * p_25, int * p_26, int * p_27);
static int * func_28(short p_29, int * p_30);
static int * func_32(unsigned char p_33, short p_34, int * p_35, short p_36);
static int * func_41(unsigned char p_42, int * p_43, int * p_44);
static char func_58(unsigned char p_59, unsigned p_60, int * p_61);
static int * func_64(unsigned p_65, unsigned p_66, int * p_67);
static unsigned short func_1(void)
{
    short l_16[9] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)};
    int *l_17 = (void*)0;
    int *l_18 = &g_19[0][6][2];
    char l_31[1];
    int **l_334[4][8][4] = {{{&l_17,(void*)0,(void*)0,&l_17},{&g_264,&g_39,&g_39,&g_39},{&g_39,&l_18,&l_17,&l_18},{&g_39,&l_17,&g_39,(void*)0},{&g_264,&l_18,(void*)0,(void*)0},{&l_17,&g_264,&l_18,(void*)0},{&l_17,(void*)0,&g_39,&g_264},{(void*)0,&l_17,(void*)0,(void*)0}},{{&l_18,&l_18,(void*)0,(void*)0},{&g_264,&g_264,&l_17,&l_18},{&l_17,(void*)0,&l_18,&l_17},{&g_39,&g_264,&g_39,&l_18},{&g_264,&g_264,(void*)0,&l_17},{&g_264,(void*)0,&g_264,&l_18},{&l_17,&g_264,&l_18,(void*)0},{&g_264,&l_18,&g_264,&l_17}},{{&g_39,&l_18,(void*)0,&l_18},{&l_17,(void*)0,&l_18,&g_264},{&l_17,&g_39,&l_17,&l_18},{&g_39,&l_17,&g_264,&l_17},{&g_264,&g_39,&l_17,&l_17},{(void*)0,(void*)0,&l_17,&g_264},{&g_264,(void*)0,&g_264,&l_18},{&g_39,&g_39,&l_17,(void*)0}},{{&l_17,(void*)0,&l_18,(void*)0},{&l_17,(void*)0,(void*)0,&g_264},{&g_39,&l_18,&g_264,&g_264},{&g_264,&l_18,&l_18,&g_264},{&l_18,&l_17,(void*)0,&g_39},{&l_18,(void*)0,&g_264,&l_17},{(void*)0,&g_264,&g_39,&l_17},{(void*)0,(void*)0,&g_264,&g_39}}};
    char *l_980 = &l_31[0];
    unsigned short l_981 = 65535UL;
    unsigned char l_982 = 254UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_31[i] = 1L;
    (*g_607) = (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_6(((*l_980) = func_12((((*l_18) = (safe_mod_func_uint16_t_u_u(0xD0D3L, (l_16[3] & 251UL)))) | (g_20 && func_21(func_24(l_17, l_17, (g_335[5] = func_28(l_31[0], func_32((safe_rshift_func_int16_t_s_u(((+((void*)0 == g_39)) && 0L), 14)), g_40, &g_40, g_40)))), g_434[3]))))), l_981, g_960, g_960, l_982), g_960)), 4));
    return (*l_18);
}







static char func_6(char p_7, unsigned char p_8, unsigned short p_9, unsigned p_10, int p_11)
{
    char l_991 = 0x36L;
    unsigned *l_997 = (void*)0;
    short l_1000 = 0x821FL;
    for (p_10 = 0; (p_10 == 58); p_10 = safe_add_func_uint16_t_u_u(p_10, 4))
    {
        unsigned l_992 = 18446744073709551607UL;
        short *l_993 = &g_836;
        int l_995 = 0x9EA10CEEL;
        unsigned *l_998 = &g_688;
        int *l_999 = &g_19[1][1][2];
        int **l_1001 = &g_716;
        (*l_999) = (safe_add_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((+(safe_mul_func_uint16_t_u_u(l_991, (l_992 & ((*l_993) = (**g_872)))))) > ((((((safe_unary_minus_func_int16_t_s(l_995)) != ((*g_716) = l_991)) < (safe_unary_minus_func_int16_t_s(p_8))) == 65535UL) < (l_997 != l_998)) >= 1UL)), 0x92B44B71L)) < p_8) && p_7), 0x429081C0L));
        (*l_1001) = func_41(l_1000, l_997, ((*l_1001) = l_999));
        for (g_303 = 0; g_303 < 2; g_303 += 1)
        {
            for (l_1000 = 0; l_1000 < 7; l_1000 += 1)
            {
                for (g_688 = 0; g_688 < 6; g_688 += 1)
                {
                    g_19[g_303][l_1000][g_688] = 0x26305AF5L;
                }
            }
        }
    }
    return p_9;
}







static char func_12(int p_13)
{
    unsigned l_785 = 0x7D18B0B2L;
    int l_786 = 0x539AB68AL;
    unsigned char ***l_838 = (void*)0;
    int *l_840[1];
    int *l_841 = &g_434[1];
    int *l_855 = &g_40;
    unsigned short **l_863 = &g_263[0];
    unsigned l_894[7][6][4] = {{{5UL,0x82ACFF4DL,0x80320C24L,0xFDD0D50BL},{9UL,5UL,0x8452B744L,0x8452B744L},{0x168DFB56L,0x168DFB56L,0xD5843549L,1UL},{0x168DFB56L,0x82ACFF4DL,0x8452B744L,5UL},{9UL,1UL,0x80320C24L,0x8452B744L},{5UL,1UL,0xD5843549L,5UL}},{{1UL,0x82ACFF4DL,0x6D3BCFEEL,1UL},{9UL,0x82ACFF4DL,0UL,0x8AF803E8L},{8UL,9UL,1UL,0x80320C24L},{9UL,0x68F9ED29L,0xD5843549L,0x80320C24L},{7UL,9UL,0x8AF803E8L,0x8AF803E8L},{0x82ACFF4DL,0x82ACFF4DL,1UL,0x8452B744L}},{{0x82ACFF4DL,0x68F9ED29L,0x8AF803E8L,0x6D3BCFEEL},{7UL,8UL,0xD5843549L,0x8AF803E8L},{9UL,8UL,1UL,0x6D3BCFEEL},{8UL,0x68F9ED29L,0UL,0x8452B744L},{7UL,0x82ACFF4DL,0UL,0x8AF803E8L},{8UL,9UL,1UL,0x80320C24L}},{{9UL,0x68F9ED29L,0xD5843549L,0x80320C24L},{7UL,9UL,0x8AF803E8L,0x8AF803E8L},{0x82ACFF4DL,0x82ACFF4DL,1UL,0x8452B744L},{0x82ACFF4DL,0x68F9ED29L,0x8AF803E8L,0x6D3BCFEEL},{7UL,8UL,0xD5843549L,0x8AF803E8L},{9UL,8UL,1UL,0x6D3BCFEEL}},{{8UL,0x68F9ED29L,0UL,0x8452B744L},{7UL,0x82ACFF4DL,0UL,0x8AF803E8L},{8UL,9UL,1UL,0x80320C24L},{9UL,0x68F9ED29L,0xD5843549L,0x80320C24L},{7UL,9UL,0x8AF803E8L,0x8AF803E8L},{0x82ACFF4DL,0x82ACFF4DL,1UL,0x8452B744L}},{{0x82ACFF4DL,0x68F9ED29L,0x8AF803E8L,0x6D3BCFEEL},{7UL,0x82ACFF4DL,0x8AF803E8L,0UL},{8UL,0x82ACFF4DL,5UL,0x80320C24L},{0x82ACFF4DL,7UL,0xD5843549L,0x6D3BCFEEL},{0x12378FC3L,9UL,0xD5843549L,0UL},{0x82ACFF4DL,8UL,5UL,0x8452B744L}},{{8UL,7UL,0x8AF803E8L,0x8452B744L},{0x12378FC3L,8UL,0UL,0UL},{9UL,9UL,5UL,0x6D3BCFEEL},{9UL,7UL,0UL,0x80320C24L},{0x12378FC3L,0x82ACFF4DL,0x8AF803E8L,0UL},{8UL,0x82ACFF4DL,5UL,0x80320C24L}}};
    unsigned char *l_945 = (void*)0;
    unsigned char **l_944[9][4] = {{&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,(void*)0},{&l_945,(void*)0,&l_945,(void*)0},{(void*)0,&l_945,(void*)0,&l_945},{&l_945,&l_945,(void*)0,&l_945},{(void*)0,(void*)0,&l_945,&l_945},{(void*)0,(void*)0,(void*)0,&l_945},{&l_945,&l_945,(void*)0,&l_945},{(void*)0,&l_945,&l_945,(void*)0}};
    int l_965[8][8][4] = {{{0x48B93A00L,0L,0L,0x48B93A00L},{(-5L),0x54D4D835L,0L,0xEC10266DL},{0x48B93A00L,0L,(-4L),0L},{0L,0L,(-5L),0L},{(-4L),(-5L),0x7A6C865DL,0x7A6C865DL},{0L,0L,0x48B93A00L,0xEC10266DL},{0L,4L,0x7A6C865DL,0L},{(-4L),0xEC10266DL,(-4L),0x7A6C865DL}},{{(-5L),0xEC10266DL,0x48B93A00L,0L},{0xEC10266DL,4L,4L,0xEC10266DL},{(-4L),0L,4L,0x7A6C865DL},{0xEC10266DL,(-5L),0x48B93A00L,(-5L)},{(-5L),4L,(-4L),(-5L)},{(-4L),(-5L),0x7A6C865DL,0x7A6C865DL},{0L,0L,0x48B93A00L,0xEC10266DL},{0L,4L,0x7A6C865DL,0L}},{{(-4L),0xEC10266DL,(-4L),0x7A6C865DL},{(-5L),0xEC10266DL,0x48B93A00L,0L},{0xEC10266DL,4L,4L,0xEC10266DL},{(-4L),0L,4L,0x7A6C865DL},{0xEC10266DL,(-5L),0x48B93A00L,(-5L)},{(-5L),4L,(-4L),(-5L)},{(-4L),(-5L),0x7A6C865DL,0x7A6C865DL},{0L,0L,0x48B93A00L,0xEC10266DL}},{{0L,4L,0x7A6C865DL,0L},{(-4L),0xEC10266DL,(-4L),0x7A6C865DL},{(-5L),0xEC10266DL,0x48B93A00L,0L},{0xEC10266DL,4L,4L,0xEC10266DL},{0x7A6C865DL,(-5L),(-4L),4L},{0L,0xEC10266DL,0x54D4D835L,0xEC10266DL},{0xEC10266DL,(-4L),0x7A6C865DL,0xEC10266DL},{0x7A6C865DL,0xEC10266DL,4L,4L}},{{(-5L),(-5L),0x54D4D835L,0L},{(-5L),(-4L),4L,(-5L)},{0x7A6C865DL,0L,0x7A6C865DL,4L},{0xEC10266DL,0L,0x54D4D835L,(-5L)},{0L,(-4L),(-4L),0L},{0x7A6C865DL,(-5L),(-4L),4L},{0L,0xEC10266DL,0x54D4D835L,0xEC10266DL},{0xEC10266DL,(-4L),0x7A6C865DL,0xEC10266DL}},{{0x7A6C865DL,0xEC10266DL,4L,4L},{(-5L),(-5L),0x54D4D835L,0L},{(-5L),(-4L),4L,(-5L)},{0x7A6C865DL,0L,0x7A6C865DL,4L},{0xEC10266DL,0L,0x54D4D835L,(-5L)},{0L,(-4L),(-4L),0L},{0x7A6C865DL,(-5L),(-4L),4L},{0L,0xEC10266DL,0x54D4D835L,0xEC10266DL}},{{0xEC10266DL,(-4L),0x7A6C865DL,0xEC10266DL},{0x7A6C865DL,0xEC10266DL,4L,4L},{(-5L),(-5L),0x54D4D835L,0L},{(-5L),(-4L),4L,(-4L)},{0x54D4D835L,4L,0x54D4D835L,0L},{0x7A6C865DL,4L,0L,(-4L)},{4L,0x48B93A00L,0x48B93A00L,4L},{0x54D4D835L,(-4L),0x48B93A00L,0L}},{{4L,0x7A6C865DL,0L,0x7A6C865DL},{0x7A6C865DL,0x48B93A00L,0x54D4D835L,0x7A6C865DL},{0x54D4D835L,0x7A6C865DL,0L,0L},{(-4L),(-4L),0L,4L},{(-4L),0x48B93A00L,0L,(-4L)},{0x54D4D835L,4L,0x54D4D835L,0L},{0x7A6C865DL,4L,0L,(-4L)},{4L,0x48B93A00L,0x48B93A00L,4L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_840[i] = (void*)0;
    (*g_607) = (p_13 | (-3L));
    for (g_178 = 0; (g_178 == 28); g_178 = safe_add_func_int32_t_s_s(g_178, 2))
    {
        int l_791 = 0xE56A7027L;
        int ***l_805 = &g_77;
        unsigned short l_808 = 1UL;
        int l_835 = 0x01171902L;
        short *l_889 = &g_134;
        short **l_888 = &l_889;
        unsigned short l_899 = 65535UL;
        int l_912 = 0xE3C3AF24L;
        int *l_914 = &g_434[0];
        unsigned char **l_946 = &l_945;
        int **l_966 = (void*)0;
        int **l_967 = (void*)0;
        int **l_968 = &l_840[0];
        if ((l_785 = (safe_lshift_func_uint8_t_u_s((*g_545), 2))))
        {
            int l_788 = (-9L);
            int l_816 = 0x333B2BC0L;
            int ****l_853[10] = {&g_761,&g_344[4],&g_761,&g_761,&g_761,&g_761,&g_344[4],&g_761,&g_761,&g_761};
            int *****l_852 = &l_853[5];
            short *l_870 = &g_134;
            short **l_869 = &l_870;
            short ***l_868[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_786 = 0x904F463EL;
            l_788 = (safe_unary_minus_func_int32_t_s(1L));
            for (g_746 = (-20); (g_746 == 52); g_746 = safe_add_func_uint8_t_u_u(g_746, 4))
            {
                short *l_804 = &g_134;
                int ****l_806 = &g_344[1];
                unsigned short *l_807 = &g_408;
                int l_823[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
                short l_837 = (-1L);
                short **l_887 = &l_804;
                int i;
                if (l_791)
                    break;
            }
        }
        else
        {
            char *l_917 = &g_20;
            int l_918 = 8L;
            int *l_959 = (void*)0;
            l_918 = ((safe_mul_func_int16_t_s_s(p_13, (+p_13))) != ((*l_917) = g_19[1][1][5]));
            for (g_688 = 0; (g_688 <= 0); g_688 += 1)
            {
                unsigned char l_927 = 255UL;
                int *l_947 = &g_19[0][6][2];
                if ((&g_872 == &g_872))
                {
                    short **l_928 = &l_889;
                    for (l_918 = 3; (l_918 >= 0); l_918 -= 1)
                    {
                        int *l_919 = &l_786;
                        unsigned *l_922 = &g_365;
                        int i;
                        l_919 = (void*)0;
                        (*l_841) = (p_13 == ((*l_922) = (safe_sub_func_uint8_t_u_u(0x11L, (*g_545)))));
                        (*l_841) = ((safe_rshift_func_uint16_t_u_u((((*l_914) || (safe_lshift_func_int16_t_s_u(p_13, (g_310 && (*l_914))))) == (p_13 || p_13)), (l_927 == p_13))) >= p_13);
                    }
                    (*l_855) = (l_928 != (void*)0);
                }
                else
                {
                    unsigned char ***l_952 = &l_944[1][1];
                    int l_953 = 0xC17A9679L;
                    int l_957 = 0xBCC0FADEL;
                    for (g_240 = 3; (g_240 >= 0); g_240 -= 1)
                    {
                        unsigned short *l_933 = &l_808;
                        int l_936 = (-3L);
                        (*l_855) = ((safe_rshift_func_int8_t_s_s(g_365, 5)) & (safe_add_func_uint16_t_u_u(((p_13 == ((*l_933) = (*g_309))) | (safe_add_func_uint8_t_u_u(p_13, (((!(0x0E3BL & (0x020BL & g_434[5]))) <= l_936) != (safe_rshift_func_uint16_t_u_s(p_13, 4)))))), l_918)));
                    }
                    if ((p_13 & p_13))
                    {
                        unsigned char ***l_941 = (void*)0;
                        unsigned char ***l_942 = &g_543;
                        unsigned char ***l_943[5][2] = {{&g_543,&g_543},{&g_543,&g_543},{&g_543,&g_543},{&g_543,&g_543},{&g_543,&g_543}};
                        int i, j;
                        (*l_841) = ((!p_13) == (safe_lshift_func_int8_t_s_u(g_310, ((l_944[5][3] = (void*)0) != l_946))));
                        l_947 = l_947;
                        (*l_947) = (*g_39);
                    }
                    else
                    {
                        unsigned short *l_954 = &l_808;
                        int *l_958 = &l_835;
                        (*l_855) = ((*l_947) = ((((*l_954) = (safe_mul_func_uint8_t_u_u((l_918 >= ((*l_889) = 1L)), (safe_sub_func_int16_t_s_s((&l_946 != ((*g_643) = l_952)), l_953))))) == (l_957 = (safe_rshift_func_int16_t_s_s((p_13 | 4294967292UL), 10)))) >= g_434[1]));
                        (*l_841) = (*g_39);
                        l_958 = func_41(l_957, &l_918, &l_953);
                        (*l_914) = (*l_855);
                    }
                    for (g_79 = 0; (g_79 <= 3); g_79 += 1)
                    {
                        return g_109;
                    }
                    if (l_953)
                        continue;
                }
                if (p_13)
                    break;
                for (g_408 = 0; (g_408 <= 3); g_408 += 1)
                {
                    l_959 = (void*)0;
                    (*l_947) = g_960;
                }
            }
            (*l_914) = (0xC9D3L >= (((safe_mod_func_int16_t_s_s(p_13, (safe_rshift_func_uint8_t_u_s((*g_545), g_134)))) == (&l_959 != (void*)0)) ^ p_13));
            (*l_914) = p_13;
        }
        (*l_968) = func_41((l_965[0][2][1] = p_13), &l_786, &l_786);
        for (g_836 = 0; (g_836 >= 11); ++g_836)
        {
            (*l_968) = (l_855 = &l_786);
            for (g_40 = 0; (g_40 < 23); g_40++)
            {
                unsigned short l_973 = 0UL;
                (*l_914) = 2L;
                l_973 = (+p_13);
                if ((*g_607))
                    break;
            }
        }
    }
    for (g_40 = (-3); (g_40 == 2); g_40++)
    {
        int *l_976 = (void*)0;
        int **l_977 = (void*)0;
        int **l_978[4][2] = {{&g_335[5],&g_335[5]},{&g_335[5],&g_335[5]},{&g_335[5],&g_335[5]},{&g_335[5],&g_335[5]}};
        int *l_979 = &l_786;
        int i, j;
        l_979 = func_41(p_13, (l_855 = l_976), &l_965[0][2][1]);
    }
    return p_13;
}







static unsigned func_21(int * p_22, unsigned p_23)
{
    int l_539[10][3][1] = {{{0x74A1782DL},{0x3247902FL},{0x74A1782DL}},{{(-1L)},{9L},{0x03CB891AL}},{{1L},{0x03CB891AL},{9L}},{{(-1L)},{0x74A1782DL},{0x3247902FL}},{{0x74A1782DL},{(-1L)},{9L}},{{0x03CB891AL},{1L},{0x03CB891AL}},{{9L},{(-1L)},{0x74A1782DL}},{{0x3247902FL},{0x74A1782DL},{(-1L)}},{{9L},{0x03CB891AL},{1L}},{{0x03CB891AL},{9L},{(-1L)}}};
    unsigned char *l_541[3][5] = {{(void*)0,(void*)0,&g_115[7][0],(void*)0,(void*)0},{&g_115[8][0],&g_79,&g_115[8][0],&g_115[8][0],&g_79},{(void*)0,&g_115[4][0],&g_115[4][0],(void*)0,&g_115[4][0]}};
    unsigned char **l_540 = &l_541[1][3];
    unsigned char ***l_542[9];
    unsigned short *l_547[3];
    int ****l_550 = &g_344[0];
    int l_567 = 0xFDE23A1AL;
    int *l_603 = &g_178;
    int *l_604 = &g_178;
    short *l_611[10][6] = {{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,&g_116,&g_116},{&g_116,&g_134,&g_116,&g_134,(void*)0,&g_134},{(void*)0,&g_134,&g_116,&g_134,(void*)0,&g_134}};
    short **l_610 = &l_611[0][1];
    int l_623[4][4] = {{1L,1L,0L,1L},{1L,2L,2L,1L},{2L,1L,2L,2L},{1L,1L,0L,1L}};
    unsigned char l_699 = 247UL;
    unsigned l_735 = 4294967295UL;
    unsigned l_741 = 0x5E746CE9L;
    int *l_747 = &l_567;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_542[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_547[i] = &g_408;
    (*p_22) = (safe_sub_func_uint8_t_u_u((l_539[9][2][0] && ((g_543 = l_540) != g_544)), func_58(p_23, (+((void*)0 == l_547[1])), p_22)));
    if (((-4L) > ((*l_540) == (void*)0)))
    {
        int *l_548 = &g_434[1];
        int **l_549 = &l_548;
        int *l_605 = &l_567;
        unsigned char ****l_629 = &l_542[2];
        (*l_549) = l_548;
        for (g_408 = 0; (g_408 <= 2); g_408 += 1)
        {
            int *****l_551 = &l_550;
            int *l_579 = (void*)0;
            int *l_589 = &g_40;
            unsigned l_606[1][8][4] = {{{0x6E8C288CL,4294967295UL,1UL,1UL},{1UL,1UL,0x6E8C288CL,1UL},{0UL,4294967295UL,0UL,0x6E8C288CL},{0UL,0x6E8C288CL,0x6E8C288CL,0UL},{1UL,0x6E8C288CL,1UL,0x6E8C288CL},{0x6E8C288CL,4294967295UL,1UL,1UL},{1UL,1UL,0x6E8C288CL,1UL},{0UL,4294967295UL,0UL,0x6E8C288CL}}};
            unsigned char ***l_615 = &l_540;
            unsigned short l_640[1];
            short l_641 = 0x211DL;
            unsigned l_654[5][10] = {{5UL,0x5192ADF2L,5UL,0UL,5UL,0x5192ADF2L,5UL,0UL,5UL,0x5192ADF2L},{0xFB3019EBL,0UL,0x6BC8BAFEL,0UL,0xFB3019EBL,0UL,0x6BC8BAFEL,0UL,0xFB3019EBL,0UL},{5UL,0UL,5UL,0x5192ADF2L,5UL,0UL,5UL,0x5192ADF2L,5UL,0UL},{0xFB3019EBL,0x5192ADF2L,0x6BC8BAFEL,0x5192ADF2L,0xFB3019EBL,0x5192ADF2L,0x6BC8BAFEL,0x5192ADF2L,0xFB3019EBL,0x5192ADF2L},{5UL,0x5192ADF2L,5UL,0UL,5UL,0x5192ADF2L,5UL,0UL,5UL,0x5192ADF2L}};
            int l_666 = 0x1C424F4CL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_640[i] = 0x9489L;
            if (((l_539[8][2][0] ^ func_58((((*l_551) = l_550) != &g_344[0]), (*l_548), p_22)) ^ (**l_549)))
            {
                p_22 = p_22;
            }
            else
            {
                short l_568 = 3L;
                unsigned char l_575 = 1UL;
                if (((*p_22) & (*p_22)))
                {
                    for (g_134 = 0; (g_134 <= 2); g_134 += 1)
                    {
                        return g_310;
                    }
                    return p_23;
                }
                else
                {
                    short l_560 = 0x9E8AL;
                    int l_569 = (-3L);
                    int l_578[6] = {0x40B099E0L,0x40B099E0L,0x40B099E0L,0x40B099E0L,0x40B099E0L,0x40B099E0L};
                    int i;
                    (**l_549) = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((~(*l_548)), 2)) == (safe_mul_func_uint8_t_u_u((p_23 | ((p_23 ^ (l_569 = (safe_add_func_uint8_t_u_u(l_560, (((*g_39) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_23, (p_23 & (l_567 = (safe_sub_func_uint16_t_u_u(p_23, 0x9AFDL)))))) == ((((g_84 && l_568) || (**l_549)) ^ 251UL) != l_560)), p_23))) || 4294967292UL))))) <= 6UL)), 0x17L))), 0x9CL));
                    for (g_134 = 3; (g_134 >= 0); g_134 -= 1)
                    {
                        char *l_574 = &g_20;
                        int **l_576 = (void*)0;
                        int l_577 = 1L;
                        int i;
                    }
                    if (l_578[5])
                        continue;
                }
            }
            for (g_134 = 2; (g_134 >= 0); g_134 -= 1)
            {
                unsigned l_582 = 0xCF90B337L;
                int l_583 = 1L;
                short *l_598 = (void*)0;
                unsigned char ****l_627 = &l_542[3];
                char l_642 = 0xB2L;
                unsigned *l_660[6][6];
                char *l_665 = &g_20;
                int l_667[1];
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_660[i][j] = &g_365;
                }
                for (i = 0; i < 1; i++)
                    l_667[i] = 0xAC0AFE8DL;
            }
        }
        p_22 = p_22;
    }
    else
    {
        char l_668 = (-5L);
        int *l_669 = &g_40;
        int **l_670[1];
        unsigned char ***l_734[7];
        int i;
        for (i = 0; i < 1; i++)
            l_670[i] = &g_264;
        for (i = 0; i < 7; i++)
            l_734[i] = &l_540;
        l_668 = ((*g_39) = (*l_604));
        p_22 = func_24(p_22, &l_567, func_24(p_22, p_22, l_669));
        if ((*p_22))
        {
            short l_671 = 0xC08FL;
            int l_686 = 0x15DBB841L;
            int *l_694 = (void*)0;
            int l_728 = 0x7C342005L;
            int *l_750 = &g_434[2];
            if (l_671)
            {
                unsigned l_679 = 18446744073709551611UL;
                unsigned char ****l_683[5] = {&l_542[2],&l_542[2],&l_542[2],&l_542[2],&l_542[2]};
                int l_684[10][5] = {{0x66A23586L,0xECC11D9EL,0x5D0A863BL,0x54B1E7EFL,(-9L)},{0xD54E4ED5L,1L,1L,0xD54E4ED5L,0L},{0xB528CAF1L,0x1CC4C995L,1L,0x1ED2E70AL,0x6BE1B5F3L},{0x1ED2E70AL,1L,0x5D0A863BL,0x66A23586L,1L},{0xECC11D9EL,0xB528CAF1L,0x1ED2E70AL,0x1ED2E70AL,0xB528CAF1L},{(-1L),0x6166A871L,0x9D366C1FL,0xD54E4ED5L,0xB528CAF1L},{1L,(-9L),0x1CC4C995L,0x54B1E7EFL,1L},{0x6166A871L,0x54B1E7EFL,0x99247601L,0x6BE1B5F3L,0x6BE1B5F3L},{1L,0x9D366C1FL,1L,0x99247601L,0L},{(-1L),0x9D366C1FL,0x66A23586L,0x6166A871L,(-9L)}};
                int l_691 = 1L;
                int i, j;
                for (l_567 = 0; (l_567 >= 0); l_567 -= 1)
                {
                    unsigned *l_678 = &g_365;
                    int l_680[2][8];
                    char *l_685[3][6][10] = {{{&g_20,&g_20,&g_20,&g_20,&l_668,(void*)0,&l_668,&g_20,(void*)0,&l_668},{&g_20,&l_668,(void*)0,&g_20,(void*)0,(void*)0,&g_20,&l_668,&l_668,&l_668},{&l_668,&l_668,&g_20,&g_20,&l_668,&l_668,(void*)0,&l_668,&g_20,&l_668},{&g_20,(void*)0,&l_668,&l_668,&g_20,&g_20,&l_668,&g_20,&l_668,(void*)0},{(void*)0,&l_668,&l_668,(void*)0,&l_668,&l_668,(void*)0,&g_20,&l_668,(void*)0},{(void*)0,(void*)0,&l_668,(void*)0,&l_668,(void*)0,(void*)0,&g_20,&l_668,&l_668}},{{&l_668,&l_668,&g_20,&g_20,&g_20,&g_20,&l_668,&l_668,&l_668,&g_20},{(void*)0,(void*)0,&g_20,(void*)0,&g_20,&g_20,&l_668,&g_20,&l_668,&g_20},{&l_668,(void*)0,&g_20,&g_20,(void*)0,&g_20,&l_668,&l_668,&l_668,(void*)0},{&g_20,&l_668,&g_20,&g_20,&l_668,&l_668,(void*)0,&g_20,&l_668,&l_668},{&l_668,(void*)0,&l_668,&l_668,&l_668,&l_668,&l_668,&g_20,&l_668,&l_668},{&g_20,&l_668,&l_668,&g_20,&g_20,(void*)0,(void*)0,&g_20,(void*)0,&g_20}},{{&l_668,&g_20,&g_20,&g_20,&l_668,&l_668,&l_668,(void*)0,&l_668,(void*)0},{&l_668,&l_668,&l_668,&l_668,&l_668,&l_668,&l_668,&l_668,&l_668,&l_668},{&g_20,&l_668,&l_668,&g_20,(void*)0,&g_20,&l_668,&l_668,&g_20,&l_668},{(void*)0,&l_668,&l_668,&g_20,&l_668,(void*)0,&g_20,&l_668,&l_668,&g_20},{(void*)0,&l_668,&g_20,&g_20,&g_20,(void*)0,&l_668,&l_668,&g_20,&l_668},{&l_668,&l_668,(void*)0,&g_20,&l_668,(void*)0,&l_668,(void*)0,&l_668,(void*)0}}};
                    unsigned *l_687 = &g_688;
                    unsigned *l_689 = &g_690;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_680[i][j] = (-1L);
                    }
                    (*g_607) = ((*p_22) = (func_58(((safe_lshift_func_uint16_t_u_s((g_546[(l_567 + 2)] && ((safe_add_func_uint32_t_u_u(((*l_689) = ((*l_687) = ((safe_sub_func_uint16_t_u_u((l_680[1][7] = (l_679 = ((*p_22) ^ ((*l_678) = (~4294967286UL))))), (safe_add_func_uint32_t_u_u((l_683[0] != &l_542[2]), l_671)))) ^ (0x39L || (l_686 = (l_684[9][4] = l_684[9][0])))))), l_691)) | g_546[(l_567 + 2)])), p_23)) || l_686), p_23, p_22) & 4294967293UL));
                }
                for (l_567 = 3; (l_567 >= 0); l_567 -= 1)
                {
                    unsigned l_692 = 0UL;
                    int *l_693[4][7] = {{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&g_178,&l_691,&g_178,&l_691,&g_178,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&g_178,&l_691,&g_178,&l_691,&g_178,&l_691}};
                    int i, j;
                    if ((*p_22))
                        break;
                    (*g_39) = l_692;
                    l_693[0][2] = p_22;
                    l_694 = &l_686;
                    for (g_79 = 0; (g_79 <= 2); g_79 += 1)
                    {
                        l_603 = (p_22 = p_22);
                        if ((*l_694))
                            continue;
                    }
                }
                p_22 = (void*)0;
            }
            else
            {
                int *l_695[6] = {(void*)0,&l_686,&l_686,(void*)0,&l_686,&g_40};
                int i;
                l_695[2] = func_41((**g_544), p_22, (l_695[5] = p_22));
                (*p_22) = (safe_unary_minus_func_uint8_t_u((((*l_603) = p_23) ^ (safe_mod_func_uint16_t_u_u(65532UL, g_134)))));
            }
            if ((l_699 & g_365))
            {
                for (g_84 = 0; (g_84 <= 0); g_84 += 1)
                {
                    if (p_23)
                        break;
                    for (l_668 = 0; (l_668 <= 0); l_668 += 1)
                    {
                        int i, j;
                        (*l_603) = g_115[l_668][g_84];
                    }
                }
            }
            else
            {
                char *l_706 = (void*)0;
                char *l_707 = &g_20;
                int l_708 = 0x57750AB5L;
                unsigned short **l_709[10][10] = {{&l_547[0],&l_547[0],&g_263[0],(void*)0,&g_263[0],&l_547[1],&g_263[0],&l_547[0],&l_547[1],&l_547[1]},{&l_547[1],&g_263[0],&l_547[0],&l_547[1],&l_547[1],&l_547[0],&g_263[0],&l_547[1],&g_263[0],(void*)0},{&g_263[0],&l_547[0],(void*)0,&g_263[0],&l_547[1],&l_547[1],&g_263[0],&g_263[0],&l_547[1],&l_547[1]},{&l_547[1],(void*)0,(void*)0,&l_547[1],&g_263[0],&g_263[0],&l_547[0],&l_547[1],&l_547[0],&g_263[0]},{&l_547[1],&l_547[0],&l_547[0],(void*)0,&l_547[1],&l_547[1],(void*)0,&l_547[0],&l_547[0],&l_547[1]},{&g_263[0],&g_263[0],&g_263[0],&l_547[1],&l_547[0],&l_547[0],(void*)0,&l_547[1],&l_547[1],(void*)0},{&l_547[1],&l_547[0],&g_263[0],&g_263[0],&l_547[0],&l_547[1],&l_547[0],&g_263[0],&g_263[0],&l_547[1]},{&l_547[0],(void*)0,&g_263[0],&l_547[1],&l_547[1],&g_263[0],&g_263[0],&l_547[1],&l_547[1],&g_263[0]},{&l_547[0],&l_547[0],&g_263[0],(void*)0,&g_263[0],&l_547[1],&g_263[0],&l_547[0],&l_547[1],&l_547[1]},{&l_547[1],&g_263[0],&l_547[0],&l_547[1],&l_547[1],&l_547[0],&g_263[0],&l_547[1],&g_263[0],(void*)0}};
                unsigned short ***l_710 = &l_709[8][0];
                unsigned *l_715 = &g_365;
                int *l_719 = &l_708;
                int i, j;
                (*g_39) = (safe_rshift_func_uint16_t_u_u((((*l_669) = ((*g_607) < p_23)) || (safe_rshift_func_int8_t_s_s(0x9AL, ((*l_707) = (safe_add_func_int8_t_s_s(p_23, (-1L))))))), (l_708 = (*l_604))));
                (*g_607) = func_58((&l_547[1] != ((*l_710) = l_709[8][0])), (p_23 = ((*l_715) = (safe_rshift_func_uint16_t_u_s((g_630[1][0][1] <= (safe_mod_func_int32_t_s_s(l_708, l_708))), p_23)))), func_41((((l_708 > (g_115[5][0] != (l_708 & (-3L)))) < 0UL) == 0x82L), p_22, g_716));
                if (((*g_607) = l_708))
                {
                    unsigned l_720 = 4294967294UL;
                    unsigned char *l_725 = &g_115[5][0];
                    unsigned short **l_726[7] = {&g_263[0],&g_263[0],&g_263[0],&g_263[0],&g_263[0],&g_263[0],&g_263[0]};
                    int *l_727 = &g_434[1];
                    int i;
                    for (g_109 = (-7); (g_109 <= 46); g_109 = safe_add_func_uint8_t_u_u(g_109, 6))
                    {
                        l_719 = p_22;
                        if (l_720)
                            continue;
                        (*g_607) = (*l_603);
                    }
                    l_728 = (safe_mod_func_uint8_t_u_u((*l_669), func_58(((safe_rshift_func_uint16_t_u_s((l_725 == l_706), 2)) > ((void*)0 != l_726[1])), (*l_669), l_727)));
                }
                else
                {
                    char l_738 = 0x3AL;
                    if ((*l_719))
                    {
                        int *l_729 = (void*)0;
                        (*l_603) = ((*l_610) == &g_134);
                        l_719 = func_41(p_23, p_22, l_729);
                    }
                    else
                    {
                        l_719 = p_22;
                        (*l_603) = (safe_add_func_int16_t_s_s((0x4A46L || func_58((*l_603), (safe_add_func_int8_t_s_s(g_546[2], (((void*)0 == l_734[4]) <= l_735))), p_22)), ((((*l_715) = (g_365 >= 1UL)) == p_23) ^ 1UL)));
                    }
                    p_22 = p_22;
                    l_604 = &l_708;
                    for (l_735 = 0; (l_735 <= 31); l_735++)
                    {
                        (*l_669) = ((*g_607) || ((0xDFDFL <= (l_738 = (-7L))) < g_240));
                        return g_546[2];
                    }
                }
            }
            if (p_23)
            {
                (*g_607) = (*l_669);
            }
            else
            {
                unsigned *l_744 = &g_365;
                int l_745 = (-8L);
                unsigned short l_748 = 0x0480L;
                (*l_603) = (!(*l_603));
                l_747 = &l_745;
                p_22 = &l_686;
                if ((l_748 != p_23))
                {
                    unsigned short l_749 = 0x6282L;
                    l_747 = (void*)0;
                    if (l_749)
                    {
                        p_22 = l_750;
                        return p_23;
                    }
                    else
                    {
                        (*g_39) = (*g_607);
                        (*l_750) = (p_23 >= 0xAD31C2B0L);
                        (*p_22) = (*p_22);
                    }
                }
                else
                {
                    int *l_753 = &g_434[1];
                    for (l_686 = 8; (l_686 != 6); l_686 = safe_sub_func_uint32_t_u_u(l_686, 6))
                    {
                        p_22 = (l_603 = p_22);
                        (*l_747) = (*l_669);
                        l_753 = p_22;
                    }
                }
            }
        }
        else
        {
            int *l_777[2][7][6] = {{{&g_178,&g_40,&g_178,&g_434[1],&g_178,&g_434[1]},{(void*)0,&g_434[1],(void*)0,&g_178,&g_178,(void*)0},{&g_434[3],&g_434[3],&g_40,&g_178,&g_434[1],&g_434[1]},{(void*)0,&g_40,&g_434[1],&g_434[1],&g_434[1],&g_40},{&g_178,(void*)0,&g_434[1],&g_434[3],&g_434[3],&g_434[1]},{(void*)0,&g_434[3],&g_40,&g_40,&g_434[3],(void*)0},{&g_40,&g_434[3],(void*)0,&g_178,&g_434[3],&g_434[1]}},{{&g_434[1],(void*)0,&g_178,(void*)0,&g_434[1],&g_434[3]},{&g_434[1],&g_40,(void*)0,&g_178,&g_434[1],&g_434[1]},{&g_40,&g_434[3],&g_434[3],&g_40,&g_178,&g_434[1]},{(void*)0,&g_434[1],(void*)0,&g_434[3],&g_178,&g_434[3]},{&g_178,&g_40,&g_178,&g_434[1],&g_178,&g_434[1]},{(void*)0,&g_434[1],(void*)0,&g_178,&g_178,(void*)0},{&g_434[3],&g_434[3],&g_40,&g_178,&g_434[1],&g_40}}};
            int i, j, k;
            if ((*l_669))
            {
                (*p_22) = (safe_rshift_func_uint8_t_u_u((&g_134 == ((*l_610) = &g_116)), 7));
                for (g_408 = 0; (g_408 <= 7); g_408 += 1)
                {
                    unsigned short l_770[2][3][10] = {{{1UL,1UL,0x0640L,1UL,1UL,0x0640L,1UL,1UL,0x0640L,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL}},{{1UL,1UL,0x0640L,1UL,1UL,0x0640L,1UL,1UL,0x0640L,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL}}};
                    int i, j, k;
                    if (((-5L) && 0x22AF5393L))
                    {
                        int i;
                        return g_434[g_408];
                    }
                    else
                    {
                        int ****l_759 = (void*)0;
                        (*l_604) = ((safe_mod_func_int32_t_s_s(((func_58((0x23L != p_23), (((*l_550) = g_758) != (g_761 = (g_760 = &g_77))), p_22) >= (l_770[1][0][7] = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0x9A1EL, (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((p_23 <= p_23), 0x16A3D84DL)), p_23)))), 1L)))) > 0x6772L), (*p_22))) > 0L);
                    }
                }
                return g_310;
            }
            else
            {
                int *l_780 = &g_434[1];
                for (g_20 = 0; (g_20 == (-23)); g_20--)
                {
                    for (l_741 = 0; (l_741 != 22); l_741 = safe_add_func_int32_t_s_s(l_741, 3))
                    {
                        unsigned *l_779 = &g_690;
                        unsigned **l_778 = &l_779;
                        (*l_603) = (p_23 >= (g_134 >= p_23));
                        (*p_22) = (safe_add_func_int32_t_s_s((&p_23 != ((*l_778) = func_41(p_23, l_777[1][5][3], l_777[0][4][0]))), p_23));
                        return p_23;
                    }
                }
                l_780 = func_24(p_22, p_22, l_780);
                p_22 = (void*)0;
                l_780 = p_22;
            }
        }
    }
    return p_23;
}







static int * func_24(int * p_25, int * p_26, int * p_27)
{
    int ****l_345 = &g_344[4];
    int ***l_347 = &g_77;
    int ****l_346 = &l_347;
    int l_348 = 5L;
    char *l_361[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned *l_362 = (void*)0;
    unsigned *l_363 = (void*)0;
    unsigned *l_364 = &g_365;
    unsigned short **l_444 = &g_263[0];
    unsigned char l_468 = 0xCEL;
    unsigned short l_469 = 0x27BFL;
    int l_495 = 0x7B641124L;
    int *l_536 = &g_434[1];
    int i;
    if (((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((!(safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((*l_345) = g_344[0]) == ((*l_346) = &g_77)), 1)), (((*l_364) = ((((l_348 ^ func_58((safe_mul_func_int8_t_s_s((l_348 < (g_20 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_348, (safe_sub_func_int8_t_s_s((4L && (safe_add_func_uint32_t_u_u((0xC4L ^ g_109), (!(safe_rshift_func_int16_t_s_s(l_348, 11)))))), l_348)))), 0xEBL)))), g_79)), g_115[1][0], p_25)) && 0L) > (-4L)) || l_348)) != l_348)))), 5L)) ^ l_348), 0x28F6ADE8L)) || g_365))
    {
        int l_372 = 0xA611D425L;
        int *l_385 = &g_40;
        int l_447 = (-1L);
        for (g_365 = (-5); (g_365 <= 3); ++g_365)
        {
            unsigned l_381 = 0xC6E5AD4DL;
            int *l_388 = &g_40;
            unsigned l_435 = 0x2904C3FDL;
            for (g_40 = 0; (g_40 > 19); g_40 = safe_add_func_int32_t_s_s(g_40, 9))
            {
                int l_382[7][5][1] = {{{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)}},{{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL}},{{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)}},{{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL}},{{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)}},{{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL}},{{(-3L)},{0x072FBC8BL},{(-3L)},{0x072FBC8BL},{(-3L)}}};
                int *l_386 = (void*)0;
                unsigned short *l_415 = &g_84;
                int l_433 = 0x66EDA780L;
                int l_462 = 0xBC8FD949L;
                int i, j, k;
            }
            for (g_134 = 0; (g_134 <= 4); g_134 += 1)
            {
                short l_470 = 0x3B51L;
                int l_516 = 0x6209BC14L;
                if (l_469)
                {
                    unsigned l_475 = 0UL;
                    if (l_470)
                        break;
                    if (l_470)
                    {
                        if ((*g_39))
                            break;
                    }
                    else
                    {
                        unsigned short *l_482 = &g_84;
                        int l_483 = (-1L);
                        int l_484 = 9L;
                        int **l_485 = &g_335[5];
                        int i;
                        (*l_388) = ((p_25 != (void*)0) | ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_240, l_475)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((!((*l_482) = 0xC542L)) > ((*g_309) || g_115[2][0])) || g_40), (l_483 = l_470))), 1)), l_484)))) <= l_470));
                        if (l_475)
                            break;
                        (*l_485) = p_25;
                        (*l_388) = (*p_27);
                    }
                }
                else
                {
                    int *l_502 = &g_434[4];
                    for (g_79 = 0; (g_79 <= 4); g_79 += 1)
                    {
                        int *l_486[5];
                        int **l_487 = &g_335[5];
                        short *l_488 = &g_116;
                        unsigned char *l_496 = &l_468;
                        unsigned char *l_501 = &g_109;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_486[i] = &l_447;
                        (*l_487) = func_41((*l_385), l_486[3], func_41(l_470, ((*l_487) = func_41(((*l_385) == g_434[1]), l_388, p_26)), p_26));
                        (*l_487) = l_388;
                        (*l_487) = p_26;
                        (*l_487) = (l_502 = func_41(l_470, func_28(((*l_488) = (*l_385)), func_41((safe_mul_func_uint8_t_u_u(((*l_501) = ((((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*p_27), l_495)), ((*l_496) = (*l_385)))) || ((*l_496) = (+((*l_388) | (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 == p_25), (0xBFL <= (-5L)))), 0x31L)))))) < (*l_385)) < g_365)), 0x1BL)), &l_447, p_25)), p_26));
                    }
                }
                for (g_178 = 0; (g_178 <= 4); g_178 += 1)
                {
                    short *l_507 = (void*)0;
                    short *l_508 = &l_470;
                    int l_515 = 0L;
                    (*l_388) = (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((*l_508) = g_115[1][0]), (safe_lshift_func_uint8_t_u_s(g_178, (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((3UL && (g_20 = g_310)), (l_515 < l_516))), 6)))))), 2));
                    (*l_388) = 0x513F74BDL;
                    (*l_385) = (safe_rshift_func_uint16_t_u_u((*g_309), (l_470 > (*g_39))));
                }
                for (l_516 = 0; (l_516 <= 4); l_516 += 1)
                {
                    unsigned l_519 = 0xE2122529L;
                    int *l_535 = (void*)0;
                    (*p_27) = l_519;
                    for (l_468 = 0; (l_468 <= 2); l_468 += 1)
                    {
                        int **l_520 = &l_388;
                        unsigned short *l_529 = &g_408;
                        unsigned short *l_534 = &g_84;
                        int i;
                        (*l_520) = &l_516;
                        (*l_520) = l_388;
                        (*p_27) = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_115[1][0], (((**l_520) | (((safe_rshift_func_int8_t_s_s((-8L), 0)) >= (g_134 & ((*l_529) = 1UL))) || (*l_385))) != (safe_lshift_func_int8_t_s_s(0L, (g_79 ^ ((safe_rshift_func_uint16_t_u_s(((*l_534) = 0UL), 5)) < g_115[1][0]))))))), g_434[5])) && l_519), (*l_385)));
                        (*l_520) = l_535;
                    }
                    if ((*p_27))
                        continue;
                    p_27 = p_27;
                }
                return l_536;
            }
        }
    }
    else
    {
        return p_27;
    }
    return p_27;
}







static int * func_28(short p_29, int * p_30)
{
    int *l_333[1];
    int i;
    for (i = 0; i < 1; i++)
        l_333[i] = &g_178;
    (*p_30) = (+(g_134 ^ p_29));
    return l_333[0];
}







static int * func_32(unsigned char p_33, short p_34, int * p_35, short p_36)
{
    int **l_52 = &g_39;
    unsigned short l_55 = 65535UL;
    short l_265 = 6L;
    short *l_266 = (void*)0;
    short *l_267 = &g_116;
    (*l_52) = func_41(((g_20 | ((((safe_unary_minus_func_int32_t_s(((g_40 <= ((*l_267) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x0CL, (safe_mod_func_int32_t_s_s((-3L), ((((*l_52) = &g_40) != (void*)0) | ((safe_lshift_func_int16_t_s_u((l_55 = (g_40 == 4294967292UL)), 0)) < (safe_sub_func_int8_t_s_s(func_58(g_40, p_33, p_35), l_265)))))))), 0xACL)))) | p_36))) && p_34) ^ 9L) >= p_34)) || (-10L)), &g_40, p_35);
    for (g_116 = 11; (g_116 == 27); g_116 = safe_add_func_uint16_t_u_u(g_116, 8))
    {
        unsigned l_282 = 18446744073709551610UL;
        unsigned l_329 = 0x23B0FC7DL;
        for (g_240 = 0; (g_240 == (-4)); g_240--)
        {
            unsigned short *l_281 = &g_84;
            short *l_283 = &l_265;
            int *l_285 = &g_178;
            unsigned l_315 = 4UL;
            (*l_52) = func_41(g_84, (*l_52), p_35);
            if ((safe_add_func_uint8_t_u_u(p_36, ((g_158 > (&p_36 != (void*)0)) == (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((*l_281) = (**l_52)), 8)) < g_178), l_282)) ^ ((*l_283) = ((**l_52) || (**l_52)))), p_36))))))
            {
                unsigned char l_284 = 0x1DL;
                for (g_109 = 0; (g_109 <= 0); g_109 += 1)
                {
                    int i, j;
                    if (g_115[(g_109 + 2)][g_109])
                        break;
                    if ((*p_35))
                        continue;
                    if ((*g_39))
                    {
                        l_284 = 0xF70EE47BL;
                        if ((**l_52))
                            break;
                    }
                    else
                    {
                        (*l_52) = l_285;
                        (*l_285) = (*g_39);
                        (*l_285) = (*p_35);
                        (*l_285) = (*p_35);
                    }
                }
            }
            else
            {
                unsigned short l_296[8] = {65527UL,1UL,65527UL,1UL,65527UL,1UL,65527UL,1UL};
                int l_322 = (-1L);
                int i;
                (*g_39) = (*l_285);
                if ((safe_add_func_uint32_t_u_u(p_36, 4UL)))
                {
                    (*p_35) = (((*l_285) < ((safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((**l_52), ((*l_285) ^ g_115[1][0]))) != 0L) <= (*p_35)), 3)) | (safe_mul_func_uint8_t_u_u(p_34, ((safe_add_func_int8_t_s_s(l_296[1], l_296[1])) & (*l_285)))))) < (-1L));
                }
                else
                {
                    unsigned short **l_311 = (void*)0;
                    unsigned short ***l_312 = (void*)0;
                    unsigned char *l_323 = &g_109;
                    (*l_285) = ((safe_sub_func_int8_t_s_s((p_33 || p_36), (+(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_296[1], g_303)), ((**l_52) > 0xE4A95572L)))))) >= (*l_285));
                    (*p_35) = (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_308[2][0] == (l_311 = l_311)), ((&l_265 == (void*)0) && (+(safe_mod_func_uint8_t_u_u((((*l_281) = l_315) >= (((*l_323) = (safe_mod_func_int8_t_s_s((0x62L < 0x0CL), (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((**l_52), ((l_322 = (**l_52)) == g_303))), 5))))) & 0x5FL)), g_79)))))), (*l_285)));
                }
                for (g_79 = (-30); (g_79 <= 8); g_79 = safe_add_func_uint16_t_u_u(g_79, 6))
                {
                }
                (*l_52) = (*l_52);
            }
        }
        for (p_36 = 0; (p_36 > 8); p_36 = safe_add_func_uint16_t_u_u(p_36, 4))
        {
            if ((*p_35))
                break;
        }
    }
    return p_35;
}







static int * func_41(unsigned char p_42, int * p_43, int * p_44)
{
    int *l_268 = &g_178;
    return l_268;
}







static char func_58(unsigned char p_59, unsigned p_60, int * p_61)
{
    unsigned l_68 = 0xD794A3CEL;
    for (p_60 = 2; (p_60 > 36); p_60 = safe_add_func_int16_t_s_s(p_60, 5))
    {
        unsigned char l_69 = 0UL;
        p_61 = func_64(g_20, (l_69 = l_68), &g_40);
        if ((*p_61))
            break;
    }
    return g_109;
}







static int * func_64(unsigned p_65, unsigned p_66, int * p_67)
{
    unsigned l_76 = 0x2C9D536CL;
    unsigned char *l_78 = &g_79;
    int l_89[7][10][2] = {{{0x5AD8B3B4L,0xC3E41A78L},{(-1L),5L},{0L,0x7473AC07L},{(-4L),0x104D5A1AL},{0xA03F7513L,(-1L)},{0x720AF826L,(-1L)},{0xBC132C98L,1L},{1L,(-4L)},{1L,(-1L)},{(-1L),0x75BC6281L}},{{0xA8832714L,(-3L)},{(-9L),7L},{0xB1ADF13FL,0x62C3DCCDL},{0x104D5A1AL,(-1L)},{1L,(-6L)},{0x9F9A51C3L,0xA8832714L},{0x25F1A37CL,0xA8832714L},{0x9F9A51C3L,(-6L)},{1L,(-1L)},{0x104D5A1AL,0x62C3DCCDL}},{{0xB1ADF13FL,7L},{(-9L),(-3L)},{0xA8832714L,0x75BC6281L},{(-1L),(-1L)},{1L,(-4L)},{1L,1L},{0xBC132C98L,(-1L)},{0x720AF826L,(-1L)},{0xA03F7513L,0x104D5A1AL},{(-4L),0x7473AC07L}},{{0L,5L},{(-1L),0xC3E41A78L},{0x5AD8B3B4L,1L},{0L,(-10L)},{(-1L),0x5AD8B3B4L},{7L,(-1L)},{0xB8BE448DL,(-1L)},{5L,0x29B2AB39L},{0xAC45F480L,(-1L)},{(-1L),0xBC132C98L}},{{0x87E9A86FL,0x05EE192EL},{(-2L),(-2L)},{9L,4L},{(-1L),(-3L)},{0L,(-4L)},{0x06974D82L,0L},{(-6L),0L},{(-6L),0L},{0x06974D82L,(-4L)},{0L,(-3L)}},{{(-1L),4L},{9L,(-2L)},{(-2L),0x05EE192EL},{(-1L),(-1L)},{0x17F253ABL,(-1L)},{(-1L),5L},{0xD4865626L,0L},{(-1L),(-1L)},{0x62C3DCCDL,1L},{0x2AEC61BCL,(-1L)}},{{(-10L),7L},{1L,(-1L)},{0xB8BE448DL,0x46B6AB56L},{(-3L),0x87E9A86FL},{0xBC132C98L,0x9F9A51C3L},{5L,(-6L)},{(-3L),0xB1ADF13FL},{(-1L),0xAC45F480L},{0x5AD8B3B4L,0xBC132C98L},{7L,8L}}};
    int l_94 = 0x67D4ADD7L;
    unsigned short l_97 = 0xAF2CL;
    char l_113 = 0x98L;
    unsigned l_162 = 0x3375787EL;
    int **l_245 = (void*)0;
    int i, j, k;
    l_89[5][5][1] = (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_65, (p_65 || (safe_mod_func_int8_t_s_s((((*p_67) < (l_76 || (((*l_78) = ((void*)0 != g_77)) && (safe_sub_func_uint16_t_u_u(l_76, ((((g_84 = (safe_rshift_func_uint8_t_u_u(p_65, 1))) <= (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(l_76, p_66)), 6))) <= g_40) & p_66)))))) <= (*p_67)), g_20))))) <= (*p_67)), g_20)) | 1L) | g_40);
    for (g_79 = 0; (g_79 > 6); ++g_79)
    {
        char l_110[3][5][7] = {{{1L,0x1CL,(-1L),(-1L),0x1CL,1L,1L},{0x79L,1L,7L,(-8L),0x73L,0x82L,0xBAL},{0xCAL,1L,(-1L),0x73L,0L,0L,0x79L},{7L,1L,1L,0x15L,0xCAL,0xBCL,0L},{(-9L),0x1CL,0x65L,(-9L),0x73L,(-5L),(-1L)}},{{(-1L),0x15L,7L,0x3DL,0L,0L,0x3DL},{1L,0xCAL,1L,0x38L,0xACL,0x15L,0xBCL},{0xCAL,(-9L),(-1L),(-1L),0x73L,0xCCL,(-8L)},{0xACL,(-1L),7L,1L,1L,0x15L,0xCAL},{(-1L),0xACL,0L,0x15L,0x06L,0L,(-1L)}},{{(-9L),(-9L),0L,(-8L),0xBAL,0x65L,1L},{(-9L),0L,1L,0xACL,1L,0L,(-9L)},{(-1L),0x1CL,1L,1L,0xACL,(-5L),0L},{0xACL,(-9L),(-5L),0x06L,(-9L),0L,1L},{0xCAL,0x15L,1L,1L,7L,(-1L),0xACL}}};
        int l_117 = 0L;
        short l_145 = (-1L);
        int i, j, k;
        for (p_66 = 0; (p_66 == 2); p_66 = safe_add_func_int8_t_s_s(p_66, 8))
        {
            int *l_107 = &l_89[5][5][1];
            int **l_106 = &l_107;
            unsigned short *l_108[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned char *l_114 = &g_115[1][0];
            int *l_118 = &l_89[1][2][0];
            int i;
            (*l_118) = (l_117 = ((l_94 >= (safe_add_func_int8_t_s_s(l_97, g_20))) <= (p_65 == ((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_84, ((*l_114) = (safe_mul_func_uint16_t_u_u(g_79, (((l_110[0][4][0] = (g_109 = (((*l_106) = p_67) == (void*)0))) | ((safe_rshift_func_int16_t_s_s((g_40 < l_113), 0)) ^ g_84)) < g_40)))))) > l_76), 3)) < 9L), g_116)) == 0xCED5L))));
            (*l_118) = (safe_rshift_func_int16_t_s_s(g_116, 13));
            (*l_106) = &l_117;
        }
        for (p_66 = 0; (p_66 <= 1); p_66 += 1)
        {
            int *l_122 = (void*)0;
            int **l_121 = &l_122;
            unsigned l_136 = 0x56C07334L;
            if (l_117)
            {
                int ***l_123 = &g_77;
                if ((l_121 != ((*l_123) = g_77)))
                {
                    int *l_124 = &l_117;
                    char *l_127 = &l_113;
                    l_124 = l_124;
                    (*l_124) = ((safe_sub_func_int8_t_s_s(0xC5L, ((*l_127) = (-9L)))) == g_79);
                    return p_67;
                }
                else
                {
                    unsigned char *l_130 = (void*)0;
                    unsigned char *l_131 = &g_115[1][0];
                    int *l_132 = (void*)0;
                    int *l_133 = &l_94;
                    (*l_133) = (l_76 == (safe_rshift_func_uint8_t_u_u((0UL && p_66), (p_65 != ((((*l_131) = g_116) == l_76) > 0x2D76B487L)))));
                    g_134 = (*p_67);
                }
                for (l_117 = 1; (l_117 >= 0); l_117 -= 1)
                {
                    int i, j, k;
                    if (l_89[(l_117 + 4)][(p_66 + 8)][p_66])
                    {
                        int *l_135 = (void*)0;
                        int *l_137 = &l_89[(l_117 + 5)][(l_117 + 2)][l_117];
                        int i, j, k;
                        (*l_121) = l_135;
                        l_89[(l_117 + 5)][(l_117 + 2)][l_117] = (0xFD6875ADL ^ (*p_67));
                        (*l_137) = (l_136 = ((g_84 ^ 0xFDCCL) | (-6L)));
                    }
                    else
                    {
                        (*l_121) = &l_89[(l_117 + 4)][(p_66 + 8)][p_66];
                    }
                    l_89[(l_117 + 4)][(p_66 + 8)][p_66] = g_40;
                    (*l_121) = p_67;
                }
                for (l_136 = 0; (l_136 > 54); l_136 = safe_add_func_int8_t_s_s(l_136, 8))
                {
                    short l_140 = 0xEC9AL;
                    short *l_148 = (void*)0;
                    short *l_149 = &g_134;
                    short *l_150 = &g_116;
                    int *l_151 = &l_89[5][5][1];
                    l_117 = l_140;
                    (*l_121) = (void*)0;
                    (*l_151) = (((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(l_140, 2)) || (0xB3L < (0x0EL || (l_145 >= p_65)))) | (p_66 != (safe_rshift_func_uint16_t_u_s(0x047DL, ((*l_150) = ((*l_149) = p_65)))))), g_84)) && 251UL) == 0x2DL);
                }
            }
            else
            {
                l_89[5][5][1] = g_20;
            }
        }
    }
    for (g_134 = 0; (g_134 <= 1); g_134 += 1)
    {
        int *l_168[8][3] = {{&l_89[3][4][0],&l_89[2][2][0],&l_89[5][5][1]},{&l_89[3][4][0],&l_89[3][6][0],&l_89[5][5][1]},{&l_89[5][5][1],&g_40,&l_89[5][5][1]},{&l_89[5][5][1],&l_89[3][6][0],&l_89[3][4][0]},{&l_89[5][5][1],&l_89[2][2][0],&l_89[3][4][0]},{&l_89[5][5][1],&l_89[5][5][1],&l_89[5][5][1]},{&l_89[2][6][1],&l_89[3][6][0],&l_89[5][5][1]},{&l_89[5][5][1],&l_89[5][5][1],&l_89[2][6][1]}};
        int l_201 = (-10L);
        int l_203[2];
        unsigned l_205[1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_203[i] = 0x409F4FCCL;
        for (i = 0; i < 1; i++)
            l_205[i] = 4294967289UL;
        for (g_79 = 0; g_79 < 7; g_79 += 1)
        {
            for (g_84 = 0; g_84 < 10; g_84 += 1)
            {
                for (p_66 = 0; p_66 < 2; p_66 += 1)
                {
                    l_89[g_79][g_84][p_66] = 1L;
                }
            }
        }
        if ((0xBCL && ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_115[1][0], g_84)), 15)) != g_20)))
        {
            int *l_165 = &g_40;
            g_158 = 0L;
            if (g_115[1][0])
            {
                int l_163 = 0L;
                for (g_116 = 1; (g_116 >= 0); g_116 -= 1)
                {
                    for (g_84 = 0; (g_84 <= 1); g_84 += 1)
                    {
                        int *l_164 = &l_94;
                        int **l_166 = (void*)0;
                        int **l_167 = &l_164;
                        int i, j, k;
                        l_89[(g_134 + 5)][(g_116 + 2)][g_116] = l_89[(g_116 + 5)][(g_134 + 6)][g_84];
                        (*l_164) = (l_89[(g_84 + 1)][(g_116 + 4)][g_116] = (safe_unary_minus_func_int8_t_s(((p_66 == ((safe_mul_func_uint8_t_u_u(l_162, l_163)) > 65535UL)) ^ (*p_67)))));
                        (*l_167) = l_165;
                    }
                    l_168[1][2] = l_165;
                    for (l_163 = 0; (l_163 <= 1); l_163 += 1)
                    {
                        unsigned char l_169 = 0xEBL;
                        unsigned *l_170 = (void*)0;
                        unsigned *l_171 = (void*)0;
                        unsigned *l_172 = (void*)0;
                        unsigned *l_173[6][5][7] = {{{(void*)0,&l_162,&l_162,&l_162,&l_162,&l_76,&l_162},{&l_76,(void*)0,&l_162,&l_162,(void*)0,&l_76,&l_76},{(void*)0,(void*)0,&l_76,&l_162,(void*)0,(void*)0,&l_162},{&l_76,&l_76,&l_162,(void*)0,&l_76,&l_76,&l_76},{&l_76,(void*)0,&l_162,&l_162,(void*)0,&l_76,(void*)0}},{{&l_76,(void*)0,&l_76,(void*)0,(void*)0,&l_162,&l_76},{(void*)0,&l_162,&l_162,&l_162,&l_162,&l_76,&l_162},{&l_76,(void*)0,&l_162,&l_162,(void*)0,&l_76,&l_76},{(void*)0,(void*)0,&l_76,&l_162,(void*)0,(void*)0,&l_162},{&l_76,&l_76,&l_162,(void*)0,&l_76,&l_76,&l_76}},{{&l_76,(void*)0,&l_162,&l_162,(void*)0,&l_76,(void*)0},{&l_76,(void*)0,&l_76,(void*)0,(void*)0,&l_162,&l_76},{(void*)0,&l_162,&l_162,&l_162,&l_162,&l_76,&l_162},{(void*)0,&l_162,&l_76,&l_76,&l_162,(void*)0,&l_162},{&l_162,&l_76,&l_76,(void*)0,&l_76,&l_162,&l_162}},{{&l_76,&l_76,&l_76,(void*)0,&l_76,(void*)0,(void*)0},{&l_76,&l_76,&l_162,&l_162,&l_76,&l_76,&l_162},{&l_76,&l_162,&l_162,(void*)0,&l_162,&l_162,(void*)0},{&l_162,&l_76,&l_162,(void*)0,&l_76,&l_76,&l_162},{(void*)0,&l_162,&l_76,&l_76,&l_162,(void*)0,&l_162}},{{&l_162,&l_76,&l_76,(void*)0,&l_76,&l_162,&l_162},{&l_76,&l_76,&l_76,(void*)0,&l_76,(void*)0,(void*)0},{&l_76,&l_76,&l_162,&l_162,&l_76,&l_76,&l_162},{&l_76,&l_162,&l_162,(void*)0,&l_162,&l_162,(void*)0},{&l_162,&l_76,&l_162,(void*)0,&l_76,&l_76,&l_162}},{{(void*)0,&l_162,&l_76,&l_76,&l_162,(void*)0,&l_162},{&l_162,&l_76,&l_76,(void*)0,&l_162,&l_76,&l_162},{&l_76,&l_76,&l_76,&l_76,&l_76,&l_162,&l_162},{&l_76,&l_162,&l_162,&l_162,&l_162,&l_76,(void*)0},{&l_76,&l_162,&l_76,&l_76,&l_162,&l_162,&l_162}}};
                        int i, j, k;
                        l_89[(g_116 + 4)][(l_163 + 6)][g_134] = ((p_66 = (3L && ((*l_78) = l_169))) != (*p_67));
                    }
                }
            }
            else
            {
                int *l_177 = &g_40;
                for (l_76 = 0; (l_76 <= 0); l_76 += 1)
                {
                    int *l_175 = &l_94;
                    int i, j;
                }
            }
        }
        else
        {
            int *l_204 = &l_201;
            l_204 = p_67;
        }
        if (l_205[0])
            continue;
        for (l_97 = 0; (l_97 <= 0); l_97 += 1)
        {
            l_89[5][5][1] = (*p_67);
            for (g_109 = 0; (g_109 <= 0); g_109 += 1)
            {
                int **l_206[6][5][2] = {{{&l_168[1][2],&l_168[1][2]},{&l_168[1][2],&l_168[1][2]},{&l_168[7][0],&l_168[5][0]},{&l_168[1][2],&l_168[7][0]},{&l_168[1][2],&l_168[1][2]}},{{&l_168[5][1],&l_168[5][0]},{&l_168[5][0],&l_168[5][1]},{&l_168[1][2],&l_168[1][2]},{&l_168[7][0],&l_168[1][2]},{&l_168[5][0],&l_168[7][0]}},{{&l_168[1][2],&l_168[1][2]},{&l_168[1][2],&l_168[1][2]},{&l_168[1][2],&l_168[7][0]},{&l_168[5][0],&l_168[1][2]},{&l_168[7][0],&l_168[1][2]}},{{&l_168[1][2],&l_168[5][1]},{&l_168[5][0],&l_168[5][0]},{&l_168[5][1],&l_168[1][2]},{&l_168[1][2],&l_168[7][0]},{&l_168[1][2],&l_168[5][0]}},{{&l_168[7][0],&l_168[1][2]},{&l_168[1][2],&l_168[1][2]},{&l_168[1][2],&l_168[1][2]},{&l_168[7][0],&l_168[5][0]},{&l_168[1][2],&l_168[7][0]}},{{&l_168[1][2],&l_168[1][2]},{&l_168[5][1],&l_168[5][0]},{&l_168[5][0],&l_168[5][1]},{&l_168[1][2],&l_168[1][2]},{&l_168[7][0],&l_168[1][2]}}};
                int i, j, k;
                l_168[6][0] = &g_178;
            }
        }
    }
    for (l_94 = 12; (l_94 <= (-22)); l_94 = safe_sub_func_uint32_t_u_u(l_94, 1))
    {
        int *l_209 = &l_89[0][1][0];
        int **l_210 = (void*)0;
        int **l_211 = &l_209;
        int l_214 = 0x762EDC84L;
        unsigned char *l_226 = &g_115[1][0];
        unsigned char *l_227 = &g_115[2][0];
        unsigned l_228 = 1UL;
        unsigned l_237 = 0xC8C45096L;
        unsigned short *l_261[8][4][8] = {{{&l_97,&g_84,&g_84,&g_84,&l_97,&l_97,&g_84,&l_97},{(void*)0,(void*)0,&l_97,(void*)0,&l_97,&g_84,&g_84,&l_97},{&l_97,&l_97,(void*)0,&g_84,&g_84,&g_84,&g_84,&l_97},{&g_84,&l_97,&g_84,(void*)0,&l_97,(void*)0,&l_97,(void*)0}},{{&g_84,&g_84,&g_84,&g_84,&l_97,&g_84,(void*)0,(void*)0},{&g_84,&g_84,(void*)0,&l_97,&g_84,&g_84,&l_97,(void*)0},{(void*)0,(void*)0,&l_97,&g_84,&l_97,(void*)0,(void*)0,&g_84},{&g_84,&l_97,&g_84,(void*)0,(void*)0,&g_84,(void*)0,&g_84}},{{&l_97,(void*)0,&g_84,&g_84,&l_97,&g_84,&l_97,(void*)0},{(void*)0,&g_84,&l_97,&l_97,&l_97,&l_97,&g_84,(void*)0},{&g_84,(void*)0,(void*)0,&g_84,(void*)0,&g_84,&l_97,(void*)0},{&g_84,&g_84,&g_84,(void*)0,&l_97,&g_84,&l_97,&l_97}},{{&g_84,&g_84,(void*)0,&g_84,(void*)0,&l_97,&g_84,&l_97},{&l_97,&g_84,&g_84,&g_84,&l_97,&g_84,(void*)0,&l_97},{&g_84,(void*)0,&l_97,(void*)0,&l_97,&l_97,(void*)0,&l_97},{&l_97,&g_84,(void*)0,&l_97,&g_84,&g_84,&l_97,&l_97}},{{&l_97,(void*)0,&l_97,(void*)0,&g_84,&l_97,&l_97,&g_84},{&g_84,&l_97,(void*)0,&l_97,&g_84,&g_84,&g_84,&l_97},{&g_84,&l_97,&g_84,&l_97,(void*)0,&g_84,(void*)0,&l_97},{&l_97,&g_84,&g_84,(void*)0,&g_84,&g_84,&l_97,&g_84}},{{&l_97,&g_84,&g_84,&l_97,&g_84,&l_97,&l_97,&g_84},{(void*)0,&g_84,(void*)0,(void*)0,&g_84,&l_97,&l_97,(void*)0},{&l_97,&g_84,&l_97,&g_84,&g_84,&g_84,&l_97,&l_97},{&l_97,&g_84,&l_97,(void*)0,(void*)0,(void*)0,&l_97,&l_97}},{{&g_84,&g_84,&g_84,&l_97,&g_84,&l_97,&l_97,(void*)0},{&g_84,(void*)0,&l_97,&g_84,&g_84,&l_97,&g_84,&g_84},{&g_84,(void*)0,&g_84,&l_97,&g_84,&g_84,&l_97,&g_84},{&g_84,&l_97,&l_97,&g_84,&g_84,&l_97,&l_97,&l_97}},{{&g_84,&g_84,&l_97,&g_84,&g_84,&g_84,&g_84,&l_97},{(void*)0,&l_97,&l_97,&g_84,(void*)0,&g_84,&l_97,(void*)0},{&l_97,&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84,(void*)0},{(void*)0,&l_97,(void*)0,&l_97,(void*)0,&g_84,&g_84,&l_97}}};
        int i, j, k;
        (*l_209) = l_113;
        (*l_211) = p_67;
        if ((l_214 = (~(safe_lshift_func_int16_t_s_s(((void*)0 == &g_84), 4)))))
        {
            unsigned short l_224 = 65533UL;
            unsigned short l_232 = 0x888EL;
            int l_246 = (-6L);
            int *l_254 = &g_178;
            int **l_253 = &l_254;
            if (g_20)
            {
                g_178 = 0x884AE361L;
                return p_67;
            }
            else
            {
                int *l_215 = (void*)0;
                int *l_216 = &l_214;
                g_178 = (*p_67);
                (*l_211) = &g_40;
                (*l_216) = (*p_67);
            }
            for (p_65 = 1; (p_65 != 26); p_65++)
            {
                short *l_221 = &g_116;
                unsigned char **l_225 = (void*)0;
                if ((safe_mul_func_int16_t_s_s((((((*l_221) = ((*p_67) == (p_65 != 0x111CL))) >= p_65) != (safe_sub_func_uint16_t_u_u(((g_109 == g_109) | l_89[1][0][0]), l_224))) < ((l_226 = &g_115[7][0]) == l_227)), l_228)))
                {
                    (*l_211) = p_67;
                }
                else
                {
                    unsigned *l_231 = &l_76;
                    int l_238 = 4L;
                    char *l_239 = &l_113;
                    int *l_241[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_241[i] = &l_89[6][5][0];
                    g_178 = (safe_rshift_func_int8_t_s_s(((*l_239) = ((((*l_231) = (p_67 != (void*)0)) ^ l_232) <= (safe_sub_func_int16_t_s_s(l_89[5][5][1], (0x6AL == (safe_mod_func_int32_t_s_s(((((~(l_237 & (0x714A4212L & (*p_67)))) && (p_67 != p_67)) <= l_238) && 4294967289UL), (*p_67)))))))), g_240));
                    for (l_237 = 29; (l_237 > 31); ++l_237)
                    {
                        int ***l_244[2][4][3] = {{{&l_211,&l_211,&l_211},{&l_210,&l_210,&l_210},{&l_211,&l_211,&l_211},{&l_210,&l_210,&l_210}},{{&l_211,&l_211,&l_211},{&l_210,&l_210,&l_210},{&l_211,&l_211,&l_211},{&l_210,&l_210,&l_210}}};
                        int i, j, k;
                        l_245 = &p_67;
                        p_67 = p_67;
                        l_246 = (+((**l_245) < 246UL));
                    }
                }
            }
            for (l_232 = 0; (l_232 == 41); l_232 = safe_add_func_int16_t_s_s(l_232, 9))
            {
                short *l_255 = &g_134;
                int l_258 = 0x7F8A6E95L;
                (*l_254) = ((0xDEBD901DL & (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(l_246, (!p_65))) ^ ((~p_65) || (((*l_211) = (*l_211)) != (p_67 = p_67)))), 2))) == (((*l_255) = (l_253 != &l_254)) == (safe_lshift_func_uint16_t_u_u(l_258, p_65))));
                for (p_66 = (-24); (p_66 != 27); p_66 = safe_add_func_uint16_t_u_u(p_66, 4))
                {
                    unsigned short **l_262 = &l_261[5][1][0];
                    (**l_253) = (((*l_262) = l_261[1][2][3]) != (g_263[0] = &l_97));
                }
                if ((*p_67))
                    continue;
            }
        }
        else
        {
            (*l_211) = (g_264 = (void*)0);
        }
    }
    return p_67;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_434[i], "g_434[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_546[i], "g_546[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_630[i][j][k], "g_630[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
