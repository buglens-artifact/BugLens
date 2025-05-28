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
   long long f0;
   const char f1;
   long long f2;
   signed f3 : 25;
};

union U1 {
   char * const f0;
   unsigned long long f1;
   unsigned long long f2;
   short f3;
};


static int g_2[1][9] = {{1L, 1L, 0x9AE77AB3L, 1L, 1L, 0x9AE77AB3L, 1L, 1L, 0x9AE77AB3L}};
static unsigned char g_17 = 255UL;
static char g_36 = (-1L);
static union U1 g_45 = {0};
static int g_46 = 0L;
static int g_49 = 7L;
static int g_53 = 1L;
static int *g_68 = &g_49;
static int **g_67[9][7] = {{&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, (void*)0, &g_68, &g_68}};
static char g_101 = 0xA6L;
static long long g_115 = 0x799D2B88D7C33F76LL;
static int g_135 = 0xE87AF14CL;
static char g_145[3][6] = {{0xB0L, (-9L), 0xB0L, (-9L), 0xB0L, (-9L)}, {0xB0L, (-9L), 0xB0L, (-9L), 0xB0L, (-9L)}, {0xB0L, (-9L), 0xB0L, (-9L), 0xB0L, (-9L)}};
static long long g_174 = 1L;
static int *g_176 = &g_49;
static long long **g_198 = (void*)0;
static unsigned short g_214 = 65535UL;
static int g_219 = 0L;
static union U0 g_224 = {0xC8D2176559580480LL};
static char *g_237 = &g_145[2][2];
static unsigned long long g_241 = 0x3A84A4CF50FF82F6LL;
static unsigned char g_247 = 0xC2L;
static short g_258 = 0x9685L;
static union U1 g_282 = {0};
static unsigned g_393[1] = {0x0F8A89E1L};
static unsigned char g_431 = 0x40L;
static unsigned short g_496 = 65534UL;
static const int g_514 = 0xF754E2FFL;
static const int g_516[4] = {0x0B8C623BL, 0L, 0x0B8C623BL, 0L};
static const int *g_515 = &g_516[3];
static union U1 g_523 = {0};
static union U1 *g_522 = &g_523;
static short *g_527 = &g_45.f3;
static short **g_526 = &g_527;
static union U1 **g_619 = &g_522;
static unsigned char *g_687 = &g_431;
static unsigned char **g_686 = &g_687;
static unsigned short g_713[3][3][10] = {{{0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}}, {{0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}}, {{0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}, {0xA17BL, 7UL, 0x0E35L, 0UL, 0xBC05L, 0UL, 1UL, 65535UL, 0x29B3L, 1UL}}};
static const union U0 g_806 = {0x02E0A437DADFC40ELL};
static union U0 g_874 = {-1L};
static int g_909 = 6L;
static const union U0 *g_1026 = &g_806;
static const union U0 ** const g_1025 = &g_1026;
static unsigned long long g_1044 = 4UL;
static char **g_1050 = &g_237;
static char ***g_1049 = &g_1050;
static unsigned long long g_1069 = 0UL;



static unsigned long long func_1(void);
static const int func_5(int * p_6, const int * p_7, int * p_8, int p_9, const long long p_10);
static int * func_11(int p_12, char * p_13, int * const p_14);
static long long func_18(int * p_19, unsigned p_20);
static union U1 * func_22(int * const p_23, unsigned short p_24, unsigned char p_25, int p_26);
static union U1 * func_30(char * p_31, unsigned long long p_32, char p_33, union U1 p_34);
static char func_37(int p_38);
static char * func_39(char * p_40, union U0 p_41);
static union U0 func_42(union U1 * p_43);
static unsigned short func_56(int * p_57);
static unsigned long long func_1(void)
{
    int *l_3 = (void*)0;
    int *l_4 = &g_2[0][5];
    char l_21 = 7L;
    int **l_1070 = &l_3;
    int *l_1071 = &g_49;
    (*l_4) = g_2[0][5];
    g_1069 |= func_5(func_11((safe_lshift_func_uint8_t_u_s((g_17 = g_2[0][2]), ((func_18(&g_2[0][5], l_21) < (*l_4)) <= (*l_4)))), &g_145[0][0], &g_2[0][5]), l_3, l_3, g_713[1][1][8], g_874.f2);




        ;

    ;
    ;

    (*l_1070) = (*l_1070);
    (*l_1071) &= (*l_4);
    return g_713[1][1][8];
}







static const int func_5(int * p_6, const int * p_7, int * p_8, int p_9, const long long p_10)
{
    const unsigned char l_1068 = 0x95L;
    for (g_174 = 25; (g_174 > (-15)); g_174 = safe_sub_func_int16_t_s_s(g_174, 7))
    {
        const int l_1067[7] = {0x9B4C9EE4L, 0x9B4C9EE4L, 1L, 0x9B4C9EE4L, 0x9B4C9EE4L, 1L, 0x9B4C9EE4L};
        int i;
        return l_1067[1];
    }
    return l_1068;
}







static int * func_11(int p_12, char * p_13, int * const p_14)
{
    int *l_391 = (void*)0;
    int **l_421 = &l_391;
    unsigned long long l_443[7][8] = {{1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}, {1UL, 0x8D2751DF8B2501E9LL, 1UL, 0UL, 1UL, 0xB7B0FEFB64308193LL, 0UL, 0x3C57ED45CCB6C176LL}};
    int l_472 = 0x13DD80F2L;
    int l_484 = 0x756206D8L;
    int l_486 = 0xC3C3FEB6L;
    int l_489[3][7];
    unsigned long long l_493 = 0UL;
    const int *l_513[7][1][1];
    const unsigned l_559 = 0UL;
    unsigned char *l_685 = &g_17;
    unsigned char **l_684 = &l_685;
    union U1 **l_697 = &g_522;
    unsigned short l_701 = 65535UL;
    short l_738[9][1];
    long long l_843[2][2] = {{0x6E82A9B9ED144C88LL, 0x6E79473059B57E93LL}, {0x6E82A9B9ED144C88LL, 0x6E79473059B57E93LL}};
    unsigned l_863[3][1][1];
    char l_865 = 0x95L;
    union U0 *l_873[1][4][6] = {{{&g_874, &g_874, (void*)0, &g_874, &g_874, &g_874}, {&g_874, &g_874, (void*)0, &g_874, &g_874, &g_874}, {&g_874, &g_874, (void*)0, &g_874, &g_874, &g_874}, {&g_874, &g_874, (void*)0, &g_874, &g_874, &g_874}}};
    short l_901 = (-1L);
    unsigned short l_996 = 0x80F9L;
    int *l_1002 = &g_2[0][6];
    unsigned short l_1017 = 0x5ECBL;
    int l_1037 = 9L;
    int *l_1047 = &g_46;
    char * const **l_1048 = (void*)0;
    unsigned char l_1053 = 250UL;
    char ***l_1054 = &g_1050;
    char ****l_1055 = (void*)0;
    const char *l_1058 = &l_865;
    const char **l_1057 = &l_1058;
    const char *** const l_1056 = &l_1057;
    short *l_1059 = &l_738[8][0];
    long long l_1062 = (-1L);
    int **l_1063 = &g_68;
    int *l_1064 = &g_46;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_489[i][j] = (-5L);
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_513[i][j][k] = &g_514;
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_738[i][j] = 0x51B0L;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_863[i][j][k] = 0x1632ED46L;
        }
    }
lbl_612:
    for (g_224.f2 = 0; (g_224.f2 >= (-15)); g_224.f2--)
    {
        unsigned *l_392 = &g_393[0];
        unsigned char *l_397 = &g_17;
        const int l_398 = 5L;
        int **l_422 = (void*)0;
        int ***l_438 = &g_67[6][1];
        unsigned short *l_455 = &g_214;
        long long *l_457[5][9] = {{&g_224.f2, (void*)0, &g_174, &g_224.f0, (void*)0, &g_115, &g_174, &g_115, &g_174}, {&g_224.f2, (void*)0, &g_174, &g_224.f0, (void*)0, &g_115, &g_174, &g_115, &g_174}, {&g_224.f2, (void*)0, &g_174, &g_224.f0, (void*)0, &g_115, &g_174, &g_115, &g_174}, {&g_224.f2, (void*)0, &g_174, &g_224.f0, (void*)0, &g_115, &g_174, &g_115, &g_174}, {&g_224.f2, (void*)0, &g_174, &g_224.f0, (void*)0, &g_115, &g_174, &g_115, &g_174}};
        long long **l_456 = &l_457[3][2];
        int l_480 = (-1L);
        int l_490 = 0L;
        int l_491 = 0xA9A253E1L;
        int l_492 = 0xEE0933B4L;
        int * const l_517 = &g_49;
        int i, j;
        if (l_398)
        {
            int *l_399 = &g_53;
            int ***l_437 = &l_422;
            (*p_14) = 0x81CA4A4EL;
            if ((*p_14))
            {
                return l_399;




            }
            else
            {
                int **l_400[9] = {&g_68, &l_391, &g_68, &l_391, &g_68, &l_391, &g_68, &l_391, &g_68};
                int **l_401 = &g_68;
                unsigned short *l_404 = &g_214;
                unsigned long long *l_407 = &g_45.f2;
                unsigned long long *l_408 = &g_241;
                int i;
                (*l_401) = p_14;

                ;
                (*p_14) = (safe_lshift_func_uint16_t_u_u(((*l_404) = p_12), (safe_rshift_func_uint8_t_u_s((((*l_408) = ((*l_407) = (p_14 == (l_391 = ((*l_401) = l_392))))) ^ (0xA0F6L >= (p_12 == g_174))), (g_219 & (((((-1L) == ((safe_rshift_func_int16_t_s_u(0x833BL, p_12)) | 0xA4L)) == (*l_399)) && l_398) == p_12))))));

                ;
                ;
                if ((p_12 == p_12))
                {
                    int ***l_420[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_420[i] = &g_67[6][1];
                    for (g_219 = 0; (g_219 > (-5)); g_219 = safe_sub_func_uint16_t_u_u(g_219, 9))
                    {
                        unsigned short l_413 = 0xB80CL;
                        l_413 = 0L;
                    }
                    (*p_14) = (*g_68);
                    (*p_14) ^= (safe_mul_func_int8_t_s_s(((((*g_237) = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((g_67[3][0] = &g_68) == (l_422 = l_421)), 12)), ((**l_421) || 0x8E5D72F2L)))) & 0UL) != p_12), (((safe_mod_func_int32_t_s_s(l_398, g_431)) <= 0xE02AL) < p_12)));

                    ;
                    for (g_214 = 29; (g_214 == 38); g_214 = safe_add_func_int16_t_s_s(g_214, 1))
                    {
                        if ((*p_14))
                            break;
                    }
                }
                else
                {
                    int ***l_436 = &l_401;
                    union U1 *l_448 = &g_45;
                    if ((safe_mul_func_int8_t_s_s(((g_36 && (l_436 == (l_438 = l_437))) && (safe_mod_func_int64_t_s_s(0x48782385E07FFA91LL, ((*l_407) = (safe_lshift_func_int8_t_s_u((*p_13), l_443[2][3])))))), ((*l_397) = ((*g_68) == (0xB3C0L > (safe_div_func_int16_t_s_s(g_224.f0, p_12))))))))
                    {
                        (*p_14) = (*p_14);
                    }
                    else
                    {
                        union U1 **l_449 = &l_448;
                        (*l_449) = l_448;
                    }

                    ;
                }

                ;
                ;
                if ((**l_401))
                    break;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            int *l_450 = (void*)0;
            return l_450;




        }

        ;
        ;
        ;
        ;
        (*l_421) = p_14;

        ;
        if (((*l_391) = ((((safe_div_func_uint32_t_u_u(4294967293UL, (*p_14))) >= ((*l_455) = 3UL)) & (g_224.f2 != (&g_17 == p_13))) & (((void*)0 != l_456) >= (**l_421)))))
        {
            int l_478 = 0x37A85B39L;
            if ((*p_14))
                break;
            for (g_241 = 0; (g_241 != 15); ++g_241)
            {
                int l_462 = 0xA0B6EFFDL;
                int l_482 = (-1L);
                int l_485 = 0xC041B7FAL;
                int l_487 = 0xB1856C8AL;
                for (g_219 = 0; (g_219 <= (-1)); --g_219)
                {
                    unsigned long long l_463 = 0x083B7C2618ED9D0ALL;
                    ++l_463;
                }
                for (g_53 = 0; (g_53 <= 6); g_53 += 1)
                {
                    unsigned l_471 = 0UL;
                    int l_481 = 0xF103769DL;
                    int l_483[7] = {0x071BD8BFL, 0x344B0504L, 0x071BD8BFL, 0x344B0504L, 0x071BD8BFL, 0x344B0504L, 0x071BD8BFL};
                    short l_488 = 0xF292L;
                    int i;
                    for (l_462 = 6; (l_462 >= 2); l_462 -= 1)
                    {
                        int *l_473 = &g_219;
                        int *l_474 = &g_46;
                        int *l_475 = &l_472;
                        int *l_476 = (void*)0;
                        int *l_477 = &g_49;
                        int *l_479[10] = {&g_49, &g_46, &g_49, &g_46, &g_49, &g_46, &g_49, &g_46, &g_49, &g_46};
                        int i, j;
                        (*g_68) ^= ((safe_sub_func_int32_t_s_s(l_443[g_53][l_462], (p_12 ^ ((~l_462) & (safe_lshift_func_int16_t_s_s(1L, (((((-1L) < g_36) & ((safe_unary_minus_func_int8_t_s((p_12 || (-6L)))) && ((*l_391) ^= l_471))) <= (-6L)) & 0UL))))))) == g_115);
                        ++l_493;
                    }
                }
                if (g_496)
                    break;
            }
        }
        else
        {
            unsigned l_508 = 4294967294UL;
            for (g_219 = 0; (g_219 <= 6); g_219 += 1)
            {
                int l_503[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_503[i] = (-10L);
                (*p_14) = 4L;
                for (g_49 = 0; (g_49 <= 6); g_49 += 1)
                {
                    int l_502 = 0x03DBE2F8L;
                    int *l_504 = (void*)0;
                    int l_505 = 0x73075147L;
                    int *l_506 = &l_492;
                    int *l_507[4][4] = {{&l_484, &l_489[1][2], &l_484, &l_489[1][2]}, {&l_484, &l_489[1][2], &l_484, &l_489[1][2]}, {&l_484, &l_489[1][2], &l_484, &l_489[1][2]}, {&l_484, &l_489[1][2], &l_484, &l_489[1][2]}};
                    const int *l_512 = (void*)0;
                    const int **l_511[7] = {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512};
                    int i, j;
                    for (l_490 = 6; (l_490 >= 2); l_490 -= 1)
                    {
                        int **l_497 = &g_176;
                        short *l_500 = (void*)0;
                        short *l_501[1][9][5] = {{{(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}, {(void*)0, &g_258, &g_45.f3, &g_258, &g_258}}};
                        int i, j, k;
                        (*l_497) = p_14;

                        ;
                        (**l_421) = ((g_45.f3 &= (((++(*l_455)) || l_443[l_490][l_490]) >= (**l_497))) != l_502);
                    }
                    l_508++;
                    (*l_506) = ((*l_391) = ((g_515 = (l_513[4][0][0] = &l_505)) == l_517));

                    ;

                }
            }

            for (g_36 = 0; (g_36 < 6); g_36++)
            {
                for (g_174 = 6; (g_174 >= 0); g_174 -= 1)
                {
                    union U0 *l_530 = &g_224;
                    union U0 **l_529 = &l_530;
                    int **l_531 = &g_176;
                    for (l_493 = 0; (l_493 <= 6); l_493 += 1)
                    {
                        union U1 *l_521[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
                        union U1 **l_520[5] = {&l_521[0], (void*)0, &l_521[0], (void*)0, &l_521[0]};
                        int **l_524 = (void*)0;
                        int **l_525 = &l_391;
                        short ***l_528 = &g_526;
                        int i, j;
                        g_522 = &g_45;

                        ;
                        (*l_525) = p_14;
                        (*l_528) = g_526;
                    }
                    (*l_529) = (void*)0;

                    ;
                    (*g_68) &= 2L;
                    (*l_531) = p_14;

                    ;
                }
                (*l_421) = p_14;
            }
        }

    }

lbl_905:
    for (l_493 = 0; (l_493 <= 0); l_493 += 1)
    {
        unsigned short l_532 = 65532UL;
        unsigned short *l_541 = &g_214;
        int *l_544 = &l_489[1][2];
        short l_656 = (-1L);
        int l_657 = 0L;
        unsigned char l_658 = 0x8BL;
        int l_661 = 3L;
        unsigned char **l_688 = &g_687;
        int l_711 = (-4L);
        int l_726 = 0x077F4625L;
        int l_728 = 0L;
        int l_729[6][5][3] = {{{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}, {{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}, {{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}, {{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}, {{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}, {{(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}, {(-1L), 0xED4537D9L, 9L}}};
        char l_741 = 0xB8L;
        unsigned short l_744 = 0xA551L;
        char l_766 = 0x02L;
        union U0 * const l_769 = &g_224;
        long long *l_800 = &g_174;
        long long **l_799 = &l_800;
        int i, j, k;
        if (((+(g_514 <= l_532)) <= (safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(p_12, ((p_12 ^ (((*l_541) = (((safe_add_func_uint8_t_u_u((g_224.f3 != 0xA7A3L), (*p_13))) && (safe_div_func_int8_t_s_s((4L < p_12), p_12))) ^ (*p_13))) & p_12)) < 0L))), 6))))
        {
            unsigned long long l_542 = 0x6CB20C6AF1AD3B74LL;
            int *l_543 = &l_489[1][5];
            int *l_546[7][2][10] = {{{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}, {{&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}, {&l_484, (void*)0, &g_53, &l_472, &g_49, &g_49, &g_2[0][0], &g_219, &g_2[0][0], &g_49}}};
            int *l_547[7][10][1] = {{{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}, {{&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}, {&g_2[0][4]}}};
            int **l_549 = &l_547[5][4][0];
            int i, j, k;
            (*l_543) ^= (*p_14);
            if ((*p_14))
                continue;
            for (g_174 = 0; (g_174 <= 2); g_174 += 1)
            {
                int *l_545 = &l_486;
                int *l_548[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_548[i] = &g_49;
                return l_548[1];




            }
            (*l_549) = p_14;
        }
        else
        {
            short l_558 = 3L;
            unsigned short l_587 = 0x0479L;
            int l_588 = 0xCE631CF6L;
            char l_639[9] = {0L, 5L, 0L, 5L, 0L, 5L, 0L, 5L, 0L};
            long long *l_640 = &g_174;
            long long *l_641 = &g_224.f2;
            int i;
            if ((!(safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(g_135, (safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u(g_224.f1, (((-1L) == p_12) == p_12))), (((p_12 >= l_558) | p_12) > l_559))))) ^ l_558), 0x90L))))
            {
                short **l_565 = &g_527;
                int l_567 = 0x6E4EDCA0L;
                int l_576 = 0x4605D30FL;
                int *l_603 = &l_484;
                unsigned l_606[1][7][2] = {{{1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}, {1UL, 0x4AE1FCBEL}}};
                int i, j, k;
                for (g_224.f0 = 2; (g_224.f0 >= 0); g_224.f0 -= 1)
                {
                    unsigned long long *l_566 = &g_45.f1;
                    int l_602[4] = {0x3D4F5005L, (-6L), 0x3D4F5005L, (-6L)};
                    int i, j;
                    if ((safe_div_func_uint64_t_u_u(g_145[0][4], (safe_lshift_func_uint16_t_u_u((l_558 < (3L || (safe_unary_minus_func_int64_t_s((l_489[l_493][(l_493 + 3)] = (((&g_527 == &g_527) < (((*l_566) = (g_224.f3 || 0UL)) ^ l_567)) == l_558)))))), g_224.f3)))))
                    {
                        int **l_568 = &g_68;
                        int i, j;
                        (*l_421) = l_544;

                        ;
                        (*l_568) = p_14;

                        ;
                        l_489[g_224.f0][(l_493 + 3)] = (*l_544);
                    }
                    else
                    {
                        int **l_569 = &g_68;
                        (*l_569) = ((*l_421) = &l_489[l_493][(g_224.f0 + 1)]);

                        ;
                        ;
                        (*p_14) = (((*g_68) = (safe_div_func_int32_t_s_s(0L, (**l_421)))) | (safe_add_func_int16_t_s_s((-1L), 1L)));
                    }

                    ;
                    ;
                    (*p_14) &= ((l_576 = (safe_rshift_func_uint8_t_u_s(7UL, 0))) | l_489[l_493][(g_224.f0 + 1)]);
                    (*l_391) = (!(*p_14));
                    for (l_567 = 0; (l_567 <= 0); l_567 += 1)
                    {
                        unsigned char *l_589 = &g_247;
                        unsigned char *l_593 = &g_17;
                        unsigned char **l_592 = &l_593;
                        int i, j, k;
                        (*p_14) = l_576;
                        l_513[(l_567 + 1)][l_493][l_493] = (*l_421);
                        (**l_421) = (*p_14);
                    }
                }

                (*p_14) = (*l_544);
                l_603 = p_14;

                ;
                (*p_14) &= (safe_add_func_int8_t_s_s((l_606[0][2][1] &= 0xD8L), (safe_sub_func_int16_t_s_s(p_12, (-1L)))));
            }
            else
            {
                int *l_609[5] = {&g_53, (void*)0, &g_53, (void*)0, &g_53};
                int i;
                return l_609[1];




            }

            if ((safe_sub_func_uint16_t_u_u(p_12, g_135)))
            {
                unsigned char l_613[1];
                union U1 **l_616 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_613[i] = 0x58L;
                if (l_493)
                    goto lbl_612;
                if ((*p_14))
                    break;
                for (g_53 = 0; (g_53 >= 0); g_53 -= 1)
                {
                    int *l_631[6] = {&g_46, &l_489[1][2], &g_46, &l_489[1][2], &g_46, &l_489[1][2]};
                    int i, j;
                    for (l_486 = 0; (l_486 <= 0); l_486 += 1)
                    {
                        union U1 ***l_617 = (void*)0;
                        union U1 ***l_618[4];
                        int **l_630 = &g_176;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_618[i] = &l_616;
                        l_613[0]--;
                        (*l_544) ^= ((g_619 = l_616) == &g_522);

                        ;
                        (*l_544) = (((!0xEAB7L) & (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(l_443[(l_486 + 1)][(l_493 + 2)], (safe_rshift_func_int16_t_s_s(0L, g_393[g_53])))), ((safe_div_func_int32_t_s_s(g_393[l_486], (safe_rshift_func_uint16_t_u_s((p_12 || g_224.f0), 14)))) ^ (*p_14))))) & (((*g_527) = 1L) ^ g_36));

                        (*l_630) = p_14;

                        ;
                    }
                    if (l_443[(g_53 + 1)][(l_493 + 3)])
                        break;
                    (*p_14) = l_443[(g_53 + 1)][(l_493 + 3)];
                    for (g_496 = 0; (g_496 <= 6); g_496 += 1)
                    {
                        int i, j, k;
                        (*l_544) = 0x27690C1FL;
                        l_513[g_496][g_53][g_53] = ((*l_421) = l_631[0]);

                        ;
                        if ((*p_14))
                            break;
                    }
                }
                if ((*p_14))
                    continue;
            }
            else
            {
                int *l_632 = (void*)0;
                l_632 = (void*)0;
            }
            (*p_14) |= (safe_mul_func_int8_t_s_s((*l_544), (safe_add_func_uint16_t_u_u((((*l_640) = (255UL < ((safe_mul_func_uint16_t_u_u(l_639[0], (*l_544))) >= p_12))) >= ((*l_641) &= (l_588 = (*l_544)))), g_17))));

        }
        (*l_421) = (*l_421);
        for (g_431 = 0; (g_431 <= 6); g_431 += 1)
        {
            short l_655[10] = {0xF67CL, (-9L), 0xF67CL, (-9L), 0xF67CL, (-9L), 0xF67CL, (-9L), 0xF67CL, (-9L)};
            int *l_679 = &g_2[0][7];
            int i;
            for (p_12 = 0; (p_12 <= 0); p_12 += 1)
            {
                unsigned long long *l_644 = &g_282.f2;
                unsigned long long *l_645 = &l_443[1][0];
                short *l_648 = &g_523.f3;
                short *l_649[10] = {&g_258, &g_258, &g_45.f3, &g_45.f3, &g_258, &g_258, &g_258, &g_45.f3, &g_45.f3, &g_258};
                int i, j;
                if (((*p_14) = (((*l_644) = ((l_489[1][2] ^= ((*p_14) <= (safe_sub_func_int64_t_s_s((g_241 < (g_214 < ((*l_645)--))), p_12)))) | p_12)) <= g_36)))
                {
                    (*l_544) &= (safe_lshift_func_uint16_t_u_u(((*l_541)--), g_174));
                }
                else
                {
                    int *l_654[7][8][3] = {{{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}, {{&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}, {&l_489[1][4], &g_46, &g_2[0][5]}}};
                    int i, j, k;
                    for (g_214 = 0; (g_214 <= 0); g_214 += 1)
                    {
                        (*p_14) |= (p_12 > 0xA93FL);
                    }
                    l_658--;
                }

            }
            if (l_661)
            {
                long long *l_674 = (void*)0;
                long long *l_675[9];
                unsigned long long *l_676[7] = {&l_443[2][4], &l_443[2][4], &g_241, &l_443[2][4], &l_443[2][4], &g_241, &l_443[2][4]};
                int l_677 = 0x7343EDB5L;
                int l_678 = 1L;
                int i;
                for (i = 0; i < 9; i++)
                    l_675[i] = &g_174;
                l_678 ^= (safe_sub_func_int8_t_s_s((((((*p_13) == (safe_sub_func_int8_t_s_s((p_12 != ((((safe_mod_func_uint32_t_u_u((~((g_46 == (*p_14)) <= 0UL)), (safe_lshift_func_uint8_t_u_s(p_12, 7)))) >= ((g_174 = (safe_div_func_int16_t_s_s(p_12, (--(*l_541))))) || (l_677 ^= g_516[2]))) >= (*p_13)) && (*p_14))), 0UL))) | l_655[3]) == 0xB03020EAF7F573BCLL) & 0xD8A6B86CFA49ED4FLL), l_655[7]));
                return l_679;




            }
            else
            {
                long long l_696 = 1L;
                unsigned short l_706 = 0xD75AL;
                for (l_532 = 0; (l_532 <= 0); l_532 += 1)
                {
                    unsigned char ***l_689 = &l_688;
                    int l_700 = 0xFB2F4349L;
                    char l_714 = (-1L);
                    if (((*l_679) &= (safe_rshift_func_uint8_t_u_s(0x29L, ((*g_237) = ((safe_add_func_int64_t_s_s(0x9179DA892AEDE2EFLL, ((g_686 = l_684) == ((*l_689) = l_688)))) > ((safe_mod_func_uint8_t_u_u((*g_687), (*l_544))) < ((safe_lshift_func_uint16_t_u_s((0x53003EB376952F2ALL && (l_696 || ((void*)0 != l_697))), 11)) >= 0xA926A1CEL))))))))
                    {
                        int *l_698 = (void*)0;
                        int *l_699[3][3];
                        int **l_712 = &g_176;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_699[i][j] = &g_219;
                        }
                        --l_701;
                        (*l_544) &= (l_700 = (safe_sub_func_int8_t_s_s(l_706, ((**g_686) = (safe_add_func_int64_t_s_s(((*l_679) = p_12), g_516[3]))))));
                        l_711 &= (safe_mul_func_int16_t_s_s(p_12, p_12));
                        (*l_712) = p_14;

                        ;
                    }
                    else
                    {
                        if (g_713[1][1][8])
                            break;
                        (*p_14) = (!l_714);
                    }

                    ;
                    if (g_514)
                        goto lbl_612;
                }
            }
            for (g_17 = 0; (g_17 <= 0); g_17 += 1)
            {
                int *l_715 = &l_472;
                (*l_679) = (*l_544);
                return l_679;




            }
        }
        (*p_14) = (*p_14);
        for (g_174 = 0; (g_174 <= 0); g_174 += 1)
        {
            short l_716 = 0x177BL;
            int l_730 = 0L;
            int l_731 = 0x224F7BA2L;
            int l_733 = 0xA5D46E62L;
            int l_735 = 0x3B0E2E9BL;
            int l_737[2];
            int *l_754[6] = {&g_219, &g_219, &g_219, &g_219, &g_219, &g_219};
            union U0 *l_770 = (void*)0;
            int l_772 = 0x25AE12D4L;
            unsigned l_782[9][4][6] = {{{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}, {{0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}, {0xCA825C3CL, 0x69FFCCC9L, 18446744073709551609UL, 0x74847979L, 0x0A670218L, 0UL}}};
            int *l_792 = &g_219;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_737[i] = 0x7B4BCBE0L;
            for (g_241 = 0; (g_241 <= 0); g_241 += 1)
            {
                int l_722 = 0x4227EE8DL;
                int l_732 = (-2L);
                int l_734 = 1L;
                int l_736 = 0L;
                int l_739 = 0x14362ABDL;
                long long l_740[4][10] = {{0L, 1L, (-1L), (-7L), 7L, 0x3D7CE194179AAB6ELL, 7L, (-7L), (-1L), 1L}, {0L, 1L, (-1L), (-7L), 7L, 0x3D7CE194179AAB6ELL, 7L, (-7L), (-1L), 1L}, {0L, 1L, (-1L), (-7L), 7L, 0x3D7CE194179AAB6ELL, 7L, (-7L), (-1L), 1L}, {0L, 1L, (-1L), (-7L), 7L, 0x3D7CE194179AAB6ELL, 7L, (-7L), (-1L), 1L}};
                int l_742 = 0x202CD5ECL;
                int l_743[9][4][7] = {{{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}, {{(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}, {(-6L), (-1L), 0L, 0xE4119F90L, 1L, (-1L), (-1L)}}};
                int i, j, k;
                if (l_716)
                    break;
                for (l_716 = 0; (l_716 >= 0); l_716 -= 1)
                {
                    int l_717 = 0xE1A86BFCL;
                    for (g_115 = 1; (g_115 <= 6); g_115 += 1)
                    {
                        unsigned short l_718 = 1UL;
                        if (g_219)
                            goto lbl_612;
                        --l_718;
                        if (l_718)
                            goto lbl_612;
                    }
                }
                for (l_711 = 0; (l_711 <= 0); l_711 += 1)
                {
                    unsigned long long l_721 = 0x6690EEB0FD0381EALL;
                    int l_727[6][5] = {{0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}, {0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}, {0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}, {0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}, {0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}, {0x763D909BL, 0xD2E21BE7L, (-9L), (-6L), (-6L)}};
                    int *l_747 = &l_472;
                    int i, j;
                    if ((*p_14))
                    {
                        if ((*p_14))
                            break;
                        (*l_544) = l_721;
                    }
                    else
                    {
                        char l_723[1];
                        int *l_724 = &g_46;
                        int *l_725[8] = {(void*)0, (void*)0, &g_2[0][3], (void*)0, (void*)0, &g_2[0][3], (void*)0, (void*)0};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_723[i] = 0xA7L;
                        (*l_544) &= 0x08EF03A4L;
                        l_744--;
                        (*l_724) = ((*g_526) == (*g_526));
                    }
                    (*l_747) ^= (((*l_544) == l_727[1][1]) & (*p_14));
                    if ((*p_14))
                        continue;
                }
                for (l_733 = 0; (l_733 >= 0); l_733 -= 1)
                {
                    union U0 *l_749 = &g_224;
                    union U0 **l_748 = &l_749;
                    int *l_753 = &l_726;
                    int i, j, k;
                    l_513[(l_733 + 6)][l_493][g_174] = ((*l_421) = (*l_421));
                    (*l_748) = &g_224;
                    for (l_701 = 0; (l_701 != 24); l_701 = safe_add_func_int32_t_s_s(l_701, 9))
                    {
                        int *l_752 = &l_729[3][0][1];
                        return l_754[0];




                    }
                }
            }
            (*p_14) ^= (*l_544);
            if (((*l_544) = ((((void*)0 == &l_684) <= (*l_544)) < p_12)))
            {
                unsigned **l_755 = (void*)0;
                unsigned *l_757[9][3];
                unsigned **l_756[10];
                unsigned *l_758 = &g_393[0];
                unsigned char l_765[10] = {246UL, 246UL, 0x1DL, 246UL, 246UL, 0x1DL, 246UL, 246UL, 0x1DL, 246UL};
                int l_771 = 0L;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_757[i][j] = &g_393[0];
                }
                for (i = 0; i < 10; i++)
                    l_756[i] = &l_757[0][0];
                (*l_544) = (g_431 | (safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s((((l_771 = (safe_mul_func_int8_t_s_s((l_766 = l_765[4]), ((safe_mul_func_int16_t_s_s((l_769 == l_770), p_12)) <= 8L)))) & (((*l_544) == l_772) <= 0xBAL)) >= l_765[4]), 18446744073709551614UL)) <= p_12), (*l_544))));
                if ((*p_14))
                    break;
                for (l_484 = 2; (l_484 <= 9); l_484 += 1)
                {
                    int *l_773 = (void*)0;
                    return l_773;




                }
                if (l_771)
                    break;
            }
            else
            {
                char **l_776 = &g_237;
                int *l_790 = &l_730;
                for (g_49 = 0; (g_49 >= 0); g_49 -= 1)
                {
                    char **l_775 = &g_237;
                    char ***l_774[1][5] = {{&l_775, &l_775, &l_775, &l_775, &l_775}};
                    int l_779 = 0x8C49E5C0L;
                    int i, j;
                    if (((l_776 = &g_237) == &p_13))
                    {
                        int l_777 = 0x786C28C7L;
                        int **l_778 = &g_176;
                        int l_780 = 0x41AAA537L;
                        int l_781 = (-1L);
                        if ((*p_14))
                            break;
                        l_777 ^= (*p_14);
                        g_67[6][1] = l_778;
                        --l_782[8][2][2];
                    }
                    else
                    {
                        unsigned char l_787 = 0xD8L;
                        int *l_791 = &l_729[0][3][2];
                        (*p_14) &= ((*l_544) & (255UL | ((**l_684)++)));
                        ++l_787;
                        return l_792;




                    }
                }
                for (g_17 = 0; (g_17 <= 0); g_17 += 1)
                {
                    long long **l_797 = (void*)0;
                    unsigned char l_801 = 2UL;
                    for (l_711 = 0; (l_711 <= 2); l_711 += 1)
                    {
                        char l_793 = 8L;
                        int i, j, k;
                        if (g_224.f3)
                            goto lbl_612;
                        l_793 = 0L;
                        (*l_790) |= (l_729[(l_493 + 1)][(g_17 + 2)][(g_17 + 1)] & ((*l_541) = p_12));
                    }
                    for (l_661 = 0; (l_661 <= 0); l_661 += 1)
                    {
                        unsigned l_794 = 0x9648C3ACL;
                        l_794--;
                        (*l_544) = (*p_14);
                    }
                    (*l_790) = (*p_14);
                    for (l_656 = 0; (l_656 <= 0); l_656 += 1)
                    {
                        long long ***l_798 = (void*)0;
                        l_799 = l_797;

                        ;
                        (*p_14) = (-1L);
                        (*p_14) &= l_801;
                    }
                }
            }
            for (l_730 = 0; (l_730 <= 0); l_730 += 1)
            {
                if ((*p_14))
                    break;
            }
        }

        ;
    }
    if (((*p_14) = (*p_14)))
    {
        const union U0 *l_804 = (void*)0;
        int l_808 = 0xDBA55A1DL;
        int l_809[1];
        long long l_810 = (-5L);
        int l_811 = 1L;
        unsigned long long l_848 = 0x48F33DDB6C47F693LL;
        union U1 **l_870 = &g_522;
        char l_895 = 1L;
        unsigned char l_929[1][2];
        unsigned l_1006[5][2] = {{0x67652BB9L, 0x514A6E11L}, {0x67652BB9L, 0x514A6E11L}, {0x67652BB9L, 0x514A6E11L}, {0x67652BB9L, 0x514A6E11L}, {0x67652BB9L, 0x514A6E11L}};
        char ****l_1051 = &g_1049;
        int i, j;
        for (i = 0; i < 1; i++)
            l_809[i] = 0x86CE6646L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_929[i][j] = 251UL;
        }
lbl_915:
        for (g_101 = 18; (g_101 > 6); --g_101)
        {
            const union U0 *l_805 = &g_806;
            int *l_807[1];
            unsigned char l_812 = 3UL;
            union U0 *l_871 = &g_224;
            int i;
            for (i = 0; i < 1; i++)
                l_807[i] = (void*)0;
            if ((*p_14))
                break;
            l_805 = l_804;

            ;
            l_812--;
            if ((*p_14))
            {
                unsigned l_825[1][6][10] = {{{1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}, {1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}, {1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}, {1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}, {1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}, {1UL, 4294967292UL, 1UL, 4294967288UL, 4294967292UL, 4294967294UL, 4294967292UL, 4294967288UL, 1UL, 4294967292UL}}};
                int *l_833[1][5][10] = {{{&g_219, (void*)0, &l_808, &g_2[0][2], &g_2[0][2], &l_808, (void*)0, &g_219, &l_808, &g_219}, {&g_219, (void*)0, &l_808, &g_2[0][2], &g_2[0][2], &l_808, (void*)0, &g_219, &l_808, &g_219}, {&g_219, (void*)0, &l_808, &g_2[0][2], &g_2[0][2], &l_808, (void*)0, &g_219, &l_808, &g_219}, {&g_219, (void*)0, &l_808, &g_2[0][2], &g_2[0][2], &l_808, (void*)0, &g_219, &l_808, &g_219}, {&g_219, (void*)0, &l_808, &g_2[0][2], &g_2[0][2], &l_808, (void*)0, &g_219, &l_808, &g_219}}};
                int i, j, k;
                for (g_46 = 0; (g_46 <= 6); g_46 += 1)
                {
                    unsigned l_828 = 0x8266DF3AL;
                    long long l_830[8][7] = {{0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}, {0x2FD9B9DDF328A433LL, (-3L), 4L, 0L, 0L, 0x77FF9C09F971AF8DLL, 0L}};
                    const char l_842 = 0L;
                    int l_844 = 0xEF23D2DDL;
                    int i, j;
                    for (g_214 = 0; (g_214 <= 6); g_214 += 1)
                    {
                        long long *l_826 = &g_174;
                        short *l_827 = &l_738[5][0];
                        int l_829[2][8][1] = {{{0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}}, {{0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}, {0x938CE74CL}}};
                        int i, j, k;
                        (*p_14) = (safe_add_func_uint8_t_u_u(0x9DL, ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((*l_827) ^= (g_36 < (safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_825[0][3][7] > ((*l_826) = l_825[0][3][7])), 0xD67D4180L)), 8)))) < (8UL ^ l_828)), l_829[1][6][0])), (l_809[0] || (*g_687)))) ^ l_830[1][1])));
                    }
                    l_489[1][2] = (l_809[0] = ((*p_14) = (((!((safe_mul_func_uint8_t_u_u((**g_686), (*p_13))) == ((*p_13) || ((safe_sub_func_int8_t_s_s((*p_13), ((void*)0 == &l_685))) | p_12)))) || ((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((0xDF67EB60L < (*p_14)), (*g_687))) != l_842) <= g_2[0][1]), l_843[0][0])), 7)) != p_12)) ^ 0x46F88EDBL)));
                    (*p_14) = (*p_14);
                    for (g_214 = 0; (g_214 <= 6); g_214 += 1)
                    {
                        unsigned short l_845 = 0xEF56L;
                        l_845++;
                        ++l_848;
                    }
                }
            }
            else
            {
                int l_861 = 8L;
                long long *l_862 = &l_810;
                unsigned short *l_864 = &g_496;
                union U0 **l_872[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_872[i][j] = &l_871;
                }
                for (g_46 = (-17); (g_46 >= (-18)); g_46--)
                {
                    for (l_701 = 0; (l_701 <= 1); l_701 += 1)
                    {
                        int i, j;
                        (*p_14) ^= (~(safe_div_func_int64_t_s_s(l_843[l_701][l_701], l_843[l_701][l_701])));
                    }
                }
                if ((safe_rshift_func_int8_t_s_u((l_809[0] &= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_861 != ((*l_864) |= (0x7A8A2F969A72A89BLL > (((*l_862) = l_811) > ((p_12 && (l_863[2][0][0] < (&g_176 == (void*)0))) < (*p_13)))))), l_848)), 10))), p_12)))
                {
                    int **l_866[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    int **l_867 = &l_391;
                    int i;
                    if ((*p_14))
                        break;
                    l_865 |= (*p_14);
                    (*l_867) = p_14;

                    ;
                    for (g_241 = 0; g_241 < 1; g_241 += 1)
                    {
                        l_809[g_241] = 9L;
                    }
                }
                else
                {
                    for (l_493 = 0; (l_493 <= 0); l_493 += 1)
                    {
                        union U1 **l_868 = &g_522;
                        union U1 ***l_869[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_869[i] = (void*)0;
                        (*p_14) = 0L;
                        l_870 = l_868;
                    }
                    return l_807[0];




                }

                ;
                l_871 = (l_873[0][0][1] = l_871);
                (*p_14) = (*p_14);
            }
        }
        for (g_53 = (-25); (g_53 <= (-30)); --g_53)
        {
            int l_877[9][5] = {{0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}, {0x5ECB3EB0L, 1L, 0L, 1L, 0x5ECB3EB0L}};
            long long l_896 = 0xBE969D6E344DBECBLL;
            short l_910[9] = {0x6300L, 7L, 0x6300L, 7L, 0x6300L, 7L, 0x6300L, 7L, 0x6300L};
            int l_918 = (-2L);
            int i, j;
            (*p_14) ^= (l_877[4][4] || (safe_mod_func_int16_t_s_s(l_877[4][4], l_808)));
            for (g_115 = 2; (g_115 > (-21)); g_115--)
            {
                long long l_890 = (-7L);
                int l_891 = 0x62BF9AB1L;
                int l_892 = 0L;
                int l_893[9][1][8] = {{{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}, {{1L, 1L, 0x4AB25EB1L, 0L, 0x4AF7FDF9L, 0x3DAB73B3L, 0x57EC37A9L, 1L}}};
                unsigned l_897 = 4294967293UL;
                int i, j, k;
                (*p_14) = l_808;
                for (g_247 = 0; (g_247 <= 1); g_247 += 1)
                {
                    int *l_882 = &l_489[1][2];
                    int *l_883 = &l_877[4][4];
                    int *l_884 = &l_877[4][4];
                    int *l_885 = &l_486;
                    int *l_886 = &l_489[1][2];
                    int *l_887 = &l_877[4][3];
                    int *l_888 = &l_809[0];
                    int *l_889[10][6][4] = {{{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}, {{&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}, {&l_489[1][2], &l_484, &l_809[0], &g_2[0][0]}}};
                    int l_894 = 5L;
                    int *l_900 = &g_46;
                    int i, j, k;
                    l_897--;
                    l_893[7][0][2] ^= ((*p_14) < p_12);
                    return l_900;




                }
            }
            if (l_901)
                break;
            for (g_247 = 27; (g_247 < 35); g_247 = safe_add_func_int8_t_s_s(g_247, 1))
            {
                unsigned *l_904 = &g_393[0];
                int l_908 = 1L;
                int l_911 = 0x8779467BL;
                unsigned long long l_912[3][5][8] = {{{0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}}, {{0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}}, {{0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}, {0x64148F7A3C7D3CC2LL, 1UL, 0xBA951325CF3CDE01LL, 18446744073709551608UL, 1UL, 0xCC9E0718A9FA0CD3LL, 3UL, 18446744073709551613UL}}};
                unsigned char ***l_945[3][5] = {{(void*)0, &g_686, &l_684, &l_684, &g_686}, {(void*)0, &g_686, &l_684, &l_684, &g_686}, {(void*)0, &g_686, &l_684, &l_684, &g_686}};
                int i, j, k;
                (*p_14) |= ((-1L) >= p_12);
                if (l_895)
                {
                    int l_906[8][2][4] = {{{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}, {{0xC631FEB1L, 1L, 0xD8299766L, (-9L)}, {0xC631FEB1L, 1L, 0xD8299766L, (-9L)}}};
                    int *l_907[8] = {&l_808, &l_808, (void*)0, &l_808, &l_808, (void*)0, &l_808, &l_808};
                    int i, j, k;
                    for (l_848 = 0; (l_848 <= 2); l_848 += 1)
                    {
                        int i, j;
                        l_877[(l_848 + 3)][(l_848 + 1)] = (&g_393[0] != l_904);
                        l_877[l_848][(l_848 + 1)] = 0x9174E0F5L;
                        if (g_115)
                            goto lbl_905;
                        if (l_877[(l_848 + 6)][l_848])
                            continue;
                    }
                    if (l_906[7][1][0])
                        continue;
                    l_912[2][4][1]++;
                    if (g_53)
                        goto lbl_1052;
                }
                else
                {
                    if (g_17)
                        goto lbl_915;
                    if (l_912[2][4][1])
                        continue;
                }
                for (l_810 = 10; (l_810 > (-2)); l_810 = safe_sub_func_uint32_t_u_u(l_810, 4))
                {
                    int l_927 = 0xCAC0CC7AL;
                    int l_928[4][10] = {{5L, 0xA417B99CL, 0x4BD08406L, 0x5E48A1FFL, 0x07DF5CE6L, 9L, 0L, (-1L), 0x4BD08406L, (-1L)}, {5L, 0xA417B99CL, 0x4BD08406L, 0x5E48A1FFL, 0x07DF5CE6L, 9L, 0L, (-1L), 0x4BD08406L, (-1L)}, {5L, 0xA417B99CL, 0x4BD08406L, 0x5E48A1FFL, 0x07DF5CE6L, 9L, 0L, (-1L), 0x4BD08406L, (-1L)}, {5L, 0xA417B99CL, 0x4BD08406L, 0x5E48A1FFL, 0x07DF5CE6L, 9L, 0L, (-1L), 0x4BD08406L, (-1L)}};
                    int i, j;
                    if ((*p_14))
                        break;
                    l_918 |= (*p_14);
                    for (g_909 = 0; (g_909 <= (-25)); g_909--)
                    {
                        int *l_921 = (void*)0;
                        int *l_922 = &g_2[0][5];
                        int *l_923 = &g_49;
                        int *l_924 = (void*)0;
                        int *l_925 = (void*)0;
                        int *l_926[3][2] = {{&l_808, &l_808}, {&l_808, &l_808}, {&l_808, &l_808}};
                        unsigned short *l_942[8][4][4] = {{{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}, {{&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}, {&g_713[1][1][8], &l_701, &g_713[1][2][6], (void*)0}}};
                        int i, j, k;
                        if (l_809[0])
                            break;
                        l_908 ^= 0x285B9E3DL;
                        ++l_929[0][0];
                        (*l_922) = (safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((*l_904) = ((g_282.f1 = p_12) ^ (+(((safe_div_func_uint16_t_u_u((l_911 |= ((*g_237) & (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_224.f2, ((*l_923) = (*p_14)))), g_909)))), l_928[3][0])) > 4294967293UL) ^ (p_12 >= 0x9CD7L))))), p_12)) != 65530UL), 0x02E0L));

                    }
                }
                for (g_135 = (-5); (g_135 <= (-6)); g_135 = safe_sub_func_uint16_t_u_u(g_135, 6))
                {
                    l_877[8][1] = (l_945[2][1] != (void*)0);
                }
            }
        }
        for (l_810 = 0; (l_810 < (-27)); l_810 = safe_sub_func_uint32_t_u_u(l_810, 9))
        {
            int l_964[8] = {7L, 7L, 0xA7C3534BL, 7L, 7L, 0xA7C3534BL, 7L, 7L};
            int *l_966 = (void*)0;
            char l_1016 = 6L;
            int i;
            if (l_811)
            {
                union U1 **l_954 = &g_522;
                int l_963 = 8L;
                int *l_967 = &l_964[6];
                int *l_968[1];
                unsigned l_969 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_968[i] = &g_53;
                for (g_496 = 9; (g_496 != 43); g_496 = safe_add_func_uint64_t_u_u(g_496, 3))
                {
                    int l_959 = (-1L);
                    long long *l_962 = &g_224.f0;
                    int *l_965 = &l_809[0];
                    l_809[0] = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x1AL, ((*l_685) = (((void*)0 == l_954) || (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_959, (safe_sub_func_int32_t_s_s(l_959, (((*l_962) = (+(((*p_14) == (18446744073709551615UL < p_12)) > p_12))) || 0x42B49B8F3CC6C3EBLL))))), l_963)))))), l_964[7])) ^ g_713[0][2][1]);

                    return l_966;




                }
                l_969++;
                (*l_967) &= ((safe_mod_func_uint8_t_u_u(((*l_685) = (safe_rshift_func_int8_t_s_u(0xD7L, (p_12 < ((g_17 == p_12) && 0L))))), (safe_add_func_uint16_t_u_u(((p_12 && (safe_rshift_func_uint16_t_u_u((p_12 ^ (safe_lshift_func_uint8_t_u_s(((*g_687) &= ((safe_div_func_uint32_t_u_u(g_713[1][1][1], (g_393[0] && l_811))) > 0xB504388FL)), 0))), 12))) < l_929[0][1]), p_12)))) & 0UL);
                if (((*l_967) = (((p_12 < 7L) <= ((void*)0 == &l_810)) && (*g_237))))
                {
                    int l_988 = 0x4609A1CCL;
                    int l_992 = 5L;
                    int l_993 = 2L;
                    int l_994 = (-2L);
                    int l_995[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_995[i] = 0x5ECE44FAL;
                    for (l_848 = 0; (l_848 > 58); l_848 = safe_add_func_int8_t_s_s(l_848, 8))
                    {
                        unsigned l_989[3][4][3] = {{{0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}}, {{0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}}, {{0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}, {0x5CC76A7FL, 1UL, 0x9BADB4EAL}}};
                        int i, j, k;
                        --l_989[2][3][0];
                        (*l_967) ^= (*p_14);
                    }
                    l_996--;
                    for (l_472 = 0; (l_472 > (-19)); l_472--)
                    {
                        int *l_1001 = &l_472;
                        return l_1002;




                    }
                }
                else
                {
                    for (g_174 = (-27); (g_174 <= 27); g_174 = safe_add_func_int16_t_s_s(g_174, 1))
                    {
                        short l_1005 = (-1L);
                        (*l_967) = 0xF9259A0CL;
                        (*l_1002) = 0x84DB3AFBL;
                        if (l_1005)
                            continue;
                    }
                }
            }
            else
            {
                char l_1013 = (-9L);
                int l_1014 = 5L;
                int l_1015[10][3] = {{0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}, {0x70A5A4D0L, 0x30DEAC90L, 9L}};
                union U0 **l_1027 = &l_873[0][2][0];
                int i, j;
                if ((l_1006[3][1] = 0x6DB5C204L))
                {
                    int *l_1007 = &l_964[6];
                    int *l_1008 = &g_2[0][5];
                    int *l_1009 = &g_219;
                    int *l_1010 = &g_219;
                    int *l_1011 = &l_809[0];
                    int *l_1012[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1012[i] = &l_809[0];
                    ++l_1017;
                    for (g_247 = 9; (g_247 >= 18); g_247++)
                    {
                        unsigned l_1022[10][1];
                        unsigned short *l_1028 = &l_701;
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1022[i][j] = 0xDC5E4DB5L;
                        }
                        --l_1022[0][0];
                        (*p_14) = (l_1022[0][0] ^ (((*l_1028) = (g_1025 == l_1027)) > p_12));
                        if ((*l_1011))
                            continue;
                        if (l_1015[7][0])
                            break;
                    }
                    if ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((*p_13), (--(*l_685)))), g_806.f1)))
                    {
                        unsigned long long *l_1035 = (void*)0;
                        unsigned long long *l_1036 = &g_282.f2;
                        if (g_247)
                            goto lbl_915;
                        l_809[0] = 6L;
                        (*l_1011) = ((8L < (p_12 < ((*l_1036) = l_1013))) < (l_1037 < (*p_14)));

                    }
                    else
                    {
                        (*l_1010) ^= (safe_mul_func_uint8_t_u_u((*g_687), l_895));
                    }
                }
                else
                {
                    int *l_1042[6];
                    char l_1043 = 6L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1042[i] = &g_49;
                    for (l_808 = (-9); (l_808 >= (-2)); l_808++)
                    {
                        (*l_421) = l_1042[4];

                        ;
                    }

                    ;
                    ++g_1044;
                }

                ;
            }

            ;
            for (l_486 = 0; (l_486 <= 1); l_486 += 1)
            {
                int i, j;
                if (l_843[l_486][l_486])
                    break;
            }
            return l_1047;




        }
        (*p_14) = (((p_12 & (&l_684 != (void*)0)) != (l_1048 != ((*l_1051) = g_1049))) <= (*g_687));
    }
    else
    {
lbl_1052:
        (*p_14) ^= 0L;
        (*p_14) = (l_1053 > (p_12 > ((*l_1059) &= (0L >= ((g_1049 = l_1054) != l_1056)))));
        for (l_493 = 29; (l_493 <= 28); --l_493)
        {
            (*l_1047) |= l_1062;
        }
        (*l_1063) = p_14;

        ;
    }
    return l_1064;




}







static long long func_18(int * p_19, unsigned p_20)
{
    int * const l_27 = &g_2[0][5];
    char *l_35 = &g_36;
    union U1 *l_44 = &g_45;
    char **l_236[6][3][5] = {{{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_35, (void*)0, (void*)0}}};
    union U1 **l_368 = &l_44;
    int i, j, k;
    (*l_368) = func_22(l_27, (*l_27), (safe_mod_func_uint8_t_u_u((((*l_368) = func_30(l_35, g_36, func_37(((*g_68) = (l_35 == (g_237 = func_39(l_35, func_42(l_44)))))), g_282)) == &g_282), p_20)), (*l_27));

    ;


    ;
    return (*l_27);
}







static union U1 * func_22(int * const p_23, unsigned short p_24, unsigned char p_25, int p_26)
{
    int **l_369 = &g_176;
    int **l_370 = &g_68;
    int l_381 = 0xD2E51C9FL;
    int l_382 = 0x0323B244L;
    int l_383 = 9L;
    unsigned l_384 = 4294967295UL;
    (*g_176) &= 0xC7CAB79CL;
    (*l_370) = ((*l_369) = &p_26);

    ;
    ;
    if ((**l_369))
    {
        int *l_371 = &g_53;
        (*l_371) ^= (*g_176);
    }
    else
    {
        int *l_372 = &g_219;
        int *l_373 = &g_53;
        int *l_374 = &g_219;
        int l_375 = 0x7DFD2232L;
        int *l_376 = &g_53;
        int *l_377 = &g_46;
        int l_378[4][3];
        int *l_379[8];
        int l_380 = 0x969868C8L;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_378[i][j] = (-10L);
        }
        for (i = 0; i < 8; i++)
            l_379[i] = &g_219;
        ++l_384;
    }
    (**l_369) = 0xC21C4D97L;
    return &g_282;




}







static union U1 * func_30(char * p_31, unsigned long long p_32, char p_33, union U1 p_34)
{
    int *l_283[2];
    int **l_284 = (void*)0;
    int **l_285 = &l_283[0];
    long long l_286 = (-1L);
    unsigned short l_308 = 0UL;
    char l_327 = 0x8EL;
    int i;
    for (i = 0; i < 2; i++)
        l_283[i] = &g_2[0][5];
    (*g_176) = (func_56(((*l_285) = l_283[0])) || l_286);
    (*g_68) = p_33;
    for (g_214 = 17; (g_214 <= 33); g_214 = safe_add_func_int32_t_s_s(g_214, 4))
    {
        int *l_293 = &g_219;
        const union U1 *l_303[6][7] = {{&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}, {&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}, {&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}, {&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}, {&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}, {&g_45, (void*)0, (void*)0, &g_282, &g_282, &g_282, &g_282}};
        const union U1 **l_302 = &l_303[2][4];
        const int *l_320 = &g_219;
        long long l_321 = 1L;
        int l_331 = 0x12C76867L;
        int l_335 = 0x4D943739L;
        int l_339[9] = {0x106A38E5L, 1L, 0x106A38E5L, 1L, 0x106A38E5L, 1L, 0x106A38E5L, 1L, 0x106A38E5L};
        unsigned l_340 = 6UL;
        unsigned short l_352 = 0x2943L;
        int i, j;
        for (g_49 = 11; (g_49 <= 1); --g_49)
        {
            unsigned char l_294 = 0UL;
            int l_316[1][4][4] = {{{(-1L), 0x978B0F99L, 0xF5486DF5L, 0xF5486DF5L}, {(-1L), 0x978B0F99L, 0xF5486DF5L, 0xF5486DF5L}, {(-1L), 0x978B0F99L, 0xF5486DF5L, 0xF5486DF5L}, {(-1L), 0x978B0F99L, 0xF5486DF5L, 0xF5486DF5L}}};
            union U1 *l_367 = &g_45;
            int i, j, k;
            for (g_224.f2 = 0; (g_224.f2 != (-9)); --g_224.f2)
            {
                union U1 *l_301[7][3] = {{&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}, {&g_282, &g_45, &g_282}};
                union U1 * const *l_300 = &l_301[2][0];
                unsigned char *l_313 = &g_247;
                unsigned l_314 = 0x64842B0CL;
                long long *l_315[6][4][6] = {{{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}, {{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}, {{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}, {{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}, {{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}, {{&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}, {&g_115, &g_115, &g_174, &g_174, &g_174, &g_224.f2}}};
                unsigned short *l_317 = &l_308;
                int l_322 = 0x8453EFD9L;
                int l_330 = 2L;
                int l_332 = 0x308C3138L;
                int l_336 = 0xFF5F84A0L;
                int l_338 = 0xAAF8E1DFL;
                unsigned long long l_351 = 2UL;
                int i, j, k;
                (*l_285) = l_293;
                l_294--;
                if ((((*l_317) = (((1UL || (safe_unary_minus_func_uint64_t_u((l_300 != l_302)))) || (safe_mul_func_uint8_t_u_u((+(safe_sub_func_uint32_t_u_u(g_224.f2, l_308))), ((*p_31) = (safe_add_func_int32_t_s_s(0xFC92375FL, (g_2[0][5] && (safe_lshift_func_int16_t_s_u(p_33, 10))))))))) | (l_316[0][2][3] = (((*l_313) = p_33) <= l_314)))) | p_33))
                {
                    short l_334 = (-7L);
                    int l_337[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_337[i] = 6L;
                    if (((*l_293) = p_33))
                    {
                        const int *l_318 = &g_49;
                        const int **l_319[5] = {&l_318, &l_318, &l_318, &l_318, &l_318};
                        int l_323 = 0x45F28414L;
                        unsigned short l_324 = 0x3B27L;
                        int i;
                        l_320 = l_318;

                        ;
                        l_324--;
                        l_327 = p_33;
                    }
                    else
                    {
                        const int **l_328 = &l_320;
                        int l_329 = 5L;
                        int l_333 = (-10L);
                        (*l_328) = l_320;
                        l_340--;
                        l_322 = (safe_mod_func_uint64_t_u_u(18446744073709551613UL, (safe_add_func_int16_t_s_s(((p_33 >= ((*l_313) = (~(safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_351, (*g_237))), l_351))))) == l_352), ((l_333 ^= (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_337[1], (**l_328))), (safe_unary_minus_func_int8_t_s(0x06L))))) ^ l_294)))));
                        if ((*g_176))
                            continue;
                    }
                }
                else
                {
                    unsigned char l_359[8][6][5] = {{{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}, {{0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}, {0xE2L, 0UL, 1UL, 0xA7L, 0xE7L}}};
                    int *l_364 = &l_332;
                    unsigned long long *l_366 = &l_351;
                    unsigned long long **l_365 = &l_366;
                    int i, j, k;
                    if (p_33)
                    {
                        return &g_45;


                    }
                    else
                    {
                        short l_358 = 0x1DAFL;
                        (*l_293) = (l_332 = (l_336 &= (*g_68)));
                        --l_359[0][5][4];
                        (*l_293) = (*g_176);
                        if (p_33)
                            continue;
                    }
                    (*l_293) |= (safe_rshift_func_uint8_t_u_s(g_145[1][1], 2));
                    (*l_285) = l_364;


                    (*l_364) = ((void*)0 == l_365);
                }


            }


            ;
            return l_367;


        }
    }
    return &g_45;


}







static char func_37(int p_38)
{
    unsigned long long *l_240 = &g_241;
    unsigned long long **l_242 = (void*)0;
    unsigned long long *l_244 = &g_241;
    unsigned long long **l_243 = &l_244;
    int l_245 = 9L;
    unsigned char *l_246 = &g_247;
    int *l_259 = &g_53;
    int l_270 = 0x1309D1BDL;
    int l_271 = 0x6B3D5CD2L;
    int l_272[9];
    int *l_276 = &g_219;
    unsigned long long l_281 = 18446744073709551611UL;
    int i;
    for (i = 0; i < 9; i++)
        l_272[i] = 0L;
    (*g_176) = (18446744073709551608UL & ((*l_240) = (safe_mul_func_uint16_t_u_u(((l_240 == ((*l_243) = l_240)) < l_245), (((*l_246) ^= g_2[0][5]) | l_245)))));
    for (p_38 = (-30); (p_38 != 20); p_38++)
    {
        char l_252[3][3] = {{0xA2L, (-7L), 0xA2L}, {0xA2L, (-7L), 0xA2L}, {0xA2L, (-7L), 0xA2L}};
        short *l_257 = &g_258;
        int **l_277 = (void*)0;
        int **l_278 = &l_276;
        int i, j;
        if ((safe_sub_func_uint8_t_u_u(((*l_246) &= (l_252[1][1] != ((safe_sub_func_int64_t_s_s(l_252[1][1], p_38)) || (safe_rshift_func_int16_t_s_s(((*l_257) = (g_45.f3 = (l_252[0][1] >= (&l_252[2][1] == &g_145[1][1])))), 0))))), l_252[2][0])))
        {
            l_259 = &l_245;

            ;
        }
        else
        {
            int *l_260 = (void*)0;
            int *l_261 = &g_219;
            int *l_262 = &g_46;
            int *l_263 = &g_53;
            int *l_264 = &g_53;
            int l_265 = 6L;
            int *l_266 = &g_49;
            int *l_267 = &g_219;
            int *l_268 = &g_219;
            int *l_269[9][5][5] = {{{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}, {{(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}, {(void*)0, &l_265, &l_245, &g_53, &g_53}}};
            unsigned long long l_273 = 18446744073709551615UL;
            int i, j, k;
            ++l_273;
            l_269[4][1][1] = l_276;
        }

        ;
        (*l_278) = &p_38;

        ;
        (*l_259) = (safe_mod_func_uint32_t_u_u((p_38 != p_38), 0x25C0CCE6L));
        return p_38;
    }
    return l_281;
}







static char * func_39(char * p_40, union U0 p_41)
{
    int *l_227 = &g_2[0][5];
    for (g_46 = 23; (g_46 <= 15); --g_46)
    {
        unsigned long long l_229 = 8UL;
        int **l_232[7][5][2] = {{{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}, {{&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}, {&l_227, &g_176}}};
        int i, j, k;
        for (g_115 = 0; (g_115 <= 2); g_115 += 1)
        {
            int **l_228[5] = {&g_68, (void*)0, &g_68, (void*)0, &g_68};
            int i, j;
            l_227 = l_227;
            ++l_229;
        }
        l_227 = l_227;
    }
    for (g_46 = 13; (g_46 <= 12); g_46--)
    {
        int *l_235 = &g_219;
        (*l_235) ^= (func_56(l_227) || (*l_227));
    }
    return p_40;


}







static union U0 func_42(union U1 * p_43)
{
    unsigned short l_220 = 0x471FL;
    int l_223[4] = {(-5L), (-5L), (-5L), (-5L)};
    int i;
    for (g_46 = 1; (g_46 == 12); g_46++)
    {
        int **l_215 = &g_176;
        int *l_218[10];
        int i;
        for (i = 0; i < 10; i++)
            l_218[i] = &g_219;
        for (g_49 = 0; (g_49 < (-1)); g_49--)
        {
            int *l_52 = &g_53;
            (*l_52) = 0L;
            if ((*l_52))
                continue;
        }
        l_223[3] |= ((((safe_lshift_func_uint16_t_u_s((g_214 = func_56(&g_46)), (&g_68 == l_215))) != (0x2CE0D3E0L ^ (0x7649451FL || (l_220 = (g_219 = 0L))))) > 249UL) || (safe_rshift_func_uint16_t_u_s(0UL, (**l_215))));
    }
    return g_224;

    }







static unsigned short func_56(int * p_57)
{
    int l_58 = (-1L);
    unsigned long long l_63[5][8][6] = {{{0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}}, {{0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}}, {{0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}}, {{0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}}, {{0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}, {0x54EB856A759F32F5LL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL, 0xCB2139E6D5949333LL, 18446744073709551615UL}}};
    int l_71 = 0xF097794FL;
    char l_84[3][4][5] = {{{0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}}, {{0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}}, {{0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}, {0x9AL, 0xF5L, 0xCAL, (-6L), 0xA1L}}};
    int l_98[6][8] = {{0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}};
    int l_116 = 0x5B47AC94L;
    int l_117 = 9L;
    int l_133 = 0x0FE33B61L;
    long long l_136 = 0x21493796DFD013E8LL;
    unsigned short l_179[6] = {65533UL, 65533UL, 2UL, 65533UL, 65533UL, 2UL};
    int *l_193 = &l_98[5][0];
    int **l_206 = &g_176;
    int *l_207[1];
    short l_208[1];
    int l_209[9][1];
    long long l_210[8] = {(-3L), (-1L), (-3L), (-1L), (-3L), (-1L), (-3L), (-1L)};
    unsigned long long l_211[7][3] = {{0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}, {0x541A47F7494F684BLL, 0xA3F41C0306E1B25ELL, 0x541A47F7494F684BLL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_207[i] = &g_49;
    for (i = 0; i < 1; i++)
        l_208[i] = (-1L);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_209[i][j] = 0x2B35768BL;
    }
    if (((g_53 | l_58) <= (safe_add_func_int16_t_s_s(0xDB20L, (l_58 > g_53)))))
    {
        unsigned long long l_79 = 1UL;
        int l_92 = 0xB33A3617L;
        int l_93 = 0x9FEB662FL;
        int l_94 = 0xD5AF5334L;
        int l_95[10] = {(-4L), 0xF389711EL, 0x3844EF14L, 0x3844EF14L, 0xF389711EL, (-4L), 0xF389711EL, 0x3844EF14L, 0x3844EF14L, 0xF389711EL};
        short l_137 = 0xD6DEL;
        char l_138 = 0x85L;
        long long l_139 = 0x3CB9E1FED7957FE2LL;
        char l_143 = 0x64L;
        unsigned short l_148 = 0x1CB3L;
        int *l_151[8] = {&l_71, &l_71, &l_95[1], &l_71, &l_71, &l_95[1], &l_71, &l_71};
        long long l_171 = 1L;
        int *l_192 = &l_116;
        unsigned char l_196 = 248UL;
        int i;
        if (g_53)
        {
            int *l_62 = &l_58;
            int **l_61 = &l_62;
            (*l_61) = &g_46;

            ;
            return g_49;
        }
        else
        {
            unsigned l_72 = 0x98190555L;
            int l_96 = 0x9BDD0B69L;
            int l_97 = (-6L);
            int l_99 = 0x88B036ACL;
            int l_100 = 0x91CC097DL;
            int l_102[3][1];
            unsigned l_103 = 0UL;
            int l_140 = 0xE5335BF8L;
            int l_142 = 0x50434D63L;
            int l_147[1];
            const union U1 **l_205 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_102[i][j] = 0L;
            }
            for (i = 0; i < 1; i++)
                l_147[i] = (-1L);
            for (g_53 = 0; (g_53 <= 4); g_53 += 1)
            {
                int *l_64 = &g_49;
                int ***l_69 = &g_67[5][1];
                unsigned long long *l_70[5][3][6] = {{{(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}}, {{(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}}, {{(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}}, {{(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}}, {{(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}, {(void*)0, &l_63[3][0][4], (void*)0, &l_63[1][6][2], &l_63[3][1][0], &l_63[2][1][0]}}};
                int l_91[7][9][3] = {{{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}, {{0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}, {0xDCBC2B75L, 0x605DBDBDL, (-8L)}}};
                short l_134 = 0x20B7L;
                int l_144[7][7][5] = {{{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}, {{0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}, {0L, 0xBF402CECL, 1L, 1L, 0x9926629DL}}};
                int i, j, k;
                (*l_64) = (*p_57);
                for (l_58 = 4; (l_58 >= 1); l_58 -= 1)
                {
                    (*l_64) ^= (*p_57);
                    for (g_49 = 1; (g_49 <= 4); g_49 += 1)
                    {
                        if ((*p_57))
                            break;
                    }
                }
                if ((g_53 != (safe_sub_func_uint16_t_u_u((((*l_69) = g_67[6][1]) != &g_68), (((*l_64) && (l_72--)) & g_2[0][5])))))
                {
                    int *l_75 = &g_49;
                    int *l_76 = &l_71;
                    int *l_77 = &l_58;
                    int *l_78[10] = {&l_58, &l_58, &l_58, &l_58, &l_58, &l_58, &l_58, &l_58, &l_58, &l_58};
                    int i;
                    l_58 |= (*p_57);
                    l_79++;
                    (*l_75) ^= (*p_57);
                    if ((*p_57))
                    {
                        unsigned short l_82 = 0xB498L;
                        int **l_83 = &l_76;
                        l_82 ^= (*p_57);
                        (*l_83) = &l_71;
                    }
                    else
                    {
                        (*l_76) = ((*g_68) = l_84[0][2][2]);
                        return g_2[0][5];
                    }
                }
                else
                {
                    int *l_85 = &g_49;
                    int *l_86 = &g_49;
                    int *l_87 = &l_58;
                    int *l_88 = &l_58;
                    int *l_89 = (void*)0;
                    int *l_90[8][2] = {{&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}, {&l_71, &g_49}};
                    int i, j;
                    l_103--;
                    return g_36;
                }
                for (g_49 = 0; (g_49 <= 4); g_49 += 1)
                {
                    int l_113[5];
                    short l_141 = (-10L);
                    int l_146 = 0L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_113[i] = 0xB338217DL;
                    for (l_97 = 1; (l_97 <= 4); l_97 += 1)
                    {
                        char l_108[9][9] = {{0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}, {0x3CL, 0x61L, (-8L), 0x73L, (-8L), 0x61L, 0x3CL, 0xCCL, 0xD9L}};
                        long long *l_114 = &g_115;
                        int *l_118 = &l_96;
                        int i, j;
                        if ((*p_57))
                            break;
                        l_117 &= (l_92 ^= (safe_lshift_func_int16_t_s_s((l_108[2][2] >= (safe_rshift_func_int16_t_s_u(l_94, ((safe_div_func_uint16_t_u_u(l_79, 0xFFDFL)) & ((*l_114) = l_113[2]))))), (l_79 == l_116))));
                        (*l_118) = 5L;
                        l_113[4] |= (safe_rshift_func_uint8_t_u_s(0x73L, 4));
                    }
                    for (l_117 = 0; (l_117 <= 4); l_117 += 1)
                    {
                        int *l_121 = (void*)0;
                        int *l_122 = (void*)0;
                        int *l_123 = &l_92;
                        int *l_124 = &l_58;
                        int *l_125 = &l_92;
                        int *l_126 = &l_71;
                        int *l_127 = &l_97;
                        int *l_128 = &l_116;
                        int *l_129 = &l_95[2];
                        int *l_130 = &l_97;
                        int *l_131 = (void*)0;
                        int *l_132[2];
                        int **l_152[6];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_132[i] = &l_95[8];
                        for (i = 0; i < 6; i++)
                            l_152[i] = &l_124;
                        ++l_148;
                        l_151[7] = l_151[1];
                    }
                }
            }
            for (l_99 = 0; (l_99 <= 0); l_99 = safe_add_func_uint16_t_u_u(l_99, 1))
            {
                unsigned l_155[7][4][9] = {{{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}, {{0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}, {0UL, 0UL, 0xD93545C0L, 0x6B748E91L, 0x8198BDFEL, 0UL, 1UL, 0x365276CBL, 2UL}}};
                int i, j, k;
                l_155[0][2][7]--;
                l_116 &= (safe_mul_func_int16_t_s_s((l_103 != g_49), l_155[0][2][7]));
                for (l_137 = 2; (l_137 != (-8)); l_137--)
                {
                    if ((*p_57))
                        break;
                }
            }
            for (g_49 = (-7); (g_49 != 19); g_49++)
            {
                unsigned l_182 = 18446744073709551615UL;
                int l_188 = 0x4EF5BD3AL;
                unsigned char *l_202 = &l_196;
                for (l_71 = (-4); (l_71 < (-13)); l_71 = safe_sub_func_int64_t_s_s(l_71, 7))
                {
                    unsigned long long l_166 = 0xAFCE22FE3B4D8D37LL;
                    int l_167 = 0x6B217372L;
                    int l_168[5] = {0xB17C0A01L, 0xADD14C69L, 0xB17C0A01L, 0xADD14C69L, 0xB17C0A01L};
                    int i;
                    l_168[2] = (l_167 = (l_166 = ((&g_101 != &g_101) > l_136)));
                }
                for (g_135 = 0; (g_135 < (-3)); g_135 = safe_sub_func_uint32_t_u_u(g_135, 9))
                {
                    long long *l_172 = &l_139;
                    int l_175 = 1L;
                    int l_178 = 0xE80C1388L;
                    l_171 ^= (*p_57);
                    if ((g_46 > ((*l_172) &= g_49)))
                    {
                        unsigned l_173 = 1UL;
                        if ((*p_57))
                            break;
                        l_173 = (-1L);
                        g_174 = l_71;
                    }
                    else
                    {
                        short l_177 = 1L;
                        l_175 = (*p_57);
                        p_57 = g_176;

                        ;
                        --l_179[5];
                        if (l_182)
                            continue;
                    }
                }
                for (l_94 = 1; (l_94 <= 24); l_94 = safe_add_func_uint16_t_u_u(l_94, 3))
                {
                    int *l_189[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_189[i] = (void*)0;
                    if ((*p_57))
                    {
                        union U1 **l_185 = (void*)0;
                        union U1 *l_187[10][5];
                        union U1 **l_186 = &l_187[1][1];
                        int **l_190 = (void*)0;
                        int **l_191 = &l_151[3];
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_187[i][j] = &g_45;
                        }
                        (*l_186) = (void*)0;


                        l_188 = l_140;
                        (*l_191) = l_189[5];
                        l_193 = l_192;

                        ;
                    }
                    else
                    {
                        int l_197[6][10][4] = {{{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}, {{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}, {{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}, {{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}, {{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}, {{0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}, {0xAA0FAB28L, 1L, 1L, 0x0E156FA1L}}};
                        long long ***l_199 = &g_198;
                        int i, j, k;
                        (*l_192) |= (!(l_188 |= (safe_div_func_uint16_t_u_u(l_196, l_197[3][0][3]))));
                        (*l_199) = g_198;
                    }
                }
                (*l_192) = ((l_72 || (((((safe_mul_func_uint8_t_u_u(l_182, (0xB79A99503C98C8E7LL || l_97))) | ((--(*l_202)) || (l_205 == (void*)0))) | (*l_193)) == (0x5EB7L != 1L)) && (-8L))) || 18446744073709551613UL);
            }

            ;

            ;
            return l_103;
        }
    }
    else
    {
        (*g_176) = ((l_206 = (void*)0) == (void*)0);

        ;
    }

    ;
    l_211[3][1]++;
    (*l_193) &= ((*g_68) = (*p_57));
    return g_145[0][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_145[i][j], "g_145[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3, "g_224.f3", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_393[i], "g_393[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_516[i], "g_516[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_713[i][j][k], "g_713[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_806.f0, "g_806.f0", print_hash_value);
    transparent_crc(g_806.f1, "g_806.f1", print_hash_value);
    transparent_crc(g_806.f2, "g_806.f2", print_hash_value);
    transparent_crc(g_806.f3, "g_806.f3", print_hash_value);
    transparent_crc(g_874.f0, "g_874.f0", print_hash_value);
    transparent_crc(g_874.f1, "g_874.f1", print_hash_value);
    transparent_crc(g_874.f2, "g_874.f2", print_hash_value);
    transparent_crc(g_874.f3, "g_874.f3", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
