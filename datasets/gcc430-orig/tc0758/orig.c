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



static int g_4 = 0L;
static int g_76 = (-1L);
static int * volatile g_75 = &g_76;
static int *g_79[5] = {&g_76, &g_76, &g_76, &g_76, &g_76};
static int ** volatile g_78[4] = {&g_79[3], (void*)0, &g_79[3], (void*)0};
static int g_87[6][4][8] = {{{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}, {{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}, {{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}, {{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}, {{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}, {{0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}, {0x1E582B27L, (-1L), 0L, (-1L), 0x5EB91548L, 0x045FF681L, 0xDA69EDF7L, 0x2D3B6D3EL}}};
static int ** volatile g_93 = &g_79[0];
static unsigned long long g_161 = 0UL;
static int g_166 = 1L;
static int * volatile * volatile g_192 = &g_79[3];
static int g_267 = 0x213A3953L;
static volatile unsigned g_338 = 18446744073709551613UL;
static unsigned g_397 = 0x8CBE8B22L;
static volatile int g_402 = 0L;
static volatile int g_405 = 0xE7EA0EEAL;
static short g_415 = 0x092AL;
static int **g_440[10][5] = {{&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}, {&g_79[3], &g_79[3], &g_79[3], (void*)0, &g_79[3]}};
static int ** volatile *g_439[5][6][1] = {{{&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}}, {{&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}}, {{&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}}, {{&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}}, {{&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}, {&g_440[5][4]}}};
static int ** volatile g_533 = (void*)0;
static volatile unsigned g_551 = 4294967295UL;
static volatile short g_563 = 0x5868L;
static char g_750 = 0L;
static int * volatile g_816 = (void*)0;
static volatile unsigned g_872 = 0UL;
static int g_1068 = 1L;
static unsigned g_1069 = 4294967295UL;
static volatile int g_1210 = 0x953EFBE9L;
static volatile int *g_1209 = &g_1210;
static volatile int **g_1208 = &g_1209;
static volatile unsigned g_1418 = 0x778A2BFEL;
static int *g_1439 = &g_76;
static volatile unsigned g_1443 = 0UL;
static unsigned g_1472 = 0xF0A66C10L;
static unsigned g_1610 = 9UL;
static volatile int * volatile *g_1755 = (void*)0;
static volatile int * volatile ** volatile g_1756 = &g_1755;
static volatile unsigned g_1792 = 18446744073709551611UL;
static int *g_1799[5] = {&g_267, (void*)0, &g_267, (void*)0, &g_267};
static int * volatile *g_1937 = &g_1439;
static int * volatile **g_1936 = &g_1937;
static char g_1969 = 0L;
static unsigned short g_2003 = 65535UL;
static volatile short g_2114 = 0x644BL;
static volatile int * volatile ** volatile g_2214 = (void*)0;
static volatile unsigned g_2216 = 18446744073709551615UL;
static volatile int g_2311 = (-1L);
static volatile int *g_2353 = &g_1210;
static volatile unsigned long long g_2361 = 0x8FEDA8267BD9386BLL;
static int g_2393 = 0xDD31D180L;
static int g_2423 = 0xE59E1122L;
static unsigned g_2435 = 18446744073709551606UL;
static long long g_2499 = 1L;
static char g_2698 = (-7L);
static volatile unsigned char g_2717 = 1UL;
static unsigned g_2759[3][4][3] = {{{0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}}, {{0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}}, {{0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}, {0xD20F98C1L, 18446744073709551615UL, 0xD20F98C1L}}};
static unsigned short g_2762[5][9] = {{0x0CB6L, 8UL, 0x0CB6L, 0x06E7L, 1UL, 0xE971L, 0x305BL, 0xFE73L, 65534UL}, {0x0CB6L, 8UL, 0x0CB6L, 0x06E7L, 1UL, 0xE971L, 0x305BL, 0xFE73L, 65534UL}, {0x0CB6L, 8UL, 0x0CB6L, 0x06E7L, 1UL, 0xE971L, 0x305BL, 0xFE73L, 65534UL}, {0x0CB6L, 8UL, 0x0CB6L, 0x06E7L, 1UL, 0xE971L, 0x305BL, 0xFE73L, 65534UL}, {0x0CB6L, 8UL, 0x0CB6L, 0x06E7L, 1UL, 0xE971L, 0x305BL, 0xFE73L, 65534UL}};
static volatile unsigned char g_2790 = 0x55L;



static short func_1(void);
static int func_10(unsigned p_11, unsigned p_12, int p_13, long long p_14, long long p_15);
static short func_18(unsigned char p_19, unsigned p_20, short p_21, unsigned p_22);
static unsigned char func_27(unsigned char p_28, long long p_29);
static unsigned long long func_34(unsigned short p_35, char p_36, unsigned short p_37, char p_38, long long p_39);
static long long func_40(long long p_41);
static long long func_47(unsigned p_48, char p_49, unsigned char p_50, short p_51, unsigned long long p_52);
static unsigned char func_55(unsigned char p_56, unsigned char p_57, char p_58, int p_59, short p_60);
static short func_61(unsigned char p_62, int p_63, short p_64, char p_65);
static short func_68(unsigned char p_69, int p_70, unsigned p_71, unsigned short p_72);
static short func_1(void)
{
    int l_9 = (-4L);
    unsigned short l_1938 = 0xCE6AL;
    char l_1939[9];
    long long l_2364[1][9] = {{(-2L), 0xB5679E39B49E6671LL, (-2L), 0xB5679E39B49E6671LL, (-2L), 0xB5679E39B49E6671LL, (-2L), 0xB5679E39B49E6671LL, (-2L)}};
    unsigned char l_2373 = 7UL;
    int *l_2377 = &l_9;
    unsigned short l_2378 = 0x09FCL;
    unsigned char l_2395[10] = {255UL, 255UL, 0xB0L, 255UL, 255UL, 0xB0L, 255UL, 255UL, 0xB0L, 255UL};
    int l_2492[3];
    char l_2560[9] = {(-9L), 0x34L, (-9L), 0x34L, (-9L), 0x34L, (-9L), 0x34L, (-9L)};
    int ***l_2624[5][9] = {{&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}};
    short l_2635[5][1];
    unsigned short l_2691[10] = {65535UL, 0xDF9AL, 0UL, 0UL, 0xDF9AL, 65535UL, 0xDF9AL, 0UL, 0UL, 0xDF9AL};
    char l_2716 = 0x9CL;
    long long l_2737 = 0xD4FF9456C462250ELL;
    unsigned l_2761 = 1UL;
    short l_2773 = 0x913EL;
    unsigned short l_2804 = 0xC8EAL;
    unsigned short l_2840 = 6UL;
    int **l_2876 = &g_1439;
    int i, j;
    for (i = 0; i < 9; i++)
        l_1939[i] = 1L;
    for (i = 0; i < 3; i++)
        l_2492[i] = (-6L);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_2635[i][j] = (-1L);
    }
    if ((safe_mod_func_uint32_t_u_u((g_4 , (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_9, (g_4 , ((((((5L > func_10(g_4, (((safe_lshift_func_int16_t_s_s(func_18((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0x1DL ^ g_4), g_4)), (5L ^ 1UL))), l_9, l_9, g_4), l_1938)) & 0x4A84L) , g_87[4][2][0]), l_1939[1], g_4, g_1610)) && 9L) | g_1610) || l_9) , g_1472) | l_1939[7])))), l_2364[0][0]))), l_9)))
    {
        unsigned long long l_2371 = 0x7421078A0526E408LL;
        long long l_2372 = 0x01BC3B7F7716D6E7LL;
        if ((0xE768L > (~((((((g_166 , (safe_add_func_uint16_t_u_u(((!((((0L | (safe_add_func_int32_t_s_s((func_68(g_1069, g_415, l_2364[0][0], (safe_add_func_int8_t_s_s(g_750, 2UL))) || l_1938), 0xED0395D4L))) , l_2371) == l_2372) & 0x1FL)) | 249UL), l_2373))) & 0UL) >= l_1938) == g_1472) && 0x5419L) , (-10L)))))
        {
            for (g_1969 = 0; (g_1969 > 4); ++g_1969)
            {
                return g_4;
            }
            (*g_2353) ^= 0x5E331471L;
        }
        else
        {
            unsigned long long l_2376[6][10] = {{0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}, {0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}, {0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}, {0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}, {0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}, {0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL, 0xBBC247BD426DFDF9LL, 0x887730BEA8D6AF2DLL, 0xBBC247BD426DFDF9LL, 1UL, 0x1F79BB8BE7914025LL, 0x1F79BB8BE7914025LL, 1UL}};
            int i, j;
            (*g_2353) = l_2376[2][1];
            return g_1418;
        }
        l_2377 = (void*)0;

        ;
        l_2378--;
    }
    else
    {
        int *l_2384 = (void*)0;
        int ***l_2385 = &g_440[5][4];
        int l_2396 = 0L;
        int l_2425 = 1L;
        unsigned short l_2498[5][7] = {{65535UL, 65535UL, 0x96D1L, 0xD076L, 0UL, 0xD076L, 0x96D1L}, {65535UL, 65535UL, 0x96D1L, 0xD076L, 0UL, 0xD076L, 0x96D1L}, {65535UL, 65535UL, 0x96D1L, 0xD076L, 0UL, 0xD076L, 0x96D1L}, {65535UL, 65535UL, 0x96D1L, 0xD076L, 0UL, 0xD076L, 0x96D1L}, {65535UL, 65535UL, 0x96D1L, 0xD076L, 0UL, 0xD076L, 0x96D1L}};
        int i, j;
        for (l_1938 = 0; (l_1938 <= 3); l_1938 += 1)
        {
            unsigned l_2381 = 7UL;
            short l_2391 = 0xEE69L;
            int l_2410[1];
            unsigned l_2416 = 0x9BBA72CEL;
            unsigned l_2426 = 0x435BF4DDL;
            unsigned char l_2458[5][6][4] = {{{0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}}, {{0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}}, {{0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}}, {{0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}}, {{0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}, {0x0CL, 0xC0L, 0x35L, 0x26L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2410[i] = 0xDCD7D921L;
            for (g_1969 = 0; (g_1969 <= 3); g_1969 += 1)
            {
                int i;
                if ((*l_2377))
                    break;
                return l_2381;


            }
            for (l_9 = 29; (l_9 > 3); --l_9)
            {
                int l_2388 = 0x5ABBD94BL;
                for (g_76 = 0; (g_76 <= 3); g_76 += 1)
                {
                    for (l_2373 = 0; (l_2373 <= 4); l_2373 += 1)
                    {
                        int i;
                        (*g_2353) &= 0x473D5E94L;
                    }
                }
                (*g_1937) = l_2384;

                ;
                for (g_1969 = 1; (g_1969 <= 4); g_1969 += 1)
                {
                    int l_2390 = 0x5827AA51L;
                    int *l_2394 = &l_9;
                    int i;
                    if (func_68((*l_2377), g_1068, g_402, (&g_78[l_1938] != l_2385)))
                    {
                        int i;
                        l_2377 = &l_9;
                    }
                    else
                    {
                        int *l_2392 = &g_2393;
                        (*l_2392) |= ((l_2388 ^ (g_4 , (l_2381 > ((*l_2377) & ((((safe_unary_minus_func_int16_t_s(l_2390)) >= g_267) != func_61((*l_2377), (*l_2377), g_1068, l_2391)) ^ l_2390))))) >= 0x16L);
                        (**g_1936) = l_2394;

                        ;
                        (**g_1936) = &l_9;
                    }
                    (**g_1936) = &l_9;

                    ;
                }

                ;
                for (g_1069 = 0; (g_1069 <= 4); g_1069 += 1)
                {
                    int i, j;
                    if (l_2395[0])
                        break;
                    if (l_2388)
                        continue;
                }
            }
            if ((g_750 , ((l_2396 && (((((5UL >= ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((+(*l_2377)), (0xC8F5L < ((((+l_2391) < g_2114) , (void*)0) == (*g_1936))))) >= g_166), l_2396)) , (*l_2377)), g_397)), g_87[0][1][3])) | 0xEC89L)) , 1L) > g_76) < g_267) && l_2410[0])) || g_338)))
            {
                unsigned long long l_2411 = 0xC8D6BCCE63E35789LL;
                (*l_2377) = l_2411;
                l_2410[0] = (safe_add_func_int64_t_s_s((l_2411 ^ (safe_sub_func_uint32_t_u_u((g_1069 ^ ((&l_2410[0] != l_2384) >= l_2416)), l_2411))), (safe_sub_func_int8_t_s_s((func_61((*l_2377), (*g_75), ((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int16_t_s_s(((*g_1936) == (*g_1936)), 0xEF37L)) & g_87[4][1][1]) >= 3UL) >= 0L), 13)) & (*l_2377)), l_2410[0]) ^ g_1068), g_2423))));
            }
            else
            {
                unsigned short l_2424 = 0UL;
                int l_2437 = (-8L);
                unsigned l_2446 = 0xE4F5C163L;
                int l_2456 = 4L;
                int l_2457 = 0L;
                int *l_2480 = &l_2437;
                int l_2485 = (-2L);
                unsigned short l_2493[7][9] = {{6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}, {6UL, 0x7530L, 0xE1B6L, 7UL, 0x4F9FL, 65534UL, 0x4F9FL, 7UL, 0xE1B6L}};
                int i, j;
                if (((*l_2377) && (l_2424 , l_2424)))
                {
                    l_2426++;
                    for (l_9 = (-20); (l_9 > 27); l_9++)
                    {
                        int *l_2436 = &g_76;
                        l_2437 &= func_68(g_2003, (safe_rshift_func_int8_t_s_u(g_872, (g_87[0][1][3] & (safe_sub_func_int16_t_s_s((*l_2377), g_397))))), l_2424, (g_397 , (g_2435 , (l_2436 == (void*)0))));
                        if (l_2391)
                            continue;
                    }
                }
                else
                {
                    char l_2445 = 0L;
                    int *l_2451 = &g_267;
                    unsigned l_2475[5][4] = {{0UL, 0x206BDB10L, 0UL, 0x206BDB10L}, {0UL, 0x206BDB10L, 0UL, 0x206BDB10L}, {0UL, 0x206BDB10L, 0UL, 0x206BDB10L}, {0UL, 0x206BDB10L, 0UL, 0x206BDB10L}, {0UL, 0x206BDB10L, 0UL, 0x206BDB10L}};
                    int i, j;
                    if ((*l_2377))
                    {
                        int *l_2438 = &l_2410[0];
                        int *l_2439 = &g_2393;
                        int *l_2440 = &g_76;
                        int *l_2441 = &g_76;
                        int *l_2442 = &g_87[2][3][5];
                        int *l_2443 = &l_2410[0];
                        int *l_2444[4] = {&g_267, &l_2410[0], &g_267, &l_2410[0]};
                        int i;
                        l_2446--;
                        if (l_2424)
                            break;
                        (*l_2438) |= ((safe_mul_func_int8_t_s_s(((0UL || g_2435) ^ ((*l_2441) != l_2391)), ((((((((l_2451 == (void*)0) , l_2440) != (*g_1208)) == g_2216) <= (*l_2451)) == (*l_2451)) ^ g_1069) && g_1610))) >= 0xAB27E126B0C775FBLL);
                    }
                    else
                    {
                        int *l_2452 = &l_2425;
                        int *l_2453 = (void*)0;
                        int *l_2454 = &l_2410[0];
                        int *l_2455[7][3] = {{&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}, {&g_76, (void*)0, (void*)0}};
                        int i, j;
                        ++l_2458[1][4][3];
                        if (l_2456)
                            continue;
                        l_2410[0] = 2L;
                    }
                    for (l_2424 = 0; (l_2424 != 8); l_2424++)
                    {
                        int *l_2463 = (void*)0;
                        int *l_2464 = &g_87[1][2][4];
                        int *l_2465 = &l_2456;
                        int *l_2466 = &g_87[0][1][7];
                        int *l_2467 = &g_76;
                        int *l_2468 = &l_2457;
                        int *l_2469 = &g_2393;
                        int *l_2470 = &l_2456;
                        int *l_2471 = (void*)0;
                        int *l_2472 = &g_87[0][1][3];
                        int *l_2473 = &l_2410[0];
                        int *l_2474[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2474[i] = &g_267;
                        ++l_2475[1][0];
                        return g_338;


                    }
                    if (l_2437)
                        break;
                    for (l_2446 = 0; (l_2446 > 53); ++l_2446)
                    {
                        (**g_1936) = l_2451;

                        ;
                        (*l_2377) = ((*g_1756) == (g_2003 , (*g_1936)));
                        l_2480 = &l_2410[0];

                        ;
                    }

                    ;
                }

                ;
                for (l_2391 = 0; (l_2391 <= 3); l_2391 += 1)
                {
                    int **l_2481 = (void*)0;
                    int l_2483 = 0xEB89F81DL;
                    int l_2491 = 0x413F3B5CL;
                    (*l_2377) = ((void*)0 == l_2481);
                    for (g_1610 = 3; (g_1610 <= 8); g_1610 += 1)
                    {
                        short l_2482 = 0x0504L;
                        int l_2484 = 0x8C62B8B2L;
                        int *l_2486 = &l_2410[0];
                        int *l_2487 = &g_267;
                        int *l_2488 = &l_2437;
                        int *l_2489 = &g_76;
                        int *l_2490[5][2] = {{&l_2484, &l_2456}, {&l_2484, &l_2456}, {&l_2484, &l_2456}, {&l_2484, &l_2456}, {&l_2484, &l_2456}};
                        int i, j;
                        l_2483 = (l_2482 <= g_563);
                        ++l_2493[2][3];
                        (*g_1208) = (*g_1208);
                        (**g_1936) = &l_9;

                        ;
                    }
                }
            }
        }


        (*l_2377) &= (safe_mod_func_int8_t_s_s((-1L), l_2498[3][1]));
        return g_2499;


    }



    ;

    ;
    for (g_267 = 8; (g_267 >= 3); g_267 -= 1)
    {
        int l_2500 = 0L;
        int l_2510 = 4L;
        unsigned char l_2511 = 0UL;
        int i;
        (*g_2353) = l_1939[g_267];
        for (g_750 = 0; (g_750 <= 2); g_750 += 1)
        {
            int l_2501 = 0xA5FF6D84L;
            int *l_2502 = (void*)0;
            int *l_2503 = &g_76;
            int *l_2504 = &l_9;
            int *l_2505 = &l_2492[2];
            int *l_2506 = &g_87[4][1][4];
            int *l_2507 = &l_2500;
            int *l_2508 = &l_2500;
            int *l_2509[1];
            int i;
            for (i = 0; i < 1; i++)
                l_2509[i] = &g_2393;
            l_2511++;
            for (g_2435 = 0; (g_2435 <= 4); g_2435 += 1)
            {
                int i;
                (*g_1937) = &l_2492[g_750];

                ;
            }
            for (g_76 = 0; (g_76 <= 2); g_76 += 1)
            {
                unsigned l_2532[8];
                int *l_2539 = &l_2500;
                unsigned l_2541 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 8; i++)
                    l_2532[i] = 0xB1709E2FL;
                for (l_2501 = 0; (l_2501 <= 0); l_2501 += 1)
                {
                    int ***l_2540 = &g_440[5][4];
                    int i, j, k;
                    g_87[(l_2501 + 1)][l_2501][(g_76 + 3)] = ((safe_rshift_func_int8_t_s_s(l_2492[g_76], 6)) <= (l_2364[l_2501][(g_750 + 4)] > (l_2364[l_2501][(g_750 + 1)] | l_2492[g_76])));
                    for (g_1472 = 0; (g_1472 <= 8); g_1472 += 1)
                    {
                        unsigned short l_2518 = 0UL;
                        int *l_2531 = &l_2492[2];
                        (*l_2531) = (((((((safe_mod_func_int8_t_s_s(((l_2518 , (safe_sub_func_int16_t_s_s((-2L), 0UL))) < ((((0x98D368D4305BBB83LL >= (g_161 != (!(*l_2531)))) , g_1472) >= l_2511) | 5L)), g_2003)) && g_1418) , g_1418) , &l_2531) == (*g_1936)) == (*l_2531)) != g_415);
                    }
                    (*l_2506) = (safe_lshift_func_int16_t_s_u((((((g_551 != (g_267 > ((g_2003 , (safe_mul_func_uint8_t_u_u(g_2003, (((((safe_mod_func_int16_t_s_s((-5L), (~0x8D39L))) < (((l_2500 < 0xDDL) , &l_2492[g_76]) != l_2539)) , l_1939[g_267]) | 0xD13510BFL) != g_2499)))) ^ g_397))) , l_2540) == (void*)0) != g_76) ^ g_2393), 7));
                    ++l_2541;
                }
            }
        }
    }


    if ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_750 , (g_2114 , (safe_lshift_func_uint16_t_u_u(0x451AL, 12)))), 0)), 1)))
    {
        unsigned l_2550 = 1UL;
        int ***l_2557 = &g_440[1][2];
        long long l_2561 = 0x8174F65BEC509EB9LL;
        int l_2573 = (-1L);
        unsigned short l_2574 = 65530UL;
        int l_2583 = 6L;
        int l_2605 = 0x68EC6522L;
        int l_2606[10][1] = {{0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}, {0xF367E095L}};
        char l_2652 = 0x66L;
        int *l_2708[9] = {&g_87[5][3][7], (void*)0, &g_87[5][3][7], (void*)0, &g_87[5][3][7], (void*)0, &g_87[5][3][7], (void*)0, &g_87[5][3][7]};
        int l_2712 = 0xE43BB453L;
        unsigned l_2724 = 18446744073709551614UL;
        short l_2760 = 0xF576L;
        int *l_2807 = &l_2583;
        short l_2819 = 0L;
        long long l_2839 = 0x85919C2A71750BF9LL;
        int *l_2872[4][3][3] = {{{(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}}, {{(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}}, {{(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}}, {{(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}, {(void*)0, &l_2492[1], &l_2492[2]}}};
        int i, j, k;
        l_9 &= (((l_2550 , g_405) > (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(((((~l_2550) , l_2557) == &g_1937) , (safe_sub_func_int32_t_s_s(l_2560[7], (g_1069 == l_2561)))), (safe_unary_minus_func_uint64_t_u(((safe_rshift_func_uint8_t_u_s((((g_1068 ^ g_267) || l_2492[2]) == 0x424EL), g_161)) || g_76))))) , g_1068), g_267)), 14))) && g_87[2][0][3]);
        for (g_1969 = 0; (g_1969 != (-29)); g_1969--)
        {
            short l_2570[6] = {(-3L), (-3L), (-4L), (-3L), (-3L), (-4L)};
            int i;
            (*g_2353) = ((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((g_166 , g_2003))), (l_2570[0] & l_2570[5]))) ^ ((g_2361 , g_87[0][1][3]) && 0UL));
        }
        if (((*g_1756) == ((((void*)0 != (*g_1936)) ^ l_2574) , (void*)0)))
        {
            int *l_2591 = &l_2492[2];
            int *l_2596 = &l_2573;
            int *l_2597 = &g_87[1][2][7];
            int *l_2598 = &l_2492[2];
            int *l_2599 = &g_87[3][1][3];
            int *l_2600 = &g_2393;
            int *l_2601 = &l_2573;
            int *l_2602 = &g_267;
            int *l_2603 = &l_2492[2];
            int *l_2604[5];
            unsigned long long l_2607[10] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
            int i;
            for (i = 0; i < 5; i++)
                l_2604[i] = &g_87[2][3][7];
            for (l_2378 = 12; (l_2378 != 15); l_2378++)
            {
                int *l_2580 = &l_2492[2];
                for (l_2573 = 24; (l_2573 < 5); --l_2573)
                {
                    int *l_2579 = &l_2492[2];
                    int l_2581[6][6][2] = {{{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}, {{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}, {{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}, {{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}, {{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}, {{0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}, {0x8D043A91L, 9L}}};
                    unsigned char l_2586 = 0x33L;
                    int i, j, k;
                    (*g_1937) = l_2579;

                    ;
                    (*g_1937) = l_2580;
                    for (g_2003 = 0; (g_2003 <= 8); g_2003 += 1)
                    {
                        int *l_2582 = &l_9;
                        int *l_2584 = &l_9;
                        int *l_2585[1][4];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_2585[i][j] = &l_2492[2];
                        }
                        l_2586++;
                        (**g_1936) = (**g_1936);
                    }
                }
                (*l_2591) = (0x27L >= (safe_rshift_func_int8_t_s_s((l_2591 == ((((safe_mul_func_uint16_t_u_u(1UL, (~((&g_1208 != &g_93) , (g_2423 , (g_76 != (safe_add_func_int64_t_s_s((*l_2580), 0x57E7D76A38E656C1LL)))))))) > g_415) & g_1210) , &l_2583)), 7)));
            }
            l_2607[3]--;
        }
        else
        {
            char l_2621 = 0xB9L;
            int *l_2628 = &l_2606[4][0];
            int *l_2630 = &l_2583;
            int l_2633 = 0x49F5B41EL;
            unsigned short l_2660[3][9][7] = {{{0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}}, {{0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}}, {{0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}, {0xED70L, 1UL, 0xED70L, 1UL, 0xED70L, 1UL, 0xED70L}}};
            long long l_2681 = 1L;
            unsigned long long l_2685 = 0x6688768E688D8A1ALL;
            unsigned char l_2686 = 1UL;
            unsigned short l_2707[1];
            int l_2713[5] = {7L, 0x93750B58L, 7L, 0x93750B58L, 7L};
            int ***l_2774 = (void*)0;
            int l_2786 = 0x07545348L;
            unsigned l_2797[2][7];
            long long l_2824 = 0x0FA6598A0EE85504LL;
            int l_2846 = 0x16B04434L;
            unsigned char l_2865 = 255UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2707[i] = 0x0E62L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_2797[i][j] = 0UL;
            }
            for (l_9 = 0; (l_9 >= (-24)); l_9 = safe_sub_func_uint16_t_u_u(l_9, 4))
            {
                char l_2612 = (-1L);
                int *l_2653 = &l_9;
                unsigned short l_2673 = 0x4B4BL;
                char l_2687 = 1L;
                int l_2714[3];
                int l_2715 = 0xC1DF701CL;
                int i;
                for (i = 0; i < 3; i++)
                    l_2714[i] = 1L;
                if (l_2612)
                {
                    int l_2613 = 0xC892A267L;
                    long long l_2629[9][3] = {{5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}, {5L, 5L, (-1L)}};
                    int l_2634 = 1L;
                    int i, j;
                    (*g_2353) = l_2613;
                    for (l_2574 = 6; (l_2574 < 28); ++l_2574)
                    {
                        if (l_2613)
                            break;
                    }
                    for (g_161 = 0; (g_161 > 9); ++g_161)
                    {
                        unsigned char l_2627[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_2627[i] = 0x09L;
                        (**g_1936) = ((g_1792 >= (((safe_add_func_int8_t_s_s(((g_161 < (safe_unary_minus_func_int16_t_s(((((((l_2621 <= ((safe_mod_func_uint32_t_u_u((+(l_2624[0][6] != (void*)0)), (l_2612 & ((safe_add_func_uint8_t_u_u(l_2627[2], l_2612)) & g_87[0][1][3])))) < 255UL)) >= l_2621) || 0x08E9L) , g_87[2][2][7]) , l_2627[0]) && g_2499)))) | l_2627[2]), g_1069)) == 0UL) , 0x77L)) , l_2628);

                        ;
                        if (l_2629[5][1])
                            break;
                        (*g_93) = l_2630;
                        l_2652 = (g_2361 && (safe_mod_func_int32_t_s_s(((((l_2633 >= l_2634) , g_2216) == g_166) < ((((0x8687C297L < (l_2635[0][0] > (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_166 | (g_87[1][3][5] || 8L)), g_2423)), 0)), 15)), 13)) >= g_1068), (-8L))) != 1L) || 0xEBACB7F32CBFAA8ALL), 0x76ACL)) , l_2627[0]), g_750)), 2)))) || 18446744073709551611UL) == l_2612) , 0x00B746D46A94227DLL)), g_2423)));
                    }


                    (*g_1937) = l_2653;

                    ;
                }
                else
                {
                    unsigned char l_2672 = 0x75L;
                    int ***l_2682 = &g_440[5][4];
                    unsigned long long l_2688 = 4UL;
                    int *l_2689[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2689[i] = &g_76;
                    if (((safe_lshift_func_int16_t_s_u((g_405 >= (g_87[0][1][3] != (safe_lshift_func_uint8_t_u_s((*l_2628), 3)))), (g_87[0][1][3] >= (safe_mul_func_int8_t_s_s(l_2660[1][8][1], g_750))))) < (*l_2630)))
                    {
                        char l_2663 = 0x54L;
                        unsigned short l_2674[9][4][2] = {{{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}, {{65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}, {65532UL, 0x6EF1L}}};
                        int l_2690 = 0xBC0A52BCL;
                        int i, j, k;
                        (*g_2353) = (((-8L) == ((safe_rshift_func_int8_t_s_u((g_87[0][1][3] & l_2663), ((safe_sub_func_int16_t_s_s(((*l_2653) | g_87[0][1][3]), (*l_2628))) & 0x1BD02126L))) | g_1210)) >= g_397);
                        (*g_2353) = (*l_2630);
                        (*g_1937) = l_2689[0];

                        ;
                        ++l_2691[0];
                    }
                    else
                    {
                        unsigned l_2701 = 0UL;
                        int l_2702[10] = {(-1L), 0xBD117F64L, 6L, 6L, 0xBD117F64L, (-1L), 0xBD117F64L, 6L, 6L, 0xBD117F64L};
                        int l_2703 = 0x4514CA4EL;
                        int i;
                        l_2703 |= ((safe_sub_func_uint8_t_u_u((g_166 || ((((safe_add_func_uint16_t_u_u((g_405 > g_2698), (3UL == g_267))) ^ (safe_mul_func_int16_t_s_s(g_397, l_2701))) || l_2702[5]) , (g_338 || 1L))), g_415)) ^ g_2423);
                        (*l_2630) &= (safe_lshift_func_uint8_t_u_u(((void*)0 == (*g_1756)), (((g_87[0][1][3] , (safe_unary_minus_func_uint8_t_u((0L | (((l_2653 != l_2653) , (l_2707[0] != ((void*)0 == (*g_1208)))) ^ l_2701))))) & g_166) && 0x2B369FFDL)));
                        (*g_1208) = (void*)0;

                        ;
                        (*g_1937) = l_2708[3];

                        ;
                    }

                    ;
                    for (l_2686 = (-2); (l_2686 != 27); l_2686++)
                    {
                        int *l_2711 = (void*)0;
                        l_2689[0] = l_2711;
                    }


                }

                ;
                if ((*l_2653))
                    break;
                (*g_2353) = (0x52L > 255UL);
                --g_2717;
            }



            for (l_2573 = 0; (l_2573 != 4); l_2573++)
            {
                int *l_2723 = &l_2492[1];
                int l_2727 = 0x5179D000L;
                unsigned long long l_2739 = 6UL;
                short l_2776 = 0x4C47L;
                int l_2794 = 9L;
                int l_2795 = 1L;
                int l_2796[4][3] = {{(-9L), 0x4CF25215L, (-9L)}, {(-9L), 0x4CF25215L, (-9L)}, {(-9L), 0x4CF25215L, (-9L)}, {(-9L), 0x4CF25215L, (-9L)}};
                int i, j;
            }
            for (l_2621 = (-4); (l_2621 <= (-16)); l_2621 = safe_sub_func_uint64_t_u_u(l_2621, 8))
            {
                long long l_2809[5][7] = {{0x8DD2F9EA5CD724A2LL, 3L, 0x48F2D047329F9726LL, 0x5B018DEC2FEE2537LL, (-10L), 4L, 1L}, {0x8DD2F9EA5CD724A2LL, 3L, 0x48F2D047329F9726LL, 0x5B018DEC2FEE2537LL, (-10L), 4L, 1L}, {0x8DD2F9EA5CD724A2LL, 3L, 0x48F2D047329F9726LL, 0x5B018DEC2FEE2537LL, (-10L), 4L, 1L}, {0x8DD2F9EA5CD724A2LL, 3L, 0x48F2D047329F9726LL, 0x5B018DEC2FEE2537LL, (-10L), 4L, 1L}, {0x8DD2F9EA5CD724A2LL, 3L, 0x48F2D047329F9726LL, 0x5B018DEC2FEE2537LL, (-10L), 4L, 1L}};
                int l_2821 = 0x7F10C58FL;
                short l_2828 = 1L;
                int i, j;
                for (l_2686 = 0; (l_2686 <= 1); l_2686 += 1)
                {
                    int *l_2808 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_u(0xD0A0L, (g_87[0][1][3] , 6UL))))
                    {
                        unsigned char l_2810 = 1UL;
                        unsigned short l_2813 = 0xD29AL;
                        int *l_2816 = &l_2713[3];
                        l_2810 &= l_2809[3][5];
                        if (l_2810)
                            continue;
                        (*l_2628) &= (safe_lshift_func_uint16_t_u_s((l_2813 , (((func_61((safe_mod_func_int32_t_s_s((l_2813 > (g_2311 , ((((g_2698 | (+(g_2114 >= ((((void*)0 == l_2816) && ((safe_rshift_func_int8_t_s_s(g_4, ((g_161 || 5UL) < g_397))) == (*l_2630))) && l_2809[3][1])))) | g_2393) && g_87[3][3][4]) , g_415))), l_2809[1][0])), l_2809[0][6], g_2003, (*l_2816)) , &l_2808) != (void*)0) | l_2809[2][5])), l_2819));
                        if ((*l_2816))
                            break;
                    }
                    else
                    {
                        int l_2820 = (-5L);
                        l_2821 |= l_2820;
                        if (l_2821)
                            break;
                        if ((*g_2353))
                            break;
                        l_2808 = &l_2820;

                        ;
                    }


                    return l_2809[3][4];



                }
                if ((safe_lshift_func_int16_t_s_u(g_4, g_2762[1][7])))
                {
                    char l_2827 = 0xD9L;
                    (*l_2807) = (((safe_rshift_func_int8_t_s_u((l_2827 , g_2393), ((((l_2828 >= (safe_lshift_func_int8_t_s_u(l_2828, 4))) ^ 1L) == ((l_2839 >= 0L) == g_1472)) , 0x87L))) , l_2827) , l_2827);
                    ++l_2840;
                }
                else
                {
                    int l_2843 = 1L;
                    (*g_2353) |= l_2843;
                    for (g_2499 = 0; (g_2499 >= 8); g_2499++)
                    {
                        return g_1610;



                    }
                    (*l_2630) ^= l_2821;
                    return g_2762[1][7];



                }
                if (l_2846)
                    break;
                return g_402;



            }
            for (l_2839 = 0; (l_2839 <= (-27)); l_2839 = safe_sub_func_int16_t_s_s(l_2839, 9))
            {
                int *l_2862 = &g_267;
                unsigned long long l_2871[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2871[i][j] = 0UL;
                }
                for (l_2574 = 0; (l_2574 != 27); l_2574 = safe_add_func_uint64_t_u_u(l_2574, 8))
                {
                    unsigned long long l_2851 = 0x9809A005FC313657LL;
                    unsigned l_2854 = 0UL;
                    l_2851++;
                    if ((*l_2628))
                    {
                        ++l_2854;
                        (*g_2353) |= 0xCFC6068FL;
                    }
                    else
                    {
                        return g_2423;



                    }
                }
                for (l_2712 = (-29); (l_2712 < 29); ++l_2712)
                {
                    unsigned long long l_2859[8] = {5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL};
                    int ***l_2866 = &g_440[5][4];
                    unsigned long long l_2875 = 0x4A58C8B1C91DB45FLL;
                    int i;
                    if (l_2859[4])
                        break;
                    if ((safe_unary_minus_func_int16_t_s(0x616AL)))
                    {
                        short l_2861[7] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L, (-1L)};
                        int i;
                        (*g_2353) |= l_2861[5];
                        (*g_1937) = l_2862;

                        ;
                        (*l_2630) ^= (l_2865 <= ((*l_2862) != l_2861[4]));
                        (*l_2807) ^= ((((l_2861[1] , (&g_78[2] == &g_1208)) , ((func_68(l_2871[0][0], (0xF25D71F345F7BA49LL <= 0x4DFB24C9C28211B8LL), ((void*)0 != l_2872[1][1][2]), ((safe_add_func_uint64_t_u_u(l_2859[4], (*l_2862))) | g_2361)) , 1UL) == (*l_2862))) < g_2435) >= 0x2AL);
                    }
                    else
                    {
                        if (l_2875)
                            break;
                    }
                }
            }


        }



        (*g_1936) = l_2876;
    }
    else
    {
        long long l_2883 = (-3L);
        for (g_750 = 3; (g_750 >= 1); g_750 -= 1)
        {
            unsigned l_2877 = 0UL;
            (*g_2353) &= l_2877;
            for (g_2499 = 4; (g_2499 >= 0); g_2499 -= 1)
            {
                char l_2880[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2880[i] = 0xDAL;
                (*g_2353) = (safe_mul_func_uint16_t_u_u(l_2880[0], (safe_mul_func_int16_t_s_s(g_2717, 0xBC65L))));
                if (l_2883)
                    break;
            }
        }
        return l_2883;


    }


    return g_2361;


}







static int func_10(unsigned p_11, unsigned p_12, int p_13, long long p_14, long long p_15)
{
    unsigned long long l_1942 = 0x698CAD5EB8525449LL;
    int l_1950 = 0L;
    int l_1955 = 0L;
    long long l_1968 = 0x5579647A0BBB95D5LL;
    int ***l_2004[6];
    unsigned l_2006 = 0UL;
    int l_2013[5][2] = {{(-9L), 0x6F481451L}, {(-9L), 0x6F481451L}, {(-9L), 0x6F481451L}, {(-9L), 0x6F481451L}, {(-9L), 0x6F481451L}};
    unsigned l_2027 = 0xA5CBC045L;
    unsigned l_2068 = 0x34CF4244L;
    short l_2088[9];
    int l_2113 = 0xD69E632FL;
    char l_2139[7][10] = {{4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}, {4L, (-4L), (-9L), (-9L), (-9L), (-4L), 4L, 0x3BL, 0x8BL, 8L}};
    unsigned l_2179 = 4294967289UL;
    unsigned short l_2213 = 0x1F2DL;
    long long l_2250[10][5] = {{0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}, {0xB6F5DBAB45A121CFLL, 0x3AFB012156345233LL, 0xDB24F0F74ADFD8C4LL, 0x3AFB012156345233LL, 0xB6F5DBAB45A121CFLL}};
    short l_2262 = 0xD188L;
    char l_2283 = (-1L);
    char l_2342 = 0x7DL;
    unsigned char l_2349 = 6UL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_2004[i] = &g_440[5][4];
    for (i = 0; i < 9; i++)
        l_2088[i] = 3L;
    for (g_76 = 0; (g_76 <= 19); g_76 = safe_add_func_int64_t_s_s(g_76, 6))
    {
        long long l_1943 = 0x2D04D113F28D1567LL;
        int **l_1948 = &g_79[1];
        int l_1954 = 0xA3D9CA3DL;
        int l_1975 = 0xA8F3F5ADL;
        int l_2005 = 0x46621FB4L;
        long long l_2026 = (-10L);
        int l_2046[1];
        unsigned char l_2048 = 0xABL;
        unsigned short l_2132 = 0xFDCCL;
        int i;
        for (i = 0; i < 1; i++)
            l_2046[i] = 0x28DA70B1L;
        if (l_1942)
            break;
        (*g_1208) = (void*)0;

        ;
    }

    ;
    (**g_1937) = p_14;
    for (g_415 = (-30); (g_415 == 2); ++g_415)
    {
        long long l_2146 = (-8L);
        short l_2169 = 0xA6A2L;
        long long l_2174 = 0x5FB8D8AE715F5398LL;
        int l_2180 = 1L;
        int l_2225 = (-1L);
        short l_2243 = 0L;
        int **l_2253 = &g_79[2];
        long long l_2284 = 0L;
        unsigned char l_2316[3][2] = {{0xD8L, 0xF9L}, {0xD8L, 0xF9L}, {0xD8L, 0xF9L}};
        int i, j;
        for (g_267 = 2; (g_267 >= 0); g_267--)
        {
            int ***l_2145[9][10] = {{&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}, {&g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4], &g_440[5][4]}};
            int l_2170[5][3] = {{8L, (-1L), 8L}, {8L, (-1L), 8L}, {8L, (-1L), 8L}, {8L, (-1L), 8L}, {8L, (-1L), 8L}};
            volatile int * volatile *l_2215 = &g_1209;
            int i, j;
            (**g_1937) |= p_12;
            if (p_15)
            {
                short l_2153 = 6L;
                if (((~0x315FFCEE44FD8FC2LL) >= 0x6DC296AF5F8B7990LL))
                {
                    int ***l_2167 = &g_440[5][4];
                    long long l_2168 = 1L;
                    (**g_1937) = (safe_rshift_func_int16_t_s_u(l_2153, (((safe_unary_minus_func_int32_t_s(((255UL && (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((void*)0 == (*g_1936)), l_2146)) || ((safe_rshift_func_int16_t_s_u(((void*)0 != l_2167), func_61(p_14, l_2146, l_2153, g_397))) , p_15)), 0x645AD8C0L)), l_2168)) || l_2169), l_2170[0][1])), g_4))) > g_267))) , p_12) != p_12)));
                }
                else
                {
                    int *l_2173 = &l_2113;
                    for (g_2003 = (-23); (g_2003 <= 57); g_2003 = safe_add_func_int32_t_s_s(g_2003, 3))
                    {
                        (*g_1439) = p_12;
                        if (p_13)
                            continue;
                        (*g_1439) = p_11;
                    }
                    (*g_1937) = l_2173;

                    ;
                }
                (**g_1937) ^= (l_2174 < ((l_2169 , 0UL) == g_1610));
                (*g_1439) |= p_14;
                (*g_192) = &p_13;
            }
            else
            {
                unsigned long long l_2199[2];
                char l_2202[9] = {0x6BL, 1L, 0x6BL, 1L, 0x6BL, 1L, 0x6BL, 1L, 0x6BL};
                long long l_2212 = 0x70F9FF0D6FAD2C00LL;
                int i;
                for (i = 0; i < 2; i++)
                    l_2199[i] = 0UL;
                if (p_11)
                    break;
                l_2180 = p_11;
                for (l_2006 = 0; (l_2006 >= 32); l_2006++)
                {
                    unsigned char l_2201 = 255UL;
                    int *l_2205 = (void*)0;
                    p_13 = 0xCABA2928L;
                    for (l_2174 = 0; (l_2174 < 7); l_2174++)
                    {
                        unsigned long long l_2200 = 0UL;
                        if (p_12)
                            break;
                        (*g_1439) = (safe_mod_func_uint32_t_u_u((+(safe_sub_func_int16_t_s_s(((7UL == ((safe_add_func_int32_t_s_s((+p_15), g_397)) ^ g_397)) == (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(g_1969, (g_166 >= (((safe_sub_func_int64_t_s_s(func_61((safe_rshift_func_int16_t_s_s(func_61(g_415, l_2199[1], p_13, p_11), 14)), l_2200, g_4, g_1610), l_2174)) , p_13) > 65529UL)))) && l_2180), 255UL))), l_2201))), l_2202[2]));
                        (**g_1937) &= 0xEEFEDC2FL;
                        p_13 |= func_68(g_872, (((l_2205 == (void*)0) != (((p_11 , (safe_rshift_func_uint8_t_u_s(l_2180, g_2003))) >= (((safe_mul_func_uint8_t_u_u(l_2212, (g_166 < (p_14 != g_76)))) & 0L) == 0x888F75C8L)) <= g_87[2][3][3])) , g_1472), l_2213, g_1610);
                    }
                    l_2215 = (*g_1756);

                    ;
                }

                ;
            }

            ;
        }
    }


    ;
    for (g_2003 = (-11); (g_2003 > 52); g_2003++)
    {
        char l_2354 = 0x0AL;
        int l_2355 = (-6L);
        int l_2357 = 0x5C17BE4CL;
        for (l_2342 = 24; (l_2342 <= (-16)); l_2342 = safe_sub_func_int16_t_s_s(l_2342, 6))
        {
            unsigned char l_2358 = 0x10L;
            for (p_12 = 0; (p_12 <= 24); ++p_12)
            {
                unsigned l_2350 = 0x18442079L;
                (**g_1937) = (l_2349 && g_563);
                if (l_2350)
                    break;
            }
            for (l_2349 = (-5); (l_2349 == 17); ++l_2349)
            {
                char l_2356 = 3L;
                (*g_1208) = g_2353;

                ;
                l_2358--;
                if (p_15)
                    continue;
                (*g_1209) = (0UL || g_551);
            }
        }
        g_2361--;
    }
    return p_11;



}







static short func_18(unsigned char p_19, unsigned p_20, short p_21, unsigned p_22)
{
    unsigned short l_42[8] = {9UL, 0x1C57L, 9UL, 0x1C57L, 9UL, 0x1C57L, 9UL, 0x1C57L};
    int l_1923 = 0x180915C8L;
    int i;
    l_1923 &= ((func_27((p_21 ^ (((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((!(p_21 & ((0xEE91B76E1EE67B38LL != func_34(p_21, (((func_40(l_42[7]) || (g_1210 <= (safe_unary_minus_func_int64_t_s(0x5DC917A0EAAE7D9ALL)))) | (p_22 && l_42[7])) || 0xB972L), l_42[7], l_42[4], p_20)) , 1UL))) < g_1068), g_1610)), l_42[7])) , l_42[7]) , g_166)), g_750) && p_20) ^ g_1610);



    (***g_1936) = (((void*)0 == &g_78[2]) >= ((safe_add_func_int16_t_s_s(9L, (((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((g_166 != (safe_mod_func_uint64_t_u_u(((l_42[4] <= 0UL) , 18446744073709551614UL), (safe_mod_func_int16_t_s_s(((&g_78[0] == (g_551 , g_1936)) || l_42[2]), l_42[7]))))) | 0x83L), 13)), p_21)), g_4)) ^ 0x728BE11B7E8944E0LL) || (-1L)))) < p_21));
    return l_1923;
}







static unsigned char func_27(unsigned char p_28, long long p_29)
{
    short l_1777 = 0L;
    int l_1778 = 0x8C886831L;
    int l_1787 = 1L;
    int l_1788 = (-1L);
    int l_1789 = 0x95938E44L;
    int l_1790[10][10][2] = {{{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}, {{0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}, {0L, 0xB49F5E64L}}};
    int l_1791 = 0L;
    unsigned l_1811 = 0UL;
    unsigned char l_1839 = 2UL;
    int *l_1903 = &g_76;
    int i, j, k;
    for (g_267 = 0; (g_267 <= 25); g_267 = safe_add_func_int8_t_s_s(g_267, 1))
    {
        return p_29;
    }
    for (g_1068 = 0; (g_1068 <= 3); g_1068 += 1)
    {
        int l_1779 = 0x453576D6L;
        int *l_1780 = &g_76;
        int *l_1781 = (void*)0;
        int *l_1782 = &g_87[0][1][3];
        int *l_1783 = (void*)0;
        int *l_1784 = &g_87[1][1][6];
        int l_1785 = 3L;
        int *l_1786[1][8][1];
        unsigned l_1909 = 18446744073709551614UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1786[i][j][k] = (void*)0;
            }
        }
        g_1792++;
        (*l_1782) &= 4L;
        if ((p_29 , (g_1418 , ((g_78[g_1068] != ((~(safe_add_func_int64_t_s_s(l_1791, p_28))) , &g_1439)) >= ((void*)0 != &g_1208)))))
        {
            short l_1810 = 1L;
            unsigned long long l_1838[8][5][4] = {{{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}, {{0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}, {0x632720136B555794LL, 0x10A026D0C05B7851LL, 9UL, 0x74D695708A3DC93ELL}}};
            int *l_1856 = &g_87[0][1][3];
            char l_1863[10][5][1] = {{{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}, {{0x59L}, {0x59L}, {0x59L}, {0x59L}, {0x59L}}};
            long long l_1875 = 1L;
            int i, j, k;
            if (p_28)
            {
                int *l_1809 = &l_1788;
                (*g_1439) ^= ((((((((safe_sub_func_int64_t_s_s((((*l_1782) || ((void*)0 == g_1799[1])) > (g_1418 != (safe_rshift_func_int8_t_s_s(((p_28 != (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((p_28 > (g_4 ^ (((((((((g_1069 , (safe_sub_func_uint32_t_u_u((g_415 <= l_1789), g_166))) >= 0x39L) , l_1809) != (*g_1208)) & 0xE3L) , l_1810) >= 0x40L) > p_28) <= l_1787))), 4)) , p_29), l_1810))))) ^ p_29), l_1810)))), g_1068)) | g_1068) , l_1811) != p_28) , 4UL) , g_1069) || l_1777) == g_397);
                if (((*l_1782) && p_29))
                {
                    unsigned long long l_1842 = 0x3D5889DFED15AEF0LL;
                    for (l_1810 = 0; (l_1810 > 20); l_1810 = safe_add_func_int64_t_s_s(l_1810, 1))
                    {
                        unsigned l_1820 = 4294967295UL;
                        int **l_1829 = &g_1799[2];
                        (*l_1782) = (safe_mod_func_uint8_t_u_u(0x9EL, (safe_mul_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(((l_1820 , (g_551 ^ p_28)) ^ (((safe_mod_func_uint32_t_u_u(((g_1472 < 0x27F5L) , ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((~(safe_mod_func_int16_t_s_s((((g_267 , l_1829) != (void*)0) & p_29), (-9L)))), 7)) , 4294967295UL), p_29)) && p_28)), p_29)) && 0x9819L) & 9L)), (-1L))) < p_29) , 0xF8L), p_29))));
                    }
                    (**g_1208) = (safe_add_func_uint64_t_u_u((((1L ^ (safe_mod_func_int16_t_s_s((l_1811 , func_34(((safe_lshift_func_uint8_t_u_u((((((p_29 , p_29) | (func_47(p_29, (g_551 , p_29), (safe_rshift_func_uint16_t_u_u(p_28, 9)), (0xDEL || l_1838[2][2][3]), p_29) && p_29)) && (-1L)) ^ p_28) | g_166), p_29)) || 0x618E897B7D9C6C48LL), p_28, l_1839, p_29, p_28)), p_28))) == l_1790[0][9][1]) == g_750), p_29));
                    for (l_1810 = 0; (l_1810 == (-29)); --l_1810)
                    {
                        ++l_1842;
                        (*l_1780) &= (*l_1784);
                        (*l_1784) = p_28;
                    }
                }
                else
                {
                    for (l_1788 = 1; (l_1788 <= 4); l_1788 += 1)
                    {
                        short l_1855 = 0x23A7L;
                        int i;
                        (*l_1782) = (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_1838[2][2][3], ((p_28 < ((safe_add_func_int16_t_s_s(((((((p_29 , g_1418) || (-10L)) , (-1L)) , p_28) && p_28) , 1L), p_29)) | p_28)) ^ g_1610))) | g_87[0][1][3]), 0x4F52L));
                        if (l_1788)
                            break;
                    }
                }
            }
            else
            {
                (*l_1780) ^= ((safe_sub_func_uint16_t_u_u((g_563 != p_29), ((p_29 >= (l_1778 | (*l_1856))) <= 0xB6C3E154L))) || g_4);
                if (p_28)
                    break;
            }
            if (p_28)
                continue;
            for (g_166 = (-27); (g_166 > 6); g_166++)
            {
                int l_1870 = (-3L);
                unsigned l_1912[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1912[i] = 18446744073709551611UL;
                for (g_415 = 0; (g_415 < 29); g_415++)
                {
                    unsigned char l_1876 = 252UL;
                    int *l_1883 = &l_1790[0][5][0];
                    if ((l_1870 >= ((+l_1777) && (safe_mod_func_int8_t_s_s((p_28 || func_61((*l_1782), ((safe_rshift_func_int8_t_s_u(((*g_1756) != &g_1439), p_28)) & l_1875), g_1069, g_397)), l_1791)))))
                    {
                        return l_1876;
                    }
                    else
                    {
                        unsigned l_1884 = 0x67386948L;
                        int l_1904 = 0L;
                        l_1884 = ((p_28 <= (safe_mod_func_int64_t_s_s(l_1870, g_1069))) && ((((safe_rshift_func_uint8_t_u_s(l_1876, 0)) , (((p_29 & (l_1870 & (safe_mod_func_uint8_t_u_u(((l_1883 == ((!0x517DL) , (void*)0)) != 0x72E8EC5FL), (*l_1883))))) < g_1792) , p_29)) && 0xD0850B66L) && p_29));
                        if ((*g_1439))
                            continue;
                        l_1904 = (g_1210 >= ((g_1068 <= (safe_mul_func_int16_t_s_s((~((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((l_1870 ^ ((g_750 ^ p_29) , (((safe_rshift_func_int8_t_s_u(p_28, 1)) || ((safe_mod_func_uint64_t_u_u(p_29, (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0xFEL, ((((safe_rshift_func_uint16_t_u_s((*l_1780), p_28)) == 0x202EAACDL) , (void*)0) == l_1903))), (*l_1903))))) , 0x3DF2L)) , p_28))) > 8L) , g_87[3][3][3]))), 0xACL)))), 0x97L)) == l_1870)), g_1610))) <= l_1870));
                        return p_28;
                    }
                }
                for (g_267 = 3; (g_267 >= 0); g_267 -= 1)
                {
                    int l_1913 = 5L;
                    int i, j, k;
                    l_1913 ^= ((safe_rshift_func_int16_t_s_u(l_1838[g_267][g_267][g_267], 12)) != (func_68((0xFDE6L <= (safe_rshift_func_uint16_t_u_u(0x34DAL, ((g_551 , &l_1903) != (l_1909 , &g_79[4]))))), (((safe_sub_func_uint8_t_u_u((*l_1856), ((g_4 , p_28) >= (*l_1903)))) , &l_1785) != (void*)0), p_28, l_1912[0]) && 0x14L));
                }
            }
            (*g_1208) = (*g_1208);
        }
        else
        {
            return g_1610;
        }
    }
    for (l_1788 = (-11); (l_1788 < 7); l_1788++)
    {
        unsigned short l_1918 = 0x4592L;
        unsigned long long l_1919[10][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
        int **l_1920 = &g_1439;
        unsigned char l_1921 = 0x6EL;
        int l_1922 = 0L;
        int i, j;
        (*g_75) = 1L;
        l_1922 &= (safe_add_func_uint8_t_u_u((((*l_1903) || l_1918) != ((l_1918 || (0x6DL || (g_402 , (g_397 , ((((l_1919[3][0] | (l_1920 == (void*)0)) ^ g_166) != 0x348896E94AAA26E0LL) , p_28))))) && l_1921)), g_76));
        (*l_1920) = (*l_1920);
        (**l_1920) &= p_29;
    }
    return p_28;
}







static unsigned long long func_34(unsigned short p_35, char p_36, unsigned short p_37, char p_38, long long p_39)
{
    unsigned char l_1774[7][4] = {{1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}, {1UL, 1UL, 255UL, 255UL}};
    int i, j;
    (**g_1208) = l_1774[2][2];
    return g_1472;
}







static long long func_40(long long p_41)
{
    unsigned l_54 = 18446744073709551606UL;
    unsigned l_88 = 18446744073709551615UL;
    unsigned l_1088 = 8UL;
    unsigned l_1108 = 0x31A84C6EL;
    int **l_1114 = &g_79[3];
    int l_1136[3][5][4] = {{{0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}}, {{0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}}, {{0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}, {0x0F1EC621L, (-2L), (-6L), 0x222B0247L}}};
    unsigned l_1222 = 7UL;
    unsigned l_1321[5][1];
    int *l_1413 = &g_76;
    int *l_1459 = &g_87[0][1][3];
    int l_1486[1];
    int l_1525[3];
    int l_1585 = 0x8F6D0EA2L;
    unsigned char l_1595 = 249UL;
    unsigned l_1605 = 0UL;
    int **l_1615 = &l_1459;
    int l_1647 = 7L;
    unsigned char l_1722 = 0x7CL;
    int l_1738 = 0xDBE583C6L;
    short l_1764 = 0x29A8L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1321[i][j] = 0UL;
    }
    for (i = 0; i < 1; i++)
        l_1486[i] = 6L;
    for (i = 0; i < 3; i++)
        l_1525[i] = 0L;
    if ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((((func_47(g_4, (safe_unary_minus_func_int64_t_s((~((l_54 , 0x5EA37665L) < g_4)))), func_55((((+g_4) < func_61((safe_rshift_func_int16_t_s_s(l_54, func_68(l_54, ((safe_sub_func_int64_t_s_s((g_4 , p_41), 0x72CE3C489718B2F1LL)) , p_41), l_54, g_4))), p_41, l_54, l_54)) || (*g_75)), l_88, l_54, g_4, g_4), p_41, l_88) == l_1088) , 0L) > 0xE1E5L) > p_41), g_750)) | 0x20L), 0UL)))
    {
        int *l_1089 = &g_87[0][1][3];
        int *l_1090 = (void*)0;
        int *l_1091 = &g_87[0][1][3];
        int *l_1092 = (void*)0;
        int l_1093 = 0xD5E58DC0L;
        int *l_1094 = &g_76;
        int *l_1095 = &g_87[0][1][3];
        int *l_1096 = (void*)0;
        int *l_1097 = (void*)0;
        int *l_1098 = &g_267;
        int *l_1099 = (void*)0;
        int *l_1100 = &g_87[0][1][3];
        int *l_1101 = &g_87[0][1][3];
        int l_1102 = 0x7E469234L;
        int *l_1103 = (void*)0;
        int *l_1104 = &g_76;
        int l_1105 = 1L;
        int *l_1106 = &l_1105;
        int *l_1107[1][5] = {{&g_87[0][1][3], &l_1093, &g_87[0][1][3], &l_1093, &g_87[0][1][3]}};
        int *l_1121 = (void*)0;
        long long l_1123[3];
        short l_1180 = (-8L);
        short l_1219 = 0x868EL;
        int ***l_1266 = &g_440[5][4];
        char l_1271 = 0x18L;
        unsigned l_1361 = 4294967295UL;
        unsigned l_1383 = 0x140D50C2L;
        unsigned char l_1397 = 1UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1123[i] = 0xDA20C8B259163C22LL;
        l_1108--;
        for (p_41 = 0; (p_41 <= 3); p_41 += 1)
        {
            unsigned short l_1113 = 0UL;
            int l_1120 = 2L;
            int *l_1133[1];
            unsigned l_1205 = 0x945B6C31L;
            int i;
            for (i = 0; i < 1; i++)
                l_1133[i] = &g_87[3][0][4];
            for (l_1105 = 0; (l_1105 <= 3); l_1105 += 1)
            {
                unsigned l_1124[8][5][1] = {{{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}, {{0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}, {0x02EEE9B9L}}};
                int l_1135 = 0x8F1D2348L;
                int l_1144 = 0L;
                int l_1146 = 0x5522A664L;
                unsigned l_1147 = 0xF5834095L;
                int l_1153 = 0xEFBA5F7EL;
                int l_1157 = 0L;
                int l_1158 = 3L;
                int l_1159 = 8L;
                unsigned short l_1160 = 65535UL;
                unsigned l_1169[5][10] = {{0xAF4AA6F5L, 0x92C0B0E0L, 0xA11CF288L, 0x92C0B0E0L, 0xAF4AA6F5L, 0x919BAA01L, 2UL, 0x92C0B0E0L, 0xDDD5BAAFL, 0x92C0B0E0L}, {0xAF4AA6F5L, 0x92C0B0E0L, 0xA11CF288L, 0x92C0B0E0L, 0xAF4AA6F5L, 0x919BAA01L, 2UL, 0x92C0B0E0L, 0xDDD5BAAFL, 0x92C0B0E0L}, {0xAF4AA6F5L, 0x92C0B0E0L, 0xA11CF288L, 0x92C0B0E0L, 0xAF4AA6F5L, 0x919BAA01L, 2UL, 0x92C0B0E0L, 0xDDD5BAAFL, 0x92C0B0E0L}, {0xAF4AA6F5L, 0x92C0B0E0L, 0xA11CF288L, 0x92C0B0E0L, 0xAF4AA6F5L, 0x919BAA01L, 2UL, 0x92C0B0E0L, 0xDDD5BAAFL, 0x92C0B0E0L}, {0xAF4AA6F5L, 0x92C0B0E0L, 0xA11CF288L, 0x92C0B0E0L, 0xAF4AA6F5L, 0x919BAA01L, 2UL, 0x92C0B0E0L, 0xDDD5BAAFL, 0x92C0B0E0L}};
                int i, j, k;
                if ((safe_lshift_func_int8_t_s_s(l_1113, p_41)))
                {
                    int ***l_1115 = &l_1114;
                    int *l_1122 = &l_1102;
                    int l_1138 = 0L;
                    int l_1140 = 0x056B4F7AL;
                    int l_1142 = 0x669E249DL;
                    int l_1151 = 0L;
                    int l_1156 = (-1L);
                    (*l_1115) = l_1114;
                    (*l_1100) |= 1L;
                    (**l_1115) = (void*)0;
                    if ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((func_61(g_267, l_1120, (l_1121 != (p_41 , l_1122)), (((void*)0 == &g_78[2]) & (func_68((*l_1122), g_563, p_41, (*l_1089)) | l_1123[2]))) , g_402) == g_397) & 0x87L), p_41)) | p_41), 0)))
                    {
                        long long l_1129[6] = {1L, 1L, (-1L), 1L, 1L, (-1L)};
                        char l_1130[6] = {0xECL, 0L, 0xECL, 0L, 0xECL, 0L};
                        int i;
                        --l_1124[5][0][0];
                        (*l_1094) = (((g_87[0][1][3] > (l_1129[2] && (((l_1130[0] , (((1L ^ 0UL) > 0x741E7D93685746BFLL) | (*l_1122))) < (l_1133[0] == &l_1093)) == p_41))) == (*l_1122)) , (-10L));
                    }
                    else
                    {
                        short l_1134 = (-1L);
                        int l_1137 = 1L;
                        int l_1139 = 6L;
                        int l_1141 = 0xB81656EBL;
                        int l_1143 = (-4L);
                        int l_1145 = 0xED9D5327L;
                        int l_1150 = 1L;
                        int l_1152 = 0xD8121816L;
                        int l_1154 = (-1L);
                        int l_1155 = 0x7BE2A2F2L;
                        l_1147++;
                        if (p_41)
                            continue;
                        --l_1160;
                    }
                }
                else
                {
                    (*l_1091) ^= func_68(p_41, ((((safe_mod_func_uint16_t_u_u(g_166, p_41)) != 0UL) > (18446744073709551608UL == g_415)) , (-6L)), (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_1169[1][8], 9)) & (l_1133[0] != &l_1105)), g_1069)), p_41);
                    if (p_41)
                        break;
                    (*l_1114) = (void*)0;
                }
                (*l_1100) = ((g_551 >= (safe_rshift_func_int16_t_s_s(((((p_41 == ((safe_rshift_func_int8_t_s_s((((((safe_add_func_uint64_t_u_u((((g_4 >= (p_41 ^ 7UL)) > ((safe_rshift_func_int8_t_s_s(g_4, p_41)) > ((safe_sub_func_uint64_t_u_u((((&l_1114 == (void*)0) , l_1133[0]) != (void*)0), g_4)) ^ g_87[0][1][3]))) == p_41), p_41)) , &g_79[2]) != &g_79[0]) , 4294967290UL) , p_41), g_4)) , p_41)) , l_1180) & g_397) | 1UL), g_397))) | g_87[0][3][2]);
                for (l_1108 = 0; (l_1108 <= 3); l_1108 += 1)
                {
                    unsigned l_1187 = 0UL;
                    if (((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(g_1069, (((((safe_mul_func_uint8_t_u_u(g_563, g_87[3][2][6])) , g_563) | 1UL) <= p_41) & (p_41 , ((&l_1135 != (void*)0) ^ l_1135))))) , l_1187) && g_551) > 0xC95A9182L), l_1153)) ^ p_41))
                    {
                        int i, j, k;
                        if (p_41)
                            break;
                        g_87[(p_41 + 2)][l_1105][(l_1108 + 1)] = ((g_872 != g_76) <= ((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((void*)0 == &g_79[0]), (safe_add_func_int64_t_s_s(p_41, g_1068)))) & g_166), (g_76 && 1L))) , 0xADCFL));
                    }
                    else
                    {
                        int *l_1194[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1194[i] = &l_1136[2][0][2];
                        (*l_1114) = l_1194[0];
                    }
                }
                for (l_1146 = 3; (l_1146 >= 0); l_1146 -= 1)
                {
                    int i, j, k;
                    l_1136[1][4][3] ^= ((((g_87[2][2][3] >= (safe_mul_func_uint8_t_u_u(g_415, (~g_267)))) <= (safe_rshift_func_uint16_t_u_u(((p_41 == ((l_1169[1][8] || ((+g_1068) >= g_4)) != p_41)) | func_68(g_1069, l_1135, g_4, p_41)), 2))) > 0x9C20L) >= g_87[3][2][5]);
                }
            }
            for (l_1113 = 0; (l_1113 != 8); l_1113 = safe_add_func_int32_t_s_s(l_1113, 2))
            {
                unsigned l_1215 = 18446744073709551609UL;
                for (g_1069 = 0; (g_1069 <= 49); g_1069 = safe_add_func_uint16_t_u_u(g_1069, 2))
                {
                    short l_1211 = 5L;
                    int *l_1214 = &g_76;
                    (*l_1214) |= (safe_rshift_func_uint16_t_u_s(((l_1205 , l_1114) != ((safe_add_func_uint8_t_u_u((g_1208 == (void*)0), g_1068)) , (void*)0)), p_41));
                    for (l_54 = 0; (l_54 > 56); l_54++)
                    {
                        short l_1218 = 0x7BEAL;
                        (*l_1094) |= l_1218;
                    }
                    if (p_41)
                        break;
                }
                if (l_1219)
                {
                    unsigned l_1223[10][3][1] = {{{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}};
                    int i, j, k;
                    if ((0xB4L == func_68(g_415, func_61(g_161, (*l_1089), ((+((func_68(g_1069, (func_68(p_41, (safe_sub_func_int8_t_s_s(p_41, func_68(l_1222, ((g_563 & (*l_1094)) && g_87[0][1][3]), p_41, l_1223[8][2][0]))), p_41, p_41) , 3L), g_161, g_87[0][1][3]) , 0x03L) <= 0xD4L)) < p_41), l_1215), g_4, l_1215)))
                    {
                        (*l_1100) ^= ((safe_rshift_func_uint8_t_u_u((p_41 < (*g_1209)), 7)) > 0xA2A419594B1659DBLL);
                        (*l_1114) = &l_1093;


                        (*l_1114) = l_1133[0];
                    }
                    else
                    {
                        if ((*g_75))
                            break;
                    }


                    return p_41;


                }
                else
                {
                    return g_1068;


                }
            }
        }


        for (g_161 = 0; (g_161 <= 2); g_161 += 1)
        {
            int l_1238 = 0x5A18CA1DL;
            int i;
            (*l_1101) |= (((((safe_rshift_func_uint16_t_u_u(p_41, 9)) <= ((0xE03EL > ((g_397 , &g_78[(g_161 + 1)]) == &g_78[1])) , (safe_sub_func_uint64_t_u_u(p_41, p_41)))) , p_41) > (safe_mod_func_int64_t_s_s(p_41, p_41))) , (*l_1104));
            (*l_1106) = ((safe_lshift_func_int16_t_s_u(((void*)0 != &l_1136[1][4][3]), p_41)) < 0x24F0480B1A14A5F2LL);
            (*l_1101) = (safe_sub_func_int32_t_s_s((g_161 & (g_1210 , ((void*)0 == &g_192))), (safe_sub_func_int8_t_s_s((g_750 , (((+l_1238) >= g_76) & (p_41 , (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((~(((((((-2L) == 0x31CE0821497650B5LL) != 0x49C16F1AF5788E39LL) == 0x047142C8E911B772LL) < 1L) & p_41) || p_41)) != g_397), p_41)), p_41))))), 0xFAL))));
            for (l_1108 = 0; (l_1108 <= 2); l_1108 += 1)
            {
                unsigned l_1243 = 0x75905A48L;
                int ***l_1267 = (void*)0;
                for (l_1222 = 0; (l_1222 <= 2); l_1222 += 1)
                {
                    unsigned char l_1244 = 0UL;
                    long long l_1245 = 0xA98ACA033FAF6828LL;
                    int ***l_1268 = &g_440[5][4];
                    int i, j, k;
                    for (l_1219 = 0; (l_1219 <= 2); l_1219 += 1)
                    {
                        int i, j, k;
                        (*l_1114) = &l_1136[g_161][(l_1108 + 2)][(l_1219 + 1)];
                    }
                    l_1136[l_1108][l_1108][(l_1108 + 1)] &= func_68((*l_1098), (((((((*l_1098) , func_68(l_1243, (p_41 ^ (l_1244 == (l_1245 == (p_41 || ((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_41, (&l_1102 != &l_1093))), g_267)), p_41)) ^ p_41) == 0UL) <= 0x26L))))), (*l_1094), p_41)) > g_750) < g_267) , g_415) || p_41) | g_267), l_1245, g_1068);
                    for (l_1245 = 0; (l_1245 <= 2); l_1245 += 1)
                    {
                        int i;
                        (*l_1098) &= (l_1123[g_161] < (((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_1123[g_161] , g_872), 1)), l_1243)) || p_41) >= p_41));
                        if (l_1245)
                            break;
                        (*l_1095) = ((safe_rshift_func_int16_t_s_s((0x0BL >= (safe_rshift_func_int8_t_s_u(func_68(p_41, (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((l_1266 != (((void*)0 == l_1267) , l_1268)), g_161)) != (safe_lshift_func_int8_t_s_u(p_41, 5))), (18446744073709551615UL < l_1271))) == 1L), (-1L))), p_41, g_1068), l_1238))), l_1238)) || g_76);
                    }
                }
                if (p_41)
                    continue;
                for (l_1238 = 0; (l_1238 > 12); l_1238 = safe_add_func_int8_t_s_s(l_1238, 2))
                {
                    (*l_1114) = (void*)0;
                    return g_161;


                }
                if (p_41)
                    break;
            }
        }
        for (g_161 = 17; (g_161 > 18); g_161++)
        {
            unsigned char l_1279 = 1UL;
            int *l_1290 = &l_1136[0][3][0];
            int ***l_1324 = &g_440[6][3];
            int l_1327 = (-8L);
            int l_1328 = 0L;
            int l_1331 = 0xE8134D76L;
            int l_1333 = (-10L);
            int l_1339 = 6L;
            int l_1340 = 0xF3A83BCEL;
            int l_1341 = (-10L);
            int l_1342 = 3L;
            int l_1343 = 1L;
            int l_1359 = 7L;
            int l_1360 = (-3L);
            unsigned l_1384 = 0xEF3E9CBEL;
            unsigned l_1398[10] = {0x695E5CE4L, 0x7FD4FF7FL, 0x695E5CE4L, 0x7FD4FF7FL, 0x695E5CE4L, 0x7FD4FF7FL, 0x695E5CE4L, 0x7FD4FF7FL, 0x695E5CE4L, 0x7FD4FF7FL};
            int i;
            for (l_1093 = (-13); (l_1093 != (-17)); l_1093 = safe_sub_func_uint64_t_u_u(l_1093, 1))
            {
                int *l_1278 = &l_1102;
                int l_1325 = (-1L);
                int l_1329 = 0L;
                int l_1334[6][5][3] = {{{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}, {{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}, {{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}, {{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}, {{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}, {{0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}, {0xC71F4BFAL, 0xC71F4BFAL, 0L}}};
                int **l_1352 = &l_1107[0][3];
                int l_1357 = 0x38C5CC87L;
                int i, j, k;
                (*l_1114) = l_1278;
                ++l_1279;
                if ((((0xEF6AL == (func_47((((*g_75) && (g_4 != (safe_rshift_func_int8_t_s_s((*l_1278), 4)))) | (safe_sub_func_int64_t_s_s((g_750 && (safe_mod_func_uint64_t_u_u(0xA8C4AEBD580678C8LL, (safe_mod_func_uint16_t_u_u((l_1279 & ((g_415 , (0x23AFCCFAL | 0xC0D279DBL)) , p_41)), 0x5C58L))))), p_41))), l_1279, p_41, g_166, g_397) >= g_397)) && g_161) == p_41))
                {
                    int l_1304 = 0x2043DB37L;
                    (*g_192) = l_1278;
                    (*l_1114) = l_1290;
                    for (l_1102 = 0; (l_1102 < 23); l_1102++)
                    {
                        unsigned l_1293[5][1][9] = {{{4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L, 3UL, 4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L}}, {{4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L, 3UL, 4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L}}, {{4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L, 3UL, 4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L}}, {{4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L, 3UL, 4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L}}, {{4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L, 3UL, 4294967295UL, 3UL, 0x48FEC7F3L, 0x48FEC7F3L}}};
                        int i, j, k;
                        (*l_1098) = ((l_1293[4][0][0] || ((&g_192 == (void*)0) || ((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((*l_1278) >= g_402), (((safe_add_func_int32_t_s_s((g_750 || ((((p_41 , (g_1069 | (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(0xF9A1L, l_1293[4][0][0])), l_1304)))) > p_41) ^ 0x4E777EB5L) > p_41)), l_1293[0][0][7])) != g_166) != p_41))), (*l_1278))) > p_41))) != 0x2C15DF03L);
                    }
                    (*l_1104) &= (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint16_t_u_u((g_402 , p_41), (((void*)0 == &g_79[3]) < (-10L)))) | ((safe_lshift_func_int8_t_s_s(0x75L, (g_267 != g_166))) , ((*l_1100) == 18446744073709551612UL))) != p_41) , (*l_1278)), p_41));
                }
                else
                {
                    if (p_41)
                        break;
                    (*l_1089) = (safe_rshift_func_int8_t_s_u(0xA7L, (p_41 < p_41)));
                }
                for (l_1219 = 0; (l_1219 <= 4); l_1219 += 1)
                {
                    int **l_1315 = &l_1121;
                    int l_1330 = 0xB204A46DL;
                    int l_1332 = 0xECAC2816L;
                    int l_1335 = (-1L);
                    int l_1337 = 0x9904C1A8L;
                    int l_1338 = 1L;
                    int l_1344[5] = {0xC0691451L, (-6L), 0xC0691451L, (-6L), 0xC0691451L};
                    unsigned l_1345 = 4294967295UL;
                    int i;
                    for (l_1222 = 0; (l_1222 <= 4); l_1222 += 1)
                    {
                        unsigned long long l_1320[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1320[i] = 0xA39E26A244E3CE5FLL;
                        (*l_1095) ^= (safe_lshift_func_uint16_t_u_u(((void*)0 != l_1315), (*l_1278)));
                        (*l_1106) = func_47(g_872, (safe_lshift_func_uint8_t_u_s((p_41 < p_41), 7)), p_41, (g_87[2][2][2] , (safe_mul_func_int8_t_s_s(l_1320[0], ((p_41 >= 0xDD4FBBD2A394FE35LL) != ((void*)0 != (*g_1208)))))), g_166);
                        (**g_1208) &= l_1321[2][0];
                    }
                    if (func_47(g_872, (*l_1278), p_41, p_41, ((g_4 < (safe_sub_func_int32_t_s_s((((*l_1104) > (~((void*)0 == (*l_1315)))) , ((l_1324 != &g_440[7][3]) || p_41)), 0L))) , l_1325)))
                    {
                        int l_1326[8] = {(-1L), (-1L), 0xB67F7965L, (-1L), (-1L), 0xB67F7965L, (-1L), (-1L)};
                        long long l_1336 = 0L;
                        int i, j;
                        ++l_1345;
                    }
                    else
                    {
                        return p_41;


                    }
                    (*l_1089) = ((*g_1208) == (*g_1208));
                    if ((+(safe_add_func_int32_t_s_s((255UL || g_397), (safe_add_func_uint32_t_u_u(((l_1352 != (void*)0) , (safe_mul_func_uint8_t_u_u((func_68(func_68((7L & (((safe_mod_func_int32_t_s_s(p_41, (g_551 && (((g_1069 != (*l_1101)) == p_41) , (**l_1352))))) < p_41) >= g_4)), l_1357, g_87[2][3][0], p_41), p_41, p_41, p_41) == 2L), 8UL))), p_41))))))
                    {
                        (*l_1104) ^= 0x2AB4F14EL;
                        return l_1344[4];


                    }
                    else
                    {
                        (*l_1324) = (void*)0;
                        return p_41;


                    }
                }
            }
            (*l_1114) = (g_267 , &l_1136[1][4][3]);
            for (g_267 = 3; (g_267 >= 0); g_267 -= 1)
            {
                int l_1358[9] = {0x7C7FBEEDL, 0xA56C7183L, 0x7C7FBEEDL, 0xA56C7183L, 0x7C7FBEEDL, 0xA56C7183L, 0x7C7FBEEDL, 0xA56C7183L, 0x7C7FBEEDL};
                int l_1374 = 0x9A4E960CL;
                short l_1382 = 0x7704L;
                int i, j;
                --l_1361;
                if (p_41)
                    break;
                for (g_415 = 2; (g_415 >= 0); g_415 -= 1)
                {
                    int *l_1370 = &l_1136[g_415][g_267][(g_415 + 1)];
                    int ***l_1381 = &g_440[(g_267 + 2)][g_267];
                    short l_1393[9][8] = {{(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}, {(-1L), (-7L), 6L, 0x9A9FL, (-1L), (-1L), 0x68AFL, 0x99BFL}};
                    int i, j, k;
                    if ((l_1136[g_415][g_267][(g_415 + 1)] , ((&l_1136[g_415][g_267][(g_415 + 1)] == (void*)0) > (safe_mod_func_uint16_t_u_u(((g_87[0][1][3] , l_1136[g_415][g_267][(g_415 + 1)]) != (p_41 <= 0x6E16B1FAL)), (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_41, ((g_161 , 65532UL) , 4UL))), p_41)))))))
                    {
                        if (p_41)
                            break;
                    }
                    else
                    {
                        l_1370 = &l_1136[g_415][g_267][(g_415 + 1)];
                    }
                    for (l_1342 = 10; (l_1342 == (-25)); --l_1342)
                    {
                        int *l_1373 = &l_1331;
                        (*l_1114) = l_1373;
                    }
                }
                l_1398[1]++;
            }


        }


    }
    else
    {
        int ***l_1408 = &g_440[8][1];
        int *l_1409 = &g_87[2][0][3];
        short l_1410 = 1L;
        short l_1431[5];
        int l_1468 = 0xBC19E6E1L;
        int l_1469 = 1L;
        int l_1470 = 2L;
        int l_1471 = 0L;
        int *l_1509 = &g_267;
        unsigned long long l_1657 = 18446744073709551606UL;
        long long l_1691 = 0xB24630D9F283E413LL;
        int l_1692 = (-1L);
        int l_1697 = 0xA1F5A51AL;
        int l_1699[10] = {0x37831E42L, 0xE83C7730L, 0x37831E42L, 0xE83C7730L, 0x37831E42L, 0xE83C7730L, 0x37831E42L, 0xE83C7730L, 0x37831E42L, 0xE83C7730L};
        int i;
        for (i = 0; i < 5; i++)
            l_1431[i] = 0xDB9CL;
        for (l_1108 = (-24); (l_1108 >= 37); l_1108++)
        {
            int *l_1405 = &g_267;
            int ***l_1416[1];
            int l_1429 = 6L;
            int l_1534[10] = {0x38883770L, 1L, 0x38883770L, 1L, 0x38883770L, 1L, 0x38883770L, 1L, 0x38883770L, 1L};
            int l_1540 = 0x4C5E18DDL;
            unsigned short l_1576 = 0xEC9BL;
            int **l_1579[10] = {&l_1413, &l_1409, &l_1413, &l_1409, &l_1413, &l_1409, &l_1413, &l_1409, &l_1413, &l_1409};
            short l_1580[9][8] = {{0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}, {0xF5CBL, (-1L), 0x8612L, 2L, 0L, (-2L), 0x17B2L, (-4L)}};
            volatile int *l_1636 = &g_1210;
            long long l_1660 = (-10L);
            int l_1698 = 0x6DFECB51L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1416[i] = &l_1114;
        }
        if (p_41)
        {
            int l_1730 = 6L;
            short l_1731 = (-8L);
            int *l_1733 = (void*)0;
            for (l_1697 = 0; (l_1697 <= (-29)); --l_1697)
            {
                int *l_1717 = &g_87[0][1][3];
                for (l_88 = 1; (l_88 <= 4); l_88 += 1)
                {
                    short l_1723 = 0L;
                    int *l_1732 = &g_87[5][3][4];
                    for (g_415 = 0; (g_415 <= 3); g_415 += 1)
                    {
                        int i;
                        (*l_1615) = l_1717;
                    }
                    if ((g_87[0][1][3] | ((p_41 & (*l_1717)) < ((((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_41, p_41)), ((g_402 | 0x45B4E60D2E653D3ALL) && (-5L)))) >= g_161) , &l_1730) == l_1732))))
                    {
                        int i, j;
                        l_1733 = (void*)0;
                    }
                    else
                    {
                        unsigned char l_1737 = 0UL;
                        int l_1739 = 0x4CF71236L;
                        int l_1744 = 0x9FD2B101L;
                        l_1739 = (p_41 <= (((((((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint64_t_u_u((func_47(l_1737, p_41, ((func_68((((*l_1732) && ((g_166 , 65526UL) && (p_41 , (p_41 && p_41)))) & p_41), (*l_1717), (*l_1732), p_41) , p_41) | (*l_1732)), p_41, (**l_1615)) , (**l_1615)), l_1738)))) < g_397) == 1L) | p_41) != g_1472) > g_750) , (*l_1409)));
                        (*l_1459) = ((safe_mul_func_int16_t_s_s(func_61(p_41, p_41, (*l_1409), (l_1739 >= (**l_1615))), g_415)) , (safe_mod_func_uint32_t_u_u(((((((~(+(((g_563 > ((0xE5B0L && g_161) & l_1744)) & (*l_1732)) <= 0x8E72CC6491A587DELL))) , 5L) > l_1744) != g_4) == p_41) != (*l_1717)), p_41)));
                    }
                }
                for (g_415 = 0; (g_415 <= 2); g_415++)
                {
                    unsigned char l_1761[10] = {0x63L, 0x29L, 0x63L, 0x29L, 0x63L, 0x29L, 0x63L, 0x29L, 0x63L, 0x29L};
                    int l_1765 = 1L;
                    int i;
                    if ((safe_rshift_func_uint16_t_u_s(p_41, (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((&l_1717 == (void*)0), ((void*)0 != l_1717))), p_41)), g_338)))))
                    {
                        if (p_41)
                            break;
                    }
                    else
                    {
                        (*l_1615) = (g_750 , l_1717);
                        (*g_1756) = g_1755;
                        if (p_41)
                            break;
                    }
                    (*l_1409) = ((safe_add_func_int64_t_s_s((p_41 , ((safe_rshift_func_int8_t_s_s(g_87[0][1][3], (p_41 | 7UL))) ^ ((g_166 >= (((~1UL) && ((((*g_1208) != (void*)0) , g_1472) || g_4)) == l_1761[4])) == g_1610))), p_41)) , l_1761[4]);
                    for (l_1691 = 0; (l_1691 <= (-28)); l_1691 = safe_sub_func_int64_t_s_s(l_1691, 2))
                    {
                        (*l_1509) |= (-6L);
                        (*l_1409) |= 0x13968748L;
                        l_1765 = ((g_1418 ^ p_41) < l_1764);
                        (*l_1615) = (*l_1615);
                    }
                }
                if ((*l_1717))
                    break;
            }
            (**l_1615) = (18446744073709551615UL || (*l_1413));
            for (g_397 = (-7); (g_397 == 3); g_397 = safe_add_func_int64_t_s_s(g_397, 3))
            {
                unsigned l_1770[1][4] = {{1UL, 0xCF22777CL, 1UL, 0xCF22777CL}};
                int i, j;
                (**g_1208) = ((g_1069 , 0L) != 0xABF03985L);
                for (l_1585 = (-3); (l_1585 > (-15)); l_1585--)
                {
                    l_1770[0][3]--;
                }
                (*l_1509) = (-2L);
            }
        }
        else
        {
            (*g_1439) = p_41;
        }
    }



    return p_41;


}







static long long func_47(unsigned p_48, char p_49, unsigned char p_50, short p_51, unsigned long long p_52)
{
    unsigned char l_909 = 1UL;
    int *l_914[9] = {&g_87[0][1][3], &g_87[0][1][3], &g_87[4][2][2], &g_87[0][1][3], &g_87[0][1][3], &g_87[4][2][2], &g_87[0][1][3], &g_87[0][1][3], &g_87[4][2][2]};
    int l_934 = (-1L);
    int *l_941 = &l_934;
    long long l_954[10][6][4] = {{{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}, {{0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}, {0x92173658B6688924LL, 0xF1C4B8175B07EF70LL, (-1L), 0xFA1FF7092E259666LL}}};
    int ***l_983 = &g_440[5][4];
    int l_1002 = 0xD4FEFAC5L;
    int *l_1031[4][3] = {{&l_1002, &g_267, &l_1002}, {&l_1002, &g_267, &l_1002}, {&l_1002, &g_267, &l_1002}, {&l_1002, &g_267, &l_1002}};
    unsigned long long l_1037 = 0xE1F01FD24192A042LL;
    long long l_1043[8] = {(-4L), (-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)};
    char l_1061 = 8L;
    int l_1065[2];
    long long l_1067 = 0x3630C528E9E2ACF6LL;
    long long l_1087 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1065[i] = 0xFBEADEA3L;
    for (p_51 = (-16); (p_51 != 17); ++p_51)
    {
        long long l_908 = 1L;
        int *l_912 = &g_267;
        int l_918 = 0x8FC87EA9L;
        int l_919[5] = {(-1L), 0xD3B22D49L, (-1L), 0xD3B22D49L, (-1L)};
        unsigned l_920 = 18446744073709551613UL;
        int ***l_952 = &g_440[5][4];
        unsigned char l_1028[9] = {0x84L, 0x84L, 255UL, 0x84L, 0x84L, 255UL, 0x84L, 0x84L, 255UL};
        int i;
        (*l_912) ^= ((safe_sub_func_int16_t_s_s((+l_908), ((((l_909 >= ((250UL | func_61(l_908, (l_909 , (p_51 != l_909)), g_161, l_908)) >= l_908)) , p_50) , g_87[2][2][1]) || 1UL))) | p_50);
    }
    for (l_1002 = (-8); (l_1002 < (-18)); l_1002--)
    {
        int **l_1086[6][5] = {{(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}, {(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}, {(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}, {(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}, {(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}, {(void*)0, &l_914[3], (void*)0, &l_914[3], (void*)0}};
        int i, j;
        (*l_941) ^= ((safe_sub_func_int64_t_s_s((0x9AC8D0CCL | (g_87[0][1][3] < (&l_1031[3][0] == l_1086[5][3]))), 0x9BBB3A754F0D6F5BLL)) != (l_1087 , 1L));
    }
    (*l_941) ^= p_50;
    return g_397;
}







static unsigned char func_55(unsigned char p_56, unsigned char p_57, char p_58, int p_59, short p_60)
{
    int *l_89 = &g_87[4][3][0];
    int l_112 = 0x8F025C2DL;
    unsigned l_115[4][1][5] = {{{0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL}}, {{0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL}}, {{0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL}}, {{0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL, 0x8291DA39L, 0x325E2F7FL}}};
    int *l_128[4];
    unsigned long long l_197 = 0x77A3353FAB730275LL;
    short l_242[2];
    int l_278 = 0L;
    long long l_284[8][8][3] = {{{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}, {{0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}, {0xB1E2C253FF1EF5FALL, 0x8E4076FA71606EB4LL, 0x9D4D9E788E5EA57CLL}}};
    short l_285[1];
    long long l_345[7] = {0xE4600EC429C54269LL, 0xE4600EC429C54269LL, (-5L), 0xE4600EC429C54269LL, 0xE4600EC429C54269LL, (-5L), 0xE4600EC429C54269LL};
    unsigned long long l_451 = 0xDED1E47A8E12A979LL;
    unsigned l_479 = 4294967295UL;
    short l_540 = 0x982FL;
    int *l_582 = &g_76;
    unsigned l_597[2];
    int ***l_709 = &g_440[5][4];
    char l_714[6][4][9] = {{{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}, {{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}, {{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}, {{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}, {{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}, {{0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}, {0x20L, 0x92L, (-2L), 0x91L, 5L, 0x7BL, 0xA3L, 1L, 0xB6L}}};
    unsigned l_720[3];
    char l_794 = (-2L);
    unsigned char l_827[8] = {1UL, 1UL, 0x89L, 1UL, 1UL, 0x89L, 1UL, 1UL};
    unsigned short l_886 = 0xE295L;
    int l_889[3];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_128[i] = &g_76;
    for (i = 0; i < 2; i++)
        l_242[i] = 0xA82FL;
    for (i = 0; i < 1; i++)
        l_285[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_597[i] = 0xD8A5259DL;
    for (i = 0; i < 3; i++)
        l_720[i] = 6UL;
    for (i = 0; i < 3; i++)
        l_889[i] = 0L;
    if (((void*)0 == l_89))
    {
        int *l_92 = &g_87[2][1][7];
        unsigned l_129[10][9] = {{0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}, {0x7B122D03L, 0x4E6105D7L, 0UL, 0x79843EB0L, 4UL, 18446744073709551606UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551615UL}};
        short l_218 = 0xBB7DL;
        int l_231 = 0x393004D8L;
        int l_234 = (-1L);
        int l_243 = 0x01EF6679L;
        unsigned l_290 = 0x8311B6FFL;
        unsigned l_341 = 1UL;
        unsigned l_369[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_369[i] = 0xF13ABF14L;
        for (p_57 = 20; (p_57 >= 55); ++p_57)
        {
            short l_96 = 0xE31AL;
            int *l_111[8] = {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76};
            int i;
            (*g_93) = l_92;
            for (p_60 = (-24); (p_60 > 5); p_60++)
            {
                return g_87[0][1][3];
            }
            (*l_92) = (p_60 <= (l_96 || ((safe_add_func_uint8_t_u_u(func_61(((safe_rshift_func_int8_t_s_s(g_87[1][0][3], 3)) , (safe_sub_func_uint16_t_u_u(((*l_89) , (((p_59 && (*l_92)) == ((safe_lshift_func_int16_t_s_u(((g_76 , (safe_sub_func_int8_t_s_s(func_68((p_59 <= (safe_sub_func_uint32_t_u_u((*l_92), p_57))), g_4, l_96, (*l_89)), (*l_89)))) , l_96), p_60)) && 0xB3L)) | p_59)), p_60))), (*l_89), g_87[2][2][1], p_57), p_59)) ^ 0xF59E05BB15C06464LL)));
            l_112 ^= (((p_57 | l_96) , (safe_rshift_func_uint8_t_u_u(0x13L, 7))) , ((*l_92) >= (&g_79[1] != &l_89)));
        }


        (*l_89) = (func_68(g_87[0][1][3], ((g_4 , ((safe_mod_func_uint16_t_u_u(((*l_92) || (((func_68((*l_92), l_115[2][0][4], (l_92 != (*g_93)), (*l_92)) | (-7L)) & (*l_89)) >= p_60)), p_56)) & 0x662417ACL)) && g_4), (*l_92), (*l_89)) || g_4);
        if (((2L && ((safe_mul_func_int16_t_s_s((g_87[2][0][4] | (safe_sub_func_int32_t_s_s(p_60, (0x7FL && (safe_add_func_uint64_t_u_u((!(((safe_mul_func_int16_t_s_s((!0L), (safe_sub_func_int8_t_s_s(g_87[0][1][3], (p_57 != g_4))))) != ((safe_add_func_uint32_t_u_u(((void*)0 != l_128[0]), 0xA9617B47L)) <= p_56)) & g_87[0][1][3])), g_87[4][3][3])))))), 65531UL)) == l_129[3][7])) == 4294967295UL))
        {
            unsigned l_132[3];
            long long l_140 = (-1L);
            int *l_165 = (void*)0;
            int l_191 = 0x0B996A79L;
            int **l_208 = &g_79[1];
            int ***l_207 = &l_208;
            char l_213 = 0xA5L;
            int l_227 = (-1L);
            short l_228 = (-10L);
            unsigned char l_281 = 0xAFL;
            int l_324 = 0L;
            int *l_337[9][8] = {{(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}, {(void*)0, &l_112, &l_112, (void*)0, &l_231, &g_76, &l_243, &l_243}};
            char l_375 = 0xA7L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_132[i] = 1UL;
            if ((p_58 != (safe_rshift_func_uint16_t_u_s((p_60 , p_57), (((l_132[1] ^ 4294967295UL) <= (0L && (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_140, (*l_89))) || (!(safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(g_76, p_60)), (*l_92))) == (*g_75)), g_4)), g_87[0][1][3])))), l_140)) , (*g_93)) == l_92), g_87[0][1][3])))))) , p_59)))))
            {
                unsigned char l_159 = 0xB9L;
                unsigned char l_162 = 6UL;
                int l_179 = 0x38E2FDB1L;
                for (p_59 = (-20); (p_59 < (-7)); p_59++)
                {
                    unsigned l_160 = 4294967290UL;
                    g_161 &= func_68((*l_92), (func_68((safe_add_func_uint64_t_u_u(0x22122A3D401970B7LL, (((p_60 > func_68((safe_mul_func_int16_t_s_s(func_68(l_132[1], g_87[0][1][3], ((0x48D3DA17L != (((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_59 , 0xE558L), p_56)), l_159)) | (*l_92)) > p_60)) & (-1L)), l_160), 0xB69EL)), p_58, g_87[3][1][5], l_140)) , 0x53381E5C00A6551CLL) && g_76))), g_87[2][3][1], g_87[1][1][7], g_4) , 0x45AC62A2L), p_59, g_87[0][1][3]);
                    (*g_75) ^= ((void*)0 != l_92);
                }
                (*l_89) = 0L;
                for (p_58 = 4; (p_58 >= 1); p_58 -= 1)
                {
                    int l_193 = (-1L);
                    int l_194 = 0xF7684E16L;
                    int i;
                    if (func_61((((g_79[p_58] == (void*)0) & p_56) != 1UL), (*g_75), g_76, g_87[0][1][3]))
                    {
                        (*l_92) ^= (l_140 != 0UL);
                        if (l_162)
                            break;
                    }
                    else
                    {
                        int **l_168 = &g_79[3];
                        int ***l_167 = &l_168;
                        g_166 &= func_68(p_57, g_161, (safe_mul_func_int16_t_s_s(func_61(g_87[0][1][3], p_57, p_57, (*l_92)), l_132[1])), (l_165 == (void*)0));
                        if ((*g_75))
                            break;
                        (*l_167) = (void*)0;

                        ;
                        (*l_89) = (func_61((((p_57 || l_159) >= p_59) , (g_4 != g_87[0][1][3])), (safe_mod_func_uint32_t_u_u((p_56 | ((&l_128[2] != (void*)0) ^ ((((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(func_68(p_58, p_57, g_87[0][1][0], p_57), 0x68L)) < g_87[0][1][0]), (*l_92))) > (-10L)) & 0xA1L) | p_57))), g_4)), p_56, p_57) | 1L);
                    }
                    for (g_166 = 4; (g_166 >= 0); g_166 -= 1)
                    {
                        (*l_92) &= (safe_add_func_uint32_t_u_u(l_159, (*g_75)));
                    }
                    l_179 |= (g_161 ^ func_61(p_58, ((((p_56 ^ (*l_89)) < (safe_sub_func_int16_t_s_s((func_68(((g_4 >= (l_162 && (*l_89))) < ((func_68(g_76, (((*l_92) < g_161) ^ l_159), p_59, p_60) ^ 18446744073709551615UL) , p_59)), g_87[3][3][6], g_4, g_166) ^ p_58), g_166))) , g_87[0][1][3]) , l_159), g_166, p_58));
                    l_194 |= (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((!(safe_unary_minus_func_uint16_t_u(g_4))), func_61(g_166, (!func_68((((((safe_mul_func_uint16_t_u_u(7UL, (safe_mul_func_uint16_t_u_u((((l_179 == l_191) > (*l_92)) , (((*l_92) , g_192) == &g_79[p_58])), 6L)))) , (void*)0) != (void*)0) || 0x0A974AF1B99297C0LL) || (*l_92)), l_159, p_58, g_166)), l_193, (*l_89)))) != g_166), 0x65F2BC74038AB733LL)), g_161));
                }
            }
            else
            {
                int *l_206 = &l_112;
                (*l_92) = ((safe_rshift_func_int16_t_s_u(((l_197 || (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((g_161 , g_76) > ((safe_lshift_func_int16_t_s_s(((void*)0 == l_206), (l_207 != &g_192))) > ((*l_89) , (g_87[0][1][3] , (*l_92))))) >= (*l_92)), (*l_92))), (*l_206))) & 0xB3L), 3))) , p_57), g_87[0][1][3])) || g_87[0][1][3]);
            }
            if (((p_59 , ((func_68(p_56, ((safe_lshift_func_uint8_t_u_s((p_56 , p_58), ((g_76 | (((p_56 , g_4) >= ((safe_sub_func_int16_t_s_s((((g_87[4][0][3] , (*g_93)) == (void*)0) , p_57), 0x704DL)) < (-2L))) != (*l_92))) >= p_57))) , g_166), l_213, g_87[2][0][1]) & g_87[5][2][4]) && 1UL)) ^ g_4))
            {
                unsigned l_229 = 0x7515FA48L;
                int l_232 = 0xBC57AD62L;
                int **l_261 = &l_89;
                int l_262 = 4L;
                for (p_58 = 0; (p_58 > (-8)); p_58 = safe_sub_func_uint32_t_u_u(p_58, 5))
                {
                    int l_230 = 0xF2D73772L;
                    int l_233 = 8L;
                    int l_286[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_286[i] = 0x5847B739L;
                    for (l_191 = 0; (l_191 > (-9)); --l_191)
                    {
                        if (p_56)
                            break;
                        return g_76;
                    }
                    if ((l_218 && func_61((!((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((0x44L >= (func_68(func_68((((*g_93) == (void*)0) , (safe_rshift_func_uint16_t_u_s(g_161, (safe_lshift_func_int16_t_s_u(((p_60 && 4294967289UL) | (func_61(p_60, ((255UL ^ l_227) , p_57), p_58, l_228) & g_166)), l_229))))), p_56, l_230, g_161), p_60, g_4, p_60) ^ p_57)), 3UL)), g_4)) > g_166)), g_4, l_230, p_59)))
                    {
                        unsigned l_235[10][9] = {{0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}, {0x2CC2AE39L, 4294967295UL, 4294967295UL, 0x2CC2AE39L, 0UL, 0x223DDD05L, 5UL, 0UL, 0xC72399D5L}};
                        int i, j;
                        --l_235[1][7];
                        (**l_207) = (void*)0;
                    }
                    else
                    {
                        int l_260[8][8][3] = {{{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}, {{(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}, {(-2L), 0x4ED48955L, 0L}}};
                        int *l_273 = &l_231;
                        int i, j, k;
                        (**l_261) = (safe_lshift_func_uint8_t_u_u((g_166 ^ (safe_mod_func_int64_t_s_s((((void*)0 != &l_234) > ((func_61(l_242[1], ((l_243 , func_61(l_230, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((((p_58 == ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((((func_68(p_60, ((safe_mul_func_uint16_t_u_u(l_260[2][7][2], l_260[6][6][2])) , 0x408CB729L), g_87[4][0][3], g_161) && l_229) , g_161) , &l_231) == &g_87[1][1][3]), 255UL)) , &g_79[3]) == l_261), p_56)) & g_161)) <= 4294967295UL) == (-8L)), 0xF0L)) ^ g_87[0][1][3]), g_87[0][1][3])) < g_87[0][1][3]), 0x78L)), g_87[4][3][1])) , g_166), (*l_92))), p_56, g_166)) | p_57), p_60, p_58) , g_4) ^ g_161)), l_262))), p_58));
                        g_267 ^= func_61(g_4, (safe_lshift_func_uint8_t_u_s(((*g_75) , l_233), l_230)), (safe_mod_func_uint16_t_u_u((((0L == (g_4 , p_59)) <= (((((&g_79[4] == &g_79[3]) ^ 4294967295UL) <= 0x86EEL) , &l_128[1]) == &g_79[1])) && (-4L)), l_260[6][1][0])), l_260[2][7][2]);
                        (*g_75) = ((p_57 , l_260[2][7][2]) ^ (!func_68(((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(func_68(((*l_92) , g_87[4][1][3]), g_166, (((((safe_lshift_func_uint16_t_u_s(9UL, 9)) , l_273) != (*g_93)) | ((!((safe_lshift_func_int8_t_s_u(l_278, p_56)) & 0L)) | 0L)) , (*l_92)), g_87[4][1][1]), (*l_273))))) || 1UL), g_267, g_87[2][0][7], p_59)));
                    }
                    l_286[1] &= ((((((p_59 , l_233) , (safe_mul_func_uint16_t_u_u(l_281, (safe_lshift_func_uint16_t_u_s(g_87[0][1][3], (((p_60 > l_284[7][7][2]) == (l_285[0] == (p_60 , (p_60 & 0xEB79L)))) , 0xE806L)))))) < g_4) <= 0xD80BL) , 253UL) , 0x25770872L);
                }
                return g_166;
            }
            else
            {
                char l_293 = 0xFEL;
                for (g_267 = 3; (g_267 > (-12)); g_267 = safe_sub_func_uint16_t_u_u(g_267, 7))
                {
                    int *l_289 = &g_87[0][1][3];
                    (*l_89) = 0L;
                    for (p_58 = 0; (p_58 <= 2); p_58 += 1)
                    {
                        (**l_207) = l_289;
                        (*l_92) = (-8L);
                    }
                }
                l_290++;
                (*l_89) = l_293;
                (*l_89) = (((&l_243 != (*l_208)) > g_267) , func_68((*l_92), (((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_293, (*l_92))), func_68(((*g_192) != (**l_207)), ((safe_mul_func_uint16_t_u_u(p_58, 65535UL)) , p_59), p_56, g_161))) > 0x439F4426L) >= p_56), g_161, g_267));
            }
            if (((((g_161 < (safe_rshift_func_int8_t_s_s(((p_56 == (0UL > ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_56, (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((func_61(p_59, (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((g_87[0][1][3] ^ (+(g_76 != (p_59 < (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_87[0][1][3] < 18446744073709551615UL), p_60)), g_76)) , (void*)0) != &l_234), g_267)))))), (*l_92))) <= p_58) < g_76), g_87[2][2][0])), (-1L))), p_57)), g_267, l_324) > g_161), 0x015FL)) != g_4), g_267)))) == p_56), g_4)) >= p_59))) , p_59), 1))) > 65535UL) >= p_56) < 0xBCF0L))
            {
                unsigned long long l_330 = 0xA95DDFB3247F7E07LL;
                int l_339 = (-1L);
                int l_340 = 0xC17C14EBL;
                (*l_92) = (func_61((((func_68((p_60 , (safe_unary_minus_func_int16_t_s((g_87[1][0][3] < (safe_lshift_func_int16_t_s_s(1L, ((g_161 , (safe_add_func_int64_t_s_s((-10L), l_330))) <= g_161))))))), (safe_mod_func_int8_t_s_s(((&l_278 != (g_76 , (void*)0)) >= 0UL), (*l_89))), g_76, p_59) , g_267) && g_166) != g_87[0][1][3]), l_330, l_330, g_267) <= p_57);
                l_339 &= (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((*l_92) != g_87[0][1][3]), ((l_337[1][2] == (*l_208)) || ((65535UL >= (func_68(((g_338 | l_330) , ((void*)0 != (*g_93))), g_166, g_87[0][1][3], g_87[0][1][3]) <= 5L)) != p_56)))), p_60));
                ++l_341;
            }
            else
            {
                short l_344 = 0xB4E7L;
                int l_370 = 0x07FB6F48L;
                int l_371 = 0xC76A57F8L;
                int l_372[2][3][6] = {{{5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}, {5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}, {5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}}, {{5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}, {5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}, {5L, 0x85E20276L, (-2L), 0x1AD1F4B1L, 0xF782C6DAL, 0x1AD1F4B1L}}};
                int l_378 = 0xAF9A6D18L;
                unsigned long long l_379 = 18446744073709551615UL;
                int i, j, k;
                if (func_61(l_344, l_345[2], g_76, (*l_92)))
                {
                    long long l_348 = 0x89FE52DBB7D8D51ALL;
                    for (l_191 = 0; (l_191 == (-16)); --l_191)
                    {
                        (**l_207) = &l_231;
                        if (l_348)
                            break;
                    }


                    return g_4;


                }
                else
                {
                    unsigned long long l_354 = 0x4BD78593C3BF2DE3LL;
                    int l_374[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_374[i] = 0x6109D325L;
                    for (g_161 = 21; (g_161 > 52); ++g_161)
                    {
                        int *l_353 = &l_243;
                        int l_373 = 0xE5574AF8L;
                        int l_376 = (-10L);
                        int l_377[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_377[i] = (-1L);
                        (*l_353) = func_61(((+(safe_mod_func_int16_t_s_s(((((0x0FL && (p_59 , (*l_92))) , (*g_192)) == l_353) > l_354), 0xA89DL))) > (*l_92)), (((p_60 , p_59) && l_344) < g_87[5][1][3]), l_344, p_57);
                        (*l_353) = (safe_mod_func_int64_t_s_s((-4L), (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((*l_89), 0)) && (0UL > ((safe_add_func_int64_t_s_s(p_56, g_267)) <= (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(g_87[0][1][3], p_57)), 2)) <= (((((*l_89) && func_68(p_59, p_58, p_56, l_369[0])) , g_338) < p_57) , g_161)), g_166))))), 0UL))));
                        l_379++;
                        if ((*g_75))
                            break;
                    }
                    (*l_89) = (0x1951A56CL != (safe_rshift_func_int16_t_s_s(g_166, p_58)));
                }
            }
        }
        else
        {
            short l_384 = 0L;
            if (l_384)
            {
                return p_60;
            }
            else
            {
                return g_161;
            }
        }
        (*l_89) = (safe_rshift_func_int8_t_s_s(0xE6L, (g_76 || 4294967295UL)));
    }
    else
    {
        unsigned short l_393 = 0xCD94L;
        int l_398 = 0x6FB2D503L;
        int l_401[2];
        long long l_425 = (-4L);
        unsigned l_426 = 0xE6F384B4L;
        int *l_431[6][7][6] = {{{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}, {{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}, {{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}, {{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}, {{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}, {{(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}, {(void*)0, &g_87[2][3][1], &l_278, &l_401[1], &l_401[1], &l_278}}};
        unsigned l_496 = 0xFF364A34L;
        int ***l_501 = &g_440[5][4];
        int l_545 = 1L;
        unsigned short l_719 = 65528UL;
        unsigned l_770 = 0x7719826EL;
        char l_782 = (-1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_401[i] = 3L;
        if (p_57)
        {
            char l_389 = 0x53L;
            int **l_390 = &g_79[3];
            int l_399 = 0x9CE8C6E8L;
            int l_400 = 0x93EF35D8L;
            int l_404 = (-7L);
            int l_413 = 0x649907FBL;
            int l_414 = 1L;
            int l_416 = 0x56E02631L;
            int l_417 = 0xCDE0123DL;
            int l_419[6] = {0L, 0L, 0x17B000F9L, 0L, 0L, 0x17B000F9L};
            int *l_432 = &g_267;
            unsigned short l_446 = 0x0F8EL;
            int l_471 = (-3L);
            int i;
            (*l_89) = (safe_sub_func_uint32_t_u_u(l_389, (((~0x76B0E186A7978CC0LL) , l_390) != (void*)0)));
            if ((*l_89))
            {
                int l_406 = 0x2F16BC51L;
                int l_409 = (-1L);
                int l_410 = 0xD52A01EEL;
                int l_411 = (-9L);
                int l_412 = (-1L);
                int l_418 = 0x0BA224CDL;
                int l_420 = 0xEFB406AFL;
                int l_421 = 0xE0244300L;
                int l_422 = 0xC9C6DD9DL;
                int l_423[7] = {0x56D67BE5L, 0x56D67BE5L, 0L, 0x56D67BE5L, 0x56D67BE5L, 0L, 0x56D67BE5L};
                int l_424 = 0x90C8980CL;
                int i;
                l_398 |= (safe_mul_func_int16_t_s_s((func_61(l_393, ((safe_add_func_int64_t_s_s(g_267, g_166)) , (safe_unary_minus_func_int8_t_s(g_166))), p_56, (((void*)0 == &g_93) & 0xD40AL)) >= g_397), p_57));
                for (g_397 = 0; (g_397 <= 2); g_397 += 1)
                {
                    int l_403 = 0x90481C50L;
                    int l_407 = 0L;
                    int l_408[10] = {(-1L), (-1L), 0xB60643ABL, (-1L), (-1L), 0xB60643ABL, (-1L), (-1L), 0xB60643ABL, (-1L)};
                    int i;
                    (*l_390) = &l_278;
                    ++l_426;
                    (*l_89) = 0x68D4914CL;
                    for (l_418 = 2; (l_418 >= 0); l_418 -= 1)
                    {
                        if (p_57)
                            break;
                        l_407 = (safe_add_func_int64_t_s_s((!p_59), 0x80E62219ECF26662LL));
                    }
                }


                (*l_390) = l_431[2][5][0];


            }
            else
            {
                int **l_435 = &g_79[2];
                int l_438[10][7] = {{0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}, {0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L, (-1L), 0x941FE208L}};
                int i, j;
                (*l_390) = l_432;


                (*l_432) &= (safe_add_func_int32_t_s_s(((void*)0 == l_435), ((5UL < (p_60 ^ ((((0xFCL <= (((g_87[4][0][6] < ((safe_mul_func_uint8_t_u_u((p_58 ^ 0xB61DL), 0x16L)) , g_166)) || (-1L)) >= g_405)) < l_438[4][5]) , (void*)0) != g_439[3][0][0]))) <= (*l_89))));
                if ((safe_mul_func_uint16_t_u_u(p_59, (g_405 | 249UL))))
                {
                    return p_59;
                }
                else
                {
                    unsigned l_455 = 0x9815DF20L;
                    int l_458 = 0xE5CA86E9L;
                    int l_463 = 0x517AA5F7L;
                    int l_465 = (-1L);
                    int l_469[2];
                    int l_470 = 0xB44F583BL;
                    unsigned l_472[10][6][4] = {{{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}, {{18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}, {18446744073709551610UL, 4UL, 0x92EFFBE8L, 0xA18243DAL}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_469[i] = 0x1DD9C146L;
                    for (l_393 = 0; (l_393 <= 58); ++l_393)
                    {
                        int *l_445 = &l_419[2];
                        (*l_432) |= ((l_445 == (void*)0) | g_405);
                        l_446++;
                    }
                    (*l_432) = (safe_add_func_int16_t_s_s((g_161 >= p_60), l_451));
                    for (p_59 = 0; (p_59 > 7); p_59 = safe_add_func_int32_t_s_s(p_59, 9))
                    {
                        char l_454 = (-1L);
                        int l_459 = 0x07949D9DL;
                        int l_460 = 0x64BBA5F3L;
                        int l_461 = (-1L);
                        int l_462 = 0L;
                        int l_464[5][6][4] = {{{0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}}, {{0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}}, {{0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}}, {{0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}}, {{0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}, {0xDEAE6F47L, 0x484F9C39L, 0xDAE6BBC1L, 0x484F9C39L}}};
                        unsigned long long l_466 = 0x39B39D6DF12CF1DFLL;
                        int i, j, k;
                        l_455++;
                        (*l_89) = 0xF8CCC548L;
                        l_466++;
                    }
                    --l_472[3][2][0];
                }
            }


        }
        else
        {
            int *l_475 = &l_278;
            int **l_476[7][6][6] = {{{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}, {{&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}, {&l_431[4][1][3], &l_475, (void*)0, &l_128[1], (void*)0, &l_475}}};
            int i, j, k;
            l_128[3] = l_475;


        }



        if ((safe_sub_func_int64_t_s_s((&l_401[1] == (l_479 , (void*)0)), p_56)))
        {
            unsigned l_488[8] = {0xD5DD471EL, 0xD5DD471EL, 1UL, 0xD5DD471EL, 0xD5DD471EL, 1UL, 0xD5DD471EL, 0xD5DD471EL};
            int *l_509[8][5];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 5; j++)
                    l_509[i][j] = &l_401[1];
            }
            if ((safe_sub_func_uint8_t_u_u((p_56 == g_267), (((safe_lshift_func_uint16_t_u_s(65534UL, g_415)) <= (safe_lshift_func_uint8_t_u_u((g_402 <= 1L), 4))) ^ (p_58 >= (safe_rshift_func_uint16_t_u_u(l_488[0], 3)))))))
            {
                int *l_495 = &l_398;
                for (l_197 = 0; (l_197 == 29); l_197 = safe_add_func_uint16_t_u_u(l_197, 7))
                {
                    unsigned short l_499[10] = {0x1F79L, 0x1F79L, 65535UL, 0x1F79L, 0x1F79L, 65535UL, 0x1F79L, 0x1F79L, 65535UL, 0x1F79L};
                    unsigned short l_500[8] = {65534UL, 0xDBEDL, 65534UL, 0xDBEDL, 65534UL, 0xDBEDL, 65534UL, 0xDBEDL};
                    int ***l_502[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_502[i] = &g_440[5][4];
                    (*l_89) = ((((safe_sub_func_int16_t_s_s(l_488[2], ((((((safe_add_func_int32_t_s_s((((((((~((void*)0 != l_495)) || g_397) , g_87[0][1][3]) && l_496) || ((safe_rshift_func_uint16_t_u_u((((g_76 < p_58) > (&l_495 == (void*)0)) && p_56), l_499[6])) && p_59)) != 8UL) < p_58), l_500[6])) != p_56) == 0x3A10L) , 0x0938L) <= 0x9C28L) < (-2L)))) >= p_58) , l_501) == l_502[0]);
                    (*l_89) = 0xD2BF5D88L;
                }
                (*l_495) &= ((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_161, p_58)) ^ (func_68(g_267, (l_495 != ((l_488[5] , p_59) , l_509[1][4])), p_58, p_59) < p_60)), p_57)) ^ 0xD165L), g_166)) > g_161);
                l_431[5][2][2] = l_509[1][4];
            }
            else
            {
                unsigned l_531 = 0x38CD11B2L;
                int l_535 = 0x6253C242L;
                int l_538 = (-7L);
                int l_541 = 0x41832639L;
                int l_543 = 0x79E69D99L;
                int l_548 = 6L;
                int l_549 = 2L;
                int l_550[9][6] = {{8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}, {8L, 0x08B87F5BL, 0L, 1L, 0xA9F7B3B8L, 1L}};
                int i, j;
                for (l_496 = 20; (l_496 == 47); ++l_496)
                {
                    int *l_526[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_526[i] = &g_76;
                    if ((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s((g_166 || (safe_add_func_int16_t_s_s((*l_89), (safe_mod_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_526[0] != l_526[0]), func_68((((1L <= (p_58 , ((~((-6L) || (safe_sub_func_uint64_t_u_u((p_60 >= (safe_sub_func_uint16_t_u_u(g_166, p_56))), g_397)))) | g_402))) , l_531) > 0xA1198576L), p_57, p_56, (*l_89)))), 0x2562A99BE1CB81D9LL)) > g_87[0][1][3]), g_87[0][1][3]))))), p_59)) > p_57) > p_56), 0xA8L)) != (*l_89)), g_166)))
                    {
                        int *l_532 = (void*)0;
                        int **l_534 = &l_532;
                        int l_536 = 0x1FE91192L;
                        int l_537 = 0x2B57E506L;
                        int l_539 = 0xEE0959F4L;
                        int l_542 = 0x5D636D02L;
                        int l_544 = (-2L);
                        int l_546 = 0xE9DC4254L;
                        int l_547[4] = {2L, (-3L), 2L, (-3L)};
                        int i;
                        if ((*g_75))
                            break;
                        (*l_534) = l_532;
                        --g_551;
                    }
                    else
                    {
                        (*g_75) = (g_161 < (safe_mod_func_uint16_t_u_u(g_166, g_405)));
                    }
                }
            }
        }
        else
        {
            unsigned char l_556 = 0UL;
            int **l_566 = &l_431[2][5][0];
            (*l_89) ^= l_556;
            (*l_89) = (safe_add_func_uint8_t_u_u((((0x99L & (safe_rshift_func_int16_t_s_u(0x6F2CL, 13))) | (p_59 != (p_56 ^ (g_563 , (((((((safe_rshift_func_uint16_t_u_u((l_566 != ((safe_mod_func_int8_t_s_s(0xDCL, func_68(p_57, p_56, g_397, g_161))) , (*l_501))), 4)) , 0x4C24L) , (void*)0) != (void*)0) , &l_112) != (void*)0) > p_57))))) <= (*l_89)), 0xD2L));
        }
        if (((&l_278 != (*g_192)) == 0x5EL))
        {
            int *l_583 = &g_267;
            unsigned char l_609 = 0xBEL;
            int ***l_617 = &g_440[8][0];
            unsigned long long l_628 = 18446744073709551609UL;
            int *l_648 = &g_267;
            int l_687[2][1][1];
            unsigned l_700[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_687[i][j][k] = 6L;
                }
            }
            for (i = 0; i < 2; i++)
                l_700[i] = 0x2152D418L;
            for (g_415 = 24; (g_415 < (-10)); --g_415)
            {
                unsigned short l_571 = 0UL;
                int *l_575[8] = {&g_267, &g_267, &g_87[4][3][3], &g_267, &g_267, &g_87[4][3][3], &g_267, &g_267};
                unsigned char l_592 = 0UL;
                unsigned char l_618[1][6][10] = {{{1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}, {1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}, {1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}, {1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}, {1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}, {1UL, 7UL, 1UL, 252UL, 252UL, 1UL, 7UL, 1UL, 0xF6L, 0UL}}};
                int l_625 = 0x2814D33DL;
                int i, j, k;
                if (l_571)
                {
                    for (l_425 = (-23); (l_425 > (-24)); --l_425)
                    {
                        int **l_574[6][6][7] = {{{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}, {{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}, {{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}, {{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}, {{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}, {{&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}, {&l_128[0], (void*)0, &l_128[1], &l_89, (void*)0, (void*)0, &g_79[3]}}};
                        int i, j, k;
                        (*l_89) &= 2L;
                        (*l_501) = l_574[4][0][2];
                        l_575[0] = &l_278;
                    }



                    return g_397;



                }
                else
                {
                    long long l_584 = 0x9BF7294F59E30135LL;
                    int l_585 = 1L;
                    char l_610 = 3L;
                    if (((func_68((g_415 , ((safe_mod_func_int16_t_s_s(func_68((safe_sub_func_int64_t_s_s(p_60, ((((*g_93) == (((safe_lshift_func_int16_t_s_s(p_57, 0)) | (l_582 != (void*)0)) , l_583)) < g_87[3][0][6]) != 0x838D4A2611FEC8EBLL))), g_87[0][1][5], (*l_583), g_4), 0x85B6L)) , (*l_583))), g_166, g_415, g_4) == l_584) && g_76))
                    {
                        short l_586 = 0xF1E6L;
                        unsigned long long l_587 = 1UL;
                        l_587--;
                    }
                    else
                    {
                        unsigned short l_598 = 0x6144L;
                        (*l_583) &= ((g_397 , (safe_mul_func_int8_t_s_s(g_76, (l_592 , (safe_mod_func_int16_t_s_s((((((p_60 != (((0x998FL ^ ((safe_sub_func_int64_t_s_s(l_597[0], ((g_415 && g_415) < l_584))) || 0x742199604F28D620LL)) || l_598) , p_60)) , 0xBCL) & 253UL) != p_57) & 0x57484D2DL), p_60)))))) | p_59);
                        l_585 &= (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_58, ((((p_59 && func_61((((safe_add_func_int64_t_s_s(g_397, (safe_add_func_int16_t_s_s(p_57, g_166)))) <= (~((safe_lshift_func_uint8_t_u_s(func_68((p_60 ^ (g_267 == l_609)), g_397, p_60, g_87[0][1][3]), 4)) <= g_87[0][1][3]))) , g_87[1][3][5]), p_58, l_610, p_56)) <= 0xA44F9F11B92ECED1LL) && 0x1131627AL) | 0x06L))) , p_56), g_161));
                        l_585 = (g_161 < (((l_585 || l_598) , (g_551 < (*l_582))) , (0xAD58L || func_61(((safe_add_func_uint32_t_u_u(0xAB3C4259L, (safe_add_func_uint64_t_u_u(g_563, (safe_lshift_func_uint16_t_u_u((((void*)0 != l_617) ^ g_76), p_58)))))) , g_402), p_56, g_161, g_76))));
                    }
                }
                l_618[0][5][6]++;
                if (p_57)
                    break;
                (*l_583) ^= (((g_76 == g_415) >= (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((l_625 , (safe_add_func_int8_t_s_s(((((void*)0 == l_575[0]) >= (p_56 | g_76)) , (l_628 | (p_57 <= 0UL))), g_76))), p_60)), g_551))) < g_4);
            }
            for (p_57 = 0; (p_57 <= 1); p_57 += 1)
            {
                int *l_641[7][5] = {{&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}, {&l_401[0], &l_278, &l_401[0], &l_278, &l_401[0]}};
                int i, j;
                (*l_582) |= ((safe_add_func_uint32_t_u_u(0UL, l_597[p_57])) <= (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((l_597[p_57] < (safe_lshift_func_uint16_t_u_u((g_338 , 1UL), 14))), g_161)) < (*l_89)), (((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_57, p_56)) == 1UL), p_56)) , l_641[5][3]) != (void*)0))));
            }
            if (((func_61((safe_mod_func_int8_t_s_s(g_4, g_161)), p_56, p_56, (p_56 == (safe_lshift_func_uint16_t_u_u(g_267, 1)))) >= ((((*l_583) || g_166) , (void*)0) == (*l_617))) || p_56))
            {
                int **l_649[5] = {&l_89, (void*)0, &l_89, (void*)0, &l_89};
                int i;
                (*l_583) |= (safe_rshift_func_uint8_t_u_u(0x8BL, 1));
                l_648 = l_648;
            }
            else
            {
                short l_673 = 0xEF91L;
                int l_675 = 0x16F4F5C6L;
                int l_695 = 0x5A0331F3L;
                int l_697 = 0x3D20F41AL;
                int l_698 = 1L;
                int l_699 = 0L;
                if (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(g_87[0][1][3], 7)), 14)) , ((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(0L, (((safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint32_t_u_u((func_68(p_59, g_415, g_87[4][1][3], (*l_89)) < (g_166 != p_58)), g_415)) != g_161) & g_161))) , 0L) , p_57))), 6)) > g_87[4][0][1]) ^ p_58), 5)) != p_59)))
                {
                    int *l_683 = &g_87[0][1][3];
                    int ***l_684 = &g_440[7][2];
                    int l_685 = 0x318A9F75L;
                    int l_690[2];
                    int l_694 = 1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_690[i] = 0xCB324A77L;
                    for (l_628 = 28; (l_628 <= 48); ++l_628)
                    {
                        short l_674 = (-1L);
                        l_675 ^= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(0xAB5F2DF1E8336B93LL, (((((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(p_59, (g_76 , func_61(p_57, l_673, l_674, (g_415 | g_338))))), g_4)) <= p_58) || g_563) < p_58) != 0xF63FL))), p_59));
                    }
                    l_582 = &l_278;

                    ;
                    if (func_61(p_59, l_675, (safe_mul_func_int16_t_s_s((-6L), ((safe_mul_func_uint16_t_u_u(p_56, func_68(p_59, g_397, (safe_lshift_func_int16_t_s_s((!(-2L)), 4)), p_58))) && 2UL))), g_4))
                    {
                        int *l_682 = &l_401[1];
                        l_682 = &l_675;

                        ;
                        (*l_583) &= p_57;
                        l_683 = l_682;

                        ;
                        (*g_192) = &l_112;
                    }
                    else
                    {
                        long long l_686 = 0x6BDF91091319E561LL;
                        int l_688 = 0L;
                        int l_689 = 0x75A62543L;
                        int l_691 = 0xFAC194A3L;
                        long long l_692 = 1L;
                        int l_693 = (-10L);
                        int l_696[6] = {0x9FA49EF5L, 0x9FA49EF5L, 0x4471C289L, 0x9FA49EF5L, 0x9FA49EF5L, 0x4471C289L};
                        int i;
                        (*l_582) = (l_684 != &g_533);
                        --l_700[1];
                        (*l_583) = (safe_mul_func_uint16_t_u_u((((p_59 < func_61((*l_683), (*l_583), p_60, ((&l_697 != (void*)0) && (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((g_87[0][1][3] || l_696[1]), (((((0x54L >= 0x2CL) , 18446744073709551615UL) || g_87[1][2][6]) , l_709) != (void*)0))) <= 1L), p_59))))) > p_59) ^ g_415), g_415));
                    }

                    ;
                }
                else
                {
                    int *l_710[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_710[i][j] = (void*)0;
                    }
                    l_710[4][0] = l_710[4][0];
                }

                ;
            }

            ;
        }
        else
        {
            short l_711 = 0x5D7EL;
            int **l_721[8][8] = {{&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}, {&l_431[5][5][5], &g_79[2], &l_431[2][5][0], &l_431[2][5][0], &g_79[2], &l_431[5][5][5], &g_79[2], &l_431[2][5][0]}};
            char l_734[6][2] = {{(-9L), (-8L)}, {(-9L), (-8L)}, {(-9L), (-8L)}, {(-9L), (-8L)}, {(-9L), (-8L)}, {(-9L), (-8L)}};
            int l_736 = 0x7C7166A0L;
            int i, j;
            (*l_89) |= l_711;
            if ((((*l_89) == (*l_582)) < (safe_mod_func_int64_t_s_s(((p_57 < (-1L)) , (l_714[5][2][6] < ((((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((g_402 && (p_57 , 0x5759L)) , p_59) <= l_719), l_720[0])) || p_59), p_57)) && p_58) , &g_440[5][4]) != l_501))), g_4))))
            {
                int l_727 = 0xB5A085DAL;
                short l_735 = 0xB9D5L;
                if (p_59)
                {
                    int *l_724[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_724[i] = &l_112;
                    l_727 |= ((p_56 <= (l_721[5][7] == (*l_501))) || (p_59 ^ (((!p_57) , ((safe_rshift_func_int16_t_s_s(((l_724[5] == l_724[5]) == 0x3355F0CCL), 5)) == (safe_rshift_func_int8_t_s_u(func_61(p_59, (*l_89), g_76, g_338), 4)))) , 0xF4L)));
                    (*l_582) = (((((+p_58) || func_68(g_267, ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_397, (~(l_727 & p_59)))), ((safe_mul_func_uint8_t_u_u(l_734[1][0], l_727)) | func_68(p_60, l_727, l_727, l_735)))) && 0xEF9B65265FE91DB6LL), p_60, g_161)) != g_87[2][3][1]) != g_166) || (-3L));
                }
                else
                {
                    unsigned char l_737 = 5UL;
                    l_736 = ((g_87[2][1][6] || p_60) ^ (&g_78[3] != &l_721[2][2]));
                    l_737++;
                }
            }
            else
            {
                unsigned char l_748 = 4UL;
                int *l_749 = (void*)0;
                int l_751 = (-1L);
                l_751 &= (func_61((p_60 == ((safe_add_func_int32_t_s_s(((!(((func_61(p_56, (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((+((safe_lshift_func_uint16_t_u_u(g_397, g_267)) , l_748)), 0x2BL)), (((*g_192) != l_749) != (((g_87[4][0][2] || (*l_89)) || p_60) , p_58)))), p_58, p_60) <= g_397) || p_58) & g_415)) && p_56), g_750)) ^ p_59)), p_59, g_750, g_161) || p_60);
                (*l_89) = (*g_75);
            }
            for (l_540 = 2; (l_540 < (-24)); --l_540)
            {
                long long l_754 = 1L;
                int ***l_766 = &g_440[0][4];
                int *l_768 = &l_401[1];
                l_754 = 0x52774144L;
                for (l_545 = 21; (l_545 >= 13); l_545--)
                {
                    short l_765 = (-1L);
                    int l_773 = (-1L);
                    int l_774 = 0xB0F787E2L;
                    if ((((((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x36B0539CL, (func_68(g_563, p_56, g_166, p_58) & (p_56 , 65535UL)))), ((((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_58 & l_765), g_750)) , g_161), p_60)) , l_501) != l_766) != l_765))) | (-9L)) , (void*)0) == (void*)0) >= 0x9217FE104D67435ELL) != 0x46L) & g_750))
                    {
                        int *l_767 = &l_278;
                        int l_769 = 1L;
                        l_768 = l_767;

                        ;
                        l_767 = l_767;
                        ++l_770;
                    }
                    else
                    {
                        unsigned long long l_775 = 0xC984D84C0387966FLL;
                        --l_775;
                        l_431[2][5][0] = &l_773;


                    }


                    ;
                    return (*l_582);


                }
                for (l_278 = 0; (l_278 != (-9)); l_278 = safe_sub_func_uint64_t_u_u(l_278, 7))
                {
                    short l_780 = 0x3CA0L;
                    char l_781 = 0x7EL;
                    (*l_582) = (p_59 || func_61(l_780, l_781, g_405, l_782));
                }
            }
            (*g_192) = (*g_93);
        }

        ;
        return g_87[4][1][7];


    }


    for (g_397 = 0; (g_397 >= 20); g_397++)
    {
        int *l_785[6][8] = {{&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}, {&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}, {&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}, {&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}, {&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}, {&l_112, &l_278, &g_87[1][1][4], &l_278, &l_112, &g_76, &g_87[1][1][4], &g_76}};
        int **l_786 = &g_79[3];
        int *l_849 = (void*)0;
        unsigned long long l_890 = 0x7A48BF2119EB54D9LL;
        int i, j;
        (*l_786) = l_785[4][3];
        if (p_58)
        {
            (*l_582) = p_56;
        }
        else
        {
            unsigned long long l_800 = 18446744073709551615UL;
            for (p_57 = 0; (p_57 > 31); p_57++)
            {
                int **l_793 = (void*)0;
                int l_795 = 0x6D5341DEL;
                if (((g_402 <= 2L) | 0x66A3D79195ECE272LL))
                {
                    (*l_786) = (*l_786);
                    (*l_89) |= (((safe_add_func_uint8_t_u_u(p_60, (p_56 > (safe_rshift_func_int16_t_s_u((~((g_397 , (*l_709)) != l_793)), 0))))) & (*g_75)) == (((0x0B065CA7E54189C2LL < l_794) , (((((p_57 == 0x1C8BL) <= 0UL) == g_4) <= 0x9E28L) , g_166)) < l_795));
                }
                else
                {
                    short l_815[3][6][5] = {{{0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}}, {{0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}}, {{0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}, {0L, 1L, 0x5B12L, 1L, 0x5B12L}}};
                    int * volatile *l_817 = &g_816;
                    int i, j, k;
                    (*l_817) = ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(l_800, (safe_rshift_func_uint16_t_u_s(((((+((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(p_60, ((safe_mul_func_int8_t_s_s((g_563 & (safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_161, ((void*)0 == &g_79[3]))) , g_4), p_56))), l_800)) , p_57))) != g_397), l_815[0][2][0])), 0)) , p_60) == 65529UL) || (*l_89))) > p_57) || (-6L)) , p_56), p_59)))), p_58)) , g_816);
                }
                return g_397;


            }
            if (p_56)
                continue;
        }
        for (g_415 = 3; (g_415 >= 0); g_415 -= 1)
        {
            unsigned l_824 = 0x232D0A6CL;
            int l_829 = 1L;
            int l_832 = 6L;
            char l_862 = 0xCFL;
            for (g_267 = 0; (g_267 <= 6); g_267 += 1)
            {
                char l_820 = 0L;
                int **l_821 = (void*)0;
                int l_823 = 2L;
                unsigned char l_833 = 2UL;
                int l_864 = 0xAA4D70CBL;
                int l_865 = 0x687DB774L;
                int l_867 = 0xC64012B6L;
                int l_868 = 1L;
                if (((*l_582) , (g_402 >= (safe_mod_func_int64_t_s_s(g_76, 3L)))))
                {
                    return l_820;


                }
                else
                {
                    l_821 = (void*)0;
                    for (l_197 = 2; (l_197 <= 6); l_197 += 1)
                    {
                        int l_822 = 0x54F44AD4L;
                        int i;
                        --l_824;
                        return l_824;


                    }
                }
                (*l_582) = l_827[0];
            }
            l_829 = (((((g_4 <= func_61(p_60, (&l_786 != &g_440[5][4]), g_166, g_397)) >= (((l_862 , ((*l_709) != (void*)0)) < 9UL) >= 1L)) == p_57) < 4L) || 0x7680329095CB0971LL);
            if ((g_161 , ((safe_lshift_func_uint8_t_u_u((p_60 , p_57), 3)) != ((safe_rshift_func_uint8_t_u_s(g_405, (((safe_add_func_uint32_t_u_u((l_824 , (p_58 < (0x68L || (((safe_add_func_int64_t_s_s(p_57, g_397)) == g_4) <= p_57)))), p_60)) || g_4) <= p_59))) , 0x9E62BDDBL))))
            {
                if (l_862)
                    break;
            }
            else
            {
                for (p_60 = 6; (p_60 >= 0); p_60 -= 1)
                {
                    unsigned l_901 = 0x237DB446L;
                    l_901--;
                }
            }
        }
    }


    return p_57;


}







static short func_61(unsigned char p_62, int p_63, short p_64, char p_65)
{
    int *l_85 = &g_76;
    for (p_64 = (-21); (p_64 != 4); ++p_64)
    {
        unsigned l_84 = 0x415C855AL;
        int *l_86[2];
        int i;
        for (i = 0; i < 2; i++)
            l_86[i] = &g_87[0][1][3];
        g_87[1][0][0] &= (!(p_64 <= (func_68(g_76, l_84, (l_85 == &p_63), g_76) & p_62)));
    }
    return g_76;
}







static short func_68(unsigned char p_69, int p_70, unsigned p_71, unsigned short p_72)
{
    int *l_77[6][5][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
    int **l_80 = &g_79[0];
    unsigned l_81 = 0xFC8A300FL;
    int i, j, k;
    (*g_75) |= g_4;
    (*l_80) = l_77[1][1][0];
    l_81 = 0x2E0AD50AL;
    return p_71;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1472, "g_1472", print_hash_value);
    transparent_crc(g_1610, "g_1610", print_hash_value);
    transparent_crc(g_1792, "g_1792", print_hash_value);
    transparent_crc(g_1969, "g_1969", print_hash_value);
    transparent_crc(g_2003, "g_2003", print_hash_value);
    transparent_crc(g_2114, "g_2114", print_hash_value);
    transparent_crc(g_2216, "g_2216", print_hash_value);
    transparent_crc(g_2311, "g_2311", print_hash_value);
    transparent_crc(g_2361, "g_2361", print_hash_value);
    transparent_crc(g_2393, "g_2393", print_hash_value);
    transparent_crc(g_2423, "g_2423", print_hash_value);
    transparent_crc(g_2435, "g_2435", print_hash_value);
    transparent_crc(g_2499, "g_2499", print_hash_value);
    transparent_crc(g_2698, "g_2698", print_hash_value);
    transparent_crc(g_2717, "g_2717", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2759[i][j][k], "g_2759[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2762[i][j], "g_2762[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2790, "g_2790", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
