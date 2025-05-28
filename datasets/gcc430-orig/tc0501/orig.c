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



static int g_18 = (-1L);
static int g_20 = 0L;
static char g_21[2] = {0x56L,0x56L};
static short g_52 = 0xD20AL;
static short *g_54[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static short g_64 = (-1L);
static int g_66 = 0xAA4807C1L;
static int * volatile g_65 = &g_66;
static int *g_78 = &g_18;
static int ** volatile g_77[10][2][10] = {{{&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,(void*)0,&g_78,&g_78,(void*)0,(void*)0,&g_78,&g_78,&g_78,&g_78}},{{(void*)0,&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,(void*)0},{&g_78,(void*)0,(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78}},{{(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,(void*)0},{&g_78,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_78,&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_78,&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0}},{{&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,(void*)0}},{{&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78}},{{&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78},{&g_78,(void*)0,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0}},{{&g_78,&g_78,&g_78,&g_78,&g_78,(void*)0,&g_78,(void*)0,&g_78,(void*)0},{&g_78,(void*)0,&g_78,&g_78,&g_78,(void*)0,&g_78,&g_78,&g_78,&g_78}}};
static int ** volatile g_84 = &g_78;
static int g_90 = 0xC18638AAL;
static int * volatile g_89 = &g_90;
static unsigned char g_102[9][8][3] = {{{0UL,0UL,255UL},{255UL,0x78L,0UL},{1UL,0x78L,1UL},{255UL,0UL,0x33L},{0x19L,0xF8L,1UL},{0x53L,2UL,0x32L},{255UL,0x8AL,246UL},{0x53L,5UL,1UL}},{{0x19L,252UL,0x01L},{255UL,0xF8L,0x87L},{0x66L,7UL,0xBAL},{1UL,0UL,0x4AL},{0UL,0x33L,0x66L},{0x31L,249UL,0xBCL},{0xF6L,0x23L,0xFCL},{6UL,249UL,0x04L}},{{1UL,0x33L,248UL},{4UL,0UL,0x66L},{0x1CL,7UL,0x2FL},{0x1CL,0x23L,1UL},{4UL,255UL,0x64L},{1UL,246UL,1UL},{6UL,0x01L,0x66L},{0xF6L,0x19L,1UL}},{{0x31L,0x23L,0x64L},{0UL,0xFFL,1UL},{1UL,0xB8L,0x2FL},{0x66L,0xB8L,0x66L},{0xADL,0xFFL,248UL},{251UL,0x23L,0x04L},{0xD3L,0x19L,0xFCL},{1UL,0x01L,0xBCL}},{{0xD3L,246UL,0x66L},{251UL,255UL,0x4AL},{0xADL,0x23L,0xBAL},{0x66L,7UL,0xBAL},{1UL,0UL,0x4AL},{0UL,0x33L,0x66L},{0x31L,249UL,0xBCL},{0xF6L,0x23L,0xFCL}},{{6UL,249UL,0x04L},{1UL,0x33L,251UL},{0x8CL,255UL,0x34L},{4UL,1UL,0xADL},{4UL,255UL,248UL},{0x8CL,0UL,0xBCL},{248UL,249UL,0x1CL},{0xD2L,7UL,0x34L}},{{0x66L,0xCCL,0x1CL},{0xD3L,255UL,0xBCL},{0x13L,8UL,248UL},{248UL,0xFFL,0xADL},{0x34L,0xFFL,0x34L},{0UL,8UL,251UL},{6UL,255UL,1UL},{9UL,0xCCL,0x2FL}},{{248UL,7UL,0x31L},{9UL,249UL,0x34L},{6UL,0UL,0xF6L},{0UL,255UL,0x4AL},{0x34L,1UL,0x4AL},{248UL,255UL,0xF6L},{0x13L,0x19L,0x34L},{0xD3L,0x53L,0x31L}},{{0x66L,255UL,0x2FL},{0xD2L,0x53L,1UL},{248UL,0x19L,251UL},{0x8CL,255UL,0x34L},{4UL,1UL,0xADL},{4UL,255UL,248UL},{0x8CL,0UL,0xBCL},{248UL,249UL,0x1CL}}};
static int * volatile g_104 = (void*)0;
static volatile int g_124[2] = {0xDFC09A20L,0xDFC09A20L};
static volatile int *g_123 = &g_124[0];
static char g_129 = 1L;
static char g_133 = 0xA5L;
static int g_151[3][5][3] = {{{0L,0x483DF3A3L,9L},{3L,0x8D63D52EL,0x2B3FC87BL},{0x9A0CC12BL,0x9C3B6F68L,0x9C3B6F68L},{0x75258A08L,0x8D63D52EL,0L},{0x483DF3A3L,0x9C3B6F68L,3L}},{{0xDC7B32ECL,0x8D63D52EL,0x8D63D52EL},{0x02CBC4CBL,0x9C3B6F68L,9L},{3L,0x8D63D52EL,0x2B3FC87BL},{0x9A0CC12BL,0x9C3B6F68L,0x9C3B6F68L},{0x75258A08L,0x8D63D52EL,0L}},{{0x483DF3A3L,0x9C3B6F68L,3L},{0xDC7B32ECL,0x8D63D52EL,0x8D63D52EL},{0x02CBC4CBL,0x9C3B6F68L,9L},{3L,0x8D63D52EL,0x2B3FC87BL},{0x9A0CC12BL,0x9C3B6F68L,0x9C3B6F68L}}};
static volatile int * volatile *g_164 = &g_123;
static volatile int * volatile **g_163 = &g_164;
static unsigned g_199 = 0x7E15E09DL;
static unsigned g_201 = 0UL;
static unsigned short g_206 = 3UL;
static unsigned short * volatile g_205 = &g_206;
static unsigned short * volatile * volatile g_204[7] = {&g_205,&g_205,&g_205,&g_205,&g_205,&g_205,&g_205};
static int ** volatile g_246 = &g_78;
static const int *g_253 = &g_151[0][0][1];
static const int ** volatile g_252[10][7] = {{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253}};
static const int ** volatile g_254[6] = {&g_253,&g_253,&g_253,&g_253,&g_253,&g_253};
static unsigned g_270[9] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL};
static unsigned short *g_282[9][6][4] = {{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}}};
static int *g_326 = &g_151[2][1][2];
static int ** volatile g_325 = &g_326;
static int ** volatile g_338 = (void*)0;
static int ** volatile g_339 = &g_326;
static int g_344 = 0L;
static int ** volatile g_351 = &g_78;
static char *g_366[3] = {(void*)0,(void*)0,(void*)0};
static char **g_365 = &g_366[0];
static char *** const volatile g_364[2] = {&g_365,&g_365};
static unsigned short g_380 = 6UL;
static const volatile unsigned char g_394 = 0x6FL;
static const int ** volatile g_422 = &g_253;
static unsigned *g_460 = &g_270[3];
static unsigned **g_459[7] = {&g_460,&g_460,&g_460,&g_460,&g_460,&g_460,&g_460};
static unsigned *** volatile g_458 = &g_459[4];
static unsigned char **g_462 = (void*)0;
static unsigned char ***g_461[4] = {&g_462,&g_462,&g_462,&g_462};
static int ** volatile g_468 = &g_78;
static char g_472[5] = {0x14L,0x14L,0x14L,0x14L,0x14L};
static int ** volatile g_474 = &g_78;
static short g_475 = 0x4B19L;
static const int ** const volatile g_482[7][5] = {{(void*)0,(void*)0,&g_253,(void*)0,(void*)0},{&g_253,(void*)0,&g_253,&g_253,(void*)0},{&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,(void*)0,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,(void*)0,&g_253,&g_253}};
static unsigned short g_494 = 0xBF29L;
static int g_501 = 0xF1E723DDL;
static unsigned short g_505 = 1UL;
static short g_506 = 0xCFFCL;
static int ** volatile g_521 = &g_326;
static int ** volatile g_525 = (void*)0;
static int ** volatile g_526[2] = {&g_326,&g_326};
static int ** volatile g_527 = &g_78;
static int ** volatile g_529 = &g_78;
static int ** volatile g_534 = &g_326;
static int ** volatile g_540[2] = {(void*)0,(void*)0};
static volatile unsigned char g_552 = 0x2AL;
static int ** const volatile g_553[4] = {&g_78,&g_78,&g_78,&g_78};
static int ** volatile g_560 = &g_78;
static int ** volatile g_564 = &g_78;
static int ** volatile g_570 = &g_326;
static int ** volatile g_591 = &g_78;
static int ** volatile g_595 = &g_326;
static int ** volatile g_646 = &g_78;
static int ** volatile g_647 = &g_78;
static int ** const volatile g_656 = &g_326;
static short g_662[8] = {0xB003L,0xB52EL,0xB52EL,0xB003L,0xB52EL,0xB52EL,0xB003L,0xB52EL};
static unsigned short *g_719 = &g_206;
static int ** volatile g_725 = (void*)0;
static int ** volatile g_827 = &g_326;
static int ** volatile g_853 = (void*)0;
static int ** const volatile g_856 = &g_78;
static int ** volatile g_861 = &g_78;
static const unsigned char g_877 = 247UL;
static unsigned g_880 = 0UL;
static int ** volatile g_887 = &g_326;
static int ** volatile g_918 = &g_326;
static int ** volatile g_919 = (void*)0;
static int ** volatile g_972 = &g_78;
static int ** volatile g_979 = &g_78;
static int ** volatile g_993 = &g_326;
static volatile char g_1102[7] = {0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL};
static volatile int *g_1159 = (void*)0;
static short **g_1208 = (void*)0;
static short ***g_1207 = &g_1208;
static int g_1213 = (-6L);
static volatile char g_1226 = 0L;
static int ** volatile g_1258[4][10] = {{&g_326,(void*)0,(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_326,&g_78},{&g_326,(void*)0,(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_326,&g_78},{&g_326,(void*)0,(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_326,&g_78},{&g_326,(void*)0,(void*)0,&g_78,&g_78,&g_78,(void*)0,(void*)0,&g_326,&g_78}};
static int ** volatile g_1259[3][1] = {{&g_326},{&g_326},{&g_326}};



static unsigned short func_1(void);
static const char func_2(unsigned p_3, unsigned p_4, int p_5, unsigned p_6);
static unsigned char func_11(unsigned p_12);
static short func_22(unsigned short p_23);
static int func_26(unsigned short p_27);
static unsigned short func_28(int * p_29, char p_30, int * p_31, int * p_32);
static int * func_33(int * p_34, int * p_35);
static int * func_37(int p_38, int * p_39, const short p_40, unsigned p_41);
static int * func_42(unsigned short p_43);
static char func_44(char p_45, short p_46);
static unsigned short func_1(void)
{
    char l_13 = 0x88L;
    unsigned short l_611 = 0x438FL;
    int *l_612 = &g_66;
    unsigned char *l_613 = &g_102[3][4][1];
    short *l_614 = &g_475;
    int l_617 = 4L;
    unsigned short **l_1081 = &g_282[6][0][3];
    unsigned l_1091 = 0xCB12E92EL;
    int l_1096 = (-9L);
    unsigned l_1108 = 0x0645805AL;
    unsigned l_1110 = 0UL;
    unsigned char l_1118 = 0xF2L;
    char **l_1150 = &g_366[0];
    unsigned l_1162 = 0x4ABD1AE7L;
    int l_1185 = 0x8DC6B448L;
    int *l_1186 = &g_151[2][0][1];
    const char l_1187[2][4][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
    unsigned short l_1229 = 0UL;
    int i, j, k;
    if ((func_2((safe_div_func_int16_t_s_s(((*l_614) = (safe_mul_func_uint8_t_u_u(func_11(l_13), ((safe_sub_func_int32_t_s_s(((*l_612) = l_611), ((*g_460) = (*g_460)))) > ((*l_613) = l_13))))), (safe_add_func_uint16_t_u_u(l_617, l_611)))), g_552, (*g_253), l_617) > g_877))
    {
        int *l_1077[3][5] = {{&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_151[1][0][1],&g_90,&g_151[1][0][1],&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90}};
        int **l_1078[5][4] = {{(void*)0,&g_78,&g_78,(void*)0},{&g_78,(void*)0,&g_78,&l_1077[2][3]},{&g_78,&g_78,&g_78,&g_78},{(void*)0,&l_1077[2][3],&g_78,&g_78},{&g_78,&g_78,(void*)0,&l_1077[2][3]}};
        char *l_1079 = &g_129;
        char *l_1080 = &g_133;
        int i, j;
        l_612 = l_1077[2][4];

        ;
        (*l_612) = (((*l_1079) = (*l_612)) & ((*l_1080) = ((*l_612) < (*l_612))));
        (*g_164) = (void*)0;

        ;
    }
    else
    {
        unsigned l_1082 = 0xE8DCCF68L;
        int *l_1083 = (void*)0;
        int **l_1084 = (void*)0;
        int **l_1085 = &g_78;
        char l_1086 = 0xA5L;
        int l_1109 = (-1L);
        char ***l_1146 = &g_365;
        char ****l_1145 = &l_1146;
        unsigned char *l_1181[5];
        unsigned l_1243 = 18446744073709551608UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1181[i] = &g_102[6][7][2];
        if (((*l_612) && (*l_612)))
        {
            int ***l_1092 = &l_1085;
            int ****l_1093 = (void*)0;
            int ****l_1094 = (void*)0;
            int ****l_1095 = &l_1092;
            int l_1097 = 0L;
            (*l_1085) = func_42(((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((~((l_1091 && (&g_853 == ((*l_1095) = l_1092))) <= (*l_612))), ((*l_612) <= ((*l_612) >= (*g_253))))) > (*l_612)), (*l_612))) >= l_1096));

            ;
            (*l_612) = l_1097;
        }
        else
        {
            unsigned char l_1107 = 253UL;
            int l_1121 = 0xC68ADD9AL;
            const unsigned char l_1188 = 0UL;
            unsigned char ***l_1221 = (void*)0;
            if (((safe_sub_func_uint16_t_u_u(((*g_719) = (((*l_612) = 4UL) != (func_11((safe_rshift_func_int8_t_s_u(g_1102[2], 7))) >= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((*g_460), l_1107)), ((l_1107 <= ((l_1107 <= ((*l_613) = (l_1108 || 0x8CL))) > l_1107)) >= l_1109)))))), 65535UL)) >= l_1110))
            {
lbl_1113:
                l_612 = (void*)0;

                ;
            }
            else
            {
                int *l_1119 = &g_151[1][3][1];
                int l_1120 = (-10L);
                for (g_505 = 0; (g_505 <= 1); g_505 += 1)
                {
                    int *l_1111 = (void*)0;
                    int **l_1112 = &l_612;
                    (*l_1112) = ((*l_1085) = l_1111);

                    ;
                    ;
                    for (l_1108 = 0; (l_1108 <= 7); l_1108 += 1)
                    {
                        if (l_617)
                            goto lbl_1113;
                    }
                }

                ;
                (*l_1119) = (safe_sub_func_uint8_t_u_u(l_1107, (safe_mod_func_uint32_t_u_u((***g_458), l_1118))));
                l_1120 = (*l_1119);
            }

            ;
            if (l_1107)
            {
                int *l_1124[4] = {&g_20,&g_20,&g_20,&g_20};
                int *l_1125[6] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
                int i;
                l_1121 = (0x65ABD61DL >= l_1107);
                for (g_494 = 22; (g_494 != 30); ++g_494)
                {
                    (*l_1085) = l_1124[3];

                    ;
                }


                (*l_1085) = l_1125[0];

                ;
            }
            else
            {
                char l_1127[2][6][2] = {{{(-4L),(-4L)},{0xBEL,(-4L)},{(-4L),0xBEL},{(-4L),(-4L)},{0xBEL,(-4L)},{(-4L),0xBEL}},{{(-4L),(-4L)},{0xBEL,(-4L)},{(-4L),0xBEL},{(-4L),(-4L)},{0xBEL,(-4L)},{(-4L),0xBEL}}};
                short l_1147[1][10][10] = {{{0x171AL,0x11DDL,1L,0x978FL,0x978FL,1L,0x11DDL,0x171AL,0x82E3L,0x8DB1L},{0x978FL,0x798AL,(-1L),0x7469L,0x3B89L,(-5L),0x88AFL,0x4273L,1L,0x88AFL},{1L,0L,0x283FL,2L,0L,0x4273L,(-5L),1L,(-5L),0x4273L},{0x3B89L,0x248AL,0xD394L,0x248AL,0x3B89L,0x11DDL,(-1L),0x88AFL,0x11DDL,0L},{0L,0x46D7L,(-5L),0L,0x283FL,0x82E3L,(-1L),1L,2L,0L},{1L,0L,0x4273L,0x283FL,0x3B89L,0x46D7L,0x46D7L,0x3B89L,0x283FL,0x4273L},{0x798AL,0x798AL,0x11DDL,(-1L),0L,0xD394L,1L,0L,0x11DDL,0x88AFL},{0x248AL,(-5L),0x82E3L,1L,2L,5L,1L,1L,0x46D7L,0x248AL},{0x4273L,0x798AL,0x46D7L,2L,0x88AFL,2L,0x46D7L,0x798AL,0x4273L,0x82E3L},{0L,0L,0xD394L,0x798AL,(-1L),0xD394L,(-1L),0x248AL,7L,1L}}};
                char *l_1160 = (void*)0;
                char *l_1161 = &l_13;
                int i, j, k;
                for (g_18 = 0; (g_18 <= 8); g_18 += 1)
                {
                    int *l_1126 = &g_151[0][2][0];
                    int *l_1152[6][7][4] = {{{&g_151[1][0][1],&g_151[1][0][1],&g_151[1][2][0],&g_151[1][0][1]},{&g_90,&g_20,&l_617,&g_344},{&l_1121,&l_617,&g_90,&g_66},{(void*)0,&g_90,&g_344,&g_18},{&g_151[1][0][1],&g_18,&l_1121,&g_151[1][0][1]},{&g_18,&g_151[0][2][1],&g_344,&g_151[0][2][1]},{&g_20,&g_151[1][0][1],&g_344,(void*)0}},{{&g_18,&g_20,&g_151[1][0][1],&g_18},{&g_18,(void*)0,&g_151[1][0][1],&g_18},{&g_18,&g_151[0][0][1],&g_151[1][0][1],&g_66},{&g_18,&g_18,&g_344,&g_90},{&g_20,&g_151[1][0][1],&g_344,&l_1121},{&g_18,(void*)0,&l_1121,(void*)0},{&g_151[1][0][1],&g_18,&g_344,&g_151[2][4][0]}},{{(void*)0,&g_20,&g_90,&g_151[0][2][1]},{&g_20,(void*)0,&g_151[1][0][1],(void*)0},{&g_344,&g_20,&g_151[1][0][1],&g_90},{(void*)0,&l_1121,&g_501,&g_18},{&g_18,&g_151[0][0][1],&g_151[2][4][0],&l_1121},{&g_151[1][2][0],(void*)0,&g_151[2][1][2],&g_18},{&g_20,&g_151[1][0][1],&g_501,&l_617}},{{(void*)0,&g_151[1][0][1],&g_151[1][0][1],(void*)0},{&g_344,(void*)0,&g_151[0][0][1],&g_151[1][0][1]},{&g_151[1][0][1],&g_20,&g_90,&g_151[1][0][1]},{&g_151[0][2][1],&g_90,&g_344,&g_151[1][0][1]},{&g_151[1][0][1],&g_20,&g_151[2][4][0],&g_151[1][0][1]},{&l_1121,&g_90,&g_501,&g_151[1][0][1]},{(void*)0,&g_90,&g_20,&l_617}},{{(void*)0,&g_90,&g_501,&g_20},{&g_344,&g_151[1][0][1],(void*)0,&l_1121},{&g_90,(void*)0,&g_90,&g_90},{(void*)0,&l_1121,(void*)0,&g_20},{&g_18,&g_18,&g_501,&g_151[2][1][2]},{&g_151[2][1][2],&g_344,&g_18,&g_151[1][2][0]},{&g_344,&g_344,&g_20,&g_501}},{{&g_90,&g_344,&g_18,&g_151[1][0][1]},{&g_344,&g_344,&g_501,&l_1121},{&g_501,&g_18,&g_501,&g_20},{&g_151[1][2][0],&g_151[2][4][0],&g_151[1][0][1],&g_151[0][0][1]},{&g_18,(void*)0,&g_66,&g_151[2][4][0]},{&g_344,&g_90,&g_66,&g_20},{&g_18,&g_344,&g_151[1][0][1],&g_66}}};
                    int i, j, k;
                    for (g_66 = 0; (g_66 <= 1); g_66 += 1)
                    {
                        int i;
                        (*l_1085) = l_1126;

                        ;
                        if (g_270[(g_66 + 5)])
                            break;
                        l_1127[1][0][1] = (*l_1126);
                        if (l_1107)
                            continue;
                    }
                }
                l_617 = (safe_div_func_int16_t_s_s((((((*g_205) && l_1147[0][4][6]) | ((*l_1161) = ((safe_rshift_func_uint8_t_u_s(1UL, 6)) >= (func_11(((0x8483B5DEL >= (l_1147[0][5][5] & (l_1147[0][3][6] ^ (safe_lshift_func_int16_t_s_u(0x278DL, (g_1159 != (void*)0)))))) == (-1L))) & l_1147[0][4][6])))) & 65529UL) ^ l_1162), l_1147[0][1][0]));
            }


            for (l_1082 = 0; (l_1082 < 21); l_1082++)
            {
                int *l_1165 = &g_90;
                char *l_1176 = &l_1086;
                unsigned l_1177[1];
                unsigned char *l_1180[7][8] = {{&l_1107,&g_102[4][3][2],&l_1107,&l_1107,&l_1107,&l_1107,&g_102[4][3][2],&l_1107},{(void*)0,&l_1107,&l_1107,&l_1107,(void*)0,(void*)0,&l_1107,&l_1107},{(void*)0,(void*)0,&l_1107,&l_1107,&l_1107,(void*)0,(void*)0,&l_1107},{&l_1107,&l_1107,&l_1107,&l_1107,&g_102[4][3][2],&l_1107,&l_1107,&l_1107},{&l_1107,&l_1107,(void*)0,(void*)0,&l_1107,&l_1107,&l_1107,(void*)0},{&g_102[4][3][2],&l_1107,&g_102[4][3][2],&l_1107,&l_1107,&g_102[4][3][2],&l_1107,&g_102[4][3][2]},{&l_1107,&l_1107,(void*)0,&l_1107,&l_1107,&l_1107,&l_1107,(void*)0}};
                char l_1192[3][8][1] = {{{0xC4L},{6L},{(-1L)},{(-2L)},{(-5L)},{0L},{(-5L)},{(-2L)}},{{(-1L)},{6L},{0xC4L},{0xC4L},{6L},{(-1L)},{(-2L)},{(-5L)}},{{0L},{(-5L)},{(-2L)},{(-1L)},{6L},{0xC4L},{0xC4L},{6L}}};
                short l_1220 = 0xCEC9L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1177[i] = 18446744073709551615UL;
                (*l_1165) = 0x1F132B86L;
                if ((safe_div_func_int8_t_s_s(((0xAA562D7EL ^ 0x14F961D1L) ^ (((*l_1165) == (safe_add_func_int32_t_s_s((*g_65), func_11((*l_1165))))) == (safe_lshift_func_uint16_t_u_s((*g_719), ((safe_mod_func_int16_t_s_s((((*l_1176) = ((-9L) > (safe_mod_func_int16_t_s_s(l_1107, (*l_1165))))) ^ 0x6DL), (*g_719))) & l_1177[0]))))), (*l_1165))))
                {
                    unsigned char *l_1179 = &l_1118;
                    unsigned char **l_1178[6][8][5] = {{{&l_1179,&l_1179,(void*)0,&l_1179,(void*)0},{&l_1179,&l_1179,(void*)0,&l_1179,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{(void*)0,&l_1179,&l_1179,(void*)0,&l_1179},{&l_1179,&l_1179,&l_1179,(void*)0,&l_1179}},{{&l_1179,(void*)0,&l_1179,(void*)0,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{(void*)0,(void*)0,(void*)0,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,(void*)0,&l_1179,(void*)0,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,(void*)0,&l_1179,&l_1179},{&l_1179,(void*)0,&l_1179,(void*)0,&l_1179}},{{&l_1179,&l_1179,(void*)0,(void*)0,(void*)0},{&l_1179,&l_1179,(void*)0,&l_1179,&l_1179},{&l_1179,(void*)0,&l_1179,&l_1179,&l_1179},{(void*)0,(void*)0,&l_1179,&l_1179,&l_1179},{&l_1179,(void*)0,(void*)0,&l_1179,(void*)0},{&l_1179,&l_1179,&l_1179,(void*)0,(void*)0},{(void*)0,&l_1179,&l_1179,&l_1179,(void*)0},{&l_1179,(void*)0,&l_1179,&l_1179,&l_1179}},{{(void*)0,&l_1179,&l_1179,&l_1179,(void*)0},{(void*)0,&l_1179,&l_1179,&l_1179,(void*)0},{(void*)0,(void*)0,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{(void*)0,(void*)0,&l_1179,(void*)0,&l_1179},{&l_1179,(void*)0,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,(void*)0,&l_1179},{(void*)0,&l_1179,&l_1179,&l_1179,&l_1179}},{{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,(void*)0,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,(void*)0,&l_1179,(void*)0,&l_1179}},{{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,(void*)0},{&l_1179,&l_1179,&l_1179,(void*)0,&l_1179},{&l_1179,(void*)0,(void*)0,(void*)0,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,&l_1179},{&l_1179,&l_1179,&l_1179,&l_1179,(void*)0},{&l_1179,(void*)0,&l_1179,(void*)0,&l_1179},{&l_1179,&l_1179,&l_1179,(void*)0,&l_1179}}};
                    int l_1182 = 0x69726297L;
                    int *l_1189 = &l_617;
                    short **l_1205 = &g_54[1];
                    short ** const *l_1204[9][1] = {{&l_1205},{(void*)0},{&l_1205},{(void*)0},{&l_1205},{(void*)0},{&l_1205},{(void*)0},{&l_1205}};
                    int i, j, k;
                    l_1121 = ((l_1180[4][3] = (l_613 = &l_1118)) == l_1181[4]);

                    ;

                    if ((l_611 < ((*l_1176) = (l_1182 < (safe_lshift_func_int16_t_s_s(l_1182, 6))))))
                    {
                        int *l_1190[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1190[i] = &g_501;
                        l_1190[2] = l_1189;


                    }
                    else
                    {
                        unsigned short l_1191 = 0x797CL;
                        l_1191 = ((*l_1189) = (1UL | (*l_1186)));
                        if (l_1192[1][6][0])
                            continue;
                    }
                    if (l_1107)
                    {
                        (*l_1189) = 0xAFAC0BA5L;
                        (*l_1085) = &l_617;

                        ;
                    }
                    else
                    {
                        l_1121 = (*g_65);
                        (*l_1085) = func_42((*l_1189));

                        ;
                        (*g_84) = (*g_979);
                    }

                    ;
                    for (g_475 = 0; (g_475 == 28); g_475++)
                    {
                        short ** const **l_1206 = &l_1204[6][0];
                        short ****l_1209 = &g_1207;
                        int l_1212 = 0x0EE43FDFL;
                        (*l_1085) = (*g_646);
                    }
                }
                else
                {
                    for (g_133 = (-2); (g_133 > 0); g_133++)
                    {
                        (*l_1085) = (void*)0;

                        ;
                    }
                    (*l_1186) = (l_1121 || 0x3144L);
                    if ((((*l_1165) = ((*l_1186) = 0L)) >= (safe_sub_func_uint8_t_u_u(l_1107, ((safe_mul_func_uint8_t_u_u(l_1220, (((l_1221 != l_1221) <= 0xACB4E844L) == (safe_unary_minus_func_uint8_t_u(l_1188))))) >= l_1177[0])))))
                    {
                        int l_1225 = 0L;
                        volatile int l_1227 = (-4L);
                        int *l_1228[10] = {&g_151[1][0][1],&g_151[1][0][1],&g_151[1][0][1],&g_151[1][0][1],&g_66,&g_151[1][0][1],&g_151[1][0][1],&g_151[1][0][1],&g_151[1][0][1],&g_66};
                        int i;
                        l_1227 = g_1226;
                        (**g_163) = (*g_164);
                    }
                    else
                    {
                        return (*l_1186);


                    }
                }


                if ((*l_1165))
                    continue;
                if (l_1229)
                    break;
            }


            ;
        }


        ;
        ;
        for (l_1096 = 17; (l_1096 < (-23)); l_1096 = safe_sub_func_uint32_t_u_u(l_1096, 9))
        {
            short l_1238 = 0x3649L;
            int l_1246 = 1L;
            l_612 = &l_617;

            ;
            l_1246 = ((((*g_719) = (safe_lshift_func_uint16_t_u_s(((1L < (*g_205)) <= (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_1238, ((safe_lshift_func_uint16_t_u_u(65535UL, 8)) < (l_1238 < (safe_add_func_int16_t_s_s(l_1238, l_1243)))))), ((*l_612) = ((l_1238 && ((*g_460) = (func_11(func_11((*g_460))) < (*l_1186)))) ^ (*l_1186)))))), 0))) > l_1238) == 0UL);
        }

        ;
    }


    ;


    ;
    ;
    (*l_1186) = (*l_1186);
    for (g_880 = 0; (g_880 > 48); g_880 = safe_add_func_uint8_t_u_u(g_880, 4))
    {
        for (g_505 = 1; (g_505 <= 4); g_505 += 1)
        {
            int l_1249[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1249[i] = 1L;
            return l_1249[4];


        }
    }
    for (l_1118 = 0; (l_1118 == 8); ++l_1118)
    {
        unsigned short l_1282 = 0x9326L;
        int l_1283[10] = {3L,0x79CDD0E6L,0x79CDD0E6L,3L,1L,3L,0x79CDD0E6L,0x79CDD0E6L,3L,1L};
        int l_1295[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        const int l_1305 = (-1L);
        int i;
    }
    return (*g_205);


}







static const char func_2(unsigned p_3, unsigned p_4, int p_5, unsigned p_6)
{
    char l_620 = (-8L);
    unsigned char *l_627 = &g_102[2][5][2];
    int l_628 = (-1L);
    short *l_634 = &g_506;
    int l_636 = 0L;
    unsigned l_641 = 0xB15E293CL;
    int *l_659 = &g_18;
    unsigned **l_686 = &g_460;
    unsigned l_723 = 0UL;
    unsigned char **l_753 = &l_627;
    char **l_759 = &g_366[0];
    char l_761 = 3L;
    int l_784 = 0x9F517BC0L;
    int l_894 = 0x47D7A5DAL;
    short l_914 = 8L;
    unsigned l_915 = 18446744073709551614UL;
    unsigned short l_954[3][3][1] = {{{65533UL},{65535UL},{65533UL}},{{65533UL},{65535UL},{65533UL}},{{65533UL},{65535UL},{65533UL}}};
    const unsigned short *l_963 = &g_380;
    const unsigned short **l_962[9] = {&l_963,(void*)0,&l_963,(void*)0,&l_963,(void*)0,&l_963,(void*)0,&l_963};
    unsigned l_1043[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1043[i] = 1UL;
    if ((safe_lshift_func_uint8_t_u_s(((l_620 = 0xB9L) <= ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x43L, 2)), ((*l_627) = p_3))), p_4)) >= (0x1BC9L && (l_628 = 0x87A5L)))), 7)))
    {
        int l_633 = 0L;
        int l_635 = 0x2FBE5DD7L;
        char *l_637 = (void*)0;
        char *l_638 = &g_472[3];
        int *l_664[10] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
        unsigned *l_721 = &g_270[8];
        char ***l_739 = (void*)0;
        unsigned short l_818 = 1UL;
        const char l_855 = 0x20L;
        char **l_868[5][10][5] = {{{(void*)0,&g_366[0],(void*)0,&l_638,(void*)0},{&l_637,&l_637,&l_637,&l_638,&l_638},{&l_638,&g_366[2],&l_637,(void*)0,&l_637},{&l_637,&g_366[0],(void*)0,&g_366[1],(void*)0},{&g_366[0],&g_366[2],&l_638,(void*)0,&l_638},{&g_366[0],&l_637,(void*)0,&l_638,&l_638},{(void*)0,(void*)0,(void*)0,&g_366[2],&l_638},{&g_366[0],&l_637,&l_638,&g_366[2],&l_638},{&l_638,&l_638,&g_366[2],&l_638,&g_366[0]},{&l_637,(void*)0,&l_638,&l_638,&g_366[0]}},{{&l_638,(void*)0,(void*)0,&g_366[1],&l_638},{(void*)0,&l_638,&l_637,&g_366[0],&g_366[1]},{&l_638,&l_637,&l_637,&l_638,&g_366[1]},{&l_637,(void*)0,&g_366[0],&l_638,&l_638},{&l_638,(void*)0,&l_638,&l_638,&g_366[0]},{&g_366[0],&l_637,&l_638,&g_366[0],&g_366[0]},{(void*)0,(void*)0,&g_366[0],&g_366[1],&l_638},{&l_638,&l_637,&l_637,&l_638,&l_638},{&l_638,(void*)0,&l_637,&l_638,&l_638},{(void*)0,(void*)0,(void*)0,&g_366[2],&l_638}},{{&g_366[0],&l_637,&l_638,&g_366[2],&l_638},{&l_638,&l_638,&g_366[2],&l_638,&g_366[0]},{&l_637,(void*)0,&l_638,&l_638,&g_366[0]},{&l_638,(void*)0,(void*)0,&g_366[1],&l_638},{(void*)0,&l_638,&l_637,&g_366[0],&g_366[0]},{&l_638,&l_638,&l_638,(void*)0,&g_366[0]},{(void*)0,&g_366[0],&g_366[1],&l_637,&l_638},{&l_638,&l_638,&l_637,(void*)0,(void*)0},{&g_366[0],&g_366[0],&l_637,&l_637,&l_638},{&l_638,&g_366[0],&g_366[1],&g_366[0],&g_366[1]}},{{&l_638,&g_366[0],&l_638,&g_366[1],&l_637},{&l_638,&l_638,(void*)0,(void*)0,(void*)0},{&l_638,&g_366[0],&l_638,&l_638,&l_637},{&g_366[0],&l_638,&l_638,&l_638,&g_366[1]},{&l_638,&g_366[0],&g_366[2],(void*)0,&l_638},{(void*)0,&l_637,&l_638,&g_366[1],(void*)0},{&l_638,&l_637,&l_638,&g_366[0],&l_638},{&g_366[0],&g_366[0],(void*)0,&l_637,&g_366[0]},{&l_638,&l_638,&l_638,(void*)0,&g_366[0]},{(void*)0,&g_366[0],&g_366[1],&l_637,&l_638}},{{&l_638,&l_638,&l_637,(void*)0,(void*)0},{&g_366[0],&g_366[0],&l_637,&l_637,&l_638},{&l_638,&g_366[0],&g_366[1],&g_366[0],&g_366[1]},{&l_638,&g_366[0],&l_638,&g_366[1],&l_637},{&l_638,&l_638,&l_637,&l_637,&l_637},{&l_638,&g_366[1],&l_638,&l_638,&l_638},{&g_366[0],&l_638,&l_638,&l_638,&g_366[2]},{&l_638,&l_638,&g_366[0],&l_637,(void*)0},{&l_637,&l_637,&l_638,&g_366[2],&g_366[0]},{&g_366[1],&l_637,&l_638,&l_638,&g_366[0]}}};
        unsigned l_882 = 0UL;
        int l_883[8] = {1L,1L,0x8ADDF136L,1L,1L,0x8ADDF136L,1L,1L};
        short l_899 = (-1L);
        int *l_909[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_909[i] = &l_636;
        if ((safe_mod_func_int32_t_s_s(((*g_326) = (**g_529)), ((((((safe_sub_func_int16_t_s_s((l_633 ^ p_5), 0UL)) <= (1L || p_3)) < ((*l_638) = (l_636 = (l_635 = (((l_628 = ((0x997FL <= (&g_52 == (l_634 = &g_52))) | 0L)) && 252UL) != p_3))))) && 1UL) & l_620) & l_620))))
        {
            short l_648 = 0xC0BCL;
            int l_657 = (-1L);
            int *l_667 = (void*)0;
            unsigned char *l_675[5] = {&g_102[8][6][1],&g_102[8][6][1],&g_102[8][6][1],&g_102[8][6][1],&g_102[8][6][1]};
            unsigned **l_685[4] = {&g_460,&g_460,&g_460,&g_460};
            char **l_689 = (void*)0;
            unsigned l_701[10] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
            unsigned l_792 = 4294967295UL;
            short *l_806 = (void*)0;
            short *l_807 = &g_475;
            unsigned l_819 = 0xC75A82F6L;
            unsigned *l_822 = (void*)0;
            int i;
            if ((safe_div_func_uint32_t_u_u(l_641, (((((*g_365) = &l_620) != &l_620) || p_6) ^ 247UL))))
            {
                int *l_644[5] = {&g_344,&g_344,&g_344,&g_344,&g_344};
                int i;
                for (l_620 = 0; (l_620 <= (-26)); --l_620)
                {
                    unsigned short l_651 = 0xBBC9L;
                    unsigned short **l_654 = &g_282[5][4][0];
                    unsigned short *l_660[1];
                    int l_661 = 0xD40BCE2EL;
                    int **l_663[6][1][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_660[i] = &g_494;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_663[i][j][k] = &l_659;
                        }
                    }
                    if (l_636)
                    {
                        int *l_645 = &g_151[1][0][1];
                        (*g_646) = l_644[3];

                        ;
                        (*g_527) = (*g_570);

                        ;
                    }
                    else
                    {
                        (*g_647) = &p_5;

                        ;
                    }

                    ;
                    if (((-9L) > p_3))
                    {
                        int *l_655[8][9] = {{&l_635,&g_344,(void*)0,(void*)0,&g_344,&l_635,&g_344,(void*)0,(void*)0},{&l_628,&g_501,&g_66,(void*)0,&g_66,&g_501,&l_628,&l_635,&g_90},{&g_501,&g_344,&g_501,&l_635,&l_635,&g_501,&g_344,&g_501,&l_635},{(void*)0,&l_635,&g_66,(void*)0,&g_90,(void*)0,&l_628,&g_501,&g_66},{&g_344,&l_633,&g_501,&l_633,&g_344,&g_344,&l_633,&g_501,&l_633},{&l_628,(void*)0,(void*)0,(void*)0,&g_90,&g_501,&g_90,(void*)0,(void*)0},{&g_344,&g_344,&l_633,&g_501,&l_633,&g_344,&g_344,&l_633,&g_501},{&g_66,(void*)0,&g_66,&g_501,&l_628,&l_635,&g_90,&l_635,&l_628}};
                        int i, j;
                        (*g_656) = func_37(((*g_78) | (((safe_sub_func_uint16_t_u_u((func_11(l_651) != 1UL), p_5)) < ((((*l_634) = p_5) | (safe_rshift_func_int16_t_s_s(((l_654 == (void*)0) || p_6), 1))) <= l_633)) > p_3)), l_655[4][2], p_4, p_5);


                        ;
                        l_657 = (**g_339);
                    }
                    else
                    {
                        int **l_658 = &g_326;
                        p_5 = p_5;
                        (*l_658) = &p_5;

                        ;
                        (*g_78) = p_4;
                        (**l_658) = l_648;
                    }


                    l_664[1] = func_42(((p_5 == g_662[3]) == p_6));
                    for (l_657 = 0; (l_657 < (-8)); l_657--)
                    {
                        l_667 = &p_5;

                        ;
                    }
                }


                ;

                ;
            }
            else
            {
                int l_691 = 1L;
                int l_693 = (-1L);
                unsigned *l_720[4][1][6] = {{{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199}},{{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199}},{{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199}},{{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199}}};
                short **l_731 = &g_54[0];
                int l_744 = 0xDA48AA6DL;
                int *l_764 = &l_628;
                int i, j, k;
                for (l_648 = 5; (l_648 >= 1); l_648 -= 1)
                {
                    char **l_676 = &g_366[0];
                    int *l_696 = &l_636;
                    unsigned char l_724 = 0x19L;
                    int **l_726 = (void*)0;
                    int **l_727 = &g_326;
                    int i;
                }
                for (l_693 = 0; (l_693 != 13); l_693++)
                {
                    char ***l_738 = &l_689;
                    char ****l_737 = &l_738;
                    int **l_740 = &l_659;
                    char l_741 = 2L;
                    unsigned short l_742[7] = {0x5067L,0x6F08L,0x5067L,0x5067L,0x6F08L,0x5067L,0x5067L};
                    unsigned short l_743[9] = {0UL,7UL,0UL,7UL,0UL,7UL,0UL,7UL,0UL};
                    int i;
                }
                if ((safe_unary_minus_func_uint16_t_u((*g_205))))
                {
                    int **l_752 = &l_664[9];
                    for (p_5 = 0; p_5 < 2; p_5 += 1)
                    {
                        g_540[p_5] = (void*)0;
                    }
                    (*l_752) = &l_635;


                    l_753 = &l_627;
                    if (p_6)
                    {
                        char **l_758[8];
                        unsigned ***l_760 = &l_685[2];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_758[i] = (void*)0;
                        (**g_529) = ((**l_752) = p_3);
                        (*l_752) = (*g_521);


                        (**g_564) = (safe_sub_func_uint32_t_u_u(((*g_460) = p_5), ((**g_84) < (safe_add_func_int32_t_s_s(((l_744 = ((l_689 = l_758[5]) != l_759)) < (l_761 = ((!((&g_460 == ((*l_760) = &g_460)) < (*l_659))) ^ (**l_752)))), (p_5 != (*l_659)))))));
                        l_744 = (+(**g_529));
                    }
                    else
                    {
                        (**l_752) = (**l_752);
                        (*l_752) = (*l_752);
                        (**l_752) = 1L;
                    }


                }
                else
                {
                    int **l_762 = (void*)0;
                    int **l_763 = &g_78;
                    unsigned char l_793 = 0x52L;
                    l_764 = ((*l_763) = (void*)0);

                    ;
                    ;
                    for (g_64 = 6; (g_64 >= (-23)); g_64--)
                    {
                        unsigned l_769 = 0x1EC40891L;
                        short *l_770 = (void*)0;
                        short *l_771 = (void*)0;
                        short l_791 = 0x3694L;
                        char *l_794 = &l_761;
                        unsigned short *l_795[4];
                        int l_796 = 0xA6B49F99L;
                        int l_797 = 0xABC7B61EL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_795[i] = &g_380;
                        l_797 = (((*g_719) = 0x9774L) && (l_796 = (safe_rshift_func_int16_t_s_s((((*g_719) = (!0xB210L)) <= ((*l_659) = ((*l_634) = l_769))), (((*l_794) = (safe_lshift_func_int8_t_s_u(((*l_638) = ((l_793 = ((*g_326) = (l_792 = (safe_add_func_int16_t_s_s(p_6, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((p_6 | l_784) == (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0xA46CL, ((safe_rshift_func_uint16_t_u_s(l_791, (p_4 == p_6))) == p_6))), l_791))), l_769)), 0x8164L)), 14)), p_4))))))) && p_3)), 4))) != p_3)))));
                        (*g_164) = (void*)0;

                        ;
                        p_5 = p_5;
                        (*l_763) = func_42((*g_205));

                        ;
                    }

                    ;
                }

                ;

                ;
            }


            ;


            ;
            if ((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_4, ((*l_807) = (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_6 == (l_648 || ((*l_634) = (*l_659)))), p_3)), ((*l_638) = p_5)))))), 0x143EL)))
            {
                const unsigned l_812 = 4294967295UL;
                if ((safe_add_func_uint32_t_u_u((p_6 = (0xB6L < 255UL)), (0L | p_5))))
                {
                    int *l_811 = &g_151[1][2][0];
                    for (l_628 = 0; (l_628 <= 4); l_628 += 1)
                    {
                        int *l_810 = &g_18;
                        int i;
                        (*l_810) = g_472[l_628];
                        (**g_163) = (void*)0;

                        ;
                        return l_812;




                    }
                    l_811 = (*g_325);

                    ;
                }
                else
                {
                    for (g_494 = 10; (g_494 == 47); g_494++)
                    {
                        if (p_4)
                            break;
                    }
                    return (*l_659);




                }
                for (l_641 = (-11); (l_641 > 33); l_641++)
                {
                    int **l_817[9][3][1];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_817[i][j][k] = &l_664[1];
                        }
                    }
                    l_659 = func_42(((*g_719) = 65532UL));

                    ;
                }

                ;
            }
            else
            {
                int l_825[2];
                int **l_826 = &l_664[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_825[i] = 1L;
                if (p_5)
                {
                    (*l_659) = l_818;
                }
                else
                {
                    p_5 = 0x63CF59F4L;
                }
                (*g_827) = ((*l_826) = func_37(l_819, &l_633, ((+p_3) >= p_5), (((**l_753) = ((safe_rshift_func_int8_t_s_u((l_822 == &p_6), 1)) > ((*l_634) = ((*l_807) = (safe_lshift_func_uint8_t_u_s(((p_6 <= (p_3 & (p_4 && l_825[0]))) & (*l_659)), 2)))))) || 0x93L)));


                ;
            }

            ;
        }
        else
        {
            int l_831 = 0L;
            int *l_836 = &g_20;
            short *l_843 = &g_662[5];
lbl_847:
            if ((*g_253))
            {
                for (l_636 = (-7); (l_636 >= (-4)); l_636++)
                {
                    int **l_830 = &l_659;
                    (*l_830) = &p_5;

                    ;
                    if ((((*g_719) = l_831) <= p_4))
                    {
                        int l_832 = 0xD5B8CF26L;
                        if (l_832)
                            break;
                    }
                    else
                    {
                        (*l_659) = ((*g_78) = p_4);
                    }
                }
            }
            else
            {
                for (l_633 = (-30); (l_633 <= (-3)); l_633++)
                {
                    const int l_835 = (-4L);
                    for (g_90 = 2; (g_90 >= 0); g_90 -= 1)
                    {
                        return l_835;
                    }
                }
                (*l_659) = 0xB1F5EC59L;
            }
            for (l_818 = 0; (l_818 <= 3); l_818 += 1)
            {
                unsigned char l_845 = 0xC4L;
                int *l_846 = (void*)0;
                (*l_659) = 0x9BB91A0DL;
                l_836 = (*g_521);

                ;
                if ((*l_659))
                    continue;
                for (g_494 = 0; (g_494 <= 1); g_494 += 1)
                {
                    short **l_844 = &g_54[1];
                    int l_850 = 1L;
                    int l_851[7][1][8] = {{{0x9E54D289L,0L,0L,0xAB067394L,0L,0x6D8E1808L,0x7383BEA3L,0L}},{{0xF928CB15L,0L,0x6D8E1808L,0xAB067394L,0x702747A5L,0xAB067394L,0x6D8E1808L,0L}},{{0L,0L,0L,0xAB067394L,0x2EDF1A16L,0x5A0E8E56L,0L,0x78978DA4L}},{{0xAB067394L,0x325F2B5CL,0x9E54D289L,0L,0L,0L,0L,0L}},{{0x5A0E8E56L,0L,0L,0x5A0E8E56L,0x9E54D289L,0x2EDF1A16L,0xF928CB15L,1L}},{{0x9E54D289L,0x2EDF1A16L,0xF928CB15L,1L,0x702747A5L,4L,0L,0x325F2B5CL}},{{1L,0x2EDF1A16L,7L,0x6D8E1808L,7L,0x2EDF1A16L,1L,0xAB067394L}}};
                    int i, j, k;
                    (*l_659) = ((((((*l_627) = ((safe_lshift_func_int8_t_s_u((4294967290UL ^ (((safe_rshift_func_int8_t_s_u(p_3, 4)) ^ (((safe_sub_func_uint8_t_u_u(((p_4 >= func_11((&g_662[2] != ((*l_844) = (l_843 = l_634))))) & (p_4 >= p_4)), (l_845 < p_5))) & 0UL) || p_5)) ^ 0xA1EDL)), p_4)) < 0xACL)) || l_845) != p_6) | 0L) && p_4);

                    ;
                    if ((**g_351))
                        break;
                    for (l_635 = 0; (l_635 <= 3); l_635 += 1)
                    {
                        int i, j, k;
                        l_846 = l_846;
                        return p_6;
                    }
                    if (l_831)
                        goto lbl_847;
                    for (g_380 = 0; (g_380 <= 3); g_380 += 1)
                    {
                        short *l_848 = &g_662[6];
                        unsigned char l_849 = 0xADL;
                        int l_852 = 1L;
                        int **l_854 = &l_659;
                        (*l_854) = func_37((**g_527), func_42(((*l_836) = p_5)), ((*l_848) = p_3), (l_849 && (l_831 = ((l_852 = ((l_850 = p_5) ^ ((l_851[5][0][7] != (*g_719)) <= p_5))) || p_4))));


                        ;
                        return (*l_836);
                    }
                }
            }
        }


        ;

        ;
        ;

        (*g_856) = func_37(((*l_659) = 6L), &l_635, l_855, p_6);

        ;
        for (l_628 = 0; (l_628 == (-11)); l_628 = safe_sub_func_int8_t_s_s(l_628, 1))
        {
            char **l_865 = &l_637;
            const int l_871 = 0x5FE11829L;
            const unsigned char *l_876 = &g_877;
            int l_884 = 0xA4BD7754L;
            int **l_905 = &l_664[6];
            const int **l_907[5][3] = {{&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253}};
            const int ***l_906 = &l_907[1][1];
            unsigned l_908 = 0x10EC1CC3L;
            int i, j;
        }
        for (p_6 = 0; (p_6 >= 51); p_6 = safe_add_func_uint16_t_u_u(p_6, 5))
        {
            int **l_920 = &l_664[7];
            int *l_935 = &l_636;
            int *l_947 = &g_90;
            char **l_952 = (void*)0;
            (*g_918) = &p_5;

            ;
            (*l_920) = &l_628;
            (*g_326) = p_3;
        }


    }
    else
    {
        int l_953[1];
        unsigned char l_966 = 0x64L;
        int i;
        for (i = 0; i < 1; i++)
            l_953[i] = (-10L);
        (*l_659) = ((l_953[0] & (((func_44(p_5, (*l_659)) >= (0x090FA402L && ((((*g_719) = l_954[2][0][0]) && ((*l_634) = g_880)) < (safe_mod_func_int16_t_s_s(g_494, (safe_rshift_func_uint8_t_u_s(p_3, (*l_659)))))))) < 0x41L) > 0UL)) == 255UL);


        if ((safe_unary_minus_func_int16_t_s((((safe_sub_func_uint16_t_u_u(((*l_659) > ((*l_659) <= (p_3 <= (*l_659)))), (((void*)0 != l_962[5]) ^ ((p_4 && ((safe_div_func_int16_t_s_s(l_966, (*l_659))) ^ p_3)) <= p_5)))) ^ p_3) == 0xB49D93E6L))))
        {
            return p_4;
        }
        else
        {
            int **l_981 = &l_659;
            const int l_988[2] = {1L,1L};
            const short **l_991 = (void*)0;
            int i;
            for (l_915 = 15; (l_915 == 31); l_915++)
            {
                char l_978 = 0x3CL;
                unsigned l_980 = 0x3C5B02DEL;
                for (p_6 = 0; (p_6 >= 38); p_6 = safe_add_func_int32_t_s_s(p_6, 6))
                {
                    for (g_380 = 0; (g_380 <= 1); g_380 += 1)
                    {
                        int * const l_971 = &g_501;
                        int i;
                        if (g_662[g_380])
                            break;
                        (*g_972) = l_971;

                        ;
                    }
                }
                for (l_636 = 19; (l_636 >= (-28)); l_636 = safe_sub_func_int16_t_s_s(l_636, 2))
                {
                    (*g_326) = p_4;
                    for (g_501 = 0; (g_501 < (-12)); --g_501)
                    {
                        (*l_659) = (((l_953[0] || p_4) || p_6) & (l_978 = (safe_unary_minus_func_int32_t_s((p_4 <= ((void*)0 != &g_364[1]))))));
                        if (p_4)
                            break;
                    }
                    for (p_4 = 0; (p_4 <= 3); p_4 += 1)
                    {
                        const short ***l_992 = &l_991;
                        int i;
                        (*g_979) = &p_5;

                        ;
                        l_980 = g_270[(p_4 + 1)];
                        p_5 = (((void*)0 == l_981) < (safe_sub_func_uint32_t_u_u(l_978, ((safe_rshift_func_uint16_t_u_u(p_6, (safe_rshift_func_uint16_t_u_s((p_6 | l_988[0]), (safe_rshift_func_uint8_t_u_s((l_966 == g_270[(p_4 + 1)]), 5)))))) > (((*l_992) = l_991) != (void*)0)))));
                    }
                }
                (*l_981) = (*g_656);

                ;
            }


            ;
            return (*l_659);


        }
    }

    ;
    ;

    ;
    ;
    (*g_326) = 0xB794F557L;
    (*g_993) = &p_5;

    ;
    for (l_641 = 0; (l_641 <= 0); l_641 += 1)
    {
        unsigned char *** const l_994[7] = {&g_462,&g_462,&g_462,&g_462,&g_462,&g_462,&g_462};
        int l_1000 = 5L;
        int *l_1002 = &g_18;
        unsigned l_1003[2][5] = {{0xA17D88C9L,0xA17D88C9L,0xA17D88C9L,0xA17D88C9L,0xA17D88C9L},{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}};
        int *l_1004 = &g_20;
        short *l_1042[9][2] = {{(void*)0,(void*)0},{&g_506,(void*)0},{(void*)0,&g_506},{(void*)0,(void*)0},{&g_506,(void*)0},{(void*)0,&g_506},{(void*)0,(void*)0},{&g_506,(void*)0},{(void*)0,&g_506}};
        const char l_1074 = 0x7BL;
        int i, j;
        for (p_4 = 0; (p_4 <= 0); p_4 += 1)
        {
            unsigned char ****l_995 = &g_461[0];
            int **l_1001[4][7] = {{&l_659,&g_326,&g_78,&g_326,&l_659,&l_659,&g_326},{&g_326,&g_326,&g_326,&g_326,&g_326,&g_326,&g_326},{&g_78,&g_326,&g_326,&g_326,&g_326,&g_326,&g_326},{&g_326,&g_326,&l_659,&l_659,&g_326,&l_659,&g_326}};
            short l_1010 = 0xF748L;
            int i, j;
            p_5 = (l_994[3] == ((*l_995) = &g_462));
            (**l_995) = (**l_995);
            (*g_326) = p_3;
            for (l_914 = 0; (l_914 >= 0); l_914 -= 1)
            {
                const unsigned *l_1006 = &g_270[8];
                const unsigned **l_1005 = &l_1006;
                const unsigned ***l_1007 = &l_1005;
                int l_1013 = 0L;
                int i, j, k;
                (*l_1007) = l_1005;
                for (g_206 = 0; (g_206 <= 0); g_206 += 1)
                {
                    unsigned short *l_1020 = &g_505;
                    int l_1021 = 2L;
                    int *l_1031 = &l_1021;
                    int i, j, k;
                }
                if (l_954[l_641][l_914][l_914])
                    break;
                l_1043[0] = (l_1042[1][1] != &g_662[3]);
            }
        }
        for (l_894 = 0; (l_894 >= 0); l_894 -= 1)
        {
            short l_1060 = 0x7EC4L;
            int l_1067 = 1L;
            char *l_1075[9];
            int l_1076 = 1L;
            int i;
            for (i = 0; i < 9; i++)
                l_1075[i] = &l_620;
            for (g_501 = 0; (g_501 <= 0); g_501 += 1)
            {
                int l_1044 = (-1L);
                int **l_1045 = (void*)0;
                int **l_1046 = &l_659;
                (*l_1046) = &l_1000;

                ;
                (*l_1046) = (*g_993);

                ;
            }
            (*l_659) = 1L;
            for (g_90 = 0; (g_90 >= 0); g_90 -= 1)
            {
                for (g_344 = 0; (g_344 <= 0); g_344 += 1)
                {
                    char *l_1061 = (void*)0;
                    char *l_1062 = &g_472[1];
                    unsigned *l_1068 = &l_1003[0][2];
                    int l_1069 = 7L;
                    int i, j, k;
                    for (g_66 = 0; (g_66 <= 0); g_66 += 1)
                    {
                        int **l_1049[8][6] = {{&l_1002,&g_326,&l_1002,&g_78,&g_78,&l_1002},{(void*)0,(void*)0,&g_78,&g_326,&g_78,(void*)0},{&g_78,&g_326,&g_326,&g_326,&g_326,&g_78},{(void*)0,&g_78,&g_326,&g_78,(void*)0,(void*)0},{&l_1002,&g_78,&g_78,&l_1002,&g_326,&l_1002},{&l_1002,&g_326,&l_1002,&g_78,&g_78,&l_1002},{(void*)0,(void*)0,&g_78,&g_326,&g_78,(void*)0},{&g_78,&g_326,&g_326,&g_326,&g_326,&g_78}};
                        int i, j;
                        p_5 = (safe_div_func_int32_t_s_s(0xFBD6A99DL, (*l_1002)));
                        (*g_339) = (*g_339);
                        (*g_570) = (*g_534);
                        (*g_78) = p_4;
                    }
                    (*g_887) = &p_5;
                }
            }
            (*l_659) = ((safe_add_func_int32_t_s_s((1UL < (safe_rshift_func_uint16_t_u_s(((*l_1002) <= (*l_659)), 7))), l_1074)) ^ ((*l_1004) = (l_1076 = (l_1067 = ((void*)0 != &g_595)))));
        }
    }
    return p_4;



}







static unsigned char func_11(unsigned p_12)
{
    unsigned char l_502[4] = {252UL,252UL,252UL,252UL};
    int *l_528 = &g_151[1][0][1];
    unsigned l_544 = 6UL;
    unsigned char *l_547 = &l_502[2];
    unsigned char l_557 = 0x89L;
    unsigned l_559 = 18446744073709551615UL;
    int i;
    for (p_12 = 0; (p_12 >= 20); ++p_12)
    {
        int *l_19 = &g_20;
        int l_503 = 0x81135BB8L;
        unsigned char *l_546 = &g_102[8][1][0];
        unsigned char l_588 = 0UL;
        (*l_19) = (g_18 = (safe_mod_func_int16_t_s_s(g_18, p_12)));
        for (g_18 = 1; (g_18 >= 0); g_18 -= 1)
        {
            unsigned short *l_493 = &g_494;
            unsigned short *l_504 = &g_505;
            int *l_520 = &g_151[2][4][0];
            int **l_565 = &l_528;
            int i;
        }
        for (g_64 = 0; (g_64 > (-5)); g_64 = safe_sub_func_int8_t_s_s(g_64, 4))
        {
            int *l_605 = &g_344;
        }
        (*g_164) = (void*)0;

        ;
    }
    return (*l_528);
}







static short func_22(unsigned short p_23)
{
    int *l_36 = &g_20;
    short *l_51 = &g_52;
    int *l_476[9][5][5] = {{{(void*)0,&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2]},{&g_344,(void*)0,(void*)0,&g_344,(void*)0},{&g_151[0][3][2],&g_151[0][3][2],&g_66,&g_151[0][3][2],&g_151[0][3][2]},{(void*)0,&g_344,(void*)0,(void*)0,&g_344},{&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2],(void*)0}},{{&g_344,&g_344,&g_90,&g_344,&g_344},{(void*)0,&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2]},{&g_344,(void*)0,(void*)0,&g_344,(void*)0},{&g_151[0][3][2],&g_151[0][3][2],&g_66,&g_151[0][3][2],&g_151[0][3][2]},{(void*)0,&g_344,(void*)0,(void*)0,&g_344}},{{&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2],(void*)0},{&g_344,&g_344,&g_90,&g_344,&g_344},{(void*)0,&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2]},{&g_344,(void*)0,(void*)0,&g_344,(void*)0},{&g_151[0][3][2],&g_151[0][3][2],&g_66,&g_151[0][3][2],&g_151[0][3][2]}},{{(void*)0,&g_344,(void*)0,(void*)0,&g_344},{&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2],(void*)0},{&g_344,&g_344,&g_90,&g_344,&g_344},{(void*)0,&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2]},{&g_344,(void*)0,(void*)0,&g_344,(void*)0}},{{&g_151[0][3][2],&g_151[0][3][2],&g_66,&g_151[0][3][2],&g_151[0][3][2]},{(void*)0,&g_344,(void*)0,(void*)0,&g_344},{&g_151[0][3][2],(void*)0,(void*)0,&g_151[0][3][2],&g_66},{(void*)0,(void*)0,&g_344,(void*)0,(void*)0},{&g_66,(void*)0,&g_66,&g_66,(void*)0}},{{(void*)0,&g_90,&g_90,(void*)0,&g_90},{(void*)0,(void*)0,&g_151[0][3][2],(void*)0,(void*)0},{&g_90,(void*)0,&g_90,&g_90,(void*)0},{(void*)0,&g_66,&g_66,(void*)0,&g_66},{(void*)0,(void*)0,&g_344,(void*)0,(void*)0}},{{&g_66,(void*)0,&g_66,&g_66,(void*)0},{(void*)0,&g_90,&g_90,(void*)0,&g_90},{(void*)0,(void*)0,&g_151[0][3][2],(void*)0,(void*)0},{&g_90,(void*)0,&g_90,&g_90,(void*)0},{(void*)0,&g_66,&g_66,(void*)0,&g_66}},{{(void*)0,(void*)0,&g_344,(void*)0,(void*)0},{&g_66,(void*)0,&g_66,&g_66,(void*)0},{(void*)0,&g_90,&g_90,(void*)0,&g_90},{(void*)0,(void*)0,&g_151[0][3][2],(void*)0,(void*)0},{&g_90,(void*)0,&g_90,&g_90,(void*)0}},{{(void*)0,&g_66,&g_66,(void*)0,&g_66},{(void*)0,(void*)0,&g_344,(void*)0,(void*)0},{&g_66,(void*)0,&g_66,&g_66,(void*)0},{(void*)0,&g_90,&g_90,(void*)0,&g_90},{(void*)0,(void*)0,&g_151[0][3][2],(void*)0,(void*)0}}};
    int l_490[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_490[i] = 1L;
    for (p_23 = 0; (p_23 <= 1); p_23 += 1)
    {
        int i;
        if (g_21[p_23])
            break;
    }
    (*g_65) = ((*l_36) = func_26(func_28(func_33(l_36, func_37(g_20, func_42(((g_20 && (*l_36)) < func_44((*l_36), ((*l_51) = ((4294967295UL || p_23) < (safe_div_func_uint16_t_u_u(p_23, (safe_rshift_func_uint16_t_u_u((p_23 <= 0xC3L), 0))))))))), g_20, g_18)), p_23, &g_18, l_36)));


    ;
    ;
    ;

    if ((safe_sub_func_int16_t_s_s(p_23, p_23)))
    {
        unsigned short l_481 = 5UL;
        const int **l_483 = &g_253;
        (*l_36) = (((-4L) <= p_23) == (safe_lshift_func_int8_t_s_u((*l_36), p_23)));
        l_481 = (0x86A3L != 65534UL);
        (*l_36) = (-10L);
        (*l_483) = (*g_422);
    }
    else
    {
        short l_489[7][1] = {{0x2CD0L},{1L},{1L},{0x2CD0L},{1L},{1L},{0x2CD0L}};
        int i, j;
        for (g_20 = 11; (g_20 >= (-11)); --g_20)
        {
            int **l_486 = &g_78;
            (*l_486) = l_476[0][0][4];

            ;
        }


        for (g_201 = (-1); (g_201 == 35); g_201 = safe_add_func_int32_t_s_s(g_201, 5))
        {
            l_489[4][0] = (*l_36);
            return p_23;
        }
    }


    return l_490[0];
}







static int func_26(unsigned short p_27)
{
    int l_407 = 1L;
    int *l_440[9] = {&l_407,&l_407,(void*)0,&l_407,&l_407,(void*)0,&l_407,&l_407,(void*)0};
    int *l_441 = &g_90;
    unsigned **l_463 = &g_460;
    int i;
    if (l_407)
    {
        unsigned short l_417 = 1UL;
        const int *l_421 = &g_344;
lbl_423:
        for (g_380 = 0; (g_380 <= 8); g_380 += 1)
        {
            int i;
            return g_270[g_380];
        }
        for (g_344 = 0; (g_344 < (-2)); g_344 = safe_sub_func_uint8_t_u_u(g_344, 9))
        {
            int *l_436 = &g_66;
            for (l_407 = 1; (l_407 >= 0); l_407 -= 1)
            {
                unsigned l_416 = 0x64C0B98CL;
                unsigned *l_418 = &g_270[2];
                l_416 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_27, (0xC55EL || (safe_mod_func_uint8_t_u_u(247UL, g_201))))), 0));
                (**g_164) = (((*l_418) = (g_380 > 4294967291UL)) || (safe_add_func_int16_t_s_s(0x029DL, (l_417 ^ (+l_417)))));
                for (g_206 = 0; (g_206 <= 1); g_206 += 1)
                {
                    int i, j, k;
                    (*g_422) = l_421;

                    ;
                }
                l_421 = l_418;

                ;
                for (g_129 = 0; (g_129 <= 1); g_129 += 1)
                {
                    unsigned char l_424 = 0UL;
                    int l_435[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_435[i] = 3L;
                    if (g_380)
                        goto lbl_423;
                    if (l_424)
                        break;
                    for (g_380 = 0; (g_380 <= 2); g_380 += 1)
                    {
                        unsigned l_431 = 2UL;
                        unsigned short *l_434 = &g_206;
                        int **l_437 = (void*)0;
                        int **l_438 = (void*)0;
                        int **l_439[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_439[i] = &g_78;
                        l_441 = (l_440[7] = func_37((0x77L ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(6UL, ((((((*l_434) = (safe_div_func_int32_t_s_s(l_431, (safe_mod_func_int32_t_s_s(0xA1556806L, p_27))))) && l_435[0]) ^ (&l_424 != &g_102[3][4][1])) || l_424) != l_416))), 0x91L))), l_436, l_431, (*l_436)));


                        ;
                        return p_27;
                    }
                }
            }
        }
    }
    else
    {
        short l_442 = 0x9918L;
        unsigned **l_464 = (void*)0;
        (***g_163) = 3L;
        l_442 = (-5L);
        (*g_123) = (safe_add_func_uint32_t_u_u(l_442, ((*l_441) = p_27)));
        for (l_407 = (-8); (l_407 >= 16); l_407++)
        {
            int *l_454 = &g_151[0][1][1];
            unsigned l_470 = 0x96D3643DL;
            for (g_20 = 3; (g_20 < (-20)); g_20--)
            {
                unsigned ***l_465 = &g_459[4];
                for (g_52 = 0; (g_52 >= (-24)); g_52--)
                {
                    unsigned *l_457 = &g_199;
                    unsigned **l_456 = &l_457;
                    unsigned ***l_455 = &l_456;
                    for (g_133 = (-13); (g_133 > 10); g_133 = safe_add_func_uint16_t_u_u(g_133, 8))
                    {
                        int *l_453 = &g_18;
                        l_454 = l_453;

                        ;
                        (**g_163) = (void*)0;

                        ;
                    }
                    (*g_458) = ((*l_455) = (void*)0);

                    ;
                    (*l_441) = (((void*)0 != g_461[0]) == (&l_454 == (void*)0));
                    if (p_27)
                        continue;
                }
                if ((!(l_463 != ((*l_465) = l_464))))
                {
                    int * const *l_471 = &g_326;
                    for (g_64 = 24; (g_64 != 17); g_64 = safe_sub_func_int16_t_s_s(g_64, 5))
                    {
                        int l_469 = 1L;
                        int *l_473 = &g_90;
                        (*g_468) = l_454;

                        ;
                        l_473 = func_37(l_469, (*g_339), p_27, (l_470 < ((((*l_454) != (0xE0L | ((l_471 == (*g_163)) != ((g_472[4] & 1L) <= l_469)))) < l_469) >= (*g_253))));


                        ;
                        (*l_441) = (-1L);
                    }
                }
                else
                {
                    (*g_474) = &l_407;

                    ;
                    if ((*g_253))
                        continue;
                }
            }

            ;
        }


        ;

    }


    ;
    ;

    return g_475;


}







static unsigned short func_28(int * p_29, char p_30, int * p_31, int * p_32)
{
    unsigned char *l_321 = &g_102[0][0][0];
    int *l_322[10][10] = {{&g_151[1][2][0],&g_151[1][0][1],(void*)0,&g_90,&g_90,&g_66,&g_151[1][0][1],(void*)0,&g_151[1][0][1],&g_151[1][2][0]},{&g_90,(void*)0,&g_151[1][0][1],&g_90,(void*)0,&g_20,&g_90,(void*)0,(void*)0,&g_90},{&g_90,&g_20,&g_151[1][0][1],&g_151[1][0][1],&g_151[1][2][0],&g_90,(void*)0,(void*)0,(void*)0,&g_90},{(void*)0,&g_20,(void*)0,&g_20,(void*)0,&g_66,&g_90,&g_66,&g_151[1][0][1],(void*)0},{(void*)0,(void*)0,&g_18,&g_151[1][0][1],(void*)0,&g_90,&g_151[1][0][1],(void*)0,&g_151[1][0][1],(void*)0},{&g_90,&g_151[1][0][1],(void*)0,&g_151[1][0][1],(void*)0,&g_20,(void*)0,&g_90,&g_151[1][0][1],&g_90},{&g_90,&g_90,(void*)0,&g_151[1][0][1],(void*)0,&g_66,&g_90,(void*)0,(void*)0,&g_18},{(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0},{&g_66,&g_20,(void*)0,&g_151[1][0][1],&g_18,&g_90,&g_90,(void*)0,&g_66,&g_66},{(void*)0,(void*)0,&g_90,&g_20,&g_18,&g_66,(void*)0,(void*)0,(void*)0,(void*)0}};
    unsigned short *l_345 = (void*)0;
    short l_405 = 0xD455L;
    char l_406 = (-1L);
    int i, j;
    if (((*p_32) = ((((*l_321) = ((*p_29) | (-1L))) && 0UL) ^ p_30)))
    {
        int **l_323 = (void*)0;
        int **l_324 = &g_78;
        (*g_325) = ((*l_324) = l_322[7][8]);

        ;
        ;
    }
    else
    {
        unsigned char l_331 = 0xC1L;
        int *l_361 = &g_18;
        if ((((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((l_331 || (g_20 != g_133)), ((l_331 <= ((*l_321) = g_151[1][0][1])) || g_206))) & p_30), p_30)) < 1L) == 0x7DL))
        {
            int *l_340[4] = {&g_90,&g_90,&g_90,&g_90};
            int l_349 = 0x2F020D75L;
            unsigned l_352 = 0x63DD0948L;
            unsigned char **l_353 = &l_321;
            char *l_363 = &g_21[0];
            char **l_362 = &l_363;
            int l_370 = (-1L);
            unsigned char ** const l_377 = &l_321;
            unsigned l_378 = 0x200067A7L;
            int i;
        }
        else
        {
            unsigned * const l_387 = &g_270[8];
            char *l_401[3][3];
            unsigned char l_402 = 0xB6L;
            int l_403 = 0xF53B5BA0L;
            int l_404 = 0xE664B730L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_401[i][j] = (void*)0;
            }
            for (g_52 = 22; (g_52 < 19); g_52 = safe_sub_func_uint32_t_u_u(g_52, 7))
            {
                short **l_385 = &g_54[4];
                int l_386 = (-1L);
                if ((*g_123))
                    break;
                (*p_32) = ((l_345 == ((*l_385) = l_345)) == l_386);
            }
            (*p_29) = ((*l_361) & p_30);
        }
    }


    ;
    return (*g_205);
}







static int * func_33(int * p_34, int * p_35)
{
    const int *l_251 = &g_90;
    int l_283 = (-10L);
    unsigned short *l_318 = &g_206;
    unsigned short **l_319[2][2][8] = {{{&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0},{&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0}},{{&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0},{&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0,&l_318,(void*)0}}};
    unsigned char *l_320 = &g_102[6][5][0];
    int i, j, k;
    for (g_129 = 8; (g_129 <= (-27)); g_129--)
    {
        const int **l_255 = &l_251;
        unsigned char l_258 = 0x6EL;
        unsigned l_294[3][6];
        int *l_315 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_294[i][j] = 4294967295UL;
        }
        (*l_255) = l_251;
        (*l_255) = func_42(((*p_35) ^ (safe_lshift_func_uint16_t_u_s((**l_255), (**l_255)))));

        ;
        for (g_52 = 6; (g_52 >= 0); g_52 -= 1)
        {
            unsigned l_261 = 1UL;
            char *l_267[1];
            const unsigned short * const l_280 = &g_206;
            int i;
            for (i = 0; i < 1; i++)
                l_267[i] = &g_133;
            if ((*p_35))
            {
                if (l_261)
                    break;
            }
            else
            {
                const int l_262[3][9] = {{0xE75CD830L,0x405192C4L,0xA43A0884L,0L,0xA43A0884L,0x405192C4L,0xE75CD830L,0x405192C4L,0xA43A0884L},{0x3820CEA3L,0xEB8A0FC8L,0xEB8A0FC8L,0x3820CEA3L,0xEB8A0FC8L,0xEB8A0FC8L,0x3820CEA3L,0xEB8A0FC8L,0xEB8A0FC8L},{0xE75CD830L,0x405192C4L,0xA43A0884L,0L,0xA43A0884L,0x405192C4L,0xE75CD830L,0x405192C4L,0xA43A0884L}};
                const int *l_263 = &g_20;
                int i, j;
                if ((l_262[2][1] || (**l_255)))
                {
                    unsigned l_264 = 18446744073709551615UL;
                    if ((+(*p_35)))
                    {
                        return p_35;


                    }
                    else
                    {
                        l_263 = (*l_255);

                        ;
                        (*p_35) = (l_264 < g_102[0][7][1]);
                    }

                    ;
                }
                else
                {
                    unsigned short *l_281 = &g_206;
                    for (g_201 = 0; (g_201 <= 4); g_201 += 1)
                    {
                        unsigned *l_268 = &g_199;
                        unsigned *l_269 = &g_270[8];
                        int i;
                        (*p_34) = ((safe_mod_func_uint32_t_u_u((l_267[0] != (void*)0), ((*l_268) = g_124[0]))) | ((*l_269) = 0x80997563L));
                        if ((*g_89))
                            continue;
                    }
                    if ((*p_35))
                        continue;
                    if (((-6L) != 0x7C760432L))
                    {
                        const int *l_271 = &g_90;
                        l_271 = (*l_255);

                        ;
                    }
                    else
                    {
                        unsigned *l_284 = &g_270[8];
                        int l_287 = 0xC57C3C31L;
                        int **l_301 = &g_78;
                        int **l_302 = &g_78;
                        int **l_303 = &g_78;
                        int **l_304 = &g_78;
                        int **l_305 = &g_78;
                        int **l_306 = &g_78;
                        int **l_307 = &g_78;
                        int **l_308 = (void*)0;
                        int **l_309 = &g_78;
                        int **l_310 = &g_78;
                        int **l_311 = &g_78;
                        int **l_312 = &g_78;
                        int **l_313 = &g_78;
                        int **l_314[8][8];
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_314[i][j] = &g_78;
                        }
                        (*g_123) = (*l_263);
                        (***g_163) = (safe_div_func_int32_t_s_s((*g_253), ((*l_284) = (65535UL ^ ((g_133 = (l_283 = (g_21[1] = (safe_lshift_func_uint8_t_u_u(8UL, ((0x654CL || l_261) | (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_199, (l_280 == (g_282[5][4][0] = l_281)))), (g_20 ^ (*l_263)))))))))) != 0UL)))));
                        (*p_34) = (safe_rshift_func_int8_t_s_u((((void*)0 == &g_102[3][4][1]) == ((l_287 < (l_283 = (~(**l_255)))) != (g_102[3][4][1] >= (g_133 = ((*l_251) & (((l_315 = func_42((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((((((l_294[0][5] <= (safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((0x35L && g_21[1]), 8)) < (*l_263)) | l_261), l_287)) || (*l_263)), 4))) <= l_287) >= (*l_251)) != 0x3727E377L) != 0xEFAE4A95L), (*p_35))), 4)), 4)))) != p_35) && l_261)))))), 0));

                        ;
                    }
                }

                ;
            }
            (*p_35) = ((*p_34) > (-1L));
        }

        ;
    }

    ;
    (*p_34) = (*p_35);
    l_283 = ((*p_35) = ((*l_251) ^ 0x4EFC569BL));
    return p_35;


}







static int * func_37(int p_38, int * p_39, const short p_40, unsigned p_41)
{
    unsigned short l_115[10] = {0x736FL,0x736FL,0xEAC5L,0xC6B2L,0xEAC5L,0x736FL,0x736FL,0xEAC5L,0xC6B2L,0xEAC5L};
    unsigned char *l_116 = (void*)0;
    int l_134 = 3L;
    unsigned short *l_208 = (void*)0;
    unsigned short **l_207 = &l_208;
    int *l_243 = &g_20;
    int **l_244 = (void*)0;
    int **l_245 = (void*)0;
    int *l_247 = &l_134;
    int *l_248 = &g_151[1][0][1];
    int i;
    for (g_66 = 1; (g_66 >= 0); g_66 -= 1)
    {
        unsigned char *l_127 = &g_102[5][0][1];
        unsigned short *l_193[9] = {&l_115[1],&l_115[1],&l_115[1],&l_115[1],&l_115[1],&l_115[1],&l_115[1],&l_115[1],&l_115[1]};
        int **l_222[10][10][2] = {{{&g_78,&g_78},{(void*)0,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}},{{&g_78,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0}},{{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{(void*)0,&g_78},{(void*)0,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}},{{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0}},{{&g_78,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}},{{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}},{{&g_78,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0},{&g_78,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0}},{{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78},{(void*)0,&g_78},{(void*)0,&g_78},{(void*)0,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0}},{{(void*)0,(void*)0},{&g_78,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}},{{&g_78,(void*)0},{(void*)0,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,&g_78},{&g_78,(void*)0},{(void*)0,(void*)0}}};
        int i, j, k;
    }
    (*g_246) = &l_134;

    ;
    return l_248;



}







static int * func_42(unsigned short p_43)
{
    unsigned l_95[10][10] = {{1UL,0x3AC07AC3L,0UL,0xE448D75FL,0x32C98C10L,6UL,0x26A28E28L,0x720AF826L,2UL,0x41B0B2ACL},{0xC30C3E41L,18446744073709551615UL,0x0C68D18EL,0xE448D75FL,2UL,0x4B5A03F7L,0x4B5A03F7L,2UL,0xE448D75FL,0x0C68D18EL},{0x720AF826L,0x720AF826L,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL,0x32C98C10L,18446744073709551615UL,18446744073709551607UL,0x964400D4L},{0x3AC07AC3L,18446744073709551615UL,0x26A28E28L,0xC30C3E41L,0x4B5A03F7L,18446744073709551607UL,0x32C98C10L,1UL,0x32C98C10L,18446744073709551607UL},{0x964400D4L,0x720AF826L,0xC30C3E41L,0x720AF826L,0x964400D4L,0x26A28E28L,0x4B5A03F7L,0x9A86F217L,18446744073709551615UL,18446744073709551615UL},{0x5AD8B3B4L,18446744073709551615UL,0xE448D75FL,0x3AC07AC3L,0xC30C3E41L,0UL,0x26A28E28L,0x0C68D18EL,18446744073709551615UL,18446744073709551615UL},{0x4B5A03F7L,0x3AC07AC3L,0x5AD8B3B4L,0x964400D4L,18446744073709551607UL,6UL,0xC30C3E41L,0x5AD8B3B4L,0x41B0B2ACL,0x720AF826L},{0x720AF826L,0x0C68D18EL,18446744073709551607UL,6UL,0x5AD8B3B4L,2UL,0x26A28E28L,0x9A86F217L,18446744073709551615UL,18446744073709551607UL},{0x964400D4L,2UL,18446744073709551607UL,0x5AD8B3B4L,18446744073709551615UL,0x9A86F217L,18446744073709551615UL,0x5AD8B3B4L,18446744073709551607UL,2UL},{0UL,0x4B5A03F7L,6UL,0x720AF826L,0x32C98C10L,18446744073709551607UL,0x0C68D18EL,2UL,0x3AC07AC3L,0x964400D4L}};
    unsigned char *l_101 = &g_102[3][4][1];
    int l_103 = (-3L);
    int *l_105 = &l_103;
    int *l_106 = &g_66;
    int i, j;
    (*l_105) = (l_95[2][0] | (p_43 < (safe_unary_minus_func_int16_t_s(l_103))));
    return l_106;


}







static char func_44(char p_45, short p_46)
{
    char l_57 = 0xC7L;
    int l_62 = 0xB2C3978DL;
    int *l_94 = &g_66;
lbl_93:
    for (p_46 = 1; (p_46 >= 0); p_46 -= 1)
    {
        for (p_45 = 1; (p_45 >= 0); p_45 -= 1)
        {
            int l_53 = 0L;
            short *l_60 = (void*)0;
            short *l_61 = &g_52;
            short *l_63 = &g_64;
            int i;
            l_53 = (~g_21[p_46]);
            if (g_21[0])
                break;
            (*g_65) = (((*l_63) = (l_62 = ((&p_46 == (g_54[1] = &g_52)) | (safe_rshift_func_uint8_t_u_u((((l_57 != ((g_20 == (safe_div_func_uint8_t_u_u((((*l_61) = g_52) || 1UL), p_45))) | (&g_18 == (void*)0))) != p_46) != l_53), g_20))))) >= 0UL);
        }
    }
    for (g_66 = 0; (g_66 < (-15)); --g_66)
    {
        unsigned l_73 = 0x5427E557L;
        int *l_86 = &l_62;
        for (g_52 = 20; (g_52 != (-13)); g_52--)
        {
            for (p_46 = 0; (p_46 >= 0); p_46++)
            {
                if (((p_46 || l_73) && (~(safe_div_func_int32_t_s_s(0x6007B4ADL, p_46)))))
                {
                    int *l_76 = (void*)0;
                    int **l_79 = &l_76;
                    l_62 = p_45;
                    (*l_79) = l_76;
                }
                else
                {
                    const short *l_82 = &g_52;
                    if ((*g_65))
                        break;
                    l_62 = (safe_rshift_func_int8_t_s_s((l_82 != &g_64), 4));
                }
                if ((*g_78))
                {
                    if ((0x1CL < l_73))
                    {
                        int *l_83 = &l_62;
                        int **l_85[4] = {&g_78,&g_78,&g_78,&g_78};
                        int i;
                        (*g_84) = l_83;

                        ;
                        l_86 = (*g_84);
                    }
                    else
                    {
                        int **l_87 = &l_86;
                        (*l_87) = l_86;
                    }
                }
                else
                {
                    int *l_88 = &l_62;
                    if (l_57)
                    {
                        return g_21[1];


                    }
                    else
                    {
                        int **l_92[10][6] = {{(void*)0,&g_78,&l_86,(void*)0,(void*)0,&l_86},{(void*)0,(void*)0,&l_86,&g_78,(void*)0,&l_86},{&g_78,(void*)0,&l_86,(void*)0,&g_78,&l_86},{(void*)0,&g_78,&l_86,(void*)0,(void*)0,&l_86},{(void*)0,(void*)0,&l_86,&g_78,(void*)0,&l_86},{&g_78,(void*)0,&l_86,(void*)0,&g_78,&l_86},{(void*)0,&g_78,&l_86,(void*)0,(void*)0,&l_86},{(void*)0,(void*)0,&l_86,&g_78,(void*)0,&l_86},{&g_78,(void*)0,&l_86,(void*)0,&g_78,&l_86},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int ***l_91 = &l_92[7][0];
                        int i, j;
                        l_88 = l_86;
                        (*g_89) = ((*l_88) = (**g_84));
                        (*l_91) = &l_86;
                    }
                }
                for (l_73 = 0; (l_73 <= 4); l_73 += 1)
                {
                    if (g_20)
                        goto lbl_93;
                }
                if (p_46)
                    goto lbl_93;
            }
            return p_46;


        }
        return g_21[1];


    }
    (*l_94) = (*g_89);
    return p_45;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_472[i], "g_472[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_662[i], "g_662[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1102[i], "g_1102[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
