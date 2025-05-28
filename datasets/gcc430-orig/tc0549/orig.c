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
   unsigned char f0;
   int f1;
   unsigned short f2;
   short f3;
   unsigned short f4;
   int f5;
};


static unsigned g_27 = 0x5A9CEA44L;
static unsigned short g_29 = 65535UL;
static int g_43 = 0x02449EF5L;
static unsigned short g_59 = 0xDAD8L;
static int *g_81 = (void*)0;
static int **g_80 = &g_81;
static char g_85 = 6L;
static int g_87 = 0x309CE07BL;
static unsigned g_180 = 0x366C4368L;
static unsigned char g_202 = 1UL;
static unsigned char g_207 = 0x5EL;
static struct S0 g_216 = {0x78L,0x9A5F1CA1L,0xE4F1L,1L,0x2AEAL,0x53E6A3F3L};
static char g_235 = 0L;
static unsigned g_237 = 0UL;
static unsigned short g_262 = 0xA1DBL;
static char g_299 = 0x8CL;
static char g_300 = (-7L);
static unsigned short g_319 = 0UL;
static short *g_341 = &g_216.f3;
static unsigned g_371 = 0x11280E95L;
static char *g_383 = (void*)0;
static unsigned g_387 = 0xED0B2EA2L;
static unsigned short *g_405 = &g_59;
static unsigned short **g_404 = &g_405;
static unsigned short **g_409 = &g_405;
static int g_423 = 0x0ECAFB3BL;
static int g_428 = (-9L);
static unsigned g_439 = 0xACF594EBL;
static unsigned char g_446 = 1UL;
static char g_554 = 1L;
static unsigned g_570 = 4294967287UL;
static int *g_619 = (void*)0;
static unsigned g_674 = 0x16F4701AL;
static struct S0 *g_698 = &g_216;
static short g_773 = (-1L);
static short g_796 = 0x6117L;
static int g_798 = 0xAD622B2BL;
static int g_809 = (-7L);
static char g_810 = 0x19L;
static unsigned g_820 = 1UL;
static int **g_850 = (void*)0;
static int g_951 = 0xEE00D338L;
static short g_954 = 0x8A6CL;
static int g_960 = 0x3A598163L;
static unsigned short g_961 = 0x4797L;
static unsigned g_1040 = 2UL;
static struct S0 g_1047 = {6UL,0xD15C780BL,0UL,0xC6EBL,5UL,0L};
static unsigned *g_1054 = &g_439;
static unsigned **g_1053 = &g_1054;
static char g_1088 = 0x15L;
static char g_1097 = 0xE5L;
static short g_1113 = (-1L);
static int g_1120 = 0xE835FC95L;
static int g_1121 = (-1L);
static short g_1145 = 0x41D5L;
static int g_1148 = 2L;
static unsigned g_1151 = 0x88701BE0L;
static unsigned char g_1167 = 1UL;
static unsigned char g_1364 = 0x91L;
static unsigned g_1386 = 0x4513B79EL;
static unsigned char *g_1391 = &g_216.f0;
static short g_1597 = 1L;
static int g_1605 = 0x651BC47FL;
static int g_1607 = 0x9B4EF5EAL;
static unsigned short g_1623 = 0x56A3L;
static char g_1630 = 0xDEL;
static char g_1755 = (-1L);
static unsigned g_1763 = 4294967287UL;
static unsigned g_1955 = 0x48B835E4L;
static struct S0 g_1959 = {1UL,0xD78B2C0EL,65535UL,1L,8UL,0x7ACABEB4L};
static unsigned char g_2113 = 255UL;
static unsigned g_2259 = 18446744073709551615UL;
static unsigned g_2464 = 0x6032EC14L;
static int ***g_2606 = &g_80;
static int ****g_2605 = &g_2606;
static unsigned **g_2613 = &g_1054;
static int g_2710 = 0x3E0791E0L;
static unsigned char g_2728 = 255UL;
static unsigned *g_2843 = &g_674;
static unsigned **g_2842 = &g_2843;
static unsigned ***g_2841 = &g_2842;
static unsigned g_2919 = 4294967295UL;
static unsigned g_2968 = 0UL;
static short g_2987 = 2L;
static int g_2989 = 0L;
static unsigned short g_3001 = 3UL;
static char g_3006 = 0L;



static struct S0 func_1(void);
static int * func_2(short p_3, int p_4, char p_5);
static int func_7(int p_8, int * p_9, struct S0 p_10, unsigned char p_11, struct S0 p_12);
static int * func_14(int * p_15, short p_16);
static int * func_17(int * p_18, int * p_19, int * p_20, short p_21);
static int * func_22(unsigned short p_23, int * p_24, int p_25, unsigned p_26);
static int * func_30(int * p_31, int * p_32, struct S0 p_33, unsigned char p_34, unsigned short p_35);
static int * func_36(int p_37, unsigned short p_38, int p_39, int p_40, int p_41);
static int func_63(unsigned p_64);
static unsigned short * func_67(int p_68, unsigned short * p_69);
static struct S0 func_1(void)
{
    unsigned l_6 = 0x51EA66E5L;
    int *l_13 = (void*)0;
    unsigned short *l_28 = &g_29;
    struct S0 l_1958 = {0x07L,1L,0xB414L,3L,65535UL,-1L};
    int *l_1962 = &g_951;
    unsigned short l_2969 = 8UL;
    char l_2972 = 0x58L;
    int l_2975 = 0L;
    int l_2976 = (-3L);
    int *l_3010 = &g_798;
    (*g_80) = func_2(l_6, ((*l_1962) |= func_7((l_13 == (void*)0), func_14(func_17(l_13, func_22((g_27 , ((*l_28) |= (!0x7758L))), func_30(func_36(((l_28 != l_28) | ((6L | 0x8607F470L) , g_27)), g_27, g_27, g_27, g_27), l_13, g_1047, g_423, l_6), g_1607, g_1623), l_13, g_1088), g_674), l_1958, g_1088, g_1959)), g_1959.f3);
    if ((safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s(l_1958.f3, g_2968)) == l_2969), l_2976)))
    {
        int *l_2977 = &g_1047.f1;
        (**g_2606) = (***g_2605);
    }
    else
    {
        unsigned l_2986 = 0xA407DFF5L;
        int *l_2988 = &g_43;
        unsigned l_2992 = 18446744073709551613UL;
        struct S0 l_3009 = {0UL,0xD6D74261L,4UL,0x2058L,0xC0FEL,-4L};
        if ((safe_lshift_func_int8_t_s_u(g_1120, l_1958.f0)))
        {
            int *l_3003 = (void*)0;
            for (g_1959.f4 = 0; (g_1959.f4 >= 52); g_1959.f4 = safe_add_func_uint8_t_u_u(g_1959.f4, 5))
            {
                unsigned short l_2999 = 0x0D2BL;
                int l_3002 = 2L;
                unsigned char *l_3007 = &g_207;
                struct S0 l_3008 = {1UL,-3L,65535UL,0x27A2L,65535UL,0x6A02153CL};
                for (g_798 = 0; (g_798 > (-3)); g_798 = safe_sub_func_uint16_t_u_u(g_798, 4))
                {
                    unsigned l_3000 = 0x48C04409L;
                    l_1958 = ((*g_698) = (*g_698));
                    (**g_2606) = (**g_2606);
                    l_3002 |= (g_3001 &= (safe_sub_func_int32_t_s_s(l_2999, l_3000)));
                    (***g_2605) = (void*)0;
                }
                (*l_2988) = 1L;
                (*l_2988) &= l_3002;
            }
            return l_3009;
        }
        else
        {
            return (*g_698);
        }
    }
    (*l_3010) = l_6;
    return l_1958;
}







static int * func_2(short p_3, int p_4, char p_5)
{
    int l_1983 = 0x01278426L;
    struct S0 l_1985 = {0xDAL,0xC54D33FBL,0x07E0L,0x3378L,65526UL,0xA2DAE7ACL};
    int ****l_2097 = (void*)0;
    int *l_2109 = &g_798;
    int l_2231 = 0xEE0BC4B5L;
    int l_2251 = 1L;
    int l_2258 = 1L;
    char l_2299 = (-1L);
    unsigned short ***l_2313 = &g_409;
    unsigned short ****l_2312 = &l_2313;
    unsigned l_2327 = 0UL;
    int l_2515 = 0x879A6D26L;
    unsigned l_2536 = 0x6FC92BA4L;
    unsigned l_2754 = 0UL;
    unsigned l_2818 = 0x516C9A18L;
    struct S0 l_2840 = {0x8DL,-1L,0UL,0x77D6L,0UL,0x98CC832FL};
    int l_2945 = 0L;
    int *l_2948 = &g_798;
    int *l_2963 = (void*)0;
    if ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((*g_405) > 0xAB02L), ((void*)0 == &g_698))) ^ p_4), 12)))
    {
        int l_1981 = 0x422B692EL;
        unsigned char l_2105 = 0x6CL;
        int *l_2108 = &g_798;
        struct S0 l_2114 = {255UL,0x5E584A27L,0xF583L,0x859DL,6UL,-2L};
        int l_2320 = 1L;
        unsigned short l_2338 = 0x1DB0L;
        int l_2487 = 4L;
        int *l_2541 = &g_1605;
        int *l_2570 = &l_2258;
        char *l_2592 = &g_300;
        int l_2632 = 0xACBF9A18L;
        int l_2734 = 0x62094EA1L;
        int *l_2847 = &g_216.f1;
        int *l_2848 = (void*)0;
        int *l_2849 = &g_1148;
        int *l_2850 = &g_1148;
        int *l_2851 = (void*)0;
        int *l_2852 = &g_87;
        int *l_2853 = &g_43;
        int *l_2854 = (void*)0;
        int *l_2855 = &g_87;
        int *l_2856 = &g_1605;
        int *l_2857 = &g_1148;
        int *l_2858 = &g_1121;
        int *l_2859 = &g_798;
        int *l_2860 = &g_1121;
        int *l_2861 = &g_960;
        int *l_2862 = &l_2231;
        int *l_2863 = &l_2320;
        int *l_2864 = &g_1959.f1;
        int *l_2865 = &g_960;
        int *l_2866 = &l_2251;
        int *l_2867 = &g_216.f1;
        int *l_2868 = &g_1605;
        int *l_2869 = (void*)0;
        int *l_2870 = &g_1605;
        int *l_2871 = (void*)0;
        int *l_2872 = &g_1121;
        int *l_2873 = &l_2734;
        int *l_2874 = &l_2258;
        int *l_2875 = &g_798;
        int *l_2876 = &g_798;
        int *l_2877 = &l_1985.f1;
        int *l_2878 = &l_2840.f1;
        int *l_2879 = &l_2840.f1;
        int *l_2880 = &g_216.f1;
        int *l_2881 = &g_87;
        int *l_2882 = &l_1983;
        int *l_2883 = &g_43;
        int *l_2884 = &l_2258;
        int *l_2885 = &g_87;
        int *l_2886 = &l_2734;
        int *l_2887 = (void*)0;
        int *l_2888 = &g_1148;
        int *l_2889 = (void*)0;
        int *l_2890 = &l_2320;
        int *l_2891 = &g_960;
        int *l_2892 = &g_1121;
        int *l_2893 = &g_1121;
        int l_2894 = 0L;
        int *l_2895 = &l_2320;
        int *l_2896 = &g_960;
        int *l_2897 = (void*)0;
        int *l_2898 = &g_1605;
        int *l_2899 = &l_2894;
        int *l_2900 = &g_216.f1;
        int *l_2901 = (void*)0;
        int *l_2902 = &l_2320;
        int *l_2903 = (void*)0;
        int *l_2904 = &g_798;
        int *l_2905 = &l_2231;
        int *l_2906 = &g_1605;
        int *l_2907 = &l_2251;
        int l_2908 = (-3L);
        int *l_2909 = &g_798;
        int l_2910 = (-1L);
        int *l_2911 = (void*)0;
        int *l_2912 = (void*)0;
        int *l_2913 = &l_2320;
        int *l_2914 = (void*)0;
        int *l_2915 = &l_2231;
        int *l_2916 = &l_2258;
        int *l_2917 = &l_2231;
        int *l_2918 = &g_1121;
        unsigned short ***l_2927 = &g_404;
        if (p_3)
        {
            char l_1967 = 1L;
            unsigned short *l_1968 = &g_1047.f4;
            int *l_1969 = &g_1121;
            unsigned *l_1982 = &g_237;
            struct S0 l_1984 = {2UL,0xCC5B704AL,0x1277L,0x9A1FL,0xDD63L,0x91F63975L};
            unsigned char l_2082 = 0UL;
            char *l_2094 = &g_554;
            int ***l_2112 = (void*)0;
            int l_2174 = 0xF5DC6D29L;
            int l_2187 = 9L;
            unsigned l_2279 = 0x06A42179L;
            unsigned ***l_2285 = (void*)0;
            int l_2300 = 0x37F65627L;
            unsigned short ****l_2314 = (void*)0;
            struct S0 l_2315 = {0x48L,-9L,0x5616L,0x2604L,0x7283L,0L};
            unsigned char **l_2324 = (void*)0;
            unsigned short **l_2496 = &l_1968;
            int *l_2568 = (void*)0;
            int *l_2569 = &l_2174;
            if (func_7(l_1967, ((*g_80) = func_22((l_1968 == (void*)0), (l_1969 = l_1969), (safe_sub_func_uint32_t_u_u(((*g_383) , 4UL), func_63(((safe_add_func_int32_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(l_1981, func_63(((*l_1982) = ((*g_383) , l_1981))))) & l_1983) >= (-1L)), 6UL)))) ^ 1L) & p_5), l_1983)))) , l_1983)))), p_3)), l_1984, l_1981, l_1985))
            {
                unsigned short l_1988 = 0xD554L;
                unsigned l_2013 = 0x1FB46E52L;
                int l_2051 = 9L;
                int *l_2085 = (void*)0;
                for (g_1755 = 0; (g_1755 < 22); g_1755++)
                {
                    short l_2072 = 1L;
                    if (p_3)
                    {
                        int *l_1993 = &g_1148;
                        (*l_1969) = p_4;
                        (*g_80) = (p_3 , func_14(&l_1983, (l_1988 , (l_1981 <= (safe_div_func_int32_t_s_s(((p_5 == (*l_1969)) != ((safe_rshift_func_int16_t_s_s(((((*l_1993) = (-1L)) <= (safe_mul_func_int8_t_s_s(((4294967290UL > ((g_796 == p_3) | p_4)) == (*g_383)), p_3))) == 4294967295UL), p_3)) , (-1L))), p_3))))));
                    }
                    else
                    {
                        struct S0 l_1996 = {0xD7L,0x65FA84BDL,0UL,0xF1F3L,0x329AL,0x08EE5826L};
                        int *l_1997 = (void*)0;
                        int *l_1998 = (void*)0;
                        int *l_1999 = (void*)0;
                        int *l_2000 = &g_216.f1;
                        int *l_2001 = &g_798;
                        int *l_2002 = &g_1047.f1;
                        int *l_2003 = &g_1605;
                        int *l_2004 = &l_1983;
                        int *l_2005 = &g_798;
                        int *l_2006 = &l_1996.f1;
                        int *l_2007 = &g_1121;
                        int *l_2008 = (void*)0;
                        int *l_2009 = &g_1121;
                        int *l_2010 = (void*)0;
                        int *l_2011 = &l_1996.f1;
                        int *l_2012 = &g_960;
                        (*g_698) = l_1996;
                        l_2013++;
                        (*g_698) = l_1985;
                    }
                    if (l_1985.f0)
                    {
                        unsigned **l_2020 = (void*)0;
                        unsigned *l_2022 = (void*)0;
                        unsigned **l_2021 = &l_2022;
                        int l_2023 = (-1L);
                        int *l_2024 = &g_1047.f1;
                        int *l_2025 = (void*)0;
                        int *l_2026 = (void*)0;
                        int *l_2027 = &g_1148;
                        int *l_2028 = (void*)0;
                        int *l_2029 = &g_1047.f1;
                        int *l_2030 = (void*)0;
                        int *l_2031 = &g_1047.f1;
                        int *l_2032 = &g_1121;
                        int *l_2033 = &g_43;
                        int l_2034 = 0L;
                        int *l_2035 = &l_2034;
                        int *l_2036 = &l_1985.f1;
                        int *l_2037 = &g_1605;
                        int *l_2038 = &g_798;
                        int *l_2039 = (void*)0;
                        int *l_2040 = &g_1121;
                        int *l_2041 = &g_216.f1;
                        int *l_2042 = &g_43;
                        int *l_2043 = &l_1985.f1;
                        int *l_2044 = (void*)0;
                        int *l_2045 = &g_1148;
                        int *l_2046 = &g_87;
                        int *l_2047 = &g_798;
                        int *l_2048 = &l_2034;
                        int *l_2049 = &l_2023;
                        int *l_2050 = &l_1983;
                        int *l_2052 = &g_43;
                        int *l_2053 = (void*)0;
                        int *l_2054 = (void*)0;
                        int *l_2055 = &g_43;
                        int *l_2056 = &l_1983;
                        int *l_2057 = &l_2051;
                        int *l_2058 = (void*)0;
                        int *l_2059 = &g_798;
                        int *l_2060 = &l_2034;
                        int *l_2061 = &g_1605;
                        int *l_2062 = &l_2034;
                        int *l_2063 = &g_1148;
                        int *l_2064 = (void*)0;
                        int *l_2065 = &g_1605;
                        int *l_2066 = (void*)0;
                        int *l_2067 = &g_43;
                        int *l_2068 = &l_1984.f1;
                        int *l_2069 = &l_2034;
                        int *l_2070 = &l_1983;
                        int *l_2071 = (void*)0;
                        int *l_2073 = &l_2034;
                        int *l_2074 = &l_1984.f1;
                        int *l_2075 = &g_1148;
                        int *l_2076 = &g_1047.f1;
                        int *l_2077 = &g_960;
                        int *l_2078 = &g_1148;
                        int *l_2079 = &l_2051;
                        int *l_2080 = &g_216.f1;
                        int l_2081 = 1L;
                        (*l_1969) ^= (safe_sub_func_uint16_t_u_u(((**g_1053) | 0x2D66A659L), (p_3 >= (((*l_2021) = (*g_1053)) == &l_2013))));
                        (*g_80) = l_2022;
                        ++l_2082;
                        (*g_698) = l_1985;
                    }
                    else
                    {
                        if (l_2072)
                            break;
                        (*l_1969) |= l_2051;
                        if (l_2072)
                            break;
                    }
                    return l_2085;
                }
                return l_1969;
            }
            else
            {
                int l_2088 = (-9L);
                int *l_2089 = (void*)0;
                unsigned char *l_2117 = &g_216.f0;
                int l_2136 = 1L;
                int l_2145 = 0x4123FA80L;
                int l_2157 = (-2L);
                unsigned char *l_2316 = (void*)0;
                unsigned char *l_2317 = &l_1984.f0;
                unsigned char *l_2318 = &g_446;
                int *l_2319 = &g_1047.f1;
                int ***l_2323 = &g_850;
                unsigned char **l_2326 = &l_2316;
                unsigned char ***l_2325 = &l_2326;
                unsigned **l_2328 = &g_1054;
                struct S0 l_2337 = {4UL,0x670EBE93L,2UL,0x20B0L,0x8978L,-1L};
                for (g_1755 = 0; (g_1755 != 2); g_1755 = safe_add_func_uint16_t_u_u(g_1755, 6))
                {
                    unsigned *l_2098 = &g_180;
                    int l_2100 = 1L;
                    if (p_5)
                    {
                        char **l_2095 = (void*)0;
                        char **l_2096 = &g_383;
                        (*l_1969) = l_2088;
                        (*g_80) = l_2089;
                        (*l_1969) ^= (safe_lshift_func_uint16_t_u_s(func_63(((*l_1982) |= ((safe_mul_func_int8_t_s_s(((l_2094 == ((*l_2096) = &p_5)) , p_4), g_300)) && p_3))), 5));
                        if (p_5)
                            break;
                    }
                    else
                    {
                        unsigned *l_2099 = &g_1955;
                        l_2100 &= ((*l_1969) = ((((p_3 <= (l_2097 != (g_1630 , (void*)0))) >= (l_2098 == l_2099)) , (void*)0) != &g_202));
                    }
                    (*g_80) = func_17(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_63(l_2105), (safe_sub_func_uint8_t_u_u(p_3, 0xF0L)))), 2)) , l_2108), &l_2100, l_2108, p_5);
                    (*l_1969) = p_4;
                    (*g_698) = l_2114;
                }
                if ((func_7(p_4, l_2108, l_2114, ((*g_341) , (((safe_mod_func_int32_t_s_s(((*l_2109) ^ (!((*l_2117) = (func_7(p_4, l_2108, (*g_698), g_1955, (*g_698)) || p_4)))), 0x6F5BB49EL)) >= p_4) & 0x4120C757L)), l_1984) & (*l_2108)))
                {
                    unsigned short l_2118 = 0xAD4EL;
                    int *l_2119 = &g_1605;
                    int *l_2120 = &g_1148;
                    int *l_2121 = &g_1047.f1;
                    int *l_2122 = &l_1985.f1;
                    int *l_2123 = &g_1959.f1;
                    int *l_2124 = &g_1605;
                    int *l_2125 = (void*)0;
                    int *l_2126 = (void*)0;
                    int *l_2127 = &g_216.f1;
                    int *l_2128 = (void*)0;
                    int *l_2129 = &g_798;
                    int *l_2130 = (void*)0;
                    int *l_2131 = (void*)0;
                    int *l_2132 = &g_216.f1;
                    int *l_2133 = &g_216.f1;
                    int *l_2134 = &g_960;
                    int *l_2135 = &l_1984.f1;
                    int *l_2137 = &g_216.f1;
                    int *l_2138 = &l_1985.f1;
                    int *l_2139 = &l_1985.f1;
                    int *l_2140 = &l_2114.f1;
                    int *l_2141 = &g_87;
                    int *l_2142 = &g_43;
                    int *l_2143 = &g_798;
                    int *l_2144 = (void*)0;
                    int *l_2146 = &l_1984.f1;
                    int *l_2147 = &g_1605;
                    int *l_2148 = &g_1959.f1;
                    int *l_2149 = &l_2145;
                    int *l_2150 = &g_1959.f1;
                    int *l_2151 = &g_87;
                    int *l_2152 = &l_2136;
                    int *l_2153 = &g_1148;
                    int *l_2154 = &l_2114.f1;
                    int *l_2155 = (void*)0;
                    int *l_2156 = (void*)0;
                    int *l_2158 = &l_1983;
                    int *l_2159 = &g_87;
                    int *l_2160 = &g_87;
                    int *l_2161 = &l_2145;
                    int *l_2162 = &l_1985.f1;
                    int *l_2163 = &g_43;
                    unsigned l_2164 = 18446744073709551608UL;
                    int *l_2167 = (void*)0;
                    int l_2177 = 0x3DFFB4C0L;
                    int l_2185 = 0x0617FF24L;
                    int l_2195 = 1L;
                    int l_2239 = (-9L);
                    int l_2243 = 0x09384C06L;
                    l_2118 &= ((*l_1969) ^= (*l_2109));
                    ++l_2164;
                    if (p_4)
                    {
                        int *l_2168 = &l_1985.f1;
                        struct S0 l_2169 = {250UL,-5L,65535UL,1L,0x7700L,0x501BDBFBL};
                        int *l_2172 = &g_1047.f1;
                        int *l_2173 = &l_1984.f1;
                        int *l_2175 = &l_1984.f1;
                        int *l_2176 = &g_960;
                        int *l_2178 = (void*)0;
                        int *l_2179 = (void*)0;
                        int *l_2180 = &l_2114.f1;
                        int *l_2181 = (void*)0;
                        int *l_2182 = &g_1121;
                        int *l_2183 = &l_1984.f1;
                        int *l_2184 = (void*)0;
                        int *l_2186 = &l_2185;
                        int *l_2188 = &l_2157;
                        int *l_2189 = &l_2187;
                        int *l_2190 = &g_43;
                        int *l_2191 = &l_2174;
                        int *l_2192 = (void*)0;
                        int *l_2193 = &l_2185;
                        int *l_2194 = &l_2169.f1;
                        int *l_2196 = &l_2185;
                        int *l_2197 = (void*)0;
                        int *l_2198 = &g_798;
                        int *l_2199 = &l_2177;
                        int *l_2200 = (void*)0;
                        int *l_2201 = &g_1121;
                        int *l_2202 = &g_87;
                        int *l_2203 = (void*)0;
                        int *l_2204 = &l_1984.f1;
                        int *l_2205 = &l_1985.f1;
                        int *l_2206 = &l_2136;
                        int *l_2207 = &g_960;
                        int *l_2208 = (void*)0;
                        int *l_2209 = &g_1605;
                        int *l_2210 = &l_2136;
                        int *l_2211 = &l_1985.f1;
                        int *l_2212 = &g_1605;
                        char l_2213 = 0x3DL;
                        int *l_2214 = &l_2177;
                        int *l_2215 = &g_1148;
                        int *l_2216 = &g_1121;
                        int *l_2217 = (void*)0;
                        int *l_2218 = &l_2145;
                        int *l_2219 = (void*)0;
                        int *l_2220 = &l_2174;
                        int *l_2221 = &g_1959.f1;
                        int *l_2222 = &l_1983;
                        int *l_2223 = &g_216.f1;
                        int *l_2224 = &l_2169.f1;
                        int *l_2225 = &l_2145;
                        int *l_2226 = (void*)0;
                        int *l_2227 = (void*)0;
                        int *l_2228 = &l_2174;
                        int *l_2229 = &l_2169.f1;
                        int *l_2230 = (void*)0;
                        int *l_2232 = (void*)0;
                        int *l_2233 = &l_2195;
                        int *l_2234 = (void*)0;
                        int *l_2235 = (void*)0;
                        int *l_2236 = (void*)0;
                        int *l_2237 = &g_216.f1;
                        int *l_2238 = &l_2185;
                        int *l_2240 = &g_1148;
                        int *l_2241 = &g_1047.f1;
                        int *l_2242 = &l_2231;
                        int *l_2244 = &l_1984.f1;
                        int *l_2245 = (void*)0;
                        int *l_2246 = &l_2187;
                        int *l_2247 = (void*)0;
                        int *l_2248 = &g_798;
                        int *l_2249 = &l_2114.f1;
                        int *l_2250 = &l_2169.f1;
                        int *l_2252 = &l_2243;
                        int *l_2253 = &l_2239;
                        int *l_2254 = &g_1121;
                        int *l_2255 = &g_1605;
                        int *l_2256 = &l_2231;
                        int *l_2257 = (void*)0;
                        short l_2278 = (-1L);
                        l_2089 = ((*g_80) = &l_1983);
                        ++g_2259;
                        (*l_2168) |= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((*l_1968) = (*l_2244)), (safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((*l_2152) = ((((*l_2207) >= p_5) < 0L) , ((**g_80) || (safe_lshift_func_uint16_t_u_u(p_5, (0x3AB1C8CFL != func_63(g_961))))))), (*l_2159))), (*l_2254))) && (*g_405)), g_180)) , (*l_2109)) > 4L), l_2278)))) , p_4), 0x7FL)), p_4));
                    }
                    else
                    {
                        (*g_698) = l_1985;
                    }
                    l_2279--;
                }
                else
                {
                    int l_2290 = 0xB04012CCL;
                    struct S0 l_2301 = {247UL,-2L,0xD4C8L,-1L,2UL,-4L};
                    for (l_1985.f2 = 15; (l_1985.f2 != 24); ++l_1985.f2)
                    {
                        int *l_2284 = (void*)0;
                        (*g_80) = func_14(func_14(l_2284, ((void*)0 != l_2285)), (*l_2109));
                        (*l_2109) |= (safe_sub_func_int32_t_s_s(p_5, 0x27569C59L));
                        (*l_2108) = ((safe_lshift_func_int8_t_s_u((l_2290 && ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_4, func_7(((safe_add_func_uint16_t_u_u(0x6F9EL, (l_2290 , ((safe_rshift_func_uint8_t_u_s(((((*l_1969) == (*g_383)) | ((((*g_383) , func_17(&l_2157, l_2284, (*g_80), l_2299)) == l_1969) != (**g_409))) || (-1L)), 5)) != (*g_341))))) , l_2300), l_2108, l_1985, p_4, l_2301))) & g_2113), (*l_2108))) & 1L)), g_810)) , 7L);
                    }
                    return &g_43;
                }
                (*l_2319) &= ((safe_sub_func_uint8_t_u_u(((*l_2318) = ((*l_2317) &= ((safe_mod_func_int8_t_s_s(0L, ((+250UL) , ((*l_2117) = func_7((safe_lshift_func_uint16_t_u_u((p_4 < ((func_7((((g_387 ^ (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(p_4, 0L)), 2))) , l_2312) != l_2314), l_2108, l_2114, p_4, l_2315) & 1UL) >= (*l_2108))), 9)), l_2108, g_1959, p_3, l_2114))))) | p_3))), 1L)) >= 0x6FL);
                if (((l_1985.f1 &= ((l_2320 >= (l_2327 |= ((safe_sub_func_uint8_t_u_u((p_4 , (((*l_2319) = (((l_1984 , l_2323) == (void*)0) >= (g_1959.f5 <= p_3))) <= ((l_2324 == ((*l_2325) = l_2324)) > 0x11L))), p_3)) , 0x40L))) , (*l_2108))) , 3L))
                {
                    int *l_2332 = &l_2320;
                    int l_2402 = 0x94ECD6E0L;
                    int l_2423 = 0x15A70A1EL;
                    short *l_2479 = (void*)0;
                    short *l_2480 = &g_1959.f3;
                    struct S0 l_2490 = {0x3EL,-3L,0x4091L,0x6EFEL,0UL,0x66C0521FL};
                    if (p_5)
                    {
                        struct S0 *l_2331 = &l_2114;
                        int *l_2339 = (void*)0;
                        int *l_2340 = &l_2300;
                        int *l_2341 = &l_2300;
                        int *l_2342 = &l_2174;
                        int *l_2343 = &l_1983;
                        int *l_2344 = &g_43;
                        int *l_2345 = &g_1605;
                        int *l_2346 = &g_1047.f1;
                        int *l_2347 = &l_2300;
                        int *l_2348 = &g_43;
                        int *l_2349 = &g_960;
                        int *l_2350 = &g_1605;
                        int *l_2351 = &l_2157;
                        int *l_2352 = &l_2174;
                        int *l_2353 = (void*)0;
                        int *l_2354 = &l_2114.f1;
                        int *l_2355 = &l_2114.f1;
                        int *l_2356 = &l_2174;
                        int *l_2357 = &l_2300;
                        int *l_2358 = &g_1605;
                        int *l_2359 = &l_2320;
                        int *l_2360 = &l_1983;
                        int *l_2361 = &g_1047.f1;
                        int *l_2362 = &l_2231;
                        int *l_2363 = (void*)0;
                        int *l_2364 = (void*)0;
                        int *l_2365 = &l_2231;
                        int *l_2366 = (void*)0;
                        int *l_2367 = &l_2174;
                        int *l_2368 = &l_1984.f1;
                        int *l_2369 = &l_2187;
                        int *l_2370 = &g_87;
                        int *l_2371 = (void*)0;
                        int *l_2372 = (void*)0;
                        int *l_2373 = &l_2300;
                        int *l_2374 = &l_1984.f1;
                        int *l_2375 = &l_2187;
                        int *l_2376 = &l_2136;
                        int *l_2377 = &l_2251;
                        int *l_2378 = &g_216.f1;
                        int *l_2379 = &l_1983;
                        int *l_2380 = &l_2320;
                        int *l_2381 = &l_2136;
                        int *l_2382 = &l_2136;
                        int *l_2383 = &g_87;
                        int *l_2384 = (void*)0;
                        int *l_2385 = &l_1983;
                        int *l_2386 = &l_2315.f1;
                        int *l_2387 = &l_2187;
                        int *l_2388 = &l_2315.f1;
                        int *l_2389 = &l_2174;
                        int l_2390 = 0L;
                        int *l_2391 = &l_2157;
                        int *l_2392 = &g_87;
                        int *l_2393 = &l_2145;
                        int *l_2394 = &l_2251;
                        int *l_2395 = (void*)0;
                        int *l_2396 = (void*)0;
                        int *l_2397 = &g_43;
                        int *l_2398 = &g_43;
                        int *l_2399 = &l_2136;
                        int *l_2400 = &l_2114.f1;
                        int *l_2401 = &g_43;
                        int *l_2403 = &g_1959.f1;
                        int *l_2404 = (void*)0;
                        int *l_2405 = &l_1983;
                        int *l_2406 = (void*)0;
                        int *l_2407 = &l_2114.f1;
                        int *l_2408 = &g_43;
                        int *l_2409 = &l_2136;
                        int *l_2410 = &g_1959.f1;
                        int *l_2411 = &l_2251;
                        int *l_2412 = &g_43;
                        int *l_2413 = (void*)0;
                        int *l_2414 = &l_1983;
                        int *l_2415 = &l_2136;
                        int *l_2416 = &g_216.f1;
                        int *l_2417 = &g_1959.f1;
                        int *l_2418 = &l_2251;
                        int *l_2419 = (void*)0;
                        int *l_2420 = &l_2300;
                        int *l_2421 = (void*)0;
                        int *l_2422 = &l_2300;
                        int *l_2424 = &g_798;
                        int *l_2425 = (void*)0;
                        int *l_2426 = &g_1959.f1;
                        int *l_2427 = &l_2337.f1;
                        int *l_2428 = &l_2136;
                        int *l_2429 = &l_1984.f1;
                        int *l_2430 = (void*)0;
                        int *l_2431 = (void*)0;
                        int *l_2432 = (void*)0;
                        int l_2433 = 1L;
                        int *l_2434 = &l_2423;
                        int *l_2435 = &g_216.f1;
                        int *l_2436 = &g_1148;
                        int *l_2437 = (void*)0;
                        int *l_2438 = (void*)0;
                        int *l_2439 = &l_1983;
                        int l_2440 = 0x13FF57E6L;
                        int l_2441 = 0xC1A5079FL;
                        int *l_2442 = (void*)0;
                        int *l_2443 = &l_2145;
                        int *l_2444 = &l_2315.f1;
                        int *l_2445 = &l_2390;
                        int *l_2446 = &l_2114.f1;
                        int *l_2447 = &l_1984.f1;
                        int *l_2448 = &l_2433;
                        int *l_2449 = &l_2145;
                        int *l_2450 = &l_1984.f1;
                        int *l_2451 = (void*)0;
                        int *l_2452 = &g_1121;
                        int *l_2453 = (void*)0;
                        int *l_2454 = &l_2157;
                        int *l_2455 = &l_1983;
                        int *l_2456 = &l_2433;
                        int *l_2457 = &l_2157;
                        int l_2458 = 0x94DD5E3DL;
                        int *l_2459 = (void*)0;
                        int *l_2460 = &l_1985.f1;
                        int *l_2461 = (void*)0;
                        int *l_2462 = (void*)0;
                        int *l_2463 = &l_2320;
                        (*l_2319) = func_63((l_2328 == &g_1054));
                        (*l_2332) &= (func_63((func_63(((safe_add_func_int32_t_s_s(func_63(p_4), (((*l_2331) = l_2315) , (*l_2109)))) && func_7((*l_2319), l_2332, ((*l_2331) = l_2114), func_63((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((*g_341) |= 0xE558L), (((*l_2117) &= 249UL) , p_3))) , (**g_409)), (*l_2108))) > (*l_2319)) , 0xC33282ACL)), l_2337))) , l_2338)) == p_3);
                        ++g_2464;
                    }
                    else
                    {
                        (*l_2332) |= ((*l_2108) &= (g_216.f4 != ((*l_2319) > (*l_1969))));
                    }
                    if ((((~(*g_341)) && 1UL) != ((0x2EL < ((*l_2117) = (&l_2088 != &l_1981))) , ((*l_2480) |= ((((*l_2332) ^ (safe_sub_func_int8_t_s_s(((++(**g_1053)) , (!((((*l_2109) |= ((safe_lshift_func_int8_t_s_u((&l_1981 == (void*)0), 1)) & (safe_sub_func_uint8_t_u_u((((*l_2094) = p_5) == 5L), p_3)))) <= 0x4906E438L) & p_4))), 0xE5L))) || (*g_383)) > (*l_2319))))))
                    {
                        (*g_80) = &l_2402;
                    }
                    else
                    {
                        unsigned short l_2491 = 65535UL;
                        (*l_2109) &= ((*l_2332) |= ((((*l_2094) = (((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0L, 11)), func_63((safe_mul_func_uint8_t_u_u(p_5, 6L))))) , (*g_383)) || (l_2487 != (4294967294UL <= (safe_add_func_int32_t_s_s((l_1984 , 4L), p_5))))) || p_4) || (**g_404))) != 0x7FL) < g_954));
                        l_2114 = l_2490;
                        (*g_698) = ((*g_698) , (((*g_1054) ^= (p_3 <= g_387)) , l_2337));
                        l_2491++;
                    }
                }
                else
                {
                    unsigned short l_2502 = 65529UL;
                    int *l_2505 = &l_2114.f1;
                    (*l_2109) &= p_5;
                    if ((safe_sub_func_int8_t_s_s((((*g_341) , &g_405) != l_2496), (safe_mul_func_uint8_t_u_u((g_207 &= g_2259), 252UL)))))
                    {
                        int *l_2499 = &l_2231;
                        int *l_2500 = &l_1985.f1;
                        int *l_2501 = &l_2157;
                        l_2502--;
                        (*g_80) = func_17((l_2108 = ((*g_80) = &l_2231)), &l_2157, func_14(l_2505, (*g_341)), p_3);
                    }
                    else
                    {
                        unsigned short l_2506 = 0x9C43L;
                        l_2506--;
                    }
                    (*l_2505) |= (safe_rshift_func_uint8_t_u_s(((*l_2117)++), (((p_5 <= (safe_mul_func_int8_t_s_s(l_2515, ((*l_2094) = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((**g_404)--), (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((*l_2109), (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_5, p_3)), (*l_2109))))), (safe_rshift_func_int8_t_s_s((((p_3 , (*g_341)) > (safe_sub_func_uint16_t_u_u((((((((*l_1969) = ((g_439 , 0x08L) , p_4)) != 0x8B5E197DL) , 9L) ^ p_3) & (-1L)) > (*l_2319)), p_5))) , (*g_383)), (*g_383))))), p_5)))), 15)) || (**g_1053)))))) , g_1040) < l_2536)));
                }
            }
            for (l_2114.f3 = 0; (l_2114.f3 == (-7)); --l_2114.f3)
            {
                int *l_2539 = &l_1984.f1;
                int *l_2540 = &l_2258;
                return l_2541;
            }
            (*l_2569) ^= (((*l_1969) ^= (safe_add_func_int16_t_s_s(((*g_341) = (*g_341)), (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(((((*l_2094) = ((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s((p_5 & ((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((p_5 , (l_1985 , ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0x0DL, ((safe_mul_func_uint16_t_u_u(p_4, 8UL)) == ((safe_mul_func_uint8_t_u_u((((*g_1054) ^= p_4) ^ (safe_div_func_uint16_t_u_u(65535UL, (**g_409)))), p_3)) >= (*g_383))))), p_3)) , (-7L)))), p_4)) , g_299), 1)), 252UL)) , 0xE36BCED4L) || (*l_2109)) , 0x0D2DL)), p_3)) >= (*l_2108)), 0x12L)) >= p_4)) && (-1L)) ^ 0L), (*l_2541))) || (*g_405)), 1))))) <= 0x404D538EL);
        }
        else
        {
            unsigned l_2573 = 0UL;
            unsigned l_2580 = 1UL;
            char *l_2591 = (void*)0;
            int l_2652 = 5L;
            int l_2784 = 0xBD55AB4AL;
            int l_2805 = 1L;
            (*g_80) = l_2570;
            (*l_2108) = ((safe_rshift_func_uint8_t_u_u(0x89L, (((l_2573 && ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((*l_2109), ((*g_81) = (l_1985 , ((*g_383) && (l_2573 , (l_2573 , p_4))))))), (safe_mul_func_uint8_t_u_u((p_3 , l_2573), (*l_2109))))) & (**g_409))) | l_2580) || l_2580))) > p_5);
            for (g_1040 = (-11); (g_1040 > 35); g_1040 = safe_add_func_uint16_t_u_u(g_1040, 5))
            {
                char l_2602 = 0x0DL;
                int l_2608 = 0x8B3FDF85L;
                struct S0 l_2610 = {0x7DL,-1L,0x3419L,0x0BC8L,0UL,-9L};
                int l_2698 = 0x1C792E89L;
                unsigned l_2733 = 4294967292UL;
                int *l_2735 = &g_1605;
                int *l_2736 = &l_2320;
                int *l_2737 = &l_2320;
                int *l_2738 = &l_2608;
                int *l_2739 = &g_1047.f1;
                int *l_2740 = &l_2114.f1;
                int *l_2741 = (void*)0;
                int *l_2742 = (void*)0;
                int *l_2743 = (void*)0;
                int *l_2744 = (void*)0;
                int *l_2745 = &l_2320;
                int *l_2746 = (void*)0;
                int *l_2747 = &g_798;
                int *l_2748 = &l_2320;
                int *l_2749 = &l_2258;
                int *l_2750 = &g_87;
                int *l_2751 = &g_960;
                int *l_2752 = &g_1605;
                int *l_2753 = &l_2734;
                int *l_2757 = (void*)0;
                int *l_2758 = &l_2734;
                int *l_2759 = &l_2698;
                int *l_2760 = &g_1959.f1;
                int *l_2761 = &g_1047.f1;
                int *l_2762 = &l_2231;
                int *l_2763 = &g_87;
                int *l_2764 = &g_1148;
                int *l_2765 = &g_43;
                int *l_2766 = &l_2251;
                int *l_2767 = (void*)0;
                int *l_2768 = &g_1148;
                int *l_2769 = (void*)0;
                int *l_2770 = &g_216.f1;
                int *l_2771 = (void*)0;
                int *l_2772 = &g_43;
                int *l_2773 = &l_1983;
                int *l_2774 = &g_216.f1;
                int *l_2775 = &g_87;
                int *l_2776 = &g_1959.f1;
                int *l_2777 = &g_43;
                int *l_2778 = &g_1148;
                int *l_2779 = &g_798;
                int *l_2780 = &l_2258;
                int *l_2781 = &g_798;
                int *l_2782 = &g_1148;
                int *l_2783 = &g_1047.f1;
                int *l_2785 = (void*)0;
                int *l_2786 = &g_216.f1;
                int *l_2787 = &l_2114.f1;
                int *l_2788 = &l_2698;
                int *l_2789 = &g_960;
                int *l_2790 = &l_2251;
                int *l_2791 = &l_2608;
                int *l_2792 = &l_2258;
                int *l_2793 = &g_1047.f1;
                int *l_2794 = (void*)0;
                int *l_2795 = &g_1121;
                int *l_2796 = &g_1121;
                int *l_2797 = &g_798;
                int *l_2798 = &g_43;
                int *l_2799 = &g_1121;
                int *l_2800 = (void*)0;
                int *l_2801 = (void*)0;
                int *l_2802 = &g_87;
                int *l_2803 = &g_960;
                int *l_2804 = (void*)0;
                int *l_2806 = (void*)0;
                int *l_2807 = &l_1983;
                int *l_2808 = &g_798;
                int *l_2809 = (void*)0;
                int *l_2810 = &g_1121;
                int *l_2811 = &l_2698;
                int *l_2812 = &l_2231;
                int *l_2813 = &l_2251;
                int *l_2814 = &g_1047.f1;
                int *l_2815 = &l_2231;
                int *l_2816 = &g_798;
                int *l_2817 = (void*)0;
                if (p_4)
                {
                    int l_2585 = 0x2AAA7572L;
                    int ****l_2607 = &g_2606;
                    for (g_207 = 27; (g_207 == 35); ++g_207)
                    {
                        int l_2590 = 0xB0C2E0DCL;
                        if (l_2585)
                            break;
                        (*l_2109) &= 0xD4B40B99L;
                        if (p_5)
                            continue;
                        (*l_2109) &= (safe_sub_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((l_2580 , l_2590) <= ((((+(**g_404)) < ((0x90L > ((void*)0 == &g_1391)) != p_4)) , l_2591) != l_2592)), (*g_81))) != (**g_409)) , p_5), (*g_341)));
                    }
                    for (l_2114.f4 = 0; (l_2114.f4 != 12); l_2114.f4 = safe_add_func_uint8_t_u_u(l_2114.f4, 1))
                    {
                        unsigned l_2595 = 18446744073709551615UL;
                        struct S0 l_2609 = {247UL,-1L,65527UL,0xA178L,0xF692L,0x6F5FB630L};
                        l_2608 = (l_2595 && ((*g_698) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((0L <= ((((**g_80) = (safe_add_func_uint8_t_u_u(0UL, ((l_2585 = l_2602) | (safe_rshift_func_int16_t_s_u((*g_341), 5)))))) , g_2605) == l_2607)) || ((void*)0 == (***l_2607))) , 0xE1L), (*g_383))), (*g_1054)))));
                        if ((**g_80))
                            continue;
                        (*g_698) = l_2609;
                        (*g_698) = l_2610;
                    }
                    if (p_4)
                        break;
                }
                else
                {
                    struct S0 l_2611 = {8UL,-4L,65526UL,1L,65535UL,9L};
                    unsigned **l_2612 = (void*)0;
                    int l_2676 = 1L;
                    int l_2679 = 5L;
                    int l_2684 = 0xFAEC227CL;
                    int ****l_2731 = &g_2606;
                    l_2611 = ((*g_698) = l_2610);
                    if ((((l_2612 == g_2613) && func_63((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_63(g_1386), 11)), (p_3 , g_810))) && (((*g_698) , 0x738E7DA0L) != ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_2113 = (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_180 , (**g_404)), 1UL)), l_2610.f0)), 13))), g_1047.f0)), 0x55L)) & l_2632))) || p_4), 7)), p_4)))) , l_2580))
                    {
                        int l_2633 = 6L;
                        int l_2634 = 0x910D6C3AL;
                        int *l_2635 = &l_2608;
                        int *l_2636 = &l_2611.f1;
                        int *l_2637 = &l_2231;
                        int *l_2638 = &l_1983;
                        int *l_2639 = &g_798;
                        int *l_2640 = &l_2114.f1;
                        int *l_2641 = &l_2634;
                        int *l_2642 = &l_2231;
                        int *l_2643 = &g_1121;
                        int *l_2644 = &g_798;
                        int *l_2645 = &g_1959.f1;
                        int *l_2646 = &g_216.f1;
                        int *l_2647 = &g_960;
                        int *l_2648 = (void*)0;
                        int *l_2649 = (void*)0;
                        int *l_2650 = &g_1121;
                        int *l_2651 = &g_1148;
                        int *l_2653 = &g_216.f1;
                        int *l_2654 = &l_2608;
                        int *l_2655 = (void*)0;
                        int l_2656 = 0xAA9F1381L;
                        int *l_2657 = &l_2610.f1;
                        int *l_2658 = &l_2656;
                        int *l_2659 = &g_1047.f1;
                        int *l_2660 = &l_2656;
                        int *l_2661 = &g_216.f1;
                        int *l_2662 = &g_1121;
                        int *l_2663 = (void*)0;
                        int *l_2664 = &l_2633;
                        int *l_2665 = &g_1121;
                        int *l_2666 = &g_43;
                        int *l_2667 = &l_2320;
                        int *l_2668 = &l_1983;
                        int *l_2669 = &l_2251;
                        int *l_2670 = &l_2251;
                        int *l_2671 = &l_2258;
                        int *l_2672 = &l_2610.f1;
                        int *l_2673 = &l_2114.f1;
                        int *l_2674 = &l_2258;
                        int *l_2675 = (void*)0;
                        int *l_2677 = &l_1983;
                        int *l_2678 = &g_1121;
                        int *l_2680 = &g_1605;
                        int *l_2681 = &l_2608;
                        int *l_2682 = &l_2610.f1;
                        int *l_2683 = &l_1985.f1;
                        int *l_2685 = &g_87;
                        int *l_2686 = (void*)0;
                        int *l_2687 = (void*)0;
                        int *l_2688 = &l_2634;
                        int *l_2689 = &l_2676;
                        int *l_2690 = (void*)0;
                        int *l_2691 = &g_1121;
                        int *l_2692 = &g_1959.f1;
                        int *l_2693 = (void*)0;
                        int *l_2694 = &l_2611.f1;
                        int *l_2695 = &l_2684;
                        int *l_2696 = (void*)0;
                        int *l_2697 = (void*)0;
                        int *l_2699 = &g_798;
                        int *l_2700 = (void*)0;
                        int *l_2701 = &g_1148;
                        int *l_2702 = &l_1985.f1;
                        int *l_2703 = &g_1148;
                        int *l_2704 = &l_2656;
                        int *l_2705 = &l_2652;
                        int *l_2706 = &l_2608;
                        int *l_2707 = &l_2656;
                        int *l_2708 = &l_2684;
                        int *l_2709 = &g_87;
                        int *l_2711 = &g_798;
                        int *l_2712 = &l_2258;
                        int *l_2713 = &g_1959.f1;
                        int *l_2714 = &l_2698;
                        int *l_2715 = (void*)0;
                        int *l_2716 = &g_960;
                        int *l_2717 = &l_2251;
                        int *l_2718 = &l_2258;
                        int *l_2719 = (void*)0;
                        int *l_2720 = &l_2652;
                        int *l_2721 = &g_1148;
                        int *l_2722 = &g_1148;
                        int *l_2723 = &g_1047.f1;
                        int *l_2724 = &g_1605;
                        int *l_2725 = &l_2656;
                        int *l_2726 = &g_798;
                        int *l_2727 = &g_1121;
                        if (l_2633)
                            break;
                        ++g_2728;
                        (**g_2606) = &l_2320;
                        (*l_2694) = ((*g_405) >= ((((void*)0 != l_2731) == l_2580) , 65535UL));
                    }
                    else
                    {
                        int *l_2732 = &g_87;
                        return l_2732;
                    }
                }
                l_2734 = ((**g_80) = (((-1L) | l_2733) && 0UL));
                ++l_2754;
                ++l_2818;
            }
            for (l_2652 = (-28); (l_2652 != 10); ++l_2652)
            {
                char l_2828 = 0x19L;
                int *l_2846 = (void*)0;
                for (g_2464 = 0; (g_2464 == 10); ++g_2464)
                {
                    short l_2829 = 1L;
                    unsigned *l_2837 = &l_2327;
                    unsigned **l_2836 = &l_2837;
                    unsigned ***l_2835 = &l_2836;
                    unsigned ****l_2844 = &g_2841;
                    for (l_2580 = 28; (l_2580 > 58); ++l_2580)
                    {
                        int *l_2827 = (void*)0;
                        (*g_80) = func_14(l_2827, l_2828);
                    }
                    (*l_2570) = (l_2829 , ((*g_1054) , (0xEDD6E686L | ((*l_2570) <= ((l_2805 |= ((p_4 ^ (((safe_unary_minus_func_int16_t_s((*l_2108))) , ((safe_lshift_func_uint8_t_u_s(l_2829, 2)) < p_4)) <= 0x3BL)) > p_5)) && l_2580)))));
                    if (((safe_lshift_func_int16_t_s_s((*g_341), (p_4 != ((*g_383) , (((p_3 = p_4) <= ((l_2835 != ((*l_2844) = (((safe_rshift_func_uint16_t_u_s(l_2580, 5)) , l_2840) , g_2841))) < (*l_2109))) == (-4L)))))) && l_2829))
                    {
                        unsigned l_2845 = 18446744073709551615UL;
                        l_2845 |= (*l_2108);
                    }
                    else
                    {
                        (*g_80) = l_2846;
                    }
                    l_2840 = l_2114;
                }
            }
        }
        ++g_2919;
        if ((((*g_405) == (*l_2859)) < (safe_unary_minus_func_uint8_t_u(p_3))))
        {
            unsigned l_2923 = 0x9DCB179BL;
            struct S0 l_2936 = {0x2FL,0L,1UL,0xC36DL,0x97ACL,1L};
            int *l_2937 = &g_1148;
            if (l_2923)
            {
                int *l_2924 = &g_1959.f1;
                unsigned char *l_2942 = &g_207;
                (*l_2907) = func_63(l_2923);
                if (func_7((((*g_341) |= 0xEBE5L) & 0L), l_2924, ((safe_div_func_int16_t_s_s(((l_2927 = &g_404) != ((((++g_1959.f0) || g_319) , (p_4 = (0xA332358AL >= (l_2114 , ((safe_add_func_uint8_t_u_u(p_3, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((*l_2924) , (*l_2875)) , p_4), (*g_383))), p_4)))) == p_3))))) , (void*)0)), (*l_2109))) , l_2840), g_1047.f1, l_2936))
                {
                    return l_2937;
                }
                else
                {
                    for (g_423 = 1; (g_423 > 8); ++g_423)
                    {
                        (***g_2605) = &l_1983;
                        (*l_2108) ^= (****g_2605);
                    }
                }
                (*l_2891) &= ((((((*g_405) , ((safe_mul_func_int8_t_s_s((((p_4 , l_2902) != (void*)0) > p_4), 0xC6L)) || (*l_2890))) || 1L) & 0x498AL) >= l_2945) ^ 0x8150L);
            }
            else
            {
                (***g_2605) = (void*)0;
                for (g_1597 = 0; (g_1597 <= 5); ++g_1597)
                {
                    return l_2948;
                }
            }
            (*l_2865) = (-1L);
        }
        else
        {
            int *l_2949 = &g_1959.f1;
            return l_2949;
        }
        (*g_80) = &l_2320;
    }
    else
    {
        int l_2951 = 1L;
        (*l_2109) &= (-1L);
        if (((((void*)0 == &p_5) , ((*g_698) = (*g_698))) , 0xA35127A4L))
        {
            int *l_2950 = &l_2231;
            (**g_2606) = l_2950;
            (***g_2606) |= l_2951;
            (***g_2605) = l_2950;
        }
        else
        {
            int *l_2952 = &g_1047.f1;
            if ((*l_2109))
            {
                return l_2952;
            }
            else
            {
                int *l_2953 = &g_1605;
                (***g_2605) = l_2953;
                (*l_2952) &= 8L;
                return l_2952;
            }
        }
    }
    for (l_2327 = 0; (l_2327 > 22); ++l_2327)
    {
        int *l_2956 = &g_1959.f1;
        struct S0 l_2957 = {1UL,-2L,0UL,0x4E5CL,1UL,0xCBAF08B9L};
        struct S0 l_2960 = {0x6DL,8L,0x16DFL,3L,65535UL,0x6563A4CBL};
        l_2956 = l_2956;
        if (p_5)
            break;
        for (g_2464 = 0; (g_2464 == 3); g_2464 = safe_add_func_int16_t_s_s(g_2464, 2))
        {
            (*g_698) = (((&g_423 != &l_2515) , (!0xD4L)) , l_2840);
        }
    }
    return l_2963;
}







static int func_7(int p_8, int * p_9, struct S0 p_10, unsigned char p_11, struct S0 p_12)
{
    int *l_1961 = &g_216.f1;
    int **l_1960 = &l_1961;
    (*l_1960) = ((*g_80) = (void*)0);
    (*g_80) = func_22((**g_404), &p_8, p_10.f0, p_12.f2);
    return p_12.f4;
}







static int * func_14(int * p_15, short p_16)
{
    int *l_1957 = &g_1047.f1;
    return l_1957;
}







static int * func_17(int * p_18, int * p_19, int * p_20, short p_21)
{
    int *l_1891 = &g_43;
    unsigned short *l_1892 = (void*)0;
    int ***l_1920 = &g_80;
    int l_1939 = (-1L);
    for (g_1167 = 0; (g_1167 <= 52); g_1167++)
    {
        unsigned *l_1893 = &g_674;
        struct S0 l_1894 = {0UL,0x12220BA5L,0x159CL,0xD178L,0xD17DL,0xE5A3043AL};
        struct S0 **l_1895 = &g_698;
        struct S0 ***l_1896 = &l_1895;
        (*g_80) = (p_21 , p_19);
        if (l_1894.f5)
            continue;
        (*l_1891) = l_1894.f1;
        (*l_1896) = l_1895;
    }
    for (g_85 = 20; (g_85 >= 24); g_85++)
    {
        struct S0 **l_1899 = (void*)0;
        struct S0 **l_1900 = &g_698;
        int *l_1901 = &g_87;
        unsigned **l_1905 = (void*)0;
        unsigned ***l_1904 = &l_1905;
        unsigned char *l_1951 = &g_1167;
        int l_1956 = 5L;
        (*l_1900) = &g_216;
        (*g_80) = l_1901;
        for (g_570 = 0; (g_570 >= 29); ++g_570)
        {
            char l_1927 = 0xA4L;
            unsigned short **l_1947 = (void*)0;
            (*l_1900) = &g_216;
        }
        return (**l_1920);
    }
    return p_18;
}







static int * func_22(unsigned short p_23, int * p_24, int p_25, unsigned p_26)
{
    unsigned *l_1848 = &g_820;
    unsigned **l_1847 = &l_1848;
    unsigned ***l_1846 = &l_1847;
    int l_1887 = (-1L);
    (*l_1846) = (void*)0;
    for (g_1047.f4 = 19; (g_1047.f4 < 36); ++g_1047.f4)
    {
        unsigned *l_1859 = &g_570;
        unsigned short *l_1864 = &g_29;
        int l_1869 = 0xD82A2AECL;
        char *l_1870 = &g_1097;
        short *l_1871 = &g_1597;
        int l_1872 = 0x9EB15C44L;
        unsigned char *l_1875 = &g_202;
        int *l_1886 = &g_1121;
        int *l_1888 = &g_960;
        (*g_80) = p_24;
        (*l_1886) = (safe_rshift_func_uint8_t_u_u(((*l_1875) = 0x55L), ((safe_rshift_func_uint8_t_u_u((p_26 , (((*g_383) |= l_1872) , ((safe_rshift_func_int8_t_s_s((func_63(((**g_1053) , ((safe_mod_func_uint32_t_u_u(l_1869, ((safe_sub_func_uint16_t_u_u((func_63(p_23) != ((p_23 && ((*l_1886) = (safe_rshift_func_int8_t_s_s(p_26, p_23)))) > 0xF2BDC6B9L)), 0xF850L)) | g_1755))) < 0xD6L))) >= p_25), p_26)) == 0xABL))), 2)) , g_439)));
        (*l_1888) &= ((*l_1886) ^= l_1887);
    }
    l_1887 |= p_23;
    return p_24;
}







static int * func_30(int * p_31, int * p_32, struct S0 p_33, unsigned char p_34, unsigned short p_35)
{
    int *l_1048 = (void*)0;
    unsigned short l_1049 = 0x65D6L;
    char **l_1050 = &g_383;
    int l_1118 = 0xEB3D8E98L;
    int l_1131 = 6L;
    int l_1137 = 0x59EEC79DL;
    int l_1189 = 0xA7B10B76L;
    int l_1317 = 1L;
    int l_1761 = (-1L);
    unsigned short **l_1800 = &g_405;
    unsigned short ***l_1799 = &l_1800;
    int *l_1845 = &g_1605;
    (*g_80) = l_1048;
    (*g_698) = p_33;
    if (g_216.f3)
    {
        unsigned char *l_1051 = &g_207;
        int l_1052 = 0x9D0CDD38L;
        int l_1078 = 0xB7913228L;
        int l_1083 = 0L;
        int l_1129 = 0x5B84F4EAL;
        int l_1301 = 0xBB4DF72FL;
        int l_1347 = (-10L);
        int l_1354 = (-1L);
        unsigned **l_1411 = &g_1054;
        unsigned l_1412 = 0xDAE480CDL;
        unsigned short **l_1434 = &g_405;
        unsigned short ***l_1433 = &l_1434;
        if (((((*p_31) = ((((0x96AC5459L < ((l_1049 & ((l_1050 == &g_383) ^ (((((*g_383) , ((*l_1051) ^= (p_33.f5 != p_33.f1))) | 0x1BL) , 4L) < 0xFEL))) , 0x2DD5654EL)) , l_1052) , l_1049) < p_33.f1)) != l_1049) || p_33.f4))
        {
            int l_1055 = 0x7819B853L;
            int l_1124 = (-6L);
            int l_1149 = 0xAD42CE47L;
            int *l_1164 = &g_1148;
            int l_1240 = 0x499EE5BBL;
            int l_1349 = 0xB240698AL;
            int l_1357 = 0x5C6438B1L;
            unsigned l_1634 = 0xD471508EL;
            short *l_1651 = &g_796;
            unsigned char *l_1657 = &g_1167;
            char l_1772 = 0xD7L;
            if (((l_1048 = ((*g_80) = l_1048)) != (void*)0))
            {
                int *l_1056 = &g_1047.f1;
                int *l_1057 = (void*)0;
                int *l_1058 = &g_43;
                int *l_1059 = &g_798;
                int *l_1060 = (void*)0;
                int *l_1061 = &g_1047.f1;
                int *l_1062 = &l_1052;
                int *l_1063 = (void*)0;
                int *l_1064 = &g_1047.f1;
                int *l_1065 = &l_1052;
                int *l_1066 = &g_1047.f1;
                int *l_1067 = &g_798;
                int *l_1068 = &l_1052;
                int *l_1069 = (void*)0;
                int *l_1070 = &g_43;
                int *l_1071 = &g_1047.f1;
                int *l_1072 = &g_216.f1;
                int *l_1073 = &g_43;
                int *l_1074 = &g_43;
                int *l_1075 = &g_43;
                int *l_1076 = &g_216.f1;
                int *l_1077 = &g_798;
                int *l_1079 = &g_798;
                int *l_1080 = &g_1047.f1;
                int *l_1081 = &l_1078;
                int *l_1082 = &g_960;
                int *l_1084 = &l_1083;
                int *l_1085 = &g_216.f1;
                int *l_1086 = &g_798;
                int *l_1087 = &g_1047.f1;
                int *l_1089 = &l_1083;
                int *l_1090 = &l_1078;
                int *l_1091 = (void*)0;
                int *l_1092 = &l_1083;
                int *l_1093 = (void*)0;
                int *l_1094 = &g_43;
                int *l_1095 = &g_798;
                int *l_1096 = (void*)0;
                int *l_1098 = (void*)0;
                int *l_1099 = &g_87;
                int *l_1100 = &l_1083;
                int *l_1101 = &l_1052;
                int *l_1102 = &l_1052;
                int *l_1103 = &g_216.f1;
                int *l_1104 = &l_1078;
                int *l_1105 = &l_1083;
                int *l_1106 = &l_1078;
                int *l_1107 = &g_43;
                int *l_1108 = &g_43;
                int *l_1109 = &g_87;
                int *l_1110 = &g_87;
                int *l_1111 = &l_1078;
                int *l_1112 = (void*)0;
                int *l_1114 = (void*)0;
                int *l_1115 = &g_87;
                int *l_1116 = &g_960;
                int *l_1117 = &g_87;
                int *l_1119 = &g_960;
                int *l_1122 = (void*)0;
                int *l_1123 = &g_216.f1;
                int *l_1125 = &l_1118;
                int *l_1126 = &l_1078;
                int *l_1127 = &l_1083;
                int *l_1128 = &g_1047.f1;
                int *l_1130 = &l_1118;
                int *l_1132 = (void*)0;
                int *l_1133 = &g_1121;
                int *l_1134 = &g_43;
                int *l_1135 = (void*)0;
                int *l_1136 = &g_1121;
                int *l_1138 = (void*)0;
                int *l_1139 = &g_216.f1;
                int *l_1140 = &g_216.f1;
                int *l_1141 = &g_43;
                int *l_1142 = &l_1083;
                int *l_1143 = &l_1052;
                int *l_1144 = &l_1052;
                int *l_1146 = &l_1118;
                int *l_1147 = (void*)0;
                int *l_1150 = &l_1131;
                unsigned short **l_1162 = &g_405;
                unsigned short ***l_1161 = &l_1162;
                g_1151--;
                if ((((+g_387) | 0xFAB2E5ABL) >= (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((**l_1050) = (func_63((*l_1056)) >= 1UL)), (*l_1107))), p_33.f5))))
                {
                    (*g_698) = (*g_698);
                    (*l_1117) |= l_1137;
                }
                else
                {
                    char **l_1160 = &g_383;
                    int l_1172 = 9L;
                    for (g_1047.f2 = (-5); (g_1047.f2 <= 25); g_1047.f2++)
                    {
                        int l_1163 = 0xBC7431E7L;
                        (*g_80) = l_1164;
                        (*g_80) = func_36((safe_mod_func_int32_t_s_s(((*l_1087) = g_1167), (safe_div_func_uint8_t_u_u((((p_33.f0 , (safe_rshift_func_uint16_t_u_u(l_1129, 9))) && (p_32 != p_32)) < l_1052), ((**l_1160) = 0xBEL))))), l_1172, (*l_1164), (*p_31), (**g_80));
                    }
                }
                (*g_80) = &l_1078;
            }
            else
            {
                int *l_1173 = &l_1118;
                int *l_1174 = &l_1131;
                int *l_1175 = &l_1149;
                int *l_1176 = &g_1148;
                int *l_1177 = &g_216.f1;
                int *l_1178 = (void*)0;
                int *l_1179 = &l_1083;
                int *l_1180 = (void*)0;
                int *l_1181 = &l_1137;
                int *l_1182 = &g_798;
                int *l_1183 = &g_960;
                int *l_1184 = &l_1137;
                int *l_1185 = &l_1078;
                int *l_1186 = (void*)0;
                int *l_1187 = (void*)0;
                int *l_1188 = &l_1052;
                int *l_1190 = &l_1078;
                int *l_1191 = (void*)0;
                int *l_1192 = &l_1083;
                int *l_1193 = &l_1131;
                int *l_1194 = &g_87;
                int *l_1195 = &l_1052;
                int *l_1196 = &g_43;
                int *l_1197 = &g_798;
                int *l_1198 = (void*)0;
                int *l_1199 = &l_1131;
                int *l_1200 = &g_1148;
                int *l_1201 = &g_1148;
                int *l_1202 = &g_1148;
                int *l_1203 = &l_1083;
                int *l_1204 = (void*)0;
                int *l_1205 = &g_1148;
                int *l_1206 = &g_1121;
                int l_1207 = 0xA57E9474L;
                int *l_1208 = (void*)0;
                int *l_1209 = (void*)0;
                int *l_1210 = (void*)0;
                int *l_1211 = &l_1131;
                int *l_1212 = &g_1047.f1;
                int *l_1213 = &l_1052;
                int *l_1214 = &g_960;
                int *l_1215 = (void*)0;
                int *l_1216 = &l_1124;
                int *l_1217 = &g_960;
                int *l_1218 = (void*)0;
                int *l_1219 = (void*)0;
                int *l_1220 = &g_87;
                int *l_1221 = &l_1131;
                int *l_1222 = &l_1131;
                int *l_1223 = &g_960;
                int *l_1224 = (void*)0;
                int *l_1225 = &g_1148;
                int *l_1226 = &g_1121;
                int *l_1227 = (void*)0;
                int *l_1228 = &l_1124;
                int *l_1229 = &g_43;
                int *l_1230 = &g_43;
                int *l_1231 = (void*)0;
                int *l_1232 = &g_1047.f1;
                int l_1233 = 0x75086393L;
                int *l_1234 = (void*)0;
                int *l_1235 = &l_1078;
                int *l_1236 = (void*)0;
                int *l_1237 = &g_1121;
                int *l_1238 = &l_1083;
                int *l_1239 = &l_1118;
                int *l_1241 = (void*)0;
                int *l_1242 = &g_1121;
                int *l_1243 = &l_1137;
                int l_1244 = 0xE4C2B951L;
                int *l_1245 = &g_87;
                int *l_1246 = (void*)0;
                int *l_1247 = &g_798;
                int *l_1248 = &g_1121;
                int *l_1249 = &l_1052;
                int *l_1250 = &g_1121;
                int *l_1251 = &g_960;
                int l_1252 = 0x8E1BC562L;
                int *l_1253 = (void*)0;
                int *l_1254 = &l_1149;
                int *l_1255 = &g_1148;
                int *l_1256 = (void*)0;
                int l_1257 = 0x8FAE5469L;
                int *l_1258 = &g_1148;
                int *l_1259 = (void*)0;
                int *l_1260 = &l_1137;
                int *l_1261 = &l_1149;
                int *l_1262 = &g_960;
                int *l_1263 = (void*)0;
                int *l_1264 = &l_1078;
                int *l_1265 = &l_1257;
                int *l_1266 = &g_798;
                int *l_1267 = &l_1257;
                int *l_1268 = &g_216.f1;
                int *l_1269 = (void*)0;
                int *l_1270 = &l_1240;
                int *l_1271 = (void*)0;
                int *l_1272 = (void*)0;
                int *l_1273 = &l_1149;
                int *l_1274 = &l_1131;
                int *l_1275 = &g_1121;
                int *l_1276 = &l_1233;
                int *l_1277 = &l_1257;
                int *l_1278 = &g_798;
                int *l_1279 = &l_1244;
                int *l_1280 = &l_1244;
                int *l_1281 = &g_1047.f1;
                int *l_1282 = &g_1047.f1;
                int *l_1283 = &l_1233;
                int *l_1284 = (void*)0;
                int *l_1285 = &l_1124;
                int *l_1286 = &l_1118;
                int *l_1287 = &l_1257;
                int *l_1288 = &l_1149;
                int *l_1289 = (void*)0;
                int *l_1290 = &g_1047.f1;
                int *l_1291 = &l_1078;
                int *l_1292 = &l_1131;
                int *l_1293 = &l_1252;
                int *l_1294 = &l_1137;
                int *l_1295 = &l_1233;
                int *l_1296 = &l_1078;
                int *l_1297 = &l_1118;
                int *l_1298 = &l_1233;
                int l_1299 = 0x414BA482L;
                int *l_1300 = (void*)0;
                int *l_1302 = &l_1299;
                int l_1303 = 0xE09101AAL;
                int *l_1304 = &l_1124;
                int *l_1305 = (void*)0;
                int *l_1306 = &l_1303;
                int *l_1307 = (void*)0;
                int *l_1308 = &l_1240;
                int *l_1309 = &l_1083;
                int *l_1310 = &l_1207;
                int *l_1311 = &g_1121;
                int *l_1312 = &g_1148;
                int *l_1313 = &g_1121;
                int *l_1314 = &l_1149;
                int *l_1315 = &g_87;
                int *l_1316 = &l_1078;
                int *l_1318 = &l_1252;
                int *l_1319 = (void*)0;
                int *l_1320 = &l_1299;
                int *l_1321 = (void*)0;
                int *l_1322 = &l_1149;
                int *l_1323 = &g_87;
                int *l_1324 = &g_87;
                int *l_1325 = (void*)0;
                int *l_1326 = &l_1078;
                int *l_1327 = &g_87;
                int *l_1328 = &g_1121;
                int *l_1329 = &l_1301;
                int *l_1330 = &l_1317;
                int *l_1331 = (void*)0;
                int *l_1332 = &l_1052;
                int *l_1333 = &l_1078;
                int *l_1334 = (void*)0;
                int *l_1335 = &l_1083;
                int *l_1336 = &l_1244;
                int *l_1337 = &l_1207;
                int *l_1338 = &l_1299;
                int *l_1339 = (void*)0;
                int *l_1340 = &g_960;
                int *l_1341 = (void*)0;
                int *l_1342 = (void*)0;
                int *l_1343 = &l_1124;
                int l_1344 = (-1L);
                int *l_1345 = &l_1118;
                int *l_1346 = &l_1118;
                int *l_1348 = &l_1149;
                int *l_1350 = (void*)0;
                int *l_1351 = &g_87;
                int *l_1352 = &g_43;
                int *l_1353 = &l_1207;
                int *l_1355 = &l_1244;
                int *l_1356 = &g_87;
                int *l_1358 = &l_1344;
                int *l_1359 = &l_1303;
                int *l_1360 = (void*)0;
                int *l_1361 = (void*)0;
                int *l_1362 = &g_798;
                int *l_1363 = &l_1240;
                unsigned short l_1371 = 0x252BL;
                unsigned char **l_1392 = &l_1051;
                --g_1364;
                if (((*l_1338) = (*p_31)))
                {
                    int ***l_1369 = &g_850;
                    (*g_80) = (*g_80);
                    (*l_1238) &= ((*l_1254) = (*p_31));
                    if ((4294967295UL <= ((((void*)0 != &p_34) & (*g_1054)) > (g_387 ^= (((p_33.f5 , ((*l_1369) = &l_1266)) != &p_31) != (g_439 ^ ((*g_1054) , p_33.f0)))))))
                    {
                        short l_1370 = 0L;
                        (**l_1369) = p_31;
                        l_1371++;
                    }
                    else
                    {
                        (**g_850) = (safe_sub_func_int8_t_s_s(p_33.f1, ((**l_1050) = (*g_383))));
                        (*g_80) = (*g_80);
                    }
                    (*g_80) = p_31;
                }
                else
                {
                    int ***l_1385 = &g_80;
                    (*l_1352) ^= (((*g_698) , (safe_mul_func_uint8_t_u_u(0UL, (((((++(*g_405)) , func_63((*l_1179))) <= (safe_lshift_func_int8_t_s_s(p_33.f1, 5))) <= (!((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s(((((*g_383) & ((((*g_383) != (*l_1164)) | g_954) , g_1145)) > p_34) != p_33.f5), 0UL)))) ^ p_33.f2))) ^ g_554)))) & 0UL);
                    (*l_1282) = ((void*)0 == l_1385);
                    ++g_1386;
                }
                (*l_1318) &= ((*l_1190) = ((!p_35) & ((func_63((((*g_341) = p_33.f4) , ((safe_rshift_func_uint8_t_u_s((((*l_1392) = (g_1391 = &p_34)) != &g_446), ((func_63(((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(0x23L, (safe_mul_func_uint8_t_u_u(0x3AL, (g_674 , func_63(((p_35 , (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((p_33.f3 != p_35), g_798)), p_33.f3))) | l_1137))))))) , (*l_1164)), g_1120)) || p_33.f0)) <= (*l_1164)) == l_1052))) > 0L))) , (*l_1164)) || p_34)));
                for (g_1040 = 26; (g_1040 >= 32); g_1040++)
                {
                    return p_31;
                }
            }
            for (g_1113 = (-29); (g_1113 != (-12)); ++g_1113)
            {
                int l_1415 = 0x615F0485L;
                short *l_1428 = (void*)0;
                int l_1467 = (-9L);
                short l_1546 = 3L;
                unsigned l_1631 = 0UL;
            }
            if (((2UL > p_34) < 254UL))
            {
                unsigned l_1636 = 18446744073709551610UL;
                short **l_1652 = &g_341;
                unsigned char **l_1658 = &g_1391;
                struct S0 *l_1659 = &g_216;
                (*l_1164) |= ((((*l_1652) = l_1651) == l_1651) & (*g_1391));
                (*l_1164) ^= g_796;
                (*g_80) = &l_1118;
                (*g_80) = func_36(p_35, (**g_404), (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((((*l_1658) = l_1657) != (void*)0) , &g_216) != l_1659), (safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s((l_1636 >= (safe_lshift_func_int16_t_s_s(1L, p_33.f4))))) == 1UL) | (*p_31)), (*g_341))), l_1083)))), p_33.f5)), l_1636, l_1052);
            }
            else
            {
                int *l_1667 = (void*)0;
                int *l_1668 = (void*)0;
                int *l_1669 = &l_1118;
                int *l_1670 = (void*)0;
                int *l_1671 = &l_1240;
                int *l_1672 = &g_1148;
                int *l_1673 = &l_1124;
                int *l_1674 = (void*)0;
                int *l_1675 = &l_1083;
                int *l_1676 = &g_43;
                int *l_1677 = &l_1124;
                int *l_1678 = &g_43;
                int *l_1679 = &l_1354;
                int *l_1680 = &g_1047.f1;
                int *l_1681 = &g_1605;
                int *l_1682 = &l_1118;
                int *l_1683 = &l_1118;
                int *l_1684 = &g_1605;
                int *l_1685 = &l_1083;
                int *l_1686 = &l_1354;
                int *l_1687 = &l_1301;
                int *l_1688 = &l_1240;
                int *l_1689 = &g_87;
                int *l_1690 = &l_1149;
                int *l_1691 = &l_1357;
                int *l_1692 = (void*)0;
                int *l_1693 = &l_1317;
                int *l_1694 = &l_1357;
                int *l_1695 = &l_1078;
                int *l_1696 = (void*)0;
                int *l_1697 = &g_1047.f1;
                int *l_1698 = &g_216.f1;
                int *l_1699 = (void*)0;
                int *l_1700 = &g_1047.f1;
                int *l_1701 = (void*)0;
                int *l_1702 = &g_1148;
                int *l_1703 = &l_1124;
                int *l_1704 = &l_1354;
                int *l_1705 = (void*)0;
                int *l_1706 = &l_1240;
                int *l_1707 = &l_1317;
                int *l_1708 = &l_1131;
                int *l_1709 = &l_1137;
                int l_1710 = 0x36A9097DL;
                int *l_1711 = (void*)0;
                int *l_1712 = &g_1148;
                int *l_1713 = &l_1710;
                int *l_1714 = &l_1124;
                int *l_1715 = &l_1357;
                int *l_1716 = &g_87;
                int *l_1717 = &l_1052;
                int *l_1718 = (void*)0;
                int *l_1719 = &l_1078;
                int *l_1720 = &l_1354;
                int *l_1721 = (void*)0;
                int *l_1722 = &g_87;
                int *l_1723 = &l_1710;
                int *l_1724 = &l_1240;
                int *l_1725 = &l_1131;
                int *l_1726 = &g_1148;
                int *l_1727 = &l_1137;
                int *l_1728 = (void*)0;
                int *l_1729 = &l_1078;
                int *l_1730 = &l_1317;
                int *l_1731 = (void*)0;
                int *l_1732 = &g_960;
                int *l_1733 = &l_1078;
                int *l_1734 = &g_1605;
                int *l_1735 = &l_1149;
                int *l_1736 = &l_1317;
                int *l_1737 = &l_1083;
                int *l_1738 = (void*)0;
                int *l_1739 = &l_1357;
                int *l_1740 = &l_1317;
                int *l_1741 = &l_1354;
                int *l_1742 = &l_1301;
                int *l_1743 = &l_1131;
                int *l_1744 = &l_1317;
                int *l_1745 = (void*)0;
                int *l_1746 = (void*)0;
                int *l_1747 = &l_1357;
                int *l_1748 = &l_1301;
                int *l_1749 = &l_1149;
                int *l_1750 = &l_1131;
                int *l_1751 = &l_1240;
                int *l_1752 = (void*)0;
                int *l_1753 = (void*)0;
                int *l_1754 = &l_1118;
                int *l_1756 = &l_1317;
                int *l_1757 = (void*)0;
                int *l_1758 = (void*)0;
                int *l_1759 = &l_1078;
                int *l_1760 = &l_1301;
                int *l_1762 = (void*)0;
                unsigned *l_1783 = (void*)0;
                unsigned *l_1784 = (void*)0;
                unsigned *l_1785 = &g_570;
                g_1763++;
                (*l_1693) = (*p_31);
                (*p_31) = (safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_33.f5, ((*g_341) = ((((safe_mod_func_uint8_t_u_u(((*g_698) , (l_1301 = (l_1772 != (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_63((+func_63(p_33.f2))), (+g_202))), ((*l_1651) = (((((*l_1729) ^= ((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4294967292UL, ((*l_1785)--))), 0x1BL)) , 0x666F204BL)) , 0xCCL) , 4294967291UL) > 0x814DE116L)))), p_33.f0)) , (*l_1164)) || 0x13L)))), 4UL)) & p_33.f4) || (*p_31)) , 0x54F7L)))) > 2L), p_33.f4));
            }
        }
        else
        {
            char l_1788 = 0x65L;
            (*p_31) = l_1788;
            (*p_31) |= (l_1788 >= (safe_unary_minus_func_int32_t_s(((p_34 == l_1788) , func_63(((safe_div_func_int32_t_s_s((func_63(func_63(g_202)) != (65535UL <= 1L)), l_1788)) & p_34))))));
        }
        for (g_87 = 0; (g_87 > (-25)); g_87 = safe_sub_func_int32_t_s_s(g_87, 9))
        {
            int *l_1801 = &l_1354;
            char *l_1821 = (void*)0;
            (*l_1801) &= ((*p_31) |= (((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(((func_63((g_1040 = g_27)) | (p_35 = (l_1799 == (void*)0))) != p_33.f0), 4)))) != (*g_383)) >= 0x3FL));
            for (g_1148 = 0; (g_1148 == 27); g_1148++)
            {
                short l_1822 = 0L;
                char *l_1823 = &g_235;
                if ((safe_rshift_func_int8_t_s_u(0x57L, 1)))
                {
                    unsigned l_1808 = 1UL;
                    unsigned *l_1817 = &g_820;
                    int *l_1818 = &g_43;
                    (*l_1818) |= ((*p_31) ^ (((safe_div_func_int8_t_s_s(l_1808, func_63(((*l_1817) |= (safe_mul_func_uint16_t_u_u((*l_1801), (((**l_1050) = l_1412) != (((safe_sub_func_uint8_t_u_u(p_33.f1, (l_1808 | g_796))) , (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((**l_1800) = ((p_33.f3 < (((*g_341) = (-1L)) && p_33.f5)) == g_387)) , (**g_1053)) ^ 0x3C9CF6F9L), 4294967292UL)), 0x73L))) >= 0xEF14L)))))))) > 0x4113L) || (*g_1391)));
                    (*l_1818) ^= (*p_31);
                    (*p_31) ^= (safe_add_func_uint8_t_u_u((l_1821 == (l_1822 , l_1823)), (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_1051) = (safe_div_func_int32_t_s_s((*l_1818), ((**g_1053) = p_34)))), 6)), p_33.f5))));
                }
                else
                {
                    (*g_80) = &l_1083;
                    (*l_1801) = (safe_lshift_func_int8_t_s_s(func_63(((l_1052 & (0UL & (*g_81))) > (safe_sub_func_uint16_t_u_u((((*g_698) , (((**g_1053) , (safe_rshift_func_int8_t_s_u(0L, 0))) >= ((g_1047.f3 &= ((safe_rshift_func_uint8_t_u_u((*g_1391), ((0x7E72L & (safe_mod_func_int8_t_s_s(l_1078, p_33.f4))) == (*g_341)))) || (-4L))) , p_34))) < (*p_31)), p_34)))), 5));
                }
                (*g_80) = (void*)0;
            }
            for (l_1083 = 0; (l_1083 > (-20)); l_1083 = safe_sub_func_uint32_t_u_u(l_1083, 3))
            {
                if ((*p_31))
                    break;
            }
            l_1801 = p_31;
        }
    }
    else
    {
        int *l_1844 = (void*)0;
        for (g_202 = 22; (g_202 == 4); --g_202)
        {
            return l_1844;
        }
    }
    return l_1845;
}







static int * func_36(int p_37, unsigned short p_38, int p_39, int p_40, int p_41)
{
    int *l_42 = &g_43;
    int *l_44 = (void*)0;
    int *l_45 = &g_43;
    int *l_46 = &g_43;
    int *l_47 = &g_43;
    int *l_48 = &g_43;
    int *l_49 = &g_43;
    int *l_50 = &g_43;
    int *l_51 = &g_43;
    int *l_52 = &g_43;
    int *l_53 = &g_43;
    int *l_54 = (void*)0;
    int *l_55 = (void*)0;
    int *l_56 = &g_43;
    int *l_57 = &g_43;
    int *l_58 = (void*)0;
    int **l_62 = &l_53;
    unsigned short *l_70 = &g_59;
    unsigned short **l_377 = &l_70;
    unsigned short *l_378 = &g_216.f4;
    char *l_381 = &g_300;
    char **l_382 = &l_381;
    int l_384 = (-5L);
    unsigned *l_386 = &g_387;
    unsigned **l_385 = &l_386;
    unsigned *l_388 = (void*)0;
    unsigned *l_389 = &g_387;
    unsigned l_1046 = 1UL;
    g_59++;
    (*l_62) = &p_39;
    (*l_56) = func_63((safe_mul_func_uint16_t_u_u((((*l_377) = func_67(g_59, l_70)) != l_378), (+(p_40 <= ((*l_389) = (safe_rshift_func_int8_t_s_u((((((*l_385) = (((((2L | ((g_383 = ((*l_382) = l_381)) == (void*)0)) , g_216.f2) < g_216.f3) || l_384) , l_42)) == l_47) , g_80) == g_80), 6))))))));
    l_1046 ^= ((*g_383) | func_63(func_63(p_40)));
    return &g_960;
}







static int func_63(unsigned p_64)
{
    char l_390 = 0L;
    char *l_393 = &l_390;
    unsigned short ***l_406 = &g_404;
    unsigned short **l_407 = &g_405;
    unsigned short ***l_408 = (void*)0;
    unsigned short **l_411 = &g_405;
    unsigned short ***l_410 = &l_411;
    unsigned char *l_412 = &g_207;
    int *l_413 = &g_216.f1;
    int l_462 = 0x892D0D01L;
    unsigned short l_484 = 8UL;
    struct S0 *l_487 = (void*)0;
    char l_492 = 0x96L;
    short l_531 = (-1L);
    short l_677 = 0xD251L;
    int ***l_688 = (void*)0;
    int l_772 = 1L;
    int *l_823 = &g_87;
    (*l_413) = ((l_390 > ((safe_mod_func_uint8_t_u_u(((*l_412) = (p_64 || (((void*)0 == l_393) != (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*g_405) = (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((p_64 && (((*l_406) = g_404) != (p_64 , ((*l_410) = (g_409 = (l_407 = l_407)))))) , ((*g_405) == 3UL)), (*g_341))), 1UL)), l_390))), p_64)), (*g_383)))))), 252UL)) , 0UL)) > (-1L));
    for (g_262 = (-6); (g_262 > 56); g_262 = safe_add_func_uint16_t_u_u(g_262, 5))
    {
        struct S0 l_416 = {0UL,0x5395D112L,65531UL,0x41D9L,4UL,-1L};
        int l_434 = (-10L);
        int ***l_447 = &g_80;
        int l_480 = 0xE371C998L;
        l_416 = l_416;
        for (l_416.f1 = (-30); (l_416.f1 < (-10)); l_416.f1 = safe_add_func_uint32_t_u_u(l_416.f1, 3))
        {
            struct S0 l_419 = {0x02L,-1L,65535UL,0x7185L,0UL,0x691E9792L};
            int *l_420 = &l_419.f1;
            int *l_421 = (void*)0;
            int *l_422 = (void*)0;
            int *l_424 = &g_87;
            int *l_425 = &g_216.f1;
            int *l_426 = &g_87;
            int *l_427 = &l_419.f1;
            int *l_429 = &g_87;
            int *l_430 = &g_43;
            int *l_431 = &g_216.f1;
            int *l_432 = &g_87;
            int *l_433 = &l_419.f1;
            int *l_435 = &l_419.f1;
            int *l_436 = &g_43;
            int *l_437 = (void*)0;
            int *l_438 = &l_419.f1;
            g_216 = (l_419 = l_419);
            ++g_439;
            for (l_419.f4 = 0; (l_419.f4 >= 43); l_419.f4 = safe_add_func_uint16_t_u_u(l_419.f4, 6))
            {
                for (g_216.f2 = 0; (g_216.f2 <= 8); g_216.f2 = safe_add_func_int8_t_s_s(g_216.f2, 7))
                {
                    (*g_80) = (g_446 , l_433);
                    (*l_435) ^= (&g_80 != l_447);
                }
                if ((safe_add_func_uint8_t_u_u(g_371, (safe_add_func_int16_t_s_s((((p_64 >= (1L <= ((*g_341) = ((p_64 , ((g_216 , (*g_341)) && (**g_404))) || ((p_64 ^ ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_64, 0x2DE6L)), (*g_341))) , 0L)) <= (*g_383)))))) , 0xC8L) , (*g_341)), (*l_425))))))
                {
                    unsigned char l_456 = 0UL;
                    --l_456;
                }
                else
                {
                    int *l_459 = &l_434;
                    int *l_460 = &l_419.f1;
                    int *l_461 = (void*)0;
                    int *l_463 = (void*)0;
                    int *l_464 = (void*)0;
                    int *l_465 = &g_43;
                    int *l_466 = (void*)0;
                    int *l_467 = &l_434;
                    int *l_468 = &g_87;
                    int *l_469 = &g_43;
                    int *l_470 = &g_87;
                    int *l_471 = &g_216.f1;
                    int *l_472 = &l_462;
                    int *l_473 = &l_434;
                    int *l_474 = &g_216.f1;
                    int *l_475 = (void*)0;
                    int *l_476 = &g_43;
                    int *l_477 = &g_87;
                    int *l_478 = &g_216.f1;
                    int *l_479 = &l_462;
                    int *l_481 = &g_43;
                    int *l_482 = &g_87;
                    int l_483 = 0xDF097816L;
                    l_484--;
                }
                (*l_406) = (*l_410);
            }
        }
    }
    l_487 = l_487;
    for (g_371 = 0; (g_371 != 38); g_371++)
    {
        unsigned short l_577 = 0x097CL;
        int *l_594 = (void*)0;
        int l_817 = 0x6447C181L;
        int l_877 = (-1L);
        struct S0 l_880 = {255UL,0xD80B663DL,2UL,3L,0x4253L,0x630A4816L};
    }
    return (*l_413);
}







static unsigned short * func_67(int p_68, unsigned short * p_69)
{
    unsigned short l_73 = 1UL;
    int *l_77 = (void*)0;
    int **l_76 = &l_77;
    int ***l_78 = (void*)0;
    int ***l_79 = &l_76;
    char *l_84 = &g_85;
    int *l_86 = &g_87;
    int l_88 = 1L;
    int *l_89 = &g_43;
    int l_90 = 0xF1B003BAL;
    int *l_91 = &g_43;
    int *l_92 = &g_43;
    int *l_93 = &g_43;
    int *l_94 = &g_43;
    int l_95 = 0xE866CA24L;
    int l_96 = (-1L);
    int *l_97 = &g_43;
    int *l_98 = &l_95;
    int *l_99 = &l_96;
    int *l_100 = &l_96;
    int *l_101 = &l_90;
    int *l_102 = (void*)0;
    int *l_103 = (void*)0;
    int *l_104 = &g_43;
    int *l_105 = &l_95;
    int *l_106 = &g_87;
    int *l_107 = &l_90;
    int *l_108 = &l_96;
    int *l_109 = &l_96;
    int *l_110 = &l_90;
    int *l_111 = &l_88;
    int *l_112 = &l_88;
    int *l_113 = &l_96;
    int *l_114 = (void*)0;
    int *l_115 = &g_43;
    int *l_116 = &l_95;
    int *l_117 = (void*)0;
    int *l_118 = &l_90;
    int *l_119 = &g_87;
    int *l_120 = &g_87;
    int *l_121 = &l_88;
    int l_122 = (-2L);
    int *l_123 = &l_88;
    int *l_124 = (void*)0;
    int *l_125 = &l_88;
    int *l_126 = (void*)0;
    int l_127 = 0x233967BEL;
    int *l_128 = (void*)0;
    int *l_129 = &l_88;
    int *l_130 = &l_127;
    int *l_131 = &g_43;
    int *l_132 = &l_96;
    int *l_133 = (void*)0;
    int *l_134 = &l_96;
    int *l_135 = (void*)0;
    int *l_136 = &l_127;
    int l_137 = 0xBC0977F3L;
    int l_138 = (-9L);
    int *l_139 = &l_90;
    int *l_140 = &l_95;
    int *l_141 = &g_87;
    int *l_142 = &l_95;
    int *l_143 = (void*)0;
    int *l_144 = &l_137;
    int *l_145 = &l_96;
    int *l_146 = &l_122;
    int *l_147 = (void*)0;
    int *l_148 = &l_122;
    int *l_149 = (void*)0;
    int *l_150 = &g_87;
    int *l_151 = &l_127;
    int *l_152 = (void*)0;
    int *l_153 = (void*)0;
    int *l_154 = &l_90;
    int *l_155 = &l_90;
    short l_156 = 0x6586L;
    int *l_157 = &g_87;
    int *l_158 = (void*)0;
    int *l_159 = &l_96;
    int *l_160 = (void*)0;
    int l_161 = 7L;
    int *l_162 = &l_161;
    int *l_163 = &g_87;
    int *l_164 = &l_127;
    int *l_165 = &l_90;
    int l_166 = 6L;
    int *l_167 = &l_166;
    int *l_168 = (void*)0;
    int *l_169 = &l_166;
    int *l_170 = &l_95;
    int *l_171 = &l_137;
    int *l_172 = (void*)0;
    int *l_173 = (void*)0;
    int *l_174 = (void*)0;
    int *l_175 = &l_88;
    int *l_176 = &l_137;
    int *l_177 = &l_166;
    int *l_178 = &l_127;
    int *l_179 = &l_90;
    short l_185 = 0x7BEBL;
    unsigned *l_190 = &g_180;
    unsigned char *l_201 = &g_202;
    char **l_205 = &l_84;
    unsigned char *l_206 = &g_207;
    short *l_208 = &l_156;
    struct S0 l_283 = {0UL,0x199E9942L,0x188FL,8L,6UL,1L};
    unsigned short *l_376 = &g_216.f4;
    (*l_86) ^= (safe_sub_func_int8_t_s_s(l_73, ((*l_84) &= (safe_mul_func_uint8_t_u_u(((((*p_69) = (((p_68 , ((*l_79) = l_76)) == g_80) >= g_27)) == g_43) && (0x6CL > g_43)), (((safe_mod_func_uint32_t_u_u(p_68, p_68)) , g_43) >= 1UL))))));
    ++g_180;
    if ((((*l_150) = (safe_rshift_func_int8_t_s_s((((((((*l_91) != l_185) >= ((g_27 || (((*l_110) == ((safe_add_func_uint32_t_u_u((((*l_208) = (safe_add_func_uint8_t_u_u((((++(*l_190)) ^ (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((*l_201) = (*l_116)), ((*l_206) = (9L == (p_68 != ((safe_rshift_func_uint16_t_u_s((((*l_205) = (void*)0) == l_201), 5)) != g_85)))))) , (-1L)), (*l_132))), g_43)), 1UL))) , p_68), 0xFBL))) == g_43), 0x3CB4EFB5L)) == 0x5127L)) <= g_59)) && p_68)) , g_207) == (*l_169)) ^ p_68) != p_68), g_43))) >= 0x497F94F0L))
    {
        struct S0 l_209 = {4UL,0xFA3D26D7L,65535UL,0xA6F5L,0xA42CL,0xA49FFA34L};
        struct S0 *l_210 = &l_209;
        int l_228 = 0x55A46D66L;
        unsigned l_242 = 0x8E093FE3L;
        char **l_293 = &l_84;
        unsigned short *l_305 = &l_209.f4;
        int l_311 = 4L;
        int l_312 = 0xE5CDF20BL;
        int l_314 = 1L;
        int l_316 = 0L;
        int *l_328 = &l_209.f5;
        unsigned short l_333 = 0xDE0FL;
        (*l_210) = l_209;
        if (((safe_rshift_func_int16_t_s_u(((*g_80) != (**l_79)), 8)) , p_68))
        {
            int l_214 = 0x6BF6C930L;
            int *l_215 = &l_209.f5;
            char l_226 = (-7L);
            int l_229 = 1L;
            int l_230 = 2L;
            int l_231 = 8L;
            int l_232 = 0x95279336L;
            int l_234 = 0xA4294222L;
            short l_249 = 0xD896L;
            unsigned char l_261 = 0x3DL;
            char **l_292 = &l_84;
            char l_298 = 0x40L;
            if ((safe_unary_minus_func_uint16_t_u(((((*l_215) &= (p_68 | l_214)) , (g_216 , 0x9838L)) || ((void*)0 == &g_81)))))
            {
                char l_223 = 0x48L;
                int l_227 = 0xE967E9F4L;
                int l_233 = 3L;
                char l_236 = 0L;
                (*g_80) = (((((*l_134) || (p_68 || ((g_216 , ((safe_sub_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s((((*p_69)--) , ((((+((l_223 | (l_214 >= g_180)) == (safe_lshift_func_int16_t_s_s(((l_209.f1 == g_87) > (((*l_206) = 255UL) || (-3L))), 1)))) || g_216.f4) < p_68) || 4294967295UL)), l_214)) < g_87) <= p_68) , 0x35DDL) != p_68), l_214)) ^ l_226)) && (*p_69)))) <= l_209.f5) <= g_216.f4) , (void*)0);
                --g_237;
                for (l_185 = 0; (l_185 != 27); l_185++)
                {
                    (*l_131) &= ((*l_141) = 1L);
                }
                ++l_242;
            }
            else
            {
                unsigned short l_260 = 0x0225L;
                (*l_145) ^= ((g_216.f3 , (((safe_div_func_uint32_t_u_u(4294967286UL, (safe_rshift_func_int16_t_s_u(l_249, (((((p_68 || (safe_add_func_int8_t_s_s(p_68, (((*l_129) = (+(safe_sub_func_int8_t_s_s((g_85 = l_209.f5), (safe_mul_func_int8_t_s_s((((((l_231 == ((*l_190) &= (0x6E15L > ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_68 || l_260), l_209.f2)), (-1L))) > g_237)))) ^ p_68) , &g_180) != l_215) && p_68), p_68)))))) , l_214)))) | g_235) > (*l_163)) , (*p_69)) , g_85))))) > l_261) , 0x0BF0L)) , l_260);
                (**l_79) = (**l_79);
                g_262++;
            }
            for (l_127 = 0; (l_127 <= (-28)); l_127 = safe_sub_func_int32_t_s_s(l_127, 4))
            {
                unsigned char l_269 = 0UL;
                unsigned char l_286 = 0xD3L;
                char *l_287 = &g_85;
                (*l_210) = g_216;
                if ((((*p_69) = (*p_69)) > g_85))
                {
                    int l_272 = 0x6EB98435L;
                    for (l_209.f4 = 14; (l_209.f4 >= 1); --l_209.f4)
                    {
                        ++l_269;
                        if (l_272)
                            continue;
                        (*l_91) = (0xE60D97CCL || 0x527C6C95L);
                    }
                    (*l_148) = ((*l_179) = 0xEC2AD83BL);
                }
                else
                {
                    short l_273 = 0x1C39L;
                    unsigned short *l_277 = &l_73;
                    int l_278 = 1L;
                    unsigned char l_279 = 0xADL;
                    int *l_282 = &g_87;
                    if (l_242)
                    {
                        unsigned short l_274 = 0x87ACL;
                        (*l_91) &= ((((l_273 ^= 0x39B40A8AL) <= p_68) >= l_274) & ((((*l_201) = (((+p_68) ^ (safe_lshift_func_int16_t_s_s(0xD224L, (g_81 == (void*)0)))) > l_226)) , p_69) == l_277));
                        (*l_210) = g_216;
                        l_279++;
                    }
                    else
                    {
                        l_282 = (*g_80);
                        (*l_210) = l_283;
                        (*l_107) |= ((~(&g_81 != (void*)0)) < (((safe_mod_func_int16_t_s_s((0xE759DE1FL < ((*l_157) = l_286)), (*p_69))) | ((~((*l_201) = ((void*)0 != l_287))) >= ((*l_287) = ((safe_lshift_func_int8_t_s_s(g_43, (((g_235 >= (*p_69)) , 5UL) | 0L))) > l_286)))) >= l_286));
                    }
                }
                (*l_86) = 0L;
            }
            if (((g_216.f5 , ((l_292 == l_293) , (~(g_202 , (safe_lshift_func_int8_t_s_s(p_68, 1)))))) ^ ((safe_mod_func_uint16_t_u_u(0x816CL, p_68)) , (0x4090L <= 0xB2E4L))))
            {
                return &g_59;
            }
            else
            {
                unsigned l_301 = 4UL;
                (*l_142) &= p_68;
                (*l_162) = p_68;
                ++l_301;
            }
        }
        else
        {
            unsigned short l_304 = 65535UL;
            (*l_170) ^= l_304;
        }
        if (p_68)
        {
            return p_69;
        }
        else
        {
            char l_308 = (-5L);
            int l_309 = 0L;
            int l_310 = 0L;
            int l_313 = 0x64BD9086L;
            int *l_315 = &l_90;
            int *l_317 = &g_216.f1;
            int l_318 = (-1L);
            unsigned *l_370 = &g_371;
            for (l_209.f0 = 0; (l_209.f0 == 32); l_209.f0 = safe_add_func_int32_t_s_s(l_209.f0, 4))
            {
                (**l_79) = (void*)0;
                (*l_109) = l_209.f5;
            }
            ++g_319;
            if (((((*l_208) = g_202) & ((safe_mod_func_int16_t_s_s(p_68, l_314)) ^ (((safe_mod_func_int8_t_s_s((((p_68 | g_216.f3) == (safe_sub_func_uint16_t_u_u(((*p_69) ^= ((l_328 != (void*)0) == (safe_div_func_int32_t_s_s(l_209.f2, (safe_rshift_func_int8_t_s_s(p_68, l_333)))))), 0x2B39L))) && (*p_69)), 0xDCL)) | 1L) > l_314))) < 0x77E9CDB6L))
            {
                unsigned l_342 = 6UL;
                char *l_345 = &g_85;
                int l_356 = (-1L);
                if (l_314)
                {
                    int **l_340 = &l_143;
                    (*l_111) &= (((*l_206) |= 255UL) <= ((3L == ((*l_315) = (g_59 ^ ((((safe_sub_func_uint32_t_u_u(g_299, (((g_43 < (safe_mul_func_uint8_t_u_u((((*l_201) = (safe_sub_func_uint16_t_u_u((((*l_79) = l_340) == &l_317), ((*l_208) |= 0xB7A8L)))) ^ (g_341 == (void*)0)), l_342))) == l_209.f0) , g_216.f3))) > 253UL) == p_68) || 0xC8L)))) != p_68));
                }
                else
                {
                    char *l_347 = &g_300;
                    char **l_346 = &l_347;
                    int l_354 = (-3L);
                    l_356 = (safe_mul_func_uint8_t_u_u((((*l_205) = l_345) == ((*g_341) , ((*l_346) = &g_300))), (((*l_345) = (((*l_201) = (safe_mod_func_uint32_t_u_u(((void*)0 == &g_300), ((safe_mod_func_int32_t_s_s(p_68, (((+((*l_92) |= l_311)) == ((safe_lshift_func_int8_t_s_u((l_354 , (safe_unary_minus_func_int8_t_s(((((*l_315) || l_242) != (-1L)) <= (*l_317))))), 0)) & g_216.f3)) , l_209.f5))) ^ g_27)))) ^ g_300)) , 0x24L)));
                }
                (*l_154) = (safe_mul_func_uint16_t_u_u(g_300, (((*l_190) = 0xAF36F420L) <= 1UL)));
            }
            else
            {
                (*g_80) = (*g_80);
            }
            (*l_165) = ((*l_163) <= (safe_sub_func_int16_t_s_s(0x08B2L, ((*p_69) = (((*l_370) ^= (l_228 = ((*l_190) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((p_68 , (((g_85 = ((~(~(*p_69))) ^ (safe_unary_minus_func_int16_t_s(l_311)))) || ((safe_mul_func_uint8_t_u_u(255UL, g_216.f5)) ^ (*p_69))) == (safe_div_func_uint8_t_u_u((*l_167), (*l_110))))) <= (*l_315)) & (-7L)), (*l_317))), (-2L)))))) & (*l_146))))));
        }
    }
    else
    {
        int l_374 = 0x1574A671L;
        for (l_127 = 24; (l_127 != 17); l_127--)
        {
            unsigned short *l_375 = &l_283.f4;
            (*l_123) = l_374;
            return &g_59;
        }
    }
    (*l_177) = (*l_159);
    return l_376;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_216.f2, "g_216.f2", print_hash_value);
    transparent_crc(g_216.f3, "g_216.f3", print_hash_value);
    transparent_crc(g_216.f4, "g_216.f4", print_hash_value);
    transparent_crc(g_216.f5, "g_216.f5", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1047.f0, "g_1047.f0", print_hash_value);
    transparent_crc(g_1047.f1, "g_1047.f1", print_hash_value);
    transparent_crc(g_1047.f2, "g_1047.f2", print_hash_value);
    transparent_crc(g_1047.f3, "g_1047.f3", print_hash_value);
    transparent_crc(g_1047.f4, "g_1047.f4", print_hash_value);
    transparent_crc(g_1047.f5, "g_1047.f5", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1120, "g_1120", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1386, "g_1386", print_hash_value);
    transparent_crc(g_1597, "g_1597", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1607, "g_1607", print_hash_value);
    transparent_crc(g_1623, "g_1623", print_hash_value);
    transparent_crc(g_1630, "g_1630", print_hash_value);
    transparent_crc(g_1755, "g_1755", print_hash_value);
    transparent_crc(g_1763, "g_1763", print_hash_value);
    transparent_crc(g_1955, "g_1955", print_hash_value);
    transparent_crc(g_1959.f0, "g_1959.f0", print_hash_value);
    transparent_crc(g_1959.f1, "g_1959.f1", print_hash_value);
    transparent_crc(g_1959.f2, "g_1959.f2", print_hash_value);
    transparent_crc(g_1959.f3, "g_1959.f3", print_hash_value);
    transparent_crc(g_1959.f4, "g_1959.f4", print_hash_value);
    transparent_crc(g_1959.f5, "g_1959.f5", print_hash_value);
    transparent_crc(g_2113, "g_2113", print_hash_value);
    transparent_crc(g_2259, "g_2259", print_hash_value);
    transparent_crc(g_2464, "g_2464", print_hash_value);
    transparent_crc(g_2710, "g_2710", print_hash_value);
    transparent_crc(g_2728, "g_2728", print_hash_value);
    transparent_crc(g_2919, "g_2919", print_hash_value);
    transparent_crc(g_2968, "g_2968", print_hash_value);
    transparent_crc(g_2987, "g_2987", print_hash_value);
    transparent_crc(g_2989, "g_2989", print_hash_value);
    transparent_crc(g_3001, "g_3001", print_hash_value);
    transparent_crc(g_3006, "g_3006", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
