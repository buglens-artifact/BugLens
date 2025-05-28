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



static volatile unsigned g_2 = 0x76AABECBL;
static unsigned short g_30 = 0xB241L;
static unsigned char g_70[1][3] = {{0x5AL, 0x5AL, 0x5AL}};
static int g_78 = 0L;
static int *g_77 = &g_78;
static short g_90 = 0L;
static char g_105 = 7L;
static unsigned char g_114 = 0x6AL;
static unsigned g_168 = 7UL;
static unsigned char g_191[7] = {0xE7L, 255UL, 0xE7L, 255UL, 0xE7L, 255UL, 0xE7L};
static unsigned g_206 = 0UL;
static int g_239 = 0x4B629CB9L;
static char g_254 = 1L;
static char *g_253[1] = {&g_254};
static char *g_255[3] = {&g_254, &g_254, &g_254};
static unsigned g_292 = 0x1C9B2D7FL;
static unsigned g_327 = 0x087FA20CL;
static unsigned char *g_352 = &g_191[0];
static unsigned char **g_351 = &g_352;
static unsigned char ***g_350 = &g_351;
static char g_361 = (-1L);
static char **g_368 = &g_255[0];
static int g_465 = 1L;
static short *g_480 = (void*)0;
static short **g_479 = &g_480;
static unsigned g_488 = 0xE43F85C0L;
static unsigned char g_505 = 0xCEL;
static short ***g_506 = &g_479;
static unsigned g_536 = 0x497A88A1L;
static unsigned g_544 = 4294967286UL;
static unsigned g_561 = 7UL;
static unsigned g_562 = 0UL;
static unsigned g_564 = 0x41C3A4AAL;
static int g_615 = (-1L);
static int g_726 = 6L;
static int **g_757 = &g_77;
static int ***g_756 = &g_757;
static short g_845 = 0L;
static int *g_848 = &g_239;
static volatile unsigned g_868[5][3] = {{1UL, 4294967295UL, 0UL}, {1UL, 4294967295UL, 0UL}, {1UL, 4294967295UL, 0UL}, {1UL, 4294967295UL, 0UL}, {1UL, 4294967295UL, 0UL}};
static volatile unsigned g_869 = 0xB564BED6L;
static volatile unsigned g_870 = 4294967287UL;
static volatile unsigned g_871 = 0UL;
static volatile unsigned g_872 = 7UL;
static volatile unsigned g_873 = 4294967295UL;
static volatile unsigned g_874 = 4294967289UL;
static volatile unsigned *g_867[5][2][3] = {{{(void*)0, &g_873, &g_872}, {(void*)0, &g_873, &g_872}}, {{(void*)0, &g_873, &g_872}, {(void*)0, &g_873, &g_872}}, {{(void*)0, &g_873, &g_872}, {(void*)0, &g_873, &g_872}}, {{(void*)0, &g_873, &g_872}, {(void*)0, &g_873, &g_872}}, {{(void*)0, &g_873, &g_872}, {(void*)0, &g_873, &g_872}}};
static volatile unsigned **g_866[1] = {&g_867[4][0][2]};
static int *g_891 = &g_726;
static volatile unsigned *g_924 = (void*)0;
static volatile unsigned **g_923[7][7] = {{&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}, {&g_924, (void*)0, &g_924, &g_924, &g_924, &g_924, &g_924}};
static unsigned *g_961[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static unsigned **g_960[10][10][2] = {{{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}, {{&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}, {&g_961[2], &g_961[2]}}};
static char g_980 = 0xBCL;
static volatile int g_1031 = 0x7DFECE74L;
static unsigned short **g_1034 = (void*)0;
static unsigned g_1117 = 4294967290UL;



static unsigned func_1(void);
static unsigned func_3(unsigned short p_4, unsigned p_5, unsigned p_6, unsigned char p_7);
static unsigned char func_8(unsigned p_9, char p_10, unsigned p_11);
static char func_12(unsigned char p_13, short p_14, int p_15, short p_16, short p_17);
static unsigned char func_18(unsigned short p_19, unsigned p_20, unsigned short p_21);
static unsigned func_23(unsigned p_24, unsigned p_25, short p_26, unsigned p_27);
static unsigned char func_31(unsigned p_32, unsigned char p_33, char p_34, unsigned p_35);
static unsigned func_39(int p_40, short p_41, unsigned char p_42, int p_43);
static unsigned char func_44(unsigned p_45, short p_46);
static short func_53(unsigned char p_54, int p_55, unsigned short p_56);
static unsigned func_1(void)
{
    unsigned char l_22 = 252UL;
    unsigned l_38 = 1UL;
    int l_616 = (-1L);
    unsigned char l_926 = 0UL;
    unsigned l_927[5];
    int i;
    for (i = 0; i < 5; i++)
        l_927[i] = 7UL;
    l_616 = (g_2 && func_3((func_8(g_2, func_12(((255UL || func_18(l_22, func_23(((((*g_352) = ((safe_rshift_func_int8_t_s_u((l_22 || (g_30 ^ l_22)), func_31((safe_div_func_uint8_t_u_u(g_30, l_22)), l_38, g_30, g_30))) < g_615)) , g_168) ^ g_292), g_562, l_616, g_254), g_488)) == l_22), l_926, l_927[2], l_926, l_616), g_488) , 0x9E84L), l_927[4], g_505, l_927[0]));
    return l_616;
}







static unsigned func_3(unsigned short p_4, unsigned p_5, unsigned p_6, unsigned char p_7)
{
    int l_1041[5] = {0xE8C5C4BBL, 1L, 0xE8C5C4BBL, 1L, 0xE8C5C4BBL};
    int *l_1043 = &g_615;
    unsigned char l_1044[3][2][4] = {{{0UL, 0UL, 8UL, 0x54L}, {0UL, 0UL, 8UL, 0x54L}}, {{0UL, 0UL, 8UL, 0x54L}, {0UL, 0UL, 8UL, 0x54L}}, {{0UL, 0UL, 8UL, 0x54L}, {0UL, 0UL, 8UL, 0x54L}}};
    unsigned **l_1051 = &g_961[2];
    unsigned short *l_1054[10] = {&g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30};
    unsigned short **l_1053 = &l_1054[9];
    char *l_1068 = (void*)0;
    short ***l_1071 = (void*)0;
    int l_1115 = 0xBE3E3773L;
    char l_1116 = 0xBFL;
    unsigned short l_1118 = 0xCC56L;
    char l_1120 = 1L;
    int l_1142 = 0x65AA1BAFL;
    int l_1146 = 0xF4A3D268L;
    int l_1151 = 0x00BB50D0L;
    int i, j, k;
    for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
    {
        int *l_1042 = (void*)0;
        unsigned **l_1048 = &g_961[1];
        unsigned **l_1050 = &g_961[2];
        unsigned l_1081[1];
        unsigned short **l_1102 = &l_1054[5];
        short *l_1113 = &g_845;
        short *l_1114[9];
        int *l_1119 = &l_1115;
        unsigned char ***l_1122 = &g_351;
        short l_1141 = 0xFC62L;
        int i;
        for (i = 0; i < 1; i++)
            l_1081[i] = 4UL;
        for (i = 0; i < 9; i++)
            l_1114[i] = &g_90;
    }
    return (*l_1043);
}







static unsigned char func_8(unsigned p_9, char p_10, unsigned p_11)
{
    int l_933[3];
    int l_937 = 9L;
    unsigned *l_983 = &g_564;
    char *l_989 = &g_980;
    unsigned l_1009[4];
    unsigned short l_1036 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_933[i] = 0xAAA36313L;
    for (i = 0; i < 4; i++)
        l_1009[i] = 0UL;
lbl_963:
    for (g_239 = 0; (g_239 <= 12); ++g_239)
    {
        short l_936 = 9L;
        short *l_938 = &l_936;
        char *l_948 = &g_105;
        int *l_949 = &g_615;
        char ***l_950 = (void*)0;
        (*l_949) = (&g_368 == ((p_11 >= (safe_mul_func_uint16_t_u_u(g_78, p_10))) , l_950));
    }
    for (g_239 = 0; (g_239 >= 0); g_239 -= 1)
    {
        unsigned *l_951 = &g_206;
        int l_979 = 0x55A09223L;
        l_933[1] = (((*l_951) = 4294967291UL) , (safe_div_func_int16_t_s_s(1L, g_536)));
        for (g_564 = 0; (g_564 <= 0); g_564 += 1)
        {
            int *l_954 = &g_615;
            int l_965 = 0xDAE498DAL;
            int l_981 = (-1L);
            (**g_756) = (void*)0;
            if ((p_9 < (((l_951 != (l_937 , l_954)) || (*g_352)) ^ (((*l_951) = p_11) == 3L))))
            {
                int l_955 = 0x357E075FL;
                (*g_757) = l_951;
                if ((**g_757))
                    break;
                if (p_11)
                    continue;
                if ((0x5CL | 5L))
                {
                    (***g_756) = (l_955 && 0xD460B0DEL);
                }
                else
                {
                    int *l_966 = (void*)0;
                    char l_971[10][8] = {{7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}, {7L, 2L, 0xB4L, 2L, 7L, (-1L), 7L, 2L}};
                    unsigned char l_974 = 1UL;
                    int l_982 = 0L;
                    int i, j;
                    for (g_30 = 0; (g_30 <= 2); g_30 += 1)
                    {
                        unsigned ***l_962[10][3] = {{&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}, {&g_960[5][3][1], &g_960[3][2][0], &g_960[5][5][1]}};
                        int i, j;
                        (*g_757) = &l_933[g_30];
                        (*l_954) = (safe_mul_func_uint16_t_u_u(func_44(((*l_951) = p_10), l_955), (safe_rshift_func_uint16_t_u_u((&g_924 == (g_960[4][4][1] = g_960[3][2][0])), g_845))));
                        (**g_756) = (void*)0;
                        (*l_954) = p_9;
                    }
                    for (g_536 = 0; (g_536 <= 0); g_536 += 1)
                    {
                        int *l_964 = &l_933[2];
                        if (p_10)
                            goto lbl_963;
                        l_965 = ((*l_964) = ((*l_954) = 0xCD2358B6L));
                        l_966 = l_966;
                    }
                    for (g_206 = 0; (g_206 <= 0); g_206 += 1)
                    {
                        int i, j;
                        (*l_954) = g_70[g_239][g_564];
                        l_982 = ((safe_sub_func_uint8_t_u_u(g_70[g_564][g_564], (((*l_954) | (safe_sub_func_int8_t_s_s(l_971[3][6], ((safe_mul_func_uint16_t_u_u((p_9 ^ l_974), func_53((0x8698E4D0L <= (safe_div_func_uint16_t_u_u(l_937, func_12((safe_sub_func_uint16_t_u_u(((l_979 & 0L) & p_10), l_937)), p_10, g_70[g_564][g_564], g_980, l_981)))), g_488, p_9))) ^ 0x4BAC507FL)))) <= p_9))) , l_979);
                    }
                    (*l_954) = 0xB43F3956L;
                }
            }
            else
            {
                unsigned short l_984 = 65527UL;
                (*g_757) = (**g_756);
                for (g_105 = 0; (g_105 <= 0); g_105 += 1)
                {
                    for (g_488 = 0; (g_488 <= 0); g_488 += 1)
                    {
                        l_933[2] = (l_983 == (void*)0);
                    }
                    if (l_984)
                        break;
                    for (l_981 = 0; (l_981 >= 0); l_981 -= 1)
                    {
                        return (**g_351);
                    }
                }
                (*l_954) = (safe_rshift_func_int16_t_s_s(7L, 1));
            }
        }
    }
    if (((((((*g_368) = &p_10) == (((((((*l_989) = (safe_lshift_func_int8_t_s_s(l_933[2], 7))) & (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(65530UL, (~(l_933[2] | l_933[2])))), 7))) , 0x37A546E7L) <= (((safe_mod_func_uint8_t_u_u(((*g_352) = ((0x2122L & p_9) & l_937)), l_933[2])) , 0x8244C73DL) , l_933[2])) & p_10) , &g_980)) & 0L) , p_10) != l_933[2]))
    {
        int **l_996 = &g_848;
        int l_1010[6][6] = {{(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}, {(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}, {(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}, {(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}, {(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}, {(-10L), 0xE67845D8L, 0x9A48998BL, 0x8FC43725L, 0x9A48998BL, 0xE67845D8L}};
        int i, j;
        (*l_996) = ((**g_756) = (void*)0);
        for (g_239 = 28; (g_239 > (-8)); --g_239)
        {
            int l_999 = (-3L);
            unsigned ***l_1006 = &g_960[3][2][0];
            (**g_756) = (*l_996);
            l_999 = (l_999 , ((safe_sub_func_int32_t_s_s(p_11, (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((0xB28196AAL >= (g_292 = ((p_11 != (l_1006 != (l_937 , &g_923[1][5]))) <= (p_9 && ((p_10 >= 0UL) & l_1009[1]))))), l_1010[0][2])) ^ 0xF85DL), 0)))) , 0L));
            if (l_1010[4][1])
                continue;
        }
        l_1010[0][2] = l_1009[1];
    }
    else
    {
        unsigned l_1014 = 0xA09FDE89L;
        unsigned char **l_1015 = &g_352;
        int *l_1022 = &g_239;
        if (p_10)
        {
            short *l_1011 = &g_845;
            int l_1023 = 1L;
            unsigned l_1024 = 0x6FE6427AL;
            char l_1035[3][1][5] = {{{1L, 0xA5L, 0L, 0xA5L, 1L}}, {{1L, 0xA5L, 0L, 0xA5L, 1L}}, {{1L, 0xA5L, 0L, 0xA5L, 1L}}};
            int i, j, k;
            (*l_1022) = (l_937 , (l_1011 != ((((safe_sub_func_uint8_t_u_u(l_1014, (l_1015 == ((safe_mul_func_uint8_t_u_u((l_1024 & (*l_1022)), l_1024)) , (*g_350))))) >= p_11) == p_9) , (*g_479))));
            (*l_1022) = func_53(((l_1024 & (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_11, ((safe_mul_func_int16_t_s_s(g_1031, ((*l_1022) = (safe_mod_func_uint8_t_u_u((((l_933[2] = (*l_1022)) , g_1034) == g_1034), (*l_1022)))))) || (0x2C90L && g_868[4][2])))), p_10))) != l_1035[1][0][2]), l_1009[1], l_1036);
            (*g_757) = (*g_757);
        }
        else
        {
            return p_10;
        }
    }
    for (g_361 = 24; (g_361 == 15); --g_361)
    {
        (**g_756) = &l_933[1];
        (**g_756) = (*g_757);
    }
    return (*g_352);
}







static char func_12(unsigned char p_13, short p_14, int p_15, short p_16, short p_17)
{
    int *l_928[2][7] = {{(void*)0, &g_465, (void*)0, &g_465, (void*)0, &g_465, (void*)0}, {(void*)0, &g_465, (void*)0, &g_465, (void*)0, &g_465, (void*)0}};
    int i, j;
    l_928[1][1] = l_928[0][0];
    g_848 = ((*g_757) = &p_15);
    return p_13;
}







static unsigned char func_18(unsigned short p_19, unsigned p_20, unsigned short p_21)
{
    unsigned short l_825 = 0x4AE6L;
    int *l_826 = &g_239;
    unsigned short l_865 = 0x1E05L;
    int *l_890 = &g_726;
    short l_902 = 0x08D5L;
    if (((*l_826) = l_825))
    {
        unsigned *l_828 = &g_168;
        unsigned **l_827 = &l_828;
        unsigned **l_829[2][1][1];
        unsigned *l_830 = &g_562;
        int l_831 = (-8L);
        unsigned *l_876 = &g_206;
        unsigned **l_875 = &l_876;
        int l_886 = 0x7D7568F6L;
        short *l_912 = &l_902;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_829[i][j][k] = (void*)0;
            }
        }
        if (((l_830 = ((*l_827) = l_826)) != &g_564))
        {
            char l_842 = 0xEAL;
            for (g_78 = 0; (g_78 <= 6); g_78 += 1)
            {
                for (g_536 = 0; (g_536 <= 0); g_536 += 1)
                {
                    (*g_757) = l_828;
                    for (g_90 = 0; (g_90 <= 0); g_90 += 1)
                    {
                        short *l_843 = (void*)0;
                        short *l_844 = &g_845;
                        int i, j, k;
                        l_831 = (+g_191[g_78]);
                        (*g_77) = g_191[g_78];
                        if ((*g_77))
                            continue;
                        (**g_757) = (((((void*)0 != l_829[g_536][g_90][g_536]) || p_21) != (((p_20 , ((safe_sub_func_int32_t_s_s((0x1EL == 0xBEL), g_78)) < (safe_lshift_func_int16_t_s_s(((*l_844) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_831 , (safe_lshift_func_uint8_t_u_u(p_20, l_842))), 0x2C2FL)), 13))), 13)))) , l_831) > 255UL)) , (**g_757));
                    }
                }
            }
        }
        else
        {
            unsigned short l_877 = 1UL;
            int *l_892 = &g_726;
            unsigned short *l_899 = &g_30;
            int *l_900 = (void*)0;
            int *l_901[9] = {&l_886, &g_615, &l_886, &g_615, &l_886, &g_615, &l_886, &g_615, &l_886};
            unsigned *l_911 = &g_206;
            char *l_913[7] = {&g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105};
            unsigned l_914 = 0x007CD26FL;
            int l_915 = (-1L);
            volatile unsigned ***l_925 = &g_923[5][6];
            int i;
lbl_849:
            (**g_756) = &l_831;
            if (((*l_826) = (**g_757)))
            {
                int *l_850 = &g_726;
                int l_878 = 0x5961961EL;
                for (g_292 = 20; (g_292 != 26); g_292++)
                {
                    (**g_756) = g_848;
                    if (l_831)
                        goto lbl_849;
                }
                l_878 = func_44(func_39(((*l_850) = p_19), (0UL || (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_168, (safe_lshift_func_int8_t_s_u((((0x7CL != ((**g_351) = ((safe_lshift_func_int16_t_s_s((l_877 = (((*g_352) | (safe_lshift_func_uint16_t_u_u(((((9L || (safe_sub_func_uint32_t_u_u((~(safe_add_func_int8_t_s_s(p_19, ((1L ^ g_206) && l_865)))), g_191[4]))) && l_831) , g_866[0]) == l_875), 13))) ^ l_831)), p_21)) > 0xC1L))) >= 4294967286UL) | 254UL), 4)))), 4L))), p_21, g_488), p_20);
                (*g_848) = (safe_div_func_uint16_t_u_u(((((65535UL ^ ((safe_unary_minus_func_uint32_t_u(((**l_875) = (func_23(l_878, g_536, ((l_831 = (safe_sub_func_int32_t_s_s(1L, (safe_mul_func_int16_t_s_s(((*l_826) | l_831), (p_19 , (func_31(p_20, (*g_352), l_878, p_20) && l_878))))))) != p_20), l_877) < p_21)))) , g_239)) , p_21) , 0x63L) < 0xDFL), l_886));
            }
            else
            {
                short l_889 = 0xEEE3L;
                (**g_756) = (*g_757);
                if (p_21)
                    goto lbl_918;
                (*g_848) = (safe_add_func_int8_t_s_s(((*l_826) == l_877), func_39(p_21, l_877, ((**g_351) = ((func_31((l_877 && (((g_891 = (l_890 = (((***g_350) = (((*l_826) != l_889) > l_889)) , l_826))) == l_892) | p_20)), l_877, l_886, (*l_826)) & l_889) , 1UL)), l_877)));
                if (g_168)
                    goto lbl_905;
                (*g_757) = l_892;
                return (***g_350);
            }
            if ((((**l_875) = (*l_826)) & (safe_sub_func_int16_t_s_s(l_886, ((((l_886 , 1L) , func_53((*g_352), (g_615 = (safe_add_func_int8_t_s_s(l_877, ((safe_mod_func_uint32_t_u_u((func_53((!((((*l_899) = 0x5E7CL) , ((*l_826) > l_886)) | l_877)), (*l_826), g_70[0][1]) > 1UL), l_886)) > (-1L))))), l_902)) , l_886) < 9UL)))))
            {
                (**g_757) = (*l_826);
                (*g_848) = p_20;
            }
            else
            {
lbl_905:
                (*g_756) = ((safe_div_func_uint8_t_u_u(p_21, 1L)) , (*g_756));
lbl_918:
                for (g_564 = 0; (g_564 > 36); g_564 = safe_add_func_int16_t_s_s(g_564, 8))
                {
                    unsigned l_908[10][10] = {{0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}, {0xD7205740L, 0x25880665L, 0x25880665L, 0xD7205740L, 0xECA9908FL, 4294967288UL, 0x6D5C3CFEL, 3UL, 4294967286UL, 0xC8A35BD3L}};
                    int *l_917 = &l_886;
                    int i, j;
                    if (((*g_848) = l_908[9][8]))
                    {
                        (**g_756) = &l_886;
                        return p_19;
                    }
                    else
                    {
                        unsigned l_916 = 0xEA940466L;
                        (**g_756) = l_901[0];
                        (*g_757) = ((safe_mul_func_int32_t_s_s(((4294967295UL & (l_911 != ((*l_875) = (p_21 , &p_20)))) && ((**l_875) = (p_19 ^ 0xD9L))), ((((!func_53(((void*)0 != l_912), func_31(((void*)0 != l_913[6]), (**g_351), l_914, g_544), g_30)) >= l_915) <= l_916) > g_361))) , (**g_756));
                    }
                    (**g_756) = l_917;
                }
                for (g_564 = 0; (g_564 != 28); g_564 = safe_add_func_uint32_t_u_u(g_564, 1))
                {
                    (*g_848) = (+(safe_add_func_int32_t_s_s(l_886, p_21)));
                    return p_20;
                }
            }
            (*l_925) = g_923[1][5];
        }
    }
    else
    {
        (*l_826) = (*g_848);
    }
    return (*l_826);
}







static unsigned func_23(unsigned p_24, unsigned p_25, short p_26, unsigned p_27)
{
    char l_633 = 2L;
    int l_664 = (-8L);
    int *l_687 = &g_239;
    int l_704 = 2L;
    int **l_713 = &g_77;
    char ***l_722 = &g_368;
    int l_734 = 0xFACF10C5L;
    unsigned l_737 = 0xBEA4F120L;
    int l_740 = 1L;
    int *l_823 = (void*)0;
    for (g_292 = (-20); (g_292 >= 20); g_292++)
    {
        int **l_625 = (void*)0;
        int ***l_624[2][8] = {{(void*)0, &l_625, &l_625, &l_625, &l_625, (void*)0, &l_625, &l_625}, {(void*)0, &l_625, &l_625, &l_625, &l_625, (void*)0, &l_625, &l_625}};
        char *l_640 = (void*)0;
        unsigned char l_647 = 0UL;
        unsigned short *l_670 = &g_30;
        unsigned char l_701 = 253UL;
        unsigned char l_702 = 0xE6L;
        char ***l_703 = (void*)0;
        short *l_723 = &g_90;
        short *l_724[1];
        int *l_725 = &g_726;
        unsigned l_727 = 0x50C27766L;
        char l_779 = 0L;
        unsigned *l_786 = &l_727;
        int i, j;
        for (i = 0; i < 1; i++)
            l_724[i] = (void*)0;
        for (g_206 = 11; (g_206 != 24); ++g_206)
        {
            char l_659[1][7][3] = {{{0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}, {0x3EL, 0x3EL, 0x31L}}};
            int l_680 = 1L;
            int *l_686 = &g_615;
            int i, j, k;
            for (g_615 = 0; (g_615 < (-10)); g_615--)
            {
                unsigned l_623[10][4] = {{0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}, {0x39303659L, 0xDEBA4C19L, 1UL, 0x58ACEE18L}};
                int l_626[9] = {0x9D08C2D2L, 0x87DE9CD4L, 0x9D08C2D2L, 0x87DE9CD4L, 0x9D08C2D2L, 0x87DE9CD4L, 0x9D08C2D2L, 0x87DE9CD4L, 0x9D08C2D2L};
                char *l_639 = &g_254;
                int i, j;
                l_626[2] = (l_623[0][1] && (l_624[1][7] == &l_625));
                if ((safe_add_func_int32_t_s_s((g_292 & (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_633 && ((-1L) >= func_53((0x5EC3L > p_25), (0x43D5A7BEL & ((***g_350) <= (p_24 >= g_465))), p_27))), 1L)), (-9L)))), (-1L))))
                {
                    int l_646 = 0xC9295CA9L;
                    for (l_633 = 29; (l_633 > 9); l_633 = safe_sub_func_uint16_t_u_u(l_633, 3))
                    {
                        int l_638 = 1L;
                        unsigned *l_645 = &l_623[3][1];
                        l_638 = ((safe_div_func_int16_t_s_s(0xE0CEL, func_39(((l_638 != (p_27 > ((l_639 == ((*g_368) = l_640)) | (func_53((**g_351), (safe_div_func_uint32_t_u_u(g_536, func_53((safe_rshift_func_int16_t_s_u((((*l_645) = g_465) , (g_465 || 2L)), 14)), l_646, p_27))), g_488) > 0x1BF85078L)))) ^ 6L), l_647, (**g_351), p_27))) ^ p_25);
                    }
                }
                else
                {
                    int l_663 = (-9L);
                    int *l_665 = &l_626[2];
                    unsigned short **l_671 = &l_670;
                    char *l_678 = &g_361;
                    unsigned l_679 = 18446744073709551608UL;
                    if (p_25)
                        break;
                    for (p_26 = 2; (p_26 > 2); p_26++)
                    {
                        int *l_650 = (void*)0;
                        unsigned *l_662 = &g_561;
                        g_77 = (l_650 = &g_239);
                        l_664 = (((safe_lshift_func_int8_t_s_u(0L, 1)) == (((safe_mul_func_int8_t_s_s((p_24 , ((~(((g_78 = (((safe_add_func_uint16_t_u_u(p_24, (((l_626[2] = ((*g_77) = 0x0A1CC50CL)) > (l_623[0][1] >= (((((((-1L) < (safe_sub_func_int16_t_s_s(l_659[0][4][0], (func_39(((l_659[0][5][1] == (((*l_662) = p_25) < l_663)) > l_633), p_25, (**g_351), l_659[0][4][0]) || 0L)))) || p_26) , g_544) == p_25) <= 4L) <= g_361))) , p_24))) >= p_26) >= 0xDFL)) , 2UL) == l_633)) < 1L)), 0x1EL)) > 0x009DL) < 0x1CC9L)) , 0xB317CE01L);
                        l_665 = l_665;
                        if ((*g_77))
                            break;
                    }
                    l_680 = ((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((0xBC83L < (((*l_671) = l_670) == (void*)0)), (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((-5L), ((*l_678) = ((*l_639) = ((((((void*)0 == &g_368) & ((*l_665) = g_561)) != ((p_26 & (safe_sub_func_int32_t_s_s((((l_623[0][1] & p_26) | l_664) >= l_623[5][1]), p_25))) < 1L)) != 0x67L) == 0xC584L))))), g_561)))) , l_679) != p_24) , 0L), l_659[0][4][0])) || p_24);
                }
            }
            for (l_664 = 0; (l_664 < (-3)); l_664--)
            {
                g_465 = l_659[0][1][0];
            }
            for (p_25 = (-7); (p_25 != 34); p_25++)
            {
                int *l_685 = &l_664;
                l_686 = l_685;
                l_686 = &g_239;
                l_685 = (l_687 = &l_664);
                for (g_544 = 0; (g_544 <= 2); g_544 += 1)
                {
                    int *l_688 = &g_465;
                    l_688 = &g_615;
                    for (g_615 = 1; (g_615 >= 0); g_615 -= 1)
                    {
                        int i, j;
                        (*l_685) = (safe_lshift_func_int8_t_s_u(((((void*)0 != &l_624[g_615][(g_615 + 6)]) <= ((0x6CE5L || (*l_688)) <= (*l_685))) | ((safe_sub_func_int32_t_s_s((65535UL ^ (safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((*l_670) = (0xBCL >= func_53((**g_351), ((safe_rshift_func_int16_t_s_s(p_25, 11)) & 0x5125L), p_24))) , 7UL), p_25)) , (*l_685)) , p_27), 0x4AL))), 0x92247F17L)) | (*l_688))), 5));
                    }
                    return p_25;
                }
            }
        }
        l_704 = ((*l_687) = (6UL >= (((p_26 , (func_39(g_505, (p_25 , ((p_27 && p_24) && 0x393038B4L)), l_701, l_702) , (void*)0)) != l_703) == (**g_351))));
        g_77 = &g_78;
        if (((*l_687) = ((safe_add_func_int8_t_s_s(((func_44(g_70[0][1], ((*l_723) = (p_25 | (((safe_div_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((l_713 == &g_77) >= (((safe_mul_func_uint16_t_u_u((g_30 = func_39(((*l_725) = (((safe_rshift_func_uint8_t_u_u(((***g_350) = (safe_div_func_uint32_t_u_u(((func_53((safe_lshift_func_uint16_t_u_s((l_722 != &g_368), 6)), p_26, (((-9L) != ((*l_687) = ((*l_723) = p_24))) , 65528UL)) | (-4L)) , (**l_713)), 0xB7219520L))), 7)) != 0x328DL) ^ p_25)), p_26, p_25, g_70[0][1])), 0x925CL)) , p_26) != p_27)), g_70[0][1])) , (*g_368)) == (*g_368)), p_25)) < 0x6CL) <= 1UL)))) | 0L) == p_27), p_25)) | l_727)))
        {
            int *l_728 = &l_704;
            unsigned *l_731[10] = {&g_292, &l_727, &g_292, &l_727, &g_292, &l_727, &g_292, &l_727, &g_292, &l_727};
            int l_741 = 0x7A4136E1L;
            unsigned l_761[5];
            unsigned short l_762 = 65535UL;
            unsigned l_808 = 1UL;
            int i;
            for (i = 0; i < 5; i++)
                l_761[i] = 0x83DE74D8L;
            g_77 = l_728;
            if ((*l_687))
                continue;
            if (((((safe_add_func_int8_t_s_s(((func_44((p_27 , (p_24 = (**l_713))), ((*l_723) = (safe_lshift_func_int8_t_s_s(l_734, 5)))) & (p_27 || 4L)) | (((safe_mul_func_uint16_t_u_u(g_168, g_465)) ^ ((*l_687) && p_26)) == p_27)), (*l_728))) < p_25) ^ l_737) > 0UL))
            {
                unsigned short l_742 = 0xAD98L;
                (*l_687) = 0x379BE5DAL;
                if ((safe_div_func_uint16_t_u_u(((g_327 = (p_24 = ((((*l_728) <= p_26) && p_26) & (l_741 = (l_740 = ((*l_687) = (-1L))))))) ^ l_742), func_44((safe_mul_func_uint8_t_u_u(func_39(((safe_add_func_uint32_t_u_u(3UL, (safe_add_func_int16_t_s_s(p_27, (+(safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((((func_44(g_70[0][1], p_25) , (-4L)) != p_27) , p_26))) ^ p_27), (*l_728)))))))) , l_742), p_26, p_27, (*l_728)), 0xD6L)), p_25))))
                {
                    int ****l_758 = &l_624[0][0];
                    (*l_687) = func_44(p_24, ((((safe_div_func_int16_t_s_s((p_26 , func_39(g_536, (((safe_mul_func_uint8_t_u_u((*g_352), ((*l_687) = 0x4FL))) , (&l_713 != ((*l_758) = g_756))) && func_31(g_70[0][1], ((**g_351) = ((safe_add_func_uint8_t_u_u(((p_24 > 0xFF26L) && l_742), (-1L))) >= (*l_687))), l_761[4], l_742)), p_24, l_762)), l_742)) > (-3L)) , l_742) | l_742));
                    (*g_757) = (void*)0;
                }
                else
                {
                    int *l_765 = &g_239;
                    for (p_27 = 0; (p_27 > 30); ++p_27)
                    {
                        (**g_756) = l_765;
                        (*l_713) = &l_741;
                        if ((*l_728))
                            continue;
                        if ((***g_756))
                            continue;
                    }
                    l_728 = (((g_70[0][0] , 5L) <= (func_53((*l_687), p_25, (0x4791L == p_24)) > g_90)) , &l_741);
                }
            }
            else
            {
                unsigned l_778[5][8] = {{1UL, 0UL, 0x004D67EBL, 0x13639C64L, 0x2580D25EL, 0xFBE01EB7L, 0x2580D25EL, 0x13639C64L}, {1UL, 0UL, 0x004D67EBL, 0x13639C64L, 0x2580D25EL, 0xFBE01EB7L, 0x2580D25EL, 0x13639C64L}, {1UL, 0UL, 0x004D67EBL, 0x13639C64L, 0x2580D25EL, 0xFBE01EB7L, 0x2580D25EL, 0x13639C64L}, {1UL, 0UL, 0x004D67EBL, 0x13639C64L, 0x2580D25EL, 0xFBE01EB7L, 0x2580D25EL, 0x13639C64L}, {1UL, 0UL, 0x004D67EBL, 0x13639C64L, 0x2580D25EL, 0xFBE01EB7L, 0x2580D25EL, 0x13639C64L}};
                char *l_780[2][2][10] = {{{&l_779, (void*)0, &g_105, &g_361, &g_105, (void*)0, &l_779, &g_361, (void*)0, &l_779}, {&l_779, (void*)0, &g_105, &g_361, &g_105, (void*)0, &l_779, &g_361, (void*)0, &l_779}}, {{&l_779, (void*)0, &g_105, &g_361, &g_105, (void*)0, &l_779, &g_361, (void*)0, &l_779}, {&l_779, (void*)0, &g_105, &g_361, &g_105, (void*)0, &l_779, &g_361, (void*)0, &l_779}}};
                int i, j, k;
                (*l_728) = (p_24 | (g_191[5] , ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(func_44((*l_728), (func_31((p_27 > 0xC3FA7E1FL), (**g_351), (l_741 = ((*l_687) = ((+((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((65530UL > (safe_div_func_uint8_t_u_u(((((((*l_670) = (p_25 != ((4294967286UL > (-3L)) || g_562))) , p_26) , (*l_687)) || g_191[4]) >= (*l_728)), l_778[4][5]))) == l_778[0][4]), p_25)), 6L)) <= l_779)) < 0x66E2L))), g_465) , p_24)), 0xB3L)), l_778[1][6])) > p_27)));
                (*l_713) = (void*)0;
                for (g_78 = (-17); (g_78 <= 27); ++g_78)
                {
                    unsigned **l_783 = &l_731[5];
                    unsigned *l_785 = (void*)0;
                    unsigned **l_784[5][8] = {{&l_785, &l_785, &l_785, (void*)0, &l_785, &l_785, (void*)0, (void*)0}, {&l_785, &l_785, &l_785, (void*)0, &l_785, &l_785, (void*)0, (void*)0}, {&l_785, &l_785, &l_785, (void*)0, &l_785, &l_785, (void*)0, (void*)0}, {&l_785, &l_785, &l_785, (void*)0, &l_785, &l_785, (void*)0, (void*)0}, {&l_785, &l_785, &l_785, (void*)0, &l_785, &l_785, (void*)0, (void*)0}};
                    int l_793 = (-1L);
                    int *l_809[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_809[i] = &l_704;
                    (*l_713) = &l_741;
                    (*l_728) = ((((*l_783) = &p_27) == (l_786 = (void*)0)) != (p_26 > (safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s(l_778[4][5], ((*l_728) != p_26))) & (l_793 = (p_25 && (p_27 , (p_25 | p_27))))) | 8UL) <= 0UL), 7L)) != (**l_713)) < 0x74108DD9L) ^ l_778[3][3]), p_25))));
                    if ((safe_add_func_uint8_t_u_u((((*l_687) = (safe_sub_func_uint16_t_u_u(p_24, p_24))) || (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((g_90 , (safe_div_func_int8_t_s_s(p_24, ((p_25 ^ (***g_350)) , p_26)))), ((func_39((((func_53(l_778[4][5], ((*g_77) = ((safe_mod_func_uint32_t_u_u((1UL <= p_26), p_26)) , l_808)), p_24) < p_26) , 0L) && 0x1CB81311L), l_778[2][6], (**g_351), (*l_728)) , p_25) , l_778[3][7]))), (*l_728))), l_793))), 0xBCL)))
                    {
                        int *l_810 = &l_741;
                        l_809[0] = &l_741;
                        (*l_713) = &l_741;
                        (**g_756) = l_810;
                        (*l_713) = (*g_757);
                    }
                    else
                    {
                        (*l_728) = ((*g_77) > 0x69474BBFL);
                        (*l_728) = func_53((***g_350), (safe_mul_func_uint16_t_u_u(65528UL, (&g_292 == &l_778[0][1]))), p_27);
                        if ((***g_756))
                            continue;
                    }
                }
            }
        }
        else
        {
            char l_820 = (-9L);
            unsigned char *l_824 = &l_702;
            (*l_687) = (((((p_26 = (((*g_352) = (*l_687)) != (g_254 | (safe_mul_func_int8_t_s_s(0xD1L, func_39((safe_mod_func_uint16_t_u_u(p_26, (safe_unary_minus_func_uint8_t_u((safe_mul_func_int32_t_s_s(((g_465 < l_820) , (*l_687)), ((&l_740 != ((safe_add_func_uint8_t_u_u(((*l_824) = (&g_615 == l_823)), p_26)) , (void*)0)) < (*l_687)))))))), p_25, p_26, p_26)))))) && p_26) < g_292) > 255UL) | l_820);
        }
    }
    (*l_713) = &l_740;
    (**g_757) = (**l_713);
    (**l_713) = 0x201DD122L;
    return p_26;
}







static unsigned char func_31(unsigned p_32, unsigned char p_33, char p_34, unsigned p_35)
{
    int l_47 = 8L;
    int l_608 = 0x71CB0910L;
    int *l_613 = &g_78;
    int **l_614 = &g_77;
    (*l_613) = (func_39(((-1L) != func_44(p_35, l_47)), (l_608 = l_47), ((safe_lshift_func_uint16_t_u_u(1UL, ((safe_lshift_func_int8_t_s_s(p_34, 0)) & p_33))) <= (0UL > g_239)), p_35) , l_47);
    (*l_614) = &l_608;
    return (*l_613);
}







static unsigned func_39(int p_40, short p_41, unsigned char p_42, int p_43)
{
    return p_40;
}







static unsigned char func_44(unsigned p_45, short p_46)
{
    unsigned l_48[8][6][5] = {{{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}, {{18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}, {18446744073709551614UL, 0x28F0BD90L, 0x279191D4L, 1UL, 1UL}}};
    unsigned short l_73[2][6][4] = {{{0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}}, {{0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}, {0xE4ACL, 65535UL, 65527UL, 65527UL}}};
    int l_80[1][7][4] = {{{6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}, {6L, (-2L), 0xAE02F119L, (-4L)}}};
    unsigned char l_116 = 5UL;
    int l_117 = 7L;
    unsigned l_130 = 0x06419DAFL;
    char *l_258 = (void*)0;
    char **l_257[9][4] = {{&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}, {&l_258, (void*)0, &l_258, &l_258}};
    char ***l_256[4] = {&l_257[4][0], &l_257[3][0], &l_257[4][0], &l_257[3][0]};
    int *l_261 = &l_117;
    unsigned l_314 = 8UL;
    unsigned l_337 = 0xD3141FF9L;
    unsigned char **l_386[9] = {&g_352, &g_352, &g_352, &g_352, &g_352, &g_352, &g_352, &g_352, &g_352};
    unsigned l_409 = 18446744073709551610UL;
    short l_414 = (-10L);
    short l_419 = (-6L);
    int l_466 = (-2L);
    int l_547 = (-1L);
    int **l_588[5][4][1] = {{{&g_77}, {&g_77}, {&g_77}, {&g_77}}, {{&g_77}, {&g_77}, {&g_77}, {&g_77}}, {{&g_77}, {&g_77}, {&g_77}, {&g_77}}, {{&g_77}, {&g_77}, {&g_77}, {&g_77}}, {{&g_77}, {&g_77}, {&g_77}, {&g_77}}};
    int ***l_587 = &l_588[1][3][0];
    int i, j, k;
    for (p_45 = 0; (p_45 <= 4); p_45 += 1)
    {
        unsigned char *l_69 = &g_70[0][1];
        int l_71 = 0x6B9FE218L;
        int l_72[4] = {7L, 0x7C0CB0A7L, 7L, 0x7C0CB0A7L};
        char *l_146 = &g_105;
        char **l_145 = &l_146;
        unsigned short *l_188 = &g_30;
        int *l_211 = &g_78;
        int **l_212 = (void*)0;
        int **l_213 = &g_77;
        int i;
        if ((((safe_lshift_func_int8_t_s_u((-1L), 4)) & ((safe_lshift_func_int16_t_s_s((func_53(g_30, (0x21L >= (safe_mul_func_uint8_t_u_u(p_46, 0L))), (((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((l_71 = (((safe_lshift_func_uint16_t_u_s(p_45, 8)) != l_48[4][5][3]) , ((l_48[0][1][0] >= (safe_div_func_uint8_t_u_u(((*l_69) = (p_45 , 0x71L)), p_46))) , 1UL))) < l_72[1]), l_48[4][2][1])), p_46)), l_72[1])) & l_73[1][5][3]) >= l_72[0])) & l_80[0][3][3]), l_72[2])) ^ g_30)) , 0xFAD0966AL))
        {
            int l_87 = 0x048CB009L;
            unsigned short *l_88 = &l_73[1][3][0];
            short *l_89 = &g_90;
            int *l_91 = &g_78;
            (*l_91) = (safe_lshift_func_int16_t_s_u(((*l_89) = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x1EL, func_53(l_87, l_72[0], ((*l_88) = 65527UL)))), p_46))), 1));
        }
        else
        {
            unsigned short l_101 = 0xB4BAL;
            short *l_102 = &g_90;
            int *l_103[7][6][6] = {{{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}, {{&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}, {&l_72[1], &l_72[0], &g_78, (void*)0, (void*)0, &l_72[1]}}};
            int **l_133 = &g_77;
            int i, j, k;
            l_72[1] = func_53(g_78, l_72[2], (l_72[1] < (((*l_102) = (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_70[0][0], ((((g_90 | (!g_70[0][2])) < p_46) > (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u(p_45, (~func_53(func_53(p_46, (*g_77), p_45), l_73[1][5][1], p_45)))))), l_101))) , l_71))), 255UL))) > 1L)));
            for (g_78 = 0; g_78 < 2; g_78 += 1)
            {
                for (l_101 = 0; l_101 < 6; l_101 += 1)
                {
                    for (p_46 = 0; p_46 < 4; p_46 += 1)
                    {
                        l_73[g_78][l_101][p_46] = 0xE56FL;
                    }
                }
            }
            for (l_71 = 4; (l_71 >= 0); l_71 -= 1)
            {
                char *l_104 = &g_105;
                unsigned char l_115 = 0UL;
                int l_118 = (-1L);
                int *l_120[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_120[i] = &l_72[1];
                l_117 = (((-10L) | (((((g_30 != ((((g_114 = (((*l_104) = (l_69 == l_69)) == (safe_mul_func_uint8_t_u_u((0xB50EL == 1L), ((+func_53(l_73[1][5][3], (g_90 , (l_72[2] = (safe_add_func_uint8_t_u_u(((*l_69) = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(func_53(l_71, p_45, g_70[0][1]), (-7L))), l_72[1]))), g_30)))), p_45)) , p_45))))) & g_30) , (*g_77)) & l_115)) || p_45) < p_46) || l_116) , g_78)) || l_115);
                l_118 = 0xE765C773L;
                for (g_90 = 1; (g_90 <= 4); g_90 += 1)
                {
                    int **l_119[5][7][7] = {{{&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}}, {{&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}}, {{&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}}, {{&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}}, {{&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}, {&g_77, &l_103[0][1][3], &g_77, &l_103[0][1][3], &l_103[2][0][1], &l_103[0][1][3], &l_103[0][1][3]}}};
                    int i, j, k;
                    l_120[1] = (void*)0;
                    l_117 = l_48[(p_45 + 3)][(p_45 + 1)][g_90];
                    if (l_48[(l_71 + 1)][p_45][g_90])
                        continue;
                    if ((l_117 = (l_48[(l_71 + 1)][(p_45 + 1)][p_45] < (*g_77))))
                    {
                        short *l_129[2];
                        unsigned char *l_131 = &l_116;
                        int l_132 = 9L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_129[i] = (void*)0;
                        g_77 = &l_118;
                        l_117 = (safe_mul_func_uint16_t_u_u(p_46, (safe_mul_func_int16_t_s_s(1L, (safe_mul_func_int8_t_s_s(((func_53(g_70[0][2], (safe_mul_func_int16_t_s_s((((l_130 = g_90) >= g_105) >= ((p_45 == l_71) == ((func_53(((*l_131) = (p_45 | (g_30 | g_70[0][1]))), p_45, g_90) <= 0x3FL) > p_45))), l_132)), l_72[1]) , 0x5124L) >= g_70[0][1]), l_72[1]))))));
                        if (p_46)
                            break;
                    }
                    else
                    {
                        if ((*g_77))
                            break;
                        return g_78;
                    }
                }
            }
            (*l_133) = &l_117;
        }
        for (l_116 = 0; (l_116 <= 4); l_116 += 1)
        {
            char *l_135 = (void*)0;
            char **l_134[2];
            unsigned short *l_142 = &l_73[1][5][3];
            int l_147 = 0xB5FD3911L;
            int *l_148 = (void*)0;
            int *l_149 = &l_72[1];
            int i;
            for (i = 0; i < 2; i++)
                l_134[i] = &l_135;
            for (l_130 = 0; (l_130 <= 4); l_130 += 1)
            {
                char ***l_136 = &l_134[1];
                int **l_137 = &g_77;
                (*l_136) = l_134[1];
                if (p_45)
                    break;
                (*l_137) = &g_78;
            }
            if (l_72[2])
                continue;
        }
        (*l_213) = &l_117;
    }
    for (l_117 = 0; (l_117 <= 0); l_117 += 1)
    {
        short l_235 = 4L;
        unsigned short *l_238[8] = {&g_30, &l_73[1][5][3], &g_30, &l_73[1][5][3], &g_30, &l_73[1][5][3], &g_30, &l_73[1][5][3]};
        int *l_259 = &l_117;
        unsigned short l_270[6] = {65527UL, 65532UL, 65527UL, 65532UL, 65527UL, 65532UL};
        char **l_278[6][9] = {{&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}, {&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}, {&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}, {&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}, {&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}, {&g_255[0], &g_253[0], &g_253[0], &g_255[0], &g_253[0], &l_258, &l_258, &g_255[0], &g_255[2]}};
        short l_319 = 1L;
        unsigned short l_330 = 65535UL;
        int l_336 = 6L;
        int *l_370 = &g_78;
        int l_376 = 0L;
        int l_436 = (-7L);
        unsigned l_538 = 0UL;
        int **l_607 = &l_261;
        int i, j;
        for (l_130 = 0; (l_130 <= 1); l_130 += 1)
        {
            int *l_214 = &g_78;
            int **l_215 = &g_77;
            (*l_214) = (-2L);
            (*l_215) = l_214;
            for (g_206 = 0; (g_206 <= 1); g_206 += 1)
            {
                short *l_234[2];
                unsigned char *l_236[8][6][5] = {{{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}, {{&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}, {&l_116, &g_70[l_117][(l_130 + 1)], (void*)0, (void*)0, &g_70[l_117][(l_130 + 1)]}}};
                int *l_237 = &l_117;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_234[i] = (void*)0;
                (*l_215) = ((safe_mod_func_int16_t_s_s((g_70[l_117][(l_130 + 1)] != (safe_rshift_func_int16_t_s_s(g_70[l_117][g_206], g_70[0][1]))), ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((((g_191[4] = (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_46, (((func_53(p_46, (safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((g_90 = (**l_215)), g_30)) & 0xE263D413L), p_45)), p_46) & 0x4CL) != l_235) != g_70[l_117][(l_130 + 1)]))) >= p_45), g_70[0][2])), 0xC9L))) || 9L) <= p_45) < g_206) <= p_45), p_45)) != p_45), p_46)) , (-10L)))) , l_237);
            }
        }
    }
    return (***g_350);
}







static short func_53(unsigned char p_54, int p_55, unsigned short p_56)
{
    int **l_79 = &g_77;
    for (p_55 = 0; (p_55 == (-27)); p_55 = safe_sub_func_uint32_t_u_u(p_55, 6))
    {
        int **l_76 = (void*)0;
        g_77 = &p_55;
    }
    (*l_79) = &g_78;
    return g_70[0][1];
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
    transparent_crc(g_30, "g_30", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_868[i][j], "g_868[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
