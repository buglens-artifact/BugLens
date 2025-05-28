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



static unsigned g_7 = 18446744073709551615UL;
static unsigned g_9 = 1UL;
static int g_21 = 0x25D2D915L;
static int *g_20 = &g_21;
static int g_39[5] = {0xED423CB8L, 0x67656540L, 0xED423CB8L, 0x67656540L, 0xED423CB8L};
static int g_41[8] = {0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL, 0xA2AAFA0BL};
static unsigned g_57 = 0x120B879BL;
static unsigned *g_56 = &g_57;
static int g_62[3] = {0x84A86307L, 0x84A86307L, 0x84A86307L};
static int g_64 = 5L;
static unsigned short g_77[7][9] = {{0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}, {0x29ABL, 0UL, 0x4114L, 0x95ADL, 0x4114L, 0UL, 0x29ABL, 1UL, 0x8677L}};
static short g_85[6][10] = {{0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}, {0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}, {0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}, {0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}, {0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}, {0x0944L, 0x0944L, 0x0B5FL, (-3L), 0x1981L, (-3L), 0x0B5FL, 0x0944L, 0x0944L, 0x0B5FL}};
static int *g_104 = &g_39[4];
static short *g_106[1] = {&g_85[1][8]};
static short **g_105 = &g_106[0];
static unsigned char g_151 = 0xD3L;
static char g_154 = 0xF8L;
static unsigned **g_184[5] = {&g_56, &g_56, &g_56, &g_56, &g_56};
static unsigned ***g_183 = &g_184[0];
static int **g_212 = &g_104;
static int ***g_211 = &g_212;
static unsigned g_255 = 0xFE2EB6C8L;
static unsigned g_280[1][7] = {{0x54E6A2DAL, 18446744073709551608UL, 0x54E6A2DAL, 18446744073709551608UL, 0x54E6A2DAL, 18446744073709551608UL, 0x54E6A2DAL}};
static unsigned g_323 = 0x16393760L;
static char g_349 = 0L;
static unsigned short g_366 = 0x02F0L;
static unsigned g_399 = 0xD881A32BL;
static unsigned g_401[10][1] = {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}};
static unsigned char *g_446 = &g_151;
static unsigned char **g_445 = &g_446;
static short g_475 = (-4L);
static unsigned short g_548 = 65530UL;
static unsigned short *g_565 = &g_548;
static unsigned short **g_564 = &g_565;
static int *g_568 = &g_39[4];
static short g_597 = 1L;
static int ****g_677 = &g_211;
static int ****g_686 = &g_211;
static int g_698 = (-4L);
static unsigned char g_711 = 0xFAL;
static unsigned g_772[4][8] = {{0UL, 5UL, 0x13777437L, 5UL, 0UL, 5UL, 0x13777437L, 5UL}, {0UL, 5UL, 0x13777437L, 5UL, 0UL, 5UL, 0x13777437L, 5UL}, {0UL, 5UL, 0x13777437L, 5UL, 0UL, 5UL, 0x13777437L, 5UL}, {0UL, 5UL, 0x13777437L, 5UL, 0UL, 5UL, 0x13777437L, 5UL}};
static char *g_775 = &g_154;
static char **g_774 = &g_775;
static int *g_792 = &g_64;
static unsigned short g_816 = 0xF317L;
static int **g_821 = &g_104;
static int **g_822 = &g_20;
static int *g_848 = &g_41[4];
static unsigned *g_886 = &g_7;
static short *g_907 = &g_85[5][3];
static char g_933 = 0x8FL;



static int func_1(void);
static unsigned char func_4(unsigned p_5);
static int * func_12(int * p_13, unsigned char p_14, int * p_15);
static int * func_16(int * p_17, short p_18, unsigned * p_19);
static short func_22(int * p_23, short p_24, unsigned p_25, int * p_26, unsigned * p_27);
static int * func_28(unsigned char p_29, char p_30, int p_31, int * p_32);
static char func_44(unsigned p_45, unsigned * p_46);
static int * func_47(unsigned char p_48, char p_49, unsigned short p_50, int p_51);
static unsigned func_52(unsigned * p_53);
static unsigned func_69(unsigned ** p_70, unsigned ** p_71, unsigned p_72, unsigned p_73, unsigned p_74);
static int func_1(void)
{
    unsigned *l_6 = &g_7;
    unsigned *l_8 = &g_9;
    int l_703 = 0L;
    unsigned *l_704 = &g_399;
    short l_705 = 1L;
    short *l_706 = &g_597;
    unsigned l_707 = 4294967295UL;
    unsigned short l_708 = 65526UL;
    unsigned short l_709[2][9][10] = {{{0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}}, {{0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}, {0x85B4L, 65532UL, 0x5405L, 0xAA34L, 65535UL, 0xE576L, 1UL, 65535UL, 65530UL, 7UL}}};
    unsigned char *l_710 = &g_711;
    int *l_718[8][10][2] = {{{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}, {{&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}, {&g_39[4], &g_39[3]}}};
    char ***l_843 = &g_774;
    unsigned l_856 = 1UL;
    int l_882 = (-6L);
    short *l_908 = &g_85[1][8];
    unsigned short l_919 = 1UL;
    unsigned short **l_934 = (void*)0;
    int i, j, k;
    if ((((*l_710) &= (0x43CDL == ((func_4(((*l_8) = ((*l_6) = 1UL))) <= (((((safe_mul_func_uint16_t_u_u((*g_565), ((((*l_704) = l_703) ^ l_703) & ((l_705 > ((*l_706) &= (g_548 & l_703))) & l_705)))) ^ l_705) < l_707) ^ l_708) > l_709[0][2][7])) ^ 0x9B2EL))) <= l_703))
    {
        int *l_722 = &g_39[1];
        int *l_771 = (void*)0;
        unsigned short l_839 = 0x8881L;
        char ***l_842 = &g_774;
        short **l_870[1][1][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_870[i][j][k] = (void*)0;
            }
        }
        for (g_21 = 0; (g_21 <= (-25)); g_21--)
        {
            unsigned char l_714 = 248UL;
            int *l_715 = &g_62[1];
            int *l_721 = &g_21;
            unsigned l_730[7][5][3] = {{{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}, {{0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}, {0xDC84AC73L, 0xEF3018C5L, 0UL}}};
            unsigned **l_737 = (void*)0;
            unsigned *l_740[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_740[i] = &l_730[3][0][1];
            if (((*g_446) >= l_709[0][2][7]))
            {
                l_715 = l_715;
            }
            else
            {
                int *l_716[5][8][6] = {{{&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}}, {{&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}}, {{&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}}, {{&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}}, {{&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}, {&g_21, (void*)0, &g_62[1], (void*)0, &g_21, (void*)0}}};
                int *l_717 = &g_39[4];
                int *l_719[5][8] = {{&g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2]}, {&g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2]}, {&g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2]}, {&g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2]}, {&g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2], (void*)0, &g_62[2], &g_62[2]}};
                unsigned l_720 = 0x3D0278A2L;
                int i, j, k;
                l_719[4][0] = (l_718[1][8][1] = l_716[3][0][1]);


                l_717 = l_722;
                if ((*l_715))
                    break;
                (*l_722) = ((*l_721) > (safe_mul_func_uint8_t_u_u(((((*l_710) = (**g_445)) ^ (**g_445)) ^ g_280[0][6]), ((safe_unary_minus_func_uint16_t_u(1UL)) ^ ((safe_lshift_func_int16_t_s_u((*l_722), 3)) | (((safe_mod_func_int32_t_s_s(((*l_722) < l_730[3][0][1]), ((*l_715) = (safe_sub_func_uint32_t_u_u(((((**g_445) >= 248UL) < g_401[2][0]) ^ (*l_722)), (-1L)))))) == 0xF2L) == (-1L)))))));
            }
            if ((safe_rshift_func_int8_t_s_u(g_323, (safe_sub_func_uint32_t_u_u(func_69(l_737, (*g_183), ((+0xEA66L) && (l_740[0] == (void*)0)), (g_323 <= (safe_add_func_uint32_t_u_u(4294967295UL, (g_21 | g_41[4])))), g_401[2][0]), g_475)))))
            {
                for (g_475 = 0; (g_475 >= (-23)); g_475--)
                {
                    (*l_715) = (-4L);
                }
            }
            else
            {
                int *l_745 = &g_62[1];
                (*g_568) |= (g_154 ^ (**g_445));
                if ((*g_20))
                {
                    (**g_211) = l_715;

                    ;
                    (*l_722) = (*g_568);
                    for (g_711 = 13; (g_711 == 58); ++g_711)
                    {
                        char l_748 = (-1L);
                        return l_748;
                    }
                }
                else
                {
                    int *l_749 = &g_64;
                    l_718[4][0][1] = l_745;
                }
            }
            (***g_686) = (void*)0;

            ;
        }
        for (g_597 = 26; (g_597 > (-12)); g_597 = safe_sub_func_uint8_t_u_u(g_597, 3))
        {
            unsigned short l_767 = 0x9B00L;
            int *l_770 = &g_21;
            char **l_777 = (void*)0;
            for (g_475 = 1; (g_475 <= 4); g_475 += 1)
            {
                unsigned *l_760 = &g_323;
                char *l_763[4][6] = {{&g_154, &g_154, &g_154, &g_154, &g_154, &g_154}, {&g_154, &g_154, &g_154, &g_154, &g_154, &g_154}, {&g_154, &g_154, &g_154, &g_154, &g_154, &g_154}, {&g_154, &g_154, &g_154, &g_154, &g_154, &g_154}};
                int l_764[2][7][4] = {{{9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}}, {{9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}, {9L, (-2L), 9L, (-2L)}}};
                short *l_768 = &g_85[5][3];
                int i, j, k;
                (*g_568) = (safe_mul_func_int16_t_s_s(((*l_768) &= (safe_lshift_func_int8_t_s_u(g_39[g_475], (safe_sub_func_int8_t_s_s((l_764[0][1][1] = (g_349 = g_401[4][0])), (g_39[g_475] < ((2L && (*g_20)) <= ((g_39[1] & (((safe_lshift_func_int16_t_s_u(l_767, 1)) <= 0x9177L) != 0L)) <= (*g_446))))))))), 0xC5D0L));
                (*g_568) = g_39[g_475];
            }
            if (((g_105 = &l_706) == (void*)0))
            {
                int l_769 = 1L;
                (*g_20) ^= l_769;
                (***g_677) = &l_769;

                ;
                l_770 = (*g_212);

                ;
            }
            else
            {
                unsigned short l_773 = 65535UL;
                int **l_778 = &l_770;
                if (((l_722 = ((*g_212) = l_770)) == (l_771 = l_770)))
                {
                    if (g_772[3][2])
                    {
                        if ((****g_686))
                            break;
                        return g_85[1][3];


                    }
                    else
                    {
                        (****g_686) |= l_773;
                    }
                    if ((**g_212))
                        break;
                }
                else
                {
                    for (g_366 = 0; (g_366 <= 1); g_366 += 1)
                    {
                        char ***l_776[6][10] = {{&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}, {&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}, {&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}, {&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}, {&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}, {&g_774, &g_774, &g_774, &g_774, &g_774, (void*)0, &g_774, &g_774, &g_774, &g_774}};
                        int i, j;
                        l_777 = g_774;

                        ;
                        (*g_568) ^= (-1L);
                        (*l_771) = ((void*)0 == &g_41[1]);
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                (*l_778) = ((*g_212) = l_722);
                for (g_323 = 0; (g_323 >= 36); g_323 = safe_add_func_int32_t_s_s(g_323, 2))
                {
                    char l_785[6][3][1] = {{{1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}}};
                    int i, j, k;
                    for (l_767 = 21; (l_767 != 43); l_767 = safe_add_func_uint32_t_u_u(l_767, 1))
                    {
                        (*g_568) |= (safe_rshift_func_int16_t_s_s((*l_770), 12));
                    }
                    if (l_785[2][2][0])
                        break;
                }
            }


            ;

            ;
        }


        ;
        ;
        ;
        if ((*g_568))
        {
            int *l_798[1][5][2] = {{{&g_39[4], &g_39[4]}, {&g_39[4], &g_39[4]}, {&g_39[4], &g_39[4]}, {&g_39[4], &g_39[4]}, {&g_39[4], &g_39[4]}}};
            unsigned l_810[3];
            int **l_820 = &g_104;
            int ***l_819 = &l_820;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_810[i] = 0x3B34D38BL;
            for (g_597 = 0; (g_597 == (-1)); g_597 = safe_sub_func_uint16_t_u_u(g_597, 1))
            {
                unsigned l_795[10][10] = {{0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}, {0UL, 0x772B2985L, 0xB26ADCAEL, 0x712A7E11L, 0xB26ADCAEL, 0x772B2985L, 0UL, 18446744073709551607UL, 0x81401239L, 1UL}};
                short l_796 = 3L;
                int l_797[5] = {(-3L), 0x78E26038L, (-3L), 0x78E26038L, (-3L)};
                int l_806 = 0x5B5B9319L;
                unsigned l_813[4] = {0x21D7803BL, 0x7D3973A6L, 0x21D7803BL, 0x7D3973A6L};
                unsigned **l_814 = (void*)0;
                unsigned **l_815 = &l_6;
                int i, j;
                l_798[0][3][1] = l_771;
                if (l_796)
                    break;
                if (l_797[4])
                {
                    return g_475;


                }
                else
                {
                    int *l_800 = &g_41[4];
                    int **l_799 = &l_800;
                    unsigned **l_801 = &l_704;
                    short *l_804 = &l_796;
                    int l_805[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_805[i] = 0x6EC1BF19L;
                    if (((0UL | ((*l_804) = (((l_771 != ((*l_799) = (void*)0)) && (((*l_801) = &g_772[2][7]) == (void*)0)) <= (safe_lshift_func_uint8_t_u_s((*g_446), ((*g_775) != ((**g_774) >= 0x06L))))))) <= l_805[0]))
                    {
                        if ((*g_20))
                            break;
                        l_806 = 0x52C31764L;
                    }
                    else
                    {
                        int l_809 = 0x943B1306L;
                        (*g_568) = ((safe_lshift_func_uint16_t_u_u(0x0B6CL, (((*g_446) = (l_809 <= g_62[1])) <= (*l_722)))) ^ (g_401[2][0] & (0x75L < (**g_774))));
                        if (l_810[0])
                            break;
                    }

                    ;
                }
            }

            ;

            (*g_792) |= (g_816 < ((*l_722) = ((safe_lshift_func_uint16_t_u_u((((*g_568) & ((((*l_819) = ((*g_211) = (*g_211))) != (g_822 = (g_821 = &l_722))) | (((safe_add_func_int8_t_s_s(((*l_722) > g_62[2]), 0x1BL)) | (&g_106[0] == (void*)0)) == (*g_568)))) != g_772[3][2]), 8)) != (*g_446))));

            ;
            ;
        }
        else
        {
            unsigned l_829 = 1UL;
            unsigned char l_838 = 0x1DL;
            int l_868 = 0xB43E4904L;
            int *l_904 = &g_21;
lbl_892:
            l_839 |= (((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(l_829, ((safe_rshift_func_uint16_t_u_u(0UL, 14)) & ((safe_lshift_func_int8_t_s_u(l_829, ((0L ^ ((*l_722) != ((l_829 > (*g_775)) & ((safe_rshift_func_int16_t_s_s((*l_722), 10)) < (safe_add_func_int32_t_s_s((*l_722), 0x613F309DL)))))) > (*l_722)))) ^ (*l_722))))) ^ l_838) ^ 0xAFL), (**g_774))) <= 0UL) > (*g_20));
            if ((safe_add_func_int32_t_s_s((l_842 != l_843), (safe_rshift_func_int16_t_s_s(l_829, ((safe_rshift_func_int8_t_s_u(0x09L, 4)) <= (&g_41[4] == g_848)))))))
            {
                int *l_853 = &g_21;
                short l_885[9][6][1] = {{{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}, {{0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}, {0x8FB7L}}};
                int i, j, k;
                for (g_698 = 3; (g_698 >= 0); g_698 -= 1)
                {
                    short l_875 = 0xB4A7L;
                    int i;
                }
            }
            else
            {
                int l_891[6][1][6] = {{{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}, {{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}, {{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}, {{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}, {{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}, {{(-1L), 0x515CE97AL, 0x54E29986L, (-2L), 1L, (-2L)}}};
                int l_903 = (-9L);
                int i, j, k;
                for (l_856 = (-14); (l_856 == 42); ++l_856)
                {
                    int l_890 = (-1L);
                    l_891[3][0][1] &= l_890;
                    if (l_856)
                        goto lbl_892;
                    (*g_792) ^= (safe_mod_func_uint32_t_u_u((l_868 &= ((((**g_774) || (*l_722)) >= (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_838, ((safe_rshift_func_uint16_t_u_u((l_890 >= ((*g_565) = (*g_565))), 0)) ^ 0UL))), (l_903 = ((safe_lshift_func_int8_t_s_s((**g_774), (**g_774))) || (0x23BB8107L != (-1L))))))) != (**g_774))), (*g_20)));
                    for (g_366 = 0; (g_366 <= 2); g_366 += 1)
                    {
                        int i, j;
                        l_904 = &g_62[g_366];

                        ;
                        (*g_20) &= g_77[(g_366 + 2)][(g_366 + 1)];
                    }
                }
                return (*g_848);


            }
        }

        ;
        ;
        ;
    }
    else
    {
        int l_911 = 1L;
        g_62[1] |= ((safe_mod_func_uint32_t_u_u((g_255 <= ((*g_20) = (((*g_568) == 7L) != (g_907 != l_908)))), (*g_792))) || (safe_mul_func_uint8_t_u_u((l_911 & (**g_822)), l_911)));
        (*g_822) = ((***g_686) = (*g_822));

        ;
        for (g_7 = 0; (g_7 != 57); ++g_7)
        {
            for (g_9 = 2; (g_9 <= 6); g_9 += 1)
            {
                unsigned short *l_918[8][5] = {{&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}, {&g_366, (void*)0, &g_366, (void*)0, &g_366}};
                int i, j;
                (*g_20) = (g_77[g_9][(g_9 + 2)] != (safe_mod_func_int16_t_s_s(0x53F2L, (func_69(&l_6, &l_6, l_911, l_911, (safe_lshift_func_uint16_t_u_s((4294967295UL >= ((**g_564) > (g_366 = (*g_565)))), 10))) | l_911))));
                for (g_255 = 0; (g_255 <= 5); g_255 += 1)
                {
                    int i, j;
                    return g_85[g_255][(g_9 + 1)];
                }
            }
        }
    }

    ;

    ;
    ;


    (*g_568) &= func_22(((**g_211) = &l_703), l_919, (*g_886), &l_703, l_718[5][1][0]);

    ;
    for (g_698 = (-30); (g_698 <= 16); g_698++)
    {
        unsigned char l_922 = 0xB4L;
        unsigned ***l_923 = (void*)0;
        unsigned ***l_924 = (void*)0;
        unsigned **l_926 = &l_6;
        unsigned ***l_925 = &l_926;
        char l_927 = 1L;
        (**g_212) = (-1L);
        if (l_922)
            break;
        (*g_792) = func_69(&l_6, ((*l_925) = ((*g_183) = (*g_183))), (*g_886), l_927, l_922);

        ;
    }
    (*g_212) = func_12((***g_677), (safe_unary_minus_func_uint32_t_u((((*l_704) &= (g_401[9][0] &= g_255)) | ((safe_sub_func_int16_t_s_s((!(((*g_568) = func_69(&l_6, (*g_183), (*g_886), (*g_886), ((safe_sub_func_int8_t_s_s(((**g_774) |= g_933), g_933)) & (&g_565 != l_934)))) == 2L)), 0xB520L)) != 0xECL)))), &l_703);
    return (*g_848);



}







static unsigned char func_4(unsigned p_5)
{
    short l_33 = 0x4DA8L;
    int l_40 = 9L;
    int l_42 = 0x4D633C66L;
    int *l_485[3];
    char l_516 = (-1L);
    unsigned short l_630 = 0xAA83L;
    int l_637 = (-2L);
    int ****l_673[5][9][5] = {{{&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}}, {{&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}}, {{&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}}, {{&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}}, {{&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}, {&g_211, &g_211, &g_211, &g_211, &g_211}}};
    int *l_697[7][7] = {{&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}, {&l_40, &g_62[2], &l_40, (void*)0, &g_64, &g_21, &g_64}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_485[i] = &g_62[0];
lbl_632:
    for (g_9 = 0; (g_9 > 43); g_9 = safe_add_func_uint16_t_u_u(g_9, 6))
    {
        int *l_38[1][1][1];
        unsigned char l_486 = 0x01L;
        unsigned l_493 = 18446744073709551615UL;
        unsigned **l_512 = &g_56;
        unsigned *l_629 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_38[i][j][k] = (void*)0;
            }
        }
    }
    if ((!(**g_212)))
    {
        int l_633 = 6L;
        int l_634 = 5L;
        int l_638 = (-1L);
        char *l_639 = &g_349;
        unsigned char ***l_640[9][7] = {{&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}, {&g_445, (void*)0, &g_445, &g_445, &g_445, &g_445, &g_445}};
        unsigned **l_649[7] = {(void*)0, (void*)0, &g_56, (void*)0, (void*)0, &g_56, (void*)0};
        unsigned l_660 = 18446744073709551612UL;
        int *l_691 = &l_637;
        int *l_696 = &g_21;
        int i, j;
        for (g_21 = 0; (g_21 <= 7); g_21 += 1)
        {
            if (g_9)
                goto lbl_632;
            return p_5;
        }
        l_638 = (((l_634 = l_633) > (safe_mod_func_uint32_t_u_u(l_637, 0x4B7A62E5L))) || (func_44(p_5, l_485[2]) != (-6L)));
        (***g_211) ^= (((*l_639) = 0x9DL) >= ((void*)0 != l_640[8][1]));
        if ((safe_rshift_func_int16_t_s_u(p_5, p_5)))
        {
            int *l_643[4] = {&g_62[1], &g_21, &g_62[1], &g_21};
            int i;
            (*g_212) = l_643[1];

            ;
            return p_5;
        }
        else
        {
            int l_644[2];
            unsigned *l_662 = &g_9;
            int *l_679 = &g_64;
            unsigned *l_699[10][6] = {{&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}, {&g_401[6][0], &g_255, &g_401[6][0], &g_255, &g_401[6][0], &g_255}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_644[i] = (-1L);
            if (l_644[1])
            {
                int *l_661 = &g_21;
                unsigned *l_666 = &g_280[0][6];
                int l_667 = 0x6B0804DCL;
                for (g_7 = 0; (g_7 == 15); g_7 = safe_add_func_int16_t_s_s(g_7, 2))
                {
                    int l_650 = (-1L);
                    int l_663 = 7L;
                    int **l_668 = &g_104;
                }
                return (**g_445);
            }
            else
            {
                int ****l_685 = &g_211;
                for (g_475 = 0; (g_475 <= 0); g_475 += 1)
                {
                    int *****l_684[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_684[i] = &g_677;
                    (*g_20) ^= (l_633 != ((safe_mod_func_int8_t_s_s(((*l_639) = g_401[2][0]), p_5)) && (safe_add_func_int8_t_s_s((p_5 >= ((g_677 = &g_211) != (g_686 = l_685))), (safe_add_func_uint32_t_u_u((!(*l_679)), (safe_mul_func_int8_t_s_s(func_69(l_649[2], &l_662, (*l_679), (*l_679), (*l_679)), (*g_446)))))))));
                    if ((**g_212))
                        break;
                    for (g_366 = 0; (g_366 <= 0); g_366 += 1)
                    {
                        l_691 = &l_638;

                        ;
                        if (g_255)
                            goto lbl_632;
                    }
                }

                ;
            }

            ;
            (*l_691) ^= ((safe_add_func_int16_t_s_s((-8L), (**g_564))) & ((!0xE4L) && (((*g_565) | (safe_mul_func_uint16_t_u_u(func_22(l_696, (*l_679), ((*l_662) = 0x1AEEAC4CL), &l_634, (**g_183)), (-6L)))) <= p_5)));
            (*l_696) &= ((*g_568) = (*l_679));
        }

        ;
    }
    else
    {
        int *l_700 = (void*)0;
        (**g_211) = l_700;

        ;
    }

    ;
    return p_5;
}







static int * func_12(int * p_13, unsigned char p_14, int * p_15)
{
    for (g_366 = 7; (g_366 != 36); g_366 = safe_add_func_int32_t_s_s(g_366, 8))
    {
        short l_489 = 4L;
        (**g_211) = (*g_212);
        if ((**g_212))
            continue;
    }
    return (*g_212);


}







static int * func_16(int * p_17, short p_18, unsigned * p_19)
{
    char *l_483 = &g_154;
    int *l_484 = &g_62[0];
    if (((*l_484) = ((*p_17) |= (l_483 == (void*)0))))
    {
        return p_17;


    }
    else
    {
        (*l_484) = (~0x82C6F2DCL);
    }
    (*g_212) = l_484;

    ;
    return l_484;


}







static short func_22(int * p_23, short p_24, unsigned p_25, int * p_26, unsigned * p_27)
{
    int l_469 = 0L;
    int l_482 = 1L;
lbl_472:
    (*g_20) = (-1L);
    for (p_25 = 0; (p_25 <= 5); p_25 += 1)
    {
        int *l_467 = &g_41[4];
        int l_468 = 1L;
        int l_477 = (-1L);
        int l_478[8] = {1L, 1L, 0xCB3634AAL, 1L, 1L, 0xCB3634AAL, 1L, 1L};
        int i;
        l_469 ^= l_468;
        if ((safe_mul_func_int16_t_s_s((p_24 = 1L), l_468)))
        {
            for (g_151 = 1; (g_151 <= 5); g_151 += 1)
            {
                if (g_151)
                    goto lbl_472;
            }
        }
        else
        {
            return p_24;
        }
        for (p_24 = 4; (p_24 >= 0); p_24 -= 1)
        {
            short *l_473 = (void*)0;
            short *l_474[9][6][4] = {{{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}, {{(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}, {(void*)0, &g_85[p_25][(p_24 + 4)], &g_475, &g_85[p_25][(p_24 + 4)]}}};
            unsigned short *l_476 = &g_366;
            int i, j, k;
            (*p_23) = 0L;
            l_477 &= ((*p_23) ^= ((((*l_476) = (0xEBL & (g_85[p_25][(p_24 + 4)] <= (l_468 = p_24)))) <= (~0x5E95L)) || ((*l_476) = (p_25 || p_24))));
        }
        for (g_323 = 1; (g_323 <= 5); g_323 += 1)
        {
            int *l_479 = &l_469;
            int i, j;
            if (g_85[g_323][(g_323 + 1)])
                break;
            if (l_478[4])
                break;
            l_482 = ((((*g_20) = ((*l_479) ^= (*p_23))) < (safe_sub_func_int32_t_s_s(l_478[4], 7L))) != (**g_445));
        }
    }
    return l_469;
}







static int * func_28(unsigned char p_29, char p_30, int p_31, int * p_32)
{
    char l_43 = 0xD1L;
    int l_367 = 0L;
    int l_410 = 0x986FF757L;
    unsigned **l_431 = (void*)0;
    int *l_466 = &g_39[2];
    l_43 = 3L;
    l_367 = (func_44(p_29, p_32) < p_31);

    ;
    ;
lbl_403:
    for (g_151 = (-29); (g_151 < 41); g_151++)
    {
        int *l_376 = &g_39[4];
        short *l_377[8][7][1] = {{{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}, {{&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}, {&g_85[2][5]}}};
        unsigned short l_389 = 0x09C6L;
        int i, j, k;
        for (p_30 = 0; (p_30 != (-8)); p_30 = safe_sub_func_uint32_t_u_u(p_30, 4))
        {
            int *l_379[4][3][3];
            int **l_380 = &l_379[2][0][0];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_379[i][j][k] = &g_21;
                }
            }
            (**g_211) = &p_31;

            ;
            for (g_21 = 18; (g_21 >= (-4)); g_21 = safe_sub_func_uint16_t_u_u(g_21, 5))
            {
                int l_378[10] = {0xEF4180C5L, 0xF2A81067L, 0xEF4180C5L, 0xF2A81067L, 0xEF4180C5L, 0xF2A81067L, 0xEF4180C5L, 0xF2A81067L, 0xEF4180C5L, 0xF2A81067L};
                int i;
                for (g_7 = 0; (g_7 < 58); g_7 = safe_add_func_int16_t_s_s(g_7, 3))
                {
                    return l_376;



                }
                l_378[6] = (l_377[2][2][0] != (void*)0);
                return l_379[3][1][0];



            }
            (*l_380) = ((**g_211) = (*g_212));


        }
        for (g_255 = 0; (g_255 > 3); g_255++)
        {
            char l_402 = (-1L);
            (*g_20) = ((*l_376) = ((*g_20) & g_280[0][5]));
            for (g_7 = 26; (g_7 != 14); g_7 = safe_sub_func_uint8_t_u_u(g_7, 7))
            {
                (**g_211) = (*g_212);
                (*g_212) = (**g_211);
                for (g_323 = 0; (g_323 <= 0); g_323 += 1)
                {
                    int *l_393 = (void*)0;
                    int i, j;
                }
            }
            (***g_211) |= l_402;
        }
        return l_376;



    }
    for (l_367 = 0; (l_367 >= 0); l_367 -= 1)
    {
        unsigned char l_404[1][8][7];
        int l_414 = 1L;
        int ****l_434 = &g_211;
        int ****l_435 = &g_211;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 7; k++)
                    l_404[i][j][k] = 0xC0L;
            }
        }
        if (g_151)
            goto lbl_403;
        for (g_399 = 0; (g_399 <= 0); g_399 += 1)
        {
            unsigned short l_405 = 65534UL;
            int *l_448 = &g_62[1];
            (*g_212) = func_47(l_404[0][7][4], p_31, l_405, g_323);
            for (g_255 = 0; (g_255 <= 0); g_255 += 1)
            {
                unsigned short *l_413 = &l_405;
                unsigned short l_432 = 0xEE6CL;
                unsigned **l_461 = &g_56;
                char *l_464 = &g_349;
                char *l_465 = &l_43;
                int i, j;
                if ((safe_rshift_func_int8_t_s_s((((((g_39[4] || p_31) > ((!l_367) != (((((l_410 = (g_77[(g_255 + 4)][(g_399 + 8)] = (safe_mod_func_int8_t_s_s((~l_43), l_404[0][7][4])))) || ((safe_lshift_func_int8_t_s_s(1L, ((*g_104) < (l_414 &= (((*l_413) = 65535UL) > 0x4E71L))))) || 0UL)) >= (-2L)) < p_29) && g_41[4]))) <= p_29) == p_31) != (*g_20)), 5)))
                {
                    char *l_423 = &g_154;
                    int l_424 = (-1L);
                    if ((l_424 &= (l_405 >= (safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((((void*)0 == &g_183) == ((void*)0 != &g_151)), 1)) & (safe_rshift_func_uint8_t_u_s(7UL, ((*l_423) &= g_39[4])))), (g_77[4][0] && 0x270AFDD5L))) || p_31) | 0xC7A6L), (*g_20))))))
                    {
                        (***g_211) |= ((**g_211) != (void*)0);
                        (*g_20) = (safe_mul_func_uint16_t_u_u(p_30, (&p_29 != (void*)0)));
                    }
                    else
                    {
                        unsigned *l_433 = &g_280[0][1];
                        int i, j;
                        if (g_77[(g_255 + 4)][(g_399 + 8)])
                            break;
                        (*g_212) = (*g_212);
                        (*g_20) = (safe_add_func_int8_t_s_s(g_77[(g_255 + 4)][(g_399 + 8)], ((g_401[(g_255 + 2)][l_367] = ((((*l_413) = (safe_rshift_func_int16_t_s_u(func_69(l_431, (*g_183), ((*l_433) ^= l_432), l_424, func_69(l_431, (*g_183), (0x1597L | 0xDB9DL), p_29, g_77[(g_255 + 4)][(g_399 + 8)])), 6))) != g_77[1][3]) > 1L)) ^ 3L)));
                        if (l_414)
                            goto lbl_403;
                    }
                }
                else
                {
                    unsigned char *l_444 = &l_404[0][7][4];
                    unsigned char **l_443 = &l_444;
                    int i, j;
                    for (g_154 = 0; (g_154 <= 5); g_154 += 1)
                    {
                        (*g_104) = (l_434 != l_435);
                    }
                    if (((safe_mod_func_uint16_t_u_u(((*l_413) |= func_52((**g_183))), p_30)) && (l_405 >= p_29)))
                    {
                        (****l_435) = ((void*)0 != &p_31);
                    }
                    else
                    {
                        unsigned short l_440 = 4UL;
                        (*g_20) ^= ((****l_434) | (safe_lshift_func_uint16_t_u_u((l_440 ^= ((*l_413) = 0xD6F1L)), 8)));
                        (***l_434) = &p_31;

                        ;
                        p_32 = (void*)0;
                    }
                    if ((safe_rshift_func_int16_t_s_s((g_85[g_399][(l_367 + 5)] = (func_52(p_32) == l_405)), (+(&g_151 != ((*l_443) = &p_29))))))
                    {
                        unsigned char ***l_447 = &l_443;
                        (****l_435) = (0L | (**g_212));
                        if ((*g_104))
                            break;
                        (*l_447) = g_445;

                        ;
                        (***g_211) |= ((0x08L && 0x37L) != 4294967289UL);
                    }
                    else
                    {
                        (***l_435) = l_448;

                        ;
                    }

                    ;
                    ;
                }
                (****l_435) = (((safe_mod_func_int8_t_s_s(((*l_465) = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((**g_445), (safe_add_func_int16_t_s_s((-1L), ((g_399 ^ (g_255 && (~g_366))) == (l_410 = (l_43 & (safe_mod_func_int8_t_s_s(((*l_464) |= ((safe_sub_func_uint16_t_u_u(func_69(l_461, (*g_183), ((((safe_lshift_func_uint16_t_u_s(0x553AL, l_432)) != p_30) > l_410) == (*l_448)), p_31, p_31), 0x69D3L)) || 0x7C2CL)), p_29))))))))), (*g_446)))), g_77[(g_255 + 4)][(g_399 + 8)])) == 0xDF685AF2L) >= p_29);
                (**g_212) = ((void*)0 == &g_211);
            }
            (**g_212) = (***g_211);
        }
    }
    return l_466;



}







static char func_44(unsigned p_45, unsigned * p_46)
{
    unsigned *l_55[1][8][4] = {{{&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}}};
    unsigned **l_54[1][4];
    int l_243 = 1L;
    int ****l_244 = &g_211;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_54[i][j] = &l_55[0][2][3];
    }
    (*g_212) = func_47(g_7, g_7, (((func_52((g_56 = (void*)0)) > l_243) ^ (((*l_244) = &g_212) != &g_212)) || func_52(p_46)), g_7);

    ;
    (***g_211) |= (p_45 >= 0x65D55B35L);
    return g_57;
}







static int * func_47(unsigned char p_48, char p_49, unsigned short p_50, int p_51)
{
    short l_251 = 0x96A0L;
    unsigned *l_254 = &g_255;
    int l_256 = 1L;
    int l_257[3][5][1] = {{{0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}}, {{0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}}, {{0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}, {0x55AC83A6L}}};
    unsigned **l_269 = &g_56;
    unsigned char l_273 = 248UL;
    short **l_275 = (void*)0;
    int l_296[7] = {0x69FA8EE8L, 0x69FA8EE8L, (-7L), 0x69FA8EE8L, 0x69FA8EE8L, (-7L), 0x69FA8EE8L};
    unsigned **l_353 = (void*)0;
    unsigned ***l_352 = &l_353;
    unsigned l_354 = 0UL;
    unsigned short *l_355 = &g_77[1][3];
    int l_356 = (-1L);
    unsigned short *l_365 = &g_366;
    int i, j, k;
    l_257[0][1][0] ^= (l_256 = (safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_251 & (((0xC54E92F5L <= (safe_lshift_func_int8_t_s_u(func_69((*g_183), (*g_183), p_50, (((*l_254) = l_251) >= ((*g_20) = (p_48 <= (func_52(l_254) >= l_251)))), l_251), p_48))) || p_50) || 6UL)) >= l_251), l_251)), 0x3B07L)) || (-10L)) & g_41[0]), g_154)));
    for (g_57 = 0; (g_57 <= 7); g_57 += 1)
    {
        unsigned **l_264 = &g_56;
        int l_270[8] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
        int *l_295[7];
        int i;
        for (i = 0; i < 7; i++)
            l_295[i] = (void*)0;
        for (g_154 = 0; (g_154 <= 2); g_154 += 1)
        {
            unsigned **l_258 = &g_56;
            int l_266 = 0x204F4FA2L;
            unsigned **l_272 = &g_56;
            int i;
            (**g_212) = g_62[g_154];
            for (p_50 = 1; (p_50 <= 4); p_50 += 1)
            {
                unsigned l_259 = 18446744073709551613UL;
                unsigned char *l_265[2];
                unsigned ***l_271[3][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                char l_274 = 0L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_265[i] = &g_151;
                l_266 &= (func_69(l_258, (g_184[p_50] = (*g_183)), ((-1L) >= g_41[(p_50 + 1)]), ((!(((g_41[(p_50 + 3)] || l_259) > (g_151 = (safe_mul_func_int16_t_s_s(l_257[2][4][0], (safe_rshift_func_uint8_t_u_s(func_69(l_264, l_258, p_49, p_49, p_49), g_154)))))) != 0xFB455FA8L)) || (***g_211)), p_51) >= l_251);
                (*g_20) = (g_62[g_154] & (((safe_add_func_uint16_t_u_u(l_266, func_69(l_269, ((*g_183) = (*g_183)), (((p_48 &= ((void*)0 == l_254)) >= (p_51 ^ (((((l_270[1] ^ func_69((l_258 = &g_56), l_272, g_62[g_154], p_51, l_273)) || g_255) ^ 0x263778AAL) && g_7) != p_49))) < l_274), p_50, l_251))) ^ p_50) >= p_51));
            }
            (*g_20) = g_41[g_57];
        }
        for (l_256 = 4; (l_256 >= 0); l_256 -= 1)
        {
            int *l_279[10][5] = {{&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}, {&g_62[1], &l_270[2], &l_270[6], &l_270[2], &g_62[1]}};
            short ***l_283 = &g_105;
            unsigned **l_314 = &g_56;
            int i, j;
            for (g_255 = 0; (g_255 <= 7); g_255 += 1)
            {
                short ***l_276 = &g_105;
                char *l_284[9][8][1] = {{{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}, {{&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}, {&g_154}}};
                int *l_292 = (void*)0;
                int i, j, k;
                (*l_276) = l_275;

                ;
            }
            for (p_49 = 1; (p_49 <= 4); p_49 += 1)
            {
                l_295[2] = (**g_211);
            }
        }


    }
    l_356 |= (func_69(l_269, l_269, (((*l_355) = ((l_257[2][1][0] = func_69((*g_183), ((*l_352) = l_269), (0L != ((*l_355) &= (g_62[0] | (g_64 < l_354)))), p_51, l_251)) <= 4UL)) < p_50), l_273, l_296[3]) >= 1UL);

    ;
    l_356 &= (func_52((*l_353)) != (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(4L, ((*l_365) = (safe_mod_func_int16_t_s_s(l_296[5], ((g_154 == ((p_48 == l_257[1][1][0]) || ((+g_7) & (!(safe_mul_func_uint16_t_u_u((p_51 || 0xBA12C1CEL), g_280[0][6])))))) || 0x74L)))))), (-1L))));
    return (**g_211);


}







static unsigned func_52(unsigned * p_53)
{
    unsigned l_78 = 18446744073709551609UL;
    unsigned char l_149 = 253UL;
    int *l_161 = &g_64;
    unsigned short *l_242 = &g_77[6][5];
    for (g_21 = 0; (g_21 == (-12)); g_21--)
    {
        int *l_63 = &g_21;
        unsigned **l_141 = &g_56;
        int l_229 = 0L;
        unsigned l_232 = 1UL;
        for (g_57 = 1; (g_57 <= 4); g_57 += 1)
        {
            int *l_61[5];
            int **l_60 = &l_61[1];
            short ***l_175[3][8][1] = {{{&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}}, {{&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}}, {{&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}, {&g_105}}};
            int l_179 = 0x65BD87C1L;
            unsigned short l_225 = 0x7885L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_61[i] = &g_21;
            (*l_60) = &g_39[g_57];


            for (g_62[1] = 4; (g_62[1] >= 1); g_62[1] -= 1)
            {
                unsigned short l_138 = 65535UL;
                (*l_60) = l_63;
                for (g_64 = 1; (g_64 <= 4); g_64 += 1)
                {
                    int l_137[8] = {(-5L), (-5L), 0xDDE4B234L, (-5L), (-5L), 0xDDE4B234L, (-5L), (-5L)};
                    int i;
                    l_138 |= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_69(&g_56, &g_56, (g_77[1][3] = (safe_add_func_int16_t_s_s(g_39[g_57], g_39[g_62[1]]))), l_78, g_41[4]), ((~l_137[7]) ^ 0xE6L))), g_64));
                }
            }
        }
        (*g_212) = (*g_212);
    }
    (*l_161) = ((*g_20) |= (!((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((func_69((*g_183), (*g_183), (*l_161), (*l_161), g_62[2]) | ((*l_242) = ((*l_161) <= (safe_sub_func_uint32_t_u_u((*l_161), g_154))))), (*l_161))), (*l_161))), (*l_161))) & g_154)));
    (**g_212) &= (*l_161);
    return g_39[4];
}







static unsigned func_69(unsigned ** p_70, unsigned ** p_71, unsigned p_72, unsigned p_73, unsigned p_74)
{
    unsigned short l_89 = 1UL;
    int l_91 = 0xF2894906L;
    int *l_99 = &g_39[0];
    int *l_102 = &g_62[1];
    int *l_115 = &g_39[2];
    unsigned char l_136 = 0x0BL;
    for (p_72 = 0; (p_72 < 3); p_72 = safe_add_func_int8_t_s_s(p_72, 3))
    {
        char l_83 = (-1L);
        short *l_84 = &g_85[5][3];
        int *l_86 = &g_39[4];
        (*l_86) = (safe_lshift_func_int16_t_s_u(((*l_84) = l_83), (g_64 == (0xC778C533L || g_62[2]))));
    }
    for (p_72 = 1; (p_72 == 11); p_72 = safe_add_func_int16_t_s_s(p_72, 4))
    {
        int *l_90 = &g_39[3];
        short *l_127 = &g_85[5][8];
        unsigned l_129[9];
        int i;
        for (i = 0; i < 9; i++)
            l_129[i] = 0xB50BCEF8L;
        l_89 = 0x2AE6BA14L;
    }
    for (p_74 = 0; (p_74 <= 5); p_74 += 1)
    {
        return g_39[0];
    }
    return l_136;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_280[i][j], "g_280[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_401[i][j], "g_401[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_772[i][j], "g_772[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
