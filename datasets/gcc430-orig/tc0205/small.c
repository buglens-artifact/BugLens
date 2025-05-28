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
   unsigned f0;
   volatile short f1;
   volatile unsigned f2;
   int f3;
   unsigned short f4;
};


static volatile int g_4 = 0x94A2A4F4L;
static unsigned g_25 = 2UL;
static int g_28 = 0xF4E26C12L;
static unsigned char g_31 = 0x4EL;
static unsigned char g_44 = 0x57L;
static unsigned char *g_43 = &g_44;
static int g_83 = 0x785E8A77L;
static unsigned g_106 = 0UL;
static int *g_109 = &g_83;
static char g_129 = 1L;
static volatile int **g_135 = (void*)0;
static volatile struct S0 *g_146 = (void*)0;
static unsigned g_150 = 4294967295UL;
static unsigned g_167 = 0xD80879ABL;
static short g_176 = 1L;
static unsigned short g_185 = 7UL;
static volatile struct S0 g_203 = {0xDC4BF33FL,0x128FL,0xDF7396B2L,0xA0135165L,7UL};
static struct S0 g_215 = {2UL,1L,0x86FE3A84L,0x242F1DABL,65535UL};
static unsigned long long g_250 = 0x17D7D4C0EAD6AADDLL;
static unsigned long long g_253 = 0x145B7FBA01AEDEECLL;
static unsigned short g_254 = 65532UL;
static char g_255 = (-1L);
static int g_260 = 0x7098F169L;
static int *g_265 = &g_83;
static int g_283 = (-1L);
static volatile int *g_293 = &g_4;
static volatile struct S0 g_294 = {1UL,0x5406L,4294967289UL,0L,0x9630L};
static volatile struct S0 g_295 = {4UL,0x4EB4L,1UL,0x59828F98L,0UL};
static short g_327 = 0L;
static short *g_344 = &g_327;
static short **g_343 = &g_344;
static short ***g_342 = &g_343;
static unsigned *g_404 = &g_215.f0;
static unsigned **g_403 = &g_404;
static long long g_413 = 0xA16205BE9E1CB4CCLL;
static long long *g_412 = &g_413;
static struct S0 g_421 = {0xEF0C7B75L,7L,4294967295UL,-5L,8UL};
static long long **g_422 = (void*)0;
static struct S0 g_425 = {4294967295UL,-2L,5UL,0L,65534UL};
static volatile struct S0 ***g_426 = (void*)0;
static volatile struct S0 g_430 = {0x027CD5C1L,0x6C8BL,2UL,0L,0x57A8L};
static short ****g_440 = &g_342;
static short *****g_439 = &g_440;
static unsigned g_455 = 0UL;
static unsigned char **g_460 = &g_43;
static unsigned char ***g_459 = &g_460;
static int *g_521 = &g_83;
static volatile struct S0 g_523 = {8UL,0x5BACL,0x07C4BFC5L,-7L,1UL};
static volatile struct S0 g_524 = {0x38B13ED0L,-2L,0x4939D9F1L,1L,5UL};
static struct S0 g_563 = {0UL,1L,4294967295UL,0L,65534UL};
static struct S0 g_573 = {0UL,0x2839L,0UL,-4L,0xF0D1L};
static struct S0 g_613 = {1UL,0x7611L,0xAE3C5E76L,0xDEE8267BL,0UL};
static unsigned char *g_616 = &g_44;
static struct S0 g_667 = {0x13A9A04EL,0L,0xD4D5CCEFL,0L,5UL};
static int *g_711 = &g_83;



static int func_1(void);
static unsigned char func_13(unsigned char p_14, short p_15, unsigned p_16, short p_17, unsigned long long p_18);
static unsigned char func_19(unsigned long long p_20, short p_21, unsigned char p_22, char p_23, unsigned p_24);
static int func_34(unsigned p_35, unsigned char * p_36);
static unsigned char * func_37(unsigned char p_38, char p_39, int p_40, unsigned char * p_41, int p_42);
static unsigned short func_47(unsigned char * p_48, unsigned short p_49, int p_50, unsigned char * p_51, int p_52);
static unsigned char * func_53(unsigned short p_54, unsigned char * p_55, long long p_56, unsigned char * p_57);
static unsigned short func_58(int p_59, short p_60, unsigned char * p_61, int p_62);
static int func_63(long long p_64, unsigned p_65, unsigned short p_66);
static long long func_67(unsigned long long p_68, short p_69, unsigned char * p_70, unsigned char * p_71);
static int func_1(void)
{
    long long l_5 = 3L;
    int l_10 = 0x3498E64EL;
    unsigned char *l_29 = (void*)0;
    unsigned char *l_30 = &g_31;
    unsigned short *l_184 = &g_185;
    int *l_186 = &g_83;
    short *l_189 = &g_176;
    short **l_188 = &l_189;
    int l_212 = 6L;
    unsigned char l_231 = 0UL;
    struct S0 *l_331 = (void*)0;
    struct S0 **l_330 = &l_331;
    short ****l_349 = (void*)0;
    unsigned long long l_389 = 1UL;
    short l_394 = 0xE210L;
    unsigned short l_398 = 65535UL;
    int *l_406 = (void*)0;
    long long l_476 = 1L;
    long long l_560 = 0xDC40F83F992C3CA4LL;
    short l_591 = 0xF9E0L;
    unsigned long long *l_620 = (void*)0;
    unsigned long long *l_621 = (void*)0;
    unsigned long long *l_622 = &g_250;
    unsigned **l_627 = &g_404;
    unsigned ***l_628 = &l_627;
    unsigned char l_629 = 0xD5L;
    long long l_630 = 0x52EB9B268F7BDA1ALL;
    short l_666 = 2L;
    unsigned l_721 = 0UL;
    long long *l_722 = &l_476;
    short *l_723 = &g_176;
    if (((*l_186) = (safe_mul_func_uint8_t_u_u(g_4, (l_5 | (safe_add_func_int16_t_s_s(((((*l_184) = (safe_mul_func_int16_t_s_s(l_10, (safe_rshift_func_uint8_t_u_s(func_13(func_19((g_25 = l_5), l_5, ((*g_43) = (safe_mul_func_uint8_t_u_u(((*l_30) = g_28), ((safe_add_func_int32_t_s_s(func_34((0x12E7550730467731LL <= l_5), func_37(l_5, l_10, g_28, g_43, l_5)), g_28)) | l_10)))), g_150, g_150), l_5, l_5, l_10, g_167), l_5))))) == g_150) | g_150), 5UL)))))))
    {
        short l_187 = 0xE814L;
        short ***l_190 = &l_188;
        int *l_194 = &g_83;
        unsigned char *l_244 = &g_44;
        (*g_109) = l_187;
        (*l_190) = l_188;
        for (g_83 = 0; (g_83 > (-7)); g_83 = safe_sub_func_uint16_t_u_u(g_83, 1))
        {
            unsigned char l_193 = 2UL;
            short **l_205 = (void*)0;
            volatile int *l_213 = &g_4;
            if (l_193)
                break;
            l_186 = l_194;
            for (g_150 = 0; (g_150 > 15); g_150++)
            {
                struct S0 *l_199 = (void*)0;
                struct S0 **l_200 = &l_199;
                int l_211 = 0x70C76364L;
                int l_266 = 5L;
                if ((safe_add_func_uint16_t_u_u(0x23B7L, (((*l_200) = l_199) != (void*)0))))
                {
                    int **l_206 = &l_194;
                    for (g_25 = 0; (g_25 == 24); ++g_25)
                    {
                        volatile struct S0 *l_204 = &g_203;
                        (*l_204) = g_203;
                        (*l_204) = g_203;
                        (*l_190) = l_205;
                    }
                    (*l_206) = l_194;
                    (*l_206) = l_186;
                    l_212 = func_34((safe_mul_func_uint16_t_u_u((0UL || (*g_109)), (safe_add_func_int16_t_s_s(l_211, g_83)))), &g_31);
                }
                else
                {
                    struct S0 *l_214 = &g_215;
                    struct S0 *l_216 = &g_215;
                    l_213 = &g_4;
                    (*l_200) = l_214;
                    l_216 = &g_215;
                }
                for (g_106 = 0; (g_106 >= 34); g_106 = safe_add_func_uint64_t_u_u(g_106, 7))
                {
                    volatile int **l_219 = &l_213;
                    int *l_224 = &l_212;
                    unsigned *l_229 = &g_25;
                    int l_230 = (-6L);
                    (*l_219) = l_213;
                    (*l_219) = (void*)0;
                    if ((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((*l_194) && ((*l_224) = 0x568AF3DBL)) != ((*g_43) = (&g_109 != &g_109))) || (safe_add_func_uint64_t_u_u(l_211, g_83))), (((safe_mod_func_uint64_t_u_u((((((*l_229) = g_215.f2) && 1UL) != g_106) | g_167), 0x0516E304FEC5635CLL)) == l_230) || g_215.f3))) == 0xF5A9L), g_176)))
                    {
                        unsigned l_232 = 18446744073709551606UL;
                        (*l_224) = (l_231 <= l_232);
                        if ((*l_186))
                            break;
                    }
                    else
                    {
                        unsigned char *l_239 = &l_231;
                        unsigned long long *l_249 = &g_250;
                        unsigned long long *l_251 = (void*)0;
                        unsigned long long *l_252 = &g_253;
                        unsigned *l_261 = &g_167;
                        (*l_224) = func_34((safe_add_func_uint64_t_u_u(func_34((safe_add_func_int8_t_s_s(((*l_190) == (void*)0), (safe_rshift_func_int8_t_s_s((*l_186), 0)))), l_239), ((safe_lshift_func_int16_t_s_u((g_28 & ((0xDAL == (-5L)) & (g_215.f2 & l_193))), 7)) ^ l_193))), &g_31);
                        (*l_224) = (safe_sub_func_uint64_t_u_u((func_34((5L || g_203.f4), l_244) & (safe_sub_func_uint8_t_u_u(((g_25 && (safe_mod_func_uint64_t_u_u((g_254 = ((*l_252) = ((*l_249) = 1UL))), (g_255 = g_185)))) || g_25), ((*l_239) = (safe_mod_func_int32_t_s_s(((((*l_261) = (safe_mul_func_uint8_t_u_u(((*l_244) = (g_260 != g_215.f3)), g_176))) <= g_215.f0) == g_28), 0x2B18A95BL)))))), 0xC058660D6635F1EALL));
                    }
                    for (l_187 = 0; (l_187 >= 15); l_187 = safe_add_func_uint8_t_u_u(l_187, 1))
                    {
                        int **l_264 = &l_224;
                    }
                }
                if (l_266)
                    break;
                if (l_266)
                    break;
            }
        }
    }
    else
    {
        volatile int *l_267 = &g_4;
        unsigned long long l_268 = 0xC2692D651C6119FCLL;
        unsigned char *l_269 = &g_31;
        unsigned char *l_276 = (void*)0;
        unsigned long long l_324 = 18446744073709551615UL;
        short ***l_341 = &l_188;
        long long l_359 = 0xD318F066AA7E0E8ELL;
        int *l_362 = &l_212;
        int l_380 = 0x82936B54L;
        l_267 = &g_4;
        (*l_267) = func_34(l_268, l_269);
        if ((safe_rshift_func_int16_t_s_s((g_260 != g_215.f3), (*l_186))))
        {
            unsigned *l_278 = &g_167;
            unsigned **l_277 = &l_278;
            int l_288 = 0x5B25BDA8L;
            unsigned char *l_325 = &g_31;
            int *l_329 = &g_83;
            if ((safe_lshift_func_uint16_t_u_u((((g_215.f2 && (safe_lshift_func_uint8_t_u_u(func_34(((void*)0 != &l_267), l_276), ((*l_186) || (*l_186))))) ^ ((&g_150 == ((*l_277) = l_186)) || g_106)) ^ l_268), 4)))
            {
                int *l_279 = &g_83;
                int **l_280 = &g_109;
                unsigned char *l_287 = &g_31;
                unsigned char *l_292 = (void*)0;
                short *l_340 = &g_327;
                short ****l_345 = &g_342;
                unsigned long long l_346 = 0x3716B717930CD333LL;
                (*l_280) = l_279;
                if (((**l_280) = (safe_rshift_func_int16_t_s_u(((((g_283 = 1L) <= (safe_unary_minus_func_int64_t_s(8L))) == g_255) < (*g_265)), 13))))
                {
                    unsigned short l_291 = 0xAEB5L;
                    int *l_299 = (void*)0;
                    if ((safe_rshift_func_int8_t_s_u(func_47(l_287, l_288, ((*l_186) = l_288), &g_44, (0x85D1L && (safe_lshift_func_int16_t_s_u((g_25 < ((l_291 ^ (g_255 >= func_47(l_292, g_215.f2, g_253, &g_44, l_5))) || l_291)), g_176)))), 1)))
                    {
                        (*l_267) = (*g_265);
                        return l_291;
                    }
                    else
                    {
                        (*l_279) = (*l_267);
                        g_293 = g_293;
                        g_295 = g_294;
                    }
                    for (g_283 = 0; (g_283 >= (-5)); g_283 = safe_sub_func_uint16_t_u_u(g_283, 9))
                    {
                        unsigned l_298 = 0x8D8FEC67L;
                        (*g_293) = ((*g_265) = (4294967288UL && (g_215.f0 = 0x78D82316L)));
                        if (l_298)
                            break;
                        (*l_280) = l_299;
                        return g_203.f1;
                    }
                    if ((*l_186))
                    {
                        int *l_300 = &g_283;
                        unsigned char ***l_301 = (void*)0;
                        unsigned char **l_303 = &g_43;
                        unsigned char ***l_302 = &l_303;
                        volatile int **l_304 = (void*)0;
                        volatile int **l_305 = &g_293;
                        (*l_280) = l_300;
                        (*l_302) = &g_43;
                        (*l_305) = l_267;
                        (*l_305) = (*l_305);
                    }
                    else
                    {
                        (*l_279) = (*g_293);
                        (*l_186) = (safe_lshift_func_uint16_t_u_u(1UL, 4));
                    }
                    for (g_176 = 0; (g_176 > 19); g_176 = safe_add_func_int16_t_s_s(g_176, 3))
                    {
                        long long ***l_310 = (void*)0;
                        long long *l_313 = &l_5;
                        long long **l_312 = &l_313;
                        long long ***l_311 = &l_312;
                        int l_320 = 0L;
                        unsigned *l_323 = &g_167;
                        short *l_326 = &g_327;
                        (*l_280) = &l_288;
                        (*l_311) = (void*)0;
                        (*g_293) = (safe_rshift_func_uint16_t_u_s(65533UL, (func_58(((*g_265) = (((**l_280) & (*l_267)) < (g_176 >= ((*l_186) == ((safe_rshift_func_int8_t_s_u(((((l_320 & 1L) && ((*l_313) = g_253)) >= ((*l_323) = (safe_lshift_func_uint16_t_u_u((((*g_265) > (*g_109)) <= (*l_186)), (**l_280))))) <= l_324), 5)) >= g_215.f4))))), (**l_280), l_276, (*g_109)) > 1UL)));
                        (*l_279) = ((g_295.f0 != ((g_185 != func_58((*l_186), g_185, l_325, (*g_265))) && ((-10L) == (((*l_326) = g_150) < l_320)))) >= 0xE243C7E6L);
                    }
                }
                else
                {
                    int *l_328 = &g_283;
                    (*l_267) = (*l_186);
                    (*l_186) = 0xA6B90CAAL;
                    l_329 = l_328;
                    if (((g_253 == ((*l_184) = g_215.f1)) || 7L))
                    {
                        (*l_280) = &g_283;
                    }
                    else
                    {
                        return g_203.f4;
                    }
                }
                (*g_293) = (((((((void*)0 != l_330) == (safe_add_func_int64_t_s_s((0xD1D7L == ((*l_184) = ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u(((((*l_188) = l_340) != (void*)0) > ((l_341 == ((*l_345) = g_342)) >= (*l_186))), (**g_343))) ^ g_283) ^ (*l_329)), l_346)), 1UL)) ^ 1UL))), 0x938D7FD9BC95F94DLL))) >= (*l_329)) >= g_283) | 0x50L) < g_295.f0);
            }
            else
            {
                int **l_347 = &l_186;
                (*l_347) = (void*)0;
            }
        }
        else
        {
            int l_348 = 0x8728311FL;
            short *****l_350 = &l_349;
            short ****l_351 = &g_342;
            unsigned *l_352 = &g_167;
            unsigned char *l_360 = &g_44;
            short l_369 = 0xAA7BL;
            long long l_371 = (-1L);
            unsigned l_377 = 18446744073709551610UL;
            if (((*l_186) = func_58(((*l_186) = (l_348 | ((**g_343) | (((*l_352) = (((*l_350) = l_349) == (l_351 = &g_342))) || (safe_mul_func_uint16_t_u_u(((*l_184) = (0xAA598F1EL || g_295.f2)), (g_106 && g_28))))))), (safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((void*)0 == &g_31), l_359)) | g_31), g_215.f4)), l_360, l_348)))
            {
                int *l_361 = (void*)0;
                int **l_363 = &l_186;
                l_362 = l_361;
                (*l_363) = l_361;
            }
            else
            {
                int l_365 = 0L;
                struct S0 ***l_368 = &l_330;
                long long l_370 = 0L;
                unsigned char *l_372 = &g_44;
                (*g_265) = ((safe_unary_minus_func_int8_t_s(func_47(&g_31, l_369, (*l_267), l_372, (*l_186)))) >= l_348);
                (*l_362) = (-1L);
                (*l_362) = l_365;
                for (g_106 = 0; (g_106 > 31); g_106++)
                {
                    int *l_379 = &l_365;
                    if (((safe_rshift_func_uint8_t_u_s(246UL, 6)) & l_377))
                    {
                        int **l_378 = &l_186;
                        (*l_378) = &g_83;
                        (*l_378) = l_379;
                        (*l_186) = (l_380 = (*g_265));
                        (*l_378) = &g_283;
                    }
                    else
                    {
                        return (*l_186);
                    }
                    for (l_359 = (-6); (l_359 > (-9)); --l_359)
                    {
                        int **l_383 = &l_186;
                        (*l_383) = (void*)0;
                        return g_215.f0;
                    }
                }
            }
        }
    }
    if ((!((*g_265) = (*g_293))))
    {
        int **l_384 = &g_265;
        struct S0 *l_388 = &g_215;
        long long *l_411 = &l_5;
        (*l_384) = &l_212;
        if ((**l_384))
        {
            unsigned l_391 = 4294967295UL;
            int l_397 = 0L;
            struct S0 *l_419 = &g_215;
            (*l_384) = &l_212;
            if ((*g_293))
            {
                int *l_387 = &g_283;
                for (g_28 = (-27); (g_28 < (-7)); ++g_28)
                {
                    (*l_384) = l_387;
                    (*l_384) = l_387;
                }
                return g_295.f2;
            }
            else
            {
                char *l_390 = &g_255;
                unsigned char **l_392 = &l_29;
                unsigned char **l_393 = &g_43;
                int l_395 = 0x911E9848L;
                unsigned *l_396 = &l_391;
                (*l_330) = l_388;
                l_398 = (((*l_396) = func_47(((*l_393) = ((*l_392) = func_37((**l_384), l_389, (((*l_390) = (+(**l_384))) != l_391), l_390, (**l_384)))), g_254, l_394, &l_231, l_395)) <= l_397);
            }
            for (g_150 = (-8); (g_150 > 20); g_150 = safe_add_func_int8_t_s_s(g_150, 7))
            {
                volatile struct S0 **l_401 = (void*)0;
                volatile struct S0 **l_402 = &g_146;
                int l_405 = 1L;
                (*l_402) = &g_294;
            }
            for (g_327 = (-16); (g_327 <= (-1)); g_327 = safe_add_func_uint64_t_u_u(g_327, 3))
            {
                long long *l_414 = (void*)0;
                int l_420 = (-1L);
                int **l_428 = &l_406;
            }
        }
        else
        {
            int *l_429 = &g_283;
            l_186 = &l_212;
            (*l_384) = l_429;
            g_109 = &l_212;
            (*l_388) = g_430;
        }
        (*l_384) = &g_283;
        (*g_293) = ((!(247UL | ((**l_384) && ((*g_265) = (*g_265))))) < (safe_rshift_func_uint16_t_u_u(g_203.f4, 7)));
    }
    else
    {
        short ******l_441 = &g_439;
        int l_444 = 1L;
        unsigned char ***l_458 = (void*)0;
        int l_502 = 0x16601FF6L;
        int *l_580 = &g_83;
        int *l_617 = (void*)0;
        int **l_618 = &g_265;
        int **l_619 = &l_186;
        (*g_293) = ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((*l_441) = g_439) == (void*)0), 3)), (-1L))), (safe_mul_func_uint8_t_u_u(9UL, l_444)))) < (2L <= (0UL & ((&g_342 == (void*)0) & l_444))));
        for (l_10 = (-9); (l_10 >= 16); ++l_10)
        {
            int **l_447 = &g_265;
            (*l_447) = &l_212;
            (**l_447) = (*g_265);
        }
        for (g_215.f0 = 0; (g_215.f0 < 46); g_215.f0 = safe_add_func_uint8_t_u_u(g_215.f0, 3))
        {
            int ***l_450 = (void*)0;
            int **l_452 = (void*)0;
            int ***l_451 = &l_452;
            unsigned char *l_471 = &l_231;
            unsigned *l_477 = &g_167;
            unsigned short l_478 = 65535UL;
            unsigned *l_555 = (void*)0;
            unsigned *l_556 = (void*)0;
            unsigned *l_557 = &g_106;
            (*l_451) = (void*)0;
            (*g_293) = (safe_lshift_func_int8_t_s_s(((*g_412) & (-1L)), l_444));
            if ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_203.f0, func_67(g_421.f4, (**g_343), &l_231, (**g_459)))) >= l_444), l_478)))
            {
                int l_481 = 0x8F4892E3L;
                short *******l_482 = &l_441;
                unsigned char *l_499 = &l_231;
                struct S0 *l_511 = &g_421;
                volatile int *l_513 = &g_4;
                int **l_522 = &g_521;
                if (((safe_rshift_func_int16_t_s_u(((**g_343) = func_34(((*l_477) = 0x0751F6BFL), (*g_460))), 4)) | ((l_481 = g_176) && func_63((*g_412), g_294.f3, ((*l_184) = (((*l_482) = (void*)0) != &g_439))))))
                {
                    unsigned long long *l_491 = &g_253;
                    unsigned long long *l_492 = &g_250;
                    int l_500 = (-6L);
                    char l_501 = 1L;
                    long long *l_505 = &l_476;
                    int *l_508 = &g_83;
                    l_406 = &l_481;
                    l_502 = (safe_mul_func_int8_t_s_s(((l_444 = (****g_440)) || ((***g_342) = (safe_sub_func_uint32_t_u_u((&g_185 != &g_254), ((*l_477) = (((safe_sub_func_uint64_t_u_u(((*l_492) = ((*l_491) = (safe_rshift_func_uint16_t_u_u((+((*l_184) = 0x3C59L)), (g_215.f4 = 0xF7C1L))))), (safe_sub_func_int16_t_s_s(l_481, (((safe_lshift_func_int16_t_s_s(func_58((safe_mul_func_uint8_t_u_u(((**g_403) ^ (((*g_412) = func_67(g_421.f0, (**g_343), (**g_459), l_499)) <= (*l_406))), l_500)), l_444, (**g_459), (*g_293)), 1)) >= l_501) && (*l_406)))))) < 0x3605197AL) <= l_481)))))), 0xFEL));
                    if (((*g_412) & ((l_500 != (**g_403)) >= (safe_lshift_func_int8_t_s_s(((g_294.f1 < ((*l_505) = (*g_412))) || (((g_421.f4 == ((*g_43) && 7UL)) & ((*l_184) = (l_481 >= l_500))) | g_430.f4)), g_215.f4)))))
                    {
                        char *l_506 = (void*)0;
                        (*g_293) = (((*l_471) = 0x60L) ^ (g_129 = (((*l_406) = 0x2BA8C676644AA76BLL) == l_500)));
                    }
                    else
                    {
                        int **l_507 = &l_406;
                        int *l_509 = (void*)0;
                        int *l_510 = &l_444;
                        (*l_507) = &l_481;
                        (*l_507) = l_508;
                        (*g_293) = ((*l_510) = ((*g_109) = 0x3103033FL));
                        (*l_330) = l_511;
                    }
                    (*g_109) = l_444;
                }
                else
                {
                    int *l_512 = (void*)0;
                    l_512 = &g_283;
                    l_513 = &g_4;
                    for (g_28 = 0; (g_28 >= 22); ++g_28)
                    {
                        int **l_516 = &g_265;
                        unsigned ***l_517 = &g_403;
                        unsigned ***l_518 = (void*)0;
                        unsigned **l_520 = &g_404;
                        unsigned ***l_519 = &l_520;
                        (*l_516) = (void*)0;
                        (*l_519) = ((*l_517) = &g_404);
                    }
                }
                (*l_522) = g_521;
                g_524 = g_523;
            }
            else
            {
                unsigned l_526 = 4294967294UL;
                int l_544 = 0xCD20B801L;
                if (((safe_unary_minus_func_uint8_t_u(6UL)) && l_444))
                {
                    if (l_526)
                        break;
                    (*g_293) = ((void*)0 == &g_460);
                }
                else
                {
                    long long l_541 = (-1L);
                    int l_545 = 6L;
                    int **l_546 = &l_406;
                    l_545 = (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_215.f2, (safe_lshift_func_int8_t_s_s((((**g_460) = (safe_lshift_func_uint8_t_u_u(((0xED3377B733B5EDC1LL || ((safe_rshift_func_uint8_t_u_s(func_63((*g_412), (safe_lshift_func_uint8_t_u_s(l_526, (l_502 < l_541))), func_58(l_526, ((*g_412) >= ((safe_mod_func_int16_t_s_s(((l_544 = l_526) < (*g_404)), g_421.f3)) || 0xCCB70635L)), (*g_460), (*g_521))), g_215.f4)) >= (**g_460))) | (*****g_439)), 7))) != g_215.f3), 1)))), g_215.f4)) != 0xC0L) == 0L), g_255));
                    g_109 = &l_545;
                    (*g_109) = (g_421.f2 <= (****g_440));
                    (*l_546) = &g_283;
                }
                if (l_526)
                    continue;
            }
            if ((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(253UL, l_444)) != 0x4610ED45B498175CLL), ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((*g_43), func_63(((*g_412) = l_444), (g_455 = ((*l_557) = 0xB64470C1L)), ((safe_rshift_func_uint8_t_u_u(((void*)0 != &g_439), 4)) <= (*g_521))))), g_295.f1)) & l_560))))
            {
                int *l_566 = &l_444;
                struct S0 *l_574 = &g_421;
                for (g_421.f3 = 26; (g_421.f3 == 25); g_421.f3 = safe_sub_func_int8_t_s_s(g_421.f3, 1))
                {
                    struct S0 *l_564 = (void*)0;
                    struct S0 *l_565 = &g_425;
                    int l_572 = (-1L);
                    (*l_565) = g_563;
                    l_566 = (void*)0;
                    for (g_28 = 7; (g_28 == (-9)); g_28 = safe_sub_func_int32_t_s_s(g_28, 2))
                    {
                        struct S0 ***l_570 = &l_330;
                        struct S0 ****l_569 = &l_570;
                        int l_571 = (-10L);
                        g_265 = &l_212;
                        l_571 = (((*l_569) = &l_330) != (void*)0);
                        if (l_572)
                            break;
                    }
                }
                (*l_574) = g_573;
            }
            else
            {
                int *l_581 = &g_283;
                unsigned char *l_590 = (void*)0;
                unsigned short l_607 = 9UL;
                int l_611 = (-7L);
                unsigned char *l_615 = &l_231;
                for (g_421.f4 = 0; (g_421.f4 >= 33); g_421.f4 = safe_add_func_uint8_t_u_u(g_421.f4, 1))
                {
                    unsigned char *l_584 = &l_231;
                    unsigned long long l_592 = 2UL;
                    int *l_612 = (void*)0;
                    for (g_455 = 0; (g_455 != 46); g_455++)
                    {
                        int **l_579 = &l_186;
                        g_265 = ((*l_579) = &g_283);
                        l_581 = (l_580 = (*l_579));
                    }
                    for (g_83 = (-11); (g_83 >= (-9)); g_83 = safe_add_func_uint64_t_u_u(g_83, 6))
                    {
                        unsigned l_587 = 0x1236AFFFL;
                        (*l_581) = func_34(func_34((func_34((*g_404), l_584) | ((safe_sub_func_int32_t_s_s((l_587 = (*l_581)), ((*l_581) == (safe_lshift_func_int8_t_s_s(0x87L, 5))))) < (*g_412))), (*g_460)), l_590);
                    }
                    l_580 = (void*)0;
                    if ((l_591 ^ (*l_581)))
                    {
                        short ******l_593 = &g_439;
                        short *******l_594 = (void*)0;
                        short *******l_595 = &l_593;
                        int l_606 = 0xEFD35347L;
                        unsigned long long *l_608 = (void*)0;
                        unsigned long long *l_609 = &g_253;
                        int l_610 = (-1L);
                        (*l_581) = (l_592 != (((((*l_595) = l_593) == (void*)0) == func_67(((*l_609) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(6UL, l_592)), ((*l_581) = (l_606 = ((~((safe_lshift_func_int16_t_s_s((l_502 = (~((***g_342) = (+(((*g_404) ^ (*g_521)) | (safe_mul_func_uint16_t_u_u(((*l_184) = 0UL), l_606))))))), l_607)) & g_573.f3)) < l_592))))), g_253))), l_610, l_471, (*g_460))) && l_611));
                    }
                    else
                    {
                        int **l_614 = &l_186;
                        (*l_581) = (*g_521);
                        l_612 = &l_502;
                        g_613 = g_573;
                        (*l_614) = l_612;
                    }
                }
                (*g_293) = func_34((*g_404), func_53(func_34((func_34((*g_404), l_471) == 9L), l_615), (*g_460), (*g_412), g_616));
            }
        }
        (*l_619) = ((*l_618) = l_617);
    }
    if ((g_129 & 6UL))
    {
        int l_635 = (-3L);
        int l_636 = 0L;
        short ***l_643 = &l_188;
        unsigned char *l_644 = (void*)0;
        unsigned char ***l_686 = &g_460;
        unsigned char l_691 = 0x9BL;
        int l_705 = (-1L);
        int **l_712 = &g_711;
        (*g_293) = (~(l_636 = ((*g_521) = ((*g_521) <= (func_34(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(1UL, 7)), 0xE337L)) || func_34(l_635, (*g_460))), (**g_459)) | (l_635 >= (*g_43)))))));
        if ((0x407A36B1L | ((safe_rshift_func_uint8_t_u_u((((func_58((safe_add_func_uint16_t_u_u((!func_47(&l_231, g_295.f3, (safe_mul_func_int16_t_s_s((func_47(func_53((l_643 != &l_188), (**g_459), (*g_412), (**g_459)), g_106, l_635, (**g_459), g_327) > l_636), (***g_342))), l_644, l_635)), 0x282EL)), (*g_344), &l_231, g_573.f3) == 0x1FL) ^ l_389) > 0x92L), l_635)) == 0x837EA45691A25BD1LL)))
        {
            unsigned l_645 = 0xE1062D46L;
            unsigned char l_654 = 4UL;
            int **l_655 = &g_521;
            (*g_521) = ((((~l_645) != (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((**g_403), ((safe_sub_func_uint64_t_u_u(0x45588A1D24522508LL, func_63((*g_412), (safe_lshift_func_int16_t_s_s(func_67(l_654, ((*****g_439) = l_645), (**g_459), (**g_459)), l_645)), l_654))) <= 0x87A887EAL))), 0xB2109385L))) < 0xBD85771CL) < 0x79FCBA48C30D0238LL);
            (*l_655) = &g_83;
        }
        else
        {
            int **l_656 = &g_521;
            (*l_656) = &g_83;
        }
        for (g_425.f4 = 4; (g_425.f4 <= 38); g_425.f4 = safe_add_func_uint16_t_u_u(g_425.f4, 1))
        {
            unsigned l_661 = 18446744073709551609UL;
            (*g_521) = func_58(l_635, (****g_440), (**g_459), (*g_109));
            for (l_636 = 12; (l_636 != (-3)); l_636 = safe_sub_func_int64_t_s_s(l_636, 8))
            {
                unsigned l_665 = 0UL;
                unsigned char *l_692 = &l_231;
                unsigned *l_703 = &g_167;
                int l_704 = 0xDAC72CA8L;
                if ((*g_293))
                {
                    char *l_664 = (void*)0;
                    l_661 = l_636;
                    (*g_109) = ((g_327 >= (safe_mul_func_uint8_t_u_u(((void*)0 == &g_521), (l_665 = 0x5BL)))) | g_327);
                }
                else
                {
                    if (l_666)
                    {
                        struct S0 *l_668 = &g_215;
                        (*l_668) = g_667;
                        return g_203.f2;
                    }
                    else
                    {
                        if (l_665)
                            break;
                        if ((*g_293))
                            continue;
                        (*g_521) = 0L;
                    }
                }
                (*g_109) = l_665;
                for (l_630 = (-6); (l_630 > 9); l_630++)
                {
                    long long l_671 = 0xF749F89C0B83537CLL;
                    unsigned l_707 = 18446744073709551615UL;
                    (*g_293) = l_671;
                    for (l_560 = 0; (l_560 == (-14)); --l_560)
                    {
                        int l_693 = 0x235339CCL;
                        int l_694 = 1L;
                        unsigned char *l_695 = &g_31;
                        unsigned *l_702 = &g_563.f0;
                        (*g_521) = (safe_add_func_int64_t_s_s(0xBDE1A7038308B870LL, (safe_sub_func_int8_t_s_s(func_67((safe_mul_func_uint8_t_u_u((func_19((l_694 = (safe_lshift_func_int16_t_s_s(func_13((**g_460), (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((void*)0 != l_686), (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_667.f1, func_58(l_635, l_691, l_692, (*g_109)))), 0x43B3L)))), 0UL)), l_665, l_693, g_421.f4), 7))), l_691, l_671, l_691, l_635) == (-1L)), l_693)), (***g_342), l_695, &l_629), l_636))));
                        (*g_293) = (safe_sub_func_uint8_t_u_u((***g_459), (safe_add_func_uint8_t_u_u(((l_694 = (safe_mul_func_int8_t_s_s(g_203.f1, g_563.f0))) >= (255UL < (**g_460))), 6UL))));
                        (*g_293) = func_19((l_694 = ((*g_404) | (*g_521))), func_34(((*l_702) = (**g_403)), (*g_460)), (((void*)0 != l_703) <= (-1L)), g_667.f1, l_693);
                    }
                    l_705 = (l_704 = ((*g_521) = (*g_293)));
                    if ((((*l_184) = (g_83 ^ ((*g_412) != (safe_unary_minus_func_int64_t_s((l_707 = (*g_412))))))) > 0L))
                    {
                        char l_708 = 0xE3L;
                        (*g_293) = l_708;
                    }
                    else
                    {
                        (*g_293) = ((*g_109) = (safe_rshift_func_int8_t_s_s(0xBAL, 0)));
                    }
                }
            }
        }
        (*l_712) = g_711;
    }
    else
    {
        l_186 = &l_212;
    }
    (*g_293) = (safe_add_func_int16_t_s_s((g_215.f4 < (safe_lshift_func_uint8_t_u_s(255UL, ((safe_add_func_int16_t_s_s((**g_343), (*****g_439))) < (*g_412))))), ((*l_723) = (safe_add_func_int32_t_s_s(l_721, (l_10 < ((*l_622) = (func_63(((*l_722) = ((l_349 == (*g_439)) == g_25)), g_253, g_150) ^ (*g_293)))))))));
    return g_667.f3;
}







static unsigned char func_13(unsigned char p_14, short p_15, unsigned p_16, short p_17, unsigned long long p_18)
{
    char *l_174 = &g_129;
    short *l_175 = &g_176;
    int l_183 = (-7L);
    (*g_109) = (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s(0x18L, (l_174 == (void*)0))) ^ ((*l_175) = (-3L))) >= (g_25 = ((+g_150) < (safe_mul_func_uint16_t_u_u(g_106, g_167))))) > ((*l_174) = g_106)), ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(l_183, 15)), l_183)) && (*g_43))));
    return (*g_43);
}







static unsigned char func_19(unsigned long long p_20, short p_21, unsigned char p_22, char p_23, unsigned p_24)
{
    long long l_153 = (-5L);
    int *l_154 = (void*)0;
    int **l_155 = &l_154;
    unsigned char **l_159 = &g_43;
    unsigned char ***l_158 = &l_159;
    long long *l_164 = &l_153;
    (*g_109) = (safe_sub_func_uint64_t_u_u(p_20, l_153));
    (*l_155) = l_154;
    (*g_109) = p_21;
    (*g_109) = (safe_rshift_func_uint16_t_u_s(((l_158 == &l_159) || ((safe_sub_func_int64_t_s_s(((*l_164) = (safe_rshift_func_int8_t_s_u(0x66L, 6))), ((*g_109) <= ((safe_mul_func_uint16_t_u_u(p_24, p_22)) != (g_167 || ((safe_sub_func_int8_t_s_s(((p_23 | 0L) || (*g_109)), 1UL)) && 0x0EL)))))) || p_24)), g_44));
    return (*g_43);
}







static int func_34(unsigned p_35, unsigned char * p_36)
{
    volatile struct S0 **l_147 = &g_146;
    int *l_148 = &g_83;
    int **l_149 = &g_109;
    (*l_147) = g_146;
    (*l_149) = l_148;
    (*l_149) = (*l_149);
    return p_35;
}







static unsigned char * func_37(unsigned char p_38, char p_39, int p_40, unsigned char * p_41, int p_42)
{
    unsigned char l_74 = 1UL;
    int *l_145 = &g_83;
    (*l_145) = (safe_add_func_uint8_t_u_u((((void*)0 != &g_44) ^ ((!(0x1E6E836EL | (0x7C15L || func_47(func_53(func_58(func_63(func_67((safe_sub_func_int64_t_s_s(p_42, l_74)), p_39, &l_74, &l_74), p_38, p_38), l_74, &l_74, p_40), g_43, g_28, g_43), l_74, g_28, g_43, g_28)))) || p_38)), l_74));
    return &g_44;
}







static unsigned short func_47(unsigned char * p_48, unsigned short p_49, int p_50, unsigned char * p_51, int p_52)
{
    int **l_144 = &g_109;
    (*l_144) = &p_52;
    (**l_144) = (0xE6797F7BC9C4D8F3LL | ((*l_144) == &p_52));
    return p_49;
}







static unsigned char * func_53(unsigned short p_54, unsigned char * p_55, long long p_56, unsigned char * p_57)
{
    int l_126 = 0L;
    char *l_127 = (void*)0;
    char *l_128 = &g_129;
    int *l_134 = &l_126;
    int **l_133 = &l_134;
    int ***l_132 = &l_133;
    (*l_134) = (+((safe_add_func_uint8_t_u_u((1L <= (safe_mul_func_uint8_t_u_u((((func_58(l_126, (((*l_128) = p_54) && ((*g_43) = (safe_lshift_func_int8_t_s_u(p_54, 5)))), p_57, (*g_109)) != (((*l_132) = (void*)0) != g_135)) <= p_54) < p_54), (*l_134)))), 0xF9L)) <= g_106));
    for (g_44 = 0; (g_44 == 19); g_44++)
    {
        int l_140 = (-1L);
        for (g_129 = (-10); (g_129 >= 26); ++g_129)
        {
            int *l_141 = &g_83;
            int **l_142 = (void*)0;
            int **l_143 = &g_109;
            (*l_134) = (((void*)0 != &p_55) != l_140);
            (*l_143) = l_141;
            (*l_143) = (*l_143);
        }
    }
    return &g_44;
}







static unsigned short func_58(int p_59, short p_60, unsigned char * p_61, int p_62)
{
    int l_110 = 0L;
    int l_121 = 0x566F38F6L;
    g_109 = &g_83;
    (*g_109) = l_110;
    p_62 = (safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((g_28 < p_59) != (safe_mod_func_uint16_t_u_u(p_62, (safe_rshift_func_uint16_t_u_s(g_83, p_62))))), (safe_mod_func_int64_t_s_s(l_121, g_106)))) < l_121), (l_110 < p_60)));
    return g_83;
}







static int func_63(long long p_64, unsigned p_65, unsigned short p_66)
{
    int *l_95 = (void*)0;
    int **l_94 = &l_95;
    int *l_96 = &g_83;
    unsigned char *l_101 = (void*)0;
    unsigned char *l_102 = &g_44;
    short l_105 = (-8L);
    unsigned long long l_107 = 0x5F5401BC10B1E149LL;
    long long l_108 = 0x1A6511C0E03A8461LL;
    g_83 = (g_83 >= (safe_mod_func_uint32_t_u_u(((g_83 & (g_106 = (((!(((*l_94) = &g_83) != l_96)) >= p_66) ^ (((p_65 != ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((l_101 == (l_102 = l_101)), (safe_mul_func_int16_t_s_s(((0x042FB88BL <= (*l_96)) && l_105), (*l_96))))) | (*l_96)), 7)) | 4294967291UL)) ^ (*l_96)) < (*l_96))))) <= l_107), 0x40A493BBL)));
    return l_108;
}







static long long func_67(unsigned long long p_68, short p_69, unsigned char * p_70, unsigned char * p_71)
{
    unsigned char **l_75 = &g_43;
    unsigned char ***l_76 = (void*)0;
    unsigned char ***l_77 = &l_75;
    int l_87 = 0x74340CABL;
    int *l_91 = &g_83;
    int **l_90 = &l_91;
    (*l_77) = l_75;
    for (g_44 = (-7); (g_44 > 54); ++g_44)
    {
        short l_84 = 0L;
        int *l_86 = &g_83;
        int *l_88 = &l_87;
        int **l_89 = &l_86;
        for (p_69 = 0; (p_69 < (-21)); p_69 = safe_sub_func_int32_t_s_s(p_69, 2))
        {
            int *l_82 = &g_83;
            (*l_82) = p_68;
        }
        (*l_86) = ((p_68 ^ l_84) != (safe_unary_minus_func_uint32_t_u(0x5018227FL)));
        (*l_88) = ((*l_86) = l_87);
        (*l_89) = &l_87;
    }
    (*l_90) = &l_87;
    return p_68;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    transparent_crc(g_215.f4, "g_215.f4", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f2, "g_294.f2", print_hash_value);
    transparent_crc(g_294.f3, "g_294.f3", print_hash_value);
    transparent_crc(g_294.f4, "g_294.f4", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1, "g_295.f1", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_295.f3, "g_295.f3", print_hash_value);
    transparent_crc(g_295.f4, "g_295.f4", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_421.f0, "g_421.f0", print_hash_value);
    transparent_crc(g_421.f1, "g_421.f1", print_hash_value);
    transparent_crc(g_421.f2, "g_421.f2", print_hash_value);
    transparent_crc(g_421.f3, "g_421.f3", print_hash_value);
    transparent_crc(g_421.f4, "g_421.f4", print_hash_value);
    transparent_crc(g_425.f0, "g_425.f0", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_425.f3, "g_425.f3", print_hash_value);
    transparent_crc(g_425.f4, "g_425.f4", print_hash_value);
    transparent_crc(g_430.f0, "g_430.f0", print_hash_value);
    transparent_crc(g_430.f1, "g_430.f1", print_hash_value);
    transparent_crc(g_430.f2, "g_430.f2", print_hash_value);
    transparent_crc(g_430.f3, "g_430.f3", print_hash_value);
    transparent_crc(g_430.f4, "g_430.f4", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_523.f0, "g_523.f0", print_hash_value);
    transparent_crc(g_523.f1, "g_523.f1", print_hash_value);
    transparent_crc(g_523.f2, "g_523.f2", print_hash_value);
    transparent_crc(g_523.f3, "g_523.f3", print_hash_value);
    transparent_crc(g_523.f4, "g_523.f4", print_hash_value);
    transparent_crc(g_524.f0, "g_524.f0", print_hash_value);
    transparent_crc(g_524.f1, "g_524.f1", print_hash_value);
    transparent_crc(g_524.f2, "g_524.f2", print_hash_value);
    transparent_crc(g_524.f3, "g_524.f3", print_hash_value);
    transparent_crc(g_524.f4, "g_524.f4", print_hash_value);
    transparent_crc(g_563.f0, "g_563.f0", print_hash_value);
    transparent_crc(g_563.f1, "g_563.f1", print_hash_value);
    transparent_crc(g_563.f2, "g_563.f2", print_hash_value);
    transparent_crc(g_563.f3, "g_563.f3", print_hash_value);
    transparent_crc(g_563.f4, "g_563.f4", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_573.f3, "g_573.f3", print_hash_value);
    transparent_crc(g_573.f4, "g_573.f4", print_hash_value);
    transparent_crc(g_613.f0, "g_613.f0", print_hash_value);
    transparent_crc(g_613.f1, "g_613.f1", print_hash_value);
    transparent_crc(g_613.f2, "g_613.f2", print_hash_value);
    transparent_crc(g_613.f3, "g_613.f3", print_hash_value);
    transparent_crc(g_613.f4, "g_613.f4", print_hash_value);
    transparent_crc(g_667.f0, "g_667.f0", print_hash_value);
    transparent_crc(g_667.f1, "g_667.f1", print_hash_value);
    transparent_crc(g_667.f2, "g_667.f2", print_hash_value);
    transparent_crc(g_667.f3, "g_667.f3", print_hash_value);
    transparent_crc(g_667.f4, "g_667.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
