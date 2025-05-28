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
   volatile char f0;
   volatile long long f1;
   unsigned f2;
};

struct S1 {
   volatile long long f0;
   volatile unsigned char f1;
};


static unsigned long long g_17 = 0x8CC3837ACED45B0ELL;
static struct S1 g_26 = {0x99EA7EB8E136DC99LL,0x20L};
static int g_39 = 2L;
static int *g_38 = &g_39;
static int *g_57 = (void*)0;
static int **g_56 = &g_57;
static struct S0 g_59 = {0xBFL,-9L,9UL};
static int g_69 = 0L;
static long long g_72 = 0x53ABF6A420A61B3ELL;
static int *g_74 = &g_69;
static long long *g_78 = &g_72;
static int g_81 = 0x053AAA0CL;
static struct S0 *g_88 = &g_59;
static volatile struct S0 g_107 = {0xB3L,0x2D1EC869DFF36FBDLL,0xDF35B7EEL};
static unsigned short g_113 = 0xD7C4L;
static char g_118 = (-1L);
static struct S0 g_122 = {-8L,0x2E4F19BD61A28F2DLL,4294967286UL};
static unsigned char g_127 = 251UL;
static int g_138 = 1L;
static struct S1 * volatile g_142 = &g_26;
static struct S1 * volatile g_162 = &g_26;
static unsigned long long g_172 = 0xD0173B76CD6A9AA8LL;
static unsigned long long g_174 = 18446744073709551613UL;
static int * volatile g_175 = &g_81;
static volatile struct S0 g_215 = {0x90L,0x6DC4C047494BA823LL,9UL};
static int * volatile g_227 = &g_81;
static volatile struct S1 g_228 = {0x2960E54F6E66161CLL,1UL};
static int * volatile g_239 = &g_69;
static struct S1 g_242 = {7L,0xB1L};
static volatile unsigned g_249 = 0UL;
static struct S1 g_255 = {-7L,1UL};
static struct S1 *g_254 = &g_255;
static struct S1 g_257 = {-1L,3UL};
static unsigned char g_283 = 255UL;
static struct S0 ** volatile g_286 = &g_88;
static struct S1 ** volatile g_288 = &g_254;
static int ** volatile g_291 = &g_38;
static volatile struct S1 g_327 = {0xA4B513DD669FE994LL,0x94L};
static volatile char *g_355 = &g_215.f0;
static volatile char ** volatile g_354 = &g_355;
static struct S1 g_390 = {0x011A977A9AE85249LL,0UL};
static volatile struct S0 g_411 = {0xAEL,0xEA742DC938AFD058LL,4294967288UL};
static int g_412 = 1L;
static volatile struct S0 g_434 = {1L,0x61524279522852FFLL,4294967295UL};
static volatile struct S0 * volatile g_435 = &g_107;
static struct S0 ** volatile g_436 = &g_88;
static struct S1 g_437 = {-1L,0xEDL};
static unsigned short * volatile g_443 = &g_113;
static unsigned short * volatile *g_442 = &g_443;
static short g_500 = 4L;
static volatile struct S0 g_535 = {0x28L,0x7441C0562CDC6D31LL,0x68622E75L};
static struct S0 g_579 = {0x45L,0x384BCEB9FF075A1FLL,0UL};
static struct S1 g_611 = {0x52B147327A98A807LL,8UL};
static struct S1 g_612 = {-1L,249UL};
static unsigned g_624 = 0x2E6C8697L;
static unsigned short g_633 = 0x88E4L;
static unsigned long long g_688 = 7UL;
static struct S0 g_714 = {1L,0x34663D782C50739ELL,6UL};
static struct S0 ** volatile g_719 = &g_88;
static struct S0 g_722 = {1L,0x6F43756484901069LL,0xC2DD4F81L};
static struct S0 *g_721 = &g_722;
static short g_754 = 0xB5E5L;
static volatile struct S1 g_763 = {0x4B9A13D9129B0135LL,0x05L};
static struct S0 g_766 = {0xC6L,0xE6100D101B95C2C7LL,0x8930B4BAL};
static struct S0 ** volatile g_768 = &g_88;
static volatile struct S1 g_773 = {0L,0x1CL};
static char *g_782 = &g_118;
static char **g_781 = &g_782;
static struct S0 g_790 = {0xB4L,1L,0UL};
static struct S1 * volatile g_809 = (void*)0;
static struct S1 * volatile g_810 = (void*)0;
static struct S1 * volatile g_811 = &g_26;
static struct S1 g_823 = {9L,0x14L};



static struct S1 func_1(void);
static struct S1 func_2(int p_3, unsigned long long p_4, char p_5, short p_6, int p_7);
static int func_9(unsigned p_10, unsigned p_11, unsigned p_12, int p_13, unsigned char p_14);
static short func_15(unsigned long long p_16);
static int func_18(char p_19, unsigned char p_20, char p_21, unsigned p_22, int p_23);
static int * func_28(long long p_29, int * p_30);
static long long func_31(short p_32);
static struct S1 func_33(int * p_34, int * p_35, long long p_36, int * p_37);
static struct S0 * func_44(struct S0 * p_45, int * p_46, unsigned long long p_47);
static struct S0 * func_48(int * p_49, unsigned char p_50, int ** p_51, struct S0 * p_52, unsigned char p_53);
static struct S1 func_1(void)
{
    long long l_8 = 0x815CBCEF054A20A2LL;
    int l_720 = (-1L);
    long long l_727 = 7L;
    unsigned l_728 = 0x44B1C5F7L;
    struct S0 **l_818 = &g_721;
    struct S0 **l_820 = (void*)0;
    struct S0 ***l_819 = &l_820;
    unsigned char *l_821 = &g_283;
    unsigned char l_822 = 0x99L;
    (*g_811) = func_2((l_8 < func_9((((l_720 |= func_15(g_17)) || (**g_442)) <= (~((g_721 != g_721) >= (safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(g_138, l_8)) , ((g_78 != (void*)0) & l_8)), 5))))), l_727, l_727, l_727, l_728)), l_8, l_728, l_8, l_728);
    l_822 ^= (((safe_add_func_uint8_t_u_u(((*l_821) = ((safe_div_func_uint16_t_u_u(l_720, (g_535.f1 , g_26.f1))) < (((safe_sub_func_int8_t_s_s(((l_818 = &g_88) != ((*l_819) = &g_88)), (*g_782))) & l_8) != l_727))), l_8)) || (*g_78)) & l_720);
    return g_823;
}







static struct S1 func_2(int p_3, unsigned long long p_4, char p_5, short p_6, int p_7)
{
    struct S0 *l_765 = &g_766;
    int l_771 = 0x0157E8DEL;
    char *l_778 = &g_118;
    char **l_777 = &l_778;
    char ***l_779 = (void*)0;
    char ***l_780 = &l_777;
    char ***l_783 = &g_781;
    unsigned *l_784 = &g_766.f2;
    unsigned *l_786 = &g_579.f2;
    unsigned **l_785 = &l_786;
    char l_787 = (-1L);
    for (g_714.f2 = 0; (g_714.f2 >= 10); ++g_714.f2)
    {
        int *l_764 = &g_69;
        struct S0 *l_767 = &g_714;
        short *l_772 = &g_500;
        (*g_254) = g_763;
        (*g_768) = l_767;
        (*g_38) = (safe_add_func_uint32_t_u_u((l_771 > ((*l_772) ^= (&g_354 != ((&l_771 != (void*)0) , &g_354)))), 0x867C3B91L));
    }
    (*g_254) = g_773;
    if ((func_31((safe_unary_minus_func_int32_t_s((((safe_sub_func_int32_t_s_s(l_771, ((*l_784) = (g_579.f1 & (((*l_780) = l_777) == ((*l_783) = g_781)))))) , &l_784) == (l_785 = &l_784))))) , (*g_38)))
    {
        (*g_38) = (l_787 && ((*l_786) = g_327.f1));
        for (g_714.f2 = 3; (g_714.f2 != 16); g_714.f2 = safe_add_func_int16_t_s_s(g_714.f2, 1))
        {
            (*g_721) = g_790;
        }
    }
    else
    {
        unsigned l_801 = 18446744073709551615UL;
        for (p_6 = 19; (p_6 >= 18); --p_6)
        {
            int l_802 = 0x2B68AB68L;
            int *l_803 = &g_69;
            int *l_804 = &l_771;
            short *l_806 = &g_500;
            short **l_805 = &l_806;
            (*l_804) |= (g_255.f0 , func_31((safe_mod_func_int32_t_s_s(((*l_803) ^= func_9(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(g_611.f1, p_6)), (safe_sub_func_uint8_t_u_u(p_5, 1L)))) <= l_787), g_127, l_801, (l_802 , (*g_38)), l_802)), 4294967294UL))));
            (*g_56) = &l_771;
            if ((**g_291))
                break;
        }
        return (**g_288);
    }
    return (*g_162);
}







static int func_9(unsigned p_10, unsigned p_11, unsigned p_12, int p_13, unsigned char p_14)
{
    int l_748 = (-1L);
    struct S1 *l_755 = &g_242;
    if (p_11)
    {
        unsigned char *l_732 = &g_283;
        int l_749 = (-1L);
        unsigned short *l_751 = (void*)0;
        unsigned short *l_752 = (void*)0;
        short *l_753 = &g_754;
        (*g_38) = ((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_s(((*l_732) ^= 255UL), 0)))) == (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_500 |= (-1L)), ((safe_div_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(func_31(g_249), 8)), (safe_lshift_func_int16_t_s_u(((*l_753) = (safe_unary_minus_func_int16_t_s((g_579.f2 > ((l_748 == l_749) < (g_633 = (safe_unary_minus_func_int32_t_s(l_748)))))))), p_14)))) , 1L), p_11)) , l_749))), p_10)) || 0xC9C0L), p_12)));
    }
    else
    {
        struct S1 **l_756 = &g_254;
        int l_759 = 0L;
        (*l_756) = l_755;
        for (g_500 = 0; (g_500 > 5); g_500 = safe_add_func_uint64_t_u_u(g_500, 4))
        {
            return p_13;
        }
        (*g_38) = (l_759 < (safe_unary_minus_func_int32_t_s(p_14)));
    }
    return (*g_227);
}







static short func_15(unsigned long long p_16)
{
    short l_27 = 0xD4AAL;
    long long *l_600 = &g_72;
    int *l_650 = &g_69;
    int l_674 = 0x96404F40L;
    unsigned long long l_681 = 0x624740A91AA0BFD9LL;
    int l_715 = 1L;
    if (func_18((g_17 , (safe_sub_func_int16_t_s_s(g_17, (g_26 , p_16)))), l_27, p_16, l_27, p_16))
    {
        unsigned char l_566 = 0UL;
        int **l_571 = &g_74;
        unsigned *l_574 = (void*)0;
        unsigned *l_575 = &g_122.f2;
        struct S0 *l_578 = &g_579;
        char *l_580 = &g_118;
        int *l_581 = &g_81;
        unsigned char l_586 = 0xBBL;
        long long l_648 = 2L;
        unsigned l_655 = 5UL;
        char l_668 = (-1L);
        (*l_581) |= ((((**g_291) = ((g_579.f2 = (((((**g_442) = l_566) & ((safe_div_func_int8_t_s_s(l_27, ((*l_580) = (safe_sub_func_int16_t_s_s(((l_571 == &g_74) ^ (l_27 | ((safe_rshift_func_int16_t_s_u(l_27, (((*l_575) ^= (~0xCF5A7EDCL)) ^ ((**l_571) = (safe_add_func_int64_t_s_s((g_88 != l_578), 18446744073709551613UL)))))) == 0xA7L))), p_16))))) && 0x36E7L)) >= 0xEFD26F87D08B27AFLL) & p_16)) < p_16)) & 0xDB9D1300L) , p_16);
        (*l_581) = func_18((*g_355), p_16, p_16, (safe_div_func_uint64_t_u_u(l_27, (safe_mod_func_int32_t_s_s(p_16, l_27)))), p_16);
        if ((func_31((l_586 != l_27)) == (*l_581)))
        {
            char l_595 = (-2L);
            long long *l_601 = &g_72;
            unsigned *l_629 = (void*)0;
            unsigned short *l_636 = &g_633;
            unsigned short **l_635 = &l_636;
            unsigned short ***l_634 = &l_635;
            int ***l_677 = &l_571;
            int ***l_678 = &g_56;
            int **l_680 = &l_581;
            int ***l_679 = &l_680;
            for (g_69 = 0; (g_69 <= (-6)); g_69 = safe_sub_func_int32_t_s_s(g_69, 1))
            {
                int l_610 = 0xCFE6EF8BL;
                for (g_113 = 0; (g_113 > 36); g_113 = safe_add_func_uint32_t_u_u(g_113, 3))
                {
                    unsigned char *l_603 = (void*)0;
                    unsigned char **l_602 = &l_603;
                    unsigned long long *l_604 = &g_172;
                    unsigned long long *l_605 = (void*)0;
                    unsigned long long *l_606 = &g_17;
                    int l_607 = 0x4FBC3F32L;
                    unsigned *l_623 = &g_624;
                    unsigned short *l_632 = &g_633;
                    int l_649 = 0xB0D81398L;
                    for (g_283 = 12; (g_283 == 20); g_283++)
                    {
                        (*l_571) = (*g_56);
                    }
                    if (((safe_sub_func_int8_t_s_s(((l_595 &= 0xAC78L) <= (**g_442)), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(g_138, (l_600 == l_601))), (p_16 ^ (-1L)))))) == ((*l_606) = ((*l_604) |= ((0x4CA1270850AE47A9LL != (((*l_602) = &g_283) == &l_566)) > 9L)))))
                    {
                        l_607 |= (0x64BCL >= (g_107.f0 >= l_595));
                    }
                    else
                    {
                        (**g_291) |= ((safe_sub_func_uint64_t_u_u(l_610, 0x0F7FBCB76E406792LL)) , p_16);
                        (*g_254) = g_611;
                        (*l_578) = (g_612 , (**g_286));
                    }
                    if ((((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(func_31(((0L && ((safe_div_func_int64_t_s_s(0x08DCEB0AF3913260LL, (safe_add_func_int32_t_s_s(0x54DCF59AL, (safe_mod_func_uint16_t_u_u(((g_227 != (l_623 = g_57)) , ((*l_632) = (p_16 ^ (safe_add_func_uint8_t_u_u((((*l_601) = ((safe_sub_func_int8_t_s_s(((&g_249 == (l_629 = g_57)) != func_31((safe_lshift_func_uint16_t_u_s((*l_581), 14)))), 0x6FL)) && 0x8A0EF59EC290B173LL)) ^ l_607), 5L))))), g_283)))))) && (*g_355))) || l_27)), 0x8E8D8E78L)) , 0x342BL), 13)) , l_634) != (void*)0))
                    {
                        short *l_640 = &l_27;
                        short **l_639 = &l_640;
                        int l_643 = (-1L);
                        l_649 = ((l_607 &= (safe_div_func_int64_t_s_s(func_31((&g_500 != ((*l_639) = l_636))), ((*g_78) = (*l_581))))) , (safe_mod_func_int32_t_s_s((((l_27 >= p_16) & l_643) < (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(func_31(l_595), l_648)), 6))), 0xCAD32F07L)));
                        (*l_571) = (func_33((*g_56), l_650, (*l_650), (*g_291)) , (*g_56));
                    }
                    else
                    {
                        return g_612.f1;
                    }
                }
                (*l_581) |= ((safe_lshift_func_uint8_t_u_s((((0x3ADDD0F7L > ((safe_lshift_func_int8_t_s_s(l_655, 2)) , p_16)) , 65530UL) >= p_16), ((((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x8337L, 3)), (safe_rshift_func_int16_t_s_s(((*g_254) , ((p_16 < (safe_rshift_func_int8_t_s_u(((**g_286) , 1L), 6))) == p_16)), 9)))), 4294967291UL)), (*g_78))) , p_16) ^ p_16) < l_610))) ^ 0x003EL);
                return l_610;
            }
            (***l_679) = p_16;
            (*l_571) = l_650;
        }
        else
        {
            short l_682 = 0x1E0AL;
            (*g_38) ^= l_682;
        }
        (*g_56) = func_28((((p_16 >= 0x8D0E7031L) , l_581) == (void*)0), (*l_571));
    }
    else
    {
        int l_702 = 8L;
        unsigned *l_713 = &g_59.f2;
        short *l_716 = &g_500;
        int *l_717 = &g_81;
        for (g_69 = 0; (g_69 > (-3)); --g_69)
        {
            unsigned long long l_687 = 0x6F1327C754A2FB84LL;
            short *l_695 = (void*)0;
            short *l_696 = (void*)0;
            int l_697 = 1L;
            unsigned *l_704 = (void*)0;
            unsigned **l_703 = &l_704;
            (*g_38) = (g_688 &= func_31((safe_sub_func_int8_t_s_s(l_687, g_412))));
            (*g_38) = (safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(func_31((l_697 = 0x9D34L)), ((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_702, (1UL & p_16))), (*l_650))) && p_16))) == (((*l_703) = l_650) == l_650)), p_16)) == (*g_78)), 4));
            if (g_122.f2)
                goto lbl_718;
        }
lbl_718:
        (*l_717) ^= func_31(((*l_716) ^= ((**g_436) , (((safe_sub_func_uint8_t_u_u((~(safe_add_func_int16_t_s_s(((l_702 <= (*l_650)) < (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((*l_713) = p_16), (g_714 , func_31(l_702)))), 9))), (*l_650)))), l_715)) , (*l_650)) || 0xF43FL))));
        (*l_650) |= p_16;
        (*g_719) = (*g_436);
    }
    return g_138;
}







static int func_18(char p_19, unsigned char p_20, char p_21, unsigned p_22, int p_23)
{
    unsigned l_565 = 0x87DC5705L;
    (*g_56) = func_28(func_31(g_26.f0), (*g_56));
    return l_565;
}







static int * func_28(long long p_29, int * p_30)
{
    long long l_446 = (-3L);
    short l_449 = 5L;
    int l_450 = (-1L);
    unsigned long long *l_451 = &g_17;
    int *l_452 = &g_81;
    unsigned short *l_471 = (void*)0;
    unsigned l_481 = 0x5A8E75D0L;
    (*l_452) ^= ((safe_sub_func_int16_t_s_s((((*l_451) = ((safe_add_func_int64_t_s_s((g_442 != ((safe_add_func_uint64_t_u_u(0x03E2EB00099B8A56LL, (func_31((p_29 , l_446)) | l_446))) , &g_443)), (l_450 = (safe_add_func_int32_t_s_s(l_449, p_29))))) | p_29)) >= l_446), 9UL)) , (*g_239));
    (*g_56) = (l_452 = (func_33(&l_450, (((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*l_452), ((((*g_78) = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((*g_78), (*l_452))), (*l_452))), (*l_452))) | ((safe_rshift_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s((*g_355), (((*g_38) = ((*l_452) == ((safe_rshift_func_uint16_t_u_s((g_113 = p_29), 13)) , (*l_452)))) , 0x32L))) == g_412) && 0UL), (*l_452))) & (*l_452)) , g_118) > 0xE8L) , 1L), 9)) < 0x76EAL))) , (*l_452)) == (*l_452)))), 0x797BL)) , p_29) , (void*)0), (*l_452), p_30) , p_30));
    (*g_74) = ((*g_38) = ((((*g_78) = (l_452 != ((((*g_443) ^ 65535UL) >= (safe_lshift_func_uint8_t_u_u(p_29, 1))) , l_452))) & (((((void*)0 != &g_254) , p_29) , g_59.f2) , 4UL)) <= 7L));
    if ((func_31(((*g_74) , (g_59.f1 | p_29))) | ((!(safe_mod_func_int64_t_s_s(p_29, ((safe_unary_minus_func_uint8_t_u((safe_div_func_int64_t_s_s((g_59.f2 != p_29), (0L ^ ((safe_rshift_func_int8_t_s_s(g_113, 5)) == l_481)))))) , p_29)))) & l_449)))
    {
        int *l_484 = (void*)0;
        short *l_485 = &l_449;
        char l_486 = 0x35L;
        p_30 = ((safe_rshift_func_int16_t_s_u(func_31(((*l_485) = (((*g_56) = l_484) == p_30))), 1)) , p_30);
        l_486 |= func_31(g_257.f0);
    }
    else
    {
        char l_504 = (-5L);
        short *l_531 = &g_500;
        int l_536 = 0x6F265DF6L;
        char l_537 = 0x49L;
        int *l_564 = &g_81;
        (*g_56) = (*g_291);
        (**g_56) = (*g_175);
        for (g_174 = 23; (g_174 >= 18); g_174--)
        {
            long long l_503 = 0x136229B707B2C177LL;
            int l_511 = 0x7B8B4C02L;
            int *l_538 = (void*)0;
            for (g_72 = 0; (g_72 <= (-21)); g_72 = safe_sub_func_uint64_t_u_u(g_72, 6))
            {
                short l_505 = 2L;
                unsigned short *l_510 = &g_113;
                (*g_56) = (*g_291);
                if ((**g_291))
                    break;
                for (g_283 = 0; (g_283 > 40); g_283 = safe_add_func_int16_t_s_s(g_283, 2))
                {
                    short l_493 = 0x3359L;
                }
                for (g_118 = 0; (g_118 > (-11)); g_118--)
                {
                    int ***l_528 = (void*)0;
                    int ***l_529 = (void*)0;
                    int **l_530 = &g_74;
                    long long *l_532 = (void*)0;
                    long long *l_533 = &l_503;
                    long long *l_534 = &l_446;
                    if (((((((((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((0xFBDC7FCAL >= p_29), (((!(safe_rshift_func_uint16_t_u_u(((l_504 , (((safe_lshift_func_uint8_t_u_s((((*l_510) |= (func_31(g_412) >= (safe_sub_func_uint64_t_u_u(((g_81 , (safe_add_func_uint8_t_u_u((((((l_530 = &g_57) != &p_30) | ((*l_534) = ((*l_533) = ((void*)0 != l_531)))) & (*g_74)) < 6L), p_29))) , g_127), 18446744073709551615UL)))) | l_504), g_500)) , g_535) , l_536)) & 0UL), g_283))) == g_118) , 0x48A87195B78B7190LL))) | l_536), l_536)), p_29)) ^ p_29) == l_505) != l_536) <= 1L) < l_504) >= g_69) && 0x53L))
                    {
                        (*l_530) = ((**g_286) , (*g_291));
                        if ((*g_74))
                            break;
                        (**g_56) ^= l_537;
                        l_538 = (*g_291);
                    }
                    else
                    {
                        int l_547 = 3L;
                        unsigned char *l_548 = &g_283;
                        unsigned *l_553 = &l_481;
                        (*g_57) = ((func_31(p_29) , (((((((safe_sub_func_int64_t_s_s((*g_78), ((*g_56) == ((safe_rshift_func_uint8_t_u_u(g_257.f0, 7)) , &l_511)))) && (((*l_548) = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_437.f1, 4)), 0)) >= ((*l_451) = l_547))) < ((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((l_538 != g_74), l_505)) ^ p_29), 4294967288UL)) > 1L))) , 0xF3L) < g_59.f2) <= p_29) , 0x15D9L) , l_537)) , (*g_175));
                        (**g_56) = ((func_31(g_122.f1) >= (((*l_553) &= g_500) , (g_81 && ((g_113 >= 7L) && (g_72 , p_29))))) | (((((((safe_lshift_func_int16_t_s_s(p_29, p_29)) && 0x516ACF6A21E68D7BLL) == g_59.f2) || (-4L)) > l_505) , p_29) != 0x20A6L));
                    }
                }
            }
            if (l_504)
                break;
            (*g_56) = (*g_56);
            for (g_69 = (-12); (g_69 <= 27); ++g_69)
            {
                (*g_56) = p_30;
            }
        }
        (*g_254) = func_33(p_30, (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(func_31(g_327.f1), l_537)), (safe_add_func_uint8_t_u_u(p_29, p_29)))) > ((((!g_172) || (*g_74)) , p_29) , g_127)) , l_564), (*g_78), l_564);
    }
    return (*g_56);
}







static long long func_31(short p_32)
{
    int *l_41 = &g_39;
    int **l_40 = &l_41;
    (*g_254) = func_33(g_38, ((*l_40) = (void*)0), g_17, &g_39);
    return p_32;
}







static struct S1 func_33(int * p_34, int * p_35, long long p_36, int * p_37)
{
    unsigned short l_55 = 0x74D4L;
    for (g_39 = 13; (g_39 != (-19)); g_39--)
    {
        int **l_54 = &g_38;
        struct S0 *l_58 = &g_59;
    }
    return g_437;
}







static struct S0 * func_44(struct S0 * p_45, int * p_46, unsigned long long p_47)
{
    unsigned char l_193 = 0x8AL;
    unsigned l_194 = 0UL;
    char *l_199 = &g_118;
    unsigned short *l_203 = (void*)0;
    struct S1 *l_256 = &g_257;
    int *l_267 = &g_69;
    struct S0 *l_284 = (void*)0;
    unsigned char **l_319 = (void*)0;
    unsigned long long *l_404 = (void*)0;
    unsigned long long *l_405 = (void*)0;
    unsigned long long *l_406 = &g_174;
    if ((safe_sub_func_int32_t_s_s((*p_46), ((g_74 == (void*)0) || l_193))))
    {
        unsigned short *l_197 = &g_113;
        int l_198 = (-5L);
        char l_200 = 0xB6L;
        l_200 = (g_118 && (((l_194 >= (l_193 ^ l_194)) == (((safe_rshift_func_uint16_t_u_u(((*l_197) |= 0UL), l_198)) , &g_118) != (g_122.f0 , l_199))) , p_47));
    }
    else
    {
        unsigned short *l_208 = &g_113;
        int ***l_214 = &g_56;
        int *l_217 = &g_39;
        struct S1 *l_287 = &g_255;
        int l_350 = 4L;
        int *l_358 = &g_81;
        unsigned char *l_363 = &l_193;
        struct S1 *l_389 = &g_390;
        struct S0 *l_401 = &g_59;
        if ((0x184DBDFBL < ((safe_lshift_func_int16_t_s_u(((&g_113 != l_203) , p_47), (safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(p_47, 5)) != (&g_127 != (((*l_208) = l_193) , &g_127))), ((l_194 , &g_57) != (void*)0))))) <= g_122.f0)))
        {
            short l_211 = 0x1FC3L;
            int l_218 = (-8L);
            if (((safe_mod_func_uint16_t_u_u(((l_211 | g_26.f1) & (safe_lshift_func_uint16_t_u_s(((((l_214 != (void*)0) == g_59.f2) != l_194) | 8L), 9))), p_47)) ^ (l_211 >= g_172)))
            {
                volatile struct S0 *l_216 = &g_215;
                (*l_216) = g_215;
                (**l_214) = l_217;
            }
            else
            {
                unsigned *l_225 = &l_194;
                int l_226 = 0x8FD20083L;
                l_218 = 0x25A78384L;
                l_226 ^= ((safe_add_func_uint8_t_u_u(g_26.f1, (((((g_81 == ((*l_208) = (l_218 != (((g_74 == (void*)0) == p_47) , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_127 = p_47), 5)), ((((((*l_225) = p_47) , &g_174) == &p_47) == l_193) & 1L))))))) != p_47) & p_47) < 0x71L) >= 0UL))) , 0x59FDAFA0L);
                (*g_227) &= (*p_46);
            }
        }
        else
        {
            int l_233 = (-6L);
            char l_258 = 0xCFL;
            int *l_266 = &g_69;
            char **l_297 = &l_199;
            unsigned char *l_310 = (void*)0;
lbl_351:
            if ((g_228 , (*l_217)))
            {
                int l_229 = 0xB577810FL;
                char l_232 = 0xE0L;
                l_229 = (g_138 == l_194);
                if ((*p_46))
                {
                    for (g_69 = 1; (g_69 >= (-12)); g_69 = safe_sub_func_int32_t_s_s(g_69, 1))
                    {
                        (*g_175) = l_232;
                        if ((*p_46))
                            continue;
                        if (l_233)
                            continue;
                    }
                }
                else
                {
                    unsigned l_238 = 0x079A8AC2L;
                    for (g_59.f2 = 0; (g_59.f2 != 31); ++g_59.f2)
                    {
                        unsigned short **l_237 = &l_208;
                        unsigned short ***l_236 = &l_237;
                        (*l_236) = (void*)0;
                        (*g_239) = (0x81AEL & l_238);
                        return p_45;
                    }
                    for (g_17 = 0; (g_17 <= 52); g_17 = safe_add_func_uint16_t_u_u(g_17, 7))
                    {
                        return p_45;
                    }
                }
                (*g_239) ^= (*p_46);
            }
            else
            {
                long long l_259 = 0x6F2C5EE9AC831156LL;
                int *l_260 = &g_81;
                (*g_142) = g_242;
                (*g_239) = ((*l_260) = (((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(g_69, ((+(g_17 , g_249)) & (safe_rshift_func_uint16_t_u_s(((((g_39 && (*g_78)) , (safe_sub_func_int16_t_s_s((!((((p_47 || (((l_193 < l_233) <= (((g_113 & 0UL) , p_47) || p_47)) && (*p_46))) , g_254) == l_256) , l_258)), l_258))) & 0xFA6DL) != g_69), l_193))))), 0xE0F37C12618D2DF7LL)), 18446744073709551606UL)) , l_259) != l_259));
                for (l_258 = (-20); (l_258 != 17); l_258 = safe_add_func_int32_t_s_s(l_258, 6))
                {
                    if (((*g_239) = (8L < l_258)))
                    {
                        short l_263 = 3L;
                        (*l_260) = (((l_263 >= ((*p_46) >= p_47)) >= (g_122.f0 , 4L)) && (*l_260));
                        (*l_256) = (*g_162);
                    }
                    else
                    {
                        (*g_56) = p_46;
                    }
                }
            }
            for (g_127 = (-25); (g_127 > 50); ++g_127)
            {
                unsigned char *l_276 = &l_193;
                unsigned short *l_281 = &g_113;
                unsigned char *l_282 = &g_283;
                int l_305 = 3L;
                struct S1 *l_309 = &g_26;
                unsigned *l_349 = &g_59.f2;
                l_267 = l_266;
                if ((((safe_sub_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(((*l_276) &= (safe_sub_func_uint64_t_u_u((((*l_267) || g_255.f0) & (*p_46)), ((*g_78) = ((-1L) || g_118))))), ((((*l_282) &= (safe_sub_func_uint64_t_u_u(g_172, (safe_add_func_uint8_t_u_u(((l_281 = &g_113) == l_203), p_47))))) ^ 0L) == g_81))) , g_118), g_69)) != g_118), 0xF0431196L)) , (*l_217)) == (*l_266)))
                {
                    struct S0 **l_285 = (void*)0;
                    (*g_286) = l_284;
                    (*g_288) = l_287;
                    for (g_138 = 3; (g_138 > 29); g_138 = safe_add_func_int16_t_s_s(g_138, 1))
                    {
                        short l_294 = 0x810EL;
                        int *l_295 = (void*)0;
                        int *l_296 = &g_81;
                        (*g_291) = ((**l_214) = p_46);
                        if ((*p_46))
                            break;
                        (*l_296) &= (((**g_288) , (((safe_add_func_int16_t_s_s((l_294 == ((*l_276) = 1UL)), ((void*)0 == &l_287))) , (*l_266)) , ((((0x72L == 0L) <= (0UL || g_228.f0)) >= 0x4AE79435L) && p_47))) ^ l_294);
                        if ((*g_175))
                            break;
                    }
                }
                else
                {
                    char ***l_298 = &l_297;
                    int l_325 = (-1L);
                    (*l_298) = l_297;
                    if (((*l_266) = (*l_217)))
                    {
                        int l_308 = (-1L);
                        l_308 |= (0x3A0864FAL == ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(0x577FL, p_47)) && 0xC8B54D9544736C5CLL), g_59.f0)) , (l_305 & (((*g_78) |= ((*l_267) = p_47)) && (p_47 = (*l_267))))), (safe_lshift_func_int8_t_s_u(g_113, 6)))) ^ 0xDA54045763805F52LL));
                        l_309 = ((p_47 , (p_47 & 0xB5L)) , (g_215.f0 , (g_138 , (void*)0)));
                    }
                    else
                    {
                        unsigned char **l_311 = (void*)0;
                        unsigned char **l_312 = &l_282;
                        unsigned char ***l_315 = (void*)0;
                        unsigned char ***l_316 = (void*)0;
                        unsigned char ***l_317 = (void*)0;
                        unsigned char ***l_318 = &l_311;
                        int l_322 = 0xCDCE5CD6L;
                        int l_326 = (-8L);
                        (*l_266) &= (*p_46);
                        l_326 |= ((g_26.f1 <= ((l_310 != ((*l_312) = &g_283)) > (((safe_lshift_func_uint16_t_u_u((+((*l_281) = (((*l_318) = (void*)0) != l_319))), (((((((safe_rshift_func_uint16_t_u_u(l_322, 2)) > ((*l_266) , (safe_sub_func_int8_t_s_s((((*l_214) = &g_57) == &g_38), 0L)))) , l_325) > 0L) , 0x3D85C89DL) < p_47) | 0x79L))) , (void*)0) != (void*)0))) < 247UL);
                        (*l_256) = g_327;
                    }
                    if ((*g_227))
                    {
                        int *l_328 = &g_81;
                        (**l_214) = l_328;
                        (**l_214) = ((safe_sub_func_uint32_t_u_u(p_47, (safe_add_func_int32_t_s_s(0xC5515DF0L, ((safe_rshift_func_uint8_t_u_u(((l_305 , (((safe_lshift_func_int16_t_s_u((p_47 ^ (p_47 || (safe_sub_func_uint64_t_u_u(g_122.f1, ((safe_div_func_int32_t_s_s(((*l_266) = ((safe_add_func_uint64_t_u_u(l_305, p_47)) < (1L | (*p_46)))), 0x92E11645L)) == 7UL))))), 15)) > (*g_78)) != 0xB3F36309L)) >= (*l_328)), 1)) , 4294967287UL))))) , (*g_291));
                    }
                    else
                    {
                        (*l_266) ^= (*p_46);
                        return (*g_286);
                    }
                    (*g_254) = (*g_142);
                }
                l_350 = (((safe_lshift_func_uint16_t_u_u(((*l_266) = g_249), (g_72 & (g_59.f2 < p_47)))) , (g_172 = g_122.f2)) || (((safe_rshift_func_int8_t_s_u((*l_266), (safe_sub_func_int32_t_s_s((0x8C1580B8L >= p_47), (((*l_349) = p_47) != g_127))))) != 0xA4L) && (*l_266)));
                if (g_17)
                    goto lbl_351;
            }
        }
        for (g_118 = 0; (g_118 > 9); g_118 = safe_add_func_int16_t_s_s(g_118, 4))
        {
            char **l_356 = (void*)0;
            int l_357 = (-1L);
            l_357 = (((*l_267) , g_354) == l_356);
            (*l_267) = (*p_46);
        }
        (*l_358) |= ((*l_267) ^ p_47);
        if (((safe_add_func_int8_t_s_s((**g_354), (*l_267))) < ((*l_363) = (2L == 0xBD809091L))))
        {
            int l_372 = (-7L);
            l_350 ^= ((*l_267) , ((safe_div_func_int16_t_s_s(0x704FL, g_327.f0)) == (safe_rshift_func_int16_t_s_s(0xBBEEL, ((safe_lshift_func_uint8_t_u_u((*l_267), (0x97F35E50L >= ((*l_358) = (*l_217))))) < (1L > (safe_rshift_func_int16_t_s_s(g_172, l_372))))))));
        }
        else
        {
            unsigned long long l_392 = 1UL;
            int *l_395 = &g_69;
            for (g_122.f2 = 1; (g_122.f2 < 27); g_122.f2 = safe_add_func_int64_t_s_s(g_122.f2, 5))
            {
                unsigned l_381 = 4294967291UL;
                if ((*p_46))
                {
                    unsigned *l_384 = &l_381;
                    struct S1 **l_387 = (void*)0;
                    struct S1 **l_388 = &l_287;
                    int *l_391 = &l_350;
                    (*l_267) |= 0xD5CB9FFFL;
                    if ((*g_239))
                        break;
                    for (g_17 = 23; (g_17 > 12); g_17 = safe_sub_func_int64_t_s_s(g_17, 9))
                    {
                        if ((*p_46))
                            break;
                    }
                    (*l_391) ^= (!(((safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s((g_59.f2 , l_381), (*l_267))), (p_47 | p_47))) || (p_47 == ((safe_sub_func_int32_t_s_s((*p_46), ((((*l_388) = ((((((*l_384) = p_47) | (safe_add_func_int8_t_s_s((**g_354), p_47))) != (*l_358)) <= g_113) , (*g_288))) == l_389) , (*g_227)))) | (*p_46)))) ^ 0x68L));
                }
                else
                {
                    if (l_392)
                    {
                        int l_393 = 0xD07CCF3DL;
                        unsigned long long *l_394 = &g_174;
                        (*g_227) = ((*g_78) > ((*l_394) = ((l_381 , g_242.f0) , l_393)));
                        l_395 = l_267;
                    }
                    else
                    {
                        return p_45;
                    }
                }
                for (g_81 = (-17); (g_81 == 12); g_81++)
                {
                    unsigned char l_398 = 0x4CL;
                    (*l_267) = l_398;
                    return p_45;
                }
                if ((*g_227))
                    break;
            }
            (**l_214) = p_46;
            for (p_47 = 15; (p_47 <= 16); p_47 = safe_add_func_uint64_t_u_u(p_47, 3))
            {
                return l_401;
            }
        }
    }
    if (((*l_267) = (((safe_mod_func_uint64_t_u_u((*l_267), ((*l_406) = g_17))) , &g_227) == ((safe_add_func_uint64_t_u_u((((*l_267) > g_242.f1) && (g_412 ^= (safe_add_func_uint32_t_u_u((*l_267), (((*l_267) , g_411) , (g_72 != (*g_78))))))), g_122.f2)) , &l_267))))
    {
        int l_415 = 0x6098FC4DL;
        int *l_416 = (void*)0;
        int *l_417 = &g_81;
        int l_420 = 0xFF77A4FCL;
        unsigned char l_425 = 0xBEL;
        struct S0 *l_432 = &g_122;
        (*l_267) = ((safe_div_func_int32_t_s_s(((+g_411.f1) == ((*l_267) ^ ((*l_417) = l_415))), (((l_420 = (safe_mod_func_int32_t_s_s((g_127 || p_47), (*l_267)))) | ((((safe_sub_func_uint16_t_u_u(((((p_47 >= ((safe_mod_func_uint8_t_u_u(((*l_267) < (*l_267)), g_113)) , (*l_267))) > p_47) , l_267) != g_38), g_39)) || p_47) ^ (*l_267)) , l_425)) || (-10L)))) < p_47);
        for (g_59.f2 = (-8); (g_59.f2 < 47); g_59.f2++)
        {
            unsigned char *l_430 = &g_283;
            int l_431 = 9L;
            (*g_56) = p_46;
            (*l_267) ^= (((*l_430) = (safe_mod_func_uint8_t_u_u(p_47, (*l_417)))) || l_431);
            (*l_267) = ((*l_417) = 0x11A3B16CL);
            return l_432;
        }
    }
    else
    {
        int ***l_433 = &g_56;
        (*l_433) = &p_46;
    }
    (*g_435) = g_434;
    return p_45;
}







static struct S0 * func_48(int * p_49, unsigned char p_50, int ** p_51, struct S0 * p_52, unsigned char p_53)
{
    int l_60 = (-6L);
    int l_70 = 0x2CA52C43L;
    long long *l_79 = &g_72;
    int l_80 = 2L;
    int **l_110 = &g_74;
    int l_140 = 0L;
    unsigned char *l_164 = &g_127;
    int *l_188 = (void*)0;
    struct S0 *l_189 = &g_59;
    struct S0 *l_190 = (void*)0;
    if ((l_60 >= (-9L)))
    {
        int **l_65 = &g_38;
        int *l_68 = &g_69;
        long long *l_71 = &g_72;
        long long *l_77 = &g_72;
        unsigned char l_82 = 0UL;
        unsigned long long *l_170 = &g_17;
        unsigned long long *l_171 = &g_172;
        unsigned long long *l_173 = &g_174;
        if ((0x19D6B80F4B430F0CLL != ((*l_71) = ((((safe_rshift_func_int16_t_s_s(g_59.f1, (safe_rshift_func_int16_t_s_u(((void*)0 == l_65), (safe_rshift_func_uint8_t_u_u((~((((p_50 || (l_60 < (**l_65))) <= ((l_70 = ((*l_68) ^= ((void*)0 != (*g_56)))) == p_50)) >= (**l_65)) >= (-10L))), 4)))))) , (*p_51)) == (void*)0) | g_17))))
        {
            int *l_73 = (void*)0;
            g_74 = l_73;
            for (p_53 = 0; (p_53 != 27); p_53 = safe_add_func_uint32_t_u_u(p_53, 1))
            {
                l_80 = (l_70 = ((*l_68) ^= ((g_78 = (l_77 = &g_72)) == l_79)));
            }
            g_81 &= ((*l_68) = (!(*p_49)));
        }
        else
        {
            int l_90 = 0xE7998387L;
            int l_93 = 0xBA470062L;
            unsigned l_153 = 4294967295UL;
            struct S0 **l_165 = &g_88;
            if (l_82)
            {
                unsigned l_85 = 1UL;
lbl_103:
                for (g_81 = 0; (g_81 >= (-27)); g_81--)
                {
                    struct S0 **l_89 = &g_88;
                    int *l_94 = (void*)0;
                    int *l_95 = &l_60;
                    char l_102 = 0xDBL;
                    if (((*g_74) = ((g_72 | (p_53 < l_85)) > (safe_div_func_int32_t_s_s((l_90 = (0x9A1548EBL ^ (p_50 > ((((*l_89) = g_88) != &g_59) & (*g_78))))), (((*l_95) ^= (safe_div_func_uint32_t_u_u(((*l_68) , l_93), l_70))) & p_53))))))
                    {
                        (*g_56) = &l_60;
                        return &g_59;
                    }
                    else
                    {
                        (*g_74) &= l_80;
                        (*l_95) &= (((((safe_sub_func_uint64_t_u_u(l_93, (safe_lshift_func_int16_t_s_s(((((((((((&g_57 == &p_49) ^ g_81) , g_81) & (*g_74)) < ((safe_sub_func_uint64_t_u_u(g_59.f1, (p_50 ^ l_102))) > g_59.f2)) == p_50) & 0x21L) < l_80) , g_81) == p_53), 2)))) , l_85) || 5L) , (*p_49)) == 0x047B2A23L);
                    }
                }
                if ((~l_90))
                {
                    return &g_59;
                }
                else
                {
                    if ((*g_74))
                    {
                        (*g_56) = (void*)0;
                        if (g_17)
                            goto lbl_103;
                    }
                    else
                    {
                        return &g_59;
                    }
                }
                return p_52;
            }
            else
            {
                long long l_104 = 0x96B6C30C227312B8LL;
                char *l_152 = &g_118;
                int l_161 = (-1L);
                if (l_104)
                {
                    for (l_93 = 0; (l_93 == (-27)); l_93 = safe_sub_func_int16_t_s_s(l_93, 1))
                    {
                        int ***l_111 = &l_65;
                        unsigned short *l_112 = &g_113;
                        (*g_88) = g_107;
                        (*p_51) = ((*l_110) = (((safe_lshift_func_uint16_t_u_u(((*l_112) = (((g_56 = l_110) == ((*l_111) = &p_49)) ^ ((3L > g_59.f0) >= (((*l_68) , (g_17 <= p_53)) > g_81)))), 9)) || l_104) , (*g_56)));
                    }
lbl_121:
                    for (l_80 = 23; (l_80 < 12); l_80 = safe_sub_func_int32_t_s_s(l_80, 1))
                    {
                        char *l_116 = (void*)0;
                        char *l_117 = &g_118;
                        (**l_110) |= (*g_38);
                        if ((*g_38))
                            continue;
                        (*l_68) = (((*l_117) = (g_113 != g_39)) < ((1L || g_39) && (p_53 , (-7L))));
                    }
                }
                else
                {
                    int l_141 = 0x1D30752CL;
                    for (g_69 = (-1); (g_69 >= 25); ++g_69)
                    {
                        if (g_17)
                            goto lbl_121;
                    }
                    g_88 = p_52;
                    if ((g_107.f1 <= (l_104 , (l_90 < l_104))))
                    {
                        char *l_128 = (void*)0;
                        char *l_129 = &g_118;
                        unsigned char *l_139 = &l_82;
                        (*g_56) = (g_122 , (*g_56));
                        (*l_68) = (*g_38);
                        l_141 &= ((safe_sub_func_uint64_t_u_u((g_17 , g_113), ((safe_sub_func_int64_t_s_s((((((*g_74) = 0x455D9318L) || (*p_49)) >= ((g_127 &= p_50) > ((*l_129) ^= l_104))) & (safe_mod_func_uint64_t_u_u((!(safe_lshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((g_138 = p_50), ((*l_139) = p_53))) , (*l_65)) == (*l_110)), g_59.f2)) , g_107.f1), 2))), l_140))), l_80)) < l_104))) && g_72);
                        (*g_142) = g_26;
                    }
                    else
                    {
                        unsigned short l_147 = 0x4F39L;
                        unsigned *l_148 = (void*)0;
                        unsigned *l_149 = &g_122.f2;
                        l_90 |= (p_50 | ((safe_div_func_int16_t_s_s((g_59.f0 & ((l_147 <= 0UL) >= ((*l_149) ^= g_39))), l_141)) != (safe_mod_func_int8_t_s_s(l_141, p_53))));
                        (*g_74) = (18446744073709551609UL ^ (**l_65));
                        (*l_68) = (*p_49);
                    }
                    (*p_52) = (*p_52);
                }
                (**l_110) = (((p_50 , (*l_68)) || g_69) || (p_53 == g_122.f0));
                if ((((+(*l_68)) <= g_59.f1) > (255UL < ((*l_152) = 0xACL))))
                {
                    unsigned char *l_156 = &l_82;
                    (*g_74) = (l_153 >= (-5L));
                    (**l_110) = (safe_div_func_uint8_t_u_u(l_153, ((*l_156) = g_118)));
                }
                else
                {
                    unsigned char *l_157 = &l_82;
                    (*p_52) = (*g_88);
                    (**l_110) = (((*l_157) &= (p_50 , (0xFE059428FE1C85B5LL ^ ((**l_65) | 4294967295UL)))) ^ (**l_110));
                    for (g_69 = 0; (g_69 < (-9)); g_69--)
                    {
                        char l_160 = 0x4BL;
                        (*p_52) = (*g_88);
                        if (l_160)
                            continue;
                        if ((*p_49))
                            continue;
                        if ((*l_68))
                            break;
                    }
                    if ((l_161 = (*p_49)))
                    {
                        return p_52;
                    }
                    else
                    {
                        (**l_110) ^= 3L;
                        (*g_56) = (*p_51);
                    }
                }
                (*p_51) = (*p_51);
            }
            (*g_162) = (*g_142);
            (*l_110) = (*g_56);
            (*l_68) &= (safe_unary_minus_func_uint8_t_u((((l_164 != &g_127) , p_52) == ((*l_165) = (void*)0))));
        }
        (*g_175) = ((*l_68) = (((((*l_110) == (*g_56)) == (&p_53 == ((*g_78) , &g_127))) >= (p_53 != ((*l_173) = (0x9EC0L > ((safe_add_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u((p_50 ^ ((*l_171) = ((*l_170) = (p_53 < l_80)))), (-3L))) , (*p_51)) == (*g_56)), p_53)) != 0x28CAL))))) ^ 0UL));
        for (g_113 = (-9); (g_113 >= 7); ++g_113)
        {
            (*l_65) = ((*p_51) = (*p_51));
        }
    }
    else
    {
        struct S0 *l_187 = &g_122;
lbl_180:
        (*g_56) = (*p_51);
        for (g_174 = 0; (g_174 <= 27); g_174++)
        {
            unsigned l_183 = 0x0AB9F43FL;
            int *l_186 = &l_60;
            if (p_53)
                goto lbl_180;
            if ((2UL < ((g_26.f1 , ((~(0x2096FE6C662CD814LL == (safe_sub_func_uint16_t_u_u(l_183, ((safe_div_func_uint32_t_u_u(p_53, g_127)) ^ p_50))))) == ((**l_110) != ((*l_186) = ((p_50 , l_186) != (void*)0))))) & (**l_110))))
            {
                (*g_74) = (*g_175);
                if (p_50)
                    goto lbl_180;
            }
            else
            {
                return l_187;
            }
            (*p_51) = (*p_51);
            (*g_74) &= (-4L);
        }
        (*l_110) = ((*p_51) = l_188);
        (*g_175) = (*g_175);
    }
    l_189 = p_52;
    (*l_189) = (*l_189);
    return l_190;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_327.f0, "g_327.f0", print_hash_value);
    transparent_crc(g_327.f1, "g_327.f1", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    transparent_crc(g_390.f1, "g_390.f1", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_434.f0, "g_434.f0", print_hash_value);
    transparent_crc(g_434.f1, "g_434.f1", print_hash_value);
    transparent_crc(g_434.f2, "g_434.f2", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_437.f1, "g_437.f1", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_535.f0, "g_535.f0", print_hash_value);
    transparent_crc(g_535.f1, "g_535.f1", print_hash_value);
    transparent_crc(g_535.f2, "g_535.f2", print_hash_value);
    transparent_crc(g_579.f0, "g_579.f0", print_hash_value);
    transparent_crc(g_579.f1, "g_579.f1", print_hash_value);
    transparent_crc(g_579.f2, "g_579.f2", print_hash_value);
    transparent_crc(g_611.f0, "g_611.f0", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_612.f0, "g_612.f0", print_hash_value);
    transparent_crc(g_612.f1, "g_612.f1", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_714.f0, "g_714.f0", print_hash_value);
    transparent_crc(g_714.f1, "g_714.f1", print_hash_value);
    transparent_crc(g_714.f2, "g_714.f2", print_hash_value);
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f1, "g_722.f1", print_hash_value);
    transparent_crc(g_722.f2, "g_722.f2", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_763.f0, "g_763.f0", print_hash_value);
    transparent_crc(g_763.f1, "g_763.f1", print_hash_value);
    transparent_crc(g_766.f0, "g_766.f0", print_hash_value);
    transparent_crc(g_766.f1, "g_766.f1", print_hash_value);
    transparent_crc(g_766.f2, "g_766.f2", print_hash_value);
    transparent_crc(g_773.f0, "g_773.f0", print_hash_value);
    transparent_crc(g_773.f1, "g_773.f1", print_hash_value);
    transparent_crc(g_790.f0, "g_790.f0", print_hash_value);
    transparent_crc(g_790.f1, "g_790.f1", print_hash_value);
    transparent_crc(g_790.f2, "g_790.f2", print_hash_value);
    transparent_crc(g_823.f0, "g_823.f0", print_hash_value);
    transparent_crc(g_823.f1, "g_823.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
