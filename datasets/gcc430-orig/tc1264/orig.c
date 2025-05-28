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



static int g_5 = (-1L);
static int *g_4 = &g_5;
static int g_25 = 0L;
static short g_39 = 0x9116L;
static int g_41[4] = {0x643A64E7L,0x643A64E7L,0x643A64E7L,0x643A64E7L};
static int *g_64 = (void*)0;
static char g_81 = 1L;
static unsigned char g_82 = 0xCDL;
static short g_96[4][1][5] = {{{(-8L),(-8L),(-8L),(-8L),(-8L)}},{{8L,8L,8L,8L,8L}},{{(-8L),(-8L),(-8L),(-8L),(-8L)}},{{8L,8L,8L,8L,8L}}};
static unsigned short g_105[8] = {65527UL,0x7040L,65527UL,65527UL,0x7040L,65527UL,65527UL,0x7040L};
static int *g_113[4][7][8] = {{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,(void*)0,&g_5}},{{&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5}},{{&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_5,&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5}},{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5}}};
static unsigned g_122 = 4294967295UL;
static int g_125[10][10] = {{(-5L),5L,0x9D357D0DL,(-1L),(-1L),0x9D357D0DL,5L,(-5L),0x1509B2EAL,5L},{(-5L),(-7L),0xD8E19E2EL,5L,(-7L),0xCC4AB305L,0x4C054314L,(-3L),0xCC4AB305L,(-1L)},{(-7L),5L,0xD8E19E2EL,(-7L),(-5L),(-3L),(-3L),(-5L),(-7L),0xD8E19E2EL},{(-1L),(-1L),0x9D357D0DL,5L,(-5L),0x1509B2EAL,5L,0x4C054314L,0L,(-1L)},{(-5L),0xD8E19E2EL,(-3L),(-1L),(-7L),(-3L),5L,0xCC4AB305L,0xCC4AB305L,5L},{0xCC4AB305L,(-1L),0xD8E19E2EL,0xD8E19E2EL,(-1L),0xCC4AB305L,(-3L),0x4C054314L,0xCC4AB305L,(-7L)},{(-1L),5L,(-1L),(-1L),(-5L),0x9D357D0DL,0x4C054314L,(-5L),0L,5L},{(-1L),(-7L),(-3L),5L,0xCC4AB305L,0xCC4AB305L,5L,(-3L),(-7L),(-1L)},{0xCC4AB305L,5L,(-3L),(-7L),(-1L),(-3L),0xD8E19E2EL,(-5L),0xCC4AB305L,0xD8E19E2EL},{(-5L),(-1L),(-1L),5L,(-1L),0x1509B2EAL,0x4C054314L,0x4C054314L,0x1509B2EAL,(-1L)}};
static short *g_130[9] = {&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0]};
static char g_142 = 7L;
static char g_144 = 0x62L;
static unsigned short g_182 = 0x8804L;
static int *g_214[1] = {&g_25};
static unsigned short g_255 = 0x7F48L;
static unsigned char *g_276[6] = {&g_82,&g_82,&g_82,&g_82,&g_82,&g_82};
static unsigned g_293 = 0x6ED61A26L;
static char *g_343 = &g_142;
static char **g_373 = &g_343;
static unsigned *g_408 = &g_122;
static int *g_537 = &g_5;
static int **g_559 = &g_214[0];
static int ***g_558 = &g_559;
static int ****g_557 = &g_558;
static unsigned short *g_623[7][1][9] = {{{&g_182,&g_105[3],&g_105[3],&g_182,&g_182,&g_182,&g_182,&g_182,&g_182}},{{&g_105[6],&g_105[2],&g_105[6],&g_105[1],&g_105[6],&g_105[2],&g_105[6],&g_105[1],&g_105[6]}},{{&g_182,&g_182,&g_182,&g_105[3],&g_182,&g_182,&g_105[3],&g_182,&g_182}},{{&g_255,&g_105[1],&g_105[1],&g_105[1],&g_255,&g_105[1],&g_105[1],&g_105[1],&g_255}},{{&g_182,&g_105[3],&g_182,&g_182,&g_182,&g_182,&g_105[3],&g_182,&g_182}},{{&g_105[6],&g_105[1],&g_105[6],&g_105[2],&g_105[6],&g_105[1],&g_105[6],&g_105[2],&g_105[6]}},{{&g_182,&g_182,&g_105[3],&g_105[3],&g_182,&g_182,&g_182,&g_182,&g_182}}};
static unsigned short **g_622 = &g_623[5][0][6];
static int *g_624 = (void*)0;
static char g_692 = 4L;
static int g_751[9] = {0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L,0x307563D8L};
static int **g_772 = &g_113[1][2][5];
static int ***g_771[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int *g_783[7][5][6] = {{{&g_5,&g_41[2],&g_41[3],&g_5,(void*)0,&g_5},{&g_41[2],&g_41[3],&g_41[2],&g_5,&g_41[2],&g_41[2]},{&g_41[2],&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,(void*)0,&g_5,&g_41[2],&g_5},{&g_41[2],(void*)0,&g_41[2],&g_5,&g_41[3],&g_41[3]}},{{&g_41[2],(void*)0,&g_5,&g_5,(void*)0,&g_41[2]},{&g_5,&g_41[2],&g_41[2],&g_5,&g_41[2],&g_5},{&g_41[2],&g_41[2],&g_5,&g_5,(void*)0,(void*)0},{&g_41[2],&g_41[1],&g_5,&g_5,&g_41[1],&g_41[2]},{&g_5,&g_41[2],&g_41[3],&g_5,(void*)0,&g_5}},{{&g_41[2],&g_41[3],&g_41[2],&g_5,&g_41[2],&g_41[2]},{&g_41[2],&g_5,&g_5,&g_5,&g_41[3],&g_5},{&g_5,&g_41[1],&g_41[2],&g_41[3],&g_5,&g_41[3]},{&g_5,&g_41[2],&g_5,(void*)0,(void*)0,&g_5},{&g_5,(void*)0,&g_41[2],&g_41[3],(void*)0,&g_5}},{{&g_5,&g_5,&g_41[2],&g_41[3],(void*)0,(void*)0},{&g_5,&g_41[2],&g_5,(void*)0,&g_41[2],&g_41[2]},{&g_5,&g_41[2],&g_41[3],&g_41[3],&g_41[2],&g_5},{&g_5,(void*)0,&g_5,&g_41[3],&g_41[1],&g_41[2]},{&g_5,(void*)0,&g_5,(void*)0,&g_41[2],&g_41[2]}},{{&g_5,&g_41[3],(void*)0,&g_41[3],&g_41[3],&g_5},{&g_5,&g_41[1],&g_41[2],&g_41[3],&g_5,&g_41[3]},{&g_5,&g_41[2],&g_5,(void*)0,(void*)0,&g_5},{&g_5,(void*)0,&g_41[2],&g_41[3],(void*)0,&g_5},{&g_5,&g_5,&g_41[2],&g_41[3],(void*)0,(void*)0}},{{&g_5,&g_41[2],&g_5,(void*)0,&g_41[2],&g_41[2]},{&g_5,&g_41[2],&g_41[3],&g_41[3],&g_41[2],&g_5},{&g_5,(void*)0,&g_5,(void*)0,&g_41[2],&g_5},{&g_41[2],(void*)0,&g_41[2],&g_41[2],&g_41[2],(void*)0},{&g_41[2],&g_5,&g_41[2],(void*)0,&g_5,&g_41[2]}},{{&g_41[2],&g_41[2],&g_41[1],(void*)0,&g_5,(void*)0},{&g_41[2],&g_41[3],&g_41[2],&g_41[2],(void*)0,&g_41[1]},{&g_41[2],&g_5,&g_5,(void*)0,&g_5,&g_41[2]},{&g_41[2],&g_5,(void*)0,(void*)0,&g_41[2],&g_41[2]},{&g_41[2],&g_41[2],&g_41[2],&g_41[2],&g_41[3],&g_41[1]}}};
static int g_865 = 0x861BFD4AL;
static unsigned g_873 = 0x2F502E62L;
static short **g_879[1] = {&g_130[1]};
static unsigned char **g_912 = &g_276[3];
static unsigned char ***g_911 = &g_912;
static unsigned short g_932[7][5] = {{0x9BBAL,1UL,0xAD4AL,0x2528L,0x2528L},{0UL,3UL,0UL,0x179CL,0UL},{0x9BBAL,0x2528L,1UL,1UL,0x2528L},{0x5FCDL,0x179CL,0UL,0x179CL,0x5FCDL},{0x2528L,1UL,1UL,0x2528L,0x9BBAL},{0UL,0x179CL,0UL,3UL,0UL},{0x2528L,0x2528L,0xAD4AL,1UL,0x9BBAL}};
static unsigned short ***g_936 = &g_622;
static unsigned short ****g_935 = &g_936;
static char g_984 = 0x0EL;
static char g_1004 = 0L;
static int g_1049 = 0xD060A3A1L;
static unsigned char g_1076 = 0xF6L;
static unsigned g_1081[6][5][6] = {{{0x0748C82BL,0x6F7BCC1DL,0x8709FF45L,0xF20B93F1L,5UL,0x0EE805BFL},{0xBD04397CL,0xB60190B7L,5UL,5UL,0xB60190B7L,0xBD04397CL},{5UL,0xB60190B7L,0xBD04397CL,0xBD04397CL,4294967292UL,0xF20B93F1L},{0xF20B93F1L,0x006EF2D7L,0x35C282A6L,0x76289FEEL,0xB60190B7L,0x0EE805BFL},{0xF20B93F1L,0x6F7BCC1DL,0x76289FEEL,0xBD04397CL,0xD2C0FB25L,0x0748C82BL}},{{0x45A7ACF3L,4294967292UL,0x3C13D321L,0x45A7ACF3L,5UL,0x0748C82BL},{5UL,0xD2C0FB25L,0x76289FEEL,0x0EE805BFL,0xF0F35BEEL,0x0EE805BFL},{0x35C282A6L,1UL,0x35C282A6L,0x0A269434L,0xF0F35BEEL,0xF20B93F1L},{0x76289FEEL,0xD2C0FB25L,5UL,0x35C282A6L,5UL,5UL},{0x3C13D321L,4294967292UL,0x45A7ACF3L,0x35C282A6L,0xD2C0FB25L,0x0A269434L}},{{0x76289FEEL,0x6F7BCC1DL,0xF20B93F1L,0x0A269434L,0xB60190B7L,0x45A7ACF3L},{0x35C282A6L,0x006EF2D7L,0xF20B93F1L,0x0EE805BFL,4294967292UL,0x0A269434L},{5UL,0x3681DB9DL,0x45A7ACF3L,0x45A7ACF3L,0x3681DB9DL,5UL},{0x45A7ACF3L,0x3681DB9DL,5UL,0xBD04397CL,4294967292UL,0xF20B93F1L},{0xF20B93F1L,0x006EF2D7L,0x35C282A6L,0x76289FEEL,0xB60190B7L,0x0EE805BFL}},{{0xF20B93F1L,0x6F7BCC1DL,0x76289FEEL,0xBD04397CL,0xD2C0FB25L,0x0748C82BL},{0x45A7ACF3L,4294967292UL,0x3C13D321L,0x45A7ACF3L,5UL,0x0748C82BL},{5UL,0xD2C0FB25L,0x76289FEEL,0x0EE805BFL,0xF0F35BEEL,0x0EE805BFL},{0x35C282A6L,1UL,0UL,0x7DF0DEB9L,0x76289FEEL,0x0EEFE9C6L},{4294967295UL,0x8709FF45L,0xA7A474CEL,0UL,0xF20B93F1L,0xA7A474CEL}},{{0x1C4A6619L,0x0EE805BFL,4294967289UL,0UL,0x8709FF45L,0x7DF0DEB9L},{4294967295UL,0x35C282A6L,0x0EEFE9C6L,0x7DF0DEB9L,0xBD04397CL,4294967289UL},{0UL,0x3C13D321L,0x0EEFE9C6L,0x6DA4F0D4L,0x0EE805BFL,0x7DF0DEB9L},{0xA7A474CEL,5UL,4294967289UL,4294967289UL,5UL,0xA7A474CEL},{4294967289UL,5UL,0xA7A474CEL,0x82A29F33L,0x0EE805BFL,0x0EEFE9C6L}},{{0x0EEFE9C6L,0x3C13D321L,0UL,4294967295UL,0xBD04397CL,0x6DA4F0D4L},{0x0EEFE9C6L,0x35C282A6L,4294967295UL,0x82A29F33L,0x8709FF45L,1UL},{4294967289UL,0x0EE805BFL,0x1C4A6619L,4294967289UL,0xF20B93F1L,1UL},{0xA7A474CEL,0x8709FF45L,4294967295UL,0x6DA4F0D4L,0x76289FEEL,0x6DA4F0D4L},{0UL,0x0A269434L,0UL,0x7DF0DEB9L,0x76289FEEL,0x0EEFE9C6L}}};
static unsigned **g_1124 = &g_408;
static short ***g_1156[9][9][3] = {{{(void*)0,&g_879[0],&g_879[0]},{(void*)0,(void*)0,&g_879[0]},{(void*)0,(void*)0,(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,&g_879[0],&g_879[0]}},{{&g_879[0],(void*)0,(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],(void*)0,&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{(void*)0,(void*)0,&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]}},{{(void*)0,&g_879[0],&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{(void*)0,&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,&g_879[0],(void*)0}},{{(void*)0,&g_879[0],&g_879[0]},{(void*)0,&g_879[0],(void*)0},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],(void*)0,(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],(void*)0}},{{&g_879[0],(void*)0,&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{(void*)0,(void*)0,&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,(void*)0,(void*)0},{&g_879[0],(void*)0,(void*)0}},{{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{(void*)0,(void*)0,&g_879[0]},{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{(void*)0,(void*)0,&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]}},{{&g_879[0],&g_879[0],(void*)0},{(void*)0,&g_879[0],&g_879[0]},{(void*)0,(void*)0,&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{(void*)0,&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,&g_879[0],(void*)0},{(void*)0,(void*)0,&g_879[0]}},{{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,(void*)0,(void*)0},{&g_879[0],(void*)0,(void*)0},{(void*)0,&g_879[0],&g_879[0]},{&g_879[0],(void*)0,&g_879[0]},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],&g_879[0],(void*)0}},{{&g_879[0],(void*)0,&g_879[0]},{(void*)0,(void*)0,(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_879[0]},{&g_879[0],(void*)0,(void*)0},{&g_879[0],&g_879[0],&g_879[0]},{&g_879[0],(void*)0,(void*)0},{&g_879[0],&g_879[0],(void*)0}}};
static short ****g_1155[2][5] = {{&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2]},{&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2],&g_1156[5][1][2]}};
static int ****g_1161 = &g_771[8];
static int *****g_1160 = &g_1161;
static unsigned g_1220 = 18446744073709551608UL;
static int g_1285 = 1L;
static unsigned char g_1322[3] = {1UL,1UL,1UL};
static unsigned g_1325 = 0xF20AB32CL;
static short *****g_1327[8][9][3] = {{{(void*)0,&g_1155[0][2],&g_1155[0][2]},{&g_1155[1][1],&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],(void*)0,&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][0],&g_1155[0][0]},{&g_1155[1][3],&g_1155[0][2],&g_1155[0][0]},{&g_1155[0][2],&g_1155[0][2],&g_1155[0][2]},{&g_1155[1][1],&g_1155[1][1],(void*)0},{&g_1155[0][0],&g_1155[1][2],&g_1155[0][2]},{(void*)0,&g_1155[0][2],&g_1155[0][2]}},{{&g_1155[0][0],&g_1155[1][0],(void*)0},{&g_1155[0][2],(void*)0,&g_1155[0][2]},{&g_1155[1][1],(void*)0,&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],(void*)0},{&g_1155[0][2],(void*)0,&g_1155[0][2]},{&g_1155[0][2],(void*)0,&g_1155[0][0]},{(void*)0,&g_1155[0][4],&g_1155[0][0]},{&g_1155[1][4],&g_1155[0][0],&g_1155[0][2]},{&g_1155[0][2],&g_1155[1][1],&g_1155[0][2]}},{{&g_1155[0][2],(void*)0,(void*)0},{&g_1155[0][4],&g_1155[0][0],&g_1155[1][1]},{&g_1155[0][0],&g_1155[0][2],&g_1155[1][2]},{&g_1155[1][1],&g_1155[1][3],&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],(void*)0},{&g_1155[0][2],&g_1155[0][2],&g_1155[0][2]},{(void*)0,(void*)0,&g_1155[0][2]},{(void*)0,&g_1155[0][2],(void*)0},{(void*)0,&g_1155[0][2],&g_1155[0][4]}},{{(void*)0,&g_1155[1][1],&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],&g_1155[0][0]},{&g_1155[1][0],&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],(void*)0,&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],(void*)0},{&g_1155[0][3],&g_1155[0][2],&g_1155[0][2]},{&g_1155[1][4],&g_1155[1][3],&g_1155[0][2]},{(void*)0,&g_1155[0][2],&g_1155[1][1]},{&g_1155[0][2],&g_1155[0][0],&g_1155[1][0]}},{{&g_1155[0][2],(void*)0,&g_1155[1][0]},{&g_1155[1][4],&g_1155[1][2],&g_1155[1][1]},{&g_1155[1][4],&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],&g_1155[1][1],(void*)0},{&g_1155[0][2],&g_1155[0][2],&g_1155[0][2]},{(void*)0,&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],&g_1155[1][4],&g_1155[0][0]},{(void*)0,&g_1155[1][0],&g_1155[0][2]}},{{&g_1155[0][0],(void*)0,&g_1155[0][4]},{(void*)0,&g_1155[0][3],(void*)0},{&g_1155[0][2],&g_1155[1][4],&g_1155[0][2]},{(void*)0,&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],(void*)0,(void*)0},{&g_1155[0][2],&g_1155[0][3],(void*)0},{&g_1155[1][2],&g_1155[1][0],&g_1155[0][2]},{(void*)0,&g_1155[0][4],&g_1155[0][2]},{&g_1155[0][0],&g_1155[1][4],&g_1155[0][2]}},{{(void*)0,&g_1155[1][4],&g_1155[1][1]},{&g_1155[0][2],&g_1155[0][4],(void*)0},{&g_1155[1][1],&g_1155[1][0],&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][3],&g_1155[1][1]},{&g_1155[1][1],&g_1155[0][2],&g_1155[1][1]},{(void*)0,(void*)0,&g_1155[1][0]},{&g_1155[1][0],(void*)0,&g_1155[0][2]},{(void*)0,&g_1155[1][1],&g_1155[0][0]},{&g_1155[1][1],&g_1155[0][2],&g_1155[1][1]}},{{&g_1155[0][2],(void*)0,&g_1155[0][0]},{&g_1155[0][2],&g_1155[0][0],&g_1155[0][2]},{&g_1155[0][2],&g_1155[1][4],&g_1155[1][0]},{(void*)0,&g_1155[0][2],&g_1155[1][1]},{&g_1155[1][4],&g_1155[1][1],&g_1155[1][1]},{&g_1155[1][1],&g_1155[0][2],&g_1155[0][2]},{&g_1155[0][2],&g_1155[0][2],(void*)0},{&g_1155[1][1],&g_1155[0][2],&g_1155[1][1]},{&g_1155[0][2],(void*)0,&g_1155[0][2]}}};
static short ******g_1326 = &g_1327[7][6][1];
static int *g_1362[2][3] = {{&g_125[2][6],&g_125[2][6],&g_125[2][6]},{&g_125[1][5],&g_125[1][5],&g_125[1][5]}};
static unsigned short g_1374 = 65535UL;
static int g_1412 = 0L;
static unsigned short g_1442 = 0x4C0CL;
static unsigned **g_1446 = &g_408;
static short g_1555 = 6L;
static short *******g_1569 = (void*)0;
static int *g_1613 = &g_5;
static short g_1692 = (-10L);
static unsigned short *****g_1739 = (void*)0;
static unsigned short ******g_1738[5] = {&g_1739,&g_1739,&g_1739,&g_1739,&g_1739};
static int *g_1788 = &g_865;
static unsigned short ******g_1794[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static short g_1815 = 8L;
static int *g_1831 = (void*)0;



static short func_1(void);
static int * func_2(int p_3);
static char func_8(unsigned p_9, short p_10);
static short func_11(int p_12, char p_13, unsigned p_14);
static unsigned short func_16(short p_17, unsigned char p_18, int * p_19, unsigned p_20);
static short func_21(int * p_22, int p_23);
static char func_26(int p_27, char p_28, int * p_29, unsigned short p_30);
static unsigned short func_34(int * p_35, unsigned short p_36);
static short func_45(unsigned char p_46, int * p_47, int * p_48, int p_49);
static int * func_52(unsigned p_53, unsigned p_54, unsigned p_55, unsigned short p_56, unsigned char p_57);
static short func_1(void)
{
    int *l_6[10];
    unsigned l_1179 = 1UL;
    short *****l_1183 = &g_1155[0][2];
    unsigned char l_1195 = 1UL;
    unsigned l_1203 = 1UL;
    unsigned short l_1204 = 0x75FEL;
    unsigned char l_1206 = 255UL;
    short **l_1209[10][6] = {{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]},{&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5],&g_130[5]}};
    int l_1214 = 0x835DD6D7L;
    short l_1215 = 0x7D0AL;
    int l_1219 = 6L;
    unsigned short l_1221 = 0x1305L;
    unsigned char **l_1258[10][1] = {{&g_276[3]},{&g_276[0]},{&g_276[0]},{&g_276[3]},{&g_276[3]},{&g_276[3]},{&g_276[0]},{&g_276[0]},{&g_276[3]},{&g_276[3]}};
    unsigned short l_1282 = 6UL;
    unsigned ***l_1324 = &g_1124;
    char ***l_1385 = (void*)0;
    char l_1393 = (-1L);
    int l_1398 = (-1L);
    int l_1400 = 1L;
    short l_1414 = (-1L);
    int l_1459 = (-1L);
    int l_1526 = 0x01E5CA6CL;
    unsigned char l_1554 = 252UL;
    short ******l_1605 = (void*)0;
    unsigned l_1614 = 0UL;
    unsigned l_1619 = 4294967295UL;
    int l_1647[7][4][3] = {{{0x93E35A14L,0L,(-10L)},{0x1C0D7D28L,0x082E0CDBL,(-10L)},{0x3B3521C3L,(-10L),0x93E35A14L},{0x71DE31BAL,1L,0xCE11726DL}},{{(-10L),(-10L),1L},{0x1B5D8D68L,0x082E0CDBL,0x00756658L},{0x1B5D8D68L,0L,0x71DE31BAL},{(-10L),0x93E35A14L,0x082E0CDBL}},{{0x71DE31BAL,0x1B5D8D68L,0x71DE31BAL},{0x3B3521C3L,0xCCE9EECFL,0x00756658L},{0x1C0D7D28L,0xCCE9EECFL,1L},{0x93E35A14L,0x1B5D8D68L,0xCE11726DL}},{{(-1L),0x93E35A14L,0x93E35A14L},{0x93E35A14L,(-1L),0xCE11726DL},{0x1B5D8D68L,0xCCE9EECFL,0xCE11726DL},{0x082E0CDBL,0xCE11726DL,0L}},{{0x3B3521C3L,0x1C0D7D28L,1L},{0xCE11726DL,0xCE11726DL,0x1C0D7D28L},{0x71DE31BAL,0xCCE9EECFL,(-10L)},{0x71DE31BAL,(-1L),0x3B3521C3L}},{{0xCE11726DL,0L,0xCCE9EECFL},{0x3B3521C3L,0x71DE31BAL,0x3B3521C3L},{0x082E0CDBL,0x93E35A14L,(-10L)},{0x1B5D8D68L,0x93E35A14L,0x1C0D7D28L}},{{0L,0x71DE31BAL,1L},{0x00756658L,0L,0L},{0L,(-1L),0xCE11726DL},{0x1B5D8D68L,0xCCE9EECFL,0xCE11726DL}}};
    unsigned l_1677 = 0x85A9911FL;
    char **l_1700 = &g_343;
    char **l_1702 = &g_343;
    unsigned short l_1728 = 0x1C3CL;
    int *l_1742 = &g_865;
    short ***l_1748[7][1][5] = {{{(void*)0,&l_1209[1][5],&l_1209[1][5],(void*)0,&l_1209[1][5]}},{{&l_1209[1][5],&l_1209[1][5],&l_1209[8][5],&l_1209[1][5],&l_1209[1][5]}},{{&l_1209[1][5],(void*)0,&l_1209[1][5],&l_1209[1][5],(void*)0}},{{&l_1209[1][5],&l_1209[0][1],&l_1209[0][1],&l_1209[1][5],&l_1209[0][1]}},{{(void*)0,(void*)0,&l_1209[2][3],(void*)0,(void*)0}},{{&l_1209[0][1],&l_1209[1][5],&l_1209[0][1],&l_1209[0][1],&l_1209[1][5]}},{{(void*)0,&l_1209[1][5],&l_1209[1][5],(void*)0,&l_1209[1][5]}}};
    unsigned short ******l_1793 = (void*)0;
    int ****l_1821 = &g_771[2];
    unsigned short l_1840 = 3UL;
    unsigned l_1860 = 0xE94CD2BCL;
    short l_1888 = (-1L);
    unsigned l_1902 = 1UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_6[i] = (void*)0;
    (*g_772) = func_2((6L || (g_4 == l_6[1])));


    if ((*g_4))
    {
        int *****l_1162[4] = {&g_1161,&g_1161,&g_1161,&g_1161};
        unsigned l_1163 = 0x36D9848FL;
        short *****l_1182 = (void*)0;
        int *l_1184[7] = {&g_125[9][0],&g_125[9][0],&g_125[9][0],&g_125[9][0],&g_125[9][0],&g_125[9][0],&g_125[9][0]};
        char l_1194[1][10][5] = {{{0xB0L,0x45L,0xB0L,(-1L),(-4L)},{(-3L),0x26L,(-10L),(-3L),0xD5L},{0x65L,(-1L),0xB0L,(-9L),0x43L},{(-4L),0xD5L,(-10L),0xD5L,(-4L)},{1L,(-3L),0x45L,0xD5L,(-9L)},{(-1L),1L,0xB5L,(-9L),0x27L},{(-10L),0x45L,(-9L),(-3L),(-9L)},{(-9L),(-9L),0x26L,0xB5L,(-4L)},{(-9L),1L,(-4L),0xB0L,0x43L},{(-10L),0x65L,0x27L,(-1L),0xD5L}}};
        unsigned l_1198 = 1UL;
        int l_1199 = 0x10B6F1CBL;
        int l_1202 = 0L;
        short *l_1216 = &g_96[1][0][0];
        unsigned short **l_1251[4];
        short l_1256 = 0x08CAL;
        short l_1321 = 4L;
        int l_1337 = 0x68EB578EL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1251[i] = (void*)0;
        if ((((safe_add_func_uint8_t_u_u((g_1160 == l_1162[3]), l_1163)) > ((*g_408) > ((**g_373) <= (safe_rshift_func_int8_t_s_s((*g_343), 0))))) && ((***g_936) <= (***g_936))))
        {
            int l_1168 = (-9L);
            for (g_39 = 0; (g_39 >= 14); g_39 = safe_add_func_int8_t_s_s(g_39, 6))
            {
                return l_1168;
            }
        }
        else
        {
            short *****l_1181 = &g_1155[0][0];
            short ******l_1180[8][5][2] = {{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,(void*)0},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,&l_1181}},{{&l_1181,&l_1181},{&l_1181,&l_1181},{&l_1181,(void*)0},{&l_1181,&l_1181},{&l_1181,&l_1181}}};
            int *l_1185 = &g_751[4];
            unsigned char *l_1196[10][1] = {{&g_82},{&g_82},{&g_82},{&g_82},{(void*)0},{&g_82},{&g_82},{&g_82},{&g_82},{(void*)0}};
            int l_1197 = 0xAD87284EL;
            int l_1200[10];
            unsigned short l_1201[5] = {0x9682L,0x9682L,0x9682L,0x9682L,0x9682L};
            int l_1205[9] = {0x1295676EL,0x1295676EL,0x688CBEF5L,0x1295676EL,0x1295676EL,0x688CBEF5L,0x1295676EL,0x1295676EL,0x688CBEF5L};
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1200[i] = 0x87921EFBL;
            l_1206 &= (safe_sub_func_uint8_t_u_u((l_1205[6] = ((l_1204 = (safe_sub_func_int32_t_s_s((0x73L > (l_1200[1] = (safe_rshift_func_uint8_t_u_u((l_1203 = (((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((l_1179 |= ((**g_373) &= 0x58L)) != ((l_1182 = (void*)0) != l_1183)), (((***g_557) = (void*)0) != l_1184[2]))) | (((func_34(l_1185, (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u((l_1194[0][9][0] >= (l_1197 ^= ((((*g_4) != (-1L)) || l_1195) != (*g_408)))), g_39)) <= l_1198) != (***g_936)), l_1199)), l_1200[1])), l_1200[1]))) >= l_1201[0]) && (-1L)) < l_1202)), l_1200[1])) > l_1200[8]) & (**g_1124))), l_1200[1])))), 0xE29185D2L))) <= (*g_537))), 0x43L));


            for (g_865 = 1; (g_865 < (-25)); g_865 = safe_sub_func_uint8_t_u_u(g_865, 8))
            {
                return l_1205[6];
            }
        }


        if ((func_26(((void*)0 == l_1209[1][5]), (safe_add_func_int8_t_s_s(((***g_936) && (safe_add_func_uint16_t_u_u(l_1214, ((l_1215 || (l_1216 != l_1216)) | (safe_mul_func_uint32_t_u_u((**g_1124), ((func_34(((**g_558) = (void*)0), (***g_936)) < l_1219) == g_1220))))))), l_1221)), &l_1219, (**g_622)) != (**g_622)))
        {
            int l_1222 = (-1L);
            short **l_1241[1];
            char l_1270[8] = {(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)};
            int *l_1272 = &g_1049;
            int l_1286 = 0x12ABD636L;
            unsigned char l_1298 = 255UL;
            unsigned char l_1319 = 255UL;
            unsigned char l_1340 = 0UL;
            char l_1399[1][3];
            unsigned l_1420 = 0x0828965CL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1241[i] = &g_130[3];
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1399[i][j] = 0x64L;
            }
            if (l_1222)
            {
                short l_1223 = 0L;
                int l_1226 = (-9L);
                char l_1237 = 0x71L;
                unsigned short *****l_1240 = (void*)0;
                unsigned char **l_1257 = &g_276[5];
                (*g_772) = func_2(l_1223);
                for (g_122 = (-16); (g_122 > 19); g_122 = safe_add_func_int8_t_s_s(g_122, 1))
                {
                    int l_1228 = 0x09DF4E48L;
                    unsigned short *****l_1239 = &g_935;
                    unsigned short ******l_1238 = &l_1239;
                    int l_1243 = (-6L);
                    int *l_1273[3][6][2] = {{{&l_1219,&l_1222},{&l_1219,&l_1222},{&l_1222,&l_1222},{&l_1222,&l_1222},{&l_1219,&l_1222},{&l_1219,&l_1222}},{{&l_1222,&l_1222},{&l_1222,&l_1222},{&l_1219,&l_1222},{&l_1219,&l_1222},{&l_1222,&l_1222},{&l_1222,&l_1222}},{{&l_1219,&l_1222},{&l_1219,&l_1222},{&l_1222,&l_1222},{&l_1222,&l_1222},{&l_1219,&l_1222},{&l_1219,&l_1222}}};
                    int i, j, k;
                    for (g_5 = 0; (g_5 <= 8); g_5 += 1)
                    {
                        int l_1227[1][6][5] = {{{0xCCB2F24EL,0x0D185D40L,0xCCB2F24EL,0xCCB2F24EL,0x0D185D40L},{0xE4535757L,(-3L),(-7L),(-3L),(-7L)},{0x0D185D40L,0x0D185D40L,2L,0x0D185D40L,0x0D185D40L},{(-7L),(-3L),(-7L),(-3L),0xE4535757L},{0x0D185D40L,0xCCB2F24EL,0xCCB2F24EL,0x0D185D40L,0xCCB2F24EL},{0xE4535757L,(-3L),(-1L),(-3L),0xE4535757L}}};
                        int i, j, k;
                        l_1228 ^= (l_1227[0][3][1] = (l_1226 = 1L));
                        return g_751[g_5];


                    }
                    if (((safe_sub_func_uint32_t_u_u((~(*g_408)), 0UL)) && ((safe_sub_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((**g_1124), 0x51391B57L)) >= (safe_sub_func_int16_t_s_s(l_1237, (l_1226 < ((~(l_1222 = (((*l_1238) = &g_935) != l_1240))) || ((*g_408) == l_1228)))))) < 0x9AL), 4L)) > 0L)))
                    {
                        short **l_1242 = &l_1216;
                        l_1242 = l_1241[0];

                        ;
                        (*g_772) = func_2(l_1243);
                    }
                    else
                    {
                        unsigned char l_1250 = 0x32L;
                        int l_1259 = 0x360374BFL;
                        l_1243 = (l_1259 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s((l_1250 && ((*g_537) = (((****l_1238) = l_1251[2]) == (void*)0))), 6)) > (safe_lshift_func_uint16_t_u_u(l_1237, 13))) | (safe_lshift_func_uint8_t_u_u(0x2FL, ((l_1256 > (((l_1222 && ((l_1257 != l_1258[2][0]) | l_1228)) || l_1223) < l_1223)) ^ l_1250)))), l_1250)), l_1222)));
                    }
                    for (g_1076 = 6; (g_1076 <= 26); ++g_1076)
                    {
                        unsigned l_1271 = 0x74D317C3L;
                        (*g_4) = ((safe_add_func_uint16_t_u_u(l_1223, (l_1237 || (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_1228, (safe_lshift_func_uint16_t_u_s(0x7D40L, 8)))), l_1270[0]))))) || (l_1271 |= (*g_408)));
                        (*g_772) = (l_1272 = &l_1219);

                        ;
                        l_1273[0][0][0] = &l_1226;
                        (*g_537) ^= ((safe_mod_func_uint32_t_u_u((**g_1124), (**g_1124))) != l_1226);
                    }
                }


                ;
                ;
                (*g_537) |= (safe_rshift_func_uint8_t_u_s((*l_1272), 1));
            }
            else
            {
                unsigned l_1297[7][1] = {{18446744073709551613UL},{0xE1F0BE88L},{0xE1F0BE88L},{18446744073709551613UL},{0xE1F0BE88L},{0xE1F0BE88L},{18446744073709551613UL}};
                int l_1320 = 0x5C3C5348L;
                unsigned ***l_1323 = &g_1124;
                int i, j;
                (*g_4) |= (safe_mod_func_int16_t_s_s((*l_1272), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((***g_936), ((safe_rshift_func_uint8_t_u_s((*l_1272), 3)) > (l_1298 = ((*l_1216) &= l_1297[6][0]))))), 4))));
                for (l_1206 = 0; (l_1206 <= 19); l_1206 = safe_add_func_uint32_t_u_u(l_1206, 3))
                {
                    char l_1301 = 0x3BL;
                    int *l_1302 = &g_865;
                    if (l_1301)
                        break;
                    if (((void*)0 != &l_1219))
                    {
                        l_6[1] = l_1302;
                        (*g_4) = (*l_1272);
                        if (l_1297[6][0])
                            continue;
                    }
                    else
                    {
                        unsigned char **l_1313 = &g_276[1];
                        int l_1318 = 2L;
                        (*g_772) = func_52((*l_1302), (safe_rshift_func_uint8_t_u_s(((l_1222 ^= ((safe_mod_func_uint32_t_u_u((**g_1124), (safe_mod_func_uint32_t_u_u((**g_1124), (safe_rshift_func_int8_t_s_s((func_34(func_2((*l_1272)), (((safe_sub_func_int8_t_s_s((l_1258[2][0] != l_1313), ((*g_343) ^ (safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(l_1297[2][0], (*l_1302))) > l_1318) > 4294967287UL), 0UL))))) || 1L) > l_1319)) & 1UL), (*l_1302))))))) && (-1L))) || l_1320), 4)), l_1321, l_1297[6][0], (*l_1272));

                        ;
                        if ((*l_1302))
                            break;
                        if (g_1322[2])
                            continue;
                    }
                }


                ;
                for (g_144 = 0; (g_144 >= 0); g_144 -= 1)
                {
                    int i;
                    if (g_105[(g_144 + 5)])
                        break;
                    (*l_1272) &= (*g_4);
                    for (g_39 = 9; (g_39 >= 0); g_39 -= 1)
                    {
                        int i, j;
                        (*g_4) = ((l_1323 != l_1324) & g_125[(g_144 + 8)][g_144]);
                    }
                }
                g_1325 ^= ((*l_1272) <= (*g_537));
            }


            ;

            ;
            ;
            if ((g_1326 == (void*)0))
            {
                int l_1336 = 0x4598B739L;
                int l_1339 = (-3L);
                unsigned l_1357 = 2UL;
                for (g_1325 = 0; (g_1325 <= 4); g_1325 += 1)
                {
                    unsigned l_1338[7] = {0x12E517BBL,0x12E517BBL,1UL,0x12E517BBL,0x12E517BBL,1UL,0x12E517BBL};
                    int l_1341 = 0x2661CCDFL;
                    int *l_1365 = &l_1199;
                    int l_1378 = (-6L);
                    int i;
                }
                (*g_4) = ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((*l_1272), (0L && (&g_373 == l_1385)))), 14)), (func_16(l_1336, l_1336, &l_1339, ((*l_1272) | ((*l_1272) < l_1339))) >= g_1049))) > g_125[1][5]);

                ;

                ;
            }
            else
            {
                int l_1388 = 0xC45E3AD8L;
                unsigned short l_1389 = 0x43CEL;
                short *******l_1392 = &g_1326;
                unsigned l_1422 = 0UL;
                (*g_537) = ((((*g_408) |= (safe_lshift_func_uint16_t_u_s(l_1388, 9))) && 4294967289UL) & (((l_1389 | ((*g_343) <= (safe_rshift_func_int16_t_s_s(0x2D29L, 5)))) != (*l_1272)) ^ (((*l_1392) = &g_1327[1][5][1]) != (void*)0)));
                (*g_772) = func_52(l_1393, ((0UL ^ ((*l_1272) || (0x7523B8D8L != ((((!0x227A19ABL) ^ (*g_537)) == (safe_add_func_uint8_t_u_u(func_26((l_1398 |= (safe_rshift_func_int8_t_s_u((*l_1272), 1))), ((*g_343) = ((l_1399[0][0] < (**g_373)) != (*l_1272))), (*g_772), l_1388), l_1400))) || l_1388)))) ^ l_1389), l_1388, l_1389, l_1388);

                ;
                l_1388 |= ((*g_64) = (-1L));
                for (g_25 = 0; (g_25 >= (-15)); g_25 = safe_sub_func_uint16_t_u_u(g_25, 1))
                {
                    unsigned short l_1405[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int l_1415 = 0xEE2A4955L;
                    int i;
                    for (l_1199 = 0; (l_1199 >= 22); ++l_1199)
                    {
                        (*g_64) = (*l_1272);
                        return l_1405[2];


                    }
                    l_1415 ^= (safe_sub_func_int16_t_s_s(func_34(func_52((safe_sub_func_int16_t_s_s((0x6BL ^ (safe_lshift_func_uint8_t_u_s(((void*)0 != l_1162[3]), 1))), func_26((!g_1412), ((*g_343) = l_1405[5]), &l_1222, (*l_1272)))), (safe_unary_minus_func_uint16_t_u(l_1405[2])), l_1405[4], l_1414, l_1405[4]), l_1388), 6L));
                    l_1422 |= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(255UL, ((+(l_1420 >= l_1405[2])) != (+(((((safe_unary_minus_func_uint8_t_u(func_26((*l_1272), (*l_1272), func_2(l_1405[2]), l_1405[4]))) & (-8L)) < (*l_1272)) >= l_1389) & 0x06L))))), (*l_1272)));
                }
            }

            ;

            ;
            (*g_537) = (*l_1272);
        }
        else
        {
            int l_1423 = 1L;
            l_1423 = ((*g_4) = ((*g_373) == (void*)0));
        }


        ;

        ;
        ;
    }
    else
    {
        int l_1424 = 0x0DACA19FL;
        unsigned short l_1428[1];
        int l_1435 = 1L;
        unsigned l_1439 = 0UL;
        short l_1455[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
        unsigned l_1487[10][4][4] = {{{0xA1A96D09L,0x04EADF49L,0xC1D4809EL,0x165C16D3L},{0xA1A96D09L,0x3A8F34F8L,0x2CEFEBFEL,0xA6BE603DL},{0x52BC3B60L,0x165C16D3L,4UL,0x52BC3B60L},{4294967295UL,0x2504E6E5L,1UL,1UL}},{{4294967293UL,0x8F4821F2L,4294967293UL,0UL},{0xA358B28FL,0xB19B5914L,0x074B55C9L,0xB90510B3L},{0x2504E6E5L,0xA6BE603DL,0x4ED717F8L,1UL},{0x2C96FD7FL,0x30DD844DL,0xB90510B3L,0x04EADF49L}},{{0x70046050L,0xA6BE603DL,0x30DD844DL,0x34509E95L},{0xB19B5914L,0UL,4294967295UL,0xA6BE603DL},{4294967295UL,0x4E728901L,4294967293UL,0UL},{0xCE00C53BL,0x165C16D3L,0x30DD844DL,0x30DD844DL}},{{0x6E2CE5D8L,0x6E2CE5D8L,0x2ED119BFL,4294967295UL},{0UL,0UL,0x52BC3B60L,0x735D398BL},{0x4F04811CL,0x2C96FD7FL,0x70046050L,0x52BC3B60L},{4294967293UL,0x2C96FD7FL,0xEFF06E30L,0x735D398BL}},{{0x2C96FD7FL,0UL,0x2CEFEBFEL,4294967295UL},{0x63F5C23AL,0x6E2CE5D8L,0x8F4821F2L,0x30DD844DL},{0x04EADF49L,0x165C16D3L,2UL,0UL},{0x2504E6E5L,0x4E728901L,0x3A8F34F8L,0xA6BE603DL}},{{0x30DD844DL,0UL,0x4E728901L,0x34509E95L},{0x04EADF49L,0xA6BE603DL,0UL,0x04EADF49L},{1UL,0x4F04811CL,0x2CEFEBFEL,0UL},{0x3A8F34F8L,0xA1A96D09L,0xA358B28FL,0xCE00C53BL}},{{4294967293UL,0UL,0x4ED717F8L,0xB19B5914L},{0x735D398BL,0x34509E95L,0x52BC3B60L,0UL},{0xB90510B3L,0x735D398BL,0xB90510B3L,0x2CEFEBFEL},{0x6E2CE5D8L,0xA6BE603DL,0xCBB36BBAL,0xA1A96D09L}},{{0xB19B5914L,0xB90510B3L,4294967293UL,0xA6BE603DL},{0UL,7UL,4294967293UL,0x074B55C9L},{0xB19B5914L,0x165C16D3L,0xCBB36BBAL,0x2504E6E5L},{0x6E2CE5D8L,0xEFF06E30L,5UL,4UL}},{{5UL,4UL,0xC1D4809EL,0x624DC362L},{0x2CEFEBFEL,1UL,0x74922402L,4294967295UL},{0x4F04811CL,0x2E429C81L,0xCBB36BBAL,0x2CEFEBFEL},{0x2E429C81L,4UL,0x0EDF9705L,0x7D4951BEL}},{{0x8F4821F2L,0xA358B28FL,0UL,0x52BC3B60L},{0x3A8F34F8L,1UL,0x2ED119BFL,4294967293UL},{1UL,0xB90510B3L,0x2E429C81L,0x7DC1B297L},{0x52BC3B60L,0UL,0UL,0x70046050L}}};
        int l_1488 = 0xE15EE484L;
        unsigned char l_1489 = 0x62L;
        short ****l_1511 = (void*)0;
        char *l_1547 = (void*)0;
        char l_1577 = 0L;
        char l_1608 = 0L;
        int l_1615 = 3L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1428[i] = 0xB2F8L;
        (*g_537) &= l_1424;
        (*g_537) = 0L;
        for (g_1076 = 3; (g_1076 <= 8); g_1076 += 1)
        {
            int l_1431 = 9L;
            int l_1437 = 0xBCA302C0L;
            int *l_1438 = &l_1219;
            unsigned **l_1445 = (void*)0;
            int l_1476 = 0L;
            int i;
            if (g_751[g_1076])
            {
                int i;
                return g_751[g_1076];
            }
            else
            {
                int i;
                (*g_4) = (!(~g_751[g_1076]));
            }
            for (l_1214 = 3; (l_1214 >= 0); l_1214 -= 1)
            {
                int *l_1430 = &g_41[2];
                short l_1436 = 0x10BCL;
                unsigned short l_1441[5] = {8UL,8UL,8UL,8UL,8UL};
                unsigned l_1477 = 18446744073709551606UL;
                unsigned l_1484[9] = {3UL,0xD42351C6L,3UL,0xD42351C6L,3UL,0xD42351C6L,3UL,0xD42351C6L,3UL};
                int i;
            }
        }
        for (l_1435 = 2; (l_1435 <= 9); l_1435 += 1)
        {
            unsigned char l_1491 = 1UL;
            unsigned l_1499[10][3] = {{0UL,0UL,0x038DEC7EL},{1UL,1UL,1UL},{0UL,0x038DEC7EL,0x038DEC7EL},{0x096AF2C9L,1UL,0x096AF2C9L},{0UL,0UL,0x038DEC7EL},{1UL,1UL,1UL},{0UL,0x038DEC7EL,0x038DEC7EL},{0x096AF2C9L,1UL,0x096AF2C9L},{0UL,0UL,0x038DEC7EL},{1UL,1UL,1UL}};
            short **l_1502 = &g_130[3];
            short **l_1503 = &g_130[3];
            short l_1512 = 0xD92EL;
            int l_1517 = (-1L);
            unsigned char **l_1545 = &g_276[3];
            char *l_1548 = &g_692;
            int l_1558 = 0x342B7F8AL;
            short *l_1562 = &g_1555;
            short *****l_1589 = &l_1511;
            int *l_1592 = &g_41[2];
            int l_1601 = 0xB5B48000L;
            unsigned l_1609 = 0x2AC07191L;
            int *l_1612 = &l_1424;
            int i, j;
        }
    }


    ;


    ;
    ;
    if ((*g_1613))
    {
        unsigned l_1618 = 0x7A256029L;
        unsigned l_1624 = 0x22663343L;
        int l_1630 = 1L;
        int l_1640[6][10][4] = {{{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)}},{{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)}},{{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)}},{{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)}},{{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)}},{{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)},{0xB56D8D70L,1L,0x3A7EE8B5L,(-1L)},{(-1L),0x2176542AL,0x2176542AL,(-1L)},{1L,1L,0L,(-1L)},{(-3L),0x2176542AL,1L,(-1L)}}};
        int *l_1644 = &g_41[1];
        unsigned char *l_1650[2];
        char l_1693 = (-5L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1650[i] = &g_1322[2];
        if (((~((**g_1124) = (safe_add_func_int16_t_s_s(l_1618, ((((0UL && (-2L)) > l_1619) == (!(safe_mod_func_int8_t_s_s(((l_1618 >= l_1618) | (safe_rshift_func_int16_t_s_s(l_1624, 13))), (1L & 0xF894L))))) || (*g_343)))))) | 4L))
        {
            unsigned *l_1629[7][1][10] = {{{&g_1081[4][0][3],&l_1179,(void*)0,&g_1081[4][0][3],&l_1179,&l_1619,&l_1179,&l_1179,&l_1619,&l_1179}},{{&g_1081[4][0][3],&g_1081[4][0][3],&g_1081[4][0][3],&g_1081[4][0][3],&g_293,&g_1081[3][0][5],&l_1179,&g_1081[4][0][3],&g_1081[3][0][5],&l_1179}},{{&g_1081[3][0][5],&l_1179,&g_1081[4][0][3],&g_1081[3][0][5],&l_1179,&g_1081[3][0][5],&g_1081[4][0][3],&l_1179,&g_1081[3][0][5],&g_293}},{{&g_1081[4][0][3],&l_1179,(void*)0,&g_1081[4][0][3],&l_1179,&l_1619,&l_1179,&l_1179,&l_1619,&l_1179}},{{&g_1081[4][0][3],&g_1081[4][0][3],&g_1081[4][0][3],&g_1081[4][0][3],&g_293,&g_1081[3][0][5],&l_1179,&g_1081[4][0][3],&g_1081[3][0][5],&l_1179}},{{&g_1081[3][0][5],&l_1179,&g_1081[4][0][3],&g_1081[3][0][5],&l_1179,&g_1081[3][0][5],&g_1081[4][0][3],&l_1179,&g_1081[3][0][5],&g_293}},{{&g_1081[4][0][3],&l_1179,(void*)0,&g_1081[4][0][3],&g_1081[4][0][3],&l_1179,&l_1619,&l_1619,&l_1179,&g_1081[4][0][3]}}};
            int l_1633 = 0xE6E62F80L;
            int l_1641 = 0x03C34A92L;
            unsigned l_1645 = 0x04DEFD03L;
            unsigned short l_1648 = 0xB776L;
            unsigned char l_1651 = 0x74L;
            unsigned short *****l_1672 = &g_935;
            unsigned short ******l_1671 = &l_1672;
            unsigned l_1673 = 0x8D556697L;
            int i, j, k;
            if ((safe_sub_func_int8_t_s_s(((+l_1624) & (safe_add_func_uint32_t_u_u((l_1630 = ((***l_1324) = l_1624)), (safe_mod_func_uint8_t_u_u((l_1641 = (+((l_1633 ^ (g_1081[1][1][1] = ((((((*l_1644) = l_1645) | l_1645) >= 0x45C6786AL) != l_1633) != 65535UL))) > 0xB0DAL))), 0xA7L))))), 8L)))
            {
                char l_1646 = (-1L);
                (*g_537) ^= (!(((6L & ((**g_1446) = 0UL)) & (*l_1644)) >= 0x65L));
                (*g_4) = ((~(*l_1644)) > l_1641);
                (*g_911) = (*g_911);
            }
            else
            {
                unsigned **l_1652[6][10] = {{&l_1629[6][0][3],&g_408,&l_1629[4][0][8],(void*)0,&l_1629[4][0][8],&g_408,&l_1629[6][0][3],&l_1629[6][0][3],&g_408,&l_1629[4][0][8]},{&g_408,&l_1629[6][0][3],&l_1629[6][0][3],&g_408,&l_1629[4][0][8],(void*)0,&l_1629[4][0][8],&g_408,&l_1629[6][0][3],&l_1629[6][0][3]},{&l_1629[4][0][8],&l_1629[6][0][3],&l_1629[4][0][9],&l_1629[3][0][2],&l_1629[3][0][2],&l_1629[4][0][9],&l_1629[6][0][3],&l_1629[4][0][8],&l_1629[6][0][3],&l_1629[4][0][9]},{(void*)0,&g_408,&l_1629[3][0][2],&g_408,(void*)0,&l_1629[4][0][9],&l_1629[4][0][9],(void*)0,&g_408,&l_1629[3][0][2]},{&l_1629[4][0][8],&l_1629[4][0][8],&l_1629[3][0][2],(void*)0,&g_408,(void*)0,&l_1629[3][0][2],&l_1629[4][0][8],&l_1629[4][0][8],&l_1629[3][0][2]},{&g_408,(void*)0,&l_1629[4][0][9],&l_1629[4][0][9],(void*)0,&g_408,&l_1629[3][0][2],&g_408,(void*)0,&l_1629[4][0][9]}};
                int l_1654 = (-7L);
                short l_1655[4][10] = {{0x0F9FL,9L,9L,0x0F9FL,9L,9L,0x0F9FL,9L,9L,0x0F9FL},{9L,0x0F9FL,9L,9L,0x0F9FL,9L,9L,0x0F9FL,9L,9L},{0x0F9FL,0x0F9FL,1L,0x0F9FL,0x0F9FL,1L,0x0F9FL,0x0F9FL,1L,0x0F9FL},{0x0F9FL,9L,9L,0x0F9FL,9L,9L,0x0F9FL,9L,9L,0x0F9FL}};
                unsigned short *****l_1670[10] = {(void*)0,&g_935,&g_935,(void*)0,&g_935,(void*)0,&g_935,&g_935,(void*)0,&g_935};
                unsigned short ******l_1669 = &l_1670[0];
                int i, j;
                for (g_39 = 0; (g_39 <= 3); g_39 += 1)
                {
                    int l_1649 = (-1L);
                    int l_1656 = (-1L);
                    for (l_1215 = 0; (l_1215 <= 3); l_1215 += 1)
                    {
                        int *l_1653[6][5] = {{&l_1459,&l_1459,&l_1398,&l_1219,(void*)0},{(void*)0,&l_1649,&l_1649,(void*)0,&l_1459},{(void*)0,&l_1219,&l_1640[4][5][1],&l_1640[4][5][1],&l_1219},{&l_1459,&l_1649,&l_1640[4][5][1],&l_1398,&l_1398},{&l_1649,&l_1459,&l_1649,&l_1640[4][5][1],&l_1398},{&l_1219,(void*)0,&l_1398,(void*)0,&l_1219}};
                        int i, j;
                        (*g_537) = ((((l_1649 ^ (l_1656 |= ((l_1651 = ((*g_408) ^= (l_1650[0] != (*g_912)))) != ((((l_1652[0][8] != ((*l_1324) = &g_408)) <= ((*g_343) = (g_1322[0] || 0UL))) != l_1649) & 0x35L)))) != 0L) & 4294967295UL) | l_1649);
                        (*g_772) = (void*)0;
                        if (l_1633)
                            break;
                        return l_1656;


                    }
                    (*g_772) = &l_1640[3][1][3];
                    for (l_1648 = 0; (l_1648 <= 3); l_1648 += 1)
                    {
                        (*g_772) = &l_1640[1][8][0];
                        (*g_1613) = (((void*)0 == &g_408) && (*l_1644));
                    }
                }


                (*l_1644) = (safe_add_func_int16_t_s_s(l_1654, (((safe_add_func_int32_t_s_s(((*g_4) = (*l_1644)), ((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((*l_1644), (*l_1644))), ((l_1669 == l_1671) > (l_1641 &= (l_1673 = ((((void*)0 != (*g_911)) < (*l_1644)) | (*l_1644))))))), (*l_1644))) <= (*g_408)) == 0xA3E6L), 0x31L)) < (*l_1644)))) != (*g_343)) ^ 0L)));
                (*g_772) = &l_1640[5][0][1];
            }


        }
        else
        {
            unsigned l_1676 = 4294967295UL;
            int *l_1678 = &l_1640[1][1][2];
            short l_1703 = 0L;
            char **l_1712 = &g_343;
            unsigned short *****l_1736 = (void*)0;
            unsigned short ******l_1735[1][4][8] = {{{(void*)0,&l_1736,&l_1736,(void*)0,(void*)0,(void*)0,&l_1736,&l_1736},{&l_1736,(void*)0,&l_1736,&l_1736,(void*)0,&l_1736,(void*)0,&l_1736},{(void*)0,(void*)0,(void*)0,&l_1736,&l_1736,(void*)0,(void*)0,(void*)0},{&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736}}};
            int *l_1749 = &l_1640[5][0][1];
            int i, j, k;
            if (((*l_1644) < ((*g_343) = (safe_lshift_func_uint8_t_u_u(((((((((*g_1161) != (**g_1160)) & 0xB245L) < (*l_1644)) > l_1676) > (&g_1124 == &g_1124)) < 1L) >= l_1677), l_1676)))))
            {
                short l_1682 = 5L;
                for (l_1219 = 1; (l_1219 <= 8); l_1219 += 1)
                {
                    short l_1679 = (-1L);
                    l_1678 = l_1678;
                    l_1679 ^= (*l_1678);
                    (*g_4) &= (safe_sub_func_uint32_t_u_u((**g_1446), l_1679));
                }
                return l_1682;


            }
            else
            {
                int l_1691 = 0x136F7E42L;
                int l_1713 = 0x0937178AL;
                unsigned l_1714 = 0UL;
                int *l_1743 = &l_1219;
                unsigned l_1745[9][5][5] = {{{0xDD67F54EL,0x84ED8EFAL,18446744073709551606UL,7UL,18446744073709551615UL},{0x6ADF5307L,0x84ED8EFAL,0x4EEA1CA6L,0x199015AAL,0x0D54AB03L},{0xBCE80CFCL,1UL,7UL,0x40F6200BL,0xF60745F1L},{0xDD67F54EL,0x13ACB28DL,18446744073709551608UL,0xF60745F1L,0x0E9BCAFDL},{0x0015A064L,0x4016A716L,18446744073709551615UL,0x2B2AED2AL,0UL}},{{0x2EB019A0L,0xBCE80CFCL,3UL,3UL,0xBCE80CFCL},{18446744073709551615UL,0UL,0x0015A064L,0x199015AAL,1UL},{7UL,0xC50D8BD2L,0x78361F7BL,0x304A8E1AL,18446744073709551607UL},{0x304A8E1AL,0x45517079L,0x178B9E2AL,0x580CA735L,0xFAC4E800L},{7UL,0x462F1D09L,1UL,0UL,0x6ADF5307L}},{{18446744073709551615UL,1UL,0xF60745F1L,0x99612FEDL,0x304A8E1AL},{0x2EB019A0L,0xEB73D28BL,0xDD67F54EL,0UL,0x99612FEDL},{0x0015A064L,18446744073709551607UL,0x4016A716L,0x6946E096L,18446744073709551615UL},{0xDD67F54EL,0x3B8A940DL,0x1D304507L,0x05A593A0L,0x2AA7D4C9L},{18446744073709551607UL,1UL,0xB694905DL,0x99BAC0C1L,1UL}},{{0x462F1D09L,18446744073709551615UL,0x0E9BCAFDL,0x78361F7BL,1UL},{3UL,0xEC25858DL,0x84ED8EFAL,1UL,0x2AA7D4C9L},{0x7F9DBB86L,1UL,0x99BAC0C1L,0xC50D8BD2L,18446744073709551615UL},{4UL,3UL,0UL,0x6ADF5307L,0x99612FEDL},{0x685FFA8BL,4UL,0xF95D4DE4L,18446744073709551606UL,0x304A8E1AL}},{{0xEC25858DL,0x99612FEDL,0x99612FEDL,0xEC25858DL,0x6ADF5307L},{1UL,18446744073709551614UL,0x45517079L,0UL,0x7F9DBB86L},{18446744073709551607UL,0x3B8A940DL,0UL,1UL,0xFAC4E800L},{0x99612FEDL,0x199015AAL,18446744073709551606UL,0UL,0x7D7B0365L},{1UL,18446744073709551615UL,3UL,0x2438E3C0L,0x13ACB28DL}},{{0x13ACB28DL,1UL,0UL,0x4016A716L,18446744073709551606UL},{0x4EEA1CA6L,0x40F6200BL,1UL,0xB694905DL,0xDD67F54EL},{0x2AA7D4C9L,0x7F9DBB86L,0x1922A0AEL,18446744073709551615UL,0x462F1D09L},{0x6946E096L,0x4016A716L,18446744073709551607UL,0x0015A064L,0x05A593A0L},{0x4016A716L,18446744073709551606UL,0UL,0x40F6200BL,1UL}},{{18446744073709551614UL,1UL,0UL,0x580CA735L,0x3B8A940DL},{18446744073709551615UL,0UL,18446744073709551607UL,8UL,0xC50D8BD2L},{18446744073709551615UL,0UL,0x1922A0AEL,0UL,1UL},{4UL,0xBCE80CFCL,1UL,0x1D304507L,0x0015A064L},{18446744073709551615UL,0xF60745F1L,0UL,18446744073709551615UL,0UL}},{{0x99BAC0C1L,0x99BAC0C1L,3UL,18446744073709551606UL,0x6946E096L},{0x1922A0AEL,0x2AA7D4C9L,18446744073709551606UL,1UL,0xF60745F1L},{0xC83D14B1L,0UL,0UL,18446744073709551615UL,0UL},{0x6ADF5307L,0x2AA7D4C9L,0x45517079L,0UL,0UL},{0xEC25858DL,0x99BAC0C1L,18446744073709551615UL,0x0D54AB03L,0x2AA7D4C9L}},{{8UL,0xF60745F1L,18446744073709551608UL,18446744073709551615UL,0xEC25858DL},{0xC50D8BD2L,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0x0D54AB03L},{1UL,18446744073709551606UL,0x6ADF5307L,0UL,0x199015AAL},{0x2EB019A0L,0x13ACB28DL,18446744073709551607UL,0xFAC4E800L,0xEB73D28BL},{0UL,0xB694905DL,3UL,0x99612FEDL,0x178B9E2AL}}};
                int i, j, k;
                (*g_772) = func_52((**g_1446), (safe_sub_func_int8_t_s_s(0x98L, (safe_sub_func_int16_t_s_s((-9L), ((safe_lshift_func_int16_t_s_s((l_1691 = (safe_rshift_func_int8_t_s_u(func_26((l_1691 || l_1691), g_1692, &l_1691, l_1693), 4))), 3)) == (*g_408)))))), (**g_1124), (*l_1678), (*l_1678));

                ;
                for (l_1459 = 3; (l_1459 <= 8); l_1459 += 1)
                {
                    char ***l_1701 = &g_373;
                    int *l_1704 = (void*)0;
                    unsigned short l_1709 = 0x6E23L;
                    int *l_1722[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    unsigned short *******l_1737[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                }
                for (l_1400 = 8; (l_1400 >= 0); l_1400 -= 1)
                {
                    int *l_1744 = &l_1713;
                    for (g_1325 = 0; (g_1325 <= 8); g_1325 += 1)
                    {
                        int i;
                        l_1743 = l_1742;

                        ;
                        (*l_1742) = (((**g_1446) && (*l_1678)) > (*l_1644));
                        (*g_772) = l_1744;
                    }
                    for (l_1203 = 0; (l_1203 <= 2); l_1203 += 1)
                    {
                        (*g_1613) = ((*l_1644) != ((*l_1743) = l_1745[3][1][3]));
                        (*l_1742) ^= (~(*l_1678));
                    }
                    for (g_293 = 0; (g_293 <= 2); g_293 += 1)
                    {
                        short l_1750 = 0xE20EL;
                        (*l_1644) |= func_34(l_1678, (safe_sub_func_uint32_t_u_u(((void*)0 != l_1748[1][0][1]), ((*g_408) = ((*l_1678) || func_45((*l_1744), &l_1459, (l_1749 = &l_1459), l_1750))))));
                        (*g_537) = (*l_1749);
                    }
                }

                ;

                ;
                ;
                for (g_81 = 0; (g_81 <= 22); g_81 = safe_add_func_int32_t_s_s(g_81, 7))
                {
                    int l_1753 = (-9L);
                    for (g_1325 = 1; (g_1325 <= 8); g_1325 += 1)
                    {
                        return l_1753;



                    }
                }
            }

            ;

            ;
        }

        ;

    }
    else
    {
        unsigned char l_1754 = 255UL;
        int ****l_1764[3][9][7] = {{{(void*)0,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,(void*)0,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{(void*)0,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,(void*)0,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,(void*)0,(void*)0,(void*)0,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,(void*)0,&g_558,&g_558},{(void*)0,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558}},{{&g_558,&g_558,&g_558,&g_558,&g_558,(void*)0,&g_558},{&g_558,(void*)0,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,(void*)0,&g_558,&g_558,&g_558},{(void*)0,&g_558,&g_558,&g_558,(void*)0,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558}},{{&g_558,&g_558,(void*)0,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,(void*)0,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,(void*)0,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,(void*)0,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558},{&g_558,&g_558,&g_558,&g_558,&g_558,&g_558,&g_558}}};
        unsigned l_1766 = 0x32523B41L;
        int *l_1774 = &g_1285;
        short l_1785 = 0x6B67L;
        int l_1814 = 7L;
        unsigned short ******l_1855 = &g_1739;
        char *l_1859[8];
        int *l_1899 = (void*)0;
        unsigned short *l_1900 = (void*)0;
        unsigned short *l_1901[5] = {&l_1204,&l_1204,&l_1204,&l_1204,&l_1204};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1859[i] = &g_1004;
        if (l_1754)
        {
            unsigned l_1755 = 0UL;
            int l_1771 = 0xD2643969L;
            int *l_1778 = &g_865;
            unsigned short ******l_1790 = &g_1739;
            int l_1800 = 0xC9274BC6L;
            int l_1801[9] = {0xD25EA405L,0xD25EA405L,0x7205A588L,0xD25EA405L,0xD25EA405L,0x7205A588L,0xD25EA405L,0xD25EA405L,0x7205A588L};
            int l_1802 = 3L;
            int l_1834[4];
            short ****l_1843 = &l_1748[1][0][1];
            int l_1861 = 1L;
            int i;
            for (i = 0; i < 4; i++)
                l_1834[i] = 0xB7B3EE4EL;
            if ((l_1755 = (0x4CL ^ 0xE9L)))
            {
                unsigned l_1759 = 0x8A94CD79L;
                short **l_1765[6][4] = {{&g_130[4],&g_130[3],&g_130[8],&g_130[3]},{&g_130[3],&g_130[3],&g_130[8],&g_130[8]},{&g_130[4],&g_130[4],&g_130[3],&g_130[8]},{&g_130[1],&g_130[3],&g_130[1],&g_130[3]},{&g_130[1],&g_130[3],&g_130[3],&g_130[1]},{&g_130[4],&g_130[3],&g_130[8],&g_130[3]}};
                char l_1805 = 9L;
                int l_1811 = (-1L);
                unsigned short *l_1812 = (void*)0;
                int *l_1822 = &g_125[1][5];
                unsigned char l_1844 = 251UL;
                short l_1845 = (-1L);
                int i, j;
                (*l_1742) &= (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(((4294967295UL == ((l_1759 && (((*g_4) = ((*g_557) != (void*)0)) ^ ((void*)0 != &g_558))) != (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((&g_558 == l_1764[2][1][4]), ((l_1765[1][3] != l_1765[1][3]) & l_1759))), l_1766)))) && (*g_343)))), (**g_1124)));
                if (l_1766)
                {
                    int *l_1777 = &l_1219;
                    unsigned short *******l_1791 = (void*)0;
                    unsigned short *******l_1792 = &g_1738[3];
                    int ****l_1799 = &g_558;
                    for (g_39 = 0; (g_39 != (-8)); g_39--)
                    {
                        int *l_1775[4] = {&l_1219,&l_1219,&l_1219,&l_1219};
                        unsigned short *l_1776 = &g_1374;
                        int l_1789 = 0x942CEA46L;
                        int i;
                        l_1778 = ((*g_772) = &l_1771);

                        ;
                        (*l_1777) = (l_1789 = ((*g_4) = ((*l_1742) = (((*l_1774) = l_1759) > ((safe_mod_func_int32_t_s_s(func_26(((*l_1778) | ((~(safe_rshift_func_int8_t_s_s((*g_343), ((safe_lshift_func_uint8_t_u_s(((0xD5L > ((func_26(((((**g_1124) = (**g_1446)) <= (l_1785 <= 2L)) | (safe_mod_func_uint16_t_u_u(func_34((***g_557), l_1759), (*l_1778)))), (*g_343), g_1788, l_1759) & 0x31L) | (*g_343))) != (*l_1778)), (*g_343))) <= l_1759)))) <= (-10L))), (*l_1778), &l_1400, l_1785), (-3L))) != (*l_1778))))));
                    }


                    ;
                    (*l_1777) = ((((*l_1792) = l_1790) == (g_1794[2] = l_1793)) == (*l_1778));
                    (*l_1774) = (safe_add_func_int32_t_s_s(((*l_1777) |= (l_1759 ^ (*g_343))), ((l_1802 ^= ((safe_lshift_func_int16_t_s_s((*l_1778), 11)) != ((*l_1774) == (l_1801[3] = (l_1800 ^= ((0xDDL ^ (0x7515L < ((void*)0 != l_1799))) == ((((**g_1446) != 0x184DCF41L) || (*l_1774)) >= (*g_343)))))))) ^ 0xF2L)));
                }
                else
                {
                    (*g_772) = (void*)0;
                }


                ;
                for (l_1802 = 0; (l_1802 != (-3)); l_1802 = safe_sub_func_uint32_t_u_u(l_1802, 9))
                {
                    (*g_772) = &l_1647[6][2][1];


                    (*g_1788) = (((*g_1613) |= (*l_1778)) ^ ((*l_1774) < (((l_1759 == ((*l_1774) != func_34((**g_558), (*l_1774)))) ^ ((void*)0 != &g_373)) | 0x24L)));
                    return l_1805;


                }
                for (g_1049 = 5; (g_1049 >= 0); g_1049 -= 1)
                {
                    int l_1806 = 0xCC13EC28L;
                    unsigned short l_1807 = 0UL;
                    unsigned short *l_1810 = &l_1282;
                    unsigned short **l_1813 = &g_623[5][0][6];
                    int l_1816 = 0x7CE24A89L;
                    unsigned l_1820 = 0x124862F7L;
                    int l_1835 = 0x5D0FA443L;
                    if ((l_1814 &= (((+(l_1806 || (**g_1124))) ^ (((l_1811 = (l_1807 ^ (((*l_1810) = ((safe_lshift_func_int16_t_s_u(((*l_1774) = 0x9A9BL), 14)) != (*l_1778))) || (*l_1774)))) > (((*l_1813) = l_1812) == l_1812)) <= 0x82L)) && (-9L))))
                    {
                        l_1816 = ((*l_1774) = (l_1811 = g_1815));
                    }
                    else
                    {
                        int *l_1817 = &l_1647[1][3][1];
                        int i;
                        (*g_772) = l_1817;
                    }
                }



            }
            else
            {
                char l_1850 = 0x43L;
                int *l_1863 = (void*)0;
                int ****l_1885 = &g_771[5];
                for (g_1815 = 0; (g_1815 < 19); ++g_1815)
                {
                    unsigned short *******l_1856 = &l_1855;
                    unsigned short *******l_1857[4];
                    int l_1858 = 0L;
                    unsigned *l_1886 = (void*)0;
                    unsigned *l_1887[4] = {&g_1081[5][0][0],&g_1081[5][0][0],&g_1081[5][0][0],&g_1081[5][0][0]};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1857[i] = (void*)0;
                }
                return (*l_1778);


            }



            ;
            (*g_772) = &l_1814;


        }
        else
        {
            (*l_1742) |= (*l_1774);
            (*g_1613) = (*g_1788);
        }



        if ((*g_537))
        {
            (*g_772) = (void*)0;
        }
        else
        {
            (*g_772) = &l_1814;
        }
        (*g_537) = (safe_lshift_func_int8_t_s_u((*g_343), (+(safe_rshift_func_uint16_t_u_u(((*l_1774) = (((safe_lshift_func_int8_t_s_s((*g_343), (*g_343))) == ((**g_1446) ^= func_34(l_1899, ((*l_1742) ^= 65535UL)))) != (!((*l_1774) && (*g_343))))), 14)))));
    }

    ;


    return l_1902;



}







static int * func_2(int p_3)
{
    char l_7[7][2][2] = {{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}}};
    int l_958 = 0x40C0B196L;
    short **l_964 = &g_130[3];
    int **l_969 = &g_783[3][3][4];
    unsigned char l_1002 = 0UL;
    unsigned short ****l_1052 = &g_936;
    unsigned l_1080 = 4294967291UL;
    unsigned short l_1093 = 0x1BCBL;
    unsigned char ****l_1096 = &g_911;
    int *l_1116 = &g_125[1][5];
    unsigned l_1131[10][1][2] = {{{0xDCCBCEF1L,0xDCCBCEF1L}},{{4294967295UL,0xDCCBCEF1L}},{{0xDCCBCEF1L,0xC0D9342DL}},{{4294967290UL,0x9FC30EEEL}},{{4294967295UL,4294967290UL}},{{0x9FC30EEEL,0xC0D9342DL}},{{0x9FC30EEEL,4294967290UL}},{{4294967295UL,0x9FC30EEEL}},{{4294967290UL,0xC0D9342DL}},{{0xDCCBCEF1L,0xDCCBCEF1L}}};
    int i, j, k;
    for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
    {
        int *l_15 = &g_5;
        int *l_24[8] = {&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25,&g_25};
        int l_959 = 2L;
        int l_963 = 1L;
        int l_1019 = 0x1F2571F1L;
        unsigned short *****l_1034 = (void*)0;
        unsigned **l_1062 = &g_408;
        int ****l_1074 = &g_771[2];
        int l_1094[2];
        unsigned short l_1139 = 0xAAC8L;
        int i;
        for (i = 0; i < 2; i++)
            l_1094[i] = 0L;
    }
    (*g_772) = (*g_772);
    return (*l_969);


}







static char func_8(unsigned p_9, short p_10)
{
    unsigned char ***l_547 = (void*)0;
    int l_548 = (-2L);
    int l_551 = 0L;
    int **l_556 = &g_214[0];
    int ***l_555 = &l_556;
    int ****l_554 = &l_555;
    int l_589 = 0x4F60C8B6L;
    unsigned short l_591 = 0x8A8AL;
    unsigned l_609 = 0x6E60966BL;
    unsigned short ***l_661[4];
    int *l_669 = (void*)0;
    short l_691 = 0x8608L;
    unsigned l_693 = 0xF172139AL;
    unsigned short ****l_719 = &l_661[1];
    int **l_760 = &g_113[1][2][5];
    int ***l_759[3][6][3] = {{{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{(void*)0,&l_760,(void*)0},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760}},{{&l_760,&l_760,&l_760},{(void*)0,&l_760,(void*)0},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{(void*)0,&l_760,(void*)0}},{{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{(void*)0,&l_760,(void*)0},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760}}};
    int ****l_758 = &l_759[1][3][2];
    int ***l_770 = &l_760;
    char **l_793[5][10][5] = {{{(void*)0,(void*)0,&g_343,&g_343,&g_343},{&g_343,(void*)0,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,(void*)0,&g_343},{&g_343,&g_343,(void*)0,&g_343,&g_343},{(void*)0,&g_343,(void*)0,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,(void*)0,&g_343}},{{&g_343,&g_343,&g_343,(void*)0,(void*)0},{(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0},{&g_343,&g_343,(void*)0,(void*)0,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,(void*)0,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0}},{{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,(void*)0},{&g_343,(void*)0,(void*)0,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,(void*)0},{(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,(void*)0,&g_343,&g_343}},{{&g_343,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{(void*)0,(void*)0,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,(void*)0},{(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,(void*)0,&g_343}},{{&g_343,&g_343,&g_343,(void*)0,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,(void*)0},{&g_343,&g_343,&g_343,&g_343,(void*)0},{&g_343,&g_343,&g_343,&g_343,(void*)0},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343},{&g_343,(void*)0,&g_343,&g_343,&g_343},{(void*)0,&g_343,&g_343,&g_343,&g_343},{&g_343,&g_343,&g_343,&g_343,&g_343}}};
    unsigned char l_798 = 255UL;
    unsigned l_800 = 0xAF293779L;
    int *l_813 = (void*)0;
    int *l_902 = &l_548;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_661[i] = &g_622;
    if (p_9)
    {
        unsigned char *l_552 = (void*)0;
        unsigned char *l_553 = &g_82;
        int l_560 = 0x8EA8EEE3L;
        short *l_561 = (void*)0;
        short *l_562 = &g_39;
        int l_563 = 0xB041C9E2L;
        int *l_564[8][9] = {{&g_5,&g_41[2],&g_5,&l_563,&l_563,&g_5,&g_41[0],(void*)0,&l_563},{&g_41[1],&l_563,(void*)0,&g_41[1],&g_5,&g_41[1],(void*)0,&l_563,&g_41[1]},{&l_563,&l_563,&l_551,&l_563,&g_41[3],&l_563,&l_563,&l_551,&l_563},{(void*)0,&g_5,&l_548,&l_548,&g_5,(void*)0,&g_41[1],&l_560,&g_41[2]},{&g_5,(void*)0,&l_551,&l_563,&l_551,&g_5,&g_5,&l_551,&l_563},{&g_41[1],&l_563,&g_41[1],&l_548,&l_560,&g_41[1],(void*)0,&g_5,&l_548},{&g_41[0],&l_551,&l_551,&g_41[0],&l_563,&g_41[0],&l_551,&l_551,&g_41[0]},{&g_41[1],&l_560,&g_41[2],&l_548,&l_563,&g_41[1],&l_548,(void*)0,&l_548}};
        int i, j;
        l_548 = ((l_563 != p_9) >= 0UL);
        l_551 = p_9;
        for (g_142 = 0; (g_142 != (-26)); g_142--)
        {
            char l_569 = (-5L);
            int *l_597 = &g_125[4][4];
            int **l_598 = &g_113[3][6][2];
            short l_599[1];
            int l_640 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_599[i] = 0x7BF3L;
            for (g_25 = 0; (g_25 != (-17)); --g_25)
            {
                unsigned short l_586 = 0x2304L;
                int l_590 = (-3L);
                int l_634[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_634[i] = 2L;
                if (l_551)
                    break;
                if (l_548)
                {
                    unsigned short l_570 = 0xCC0AL;
                    int l_595 = 0x577162EBL;
                    unsigned short *l_596 = &l_591;
                    for (g_255 = 0; (g_255 <= 0); g_255 += 1)
                    {
                        char l_571 = 7L;
                        unsigned char **l_581 = (void*)0;
                        unsigned char ***l_580 = &l_581;
                        char *l_592[9] = {&g_142,&l_571,&g_142,&g_142,&l_571,&g_142,&g_142,&l_571,&g_142};
                        int **l_593 = (void*)0;
                        int **l_594[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_594[i] = (void*)0;
                        l_571 |= (l_569 != l_570);
                        l_548 = p_9;
                        g_113[1][2][5] = &g_5;
                        l_595 |= ((l_564[7][3] != &g_293) >= 0x119B0347L);
                    }
                    (*l_598) = &g_41[2];
                }
                else
                {
                    unsigned short l_602[8][5] = {{0x7CCEL,0x359EL,65529UL,0x72B6L,65529UL},{0x030BL,0x030BL,0xFA45L,0xB89CL,65529UL},{0xEB4BL,0xDA0CL,0xBBD0L,1UL,0UL},{1UL,1UL,0x030BL,4UL,0x72B6L},{4UL,0xDA0CL,65528UL,65528UL,0xDA0CL},{0UL,0x030BL,1UL,65528UL,0x359EL},{0x2A37L,0x359EL,0xD27AL,4UL,1UL},{0xB89CL,0xBBD0L,0x72B6L,1UL,0xEB4BL}};
                    int *l_615 = &g_125[8][7];
                    int ***l_625 = (void*)0;
                    int ***l_626 = &l_598;
                    int l_645 = 0xB0A37766L;
                    int i, j;
                    (*l_598) = &l_589;
                    for (g_182 = 22; (g_182 != 54); g_182++)
                    {
                        unsigned short l_614[5];
                        int l_616 = (-3L);
                        unsigned short **l_618 = (void*)0;
                        unsigned short ***l_617 = &l_618;
                        unsigned short *l_621 = &g_105[1];
                        unsigned short **l_620 = &l_621;
                        unsigned short ***l_619[9][9] = {{(void*)0,&l_620,&l_620,(void*)0,&l_620,&l_620,&l_620,&l_620,&l_620},{&l_620,&l_620,&l_620,&l_620,&l_620,(void*)0,(void*)0,&l_620,&l_620},{(void*)0,&l_620,(void*)0,&l_620,&l_620,&l_620,&l_620,(void*)0,&l_620},{(void*)0,&l_620,&l_620,&l_620,(void*)0,&l_620,(void*)0,&l_620,&l_620},{&l_620,&l_620,&l_620,&l_620,&l_620,(void*)0,&l_620,(void*)0,&l_620},{&l_620,&l_620,&l_620,&l_620,(void*)0,(void*)0,&l_620,&l_620,&l_620},{&l_620,&l_620,&l_620,&l_620,&l_620,&l_620,&l_620,&l_620,&l_620},{&l_620,&l_620,&l_620,&l_620,(void*)0,&l_620,&l_620,&l_620,&l_620},{&l_620,&l_620,(void*)0,&l_620,&l_620,&l_620,&l_620,&l_620,&l_620}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_614[i] = 0x67ECL;
                        l_616 = (((-5L) > ((*g_408) = 0x761BF09AL)) <= (safe_sub_func_uint16_t_u_u(g_25, ((*g_343) >= ((p_10 > l_614[1]) <= (((p_9 || func_34(l_615, l_590)) && p_10) | 0x799FDC12L))))));
                        g_622 = ((*l_617) = (void*)0);

                        ;
                        (*l_598) = g_624;
                        if ((*g_537))
                            continue;
                    }
                    (*l_626) = &g_113[1][2][5];
                    for (g_255 = 23; (g_255 > 43); g_255 = safe_add_func_int32_t_s_s(g_255, 4))
                    {
                        char l_629 = 0L;
                        char *l_635 = &g_144;
                        char ***l_643 = (void*)0;
                        char ***l_644 = &g_373;
                        l_629 ^= p_10;
                        l_640 = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((p_9 >= p_10) <= (((l_629 == ((*l_635) = ((*g_343) != l_634[2]))) | l_629) && (*g_343))), (safe_mod_func_int16_t_s_s((p_10 < func_34(&l_634[2], p_9)), p_10)))), 5)) ^ 9L);
                        l_645 = ((safe_lshift_func_uint8_t_u_s(((*g_408) ^ (*g_537)), 0)) <= (((*l_644) = &g_343) == &g_343));

                        ;
                        (*l_598) = &g_5;
                    }
                }
            }
        }


        ;
        for (g_122 = 0; (g_122 < 24); ++g_122)
        {
            int ****l_654 = &l_555;
            int l_655 = 0x18681BFBL;
            int l_656[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_656[i][j] = 0xF69A823BL;
            }
            l_655 = ((p_10 && ((*l_553) |= ((g_293 = 0xAD97B924L) || ((((-9L) == (safe_add_func_int32_t_s_s((l_551 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(p_10, p_10)), 15)) > p_10)), p_9))) && l_589) <= 0x2FL)))) <= 4294967286UL);
            l_656[1][0] = l_609;
        }
    }
    else
    {
        unsigned short ***l_663 = &g_622;
        unsigned short ****l_662 = &l_663;
        unsigned l_668 = 0UL;
        int *l_685[9][2] = {{&g_125[1][5],&g_125[1][5]},{(void*)0,&g_125[1][5]},{&g_125[1][5],(void*)0},{&g_125[1][5],&g_125[1][5]},{(void*)0,&g_125[1][5]},{&g_125[1][5],(void*)0},{&g_125[1][5],&g_125[1][5]},{(void*)0,&g_125[1][5]},{&g_125[1][5],(void*)0}};
        int l_710[6];
        int *l_736 = &l_551;
        short l_737 = 0xDFA4L;
        char **l_792 = &g_343;
        int ****l_803 = &g_771[8];
        int i, j;
        for (i = 0; i < 6; i++)
            l_710[i] = 0x6EE1DD4AL;
        l_669 = &l_589;

        ;
        (*l_669) ^= 0xFE66DD63L;
        if (((safe_sub_func_uint16_t_u_u(((**g_622) |= (+(safe_unary_minus_func_uint8_t_u(l_668)))), (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*g_343) = ((*l_669) | ((func_34(((*g_559) = (**l_555)), (safe_rshift_func_int8_t_s_u((p_10 & p_9), (p_10 ^ (safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((void*)0 == l_685[8][1]), ((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(l_691, 0xC77BB7EBL)) && l_668), (*g_408))))) ^ 247UL))) || 0x3546DB77L) != (*l_669)), g_692)))))) || l_668) == l_693))), 3)), l_668)), l_668)))) | (-1L)))
        {
            int **l_702 = &g_64;
            int ***l_701 = &l_702;
            int ****l_700 = &l_701;
            int *l_705 = &l_551;
            int **l_726 = &l_685[8][1];
            if ((safe_rshift_func_uint8_t_u_u(((*g_408) | (safe_sub_func_uint16_t_u_u((**g_622), ((safe_lshift_func_int8_t_s_u((-6L), ((((*l_700) = (void*)0) != (void*)0) != ((0xDB28L & 0xFAE4L) >= (((*l_705) = ((*l_669) &= (safe_add_func_int16_t_s_s(0xB747L, 0x5708L)))) || 0xA3431CB5L))))) < p_10)))), p_10)))
            {
                for (g_293 = 0; g_293 < 6; g_293 += 1)
                {
                    g_276[g_293] = &g_82;
                }
                return (*g_343);
            }
            else
            {
                int **l_725[1];
                int l_729 = 6L;
                unsigned char l_735[8] = {0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL};
                int i;
                for (i = 0; i < 1; i++)
                    l_725[i] = &g_214[0];
                for (p_10 = 0; (p_10 <= (-2)); --p_10)
                {
                    for (g_293 = 0; (g_293 != 44); g_293++)
                    {
                        l_710[1] = ((*l_705) = (0x76L | p_9));
                        if (l_668)
                            break;
                    }
                    for (g_293 = 15; (g_293 != 22); g_293 = safe_add_func_int8_t_s_s(g_293, 6))
                    {
                        (*l_702) = &g_41[2];

                        ;
                        return p_10;
                    }
                }
                (*l_702) = &g_41[2];

                ;
                for (g_692 = 0; (g_692 <= 1); g_692 += 1)
                {
                    int **l_724 = &g_214[0];
                    int l_730 = 8L;
                }
                return p_10;
            }
        }
        else
        {
            unsigned char l_738 = 0x51L;
            int **l_739 = (void*)0;
            int l_746 = 0x3C5D50CDL;
            int l_799 = 0x2CE79245L;
            l_738 = (p_10 < (*l_669));
            g_537 = &l_710[2];

            ;
            l_746 = (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*g_343), (*l_669))), 7UL)), 6));
            if (((*l_669) ^= p_9))
            {
                int l_757 = 0x6950FEF0L;
                for (l_746 = 8; (l_746 >= 3); l_746 -= 1)
                {
                    short l_747 = 0x13CEL;
                    (*g_537) ^= l_747;
                }
                for (p_9 = 0; (p_9 <= 0); p_9 += 1)
                {
                    short l_749 = 0xB027L;
                    int *l_753 = &l_710[1];
                    char **l_769 = &g_343;
                    for (g_255 = 0; (g_255 <= 0); g_255 += 1)
                    {
                        unsigned *l_748[6];
                        int l_750 = 0x8AFC2AD0L;
                        unsigned short l_752 = 0xA167L;
                        int **l_756 = &l_753;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_748[i] = (void*)0;
                        (*g_537) = (*l_669);
                        l_750 = (*l_669);
                        g_113[1][2][5] = &l_750;


                        (*g_537) = ((*l_669) = (((((*g_343) &= (safe_rshift_func_int16_t_s_s(((((((l_736 = ((*l_756) = l_753)) == (void*)0) && ((p_9 <= 0x597AE69BL) != p_9)) | l_757) >= 1UL) && 0x01L), l_749))) >= 0x22L) ^ 3L) < p_9));

                        ;
                    }

                    ;
                    if (p_10)
                    {
                        (*l_760) = &g_41[2];
                        l_736 = &g_41[2];

                        ;
                    }
                    else
                    {
                        unsigned short l_765[2][3] = {{6UL,0xC213L,6UL},{6UL,0xC213L,6UL}};
                        int *l_766 = &g_5;
                        int i, j;
                        (*l_760) = (l_736 = l_766);

                        ;
                        return p_10;


                    }

                    ;
                    for (l_551 = 0; (l_551 <= 0); l_551 += 1)
                    {
                        (*l_669) = (safe_add_func_uint16_t_u_u(9UL, (**g_622)));
                    }
                    (*l_736) &= ((p_9 <= p_10) || ((void*)0 == l_769));
                    for (g_25 = 0; (g_25 >= 0); g_25 -= 1)
                    {
                        return p_9;


                    }
                }

                ;
                (*l_736) |= (*g_537);
            }
            else
            {
                int l_776 = 0x4EBEDFE7L;
                unsigned short ***l_797 = &g_622;
                int *l_804 = &g_125[3][5];
                unsigned l_808 = 1UL;
                (*l_736) |= (l_770 == g_771[8]);
                if (p_10)
                {
                    (*l_736) = ((*g_537) ^= p_9);
                }
                else
                {
                    return (*g_343);


                }
                for (l_691 = 0; (l_691 == 4); l_691++)
                {
                    char l_775 = 4L;
                    int *l_785[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_785[i] = &l_710[1];
                    if (((((0UL && l_775) | (l_776 == p_9)) <= (l_775 == p_10)) & p_10))
                    {
                        (*l_669) = p_10;
                    }
                    else
                    {
                        int *l_784[2][7];
                        short *l_794 = &g_39;
                        unsigned char *l_795 = (void*)0;
                        unsigned char **l_796 = &g_276[3];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_784[i][j] = &l_710[1];
                        }
                        l_785[3] = (l_784[1][0] = ((*g_772) = g_783[3][3][4]));



                        (*g_537) |= (safe_sub_func_int16_t_s_s(l_776, ((&l_784[0][6] != ((*l_770) = &l_785[2])) | ((l_776 < (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(1UL, (((((****l_662) = 65532UL) > ((*l_794) = (l_792 == (l_793[2][7][1] = (void*)0)))) | ((*l_669) = (((*l_796) = l_795) != &l_738))) > p_10))) & (-1L)), p_10))) & 0xF9L))));

                        ;
                        l_799 |= ((((*g_537) = (4294967289UL <= (p_10 ^ 0xB3D7L))) && p_9) ^ (-1L));
                    }



                }


                if (l_800)
                {
                    (*l_736) = (0x2BB0207EL >= ((safe_rshift_func_uint16_t_u_u((l_776 <= (l_803 != (void*)0)), 5)) & func_34(l_804, p_9)));
                }
                else
                {
                    int l_809 = 1L;
                    int *l_810 = &l_589;
                    for (l_776 = 0; (l_776 <= (-1)); --l_776)
                    {
                        int *l_807 = &g_125[3][2];
                        (*l_736) = func_34(l_807, p_10);
                        (*l_736) = 0x8C73F265L;
                    }
                    l_810 = &l_809;

                    ;
                    if ((0x70L == (p_9 != 65535UL)))
                    {
                        int *l_811 = &l_746;
                        (*g_772) = l_811;


                        return p_9;



                    }
                    else
                    {
                        int **l_812[6] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
                        int i;
                        (*l_669) = (p_9 && p_10);
                        (*g_537) = (*l_736);
                        (*g_772) = l_813;
                    }
                }
            }

            ;

        }

        ;
        ;

    }



    ;
    ;

    for (l_589 = 0; (l_589 == (-7)); l_589 = safe_sub_func_uint32_t_u_u(l_589, 6))
    {
        unsigned l_819 = 4294967293UL;
        int l_820 = (-3L);
        int l_821 = 0xEB977C1AL;
        int l_822 = 0xA84C5146L;
        l_822 = (l_821 = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((l_820 |= l_819))), l_819)));
        if (l_819)
            break;
        if (l_821)
            break;
        if (p_10)
            break;
    }
    for (g_122 = 0; (g_122 <= 19); g_122 = safe_add_func_uint16_t_u_u(g_122, 2))
    {
        int ***l_825[10][6] = {{&g_772,&l_760,&g_772,&l_760,&l_760,(void*)0},{&l_760,&l_760,&l_760,&g_772,&l_760,&g_772},{&g_772,&l_760,&g_772,&l_760,&g_772,&l_760},{(void*)0,(void*)0,(void*)0,&g_772,(void*)0,&l_760},{(void*)0,&g_772,&g_772,&l_760,&l_760,(void*)0},{&l_760,&g_772,&g_772,&g_772,(void*)0,&l_760},{&l_760,(void*)0,&g_772,(void*)0,&g_772,&l_760},{&l_760,&l_760,(void*)0,(void*)0,&l_760,&l_760},{&g_772,&l_760,&l_760,&l_760,&l_760,&l_760},{&l_760,&l_760,(void*)0,&l_760,(void*)0,(void*)0}};
        int **l_844 = &g_214[0];
        unsigned char **l_861 = &g_276[3];
        unsigned char ***l_860 = &l_861;
        short l_901 = (-1L);
        int l_941 = 0x95AC499BL;
        char **l_955 = &g_343;
        int i, j;
        if ((((*l_758) = l_825[8][5]) == &l_760))
        {
            short l_827 = (-1L);
            int l_836 = 0x48EADF7EL;
            int **l_843 = &g_214[0];
            unsigned short ****l_850 = (void*)0;
            unsigned char **l_910 = &g_276[3];
            int l_947 = 0xA85B92D1L;
            for (g_81 = 0; (g_81 <= 0); g_81 += 1)
            {
                char l_834 = 3L;
                int l_846 = (-1L);
                unsigned short ****l_852 = &l_661[1];
                int **l_857[3][2] = {{&g_214[0],&g_214[0]},{&g_214[0],&g_214[0]},{&g_214[0],&g_214[0]}};
                int l_862[8] = {0xC10600B5L,0xC10600B5L,0xC10600B5L,0xC10600B5L,0xC10600B5L,0xC10600B5L,0xC10600B5L,0xC10600B5L};
                int i, j;
                for (l_798 = 0; (l_798 <= 0); l_798 += 1)
                {
                    int *l_826 = &l_551;
                    short *l_835 = &g_39;
                    int i, j, k;
                    l_826 = (void*)0;

                    ;
                    l_827 = g_96[g_81][l_798][(g_81 + 3)];
                    l_836 &= (safe_lshift_func_uint16_t_u_s(g_96[(g_81 + 1)][g_81][(g_81 + 2)], ((*l_835) = (g_96[(l_798 + 3)][l_798][l_798] && (((safe_rshift_func_int16_t_s_s((0xEFB14B93L | g_751[(g_81 + 4)]), 2)) ^ ((!g_751[(g_81 + 4)]) >= l_834)) >= 0xEECFL)))));
                }
                for (g_255 = 0; (g_255 <= 0); g_255 += 1)
                {
                    int *l_845 = &g_41[1];
                    int l_847 = 9L;
                    unsigned short *****l_851[7] = {&l_719,&l_850,&l_850,&l_719,&l_850,&l_850,&l_719};
                    unsigned short l_863 = 0x5249L;
                    int i, j, k;
                    l_847 ^= (l_846 = ((safe_mod_func_int8_t_s_s((g_96[g_255][g_81][(g_81 + 3)] ^ 0xDE84487FL), (*g_343))) >= (safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((p_9 & 0x1865L) <= p_10), (*l_845))) != (-1L)), p_10))));
                    if (l_834)
                        continue;
                    l_846 |= (safe_rshift_func_uint16_t_u_s(((*l_845) |= ((l_719 = l_850) != (l_852 = &l_661[1]))), 15));

                    ;
                    for (g_142 = 0; (g_142 <= 0); g_142 += 1)
                    {
                        (*l_845) = ((((p_10 & func_34((*l_843), l_846)) != (safe_lshift_func_uint16_t_u_s((l_862[7] = (safe_rshift_func_int16_t_s_u((l_857[0][1] == (*l_555)), (safe_rshift_func_int16_t_s_s((!(((void*)0 != l_860) && 4294967295UL)), 1))))), p_9))) >= p_9) & l_836);
                        (*l_845) = l_863;
                    }
                }
            }
            if (p_9)
            {
                unsigned short l_864[4] = {0x4A54L,0x4A54L,0x4A54L,0x4A54L};
                int *l_866 = (void*)0;
                int l_874 = 0x9FF92676L;
                int i;
                (*g_772) = &l_836;


                l_864[0] = l_827;
                if (g_865)
                {
                    unsigned *l_869 = (void*)0;
                    unsigned *l_870 = &g_293;
                    short l_875 = 0x3CB1L;
                    int l_876 = 0x710FA191L;
                    (*g_772) = l_866;
                    for (g_293 = 3; (g_293 != 38); g_293++)
                    {
                        return p_9;


                    }
                    if ((p_9 ^ func_34((*l_843), l_875)))
                    {
                        l_876 = (l_836 = 7L);
                    }
                    else
                    {
                        return l_875;


                    }
                }
                else
                {
                    short **l_878 = &g_130[2];
                    short ***l_877[6] = {&l_878,&l_878,&l_878,&l_878,&l_878,&l_878};
                    int i;
                    g_879[0] = &g_130[8];
                    return p_9;


                }
                if (l_836)
                {
                    short l_880[2][5][5];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_880[i][j][k] = 3L;
                        }
                    }
                    l_880[1][4][3] = p_10;
                }
                else
                {
                    int **l_883 = &g_624;
                    int l_884 = 0x99477D1FL;
                    for (g_144 = 5; (g_144 == 2); g_144 = safe_sub_func_int16_t_s_s(g_144, 2))
                    {
                        l_884 = (((void*)0 != l_883) | (l_836 < (*g_343)));
                        return l_836;


                    }
                    if (l_836)
                        continue;

                }
            }
            else
            {
                unsigned short l_885 = 0x94EAL;
                int l_888 = 0xC9F29674L;
                int l_889 = 1L;
                int *l_908[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_908[i] = (void*)0;
                if (l_885)
                {
                    unsigned short l_905 = 0UL;
                    int *l_906 = &g_125[4][1];
                    int l_907 = 0x9C8D6CA5L;
                    if ((l_889 = (safe_lshift_func_int16_t_s_u(func_34((*l_843), l_888), 0))))
                    {
                        unsigned char l_892 = 0xAFL;
                        unsigned *l_903 = (void*)0;
                        unsigned *l_904 = &g_293;
                        l_907 = func_34(l_906, p_9);
                        (*g_772) = (void*)0;
                        if (l_827)
                            continue;
                        (*g_772) = l_908[1];
                    }
                    else
                    {
                        int l_909[8][9] = {{0xB5805BEBL,0L,0x3A77008BL,1L,0x0E2CB854L,0L,(-9L),0xB18F7929L,(-9L)},{(-9L),0x0E3CD416L,(-3L),(-3L),0x0E3CD416L,(-9L),(-4L),0xB5805BEBL,0x3A77008BL},{0xB18F7929L,0xE1085583L,(-3L),0L,0xB5805BEBL,(-1L),0x0E2CB854L,0x0E2CB854L,(-1L)},{(-3L),0x0E2CB854L,0x3A77008BL,0x0E2CB854L,(-3L),0xB18F7929L,(-4L),1L,0xD46E87DDL},{(-3L),0x0E2CB854L,0xB18F7929L,0xD46E87DDL,0xE1085583L,0L,(-9L),0L,0xE1085583L},{(-4L),0xE1085583L,0xE1085583L,(-4L),(-1L),0xB18F7929L,0x3A77008BL,(-9L),0L},{(-4L),0x0E3CD416L,(-1L),0xB18F7929L,0L,(-1L),(-1L),0L,0xB18F7929L},{(-3L),0L,(-3L),(-1L),(-1L),(-9L),0xD46E87DDL,0L,0xB18F7929L}};
                        int i, j;
                        l_909[0][6] &= p_9;
                    }
                    return (*g_343);


                }
                else
                {
                    unsigned short l_914 = 0x1AD3L;
                    unsigned l_939 = 0x06FDA785L;
                    int l_942 = (-1L);
                    int l_943 = 0L;
                    int *l_944 = (void*)0;
                    if (p_10)
                    {
                        unsigned char ****l_913 = &g_911;
                        l_836 ^= ((*l_902) = ((void*)0 == l_910));
                        if (p_10)
                            continue;
                        l_914 = (((*l_913) = g_911) == &g_912);
                    }
                    else
                    {
                        unsigned l_933 = 0x65B17453L;
                        unsigned *l_934 = &g_293;
                        unsigned char *l_937 = &g_82;
                        int l_938 = 0xF3644BDAL;
                        int l_940[1][10] = {{0x0A8D33CEL,6L,(-1L),6L,0x0A8D33CEL,0x0A8D33CEL,6L,(-1L),6L,0x0A8D33CEL}};
                        int i, j;
                        (*l_902) &= (p_9 ^ p_10);
                        l_943 = (safe_add_func_int16_t_s_s(((((l_938 = ((*g_343) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_10 <= p_9), (safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u(((((**g_557) = (void*)0) != (void*)0) >= ((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_836 = (safe_rshift_func_uint16_t_u_u((1UL && ((((safe_mod_func_uint32_t_u_u(g_932[5][1], ((*l_934) ^= (l_836 >= (l_933 = 0x2853L))))) ^ (((*l_937) &= (g_935 == (void*)0)) | p_9)) >= p_9) && l_933)), l_914))), l_827)), (*g_408))) >= p_9)), l_914)))))), 1)))) & l_939) == l_940[0][9]) <= l_941), l_942));

                        ;
                        (*g_772) = l_944;
                    }
                }
            }


            if (((safe_add_func_uint8_t_u_u(p_10, p_10)) || ((!(l_850 != &g_936)) <= (l_947 || 0xE8DD5C12L))))
            {
                char l_948 = 8L;
                int l_949 = 8L;
                l_949 = (l_948 < 0xB282L);
            }
            else
            {
                int l_952 = 0L;
                int l_953 = 0x1B1D150BL;
                for (p_9 = 2; (p_9 == 1); p_9 = safe_sub_func_uint16_t_u_u(p_9, 1))
                {
                    l_953 = ((*l_902) &= (l_827 | l_952));
                }
            }
        }
        else
        {
            char ***l_954 = &l_793[2][7][1];
            char ***l_956 = &l_955;
            (*l_902) |= p_9;
            (*l_902) &= (((*l_954) = &g_343) != ((*l_956) = l_955));
        }
    }

    ;
    ;

    return (*g_343);


}







static short func_11(int p_12, char p_13, unsigned p_14)
{
    int l_436[1];
    unsigned short l_493[2][7] = {{65530UL,4UL,0xB273L,4UL,0x0BAEL,0x0BAEL,0xB273L},{65534UL,4UL,65534UL,0xB273L,0xB273L,65534UL,4UL}};
    short *l_502 = &g_39;
    int **l_513 = &g_214[0];
    int *l_518 = &g_125[2][5];
    char ***l_523[5];
    unsigned char **l_526 = &g_276[3];
    char l_535 = 0xA4L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_436[i] = 0xCB413FA4L;
    for (i = 0; i < 5; i++)
        l_523[i] = &g_373;
    for (g_39 = 0; (g_39 == 27); g_39 = safe_add_func_int8_t_s_s(g_39, 1))
    {
        unsigned short l_437 = 0x2F7AL;
        unsigned short l_446 = 9UL;
        unsigned char *l_456 = &g_82;
        unsigned char l_460 = 0x5AL;
        int l_484 = 2L;
        unsigned char l_485 = 253UL;
        int **l_486 = &g_64;
        for (g_144 = 0; (g_144 != (-25)); g_144 = safe_sub_func_int16_t_s_s(g_144, 1))
        {
            int *l_447[3][5] = {{(void*)0,(void*)0,&g_125[3][6],(void*)0,(void*)0},{&g_125[1][4],&g_125[1][5],&g_125[1][4],&g_125[1][4],&g_125[1][5]},{(void*)0,&g_25,&g_25,(void*)0,&g_25}};
            int l_449 = 1L;
            int i, j;
            for (g_142 = 3; (g_142 <= 8); g_142 += 1)
            {
                int l_435 = 0xD7C6BDDDL;
                unsigned char *l_459 = (void*)0;
                int *l_461 = &l_436[0];
                short *l_466[10] = {&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1],&g_96[1][0][1]};
                short l_481[9][8] = {{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL},{0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL,0x097DL}};
                unsigned short *l_482 = (void*)0;
                unsigned short *l_483[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_483[i] = &g_105[4];
                if (((p_12 == (safe_lshift_func_uint16_t_u_u(g_96[1][0][0], (safe_rshift_func_int8_t_s_u(p_14, (safe_sub_func_int8_t_s_s(func_26(p_12, (*g_343), func_52((0L || func_26((l_435 && (p_13 <= l_436[0])), (*g_343), &g_41[2], l_437)), (*g_408), (*g_408), p_12, p_12), p_12), l_435))))))) >= g_144))
                {
                    unsigned char **l_441 = (void*)0;
                    unsigned char ***l_440 = &l_441;
                    int **l_448 = &l_447[2][3];
                    int l_450 = 0xD064965CL;
                    int *l_451[5] = {&l_450,&l_450,&l_450,&l_450,&l_450};
                    int i;
                    p_12 = ((l_436[0] &= (safe_add_func_uint8_t_u_u((!(((void*)0 != l_440) == (l_446 = (safe_rshift_func_int16_t_s_s(p_13, (safe_rshift_func_uint8_t_u_s(p_14, 4))))))), (l_449 ^= func_34(((*l_448) = l_447[2][3]), g_122))))) <= l_450);
                }
                else
                {
                    unsigned l_454 = 4294967288UL;
                    for (g_255 = 0; (g_255 > 34); ++g_255)
                    {
                        int *l_455 = &g_41[2];
                        unsigned char **l_457 = (void*)0;
                        unsigned char **l_458 = &l_456;
                        (*l_455) = (p_13 && l_454);
                        (*l_461) = ((((*l_458) = l_456) == l_459) <= func_34(func_52(p_13, l_435, func_26(l_460, (*g_343), l_461, p_13), g_255, l_454), g_293));
                        (*l_461) = (safe_lshift_func_uint8_t_u_s(((*l_456) = p_12), (&g_96[2][0][0] == &g_39)));
                    }
                    (*l_461) = (safe_rshift_func_int16_t_s_s((l_466[0] == (void*)0), p_12));
                    for (l_446 = 0; (l_446 <= 16); l_446++)
                    {
                        int *l_471 = &g_41[3];
                        (*l_471) &= (0x58L & (safe_lshift_func_int16_t_s_u(((*l_461) <= p_12), (&g_25 != &g_25))));
                    }
                }

                ;
                if (p_13)
                    continue;
                (*l_461) = (safe_lshift_func_int16_t_s_s((func_34(l_447[2][3], (((~9UL) & ((safe_rshift_func_uint16_t_u_s(func_26(p_12, func_34(func_52((((*l_456) = p_14) ^ (((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s(l_446)) != l_481[4][6]), 5)) & (l_484 = (p_13 & l_436[0]))) < (l_436[0] != p_13))), l_449, (*g_408), l_485, l_485), p_13), l_461, g_41[2]), p_12)) || l_446)) >= p_12)) && 0xC03FL), 2));
            }
        }
        if (l_436[0])
            continue;
        (*l_486) = &p_12;

        ;
    }

    ;
    if ((((l_436[0] == 0x50CA5D76L) <= (l_436[0] | l_436[0])) <= (safe_add_func_uint32_t_u_u(1UL, (((*g_408) = ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((l_436[0] ^ ((*g_343) ^= func_45(p_13, &l_436[0], &g_5, p_14))), 5)) <= 0x2E638FF5L), l_436[0])) | (*g_4))) && l_493[0][6])))))
    {
        unsigned l_504[10] = {18446744073709551615UL,0xA7D0AADBL,0xA7D0AADBL,18446744073709551615UL,0xC60471D3L,18446744073709551615UL,0xA7D0AADBL,0xA7D0AADBL,18446744073709551615UL,0xC60471D3L};
        int *l_505 = &g_5;
        int i;
        if (l_493[1][3])
        {
            int *l_494 = &g_41[2];
            (*l_494) = (-1L);
        }
        else
        {
            int *l_495 = &l_436[0];
            (*l_495) = 0x9BEBD055L;
            (*l_495) &= (p_12 <= ((void*)0 == &p_13));
            for (g_82 = 0; (g_82 > 36); g_82++)
            {
                unsigned short l_503 = 0x6206L;
                for (g_142 = 0; (g_142 >= 0); g_142 -= 1)
                {
                    int *l_508 = &l_436[0];
                    for (p_13 = 0; (p_13 >= 0); p_13 -= 1)
                    {
                        int **l_506 = &g_4;
                        int i, j, k;
                        l_504[0] = func_34(func_52((0x94L ^ ((safe_add_func_int8_t_s_s(g_125[(g_142 + 2)][(g_142 + 5)], g_96[(p_13 + 3)][g_142][(p_13 + 4)])) ^ (safe_lshift_func_int8_t_s_s(0x3CL, (l_502 != (void*)0))))), p_12, (*g_408), g_41[0], l_503), g_144);

                        ;
                        (*l_506) = l_505;
                    }
                    if ((*l_495))
                    {
                        int **l_507 = (void*)0;
                        l_508 = (void*)0;

                        ;
                        return l_503;


                    }
                    else
                    {
                        return p_13;


                    }
                }
                return l_503;


            }
            g_4 = &l_436[0];

            ;
        }

        ;
    }
    else
    {
        int **l_511[2][4][8];
        int ***l_512 = &l_511[1][1][6];
        int ***l_514 = &l_513;
        int l_515[10] = {5L,5L,5L,5L,5L,5L,5L,5L,5L,5L};
        int **l_519 = &g_214[0];
        int *l_520[3][7][8] = {{{&g_41[1],&g_5,&l_515[2],&l_515[2],&g_5,&g_41[1],&l_515[9],(void*)0},{&l_515[9],(void*)0,&g_5,(void*)0,&l_515[9],&l_436[0],&l_515[9],&l_515[9]},{(void*)0,(void*)0,&l_515[1],(void*)0,&l_515[9],&l_436[0],(void*)0,(void*)0},{&l_515[8],&l_515[9],&l_436[0],&l_515[2],&g_5,&g_5,&g_41[2],&l_515[1]},{&l_515[9],&g_41[1],&g_41[2],&l_436[0],&g_41[2],&g_5,(void*)0,&l_515[4]},{&l_515[9],&g_41[3],&g_41[2],&g_5,&l_436[0],&g_41[2],&l_436[0],&l_515[9]},{&g_41[3],(void*)0,&l_515[9],&l_515[9],&l_515[9],(void*)0,&g_41[3],(void*)0}},{{&g_41[2],&g_5,&l_515[9],&l_436[0],&l_515[8],&l_436[0],&l_436[0],&g_41[2]},{&l_436[0],&l_436[0],&l_515[2],&g_41[2],&l_515[8],&g_5,&l_436[0],&g_41[3]},{&l_515[9],&l_515[9],&g_41[2],&g_41[2],&g_41[2],&l_436[0],&g_5,&l_436[0]},{&g_41[1],(void*)0,&l_436[0],&l_515[9],&l_515[9],&g_41[2],&g_5,(void*)0},{&l_436[0],&g_5,(void*)0,&l_515[8],&g_41[0],&l_515[1],&g_41[2],&l_515[9]},{&g_41[2],(void*)0,&l_515[9],&g_41[2],&g_41[2],&l_515[9],(void*)0,&g_41[2]},{(void*)0,&l_436[0],&g_41[2],(void*)0,&l_515[9],&g_41[2],(void*)0,&g_41[2]}},{{&g_5,&l_436[0],&l_436[0],&l_515[9],(void*)0,&g_41[2],(void*)0,&g_41[2]},{&l_436[0],&l_436[0],&g_41[2],&l_436[0],&l_436[0],&l_515[9],&l_515[9],&g_41[3]},{&g_41[2],(void*)0,(void*)0,&g_5,(void*)0,&l_515[1],&g_5,&l_436[0]},{(void*)0,&g_5,(void*)0,&l_436[0],&l_515[9],&g_41[2],&g_41[2],&g_41[1]},{(void*)0,(void*)0,&l_515[9],&l_436[0],&g_41[0],&l_436[0],&l_515[9],(void*)0},{&g_5,&l_515[9],&g_5,&l_515[4],&l_515[9],&g_41[2],&g_41[2],&g_41[2]},{&l_436[0],&l_515[8],&l_436[0],&l_436[0],&g_41[2],&l_436[0],&g_41[2],&l_436[0]}}};
        int ****l_527 = &l_514;
        int **l_534 = &g_4;
        int *l_536 = (void*)0;
        int l_538 = 0x0E0090EBL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 8; k++)
                    l_511[i][j][k] = &g_214[0];
            }
        }
        l_436[0] &= (safe_mod_func_uint8_t_u_u(((((*l_512) = l_511[1][1][6]) == ((*l_514) = l_513)) ^ func_26(l_515[9], p_14, &p_12, g_255)), func_34(func_52(((*g_408) = (safe_add_func_uint16_t_u_u(func_34(((*l_519) = l_518), ((-5L) || 0x478CL)), (-8L)))), p_12, p_13, p_14, p_14), p_12)));

        ;

        for (g_144 = 0; (g_144 != 25); ++g_144)
        {
            l_436[0] &= p_14;
            p_12 = ((0x21E08516L && p_14) & (((0xA6L || 1UL) != (((void*)0 == l_523[4]) <= (g_125[3][4] | l_493[1][0]))) < (((p_13 || 3UL) >= p_13) ^ 0x089C922CL)));
        }
        p_12 &= (g_82 && ((void*)0 != &l_519));
        l_538 = func_16((!(((safe_rshift_func_int8_t_s_u((l_526 == &g_276[3]), 0)) & (p_13 ^ (*g_64))) > l_493[1][1])), p_12, g_537, l_436[0]);
    }

    ;

    return l_535;



}







static unsigned short func_16(short p_17, unsigned char p_18, int * p_19, unsigned p_20)
{
    unsigned l_393 = 0UL;
    char **l_400[4];
    unsigned *l_409 = &g_122;
    int **l_422[10][3][3] = {{{&g_4,&g_64,&g_4},{&g_4,&g_113[1][2][5],&g_64},{(void*)0,&g_64,&g_113[1][2][5]}},{{&g_113[2][0][6],&g_113[1][2][5],&g_113[1][2][5]},{&g_4,&g_64,&g_113[1][2][5]},{&g_64,&g_113[3][2][6],&g_113[1][2][5]}},{{&g_113[1][2][5],&g_64,&g_64},{&g_64,&g_113[1][2][5],&g_64},{&g_64,&g_113[2][0][6],&g_64}},{{&g_113[1][2][5],&g_113[1][2][5],(void*)0},{&g_64,&g_113[1][1][5],&g_4},{&g_4,&g_4,&g_4}},{{&g_113[2][0][6],&g_4,(void*)0},{(void*)0,&g_4,&g_4},{&g_4,&g_4,&g_4}},{{&g_4,&g_64,(void*)0},{&g_4,&g_4,&g_64},{&g_113[1][2][5],&g_113[1][2][5],&g_64}},{{&g_113[1][1][5],&g_113[1][2][5],&g_64},{&g_113[1][2][5],&g_4,&g_113[1][2][5]},{&g_4,&g_64,&g_113[1][2][5]}},{{&g_64,&g_4,&g_113[1][2][5]},{&g_113[3][2][6],&g_4,&g_113[1][2][5]},{&g_113[1][2][5],&g_4,&g_64}},{{&g_113[3][2][6],&g_4,&g_4},{&g_64,&g_113[1][1][5],&g_4},{&g_4,&g_113[1][2][5],&g_64}},{{&g_113[1][2][5],&g_113[1][2][5],&g_64},{&g_4,&g_113[1][1][5],&g_64},{&g_4,&g_113[1][2][5],&g_113[1][2][5]}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_400[i] = &g_343;
    if (l_393)
    {
        char ***l_396 = (void*)0;
        char ***l_397 = &g_373;
        char **l_399[6] = {&g_343,&g_343,&g_343,&g_343,&g_343,&g_343};
        char ***l_398 = &l_399[2];
        int l_401[8] = {1L,0L,1L,0L,1L,0L,1L,0L};
        unsigned l_402 = 4UL;
        int *l_403 = (void*)0;
        int *l_404 = (void*)0;
        int *l_405 = &g_41[2];
        unsigned *l_407 = &g_293;
        unsigned **l_406[1][7];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_406[i][j] = &l_407;
        }
        (*l_405) = func_34(func_52(g_25, (safe_add_func_int32_t_s_s((((((*l_398) = ((*l_397) = (void*)0)) != l_400[3]) == func_26(l_401[2], ((*g_343) = l_402), p_19, g_5)) >= l_401[4]), p_20)), g_105[6], g_81, l_402), l_393);

        ;
        ;

        (*l_405) = (*p_19);
        p_19 = func_52(p_17, ((*l_409) = (((p_17 > (*p_19)) < func_45(l_393, p_19, &l_401[2], l_393)) ^ (g_293 = ((g_408 = &g_122) != l_409)))), p_17, g_125[3][9], p_18);


        ;
        for (g_142 = 0; (g_142 >= 29); g_142 = safe_add_func_uint32_t_u_u(g_142, 4))
        {
            unsigned short l_418[8][3][4] = {{{0x8D78L,0x456AL,65530UL,0x36ABL},{0x8638L,0x84A2L,0x84A2L,0x8638L},{0x9169L,1UL,0x8638L,65526UL}},{{65535UL,0x36ABL,65535UL,0UL},{0xFC10L,3UL,0xD84CL,0UL},{1UL,0x36ABL,1UL,65526UL}},{{0x456AL,1UL,0x456AL,0x8638L},{0xD84CL,0x84A2L,0x8D78L,0x36ABL},{0UL,0x456AL,65526UL,0x84A2L}},{{65532UL,65530UL,65526UL,3UL},{0UL,0x5741L,0x8D78L,0x8D78L},{0xD84CL,0xD84CL,0x456AL,65532UL}},{{0x456AL,65532UL,1UL,1UL},{1UL,65535UL,0xD84CL,1UL},{0xFC10L,65535UL,65535UL,1UL}},{{65535UL,65532UL,0x8638L,65532UL},{0x9169L,0xD84CL,0x84A2L,0x8D78L},{0x8638L,0x5741L,65530UL,3UL}},{{1UL,0x456AL,0UL,3UL},{1UL,65532UL,0x456AL,0xD84CL},{65535UL,3UL,3UL,65535UL}},{{0x84A2L,0x8638L,65535UL,0x36ABL},{0UL,0xD84CL,0x8D78L,0x9169L},{1UL,65526UL,65535UL,0x9169L}}};
            int **l_419 = &g_113[1][2][5];
            int i, j, k;
            (*l_419) = func_52(p_20, ((0x0E8DBB14L & (0x72L <= (safe_sub_func_uint32_t_u_u((((*g_408) = ((-3L) ^ ((safe_lshift_func_int8_t_s_s(0x69L, p_20)) > (-9L)))) > 0xAECE32A6L), ((safe_add_func_uint8_t_u_u(p_18, l_393)) & p_20))))) == 4294967286UL), p_17, p_17, l_418[3][0][2]);
        }
    }
    else
    {
        unsigned char l_420 = 252UL;
        int **l_421 = &g_64;
        (*l_421) = func_52((*g_408), l_420, l_420, (&g_113[1][2][5] != &g_113[1][4][0]), (p_17 == 0x6963L));

        ;
    }

    ;
    p_19 = &g_41[0];

    ;
    return g_81;
}







static short func_21(int * p_22, int p_23)
{
    unsigned l_33 = 18446744073709551606UL;
    int *l_37 = &g_25;
    short *l_38 = &g_39;
    short *l_40 = (void*)0;
    int l_42 = 0xF7D59448L;
    unsigned char *l_50[3][8][2];
    short l_51 = 0L;
    unsigned short *l_115 = &g_105[1];
    int *l_201[2];
    char l_212 = (-5L);
    int l_229[4][6] = {{(-1L),0xB9D1BABBL,0xB9D1BABBL,(-1L),0xB9D1BABBL,0xB9D1BABBL},{(-1L),0xB9D1BABBL,0xB9D1BABBL,(-1L),0xB9D1BABBL,0xB9D1BABBL},{(-1L),0xB9D1BABBL,0xB9D1BABBL,(-1L),0xB9D1BABBL,0xB9D1BABBL},{(-1L),0xB9D1BABBL,0xB9D1BABBL,(-1L),0xB9D1BABBL,0xB9D1BABBL}};
    char l_318 = 0L;
    unsigned l_324 = 0x6379C17EL;
    unsigned short l_325 = 65535UL;
    unsigned l_344 = 18446744073709551610UL;
    char **l_359 = &g_343;
    char l_392 = 0x81L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
                l_50[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_201[i] = &l_42;
    if ((func_26((safe_sub_func_uint32_t_u_u(4294967294UL, l_33)), p_23, &g_5, (~func_34(l_37, (0x4898L > ((*l_115) = ((l_42 ^= (g_41[2] = ((*l_38) = p_23))) >= (safe_lshift_func_int16_t_s_u(func_45((l_51 = p_23), func_52(l_33, g_5, l_33, p_23, g_25), p_22, p_23), 8)))))))) < p_23))
    {
        char l_126 = 0xADL;
        int l_158[1][7];
        unsigned char *l_162 = &g_82;
        int *l_192 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_158[i][j] = 0xCF0C6C1DL;
        }
        if (((g_105[1] >= (g_82 = p_23)) || (*p_22)))
        {
            short l_119 = 4L;
            int l_120[4];
            unsigned *l_121 = &g_122;
            int *l_123 = (void*)0;
            int *l_124 = &g_125[1][5];
            int *l_127 = (void*)0;
            int *l_128[10][2] = {{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0},{&g_41[2],(void*)0}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_120[i] = 1L;
            l_42 = l_51;
            return g_39;
        }
        else
        {
            short *l_129 = &g_96[3][0][2];
            int *l_147[6][3][5] = {{{(void*)0,&l_42,(void*)0,&l_42,(void*)0},{&g_5,&g_41[2],&g_5,&l_42,&l_42},{&g_41[3],&l_42,&l_42,&g_41[3],&l_42}},{{&l_42,&g_41[2],(void*)0,&g_41[2],&l_42},{(void*)0,&g_41[3],&g_5,&l_42,(void*)0},{&l_42,&l_42,&l_42,&g_41[0],&g_5}},{{&l_42,&l_42,&g_5,&l_42,&g_41[2]},{&l_42,(void*)0,&l_42,&g_5,(void*)0},{&g_41[3],(void*)0,&g_41[2],(void*)0,&g_5}},{{&g_41[2],(void*)0,&l_42,&g_41[2],&l_42},{&l_42,&l_42,&l_42,&g_5,&g_41[0]},{&g_41[1],&l_42,&l_42,&g_41[1],&l_42}},{{&g_41[2],&g_41[2],&l_42,&l_42,(void*)0},{&l_42,&l_42,&g_41[2],&l_42,&g_41[2]},{(void*)0,&l_42,&l_42,&l_42,&g_5}},{{&g_41[0],(void*)0,&g_5,&g_41[1],&g_41[3]},{&l_42,&g_41[3],&g_5,&g_5,&g_41[3]},{(void*)0,(void*)0,&l_42,&g_41[2],&g_5}}};
            int i, j, k;
            if ((l_129 == (g_130[3] = (void*)0)))
            {
                char *l_140 = &g_81;
                char *l_141 = &g_142;
                char *l_143 = &g_144;
                unsigned l_156 = 3UL;
                char *l_171 = &g_142;
                if ((safe_rshift_func_int16_t_s_u(((*l_38) ^= ((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(p_23, ((*l_115) = 6UL))) > (safe_unary_minus_func_int32_t_s(l_126))) == (*g_64)), (4294967287UL & (!func_26((safe_sub_func_int8_t_s_s(g_41[3], ((*l_143) = ((*l_141) &= ((*l_140) |= l_33))))), (safe_lshift_func_uint8_t_u_u(g_41[2], 1)), l_147[5][1][4], g_122))))) | l_126)), p_23)))
                {
                    for (l_51 = 19; (l_51 == (-1)); l_51 = safe_sub_func_int8_t_s_s(l_51, 1))
                    {
                        return p_23;
                    }
                }
                else
                {
                    unsigned *l_157[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    unsigned short *l_159 = &g_105[7];
                    int l_176[7] = {0x50127869L,0x50127869L,0x50127869L,0x50127869L,0x50127869L,0x50127869L,0x50127869L};
                    short *l_177[1];
                    unsigned short *l_178 = (void*)0;
                    unsigned short *l_179 = (void*)0;
                    unsigned short *l_180 = (void*)0;
                    unsigned short *l_181 = &g_182;
                    int **l_183 = &g_64;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_177[i] = &l_51;
                    g_113[1][2][5] = func_52(g_144, (+(l_158[0][2] = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_81, 11)) == (-1L)), (&g_39 != (void*)0))), l_156)))), (((func_26((l_129 == (l_159 = l_159)), ((*l_141) = (safe_rshift_func_int16_t_s_s((l_162 != l_140), 13))), &g_41[2], g_25) | l_126) == g_125[4][3]) != 0xC7ECC317L), p_23, g_96[3][0][4]);

                    ;
                    (*l_183) = func_52((safe_add_func_int16_t_s_s((1UL != (safe_add_func_uint8_t_u_u(p_23, ((~(safe_mod_func_uint16_t_u_u((((*l_159) = 0UL) > (((safe_lshift_func_int16_t_s_u(((void*)0 == l_171), ((*l_181) &= (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((*l_171) = (l_176[5] & 0xD6C0L)), ((l_177[0] != (void*)0) ^ l_158[0][2]))), (*p_22)))))) <= l_156) >= g_39)), 65528UL))) > g_39)))), p_23)), l_176[6], p_23, p_23, l_158[0][2]);
                }
                for (g_25 = 0; (g_25 >= 27); ++g_25)
                {
                    int **l_186 = &g_113[2][3][1];
                    (*l_186) = func_52(l_51, (+(p_23 <= ((*l_129) ^= (&g_125[1][5] != l_147[0][1][1])))), g_125[7][3], l_158[0][2], l_158[0][2]);

                    ;
                }
            }
            else
            {
                int l_193 = 0xDEFB240BL;
                short l_194[8][10] = {{(-4L),0x0F47L,0x0534L,0x89C9L,(-4L),0L,0x0F47L,7L,0x89C9L,0L},{(-4L),0x89C9L,0x0534L,0x0F47L,(-4L),(-4L),0L,0x6197L,(-4L),0xF3BFL},{0xF3BFL,0L,0x6197L,(-4L),0xF3BFL,(-3L),0L,1L,(-4L),(-3L)},{0xF3BFL,(-4L),0x6197L,0L,0xF3BFL,0xF3BFL,0L,0x6197L,(-4L),0xF3BFL},{0xF3BFL,0L,0x6197L,(-4L),0xF3BFL,(-3L),0L,1L,(-4L),(-3L)},{0xF3BFL,(-4L),0x6197L,0L,0xF3BFL,0xF3BFL,0L,0x6197L,(-4L),0xF3BFL},{0xF3BFL,0L,0x6197L,(-4L),0xF3BFL,(-3L),0L,1L,(-4L),(-3L)},{0xF3BFL,(-4L),0x6197L,0L,0xF3BFL,0xF3BFL,0L,0x6197L,(-4L),0xF3BFL}};
                int **l_199 = &l_37;
                unsigned *l_200 = &g_122;
                int i, j;
                for (g_82 = (-14); (g_82 >= 53); g_82++)
                {
                    unsigned short l_191 = 0xA41DL;
                    l_192 = func_52(g_82, p_23, g_125[1][5], (safe_rshift_func_int16_t_s_s(l_191, 2)), g_96[1][0][2]);

                    ;
                    ;
                    l_194[3][1] = l_193;
                }

                ;
                l_201[1] = func_52(g_41[2], p_23, (p_23 != (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(p_23, (((((((*l_199) = (void*)0) == (void*)0) != g_182) && g_25) == ((((((*l_200) &= p_23) == l_42) & p_23) || p_23) != 0x30F3L)) < p_23))) <= (*p_22)), 9))), p_23, l_193);

                ;
                ;

            }

            ;

            ;

        }

        ;

        ;

    }
    else
    {
        int *l_211 = &g_41[2];
        int l_230 = 9L;
        int l_231 = 6L;
        unsigned short *l_289[6] = {&g_255,&g_255,&g_255,&g_255,&g_255,&g_255};
        int l_294 = 1L;
        int *l_296 = (void*)0;
        int i;
        for (p_23 = (-24); (p_23 != 8); p_23 = safe_add_func_int16_t_s_s(p_23, 7))
        {
            short l_206 = (-1L);
            int **l_213[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_213[i][j] = &l_37;
            }
            (*l_211) = func_34((g_214[0] = func_52((safe_sub_func_int32_t_s_s(l_206, l_206)), ((~((*l_38) = p_23)) > (safe_mul_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((p_22 != p_22), p_23)) > l_206), (&g_41[2] != l_211)))), l_212, (*l_211), p_23)), g_125[1][5]);

            ;
        }


        for (g_142 = 0; (g_142 >= (-18)); --g_142)
        {
            int **l_225 = (void*)0;
            int l_228 = 0xBD80F3FEL;
            int **l_235 = &g_113[1][2][5];
            int **l_236 = &l_201[0];
            unsigned l_241 = 0x2520F901L;
            l_231 = (l_230 |= (safe_rshift_func_int16_t_s_u(p_23, ((safe_sub_func_int32_t_s_s(((*l_211) = (((g_105[1] >= ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((&g_214[0] != l_225) >= 65533UL), 5)) != ((p_23 > ((1UL & (*l_211)) || (safe_lshift_func_uint16_t_u_s(0x7CF3L, 8)))) == (*l_211))), (*l_211))) || (*l_211))) == l_228) ^ 0x684B4F7AL)), l_229[1][1])) || (*l_211)))));
            (*l_236) = ((*l_235) = func_52(g_122, ((g_142 > (safe_rshift_func_int8_t_s_s((*l_211), (safe_unary_minus_func_int16_t_s(p_23))))) & 0xE7L), (*l_211), (((*l_38) = (g_125[9][6] >= (*l_211))) | (func_26(l_228, p_23, &g_5, l_228) ^ (*l_211))), p_23));

            ;
            for (g_144 = (-28); (g_144 > 23); ++g_144)
            {
                int l_246 = 0xD4495199L;
                int l_247 = 0x1A52F8CBL;
                for (g_182 = 0; (g_182 >= 53); g_182++)
                {
                    char l_248 = 0xBDL;
                    unsigned char l_256[2][4][4] = {{{1UL,0x5AL,0x5AL,1UL},{0xDDL,0x5CL,0x9FL,0x5AL},{0x5CL,0x4CL,0x78L,250UL},{0x42L,0xDDL,0x5AL,250UL}},{{1UL,0x4CL,1UL,0x5AL},{1UL,0x5CL,3UL,1UL},{0x42L,0x9FL,0xDDL,250UL},{0x9FL,0x5CL,0xDDL,0xDDL}}};
                    int i, j, k;
                    (*l_211) ^= l_241;
                    if ((((((((*l_38) ^= (safe_sub_func_uint16_t_u_u(g_82, (safe_mod_func_int8_t_s_s((l_246 &= g_96[1][0][0]), g_82))))) ^ g_5) != (-5L)) == 0x2432L) >= 0UL) < (l_248 = ((~(0x09L < (((*g_4) < g_122) && l_247))) <= 8L))))
                    {
                        unsigned l_249 = 1UL;
                        unsigned short *l_252 = (void*)0;
                        unsigned short *l_253 = (void*)0;
                        unsigned short *l_254[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_254[i] = &g_255;
                        (*l_235) = func_52(((g_105[3] > (~func_34(&g_125[1][5], (l_249 = (1L & g_41[2]))))) && (g_255 = ((*l_115) ^= (safe_mod_func_int32_t_s_s((((*l_211) <= 0L) > g_125[1][5]), (*l_211)))))), g_96[2][0][2], p_23, (*l_211), p_23);
                        if (l_256[0][0][3])
                            break;
                        return p_23;
                    }
                    else
                    {
                        int l_266[3][1];
                        char l_267 = 0x22L;
                        int l_268 = 0x29217CC9L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_266[i][j] = 0xF2331D1BL;
                        }
                        (*l_211) = (*g_4);
                        l_268 ^= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*l_211) &= p_23), ((p_23 >= func_34(func_52(g_255, p_23, (g_122 = 0xA34F9124L), ((*l_115) = ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((l_266[1][0] = ((safe_unary_minus_func_int32_t_s((*p_22))) || ((void*)0 == &l_247))) < g_182) >= g_105[1]), 0x99677F99L)), 11)) != 0x38L)), p_23), l_267)) || p_23))), g_182));
                    }
                    for (l_228 = 0; (l_228 == 11); l_228++)
                    {
                        char *l_271[2];
                        unsigned *l_272[6][6] = {{&g_122,&l_241,&l_241,&g_122,&l_241,&l_241},{&g_122,&g_122,&g_122,&g_122,&l_241,&g_122},{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241},{&l_241,&g_122,&l_241,&l_241,&l_241,&l_241},{&g_122,&l_241,&g_122,&g_122,&l_241,&g_122},{&g_122,&g_122,&l_241,&l_241,&l_241,&l_241}};
                        unsigned char **l_275[5][9] = {{(void*)0,&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],(void*)0,&l_50[2][3][1],&l_50[2][3][1],(void*)0,&l_50[2][3][1]},{(void*)0,&l_50[2][3][1],(void*)0,&l_50[2][4][1],&l_50[0][7][1],&l_50[0][7][1],&l_50[2][4][1],(void*)0,&l_50[2][3][1]},{(void*)0,&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],(void*)0,&l_50[2][3][1]},{(void*)0,(void*)0,&l_50[2][4][1],&l_50[2][4][1],(void*)0,(void*)0,&l_50[0][7][1],(void*)0,(void*)0},{&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],&l_50[2][3][1],(void*)0,(void*)0,(void*)0,&l_50[2][3][1],&l_50[2][3][1]}};
                        int l_277 = 0x7D440B17L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_271[i] = &l_248;
                        (*l_235) = func_52((((g_81 = (**l_236)) ^ ((l_247 &= func_34(l_37, p_23)) > ((safe_sub_func_uint32_t_u_u(p_23, ((*l_211) = (((g_276[3] = l_50[0][2][0]) == (void*)0) > 0xFA4DL)))) >= (-1L)))) >= (**l_236)), l_277, p_23, g_25, l_246);
                    }
                }
            }
        }


        (*l_211) = (*g_64);
        for (g_122 = (-19); (g_122 >= 33); g_122 = safe_add_func_int8_t_s_s(g_122, 5))
        {
            char l_286 = 0x34L;
            int l_288 = (-1L);
            for (g_144 = 0; (g_144 >= (-6)); g_144 = safe_sub_func_int16_t_s_s(g_144, 5))
            {
                unsigned short l_300 = 9UL;
                if ((*p_22))
                    break;
                for (l_212 = 0; (l_212 != (-24)); --l_212)
                {
                    unsigned l_287 = 0xFCBD086DL;
                    unsigned *l_292[8][6] = {{&g_293,&g_293,&g_122,&g_122,&g_293,&g_293},{&g_293,&g_293,&g_122,&g_122,&g_122,&g_293},{&g_293,&g_122,&g_293,&g_293,(void*)0,&g_293},{&g_293,(void*)0,&g_293,&g_122,&g_122,&g_293},{&g_122,&g_122,&g_293,(void*)0,&g_122,&g_293},{&g_122,(void*)0,&g_122,(void*)0,(void*)0,&g_293},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_293},{&g_293,&g_122,&g_293,&g_293,(void*)0,&g_293}};
                    char l_295 = 0x67L;
                    unsigned l_297 = 4294967295UL;
                    int i, j;
                    l_288 &= func_26((g_41[3] < ((*l_211) ^ p_23)), (!((safe_add_func_uint16_t_u_u(func_45(l_286, p_22, p_22, func_45(l_286, &l_42, p_22, p_23)), l_287)) <= (*g_4))), &g_41[2], p_23);
                    if (l_286)
                        continue;
                    (*l_211) = func_26((0xE8L < (l_289[5] == (void*)0)), (p_23 >= (safe_rshift_func_int8_t_s_s((&g_125[1][5] != (l_296 = func_52(((*l_211) = func_45(((*l_211) |= (+p_23)), func_52(func_45(p_23, &g_5, &g_5, p_23), g_39, l_287, g_125[1][5], p_23), p_22, p_23)), g_293, l_294, g_255, l_295))), l_287))), &g_5, l_297);

                    ;
                    ;
                    (*l_211) &= ((safe_rshift_func_uint16_t_u_s((((l_287 && l_300) && (p_23 && ((safe_rshift_func_uint8_t_u_u(((l_287 | (func_45(p_23, &g_5, &g_5, (safe_sub_func_uint32_t_u_u((0xA2A8A7F0L ^ (~(safe_sub_func_int8_t_s_s(p_23, p_23)))), g_105[4]))) && 7L)) || 0UL), l_297)) == g_182))) && 0xF1F0L), l_300)) == 0xD7A9326FL);
                }

                ;
                return (*l_211);
            }
        }
    }

    ;




    for (l_33 = 0; (l_33 != 46); l_33 = safe_add_func_int32_t_s_s(l_33, 5))
    {
        unsigned l_313 = 4294967295UL;
        unsigned short l_317 = 1UL;
        int l_319 = (-2L);
        int **l_338 = &l_37;
        char *l_342 = &l_212;
        char **l_341[8][9][3] = {{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}},{{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342},{&l_342,&l_342,&l_342}}};
        int **l_345 = (void*)0;
        int **l_346 = (void*)0;
        int **l_347[7][5][7] = {{{&g_4,&l_201[1],&g_4,&g_4,&l_201[1],&g_64,&l_201[1]},{&g_113[1][2][5],&l_201[0],&g_113[1][2][5],&g_113[2][5][4],&g_64,&g_64,(void*)0},{&l_201[1],&g_64,&g_4,&g_4,&g_64,&l_201[1],&g_113[0][0][6]},{&g_113[0][5][3],(void*)0,&l_201[1],(void*)0,&g_113[3][0][0],&g_4,&l_201[1]},{&l_201[1],&g_113[0][2][1],&g_113[1][2][5],&g_4,&l_201[1],&g_4,&g_113[1][2][5]}},{{&g_4,(void*)0,&g_113[1][2][5],&g_4,&l_201[1],(void*)0,&g_113[1][2][5]},{&g_64,&g_64,&g_113[1][2][5],&l_201[1],&g_113[1][2][5],&g_64,(void*)0},{&g_113[1][2][5],&l_201[0],&g_113[1][2][5],&g_113[3][0][1],&g_113[1][1][1],&g_64,&l_201[1]},{&g_113[1][2][5],&g_113[1][2][5],&l_201[1],&l_201[1],(void*)0,&l_201[1],&l_201[1]},{&g_64,&g_64,&l_201[1],(void*)0,&g_113[1][2][5],&g_64,(void*)0}},{{&g_4,&g_4,&g_64,&g_113[1][2][5],&g_64,&g_4,&g_4},{&g_113[0][0][2],&g_113[3][0][1],&g_4,&g_64,&g_113[2][5][4],&g_113[0][0][7],&g_113[1][2][5]},{(void*)0,&g_64,&l_201[0],&l_201[1],&g_113[1][2][5],&l_201[1],&g_113[1][2][5]},{&l_201[1],&g_64,&g_4,&g_113[1][2][5],&l_201[0],&g_64,&g_64},{&l_201[1],&g_4,&g_64,&l_201[1],&g_113[1][2][5],&g_64,&g_113[0][5][0]}},{{&g_113[1][2][5],&l_201[1],&l_201[1],&g_113[0][5][3],&g_113[0][2][1],&g_113[2][0][7],&g_113[0][5][3]},{(void*)0,&l_201[1],&l_201[1],&g_64,&g_4,&g_113[1][2][5],&l_201[1]},{&l_201[0],&g_113[1][2][5],&g_113[1][2][5],&g_64,&g_113[0][5][3],&g_113[0][3][4],&l_201[0]},{&g_64,&l_201[1],(void*)0,&g_113[1][2][5],&g_113[1][2][5],(void*)0,&l_201[1]},{&g_113[1][2][5],&g_4,(void*)0,(void*)0,&g_4,&g_4,&g_64}},{{&g_4,&l_201[0],&l_201[1],&l_201[1],&l_201[1],&l_201[1],(void*)0},{&g_113[0][0][2],&g_64,&g_113[3][0][0],(void*)0,&g_64,&g_113[0][6][0],&g_4},{&g_64,(void*)0,&g_64,&g_113[1][2][5],&l_201[0],(void*)0,&g_113[1][2][5]},{&g_64,&g_64,&g_4,&l_201[0],(void*)0,&g_113[1][2][5],&l_201[1]},{&g_64,&g_113[0][2][1],&l_201[1],&g_64,&l_201[0],&g_113[1][2][5],&g_113[0][0][6]}},{{&l_201[0],&g_113[1][2][5],&g_4,&g_64,&l_201[0],&g_4,(void*)0},{(void*)0,&l_201[0],&l_201[1],&g_4,&g_64,&g_4,&l_201[1]},{&g_113[1][2][5],&g_113[1][2][5],&g_113[1][2][5],&g_113[0][0][7],&l_201[0],&g_113[0][2][1],(void*)0},{&g_113[0][5][0],&g_64,&g_64,&g_113[0][2][1],(void*)0,&l_201[1],&g_113[1][2][5]},{&g_113[2][0][7],&g_113[1][1][1],&g_4,&l_201[1],&l_201[0],&g_4,&g_113[2][0][7]}},{{&g_113[0][5][5],&g_64,&g_113[2][4][0],&g_4,&g_64,&g_4,&g_113[0][2][1]},{(void*)0,&g_4,&l_201[1],&g_113[1][1][1],&l_201[1],&l_201[1],&l_201[1]},{&g_64,&g_113[0][5][5],&g_113[1][2][5],&g_113[1][2][5],&l_201[1],&g_113[3][4][5],&g_64},{&g_113[0][0][2],&g_113[1][2][5],&l_201[1],&l_201[1],&g_113[1][2][5],&g_113[3][0][1],(void*)0},{&g_113[0][5][5],&l_201[1],&l_201[1],&g_64,&g_113[1][2][5],&g_113[1][2][5],&g_64}}};
        int *l_357 = &g_125[1][5];
        int *l_358 = &g_125[1][5];
        int l_374 = 1L;
        int l_375 = (-1L);
        unsigned char l_383 = 0x5DL;
        unsigned l_384 = 0x078D34EAL;
        char l_385[6][2] = {{0x48L,0x48L},{0x48L,0x48L},{0x48L,0x48L},{0x48L,0x48L},{0x48L,0x48L},{0x48L,0x48L}};
        int i, j, k;
        for (g_39 = 3; (g_39 >= 0); g_39 -= 1)
        {
            short l_314 = (-1L);
            int **l_315 = (void*)0;
            char *l_316 = &g_144;
            short *l_326 = &l_51;
            int **l_327 = &l_201[1];
            int l_329 = 0x877B575EL;
            l_318 = func_45(((g_39 != (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(l_313, (-3L))), 6))) ^ (((*p_22) || ((void*)0 != &g_5)) > ((*l_316) = ((func_45(l_314, &l_229[2][4], (l_201[0] = &g_5), p_23) != l_313) || p_23)))), p_22, p_22, l_317);
            l_319 ^= (*p_22);
            if ((*p_22))
                break;
            g_113[1][0][6] = ((*l_327) = func_52((safe_lshift_func_uint16_t_u_s((!p_23), l_317)), (g_255 | (*p_22)), l_317, ((*l_115) = ((safe_rshift_func_uint8_t_u_u((((l_317 != p_23) == ((*l_326) = (l_324 == ((0UL || p_23) ^ l_325)))) | 1UL), l_313)) >= 0x008BL)), p_23));

            ;
            for (l_314 = 1; (l_314 >= 0); l_314 -= 1)
            {
                int l_328 = 0xAF65EDA5L;
                int i, j, k;
                (*l_327) = (void*)0;
                l_329 = (l_328 < (-10L));
            }
        }
        g_41[2] &= (safe_sub_func_int8_t_s_s(func_26(p_23, g_81, (g_113[2][0][6] = func_52(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((*l_342) = func_34(((*l_338) = l_201[1]), (safe_rshift_func_int16_t_s_u(((*l_38) = (&g_144 == (g_343 = &g_144))), p_23)))) & g_81), 3)), 13)), l_319)) & (*p_22)), g_5, l_344, p_23, p_23)), g_105[2]), p_23));

        ;
        ;
        ;
        for (l_318 = 0; (l_318 >= (-12)); l_318 = safe_sub_func_int16_t_s_s(l_318, 8))
        {
            int l_354 = 0x8A57F9CFL;
            int **l_361 = (void*)0;
            char ***l_371 = (void*)0;
            char ***l_372[2];
            unsigned l_376 = 8UL;
            int i;
            for (i = 0; i < 2; i++)
                l_372[i] = &l_341[4][4][1];
            for (l_319 = 0; (l_319 <= (-22)); l_319 = safe_sub_func_int8_t_s_s(l_319, 7))
            {
                int **l_355 = (void*)0;
                int **l_356[1][4][8] = {{{&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0],(void*)0,(void*)0,&g_214[0]},{&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0],(void*)0,(void*)0,&g_214[0]},{&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0],(void*)0,(void*)0,&g_214[0]},{&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0],(void*)0,(void*)0,&g_214[0]}}};
                int l_360 = (-10L);
                int *l_362 = &l_229[1][1];
                int i, j, k;
                l_360 &= ((safe_rshift_func_int8_t_s_s(((l_354 > (1L | (*g_64))) <= func_34((*l_338), ((l_357 = l_201[0]) != (l_358 = &p_23)))), 3)) >= ((l_341[4][4][1] = l_359) == &g_343));

                ;
                ;
                l_362 = func_52(p_23, (l_361 == (void*)0), (((((*p_22) || (((void*)0 != &g_41[2]) < l_360)) != l_354) <= (func_34(func_52(p_23, g_105[1], g_39, p_23, l_354), p_23) && g_144)) < (*p_22)), g_142, p_23);

                ;
            }
            l_376 ^= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_23, l_375)), l_354));
        }


        ;
        ;
        l_385[2][1] = (l_384 = (((*l_342) ^= (((**l_359) = p_23) == (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_23 == ((*l_115) = (0xE01AL >= (p_23 <= (safe_mod_func_uint32_t_u_u(g_125[1][5], 0xFE03B3ACL)))))), l_383)), g_39)))) && (p_23 | p_23)));
    }

    ;

    ;
    for (g_39 = 1; (g_39 <= 5); g_39 += 1)
    {
        int l_386 = (-1L);
        unsigned short l_390 = 65535UL;
        for (l_324 = 1; (l_324 <= 5); l_324 += 1)
        {
            int **l_387 = &l_201[1];
            unsigned char **l_389[6][1][8] = {{{(void*)0,&g_276[0],(void*)0,&g_276[5],&g_276[5],(void*)0,&g_276[0],(void*)0}},{{&g_276[3],&g_276[5],&l_50[2][3][1],&g_276[5],&g_276[3],&g_276[3],&g_276[5],&l_50[2][3][1]}},{{&g_276[3],&g_276[3],&g_276[5],&l_50[2][3][1],&g_276[5],&g_276[3],&g_276[3],&g_276[5]}},{{(void*)0,&g_276[5],&g_276[3],&g_276[5],&l_50[2][3][1],&g_276[5],&g_276[3],&g_276[3]}},{{&g_276[3],&l_50[2][3][1],(void*)0,(void*)0,&l_50[2][3][1],&g_276[3],&l_50[2][3][1],(void*)0}},{{&g_276[5],&l_50[2][3][1],&g_276[5],&g_276[3],&g_276[3],&g_276[5],&l_50[2][3][1],&g_276[5]}}};
            unsigned char ***l_388 = &l_389[5][0][4];
            int l_391 = 7L;
            int i, j, k;
            l_391 = func_45((g_105[4] & g_105[1]), func_52((l_386 || func_26(p_23, l_386, ((*l_387) = &g_41[2]), func_34(&g_25, (((*l_388) = &l_50[0][5][1]) != &g_276[g_39])))), p_23, g_41[2], l_390, p_23), p_22, p_23);
            l_386 = (*p_22);
            l_391 = (l_391 <= 0x69L);
        }
    }


    l_392 = ((void*)0 == (*l_359));
    return p_23;
}







static char func_26(int p_27, char p_28, int * p_29, unsigned short p_30)
{
    char l_118 = 0xD4L;
    for (g_82 = 0; (g_82 != 1); g_82 = safe_add_func_uint16_t_u_u(g_82, 3))
    {
        l_118 ^= 0x88AFD611L;
        if ((*g_4))
            break;
    }
    return l_118;
}







static unsigned short func_34(int * p_35, unsigned short p_36)
{
    return p_36;
}







static short func_45(unsigned char p_46, int * p_47, int * p_48, int p_49)
{
    int *l_76 = (void*)0;
    int l_97 = (-4L);
    for (p_49 = 0; (p_49 < (-7)); p_49 = safe_sub_func_int32_t_s_s(p_49, 5))
    {
        int **l_77 = &l_76;
        int l_88 = 0xD92BB849L;
        (*l_77) = l_76;
        for (p_46 = 21; (p_46 != 34); p_46 = safe_add_func_uint32_t_u_u(p_46, 1))
        {
            char *l_80 = &g_81;
            int l_85 = 0xD1841160L;
            short *l_95[1][7] = {{&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0],&g_96[1][0][0]}};
            unsigned short *l_104 = &g_105[1];
            int *l_106 = &l_97;
            int i, j;
            g_82 = (((*l_80) = p_46) && g_25);
            (*l_77) = func_52(p_46, (safe_mod_func_int32_t_s_s(((l_85 < (l_97 = (((safe_lshift_func_uint16_t_u_s((l_88 != (safe_sub_func_int8_t_s_s(l_85, (safe_add_func_int8_t_s_s((((((*p_48) != (safe_rshift_func_uint8_t_u_u(p_49, p_49))) | g_5) != (*g_4)) && 0x65F0L), p_49))))), 4)) != (-4L)) < (*g_4)))) >= g_96[1][0][0]), 0x422EE889L)), g_82, g_96[3][0][1], p_46);

            ;
            ;
            (*l_106) &= ((safe_sub_func_uint32_t_u_u((**l_77), (6UL & (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_49, g_5)), (!((*l_104) = g_82))))))) == (*l_76));
        }
    }

    ;
    for (p_49 = 0; (p_49 >= (-13)); p_49 = safe_sub_func_int16_t_s_s(p_49, 9))
    {
        int *l_109 = &l_97;
        int **l_114 = &g_64;
        (*l_109) = (*p_47);
        for (g_81 = 0; (g_81 <= 27); ++g_81)
        {
            for (g_25 = 7; (g_25 >= 0); g_25 -= 1)
            {
                int i;
                for (l_97 = 7; (l_97 >= 1); l_97 -= 1)
                {
                    int **l_112 = &l_76;
                    int i;
                    (*l_112) = l_109;

                    ;
                    if (g_105[g_25])
                    {
                        int i;
                        return g_105[l_97];
                    }
                    else
                    {
                        g_64 = (g_113[1][2][5] = p_48);


                    }


                }
                if (g_105[g_25])
                    break;
            }
        }
        (*l_114) = p_48;


    }


    ;

    return g_81;
}







static int * func_52(unsigned p_53, unsigned p_54, unsigned p_55, unsigned short p_56, unsigned char p_57)
{
    int *l_62[3];
    int **l_63[4][1][4] = {{{&l_62[1],&l_62[2],&l_62[1],&l_62[2]}},{{&l_62[1],&l_62[2],&l_62[1],&l_62[2]}},{{&l_62[1],&l_62[2],&l_62[1],&l_62[2]}},{{&l_62[1],&l_62[2],&l_62[1],&l_62[2]}}};
    int l_65 = 0x962DA72DL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_62[i] = (void*)0;
    for (p_54 = 23; (p_54 != 53); p_54 = safe_add_func_uint16_t_u_u(p_54, 1))
    {
        int *l_60 = &g_5;
        int **l_61[10];
        int i;
        for (i = 0; i < 10; i++)
            l_61[i] = &l_60;
        l_62[1] = l_60;
    }


    g_64 = &g_5;

    ;
    l_65 = p_55;
    for (p_55 = 26; (p_55 == 57); p_55 = safe_add_func_int32_t_s_s(p_55, 5))
    {
        int *l_70 = &g_5;
        int l_72[1][10][3] = {{{0x293E9FC6L,0x293E9FC6L,0xF31FD024L},{0L,(-8L),0xF31FD024L},{(-8L),0L,0xF31FD024L},{0x293E9FC6L,0x293E9FC6L,0xF31FD024L},{0L,(-8L),0xF31FD024L},{(-8L),0L,0xF31FD024L},{0x293E9FC6L,0x293E9FC6L,0xF31FD024L},{0L,(-8L),0xF31FD024L},{(-8L),0L,0xF31FD024L},{0x293E9FC6L,0x293E9FC6L,0xF31FD024L}}};
        int i, j, k;
        if ((*g_4))
            break;
        for (l_65 = 3; (l_65 <= 11); l_65 = safe_add_func_uint32_t_u_u(l_65, 3))
        {
            unsigned l_71 = 4294967290UL;
            int *l_73 = (void*)0;
            l_70 = l_70;
            if (l_71)
                continue;
            l_72[0][2][1] = (&l_65 == &l_65);
            l_70 = l_73;

            ;
        }

        ;
    }
    return &g_5;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_751[i], "g_751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_932[i][j], "g_932[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1081[i][j][k], "g_1081[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1322[i], "g_1322[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1412, "g_1412", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    transparent_crc(g_1692, "g_1692", print_hash_value);
    transparent_crc(g_1815, "g_1815", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
