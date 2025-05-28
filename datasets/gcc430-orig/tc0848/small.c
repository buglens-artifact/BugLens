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



static int * volatile g_2 = (void*)0;
static volatile int g_4 = 0L;
static volatile int g_5[4] = {1L, 6L, 1L, 6L};
static int g_6 = 0x43D9532BL;
static int g_16 = 0x9F6A715CL;
static unsigned g_44[6][4][1] = {{{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}};
static int *g_72 = &g_16;
static int * volatile *g_71 = &g_72;
static unsigned long long g_73 = 0x74F207E8793EB104LL;
static short g_80 = (-2L);
static unsigned char g_105 = 0x93L;
static int g_106[9] = {0x359122B3L, 0L, 0x359122B3L, 0L, 0x359122B3L, 0L, 0x359122B3L, 0L, 0x359122B3L};
static long long g_109 = 0x5DA263B4A8206D70LL;
static unsigned g_120 = 18446744073709551615UL;
static char g_123 = (-5L);
static int **g_142[3][6] = {{&g_72, &g_72, &g_72, &g_72, &g_72, &g_72}, {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72}, {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72}};
static unsigned short **g_153 = (void*)0;
static unsigned short g_156 = 65531UL;
static unsigned short *g_155[8] = {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156};
static unsigned short **g_154 = &g_155[0];
static int g_158 = (-4L);
static unsigned g_193 = 3UL;
static unsigned char g_209 = 0xF8L;
static int g_220[2] = {0x5E0BBD19L, 0x5E0BBD19L};
static unsigned char * volatile g_255 = &g_209;
static unsigned char * volatile * volatile g_254 = &g_255;
static short g_281 = 0x4DDFL;
static int * volatile g_308 = &g_106[7];
static int * volatile *g_307 = &g_308;
static int * volatile ** volatile g_309[7][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
static int * volatile ** volatile g_310[6][3] = {{&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}};
static int * volatile ** volatile g_311[2][3] = {{(void*)0, &g_307, (void*)0}, {(void*)0, &g_307, (void*)0}};
static unsigned short g_319 = 65535UL;
static unsigned g_335[10] = {0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L, 0xECC6F6B7L};
static unsigned char g_447[6][8][5] = {{{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}, {{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}, {{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}, {{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}, {{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}, {{255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}, {255UL, 255UL, 0x80L, 255UL, 255UL}}};
static int *g_465 = &g_106[6];
static int **g_464 = &g_465;
static short *g_514 = &g_80;
static unsigned short *** volatile g_555 = (void*)0;
static unsigned short *** volatile g_556[1][2][7] = {{{&g_154, &g_154, &g_154, &g_153, (void*)0, &g_153, &g_154}, {&g_154, &g_154, &g_154, &g_153, (void*)0, &g_153, &g_154}}};
static long long g_573 = 4L;
static int *g_606 = &g_158;
static char g_629 = 1L;
static char g_632 = 0xE4L;
static unsigned short g_638 = 65534UL;
static volatile long long g_700 = 0xADCD3EA30B1CEC5CLL;
static int *g_741[7][5] = {{&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}, {&g_220[1], &g_220[1], &g_6, &g_220[1], &g_220[1]}};
static int g_742 = 0xE2F2F7CCL;
static int *g_755 = &g_158;
static unsigned **g_771 = (void*)0;
static unsigned *** volatile g_770[5] = {&g_771, &g_771, &g_771, &g_771, &g_771};
static char *g_837[9] = {&g_629, &g_629, &g_629, &g_629, &g_629, &g_629, &g_629, &g_629, &g_629};
static char ** volatile g_836 = &g_837[5];
static unsigned **g_858 = (void*)0;
static unsigned *** volatile g_857 = &g_858;
static unsigned long long g_933 = 0x0A06AF7A6FC1EE87LL;
static long long g_956[9] = {0L, 0L, 0x87DBAEDCC17D7C53LL, 0L, 0L, 0x87DBAEDCC17D7C53LL, 0L, 0L, 0x87DBAEDCC17D7C53LL};
static volatile unsigned char g_961 = 0x06L;
static volatile unsigned char * volatile g_960 = &g_961;
static volatile unsigned char * volatile *g_959 = &g_960;
static int g_1001[4] = {0x8DF84298L, 0x8DF84298L, 0x8DF84298L, 0x8DF84298L};
static unsigned char *g_1107[7] = {(void*)0, &g_447[0][6][2], (void*)0, &g_447[0][6][2], (void*)0, &g_447[0][6][2], (void*)0};
static volatile unsigned long long g_1114 = 18446744073709551609UL;
static volatile unsigned long long * volatile g_1113 = &g_1114;
static volatile unsigned long long * volatile *g_1112[4][2] = {{&g_1113, &g_1113}, {&g_1113, &g_1113}, {&g_1113, &g_1113}, {&g_1113, &g_1113}};
static volatile long long g_1135 = (-1L);
static int g_1203 = 4L;
static char g_1208 = 0L;
static unsigned char g_1209 = 0UL;
static unsigned *g_1213[4][5] = {{&g_44[4][3][0], &g_44[4][3][0], &g_44[5][0][0], &g_44[4][3][0], &g_44[4][3][0]}, {&g_44[4][3][0], &g_44[4][3][0], &g_44[5][0][0], &g_44[4][3][0], &g_44[4][3][0]}, {&g_44[4][3][0], &g_44[4][3][0], &g_44[5][0][0], &g_44[4][3][0], &g_44[4][3][0]}, {&g_44[4][3][0], &g_44[4][3][0], &g_44[5][0][0], &g_44[4][3][0], &g_44[4][3][0]}};
static unsigned * volatile *g_1212 = &g_1213[3][1];
static unsigned * volatile ** volatile g_1211 = &g_1212;
static unsigned * volatile ** volatile *g_1210 = &g_1211;
static int g_1268 = 0xCC427A5CL;
static unsigned g_1275 = 8UL;
static short g_1319 = 0xA4C4L;
static int *g_1372[8][5] = {{(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}, {(void*)0, &g_220[0], &g_220[1], &g_1203, (void*)0}};



static unsigned func_1(void);
static short func_9(unsigned p_10, long long p_11);
static int * func_18(unsigned short p_19, int p_20, unsigned char p_21, int * p_22);
static char func_25(short p_26, int * p_27, int * p_28);
static int * func_30(int * p_31, int * p_32);
static int * func_33(int ** p_34, int * p_35, unsigned short p_36, int p_37, int p_38);
static int func_45(int * p_46, unsigned char p_47);
static int * func_48(int ** p_49, char p_50, unsigned char p_51, int ** p_52);
static int ** func_53(char p_54, int * p_55);
static unsigned short func_61(int * p_62, int p_63, int * p_64, unsigned char p_65, unsigned char p_66);
static unsigned func_1(void)
{
    int * volatile *l_3 = &g_2;
    int l_824 = (-1L);
    short *l_843 = &g_281;
    int l_902 = 0x231EB4E6L;
    int l_926 = 3L;
    char *l_967 = &g_123;
    char l_984 = 0x65L;
    int *l_1034 = (void*)0;
    unsigned l_1068 = 18446744073709551607UL;
    int *l_1080 = &g_220[0];
    int **l_1216 = &g_465;
    int *l_1229 = &g_158;
    int l_1234[2];
    long long l_1274 = 9L;
    int **l_1277 = &g_606;
    long long l_1280 = 0xFF48A8BC2C196062LL;
    int l_1305 = 7L;
    int *l_1312 = &g_6;
    int *l_1313 = &g_1203;
    int l_1314 = 1L;
    unsigned long long *l_1315[6] = {&g_73, (void*)0, &g_73, (void*)0, &g_73, (void*)0};
    short **l_1316 = &l_843;
    unsigned short l_1317 = 0x92C8L;
    unsigned char *l_1318[3][4];
    int l_1320[1][9][8] = {{{(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}, {(-9L), 0x809A005FL, (-10L), 0x809A005FL, (-9L), 0x809A005FL, (-10L), 0x809A005FL}}};
    int l_1355 = 9L;
    int *l_1379 = &g_220[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1234[i] = 8L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_1318[i][j] = &g_105;
    }
lbl_995:
    (*l_3) = g_2;
    for (g_6 = (-17); (g_6 < 23); ++g_6)
    {
        short l_825 = 0L;
        int l_828 = 1L;
        unsigned *l_838 = &g_193;
        int l_900 = 0x4147710EL;
        char l_901[7] = {0xF2L, 0xF2L, 3L, 0xF2L, 0xF2L, 3L, 0xF2L};
        int l_914 = 1L;
        unsigned l_920 = 9UL;
        unsigned char *l_958 = &g_447[0][6][2];
        unsigned char **l_957 = &l_958;
        char *l_964 = &g_632;
        unsigned ***l_976 = &g_858;
        int l_979 = 0x2BD287DCL;
        long long l_991 = (-3L);
        unsigned char l_1078 = 0x1FL;
        unsigned long long *l_1116 = &g_933;
        unsigned long long **l_1115 = &l_1116;
        short l_1174 = (-1L);
        unsigned short ***l_1178[1];
        int *l_1179[10][2][4] = {{{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}, {{&l_824, &l_926, &g_220[0], (void*)0}, {&l_824, &l_926, &g_220[0], (void*)0}}};
        long long l_1180 = (-1L);
        int *l_1195 = &g_16;
        unsigned short l_1214 = 0UL;
        unsigned short *l_1224 = &g_638;
        unsigned l_1236[6][7] = {{4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}, {4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}, {4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}, {4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}, {4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}, {4294967295UL, 4294967287UL, 0xD055A188L, 0x865A64F4L, 0x0275A987L, 0x865A64F4L, 0xD055A188L}};
        unsigned short l_1242 = 65535UL;
        unsigned long long l_1276 = 0x6694F56638CFB731LL;
        int ***l_1278 = &g_142[2][1];
        unsigned l_1279 = 0x7B8787CEL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1178[i] = (void*)0;
    }
    if ((*l_1229))
    {
        unsigned short l_1283 = 0xBABEL;
        unsigned char *l_1286[5][4] = {{&g_105, &g_105, &g_209, &g_209}, {&g_105, &g_105, &g_209, &g_209}, {&g_105, &g_105, &g_209, &g_209}, {&g_105, &g_105, &g_209, &g_209}, {&g_105, &g_105, &g_209, &g_209}};
        unsigned char **l_1287 = (void*)0;
        int i, j;
        (*l_1229) = ((*g_514) < ((safe_rshift_func_int8_t_s_u((l_1283 | (safe_mod_func_int64_t_s_s((l_1286[0][1] == (g_1107[3] = &g_447[0][6][2])), (**l_1277)))), (safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((((*l_1229) , (**g_836)) && (**g_254)), 14)) & (safe_unary_minus_func_int16_t_s((((safe_lshift_func_int16_t_s_u(l_1283, 5)) , (*l_1080)) && (*l_1080))))) , 18446744073709551615UL) || 1UL), 0x27DB32AEL)))) , 1UL));
    }
    else
    {
        long long *l_1297 = &l_1274;
        int *l_1300 = &g_220[1];
        int l_1301 = (-5L);
        int l_1302[4] = {1L, 0xF02F5FF4L, 1L, 0xF02F5FF4L};
        int i;
        l_1302[1] |= ((*l_1300) = (safe_mod_func_uint64_t_u_u((*g_1113), (((*l_1297) = 0xB139C07FE9271E3CLL) | (2L || ((safe_mod_func_uint8_t_u_u(((func_61(l_1300, (**g_464), ((*l_1277) = (((((g_335[4] < func_25((*l_1300), l_1300, func_30(l_1300, (*l_1277)))) , 0xF1315F94L) && g_106[1]) , (*g_72)) , l_1300)), (*l_1080), (*l_1229)) , (*l_1300)) || (-1L)), l_1301)) && 0x35L))))));
    }
    if (((safe_lshift_func_int8_t_s_s((((9L ^ ((*g_255) = ((&l_843 == ((((l_1305 , (g_73 = (safe_mod_func_int8_t_s_s(((*g_72) || ((*l_1313) |= func_25((((safe_lshift_func_uint8_t_u_u((((*g_755) = (((**g_71) = (**l_1277)) >= (((((**g_836) & (((~(!(*l_1229))) > ((*l_1312) = (func_9(((g_933 != ((safe_lshift_func_int8_t_s_u(0x71L, 5)) & g_105)) | 1UL), g_44[4][3][0]) <= 0x9C1E2105L))) > 0UL)) != 1L) , (-1L)) & 0UL))) >= 1L), 6)) , (*l_1080)) >= 1L), (*l_1277), (*l_1277)))), l_1314)))) != g_80) > g_1001[3]) , l_1316)) | l_1317))) & g_1319) && (*l_1312)), l_1320[0][6][4])) , (*l_1312)))
    {
        int *l_1337[4][1];
        int l_1342 = 1L;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1337[i][j] = &l_1314;
        }
        for (l_1317 = 17; (l_1317 < 33); ++l_1317)
        {
            int *l_1340 = &g_1203;
            unsigned long long l_1353 = 0x3D64289147E7C4AFLL;
        }
    }
    else
    {
        int l_1356 = 9L;
        for (g_16 = 0; (g_16 >= 0); g_16 -= 1)
        {
            short l_1361 = (-3L);
            unsigned l_1376 = 0x0E441617L;
            if (l_1356)
                break;
            if (l_1356)
                goto lbl_995;
            for (l_1068 = 0; (l_1068 <= 2); l_1068 += 1)
            {
                unsigned long long l_1375 = 0x9E65883450B45720LL;
                int *l_1380 = (void*)0;
                if ((*g_755))
                    break;
                for (g_1319 = 1; (g_1319 >= 0); g_1319 -= 1)
                {
                    for (g_109 = 3; (g_109 >= 0); g_109 -= 1)
                    {
                        int i;
                        g_5[g_109] ^= l_1234[g_1319];
                    }
                }
                for (l_1355 = 2; (l_1355 >= 0); l_1355 -= 1)
                {
                    int l_1381 = 0x593A588CL;
                    unsigned char l_1383 = 255UL;
                    for (g_105 = 0; (g_105 <= 0); g_105 += 1)
                    {
                        unsigned short *l_1362 = &g_319;
                        char l_1382 = 0L;
                        int i, j, k;
                        g_220[(g_105 + 1)] = ((safe_rshift_func_uint16_t_u_s((g_220[g_16] , (safe_add_func_uint64_t_u_u(g_220[g_16], g_447[(g_105 + 5)][(g_16 + 2)][(g_105 + 2)]))), 11)) <= ((((*l_1362) = func_9(((**g_1212) = func_45(&l_1356, ((0x70076CECL == l_1361) > (*g_1113)))), g_335[4])) <= (*g_514)) | (*g_514)));
                        (*g_606) &= (safe_mod_func_int8_t_s_s(((*l_967) = ((!(safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((*g_514) > 0xB8DEL) , ((((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s(l_1382)), g_5[1])) < l_1356) != l_1383) >= (*g_514))), g_335[9])), g_335[7]))) , 0x3FL)), 0xE5L));
                    }
                    for (l_1376 = 0; (l_1376 <= 2); l_1376 += 1)
                    {
                        int i, j, k;
                        if (g_447[(g_16 + 4)][(l_1355 + 5)][(g_16 + 2)])
                            break;
                        (*l_3) = (void*)0;
                        (*l_1080) = g_447[l_1355][(g_16 + 6)][g_16];
                        if (g_447[(l_1376 + 2)][(l_1355 + 1)][(g_16 + 3)])
                            continue;
                    }
                    (**l_1277) = 9L;
                }
            }
        }
        (*l_1312) = (-3L);
        return l_1356;
    }
    return (**l_1277);
}







static short func_9(unsigned p_10, long long p_11)
{
    unsigned l_17[1][10] = {{0xD5F8D9A2L, 0x3A00D0E7L, 4UL, 4UL, 0x3A00D0E7L, 0xD5F8D9A2L, 0x3A00D0E7L, 4UL, 4UL, 0x3A00D0E7L}};
    int *l_40 = &g_6;
    int **l_39 = &l_40;
    unsigned short l_41 = 0xBC62L;
    int *l_230[1];
    int *l_433 = &g_158;
    unsigned l_488[6] = {0x70A7C3BAL, 8UL, 0x70A7C3BAL, 8UL, 0x70A7C3BAL, 8UL};
    short *l_517[6][10] = {{(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}, {(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}, {(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}, {(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}, {(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}, {(void*)0, (void*)0, &g_281, (void*)0, &g_80, &g_80, &g_80, (void*)0, &g_80, &g_80}};
    unsigned long long *l_538 = &g_73;
    int *l_543 = &g_220[1];
    short l_549 = 0xF3E8L;
    int l_574 = 0x3CFBC01EL;
    unsigned short l_616 = 0xBC20L;
    unsigned *l_619 = (void*)0;
    unsigned **l_618 = &l_619;
    unsigned char *l_646 = &g_447[0][6][2];
    unsigned l_766 = 18446744073709551615UL;
    int l_823 = 0xB2BDA5E7L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_230[i] = &g_220[1];
    return p_10;
}







static int * func_18(unsigned short p_19, int p_20, unsigned char p_21, int * p_22)
{
    int *l_231 = (void*)0;
    int l_248[9];
    int *l_249 = &g_220[1];
    unsigned char * volatile * volatile l_256 = &g_255;
    char l_278 = 0x94L;
    int l_286 = 3L;
    char l_385 = 0x54L;
    int *l_386 = &g_6;
    int *l_432 = (void*)0;
    int i;
    for (i = 0; i < 9; i++)
        l_248[i] = 0xB6AC64C1L;
lbl_351:
    if ((*p_22))
    {
        short l_234[10][9][2] = {{{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}, {{1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}, {1L, 0xBBACL}}};
        int **l_235 = &l_231;
        char l_244 = 0xE2L;
        long long l_245 = 0x4D7B3FF0BAD2BFC7LL;
        short l_250 = (-1L);
        int *l_251 = &g_158;
        unsigned short l_252 = 0x924EL;
        unsigned long long l_253[3][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_253[i][j] = 1UL;
        }
        l_231 = l_231;
        (*g_71) = (*g_71);
        (*p_22) = (safe_lshift_func_int16_t_s_u((((l_234[9][5][0] | func_61(((*l_235) = &p_20), (safe_lshift_func_int8_t_s_u(((!(-3L)) ^ func_45(func_48(&g_72, ((((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_21, 4)), (safe_mod_func_int16_t_s_s((l_244 >= l_245), func_25((((safe_rshift_func_int16_t_s_u(((p_21 || (g_220[0] > g_158)) > (*p_22)), p_20)) | 0x4FD7L) , l_248[6]), &l_248[6], l_249))))) , &l_249) == (void*)0) , 0x7F5D7FD6L) , &p_22) != (void*)0), l_250, l_235), p_19)), 4)), l_251, g_4, l_252)) != p_19) | p_21), 15));
        (*l_231) = ((-1L) > (!(((**l_235) != ((func_61(func_30((l_249 = &l_248[2]), &l_248[6]), g_220[1], func_33(&g_72, func_33(&g_72, (((((1UL != p_19) | (*l_231)) & 7UL) , g_120) , (*l_235)), p_19, g_123, (**g_71)), l_253[0][1], p_20, (*l_251)), g_5[2], g_209) && g_109) < p_20)) ^ (*l_231))));
    }
    else
    {
        unsigned l_265[7][10] = {{18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}, {18446744073709551608UL, 18446744073709551608UL, 0UL, 1UL, 0xCAF31EC1L, 18446744073709551615UL, 0UL, 18446744073709551608UL, 18446744073709551613UL, 0UL}};
        short *l_273 = (void*)0;
        short *l_274 = &g_80;
        char *l_275 = &g_123;
        short *l_279 = (void*)0;
        short *l_280 = &g_281;
        int l_282 = 0x64478F59L;
        unsigned char *l_283 = &g_105;
        int *l_284 = (void*)0;
        int *l_285 = &g_158;
        int i, j;
        l_256 = g_254;
        l_286 &= ((**g_71) = ((*l_285) &= (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((l_265[2][0] > (g_106[6] != p_19)) , ((*l_283) |= ((((p_20 < ((safe_unary_minus_func_int8_t_s((l_282 |= ((!func_61(&l_248[1], (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((((*l_274) = l_265[2][0]) <= ((*l_280) = (p_19 | (((*l_275) = g_106[6]) & ((((safe_rshift_func_uint8_t_u_s((&g_193 != (void*)0), 3)) <= l_278) | p_21) < p_21))))), (**g_254))), p_20)), p_21)), &l_248[6], g_220[1], g_209)) >= p_19)))) , 1UL)) ^ l_265[5][0]) < p_20) < 0x9EL))), 5)), p_20)), 3))));
    }
lbl_398:
    for (g_156 = (-22); (g_156 == 3); g_156++)
    {
        int l_293 = 0x3044C8E3L;
        short *l_298 = (void*)0;
        short *l_299 = (void*)0;
        short *l_300[9][10][2] = {{{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}, {{&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}, {&g_281, &g_281}}};
        long long *l_301[9] = {&g_109, (void*)0, &g_109, (void*)0, &g_109, (void*)0, &g_109, (void*)0, &g_109};
        int l_302 = 0x242E0239L;
        char *l_329 = &l_278;
        int l_368 = 0x8E436B11L;
        int i, j, k;
        if ((safe_mod_func_uint32_t_u_u(4294967295UL, func_25(((1L & ((*p_22) = (*l_249))) && (safe_sub_func_int32_t_s_s((l_293 && g_6), ((l_302 |= (safe_add_func_uint64_t_u_u(p_21, (safe_mod_func_uint16_t_u_u(1UL, (g_281 = func_45(&l_248[2], p_19))))))) > p_20)))), &l_248[6], &l_248[6]))))
        {
            int *l_313 = &g_220[1];
            (**g_71) = (safe_lshift_func_int16_t_s_s(p_19, 11));
            for (g_158 = 0; (g_158 < (-28)); g_158--)
            {
                unsigned char l_327 = 249UL;
                int *l_341 = (void*)0;
                if ((*p_22))
                {
                    for (l_293 = 1; (l_293 >= 0); l_293 -= 1)
                    {
                        int * volatile **l_312 = &g_307;
                        (*l_312) = g_307;
                    }
                    return l_313;
                }
                else
                {
                    unsigned short *l_318 = &g_319;
                    int l_326 = 0xC8DC7873L;
                    unsigned long long *l_328 = &g_73;
                    short l_330 = 0L;
                    unsigned *l_333 = &g_193;
                    unsigned *l_334[9][3] = {{&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}, {&g_335[1], &g_335[1], &g_335[4]}};
                    int l_336 = 0L;
                    int i, j;
                    (*g_72) = (safe_add_func_uint32_t_u_u(g_106[6], (safe_mod_func_int32_t_s_s(((*p_22) ^ (((((((*l_328) &= (p_19 < ((g_123 , (l_327 = (((*l_318) = p_19) , (p_20 & ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(l_302, (((safe_lshift_func_int16_t_s_s(l_326, func_45(l_313, p_21))) > p_20) , 0x7DE9L))), l_326)) , 1UL))))) != 0xD6L))) | g_156) , 0x66B4L) , (void*)0) == l_329) >= g_16)), l_330))));
                    (*p_22) = (safe_mod_func_int64_t_s_s(((*p_22) > (l_336 = ((*l_333) &= p_20))), (((safe_sub_func_int8_t_s_s(((*g_255) | ((((l_327 , g_106[5]) , (func_25(((0x370A5FE254C32484LL || (safe_add_func_uint64_t_u_u(((*l_328) = (4UL >= p_20)), p_20))) , p_20), &l_326, l_341) , p_19)) ^ g_105) || p_20)), l_326)) >= (*l_249)) , 0x0D5BCDC44B757397LL)));
                }
            }
        }
        else
        {
            int ***l_345 = &g_142[2][1];
            (**g_71) |= (safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_19)), (l_345 != &g_142[2][1])));
            if (((*p_22) <= ((0x89L | (((((~(((l_302 | 0x2716L) , (g_281 ^= (g_80 = (g_44[5][0][0] | (safe_mod_func_int64_t_s_s((g_109 = (((l_302 == 1L) & (((func_45(func_48(((*g_255) , ((*l_345) = &g_72)), p_20, p_20, &g_72), g_109) < (*p_22)) | (-5L)) == (*l_249))) > p_21)), (-1L))))))) < 65528UL)) , 0L) , p_21) && g_281) <= l_293)) | 0UL)))
            {
                int *l_348[9] = {&g_6, &g_6, &g_158, &g_6, &g_6, &g_158, &g_6, &g_6, &g_158};
                int i;
                l_248[8] &= (*p_22);
                if ((*p_22))
                    continue;
            }
            else
            {
                for (l_302 = 0; (l_302 <= (-24)); l_302 = safe_sub_func_int8_t_s_s(l_302, 3))
                {
                    if (g_158)
                        goto lbl_351;
                }
                if ((**g_71))
                    break;
            }
        }
        p_20 |= (safe_add_func_uint64_t_u_u(0x2FC2B95618E5596BLL, ((*l_249) = ((*l_249) == 0xD2B6L))));
        for (g_105 = (-19); (g_105 > 15); g_105 = safe_add_func_uint32_t_u_u(g_105, 1))
        {
            long long *l_357 = &g_109;
            int *l_358[4];
            int i;
            for (i = 0; i < 4; i++)
                l_358[i] = &g_16;
            (*g_72) &= 0xDB440296L;
            for (g_109 = 0; (g_109 <= 1); g_109 += 1)
            {
                int *l_367 = &l_248[6];
                for (l_278 = 1; (l_278 >= 0); l_278 -= 1)
                {
                    int *l_356 = &l_248[5];
                    unsigned long long *l_371 = &g_73;
                    int l_382 = 8L;
                    if (((((-5L) != func_45(l_356, (**g_254))) | (&g_109 != l_357)) == 5UL))
                    {
                        if (l_293)
                            break;
                    }
                    else
                    {
                        int l_361[1][9][8] = {{{4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}, {4L, 0x04A883AAL, 1L, 0x313F41B2L, 0x3FAD1BD5L, 0x313F41B2L, 1L, 0x04A883AAL}}};
                        int i, j, k;
                        (*g_71) = l_358[2];
                        l_368 &= ((safe_rshift_func_int8_t_s_u(((l_361[0][2][4] < 8UL) < func_61(&l_302, ((**g_307) = ((safe_lshift_func_int8_t_s_u(p_19, 5)) == (p_20 | (safe_unary_minus_func_uint8_t_u((((l_302 = p_19) <= (l_361[0][2][4] & (safe_rshift_func_int16_t_s_s(g_220[1], p_20)))) , 0x33L)))))), l_367, g_156, l_293)), g_335[6])) > p_19);
                        if (l_286)
                            goto lbl_351;
                        if ((*l_356))
                            break;
                    }
                }
            }
        }
    }
    (*p_22) = ((p_21 , func_61(func_33(&g_72, func_30(&l_286, func_48(&g_72, g_5[2], ((p_19 | ((safe_lshift_func_int16_t_s_s(1L, ((g_44[4][3][0] > ((((((l_385 & p_19) || (*l_249)) <= (*l_249)) != (*l_249)) & p_20) , (*l_249))) | (*p_22)))) | 0L)) | (**g_71)), &l_231)), p_19, (*l_249), (*p_22)), (*l_249), l_386, p_20, p_21)) || g_5[2]);
    for (g_156 = 1; (g_156 <= 8); g_156 += 1)
    {
        int *l_393 = &g_6;
        unsigned char *l_394 = (void*)0;
        unsigned char *l_395 = &g_105;
        short *l_396 = &g_281;
        short *l_397 = &g_80;
        int *l_407 = &g_220[1];
        int *l_419 = &l_248[7];
        int i;
        if ((safe_add_func_int16_t_s_s(((*l_397) ^= ((*l_396) |= (((g_106[g_156] | g_106[g_156]) == ((*l_395) &= (safe_add_func_uint32_t_u_u(((*p_22) && (safe_add_func_int32_t_s_s(((*p_22) = (*p_22)), (~(((g_106[3] >= (func_25(p_20, l_393, &p_20) ^ (*l_386))) , (*g_255)) , 0x98062A09L))))), (*l_386))))) == g_44[5][2][0]))), p_20)))
        {
            (*g_71) = (*g_71);
            return l_393;
        }
        else
        {
            int *l_406 = &g_106[g_156];
            int **l_405 = &l_406;
            for (g_123 = 0; (g_123 <= 8); g_123 += 1)
            {
                unsigned long long l_401 = 0x661153BA3348672FLL;
                int *l_418 = &g_6;
                for (g_80 = 0; (g_80 <= 2); g_80 += 1)
                {
                    for (g_16 = 2; (g_16 >= 0); g_16 -= 1)
                    {
                        if (p_21)
                            goto lbl_398;
                    }
                }
                l_401 |= (safe_lshift_func_int16_t_s_u(p_20, 13));
                for (g_73 = 0; (g_73 <= 2); g_73 += 1)
                {
                    unsigned l_402 = 4294967291UL;
                    int *l_417 = &g_220[1];
                }
            }
        }
        for (g_105 = 0; (g_105 <= 1); g_105 += 1)
        {
            short l_431 = 0x8D15L;
            (**g_71) ^= ((*l_419) == l_431);
            (**g_71) &= l_431;
        }
    }
    return l_432;
}







static char func_25(short p_26, int * p_27, int * p_28)
{
    int *l_227[1];
    int **l_228 = &g_72;
    int i;
    for (i = 0; i < 1; i++)
        l_227[i] = &g_220[1];
    (*l_228) = (l_227[0] = l_227[0]);
    return g_156;
}







static int * func_30(int * p_31, int * p_32)
{
    unsigned long long l_172[9] = {1UL, 0x593B29BC1B99DA1BLL, 1UL, 0x593B29BC1B99DA1BLL, 1UL, 0x593B29BC1B99DA1BLL, 1UL, 0x593B29BC1B99DA1BLL, 1UL};
    unsigned short *l_186 = &g_156;
    int *l_226 = &g_220[0];
    int i;
    for (g_109 = 0; (g_109 != 18); g_109 = safe_add_func_int32_t_s_s(g_109, 6))
    {
        long long l_178 = 6L;
        int *l_183 = (void*)0;
        unsigned char l_210[8] = {0x24L, 0x20L, 0x24L, 0x20L, 0x24L, 0x20L, 0x24L, 0x20L};
        int i;
        for (g_156 = 8; (g_156 < 39); g_156 = safe_add_func_int8_t_s_s(g_156, 9))
        {
            unsigned short *l_168 = &g_156;
            int l_179[4];
            int ***l_182 = &g_142[0][0];
            unsigned *l_191 = (void*)0;
            unsigned *l_192[1][2];
            short *l_194 = &g_80;
            int i, j;
            for (i = 0; i < 4; i++)
                l_179[i] = 0x5F3A4FFDL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_192[i][j] = &g_193;
            }
            if ((*g_72))
                break;
        }
    }
    return l_226;
}







static int * func_33(int ** p_34, int * p_35, unsigned short p_36, int p_37, int p_38)
{
    unsigned char l_58 = 255UL;
    char l_82 = (-1L);
    int *l_83 = &g_6;
    int *l_157 = &g_158;
    for (p_37 = 0; (p_37 <= 0); p_37 += 1)
    {
        return &g_16;
    }
    return l_157;
}







static int func_45(int * p_46, unsigned char p_47)
{
    unsigned short **l_151 = (void*)0;
    unsigned short ***l_152[5][10] = {{&l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, (void*)0, &l_151}, {&l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, (void*)0, &l_151}, {&l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, (void*)0, &l_151}, {&l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, (void*)0, &l_151}, {&l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, &l_151, (void*)0, &l_151}};
    int i, j;
    g_154 = (g_153 = l_151);
    return (*p_46);
}







static int * func_48(int ** p_49, char p_50, unsigned char p_51, int ** p_52)
{
    int *l_150 = &g_6;
    return l_150;
}







static int ** func_53(char p_54, int * p_55)
{
    unsigned l_94 = 1UL;
    short *l_95 = &g_80;
    int l_97 = 0xF43C6BD6L;
    unsigned char *l_116 = (void*)0;
    unsigned char l_140 = 0x0FL;
    int l_141 = 0x52BDAD61L;
    int **l_149 = &g_72;
    for (p_54 = 0; (p_54 <= 0); p_54 += 1)
    {
        int l_96[3][4][4] = {{{1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}}, {{1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}}, {{1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}, {1L, 1L, 0x9C2B513AL, 0xA5BFF831L}}};
        int **l_98 = (void*)0;
        int **l_99 = (void*)0;
        int **l_100 = &g_72;
        long long l_101 = 0xA7FAFEA3E439E4EALL;
        int *l_102[9][5] = {{&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}, {&g_6, &g_16, &l_96[0][1][1], &l_97, (void*)0}};
        unsigned short l_103 = 65535UL;
        unsigned char *l_104[10] = {&g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105};
        long long *l_107 = &l_101;
        long long *l_108 = &g_109;
        char l_118 = 0x1EL;
        unsigned short l_127 = 1UL;
        int i, j, k;
        l_97 |= (safe_sub_func_int32_t_s_s((-7L), (safe_mod_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(((((*g_72) ^= ((18446744073709551615UL >= 3UL) , (*p_55))) == ((*p_55) >= (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((g_44[4][3][0] , ((l_94 < l_94) , (l_95 != (void*)0))), g_80)), g_73)))) , 1UL), 0x3EL)) <= p_54) , 0L), l_96[1][0][2]))));
        (*g_72) = ((((*l_108) |= ((((*l_107) = (p_54 < ((*l_95) = g_105))) <= g_44[1][0][0]) && g_73)) < p_54) ^ g_105);
        if ((*g_72))
            break;
        for (g_73 = 0; (g_73 <= 0); g_73 += 1)
        {
            int **l_117 = &l_102[1][0];
            int l_137 = (-1L);
            short *l_147[10][7][3] = {{{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}, {{&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80}}};
            int i, j, k;
        }
    }
    (*l_149) = &l_97;
    return &g_72;
}







static unsigned short func_61(int * p_62, int p_63, int * p_64, unsigned char p_65, unsigned char p_66)
{
    long long l_76[6] = {0x3A1A91F101FBECDBLL, 0x6C011945B4E60D2ELL, 0x3A1A91F101FBECDBLL, 0x6C011945B4E60D2ELL, 0x3A1A91F101FBECDBLL, 0x6C011945B4E60D2ELL};
    short *l_79 = &g_80;
    unsigned long long l_81 = 1UL;
    int i;
    (**g_71) = (safe_mod_func_int16_t_s_s((+((*l_79) = (0L == (safe_add_func_int64_t_s_s(((*p_64) != (((0L || (g_71 == &p_62)) || g_73) != (safe_add_func_uint64_t_u_u(l_76[1], (((safe_rshift_func_int8_t_s_s((p_63 > g_16), 6)) , l_76[1]) < g_73))))), l_76[0]))))), l_81));
    return l_76[1];
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_220[i], "g_220[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_335[i], "g_335[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_447[i][j][k], "g_447[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_956[i], "g_956[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_961, "g_961", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1001[i], "g_1001[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1319, "g_1319", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
