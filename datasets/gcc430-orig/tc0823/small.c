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
   volatile unsigned f1;
   short f2;
};


static int g_2 = 0x52CB1363L;
static unsigned char g_7[9] = {0x5EL, 0x5EL, 0x5EL, 0x5EL, 0x5EL, 0x5EL, 0x5EL, 0x5EL, 0x5EL};
static unsigned short g_9 = 65531UL;
static int g_39 = 0x736EAE11L;
static unsigned short g_57 = 65532UL;
static int g_63[4][4][2] = {{{0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}}, {{0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}}, {{0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}}, {{0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}, {0xE206F6ECL, 0xD55A9D45L}}};
static int * volatile g_62 = &g_63[1][2][1];
static unsigned short *g_94 = &g_57;
static unsigned short *g_95 = &g_57;
static volatile int g_96[1][4] = {{(-9L), (-9L), (-9L), (-9L)}};
static int g_97 = 0xB79E2962L;
static char g_108 = (-6L);
static unsigned short g_110 = 0x85E6L;
static int g_138 = 0L;
static volatile char g_143 = 0x2BL;
static volatile char *g_142 = &g_143;
static volatile char **g_141 = &g_142;
static volatile char *** volatile g_144 = &g_141;
static short g_150 = 0xB93CL;
static unsigned g_183 = 0xBF16E3D7L;
static unsigned *g_182[8][9][3] = {{{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}, {{&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183}}};
static unsigned **g_185 = (void*)0;
static int g_186 = 0x293DA9ABL;
static unsigned g_197 = 0x639F120EL;
static volatile int *g_206 = &g_96[0][2];
static volatile int ** volatile g_205 = &g_206;
static unsigned char g_209 = 0UL;
static unsigned char *g_212 = (void*)0;
static union U0 g_231 = {7UL};
static union U0 *g_234 = (void*)0;
static union U0 ** volatile g_233[10] = {&g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234};
static volatile int ** volatile g_268 = &g_206;
static unsigned short *g_269 = (void*)0;
static unsigned char g_285 = 0x93L;
static unsigned g_337 = 4294967291UL;
static unsigned short g_379 = 0xCCBFL;
static char g_393 = 0x41L;
static unsigned short **g_403 = &g_95;
static unsigned short ***g_402[10][5] = {{&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}, {&g_403, &g_403, &g_403, &g_403, &g_403}};
static unsigned short ****g_401 = &g_402[8][2];
static int g_419 = (-1L);
static int *g_421 = &g_97;
static int **g_420[7] = {&g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421};
static int g_434 = 0x3CF38F01L;
static unsigned char g_438[7] = {0x7AL, 0x7AL, 0x31L, 0x7AL, 0x7AL, 0x31L, 0x7AL};
static short *g_490[9][7] = {{&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}, {&g_150, (void*)0, &g_150, &g_150, &g_150, (void*)0, &g_150}};
static short **g_489 = &g_490[4][1];
static short **g_494 = &g_490[0][5];
static volatile int ** volatile g_539 = &g_206;
static int ** volatile g_614 = &g_421;
static int ** volatile g_624[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int ** volatile g_660 = &g_421;
static unsigned g_666 = 0UL;
static unsigned g_686[3] = {0xC9B18893L, 0xC9B18893L, 0xC9B18893L};
static int ** volatile g_690[6] = {&g_421, &g_421, &g_421, &g_421, &g_421, &g_421};
static int ** volatile g_693 = &g_421;
static volatile unsigned short g_730[7] = {0x3137L, 0x3137L, 0x3137L, 0x3137L, 0x3137L, 0x3137L, 0x3137L};
static int ** volatile g_739 = &g_421;
static short g_748 = 0x15A8L;
static int ** volatile g_796 = (void*)0;
static int ** volatile g_797[8] = {&g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421};
static int *g_808[5][1][9] = {{{&g_434, &g_419, (void*)0, &g_419, &g_419, (void*)0, (void*)0, &g_434, (void*)0}}, {{&g_434, &g_419, (void*)0, &g_419, &g_419, (void*)0, (void*)0, &g_434, (void*)0}}, {{&g_434, &g_419, (void*)0, &g_419, &g_419, (void*)0, (void*)0, &g_434, (void*)0}}, {{&g_434, &g_419, (void*)0, &g_419, &g_419, (void*)0, (void*)0, &g_434, (void*)0}}, {{&g_434, &g_419, (void*)0, &g_419, &g_419, (void*)0, (void*)0, &g_434, (void*)0}}};
static int **g_807 = &g_808[1][0][3];
static volatile unsigned char g_828 = 0x5DL;
static volatile unsigned char * volatile g_827 = &g_828;
static volatile unsigned char * volatile *g_826 = &g_827;
static volatile unsigned char * volatile **g_825 = &g_826;
static union U0 ** volatile g_831[8] = {&g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234, &g_234};
static union U0 ** volatile g_847 = &g_234;
static union U0 **g_873 = &g_234;
static union U0 ***g_872 = &g_873;
static volatile int ** volatile g_876 = &g_206;
static unsigned short g_888 = 65528UL;
static int ** volatile g_891[1] = {&g_421};
static int ** volatile g_902 = &g_421;
static int ** volatile g_903 = &g_421;
static int ** volatile g_918[9] = {&g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421, &g_421};
static union U0 g_930 = {3UL};
static int ** volatile g_970 = (void*)0;
static int ** volatile g_971 = &g_421;
static int ** volatile g_1000 = &g_421;



static unsigned func_1(void);
static unsigned short * func_11(short p_12, unsigned short * p_13, unsigned short * p_14, unsigned short * p_15, unsigned short * p_16);
static unsigned short * func_17(unsigned short * p_18, int p_19, unsigned char p_20, unsigned short * p_21, char p_22);
static int func_30(unsigned p_31, unsigned p_32, int * p_33, int * p_34, int p_35);
static int func_47(int p_48, int p_49, unsigned short * p_50);
static unsigned short * func_51(char p_52, unsigned char p_53, unsigned short * p_54, int * p_55);
static int * func_58(unsigned short * p_59, unsigned p_60);
static unsigned char func_72(int * p_73, int p_74, int p_75);
static char func_79(int p_80, unsigned short * p_81, unsigned short * p_82, int p_83, unsigned char p_84);
static int func_85(unsigned short * p_86, unsigned short * p_87, int * p_88, unsigned short * p_89);
static unsigned func_1(void)
{
    int l_944 = 8L;
    unsigned short *l_965 = &g_379;
    int l_967 = 1L;
    int l_981 = (-8L);
    unsigned char **l_994[5][1] = {{&g_212}, {&g_212}, {&g_212}, {&g_212}, {&g_212}};
    int i, j;
    for (g_2 = 0; (g_2 < (-24)); --g_2)
    {
        int l_5 = 0x53072226L;
        int *l_6[7];
        int l_945 = 2L;
        unsigned short *l_949 = &g_379;
        volatile int *l_969 = (void*)0;
        short l_972 = 0x4075L;
        int i;
        for (i = 0; i < 7; i++)
            l_6[i] = &l_5;
        g_7[8] = l_5;
        for (l_5 = 0; (l_5 <= 6); l_5 += 1)
        {
            unsigned short *l_8[10][2] = {{&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}, {&g_9, &g_9}};
            int l_10 = 0x69F4981FL;
            int l_25 = 0x09B37D02L;
            char *l_946 = &g_393;
            char *l_947[2][6][2] = {{{&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}}, {{&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}}};
            int l_948 = 1L;
            volatile int **l_968 = (void*)0;
            int i, j, k;
            l_967 = ((l_10 = g_7[8]) != (g_2 <= ((&g_9 != ((*g_403) = func_11(g_2, func_17(&g_9, ((l_948 = (safe_mod_func_int8_t_s_s(l_25, (safe_rshift_func_int8_t_s_u(((g_7[3] < (safe_sub_func_int8_t_s_s(((*l_946) = (((((func_30(g_7[8], g_7[8], l_6[l_5], &g_2, g_2) & 0xC3D62134L) & l_944) == g_7[8]) & 0x46D2L) ^ l_945)), g_7[8]))) ^ l_944), 3))))) < 1L), l_944, l_949, g_379), l_965, l_965, l_949))) ^ l_944)));

            ;
            ;
            l_969 = (*g_876);

            ;
            (*g_971) = &l_5;

            ;
        }

        ;
        ;
        ;
        ;
        return l_972;


    }
    if ((safe_mod_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(l_967, ((safe_add_func_uint16_t_u_u(0x6BCEL, l_967)) > ((l_944 < (**g_826)) < g_108)))), (safe_lshift_func_uint8_t_u_u(l_981, l_967)))))
    {
        unsigned short l_989 = 0x3AFEL;
        unsigned char **l_995 = &g_212;
        unsigned char ***l_996 = &l_995;
        int *l_997 = &g_39;
        for (g_110 = (-18); (g_110 >= 1); g_110++)
        {
            unsigned short **l_984 = &l_965;
            int l_990[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_990[i][j] = (-1L);
            }
            l_984 = l_984;
            for (g_209 = 20; (g_209 <= 8); g_209 = safe_sub_func_uint32_t_u_u(g_209, 8))
            {
                (*g_206) = (**g_971);
                (*g_421) &= 0L;
                for (g_419 = 4; (g_419 >= 0); g_419 -= 1)
                {
                    return l_981;
                }
                if ((**g_739))
                    continue;
            }
            (*g_206) &= (safe_mod_func_int32_t_s_s(l_989, l_990[0][2]));
        }
        (*g_206) = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(func_30(l_989, g_379, (*g_971), &l_967, l_981))), (l_994[2][0] == ((*l_996) = l_995))));
        l_997 = &l_967;

        ;
    }
    else
    {
        for (g_888 = 0; (g_888 >= 26); g_888++)
        {
            return l_981;
        }
    }
    (*g_1000) = &l_981;

    ;
    return l_967;


}







static unsigned short * func_11(short p_12, unsigned short * p_13, unsigned short * p_14, unsigned short * p_15, unsigned short * p_16)
{
    unsigned short *l_966 = &g_110;
    (**g_205) ^= p_12;
    return l_966;


}







static unsigned short * func_17(unsigned short * p_18, int p_19, unsigned char p_20, unsigned short * p_21, char p_22)
{
    unsigned char *l_954 = &g_438[0];
    int l_955 = (-9L);
    union U0 ***l_956 = &g_873;
    union U0 ****l_957 = &l_956;
    union U0 **l_959 = (void*)0;
    int l_960 = (-1L);
    int l_961[5][6];
    unsigned ***l_962 = &g_185;
    unsigned **l_963 = (void*)0;
    unsigned short *l_964 = &g_930.f0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_961[i][j] = 0xC9917180L;
    }
    l_961[1][3] = (safe_div_func_uint16_t_u_u(((*g_94) = (0xE7L > ((safe_add_func_uint32_t_u_u((1L == (((void*)0 != (*g_825)) && ((*l_954) = 0UL))), ((l_955 ^= 0xC975L) < (&g_233[7] == ((*l_957) = l_956))))) != (safe_unary_minus_func_uint32_t_u(((((((void*)0 != l_959) >= (*p_21)) | l_960) ^ p_22) & 1UL)))))), p_19));
    (*g_206) &= (((*l_962) = &g_182[3][4][0]) == (l_963 = (void*)0));

    ;
    return l_964;


}







static int func_30(unsigned p_31, unsigned p_32, int * p_33, int * p_34, int p_35)
{
    short l_36[6] = {(-8L), 0x1EBCL, (-8L), 0x1EBCL, (-8L), 0x1EBCL};
    unsigned short *l_56 = &g_57;
    int *l_671 = (void*)0;
    int l_687[2];
    unsigned char **l_691[7] = {(void*)0, (void*)0, &g_212, (void*)0, (void*)0, &g_212, (void*)0};
    unsigned l_735 = 0xDDAF0567L;
    short *l_791[1];
    short l_792 = 0x76D1L;
    int l_811 = 0L;
    short l_837 = (-1L);
    short l_842 = 5L;
    int i;
    for (i = 0; i < 2; i++)
        l_687[i] = (-8L);
    for (i = 0; i < 1; i++)
        l_791[i] = &g_748;
    for (p_35 = 4; (p_35 >= 0); p_35 -= 1)
    {
        int *l_37 = (void*)0;
        int *l_38 = &g_39;
        unsigned short *l_685 = &g_231.f0;
        char l_688[7][10][3] = {{{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}, {{0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}, {0x22L, (-9L), 0L}}};
        union U0 *l_694 = &g_231;
        short **l_700 = &g_490[4][1];
        char l_788 = 0x55L;
        int i, j, k;
        (*l_38) = 0x709E8E54L;
        for (p_32 = 0; (p_32 <= 5); p_32 += 1)
        {
            unsigned short *l_42 = &g_9;
            unsigned *l_663 = (void*)0;
            unsigned *l_664 = (void*)0;
            unsigned *l_665 = &g_666;
            unsigned char ***l_692 = &l_691[0];
            int i;
        }
        (*g_693) = p_33;
    }
    p_34 = &l_687[0];

    ;
    if (l_792)
    {
        int l_793 = 0x658E2194L;
        return l_793;
    }
    else
    {
        int *l_795 = &g_97;
        int l_802 = 1L;
        int *l_805 = (void*)0;
        int **l_804 = &l_805;
        union U0 *l_830 = &g_231;
        unsigned short l_853 = 1UL;
        char l_875[7][3][10] = {{{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}, {{3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}, {3L, (-1L), 1L, (-3L), 1L, (-1L), 3L, 0xD9L, 0x65L, 0xCAL}}};
        int **l_917 = (void*)0;
        int **l_919 = &l_671;
        int i, j, k;
        for (g_183 = 0; (g_183 <= 6); g_183 += 1)
        {
            int *l_798 = &l_687[0];
            unsigned *l_801 = &g_337;
            union U0 *l_846 = (void*)0;
            int l_852 = (-1L);
            char **l_859 = (void*)0;
            int l_911 = 8L;
            for (g_434 = 0; (g_434 <= 6); g_434 += 1)
            {
                int l_794[7][7] = {{1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}, {1L, 1L, 1L, 0xDC719B9AL, 1L, 0xA41B8758L, 1L}};
                int i, j;
                (*p_34) = l_794[0][1];
                p_34 = l_795;

                ;
            }
            if ((*l_795))
                break;
        }

        ;
        for (g_393 = 5; (g_393 >= 0); g_393 -= 1)
        {
            return (*g_206);
        }
        (*l_919) = p_34;

        ;
    }

    ;
    ;
    for (l_792 = 0; (l_792 <= (-9)); l_792 = safe_sub_func_uint32_t_u_u(l_792, 1))
    {
        union U0 *l_929 = &g_930;
        union U0 **l_928 = &l_929;
        int l_935 = 2L;
        union U0 ***l_936 = &g_873;
        char *l_939 = &g_108;
        int l_940 = 0xB6323780L;
        unsigned short **l_941 = &l_56;
        unsigned short ***l_942[6][1];
        unsigned short **l_943[10][4][1] = {{{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}, {{&g_95}, {&g_95}, {&g_95}, {&g_95}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_942[i][j] = &g_403;
        }
        l_940 &= (p_35 || (safe_sub_func_int8_t_s_s(((1UL >= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((***g_144) != ((**g_872) == ((*l_928) = (**g_872)))), 8)), (safe_div_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((l_935 = (g_438[0] = (*l_671))), ((*l_939) = ((((void*)0 == l_936) < (safe_add_func_uint16_t_u_u((*g_94), p_31))) ^ 0xE7EBBBC4L)))) > (*g_95)) < (*l_671)), p_35))))) && (*l_671)), p_35)));

        ;
        (*g_206) |= ((l_943[1][1][0] = l_941) != &l_56);
    }
    return (*g_62);
}







static int func_47(int p_48, int p_49, unsigned short * p_50)
{
    unsigned l_295 = 0xC5AEF02EL;
    union U0 **l_299[4][4][10] = {{{&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}}, {{&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}}, {{&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}}, {{&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}, {&g_234, (void*)0, &g_234, &g_234, &g_234, &g_234, (void*)0, &g_234, &g_234, &g_234}}};
    union U0 ***l_298 = &l_299[1][1][4];
    int *l_307 = &g_63[2][1][1];
    char l_318 = (-9L);
    unsigned short *l_320[9][3][3] = {{{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}, {{&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}, {&g_231.f0, &g_231.f0, (void*)0}}};
    unsigned char l_362 = 1UL;
    unsigned short ****l_391 = (void*)0;
    int *l_465 = (void*)0;
    unsigned short l_478[4][10][6] = {{{0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}}, {{0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}}, {{0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}}, {{0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}, {0xA410L, 0UL, 0x3322L, 0x8BA2L, 65535UL, 0xCC87L}}};
    unsigned char l_486[8][9][3] = {{{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}, {{248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}, {248UL, 0x40L, 0UL}}};
    short l_495[6] = {0xC810L, (-1L), 0xC810L, (-1L), 0xC810L, (-1L)};
    short **l_528 = (void*)0;
    char l_537 = (-1L);
    int *l_538 = &g_97;
    unsigned short *l_555 = &g_57;
    char *l_563[2][8][8] = {{{&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}}, {{&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}, {&l_537, &l_537, (void*)0, &l_537, &g_393, &g_393, &l_318, &l_318}}};
    char **l_562 = &l_563[1][1][1];
    char ***l_561 = &l_562;
    int l_566 = 0L;
    int *l_619 = &g_39;
    short l_647[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_647[i] = 0x2C17L;
    for (p_48 = 0; (p_48 == (-4)); --p_48)
    {
        for (g_108 = 0; (g_108 > (-9)); g_108 = safe_sub_func_uint16_t_u_u(g_108, 5))
        {
            int l_306[2][5];
            int l_331 = 0x0104BB76L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_306[i][j] = 0x6F29780FL;
            }
            for (g_39 = (-9); (g_39 != 9); g_39 = safe_add_func_uint32_t_u_u(g_39, 4))
            {
                int l_308 = 0xF4B0CF76L;
                int *l_311 = &g_39;
                unsigned short *l_319 = &g_110;
                int *l_321 = &g_138;
                char *l_328 = &l_318;
                unsigned *l_334 = &g_197;
                unsigned *l_335 = &g_183;
                int l_336 = 0x3E844557L;
                l_295 = ((void*)0 != &g_206);
                (*l_321) |= (safe_add_func_uint8_t_u_u(((void*)0 == l_298), ((!((safe_mod_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(l_306[1][0], 0x56F8913AL)) < (l_307 == (*g_268))) >= l_308) && (safe_add_func_uint8_t_u_u(func_79(func_72(l_311, (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((((7L >= p_49) == 0xA933L) >= p_48), (*p_50))), 3)), (*l_311))), l_318), l_319, l_320[1][0][0], g_183, p_49), p_49))), 6UL)) ^ 0x24D7EAAAL)) > p_49)));
                g_337 = (safe_rshift_func_int8_t_s_u((l_331 = (0x59ACL != (safe_sub_func_int8_t_s_s(((*l_328) &= (safe_rshift_func_int8_t_s_s((***g_144), 7))), (safe_sub_func_int8_t_s_s((*l_311), ((*l_321) > l_306[1][3]))))))), (safe_add_func_uint32_t_u_u(((*l_334) = p_48), (((*l_335) |= l_306[1][0]) | ((p_48 || (l_336 = (0xF4DBL || (*l_321)))) & g_150))))));
            }
        }
        if (p_48)
            break;
    }

    ;
    for (g_138 = 2; (g_138 >= 0); g_138 -= 1)
    {
        unsigned char l_341 = 255UL;
        int l_342 = 0x0481DE10L;
        unsigned short *l_409 = &g_379;
        unsigned short l_410 = 3UL;
        int **l_423 = &l_307;
        char *l_428 = &g_393;
        char **l_427[9][4] = {{&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}, {&l_428, &l_428, &l_428, &l_428}};
        char ***l_426 = &l_427[5][2];
        volatile int *l_475 = &g_96[0][2];
        short l_484 = 0xA9E3L;
        unsigned short *l_553 = (void*)0;
        union U0 *l_567 = &g_231;
        union U0 *l_568 = &g_231;
        unsigned char l_580 = 246UL;
        int i, j;
        for (g_110 = 0; (g_110 <= 2); g_110 += 1)
        {
            int **l_338 = (void*)0;
            int **l_339 = &l_307;
            char *l_340 = &g_108;
            int *l_345 = &g_39;
            short l_390 = (-1L);
            int l_461 = 1L;
            (*l_339) = (void*)0;

            ;
            (*g_206) = (l_342 = (((*l_340) ^= (&g_150 == (void*)0)) <= l_341));
            (*g_206) = ((*p_50) <= (safe_lshift_func_uint8_t_u_u(0x02L, 3)));
            if (((*l_345) = 0x794FBEF7L))
            {
                unsigned l_354[2][7][1] = {{{6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}}};
                short *l_361 = &g_231.f2;
                int l_382 = (-6L);
                int i, j, k;
                (*l_345) = (g_63[1][2][1] = 0x27C1FB03L);
                (*l_345) = (p_49 >= (safe_mod_func_int8_t_s_s(p_48, (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*l_361) = ((safe_div_func_uint8_t_u_u((p_48 && l_354[1][4][0]), ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((*p_50), g_96[0][2])) > (safe_sub_func_int8_t_s_s((&g_141 != (void*)0), p_49))), l_342)) & l_354[1][4][0]))) > 0x706E587CL)), (*l_345))), g_186)))));
                for (g_57 = 0; (g_57 <= 2); g_57 += 1)
                {
                    unsigned l_375 = 1UL;
                    int l_378 = 0x91035765L;
                    unsigned short l_380 = 0x7DB4L;
                    int *l_381[6][6] = {{&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}, {&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}, {&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}, {&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}, {&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}, {&g_63[3][3][1], &g_138, &l_378, &g_186, &g_186, &l_378}};
                    char *l_385 = &l_318;
                    char *l_392[8] = {&g_393, &g_393, &g_393, &g_393, &g_393, &g_393, &g_393, &g_393};
                    int i, j, k;
                    l_382 ^= (l_362 > ((+(safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((~l_354[1][4][0]), ((l_375 = (*p_50)) && p_49))), (((safe_div_func_uint16_t_u_u((p_49 | (p_48 == ((p_49 || ((*l_345) = (!(-1L)))) >= ((l_378 | g_379) != 0xB518L)))), l_378)) & l_378) | (*g_142)))), 0x2B84L)), 0x9BDBL)) && l_380), g_379)), l_341))) < p_49));
                    g_63[1][3][1] &= (p_49 <= (safe_sub_func_uint16_t_u_u((((*l_345) = ((*l_385) = ((*l_340) |= (*g_142)))) | g_7[8]), ((*l_361) &= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((*p_50) > l_390), (l_391 != (void*)0))), ((l_382 = g_183) || (g_138 && (-10L)))))))));
                    for (l_342 = 2; (l_342 >= 0); l_342 -= 1)
                    {
                        (*g_206) = (safe_add_func_int16_t_s_s(g_63[1][2][1], g_63[3][3][1]));
                        (*g_206) = l_354[1][4][0];
                    }
                    for (g_186 = 0; (g_186 <= 9); g_186 += 1)
                    {
                        unsigned char l_396 = 0x26L;
                        int l_404 = 0x51CD8F33L;
                        (**g_205) = l_396;
                        l_410 |= ((*l_345) = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(0x6B3C505BL, ((*p_50) | (p_48 != (l_404 = ((void*)0 == g_401)))))), 5)) >= ((func_72(&l_382, p_49, func_79((safe_mod_func_uint32_t_u_u(p_49, (safe_sub_func_int8_t_s_s(l_354[1][4][0], p_49)))), p_50, l_409, p_49, p_49)) > 0xCFE5L) ^ l_362)));

                        ;
                    }
                }


            }
            else
            {
                unsigned short l_415[1][3];
                int *l_418 = &g_419;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_415[i][j] = 0x45C8L;
                }
                (*l_345) &= ((func_72((*l_339), (!func_72(&g_63[2][2][0], p_48, (safe_lshift_func_int16_t_s_u((!l_342), 14)))), ((*l_418) |= (!((safe_rshift_func_int8_t_s_s(0x77L, (~l_415[0][1]))) != ((safe_lshift_func_uint16_t_u_u(l_342, 4)) ^ l_415[0][2]))))) == 0xB90CF8EDL) & l_415[0][1]);

                ;
            }
            for (p_49 = 9; (p_49 >= 0); p_49 -= 1)
            {
                int **l_425 = &g_421;
                int l_455 = 0xE4BF430DL;
                for (g_419 = 2; (g_419 <= 9); g_419 += 1)
                {
                    int ***l_422 = &g_420[0];
                    int ***l_424[4][7] = {{&l_423, &l_338, &l_339, &l_339, &l_338, &l_423, &l_338}, {&l_423, &l_338, &l_339, &l_339, &l_338, &l_423, &l_338}, {&l_423, &l_338, &l_339, &l_339, &l_338, &l_423, &l_338}, {&l_423, &l_338, &l_339, &l_339, &l_338, &l_423, &l_338}};
                    unsigned short *l_445 = &g_231.f0;
                    short *l_456 = &l_390;
                    int *l_470[8][9] = {{&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}, {&g_434, &g_434, &g_419, &g_434, &l_461, &g_434, &g_419, &g_434, &g_434}};
                    int i, j;
                    for (g_97 = 2; (g_97 >= 0); g_97 -= 1)
                    {
                        (*l_339) = l_307;
                        if ((**g_268))
                            continue;
                        (*l_345) = l_410;
                    }
                }
                for (g_186 = 8; (g_186 >= 0); g_186 -= 1)
                {
                    (*l_339) = (*l_425);

                    ;
                    l_475 = (*g_268);
                }
                (*g_421) = p_49;
            }

            ;
        }
        (*l_475) &= (safe_sub_func_uint16_t_u_u((*p_50), l_478[3][6][2]));
        for (l_318 = 2; (l_318 >= 0); l_318 -= 1)
        {
            short **l_493[3][7];
            int l_498 = 0x1829AB1FL;
            char *l_503[2];
            int *l_518 = &g_63[1][2][1];
            int *l_527[7][1];
            unsigned short *l_540[10] = {&g_379, &g_379, &g_379, &g_379, &g_379, &g_379, &g_379, &g_379, &g_379, &g_379};
            char l_542[5][3][6] = {{{0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}}, {{0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}}, {{0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}}, {{0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}}, {{0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}, {0x0DL, 1L, (-8L), 0x0BL, (-6L), (-1L)}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                    l_493[i][j] = &g_490[4][1];
            }
            for (i = 0; i < 2; i++)
                l_503[i] = &g_393;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_527[i][j] = &g_97;
            }
            for (g_108 = 0; (g_108 <= 2); g_108 += 1)
            {
                unsigned char l_485 = 0x10L;
                unsigned *l_487 = &g_197;
                short ***l_491 = (void*)0;
                short ***l_492 = &g_489;
                int l_512 = 0x1BCEC03AL;
                unsigned short *l_515 = (void*)0;
                (*g_421) = ((0x97L > (2L > (!(*g_421)))) ^ (p_49 < (p_49 < ((((*l_487) = ((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((**g_141) | 0x68L) < (((p_48 <= (safe_div_func_int8_t_s_s(0x93L, p_48))) == p_49) != l_484)))), l_485)) != l_486[3][2][2])) >= 0x971EFD2CL) != l_485))));
                for (g_379 = 0; (g_379 <= 2); g_379 += 1)
                {
                    unsigned **l_488 = &g_182[4][4][2];
                    if (p_49)
                        break;
                    (*l_475) |= ((~((void*)0 != l_488)) ^ l_485);
                    if (p_49)
                        continue;
                }
                if ((func_72(l_487, (((*l_492) = g_489) != (g_494 = l_493[0][0])), (l_495[5] >= (((*l_428) = (safe_rshift_func_uint16_t_u_u((p_48 == p_49), l_498))) & ((void*)0 == (*l_423))))) ^ 0x9E2CL))
                {
                    unsigned l_499 = 1UL;
                    int l_500[6][7][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                    unsigned l_511 = 0xAA95250DL;
                    int *l_516 = &g_63[1][2][1];
                    int i, j, k;
                    if ((l_499 = l_498))
                    {
                        return p_48;
                    }
                    else
                    {
                        if (p_49)
                            break;
                        if ((**g_205))
                            break;
                        (*g_206) = (0x2DL != (l_498 = (g_393 = l_500[4][5][0])));
                    }
                    for (g_150 = 6; (g_150 >= 0); g_150 -= 1)
                    {
                        int l_508 = (-1L);
                        int i;
                        (*l_475) ^= (((*g_141) == (l_503[0] = &g_108)) < (l_498 = (&g_438[(l_318 + 1)] == &g_438[6])));
                        l_511 ^= ((((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((g_7[8] != (***g_144)), ((+p_48) && (g_393 ^= l_508)))), 1L)) < (p_49 | 0x45L)) & (safe_rshift_func_int16_t_s_s(0x9566L, (p_49 || 0x64L)))) == p_49);
                        l_512 = (251UL == 0xB1L);
                    }
                    if (((*l_516) ^= ((*g_421) = ((func_72(l_465, g_197, g_209) | (safe_rshift_func_int8_t_s_s(((void*)0 != l_515), 5))) >= p_49))))
                    {
                        int *l_517 = &g_186;
                        l_517 = &l_512;

                        ;
                    }
                    else
                    {
                        return p_49;
                    }

                    ;
                    (*l_423) = (*l_423);
                }
                else
                {
                    int l_521 = (-10L);
                    if (p_48)
                        break;
                    l_518 = l_465;

                    ;
                    if ((((*l_475) > (+p_48)) < (safe_div_func_int32_t_s_s(l_521, p_48))))
                    {
                        return (**g_205);
                    }
                    else
                    {
                        (*l_475) = p_49;
                        if (l_521)
                            continue;
                    }
                }

                ;
                for (g_183 = 0; (g_183 <= 2); g_183 += 1)
                {
                    int l_524 = 0L;
                    int *l_536[10] = {(void*)0, (void*)0, &g_186, (void*)0, (void*)0, &g_186, (void*)0, (void*)0, &g_186, (void*)0};
                    int i;
                    if ((*g_206))
                    {
                        return (**g_268);
                    }
                    else
                    {
                        int *l_529 = &g_39;
                        int **l_530 = &l_529;
                        int *l_531 = &l_342;
                        (*g_421) &= ((safe_div_func_int32_t_s_s(p_48, (*g_206))) | p_49);
                        if (l_524)
                            break;
                        l_342 |= ((func_72((*l_423), (safe_div_func_int8_t_s_s(((*l_428) |= (p_48 != (func_72(l_527[0][0], (l_528 != (void*)0), (func_72((l_531 = ((*l_530) = l_529)), l_512, g_143) && 5UL)) || 0L))), 0x69L)), p_49) != 0xB8L) || p_48);

                        ;
                        ;
                    }

                    ;
                    if (func_72((*l_423), (~(safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_537 = (p_49 >= func_72(l_536[1], func_72(l_465, g_63[1][2][1], ((p_49 >= p_49) >= p_48)), g_419))), p_49)), p_48))), l_485))
                    {
                        l_512 ^= 0x38588B50L;
                    }
                    else
                    {
                        (*g_421) ^= ((**g_141) & 0x5BL);
                        (*g_206) = (**g_268);
                        return (*g_421);
                    }
                    for (p_49 = 2; (p_49 >= 0); p_49 -= 1)
                    {
                        (*g_421) = (&p_49 != (void*)0);
                        (*g_421) = p_49;
                        l_518 = l_538;

                        ;
                        (*g_539) = (*g_268);
                    }
                    if (p_49)
                        continue;
                }

                ;
            }


            ;
            if (func_79(((*g_401) != (void*)0), (*g_403), l_540[0], g_183, p_48))
            {
                char l_541 = 0L;
                unsigned short *l_550 = &g_57;
                l_541 = ((*l_538) = 1L);
                (*g_421) |= p_48;
                if ((*l_475))
                {
                    short l_551 = (-3L);
                    int l_558 = 4L;
                    int l_559[2][9][3] = {{{(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}}, {{(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}, {(-10L), (-1L), 1L}}};
                    int i, j, k;
                    (**g_539) = p_48;
                    (*l_538) &= 0x2C990645L;
                    l_542[4][2][4] |= (p_48 < p_48);
                    for (l_498 = 3; (l_498 <= 9); l_498 += 1)
                    {
                        int *l_543 = &g_97;
                        unsigned short *l_552 = &l_410;
                        int *l_554[7];
                        unsigned short l_556 = 0x2706L;
                        unsigned *l_557 = &g_337;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_554[i] = &g_434;
                        (*g_421) = p_49;
                        l_543 = l_538;
                        l_559[0][8][2] &= ((!0xEA820461L) || ((l_558 = (safe_add_func_int16_t_s_s(((-7L) < (+((*l_557) = (safe_div_func_uint16_t_u_u((func_79((0x6DL | (func_79((g_434 &= func_79((p_48 & ((func_79(p_48, l_550, func_51(l_551, p_48, p_50, &l_498), p_48, p_48) == p_48) ^ 65535UL)), l_552, l_553, p_48, p_48)), &l_410, l_555, p_48, l_556) <= l_551)), &l_556, &l_410, g_393, p_48) != (*p_50)), 0x4268L))))), l_551))) >= p_49));
                        if (p_49)
                            continue;
                    }
                }
                else
                {
                    unsigned l_560 = 18446744073709551615UL;
                    volatile int **l_569 = &l_475;
                    if (p_49)
                    {
                        (*g_206) = (l_342 = ((*g_421) = l_560));
                        if ((**g_539))
                            continue;
                        if ((**g_205))
                            continue;
                    }
                    else
                    {
                        int i;
                        l_566 &= (func_72(&l_498, (7UL ^ l_560), (&g_141 == l_561)) && (l_541 && (safe_mod_func_uint16_t_u_u(65528UL, (*p_50)))));

                        ;
                        if ((**g_268))
                            continue;

                        if (p_49)
                            continue;

                        l_568 = l_567;
                    }


                    (*l_569) = (*g_539);
                    if ((**g_205))
                        continue;

                }


            }
            else
            {
                unsigned l_579 = 0x2B7A4644L;
                union U0 *l_581 = &g_231;
                for (l_341 = 0; (l_341 <= 2); l_341 += 1)
                {
                    union U0 *l_570 = (void*)0;
                    int *l_571 = (void*)0;
                    int *l_572 = &g_434;
                    int l_575 = 0x73F00CB7L;
                    l_570 = l_567;

                    ;
                    (*l_538) = 0x755516C8L;
                    for (g_231.f0 = 0; (g_231.f0 <= 1); g_231.f0 += 1)
                    {
                        (*l_475) = p_49;
                    }

                    if (((p_48 | (!(func_79(((*l_572) |= g_197), p_50, p_50, g_379, p_49) <= (safe_rshift_func_uint8_t_u_u(l_575, 0))))) <= ((6L && 0xD690BDB1L) || p_49)))
                    {
                        char l_578 = (-1L);
                        (*g_206) = (l_580 &= (((func_79((safe_div_func_uint8_t_u_u(l_578, p_49)), &l_410, l_540[8], l_579, l_575) == 0x2AE3L) >= (((*p_50) >= 0x1FBAL) || p_48)) == (*p_50)));
                    }
                    else
                    {
                        (*g_421) = (((*l_538) != 0x20L) != (-4L));
                    }
                }
                l_568 = (l_581 = l_581);
            }


            for (g_97 = 2; (g_97 >= 0); g_97 -= 1)
            {
                int *l_582 = &g_39;
                short **l_585 = &g_490[4][1];
                (*l_423) = l_582;

                ;
                if (((*l_582) = (safe_lshift_func_uint16_t_u_s(((*p_50) = (+1UL)), 12))))
                {
                    int *l_586 = &g_186;
                    for (l_341 = 0; (l_341 <= 2); l_341 += 1)
                    {
                        l_585 = &g_490[4][1];
                    }
                    l_586 = (*l_423);

                    ;
                    (*l_586) = ((*l_538) == (*l_538));
                    for (g_186 = 0; (g_186 <= 2); g_186 += 1)
                    {
                        if (p_48)
                            break;
                        if ((*l_586))
                            break;
                        if ((*l_586))
                            continue;
                    }
                }
                else
                {
                    if ((**g_539))
                        break;
                }
            }
        }
    }


    ;
    for (g_231.f2 = 0; (g_231.f2 >= 4); ++g_231.f2)
    {
        unsigned l_589 = 0x988611E9L;
        unsigned *l_598 = (void*)0;
        int l_601 = 2L;
        int l_656 = 0xDF9F4E95L;
        int *l_657 = &l_566;
        if (l_589)
            break;
        for (g_110 = 21; (g_110 <= 38); g_110 = safe_add_func_uint16_t_u_u(g_110, 5))
        {
            short l_615 = 0xF4DDL;
            unsigned short *l_620 = (void*)0;
            int l_621 = 0x00CAAE84L;
            int l_622[8][3][3] = {{{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}, {{0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}, {0x03551288L, (-1L), 0x091BE74AL}}};
            char **l_626 = &l_563[0][7][4];
            unsigned short ****l_633 = (void*)0;
            int l_642 = 0L;
            int i, j, k;
            for (g_108 = (-18); (g_108 >= 24); g_108 = safe_add_func_int32_t_s_s(g_108, 3))
            {
                unsigned *l_599 = (void*)0;
                unsigned **l_600 = &l_599;
                unsigned char *l_604[8];
                unsigned char **l_606 = (void*)0;
                unsigned char ***l_605 = &l_606;
                int l_607[5];
                int i;
                for (i = 0; i < 8; i++)
                    l_604[i] = &l_486[3][2][2];
                for (i = 0; i < 5; i++)
                    l_607[i] = 0x4ADC43AAL;
            }
            (*l_619) = (**g_268);
        }
        (*l_657) ^= (!((safe_lshift_func_int16_t_s_s((l_656 = ((safe_rshift_func_uint16_t_u_u((((void*)0 == &g_402[8][2]) >= l_589), (l_601 ^= (*p_50)))) | (l_647[0] > ((*p_50) == (safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((g_393 = ((0xAAL < ((safe_mod_func_int8_t_s_s((((void*)0 != &g_490[4][1]) == p_49), 0xCCL)) >= (-10L))) ^ p_48)), (**g_141))) ^ p_48), (*g_421))))))), 6)) > (*l_619)));
        if (p_48)
            break;
    }
    if (((*l_619) && 9UL))
    {
        unsigned char l_658 = 246UL;
        int *l_659[7] = {&l_566, (void*)0, &l_566, (void*)0, &l_566, (void*)0, &l_566};
        int i;
        (*g_660) = l_659[1];

        ;
        (*l_619) &= 0xD1E715D1L;
    }
    else
    {
        union U0 *l_661[10][9] = {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}};
        int *l_662 = &g_138;
        int i, j;
        l_661[2][4] = l_661[2][4];
        l_662 = (*g_614);

        ;
        (*l_538) |= p_49;
    }

    ;
    return (*l_619);


}







static unsigned short * func_51(char p_52, unsigned char p_53, unsigned short * p_54, int * p_55)
{
    int l_288 = 0x85EC9B8CL;
    for (g_150 = 0; (g_150 > (-4)); g_150--)
    {
        (*g_206) ^= (*p_55);
        if (l_288)
            continue;
    }
    return &g_110;


}







static int * func_58(unsigned short * p_59, unsigned p_60)
{
    unsigned l_61 = 0x12CD0AB8L;
    int *l_76 = (void*)0;
    unsigned short *l_90 = &g_57;
    int *l_91 = &g_63[0][3][1];
    int **l_92 = &l_91;
    unsigned short **l_93[1][2][9];
    int l_284[4];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
                l_93[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 4; i++)
        l_284[i] = 0x47C4E963L;
    (*g_62) = l_61;
    g_285 |= (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_61 & ((-1L) <= ((~(safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((g_2 < (+func_72(l_76, (safe_rshift_func_int8_t_s_s(func_79(func_85(l_90, p_59, ((*l_92) = l_91), (g_95 = (g_94 = (void*)0))), p_59, g_269, p_60, p_60), 1)), g_7[8]))), g_7[4])) <= 0x25F03459L), p_60))) > l_284[3]))) || 3UL), p_60)) < p_60), p_60));

    ;
    ;
    ;
    ;
    (*l_92) = (*l_92);
    return &g_97;


}







static unsigned char func_72(int * p_73, int p_74, int p_75)
{
    union U0 **l_280 = &g_234;
    union U0 ***l_281 = &l_280;
    int *l_282 = (void*)0;
    int *l_283 = &g_97;
    (*l_281) = l_280;
    for (g_143 = 0; g_143 < 10; g_143 += 1)
    {
        g_233[g_143] = &g_234;
    }
    g_62 = p_73;


    (*l_283) &= (**g_205);
    return p_75;
}







static char func_79(int p_80, unsigned short * p_81, unsigned short * p_82, int p_83, unsigned char p_84)
{
    char l_273[2];
    int l_274[7];
    int l_275 = 0xA0CDF28EL;
    union U0 **l_276[8] = {&g_234, &g_234, (void*)0, &g_234, &g_234, (void*)0, &g_234, &g_234};
    union U0 *l_277[9] = {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231};
    int *l_279[5] = {(void*)0, &g_186, (void*)0, &g_186, (void*)0};
    int **l_278 = &l_279[0];
    int i;
    for (i = 0; i < 2; i++)
        l_273[i] = 0xD0L;
    for (i = 0; i < 7; i++)
        l_274[i] = 0xF3894AB4L;
    for (g_183 = 0; (g_183 != 42); g_183 = safe_add_func_uint32_t_u_u(g_183, 3))
    {
        int *l_272[2][5][5] = {{{&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}}, {{&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}, {&g_186, &g_63[2][1][0], &g_97, &g_186, &g_63[1][2][1]}}};
        int i, j, k;
        l_274[2] &= (l_273[1] &= (g_97 &= (**g_268)));
        g_63[1][2][1] ^= (*g_206);
        if (l_275)
            continue;
    }
    l_277[3] = (void*)0;


    (*l_278) = &l_274[2];


    (*g_206) ^= p_80;
    return (***g_144);
}







static int func_85(unsigned short * p_86, unsigned short * p_87, int * p_88, unsigned short * p_89)
{
    unsigned l_109 = 2UL;
    int l_112 = (-10L);
    int l_154 = 0x8D72D271L;
    unsigned short **l_194 = &g_94;
    unsigned short ***l_248 = &l_194;
    unsigned short ****l_247 = &l_248;
    int l_249 = 0x5BE74CFFL;
    short *l_258 = (void*)0;
    short *l_259 = &g_231.f2;
    unsigned char *l_260 = (void*)0;
    unsigned char *l_261 = (void*)0;
    unsigned char *l_262[4][10] = {{&g_7[8], &g_7[8], &g_7[8], (void*)0, (void*)0, (void*)0, &g_7[8], &g_7[8], &g_7[8], &g_7[8]}, {&g_7[8], &g_7[8], &g_7[8], (void*)0, (void*)0, (void*)0, &g_7[8], &g_7[8], &g_7[8], &g_7[8]}, {&g_7[8], &g_7[8], &g_7[8], (void*)0, (void*)0, (void*)0, &g_7[8], &g_7[8], &g_7[8], &g_7[8]}, {&g_7[8], &g_7[8], &g_7[8], (void*)0, (void*)0, (void*)0, &g_7[8], &g_7[8], &g_7[8], &g_7[8]}};
    int l_263[5] = {0x4DD8C9BAL, 0L, 0x4DD8C9BAL, 0L, 0x4DD8C9BAL};
    char *l_267 = &g_108;
    char **l_266 = &l_267;
    int i, j;
    for (g_57 = 0; (g_57 <= 1); g_57 += 1)
    {
        unsigned l_98 = 6UL;
        int l_111 = 2L;
        int l_151[5];
        int l_153 = 0x7324BB92L;
        unsigned l_202 = 0x381652B8L;
        int *l_214 = &l_111;
        int l_225[5] = {(-8L), 1L, (-8L), 1L, (-8L)};
        short *l_229 = (void*)0;
        union U0 *l_235[7][9] = {{&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}, {&g_231, &g_231, (void*)0, &g_231, &g_231, &g_231, (void*)0, &g_231, (void*)0}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_151[i] = (-4L);
        for (g_97 = 1; (g_97 >= 0); g_97 -= 1)
        {
            unsigned l_113 = 4294967292UL;
            if ((0xB0CEA4F5L & (*p_88)))
            {
                unsigned l_101[7][2] = {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}};
                int l_102 = (-4L);
                char *l_107[4][4] = {{&g_108, &g_108, &g_108, &g_108}, {&g_108, &g_108, &g_108, &g_108}, {&g_108, &g_108, &g_108, &g_108}, {&g_108, &g_108, &g_108, &g_108}};
                int i, j;
                (*p_88) |= (g_2 < (-5L));
                (*p_88) = (l_98 & (safe_rshift_func_uint16_t_u_u((l_102 = l_101[4][1]), ((safe_sub_func_uint16_t_u_u((l_111 = (g_110 = ((g_63[1][2][1] ^ (safe_div_func_int8_t_s_s(g_7[3], (l_109 |= 0x89L)))) != g_96[0][3]))), l_112)) != l_98))));
                if (l_113)
                    continue;
                (*p_88) ^= (safe_mod_func_int16_t_s_s(0x98EDL, l_101[0][0]));
            }
            else
            {
                unsigned l_116[8][2] = {{0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}, {0x748AADD0L, 0x748AADD0L}};
                int i, j;
                return l_116[7][1];
            }
            for (g_110 = 0; (g_110 <= 1); g_110 += 1)
            {
                int i, j, k;
                return g_63[(g_97 + 1)][g_97][g_110];
            }
        }
        for (g_97 = 0; (g_97 <= 1); g_97 += 1)
        {
            int *l_140 = &l_111;
            int **l_139 = &l_140;
            (*p_88) = 9L;
            for (l_98 = 0; (l_98 <= 0); l_98 += 1)
            {
                char *l_122[2];
                int l_135 = (-3L);
                int i;
                for (i = 0; i < 2; i++)
                    l_122[i] = (void*)0;
                for (l_111 = 0; (l_111 <= 1); l_111 += 1)
                {
                    for (l_112 = 1; (l_112 >= 0); l_112 -= 1)
                    {
                        char *l_121 = (void*)0;
                        char **l_123 = &l_122[1];
                        unsigned *l_136 = &l_109;
                        int *l_137 = &g_138;
                        int i, j, k;
                        (*l_137) ^= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((l_121 != ((*l_123) = l_122[0])) || (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((-10L))) >= ((*l_136) = ((!g_63[(l_98 + 2)][(g_57 + 1)][g_57]) > (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(250UL, (((safe_lshift_func_int16_t_s_u(g_96[l_98][(g_97 + 2)], 4)) <= (g_108 = (safe_sub_func_int8_t_s_s((-8L), (g_97 <= l_135))))) != 65535UL))), 0))))), (-1L)))) | 0x06L), 13)), g_39));
                    }
                }
            }
            (*l_139) = (void*)0;

            ;
            for (l_112 = 0; (l_112 <= 1); l_112 += 1)
            {
                short *l_149 = &g_150;
                int *l_152[10] = {&g_63[1][2][1], &g_2, &g_138, &g_138, &g_2, &g_63[1][2][1], &g_2, &g_138, &g_138, &g_2};
                unsigned char l_161 = 0x7EL;
                unsigned char *l_162 = &l_161;
                int i, j, k;
                (*g_144) = g_141;
                l_153 ^= (g_63[g_97][g_97][l_112] <= ((safe_mod_func_uint16_t_u_u((0x88L > (l_111 = 0x74L)), ((*l_149) = (safe_mod_func_int16_t_s_s((g_63[l_112][(g_57 + 2)][g_57] <= (*p_86)), l_109))))) >= ((l_151[1] = (l_98 | l_98)) < l_112)));
                if (l_154)
                    continue;
                if (((0x1546L & (safe_rshift_func_uint16_t_u_s((*p_86), 6))) ^ (safe_add_func_uint16_t_u_u((g_110 = (safe_lshift_func_uint8_t_u_s(((*l_162) = l_161), l_109))), (((*l_149) = ((l_112 != (-10L)) >= (safe_sub_func_uint32_t_u_u(((*g_144) != &g_142), (*p_88))))) <= g_39)))))
                {
                    unsigned l_165 = 4294967295UL;
                    int l_166 = 0xA2A823BFL;
                    (*p_88) &= (0L && l_165);
                    l_166 = (&g_62 == (void*)0);
                }
                else
                {
                    char l_167 = 0xACL;
                    int l_168 = 0L;
                    unsigned l_169 = 0x2422DCD2L;
                    (*p_88) = (*p_88);
                    l_167 ^= ((*p_88) = l_151[2]);
                    if (l_154)
                    {
                        l_168 ^= ((*p_88) = (*g_62));
                    }
                    else
                    {
                        l_169 &= (*g_62);
                        (*p_88) ^= (l_168 ^= (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_167, (*p_86))), g_96[0][0])));
                        (*l_139) = &g_63[1][1][1];

                        ;
                        if ((*g_62))
                            break;
                    }
                }
            }

            ;
        }
        if ((*p_88))
            break;
        for (l_154 = 0; (l_154 < (-26)); --l_154)
        {
            int *l_177 = &g_63[0][0][0];
            int **l_176 = &l_177;
            unsigned char *l_207[4][1][6] = {{{&g_7[8], &g_7[8], (void*)0, &g_7[8], &g_7[8], (void*)0}}, {{&g_7[8], &g_7[8], (void*)0, &g_7[8], &g_7[8], (void*)0}}, {{&g_7[8], &g_7[8], (void*)0, &g_7[8], &g_7[8], (void*)0}}, {{&g_7[8], &g_7[8], (void*)0, &g_7[8], &g_7[8], (void*)0}}};
            int i, j, k;
            if (((**g_141) ^ (0x7A5EL < ((&g_97 == ((*l_176) = &l_111)) || 0x44L))))
            {
                int l_189 = 0x7F8277DDL;
                for (g_108 = (-17); (g_108 != (-3)); g_108 = safe_add_func_int16_t_s_s(g_108, 1))
                {
                    unsigned **l_184 = &g_182[4][4][2];
                    int l_195 = 0x98C66518L;
                    if ((safe_lshift_func_int16_t_s_u(((4UL >= (**l_176)) || ((*l_177) |= ((0x858CL ^ g_39) != ((((*l_184) = g_182[4][4][2]) != (void*)0) != ((g_185 != (void*)0) | 0L))))), 4)))
                    {
                        char l_190 = (-4L);
                        unsigned short ***l_191 = (void*)0;
                        unsigned short **l_193 = &g_95;
                        unsigned short ***l_192 = &l_193;
                        unsigned short *l_196[8][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
                        short *l_198 = (void*)0;
                        int l_199 = 0xEFDF31C3L;
                        int i, j;
                        l_199 = ((**l_176) ^= ((*p_88) &= (((g_186 = (+l_154)) || (*g_142)) || ((l_195 = (+(g_150 &= (safe_mod_func_int8_t_s_s((0xC1B7L | ((l_190 = l_189) == (g_197 = (g_110 = (((((*l_192) = &p_89) != l_194) > (l_195 || l_151[1])) < ((l_189 < l_98) <= 0xBC50L)))))), l_151[1]))))) & (*p_86)))));

                        ;
                    }
                    else
                    {
                        (**l_176) ^= (safe_add_func_uint8_t_u_u(l_195, 0x7AL));
                        l_202 ^= (*g_62);
                    }
                    (**l_176) ^= 0x8C0F74BFL;
                }
                if ((*p_88))
                    continue;
                for (l_153 = 0; (l_153 >= 19); ++l_153)
                {
                    unsigned char *l_208[4][6] = {{(void*)0, &g_7[8], &g_209, &g_7[8], (void*)0, &g_7[8]}, {(void*)0, &g_7[8], &g_209, &g_7[8], (void*)0, &g_7[8]}, {(void*)0, &g_7[8], &g_209, &g_7[8], (void*)0, &g_7[8]}, {(void*)0, &g_7[8], &g_209, &g_7[8], (void*)0, &g_7[8]}};
                    unsigned char *l_211[7];
                    unsigned char **l_210 = &l_211[3];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_211[i] = &g_209;
                    (*g_205) = &g_96[0][2];
                }
                (*l_176) = p_88;

                ;
            }
            else
            {
                unsigned short l_219[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_219[i] = 0UL;
                (*l_177) |= (*g_206);
                for (g_138 = 0; (g_138 < 21); g_138++)
                {
                    unsigned **l_222 = &g_182[3][3][2];
                    (*l_176) = &l_151[3];

                    ;
                    (*l_214) = (safe_lshift_func_uint16_t_u_u((!(l_219[0] & ((0x57383A17L && (*l_214)) && ((void*)0 != &g_94)))), 15));
                    for (g_183 = 0; (g_183 < 45); g_183++)
                    {
                        g_185 = l_222;

                        ;
                        (*l_214) = (*p_88);
                    }
                }

                ;
            }

            ;
            g_138 |= (8L < ((((*l_214) < (l_225[1] & ((*l_177) <= l_154))) < (!(safe_unary_minus_func_int32_t_s(((6UL && ((*g_206) || (((void*)0 == l_229) < (**l_176)))) <= (*p_86)))))) <= 0L));
            for (g_108 = 1; (g_108 >= 0); g_108 -= 1)
            {
                union U0 *l_230[4] = {&g_231, &g_231, &g_231, &g_231};
                int l_240[6];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_240[i] = 0x3E451EC3L;
                for (g_138 = 0; (g_138 >= 0); g_138 -= 1)
                {
                    int i, j, k;
                    for (l_112 = 1; (l_112 >= 0); l_112 -= 1)
                    {
                        union U0 **l_232 = (void*)0;
                        int i, j, k;
                        if (g_63[(g_108 + 2)][g_57][g_138])
                            break;
                        g_96[g_138][(l_112 + 1)] = ((-1L) || g_63[l_112][(g_57 + 2)][l_112]);
                        l_235[1][2] = l_230[3];
                        l_151[g_57] = l_151[g_138];
                    }
                    g_96[g_138][(g_138 + 3)] = ((*p_88) = (l_151[(g_57 + 3)] |= g_63[(g_138 + 2)][(g_108 + 1)][g_57]));
                    for (l_98 = 0; (l_98 <= 1); l_98 += 1)
                    {
                        int i, j, k;
                        (*l_176) = &g_63[(g_108 + 2)][(g_57 + 1)][g_57];

                        ;
                        if (g_63[l_98][(l_98 + 2)][(g_138 + 1)])
                            break;
                        g_96[g_138][(g_108 + 2)] = 1L;
                        g_96[g_138][g_138] = (l_151[(g_57 + 1)] < (((safe_sub_func_int32_t_s_s((**g_205), (safe_sub_func_int32_t_s_s(((l_151[(g_57 + 3)] <= l_240[1]) == l_151[(g_57 + 3)]), (0xA6L | g_57))))) >= (*p_86)) == (safe_mod_func_uint16_t_u_u(l_151[(g_57 + 1)], (*l_177)))));
                    }
                }
                (*l_176) = &g_63[(g_108 + 1)][(g_57 + 2)][g_57];

                ;
            }
        }
    }

    ;
    l_249 |= (((*p_86) = 65535UL) != (safe_lshift_func_uint16_t_u_s((l_112 >= (safe_rshift_func_uint8_t_u_u((((*p_88) = ((&l_194 != ((*l_247) = &l_194)) <= g_2)) | 0x1C7C29BAL), l_154))), l_109)));
    (*g_206) = (safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((void*)0 != &l_248), (l_263[0] = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_96[0][2], ((*l_259) |= (&g_110 == (void*)0)))), ((g_209 = l_154) && g_183)))))) || l_112), (safe_mod_func_uint16_t_u_u((l_249 = (l_266 == &l_267)), 0x8212L))));

    (*g_268) = (*g_205);
    return g_57;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_96[i][j], "g_96[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_438[i], "g_438[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_666, "g_666", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_686[i], "g_686[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_730[i], "g_730[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_930.f0, "g_930.f0", print_hash_value);
    transparent_crc(g_930.f2, "g_930.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
