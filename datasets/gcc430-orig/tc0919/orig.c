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


union U0 {
   unsigned short f0;
};

union U1 {
   int f0;
   int f1;
   int f2;
   char * f3;
};

union U2 {
   char * f0;
   unsigned f1;
   int f2;
   char f3;
};

union U3 {
   unsigned f0;
};


static int g_3 = (-8L);
static int g_4 = (-4L);
static char g_14 = 0x18L;
static char *g_13 = &g_14;
static int *g_17 = &g_4;
static int **g_16[3][7] = {{&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}};
static union U1 g_35 = {8L};
static union U0 g_36 = {1UL};
static unsigned g_51 = 0xC74BF7A8L;
static int g_66 = 0x25B78C6AL;
static int g_68 = 1L;
static unsigned g_77 = 1UL;
static union U2 g_84[3] = {{0}, {0}, {0}};
static unsigned short g_90 = 0x2D49L;
static unsigned char g_100 = 252UL;
static union U1 g_111 = {0x485FC019L};
static union U1 *g_110[5][2][6] = {{{&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}, {&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}}, {{&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}, {&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}}, {{&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}, {&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}}, {{&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}, {&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}}, {{&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}, {&g_111, &g_111, &g_111, (void*)0, &g_111, &g_111}}};
static short g_123 = 0xECFDL;
static union U3 g_141[2][5][8] = {{{{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}}, {{{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}, {{0x404BF6FAL}, {0xFED1463EL}, {0x16E5E9EFL}, {0xE06A8B31L}, {4294967295UL}, {0x705F15DFL}, {0x67BC55C7L}, {5UL}}}};
static union U2 *g_148 = &g_84[1];
static union U3 *g_152 = &g_141[0][4][5];
static short g_165[5] = {0x45D7L, 0x45D7L, 0x45D7L, 0x45D7L, 0x45D7L};
static short *g_186[4][9] = {{&g_165[0], (void*)0, &g_165[2], &g_165[1], &g_165[1], &g_165[2], (void*)0, &g_165[0], &g_165[2]}, {&g_165[0], (void*)0, &g_165[2], &g_165[1], &g_165[1], &g_165[2], (void*)0, &g_165[0], &g_165[2]}, {&g_165[0], (void*)0, &g_165[2], &g_165[1], &g_165[1], &g_165[2], (void*)0, &g_165[0], &g_165[2]}, {&g_165[0], (void*)0, &g_165[2], &g_165[1], &g_165[1], &g_165[2], (void*)0, &g_165[0], &g_165[2]}};
static short **g_185 = &g_186[2][6];
static int **g_235 = &g_17;
static int ***g_234 = &g_235;
static int *g_280 = &g_66;
static union U1 **g_308 = &g_110[3][1][3];
static union U1 ***g_307 = &g_308;
static union U0 **g_340 = (void*)0;
static int g_344 = 0xAE10FFCFL;
static char g_447 = 0x78L;
static unsigned char g_471 = 0xC6L;
static int g_475[2][8][6] = {{{0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}}, {{0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}, {0x8FF4A706L, (-7L), 0L, (-5L), 0xB34C7463L, 0x37613B25L}}};
static unsigned g_491 = 0x473B25ECL;
static char g_500 = (-1L);
static unsigned g_506 = 0xFD1A9B3BL;
static int g_508 = (-4L);
static unsigned short g_531 = 0x0E84L;
static union U1 ****g_568[10][2] = {{&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}, {&g_307, &g_307}};
static union U1 *****g_567 = &g_568[1][0];
static unsigned g_576 = 0xBCD03DFAL;
static unsigned *g_575[6] = {&g_576, &g_576, &g_576, &g_576, &g_576, &g_576};
static int *g_671 = &g_111.f1;
static unsigned g_691[8] = {0x116900EAL, 0x8DD7C5C9L, 0x116900EAL, 0x8DD7C5C9L, 0x116900EAL, 0x8DD7C5C9L, 0x116900EAL, 0x8DD7C5C9L};
static int ***g_712 = (void*)0;
static unsigned g_723 = 0x8B5F9CB3L;
static unsigned g_905 = 0xD3DF07B2L;
static int *g_917 = (void*)0;
static int **g_916 = &g_917;
static int **g_920 = &g_917;
static int ****g_992[3][3] = {{&g_234, &g_234, &g_234}, {&g_234, &g_234, &g_234}, {&g_234, &g_234, &g_234}};
static short ***g_1000 = &g_185;
static short ****g_999 = &g_1000;
static unsigned g_1021[5][10][3] = {{{18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}}, {{18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}}, {{18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}}, {{18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}}, {{18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}, {18446744073709551615UL, 3UL, 0x532C6F5FL}}};
static short g_1082[7][10][3] = {{{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}, {{(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}, {(-1L), 0x91CBL, (-1L)}}};
static short g_1084[1] = {0x34BCL};
static union U0 g_1169 = {65534UL};
static int g_1229 = 6L;
static unsigned *g_1286 = &g_51;
static unsigned **g_1285 = &g_1286;



static union U2 func_1(void);
static int * func_6(union U1 p_7, int * p_8);
static union U1 func_9(int * p_10, char * p_11, union U1 p_12);
static int * func_21(int * p_22, unsigned char p_23);
static unsigned char func_24(char * p_25, int ** p_26, int ** p_27, union U2 p_28);
static char * func_29(union U1 p_30, union U0 p_31, unsigned short p_32, short p_33, int *** p_34);
static int * func_37(short p_38, short p_39);
static short func_52(char p_53, int *** p_54);
static int *** func_56(union U0 p_57, char p_58);
static union U1 func_69(int p_70, int p_71);
static union U2 func_1(void)
{
    union U0 l_2[1] = {{65534UL}};
    union U1 l_15 = {-4L};
    short *l_1381 = &g_1084[0];
    union U2 l_1382 = {0};
    int i;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    {
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        {
            unsigned l_5 = 1UL;
            l_5 = 0x9D010789L;
        }
    }

    (*g_17) = (safe_add_func_uint16_t_u_u((((**g_1000) = l_1381) == ((*g_152) , l_1381)), 0xA4AEL));


    return l_1382;


    }







static int * func_6(union U1 p_7, int * p_8)
{
    union U1 **l_1004[3][7] = {{&g_110[0][0][0], (void*)0, &g_110[3][0][1], (void*)0, &g_110[0][0][0], (void*)0, &g_110[3][0][1]}, {&g_110[0][0][0], (void*)0, &g_110[3][0][1], (void*)0, &g_110[0][0][0], (void*)0, &g_110[3][0][1]}, {&g_110[0][0][0], (void*)0, &g_110[3][0][1], (void*)0, &g_110[0][0][0], (void*)0, &g_110[3][0][1]}};
    int l_1005 = 0xAD5D3B93L;
    int **l_1034 = &g_17;
    char *l_1035 = (void*)0;
    union U2 *l_1050[2];
    int l_1054 = 0x3342F5A7L;
    int l_1075 = 0L;
    unsigned *l_1137 = &g_723;
    union U0 *l_1143 = &g_36;
    union U0 **l_1142 = &l_1143;
    unsigned short *l_1146 = &g_531;
    unsigned char l_1152[3];
    union U3 *l_1155 = (void*)0;
    int ***l_1171 = &g_16[1][3];
    int l_1197 = (-1L);
    char ***l_1212 = (void*)0;
    short l_1233 = 0xA142L;
    int ***l_1261 = (void*)0;
    union U1 ****l_1315 = &g_307;
    union U3 l_1330[2] = {{0xEC4A2167L}, {0xEC4A2167L}};
    int **l_1333[1][7] = {{&g_280, &g_280, (void*)0, &g_280, &g_280, (void*)0, &g_280}};
    char l_1336 = 4L;
    char l_1352 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1050[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1152[i] = 1UL;
    if ((l_1004[0][6] == l_1004[0][6]))
    {
        int *l_1007 = &g_508;
        char l_1037 = 0L;
        union U1 ***l_1041 = &l_1004[0][6];
        union U2 l_1080[6] = {{0}, {0}, {0}, {0}, {0}, {0}};
        int l_1116[4];
        unsigned l_1117 = 6UL;
        union U3 **l_1124 = (void*)0;
        union U3 *l_1125 = (void*)0;
        int i;
        for (i = 0; i < 4; i++)
            l_1116[i] = 1L;
        for (g_100 = 0; (g_100 <= 1); g_100 += 1)
        {
            short l_1015 = 0xD6B1L;
            int l_1024 = 0x6203ADBBL;
            union U2 *l_1049 = (void*)0;
            union U0 *l_1052 = &g_36;
            union U1 ******l_1059 = &g_567;
            char *l_1070 = &g_500;
            int **l_1073 = &g_17;
            union U2 l_1074[10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
            int i;
            (*g_280) = (-5L);
        }


        for (g_506 = 17; (g_506 == 11); g_506 = safe_sub_func_uint16_t_u_u(g_506, 7))
        {
            union U2 l_1101 = {0};
            unsigned short *l_1108 = (void*)0;
            unsigned short *l_1109 = &g_90;
            int l_1112 = 0x8D9E2B77L;
            short *l_1115[9][4][3] = {{{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}, {{&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}, {&g_1084[0], &g_1084[0], &g_1082[5][0][0]}}};
            union U1 *l_1122 = &g_111;
            int l_1123 = 1L;
            int i, j, k;
        }
        l_1125 = &g_141[1][4][4];

        ;
    }
    else
    {
        char *l_1130 = &g_447;
        union U2 l_1132 = {0};
        int l_1136 = 0x9487BE99L;
        for (g_723 = (-23); (g_723 < 58); g_723 = safe_add_func_int32_t_s_s(g_723, 9))
        {
            int **l_1131[6][1][10] = {{{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}, {{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}, {{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}, {{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}, {{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}, {{(void*)0, &g_671, &g_671, &g_17, &g_671, (void*)0, &g_671, &g_17, &g_671, &g_671}}};
            int i, j, k;
            (*g_280) = ((safe_lshift_func_int8_t_s_u(((void*)0 != (*g_999)), func_24(l_1130, l_1131[1][0][0], l_1131[1][0][0], l_1132))) , p_7.f1);

            ;
            l_1136 = (safe_mod_func_uint8_t_u_u(255UL, (1L ^ (safe_unary_minus_func_uint32_t_u(4294967295UL)))));
        }

        ;
    }
    (*g_280) = p_7.f1;
    if ((((*l_1137) = func_52(l_1075, &l_1034)) >= (safe_add_func_int8_t_s_s((((safe_mul_func_uint32_t_u_u((0xCAL | 1UL), ((void*)0 == l_1142))) >= (p_7.f1 && (safe_rshift_func_int8_t_s_s((((*l_1146) = 0x0589L) & p_7.f2), l_1005)))) , 0L), l_1075))))
    {
        int ***l_1147[7] = {&g_16[1][5], &g_16[2][0], &g_16[1][5], &g_16[2][0], &g_16[1][5], &g_16[2][0], &g_16[1][5]};
        unsigned char l_1170[9][1][9] = {{{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}, {{0UL, 1UL, 6UL, 0xB9L, 4UL, 0xB9L, 6UL, 1UL, 0UL}}};
        int i, j, k;
        (**g_234) = func_37(p_7.f1, func_52((*g_13), l_1147[3]));
lbl_1198:
        for (g_68 = (-3); (g_68 > 20); g_68 = safe_add_func_int32_t_s_s(g_68, 8))
        {
            (*g_235) = p_8;
            for (g_491 = 8; (g_491 < 37); g_491 = safe_add_func_int8_t_s_s(g_491, 3))
            {
                (*g_235) = p_8;
            }
            p_8 = p_8;
            if (l_1152[1])
                break;
        }
        (*l_1034) = p_8;
        for (g_531 = 0; (g_531 <= 2); g_531 += 1)
        {
            union U3 *l_1153[7];
            union U3 **l_1154[1];
            unsigned char l_1177 = 255UL;
            unsigned char l_1183 = 0x2AL;
            short **l_1187[2];
            int i;
            for (i = 0; i < 7; i++)
                l_1153[i] = &g_141[1][1][1];
            for (i = 0; i < 1; i++)
                l_1154[i] = &l_1153[5];
            for (i = 0; i < 2; i++)
                l_1187[i] = &g_186[3][1];
            l_1155 = (g_152 = l_1153[6]);

            ;
            for (g_471 = 0; (g_471 <= 2); g_471 += 1)
            {
                union U0 *l_1160 = &g_36;
                int l_1167[9][2][1] = {{{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}, {{0x565762CAL}, {0x565762CAL}}};
                union U0 *l_1168 = &g_1169;
                int l_1172 = 0x4EC4E6D4L;
                int ***l_1173[9][6][4] = {{{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}, {{&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}, {&g_16[2][5], &g_235, &g_16[1][5], (void*)0}}};
                short **l_1186 = (void*)0;
                union U2 l_1193 = {0};
                int i, j, k;
                (*g_280) = (safe_add_func_uint8_t_u_u((g_100 = (safe_lshift_func_int16_t_s_u(p_7.f1, ((((*l_1142) = (*l_1142)) != l_1160) > g_36.f0)))), func_52((safe_sub_func_uint8_t_u_u(p_7.f2, (l_1167[5][1][0] = (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_7.f2, (func_52(l_1167[5][1][0], l_1171) , p_7.f2))), l_1172))))), l_1173[2][0][0])));
                for (g_344 = 2; (g_344 >= 0); g_344 -= 1)
                {
                    int *l_1174 = &g_475[1][5][5];
                    int l_1184 = (-2L);
                    int ***l_1188 = (void*)0;
                    for (g_447 = 2; (g_447 >= 0); g_447 -= 1)
                    {
                        int ***l_1175 = (void*)0;
                        int i, j;
                        (**l_1171) = l_1174;

                        ;
                        (*g_671) = func_52((*g_13), l_1175);

                    }
                    if (p_7.f0)
                        continue;
                    if ((g_905 ^ g_1021[2][9][1]))
                    {
                        char l_1176 = 0x91L;
                        short *l_1182[7][2][8] = {{{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}, {{&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}, {&g_1084[0], &g_165[3], &g_1082[6][9][2], &g_1084[0], &g_1084[0], &g_1084[0], &g_165[4], &g_165[2]}}};
                        unsigned short *l_1185 = &g_1169.f0;
                        int i, j, k;
                        (*g_235) = func_37(l_1176, l_1177);
                        if (p_7.f2)
                            break;
                        if ((*g_280))
                            continue;
                        (*l_1034) = func_37(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((p_7.f2 && 0x83F2L), 6)), 10)) , ((+(l_1183 = (p_7.f2 | (*l_1174)))) < (l_1184 != func_52((((*l_1185) = 6UL) , (((l_1187[0] = l_1186) == &l_1182[0][1][6]) , p_7.f1)), l_1188)))), p_7.f2);
                    }
                    else
                    {
                        (**g_234) = p_8;
                        (**g_234) = p_8;
                    }
                }
                for (g_100 = 0; (g_100 <= 2); g_100 += 1)
                {
                    unsigned l_1194 = 18446744073709551615UL;
                    for (g_36.f0 = 0; (g_36.f0 <= 2); g_36.f0 += 1)
                    {
                        (*l_1142) = &g_1169;

                        ;
                        (**l_1171) = func_37(((safe_lshift_func_int16_t_s_u((p_7.f2 ^ (((safe_sub_func_uint8_t_u_u(((l_1193 , ((*g_152) , p_7.f0)) != 4294967295UL), (func_52(l_1194, l_1173[2][0][0]) | (safe_mod_func_uint32_t_u_u(4294967295UL, l_1177))))) | p_7.f2) <= l_1177)), l_1194)) , (-1L)), l_1197);
                        if (l_1172)
                            goto lbl_1198;
                    }
                }
            }


        }
    }
    else
    {
        char l_1205 = 0x8BL;
        unsigned char *l_1206 = (void*)0;
        unsigned char *l_1207[1][6] = {{&l_1152[0], &l_1152[0], &g_100, &l_1152[0], &l_1152[0], &g_100}};
        int l_1208 = 0x765DB6E6L;
        char **l_1210 = (void*)0;
        char ***l_1209[10][7][3] = {{{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}, {{&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}, {&l_1210, &l_1210, (void*)0}}};
        union U0 l_1211 = {0x836CL};
        int i, j, k;
        (**g_234) = (**g_234);
        (*g_280) = (l_1209[0][3][1] == (((**l_1142) = l_1211) , l_1212));
    }

    ;
    ;
    ;
    if ((func_52((*g_13), &l_1034) != ((*l_1146) = (g_51 != 0x21L))))
    {
        short l_1215 = 0xC617L;
        char l_1216[10][9] = {{0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}, {0L, (-1L), (-2L), 0x23L, (-1L), 0L, 0L, 0x23L, 0xFAL}};
        union U0 l_1226 = {0x8050L};
        int ***l_1230 = &l_1034;
        int **l_1283 = &g_917;
        unsigned char *l_1316[8][5][6] = {{{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}, {{&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}, {&l_1152[2], (void*)0, &l_1152[1], &g_471, &l_1152[1], &l_1152[1]}}};
        int l_1317 = 0xC8F160F1L;
        union U2 l_1320[1] = {{0}};
        int i, j, k;
        if (l_1215)
        {
            (*g_280) = l_1216[6][4];
        }
        else
        {
            short l_1219 = 0x547CL;
            union U3 l_1241 = {0xE2F51847L};
            short **l_1246 = (void*)0;
            int l_1257 = 0x0525D2B2L;
            union U2 l_1281[3][1] = {{{0}}, {{0}}, {{0}}};
            int ***l_1282 = &g_235;
            unsigned short l_1289 = 0x470AL;
            int ***l_1297 = &l_1283;
            int i, j;
            if (p_7.f2)
            {
                unsigned char *l_1231 = (void*)0;
                unsigned char *l_1232[1];
                int l_1273 = (-1L);
                union U2 l_1275 = {0};
                int *l_1279 = &g_111.f1;
                int i;
                for (i = 0; i < 1; i++)
                    l_1232[i] = &l_1152[0];
                l_1233 = (safe_sub_func_uint32_t_u_u((l_1219 , (safe_lshift_func_int16_t_s_s((p_7 , (safe_rshift_func_uint8_t_u_u(((*g_148) , (g_471 = ((safe_lshift_func_uint8_t_u_s(252UL, l_1219)) < ((*g_671) = ((g_165[2] && func_52((*g_13), l_1230)) ^ 1UL))))), p_7.f2))), 8))), (-6L)));

                for (l_1219 = 2; (l_1219 >= 0); l_1219 -= 1)
                {
                    int ***l_1234 = (void*)0;
                    union U3 l_1250 = {1UL};
                    char *l_1280 = &l_1216[6][4];
                    char l_1288 = 0x36L;
                    int i;
                }

                ;

            }
            else
            {
                int ***l_1299 = &g_920;
                short *l_1300 = &g_165[1];
                int l_1303 = (-10L);
                int ***l_1310 = &g_235;
                for (g_90 = 0; (g_90 < 18); g_90++)
                {
                    union U3 *l_1294 = &g_141[1][0][2];
                    int ****l_1298 = &l_1297;
                    for (g_66 = (-14); (g_66 >= (-10)); ++g_66)
                    {
                        (*g_671) = l_1241.f0;

                        (**l_1230) = (**l_1282);
                        (**l_1230) = p_8;
                        return (*l_1034);


                    }
                    (*g_280) = ((0x5CF8L < 1L) || ((void*)0 == l_1294));
                    for (l_1054 = 0; (l_1054 != (-23)); l_1054 = safe_sub_func_int16_t_s_s(l_1054, 7))
                    {
                        (**g_307) = (void*)0;
                    }
                    (*g_671) = (((*l_1298) = l_1297) == l_1299);

                }
                (*g_280) = (65529UL ^ 0x1CC5L);
                (*g_280) = (((*l_1300) = p_7.f1) >= ((safe_lshift_func_int8_t_s_s((((p_7.f0 > p_7.f1) == l_1303) == p_7.f0), 1)) == (safe_rshift_func_int8_t_s_u((p_7.f0 | ((+((+((safe_lshift_func_int8_t_s_s((p_7 , 1L), (safe_add_func_int16_t_s_s((4294967293UL >= (**g_1285)), p_7.f1)))) <= (*g_280))) && g_475[1][2][4])) <= 0x94L)), p_7.f0))));
                (*g_280) = func_52(l_1303, l_1310);
            }


        }
        (*g_280) = (safe_rshift_func_uint8_t_u_u((&l_1283 == ((safe_rshift_func_uint8_t_u_s(((l_1317 = ((void*)0 != l_1315)) | (safe_lshift_func_int16_t_s_s((&l_1215 == &l_1233), 11))), func_52((((p_7.f0 == (func_24(&l_1216[4][4], (*l_1171), (*l_1171), l_1320[0]) , 1L)) != p_7.f1) , 1L), l_1230))) , l_1261)), 0));


    }
    else
    {
        int l_1323 = 1L;
        short *l_1324 = &l_1233;
        union U2 l_1325 = {0};
        int ***l_1331[4];
        char *l_1332 = (void*)0;
        union U1 ****l_1338 = &g_307;
        unsigned l_1340 = 4294967290UL;
        int **l_1343 = &g_17;
        union U0 l_1353 = {0xBEAAL};
        short l_1360 = 0L;
        char l_1373 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_1331[i] = &l_1034;
        (*g_671) = ((safe_add_func_uint8_t_u_u((~(l_1323 & ((((*l_1324) = l_1323) && (l_1325 , ((safe_mod_func_uint32_t_u_u((l_1323 > 1UL), (safe_add_func_int32_t_s_s(((~func_24(l_1332, (*l_1171), l_1333[0][4], (*g_148))) , p_7.f1), (-1L))))) | g_3))) ^ g_68))), p_7.f0)) != p_7.f0);


        (*g_235) = p_8;
        for (g_77 = 0; (g_77 == 26); ++g_77)
        {
            p_8 = func_37(p_7.f2, l_1336);
            (**g_234) = p_8;
        }
        if (((*g_280) = p_7.f0))
        {
            union U1 ****l_1337 = &g_307;
            int l_1339[3];
            int **l_1344 = &g_671;
            int i;
            for (i = 0; i < 3; i++)
                l_1339[i] = (-1L);
            if ((((func_9(func_37(((*l_1324) = (p_7.f1 ^ (p_7.f0 >= (*g_1286)))), ((g_568[1][0] = l_1337) != ((*g_148) , l_1338))), &l_1336, p_7) , (*g_148)) , 0x12L) , p_7.f1))
            {
                (*g_280) = l_1339[1];
            }
            else
            {
                int l_1341 = 0x04B7E86CL;
                for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                {
                    int **l_1342[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1342[i] = &g_280;
                    p_8 = p_8;
                    if ((*g_671))
                        break;
                    if (l_1340)
                    {
                        (*g_671) = 0xCE1FD4CAL;
                        if (l_1341)
                            continue;
                    }
                    else
                    {
                        (*g_671) = func_24(&g_500, &p_8, (l_1343 = l_1342[0]), (*g_148));

                        ;
                    }
                    (**l_1344) = (((((*g_13) = (func_52(func_24(&g_447, l_1344, &p_8, l_1325), &l_1034) != (((l_1325 , g_100) , l_1341) >= 5UL))) >= p_7.f1) || g_1084[0]) != p_7.f2);
                    for (g_344 = 1; (g_344 >= 0); g_344 -= 1)
                    {
                        unsigned char l_1351[4] = {0UL, 0x21L, 0UL, 0x21L};
                        int i;
                        (*g_280) = (((**l_1344) = (((g_90 = 6UL) > (safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_7.f1, p_7.f2)) | ((**g_1285) && (*g_1286))), (-1L)))) & (0x815F97D5L != (safe_sub_func_int8_t_s_s(((*g_13) = ((((0xB27DL > (0x7E2372C3L < 0x3AE515A9L)) == p_7.f0) || 0xC510L) < (*g_671))), 0x57L))))) & p_7.f1);
                        if (l_1341)
                            break;
                        if (l_1351[0])
                            break;
                    }
                }

                ;
            }

            ;
            (*g_671) = p_7.f2;
            (**l_1171) = func_37(p_7.f1, func_52(l_1352, &l_1343));
        }
        else
        {
            int ***l_1363 = &g_16[1][5];
            char l_1369 = 0xABL;
            int l_1372 = (-9L);
            if ((p_7.f1 < (safe_mod_func_uint32_t_u_u(p_7.f1, (g_14 && p_7.f1)))))
            {
                union U1 l_1361 = {0x98CFDC98L};
                union U0 l_1362 = {4UL};
                int ***l_1366 = &l_1034;
                for (g_491 = 0; (g_491 == 6); g_491 = safe_add_func_int8_t_s_s(g_491, 9))
                {
                    unsigned short l_1359[7][5][7] = {{{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}, {{0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}, {0xBCDAL, 0xABAEL, 4UL, 65535UL, 65530UL, 0UL, 65532UL}}};
                    int **l_1364 = &g_280;
                    int **l_1365 = &g_671;
                    unsigned char *l_1367 = (void*)0;
                    unsigned char *l_1368 = &l_1152[0];
                    int i, j, k;
                    (*g_280) = (((*l_1368) = (func_52((safe_unary_minus_func_int8_t_s((l_1360 = (p_7.f2 , (l_1359[1][2][1] = 0x64L))))), (l_1171 = (l_1331[3] = ((func_24((l_1361 , &g_500), l_1364, l_1365, (*g_148)) ^ 0x7CL) , l_1366)))) != (**g_1285))) != g_100);

                    ;
                    (**l_1171) = (**l_1366);
                    (**l_1364) = ((((**g_1285) > (*g_1286)) > ((*l_1368) = 1UL)) != ((**g_1285) <= l_1369));
                    if ((**l_1365))
                        continue;
                }

                ;
                return (**l_1363);


            }
            else
            {
                (*l_1034) = p_8;
                (*g_671) = p_7.f1;
            }
            (*g_671) = (safe_add_func_int32_t_s_s((p_7.f1 > p_7.f1), ((!(~(p_7.f2 >= (l_1369 ^ l_1372)))) , l_1373)));
            for (l_1323 = (-12); (l_1323 > 4); ++l_1323)
            {
                union U2 **l_1376 = &l_1050[1];
                (*l_1376) = l_1050[0];
                (*l_1343) = (*g_235);
            }
        }

        ;
    }
    return p_8;


}







static union U1 func_9(int * p_10, char * p_11, union U1 p_12)
{
    int ***l_18 = (void*)0;
    int ***l_19 = &g_16[0][4];
    union U1 l_20 = {0L};
    (*l_19) = g_16[1][5];
    return l_20;


    }







static int * func_21(int * p_22, unsigned char p_23)
{
    int l_48 = 0x1BAB0C3EL;
    unsigned *l_49 = (void*)0;
    unsigned *l_50 = &g_51;
    int l_55 = 0xA3E2BE8CL;
    union U0 l_59 = {0x2CE3L};
    int ***l_358 = (void*)0;
    union U2 l_776 = {0};
    int ***l_797[8] = {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235};
    char *l_895[3];
    int l_912 = 0x56803B4EL;
    union U1 *****l_938 = &g_568[1][0];
    int l_941 = 0x594212DAL;
    short ***l_944 = &g_185;
    int ***l_945 = &g_235;
    unsigned short l_956 = 0x1622L;
    union U2 **l_966 = &g_148;
    union U1 *l_980 = &g_111;
    union U1 *l_982 = &g_111;
    union U3 *l_985 = &g_141[0][0][2];
    union U3 *l_987 = &g_141[0][2][4];
    int *****l_1001[2][7] = {{(void*)0, (void*)0, &g_992[2][0], &g_992[2][0], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_992[2][0], &g_992[2][0], (void*)0, (void*)0, (void*)0}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_895[i] = &g_14;
    if ((func_24(func_29(g_35, g_36, ((~(((*g_235) = func_37(((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int32_t_s_s((l_55 = ((((safe_mod_func_uint32_t_u_u(0xE3AA9C1CL, ((*l_50) = (safe_rshift_func_int16_t_s_u((l_48 = (-10L)), 15))))) > (((func_52(l_55, func_56(l_59, l_55)) > l_59.f0) == l_59.f0) >= l_55)) <= p_23) ^ 5UL)), g_111.f2)) && (*p_22)) <= 0x4F4CE645L) != 0x19DAB7DAL), 0)) ^ 65530UL), l_59.f0)) == (void*)0)) || g_3), l_59.f0, l_358), (*g_234), (*g_234), l_776) && (*g_13)))
    {
        char *l_808 = &g_500;
        int l_813[4][4] = {{0x10CE2831L, 0x10CE2831L, 1L, 0x10CE2831L}, {0x10CE2831L, 0x10CE2831L, 1L, 0x10CE2831L}, {0x10CE2831L, 0x10CE2831L, 1L, 0x10CE2831L}, {0x10CE2831L, 0x10CE2831L, 1L, 0x10CE2831L}};
        union U2 l_814 = {0};
        int *l_815 = &g_475[1][5][5];
        int i, j;
lbl_798:
        for (g_506 = 0; (g_506 <= 4); g_506 += 1)
        {
            int i;
            if ((*p_22))
                break;
            (**g_234) = (*g_235);
            if (g_3)
                goto lbl_798;
            for (g_500 = 0; (g_500 <= 4); g_500 += 1)
            {
                return p_22;


            }
            (*g_671) = func_52((g_4 , (safe_sub_func_uint32_t_u_u(p_23, (func_52((safe_sub_func_uint16_t_u_u(0UL, ((!(0x0CL && ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((*g_13), 1)), g_35.f0)) , (safe_rshift_func_uint16_t_u_u((6L || (safe_add_func_int16_t_s_s(0xDDCEL, (g_165[g_506] = (p_23 , p_23))))), 2))))) || g_165[g_506]))), l_797[7]) || (-1L))))), l_358);

        }
        for (g_68 = (-18); (g_68 == (-15)); g_68++)
        {
            return (**g_234);


        }
        for (g_77 = 6; (g_77 == 24); ++g_77)
        {
            int *l_805 = &l_55;
            union U0 *l_844 = &l_59;
            union U0 **l_843 = &l_844;
            for (g_51 = (-25); (g_51 <= 5); g_51++)
            {
                char **l_809 = &l_808;
                int ****l_810 = &l_797[3];
                unsigned char *l_811 = &g_100;
                int *l_812[8][8] = {{&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}, {&l_48, &l_48, &g_35.f0, &g_111.f2, &g_111.f2, &l_48, &g_111.f2, &g_111.f2}};
                int l_816 = 0x4659D652L;
                union U1 ****l_845[8][4] = {{&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307, &g_307}};
                int i, j;
            }

            ;
            if ((*l_815))
                break;
        }
    }
    else
    {
        int l_867[1];
        union U1 ***l_879[7];
        int ***l_888 = &g_235;
        union U3 l_936 = {0x5F62F0C2L};
        unsigned *l_947 = &l_776.f1;
        union U2 *l_977 = &g_84[2];
        union U1 *l_981 = (void*)0;
        unsigned short *l_983 = &l_956;
        unsigned short *l_984 = &l_59.f0;
        union U3 **l_986[5] = {(void*)0, &g_152, (void*)0, &g_152, (void*)0};
        union U0 l_993 = {65535UL};
        int i;
        for (i = 0; i < 1; i++)
            l_867[i] = 0x0F62673AL;
        for (i = 0; i < 7; i++)
            l_879[i] = (void*)0;
        for (g_14 = 0; (g_14 <= 1); g_14 += 1)
        {
            int ***l_872 = &g_235;
            union U2 *l_873 = &g_84[1];
            union U1 l_885 = {-3L};
            unsigned *l_934 = &g_576;
            if ((((g_100 = l_867[0]) != g_447) , (safe_mod_func_uint16_t_u_u(func_52(((*g_152) , (safe_lshift_func_uint16_t_u_u(g_691[1], 5))), l_872), p_23))))
            {
                int l_883 = 0xD0A2AC25L;
                if ((*g_671))
                {
                    int *l_876 = &g_344;
                    l_873 = &g_84[0];
                    for (g_123 = 0; (g_123 <= 1); g_123 += 1)
                    {
                    }
                    for (g_506 = 0; (g_506 <= 2); g_506 += 1)
                    {
                        return l_876;


                    }
                }
                else
                {
                    union U1 ***l_880 = &g_308;
                    if ((*p_22))
                        break;
                    (**l_872) = (*g_235);
                    for (p_23 = 0; (p_23 <= 1); p_23 += 1)
                    {
                        unsigned short *l_884 = &g_90;
                        (*g_671) = (safe_mod_func_uint32_t_u_u(((l_879[5] == l_880) <= (((*l_50) = (safe_mod_func_uint16_t_u_u(l_883, ((*l_884) = func_52(l_867[0], &g_235))))) >= p_23)), p_23));

                    }
                }
            }
            else
            {
                char *l_889 = &g_447;
                int l_894 = 0x60F410FBL;
                unsigned *l_896 = &g_723;
                int ***l_899[1][1][10] = {{{&g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235}}};
                union U0 l_921 = {0xDB4CL};
                unsigned short *l_928 = &g_90;
                short *l_929[8];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_929[i] = &g_165[2];
                if ((((l_885 , func_52(((safe_mod_func_int8_t_s_s(0x8DL, func_52(p_23, l_888))) , ((*l_889) = 4L)), l_888)) != (-8L)) != (-9L)))
                {
                    unsigned l_900[2];
                    int l_906 = (-4L);
                    short *l_911 = &g_123;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_900[i] = 1UL;
                    for (g_68 = 0; (g_68 <= 0); g_68 += 1)
                    {
                        union U2 l_897[4] = {{0}, {0}, {0}, {0}};
                        int ***l_898 = &g_235;
                        int i;
                        l_867[g_68] = (safe_sub_func_uint16_t_u_u((~(((safe_lshift_func_uint16_t_u_u((l_894 = l_867[g_68]), (0x5FC9L > (65531UL != (l_895[2] == (void*)0))))) ^ ((*l_50) = ((*l_896) = ((void*)0 == l_896)))) , func_52((0x9F633BB0L | func_52(((p_23 = (((*l_889) = (~func_52(((l_867[g_68] = (((l_897[3] , p_23) || p_23) , (-1L))) == g_68), l_898))) > p_23)) == l_894), l_899[0][0][5])), l_899[0][0][5]))), l_900[0]));
                        if ((*p_22))
                            break;
                        (**g_234) = (**g_234);
                    }
                    l_885.f1 = ((*g_671) = ((*g_280) = (*p_22)));

                                        if (((safe_mod_func_uint16_t_u_u((func_52((safe_add_func_int8_t_s_s((((l_906 = g_905) , (7L == g_165[2])) & (((*l_896) = (safe_rshift_func_int16_t_s_u((p_23 , (p_23 || ((((safe_sub_func_int32_t_s_s((p_23 , 0x7B3C1358L), (*g_280))) < ((*l_911) = p_23)) ^ 1L) ^ p_23))), 13))) && p_23)), l_900[0])), l_888) > l_912), p_23)) , 0xFCB6264FL))
                    {
                        union U0 *l_915 = &g_36;
                        union U0 **l_914 = &l_915;
                        union U0 ***l_913 = &l_914;
                        (*g_280) = (g_340 == ((*l_913) = g_340));

                        ;
                        if ((*g_280))
                            break;
                        return p_22;


                    }
                    else
                    {
                        return (**l_888);


                    }
                }
                else
                {
                    int **l_919 = &g_917;
                    int ***l_918[7][4][2] = {{{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}, {{(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}, {(void*)0, &l_919}}};
                    int i, j, k;
                    g_920 = (g_916 = g_916);
                }
                (**l_872) = func_37((l_867[0] = ((l_921 , ((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((*g_148) , ((*l_889) = p_23)) , 0xEB927AC1L), (((g_905 && ((*l_928) = (+(safe_sub_func_int32_t_s_s((((g_500 = ((g_111.f2 , p_23) , 0x2BL)) > (*g_13)) || 4UL), 0x53CA8509L))))) , g_475[1][5][5]) != 0L))), 252UL)) <= 0xD1L)) && 0x25F9L)), p_23);
                return (*g_235);


            }
            for (g_471 = 0; (g_471 <= 1); g_471 += 1)
            {
                int *l_930 = &g_475[0][1][0];
                short *l_931 = (void*)0;
                short *l_932[6] = {&g_165[4], &g_165[4], &g_165[2], &g_165[4], &g_165[4], &g_165[2]};
                unsigned short l_933 = 0x9DE8L;
                union U1 ******l_937[7][9];
                short ****l_942 = (void*)0;
                short ***l_943 = &g_185;
                unsigned **l_946[9][8] = {{&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}, {&g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0], &g_575[1], &g_575[0], &g_575[0]}};
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_937[i][j] = &g_567;
                }
                for (g_447 = 1; (g_447 >= 0); g_447 -= 1)
                {
                    (*g_235) = l_930;

                    ;
                }
                (**l_872) = (**l_872);
                (**l_872) = func_37(((*l_930) = (l_933 = p_23)), (l_934 != (l_947 = func_37((((p_23 || (((((func_52(func_52((((safe_unary_minus_func_uint8_t_u((!(g_14 || (l_936 , 0x324596F7L))))) != func_52(((l_938 = (g_567 = (void*)0)) != (((safe_lshift_func_int16_t_s_s(l_941, (l_867[0] = (((l_943 = (p_23 , &g_185)) != l_944) | p_23)))) != 0xC9F8FCC3L) , &g_568[4][0])), l_945)) != 8UL), &g_235), &g_235) && p_23) > g_4) , (*g_671)) , 0x70C474C5L) <= 0xB5AC03CEL)) > g_51) != 4294967295UL), p_23))));

                ;
                (**l_888) = func_37((((safe_sub_func_uint8_t_u_u(3UL, (l_867[0] = (g_14 | g_66)))) , (l_885 , (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*l_930) = (safe_lshift_func_uint16_t_u_u((func_52((p_23 , (*l_930)), l_945) <= ((g_500 = (((*p_22) && g_905) >= p_23)) > 0x7FL)), 5))), 11)), p_23)))) | l_956), l_885.f1);
                for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                {
                    short **l_957 = &g_186[2][6];
                    int l_964 = 0x7F7D8A43L;
                    union U1 l_965 = {-1L};
                    unsigned short *l_974 = &g_90;
                    for (g_36.f0 = 0; (g_36.f0 <= 1); g_36.f0 += 1)
                    {
                        (*l_930) = (((*g_148) , l_957) != ((*l_873) , ((safe_mul_func_uint32_t_u_u(((*g_13) != (g_500 = (*l_930))), (((4L && (safe_sub_func_uint32_t_u_u(p_23, (p_23 == (safe_add_func_int32_t_s_s((*p_22), l_964)))))) >= g_447) > p_23))) , &g_186[2][6])));
                    }
                    for (g_51 = 0; (g_51 <= 1); g_51 += 1)
                    {
                        int *l_969 = &l_776.f2;
                        int l_975 = 0x236C9D8FL;
                        unsigned short *l_976 = &g_531;
                        int i, j, k;
                        (*l_930) = ((l_965 , ((void*)0 != l_966)) & g_123);
                        (*l_966) = (((safe_rshift_func_uint16_t_u_u((((*l_969) = p_23) , ((l_965.f1 & ((*l_976) = ((*l_974) = (((((*g_148) = (*g_148)) , p_23) , (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((0x3447L || ((+(&g_90 == l_974)) ^ (0UL ^ ((*g_280) = l_965.f1)))), l_975)) <= p_23), l_975))) , 0x241CL)))) >= 0x3391L)), g_691[1])) | 0UL) , l_977);


                                            }
                    (*l_930) = l_964;
                }
            }
        }

        ;
        ;

        ;
        ;
        l_987 = (l_985 = ((((*l_984) = (((p_23 < p_23) ^ 255UL) ^ (((safe_add_func_int16_t_s_s(0xC6BBL, g_35.f1)) < g_475[1][2][2]) || ((*l_983) = ((l_980 != (p_23 , (l_982 = l_981))) | (-10L)))))) <= p_23) , (void*)0));

        ;
        ;
        ;
        for (g_531 = 0; (g_531 <= 0); g_531 += 1)
        {
            unsigned char l_994[9][2] = {{0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}, {0xE3L, 0xE3L}};
            int l_995 = 0x5AABFD9EL;
            unsigned l_1003 = 2UL;
            int i, j;
            (**l_945) = (void*)0;

            ;
            for (g_500 = 1; (g_500 >= 0); g_500 -= 1)
            {
                int ****l_990[5];
                int *****l_991[4][9][6] = {{{&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}}, {{&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}}, {{&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}}, {{&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}, {&l_990[0], &l_990[0], &l_990[2], &l_990[0], &l_990[0], &l_990[0]}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_990[i] = (void*)0;
                for (l_936.f0 = 0; (l_936.f0 <= 0); l_936.f0 += 1)
                {
                    for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                    {
                        return p_22;


                    }
                    (*g_671) = 0x5A887B62L;

                }
                if (l_867[g_531])
                    break;
                (*g_280) = ((((*g_13) = ((safe_lshift_func_int8_t_s_u(0L, 2)) ^ g_35.f2)) < p_23) || (&g_235 != &g_235));
                (*g_280) = ((g_992[2][1] = l_990[0]) == &g_234);
                for (g_100 = 0; (g_100 <= 1); g_100 += 1)
                {
                    int l_998 = 0x1DEFA031L;
                    int i, j, k;
                    l_995 = (((*p_22) < (&g_148 == (l_993 , &g_148))) || ((((+((~((g_141[(g_531 + 1)][(g_531 + 2)][(g_531 + 5)] , &p_22) != (void*)0)) & (p_23 | l_994[6][1]))) ^ p_23) , (void*)0) == (void*)0));
                    (*g_671) = (*p_22);

                    for (g_14 = 0; (g_14 <= 1); g_14 += 1)
                    {
                        unsigned char l_1002 = 0x45L;
                        l_998 = (safe_rshift_func_uint16_t_u_u((func_52(p_23, l_888) && ((l_995 = 0xE635AA55L) , 255UL)), (0L > (g_141[(g_531 + 1)][(g_531 + 2)][(g_531 + 5)].f0 | ((*g_671) = l_994[6][1])))));
                        l_1003 = ((*g_280) = (((-1L) & (((((*l_984) = g_500) || ((func_52(p_23, l_358) , 0x7744L) ^ (((((((&l_944 != g_999) || ((*l_50) = (&g_992[2][1] != l_1001[0][1]))) == l_1002) || p_23) > 0UL) || (*g_13)) && (*p_22)))) || 1UL) , l_998)) && (*p_22)));
                    }
                }
            }
        }


    }

    ;


    ;


    ;
    ;
    ;
    ;

    (*g_308) = (void*)0;
    return (*g_235);


}







static unsigned char func_24(char * p_25, int ** p_26, int ** p_27, union U2 p_28)
{
    unsigned char l_777 = 0x47L;
    char l_778 = 0xD5L;
    int ***l_783 = &g_235;
    (*g_280) = 0xB8CF0A77L;
    for (g_531 = 0; (g_531 <= 2); g_531 += 1)
    {
        unsigned short *l_779 = &g_36.f0;
        unsigned short *l_780[10][8] = {{&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}, {&g_531, &g_90, &g_90, &g_90, (void*)0, &g_90, &g_531, &g_90}};
        union U0 l_781 = {1UL};
        short ***l_782 = &g_185;
        int l_784 = 1L;
        int i, j;
        l_784 = ((l_777 | (g_90 = (!((*l_779) = l_778)))) && (func_52((l_781 , ((*g_13) = func_52(((l_782 != &g_185) && ((l_781.f0 <= func_52(((*g_13) = l_777), l_783)) > (-3L))), &g_235))), &g_235) > l_781.f0));
    }
    (**g_234) = (**l_783);
    return g_111.f1;
}







static char * func_29(union U1 p_30, union U0 p_31, unsigned short p_32, short p_33, int *** p_34)
{
    short l_363 = 0x573CL;
    unsigned l_364[1];
    union U3 l_367 = {4294967289UL};
    union U0 *l_395[1];
    unsigned char *l_399 = (void*)0;
    union U1 ****l_415 = &g_307;
    unsigned l_431 = 0UL;
    unsigned l_532[5][3][4] = {{{0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}}, {{0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}}, {{0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}}, {{0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}}, {{0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}, {0xC8486329L, 0x37CF0BBCL, 0UL, 0x37CF0BBCL}}};
    int ***l_534 = &g_235;
    unsigned *l_562[3];
    union U2 l_577 = {0};
    union U0 *l_590[2][10][7] = {{{&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}}, {{&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}}};
    unsigned l_634 = 0x1052512DL;
    int ***l_656 = &g_235;
    short l_677[10][2] = {{(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}, {(-1L), (-2L)}};
    unsigned *l_689 = (void*)0;
    int ***l_698 = &g_235;
    union U0 l_703 = {0xA8ACL};
    int *l_715 = &g_35.f2;
    int **l_714 = &l_715;
    int ***l_713 = &l_714;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_364[i] = 0xF78BCFD7L;
    for (i = 0; i < 1; i++)
        l_395[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_562[i] = &l_364[0];
lbl_679:
    if ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_363, (p_33 , p_31.f0))), ((*g_13) = l_364[0]))))
    {
        int *l_365 = &g_35.f1;
        char *l_366 = &g_14;
        union U0 *l_396 = &g_36;
        union U1 ****l_413 = &g_307;
        char l_417 = (-9L);
        unsigned l_436 = 0xA7FC6860L;
        (**g_234) = l_365;

        ;
        if (((**g_235) = ((*g_280) = (g_111.f2 | ((l_366 != (l_367 , &g_14)) , (p_30.f1 == (*l_365)))))))
        {
            int l_378 = 0L;
            unsigned char l_381 = 3UL;
            char *l_385 = (void*)0;
            for (l_367.f0 = 15; (l_367.f0 == 3); l_367.f0 = safe_sub_func_uint32_t_u_u(l_367.f0, 1))
            {
                unsigned char *l_382 = &l_381;
                (**g_235) = ((*g_280) = (*g_17));
                if (((*g_280) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((!(p_31 , ((safe_sub_func_uint32_t_u_u((((*g_152) , ((*l_382) = ((safe_rshift_func_uint8_t_u_u(l_378, 3)) < (((safe_sub_func_uint16_t_u_u((p_31.f0 != (p_31.f0 < (0x23578D19L ^ (l_381 ^ (0x08L != ((+g_344) || 0xD9L)))))), (-8L))) >= (*g_280)) == l_364[0])))) & 0x11L), l_378)) < g_51))), p_30.f1)), p_30.f0))))
                {
                    for (g_100 = 10; (g_100 != 34); g_100++)
                    {
                        (*l_365) = (p_32 & p_30.f1);
                    }
                    return l_385;



                }
                else
                {
                    for (g_123 = 0; (g_123 <= (-6)); g_123 = safe_sub_func_int8_t_s_s(g_123, 8))
                    {
                        unsigned char l_394 = 0x14L;
                        (***g_234) = (safe_sub_func_uint8_t_u_u(((*l_382) = (((l_378 ^ (((~(*g_13)) != (p_32 >= 65535UL)) | (**g_235))) || ((((*l_365) < ((((safe_rshift_func_int8_t_s_s((*g_13), 4)) <= g_165[2]) != ((safe_lshift_func_int8_t_s_u((247UL == p_33), 5)) >= g_35.f0)) , 0x64ABD414L)) >= 0UL) , l_394)) >= p_33)), l_394));
                        (**g_234) = l_365;
                        (*l_365) = p_30.f0;
                        if (l_364[0])
                            continue;
                    }
                }
                (*g_280) = (l_395[0] != l_396);
            }
            (*g_235) = (**g_234);
        }
        else
        {
            unsigned *l_411 = &g_51;
            char l_412 = 1L;
            union U1 *****l_414 = &l_413;
            union U1 l_416 = {-1L};
            (***g_234) = (((((((((safe_rshift_func_int8_t_s_s(((+(*l_365)) == ((l_399 != (p_31 , &g_100)) || ((safe_sub_func_uint32_t_u_u((0x01B0L & (((4294967295UL != (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((p_30.f0 || ((((safe_sub_func_uint32_t_u_u(0xBE9E7426L, (((*l_411) = (safe_mod_func_uint8_t_u_u(g_14, 0x15L))) < l_412))) >= 0x9FL) | (*l_365)) ^ 1L)) , l_412))), 11)), p_30.f1))) != 0x08L) <= (*g_13))), l_412)) ^ g_35.f2))), 0)) , 0x99L) , (void*)0) != (*g_307)) <= (*g_280)) & (*l_365)) , (*g_152)) , g_90) < p_30.f1);
            if ((0x58D8B7D9L <= (+((*l_411) = (((*l_414) = l_413) != l_415)))))
            {
                short *l_418[7] = {&l_363, &l_363, &g_165[2], &l_363, &l_363, &g_165[2], &l_363};
                int l_421[6];
                int *l_422[8] = {&g_68, &g_68, (void*)0, &g_68, &g_68, (void*)0, &g_68, &g_68};
                int i;
                for (i = 0; i < 6; i++)
                    l_421[i] = 0x35CC2434L;
                l_422[0] = func_37((l_416 , (p_33 = ((*l_365) <= (func_52((*l_365), p_34) >= l_417)))), ((safe_add_func_uint32_t_u_u((*l_365), l_421[2])) > l_412));


                for (g_4 = 0; (g_4 >= (-12)); g_4 = safe_sub_func_uint16_t_u_u(g_4, 7))
                {
                    (***l_415) = (****l_414);
                }
                return &g_14;



            }
            else
            {
                short *l_432 = &g_165[2];
                unsigned *l_433 = (void*)0;
                (*g_280) = (((((safe_mod_func_int8_t_s_s((~(((((!((void*)0 == (*g_235))) < l_416.f2) , (((*l_365) , (((l_416.f2 <= ((safe_lshift_func_uint8_t_u_s(((((*l_432) = (safe_sub_func_int32_t_s_s(l_431, ((*l_365) = 0xD0766773L)))) < (l_433 != l_365)) <= g_14), (*g_13))) & 0xE282L)) > l_412) , 1L)) < 0L)) , (void*)0) != (void*)0)), 0x2AL)) == 0x51754D42L) , g_35.f2) , (void*)0) != (**g_234));
                for (g_68 = 0; (g_68 <= (-16)); g_68 = safe_sub_func_uint16_t_u_u(g_68, 1))
                {
                    if (l_436)
                        break;
                }
            }
            (*g_280) = (***g_234);
        }

    }
    else
    {
        int l_439 = 0x1FB380E9L;
        char *l_444 = (void*)0;
        char *l_445 = (void*)0;
        char *l_446 = &g_447;
        unsigned l_448 = 1UL;
        int l_483[10] = {(-1L), (-1L), 1L, (-1L), (-1L), 1L, (-1L), (-1L), 1L, (-1L)};
        union U2 l_494[6][3][1] = {{{{0}}, {{0}}, {{0}}}, {{{0}}, {{0}}, {{0}}}, {{{0}}, {{0}}, {{0}}}, {{{0}}, {{0}}, {{0}}}, {{{0}}, {{0}}, {{0}}}, {{{0}}, {{0}}, {{0}}}};
        unsigned short l_537 = 65534UL;
        unsigned l_550 = 0x54495840L;
        unsigned l_551[4][5][5] = {{{0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}}, {{0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}}, {{0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}}, {{0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}, {0x0A5DA20AL, 0xA76984F4L, 0xAC62ED71L, 18446744073709551610UL, 8UL}}};
        int i, j, k;
        l_439 = (safe_rshift_func_uint8_t_u_u(1UL, p_32));
        if (((((void*)0 == &l_431) || (l_364[0] != ((*l_446) = ((((*g_13) = l_439) < p_31.f0) == ((safe_rshift_func_int8_t_s_s(p_30.f0, l_439)) || (safe_lshift_func_uint8_t_u_s(g_35.f1, (g_68 ^ l_363)))))))) == l_448))
        {
            (*g_235) = ((safe_add_func_uint32_t_u_u(g_111.f1, (0xCFL <= (0xD7626A35L == (l_448 >= 0x6AL))))) , (*g_235));
            (**g_234) = (void*)0;

            ;
        }
        else
        {
            unsigned l_455 = 5UL;
            int ***l_460 = &g_235;
            unsigned char l_505[1];
            char **l_513 = &l_444;
            char l_528[3][10] = {{0x37L, 0x37L, (-10L), 1L, 4L, 1L, (-10L), 0x37L, 0x37L, (-10L)}, {0x37L, 0x37L, (-10L), 1L, 4L, 1L, (-10L), 0x37L, 0x37L, (-10L)}, {0x37L, 0x37L, (-10L), 1L, 4L, 1L, (-10L), 0x37L, 0x37L, (-10L)}};
            char l_533 = 0x90L;
            int l_543 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_505[i] = 255UL;
            for (l_367.f0 = 0; (l_367.f0 <= 0); l_367.f0 += 1)
            {
                union U2 l_456[6] = {{0}, {0}, {0}, {0}, {0}, {0}};
                int l_479 = 0x10F4C153L;
                int i;
                (**g_307) = &p_30;
                for (g_68 = 1; (g_68 >= 0); g_68 -= 1)
                {
                    char ***l_457 = (void*)0;
                    char **l_459[9][4][7] = {{{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}, {{&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}, {&l_444, &l_445, &l_444, &l_446, &g_13, &l_444, &l_446}}};
                    char ***l_458 = &l_459[8][3][6];
                    unsigned short *l_463 = &g_36.f0;
                    unsigned *l_464 = &l_456[4].f1;
                    unsigned l_474 = 0x4EC3B35BL;
                    int l_478 = 0xFB86D640L;
                    union U3 l_488 = {0x685F5BD4L};
                    int i, j, k;
                    (*g_280) = (safe_add_func_uint8_t_u_u((~255UL), ((safe_mod_func_uint8_t_u_u(l_364[l_367.f0], l_455)) == l_364[0])));
                    (*l_458) = (l_456[4] , (void*)0);
                    (*g_280) = (((func_52(l_455, l_460) < ((((((safe_lshift_func_int8_t_s_u(((*g_152) , (!(((p_30.f0 , (l_463 == (void*)0)) <= (((*l_464) = (((&g_13 == &g_13) , (void*)0) != (void*)0)) , (*g_13))) ^ 0x4165C183L))), 3)) & l_364[l_367.f0]) <= p_33) & l_364[0]) >= p_31.f0) <= p_30.f1)) < 0x32FCL) , 6L);


                    for (g_447 = 0; (g_447 <= 1); g_447 += 1)
                    {
                        int l_476 = 0x5F65124DL;
                        unsigned *l_477 = &g_51;
                        int l_480 = 1L;
                        int i, j, k;
                        l_480 = (((safe_sub_func_uint32_t_u_u(((func_52((*g_13), (g_36 , p_34)) == (&g_13 == &g_13)) ^ ((*l_477) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((g_475[1][5][5] = ((g_471 | (safe_rshift_func_uint16_t_u_u((!1UL), 2))) ^ ((l_474 ^ 0x9E37ED42L) >= 0xC3L))), 6)), l_448)) != l_476))), l_478)) > l_476) ^ l_479);
                        (**l_460) = ((safe_add_func_uint8_t_u_u(func_52((l_483[3] ^ ((safe_add_func_uint8_t_u_u((p_30 , 255UL), ((((*g_280) = (safe_mod_func_int16_t_s_s(l_439, (0x3DF5L ^ ((l_488 , l_448) , (safe_add_func_uint16_t_u_u((l_479 <= (((g_491 == l_480) == l_476) , l_488.f0)), g_447))))))) ^ 4294967295UL) == l_476))) | p_30.f2)), &g_235), p_33)) , (**l_460));
                    }
                }


            }
            for (g_51 = 0; (g_51 <= 3); g_51 += 1)
            {
                short *l_492[5][2][10] = {{{&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}, {&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}}, {{&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}, {&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}}, {{&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}, {&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}}, {{&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}, {&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}}, {{&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}, {&l_363, &g_165[2], &l_363, &g_165[2], &g_165[2], &g_165[3], &g_165[3], (void*)0, (void*)0, &g_165[3]}}};
                int l_493 = 0xFA94C9DFL;
                unsigned char *l_520 = &l_505[0];
                unsigned char *l_527 = &g_471;
                unsigned char *l_529 = &g_100;
                unsigned short *l_530 = &g_90;
                int ****l_535 = (void*)0;
                int ****l_536[3][4];
                unsigned *l_538 = &l_367.f0;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_536[i][j] = &g_234;
                }
            }
            (**l_460) = ((((void*)0 != &l_445) , 0x02AE5898L) , (**l_460));
        }
        (*g_280) = p_30.f0;
    }

    for (g_36.f0 = 0; g_36.f0 < 1; g_36.f0 += 1)
    {
        l_364[g_36.f0] = 1UL;
    }
lbl_775:
    for (g_344 = 0; (g_344 < 18); g_344++)
    {
        short l_573 = 2L;
        union U1 ***l_578 = &g_308;
        int l_580 = 0x4ECF6A4AL;
        unsigned char l_581[6][8] = {{252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}, {252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}, {252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}, {252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}, {252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}, {252UL, 255UL, 0x52L, 1UL, 1UL, 0x52L, 255UL, 252UL}};
        union U0 l_611 = {0x17AFL};
        char *l_622 = &g_447;
        int l_637 = 7L;
        union U3 l_643 = {4294967295UL};
        int ***l_649 = &g_235;
        unsigned *l_690 = &g_506;
        short l_697 = 0L;
        int i, j;
    }
    for (g_51 = 0; (g_51 <= 1); g_51 += 1)
    {
        int *l_710 = &g_35.f2;
        int **l_709 = &l_710;
        int ***l_708 = &l_709;
        int ****l_711 = (void*)0;
        int l_724 = 0x6F17B303L;
        int ***l_728 = &g_235;
        union U0 l_731 = {65535UL};
        union U3 *l_743 = &g_141[0][2][4];
        union U2 *l_747[3];
        char *l_749 = &g_447;
        unsigned short l_770[8] = {0x0F8FL, 0x0F8FL, 65535UL, 0x0F8FL, 0x0F8FL, 65535UL, 0x0F8FL, 0x0F8FL};
        int i;
        for (i = 0; i < 3; i++)
            l_747[i] = &g_84[0];
        if (((g_712 = l_708) == l_713))
        {
            union U0 l_720 = {65531UL};
            union U1 ****l_721 = &g_307;
            if ((*g_280))
            {
                char l_722 = (-1L);
                if (((safe_add_func_uint8_t_u_u(func_52(((p_30 , (l_724 = (safe_add_func_int16_t_s_s(((p_30.f0 , (((*g_671) , (l_720 , (*g_567))) == l_721)) != ((l_720.f0 ^ (l_722 >= (p_32 , g_723))) , 0x43L)), l_720.f0)))) < p_31.f0), p_34), 1L)) >= l_634))
                {
                    for (g_100 = 0; (g_100 <= 1); g_100 += 1)
                    {
                        (*g_280) = 0xFC94CAD5L;
                        if ((*g_671))
                            break;
                    }
                    return &g_500;




                }
                else
                {
                    unsigned short l_727 = 0UL;
                    (**g_234) = func_37(p_32, l_724);
                    (*g_671) = func_52((safe_sub_func_uint8_t_u_u((l_727 == p_31.f0), (l_367 , g_531))), l_728);

                }

            }
            else
            {
                return l_399;




            }

            (*g_671) = 0xA1FEBA30L;
        }
        else
        {
            union U3 l_736 = {0xC2554D0EL};
            unsigned *l_741 = (void*)0;
            if (((*g_671) = (safe_lshift_func_int8_t_s_s((*g_13), (g_500 = (func_52(p_30.f1, &g_235) , p_31.f0))))))
            {
                union U3 **l_742[8][4] = {{(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}, {(void*)0, &g_152, &g_152, &g_152}};
                int l_744 = 0x7360FC2CL;
                union U1 *l_746 = &g_35;
                int i, j;
                l_743 = &g_141[0][2][4];
                if (l_744)
                    continue;

                for (g_36.f0 = 0; (g_36.f0 <= 1); g_36.f0 += 1)
                {
                    union U1 **l_745[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_745[i] = (void*)0;
                    l_746 = ((***l_415) = (**g_307));
                    if (g_14)
                        goto lbl_679;

                    (**g_234) = (**g_234);
                }

                ;
                if ((*g_671))
                    break;

            }
            else
            {
                unsigned *l_750 = (void*)0;
                for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
                {
                    union U2 **l_748 = &g_148;
                    (*l_748) = l_747[1];
                    return l_749;




                }
                (*g_280) = (l_750 != ((*l_743) , (void*)0));
            }

            p_30.f1 = (safe_rshift_func_uint16_t_u_s(((*g_148) , ((~(l_736.f0 > ((((safe_mod_func_int8_t_s_s(((g_100 = ((((l_736.f0 <= func_52(((((*g_280) = (p_31.f0 != (l_736.f0 <= 1L))) , (g_36 = (p_30 , p_31))) , (safe_lshift_func_uint8_t_u_s((p_31.f0 , 0UL), 7))), p_34)) < p_30.f2) != (-7L)) != 0x6FL)) | g_508), l_736.f0)) , 0x6B36D099L) , (**g_712)) == (**g_712)))) >= (-1L))), 7));

                    }

        ;
        for (l_731.f0 = 0; (l_731.f0 <= 1); l_731.f0 += 1)
        {
            int l_757 = 0x59AFB550L;
            int ***l_771 = &g_235;
            char *l_772[5][10] = {{&g_447, &g_14, &g_447, &g_14, &g_14, &g_447, &g_14, &g_447, &g_447, &g_447}, {&g_447, &g_14, &g_447, &g_14, &g_14, &g_447, &g_14, &g_447, &g_447, &g_447}, {&g_447, &g_14, &g_447, &g_14, &g_14, &g_447, &g_14, &g_447, &g_447, &g_447}, {&g_447, &g_14, &g_447, &g_14, &g_14, &g_447, &g_14, &g_447, &g_447, &g_447}, {&g_447, &g_14, &g_447, &g_14, &g_14, &g_447, &g_14, &g_447, &g_447, &g_447}};
            int i, j;
            p_30.f1 = ((*g_671) = ((*g_280) = ((((void*)0 == &l_714) == ((l_757 != p_31.f0) < g_475[0][0][5])) && (func_52(p_31.f0, ((*l_743) , ((*l_743) , p_34))) >= g_475[1][5][5]))));

                        if (p_30.f1)
            {
                int l_758[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_758[i] = 0xC00DCD10L;
                (*g_280) = l_758[0];
            }
            else
            {
                short *l_763 = &l_363;
                int l_764 = 0xCC41A555L;
                int l_769 = 0x983C1CCFL;
                char **l_773[10] = {(void*)0, (void*)0, &g_13, (void*)0, (void*)0, &g_13, (void*)0, (void*)0, &g_13, (void*)0};
                int i;
                if ((p_30.f1 | (((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_4, (((*l_763) = p_31.f0) >= (((((func_52((((l_764 == ((*g_13) = (safe_mod_func_uint16_t_u_u((p_33 && (safe_lshift_func_uint16_t_u_s((((l_769 = p_30.f1) == (func_52((l_757 = l_770[5]), l_771) , (*g_280))) | 1L), p_30.f0))), p_30.f2)))) != 0x00C3BB9CL) < (-10L)), &g_235) , p_30.f1) | l_764) ^ p_30.f2) == 0xC0L) && 0x7A4ABA42L)))), p_33)) | 0x584FL) , p_31.f0)))
                {
                    for (g_723 = 0; (g_723 <= 7); g_723 += 1)
                    {
                        (**l_656) = (**g_234);
                        return l_772[4][3];




                    }
                    if ((l_769 & 1UL))
                    {
                        return &g_447;




                    }
                    else
                    {
                        return &g_500;




                    }
                }
                else
                {
                    char ***l_774 = &l_773[9];
                    (*l_774) = l_773[9];
                    p_30.f1 = 0xE1C9ABAEL;
                    for (l_724 = 1; (l_724 >= 0); l_724 -= 1)
                    {
                        return &g_447;




                    }
                }
                if (g_51)
                    goto lbl_775;

            }
        }
    }
    return l_399;



}







static int * func_37(short p_38, short p_39)
{
    unsigned short l_354 = 0xB11BL;
    int ***l_355 = &g_235;
    short *l_356 = (void*)0;
    short *l_357[10] = {&g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2], &g_165[2]};
    int i;
    (*g_280) = (l_354 > (p_39 = (+func_52(p_39, l_355))));
    return (**g_234);


}







static short func_52(char p_53, int *** p_54)
{
    short l_315 = 0L;
    short l_325[8] = {(-4L), (-4L), 0x6A63L, (-4L), (-4L), 0x6A63L, (-4L), (-4L)};
    union U1 l_339 = {8L};
    union U0 l_341 = {0x9D54L};
    int i;
    for (g_123 = 0; (g_123 != 2); g_123 = safe_add_func_uint8_t_u_u(g_123, 8))
    {
        char l_297 = 0xE8L;
        int l_316 = 0x04761DB4L;
        int l_332 = 0x7A2C82EAL;
        for (p_53 = 1; (p_53 <= 4); p_53 += 1)
        {
            union U1 l_309 = {0L};
            short *l_349 = &g_165[2];
            union U0 *l_352 = &g_36;
            union U0 **l_351 = &l_352;
            union U0 ***l_350 = &l_351;
            unsigned *l_353[4];
            int i;
            for (i = 0; i < 4; i++)
                l_353[i] = &g_77;
            for (g_90 = 0; (g_90 <= 4); g_90 += 1)
            {
                union U0 l_319[3] = {{0xF833L}, {0xF833L}, {0xF833L}};
                union U2 l_324 = {0};
                int i;
                if (g_165[g_90])
                {
                    (*g_280) = (*g_280);
                    l_297 = 1L;
                }
                else
                {
                    unsigned l_304[7][1] = {{0xCFFE95B6L}, {0xCFFE95B6L}, {0xCFFE95B6L}, {0xCFFE95B6L}, {0xCFFE95B6L}, {0xCFFE95B6L}, {0xCFFE95B6L}};
                    union U1 ***l_311 = &g_308;
                    union U1 ****l_310 = &l_311;
                    short *l_312 = (void*)0;
                    short *l_313 = (void*)0;
                    short *l_314 = &g_165[g_90];
                    int l_329 = 9L;
                    int i, j;
                    if (g_165[g_90])
                        break;
                    for (l_297 = 1; (l_297 >= 0); l_297 -= 1)
                    {
                        int i, j;
                        (*g_280) = g_165[g_90];
                        (*g_280) = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(l_304[5][0], (+p_53))) & l_297), p_53)), g_165[g_90]));
                    }
                    if ((((*g_280) = (((safe_rshift_func_int16_t_s_u(1L, 14)) >= ((p_53 || ((*l_314) = ((p_53 || (l_309.f1 = (g_307 == ((*l_310) = (l_309 , &g_308))))) > (&p_53 == &g_14)))) != p_53)) | g_3)) == l_297))
                    {
                        l_316 = (0xCFDD263AL | l_315);
                        if (l_309.f1)
                            break;
                        if ((*g_280))
                            continue;
                    }
                    else
                    {
                        unsigned *l_326[3][4] = {{(void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, &g_77}};
                        int l_327 = 1L;
                        int *l_328 = (void*)0;
                        union U1 l_333 = {-1L};
                        unsigned short l_338 = 0x7564L;
                        int i, j;
                        (*g_280) = ((l_304[4][0] < (safe_sub_func_int16_t_s_s(p_53, ((((((*g_148) , p_53) | (l_319[0] , (safe_lshift_func_int16_t_s_s((0x8DD4A245L <= ((p_53 , ((l_327 = (l_309.f1 == (((safe_mod_func_int32_t_s_s((l_324 , 0xE8F17475L), (*g_280))) <= l_325[0]) , 0xED1A0956L))) > (-3L))) > g_14)), 10)))) , 5UL) , 0xBDL) <= l_325[5])))) ^ g_3);

                        ;
                        l_329 = ((*g_280) = (g_141[0][2][4].f0 , l_316));
                        (*g_280) = (safe_mod_func_uint32_t_u_u(0xDD26E86EL, (l_332 || ((((l_333 , 0x39D7C7F5L) != (l_329 = l_325[6])) ^ p_53) , (((safe_rshift_func_int16_t_s_u((l_325[0] >= (safe_rshift_func_int16_t_s_u(((l_338 < g_90) & 1L), g_77))), g_3)) > l_333.f2) ^ l_316)))));
                    }

                                        ;
                }

                ;
                return p_53;
            }
            if (p_53)
                break;
            if (l_309.f0)
                break;
            (*g_280) = ((l_332 = ((l_339 , g_340) != ((*l_350) = (((l_341 , (safe_lshift_func_uint8_t_u_u((((g_344 > 0x8FC1D73CL) & (((*l_349) = (safe_add_func_int8_t_s_s(0L, ((safe_lshift_func_int16_t_s_u((!(l_316 = l_297)), 0)) , ((p_53 | p_53) <= 0xEF33L))))) || l_309.f0)) == g_3), 3))) != g_66) , (void*)0)))) >= l_297);

            ;
        }
    }
    return l_339.f1;
}







static int *** func_56(union U0 p_57, char p_58)
{
    int *l_194 = &g_111.f1;
    union U1 **l_202 = &g_110[3][0][1];
    int l_207 = 4L;
    unsigned short l_233[8] = {0xD23FL, 0x9378L, 0xD23FL, 0x9378L, 0xD23FL, 0x9378L, 0xD23FL, 0x9378L};
    unsigned l_243 = 0xC986ED9DL;
    char l_268[4] = {(-1L), 2L, (-1L), 2L};
    int ***l_292[4];
    int i;
    for (i = 0; i < 4; i++)
        l_292[i] = &g_235;
    for (p_57.f0 = 0; (p_57.f0 > 58); p_57.f0++)
    {
        int l_78 = 4L;
        union U3 l_81 = {0x5841EC3DL};
        short ***l_187 = (void*)0;
        short ***l_188[3];
        int l_197[1];
        int l_208[4][7][5] = {{{(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}}, {{(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}}, {{(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}}, {{(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}, {(-1L), 0x9A3684EDL, 9L, 5L, 0L}}};
        int **l_226 = &g_17;
        int ***l_225[5] = {(void*)0, &l_226, (void*)0, &l_226, (void*)0};
        unsigned char l_275 = 0x32L;
        int ***l_290 = &l_226;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_188[i] = &g_185;
        for (i = 0; i < 1; i++)
            l_197[i] = 1L;
        for (g_4 = 20; (g_4 < (-8)); --g_4)
        {
            int *l_65 = &g_66;
            int *l_67 = &g_68;
            unsigned *l_76 = &g_77;
            (*l_67) = ((*l_65) = (safe_unary_minus_func_int16_t_s(p_58)));
        }

        g_185 = g_185;
        for (l_78 = 0; (l_78 > 5); ++l_78)
        {
            unsigned short *l_203 = &g_90;
            int *l_204 = &g_66;
            short ***l_211[7][4][8] = {{{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}, {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}}};
            short l_218 = 0x7806L;
            union U3 *l_239[5];
            int ***l_291 = &l_226;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_239[i] = (void*)0;
            for (g_66 = 0; (g_66 > (-20)); --g_66)
            {
                int *l_193 = (void*)0;
                int **l_195 = (void*)0;
                int **l_196 = &g_17;
                (*l_196) = (l_194 = l_193);

                ;
                ;
                l_197[0] = g_35.f1;
            }
        }

        ;
        ;
        return &g_235;


    }
    (*g_17) = ((safe_unary_minus_func_uint16_t_u(p_57.f0)) & (*g_13));
    (*g_280) = (**g_235);
    return &g_235;


}







static union U1 func_69(int p_70, int p_71)
{
    int l_88[8] = {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L};
    int *l_107 = &g_35.f1;
    union U0 l_128 = {0xE7B9L};
    union U1 l_155 = {0xF403320DL};
    union U3 *l_179 = &g_141[0][3][5];
    int **l_184 = &g_17;
    int i;
    for (g_66 = (-21); (g_66 < (-5)); g_66 = safe_add_func_uint16_t_u_u(g_66, 6))
    {
        int *l_89[3][2] = {{&g_68, &g_68}, {&g_68, &g_68}, {&g_68, &g_68}};
        union U3 *l_140[10][1] = {{&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}, {&g_141[0][2][4]}};
        union U0 l_153 = {0x2E7EL};
        union U1 *l_159 = &g_111;
        int i, j;
        for (p_71 = 0; (p_71 <= 2); p_71 += 1)
        {
            int *l_85 = &g_68;
            (*l_85) = 0L;
            (*l_85) = (safe_lshift_func_int16_t_s_s(l_88[5], 1));
        }
        g_68 = p_70;
        if (p_71)
        {
            int l_95[1];
            unsigned *l_98 = &g_77;
            unsigned char *l_99[1][1][8] = {{{&g_100, (void*)0, &g_100, (void*)0, &g_100, (void*)0, &g_100, (void*)0}}};
            int l_101 = 1L;
            int l_106 = 0x2D83ED35L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_95[i] = 0x0C90B22FL;
            if (((g_90 = (g_36.f0 && p_70)) && (l_101 = ((g_68 = (p_71 >= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(0xD1L, l_95[0])), 0x6EA11B98L)))) ^ (safe_sub_func_int32_t_s_s(0L, ((*l_98) = (l_89[2][1] != (void*)0))))))))
            {
                union U0 *l_102[9][10] = {{&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}, {&g_36, (void*)0, &g_36, (void*)0, &g_36, &g_36, &g_36, &g_36, (void*)0, &g_36}};
                union U0 **l_103 = &l_102[7][4];
                int i, j;
                (*l_103) = l_102[7][4];
            }
            else
            {
                p_71 = (~(p_71 == p_70));
                for (l_101 = 9; (l_101 < 19); l_101 = safe_add_func_int32_t_s_s(l_101, 3))
                {
                    l_106 = 0x08D8AE6FL;
                }
            }
            if (p_70)
                continue;
        }
        else
        {
            int **l_108 = &l_107;
            union U1 *l_109[2][8][5] = {{{&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}}, {{&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}}};
            union U0 **l_118 = (void*)0;
            int i, j, k;
            if (((((*g_17) <= p_70) , l_89[0][0]) != ((*l_108) = l_107)))
            {
                unsigned l_119 = 0x0E064424L;
                unsigned l_125 = 1UL;
                union U0 l_126[6][7][2] = {{{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}, {{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}, {{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}, {{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}, {{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}, {{{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}, {{0x7388L}, {0x7388L}}}};
                int i, j, k;
                g_110[3][0][1] = l_109[0][0][4];
                for (g_14 = 0; (g_14 <= (-10)); --g_14)
                {
                    unsigned char *l_114[8][7][4] = {{{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}, {{(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}, {(void*)0, &g_100, &g_100, (void*)0}}};
                    int l_115 = (-3L);
                    short *l_122 = &g_123;
                    unsigned l_124[6][2][9] = {{{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}, {{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}, {{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}, {{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}, {{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}, {{18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}, {18446744073709551615UL, 0x358AE84CL, 6UL, 0x691EA77CL, 0xA15942FCL, 18446744073709551609UL, 0x6DD9FC9CL, 0x691EA77CL, 0x706703C0L}}};
                    union U0 *l_130[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_130[i] = &g_36;
                    if (((g_84[0] , (((+((l_115 = p_70) < (g_36 , ((((((safe_rshift_func_int8_t_s_s((((void*)0 == l_118) < ((**l_108) || (l_119 , ((*g_13) == (safe_rshift_func_int16_t_s_u(((*l_122) = g_66), l_124[5][0][8])))))), (*g_13))) != p_70) && p_70) ^ 0x0ED6L) >= g_68) , p_71)))) > g_35.f0) | (**l_108))) && l_125))
                    {
                        union U0 *l_127[2][2];
                        unsigned *l_129 = &g_77;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_127[i][j] = &l_126[3][6][1];
                        }
                        g_111.f1 = (p_71 & ((p_71 >= (((*l_122) = (g_36 , ((l_124[0][0][5] & (((l_128 = l_126[0][2][1]) , (void*)0) == ((*l_108) = &l_115))) & (((*l_129) = (l_88[5] , 0xAAF263C5L)) == l_88[5])))) >= g_111.f2)) & l_119));

                        ;
                    }
                    else
                    {
                        union U0 **l_131 = &l_130[0];
                        (*l_131) = l_130[1];
                        (*l_108) = &g_4;

                        ;
                        p_71 = 0L;
                    }

                    ;
                    for (l_115 = 8; (l_115 >= 0); l_115 -= 1)
                    {
                        g_68 = (p_70 , (safe_rshift_func_int16_t_s_u(8L, 8)));
                        g_111.f1 = (*g_17);
                        g_68 = 0x745D28D4L;
                        if ((**l_108))
                            break;
                    }
                    (*l_108) = &p_71;

                    ;
                }
                for (l_128.f0 = 0; (l_128.f0 <= 6); ++l_128.f0)
                {
                    int l_138 = 0x224620E0L;
                    union U3 **l_142 = &l_140[6][0];
                    for (g_90 = 0; (g_90 <= 1); g_90 += 1)
                    {
                        int i, j;
                        if (p_70)
                            break;
                    }
                    for (l_125 = 19; (l_125 == 14); l_125--)
                    {
                        int **l_139 = &l_89[2][1];
                        l_138 = l_126[0][2][1].f0;
                        (*l_139) = ((*l_108) = &g_3);

                        ;
                    }
                    (*l_142) = l_140[6][0];
                }


                for (l_119 = 0; (l_119 < 28); ++l_119)
                {
                    union U2 **l_145 = (void*)0;
                    union U2 *l_147 = &g_84[2];
                    union U2 **l_146[10][5] = {{&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}, {&l_147, &l_147, &l_147, &l_147, &l_147}};
                    int i, j;
                    g_148 = &g_84[0];
                    for (l_125 = 18; (l_125 > 14); l_125--)
                    {
                        union U3 *l_151 = &g_141[0][2][0];
                        g_152 = l_151;
                    }
                }
            }
            else
            {
                short l_154[7];
                int l_183 = 0x9CAE7AD8L;
                int i;
                for (i = 0; i < 7; i++)
                    l_154[i] = 0L;
                if ((*g_17))
                    break;
                p_71 = ((l_153 , (g_111.f1 , (l_154[0] , l_155))) , ((-5L) >= (*l_107)));
                if ((*g_17))
                {
                    unsigned char *l_156[9] = {&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100};
                    union U1 **l_160 = &g_110[4][1][1];
                    int l_169 = 1L;
                    unsigned l_173 = 1UL;
                    int i;
                    if (((g_100 = 0x0BL) < (((g_35.f1 , (safe_add_func_uint16_t_u_u(((g_35.f1 , &l_155) != ((*l_160) = l_159)), g_66))) != (g_165[2] = ((safe_mod_func_uint16_t_u_u(65526UL, (g_141[0][2][4].f0 , (safe_mod_func_int16_t_s_s((p_71 <= (*l_107)), (**l_108)))))) > 0x4EL))) > g_77)))
                    {
                        union U3 l_172[1] = {{4294967286UL}};
                        int l_178 = 1L;
                        union U3 **l_180 = &l_179;
                        int i;
                        g_111.f1 = 0x08C720A7L;

                        g_68 = (*g_17);
                        l_178 = (g_68 = (((safe_add_func_uint8_t_u_u((g_100 = (safe_unary_minus_func_uint32_t_u((*l_107)))), (((l_169 | ((safe_add_func_uint16_t_u_u((((l_172[0] , l_173) <= p_70) , (g_90 = (safe_add_func_uint32_t_u_u((p_70 != g_111.f0), (safe_rshift_func_int16_t_s_u(l_154[0], 4)))))), ((p_70 > (*g_17)) > g_35.f2))) == p_70)) != 3L) , p_70))) > 0xE2A24FF4L) || (*g_13)));
                        (*l_180) = (((*g_13) < (g_165[2] >= ((g_141[0][2][4].f0 = (**l_108)) < (*g_17)))) , l_179);
                    }
                    else
                    {
                        (*l_108) = &p_71;

                        ;
                    }

                    l_183 = (p_71 = (l_169 = (safe_sub_func_int16_t_s_s((-7L), p_71))));
                }
                else
                {
                    for (g_90 = 0; (g_90 <= 1); g_90 += 1)
                    {
                        return l_155;


                                            }
                    for (g_14 = 2; (g_14 >= 0); g_14 -= 1)
                    {
                        if ((*g_17))
                            break;
                        g_111.f1 = (*g_17);

                    }
                }

            }


        }


    }

    ;
    (*l_184) = l_107;

    ;
    return l_155;



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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_141[i][j][k].f0, "g_141[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_165[i], "g_165[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_475[i][j][k], "g_475[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_691[i], "g_691[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1021[i][j][k], "g_1021[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1082[i][j][k], "g_1082[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1084[i], "g_1084[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1169.f0, "g_1169.f0", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
