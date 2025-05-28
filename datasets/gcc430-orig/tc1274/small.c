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



static unsigned g_7 = 0xDA4D073FL;
static unsigned short g_31[6][3] = {{1UL, 1UL, 1UL}, {1UL, 1UL, 1UL}, {1UL, 1UL, 1UL}, {1UL, 1UL, 1UL}, {1UL, 1UL, 1UL}, {1UL, 1UL, 1UL}};
static unsigned short g_33[2][2] = {{1UL, 1UL}, {1UL, 1UL}};
static unsigned short g_41[3] = {8UL, 8UL, 8UL};
static long long g_68 = 0xEAC8E4C12F69A016LL;
static long long g_70[1][7][3] = {{{0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}, {0x81A770AACC702B5BLL, 3L, 0xD67A3D58E56A96DALL}}};
static int g_73[1] = {0x6AF83395L};
static int * volatile g_72 = &g_73[0];
static const int ** volatile g_84 = (void*)0;
static const int *g_86 = (void*)0;
static const int ** volatile g_85 = &g_86;
static int * volatile g_87 = (void*)0;
static int * volatile g_89 = &g_73[0];
static int *g_92 = &g_73[0];
static int ** volatile g_91 = &g_92;
static const int ** volatile g_94 = &g_86;
static short g_98 = (-9L);
static volatile short g_102 = (-3L);
static volatile short * volatile g_101 = &g_102;
static volatile short * volatile * volatile g_100 = &g_101;
static volatile short * volatile * volatile * volatile g_103 = (void*)0;
static volatile short * volatile * volatile * volatile g_104 = &g_100;
static int g_110 = 0x34F93D1DL;
static unsigned long long g_127[10] = {0x9EF24C43DCC553FELL, 1UL, 0x9EF24C43DCC553FELL, 1UL, 0x9EF24C43DCC553FELL, 1UL, 0x9EF24C43DCC553FELL, 1UL, 0x9EF24C43DCC553FELL, 1UL};
static int * volatile g_137 = &g_110;
static unsigned short *g_138 = &g_41[2];
static int g_166 = 0x2AEAA53EL;
static long long g_174 = (-1L);
static short g_175 = 0xDBD5L;
static int * volatile g_178 = (void*)0;
static int g_180 = 1L;
static const int ** volatile g_182[3][1][10] = {{{(void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, &g_86}}, {{(void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, &g_86}}, {{(void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, &g_86}}};
static unsigned char g_212 = 0UL;
static volatile long long g_216[6][4] = {{0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}, {0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}, {0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}, {0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}, {0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}, {0x83620376514B0433LL, (-3L), 0x83620376514B0433LL, (-3L)}};
static volatile long long *g_215 = &g_216[3][3];
static volatile long long ** const volatile g_214 = &g_215;
static short *g_225 = &g_98;
static int *g_236[7] = {&g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180};
static int ** volatile g_235[9][7] = {{&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}, {&g_236[4], (void*)0, &g_236[0], &g_236[2], (void*)0, &g_236[2], (void*)0}};
static int ** volatile g_237 = &g_236[6];
static unsigned g_239 = 4294967290UL;
static unsigned g_241 = 4294967291UL;
static int * volatile g_245[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static int **g_259 = (void*)0;
static int **g_261 = &g_92;
static int *** const volatile g_260 = &g_261;
static long long g_272 = (-3L);
static unsigned char g_277 = 0UL;
static volatile unsigned long long ** const volatile g_318 = (void*)0;
static int g_335 = 0L;
static int * volatile g_349 = &g_73[0];
static long long * volatile g_370 = &g_68;
static long long * volatile *g_369 = &g_370;
static long long * volatile * volatile *g_368 = &g_369;
static const unsigned *g_376[3][10] = {{&g_239, (void*)0, &g_239, (void*)0, (void*)0, &g_239, (void*)0, &g_239, &g_239, &g_239}, {&g_239, (void*)0, &g_239, (void*)0, (void*)0, &g_239, (void*)0, &g_239, &g_239, &g_239}, {&g_239, (void*)0, &g_239, (void*)0, (void*)0, &g_239, (void*)0, &g_239, &g_239, &g_239}};
static const unsigned **g_375 = &g_376[2][3];
static const unsigned *** volatile g_374 = &g_375;
static int * volatile g_411 = &g_73[0];
static unsigned long long *g_490 = &g_127[6];
static unsigned long long * const *g_489 = &g_490;
static char g_512 = 8L;
static int g_536 = 0x10B0F966L;
static const int ** volatile g_601 = &g_86;
static const int ** volatile g_603 = &g_86;
static char g_623 = (-1L);
static long long **g_635 = (void*)0;
static unsigned long long **g_662 = &g_490;
static unsigned long long ***g_661 = &g_662;
static int *g_715 = &g_73[0];
static int ** volatile g_714 = &g_715;
static const int ** volatile g_732 = &g_86;
static int g_803 = 0L;
static int ** const volatile g_819 = (void*)0;
static unsigned *g_844 = &g_239;
static unsigned * const *g_843 = &g_844;
static unsigned * const ** volatile g_848 = (void*)0;
static short g_929[3] = {0x37CFL, 0x37CFL, 0x37CFL};
static const unsigned char *g_1009 = &g_212;
static const unsigned char **g_1008 = &g_1009;
static const int * volatile *g_1019 = (void*)0;
static const int * volatile ** const volatile g_1020 = &g_1019;
static int * volatile g_1031[2] = {&g_166, &g_166};
static int * volatile g_1032 = &g_180;



static unsigned char func_1(void);
static unsigned char func_13(long long p_14);
static long long func_15(int p_16, char p_17, unsigned char p_18);
static char func_19(int p_20, const unsigned long long p_21, long long p_22, int p_23);
static int func_24(const unsigned short p_25);
static unsigned short func_34(unsigned short * p_35, unsigned short * p_36, unsigned short * p_37);
static unsigned short * func_38(unsigned short * p_39);
static unsigned short func_46(short p_47, unsigned long long p_48, unsigned short * p_49, long long p_50);
static long long func_52(unsigned short * p_53, unsigned p_54, unsigned short * p_55, short p_56);
static unsigned short * func_57(short p_58, unsigned p_59, int p_60, unsigned p_61);
static unsigned char func_1(void)
{
    unsigned l_2 = 0xF825E7A6L;
    unsigned short *l_139[4][5][4] = {{{&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}}, {{&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}}, {{&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}}, {{&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}, {&g_41[1], &g_41[2], (void*)0, (void*)0}}};
    unsigned short l_1017 = 0x6607L;
    unsigned * const *l_1030 = (void*)0;
    long long l_1048 = 0L;
    int *l_1050 = &g_73[0];
    long long l_1055 = 0L;
    unsigned char *l_1056 = &g_212;
    unsigned char *l_1057 = (void*)0;
    unsigned char *l_1058 = &g_277;
    int i, j, k;
    if (l_2)
    {
        int l_8 = 7L;
        unsigned short *l_30 = &g_31[0][2];
        unsigned short *l_32 = &g_33[0][0];
        unsigned short *l_40 = &g_41[2];
        unsigned *l_238 = &g_239;
        unsigned *l_240 = &g_241;
        int *l_334 = &g_335;
        int l_1018 = (-1L);
        int l_1025 = 0xD910469BL;
        l_1018 = (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(g_7, ((l_8 = l_2) && (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((func_13(func_15(l_2, func_19(((*l_334) = func_24(((safe_lshift_func_uint8_t_u_s(g_7, 2)) <= ((*l_240) = ((*l_238) = (safe_rshift_func_uint16_t_u_u(((*l_32) = ((*l_30) = 0x2D62L)), func_34((g_138 = func_38(l_40)), l_139[0][0][1], &g_41[2])))))))), l_2, g_277, l_2), g_277)) | l_1017), g_929[2])), l_1017))))) == 0x1D55L), 10));
        (*g_1020) = g_1019;
        if (((0x523E2F4EL && ((**g_1008) == (safe_mod_func_int64_t_s_s((l_2 | ((safe_sub_func_int32_t_s_s((l_8 = 0x17E818E5L), (l_1018 == (((l_1017 && (((*g_370) = l_1025) && (**g_369))) == 0x1DL) < 0x6206FE42L)))) | (**g_843))), l_1018)))) < l_1018))
        {
            unsigned char l_1028[6] = {253UL, 253UL, 7UL, 253UL, 253UL, 7UL};
            int *l_1029 = &g_180;
            int i;
            (*l_1029) = (l_1028[2] = ((-3L) <= (safe_lshift_func_int16_t_s_u((**g_100), 3))));
        }
        else
        {
            (*g_1032) = ((g_174 & (&l_238 != l_1030)) || (1UL || (+l_8)));
        }
    }
    else
    {
        unsigned l_1035 = 6UL;
        unsigned short *l_1041 = &g_41[2];
        unsigned long long l_1042 = 0UL;
        for (g_803 = 0; (g_803 == (-21)); g_803--)
        {
            const unsigned short l_1036[4][8][5] = {{{0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}}, {{0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}}, {{0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}}, {{0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}, {0UL, 0xEBA9L, 65535UL, 0xEBA9L, 0UL}}};
            int i, j, k;
            (*g_92) = l_1035;
            (*g_715) = (l_1036[1][4][2] < (***g_368));
            (*g_92) = l_1036[1][2][0];
            if ((*g_1032))
                continue;
        }
        if ((l_1017 <= ((((**g_489) = (&g_100 != (void*)0)) <= ((**g_843) == (((((*g_715) = l_1017) & ((*g_844) != (l_1035 < ((l_1041 != &l_1017) & l_1017)))) == l_1042) || (-8L)))) < 0x2A765E246DFE8725LL)))
        {
            unsigned short l_1047 = 0UL;
            (**g_261) = ((**g_214) | ((safe_mod_func_int8_t_s_s(l_1047, l_1048)) < l_1017));
        }
        else
        {
            unsigned short l_1049[2][3][4] = {{{65526UL, 0xCDB5L, 65526UL, 0x066EL}, {65526UL, 0xCDB5L, 65526UL, 0x066EL}, {65526UL, 0xCDB5L, 65526UL, 0x066EL}}, {{65526UL, 0xCDB5L, 65526UL, 0x066EL}, {65526UL, 0xCDB5L, 65526UL, 0x066EL}, {65526UL, 0xCDB5L, 65526UL, 0x066EL}}};
            int i, j, k;
            return l_1049[1][0][3];
        }
        (*g_261) = l_1050;
    }
    (*l_1050) = (safe_lshift_func_int16_t_s_s((*l_1050), ((safe_rshift_func_int8_t_s_s(((((**g_843) = 4294967289UL) != ((l_1055 <= (((*l_1056) = (*g_1009)) & (((*l_1058) = 1UL) < ((void*)0 != &g_1008)))) >= (***g_661))) & (*g_72)), g_31[4][0])) && (*l_1050))));
    return (*l_1050);
}







static unsigned char func_13(long long p_14)
{
    unsigned *l_444 = &g_239;
    unsigned **l_443 = &l_444;
    unsigned **l_446[6][5][6] = {{{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}, {{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}, {{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}, {{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}, {{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}, {{&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}, {&l_444, &l_444, &l_444, &l_444, &l_444, &l_444}}};
    unsigned ***l_445 = &l_446[3][3][4];
    int l_447 = (-9L);
    int l_448 = (-1L);
    int l_451 = (-1L);
    long long l_452 = 0L;
    unsigned short *l_453 = (void*)0;
    int *l_456 = &l_447;
    long long l_571 = 0x8F95EF346340EB6ALL;
    unsigned l_590 = 4294967295UL;
    unsigned short *l_610 = (void*)0;
    long long *l_638[2][8][5] = {{{&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}}, {{&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}, {&g_68, &g_70[0][6][0], &g_174, (void*)0, &l_571}}};
    long long **l_637[5][4][7] = {{{&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}}, {{&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}}, {{&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}}, {{&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}}, {{&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}, {&l_638[0][5][0], &l_638[1][2][3], &l_638[1][3][3], (void*)0, &l_638[0][7][0], (void*)0, (void*)0}}};
    int l_643 = 0xEFE5C6EBL;
    unsigned long long ***l_667 = &g_662;
    short l_675 = 3L;
    short *l_744 = (void*)0;
    short ****l_767 = (void*)0;
    int *l_839 = &l_451;
    unsigned * const *l_847 = (void*)0;
    unsigned l_919 = 7UL;
    long long l_928[9] = {(-2L), (-1L), (-2L), (-1L), (-2L), (-1L), (-2L), (-1L), (-2L)};
    unsigned l_1001 = 5UL;
    unsigned char *l_1006[2][4][6] = {{{&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}}, {{&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}, {&g_277, &g_277, (void*)0, (void*)0, (void*)0, &g_277}}};
    unsigned char **l_1005 = &l_1006[0][3][2];
    unsigned long long l_1016 = 0xF793F9CBD4DC4828LL;
    int i, j, k;
    if (((safe_mod_func_uint32_t_u_u(((p_14 ^ g_31[1][1]) > (safe_rshift_func_int16_t_s_u(((*g_225) = (((l_443 == ((*l_445) = &l_444)) >= (l_448 = (l_447 = l_447))) != p_14)), (l_451 = (safe_add_func_uint64_t_u_u(((g_335 != p_14) | ((((0xA90D6450104A5C38LL == 0x7CE5D51ADBA32175LL) & p_14) ^ p_14) && l_451)), l_452)))))), l_452)) & 1UL))
    {
        char l_457[9] = {0x4CL, 0x0AL, 0x4CL, 0x0AL, 0x4CL, 0x0AL, 0x4CL, 0x0AL, 0x4CL};
        int l_475 = 0x778A3A3BL;
        short **l_477 = &g_225;
        int i;
        for (g_166 = 0; (g_166 >= 7); g_166++)
        {
            long long l_468 = 0x42E18E0E99FCE0E0LL;
            short **l_473 = &g_225;
            short ***l_472[7][7] = {{&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}, {&l_473, &l_473, &l_473, &l_473, &l_473, &l_473, (void*)0}};
            unsigned long long *l_487 = &g_127[9];
            unsigned long long **l_486 = &l_487;
            int l_492[9] = {(-9L), (-1L), (-9L), (-1L), (-9L), (-1L), (-9L), (-1L), (-9L)};
            int i, j;
            l_456 = &l_451;
            for (g_239 = 0; (g_239 <= 6); g_239 += 1)
            {
                unsigned short *l_464 = (void*)0;
                short ** const *l_474 = &l_473;
                int i, j;
                (*l_456) = p_14;
                for (l_452 = 0; (l_452 <= 6); l_452 += 1)
                {
                    unsigned long long *l_465 = &g_127[3];
                    int *l_466 = (void*)0;
                    int l_467[8][3] = {{0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}, {0x7306DE79L, 4L, 0x05469DEEL}};
                    int l_469[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_469[i] = 1L;
                    (*g_261) = &l_447;
                    if (l_457[5])
                        break;
                    (*l_456) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_14, 0xB4E3L)), func_15((1UL | (0UL != p_14)), ((safe_lshift_func_uint8_t_u_s(func_15((l_467[2][0] = ((~((void*)0 == l_464)) | ((*l_465) = p_14))), l_468, g_216[4][2]), p_14)) ^ 0x9DBF21FD1DCE0CC7LL), l_469[1])));
                }
                if ((safe_add_func_int32_t_s_s(p_14, (l_475 = (l_472[4][1] == l_474)))))
                {
                    for (g_98 = 4; (g_98 >= 2); g_98 -= 1)
                    {
                        const int *l_476 = &l_447;
                        int i, j;
                        l_475 = ((*l_456) = 0xDB4C886DL);
                        l_476 = (void*)0;
                        return g_41[2];
                    }
                    return p_14;
                }
                else
                {
                    int *l_478 = &g_73[0];
                    if (((void*)0 == l_477))
                    {
                        int l_479 = 0L;
                        unsigned long long ***l_488 = &l_486;
                        unsigned long long * const **l_491 = (void*)0;
                        if ((*g_411))
                            break;
                        (*g_261) = l_478;
                        l_492[1] = func_15((+l_479), p_14, (l_479 <= (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_14 ^ g_33[0][0]), (safe_add_func_uint32_t_u_u(((l_468 | g_175) ^ (((*l_488) = l_486) != (g_489 = g_489))), p_14)))), 12))));
                        if (l_479)
                            continue;
                    }
                    else
                    {
                        int *l_495 = &l_451;
                        (*l_478) = p_14;
                        (*l_456) = (safe_rshift_func_int16_t_s_s(((void*)0 != (*g_100)), (*g_225)));
                        (*g_261) = l_495;
                    }
                }
            }
            for (g_277 = 0; (g_277 <= 9); g_277 += 1)
            {
                int *l_496 = &l_475;
                (*g_261) = &l_492[1];
                (*g_261) = l_496;
                for (l_468 = 0; (l_468 <= 9); l_468 += 1)
                {
                    (*l_496) = p_14;
                    (*g_261) = &l_492[1];
                }
            }
        }
        (*g_261) = &l_448;
    }
    else
    {
        unsigned char l_499 = 0x5EL;
        short *l_506 = &g_98;
        char *l_511 = &g_512;
        const int *l_515 = (void*)0;
        int l_528 = 1L;
        const short *l_589 = &g_98;
        const short **l_588 = &l_589;
        const short ***l_587 = &l_588;
        const short ****l_586 = &l_587;
        int l_627 = 0xCEB0D731L;
        char l_657[5][8] = {{(-3L), 1L, 8L, 8L, 1L, (-3L), 1L, 8L}, {(-3L), 1L, 8L, 8L, 1L, (-3L), 1L, 8L}, {(-3L), 1L, 8L, 8L, 1L, (-3L), 1L, 8L}, {(-3L), 1L, 8L, 8L, 1L, (-3L), 1L, 8L}, {(-3L), 1L, 8L, 8L, 1L, (-3L), 1L, 8L}};
        unsigned long long ***l_666[10][5] = {{&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}, {&g_662, &g_662, &g_662, &g_662, &g_662}};
        int i, j;
        if ((safe_mul_func_uint16_t_u_u((l_499 && (safe_rshift_func_int8_t_s_s((p_14 && (safe_rshift_func_int16_t_s_s(p_14, 13))), 5))), (safe_add_func_uint16_t_u_u((l_506 != (void*)0), (safe_rshift_func_int16_t_s_u(((-4L) == ((safe_add_func_int8_t_s_s(((*l_511) = func_19((*l_456), (~(l_499 ^ 0xA6E155AFL)), p_14, p_14)), g_41[0])) ^ g_41[0])), l_499)))))))
        {
            unsigned short l_513 = 65535UL;
            int l_537 = 0L;
            const unsigned l_576 = 18446744073709551615UL;
            int *l_580[6] = {(void*)0, &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]};
            short l_618[6][10] = {{(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)}};
            char l_626 = 0xD6L;
            int i, j;
            if (p_14)
            {
                int *l_514 = &g_73[0];
                if (l_513)
                {
                    const int **l_516 = &g_86;
                    (*g_261) = l_514;
                    (*l_516) = l_515;
                }
                else
                {
                    int *l_519[4] = {&g_73[0], &g_73[0], &g_73[0], &g_73[0]};
                    int i;
                    (*g_261) = (void*)0;
                    (*l_456) = (*l_514);
                    if ((safe_add_func_uint64_t_u_u(0xFB623810E5A7285CLL, ((***g_368) = (**g_369)))))
                    {
                        (*l_514) = 0x4E6785DFL;
                        (*g_261) = l_519[0];
                    }
                    else
                    {
                        int l_531[7][8][4] = {{{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}, {{0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}, {0xD710824EL, 1L, 0L, 1L}}};
                        unsigned long long *l_534 = (void*)0;
                        unsigned long long *l_535[8][7][4] = {{{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}, {{&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}, {&g_127[4], &g_127[1], (void*)0, &g_127[4]}}};
                        int i, j, k;
                        (*l_456) = ((safe_add_func_int8_t_s_s((&g_369 == &g_369), (safe_lshift_func_int8_t_s_u((func_19(((safe_mod_func_uint64_t_u_u(0xD6B1DEE50E79A3B4LL, (*l_456))) <= (((0x90L | (safe_mul_func_int16_t_s_s((**g_100), ((l_528 = 0xBFL) || 8L)))) && (safe_add_func_int32_t_s_s((*g_137), (*l_456)))) >= (*g_225))), (*l_514), g_41[2], p_14) != l_513), l_531[6][7][0])))) >= p_14);
                        (*g_261) = &l_448;
                        (*g_261) = l_519[0];
                        (*l_456) = (safe_sub_func_uint64_t_u_u((*g_490), (g_536 = p_14)));
                    }
                }
                l_537 = p_14;
                l_514 = &l_537;
            }
            else
            {
                unsigned long long *l_542 = (void*)0;
                int l_559 = 6L;
                short *l_575 = (void*)0;
                int l_579[3];
                int *l_581 = &g_166;
                unsigned long long l_591 = 0x50348E2523B82901LL;
                int i;
                for (i = 0; i < 3; i++)
                    l_579[i] = 0L;
                for (p_14 = 23; (p_14 >= 14); p_14--)
                {
                    unsigned long long **l_543[10] = {(void*)0, &g_490, (void*)0, &g_490, (void*)0, &g_490, (void*)0, &g_490, (void*)0, &g_490};
                    unsigned short *l_548[8] = {&g_41[2], &g_41[2], &g_33[0][0], &g_41[2], &g_41[2], &g_33[0][0], &g_41[2], &g_41[2]};
                    int l_572 = 0x16EAD363L;
                    unsigned short **l_573 = &l_548[7];
                    int i;
                    (*l_456) = ((safe_sub_func_uint64_t_u_u((g_127[1] = (~(l_542 == (g_490 = &g_127[0])))), (***g_368))) <= (safe_add_func_uint32_t_u_u(p_14, (((safe_lshift_func_uint16_t_u_s((g_33[0][0] = p_14), ((l_559 = (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((6L != (safe_mod_func_uint16_t_u_u(p_14, g_180))), (safe_add_func_int64_t_s_s(((((g_70[0][5][0] || (*l_456)) | p_14) ^ p_14) && 4294967289UL), p_14)))), 1UL)) && p_14), (*l_456)))) & p_14))) != (-1L)) || (*l_456)))));
                    for (g_166 = 0; (g_166 >= (-6)); g_166--)
                    {
                        int l_564[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_564[i] = 0x398CB085L;
                        if ((*g_137))
                            break;
                        l_564[2] = (l_537 = (safe_rshift_func_int8_t_s_s(func_15(p_14, g_68, g_31[0][2]), ((*l_511) = (p_14 && (p_14 <= ((*l_456) = p_14)))))));
                        (*g_261) = &l_559;
                    }
                    if ((safe_sub_func_uint16_t_u_u(1UL, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((l_571 || l_572), p_14)), l_559)))))
                    {
                        short *l_574 = &g_175;
                        (*g_261) = &l_537;
                        (*l_456) = ((**g_104) != (l_575 = l_574));
                        (*g_261) = (void*)0;
                        (*l_456) = (l_559 ^ 1UL);
                    }
                    else
                    {
                        (*l_456) = (((***g_104) ^ l_576) & ((p_14 < p_14) & (safe_mod_func_uint64_t_u_u(l_579[0], p_14))));
                        if ((*g_349))
                            continue;
                    }
                }
                for (g_277 = 0; (g_277 <= 0); g_277 += 1)
                {
                    unsigned char *l_592 = &l_499;
                    int *l_593 = (void*)0;
                    int i;
                    for (l_537 = 0; (l_537 <= 0); l_537 += 1)
                    {
                        l_580[1] = &l_447;
                    }
                    for (l_448 = 1; (l_448 <= 4); l_448 += 1)
                    {
                        int i;
                        g_236[(g_277 + 6)] = &g_73[g_277];
                        l_581 = ((*g_261) = &l_448);
                        return g_41[(g_277 + 2)];
                    }
                    (*l_581) = (g_73[g_277] = ((safe_add_func_int8_t_s_s(g_41[g_277], ((p_14 & p_14) <= (safe_mul_func_int8_t_s_s((l_586 == &g_103), ((((*l_581) > (l_590 ^ (((*l_592) = l_591) || (*l_581)))) > p_14) || (*g_101))))))) >= g_41[g_277]));
                    for (l_451 = 0; (l_451 <= 2); l_451 += 1)
                    {
                        l_593 = ((*g_261) = &l_537);
                        (*l_456) = (safe_unary_minus_func_uint32_t_u(0x647DD300L));
                    }
                }
            }
            (*g_72) = ((*l_456) = (((**g_214) != (*l_456)) < g_70[0][5][0]));
            for (l_451 = 0; (l_451 == 20); ++l_451)
            {
                unsigned short l_597 = 65533UL;
                const int *l_600 = &g_166;
                if (p_14)
                    break;
                if (l_597)
                {
                    int *l_613 = &l_448;
                    for (g_166 = (-26); (g_166 < (-17)); g_166 = safe_add_func_int8_t_s_s(g_166, 4))
                    {
                        (*g_601) = l_600;
                    }
                    (*g_137) = (-1L);
                    for (g_272 = 0; (g_272 <= 0); g_272 += 1)
                    {
                        const int *l_602[6][8][4] = {{{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}, {{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}, {{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}, {{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}, {{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}, {{&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}, {&g_166, &g_166, &g_110, &g_166}}};
                        unsigned short **l_608 = (void*)0;
                        unsigned short **l_609 = &l_453;
                        int i, j, k;
                        (*g_603) = l_602[5][6][0];
                        l_528 = (safe_rshift_func_int8_t_s_u((p_14 > 0UL), 7));
                        (*l_456) = (safe_rshift_func_int16_t_s_s(0x5236L, 8));
                        l_602[5][6][0] = l_613;
                    }
                }
                else
                {
                    char *l_622[4] = {(void*)0, &g_623, (void*)0, &g_623};
                    int *l_624[8][7] = {{&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}, {&g_536, &g_536, (void*)0, &g_536, &g_536, (void*)0, &g_536}};
                    int l_625 = 0x8545062FL;
                    int i, j;
                    l_627 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_528 = 0x6DL) == func_19(g_68, (p_14 != ((*l_444) = (247UL > (func_15(g_31[0][1], ((*l_511) = 0xBEL), func_15(l_618[5][7], ((((safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s(((*l_456) = p_14), ((l_624[4][3] != (void*)0) || l_625))))) ^ p_14) != p_14) > p_14), p_14)) || 0L)))), l_626, p_14)), g_41[2])), (-1L)));
                    (*g_94) = l_600;
                }
                if (p_14)
                    break;
            }
        }
        else
        {
            char l_630 = 9L;
            long long ***l_636 = &g_635;
            unsigned short *l_669 = &g_33[1][1];
            int *l_677 = &l_447;
            unsigned char *l_723 = &l_499;
            if ((l_630 & ((*l_456) = (0UL > ((p_14 == l_630) | 1L)))))
            {
                unsigned l_654 = 0xDCE5B598L;
                short **l_682 = &l_506;
                int *l_683 = &l_528;
                unsigned short *l_728 = &g_41[2];
                const int *l_730 = &g_110;
                unsigned **l_733[5][10] = {{&l_444, (void*)0, &l_444, &l_444, &l_444, &l_444, &l_444, (void*)0, &l_444, &l_444}, {&l_444, (void*)0, &l_444, &l_444, &l_444, &l_444, &l_444, (void*)0, &l_444, &l_444}, {&l_444, (void*)0, &l_444, &l_444, &l_444, &l_444, &l_444, (void*)0, &l_444, &l_444}, {&l_444, (void*)0, &l_444, &l_444, &l_444, &l_444, &l_444, (void*)0, &l_444, &l_444}, {&l_444, (void*)0, &l_444, &l_444, &l_444, &l_444, &l_444, (void*)0, &l_444, &l_444}};
                int i, j;
                if (p_14)
                {
                    unsigned long long l_650 = 18446744073709551615UL;
                    unsigned short *l_658 = &g_33[0][0];
                    int *l_678[8] = {&g_166, &l_528, &g_166, &l_528, &g_166, &l_528, &g_166, &l_528};
                    long long ***l_679 = (void*)0;
                    int i;
                    if (p_14)
                    {
                        unsigned long long l_653 = 0x60FE3DED2DD5654ELL;
                        unsigned long long ****l_663 = (void*)0;
                        unsigned long long ****l_664 = (void*)0;
                        unsigned long long ****l_665[1][8];
                        unsigned *l_668 = &l_654;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_665[i][j] = &g_661;
                        }
                        (*g_261) = (void*)0;
                        (*l_456) = (l_657[4][4] = (safe_mod_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((***g_368) = (l_650 && g_127[9])), (0x050D2A1CC46439B7LL | p_14))), l_650)) == (p_14 || ((safe_lshift_func_uint16_t_u_u(l_653, 14)) < (((~l_654) > (safe_add_func_int8_t_s_s(l_650, l_630))) <= p_14)))) != l_650) < 3UL), l_653)));
                        l_528 = (func_52(l_658, ((*l_668) = (!(safe_add_func_uint8_t_u_u(((*l_456) < 0x944CL), func_52(l_658, p_14, l_658, func_52(&g_33[0][0], p_14, l_453, l_650)))))), l_669, l_653) ^ (*g_225));
                        (*g_261) = &l_643;
                    }
                    else
                    {
                        int l_670 = 0x458B8A0CL;
                        return l_670;
                    }
                    (*l_456) = 0L;
                    for (g_98 = 0; (g_98 == 15); g_98++)
                    {
                        char l_676 = 2L;
                        long long ****l_680 = &l_636;
                        unsigned char *l_681 = &g_277;
                        l_676 = (safe_rshift_func_uint8_t_u_s(l_675, 7));
                        (*g_261) = (l_678[1] = l_677);
                        if ((*g_89))
                            break;
                        l_627 = (((l_679 == ((*l_680) = &l_637[0][3][6])) | (((*l_677) = l_676) == ((**l_443) = ((((*l_681) = p_14) < l_676) || (l_643 = ((*l_587) != l_682)))))) < func_15(l_654, l_654, g_175));
                    }
                    (*g_261) = l_683;
                }
                else
                {
                    long long l_707 = 1L;
                    if (((((void*)0 != &l_654) | (safe_sub_func_int8_t_s_s(p_14, 0UL))) == g_68))
                    {
                        (*g_261) = &l_627;
                        return p_14;
                    }
                    else
                    {
                        unsigned l_690 = 0xF80160D0L;
                        unsigned char *l_706 = &g_212;
                        (*l_683) = (-8L);
                        (*l_683) = p_14;
                        (*g_411) = (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((*l_683), (!((*l_456) = l_690)))) >= (((safe_mod_func_uint8_t_u_u(g_68, (safe_rshift_func_uint8_t_u_s(((*l_706) = (p_14 <= ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((func_19(((safe_mod_func_int32_t_s_s(p_14, (safe_mod_func_int64_t_s_s((**g_214), (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((&g_138 == (void*)0) <= ((*l_444) = p_14)), l_690)), (*l_683))))))) < 0xE6L), l_690, p_14, l_690) && 0xA629B6D1L))), (*l_683))) > 0x39L))), l_707)))) & l_707) != l_690)) & p_14), p_14));
                    }
                }
                for (g_174 = 0; (g_174 < 19); g_174 = safe_add_func_int16_t_s_s(g_174, 2))
                {
                    int *l_713 = (void*)0;
                    for (g_277 = 0; (g_277 >= 48); ++g_277)
                    {
                        int *l_712 = &l_448;
                        (*g_261) = &l_528;
                        (*g_261) = l_712;
                        (*g_714) = ((*g_261) = l_713);
                    }
                }
                if (p_14)
                {
                    (*g_349) = (*l_456);
                }
                else
                {
                    unsigned l_716 = 0x646EE900L;
                    int *l_729[6][9] = {{&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}, {&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}, {&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}, {&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}, {&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}, {&g_73[0], &l_627, &l_451, &l_451, &l_627, &g_73[0], &l_643, &l_528, &l_627}};
                    int i, j;
                    if (l_716)
                    {
                        unsigned char **l_724 = (void*)0;
                        unsigned char **l_725 = (void*)0;
                        unsigned char **l_726[10][3][3] = {{{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}, {{&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}, {&l_723, &l_723, &l_723}}};
                        unsigned short **l_727[1][6][1];
                        const int **l_731 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_727[i][j][k] = (void*)0;
                            }
                        }
                        (*l_677) = (safe_rshift_func_int16_t_s_s(((*l_506) = (((18446744073709551606UL <= 0L) ^ p_14) >= (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_14, (l_716 > ((&g_212 != (l_723 = l_723)) ^ p_14)))), g_241)))), (*l_683)));
                        (*g_261) = l_729[4][7];
                        (*g_732) = l_730;
                    }
                    else
                    {
                        (*l_445) = l_733[1][3];
                        return p_14;
                    }
                    return g_239;
                }
            }
            else
            {
                unsigned long long l_737 = 0xD7724A055F57CA6CLL;
                if (p_14)
                {
                    int *l_734 = &l_448;
                    l_734 = l_677;
                }
                else
                {
                    (*g_715) = (safe_lshift_func_uint16_t_u_u(p_14, 10));
                    for (g_623 = 0; g_623 < 2; g_623 += 1)
                    {
                        for (l_448 = 0; l_448 < 2; l_448 += 1)
                        {
                            g_33[g_623][l_448] = 0xE4C5L;
                        }
                    }
                    (*g_261) = &l_528;
                    l_528 = (l_737 = p_14);
                }
            }
            if ((*l_456))
            {
                long long l_748 = 0x8623870C46104230LL;
                unsigned short *l_749[5][3][4] = {{{&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}}, {{&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}}, {{&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}}, {{&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}}, {{&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}, {&g_41[2], (void*)0, &g_33[0][0], &g_33[0][0]}}};
                int *l_751 = &g_180;
                const unsigned ***l_761 = &g_375;
                int i, j, k;
                for (l_528 = 0; (l_528 <= 25); l_528 = safe_add_func_int8_t_s_s(l_528, 2))
                {
                    short **l_745 = &l_744;
                    int l_746 = 0xE4C2B951L;
                    int l_747 = (-1L);
                    unsigned short **l_750 = &l_749[2][2][3];
                    l_748 = ((l_746 = (((*l_745) = l_744) != &l_675)) == l_747);
                    (*l_456) = (-1L);
                    (*g_261) = &l_627;
                    if (p_14)
                    {
                        l_515 = l_751;
                        if (p_14)
                            break;
                        return g_216[3][3];
                    }
                    else
                    {
                        unsigned char l_766 = 255UL;
                        (*l_751) = (safe_mod_func_int32_t_s_s(p_14, (((&g_214 != &l_637[4][3][1]) != (((*l_511) = ((l_627 = ((**g_369) = (((*l_456) = (safe_mod_func_int32_t_s_s((((safe_unary_minus_func_uint64_t_u(((**g_662) = (safe_rshift_func_uint8_t_u_u(g_102, (safe_lshift_func_uint16_t_u_u(((*l_669) = (l_761 != (void*)0)), 14))))))) < p_14) > (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x650195E2L, (*l_751))), p_14))), l_766))) != 0L))) != 0UL)) <= g_536)) || p_14)));
                    }
                }
                (*l_456) = 1L;
                l_456 = l_677;
            }
            else
            {
                (*l_456) = ((void*)0 == l_767);
            }
        }
        for (g_110 = (-17); (g_110 <= 12); g_110 = safe_add_func_uint32_t_u_u(g_110, 9))
        {
            int *l_770 = &g_110;
            (*g_261) = l_770;
            for (g_68 = 0; (g_68 < (-30)); g_68--)
            {
                char l_773[2][8] = {{0x45L, 0x40L, 4L, 0x40L, 0x45L, 0x40L, 4L, 0x40L}, {0x45L, 0x40L, 4L, 0x40L, 0x45L, 0x40L, 4L, 0x40L}};
                int i, j;
                l_773[1][6] = (0xA611L ^ p_14);
            }
        }
    }
    if (((*l_456) | (*l_456)))
    {
        unsigned short l_776 = 65535UL;
        int l_777 = 2L;
        int l_778 = 0L;
        int *l_783 = &l_643;
        unsigned l_813[4][4][9] = {{{0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}}, {{0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}}, {{0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}}, {{0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}, {0x54ED5E06L, 6UL, 0x3A64DA5CL, 0xE1D03841L, 0x15E01A74L, 18446744073709551615UL, 0xDD962734L, 0x13B79E5CL, 0x7D92BB6EL}}};
        short **l_816 = (void*)0;
        short ***l_815[5];
        short ****l_814 = &l_815[0];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_815[i] = &l_816;
        if ((safe_sub_func_int16_t_s_s(p_14, (((+(l_777 = ((*l_456) = l_776))) == ((*g_225) = (l_778 = l_776))) || (**g_662)))))
        {
            int *l_779 = (void*)0;
            int **l_780 = (void*)0;
            int **l_781 = &g_92;
            int **l_782[1][7][7] = {{{&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}, {&g_236[2], &g_92, &l_779, &g_715, &g_236[0], &l_779, &g_715}}};
            unsigned short *l_786 = &g_41[2];
            short l_787 = 1L;
            int i, j, k;
            l_777 = (l_787 = (((((l_783 = l_779) != (void*)0) == p_14) >= (safe_sub_func_int64_t_s_s((l_778 = (p_14 || (~func_19(g_175, ((((p_14 > (*l_456)) && 7UL) ^ 18446744073709551615UL) || (*g_101)), p_14, l_777)))), 0x535252F9711694EFLL))) == 0L));
            for (g_272 = 0; (g_272 > 17); ++g_272)
            {
                char l_811 = 0xFCL;
                for (g_98 = 0; (g_98 <= 3); g_98 += 1)
                {
                    unsigned short *l_802 = &g_31[0][2];
                    int l_808 = 1L;
                    unsigned char *l_812 = &g_277;
                    (*l_456) = (((func_15(p_14, (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0L, ((l_808 = ((0xAFBCL == (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*l_812) = (safe_sub_func_uint64_t_u_u((func_52(l_802, g_803, &l_776, (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((*g_225), (l_808 ^ (safe_lshift_func_int8_t_s_s(l_808, 6))))), 0xC96DL))) > l_811), p_14))), g_68)), p_14)), (*g_225))) | p_14) > 1L)) & (**g_662))) & 1L))), g_41[1])), (*l_456)) <= 0L) <= 0x5DDE7981L) & 0x6C2A790184E78795LL);
                }
            }
            l_813[1][0][4] = (l_767 != (void*)0);
        }
        else
        {
            short ****l_817 = &l_815[2];
            int * const l_818 = &g_180;
            int **l_820 = (void*)0;
            int **l_821 = &g_715;
            (*l_783) = (l_814 != l_817);
            (*l_821) = l_818;
        }
    }
    else
    {
        unsigned **l_827 = &l_444;
        int *l_840[9][1] = {{&l_448}, {&l_448}, {&l_448}, {&l_448}, {&l_448}, {&l_448}, {&l_448}, {&l_448}, {&l_448}};
        unsigned short *l_850[7];
        unsigned short *l_874 = &g_41[2];
        unsigned short l_895 = 65534UL;
        unsigned long long ****l_899 = &l_667;
        unsigned char *l_992 = (void*)0;
        int i, j;
        for (i = 0; i < 7; i++)
            l_850[i] = &g_31[0][2];
        for (l_448 = (-27); (l_448 >= (-13)); l_448 = safe_add_func_int8_t_s_s(l_448, 8))
        {
            unsigned * const *l_849[6][5] = {{&l_444, (void*)0, &l_444, (void*)0, &l_444}, {&l_444, (void*)0, &l_444, (void*)0, &l_444}, {&l_444, (void*)0, &l_444, (void*)0, &l_444}, {&l_444, (void*)0, &l_444, (void*)0, &l_444}, {&l_444, (void*)0, &l_444, (void*)0, &l_444}, {&l_444, (void*)0, &l_444, (void*)0, &l_444}};
            const int l_855 = (-3L);
            int l_856 = 0x266FF95DL;
            char l_890[10][5] = {{0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}, {0x19L, 0x0EL, 0L, 0xD1L, 0x29L}};
            int i, j;
        }
        if ((safe_sub_func_uint8_t_u_u((0xB270F230A8324700LL > l_919), (safe_mod_func_uint16_t_u_u(((-1L) <= (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((*l_839) ^ g_175), p_14)), ((safe_mod_func_int8_t_s_s((-8L), ((4294967289UL <= (((*l_456) & p_14) | (***g_104))) && 0xBC47L))) > l_928[1])))), g_929[2])))))
        {
            short l_930 = 1L;
            for (g_175 = 1; (g_175 >= 0); g_175 -= 1)
            {
                (*g_261) = l_840[5][0];
                return l_930;
            }
        }
        else
        {
            unsigned l_943 = 0x071FFD3CL;
            int *l_944 = &l_447;
            unsigned char *l_952[1][9] = {{&g_277, &g_212, &g_277, &g_212, &g_277, &g_212, &g_277, &g_212, &g_277}};
            unsigned char **l_951 = &l_952[0][8];
            char l_968 = (-1L);
            unsigned short *l_987[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_987[i] = &g_31[4][1];
            for (g_536 = 24; (g_536 != 15); g_536 = safe_sub_func_uint16_t_u_u(g_536, 5))
            {
                const unsigned l_933 = 1UL;
                unsigned short l_953 = 0xBA14L;
                int l_1003 = 0x6A96DB34L;
                if (l_933)
                {
                    unsigned long long **l_938 = &g_490;
                    int l_947 = 4L;
                    unsigned char *l_950 = (void*)0;
                    unsigned char **l_949 = &l_950;
                    unsigned char ***l_948[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_948[i] = &l_949;
                    (*l_944) = (((safe_sub_func_int64_t_s_s((l_947 = (safe_sub_func_int16_t_s_s(((*l_667) != l_938), (((((**g_369) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_943, (l_944 != l_840[3][0]))), l_933))) >= (safe_add_func_uint64_t_u_u(l_947, ((l_951 = (void*)0) != (void*)0)))) < l_947) != 0x03L)))), 0xEA8ED61F1CFF4D3BLL)) < 0UL) & l_953);
                    if (p_14)
                        continue;
                    for (g_166 = 0; (g_166 > (-29)); --g_166)
                    {
                        (*l_944) = 0x44E919E0L;
                    }
                }
                else
                {
                    int *l_957 = &l_448;
                    int *l_967 = &g_335;
                    for (g_98 = 0; (g_98 <= 6); g_98 += 1)
                    {
                        int l_956 = (-8L);
                        int i;
                        if (l_956)
                            break;
                        (*g_261) = l_957;
                    }
                    (*l_456) = (safe_rshift_func_uint8_t_u_s(248UL, (safe_sub_func_uint16_t_u_u(((p_14 && ((***g_661) ^ (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((p_14 >= (+((**g_843) = (g_33[1][0] > g_166)))))) < 0UL), 2)))) | l_953), func_15(((*l_967) = g_98), l_968, g_127[6])))));
                    for (g_241 = 0; (g_241 != 43); g_241++)
                    {
                        short l_971 = 0L;
                        unsigned short *l_986 = &g_33[0][0];
                        if (l_971)
                            break;
                        (*l_957) = ((*l_944) = (safe_add_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u((l_933 <= (safe_mul_func_int8_t_s_s(g_277, func_15((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((*l_944) = (((***g_368) = (safe_lshift_func_uint16_t_u_s(((*l_957) != p_14), 13))) | (l_953 < (*l_957)))) == 6UL), 8UL)), p_14)), p_14, p_14)))), 2)) ^ p_14) | p_14) && (**g_100)), p_14)));
                    }
                    (*l_456) = ((*l_957) = (((((((248UL && (safe_add_func_int16_t_s_s(((*g_225) = (*l_944)), (((-6L) >= 0UL) | 7L)))) > ((safe_sub_func_uint64_t_u_u(((l_992 = &g_212) != (void*)0), 18446744073709551610UL)) || ((g_277 = 248UL) || 1L))) && 4UL) && 0x89A355CE525088BFLL) > 0x44L) == 0x1EFCL) | (*l_944)));
                }
                for (g_212 = 0; (g_212 >= 10); g_212 = safe_add_func_int16_t_s_s(g_212, 2))
                {
                    short l_1002[9] = {0xE2C0L, 0L, 0xE2C0L, 0L, 0xE2C0L, 0L, 0xE2C0L, 0L, 0xE2C0L};
                    unsigned char ***l_1007 = &l_951;
                    const unsigned char ***l_1010 = &g_1008;
                    int *l_1011[9][6] = {{(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_180, &g_180, (void*)0, (void*)0}};
                    int i, j;
                    (*l_456) = (p_14 && (safe_sub_func_uint8_t_u_u((l_1003 = ((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((p_14 || ((**g_369) = ((&l_943 == &l_933) ^ (*l_944)))), p_14)) | ((l_1001 <= (*l_839)) & p_14)), (-9L))) < l_1002[6])), p_14)));
                    if (((safe_unary_minus_func_uint32_t_u((g_241 >= (((*l_839) | 0xFBAB4B37D7936B38LL) <= p_14)))) <= ((((*l_1007) = l_1005) == ((*l_1010) = g_1008)) >= p_14)))
                    {
                        (*g_261) = l_1011[3][5];
                        (*g_261) = &l_448;
                        (*g_261) = l_1011[3][5];
                        if (p_14)
                            break;
                    }
                    else
                    {
                        if (p_14)
                            break;
                        (*g_261) = &l_448;
                    }
                    for (g_512 = 2; (g_512 >= (-2)); g_512 = safe_sub_func_uint16_t_u_u(g_512, 7))
                    {
                        if (p_14)
                            break;
                    }
                    return p_14;
                }
                return (**g_1008);
            }
            (*l_839) = (safe_mod_func_uint32_t_u_u((((*l_944) = ((-5L) >= (((*g_225) = 0x599DL) && func_19((0UL <= ((p_14 & ((g_512 = g_335) == l_1016)) != (*l_456))), (***g_661), (*g_215), (*l_944))))) <= p_14), 0x86D5A36EL));
        }
        (*g_89) = ((*l_839) = ((void*)0 == &l_1005));
        return p_14;
    }
    return (*g_1009);
}







static long long func_15(int p_16, char p_17, unsigned char p_18)
{
    long long l_422 = 0xE09FF4784D76C3EFLL;
    int *l_438[5][5][9] = {{{&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}}, {{&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}}, {{&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}}, {{&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}}, {{&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}, {&g_73[0], &g_180, &g_73[0], (void*)0, &g_73[0], &g_180, &g_73[0], &g_166, (void*)0}}};
    int i, j, k;
    l_422 = 0xBD4F19F9L;
    for (g_335 = 0; (g_335 <= 6); g_335 += 1)
    {
        unsigned l_423 = 0x9F013A00L;
        int l_424 = 0x979334A3L;
        if (l_422)
            break;
        l_424 = l_423;
        if (p_16)
            break;
        l_424 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((0xEF900D369DB5FAEBLL ^ (safe_mul_func_int8_t_s_s(l_423, (p_16 < l_422)))) >= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((void*)0 != (*g_260)), l_422)), p_17)), 0))) ^ (l_422 && 3L)), l_422)), 3UL));
        for (l_423 = 0; (l_423 <= 6); l_423 += 1)
        {
            int *l_437 = &g_166;
            int i, j;
            l_438[1][1][2] = l_437;
        }
    }
    return (*g_370);
}







static char func_19(int p_20, const unsigned long long p_21, long long p_22, int p_23)
{
    unsigned l_338[6][2][4] = {{{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}, {{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}, {{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}, {{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}, {{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}, {{0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}, {0x991E0ECAL, 0x991E0ECAL, 3UL, 0x991E0ECAL}}};
    unsigned short *l_341 = &g_41[2];
    long long * const *l_367 = (void*)0;
    long long * const **l_366 = &l_367;
    int l_377[1];
    const int *l_392 = (void*)0;
    long long *l_397 = (void*)0;
    long long **l_396[3][9] = {{&l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397}, {&l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397}, {&l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397, &l_397}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_377[i] = 0xC100D987L;
    for (g_180 = 27; (g_180 <= 0); g_180 = safe_sub_func_uint64_t_u_u(g_180, 1))
    {
        unsigned long long l_344 = 8UL;
        unsigned short *l_347 = &g_33[0][1];
        int l_371 = 1L;
        (*g_261) = (void*)0;
        if (l_338[0][0][0])
            continue;
        for (g_166 = 0; (g_166 != 1); g_166 = safe_add_func_uint16_t_u_u(g_166, 9))
        {
            unsigned char l_348 = 0xE9L;
            char l_362 = 1L;
            int *l_395 = (void*)0;
            int *l_415[7][10][3] = {{{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}, {{&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}, {&l_371, (void*)0, &g_73[0]}}};
            int i, j, k;
            if (func_52(l_341, (safe_sub_func_uint64_t_u_u(l_344, (safe_sub_func_uint32_t_u_u((func_52(&g_33[1][0], p_22, l_347, (p_21 > (!func_52(&g_33[0][0], (0x2EL < 0x99L), &g_31[0][2], (*g_101))))) && (-10L)), l_348)))), l_341, l_338[0][0][0]))
            {
                unsigned short *l_354 = &g_33[1][0];
                unsigned short *l_356 = &g_41[1];
                int l_361 = 0x34DD1A17L;
                unsigned long long *l_365 = &g_127[0];
                (*g_349) = p_23;
                for (g_239 = 0; (g_239 == 11); g_239 = safe_add_func_int64_t_s_s(g_239, 7))
                {
                    int l_355[9][5] = {{1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}, {1L, 1L, (-1L), 1L, 1L}};
                    int i, j;
                    p_23 = (safe_mul_func_uint16_t_u_u(func_52(l_354, l_355[8][2], l_356, (***g_104)), (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((l_362 = l_361), 0x69L)), 1UL))));
                }
                l_371 = (safe_sub_func_uint8_t_u_u((((*l_365) = p_23) || (*g_215)), (l_366 != g_368)));
                (*g_261) = &l_361;
            }
            else
            {
                const unsigned *l_373 = &g_239;
                const unsigned ** const l_372[10][8][2] = {{{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}, {{&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}, {&l_373, &l_373}}};
                short l_381[6] = {7L, (-1L), 7L, (-1L), 7L, (-1L)};
                long long ***l_398 = &l_396[1][2];
                int i, j, k;
                for (l_371 = 3; (l_371 >= 0); l_371 -= 1)
                {
                    int l_378[6][8];
                    int l_384 = 1L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_378[i][j] = (-5L);
                    }
                    (*g_374) = l_372[5][3][1];
                    if (((g_216[l_371][l_371] < (p_23 = (l_378[2][7] = (l_377[0] = l_362)))) >= ((((safe_mul_func_uint8_t_u_u(g_33[1][1], l_362)) >= l_381[5]) | ((safe_add_func_uint8_t_u_u(255UL, l_348)) != l_384)) <= ((safe_sub_func_int16_t_s_s((*g_225), 0L)) < l_384))))
                    {
                        int *l_387 = (void*)0;
                        (*g_261) = l_387;
                    }
                    else
                    {
                        int *l_388 = (void*)0;
                        (*g_261) = l_388;
                    }
                }
                for (g_272 = 0; (g_272 != (-25)); g_272 = safe_sub_func_uint16_t_u_u(g_272, 7))
                {
                    const int **l_391[8][10][3] = {{{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}, {{&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}, {&g_86, (void*)0, &g_86}}};
                    int i, j, k;
                    l_392 = l_373;
                    for (p_23 = 0; (p_23 <= 2); p_23 = safe_add_func_int16_t_s_s(p_23, 3))
                    {
                        return g_41[1];
                    }
                    (*g_261) = &p_23;
                    l_395 = ((*g_261) = &p_23);
                }
                if ((((*g_225) = (((*l_398) = l_396[1][2]) != (*g_368))) || 0x1FA6L))
                {
                    for (g_239 = 0; (g_239 != 35); g_239 = safe_add_func_int32_t_s_s(g_239, 2))
                    {
                        unsigned char *l_410 = &g_212;
                        (*g_411) = ((safe_add_func_int16_t_s_s((((*g_260) != (void*)0) | g_127[2]), (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_70[0][5][0], l_381[5])), ((p_20 ^ 18446744073709551613UL) || (safe_add_func_uint8_t_u_u((l_371 = l_381[5]), (safe_unary_minus_func_uint8_t_u(((*l_410) = g_174)))))))))) < g_180);
                    }
                }
                else
                {
                    unsigned short *l_414 = &g_31[0][2];
                    l_377[0] = (safe_lshift_func_int8_t_s_u(func_52(&g_31[4][1], func_52(l_414, p_20, l_347, func_52(l_341, g_70[0][5][0], l_341, (**g_100))), l_341, (*g_225)), g_41[2]));
                }
            }
            p_23 = 0x2197DC2EL;
            if ((*g_72))
                continue;
            (*g_137) = (safe_lshift_func_int8_t_s_u(func_52(&g_33[0][0], (safe_mul_func_int8_t_s_s((0xFE78L && (safe_mod_func_uint16_t_u_u(p_21, ((*g_225) = (*g_225))))), p_22)), l_341, (***g_104)), 7));
        }
    }
    return p_22;
}







static int func_24(const unsigned short p_25)
{
    const int *l_244[9][8] = {{(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}, {(void*)0, (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], (void*)0, &g_73[0]}};
    int *l_246 = &g_166;
    unsigned short l_323 = 0xF748L;
    short **l_328 = &g_225;
    short ***l_327 = &l_328;
    unsigned l_333[10][6][4] = {{{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}, {{4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}, {4294967294UL, 0UL, 0xDF1FAAD1L, 0x3BF72AAFL}}};
    int i, j, k;
    (*l_246) = (safe_rshift_func_uint16_t_u_s(((1UL == ((void*)0 == l_244[3][0])) ^ p_25), 8));
    for (g_68 = 0; (g_68 <= 1); g_68 += 1)
    {
        const int **l_247[9][4][4] = {{{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}, {{(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}, {(void*)0, &g_86, &l_244[4][7], &l_244[0][1]}}};
        unsigned short *l_252 = (void*)0;
        unsigned long long *l_253 = (void*)0;
        unsigned long long *l_254 = &g_127[3];
        int l_279 = 0x8D7BA377L;
        int *l_286[8] = {&g_166, &g_166, &g_180, &g_166, &g_166, &g_180, &g_166, &g_166};
        unsigned l_310[1][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_310[i][j] = 0xC1D9208BL;
        }
        l_244[3][0] = l_244[3][0];
        l_246 = l_246;
        if ((4294967286UL | (0x77DEF9FAL < p_25)))
        {
            unsigned short *l_255 = &g_41[0];
            int *l_278[4];
            int i;
            for (i = 0; i < 4; i++)
                l_278[i] = (void*)0;
            for (g_98 = 7; (g_98 >= 0); g_98 -= 1)
            {
                unsigned short *l_256[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                unsigned short **l_273[5][8] = {{&l_252, &l_255, &l_255, &l_256[4], &g_138, &g_138, &l_252, &l_252}, {&l_252, &l_255, &l_255, &l_256[4], &g_138, &g_138, &l_252, &l_252}, {&l_252, &l_255, &l_255, &l_256[4], &g_138, &g_138, &l_252, &l_252}, {&l_252, &l_255, &l_255, &l_256[4], &g_138, &g_138, &l_252, &l_252}, {&l_252, &l_255, &l_255, &l_256[4], &g_138, &g_138, &l_252, &l_252}};
                unsigned char *l_274 = &g_212;
                unsigned char *l_275 = (void*)0;
                unsigned char *l_276 = &g_277;
                int i, j;
                for (g_241 = 0; (g_241 <= 1); g_241 += 1)
                {
                    int i, j;
                    for (g_212 = 0; (g_212 <= 1); g_212 += 1)
                    {
                        int **l_258 = (void*)0;
                        int ***l_257 = &l_258;
                        int i, j;
                        (*l_246) = g_33[g_212][g_241];
                        (*l_246) = func_52(l_252, g_216[(g_68 + 1)][g_68], (l_256[3] = l_255), (*g_225));
                        (*g_260) = (g_259 = ((*l_257) = &g_236[2]));
                    }
                    (*l_246) = 0L;
                    for (g_110 = 2; (g_110 <= 6); g_110 += 1)
                    {
                        int i, j;
                        return g_33[g_68][g_241];
                    }
                    if (g_33[g_68][g_68])
                        break;
                }
                (*l_246) = ((l_244[g_68][(g_68 + 2)] == l_244[g_98][g_98]) <= (255UL > ((*l_246) >= p_25)));
                l_244[(g_68 + 7)][g_98] = l_278[0];
            }
            l_279 = p_25;
            return p_25;
        }
        else
        {
            short l_280[6][3][6] = {{{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}, {{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}, {{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}, {{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}, {{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}, {{0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}, {0xB202L, 5L, (-1L), 5L, 0xB202L, 5L}}};
            unsigned long long *l_298 = &g_127[0];
            unsigned short *l_317 = &g_33[1][0];
            int l_320 = 0xEC22CC2CL;
            int i, j, k;
            if ((((p_25 <= (*g_215)) | ((!(0xF6L < (l_280[1][0][0] & (safe_add_func_int64_t_s_s(g_41[2], g_239))))) == g_175)) && ((safe_mod_func_uint16_t_u_u(p_25, 0xF599L)) != 0L)))
            {
                int *l_287 = &l_279;
                const int *l_313 = &g_180;
                unsigned short *l_316 = &g_33[0][0];
                unsigned long long **l_319[10][5] = {{&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}, {&l_298, &l_298, &l_298, &l_298, &l_298}};
                int i, j;
                if (p_25)
                {
                    int *l_285 = (void*)0;
                    (*g_261) = (l_286[2] = l_285);
                    l_287 = (*g_91);
                    if ((*g_137))
                        break;
                }
                else
                {
                    short l_288 = 0xC3A7L;
                    unsigned l_289 = 0x6C8D2CA1L;
                    unsigned short *l_292 = (void*)0;
                    unsigned *l_301 = &l_289;
                    l_289 = l_288;
                    (*l_287) = (((*g_225) = (safe_add_func_uint32_t_u_u(((&p_25 == (g_138 = l_292)) != ((safe_unary_minus_func_int64_t_s((*g_215))) != (*l_287))), ((*l_246) = l_288)))) | (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((~(l_298 == (void*)0)), g_68)), (safe_add_func_uint8_t_u_u((((*l_301) = (p_25 >= p_25)) & p_25), 0x16L)))));
                }
                for (g_272 = 1; (g_272 >= 0); g_272 -= 1)
                {
                    unsigned short *l_304 = (void*)0;
                    unsigned short *l_305 = &g_31[0][2];
                    int i, j;
                    if (((safe_add_func_uint16_t_u_u(0UL, (g_33[g_272][g_272] = 65535UL))) == ((*l_305) = p_25)))
                    {
                        int i, j;
                        l_244[(g_272 + 2)][(g_272 + 3)] = l_244[(g_68 + 4)][(g_272 + 3)];
                    }
                    else
                    {
                        int i, j;
                        l_244[(g_272 + 6)][(g_272 + 5)] = l_244[(g_272 + 4)][g_68];
                    }
                    for (g_174 = 0; (g_174 <= 16); g_174 = safe_add_func_uint64_t_u_u(g_174, 8))
                    {
                        return p_25;
                    }
                    return g_110;
                }
                for (g_110 = (-23); (g_110 <= 8); g_110++)
                {
                    unsigned l_311 = 0x58F53D3CL;
                    if (l_310[0][2])
                    {
                        (*l_246) = l_311;
                    }
                    else
                    {
                        const int *l_312[6] = {&l_279, &l_279, &g_73[0], &l_279, &l_279, &g_73[0]};
                        int i;
                        l_313 = l_312[3];
                    }
                }
                (*l_246) = (((safe_lshift_func_uint16_t_u_s(func_52(l_316, p_25, (l_317 = &g_31[0][2]), (g_318 != l_319[0][4])), ((p_25 >= (l_320 = p_25)) < ((safe_mul_func_int8_t_s_s(p_25, p_25)) || p_25)))) ^ p_25) <= l_323);
            }
            else
            {
                short **l_325 = (void*)0;
                short ***l_324 = &l_325;
                short ****l_326[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                int l_329 = 0L;
                int i;
                l_329 = (&g_100 == (l_327 = l_324));
            }
        }
        for (g_98 = 0; (g_98 < 5); g_98 = safe_add_func_int64_t_s_s(g_98, 6))
        {
            int l_332 = 7L;
            if (l_332)
                break;
        }
    }
    return l_333[6][2][1];
}







static unsigned short func_34(unsigned short * p_35, unsigned short * p_36, unsigned short * p_37)
{
    const char l_140 = 0xDDL;
    int **l_141 = &g_92;
    short *l_146 = (void*)0;
    unsigned long long *l_186[6][1][10] = {{{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}, {{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}, {{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}, {{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}, {{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}, {{(void*)0, &g_127[0], &g_127[4], (void*)0, (void*)0, (void*)0, &g_127[4], &g_127[0], (void*)0, &g_127[8]}}};
    unsigned l_209 = 4294967292UL;
    int *l_227[9][6][4] = {{{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}, {{&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}, {&g_73[0], &g_73[0], &g_180, &g_73[0]}}};
    int i, j, k;
    if (((~(l_140 | (l_141 != (void*)0))) <= func_46((g_98 = (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((**l_141), (g_98 & 0xCB4EFB57A5127A50LL))), func_52(p_35, (0x44L && g_68), &g_41[0], (**l_141))))), g_41[1], p_36, g_127[6])))
    {
        unsigned short l_153 = 0x848FL;
        short *l_171 = &g_98;
        int *l_181 = &g_73[0];
        for (g_110 = 0; (g_110 >= 22); ++g_110)
        {
            unsigned l_164 = 0x1A1128F6L;
            for (g_68 = 0; (g_68 <= (-22)); --g_68)
            {
                unsigned char l_165 = 0UL;
            }
            if (l_164)
                continue;
        }
        (*l_141) = l_181;
    }
    else
    {
        const int **l_183 = &g_86;
        unsigned long long *l_184 = &g_127[0];
        unsigned long long **l_185 = &l_184;
        short l_204 = 0x707FL;
        unsigned short **l_205[10][4] = {{(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}, {(void*)0, &g_138, (void*)0, (void*)0}};
        int *l_213 = &g_73[0];
        int l_234 = 0x876320E9L;
        int i, j;
        (*g_85) = (*g_91);
        (*l_183) = (*g_85);
        if (((((*l_185) = l_184) == l_186[5][0][6]) & (*g_86)))
        {
            short l_203 = (-5L);
            for (g_166 = 0; (g_166 == (-27)); g_166--)
            {
                unsigned short l_197 = 2UL;
                for (g_174 = (-17); (g_174 >= 25); g_174 = safe_add_func_uint32_t_u_u(g_174, 5))
                {
                    unsigned long long l_198[1][6] = {{0UL, 0UL, 7UL, 0UL, 0UL, 7UL}};
                    unsigned short *l_208 = &g_41[0];
                    int i, j;
                }
                if ((*g_92))
                    break;
                return (*p_37);
            }
            (*l_141) = l_213;
            return (*g_138);
        }
        else
        {
            unsigned long long l_222 = 1UL;
            long long *l_223 = &g_174;
            int l_229 = 1L;
            for (l_209 = 1; (l_209 <= 9); l_209 += 1)
            {
                volatile long long ** volatile l_218 = &g_215;
                int *l_219 = &g_180;
                (*l_213) = 0L;
                for (g_174 = 3; (g_174 >= 0); g_174 -= 1)
                {
                    (*l_183) = ((*l_141) = (*g_91));
                    for (g_175 = 0; (g_175 >= 0); g_175 -= 1)
                    {
                        volatile long long ** volatile *l_217 = (void*)0;
                        l_218 = g_214;
                    }
                    for (g_110 = 0; (g_110 >= 0); g_110 -= 1)
                    {
                        int i, j, k;
                        (*l_141) = l_219;
                        (*l_213) = 9L;
                    }
                }
                for (g_68 = 9; (g_68 >= 0); g_68 -= 1)
                {
                    unsigned l_224[6][9] = {{4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}, {4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}, {4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}, {4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}, {4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}, {4294967295UL, 0xD7E0BF01L, 4294967294UL, 0xA19ADB30L, 4294967294UL, 0xD7E0BF01L, 4294967295UL, 0x49CD76D8L, 0x3984BC84L}};
                    int i, j;
                }
            }
            if ((l_229 = (((*p_37) = 0x89D6L) || ((**l_141) | 4294967295UL))))
            {
                unsigned char l_232[6][4] = {{0UL, 0x7DL, 0x68L, 0x39L}, {0UL, 0x7DL, 0x68L, 0x39L}, {0UL, 0x7DL, 0x68L, 0x39L}, {0UL, 0x7DL, 0x68L, 0x39L}, {0UL, 0x7DL, 0x68L, 0x39L}, {0UL, 0x7DL, 0x68L, 0x39L}};
                int i, j;
                for (g_166 = 0; (g_166 <= (-19)); g_166--)
                {
                    return l_222;
                }
                (**l_141) = (l_232[5][2] | ((safe_unary_minus_func_uint32_t_u((l_234 & ((*l_184) = 0xB68249875E5E2D9ELL)))) & l_232[0][0]));
            }
            else
            {
                (*l_183) = &l_229;
            }
            (*l_141) = &l_229;
        }
        for (g_68 = 0; (g_68 >= 0); g_68 -= 1)
        {
            return (*p_35);
        }
    }
    (*l_141) = l_227[2][4][2];
    (*g_237) = ((*l_141) = (*l_141));
    return (*g_138);
}







static unsigned short * func_38(unsigned short * p_39)
{
    char l_51 = 1L;
    (*g_137) = ((safe_sub_func_int8_t_s_s(g_41[2], ((safe_lshift_func_uint8_t_u_s((func_46(l_51, g_41[2], p_39, func_52(&g_41[2], l_51, func_57(l_51, l_51, l_51, g_41[2]), l_51)) ^ 7L), 7)) & l_51))) > 0L);
    return &g_41[2];
}







static unsigned short func_46(short p_47, unsigned long long p_48, unsigned short * p_49, long long p_50)
{
    unsigned short *l_132 = &g_41[2];
    unsigned short **l_131 = &l_132;
    int l_135 = 0x46470AD0L;
    unsigned l_136 = 18446744073709551611UL;
    (*g_92) = (g_68 > ((safe_add_func_int64_t_s_s((p_49 != ((*l_131) = p_49)), ((g_98 ^ 1UL) ^ (safe_add_func_int8_t_s_s((l_135 != ((!(func_52(p_49, l_136, &g_41[1], (***g_104)) >= 1UL)) != l_135)), 0x0EL))))) || 1L));
    return g_68;
}







static long long func_52(unsigned short * p_53, unsigned p_54, unsigned short * p_55, short p_56)
{
    unsigned l_128 = 0x15597B07L;
    l_128 = (*g_89);
    return g_98;
}







static unsigned short * func_57(short p_58, unsigned p_59, int p_60, unsigned p_61)
{
    char l_66 = 0x90L;
    long long *l_67 = &g_68;
    long long *l_69 = &g_70[0][5][0];
    int *l_71 = (void*)0;
    long long l_93 = 0x16D7279364560F91LL;
    int ***l_120 = (void*)0;
    int **l_122 = &g_92;
    int ***l_121 = &l_122;
    int ***l_123 = (void*)0;
    int **l_125[10] = {&g_92, &l_71, &g_92, &g_92, &l_71, &g_92, &l_71, &g_92, &g_92, &l_71};
    int ***l_124 = &l_125[4];
    unsigned long long *l_126 = &g_127[0];
    int i;
    (*g_72) = (safe_rshift_func_int16_t_s_s((p_58 && ((*l_69) = ((*l_67) = (safe_mod_func_int32_t_s_s((l_66 >= p_60), p_58))))), 1));
    for (p_61 = 24; (p_61 <= 8); --p_61)
    {
        const unsigned long long l_78 = 4UL;
        int *l_90 = &g_73[0];
        (*g_72) = (*g_72);
        for (p_60 = (-1); (p_60 > (-11)); --p_60)
        {
            if (l_78)
            {
                unsigned l_88[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_88[i] = 0UL;
                for (p_59 = (-10); (p_59 != 55); p_59++)
                {
                    const int *l_81 = &g_73[0];
                    const int **l_82 = (void*)0;
                    const int **l_83 = (void*)0;
                    short *l_97 = &g_98;
                    int l_99 = (-5L);
                    (*g_85) = l_81;
                    if ((*g_72))
                    {
                        (*g_72) = (*g_72);
                        (*g_89) = ((!l_88[1]) & p_58);
                        (*g_91) = l_90;
                        l_93 = 0x88C8ECA7L;
                    }
                    else
                    {
                        (*g_92) = (*l_90);
                    }
                    (*g_94) = (*g_85);
                    l_99 = (!((*l_90) = (+((7L || (g_73[0] & ((*l_97) = ((0x8B4FD08915CC6C9DLL | (safe_rshift_func_int16_t_s_s(p_59, p_59))) != g_73[0])))) && ((void*)0 == &g_72)))));
                }
                (*g_104) = g_100;
            }
            else
            {
                for (g_68 = 5; (g_68 == (-23)); g_68--)
                {
                    int *l_109 = &g_110;
                    (*l_109) = ((*g_92) = (p_58 && (((safe_rshift_func_uint16_t_u_u(p_61, p_60)) & (p_59 || 0x08CD9178L)) | p_58)));
                }
            }
        }
        for (g_98 = (-29); (g_98 != 13); g_98++)
        {
            int **l_113 = &l_71;
            l_90 = ((*l_113) = (*g_91));
            for (g_68 = 0; (g_68 <= 0); g_68 += 1)
            {
                int i;
                (*l_113) = &g_73[g_68];
                g_73[g_68] = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_41[2], g_7)), p_60));
            }
        }
        (*l_90) = ((**g_91) && (p_60 = 1L));
    }
    p_60 = (p_58 <= (safe_add_func_uint64_t_u_u(((*l_126) = (((((*l_121) = &l_71) != ((*l_124) = &g_92)) | g_70[0][3][2]) || p_60)), ((*g_101) < 0UL))));
    return &g_41[0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_31[i][j], "g_31[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_70[i][j][k], "g_70[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_216[i][j], "g_216[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_929[i], "g_929[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
