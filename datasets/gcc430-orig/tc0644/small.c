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
   unsigned f1;
   unsigned short f2;
   int f3;
   short f4;
   unsigned short f5;
};

struct S1 {
   unsigned short f0;
   unsigned short f1;
   struct S0 f2;
   int f3;
   unsigned f4;
   struct S0 f5;
   unsigned f6;
};


static int g_2 = 0L;
static struct S0 g_17[3][4] = {{{0L,1UL,0xA9B8L,-1L,-4L,0x8EA2L}, {0x4AL,0xC2489102L,1UL,-6L,2L,65526UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}}, {{0L,1UL,0xA9B8L,-1L,-4L,0x8EA2L}, {0x4AL,0xC2489102L,1UL,-6L,2L,65526UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}}, {{0L,1UL,0xA9B8L,-1L,-4L,0x8EA2L}, {0x4AL,0xC2489102L,1UL,-6L,2L,65526UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}, {7L,0x5B611FB8L,0xB5EAL,0x8C7FFFAAL,1L,65535UL}}};
static unsigned char g_33 = 2UL;
static unsigned *g_59[4] = {&g_17[0][3].f1, &g_17[0][3].f1, &g_17[0][3].f1, &g_17[0][3].f1};
static unsigned *g_60 = &g_17[0][3].f1;
static const unsigned short *g_81[8] = {(void*)0, &g_17[0][3].f2, (void*)0, &g_17[0][3].f2, (void*)0, &g_17[0][3].f2, (void*)0, &g_17[0][3].f2};
static struct S1 g_84[6] = {{0x1434L,0xBA41L,{0x49L,0xC5D29228L,0x1FC5L,0xAAA13A23L,0x15C0L,65532UL},0x4E934167L,0xD2503B3CL,{0x4AL,4294967295UL,0x5FDEL,0L,1L,0x73B7L},0x9658AA49L}, {0x1434L,0xBA41L,{0x49L,0xC5D29228L,0x1FC5L,0xAAA13A23L,0x15C0L,65532UL},0x4E934167L,0xD2503B3CL,{0x4AL,4294967295UL,0x5FDEL,0L,1L,0x73B7L},0x9658AA49L}, {0x1A67L,65535UL,{0x37L,9UL,0x5384L,-9L,-4L,0UL},-1L,0x28B7FD9BL,{-1L,4294967295UL,0x5CB6L,0x384D564CL,-1L,0x3DE1L},1UL}, {0x1434L,0xBA41L,{0x49L,0xC5D29228L,0x1FC5L,0xAAA13A23L,0x15C0L,65532UL},0x4E934167L,0xD2503B3CL,{0x4AL,4294967295UL,0x5FDEL,0L,1L,0x73B7L},0x9658AA49L}, {0x1434L,0xBA41L,{0x49L,0xC5D29228L,0x1FC5L,0xAAA13A23L,0x15C0L,65532UL},0x4E934167L,0xD2503B3CL,{0x4AL,4294967295UL,0x5FDEL,0L,1L,0x73B7L},0x9658AA49L}, {0x1A67L,65535UL,{0x37L,9UL,0x5384L,-9L,-4L,0UL},-1L,0x28B7FD9BL,{-1L,4294967295UL,0x5CB6L,0x384D564CL,-1L,0x3DE1L},1UL}};
static struct S1 **g_89 = (void*)0;
static int *g_115 = (void*)0;
static const char g_127[9] = {0xD5L, 1L, 0xD5L, 1L, 0xD5L, 1L, 0xD5L, 1L, 0xD5L};
static const char *g_126 = &g_127[2];
static unsigned short g_147 = 65527UL;
static struct S1 *g_192 = &g_84[4];
static struct S1 **g_191 = &g_192;
static short *g_224 = (void*)0;
static int g_248 = 9L;
static const struct S1 *g_253[9][10][2] = {{{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}, {{&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}, {&g_84[3], (void*)0}}};
static const struct S1 **g_252 = &g_253[1][6][1];
static struct S0 *g_339 = (void*)0;
static struct S0 **g_338 = &g_339;
static unsigned short *g_344 = &g_84[4].f2.f5;
static unsigned char g_346 = 252UL;
static unsigned char *g_423 = &g_33;
static unsigned char **g_422 = &g_423;
static const unsigned *g_443 = &g_84[4].f5.f1;
static const unsigned **g_442 = &g_443;
static short *g_450 = &g_17[0][3].f4;
static int *g_468[5] = {&g_248, (void*)0, &g_248, (void*)0, &g_248};
static int ***g_471 = (void*)0;
static short **g_573 = &g_224;
static unsigned char g_580 = 0x68L;



static int func_1(void);
static int * func_5(int * p_6);
static int * func_7(char p_8, int * p_9, int p_10, int * p_11);
static int * func_13(int p_14, int * p_15, struct S0 p_16);
static int func_24(int p_25, unsigned p_26);
static unsigned func_27(int p_28);
static int * func_35(unsigned p_36, int * p_37, unsigned char p_38);
static const unsigned short func_63(short p_64, struct S0 p_65, char p_66, unsigned p_67, unsigned p_68);
static struct S0 func_70(unsigned * const * p_71, short * p_72, const unsigned ** p_73, short p_74);
static unsigned * const * func_75(const unsigned short * p_76, unsigned * p_77, struct S0 p_78, unsigned p_79, int p_80);
static int func_1(void)
{
    unsigned short l_12 = 0x4F54L;
    unsigned short l_693 = 1UL;
    unsigned l_696 = 4294967295UL;
    struct S0 ** const *l_697[6] = {&g_338, &g_338, &g_338, &g_338, &g_338, &g_338};
    int l_698 = 0xF84E77A6L;
    struct S1 *l_700 = &g_84[4];
    unsigned l_706[8][2][7] = {{{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}, {{0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}, {0UL, 0UL, 0UL, 4294967295UL, 0xDD28A3ECL, 0x278A83B8L, 0x72FF0336L}}};
    short *l_717 = &g_17[0][3].f4;
    int i, j, k;
    for (g_2 = 0; (g_2 >= (-29)); g_2--)
    {
        unsigned short l_506 = 65535UL;
        int *l_507 = (void*)0;
        int **l_690[5];
        struct S0 l_702 = {1L,0x77EA4F91L,7UL,0L,0L,0xD1DFL};
        int ***l_712[2][9][3] = {{{&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}}, {{&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}, {&l_690[4], &l_690[4], &l_690[1]}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_690[i] = &g_115;
        g_468[2] = func_5(func_7(l_12, func_13(((void*)0 == &g_2), &g_2, g_17[0][3]), l_506, l_507));

        ;
        l_698 = (safe_add_func_int8_t_s_s((((((void*)0 != &g_127[2]) & (**g_422)) != func_63(l_12, g_17[0][2], l_693, (safe_rshift_func_uint8_t_u_s(l_696, 2)), ((&g_338 != l_697[5]) ^ l_12))) || 0L), (**g_422)));

        ;
        if (l_698)
        {
            struct S1 *l_699[5];
            int l_701 = 0x3A739CADL;
            int l_720 = 0x15751545L;
            int *l_721[9] = {&g_84[4].f2.f3, (void*)0, &g_84[4].f2.f3, (void*)0, &g_84[4].f2.f3, (void*)0, &g_84[4].f2.f3, (void*)0, &g_84[4].f2.f3};
            char l_724 = 0x17L;
            int i;
            for (i = 0; i < 5; i++)
                l_699[i] = &g_84[4];
            l_700 = l_699[2];
            if (l_701)
                continue;
            for (g_580 = 1; (g_580 <= 5); g_580 += 1)
            {
                char *l_703 = (void*)0;
                char *l_704 = (void*)0;
                char *l_705 = &g_84[4].f2.f0;
                int l_707 = 3L;
                short **l_718 = &l_717;
                unsigned char ** const l_719 = &g_423;
                unsigned l_723 = 0UL;
                l_706[1][1][1] = ((l_698 = l_701) != func_63(l_701, l_702, ((*l_705) = (*g_126)), l_696, (**g_442)));
                l_707 = (*g_115);
                l_720 = (l_701 = ((((*g_450) = (((-3L) >= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((void*)0 != l_712[1][7][2]), ((0xDDF6L < (safe_lshift_func_int8_t_s_s((*g_126), 3))) == 0x9F21EF10L))), (safe_mod_func_int16_t_s_s(((((*l_718) = l_717) == (void*)0) & (((l_719 != &g_423) & (**g_422)) != l_707)), 0x74A3L))))) != (*g_115))) == l_707) == (*g_60)));
                if (l_707)
                    continue;
                for (l_696 = 0; (l_696 <= 7); l_696 += 1)
                {
                    for (g_346 = 0; (g_346 <= 1); g_346 += 1)
                    {
                        unsigned short l_722[10] = {0x6D48L, 0x6D48L, 0x29BEL, 0x6D48L, 0x6D48L, 0x29BEL, 0x6D48L, 0x6D48L, 0x29BEL, 0x6D48L};
                        int i;
                        g_468[2] = (l_721[7] = &l_720);
                        l_723 = l_722[6];
                        l_707 = (l_724 = (*g_115));
                    }
                }
            }



            return g_84[4].f1;


        }
        else
        {
            (*g_192) = (*l_700);
            if (l_12)
                break;
        }
    }

    ;

    ;

    g_17[0][3] = g_17[0][3];
    return l_696;
}







static int * func_5(int * p_6)
{
    int l_623 = 1L;
    const short *l_628 = (void*)0;
    const short **l_627 = &l_628;
    unsigned l_639 = 0x01ABD426L;
    int *l_641 = &l_623;
    unsigned short l_677[4] = {0xA03DL, 65535UL, 0xA03DL, 65535UL};
    struct S1 *l_683 = &g_84[3];
    int i;
    for (g_33 = 0; (g_33 != 60); ++g_33)
    {
        char *l_624 = &g_84[4].f5.f0;
        char *l_631 = &g_17[0][3].f0;
        const int l_636 = (-1L);
        int l_637 = 0xABE1ED88L;
        struct S0 l_638 = {0x0BL,0x0E3A9CE9L,0UL,6L,0x3B80L,65528UL};
        int **l_640[6];
        struct S0 *l_642 = &l_638;
        unsigned short *l_664 = &g_84[4].f2.f5;
        struct S1 l_684 = {1UL,65531UL,{-5L,0x832D39F3L,65529UL,2L,0L,0x1022L},0L,4UL,{0xCDL,0xE7E65981L,65535UL,1L,0L,8UL},2UL};
        int *l_685 = &l_638.f3;
        int i;
        for (i = 0; i < 6; i++)
            l_640[i] = &g_468[2];
    }
    return p_6;


}







static int * func_7(char p_8, int * p_9, int p_10, int * p_11)
{
    char l_513 = 0L;
    int l_520 = (-1L);
    unsigned char ***l_531 = &g_422;
    unsigned short **l_552 = &g_344;
    short l_579[8] = {9L, 9L, (-1L), 9L, 9L, (-1L), 9L, 9L};
    struct S0 *l_581[6][8] = {{&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}, {&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}, {&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}, {&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}, {&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}, {&g_17[0][3], &g_84[4].f2, &g_17[1][1], &g_84[4].f2, &g_17[0][3], &g_17[0][0], &g_17[1][1], &g_17[0][0]}};
    int **l_617 = &g_115;
    int *** const *l_619[3][8] = {{&g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0}, {&g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0}, {&g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0, &g_471, (void*)0}};
    int *** const **l_620 = &l_619[1][0];
    int i, j;
    for (g_33 = 13; (g_33 >= 46); ++g_33)
    {
        unsigned char ***l_512 = &g_422;
        struct S0 l_521 = {0x1AL,0x16ECF382L,0x95E0L,-10L,0x770FL,0x332EL};
        char l_522 = 0L;
        unsigned short **l_523 = &g_344;
        unsigned **l_560[1][10] = {{(void*)0, &g_59[0], &g_59[2], &g_59[2], &g_59[0], (void*)0, &g_59[0], &g_59[2], &g_59[2], &g_59[0]}};
        int l_577 = (-1L);
        int l_612 = 8L;
        int i, j;
    }
    if (g_33)
        goto lbl_618;
lbl_618:
    (*l_617) = p_9;

    ;
    (*p_9) = (&g_471 != ((*l_620) = l_619[2][4]));
    for (g_248 = 3; (g_248 >= 0); g_248 -= 1)
    {
        for (g_346 = 0; (g_346 <= 3); g_346 += 1)
        {
            (*g_338) = l_581[2][2];
        }
    }
    return (*l_617);


}







static int * func_13(int p_14, int * p_15, struct S0 p_16)
{
    int *l_29 = (void*)0;
    int **l_474 = &g_468[1];
    int ***l_473 = &l_474;
    const unsigned char *l_504 = &g_33;
    const unsigned char **l_503 = &l_504;
    int *l_505 = &g_84[4].f3;
    for (p_14 = (-24); (p_14 > (-29)); p_14 = safe_sub_func_int32_t_s_s(p_14, 4))
    {
        const int l_22 = (-7L);
        int **l_470 = (void*)0;
        int ***l_469 = &l_470;
        int l_477 = 1L;
        unsigned char *l_502 = (void*)0;
        unsigned char **l_501 = &l_502;
    }
    return l_505;


}







static int func_24(int p_25, unsigned p_26)
{
    const unsigned char l_461 = 0x5CL;
    unsigned short l_464[8][1][2] = {{{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}, {{0x7078L, 0UL}}};
    int l_465[6] = {0xF1A6FC8AL, 0xF39FEC05L, 0xF1A6FC8AL, 0xF39FEC05L, 0xF1A6FC8AL, 0xF39FEC05L};
    int l_466 = 0x2591FF20L;
    int **l_467[2][4];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_467[i][j] = &g_115;
    }
    l_466 = (l_465[5] = (safe_sub_func_int8_t_s_s(((l_461 < l_461) != ((*g_60) = (safe_rshift_func_uint8_t_u_u(l_464[3][0][0], p_26)))), (l_464[3][0][1] != p_25))));
    g_468[2] = (g_115 = &l_465[5]);

    ;

    g_468[2] = &g_248;
    g_468[3] = func_35(p_25, (g_115 = &g_248), ((**g_422) = p_25));

    ;
    return (*g_115);


}







static unsigned func_27(int p_28)
{
    short l_31 = 0xF8DCL;
    unsigned *l_32 = &g_17[0][3].f1;
    unsigned short *l_48[10][8][1] = {{{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}, {{&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}, {&g_17[0][3].f2}}};
    int l_49 = 1L;
    unsigned **l_58[6][6] = {{&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}, {&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}, {&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}, {&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}, {&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}, {&l_32, &l_32, &l_32, &l_32, (void*)0, &l_32}};
    short *l_61[2][1];
    int l_62 = (-5L);
    unsigned l_69 = 0x9900F1D9L;
    struct S0 l_82[8][4] = {{{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}, {{-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}, {4L,0xCBFC796DL,0x318EL,1L,0x1FE8L,0xE9C2L}, {-1L,4294967286UL,1UL,0xEFBDD559L,-1L,65535UL}}};
    const unsigned *l_226 = &l_82[0][2].f1;
    const unsigned **l_225 = &l_226;
    int *l_456 = &l_82[0][2].f3;
    int **l_457 = &g_115;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_61[i][j] = &l_31;
    }
    g_33 = (g_17[0][3].f3 = (g_17[0][3].f3 <= ((*l_32) = l_31)));
    (*l_456) = (safe_unary_minus_func_uint32_t_u(((((*l_457) = func_35(((+((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_17[0][3].f2, ((safe_unary_minus_func_uint16_t_u((l_49 = (safe_rshift_func_int16_t_s_u((-8L), 11))))) >= (safe_add_func_int32_t_s_s(((*l_456) = (safe_div_func_int16_t_s_s((p_28 || (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_62 = ((g_59[2] = l_32) != g_60)), 1)), 2))), func_63((l_69 = g_17[0][3].f1), func_70(func_75(g_81[5], g_60, l_82[0][2], (*g_60), g_17[0][3].f3), g_224, l_225, l_82[0][2].f5), l_82[0][2].f1, l_82[0][2].f1, p_28)))), p_28))))) || 4UL), 0x20B9L)), 7)) ^ p_28)) != g_127[2]), l_32, l_31)) != (void*)0) < (-3L))));

    ;
    ;




    return (**l_457);
}







static int * func_35(unsigned p_36, int * p_37, unsigned char p_38)
{
    return p_37;


}







static const unsigned short func_63(short p_64, struct S0 p_65, char p_66, unsigned p_67, unsigned p_68)
{
    unsigned short l_388[5][10][5] = {{{0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}}, {{0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}}, {{0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}}, {{0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}}, {{0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}, {0x37CFL, 1UL, 3UL, 65535UL, 0xD4DEL}}};
    int * const l_426 = &g_84[4].f3;
    unsigned * const *l_440 = &g_60;
    struct S0 l_451 = {0x25L,4294967295UL,0xFD1BL,-1L,0L,0xD302L};
    int *l_455 = &g_84[4].f5.f3;
    int i, j, k;
    for (p_65.f2 = (-21); (p_65.f2 > 5); p_65.f2 = safe_add_func_uint32_t_u_u(p_65.f2, 6))
    {
        char l_372 = 0L;
        unsigned char *l_373 = &g_346;
        char *l_389 = &g_17[0][3].f0;
        int l_409[5][10][5] = {{{0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}}, {{0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}}, {{0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}}, {{0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}}, {{0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}, {0x57490011L, 0x7A346C01L, 0x9B9B3982L, 0x7C87DA2CL, 0xBDC0FDD7L}}};
        int i, j, k;
        if (p_68)
            break;
        p_65.f3 = ((((*l_373) = (1L & (p_64 & l_372))) != ((*l_389) = (safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_372, ((((l_388[3][9][4] | (((l_372 >= 249UL) & l_388[2][5][4]) == (p_65.f0 & (*g_115)))) != p_67) | l_388[2][2][2]) > g_84[4].f2.f4))), l_388[3][9][4])), l_388[3][9][4])), 0UL)), p_66)), (*g_60))) < 1L), p_67)))) > l_372);
        for (g_346 = 25; (g_346 != 37); g_346 = safe_add_func_int8_t_s_s(g_346, 2))
        {
            int **l_392 = &g_115;
            (*l_392) = &g_2;

            ;
        }
        for (p_65.f1 = (-15); (p_65.f1 >= 15); p_65.f1 = safe_add_func_int8_t_s_s(p_65.f1, 5))
        {
            unsigned short l_403[7][4][9] = {{{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}, {{1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}, {1UL, 5UL, 65535UL, 65535UL, 1UL, 0xEA1EL, 0UL, 0xEA1EL, 1UL}}};
            int *l_408[7][2] = {{&g_2, &g_2}, {&g_2, &g_2}, {&g_2, &g_2}, {&g_2, &g_2}, {&g_2, &g_2}, {&g_2, &g_2}, {&g_2, &g_2}};
            int i, j, k;
            l_409[3][2][0] = ((safe_lshift_func_uint8_t_u_s(p_65.f3, (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(l_403[1][0][7], p_65.f2)) != g_84[4].f2.f2) ^ (safe_sub_func_uint8_t_u_u((1UL ^ p_65.f4), (g_84[4].f5.f0 = (&p_64 != (g_224 = &p_64)))))), 6)), (safe_add_func_uint32_t_u_u((((1UL == 0L) > l_403[0][0][7]) && l_372), (-6L))))))) || 0UL);

            ;
        }
    }


    for (p_65.f2 = 0; (p_65.f2 >= 11); p_65.f2 = safe_add_func_int32_t_s_s(p_65.f2, 2))
    {
        int *l_412 = &g_248;
        int **l_413 = (void*)0;
        int **l_414[7] = {(void*)0, (void*)0, &l_412, (void*)0, (void*)0, &l_412, (void*)0};
        int i;
        g_115 = l_412;

        ;
        for (p_65.f1 = 0; (p_65.f1 <= 1); p_65.f1 += 1)
        {
            struct S0 *l_415 = &g_84[4].f5;
            int **l_427 = (void*)0;
            int **l_428[7] = {&l_412, &l_412, &l_412, &l_412, &l_412, &l_412, &l_412};
            int **l_429 = &g_115;
            short *l_449 = &g_17[0][3].f4;
            int i;
            (*l_415) = g_17[2][0];
        }
    }
    (*l_455) = (*l_426);
    l_455 = l_426;

    ;
    return p_65.f2;


}







static struct S0 func_70(unsigned * const * p_71, short * p_72, const unsigned ** p_73, short p_74)
{
    int *l_227 = &g_2;
    int **l_228 = &g_115;
    int **l_229 = &l_227;
    const char **l_241 = &g_126;
    const char ***l_240[1];
    struct S0 *l_264 = &g_17[0][3];
    int l_275 = 1L;
    struct S1 l_321[9] = {{0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}, {0xD951L,0x64A8L,{0x4FL,0xFCD8A2ACL,0xABBDL,-1L,0x9C1EL,65535UL},0x43D72817L,5UL,{-5L,0xFA2BEF01L,0UL,1L,7L,0x5110L},0xE3B479E9L}};
    unsigned short *l_343 = &l_321[8].f0;
    int i;
    for (i = 0; i < 1; i++)
        l_240[i] = &l_241;
lbl_245:
    (*l_229) = ((*l_228) = l_227);

    ;
    for (g_33 = 0; (g_33 >= 27); g_33++)
    {
        unsigned l_232[1];
        int **l_263 = (void*)0;
        const int *l_281 = &g_248;
        int l_302[7][10] = {{(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}, {(-1L), (-1L), 6L, 0x7E63A4FBL, 0x0326982EL, 7L, 1L, (-1L), 0x30BF8AFAL, 1L}};
        struct S0 l_307 = {-10L,0x24959076L,65526UL,-1L,0x09A5L,0x0DD6L};
        int i, j;
        for (i = 0; i < 1; i++)
            l_232[i] = 0xC44AEB92L;
        if (l_232[0])
            break;
        for (p_74 = 0; (p_74 >= (-14)); p_74 = safe_sub_func_int8_t_s_s(p_74, 6))
        {
            char *l_239 = &g_84[4].f5.f0;
            char **l_238[5];
            char ***l_237 = &l_238[3];
            unsigned l_242 = 0x3795DC2FL;
            int i;
            for (i = 0; i < 5; i++)
                l_238[i] = &l_239;
            (*l_228) = &g_2;

            ;
            l_242 = ((*g_60) <= ((safe_add_func_int16_t_s_s((l_237 != l_240[0]), p_74)) == p_74));
            for (l_242 = (-19); (l_242 >= 52); l_242 = safe_add_func_uint16_t_u_u(l_242, 3))
            {
                const struct S1 *l_250 = &g_84[4];
                const struct S1 **l_249 = &l_250;
                int **l_261 = &g_115;
                if (p_74)
                    goto lbl_245;
                for (g_147 = 3; (g_147 > 7); g_147 = safe_add_func_uint8_t_u_u(g_147, 3))
                {
                    int *l_254 = &g_84[4].f2.f3;
                    for (g_248 = 0; (g_248 <= 5); g_248 += 1)
                    {
                        const struct S1 ***l_251[4] = {&l_249, &l_249, &l_249, &l_249};
                        int i;
                        g_252 = l_249;

                        ;
                    }
                    (*l_254) = (*g_115);
                }


                for (g_147 = (-28); (g_147 <= 48); g_147 = safe_add_func_uint8_t_u_u(g_147, 7))
                {
                    unsigned short l_262[5][8][6] = {{{0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}}, {{0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}}, {{0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}}, {{0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}}, {{0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}, {0x72A1L, 0x4337L, 65535UL, 0x2451L, 0x47FCL, 0x6ABDL}}};
                    int i, j, k;
                    if (((*g_115) | ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((*g_126), ((void*)0 == l_261))), 6)) & (((l_242 <= 6L) < p_74) < l_262[2][2][0]))))
                    {
                        if (l_242)
                            break;
                        (*l_261) = &g_248;

                        ;
                    }
                    else
                    {
                        g_115 = &g_248;

                        ;
                    }

                    ;
                }
                if (l_232[0])
                    break;

            }

            ;
        }
    }

    ;
    for (g_248 = 0; (g_248 < (-4)); g_248 = safe_sub_func_int8_t_s_s(g_248, 8))
    {
        struct S0 *l_352 = (void*)0;
        int l_364 = (-1L);
        int l_367 = 0x5C77ACF0L;
        struct S0 l_369[3][8] = {{{0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}}, {{0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}}, {{0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}, {0x09L,4294967293UL,0UL,0x1DEB0F93L,0xE7E7L,0x54A5L}, {0x21L,1UL,1UL,0x63B3CED3L,0xE8A4L,65533UL}}};
        int i, j;
        for (g_33 = 0; (g_33 < 17); g_33 = safe_add_func_int8_t_s_s(g_33, 5))
        {
            char l_329 = 0xBAL;
            int l_330 = 6L;
            unsigned l_361 = 0x0EEBCFCBL;
            unsigned *l_365[7][3] = {{(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}, {(void*)0, &l_321[8].f5.f1, &g_84[4].f5.f1}};
            int l_366 = (-8L);
            struct S0 l_368[9] = {{0L,0x9E6C42E8L,0UL,0x28B86B13L,0x2D91L,0xAA12L}, {0xA3L,0x1576D313L,0xD1EAL,0xE4AB8086L,1L,0x5A20L}, {0L,0x9E6C42E8L,0UL,0x28B86B13L,0x2D91L,0xAA12L}, {0xA3L,0x1576D313L,0xD1EAL,0xE4AB8086L,1L,0x5A20L}, {0L,0x9E6C42E8L,0UL,0x28B86B13L,0x2D91L,0xAA12L}, {0xA3L,0x1576D313L,0xD1EAL,0xE4AB8086L,1L,0x5A20L}, {0L,0x9E6C42E8L,0UL,0x28B86B13L,0x2D91L,0xAA12L}, {0xA3L,0x1576D313L,0xD1EAL,0xE4AB8086L,1L,0x5A20L}, {0L,0x9E6C42E8L,0UL,0x28B86B13L,0x2D91L,0xAA12L}};
            int i, j;
            for (g_147 = (-25); (g_147 != 14); g_147++)
            {
                unsigned l_326[1][1];
                char *l_331[7];
                unsigned short l_335 = 65529UL;
                const struct S0 *l_353[10][6][4] = {{{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}, {{&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}, {&g_84[4].f2, &g_17[1][3], &g_84[4].f5, &g_17[0][3]}}};
                int l_355[8][4] = {{(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}, {(-1L), (-1L), (-8L), 0x220BE2BBL}};
                struct S1 l_358 = {0x6E98L,0x0A65L,{0x40L,0xDB571F62L,0UL,0x29A4D8FAL,-1L,0x36C5L},0x7D89F792L,0x43EFFCFEL,{0xA4L,4294967295UL,1UL,0xC81B8B2BL,0x726DL,65535UL},0x79D8EDF3L};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_326[i][j] = 9UL;
                }
                for (i = 0; i < 7; i++)
                    l_331[i] = &g_17[0][3].f0;
                if ((0xE622L != (safe_lshift_func_int16_t_s_s(0x0337L, 15))))
                {
                    struct S1 *l_322 = &l_321[4];
                    for (p_74 = 0; (p_74 == 28); p_74 = safe_add_func_int16_t_s_s(p_74, 8))
                    {
                        (*l_229) = &g_2;

                        ;
                    }
                    for (l_275 = 0; (l_275 <= 10); l_275 = safe_add_func_int32_t_s_s(l_275, 9))
                    {
                        int *l_323 = &l_321[8].f5.f3;
                        (**g_191) = l_321[8];
                        (*g_191) = l_322;

                        ;
                        (*l_323) = (*g_115);
                    }
                    if (p_74)
                        break;
                }
                else
                {
                    int *l_327[3];
                    unsigned short *l_328[6][4][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                    unsigned short l_340 = 0xCEDEL;
                    struct S0 l_356 = {0x06L,0x9DCE8454L,0x5518L,-1L,7L,0x6CDAL};
                    struct S0 *l_357 = &g_84[4].f2;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_327[i] = &l_321[8].f2.f3;
                    g_84[4].f5.f3 = (safe_lshift_func_uint8_t_u_u(0xACL, l_326[0][0]));
                    if ((p_74 <= ((l_329 = l_326[0][0]) ^ ((l_326[0][0] == 1UL) ^ l_330))))
                    {
                        short *l_332 = &l_321[8].f5.f4;
                        l_340 = ((l_331[4] != &l_329) < ((l_330 | (((*l_332) = l_326[0][0]) | (safe_mod_func_int32_t_s_s(l_335, (**p_71))))) != (0xBCEFL ^ (g_84[4].f2.f5 = (safe_rshift_func_uint16_t_u_u(((g_338 != &g_339) ^ (*g_126)), 0))))));
                    }
                    else
                    {
                        unsigned char *l_345 = &g_346;
                        int l_354 = 0x69E69247L;
                        l_355[3][3] = (safe_sub_func_uint32_t_u_u((((((*l_345) = ((g_344 = l_343) == &l_335)) && ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*g_60) != (65535UL && (safe_unary_minus_func_int16_t_s(2L)))), (*g_126))), ((**p_73) >= (l_352 != l_353[1][1][0])))) == l_354)) || 0xFDL) && p_74), l_326[0][0]));

                        ;
                        (*l_229) = &g_248;

                        ;
                    }
                    (*l_357) = l_356;
                    g_84[4].f5.f3 = (*g_115);
                }
                (**g_191) = l_358;
            }
            if ((((safe_add_func_int16_t_s_s(l_329, l_361)) > ((((safe_mod_func_uint32_t_u_u((**p_71), (*g_60))) | p_74) <= (**l_229)) ^ (~l_364))) == (+(((l_330 = 0x134F6D5FL) | ((l_367 = (l_366 = ((0x1CDFL & l_364) == p_74))) == 0xE5D3F1EBL)) ^ 0L))))
            {
                return l_368[7];



            }
            else
            {
                g_84[4].f2 = l_369[2][3];
            }
        }
    }

    ;
    ;
    ;
    (*l_228) = (*l_229);
    return (*l_264);



}







static unsigned * const * func_75(const unsigned short * p_76, unsigned * p_77, struct S0 p_78, unsigned p_79, int p_80)
{
    struct S1 *l_83 = &g_84[4];
    const int *l_93 = &g_84[4].f3;
    unsigned l_97[5][7][5] = {{{0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}}, {{0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}}, {{0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}}, {{0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}}, {{0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}, {0x697DB561L, 0xAFD11974L, 0UL, 0xAFD11974L, 0x697DB561L}}};
    unsigned *l_98 = &g_84[4].f5.f1;
    int *l_114 = &g_84[4].f3;
    short *l_143 = &g_84[4].f5.f4;
    int i, j, k;
lbl_118:
    for (p_80 = 0; (p_80 <= 7); p_80 += 1)
    {
        struct S1 **l_85 = &l_83;
        struct S0 l_88 = {-3L,1UL,0x2EDBL,0x6A152264L,0L,0xE7A2L};
        int *l_90 = &g_17[0][3].f3;
        int **l_94 = &l_90;
        char *l_95 = (void*)0;
        char *l_96 = &g_17[0][3].f0;
        (*l_85) = l_83;
        for (p_78.f5 = 0; (p_78.f5 <= 5); p_78.f5 += 1)
        {
            for (p_78.f2 = 0; (p_78.f2 <= 5); p_78.f2 += 1)
            {
                int *l_86 = &g_84[4].f2.f3;
                struct S0 *l_87[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_87[i] = &g_84[4].f5;
                (*l_86) = g_84[4].f5.f2;
                l_88 = g_84[4].f2;
            }
        }
        (*l_90) = (&l_83 != g_89);
        if ((g_84[4].f3 = ((((*l_96) = (safe_div_func_uint8_t_u_u((l_93 != ((*l_94) = l_90)), g_84[4].f0))) < (l_97[4][5][4] && g_84[4].f6)) | (l_98 == g_60))))
        {
            (**l_94) = ((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((~(&p_80 != l_98)), 0x8FCCL)), 1)), (-2L))), g_84[4].f4)) != p_78.f5);
        }
        else
        {
            struct S1 l_107 = {0x39D9L,2UL,{0xC1L,4294967291UL,4UL,2L,9L,0xC048L},0x29CDFBC4L,0UL,{0L,0x3735208EL,0x8861L,0x543D0462L,-3L,0xA05EL},0x5DA64128L};
            (**l_85) = l_107;
        }
    }
    for (p_80 = 0; (p_80 >= 18); p_80++)
    {
        int *l_112 = &g_17[0][3].f3;
        int **l_113[1];
        short *l_133[5][10][3] = {{{&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}}, {{&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}}, {{&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}}, {{&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}}, {{&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}, {&g_17[0][3].f4, &g_84[4].f2.f4, &g_84[4].f2.f4}}};
        struct S1 *l_187 = (void*)0;
        const int *l_221[5][3] = {{&g_2, &g_17[0][3].f3, &g_84[4].f2.f3}, {&g_2, &g_17[0][3].f3, &g_84[4].f2.f3}, {&g_2, &g_17[0][3].f3, &g_84[4].f2.f3}, {&g_2, &g_17[0][3].f3, &g_84[4].f2.f3}, {&g_2, &g_17[0][3].f3, &g_84[4].f2.f3}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_113[i] = &l_112;
        (*l_112) = (safe_lshift_func_int16_t_s_s(g_2, (*l_93)));
        g_115 = (l_114 = &p_80);

        ;
        ;
        if ((safe_rshift_func_uint16_t_u_s(1UL, 6)))
        {
            if (p_78.f2)
                goto lbl_118;
            (*l_83) = g_84[4];
        }
        else
        {
            const unsigned char l_123 = 0xB7L;
            const char *l_124 = &g_17[0][3].f0;
            const char **l_125[10] = {&l_124, &l_124, &l_124, &l_124, &l_124, &l_124, &l_124, &l_124, &l_124, &l_124};
            char * const l_128 = &g_84[4].f2.f0;
            int *l_167 = &g_2;
            struct S1 **l_172 = &l_83;
            const struct S1 *l_188 = &g_84[5];
            struct S0 *l_219 = &g_17[0][3];
            int i;
            for (p_79 = (-27); (p_79 < 46); p_79 = safe_add_func_uint16_t_u_u(p_79, 4))
            {
                p_78.f3 = ((safe_add_func_uint8_t_u_u(((*g_60) > l_123), p_78.f1)) > g_84[4].f2.f5);
            }
            if (((g_126 = l_124) == l_128))
            {
                const short *l_131 = &g_17[0][3].f4;
                const short **l_132 = &l_131;
                int l_134 = 1L;
                unsigned char *l_146 = &g_33;
                int *l_157 = &g_84[4].f2.f3;
                unsigned * const *l_162 = &g_60;
                if ((g_84[4].f1 & (safe_sub_func_int16_t_s_s((((*l_132) = l_131) != l_133[3][0][2]), (((l_134 && (g_147 = ((((safe_mod_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_78.f5, (((*g_126) <= ((*l_146) = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_143 == (void*)0), (safe_sub_func_uint16_t_u_u(l_123, 65532UL)))), p_78.f4)) && l_123))) ^ 0x690FL))) || (*g_60)), 0x06E0L)) & p_78.f1) <= p_80) || 0x3EA293CAL))) || 65535UL) < 65535UL)))))
                {
                    struct S0 *l_148 = &g_84[4].f2;
                    struct S1 *l_155 = &g_84[4];
                    const int *l_160 = &g_84[4].f3;
                    int *l_168 = &l_134;
                    int l_169 = 0x9EEAFE74L;
                    int l_170 = (-1L);
                    (*l_148) = g_84[4].f5;
                    for (p_78.f0 = (-30); (p_78.f0 >= 1); p_78.f0 = safe_add_func_int16_t_s_s(p_78.f0, 3))
                    {
                        int l_156 = (-9L);
                        l_156 = ((safe_mod_func_int8_t_s_s((-1L), (*g_126))) | (safe_add_func_int16_t_s_s((p_78.f4 = ((void*)0 == l_155)), g_17[0][3].f1)));
                        l_157 = &g_2;

                        ;
                        (*l_112) = (*l_93);
                    }

                    ;
                    for (p_78.f1 = 0; (p_78.f1 < 51); p_78.f1 = safe_add_func_int32_t_s_s(p_78.f1, 2))
                    {
                        int *l_161 = &l_134;
                        l_160 = (void*)0;

                        ;
                        p_78.f3 = (*l_157);
                        l_161 = (l_114 = &p_80);

                        ;
                        return l_162;



                    }
                    for (p_78.f2 = 0; (p_78.f2 <= 0); p_78.f2 += 1)
                    {
                        const int **l_163 = (void*)0;
                        const int *l_164 = &g_84[4].f5.f3;
                        const int **l_165 = &l_164;
                        short l_166 = 0L;
                        int i;
                        l_160 = l_93;
                        (*l_165) = l_164;
                        if ((*g_115))
                            continue;
                        l_170 = (l_169 = ((0UL || ((*l_114) <= l_166)) | (((g_115 = (l_168 = l_167)) == l_114) == (*l_160))));

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    struct S1 **l_173 = &l_83;
                    int *l_178 = &g_17[0][3].f3;
                    l_167 = &p_80;

                    ;
                    if ((*g_115))
                    {
                        const struct S0 l_171 = {0x25L,4294967295UL,0xF747L,-6L,0x76EDL,0x0CF4L};
                        p_78 = l_171;
                        return &g_60;



                    }
                    else
                    {
                        const int **l_174 = &l_93;
                        const int *l_176 = &g_84[4].f5.f3;
                        const int **l_175 = &l_176;
                        l_173 = l_172;
                        (*l_175) = ((*l_174) = &p_80);

                        ;
                        ;
                    }

                    ;
                    for (l_134 = 0; (l_134 <= 4); l_134 += 1)
                    {
                        int *l_177 = &g_84[4].f5.f3;
                        p_78 = g_17[1][0];
                        l_177 = &g_2;

                        ;
                    }
                    if ((*g_115))
                    {
                        unsigned * const *l_179[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_179[i] = &g_60;
                        l_178 = &g_2;

                        ;
                        return l_179[1];



                    }
                    else
                    {
                        g_115 = l_178;

                        ;
                        (*l_157) = (*g_115);
                    }

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                struct S0 *l_180 = &g_84[4].f2;
                (*l_180) = p_78;
                for (p_78.f3 = 12; (p_78.f3 >= (-21)); p_78.f3--)
                {
                    struct S1 *l_186 = &g_84[0];
                    if ((safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(((l_187 = ((*l_172) = l_186)) == l_188), (safe_add_func_int16_t_s_s((*l_112), (*l_93))))))))
                    {
                        struct S1 ***l_193 = &l_172;
                        (*l_193) = g_191;

                        ;
                        (*g_192) = (*l_188);
                        (*l_112) = p_78.f0;
                        (***l_193) = (*g_192);
                    }
                    else
                    {
                        const char ***l_194 = &l_125[2];
                        (*l_194) = &g_126;
                    }

                    ;
                    (*l_180) = g_17[0][3];
                }

                ;

                ;
            }

            ;
            ;
            ;

            ;
            ;
            (*l_112) = (safe_add_func_int16_t_s_s((((((*l_167) & (*l_167)) >= 0xC404L) || (safe_rshift_func_uint16_t_u_s(65528UL, 2))) || ((safe_rshift_func_int16_t_s_s(p_78.f5, (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((*l_112) | ((safe_rshift_func_uint16_t_u_s(p_78.f5, ((*l_93) == ((*g_115) > (*l_167))))) < (-1L))), 0x88EAD582L)), p_78.f3)))) != (*l_93))), 0xAD05L));
            for (p_79 = 0; (p_79 <= 5); p_79 += 1)
            {
                int *l_217 = &g_2;
                struct S0 **l_220 = &l_219;
                const int **l_222 = &l_221[4][1];
                if (((g_84[4].f2.f4 = (safe_lshift_func_int8_t_s_u(p_79, (safe_div_func_uint16_t_u_u(((*l_112) | ((p_80 > 0xFAD77C29L) | (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_93), g_84[4].f2.f3)), ((safe_sub_func_int8_t_s_s((*l_167), (l_217 != (void*)0))) || 0L))))), p_80))))) == g_84[4].f6))
                {
                    char l_218 = 0xAFL;
                    p_78.f3 = l_218;
                    for (g_147 = 0; (g_147 <= 5); g_147 += 1)
                    {
                        g_115 = &g_2;

                        ;
                    }
                }
                else
                {
                    g_115 = l_167;

                    ;
                }
                l_114 = &g_2;

                ;
                (*l_220) = l_219;
                (*l_222) = l_221[0][2];
            }

            ;
        }

        ;
        ;
        ;
        g_115 = &p_80;

        ;
    }

    ;
    for (p_80 = 7; (p_80 >= 1); p_80 -= 1)
    {
        int **l_223[1];
        int i;
        for (i = 0; i < 1; i++)
            l_223[i] = &l_114;
        (*l_83) = (**g_191);
        g_115 = &g_2;

        ;
        return &g_60;


    }
    return &g_60;



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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_17[i][j].f0, "g_17[i][j].f0", print_hash_value);
            transparent_crc(g_17[i][j].f1, "g_17[i][j].f1", print_hash_value);
            transparent_crc(g_17[i][j].f2, "g_17[i][j].f2", print_hash_value);
            transparent_crc(g_17[i][j].f3, "g_17[i][j].f3", print_hash_value);
            transparent_crc(g_17[i][j].f4, "g_17[i][j].f4", print_hash_value);
            transparent_crc(g_17[i][j].f5, "g_17[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_84[i].f0, "g_84[i].f0", print_hash_value);
        transparent_crc(g_84[i].f1, "g_84[i].f1", print_hash_value);
        transparent_crc(g_84[i].f2.f0, "g_84[i].f2.f0", print_hash_value);
        transparent_crc(g_84[i].f2.f1, "g_84[i].f2.f1", print_hash_value);
        transparent_crc(g_84[i].f2.f2, "g_84[i].f2.f2", print_hash_value);
        transparent_crc(g_84[i].f2.f3, "g_84[i].f2.f3", print_hash_value);
        transparent_crc(g_84[i].f2.f4, "g_84[i].f2.f4", print_hash_value);
        transparent_crc(g_84[i].f2.f5, "g_84[i].f2.f5", print_hash_value);
        transparent_crc(g_84[i].f3, "g_84[i].f3", print_hash_value);
        transparent_crc(g_84[i].f4, "g_84[i].f4", print_hash_value);
        transparent_crc(g_84[i].f5.f0, "g_84[i].f5.f0", print_hash_value);
        transparent_crc(g_84[i].f5.f1, "g_84[i].f5.f1", print_hash_value);
        transparent_crc(g_84[i].f5.f2, "g_84[i].f5.f2", print_hash_value);
        transparent_crc(g_84[i].f5.f3, "g_84[i].f5.f3", print_hash_value);
        transparent_crc(g_84[i].f5.f4, "g_84[i].f5.f4", print_hash_value);
        transparent_crc(g_84[i].f5.f5, "g_84[i].f5.f5", print_hash_value);
        transparent_crc(g_84[i].f6, "g_84[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
