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



static int g_3 = 0xAA32B1CEL;
static int *g_6 = (void*)0;
static int g_28 = 0xBB9CF7D1L;
static unsigned char g_65 = 0xE4L;
static unsigned g_66[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static char g_75 = 0xF8L;
static int g_81 = (-1L);
static unsigned g_88[6][6] = {{0x346DDCF8L,18446744073709551615UL,0x346DDCF8L,1UL,18446744073709551615UL,6UL},{0x346DDCF8L,1UL,1UL,1UL,1UL,0x346DDCF8L},{0x346DDCF8L,18446744073709551615UL,6UL,1UL,18446744073709551615UL,1UL},{0x346DDCF8L,18446744073709551615UL,0x346DDCF8L,1UL,18446744073709551615UL,6UL},{0x346DDCF8L,1UL,1UL,1UL,1UL,0x346DDCF8L},{0x346DDCF8L,18446744073709551615UL,6UL,1UL,18446744073709551615UL,1UL}};
static unsigned char g_93 = 0UL;
static unsigned short g_96 = 0UL;
static short g_109 = 0L;
static unsigned short *g_130 = &g_96;
static unsigned short **g_129 = &g_130;
static unsigned short g_155 = 0xC8F0L;
static unsigned short *g_222 = (void*)0;
static unsigned g_250 = 0x967FFD3EL;
static unsigned *g_368 = &g_250;
static unsigned **g_367 = &g_368;
static char *g_409[10] = {(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
static const int *g_466 = &g_81;
static unsigned g_503[7][7] = {{0x995AF2BFL,0x92998137L,0x42B6D261L,0x92998137L,0x995AF2BFL,18446744073709551615UL,18446744073709551615UL},{0x995AF2BFL,0x4B9FE7ABL,1UL,0x92998137L,0xDC669B84L,0x5DF1EF3BL,18446744073709551615UL},{0xDC669B84L,0x92998137L,1UL,0x4B9FE7ABL,0x995AF2BFL,0x5DF1EF3BL,0x5DF1EF3BL},{0x995AF2BFL,0x92998137L,0x42B6D261L,0x92998137L,0x995AF2BFL,18446744073709551615UL,18446744073709551615UL},{0x995AF2BFL,0x4B9FE7ABL,1UL,0x92998137L,0xDC669B84L,0x5DF1EF3BL,18446744073709551615UL},{0xDC669B84L,0x92998137L,1UL,0x4B9FE7ABL,0x995AF2BFL,0x5DF1EF3BL,0x5DF1EF3BL},{0x995AF2BFL,0x92998137L,0x42B6D261L,0x92998137L,0x995AF2BFL,18446744073709551615UL,18446744073709551615UL}};
static unsigned short ***g_509 = &g_129;
static unsigned short ****g_508 = &g_509;
static int ** const *g_520 = (void*)0;
static int *g_524 = &g_3;
static int **g_523 = &g_524;
static int ***g_522[9][7][4] = {{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}},{{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523},{&g_523,&g_523,&g_523,&g_523}}};
static char **g_566 = &g_409[9];
static int *g_631 = (void*)0;
static int g_705 = (-10L);
static unsigned short g_711[10] = {0UL,0x5468L,0x5468L,0UL,0x5468L,0x5468L,0UL,0x5468L,0x5468L,0UL};
static unsigned short g_712[6][8][2] = {{{0UL,0UL},{65529UL,65535UL},{65532UL,65535UL},{65529UL,0UL},{0UL,65529UL},{65535UL,65532UL},{65535UL,65529UL},{0UL,0UL}},{{65529UL,65535UL},{65532UL,65535UL},{65529UL,0UL},{0UL,65529UL},{65535UL,65532UL},{65535UL,65529UL},{0UL,0UL},{65529UL,65535UL}},{{65532UL,65535UL},{65529UL,0UL},{0UL,65529UL},{65535UL,65532UL},{65535UL,65529UL},{0UL,0UL},{65529UL,65535UL},{65532UL,65535UL}},{{65529UL,0UL},{0UL,65529UL},{65535UL,65532UL},{65535UL,65529UL},{0UL,0UL},{65529UL,65535UL},{65532UL,65532UL},{0x520DL,65535UL}},{{65535UL,0x520DL},{65532UL,0x37F6L},{65532UL,0x520DL},{65535UL,65535UL},{0x520DL,65532UL},{0x37F6L,65532UL},{0x520DL,65535UL},{65535UL,0x520DL}},{{65532UL,0x37F6L},{65532UL,0x520DL},{65535UL,65535UL},{0x520DL,65532UL},{0x37F6L,65532UL},{0x520DL,65535UL},{65535UL,0x520DL},{65532UL,0x37F6L}}};
static unsigned short g_713 = 65528UL;
static short g_743[1][6] = {{0xCBD9L,0xCBD9L,0xCBD9L,0xCBD9L,0xCBD9L,0xCBD9L}};
static char g_761 = 4L;
static unsigned char g_816 = 3UL;
static unsigned short * const * const **g_837 = (void*)0;
static int ****g_874 = &g_522[3][0][1];
static int **g_880 = &g_524;
static unsigned ***g_906 = &g_367;
static const unsigned short *g_999 = &g_711[1];
static const unsigned short **g_998 = &g_999;
static unsigned g_1031 = 0xEBE0EF2FL;
static const int ** const g_1046 = &g_466;
static unsigned char g_1055 = 0xC9L;
static short g_1078 = 6L;
static unsigned short *** const *g_1164 = &g_509;
static unsigned short *** const **g_1163 = &g_1164;
static unsigned *g_1187[2][5][5] = {{{&g_250,(void*)0,&g_250,&g_1031,&g_1031},{&g_1031,&g_66[2],&g_1031,&g_66[3],&g_66[3]},{&g_250,(void*)0,&g_250,&g_1031,&g_1031},{&g_1031,&g_66[2],&g_1031,&g_66[3],&g_66[3]},{&g_250,(void*)0,&g_250,&g_1031,&g_1031}},{{&g_1031,&g_66[2],&g_1031,&g_66[3],&g_66[3]},{&g_250,(void*)0,&g_250,&g_1031,&g_1031},{&g_1031,&g_66[2],&g_1031,&g_66[3],&g_66[3]},{&g_250,(void*)0,&g_250,&g_1031,&g_1031},{&g_1031,&g_66[2],&g_1031,&g_66[3],&g_66[3]}}};
static unsigned short ** const *g_1220 = &g_129;
static unsigned short ** const **g_1219 = &g_1220;
static unsigned short ** const ***g_1218 = &g_1219;



static unsigned short func_1(void);
static int * func_7(const int ** const p_8, unsigned short p_9, int * p_10, int p_11, int ** p_12);
static const int ** func_13(const char p_14);
static int ** func_20(char p_21, unsigned p_22);
static int func_29(int p_30);
static int func_34(int * p_35, int ** p_36, int ** p_37, short p_38, int ** p_39);
static int ** func_40(int ** p_41, int * p_42);
static int ** func_43(int * p_44);
static unsigned char func_49(unsigned short p_50, int * const p_51);
static const int * const func_67(int p_68, unsigned * p_69);
static unsigned short func_1(void)
{
    int * const l_2[6][9] = {{&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3,(void*)0,&g_3,(void*)0},{&g_3,(void*)0,(void*)0,&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3},{&g_3,(void*)0,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,(void*)0},{&g_3,&g_3,&g_3,&g_3,&g_3,(void*)0,(void*)0,&g_3,&g_3},{&g_3,&g_3,(void*)0,&g_3,(void*)0,&g_3,&g_3,(void*)0,&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,(void*)0,&g_3,(void*)0}};
    int *l_5 = &g_3;
    int **l_4[4][3] = {{&l_5,&l_5,&l_5},{&l_5,&l_5,&l_5},{&l_5,&l_5,&l_5},{(void*)0,&l_5,&l_5}};
    unsigned ***l_968 = &g_367;
    unsigned char l_982[7] = {0x9FL,255UL,255UL,0x9FL,255UL,255UL,0x9FL};
    unsigned char l_983 = 4UL;
    int *l_996 = &g_81;
    int l_1024 = (-8L);
    const int ** const l_1063[5] = {&g_466,&g_466,&g_466,&g_466,&g_466};
    unsigned l_1143 = 18446744073709551615UL;
    int **l_1170 = &l_996;
    unsigned short l_1195 = 9UL;
    unsigned short l_1198 = 0xF5D2L;
    unsigned l_1227 = 0x598CFE4BL;
    unsigned short *****l_1228 = (void*)0;
    int i, j;
    g_6 = l_2[4][1];

    ;
    if ((4294967287UL | (g_3 || 0x4F16L)))
    {
        unsigned l_954 = 0xB62C2E38L;
        int *l_955 = &g_81;
        unsigned l_966 = 4294967293UL;
        (*g_880) = func_7(func_13((g_3 == (safe_lshift_func_uint16_t_u_u(5UL, 14)))), (safe_lshift_func_uint16_t_u_u(l_954, l_954)), (l_955 = l_955), ((**g_367) > ((0xD2L == g_712[2][4][0]) >= l_954)), &l_5);




        return l_966;
    }
    else
    {
        short l_967[5];
        int i;
        for (i = 0; i < 5; i++)
            l_967[i] = 6L;
        l_967[0] = ((**g_880) = ((*g_566) == (*g_566)));
        (*g_880) = (void*)0;

        ;
    }

    ;
    (*g_880) = (void*)0;
    if ((*l_5))
    {
        unsigned ***l_969[7][5][7] = {{{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,(void*)0,(void*)0,(void*)0,&g_367,&g_367},{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367}},{{&g_367,(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,(void*)0,(void*)0},{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367,&g_367},{&g_367,&g_367,(void*)0,(void*)0,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,(void*)0}},{{&g_367,(void*)0,(void*)0,&g_367,&g_367,&g_367,&g_367},{(void*)0,&g_367,(void*)0,(void*)0,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367,(void*)0,(void*)0,&g_367},{&g_367,&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367},{&g_367,&g_367,(void*)0,&g_367,&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367,&g_367,(void*)0,(void*)0,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367,(void*)0},{&g_367,(void*)0,&g_367,(void*)0,(void*)0,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367}},{{&g_367,&g_367,(void*)0,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,(void*)0,&g_367,(void*)0,&g_367,(void*)0},{(void*)0,(void*)0,&g_367,&g_367,&g_367,&g_367,(void*)0},{(void*)0,&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367},{(void*)0,&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367}},{{&g_367,&g_367,&g_367,(void*)0,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,(void*)0,&g_367},{(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,(void*)0,&g_367},{&g_367,&g_367,(void*)0,&g_367,(void*)0,&g_367,&g_367}}};
        int l_970[7][9][4] = {{{0xA647A940L,9L,0xEA612049L,0L},{9L,0x14DE43E6L,1L,(-1L)},{(-4L),0L,0xB8B51D08L,5L},{1L,0x49504E76L,0x52406714L,0xFDB06788L},{0x59088E82L,0xB8B51D08L,(-1L),0x59088E82L},{(-4L),0xFDB06788L,5L,0x248AE00EL},{0L,0x33902328L,0xEA612049L,(-1L)},{0L,0x00A735D1L,0x248AE00EL,0x8ECC8862L},{(-1L),0x1A58E812L,(-1L),0x248AE00EL}},{{0x59088E82L,9L,0xF1C7E8C5L,1L},{0x6E20C0CEL,0xB8B51D08L,1L,9L},{(-1L),0x33902328L,1L,5L},{0x6E20C0CEL,0xA647A940L,0xF1C7E8C5L,0xC636F10AL},{0x59088E82L,0x14DE43E6L,(-1L),0xFDB06788L},{(-1L),0xFDB06788L,0x248AE00EL,1L},{0L,0L,0xEA612049L,0x8ECC8862L},{0xC636F10AL,(-1L),0x00A735D1L,0xA647A940L},{1L,1L,5L,0x00A735D1L}},{{0x1A58E812L,0L,(-9L),0xC636F10AL},{0x33902328L,1L,1L,0x33902328L},{1L,0xC636F10AL,(-4L),1L},{0x8ECC8862L,9L,0x0225C7A5L,0x6E20C0CEL},{1L,(-1L),5L,0x6E20C0CEL},{1L,9L,0x14DE43E6L,1L},{0x49504E76L,0xC636F10AL,0x63579307L,0x33902328L},{0x59088E82L,1L,0x00A735D1L,0xC636F10AL},{5L,0L,0x99AE6B1AL,0x00A735D1L}},{{1L,1L,0x63579307L,0xA647A940L},{0x33902328L,(-1L),0xBEF0AEC2L,0x8ECC8862L},{1L,0xC636F10AL,1L,0x14DE43E6L},{1L,(-1L),0x0225C7A5L,(-1L)},{(-1L),(-1L),0x99AE6B1AL,0x6E20C0CEL},{1L,1L,1L,0x00A735D1L},{0x49504E76L,0xFDB06788L,(-9L),0x8ECC8862L},{0x49504E76L,1L,1L,0x49504E76L},{1L,0x8ECC8862L,0x99AE6B1AL,1L}},{{(-1L),0L,0x0225C7A5L,0xA647A940L},{1L,(-1L),1L,0L},{1L,0xFDB06788L,0xBEF0AEC2L,1L},{0x33902328L,(-1L),0x63579307L,5L},{0x248AE00EL,0x52406714L,(-9L),1L},{1L,0x99AE6B1AL,0x628439AAL,0x628439AAL},{(-1L),(-1L),1L,0x14DE43E6L},{1L,1L,0x6937E253L,(-1L)},{0x63579307L,(-9L),1L,0x6937E253L}},{{0x248AE00EL,(-9L),0x33902328L,(-1L)},{(-9L),1L,0x9D54BB29L,0x14DE43E6L},{0x2F30FE99L,(-1L),0x52406714L,0x628439AAL},{1L,0x99AE6B1AL,0x8ECC8862L,1L},{5L,0x52406714L,1L,5L},{0x2F30FE99L,1L,0x628439AAL,0x31C453E2L},{(-1L),(-4L),0x33902328L,0x14DE43E6L},{(-1L),0xF1C7E8C5L,0x31C453E2L,0xBEF0AEC2L},{0x63579307L,0x00A735D1L,0x63579307L,0x31C453E2L}},{{5L,(-9L),1L,1L},{0xB8B51D08L,0x52406714L,0x9D54BB29L,(-9L)},{1L,(-4L),0x9D54BB29L,0x628439AAL},{0xB8B51D08L,0x248AE00EL,1L,1L},{5L,1L,0x63579307L,1L},{0x63579307L,1L,0x31C453E2L,0x6937E253L},{(-1L),(-1L),0x33902328L,(-9L)},{(-1L),1L,0x628439AAL,0xBEF0AEC2L},{0x2F30FE99L,0xB8B51D08L,1L,0x628439AAL}}};
        unsigned *l_971 = &g_503[0][0];
        int **l_972 = &g_524;
        int *l_979 = (void*)0;
        short *l_980 = &g_109;
        short *l_981 = &g_743[0][3];
        unsigned short **l_997 = &g_222;
        const unsigned short **l_1000 = &g_999;
        unsigned char l_1021 = 249UL;
        char l_1047 = 0L;
        unsigned l_1051 = 1UL;
        int *l_1087 = &g_3;
        unsigned short l_1098 = 0xDB57L;
        int l_1136 = 0x6832863AL;
        int l_1155[3][8][1] = {{{5L},{0xF78B3A0BL},{0xF78B3A0BL},{0xB86FC54FL},{0x26403195L},{0L},{0xC81755F6L},{0xC81755F6L}},{{0L},{0x26403195L},{0xB86FC54FL},{0xF78B3A0BL},{0xEAAE6474L},{0xF78B3A0BL},{0xB86FC54FL},{0x26403195L}},{{0L},{0xC81755F6L},{0xC81755F6L},{0L},{0x26403195L},{0xB86FC54FL},{0xF78B3A0BL},{0xEAAE6474L}}};
        const char l_1200 = 0L;
        int *l_1205 = &l_970[6][7][2];
        int i, j, k;
        (*l_5) = (l_968 != l_969[4][0][6]);
        if (((*l_5) = (l_983 = (l_970[6][7][2] ^ l_982[2]))))
        {
            unsigned short l_984 = 1UL;
            unsigned l_994 = 18446744073709551615UL;
            int * const l_1013 = &g_705;
            unsigned ****l_1040 = &l_969[1][1][3];
            int *l_1042 = &l_970[1][5][3];
            const int l_1044 = 0x335D431EL;
            const int ** const l_1049[9][3][9] = {{{&g_466,&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,(void*)0},{(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466}},{{&g_466,&g_466,(void*)0,&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466},{&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466}},{{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466,&g_466,(void*)0,&g_466},{(void*)0,&g_466,&g_466,&g_466,(void*)0,(void*)0,&g_466,&g_466,&g_466}},{{&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466,&g_466},{(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466}},{{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0}},{{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,(void*)0,&g_466,&g_466,(void*)0,&g_466,&g_466,&g_466,(void*)0}},{{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466}},{{&g_466,&g_466,&g_466,&g_466,(void*)0,(void*)0,&g_466,&g_466,&g_466},{&g_466,(void*)0,&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,(void*)0},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,(void*)0}},{{&g_466,(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466},{(void*)0,&g_466,&g_466,&g_466,&g_466,&g_466,(void*)0,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466,&g_466}}};
            short **l_1060 = (void*)0;
            short ***l_1059 = &l_1060;
            int i, j, k;
            if (l_984)
            {
                unsigned char l_987[9][8][3] = {{{251UL,251UL,0UL},{246UL,0x37L,0UL},{0x37L,246UL,0UL},{251UL,251UL,0UL},{246UL,0x37L,0UL},{0x37L,246UL,0UL},{251UL,251UL,0UL},{255UL,0xCBL,0x37L}},{{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L}},{{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L}},{{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L}},{{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,0x37L},{0x5AL,0x5AL,0x37L},{255UL,0xCBL,0x37L},{0xCBL,255UL,251UL},{255UL,255UL,251UL}},{{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL}},{{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL}},{{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL}},{{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,251UL},{0x5AL,0xCBL,251UL},{255UL,255UL,251UL},{0xCBL,0x5AL,0x5AL},{1UL,7UL,0x5AL}}};
                unsigned char *l_995 = &l_987[6][4][2];
                int i, j, k;
                l_987[8][6][2] = ((*l_5) = (safe_lshift_func_uint16_t_u_s(((***g_509) = (****g_508)), 1)));
                (*l_5) = ((safe_mod_func_int16_t_s_s(g_28, ((**g_129) = (safe_sub_func_uint8_t_u_u(l_984, l_984))))) > ((*l_995) = (safe_div_func_uint8_t_u_u(g_109, l_994))));
            }
            else
            {
                unsigned l_1011 = 0x3F829A8EL;
                int **l_1012 = &g_6;
                int * const l_1014 = &l_970[2][6][0];
                short ***l_1062 = &l_1060;
                short ****l_1061 = &l_1062;
                char ***l_1080 = &g_566;
                (*g_880) = l_996;

                ;
                if (((l_997 == (l_1000 = g_998)) | (safe_lshift_func_uint16_t_u_s(func_49((safe_sub_func_int8_t_s_s(((***g_906) >= (+(l_984 || (safe_sub_func_int8_t_s_s(5L, (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(l_1011, 5)) <= (func_49(l_984, l_1013) != (*l_1013))), 0x0A68L))))))), l_1011)), l_1014), g_88[0][5]))))
                {
                    for (l_983 = 1; (l_983 <= 4); l_983 += 1)
                    {
                        (*l_968) = (void*)0;

                        ;
                        if ((*l_1013))
                            continue;
                    }

                    ;
                }
                else
                {
                    for (g_96 = 0; (g_96 != 27); ++g_96)
                    {
                        return (**l_972);
                    }
                    (*g_523) = (void*)0;

                    ;
                }

                ;
                ;
                ;
                if (((safe_add_func_uint16_t_u_u(l_1024, g_816)) != g_96))
                {
                    (*g_6) = 0xC10B1ECCL;
                }
                else
                {
                    const short l_1041[3] = {0xA8E7L,0xA8E7L,0xA8E7L};
                    int **l_1052 = &g_524;
                    int l_1056 = 0x77E78AEBL;
                    int i;
                    (*l_1014) = 1L;
                    for (l_1011 = (-6); (l_1011 != 25); l_1011 = safe_add_func_int8_t_s_s(l_1011, 2))
                    {
                        const char l_1043 = 0L;
                        if ((*l_1013))
                            break;
                        if ((*g_6))
                            break;
                        l_1042 = func_7(&g_466, (safe_rshift_func_uint8_t_u_u(((g_1031 >= (((void*)0 == &l_1014) == (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*l_980) = (&l_968 == l_1040)) == (l_1041[1] < ((0x98L || (*l_1013)) ^ g_66[4]))), 7UL)), g_1031)) || (*l_1013)) && (*l_1013)), 4)))) | (*l_1014)), 0)), l_1042, g_93, &l_996);

                        ;
                        ;
                        if (l_1043)
                            break;
                    }



                    ;
                    if (l_1044)
                    {
                        short l_1045 = 0x409FL;
                        unsigned char *l_1048 = &l_982[2];
                        unsigned short *l_1050[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1050[i] = &g_155;
                        l_1045 = (*l_1013);
                        (*g_880) = (*g_880);
                        (*g_523) = (*l_1012);

                        ;
                    }
                    else
                    {
                        l_1056 = (((*g_368) = 1UL) != (safe_add_func_int32_t_s_s(g_1055, (g_88[1][4] < 0x1DL))));
                    }

                    ;
                }



                ;
                ;
                if ((safe_rshift_func_uint8_t_u_s(func_49((l_1059 == ((*l_1061) = (void*)0)), (*g_523)), (*l_1042))))
                {
                    unsigned l_1066 = 0x584750BAL;
                    unsigned short *l_1067 = &g_712[2][4][0];
                    int l_1068 = 1L;
                    if (((*g_6) = l_1068))
                    {
                        (*g_880) = (void*)0;

                        ;
lbl_1069:
                        (*g_1046) = (*g_1046);
                        (*l_972) = &l_1068;

                        ;
                        if (g_1031)
                            goto lbl_1069;
                    }
                    else
                    {
                        (*l_1012) = (void*)0;

                        ;
                        (*g_1046) = (*g_1046);
                    }

                    ;
                    ;
                }
                else
                {
                    int *l_1070 = &l_970[6][7][2];
                    int *l_1071 = &g_28;
                    l_1071 = ((*g_880) = l_1070);

                    ;
                    ;
                    for (l_994 = 0; (l_994 <= 26); l_994 = safe_add_func_int32_t_s_s(l_994, 1))
                    {
                        const char ***l_1079[5];
                        char ****l_1081 = &l_1080;
                        char ***l_1083 = &g_566;
                        char ****l_1082 = &l_1083;
                        int l_1086 = 0xA7E134C7L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1079[i] = (void*)0;
                        (*g_1046) = (void*)0;

                        ;
                        (*l_972) = (*g_523);
                    }

                    ;
                    l_1087 = (*g_880);

                    ;
                    (*g_880) = l_1070;
                }

                ;
                ;

                ;
                ;
            }



            ;
            ;

            ;
            ;
        }
        else
        {
            unsigned char l_1099[5];
            unsigned *l_1124 = &g_1031;
            unsigned ** const l_1123 = &l_1124;
            unsigned ** const *l_1122[3][2] = {{(void*)0,(void*)0},{&l_1123,(void*)0},{(void*)0,&l_1123}};
            int **l_1134 = &g_631;
            const int ** const l_1144 = &g_466;
            unsigned char l_1222 = 0UL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1099[i] = 0x78L;
            for (g_816 = (-29); (g_816 <= 43); g_816 = safe_add_func_int32_t_s_s(g_816, 8))
            {
                unsigned short l_1092 = 0x512EL;
                int l_1095[2][8][6] = {{{1L,4L,0L,0x9C81A88CL,0x2317AA43L,1L},{(-1L),(-4L),0L,(-4L),(-1L),0x05E36DD1L},{0x1D8823F8L,5L,1L,0x18961DB7L,4L,0x132A2E04L},{0x18961DB7L,4L,0x132A2E04L,5L,(-4L),0x132A2E04L},{(-1L),1L,1L,(-1L),5L,0x05E36DD1L},{(-4L),6L,0L,0x755D8778L,4L,1L},{1L,1L,0L,5L,1L,0x05E36DD1L},{0xBA451E57L,(-4L),1L,0x1D8823F8L,6L,0x132A2E04L}},{{0x1D8823F8L,6L,0x132A2E04L,1L,1L,0x132A2E04L},{1L,1L,1L,0x9C81A88CL,(-4L),0x05E36DD1L},{5L,0x2317AA43L,0L,(-1L),6L,1L},{1L,5L,0L,1L,1L,0x05E36DD1L},{0x18961DB7L,1L,1L,0xBA451E57L,0x2317AA43L,0x132A2E04L},{0xBA451E57L,0x2317AA43L,0x132A2E04L,(-4L),0x755D8778L,0xB4043586L},{0xBA451E57L,0x18961DB7L,(-1L),1L,(-1L),1L},{(-1L),(-4L),0x184C0CA5L,1L,5L,(-1L)}}};
                unsigned short *l_1100[4] = {&g_712[1][0][1],&g_712[1][0][1],&g_712[1][0][1],&g_712[1][0][1]};
                int **l_1107 = &g_6;
                int i, j, k;
                (*l_996) = ((((safe_sub_func_int8_t_s_s(l_1092, ((safe_add_func_uint32_t_u_u((l_1095[1][0][0] = ((**g_367) = (**g_367))), ((*l_1087) || func_49(((*l_5) = ((((*l_980) = ((((****g_508) = 0x735BL) >= (*g_999)) && (**g_129))) >= ((*l_981) = (safe_sub_func_uint8_t_u_u(((l_1092 <= 1UL) && (l_1098 > 255UL)), l_1099[3])))) != l_1092)), (*g_880))))) <= (**g_998)))) > 0x083CL) == 255UL) >= g_1055);
                (*l_1087) = ((+(safe_sub_func_uint8_t_u_u(g_1031, 7L))) ^ ((safe_mod_func_uint16_t_u_u((*g_999), ((l_1095[1][0][0] <= ((*l_5) <= ((safe_sub_func_uint16_t_u_u((**g_129), func_49((*g_130), ((*l_1107) = &l_1095[1][0][0])))) <= 0UL))) | l_1095[0][2][5]))) || (**l_1107)));

                ;
            }
            if ((*g_466))
            {
                char l_1108[4];
                int l_1110 = 0xD3C4A02DL;
                const unsigned *l_1115 = &g_66[5];
                const unsigned **l_1114 = &l_1115;
                const unsigned ***l_1113[2];
                int l_1125 = 9L;
                int *l_1157 = (void*)0;
                unsigned short *****l_1166 = &g_508;
                char l_1167 = 0xEBL;
                short l_1183 = 0x1467L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1108[i] = 3L;
                for (i = 0; i < 2; i++)
                    l_1113[i] = &l_1114;
                l_1108[2] = ((*l_996) = (**g_1046));
                if (l_1108[2])
                {
                    char l_1109[6][4][1] = {{{0L},{0x23L},{0L},{8L}},{{0x78L},{8L},{0L},{0x23L}},{{0L},{8L},{0x78L},{8L}},{{0L},{0x23L},{0L},{8L}},{{0x78L},{8L},{0L},{0x23L}},{{0L},{8L},{0x78L},{8L}}};
                    int ***l_1111 = (void*)0;
                    int ***l_1112 = &g_523;
                    unsigned *l_1119[9][8][3] = {{{&g_250,&g_66[7],(void*)0},{&g_66[4],&g_1031,&g_66[4]},{&g_1031,&g_66[7],(void*)0},{&g_1031,&g_1031,&g_1031},{&g_250,&g_66[7],&g_66[5]},{&g_250,&g_1031,&g_66[3]},{&g_250,&g_66[7],(void*)0},{&g_66[4],&g_1031,&g_66[4]}},{{&g_1031,&g_66[7],(void*)0},{&g_1031,&g_1031,&g_1031},{&g_250,&g_66[7],&g_66[5]},{&g_250,&g_1031,&g_66[3]},{&g_250,&g_66[7],(void*)0},{&g_66[4],&g_1031,&g_66[4]},{&g_1031,&g_66[7],(void*)0},{&g_1031,&g_1031,&g_1031}},{{&g_250,&g_66[7],&g_66[5]},{&g_250,&g_1031,&g_250},{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_66[6]},{(void*)0,(void*)0,&g_250},{&g_66[3],&g_66[7],&g_66[7]},{&g_66[5],(void*)0,&g_66[3]},{&g_1031,&g_66[7],&g_250}},{{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_66[6]},{(void*)0,(void*)0,&g_250},{&g_66[3],&g_66[7],&g_66[7]},{&g_66[5],(void*)0,&g_66[3]},{&g_1031,&g_66[7],&g_250},{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_66[6]}},{{(void*)0,(void*)0,&g_250},{&g_66[3],&g_66[7],&g_66[7]},{&g_66[5],(void*)0,&g_66[3]},{&g_1031,&g_66[7],&g_250},{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_66[6]},{(void*)0,(void*)0,&g_250},{&g_66[3],&g_66[7],&g_66[7]}},{{&g_66[5],(void*)0,&g_66[3]},{&g_1031,&g_66[7],&g_250},{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_66[6]},{(void*)0,(void*)0,&g_250},{&g_66[3],&g_66[7],&g_66[7]},{&g_66[5],(void*)0,&g_66[3]},{&g_1031,&g_66[7],&g_250}},{{(void*)0,(void*)0,&g_250},{&g_66[4],&g_66[7],&g_250},{&g_66[5],&g_1031,&g_250},{&g_1031,&g_66[6],&g_66[6]},{(void*)0,&g_1031,&g_250},{&g_66[4],&g_66[6],&g_66[7]},{(void*)0,&g_1031,&g_66[3]},{&g_66[3],&g_66[6],&g_250}},{{&g_66[5],&g_1031,&g_250},{&g_1031,&g_66[6],&g_66[6]},{(void*)0,&g_1031,&g_250},{&g_66[4],&g_66[6],&g_66[7]},{(void*)0,&g_1031,&g_66[3]},{&g_66[3],&g_66[6],&g_250},{&g_66[5],&g_1031,&g_250},{&g_1031,&g_66[6],&g_66[6]}},{{(void*)0,&g_1031,&g_250},{&g_66[4],&g_66[6],&g_66[7]},{(void*)0,&g_1031,&g_66[3]},{&g_66[3],&g_66[6],&g_250},{&g_66[5],&g_1031,&g_250},{&g_1031,&g_66[6],&g_66[6]},{(void*)0,&g_1031,&g_250},{&g_66[4],&g_66[6],&g_66[7]}}};
                    unsigned *l_1120 = &g_66[2];
                    unsigned *l_1121 = &g_250;
                    unsigned ** const l_1118[8] = {&l_1121,&l_1120,&l_1120,&l_1121,&l_1120,&l_1120,&l_1121,&l_1120};
                    unsigned ** const *l_1117 = &l_1118[2];
                    unsigned ** const **l_1116[9] = {&l_1117,&l_1117,&l_1117,&l_1117,&l_1117,&l_1117,&l_1117,&l_1117,&l_1117};
                    int i, j, k;
                    if ((l_1109[4][1][0] ^ (((l_1110 & l_1125) > (*g_466)) <= g_81)))
                    {
                        int l_1126 = (-7L);
                        (*l_5) = (*g_466);
                        (*g_880) = &l_1125;

                        ;
                        (*g_524) = (l_1099[3] | l_1126);
                    }
                    else
                    {
                        unsigned short l_1127[7] = {0x210DL,0x210DL,0x87A4L,0x210DL,0x210DL,0x87A4L,0x210DL};
                        int i;
                        (*g_523) = (**l_1112);
                        (*g_1046) = ((**l_1112) = func_7(&g_466, l_1127[3], l_1124, ((0x71L && (safe_rshift_func_uint16_t_u_s((*g_130), ((*l_981) = (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((**g_1046), 0xA342F252L)), ((((*l_1087) == (*g_466)) && g_743[0][3]) && 8L))))))) && 0xBDL), l_1134));



                        ;
                    }



                    ;
                    ;
                }
                else
                {
                    unsigned l_1135[4][9] = {{4294967295UL,4294967295UL,0x06D00C2CL,0x804782BEL,4294967295UL,4294967289UL,4294967289UL,4294967295UL,0x9547A439L},{4294967295UL,0x0A16DAD0L,4294967295UL,1UL,1UL,4294967295UL,0x0A16DAD0L,4294967295UL,1UL},{0x06D00C2CL,4294967295UL,4294967295UL,0x06D00C2CL,0x804782BEL,0x06D00C2CL,4294967295UL,4294967295UL,0x06D00C2CL},{0x09FD8C06L,1UL,0x4EC37133L,1UL,0x09FD8C06L,0x09FD8C06L,1UL,0x4EC37133L,1UL}};
                    int i, j;
                    if (l_1135[2][1])
                    {
                        (*l_996) = l_1125;
                        (*g_523) = (*g_523);
                        l_1136 = (*l_1087);
                    }
                    else
                    {
                        (*l_1087) = 0xE68B0DECL;
                    }
                }



                ;
                ;
                if (((*l_5) = l_1108[2]))
                {
                    int l_1141 = 8L;
                    unsigned short *l_1142[7][5] = {{&g_711[3],&g_711[9],&g_711[3],&g_711[9],&g_711[3]},{&g_155,&g_155,&l_1098,&l_1098,&g_155},{&l_1098,&g_711[9],&l_1098,&g_711[9],&l_1098},{&g_155,&l_1098,&l_1098,&g_155,&g_155},{&g_711[3],&g_711[9],&g_711[3],&g_711[9],&g_711[3]},{&g_155,&g_155,&l_1098,&l_1098,&g_155},{&l_1098,&g_711[9],&l_1098,&g_711[9],&l_1098}};
                    unsigned short l_1156 = 0x1F63L;
                    int **l_1158[8][10][3] = {{{&l_996,&l_996,(void*)0},{(void*)0,(void*)0,&l_1157},{(void*)0,&l_996,&l_1157},{&l_1087,&l_1087,&l_5},{&l_979,&l_996,&l_1157},{(void*)0,&l_996,&l_5},{&l_5,&l_5,&l_996},{(void*)0,(void*)0,&g_524},{&l_1087,(void*)0,(void*)0},{&l_1087,(void*)0,&l_979}},{{&l_5,(void*)0,(void*)0},{&l_979,&l_1087,&g_6},{&l_996,&l_996,(void*)0},{&l_1087,&g_524,(void*)0},{&g_6,&l_996,&l_1157},{(void*)0,&l_1157,&l_1157},{&g_524,&g_6,&l_1157},{&g_6,&l_1087,(void*)0},{&l_996,(void*)0,(void*)0},{&l_5,&l_979,&g_6}},{{&l_5,&l_979,(void*)0},{&l_979,&l_1157,&l_979},{&l_1157,&g_6,(void*)0},{&l_5,&l_1157,&l_1087},{&l_996,&g_631,(void*)0},{&l_996,&g_524,&l_979},{&l_996,&l_5,&l_996},{(void*)0,(void*)0,&l_979},{&l_5,&l_5,&l_1157},{&l_1157,&g_524,&g_524}},{{&l_996,&l_1157,&g_6},{&l_1157,(void*)0,&l_996},{&l_5,&l_996,&l_1157},{(void*)0,&g_6,&l_1087},{&l_996,&g_631,&g_6},{&l_996,&g_524,&l_1087},{&l_996,&l_5,&l_996},{&l_5,&l_1087,&l_5},{&l_1157,&g_524,&g_6},{&l_979,&g_524,&g_524}},{{&l_5,&l_5,&l_5},{&l_5,&l_979,&l_979},{&l_5,&g_6,&l_1157},{&l_979,&l_1087,&l_1157},{&l_996,(void*)0,&l_5},{(void*)0,&l_1087,(void*)0},{&g_524,&g_6,&g_6},{&g_631,&l_979,&g_6},{&g_6,&l_996,&g_6},{(void*)0,&l_1157,&l_1157}},{{&l_1157,&l_996,&g_631},{(void*)0,(void*)0,&l_1087},{&l_1087,&g_6,&l_996},{&l_1157,&l_996,&g_524},{&l_996,&g_631,&l_1157},{&l_996,&l_996,&l_979},{(void*)0,&g_631,&l_979},{&g_6,(void*)0,&l_1157},{&l_5,&l_5,&l_996},{&g_6,&g_6,&l_1157}},{{&l_1157,&l_996,&l_979},{&l_1157,&l_1157,&l_979},{&g_6,&l_1087,&l_1157},{&g_524,&l_1087,&g_524},{&g_6,&l_996,&l_996},{(void*)0,&g_524,&l_1087},{&l_979,&g_6,&g_631},{&l_5,&l_996,&l_1157},{&g_524,&l_5,&g_6},{&g_6,(void*)0,&g_6}},{{&g_6,(void*)0,&g_6},{&g_524,(void*)0,(void*)0},{&l_996,&g_524,&l_5},{&g_524,&g_6,&l_1087},{&l_5,&l_5,&l_1157},{&l_1087,&l_5,&g_6},{&l_1157,(void*)0,&l_1087},{(void*)0,&g_524,&l_1157},{&l_996,&l_5,&g_524},{&l_979,&l_1157,&l_979}}};
                    int **l_1159[6][8] = {{&g_524,&g_524,&l_5,&g_524,&g_524,&l_5,&g_524,&g_524},{(void*)0,&g_524,(void*)0,(void*)0,&g_524,(void*)0,(void*)0,&g_524},{&g_524,(void*)0,(void*)0,&g_524,(void*)0,(void*)0,&g_524,(void*)0},{&g_524,&g_524,&l_5,&g_524,&g_524,&l_5,&g_524,&g_524},{(void*)0,&g_524,(void*)0,(void*)0,&g_524,(void*)0,(void*)0,&g_524},{&g_524,(void*)0,(void*)0,&g_524,(void*)0,(void*)0,&g_524,(void*)0}};
                    int **l_1160 = (void*)0;
                    int **l_1161 = (void*)0;
                    int **l_1162 = &l_996;
                    const unsigned char *l_1194[3][9] = {{&g_93,&g_65,&l_983,(void*)0,(void*)0,&l_1021,&g_93,&l_1021,(void*)0},{&g_816,&g_93,&g_93,&g_816,&l_1099[0],&g_65,&l_1099[3],(void*)0,&l_983},{&g_93,(void*)0,&g_93,&l_982[1],&l_982[1],&g_93,(void*)0,&g_93,&l_1099[0]}};
                    int i, j, k;
                    if ((safe_lshift_func_uint8_t_u_s(0x31L, ((safe_sub_func_uint16_t_u_u((g_96 = (l_1125 = (g_712[2][4][0] = l_1141))), l_1143)) > func_49((*g_999), ((*l_1162) = (*l_972)))))))
                    {
                        unsigned short *** const ***l_1165 = &g_1163;
                        int l_1171 = 0x0BB85FA6L;
                        (*l_5) = (((*l_1165) = g_1163) != l_1166);
                        (*l_1087) = (+l_1171);
                        (*g_6) = (safe_unary_minus_func_int8_t_s(l_1108[2]));
                    }
                    else
                    {
                        char *l_1175 = &g_761;
                        int l_1178 = 0xB4CAC888L;
                        (*l_5) = (safe_add_func_int8_t_s_s((((*l_1087) ^ g_250) <= ((*l_1175) = 0x4DL)), (g_66[5] | (safe_mod_func_int32_t_s_s(l_1178, (*g_368))))));
                        (*l_1144) = (*g_1046);
                        l_1178 = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*l_1087), 0)), g_712[3][4][0]));
                        (*g_6) = l_1183;
                    }

                    ;
                    ;
                    for (g_816 = (-13); (g_816 >= 55); g_816 = safe_add_func_uint8_t_u_u(g_816, 6))
                    {
                        int l_1186[4][7] = {{0x8CE3D79AL,(-7L),0x10FDF652L,0x10FDF652L,(-7L),0x8CE3D79AL,(-7L)},{0L,0x8CE3D79AL,0x8CE3D79AL,0L,(-7L),0L,0x8CE3D79AL},{(-1L),(-1L),0x8CE3D79AL,0x10FDF652L,0x8CE3D79AL,(-1L),(-1L)},{(-1L),0x8CE3D79AL,0x10FDF652L,0x8CE3D79AL,(-1L),(-1L),0x8CE3D79AL}};
                        unsigned char *l_1196 = (void*)0;
                        unsigned char *l_1197 = &l_1099[3];
                        int *l_1199[1][7];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1199[i][j] = &l_1141;
                        }
                        (*l_972) = (*g_523);
                        (*g_6) = 8L;
                        (*l_1162) = (*g_880);
                    }
                    (*l_1162) = &l_1125;

                    ;
                }
                else
                {
                    const int ** const l_1201 = &g_466;
                    if (l_1200)
                    {
                        const int *l_1202 = &l_970[1][1][0];
                        (*l_1201) = l_1202;

                        ;
                    }
                    else
                    {
                        char l_1203 = 0L;
                        (*l_1170) = &l_1125;

                        ;
                        return l_1203;


                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                int *l_1204 = &l_1155[1][0][0];
                unsigned char l_1213 = 1UL;
                (*g_523) = (void*)0;
                for (g_81 = 0; (g_81 <= 1); g_81 += 1)
                {
                    int * const l_1212[8][10] = {{&l_1155[0][2][0],&l_1024,&g_81,&g_705,&g_81,&l_1024,&l_1155[0][2][0],&l_1155[0][2][0],&l_1024,&g_81},{&l_1024,&l_1155[0][2][0],&l_1155[0][2][0],&l_1024,&g_81,&g_705,&g_81,&l_1024,&l_1155[0][2][0],&l_1155[0][2][0]},{&g_81,&l_1155[0][2][0],(void*)0,(void*)0,(void*)0,(void*)0,&l_1155[0][2][0],&g_81,&l_1155[0][2][0],(void*)0},{&g_705,&l_1024,(void*)0,&l_1024,&g_705,(void*)0,(void*)0,&g_705,&l_1024,(void*)0},{&g_81,&g_81,(void*)0,&g_705,&g_81,&g_705,(void*)0,&g_81,&g_81,(void*)0},{&l_1024,&g_705,(void*)0,(void*)0,&g_705,&l_1024,(void*)0,&l_1024,&g_705,(void*)0},{&l_1155[0][2][0],&g_81,&l_1155[0][2][0],(void*)0,(void*)0,(void*)0,(void*)0,&l_1024,(void*)0,&l_1024},{&l_1024,&g_81,(void*)0,&l_1155[0][2][0],(void*)0,&g_81,&l_1024,&l_1024,&g_81,(void*)0}};
                    unsigned short ** const ****l_1221 = &g_1218;
                    int i, j;
                    l_1205 = l_1204;

                    ;
                    (*l_1134) = ((*g_523) = (void*)0);

                    ;
                    for (g_1031 = 0; (g_1031 <= 1); g_1031 += 1)
                    {
                        (*l_1144) = (*g_523);

                        ;
                    }
                    if ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((*l_981) = ((((***g_509) = func_49((g_711[(g_81 + 3)] = (**g_129)), l_1212[0][9])) | (l_1213 > (+(((*l_1205) = (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((*l_1221) = g_1218) == (void*)0) <= (*l_996)), ((void*)0 == &g_508))) || g_250), (*l_1204)))) ^ 0x908EL)))) <= (*l_1087))), l_1213)), 1UL)))
                    {
                        (*l_972) = (void*)0;
                        (*g_880) = l_1204;

                        ;
                        (*l_1170) = (*g_523);

                        ;
                        (*l_5) = (-3L);
                    }
                    else
                    {
                        (*l_1144) = (*l_1144);
                    }

                    ;
                    ;
                    for (l_1136 = 0; (l_1136 <= 3); l_1136 += 1)
                    {
                        (*l_972) = (*l_972);
                        if ((*l_1204))
                            continue;
                        if ((*g_6))
                            break;
                    }
                }

                ;
                ;
                ;
                ;
                (*l_1144) = (*l_1134);

                ;
                (*g_880) = (*l_972);
            }



            ;


            ;
            for (l_1143 = 28; (l_1143 != 33); l_1143 = safe_add_func_uint16_t_u_u(l_1143, 6))
            {
                for (g_96 = 21; (g_96 == 44); g_96 = safe_add_func_uint32_t_u_u(g_96, 2))
                {
                    return (*g_999);



                }
                (*l_5) = l_1227;
                return (*l_5);



            }
            return (*g_999);



        }



        ;
        ;

        ;
    }
    else
    {
        char l_1229 = 0x26L;
        l_1229 = ((void*)0 == l_1228);
    }



    ;
    ;

    return (**l_1170);
}







static int * func_7(const int ** const p_8, unsigned short p_9, int * p_10, int p_11, int ** p_12)
{
    int *l_965 = &g_81;
    for (g_3 = 0; (g_3 <= 19); ++g_3)
    {
        unsigned short **l_962 = &g_222;
        unsigned char *l_963 = &g_65;
        int l_964 = 0x21E5A844L;
        (*p_10) = 0x93A7507CL;
        (*p_10) = (safe_mod_func_int32_t_s_s((**p_8), (safe_rshift_func_int8_t_s_u((((*l_963) = (((*l_962) = ((*g_129) = &p_9)) != &p_9)) == (l_964 > 0x01F9L)), 1))));

        ;
        ;
    }



    (*g_880) = l_965;

    ;
    return (*p_12);




}







static const int ** func_13(const char p_14)
{
    const unsigned short l_17 = 6UL;
    char *l_887[5] = {&g_75,&g_75,&g_75,&g_75,&g_75};
    unsigned l_908 = 1UL;
    int * const l_928[6] = {&g_705,&g_705,&g_705,&g_705,&g_705,&g_705};
    unsigned char l_929 = 255UL;
    int *l_949 = &g_705;
    const int **l_951 = &g_466;
    int i;
    if (l_17)
    {
        for (g_3 = 0; (g_3 <= 22); ++g_3)
        {
            int ***l_881 = &g_880;
        }
    }
    else
    {
        int * const l_882 = (void*)0;
        int **l_883[8][10][1] = {{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}},{{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524},{(void*)0},{&g_524}}};
        int **l_884 = &g_524;
        int i, j, k;
lbl_915:
        (*l_884) = l_882;

        ;
        for (g_28 = 0; (g_28 == 11); g_28 = safe_add_func_int8_t_s_s(g_28, 1))
        {
            char **l_888 = (void*)0;
            char **l_889 = (void*)0;
            char *l_890 = &g_761;
            int l_901 = 0x6A389D2AL;
            unsigned ***l_905[3];
            int *l_948 = &g_81;
            int i;
            for (i = 0; i < 3; i++)
                l_905[i] = (void*)0;
            if ((((*g_566) = l_887[0]) == (l_890 = l_887[0])))
            {
                unsigned l_904 = 18446744073709551607UL;
                int * const l_907 = (void*)0;
                unsigned char *l_909 = (void*)0;
                unsigned char *l_910 = &g_65;
                int l_914[4] = {(-3L),(-3L),(-3L),(-3L)};
                const int **l_918 = &g_466;
                unsigned short * const *l_936 = &g_222;
                unsigned short * const **l_935 = &l_936;
                unsigned short * const ***l_934 = &l_935;
                int i;
                if ((((*l_910) = ((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*g_130) = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_901 && (l_901 || (safe_add_func_uint16_t_u_u((****g_508), ((l_904 || (l_905[1] == (g_906 = &g_367))) < func_49((***g_509), l_907)))))), l_908)) | p_14), p_14)) != (-10L))), l_908)), l_901)), l_908)) < p_14)) > 0xDDL))
                {
                    int *l_917[4] = {&l_914[2],&l_914[2],&l_914[2],&l_914[2]};
                    short *l_937[7] = {&g_743[0][3],&g_743[0][3],&g_743[0][3],&g_743[0][3],&g_743[0][3],&g_743[0][3],&g_743[0][3]};
                    int i;
                    for (g_93 = 0; (g_93 > 20); g_93 = safe_add_func_int16_t_s_s(g_93, 2))
                    {
                        unsigned l_913[10];
                        int *l_916[8] = {&l_901,&g_3,&g_3,&l_901,&g_3,&g_3,&l_901,&g_3};
                        int i;
                        for (i = 0; i < 10; i++)
                            l_913[i] = 4294967295UL;
                        l_914[1] = l_913[0];
                        if (l_908)
                            goto lbl_915;
                        l_917[0] = l_916[7];


                        return l_918;


                    }
                    for (g_65 = 26; (g_65 > 5); g_65 = safe_sub_func_uint16_t_u_u(g_65, 5))
                    {
                        unsigned short l_927 = 1UL;
                        l_901 = (0xAC87681BL | ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(((func_49(l_927, l_928[2]) || g_816) & (*g_466)), 14)), (+(l_901 < l_929)))) <= l_901));

                        ;
                    }
                    l_914[3] = (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s((g_109 = (func_49(p_14, l_917[1]) >= ((void*)0 == l_934))), (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0xA8L, (**l_918))), (**g_129))))), ((p_14 || g_713) || (**l_918))));

                    ;
                }
                else
                {
                    const int **l_947 = &g_466;
                    for (g_155 = 0; (g_155 < 44); g_155 = safe_add_func_int32_t_s_s(g_155, 2))
                    {
                        int *l_944[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_944[i] = &g_81;
                        (*l_884) = (void*)0;

                        ;
                        (*g_880) = &l_901;

                        ;
                        (*l_918) = ((*g_523) = l_944[0]);

                        ;
                    }

                    ;
                    for (g_75 = 14; (g_75 <= 10); g_75--)
                    {
                        return l_947;


                    }
                }

                ;
                l_948 = &l_901;

                ;
                for (g_65 = 3; (g_65 <= 8); g_65 += 1)
                {
                    l_949 = (void*)0;

                    ;
                    for (g_705 = 0; (g_705 <= 9); g_705 += 1)
                    {
                        int i;
                        (*g_523) = (*g_880);
                        if (g_66[g_65])
                            continue;
                    }
                    for (l_904 = 1; (l_904 <= 8); l_904 += 1)
                    {
                        (*l_884) = (*g_523);
                        return l_918;


                    }
                }
            }
            else
            {
                int **l_950 = &l_949;
                (*l_950) = l_928[2];

                ;
            }

            ;
            ;
            ;
            (*l_884) = l_949;

            ;
            if (p_14)
                break;
        }

        ;
    }


    ;
    ;
    return l_951;


}







static int ** func_20(char p_21, unsigned p_22)
{
    char l_25 = 0x6FL;
    int **l_26 = (void*)0;
    int *l_27 = &g_28;
    int **l_878 = &l_27;
    int **l_879 = &l_27;
    (*l_27) = ((safe_div_func_int16_t_s_s(l_25, g_3)) == (l_26 != l_26));
    (*l_27) = func_29(g_3);

    ;
    ;
    ;
    return g_880;


}







static int func_29(int p_30)
{
    unsigned l_31[9][10] = {{8UL,0x44688D23L,6UL,0UL,0x0563ADE4L,0x8CDF2AB2L,0x0563ADE4L,0UL,6UL,0x44688D23L},{0x0563ADE4L,1UL,18446744073709551614UL,9UL,0xA2C930F8L,18446744073709551606UL,0x0563ADE4L,0UL,0x712BAD47L,9UL},{18446744073709551614UL,0x44688D23L,0x712BAD47L,18446744073709551606UL,8UL,18446744073709551606UL,0x712BAD47L,0x44688D23L,18446744073709551614UL,0UL},{0x0563ADE4L,0UL,6UL,0x44688D23L,8UL,0x8CDF2AB2L,18446744073709551615UL,9UL,6UL,9UL},{8UL,1UL,0xA2C930F8L,0x44688D23L,0xA2C930F8L,1UL,8UL,0UL,18446744073709551614UL,0x44688D23L},{18446744073709551614UL,9UL,0xA2C930F8L,18446744073709551606UL,0x0563ADE4L,0UL,0x712BAD47L,9UL,0x712BAD47L,0UL},{18446744073709551615UL,9UL,6UL,9UL,8UL,1UL,0x0563ADE4L,9UL,0xD6CD5387L,0x44688D23L},{8UL,0UL,18446744073709551614UL,0x44688D23L,0x712BAD47L,18446744073709551606UL,8UL,18446744073709551606UL,0x712BAD47L,0x44688D23L},{0xA2C930F8L,0x44688D23L,0xA2C930F8L,1UL,8UL,0UL,18446744073709551614UL,0x44688D23L,0x712BAD47L,18446744073709551606UL}};
    int **l_525 = &g_524;
    int l_675 = 0x22365A37L;
    int l_691 = 0x208CA67CL;
    unsigned * const *l_741 = &g_368;
    unsigned * const **l_740 = &l_741;
    short *l_752 = &g_109;
    unsigned short * const **** const l_753 = (void*)0;
    int *l_754 = &l_691;
    unsigned *l_776 = &g_250;
    int ****l_876[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_876[i] = &g_522[0][4][1];
lbl_751:
    for (p_30 = 8; (p_30 >= 0); p_30 -= 1)
    {
        unsigned char l_32 = 0x8CL;
        int *l_33 = &g_28;
        int ** const **l_521 = &g_520;
        int l_672 = 1L;
        int *l_676 = &l_672;
        int l_700[2][10][5] = {{{0x9BC4F5CCL,0x9BC4F5CCL,0x9C312813L,1L,0L},{(-1L),0L,0x716E1BB9L,0x716E1BB9L,0L},{0L,0x91A5F196L,(-1L),0L,0x716E1BB9L},{1L,0L,0x9C312813L,0L,1L},{(-1L),0x9BC4F5CCL,0x91A5F196L,0x716E1BB9L,0x9BC4F5CCL},{1L,0x91A5F196L,0x91A5F196L,1L,0x716E1BB9L},{0L,1L,0x9C312813L,0x9BC4F5CCL,0x9BC4F5CCL},{(-1L),1L,(-1L),0x716E1BB9L,1L},{0x9BC4F5CCL,0x91A5F196L,0x716E1BB9L,0x9BC4F5CCL,0x716E1BB9L},{0x9BC4F5CCL,0x9BC4F5CCL,0x9C312813L,1L,0L}},{{(-1L),0L,0x716E1BB9L,0x716E1BB9L,0L},{0L,0x91A5F196L,(-1L),0L,0x716E1BB9L},{1L,0L,0x9C312813L,0L,1L},{(-1L),0x9BC4F5CCL,0x91A5F196L,0x716E1BB9L,0x91A5F196L},{0x716E1BB9L,(-1L),(-1L),0x716E1BB9L,0x73350FB7L},{(-1L),0x716E1BB9L,1L,0x91A5F196L,0x91A5F196L},{0x9C312813L,0x716E1BB9L,0x9C312813L,0x73350FB7L,0x716E1BB9L},{0x91A5F196L,(-1L),0x73350FB7L,0x91A5F196L,0x73350FB7L},{0x91A5F196L,0x91A5F196L,1L,0x716E1BB9L,(-1L)},{0x9C312813L,(-1L),0x73350FB7L,0x73350FB7L,(-1L)}}};
        int *l_745 = &g_705;
        int i, j, k;
        (*l_33) = l_32;
        if (func_34(l_33, func_40(func_43(l_33), &g_3), &l_33, (((*l_521) = g_520) != g_522[0][4][1]), l_525))
        {
            int *l_667 = &g_3;
            int **l_670 = &l_33;
            int *l_671[4] = {&g_3,&g_3,&g_3,&g_3};
            int i;
            l_672 = (p_30 > (g_503[1][0] == (safe_lshift_func_uint16_t_u_u((**l_525), (****g_508)))));
        }
        else
        {
            int ** const * const *l_673 = &g_520;
            for (g_109 = 8; (g_109 >= 0); g_109 -= 1)
            {
                short l_674[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_674[i] = (-1L);
                if (((void*)0 == l_673))
                {
                    int i, j;
                    return l_31[g_109][p_30];
                }
                else
                {
                    for (g_65 = 0; (g_65 <= 8); g_65 += 1)
                    {
                        return (*g_6);
                    }
                }
                l_675 = (l_674[1] = (*g_466));
            }
            if (g_93)
                goto lbl_751;
        }

        ;
        ;
        (*l_676) = p_30;
        for (g_81 = 2; (g_81 <= 8); g_81 += 1)
        {
            unsigned short l_699[3][5] = {{65535UL,65535UL,65535UL,65535UL,65535UL},{0xF567L,0x6DA3L,0x6DA3L,0xF567L,0x6DA3L},{65535UL,65535UL,1UL,65535UL,65535UL}};
            int * const l_703 = (void*)0;
            int i, j;
            (*l_676) = (((***g_509) = ((0xCDC9L == g_81) >= g_503[0][0])) <= g_109);
            if (p_30)
                break;
            for (l_672 = 7; (l_672 >= 2); l_672 -= 1)
            {
                unsigned char l_688 = 0UL;
                int l_689 = 0x3C44C2D4L;
                int *l_694 = &l_691;
                int *l_695 = (void*)0;
                char **l_722 = &g_409[6];
                int *l_750[10] = {&l_689,&l_700[0][4][0],&l_689,&l_689,&l_700[0][4][0],&l_689,&l_689,&l_700[0][4][0],&l_689,&l_689};
                int i;
            }
        }
    }
    l_675 = ((*l_754) = ((((*l_752) = (p_30 >= (((*g_130) = p_30) && 0xE4E2L))) == (&g_508 == l_753)) ^ p_30));
    if ((248UL & (-1L)))
    {
        int *l_755 = &g_705;
        int *l_760 = &g_28;
        int *l_774 = &g_81;
        l_755 = ((*g_523) = (void*)0);

        ;
        ;
        if ((safe_lshift_func_uint16_t_u_u((((((*l_754) = (!(p_30 || (2UL < ((&l_740 != (void*)0) < (**g_367)))))) && ((p_30 ^ ((((*l_525) != (*l_525)) & (65535UL < g_503[3][5])) != p_30)) <= g_93)) & (-6L)) != 0x50B9F201L), 14)))
        {
            int ***l_758 = &l_525;
            if ((((void*)0 == l_758) < p_30))
            {
                int **l_759[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_759[i] = &l_754;
                l_754 = ((**l_758) = (**l_758));

                ;
                (**l_758) = (**l_758);
                (**l_758) = (*g_523);
            }
            else
            {
                int * const l_771 = &g_28;
                for (g_81 = 0; (g_81 == (-4)); g_81--)
                {
                    unsigned short l_768 = 0x5938L;
                    for (g_65 = (-24); (g_65 > 21); g_65++)
                    {
                        if (p_30)
                            break;
                    }
                    for (g_65 = 0; (g_65 != 26); g_65 = safe_add_func_uint8_t_u_u(g_65, 4))
                    {
                        return l_768;
                    }
                }
                (*l_754) = (0xEBE7L & (0UL != 0xCB54L));
                for (g_28 = 0; (g_28 < (-30)); g_28 = safe_sub_func_int8_t_s_s(g_28, 3))
                {
                    unsigned short *l_773 = &g_711[1];
                    int l_775 = 0x0666142CL;
                    if ((((((((void*)0 != (*g_508)) ^ ((*l_752) = g_743[0][3])) && func_49(p_30, l_771)) > (((*l_773) = ((**g_129) = ((safe_unary_minus_func_uint32_t_u(((***l_740) = ((p_30 ^ (+g_743[0][1])) && p_30)))) > p_30))) || 0x38FEL)) || p_30) && g_713))
                    {
                        (*l_525) = l_774;

                        ;
                        if (p_30)
                            break;
                    }
                    else
                    {
                        return l_775;
                    }

                    ;
                    return (*g_524);
                }

                ;
            }

            ;
            ;
        }
        else
        {
            int *l_777 = &g_28;
            (*g_523) = l_777;

            ;
            (*l_525) = l_760;
        }

        ;
        ;
    }
    else
    {
        int *l_778 = &g_3;
        int **l_779 = &l_754;
        unsigned short l_789 = 0x9F53L;
        (*l_779) = ((*g_523) = l_778);

        ;
        ;
        for (g_155 = 0; (g_155 <= 1); g_155 += 1)
        {
            int **l_787 = (void*)0;
            int l_817 = 0L;
            unsigned char l_848 = 0x52L;
            int ****l_875 = (void*)0;
            for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
            {
                int *l_788 = &g_81;
            }
            for (g_75 = 0; (g_75 >= 0); g_75 -= 1)
            {
                short l_829 = 1L;
                int l_849 = 7L;
                for (l_789 = 0; (l_789 <= 8); l_789 += 1)
                {
                    int l_834 = (-8L);
                    l_829 = 0x4394456DL;
                    for (l_829 = 1; (l_829 <= 8); l_829 += 1)
                    {
                        int * const l_835 = &g_3;
                        int *l_836 = &g_705;
                        unsigned short * const * const ***l_838 = &g_837;
                        int i, j;
                        (*l_836) = ((func_49((g_712[2][4][0] = (safe_add_func_uint16_t_u_u(((((***g_509) = g_66[(g_155 + 1)]) != g_88[(g_155 + 3)][(g_155 + 3)]) & (safe_rshift_func_int16_t_s_u(g_712[2][5][0], (func_49(l_834, l_835) >= p_30)))), (*l_835)))), &l_834) ^ g_81) >= 0xE8L);

                        ;
                        (*l_779) = (*l_525);
                        l_691 = (&g_509 != ((*l_838) = g_837));
                    }
                }
                l_848 = ((l_829 ^ 2L) && (safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((0L != (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(((**l_779) > ((1L ^ (safe_div_func_int8_t_s_s(((func_49(p_30, (*l_525)) <= (((g_155 >= (*l_754)) > (**l_525)) > 0x0DD434E9L)) >= 0UL), 255UL))) | 0x6739L)))) ^ p_30), p_30))), p_30)), g_713)));
                for (l_829 = 0; (l_829 >= 0); l_829 -= 1)
                {
                    unsigned l_859 = 4294967295UL;
                    int l_870 = 0xD211079EL;
                    short l_877 = 0x1F0CL;
                }
            }
        }
        return (**l_525);
    }

    ;
    ;
    return p_30;
}







static int func_34(int * p_35, int ** p_36, int ** p_37, short p_38, int ** p_39)
{
    unsigned l_542 = 6UL;
    unsigned short * const *l_555 = (void*)0;
    unsigned short * const **l_554[6][2] = {{&l_555,&l_555},{&l_555,&l_555},{&l_555,&l_555},{&l_555,&l_555},{&l_555,&l_555},{&l_555,&l_555}};
    unsigned short * const ***l_553 = &l_554[0][0];
    char **l_570 = &g_409[9];
    int * const l_575 = &g_28;
    unsigned l_609[2][3][6] = {{{0xA1939621L,0UL,0UL,0xA1939621L,0xA42E7D72L,0xC565B870L},{0xA42E7D72L,0xA1939621L,0UL,0UL,0xA1939621L,0xA42E7D72L},{0xA42E7D72L,0UL,0xC565B870L,0xA1939621L,0xA1939621L,0xC565B870L}},{{0xA1939621L,0xA1939621L,0xC565B870L,0UL,0xA42E7D72L,0xA42E7D72L},{0xA1939621L,0UL,0UL,0xA1939621L,0xA42E7D72L,0xC565B870L},{0xA42E7D72L,0xA1939621L,0UL,0UL,0xA1939621L,0xA42E7D72L}}};
    unsigned l_621 = 0x7374AEF0L;
    char l_622[9][7][3] = {{{(-1L),1L,0x3DL},{(-2L),0xE9L,(-1L)},{1L,0x36L,0x36L},{0xA4L,0L,(-1L)},{0x61L,0x4EL,0x3DL},{1L,0xF9L,(-2L)},{0x43L,(-1L),0x43L}},{{(-2L),0xF9L,1L},{0x3DL,0x4EL,0x61L},{(-1L),0L,0xA4L},{0x36L,0x36L,1L},{(-1L),0xE9L,(-2L)},{0x3DL,1L,(-1L)},{(-2L),0x6AL,0x1CL}},{{0x43L,0x3DL,(-1L)},{1L,1L,(-2L)},{0x61L,0x09L,1L},{0xA4L,(-1L),0xA4L},{1L,0x09L,0x61L},{(-2L),1L,1L},{(-1L),0x3DL,0x43L}},{{0x1CL,0x6AL,(-2L)},{(-1L),1L,0x3DL},{(-2L),0xE9L,(-1L)},{1L,0x36L,0x36L},{0xA4L,0L,(-1L)},{0x61L,0x4EL,0x3DL},{1L,0xF9L,0xA4L}},{{(-1L),0x36L,(-1L)},{0xA4L,0x7EL,0x01L},{0x36L,(-1L),0x4EL},{0x3BL,0x6AL,(-1L)},{0x09L,0x09L,0x43L},{0x3BL,0L,0x1CL},{0x36L,0x43L,0x44L}},{{0xA4L,0xF9L,4L},{(-1L),0x36L,0x44L},{0x01L,(-1L),0x1CL},{0x4EL,0x61L,0x43L},{(-1L),0L,(-1L)},{0x43L,0x61L,0x4EL},{0x1CL,(-1L),0x01L}},{{0x44L,0x36L,(-1L)},{4L,0xF9L,0xA4L},{0x44L,0x43L,0x36L},{0x1CL,0L,0x3BL},{0x43L,0x09L,0x09L},{(-1L),0x6AL,0x3BL},{0x4EL,(-1L),0x36L}},{{0x01L,0x7EL,0xA4L},{(-1L),0x36L,(-1L)},{0xA4L,0x7EL,0x01L},{0x36L,(-1L),0x4EL},{0x3BL,0x6AL,(-1L)},{0x09L,0x09L,0x43L},{0x3BL,0L,0x1CL}},{{0x36L,0x43L,0x44L},{0xA4L,0xF9L,4L},{(-1L),0x36L,0x44L},{0x01L,0x05L,0x38L},{0x43L,1L,0x36L},{4L,(-1L),4L},{0x36L,1L,0x43L}}};
    int *l_663 = (void*)0;
    int i, j, k;
    for (g_93 = 14; (g_93 >= 45); g_93 = safe_add_func_uint32_t_u_u(g_93, 7))
    {
        short l_528 = (-1L);
        int *l_529 = &g_81;
        char **l_531 = &g_409[9];
        char ***l_530 = &l_531;
        char l_595 = 0x84L;
    }
    if ((l_622[0][3][2] <= (&g_409[9] == l_570)))
    {
        int **l_623[6];
        int **l_624[1];
        int **l_625 = &g_6;
        int i;
        for (i = 0; i < 6; i++)
            l_623[i] = &g_6;
        for (i = 0; i < 1; i++)
            l_624[i] = &g_524;
        (*p_36) = ((*p_37) = (void*)0);

        ;

        (*l_625) = l_575;

        ;
    }
    else
    {
        const unsigned char l_630 = 0x83L;
        short *l_635 = &g_109;
        short **l_634 = &l_635;
        short ***l_636 = &l_634;
        for (g_65 = 13; (g_65 <= 22); ++g_65)
        {
            (*p_39) = (*p_36);

            ;
            (*g_523) = (*p_37);

            ;
        }
        g_631 = (*p_36);

        ;
        for (g_75 = 0; (g_75 <= (-26)); g_75 = safe_sub_func_int16_t_s_s(g_75, 1))
        {
            return (**p_36);
        }
        (*l_636) = l_634;
    }


    for (g_81 = 0; (g_81 < 22); g_81 = safe_add_func_int16_t_s_s(g_81, 1))
    {
        unsigned short l_655[1];
        int l_658 = 0xF63483B9L;
        int *l_664 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_655[i] = 65533UL;
        for (g_28 = 22; (g_28 > 4); g_28--)
        {
            const unsigned l_643 = 0xABF9764AL;
            int l_661 = 0x45F24A8DL;
            for (g_75 = (-19); (g_75 == (-12)); g_75++)
            {
                const char l_646 = 0L;
                unsigned char *l_653 = (void*)0;
                unsigned char *l_654 = &g_93;
                unsigned short **l_660 = &g_222;
            }
        }
        l_664 = l_663;
        return (**p_36);
    }
    return (*l_575);
}







static int ** func_40(int ** p_41, int * p_42)
{
    unsigned l_270 = 0xD8C083ADL;
    unsigned char l_276 = 1UL;
    int l_281[1];
    int l_294 = 0x888F001CL;
    short *l_344 = &g_109;
    int * const l_353 = &l_281[0];
    int **l_366 = &g_6;
    unsigned short **l_456 = (void*)0;
    unsigned short ****l_517 = &g_509;
    int i;
    for (i = 0; i < 1; i++)
        l_281[i] = 0xFD95556CL;
    (*p_41) = (*p_41);
    for (g_109 = 0; (g_109 >= (-20)); g_109--)
    {
        int *l_267 = &g_28;
        for (g_96 = 28; (g_96 > 10); g_96--)
        {
            (*p_41) = l_267;

            ;
        }
        (*l_267) = (0x8A9D2048L < (safe_div_func_uint8_t_u_u(l_270, g_109)));
    }

    ;
    for (l_270 = 0; (l_270 <= 2); ++l_270)
    {
        unsigned char l_275 = 0xBEL;
        unsigned short ***l_302 = &g_129;
        int l_335 = 0xBA4F5CD6L;
        int l_338 = (-1L);
        int l_402 = 1L;
        unsigned short ****l_424 = &l_302;
        int *l_449 = (void*)0;
    }
    return &g_6;


}







static int ** func_43(int * p_44)
{
    unsigned l_52 = 0x6A0230A2L;
    int * const l_53 = (void*)0;
    unsigned *l_57 = &l_52;
    const unsigned l_64 = 0UL;
    int *l_243 = &g_28;
    unsigned short * const l_260 = &g_96;
    char l_261 = 6L;
    if ((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((1UL & ((*l_57) = (func_49(l_52, l_53) > 0xCAL))), g_3)) || (safe_div_func_uint32_t_u_u((g_28 | (safe_lshift_func_uint16_t_u_u(func_49((func_49(((g_65 = (safe_add_func_uint16_t_u_u(l_64, 0x461CL))) <= 1L), &g_28) < g_3), &g_3), 13))), l_52))), 6UL)))
    {
        for (l_52 = 0; l_52 < 9; l_52 += 1)
        {
            g_66[l_52] = 0UL;
        }
    }
    else
    {
        int * const l_70 = (void*)0;
        const int *l_227 = &g_3;
        const int **l_226[6] = {&l_227,&l_227,&l_227,&l_227,&l_227,&l_227};
        const int **l_228[6] = {&l_227,&l_227,&l_227,&l_227,&l_227,&l_227};
        const int **l_229 = &l_227;
        int l_257 = 1L;
        int **l_262 = &g_6;
        int i;
        (*l_229) = func_67(func_49(g_66[4], l_70), &l_52);

        ;
        ;
        for (g_28 = (-7); (g_28 == 27); g_28 = safe_add_func_int32_t_s_s(g_28, 5))
        {
            int *l_232 = &g_3;
            g_81 = ((void*)0 != l_232);
            for (g_75 = 5; (g_75 >= 0); g_75 -= 1)
            {
                unsigned short l_233 = 0UL;
                l_233 = 9L;
            }
            if ((*p_44))
            {
                p_44 = l_232;

                ;
            }
            else
            {
                unsigned short l_241 = 0x7204L;
                int l_242 = 0x2AEE829FL;
                for (g_155 = 0; (g_155 <= 5); g_155 += 1)
                {
                    int * const l_238 = (void*)0;
                    int i, j;
                    l_242 = (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((g_88[g_155][g_155] > (&g_75 == &g_75)), ((g_66[3] = (func_49((**g_129), l_238) > ((safe_rshift_func_int16_t_s_u(((void*)0 == l_226[g_155]), 4)) || l_241))) > (*l_227)))) || (*g_130)), g_155));

                    ;
                    for (g_65 = 0; (g_65 <= 5); g_65 += 1)
                    {
                        unsigned *l_244 = (void*)0;
                        unsigned *l_245 = (void*)0;
                        unsigned *l_246 = &g_66[0];
                        short *l_247 = &g_109;
                        int **l_253 = &l_243;
                        unsigned char l_254 = 0xBFL;
                        int i, j;
                        (*l_229) = l_243;

                        ;
                        (*l_229) = p_44;
                        l_254 = (((g_88[g_65][g_65] <= ((*l_247) = (g_88[g_65][g_155] <= ((*l_246) = ((*l_57) = g_109))))) == (safe_lshift_func_int16_t_s_s(((g_250 = 3L) || ((*l_232) <= 0xC160L)), 5))) && (safe_rshift_func_uint16_t_u_u((((*l_246) = func_49((*l_232), ((*l_253) = l_232))) < g_93), 9)));
                    }

                    ;
                    ;
                    (*l_229) = (void*)0;

                    ;
                    return &g_6;


                }
            }
            l_257 = ((safe_rshift_func_int8_t_s_s((*l_232), g_88[1][3])) || 1UL);
        }
        (*l_243) = (247UL != func_49((safe_sub_func_uint16_t_u_u(((void*)0 == l_260), ((*g_130) = (func_49(l_261, ((*l_262) = (void*)0)) < g_28)))), p_44));

        ;
    }

    ;
    return &g_6;


}







static unsigned char func_49(unsigned short p_50, int * const p_51)
{
    int *l_54 = &g_3;
    int **l_55[1][3];
    int *l_56[10][10][2] = {{{(void*)0,&g_28},{(void*)0,&g_3},{&g_3,&g_28},{&g_3,&g_3},{&g_3,&g_3},{(void*)0,(void*)0},{&g_3,&g_3},{&g_28,&g_28},{(void*)0,&g_28},{(void*)0,&g_3}},{{&g_28,&g_28},{(void*)0,&g_28},{&g_28,&g_28},{&g_3,(void*)0},{(void*)0,&g_3},{(void*)0,&g_3},{&g_28,&g_28},{(void*)0,&g_28},{&g_28,&g_3},{&g_3,&g_3}},{{(void*)0,&g_28},{&g_28,&g_3},{(void*)0,&g_28},{&g_3,&g_28},{&g_3,&g_28},{&g_28,&g_28},{&g_3,&g_28},{&g_3,&g_28},{(void*)0,&g_3},{&g_28,&g_28}},{{(void*)0,&g_3},{&g_3,&g_3},{&g_28,&g_28},{(void*)0,&g_28},{&g_28,&g_3},{(void*)0,&g_3},{&g_3,(void*)0},{&g_28,&g_28},{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_28,&g_28},{(void*)0,&g_28},{&g_3,&g_3},{&g_28,(void*)0},{(void*)0,&g_3},{&g_28,&g_28},{&g_3,&g_3},{&g_28,(void*)0},{&g_3,&g_3}},{{(void*)0,&g_28},{&g_28,(void*)0},{&g_28,&g_28},{&g_3,&g_28},{&g_28,&g_3},{&g_3,&g_3},{&g_28,(void*)0},{&g_28,&g_28},{(void*)0,&g_28},{&g_28,&g_28}},{{(void*)0,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{(void*)0,&g_28},{&g_28,&g_28},{(void*)0,&g_28},{&g_28,(void*)0},{&g_28,&g_3}},{{&g_3,&g_3},{&g_28,&g_28},{&g_3,&g_28},{&g_28,(void*)0},{&g_28,&g_28},{(void*)0,&g_3},{&g_3,(void*)0},{&g_28,&g_3},{&g_3,&g_28},{&g_28,&g_3}},{{(void*)0,(void*)0},{&g_28,&g_3},{&g_3,&g_28},{(void*)0,&g_28},{&g_3,(void*)0},{&g_28,(void*)0},{&g_3,&g_28},{&g_28,&g_28},{&g_28,(void*)0},{&g_3,&g_28}},{{(void*)0,(void*)0},{(void*)0,&g_3},{&g_28,&g_28},{&g_28,&g_3},{&g_3,&g_28},{(void*)0,&g_28},{&g_3,&g_28},{&g_3,&g_28},{&g_3,(void*)0},{&g_3,&g_3}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_55[i][j] = &g_6;
    }
    g_6 = l_54;

    ;
    l_56[1][4][0] = &g_28;
    return p_50;
}







static const int * const func_67(int p_68, unsigned * p_69)
{
    int *l_71 = (void*)0;
    int *l_72[7] = {&g_28,&g_3,&g_28,&g_28,&g_3,&g_28,&g_28};
    int *l_76 = &g_3;
    unsigned short *l_102 = &g_96;
    short *l_107 = (void*)0;
    short *l_108 = &g_109;
    unsigned l_128 = 0xD2A57F44L;
    unsigned char *l_164 = (void*)0;
    int i;
    g_75 = ((g_28 = (*g_6)) & (safe_mod_func_uint32_t_u_u((g_65 != (g_3 == g_65)), (*g_6))));
    if (p_68)
    {
        int **l_77 = &l_71;
        int **l_78 = (void*)0;
        int **l_79 = &l_72[6];
        char *l_84 = &g_75;
        char *l_85 = (void*)0;
        char *l_86 = (void*)0;
        char *l_87[3];
        unsigned short *l_94 = (void*)0;
        unsigned short *l_95 = &g_96;
        int i;
        for (i = 0; i < 3; i++)
            l_87[i] = (void*)0;
        (*l_79) = ((*l_77) = l_76);

        ;
        for (p_68 = 5; (p_68 >= 0); p_68 -= 1)
        {
            int *l_80 = &g_81;
            int i;
            for (g_28 = 1; (g_28 <= 6); g_28 += 1)
            {
                int i;
                l_80 = l_72[p_68];


            }


            if (g_66[p_68])
                continue;
            (*l_79) = ((*l_77) = p_69);


            (*l_77) = (*l_79);


        }



        g_28 = (safe_mod_func_uint32_t_u_u(func_49(((*l_95) = (p_68 > (((g_88[4][4] = ((*l_84) = 0x17L)) && p_68) <= (p_68 || ((safe_lshift_func_uint8_t_u_s(g_81, (g_93 = ((((*l_71) < 9L) != (safe_div_func_int8_t_s_s(func_49(g_3, p_69), 0x8AL))) && p_68)))) & 0x427E885CL))))), p_69), (*p_69)));
    }
    else
    {
        int **l_97 = &l_71;
        (*l_97) = l_71;
    }



    if ((g_28 = (safe_div_func_int16_t_s_s(((*l_108) = (safe_add_func_int8_t_s_s((func_49(((*l_102) = (func_49(((*l_102) = g_81), p_69) == ((safe_rshift_func_int8_t_s_u((*l_76), 7)) == ((*l_76) > p_68)))), p_69) > p_68), p_68))), g_66[7]))))
    {
        unsigned l_116[6];
        int l_127 = 0xC82BF133L;
        int l_153 = (-8L);
        unsigned char *l_165 = &g_93;
        unsigned short ***l_181 = (void*)0;
        int *l_197 = &g_81;
        int i;
        for (i = 0; i < 6; i++)
            l_116[i] = 5UL;
        l_127 = (safe_div_func_uint16_t_u_u(g_65, ((safe_add_func_int32_t_s_s((&g_66[4] == p_69), (safe_add_func_uint32_t_u_u(((((l_116[1] = g_109) | (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((g_88[4][4] && ((*p_69) = (safe_mod_func_uint8_t_u_u(p_68, g_109)))), (safe_div_func_uint8_t_u_u(p_68, g_109)))), l_127)) < 0x8CCF7814L), 7))) | 0L) & l_128), p_68)))) ^ g_28)));
        if (l_127)
        {
            unsigned short ***l_131 = &g_129;
            int *l_132[10][4] = {{&g_3,&g_28,&g_28,&g_28},{&g_28,&g_28,&l_127,&g_28},{&g_28,&g_3,&l_127,&g_3},{&g_28,&g_81,&g_28,&l_127},{&g_3,&g_81,&g_81,&g_3},{&g_81,&g_3,&g_28,&g_28},{&g_81,&g_28,&g_81,&g_28},{&g_3,&g_28,&g_28,&g_28},{&g_28,&g_28,&l_127,&g_28},{&g_28,&g_3,&l_127,&g_3}};
            int **l_133 = &l_72[4];
            const unsigned l_134 = 1UL;
            int i, j;
            (*l_131) = g_129;
            (*l_133) = l_132[8][3];


            (*l_133) = p_69;
            if ((((((*p_69) = (l_134 & ((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_28 || (safe_mod_func_int32_t_s_s((g_3 <= (l_127 = func_49(((p_68 == p_68) <= (safe_add_func_int16_t_s_s(0xA53DL, 8L))), &l_127))), 0x8B8DD50FL))), (*p_69))), p_68)) & (*p_69)))) ^ 9UL) == (-5L)) >= g_93))
            {
                (*l_133) = p_69;
                return p_69;


            }
            else
            {
                unsigned l_145 = 0xD6E16A95L;
                unsigned char *l_148 = &g_65;
                int l_149 = 1L;
                (*l_133) = l_71;
                g_28 = (((safe_mod_func_uint8_t_u_u((~((l_145 = (*g_6)) > (*g_6))), (((((safe_mod_func_int8_t_s_s((g_93 != (p_68 && (!(0x72E676B4L | p_68)))), ((*l_148) = l_127))) > (((4294967295UL > (l_127 | g_28)) == p_68) | (*l_76))) && (-10L)) & 1UL) || 0xE049L))) | p_68) ^ g_93);
                l_149 = p_68;
                for (g_93 = 0; (g_93 >= 57); g_93 = safe_add_func_int32_t_s_s(g_93, 1))
                {
                    unsigned l_152 = 0x7D4B22FEL;
                    unsigned short *l_154 = &g_155;
                    if (((*g_130) && p_68))
                    {
                        l_152 = l_149;
                        if ((*g_6))
                            continue;
                    }
                    else
                    {
                        return p_69;


                    }
                    (*l_133) = &g_81;
                    g_28 = ((((((*p_69) = l_116[1]) ^ (func_49(p_68, &g_28) || ((***l_131) = l_153))) < ((*l_154) = p_68)) && (p_68 >= (&l_153 == p_69))) ^ p_68);
                }
            }
        }
        else
        {
            int *l_156 = &l_127;
            char *l_166[10][7] = {{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75,(void*)0,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75,&g_75,(void*)0,&g_75},{(void*)0,(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}};
            int l_167 = 0x1A432A41L;
            unsigned short l_205 = 0UL;
            int l_208 = (-6L);
            unsigned l_209 = 0xD6CAC0D8L;
            int i, j;
lbl_194:
            l_156 = &g_3;

            ;
            if ((((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(9UL, l_153)))) | (((*l_165) = (safe_lshift_func_int8_t_s_u((g_75 = (l_127 = (safe_sub_func_int16_t_s_s((l_164 != l_165), g_65)))), g_28))) && (*l_156))) && ((g_155 != 246UL) & p_68)))
            {
                short l_178 = 0L;
                int l_182 = 0x4CD47ACAL;
                int **l_193 = &g_6;
                l_167 = 1L;
                for (g_93 = 8; (g_93 < 2); g_93--)
                {
                    short l_185[5][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EAL,0xA6EAL,0xA6EAL,0xA6EAL,0xA6EAL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EAL,0xA6EAL,0xA6EAL,0xA6EAL,0xA6EAL},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int l_192 = 0L;
                    int i, j;
                    if ((*g_6))
                        break;
                    if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_68, (l_178 = 0xF766L))), (*g_6))) != ((g_66[5] != (*p_69)) > ((l_182 = (g_81 = ((!0xD2L) || ((void*)0 != l_181)))) <= (safe_rshift_func_int16_t_s_u(0L, (**g_129)))))), l_185[4][1])), (*g_6))))
                    {
                        return &g_28;


                    }
                    else
                    {
                        int **l_186 = (void*)0;
                        int **l_187 = &l_76;
                        int *l_188 = (void*)0;
                        (*l_187) = p_69;


                        if (g_155)
                            goto lbl_199;
                        (*l_187) = l_188;

                        ;
                        if (p_68)
                            continue;
                        (*l_187) = &g_28;

                        ;
                    }

                    ;
                    for (p_68 = 0; (p_68 == 2); p_68 = safe_add_func_int16_t_s_s(p_68, 9))
                    {
                        unsigned l_191[9] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
                        int i;
                        if (l_191[0])
                            break;
                        l_192 = p_68;
                        if ((*g_6))
                            continue;
                    }
                }


                (*l_193) = p_69;


            }
            else
            {
lbl_199:
                for (g_155 = 0; (g_155 <= 6); g_155 += 1)
                {
                    int **l_195 = (void*)0;
                    int **l_196[2][9][6] = {{{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]}},{{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&l_156,&l_72[5],&l_156,&l_156,&l_72[5]},{&l_156,&g_6,&l_156,&g_6,&g_6,&l_156}}};
                    int i, j, k;
                    for (l_128 = 1; (l_128 <= 6); l_128 += 1)
                    {
                        if ((*l_156))
                            break;
                        if (g_93)
                            goto lbl_199;
                    }
                    for (p_68 = 5; (p_68 >= 1); p_68 -= 1)
                    {
                        if (g_93)
                            goto lbl_194;
                        return p_69;


                    }
                    l_197 = p_69;


                    for (p_68 = 0; (p_68 <= 6); p_68 += 1)
                    {
                        unsigned l_198[4] = {0x43421533L,0x43421533L,0x43421533L,0x43421533L};
                        int i;
                        (*l_197) = ((*p_69) && (l_198[3] = p_68));
                        (*l_197) = 0L;
                    }
                }
                if ((*g_6))
                {
                    for (g_93 = 0; (g_93 <= 14); g_93++)
                    {
                        int **l_202 = &l_76;
                        (*l_202) = &g_3;

                        ;
                        g_28 = 0x992B2AA7L;
                        (*l_202) = (void*)0;

                        ;
                        (*l_202) = p_69;


                    }
                }
                else
                {
                    for (l_153 = 11; (l_153 <= (-30)); l_153 = safe_sub_func_uint16_t_u_u(l_153, 6))
                    {
                        return p_69;


                    }
                }
                l_209 = ((p_68 || ((*l_197) = l_205)) >= (safe_add_func_int8_t_s_s((l_208 = (p_69 != (void*)0)), (-2L))));
            }



        }





    }
    else
    {
        unsigned l_210 = 18446744073709551615UL;
        int l_214[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        char l_220 = 0x42L;
        int **l_225 = &l_72[6];
        int i;
        if (((g_66[1] != p_68) ^ 0xA6F7F2E4L))
        {
            int **l_211 = (void*)0;
            l_210 = 0x1CDA13B4L;
lbl_215:
            g_6 = (void*)0;

            ;
            g_28 = func_49(l_210, p_69);

            ;
            for (g_93 = 13; (g_93 != 36); g_93 = safe_add_func_int16_t_s_s(g_93, 1))
            {
                l_214[5] = p_68;
                if (l_210)
                    goto lbl_215;
                l_220 = func_49((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_6), (l_214[5] = (*g_6)))), p_68)), &g_81);
            }
        }
        else
        {
            unsigned short *l_221 = &g_155;
            unsigned short **l_223 = &g_222;
            int l_224 = 0x88B38F87L;
            l_224 = ((func_49((*g_130), l_72[6]) == (p_68 > g_28)) | ((l_102 = (l_221 = (*g_129))) == ((*l_223) = g_222)));

            ;
        }
        (*l_225) = l_72[6];
        (*l_225) = &g_28;
    }




    return &g_81;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_503[i][j], "g_503[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_705, "g_705", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_711[i], "g_711[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_712[i][j][k], "g_712[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_713, "g_713", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_743[i][j], "g_743[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
