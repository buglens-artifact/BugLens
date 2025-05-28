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



static unsigned g_16 = 0x3FF14EB4L;
static unsigned short g_62 = 65535UL;
static unsigned g_79 = 4UL;
static int g_97 = 0xB3884E3EL;
static unsigned char g_117 = 251UL;
static unsigned short g_138 = 0x1A10L;
static unsigned short g_150 = 65535UL;
static short g_154 = 0x6B54L;
static unsigned short g_167 = 0x0A32L;
static unsigned g_197 = 0x20B21173L;
static unsigned short g_203 = 3UL;
static unsigned char g_204 = 0UL;
static short g_205 = 0xE70DL;
static unsigned g_215 = 0x3813A0B3L;
static char g_220 = 0L;
static unsigned char g_247 = 246UL;
static int g_249 = 0xDD6C4D08L;
static int g_251 = 0L;
static short g_296 = 0xC979L;
static unsigned char g_303 = 1UL;
static char g_304 = 0x04L;
static int g_367 = 0x05E14E59L;
static unsigned char g_382 = 0x26L;
static unsigned short g_387 = 0UL;
static unsigned g_388 = 7UL;
static unsigned char g_399 = 255UL;
static unsigned g_403 = 18446744073709551606UL;
static unsigned g_421 = 0x4656B053L;
static int g_423 = 0x557EAD50L;
static char g_537 = 0xCCL;
static short g_560 = 0x64E5L;
static unsigned char g_620 = 0x50L;
static unsigned char g_651 = 0UL;
static int g_746 = 0xEC72C255L;



static unsigned func_1(void);
static char func_6(int p_7, unsigned short p_8);
static char func_13(int p_14, short p_15);
static unsigned short func_19(unsigned short p_20, unsigned short p_21, unsigned char p_22);
static unsigned short func_23(int p_24, unsigned p_25);
static int func_28(int p_29, const unsigned char p_30, const unsigned p_31, const short p_32, short p_33);
static char func_38(unsigned p_39, unsigned short p_40);
static char func_49(int p_50, short p_51, unsigned p_52, int p_53, int p_54);
static int func_55(int p_56, unsigned char p_57, short p_58, unsigned p_59, unsigned short p_60);
static int func_63(int p_64, int p_65, char p_66);
static unsigned func_1(void)
{
    unsigned char l_2 = 0x41L;
    int l_3 = 4L;
    char l_17 = 1L;
    unsigned l_800 = 0x35A44D14L;
    unsigned l_801 = 0x614B9D37L;
    unsigned short l_868 = 65533UL;
    unsigned l_869 = 0UL;
    int l_892 = 0L;
    l_3 = l_2;
    l_3 = (safe_rshift_func_int16_t_s_u(((((l_868 = func_6((safe_lshift_func_uint16_t_u_u((0x1C3CL <= (safe_rshift_func_uint16_t_u_u((func_13(g_16, (l_2 == (l_17 = (g_16 < 0x80L)))) | (0x63L > (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((((((g_399 , ((((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(l_3, l_3)) , 0x03L), g_403)) , l_2) <= g_399) || 7UL)) , (-1L)) == g_399) >= g_16) >= 1L), 0xCFL)), 6)), 1)) , 9L) == l_800))), g_16))), 9)), l_801)) , g_403) != l_869) < l_2), g_16));
    if (g_154)
    {
        unsigned l_870 = 0x5B732FF0L;
        int l_881 = (-9L);
        l_881 = (g_423 = ((l_870 && (safe_div_func_uint16_t_u_u(g_197, (safe_lshift_func_int16_t_s_s((g_249 != ((safe_sub_func_uint16_t_u_u(g_62, (safe_lshift_func_uint16_t_u_u(l_870, 1)))) == (safe_rshift_func_int16_t_s_s(0x41CAL, l_869)))), 7))))) == g_382));
        g_423 &= (g_97 >= (l_2 , (((g_138 && ((((l_881 >= g_79) > (safe_lshift_func_int16_t_s_u((((((((((g_651 = (safe_sub_func_uint32_t_u_u(g_220, (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0xCE53L, (safe_lshift_func_int16_t_s_u(g_117, (func_38((func_55((l_881 && l_870), l_868, g_382, l_881, g_303) || 0xD9ED0E64L), l_801) , 0x22FDL))))), l_2))))) >= g_382) , 18446744073709551608UL) , 0xDAL) == l_2) , (-1L)) , g_150) , g_403) , l_881), l_892))) , g_16) != l_800)) && l_3) >= g_746)));
        for (l_800 = 0; (l_800 == 14); l_800++)
        {
            char l_899 = 1L;
            int l_911 = 5L;
            unsigned l_928 = 4UL;
            if (g_382)
            {
                short l_902 = 1L;
                if (((((safe_sub_func_int8_t_s_s(0xCBL, (l_899 | g_220))) >= (safe_mod_func_int16_t_s_s((((l_902 > ((((g_388 == l_902) ^ (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_870, 3)), ((safe_sub_func_int8_t_s_s(func_38(l_902, l_870), g_367)) <= l_868)))) || 0x6AE9L) ^ (-10L))) != g_651) , g_203), 0x2AB5L))) > g_138) != 0L))
                {
                    g_423 = g_138;
                }
                else
                {
                    return l_899;
                }
                for (g_220 = (-14); (g_220 <= 8); ++g_220)
                {
                    unsigned l_916 = 18446744073709551615UL;
                    int l_917 = (-9L);
                    g_423 = (1UL < func_55(l_902, ((l_911 = g_367) , g_303), (safe_mul_func_int16_t_s_s(g_423, l_902)), (safe_mul_func_uint8_t_u_u((l_881 = (l_917 = (l_916 >= ((((g_215 || (g_247 == l_870)) || l_899) || g_150) > 0xCE68L)))), 0xBAL)), g_620));
                }
                for (g_154 = (-2); (g_154 == 14); ++g_154)
                {
                    return g_421;
                }
                if (g_220)
                    break;
            }
            else
            {
                return l_868;
            }
            l_928 = ((g_382 = ((safe_add_func_int32_t_s_s((g_205 ^ (safe_div_func_uint8_t_u_u((g_247 |= (0xA3L < (g_296 || (func_38(func_38(l_881, g_150), ((safe_rshift_func_uint16_t_u_s((((l_3 <= ((g_423 != (safe_rshift_func_int16_t_s_s(g_403, 10))) ^ l_911)) <= 0x65L) ^ 249UL), 4)) < l_899)) , 4294967295UL)))), l_3))), l_17)) , g_303)) && g_403);
        }
    }
    else
    {
        g_251 |= l_3;
    }
    return l_2;
}







static char func_6(int p_7, unsigned short p_8)
{
    unsigned short l_829 = 4UL;
    unsigned l_847 = 4294967290UL;
    int l_848 = (-9L);
    if (((safe_rshift_func_int8_t_s_s(p_8, 6)) ^ (p_8 > ((safe_unary_minus_func_int16_t_s(p_7)) & g_251))))
    {
        unsigned l_815 = 0x4DA2C40DL;
        int l_828 = 0L;
        int l_830 = (-9L);
        g_423 = (safe_rshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_8 , (g_388 = p_7)) >= 0xE9FD986CL), (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_815 <= ((safe_div_func_uint16_t_u_u((l_830 ^= (safe_mul_func_uint8_t_u_u((func_38(((l_815 || (safe_mul_func_int8_t_s_s((l_815 < (safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(p_8, 6)) & (g_154 != ((((l_828 |= p_8) >= p_8) , l_829) > p_7))) , g_746), g_537))), l_815))) >= g_620), l_815) == 0xFCL), p_7))), l_829)) != (-7L))) , p_7), 65535UL)), p_8)))), p_7)) | 1UL) < (-1L)), 2));
        l_848 = (((safe_add_func_uint8_t_u_u((l_830 , p_7), l_815)) && l_829) , ((l_829 | (safe_unary_minus_func_uint8_t_u(func_19((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((l_829 >= (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_63(((g_746 | (func_23(p_8, p_7) | l_815)) >= l_829), g_651, g_62), p_8)), g_399)))), l_815)), l_829))) | g_560), 3)), p_8)), g_560, l_847)))) != p_7));
    }
    else
    {
        int l_849 = (-1L);
        short l_864 = (-1L);
        int l_865 = 0x400D5EB4L;
        p_7 = func_63(l_847, (g_423 = (6UL != (g_205 &= p_8))), l_849);
        if (g_746)
        {
            return g_304;
        }
        else
        {
            int l_854 = (-1L);
            for (g_304 = 24; (g_304 >= 15); g_304--)
            {
                unsigned l_861 = 0x930DAD45L;
                l_865 &= (0x8AL == ((func_23((+g_620), g_117) | (safe_lshift_func_uint8_t_u_s(((l_854 == (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_861, (g_560 = p_7))) & (safe_add_func_int16_t_s_s((((p_7 > func_55(func_55(func_55(l_861, l_848, l_849, l_849, l_848), p_8, p_7, g_387, l_861), g_117, g_387, p_8, p_7)) , l_864) <= l_854), 0xA462L))), 3L)), l_864))) >= 1UL), l_861))) <= p_8));
            }
        }
    }
    g_423 &= l_848;
    l_848 = (safe_rshift_func_int8_t_s_s(l_848, 5));
    return p_8;
}







static char func_13(int p_14, short p_15)
{
    char l_18 = 0xACL;
    unsigned char l_61 = 0x5BL;
    int l_540 = 0xAC3D2FF1L;
    unsigned l_541 = 0UL;
    const unsigned char l_543 = 1UL;
    unsigned char l_563 = 0x9EL;
    int l_564 = 0x4C09CA09L;
    l_564 = ((l_18 | l_18) , (0xCB0BL | func_19(l_18, func_23((0x8633L >= (0x10L != l_18)), ((l_563 = (safe_mod_func_int32_t_s_s(func_28(((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(func_38(l_18, ((safe_mod_func_uint8_t_u_u((l_541 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_div_func_int8_t_s_s((l_540 = func_49((!func_55(g_16, l_18, l_18, l_61, g_16)), l_18, g_16, l_61, l_61)), g_16)) , l_18) && 1UL) , 4L), l_18)), 6)) | 0L)), l_18)) >= 0xD9E6L)), 0x8AL)), 0x29L)) , l_61), p_14, g_399, l_543, p_15), p_15))) | l_564)), g_387)));
    return g_97;
}







static unsigned short func_19(unsigned short p_20, unsigned short p_21, unsigned char p_22)
{
    unsigned char l_585 = 0UL;
    int l_586 = 0L;
    int l_600 = (-9L);
    char l_618 = 0x50L;
    char l_675 = 0x67L;
    const int l_703 = (-2L);
    if (p_22)
    {
        unsigned char l_587 = 1UL;
        int l_588 = 0L;
        const unsigned char l_601 = 0xEEL;
        for (g_387 = 0; (g_387 >= 33); ++g_387)
        {
            unsigned char l_581 = 0x24L;
            l_588 &= ((safe_add_func_int32_t_s_s(((4294967286UL < p_21) | ((!(g_167 = (safe_rshift_func_int16_t_s_u(g_388, 9)))) >= func_23((safe_add_func_uint16_t_u_u(func_38(((func_55(g_537, (l_581 < func_23((g_367 &= g_205), (g_399 < ((l_585 ^= (safe_add_func_uint32_t_u_u(0x796608AEL, (safe_unary_minus_func_uint32_t_u(4294967295UL))))) < l_586)))), l_587, g_220, p_20) > l_586) , g_205), l_586), l_587)), l_586))), g_117)) , p_22);
        }
        if ((g_421 & ((safe_rshift_func_int8_t_s_u((p_22 >= g_560), (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((+((l_586 = l_588) , (safe_add_func_int32_t_s_s((g_205 <= (g_197 > l_586)), g_138)))) >= func_38(((((safe_add_func_uint32_t_u_u(func_38((((l_600 = l_585) == l_585) , g_367), p_22), g_150)) , g_154) < 0x76F3510AL) | g_382), p_22)))) == 255UL), l_588)) > l_585), p_22)))) <= l_601)))
        {
            unsigned l_619 = 18446744073709551615UL;
            g_251 = (l_588 = (safe_lshift_func_int16_t_s_u((g_16 , (safe_sub_func_int32_t_s_s(g_251, (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((l_587 || func_55(g_249, ((g_220 &= (((safe_mul_func_uint16_t_u_u(0xC206L, ((safe_mul_func_int8_t_s_s(g_79, (l_618 = (safe_mul_func_uint8_t_u_u(g_251, 255UL))))) >= l_619))) >= p_21) != g_296)) , g_150), g_150, g_215, g_620)), g_382)), p_22)), g_296))))), 6)));
            return p_22;
        }
        else
        {
            unsigned l_621 = 0x608B1CBBL;
            return l_621;
        }
    }
    else
    {
        unsigned short l_631 = 0x54D8L;
        int l_677 = (-8L);
        unsigned short l_693 = 0x2040L;
        int l_731 = (-1L);
        int l_736 = (-1L);
        unsigned short l_774 = 2UL;
        for (g_247 = 0; (g_247 > 2); g_247++)
        {
            int l_650 = 0L;
            unsigned char l_694 = 0x96L;
            int l_708 = 0x54EBF3DDL;
            unsigned l_738 = 2UL;
            int l_759 = (-6L);
            for (p_22 = 0; (p_22 < 29); p_22 = safe_add_func_uint8_t_u_u(p_22, 5))
            {
                int l_628 = 0xF27C97FBL;
                int l_636 = 0x5CB84524L;
                int l_649 = (-2L);
                int l_737 = 0x6A470DBAL;
                g_651 ^= func_55(g_220, (((safe_div_func_int32_t_s_s(l_628, func_38((((g_138 = (p_22 || (safe_add_func_uint16_t_u_u(func_23(l_631, ((((+0x9993L) , (l_650 = (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((l_636 = g_367), (safe_div_func_uint16_t_u_u((l_586 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_20, (((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_649 = ((((g_249 || 4294967294UL) < g_117) < g_387) || l_628)), p_22)), l_631)), p_20)) || p_22) && p_22))), 1))), p_22)))) , p_22) > g_247), l_585)))) == g_382) || 65535UL)), 0xE7F7L)))) ^ 0UL) , 1UL), g_215))) <= p_20) <= 1UL), g_150, g_382, g_303);
                if ((safe_mul_func_uint8_t_u_u(g_203, (((g_303 = 0UL) | (safe_mul_func_int8_t_s_s((p_20 , g_403), (safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_38((p_21 , l_650), g_117), (p_20 & p_22))), 0x5656L)) , 0xC954L), 6L))))) || p_21))))
                {
                    int l_662 = 4L;
                    int l_678 = 0x49DC7950L;
                    int l_686 = 0x5DFD9B37L;
                    if (((+g_304) < (-10L)))
                    {
                        unsigned short l_676 = 0UL;
                        l_662 ^= ((g_387 && 0xECL) | 65531UL);
                        l_677 = func_23((g_97 ^= (p_21 || ((g_304 = (g_154 , p_22)) || ((((~p_20) || ((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_650 > (safe_rshift_func_uint8_t_u_u(p_20, (safe_mul_func_int16_t_s_s((g_154 &= (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(func_55(p_20, ((g_62 & (g_150 = (((func_23(l_662, l_662) && l_675) , 65535UL) > p_22))) , 255UL), p_20, g_367, l_676), 5)), 2))), 1L))))), 7)), g_203)) <= l_676) < p_22) < 8L)) < g_399) | (-1L))))), p_20);
                        if (g_296)
                            break;
                        l_600 = (l_678 |= g_97);
                    }
                    else
                    {
                        unsigned l_695 = 1UL;
                        int l_696 = (-1L);
                        l_696 = (l_662 <= (((safe_mod_func_int32_t_s_s(p_22, (safe_mul_func_uint16_t_u_u(((p_20 && 4294967295UL) | (p_21 = (safe_rshift_func_int8_t_s_s(g_296, 0)))), (g_247 >= ((l_694 ^= (((safe_unary_minus_func_uint16_t_u((l_686 = l_631))) ^ (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((g_304 = (safe_add_func_uint32_t_u_u(p_22, l_693))) & g_167), p_22)), l_628))) ^ p_22)) <= l_677)))))) , l_695) != g_154));
                        l_600 = (l_650 , 0x0429B1DEL);
                        l_678 = (l_695 != (func_23(l_650, p_20) & (safe_div_func_int16_t_s_s(0xBCC9L, (g_421 ^ p_21)))));
                        if (p_20)
                            break;
                    }
                    l_678 = g_247;
                }
                else
                {
                    const unsigned l_739 = 0UL;
                    g_251 = ((g_197 >= (((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_703, 1)), func_55(p_22, p_21, p_22, l_586, (safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s(l_600, p_22)) || ((l_708 = (g_79 || p_21)) ^ g_537)), 0x0B4CBE2EL))))) <= l_628) , 249UL)) ^ 0x0659L);
                    if (g_382)
                        break;
                    g_423 &= ((g_388 , func_38((l_708 , (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((g_117 && (l_649 = l_675)) != (l_628 |= g_215)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((g_205 < p_20), 7)), (g_388 = (safe_lshift_func_int16_t_s_s((l_736 ^= (((((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((func_38((l_731 & (((l_677 = (l_636 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x9BL, g_382)), p_20)))) , 0xE4370F09L) , 0x3F57A4AAL)), g_154) >= p_20), 0x85L)) || p_21), p_21)) , l_650) < g_220) , p_22) && 0x49AEDBE1L)), p_20))))))) != l_737), l_738)), p_20)) , p_21), 0x34C55D69L)) <= g_220), 4)), l_739))), g_367)) && l_739);
                    g_746 = (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((l_731 > ((safe_sub_func_int16_t_s_s(((l_636 = (l_708 |= l_737)) ^ (func_55(g_249, (+p_20), g_215, (p_20 , 0x2CF42E50L), p_22) == g_537)), p_22)) == p_21)) & l_737), p_21)), g_388));
                }
                for (g_620 = 27; (g_620 != 20); g_620 = safe_sub_func_uint16_t_u_u(g_620, 1))
                {
                    unsigned l_764 = 18446744073709551615UL;
                    int l_765 = 0x17943931L;
                    l_677 = (safe_sub_func_int16_t_s_s(g_304, 0x2C39L));
                    l_765 = (safe_sub_func_uint32_t_u_u((p_22 & 0xB1L), func_38(((p_20 <= (g_303 = (p_22 , ((l_586 = (g_304 , (safe_sub_func_int16_t_s_s(p_22, (safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((g_16 == l_759), 3)) , ((safe_mul_func_int16_t_s_s((l_650 &= (safe_mul_func_int8_t_s_s(p_22, p_21))), 0x85DBL)) == g_382)) , 0L) >= p_22), l_649)))))) & l_759)))) , 1UL), l_764)));
                }
                if ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((0UL == ((l_636 >= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_774, (g_204 |= (253UL & ((g_537 = (safe_rshift_func_uint16_t_u_u(func_23((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s((func_55((((safe_rshift_func_int8_t_s_s(0x6DL, 3)) <= ((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((-1L), (func_55(g_117, l_694, g_403, p_21, g_423) <= (-3L)))), 0x5AL)) , p_21)) , 0x0C44B3C4L), l_585, g_79, l_628, g_304) >= 0x29011B70L), 0)))), l_649), p_22))) != l_677))))), 0xEFE9AF76L))) <= 7L)), g_560)), p_21)))
                {
                    for (l_600 = (-19); (l_600 < (-10)); l_600++)
                    {
                        if (g_620)
                            break;
                    }
                    l_708 = g_746;
                }
                else
                {
                    if (g_79)
                        break;
                }
            }
            return g_204;
        }
    }
    return l_703;
}







static unsigned short func_23(int p_24, unsigned p_25)
{
    char l_567 = 1L;
    int l_570 = 0x5AF13EE5L;
    int l_571 = 5L;
    int l_572 = 0x0F63CC25L;
    l_572 = ((~(g_423 &= (((~(safe_rshift_func_int16_t_s_s((func_38(l_567, l_567) , 0xB6C1L), 4))) , (((safe_div_func_uint32_t_u_u(g_62, ((l_571 &= (g_249 && (g_296 = (l_570 = p_24)))) , l_571))) || g_150) ^ (-2L))) | 1UL))) ^ 1UL);
    return g_399;
}







static int func_28(int p_29, const unsigned char p_30, const unsigned p_31, const short p_32, short p_33)
{
    char l_556 = 5L;
    int l_559 = 7L;
    const int l_561 = 0x49E84E6DL;
    int l_562 = 1L;
    l_562 ^= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_int16_t_s_s((g_560 &= ((l_559 = (safe_sub_func_int8_t_s_s((g_537 = ((safe_add_func_uint16_t_u_u(((l_556 ^= func_63(g_197, p_29, (safe_rshift_func_int16_t_s_u(((g_220 = 0x6FL) | p_29), p_33)))) || (((func_55((safe_mod_func_uint8_t_u_u((g_249 >= p_33), p_30)), l_556, g_203, p_30, p_30) | (-8L)) == 0x6F4B8EACL) , g_387)), g_16)) > l_559)), l_559))) & 6L)), 13)))), l_561)) , g_197);
    g_423 &= p_29;
    return g_117;
}







static char func_38(unsigned p_39, unsigned short p_40)
{
    unsigned char l_542 = 0x94L;
    g_251 |= l_542;
    return l_542;
}







static char func_49(int p_50, short p_51, unsigned p_52, int p_53, int p_54)
{
    unsigned l_71 = 0x2FE2CCF5L;
    int l_72 = 6L;
    int l_73 = 0xEB6BA8A7L;
    unsigned char l_76 = 1UL;
    unsigned l_535 = 0xED1A079EL;
    unsigned short l_536 = 2UL;
    g_62 |= p_51;
    p_53 = func_63((((safe_lshift_func_uint8_t_u_u(1UL, (safe_sub_func_int8_t_s_s((+p_50), (p_52 && p_54))))) == func_55(g_16, (l_72 ^= (l_71 = 1UL)), (func_55(func_55(func_55(l_73, (3UL == (safe_div_func_uint16_t_u_u((l_73 | g_16), l_73))), p_50, l_73, p_50), l_73, l_73, l_73, l_73), p_52, l_73, l_76, l_73) & l_73), p_54, g_16)) ^ 0x3958L), p_51, p_54);
    g_537 |= ((safe_mul_func_uint16_t_u_u(65534UL, (p_52 <= l_73))) == (((safe_lshift_func_int8_t_s_s(func_63(g_296, (g_388 <= (safe_lshift_func_int8_t_s_s(g_150, func_55((l_536 = ((((!l_72) , (g_154 = (((safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(p_53, (p_54 , (-3L)))) & l_73), p_53)) , 0x1233714AL) ^ l_76))) ^ l_535) || (-1L))), g_150, g_382, g_388, g_204)))), g_387), p_52)) | g_387) , g_16));
    p_53 = (safe_div_func_uint32_t_u_u(g_296, 4294967289UL));
    return g_203;
}







static int func_55(int p_56, unsigned char p_57, short p_58, unsigned p_59, unsigned short p_60)
{
    return p_58;
}







static int func_63(int p_64, int p_65, char p_66)
{
    unsigned char l_77 = 255UL;
    int l_78 = 0x581CA928L;
    int l_136 = 0xB1FA0A70L;
    char l_223 = 1L;
    const int l_250 = 1L;
    unsigned short l_279 = 0xA848L;
    char l_325 = 1L;
    char l_444 = (-2L);
    unsigned l_471 = 0xAF70949FL;
    unsigned l_476 = 0x501C377FL;
    short l_483 = 0L;
    unsigned l_496 = 0x0C0C00E2L;
    if (((0UL > l_77) <= (g_79 = (l_78 = (g_62 | g_16)))))
    {
        unsigned char l_90 = 0x97L;
        const int l_95 = 0xACABD119L;
        int l_96 = 0x4A170516L;
        char l_116 = 0x1AL;
        unsigned short l_212 = 0xBB6BL;
        short l_276 = 0L;
        unsigned char l_445 = 0xC4L;
        unsigned char l_466 = 251UL;
        if ((l_96 &= (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_16 >= (safe_lshift_func_int16_t_s_s(0x8CD8L, 1))), ((l_90 = g_79) | (l_77 <= (3L | (p_66 ^ func_55((safe_rshift_func_int8_t_s_s((((g_16 <= (safe_div_func_uint8_t_u_u(l_95, func_55(g_16, g_16, p_65, g_79, g_16)))) | l_78) ^ 0UL), g_62)), l_78, p_66, p_66, l_77))))))), p_64)), 0UL)) >= p_64), 0L))))
        {
            unsigned l_98 = 18446744073709551615UL;
            int l_166 = 0x5F642D8EL;
            unsigned short l_216 = 0x6FC6L;
            unsigned l_265 = 1UL;
            unsigned l_281 = 4294967295UL;
            short l_319 = 0xAF4EL;
            int l_320 = 0xDB0E1881L;
            g_97 |= g_62;
            if (((l_98 , (safe_rshift_func_uint8_t_u_s((p_65 , (((safe_sub_func_int8_t_s_s(func_55(((l_96 |= (((safe_add_func_uint16_t_u_u(l_77, p_66)) < func_55((p_65 && ((g_117 ^= (((safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(p_64, (l_78 |= (1L | ((-1L) >= (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_div_func_uint16_t_u_u((p_65 < 0L), l_77)))) || 0xBBDC2183L), 1L))))))) , g_62), 0x7357L)) > l_98) | l_116)) && 0x2B28L)), g_97, g_79, p_64, l_77)) >= g_62)) < g_97), p_65, p_66, l_90, p_65), 0xC5L)) & 1UL) ^ l_95)), 7))) || p_66))
            {
                unsigned short l_124 = 2UL;
                int l_135 = 0x1309E202L;
                for (g_97 = 0; (g_97 >= 19); ++g_97)
                {
                    char l_137 = 0L;
                    int l_139 = 0L;
                    unsigned char l_153 = 253UL;
                    l_139 = (safe_sub_func_uint32_t_u_u((((p_65 , (safe_sub_func_int32_t_s_s(((l_124 ^= (g_62 = g_16)) | (g_138 = ((65534UL && ((l_135 = (l_96 = func_55(g_97, (g_117 = ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_136 = (safe_mod_func_int8_t_s_s(((l_98 > p_64) >= (safe_rshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((l_78 = (!(l_77 != ((-1L) || p_65)))), l_135)) || l_135) | g_97), 15))), g_16))), p_66)) || l_96), 5)) | p_64)), g_97, g_16, p_65))) , p_66)) <= l_137))), 0L))) , 65527UL) <= 1UL), l_98));
                    l_96 = g_16;
                    p_65 = (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_138 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_65 != 0xD50EL), l_139)), ((((safe_rshift_func_int8_t_s_s(p_64, 6)) , p_65) | l_98) , (g_150 = p_64))))), ((safe_rshift_func_int8_t_s_s(l_98, 3)) ^ (((p_66 & l_78) ^ l_153) <= g_16)))), g_62));
                    g_154 ^= l_96;
                }
                l_96 = 0xD83D76CEL;
                if ((func_55((g_150 ^ l_98), g_154, p_66, func_55(l_98, l_98, g_150, (safe_lshift_func_uint16_t_u_u((((l_136 = ((+(((func_55(g_117, p_66, l_116, g_150, p_64) ^ g_16) || 0xBBL) == 3L)) , p_66)) & g_154) == l_96), l_98)), p_66), l_77) < p_64))
                {
                    unsigned short l_157 = 65528UL;
                    l_166 = func_55((p_65 |= (l_157 != 0L)), (p_64 || l_135), l_96, l_136, (safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(l_135, (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_64, l_135)), g_117)))) | l_78) > l_124), g_154)));
                }
                else
                {
                    short l_168 = 0xAFEBL;
                    g_167 = ((g_117 >= p_66) > 0x86L);
                    if (((l_166 = (((((l_124 || 1L) != ((g_167 < l_168) > l_166)) >= g_167) & (l_98 || 0x4DBE9247L)) | (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_117, 3)), p_64)) >= p_66) , g_16))) || p_65))
                    {
                        p_65 = (-1L);
                        return g_117;
                    }
                    else
                    {
                        return l_168;
                    }
                }
            }
            else
            {
                const unsigned l_173 = 7UL;
                int l_198 = 0x75C09CCCL;
                int l_248 = 1L;
                l_136 = l_173;
                for (l_98 = 0; (l_98 > 42); l_98 = safe_add_func_uint8_t_u_u(l_98, 5))
                {
                    char l_188 = (-1L);
                    for (l_136 = 13; (l_136 <= (-17)); --l_136)
                    {
                        g_197 = (g_167 , (g_62 || (g_16 == (safe_lshift_func_int16_t_s_u(func_55((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_97, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((+0x0315L), l_188)), 9)))), 13)), p_65, (safe_mod_func_int16_t_s_s((l_166 = (safe_lshift_func_uint16_t_u_s(p_65, (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_117, g_167)) >= p_65), l_188))))), l_188)), g_97, g_150), 10)))));
                        l_198 = l_173;
                    }
                }
                for (l_116 = 0; (l_116 <= 11); l_116 = safe_add_func_uint32_t_u_u(l_116, 5))
                {
                    int l_217 = 0xA4866C57L;
                    int l_218 = 0x0CA6FDA0L;
                    int l_219 = 1L;
                    for (g_138 = 8; (g_138 != 20); g_138++)
                    {
                        g_203 ^= 5L;
                        if (l_136)
                            continue;
                    }
                    g_205 ^= (p_66 || ((g_204 &= (g_117 >= g_79)) , p_65));
                    g_220 = (func_55(((((-1L) || func_55((+(p_65 | (((p_66 = 0xF0L) == ((((l_218 |= (l_217 = ((((safe_add_func_uint32_t_u_u((p_65 , ((g_215 = (safe_lshift_func_int16_t_s_s(l_78, ((safe_add_func_uint16_t_u_u(l_212, 0L)) > ((g_117 &= g_204) > ((safe_div_func_uint8_t_u_u(g_203, l_173)) <= 0x07F3L)))))) , l_216)), p_64)) || 253UL) == p_65) , g_154))) <= g_205) >= g_138) != p_65)) & g_138))), l_198, l_198, g_62, l_166)) <= 9L) , 0L), p_65, g_154, l_219, l_173) , l_136);
                    l_166 &= (p_65 || l_219);
                }
                for (p_66 = 29; (p_66 <= 18); p_66 = safe_sub_func_int16_t_s_s(p_66, 6))
                {
                    unsigned l_224 = 0xF19B35F8L;
                    l_136 = g_203;
                    l_224 = func_55(p_64, l_223, g_167, p_64, (l_223 & 1L));
                    g_251 = (((safe_lshift_func_uint16_t_u_u(g_167, ((safe_sub_func_int32_t_s_s(func_55(p_65, p_66, l_224, (g_205 , (safe_rshift_func_uint8_t_u_u(l_78, ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(func_55(p_65, ((safe_add_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((g_205 = (0x4E14L ^ (((((safe_lshift_func_uint8_t_u_u((((l_96 |= ((safe_mul_func_uint16_t_u_u(func_55((g_247 >= g_62), g_154, p_65, g_117, l_248), 0xB306L)) , p_64)) == g_138) || l_96), 1)) , g_249) || 2UL) ^ p_66) , 0xC1E0L))) && g_79), 1L)) , 2UL) >= 0L), p_65)) , 0x78L), l_166, p_66, g_204), 14)), p_64)), l_224)) ^ 0xED5A7014L), l_250)) ^ 0x4A44F27AL)))), l_198), l_166)) < g_138))) >= p_65) >= g_247);
                    if (g_215)
                        continue;
                }
            }
            for (g_79 = (-27); (g_79 >= 60); g_79 = safe_add_func_int16_t_s_s(g_79, 3))
            {
                char l_277 = 0xFBL;
                int l_280 = 3L;
                if ((p_65 , 0xA5955131L))
                {
                    unsigned short l_260 = 65535UL;
                    g_251 = ((((l_136 = l_116) && (!(p_64 != g_117))) , ((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(func_55(l_260, ((safe_mul_func_int16_t_s_s(g_203, l_260)) != p_65), (safe_rshift_func_uint16_t_u_u((l_260 >= (l_260 || 0xFFL)), g_205)), p_66, p_64), 3UL)), 65530UL)) , 65531UL)) & p_64);
                    return l_265;
                }
                else
                {
                    unsigned l_278 = 0x99A9337AL;
                    l_78 ^= (func_55((safe_mul_func_uint8_t_u_u((g_247 = ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_66, ((l_280 ^= (safe_rshift_func_uint16_t_u_u((~(g_138 = ((p_66 >= ((func_55((g_205 , (p_65 <= (l_278 ^= (p_66 | ((g_79 ^ (((safe_mul_func_int16_t_s_s(l_276, (l_136 = ((l_136 == (func_55(l_136, p_66, p_64, p_64, l_250) ^ 0xFE74L)) >= l_277)))) && p_65) ^ p_65)) <= (-1L)))))), l_279, l_212, p_66, g_79) < l_223) == p_64)) >= p_64))), g_154))) , l_250))), g_16)) != l_281)), p_64)), p_65, l_223, l_216, l_98) ^ g_249);
                    for (g_215 = (-23); (g_215 > 4); g_215 = safe_add_func_int8_t_s_s(g_215, 5))
                    {
                        return l_78;
                    }
                    if ((safe_lshift_func_uint16_t_u_s(g_62, 12)))
                    {
                        g_304 = (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((g_251 = (((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((g_296 |= (l_96 = 4294967295UL)) || ((safe_add_func_uint16_t_u_u((1UL < g_150), 0x7DAFL)) , (!((g_303 |= (safe_mod_func_uint32_t_u_u((l_96 = (((l_280 = func_55((p_65 = p_64), p_66, p_66, func_55(g_249, (safe_add_func_int8_t_s_s(g_97, l_212)), p_64, p_64, p_64), p_64)) | g_251) && g_203)), g_150))) , p_65)))) || p_65), (-10L))) , g_247), l_277)) & p_64) | p_66)) , p_66), 0xCB32DCF4L)), g_204)), 6));
                    }
                    else
                    {
                        return p_65;
                    }
                }
                l_136 |= (safe_sub_func_uint16_t_u_u((l_96 ^= ((func_55(l_216, g_138, g_62, (l_78 |= (l_320 &= (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(func_55(((safe_sub_func_int16_t_s_s((g_205 = (safe_sub_func_int8_t_s_s((+l_280), (p_65 != p_65)))), (safe_mul_func_uint16_t_u_u(0x7C5DL, p_64)))) , l_319), p_64, g_204, l_319, l_166), 0x80L)) > 1UL), p_64)), 14)))), g_303) > g_203) , 5UL)), p_66));
            }
        }
        else
        {
            unsigned short l_327 = 7UL;
            int l_378 = 0L;
            int l_380 = 0xE7C90FF4L;
            char l_424 = 1L;
            int l_425 = 0xDB557B02L;
            const unsigned short l_430 = 0xDAFAL;
            char l_457 = 0x33L;
            if ((safe_div_func_uint8_t_u_u((g_247 = g_117), p_64)))
            {
                int l_326 = 0L;
                int l_334 = 0x7469C53BL;
                g_251 = (safe_sub_func_uint16_t_u_u(0x0F07L, ((g_154 >= l_325) & ((((l_78 &= ((l_326 = g_303) > ((func_55((l_327 = (p_65 &= (~p_64))), ((safe_div_func_uint8_t_u_u(0x4CL, (safe_rshift_func_int16_t_s_s(g_303, 2)))) && func_55((safe_div_func_uint8_t_u_u(func_55((l_334 = g_304), l_136, g_303, l_276, p_66), g_117)), p_66, p_66, p_66, p_64)), p_64, p_64, g_16) < 0xB7L) , l_334))) >= g_150) , (-1L)) <= g_117))));
                p_65 = g_296;
            }
            else
            {
                char l_335 = (-1L);
                unsigned char l_354 = 0x62L;
                int l_355 = 0x037B79DAL;
                unsigned l_356 = 0x753BC47FL;
                int l_357 = 0xED0E048CL;
                unsigned char l_360 = 1UL;
                const char l_450 = 0x0BL;
                char l_467 = (-1L);
                l_357 |= ((p_64 , l_335) & (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((func_55(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_220, 4)), (safe_mod_func_int16_t_s_s(l_116, (l_355 = ((func_55(p_65, (safe_mul_func_uint16_t_u_u(((l_90 ^ 3UL) > g_62), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((l_354 = (safe_add_func_int8_t_s_s(p_64, 1UL))) , p_65) & 0x1FD1L), l_212)), 65535UL)))), l_90, g_150, p_66) , g_247) , p_66)))))) , 1L), p_66, g_138, l_356, l_335) < 0x9F4AL) & 1L) >= (-1L)), l_96)), 1)));
                g_251 = ((((l_78 = (safe_mod_func_int8_t_s_s(0xEBL, l_136))) < l_360) & ((p_65 == (l_357 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((func_55(g_367, (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((g_215 = (((g_304 = (l_212 != (p_64 && (safe_sub_func_int32_t_s_s(func_55(l_356, ((safe_sub_func_uint16_t_u_u(((0xE2DDL && l_357) & p_66), g_167)) ^ 0x231FCB92L), g_249, l_250, l_354), p_66))))) ^ 0xA6L) || p_66)) , 5L) | p_66), p_66)), p_65)) != g_367) , g_220), l_354, g_249, l_96) >= g_205), 8L)), l_276)), 3)) == l_335))) > g_167)) && l_327);
                if ((p_65 > (safe_div_func_uint32_t_u_u(g_203, g_251))))
                {
                    char l_379 = (-1L);
                    unsigned l_381 = 1UL;
                    int l_402 = 1L;
                    g_382 |= (0x21L != (((l_380 = ((+g_79) , (l_78 ^= ((((p_64 & (((func_55(g_251, l_378, l_379, (((func_55(p_64, (p_64 , p_64), g_138, l_379, g_249) || g_167) || 0UL) , 4294967295UL), g_150) , l_378) , p_66) & 7L)) | 1UL) , l_276) && g_16)))) >= l_381) <= g_150));
                    if ((g_251 = p_65))
                    {
                        g_388 ^= (l_378 == ((g_251 = g_215) == (l_379 , ((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((l_223 , (0x98L || (((p_64 &= (0xA417L >= (l_136 && ((l_212 , p_65) , g_197)))) , 0UL) | g_387))), l_335)) , g_367), 2)) == g_304))));
                        g_251 = 0xF07905F4L;
                        l_96 ^= (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((((0xBB8A498CL & ((!5L) < func_55(l_90, ((p_66 ^ ((l_402 = (safe_div_func_uint16_t_u_u(((l_78 |= 0x7F4EL) < (g_138 < g_399)), (g_296 ^= (g_167 <= ((g_167 >= g_215) == g_399)))))) , g_154)) , 249UL), g_403, g_304, p_66))) < 0xAFC5FDFFL) <= l_327) && 0xB3D0L) | p_64), 0xCBAA07DBL)), p_64)), 7));
                    }
                    else
                    {
                        unsigned l_422 = 0UL;
                        int l_443 = 0x88D4D547L;
                        l_425 &= (((4294967295UL || (+(safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_367 = ((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(l_212, (safe_mul_func_int16_t_s_s(((g_150 = (l_96 = (safe_unary_minus_func_int32_t_s((((l_380 = (safe_lshift_func_int8_t_s_s(l_90, 1))) & g_197) && ((g_251 = (-6L)) > ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((l_424 = ((p_65 ^ (((g_423 = func_55((g_421 = g_399), l_422, (g_205 = (p_64 != 0L)), p_65, l_212)) | g_247) , 1L)) , p_66)), p_66)), p_64)) & g_197))))))) & g_382), (-8L))))) & p_64), 5UL)) <= l_422)) , l_422), g_249)), 0x0BA9L)))) & p_66) , 1L);
                        g_423 = ((l_402 &= p_66) >= ((l_327 <= (l_96 ^= 0xF7B7L)) < p_64));
                        p_65 = l_223;
                        g_423 &= (safe_rshift_func_int16_t_s_u((!(l_136 = (safe_rshift_func_uint16_t_u_s(g_97, 14)))), (l_430 < (g_62 &= (((((safe_add_func_int16_t_s_s(g_421, (+(safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((l_360 && (safe_lshift_func_int8_t_s_s((p_65 > func_55(g_138, (safe_div_func_uint16_t_u_u((((l_381 , (l_443 = (func_55(g_421, ((safe_sub_func_int16_t_s_s(p_65, l_381)) & l_250), l_250, l_379, p_64) == l_95))) || p_65) && g_79), 0x00F4L)), g_251, l_381, l_444)), l_422))), l_445)), 5))))) || g_220) , l_357) > 2L) > 0UL)))));
                    }
                    l_467 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_55(l_425, g_62, ((l_450 ^ (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((l_380 ^= (~func_55((safe_add_func_int32_t_s_s(((l_357 ^ (p_66 >= l_457)) < ((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((g_423 != 1UL) != (safe_lshift_func_uint16_t_u_u(g_251, 13))), 7)) & g_97), p_66)), g_387)) >= p_65)), p_65)), g_117, g_215, l_425, l_466))), g_204)) <= 65535UL) != 0x0D7BL), l_354))) ^ g_117), l_457, g_138), 11)), l_77));
                    g_251 = 0L;
                }
                else
                {
                    unsigned char l_484 = 0x87L;
                    int l_485 = (-1L);
                    if (((safe_mul_func_int16_t_s_s(0x8738L, g_220)) | g_167))
                    {
lbl_470:
                        p_65 &= g_150;
                        p_65 = g_117;
                    }
                    else
                    {
                        if (l_116)
                            goto lbl_470;
                        return l_471;
                    }
                    l_484 = ((((safe_div_func_uint16_t_u_u(0xDD7DL, g_249)) > (safe_div_func_uint32_t_u_u((func_55(p_66, (l_355 = ((l_476 <= ((safe_lshift_func_int16_t_s_u((p_64 > ((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((+p_64) <= (((p_65 || (g_97 , (p_64 < l_450))) != 0UL) ^ 0xC9DA0943L)), l_90)) , g_423), l_483)) > g_197)), l_355)) != l_357)) && g_304)), g_388, g_303, l_378) , l_466), 4294967295UL))) , p_64) >= 0x8BBBL);
                    l_485 = 0x890C2C49L;
                }
                g_423 = l_360;
            }
        }
    }
    else
    {
        short l_505 = 0x470FL;
        int l_512 = 0x455267EAL;
        l_78 &= (((safe_sub_func_uint8_t_u_u((p_66 , (safe_rshift_func_int16_t_s_s(g_249, 13))), ((~((safe_sub_func_int8_t_s_s((((l_512 = (p_65 = (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(func_55(l_496, l_444, (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((((l_136 = (safe_div_func_int32_t_s_s(l_505, (safe_mod_func_uint16_t_u_u(((((g_388 = func_55(func_55((safe_sub_func_int16_t_s_s(l_223, (safe_add_func_int32_t_s_s(0x016CAA6AL, (g_251 = g_303))))), p_64, g_97, p_64, g_304), l_505, l_505, p_64, p_65)) && 0x02A14680L) ^ l_505) < 0xDFL), p_65))))) <= (-9L)) | l_471), g_16)), 6)), 4)), g_387, l_505), 0L)) < p_66), 0xADL)))) | p_66) , 1L), l_505)) >= l_496)) ^ 0xE27DA52EL))) >= (-1L)) <= 0x48L);
        p_65 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((p_64 || ((0x47A90DA0L || func_55(l_512, (safe_div_func_int8_t_s_s((((g_296 |= 1L) | ((l_505 > (safe_add_func_int32_t_s_s(g_421, ((safe_mod_func_uint32_t_u_u(1UL, l_136)) <= p_65)))) | p_66)) , g_197), g_150)), g_197, l_77, p_65)) != l_444)) >= l_512), p_64)), p_64));
    }
    g_251 = ((safe_sub_func_uint16_t_u_u(g_403, l_77)) > (l_78 &= l_136));
    return g_117;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
