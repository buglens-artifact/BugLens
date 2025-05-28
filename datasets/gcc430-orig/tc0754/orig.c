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
   unsigned short f0;
   volatile unsigned short f1;
   unsigned char f2;
   const short f3;
   volatile short f4;
   volatile unsigned char f5;
};

struct S2 {
   int f0;
   short f1;
   volatile int f2;
   volatile unsigned f3;
};


static short g_4 = (-3L);
static short g_26 = (-1L);
static unsigned g_62 = 0xC737ECE5L;
static unsigned g_66 = 4294967291UL;
static unsigned short g_72 = 0UL;
static int g_74[3] = {0L, 0L, 0L};
static int *g_82 = &g_74[2];
static int **g_81[9][5][5] = {{{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}, {{&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}, {&g_82, (void*)0, &g_82, &g_82, (void*)0}}};
static struct S2 g_84 = {0x7991EE50L,0x2BDFL,-5L,0UL};
static int g_91 = 3L;
static int g_93 = 0x47BFCA48L;
static volatile unsigned char g_107 = 0xA8L;
static struct S2 g_110 = {-1L,-10L,1L,18446744073709551615UL};
static struct S2 g_113 = {0xB8E47B43L,0x9BF6L,0L,18446744073709551614UL};
static volatile struct S2 g_119 = {4L,0x8CA9L,3L,0xAADC8FC3L};
static unsigned **g_143 = (void*)0;
static volatile unsigned short g_199 = 0x7D5DL;
static unsigned *g_226 = &g_62;
static short *g_252 = (void*)0;
static short **g_251 = &g_252;
static int *g_253 = &g_74[2];
static const volatile struct S2 g_257[10][10] = {{{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}, {{0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {-8L,0x8165L,0xD9C75B2FL,0x600C9B70L}, {0xB6A8BB5CL,0x4C4AL,-9L,0x395F22F0L}, {0x94F49408L,0xAEBBL,-3L,0x630C53E9L}, {0xA09218C4L,0xD06FL,6L,0x20F92BD4L}, {-7L,-10L,0L,0UL}, {0L,0L,0x232B54BCL,1UL}, {-9L,4L,0xD15E3894L,0UL}, {-4L,0x3C64L,0x758CCA36L,18446744073709551614UL}}};
static char g_294 = 0xF1L;
static unsigned char g_296[2] = {6UL, 6UL};
static struct S2 g_320[7][7][2] = {{{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}, {{{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}, {{0xE4EE0D34L,-5L,0x60431005L,0x40CC8354L}, {0xC4C6B3A8L,0xA30CL,0xE1D11B0DL,18446744073709551607UL}}}};
static long long g_352 = 0xEEA7DE03A444BA52LL;
static unsigned char * const g_359 = &g_296[0];
static unsigned char * const *g_358 = &g_359;
static unsigned char * const **g_357 = &g_358;
static char g_418 = 1L;
static int g_436 = (-6L);
static struct S2 g_446 = {-1L,6L,0x16FBAB60L,0xE4F9B41EL};
static struct S2 **g_460 = (void*)0;
static struct S2 g_502 = {5L,0x53DBL,0xAAEBE736L,1UL};
static const struct S0 g_584 = {1UL,1UL,8UL,0x843BL,-1L,9UL};
static const struct S0 *g_583 = &g_584;
static const struct S0 **g_582 = &g_583;
static volatile unsigned char g_591 = 255UL;
static short **g_674 = (void*)0;
static struct S2 g_711 = {5L,0xAF06L,-8L,0x86D4BDF7L};
static unsigned char g_825[1][3] = {{8UL, 8UL, 8UL}};
static volatile struct S2 g_828 = {1L,0xBE97L,0x20018103L,0x89D3F78BL};
static volatile struct S2 g_829 = {1L,-7L,9L,18446744073709551615UL};
static unsigned long long g_840 = 0xEA639BFA7ECAA981LL;
static const struct S2 g_845[1][4][4] = {{{{0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}, {0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}}, {{0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}, {0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}}, {{0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}, {0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}}, {{0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}, {0xB217E7D6L,0xF2A2L,-7L,8UL}, {1L,1L,0L,18446744073709551613UL}}}};
static int g_848 = 0x98C4E70FL;
static struct S0 g_877 = {65526UL,0x04E9L,0x3DL,-7L,0x9097L,0xE5L};
static struct S0 g_880 = {0xBF0DL,65534UL,5UL,9L,1L,0x94L};
static struct S0 g_881 = {9UL,0x26E3L,1UL,-1L,0x9860L,0UL};
static struct S0 g_882 = {1UL,6UL,0x3DL,0x00B8L,0L,247UL};
static struct S0 g_883[4][9] = {{{0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {2UL,0UL,248UL,-6L,-1L,0x5CL}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}}, {{0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {2UL,0UL,248UL,-6L,-1L,0x5CL}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}}, {{0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {2UL,0UL,248UL,-6L,-1L,0x5CL}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}}, {{0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {2UL,0UL,248UL,-6L,-1L,0x5CL}, {0x3D22L,0x1AE2L,0x4FL,9L,1L,5UL}, {0xD3C1L,65535UL,2UL,0x2173L,7L,0x19L}, {1UL,65535UL,4UL,7L,0x9E1BL,7UL}, {0xF7BBL,0xA07DL,6UL,0L,0xC3EAL,0x7CL}}};
static struct S0 g_884 = {0x43C0L,0UL,250UL,0xD617L,4L,1UL};
static struct S0 g_885 = {0x6F14L,2UL,0x5BL,9L,0x59BBL,6UL};
static struct S0 g_886[6][5][8] = {{{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}, {{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}, {{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}, {{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}, {{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}, {{{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}, {{0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0UL,1UL,0x3DL,0x10FAL,1L,253UL}, {0xBD88L,0x7592L,1UL,0x243EL,0xEFBFL,0xB4L}, {0x234BL,0x575BL,255UL,2L,-3L,255UL}, {0x5951L,65532UL,0x95L,0x1A1EL,0x33BDL,0x40L}, {0x2317L,0UL,0UL,8L,0x0AA5L,0x44L}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}, {2UL,5UL,0UL,0x4DC5L,0x02F9L,0x1AL}}}};
static unsigned g_887 = 1UL;
static volatile int g_891 = 0xB267212BL;
static volatile int *g_890[8][9] = {{&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}, {&g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891, &g_891}};
static int *g_898 = &g_320[3][2][0].f0;
static short g_920 = 0x2E16L;
static const int g_965[10] = {0xEE199C20L, 9L, 0xEE199C20L, 9L, 0xEE199C20L, 9L, 0xEE199C20L, 9L, 0xEE199C20L, 9L};
static const int g_967 = (-8L);
static const int *g_968 = (void*)0;



static int func_1(void);
static unsigned short func_12(long long p_13);
static long long func_14(unsigned char p_15, unsigned p_16, int p_17, long long p_18);
static unsigned char func_19(const unsigned char p_20, unsigned long long p_21, int p_22, unsigned p_23, int p_24);
static int func_27(long long p_28, short * p_29);
static short func_35(char p_36, const short p_37, unsigned short p_38, unsigned char p_39, int p_40);
static long long func_43(long long p_44, unsigned p_45);
static short ** func_46(unsigned char p_47, const unsigned p_48);
static unsigned char func_49(short * p_50, short * p_51);
static short * func_52(short * const p_53, short ** p_54, short ** p_55, int p_56);
static int func_1(void)
{
    char l_5 = 0L;
    int l_8 = (-1L);
    unsigned l_11[2][2] = {{18446744073709551607UL, 0x6FD43DDCL}, {18446744073709551607UL, 0x6FD43DDCL}};
    short *l_25 = &g_26;
    int l_956 = (-1L);
    const int *l_966 = &g_967;
    char l_969 = 0x36L;
    int i, j;
    if (((safe_add_func_int8_t_s_s(g_4, l_5)) > (safe_div_func_int16_t_s_s((g_4 ^ (l_8 = g_4)), (((safe_lshift_func_int16_t_s_u(((l_11[0][0] && (func_12(func_14(func_19(((l_5 != (g_4 > ((*l_25) = (0xA0L | l_5)))) <= 0UL), l_11[0][1], l_5, l_11[1][1], l_11[0][1]), g_845[0][3][0].f0, l_11[0][1], g_845[0][3][0].f0)) >= g_881.f2)) < l_11[0][1]), l_11[1][1])) & l_11[1][0]) & 0x4159L)))))
    {
        int **l_936 = &g_253;
        int *l_937 = &g_91;
        unsigned char l_947 = 255UL;
        unsigned **l_961 = &g_226;
        (*l_936) = &l_8;
        (*l_937) &= ((-1L) > ((*g_253) | l_5));
        for (l_5 = 0; (l_5 <= (-22)); l_5--)
        {
            int l_946 = 0x93D2E47EL;
            char *l_948 = &g_294;
            int *l_955[8][2][4] = {{{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}, {{&g_74[2], &g_74[2], (void*)0, &g_74[1]}, {&g_74[2], &g_74[2], (void*)0, &g_74[1]}}};
            short l_957 = 0xFDC7L;
            unsigned ***l_962[7][6][2] = {{{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}, {{&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}, {&g_143, &g_143}}};
            int i, j, k;
            (*l_937) |= (safe_unary_minus_func_int16_t_s((l_5 < l_5)));
        }
    }
    else
    {
        const int *l_964[1][7][3];
        const int **l_963[2][7][8] = {{{&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}}, {{&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}, {&l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][3][0], &l_964[0][1][0], &l_964[0][3][0]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 3; k++)
                    l_964[i][j][k] = &g_965[2];
            }
        }
        g_968 = (l_966 = &l_8);
        l_966 = &l_956;
    }
    return l_969;
}







static unsigned short func_12(long long p_13)
{
    int *l_919[4][2];
    char l_921 = 0L;
    long long l_925 = 1L;
    unsigned l_926 = 0x5036A716L;
    long long l_929 = 6L;
    long long *l_930[4][5][9] = {{{&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}}, {{&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}}, {{&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}}, {{&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}, {&g_352, &l_925, &g_352, &g_352, &g_352, (void*)0, &g_352, &l_925, &g_352}}};
    short *l_931 = &g_502.f1;
    unsigned l_932 = 0xDA9BF706L;
    unsigned l_933 = 0xCF74FE72L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_919[i][j] = (void*)0;
    }
    for (g_66 = 5; (g_66 == 35); g_66++)
    {
        int *l_915[1][1][2];
        int **l_916 = &g_82;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_915[i][j][k] = &g_74[2];
            }
        }
        (*l_916) = l_915[0][0][0];
        for (g_294 = 0; (g_294 >= 23); g_294++)
        {
            (*l_916) = l_919[2][1];
        }
    }
    if ((l_921 = g_920))
    {
        short l_922 = 0x83D0L;
        l_922 &= (-10L);
    }
    else
    {
        char l_923 = (-7L);
        int l_924[10] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
        int i;
        --l_926;
    }
    l_932 |= (func_14((**g_358), l_929, (*g_898), (p_13 = func_27((g_352 |= 0xB83DAD0219DEF52CLL), l_931))) || (((((*g_359) = (0x57F1L || g_885.f3)) != p_13) && 18446744073709551615UL) ^ p_13));
    --l_933;
    return p_13;
}







static long long func_14(unsigned char p_15, unsigned p_16, int p_17, long long p_18)
{
    unsigned short l_861 = 0x1325L;
    short *l_862 = &g_84.f1;
    int *l_863 = &g_93;
    int *l_864[4][5] = {{&g_91, &g_848, &g_91, &g_848, &g_91}, {&g_91, &g_848, &g_91, &g_848, &g_91}, {&g_91, &g_848, &g_91, &g_848, &g_91}, {&g_91, &g_848, &g_91, &g_848, &g_91}};
    int l_865 = 1L;
    struct S0 *l_879[8][4] = {{&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}, {&g_882, &g_882, &g_886[1][0][7], &g_880}};
    int i, j;
    l_865 = ((*l_863) = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((safe_div_func_int64_t_s_s(p_17, 0xCA56AF23DABFE6F6LL)) > (safe_add_func_int16_t_s_s(((l_861 | ((*l_862) = l_861)) && 0xEF45L), (((4L == l_861) || 0L) < 1UL)))), 0x22422E90L)) > l_861), l_861)), g_72)));
    l_864[1][3] = &l_865;
    (*l_863) |= (safe_lshift_func_int16_t_s_s((0x720865A071FE102DLL ^ p_18), 0));
    for (p_18 = 0; (p_18 >= 0); p_18 -= 1)
    {
        unsigned char l_873 = 0xA9L;
        short *l_888 = (void*)0;
        const unsigned char l_889 = 0x36L;
        struct S2 * const l_893 = &g_502;
        int *l_899[8] = {&g_502.f0, &g_446.f0, &g_502.f0, &g_446.f0, &g_502.f0, &g_446.f0, &g_502.f0, &g_446.f0};
        int i;
        for (g_840 = 0; (g_840 <= 0); g_840 += 1)
        {
            int l_870[10] = {(-9L), (-9L), 0xEB0D0F7AL, (-9L), (-9L), 0xEB0D0F7AL, (-9L), (-9L), 0xEB0D0F7AL, (-9L)};
            struct S0 *l_876 = &g_877;
            struct S0 **l_878 = &l_876;
            int i, j;
        }
    }
    return g_881.f3;
}







static unsigned char func_19(const unsigned char p_20, unsigned long long p_21, int p_22, unsigned p_23, int p_24)
{
    unsigned l_32[9][10] = {{18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}, {18446744073709551610UL, 18446744073709551615UL, 0x0077FEFBL, 0x3631AF66L, 0xB41DBC46L, 0x767C8FA1L, 0xB41DBC46L, 0x3631AF66L, 0x0077FEFBL, 18446744073709551615UL}};
    short *l_843[5][1] = {{&g_446.f1}, {&g_446.f1}, {&g_446.f1}, {&g_446.f1}, {&g_446.f1}};
    int *l_847 = &g_848;
    int i, j;
    (*l_847) &= (p_24 = func_27((safe_rshift_func_uint16_t_u_u(65529UL, (l_32[2][6] | ((safe_lshift_func_int16_t_s_u(func_35((func_43(p_22, (&g_4 == (void*)0)) ^ (!(safe_mod_func_int32_t_s_s(g_446.f1, (-6L))))), p_23, p_23, l_32[8][1], g_4), g_711.f0)) && 18446744073709551615UL)))), l_843[4][0]));
    return (**g_358);
}







static int func_27(long long p_28, short * p_29)
{
    long long l_844 = 0x1BE01E2F2273C98CLL;
    struct S2 *l_846[7] = {&g_84, (void*)0, &g_84, (void*)0, &g_84, (void*)0, &g_84};
    int i;
    l_844 = ((void*)0 != &g_253);
    g_829 = g_845[0][3][0];
    return p_28;
}







static short func_35(char p_36, const short p_37, unsigned short p_38, unsigned char p_39, int p_40)
{
    unsigned l_767 = 18446744073709551615UL;
    int l_780 = 0xFE3E52DEL;
    int l_782 = 0x7D3B79BBL;
    int *l_796 = &g_91;
    int l_822 = 0L;
    int l_824 = (-1L);
    short **l_837 = (void*)0;
    long long l_841[9][7] = {{0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}, {0xBD52D71B13EEE96ELL, 0L, 1L, 1L, 3L, 1L, 1L}};
    unsigned l_842 = 4294967287UL;
    int i, j;
    for (g_352 = 2; (g_352 >= 0); g_352 -= 1)
    {
        char l_761 = 1L;
        int *l_762 = &g_93;
        int *l_763 = &g_74[0];
        int *l_764 = &g_74[1];
        int *l_765 = &g_74[2];
        int *l_766 = &g_91;
        int l_817 = (-8L);
        int l_819 = 0x843147BFL;
        short * const l_833 = &g_502.f1;
        short **l_834 = (void*)0;
        ++l_767;
        for (p_39 = 0; (p_39 <= 4); p_39 += 1)
        {
            unsigned l_783 = 0x1E872A6EL;
            int l_804 = (-4L);
            int l_821 = (-1L);
            int l_823 = (-1L);
            int **l_832 = &l_762;
            int *l_835 = &g_320[3][2][0].f0;
            short **l_836 = &g_252;
            short *l_838 = &g_110.f1;
            short l_839 = (-6L);
            for (g_84.f0 = 0; (g_84.f0 <= 2); g_84.f0 += 1)
            {
                int i, j, k;
                if ((((safe_rshift_func_uint16_t_u_u(65530UL, (safe_rshift_func_int16_t_s_s((g_74[g_84.f0] == g_74[g_84.f0]), 3)))) && 0xC0L) != (g_74[g_352] < g_320[3][2][0].f0)))
                {
                    short l_776 = (-1L);
                    int *l_777 = &g_91;
                    int *l_778 = &g_74[2];
                    int *l_779[5] = {&g_74[g_84.f0], &g_74[g_84.f0], &g_74[g_84.f0], &g_74[g_84.f0], &g_74[g_84.f0]};
                    long long l_781 = 1L;
                    int i;
                    for (g_294 = 0; (g_294 <= 1); g_294 += 1)
                    {
                        int i;
                        (*l_765) &= (safe_add_func_int8_t_s_s(g_296[g_294], 0xE9L));
                    }
                    if (p_39)
                        continue;
                    l_783--;
                }
                else
                {
                    unsigned l_788 = 18446744073709551611UL;
                    for (l_782 = 14; (l_782 >= 7); l_782 = safe_sub_func_int32_t_s_s(l_782, 6))
                    {
                        const int *l_791[5];
                        const int **l_792 = &l_791[4];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_791[i] = &g_93;
                        (*l_764) = ((void*)0 == g_460);
                        l_788--;
                        if (p_40)
                            continue;
                        (*l_792) = l_791[3];
                    }
                    for (g_502.f1 = 23; (g_502.f1 <= (-11)); g_502.f1--)
                    {
                        int **l_795[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_795[i] = &g_253;
                        (*l_766) = ((~0xFC0521E5L) >= l_788);
                        if (p_37)
                            continue;
                        l_796 = &g_74[g_352];
                        if ((*l_762))
                            continue;
                    }
                    return p_39;
                }
                for (l_761 = 15; (l_761 <= (-26)); l_761 = safe_sub_func_uint32_t_u_u(l_761, 6))
                {
                    unsigned l_799 = 4294967295UL;
                    int l_805[8] = {0xC9D1E62CL, 0xAC3CD1BAL, 0xC9D1E62CL, 0xAC3CD1BAL, 0xC9D1E62CL, 0xAC3CD1BAL, 0xC9D1E62CL, 0xAC3CD1BAL};
                    int i;
                    if (l_799)
                    {
                        (*l_764) = (~(safe_div_func_uint8_t_u_u((*g_359), p_39)));
                        (*l_766) = p_38;
                    }
                    else
                    {
                        l_804 = (safe_sub_func_uint64_t_u_u((p_40 > l_799), l_799));
                        l_805[0] = l_783;
                    }
                    (*l_763) ^= (*l_766);
                    for (g_711.f1 = 0; (g_711.f1 <= 7); g_711.f1 += 1)
                    {
                        int *l_808 = &g_74[2];
                        int *l_809 = &l_804;
                        int *l_810 = (void*)0;
                        int *l_811 = &l_805[g_352];
                        int *l_812 = &l_805[g_711.f1];
                        int *l_813 = &g_74[g_84.f0];
                        int *l_814 = &g_74[g_84.f0];
                        int *l_815 = &l_805[5];
                        int *l_816[6] = {&l_805[0], &l_805[0], &l_805[g_352], &l_805[0], &l_805[0], &l_805[g_352]};
                        int l_818 = 1L;
                        int l_820 = 0x7477AD3DL;
                        int i;
                        if (l_805[(g_352 + 1)])
                            break;
                        l_805[g_711.f1] = ((safe_mod_func_uint64_t_u_u(l_805[g_352], p_36)) > l_805[1]);
                        g_825[0][0]--;
                    }
                    return p_40;
                }
            }
            g_829 = g_828;
            (*l_765) |= (safe_sub_func_int64_t_s_s((&l_817 == ((*l_832) = &l_817)), l_839));
            g_840 &= ((*l_763) ^= 0x16A4B3F6L);
        }
    }
    (*l_796) = l_841[7][4];
    return l_842;
}







static long long func_43(long long p_44, unsigned p_45)
{
    short **l_57 = (void*)0;
    int l_58 = 0xDBC0BA88L;
    short *l_75[5][1][10] = {{{&g_4, &g_4, &g_4, &g_4, &g_26, &g_26, &g_26, &g_4, &g_26, (void*)0}}, {{&g_4, &g_4, &g_4, &g_4, &g_26, &g_26, &g_26, &g_4, &g_26, (void*)0}}, {{&g_4, &g_4, &g_4, &g_4, &g_26, &g_26, &g_26, &g_4, &g_26, (void*)0}}, {{&g_4, &g_4, &g_4, &g_4, &g_26, &g_26, &g_26, &g_4, &g_26, (void*)0}}, {{&g_4, &g_4, &g_4, &g_4, &g_26, &g_26, &g_26, &g_4, &g_26, (void*)0}}};
    short ***l_670 = (void*)0;
    short ***l_671 = (void*)0;
    short ***l_672 = &g_251;
    short ***l_673 = &l_57;
    unsigned short l_677 = 0xD7A9L;
    int l_717 = 0x91A56287L;
    int l_718 = 0x37DD24C8L;
    int l_719[2][10][9] = {{{0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}}, {{0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}, {0L, 0xE6AFDFA3L, 8L, (-1L), (-2L), 1L, 1L, (-1L), 8L}}};
    long long l_721 = 1L;
    unsigned short l_725 = 0xDF1CL;
    unsigned l_752 = 0xA75643E1L;
    int *l_756 = &g_93;
    struct S2 *l_757 = (void*)0;
    int i, j, k;
    g_674 = ((*l_673) = ((*l_672) = func_46(func_49(func_52(&g_26, l_57, l_57, l_58), l_75[1][0][7]), g_110.f1)));
    l_58 = p_45;
    for (g_84.f1 = 21; (g_84.f1 <= (-11)); --g_84.f1)
    {
        int *l_678 = &g_74[2];
        (*l_678) = l_677;
    }
    for (g_84.f0 = 0; (g_84.f0 >= (-2)); --g_84.f0)
    {
        short **l_695 = &g_252;
        int l_720 = (-10L);
        int l_723 = 0x5316E254L;
        struct S2 *l_729 = &g_320[1][5][0];
        int l_743 = 0x9DBD73B9L;
        int l_744 = 2L;
        int l_745 = 0xA300AFA0L;
        int l_746 = 0L;
        int l_747 = 0xA3EF989CL;
        int l_748 = (-1L);
        int l_749 = 0xF5A41424L;
        int l_750[7][2][3] = {{{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}};
        int **l_755 = (void*)0;
        struct S2 *l_758 = (void*)0;
        int i, j, k;
        for (g_62 = 0; (g_62 <= 1); g_62 += 1)
        {
            int *l_681[7] = {(void*)0, &l_58, (void*)0, &l_58, (void*)0, &l_58, (void*)0};
            unsigned ***l_690 = &g_143;
            int i;
            (*g_582) = (*g_582);
            for (g_352 = 0; (g_352 <= 1); g_352 += 1)
            {
                int l_713 = (-5L);
                int l_714 = 0x2A9A1206L;
                long long l_715 = (-1L);
                int l_716 = (-1L);
                int l_722 = 1L;
                int l_724 = 1L;
                int i;
                if (g_296[g_62])
                {
                    unsigned short l_697[6] = {0xDAFBL, 0xABA2L, 0xDAFBL, 0xABA2L, 0xDAFBL, 0xABA2L};
                    int i;
                    for (g_436 = 1; (g_436 >= 0); g_436 -= 1)
                    {
                        int **l_682 = (void*)0;
                        int **l_683 = &l_681[0];
                        short l_684 = 1L;
                        char *l_687 = &g_294;
                        unsigned *l_696[10] = {&g_62, &g_62, (void*)0, &g_62, &g_62, (void*)0, &g_62, &g_62, (void*)0, &g_62};
                        int i;
                        (*l_683) = l_681[0];
                        if (p_44)
                            continue;
                        l_697[2] = (l_684 || (!(p_45 = (((*l_687) = (safe_sub_func_uint16_t_u_u(1UL, (&l_58 == l_681[0])))) != ((safe_mod_func_uint16_t_u_u((l_690 != (void*)0), p_44)) != ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0xAFL, ((void*)0 != l_695))), p_44)) < l_677) > p_45) & p_45))))));
                    }
                }
                else
                {
                    char *l_704 = &g_294;
                    char *l_707 = &g_418;
                    int l_710 = (-4L);
                    struct S2 *l_712 = &g_320[0][5][0];
                    l_710 ^= ((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((g_113.f2 == p_45), ((*l_704) = (g_72 == g_113.f1)))), (safe_rshift_func_uint8_t_u_s(p_45, ((*l_707) ^= g_296[1]))))) | g_66), (p_44 ^ (safe_rshift_func_int16_t_s_u(p_45, l_58))))) | 0x6AL);
                    (*l_712) = g_711;
                }
                if (p_44)
                    continue;
                l_725++;
            }
            for (g_436 = 0; (g_436 <= 1); g_436 += 1)
            {
                char *l_728 = &g_418;
                int l_730 = 0x5AA27CEEL;
                l_719[0][5][0] ^= 0xD5B44943L;
                l_730 = ((+(((*l_728) = (-1L)) < l_677)) | (l_720 == (l_729 != (void*)0)));
            }
        }
        for (g_110.f1 = (-25); (g_110.f1 <= 12); ++g_110.f1)
        {
            unsigned long long l_733 = 0UL;
            int *l_734 = (void*)0;
            int *l_735 = &l_719[0][5][7];
            int l_736 = 9L;
            int *l_737 = &l_719[0][3][5];
            int *l_738 = &l_723;
            int *l_739 = &l_720;
            int *l_740 = (void*)0;
            int *l_741 = &l_58;
            int *l_742[4] = {&g_74[2], (void*)0, &g_74[2], (void*)0};
            int l_751 = 0x1CEED53AL;
            int i;
            l_733 &= (!((void*)0 != l_695));
            l_752++;
        }
        l_756 = (void*)0;
        l_758 = l_757;
    }
    return g_257[9][7].f1;
}







static short ** func_46(unsigned char p_47, const unsigned p_48)
{
    unsigned short l_158 = 0UL;
    int l_179 = 0x65C469C5L;
    int l_181 = 7L;
    int l_182 = 0xE8E41D38L;
    int l_183 = 4L;
    int l_196 = 0x07D05B84L;
    int l_198 = 0xCB6A1154L;
    int l_212 = 1L;
    int l_214 = (-1L);
    int l_215 = (-1L);
    int l_216 = 0x84C420A9L;
    int l_217 = 0x20E50DB3L;
    int l_219[10][1] = {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}};
    short *l_283 = &g_4;
    const unsigned *l_286 = &g_62;
    short *l_287 = &g_110.f1;
    unsigned l_288 = 7UL;
    unsigned long long l_322 = 0x540B067C8B26133ELL;
    short l_347 = 0x6C85L;
    unsigned short l_353 = 0x4EE3L;
    unsigned short l_393 = 0xCE94L;
    short *l_402[1][4];
    const unsigned **l_410 = &l_286;
    const unsigned ***l_409[1][2][5] = {{{&l_410, &l_410, &l_410, &l_410, &l_410}, {&l_410, &l_410, &l_410, &l_410, &l_410}}};
    unsigned char *l_486 = &g_296[0];
    unsigned char ** const l_485 = &l_486;
    unsigned short l_521[2];
    char l_541 = 0xA2L;
    int *l_580[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int l_659 = 0L;
    short l_664[10][8][3] = {{{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}, {{0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}, {0L, 0x961BL, 7L}}};
    unsigned l_667[6] = {0x1121B2CFL, 0x1121B2CFL, 0UL, 0x1121B2CFL, 0x1121B2CFL, 0UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_402[i][j] = &l_347;
    }
    for (i = 0; i < 2; i++)
        l_521[i] = 0x3702L;
    if ((l_158 && l_158))
    {
        int * const l_159[10][5][5] = {{{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}, {{&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}, {&g_74[1], &g_93, &g_91, &g_93, &g_74[1]}}};
        int **l_160 = &g_82;
        int i, j, k;
        (*l_160) = l_159[4][0][2];
    }
    else
    {
        unsigned short l_184 = 0x37D2L;
        int l_189 = 0xBE65349BL;
        int l_190 = 0x8EAFBAC7L;
        int l_191 = 5L;
        long long l_192 = 0x20DBA3BF411E99F5LL;
        unsigned *l_204 = &g_62;
        unsigned **l_203[4][4][2] = {{{&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}}, {{&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}}, {{&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}}, {{&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}, {&l_204, &l_204}}};
        int l_213[3][4][10] = {{{0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}}, {{0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}}, {{0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}, {0xEF3973B3L, 0xEBD26CD3L, 0x5D8D414AL, (-1L), 1L, 0x46515910L, 0x68C0FA9EL, (-1L), (-1L), (-6L)}}};
        short l_218[4][10][1] = {{{0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}}, {{0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}}, {{0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}}, {{0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}, {0x11C0L}}};
        int *l_280 = &l_219[5][0];
        int i, j, k;
        for (p_47 = 0; (p_47 <= 2); p_47 += 1)
        {
            unsigned short l_164 = 1UL;
            unsigned long long l_169[10][4][6];
            int l_174[7];
            int *l_276 = &l_213[1][3][1];
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_169[i][j][k] = 18446744073709551615UL;
                }
            }
            for (i = 0; i < 7; i++)
                l_174[i] = 1L;
            for (g_66 = 0; (g_66 <= 2); g_66 += 1)
            {
                int *l_161 = (void*)0;
                int *l_162 = (void*)0;
                int *l_163 = &g_74[g_66];
                int i;
                l_164++;
            }
            for (g_66 = 0; (g_66 <= 2); g_66 += 1)
            {
                int l_187 = 0x2966B7A6L;
                int l_188 = 0xA090F8D5L;
                int l_193 = 1L;
                int l_194 = (-10L);
                int l_195 = (-1L);
                int l_197 = 0x28FBAF89L;
                unsigned l_221 = 4294967295UL;
                int i;
                if (g_74[p_47])
                {
                    for (l_158 = 0; (l_158 < 25); ++l_158)
                    {
                        --l_169[6][3][5];
                    }
                }
                else
                {
                    short l_175 = 0L;
                    int l_180[8];
                    unsigned *l_227 = &l_221;
                    unsigned l_237 = 0UL;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_180[i] = 3L;
                    if ((safe_rshift_func_int8_t_s_s(g_26, p_47)))
                    {
                        int *l_176 = (void*)0;
                        int *l_177 = &l_174[2];
                        int *l_178[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_178[i] = &g_74[1];
                        l_184++;
                        ++g_199;
                        if (l_184)
                            continue;
                    }
                    else
                    {
                        int *l_202 = &l_190;
                        unsigned ***l_205 = (void*)0;
                        unsigned ***l_206 = &l_203[2][3][0];
                        int *l_207 = &g_74[2];
                        int *l_208 = &l_196;
                        int *l_209 = &l_183;
                        int *l_210 = &l_196;
                        int *l_211[3][3] = {{&l_174[2], &l_174[2], &l_196}, {&l_174[2], &l_174[2], &l_196}, {&l_174[2], &l_174[2], &l_196}};
                        long long l_220 = 0xEC39C9EFF2C24C43LL;
                        int i, j;
                        (*l_202) &= (*g_82);
                        if (p_48)
                            break;
                        (*l_206) = l_203[2][3][0];
                        --l_221;
                    }
                    if ((g_113.f3 <= (safe_sub_func_int8_t_s_s(g_110.f0, (p_48 ^ ((g_226 = &l_221) != l_227))))))
                    {
                        int *l_228 = &l_193;
                        int *l_229 = &g_91;
                        int *l_230 = &l_183;
                        int *l_231 = &l_212;
                        int *l_232 = &l_217;
                        int *l_233 = (void*)0;
                        int *l_234 = &l_214;
                        int *l_235 = &g_91;
                        int *l_236[8][8];
                        int **l_240 = &l_231;
                        long long *l_243 = &l_192;
                        unsigned short *l_250 = &l_158;
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_236[i][j] = &l_194;
                        }
                        ++l_237;
                        (*l_240) = l_236[0][2];
                        (*l_240) = &l_174[2];
                        l_213[2][2][6] = (((*l_243) |= (l_174[0] != (safe_add_func_int32_t_s_s(1L, (((*l_240) = &l_190) == &l_216))))) == (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x05L, (~g_113.f1))), ((l_216 &= (0x34A74F643CFA673BLL < (safe_lshift_func_uint8_t_u_u((l_250 == &l_184), l_158)))) || p_48))));
                    }
                    else
                    {
                        (*g_82) = l_214;
                        return g_251;
                    }
                    for (g_113.f3 = 0; g_113.f3 < 3; g_113.f3 += 1)
                    {
                        g_74[g_113.f3] = 0x9C4B8A8CL;
                    }
                    if (l_218[2][0][0])
                    {
                        int **l_254 = &g_253;
                        int * const l_255 = (void*)0;
                        int **l_256 = &g_253;
                        (*l_254) = g_253;
                        (*l_256) = l_255;
                    }
                    else
                    {
                        volatile struct S2 *l_258 = &g_119;
                        (*l_258) = g_257[9][7];
                    }
                }
                for (l_181 = 0; (l_181 >= (-28)); l_181--)
                {
                    unsigned l_268 = 18446744073709551612UL;
                    int l_272[9][4][7] = {{{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}, {{0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}, {0x05F52BBEL, 0x1FCDCB08L, (-4L), (-1L), 0x068D99A1L, 0L, (-7L)}}};
                    short *l_279 = &g_26;
                    int i, j, k;
                    if ((*g_82))
                    {
                        int *l_261 = &g_74[0];
                        int *l_262 = &l_189;
                        int *l_263 = &l_188;
                        int *l_264 = (void*)0;
                        int *l_265 = &g_93;
                        int *l_266[6];
                        short l_267 = 0x99D8L;
                        int **l_271 = &l_262;
                        unsigned l_273 = 0x59B9E4EDL;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_266[i] = &g_74[1];
                        --l_268;
                        (*l_271) = &l_191;
                        ++l_273;
                    }
                    else
                    {
                        l_276 = &l_190;
                        if (p_47)
                            break;
                    }
                    (*g_82) ^= (safe_lshift_func_int16_t_s_s(((*l_276) > (((*l_279) = (p_48 > p_47)) > l_195)), (*l_276)));
                    if (g_74[p_47])
                        continue;
                }
            }
        }
        (*g_82) &= 1L;
        l_280 = &l_219[8][0];
    }
    if (((((((0x9901L || ((*l_287) = ((0x50L == (safe_div_func_uint16_t_u_u((((g_84.f3 & ((l_212 != (l_215 < (safe_sub_func_int32_t_s_s((+(&g_62 != l_286)), p_48)))) > l_212)) >= l_182) ^ l_182), p_48))) == l_219[4][0]))) >= (-1L)) | l_288) | 8L) == 0x9BL) == g_62))
    {
        char l_289 = 0L;
        int *l_290[8];
        short *l_300 = &g_84.f1;
        int **l_301 = &l_290[5];
        short l_302 = (-7L);
        unsigned short l_385 = 3UL;
        int l_520[4];
        int i;
        for (i = 0; i < 8; i++)
            l_290[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_520[i] = 5L;
        if (l_289)
        {
            int **l_291 = &g_253;
            char *l_292 = &l_289;
            char *l_293 = &g_294;
            unsigned char *l_295[3][3][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
            unsigned *l_297[8][3] = {{(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}, {(void*)0, &l_288, (void*)0}};
            int i, j, k;
            l_179 = (((l_290[6] != ((*l_291) = (void*)0)) ^ (l_196 = ((g_296[1] = (g_84.f1 != ((*l_293) |= ((*l_292) = ((p_47 | p_48) != p_48))))) || p_47))) >= p_47);
        }
        else
        {
            unsigned char l_298[9][6][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
            int i, j, k;
            for (l_216 = 1; (l_216 >= 0); l_216 -= 1)
            {
                for (l_215 = 1; (l_215 >= 0); l_215 -= 1)
                {
                    int i;
                    if (g_296[l_215])
                        break;
                    l_298[0][5][0] &= g_296[l_216];
                }
                for (g_110.f0 = 1; (g_110.f0 <= 7); g_110.f0 += 1)
                {
                    char l_299 = 0xE7L;
                    l_299 |= l_216;
                }
            }
        }
        l_302 = ((p_47 == (l_212 & (0UL != p_48))) != (((&l_290[6] != l_301) < (((((p_48 && g_113.f0) || p_47) >= g_74[2]) <= g_74[2]) & p_48)) > g_4));
        if ((safe_unary_minus_func_uint8_t_u(0x42L)))
        {
            unsigned short l_304 = 0UL;
            unsigned char *l_326 = (void*)0;
            unsigned char **l_325 = &l_326;
            char l_335[10] = {(-1L), (-7L), (-1L), (-7L), (-1L), (-7L), (-1L), (-7L), (-1L), (-7L)};
            int l_339 = 0x60B7FFACL;
            int l_341 = 0x110622E4L;
            int l_342[9];
            int l_360 = 0L;
            int *l_361 = &l_342[1];
            int l_391 = 0x66B427F6L;
            int i;
            for (i = 0; i < 9; i++)
                l_342[i] = 0x09C5ECDFL;
            l_304--;
            if (l_304)
            {
                unsigned l_319 = 18446744073709551615UL;
                unsigned char **l_328 = &l_326;
                int l_344 = 0L;
                int l_346 = 0x3BEECCE7L;
                int l_348 = 3L;
                int l_349 = 0L;
                int l_350 = 1L;
                int l_351[10][1];
                struct S2 *l_356[9] = {&g_320[3][2][0], (void*)0, &g_320[3][2][0], (void*)0, &g_320[3][2][0], (void*)0, &g_320[3][2][0], (void*)0, &g_320[3][2][0]};
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_351[i][j] = 0x2163F3EDL;
                }
                for (g_62 = 0; (g_62 >= 16); g_62++)
                {
                    struct S2 *l_330 = &g_320[3][2][0];
                    struct S2 ** const l_329 = &l_330;
                    int l_334 = 0xC92F24F9L;
                    int l_336 = (-1L);
                    int l_337 = 0xDF8E7A06L;
                    int l_340 = 0x7A34ADDEL;
                    short l_343[8][3][6] = {{{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}, {{0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}, {0L, 0x50F5L, 0L, 0x1A99L, (-1L), 1L}}};
                    int l_345[6] = {0L, 0xE8BBB80AL, 0L, 0xE8BBB80AL, 0L, 0xE8BBB80AL};
                    int i, j, k;
                    for (l_196 = 1; (l_196 >= 0); l_196 -= 1)
                    {
                        short *l_317 = &g_4;
                        unsigned short *l_318 = &l_158;
                        struct S2 *l_321 = &g_110;
                        int i;
                        l_319 ^= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(g_296[l_196], (safe_sub_func_uint16_t_u_u(p_48, g_296[1])))), 3UL)), ((*l_318) = 0x8B2FL)));
                        (*l_321) = g_320[3][2][0];
                        l_322 |= p_48;
                        (*l_301) = &l_219[8][0];
                    }
                    if (p_48)
                        break;
                    for (g_66 = 7; (g_66 != 60); g_66 = safe_add_func_uint64_t_u_u(g_66, 8))
                    {
                        unsigned char ***l_327[1][6];
                        struct S2 **l_332[8][6] = {{&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}, {&l_330, (void*)0, &l_330, (void*)0, &l_330, (void*)0}};
                        struct S2 ***l_331 = &l_332[5][2];
                        int l_333 = 0x3C02C39FL;
                        int l_338[9][4] = {{0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}, {0x6A124C8AL, 6L, 0L, 0L}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_327[i][j] = &l_325;
                        }
                        l_328 = l_325;
                        (*l_331) = l_329;
                        l_353--;
                        l_334 &= p_48;
                    }
                    (*l_329) = l_356[0];
                }
                l_360 = (g_357 != &l_325);
                l_361 = &l_341;
                (*l_301) = (void*)0;
            }
            else
            {
                unsigned char l_362 = 0xD4L;
                int l_381 = (-3L);
                int l_383 = 0L;
                unsigned char l_390 = 0x66L;
                --l_362;
                if ((!p_48))
                {
                    short **l_365 = &l_283;
                    g_320[3][5][0] = g_257[6][2];
                    return &g_252;
                }
                else
                {
                    short *l_368 = &l_302;
                    unsigned char *l_375 = &l_362;
                    long long *l_376[5][4] = {{(void*)0, (void*)0, &g_352, &g_352}, {(void*)0, (void*)0, &g_352, &g_352}, {(void*)0, (void*)0, &g_352, &g_352}, {(void*)0, (void*)0, &g_352, &g_352}, {(void*)0, (void*)0, &g_352, &g_352}};
                    int l_377 = 0L;
                    int l_384 = 0xB05A4B86L;
                    char l_392 = 0x9EL;
                    int i, j;
                    if ((((0xC5D3A1B649CEFE80LL || ((safe_rshift_func_uint8_t_u_u((g_294 || ((g_113.f3 && ((void*)0 == l_368)) < p_48)), 6)) ^ (l_377 |= ((safe_lshift_func_uint16_t_u_u(((1L ^ (safe_add_func_uint8_t_u_u(((*l_375) &= (++(***g_357))), p_47))) | 0L), (*l_361))) & p_48)))) || 0x8208D35800486BCBLL) ^ p_47))
                    {
                        int l_378 = 0x827F8BF8L;
                        int l_379 = 0xFF98DC5EL;
                        int l_380 = 1L;
                        int l_382[3][10][5] = {{{1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}}, {{1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}}, {{1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}, {1L, 1L, 3L, 0xE9FB503FL, 0xFC02D5F3L}}};
                        int i, j, k;
                        l_385--;
                    }
                    else
                    {
                        int * const l_388[2] = {&g_74[2], &g_74[2]};
                        int **l_389 = &g_253;
                        int i;
                        (*l_389) = l_388[0];
                        (*g_253) = (l_183 == l_390);
                    }
                    l_393--;
                }
            }
            return &g_252;
        }
        else
        {
            unsigned char l_416 = 1UL;
            int l_420 = 0x5B9A6F34L;
            int l_421 = 0x7596E633L;
            int l_422 = 1L;
            int l_429 = 0L;
            int l_433 = 2L;
            int l_434 = 0xB0A15BF7L;
            int l_438 = 0xE2BEA773L;
            int l_439[2][4][8] = {{{0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}}, {{0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}, {0x68ACDA1DL, (-8L), 0x68ACDA1DL, 7L, 0xCF578B21L, 0x65A12643L, (-4L), (-4L)}}};
            short *l_462 = (void*)0;
            unsigned char l_474 = 0UL;
            char l_475 = 0x81L;
            char l_490 = 0xCFL;
            struct S2 *l_508 = &g_113;
            int i, j, k;
            if (l_216)
            {
                int *l_396 = &g_74[2];
                (*l_301) = l_396;
            }
            else
            {
                long long l_401 = (-1L);
                int l_415 = 1L;
                int l_419 = (-1L);
                int l_430 = 0xAC59E360L;
                int l_432[3][10] = {{(-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L, (-1L), 0x412AF69FL, (-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L}, {(-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L, (-1L), 0x412AF69FL, (-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L}, {(-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L, (-1L), 0x412AF69FL, (-1L), 0x40818F64L, 0x21DE3E40L, 0x40818F64L}};
                char l_435 = 8L;
                unsigned long long *l_454[4];
                unsigned l_477[5];
                struct S0 *l_492 = (void*)0;
                struct S0 **l_491 = &l_492;
                short *l_511 = &g_26;
                unsigned char l_519[10][3] = {{0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}, {0x2BL, 0x2BL, 249UL}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_454[i] = &l_322;
                for (i = 0; i < 5; i++)
                    l_477[i] = 1UL;
                for (l_158 = 0; (l_158 >= 56); l_158 = safe_add_func_int16_t_s_s(l_158, 2))
                {
                    char *l_411 = (void*)0;
                    char *l_412 = &l_289;
                    char *l_413 = &g_294;
                    unsigned *l_414[2];
                    char *l_417 = &g_418;
                    int l_427 = 0L;
                    int l_428 = 0L;
                    long long l_431 = 0x87BE189F12A10014LL;
                    int l_437[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_414[i] = &g_62;
                    for (i = 0; i < 2; i++)
                        l_437[i] = 0x9D91C45EL;
                    for (l_198 = 7; (l_198 >= 0); l_198 -= 1)
                    {
                        int i;
                        l_290[l_198] = &l_217;
                    }
                    if (((0xB7B1E6DDBA057D42LL & (safe_mod_func_int8_t_s_s(p_47, (l_401 & g_72)))) | (p_48 != (l_419 = ((((~((((*g_359) = (safe_sub_func_uint32_t_u_u((((*l_417) = (((l_415 = ((((*l_413) = ((*l_412) = ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((l_409[0][0][0] != &g_143), 3)), p_48)) && 0x5BC6B83DL))) || (*g_359)) != g_257[9][7].f1)) && l_416) <= p_48)) <= 1UL), p_47))) || (*g_359)) != 0UL)) && g_62) || g_110.f0) < g_72)))))
                    {
                        long long l_423[9] = {0xC1722AE4D3205230LL, 0xA764CA39CA3C453FLL, 0xC1722AE4D3205230LL, 0xA764CA39CA3C453FLL, 0xC1722AE4D3205230LL, 0xA764CA39CA3C453FLL, 0xC1722AE4D3205230LL, 0xA764CA39CA3C453FLL, 0xC1722AE4D3205230LL};
                        int l_424 = 0xF49B9F77L;
                        int l_425 = 0x191ADE33L;
                        int l_426[9];
                        int l_440 = (-3L);
                        unsigned l_441 = 3UL;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_426[i] = (-1L);
                        l_441++;
                    }
                    else
                    {
                        const volatile struct S2 *l_445 = &g_257[8][1];
                        const volatile struct S2 **l_444 = &l_445;
                        struct S2 *l_447 = &g_84;
                        (*l_444) = &g_257[1][5];
                        (*l_301) = (void*)0;
                        (*l_447) = g_446;
                    }
                }
                if ((safe_div_func_int16_t_s_s(p_48, (safe_add_func_int8_t_s_s(p_47, (0xC8F7758FE24823B7LL < (l_432[1][8] = (safe_mod_func_uint32_t_u_u(p_48, l_433)))))))))
                {
                    short *l_455 = &g_446.f1;
                    int l_456 = 0x8921C41CL;
                    int l_469[9];
                    long long l_470 = (-1L);
                    long long l_476 = 0x053E406C25C2115DLL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_469[i] = 0x46489C6DL;
                    if (l_456)
                    {
                        unsigned char l_457 = 0x83L;
                        short *l_461 = &g_446.f1;
                        --l_457;
                        (*l_301) = &l_434;
                        l_421 |= (((*g_359) = ((void*)0 == g_460)) != (l_456 | (l_456 | (safe_mod_func_uint16_t_u_u(1UL, ((((~p_48) ^ g_93) | 0x2A1ED7A2L) || l_456))))));
                        l_198 ^= l_433;
                    }
                    else
                    {
                        l_421 = (g_320[3][2][0].f0 == ((18446744073709551615UL == g_66) == p_48));
                    }
                    for (g_62 = 0; (g_62 > 8); g_62 = safe_add_func_int32_t_s_s(g_62, 2))
                    {
                        unsigned short l_471 = 1UL;
                        --l_471;
                    }
                    l_474 |= 1L;
                    l_477[1]--;
                }
                else
                {
                    unsigned short l_489 = 0xC9A3L;
                    for (g_418 = 0; (g_418 <= 2); g_418 += 1)
                    {
                        unsigned *l_482 = &g_66;
                        unsigned char **l_488 = (void*)0;
                        unsigned char ***l_487 = &l_488;
                        l_420 ^= (l_489 &= (p_47 & (((*l_482) = (safe_add_func_int32_t_s_s(0xFB478DB4L, (0xEE8830AE218EC792LL == p_47)))) != (((g_294 < (l_485 == ((*l_487) = &l_486))) & p_48) | l_219[8][0]))));
                        if (p_48)
                            continue;
                        l_490 = l_489;
                    }
                }
                (*l_491) = (void*)0;
                for (g_110.f0 = 12; (g_110.f0 <= (-15)); g_110.f0--)
                {
                    short * const l_497 = (void*)0;
                    short **l_498 = (void*)0;
                    int l_500 = 0xBFACB195L;
                    unsigned short l_516 = 0x67D9L;
                    unsigned short l_517 = 65535UL;
                    int l_518 = 0xF8A36BE2L;
                    for (l_393 = 0; (l_393 > 19); l_393++)
                    {
                        short **l_499 = &l_283;
                        int l_501 = (-1L);
                        struct S2 *l_503[4] = {&g_84, &g_502, &g_84, &g_502};
                        int i;
                        l_432[0][9] = p_47;
                        (*l_301) = (*l_301);
                        g_502 = g_502;
                    }
                    l_519[1][0] = ((l_212 = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_48 | ((void*)0 != l_508)), (((l_518 &= (safe_rshift_func_uint16_t_u_u((p_48 ^ (safe_mod_func_uint8_t_u_u((((void*)0 == &l_419) < (((l_516 = ((safe_div_func_uint8_t_u_u((p_47 && l_430), p_48)) > p_47)) >= 4294967291UL) ^ l_500)), l_517))), 14))) >= 0xF81F2BF2L) ^ l_198))), (*g_359)))) | 0UL);
                }
            }
            l_179 = l_416;
        }
        l_521[1]--;
    }
    else
    {
        int l_539 = 1L;
        int l_540 = 0x4752E512L;
        int l_542 = 1L;
        int l_543[4][7] = {{0L, 0x8A060F32L, 0L, 0xCC3D6DD1L, 1L, 1L, (-6L)}, {0L, 0x8A060F32L, 0L, 0xCC3D6DD1L, 1L, 1L, (-6L)}, {0L, 0x8A060F32L, 0L, 0xCC3D6DD1L, 1L, 1L, (-6L)}, {0L, 0x8A060F32L, 0L, 0xCC3D6DD1L, 1L, 1L, (-6L)}};
        unsigned short l_544 = 0xFAB7L;
        int *l_552 = &g_74[1];
        short l_581 = (-2L);
        long long l_651 = (-1L);
        short l_665 = 9L;
        char l_666 = 0L;
        int i, j;
        for (g_446.f0 = 0; (g_446.f0 != (-24)); g_446.f0--)
        {
            return &g_252;
        }
        for (l_212 = 0; (l_212 == (-3)); l_212 = safe_sub_func_uint32_t_u_u(l_212, 3))
        {
            const int *l_528[3][10] = {{&l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198}, {&l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198}, {&l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198, &l_183, &l_198, &l_219[5][0], &l_198}};
            const int **l_529 = (void*)0;
            const int **l_530 = (void*)0;
            const int **l_531 = &l_528[0][1];
            int *l_532 = &l_217;
            int l_533 = 0L;
            int *l_534 = &g_93;
            int *l_535 = (void*)0;
            int *l_536 = &l_179;
            int *l_537 = (void*)0;
            int *l_538[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_538[i] = &l_533;
            (*l_531) = l_528[0][1];
            ++l_544;
        }
        for (l_214 = 0; (l_214 <= 1); l_214 += 1)
        {
            int l_547 = 1L;
            unsigned char l_549 = 1UL;
            int l_556 = 0x33099D70L;
            short *l_578[9];
            int l_596 = (-2L);
            unsigned *l_605 = &l_288;
            int l_613 = (-5L);
            int l_615 = 0xAB5D81BFL;
            int l_616 = 0x2D09F9A3L;
            const int *l_621 = (void*)0;
            unsigned l_631 = 0xD1DDFEEFL;
            unsigned l_639 = 9UL;
            int l_655 = 0x977BE0C5L;
            int l_657 = 0x94D3DADCL;
            int l_658 = 0L;
            int l_660 = 0x2D69188BL;
            unsigned char l_661[10];
            int i;
            for (i = 0; i < 9; i++)
                l_578[i] = &l_347;
            for (i = 0; i < 10; i++)
                l_661[i] = 0xA1L;
            for (g_66 = 0; (g_66 <= 1); g_66 += 1)
            {
                int *l_548[7][1] = {{&l_179}, {&l_179}, {&l_179}, {&l_179}, {&l_179}, {&l_179}, {&l_179}};
                int i, j;
                l_181 &= (l_521[g_66] != (l_543[(g_66 + 2)][l_214] != ((*l_287) = (&g_81[6][4][1] == (void*)0))));
                l_549++;
                l_552 = &l_543[(g_66 + 2)][l_214];
                for (g_110.f0 = 0; (g_110.f0 == (-4)); g_110.f0 = safe_sub_func_uint16_t_u_u(g_110.f0, 2))
                {
                    return &g_252;
                }
            }
            for (l_547 = 0; (l_547 <= 2); l_547 += 1)
            {
                unsigned l_557 = 1UL;
                unsigned long long *l_566 = &l_322;
                int *l_569 = &g_93;
                for (l_393 = 0; (l_393 <= 0); l_393 += 1)
                {
                    int ***l_555 = &g_81[3][2][2];
                    int i, j;
                    for (g_66 = 0; (g_66 <= 1); g_66 += 1)
                    {
                        int i, j;
                        if (l_521[g_66])
                            break;
                        l_219[g_66][l_393] = g_74[l_547];
                    }
                    (*l_555) = &g_253;
                    l_219[(l_214 + 3)][l_393] &= 0x804B755FL;
                    l_556 = ((!(l_521[l_214] | (l_521[l_214] ^ g_74[(l_393 + 1)]))) != l_219[(l_214 + 6)][l_393]);
                }
                ++l_557;
                (*l_569) = (0x54L >= (((void*)0 != &g_81[3][2][2]) ^ (safe_add_func_int32_t_s_s((p_48 >= (safe_rshift_func_int8_t_s_s(p_47, 5))), ((*l_552) = (safe_lshift_func_uint8_t_u_s((((*l_566) = 0x2F52AD3F88178891LL) > ((safe_rshift_func_uint16_t_u_u(l_549, l_557)) & 0x740C7F038F97FC73LL)), g_199)))))));
            }
            if ((safe_sub_func_int32_t_s_s((l_556 = ((safe_rshift_func_uint8_t_u_u(l_521[l_214], 3)) & 3UL)), ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((p_47 & (p_48 > 1L)), (**g_358))), (p_47 <= p_47))) == p_47))))
            {
                int *l_579 = &l_214;
                (*l_552) |= p_47;
                l_580[5] = l_579;
                if (l_581)
                    break;
                (*l_552) |= (((void*)0 == g_582) != 1L);
            }
            else
            {
                unsigned char l_585[4];
                int **l_588 = (void*)0;
                int **l_589 = (void*)0;
                int **l_590 = &l_580[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_585[i] = 6UL;
                --l_585[3];
                (*l_590) = &l_556;
            }
            if ((l_556 ^ p_48))
            {
                unsigned l_617 = 0xF8D3C428L;
                int l_620 = 0x535B56FAL;
                int l_625 = 0xB14910D4L;
                int l_626 = 0L;
                int l_627 = 0x546B6B9EL;
                int l_628 = 0x06104786L;
                short l_629[5][10][1] = {{{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}};
                int l_630[4] = {0x29B3F929L, 0xBFBA457DL, 0x29B3F929L, 0xBFBA457DL};
                int i, j, k;
                g_591--;
                for (g_352 = 0; (g_352 <= 22); g_352 = safe_add_func_int64_t_s_s(g_352, 2))
                {
                    int *l_597[4][8][6] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
                    int **l_598 = &g_253;
                    int i, j, k;
                    l_596 = (l_556 = (1L & ((**g_358) &= l_521[l_214])));
                    (*l_598) = l_597[0][0][0];
                    (*l_552) &= (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((18446744073709551615UL & ((void*)0 == l_605)), p_47)), p_47)), (safe_sub_func_uint64_t_u_u(p_47, 18446744073709551606UL))));
                }
                if ((safe_lshift_func_uint8_t_u_u((*g_359), 2)))
                {
                    char l_614 = 0x81L;
                    for (g_113.f1 = 5; (g_113.f1 < (-19)); --g_113.f1)
                    {
                        int **l_612 = &l_580[4];
                        (*l_612) = &l_596;
                    }
                    l_617++;
                    l_620 = (*l_552);
                }
                else
                {
                    const int **l_622 = (void*)0;
                    const int **l_623 = &l_621;
                    unsigned ***l_624 = &g_143;
                    (*l_623) = l_621;
                    (*l_624) = &g_226;
                    l_631++;
                }
                (*l_552) = (((*l_605) = (safe_unary_minus_func_uint32_t_u(0x399EEA7AL))) >= ((safe_div_func_uint16_t_u_u(g_591, 0x55E3L)) >= (*l_552)));
            }
            else
            {
                unsigned l_646 = 0x2C87CEBCL;
                int l_647 = 0xA8B4200AL;
                int l_648 = 1L;
                int l_649 = (-9L);
                int l_650 = 0xA880C6E6L;
                int l_652 = 0xD00D50F9L;
                int l_653 = (-1L);
                int l_654 = 1L;
                int l_656[4][2][9] = {{{(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}, {(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}}, {{(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}, {(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}}, {{(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}, {(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}}, {{(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}, {(-5L), 0x7CCD37A4L, 0x19BFA784L, 0x7CCD37A4L, (-5L), (-1L), (-5L), 0x7CCD37A4L, 0x19BFA784L}}};
                int i, j, k;
                (*l_552) &= p_48;
                if (p_47)
                    continue;
                (*l_552) ^= (l_615 = (safe_mod_func_uint8_t_u_u((l_639 <= ((void*)0 == (*g_582))), ((safe_div_func_int64_t_s_s((0x0EL ^ (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(((*l_287) = (p_47 != 0x1482D75E0EB6DFD1LL)), 5)) > (&g_252 == (g_251 = (void*)0))), p_48))), g_110.f2)) ^ l_646))));
                ++l_661[4];
            }
        }
        ++l_667[4];
    }
    return &g_252;
}







static unsigned char func_49(short * p_50, short * p_51)
{
    const short l_76 = 0x3ECDL;
    int l_94 = 0xF127D3B8L;
    int l_128 = (-7L);
    int l_129 = 0xF13D9F7CL;
    int l_130 = 0x88BF1FB4L;
    int l_131 = 0L;
    int l_132 = 0xEB9788E8L;
    int l_133 = 0xAC2647FDL;
    int l_134 = 0xDB4F9E29L;
    int l_136 = (-8L);
    int l_137[9][5][5] = {{{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}, {{0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}, {0x48876613L, 0x23432199L, 0x8BACA3D2L, 3L, (-1L)}}};
    unsigned l_140 = 0x2D2754F7L;
    int *l_156[7];
    int *l_157 = &l_129;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_156[i] = &l_134;
    if ((l_76 != g_62))
    {
        long long l_114 = 0xB271CF4EE93D3DD4LL;
        int l_127[1][8][6] = {{{0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}, {0x174CE2EAL, 1L, 0x9EDE0374L, (-1L), 0xF44F8647L, (-1L)}}};
        long long l_135 = 0x3A565356F8BEA3A2LL;
        char l_139 = (-4L);
        int l_147 = (-6L);
        int i, j, k;
        if (g_62)
        {
            volatile struct S2 *l_120 = &g_119;
            int l_125 = 0xD791078BL;
            int *l_126[3][5][7] = {{{&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}}, {{&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}}, {{&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}, {&l_125, &g_91, &g_91, &g_93, &g_74[2], (void*)0, &l_94}}};
            char l_138 = 0x0DL;
            int i, j, k;
            for (g_72 = 0; (g_72 < 35); g_72 = safe_add_func_int32_t_s_s(g_72, 1))
            {
                int *l_117 = &g_93;
                for (g_66 = 0; (g_66 <= 2); g_66 += 1)
                {
                    unsigned l_89 = 4294967295UL;
                    int *l_95 = &l_94;
                    int l_96[7] = {0x734C6381L, 0x734C6381L, 0xB95FE78FL, 0x734C6381L, 0x734C6381L, 0xB95FE78FL, 0x734C6381L};
                    int *l_97 = &g_74[2];
                    int *l_98 = &g_91;
                    int *l_99 = &l_94;
                    int *l_100 = &l_96[3];
                    int *l_101 = &g_74[2];
                    int *l_102 = &l_96[6];
                    int *l_103 = (void*)0;
                    int *l_104 = &g_91;
                    int *l_105 = &g_93;
                    int *l_106 = &g_91;
                    struct S2 *l_111 = (void*)0;
                    struct S2 *l_112[2][6][10] = {{{(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}}, {{(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}, {(void*)0, &g_84, &g_84, &g_84, &g_110, &g_110, &g_110, &g_84, &g_84, (void*)0}}};
                    int i, j, k;
                    for (g_26 = 0; (g_26 <= 2); g_26 += 1)
                    {
                        const short *l_80 = &l_76;
                        const short **l_79 = &l_80;
                        int ***l_83 = &g_81[3][2][2];
                        struct S2 *l_85 = &g_84;
                        short *l_87 = (void*)0;
                        short *l_88 = &g_84.f1;
                        int *l_90 = &g_91;
                        int *l_92[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_92[i] = &g_93;
                        g_74[g_66] = (((*l_79) = &l_76) == &g_26);
                        (*l_83) = g_81[3][2][2];
                        (*l_85) = g_84;
                        l_94 |= ((*l_90) |= (((*l_88) = (safe_unary_minus_func_int16_t_s(g_74[g_26]))) >= l_89));
                    }
                    ++g_107;
                    g_113 = g_110;
                    if (l_114)
                        break;
                }
                for (g_84.f0 = 0; (g_84.f0 >= (-30)); --g_84.f0)
                {
                    int **l_118 = &l_117;
                    (*l_118) = l_117;
                }
                (*g_82) &= l_94;
            }
            (*l_120) = g_119;
            for (g_84.f1 = 0; (g_84.f1 == (-1)); --g_84.f1)
            {
                (*g_82) = (safe_sub_func_int32_t_s_s(l_125, 1L));
                return l_125;
            }
            --l_140;
        }
        else
        {
            unsigned ***l_144 = (void*)0;
            g_143 = g_143;
            return l_139;
        }
        for (g_113.f0 = 4; (g_113.f0 >= 1); g_113.f0 -= 1)
        {
            int *l_145 = &l_134;
            int *l_146[2];
            unsigned l_148 = 0xFBFE8984L;
            short *l_154[4];
            short **l_153 = &l_154[2];
            int i;
            for (i = 0; i < 2; i++)
                l_146[i] = &l_136;
            for (i = 0; i < 4; i++)
                l_154[i] = &g_110.f1;
            --l_148;
            l_137[8][1][0] = (g_4 ^ ((l_153 = (void*)0) != (void*)0));
            return g_62;
        }
    }
    else
    {
        int **l_155[9] = {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82};
        int i;
        (*g_82) |= ((l_156[1] = &l_134) != (l_157 = (void*)0));
    }
    return g_110.f3;
}







static short * func_52(short * const p_53, short ** p_54, short ** p_55, int p_56)
{
    unsigned *l_61 = &g_62;
    unsigned *l_65 = &g_66;
    const int l_67 = (-2L);
    unsigned short *l_70 = (void*)0;
    unsigned short *l_71 = &g_72;
    int *l_73[7][3][10] = {{{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}, {{&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}, {&g_74[1], &g_74[2], (void*)0, &g_74[2], &g_74[2], &g_74[2], &g_74[1], (void*)0, &g_74[2], &g_74[2]}}};
    int i, j, k;
    g_74[2] |= (((*l_71) |= (safe_add_func_uint8_t_u_u((((g_26 == (p_56 | ((*l_61)--))) | (l_65 != l_65)) > l_67), (((safe_mod_func_int64_t_s_s(((0xFBF73ECBL ^ 0xEF2D6A39L) ^ g_26), 8UL)) || l_67) != 0x3003393DL)))) && 1UL);
    g_74[0] = (g_4 == (g_26 == 0x6FEBL));
    return l_71;
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
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_110.f0, "g_110.f0", print_hash_value);
    transparent_crc(g_110.f1, "g_110.f1", print_hash_value);
    transparent_crc(g_110.f2, "g_110.f2", print_hash_value);
    transparent_crc(g_110.f3, "g_110.f3", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_113.f3, "g_113.f3", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_257[i][j].f0, "g_257[i][j].f0", print_hash_value);
            transparent_crc(g_257[i][j].f1, "g_257[i][j].f1", print_hash_value);
            transparent_crc(g_257[i][j].f2, "g_257[i][j].f2", print_hash_value);
            transparent_crc(g_257[i][j].f3, "g_257[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_294, "g_294", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_296[i], "g_296[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_320[i][j][k].f0, "g_320[i][j][k].f0", print_hash_value);
                transparent_crc(g_320[i][j][k].f1, "g_320[i][j][k].f1", print_hash_value);
                transparent_crc(g_320[i][j][k].f2, "g_320[i][j][k].f2", print_hash_value);
                transparent_crc(g_320[i][j][k].f3, "g_320[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_446.f0, "g_446.f0", print_hash_value);
    transparent_crc(g_446.f1, "g_446.f1", print_hash_value);
    transparent_crc(g_446.f2, "g_446.f2", print_hash_value);
    transparent_crc(g_446.f3, "g_446.f3", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_584.f0, "g_584.f0", print_hash_value);
    transparent_crc(g_584.f1, "g_584.f1", print_hash_value);
    transparent_crc(g_584.f2, "g_584.f2", print_hash_value);
    transparent_crc(g_584.f3, "g_584.f3", print_hash_value);
    transparent_crc(g_584.f4, "g_584.f4", print_hash_value);
    transparent_crc(g_584.f5, "g_584.f5", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_711.f0, "g_711.f0", print_hash_value);
    transparent_crc(g_711.f1, "g_711.f1", print_hash_value);
    transparent_crc(g_711.f2, "g_711.f2", print_hash_value);
    transparent_crc(g_711.f3, "g_711.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_825[i][j], "g_825[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_828.f0, "g_828.f0", print_hash_value);
    transparent_crc(g_828.f1, "g_828.f1", print_hash_value);
    transparent_crc(g_828.f2, "g_828.f2", print_hash_value);
    transparent_crc(g_828.f3, "g_828.f3", print_hash_value);
    transparent_crc(g_829.f0, "g_829.f0", print_hash_value);
    transparent_crc(g_829.f1, "g_829.f1", print_hash_value);
    transparent_crc(g_829.f2, "g_829.f2", print_hash_value);
    transparent_crc(g_829.f3, "g_829.f3", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_845[i][j][k].f0, "g_845[i][j][k].f0", print_hash_value);
                transparent_crc(g_845[i][j][k].f1, "g_845[i][j][k].f1", print_hash_value);
                transparent_crc(g_845[i][j][k].f2, "g_845[i][j][k].f2", print_hash_value);
                transparent_crc(g_845[i][j][k].f3, "g_845[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_877.f0, "g_877.f0", print_hash_value);
    transparent_crc(g_877.f1, "g_877.f1", print_hash_value);
    transparent_crc(g_877.f2, "g_877.f2", print_hash_value);
    transparent_crc(g_877.f3, "g_877.f3", print_hash_value);
    transparent_crc(g_877.f4, "g_877.f4", print_hash_value);
    transparent_crc(g_877.f5, "g_877.f5", print_hash_value);
    transparent_crc(g_880.f0, "g_880.f0", print_hash_value);
    transparent_crc(g_880.f1, "g_880.f1", print_hash_value);
    transparent_crc(g_880.f2, "g_880.f2", print_hash_value);
    transparent_crc(g_880.f3, "g_880.f3", print_hash_value);
    transparent_crc(g_880.f4, "g_880.f4", print_hash_value);
    transparent_crc(g_880.f5, "g_880.f5", print_hash_value);
    transparent_crc(g_881.f0, "g_881.f0", print_hash_value);
    transparent_crc(g_881.f1, "g_881.f1", print_hash_value);
    transparent_crc(g_881.f2, "g_881.f2", print_hash_value);
    transparent_crc(g_881.f3, "g_881.f3", print_hash_value);
    transparent_crc(g_881.f4, "g_881.f4", print_hash_value);
    transparent_crc(g_881.f5, "g_881.f5", print_hash_value);
    transparent_crc(g_882.f0, "g_882.f0", print_hash_value);
    transparent_crc(g_882.f1, "g_882.f1", print_hash_value);
    transparent_crc(g_882.f2, "g_882.f2", print_hash_value);
    transparent_crc(g_882.f3, "g_882.f3", print_hash_value);
    transparent_crc(g_882.f4, "g_882.f4", print_hash_value);
    transparent_crc(g_882.f5, "g_882.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_883[i][j].f0, "g_883[i][j].f0", print_hash_value);
            transparent_crc(g_883[i][j].f1, "g_883[i][j].f1", print_hash_value);
            transparent_crc(g_883[i][j].f2, "g_883[i][j].f2", print_hash_value);
            transparent_crc(g_883[i][j].f3, "g_883[i][j].f3", print_hash_value);
            transparent_crc(g_883[i][j].f4, "g_883[i][j].f4", print_hash_value);
            transparent_crc(g_883[i][j].f5, "g_883[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_884.f0, "g_884.f0", print_hash_value);
    transparent_crc(g_884.f1, "g_884.f1", print_hash_value);
    transparent_crc(g_884.f2, "g_884.f2", print_hash_value);
    transparent_crc(g_884.f3, "g_884.f3", print_hash_value);
    transparent_crc(g_884.f4, "g_884.f4", print_hash_value);
    transparent_crc(g_884.f5, "g_884.f5", print_hash_value);
    transparent_crc(g_885.f0, "g_885.f0", print_hash_value);
    transparent_crc(g_885.f1, "g_885.f1", print_hash_value);
    transparent_crc(g_885.f2, "g_885.f2", print_hash_value);
    transparent_crc(g_885.f3, "g_885.f3", print_hash_value);
    transparent_crc(g_885.f4, "g_885.f4", print_hash_value);
    transparent_crc(g_885.f5, "g_885.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_886[i][j][k].f0, "g_886[i][j][k].f0", print_hash_value);
                transparent_crc(g_886[i][j][k].f1, "g_886[i][j][k].f1", print_hash_value);
                transparent_crc(g_886[i][j][k].f2, "g_886[i][j][k].f2", print_hash_value);
                transparent_crc(g_886[i][j][k].f3, "g_886[i][j][k].f3", print_hash_value);
                transparent_crc(g_886[i][j][k].f4, "g_886[i][j][k].f4", print_hash_value);
                transparent_crc(g_886[i][j][k].f5, "g_886[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_965[i], "g_965[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_967, "g_967", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
