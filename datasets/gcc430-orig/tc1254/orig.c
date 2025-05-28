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
   volatile short f0;
   unsigned f1;
   int f2;
   int f3;
   unsigned f4;
   unsigned short f5;
   unsigned char f6;
   volatile int f7;
};


static unsigned char g_8 = 0x04L;
static unsigned g_24 = 4294967295UL;
static int g_35 = 0x86992F1EL;
static int *g_34 = &g_35;
static unsigned g_49 = 0x9F2E0723L;
static char g_57 = 0x72L;
static unsigned short g_65 = 0xBDDDL;
static unsigned short g_67 = 0x9D28L;
static unsigned short g_69 = 3UL;
static int *g_75 = &g_35;
static int g_80 = 0x003BA293L;
static struct S0 g_86 = {-4L,18446744073709551612UL,0xB25A596DL,0xF04E4CABL,4294967295UL,1UL,247UL,0x4CDC86D9L};
static struct S0 * volatile g_87 = &g_86;
static int **g_93 = &g_75;
static char g_104 = (-10L);
static char g_106 = 0L;
static struct S0 g_115 = {-9L,0UL,-2L,-1L,4294967295UL,3UL,0x8FL,0x0ED53B0EL};
static struct S0 * volatile g_116 = &g_86;
static struct S0 * volatile *g_120 = &g_87;
static struct S0 * volatile ** volatile g_119 = &g_120;
static int *** volatile g_125 = &g_93;
static int *g_172 = (void*)0;
static int **g_171 = &g_172;
static int *** volatile g_170 = &g_171;
static volatile struct S0 g_190 = {0x6B31L,0UL,1L,0xA1DF46D5L,4294967295UL,0xB1A0L,0x25L,0xE7943EC4L};
static struct S0 g_199 = {1L,0UL,-7L,-4L,0x3A1DB903L,1UL,246UL,3L};
static volatile short *g_234 = (void*)0;
static volatile short **g_233 = &g_234;
static short g_270 = 0x589BL;
static short *g_300 = &g_270;
static short **g_299 = &g_300;
static short ***g_298 = &g_299;
static struct S0 g_303 = {0x427AL,0xDBFA3D35L,-10L,4L,0UL,0xC62BL,0x97L,-1L};
static int ** volatile g_337 = &g_75;
static struct S0 g_340 = {0xA574L,9UL,0x81312F68L,-2L,0UL,0x7FB2L,255UL,6L};
static struct S0 g_341 = {0x9999L,4UL,0xA52E5F91L,0x0525E157L,4294967292UL,0x1EDEL,255UL,-1L};
static struct S0 g_347 = {0xC6BFL,0xCB8014FFL,0x6B91F25EL,0x7F041DABL,4294967293UL,0xFAADL,0UL,0x8FF28CAAL};
static int *** volatile g_349 = (void*)0;
static int *** volatile g_350 = (void*)0;
static char *g_362 = &g_57;
static char ** volatile g_361 = &g_362;
static short g_364 = 0x3D05L;
static struct S0 g_370 = {0x7006L,0xA0178CA0L,-9L,0xC4D77185L,3UL,65527UL,0xE9L,-1L};
static struct S0 g_392 = {0L,18446744073709551610UL,0x9390C548L,0L,4294967291UL,0xCE3AL,9UL,0x14256CD0L};
static struct S0 g_411 = {0x70BDL,0x3B574CE6L,-7L,0x52B2F686L,0xF7DE8538L,0UL,0x17L,0x21134290L};
static unsigned short *g_442 = &g_303.f5;
static unsigned short **g_441 = &g_442;
static unsigned short *** volatile g_443 = &g_441;
static struct S0 g_447 = {0xB7DFL,0x9E28F916L,-4L,1L,3UL,0UL,0x13L,-1L};
static struct S0 g_456 = {4L,0xA70BE18EL,1L,0L,0UL,65535UL,0xFDL,-8L};
static int *** volatile g_457 = &g_93;
static unsigned char g_542 = 255UL;
static volatile struct S0 g_555 = {0x5DACL,0x439044B4L,-2L,0xB014DF75L,2UL,1UL,249UL,1L};
static unsigned g_578 = 0xEA1CB594L;
static int *g_611 = &g_456.f3;
static volatile struct S0 g_614 = {9L,18446744073709551615UL,0x19EDF782L,-7L,0x1BE71261L,65532UL,255UL,0x7C313479L};
static volatile char g_630 = 0x07L;
static volatile struct S0 g_631 = {-1L,0UL,0x7F644E1AL,0x5C79128AL,0x7B39D3F9L,0x89EBL,0x0CL,0x70EF2261L};
static volatile struct S0 g_632 = {0L,18446744073709551610UL,0x7E9F5BDEL,0x00D3385BL,1UL,0UL,0x47L,0x3D663BE0L};
static int ** volatile g_650 = &g_34;



static unsigned short func_1(void);
static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6, int p_7);
static unsigned short func_9(int p_10);
static int ** func_12(unsigned p_13, unsigned p_14, int * p_15, short p_16, unsigned p_17);
static unsigned func_18(int p_19, unsigned char p_20);
static unsigned short func_25(unsigned * p_26, int ** p_27);
static unsigned * func_28(int * p_29, int p_30, int p_31, int p_32, int ** p_33);
static unsigned * func_36(int ** p_37, int * p_38);
static int * func_40(int ** p_41);
static int ** func_42(unsigned short p_43, unsigned * p_44, unsigned short p_45, unsigned p_46, int p_47);
static unsigned short func_1(void)
{
    unsigned short l_11 = 0UL;
    short **l_565 = (void*)0;
    short ***l_566 = &l_565;
    unsigned *l_577 = &g_578;
    (*g_650) = func_2((((g_8 <= func_9(l_11)) >= ((((*l_566) = l_565) == (void*)0) & l_11)) <= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*l_577) = g_392.f4) ^ (safe_lshift_func_int16_t_s_s((((l_11 && (safe_rshift_func_int16_t_s_s(l_11, 6))) == g_303.f1) == g_340.f6), 4))), l_11)), 0x28L)), l_11)) | (-1L)), g_456.f1)), g_447.f1))), g_392.f1, l_11, g_172, g_340.f5);
    return (***g_443);
}







static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6, int p_7)
{
    unsigned char *l_587 = &g_411.f6;
    short l_588 = 1L;
    int l_593 = 0L;
    int *l_594 = (void*)0;
    short ****l_608 = &g_298;
    int **l_625 = &g_172;
    int **l_633 = &g_75;
    int **l_634 = &l_594;
    struct S0 *l_641 = &g_370;
    struct S0 **l_640 = &l_641;
    struct S0 ***l_639 = &l_640;
    unsigned char l_648 = 0x8AL;
    int *l_649 = &g_115.f3;
    if (((safe_mul_func_uint16_t_u_u(p_3, ((safe_mod_func_int8_t_s_s((*g_362), ((*l_587) = p_4))) & l_588))) && (l_588 != (safe_lshift_func_uint16_t_u_u(((p_4 > 0x78L) == ((((0UL || (-5L)) && (**g_299)) && p_5) > l_588)), l_588)))))
    {
        unsigned l_591 = 0x683EAA21L;
        int l_592 = 0xC7A2B2A7L;
        int **l_603 = (void*)0;
        unsigned short l_619 = 0x0348L;
        int **l_626 = &g_172;
        int *l_627 = (void*)0;
        p_7 = (l_592 = l_591);
        l_593 = l_588;
        if (l_593)
        {
            l_594 = &l_593;
        }
        else
        {
            struct S0 ***l_595 = (void*)0;
            struct S0 *l_598 = &g_370;
            struct S0 **l_597 = &l_598;
            struct S0 ***l_596 = &l_597;
            int l_599 = 0xDEC1DF63L;
            int **l_600 = (void*)0;
            int *l_623 = &l_592;
            (*l_596) = (void*)0;
            if (p_5)
            {
                int **l_601 = &g_34;
                int **l_602 = (void*)0;
                (*l_601) = &p_7;
                p_7 = ((((((*l_601) = &l_593) == (void*)0) > 1UL) != p_5) ^ ((-7L) == 4L));
            }
            else
            {
                char l_616 = (-9L);
                if ((safe_rshift_func_int16_t_s_s(((void*)0 != l_608), 15)))
                {
                    unsigned l_609 = 0x63E35576L;
                    int *l_610 = &g_303.f3;
                    (*l_610) = l_609;
                    g_611 = &l_593;
                }
                else
                {
                    int *l_612 = (void*)0;
                    int *l_615 = &g_199.f3;
                    l_612 = &p_7;
                    (*g_611) = (0x3BFCFD2FL == l_591);
                    if (((p_5 && (*l_612)) || ((**g_441) = (((*l_587) = g_370.f0) == p_4))))
                    {
                        int *l_613 = &g_392.f3;
                        l_594 = l_613;
                        return &g_35;
                    }
                    else
                    {
                        (*g_611) = 0x6604D0B6L;
                        (**g_120) = g_614;
                        return l_615;
                    }
                }
                p_6 = &p_7;
                if (l_616)
                {
                    l_599 = (*p_6);
                    for (g_86.f3 = (-7); (g_86.f3 <= (-19)); --g_86.f3)
                    {
                        l_619 = (*p_6);
                    }
                    for (g_347.f1 = 0; (g_347.f1 > 12); ++g_347.f1)
                    {
                        int *l_622 = &g_392.f3;
                        (*p_6) = (*g_611);
                        (*g_611) = ((void*)0 != (*g_443));
                        p_6 = l_622;
                        if (l_599)
                            continue;
                    }
                }
                else
                {
                    int *l_624 = &g_86.f3;
                    if (func_25(&g_49, l_600))
                    {
                        l_623 = &p_7;
                    }
                    else
                    {
                        (**g_120) = (*g_87);
                        return l_624;
                    }
                }
                l_626 = (l_625 = (*g_170));
            }
            return l_627;
        }
    }
    else
    {
        int l_628 = 0L;
        int l_629 = 0xE1EAB114L;
        l_629 = l_628;
        (*g_611) = g_630;
        g_632 = g_631;
    }
    (*l_633) = &p_7;
    (*l_641) = (*g_87);
    (*l_641) = (*l_641);
    return l_649;
}







static unsigned short func_9(int p_10)
{
    unsigned l_21 = 0UL;
    unsigned *l_23 = &g_24;
    int **l_39 = (void*)0;
    unsigned *l_48 = &g_49;
    int **l_138 = &g_75;
    unsigned **l_205 = (void*)0;
    unsigned **l_206 = (void*)0;
    unsigned **l_207 = &l_48;
    char l_208 = 0xD3L;
    unsigned char *l_359 = &g_115.f6;
    char **l_360 = (void*)0;
    short *l_363 = &g_364;
    short **l_365 = &l_363;
    unsigned short l_373 = 0x734AL;
    int *l_423 = &g_411.f3;
    struct S0 *l_488 = &g_115;
    struct S0 *l_489 = (void*)0;
    int *l_558 = &g_35;
    l_39 = func_12(((*l_23) = func_18(p_10, l_21)), (func_25(((*l_207) = func_28(g_34, ((*g_34) = ((l_23 == ((*l_207) = func_36(l_39, ((*l_138) = func_40(func_42(p_10, l_48, (((safe_mul_func_int8_t_s_s((((*g_34) >= p_10) >= p_10), g_8)) != 0L) <= g_49), l_21, p_10)))))) < g_199.f2)), g_199.f1, l_208, &g_34)), l_39) > p_10), g_172, g_115.f1, g_340.f1);
    if ((safe_lshift_func_int8_t_s_s((((p_10 <= (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((0xD69629B2L && ((void*)0 == l_359)), (+p_10))) | (l_360 != g_361)), ((**g_299) = (**l_39))))) || (((*l_365) = l_363) != (void*)0)) >= (**l_39)), 7)))
    {
        short ***l_366 = &g_299;
        int **l_371 = (void*)0;
        int l_380 = 0L;
        char *l_385 = &g_57;
        unsigned l_388 = 4294967291UL;
        unsigned *l_406 = &g_49;
        unsigned char l_516 = 0x43L;
        if ((&l_365 == l_366))
        {
            unsigned short l_367 = 65535UL;
            if (func_18(l_367, ((*l_359) = (((**l_39) = g_65) || (safe_add_func_int16_t_s_s(0L, 2UL))))))
            {
                (**g_120) = g_370;
                return g_115.f0;
            }
            else
            {
                (*l_138) = &p_10;
            }
        }
        else
        {
            int *l_372 = (void*)0;
            char *l_384 = (void*)0;
            char **l_383 = &l_384;
            unsigned l_389 = 0UL;
            int *l_390 = &g_347.f3;
            int *l_391 = &g_303.f3;
            (*g_120) = (*g_120);
            (*l_39) = func_36(l_371, &p_10);
            (*l_391) = ((*l_390) = (((*l_23) = g_370.f1) ^ (l_389 = ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s((l_380 | ((*g_362) >= (safe_sub_func_uint16_t_u_u((((*l_383) = (*g_361)) == l_385), 0xEBF2L)))), 14)) ^ ((((g_86.f4 = p_10) & (safe_mod_func_uint8_t_u_u(g_115.f5, 0x7DL))) >= l_388) == p_10)) == 4294967287UL), 5)) || 0xBAL))));
        }
        (**g_120) = g_392;
        if (p_10)
        {
            int *l_396 = &g_199.f3;
            char *l_407 = &g_104;
            char *l_408 = &g_57;
            unsigned short l_430 = 0UL;
            int **l_450 = (void*)0;
            if ((safe_add_func_uint8_t_u_u(p_10, (*g_362))))
            {
                int **l_395 = (void*)0;
                int l_405 = 7L;
                (*l_138) = &p_10;
                (*l_39) = func_40(func_12((safe_lshift_func_uint16_t_u_s((((*l_396) > (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(g_86.f6, 6)), 14))) < ((((safe_add_func_int32_t_s_s(l_405, (func_18(((+0x8E76D836L) <= ((g_392.f4 ^ p_10) && (p_10 > ((((func_25((l_406 = func_40(&l_396)), l_138) | g_364) & p_10) | g_392.f5) > p_10)))), (*l_396)) & (**g_361)))) == 5UL) | g_57) & (*l_396))), 3)), p_10, &g_35, (*l_396), p_10));
            }
            else
            {
                char **l_409 = &g_362;
                int **l_410 = (void*)0;
                int l_482 = 0L;
                if ((p_10 <= (l_407 != ((*l_409) = (l_408 = l_408)))))
                {
                    char **l_419 = &l_407;
                    if (func_25(func_40(l_371), l_410))
                    {
                        (**g_120) = g_411;
                        (**g_120) = (*g_87);
                        return p_10;
                    }
                    else
                    {
                        (*l_39) = l_396;
                    }
                    for (g_303.f3 = (-9); (g_303.f3 == 17); g_303.f3++)
                    {
                        return g_411.f1;
                    }
                    for (g_347.f4 = 0; (g_347.f4 > 27); g_347.f4++)
                    {
                        char **l_416 = &l_408;
                        char ***l_417 = (void*)0;
                        char ***l_418 = &l_360;
                        (*l_138) = &p_10;
                        l_419 = ((*l_418) = l_416);
                    }
                    (*l_396) = p_10;
                }
                else
                {
                    char l_422 = 0x45L;
                    int l_433 = 0L;
                    (*l_138) = (void*)0;
                    (**g_120) = (*g_116);
                    for (g_80 = 0; (g_80 >= (-6)); g_80 = safe_sub_func_uint8_t_u_u(g_80, 5))
                    {
                        unsigned short *l_437 = &g_347.f5;
                        unsigned short **l_436 = &l_437;
                        unsigned short *l_438 = (void*)0;
                        (*l_39) = func_40(func_12(l_422, ((*l_23) = p_10), l_423, ((!((*l_407) = (0x5AB82B68L ^ (safe_lshift_func_int16_t_s_u(p_10, (((*g_300) || (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_430, (safe_sub_func_int16_t_s_s(l_433, (p_10 != 1UL))))), p_10))) | p_10)))))) > 0x22L), p_10));
                        (*l_396) = ((*l_423) = (((***g_298) = (safe_rshift_func_uint16_t_u_u(g_86.f2, ((l_438 = ((*l_436) = &g_69)) == (void*)0)))) <= (g_69 <= ((l_422 == (-4L)) < func_25(&g_24, l_371)))));
                    }
                    (*g_443) = g_441;
                }
                for (g_115.f5 = 0; (g_115.f5 <= 51); g_115.f5 = safe_add_func_uint8_t_u_u(g_115.f5, 6))
                {
                    unsigned short l_446 = 0x78FBL;
                    (*l_138) = &p_10;
                    (*g_75) = l_446;
                }
                if (((*g_300) ^ ((((**g_441) = 3UL) <= 0xC1C3L) && (g_392.f2 >= (**g_361)))))
                {
                    (**g_120) = g_447;
                    (*l_39) = ((*g_337) = &p_10);
                    (*l_39) = (*l_39);
                    for (g_115.f5 = 0; (g_115.f5 >= 2); g_115.f5++)
                    {
                        int ***l_451 = &l_450;
                        int ***l_452 = (void*)0;
                        int ***l_453 = &g_171;
                        (***g_119) = (*g_116);
                        (*l_453) = ((*l_451) = l_450);
                    }
                }
                else
                {
                    if ((0x8B96E72EL >= (+p_10)))
                    {
                        (*l_396) = (safe_sub_func_int8_t_s_s((*l_396), (p_10 && ((-9L) ^ g_392.f0))));
                        (**g_120) = g_456;
                        p_10 = p_10;
                    }
                    else
                    {
                        (*g_457) = &l_396;
                        (*l_138) = (void*)0;
                    }
                    for (g_447.f6 = (-14); (g_447.f6 != 30); ++g_447.f6)
                    {
                        (*g_120) = (**g_119);
                    }
                    (*l_39) = &p_10;
                }
                for (g_456.f6 = 0; (g_456.f6 <= 17); ++g_456.f6)
                {
                    (*l_138) = func_40(func_12(g_190.f3, g_341.f5, &p_10, (g_364 = ((((safe_add_func_int8_t_s_s((~(*l_396)), (((p_10 == p_10) || p_10) ^ (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((**g_299) = (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x5CL, (*g_362))), 0xD51AL)), 5UL))), (*l_396))), p_10)), l_482)), 11)), (*l_423))) < p_10), (-1L)))))) || p_10) & 0x1DC84013L) < g_456.f1)), p_10));
                }
            }
        }
        else
        {
            unsigned l_483 = 1UL;
            unsigned char l_504 = 0x68L;
            short l_517 = (-9L);
            int l_538 = 0xB7511031L;
            int **l_541 = (void*)0;
            int *l_543 = &g_392.f3;
            (*l_423) = (((*g_362) = l_483) < (g_411.f6 = (safe_mod_func_int32_t_s_s(0x215F1D13L, (-1L)))));
            if ((safe_mul_func_uint16_t_u_u((((l_488 = l_488) == (l_489 = &g_347)) >= p_10), ((((0xB09ACBA7L && p_10) && (safe_lshift_func_uint16_t_u_u((***g_443), 11))) & (safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_10, (((1L < (safe_rshift_func_uint8_t_u_s(((*l_359) = (((*l_423) = (0xE1L >= g_347.f6)) >= p_10)), 0))) < 1L) & 1UL))), 0xCCL)) & 0xA9L) | (**g_441)), p_10)) | p_10), 0xA8L))) & p_10))))
            {
                short l_511 = 0xA3B2L;
                char *l_520 = &g_104;
                int l_526 = 1L;
                int **l_537 = &l_423;
                int l_539 = 1L;
                unsigned *l_540 = (void*)0;
                if ((safe_mod_func_int16_t_s_s(l_504, (safe_mul_func_int16_t_s_s((((*l_423) <= ((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u(((***g_298) = l_511), p_10)) == (safe_sub_func_uint16_t_u_u(65535UL, (((**l_365) = 1L) <= (((**g_441) = (safe_add_func_int8_t_s_s((*g_362), ((l_517 = l_516) && ((((*l_520) = (safe_add_func_int32_t_s_s(func_25((*l_207), l_371), l_511))) <= (**g_361)) <= p_10))))) && p_10))))) >= 4UL), 0x91100AECL)) <= l_511)) < 1UL), p_10)))))
                {
                    unsigned l_525 = 4294967295UL;
                    (*l_423) = ((safe_mod_func_uint32_t_u_u((p_10 != (p_10 && (l_525 >= (~g_392.f4)))), ((&l_373 == &l_373) | (+p_10)))) > (+l_526));
                    for (g_370.f6 = (-4); (g_370.f6 > 11); ++g_370.f6)
                    {
                        (*l_423) = ((void*)0 == &g_441);
                    }
                    for (g_411.f6 = 0; (g_411.f6 > 56); g_411.f6 = safe_add_func_uint8_t_u_u(g_411.f6, 7))
                    {
                        unsigned *l_533 = &g_115.f4;
                        int **l_534 = &l_423;
                        l_538 = (((safe_add_func_int32_t_s_s(((**l_534) = (func_25(l_533, l_534) || (((safe_rshift_func_int8_t_s_u((65535UL > (p_10 ^ func_25(func_40(l_534), l_537))), 0)) || (***g_443)) > (**l_537)))), l_517)) & l_517) ^ 65535UL);
                        if (l_539)
                            continue;
                        if ((**l_534))
                            break;
                        (**l_534) = func_25(l_540, l_541);
                    }
                    p_10 = p_10;
                }
                else
                {
                    (*l_423) = g_542;
                    (**l_537) = 0xE719C7A6L;
                    return p_10;
                }
                (*l_537) = l_543;
                (**l_537) = (-1L);
            }
            else
            {
                (*l_543) = (safe_add_func_int32_t_s_s(p_10, p_10));
                (*l_423) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(1L, 3)), (**g_299)));
            }
        }
    }
    else
    {
        unsigned char l_550 = 0x95L;
        int *l_551 = &g_411.f2;
        char **l_552 = &g_362;
        p_10 = (((*l_423) = func_18(l_550, (func_25(&g_24, &l_423) < func_18(((*l_551) = 0L), (0x2A72L != (**g_299)))))) && 2UL);
        p_10 = (l_552 == (void*)0);
        for (g_411.f4 = (-18); (g_411.f4 <= 12); ++g_411.f4)
        {
            (*g_120) = (**g_119);
            return (***g_443);
        }
        (*l_488) = g_555;
    }
    (*l_39) = ((*l_138) = &p_10);
    (*l_138) = &p_10;
    return p_10;
}







static int ** func_12(unsigned p_13, unsigned p_14, int * p_15, short p_16, unsigned p_17)
{
    int **l_348 = &g_34;
    (**g_120) = g_347;
    return l_348;
}







static unsigned func_18(int p_19, unsigned char p_20)
{
    unsigned l_22 = 1UL;
    return l_22;
}







static unsigned short func_25(unsigned * p_26, int ** p_27)
{
    int **l_346 = &g_34;
    (*l_346) = func_40(l_346);
    return (**l_346);
}







static unsigned * func_28(int * p_29, int p_30, int p_31, int p_32, int ** p_33)
{
    unsigned l_211 = 1UL;
    int l_213 = 0x76AF9EDCL;
    char *l_215 = &g_57;
    char **l_214 = &l_215;
    char ***l_216 = &l_214;
    int *l_217 = (void*)0;
    for (g_115.f6 = 0; (g_115.f6 > 39); g_115.f6++)
    {
        unsigned char l_212 = 0x7CL;
        l_213 = ((*p_29) = (l_211 ^ l_212));
    }
    (*l_216) = l_214;
    if (l_213)
    {
        unsigned *l_222 = &g_115.f4;
        unsigned short l_225 = 65529UL;
        unsigned short *l_228 = (void*)0;
        unsigned short *l_229 = &g_115.f5;
        l_217 = (*p_33);
        l_217 = func_36(&p_29, (*p_33));
        (*g_34) = (((*l_229) = func_18(func_18((safe_rshift_func_int16_t_s_s((((*l_222) = ((-1L) == (safe_lshift_func_int16_t_s_s((p_29 == p_29), 13)))) | ((((*g_34) = (**p_33)) && (0x50FF4D6FL >= (safe_lshift_func_int8_t_s_u(g_190.f4, l_225)))) != (safe_lshift_func_uint16_t_u_u(g_199.f2, (((g_49 = p_32) != (*g_75)) >= l_225))))), 9)), p_31), l_225)) < l_225);
    }
    else
    {
        unsigned short l_266 = 65531UL;
        short *l_291 = (void*)0;
        unsigned char l_292 = 0UL;
        short **l_297 = &l_291;
        short ***l_296 = &l_297;
        int *l_331 = &g_35;
        if ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(0xCCL, 6)))))
        {
            volatile short ***l_235 = &g_233;
            int l_247 = (-1L);
            unsigned char l_272 = 0UL;
            int l_273 = 1L;
            (*l_235) = g_233;
            for (g_80 = 0; (g_80 == 19); g_80++)
            {
                unsigned l_240 = 3UL;
                int *l_243 = (void*)0;
                (*p_29) = (safe_mul_func_int16_t_s_s(l_240, g_199.f0));
                if (l_240)
                {
                    for (g_86.f3 = 0; (g_86.f3 >= (-23)); g_86.f3--)
                    {
                        int *l_244 = &g_115.f3;
                        l_244 = l_243;
                        return &g_49;
                    }
                    return p_29;
                }
                else
                {
                    unsigned char *l_254 = &g_86.f6;
                    int l_255 = 1L;
                    unsigned short *l_256 = (void*)0;
                    unsigned short *l_257 = &g_115.f5;
                    short *l_269 = &g_270;
                    short *l_271 = (void*)0;
                    (*p_29) = (**p_33);
                    (**p_33) = ((safe_sub_func_uint16_t_u_u(l_247, (safe_add_func_int8_t_s_s(p_30, (((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x4090L, (l_255 = ((250UL > ((*l_254) = 5UL)) | ((((*l_257) = l_255) || (g_115.f6 & ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_266, ((*l_269) = (safe_lshift_func_uint16_t_u_u(0xA904L, l_255))))), p_32)), g_86.f1)), p_31)) & g_190.f5))) != g_86.f4))))), g_104)) < g_80) ^ l_272))))) <= l_273);
                    if ((p_31 != 0x7FL))
                    {
                        (**g_120) = (*g_87);
                        return &g_49;
                    }
                    else
                    {
                        int l_274 = 0x5A0D50F8L;
                        (*p_33) = (*p_33);
                        if (l_274)
                            continue;
                    }
                }
            }
            (*p_33) = (*p_33);
        }
        else
        {
            unsigned *l_277 = (void*)0;
            int *l_293 = &g_115.f3;
            int *l_306 = &g_199.f3;
            int l_317 = 0xA7BBCEECL;
            if (((safe_sub_func_uint32_t_u_u((g_115.f4 = 0xE47E5CDFL), (safe_mul_func_int16_t_s_s(l_266, p_30)))) <= l_266))
            {
                char l_302 = 3L;
                int *l_307 = &g_86.f3;
                unsigned *l_314 = (void*)0;
                unsigned *l_315 = &g_49;
                unsigned *l_316 = &g_115.f4;
                (**g_120) = (**g_120);
                for (p_31 = 13; (p_31 != (-25)); p_31--)
                {
                    int *l_286 = (void*)0;
                    int *l_287 = &g_199.f2;
                    int l_288 = (-1L);
                    int **l_311 = (void*)0;
                    if ((safe_mul_func_int8_t_s_s((p_30 ^ g_199.f5), ((safe_sub_func_uint32_t_u_u(func_18(((*l_287) = p_30), l_288), (*g_34))) > (((safe_mul_func_uint16_t_u_u(func_18(((void*)0 != l_291), (l_292 != (*g_75))), p_31)) <= l_292) & 1UL)))))
                    {
                        short ****l_301 = &g_298;
                        l_293 = (*p_33);
                        l_302 = ((*g_34) = (safe_mul_func_uint16_t_u_u((0x1BL | (l_296 == ((*l_301) = g_298))), (g_115.f5 = 0x9E6FL))));
                        (**g_120) = g_303;
                        (*g_75) = (safe_rshift_func_uint16_t_u_s(p_32, 11));
                    }
                    else
                    {
                        (*p_33) = (*p_33);
                        l_306 = ((*p_33) = (*p_33));
                        (*p_33) = l_307;
                        (*p_33) = (void*)0;
                    }
                    for (g_115.f6 = 22; (g_115.f6 != 6); g_115.f6 = safe_sub_func_uint16_t_u_u(g_115.f6, 2))
                    {
                        int ***l_310 = &g_93;
                        (*p_33) = (*p_33);
                        (*l_293) = l_288;
                        (*l_310) = (void*)0;
                        (**g_120) = (*g_116);
                    }
                    if (((*p_29) && (-7L)))
                    {
                        (*p_33) = &l_213;
                        if ((*p_29))
                            continue;
                        if ((*g_75))
                            break;
                    }
                    else
                    {
                        (*p_33) = func_40(l_311);
                    }
                }
                for (g_199.f5 = (-30); (g_199.f5 < 3); g_199.f5 = safe_add_func_int16_t_s_s(g_199.f5, 1))
                {
                    (*l_306) = (*l_306);
                    (*g_75) = (-3L);
                    return &g_49;
                }
                if (func_18(func_18(p_32, (0xFA8CL >= (((*l_316) = ((*l_315) = g_270)) || l_317))), g_199.f2))
                {
                    unsigned short l_320 = 0x8932L;
                    int l_325 = 0xE889AAD8L;
                    unsigned short *l_326 = (void*)0;
                    unsigned short *l_327 = &g_67;
                    (*l_307) = (safe_mul_func_int16_t_s_s(l_320, ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0xE364L | p_31), ((g_104 ^ (((*l_327) = ((p_30 & (-3L)) != (l_325 = (0x7B30FE5EL & ((*l_316) = 0x306D4112L))))) || p_31)) >= g_190.f7))), (*l_306))) && p_31)));
                    (*g_34) = l_266;
                }
                else
                {
                    (*p_33) = &l_317;
                    for (g_115.f4 = 24; (g_115.f4 < 1); g_115.f4 = safe_sub_func_int8_t_s_s(g_115.f4, 3))
                    {
                        (*l_293) = (safe_unary_minus_func_int8_t_s((*l_307)));
                        return p_29;
                    }
                }
            }
            else
            {
                (*p_33) = l_331;
            }
            (*l_331) = 0x08B2242CL;
            for (g_86.f5 = 0; (g_86.f5 == 3); ++g_86.f5)
            {
                short **l_334 = &g_300;
                (*l_296) = l_334;
                for (g_115.f3 = 0; (g_115.f3 != (-14)); g_115.f3 = safe_sub_func_int8_t_s_s(g_115.f3, 7))
                {
                    if ((**p_33))
                        break;
                }
                (*g_337) = ((*p_33) = (*p_33));
                if ((*p_29))
                    continue;
            }
            (*p_33) = func_36(&l_331, (*p_33));
        }
        return p_29;
    }
    for (g_303.f5 = (-10); (g_303.f5 < 39); g_303.f5 = safe_add_func_int32_t_s_s(g_303.f5, 5))
    {
        int **l_342 = &l_217;
        g_341 = g_340;
        (*g_337) = (*p_33);
        for (g_199.f5 = 29; (g_199.f5 < 19); g_199.f5 = safe_sub_func_int8_t_s_s(g_199.f5, 1))
        {
            int *l_345 = &g_199.f3;
            (*p_29) = func_18(p_31, g_340.f4);
            (**p_33) = (p_32 | g_115.f6);
            (*l_342) = l_345;
        }
    }
    return &g_49;
}







static unsigned * func_36(int ** p_37, int * p_38)
{
    short l_139 = 0xE6A3L;
    short *l_140 = &l_139;
    int l_168 = 9L;
    int **l_191 = &g_34;
    int ***l_202 = &g_171;
    unsigned *l_204 = (void*)0;
    (*p_38) = (l_139 || func_18(g_80, g_106));
    if ((l_140 == &l_139))
    {
        int l_143 = 0xC8896062L;
        int ***l_146 = &g_93;
        int ***l_147 = &g_93;
        int ***l_148 = (void*)0;
        int ***l_149 = &g_93;
        int ***l_150 = &g_93;
        int ***l_151 = &g_93;
        int **l_152 = &g_75;
        p_38 = ((*l_152) = func_40(((*l_151) = &p_38)));
        for (g_35 = 29; (g_35 >= (-21)); g_35 = safe_sub_func_int16_t_s_s(g_35, 1))
        {
            unsigned l_155 = 0xCD3D8531L;
            int **l_169 = (void*)0;
            int **l_192 = &g_75;
            int *l_196 = (void*)0;
            if ((l_139 || (***l_147)))
            {
                l_155 = (***g_125);
                return p_38;
            }
            else
            {
                unsigned char *l_166 = &g_86.f6;
                int *l_167 = &g_115.f3;
                if (((l_168 = ((*l_167) = (safe_mod_func_int16_t_s_s((g_115.f1 <= (safe_lshift_func_uint8_t_u_u((((((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_139, (((safe_rshift_func_int16_t_s_s((-2L), 9)) >= ((**l_152) = (p_38 != &g_80))) < func_18(g_115.f3, (!(g_115.f4 <= func_18(g_86.f4, ((*l_166) = g_8)))))))), 0x2A42L)) != l_155) < g_57) & 0xAB45L) == l_139), 0))), g_106)))) | l_155))
                {
                    (**l_149) = (*g_93);
                }
                else
                {
                    char l_177 = 0L;
                    unsigned short *l_180 = &g_86.f5;
                    int l_185 = (-4L);
                    unsigned char *l_186 = &g_115.f6;
                    unsigned short *l_187 = (void*)0;
                    unsigned short *l_188 = &g_65;
                    unsigned short *l_189 = &g_115.f5;
                    (*g_93) = (**g_125);
                    (*g_170) = l_169;
                    (***l_149) = (*p_38);
                    if (func_18(l_168, (((((safe_add_func_uint16_t_u_u((l_177 = (safe_rshift_func_int16_t_s_s(l_155, 11))), ((*l_180) = (safe_mul_func_uint8_t_u_u(0UL, (l_168 >= 0x298E093FL)))))) <= (safe_rshift_func_uint16_t_u_s(((*l_189) = ((*l_188) = ((l_139 >= (g_86.f2 > (((((safe_add_func_uint8_t_u_u(((*l_166) = l_185), ((*l_186) = (0xC8L | l_168)))) != (***l_149)) > 0x433DL) ^ 0x6D7AAF5FL) != (***l_147)))) == (*l_167)))), g_115.f1))) >= g_57) < 0xB22CD461L) != g_8)))
                    {
                        (*l_152) = func_40((*l_151));
                        if (l_185)
                            break;
                        (**g_120) = g_190;
                    }
                    else
                    {
                        (**g_125) = func_40(l_191);
                    }
                }
                (**l_150) = l_167;
                (*l_152) = func_40(l_192);
            }
            for (g_86.f4 = 0; (g_86.f4 < 40); g_86.f4 = safe_add_func_uint16_t_u_u(g_86.f4, 2))
            {
                unsigned short l_195 = 0x0164L;
                (*l_152) = ((**l_146) = func_40((*g_125)));
                if (l_195)
                    break;
                l_196 = (**g_125);
                (**l_150) = func_40(l_191);
            }
        }
        if ((*g_34))
        {
            p_38 = p_38;
        }
        else
        {
            for (g_67 = (-29); (g_67 != 6); g_67++)
            {
                int ***l_203 = &g_171;
                (**g_120) = g_199;
                (**g_93) = (g_86.f4 < (safe_rshift_func_int8_t_s_u((l_202 != l_203), 4)));
            }
            (**l_151) = (*g_93);
        }
        (***l_146) = ((void*)0 != &l_143);
    }
    else
    {
        return l_204;
    }
    return l_204;
}







static int * func_40(int ** p_41)
{
    int *l_137 = &g_86.f3;
    return l_137;
}







static int ** func_42(unsigned short p_43, unsigned * p_44, unsigned short p_45, unsigned p_46, int p_47)
{
    int *l_54 = (void*)0;
    char *l_55 = (void*)0;
    char *l_56 = &g_57;
    int *l_61 = &g_35;
    int **l_60 = &l_61;
    int *l_63 = &g_35;
    int **l_62 = &l_63;
    unsigned short *l_64 = &g_65;
    unsigned short *l_66 = &g_67;
    unsigned short *l_68 = &g_69;
    int *l_84 = &g_35;
    int **l_134 = &l_63;
    int **l_135 = &l_63;
    int **l_136 = &g_34;
    if (((safe_add_func_int8_t_s_s(((*l_56) = (l_54 == p_44)), g_49)) != ((*l_68) = ((*l_66) = (safe_mod_func_int8_t_s_s((((*l_60) = p_44) != ((*l_62) = p_44)), (((*l_64) = p_43) | p_43)))))))
    {
        unsigned l_70 = 0xA83A56CFL;
        int **l_117 = &l_54;
        int **l_118 = &l_54;
        if ((((((*p_44) = l_70) >= p_47) < (l_70 <= (*g_34))) | ((((safe_rshift_func_int16_t_s_s(((l_70 != ((*l_68) = func_18((!l_70), p_43))) | ((g_57 < 0xDDL) & g_57)), p_47)) | p_43) == (-3L)) >= p_45)))
        {
            int *l_76 = (void*)0;
            int *l_77 = (void*)0;
            int *l_78 = (void*)0;
            int *l_79 = &g_80;
            int l_83 = (-6L);
            (*g_34) = ((*l_63) = ((l_70 >= ((g_75 = (void*)0) == &g_35)) | (4294967289UL & func_18(((*l_79) = g_69), (func_18(p_46, func_18(g_35, ((p_46 <= ((safe_mod_func_int32_t_s_s((*g_34), 0xCBEBA436L)) < 65535UL)) ^ p_43))) != l_83)))));
            (*l_60) = l_84;
        }
        else
        {
            unsigned l_107 = 0xCD17FF15L;
            int *l_108 = (void*)0;
            if ((*g_34))
            {
                short l_85 = 1L;
                int *l_91 = (void*)0;
                (*l_62) = p_44;
                if (((*g_34) = l_85))
                {
                    int *l_90 = &g_35;
                    (*g_87) = g_86;
                    for (g_86.f2 = (-7); (g_86.f2 != 13); g_86.f2 = safe_add_func_uint8_t_u_u(g_86.f2, 1))
                    {
                        (*l_60) = l_90;
                    }
                }
                else
                {
                    if ((*g_75))
                    {
                        (*l_62) = l_91;
                    }
                    else
                    {
                        unsigned char l_92 = 1UL;
                        short *l_96 = &l_85;
                        char *l_103 = &g_104;
                        char *l_105 = &g_106;
                        (*l_60) = p_44;
                        (*l_60) = (void*)0;
                        (*g_75) = (((((*p_44) = l_92) && (&l_91 != (g_93 = (void*)0))) ^ (safe_lshift_func_int16_t_s_s(((*l_96) = 0xF1EAL), ((safe_rshift_func_int8_t_s_u((((*l_105) = ((*l_103) = (p_45 | (safe_sub_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((*l_56) = 0xF5L), (g_69 | (0x5CL || (((g_8 <= p_47) & 0x63L) | p_43))))) <= p_43) < g_86.f5), p_45))))) || 0xDDL), l_107)) < 1L)))) && g_86.f4);
                        (*g_34) = (*g_34);
                    }
                }
                (*l_62) = l_108;
            }
            else
            {
                (*l_60) = (*l_62);
                for (g_57 = 25; (g_57 < 0); g_57 = safe_sub_func_int16_t_s_s(g_57, 4))
                {
                    char ***l_111 = (void*)0;
                    char ***l_112 = (void*)0;
                    char **l_114 = &l_55;
                    char ***l_113 = &l_114;
                    (*g_93) = ((*l_60) = ((*l_62) = p_44));
                    (*l_113) = (void*)0;
                    (*l_84) = p_43;
                }
                (*g_116) = g_115;
                (*l_60) = (*g_93);
            }
            return &g_34;
        }
        (*g_119) = &g_116;
        for (g_49 = 0; (g_49 < 48); g_49 = safe_add_func_uint32_t_u_u(g_49, 1))
        {
            (**g_120) = (**g_120);
            return &g_75;
        }
    }
    else
    {
        int **l_123 = &l_54;
        int ***l_124 = (void*)0;
        (*g_125) = l_123;
        (*l_62) = (**g_125);
    }
    (*l_84) = (0xE7C9D89BL == 1UL);
    (*l_60) = (*l_60);
    (**l_60) = (((safe_mul_func_uint16_t_u_u(65535UL, (safe_lshift_func_int8_t_s_u(g_86.f4, ((safe_mul_func_uint16_t_u_u((*l_84), ((p_47 ^ g_115.f2) && p_46))) & ((safe_lshift_func_uint8_t_u_u((func_18((g_86.f4 > p_45), (*l_84)) < 1L), 4)) >= g_86.f0)))))) == g_86.f6) || g_69);
    return l_136;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    transparent_crc(g_86.f6, "g_86.f6", print_hash_value);
    transparent_crc(g_86.f7, "g_86.f7", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f3, "g_115.f3", print_hash_value);
    transparent_crc(g_115.f4, "g_115.f4", print_hash_value);
    transparent_crc(g_115.f5, "g_115.f5", print_hash_value);
    transparent_crc(g_115.f6, "g_115.f6", print_hash_value);
    transparent_crc(g_115.f7, "g_115.f7", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_190.f4, "g_190.f4", print_hash_value);
    transparent_crc(g_190.f5, "g_190.f5", print_hash_value);
    transparent_crc(g_190.f6, "g_190.f6", print_hash_value);
    transparent_crc(g_190.f7, "g_190.f7", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_199.f1, "g_199.f1", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    transparent_crc(g_199.f3, "g_199.f3", print_hash_value);
    transparent_crc(g_199.f4, "g_199.f4", print_hash_value);
    transparent_crc(g_199.f5, "g_199.f5", print_hash_value);
    transparent_crc(g_199.f6, "g_199.f6", print_hash_value);
    transparent_crc(g_199.f7, "g_199.f7", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_303.f0, "g_303.f0", print_hash_value);
    transparent_crc(g_303.f1, "g_303.f1", print_hash_value);
    transparent_crc(g_303.f2, "g_303.f2", print_hash_value);
    transparent_crc(g_303.f3, "g_303.f3", print_hash_value);
    transparent_crc(g_303.f4, "g_303.f4", print_hash_value);
    transparent_crc(g_303.f5, "g_303.f5", print_hash_value);
    transparent_crc(g_303.f6, "g_303.f6", print_hash_value);
    transparent_crc(g_303.f7, "g_303.f7", print_hash_value);
    transparent_crc(g_340.f0, "g_340.f0", print_hash_value);
    transparent_crc(g_340.f1, "g_340.f1", print_hash_value);
    transparent_crc(g_340.f2, "g_340.f2", print_hash_value);
    transparent_crc(g_340.f3, "g_340.f3", print_hash_value);
    transparent_crc(g_340.f4, "g_340.f4", print_hash_value);
    transparent_crc(g_340.f5, "g_340.f5", print_hash_value);
    transparent_crc(g_340.f6, "g_340.f6", print_hash_value);
    transparent_crc(g_340.f7, "g_340.f7", print_hash_value);
    transparent_crc(g_341.f0, "g_341.f0", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3, "g_341.f3", print_hash_value);
    transparent_crc(g_341.f4, "g_341.f4", print_hash_value);
    transparent_crc(g_341.f5, "g_341.f5", print_hash_value);
    transparent_crc(g_341.f6, "g_341.f6", print_hash_value);
    transparent_crc(g_341.f7, "g_341.f7", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    transparent_crc(g_347.f2, "g_347.f2", print_hash_value);
    transparent_crc(g_347.f3, "g_347.f3", print_hash_value);
    transparent_crc(g_347.f4, "g_347.f4", print_hash_value);
    transparent_crc(g_347.f5, "g_347.f5", print_hash_value);
    transparent_crc(g_347.f6, "g_347.f6", print_hash_value);
    transparent_crc(g_347.f7, "g_347.f7", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_370.f3, "g_370.f3", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_370.f5, "g_370.f5", print_hash_value);
    transparent_crc(g_370.f6, "g_370.f6", print_hash_value);
    transparent_crc(g_370.f7, "g_370.f7", print_hash_value);
    transparent_crc(g_392.f0, "g_392.f0", print_hash_value);
    transparent_crc(g_392.f1, "g_392.f1", print_hash_value);
    transparent_crc(g_392.f2, "g_392.f2", print_hash_value);
    transparent_crc(g_392.f3, "g_392.f3", print_hash_value);
    transparent_crc(g_392.f4, "g_392.f4", print_hash_value);
    transparent_crc(g_392.f5, "g_392.f5", print_hash_value);
    transparent_crc(g_392.f6, "g_392.f6", print_hash_value);
    transparent_crc(g_392.f7, "g_392.f7", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_411.f4, "g_411.f4", print_hash_value);
    transparent_crc(g_411.f5, "g_411.f5", print_hash_value);
    transparent_crc(g_411.f6, "g_411.f6", print_hash_value);
    transparent_crc(g_411.f7, "g_411.f7", print_hash_value);
    transparent_crc(g_447.f0, "g_447.f0", print_hash_value);
    transparent_crc(g_447.f1, "g_447.f1", print_hash_value);
    transparent_crc(g_447.f2, "g_447.f2", print_hash_value);
    transparent_crc(g_447.f3, "g_447.f3", print_hash_value);
    transparent_crc(g_447.f4, "g_447.f4", print_hash_value);
    transparent_crc(g_447.f5, "g_447.f5", print_hash_value);
    transparent_crc(g_447.f6, "g_447.f6", print_hash_value);
    transparent_crc(g_447.f7, "g_447.f7", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f1, "g_456.f1", print_hash_value);
    transparent_crc(g_456.f2, "g_456.f2", print_hash_value);
    transparent_crc(g_456.f3, "g_456.f3", print_hash_value);
    transparent_crc(g_456.f4, "g_456.f4", print_hash_value);
    transparent_crc(g_456.f5, "g_456.f5", print_hash_value);
    transparent_crc(g_456.f6, "g_456.f6", print_hash_value);
    transparent_crc(g_456.f7, "g_456.f7", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_555.f0, "g_555.f0", print_hash_value);
    transparent_crc(g_555.f1, "g_555.f1", print_hash_value);
    transparent_crc(g_555.f2, "g_555.f2", print_hash_value);
    transparent_crc(g_555.f3, "g_555.f3", print_hash_value);
    transparent_crc(g_555.f4, "g_555.f4", print_hash_value);
    transparent_crc(g_555.f5, "g_555.f5", print_hash_value);
    transparent_crc(g_555.f6, "g_555.f6", print_hash_value);
    transparent_crc(g_555.f7, "g_555.f7", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_614.f0, "g_614.f0", print_hash_value);
    transparent_crc(g_614.f1, "g_614.f1", print_hash_value);
    transparent_crc(g_614.f2, "g_614.f2", print_hash_value);
    transparent_crc(g_614.f3, "g_614.f3", print_hash_value);
    transparent_crc(g_614.f4, "g_614.f4", print_hash_value);
    transparent_crc(g_614.f5, "g_614.f5", print_hash_value);
    transparent_crc(g_614.f6, "g_614.f6", print_hash_value);
    transparent_crc(g_614.f7, "g_614.f7", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_631.f0, "g_631.f0", print_hash_value);
    transparent_crc(g_631.f1, "g_631.f1", print_hash_value);
    transparent_crc(g_631.f2, "g_631.f2", print_hash_value);
    transparent_crc(g_631.f3, "g_631.f3", print_hash_value);
    transparent_crc(g_631.f4, "g_631.f4", print_hash_value);
    transparent_crc(g_631.f5, "g_631.f5", print_hash_value);
    transparent_crc(g_631.f6, "g_631.f6", print_hash_value);
    transparent_crc(g_631.f7, "g_631.f7", print_hash_value);
    transparent_crc(g_632.f0, "g_632.f0", print_hash_value);
    transparent_crc(g_632.f1, "g_632.f1", print_hash_value);
    transparent_crc(g_632.f2, "g_632.f2", print_hash_value);
    transparent_crc(g_632.f3, "g_632.f3", print_hash_value);
    transparent_crc(g_632.f4, "g_632.f4", print_hash_value);
    transparent_crc(g_632.f5, "g_632.f5", print_hash_value);
    transparent_crc(g_632.f6, "g_632.f6", print_hash_value);
    transparent_crc(g_632.f7, "g_632.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
