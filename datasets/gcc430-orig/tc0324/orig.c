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
   const short f0;
   unsigned f1;
   volatile unsigned f2;
   unsigned long long f3;
   volatile unsigned short f4;
   long long f5;
   int f6;
   unsigned char f7;
   unsigned f8;
};


static const int g_3 = 1L;
static const int *g_2 = &g_3;
static int g_15 = (-1L);
static int ** const g_16 = (void*)0;
static int * const g_42 = &g_15;
static int * const *g_41 = &g_42;
static unsigned short g_69 = 65532UL;
static int g_72 = (-1L);
static int *g_83 = &g_15;
static int **g_82 = &g_83;
static int ***g_81 = &g_82;
static unsigned char g_87 = 0x71L;
static unsigned g_89 = 4294967291UL;
static unsigned g_91 = 0x49D2A59AL;
static unsigned g_115 = 0x64004C0DL;
static unsigned char g_138 = 0xA2L;
static unsigned *g_156 = (void*)0;
static unsigned g_185 = 0UL;
static volatile struct S0 g_186 = {0x7815L,1UL,0UL,0x0D2D4BDACD6EFC41LL,65533UL,6L,0xE0452890L,0xC2L,0xB4E4937CL};
static char g_203 = 0x16L;
static struct S0 g_225 = {1L,0x209B59D2L,18446744073709551611UL,1UL,0UL,0x663D83FAE531C9E7LL,1L,246UL,4294967289UL};
static volatile struct S0 **g_271 = (void*)0;
static struct S0 g_275 = {0xD6CBL,0x3FD38586L,8UL,3UL,65535UL,0xB8E6694AF43C66CALL,-1L,0x10L,4UL};
static struct S0 g_303 = {0xD335L,0x8890BF55L,0x258212B9L,0xB87AEF85FED4BC83LL,65529UL,0x187187948F24D8D2LL,0xDB809BE0L,248UL,4294967295UL};
static struct S0 g_317 = {7L,0x9E7574E0L,0xFF162379L,0x1BD90DFAA9D0DC52LL,0xD881L,0xDB401B76CC970ECALL,-1L,0xB1L,0x91A13EBEL};
static char *g_321 = &g_203;
static char **g_320 = &g_321;
static struct S0 g_342 = {0x0746L,1UL,4UL,18446744073709551615UL,0xE9B2L,0L,0xA594232AL,0x1CL,0x770F6266L};
static short g_438 = 0xD6FBL;
static volatile unsigned short *g_458 = &g_317.f4;
static volatile unsigned short **g_457 = &g_458;
static short g_467 = 0x1671L;
static short g_469 = (-10L);
static struct S0 g_476 = {1L,1UL,0xDACEA11EL,0xE5F4FDC7B34576F9LL,0xC107L,-1L,-1L,0xDDL,4294967293UL};
static unsigned long long *g_493 = &g_275.f3;
static char g_498 = 0L;
static struct S0 g_534 = {5L,0UL,0xC0106431L,9UL,7UL,-5L,1L,249UL,4294967288UL};
static struct S0 g_543 = {3L,0UL,0xBFE666BCL,0xA1AC683BA32330B0LL,1UL,0x94ACDE1FB7B2AF48LL,0xF8519290L,0x29L,0x59FF8481L};
static volatile struct S0 g_569 = {1L,0xC3ABDAFCL,0UL,0xF9136AE211D9316DLL,0UL,0xD272C52D89DEE809LL,0xA3C1E21AL,9UL,0x5ED30F5EL};
static volatile int *g_586 = &g_569.f6;
static short *g_636 = &g_469;
static short **g_635 = &g_636;
static unsigned long long **g_647 = &g_493;
static volatile unsigned g_705 = 0xEE07445AL;
static unsigned g_753 = 0UL;
static volatile char ** const **g_756 = (void*)0;
static volatile struct S0 g_773 = {0L,0UL,0x1EC5547DL,18446744073709551608UL,0x634BL,0xF132E3758F47A489LL,0x5C498E62L,1UL,1UL};
static unsigned g_778 = 4294967295UL;
static const int **g_780 = &g_2;



static int func_1(void);
static int func_7(char p_8, int ** p_9, int ** const p_10, long long p_11);
static unsigned short func_17(unsigned char p_18, const int ** p_19, long long p_20, unsigned short p_21);
static const int ** func_22(int ** p_23, int ** p_24, const int * p_25);
static int ** func_26(int ** p_27, int p_28, int p_29, int ** p_30, int p_31);
static int ** func_32(unsigned short p_33);
static int func_38(int * const * p_39, long long p_40);
static int ** func_43(int p_44);
static struct S0 func_52(int *** p_53, unsigned short p_54, const int ** p_55, int p_56, char p_57);
static int *** func_58(int * p_59, unsigned p_60, unsigned p_61, int p_62, const short p_63);
static int func_1(void)
{
    const int **l_4 = (void*)0;
    const int *l_6 = &g_3;
    const int **l_5 = &l_6;
    unsigned char l_12 = 0x5EL;
    int *l_14 = &g_15;
    int **l_13 = &l_14;
    int **l_34 = &l_14;
    int **l_384 = &l_14;
    unsigned l_583 = 0x9016D3C7L;
    (*l_5) = (g_2 = (void*)0);

    ;
    ;
    (*l_5) = (void*)0;
    (*g_42) = func_7(l_12, l_13, g_16, (((**l_34) = (~(func_17((**l_13), func_22(func_26(func_32((l_34 != &l_14)), (**g_41), g_342.f1, &l_14, (*l_14)), l_384, &g_3), (**l_384), g_317.f3) ^ l_583))) | g_469));



    ;
    ;
    ;

    ;

    ;
    return g_225.f0;
}







static int func_7(char p_8, int ** p_9, int ** const p_10, long long p_11)
{
    int *l_587 = (void*)0;
    unsigned short *l_589 = &g_69;
    const int **l_594 = (void*)0;
    int l_599 = 0x20EB0305L;
    short *l_602 = &g_438;
    short **l_601 = &l_602;
    unsigned *l_620 = &g_89;
    unsigned *l_621 = &g_275.f8;
    unsigned *l_626 = (void*)0;
    unsigned *l_627 = &g_115;
    unsigned char *l_630 = &g_534.f7;
    unsigned l_633 = 4294967291UL;
    unsigned long long **l_643 = &g_493;
    struct S0 *l_683 = &g_534;
    const long long l_700 = 0L;
    int **l_751 = &g_83;
    char ***l_755 = &g_320;
    char ****l_754 = &l_755;
    unsigned short **l_770 = &l_589;
    unsigned short ***l_769 = &l_770;
    unsigned char l_777 = 0x65L;
    int l_779 = 0L;
    char l_822 = 0x47L;
    for (g_275.f6 = (-25); (g_275.f6 > 18); g_275.f6 = safe_add_func_uint16_t_u_u(g_275.f6, 9))
    {
        unsigned l_588 = 0x5E2CD10EL;
        g_586 = g_586;
        (*p_9) = l_587;


        if (l_588)
            continue;
    }


    if (((*g_42) = ((0x0A2F4F4BL & p_8) || ((((g_543.f2 , (((g_342.f4 , l_589) != l_589) , ((((*g_458) == g_498) >= ((((0x81BED697L & g_342.f1) <= (*g_42)) , (-1L)) <= (*g_321))) , p_11))) || g_543.f6) >= 0L) | g_225.f8))))
    {
        int *l_590 = &g_342.f6;
        const unsigned long long l_593 = 0UL;
        int **l_600 = &g_83;
        l_590 = l_587;

        ;
        (*g_586) = 0L;
        (*g_586) = ((safe_rshift_func_int16_t_s_u(g_534.f2, 3)) ^ g_342.f7);
        (*l_600) = (*g_41);

        ;
    }
    else
    {
        short **l_603 = &l_602;
        long long *l_610 = &g_225.f5;
        const unsigned *l_615 = &g_115;
        const unsigned **l_614 = &l_615;
        const unsigned ***l_613 = &l_614;
        (*g_586) = 0xFC60709CL;
        l_603 = l_601;
        (*g_586) = ((*g_42) = (safe_lshift_func_int16_t_s_u(((**l_603) = (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(0UL, ((*l_610) = p_11))), (safe_rshift_func_int8_t_s_s(0x66L, (*g_321)))))), 5)));
        (*l_613) = (void*)0;

        ;
    }
    (**g_41) = (safe_rshift_func_int8_t_s_u(p_8, (safe_sub_func_uint64_t_u_u((((*l_621) = ((*l_620) = p_8)) == p_8), ((g_186.f1 , ((*g_321) = p_11)) , (safe_sub_func_int64_t_s_s((((func_17((safe_add_func_int16_t_s_s((((((*l_627) = (((*l_589) = (((*g_458) && 0xC7AFL) ^ g_469)) | p_11)) , 0x2BBFBCDDL) > p_11) || g_303.f3), p_11)), &g_2, p_8, g_534.f7) >= 0xB5L) , (*g_321)) > 3L), p_8)))))));
    if ((g_534.f0 > (((safe_rshift_func_int8_t_s_u((l_630 != &g_87), p_8)) != ((safe_sub_func_uint8_t_u_u((((g_225.f7 <= ((0x963D5DD70BEDFC33LL ^ 18446744073709551611UL) , 0x6C50A03F197820AFLL)) > p_11) == l_633), 1UL)) && p_8)) && 0x5BD8CDDA3CB162B9LL)))
    {
        short ***l_634 = &l_601;
        int l_660 = 0x1351A47DL;
        unsigned l_665 = 0x28EF7569L;
        int *l_694 = &g_317.f6;
        (**g_41) = (((*l_634) = &l_602) == (g_635 = &l_602));

        ;
        (**g_41) = (g_534.f8 ^ p_11);
        for (g_317.f5 = 0; (g_317.f5 > 18); ++g_317.f5)
        {
            unsigned long long **l_641 = (void*)0;
            int l_652 = (-1L);
            if ((*g_586))
                break;
            for (g_317.f6 = (-3); (g_317.f6 == 23); g_317.f6 = safe_add_func_uint64_t_u_u(g_317.f6, 3))
            {
                unsigned long long ***l_642 = &l_641;
                unsigned long long **l_645 = &g_493;
                unsigned long long ***l_644 = &l_645;
                unsigned long long ***l_646 = (void*)0;
                int l_659 = 0x38B4C455L;
                unsigned char l_666 = 253UL;
                int l_693 = 1L;
                g_647 = ((*l_644) = (l_643 = ((*l_642) = l_641)));

                ;
                ;
                ;
                for (g_476.f3 = (-17); (g_476.f3 >= 5); g_476.f3++)
                {
                    unsigned * const *l_656 = (void*)0;
                    unsigned * const **l_655 = &l_656;
                    struct S0 *l_667 = &g_225;
                    struct S0 **l_668 = &l_667;
                    int **l_669 = &l_587;
                    (*p_9) = (void*)0;


                    (*g_586) = ((((*l_602) = ((safe_lshift_func_int8_t_s_u((~l_652), (safe_lshift_func_int16_t_s_s(((l_655 != ((safe_add_func_int32_t_s_s(l_652, l_652)) , &l_656)) >= l_659), 7)))) , l_660)) || p_11) , (*g_586));
                    (*l_668) = l_667;
                    (*l_669) = (*g_41);

                    ;
                }

                ;
                for (g_342.f6 = (-28); (g_342.f6 < 29); g_342.f6++)
                {
                    unsigned long long l_674 = 0x97445A5CA8DDB146LL;
                    long long *l_690 = &g_543.f5;
                    unsigned char *l_691 = (void*)0;
                    unsigned char *l_692 = &g_225.f7;
                    (**g_41) = (safe_mul_func_int16_t_s_s((-8L), (((*g_458) | (safe_add_func_int8_t_s_s((((*l_642) = &g_493) != ((l_660 & p_11) , (void*)0)), (*g_321)))) & g_225.f1)));

                    ;
                    (*p_9) = &l_659;


                    for (g_543.f5 = 9; (g_543.f5 == 26); ++g_543.f5)
                    {
                        if (l_665)
                            break;
                        l_683 = l_683;
                        (*p_9) = &l_660;


                    }


                    (*g_586) = ((**p_9) = ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((**g_457), 0x072EL)), ((*g_42) = (**p_9)))) && (((((*l_690) = (l_599 = func_17(((*l_692) = (((*l_630) = (g_469 >= 18446744073709551615UL)) , (safe_add_func_int32_t_s_s((1L > (((l_665 , (((*l_690) = g_569.f4) || 0x31419C38570D369FLL)) < 0xCBL) , p_8)), 0xD23138D2L)))), &g_2, g_534.f1, l_674))) ^ (*g_493)) && 0x135EL) , l_693)));
                }


                ;
                return l_652;



            }
            g_2 = (l_694 = (((l_652 | 0x9D27L) || (*g_321)) , (*p_9)));

            ;
            ;
        }


        ;
        (*g_42) = ((**g_635) <= func_17(g_342.f6, l_594, g_534.f8, p_11));
    }
    else
    {
        unsigned l_698 = 0xCE40C89AL;
        int l_715 = 0x55D662D1L;
        unsigned char l_717 = 0UL;
        char ***l_729 = &g_320;
        char ****l_728 = &l_729;
        unsigned *l_740 = (void*)0;
        const int **l_752 = &g_2;
        int * const **l_757 = (void*)0;
        int **l_802 = &g_83;
        if ((*g_586))
        {
            const int l_695 = 0L;
            unsigned char *l_699 = &g_543.f7;
            short *l_707 = &g_467;
            int l_716 = 0xE7E4A89CL;
            int *l_723 = &g_317.f6;
            const int **l_737 = &g_2;
            unsigned **l_738 = (void*)0;
            unsigned **l_739 = &g_156;
            if ((l_695 ^ (p_11 > (((**l_601) = ((((safe_lshift_func_int16_t_s_s((**g_635), (((((p_8 , l_698) , ((*l_699) = ((*l_630) = g_534.f1))) > l_700) == p_11) != ((**g_457) , 1UL)))) & l_698) , 0xCEL) == l_695)) | (*g_636)))))
            {
                for (g_303.f1 = 0; (g_303.f1 == 50); g_303.f1 = safe_add_func_int64_t_s_s(g_303.f1, 5))
                {
                    return l_695;
                }
            }
            else
            {
                int *l_722 = &g_72;
                const char *l_733 = &g_498;
                const char **l_732 = &l_733;
                const char ***l_731 = &l_732;
                const char ****l_730 = &l_731;
                const char *****l_734 = &l_730;
                if (l_698)
                {
                    (*g_586) = (l_599 = ((*g_42) = 1L));
                }
                else
                {
                    short *l_706 = &g_469;
                    int l_714 = 0xACD1B99FL;
                    (*g_586) = (safe_lshift_func_int16_t_s_s(g_705, 4));
                    if (((l_706 == ((*g_635) = l_707)) < ((l_716 = (safe_mul_func_int8_t_s_s((((*l_621) = (safe_sub_func_int16_t_s_s(l_698, ((8L <= (((*l_683) , (**g_41)) > p_8)) >= (((l_715 = ((((((safe_mul_func_uint16_t_u_u((p_11 , l_714), (-7L))) ^ l_714) >= p_8) , (void*)0) != (void*)0) , l_695)) & p_8) , 5UL))))) != l_714), (*g_321)))) != l_717)))
                    {
                        const int *l_718 = &l_599;
                        const int **l_719 = &l_718;
                        (*l_719) = l_718;
                    }
                    else
                    {
                        l_722 = ((safe_lshift_func_int16_t_s_u(0L, 12)) , (*p_9));

                        ;
                        l_723 = (g_342.f5 , &l_715);

                        ;
                        (*p_9) = (*p_9);
                    }

                    ;
                    ;
                    ;
                    (*p_9) = &l_716;


                    l_714 = (**p_9);
                }


                ;
                ;
                ;
                (**g_41) = (((g_569.f3 , func_17(((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_728 != ((*l_734) = (((*l_707) = (g_493 != (void*)0)) , l_730))), l_715)), 12)) == (safe_mod_func_uint8_t_u_u(((*l_630) = p_8), (p_8 & p_11)))), l_737, g_317.f6, (**g_457))) && p_11) > (**g_647));
            }


            ;
            ;
            l_715 = (((!((*g_42) = (((*l_739) = &g_91) == (l_740 = (void*)0)))) != (0x647AL ^ (*g_636))) == ((**l_601) = (*g_636)));

            ;
            (**g_41) = (g_303.f3 , 0L);
            for (g_89 = (-1); (g_89 >= 5); ++g_89)
            {
                int *l_743 = &g_317.f6;
                (*l_737) = l_743;

                ;
            }


        }
        else
        {
            (*p_9) = (*p_9);
        }


        ;

        ;
        for (g_303.f7 = 0; (g_303.f7 == 8); g_303.f7 = safe_add_func_uint8_t_u_u(g_303.f7, 4))
        {
            unsigned short l_762 = 0x7066L;
            unsigned char *l_776 = &g_476.f7;
            for (g_72 = 0; (g_72 <= (-19)); g_72--)
            {
                unsigned long long l_750 = 18446744073709551615UL;
                int * const ***l_758 = (void*)0;
                int * const ***l_759 = &l_757;
                (*g_586) = (safe_rshift_func_uint16_t_u_u(((*l_589) = (((*g_636) >= (&g_458 == (void*)0)) ^ ((func_17(p_8, (l_750 , l_752), g_753, (**g_457)) , l_754) == g_756))), 7));
                (*g_586) = ((((*l_759) = l_757) == ((safe_lshift_func_uint16_t_u_s((**g_457), ((l_762 | (((g_543.f1 ^ (((safe_mul_func_int8_t_s_s(((l_762 != ((*l_630) = p_11)) , ((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(p_8, p_11)), p_11)) && g_534.f7)), g_185)) , l_762) | p_8)) <= p_11) < p_11)) , 0L))) , (void*)0)) , l_762);
                (*g_586) = (((*l_630) = ((((void*)0 == l_769) >= (*g_458)) >= 0x69L)) , l_762);
            }
            (*g_586) = ((**g_41) = (p_8 == ((*l_776) = (func_17((func_17(((((*l_620) = ((*l_621) = 0x0F0DD006L)) , (*l_683)) , p_11), l_594, l_762, p_11) | p_8), l_594, g_275.f1, p_8) | 0x63L))));
            (*g_586) = ((**g_41) = (safe_sub_func_uint8_t_u_u(251UL, 255UL)));
        }
        if ((p_11 && (((safe_mul_func_uint16_t_u_u(65531UL, (((1L | p_8) > (&g_342 == l_683)) <= 0xB715977F21C8E332LL))) ^ (safe_add_func_uint16_t_u_u(((1UL | (p_8 , p_11)) != (-2L)), p_8))) > g_569.f4)))
        {
            short l_787 = 8L;
            return l_787;
        }
        else
        {
            int *l_788 = &g_543.f6;
            short l_791 = 1L;
            (*l_751) = l_788;

            ;
            for (g_225.f7 = 0; (g_225.f7 <= 50); ++g_225.f7)
            {
                (*g_586) = ((*g_493) & (*g_493));
                for (g_225.f5 = 0; (g_225.f5 < 18); g_225.f5 = safe_add_func_int8_t_s_s(g_225.f5, 7))
                {
                    struct S0 *l_794 = (void*)0;
                    struct S0 **l_795 = &l_683;
                    (*l_795) = l_794;

                    ;
                }
                for (g_476.f8 = 0; (g_476.f8 < 11); g_476.f8 = safe_add_func_uint16_t_u_u(g_476.f8, 2))
                {
                    int **l_798 = &l_788;
                    (*l_798) = (*g_41);

                    ;
                    for (g_476.f1 = 0; (g_476.f1 != 53); g_476.f1 = safe_add_func_int16_t_s_s(g_476.f1, 8))
                    {
                        unsigned l_801 = 0x98E9EB4BL;
                        int l_803 = 0x7418DCADL;
                        const int **l_804 = &g_2;
                        (*l_751) = l_788;

                        ;
                        (*g_780) = l_788;

                        ;
                        (*g_42) = func_17((((g_89 || ((((*l_788) > (l_801 > ((void*)0 == &p_9))) >= ((*l_788) , ((*g_321) = (((*g_636) = (l_803 = ((((*g_81) = func_26(func_26(p_9, (*g_586), g_225.f8, p_9, p_11), (**l_798), (*l_788), l_802, (*g_42))) == (void*)0) > 0x1D7FL))) , (*l_788))))) < (*l_788))) , (void*)0) != (void*)0), l_804, (**l_802), p_8);
                    }
                    for (g_317.f7 = (-2); (g_317.f7 > 34); g_317.f7 = safe_add_func_int64_t_s_s(g_317.f7, 5))
                    {
                        const unsigned l_813 = 4294967288UL;
                        (*g_42) = (*g_586);
                        (*g_83) = (0x2BF20D7CDD510BCALL >= ((safe_mod_func_uint16_t_u_u((p_11 , 0x85D7L), (safe_add_func_int32_t_s_s((*g_586), (p_11 > (safe_add_func_uint16_t_u_u((l_813 | (safe_mod_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((**g_647), (safe_mul_func_uint8_t_u_u(g_275.f0, p_8)))), 0x23CB1964CA4603EALL)) == (**l_751)) & 65530UL), (**l_798)))), l_822))))))) , p_11));
                    }
                }
            }


            ;
            ;
            ;
        }


        ;
        ;
        return (**l_802);
    }


    ;
    return (**g_41);


}







static unsigned short func_17(unsigned char p_18, const int ** p_19, long long p_20, unsigned short p_21)
{
    int * const *l_572 = &g_42;
    char ***l_577 = &g_320;
    short *l_578 = &g_438;
    unsigned char *l_579 = &g_534.f7;
    struct S0 *l_580 = &g_534;
    struct S0 **l_581 = (void*)0;
    struct S0 **l_582 = &l_580;
    (**l_572) = (g_303.f5 < (((safe_lshift_func_uint8_t_u_s(((*l_579) = (safe_mod_func_int32_t_s_s((!(*g_42)), (**l_572)))), 0)) , g_569.f2) && p_18));
    (*l_582) = l_580;
    return (**l_572);
}







static const int ** func_22(int ** p_23, int ** p_24, const int * p_25)
{
    int l_385 = 0x5A8098C1L;
    unsigned long long *l_388 = &g_317.f3;
    int *l_389 = &g_275.f6;
    unsigned short l_390 = 7UL;
    unsigned short l_477 = 0x48ADL;
    long long l_510 = 0x47A8FE545578F8AFLL;
    const int **l_511 = &g_2;
    int l_524 = 0x903D8DC3L;
    int l_525 = 4L;
    const char *l_555 = &g_498;
    unsigned short *l_556 = &g_69;
    unsigned short *l_558 = &l_390;
    unsigned short **l_557 = &l_558;
    unsigned short *l_559 = &l_390;
    unsigned short **l_560 = &l_559;
    unsigned short l_563 = 0xEDC4L;
    int l_564 = 0x4F223E11L;
    (*l_389) = l_385;
    if (l_390)
    {
        int **l_391 = &l_389;
        unsigned short *l_416 = &g_69;
        unsigned short **l_415 = &l_416;
        unsigned short ***l_414 = &l_415;
        const int l_427 = (-5L);
        long long l_487 = 0x8A78B280C1A3A9A0LL;
        unsigned char *l_496 = &g_225.f7;
        int l_512 = 0x342A593AL;
        (*l_391) = (void*)0;

        ;
        (*l_391) = &l_385;

        ;
        for (g_303.f1 = 0; (g_303.f1 > 5); g_303.f1 = safe_add_func_uint16_t_u_u(g_303.f1, 2))
        {
            int *l_395 = (void*)0;
            int l_492 = 0xDEE32DBBL;
        }
        (*l_511) = ((*l_391) = (*l_391));

        ;
    }
    else
    {
        const unsigned char l_513 = 0x48L;
        long long *l_522 = (void*)0;
        long long *l_523 = &g_303.f5;
        int ***l_526 = &g_82;
        unsigned short *l_550 = (void*)0;
        (*l_389) = l_513;
        if ((((&g_185 != ((*l_389) , &g_115)) || (((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((*g_493) ^ ((*l_523) = l_513)), l_524)), 8)) && l_525) >= l_513)) == (*l_389)))
        {
            (*l_389) = 0xF54A9CB9L;
        }
        else
        {
            int * const *l_527 = &g_42;
            short *l_536 = (void*)0;
            short ** const l_535 = &l_536;
            short ***l_537 = (void*)0;
            short ***l_538 = (void*)0;
            short **l_540 = &l_536;
            short ***l_539 = &l_540;
            (*l_511) = (void*)0;

            ;
            (*l_539) = (g_534 , l_535);
        }

        ;
        (*l_511) = (void*)0;

        ;
        l_385 = ((((((0x9B80BDA1L || (1UL < (*g_42))) >= (safe_lshift_func_uint16_t_u_s(((l_513 , g_543) , (((safe_mod_func_uint32_t_u_u(l_513, (((safe_lshift_func_uint16_t_u_s(((*l_389) = (safe_rshift_func_int8_t_s_s((*l_389), 7))), l_513)) == l_513) & 0xA39980F8B899928ALL))) | (*g_42)) , (*g_458))), g_303.f1))) , (**p_24)) <= 0x07CC6351L) , 0xF8B43348L) || (*g_42));
    }

    ;
    ;
    l_564 = (((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((void*)0 == l_555), ((*g_321) = (*g_321)))) >= ((**p_24) <= ((*l_389) = ((((*l_557) = (l_556 = &l_390)) == ((*l_560) = (g_476.f7 , l_559))) | (safe_lshift_func_uint16_t_u_s(l_563, 0)))))), 8)) >= l_477) , 0x8F226BB6L);

    ;
    (*l_389) = (*p_25);
    return &g_2;



}







static int ** func_26(int ** p_27, int p_28, int p_29, int ** p_30, int p_31)
{
    int l_382 = 0x0DB6682CL;
    int l_383 = 0xF4237CFCL;
    l_383 = (l_382 = 1L);
    return (*g_81);


}







static int ** func_32(unsigned short p_33)
{
    const int ***l_35 = (void*)0;
    const int **l_37 = &g_2;
    const int ***l_36 = &l_37;
    struct S0 *l_354 = &g_303;
    struct S0 **l_353 = &l_354;
    int l_363 = 0L;
    unsigned * const l_366 = &g_317.f8;
    int * const **l_378 = (void*)0;
    int *l_381 = &g_303.f6;
    (*l_36) = &g_2;
    if (func_38(g_41, g_15))
    {
        struct S0 *l_339 = &g_317;
        const int l_348 = 0L;
        int l_349 = (-1L);
        unsigned *l_365 = &g_275.f8;
        for (g_303.f3 = (-22); (g_303.f3 == 8); g_303.f3 = safe_add_func_uint16_t_u_u(g_303.f3, 7))
        {
            struct S0 **l_340 = (void*)0;
            int **l_341 = &g_83;
            unsigned *l_347 = &g_317.f8;
            int **l_352 = &g_83;
            struct S0 ***l_355 = &l_340;
            unsigned long long *l_364 = &g_275.f3;
            l_339 = l_339;
            (*l_352) = ((l_341 == ((*g_81) = (*g_81))) , (*g_41));

            ;
            l_349 = (((*l_347) = (((*l_365) = (((p_33 , 0xB2L) == ((((*l_355) = l_353) != &l_339) || (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u((g_303.f3 , (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((l_363 = ((***l_36) >= p_33)), (**l_341))), 5))), 6)) , ((((*l_364) = 18446744073709551608UL) , l_365) != l_366)))))) < p_33)) | p_33)) || 0x1D1789B0L);

            ;
        }

        ;
    }
    else
    {
        struct S0 *l_369 = &g_225;
        int l_372 = 1L;
        l_363 = ((safe_sub_func_int16_t_s_s(((((*l_353) = &g_225) != (((***l_36) < ((**l_37) , 0xA421AB37L)) , l_369)) <= ((safe_sub_func_int32_t_s_s((l_372 , p_33), p_33)) < (safe_unary_minus_func_uint64_t_u(0x093820914669F01BLL)))), g_303.f3)) == (***l_36));

        ;
    }

    ;
    ;
    ;

    ;
    (*l_381) = (l_363 = (~(safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((p_33 , (((**l_37) , (safe_mod_func_int32_t_s_s(p_33, (**l_37)))) | g_225.f6)), 1UL)) && 0L), g_303.f0))));
    return (*g_81);


}







static int func_38(int * const * p_39, long long p_40)
{
    int *l_49 = (void*)0;
    int l_50 = 0x5C380A38L;
    int *l_51 = &g_15;
    int **l_67 = &l_51;
    int ***l_66 = &l_67;
    unsigned short *l_68 = &g_69;
    const int **l_315 = &g_2;
    int l_334 = 0L;
    unsigned char l_335 = 0xB2L;
    int *l_336 = &g_72;
    (*g_81) = func_43((safe_add_func_int64_t_s_s(((l_50 = 0x5A9390DFL) & ((void*)0 != l_51)), (((((*g_81) = (func_52(func_58(l_49, (g_3 , 0UL), ((safe_sub_func_int16_t_s_s(((void*)0 != l_66), ((*l_68) = ((***l_66) ^ g_15)))) , 18446744073709551615UL), (**p_39), p_40), (**l_67), l_315, (*l_51), g_225.f8) , (void*)0)) == p_39) && g_275.f2) , g_303.f6))));

    ;
    ;

    (*l_315) = (**l_66);

    ;
    (*l_336) = (safe_sub_func_int32_t_s_s((l_335 = ((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((**g_41) <= (g_275.f4 ^ 0x17ABD9C13957185DLL)), (safe_sub_func_int64_t_s_s(g_275.f1, (0x4175DB8E4D1A8006LL != (((*g_321) >= (safe_lshift_func_uint16_t_u_u(p_40, (((**p_39) , (safe_lshift_func_int16_t_s_s((p_40 | 5UL), 8))) & 0x1DB58507L)))) , g_317.f3)))))) , l_334), g_317.f5)) != (-1L))), p_40));
    (*l_315) = ((*l_67) = (**l_66));
    return (*g_2);
}







static int ** func_43(int p_44)
{
    char *l_319 = &g_203;
    char **l_318 = &l_319;
    g_320 = l_318;

    ;
    return (*g_81);



}







static struct S0 func_52(int *** p_53, unsigned short p_54, const int ** p_55, int p_56, char p_57)
{
    int *l_316 = (void*)0;
    (**g_81) = l_316;

    ;
    return g_317;
}







static int *** func_58(int * p_59, unsigned p_60, unsigned p_61, int p_62, const short p_63)
{
    int l_70 = 0x66DA9A16L;
    int *l_71 = &g_72;
    int **l_80 = &l_71;
    int ***l_79 = &l_80;
    unsigned char l_201 = 0x2BL;
    unsigned char l_207 = 5UL;
    long long l_228 = 9L;
    int l_286 = 5L;
    return &g_82;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186.f0, "g_186.f0", print_hash_value);
    transparent_crc(g_186.f1, "g_186.f1", print_hash_value);
    transparent_crc(g_186.f2, "g_186.f2", print_hash_value);
    transparent_crc(g_186.f3, "g_186.f3", print_hash_value);
    transparent_crc(g_186.f4, "g_186.f4", print_hash_value);
    transparent_crc(g_186.f5, "g_186.f5", print_hash_value);
    transparent_crc(g_186.f6, "g_186.f6", print_hash_value);
    transparent_crc(g_186.f7, "g_186.f7", print_hash_value);
    transparent_crc(g_186.f8, "g_186.f8", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_225.f3, "g_225.f3", print_hash_value);
    transparent_crc(g_225.f4, "g_225.f4", print_hash_value);
    transparent_crc(g_225.f5, "g_225.f5", print_hash_value);
    transparent_crc(g_225.f6, "g_225.f6", print_hash_value);
    transparent_crc(g_225.f7, "g_225.f7", print_hash_value);
    transparent_crc(g_225.f8, "g_225.f8", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_275.f2, "g_275.f2", print_hash_value);
    transparent_crc(g_275.f3, "g_275.f3", print_hash_value);
    transparent_crc(g_275.f4, "g_275.f4", print_hash_value);
    transparent_crc(g_275.f5, "g_275.f5", print_hash_value);
    transparent_crc(g_275.f6, "g_275.f6", print_hash_value);
    transparent_crc(g_275.f7, "g_275.f7", print_hash_value);
    transparent_crc(g_275.f8, "g_275.f8", print_hash_value);
    transparent_crc(g_303.f0, "g_303.f0", print_hash_value);
    transparent_crc(g_303.f1, "g_303.f1", print_hash_value);
    transparent_crc(g_303.f2, "g_303.f2", print_hash_value);
    transparent_crc(g_303.f3, "g_303.f3", print_hash_value);
    transparent_crc(g_303.f4, "g_303.f4", print_hash_value);
    transparent_crc(g_303.f5, "g_303.f5", print_hash_value);
    transparent_crc(g_303.f6, "g_303.f6", print_hash_value);
    transparent_crc(g_303.f7, "g_303.f7", print_hash_value);
    transparent_crc(g_303.f8, "g_303.f8", print_hash_value);
    transparent_crc(g_317.f0, "g_317.f0", print_hash_value);
    transparent_crc(g_317.f1, "g_317.f1", print_hash_value);
    transparent_crc(g_317.f2, "g_317.f2", print_hash_value);
    transparent_crc(g_317.f3, "g_317.f3", print_hash_value);
    transparent_crc(g_317.f4, "g_317.f4", print_hash_value);
    transparent_crc(g_317.f5, "g_317.f5", print_hash_value);
    transparent_crc(g_317.f6, "g_317.f6", print_hash_value);
    transparent_crc(g_317.f7, "g_317.f7", print_hash_value);
    transparent_crc(g_317.f8, "g_317.f8", print_hash_value);
    transparent_crc(g_342.f0, "g_342.f0", print_hash_value);
    transparent_crc(g_342.f1, "g_342.f1", print_hash_value);
    transparent_crc(g_342.f2, "g_342.f2", print_hash_value);
    transparent_crc(g_342.f3, "g_342.f3", print_hash_value);
    transparent_crc(g_342.f4, "g_342.f4", print_hash_value);
    transparent_crc(g_342.f5, "g_342.f5", print_hash_value);
    transparent_crc(g_342.f6, "g_342.f6", print_hash_value);
    transparent_crc(g_342.f7, "g_342.f7", print_hash_value);
    transparent_crc(g_342.f8, "g_342.f8", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_476.f1, "g_476.f1", print_hash_value);
    transparent_crc(g_476.f2, "g_476.f2", print_hash_value);
    transparent_crc(g_476.f3, "g_476.f3", print_hash_value);
    transparent_crc(g_476.f4, "g_476.f4", print_hash_value);
    transparent_crc(g_476.f5, "g_476.f5", print_hash_value);
    transparent_crc(g_476.f6, "g_476.f6", print_hash_value);
    transparent_crc(g_476.f7, "g_476.f7", print_hash_value);
    transparent_crc(g_476.f8, "g_476.f8", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_534.f1, "g_534.f1", print_hash_value);
    transparent_crc(g_534.f2, "g_534.f2", print_hash_value);
    transparent_crc(g_534.f3, "g_534.f3", print_hash_value);
    transparent_crc(g_534.f4, "g_534.f4", print_hash_value);
    transparent_crc(g_534.f5, "g_534.f5", print_hash_value);
    transparent_crc(g_534.f6, "g_534.f6", print_hash_value);
    transparent_crc(g_534.f7, "g_534.f7", print_hash_value);
    transparent_crc(g_534.f8, "g_534.f8", print_hash_value);
    transparent_crc(g_543.f0, "g_543.f0", print_hash_value);
    transparent_crc(g_543.f1, "g_543.f1", print_hash_value);
    transparent_crc(g_543.f2, "g_543.f2", print_hash_value);
    transparent_crc(g_543.f3, "g_543.f3", print_hash_value);
    transparent_crc(g_543.f4, "g_543.f4", print_hash_value);
    transparent_crc(g_543.f5, "g_543.f5", print_hash_value);
    transparent_crc(g_543.f6, "g_543.f6", print_hash_value);
    transparent_crc(g_543.f7, "g_543.f7", print_hash_value);
    transparent_crc(g_543.f8, "g_543.f8", print_hash_value);
    transparent_crc(g_569.f0, "g_569.f0", print_hash_value);
    transparent_crc(g_569.f1, "g_569.f1", print_hash_value);
    transparent_crc(g_569.f2, "g_569.f2", print_hash_value);
    transparent_crc(g_569.f3, "g_569.f3", print_hash_value);
    transparent_crc(g_569.f4, "g_569.f4", print_hash_value);
    transparent_crc(g_569.f5, "g_569.f5", print_hash_value);
    transparent_crc(g_569.f6, "g_569.f6", print_hash_value);
    transparent_crc(g_569.f7, "g_569.f7", print_hash_value);
    transparent_crc(g_569.f8, "g_569.f8", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_773.f0, "g_773.f0", print_hash_value);
    transparent_crc(g_773.f1, "g_773.f1", print_hash_value);
    transparent_crc(g_773.f2, "g_773.f2", print_hash_value);
    transparent_crc(g_773.f3, "g_773.f3", print_hash_value);
    transparent_crc(g_773.f4, "g_773.f4", print_hash_value);
    transparent_crc(g_773.f5, "g_773.f5", print_hash_value);
    transparent_crc(g_773.f6, "g_773.f6", print_hash_value);
    transparent_crc(g_773.f7, "g_773.f7", print_hash_value);
    transparent_crc(g_773.f8, "g_773.f8", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
