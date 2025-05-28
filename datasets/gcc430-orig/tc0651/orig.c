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
   unsigned f0 : 27;
   unsigned f1 : 4;
};

union U1 {
   unsigned char f0;
   unsigned f1;
};

union U2 {
   const unsigned char f0;
   unsigned : 0;
   unsigned char f1;
};


static union U2 g_10 = {248UL};
static struct S0 g_12 = {10863,0};
static unsigned char g_60 = 0x2DL;
static union U1 g_68 = {0UL};
static struct S0 g_74 = {5197,1};
static int g_127 = 0x42197F42L;
static unsigned char g_165 = 0xAEL;
static unsigned char g_185 = 2UL;
static unsigned char g_222 = 5UL;
static char g_237 = 3L;
static unsigned g_238 = 9UL;
static unsigned g_250 = 0xA7642D4FL;
static char g_262 = 0L;
static unsigned short g_273 = 65535UL;
static unsigned short g_284 = 0xDB4BL;
static int g_309 = 0xA367CD0BL;
static unsigned short g_311 = 1UL;
static unsigned char g_321 = 9UL;
static unsigned char g_327 = 248UL;
static int g_348 = 0x20364D17L;
static int g_349 = 0xFE2B376DL;
static unsigned g_352 = 0xD334360CL;
static unsigned char g_388 = 248UL;
static unsigned g_404 = 0xC336C0EEL;
static unsigned g_422 = 6UL;
static short g_475 = (-6L);
static unsigned short g_478 = 6UL;
static char g_491 = 0x79L;
static int g_492 = 4L;
static char g_494 = (-6L);
static int g_495 = 1L;
static unsigned g_524 = 0x4E475A22L;
static unsigned char g_528 = 255UL;
static short g_564 = 1L;
static int g_565 = 0x450562DBL;
static unsigned g_566 = 3UL;
static char g_579 = 0xB2L;
static const unsigned char g_632 = 249UL;
static unsigned short g_643 = 65535UL;
static unsigned short g_670 = 0x4F9AL;
static short g_812 = 0xCD8AL;
static short g_813 = 0xEF62L;
static int g_814 = 0x9246D72CL;
static unsigned short g_816 = 0UL;
static short g_832 = 0xC54DL;
static char g_833 = 0xEDL;
static short g_835 = 0x00C3L;
static unsigned short g_838 = 0xD975L;
static unsigned char g_882 = 0xC6L;
static char g_940 = (-4L);
static unsigned short g_981 = 0x62EEL;
static int g_1005 = 0xAA33D911L;
static char g_1006 = 0x6AL;
static short g_1007 = 0L;
static char g_1009 = 0x67L;
static unsigned char g_1010 = 0x97L;
static short g_1029 = (-9L);
static unsigned g_1055 = 0x6AE8B054L;
static unsigned short g_1123 = 3UL;
static const union U1 g_1171 = {0x07L};
static short g_1281 = (-4L);
static unsigned short g_1283 = 0xEF2EL;



static int func_1(void);
static unsigned char func_5(union U2 p_6, union U2 p_7, struct S0 p_8, short p_9);
static unsigned char func_17(int p_18, const union U1 p_19);
static const union U1 func_20(unsigned p_21, const unsigned short p_22, unsigned p_23, const unsigned p_24, unsigned char p_25);
static const short func_28(int p_29, unsigned p_30, union U1 p_31);
static const unsigned short func_34(struct S0 p_35, unsigned p_36, char p_37, int p_38, unsigned p_39);
static unsigned func_41(union U1 p_42, unsigned p_43, unsigned short p_44);
static union U1 func_45(unsigned short p_46);
static unsigned func_61(short p_62, union U1 p_63, short p_64, char p_65, unsigned p_66);
static const unsigned short func_71(union U1 p_72);
static int func_1(void)
{
    int l_4 = 0xF9ACF257L;
    union U2 l_11 = {0xC1L};
    unsigned l_942 = 0xFCE1A791L;
    unsigned short l_943 = 65535UL;
    int l_997 = 0xD8B0F2C7L;
    struct S0 l_1017 = {6164,3};
    struct S0 l_1018 = {546,3};
    union U1 l_1032 = {0x26L};
    unsigned l_1090 = 4294967295UL;
    struct S0 l_1286 = {3306,3};
    unsigned l_1293 = 0x3F78601CL;
    l_943 = ((0x38L >= (4294967287UL != ((safe_rshift_func_uint16_t_u_s((l_4 & (func_5(g_10, l_11, g_12, (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_10.f1, func_17(l_4, func_20(l_11.f0, l_11.f1, g_10.f1, g_10.f0, l_11.f0)))) & g_564), g_10.f0))) <= 0xF9L)), g_12.f0)) & l_11.f0))) ^ l_942);
lbl_947:
    for (g_284 = (-20); (g_284 >= 15); g_284 = safe_add_func_int16_t_s_s(g_284, 1))
    {
        struct S0 l_946 = {3488,3};
        l_946 = g_12;
        if (g_566)
            goto lbl_947;
    }
lbl_1126:
    for (g_833 = 0; (g_833 > 21); g_833 = safe_add_func_uint16_t_u_u(g_833, 7))
    {
        int l_956 = 0xBC2ECDB4L;
        unsigned short l_1080 = 65531UL;
        unsigned l_1104 = 0xD584F524L;
        g_127 |= g_10.f1;
        for (g_494 = 9; (g_494 <= 0); g_494--)
        {
            for (g_352 = 23; (g_352 == 35); g_352 = safe_add_func_int32_t_s_s(g_352, 9))
            {
                return l_11.f0;
            }
            return g_74.f0;
        }
        g_495 = l_943;
        for (g_262 = 24; (g_262 != 14); g_262 = safe_sub_func_int32_t_s_s(g_262, 9))
        {
            unsigned l_976 = 4294967287UL;
            unsigned char l_995 = 0x43L;
            int l_996 = (-4L);
            unsigned short l_998 = 65534UL;
            if (((g_475 && func_71(g_68)) != (func_71(func_45((l_942 < g_284))) < (~(l_956 != func_71(g_68))))))
            {
                unsigned l_961 = 18446744073709551615UL;
                struct S0 l_978 = {9830,1};
                for (l_4 = (-21); (l_4 > 27); l_4 = safe_add_func_uint8_t_u_u(l_4, 8))
                {
                    union U1 l_975 = {1UL};
                    struct S0 l_977 = {1101,1};
                    for (g_579 = (-14); (g_579 == (-15)); g_579 = safe_sub_func_int32_t_s_s(g_579, 2))
                    {
                        l_961++;
                        g_127 ^= ((safe_unary_minus_func_uint16_t_u(g_321)) ^ ((((((safe_sub_func_uint8_t_u_u(g_74.f1, ((safe_sub_func_int8_t_s_s((-1L), (g_566 & 2UL))) || (g_565 & (((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(g_495, g_670)) >= (func_71(func_45((safe_mod_func_uint16_t_u_u(func_71(l_975), l_976)))) && 0x03BBL)), l_956)) && 0xA9FA14F0L) <= 0x0853A978L))))) < 0x49L) && g_273) < 4UL) == 0xA110L) || l_956));
                        g_12 = l_977;
                        l_978 = g_12;
                    }
                }
                for (g_528 = 21; (g_528 < 59); g_528++)
                {
                    char l_986 = 6L;
                    l_4 = ((((g_981 || (((((((0x4C0E0B0CL != (g_643 < l_956)) <= ((1UL < 254UL) && (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((func_71(g_68) == func_71(func_45(g_670))), g_492)), g_632)))) >= l_956) | g_165) == g_565) && 0xCC4667E2L) || 1L)) < l_986) || 0L) && 0x4BL);
                }
                for (g_564 = 0; (g_564 != (-16)); g_564 = safe_sub_func_uint32_t_u_u(g_564, 3))
                {
                    l_996 = (safe_lshift_func_uint8_t_u_s(((+g_309) > (((func_71(g_68) < (safe_mod_func_int32_t_s_s(0xFBACA19DL, (safe_lshift_func_int16_t_s_u(func_71(g_68), (l_976 ^ g_311)))))) <= ((l_976 != g_222) & 1UL)) == g_60)), l_995));
                }
                --l_998;
            }
            else
            {
                const unsigned short l_1001 = 0UL;
                int l_1008 = 0xF0E32480L;
                if (l_11.f0)
                {
                    l_996 = 0x7E89B253L;
                }
                else
                {
                    int l_1004 = 0xCBA1D160L;
                    l_997 |= l_1001;
                    for (g_814 = 0; (g_814 <= 4); g_814 = safe_add_func_int32_t_s_s(g_814, 3))
                    {
                        --g_1010;
                    }
                    if (g_422)
                        break;
                }
                for (g_68.f1 = 22; (g_68.f1 == 39); g_68.f1 = safe_add_func_uint16_t_u_u(g_68.f1, 5))
                {
                    struct S0 l_1019 = {785,1};
                    for (g_352 = 0; (g_352 <= 30); g_352++)
                    {
                        l_1017 = g_12;
                        if (l_1008)
                            break;
                        g_12 = l_1018;
                        g_12 = l_1019;
                    }
                }

                                if ((6UL == ((g_835 >= (0x0C0BL && l_11.f1)) || 0xFFFCBF65L)))
                {
                    union U1 l_1028 = {1UL};
                    g_565 = l_1008;
                    l_996 = (safe_sub_func_uint32_t_u_u((g_565 || func_71(g_68)), g_10.f0));
                    g_1029 |= (l_943 || (l_943 ^ (safe_add_func_int32_t_s_s(0L, (((safe_rshift_func_int16_t_s_s((0UL & (l_1001 <= ((safe_rshift_func_int8_t_s_u(g_524, (1UL > (g_838 & ((func_71(l_1028) > l_956) || (-1L)))))) > g_478))), 14)) == g_643) & l_956)))));
                    l_956 ^= (func_71(g_68) && (!(safe_rshift_func_int8_t_s_u(func_71(l_1032), ((g_1007 ^ g_1009) && (l_1028.f0 != ((safe_lshift_func_uint8_t_u_u(func_71(g_68), g_404)) < g_1007)))))));
                }
                else
                {
                    unsigned char l_1038 = 0xFAL;
                    int l_1053 = 1L;
                    int l_1054 = (-1L);
                    unsigned char l_1072 = 248UL;
                    if (g_127)
                    {
                        unsigned char l_1035 = 0xD5L;
                        g_74 = g_74;
                        l_1035--;
                    }
                    else
                    {
                        struct S0 l_1039 = {9923,2};
                        l_1008 ^= l_1038;
                        g_12 = l_1039;
                    }
                    if (l_1038)
                        break;
                    if (g_632)
                    {
                        unsigned char l_1052 = 0xACL;
                        l_1052 = (((safe_add_func_int32_t_s_s(func_71(g_68), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((0x6A3C380BL & 0L) > ((l_956 || ((-7L) < 0L)) ^ ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_1005, 0xFB0F9A2FL)), 4294967294UL)), 3)) && l_1008))), 14)), 1)))) != g_222) != l_1001);
                        if (g_349)
                            continue;
                        return g_566;
                    }
                    else
                    {
                        if (l_956)
                            break;
                        ++g_1055;
                        l_1053 = (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_10.f1, func_71(g_68))), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(1UL, g_565)), ((g_579 < 0xCCEC671AL) | 0x6FL))), ((0x7F636C6DL > l_1001) >= 0xE465E764L))), 6))));
                        l_1008 = (g_284 >= (g_12.f1 != (((safe_sub_func_int16_t_s_s((l_995 & (l_1072 != ((+((g_237 != l_1008) & l_1001)) & ((g_643 && ((safe_lshift_func_int8_t_s_s(((func_71(func_45(g_492)) <= l_976) | g_60), 5)) > l_998)) >= g_833)))), g_309)) != l_1008) || l_956)));
                    }
                }
            }
            l_996 = (-1L);
            g_495 = l_996;
            if (g_12.f1)
            {
                char l_1077 = (-8L);
                g_495 = (((-3L) ^ (safe_lshift_func_uint8_t_u_u((l_1077 || (65532UL != (((g_835 > 253UL) && l_1077) != (g_10.f0 < g_494)))), (safe_add_func_uint16_t_u_u((0x68CFL & 0xAA48L), l_1080))))) ^ l_996);
                if ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_1080, l_996)) <= g_579), (func_71(g_68) >= l_11.f1))), (0xC4L <= (l_995 | (safe_sub_func_uint8_t_u_u(((0x2E7059C6L ^ g_388) == g_494), l_996)))))))
                {
                    unsigned char l_1089 = 1UL;
                    if (l_1089)
                        break;
                    l_1090 = l_942;
                }
                else
                {
                    l_997 &= (!(safe_sub_func_int8_t_s_s(g_494, 0xF3L)));
                    if (l_1018.f1)
                    {
                        g_309 = (-9L);
                    }
                    else
                    {
                        return g_579;
                    }
                    g_565 |= g_238;
                }
            }
            else
            {
                unsigned char l_1093 = 255UL;
                g_348 = (g_491 && l_1093);
                g_348 &= func_71(func_45((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((l_956 > ((safe_sub_func_int8_t_s_s(0xD6L, (254UL & (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1080, 2)), 0))))) == func_71(l_1032))), 1)), l_1104))));
                l_956 |= g_579;
            }
        }
    }
    if (((safe_rshift_func_int16_t_s_s(l_11.f0, 10)) != (-8L)))
    {
        int l_1111 = 1L;
        union U1 l_1116 = {0xD8L};
        unsigned short l_1119 = 1UL;
        int l_1122 = (-1L);
        unsigned short l_1211 = 0x6B59L;
        struct S0 l_1213 = {10348,1};
        int l_1280 = 0x74E686EBL;
        int l_1298 = (-10L);
        unsigned short l_1327 = 0UL;
        union U1 l_1343 = {0UL};
        unsigned l_1349 = 0xCF3E26D7L;
        l_997 = g_528;
        g_348 &= (safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((l_1111 | (safe_add_func_int8_t_s_s((g_262 & g_643), (safe_sub_func_int16_t_s_s((!(func_71(l_1116) > (safe_add_func_int32_t_s_s(((((0x5DL ^ func_71(l_1032)) & l_11.f0) & l_1111) || l_4), g_1009)))), 7UL))))) < l_1119), l_1111)) && 0x888E9B7BL), (-2L)));
        if ((func_61(g_10.f0, func_45((safe_sub_func_int8_t_s_s(g_1006, g_311))), g_833, g_495, g_528) < ((((l_1017.f0 & l_1122) > (-7L)) & l_11.f1) & g_1123)))
        {
            char l_1140 = 8L;
            union U1 l_1186 = {0x6CL};
            char l_1210 = 0x18L;
            int l_1212 = 0x1C069759L;
            for (l_1032.f1 = 15; (l_1032.f1 != 5); l_1032.f1 = safe_sub_func_int8_t_s_s(l_1032.f1, 9))
            {
                short l_1141 = (-9L);
                int l_1142 = 0xF0DC5380L;
                if ((0x9816BFF5L <= 0UL))
                {
                    unsigned short l_1135 = 0x0D38L;
                    g_1005 |= func_17(g_348, func_45(l_1017.f0));
                    if (g_10.f0)
                        goto lbl_1126;
                    l_1141 |= (func_41(func_20((safe_lshift_func_int16_t_s_u((func_17((((((g_238 & (safe_lshift_func_uint16_t_u_s(((g_524 == (safe_rshift_func_int8_t_s_s(0x6AL, (safe_rshift_func_uint16_t_u_u(func_71(func_45(g_579)), l_1135))))) | ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(0x9C01L, 0xE3E9L)), 6)) || l_942)), g_348))) | (-6L)) ^ g_348) != g_816) == 0x93E5DCF4L), g_68) >= g_10.f1), l_1140)), g_475, g_812, g_833, l_1140), l_1140, g_1029) == l_1135);
                }
                else
                {
                    l_1142 &= (-1L);
                    return g_478;
                }
                for (g_327 = 0; (g_327 >= 23); g_327 = safe_add_func_uint16_t_u_u(g_327, 4))
                {
                    short l_1154 = 0xED4DL;
                    int l_1163 = 0L;
                    for (g_814 = 0; (g_814 <= (-12)); g_814 = safe_sub_func_uint32_t_u_u(g_814, 1))
                    {
                        struct S0 l_1147 = {2621,2};
                        l_1147 = g_74;
                        g_12 = l_1018;
                    }
                    l_1163 = ((l_1141 != (safe_sub_func_uint16_t_u_u(g_816, ((safe_lshift_func_uint16_t_u_u(((((g_492 | 0x2A99C62AL) ^ 0x38A3AFB0L) || 9UL) != (((safe_sub_func_int16_t_s_s(l_1154, (safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((g_835 && ((safe_mod_func_int16_t_s_s(5L, 0x0BC1L)) > l_1140)), g_1009)) > l_1111), l_1140)))) && g_422) ^ 0L)), l_1140)) && 8L)))) >= g_491);
                    if (g_1055)
                        break;
                }
                return g_309;
            }

                        for (g_1055 = 0; (g_1055 < 6); ++g_1055)
            {
                unsigned l_1168 = 0x3B86B390L;
                int l_1172 = 1L;
                union U1 l_1192 = {255UL};
                for (g_1029 = 0; (g_1029 <= 13); ++g_1029)
                {
                    return g_1123;
                }
                if ((func_17(func_61(l_1168, l_1032, (safe_lshift_func_int8_t_s_s(((func_61(l_1119, g_68, func_71(func_45(g_404)), g_882, l_1119) || l_1119) && g_564), 3)), g_237, l_4), g_1171) ^ g_284))
                {
                    l_1172 = g_250;
                    return l_1140;
                }
                else
                {
                    unsigned char l_1189 = 5UL;
                    g_1005 &= (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(0xC499ACE2L)), (safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((g_1055 ^ g_237), l_1172)) < l_943), 0xC7DFD803L)), ((1UL < ((safe_add_func_uint16_t_u_u((+(func_41(l_1186, (safe_mod_func_int32_t_s_s(1L, l_1189)), l_11.f1) || g_404)), (-7L))) == l_1140)) > 0xDEL))) ^ l_1119) & l_1189), 4294967295UL))));
                    g_1005 = l_1186.f0;
                    g_348 = g_12.f0;
                    for (g_494 = 10; (g_494 >= (-23)); g_494 = safe_sub_func_uint16_t_u_u(g_494, 1))
                    {
                        unsigned short l_1195 = 2UL;
                        g_348 &= l_1116.f0;
                        l_1195 = ((func_71(l_1192) ^ 0x6CL) >= (safe_sub_func_int16_t_s_s(9L, (g_632 && (func_71(g_1171) ^ func_71(l_1192))))));
                        if (g_185)
                            break;
                    }
                }
            }
            g_127 = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((0x67263824L || l_1017.f0), l_1186.f0)), ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((g_68.f0 == ((~g_352) == ((safe_lshift_func_uint8_t_u_u((((l_11.f0 == ((255UL >= (safe_unary_minus_func_int8_t_s((func_71(l_1186) | l_1210)))) >= l_1018.f0)) > l_1111) <= 0x0A97L), 6)) != l_1211))))), l_1111)), 1UL)) == g_1171.f0))) < 0UL);
            l_1212 ^= (g_237 || g_643);
        }
        else
        {
            unsigned l_1216 = 0xE8E1167BL;
            short l_1222 = 0x3A3DL;
            int l_1282 = (-1L);
            union U1 l_1336 = {0x0AL};
            l_1017 = l_1213;
            if ((l_1111 == l_997))
            {
                unsigned short l_1221 = 65535UL;
                for (g_565 = 0; (g_565 == 11); g_565 = safe_add_func_uint32_t_u_u(g_565, 6))
                {
                    g_309 ^= (l_1216 ^ 6L);
                    return g_12.f0;
                }
                g_495 = (((safe_add_func_uint32_t_u_u(((g_1005 < ((((((safe_add_func_int16_t_s_s(l_1216, (l_1216 != (g_813 < l_1017.f0)))) > l_1221) & g_348) | 1L) || 0x1B21L) & 0xCBL)) >= g_565), l_1122)) | 9UL) <= l_1222);
            }
            else
            {
                unsigned short l_1223 = 65533UL;
                union U2 l_1267 = {0x95L};
                struct S0 l_1268 = {139,0};
                short l_1276 = 0x2595L;
                char l_1279 = 0x67L;
                g_565 = l_1211;
                if ((65535UL | ((g_321 | l_1223) != (((safe_unary_minus_func_int8_t_s(func_71(l_1032))) ^ g_495) && g_127))))
                {
                    const short l_1251 = 0xB280L;
                    union U1 l_1252 = {0UL};
                    l_1122 = func_28(((l_1018.f1 <= (safe_lshift_func_uint16_t_u_u((l_1119 != ((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((~(safe_sub_func_uint16_t_u_u((l_1223 && (safe_lshift_func_int8_t_s_u(((g_832 == (safe_rshift_func_int8_t_s_s(g_475, 3))) && ((((l_997 >= g_495) >= (safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0xDB4615E4L != (safe_add_func_int8_t_s_s((l_1216 & g_632), l_1251))), 7)), l_1122)) == 65527UL), 0xBD4CL))) >= g_475) > g_816)), l_1251))), l_4))) | g_813), l_1223)), g_492)) != 0xBDFDL) <= 0xD3L), 1)), 1UL)) & l_1211) > l_1223), g_832)) || g_528)), 4))) & l_1223), g_127, l_1252);
                    for (l_1122 = 0; (l_1122 == (-7)); --l_1122)
                    {
                        return l_942;
                    }
                }
                else
                {
                    const unsigned char l_1273 = 7UL;
                    l_4 = g_524;
                    g_1005 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((g_528 && (func_5(l_1267, g_10, l_1268, func_28(l_1222, (!(1UL || (((func_17(g_816, func_45((safe_lshift_func_int8_t_s_u(g_262, (func_71(l_1116) <= 0xD2D7L))))) <= l_1211) | 4294967295UL) < g_564))), g_1171)) != g_1123)) | l_1222), 1)) && g_10.f0), g_492)), 0x54BBL)) != l_1267.f1) || g_238), 0x3EL)), l_1273)), 0x093CL));
                }
                g_127 = g_250;
                g_565 = (((l_1211 < ((l_1216 < ((246UL != func_61((safe_sub_func_int32_t_s_s(func_28(((-5L) >= (((((l_1276 > (((safe_add_func_int32_t_s_s((l_1017.f1 < g_262), func_71(g_1171))) != l_1268.f1) && 0x45A3L)) >= 65529UL) && l_1268.f0) ^ g_833) > l_1216)), l_1216, l_1116), 4294967295UL)), g_1171, l_1111, g_981, l_1279)) == 0xC7L)) >= g_1055)) | l_1223) || (-9L));
            }
            g_1283++;
            if (func_34(l_1286, g_813, l_1213.f1, (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(2UL, (l_1090 && 0x4AL))), (l_1282 > (safe_sub_func_uint16_t_u_u(g_327, l_1213.f1))))), g_237))
            {
                l_1298 &= (l_1280 && func_34(g_74, g_127, l_1293, g_494, ((safe_sub_func_uint16_t_u_u((0x5B4DL && ((l_1122 & ((((safe_rshift_func_uint8_t_u_s(l_1216, 7)) <= 0x1AL) ^ g_1029) && 0x6DL)) > g_833)), g_1006)) <= 0x7FBBDF2EL)));
            }
            else
            {
                unsigned l_1311 = 1UL;
                int l_1317 = 2L;
                struct S0 l_1320 = {24,0};
                union U1 l_1321 = {255UL};
                if ((((safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0x09333C84L, (!g_1281))) <= g_422), ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_4 >= (safe_sub_func_int16_t_s_s((-1L), (l_1211 ^ g_422)))), 7)), l_1216)) < (g_284 >= 1UL)))) ^ 0x72L) ^ g_12.f0))
                {
                    int l_1316 = 0L;
                    const union U1 l_1324 = {0x33L};
                    struct S0 l_1328 = {2895,2};
                    if (g_632)
                    {
                        g_348 ^= (l_1222 ^ (g_579 ^ ((safe_sub_func_uint16_t_u_u(((l_1311 || l_1018.f1) | 0x65A1F435L), (safe_add_func_int8_t_s_s(g_491, (((safe_lshift_func_int16_t_s_s((((g_1009 < ((l_1316 != ((0x33L && l_1111) || l_1316)) & g_1281)) && l_1317) ^ l_1316), 11)) <= 0x4EL) != 0x2DL))))) || g_1010)));
                        g_1005 ^= (func_17((((((safe_mod_func_int8_t_s_s(((func_61(func_5(g_10, g_10, l_1320, l_1216), l_1321, (safe_rshift_func_uint8_t_u_s(g_835, 7)), (g_833 >= (g_12.f1 && g_10.f1)), g_404) > g_812) & l_1222), 252UL)) ^ l_4) && 0x1C10B1ECL) >= 65535UL) >= g_1009), l_1324) >= g_492);
                        g_309 = ((safe_sub_func_int8_t_s_s(g_565, l_1327)) > g_311);
                    }
                    else
                    {
                        g_12 = l_1328;
                        g_1005 &= g_1123;
                    }
                    l_1282 = g_127;
                    for (g_838 = 0; (g_838 < 13); g_838++)
                    {
                        const unsigned char l_1333 = 1UL;
                        l_1017 = g_74;
                        g_1005 = func_34(l_1213, (safe_add_func_uint16_t_u_u(0x3ED5L, (l_1333 <= ((l_1282 > 0xDD00A875L) >= (g_10.f1 & g_1009))))), func_28(((1L <= ((safe_add_func_uint8_t_u_u(0xA9L, l_1321.f0)) >= l_1333)) | l_1018.f0), l_1324.f0, l_1336), l_1018.f0, g_882);
                    }
                    for (g_68.f1 = (-12); (g_68.f1 != 11); g_68.f1++)
                    {
                        unsigned l_1348 = 0xD024EFD1L;
                        g_309 = (safe_rshift_func_uint16_t_u_s(((0x409F8D29L && (safe_rshift_func_int8_t_s_s((func_71(l_1343) == (l_1282 | (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_237, ((!((l_1348 && l_1032.f0) | func_71(l_1343))) & g_352))) && g_311), (-1L))))), l_1282))) < g_68.f1), l_942));
                        if (g_185)
                            break;
                        l_1320 = g_74;
                    }

                                    }
                else
                {
                    g_565 = l_1349;
                }
                for (g_832 = 0; (g_832 < (-4)); g_832 = safe_sub_func_uint8_t_u_u(g_832, 2))
                {
                    unsigned char l_1352 = 0x2EL;
                    if (l_1352)
                        break;
                }
                l_997 = g_495;
                l_1282 = l_1311;
            }
        }
    }
    else
    {
        unsigned char l_1353 = 0x9CL;
        l_1353++;
    }
    return l_1286.f1;
}







static unsigned char func_5(union U2 p_6, union U2 p_7, struct S0 p_8, short p_9)
{
    unsigned char l_895 = 0xD4L;
    union U1 l_908 = {0x34L};
    int l_913 = 1L;
    --l_895;
    l_913 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_273, func_71(g_68))), (((safe_mod_func_uint16_t_u_u(l_895, (safe_sub_func_uint16_t_u_u(g_60, ((safe_sub_func_uint16_t_u_u(func_71(l_908), (((safe_rshift_func_uint8_t_u_u(g_185, 4)) <= (safe_sub_func_uint8_t_u_u((l_908.f0 <= p_6.f0), 3L))) && l_908.f0))) & l_895))))) != l_895) || 0x90A87CF5L)));
    if (((safe_lshift_func_uint8_t_u_u((((l_908.f0 >= 0x27FDL) < ((2UL && g_812) | p_6.f1)) || (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((((p_6.f1 <= l_913) >= 0x88871AC0L) >= 1UL) ^ 3L), p_8.f0)) > p_6.f1) < g_835), 65529UL)), 0)), 3))), l_895)) ^ 0x942DL))
    {
        struct S0 l_926 = {9812,3};
        union U1 l_929 = {247UL};
        g_565 &= (safe_lshift_func_uint16_t_u_s((func_34(l_926, g_352, l_926.f1, (safe_sub_func_uint32_t_u_u(l_926.f0, g_327)), l_913) || func_28(g_68.f0, l_926.f1, l_929)), l_926.f0));
    }
    else
    {
        unsigned char l_941 = 0UL;
        l_941 = (p_9 & (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_7.f1, func_41(func_45(p_8.f0), (safe_sub_func_uint32_t_u_u((((0xDDD6L | (((safe_rshift_func_uint8_t_u_u(4UL, p_6.f1)) >= ((safe_rshift_func_int8_t_s_s(0L, 4)) != (g_838 ^ p_9))) <= g_835)) == p_7.f0) | p_7.f1), 0L)), g_940))), 12)));
    }
    return p_6.f1;
}







static unsigned char func_17(int p_18, const union U1 p_19)
{
    unsigned l_596 = 4294967295UL;
    int l_653 = 0x7043BEBCL;
    int l_660 = 0xC5DABB08L;
    int l_664 = 0x533807A9L;
    int l_665 = 0x92552B37L;
    int l_669 = (-1L);
    struct S0 l_723 = {6189,1};
    unsigned l_807 = 0x1AF4199FL;
    unsigned l_826 = 1UL;
    if (p_19.f0)
    {
        unsigned short l_588 = 65533UL;
        union U1 l_603 = {0xEFL};
        struct S0 l_614 = {1496,2};
        char l_615 = 0x1EL;
        int l_641 = (-1L);
        int l_659 = 1L;
        int l_661 = 0x376CFE39L;
        int l_667 = 0x8C0A4E7AL;
        unsigned char l_718 = 0xCEL;
        char l_760 = (-1L);
        int l_772 = 6L;
        unsigned char l_806 = 0x08L;
        int l_830 = 2L;
        int l_831 = 0x00E8978BL;
        int l_834 = 0x82B569D4L;
        int l_837 = (-1L);
        if (((func_41(p_19, l_588, g_349) | l_588) <= 7L))
        {
            int l_593 = 7L;
            unsigned l_636 = 0xC11E12D3L;
            int l_663 = (-4L);
            int l_668 = 0x98A87C7AL;
lbl_606:
            l_593 = ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_19.f0, l_593)) >= (safe_sub_func_uint16_t_u_u(p_18, 0x1866L))), 3)) < (+1L));
            --l_596;
            if ((safe_sub_func_uint8_t_u_u(((((g_321 != ((safe_sub_func_int8_t_s_s(l_588, 0xDBL)) & 0xBE88L)) > (+(((func_71(p_19) > func_71(l_603)) == (safe_sub_func_uint32_t_u_u((0xA5L != g_185), l_596))) && g_491))) & p_18) <= 0xDFL), l_596)))
            {
                g_74 = g_74;
lbl_689:
                if (g_311)
                    goto lbl_606;
            }
            else
            {
                unsigned l_609 = 0x3C4A2D4EL;
                int l_612 = 0xFC88EDF3L;
                struct S0 l_613 = {11558,2};
                g_127 |= (safe_lshift_func_int16_t_s_u(l_609, 13));
                g_309 = p_18;
                for (g_404 = 26; (g_404 >= 38); g_404 = safe_add_func_uint32_t_u_u(g_404, 6))
                {
                    unsigned l_618 = 2UL;
                    int l_638 = (-8L);
                    int l_639 = 0x2C3C3448L;
                    struct S0 l_646 = {2028,3};
                    l_612 &= (0xAA4AL || l_588);
                    if (g_321)
                        break;
                    l_613 = g_12;
                    if (func_34(l_614, p_19.f0, l_615, p_19.f0, (+(safe_sub_func_int16_t_s_s((0xE62CL == (l_618 >= g_321)), (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(0x67L, ((((((safe_rshift_func_int16_t_s_u(((p_18 == 0xAA72L) | g_321), l_612)) || l_593) == l_612) | p_18) | p_19.f0) < 0x173EL))), g_10.f1)))))))
                    {
                        unsigned l_625 = 0x6084EBBEL;
                        ++l_625;
                        g_309 &= p_19.f0;
                        g_127 ^= (g_566 & (safe_sub_func_int16_t_s_s((g_10.f1 != (safe_rshift_func_int8_t_s_s((((p_18 != 0x88L) < l_625) && (p_19.f0 && (l_596 > p_19.f0))), 3))), (p_19.f0 & g_165))));
                    }
                    else
                    {
                        union U1 l_633 = {0x3FL};
                        int l_637 = 0L;
                        int l_640 = (-1L);
                        int l_642 = 0xECA0BAE1L;
                        l_636 = (((func_28(g_321, (g_632 == (((0xE67FL >= ((func_71(l_633) > ((+l_609) & (((safe_mod_func_uint32_t_u_u((p_19.f0 && g_495), l_613.f0)) || g_12.f0) & (-1L)))) != 0x107AE89FL)) || 0xFF1B1C92L) < l_618)), p_19) && l_603.f0) || l_633.f0) > p_19.f0);
                        g_643++;
                        g_495 = g_564;
                        g_74 = l_646;
                    }
                }
            }
            for (g_273 = 0; (g_273 == 16); g_273++)
            {
                char l_657 = 1L;
                int l_679 = 0xDADA4406L;
                g_348 |= l_596;
                for (g_321 = (-22); (g_321 >= 18); g_321++)
                {
                    char l_662 = 0xAFL;
                    int l_666 = 0xAA89CE8FL;
                    l_653 = (safe_rshift_func_int16_t_s_s((0L == p_19.f0), 9));
                    l_653 = g_632;
                    for (g_495 = (-26); (g_495 < (-17)); g_495 = safe_add_func_int16_t_s_s(g_495, 1))
                    {
                        unsigned short l_656 = 0x5DF1L;
                        int l_658 = 0L;
                        l_593 = p_18;
                        l_657 = l_656;
                        l_658 = p_19.f0;
                    }
                    g_670++;
                }
                l_679 ^= (l_657 == (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(func_71(func_45(g_284)), 4)) | l_657), 4)) >= g_311), p_18)));
                for (l_669 = (-15); (l_669 > (-16)); --l_669)
                {
                    int l_688 = 0x3A46A3ABL;
                    g_127 = ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(func_71(func_45(g_670)), ((((safe_sub_func_uint16_t_u_u((l_668 > (~p_18)), g_10.f0)) && g_262) > (0x891DFDC1L | ((p_18 <= l_636) | 4294967288UL))) & p_19.f0))) | g_404), l_679)) <= p_19.f0);
                    if (l_688)
                    {
                        if (l_661)
                            break;
                        g_74 = g_74;
                        if (l_603.f0)
                            goto lbl_689;
                        l_667 ^= (g_309 || ((g_321 <= g_74.f0) ^ func_71(func_45((p_19.f0 == (safe_sub_func_uint8_t_u_u(g_60, ((((((safe_add_func_int32_t_s_s(((-1L) | (1UL && (safe_sub_func_uint32_t_u_u((func_71(func_45((l_679 == ((l_657 != p_18) == g_222)))) > p_19.f0), g_524)))), g_311)) || 0x13L) != p_18) <= 0x76L) | 0x39L) > g_349))))))));
                    }
                    else
                    {
                        if (l_679)
                            break;
                        g_348 = func_71(g_68);
                    }
                }
            }
        }
        else
        {
            unsigned char l_710 = 8UL;
            const short l_737 = 1L;
            int l_765 = 1L;
            short l_768 = 2L;
            struct S0 l_801 = {8274,2};
            union U1 l_809 = {0xC2L};
            struct S0 l_811 = {2059,3};
            int l_829 = 3L;
            int l_836 = 1L;
lbl_819:
            if ((safe_lshift_func_uint8_t_u_u((0x91L && ((((0x6DF8L || (((safe_sub_func_int8_t_s_s(g_68.f0, ((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((0x0FFDL == (-1L)), g_564)) ^ (l_588 < (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((func_71(g_68) && l_588), 5)) | l_664) && g_127), g_185)) && l_667), p_19.f0)) & g_250) == p_18))), l_615)) | 0x97F2CDFCL))) != l_710) && 0xC8L)) != 0x5512L) <= 0xCC6BE954L) & g_348)), g_309)))
            {
                short l_736 = 0xE241L;
                union U1 l_738 = {0x27L};
                if (((safe_unary_minus_func_int32_t_s(((p_18 < (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(p_18, (g_74.f0 >= (safe_add_func_int32_t_s_s(0L, p_18))))) >= 1UL), (((0x67L ^ ((g_74.f1 >= (g_492 == p_18)) >= g_185)) != l_718) | l_660)))) | 0UL))) > p_19.f0))
                {
                    unsigned l_719 = 2UL;
                    int l_722 = 0x51C489FDL;
                    l_719 = p_19.f0;
                    for (l_615 = 3; (l_615 < 21); l_615 = safe_add_func_uint8_t_u_u(l_615, 4))
                    {
                        g_565 &= (func_34(g_74, func_71(g_68), l_710, g_566, func_71(g_68)) != l_661);
                        l_722 = 0L;
                    }
                }
                else
                {
                    unsigned char l_732 = 0x11L;
                    int l_739 = (-1L);
                    struct S0 l_757 = {183,1};
                    if (p_19.f0)
                    {
                        return p_19.f0;
                    }
                    else
                    {
                        unsigned short l_730 = 0xA7F2L;
                        union U1 l_731 = {0x43L};
                        union U1 l_733 = {0xA3L};
                        g_565 &= func_34(l_723, p_19.f0, ((-1L) == ((((safe_mod_func_int16_t_s_s(p_19.f0, (safe_sub_func_int16_t_s_s(((0x3DABL > (safe_rshift_func_int8_t_s_u(p_18, 3))) ^ (func_34(g_74, p_19.f0, g_352, l_730, g_348) == l_661)), 0x9696L)))) == p_18) == p_19.f0) == p_19.f0)), l_730, l_710);
                        l_739 |= (func_61(l_710, l_731, l_732, func_71(l_733), (safe_sub_func_uint8_t_u_u(l_736, (l_737 | (func_71(l_738) || g_74.f1))))) < g_12.f1);
                        g_127 = (((0x81L <= (safe_mod_func_int32_t_s_s(g_632, 1UL))) && ((safe_sub_func_int32_t_s_s(p_18, g_352)) < (safe_sub_func_uint32_t_u_u((func_71(func_45(((safe_add_func_uint32_t_u_u(0xEA80BB46L, (((-3L) == l_730) <= ((safe_sub_func_int8_t_s_s(p_19.f0, 0xA1L)) >= p_18)))) ^ l_739))) ^ 0xC5E300A0L), l_730)))) ^ g_492);
                    }
                    if (func_61((((0xAA977918L < (~(0x34007997L >= (l_739 == (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((0x19C4D017L == (g_566 < (p_19.f0 & l_736))), (l_718 | ((4294967294UL == g_491) && g_524)))) ^ p_19.f0), p_19.f0)), g_273)))))) || l_710) <= l_603.f0), p_19, l_661, p_19.f0, l_739))
                    {
                        struct S0 l_756 = {6278,3};
                        l_757 = l_756;
                    }
                    else
                    {
                        l_664 = (~0x4F196690L);
                    }
                }
                g_348 = g_74.f1;
                g_74 = g_74;
                if ((0x4AF2L <= (((p_19.f0 > l_603.f0) ^ (safe_rshift_func_int8_t_s_s((l_760 != p_19.f0), ((((0xEBA0DE83L || (safe_rshift_func_int16_t_s_u(((((-1L) < l_737) || ((safe_rshift_func_uint16_t_u_s((g_237 > g_273), p_18)) >= 0x4F23L)) >= p_18), 15))) >= g_475) == g_127) & 0x7061L)))) != (-6L))))
                {
                    unsigned char l_769 = 5UL;
                    int l_773 = 0x4431029FL;
                    l_765 = (p_18 || (g_564 != p_18));
                    l_773 ^= (safe_sub_func_uint8_t_u_u((g_404 > func_41(p_19, l_669, (l_603.f0 != (l_768 | (l_738.f0 < l_769))))), (((((safe_mod_func_uint16_t_u_u(((((g_528 < 0UL) < p_19.f0) < (-8L)) > l_661), p_19.f0)) >= 4294967294UL) >= 0xE0L) | l_737) != l_772)));
                }
                else
                {
                    g_309 = (+g_321);
                    return l_738.f0;
                }
            }
            else
            {
lbl_778:
                g_348 = (g_404 > (safe_add_func_int16_t_s_s(g_632, (g_566 > func_71(l_603)))));
            }
            for (p_18 = 0; (p_18 > (-28)); p_18--)
            {
                short l_787 = (-6L);
                const unsigned l_794 = 0x5C06ACA1L;
                if (g_311)
                {
                    short l_791 = 0x2394L;
                    l_614 = l_614;
                    if (g_74.f0)
                        goto lbl_778;
                    g_565 &= ((safe_sub_func_uint8_t_u_u(p_19.f0, g_273)) == (p_18 || l_615));
                    g_495 |= (!((g_12.f1 == ((safe_lshift_func_uint16_t_u_u(0xB984L, 4)) <= g_311)) ^ ((l_737 & func_71(func_45(((safe_mod_func_int8_t_s_s(g_524, ((safe_lshift_func_uint16_t_u_u((p_19.f0 != (l_787 && g_165)), ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(0x8E1A79D7L)), l_791)) != 4294967293UL))) & 0x5870EEA7L))) <= 0x9F834C3CL)))) < l_614.f1)));
                }
                else
                {
                    short l_808 = 0xC247L;
                    struct S0 l_810 = {3919,1};
                    int l_815 = (-9L);
                    l_667 ^= (g_643 && ((safe_sub_func_int16_t_s_s(((l_669 || func_61((l_787 & (l_794 & (safe_rshift_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_u(p_19.f0, 11)) != (safe_sub_func_uint32_t_u_u((((func_34(l_801, (((safe_mod_func_uint32_t_u_u(((g_237 | ((safe_mod_func_int16_t_s_s(l_806, 1UL)) || p_18)) ^ 8UL), l_737)) && 0x2BA5L) ^ 4294967295UL), p_18, p_19.f0, p_18) == p_19.f0) == p_18) == g_12.f1), l_807))) < g_579) >= 0xDF2FBA7AL) ^ p_18), 9)))), p_19, g_491, p_19.f0, l_808)) ^ 5UL), 0L)) == l_808));
                    if (func_71(l_809))
                    {
                        l_614 = l_810;
                        if (g_404)
                            continue;
                        l_811 = g_12;
                        --g_816;
                    }
                    else
                    {
                        if (l_810.f0)
                            goto lbl_819;
                    }
                }
                l_765 &= g_185;
            }
            if ((((l_603.f0 <= l_809.f0) && g_10.f0) != func_61(((1UL ^ p_19.f0) | (safe_unary_minus_func_int16_t_s(0xE311L))), g_68, g_643, func_71(g_68), p_19.f0)))
            {
                g_127 = g_422;
                g_495 = ((safe_rshift_func_int16_t_s_s((l_641 != (1L != (l_660 && p_19.f0))), 7)) <= 1UL);
            }
            else
            {
                struct S0 l_825 = {10394,3};
                l_664 = (g_528 <= ((safe_lshift_func_int8_t_s_s(g_475, 7)) > g_422));
                g_565 = p_18;
                l_825 = l_825;
                l_765 = (((((0x7D19L != (l_826 && (g_524 && p_19.f0))) >= ((((-3L) >= ((p_19.f0 | (safe_mod_func_uint16_t_u_u(g_165, 0x5B12L))) < 1UL)) > 0xBCC81040L) == l_825.f0)) == p_18) & (-5L)) > p_18);
            }
            g_838++;
        }
        return l_588;
    }
    else
    {
        unsigned short l_856 = 0xBB24L;
        int l_875 = 0xC7065704L;
        int l_877 = (-1L);
        int l_879 = (-10L);
        int l_881 = 0x91A5F196L;
        struct S0 l_894 = {6153,0};
        for (g_68.f1 = 10; (g_68.f1 < 2); --g_68.f1)
        {
            unsigned l_855 = 0x13510273L;
            int l_885 = 0x46405F92L;
            g_495 = ((p_19.f0 > (safe_lshift_func_uint8_t_u_u(func_71(func_45(((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((p_19.f0 && (((g_632 && ((safe_sub_func_uint32_t_u_u((0x7784E474L ^ g_327), (p_19.f0 != 0x2A7F3747L))) ^ (l_855 & l_856))) < p_19.f0) != l_856)) < p_18), 0xB8DDL)), g_835)), 12)) ^ p_19.f0), 1L)) != p_19.f0))), 4))) != 0x77L);
            for (g_165 = 0; (g_165 != 44); g_165 = safe_add_func_int16_t_s_s(g_165, 9))
            {
                unsigned l_873 = 4294967289UL;
                int l_876 = 0x5D926B49L;
                int l_878 = 0x773350FBL;
                if ((((g_222 != (safe_mod_func_uint16_t_u_u(((g_311 == (safe_sub_func_int16_t_s_s(g_165, (0x2749L > p_18)))) != (-6L)), ((safe_add_func_int32_t_s_s((g_833 >= ((safe_sub_func_uint32_t_u_u(g_528, p_19.f0)) && p_19.f0)), 0x2DFAF3CFL)) && 4L)))) < 4294967295UL) && p_18))
                {
                    short l_871 = (-1L);
                    int l_874 = 0xC1F53BBAL;
                    for (g_311 = 0; (g_311 == 41); g_311 = safe_add_func_uint16_t_u_u(g_311, 2))
                    {
                        int l_872 = 0x205476DAL;
                        g_348 = (safe_add_func_uint8_t_u_u(l_871, (g_388 != ((g_814 < g_388) < l_872))));
                        if (g_12.f0)
                            break;
                    }
                    l_874 = (p_18 >= l_873);
                    if (p_18)
                        continue;
                }
                else
                {
                    int l_880 = (-3L);
                    g_882++;
                }
                if (g_237)
                    break;
            }
            if (p_18)
                break;
            l_885 = g_321;
        }

                g_74 = g_74;
        l_877 |= (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((((g_388 > p_19.f0) != (safe_add_func_int32_t_s_s((-6L), g_812))) & 0x1F6CC2E2L), (safe_sub_func_int8_t_s_s(((-1L) > (func_71(g_68) & p_19.f0)), p_18)))) != l_875), 15));
        l_894 = g_12;
    }

        return l_596;
}







static const union U1 func_20(unsigned p_21, const unsigned short p_22, unsigned p_23, const unsigned p_24, unsigned char p_25)
{
    unsigned l_26 = 1UL;
    int l_27 = 0x26FBD10CL;
    struct S0 l_40 = {1954,3};
    char l_59 = 1L;
    unsigned l_570 = 0x494368E3L;
    union U1 l_571 = {255UL};
    l_27 = (65535UL > l_26);
    l_27 = (func_28((safe_sub_func_uint8_t_u_u(p_24, (func_34(l_40, l_40.f1, l_26, (((func_41(func_45(p_22), (safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((((g_10.f0 || (safe_lshift_func_uint8_t_u_s(p_21, 0))) | (safe_add_func_uint16_t_u_u((p_22 == 1L), l_59))) >= g_60) == 0x30A2L) & l_27) | p_23), g_10.f1)), 4294967295UL)) && p_24) <= 5UL) & 0UL) < 0x77138BF9L), g_10.f1)), p_22) < l_27) == g_12.f0) <= (-2L)), p_25) >= l_570))), g_491, l_571) || g_491);
    return l_571;

    }







static const short func_28(int p_29, unsigned p_30, union U1 p_31)
{
    union U1 l_578 = {255UL};
    int l_582 = 5L;
    g_579 = (((func_34(g_74, g_564, (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((0L && ((func_71(g_68) > func_71(l_578)) < l_578.f0)) < (0UL || g_348)), p_29)), l_578.f0)) ^ 0L) || 0x82F3FED4L), g_12.f0, l_578.f0) != p_31.f0) >= g_491) | g_492);
    for (p_31.f1 = 0; (p_31.f1 >= 4); p_31.f1++)
    {
        unsigned char l_585 = 0UL;
        l_582 |= g_185;
        for (g_68.f1 = 0; (g_68.f1 != 58); ++g_68.f1)
        {
            l_585--;
        }

            }

        return g_74.f0;
}







static const unsigned short func_34(struct S0 p_35, unsigned p_36, char p_37, int p_38, unsigned p_39)
{
    char l_467 = 0xFBL;
    int l_474 = (-4L);
    int l_477 = 0xBABF0F96L;
    union U1 l_545 = {3UL};
    unsigned short l_546 = 65527UL;
    short l_558 = 0x3CA7L;
    struct S0 l_559 = {4677,2};
    int l_561 = 0xF70616CAL;
    int l_562 = 7L;
    int l_563 = (-1L);
    struct S0 l_569 = {7321,1};
    if (((safe_sub_func_int32_t_s_s((g_284 > p_39), (g_68.f0 >= (0xF8E17AAAL | func_71(g_68))))) < (safe_add_func_uint32_t_u_u(p_35.f0, (safe_unary_minus_func_uint16_t_u(l_467))))))
    {
        unsigned l_470 = 18446744073709551615UL;
        int l_476 = 0x4560898BL;
        struct S0 l_482 = {397,2};
        int l_496 = 0xEE0CA48AL;
        struct S0 l_551 = {4728,3};
        for (g_273 = 29; (g_273 == 5); g_273--)
        {
            char l_471 = 0x79L;
            struct S0 l_481 = {9986,0};
            union U1 l_483 = {0xF1L};
            int l_489 = (-1L);
            int l_527 = 0L;
            if (l_470)
            {
                short l_472 = 0x3B12L;
                int l_473 = 0xB55BE655L;
                g_478--;
                l_477 = p_37;
                l_476 = p_39;
                l_481 = p_35;
            }
            else
            {
                unsigned l_486 = 0UL;
                int l_490 = (-1L);
                int l_493 = 1L;
                l_482 = p_35;
                l_481 = p_35;
                if (func_71(l_483))
                {
                    unsigned l_497 = 0xA31306ABL;
                    g_348 |= (p_37 ^ l_467);
                    if (l_474)
                    {
                        g_127 = ((((+6UL) | p_35.f0) | g_165) || (safe_rshift_func_uint8_t_u_u(l_486, 0)));
                    }
                    else
                    {
                        l_476 = l_467;
                    }
                    for (g_388 = (-28); (g_388 != 38); g_388 = safe_add_func_int8_t_s_s(g_388, 6))
                    {
                        p_35 = l_481;
                    }
                    ++l_497;
                }
                else
                {
                    unsigned l_502 = 0x786BC4DDL;
                    int l_518 = (-2L);
                    int l_519 = 1L;
                    int l_521 = 0x80A0FC84L;
                    int l_522 = 1L;
                    int l_523 = 0x45DC3CB3L;
                    for (l_489 = (-30); (l_489 != (-24)); ++l_489)
                    {
                        l_502 = func_71(g_68);
                        if (p_38)
                            continue;
                    }
                    for (l_496 = 0; (l_496 != 18); ++l_496)
                    {
                        unsigned char l_517 = 1UL;
                        int l_520 = 0x17AD1F93L;
                        l_476 &= ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((p_36 || l_481.f0), (((safe_mod_func_uint32_t_u_u(((((((l_489 >= (safe_lshift_func_int16_t_s_s((func_71(g_68) | p_38), (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x0D38L, p_35.f0)), l_467))))) != 0x5D3D4605L) != (-1L)) < 0x8BC81BA0L) > g_74.f1) < g_495), 0x13ED26C3L)) & l_517) || l_517))), p_38)) <= l_483.f0) ^ 1L) || (-1L));
                        g_524++;
                        --g_528;
                    }
                }
            }
            for (p_38 = (-14); (p_38 <= 3); p_38++)
            {
                unsigned short l_543 = 0UL;
                for (g_349 = (-5); (g_349 >= 29); g_349 = safe_add_func_int32_t_s_s(g_349, 1))
                {
                    short l_537 = 0xB2D5L;
                    if (((l_470 < (safe_add_func_int32_t_s_s(func_71(l_483), (l_474 && func_71(func_45(l_537)))))) <= (p_35.f1 == ((safe_add_func_int32_t_s_s((0x2E3AL ^ 65533UL), g_250)) && g_475))))
                    {
                        unsigned l_542 = 0UL;
                        g_309 = (safe_rshift_func_uint8_t_u_u(l_542, 6));
                        return p_38;
                    }
                    else
                    {
                        short l_544 = 0x2A07L;
                        l_544 ^= (!l_543);
                        l_474 = g_309;
                    }
                }
                l_489 = (0L ^ (0x3FB5L & (func_71(l_545) == (-8L))));
            }
        }
        l_496 = (((p_35.f1 != l_546) & l_482.f1) && (safe_rshift_func_uint8_t_u_u(g_349, 3)));
        for (g_237 = 0; (g_237 >= (-23)); g_237 = safe_sub_func_int16_t_s_s(g_237, 8))
        {
            p_35 = l_551;
            if (g_284)
                break;
            l_558 = func_41(func_45(l_482.f1), g_165, (safe_rshift_func_uint8_t_u_u((0xE765B9DEL >= (safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s(0x73CEE875L, g_475)) != g_250) <= (4294967295UL & (g_475 <= l_496))), p_35.f0))), g_165)));
            return l_558;
        }
    }
    else
    {
        struct S0 l_560 = {3217,2};
        p_35 = g_12;
        l_560 = l_559;
        g_74 = p_35;
        return l_560.f0;
    }
    --g_566;
    l_569 = l_569;
    return p_37;
}







static unsigned func_41(union U1 p_42, unsigned p_43, unsigned short p_44)
{
    short l_67 = 0x5CFEL;
    struct S0 l_451 = {10507,1};
    int l_461 = 1L;
    if ((p_42.f0 != func_61(l_67, g_68, ((((0UL || (safe_lshift_func_uint16_t_u_u((p_44 & g_68.f0), 2))) ^ func_71(g_68)) != (0x02F3L != p_42.f0)) & p_44), l_67, l_67)))
    {
        struct S0 l_450 = {3684,0};
        l_451 = l_450;
    }
    else
    {
        char l_452 = 9L;
        l_461 = (((0x62EAL != (l_452 == (p_43 > 65531UL))) && (255UL < l_452)) ^ (safe_add_func_int16_t_s_s((func_61((safe_sub_func_int32_t_s_s(((((((g_422 ^ (safe_rshift_func_uint8_t_u_u(p_43, 0))) && (safe_lshift_func_int8_t_s_u(l_452, 3))) > (-1L)) || 0x2FL) <= 1UL) != 0x02L), p_42.f0)), p_42, p_42.f0, g_352, l_451.f0) || g_74.f1), g_10.f1)));
    }
    return g_12.f0;
}







static union U1 func_45(unsigned short p_46)
{
    int l_47 = 0x45A9172CL;
    union U1 l_48 = {0x5AL};
    l_47 ^= 0x332E0C28L;
    return l_48;

    }







static unsigned func_61(short p_62, union U1 p_63, short p_64, char p_65, unsigned p_66)
{
    union U1 l_88 = {251UL};
    int l_134 = (-2L);
    struct S0 l_146 = {1249,2};
    int l_217 = (-5L);
    union U1 l_266 = {1UL};
    int l_343 = 0L;
    int l_345 = 0x6E211E06L;
    int l_346 = 0xEC00A1B1L;
    int l_350 = (-1L);
    char l_351 = (-1L);
    unsigned l_357 = 4294967294UL;
    g_74 = g_12;
lbl_263:
    if ((safe_unary_minus_func_uint32_t_u(0x23142ACEL)))
    {
lbl_160:
        for (p_62 = 0; (p_62 != 17); p_62 = safe_add_func_uint16_t_u_u(p_62, 1))
        {
            struct S0 l_78 = {8611,2};
            g_74 = g_74;
            l_78 = g_74;
        }
    }
    else
    {
        int l_89 = 0x71DABD33L;
        struct S0 l_150 = {10431,1};
        union U1 l_156 = {7UL};
        struct S0 l_192 = {9154,1};
        unsigned l_202 = 0xB8C84E1CL;
        unsigned short l_247 = 1UL;
        l_89 = (((0xE8010CA1L > (g_74.f1 > (-4L))) != (0xDE40C593L != (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint16_t_u_u((g_60 && (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x783DL, func_71(l_88))), func_71(p_63)))), g_60)) > g_12.f0))), 14)))) >= 9L);
        if ((p_64 == ((safe_sub_func_uint32_t_u_u(g_10.f1, p_65)) || (safe_mod_func_int16_t_s_s(g_10.f0, func_71(p_63))))))
        {
            struct S0 l_96 = {9563,3};
            int l_109 = 0x0B836111L;
            union U1 l_124 = {0UL};
            int l_131 = (-7L);
            for (l_88.f1 = 28; (l_88.f1 < 38); l_88.f1++)
            {
                unsigned l_125 = 0x4A10B7D5L;
                l_96 = l_96;
                for (p_62 = 16; (p_62 >= 18); ++p_62)
                {
                    unsigned char l_126 = 0xF6L;
                    int l_128 = 0x94E89909L;
                    l_109 = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((p_64 != p_66), p_65)) == 0x184A182FL) == l_96.f0), (safe_add_func_int32_t_s_s(0xB8780EC7L, g_12.f0)))) != func_71(func_45(p_65))), g_74.f0)) & g_10.f1), 7));
                    g_127 = (safe_sub_func_uint8_t_u_u(((g_74.f1 <= (+p_62)) >= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_62, g_12.f0)), 0UL)), p_62)), (((!func_71(l_124)) != 0L) ^ l_125))) <= l_126), 9)), g_60))), 0x93L));
                    l_128 = (-10L);
                    for (p_64 = 0; (p_64 <= 4); p_64 = safe_add_func_uint16_t_u_u(p_64, 1))
                    {
                        g_127 |= (255UL || p_66);
                    }
                }
            }

                        l_131 &= ((p_64 & func_71(l_88)) == l_109);
        }
        else
        {
            unsigned char l_135 = 0x56L;
            int l_142 = 0x823F9BE9L;
            struct S0 l_149 = {11157,3};
            for (g_60 = 10; (g_60 != 34); g_60++)
            {
                unsigned char l_143 = 0xF6L;
                struct S0 l_147 = {2377,1};
                l_135--;
                if (l_89)
                {
                    unsigned l_138 = 0UL;
                    struct S0 l_148 = {3282,0};
                    if (l_138)
                    {
                        int l_141 = 0x4B6A6B6AL;
                        l_141 = (g_10.f1 != (p_66 >= (safe_add_func_int32_t_s_s(g_60, p_62))));
                    }
                    else
                    {
                        if (g_68.f0)
                            break;
                        l_143--;
                        return l_138;
                    }
                    l_147 = l_146;
                    if (g_12.f0)
                        break;
                    l_148 = g_12;
                }
                else
                {
                    unsigned short l_153 = 0x10CAL;
                    int l_159 = 0L;
                    struct S0 l_161 = {1238,2};
                    l_150 = l_149;
                    if (((((safe_add_func_uint32_t_u_u((l_153 != ((l_153 || ((func_71(p_63) && g_74.f0) ^ ((g_10.f1 & (safe_add_func_uint16_t_u_u(func_71(l_156), g_12.f0))) && 0UL))) < 0x7DL)), 0x6139C8B3L)) < l_147.f1) | 0x6BL) | g_68.f0))
                    {
                        short l_157 = 0x412EL;
                        int l_158 = 0x47A1F191L;
                        l_158 = ((1L < (p_63.f0 == ((l_157 || 65535UL) & 0x1DL))) == 0xED468734L);
                        l_159 |= l_88.f0;
                    }
                    else
                    {
                        if (l_146.f1)
                            goto lbl_160;
                        l_161 = l_150;
                        g_127 = g_10.f1;
                        if (p_64)
                            goto lbl_160;
                    }
                    l_142 = func_71(p_63);
                }
            }
            for (g_60 = 0; (g_60 == 8); ++g_60)
            {
                short l_164 = 9L;
                g_165++;
            }
        }
        for (l_134 = 0; (l_134 < (-27)); --l_134)
        {
            int l_178 = (-1L);
            int l_193 = 0L;
            if (((safe_add_func_int32_t_s_s((l_88.f0 ^ 4294967295UL), (l_146.f1 != (safe_lshift_func_int16_t_s_s(p_63.f0, ((safe_mod_func_int16_t_s_s(func_71(func_45(g_10.f0)), g_10.f0)) > g_127)))))) & (-1L)))
            {
                return p_62;
            }
            else
            {
                int l_176 = 0L;
                l_176 = g_68.f0;
                l_89 ^= (p_62 < (safe_unary_minus_func_int16_t_s(p_65)));
                l_176 = p_66;
            }
            if (l_178)
            {
                int l_184 = 0x51AEE02AL;
                const char l_194 = 0xB7L;
                if (((((((g_74.f0 || p_62) & l_178) >= ((g_74.f0 != l_178) <= (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((((((g_127 && p_62) >= (safe_unary_minus_func_uint16_t_u(g_60))) < g_12.f1) < 0x0AF48925L) && g_10.f0), 0x3FL)) >= g_165) & l_150.f0), 2)))) | 0xCC4BC137L) < 0L) >= 0x9DC3AFFDL))
                {
                    short l_188 = 5L;
                    l_184 = l_134;
                    g_185++;
                    l_188 = l_184;
                    g_74 = g_12;
                }
                else
                {
                    short l_196 = 0L;
                    int l_201 = 0L;
                    if (((func_71(l_88) != func_71(func_45(p_64))) | p_64))
                    {
                        unsigned l_189 = 0x06F73C81L;
                        l_189++;
                        l_192 = g_74;
                    }
                    else
                    {
                        char l_195 = 0xEBL;
                        unsigned char l_197 = 0xDAL;
                        int l_200 = (-1L);
                        l_193 ^= p_63.f0;
                        if (l_194)
                            break;
                        ++l_197;
                        --l_202;
                    }
                    l_89 |= (((p_62 || g_74.f1) != (safe_lshift_func_int16_t_s_u((p_65 < (safe_lshift_func_int16_t_s_u(p_62, p_65))), 10))) || (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(l_193, g_10.f0)), (safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s((p_62 < func_71(g_68)), 0x9EL)))))));
                }
                if (p_66)
                    goto lbl_160;
                if (l_194)
                    continue;
            }
            else
            {
                l_146 = g_74;
                if (p_66)
                    break;
                l_217 &= (safe_unary_minus_func_uint16_t_u(((g_12.f0 <= g_165) | func_71(p_63))));
            }
            for (l_193 = (-6); (l_193 < 22); l_193 = safe_add_func_int16_t_s_s(l_193, 7))
            {
                g_127 = p_63.f0;
                return g_10.f1;
            }
        }
        for (g_60 = 0; (g_60 != 20); g_60 = safe_add_func_int8_t_s_s(g_60, 2))
        {
            unsigned char l_230 = 0x17L;
            int l_231 = (-10L);
            int l_234 = 0x5BBA217EL;
            union U1 l_261 = {5UL};
            ++g_222;
            for (p_63.f0 = (-30); (p_63.f0 == 2); p_63.f0 = safe_add_func_int8_t_s_s(p_63.f0, 7))
            {
                int l_235 = 1L;
                int l_248 = 0xCE7D4CFFL;
                if (l_150.f1)
                {
                    unsigned short l_229 = 0x1C5DL;
                    int l_233 = (-1L);
                    int l_236 = 5L;
                    int l_243 = (-1L);
                    if ((safe_mod_func_uint16_t_u_u(0x7B99L, (~(p_66 && func_71(p_63))))))
                    {
                        l_229 |= 0x09FDD955L;
                        if (l_230)
                            break;
                    }
                    else
                    {
                        int l_232 = (-9L);
                        g_238++;
                        if (l_229)
                            goto lbl_263;
                        g_127 ^= ((safe_lshift_func_uint8_t_u_u(l_243, 5)) && l_234);
                    }
                    l_89 ^= (+g_238);
                    if (l_134)
                        break;
                }
                else
                {
                    char l_244 = 0x95L;
                    struct S0 l_249 = {5334,2};
                    l_244 = 0L;
                    l_248 &= ((safe_add_func_uint8_t_u_u(0xA4L, (+g_74.f0))) <= (g_12.f1 > ((l_247 || g_74.f0) <= (+(p_62 || func_71(func_45((l_235 != l_244))))))));
                    l_249 = l_249;
                    l_248 ^= l_249.f0;
                }
                --g_250;
                g_262 |= (safe_rshift_func_uint16_t_u_u((((g_12.f1 & (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((l_134 != g_127), func_71(func_45(p_66)))), 2)) >= g_12.f1) & 9UL), func_71(l_261)))) && p_65) != g_12.f0), l_234));
            }
            return l_247;
        }
    }
    if (l_146.f1)
    {
        unsigned l_267 = 9UL;
        int l_286 = 0x60D410FCL;
        struct S0 l_295 = {6470,0};
        int l_319 = (-10L);
lbl_331:
        g_127 = ((safe_rshift_func_uint16_t_u_u(func_71(l_266), g_68.f0)) >= ((((0xD2C5L != (~l_267)) | p_63.f0) || p_66) >= 1UL));
        if ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((-9L), l_134)))))
        {
            union U1 l_281 = {248UL};
            struct S0 l_294 = {5610,1};
            int l_297 = 0xE527677EL;
            for (l_267 = 0; (l_267 < 55); l_267 = safe_add_func_int16_t_s_s(l_267, 5))
            {
                unsigned char l_276 = 0x97L;
                ++g_273;
                l_276 = p_65;
            }
            for (g_68.f1 = (-21); (g_68.f1 != 21); g_68.f1 = safe_add_func_uint16_t_u_u(g_68.f1, 1))
            {
                unsigned short l_285 = 0xDB36L;
                union U1 l_289 = {2UL};
                int l_302 = 0xEEF5E0A4L;
                l_286 = (safe_add_func_uint8_t_u_u(g_12.f1, (func_71(l_281) >= (((g_10.f0 >= ((safe_sub_func_int8_t_s_s(p_62, (g_165 < g_284))) | g_12.f1)) == l_267) == l_285))));
                if (g_12.f0)
                    break;
                if ((65535UL != g_12.f1))
                {
                    unsigned l_288 = 1UL;
                    int l_296 = 0xA13B45BEL;
                    struct S0 l_300 = {10791,2};
                    if (((p_65 == (!((safe_unary_minus_func_int16_t_s(l_288)) == ((func_71(l_289) && 1UL) & ((safe_rshift_func_int16_t_s_u(0xD5ECL, l_281.f0)) == ((safe_add_func_uint16_t_u_u(g_222, g_74.f0)) && l_281.f0)))))) > 1L))
                    {
                        l_294 = g_12;
                        l_295 = l_295;
                    }
                    else
                    {
                        l_296 = 0xF7F2E4BEL;
                        l_297 |= l_146.f1;
                    }
                    for (g_127 = 0; (g_127 < 28); g_127 = safe_add_func_int8_t_s_s(g_127, 4))
                    {
                        g_74 = l_300;
                    }
                    g_127 ^= l_300.f0;
                }
                else
                {
                    int l_301 = 4L;
                    l_302 = ((p_63.f0 <= g_222) == l_301);
                    g_74 = l_294;
                    l_286 = l_294.f0;
                }
            }

                    }
        else
        {
            struct S0 l_308 = {5144,3};
            int l_310 = 0x2028F88BL;
            int l_316 = 0xA8359A10L;
lbl_341:
            for (g_250 = 26; (g_250 > 53); ++g_250)
            {
                char l_307 = (-6L);
                struct S0 l_314 = {5678,1};
                int l_318 = (-10L);
                int l_320 = 0xFC97EF01L;
                int l_330 = 0L;
                if (g_74.f0)
                {
                    for (g_68.f0 = 21; (g_68.f0 < 36); g_68.f0 = safe_add_func_int32_t_s_s(g_68.f0, 7))
                    {
                        l_307 = 0x00F40CEAL;
                        l_308 = g_12;
                        g_311++;
                        if (p_64)
                            continue;
                    }
                    g_74 = l_314;
                    if (p_63.f0)
                        goto lbl_263;
                }
                else
                {
                    int l_315 = 0x9E583A3EL;
                    int l_317 = (-1L);
                    int l_340 = 0x4B53EABFL;
                    --g_321;
                    for (g_238 = 0; (g_238 != 59); ++g_238)
                    {
                        unsigned l_326 = 0UL;
                        if (l_326)
                            break;
                        g_327++;
                        if (l_330)
                            continue;
                        if (p_63.f0)
                            goto lbl_331;
                    }
                    l_310 &= ((safe_rshift_func_int16_t_s_s((g_185 >= (safe_add_func_uint8_t_u_u(0x61L, func_71(l_266)))), ((((safe_add_func_uint32_t_u_u(((l_317 & l_146.f1) <= (p_62 > ((safe_add_func_int8_t_s_s((l_266.f0 >= l_318), l_340)) != l_308.f1))), 4294967292UL)) | l_146.f1) | p_65) && 0xDE8CL))) <= l_316);
                }
                g_127 = 8L;
            }
            g_309 = (0xD5L == g_284);
            if (g_222)
                goto lbl_341;
        }
    }
    else
    {
        short l_342 = (-1L);
        int l_344 = (-1L);
        int l_347 = 0x69EC73FAL;
        unsigned char l_366 = 0xFAL;
        unsigned l_379 = 0UL;
        char l_391 = (-4L);
        g_352++;
        g_348 = (safe_lshift_func_uint8_t_u_s(((((g_238 != func_71(g_68)) | l_357) == (l_146.f1 & (safe_sub_func_uint8_t_u_u(g_222, (4294967287UL & l_88.f0))))) >= p_66), p_63.f0));
        if ((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((!(safe_lshift_func_int8_t_s_s((!l_366), (0x80A9L || p_65)))), 1L)), 6)) <= 1L) & ((((-9L) | (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(0xA7L, 0)) <= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_66, 6)), (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_347, 4)), l_345))))), 0))) != l_347) >= 1L)) < g_327) ^ p_66))
        {
            --l_379;
        }
        else
        {
            short l_382 = 0x8E6EL;
            int l_385 = 0xDDDFE6DEL;
            int l_386 = 4L;
            unsigned short l_419 = 0xD915L;
            union U1 l_447 = {0x02L};
            if (func_71(p_63))
            {
                char l_383 = (-1L);
                short l_384 = 0x3A8DL;
                int l_387 = 0xB5212171L;
                --g_388;
                if (((l_385 > l_391) & (((((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(g_349, 6)) < (9L == (g_10.f1 < l_88.f0))), ((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u(g_74.f1, 3)) == (p_64 != (safe_add_func_int32_t_s_s(l_383, 6UL)))) < l_344), g_185)) || g_404))) >= g_60) || 0xF026L) == (-9L)) ^ p_63.f0)))
                {
                    l_344 &= (3L != (p_63.f0 >= g_12.f0));
                }
                else
                {
                    g_348 = p_66;
                }
                l_344 = (safe_mod_func_uint32_t_u_u(l_351, l_266.f0));
            }
            else
            {
                unsigned l_407 = 4294967295UL;
                int l_420 = 5L;
                unsigned short l_430 = 8UL;
                ++l_407;
                if (func_71(l_266))
                {
                    l_386 = func_71(p_63);
                    g_309 &= 0x0BEF41ADL;
                }
                else
                {
                    unsigned l_410 = 18446744073709551613UL;
                    int l_421 = 0x09271A81L;
                    struct S0 l_425 = {11152,0};
                    l_410 = (1UL != g_74.f0);
                    l_421 = (g_309 >= (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((((-1L) & (safe_lshift_func_int16_t_s_s(0x27ADL, (safe_sub_func_int8_t_s_s((((65535UL == (~l_419)) ^ l_217) || (((-6L) && (g_222 | (l_420 | g_74.f0))) == (-9L))), l_407))))) && g_349) & 0x9CAD52DBL), g_74.f0)), g_349)));
                    if (g_165)
                    {
                        l_386 = p_66;
                    }
                    else
                    {
                        g_422++;
                        l_425 = l_146;
                    }
                    if (((((p_63.f0 >= g_222) | ((((-1L) | ((p_64 & ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_388, l_217)), l_266.f0)) != (2UL || g_348))) & g_404)) <= p_65) && l_430)) | p_62) && 5UL))
                    {
                        l_421 = (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s(p_66, ((safe_unary_minus_func_uint16_t_u((!p_62))) > l_419)))));
                    }
                    else
                    {
                        int l_443 = (-9L);
                        unsigned l_444 = 0xA070A53DL;
                        l_343 ^= (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((l_443 == (func_71(g_68) <= l_444)), (safe_add_func_int32_t_s_s(((l_407 & func_71(l_447)) || ((safe_lshift_func_int16_t_s_u(l_407, 9)) ^ 251UL)), p_63.f0)))) <= (-1L)), 1L)), g_273)) & p_63.f0), 1UL));
                    }
                }
            }
            return g_284;
        }
    }
    return p_62;
}







static const unsigned short func_71(union U1 p_72)
{
    unsigned char l_73 = 0xA0L;
    l_73 = g_68.f0;
    return g_60;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1171.f0, "g_1171.f0", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1283, "g_1283", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
