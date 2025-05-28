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
   int f0;
   int f1;
   int f2;
   long long f3;
   short f4;
   int f5;
};

union U1 {
   unsigned long long f0;
   unsigned long long f1;
};

union U2 {
   unsigned char f0;
   long long f1;
   struct S0 f2;
};


static int g_9 = 0L;
static unsigned g_14[1][7][10] = {{{4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}, {4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L, 1UL, 0x45BA13B2L, 4294967291UL, 0x45BA13B2L}}};
static int g_17 = 3L;
static int *g_16 = &g_17;
static unsigned g_31 = 0x57440E70L;
static union U1 *g_52 = (void*)0;
static int g_54 = 0x84085EFBL;
static int g_55 = 0x5EF1C8D2L;
static union U1 g_56 = {0x3772679F1A7DFAE3LL};
static int g_58 = (-1L);
static struct S0 g_66 = {0x84F79AABL,0L,1L,4L,-7L,0xCD553B78L};
static struct S0 *g_65 = &g_66;
static short g_105[10] = {7L, 7L, 0L, 7L, 7L, 0L, 7L, 7L, 0L, 7L};
static unsigned char g_106 = 247UL;
static int g_112 = 1L;
static int *g_126 = &g_66.f2;
static int **g_125 = &g_126;
static char g_178 = (-6L);
static unsigned char *g_183 = (void*)0;
static short g_221[6][8][5] = {{{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}, {{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}, {{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}, {{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}, {{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}, {{(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}, {(-5L), 0xC100L, 0xA031L, 0xCAD8L, (-5L)}}};
static unsigned long long g_238 = 18446744073709551608UL;
static unsigned short g_260 = 0x2241L;
static int g_286 = 5L;
static unsigned g_322 = 2UL;
static union U1 g_323 = {0x616072BF6ECE069CLL};
static unsigned g_351 = 1UL;
static union U2 g_397 = {0UL};
static struct S0 g_402 = {7L,0x433418E9L,0xF74B91CCL,1L,-3L,-2L};
static short g_414[3][9] = {{0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L, 0x9CCEL, 0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L}, {0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L, 0x9CCEL, 0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L}, {0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L, 0x9CCEL, 0x4B90L, 0x9CCEL, 0x7CD5L, 0x7CD5L}};
static long long g_415 = (-3L);
static int g_416 = 0x0425D630L;
static short g_417 = 1L;
static unsigned short g_418[9][4][2] = {{{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}, {{0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}, {0x29A5L, 65534UL}}};
static union U1 **g_439 = &g_52;
static union U1 ***g_438 = &g_439;
static int *g_498 = &g_66.f5;
static unsigned g_514[7] = {0x16F8632EL, 0x16F8632EL, 0x16F8632EL, 0x16F8632EL, 0x16F8632EL, 0x16F8632EL, 0x16F8632EL};
static unsigned long long g_532 = 0UL;
static int g_537 = 0xF5F4CE0EL;
static union U1 g_540 = {9UL};
static unsigned char g_556[10] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
static struct S0 *g_620 = &g_402;
static short g_636[4] = {0L, (-7L), 0L, (-7L)};
static int g_637 = 0x59EB4936L;
static int g_638 = 0x6FB2D66EL;
static int g_639 = 0xB4A0C915L;
static unsigned g_641 = 1UL;
static union U2 g_652 = {0xD5L};
static int g_730[1] = {0L};
static char g_731[5][3] = {{2L, 1L, 2L}, {2L, 1L, 2L}, {2L, 1L, 2L}, {2L, 1L, 2L}, {2L, 1L, 2L}};
static unsigned g_733 = 1UL;
static short g_749[7][8] = {{0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}, {0x9712L, (-9L), 0x5A13L, (-9L), 0x9712L, (-9L), 0x5A13L, (-9L)}};
static unsigned g_750 = 0xF1039113L;
static union U2 *g_780[4][3] = {{(void*)0, &g_397, &g_397}, {(void*)0, &g_397, &g_397}, {(void*)0, &g_397, &g_397}, {(void*)0, &g_397, &g_397}};
static unsigned char **g_789 = &g_183;
static unsigned char ***g_788 = &g_789;



static unsigned func_1(void);
static union U1 * func_2(int p_3, union U1 * p_4, int p_5, union U1 * p_6);
static union U1 * func_10(int p_11, union U2 p_12, int * p_13);
static unsigned short func_18(short p_19, long long p_20, int * p_21);
static struct S0 func_24(int * p_25, unsigned long long p_26);
static long long func_32(unsigned short p_33);
static char func_36(union U1 * p_37, union U1 p_38);
static union U1 * func_39(int * p_40);
static int * func_41(short p_42, union U1 p_43);
static union U1 func_45(unsigned char p_46, short p_47);
static unsigned func_1(void)
{
    short l_7 = 0x53E5L;
    int *l_8[6][7][6] = {{{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}, {&g_9, (void*)0, &g_9, &g_9, &g_9, &g_9}}};
    union U2 l_15 = {0x7FL};
    union U1 *l_539 = &g_540;
    union U1 **l_619 = &l_539;
    int l_623 = 0xCDD07EBDL;
    short l_635[4];
    long long l_640 = (-8L);
    unsigned long long l_647 = 0x4827364839A983B5LL;
    unsigned l_665 = 0x69D9A320L;
    union U1 *l_679 = &g_323;
    unsigned *l_701 = &g_14[0][1][2];
    unsigned char **l_706 = &g_183;
    char l_728 = (-1L);
    int l_732 = 0x75F017DEL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_635[i] = (-3L);
    l_539 = func_2((g_9 = l_7), func_10(g_14[0][1][2], l_15, g_16), l_7, l_539);
    (*g_439) = l_539;
    for (g_54 = (-7); (g_54 < 28); g_54++)
    {
        unsigned short *l_614[7] = {&g_418[6][2][0], &g_418[6][2][0], (void*)0, &g_418[6][2][0], &g_418[6][2][0], (void*)0, &g_418[6][2][0]};
        struct S0 *l_615 = &g_402;
        struct S0 **l_616 = &g_65;
        union U1 **l_617 = &g_52;
        union U1 ***l_618[3][10] = {{&l_617, &l_617, (void*)0, &l_617, &l_617, &l_617, &l_617, &l_617, (void*)0, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617, &l_617, &l_617, &l_617, (void*)0, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617, &l_617, &l_617, &l_617, (void*)0, &l_617}};
        int l_621 = (-1L);
        long long *l_622[4];
        int l_624 = 0xC7342BA4L;
        char *l_653 = &g_178;
        int *l_662 = &g_66.f1;
        int l_664 = 0x03FF17C1L;
        char l_747 = 1L;
        int l_748[8];
        short l_770 = 0x9590L;
        int **l_773 = (void*)0;
        union U2 l_787 = {0xA0L};
        unsigned **l_796 = &l_701;
        int i, j;
        for (i = 0; i < 4; i++)
            l_622[i] = &g_66.f3;
        for (i = 0; i < 8; i++)
            l_748[i] = 0xC5A8EC80L;
        (*g_498) = (g_105[3] > (l_7 , (safe_add_func_int32_t_s_s(((l_614[3] = &g_418[8][1][0]) != &g_418[8][1][0]), 0x55BF76ADL))));
    }
    return l_665;
}







static union U1 * func_2(int p_3, union U1 * p_4, int p_5, union U1 * p_6)
{
    union U1 l_551 = {1UL};
    int *l_563 = &g_397.f2.f2;
    unsigned char **l_584[9] = {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183};
    int **l_606 = &g_16;
    int i;
    for (g_56.f1 = (-26); (g_56.f1 == 51); g_56.f1 = safe_add_func_int8_t_s_s(g_56.f1, 8))
    {
        short *l_543 = (void*)0;
        short *l_544 = &g_221[3][7][0];
        int l_545 = 7L;
        struct S0 *l_546 = (void*)0;
        struct S0 *l_547 = &g_66;
        union U1 *l_550[9] = {(void*)0, &g_56, (void*)0, &g_56, (void*)0, &g_56, (void*)0, &g_56, (void*)0};
        unsigned long long l_603 = 18446744073709551615UL;
        int *l_605 = (void*)0;
        int i;
        (*l_547) = func_24(&g_9, l_545);
        if (((safe_mul_func_uint16_t_u_u(g_66.f0, ((+((func_36(l_550[6], l_551) && (((safe_lshift_func_uint8_t_u_s((!(safe_mul_func_int16_t_s_s(g_556[4], g_17))), 4)) & ((safe_lshift_func_int8_t_s_u(g_112, (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_s((g_14[0][2][3] != func_36(p_6, (*p_6))), 0)))))) < l_545)) ^ l_551.f1)) | l_551.f0)) , g_556[3]))) , l_551.f1))
        {
            unsigned *l_570 = &g_14[0][2][6];
            struct S0 **l_578 = &g_65;
            int l_582 = 0xB924169BL;
            int l_591[1][7];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_591[i][j] = 0xB292E5E6L;
            }
            for (g_66.f4 = 5; (g_66.f4 >= 0); g_66.f4 -= 1)
            {
                int **l_562[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_562[i] = &g_498;
                l_563 = ((*g_125) = (void*)0);
                for (g_31 = 0; (g_31 <= 8); g_31 += 1)
                {
                    return p_4;
                }
            }
            if (l_551.f0)
            {
                unsigned char *l_575[10][6] = {{&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}, {&g_556[7], &g_397.f0, &g_106, (void*)0, (void*)0, &g_106}};
                int l_579[7][7][5] = {{{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}, {{0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}, {0L, (-3L), 0x1C1151F4L, 0L, (-1L)}}};
                int i, j, k;
                if (((((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((&g_351 != l_570), (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((++g_397.f0), (l_578 == (void*)0))), ((l_579[3][5][4] < func_32(g_402.f1)) , func_18(((safe_sub_func_int8_t_s_s(((void*)0 == &g_65), 254UL)) , g_221[2][0][4]), g_417, &g_58)))))), g_17)), p_5)) > g_66.f5) <= g_106) > l_582))
                {
                    if (l_545)
                        break;
                }
                else
                {
                    int *l_583 = (void*)0;
                    struct S0 l_585 = {1L,1L,1L,0L,1L,0L};
                    int **l_599 = (void*)0;
                    if (((*g_498) = (((g_397.f2.f3 = (l_582 > 0L)) , (func_24(l_583, p_5) , l_584[2])) != (void*)0)))
                    {
                        return (**g_438);
                    }
                    else
                    {
                        struct S0 l_586[1] = {{0x2A5C934FL,-9L,0x362AEB9FL,3L,8L,0L}};
                        unsigned long long *l_589 = (void*)0;
                        unsigned long long *l_590[1][8][2] = {{{&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}, {&g_540.f1, (void*)0}}};
                        int **l_600[3][7] = {{&l_563, &g_498, &g_498, &g_498, &l_563, &g_126, &l_563}, {&l_563, &g_498, &g_498, &g_498, &l_563, &g_126, &l_563}, {&l_563, &g_498, &g_498, &g_498, &l_563, &g_126, &l_563}};
                        long long *l_604[6][9][4] = {{{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}, {{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}, {{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}, {{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}, {{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}, {{&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}, {&g_415, &l_585.f3, &g_402.f3, &g_415}}};
                        int i, j, k;
                        l_586[0] = l_585;
                        (*g_498) = func_18(l_586[0].f3, ((safe_add_func_uint64_t_u_u(l_585.f0, (g_540.f0--))) , (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(p_5)), 12))), &g_286);
                        l_585.f5 &= ((*g_498) = (safe_sub_func_uint8_t_u_u((g_238 > (func_32((l_599 != &g_126)) && (p_5 >= ((*p_6) , ((void*)0 != l_600[0][5]))))), ((safe_rshift_func_int8_t_s_s(((((l_582 = ((l_603 = l_545) | l_591[0][3])) , (-1L)) || g_415) <= g_351), 7)) , g_56.f1))));
                    }
                    l_605 = &l_591[0][3];
                }
            }
            else
            {
                int **l_607 = (void*)0;
                (*g_498) = ((0x55AFCF8717785E72LL | (l_582 & (l_606 != l_607))) & 0x07L);
            }
            return p_6;
        }
        else
        {
            unsigned l_608 = 18446744073709551615UL;
            unsigned char l_609 = 0xD1L;
            (*g_498) |= (0x3167L <= (((+(l_545 ^= (l_608 && p_3))) > l_609) | p_3));
            return l_550[6];
        }
    }
    return p_4;
}







static union U1 * func_10(int p_11, union U2 p_12, int * p_13)
{
    int l_44 = (-1L);
    int *l_57 = &g_58;
    union U1 l_59 = {18446744073709551615UL};
    int l_518 = 0L;
    unsigned short *l_535 = &g_418[2][2][0];
    int *l_536[4][9][7] = {{{(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}}, {{(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}}, {{(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}}, {{(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}, {(void*)0, &g_537, &g_537, &g_537, &g_537, (void*)0, &g_537}}};
    union U1 *l_538 = &g_56;
    int i, j, k;
    g_537 ^= (((((*l_535) = func_18((safe_sub_func_int64_t_s_s((func_24(&g_17, ((l_518 = (safe_rshift_func_uint16_t_u_s(65533UL, ((g_31 = (~p_12.f0)) && (((func_32(g_17) || p_12.f0) | (safe_lshift_func_int8_t_s_s(func_36(func_39(func_41(func_32(l_44), (((*l_57) |= ((func_45(g_14[0][1][2], g_14[0][1][2]) , 0xF60FL) | p_11)) , l_59))), l_59), g_414[2][2]))) != l_59.f0))))) || p_11)) , g_402.f0), l_44)), l_44, &l_44)) == 65531UL) || 0L) & g_14[0][2][7]);
    return l_538;
}







static unsigned short func_18(short p_19, long long p_20, int * p_21)
{
    int *l_527 = (void*)0;
    int *l_528[4][6][6] = {{{&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}}, {{&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}}, {{&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}}, {{&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}, {&g_66.f2, &g_66.f5, &g_66.f2, (void*)0, &g_416, &g_66.f0}}};
    unsigned l_529 = 0x4DF3CAC4L;
    int i, j, k;
    l_529++;
    g_532--;
    return p_20;
}







static struct S0 func_24(int * p_25, unsigned long long p_26)
{
    struct S0 l_521 = {0xFC137D90L,0x3B6F74B7L,-1L,0xF0243F0681AA313DLL,-1L,1L};
    union U1 l_522 = {0xCC95AACB295E0BEDLL};
    int *l_523[2][2] = {{&g_55, (void*)0}, {&g_55, (void*)0}};
    int **l_524 = &l_523[1][0];
    int i, j;
    for (g_402.f0 = (-11); (g_402.f0 != (-14)); g_402.f0 = safe_sub_func_int8_t_s_s(g_402.f0, 1))
    {
        return l_521;
    }
    (*l_524) = ((*g_125) = l_523[1][0]);
    for (g_397.f2.f4 = 10; (g_397.f2.f4 < 0); g_397.f2.f4 = safe_sub_func_int16_t_s_s(g_397.f2.f4, 7))
    {
        return g_66;
    }
    return l_521;
}







static long long func_32(unsigned short p_33)
{
    return p_33;
}







static char func_36(union U1 * p_37, union U1 p_38)
{
    int *l_501 = (void*)0;
    int *l_502 = &g_402.f5;
    int *l_503 = &g_54;
    int *l_504 = &g_54;
    int *l_505 = &g_402.f0;
    int *l_506 = &g_397.f2.f0;
    int *l_507 = &g_54;
    int *l_508 = &g_416;
    int l_509 = 0xFA684FB2L;
    int *l_510 = (void*)0;
    int *l_511 = &g_55;
    int l_512[6];
    int *l_513[4] = {&g_402.f2, &g_66.f0, &g_402.f2, &g_66.f0};
    unsigned l_517 = 8UL;
    int i;
    for (i = 0; i < 6; i++)
        l_512[i] = (-7L);
    g_514[4]++;
    return l_517;
}







static union U1 * func_39(int * p_40)
{
    int l_166 = 0x575A83E0L;
    union U1 l_174 = {0x338B5EEB1FCE9C38LL};
    unsigned char *l_184[2][10] = {{&g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106}, {&g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106}};
    char *l_195 = &g_178;
    int l_237 = 1L;
    struct S0 l_239 = {0x66516C38L,0x7196CBE4L,0L,0xDA1E0E5EE3B36A9DLL,0xFDA7L,0x21E62AD6L};
    unsigned char **l_243 = &l_184[1][5];
    union U1 **l_268 = &g_52;
    int *l_279 = &g_55;
    union U2 l_384 = {255UL};
    char l_408 = (-1L);
    int l_413[2];
    int l_466[4][4][1] = {{{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_413[i] = (-1L);
    if ((safe_add_func_uint16_t_u_u(((g_58 > ((safe_lshift_func_uint16_t_u_u((+0x80A8L), 6)) > (**g_125))) != l_166), l_166)))
    {
        unsigned short l_173 = 0xEAB1L;
        unsigned short *l_175[2][7] = {{(void*)0, &l_173, (void*)0, (void*)0, &l_173, (void*)0, &l_173}, {(void*)0, &l_173, (void*)0, (void*)0, &l_173, (void*)0, &l_173}};
        int l_176 = (-9L);
        char *l_177[8][4] = {{&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}, {&g_178, &g_178, &g_178, &g_178}};
        unsigned char *l_250 = &g_106;
        union U1 **l_266 = (void*)0;
        int *l_269 = (void*)0;
        int l_341 = (-1L);
        int l_412 = 0x036993F6L;
        struct S0 l_423[10] = {{0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}, {0xAA2B06BDL,0xF934ABF0L,-2L,0x538B94E0BD355996LL,0x3474L,0x1A43EE4EL}};
        union U1 *l_462 = &g_56;
        int *l_463 = &l_239.f0;
        int *l_464[6][7][5] = {{{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}, {{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}, {{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}, {{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}, {{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}, {{&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}, {&g_402.f0, &g_402.f2, &g_402.f0, &g_402.f2, &g_402.f0}}};
        long long l_465 = 0L;
        unsigned char l_467[9] = {246UL, 246UL, 5UL, 246UL, 246UL, 5UL, 246UL, 246UL, 5UL};
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_s((g_178 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(0x6C83L, (~(func_32((l_176 |= (func_32(func_32(l_173)) <= (((l_174 , l_174.f1) | 0x449B7457L) & ((g_112 , l_173) <= l_173))))) != l_174.f1)))), 1))), 1)))
        {
            union U1 *l_179 = &g_56;
            l_179 = (void*)0;
            return l_179;
        }
        else
        {
            union U1 **l_180 = &g_52;
            int l_196 = 2L;
            int *l_197 = &g_17;
            int l_259 = 0x5DB6DB1BL;
            short l_310 = 0x7AD4L;
            unsigned long long *l_311 = &g_56.f1;
            unsigned *l_320 = (void*)0;
            unsigned *l_321 = &g_322;
            char l_350 = 0xAAL;
            if (((*g_126) , (0xACL ^ (((*l_180) = &g_56) != &g_56))))
            {
                unsigned char *l_181 = &g_106;
                unsigned char **l_182[6][3] = {{(void*)0, (void*)0, &l_181}, {(void*)0, (void*)0, &l_181}, {(void*)0, (void*)0, &l_181}, {(void*)0, (void*)0, &l_181}, {(void*)0, (void*)0, &l_181}, {(void*)0, (void*)0, &l_181}};
                int **l_200 = &g_16;
                int l_219 = (-1L);
                union U1 *l_252[6] = {&g_56, &g_56, (void*)0, &g_56, &g_56, (void*)0};
                long long l_257 = 2L;
                union U1 ***l_267 = &l_180;
                int *l_270 = &g_66.f0;
                int l_281[5];
                unsigned char l_282 = 0x30L;
                long long *l_285 = &g_66.f3;
                short *l_293 = &g_66.f4;
                int *l_294 = &g_66.f5;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_281[i] = 0x78210C9AL;
                if ((!(((g_183 = l_181) != l_184[1][5]) < (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((--g_106), (safe_add_func_uint32_t_u_u(l_166, (l_195 == &g_178))))) <= (!func_32(l_196))), ((l_197 == ((*l_200) = (((*l_195) &= (safe_lshift_func_int8_t_s_u(0xAEL, 7))) , (void*)0))) , 0x94A489D5L))) <= g_14[0][1][2]), 0x97C5L)))))
                {
                    unsigned l_213 = 18446744073709551615UL;
                    char l_220[7][1][8] = {{{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}, {{0x90L, 0x61L, 0x8BL, (-5L), (-8L), (-5L), 0x8BL, 0x61L}}};
                    union U1 l_230 = {0xEC75F0F074A923E2LL};
                    int i, j, k;
                    (*g_125) = (*g_125);
                    for (g_178 = 21; (g_178 != (-8)); g_178 = safe_sub_func_int32_t_s_s(g_178, 9))
                    {
                        (*g_126) &= (safe_mul_func_uint8_t_u_u((g_14[0][1][2] != func_32(l_196)), (*g_183)));
                    }
                    l_176 = ((*g_126) = (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(func_32((g_66.f3 , ((g_221[2][0][4] |= (l_196 || (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(l_213, ((*l_195) = ((g_56.f1 , &g_65) != (void*)0)))) >= (safe_rshift_func_uint8_t_u_s(((l_213 | (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((*g_126))), ((l_173 & l_219) || 8L))) && g_14[0][1][2]) != g_66.f5)) || l_220[3][0][3]), l_219))), 0x5905E24FL)))) , l_213))), l_219)), 0x93D74D1D46F6AF20LL)));
                    for (l_173 = 0; (l_173 <= 5); l_173 = safe_add_func_int16_t_s_s(l_173, 9))
                    {
                        unsigned long long *l_226 = (void*)0;
                        unsigned long long *l_227 = &g_56.f1;
                        short *l_231 = &g_105[3];
                        int l_236[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_236[i] = 0x24A533F7L;
                        (*g_126) ^= (safe_rshift_func_int16_t_s_s((l_176 > l_213), 7));
                        (*g_126) = (((*l_227) |= (0x5DL & g_66.f1)) ^ (safe_lshift_func_int16_t_s_u((l_230 , ((*l_231) = g_221[2][0][4])), 0)));
                        l_236[1] = (safe_sub_func_uint8_t_u_u(((((4L <= g_178) , &g_106) != l_184[0][2]) && (g_105[1] | ((l_174.f1 && (((safe_lshift_func_uint16_t_u_u(l_220[3][0][3], (g_238 = func_32((l_237 = (l_174.f0 , func_32(l_236[1]))))))) , l_176) , l_236[1])) & (*g_183)))), g_105[3]));
                    }
                }
                else
                {
                    struct S0 *l_240 = &l_239;
                    int *l_251 = &l_176;
                    int l_258[1][8];
                    union U1 *l_263 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_258[i][j] = (-8L);
                    }
                    (*l_240) = l_239;
                    (*l_251) &= (g_66 , (safe_lshift_func_uint8_t_u_u((l_174 , ((+((l_243 = &l_184[1][5]) != ((((safe_add_func_int8_t_s_s(l_196, ((((safe_mod_func_uint8_t_u_u((func_32((safe_lshift_func_int16_t_s_s(((void*)0 == l_250), 1))) != (-1L)), l_239.f4)) < 0x01DBE71DB8A99B17LL) , 9UL) ^ g_66.f2))) ^ (-1L)) >= g_66.f1) , (void*)0))) & l_196)), l_196)));
                    if ((l_173 == l_219))
                    {
                        return l_252[3];
                    }
                    else
                    {
                        union U1 l_253 = {0UL};
                        int *l_254 = &l_239.f0;
                        int *l_255 = &l_176;
                        int *l_256[5][2] = {{&l_239.f0, &l_196}, {&l_239.f0, &l_196}, {&l_239.f0, &l_196}, {&l_239.f0, &l_196}, {&l_239.f0, &l_196}};
                        int i, j;
                        (*g_125) = func_41(l_166, l_253);
                        ++g_260;
                        return l_263;
                    }
                }
                (*l_270) = ((**g_125) = (safe_mul_func_int8_t_s_s((((*l_267) = l_266) == l_268), (l_176 ^= (l_269 != p_40)))));
                for (l_259 = 0; (l_259 == (-3)); l_259--)
                {
                    union U1 l_277 = {0UL};
                    int **l_278 = (void*)0;
                    int *l_280[8][8][3] = {{{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}, {{&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}, {&l_196, &l_219, &l_237}}};
                    int i, j, k;
                }
                (*l_294) |= (((((g_286 = ((*l_285) = l_176)) && g_14[0][4][4]) == (((*l_293) = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_126), ((&l_268 == (((0x90L & ((**l_243) = (safe_rshift_func_int16_t_s_s((*l_270), ((l_173 == ((*l_270) <= (*l_279))) && g_112))))) , 18446744073709551615UL) , l_267)) ^ (*l_270)))), g_56.f1)) > 0xFB20L)) ^ 0x9875L)) , (*g_126)) > (-4L));
            }
            else
            {
                int *l_295 = &g_66.f5;
                int *l_296 = &l_259;
                int *l_297 = &g_66.f2;
                int *l_298 = (void*)0;
                int *l_299 = &g_66.f2;
                int *l_300[3];
                unsigned long long l_301 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_300[i] = &g_66.f2;
                --l_301;
                (*l_295) = 0xC6FC5E1DL;
                for (g_66.f0 = 3; (g_66.f0 >= (-6)); g_66.f0--)
                {
                    char l_306 = 0xA0L;
                    unsigned long long *l_307 = &g_56.f1;
                    (*g_126) = 0xFEE43D0CL;
                    (*l_299) = (((0xBFL == func_32((((**l_243) ^= l_176) , (g_260 = func_32(func_32((l_306 |= g_105[3]))))))) ^ func_32(l_196)) == ((*l_307) = g_178));
                }
                return &g_56;
            }
            (*g_125) = func_41((((safe_mod_func_uint32_t_u_u(1UL, g_105[3])) < l_259) != ((((*l_311) = (l_196 = ((*l_279) > (l_310 & g_14[0][5][9])))) == (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_310, (((*l_195) = (l_239 , (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((*l_321) = (*l_279)), 1UL)), g_221[2][0][4])))) || l_176))), g_286))) > l_259)), g_323);
            for (g_56.f0 = (-18); (g_56.f0 >= 18); ++g_56.f0)
            {
                union U2 l_340 = {0x3AL};
                int l_346 = 0xA63BB351L;
                union U1 *l_354 = &g_323;
                for (l_239.f3 = 3; (l_239.f3 >= 0); l_239.f3 -= 1)
                {
                    short l_328[2][8][7] = {{{1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}}, {{1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}, {1L, (-10L), (-1L), (-1L), 0xEA74L, 0x31DEL, (-6L)}}};
                    int l_335 = 0xBB4B3D1CL;
                    int **l_339 = &l_197;
                    int ***l_338 = &l_339;
                    long long *l_342[9][8][3] = {{{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}, {{&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}, {&l_239.f3, &g_66.f3, (void*)0}}};
                    int *l_343 = (void*)0;
                    int *l_344 = (void*)0;
                    int *l_345 = &l_239.f0;
                    int i, j, k;
                    (*l_345) |= func_32((((*l_279) , (l_341 = (safe_mod_func_uint32_t_u_u(func_32(l_328[1][5][3]), (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((++g_260) != ((l_310 ^ ((((*l_338) = (void*)0) != (l_340 , &g_16)) , l_341)) && 0L)), g_58)), l_259)), 0x4C69L)))))) > l_310));
                    (*l_345) = ((*l_279) = l_346);
                    (*g_125) = p_40;
                    for (l_239.f4 = 0; (l_239.f4 >= 0); l_239.f4 -= 1)
                    {
                        int *l_347 = &l_196;
                        int *l_348[6];
                        short l_349 = 0x9A49L;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_348[i] = (void*)0;
                        ++g_351;
                        (*l_279) ^= func_32(g_14[l_239.f4][(l_239.f3 + 2)][(l_239.f4 + 2)]);
                        return l_354;
                    }
                }
            }
        }
        if (((l_176 == func_32((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((*l_279), (4294967287UL & (*g_126)))), (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((0L == ((((1L > (safe_rshift_func_uint16_t_u_u(0x5C30L, 15))) , ((g_322 , &g_178) != l_177[2][0])) , l_176) , 0xD83EEDDBL)), l_341)) | l_341), l_173)))) , g_17), g_323.f0)))) < 0UL))
        {
            union U1 *l_367[9][7] = {{&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}, {&l_174, &l_174, &l_174, &l_174, &l_174, (void*)0, &g_323}};
            int l_396[10];
            struct S0 l_400 = {-4L,0x7FE280A1L,0L,0x55108CFCD1ABB9C1LL,-9L,0L};
            short l_407[1];
            int *l_422 = &g_402.f0;
            int i, j;
            for (i = 0; i < 10; i++)
                l_396[i] = 0L;
            for (i = 0; i < 1; i++)
                l_407[i] = 0xA396L;
            for (g_322 = 0; (g_322 <= 0); g_322 += 1)
            {
                union U1 *l_368 = &l_174;
                return &g_323;
            }
            for (g_323.f0 = (-17); (g_323.f0 != 28); g_323.f0 = safe_add_func_int16_t_s_s(g_323.f0, 6))
            {
                unsigned long long l_373 = 18446744073709551615UL;
                short *l_392 = &g_105[3];
                int l_409 = 1L;
                int l_411 = 6L;
                int *l_428 = &l_411;
                for (g_66.f4 = 0; (g_66.f4 <= 24); ++g_66.f4)
                {
                    short l_376 = 0x77BFL;
                    short *l_381 = &g_105[6];
                    int l_389 = 0x41AD2717L;
                    int l_410[10] = {0x7EFE483CL, (-1L), 5L, 5L, (-1L), 0x7EFE483CL, (-1L), 5L, 5L, (-1L)};
                    int i;
                    (*l_279) = (**g_125);
                    if ((func_32((l_373 & (l_373 <= ((l_376 | (l_376 == (safe_add_func_int16_t_s_s(func_32((l_173 >= ((*l_381) = (safe_mul_func_uint8_t_u_u(l_341, (*g_183)))))), func_32((((0x26032137EBB4FB39LL < 0x6171F85479D56B03LL) && 1UL) > 1L)))))) == (*g_183))))) , 2L))
                    {
                        l_389 ^= (safe_add_func_uint8_t_u_u(l_373, (l_384 , (safe_sub_func_int32_t_s_s(func_32((safe_rshift_func_int8_t_s_s(l_376, 2))), 0xE4131CA7L)))));
                    }
                    else
                    {
                        char l_395[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_395[i] = 0xA7L;
                        (*l_279) = (safe_add_func_uint32_t_u_u((((*l_279) <= (((void*)0 != l_392) | (safe_rshift_func_uint16_t_u_s((l_396[3] |= ((g_56.f1 = 0xBD8B6551FC9181AFLL) < (l_395[1] == l_389))), 13)))) <= ((&g_65 == (g_397 , &g_65)) >= g_397.f0)), (*l_279)));
                        (*l_279) &= l_396[4];
                    }
                    if ((safe_add_func_int32_t_s_s((!l_341), (*g_126))))
                    {
                        struct S0 *l_401 = &g_397.f2;
                        (*l_401) = l_400;
                    }
                    else
                    {
                        struct S0 *l_403[6][5] = {{&l_400, &l_239, &g_66, &l_239, &l_400}, {&l_400, &l_239, &g_66, &l_239, &l_400}, {&l_400, &l_239, &g_66, &l_239, &l_400}, {&l_400, &l_239, &g_66, &l_239, &l_400}, {&l_400, &l_239, &g_66, &l_239, &l_400}, {&l_400, &l_239, &g_66, &l_239, &l_400}};
                        int *l_404 = &l_400.f2;
                        int *l_405 = &g_66.f0;
                        int *l_406[7];
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_406[i] = &l_341;
                        g_397.f2 = g_402;
                        g_418[8][1][0]--;
                    }
                }
                for (g_106 = 0; (g_106 < 16); g_106 = safe_add_func_uint64_t_u_u(g_106, 8))
                {
                    int *l_427[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_427[i] = &g_416;
                    (*l_279) ^= (l_412 = ((*l_422) <= 0xBFAD3105L));
                    for (l_412 = 1; (l_412 <= 4); l_412 += 1)
                    {
                        union U1 *l_429 = (void*)0;
                        int i, j, k;
                        l_428 = l_427[0];
                        (*l_428) &= (g_221[l_412][(l_412 + 1)][l_412] == (*l_422));
                        return l_429;
                    }
                    g_66.f5 |= (**g_125);
                }
                (*l_279) ^= ((~(safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((*l_422), (*l_422))) == (safe_mul_func_int8_t_s_s((0xEE32L < (*l_428)), (*l_428)))), 1))) ^ 1L);
                if ((*g_126))
                    continue;
            }
            if (((*l_422) || ((void*)0 != l_269)))
            {
                (*g_125) = (void*)0;
            }
            else
            {
                union U1 *l_440[10] = {&g_56, &g_323, &g_56, &g_323, &g_56, &g_323, &g_56, &g_323, &g_56, &g_323};
                int i;
                g_416 |= ((*l_422) = (func_32(func_32(l_423[1].f1)) == (g_178 ^= (((safe_mul_func_int16_t_s_s((func_32((*l_422)) | (+func_32((*l_279)))), ((void*)0 == &l_239))) , (void*)0) == g_438))));
                return l_440[3];
            }
        }
        else
        {
            unsigned short l_449 = 0x120CL;
            union U1 **l_455 = &g_52;
            short *l_460 = &g_105[2];
            int *l_461[4] = {&l_237, &l_413[0], &l_237, &l_413[0]};
            int i;
            (*l_279) = func_32(((safe_mul_func_uint16_t_u_u(l_423[1].f1, ((safe_sub_func_int64_t_s_s((*l_279), (~0UL))) ^ (g_418[8][1][0] |= ((safe_mul_func_int16_t_s_s(5L, ((safe_mod_func_int8_t_s_s(g_402.f5, l_449)) < ((*l_279) != (safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint32_t_u_u(l_449, l_449)) , g_397) , (void*)0) == (void*)0), 6)))))) , l_412))))) && (*l_279)));
            l_384.f2.f0 = ((*l_279) = ((l_423[1].f0 , (safe_unary_minus_func_uint32_t_u((l_266 == l_455)))) != (((safe_sub_func_uint16_t_u_u((g_402.f2 < (2L ^ func_32(g_55))), (g_66.f2 , ((safe_sub_func_uint64_t_u_u(func_32((((*l_460) |= (*l_279)) == l_176)), (-3L))) && (-5L))))) < (*g_183)) & g_286)));
            return l_462;
        }
        l_467[0]++;
    }
    else
    {
        unsigned l_486 = 0UL;
        int l_496 = 0x9F133274L;
        struct S0 l_499 = {0x63135163L,1L,0x7F23F979L,3L,0xB929L,0x47BC47CAL};
        struct S0 *l_500 = &l_239;
        for (g_402.f0 = 0; (g_402.f0 > (-13)); g_402.f0 = safe_sub_func_uint32_t_u_u(g_402.f0, 9))
        {
            unsigned l_472 = 18446744073709551609UL;
            union U1 *l_475 = &g_323;
            union U2 l_478[5] = {{0UL}, {1UL}, {0UL}, {1UL}, {0UL}};
            unsigned char *l_485 = (void*)0;
            int i;
            (*l_279) = func_32(g_418[8][1][0]);
            for (l_237 = 3; (l_237 >= 0); l_237 -= 1)
            {
                int *l_487 = &g_402.f5;
                union U1 ***l_488 = &l_268;
                ++l_472;
                for (g_415 = 0; (g_415 >= 0); g_415 -= 1)
                {
                    return l_475;
                }
                (*l_487) |= ((l_472 < (func_32(l_472) || (!(safe_sub_func_uint8_t_u_u((((l_478[3] , g_55) | (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(l_478[3].f0, l_478[3].f0)), (safe_sub_func_int8_t_s_s((l_485 == ((*l_243) = l_485)), l_486)))) == (**g_125)) != l_486)) ^ 0xE1L), (*l_279)))))) == g_105[6]);
                for (g_402.f2 = 0; (g_402.f2 <= 1); g_402.f2 += 1)
                {
                    union U1 *l_492 = &g_323;
                    for (g_402.f5 = 1; (g_402.f5 >= 0); g_402.f5 -= 1)
                    {
                        union U1 *l_489 = (void*)0;
                        int i, j, k;
                        (*l_279) &= (l_488 == &g_439);
                        if (g_221[(g_402.f5 + 2)][(g_402.f5 + 3)][(l_237 + 1)])
                            continue;
                        return l_489;
                    }
                    for (l_384.f0 = 0; (l_384.f0 <= 0); l_384.f0 += 1)
                    {
                        struct S0 l_490[2][6][10] = {{{{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}}, {{{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}, {{0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xC76F8E26L,-1L,1L,0x584C86EFBAF48BD2LL,0xF108L,6L}, {3L,0L,-2L,0xFEDBDF44D119071BLL,-1L,0L}, {0xCE52F805L,-1L,0xF681C85FL,0xB34B012D960DB2EBLL,0x06AEL,0xD5B689FBL}, {0xC8C9F083L,0x5ED279CEL,0xB7AC933FL,-1L,-1L,0xD0AA0889L}, {0xB75AF4E7L,0x69644A7FL,1L,0x4271C02737AC3367LL,-2L,0x3DA86BB1L}, {0xD3BB0B88L,0x47F8CB2AL,0L,-5L,0xFD23L,0x74F62859L}}}};
                        struct S0 *l_491 = &l_490[1][4][0];
                        int i, j, k;
                        (*g_125) = p_40;
                        (*l_491) = l_490[0][5][0];
                        return l_492;
                    }
                }
            }
            (*l_279) = func_32((safe_unary_minus_func_int32_t_s(((**g_125) &= l_486))));
        }
        for (g_402.f0 = (-27); (g_402.f0 < 5); g_402.f0 = safe_add_func_int32_t_s_s(g_402.f0, 1))
        {
            int *l_497 = &g_55;
            l_496 |= ((*g_126) |= ((*l_279) | g_14[0][5][4]));
            l_497 = &l_237;
            if ((*g_126))
                break;
            (*g_125) = g_498;
        }
        (*l_500) = l_499;
    }
    return (*l_268);
}







static int * func_41(short p_42, union U1 p_43)
{
    struct S0 *l_63 = (void*)0;
    struct S0 l_69 = {0x97315BB9L,-8L,0xE3254C1CL,0x85588CB35B2DFF54LL,0xEDF2L,0L};
    union U1 *l_86 = &g_56;
    union U1 *l_89[2];
    int *l_93[8][10][2] = {{{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}, {{(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}, {(void*)0, &g_66.f2}}};
    unsigned char l_113 = 0x40L;
    unsigned short l_154 = 0xB8D0L;
    unsigned long long l_159 = 18446744073709551615UL;
    int l_160 = (-2L);
    int *l_161 = &g_112;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_89[i] = (void*)0;
    for (g_54 = 0; (g_54 < (-12)); g_54 = safe_sub_func_uint16_t_u_u(g_54, 5))
    {
        unsigned long long l_62 = 0x140C503401FF3C8DLL;
        struct S0 **l_64[8][5][1] = {{{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}, {{&l_63}, {&l_63}, {&l_63}, {&l_63}, {&l_63}}};
        short *l_70[3][2][8] = {{{&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}, {&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}}, {{&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}, {&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}}, {{&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}, {&g_66.f4, &l_69.f4, &l_69.f4, &l_69.f4, &g_66.f4, &l_69.f4, &g_66.f4, &l_69.f4}}};
        int *l_71 = &g_66.f2;
        union U1 **l_84 = (void*)0;
        union U1 **l_85 = &g_52;
        union U1 **l_87 = (void*)0;
        union U1 **l_88[3][2][2] = {{{&l_86, &l_86}, {&l_86, &l_86}}, {{&l_86, &l_86}, {&l_86, &l_86}}, {{&l_86, &l_86}, {&l_86, &l_86}}};
        int *l_90 = &l_69.f5;
        int l_104 = 0xD083AED2L;
        int l_141[3][5][1] = {{{0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}}, {{0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}}, {{0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}, {0x04F7079DL}}};
        int i, j, k;
        g_65 = (l_62 , l_63);
        if (g_14[0][4][2])
            break;
        (*l_71) &= (((safe_lshift_func_uint16_t_u_s(((l_69 , g_55) ^ g_14[0][2][2]), 10)) || (l_69.f5 ^= g_66.f5)) && g_66.f5);
        if ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((0x7A6BAE6AL || ((*l_90) ^= ((g_66.f4 , (*l_71)) , ((*l_71) ^= ((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((l_69.f1 > p_42), (safe_mul_func_int8_t_s_s((((*l_85) = (void*)0) == (l_89[1] = (l_86 = l_86))), (p_42 > p_43.f0))))), g_55)) ^ 0x63FDL))))), 2)), g_56.f0)), (-1L))))
        {
            int *l_96 = &l_69.f5;
            int l_111 = 5L;
            union U1 **l_120 = &l_86;
            int l_134[2];
            unsigned l_135 = 4294967287UL;
            int i;
            for (i = 0; i < 2; i++)
                l_134[i] = (-6L);
            if ((*l_90))
                break;
            (*l_71) ^= func_32(p_43.f0);
            if (g_58)
                continue;
            for (p_43.f1 = 0; (p_43.f1 != 29); p_43.f1++)
            {
                for (l_69.f1 = 1; (l_69.f1 >= 0); l_69.f1 -= 1)
                {
                    int **l_97 = &l_96;
                    for (l_69.f5 = 1; (l_69.f5 >= 0); l_69.f5 -= 1)
                    {
                        unsigned l_94 = 0x74488338L;
                        union U1 ***l_95 = &l_84;
                        int i;
                        l_94 &= ((*l_71) &= (&g_54 != l_93[6][4][0]));
                        if (g_14[0][1][2])
                            continue;
                        (*l_95) = &l_89[l_69.f1];
                    }
                    (*l_97) = l_96;
                }
                for (g_66.f0 = (-8); (g_66.f0 <= (-15)); --g_66.f0)
                {
                    unsigned short l_102 = 0x69C2L;
                    int l_109 = (-5L);
                    unsigned char *l_127 = &l_113;
                    (*l_90) = ((safe_add_func_uint32_t_u_u(p_42, 0x0DF2DAC4L)) & (*l_90));
                    if ((l_102 = 0x418CC4BBL))
                    {
                        char l_103 = (-8L);
                        if (p_43.f0)
                            break;
                        (*l_71) |= p_42;
                        if (l_103)
                            break;
                        ++g_106;
                    }
                    else
                    {
                        char l_110 = 0xD7L;
                        --l_113;
                        (*l_90) |= (g_55 &= ((((((((safe_mul_func_int16_t_s_s(((((g_106 < g_56.f1) | 18446744073709551613UL) , &p_42) == &g_105[6]), (g_66 , (safe_add_func_uint32_t_u_u(l_109, func_32(g_56.f1)))))) > l_110) , (void*)0) != l_120) ^ 0x11774B49123F8D3DLL) , (void*)0) != (void*)0) | g_66.f4));
                        (*l_96) |= p_43.f0;
                        if (p_43.f0)
                            break;
                    }
                    (*g_126) = (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((((*l_127) = ((void*)0 != g_125)) >= (safe_mul_func_int16_t_s_s(g_105[3], g_112))), ((l_111 |= ((*l_90) |= (+(*g_126)))) != l_102))), ((safe_rshift_func_int16_t_s_u(((g_58 |= ((p_42 >= (((safe_sub_func_uint16_t_u_u(l_134[0], (g_66.f0 & p_43.f0))) <= 1L) > p_43.f1)) || g_66.f1)) , g_14[0][4][7]), 8)) <= p_42)));
                }
                --l_135;
            }
        }
        else
        {
            union U1 l_138 = {0x02A3EB5BA5489851LL};
            int l_139 = 0x255381E5L;
            int l_140 = 0x5D059B00L;
            int l_142 = (-5L);
            int l_143[5][3][5] = {{{0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}}, {{0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}}, {{0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}}, {{0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}}, {{0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}, {0xB115645DL, 7L, 7L, 0xB115645DL, 0x5C08ECFBL}}};
            unsigned short l_144 = 0UL;
            int i, j, k;
            l_139 = ((*l_71) = (l_138 , (**g_125)));
            l_144++;
        }
    }
    for (l_69.f5 = 10; (l_69.f5 == 8); --l_69.f5)
    {
        unsigned long long l_149 = 0xDE08B5220E952B72LL;
        l_149++;
        return &g_17;
    }
    (**g_125) |= ((safe_lshift_func_uint8_t_u_u((l_154 , (func_32((g_58 < (((func_32(g_58) , (g_14[0][1][2] , (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(g_14[0][1][2], g_112)), (g_66.f3 & l_159))))) && l_160) ^ 0x26646722DAFDEBBFLL))) , 9UL)), 4)) <= p_43.f0);
    return l_161;
}







static union U1 func_45(unsigned char p_46, short p_47)
{
    long long l_48 = 0xC531364F2CA12535LL;
    union U1 *l_51 = (void*)0;
    int *l_53[2][3][10] = {{{&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}, {&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}, {&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}}, {{&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}, {&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}, {&g_54, (void*)0, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, (void*)0, &g_54}}};
    int i, j, k;
    g_55 |= ((p_47 , l_48) , (g_54 = (l_48 > ((safe_rshift_func_int16_t_s_s(l_48, g_14[0][2][0])) != ((l_48 , (l_48 , l_51)) != (g_52 = g_52))))));
    return g_56;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_66.f5, "g_66.f5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_221[i][j][k], "g_221[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_323.f0, "g_323.f0", print_hash_value);
    transparent_crc(g_323.f1, "g_323.f1", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_397.f0, "g_397.f0", print_hash_value);
    transparent_crc(g_402.f0, "g_402.f0", print_hash_value);
    transparent_crc(g_402.f1, "g_402.f1", print_hash_value);
    transparent_crc(g_402.f2, "g_402.f2", print_hash_value);
    transparent_crc(g_402.f3, "g_402.f3", print_hash_value);
    transparent_crc(g_402.f4, "g_402.f4", print_hash_value);
    transparent_crc(g_402.f5, "g_402.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_414[i][j], "g_414[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_418[i][j][k], "g_418[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_514[i], "g_514[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_540.f1, "g_540.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_556[i], "g_556[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_636[i], "g_636[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_652.f0, "g_652.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_730[i], "g_730[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_731[i][j], "g_731[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_733, "g_733", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_749[i][j], "g_749[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_750, "g_750", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
