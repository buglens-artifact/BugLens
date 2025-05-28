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
   char f0;
   short f1;
   const char f2;
   unsigned long long f3;
   int f4;
};


static int g_25[5] = {9L, 7L, 9L, 7L, 9L};
static int *g_24 = &g_25[2];
static struct S0 g_52 = {0x3FL,0L,0x80L,18446744073709551608UL,0xBE18A167L};
static unsigned g_73[7] = {0x0D2634D7L, 0x0D2634D7L, 0x0D2634D7L, 0x0D2634D7L, 0x0D2634D7L, 0x0D2634D7L, 0x0D2634D7L};
static unsigned long long g_75[10] = {0UL, 0x1D020A50D0CE47CELL, 0UL, 0x1D020A50D0CE47CELL, 0UL, 0x1D020A50D0CE47CELL, 0UL, 0x1D020A50D0CE47CELL, 0UL, 0x1D020A50D0CE47CELL};
static unsigned short g_82 = 0x1655L;
static long long g_90[1] = {(-4L)};
static char g_105 = (-9L);
static int *g_111[3] = {&g_25[3], &g_25[3], &g_25[3]};
static unsigned g_124 = 4294967293UL;
static const unsigned short *g_127 = &g_82;
static const unsigned short **g_126[3][3] = {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}};
static unsigned char g_146 = 0xF7L;
static unsigned ***g_168 = (void*)0;
static unsigned short *g_191[3] = {&g_82, &g_82, &g_82};
static unsigned short **g_190 = &g_191[1];
static unsigned long long *g_215 = &g_75[3];
static unsigned long long **g_214 = &g_215;
static int g_223 = 0L;
static int *g_222[8] = {&g_223, &g_223, (void*)0, &g_223, &g_223, (void*)0, &g_223, &g_223};
static struct S0 *g_250 = &g_52;
static struct S0 **g_249 = &g_250;
static int *g_396 = &g_223;
static unsigned char g_402[5] = {0xC8L, 0xD9L, 0xC8L, 0xD9L, 0xC8L};
static unsigned char *g_458 = (void*)0;
static unsigned char **g_457 = &g_458;
static unsigned short g_467 = 0x0288L;
static const unsigned char *g_488[9] = {&g_146, &g_146, &g_146, &g_146, &g_146, &g_146, &g_146, &g_146, &g_146};
static const unsigned char **g_487[1][2][6] = {{{(void*)0, &g_488[3], (void*)0, &g_488[3], (void*)0, &g_488[3]}, {(void*)0, &g_488[3], (void*)0, &g_488[3], (void*)0, &g_488[3]}}};
static short *g_532 = &g_52.f1;
static short **g_531 = &g_532;
static int g_555 = 0xEFB4FE91L;
static short g_614 = 0x33CBL;
static char g_660 = (-6L);
static long long g_702 = 0xED84AFFEE3ACA8D9LL;
static unsigned short **g_710 = &g_191[1];
static unsigned short **g_711[2] = {&g_191[1], &g_191[1]};
static struct S0 g_747 = {-1L,0x6DC3L,-1L,7UL,1L};
static struct S0 g_749 = {2L,-7L,0x97L,0x85EA1BBE75F0072FLL,0xA2F94751L};
static struct S0 g_780[5] = {{4L,0xA956L,0xC9L,0xA3BC4645EA68C64BLL,0L}, {4L,0xA956L,0xC9L,0xA3BC4645EA68C64BLL,0L}, {4L,0xA956L,0xC9L,0xA3BC4645EA68C64BLL,0L}, {4L,0xA956L,0xC9L,0xA3BC4645EA68C64BLL,0L}, {4L,0xA956L,0xC9L,0xA3BC4645EA68C64BLL,0L}};
static long long *g_804[10][10][2] = {{{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}, {{&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}, {&g_90[0], &g_90[0]}}};
static long long **g_803[10][2][1] = {{{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}, {{&g_804[8][0][0]}, {&g_804[8][0][0]}}};
static long long ***g_802 = &g_803[8][1][0];
static unsigned g_876 = 0xAD444844L;
static struct S0 ***g_885 = &g_249;
static unsigned short g_896 = 65535UL;
static unsigned g_966 = 0xA669532BL;
static const struct S0 **g_974[3] = {(void*)0, (void*)0, (void*)0};
static unsigned *g_981 = (void*)0;
static unsigned **g_980 = &g_981;
static char *g_985 = &g_747.f0;
static char **g_984 = &g_985;



static long long func_1(void);
static long long func_9(long long p_10);
static int * func_11(unsigned long long p_12, int * p_13);
static unsigned long long func_14(struct S0 p_15, int * p_16, int * p_17, unsigned short p_18);
static int * func_20(int * p_21, int * p_22, int * p_23);
static int * func_26(int * p_27, int p_28, struct S0 p_29, int p_30, short p_31);
static char func_39(int * p_40, long long p_41, struct S0 p_42, char p_43);
static unsigned char func_46(unsigned short p_47, struct S0 p_48, struct S0 p_49, unsigned long long p_50);
static int * func_55(int p_56, unsigned p_57, int * p_58);
static unsigned char func_65(char p_66);
static long long func_1(void)
{
    unsigned l_4 = 4294967295UL;
    const unsigned short ***l_920 = &g_126[0][0];
    int l_921 = 0x5FCA2E08L;
    unsigned char *l_922 = &g_402[1];
    unsigned char *l_923 = &g_146;
    const short *l_953[7][9] = {{&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}, {&g_52.f1, &g_780[2].f1, &g_747.f1, &g_614, &g_747.f1, &g_780[2].f1, &g_52.f1, &g_614, (void*)0}};
    const short **l_952[6] = {&l_953[2][6], &l_953[2][6], &l_953[2][6], &l_953[2][6], &l_953[2][6], &l_953[2][6]};
    short l_968 = (-8L);
    int *l_973 = &g_25[3];
    unsigned long long **l_1001 = &g_215;
    struct S0 l_1016 = {1L,0x0FE9L,0L,3UL,-9L};
    char **l_1020 = &g_985;
    const int l_1028 = 0xBA25710CL;
    int i, j;
    if ((safe_add_func_uint8_t_u_u(l_4, (safe_rshift_func_uint8_t_u_u(l_4, ((*l_923) = ((*l_922) = (safe_div_func_int64_t_s_s(func_9(l_4), (l_921 ^= (&g_126[0][0] == l_920)))))))))))
    {
        int l_933 = 7L;
        int l_939 = (-9L);
        for (g_223 = 8; (g_223 >= 3); g_223 -= 1)
        {
            unsigned long long l_938[2][9] = {{8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL}, {8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL, 8UL}};
            int i, j;
            for (g_52.f1 = 3; (g_52.f1 >= 0); g_52.f1 -= 1)
            {
                int l_927[9];
                unsigned char l_936 = 0x6AL;
                int *l_942 = &g_25[2];
                char *l_944 = &g_780[2].f0;
                unsigned *l_945 = &g_876;
                int **l_948 = &l_942;
                int i;
                for (i = 0; i < 9; i++)
                    l_927[i] = 1L;
                if (g_75[g_223])
                {
                    long long *l_926[3][6][2] = {{{(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}}, {{(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}}, {{(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}, {(void*)0, &g_702}}};
                    unsigned *l_928 = &g_876;
                    short *l_931 = (void*)0;
                    short *l_932 = (void*)0;
                    int *l_937[7][10][3] = {{{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}, {{&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}, {&g_25[2], &g_25[2], &g_555}}};
                    unsigned long long *l_940 = &g_749.f3;
                    int **l_941 = &g_111[1];
                    int i, j, k;
                    (*l_941) = &g_25[2];
                }
                else
                {
                    int **l_943 = &g_111[1];
                    (*l_943) = (l_942 = &g_223);
                }
                if (((((l_921 = func_65(((*l_944) = ((*g_396) > 1UL)))) & (0x89FD2C9AL | (*l_942))) < (*l_942)) <= ((*l_945) = ((((*g_396) < ((*l_942) == (((l_938[1][4] < l_933) && l_933) ^ 0x941FB188L))) | l_939) || (-1L)))))
                {
                    for (g_749.f1 = 0; (g_749.f1 <= 9); g_749.f1 += 1)
                    {
                        unsigned char ***l_946 = (void*)0;
                        l_927[6] = (l_946 == (void*)0);
                    }
                    if ((*l_942))
                        break;
                }
                else
                {
                    for (g_876 = 0; (g_876 <= 4); g_876 += 1)
                    {
                        int **l_947 = &g_111[1];
                        (*l_947) = &g_555;
                    }
                }
                (*l_948) = &g_555;
            }
        }
    }
    else
    {
        int l_950 = (-1L);
        long long *l_960 = &g_90[0];
        struct S0 l_991 = {9L,0x06AEL,0xBEL,0x4F8E25653940E76ELL,0xAF2BDC45L};
        short l_1017 = 0x9415L;
        for (g_747.f4 = 8; (g_747.f4 >= 0); g_747.f4 -= 1)
        {
            int l_949 = (-6L);
            long long *l_962 = &g_702;
            struct S0 l_967 = {0x37L,8L,8L,0x8A209CB9B59EDE26LL,6L};
            unsigned long long * const *l_1002 = &g_215;
            unsigned l_1011 = 0xF7AC190CL;
            unsigned long long l_1019 = 0UL;
            int i;
            if (((l_949 = g_75[g_747.f4]) != l_950))
            {
                int **l_951 = &g_24;
                (*l_951) = &g_555;
                (**l_951) = (-3L);
            }
            else
            {
                unsigned long long l_971[7][1] = {{0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}, {0x92D4ED3EEB1D90D8LL}};
                int *l_994 = &l_949;
                struct S0 l_1005 = {4L,0x4E89L,1L,0xCC0BEB5F9AB7A0A2LL,0L};
                int i, j;
                for (g_555 = 0; (g_555 <= 4); g_555 += 1)
                {
                    long long **l_961 = &l_960;
                    long long **l_963 = &g_804[8][0][0];
                    int *l_970 = &g_555;
                    short l_972 = 0x4999L;
                    unsigned short *l_997 = &g_467;
                    int **l_998 = &l_994;
                    struct S0 l_1018 = {0xB8L,-4L,-10L,0x1487A6BC3B12E835LL,0xCDC016F8L};
                    int i;
                    if ((((&g_532 == l_952[5]) ^ (safe_sub_func_uint16_t_u_u(g_402[g_555], (safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((*l_962) = ((0x514B929DCC83B33FLL && (((*l_961) = l_960) == ((*l_963) = l_962))) < (safe_add_func_uint16_t_u_u((g_402[g_555] >= g_966), l_950)))), 0xEC5BE56D961766CCLL)), g_780[2].f2))))) < l_4))
                    {
                        int **l_969[10][2];
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_969[i][j] = &g_111[0];
                        }
                        g_222[7] = &g_223;
                        l_973 = func_26(l_970, l_971[2][0], g_52, g_660, func_65(l_972));
                    }
                    else
                    {
                        const struct S0 ***l_975 = &g_974[1];
                        const struct S0 **l_977 = (void*)0;
                        const struct S0 ***l_976 = &l_977;
                        int l_982 = 0x8A9F6D91L;
                        unsigned *l_983 = &g_876;
                        char ***l_986 = &g_984;
                        int i;
                        g_25[g_555] &= (((*g_532) & (*g_532)) && 9UL);
                        (*l_973) = ((*g_885) == ((*l_976) = ((*l_975) = g_974[1])));
                        (*l_973) = (safe_lshift_func_uint16_t_u_u((*l_973), (((*l_983) = (l_982 &= ((void*)0 != g_980))) & ((**g_531) && g_25[g_555]))));
                        (*l_986) = g_984;
                    }
                    g_222[7] = (void*)0;
                    (*l_998) = &g_555;
                    for (l_4 = 0; (l_4 <= 4); l_4 += 1)
                    {
                        unsigned l_1006 = 0x7900CE85L;
                        (*g_396) ^= ((*l_973) = ((safe_lshift_func_int16_t_s_u(0xACEAL, (l_1001 == l_1002))) <= ((safe_mod_func_uint8_t_u_u(((!((void*)0 != &g_487[0][0][4])) || (l_967.f0 && (*l_994))), l_1006)) < (*l_973))));
                        (*l_998) = func_26(l_994, (l_1006 != 65535UL), l_1005, (safe_rshift_func_uint16_t_u_s((~((safe_add_func_int64_t_s_s(l_1011, (*l_973))) >= l_1006)), (**g_531))), (**g_531));
                        return l_1006;
                    }
                }
                return (*l_973);
            }
            if (l_991.f2)
                continue;
            l_949 = ((l_1019 || (l_1020 != &g_985)) > ((**g_531) = (((**g_531) && (g_75[g_747.f4] | l_991.f3)) == func_65(l_967.f4))));
        }
    }
    for (g_467 = 0; (g_467 != 6); g_467++)
    {
        unsigned **l_1023 = &g_981;
        int l_1042[4];
        int l_1043 = 0xD0103578L;
        int i;
        for (i = 0; i < 4; i++)
            l_1042[i] = (-3L);
        for (g_52.f1 = 1; (g_52.f1 <= 8); g_52.f1 += 1)
        {
            long long l_1037[7][5] = {{0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L}};
            int i, j;
            l_1023 = &g_981;
            l_1042[3] = (safe_rshift_func_int8_t_s_u((0x4650L > (safe_rshift_func_uint16_t_u_u(l_1028, (18446744073709551607UL | (l_1043 ^= (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*l_973) || 4294967295UL), (safe_add_func_uint16_t_u_u(func_65((*l_973)), (safe_mod_func_int8_t_s_s(l_1037[4][4], ((safe_rshift_func_uint16_t_u_u(func_65(func_65(((safe_sub_func_uint8_t_u_u(((*l_973) <= (*g_985)), 0x2EL)) != l_1037[1][0]))), 11)) || (**g_710)))))))), l_1042[0]))))))), l_1042[3]));
            (*g_396) = (1UL && (*l_973));
        }
    }
    return (*l_973);
}







static long long func_9(long long p_10)
{
    struct S0 l_19 = {0x7BL,0xF609L,-7L,6UL,0L};
    int *l_32 = (void*)0;
    long long l_51 = 0L;
    struct S0 l_202 = {-1L,-1L,-1L,0UL,-1L};
    struct S0 l_209 = {0x80L,0xEC76L,0xE1L,4UL,9L};
    long long l_210 = 0xD337FFAD2E559AB9LL;
    int **l_712 = &g_111[0];
    int l_727 = 0x75270B71L;
    unsigned long long *l_831 = &l_209.f3;
    long long * const *l_846 = &g_804[8][0][0];
    unsigned ****l_866 = &g_168;
    unsigned *****l_865 = &l_866;
    long long ***l_902[2][1][7] = {{{&g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0]}}, {{&g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0], &g_803[8][1][0], &g_803[3][1][0]}}};
    long long ***l_904 = &g_803[6][0][0];
    int i, j, k;
    (*l_712) = func_11(func_14(l_19, func_20(g_24, func_26(l_32, ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((l_19.f1 < (safe_mod_func_int8_t_s_s(func_39(l_32, (safe_lshift_func_uint16_t_u_u((func_46(l_51, l_19, g_52, (((safe_lshift_func_int8_t_s_s((l_32 != &g_25[2]), g_52.f0)) && p_10) && 1UL)) | 0x5BL), 10)), l_202, p_10), g_52.f4))), 14)) == p_10), p_10)) <= p_10), l_209, p_10, l_210), g_24), g_222[7], l_210), g_396);
    for (l_202.f3 = 0; (l_202.f3 < 52); ++l_202.f3)
    {
        unsigned ****l_717 = (void*)0;
        unsigned ****l_718 = &g_168;
        int *l_721 = &g_25[2];
        struct S0 *l_746 = &g_747;
        long long *l_801 = &l_51;
        long long **l_800 = &l_801;
        long long ***l_799 = &l_800;
        unsigned l_805 = 0x6106CB13L;
        short l_829 = 0L;
        int l_854 = (-1L);
        unsigned char ***l_861 = &g_457;
        long long ****l_903[8][8] = {{&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}, {&l_902[1][0][2], &l_902[0][0][4], &l_799, &l_902[1][0][3], &l_902[1][0][5], &l_902[1][0][5], &l_902[1][0][3], &l_799}};
        unsigned char *l_915 = &g_402[0];
        char *l_918 = &l_202.f0;
        char *l_919[8][7][4] = {{{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}, {{&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}, {&l_19.f0, &g_747.f0, &l_19.f0, (void*)0}}};
        int i, j, k;
        if ((safe_rshift_func_uint16_t_u_u(((((*l_718) = g_168) == (void*)0) != p_10), (0x7CF277F3L == 0xFEBCB11CL))))
        {
            char l_740[7][3] = {{(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}, {(-1L), 4L, 0xC5L}};
            int l_743 = (-1L);
            unsigned char l_760 = 255UL;
            struct S0 l_779[2][6][1] = {{{{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}}, {{{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}, {{0xA2L,-1L,0x5DL,0x9D32C14EEA24B402LL,0x1F17D4FCL}}}};
            int i, j, k;
            for (l_19.f1 = (-28); (l_19.f1 < (-7)); l_19.f1 = safe_add_func_int8_t_s_s(l_19.f1, 1))
            {
                (*g_396) = (p_10 == (*l_721));
                if ((*g_396))
                    continue;
            }
            for (l_19.f0 = 0; (l_19.f0 == (-27)); l_19.f0 = safe_sub_func_uint16_t_u_u(l_19.f0, 9))
            {
                const int l_728 = 4L;
                struct S0 l_744 = {0L,0L,-1L,0xED424631B330F2DBLL,-1L};
                int *l_745 = &g_555;
                short *l_751 = &g_749.f1;
                unsigned short ***l_754 = &g_711[1];
                const int *l_783 = &g_25[2];
                const int **l_782 = &l_783;
                for (g_614 = 7; (g_614 >= 0); g_614 -= 1)
                {
                    int l_735 = 0x4F002A67L;
                    int i;
                    if (g_75[(g_614 + 1)])
                        break;
                    if ((safe_rshift_func_uint8_t_u_u(p_10, (g_402[2] = (*l_721)))))
                    {
                        short l_726 = 0x72A6L;
                        l_727 = ((*g_396) |= ((*l_721) = l_726));
                        (*l_721) = l_728;
                        (*g_396) = (*g_396);
                    }
                    else
                    {
                        (*g_396) ^= p_10;
                    }
                    for (l_210 = 3; (l_210 <= 9); l_210 += 1)
                    {
                        (*g_396) = (safe_lshift_func_uint8_t_u_s(((void*)0 == &g_127), 5));
                        (*g_396) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((l_735 = 0x03L), (0xA5FD384EL == (*l_721)))), (safe_rshift_func_int8_t_s_u((l_728 & (safe_add_func_uint16_t_u_u(p_10, 0L))), 7))));
                        (*l_712) = func_26(func_26(((*l_712) = &l_735), (+(*g_396)), (**g_249), g_75[(g_614 + 1)], l_735), l_740[5][1], l_209, (safe_add_func_uint8_t_u_u((l_743 = 0x40L), g_124)), (*g_532));
                    }
                    (*l_712) = &g_25[4];
                }
                if (l_743)
                {
                    const unsigned short ***l_755[7] = {&g_126[2][2], &g_126[2][2], &g_126[2][1], &g_126[2][2], &g_126[2][2], &g_126[2][1], &g_126[2][2]};
                    const unsigned short ****l_756 = &l_755[1];
                    int i;
                    if ((p_10 <= ((*l_745) = p_10)))
                    {
                        struct S0 *l_748 = &g_749;
                        int **l_750 = &l_32;
                        l_748 = (l_746 = (void*)0);
                        (*l_712) = func_26(((*l_750) = ((*l_712) = (void*)0)), p_10, l_19, g_660, p_10);
                        if (p_10)
                            break;
                    }
                    else
                    {
                        (*l_745) ^= ((*l_721) &= (l_751 != (void*)0));
                    }
                    (*l_745) = (l_743 == ((l_754 = l_754) == ((*l_756) = l_755[1])));
                    (*l_721) = func_65(p_10);
                    if (p_10)
                        continue;
                }
                else
                {
                    unsigned char l_757 = 8UL;
                    int l_776 = (-7L);
                    unsigned char l_781 = 0x63L;
                    if (l_757)
                        break;
                    (*l_721) |= p_10;
                    if (p_10)
                    {
                        const short l_771[3] = {0xA508L, 0xA508L, 0xA508L};
                        unsigned short *l_772 = &g_467;
                        char *l_773 = (void*)0;
                        char *l_774 = (void*)0;
                        char *l_775 = &g_52.f0;
                        int i;
                        (*l_745) ^= ((((safe_lshift_func_uint8_t_u_s((l_760 > g_52.f3), (l_776 = ((*l_775) = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((0x5AD6L && (0x72E0BB6B368BD2CDLL != (*g_215))) < p_10), ((*g_532) = (((void*)0 == &g_215) | ((safe_sub_func_uint16_t_u_u(((*l_772) = ((***l_754) = (((safe_lshift_func_uint8_t_u_u((((void*)0 != g_168) < p_10), 6)) >= l_771[2]) >= 0L))), (*l_721))) != 0x53F1L))))), 3)) | (*l_721)), g_749.f0)))))) != (*l_721)) && (*l_721)) && (*l_721));
                        (*l_712) = (void*)0;
                    }
                    else
                    {
                        unsigned *l_778 = &g_73[1];
                        unsigned **l_777 = &l_778;
                        (*l_712) = func_26(&g_555, ((void*)0 != l_777), l_779[0][4][0], l_781, (**g_531));
                        if ((*l_721))
                            break;
                    }
                }
                if (p_10)
                    continue;
                (*l_782) = &l_728;
            }
        }
        else
        {
            short *l_789 = &g_780[2].f1;
            int l_790 = (-1L);
            int *l_798 = &g_555;
            struct S0 *l_820 = &g_780[2];
            long long *l_830 = &g_702;
            long long ***l_832 = &l_800;
            short l_833 = 0x1528L;
            long long * const l_848 = (void*)0;
            long long * const *l_847 = &l_848;
            struct S0 ***l_882 = &g_249;
            if ((((*g_532) < ((*l_789) |= (((~p_10) & (safe_div_func_int16_t_s_s(0x91A8L, (*g_532)))) < (safe_rshift_func_int8_t_s_u((((-4L) != ((safe_unary_minus_func_int32_t_s(p_10)) > (*l_721))) ^ g_402[0]), p_10))))) & l_790))
            {
                for (g_52.f0 = (-27); (g_52.f0 >= 14); g_52.f0 = safe_add_func_int8_t_s_s(g_52.f0, 1))
                {
                    unsigned l_793 = 0x4F8CC15AL;
                    unsigned char *l_794 = &g_402[4];
                    int *l_797 = &l_790;
                    (*g_396) |= func_65(p_10);
                    l_790 = (0xEDL <= (0xA2L >= ((*l_794) = (p_10 == (func_65(l_793) >= p_10)))));
                    for (g_146 = (-17); (g_146 == 23); g_146 = safe_add_func_uint8_t_u_u(g_146, 1))
                    {
                        (*l_712) = func_20(&g_555, (g_222[7] = ((*l_712) = l_797)), l_798);
                        return p_10;
                    }
                }
                (*g_396) = (l_799 != g_802);
            }
            else
            {
                const unsigned l_808 = 0UL;
                unsigned l_819 = 0x50E12453L;
                if (p_10)
                    break;
                (*l_712) = &l_790;
                for (g_223 = 0; (g_223 < (-21)); g_223 = safe_sub_func_int64_t_s_s(g_223, 6))
                {
                    int l_817 = 0xF18EC1A3L;
                    struct S0 l_818 = {0x10L,-4L,0L,1UL,4L};
                    if (p_10)
                    {
                        (*l_798) = (safe_sub_func_int32_t_s_s(((p_10 >= l_819) ^ 1L), (*g_396)));
                        return p_10;
                    }
                    else
                    {
                        (*g_249) = l_820;
                        return p_10;
                    }
                }
                if ((*l_798))
                    continue;
            }
            (*g_396) = ((*l_721) = p_10);
            for (g_749.f0 = 4; (g_749.f0 >= 0); g_749.f0 -= 1)
            {
                int i;
                (*l_721) |= func_65(g_402[g_749.f0]);
                (*l_712) = &l_790;
                (*l_712) = &g_25[0];
            }
            if (((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((*l_830) &= ((*l_801) = (((*l_798) && ((*l_721) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((0x2C14L >= func_14((**g_249), func_20(l_721, &g_223, l_721), &g_25[2], l_829)), g_780[2].f0)), p_10)))) & 0xF8L))), (*g_215))), (*l_798))) && p_10))
            {
                (*l_721) &= (-2L);
                (*g_249) = &l_19;
            }
            else
            {
                struct S0 *l_836 = &g_780[1];
                int l_841 = 0xF672321CL;
                int *l_853[2][4][6] = {{{(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}}, {{(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}, {(void*)0, &g_25[3], &g_25[3], (void*)0, &l_790, &g_25[1]}}};
                unsigned short **l_862 = &g_191[2];
                unsigned short ***l_890 = &g_711[0];
                unsigned short ****l_889 = &l_890;
                int i, j, k;
                (*l_721) = ((((void*)0 != l_831) & (0x30FE6BE35D1E3FA1LL > (l_832 == (void*)0))) < (p_10 | (l_833 & ((*g_396) = (~((*l_798) &= (safe_lshift_func_int8_t_s_u((l_836 != &l_202), p_10))))))));
                if ((safe_lshift_func_uint16_t_u_u(((3UL >= 0L) < (l_854 &= ((*g_396) = ((safe_lshift_func_uint8_t_u_s(l_841, (*l_721))) == func_65(((((safe_add_func_uint16_t_u_u((0x8CA22B03306DDD6ALL | (safe_mod_func_uint32_t_u_u((((*l_832) = (*g_802)) != (l_847 = l_846)), (safe_add_func_int16_t_s_s(((*g_532) = (safe_rshift_func_uint16_t_u_u(p_10, (*l_721)))), (*l_798)))))), (*l_721))) >= (*l_721)) <= (*l_798)) == g_402[0])))))), 0)))
                {
                    long long l_857 = 0xC726BCCB5AD1E91ELL;
                    for (l_805 = 0; (l_805 == 13); l_805 = safe_add_func_int8_t_s_s(l_805, 9))
                    {
                        unsigned char ***l_860 = &g_457;
                        (*l_721) &= (l_857 || (p_10 < (l_860 == l_861)));
                        g_711[0] = l_862;
                    }
                }
                else
                {
                    unsigned short **l_867 = &g_191[1];
                    char *l_868 = (void*)0;
                    char *l_869 = &g_749.f0;
                    int *l_870 = &g_555;
                    (*l_721) &= (safe_lshift_func_int8_t_s_s(((*l_869) = (((l_865 != (void*)0) >= ((void*)0 != l_867)) > 3L)), 3));
                    if (p_10)
                    {
                        unsigned long long l_875 = 0UL;
                        int *l_877 = &g_25[1];
                        unsigned **l_878 = (void*)0;
                        unsigned **l_879 = (void*)0;
                        unsigned *l_881 = &g_73[3];
                        unsigned **l_880 = &l_881;
                        (*l_712) = (void*)0;
                        (*g_396) = func_65(p_10);
                        (*l_712) = l_870;
                        (*l_798) ^= (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(9UL, (((*l_880) = l_853[1][1][5]) == (void*)0))), p_10));
                    }
                    else
                    {
                        struct S0 ****l_883 = (void*)0;
                        struct S0 ****l_884 = &l_882;
                        int l_888 = (-1L);
                        char *l_891 = &l_202.f0;
                        (*l_712) = (void*)0;
                        (*l_721) = (((&g_249 != (g_885 = ((*l_884) = l_882))) < (+((*l_891) |= func_65(((*l_870) = (((**g_531) = (*g_532)) ^ ((!(func_65(((safe_add_func_uint8_t_u_u(p_10, (-1L))) >= ((*l_869) &= l_888))) != ((l_889 != (void*)0) >= (*g_396)))) > 0x85D9A4BE31D81CE0LL))))))) != (*g_215));
                        (*l_798) ^= (*l_721);
                        (*l_798) = (0xB66E0D91L | p_10);
                    }
                    (*g_396) |= ((p_10 == ((*l_801) = (safe_sub_func_int16_t_s_s(((g_25[2] != p_10) != (*l_798)), 1L)))) == (*l_870));
                    (*l_712) = l_870;
                }
                (*l_712) = func_20(&l_790, &l_727, (g_222[2] = ((*l_712) = &l_854)));
                for (g_747.f4 = 0; (g_747.f4 <= 17); g_747.f4 = safe_add_func_int8_t_s_s(g_747.f4, 9))
                {
                    unsigned char l_897 = 0x27L;
                    (*g_24) = (((*g_215) |= (0xD5EB4974255887EFLL < (g_896 &= p_10))) && ((*l_830) = p_10));
                }
            }
        }
        for (l_19.f0 = 0; l_19.f0 < 5; l_19.f0 += 1)
        {
            g_25[l_19.f0] = 0x63AE7628L;
        }
        (*l_721) = func_65(((((*l_721) = (safe_lshift_func_int8_t_s_s(((*l_918) = (safe_div_func_uint8_t_u_u(((*l_721) == ((*l_721) & (&g_803[8][1][0] != (l_904 = l_902[0][0][4])))), (((*g_215) || ((**l_846) = ((~(safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(func_65((((safe_rshift_func_int8_t_s_u(g_555, (safe_div_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u((*l_721), (+((*l_915) = (*l_721))))) != (safe_add_func_int16_t_s_s(0x5725L, 0x3694L))) ^ g_749.f3), (*g_215))))) || g_73[1]) || p_10)), (*g_215))), p_10))) != p_10))) & (*l_721))))), 5))) ^ 0x8AL) < p_10));
    }
    return p_10;
}







static int * func_11(unsigned long long p_12, int * p_13)
{
    unsigned long long l_498[7];
    struct S0 *l_530 = &g_52;
    int l_621 = 0xD81B39D3L;
    const int l_636 = 0x22E9DA0AL;
    unsigned long long *** const l_679 = &g_214;
    const unsigned l_685 = 8UL;
    char *l_705 = &g_52.f0;
    unsigned short **l_708 = &g_191[2];
    unsigned short ***l_709[6] = {&g_190, &g_190, &g_190, &g_190, &g_190, &g_190};
    int i;
    for (i = 0; i < 7; i++)
        l_498[i] = 0x4859E38258A06F30LL;
    for (p_12 = 0; (p_12 == 4); p_12 = safe_add_func_uint16_t_u_u(p_12, 1))
    {
        unsigned l_526 = 0x45B9C56BL;
        struct S0 l_528 = {0xDEL,0x7112L,6L,18446744073709551615UL,0xD3B40E07L};
        unsigned l_538 = 0x8B40CA7EL;
        int *l_540 = &g_25[4];
        short l_548[6][9] = {{0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}, {0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}, {0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}, {0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}, {0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}, {0x79F4L, 0x79F4L, 0xE769L, (-5L), 5L, (-5L), 0xE769L, 0x79F4L, 0x79F4L}};
        int l_556 = (-2L);
        unsigned l_565 = 0x997D0246L;
        const unsigned **l_587 = (void*)0;
        const unsigned *** const l_586 = &l_587;
        short ***l_649 = &g_531;
        unsigned l_670 = 18446744073709551615UL;
        unsigned char **l_684 = &g_458;
        int l_693 = 0x8EECDF32L;
        int i, j;
        if (func_65(l_498[2]))
        {
            unsigned char l_507[9][1][6] = {{{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}, {{0xB3L, 0UL, 251UL, 0UL, 250UL, 250UL}}};
            int **l_512 = &g_111[2];
            short *l_523[8][9][3] = {{{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}, {{&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}, {&g_52.f1, &g_52.f1, &g_52.f1}}};
            char *l_527 = &g_52.f0;
            struct S0 *l_529 = &g_52;
            long long *l_535 = &g_90[0];
            unsigned char *l_536[10][1][3] = {{{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}, {{&l_507[8][0][3], &l_507[4][0][1], (void*)0}}};
            unsigned long long l_537 = 0x778C1A9D28518858LL;
            long long l_539 = 3L;
            int i, j, k;
            if ((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(g_52.f2, (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_507[4][0][1], 0)) == (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((*g_127) & 0xAA17L) != p_12) ^ (-1L)), p_12)), l_498[2]))), p_12)))), 0x73L)))
            {
                return p_13;
            }
            else
            {
                (*g_249) = l_529;
            }
            (*p_13) |= func_65(((*l_527) = ((l_529 = &l_528) == l_530)));
            l_539 |= (!(p_12 && l_538));
        }
        else
        {
            unsigned short *l_543 = &g_82;
            char *l_550 = &g_105;
            short l_551[10] = {(-4L), 0xE4ABL, (-4L), 0xE4ABL, (-4L), 0xE4ABL, (-4L), 0xE4ABL, (-4L), 0xE4ABL};
            int **l_552 = (void*)0;
            int **l_553 = (void*)0;
            int *l_554 = &g_555;
            unsigned long long l_577 = 2UL;
            unsigned *l_585 = &l_565;
            unsigned **l_584 = &l_585;
            unsigned ***l_583 = &l_584;
            int i;
            g_222[7] = func_26(func_26(l_540, ((safe_rshift_func_uint16_t_u_s(((*l_543) = (*g_127)), (safe_rshift_func_uint16_t_u_s((p_12 <= ((safe_lshift_func_int8_t_s_s((((l_548[2][2] <= (safe_unary_minus_func_uint32_t_u(func_65((*l_540))))) | g_223) <= p_12), 1)) | func_65(((*l_550) = g_25[2])))), 3)))) > 0xB1L), (**g_249), g_75[6], p_12), (*l_540), l_528, g_25[2], l_551[3]);
            l_556 |= ((*l_554) ^= ((*l_540) &= (+(*p_13))));
            for (l_528.f3 = 0; (l_528.f3 <= 41); l_528.f3 = safe_add_func_int64_t_s_s(l_528.f3, 2))
            {
                unsigned *l_562 = &g_124;
                int **l_578 = (void*)0;
                int **l_579 = (void*)0;
                int **l_580 = &g_396;
                unsigned **l_582 = &l_562;
                unsigned ***l_581 = &l_582;
                (*l_580) = l_562;
                (*l_554) = ((*l_540) = (((l_583 = l_581) != l_586) >= p_12));
                return p_13;
            }
        }
        for (g_52.f0 = 0; (g_52.f0 <= 22); g_52.f0 = safe_add_func_uint32_t_u_u(g_52.f0, 5))
        {
            unsigned long long l_599 = 0xC189BF9A613B7F1ALL;
            int l_601 = 0L;
            const short * const l_608 = &l_548[5][1];
            const short * const *l_607 = &l_608;
            short l_629 = 0x516DL;
            unsigned long long *l_630 = &l_528.f3;
            int l_631[1];
            int i;
            for (i = 0; i < 1; i++)
                l_631[i] = 0xBA378815L;
            for (g_52.f4 = 0; (g_52.f4 > (-16)); g_52.f4 = safe_sub_func_int32_t_s_s(g_52.f4, 9))
            {
                unsigned l_596 = 0xBDDDFB87L;
                unsigned short *l_600 = (void*)0;
                short **l_606[6][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                int **l_622[1][7][7];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_622[i][j][k] = &g_222[7];
                    }
                }
                (*p_13) &= (((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_596, (g_82 && (*g_215)))), (safe_sub_func_uint16_t_u_u((l_601 = l_599), func_65(l_596))))) <= ((p_12 && (safe_lshift_func_int16_t_s_s((0x6D8AA41A1D421C57LL & l_599), 6))) >= 0x70D8F017L)) & p_12);
                for (l_556 = (-5); (l_556 >= (-17)); --l_556)
                {
                    unsigned short ** const l_611 = &g_191[1];
                    long long *l_615 = &g_90[0];
                    unsigned long long *l_620 = &l_498[2];
                    (*p_13) |= (l_606[4][0] != l_607);
                    (*l_540) ^= ((*g_396) = (safe_mod_func_uint64_t_u_u((l_621 = ((&g_191[2] == l_611) == ((((*l_615) = ((safe_div_func_uint64_t_u_u(((*g_215) ^= g_614), 0xF1A789D7B81E7DC8LL)) <= 0x17L)) >= ((*l_620) = ((l_601 != ((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((p_12 ^ 0x1F4FL), p_12)) > p_12), 5)) != (*p_13))) < 0x5330631DL))) & g_223))), p_12)));
                }
                g_24 = (void*)0;
            }
            (*p_13) ^= (((l_601 & p_12) != (safe_add_func_int16_t_s_s(((*g_532) = ((l_601 <= (!(*g_215))) > ((*l_540) && (p_12 | (safe_rshift_func_uint16_t_u_u((l_631[0] = (0x1E0643300FEEB227LL || ((*l_630) = (safe_sub_func_uint16_t_u_u(l_629, (&p_13 != &p_13)))))), (*g_127))))))), p_12))) <= p_12);
            return &g_25[2];
        }
        if ((*g_396))
            break;
        for (g_52.f3 = 0; (g_52.f3 == 56); g_52.f3 = safe_add_func_int8_t_s_s(g_52.f3, 2))
        {
            unsigned l_640 = 0x041B59E9L;
            unsigned l_641 = 0xAE1753B7L;
            short ***l_650[5];
            int i;
            for (i = 0; i < 5; i++)
                l_650[i] = &g_531;
            if ((safe_add_func_int32_t_s_s(l_621, l_636)))
            {
                unsigned l_658 = 0x85B9D43BL;
                int *l_659 = &g_25[2];
                if ((g_124 || func_65(g_75[5])))
                {
                    int *l_637 = (void*)0;
                    int *l_638[6] = {&l_556, &l_621, &l_556, &l_621, &l_556, &l_621};
                    int **l_639 = &l_540;
                    int i;
                    l_556 ^= ((*l_540) ^= (*p_13));
                    (*l_639) = p_13;
                    l_640 |= ((*p_13) = (*p_13));
                }
                else
                {
                    int l_642 = 0x66635514L;
                    if ((*g_396))
                        break;
                    (*g_396) = 1L;
                    l_642 = func_65(l_641);
                    l_621 = (safe_add_func_uint16_t_u_u(65534UL, ((((!(safe_div_func_uint32_t_u_u((((func_65((safe_sub_func_int16_t_s_s(func_65(((((*l_540) = (((l_649 == l_650[2]) < (*g_215)) != ((*p_13) = (safe_mod_func_uint64_t_u_u(l_642, (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((*p_13), ((func_65(l_640) | p_12) | 0x03L))), p_12))))))) <= 8L) < g_52.f4)), l_640))) ^ l_640) < p_12) & g_82), 8L))) && 0xBCC0779DL) & l_640) > l_640)));
                }
                if (func_65(g_75[6]))
                {
                    int **l_657 = &l_540;
                    (*l_657) = func_20(&g_555, &l_621, &g_25[2]);
                }
                else
                {
                    (*g_396) = l_658;
                    return l_659;
                }
            }
            else
            {
                return p_13;
            }
            for (l_621 = 9; (l_621 >= 0); l_621 -= 1)
            {
                unsigned long long * const *l_681 = &g_215;
                unsigned long long * const **l_680 = &l_681;
                unsigned char **l_682 = &g_458;
                int l_696 = 0L;
                int **l_700 = &g_222[3];
                for (g_614 = 3; (g_614 <= 9); g_614 += 1)
                {
                    unsigned *l_663 = &g_73[1];
                    short l_687[6] = {0xC166L, 0xC166L, (-1L), 0xC166L, 0xC166L, (-1L)};
                    unsigned long long l_695 = 18446744073709551607UL;
                    int i;
                    for (g_124 = 0; (g_124 <= 9); g_124 += 1)
                    {
                        int i;
                        (*p_13) ^= ((((0xA5A3L & func_65(g_75[g_614])) < ((p_12 ^ (p_12 >= (p_12 <= l_641))) == (g_52.f1 != p_12))) & 0xE553L) == g_660);
                        (*l_540) |= ((safe_lshift_func_uint16_t_u_s(p_12, 7)) == (*p_13));
                    }
                    if ((((*l_663) = g_75[g_614]) > l_640))
                    {
                        return p_13;
                    }
                    else
                    {
                        int **l_664 = (void*)0;
                        int **l_665 = &g_111[0];
                        (*l_665) = p_13;
                    }
                    if (((*l_540) = (*p_13)))
                    {
                        unsigned char ***l_683 = &g_457;
                        int l_686[4][8] = {{0x93D2F1A8L, 0xAF314B03L, (-1L), 0xAF314B03L, 0x93D2F1A8L, (-8L), (-1L), (-8L)}, {0x93D2F1A8L, 0xAF314B03L, (-1L), 0xAF314B03L, 0x93D2F1A8L, (-8L), (-1L), (-8L)}, {0x93D2F1A8L, 0xAF314B03L, (-1L), 0xAF314B03L, 0x93D2F1A8L, (-8L), (-1L), (-8L)}, {0x93D2F1A8L, 0xAF314B03L, (-1L), 0xAF314B03L, 0x93D2F1A8L, (-8L), (-1L), (-8L)}};
                        char *l_688 = &g_105;
                        int i, j;
                        if ((*g_396))
                            break;
                        (*g_396) = ((*g_24) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((-1L) & l_670), p_12)), 11)));
                        (*p_13) &= ((((*l_540) & (((safe_lshift_func_int8_t_s_u(((*l_688) &= (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((*l_540), 1)), ((((safe_lshift_func_uint16_t_u_s(p_12, (l_679 == l_680))) != ((g_52.f0 = (((*l_683) = l_682) != l_684)) || l_636)) || (l_685 || 1L)) < l_636))) || l_686[2][5]) == l_687[0])), p_12)) && p_12) && 0x86L)) > l_498[2]) >= l_687[3]);
                    }
                    else
                    {
                        long long *l_694[5][1][7] = {{{&g_90[0], (void*)0, &g_90[0], &g_90[0], &g_90[0], (void*)0, &g_90[0]}}, {{&g_90[0], (void*)0, &g_90[0], &g_90[0], &g_90[0], (void*)0, &g_90[0]}}, {{&g_90[0], (void*)0, &g_90[0], &g_90[0], &g_90[0], (void*)0, &g_90[0]}}, {{&g_90[0], (void*)0, &g_90[0], &g_90[0], &g_90[0], (void*)0, &g_90[0]}}, {{&g_90[0], (void*)0, &g_90[0], &g_90[0], &g_90[0], (void*)0, &g_90[0]}}};
                        struct S0 l_697 = {4L,0x1AD4L,0x7FL,4UL,1L};
                        const short *l_699 = &l_528.f1;
                        const short ** const l_698[6] = {&l_699, &l_699, &l_699, &l_699, &l_699, &l_699};
                        int i, j, k;
                        g_111[1] = func_26(&l_621, ((*g_396) |= ((*g_24) &= ((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_693 <= (l_695 |= p_12)), ((void*)0 == (*g_531)))), 10)) <= l_696))), l_697, p_12, (l_698[2] != (void*)0));
                        (*g_396) = (*p_13);
                        if ((*p_13))
                            break;
                    }
                }
                if ((*g_24))
                    break;
                (*l_700) = &g_555;
            }
        }
    }
    l_621 = ((safe_unary_minus_func_int32_t_s(((*g_396) |= (g_702 == (l_621 != ((safe_sub_func_int32_t_s_s((l_685 != 0x15L), func_65((~((*l_705) = (0xB2L ^ 0xCAL)))))) && (safe_sub_func_uint8_t_u_u((((**l_708) ^= ((g_710 = l_708) == (g_711[1] = &g_191[2]))) > p_12), (-3L))))))))) & l_498[2]);
    (*p_13) ^= l_498[4];
    return &g_25[0];
}







static unsigned long long func_14(struct S0 p_15, int * p_16, int * p_17, unsigned short p_18)
{
    unsigned l_226 = 4294967293UL;
    int *l_229 = &g_25[2];
    int **l_230[5] = {(void*)0, &g_24, (void*)0, &g_24, (void*)0};
    struct S0 l_231 = {0x23L,1L,0x34L,0UL,0x12A0F187L};
    short l_232 = 0xA25DL;
    struct S0 *l_247[6][8] = {{(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}, {(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}, {(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}, {(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}, {(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}, {(void*)0, &g_52, &g_52, &g_52, (void*)0, &l_231, (void*)0, &g_52}};
    struct S0 **l_246 = &l_247[4][0];
    unsigned long long ***l_286[6] = {(void*)0, (void*)0, &g_214, (void*)0, (void*)0, &g_214};
    unsigned char *l_324 = &g_146;
    int l_353 = 0xAF896339L;
    unsigned short **l_365 = &g_191[1];
    int l_393 = 0x2A47E4BAL;
    unsigned ****l_409 = &g_168;
    long long *l_447 = &g_90[0];
    short *l_478 = &g_52.f1;
    short ** const l_477 = &l_478;
    long long **l_495 = &l_447;
    int i, j;
    (*g_24) = 0x704E5C1EL;
    if (((((safe_lshift_func_uint16_t_u_s((0x1285L != 0x4678L), 3)) || ((l_226 <= p_15.f0) > l_226)) <= (((safe_rshift_func_int16_t_s_u(func_39((g_222[7] = l_229), func_39(p_16, g_75[6], l_231, p_15.f4), p_15, p_15.f1), p_18)) && l_232) || p_15.f2)) <= 0xE5F7L))
    {
        unsigned long long l_239 = 0UL;
        unsigned long long ***l_285 = (void*)0;
        int l_303 = 0xCB678F44L;
        unsigned char *l_322 = (void*)0;
        int l_326 = 0xC3F2C0FAL;
        unsigned short **l_363 = &g_191[1];
        unsigned l_374 = 1UL;
        short l_395[3];
        int i;
        for (i = 0; i < 3; i++)
            l_395[i] = 0x4ACBL;
        for (g_82 = 0; (g_82 != 55); g_82++)
        {
            char l_273[3][8][3] = {{{5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}}, {{5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}}, {{5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}, {5L, 0x3CL, 0xA5L}}};
            int l_282[7];
            unsigned char *l_334 = (void*)0;
            unsigned char l_362 = 254UL;
            unsigned short **l_366 = &g_191[0];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_282[i] = 0x64D6AD9DL;
        }
        return p_15.f3;
    }
    else
    {
        unsigned *****l_410 = &l_409;
        const int l_426[4] = {0x43ADBF9BL, 0x665A2770L, 0x43ADBF9BL, 0x665A2770L};
        unsigned long long *l_462 = (void*)0;
        int l_475 = 0xA97D92B0L;
        int i;
        if ((((*l_410) = l_409) != (void*)0))
        {
            unsigned l_412 = 18446744073709551612UL;
            int l_423 = (-1L);
            unsigned ****l_442 = &g_168;
            const unsigned char *l_485[7] = {&g_402[0], &g_402[0], &g_402[0], &g_402[0], &g_402[0], &g_402[0], &g_402[0]};
            const unsigned char **l_484[7][8][4] = {{{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}, {{&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}, {&l_485[5], (void*)0, &l_485[5], &l_485[1]}}};
            int i, j, k;
            (*p_16) = (*p_16);
            if (((void*)0 != &g_111[2]))
            {
                char *l_422 = (void*)0;
                char *l_427[4][9][2] = {{{(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}}, {{(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}}, {{(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}}, {{(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}, {(void*)0, &l_231.f0}}};
                unsigned l_428 = 7UL;
                const unsigned char l_429 = 0xABL;
                int l_430[3];
                struct S0 l_434 = {0xEAL,0x046FL,0x87L,1UL,1L};
                int l_455 = 0xE3769C28L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_430[i] = 0xC4076AB1L;
                l_412 ^= (safe_unary_minus_func_uint8_t_u((1L != 65529UL)));
                if ((((*g_396) && ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_52.f0, (safe_unary_minus_func_int8_t_s((l_430[1] = (safe_mod_func_uint32_t_u_u(p_18, ((*g_24) = (safe_div_func_uint16_t_u_u((((l_423 ^= p_15.f0) != (&g_24 != &p_17)) | (safe_sub_func_uint8_t_u_u(0xB1L, func_65((l_426[3] != (l_428 = 0xF9L)))))), l_429)))))))))), 5)) >= p_15.f3)) || l_412))
                {
                    unsigned short l_433 = 1UL;
                    int l_437 = 0xD73F6327L;
                    unsigned l_456 = 4294967295UL;
                    unsigned long long *l_461[9] = {&g_75[1], &g_75[6], &g_75[1], &g_75[6], &g_75[1], &g_75[6], &g_75[1], &g_75[6], &g_75[1]};
                    struct S0 l_465 = {0x0EL,0x7498L,0x67L,0x6B80936B5DF26AEDLL,0L};
                    int i;
                    if ((l_437 = (safe_div_func_uint32_t_u_u((func_46((l_433 == g_73[1]), l_434, (*g_250), (safe_add_func_int16_t_s_s(((void*)0 == p_17), (*g_127)))) ^ (((void*)0 == (*g_249)) && g_75[9])), 1UL))))
                    {
                        unsigned *l_446 = &g_73[1];
                        unsigned **l_445[8][5] = {{&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}, {&l_446, (void*)0, &l_446, &l_446, (void*)0}};
                        unsigned ** const *l_444[5];
                        unsigned ** const * const *l_443 = &l_444[0];
                        int l_454 = 1L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_444[i] = &l_445[2][4];
                        (*p_16) = ((l_455 ^= ((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((l_442 == l_443), (p_15.f0 = (l_447 != &g_90[0])))) & (safe_mod_func_int16_t_s_s((l_430[0] || ((g_402[0] | ((((safe_div_func_uint32_t_u_u((l_426[1] && (safe_div_func_int8_t_s_s(func_65(g_75[1]), p_15.f2))), l_454)) || 0L) || 0x654DC8DDL) < 0xFF344C95L)) & (*g_127))), p_15.f2))), 14)) < 0x69070D5EL)) & l_456);
                        l_454 ^= l_426[1];
                    }
                    else
                    {
                        unsigned short *l_459 = (void*)0;
                        unsigned short *l_460[1][6][10] = {{{&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}, {&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}, {&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}, {&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}, {&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}, {&l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433, &l_433}}};
                        int i, j, k;
                        p_16 = (p_17 = func_55(l_433, ((*g_215) ^ (l_423 ^= (g_457 == (void*)0))), &g_25[4]));
                        (*g_396) = ((p_18 = ((**l_365) &= l_433)) | (l_461[8] != l_462));
                        (*p_17) = ((void*)0 == &g_75[6]);
                    }
                    p_17 = func_26(p_16, ((func_39(&g_223, (g_52.f4 < (safe_rshift_func_int8_t_s_u((0xD971DBBC29D85C13LL | (0x0DC2L != func_39(&g_223, ((*l_447) = ((l_434.f1 < p_18) > 0L)), p_15, g_75[2]))), l_412))), l_465, g_402[0]) | l_426[0]) != l_429), p_15, g_52.f2, l_412);
                }
                else
                {
                    unsigned l_466 = 0xEB313F73L;
                    for (l_231.f0 = 0; (l_231.f0 <= 2); l_231.f0 += 1)
                    {
                        int i;
                        return g_25[(l_231.f0 + 1)];
                    }
                    (*g_24) = (((*l_324) &= l_466) & g_52.f0);
                }
            }
            else
            {
                int l_474 = 0xA6057FF6L;
                int *l_481[5][5][6] = {{{&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}}, {{&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}}, {{&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}}, {{&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}}, {{&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}, {&l_475, &g_25[0], (void*)0, (void*)0, &l_475, (void*)0}}};
                int i, j, k;
                (*g_24) = func_39(&l_423, p_18, (*g_250), g_467);
                if ((p_15.f1 <= (l_475 |= ((**l_365) = (safe_sub_func_int64_t_s_s(((p_15.f2 > (*g_396)) != (((void*)0 == &g_90[0]) != (p_15.f3 < (+p_15.f2)))), (safe_mod_func_int16_t_s_s(l_474, (*l_229)))))))))
                {
                    for (l_231.f3 = 0; (l_231.f3 <= 0); l_231.f3 += 1)
                    {
                        int *l_476[8] = {&l_423, &g_25[2], &l_423, &g_25[2], &l_423, &g_25[2], &l_423, &g_25[2]};
                        short **l_480[10][3][8] = {{{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}, {{&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}, {&l_478, &l_478, &l_478, &l_478, &l_478, (void*)0, &l_478, &l_478}}};
                        short ***l_479 = &l_480[4][1][6];
                        int i, j, k;
                        l_476[0] = (void*)0;
                        (*l_479) = l_477;
                        return p_15.f3;
                    }
                }
                else
                {
                    (*g_396) ^= (*p_16);
                    g_24 = l_481[0][0][2];
                }
            }
            for (p_18 = 16; (p_18 > 50); ++p_18)
            {
                for (l_475 = 0; (l_475 <= 5); l_475 += 1)
                {
                    const unsigned char ***l_486 = (void*)0;
                    g_487[0][1][2] = l_484[6][3][3];
                }
            }
        }
        else
        {
            unsigned char ***l_489 = (void*)0;
            g_457 = (void*)0;
            for (l_226 = (-6); (l_226 > 34); l_226 = safe_add_func_int16_t_s_s(l_226, 8))
            {
                return p_15.f1;
            }
        }
        p_17 = &l_475;
    }
    if ((0x1C1EL >= (p_15.f3 == 3UL)))
    {
        unsigned l_492 = 8UL;
        return l_492;
    }
    else
    {
        long long **l_494 = (void*)0;
        long long ***l_493[5][10] = {{&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}};
        int i, j;
        l_495 = &l_447;
    }
    return p_15.f1;
}







static int * func_20(int * p_21, int * p_22, int * p_23)
{
    long long l_219 = 0xDFC9DFD79E2B9192LL;
    unsigned long long l_220 = 0x484796355BF927BDLL;
    int **l_221 = &g_24;
    l_220 |= (safe_add_func_int64_t_s_s(0L, (4294967289UL > ((*p_21) == l_219))));
    (*l_221) = p_23;
    return &g_25[1];
}







static int * func_26(int * p_27, int p_28, struct S0 p_29, int p_30, short p_31)
{
    unsigned long long *l_212[10][6] = {{&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}, {&g_52.f3, &g_75[6], (void*)0, &g_75[6], &g_52.f3, (void*)0}};
    unsigned long long **l_211 = &l_212[7][4];
    unsigned long long ***l_213[4][1] = {{&l_211}, {&l_211}, {&l_211}, {&l_211}};
    int *l_216 = &g_25[2];
    int i, j;
    g_214 = l_211;
    return l_216;
}







static char func_39(int * p_40, long long p_41, struct S0 p_42, char p_43)
{
    struct S0 l_205[2] = {{0xDFL,1L,0L,18446744073709551615UL,0x5D3E32F4L}, {0xDFL,1L,0L,18446744073709551615UL,0x5D3E32F4L}};
    short *l_208 = &g_52.f1;
    int i;
    (*g_24) = (safe_sub_func_int64_t_s_s(func_65((func_46(p_42.f0, p_42, l_205[0], ((safe_mod_func_int32_t_s_s((l_208 == l_208), ((*g_24) &= l_205[0].f0))) <= g_75[3])) & func_65(l_205[0].f3))), p_42.f0));
    return l_205[0].f0;
}







static unsigned char func_46(unsigned short p_47, struct S0 p_48, struct S0 p_49, unsigned long long p_50)
{
    unsigned l_71 = 1UL;
    unsigned *l_72 = &g_73[1];
    unsigned long long *l_74[4][6][9] = {{{&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}}, {{&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}}, {{&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}}, {{&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}, {&g_75[6], &g_52.f3, &g_75[6], &g_75[6], &g_75[6], &g_75[6], &g_75[4], &g_75[4], (void*)0}}};
    int l_76 = 0x2F71451CL;
    short *l_79[7] = {&g_52.f1, &g_52.f1, &g_52.f1, &g_52.f1, &g_52.f1, &g_52.f1, &g_52.f1};
    int **l_201 = &g_111[1];
    int i, j, k;
    (*l_201) = func_55((safe_div_func_uint16_t_u_u((p_49.f0 <= (g_52.f1 = ((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((~p_49.f2), 2)) >= func_65(((&g_25[2] != (void*)0) > (+(safe_div_func_int8_t_s_s(((g_52.f3 || (((!g_25[2]) || ((safe_div_func_uint64_t_u_u((p_48.f3 |= (g_52.f3 >= (p_47 <= (((*l_72) = (l_71 = 0xB61F2865L)) & 4294967295UL)))), 0x62B766AA6F69A7C8LL)) != g_75[2])) >= 246UL)) < l_76), g_52.f1)))))) < 0xA6C6106AL), (*g_24))) == p_49.f4))), p_48.f2)), l_76, &g_25[2]);
    return p_49.f0;
}







static int * func_55(int p_56, unsigned p_57, int * p_58)
{
    const unsigned short l_80 = 0xC4B0L;
    unsigned short *l_81[10][7] = {{&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}, {&g_82, &g_82, (void*)0, (void*)0, &g_82, &g_82, &g_82}};
    int l_83 = 8L;
    int l_122 = (-7L);
    const unsigned short **l_128 = &g_127;
    const unsigned *l_131 = &g_124;
    const unsigned **l_130 = &l_131;
    int l_153 = 0xD0B45DC8L;
    int i, j;
    p_56 = ((((((*p_58) = ((l_80 | (l_83 = g_73[1])) || (safe_lshift_func_int8_t_s_u((0x93B2529581CA5788LL >= ((void*)0 == &p_56)), 2)))) ^ func_65(p_56)) ^ l_80) > l_80) >= l_80);
    for (p_56 = 8; (p_56 >= 0); p_56 -= 1)
    {
        for (g_82 = 3; (g_82 <= 9); g_82 += 1)
        {
            int *l_86[5];
            int **l_87 = &l_86[3];
            int i;
            for (i = 0; i < 5; i++)
                l_86[i] = &l_83;
            l_86[3] = &g_25[4];
            (*l_87) = &p_56;
        }
    }
    for (l_83 = 6; (l_83 >= 0); l_83 -= 1)
    {
        int *l_88[3][9][7] = {{{&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}}, {{&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}}, {{&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}, {&l_83, &g_25[2], (void*)0, &g_25[1], &g_25[2], &g_25[4], &g_25[2]}}};
        long long l_89 = (-10L);
        int *l_110 = &g_25[2];
        unsigned short **l_174 = (void*)0;
        int i, j, k;
        for (g_52.f0 = 4; (g_52.f0 >= 2); g_52.f0 -= 1)
        {
            int i;
        }
        (*l_110) = (~(-1L));
        for (l_122 = 6; (l_122 >= 0); l_122 -= 1)
        {
            const unsigned ***l_132 = &l_130;
            int l_133 = 0L;
            (*l_132) = l_130;
            for (g_82 = 0; (g_82 <= 6); g_82 += 1)
            {
                unsigned l_155[5] = {2UL, 0x7535322EL, 2UL, 0x7535322EL, 2UL};
                int l_158 = 0xCA3757E1L;
                int i;
                for (g_52.f0 = 6; (g_52.f0 >= 0); g_52.f0 -= 1)
                {
                    short l_142 = 0x970EL;
                    unsigned char *l_145 = &g_146;
                    struct S0 *l_148 = &g_52;
                    struct S0 **l_147 = &l_148;
                    int **l_149 = &l_88[2][1][4];
                    if (l_133)
                        break;
                    p_56 |= (+(3UL || (safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(g_25[3], (safe_div_func_int8_t_s_s((g_105 |= g_75[6]), 0x7BL)))), func_65((!((0UL && 0x2FL) < ((safe_sub_func_uint8_t_u_u((0x86L && (l_142 = p_57)), ((*l_145) &= (safe_lshift_func_int16_t_s_u((-6L), 3))))) >= 0L))))))));
                    (*l_147) = &g_52;
                    (*l_149) = &l_133;
                }
                for (g_52.f3 = 2; (g_52.f3 <= 6); g_52.f3 += 1)
                {
                    unsigned char *l_152 = (void*)0;
                    unsigned char *l_154[8][1][10] = {{{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}, {{&g_146, &g_146, &g_146, (void*)0, &g_146, &g_146, &g_146, (void*)0, &g_146, &g_146}}};
                    int i, j, k;
                    if (((g_75[6] && (((*g_24) < (safe_div_func_uint8_t_u_u((func_65(p_57) == ((((((l_153 ^= p_56) & (l_155[1] = (g_146 = 0x8EL))) ^ (*p_58)) != func_65(((safe_sub_func_uint64_t_u_u(18446744073709551615UL, g_73[1])) < l_158))) & g_82) > 0UL)), p_56))) == g_124)) < g_25[2]))
                    {
                        struct S0 *l_160[3][10][7] = {{{&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}}, {{&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}}, {{&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}, {&g_52, (void*)0, &g_52, (void*)0, &g_52, &g_52, &g_52}}};
                        struct S0 **l_159 = &l_160[2][5][2];
                        int i, j, k;
                        (*l_159) = &g_52;
                        (*p_58) = ((l_153 = 0L) ^ 0xB6L);
                    }
                    else
                    {
                        int **l_161 = &l_88[0][3][6];
                        (*l_161) = (void*)0;
                    }
                }
                for (g_146 = 0; (g_146 <= 6); g_146 += 1)
                {
                    for (g_105 = 2; (g_105 >= 0); g_105 -= 1)
                    {
                        l_133 |= ((*l_110) = ((*p_58) == func_65((g_52.f0 = l_158))));
                        if ((*p_58))
                            continue;
                    }
                    p_56 &= (*l_110);
                }
                for (l_158 = 6; (l_158 >= 0); l_158 -= 1)
                {
                    const int *l_163[5] = {&g_25[1], &g_25[2], &g_25[1], &g_25[2], &g_25[1]};
                    const int **l_162 = &l_163[4];
                    unsigned ****l_169 = (void*)0;
                    unsigned **l_172 = (void*)0;
                    unsigned ***l_171 = &l_172;
                    unsigned ****l_170 = &l_171;
                    char * const l_183[3][7] = {{(void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0}, {(void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0}, {(void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0, &g_52.f0, (void*)0}};
                    long long *l_184 = &l_89;
                    int i, j;
                    (*l_162) = (void*)0;
                    if (func_65(((safe_sub_func_int8_t_s_s((+(-4L)), l_83)) == (~((l_133 ^ ((func_65(g_73[1]) <= ((g_168 == ((*l_170) = g_168)) != (*g_24))) ^ 0x3D48F0382BA70337LL)) ^ 0xEFL)))))
                    {
                        unsigned short ***l_173 = (void*)0;
                        int i, j;
                        l_174 = &l_81[(l_83 + 1)][l_158];
                        l_133 ^= (*p_58);
                    }
                    else
                    {
                        (*p_58) = (*p_58);
                        (*l_162) = &l_83;
                        (*g_24) = (*p_58);
                        (*p_58) &= 0x0310B938L;
                    }
                    for (l_153 = 2; (l_153 >= 0); l_153 -= 1)
                    {
                        (*g_24) = (*g_24);
                        if ((*p_58))
                            break;
                        if ((*g_24))
                            continue;
                    }
                    p_56 = ((*l_110) = (((g_90[0] && ((*l_184) &= (g_52.f0 ^ (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((+func_65(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(p_56, 13)), 2)) & (&g_105 != l_183[2][1])))) >= (*l_110)) ^ (*g_24)), 4)), p_56))))) & g_124) > p_57));
                }
            }
            l_133 |= (*g_24);
            return &g_25[2];
        }
    }
    for (g_105 = 0; (g_105 != 18); g_105++)
    {
        unsigned short l_195 = 0xE1CAL;
        int l_196 = 0xAEB5C9B7L;
        for (g_124 = 29; (g_124 < 35); g_124 = safe_add_func_uint8_t_u_u(g_124, 8))
        {
            unsigned short **l_189 = &l_81[7][1];
            char *l_192 = &g_52.f0;
            int l_197[5] = {(-1L), 0xB9F4142CL, (-1L), 0xB9F4142CL, (-1L)};
            int i;
            if (((l_153 |= (((g_190 = l_189) != l_189) != func_65(func_65(func_65(((*l_192) = g_75[6])))))) > g_105))
            {
                l_196 |= (safe_rshift_func_int16_t_s_u(((l_195 = l_83) || (*g_24)), func_65(p_56)));
                if (l_197[3])
                    continue;
                g_111[1] = &g_25[3];
            }
            else
            {
                int **l_200 = &g_111[1];
                if ((*g_24))
                    break;
                for (p_56 = 0; (p_56 <= 7); p_56++)
                {
                    (*g_24) = (l_153 >= (&p_58 != (void*)0));
                }
                (*l_200) = &p_56;
            }
        }
    }
    return &g_25[1];
}







static unsigned char func_65(char p_66)
{
    int *l_78 = &g_25[1];
    int **l_77 = &l_78;
    (*l_77) = &g_25[2];
    return p_66;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_402[i], "g_402[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_747.f0, "g_747.f0", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_747.f2, "g_747.f2", print_hash_value);
    transparent_crc(g_747.f3, "g_747.f3", print_hash_value);
    transparent_crc(g_747.f4, "g_747.f4", print_hash_value);
    transparent_crc(g_749.f0, "g_749.f0", print_hash_value);
    transparent_crc(g_749.f1, "g_749.f1", print_hash_value);
    transparent_crc(g_749.f2, "g_749.f2", print_hash_value);
    transparent_crc(g_749.f3, "g_749.f3", print_hash_value);
    transparent_crc(g_749.f4, "g_749.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_780[i].f0, "g_780[i].f0", print_hash_value);
        transparent_crc(g_780[i].f1, "g_780[i].f1", print_hash_value);
        transparent_crc(g_780[i].f2, "g_780[i].f2", print_hash_value);
        transparent_crc(g_780[i].f3, "g_780[i].f3", print_hash_value);
        transparent_crc(g_780[i].f4, "g_780[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_966, "g_966", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
