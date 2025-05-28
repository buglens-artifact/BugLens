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



static int g_2 = 0xB7C7CE53L;
static int g_20 = 0x667120DDL;
static unsigned char g_79 = 251UL;
static short g_81[10] = {0x1A33L, 0x1A33L, 0x97D7L, 0x1A33L, 0x1A33L, 0x97D7L, 0x1A33L, 0x1A33L, 0x97D7L, 0x1A33L};
static int g_87 = 0L;
static char g_93 = 0xAAL;
static unsigned g_102 = 1UL;
static int *g_114 = &g_20;
static int **g_113[6][7][6] = {{{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}, {{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}, {{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}, {{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}, {{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}, {{(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}, {(void*)0, (void*)0, &g_114, &g_114, &g_114, (void*)0}}};
static unsigned short g_119 = 65535UL;
static unsigned char *g_129 = &g_79;
static unsigned char **g_128 = &g_129;
static int g_152 = 0xEE4573DCL;
static unsigned *g_159 = &g_102;
static unsigned **g_158 = &g_159;
static short *g_179[10] = {(void*)0, (void*)0, &g_81[2], &g_81[2], (void*)0, (void*)0, (void*)0, &g_81[2], &g_81[2], (void*)0};
static short **g_178 = &g_179[8];
static char *g_229[6][10] = {{&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}, {&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}, {&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}, {&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}, {&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}, {&g_93, (void*)0, &g_93, (void*)0, (void*)0, (void*)0, (void*)0, &g_93, (void*)0, &g_93}};
static unsigned g_233 = 0xB2DE809FL;
static unsigned ***g_270 = &g_158;
static unsigned ***g_271 = &g_158;
static unsigned short g_287[5] = {0x27FFL, 0xD8BAL, 0x27FFL, 0xD8BAL, 0x27FFL};
static short g_348 = 0L;
static char g_363[5] = {0x19L, 0x86L, 0x19L, 0x86L, 0x19L};
static unsigned *g_384[8] = {&g_233, (void*)0, &g_233, (void*)0, &g_233, (void*)0, &g_233, (void*)0};
static unsigned g_455 = 0x5D305FCBL;
static int ***g_493 = (void*)0;
static int ***g_495 = &g_113[4][6][4];
static unsigned char g_509 = 255UL;
static unsigned short **g_578 = (void*)0;
static unsigned short ***g_577 = &g_578;
static int g_662 = (-4L);
static unsigned short g_676[8][2] = {{0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}, {0xAB3AL, 0xAB3AL}};
static unsigned short g_702 = 3UL;
static unsigned char g_754 = 255UL;
static int g_796 = (-1L);
static short **g_821 = &g_179[3];
static int g_852 = 0xA94EA24FL;
static short ***g_857 = &g_178;
static short ****g_856 = &g_857;
static short ****g_859 = (void*)0;
static unsigned char g_912 = 0x82L;
static unsigned short *g_956 = (void*)0;
static unsigned **g_1054 = &g_384[5];
static int *g_1121 = &g_2;
static unsigned g_1215 = 0x28CCB682L;
static int *g_1333 = (void*)0;
static int *g_1341 = &g_20;
static int **g_1355 = &g_1333;
static int ***g_1354 = &g_1355;
static char **g_1357[7][10][3] = {{{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}, {{&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}, {&g_229[2][8], &g_229[3][2], &g_229[2][8]}}};
static char ***g_1356 = &g_1357[0][7][2];
static short g_1422 = 1L;
static short *****g_1529 = &g_856;
static short ******g_1528 = &g_1529;
static unsigned *****g_1540 = (void*)0;
static unsigned ****g_1545 = &g_270;
static unsigned *****g_1544 = &g_1545;
static short ***g_1559 = &g_821;
static int g_1579 = 1L;
static int g_1587 = 0xC642322EL;
static int ****g_1683 = &g_495;
static int *****g_1682 = &g_1683;



static short func_1(void);
static char func_3(unsigned p_4, char p_5);
static unsigned func_9(int p_10, unsigned short p_11);
static unsigned char func_15(int p_16);
static int * func_23(int p_24, int * p_25, unsigned char p_26, unsigned p_27);
static char func_34(unsigned char p_35, int * p_36, int * p_37);
static unsigned func_43(unsigned p_44);
static unsigned func_45(unsigned p_46, int p_47);
static short func_56(int * p_57, unsigned short p_58, int p_59);
static int * func_60(unsigned short p_61, unsigned p_62);
static short func_1(void)
{
    char l_1335 = 0x5EL;
    int *l_1360 = &g_2;
    unsigned l_1391 = 0x9872287BL;
    int *l_1393 = &g_87;
    unsigned short l_1394 = 0x4983L;
    unsigned char **l_1406 = &g_129;
    int l_1447 = 0xE0AEA724L;
    short ****l_1457 = &g_857;
    unsigned l_1459[1][5][8] = {{{0x06376832L, 4UL, 0xE7E57BDEL, 0x8893EE19L, 4UL, 0xA73ECD16L, 4UL, 0x8893EE19L}, {0x06376832L, 4UL, 0xE7E57BDEL, 0x8893EE19L, 4UL, 0xA73ECD16L, 4UL, 0x8893EE19L}, {0x06376832L, 4UL, 0xE7E57BDEL, 0x8893EE19L, 4UL, 0xA73ECD16L, 4UL, 0x8893EE19L}, {0x06376832L, 4UL, 0xE7E57BDEL, 0x8893EE19L, 4UL, 0xA73ECD16L, 4UL, 0x8893EE19L}, {0x06376832L, 4UL, 0xE7E57BDEL, 0x8893EE19L, 4UL, 0xA73ECD16L, 4UL, 0x8893EE19L}}};
    unsigned l_1465 = 0x5A4F8319L;
    unsigned l_1466 = 0x3054A50BL;
    unsigned char l_1475 = 0x61L;
    int l_1496[9] = {8L, 8L, (-1L), 8L, 8L, (-1L), 8L, 8L, (-1L)};
    unsigned short l_1501[10][7] = {{0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}, {0xDD45L, 0xF0F5L, 65535UL, 0x2BB7L, 0x8B58L, 5UL, 0xBFACL}};
    int l_1509 = (-10L);
    unsigned char l_1510 = 0x94L;
    int l_1517[9][1][10];
    unsigned short l_1538[6][4] = {{65535UL, 0xE5EEL, 65535UL, 0xE5EEL}, {65535UL, 0xE5EEL, 65535UL, 0xE5EEL}, {65535UL, 0xE5EEL, 65535UL, 0xE5EEL}, {65535UL, 0xE5EEL, 65535UL, 0xE5EEL}, {65535UL, 0xE5EEL, 65535UL, 0xE5EEL}, {65535UL, 0xE5EEL, 65535UL, 0xE5EEL}};
    int *l_1553[7][3][3] = {{{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}, {{&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}, {&l_1447, &l_1447, &g_796}}};
    int *l_1554 = (void*)0;
    unsigned char l_1574 = 1UL;
    int l_1593 = 0xE2E7A844L;
    unsigned l_1594[6][9] = {{0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}, {0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}, {0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}, {0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}, {0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}, {0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L, 0xB35C17E4L, 4294967288UL, 0xB35C17E4L, 0x895528A8L}};
    char l_1597 = 0xE3L;
    unsigned l_1598 = 0xD92C6E04L;
    unsigned l_1610 = 0xB40B7470L;
    int *l_1622 = (void*)0;
    unsigned ****l_1653 = &g_270;
    int ****l_1679 = (void*)0;
    int *****l_1678 = &l_1679;
    unsigned char l_1685 = 1UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
                l_1517[i][j][k] = 0L;
        }
    }
    l_1335 = (g_2 | func_3(g_2, g_2));
    for (g_119 = 0; (g_119 > 19); g_119 = safe_add_func_int8_t_s_s(g_119, 7))
    {
        int *l_1338 = &g_2;
        int **l_1339 = &l_1338;
        unsigned char l_1346[6] = {255UL, 5UL, 255UL, 5UL, 255UL, 5UL};
        short *l_1347 = &g_81[8];
        short l_1349[8][9] = {{0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}, {0xB14CL, 1L, 0L, 0xBB35L, 1L, 0xB36DL, 7L, 0x3A0BL, 7L}};
        int i, j;
        (*l_1339) = l_1338;
        (*l_1339) = func_23((safe_unary_minus_func_uint32_t_u(l_1335)), g_1341, (((l_1335 != (safe_mod_func_uint16_t_u_u((((*l_1338) < (((safe_sub_func_int16_t_s_s((((*l_1347) = l_1346[0]) != (**l_1339)), (*l_1338))) && (((*g_159) && (*l_1338)) == (**l_1339))) <= 1UL)) || 0x531FL), (-9L)))) == 0x82D9L) > 0x44L), l_1335);
        (*g_1341) = (6UL && (safe_unary_minus_func_uint8_t_u((l_1349[7][3] & (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(l_1346[5], l_1335)), 3))))));
    }
    if ((!(l_1335 >= ((void*)0 == g_1354))))
    {
        char ****l_1358 = &g_1356;
        int **l_1359[10];
        int i;
        for (i = 0; i < 10; i++)
            l_1359[i] = &g_114;
        (*g_1341) = (((*l_1358) = g_1356) == (void*)0);
        (*g_495) = l_1359[2];
        for (g_348 = 0; g_348 < 10; g_348 += 1)
        {
            g_179[g_348] = &g_81[2];
        }
        l_1360 = l_1360;
    }
    else
    {
        unsigned l_1366 = 1UL;
        int **l_1396[1][1];
        unsigned l_1429 = 0xB251FE6FL;
        int **l_1435 = (void*)0;
        unsigned short l_1444 = 0UL;
        int l_1448[5];
        short *****l_1455 = &g_856;
        short *****l_1456 = &g_859;
        int l_1458[5][9][5] = {{{0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}}, {{0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}}, {{0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}}, {{0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}}, {{0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}, {0x43775A00L, 0xDC4943F1L, 0x49031A98L, (-1L), 5L}}};
        unsigned short l_1460 = 1UL;
        unsigned short l_1461 = 0x619FL;
        unsigned l_1462 = 0x74AAC486L;
        unsigned char l_1467[7][10][3] = {{{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}, {{0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}, {0x6BL, 0UL, 0x22L}}};
        int l_1471 = 0xE8D9811CL;
        short **l_1472 = &g_179[8];
        int *l_1480 = &l_1447;
        unsigned l_1481 = 0x2A99315DL;
        int l_1522 = 8L;
        short l_1532 = 0x5616L;
        int l_1533 = 1L;
        unsigned ****l_1542 = &g_271;
        unsigned *****l_1541[4][8] = {{&l_1542, &l_1542, &l_1542, &l_1542, &l_1542, (void*)0, &l_1542, &l_1542}, {&l_1542, &l_1542, &l_1542, &l_1542, &l_1542, (void*)0, &l_1542, &l_1542}, {&l_1542, &l_1542, &l_1542, &l_1542, &l_1542, (void*)0, &l_1542, &l_1542}, {&l_1542, &l_1542, &l_1542, &l_1542, &l_1542, (void*)0, &l_1542, &l_1542}};
        unsigned short **l_1561 = (void*)0;
        int *l_1580 = (void*)0;
        unsigned char l_1618 = 0x13L;
        short l_1672[7];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1396[i][j] = &l_1360;
        }
        for (i = 0; i < 5; i++)
            l_1448[i] = (-2L);
        for (i = 0; i < 7; i++)
            l_1672[i] = 0x1D7CL;
        for (g_662 = 9; (g_662 >= 3); g_662 -= 1)
        {
            int *l_1361 = (void*)0;
            short l_1377[9] = {(-1L), 0xA311L, (-1L), 0xA311L, (-1L), 0xA311L, (-1L), 0xA311L, (-1L)};
            int l_1386 = 3L;
            int i;
            for (g_152 = 9; (g_152 >= 0); g_152 -= 1)
            {
                l_1361 = (void*)0;
            }
            for (g_1215 = 0; (g_1215 <= 9); g_1215 += 1)
            {
                int *l_1375 = (void*)0;
                int *l_1376[6][6] = {{&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}, {&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}, {&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}, {&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}, {&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}, {&g_20, &g_2, &g_20, &g_2, &g_20, &g_2}};
                unsigned short l_1382 = 65535UL;
                unsigned l_1383[10] = {0xDBA5576CL, 18446744073709551614UL, 0xDBA5576CL, 18446744073709551614UL, 0xDBA5576CL, 18446744073709551614UL, 0xDBA5576CL, 18446744073709551614UL, 0xDBA5576CL, 18446744073709551614UL};
                int i, j;
                if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_1366 && (l_1366 > (!(safe_rshift_func_int16_t_s_s(l_1366, 10))))), ((safe_sub_func_int16_t_s_s(0x7824L, (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_1377[1], (*l_1360))), l_1377[1])))) >= l_1366))), 65528UL)))
                {
                    unsigned short *l_1378 = &g_676[5][0];
                    unsigned short *l_1379 = &g_119;
                    int l_1380 = (-1L);
                    int **l_1381 = &l_1361;
                    (*l_1381) = func_60((l_1380 = ((*l_1379) = ((*l_1378) = l_1366))), (*l_1360));
                    for (g_2 = 2; (g_2 <= 7); g_2 += 1)
                    {
                        if ((*g_1341))
                            break;
                        l_1383[6] = l_1382;
                    }
                    (*l_1381) = (void*)0;
                }
                else
                {
                    unsigned short l_1392[4][4] = {{8UL, 65535UL, 8UL, 65535UL}, {8UL, 65535UL, 8UL, 65535UL}, {8UL, 65535UL, 8UL, 65535UL}, {8UL, 65535UL, 8UL, 65535UL}};
                    unsigned *l_1395 = &g_455;
                    int i, j;
                    l_1386 = (0x801AL && (1UL <= (safe_lshift_func_uint16_t_u_s(l_1366, 5))));
                    (*l_1360) = ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((0xB1A6L >= 0UL), l_1391)) == (l_1392[0][0] == 246UL)), 5)) != ((*l_1395) = ((*g_159) = g_81[g_1215])));
                }
            }
            l_1361 = &l_1386;
        }
        l_1393 = func_23(l_1366, l_1360, (l_1366 > l_1366), (0x74EC0181L <= func_43((0x3DL < (l_1366 <= l_1366)))));
        for (g_509 = (-20); (g_509 <= 23); g_509++)
        {
            unsigned char **l_1408[5] = {(void*)0, &g_129, (void*)0, &g_129, (void*)0};
            int l_1413[7][4] = {{7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}, {7L, 0x909B2768L, 0xA0DED4B2L, 0xA0DED4B2L}};
            int *l_1420 = &g_20;
            int i, j;
            for (g_93 = 0; (g_93 == (-15)); g_93--)
            {
                unsigned l_1403 = 0xB6E77676L;
                unsigned char ***l_1407 = &g_128;
                short *l_1418 = (void*)0;
                short *l_1419 = &g_348;
                int *l_1421 = (void*)0;
                l_1421 = func_23(((*g_1341) >= (safe_add_func_int8_t_s_s(l_1403, (safe_mod_func_uint32_t_u_u(((0x04B9L <= ((l_1408[2] = l_1406) != l_1406)) & (safe_mod_func_int32_t_s_s((!((safe_add_func_int8_t_s_s(((l_1413[0][3] < ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_1419) = l_1413[6][1]), (*l_1360))), l_1403)) > (-1L))) != l_1413[0][3]), l_1403)) || (*l_1360))), l_1403))), l_1413[5][3]))))), l_1420, (*l_1420), (*g_159));
                for (g_102 = 0; (g_102 <= 3); g_102 += 1)
                {
                    int i, j;
                    (*l_1360) = ((*l_1420) = (l_1413[g_102][g_102] >= ((**l_1406) = ((*l_1360) && (*l_1420)))));
                    if (g_1422)
                        break;
                }
            }
            (*g_1341) = ((safe_add_func_uint32_t_u_u((*l_1420), (safe_sub_func_int8_t_s_s((*l_1420), l_1429)))) ^ ((safe_add_func_uint16_t_u_u(0x2F77L, (*l_1360))) <= ((safe_unary_minus_func_int8_t_s((((*l_1420) == ((*l_1420) | (*l_1360))) || (safe_mod_func_int16_t_s_s(0xBF9DL, 9L))))) && (*l_1420))));
            (*l_1360) = ((*g_1354) == l_1435);
        }
        if (((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((*g_129), 7)), l_1462)), (*l_1360))) > (-1L)))
        {
            int *l_1468[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1468[i] = (void*)0;
            l_1360 = (l_1468[2] = &l_1447);
            (*g_1341) = (*g_1341);
            (*g_1341) = (safe_mod_func_uint32_t_u_u(((*g_159) = 0x121FEB28L), func_43((*l_1360))));
        }
        else
        {
            unsigned l_1478 = 0x11AD8E91L;
            int *l_1482 = &g_2;
            int *l_1500 = &g_662;
            unsigned char l_1502 = 0UL;
            unsigned short *l_1503 = (void*)0;
            unsigned short *l_1504 = &l_1461;
            int *l_1564 = (void*)0;
            short **l_1565 = &g_179[2];
            unsigned short l_1566 = 0xD27CL;
            short l_1568 = 0x528AL;
            short l_1576 = 0L;
            unsigned char **l_1601 = &g_129;
            int l_1605[2];
            int *l_1611 = &g_87;
            unsigned short l_1643 = 0x0EF4L;
            unsigned short l_1646 = 65535UL;
            unsigned ****l_1654[4] = {&g_271, &g_271, &g_271, &g_271};
            unsigned ****l_1655 = (void*)0;
            unsigned char l_1659 = 0xC8L;
            short ***l_1676 = &l_1472;
            int l_1684 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_1605[i] = 3L;
            if (l_1475)
            {
                short l_1476 = 0L;
                unsigned char *l_1477 = &g_754;
                int *l_1479[2][2][5] = {{{&g_662, &g_662, &l_1448[2], &g_152, &l_1448[2]}, {&g_662, &g_662, &l_1448[2], &g_152, &l_1448[2]}}, {{&g_662, &g_662, &l_1448[2], &g_152, &l_1448[2]}, {&g_662, &g_662, &l_1448[2], &g_152, &l_1448[2]}}};
                int *l_1483[3][3] = {{(void*)0, &l_1471, (void*)0}, {(void*)0, &l_1471, (void*)0}, {(void*)0, &l_1471, (void*)0}};
                int i, j, k;
                l_1482 = func_23((g_852 = (g_152 = (l_1478 = (((*l_1360) = l_1476) | ((*g_1341) = (l_1477 != l_1477)))))), l_1480, l_1476, l_1481);
                l_1483[2][0] = (void*)0;
            }
            else
            {
                unsigned l_1486 = 0xB79B057CL;
                for (l_1366 = 0; (l_1366 > 49); l_1366 = safe_add_func_uint16_t_u_u(l_1366, 6))
                {
                    short l_1487 = 0x5553L;
                    int l_1488 = 5L;
                    (*l_1480) = (l_1486 > l_1487);
                    if ((*l_1482))
                        continue;
                    (*l_1480) = ((*g_129) || (l_1488 = (((*l_1360) = l_1487) >= l_1487)));
                    (*l_1360) = (l_1486 && 0L);
                }
                (*l_1480) = l_1486;
            }
            for (g_119 = 0; (g_119 <= 26); g_119 = safe_add_func_uint16_t_u_u(g_119, 7))
            {
                int l_1491 = (-7L);
                return l_1491;
            }
            if ((safe_lshift_func_uint16_t_u_u(0x3634L, (*l_1480))))
            {
                unsigned ***l_1507 = &g_158;
                char *l_1508 = &g_363[4];
                int l_1511 = 0x08ACC81FL;
                short ******l_1530 = &l_1455;
                int *l_1535 = &l_1511;
                int l_1548 = 1L;
                if (((((*l_1508) = ((*l_1360) = ((0x5AB37CF3L ^ (l_1478 != g_676[6][1])) > (*g_129)))) & l_1509) == l_1510))
                {
                    int l_1512 = 5L;
                    if (l_1512)
                    {
                        unsigned l_1515 = 0x904C5AA2L;
                        short *l_1516[10] = {&g_1422, &g_81[2], &g_1422, &g_81[2], &g_1422, &g_81[2], &g_1422, &g_81[2], &g_1422, &g_81[2]};
                        int i;
                        (*l_1480) = ((safe_rshift_func_uint16_t_u_s((2L >= l_1511), (0xA84CE1C0L ^ (255UL >= l_1515)))) != (l_1511 <= (l_1517[5][0][6] = l_1515)));
                    }
                    else
                    {
                        l_1511 = (l_1511 & (((((*l_1508) = (((*g_159) == ((safe_mod_func_uint16_t_u_u(((*l_1504) = (*l_1360)), ((*g_159) & l_1511))) <= (*l_1360))) > 1L)) != (*g_129)) > 0xF13373E5L) | (*l_1480)));
                    }
                }
                else
                {
                    short l_1525 = (-2L);
                    int *l_1531 = &l_1471;
                    short ***l_1560[9] = {&l_1472, &g_821, &l_1472, &g_821, &l_1472, &g_821, &l_1472, &g_821, &l_1472};
                    unsigned short ***l_1562 = &l_1561;
                    int i;
                    if ((safe_sub_func_int8_t_s_s(l_1522, (safe_lshift_func_uint16_t_u_s((l_1525 < (*g_129)), (*l_1531))))))
                    {
                        l_1393 = &l_1447;
                        (*l_1393) = 0xBFA406C0L;
                        return l_1533;
                    }
                    else
                    {
                        int *l_1534 = &l_1447;
                        l_1393 = l_1534;
                        l_1393 = (l_1531 = l_1531);
                        l_1535 = &l_1447;
                        l_1360 = (void*)0;
                    }
                    if ((safe_add_func_int32_t_s_s(((void*)0 != &g_79), ((*l_1531) < func_43(l_1538[5][3])))))
                    {
                        unsigned l_1539 = 0xE794E91CL;
                        unsigned ******l_1543[2];
                        short *l_1551[6] = {&g_81[2], &g_81[2], &l_1525, &g_81[2], &g_81[2], &l_1525};
                        int l_1552 = 0x16D1B41BL;
                        short ***l_1558 = &g_821;
                        short ****l_1557[1][9] = {{&l_1558, &l_1558, &l_1558, &l_1558, &l_1558, &l_1558, &l_1558, &l_1558, &l_1558}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1543[i] = &l_1541[3][2];
                        l_1535 = l_1553[5][1][0];
                        l_1554 = l_1531;
                        (*l_1393) = l_1539;
                        (*l_1393) = (((*l_1531) | (*l_1531)) > ((+0x5F0BA1F0L) == ((*l_1535) = (*l_1535))));
                    }
                    else
                    {
                        (*l_1480) = ((*l_1531) ^ (*l_1531));
                    }
                    (*l_1562) = l_1561;
                }
            }
            else
            {
                int *l_1563 = (void*)0;
                int l_1567 = 0x461FF5BBL;
                unsigned l_1581 = 1UL;
                unsigned short l_1596 = 65535UL;
                l_1564 = l_1563;
                if (l_1568)
                {
                    unsigned char l_1571 = 0xE6L;
                    short *l_1575 = &l_1568;
                    (*g_1341) = (safe_add_func_int32_t_s_s(l_1571, (~((*g_159) = (safe_sub_func_int16_t_s_s(((*l_1575) = l_1574), l_1576))))));
                    l_1553[0][1][2] = &l_1447;
                    (*l_1480) = l_1571;
                    (*g_1341) = ((void*)0 != &l_1575);
                }
                else
                {
                    int l_1582 = 0x3D0FF4C9L;
                    unsigned l_1595 = 6UL;
                    if (l_1582)
                    {
                        (*g_1341) = l_1582;
                        l_1482 = l_1500;
                    }
                    else
                    {
                        l_1482 = &l_1447;
                        l_1567 = l_1582;
                    }
                    for (g_852 = 0; g_852 < 7; g_852 += 1)
                    {
                        for (l_1509 = 0; l_1509 < 10; l_1509 += 1)
                        {
                            for (g_796 = 0; g_796 < 3; g_796 += 1)
                            {
                                g_1357[g_852][l_1509][g_796] = &g_229[2][8];
                            }
                        }
                    }
                    for (g_2 = 0; (g_2 <= (-12)); --g_2)
                    {
                        int *l_1588 = (void*)0;
                        l_1588 = func_60(l_1582, (safe_rshift_func_uint16_t_u_s((((**l_1406) = (*g_129)) <= g_1587), 0)));
                    }
                    l_1567 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((1L & ((l_1593 != (((void*)0 == &l_1396[0][0]) == (l_1595 < (*l_1482)))) == ((*l_1504) = func_43(l_1596)))), 5)), l_1595));
                }
                if (l_1597)
                {
                    short l_1604 = 8L;
                    unsigned l_1606 = 1UL;
                    int *l_1616 = &l_1458[2][5][3];
                    (*g_1341) = (0x3234L | l_1598);
                    if ((((safe_rshift_func_uint8_t_u_u((l_1604 < l_1604), l_1604)) & l_1605[1]) < g_363[4]))
                    {
                        return l_1606;
                    }
                    else
                    {
                        int *l_1607 = &l_1458[2][5][3];
                        char *l_1614 = (void*)0;
                        char *l_1615 = &l_1335;
                        l_1607 = l_1607;
                        l_1482 = &l_1567;
                        l_1607 = func_23(((safe_sub_func_int8_t_s_s(l_1606, ((!(0UL & l_1610)) >= (*l_1607)))) > 0x46B1DA8DL), l_1611, (safe_rshift_func_int8_t_s_u((((*g_159) || (((*l_1615) = (*l_1607)) < (((*l_1607) | 1UL) | 1L))) <= (*l_1482)), (*l_1607))), (*l_1607));
                        l_1607 = (void*)0;
                    }
                    l_1616 = l_1564;
                    l_1553[5][1][0] = (void*)0;
                }
                else
                {
                    int l_1617 = 1L;
                    int *l_1619 = (void*)0;
                    l_1619 = func_23((~l_1617), &l_1567, l_1618, (*l_1611));
                    if ((*l_1480))
                    {
                        (*l_1480) = (safe_rshift_func_int16_t_s_s((*l_1360), 8));
                        (*l_1611) = 0L;
                        l_1619 = (void*)0;
                        l_1622 = &l_1447;
                    }
                    else
                    {
                        unsigned l_1623 = 0xA1243527L;
                        int *l_1624[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1624[i] = &g_796;
                        (*l_1480) = 0L;
                        l_1360 = func_60(l_1623, l_1617);
                        l_1619 = l_1624[5];
                    }
                    (*g_1341) = l_1617;
                    for (l_1502 = 27; (l_1502 >= 42); l_1502 = safe_add_func_int32_t_s_s(l_1502, 6))
                    {
                        unsigned l_1627 = 0x29493C37L;
                        return l_1627;
                    }
                }
            }
            for (l_1532 = (-6); (l_1532 < (-23)); --l_1532)
            {
                int l_1636 = 8L;
                unsigned l_1640 = 0xF7AB8E2AL;
                int l_1663[6][6][7] = {{{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}, {{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}, {{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}, {{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}, {{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}, {{0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}, {0x73A65822L, (-4L), 6L, 0x18CE5992L, 0x18CE5992L, 6L, (-4L)}}};
                int i, j, k;
                for (l_1618 = 0; (l_1618 == 27); ++l_1618)
                {
                    unsigned l_1637 = 0x0B3138D0L;
                    char l_1658 = 0x1BL;
                    for (l_1566 = 0; (l_1566 == 25); l_1566 = safe_add_func_uint16_t_u_u(l_1566, 1))
                    {
                        int *l_1638[5][2][4] = {{{&l_1471, (void*)0, (void*)0, (void*)0}, {&l_1471, (void*)0, (void*)0, (void*)0}}, {{&l_1471, (void*)0, (void*)0, (void*)0}, {&l_1471, (void*)0, (void*)0, (void*)0}}, {{&l_1471, (void*)0, (void*)0, (void*)0}, {&l_1471, (void*)0, (void*)0, (void*)0}}, {{&l_1471, (void*)0, (void*)0, (void*)0}, {&l_1471, (void*)0, (void*)0, (void*)0}}, {{&l_1471, (void*)0, (void*)0, (void*)0}, {&l_1471, (void*)0, (void*)0, (void*)0}}};
                        int *l_1639 = &g_20;
                        int i, j, k;
                        l_1639 = (l_1638[0][0][0] = func_60((safe_lshift_func_uint8_t_u_u(l_1636, 4)), (0x8954L < (((void*)0 != (*g_1544)) < l_1637))));
                        (*l_1611) = l_1636;
                        l_1638[0][0][0] = (l_1554 = func_60((l_1640 ^ (safe_add_func_uint16_t_u_u((l_1643 != (safe_rshift_func_uint8_t_u_u(((l_1646 != ((*l_1504) = l_1637)) <= (*g_1341)), 5))), (safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((l_1654[1] = l_1653) == l_1655), (safe_add_func_int8_t_s_s((*l_1611), ((void*)0 == (*g_856)))))), l_1637)) & (*g_159)) != l_1637), l_1658))))), l_1659));
                    }
                }
                for (l_1576 = (-17); (l_1576 != 23); ++l_1576)
                {
                    int l_1662 = 0xA3A8C2CEL;
                    int l_1677 = (-1L);
                    if (l_1662)
                    {
                        l_1482 = l_1564;
                        l_1663[1][5][1] = l_1662;
                    }
                    else
                    {
                        unsigned short l_1668 = 0x8177L;
                        int l_1669[3][1];
                        int l_1675[8][10][3] = {{{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}, {{1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}, {1L, 0xFD61FF64L, 6L}}};
                        int ******l_1680 = (void*)0;
                        int ******l_1681 = &l_1678;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1669[i][j] = 0xD929102EL;
                        }
                        l_1675[0][4][0] = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((void*)0 == (**g_1354)), ((l_1669[2][0] = l_1668) ^ ((*g_129) && (((-1L) < (safe_sub_func_int32_t_s_s(l_1672[2], l_1663[1][5][1]))) < 4L))))), (safe_rshift_func_uint16_t_u_s(((*l_1504) = l_1663[1][5][1]), 11))));
                        l_1677 = (l_1675[0][4][0] = (((***g_1528) = (*g_856)) == (l_1676 = &g_178)));
                        (*l_1611) = ((((*l_1681) = l_1678) != (g_1682 = g_1682)) != (l_1684 = (*l_1480)));
                    }
                    l_1663[1][5][1] = 0xCA915B26L;
                    if ((*l_1480))
                        continue;
                }
            }
        }
    }
    return l_1685;
}







static char func_3(unsigned p_4, char p_5)
{
    int l_8 = (-7L);
    unsigned short *l_911 = &g_287[1];
    int *l_918 = &g_152;
    int **l_917 = &l_918;
    unsigned *l_935 = (void*)0;
    int *l_945 = &g_20;
    unsigned short ***l_987 = &g_578;
    int ****l_991 = &g_495;
    char *l_1032 = &g_93;
    unsigned short l_1060 = 0xD325L;
    short l_1079 = 0xE404L;
    int *l_1081 = &l_8;
    short l_1113 = 0x5BB0L;
    unsigned ****l_1138[5];
    int *l_1172 = &l_8;
    unsigned **l_1189 = &g_384[3];
    int l_1211 = 0xEF2B2707L;
    unsigned l_1303 = 0x09886363L;
    short l_1329 = 1L;
    int **l_1332 = (void*)0;
    short *l_1334 = &g_81[2];
    int i;
    for (i = 0; i < 5; i++)
        l_1138[i] = &g_270;
    if ((safe_rshift_func_int16_t_s_s((0xC5L > ((g_2 == g_2) || ((0UL & 0x32L) > ((*l_911) = (l_8 <= (!((func_9((((safe_unary_minus_func_int16_t_s(0x8AAFL)) == (safe_rshift_func_int16_t_s_u(p_5, 11))) | (l_8 <= g_2)), p_5) <= 0x4A98DF1AL) >= g_852))))))), g_912)))
    {
        short l_913 = 0x5EB6L;
        int **l_919 = &l_918;
        char *l_920 = &g_363[4];
        int l_948 = 0x7B4720A8L;
        int l_949[5];
        unsigned short *l_957 = (void*)0;
        short ****l_960[4][3];
        unsigned l_975[1][10] = {{4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}};
        int *l_980 = &g_87;
        char l_1008 = 0x40L;
        int ***l_1067 = &g_113[1][6][1];
        unsigned short l_1080 = 65526UL;
        unsigned short l_1112 = 0x319EL;
        int l_1114 = 0x8C434F5CL;
        char l_1120 = 1L;
        unsigned **l_1125 = &g_384[2];
        int i, j;
        for (i = 0; i < 5; i++)
            l_949[i] = 0x2761A898L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_960[i][j] = (void*)0;
        }
        l_913 = (-1L);
        if ((p_4 <= (safe_lshift_func_int8_t_s_s((p_5 = ((*l_920) = (safe_unary_minus_func_uint8_t_u(((l_917 != l_919) >= l_913))))), (p_4 != (p_4 == p_4))))))
        {
            int *l_944 = &g_2;
            unsigned short ****l_954[3];
            int l_955 = 0xFD930150L;
            char l_976 = 0x85L;
            char l_1021 = (-8L);
            int **l_1082 = &l_944;
            int i;
            for (i = 0; i < 3; i++)
                l_954[i] = &g_577;
            for (g_87 = 8; (g_87 != (-10)); g_87 = safe_sub_func_uint32_t_u_u(g_87, 7))
            {
                int l_937 = (-1L);
                int l_947 = 0xCDEA7148L;
                for (g_509 = 0; (g_509 != 60); ++g_509)
                {
                    short *l_936 = &g_81[2];
                    int *l_940 = &g_852;
                    char l_941[1][2][2] = {{{0xDEL, 0xB9L}, {0xDEL, 0xB9L}}};
                    int i, j, k;
                    if ((safe_sub_func_int8_t_s_s(((~l_8) == p_4), ((l_937 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_936) = ((l_918 != l_935) | (l_913 && p_5))), p_4)), p_5))) && ((safe_mod_func_int8_t_s_s(((((*l_917) = (*l_917)) != l_940) || l_941[0][0][1]), p_5)) <= p_5)))))
                    {
                        int *l_943 = &g_796;
                        l_8 = (safe_unary_minus_func_uint32_t_u(l_913));
                        (*l_943) = (l_8 = l_913);
                        (*l_943) = p_5;
                    }
                    else
                    {
                        unsigned l_946 = 0x352C680BL;
                        if (p_5)
                            break;
                        l_945 = l_944;
                        l_946 = (0UL | (l_945 == (void*)0));
                        l_947 = (p_5 && 0x440CL);
                    }
                }
                if (p_5)
                {
                    if (p_5)
                        break;
                }
                else
                {
                    int *l_951 = &l_8;
                    for (g_233 = 1; (g_233 <= 5); g_233 += 1)
                    {
                        int *l_950 = &l_949[1];
                        l_947 = (l_949[2] = (p_5 & (l_948 = p_5)));
                        (*l_950) = (l_947 = (-10L));
                        l_950 = l_951;
                    }
                }
                l_955 = (safe_lshift_func_uint8_t_u_s((*g_129), ((void*)0 != l_954[1])));
            }
            l_948 = ((&g_662 != ((*l_917) = func_60((p_5 || p_4), (*l_944)))) & (l_949[2] = (*l_944)));
            if ((p_5 || (((-1L) > ((g_956 = l_911) == (l_957 = l_911))) != 0xA787EABAL)))
            {
                short *****l_961 = &g_859;
                int l_970 = 0x90B18026L;
                int **l_981 = &l_918;
                unsigned short ***l_988 = &g_578;
                unsigned char **l_1000 = &g_129;
                unsigned l_1010 = 4294967292UL;
                int *l_1022 = &g_852;
                char **l_1029 = &g_229[0][9];
                int *l_1033 = &g_662;
                unsigned char l_1034 = 9UL;
                int **l_1035 = &l_945;
                int *l_1043 = &g_87;
                if (l_948)
                {
                    int **l_979[5] = {&g_114, (void*)0, &g_114, (void*)0, &g_114};
                    int i;
                    for (g_796 = 0; g_796 < 1; g_796 += 1)
                    {
                        for (p_4 = 0; p_4 < 10; p_4 += 1)
                        {
                            l_975[g_796][p_4] = 1UL;
                        }
                    }
                    for (g_796 = 0; (g_796 == 26); g_796 = safe_add_func_int8_t_s_s(g_796, 8))
                    {
                        if (p_4)
                            break;
                    }
                    l_980 = &l_955;
                    l_980 = (void*)0;
                }
                else
                {
                    int *l_1003 = &g_87;
                    char l_1009 = 0x46L;
                    (*l_980) = ((void*)0 != l_981);
                    for (g_509 = 0; (g_509 <= 19); g_509 = safe_add_func_uint32_t_u_u(g_509, 6))
                    {
                        int **l_984[9][4] = {{&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}, {&l_945, &l_980, (void*)0, &l_980}};
                        int i, j;
                        l_945 = &l_8;
                        (*l_980) = (*l_944);
                        l_980 = &l_955;
                        if (p_5)
                            continue;
                    }
                    if ((safe_mod_func_int16_t_s_s((((((*l_980) = (+(p_4 && 0xDDC94753L))) == ((*l_944) ^ (l_987 != l_988))) != ((*l_944) != (l_970 = (p_5 < p_5)))) & p_5), 5L)))
                    {
                        unsigned short l_994[2];
                        unsigned char **l_999 = &g_129;
                        unsigned char ***l_1001[9][9][1] = {{{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}, {{&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}, {&g_128}}};
                        int l_1002 = (-7L);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_994[i] = 2UL;
                        (*l_980) = (0x72L > (((&g_493 != l_991) > p_4) <= ((safe_mod_func_int16_t_s_s(p_4, ((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((*l_920) = ((l_999 = &g_129) != (l_1000 = l_1000))), p_5)) ^ (*g_159)), l_1002)) ^ p_5))) != p_4)));
                        l_944 = l_1003;
                    }
                    else
                    {
                        int l_1004 = 0x734D8671L;
                        int l_1005 = 0L;
                        l_1010 = p_5;
                    }
                    for (g_233 = 0; (g_233 == 5); ++g_233)
                    {
                        (*l_1003) = ((p_5 & p_4) ^ p_5);
                    }
                }
                for (g_912 = 29; (g_912 < 40); g_912 = safe_add_func_int8_t_s_s(g_912, 1))
                {
                    int *l_1015 = &l_949[3];
                    char *l_1020 = &l_976;
                    l_1015 = &l_970;
                    (*l_1015) = ((((safe_lshift_func_int8_t_s_u(((*l_920) = 0x82L), 2)) <= (safe_rshift_func_int8_t_s_s(((*l_1020) = 0x2BL), func_43(p_5)))) | (+p_5)) > ((!l_1021) >= 0x62L));
                }
                (*l_1035) = func_23(((*l_1022) = g_81[2]), &l_948, ((**l_1000) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(p_5, ((*g_159) = (safe_sub_func_int16_t_s_s(p_5, l_948))))), l_1034))), p_5);
                if ((!0xA259DC4DL))
                {
                    unsigned l_1039 = 0xB6770749L;
                    int *l_1040 = &l_948;
                    for (l_8 = 0; (l_8 >= (-11)); l_8 = safe_sub_func_uint16_t_u_u(l_8, 4))
                    {
                        short l_1038 = 1L;
                        l_1039 = l_1038;
                    }
                    (*l_1035) = l_1040;
                }
                else
                {
                    unsigned short **l_1052 = &g_956;
                    int l_1057 = (-6L);
                    if ((safe_mod_func_int32_t_s_s((p_4 || ((l_1043 = ((*l_1035) = (void*)0)) == &l_949[2])), (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((*l_944) <= (+(safe_lshift_func_uint8_t_u_u((l_1052 != &g_956), 1)))), p_5)) | ((-5L) == (p_4 & 0xFC05L))), p_5)), p_4)))))
                    {
                        short l_1053[8][3] = {{(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}, {(-1L), 0x6BFCL, 0x1651L}};
                        int *l_1058 = &l_949[2];
                        int i, j;
                        l_1053[0][2] = (((((*l_911) = 65529UL) == p_4) <= func_43(p_5)) < 1L);
                        g_1054 = &g_384[6];
                        (*l_1058) = (safe_lshift_func_int8_t_s_u(l_1057, p_5));
                        (*l_1058) = p_4;
                    }
                    else
                    {
                        int l_1059 = 6L;
                        l_1059 = p_5;
                    }
                    l_8 = (l_1060 = p_5);
                    (*l_1035) = (void*)0;
                }
            }
            else
            {
                int **l_1061[3][6][8] = {{{(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}}, {{(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}}, {{(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}, {(void*)0, &l_945, &l_944, &l_944, (void*)0, &l_980, &g_114, &g_114}}};
                int i, j, k;
                l_944 = (void*)0;
                for (p_5 = 0; (p_5 <= 9); p_5 += 1)
                {
                    int l_1066 = 0L;
                    int ***l_1068 = &l_1061[1][4][4];
                    int *l_1075 = (void*)0;
                    char **l_1077 = &g_229[2][0];
                    char ***l_1076 = &l_1077;
                    int i;
                    (*l_980) = (safe_lshift_func_uint8_t_u_s((g_81[p_5] <= (((*g_159) = 0x401DA064L) & p_4)), 2));
                    l_1075 = func_23((safe_rshift_func_int8_t_s_u((l_1066 = ((*l_1032) = p_4)), (((*l_991) = l_1067) == l_1068))), &l_955, ((*g_129) = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((*l_945), ((*l_945) || p_5))), p_4)) <= (g_81[p_5] = p_5)), (*l_980)))), p_5);
                    (*l_1076) = &g_229[0][9];
                    for (l_1008 = 0; (l_1008 >= 0); l_1008 -= 1)
                    {
                        unsigned char l_1078 = 1UL;
                        l_1078 = 0xCBA94B69L;
                    }
                }
                l_980 = &l_955;
                l_1080 = p_5;
            }
            (*l_1082) = l_1081;
        }
        else
        {
            int ****l_1090[5][7] = {{&l_1067, &l_1067, &g_495, &l_1067, &l_1067, &l_1067, &g_495}, {&l_1067, &l_1067, &g_495, &l_1067, &l_1067, &l_1067, &g_495}, {&l_1067, &l_1067, &g_495, &l_1067, &l_1067, &l_1067, &g_495}, {&l_1067, &l_1067, &g_495, &l_1067, &l_1067, &l_1067, &g_495}, {&l_1067, &l_1067, &g_495, &l_1067, &l_1067, &l_1067, &g_495}};
            int l_1111 = (-5L);
            int i, j;
            (*l_980) = (0xAA22L & (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(p_5)), (+(safe_add_func_int8_t_s_s(((*l_1032) = p_4), (*g_129)))))));
            (*l_1081) = (((*l_1032) = (-5L)) < (safe_add_func_uint8_t_u_u(((*l_991) != (g_493 = &g_113[1][6][1])), p_5)));
            for (l_948 = 0; (l_948 <= 25); l_948 = safe_add_func_uint16_t_u_u(l_948, 7))
            {
                unsigned l_1099 = 0x137FF4E2L;
                int **l_1110 = &l_1081;
                unsigned **l_1127[6][1][2];
                int l_1131 = 1L;
                unsigned char l_1132[4];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1127[i][j][k] = &g_384[3];
                    }
                }
                for (i = 0; i < 4; i++)
                    l_1132[i] = 0xE3L;
            }
        }
    }
    else
    {
        unsigned short l_1135[6][7] = {{65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}, {65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}, {65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}, {65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}, {65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}, {65531UL, 1UL, 0xCD13L, 0x3C14L, 0xCD13L, 1UL, 65531UL}};
        int *****l_1143 = (void*)0;
        int *l_1181 = &l_8;
        int l_1187[5][9][5] = {{{(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}}, {{(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}}, {{(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}}, {{(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}}, {{(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}, {(-3L), 0xADA4671CL, 3L, (-1L), (-2L)}}};
        short *l_1188 = &g_348;
        int l_1203[3][8] = {{0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L}, {0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L}, {0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L, 0x66788C3CL, 0x25216EA3L, 0x25216EA3L}};
        unsigned short **l_1233[7][7][5] = {{{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}, {{&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}, {&l_911, &l_911, &l_911, (void*)0, &g_956}}};
        unsigned short l_1241 = 0xF0FAL;
        unsigned ****l_1295 = (void*)0;
        unsigned char l_1299 = 6UL;
        int i, j, k;
        (*l_1081) = (func_43((p_5 < 0x58FDBEECL)) && (safe_lshift_func_int16_t_s_s(p_5, ((*l_1081) != ((*g_159) = l_1135[0][1])))));
        if (((safe_lshift_func_int8_t_s_u(((*l_1032) = (l_1138[1] != l_1138[3])), (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((0L == (((*l_1081) = ((*g_159) = (l_1143 != &l_991))) || ((*g_159) = (*g_159)))), p_4)) <= p_4), p_5)))) == 65529UL))
        {
            int *l_1144 = &g_20;
            int ***l_1159 = &g_113[4][4][1];
            l_1144 = l_1144;
            for (g_912 = 0; (g_912 <= 20); g_912 = safe_add_func_int32_t_s_s(g_912, 9))
            {
                unsigned char l_1147 = 0x5FL;
                int l_1150 = 0x80311ECAL;
                if (p_5)
                {
                    l_1147 = 0xEE075184L;
                }
                else
                {
                    (*l_1144) = (safe_lshift_func_int16_t_s_s(p_4, (l_1150 = 0x2ECEL)));
                }
                for (g_93 = (-12); (g_93 >= 19); g_93++)
                {
                    unsigned short *l_1155 = (void*)0;
                    unsigned short *l_1156 = (void*)0;
                    int l_1160 = 0x58C95F0EL;
                    int *l_1174 = &l_1150;
                    int *l_1175[3][1][2] = {{{&g_87, &g_87}}, {{&g_87, &g_87}}, {{&g_87, &g_87}}};
                    int **l_1176 = (void*)0;
                    int **l_1177 = &g_1121;
                    int i, j, k;
                }
            }
        }
        else
        {
            int *l_1183 = &g_2;
            int **l_1184 = &g_1121;
            for (g_87 = 0; (g_87 > 29); ++g_87)
            {
                int **l_1182 = &g_1121;
                (*l_1182) = l_1181;
                (*l_1182) = l_1183;
                return p_5;
            }
            (*l_1184) = l_1183;
        }
        l_1172 = func_60((safe_rshift_func_uint8_t_u_s((((*l_911) = (~(p_5 < l_1187[2][8][1]))) < (!((*l_1188) = ((*l_1181) = (l_1143 != &l_991))))), ((void*)0 == l_1189))), p_4);
        if ((*g_1121))
        {
            int **l_1190 = &l_1172;
            (*l_1181) = 0xAFE60C8CL;
            (*l_1190) = (void*)0;
            (*l_1190) = (void*)0;
        }
        else
        {
            int **l_1207 = (void*)0;
            unsigned l_1212 = 0xE4D5D09FL;
            unsigned char l_1220 = 0UL;
            int *l_1223 = (void*)0;
            unsigned ***l_1224 = &g_158;
            unsigned short **l_1236 = &g_956;
            unsigned l_1237 = 0UL;
            unsigned short l_1240 = 0x69C2L;
            int *l_1265 = &g_796;
            int *l_1270 = &g_20;
            unsigned l_1278 = 7UL;
            for (p_4 = 0; (p_4 <= 7); p_4 += 1)
            {
                unsigned l_1194 = 0x3FC71D40L;
                int *l_1200 = &l_1187[2][8][1];
                int **l_1209[1][1][8] = {{{&l_945, &g_1121, &l_945, &g_1121, &l_945, &g_1121, &l_945, &g_1121}}};
                int i, j, k;
                for (g_348 = 0; (g_348 <= 4); g_348 += 1)
                {
                    unsigned short l_1195 = 0xD999L;
                    int **l_1204 = &g_1121;
                    int i;
                    for (g_455 = 0; (g_455 <= 4); g_455 += 1)
                    {
                        int l_1191 = 0xAAAAE53AL;
                        int i, j, k;
                        if (l_1191)
                            break;
                    }
                    (*l_1181) = (safe_rshift_func_int16_t_s_s(l_1194, l_1195));
                    for (l_1195 = 0; (l_1195 <= 4); l_1195 += 1)
                    {
                        char *l_1196 = &g_363[4];
                        unsigned *l_1197 = (void*)0;
                        unsigned *l_1198 = &g_233;
                        int **l_1199 = &l_1181;
                    }
                    (*l_1204) = func_60(((g_384[p_4] = func_23((safe_mod_func_int8_t_s_s(((*g_159) == (!func_43(p_4))), (-9L))), l_1200, l_1203[2][5], p_4)) == l_1200), p_5);
                    for (g_102 = 0; (g_102 <= 4); g_102 += 1)
                    {
                        short l_1205 = 0L;
                        return l_1205;
                    }
                }
                for (g_852 = 7; (g_852 >= 1); g_852 -= 1)
                {
                    int **l_1206[3];
                    int ***l_1208 = &g_113[3][3][1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1206[i] = &g_114;
                    (*l_1181) = (l_1206[0] == (l_1209[0][0][7] = l_1207));
                    for (g_509 = 0; (g_509 <= 5); g_509 += 1)
                    {
                        int i, j, k;
                        l_1181 = (void*)0;
                        (*l_1081) = ((safe_unary_minus_func_int16_t_s((-1L))) ^ p_4);
                        l_1181 = &l_8;
                        if (l_1211)
                            break;
                    }
                }
            }
            if (((p_5 ^ func_43((p_4 = (l_1212 && (p_4 == (safe_add_func_int32_t_s_s(g_1215, ((((p_5 != (safe_lshift_func_uint16_t_u_s(p_4, l_1220))) && p_5) ^ p_5) >= p_4)))))))) > p_5))
            {
                int *l_1221 = &l_1187[2][8][1];
                int **l_1222[10] = {&l_1181, &l_1181, &l_1081, &l_1181, &l_1181, &l_1081, &l_1181, &l_1181, &l_1081, &l_1181};
                int i;
                l_1223 = (l_1172 = l_1221);
                for (g_455 = 1; (g_455 <= 4); g_455 += 1)
                {
                    unsigned l_1225 = 4294967295UL;
                    int *l_1227 = &g_796;
                    for (g_93 = 1; (g_93 >= 0); g_93 -= 1)
                    {
                        int *l_1226 = &g_20;
                        int i, j;
                        (*l_1181) = ((*l_1221) = ((0L && (((void*)0 != l_1224) || 1L)) & g_676[g_455][g_93]));
                        l_1226 = func_60(p_5, l_1225);
                        l_1227 = l_1227;
                    }
                    for (g_754 = 0; (g_754 <= 4); g_754 += 1)
                    {
                        return p_5;
                    }
                }
            }
            else
            {
                unsigned char l_1232 = 0x72L;
                unsigned short ***l_1234 = (void*)0;
                unsigned short ***l_1235 = &l_1233[0][1][0];
                unsigned char ***l_1246[8][9][2] = {{{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}, {{(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}, {(void*)0, &g_128}}};
                int **l_1262 = (void*)0;
                int i, j, k;
                if ((safe_add_func_int16_t_s_s(((void*)0 != &l_1135[0][1]), p_4)))
                {
                    int l_1245 = 1L;
                    unsigned char **l_1248 = &g_129;
                    int l_1259[2][6] = {{2L, 0xB1A283FEL, 2L, 0xB1A283FEL, 2L, 0xB1A283FEL}, {2L, 0xB1A283FEL, 2L, 0xB1A283FEL, 2L, 0xB1A283FEL}};
                    int **l_1263[8] = {&l_1181, &g_1121, &l_1181, &g_1121, &l_1181, &g_1121, &l_1181, &g_1121};
                    int i, j;
                    if (((*l_1081) = (safe_add_func_int32_t_s_s(p_4, ((*l_1181) | (p_5 == ((p_5 <= 0xE3L) == p_5)))))))
                    {
                        short l_1244[2][7][7] = {{{0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}}, {{0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}, {0x963CL, 5L, 0x963CL, (-1L), 1L, 0L, 0xD8E3L}}};
                        unsigned char **l_1247 = &g_129;
                        int ***l_1249[7][4][4] = {{{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}, {{&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}, {&l_1207, &g_113[1][6][1], &l_1207, &g_113[5][4][3]}}};
                        int i, j, k;
                        (*l_945) = (p_4 >= 1L);
                        (*l_1181) = (p_4 <= (l_1244[1][5][0] == ((*g_159) || l_1232)));
                        (*l_1181) = (l_1246[4][4][0] == (void*)0);
                        (*l_945) = ((&g_129 == (l_1248 = l_1247)) == ((-1L) != ((l_1249[5][0][2] == &g_113[3][4][4]) || ((safe_unary_minus_func_uint16_t_u(p_4)) || l_1245))));
                    }
                    else
                    {
                        int **l_1251[4][1] = {{&g_114}, {&g_114}, {&g_114}, {&g_114}};
                        unsigned ***l_1254 = &g_158;
                        int i, j;
                        l_1181 = &l_1245;
                        (*l_1081) = ((safe_mod_func_uint32_t_u_u((l_1254 != l_1224), ((*g_159) = (l_1232 | p_5)))) | (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((void*)0 == &g_113[3][4][1]), (*l_1181))), (l_1259[0][2] = 0xFD7CL))));
                    }
                    l_1245 = (safe_add_func_int16_t_s_s(p_4, l_1245));
                    for (g_20 = 8; (g_20 >= 2); g_20 -= 1)
                    {
                        (**l_991) = l_1262;
                    }
                    l_1223 = &l_1259[0][4];
                }
                else
                {
                    unsigned char l_1264 = 0x30L;
                    (*l_1181) = ((l_1264 = p_4) ^ 5L);
                    return p_5;
                }
                l_1265 = &l_8;
                for (p_4 = 25; (p_4 >= 58); p_4 = safe_add_func_int8_t_s_s(p_4, 7))
                {
                    char l_1279 = (-8L);
                    int *l_1282 = (void*)0;
                    for (g_348 = 0; (g_348 > 0); g_348++)
                    {
                        int **l_1271[6][5] = {{(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}, {(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}, {(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}, {(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}, {(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}, {(void*)0, &l_1223, (void*)0, &l_1223, (void*)0}};
                        int i, j;
                        l_1270 = l_1270;
                        l_1081 = (void*)0;
                    }
                    (*l_1265) = ((*l_1270) = ((safe_rshift_func_uint16_t_u_s(p_5, (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((*g_129) = ((p_4 ^ p_4) != (l_1270 == (l_1282 = l_1282)))), p_4)) >= 0x28L), l_1232)))) && (*l_945)));
                }
            }
            for (p_5 = 1; (p_5 < (-2)); p_5 = safe_sub_func_uint32_t_u_u(p_5, 1))
            {
                int *l_1288 = &g_20;
                unsigned ****l_1294 = &l_1224;
                unsigned char l_1302 = 1UL;
                unsigned l_1304 = 3UL;
                int l_1305 = (-2L);
                for (l_1113 = 0; (l_1113 == (-5)); l_1113--)
                {
                    int *l_1287[1];
                    int **l_1289[3][5] = {{&l_1223, &l_1287[0], &l_1223, &l_1223, &l_1287[0]}, {&l_1223, &l_1287[0], &l_1223, &l_1223, &l_1287[0]}, {&l_1223, &l_1287[0], &l_1223, &l_1223, &l_1287[0]}};
                    unsigned *****l_1296 = (void*)0;
                    unsigned *****l_1297 = (void*)0;
                    unsigned *****l_1298[4][7][1] = {{{&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}}, {{&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}}, {{&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}}, {{&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}, {&l_1295}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1287[i] = (void*)0;
                    l_1172 = l_1288;
                }
                return p_4;
            }
        }
    }
    if (p_4)
    {
        unsigned l_1315 = 0UL;
        char l_1316 = (-1L);
        int *l_1317 = (void*)0;
        int *l_1318[2][6][6] = {{{&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}}, {{&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}, {&g_87, &l_8, &g_2, &g_87, &g_87, &l_8}}};
        int i, j, k;
        l_1316 = l_1315;
        l_8 = p_5;
    }
    else
    {
        int l_1323[6][8][4] = {{{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}, {{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}, {{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}, {{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}, {{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}, {{(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}, {(-1L), 0xAC708AEDL, 1L, 0xAC708AEDL}}};
        int l_1325 = 2L;
        int i, j, k;
        for (g_79 = 0; (g_79 != 13); g_79 = safe_add_func_int32_t_s_s(g_79, 6))
        {
            short l_1324 = (-1L);
            int *l_1326 = &g_87;
            int **l_1327 = (void*)0;
            int **l_1328 = &g_1121;
            (*l_1326) = (((((0x6A0DL > (l_1323[1][4][3] = (safe_rshift_func_uint16_t_u_u(p_5, 13)))) | (l_1324 | (((void*)0 != &l_1138[1]) >= l_1324))) ^ l_1325) | (-1L)) & 4294967295UL);
            l_1325 = ((*l_1326) = (*l_1326));
            (*l_1328) = &l_1325;
        }
    }
    l_1172 = func_60(l_1329, (safe_rshift_func_int16_t_s_s(((!(~p_5)) == (-1L)), ((*l_1334) = ((*l_917) == (g_1333 = (*l_917)))))));
    (*g_271) = (*g_271);
    return p_5;
}







static unsigned func_9(int p_10, unsigned short p_11)
{
    unsigned l_17 = 0x7E7C14ABL;
    short ***l_766[8];
    short ****l_765 = &l_766[2];
    int l_799 = 0xC5B4AA8DL;
    unsigned short l_818 = 0xA661L;
    int *l_830 = &l_799;
    int *l_851 = &g_20;
    int l_891 = (-1L);
    int **l_906 = &l_830;
    int i;
    for (i = 0; i < 8; i++)
        l_766[i] = &g_178;
    if (g_2)
    {
        unsigned short l_763[1][7][5] = {{{0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}, {0x6691L, 0x156DL, 0x6691L, 0xAD2CL, 65535UL}}};
        int l_764 = 0x63DDFFCFL;
        short ****l_767 = &l_766[2];
        int *l_770 = &g_20;
        int *l_777 = &l_764;
        short l_806 = 5L;
        unsigned short *l_809 = &l_763[0][6][2];
        unsigned short **l_808 = &l_809;
        int **l_850[4];
        int *l_854 = &g_20;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_850[i] = &l_770;
        l_764 = (func_15(l_17) | l_763[0][6][3]);
        if (l_763[0][6][3])
        {
            p_10 = (l_765 != l_767);
        }
        else
        {
            int *l_772 = (void*)0;
            int *l_794 = (void*)0;
            int *l_795 = &g_796;
            unsigned short *l_797 = &g_287[1];
            unsigned char *l_798 = &g_754;
            char l_843 = 8L;
            unsigned short l_846 = 0xBBC8L;
            unsigned *l_849 = &g_233;
            for (g_754 = (-19); (g_754 != 29); g_754++)
            {
                int *l_771 = (void*)0;
                int ****l_782[7][8] = {{&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}, {&g_495, (void*)0, &g_493, (void*)0, &g_495, &g_495, &g_495, (void*)0}};
                unsigned short l_783 = 0UL;
                int i, j;
                l_770 = &l_764;
                l_772 = l_771;
                (*l_770) = ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_10 == p_11), ((func_56(l_777, (safe_mod_func_uint32_t_u_u(p_11, (safe_add_func_int8_t_s_s((*l_777), 3L)))), ((&g_113[1][6][1] != (g_495 = &g_113[1][6][1])) ^ (*g_114))) || (-1L)) && p_11))), l_783)) != (*g_114));
            }
            if ((safe_rshift_func_uint8_t_u_s((p_10 < ((**g_158) = func_15((*l_770)))), (l_799 = (~(safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(0xACL)), (p_11 ^ ((*l_798) = (safe_sub_func_uint32_t_u_u(((l_17 < (((*l_795) = p_10) > (!l_17))) & ((((*l_797) = l_17) && l_17) < (*g_129))), p_10)))))) <= p_11))) || p_11), p_11)))))))
            {
                unsigned short *l_807 = &g_119;
                char *l_810 = &g_363[2];
                (*l_770) = (func_15((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*l_770) = p_10), ((!(((safe_mod_func_uint16_t_u_u(p_10, ((*l_807) = ((*l_797) = l_806)))) && (l_808 != ((*g_577) = &l_807))) | (((*l_810) = l_17) ^ (g_81[9] < ((**l_808) = p_10))))) <= ((*l_808) != &g_676[4][1])))), p_11)) && (-2L)) != p_11)) || (***g_270));
            }
            else
            {
                int **l_811 = &l_794;
                unsigned l_824 = 4294967286UL;
                for (g_702 = 0; (g_702 <= 5); g_702 += 1)
                {
                    return (*g_159);
                }
                (*l_811) = &p_10;
                for (p_10 = 0; (p_10 > (-5)); --p_10)
                {
                    char l_816 = 0x40L;
                    int *l_819[1];
                    int l_820[1][6] = {{0xE6AF8F5EL, 0x7772CF8AL, 0xE6AF8F5EL, 0x7772CF8AL, 0xE6AF8F5EL, 0x7772CF8AL}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_819[i] = &g_662;
                    for (g_79 = 28; (g_79 != 4); g_79--)
                    {
                        char l_817 = 0xE3L;
                        (*l_777) = l_816;
                        l_799 = (~((*l_795) = l_817));
                        if (l_818)
                            break;
                        return (*g_159);
                    }
                    (*l_770) = ((p_11 | ((**l_811) | p_10)) & p_11);
                    for (g_233 = (-9); (g_233 == 21); g_233 = safe_add_func_int8_t_s_s(g_233, 4))
                    {
                        (*l_811) = &p_10;
                    }
                }
            }
            for (g_20 = 1; (g_20 != (-26)); --g_20)
            {
                int *l_831 = &l_799;
                short ***l_836 = &g_178;
                for (p_11 = 0; (p_11 <= 0); p_11 += 1)
                {
                    int **l_829[3][3][4] = {{{&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}}, {{&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}}, {{&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}, {&l_795, (void*)0, &g_114, &l_772}}};
                    short ***l_837 = &g_821;
                    int i, j, k;
                    l_799 = (g_287[(p_11 + 2)] < ((*l_809) = (*l_777)));
                    l_830 = (l_772 = &p_10);
                    l_777 = &p_10;
                    l_831 = &p_10;
                    for (l_806 = 0; (l_806 >= 0); l_806 -= 1)
                    {
                        unsigned short *l_840 = (void*)0;
                        unsigned short *l_841 = &g_702;
                        int *l_842 = &g_662;
                        int i, j, k;
                    }
                }
            }
            (*l_770) = func_43(func_34(((func_56(&l_764, l_843, (((*l_795) = ((*g_159) = (((p_10 == p_10) | (safe_rshift_func_uint8_t_u_s(l_846, 7))) >= (safe_rshift_func_uint8_t_u_u(p_11, ((void*)0 != l_849)))))) & p_10)) && (*l_770)) & 1L), &g_20, l_795));
        }
        l_851 = (l_830 = &p_10);
        for (g_509 = 0; (g_509 <= 3); g_509 += 1)
        {
            unsigned **l_875 = &g_384[6];
            unsigned *l_885[9][10] = {{&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}, {&g_102, (void*)0, &g_455, &l_17, &g_102, &g_102, &g_102, &g_455, &g_102, &g_102}};
            int i, j;
            for (g_119 = 0; g_119 < 1; g_119 += 1)
            {
                for (g_348 = 0; g_348 < 7; g_348 += 1)
                {
                    for (g_152 = 0; g_152 < 5; g_152 += 1)
                    {
                        l_763[g_119][g_348][g_152] = 0x7760L;
                    }
                }
            }
            l_850[g_509] = l_850[g_509];
            if (p_10)
            {
                short l_853 = 0x3906L;
                if (p_11)
                    break;
                if (g_852)
                    break;
                (*l_851) = (+l_853);
                l_851 = l_854;
            }
            else
            {
                unsigned short l_881 = 0UL;
                unsigned char l_892 = 0x57L;
                if (p_10)
                {
                    int *l_855 = &g_20;
                    short *****l_858[10] = {&l_765, &l_767, &l_765, &l_767, &l_765, &l_767, &l_765, &l_767, &l_765, &l_767};
                    unsigned short **l_865[8] = {&l_809, &l_809, &l_809, &l_809, &l_809, &l_809, &l_809, &l_809};
                    unsigned short ****l_870 = &g_577;
                    int *l_876[6] = {(void*)0, &g_152, (void*)0, &g_152, (void*)0, &g_152};
                    int i;
                    l_855 = &l_799;
                    if ((p_10 = ((g_859 = g_856) == &g_857)))
                    {
                        char *l_862 = (void*)0;
                        char *l_863 = (void*)0;
                        char *l_864 = &g_363[4];
                        if (p_11)
                            break;
                        (*l_854) = (safe_rshift_func_uint8_t_u_s(p_10, ((*l_864) = p_10)));
                        (*g_577) = l_865[1];
                        p_10 = 7L;
                    }
                    else
                    {
                        p_10 = (-1L);
                    }
                    (*l_855) = ((*l_851) = (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*l_870) = &l_808) != (void*)0), (((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((p_10 & ((safe_add_func_uint8_t_u_u(p_10, 0x35L)) || (*l_851))) > 1L), (*l_854))), p_11)) == 65535UL) & p_11))), 5)));
                    if ((*l_830))
                    {
                        l_855 = (void*)0;
                    }
                    else
                    {
                        return p_10;
                    }
                }
                else
                {
                    int *l_886 = &g_20;
                    l_851 = func_23((p_11 || (p_11 ^ (safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u((2L >= ((*g_129) = p_11)), (l_881 >= ((void*)0 != l_885[0][9])))))))), l_886, ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((p_10 == p_11) | p_11) ^ 1L), l_891)), g_676[4][0])) != l_892), (*l_886));
                    l_851 = &p_10;
                }
                if (p_11)
                    break;
                for (p_11 = (-3); (p_11 != 23); p_11++)
                {
                    for (g_455 = 0; (g_455 > 1); g_455 = safe_add_func_int8_t_s_s(g_455, 7))
                    {
                        (*l_851) = p_11;
                    }
                    if (p_10)
                        break;
                    if (p_11)
                        continue;
                }
                l_830 = &p_10;
            }
        }
    }
    else
    {
        int l_903[4][5][3] = {{{0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}}, {{0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}}, {{0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}}, {{0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}, {0L, 1L, 1L}}};
        int *l_910 = &l_903[0][1][0];
        int i, j, k;
        for (g_754 = 0; (g_754 <= 4); g_754 += 1)
        {
            int l_899 = 0xFEC0ADBDL;
            int *l_901 = &l_891;
            int i;
        }
    }
    return (*g_159);
}







static unsigned char func_15(int p_16)
{
    char l_199 = (-2L);
    unsigned short *l_748 = &g_119;
    int l_749 = (-1L);
    int *l_750 = (void*)0;
    int l_751 = (-9L);
    int *l_752 = (void*)0;
    int *l_753[5][8] = {{&l_751, &l_751, &g_152, (void*)0, (void*)0, (void*)0, &g_152, &l_751}, {&l_751, &l_751, &g_152, (void*)0, (void*)0, (void*)0, &g_152, &l_751}, {&l_751, &l_751, &g_152, (void*)0, (void*)0, (void*)0, &g_152, &l_751}, {&l_751, &l_751, &g_152, (void*)0, (void*)0, (void*)0, &g_152, &l_751}, {&l_751, &l_751, &g_152, (void*)0, (void*)0, (void*)0, &g_152, &l_751}};
    int i, j;
    for (p_16 = 0; (p_16 >= 9); p_16 = safe_add_func_int8_t_s_s(p_16, 6))
    {
        char l_198 = 0xA7L;
        int *l_200 = &g_20;
        for (g_20 = (-15); (g_20 == (-11)); g_20++)
        {
            int *l_42 = &g_20;
        }
    }
    (*g_114) = (251UL || (*g_129));
    for (g_87 = 0; (g_87 != 15); g_87 = safe_add_func_int16_t_s_s(g_87, 8))
    {
        unsigned short l_759 = 65531UL;
        int **l_761 = (void*)0;
        int **l_762 = &l_753[2][0];
        for (g_152 = (-25); (g_152 != 10); ++g_152)
        {
            char l_760 = 1L;
            l_760 = l_759;
            return l_760;
        }
        (*g_114) = (((*l_762) = &g_152) == (l_752 = &l_751));
    }
    return (*g_129);
}







static int * func_23(int p_24, int * p_25, unsigned char p_26, unsigned p_27)
{
    unsigned short *l_734 = &g_287[3];
    unsigned short **l_733 = &l_734;
    int *l_735[3][10];
    int **l_736 = &g_114;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
            l_735[i][j] = &g_20;
    }
    (*l_736) = func_60(p_24, (((void*)0 == l_733) | (p_25 != (l_735[2][2] = l_735[2][2]))));
    for (g_233 = 9; (g_233 <= 2); g_233 = safe_sub_func_int32_t_s_s(g_233, 6))
    {
        unsigned l_739 = 4294967288UL;
        if ((*p_25))
            break;
        l_739 = (-10L);
    }
    return (*l_736);
}







static char func_34(unsigned char p_35, int * p_36, int * p_37)
{
    int l_203 = 5L;
    int *l_223 = &g_87;
    int l_234 = (-1L);
    unsigned ***l_268 = &g_158;
    int l_299[7][4][2] = {{{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}, {{0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}, {0x3FB13B51L, 1L}}};
    int l_317 = 0xDAA46021L;
    unsigned **l_347 = &g_159;
    int l_372 = 8L;
    int *l_401 = &g_2;
    unsigned char l_420 = 7UL;
    int l_421 = 0xAB8A858FL;
    unsigned l_444 = 0UL;
    int l_462 = (-1L);
    unsigned char ***l_475 = &g_128;
    int ***l_494 = &g_113[1][6][1];
    unsigned char l_503 = 255UL;
    unsigned l_552[5];
    int ****l_560 = &g_493;
    unsigned char l_607 = 0xD9L;
    unsigned l_636[8];
    int l_666 = (-3L);
    unsigned char **l_696 = (void*)0;
    short l_732 = 1L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_552[i] = 0UL;
    for (i = 0; i < 8; i++)
        l_636[i] = 0xFC5739F1L;
    if ((safe_sub_func_int8_t_s_s(l_203, func_43(l_203))))
    {
        unsigned char l_204 = 247UL;
        short *l_211 = &g_81[2];
        unsigned short *l_212 = &g_119;
        unsigned **l_214[8][5][6] = {{{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}, {{&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}, {&g_159, &g_159, &g_159, &g_159, (void*)0, &g_159}}};
        int l_218 = 0x1DC01494L;
        char *l_230 = &g_93;
        short l_321 = 0x80ECL;
        unsigned short *l_339 = (void*)0;
        unsigned short *l_340 = &g_287[2];
        int *l_341 = &l_234;
        int *l_342 = &g_2;
        int i, j, k;
        if ((0x75DFA5EDL >= (l_204 || ((l_203 >= (safe_sub_func_uint16_t_u_u(((*l_212) = (((*g_159) = ((safe_mod_func_uint16_t_u_u(((((*g_129) & ((((l_204 != 9UL) ^ (0x9387172BL || (253UL >= (((*l_211) = p_35) <= l_203)))) ^ 0x34FC8B02L) == 0x9B6FL)) > 0x31D11E76L) | 0x28L), 0xF057L)) <= 0L)) > 4294967291UL)), g_152))) <= p_35))))
        {
            int **l_213 = &g_114;
            unsigned ***l_215 = (void*)0;
            unsigned ***l_216 = &g_158;
            int *l_217[4][5] = {{&g_87, &g_20, &g_87, &g_20, &g_87}, {&g_87, &g_20, &g_87, &g_20, &g_87}, {&g_87, &g_20, &g_87, &g_20, &g_87}, {&g_87, &g_20, &g_87, &g_20, &g_87}};
            int *l_221 = (void*)0;
            char *l_228 = &g_93;
            short *l_231 = (void*)0;
            int i, j;
            (*l_213) = (void*)0;
            (*l_216) = l_214[7][2][1];
            l_218 = (*p_37);
            for (l_204 = 2; (l_204 <= 42); l_204++)
            {
                short l_222 = 0xE3D4L;
                unsigned *l_232 = &g_233;
                (*l_213) = l_221;
                if (((l_222 & func_43(((*l_232) = (p_35 <= p_35)))) == (*p_37)))
                {
                    l_234 = ((*l_223) = 0xE48052E4L);
                    (*l_223) = (~(p_35 && (l_232 == (void*)0)));
                }
                else
                {
                    int *l_235 = (void*)0;
                    (*l_213) = (*l_213);
                    (*l_213) = l_235;
                }
                if (l_222)
                    break;
                for (g_79 = 0; (g_79 <= 40); g_79++)
                {
                    int *l_238[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_238[i] = &g_87;
                    l_238[0] = p_36;
                    if ((*l_223))
                        continue;
                }
            }
        }
        else
        {
            int **l_239 = (void*)0;
            int **l_240[7] = {(void*)0, (void*)0, &l_223, (void*)0, (void*)0, &l_223, (void*)0};
            int i;
            l_223 = (void*)0;
            for (g_152 = 4; (g_152 >= 0); g_152 -= 1)
            {
                unsigned l_241[10][7][3] = {{{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}, {{0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}, {0xD3E18D8DL, 0xFDC69A44L, 0x199A5BFFL}}};
                int *l_243 = &g_2;
                int i, j, k;
                for (g_233 = 0; (g_233 <= 5); g_233 += 1)
                {
                    int l_242 = 0xD39F2E5EL;
                    if (l_241[5][3][1])
                        break;
                    return l_242;
                }
                p_37 = l_243;
                for (l_203 = 0; (l_203 <= 4); l_203 += 1)
                {
                    int l_253 = 0L;
                    unsigned char *l_254 = (void*)0;
                    for (g_93 = 0; (g_93 <= 4); g_93 += 1)
                    {
                        int l_244 = (-7L);
                        int i, j, k;
                        p_37 = p_37;
                        l_244 = (p_35 & 0x8B56L);
                        return (*l_243);
                    }
                    for (l_204 = 0; (l_204 <= 4); l_204 += 1)
                    {
                        unsigned short **l_245 = &l_212;
                        int l_246 = 0x1D60E98CL;
                        l_246 = (func_43((p_35 & ((*l_243) ^ (+(+(((*l_245) = l_211) != &g_119)))))) == p_35);
                        p_36 = func_60((safe_lshift_func_uint16_t_u_u(65529UL, (safe_lshift_func_uint16_t_u_u(l_218, p_35)))), (((0xB03ED47FL > ((safe_rshift_func_uint16_t_u_u((l_253 == (((void*)0 != l_254) < (2L && p_35))), p_35)) & 4294967292UL)) || p_35) > p_35));
                    }
                }
            }
            l_234 = func_45((*g_159), p_35);
        }
        for (g_119 = (-10); (g_119 >= 26); g_119 = safe_add_func_uint16_t_u_u(g_119, 8))
        {
            int *l_259 = (void*)0;
            int l_275 = (-1L);
            int l_305 = 0x6010A2E0L;
            int *l_306 = &l_305;
            unsigned short l_326 = 0x7EABL;
            for (g_233 = 0; (g_233 <= 2); g_233 = safe_add_func_int16_t_s_s(g_233, 2))
            {
                int **l_260[4] = {&l_259, &l_223, &l_259, &l_223};
                int ***l_263 = &g_113[1][6][1];
                int i;
                l_259 = (l_223 = l_259);
                l_218 = (safe_rshift_func_uint8_t_u_s((&g_114 != ((*l_263) = &p_37)), 5));
            }
            for (g_102 = 0; (g_102 <= 9); g_102 += 1)
            {
                short l_266 = 0x4792L;
                int **l_273[6][9][2] = {{{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}, {{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}, {{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}, {{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}, {{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}, {{&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}, {&l_223, &l_223}}};
                unsigned char l_289[1];
                short l_298[8][1] = {{0x5BF2L}, {0x5BF2L}, {0x5BF2L}, {0x5BF2L}, {0x5BF2L}, {0x5BF2L}, {0x5BF2L}, {0x5BF2L}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_289[i] = 0x34L;
                for (l_234 = 7; (l_234 >= 0); l_234 -= 1)
                {
                    int *l_267 = &l_218;
                    int l_272 = 0xD5F4E809L;
                    int i;
                    (*l_267) = (g_81[l_234] && ((safe_sub_func_int8_t_s_s(p_35, ((*g_159) >= l_266))) ^ g_81[l_234]));
                    for (l_218 = 9; (l_218 >= 0); l_218 -= 1)
                    {
                        unsigned ****l_269[7][6][6] = {{{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}, {{&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}, {&l_268, &l_268, (void*)0, &l_268, &l_268, &l_268}}};
                        int i, j, k;
                        l_272 = ((g_271 = (g_270 = l_268)) == &g_158);
                    }
                    return p_35;
                }
                p_36 = l_259;
                for (g_233 = 0; (g_233 <= 5); g_233 += 1)
                {
                    unsigned short *l_286 = &g_287[1];
                    int l_288 = 0xA70457A3L;
                    for (l_203 = 5; (l_203 >= 0); l_203 -= 1)
                    {
                        int l_274 = 0x773E6724L;
                        int i, j, k;
                        l_275 = l_274;
                    }
                    l_299[6][1][0] = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((*l_211) = p_35), (l_218 = (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((((((*l_286) = 0x131AL) != 0xF7ADL) | (l_234 = l_288)) != l_289[0]) & (safe_mod_func_uint8_t_u_u(((*g_129) = 0xCCL), p_35))), p_35)) <= (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((!(safe_rshift_func_uint16_t_u_s(l_218, 9))) <= p_35), g_93)) >= p_35), p_35))), g_2))))), p_35)), l_298[0][0]));
                    if ((l_214[7][2][1] != (*g_271)))
                    {
                        p_36 = (p_37 = p_37);
                    }
                    else
                    {
                        short *l_304[10] = {&g_81[2], &l_266, &g_81[2], &l_266, &g_81[2], &l_266, &g_81[2], &l_266, &g_81[2], &l_266};
                        int i, j, k;
                        p_37 = func_60(g_81[0], ((-1L) ^ (safe_lshift_func_int16_t_s_s((l_305 = (((*g_129) = p_35) | (safe_rshift_func_int16_t_s_s(p_35, 1)))), 3))));
                        l_306 = &l_234;
                        p_36 = p_36;
                    }
                }
            }
            for (l_204 = (-15); (l_204 < 45); l_204 = safe_add_func_uint16_t_u_u(l_204, 6))
            {
                unsigned char l_324[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_324[i] = 254UL;
                for (g_102 = 0; (g_102 != 59); g_102 = safe_add_func_int8_t_s_s(g_102, 9))
                {
                    int **l_318 = (void*)0;
                    int **l_319 = &l_223;
                    int l_325 = (-5L);
                    l_325 = (safe_mod_func_int8_t_s_s((((*l_306) = (safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(0x1913L, (~(l_317 < 1UL)))) | (((*l_319) = p_37) != p_37)) & l_218), ((safe_unary_minus_func_int32_t_s((l_321 != ((safe_rshift_func_uint16_t_u_s((p_36 != (void*)0), l_324[3])) ^ (-6L))))) == l_321)))) >= 0x35818E4EL), p_35));
                    return l_326;
                }
            }
            for (g_233 = 0; (g_233 != 52); ++g_233)
            {
                return p_35;
            }
        }
        (*l_341) = ((((*l_340) = (((safe_lshift_func_int8_t_s_s(l_321, p_35)) && p_35) >= (((*l_212) = (((0xEACAL < ((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_35, 13)) ^ (0x5CE0L | (~p_35))), g_81[2])), 6)) || g_287[0])) == 1UL) ^ 0UL)) & 0xD00BL))) != 4L) != 0x64L);
        if ((*l_341))
        {
            int **l_343 = &l_342;
            (*l_343) = l_342;
            for (g_79 = 0; (g_79 <= 4); g_79 += 1)
            {
                unsigned **l_346[3][4] = {{&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}};
                int l_349 = 0x88A3AD5CL;
                int i, j;
                l_223 = p_37;
                for (g_152 = 0; (g_152 <= 4); g_152 += 1)
                {
                    int i;
                    l_349 = ((safe_lshift_func_int16_t_s_u((((*g_271) = (*g_270)) != (l_347 = l_346[0][1])), 14)) <= (g_287[g_152] & g_348));
                }
            }
        }
        else
        {
            int l_350 = 0x9561FEEBL;
            int *l_357[1][2][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_357[i][j][k] = (void*)0;
                }
            }
            (*l_341) = (&g_179[6] != (void*)0);
            if (l_350)
            {
                short ***l_351 = &g_178;
                short ***l_353 = (void*)0;
                short ****l_352 = &l_353;
                int **l_354 = &l_223;
                unsigned short **l_356[3][3][9] = {{{&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}}, {{&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}}, {{&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}, {&l_340, &l_212, &l_339, &l_339, &l_212, &l_340, &l_212, &l_339, &l_212}}};
                unsigned short ***l_355 = &l_356[0][2][8];
                int l_371 = (-1L);
                unsigned *l_380 = &g_233;
                int i, j, k;
                (*l_341) = (l_351 != ((*l_352) = (void*)0));
                (*l_354) = p_37;
                (*l_355) = (void*)0;
                if (l_350)
                {
                    int l_370 = 0x0176DA53L;
                    for (l_350 = 0; (l_350 <= 1); l_350 += 1)
                    {
                        (*l_354) = (void*)0;
                    }
                    for (g_93 = 0; (g_93 <= 9); g_93 += 1)
                    {
                        char *l_362 = &g_363[4];
                        int i;
                        (*l_354) = l_357[0][0][0];
                        l_371 = ((safe_rshift_func_int8_t_s_u(((*l_362) = (safe_mod_func_int16_t_s_s((g_81[g_93] = 0xDC84L), p_35))), (((*l_341) = ((safe_add_func_uint32_t_u_u(0x99DE25CFL, ((*g_159) = ((*l_342) == (safe_mod_func_int16_t_s_s(0xBC2AL, p_35)))))) && p_35)) | (-4L)))) > (safe_sub_func_int32_t_s_s(l_370, p_35)));
                    }
                }
                else
                {
                    unsigned char l_373 = 0x4EL;
                    if (((1L ^ (l_373 && (((((*l_211) = ((((g_178 = &l_211) == (void*)0) | p_35) <= (safe_mod_func_int8_t_s_s(func_43((func_43(g_20) > 6UL)), (*l_341))))) | 1L) && 0x11B2B3D2L) && 0x73L))) | (*l_342)))
                    {
                        (*l_354) = (*l_354);
                        (*l_354) = (void*)0;
                    }
                    else
                    {
                        char l_381 = (-1L);
                        unsigned *l_383 = (void*)0;
                        unsigned **l_382[4];
                        short l_389 = 0x87CFL;
                        int l_392 = 8L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_382[i] = &l_383;
                        p_37 = func_60(g_102, func_43((((0xFEL & (((*g_129) = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((-1L) <= (l_380 == (g_384[3] = func_60(((-1L) || (-1L)), l_381)))) < (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_363[1], 0xF30DL)), (*l_341)))), 6)), p_35))) != p_35)) < p_35) <= l_389)));
                        (*l_354) = func_60(l_381, l_373);
                        l_392 = ((*l_341) = (p_35 && (*l_342)));
                    }
                    (*l_341) = 0x905D4C12L;
                }
            }
            else
            {
                return p_35;
            }
        }
    }
    else
    {
        int *l_403 = &l_234;
        unsigned char *l_440 = (void*)0;
        unsigned char *l_441 = &l_420;
        char *l_442 = &g_363[4];
        int l_443 = 0x79C11E29L;
        int l_476 = 0x8381D5C7L;
        int *l_486[4];
        int ***l_491 = (void*)0;
        int l_510 = (-2L);
        int l_620 = 9L;
        char l_623 = 9L;
        unsigned ***l_649 = &g_158;
        unsigned ***l_650 = &g_158;
        unsigned l_657[7] = {4294967292UL, 0x23CF1791L, 4294967292UL, 0x23CF1791L, 4294967292UL, 0x23CF1791L, 4294967292UL};
        int *l_681 = &l_666;
        short **l_704 = &g_179[8];
        unsigned short *l_722 = &g_702;
        unsigned short *l_723[7] = {&g_119, &g_119, (void*)0, &g_119, &g_119, (void*)0, &g_119};
        int i;
        for (i = 0; i < 4; i++)
            l_486[i] = (void*)0;
        for (g_79 = (-23); (g_79 == 5); g_79 = safe_add_func_uint8_t_u_u(g_79, 7))
        {
            int **l_395 = (void*)0;
            int **l_396[6] = {&g_114, &g_114, &g_114, &g_114, &g_114, &g_114};
            unsigned l_408 = 0x0914B85FL;
            int *l_410 = &l_299[3][3][0];
            int i;
            p_36 = p_36;
            for (l_203 = 1; (l_203 >= 0); l_203 -= 1)
            {
                int *l_402 = &g_87;
                int l_407 = (-2L);
                int i;
            }
            for (g_93 = 0; (g_93 < 0); g_93 = safe_add_func_uint16_t_u_u(g_93, 6))
            {
                int *l_425 = &g_87;
                (*l_410) = (p_35 != (safe_unary_minus_func_uint8_t_u(p_35)));
                l_425 = (p_37 = p_36);
                p_37 = (p_36 = l_403);
                if ((*l_223))
                {
                    int l_426 = 0xFE43280FL;
                    int *l_427 = &l_299[5][3][0];
                    p_37 = p_37;
                    if ((*p_36))
                        continue;
                    if ((*p_37))
                    {
                        p_36 = p_37;
                    }
                    else
                    {
                        l_425 = p_36;
                        p_36 = l_403;
                        (*l_425) = l_426;
                    }
                    l_427 = p_36;
                }
                else
                {
                    unsigned short *l_433 = &g_287[4];
                    unsigned short **l_432 = &l_433;
                    unsigned short **l_434 = &l_433;
                    for (g_102 = 0; (g_102 > 6); g_102 = safe_add_func_int16_t_s_s(g_102, 5))
                    {
                        unsigned short *l_431 = &g_287[3];
                        unsigned short **l_430[5];
                        unsigned short ***l_435 = &l_432;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_430[i] = &l_431;
                        l_425 = p_37;
                        (*p_36) = (l_430[4] == ((*l_435) = (l_434 = l_432)));
                    }
                    p_36 = p_37;
                    if ((*p_37))
                        break;
                    if ((*p_36))
                        continue;
                }
            }
            for (l_234 = (-12); (l_234 <= (-10)); ++l_234)
            {
                (*l_223) = (*g_114);
            }
        }
        if (((*l_223) = (safe_sub_func_int32_t_s_s((((*l_441) = ((*g_129) = (*g_129))) | ((*l_442) = 0xC2L)), (0L == l_443)))))
        {
            unsigned l_458 = 4294967295UL;
            int *l_490 = &l_234;
            int **l_498 = &l_490;
            int *l_504[2];
            unsigned **l_507 = &g_159;
            unsigned char *l_508[9];
            int i;
            for (i = 0; i < 2; i++)
                l_504[i] = (void*)0;
            for (i = 0; i < 9; i++)
                l_508[i] = &g_509;
            if ((l_444 && ((p_35 <= p_35) & (((*g_129) = 255UL) & (safe_rshift_func_uint8_t_u_u(p_35, 7))))))
            {
                unsigned char l_456 = 0UL;
                l_403 = (void*)0;
                for (g_102 = 0; (g_102 <= 4); g_102 += 1)
                {
                    int l_457 = 0x51CD1CF6L;
                    int i;
                }
                (*l_223) = (*p_37);
            }
            else
            {
                int l_463 = (-6L);
                int l_468 = 0L;
                (*l_403) = ((((*g_114) != 0x434700D1L) != p_35) < (((void*)0 == &g_178) < (*g_129)));
                (*l_403) = l_463;
                if ((((safe_sub_func_uint32_t_u_u(func_43(((safe_mod_func_int32_t_s_s((l_468 = (*g_114)), (*p_37))) || ((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((*l_223) = ((*p_37) >= (p_35 > (!(safe_sub_func_uint8_t_u_u(((l_463 || p_35) ^ ((((void*)0 != l_475) && (l_458 < l_468)) < g_455)), p_35)))))), l_468)), 2)) | 0x659EL))), p_35)) || (*p_36)) >= 0xDCL))
                {
                    int l_479 = 0x6CDC36DCL;
                    l_476 = ((*l_403) = (*g_114));
                    for (l_317 = 0; (l_317 <= (-10)); l_317 = safe_sub_func_uint8_t_u_u(l_317, 6))
                    {
                        return l_479;
                    }
                }
                else
                {
                    int **l_481 = &l_401;
                    for (g_119 = 0; (g_119 <= 1); g_119 += 1)
                    {
                        int **l_480 = &l_401;
                        (*l_480) = p_37;
                    }
                    (*l_481) = p_36;
                    for (l_317 = 0; (l_317 <= (-18)); --l_317)
                    {
                        if (l_458)
                            break;
                        (*l_223) = (*p_36);
                        p_37 = (void*)0;
                    }
                    return p_35;
                }
                for (l_476 = 0; (l_476 >= (-25)); l_476--)
                {
                    unsigned short l_496 = 0x26CEL;
                    (*l_403) = (*g_114);
                    l_486[0] = (void*)0;
                }
            }
            l_490 = p_37;
            (*l_498) = p_37;
            l_510 = (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_45(p_35, ((*l_223) = ((l_503 == p_35) == ((*g_129) = p_35)))), (safe_sub_func_int8_t_s_s(((*p_37) & 0x01D37402L), ((*l_441) = (**l_498)))))), (g_509 = ((void*)0 == l_507))));
        }
        else
        {
            char l_541 = (-4L);
            int l_548 = 6L;
            int **l_549 = &l_401;
            unsigned l_564 = 0xFC2C2052L;
            unsigned short *l_576 = (void*)0;
            unsigned short **l_575[8][7][4] = {{{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}, {{&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}, {&l_576, (void*)0, (void*)0, &l_576}}};
            unsigned short ***l_574 = &l_575[2][0][0];
            int l_581 = 0x370444DCL;
            unsigned short l_606 = 0x09D8L;
            int l_609 = 0L;
            unsigned l_680 = 1UL;
            int i, j, k;
            for (l_420 = 22; (l_420 == 10); l_420 = safe_sub_func_int16_t_s_s(l_420, 8))
            {
                unsigned char l_538 = 7UL;
                int ****l_557 = &g_493;
                int ****l_559 = &g_493;
                int *****l_558[1][6];
                unsigned short *l_561[9][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                unsigned short **l_573 = &l_561[3][0];
                unsigned short ***l_572 = &l_573;
                int l_580 = 4L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_558[i][j] = &l_559;
                }
            }
            p_37 = func_60(p_35, p_35);
            for (l_462 = 0; (l_462 <= 7); l_462 += 1)
            {
                short l_600 = 0x7E42L;
                unsigned l_637 = 0UL;
                unsigned short **l_639[1];
                unsigned ***l_653 = &g_158;
                int *l_678 = &g_20;
                unsigned char l_682[4][8] = {{246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L}, {246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L}, {246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L}, {246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L, 246UL, 0x93L}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_639[i] = (void*)0;
                for (g_455 = 0; (g_455 <= 7); g_455 += 1)
                {
                    unsigned short l_608 = 65533UL;
                    unsigned *l_610 = &l_444;
                    int l_638 = 0xD532B725L;
                }
                (*g_577) = l_639[0];
                if ((**l_549))
                    break;
                for (l_510 = 1; (l_510 <= 7); l_510 += 1)
                {
                    int *l_640 = &g_20;
                    for (l_503 = 2; (l_503 <= 7); l_503 += 1)
                    {
                        unsigned ****l_651 = (void*)0;
                        unsigned ****l_652[6][9] = {{&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}, {&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}, {&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}, {&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}, {&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}, {&l_268, &l_650, (void*)0, &l_650, &l_650, (void*)0, &l_650, &l_268, &l_268}};
                        short *l_663 = (void*)0;
                        short *l_664 = &g_348;
                        int l_665 = 1L;
                        int i, j;
                        p_36 = l_640;
                        (*l_403) = ((*l_223) = (l_666 = (safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((((*l_664) = ((l_649 == (l_653 = l_650)) ^ ((*l_442) = func_56(p_36, (p_35 <= (func_45(((**l_347) = (safe_sub_func_uint8_t_u_u(7UL, (safe_unary_minus_func_uint16_t_u((l_657[1] | (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((p_35 && p_35), 0UL)) > l_637), 2)))))))), g_662) <= (*l_640))), (*g_114))))) ^ 0L) || 0x55FD45D9L), 6)) || 0x93L), 7)), l_665)) != 4294967292UL) && (-4L)), (*l_640)))));
                    }
                }
                for (l_607 = 0; (l_607 <= 3); l_607 += 1)
                {
                    l_682[1][1] = (*l_678);
                    for (l_620 = 7; (l_620 >= 1); l_620 -= 1)
                    {
                        if ((*g_114))
                            break;
                        return p_35;
                    }
                }
            }
            for (g_509 = 0; (g_509 == 25); g_509 = safe_add_func_int16_t_s_s(g_509, 8))
            {
                int *l_691 = (void*)0;
                int l_697 = 0x1D1AD343L;
                int l_698 = 0x491777BEL;
                (*l_549) = (void*)0;
                for (g_348 = 11; (g_348 >= 16); ++g_348)
                {
                    int l_701 = 0xBDB505DEL;
                    (*l_681) = (*l_223);
                    (*l_549) = p_37;
                    for (l_203 = 13; (l_203 >= (-12)); --l_203)
                    {
                        unsigned char ***l_695 = &g_128;
                        p_37 = func_60((func_45((safe_mod_func_uint8_t_u_u((*g_129), ((l_691 != (void*)0) | p_35))), (safe_rshift_func_uint16_t_u_u(p_35, (l_697 = ((safe_unary_minus_func_uint16_t_u(((l_696 = &l_440) != (void*)0))) & 0xE310L))))) & 0x70L), p_35);
                        (*l_681) = l_698;
                        (*l_549) = p_37;
                        if ((*g_114))
                            continue;
                    }
                    (*l_549) = func_60((safe_add_func_uint32_t_u_u(((~((-1L) | ((((*p_36) || (*p_36)) | func_56(p_36, g_509, l_701)) || (p_35 < func_43(p_35))))) || 254UL), 8L)), g_702);
                }
                (*l_549) = p_36;
            }
        }
        for (g_93 = 0; (g_93 <= 4); g_93 += 1)
        {
            int i;
            if (g_363[g_93])
            {
                int *l_703 = &l_510;
                short ***l_705 = &g_178;
                l_703 = p_37;
                (*l_223) = (((*l_705) = l_704) != (void*)0);
                p_37 = func_60(p_35, p_35);
                (*l_223) = (*g_114);
            }
            else
            {
                int *l_707 = &g_87;
                for (l_503 = 0; (l_503 <= 6); l_503 += 1)
                {
                    int l_706 = 0xE39B994BL;
                    if (l_706)
                        break;
                    for (g_119 = 0; (g_119 <= 6); g_119 += 1)
                    {
                        int i;
                        l_403 = l_707;
                        (*l_223) = l_552[g_93];
                        if ((*p_36))
                            break;
                        return p_35;
                    }
                    if ((*g_114))
                        continue;
                    if (l_706)
                        continue;
                }
                return p_35;
            }
        }
        (*l_223) = (((safe_rshift_func_uint16_t_u_u((*l_223), 5)) > (!(l_299[6][3][1] = (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*g_495) == &p_37), (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_681) = ((*l_722) = (~p_35))), (g_676[2][0] = 1UL))) >= ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(p_35, 1)) > p_35), (((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_35, 7)), (((*g_129) == 0xB2L) ^ 1UL))) == p_35) && (*p_36)) != l_732) | (*g_129)))) > p_35)), 4L)), (***g_270))))), p_35))))) >= g_119);
    }
    return p_35;
}







static unsigned func_43(unsigned p_44)
{
    unsigned l_194 = 0UL;
    int **l_196[2][3][5] = {{{(void*)0, &g_114, &g_114, &g_114, &g_114}, {(void*)0, &g_114, &g_114, &g_114, &g_114}, {(void*)0, &g_114, &g_114, &g_114, &g_114}}, {{(void*)0, &g_114, &g_114, &g_114, &g_114}, {(void*)0, &g_114, &g_114, &g_114, &g_114}, {(void*)0, &g_114, &g_114, &g_114, &g_114}}};
    int *l_197[10];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_197[i] = &g_87;
    for (g_93 = 0; (g_93 == (-21)); g_93 = safe_sub_func_uint32_t_u_u(g_93, 9))
    {
        int *l_191 = &g_87;
        int **l_195 = (void*)0;
        (*l_191) = (-9L);
        for (g_119 = 1; (g_119 == 28); g_119 = safe_add_func_int8_t_s_s(g_119, 6))
        {
            return p_44;
        }
        l_191 = func_60((*l_191), l_194);
        return p_44;
    }
    l_197[4] = func_60(p_44, g_2);
    return p_44;
}







static unsigned func_45(unsigned p_46, int p_47)
{
    char *l_92 = &g_93;
    int *l_186[2][10][1] = {{{&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}}, {{&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}, {&g_2}}};
    short l_187 = 0x99A9L;
    unsigned l_188 = 1UL;
    int i, j, k;
    l_187 = (((safe_add_func_int32_t_s_s((-3L), ((*g_159) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(func_56(func_60(g_20, p_47), (1UL <= ((safe_add_func_int8_t_s_s(((*l_92) = (0x36EFE450L | (p_46 | ((void*)0 != &g_20)))), g_20)) == p_46)), p_46), 7L)), g_152))))) != 255UL) <= g_20);
    l_188 = p_47;
    return p_46;
}







static short func_56(int * p_57, unsigned short p_58, int p_59)
{
    unsigned char *l_96[3][1];
    int l_120 = 0x6BC95214L;
    unsigned *l_131 = &g_102;
    unsigned **l_130 = &l_131;
    int l_184[2];
    int *l_185 = &g_87;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_96[i][j] = &g_79;
    }
    for (i = 0; i < 2; i++)
        l_184[i] = 6L;
    for (p_58 = 0; (p_58 <= 9); p_58 += 1)
    {
        unsigned char *l_95 = &g_79;
        unsigned char **l_94 = &l_95;
        unsigned *l_101 = &g_102;
        int *l_104 = &g_87;
        int **l_103 = &l_104;
        int i;
        (*l_103) = func_60(g_81[p_58], ((((((*l_94) = &g_79) != (l_96[1][0] = (void*)0)) || p_58) | g_20) < (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_add_func_int32_t_s_s(0x1377BC7AL, (g_2 && (((*l_101) = (p_59 <= p_59)) || g_102))))))));
        (*l_103) = &g_20;
        for (p_59 = 0; (p_59 <= 9); p_59 += 1)
        {
            short *l_105 = &g_81[2];
            int l_108 = 5L;
            unsigned l_109 = 5UL;
            for (g_93 = 9; (g_93 >= 0); g_93 -= 1)
            {
                int *l_106 = &g_87;
                (*l_106) = ((void*)0 != l_105);
                for (g_87 = 9; (g_87 >= 2); g_87 -= 1)
                {
                    int *l_107[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    int i;
                    (*l_103) = l_107[1];
                }
                if (l_108)
                    break;
                if (l_109)
                {
                    char l_112 = 0x73L;
                    (*l_103) = func_60(g_81[7], (p_59 > (safe_add_func_uint32_t_u_u((l_112 >= 0x98L), ((l_109 != (((void*)0 != g_113[1][6][1]) < p_58)) & (p_59 != 0x6BCBL))))));
                    for (l_109 = 0; (l_109 <= 0); l_109 += 1)
                    {
                        int l_115 = 3L;
                        unsigned short *l_118[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_118[i] = &g_119;
                        if (l_115)
                            break;
                        (*l_106) = (p_59 || (g_119 = (g_2 < (safe_sub_func_int16_t_s_s(((*l_106) >= p_58), p_59)))));
                        l_120 = l_120;
                    }
                    for (l_112 = 8; (l_112 >= 0); l_112 -= 1)
                    {
                        l_120 = (safe_add_func_int16_t_s_s((l_108 || (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((l_112 | g_119), g_93)), 7))), p_59));
                    }
                    for (g_79 = 3; (g_79 <= 9); g_79 += 1)
                    {
                        int i;
                        return g_81[p_59];
                    }
                }
                else
                {
                    unsigned char ***l_127[1][10][7];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_127[i][j][k] = &l_94;
                        }
                    }
                    g_128 = &l_95;
                }
            }
        }
        for (p_59 = 9; (p_59 >= 0); p_59 -= 1)
        {
            l_130 = &l_101;
            for (g_79 = 0; (g_79 <= 9); g_79 += 1)
            {
                int *l_132 = &l_120;
                (*l_132) = 0xD0C3B02FL;
                (*l_132) = (*g_114);
                if (p_59)
                    continue;
                for (g_93 = 0; (g_93 >= 0); g_93 -= 1)
                {
                    (*l_132) = (-6L);
                    for (g_119 = 0; (g_119 <= 9); g_119 += 1)
                    {
                        int i, j, k;
                        (*l_103) = &p_59;
                        if (g_81[g_119])
                            continue;
                        (*l_103) = &p_59;
                    }
                }
            }
        }
    }
    for (g_119 = 0; (g_119 >= 38); g_119 = safe_add_func_int32_t_s_s(g_119, 3))
    {
        if ((*g_114))
            break;
    }
    for (g_79 = 9; (g_79 == 43); g_79 = safe_add_func_int16_t_s_s(g_79, 3))
    {
        unsigned short l_142[2];
        int *l_143 = &g_87;
        unsigned short l_173 = 0xB184L;
        int i;
        for (i = 0; i < 2; i++)
            l_142[i] = 0x9869L;
        (*l_143) = ((((safe_unary_minus_func_int8_t_s(p_59)) || (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_81[2], p_58)), 12))) <= l_142[0]) || (0x69L || g_20));
        if ((*g_114))
        {
            int l_148[5];
            char l_149[3];
            int i;
            for (i = 0; i < 5; i++)
                l_148[i] = 0x71652FD5L;
            for (i = 0; i < 3; i++)
                l_149[i] = (-8L);
            p_59 = (l_148[2] = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(l_120, g_102)), p_59)));
            g_113[1][6][1] = &g_114;
            (*l_143) = (l_148[2] | (l_149[2] | p_58));
        }
        else
        {
            unsigned l_164 = 3UL;
            int *l_176[9];
            short ***l_180 = &g_178;
            int *l_181[2];
            int i;
            for (i = 0; i < 9; i++)
                l_176[i] = &g_2;
            for (i = 0; i < 2; i++)
                l_181[i] = (void*)0;
            for (g_102 = 22; (g_102 != 50); g_102 = safe_add_func_int16_t_s_s(g_102, 9))
            {
                unsigned char l_156 = 0UL;
                int l_172 = 0xB638BEBEL;
                int **l_177 = &l_176[5];
            }
            (*l_180) = g_178;
            l_181[0] = l_176[5];
        }
    }
    (*l_185) = ((safe_add_func_int8_t_s_s(l_120, (*g_129))) & (l_184[0] = p_59));
    return (*l_185);
}







static int * func_60(unsigned short p_61, unsigned p_62)
{
    unsigned l_63 = 0xAE202455L;
    int *l_69 = (void*)0;
    if (l_63)
    {
        int *l_64 = &g_20;
        int **l_65 = (void*)0;
        int **l_66 = &l_64;
        (*l_66) = l_64;
        for (l_63 = 0; (l_63 != 13); l_63 = safe_add_func_uint8_t_u_u(l_63, 1))
        {
            char l_70[3][8][9] = {{{2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}}, {{2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}}, {{2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}, {2L, 9L, 1L, 0x6FL, 0xAFL, (-7L), 9L, 0L, 0x26L}}};
            int *l_88 = &g_87;
            int i, j, k;
            (*l_66) = l_69;
            if (p_61)
            {
                if (l_70[1][7][5])
                    break;
                if (p_62)
                    break;
            }
            else
            {
                short l_82[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_82[i] = 0x9721L;
                for (p_62 = 0; (p_62 < 23); p_62 = safe_add_func_int32_t_s_s(p_62, 3))
                {
                    int *l_73 = (void*)0;
                    unsigned char *l_78[1];
                    short *l_80 = &g_81[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_78[i] = &g_79;
                    for (p_61 = 0; (p_61 <= 2); p_61 += 1)
                    {
                        return l_73;
                    }
                    (*l_66) = &g_20;
                    l_82[5] = ((~(safe_lshift_func_uint16_t_u_s(0x2DC6L, ((*l_80) = (safe_add_func_int8_t_s_s((g_2 ^ p_62), (g_79 = g_20))))))) < l_70[1][7][5]);
                }
            }
            for (p_61 = (-2); (p_61 > 42); ++p_61)
            {
                int *l_85 = &g_20;
                int *l_86 = &g_87;
                (*l_86) = ((void*)0 != l_85);
                (*l_66) = l_88;
            }
        }
    }
    else
    {
        int **l_89 = &l_69;
        (*l_89) = l_69;
    }
    return &g_20;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_348, "g_348", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_676[i][j], "g_676[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1422, "g_1422", print_hash_value);
    transparent_crc(g_1579, "g_1579", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
