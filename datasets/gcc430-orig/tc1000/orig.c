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


struct S0 {
   unsigned f0 : 31;
   unsigned f1 : 26;
   signed f2 : 21;
   unsigned f3;
};

struct S1 {
   unsigned f0 : 31;
   unsigned f1 : 6;
   const unsigned f2 : 8;
   const signed f3 : 23;
   signed f4 : 1;
};


static short g_10 = 0x2250L;
static short g_15 = 0x062BL;
static short *g_16 = &g_15;
static short *g_20[9] = {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15};
static short **g_21 = (void*)0;
static char g_31 = 2L;
static struct S0 g_41 = {28506,2379,-1010,18446744073709551615UL};
static const int g_68 = (-1L);
static const int *g_67 = &g_68;
static int g_70 = 0xB13F3B72L;
static char g_72[5] = {0L, 0x51L, 0L, 0x51L, 0L};
static int g_80 = (-1L);
static struct S0 g_97 = {37738,7366,602,0x002F449DL};
static unsigned short g_105 = 0x5611L;
static unsigned g_110 = 1UL;
static struct S0 *g_116[8] = {&g_97, (void*)0, &g_97, (void*)0, &g_97, (void*)0, &g_97, (void*)0};
static unsigned g_150[7][2] = {{4294967290UL, 0UL}, {4294967290UL, 0UL}, {4294967290UL, 0UL}, {4294967290UL, 0UL}, {4294967290UL, 0UL}, {4294967290UL, 0UL}, {4294967290UL, 0UL}};
static char *g_158 = &g_72[1];
static char ** const g_157 = &g_158;
static unsigned g_176 = 4294967290UL;
static struct S1 g_180 = {16396,7,14,319,-0};
static short g_208 = 6L;
static struct S1 *g_226 = &g_180;
static struct S1 **g_225 = &g_226;
static unsigned char g_235 = 0x17L;
static short g_236 = 0x9A77L;
static unsigned short g_266[9] = {65528UL, 65530UL, 65528UL, 65530UL, 65528UL, 65530UL, 65528UL, 65530UL, 65528UL};
static unsigned short *g_274 = (void*)0;
static unsigned g_420[1] = {4294967291UL};
static unsigned short ** const g_432[1] = {&g_274};
static unsigned short ** const *g_431 = &g_432[0];
static unsigned g_471 = 18446744073709551608UL;
static int g_498 = 0x4B5F37C1L;
static char *g_528 = (void*)0;
static int *g_530 = &g_70;
static const struct S1 *g_549 = &g_180;
static const struct S1 **g_548 = &g_549;
static int *g_592 = &g_80;
static struct S1 g_637 = {1034,6,13,1556,-0};
static unsigned char g_702 = 1UL;
static int *g_708 = &g_498;
static int **g_707 = &g_708;
static short g_757[7][1][10] = {{{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}, {{0xC538L, 9L, (-1L), (-1L), 9L, 0xC538L, 9L, (-1L), (-1L), 9L}}};
static char ****g_765 = (void*)0;
static char *****g_764[4][3] = {{&g_765, &g_765, &g_765}, {&g_765, &g_765, &g_765}, {&g_765, &g_765, &g_765}, {&g_765, &g_765, &g_765}};
static struct S0 g_789 = {22652,4849,-228,0x07361EB7L};
static struct S0 * const g_788 = &g_789;
static struct S0 * const *g_787 = &g_788;
static struct S0 * const **g_786[6][5][6] = {{{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}, {{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}, {{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}, {{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}, {{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}, {{(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}, {(void*)0, &g_787, &g_787, &g_787, &g_787, &g_787}}};
static char g_796[3][2] = {{(-6L), (-2L)}, {(-6L), (-2L)}, {(-6L), (-2L)}};
static int g_881 = 0x8CB01A2FL;
static short **g_954 = &g_20[0];
static short *g_957 = (void*)0;
static short **g_956 = &g_957;
static short g_1031[6] = {0x17E4L, 0x17E4L, 0L, 0x17E4L, 0x17E4L, 0L};



static const short func_1(void);
static int func_2(short p_3, unsigned char p_4, unsigned short p_5, unsigned p_6, unsigned p_7);
static short * func_17(short * p_18, short ** p_19);
static char func_22(int p_23);
static unsigned char func_24(char p_25, short ** p_26, short ** p_27, struct S0 p_28, short ** p_29);
static short ** func_32(short * p_33);
static short * func_34(char * const p_35, struct S0 p_36);
static char * func_49(unsigned p_50, unsigned char p_51, unsigned short p_52);
static unsigned short func_55(short * p_56, int p_57, char * p_58, struct S0 p_59);
static int func_60(char ** const p_61, short * p_62);
static const short func_1(void)
{
    int l_8 = (-1L);
    short *l_9 = &g_10;
    short *l_14 = &g_15;
    short **l_13[1];
    short *l_1026 = &g_236;
    unsigned short l_1029 = 65533UL;
    struct S0 l_1030 = {2232,348,610,7UL};
    char l_1032[6];
    const struct S0 **l_1068 = (void*)0;
    short l_1106[10][9][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_13[i] = &l_14;
    for (i = 0; i < 6; i++)
        l_1032[i] = 0L;
    if (func_2(((*l_9) &= l_8), (safe_mul_func_int16_t_s_s(((g_16 = l_9) == (l_1026 = ((*g_954) = ((*g_956) = func_17((g_20[3] = (void*)0), g_21))))), (func_24((safe_lshift_func_uint8_t_u_s(l_1029, 5)), g_21, &l_14, l_1030, g_21) < l_1029))), l_1030.f3, g_1031[5], l_1032[0]))
    {
        unsigned short l_1049 = 0xCC5BL;
        const int l_1054 = 0xB7267311L;
        struct S0 **l_1067 = (void*)0;
        g_881 &= ((+l_1049) | (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((0x4205AA1BL == func_2((+l_1054), g_236, l_1032[0], (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((0x7F459D71L != (+l_1030.f0)), 0xBD02E2AAL)), 5)), ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((l_1067 == l_1068) != 0xFCL) & l_1032[0]), 0x90AAL)), 2L)) ^ 8L))), 9UL)), l_1054)), l_1054)), (-9L))));
        return l_1029;
    }
    else
    {
        const short l_1098 = 0xC921L;
        unsigned short l_1100 = 8UL;
        for (g_235 = 5; (g_235 <= 10); ++g_235)
        {
            int **l_1074 = (void*)0;
            short *l_1093 = (void*)0;
            unsigned char l_1102[1][2][2];
            struct S0 *l_1107 = &g_789;
            struct S0 **l_1108 = &g_116[4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1102[i][j][k] = 7UL;
                }
            }
            for (g_41.f3 = 0; (g_41.f3 <= 1); g_41.f3 += 1)
            {
                struct S0 * const ***l_1073 = &g_786[5][0][5];
                int **l_1076 = &g_592;
                int ***l_1075 = &l_1076;
                int i, j;
                (*g_530) = (((safe_lshift_func_uint16_t_u_s((0x91CAL ^ func_22(g_266[(g_41.f3 + 4)])), g_266[(g_41.f3 + 6)])) ^ (((*l_1073) = &g_787) != (void*)0)) && ((g_150[(g_41.f3 + 1)][g_41.f3] == ((l_1074 != ((*l_1075) = (void*)0)) | (*g_16))) | 0xCC44L));
            }
            if (l_1030.f3)
            {
                int *l_1077 = &l_8;
                int **l_1078 = &g_592;
                (*l_1078) = l_1077;
            }
            else
            {
                char l_1094 = (-1L);
                int l_1095 = 0x5B2F236EL;
                for (l_8 = 0; (l_8 == 13); l_8 = safe_add_func_int8_t_s_s(l_8, 1))
                {
                    short l_1081 = 0xFCD3L;
                    int *l_1085 = &l_8;
                    char ** const l_1088[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    char **l_1090 = &g_528;
                    char ***l_1089[7][6] = {{&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}, {&l_1090, &l_1090, &l_1090, &l_1090, &l_1090, &l_1090}};
                    char ***l_1091 = (void*)0;
                    char ***l_1092 = &l_1090;
                    int l_1099 = 0x9AF3A0B1L;
                    int i, j;
                    g_97.f2 |= ((((((g_789.f2 ^= ((*g_530) = (l_1081 && (g_150[2][0] = (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u((l_1085 == (void*)0), (((((safe_rshift_func_uint8_t_u_u(g_150[2][0], (((*g_158) = func_60(((*l_1092) = l_1088[5]), l_1093)) ^ ((l_1095 = l_1094) != ((safe_add_func_int16_t_s_s(l_1030.f0, l_1098)) <= g_208))))) >= l_1099) != g_420[0]) & 0xB0A2L) & l_1100))))))))) && 4294967295UL) == g_637.f1) == (*l_1085)) <= 0xDEL) >= g_266[2]);
                    if (((*g_530) |= (safe_unary_minus_func_uint8_t_u(l_1102[0][1][1]))))
                    {
                        int **l_1103 = &g_592;
                        (*l_1103) = &g_70;
                        return (*g_16);
                    }
                    else
                    {
                        const struct S0 *l_1104 = &g_97;
                        const struct S0 **l_1105 = &l_1104;
                        (*l_1105) = l_1104;
                        return l_1030.f2;
                    }
                }
                (*g_530) |= l_1106[1][4][0];
            }
            (*g_530) = l_1030.f0;
            (*l_1108) = l_1107;
        }
    }
    return l_1030.f3;
}







static int func_2(short p_3, unsigned char p_4, unsigned short p_5, unsigned p_6, unsigned p_7)
{
    int *l_1033 = &g_80;
    int **l_1034[2];
    char ** const l_1042[7] = {&g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158};
    short *l_1043[7] = {&g_757[0][0][7], &g_757[0][0][7], &g_1031[5], &g_757[0][0][7], &g_757[0][0][7], &g_1031[5], &g_757[0][0][7]};
    short l_1048 = 0x2AB4L;
    int i;
    for (i = 0; i < 2; i++)
        l_1034[i] = &g_530;
    g_592 = l_1033;
    for (g_31 = 0; (g_31 <= 13); ++g_31)
    {
        if (p_7)
            break;
    }
    if (((*l_1033) ^= (*g_530)))
    {
        const struct S0 l_1039 = {10859,1529,-330,18446744073709551615UL};
        for (g_208 = 0; (g_208 == 16); g_208 = safe_add_func_int8_t_s_s(g_208, 6))
        {
            (**g_787) = l_1039;
        }
    }
    else
    {
        (*l_1033) = ((*g_530) = p_7);
        g_592 = (void*)0;
    }
    (*g_530) = ((safe_lshift_func_uint8_t_u_s(func_60(l_1042[1], l_1043[2]), ((*l_1033) = ((**g_157) = (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_4, 0xB1L)), g_72[1])))))) > (((*g_707) = l_1033) == l_1033));
    return l_1048;
}







static short * func_17(short * p_18, short ** p_19)
{
    char *l_30 = &g_31;
    char **l_37 = (void*)0;
    char *l_39 = (void*)0;
    char **l_38[1][1];
    char **l_40 = &l_39;
    short ***l_951 = &g_21;
    short **l_953 = (void*)0;
    short ***l_952 = &l_953;
    struct S0 l_955[7][10] = {{{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}, {{4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}, {4262,498,-1142,0xAFAB1DC3L}, {38262,99,1181,18446744073709551613UL}}};
    int *l_961 = (void*)0;
    unsigned char l_967 = 255UL;
    int l_968[7][7] = {{9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}, {9L, (-1L), (-1L), 9L, 0x3276BD0BL, 0xC7DBA349L, 9L}};
    char *****l_989 = &g_765;
    char *l_1020 = &g_796[2][0];
    const int **l_1025 = &g_67;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_38[i][j] = &l_39;
    }
    return p_18;
}







static char func_22(int p_23)
{
    short l_962[5];
    int i;
    for (i = 0; i < 5; i++)
        l_962[i] = (-1L);
    (*g_530) ^= l_962[1];
    (*g_530) |= 0xDEB74F8DL;
    p_23 = (((*g_530) = 0x994F9667L) == g_15);
    return l_962[4];
}







static unsigned char func_24(char p_25, short ** p_26, short ** p_27, struct S0 p_28, short ** p_29)
{
    int *l_958 = &g_881;
    l_958 = l_958;
    for (p_25 = 0; (p_25 == 28); ++p_25)
    {
        return g_180.f3;
    }
    (*g_530) = (-3L);
    return (*l_958);
}







static short ** func_32(short * p_33)
{
    unsigned short l_806 = 6UL;
    struct S0 **l_807 = &g_116[3];
    struct S0 ***l_812 = &l_807;
    struct S0 ****l_813 = &l_812;
    short *l_814 = &g_208;
    unsigned short *l_815 = &g_266[2];
    int l_829 = 0xB2B9C016L;
    char *l_851[7] = {&g_796[1][0], &g_796[1][0], &g_796[0][1], &g_796[1][0], &g_796[1][0], &g_796[0][1], &g_796[1][0]};
    unsigned l_892 = 2UL;
    const unsigned char *l_899[8][1][8];
    const unsigned char **l_898 = &l_899[5][0][0];
    int ** const * const l_915 = &g_707;
    struct S0 *l_936 = &g_789;
    int l_944 = 0L;
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
                l_899[i][j][k] = (void*)0;
        }
    }
    if (((safe_div_func_uint16_t_u_u(0x7D66L, (safe_add_func_int8_t_s_s(l_806, 0UL)))) == (g_68 > ((*g_158) && (((((*l_815) = (((l_807 == l_807) <= (safe_div_func_int16_t_s_s((((*l_814) = (safe_mod_func_int8_t_s_s((&g_787 != ((*l_813) = l_812)), l_806))) == l_806), 65535UL))) > g_41.f3)) && l_806) <= g_15) & 0L)))))
    {
        char ** const l_823 = (void*)0;
        int l_824 = 0x28F1CFE6L;
        struct S0 *l_830 = &g_41;
        for (l_806 = 0; (l_806 < 28); ++l_806)
        {
            int l_820 = 0xC283DF85L;
            unsigned char *l_833[6][6][7] = {{{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}, {{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}, {{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}, {{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}, {{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}, {{&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}, {&g_235, &g_702, &g_235, &g_702, &g_235, &g_702, &g_235}}};
            int i, j, k;
            for (g_235 = 0; (g_235 >= 21); g_235++)
            {
                (*g_592) |= ((*g_530) = l_820);
                (*g_592) ^= ((func_60(l_823, l_815) <= (l_824 < (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(3UL, 0)), 14)))) | g_110);
                l_829 |= (*g_530);
                g_116[5] = l_830;
            }
            (*g_592) = (safe_add_func_int16_t_s_s(l_824, ((l_829 = l_824) >= (safe_div_func_uint8_t_u_u(0xE0L, (l_820 | ((safe_mod_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((l_820 <= (safe_rshift_func_int8_t_s_s((0xDBL < (safe_lshift_func_int8_t_s_s((*g_158), l_824))), (5L & 2UL)))), (*g_530))) || 0xEBL), 0x62L)) == l_820)))))));
        }
    }
    else
    {
        int *l_846 = &g_80;
        char ** const l_854 = &l_851[1];
        char **l_856 = &l_851[2];
        char ***l_855 = &l_856;
        const int l_857 = 0x353DEC45L;
        struct S0 l_871 = {40243,5367,961,0x6F6AB504L};
        struct S1 **l_886 = &g_226;
        const unsigned char *l_896 = &g_702;
        const unsigned char **l_895 = &l_896;
        unsigned short ** const l_921 = &g_274;
        short *l_947[9] = {&g_208, &g_208, &g_757[0][0][0], &g_208, &g_208, &g_757[0][0][0], &g_208, &g_208, &g_757[0][0][0]};
        int i;
        l_846 = &l_829;
        if ((safe_add_func_int16_t_s_s(((0L | 0xA53EL) != (safe_add_func_int8_t_s_s((!(l_829 = (*l_846))), (((*l_815) &= ((void*)0 == l_851[1])) == l_806)))), (safe_rshift_func_int8_t_s_u(func_60(((*l_855) = l_854), l_815), l_857)))))
        {
            unsigned l_862 = 0x04C7BC6DL;
            char * const l_865 = &g_796[0][1];
            struct S0 *** const *l_866[2][10];
            struct S0 *** const **l_867 = &l_866[0][3];
            unsigned char *l_869 = (void*)0;
            unsigned char *l_870 = &g_702;
            unsigned l_872 = 0xB0788017L;
            int l_873 = 0L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 10; j++)
                    l_866[i][j] = &l_812;
            }
            (*g_530) = ((((*l_865) = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_862 == (safe_lshift_func_uint8_t_u_u(253UL, 3))), (*l_846))), g_80)) == l_872)) & 0x4DL) <= g_637.f4);
            l_873 &= ((*g_592) ^= l_829);
            (*g_530) = l_872;
            for (l_872 = 24; (l_872 < 2); --l_872)
            {
                if (l_829)
                    break;
            }
        }
        else
        {
            int **l_876 = &l_846;
            int * const **l_877 = (void*)0;
            int * const l_880 = &g_881;
            int * const *l_879 = &l_880;
            int * const **l_878 = &l_879;
            struct S1 **l_887 = (void*)0;
            struct S1 ***l_888 = &l_887;
            struct S0 l_889 = {43498,3722,322,0x755F02D1L};
            const unsigned char ***l_897 = &l_895;
            unsigned short * const *l_919 = (void*)0;
            (**l_876) = (l_876 == ((*l_878) = &g_592));
            (*l_846) = (safe_mod_func_int8_t_s_s(((((***l_855) = (safe_mul_func_int8_t_s_s(((l_806 > (*l_846)) > (((***l_878) = ((*g_530) = (safe_lshift_func_int8_t_s_s(l_892, 1)))) >= (safe_div_func_uint16_t_u_u(((*l_815) = (*l_846)), (**l_876))))), g_150[6][0]))) >= (*l_846)) <= 0x68L), 0x35L));
            l_898 = ((*l_897) = l_895);
            if ((*g_592))
            {
                int *l_905 = &l_829;
                struct S0 l_910 = {34199,4680,872,0x37A34BB6L};
                for (g_110 = (-19); (g_110 != 25); ++g_110)
                {
                    struct S0 l_904 = {42634,4768,-970,0x45BEC436L};
                    int *l_906[7][10][3] = {{{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}, {{&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}, {&g_70, &g_80, &g_80}}};
                    int i, j, k;
                    for (l_892 = 21; (l_892 >= 34); ++l_892)
                    {
                        char ** const l_907 = &g_528;
                        char ***l_908[6][2] = {{&l_856, &l_856}, {&l_856, &l_856}, {&l_856, &l_856}, {&l_856, &l_856}, {&l_856, &l_856}, {&l_856, &l_856}};
                        char ***l_909 = &l_856;
                        int i, j;
                        l_904 = ((**g_787) = l_904);
                        (*l_876) = (l_906[6][9][1] = l_905);
                        (*g_592) |= func_60(((*l_909) = l_907), p_33);
                    }
                    for (g_235 = 0; (g_235 <= 0); g_235 += 1)
                    {
                        struct S0 **l_911 = (void*)0;
                        struct S0 **l_912 = &g_116[2];
                        (**g_787) = l_910;
                        (*l_912) = (*g_787);
                        g_67 = &l_829;
                        (*l_912) = (void*)0;
                    }
                }
                if ((g_105 && 0xC7L))
                {
                    char l_930 = 1L;
                    (*l_846) |= (*g_592);
                    if ((((void*)0 == l_915) == ((*g_707) != (*g_707))))
                    {
                        unsigned short l_918 = 4UL;
                        unsigned short * const **l_920 = &l_919;
                        short *l_922 = (void*)0;
                        short *l_923 = (void*)0;
                        short *l_924 = (void*)0;
                        short *l_925 = &g_757[1][0][4];
                        const unsigned l_931 = 3UL;
                        (*l_846) = ((-4L) || ((((l_892 || (safe_div_func_uint16_t_u_u(l_918, (0x82273F85L | (((*l_925) = ((*l_814) &= (((*l_920) = l_919) == l_921))) & (*l_846)))))) == (safe_lshift_func_uint16_t_u_s(l_892, (((safe_add_func_int16_t_s_s(l_930, l_931)) & 0x10L) || l_930)))) & 9L) & l_918));
                        (**l_879) &= l_892;
                    }
                    else
                    {
                        (*l_905) = (*g_592);
                    }
                }
                else
                {
                    const struct S0 l_934[2] = {{41345,5918,-279,0x0274ABD1L}, {41345,5918,-279,0x0274ABD1L}};
                    struct S0 l_935[9] = {{17797,370,846,0xFB592374L}, {3717,6438,761,18446744073709551615UL}, {17797,370,846,0xFB592374L}, {3717,6438,761,18446744073709551615UL}, {17797,370,846,0xFB592374L}, {3717,6438,761,18446744073709551615UL}, {17797,370,846,0xFB592374L}, {3717,6438,761,18446744073709551615UL}, {17797,370,846,0xFB592374L}};
                    int i;
                    for (g_236 = 0; (g_236 != (-18)); g_236 = safe_sub_func_uint32_t_u_u(g_236, 3))
                    {
                        return &g_20[0];
                    }
                    (*l_876) = &l_829;
                    l_935[3] = l_934[1];
                    if ((*g_592))
                    {
                        (**l_812) = (void*)0;
                    }
                    else
                    {
                        struct S0 *l_937 = &g_97;
                        l_937 = (l_936 = ((***l_813) = &g_97));
                        l_910 = l_871;
                    }
                }
            }
            else
            {
                for (g_15 = 0; (g_15 > 17); g_15 = safe_add_func_uint16_t_u_u(g_15, 6))
                {
                    return &g_20[6];
                }
                for (g_235 = 0; (g_235 >= 15); g_235 = safe_add_func_int32_t_s_s(g_235, 3))
                {
                    for (l_892 = 14; (l_892 != 35); l_892 = safe_add_func_int16_t_s_s(l_892, 1))
                    {
                        (*l_936) = l_871;
                    }
                }
            }
        }
        if (l_892)
        {
            unsigned l_945 = 0xA02E2C24L;
            short **l_946[4] = {&l_814, &l_814, &l_814, &l_814};
            int i;
            l_944 ^= ((*g_592) = ((*g_530) |= (*l_846)));
            (*l_846) ^= (p_33 == (l_947[5] = p_33));
        }
        else
        {
            int **l_948 = (void*)0;
            int **l_949 = &g_592;
            int **l_950 = &l_846;
            (*g_530) = (*g_530);
            (*l_950) = ((*l_949) = &l_944);
        }
        (**l_812) = &l_871;
    }
    return &g_20[3];
}







static short * func_34(char * const p_35, struct S0 p_36)
{
    short l_48 = (-10L);
    char ** const l_63 = (void*)0;
    int l_305 = 1L;
    struct S0 l_800 = {21710,1571,95,0x9CB01665L};
    short *l_801 = (void*)0;
lbl_799:
    for (g_41.f3 = 0; (g_41.f3 > 27); g_41.f3 = safe_add_func_int16_t_s_s(g_41.f3, 2))
    {
        char *l_71[3][8] = {{&g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1]}, {&g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1]}, {&g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1], &g_72[1]}};
        short *l_797[4] = {&g_757[4][0][9], &g_757[2][0][0], &g_757[4][0][9], &g_757[2][0][0]};
        int i, j;
        for (p_36.f3 = 19; (p_36.f3 <= 53); p_36.f3 = safe_add_func_int16_t_s_s(p_36.f3, 9))
        {
            short *l_64 = &g_15;
            char **l_73 = &l_71[0][7];
            struct S0 l_74 = {12163,1375,142,0x77406462L};
            char *l_795 = &g_796[0][1];
            (*g_530) = ((l_48 <= p_36.f0) < (0UL < (((0x02L && (~(((*l_73) = func_49((safe_div_func_int8_t_s_s((func_55(&g_15, func_60(l_63, l_64), ((*l_73) = l_71[0][3]), l_74) >= 0L), p_36.f2)), l_305, p_36.f0)) != l_795))) >= l_305) | 0x5C54F079L)));
            if (g_41.f3)
                goto lbl_799;
        }
        if ((*g_592))
        {
            return l_797[0];
        }
        else
        {
            short *l_798 = &g_208;
            (*g_530) = 0x8F343674L;
            return l_798;
        }
    }
    for (g_471 = 0; g_471 < 3; g_471 += 1)
    {
        for (l_48 = 0; l_48 < 2; l_48 += 1)
        {
            g_796[g_471][l_48] = 0x85L;
        }
    }
    (**g_787) = l_800;
    return l_801;
}







static char * func_49(unsigned p_50, unsigned char p_51, unsigned short p_52)
{
    short *l_310 = &g_236;
    int l_312 = 0xAC820333L;
    char ** const l_337 = &g_158;
    short l_383[6][5][8] = {{{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}, {{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}, {{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}, {{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}, {{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}, {{0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}, {0xC985L, 0x5283L, 0xA1E6L, (-6L), 1L, (-10L), 0L, 0x47AEL}}};
    int l_388 = (-9L);
    unsigned short **l_435 = &g_274;
    unsigned short ***l_434 = &l_435;
    char *l_469 = &g_72[3];
    struct S0 l_470 = {44545,3189,1158,18446744073709551613UL};
    short *l_473 = &g_208;
    int *l_478 = &g_70;
    int **l_477 = &l_478;
    int ***l_476[1][9] = {{&l_477, &l_477, &l_477, &l_477, &l_477, &l_477, &l_477, &l_477, &l_477}};
    struct S0 l_575 = {14110,4801,1397,18446744073709551609UL};
    short **l_710 = &l_473;
    unsigned short l_711 = 65527UL;
    unsigned l_773 = 8UL;
    struct S0 * const *l_784 = &g_116[2];
    struct S0 * const **l_783 = &l_784;
    short l_793 = (-1L);
    unsigned *l_794 = &g_150[2][0];
    int i, j, k;
    if ((safe_add_func_uint32_t_u_u(g_72[1], (-6L))))
    {
        short l_311 = 0xFF4FL;
        const unsigned char l_328 = 0x3FL;
        unsigned short **l_347 = &g_274;
        unsigned char l_349 = 252UL;
        struct S0 l_358 = {37293,1685,-66,0UL};
        unsigned char l_361 = 4UL;
        char ** const l_372[6] = {&g_158, &g_158, &g_158, &g_158, &g_158, &g_158};
        char ***l_427 = (void*)0;
        int *l_450 = &l_312;
        int **l_449 = &l_450;
        struct S0 l_499[6] = {{44339,7217,-1157,18446744073709551614UL}, {44339,7217,-1157,18446744073709551614UL}, {42449,5953,-394,18446744073709551610UL}, {44339,7217,-1157,18446744073709551614UL}, {44339,7217,-1157,18446744073709551614UL}, {42449,5953,-394,18446744073709551610UL}};
        int i;
        for (g_105 = 17; (g_105 >= 60); g_105++)
        {
            unsigned l_318 = 0x9FC8DA34L;
            struct S0 l_357 = {8264,6370,-1306,0UL};
            short *l_367 = &g_236;
            int *l_406 = &l_312;
            char ** const l_440[10][8][3] = {{{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158}}};
            int l_458 = (-10L);
            int i, j, k;
            l_312 = (func_60(&g_158, l_310) >= (p_50 >= l_311));
            for (g_208 = 0; (g_208 > (-1)); --g_208)
            {
                int l_336 = 2L;
                struct S0 l_359 = {40162,7251,1254,9UL};
                int *l_360[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_360[i] = &l_336;
                for (g_176 = 0; (g_176 != 13); g_176++)
                {
                    int *l_317[5] = {&g_80, &l_312, &g_80, &l_312, &g_80};
                    int i;
                    l_318 = p_51;
                    for (g_97.f3 = 0; (g_97.f3 <= 4); g_97.f3 += 1)
                    {
                        int **l_319 = &l_317[4];
                        int i;
                        (*l_319) = &g_80;
                        if (g_72[g_97.f3])
                            break;
                    }
                }
                for (g_176 = 19; (g_176 < 54); g_176 = safe_add_func_int8_t_s_s(g_176, 6))
                {
                    int *l_329 = &g_80;
                    struct S0 l_354 = {6629,1061,1156,5UL};
                    struct S0 *l_355 = &g_97;
                    struct S0 *l_356[6][2][1] = {{{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}};
                    int i, j, k;
                    if (((*l_329) = (~(p_51 | (0x48L <= (0L || ((safe_div_func_uint16_t_u_u((l_328 >= g_68), l_311)) == p_52)))))))
                    {
                        short *l_338 = &g_208;
                        (*l_329) = (safe_lshift_func_int16_t_s_s((((l_312 = (safe_mul_func_uint16_t_u_u((*l_329), ((l_336 > func_60(l_337, l_338)) != (p_52 >= ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_51, 2)), ((safe_add_func_uint32_t_u_u(l_311, ((safe_sub_func_uint32_t_u_u(l_336, (-8L))) > p_52))) & l_311))) == p_51)))))) ^ 0xE245ABC7L) == l_318), p_51));
                    }
                    else
                    {
                        unsigned short ***l_348 = &l_347;
                        if (p_51)
                            break;
                        (*l_329) &= g_105;
                        if (p_50)
                            break;
                        (*l_329) ^= (&g_274 != ((*l_348) = l_347));
                    }
                    if (((*l_329) ^= l_349))
                    {
                        struct S0 l_350 = {19325,2737,-378,0x636F438BL};
                        struct S0 *l_351 = &g_97;
                        int **l_352 = (void*)0;
                        int **l_353 = &l_329;
                        (*l_329) = 0xB92B22A9L;
                        (*l_351) = l_350;
                        (*l_353) = l_329;
                    }
                    else
                    {
                        if (p_51)
                            break;
                    }
                    if (l_336)
                        continue;
                    l_357 = ((*l_355) = l_354);
                }
                l_359 = l_358;
                g_70 ^= (1L ^ (**g_157));
            }
            if (l_361)
            {
                char ** const l_366 = &g_158;
                int *l_368 = &l_312;
                (*l_368) ^= (safe_mul_func_uint8_t_u_u((l_357.f0 >= (safe_mul_func_int16_t_s_s((func_60(l_366, l_367) ^ g_97.f2), (-1L)))), 0x86L));
                (*l_368) |= g_72[2];
            }
            else
            {
                unsigned *l_371 = &g_176;
                short *l_389 = &l_383[1][3][1];
                int l_394 = 0x6FE032A6L;
                int **l_401 = (void*)0;
                int *l_403 = &l_394;
                int **l_402 = &l_403;
                int *l_405 = &l_394;
                int **l_404[2][3] = {{&l_405, &l_405, &l_405}, {&l_405, &l_405, &l_405}};
                char ****l_428 = &l_427;
                int *l_442[7][5] = {{&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}, {&l_394, (void*)0, (void*)0, &l_312, (void*)0}};
                char ** const l_448 = &g_158;
                int i, j;
                if (((safe_mod_func_uint32_t_u_u(((*l_371) = l_357.f2), l_357.f3)) || g_70))
                {
                    char **l_374 = &g_158;
                    char ***l_373[5] = {(void*)0, &l_374, (void*)0, &l_374, (void*)0};
                    char ***l_375 = &l_374;
                    int *l_379[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_379[i] = &l_312;
                    if (func_60(((*l_375) = l_372[5]), &g_236))
                    {
                        int **l_376 = (void*)0;
                        int *l_378 = &g_80;
                        int **l_377[8];
                        struct S0 *l_380 = &l_358;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_377[i] = &l_378;
                        l_379[0] = (void*)0;
                        (*l_380) = l_358;
                        (*l_378) &= (safe_add_func_uint8_t_u_u(l_312, (l_357.f2 = ((0x4F01L && l_383[3][0][2]) == (safe_div_func_uint16_t_u_u((~(((void*)0 != &l_378) < (safe_lshift_func_uint8_t_u_s(p_50, ((*g_158) &= 0L))))), ((l_388 = ((func_60(&g_158, &l_311) || l_357.f0) | g_208)) && l_383[3][0][2])))))));
                    }
                    else
                    {
                        return (*g_157);
                    }
                }
                else
                {
                    int *l_395[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_395[i][j] = &g_70;
                    }
                    g_97.f2 = ((p_52 || ((*g_158) != func_60(&g_158, l_389))) && (l_383[3][0][2] >= (safe_div_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(l_357.f0, func_60(&g_158, &l_311))) > l_394) ^ g_236), p_52))));
                    for (l_349 = 0; (l_349 <= 8); l_349 += 1)
                    {
                        char ***l_396 = (void*)0;
                        char **l_398 = &g_158;
                        char ***l_397 = &l_398;
                        short **l_399 = &l_367;
                        int l_400 = 0x464ABD41L;
                        l_400 |= func_60(((*l_397) = &g_158), ((*l_399) = l_389));
                        l_394 = 9L;
                    }
                }
                l_406 = ((*l_402) = &g_80);
                for (p_51 = 0; (p_51 <= 4); p_51 += 1)
                {
                    short l_417 = 0L;
                    char ** const l_418 = &g_158;
                    int l_419 = 0x8867E31AL;
                }
                if ((safe_add_func_uint16_t_u_u(func_60(l_337, &l_383[3][0][2]), (safe_add_func_uint32_t_u_u((0x66EAL >= (((((*l_371) = (safe_sub_func_int32_t_s_s(l_383[4][1][7], (&g_157 != ((*l_428) = l_427))))) != p_52) < ((safe_lshift_func_int8_t_s_u((*g_158), 4)) >= p_51)) || 0xEDF1L)), p_51)))))
                {
                    unsigned short ** const **l_433 = &g_431;
                    int l_441 = 5L;
                    int **l_451 = &l_406;
                    int ***l_457 = &l_401;
                    if ((((*l_433) = g_431) != l_434))
                    {
                        int l_447 = 4L;
                        unsigned short *l_452[7];
                        int l_453 = 0L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_452[i] = (void*)0;
                        (*l_405) = (safe_div_func_int8_t_s_s((-1L), (safe_mul_func_uint8_t_u_u(0xD4L, (func_60(l_440[5][0][0], &g_15) | ((**l_402) |= l_441))))));
                        l_442[3][4] = (void*)0;
                        (*l_402) = &l_441;
                        (*l_405) ^= ((l_453 = ((l_312 = (p_52 = (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u(l_447, 10)) == p_50) ^ (func_60(l_448, &g_236) > ((**l_402) = (((l_449 != l_451) < ((**l_337) = p_50)) < p_51)))), 1)))) || l_383[0][2][6])) != g_80);
                    }
                    else
                    {
                        unsigned short *l_456 = &g_266[5];
                        g_70 |= (safe_mul_func_uint16_t_u_u(((*l_456) = (*l_406)), (l_312 = (**l_451))));
                    }
                    (*l_457) = &l_450;
                }
                else
                {
                    (**l_449) &= 0xAC656B8BL;
                    if (func_60(l_440[3][1][0], l_367))
                    {
                        if (l_458)
                            break;
                        g_67 = (void*)0;
                    }
                    else
                    {
                        (*l_450) = (((p_52 | (*l_406)) == (p_50 = g_180.f1)) & (safe_mul_func_int8_t_s_s((g_180.f4 ^ (*l_450)), (safe_div_func_uint8_t_u_u(0x83L, g_41.f2)))));
                        (*l_450) = (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0L, g_72[1])), (*l_406)));
                        (**l_449) ^= (safe_mul_func_int16_t_s_s(((*l_389) = (-5L)), p_50));
                    }
                }
            }
            (*l_449) = &g_80;
        }
        g_471 &= func_55(&l_383[1][4][6], g_180.f0, l_469, l_470);
        for (l_312 = 1; (l_312 >= 0); l_312 -= 1)
        {
            char ** const l_472 = &l_469;
            int *l_475 = &l_312;
            struct S0 l_495 = {20336,2679,1047,0x055A19FAL};
            short *l_515 = (void*)0;
            if (func_60(l_472, l_473))
            {
                int *l_474 = (void*)0;
                for (g_235 = 0; (g_235 <= 0); g_235 += 1)
                {
                    (*l_449) = l_474;
                }
                (*l_449) = l_475;
                for (g_70 = 0; g_70 < 8; g_70 += 1)
                {
                    g_116[g_70] = &g_97;
                }
            }
            else
            {
                return (*g_157);
            }
            for (l_388 = 0; (l_388 <= 0); l_388 += 1)
            {
                char * const l_483 = (void*)0;
                int l_494 = (-10L);
                char ** const l_504 = &g_158;
                short *l_510 = &g_208;
                for (l_311 = 1; (l_311 >= 0); l_311 -= 1)
                {
                    struct S0 l_507 = {2959,4084,382,1UL};
                    int i;
                }
                if (g_41.f3)
                    continue;
            }
            return (*g_157);
        }
        l_449 = &l_450;
    }
    else
    {
        struct S0 *l_519 = &g_41;
        struct S0 **l_520 = (void*)0;
        struct S0 **l_521[10][8][3] = {{{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}, {{&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}, {&g_116[2], &l_519, &g_116[0]}}};
        char **l_523 = &l_469;
        char ***l_522 = &l_523;
        short *l_524 = (void*)0;
        int l_525[2][7][2] = {{{0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}}, {{0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}, {0x8833E481L, 0L}}};
        int *l_526[5][1] = {{&g_498}, {&g_498}, {&g_498}, {&g_498}, {&g_498}};
        char **l_527[8][4] = {{&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}, {&l_469, &l_469, &g_158, &g_158}};
        int l_529 = 0x3446A833L;
        const struct S1 **l_547 = (void*)0;
        const struct S1 **l_551[4][4][2] = {{{&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}}, {{&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}}, {{&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}}, {{&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}, {&g_549, &g_549}}};
        int l_628[4][3] = {{0x7136ABF2L, 0x7136ABF2L, 0x15EC6780L}, {0x7136ABF2L, 0x7136ABF2L, 0x15EC6780L}, {0x7136ABF2L, 0x7136ABF2L, 0x15EC6780L}, {0x7136ABF2L, 0x7136ABF2L, 0x15EC6780L}};
        int i, j, k;
        g_116[4] = l_519;
        g_180.f4 = ((**g_157) > func_60(((*l_522) = &g_158), &l_383[3][0][2]));
    }
    return (*l_337);
}







static unsigned short func_55(short * p_56, int p_57, char * p_58, struct S0 p_59)
{
    int l_78[8];
    int *l_81[9] = {&g_70, (void*)0, &g_70, (void*)0, &g_70, (void*)0, &g_70, (void*)0, &g_70};
    unsigned short l_121 = 65533UL;
    char l_124 = (-1L);
    unsigned l_146[3][7][7] = {{{0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}}, {{0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}}, {{0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}, {0x3C1A26C4L, 0x249FC326L, 0xFAC0F5FCL, 0x03F3C918L, 0xD4EC5B3EL, 1UL, 0xD4EC5B3EL}}};
    unsigned l_152 = 0xDDED7392L;
    unsigned l_162 = 4294967295UL;
    char ** const l_198 = (void*)0;
    short *l_200 = (void*)0;
    struct S0 l_249 = {40079,1011,-930,6UL};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_78[i] = 1L;
lbl_218:
    for (g_70 = 4; (g_70 >= 0); g_70 -= 1)
    {
        int *l_82[3];
        const int *l_125 = &g_80;
        const int *l_126[4][10][6] = {{{&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}}, {{&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}}, {{&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}}, {{&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}, {&g_70, &g_68, &g_70, &g_70, &g_68, &g_70}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_82[i] = (void*)0;
        for (p_57 = 4; (p_57 >= 0); p_57 -= 1)
        {
            const int **l_77[6];
            int l_120 = (-1L);
            struct S0 l_122 = {33557,3768,738,18446744073709551611UL};
            struct S0 l_128[8] = {{17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}, {17538,1448,-1201,0x1D23F08BL}};
            const unsigned l_141 = 0UL;
            int i;
            for (i = 0; i < 6; i++)
                l_77[i] = (void*)0;
            for (g_15 = 4; (g_15 >= 0); g_15 -= 1)
            {
                const int **l_75 = &g_67;
                (*l_75) = &g_68;
                for (p_59.f3 = 1; (p_59.f3 <= 4); p_59.f3 += 1)
                {
                    int i;
                    if (g_72[g_70])
                    {
                        const int ***l_76[6] = {&l_75, &l_75, &l_75, &l_75, &l_75, &l_75};
                        int *l_79 = &g_80;
                        int i;
                        l_77[3] = &g_67;
                        (*l_79) ^= l_78[3];
                        l_82[2] = l_81[2];
                    }
                    else
                    {
                        int **l_83 = &l_81[2];
                        (*l_75) = ((*l_83) = &g_70);
                        g_80 = (*g_67);
                    }
                    (*l_75) = l_81[5];
                    p_59.f2 |= (safe_rshift_func_uint8_t_u_s((p_57 == ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_57, (g_72[1] || (*p_56)))), (g_15 && (*p_58)))) > g_80)), 5));
                }
            }
            for (g_15 = 0; (g_15 <= 4); g_15 += 1)
            {
                unsigned char l_90 = 1UL;
                char l_94[6] = {0L, 0L, 5L, 0L, 0L, 5L};
                int i;
                if (l_90)
                {
                    unsigned l_91 = 0UL;
                    unsigned char *l_92 = (void*)0;
                    unsigned char *l_93 = &l_90;
                    char *l_102[6][7] = {{&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}, {&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}, {&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}, {&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}, {&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}, {&g_72[3], &g_72[1], &l_94[0], &g_72[1], &g_72[3], &g_72[1], &l_94[0]}};
                    char **l_101 = &l_102[5][5];
                    char **l_112 = &l_102[5][5];
                    int i, j;
                    if ((p_59.f2 = (l_94[0] |= (0xC9L < ((*l_93) = (l_91 |= 0xB6L))))))
                    {
                        return g_68;
                    }
                    else
                    {
                        unsigned l_95 = 4294967295UL;
                        struct S0 *l_96 = &g_97;
                        char *l_100 = (void*)0;
                        char **l_99 = &l_100;
                        char ***l_98[8][9] = {{&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99, &l_99}};
                        int i, j;
                        l_95 = 0L;
                        g_41.f2 = p_59.f2;
                        (*l_96) = g_41;
                        l_101 = &p_58;
                    }
                    if ((l_91 > (((*p_56) ^ (*p_56)) < (safe_add_func_int8_t_s_s((3UL && g_105), 0x19L)))))
                    {
                        char ***l_111[8];
                        int l_113 = (-3L);
                        int i;
                        for (i = 0; i < 8; i++)
                            l_111[i] = &l_101;
                        g_80 |= (safe_mod_func_uint16_t_u_u(g_72[3], l_91));
                        l_113 &= ((safe_mod_func_int8_t_s_s(g_97.f1, (g_110 = g_97.f2))) | ((l_112 = &l_102[5][6]) != (void*)0));
                    }
                    else
                    {
                        struct S0 *l_115 = &g_97;
                        struct S0 **l_114[1][5][5] = {{{&l_115, &l_115, &l_115, &l_115, &l_115}, {&l_115, &l_115, &l_115, &l_115, &l_115}, {&l_115, &l_115, &l_115, &l_115, &l_115}, {&l_115, &l_115, &l_115, &l_115, &l_115}, {&l_115, &l_115, &l_115, &l_115, &l_115}}};
                        int i, j, k;
                        g_116[2] = &p_59;
                        if (l_94[1])
                            break;
                    }
                    g_41.f2 = p_59.f3;
                    if (l_91)
                        break;
                }
                else
                {
                    struct S0 l_118 = {43762,1103,895,0UL};
                    for (g_80 = 4; (g_80 >= 1); g_80 -= 1)
                    {
                        struct S0 *l_117 = &g_97;
                        (*l_117) = p_59;
                        g_67 = (void*)0;
                    }
                    for (g_105 = 0; (g_105 <= 4); g_105 += 1)
                    {
                        struct S0 *l_119 = &l_118;
                        l_82[2] = l_81[2];
                        (*l_119) = l_118;
                        if (p_59.f1)
                            break;
                        g_67 = &g_80;
                    }
                    for (g_110 = 1; (g_110 <= 4); g_110 += 1)
                    {
                        if (l_118.f2)
                            break;
                    }
                    for (g_110 = 1; (g_110 <= 7); g_110 += 1)
                    {
                        g_80 ^= 0x222B01ECL;
                    }
                }
                l_120 ^= (p_59.f0 | (g_72[1] < g_70));
                l_121 |= ((p_59.f2 && g_97.f1) > g_97.f1);
            }
            for (p_59.f3 = 1; (p_59.f3 <= 4); p_59.f3 += 1)
            {
                struct S0 *l_123 = &l_122;
                int i;
                (*l_123) = l_122;
                return l_124;
            }
            for (g_15 = 4; (g_15 >= 1); g_15 -= 1)
            {
                unsigned char l_135 = 0xEDL;
                const char *l_138 = &l_124;
                int l_144 = 0xEB38440BL;
                short l_151 = (-6L);
                for (g_105 = 0; (g_105 <= 5); g_105 += 1)
                {
                    int i;
                    if (l_78[g_70])
                    {
                        int i;
                        l_125 = (g_67 = l_81[(p_57 + 4)]);
                        if (l_78[(g_105 + 1)])
                            break;
                    }
                    else
                    {
                        g_67 = l_126[3][9][1];
                    }
                    return p_59.f1;
                }
                if (p_59.f1)
                {
                    short l_127 = 0xD31DL;
                    char *l_130 = (void*)0;
                    char **l_129 = &l_130;
                    if ((g_41.f2 = p_59.f3))
                    {
                        g_97.f2 |= l_127;
                        if (p_59.f2)
                            continue;
                        p_59 = l_128[6];
                    }
                    else
                    {
                        l_129 = &p_58;
                        p_59.f2 = ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x1DE4L, l_135)), (safe_mod_func_uint32_t_u_u(g_105, 1L)))) || (l_138 == (void*)0));
                        l_144 = ((safe_sub_func_int16_t_s_s(l_141, g_41.f2)) ^ (safe_lshift_func_uint16_t_u_u(g_80, p_59.f1)));
                    }
                    if (p_59.f1)
                        continue;
                    for (l_122.f3 = 0; (l_122.f3 <= 4); l_122.f3 += 1)
                    {
                        l_144 |= p_59.f2;
                    }
                }
                else
                {
                    const unsigned l_145 = 0x5DE67BC5L;
                    unsigned *l_149[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_149[i] = &g_150[2][0];
                    g_80 |= (l_145 <= l_146[1][2][1]);
                    if ((p_59.f2 = (safe_sub_func_uint32_t_u_u(p_57, (l_144 &= p_59.f3)))))
                    {
                        p_59.f2 = p_57;
                    }
                    else
                    {
                        g_67 = &g_70;
                        p_59.f2 &= p_57;
                        g_97.f2 ^= p_59.f2;
                        if (p_57)
                            continue;
                    }
                    l_128[6].f2 = g_97.f0;
                    for (l_122.f3 = 1; (l_122.f3 <= 4); l_122.f3 += 1)
                    {
                        int i;
                        g_97.f2 ^= g_72[g_15];
                        p_59.f2 ^= (g_72[g_15] ^ g_72[g_15]);
                    }
                }
                return l_151;
            }
        }
        l_152 ^= p_57;
    }
    for (l_124 = 0; (l_124 >= 24); ++l_124)
    {
        unsigned l_159 = 18446744073709551615UL;
        unsigned short *l_160[6][10] = {{&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}, {&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}, {&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}, {&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}, {&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}, {&g_105, (void*)0, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, &l_121, (void*)0}};
        int l_161[8][7] = {{(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}, {(-1L), 1L, 5L, 1L, (-1L), 0x6B272A17L, 5L}};
        struct S0 *l_163 = &g_41;
        int *l_168 = &l_161[2][3];
        short *l_263 = &g_208;
        struct S0 **l_304 = &l_163;
        int i, j;
        g_80 |= (g_150[2][0] < (safe_mul_func_int16_t_s_s(func_60(g_157, p_56), (l_161[2][3] = l_159))));
        p_59.f2 |= l_161[0][5];
        if ((~l_162))
        {
            g_41.f2 ^= ((void*)0 != l_163);
        }
        else
        {
            int *l_172[6] = {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70};
            struct S1 *l_179 = &g_180;
            char ** const l_185 = &g_158;
            short **l_199 = (void*)0;
            short l_214 = 0xD435L;
            unsigned l_227 = 0xA7469F82L;
            int l_239 = 0x9A345722L;
            int **l_261 = (void*)0;
            unsigned char *l_262[3][2];
            const int l_268 = 0xF94F6C1AL;
            unsigned l_287 = 0xDA33E1B8L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_262[i][j] = (void*)0;
            }
            for (l_159 = 15; (l_159 >= 41); l_159 = safe_add_func_uint16_t_u_u(l_159, 2))
            {
                char l_171 = 0x50L;
                for (g_15 = 0; (g_15 >= 8); g_15++)
                {
                    l_168 = l_81[2];
                    for (p_59.f3 = 0; (p_59.f3 <= 4); ++p_59.f3)
                    {
                        int **l_173 = &l_172[0];
                        int **l_174 = (void*)0;
                        int **l_175[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_175[i] = (void*)0;
                        if (g_80)
                            break;
                        if (l_171)
                            continue;
                        l_168 = ((*l_173) = l_172[4]);
                        (*l_173) = &l_161[2][3];
                    }
                }
                if (g_97.f3)
                    break;
                g_176 ^= 0xBD5445E5L;
                for (g_176 = 0; (g_176 == 12); g_176++)
                {
                    g_80 ^= p_57;
                }
            }
            if ((g_41.f2 &= g_41.f3))
            {
                struct S1 **l_181 = &l_179;
                char l_182[6] = {3L, 0xFBL, 3L, 0xFBL, 3L, 0xFBL};
                int i;
                (*l_181) = l_179;
                if (l_182[1])
                {
                    g_97.f2 &= (p_59.f2 = ((safe_div_func_int8_t_s_s((-9L), func_60(l_185, p_56))) && g_80));
                }
                else
                {
                    struct S0 **l_187 = &g_116[2];
                    struct S0 ***l_186 = &l_187;
                    int l_194 = 0xAE73F2C4L;
                    (*l_186) = &l_163;
                    l_161[6][3] = (safe_div_func_uint8_t_u_u(func_60(l_185, p_56), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_59.f1, (*p_56))), (**g_157)))));
                    p_59.f2 = (l_194 == 1UL);
                    p_59.f2 |= l_194;
                }
            }
            else
            {
                int **l_195 = &l_81[4];
                if (p_59.f1)
                    break;
                if (g_41.f1)
                    continue;
                (*l_195) = l_81[7];
            }
            if ((safe_mul_func_uint16_t_u_u((+func_60(l_198, (l_200 = p_56))), 8L)))
            {
                unsigned l_211 = 4294967289UL;
                int l_224 = 0x55769E90L;
                for (g_97.f3 = 16; (g_97.f3 < 41); g_97.f3 = safe_add_func_uint32_t_u_u(g_97.f3, 1))
                {
                    short *l_207 = &g_208;
                    if (g_180.f2)
                        break;
                    p_59.f2 = (safe_lshift_func_uint8_t_u_s((0x6868L >= (((*l_200) = (safe_mod_func_int16_t_s_s(((*l_207) ^= (*p_56)), (*p_56)))) != ((safe_lshift_func_uint8_t_u_u((g_150[5][1] != g_41.f1), ((p_59.f0 != (l_211 != (safe_mod_func_uint32_t_u_u(g_176, 0x72C5E541L)))) || l_214))) | 255UL))), (**g_157)));
                    for (l_159 = 0; (l_159 == 24); ++l_159)
                    {
                        char ** const l_217[2][10][6] = {{{(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}}, {{(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}, {(void*)0, &g_158, &g_158, (void*)0, &g_158, &g_158}}};
                        int i, j, k;
                        if (p_59.f1)
                            break;
                        p_59.f2 &= func_60(l_217[1][6][3], l_200);
                        if (g_41.f1)
                            goto lbl_218;
                    }
                    for (g_70 = 0; (g_70 <= 8); g_70 += 1)
                    {
                        struct S0 **l_223[1][2][8] = {{{&g_116[2], &g_116[4], (void*)0, &g_116[4], &g_116[2], &l_163, &g_116[2], &g_116[4]}, {&g_116[2], &g_116[4], (void*)0, &g_116[4], &g_116[2], &l_163, &g_116[2], &g_116[4]}}};
                        int i, j, k;
                        g_180.f4 ^= ((((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(((g_41.f2 |= (p_59.f0 & 0L)) || ((l_224 = (g_105 >= ((g_116[1] = &p_59) == &g_41))) & p_57)), ((*l_207) &= 0xDC58L))) != (g_225 == &g_226)) < g_180.f0), p_59.f1)) < p_57) > g_97.f2) <= l_227);
                        l_224 = 1L;
                    }
                }
                for (g_70 = 0; (g_70 != (-14)); --g_70)
                {
                    short l_230 = 1L;
                    short *l_233 = &g_208;
                    unsigned char *l_234[8] = {&g_235, (void*)0, &g_235, (void*)0, &g_235, (void*)0, &g_235, (void*)0};
                    int i;
                    g_236 ^= (l_230 != ((safe_mul_func_uint16_t_u_u(p_59.f2, ((*l_233) = ((*p_56) &= 0L)))) > (g_235 ^= (p_59.f0 != 0L))));
                    p_59.f2 ^= l_161[2][3];
                }
                for (g_15 = (-5); (g_15 <= 12); g_15 = safe_add_func_uint32_t_u_u(g_15, 2))
                {
                    unsigned char l_240 = 0x87L;
                    char **l_244 = (void*)0;
                    char ***l_243 = &l_244;
                    l_240 ^= l_239;
                    for (g_236 = 0; (g_236 == 19); g_236 = safe_add_func_int32_t_s_s(g_236, 3))
                    {
                        return p_59.f1;
                    }
                    if (l_240)
                        continue;
                    p_59.f2 = (((g_80 = ((g_105 = (l_243 == (void*)0)) == (-7L))) && p_59.f2) <= ((*p_58) <= (safe_lshift_func_uint8_t_u_u(0x4DL, 2))));
                }
            }
            else
            {
                for (g_97.f3 = (-2); (g_97.f3 <= 23); g_97.f3++)
                {
                    struct S0 *l_250 = (void*)0;
                    struct S0 *l_251 = &l_249;
                    int *l_252 = &g_80;
                    int **l_253 = &l_81[4];
                    (*l_251) = l_249;
                    (*l_253) = l_252;
                    for (l_162 = 26; (l_162 < 41); l_162 = safe_add_func_int16_t_s_s(l_162, 3))
                    {
                        (*l_253) = l_81[0];
                    }
                    for (l_152 = 25; (l_152 < 2); l_152 = safe_sub_func_int32_t_s_s(l_152, 3))
                    {
                        struct S1 **l_258 = &g_226;
                        (*l_252) = ((void*)0 != l_258);
                        g_67 = l_81[2];
                        g_41.f2 = g_72[2];
                    }
                }
            }
            if ((p_59.f2 | ((safe_mod_func_uint8_t_u_u((g_235 ^= (l_172[3] == (l_81[1] = l_81[6]))), func_60(l_185, l_263))) > ((((g_72[1] < ((g_176 || (((g_266[2] = (safe_add_func_uint8_t_u_u(p_59.f2, (*g_158)))) > (*g_158)) >= 0x2DL)) && 1L)) && 0xC6CBC411L) & 0x4883L) | g_41.f2))))
            {
                char **l_267[4][9] = {{&g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158}, {&g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158}, {&g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158}, {&g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158, &g_158}};
                unsigned short *l_271 = &g_266[4];
                unsigned short *l_273 = &g_266[4];
                unsigned short **l_272[2];
                int *l_275 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_272[i] = &l_273;
                g_41.f2 |= p_59.f0;
                g_97.f2 |= g_176;
                if ((func_60((l_267[3][7] = &g_158), (l_263 = l_200)) == (4294967295UL & (l_268 && (safe_lshift_func_uint8_t_u_u(g_236, ((l_160[5][4] = l_271) != (g_274 = p_56))))))))
                {
                    int **l_276 = &l_172[4];
                    (*g_225) = l_179;
                    (*l_276) = l_275;
                    (*g_225) = (*g_225);
                    for (l_121 = 0; (l_121 <= 47); ++l_121)
                    {
                        return g_41.f1;
                    }
                }
                else
                {
                    short l_288[6] = {0x127FL, 0x127FL, (-1L), 0x127FL, 0x127FL, (-1L)};
                    int i;
                    for (l_162 = 27; (l_162 < 27); l_162 = safe_add_func_uint8_t_u_u(l_162, 1))
                    {
                        int l_286 = 0x6F19170EL;
                        if (p_57)
                            break;
                        p_59.f2 ^= (((safe_lshift_func_int8_t_s_u(0x13L, (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s(((*g_158) |= ((void*)0 != &g_80)), l_286)))))) & ((~p_59.f0) || l_287)) | p_59.f3);
                        l_288[5] |= p_59.f2;
                        g_97.f2 = g_80;
                    }
                    for (g_236 = 0; (g_236 < 15); g_236++)
                    {
                        int **l_291 = (void*)0;
                        int **l_292 = (void*)0;
                        p_59.f2 ^= func_60(&g_158, l_200);
                        l_81[0] = &g_70;
                        g_97.f2 = p_59.f2;
                        g_97.f2 = p_59.f3;
                    }
                    g_80 = g_15;
                }
            }
            else
            {
                struct S0 *l_300 = &g_97;
                int l_303[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_303[i] = 1L;
                for (l_214 = 9; (l_214 <= (-30)); l_214 = safe_sub_func_uint8_t_u_u(l_214, 1))
                {
                    char **l_296 = &g_158;
                    char ***l_295 = &l_296;
                    short *l_298 = (void*)0;
                    struct S0 *l_302 = &g_97;
                    if ((0UL & func_60(((*l_295) = &p_58), &g_15)))
                    {
                        short *l_297[5][2][4] = {{{(void*)0, (void*)0, (void*)0, &g_236}, {(void*)0, (void*)0, (void*)0, &g_236}}, {{(void*)0, (void*)0, (void*)0, &g_236}, {(void*)0, (void*)0, (void*)0, &g_236}}, {{(void*)0, (void*)0, (void*)0, &g_236}, {(void*)0, (void*)0, (void*)0, &g_236}}, {{(void*)0, (void*)0, (void*)0, &g_236}, {(void*)0, (void*)0, (void*)0, &g_236}}, {{(void*)0, (void*)0, (void*)0, &g_236}, {(void*)0, (void*)0, (void*)0, &g_236}}};
                        short **l_299 = &g_20[1];
                        struct S0 **l_301 = (void*)0;
                        int i, j, k;
                        g_97.f2 = func_60(&g_158, ((*l_299) = (l_298 = l_297[1][1][1])));
                        l_302 = l_300;
                    }
                    else
                    {
                        if (g_97.f0)
                            goto lbl_218;
                    }
                    if (g_70)
                        continue;
                    return l_303[0];
                }
                (*l_300) = l_249;
            }
        }
        (*l_304) = &p_59;
    }
    return p_59.f3;
}







static int func_60(char ** const p_61, short * p_62)
{
    const int *l_65 = (void*)0;
    const int **l_66[4][10][6] = {{{&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65, &l_65, &l_65, &l_65}}};
    int *l_69 = &g_70;
    int i, j, k;
    g_67 = l_65;
    (*l_69) = g_41.f3;
    return g_41.f1;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_180.f3, "g_180.f3", print_hash_value);
    transparent_crc(g_180.f4, "g_180.f4", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_266[i], "g_266[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_420[i], "g_420[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_637.f1, "g_637.f1", print_hash_value);
    transparent_crc(g_637.f2, "g_637.f2", print_hash_value);
    transparent_crc(g_637.f3, "g_637.f3", print_hash_value);
    transparent_crc(g_637.f4, "g_637.f4", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_757[i][j][k], "g_757[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_789.f0, "g_789.f0", print_hash_value);
    transparent_crc(g_789.f1, "g_789.f1", print_hash_value);
    transparent_crc(g_789.f2, "g_789.f2", print_hash_value);
    transparent_crc(g_789.f3, "g_789.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_796[i][j], "g_796[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_881, "g_881", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1031[i], "g_1031[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
