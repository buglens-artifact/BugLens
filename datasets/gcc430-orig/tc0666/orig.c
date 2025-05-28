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



static int g_2 = 0xBAC64A68L;
static int g_90 = (-1L);
static int g_109 = (-1L);
static unsigned short g_111 = 0x9ABEL;
static short g_169 = 0L;
static char g_180 = 0x42L;
static int g_210 = (-5L);
static char g_211 = (-7L);
static int g_235 = 0x9CDA5918L;
static int g_238 = 1L;
static int g_239 = 1L;
static char g_257 = 0L;
static char g_258 = 1L;
static unsigned char g_260 = 5UL;
static unsigned g_301 = 4294967294UL;
static unsigned char g_325 = 0xF5L;
static short g_405 = 0xE8FBL;
static char g_409 = (-1L);
static int g_449 = 8L;
static int g_451 = 0x4773E913L;
static char g_514 = 2L;
static const char g_591 = 0x28L;



static unsigned func_1(void);
static short func_9(unsigned p_10, unsigned p_11, unsigned char p_12, unsigned short p_13, unsigned short p_14);
static short func_23(unsigned char p_24, short p_25, int p_26, int p_27, const short p_28);
static unsigned short func_35(unsigned char p_36, const unsigned p_37);
static int func_38(const unsigned char p_39, unsigned p_40, int p_41);
static unsigned short func_44(short p_45);
static unsigned short func_51(unsigned p_52);
static int func_53(unsigned p_54, unsigned char p_55);
static const char func_57(unsigned p_58, const int p_59, const int p_60, short p_61, unsigned p_62);
static unsigned char func_75(unsigned p_76, int p_77, unsigned char p_78, const char p_79);
static unsigned func_1(void)
{
    int l_22 = 5L;
    unsigned short l_46 = 0x6095L;
    short l_229 = 2L;
    const unsigned short l_432 = 65535UL;
    unsigned l_442 = 0xB4A36ACEL;
    int l_443 = 0xC86451FEL;
    int l_444 = 8L;
    int l_446 = 0x6E64F549L;
    int l_450 = 0L;
    int l_452 = 1L;
    int l_453 = 0xF4F5EA74L;
    unsigned short l_455 = 1UL;
    unsigned l_639 = 0xD5862331L;
    const unsigned l_662 = 0xF49254B5L;
    for (g_2 = 1; (g_2 <= (-9)); g_2 = safe_sub_func_int16_t_s_s(g_2, 2))
    {
        unsigned char l_15 = 0x6BL;
        int l_422 = (-6L);
        l_422 = (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(func_9(g_2, l_15, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(255UL, ((((safe_lshift_func_int16_t_s_s(((((l_22 , 0x1DL) ^ (((func_23(((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((func_35((func_38((safe_sub_func_uint16_t_u_u(func_44(l_46), 0L)), g_2, l_22) , l_229), g_2) , 0x0AL) | g_2), l_229)), l_15)), 0x7DL)) , 250UL), g_238, g_2, l_15, g_238) <= (-7L)) | 65535UL) , g_2)) & 0xE2E9L) < 0x5BL), 2)) | 0x54DCL) , l_229) , g_211))), 3)), g_2, l_15), 0x47FFL)), l_15));
    }
lbl_593:
    g_239 |= (!((-7L) && ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((((safe_sub_func_int32_t_s_s(g_210, g_409)) > (g_258 > 0x13L)) >= (func_53(((safe_rshift_func_int8_t_s_u((((((-7L) || (0x48FBCABFL <= func_75(((((func_51((g_409 ^ (safe_rshift_func_uint16_t_u_u(l_432, g_210)))) > g_235) & l_22) , g_257) != l_22), l_432, l_22, l_46))) | l_22) , 1L) | g_409), l_22)) != l_46), l_22) | g_238)))) >= g_211), g_258)) > 65532UL)));
    if (((safe_add_func_int8_t_s_s(((0x1F3FL == (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u(((g_211 != ((l_229 , func_38(l_22, (g_2 <= l_46), ((safe_div_func_int16_t_s_s(((func_23(l_432, func_23(g_210, g_258, l_229, g_409, l_432), l_22, l_432, l_229) > g_257) <= 0xCBDF80C4L), l_22)) < 4L))) != 0xAFA89BE3L)) == l_442), 4)) , l_229) > g_109), 6)) , 8L)))) , 0L), g_405)) | l_442))
    {
        int l_445 = 2L;
        int l_447 = (-10L);
        int l_448 = (-1L);
        int l_454 = 1L;
        unsigned l_474 = 0x6A73992DL;
        int l_475 = 0x4C7B6337L;
        ++l_455;
        l_475 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(func_57(((((safe_lshift_func_int8_t_s_u((-1L), 5)) <= (l_229 != ((g_238 <= ((!(g_210 || (((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(func_44(l_442), (safe_lshift_func_int16_t_s_u(func_38(l_442, (safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(g_257, l_432)) > g_405) | g_258) || 0x00B22DD9L), 4L)), g_405), 5)))) != g_301), l_452)) | 0x5692L) ^ l_474))) || 4294967290UL)) >= l_432))) < 0xD5ECA1ECL) ^ 6UL), l_444, l_443, l_229, g_325), g_325)) && 0xF67E2228L), l_445));
    }
    else
    {
        unsigned l_476 = 0x63BB3515L;
        unsigned char l_478 = 250UL;
        unsigned l_502 = 0xD76B6B50L;
        int l_516 = 0xC41AD271L;
        int l_539 = (-2L);
        int l_590 = 0x594981EAL;
        if (l_476)
        {
            char l_477 = 0x65L;
            ++l_478;
        }
        else
        {
            int l_487 = 0x1B7AEE73L;
            char l_492 = 0xFDL;
            char l_501 = 0x9FL;
            int l_512 = 0x84A840CEL;
            int l_513 = 0x108EA281L;
            unsigned char l_531 = 0x28L;
            unsigned short l_534 = 65535UL;
            g_239 = (safe_div_func_int8_t_s_s((((l_476 < ((((l_455 != 1UL) && (l_432 <= (l_452 && (safe_add_func_int32_t_s_s(((1L == g_238) ^ (safe_mod_func_int8_t_s_s((0x69DC55CDL >= ((~((((0xF17C7B48L == g_409) , 4294967288UL) & 0xDCAEE7E8L) , l_455)) != g_405)), 252UL))), l_487))))) , g_238) ^ 0x5EAEFBCFL)) & 0xAA0BL) , g_210), g_409));
            g_235 = ((g_258 < (safe_sub_func_uint32_t_u_u((g_2 , (safe_add_func_int8_t_s_s((l_492 >= ((safe_lshift_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s((0xAAAEA858L >= (func_75((!(safe_rshift_func_int8_t_s_u(func_23(((safe_add_func_int32_t_s_s(l_443, g_239)) >= l_501), g_238, l_502, g_405, g_210), l_478))), g_235, l_450, l_501) | g_239)), (-1L))) , 249UL) <= g_449) > g_449) , g_405), g_109)) | (-1L))), g_211))), 6UL))) != l_476);
            g_235 = g_238;
            if ((0x48L <= (~g_409)))
            {
                short l_505 = (-1L);
                int l_511 = 0x03EBD15CL;
                for (g_451 = 15; (g_451 < 21); g_451++)
                {
                    unsigned l_508 = 0UL;
                    int l_515 = 0x33E4131CL;
                    int l_524 = 5L;
                    g_238 = (func_75((l_505 || (g_257 == 0UL)), ((g_260 ^ (func_38(l_505, (l_487 > (safe_rshift_func_uint8_t_u_s(l_502, g_239))), g_235) | 0x150264A9L)) >= l_443), l_444, g_111) , l_508);
                    for (l_478 = 8; (l_478 >= 24); l_478 = safe_add_func_uint32_t_u_u(l_478, 9))
                    {
                        unsigned char l_517 = 0x0EL;
                        l_517--;
                        l_524 = func_23(g_260, g_514, ((-1L) > (safe_lshift_func_uint8_t_u_u((+(safe_lshift_func_uint8_t_u_s(g_90, 5))), (func_38(((l_512 , 0xFC9181AFL) , (func_53(g_109, l_505) > 0UL)), g_235, g_325) | 0x9EFEL)))), l_511, g_169);
                    }
                    for (g_180 = 0; (g_180 != (-9)); --g_180)
                    {
                        g_235 = (+(func_57(g_514, (g_405 , (0xA542L > (l_505 == (safe_lshift_func_int8_t_s_s((l_505 || (l_444 ^ (l_524 , g_238))), 1))))), (((g_111 , l_502) >= 0L) <= 0xD8FAL), l_531, l_505) , 0x52BFB4BCL));
                        l_511 = l_455;
                    }
                }
            }
            else
            {
                unsigned char l_540 = 0x97L;
                for (l_442 = 0; (l_442 == 2); l_442 = safe_add_func_int16_t_s_s(l_442, 6))
                {
                    l_534++;
                    for (g_258 = (-20); (g_258 < 28); g_258++)
                    {
                        return l_512;
                    }
                    --l_540;
                }
                l_516 = ((safe_rshift_func_int8_t_s_u(0xF5L, ((g_111 > (safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((0x483EL & ((-2L) >= (((((l_513 , g_2) >= (l_540 != l_442)) ^ (safe_add_func_uint32_t_u_u(1UL, 0xFE483CA4L))) < l_516) > g_409))) < 65535UL), l_22)) || 0x6648L), 1))) < l_453))) & g_235);
            }
        }
        g_2 = (safe_div_func_int32_t_s_s(g_409, ((l_442 ^ g_260) || 4294967286UL)));
        for (l_452 = 0; (l_452 == 25); l_452 = safe_add_func_uint8_t_u_u(l_452, 7))
        {
            unsigned l_557 = 4UL;
            int l_572 = 0x78678FEAL;
            g_235 = (func_23((((g_109 > g_260) ^ g_325) , ((((g_211 || (l_443 == ((g_451 != (safe_add_func_uint8_t_u_u(((g_258 , 0xCC15L) , (0x47L || l_557)), g_239))) < g_449))) <= l_557) & g_109) || g_451)), l_502, g_449, g_325, l_557) | g_257);
            l_516 ^= func_38((safe_rshift_func_int16_t_s_u(g_258, l_46)), ((safe_lshift_func_int8_t_s_u(g_258, 1)) & g_325), l_455);
            for (g_451 = 5; (g_451 == 23); g_451 = safe_add_func_int16_t_s_s(g_451, 8))
            {
                short l_585 = 0x7C74L;
                if (((l_502 != ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_516, 1)), 6)) >= g_180)) , 0x39BEC882L))
                {
                    unsigned short l_581 = 0UL;
                    for (g_109 = (-26); (g_109 != (-30)); g_109 = safe_sub_func_int32_t_s_s(g_109, 6))
                    {
                        l_572 = (safe_rshift_func_uint16_t_u_u(9UL, 10));
                        return l_443;
                    }
                    if (g_180)
                        break;
                    for (g_239 = (-15); (g_239 >= (-2)); g_239 = safe_add_func_uint8_t_u_u(g_239, 6))
                    {
                        unsigned l_592 = 0x68B5FCE3L;
                        g_235 ^= ((l_516 && g_258) , (((safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(func_57((l_581 , (safe_unary_minus_func_int16_t_s(((l_557 <= g_2) ^ ((safe_mod_func_int16_t_s_s((l_572 | l_444), (l_572 , l_444))) , l_476))))), g_210, l_572, l_585, l_581), 0xFDL)))) != 0x78L) != l_453), l_585)) >= l_581) < (-9L)));
                        l_572 &= (safe_div_func_int32_t_s_s((1UL < func_57((((g_409 < 0xCEL) & g_169) & (safe_mod_func_uint32_t_u_u((((7L == l_452) ^ (((g_2 == (l_590 > (((l_444 >= g_405) == g_451) , 0x3A5D9CD9L))) & g_301) && g_211)) == g_90), l_46))), g_591, l_585, l_592, l_478)), l_557));
                        g_90 = g_238;
                        if (g_258)
                            goto lbl_593;
                    }
                }
                else
                {
                    g_90 = (((0x07L != g_325) > g_409) , g_257);
                }
                for (g_405 = 25; (g_405 < 3); g_405 = safe_sub_func_int8_t_s_s(g_405, 1))
                {
                    unsigned l_598 = 0x695D255FL;
                    for (l_453 = (-30); (l_453 != 11); l_453++)
                    {
                        char l_619 = 0xE0L;
                        l_446 = ((((0L >= l_598) , g_257) & (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_257, 3UL)), ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((l_444 >= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(g_2, (((safe_sub_func_int8_t_s_s((1L == (0xB4EFL >= 65527UL)), 0x86L)) <= l_557) | g_238))), g_169))) <= g_260), g_514)), g_238)) <= g_257), g_2)) , l_598)))) , g_111);
                        g_2 = (((safe_add_func_int8_t_s_s(g_109, ((safe_div_func_uint8_t_u_u((~l_619), l_455)) & 0xFBL))) <= (safe_mod_func_uint8_t_u_u((((func_53(l_598, g_405) , (func_38(g_180, l_598, l_572) > l_598)) , g_449) ^ 0x97L), (-8L)))) && g_109);
                    }
                    for (l_450 = 0; (l_450 != 13); l_450 = safe_add_func_int16_t_s_s(l_450, 4))
                    {
                        unsigned l_638 = 0xE02F3A05L;
                        g_235 = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(func_51(g_239), 5)) == g_260), 14)), (safe_lshift_func_uint8_t_u_u((func_38(l_476, (3L == ((safe_sub_func_uint8_t_u_u((g_109 > (0x459773ACL >= func_38(((((safe_mod_func_uint32_t_u_u((l_590 < (((safe_div_func_uint32_t_u_u(g_257, 4294967289UL)) , g_405) != l_638)), g_409)) ^ 1UL) || l_539) , 1UL), g_210, l_585))), 0xCAL)) != l_590)), l_598) == 0x55L), 1)))) , l_585);
                        if (g_90)
                            continue;
                        l_453 = 4L;
                        l_572 |= l_585;
                    }
                }
                l_22 ^= l_639;
            }
            g_238 = (g_257 <= ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((g_258 < (safe_lshift_func_int16_t_s_u((g_257 , ((4294967291UL <= func_75(((safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_452, (l_478 && (safe_div_func_int8_t_s_s(0x93L, (~g_260)))))), ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(1UL, l_452)), l_502)), g_257)) & g_409))), l_662)) , g_257), l_450)) ^ 0x80L), l_557, l_446, g_238)) > l_22)), l_450))) , 0xBDL), l_590)), l_516)) <= g_514));
        }
    }
    return g_111;
}







static short func_9(unsigned p_10, unsigned p_11, unsigned char p_12, unsigned short p_13, unsigned short p_14)
{
    short l_293 = 0x7F48L;
    int l_294 = (-5L);
    int l_295 = 0x8A86DAA8L;
    int l_296 = 0xFCF270A3L;
    int l_297 = 0x650ACC4DL;
    int l_298 = 0L;
    int l_299 = 0xC9F6F6BEL;
    int l_300 = 0xD36820E1L;
    const char l_324 = 6L;
    unsigned char l_363 = 1UL;
    char l_384 = 0x9EL;
    short l_386 = 0x7C4AL;
    short l_393 = 0x47FDL;
    ++g_301;
lbl_368:
    l_297 |= (l_294 >= (p_12 , (((((((safe_unary_minus_func_uint8_t_u(p_11)) | (~l_299)) , (5UL || p_12)) ^ (((g_238 || l_300) < p_11) >= 0x898C7DA1L)) || g_239) || g_2) && l_300)));
lbl_413:
    for (p_10 = 18; (p_10 > 36); p_10++)
    {
        unsigned l_326 = 0x27DA15CDL;
        unsigned l_364 = 0xA8FA5A96L;
        int l_377 = 0xFB503A67L;
        unsigned l_385 = 18446744073709551615UL;
        int l_404 = (-1L);
        int l_408 = (-8L);
        unsigned l_410 = 0xFF6F10F7L;
        for (g_239 = 0; (g_239 <= (-6)); g_239--)
        {
            int l_337 = 0x24805C14L;
            int l_351 = 0x3359C2F6L;
            int l_380 = (-1L);
            for (l_297 = 0; (l_297 <= 7); l_297 = safe_add_func_int32_t_s_s(l_297, 3))
            {
                unsigned l_323 = 0xEB618804L;
                g_235 ^= (((func_44((safe_div_func_int16_t_s_s(p_13, (safe_add_func_uint16_t_u_u((g_169 < ((safe_lshift_func_uint16_t_u_u(((-1L) != (safe_add_func_uint32_t_u_u(((g_257 , (l_293 > func_53((1UL == p_13), (p_12 , (safe_rshift_func_uint16_t_u_u(65535UL, 7)))))) < l_323), 9UL))), 6)) , 0L)), 0x6537L))))) < l_324) && g_325) != 0UL);
            }
            if (p_10)
                break;
            --l_326;
            if (((safe_rshift_func_int8_t_s_u(((p_11 > (((safe_rshift_func_uint16_t_u_u(l_294, (safe_lshift_func_int8_t_s_u(p_11, ((((g_257 <= (safe_add_func_int32_t_s_s(((~p_14) && l_337), ((7L | (p_10 & (l_337 > g_325))) >= l_337)))) , g_301) == 0xCDCB93CDL) == p_14))))) | 1L) != l_324)) , 0L), 1)) , p_13))
            {
                unsigned short l_350 = 0xC5F3L;
                if ((l_337 != ((safe_add_func_int32_t_s_s((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((p_13 < (p_13 & (safe_mod_func_uint16_t_u_u(l_296, (func_51(((((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((p_13 && (l_326 && 1UL)) & 250UL) == l_326), g_325)), g_2)) ^ l_350) >= g_180) && g_257)) , g_301))))), l_350)) & p_14), l_351)) == 0x2CL) , p_13), 0UL)) & p_10)))
                {
                    int l_352 = 0x8A4F390BL;
                    l_297 ^= (((l_352 <= p_13) != p_10) && ((safe_add_func_uint16_t_u_u(func_23(g_257, ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_169 , ((safe_div_func_int16_t_s_s((g_260 <= (-1L)), func_53((func_57(g_257, (safe_mod_func_int8_t_s_s(((4294967295UL ^ g_2) , 0xB2L), l_326)), p_12, l_351, p_10) , 18446744073709551615UL), g_180))) , g_258)) <= p_12), l_293)), l_363)) == p_12), p_10, g_260, p_11), p_11)) , l_364));
                    for (g_109 = 0; (g_109 < 21); g_109++)
                    {
                        int l_367 = 8L;
                        l_367 ^= g_235;
                        g_235 = ((p_14 , l_352) == p_13);
                    }
                }
                else
                {
                    const unsigned l_376 = 0x07C9F123L;
                    l_300 = (-1L);
                    if (l_300)
                        goto lbl_368;
                    if ((g_258 >= p_10))
                    {
                        unsigned l_375 = 0x74F38294L;
                        l_296 = (((safe_div_func_int8_t_s_s((0x35765BA5L <= ((safe_lshift_func_uint8_t_u_u((((p_14 , 0UL) != 0x8E2EAF07L) , p_10), func_23(l_375, (+(((g_211 & func_38(l_376, l_363, p_11)) || l_324) >= p_14)), p_13, g_260, p_11))) != 0x636BL)), 0x69L)) || l_293) , g_211);
                        if (l_375)
                            break;
                        l_377 = g_111;
                    }
                    else
                    {
                        unsigned l_381 = 0x9C512B72L;
                        g_235 = ((safe_sub_func_uint8_t_u_u(func_38(p_10, l_380, l_326), ((((func_57(l_381, g_211, (((func_75((((p_10 && (safe_sub_func_int8_t_s_s(g_238, p_14))) ^ 0xC4F6L) & 0xB4L), l_381, l_384, l_376) <= 3L) != 6UL) ^ 0x0A10L), g_210, l_385) || 1L) != 0UL) <= l_350) >= 0x76DEBBE8L))) , (-1L));
                    }
                    l_299 = 0L;
                }
                if (g_235)
                    goto lbl_413;
                return p_13;
            }
            else
            {
                l_386 |= g_180;
            }
        }
        for (g_235 = (-1); (g_235 >= 19); g_235++)
        {
            unsigned l_394 = 0x9EBB42E2L;
            int l_397 = 0xDA5F0321L;
            int l_401 = (-4L);
            int l_402 = 1L;
            int l_403 = 5L;
            int l_406 = 0x83C6933AL;
            int l_407 = 0xE4A13989L;
            l_299 = (+((g_90 ^ g_109) <= 0x1EL));
            l_397 &= (((func_38(((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(g_211, 5)) || (((!l_386) | ((l_393 && (l_394 || l_393)) < g_239)) , (safe_mod_func_uint32_t_u_u(((0xAEL > l_295) , (g_109 > g_260)), 0xC2995D31L)))) != g_260), g_238)) <= p_10), l_377, p_11) , 0x7DL) < (-1L)) <= p_10);
            for (l_364 = 10; (l_364 != 21); l_364 = safe_add_func_int32_t_s_s(l_364, 2))
            {
                unsigned short l_400 = 8UL;
                l_400 = g_301;
            }
            l_410++;
        }
    }
    l_298 = (((p_13 >= l_393) <= (((safe_sub_func_int32_t_s_s(((!g_109) & (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((l_298 ^ (safe_div_func_uint16_t_u_u(((p_14 , g_257) ^ (l_386 >= func_35(g_109, g_238))), l_298))) && p_13), p_10)) != p_12), 0x059FL))), 3L)) && p_14) && l_300)) != p_10);
    return g_258;
}







static short func_23(unsigned char p_24, short p_25, int p_26, int p_27, const short p_28)
{
    char l_248 = 0x0CL;
    int l_249 = (-9L);
    char l_250 = 0x19L;
    int l_251 = 0L;
    int l_252 = 0x8173DE08L;
    int l_253 = 7L;
    int l_254 = 0x55A8641CL;
    int l_255 = 6L;
    int l_256 = 0x29398376L;
    int l_259 = 0xF5FB2979L;
    unsigned char l_291 = 0x92L;
    unsigned short l_292 = 0xECE9L;
    for (g_210 = 13; (g_210 < (-15)); g_210 = safe_sub_func_int32_t_s_s(g_210, 1))
    {
        unsigned l_247 = 18446744073709551615UL;
        if (l_247)
            break;
    }
    --g_260;
    p_26 = (((safe_mod_func_int8_t_s_s((func_51(((safe_add_func_int32_t_s_s(0xCD7B2C77L, (0x8AL <= 0x53L))) && (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((((l_253 != (0x89D1L != (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((9L ^ (g_238 != ((safe_rshift_func_uint16_t_u_s(func_57((safe_div_func_int8_t_s_s((g_169 || (((((safe_mod_func_int16_t_s_s(((((p_24 <= g_238) || p_27) , l_254) , p_24), g_90)) < g_239) && 0UL) & l_250) <= p_26)), l_252)), g_235, l_253, p_28, p_26), 6)) == g_238))) >= 0x4FL), l_291)), g_109)))) , 4294967293UL) , g_2) | l_250) ^ l_292), p_25)), (-3L))), g_109)), l_251)) && 4294967295UL), 0)))) ^ l_252), 0x1AL)) <= 0xA2BFAC57L) && g_235);
    return g_180;
}







static unsigned short func_35(unsigned char p_36, const unsigned p_37)
{
    unsigned char l_234 = 250UL;
    int l_236 = 0xFE7AA4ADL;
    int l_237 = 0x83C10CCCL;
    int l_240 = 0x7D7E8CB1L;
    unsigned short l_241 = 1UL;
    int l_244 = 0x3B9E9AA0L;
    g_235 ^= (5UL || func_38((safe_rshift_func_int16_t_s_u((((!4L) <= (safe_add_func_int8_t_s_s((0xEFL == g_210), func_57(g_169, p_37, g_211, (p_37 == p_36), p_37)))) ^ (-3L)), l_234)), g_211, l_234));
    l_241--;
    return l_244;
}







static int func_38(const unsigned char p_39, unsigned p_40, int p_41)
{
    unsigned short l_227 = 0UL;
    int l_228 = (-2L);
    l_227 ^= (0x98L == 0x23L);
    return l_228;
}







static unsigned short func_44(short p_45)
{
    unsigned l_47 = 0x738F5859L;
    int l_48 = 0xFE924F63L;
    l_48 = l_47;
    g_211 |= ((0UL && (!((func_51(l_47) | (((safe_sub_func_int8_t_s_s((-1L), l_48)) , ((safe_lshift_func_int8_t_s_s(((g_2 < ((l_48 && (l_48 | ((safe_div_func_uint32_t_u_u(7UL, 0x89851559L)) , l_48))) >= g_210)) | p_45), p_45)) , 65535UL)) != l_48)) == 0xF799L))) < l_48);
    for (g_109 = (-24); (g_109 < (-20)); g_109 = safe_add_func_uint16_t_u_u(g_109, 3))
    {
        const int l_218 = 0x1964D514L;
        for (g_90 = 0; (g_90 > (-18)); g_90--)
        {
            return g_90;
        }
        g_90 = ((safe_add_func_int8_t_s_s((l_218 | (safe_rshift_func_uint16_t_u_u(0UL, 2))), (0x81L || g_211))) && (-10L));
        for (g_90 = 0; (g_90 < (-24)); g_90 = safe_sub_func_int8_t_s_s(g_90, 7))
        {
            g_210 = (0xDA2C960BL <= (p_45 | (((((g_111 < ((((l_47 == p_45) ^ g_90) | g_109) > (g_111 | (safe_add_func_uint8_t_u_u(g_169, l_218))))) != g_109) , p_45) <= p_45) != 0xA6L)));
        }
        g_90 |= p_45;
    }
    return p_45;
}







static unsigned short func_51(unsigned p_52)
{
    unsigned short l_56 = 0x0254L;
    int l_170 = 0x0B3D9A39L;
    int l_181 = 1L;
    l_181 &= func_53(((((l_56 , (func_57(((((((l_56 && p_52) , ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((p_52 > ((g_2 , (safe_add_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u(func_75((safe_mod_func_int16_t_s_s(g_2, l_56)), (((safe_mod_func_int16_t_s_s((g_2 <= (safe_rshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(((~l_56) , p_52), p_52)) ^ l_56), p_52)) <= 1L) > 0xB0L), 4))), 0x5EF1L)) || l_56) , (-2L)), l_56, g_2), p_52)) || 0xCDL) > g_2), 4294967288UL))) > p_52)), 0x9897L)), p_52)) > l_56), p_52)) <= g_2)) | g_2) , p_52) , g_90) & g_2), g_2, p_52, l_56, g_2) , p_52)) != g_109) , l_170) || p_52), p_52);
    for (l_170 = 0; (l_170 >= (-30)); l_170 = safe_sub_func_int32_t_s_s(l_170, 4))
    {
        const unsigned l_193 = 0x9F0C8DDAL;
        for (g_180 = 0; (g_180 == 9); g_180++)
        {
            short l_188 = 0xD0C3L;
            l_181 |= func_75((g_109 || (func_57(p_52, ((safe_rshift_func_uint8_t_u_s(func_75(p_52, g_111, l_188, (g_90 , ((l_188 , (safe_div_func_int32_t_s_s(((-4L) || (safe_rshift_func_int16_t_s_s((g_90 , g_109), g_111))), 1L))) == g_90))), 3)) <= g_2), l_193, p_52, l_56) , g_111)), p_52, g_180, p_52);
        }
    }
    l_181 = ((((p_52 >= (((safe_rshift_func_int16_t_s_s(((l_56 > (safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(l_181, l_181)) >= ((safe_sub_func_uint32_t_u_u((l_170 ^ 0x88L), (safe_lshift_func_int16_t_s_s((-2L), 11)))) >= 0xE7F2L)), l_170))) != 0x11L), p_52)) , p_52) ^ 0x23L)) | p_52) , 0UL) & p_52);
    return g_169;
}







static int func_53(unsigned p_54, unsigned char p_55)
{
    int l_173 = 0L;
    g_180 ^= ((safe_lshift_func_uint8_t_u_s(l_173, 4)) > (0x8FAA5422L > (safe_sub_func_uint8_t_u_u((p_55 & (safe_div_func_int32_t_s_s(((((~(((safe_div_func_int16_t_s_s(0L, l_173)) , g_2) > g_2)) , 0xEE28L) , ((((+l_173) || 6L) != p_55) , p_55)) <= (-9L)), 4294967288UL))), g_90))));
    l_173 = 0xC5922DC5L;
    l_173 &= 1L;
    return l_173;
}







static const char func_57(unsigned p_58, const int p_59, const int p_60, short p_61, unsigned p_62)
{
    int l_96 = 0x233FFCD5L;
    char l_98 = 1L;
    int l_103 = 1L;
    int l_110 = 0xD145C15DL;
    unsigned l_116 = 0x9589AB98L;
    for (p_61 = 0; (p_61 < 2); p_61 = safe_add_func_uint8_t_u_u(p_61, 6))
    {
        char l_97 = 0xD1L;
        l_97 = l_96;
        l_98 = g_90;
        if (g_90)
            continue;
        l_103 = func_75(g_2, g_2, (((safe_lshift_func_int16_t_s_s(((-2L) ^ ((g_90 > p_62) != (g_2 , l_98))), l_97)) == ((safe_add_func_int16_t_s_s(l_96, l_98)) && 9L)) && p_58), l_97);
    }
    if ((safe_add_func_uint32_t_u_u(0UL, (0xA3C8L ^ (safe_sub_func_uint8_t_u_u(0x55L, g_90))))))
    {
        char l_108 = 0xEBL;
        int l_114 = 0xE9F7A6BAL;
        short l_115 = 3L;
        g_111--;
        ++l_116;
    }
    else
    {
        unsigned short l_119 = 0xAB14L;
        unsigned char l_134 = 0xBEL;
        unsigned l_142 = 7UL;
        int l_144 = (-9L);
        if (g_2)
        {
            ++l_119;
        }
        else
        {
            unsigned char l_122 = 255UL;
            int l_143 = (-1L);
            short l_168 = 2L;
            g_90 = l_122;
            for (g_111 = (-7); (g_111 != 60); g_111 = safe_add_func_uint8_t_u_u(g_111, 1))
            {
                unsigned short l_135 = 1UL;
                const int l_141 = 0x1B46CB94L;
                if ((safe_lshift_func_uint8_t_u_s((((l_119 ^ g_90) >= (safe_mod_func_int8_t_s_s(g_90, (safe_sub_func_uint32_t_u_u(p_60, (+(((g_111 ^ (l_116 , (g_111 > (((safe_unary_minus_func_uint32_t_u(((((safe_div_func_uint8_t_u_u(l_134, ((g_2 , g_2) ^ p_60))) <= p_59) != l_119) >= l_96))) , l_116) , l_135)))) & p_62) <= g_90))))))) , l_134), l_119)))
                {
                    char l_138 = 0xB8L;
                    if (g_2)
                        break;
                    l_143 = ((safe_add_func_int16_t_s_s((func_75(((((p_58 | func_75(((g_90 > l_96) > ((l_138 && g_109) != (safe_rshift_func_int16_t_s_u((((-4L) <= (g_2 , l_141)) && ((g_2 < p_59) | l_122)), g_2)))), g_111, g_2, g_90)) || l_110) != p_60) || l_141), g_2, l_142, p_62) > l_135), g_109)) && l_103);
                }
                else
                {
                    l_144 ^= 1L;
                }
                if (l_144)
                    continue;
                for (l_110 = 0; (l_110 < 23); l_110 = safe_add_func_int8_t_s_s(l_110, 8))
                {
                    char l_159 = 0x06L;
                    for (l_134 = 0; (l_134 < 58); l_134 = safe_add_func_uint16_t_u_u(l_134, 4))
                    {
                        l_143 = (safe_rshift_func_uint16_t_u_s(((p_59 , (p_59 , (safe_sub_func_uint16_t_u_u(((g_109 != g_90) , func_75(p_59, g_111, l_144, (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((0L == (func_75((((safe_lshift_func_uint8_t_u_s((func_75((((((g_2 && g_109) | l_119) & 0x1FL) && g_111) , 0UL), p_58, p_58, g_2) || (-1L)), 6)) < l_143) || l_135), l_159, p_61, g_111) & 0xFF7FA166L)) || p_62), p_62)), 0x2BCFL)))), p_59)))) , 1UL), 4));
                    }
                }
                g_169 |= func_75(l_141, ((p_62 > g_90) == (safe_div_func_uint16_t_u_u((p_61 == g_90), (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_60, ((((safe_add_func_uint8_t_u_u(0x95L, ((p_58 & g_109) || l_96))) | l_135) > 0L) >= p_58))), p_61))))), l_168, l_168);
            }
        }
    }
    return p_59;
}







static unsigned char func_75(unsigned p_76, int p_77, unsigned char p_78, const char p_79)
{
    unsigned l_91 = 18446744073709551609UL;
    g_90 = p_76;
    l_91--;
    return g_2;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
