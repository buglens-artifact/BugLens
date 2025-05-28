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
   unsigned short f0;
   unsigned short f1;
};

union U1 {
   unsigned f0;
   unsigned f1;
};


static unsigned g_2 = 0xC70C3099L;
static union U0 g_16 = {0x24DCL};
static union U1 g_59 = {0xC35CF455L};
static unsigned g_69 = 4294967290UL;
static unsigned char g_76 = 0x5EL;
static int g_77 = 0xA880E1B4L;
static char g_79 = 0L;
static int g_83 = 0x870B1CB4L;
static char g_111 = 0xB5L;
static int g_147 = (-10L);
static char g_178 = 0xD0L;
static char g_201 = 0x95L;
static int g_204 = (-1L);
static unsigned short g_240 = 0x2EF6L;
static union U0 g_244 = {0xB71CL};
static unsigned g_327 = 0x87CFA903L;
static unsigned char g_415 = 0xA1L;
static union U1 g_456 = {0x9AE18B7BL};
static int g_508 = 7L;
static unsigned char g_567 = 0UL;
static unsigned short g_578 = 0xB246L;



static unsigned func_1(void);
static unsigned short func_8(int p_9, union U0 p_10, unsigned short p_11);
static union U0 func_12(union U0 p_13, char p_14, unsigned short p_15);
static unsigned short func_19(union U1 p_20, short p_21, unsigned p_22);
static union U1 func_23(short p_24, unsigned p_25, unsigned short p_26, union U0 p_27);
static short func_28(unsigned char p_29, short p_30);
static unsigned func_37(int p_38, int p_39, int p_40, int p_41);
static unsigned short func_44(const union U1 p_45, union U0 p_46, unsigned p_47, union U1 p_48);
static const union U1 func_49(union U1 p_50, int p_51);
static unsigned short func_55(unsigned char p_56, union U1 p_57, unsigned char p_58);
static unsigned func_1(void)
{
    short l_3 = (-5L);
    int l_537 = (-1L);
    unsigned l_541 = 0xEF122395L;
    int l_542 = 1L;
    char l_547 = 0x6DL;
    union U1 l_560 = {1UL};
    int l_577 = 0x77C2B82FL;
    g_2 = 0x8A1F9496L;
    l_542 = ((l_3 , (((l_537 = (((safe_rshift_func_int16_t_s_u((0xD1L & (safe_lshift_func_uint16_t_u_u(func_8(l_3, func_12(g_16, l_3, (safe_sub_func_uint16_t_u_u(func_19(func_23((g_508 = (l_3 , func_28(g_2, l_3))), l_3, l_3, g_16), g_16.f0, l_3), l_3))), l_537), l_541))), g_2)) == g_2) || 0xEEL)) >= l_3) != g_2)) != l_3);
    for (l_537 = 0; (l_537 >= (-14)); --l_537)
    {
        union U1 l_545 = {0x99FE74D2L};
        int l_546 = (-1L);
        short l_569 = 0x4113L;
        g_204 = func_55(((((g_16.f1 >= func_55((0x714A2744L ^ (-9L)), l_545, (l_546 = g_79))) != func_8(l_541, g_244, l_545.f1)) , g_204) > g_327), g_59, l_547);
        for (l_541 = 0; (l_541 == 6); l_541++)
        {
            union U1 l_561 = {0x883C5B11L};
            union U0 l_566 = {65535UL};
            short l_568 = 0x1363L;
            int l_574 = (-3L);
            l_569 = (g_83 <= (safe_mod_func_int16_t_s_s(((((65535UL | (safe_lshift_func_int16_t_s_u((g_567 = ((((safe_rshift_func_uint16_t_u_u(g_178, (safe_lshift_func_int16_t_s_u(((func_19(func_23((safe_add_func_int32_t_s_s((((!((!func_19(l_560, func_19(func_49(l_561, (safe_lshift_func_int8_t_s_s(g_456.f1, (((!((safe_rshift_func_int16_t_s_s(l_560.f0, l_561.f1)) & g_16.f0)) | l_561.f1) , l_561.f0)))), g_178, g_178), l_561.f0)) && l_561.f1)) , l_3) , g_77), g_456.f1)), g_456.f0, g_16.f0, l_566), l_545.f0, g_2) >= 6L) , 0xB7CAL), l_566.f0)))) >= 4294967289UL) == l_545.f1) || 2L)), l_542))) != g_16.f1) <= 7UL) >= g_111), l_568)));
            l_577 = (((g_79 = (safe_add_func_int32_t_s_s(((l_569 , ((g_69 = g_59.f1) < (1L > ((((!(safe_mod_func_int8_t_s_s(((0UL == g_456.f1) > g_16.f0), g_327))) ^ l_574) < ((~(((((((safe_sub_func_uint32_t_u_u(g_147, g_567)) & l_574) >= g_244.f1) , 7L) >= g_567) || l_560.f0) && 0UL)) & g_111)) <= g_244.f1)))) && (-4L)), l_542))) <= g_178) , g_16.f1);
            g_578 = g_2;
        }
    }
    g_83 = (g_508 != g_240);
    return l_3;
}







static unsigned short func_8(int p_9, union U0 p_10, unsigned short p_11)
{
    char l_540 = 0x35L;
    l_540 = ((7UL != 0xE8L) >= (g_69 > (safe_lshift_func_int16_t_s_u(g_244.f1, 15))));
    return p_11;
}







static union U0 func_12(union U0 p_13, char p_14, unsigned short p_15)
{
    unsigned l_519 = 1UL;
    union U1 l_525 = {0x54555B17L};
    union U1 l_526 = {0UL};
    int l_527 = (-9L);
    int l_534 = 0x0DAFAC68L;
    unsigned short l_535 = 0x6414L;
    const unsigned char l_536 = 0xACL;
    for (g_79 = 8; (g_79 > 7); --g_79)
    {
        short l_520 = 0x016AL;
        int l_521 = 0L;
        int l_522 = 0x8AA40158L;
        l_522 = (((safe_lshift_func_int16_t_s_s((((g_76 = (g_204 && (((l_519 ^ (((g_16 = p_13) , (p_14 != (((l_520 <= (((l_521 = ((0x0109L & 2UL) < ((g_204 = (1UL > g_178)) >= g_79))) & p_15) <= g_178)) | p_13.f1) || 1UL))) , 65528UL)) ^ 0xFCL) || 248UL))) && p_14) < g_456.f0), l_520)) > l_519) , g_327);
        g_204 = ((safe_rshift_func_uint8_t_u_s(func_55(p_13.f0, (g_59 = l_525), p_14), (((0x1EL ^ (l_527 = func_55(func_19((l_526 = (g_456 = g_456)), g_244.f0, p_13.f0), l_525, l_525.f0))) || p_14) >= g_77))) | p_13.f1);
    }
    l_527 = (safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u(p_14, (safe_add_func_int32_t_s_s(l_527, (g_244.f0 <= func_55(g_508, l_525, p_13.f0)))))) >= (((func_19(func_23((l_534 = 0x9F63L), p_13.f1, p_13.f1, p_13), p_14, l_527) >= l_535) || l_536) , g_147)) && l_525.f0) <= l_525.f0), p_15));
    return p_13;
}







static unsigned short func_19(union U1 p_20, short p_21, unsigned p_22)
{
    const unsigned char l_512 = 0UL;
    int l_513 = 1L;
    int l_514 = (-4L);
    l_514 = (safe_lshift_func_uint16_t_u_u(l_512, (l_513 = g_16.f0)));
    return g_79;
}







static union U1 func_23(short p_24, unsigned p_25, unsigned short p_26, union U0 p_27)
{
    int l_509 = 0x9479F0C7L;
    l_509 = (-8L);
    return g_59;
}







static short func_28(unsigned char p_29, short p_30)
{
    int l_42 = 0x0F30385DL;
    short l_43 = 0L;
    union U1 l_52 = {18446744073709551611UL};
    unsigned char l_503 = 8UL;
    int l_504 = 0L;
    int l_505 = (-1L);
    const unsigned short l_506 = 0x0662L;
    int l_507 = (-5L);
    l_507 = (((l_505 = (((safe_lshift_func_uint8_t_u_u(((((l_504 = ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(p_30, (p_30 , func_37(((0xACB314B8L == ((l_42 < ((l_43 = g_2) <= ((((g_16 , func_44(func_49(l_52, (safe_add_func_uint16_t_u_u(func_55(l_42, g_59, l_52.f1), l_52.f0))), g_16, l_52.f1, g_59)) >= l_52.f0) > p_30) ^ l_52.f1))) || l_42)) != l_52.f1), g_16.f1, l_42, l_52.f1)))) , l_503), p_30)) <= g_16.f0)) , p_30) , 4294967287UL) <= 6UL), l_503)) , l_52.f0) != g_2)) == l_506) >= 0UL);
    return g_2;
}







static unsigned func_37(int p_38, int p_39, int p_40, int p_41)
{
    union U1 l_357 = {1UL};
    int l_364 = 0L;
    int l_365 = 0xCD46B94CL;
    union U1 l_366 = {0UL};
    union U0 l_373 = {0xE3FBL};
    unsigned char l_417 = 9UL;
    unsigned l_441 = 0xF0B88CEEL;
    unsigned char l_472 = 0xB4L;
    union U1 l_498 = {0x9F7E3BC6L};
    if ((((safe_mod_func_uint8_t_u_u(func_44(func_49((l_357 = g_59), (g_77 = g_76)), g_244, ((((~((g_16.f1 <= (0x3CL < ((g_204 , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(65528UL, 13)), (safe_lshift_func_int16_t_s_s(0L, g_244.f0))))) == l_364))) & l_364)) == g_244.f1) | l_365) == 0UL), l_366), g_59.f1)) , (-1L)) && 0x7EL))
    {
        union U1 l_367 = {0xADBCF66CL};
        int l_372 = 0L;
        int l_393 = 7L;
        union U0 l_438 = {65535UL};
        p_41 = g_111;
        g_83 = func_55((l_365 = (g_16.f0 != g_244.f0)), func_49(l_367, (safe_rshift_func_uint16_t_u_u(p_40, 3))), ((l_357 , func_55(l_367.f1, l_367, (safe_add_func_int16_t_s_s(g_327, g_204)))) , p_39));
        l_372 = l_366.f0;
        if ((g_2 == (func_44((l_366.f1 , l_366), ((func_44(func_49(l_367, g_16.f1), l_373, (l_364 = l_357.f1), l_367) <= l_366.f0) , g_16), p_38, l_367) || g_77)))
        {
            int l_376 = 0xD4712D92L;
            union U1 l_383 = {5UL};
            char l_399 = 7L;
            int l_400 = 0xB3F7561DL;
            p_40 = 0x947678D6L;
            for (g_59.f1 = 25; (g_59.f1 < 44); g_59.f1 = safe_add_func_uint32_t_u_u(g_59.f1, 7))
            {
                unsigned l_379 = 4294967295UL;
                short l_387 = 0xD658L;
                union U1 l_388 = {1UL};
                g_83 = l_376;
                for (g_77 = (-1); (g_77 > (-5)); g_77 = safe_sub_func_uint8_t_u_u(g_77, 8))
                {
                    unsigned char l_382 = 0x3BL;
                    int l_398 = 0x72602DF7L;
                    if (l_379)
                        break;
                    if ((func_55(g_178, l_367, (safe_lshift_func_int16_t_s_s((p_38 > (g_240 = (l_376 != (255UL >= func_55(g_69, l_367, l_367.f1))))), l_382))) >= p_38))
                    {
                        int l_386 = (-1L);
                        g_204 = ((l_364 = ((l_357.f1 ^ func_55(((((func_55((g_76 = 0xDFL), l_366, func_55(l_372, l_383, ((~((p_38 <= p_40) || (l_383.f1 == ((safe_add_func_uint16_t_u_u((p_39 != 0xA687B620L), p_40)) == 0x55L)))) <= l_382))) <= p_38) & l_386) > p_40) | l_387), l_388, g_147)) <= l_383.f0)) || l_367.f0);
                    }
                    else
                    {
                        l_365 = (p_39 <= 0xD587L);
                        g_83 = l_383.f1;
                        g_83 = (safe_sub_func_int16_t_s_s((-1L), ((safe_rshift_func_uint16_t_u_u(65535UL, ((((l_393 = (l_372 = p_40)) >= (safe_add_func_int8_t_s_s((g_59.f1 & ((p_38 >= (l_357 , (l_398 = (func_55(((safe_mod_func_int16_t_s_s((l_357 , (((0x8785AC9EL & p_38) && g_111) , (-6L))), p_40)) , 255UL), g_59, l_382) > 1L)))) , g_79)), p_38))) <= l_399) & 3L))) < (-3L))));
                    }
                    l_400 = p_41;
                    g_204 = (l_400 = (0x1BC9L || (-2L)));
                }
                p_40 = g_327;
                p_39 = func_55(l_393, l_367, g_111);
            }
        }
        else
        {
            int l_426 = 1L;
            int l_435 = (-1L);
            union U0 l_442 = {0xE9A1L};
            const union U1 l_457 = {9UL};
            short l_473 = 0x0988L;
            if (((func_44(l_367, g_16, l_366.f0, l_357) == (((l_373 , (g_16.f0 & ((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((0L >= func_55(func_55(g_16.f0, g_59, p_40), g_59, p_41)), 6)) | p_40), l_393)) && 0x6277D689L) , p_41) >= l_367.f1))) != g_59.f0) && 0x2539A142L)) , 0x8985D283L))
            {
                int l_416 = 0x7CC9AF1DL;
                int l_418 = (-7L);
                union U1 l_425 = {1UL};
                g_83 = ((safe_sub_func_int32_t_s_s((g_83 >= ((g_76 > 0xD234E86CL) <= (((g_59 = l_367) , (g_240 <= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(0x322CL, 8)) || 0x8BL), 7)))) < (l_417 = (safe_lshift_func_int16_t_s_u((p_38 == (l_416 = (g_415 = (safe_lshift_func_uint8_t_u_s((((((l_393 = ((p_41 != g_244.f1) ^ p_38)) & l_372) || 0x85FD5CD2L) <= 4L) < l_357.f0), g_201))))), 9)))))), 0x9E3DA630L)) > l_418);
                l_393 = (l_418 = (safe_sub_func_uint32_t_u_u(l_364, ((((4UL > func_55((safe_lshift_func_int8_t_s_u(l_372, ((safe_mod_func_int32_t_s_s(p_39, g_201)) > (l_418 && ((g_244.f0 = g_69) >= l_393))))), l_425, g_16.f1)) == 0x4C20A336L) ^ l_426) >= l_425.f1))));
            }
            else
            {
                unsigned short l_431 = 0x43C9L;
                int l_432 = 0x418ACEA6L;
                union U1 l_439 = {0UL};
                if ((safe_sub_func_int8_t_s_s(((l_372 > 0L) , p_41), (0x6F13AC1AL && (safe_lshift_func_uint16_t_u_u(((l_432 = (0xA8L < (l_364 = l_431))) != (p_41 , ((func_55((safe_lshift_func_int16_t_s_s(((l_426 = g_77) < (l_435 = func_55(g_244.f0, g_59, g_59.f0))), 5)), l_367, g_59.f0) && 4294967288UL) , g_2))), p_40))))))
                {
                    unsigned char l_436 = 0UL;
                    const union U1 l_437 = {6UL};
                    union U0 l_440 = {0x7D89L};
                    l_441 = ((l_436 , (l_372 = func_44(l_437, l_438, l_437.f1, l_439))) || (g_16.f1 , (((l_440 = g_16) , ((((((0UL || g_59.f1) & g_77) <= g_77) || l_432) < 0x368AEAEAL) > 0x44BE889EL)) || 0x4F8DL)));
                    return g_415;
                }
                else
                {
                    int l_445 = (-10L);
                    union U1 l_446 = {1UL};
                    l_432 = (!(g_204 = ((p_39 < (g_83 = (p_41 = (l_442 , p_38)))) , 0x35E1867BL)));
                    p_40 = func_55(p_40, l_367, (g_415 = g_111));
                    for (l_431 = (-17); (l_431 < 48); l_431 = safe_add_func_uint8_t_u_u(l_431, 6))
                    {
                        short l_447 = 0x6FAAL;
                        if (l_445)
                            break;
                        l_364 = (func_49(((l_438 , ((-5L) & p_40)) , l_446), (!l_432)) , func_55(p_39, g_59, func_44(l_366, g_244, l_447, l_367)));
                        p_41 = (+l_426);
                    }
                }
            }
            l_372 = (((safe_mod_func_int8_t_s_s(g_147, (~(safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((((((g_59.f0 & ((((func_55(l_442.f0, (g_456 = l_367), l_417) & 0x7DECL) == l_364) && p_41) ^ 0xFBF8L)) | 0x9B478E61L) > (-1L)) <= p_40) == l_364) == p_41), 4)), 12)) & p_40), l_367.f0))))) & 5UL) | g_244.f1);
            l_426 = ((g_244 = l_438) , (p_39 , func_44(l_457, g_16, p_38, l_457)));
            for (g_77 = 0; (g_77 <= 13); g_77++)
            {
                unsigned l_474 = 0x07C89B16L;
                union U1 l_497 = {0x8237D19FL};
                l_473 = (safe_sub_func_int32_t_s_s(((-10L) || (l_365 || ((safe_add_func_uint32_t_u_u(p_38, ((0x8F1BL < (safe_add_func_int32_t_s_s(p_41, (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((func_55(p_39, g_456, l_442.f1) < (-10L)) ^ g_79), l_441)), 4)) == p_40), 0x2C22B096L))))) , 0x0E178A0DL))) != l_472))), 0x13ECCE02L));
                l_474 = (0x30L != (g_178 != g_16.f1));
                for (l_441 = 0; (l_441 < 48); l_441 = safe_add_func_uint32_t_u_u(l_441, 4))
                {
                    g_204 = p_40;
                    g_83 = (safe_add_func_int32_t_s_s(3L, (safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(0x1935L, func_55((((safe_lshift_func_uint8_t_u_s(g_79, (safe_lshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(1UL, func_55(g_79, ((g_147 >= (safe_mod_func_uint8_t_u_u((p_39 , ((safe_rshift_func_int16_t_s_s((g_147 > func_55(l_472, l_497, l_473)), 15)) & 7L)), 0x05L))) , l_498), g_240))) == g_244.f0), 7)), g_327)) <= 65535UL), g_2)))) >= g_327) , p_40), l_457, g_16.f1))) & g_76), 3))));
                    for (l_442.f0 = (-11); (l_442.f0 <= 17); ++l_442.f0)
                    {
                        return g_415;
                    }
                    return p_41;
                }
            }
        }
    }
    else
    {
        p_40 = p_41;
    }
    p_40 = (0x35L ^ ((g_244 , (safe_mod_func_uint16_t_u_u(8UL, p_39))) == l_441));
    return p_40;
}







static unsigned short func_44(const union U1 p_45, union U0 p_46, unsigned p_47, union U1 p_48)
{
    unsigned short l_81 = 0xF2DBL;
    int l_82 = 0x343DEF57L;
    int l_108 = 1L;
    unsigned l_117 = 0xB00F8C8FL;
    union U1 l_124 = {0x4C97A610L};
    char l_128 = (-1L);
    int l_141 = 0L;
    short l_146 = 0L;
    int l_162 = (-3L);
    int l_205 = 0xACFB1E1FL;
    int l_354 = 0x7543B05DL;
    if (p_45.f0)
    {
        union U1 l_86 = {0x98B2365BL};
        int l_92 = 0x433A0315L;
        g_83 = (l_82 = ((-7L) & l_81));
        l_82 = p_45.f1;
        if ((g_83 = p_47))
        {
            l_82 = 0x8A1B6174L;
            l_92 = (safe_mod_func_uint16_t_u_u(l_81, (p_45.f1 || ((l_86 , ((safe_add_func_int8_t_s_s(((g_2 >= 0xF1L) <= g_2), ((!(safe_unary_minus_func_int32_t_s(p_47))) != (safe_rshift_func_int8_t_s_s(func_55(l_86.f1, l_86, g_79), 7))))) ^ p_48.f1)) , l_82))));
            g_83 = g_59.f0;
        }
        else
        {
            unsigned short l_112 = 1UL;
            for (l_86.f0 = 0; (l_86.f0 != 11); l_86.f0 = safe_add_func_uint16_t_u_u(l_86.f0, 1))
            {
                g_83 = g_77;
            }
            for (l_86.f0 = (-26); (l_86.f0 > 35); ++l_86.f0)
            {
                short l_109 = (-9L);
                int l_110 = 1L;
                l_112 = (g_111 = ((p_48.f1 == ((((safe_sub_func_int32_t_s_s(g_77, p_45.f0)) , p_45.f1) <= ((safe_sub_func_uint16_t_u_u(0x5ED5L, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((g_83 = (65535UL > (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((0xC6L && p_46.f1), p_45.f1)))))) <= l_108) > l_109), 7)), g_16.f1)))) | g_76)) , l_110)) || 0UL));
                l_92 = func_55(l_112, p_45, func_55(((((+l_112) & (l_82 = ((g_2 != (safe_mod_func_int32_t_s_s((p_45.f1 & ((p_46.f1 = (l_110 == l_109)) ^ func_55(g_59.f1, g_59, g_111))), g_59.f0))) <= g_76))) != g_59.f1) && 0x3B5EL), g_59, g_59.f1));
                if (l_117)
                    break;
            }
        }
    }
    else
    {
        unsigned char l_118 = 0xEFL;
        int l_119 = 0x03596026L;
        int l_125 = 1L;
        l_118 = p_48.f1;
        l_119 = l_118;
        l_82 = (safe_add_func_int8_t_s_s(g_111, (l_119 , (0x706CL || func_55((((safe_mul_func_int32_t_s_s((l_119 & g_59.f0), (p_46.f0 < (g_69 = l_82)))) || g_16.f1) < g_2), l_124, l_125)))));
        g_83 = (safe_lshift_func_uint8_t_u_s((((l_128 & 5UL) , p_45.f1) & ((+((safe_add_func_uint16_t_u_u(p_46.f0, (safe_sub_func_uint8_t_u_u((func_55((safe_add_func_int32_t_s_s(((g_76 = (p_46.f0 < l_108)) > 7UL), 0x949FC4A8L)), l_124, p_46.f1) <= g_79), p_45.f0)))) & g_59.f1)) | 0x8E4B99A0L)), 3));
    }
    l_82 = (func_55((safe_sub_func_int16_t_s_s((l_108 = (0UL < ((safe_sub_func_uint8_t_u_u(l_108, g_77)) & ((-8L) >= l_117)))), (g_2 <= g_79))), p_48, p_47) > g_16.f1);
    l_108 = ((safe_rshift_func_int16_t_s_s((g_147 = func_55((l_141 && (safe_add_func_uint8_t_u_u((l_82 = func_55(p_48.f1, (p_45.f0 , func_49(p_48, ((safe_sub_func_uint32_t_u_u(0x827A6358L, (((func_55(l_146, p_48, l_81) & 4294967286UL) < g_77) , 2L))) >= l_124.f0))), p_46.f0)), (-4L)))), g_59, g_2)), 7)) > p_46.f1);
    if (((~(func_55(func_55(((safe_lshift_func_int8_t_s_s(p_45.f0, 5)) == ((p_47 = g_77) > (((safe_mod_func_uint16_t_u_u((l_128 | p_48.f0), p_45.f0)) , (safe_rshift_func_int16_t_s_u(g_69, (safe_lshift_func_uint8_t_u_s(p_45.f1, (safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(l_162, l_146)) != p_45.f1), l_128)) , 0x1BL), p_46.f1))))))) , 0xB6088253L))), p_45, l_124.f1), g_59, g_2) < g_83)) >= 0xC2L))
    {
        char l_165 = 1L;
        int l_200 = 0x286E7879L;
        short l_228 = 0L;
        int l_241 = (-1L);
        const int l_242 = 0x40D45DD2L;
        union U1 l_263 = {0x8C4D48E7L};
        unsigned l_272 = 4294967295UL;
        int l_314 = 0xFBDC08B3L;
        int l_315 = 0x3A238EC8L;
        l_108 = ((safe_sub_func_uint16_t_u_u(0xCF20L, l_165)) < l_141);
        for (g_83 = (-10); (g_83 == 15); g_83 = safe_add_func_int32_t_s_s(g_83, 8))
        {
            short l_206 = 7L;
            int l_219 = (-1L);
            if (g_79)
            {
                unsigned l_184 = 0x6C87C1BEL;
                union U1 l_207 = {0UL};
                short l_243 = 0L;
                int l_284 = (-8L);
                for (p_46.f1 = 0; (p_46.f1 <= 16); p_46.f1 = safe_add_func_uint16_t_u_u(p_46.f1, 6))
                {
                    unsigned l_179 = 0x7455E0D3L;
                    int l_199 = 6L;
                    if (((safe_mod_func_int32_t_s_s(l_165, l_165)) , (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_178, (l_179 <= (safe_lshift_func_int16_t_s_u(((l_184 ^ (safe_mod_func_int32_t_s_s(((p_46.f0 < (func_55(l_165, ((safe_add_func_uint8_t_u_u(0xB6L, 0xBBL)) , p_45), p_46.f1) ^ l_179)) || g_111), 4294967291UL))) , 0L), 4))))) ^ g_76), p_48.f0)) && p_45.f0), l_179))))
                    {
                        char l_202 = 0L;
                        int l_203 = 0x99FEAB6EL;
                        g_204 = (g_178 & (l_184 >= ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((l_202 = ((g_201 = ((l_200 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(g_111, 4)) > (l_141 = 1UL)), g_16.f0)) != p_46.f1), (p_46.f0 < (l_199 = l_165))))) || p_46.f0)) < l_124.f0)) | l_203), 2)), l_184)) && 0x2F150D18L)));
                    }
                    else
                    {
                        l_199 = (g_204 = (l_184 < 0x87F9L));
                    }
                    l_200 = func_55(((g_16 , ((func_55(g_69, p_48, p_45.f0) > (l_205 && (func_55(l_206, l_207, l_200) != p_45.f0))) & 0xAC00L)) , g_59.f1), p_45, p_48.f0);
                    for (l_200 = 13; (l_200 != 19); ++l_200)
                    {
                        int l_220 = (-1L);
                        g_204 = (((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((p_45.f1 != (safe_unary_minus_func_uint16_t_u(l_141))) , ((0xC51EL == (safe_sub_func_uint32_t_u_u(l_141, (l_219 = ((l_124.f0 >= (safe_lshift_func_int8_t_s_u((7UL <= (-3L)), 7))) > g_69))))) | g_16.f1)), g_69)), 0xA95BL)) , p_47) | l_146) , 0x952AE489L) >= l_220);
                    }
                }
                if ((p_45.f0 < ((((l_219 = (-10L)) ^ (g_2 < (safe_rshift_func_uint16_t_u_u(p_45.f1, ((l_228 = (g_79 | ((safe_sub_func_uint8_t_u_u((g_76 = g_69), (safe_unary_minus_func_uint8_t_u((l_124 , (((safe_sub_func_int16_t_s_s(g_59.f0, 3L)) || g_77) != p_47)))))) < (-1L)))) & p_48.f1))))) < g_79) ^ 0x7EL)))
                {
                    short l_234 = 0xF6EFL;
                    union U0 l_239 = {65535UL};
                    int l_253 = 0x9169658BL;
                    union U1 l_264 = {18446744073709551609UL};
                    if ((l_162 <= (((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((l_128 < ((p_46.f1 = ((safe_lshift_func_int8_t_s_s(((l_141 = (g_240 = func_55(l_234, p_48, ((safe_sub_func_int8_t_s_s(1L, l_228)) || (safe_sub_func_uint8_t_u_u(func_55((l_82 = ((l_239 = p_46) , (((l_205 , g_59.f0) > 0xCA30L) , p_46.f0))), g_59, p_48.f0), 0x8DL)))))) ^ l_241), 6)) & l_242)) | g_2)))) & p_45.f0), 0xAEBBL)) > p_45.f1) != l_206)))
                    {
                        g_204 = l_243;
                        return g_77;
                    }
                    else
                    {
                        int l_262 = 0xF503D315L;
                        l_141 = 0L;
                        l_253 = ((((g_244 = g_16) , (g_244.f0 = (g_178 , ((safe_lshift_func_int16_t_s_u(((g_201 != (-7L)) || (func_55(p_46.f0, ((safe_lshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(g_204, p_45.f1)), g_204)) , (p_45.f0 ^ p_45.f1)) ^ p_45.f0), l_228)) , p_48), p_45.f1) == 0L)), 2)) <= 3UL)))) <= p_45.f1) , g_204);
                        if (l_206)
                            continue;
                        g_204 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_46.f1, func_55((safe_sub_func_int16_t_s_s((-4L), (safe_rshift_func_uint16_t_u_s((l_262 >= func_55((l_219 = (((func_55(p_45.f0, (l_263 = func_49(p_45, l_206)), p_47) != p_48.f1) >= 4L) , g_16.f0)), l_264, l_262)), l_228)))), l_264, p_45.f1))), 6));
                    }
                    for (l_239.f0 = 0; (l_239.f0 != 53); l_239.f0 = safe_add_func_int8_t_s_s(l_239.f0, 2))
                    {
                        if (p_48.f1)
                            break;
                        g_204 = p_48.f1;
                    }
                    return l_206;
                }
                else
                {
                    int l_269 = 0xBC13450BL;
                    for (g_76 = (-25); (g_76 < 28); g_76 = safe_add_func_int32_t_s_s(g_76, 1))
                    {
                        return l_269;
                    }
                    for (l_128 = 0; (l_128 <= 26); l_128 = safe_add_func_uint32_t_u_u(l_128, 1))
                    {
                        return p_46.f1;
                    }
                    if (g_240)
                    {
                        unsigned l_278 = 0x4B5358D9L;
                        l_278 = (0xE2L <= (((p_48.f0 | l_272) || ((safe_unary_minus_func_int8_t_s(func_55((((safe_sub_func_int8_t_s_s((g_201 = (l_269 > func_55(g_83, func_49(g_59, l_269), (safe_mod_func_uint16_t_u_u(l_207.f0, g_244.f1))))), 246UL)) & 0x272CL) & p_47), p_48, g_2))) != p_48.f0)) == g_2));
                        g_204 = l_278;
                    }
                    else
                    {
                        unsigned short l_283 = 1UL;
                        l_269 = ((0UL | ((((((((~((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((g_79 || (g_244.f0 != (l_284 = l_283))) & ((3UL > (!p_48.f1)) < l_283)) > p_48.f0), 7)) , (safe_mod_func_uint32_t_u_u((g_59.f0 == 0xC02CL), g_69))), l_108)) < g_2)) >= l_269) <= g_111) < (-6L)) | (-3L)) & 0xAFA11A28L) == p_48.f0) || 0xA8L)) || l_219);
                        l_269 = p_48.f0;
                        l_82 = (safe_mod_func_uint16_t_u_u(65531UL, (l_263.f1 && g_59.f1)));
                    }
                    l_269 = (g_59.f0 || p_48.f1);
                }
            }
            else
            {
                char l_293 = 0L;
                union U1 l_309 = {18446744073709551615UL};
                for (l_263.f0 = 0; (l_263.f0 <= 28); ++l_263.f0)
                {
                    unsigned short l_303 = 65528UL;
                    if ((g_59.f1 >= (safe_mod_func_int16_t_s_s(g_16.f1, p_45.f0))))
                    {
                        char l_294 = (-4L);
                        int l_295 = 0x3E8CAEB4L;
                        int l_302 = (-1L);
                        g_204 = ((l_293 , (p_45 , ((g_111 || (func_55(g_77, (p_48.f1 , g_59), g_240) , (g_244.f0 , 0x20L))) && g_204))) || p_45.f0);
                        l_303 = (((l_295 = l_294) | (l_302 = (((safe_lshift_func_int16_t_s_s(p_46.f1, 7)) , func_55(l_124.f0, g_59, func_55((g_76 = (safe_add_func_int8_t_s_s((0xCB81L ^ (safe_lshift_func_int8_t_s_s(l_219, (g_178 = l_294)))), p_47))), g_59, p_48.f1))) > 0L))) != p_46.f1);
                        l_108 = g_79;
                    }
                    else
                    {
                        union U1 l_308 = {18446744073709551608UL};
                        if (p_48.f1)
                            break;
                        g_204 = (((l_303 < (p_48.f0 && (((((safe_rshift_func_int16_t_s_u(g_204, (g_69 >= func_55(l_303, p_48, ((g_111 > func_55((safe_add_func_uint16_t_u_u((p_48.f0 ^ func_55((((-1L) < 0xB1L) , 0xC2L), l_308, g_240)), l_219)), l_309, p_48.f0)) | g_111))))) > l_309.f0) || g_178) < l_303) , 0x2C24L))) && g_201) && l_108);
                        g_204 = g_178;
                    }
                }
            }
            return p_48.f1;
        }
        l_315 = (p_45.f1 > (l_141 = ((1L == (((l_314 = (~((p_46.f1 = p_47) , (l_200 = (p_46.f0 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(l_82, 0xCCL)), 1))))))) < 0x5E57L) == g_59.f0)) , (l_200 = 0xAAL))));
    }
    else
    {
        unsigned l_319 = 0x32CC213EL;
        union U1 l_322 = {2UL};
        int l_328 = 0x5C6F841FL;
        char l_335 = 0xF2L;
        int l_350 = 0xAE75F934L;
        int l_353 = 6L;
        l_328 = (safe_unary_minus_func_uint32_t_u(((0L >= (safe_lshift_func_uint8_t_u_u(p_48.f0, (((l_162 & ((((l_82 = l_319) < g_240) , ((func_55(l_319, l_322, ((g_79 < (((g_327 = (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(0xF793L, l_82)) ^ l_82), g_178))) != l_146) != g_244.f1)) == 0x15L)) && 1L) == 0UL)) <= 5UL)) ^ 0x20E8FBAAL) <= l_322.f1)))) < p_45.f1)));
        if ((g_201 != ((safe_add_func_int32_t_s_s(((func_55(l_205, func_49(l_322, (l_335 = (safe_rshift_func_int8_t_s_u(1L, (safe_add_func_int16_t_s_s(func_55((p_46.f1 , l_146), p_48, g_111), 4L)))))), l_319) || g_77) != p_45.f0), 0x590934E4L)) , g_16.f0)))
        {
            g_204 = (p_46.f0 >= 0xCBL);
            g_83 = (-1L);
        }
        else
        {
            int l_338 = 0xB16D34A9L;
            union U1 l_349 = {0x5A6F232CL};
            for (g_79 = 0; (g_79 >= 5); g_79 = safe_add_func_int16_t_s_s(g_79, 5))
            {
                unsigned short l_339 = 65532UL;
                int l_346 = 3L;
                l_338 = p_45.f1;
                l_338 = func_55(((p_46.f0 > l_117) || l_339), p_48, (safe_sub_func_uint16_t_u_u((((!(safe_sub_func_int32_t_s_s((((l_350 = (safe_rshift_func_uint8_t_u_s((l_328 = (l_339 ^ ((l_346 & ((safe_mod_func_int16_t_s_s(((l_108 <= func_55(p_46.f0, (l_349 = l_322), p_46.f0)) ^ 0x7DD56023L), l_338)) , 0L)) >= l_162))), g_69))) == g_77) , 0xD3A3C413L), g_244.f0))) , l_349.f1) , 0xD604L), g_147)));
            }
        }
        g_204 = (safe_rshift_func_int8_t_s_s(p_45.f0, l_353));
    }
    return l_354;
}







static const union U1 func_49(union U1 p_50, int p_51)
{
    short l_68 = 0xCDB5L;
    int l_70 = (-3L);
    int l_71 = 0xA24E228CL;
    union U1 l_78 = {18446744073709551615UL};
    short l_80 = 0xBF28L;
    g_77 = (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(0x153AA9B2L, ((safe_rshift_func_uint16_t_u_s((3UL == (l_68 > func_55((((g_69 = (g_16 , g_16.f0)) <= (l_71 = (l_70 = l_68))) , (g_76 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((g_16 , (l_70 = (+l_68))), (g_69 != 0x47L))), 2)))), p_50, p_50.f0))), p_50.f1)) == l_68))) != l_68), l_68)), 0x287676E3L));
    g_79 = func_55(p_50.f1, l_78, (l_70 = (0UL ^ (g_76 , 1L))));
    l_80 = p_51;
    return l_78;
}







static unsigned short func_55(unsigned char p_56, union U1 p_57, unsigned char p_58)
{
    return p_57.f1;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    transparent_crc(g_244.f1, "g_244.f1", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f1, "g_456.f1", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
