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


union U0 {
   short f0;
   unsigned f1;
   unsigned f2 : 15;
   unsigned long long f3;
   char * f4;
};


static char g_7 = 0L;
static char *g_6 = &g_7;
static int g_30 = 8L;
static int g_59 = (-2L);
static int *g_58 = &g_59;
static unsigned char g_76[1][4] = {{255UL, 0UL, 255UL, 0UL}};
static int g_77 = 0x32420D6CL;
static char g_84 = 0x3DL;
static union U0 g_88 = {0x5B57L};
static unsigned g_110 = 0x586F400AL;
static long long g_137 = 1L;
static unsigned char *g_178 = (void*)0;
static unsigned char **g_177 = &g_178;
static union U0 g_184 = {0x0192L};
static unsigned char g_187 = 255UL;
static short *g_191 = (void*)0;
static unsigned char g_213 = 0xFAL;
static int g_218 = (-9L);
static unsigned g_220 = 18446744073709551613UL;
static unsigned g_266 = 0xD006B99CL;
static unsigned long long g_272 = 18446744073709551615UL;
static unsigned long long *g_271 = &g_272;
static union U0 *g_292 = &g_184;
static union U0 **g_291 = &g_292;
static union U0 **g_296 = (void*)0;
static unsigned short g_306 = 0x2C0CL;
static unsigned short *g_305[10] = {&g_306, &g_306, &g_306, &g_306, &g_306, &g_306, &g_306, &g_306, &g_306, &g_306};
static unsigned short **g_304[2][8] = {{&g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0]}, {&g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0], &g_305[0]}};
static unsigned short ***g_303 = &g_304[0][6];
static unsigned g_413 = 0xC1944FC2L;
static int *g_482 = &g_218;
static unsigned **g_526 = (void*)0;
static unsigned long long **g_572 = &g_271;
static unsigned long long ***g_571 = &g_572;
static long long g_624 = 1L;
static unsigned g_630 = 0xD3A707D9L;
static unsigned long long g_648 = 0x9889FBE6B9265EC8LL;
static union U0 ***g_665 = &g_291;
static unsigned char g_702 = 251UL;
static int g_709 = 0L;
static int *g_708[8] = {&g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709};
static int **g_707 = &g_708[7];
static int ***g_706 = &g_707;
static int ****g_705 = &g_706;
static long long g_728 = 9L;
static unsigned char g_746 = 1UL;
static unsigned g_760 = 6UL;
static short g_792[10][8] = {{0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}, {0xCEF7L, 1L, 0xCEF7L, 0x6C74L, 0x3B93L, 0xEEA0L, 0x6B17L, 0x6B17L}};
static int g_889 = 0xA68A2C2CL;
static int g_918 = 0xAB3539AFL;
static unsigned char g_942 = 0x7BL;
static long long ***g_1025 = (void*)0;
static short g_1113 = 0x8A6DL;
static union U0 g_1148[7] = {{0xA69FL}, {1L}, {0xA69FL}, {1L}, {0xA69FL}, {1L}, {0xA69FL}};
static int g_1186[2][5][6] = {{{(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}}, {{(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}, {(-1L), (-10L), 0L, 0xBAA10CC5L, (-10L), 0xCBE144B1L}}};
static unsigned short g_1215 = 65535UL;
static char g_1294[2] = {(-1L), (-1L)};
static int g_1309 = 6L;
static union U0 g_1538 = {0xA1EDL};
static short g_1557 = 0L;
static long long g_1661 = 0x74A0A58176475405LL;
static unsigned short g_1676 = 0x202FL;
static unsigned g_1689[3][7] = {{0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L}, {0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L}, {0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L, 0x044C6674L, 0xD5B458E8L}};
static unsigned short ****g_1761 = &g_303;
static unsigned short *****g_1760 = &g_1761;
static short **g_1763 = (void*)0;
static short ***g_1762 = &g_1763;



static unsigned func_1(void);
static int func_2(char * p_3, char * p_4, unsigned char p_5);
static unsigned long long func_14(char * p_15, int * p_16, unsigned p_17, unsigned char p_18, long long p_19);
static char * func_20(short p_21, int * p_22, char * p_23);
static short func_24(int * p_25, long long p_26, int * p_27, int p_28);
static long long func_31(unsigned char p_32, char p_33);
static unsigned long long func_36(int * p_37, int p_38);
static int * func_39(unsigned p_40, unsigned p_41, char p_42);
static long long func_46(union U0 p_47, unsigned long long p_48, unsigned long long p_49, int p_50);
static union U0 func_51(long long p_52, int * p_53, int * p_54, char p_55);
static unsigned func_1(void)
{
    char *l_8 = (void*)0;
    int l_1589 = 4L;
    unsigned *l_1600 = &g_110;
    unsigned **l_1599 = &l_1600;
    union U0 l_1683 = {-3L};
    long long l_1728 = 0x1A8DE01910577DD9LL;
    long long l_1750 = 0x30E61631EE6FD0E2LL;
    union U0 l_1758 = {1L};
    unsigned long long ***l_1778 = &g_572;
    int l_1866 = 0L;
    unsigned short l_1867 = 0x0C8BL;
    unsigned short *****l_1868[10][8] = {{&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}, {&g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, &g_1761, (void*)0}};
    unsigned l_1869[2];
    unsigned long long l_1902[9];
    int *l_1918[7] = {&g_77, &l_1866, &g_77, &l_1866, &g_77, &l_1866, &g_77};
    union U0 l_1923[1][9][6] = {{{{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}, {{0x208EL}, {0x208EL}, {0x1C8CL}, {6L}, {-1L}, {6L}}}};
    long long l_1928 = 0x3EE2ADD4E7AC425ELL;
    unsigned l_1929 = 0x2C45ED30L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1869[i] = 18446744073709551615UL;
    for (i = 0; i < 9; i++)
        l_1902[i] = 7UL;
    l_1589 = func_2(g_6, l_8, ((*g_6) , g_7));
    for (g_220 = 0; (g_220 >= 55); g_220 = safe_add_func_int16_t_s_s(g_220, 2))
    {
        unsigned *l_1597 = &g_110;
        unsigned **l_1596[7] = {&l_1597, &l_1597, (void*)0, &l_1597, &l_1597, (void*)0, &l_1597};
        int l_1613 = 3L;
        int l_1626 = 3L;
        int l_1662 = 0L;
        char *l_1665[7] = {(void*)0, (void*)0, &g_1294[1], (void*)0, (void*)0, &g_1294[1], (void*)0};
        unsigned long long l_1671 = 0x0B2914AF9A0590C5LL;
        char l_1673 = 0x80L;
        int *l_1701 = &l_1589;
        long long *l_1705 = &g_728;
        long long **l_1704 = &l_1705;
        unsigned l_1706 = 0x4CD891B3L;
        unsigned short ****l_1720 = &g_303;
        int **l_1731[2][6] = {{&g_708[7], &g_708[7], &g_708[7], &g_708[7], &g_708[7], &g_708[7]}, {&g_708[7], &g_708[7], &g_708[7], &g_708[7], &g_708[7], &g_708[7]}};
        int *l_1770 = &g_59;
        union U0 l_1786 = {1L};
        unsigned long long ***l_1818 = &g_572;
        unsigned l_1830 = 0xE1558FE9L;
        int i, j;
    }
    if ((l_1750 <= (*g_271)))
    {
        short l_1847 = 8L;
        int *l_1848 = (void*)0;
        int *l_1849 = &g_1309;
        (*l_1849) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_1758.f0, ((safe_mod_func_uint8_t_u_u(func_24(&g_1309, g_272, &l_1589, (~func_2(&g_1294[1], l_8, g_1294[1]))), 0x8AL)) || l_1847))), g_1676)), 2UL));




    }
    else
    {
        unsigned short l_1854 = 0x47D0L;
        (*g_482) |= ((1L > (safe_mod_func_int16_t_s_s((4294967295UL > 0xABF2C117L), (***g_303)))) || ((0xAB68D844L && (safe_mod_func_uint8_t_u_u(l_1750, l_1854))) , (l_1758.f0 > l_1854)));
    }




    for (g_648 = 2; (g_648 <= 9); g_648 += 1)
    {
        union U0 l_1857 = {-9L};
        int ***l_1862 = (void*)0;
        int **l_1864 = &g_58;
        int ***l_1863 = &l_1864;
        char *l_1865 = &g_1294[0];
        unsigned char **l_1870 = &g_178;
        unsigned char ***l_1871 = (void*)0;
        unsigned char **l_1873 = &g_178;
        unsigned char ***l_1872 = &l_1873;
        long long *l_1876[5][2][4] = {{{&l_1728, &g_624, &g_728, &l_1728}, {&l_1728, &g_624, &g_728, &l_1728}}, {{&l_1728, &g_624, &g_728, &l_1728}, {&l_1728, &g_624, &g_728, &l_1728}}, {{&l_1728, &g_624, &g_728, &l_1728}, {&l_1728, &g_624, &g_728, &l_1728}}, {{&l_1728, &g_624, &g_728, &l_1728}, {&l_1728, &g_624, &g_728, &l_1728}}, {{&l_1728, &g_624, &g_728, &l_1728}, {&l_1728, &g_624, &g_728, &l_1728}}};
        long long *l_1877 = &l_1750;
        long long **l_1878 = (void*)0;
        long long **l_1879 = (void*)0;
        long long *l_1880 = (void*)0;
        unsigned char *l_1881 = &g_76[0][1];
        int *l_1882 = &g_1186[1][4][0];
        unsigned l_1917 = 0x3D36CAFEL;
        unsigned l_1936[6][5][3] = {{{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}, {{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}, {{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}, {{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}, {{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}, {{0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}, {0x56D49B20L, 3UL, 18446744073709551615UL}}};
        unsigned long long l_1939 = 18446744073709551609UL;
        long long l_1940 = 9L;
        int i, j, k;
        g_482 = ((**l_1863) = &g_218);

        ;
        ;
        (*g_482) = (((l_1589 = (+(((g_177 = l_1870) != ((*l_1872) = l_1870)) >= (safe_sub_func_uint8_t_u_u(((*g_482) <= ((*l_1882) &= (((l_1876[3][1][1] = &g_137) == (l_1880 = (l_1877 = &g_137))) >= (((*l_1881) ^= l_1589) ^ 0UL)))), (~((((l_1866 = (safe_rshift_func_uint8_t_u_s((g_702 |= (g_213 &= 0x93L)), 2))) <= ((void*)0 != l_1600)) == l_1683.f0) > 0UL))))))) , (**g_572)) != 0xC8C51E210331F53ALL);

        ;
        ;
        for (g_220 = 0; (g_220 <= 1); g_220 += 1)
        {
            int *l_1887[3][10][1] = {{{&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}}, {{&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}}, {{&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}, {&g_218}}};
            union U0 l_1888 = {0x46CFL};
            long long l_1920 = 0xA263F2BDE9A57D89LL;
            union U0 l_1925 = {-9L};
            unsigned short l_1927 = 1UL;
            unsigned l_1941 = 0x8D31999FL;
            int i, j, k;
        }
        for (g_1309 = 0; (g_1309 <= 1); g_1309 += 1)
        {
            if ((*g_58))
                break;
        }
    }
    return g_272;
}







static int func_2(char * p_3, char * p_4, unsigned char p_5)
{
    char *l_43[7][5][1] = {{{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}, {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}}};
    int l_79 = 0x1B0FACDCL;
    unsigned l_1458[1];
    int l_1486 = 1L;
    int l_1487 = 0xD87A78D6L;
    short *l_1505 = &g_792[9][2];
    short *l_1506 = &g_1148[6].f0;
    short *l_1507 = &g_88.f0;
    unsigned short l_1529[9] = {5UL, 5UL, 0xF82DL, 5UL, 5UL, 0xF82DL, 5UL, 5UL, 0xF82DL};
    union U0 l_1535 = {1L};
    int *l_1568 = &l_79;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1458[i] = 8UL;
    for (g_7 = 0; (g_7 != 15); g_7 = safe_add_func_uint64_t_u_u(g_7, 3))
    {
        int *l_29[8][1][4] = {{{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}, {{&g_30, &g_30, &g_30, &g_30}}};
        unsigned short *l_1485[1];
        int **l_1488 = &l_29[5][0][3];
        union U0 l_1503 = {0x6D62L};
        unsigned char l_1527 = 0x89L;
        int l_1552[3][9][7] = {{{0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}}, {{0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}}, {{0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}, {0L, 0xC5D64416L, 0xEACCCBFDL, 3L, 0xDE4B57DEL, 0xBA6674CCL, 0L}}};
        short l_1566 = 0x61EBL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1485[i] = (void*)0;
        if (p_5)
            break;
    }
    (*l_1568) |= (~(*g_482));
    for (l_79 = 9; (l_79 >= 1); l_79 -= 1)
    {
        int *l_1572[7] = {(void*)0, &g_1186[1][3][5], (void*)0, &g_1186[1][3][5], (void*)0, &g_1186[1][3][5], (void*)0};
        int i;
        for (g_1215 = 0; (g_1215 <= 6); g_1215 += 1)
        {
            short l_1574 = (-1L);
            int *l_1584[7] = {&g_30, &g_30, &g_1186[0][0][5], &g_30, &g_30, &g_1186[0][0][5], &g_30};
            int l_1588 = 4L;
            int i;
            for (g_306 = 0; (g_306 <= 6); g_306 += 1)
            {
                unsigned char *l_1569 = &g_702;
                int **l_1573 = &l_1568;
                int i;
            }
            (*g_482) &= (*g_58);
            return l_1588;
        }
    }
    return p_5;
}







static unsigned long long func_14(char * p_15, int * p_16, unsigned p_17, unsigned char p_18, long long p_19)
{
    char l_1467 = 0L;
    union U0 l_1468 = {0xD917L};
    char *l_1469 = (void*)0;
    char *l_1470 = &g_84;
    short *l_1471 = &g_792[5][1];
    int **l_1472 = &g_58;
    int l_1475[1][6][3] = {{{1L, (-1L), 1L}, {1L, (-1L), 1L}, {1L, (-1L), 1L}, {1L, (-1L), 1L}, {1L, (-1L), 1L}, {1L, (-1L), 1L}}};
    unsigned char **l_1479 = &g_178;
    unsigned char ***l_1480 = &l_1479;
    unsigned char **l_1481 = &g_178;
    int l_1484 = 9L;
    int i, j, k;
    (*l_1472) = ((((****g_705) , (safe_lshift_func_uint8_t_u_u((+(p_18 = (8L || (((*l_1471) &= (safe_add_func_uint16_t_u_u((((*l_1470) = ((1L < ((safe_rshift_func_int16_t_s_s(l_1467, 6)) == ((((*g_271) ^ g_702) == l_1467) < (func_46(l_1468, p_19, p_19, p_19) == (*p_15))))) , (*g_6))) < l_1468.f0), p_17))) > p_18)))), g_1113))) & l_1467) , &g_1309);

    ;
    (**l_1472) = (*g_58);
    (*l_1472) = ((((*g_6) ^ func_46(func_51(((0L != (((l_1468 , (g_413 | (safe_mod_func_int32_t_s_s((l_1475[0][2][0] > (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u((((+((((*l_1480) = l_1479) != l_1481) | ((safe_rshift_func_int8_t_s_s((*p_15), 2)) | (l_1484 | (**l_1472))))) || 6UL) ^ p_18))) < (**l_1472)), 4))), (**l_1472))))) , (**l_1472)) > 0x4785L)) && (**l_1472)), p_16, &g_1186[1][3][5], (*p_15)), (*g_271), p_17, l_1468.f0)) , l_1468) , &g_218);

    ;
    return p_17;
}







static char * func_20(short p_21, int * p_22, char * p_23)
{
    int *l_1444 = &g_30;
    for (g_187 = 0; (g_187 < 60); g_187++)
    {
        int **l_1445 = (void*)0;
        int **l_1446 = &g_58;
        unsigned l_1447 = 4294967289UL;
        (*l_1446) = l_1444;

        ;
        (*l_1444) = func_46(func_51(l_1447, &g_1186[1][3][5], (*l_1446), ((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(((*l_1444) , p_21), 5)) , (safe_add_func_int8_t_s_s((*p_23), 1L))) , (((safe_rshift_func_int8_t_s_s((p_21 | (**l_1446)), (*p_23))) > 0x07L) & p_21)), (*l_1444))), 8)) <= p_21)), p_21, p_21, p_21);

        ;
        (*g_291) = (void*)0;

        ;
        if ((**l_1446))
            break;
    }


    return p_23;


}







static short func_24(int * p_25, long long p_26, int * p_27, int p_28)
{
    unsigned short l_1012[9] = {0x147AL, 0x9B80L, 0x147AL, 0x9B80L, 0x147AL, 0x9B80L, 0x147AL, 0x9B80L, 0x147AL};
    int l_1017 = (-1L);
    unsigned char *l_1020 = &g_213;
    union U0 l_1023 = {0x7E91L};
    short l_1068 = (-1L);
    unsigned l_1080 = 0UL;
    short **l_1088 = &g_191;
    unsigned short l_1089 = 1UL;
    unsigned long long *l_1109 = &g_272;
    int l_1120[8][9][3] = {{{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}, {{0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}, {0x0B371770L, 0L, (-3L)}}};
    unsigned *l_1151 = (void*)0;
    unsigned long long ***l_1184 = (void*)0;
    union U0 l_1216 = {-1L};
    int l_1289 = 0x2F6313D4L;
    union U0 l_1313 = {0xB95DL};
    long long l_1322 = 0x7305F8E6BA3216EELL;
    union U0 ***l_1349 = &g_291;
    int *l_1361 = (void*)0;
    short l_1393 = (-5L);
    unsigned l_1394 = 18446744073709551615UL;
    int i, j, k;
    if ((safe_rshift_func_uint8_t_u_s((((((*l_1020) = (((**g_572) > (l_1012[2] & l_1012[1])) != ((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((((((l_1012[6] , p_26) != l_1012[2]) , (l_1017 = 0L)) , (safe_add_func_uint64_t_u_u((((g_137 = ((func_31(func_31(((((*l_1020) = p_28) , (safe_sub_func_uint8_t_u_u(p_28, p_26))) , 0x9CL), l_1012[2]), l_1012[2]) , l_1017) , g_137)) >= l_1012[4]) , 18446744073709551609UL), p_26))) , 0x5BL) > p_28) || p_26), p_26)) , (-1L)), 0xD547L)) && l_1012[2]))) , l_1023) , (*g_271)) , 0UL), 6)))
    {
        long long ***l_1024 = (void*)0;
        union U0 l_1026 = {0xE31EL};
        short **l_1039 = &g_191;
        int l_1052 = 0x15D62E13L;
        if (((((((((l_1023 , (void*)0) == (g_1025 = l_1024)) >= ((((func_46(l_1026, (safe_sub_func_int8_t_s_s((l_1017 = ((((((((safe_sub_func_uint16_t_u_u(0xB195L, (((safe_sub_func_uint32_t_u_u(p_28, (*g_58))) , (l_1012[2] , l_1012[2])) >= 1UL))) ^ 0x9A79L) > p_26) , l_1017) || g_137) <= g_187) == 0xC0D6L) && p_28)), l_1012[2])), p_28, (**g_707)) , p_26) == (***g_571)) , g_413) <= l_1026.f0)) && l_1026.f0) , (void*)0) != (void*)0) , (-7L)) != 0xA720A50E670D8D85LL))
        {
            unsigned long long **l_1035 = &g_271;
            int l_1037 = 0x89B92CFFL;
            for (g_137 = (-8); (g_137 != 20); g_137 = safe_add_func_uint64_t_u_u(g_137, 1))
            {
                int **l_1036 = &g_58;
                int *l_1038 = &l_1017;
                (*g_571) = l_1035;
            }
            return l_1037;
        }
        else
        {
            short **l_1041 = &g_191;
            short ***l_1040 = &l_1041;
            int *l_1042 = &g_30;
            unsigned *l_1051 = &g_760;
            int *l_1053[3][10] = {{(void*)0, &g_30, &l_1017, &l_1017, (void*)0, (void*)0, (void*)0, &l_1017, &l_1017, &g_30}, {(void*)0, &g_30, &l_1017, &l_1017, (void*)0, (void*)0, (void*)0, &l_1017, &l_1017, &g_30}, {(void*)0, &g_30, &l_1017, &l_1017, (void*)0, (void*)0, (void*)0, &l_1017, &l_1017, &g_30}};
            int **l_1054 = &g_58;
            int i, j;
            (*l_1042) ^= (((*g_482) = (g_624 , (l_1039 != ((*l_1040) = &g_191)))) == l_1012[2]);
            l_1017 |= ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((0xEFA6L && (((safe_sub_func_int64_t_s_s(p_26, (((!((p_25 != l_1042) , (safe_add_func_int16_t_s_s(((p_26 != (((((p_28 > ((+p_26) != (l_1052 ^= (((*l_1051) |= p_28) == (~(*l_1042)))))) , 9UL) , l_1052) == l_1026.f0) < p_26)) >= (*l_1042)), 0UL)))) == (*l_1042)) == p_28))) ^ 1UL) || p_28)), 3)), 14)) , (*g_482));
            (*l_1054) = &g_30;

            ;
        }

        ;
    }
    else
    {
        long long *l_1057 = &g_728;
        long long **l_1056 = &l_1057;
        long long ***l_1055 = &l_1056;
        int l_1062 = 9L;
        int *l_1066 = (void*)0;
        unsigned short **l_1071 = (void*)0;
        int l_1074 = 0x4211BFE4L;
        int *l_1075 = &l_1062;
        (*g_58) = (*g_58);
        if ((l_1012[2] || ((void*)0 == l_1055)))
        {
            int **l_1061[1];
            int **l_1065[9] = {&g_58, &g_58, &g_58, &g_58, &g_58, &g_58, &g_58, &g_58, &g_58};
            int i;
            for (i = 0; i < 1; i++)
                l_1061[i] = &g_708[0];
            for (g_648 = 0; (g_648 < 17); g_648++)
            {
                int *l_1064 = &l_1062;
                if ((*g_482))
                {
                    int *l_1060 = &g_30;
                    (*g_58) = (0L < p_26);
                    (*l_1060) |= (*g_482);
                    (*g_706) = l_1061[0];
                }
                else
                {
                    int **l_1063 = &g_58;
                    (*g_482) = (l_1062 = (*g_58));
                    (*l_1063) = &g_30;

                    ;
                    (*l_1063) = l_1064;

                    ;
                }
            }

            ;
            l_1066 = &g_218;

            ;
        }
        else
        {
            unsigned long long l_1067 = 0x19FCF630DBAF6C31LL;
            (*g_482) ^= ((l_1067 != p_26) == l_1068);
        }

        ;
        ;
        (*l_1075) |= (((l_1071 == (void*)0) >= (((safe_sub_func_uint16_t_u_u(func_46((p_28 , l_1023), l_1074, (l_1074 , (***g_571)), p_28), 5UL)) , g_624) <= p_28)) | 0x6FL);
    }


    if ((safe_rshift_func_int8_t_s_u(((l_1012[8] >= func_46(l_1023, p_28, ((p_28 , p_26) < p_26), ((safe_mod_func_int8_t_s_s(p_26, (l_1017 = p_28))) < l_1080))) , p_26), 3)))
    {
        union U0 l_1081 = {0L};
        int l_1104 = (-3L);
        unsigned l_1138 = 0x7DF8BCF8L;
        if (func_46(l_1081, p_26, (**g_572), ((***g_706) = (((0L >= (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((p_28 > (&g_665 != (void*)0)), (((((p_26 , ((p_26 , &g_191) != l_1088)) && l_1012[2]) || (*g_482)) >= p_26) || p_28))), p_28))) ^ l_1012[2]) , l_1089))))
        {
            long long l_1106[3][10] = {{0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L), 0xAF276FC25C0E75C4LL, 0x82D2D719CE7769D1LL, 0xAF276FC25C0E75C4LL, (-4L), 0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L)}, {0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L), 0xAF276FC25C0E75C4LL, 0x82D2D719CE7769D1LL, 0xAF276FC25C0E75C4LL, (-4L), 0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L)}, {0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L), 0xAF276FC25C0E75C4LL, 0x82D2D719CE7769D1LL, 0xAF276FC25C0E75C4LL, (-4L), 0xBC8D8A5AA49BC88DLL, 0xBC8D8A5AA49BC88DLL, (-4L)}};
            int *l_1112 = &g_59;
            unsigned long long ****l_1147 = &g_571;
            int **l_1154 = &g_58;
            int i, j;
            for (l_1080 = (-30); (l_1080 != 46); ++l_1080)
            {
                unsigned short l_1107 = 0xC6D2L;
                union U0 **l_1130 = &g_292;
                int ****l_1153[6][8][5] = {{{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}, {{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}, {{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}, {{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}, {{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}, {{(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}, {(void*)0, &g_706, (void*)0, &g_706, (void*)0}}};
                int i, j, k;
                for (g_77 = 0; (g_77 <= 22); g_77 = safe_add_func_uint32_t_u_u(g_77, 9))
                {
                    unsigned short l_1105 = 0xD6BAL;
                    int **l_1108 = &g_58;
                    for (p_26 = 19; (p_26 < (-1)); p_26 = safe_sub_func_uint16_t_u_u(p_26, 9))
                    {
                        int **l_1096[9] = {(void*)0, (void*)0, &g_58, (void*)0, (void*)0, &g_58, (void*)0, (void*)0, &g_58};
                        unsigned long long *l_1101 = &l_1081.f3;
                        unsigned long long *l_1102 = &l_1081.f3;
                        unsigned long long *l_1103 = &g_88.f3;
                        int i;
                        p_27 = &p_28;

                        ;
                        l_1107 = (p_28 != ((safe_add_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u(((l_1104 |= (*g_271)) , (func_46(l_1023, l_1081.f0, (((l_1017 |= p_28) != (l_1081.f0 != l_1012[3])) < (**g_572)), l_1012[2]) == (*g_482))), l_1105)) >= l_1106[2][8]) || p_28) & 0xBFE4L), 0xFF3042D6L)) <= l_1106[0][1]));
                    }
                    (*l_1108) = &g_30;

                    ;
                }
                if (((((p_25 != (*g_707)) <= ((void*)0 != l_1109)) , l_1104) <= ((*g_271) = (1L || func_31((p_28 & (*l_1112)), l_1107)))))
                {
                    unsigned short l_1133 = 0xEEC3L;
                    int l_1134 = 1L;
                    unsigned *l_1139[9][9][2];
                    int **l_1140 = &g_482;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1139[i][j][k] = &g_110;
                        }
                    }
                    if ((safe_sub_func_int8_t_s_s((l_1023.f0 >= (g_84 = p_28)), (*g_6))))
                    {
                        unsigned l_1129[9][6][4] = {{{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}, {{0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}, {0x64719BFFL, 1UL, 0UL, 0x6D22C8E6L}}};
                        union U0 **l_1131 = &g_292;
                        int *l_1132[6][7][1] = {{{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}, {{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}, {{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}, {{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}, {{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}, {{&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}, {&l_1104}}};
                        int i, j, k;
                        l_1133 = (+((((safe_rshift_func_int16_t_s_s((((l_1012[5] && ((safe_lshift_func_uint16_t_u_u(((((*l_1112) = l_1120[7][1][0]) | (safe_rshift_func_int16_t_s_u((l_1080 | (safe_sub_func_uint32_t_u_u((l_1107 == (((safe_rshift_func_uint16_t_u_s(p_26, ((safe_sub_func_int8_t_s_s((*g_6), (*g_6))) >= (l_1129[7][1][3] < ((((l_1130 != l_1131) || 0x640B3196L) == l_1068) | 0xF3L))))) <= l_1023.f0) | p_28)), p_26))), 14))) >= l_1120[5][1][0]), l_1129[5][4][1])) != p_28)) == 0xA44FL) < p_26), p_26)) , p_26) ^ g_760) || p_28));
                        (*g_482) = (l_1134 = (*g_482));
                        if (l_1104)
                            break;
                        return g_220;


                    }
                    else
                    {
                        char *l_1137[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1137[i] = &g_84;
                        (*l_1112) = (p_26 && p_28);
                        (*g_482) = ((l_1017 |= (p_26 == (safe_lshift_func_int16_t_s_s(p_28, (*l_1112))))) || (+l_1081.f0));
                        (*l_1112) = ((l_1138 , (void*)0) == l_1139[4][8][1]);
                    }
                    (*l_1140) = &p_28;

                    ;
                }
                else
                {
                    unsigned long long ****l_1146 = &g_571;
                    int l_1152 = 0xE2575322L;
                    (*l_1112) = (*l_1112);
                    for (g_187 = 0; (g_187 <= 14); g_187 = safe_add_func_int64_t_s_s(g_187, 1))
                    {
                        (*l_1112) = 0x06E24D4FL;
                        (*g_482) ^= 0x6E66A99EL;
                        (*l_1112) = (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u(((l_1146 == l_1147) & (g_1148[6] , 18446744073709551610UL)))) < (&g_706 != ((((safe_add_func_int16_t_s_s(((((((l_1151 != p_25) , (-7L)) < ((*g_271) , (***g_571))) , l_1152) , l_1081.f0) != 0L), 0L)) && (*g_6)) && 65535UL) , l_1153[4][7][1]))), 7));
                    }
                }
            }

            ;

            (*l_1154) = l_1112;

            ;
        }
        else
        {
            return p_26;
        }

        ;
        ;

        (*g_58) = (*g_482);
    }
    else
    {
        unsigned **l_1156 = &l_1151;
        unsigned ***l_1155 = &l_1156;
        int l_1157 = 0x8A420D90L;
        int **l_1178 = &g_708[1];
        union U0 *l_1227 = &l_1023;
        int ****l_1252 = (void*)0;
        unsigned *l_1280 = &g_220;
        unsigned **l_1279 = &l_1280;
        char l_1317 = (-1L);
        unsigned char ***l_1323 = &g_177;
        unsigned l_1328 = 8UL;
        unsigned long long ****l_1344 = &g_571;
        union U0 ****l_1352 = &g_665;
        int *l_1355[10] = {&l_1289, &l_1289, &g_59, &l_1289, &l_1289, &g_59, &l_1289, &l_1289, &g_59, &l_1289};
        int **l_1356[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1356[i][j] = &l_1355[8];
        }
        if ((0x9B54E89044581CF0LL >= ((p_28 , g_526) != ((*l_1155) = (void*)0))))
        {
            int l_1160 = 0x253A6CC0L;
            char *l_1172[2];
            int **l_1179 = &g_708[7];
            int ****l_1191 = &g_706;
            unsigned ***l_1192 = &g_526;
            int *l_1206[7][3][3] = {{{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}, {{&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}, {&g_30, &l_1120[7][1][0], (void*)0}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1172[i] = (void*)0;
            if (l_1157)
            {
                unsigned l_1163 = 4294967292UL;
                int l_1164 = (-1L);
                union U0 *l_1171 = (void*)0;
                char *l_1173 = &g_7;
                int ****l_1190 = (void*)0;
                (*g_482) = ((safe_rshift_func_int8_t_s_s(0x23L, 3)) , (-4L));
                (*g_482) = 5L;
                if ((l_1160 < ((p_26 , (-1L)) != ((g_413 = (l_1163 &= (l_1120[5][0][0] = (safe_mod_func_int8_t_s_s(p_28, p_28))))) < l_1164))))
                {
                    short l_1174 = 1L;
                    union U0 l_1177[5][4] = {{{9L}, {9L}, {0x76DAL}, {8L}}, {{9L}, {9L}, {0x76DAL}, {8L}}, {{9L}, {9L}, {0x76DAL}, {8L}}, {{9L}, {9L}, {0x76DAL}, {8L}}, {{9L}, {9L}, {0x76DAL}, {8L}}};
                    unsigned long long ***l_1182 = &g_572;
                    int i, j;
                    for (g_630 = (-19); (g_630 > 7); g_630++)
                    {
                        int *l_1167 = (void*)0;
                        int *l_1168 = &l_1120[7][1][0];
                        (*l_1168) &= (247UL ^ func_31(p_26, p_28));
                    }
                    if ((p_26 != (safe_rshift_func_uint16_t_u_s(p_28, 12))))
                    {
                        unsigned short l_1180 = 0x3B0AL;
                        (**g_665) = l_1171;

                        ;
                        l_1157 = (l_1172[0] == l_1173);
                        l_1180 &= (p_28 <= (((l_1174 >= ((**g_572) = (safe_rshift_func_uint8_t_u_s((func_46(l_1177[0][1], (0x7AB6ADE5L && ((p_28 >= 0xDAL) ^ (((*g_706) = l_1178) == l_1179))), p_28, l_1163) >= p_26), l_1174)))) >= p_26) == l_1163));
                    }
                    else
                    {
                        int **l_1181 = &g_58;
                        unsigned long long ****l_1183 = &g_571;
                        unsigned long long ****l_1185 = &l_1184;
                        (*l_1181) = &p_28;

                        ;
                        (*g_58) &= (((*l_1183) = l_1182) != ((*l_1185) = l_1184));
                        return g_1186[1][3][5];


                    }

                    ;
                    for (g_77 = (-5); (g_77 != (-18)); g_77 = safe_sub_func_uint64_t_u_u(g_77, 6))
                    {
                        int **l_1189 = &g_58;
                        (*l_1189) = &g_1186[1][3][5];

                        ;
                    }


                }
                else
                {
                    long long *l_1193 = &g_624;
                    (*g_482) = ((l_1190 != (l_1023 , l_1191)) <= ((***g_303) |= (((*l_1193) &= (l_1192 != &l_1156)) , (p_28 == 0L))));
                    if (((*g_482) |= l_1157))
                    {
                        unsigned long long **l_1194 = &g_271;
                        l_1194 = l_1194;
                    }
                    else
                    {
                        unsigned char l_1197 = 0xBAL;
                        (*g_482) = ((safe_lshift_func_int16_t_s_s(l_1197, l_1197)) , (*g_482));
                    }
                    (*g_482) &= (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_28, ((void*)0 == &g_665))), 15));
                    for (p_28 = (-4); (p_28 < (-11)); p_28 = safe_sub_func_int16_t_s_s(p_28, 8))
                    {
                        int **l_1204 = (void*)0;
                        int **l_1205[6] = {&g_58, &g_482, &g_58, &g_482, &g_58, &g_482};
                        int i;
                        l_1206[5][2][1] = &p_28;
                        if (p_28)
                            continue;
                    }


                }



            }
            else
            {
                unsigned char l_1207 = 0UL;
                return l_1207;
            }



        }
        else
        {
            int *l_1208 = &l_1120[7][1][0];
            int **l_1209 = &g_482;
            union U0 l_1236 = {0xBE58L};
            int *l_1318 = &g_1309;
            unsigned short l_1319 = 0xC373L;
            long long *l_1330 = (void*)0;
            long long **l_1329[1];
            unsigned char *l_1333[5][9] = {{&g_702, &g_702, &g_187, &g_702, &g_702, &g_187, &g_702, &g_702, &g_187}, {&g_702, &g_702, &g_187, &g_702, &g_702, &g_187, &g_702, &g_702, &g_187}, {&g_702, &g_702, &g_187, &g_702, &g_702, &g_187, &g_702, &g_702, &g_187}, {&g_702, &g_702, &g_187, &g_702, &g_702, &g_187, &g_702, &g_702, &g_187}, {&g_702, &g_702, &g_187, &g_702, &g_702, &g_187, &g_702, &g_702, &g_187}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1329[i] = &l_1330;
            (*l_1208) ^= ((*g_482) = (*g_482));
            (*l_1209) = &l_1120[2][0][0];

            ;
            if (l_1120[7][1][0])
            {
                long long *l_1214[7];
                int *l_1225 = &g_1186[1][3][5];
                union U0 *l_1226[3];
                int i;
                for (i = 0; i < 7; i++)
                    l_1214[i] = &g_624;
                for (i = 0; i < 3; i++)
                    l_1226[i] = &g_1148[6];
                if ((((((safe_add_func_uint8_t_u_u((p_26 | ((safe_add_func_int32_t_s_s(8L, ((((g_728 = g_187) > p_26) & l_1157) >= p_28))) , ((0x3AL || ((((p_26 , (void*)0) == (void*)0) ^ (***g_571)) >= l_1120[3][4][0])) || p_26))), (*g_6))) >= g_1215) , l_1157) ^ 1L) == (**l_1209)))
                {
                    short l_1223 = 0xF9CBL;
                    unsigned **l_1224 = (void*)0;
                    if (p_26)
                    {
                        return p_28;


                    }
                    else
                    {
                        unsigned short l_1217 = 1UL;
                        int *l_1222 = &g_77;
                        (*l_1222) ^= ((*l_1208) = (func_46(l_1216, (l_1217 <= func_36(l_1225, (**g_707))), p_28, (***g_706)) , (*g_58)));

                        ;
                        ;
                        l_1226[1] = l_1226[1];
                        return g_187;
                    }
                }
                else
                {
                    for (l_1157 = 0; (l_1157 <= 0); l_1157 += 1)
                    {
                        (**g_665) = l_1227;

                        ;
                        (*l_1208) |= (safe_rshift_func_int16_t_s_u(g_1148[6].f0, (***g_303)));
                        (*l_1225) = ((*g_482) = (l_1023.f0 || p_28));
                    }

                    ;
                    for (g_30 = 0; g_30 < 7; g_30 += 1)
                    {
                        l_1214[g_30] = &g_137;
                    }

                    (*l_1208) |= func_36(&g_1186[1][3][5], ((***g_706) &= l_1012[0]));

                    ;
                    ;
                }

                ;
                ;
                ;

            }
            else
            {
                short l_1239 = 8L;
                int *l_1243 = &g_889;
                int l_1292 = 0x791F9C0FL;
                union U0 **l_1314 = &g_292;
                for (g_1215 = 0; (g_1215 <= 35); ++g_1215)
                {
                    union U0 l_1242 = {-7L};
                    unsigned short l_1247 = 1UL;
                    (*l_1209) = (*l_1209);
                    for (g_1113 = 0; (g_1113 >= 5); ++g_1113)
                    {
                        unsigned short l_1246 = 65535UL;
                        (*l_1209) = &l_1157;

                        ;
                    }
                }

                ;
                (*l_1209) = (l_1239 , &g_77);

                ;
                for (l_1089 = 11; (l_1089 < 18); l_1089 = safe_add_func_int8_t_s_s(l_1089, 9))
                {
                    unsigned *l_1257 = (void*)0;
                    unsigned *l_1258[5][9][2] = {{{&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}}, {{&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}}, {{&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}}, {{&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}}, {{&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}, {&g_413, &g_413}}};
                    union U0 l_1263 = {0xEA0EL};
                    unsigned long long *l_1266 = &g_648;
                    long long *l_1267[7] = {(void*)0, &g_137, (void*)0, &g_137, (void*)0, &g_137, (void*)0};
                    int l_1268 = (-1L);
                    int *l_1277 = (void*)0;
                    int *l_1278[7] = {&g_30, &g_30, (void*)0, &g_30, &g_30, (void*)0, &g_30};
                    int i, j, k;
                    l_1268 ^= (p_28 , (((g_760 &= g_630) || ((safe_add_func_int8_t_s_s(0xD0L, (safe_mod_func_int64_t_s_s((g_728 = (func_46(l_1263, ((*l_1266) ^= (l_1263.f0 >= ((safe_sub_func_uint8_t_u_u((+func_31(l_1263.f0, (*g_6))), ((l_1157 &= ((*l_1208) = p_28)) >= p_26))) >= p_26))), (**g_572), l_1012[2]) | l_1239)), l_1263.f0)))) != 0UL)) <= 0x4BE375049B55D073LL));
                    if (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((~(safe_lshift_func_uint8_t_u_u(8UL, 5))), (+((func_31(l_1216.f0, func_31(p_26, (p_28 <= l_1239))) || l_1120[7][1][0]) >= ((g_1186[1][0][1] ^= (safe_add_func_uint16_t_u_u((l_1239 >= p_26), p_26))) || (*l_1208)))))), 5)) != (*g_6)))
                    {
                        int l_1293 = 0x2B586BFDL;
                        (*l_1208) = l_1239;
                        l_1279 = l_1279;
                        (*l_1208) ^= ((*g_6) ^ 0xA1L);
                        (*l_1208) = (safe_mod_func_uint64_t_u_u(func_31(((*l_1020) = p_28), (((void*)0 == l_1227) , ((func_31((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_1292 |= (((*l_1208) = (safe_add_func_uint16_t_u_u(func_36(&g_77, l_1289), p_26))) || (safe_sub_func_uint64_t_u_u(((*l_1266) = ((*l_1109) = (*g_271))), 18446744073709551612UL)))), l_1293)), g_76[0][3])), p_28) >= p_26) < g_306))), 0x0093494FC0B3A9F6LL));

                        ;
                    }
                    else
                    {
                        (*g_482) = (*g_482);
                        if (g_1294[0])
                            break;
                    }
                    return l_1012[3];
                }
                for (g_760 = 0; (g_760 != 26); g_760 = safe_add_func_int16_t_s_s(g_760, 4))
                {
                    unsigned l_1305 = 0UL;
                    union U0 l_1310 = {0x3323L};
                    for (g_266 = (-26); (g_266 <= 5); g_266 = safe_add_func_uint64_t_u_u(g_266, 2))
                    {
                        long long l_1306 = 1L;
                        (*l_1208) = (((*l_1020) = (0x294503470805CD9CLL != (((l_1120[4][8][0] , &g_191) == ((p_28 == (safe_rshift_func_int8_t_s_s(0x03L, 4))) , (void*)0)) ^ p_28))) > (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((((((*l_1208) || 0x0D9BL) >= l_1216.f0) , &g_303) == &g_303) | l_1306), g_88.f0)), 6)));
                    }
                    (*l_1318) = (l_1305 || (((safe_mod_func_uint8_t_u_u((func_36(l_1318, l_1319) < (*l_1208)), l_1310.f0)) , l_1157) | l_1305));
                }

                ;
            }

            ;
            ;
            if (((safe_rshift_func_int8_t_s_s(l_1322, (((void*)0 == l_1323) != 0x8B2C943AL))) & ((g_702 = p_26) != ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((***g_303) = (l_1328 <= g_889)), func_36(&l_1157, (p_28 , 0x3B632123L)))) && 0xE5L), l_1328)) , p_28))))
            {
                long long **l_1331 = &l_1330;
                char l_1332 = 0x35L;
                int l_1345[9][8][2] = {{{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}, {{(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}, {(-2L), 0xD1A8A00BL}}};
                int i, j, k;
                for (g_1113 = 1; (g_1113 >= 0); g_1113 -= 1)
                {
                    (*g_58) |= (l_1329[0] == l_1331);
                    if ((((***g_303) &= l_1332) || ((void*)0 == l_1333[4][2])))
                    {
                        int i;
                        (*l_1208) |= (safe_lshift_func_int8_t_s_u(0x94L, 7));
                        (*l_1208) ^= ((func_31(l_1289, (g_1294[g_1113] = p_26)) & 1L) != p_28);
                        (*l_1209) = (*l_1209);
                        (*l_1318) = (p_28 , func_31(((*l_1020) &= l_1317), l_1332));
                    }
                    else
                    {
                        (**l_1209) &= (*g_58);
                        (*l_1208) = ((**l_1209) = ((g_728 = (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((g_702 < ((safe_sub_func_int8_t_s_s(((void*)0 != &g_220), p_26)) , (-2L))) , (*g_303)) != ((((safe_mod_func_int8_t_s_s(0x19L, g_630)) , (!((l_1344 != (void*)0) <= p_26))) || (*g_482)) , (void*)0)), l_1080)), 0x7CF1DAF4L))) <= l_1345[5][3][0]));
                    }
                    for (g_918 = 0; (g_918 <= 0); g_918 += 1)
                    {
                        union U0 l_1346[10] = {{1L}, {-6L}, {0xEDE1L}, {0xEDE1L}, {-6L}, {1L}, {-6L}, {0xEDE1L}, {0xEDE1L}, {-6L}};
                        int i, j;
                        (*l_1318) = (l_1346[6] , (safe_sub_func_uint8_t_u_u(0UL, (l_1289 = 0x50L))));
                        if (g_76[g_918][(g_918 + 1)])
                            break;
                    }
                }

                ;
                (*l_1318) = (*g_482);
                (**l_1209) &= (*l_1318);
            }
            else
            {
                (*l_1318) = func_36(&g_77, (((**g_572) = l_1317) , (**l_1209)));

                ;
            }

            ;
            ;
        }


        ;
        ;
        ;
        g_58 = (l_1012[2] , &l_1157);

        ;
        for (l_1068 = 0; (l_1068 >= 0); ++l_1068)
        {
            char l_1366 = (-1L);
            int *l_1369[7][5][4] = {{{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}, {{&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}, {&l_1120[7][1][0], &l_1157, &l_1289, &g_77}}};
            int l_1375 = 0L;
            unsigned l_1376 = 18446744073709551615UL;
            int i, j, k;
            for (l_1322 = 0; (l_1322 > (-28)); l_1322--)
            {
                int **l_1373 = &g_708[7];
                int l_1374[5] = {1L, 0x7615B868L, 1L, 0x7615B868L, 1L};
                int i;
                g_482 = (l_1361 = &g_59);

                ;
                ;
                for (g_942 = (-16); (g_942 >= 44); g_942 = safe_add_func_int32_t_s_s(g_942, 4))
                {
                    for (g_889 = 1; (g_889 <= 7); g_889 += 1)
                    {
                        long long *l_1370[3][10] = {{&g_728, (void*)0, &g_624, (void*)0, &g_728, &g_137, &g_728, (void*)0, &g_624, (void*)0}, {&g_728, (void*)0, &g_624, (void*)0, &g_728, &g_137, &g_728, (void*)0, &g_624, (void*)0}, {&g_728, (void*)0, &g_624, (void*)0, &g_728, &g_137, &g_728, (void*)0, &g_624, (void*)0}};
                        int i, j;
                        if ((*g_58))
                            break;
                        if ((*g_482))
                            break;
                        (*l_1361) = (((safe_rshift_func_uint8_t_u_u(p_26, 5)) && (l_1366 <= ((p_28 == (!(((safe_sub_func_int64_t_s_s((g_624 = ((func_36((l_1369[4][4][0] = &l_1120[7][1][0]), p_26) || 4294967295UL) >= g_76[0][3])), (safe_add_func_int64_t_s_s((l_1374[3] |= ((void*)0 != l_1373)), g_137)))) == p_26) , (*g_6)))) >= p_28))) ^ l_1366);
                        (*l_1361) = (l_1375 & p_26);
                    }
                }

                ;
            }
            (*g_482) = l_1376;
        }

        ;
        ;
        ;
    }


    ;


    ;
    for (l_1017 = 3; (l_1017 <= 9); l_1017 += 1)
    {
        int l_1383 = (-1L);
        union U0 ***l_1407 = &g_291;
        union U0 l_1432 = {0xF8FEL};
        long long l_1433[7] = {9L, 9L, 0x5CA3B5830A6BD07CLL, 9L, 9L, 0x5CA3B5830A6BD07CLL, 9L};
        int i;
        (*g_303) = &g_305[l_1017];
        for (g_110 = 0; (g_110 <= 2); g_110 += 1)
        {
            short l_1377[6];
            short l_1378 = (-1L);
            long long *l_1386 = &l_1322;
            union U0 ***l_1389 = &g_296;
            unsigned *l_1390 = (void*)0;
            unsigned *l_1391 = (void*)0;
            unsigned *l_1392 = &g_630;
            short *l_1395 = &g_1113;
            int l_1416[1][5][4] = {{{4L, (-1L), 4L, (-1L)}, {4L, (-1L), 4L, (-1L)}, {4L, (-1L), 4L, (-1L)}, {4L, (-1L), 4L, (-1L)}, {4L, (-1L), 4L, (-1L)}}};
            unsigned l_1419 = 18446744073709551612UL;
            short ***l_1438 = &l_1088;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1377[i] = 1L;
            if ((((l_1377[0] && ((*l_1395) = (p_28 >= l_1394))) && 0L) ^ l_1377[3]))
            {
                short l_1398 = 0xEB17L;
                int *l_1399 = &g_77;
                (*l_1399) = (safe_sub_func_int8_t_s_s((((***g_571) , (-1L)) & (*g_6)), (p_26 , (((l_1383 , ((!(*g_6)) != l_1398)) == l_1377[4]) < l_1398))));
                (*l_1399) = (safe_sub_func_uint64_t_u_u(((***g_571) ^= 0UL), (safe_lshift_func_int8_t_s_u(p_28, l_1383))));
                (*l_1399) &= (-10L);
            }
            else
            {
                int l_1404 = 0xC599B91BL;
                short l_1409 = 0x5DB6L;
                long long l_1414 = 0x848DBAB9E747FC41LL;
                for (g_84 = 1; (g_84 <= 6); g_84 += 1)
                {
                    union U0 ****l_1408 = &l_1389;
                    short *l_1410[2];
                    int *l_1411[7][7][5] = {{{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}, {{&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}, {&g_218, &l_1120[7][0][1], &l_1120[(g_110 + 1)][g_84][g_110], &l_1289, (void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1410[i] = &l_1313.f0;
                    if (l_1120[(g_110 + 1)][g_84][g_110])
                        break;
                    if (l_1404)
                        continue;
                    if ((l_1120[7][1][0] = (l_1120[(g_110 + 1)][g_84][g_110] , (safe_mod_func_int32_t_s_s((((void*)0 != &g_571) , (g_630 , l_1120[(g_110 + 1)][g_84][g_110])), (((*l_1395) = (g_88.f0 ^= ((func_46(g_1148[g_110], (((*l_1408) = l_1407) != (void*)0), (((*l_1395) = (l_1409 & (*g_6))) == p_28), p_28) != 0x3E044E47L) , 0xE938L))) , 0x9473BA04L))))))
                    {
                        int **l_1412 = &g_58;
                        unsigned l_1413 = 18446744073709551615UL;
                        (*l_1412) = (void*)0;

                        ;
                        (*l_1412) = &p_28;

                        ;
                        (*g_58) = (l_1413 , l_1414);
                        (*g_58) = l_1383;
                    }
                    else
                    {
                        union U0 **l_1415[8];
                        int **l_1417 = (void*)0;
                        int **l_1418 = &g_482;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1415[i] = &g_292;
                        l_1416[0][3][2] |= ((((l_1377[0] >= l_1383) | 9L) , l_1415[5]) != (void*)0);
                        (**g_665) = (**l_1389);
                        (*l_1418) = &l_1120[(g_110 + 1)][g_84][g_110];

                        ;
                        l_1419 = ((**l_1418) |= l_1383);
                    }

                    ;
                }


                ;
            }


            ;
            if (l_1383)
            {
                union U0 l_1430 = {-5L};
                union U0 *l_1431[6][8] = {{&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}, {&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}, {&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}, {&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}, {&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}, {&g_184, &g_184, &l_1430, &g_88, &g_184, &g_88, &g_184, &g_88}};
                int *l_1434 = &l_1383;
                int *l_1435 = &g_77;
                int i, j;
                p_28 = (safe_lshift_func_int16_t_s_u((l_1377[3] , ((((**g_572) = (safe_rshift_func_int16_t_s_s(p_28, func_36(&g_1309, (safe_lshift_func_int8_t_s_s(l_1419, 6)))))) & (((safe_unary_minus_func_int64_t_s(p_28)) || 0x6B8142A392B9CEABLL) & l_1216.f0)) | ((p_26 >= l_1383) , g_413))), p_26));

                ;
                ;
                (*l_1435) = ((*l_1434) = ((*g_58) = (((safe_rshift_func_uint8_t_u_s(p_28, ((**g_706) == ((safe_unary_minus_func_int16_t_s(((*l_1395) = (p_26 & 0UL)))) , l_1390)))) == ((p_28 != (((*g_482) = (*g_482)) , ((func_46((l_1432 = l_1430), ((***g_571) = ((l_1416[0][2][3] = ((l_1216.f0 != 0xB509L) ^ l_1383)) > p_26)), l_1433[5], (**g_707)) < 0x3D0222D6FDB5916ELL) < p_26))) < p_28)) >= l_1012[0])));
            }
            else
            {
                unsigned long long l_1436 = 18446744073709551613UL;
                short ***l_1437 = &l_1088;
                int **l_1439 = (void*)0;
                int **l_1440 = &g_58;
                (*l_1440) = &l_1120[3][8][1];

                ;
            }

            ;
            if ((*g_58))
                break;
            for (g_77 = 0; (g_77 <= 2); g_77 += 1)
            {
                unsigned short ****l_1441 = (void*)0;
                int i, j, k;
                l_1383 &= (func_46(g_184, l_1120[(g_110 + 2)][(g_77 + 5)][g_110], p_26, ((****g_705) &= l_1377[5])) , ((p_26 , l_1441) != (void*)0));
            }
        }
    }



    return g_746;




}







static long long func_31(unsigned char p_32, char p_33)
{
    short l_768 = 0xCCDEL;
    union U0 l_775 = {-1L};
    int *l_776 = &g_59;
    char *l_777[1][5] = {{&g_84, &g_7, &g_84, &g_7, &g_84}};
    unsigned long long l_781 = 0x876B48B67EEF733BLL;
    unsigned short ****l_791 = &g_303;
    unsigned *l_815 = &g_630;
    unsigned **l_814 = &l_815;
    int l_881 = (-1L);
    int l_927 = 0x17826E36L;
    unsigned char l_950 = 0x05L;
    union U0 ***l_955 = &g_296;
    unsigned char l_958[10] = {0x1BL, 0x66L, 0x1BL, 0x66L, 0x1BL, 0x66L, 0x1BL, 0x66L, 0x1BL, 0x66L};
    unsigned l_973[5][5][6] = {{{0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}}, {{0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}}, {{0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}}, {{0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}}, {{0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}, {0x7545BFE1L, 1UL, 0x7545BFE1L, 0x6AF643E6L, 1UL, 0x660AFC62L}}};
    unsigned long long **l_992[1];
    unsigned *l_1000 = &g_184.f1;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_992[i] = &g_271;
    g_218 |= (l_768 != (safe_lshift_func_int8_t_s_s((0x8DAA38BFL && (((safe_rshift_func_uint16_t_u_u((l_768 && l_768), l_768)) | (safe_rshift_func_uint8_t_u_u((((((*l_776) = (func_51((func_46(l_775, (**g_572), (*g_271), ((***g_706) &= (p_32 && p_33))) > l_768), l_776, l_776, (*g_6)) , p_33)) , (*l_776)) , (*l_776)) || 0xE5L), 2))) ^ 0x6CD7L)), 6)));
    for (g_84 = (-24); (g_84 <= (-29)); g_84 = safe_sub_func_uint32_t_u_u(g_84, 9))
    {
        int **l_780 = &l_776;
        int *l_798 = (void*)0;
        union U0 l_821 = {-5L};
        unsigned **l_832 = (void*)0;
        int l_854 = 0x42FD76AEL;
        union U0 l_886 = {0xD601L};
        unsigned char l_929 = 252UL;
        union U0 ***l_956[5][4][10] = {{{(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}}, {{(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}}, {{(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}}, {{(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}}, {{(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}, {(void*)0, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291, (void*)0, &g_291, &g_291}}};
        int l_957 = 0xD17C1A10L;
        int i, j, k;
    }
    for (g_413 = 0; (g_413 <= 9); ++g_413)
    {
        long long l_976 = 0x1431BC411DBCF62ALL;
        short l_977[7];
        union U0 l_978 = {-1L};
        unsigned long long **l_993 = &g_271;
        union U0 l_1006 = {1L};
        unsigned long long l_1007 = 0x48CC8BECB7EB3A03LL;
        int i;
        for (i = 0; i < 7; i++)
            l_977[i] = (-1L);
        (*g_482) |= 1L;
        (*g_482) = ((*g_6) < (*l_776));
        for (g_84 = 0; (g_84 > 11); g_84 = safe_add_func_int32_t_s_s(g_84, 2))
        {
            unsigned l_985[7][8] = {{18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}, {18446744073709551607UL, 0UL, 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x7FECD330L, 0x642464ACL, 18446744073709551611UL}};
            unsigned char *l_986 = &g_746;
            long long *l_987[10];
            int *l_994[6];
            unsigned l_1008 = 4294967291UL;
            int i, j;
            for (i = 0; i < 10; i++)
                l_987[i] = &g_624;
            for (i = 0; i < 6; i++)
                l_994[i] = (void*)0;
        }
    }
    return p_32;
}







static unsigned long long func_36(int * p_37, int p_38)
{
    short l_495 = 0x4826L;
    int l_500 = 0x6BBBBB20L;
    char *l_501[1];
    short *l_502[8] = {&g_88.f0, &g_88.f0, &g_184.f0, &g_88.f0, &g_88.f0, &g_184.f0, &g_88.f0, &g_88.f0};
    int **l_503 = &g_482;
    int **l_504[8] = {&g_58, &g_58, &g_58, &g_58, &g_58, &g_58, &g_58, &g_58};
    unsigned long long l_515[2];
    union U0 ***l_541[7][2][7] = {{{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}, {{&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}, {&g_296, &g_291, &g_291, &g_291, &g_291, &g_296, &g_291}}};
    short l_545 = (-1L);
    short l_549 = 0x7E65L;
    int *l_552 = (void*)0;
    unsigned short ****l_553 = (void*)0;
    long long l_631 = 0L;
    unsigned short **l_682 = &g_305[5];
    long long *l_686 = &g_624;
    long long **l_685 = &l_686;
    short l_711[10][8][3] = {{{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}, {{0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}, {0xFA19L, (-7L), 0x3734L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_501[i] = &g_7;
    for (i = 0; i < 2; i++)
        l_515[i] = 0xF0BB177E31805347LL;
    g_58 = ((*l_503) = &g_218);

    ;
    ;
    (*l_503) = p_37;


    (*g_482) ^= 0xDFCBA623L;
    for (g_220 = 0; (g_220 <= 1); g_220 += 1)
    {
        unsigned char l_514 = 246UL;
        short **l_520 = &l_502[5];
        int l_527 = 0L;
        unsigned long long **l_570 = &g_271;
        unsigned long long ***l_569 = &l_570;
        union U0 l_574 = {0xBA3CL};
        unsigned short ****l_575[2][10][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        int l_578 = 1L;
        unsigned short l_596 = 0x4296L;
        int l_611 = 0x049E6E4DL;
        int l_612 = 9L;
        unsigned l_635 = 18446744073709551609UL;
        unsigned short l_684 = 0x5D92L;
        int l_736[6];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_736[i] = 1L;
        for (g_272 = 0; (g_272 <= 1); g_272 += 1)
        {
            unsigned short **l_509 = &g_305[7];
            union U0 l_510 = {1L};
            short l_525 = 6L;
            int l_546 = 1L;
            int l_588 = 1L;
        }
    }
    return p_38;
}







static int * func_39(unsigned p_40, unsigned p_41, char p_42)
{
    int l_81 = (-1L);
    char *l_82 = &g_7;
    char *l_83[2];
    int *l_85 = &l_81;
    union U0 l_121 = {0x2B81L};
    unsigned long long l_127[4][9] = {{0xD8B5B86692AA995ALL, 18446744073709551609UL, 4UL, 18446744073709551609UL, 0xD8B5B86692AA995ALL, 0UL, 4UL, 0UL, 0xD8B5B86692AA995ALL}, {0xD8B5B86692AA995ALL, 18446744073709551609UL, 4UL, 18446744073709551609UL, 0xD8B5B86692AA995ALL, 0UL, 4UL, 0UL, 0xD8B5B86692AA995ALL}, {0xD8B5B86692AA995ALL, 18446744073709551609UL, 4UL, 18446744073709551609UL, 0xD8B5B86692AA995ALL, 0UL, 4UL, 0UL, 0xD8B5B86692AA995ALL}, {0xD8B5B86692AA995ALL, 18446744073709551609UL, 4UL, 18446744073709551609UL, 0xD8B5B86692AA995ALL, 0UL, 4UL, 0UL, 0xD8B5B86692AA995ALL}};
    long long *l_156 = &g_137;
    union U0 *l_219 = &g_88;
    unsigned long long *l_221 = (void*)0;
    unsigned long long *l_222 = &l_127[2][1];
    union U0 *l_231 = (void*)0;
    int l_298 = 0L;
    unsigned *l_345 = &g_266;
    short l_348 = 0x05FAL;
    short **l_368 = &g_191;
    int *l_433 = &l_298;
    int **l_432 = &l_433;
    char l_435 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_83[i] = &g_84;
    (*l_85) = (l_81 >= (l_82 == (l_83[0] = l_82)));


    for (p_41 = 0; (p_41 <= 1); p_41 += 1)
    {
        int *l_86 = &g_77;
        int **l_87 = &l_85;
        union U0 l_89 = {-5L};
        int l_96 = (-2L);
        unsigned long long l_142 = 0x4623137507154B7DLL;
        short *l_183 = &l_89.f0;
        unsigned l_210 = 0xA387565CL;
        int *l_215 = (void*)0;
        int *l_216 = (void*)0;
        int *l_217 = (void*)0;
        (*l_87) = l_86;

        ;
        for (g_77 = 0; (g_77 <= 1); g_77 += 1)
        {
            unsigned short l_92 = 65535UL;
            unsigned long long l_104[1][2][1];
            union U0 l_107 = {0x3423L};
            int *l_109 = &g_59;
            int l_126 = (-2L);
            unsigned char *l_205 = &g_76[0][0];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_104[i][j][k] = 0x3E36E8D0335754D7LL;
                }
            }
            for (g_30 = 1; (g_30 >= 0); g_30 -= 1)
            {
                unsigned long long l_94 = 0x642B86B6EF1402E7LL;
                int l_97[8][3] = {{4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}, {4L, 0x52B1B1FAL, 0xE26AF1C4L}};
                unsigned char l_166 = 255UL;
                unsigned short *l_181 = (void*)0;
                unsigned short **l_180 = &l_181;
                union U0 l_199 = {0xB91CL};
                unsigned char *l_211 = (void*)0;
                unsigned char *l_212 = &g_187;
                int *l_214 = &l_81;
                int i, j;
            }
        }
        g_59 |= ((4294967295UL == (*l_85)) != (*l_85));
        g_218 ^= (g_30 &= func_46(l_121, g_7, (1L >= (*l_85)), g_88.f0));
    }

    ;
    if (((*l_85) = (+func_46(g_184, ((*l_85) | (((*l_222) |= func_46(((*l_219) = g_88), (g_137 , (((g_220 = (p_42 >= (g_184 , (p_42 >= ((g_110 != ((((g_84 = p_41) != (*l_85)) , (*l_85)) < g_184.f0)) == p_42))))) == 0L) & 247UL)), (*l_85), (*l_85))) || 0x6AF59B29B80A167ALL)), (*l_85), p_42))))
    {
        int *l_223 = &g_218;
        union U0 l_252[6] = {{0xDB62L}, {0x5AF9L}, {0xDB62L}, {0x5AF9L}, {0xDB62L}, {0x5AF9L}};
        union U0 **l_330 = (void*)0;
        union U0 l_375 = {-9L};
        char *l_379[8][6][5] = {{{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}, {{&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}, {&g_7, (void*)0, &g_84, &g_7, &g_84}}};
        union U0 l_400[4][4][3] = {{{{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}}, {{{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}}, {{{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}}, {{{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}, {{0x4DC2L}, {0x4DC2L}, {-6L}}}};
        long long *l_453 = (void*)0;
        int l_462 = (-7L);
        unsigned l_463 = 0xDA054307L;
        union U0 l_476 = {0x3A78L};
        int i, j, k;
        (*l_223) = ((*l_85) = (*l_85));
        if ((*l_223))
        {
            long long l_224 = 0xE5AE544DAC0EC065LL;
            int *l_241 = &g_59;
            union U0 **l_294 = &g_292;
            int *l_299 = &g_77;
            unsigned char l_313 = 251UL;
            int **l_322 = &l_241;
            union U0 *l_337 = &g_184;
            unsigned l_338 = 0xEA0C654FL;
            unsigned *l_343[5];
            unsigned *l_344 = &l_338;
            int i;
            for (i = 0; i < 5; i++)
                l_343[i] = &l_338;
            if ((g_213 | (g_187 < l_224)))
            {
                short *l_225 = (void*)0;
                short *l_226 = &l_121.f0;
                union U0 **l_230 = &l_219;
                union U0 *l_232 = (void*)0;
                union U0 *l_233 = &g_88;
                int *l_238 = &g_30;
                long long l_239[9] = {(-9L), 0xBC67531C0F092F73LL, (-9L), 0xBC67531C0F092F73LL, (-9L), 0xBC67531C0F092F73LL, (-9L), 0xBC67531C0F092F73LL, (-9L)};
                int l_240 = 0xEA956860L;
                unsigned l_264 = 0xE37CBACDL;
                int l_273 = 2L;
                short l_297 = (-2L);
                char l_310 = 4L;
                int i;
                (*l_238) &= (((*l_226) = (*l_223)) , (((safe_unary_minus_func_int16_t_s(((l_231 = ((*l_230) = (void*)0)) == l_232))) && (&p_42 == (void*)0)) , (0x79F683CE6440DBB3LL && (((*l_233) = g_88) , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((*l_85), 9)), (g_220 ^ 18446744073709551615UL))) != p_41)))));

                ;
                if (((p_42 , (*l_85)) | p_40))
                {
                    union U0 l_255 = {-8L};
                    unsigned *l_265 = &g_266;
                    int **l_274 = &l_241;
                    (*l_85) |= ((*l_223) = (func_46(g_184, p_41, p_41, g_137) == l_239[0]));
                    if (l_240)
                    {
                        l_241 = &g_30;

                        ;
                        return &g_59;


                    }
                    else
                    {
                        unsigned long long **l_243 = &l_221;
                        unsigned long long ***l_242 = &l_243;
                        int *l_257 = (void*)0;
                        int **l_256 = &l_257;
                        (*l_241) = p_41;
                        (*l_242) = (void*)0;

                        ;
                        (*l_85) ^= (safe_lshift_func_uint16_t_u_s((1UL <= ((safe_sub_func_int16_t_s_s((*l_241), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((g_213 <= (*l_241)), func_46((l_252[2] = l_252[2]), (safe_lshift_func_int8_t_s_s(p_40, (+(*g_6)))), (l_255 , (((*l_256) = g_58) != g_58)), (*l_238)))), p_40)))) != (*l_223))), (*l_223)));

                        ;
                    }
                    l_273 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((((((*l_265) = ((l_264 = (safe_add_func_int64_t_s_s(((*l_241) && p_40), (g_77 , (0x9240290DL == ((l_255.f0 , &g_88) != &l_255)))))) > g_220)) != ((safe_add_func_uint64_t_u_u((((*l_223) |= (safe_lshift_func_int16_t_s_s((((*l_238) = (((((p_40 | 0xD38B644DA49FBC8ALL) , (*l_241)) , &l_127[3][1]) != g_271) ^ 6L)) < p_40), 0))) && 0L), l_255.f0)) , 0L)) | 0L) , 0x2A917BC99AC3B920LL), (-3L))), 2));
                    (*l_274) = l_241;
                }
                else
                {
                    short l_282 = 0L;
                    union U0 **l_295 = (void*)0;
                    for (g_266 = (-28); (g_266 > 3); g_266 = safe_add_func_uint8_t_u_u(g_266, 4))
                    {
                        unsigned long long **l_279 = &g_271;
                        int l_286 = (-1L);
                        union U0 ***l_293[5] = {(void*)0, &l_230, (void*)0, &l_230, (void*)0};
                        int i;
                        (*l_85) = (safe_rshift_func_int16_t_s_u((&g_272 != ((*l_279) = &g_272)), ((safe_sub_func_uint64_t_u_u((l_282 , p_41), (safe_add_func_uint16_t_u_u(((*l_223) = (safe_unary_minus_func_int64_t_s((l_286 && (((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(l_286, (((((((func_46(l_252[0], ((l_294 = g_291) != (g_296 = l_295)), g_76[0][1], g_272) >= 0xA78FE824BA821798LL) ^ 65535UL) == (*l_223)) && 1L) <= 8L) >= 65535UL) , p_40))), 4)) == l_297) && l_298))))), (*l_238))))) < 0x83L)));
                    }
                    l_299 = &g_218;

                    ;
                    if ((!(&p_42 == (g_272 , (void*)0))))
                    {
                        int **l_300 = &l_241;
                        int **l_301 = &l_223;
                        (*l_223) |= p_42;
                        (*l_299) = 0x0790758BL;
                        (*l_301) = ((*l_300) = &g_30);

                        ;
                        ;
                    }
                    else
                    {
                        union U0 *l_302 = &l_252[1];
                        int **l_307 = &l_223;
                        l_302 = l_302;
                        (*l_299) = l_282;
                        (*l_299) |= (g_303 != ((func_46(l_252[2], (func_46(func_51(p_40, &l_273, ((*l_307) = &l_273), ((safe_add_func_uint16_t_u_u(p_40, 0L)) , p_41)), p_41, l_310, l_282) , (*g_271)), p_40, g_88.f0) > p_40) , (void*)0));

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*l_223) = p_42;
            }
            else
            {
                for (g_306 = 0; (g_306 != 59); g_306 = safe_add_func_uint32_t_u_u(g_306, 5))
                {
                    if (l_313)
                        break;
                }
            }


            ;

            ;
            ;
            (*l_322) = (func_46(func_51(p_42, &g_59, &g_218, (safe_add_func_uint32_t_u_u((((*l_222) ^= ((*l_241) , (*g_271))) < (((2UL || (((safe_add_func_int64_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((((*g_271) == (&g_272 == l_222)) , (*l_299)) ^ 0x096DL), g_218)), 0UL)) , 4L) & 0xD080C8F7L) & 0x82E1L), 0xA90149B8A88DE528LL)) , (*l_85)) | (*g_271))) >= (*g_271)) | (*l_299))), p_41))), p_40, (*g_271), g_272) , (void*)0);

            ;
            ;
            for (p_41 = 4; (p_41 != 23); p_41 = safe_add_func_int16_t_s_s(p_41, 4))
            {
                union U0 ***l_329[5][4][6] = {{{&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}}, {{&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}}, {{&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}}, {{&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}}, {{&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}, {&g_291, &g_291, &l_294, &g_296, &g_296, (void*)0}}};
                unsigned l_362 = 4294967295UL;
                int i, j, k;
                if ((safe_add_func_uint8_t_u_u(((void*)0 == &p_40), (safe_sub_func_int8_t_s_s(((g_291 = (g_296 = (l_330 = &g_292))) == (void*)0), (0xE33FL == ((***g_303) = ((*l_85) == (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((g_292 = l_337) == &g_88), 5)) && l_338), 1)) | 0x309EL) || p_41)))))))))
                {
                    union U0 l_355 = {0xD3B9L};
                    short **l_359[1][4][8] = {{{&g_191, &g_191, (void*)0, &g_191, &g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191, &g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191, &g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191, &g_191, &g_191, (void*)0, &g_191}}};
                    int *l_363 = &g_30;
                    int i, j, k;
                    for (g_30 = 3; (g_30 < (-25)); g_30 = safe_sub_func_uint16_t_u_u(g_30, 5))
                    {
                        unsigned *l_342 = &l_338;
                        unsigned **l_341[8] = {&l_342, &l_342, &l_342, &l_342, &l_342, &l_342, &l_342, &l_342};
                        unsigned char *l_351 = (void*)0;
                        unsigned char *l_352[10][5] = {{&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}, {&l_313, &g_76[0][1], &g_213, &g_187, &g_76[0][1]}};
                        int l_356 = 5L;
                        int i, j;
                        (*g_291) = (void*)0;

                        ;
                        (*g_58) = (((((l_343[4] = (void*)0) == (l_345 = l_344)) > (((*l_342) = (+g_88.f0)) , (((safe_lshift_func_uint16_t_u_s(l_348, (((safe_add_func_int16_t_s_s(func_46(((&l_330 != ((g_137 & ((((*l_85) = 1UL) == (safe_lshift_func_uint16_t_u_u(65534UL, 6))) >= p_40)) , &l_294)) , l_355), (*g_271), l_356, g_272), p_41)) && p_41) < 0xAA53L))) >= l_356) || l_252[2].f0))) < 0x46E6413676E28B10LL) , (*g_58));

                        ;
                    }

                    ;
                    (*l_85) = (safe_mod_func_int8_t_s_s(((1UL > (func_46(l_355, l_355.f0, (((g_7 > g_88.f0) == ((g_191 = g_305[6]) == (void*)0)) , (p_42 , (safe_add_func_uint16_t_u_u(1UL, (*g_191))))), g_266) , l_362)) ^ (*g_6)), 1UL));

                    ;
                    (*l_363) ^= func_46(l_355, (*g_271), ((*l_222) = (*g_271)), (*l_85));
                    (*l_322) = l_363;

                    ;
                }
                else
                {
                    return &g_59;


                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;

            ;
        }
        else
        {
            union U0 l_364[10] = {{-1L}, {0xABA8L}, {0x034AL}, {0x034AL}, {0xABA8L}, {-1L}, {0xABA8L}, {0x034AL}, {0x034AL}, {0xABA8L}};
            union U0 l_365 = {0xBD7AL};
            unsigned **l_369 = &l_345;
            char l_372 = 0L;
            unsigned short **l_374 = &g_305[0];
            int *l_378 = &g_30;
            union U0 l_390[5][6][8] = {{{{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}}, {{{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}}, {{{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}}, {{{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}}, {{{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}, {{0L}, {8L}, {8L}, {-7L}, {8L}, {0x53FDL}, {8L}, {-7L}}}};
            unsigned short ***l_414 = (void*)0;
            int **l_434[3];
            unsigned long long l_489[4];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_434[i] = &l_433;
            for (i = 0; i < 4; i++)
                l_489[i] = 1UL;
            (*l_85) ^= func_46(l_364[2], p_40, ((func_46(l_364[2], (*g_271), p_40, g_218) < (*l_223)) | (func_46(l_365, p_42, p_41, p_42) <= 0x27L)), p_42);
            for (p_42 = 0; (p_42 > (-16)); p_42--)
            {
                unsigned short l_373 = 65528UL;
                (*l_223) &= ((+func_46(l_364[2], p_40, func_46((**g_291), (l_368 != (((l_369 != (void*)0) ^ (g_187 , (safe_lshift_func_int8_t_s_s(((l_372 >= (((***g_303) ^= ((l_373 == 0L) & (*l_85))) & l_365.f0)) , p_42), (*g_6))))) , (void*)0)), (*g_271), g_137), l_372)) , g_77);
            }
            (*l_378) &= (((p_42 , p_40) != ((((*l_85) > (*l_223)) >= (((((*g_303) = l_374) == (void*)0) <= func_46((p_41 , l_375), (safe_add_func_int16_t_s_s(l_365.f0, 0xED63L)), l_372, g_77)) != (*l_223))) , l_372)) & (*g_271));
            if ((&p_42 == (l_379[7][4][3] = &p_42)))
            {
                unsigned short l_386 = 0x0D32L;
                union U0 l_391 = {0L};
                int *l_398 = &g_30;
                int *l_429 = (void*)0;
                int **l_428 = &l_429;
                long long **l_454 = (void*)0;
                long long **l_455 = &l_156;
                unsigned *l_456 = &g_413;
                char *l_461 = (void*)0;
                unsigned char **l_479 = &g_178;
                (*l_378) = (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((1UL < p_40), (((l_386 = (safe_mod_func_uint8_t_u_u(func_46((**g_291), (*g_271), ((*l_223) | (*l_223)), (*l_223)), ((*l_223) , p_41)))) | p_40) == (*g_271)))) & 248UL), 0x7B3DL));
                (*l_223) ^= l_386;
                for (g_306 = 0; (g_306 <= 1); g_306 += 1)
                {
                    char l_387 = 7L;
                    int l_396 = 1L;
                    unsigned long long l_397 = 0UL;
                    int *l_399 = (void*)0;
                    unsigned short ***l_409[4][6][7] = {{{&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}}, {{&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}}, {{&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}}, {{&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}, {&g_304[1][3], (void*)0, &g_304[0][7], &l_374, &g_304[0][6], &l_374, &g_304[0][6]}}};
                    int ***l_430 = (void*)0;
                    int ***l_431[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_431[i] = &l_428;
                    l_387 = (*l_378);
                    if (func_46(l_400[1][3][1], (*g_271), (*l_223), (*l_398)))
                    {
                        int *l_401 = &g_59;
                        return l_401;


                    }
                    else
                    {
                        unsigned short ****l_408[1][5];
                        unsigned *l_412 = &g_413;
                        int *l_415 = &l_396;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_408[i][j] = &g_303;
                        }
                        (*l_415) |= (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((p_41 && g_266), ((l_409[2][1][2] = &g_304[0][6]) != (l_414 = ((safe_sub_func_uint8_t_u_u(p_41, (((((*l_412) = ((-5L) & (*l_85))) <= (&g_7 != &p_42)) , g_218) , p_41))) , &l_374))))) || g_88.f0), p_41)) ^ (*l_398)), (*l_223)));

                        ;
                        if (g_137)
                            continue;
                        if (g_272)
                            break;
                    }

                    ;
                }

                ;
                if (((safe_rshift_func_uint8_t_u_u((((*l_456) = ((**l_369) = (((*l_455) = l_453) == &g_137))) > (p_41 == (*l_85))), 5)) | ((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((*l_85) == 3UL), ((g_30 , l_461) != &p_42))), l_462)) ^ l_463)))
                {
                    long long l_471 = 1L;
                    int l_472 = 0x379746DDL;
                    int **l_481[6] = {&l_85, &l_85, &l_398, &l_85, &l_85, &l_398};
                    int i;
                    for (g_220 = 29; (g_220 > 16); g_220--)
                    {
                        int *l_470 = &l_81;
                        int l_473 = 0x0F75CD23L;
                        (*l_85) = ((0x09210B71877C88E0LL && (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((((*l_345) &= ((((**l_374) ^= ((*l_85) > (-6L))) > (*l_398)) , ((((((l_472 = func_46(func_51(p_41, l_470, &g_30, (*l_378)), (*g_271), p_41, l_471)) > 0x03B03F31F3A545B3LL) && 246UL) <= 0x03BEL) || p_42) < (*l_378)))) , g_77) , p_40), g_220)), 0x850AB19E4DCF418FLL))) || g_187);
                        if (p_41)
                            continue;
                        (*l_85) = l_473;
                    }

                    ;
                    for (g_30 = (-12); (g_30 < 3); g_30 = safe_add_func_uint32_t_u_u(g_30, 3))
                    {
                        int **l_480[10][7][3] = {{{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}, {{(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}, {(void*)0, (void*)0, &l_378}}};
                        int i, j, k;
                        (*l_85) = ((-1L) && (0L & func_46(func_51((func_46(l_476, (*g_271), ((*l_85) = (((safe_rshift_func_uint8_t_u_s((*l_223), 7)) , l_479) != ((p_42 = (1L != (((l_378 = &g_30) == &g_77) <= l_471))) , (void*)0))), p_40) == 0x0D8690CBL), &l_462, l_398, p_41), p_40, p_40, p_40)));
                    }

                    ;
                    l_223 = &g_30;

                    ;
                }
                else
                {
                    int **l_483[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    int i;
                    l_223 = g_482;
                }

                ;
                ;
                ;
            }
            else
            {
                int l_494 = (-9L);
                for (l_435 = 0; (l_435 == 27); l_435 = safe_add_func_int16_t_s_s(l_435, 9))
                {
                    for (g_413 = 0; (g_413 != 37); ++g_413)
                    {
                        union U0 l_488 = {-10L};
                        (*l_378) = (((((p_41 &= g_76[0][1]) != (func_46(l_390[3][5][6], func_46(((*l_219) = l_488), (*g_271), (*g_271), (*l_223)), p_42, (+(l_489[0] < p_42))) < 0xB770L)) ^ (*l_223)) && p_40) ^ (*l_85));
                    }
                    if (p_42)
                        continue;
                }
                (*l_223) = (((safe_rshift_func_int8_t_s_s((p_42 , p_42), 5)) < (safe_sub_func_int8_t_s_s((((p_41 | p_40) && p_41) <= (*l_378)), (l_494 = (*g_6))))) || (*g_271));
            }

            ;
            ;
            ;

            ;
        }

        ;
        ;
        ;
        ;

        ;
        ;
        ;


    }
    else
    {
        return &g_77;


    }


    ;
    ;
    ;
    ;
    ;

    return &g_218;



}







static long long func_46(union U0 p_47, unsigned long long p_48, unsigned long long p_49, int p_50)
{
    int *l_80 = &g_77;
    l_80 = l_80;
    return g_59;
}







static union U0 func_51(long long p_52, int * p_53, int * p_54, char p_55)
{
    int *l_57 = (void*)0;
    int **l_56[6] = {&l_57, &l_57, (void*)0, &l_57, &l_57, (void*)0};
    int l_60 = 6L;
    int l_70 = (-2L);
    unsigned char *l_75 = &g_76[0][1];
    union U0 l_78 = {0x9DA0L};
    int i;
    g_58 = p_53;


    for (g_59 = 5; (g_59 >= 1); g_59 -= 1)
    {
        int l_63[10] = {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L};
        unsigned char l_64 = 4UL;
        int l_65 = 8L;
        int i;
        l_65 = ((g_59 ^ (((+p_55) & (*p_54)) != g_30)) , (l_64 = (l_60 < ((g_59 != (safe_rshift_func_uint8_t_u_s((((l_63[1] = (((*p_54) == ((p_52 & p_52) & 0x9098934ECA6696B4LL)) ^ 0x824FL)) != 4294967295UL) & 0xEFL), 3))) , (*g_6)))));
    }
    g_77 &= (safe_mod_func_uint8_t_u_u(p_52, ((*l_75) ^= (g_30 < (((l_70 && (g_7 >= p_55)) >= ((((&g_7 == &g_7) < (safe_mod_func_int16_t_s_s(g_30, (safe_mod_func_uint64_t_u_u(((g_59 && p_52) >= g_59), p_55))))) | (*g_6)) >= 0xD3BDL)) >= p_55)))));
    return l_78;


    }





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_76[i][j], "g_76[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_792[i][j], "g_792[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1148[i].f0, "g_1148[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1186[i][j][k], "g_1186[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1215, "g_1215", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1294[i], "g_1294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1309, "g_1309", print_hash_value);
    transparent_crc(g_1538.f0, "g_1538.f0", print_hash_value);
    transparent_crc(g_1557, "g_1557", print_hash_value);
    transparent_crc(g_1661, "g_1661", print_hash_value);
    transparent_crc(g_1676, "g_1676", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1689[i][j], "g_1689[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
