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
   volatile unsigned f0;
};

union U1 {
   unsigned f0;
   short f1;
};

union U2 {
   int f0;
   unsigned f1 : 22;
   short f2;
   char f3;
};


static unsigned char g_18 = 1UL;
static short g_47 = 6L;
static unsigned g_70 = 0xFADBACD6L;
static unsigned short g_99 = 0UL;
static unsigned g_102 = 0UL;
static unsigned short g_105 = 1UL;
static unsigned g_126 = 0x7223651BL;
static unsigned char g_129 = 0x3BL;
static unsigned g_146 = 0UL;
static int g_160 = 0xA19B6E0FL;
static unsigned g_167 = 0x5BAC4518L;
static union U1 g_184 = {5UL};
static int g_200 = 2L;
static short g_201 = 1L;
static unsigned g_210 = 18446744073709551613UL;
static unsigned char g_235 = 255UL;
static unsigned short g_243 = 65528UL;
static unsigned char g_251 = 255UL;
static union U2 g_348 = {0xEA91B572L};
static unsigned g_397 = 0x4FE84DE2L;
static unsigned g_427 = 4294967288UL;
static union U1 g_498 = {0x76497212L};
static unsigned g_628 = 0x2F1D3784L;
static volatile unsigned g_637 = 0x7CAC5315L;
static int g_649 = 1L;
static char g_745 = 0x89L;
static int g_859 = 0x054A2E37L;
static int g_876 = 0x3547C61BL;
static unsigned char g_990 = 0x9DL;
static unsigned g_1062 = 9UL;
static union U1 g_1118 = {4294967292UL};
static int g_1167 = (-3L);
static unsigned short g_1188 = 2UL;
static union U0 g_1192 = {5UL};



static union U0 func_1(void);
static char func_5(int p_6, unsigned p_7);
static int func_25(int p_26, union U1 p_27);
static unsigned char func_32(char p_33, unsigned p_34, short p_35);
static char func_36(union U2 p_37, union U2 p_38, short p_39, union U1 p_40);
static union U2 func_41(union U2 p_42, unsigned short p_43);
static union U2 func_44(int p_45, int p_46);
static int func_48(int p_49, int p_50, unsigned p_51, unsigned p_52);
static int func_55(union U1 p_56, unsigned p_57, unsigned char p_58, char p_59, int p_60);
static union U1 func_61(unsigned short p_62, union U2 p_63, char p_64);
static union U0 func_1(void)
{
    int l_2 = 1L;
    union U1 l_28 = {2UL};
    int l_1185 = 0L;
    int l_1189 = 1L;
    unsigned l_1190 = 1UL;
    l_1189 = (l_2 & (safe_rshift_func_int8_t_s_s(func_5((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((g_18 | (4294967286UL < ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_18, (g_18 == ((l_1185 = func_25(l_2, l_28)) == (g_1188 = (safe_add_func_uint16_t_u_u((g_1167 < l_28.f1), g_18))))))), l_1189)) ^ l_28.f1), l_1190)) <= 0xC88ED455L))) == 0UL), 0xBB8AL)) & g_1167), 1)), l_28.f1)), g_1118.f1)), g_397), 5)));

                return g_1192;

    }







static char func_5(int p_6, unsigned p_7)
{
    unsigned char l_1191 = 255UL;
    return l_1191;
}







static int func_25(int p_26, union U1 p_27)
{
    unsigned short l_29 = 0x0CD9L;
    union U2 l_497 = {-1L};
    unsigned char l_534 = 0UL;
    unsigned char l_550 = 0x58L;
    int l_566 = (-3L);
    unsigned l_586 = 4294967295UL;
    union U1 l_619 = {0xBB404D8FL};
    unsigned char l_648 = 255UL;
    int l_729 = 7L;
    unsigned l_804 = 0x7A28F759L;
    unsigned l_805 = 0x41B59E9BL;
    unsigned char l_836 = 0xE7L;
    int l_850 = (-7L);
    unsigned l_875 = 0x3C9C1D53L;
    union U1 l_933 = {0x1AD6DC3CL};
    union U1 l_934 = {0UL};
    unsigned l_995 = 0xC64225F5L;
    unsigned short l_997 = 0xAD2DL;
    short l_1145 = 0x5FA8L;
    unsigned l_1162 = 18446744073709551606UL;
    if ((((g_18 > (l_29 < g_18)) >= (~((4294967295UL | ((safe_mod_func_uint8_t_u_u(func_32(((func_36(func_41(func_44(l_29, (g_47 = l_29)), p_26), l_497, g_243, g_498) >= g_251) >= g_498.f1), g_18, l_534), g_397)) >= p_27.f1)) != p_27.f1))) | 0x1E27L))
    {
        unsigned short l_547 = 0x3D9CL;
        union U1 l_559 = {0x941AC8B8L};
        int l_564 = (-6L);
        int l_565 = 1L;
        int l_567 = 1L;
        unsigned l_587 = 7UL;
        char l_618 = 0x1DL;
        unsigned short l_672 = 1UL;
        short l_683 = (-2L);
        union U2 l_707 = {0x87D2E75FL};
        unsigned l_728 = 0x348A3BB4L;
        unsigned char l_909 = 0x59L;
        int l_928 = 0L;
        short l_939 = 0xF697L;
        unsigned l_1047 = 18446744073709551615UL;
lbl_621:
        l_567 = (p_27.f0 > ((g_129 = (p_26 == (safe_mod_func_int16_t_s_s(p_27.f1, g_18)))) < (((!((l_547 && (safe_mod_func_int16_t_s_s(l_550, (l_566 = (l_565 = ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_348.f3 = (l_497.f3 & func_55(l_559, (l_564 = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_497.f2, 0xFB20L)), g_397))), g_18, p_27.f0, p_27.f0))), g_397)), l_497.f2)), p_27.f1)), 0x8D62L)) & 4294967295UL)))))) && g_200)) || g_99) < 0x9427F389L)));
        if (p_26)
        {
            union U2 l_568 = {0x95CEEF5BL};
            int l_573 = (-1L);
            l_573 = (((func_36(l_568, l_497, (func_32((safe_add_func_uint8_t_u_u(l_564, (safe_div_func_int16_t_s_s(g_70, l_568.f2)))), func_48(l_568.f3, l_497.f3, p_26, func_48(((0x52CD5BA0L >= p_27.f1) ^ p_27.f0), g_99, p_27.f0, g_167)), p_27.f0) != 0x2EL), p_27) & l_497.f0) <= 9UL) == p_27.f1);
        }
        else
        {
            unsigned l_578 = 2UL;
            int l_593 = 0x0808413CL;
            int l_620 = (-7L);
            for (l_559.f1 = 22; (l_559.f1 != (-17)); l_559.f1--)
            {
                char l_594 = 0L;
                union U2 l_600 = {0xC8FF984AL};
                for (l_497.f0 = 0; (l_497.f0 < (-8)); l_497.f0--)
                {
                    unsigned char l_579 = 0x7FL;
                    l_578 = 0x6E0A5AD7L;
                    l_579 = 9L;
                    for (g_146 = 0; (g_146 <= 59); ++g_146)
                    {
                        char l_592 = 0xB7L;
                        int l_595 = (-1L);
                        g_200 = (((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_27.f0 != l_586), ((l_587 & (((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_27.f0, l_547)), (0x8B4B6AA7L < (((((l_593 = (l_592 = 0x0CL)) == l_594) && 0L) == g_184.f1) && g_126)))) ^ l_595) <= l_594) & p_27.f0) ^ p_27.f0)) > g_70))), p_27.f0)) || l_594) != 0xE43BB97FL);
                        if (g_146)
                            goto lbl_1181;
                    }
                }
                if (g_47)
                    continue;
                for (l_565 = 0; (l_565 != (-27)); l_565--)
                {
                    short l_601 = 0x3F63L;
                    l_601 = (func_48((p_27.f1 ^ (func_32((l_565 <= l_600.f2), g_397, g_348.f3) != g_146)), g_251, g_146, p_27.f1) && 0xD708L);
                }
            }
            l_566 = (l_620 = ((l_593 = (1L && g_251)) ^ 65534UL));
            if (g_99)
                goto lbl_621;
            l_566 = (safe_sub_func_int16_t_s_s(((-1L) || ((func_32((((g_235 < (((((((g_348.f3 = ((((((l_567 = 0xC4L) < (safe_rshift_func_uint8_t_u_s(0x84L, g_146))) >= (g_628 = (g_200 = l_497.f2))) <= g_498.f1) || 1L) | (((p_27.f0 | l_619.f1) <= 65535UL) == p_26))) <= 6L) == 0x0941B708L) && p_26) <= p_26) | p_26) || l_497.f0)) < 0L) < g_397), p_27.f1, p_26) == p_26) < 0xDEL)), g_251));
        }
        if (p_27.f0)
        {
            return g_498.f1;
        }
        else
        {
            unsigned char l_640 = 4UL;
            int l_641 = (-1L);
            int l_715 = 0x5BB38192L;
            unsigned short l_723 = 0x8910L;
            unsigned short l_736 = 65531UL;
            if ((((+(func_32(((safe_div_func_int8_t_s_s(0xCAL, (safe_rshift_func_int16_t_s_u(g_160, 2)))) || l_497.f3), (safe_mul_func_int8_t_s_s(p_27.f0, (g_129 == ((safe_add_func_int8_t_s_s(g_235, ((l_566 = (0x1DBBL && g_637)) | (safe_add_func_int16_t_s_s(l_618, 0xA234L))))) && l_640)))), p_27.f1) > 0xBCL)) & p_27.f1) | p_27.f0))
            {
                short l_642 = 0xED3FL;
                if (func_55(p_27, p_26, (p_27.f1 || g_105), p_27.f1, l_642))
                {
                    g_200 = 0x02904F15L;
                }
                else
                {
                    l_566 = l_642;
                }
            }
            else
            {
                unsigned l_643 = 4294967288UL;
                int l_693 = 0x3B0BEAC7L;
                int l_716 = (-3L);
                int l_720 = 0xE956ADEDL;
                if (func_48(p_26, (0x014CL > ((p_27.f1 || g_628) != g_251)), g_210, g_210))
                {
                    union U1 l_652 = {4UL};
                    int l_671 = 0x9C9C9D8CL;
                    l_643 = (l_565 = g_427);
                    g_649 = (((safe_add_func_uint32_t_u_u((l_559.f1 >= (-8L)), p_27.f0)) >= (p_27.f0 || (l_640 == func_32(g_160, (l_565 = 4UL), ((safe_rshift_func_int16_t_s_s(p_27.f0, (!0xABBAL))) & 1L))))) && l_648);
                    l_641 = ((safe_add_func_uint32_t_u_u(g_129, ((func_55(l_652, (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(0x1AL, ((safe_mod_func_uint32_t_u_u((p_27.f0 = (safe_div_func_int8_t_s_s((l_567 = ((p_27.f0 == (l_643 & 0xE56DL)) == (l_672 = ((safe_rshift_func_int16_t_s_u(l_619.f0, (l_671 = (safe_sub_func_uint16_t_u_u((g_243 = ((2L ^ func_32(((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((g_105 = (safe_mod_func_uint16_t_u_u((p_26 < 0x712821E9L), 1UL))), 13)) != p_27.f0) == g_99), l_643)) != 0x081B1972L), g_129, g_129)) == g_47)), l_652.f0))))) & l_643)))), p_27.f1))), p_26)) & 0xDB44947BL))) && p_27.f0), (-1L))), l_566, p_26, p_26) != p_26) >= 0x62FAL))) && (-1L));
                    if (l_643)
                    {
                        g_200 = (((g_47 = (safe_div_func_uint16_t_u_u((((l_566 = (7L < 0x93L)) & ((p_26 > ((p_26 > (safe_mod_func_int32_t_s_s(g_210, (l_641 = l_643)))) & (p_27.f1 == p_27.f0))) == (safe_add_func_int16_t_s_s(g_427, 0x6F30L)))) & 1L), 0xF5AFL))) | 0xC64BL) > p_27.f1);
                    }
                    else
                    {
                        return g_235;
                    }
                }
                else
                {
                    int l_692 = 0x03EF6716L;
                    int l_694 = 1L;
                    union U2 l_708 = {2L};
                    g_200 = (l_643 & (0xF52B307CL | (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((g_129 < (((g_498.f1 != (l_565 < p_26)) && (g_201 >= (p_27.f0 != (0x6DF2B94EL || 0x22400E71L)))) == g_348.f3)) < 0xEDB1L), p_27.f0)) >= l_683), 4))));
                    if (((l_694 = ((g_167 | (safe_mod_func_int16_t_s_s((-1L), 0x1A99L))) < ((safe_add_func_int8_t_s_s(g_184.f1, p_26)) > ((p_27.f0 = (safe_mod_func_int16_t_s_s((-1L), g_649))) == (l_693 = (((g_200 = 0x7D234256L) | ((l_692 > p_26) >= l_641)) | 8UL)))))) >= l_640))
                    {
                        unsigned l_697 = 0x9C56B4BCL;
                        unsigned char l_704 = 0x91L;
                        int l_705 = 9L;
                        g_200 = (~(safe_lshift_func_int16_t_s_s(l_697, 4)));
                        l_694 = (safe_rshift_func_uint16_t_u_u(g_70, 0));
                        l_705 = ((0xEDF2L >= (safe_sub_func_int32_t_s_s((p_26 & p_26), (g_200 = (0x8FD1L < ((l_694 != 0x1EL) < g_210)))))) || (l_693 = ((g_167 = (((4UL ^ g_160) != l_704) == p_27.f0)) == p_26)));
                    }
                    else
                    {
                        int l_706 = 0x938E2E1EL;
                        int l_717 = (-1L);
                        l_566 = func_48(p_27.f0, p_26, g_251, (func_48(l_693, l_706, func_36(l_707, l_708, p_27.f0, p_27), g_18) | 0x4BL));
                        g_200 = g_146;
                        l_717 = (((safe_rshift_func_int8_t_s_u(g_498.f0, func_48((safe_add_func_int32_t_s_s(g_200, ((((1L && (6L >= g_160)) >= (((-8L) || g_70) && (safe_mod_func_int16_t_s_s((g_210 > (((l_715 = (l_641 = g_184.f1)) && l_716) | 0x6E5BL)), l_550)))) >= l_643) == l_618))), g_498.f1, p_26, l_706))) != l_497.f3) || 0xBB8BBE3EL);
                        l_717 = (l_641 = (g_498.f0 | p_27.f0));
                    }
                }
                for (g_184.f1 = 0; (g_184.f1 != (-8)); g_184.f1--)
                {
                    char l_734 = 1L;
                    int l_735 = 0x91E59B30L;
                    union U1 l_762 = {1UL};
                    l_567 = (l_723 && (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(255UL, (l_729 = ((l_566 = l_728) && g_167)))), p_27.f1)));
                    if ((p_27.f1 ^ (safe_mod_func_int16_t_s_s(((g_251 = (safe_rshift_func_uint16_t_u_u(l_734, 0))) == p_27.f1), 1UL))))
                    {
                        l_735 = l_534;
                        return g_99;
                    }
                    else
                    {
                        g_745 = (func_32(l_736, ((0x7CL || ((safe_sub_func_uint32_t_u_u(func_55(g_498, p_27.f1, g_649, p_26, (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(0x7062632BL, g_235)), (safe_mod_func_int16_t_s_s((l_565 = (-1L)), g_99))))), g_18)) || (-1L))) ^ p_27.f1), p_27.f0) != g_348.f3);
                    }
                    l_567 = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_27.f1, l_641)), l_707.f2)) || 4294967295UL);
                }

                            }

                    }

                if ((((func_32(l_567, g_18, l_559.f1) == l_550) && p_27.f0) > p_27.f0))
        {
            int l_788 = (-1L);
            union U2 l_839 = {1L};
            union U2 l_858 = {0x2F07DBDFL};
            union U1 l_872 = {0x38EECDF3L};
            if ((safe_add_func_uint8_t_u_u(func_32((0xBFECE152L <= p_27.f0), (safe_rshift_func_int8_t_s_s(p_27.f0, 2)), g_200), (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_534, (safe_add_func_int16_t_s_s(3L, (0x02L == 1UL))))), p_27.f0)), p_27.f1)))))
            {
                int l_782 = 0x8F80848FL;
                g_200 = (safe_unary_minus_func_int32_t_s(((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(8UL, (0xBBL > l_619.f1))), (safe_rshift_func_int8_t_s_s((g_427 | (l_782 & l_550)), 0)))) ^ ((safe_lshift_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(l_648)) == g_129), (0xEAL || l_550))) | g_498.f0) || 4294967290UL) && p_26), g_126)) && l_788))));
                return g_99;
            }
            else
            {
                unsigned l_801 = 0xC9EA31A1L;
                int l_835 = 0L;
                int l_837 = (-1L);
                union U2 l_840 = {0xDF0E9153L};
                int l_855 = 0x263C872CL;
                if ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(((l_788 = func_48((((g_18 >= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((p_26 < (l_801 <= (-10L))), 2)) > l_801), g_99))) ^ (l_566 = ((g_99 ^ (safe_mod_func_uint32_t_u_u(g_210, l_801))) < g_243))) != l_497.f3), g_498.f0, g_745, g_105)) != g_243), g_628)), 0x1D30L)) && l_534) >= l_804), l_801)))
                {
                    union U1 l_827 = {4294967295UL};
                    int l_834 = 1L;
                    l_788 = (-9L);
                    l_805 = (l_728 >= g_210);
                    l_837 = (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u((((((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((l_565 = (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((l_835 = func_48((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((g_129 = l_801), p_27.f0)), (0x5265L || (((0xE5L <= p_27.f0) > func_55((l_827 = g_498), g_167, (safe_div_func_int32_t_s_s(((((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((g_184.f1 > (g_200 = (-8L))), g_99)) == p_27.f0) <= p_27.f0), g_637)) == g_427) > g_99) && 65529UL), l_834)), g_427, l_497.f3)) || l_619.f0)))), g_47)), p_26, l_707.f3, l_566)), l_836)), 0x218BA88CL)) & g_184.f1), 0x6AD239D1L))), 3)) >= g_99) != l_729) && g_184.f1), p_26)), 0xABDDL)) | g_427) <= p_27.f0) >= 0x36L) == l_567), g_160))));
                }
                else
                {
                    union U2 l_838 = {0x201F806FL};
                    int l_843 = 3L;
                    l_788 = (p_27.f1 != (l_564 != func_36((l_839 = l_838), l_840, g_498.f1, p_27)));
                    for (l_801 = (-8); (l_801 <= 7); l_801 = safe_add_func_int8_t_s_s(l_801, 7))
                    {
                        unsigned l_846 = 0xDA2A9EE4L;
                        union U1 l_849 = {0x6E44D405L};
                        l_788 = (((l_846 & (0xF20E5E0DL != 1L)) | ((l_559.f1 && g_210) || (l_801 <= l_849.f0))) >= g_146);
                        return l_840.f1;
                    }
                    g_200 = (l_707.f3 && (!l_850));
                }
                g_859 = (g_200 = l_586);
                l_835 = ((g_200 = (safe_lshift_func_int8_t_s_s(g_243, 3))) < p_27.f1);
                l_565 = p_27.f1;
            }
            if ((g_876 = ((safe_sub_func_uint8_t_u_u(g_160, 0x4DL)) == (g_859 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((g_146 < (func_48((l_788 = ((g_99 | (safe_sub_func_int8_t_s_s((l_729 = 0xFFL), ((safe_rshift_func_int8_t_s_s(func_55(l_872, (safe_sub_func_int32_t_s_s((func_55(p_27, g_628, (4UL || g_251), p_26, p_26) & g_99), 0xBA6A9C5CL)), l_619.f1, p_27.f0, l_534), 5)) != g_235)))) <= p_27.f1)), p_27.f0, l_839.f2, g_348.f3) >= 0x959FL)) >= l_875) ^ 0xE4F3799DL), g_126)), p_27.f0))))))
            {
                unsigned l_881 = 0x32644401L;
                int l_895 = (-8L);
                int l_896 = 1L;
                union U1 l_929 = {0x7CB83EDAL};
                for (g_146 = (-30); (g_146 < 6); g_146 = safe_add_func_int16_t_s_s(g_146, 9))
                {
                    unsigned short l_886 = 1UL;
                    l_896 = (safe_add_func_int16_t_s_s(((func_48((((func_48(l_881, p_26, g_243, (safe_add_func_uint16_t_u_u(l_839.f3, p_26))) & (safe_mod_func_uint32_t_u_u((p_26 | (l_886 = 0x7806L)), (((((((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((l_895 = (safe_div_func_int8_t_s_s(l_881, l_881))), g_498.f0)) & g_745) == 0x258D51E0L), l_707.f0)), l_497.f3)) == 0xD3L) > g_498.f0) != 0xD292L) | p_27.f1) == g_243) & g_745)))) && p_27.f0) && l_895), p_26, g_498.f1, g_498.f0) | g_18) | g_146), g_167));
                    l_788 = (safe_mod_func_uint16_t_u_u(p_26, (safe_div_func_int16_t_s_s(func_55(l_559, (1UL | 0x50L), l_886, (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0xE556L, ((safe_lshift_func_uint8_t_u_s(l_909, 7)) & (((l_895 || ((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((g_348.f3 = func_55(g_184, g_210, p_27.f1, g_47, g_427)))), 0xD2832510L)) || 0xDFF685BCL), p_27.f0)) <= l_886) == (-10L)))) & 255UL)) || l_886) >= 9UL)))), (-1L))), 4294967294UL)), p_26), g_146))));
                    l_896 = (safe_sub_func_int16_t_s_s((1L >= func_32((((l_805 >= ((func_55(p_27, g_99, l_858.f1, (((l_564 = 0x991DC786L) || ((safe_add_func_int32_t_s_s(((l_788 = (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((1L & ((g_876 != (((func_32((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0x40L, 5)) & 0xEFL), p_27.f0)), l_896, p_26) <= g_427) | p_26) && 0xAE7CL)) < l_896)), p_26)), p_27.f1))) ^ g_105), l_895)) ^ l_850)) >= g_126), g_129) <= p_27.f0) == 0x2AL)) >= (-1L)) <= l_839.f2), l_872.f1, p_27.f0)), l_567));
                }
                l_896 = (l_788 = (0xCA840E31L != p_26));
                l_896 = (((l_928 < func_55(l_929, (~(safe_unary_minus_func_uint16_t_u((l_929.f0 > 1L)))), g_628, g_397, p_26)) | l_839.f2) < 0UL);
            }
            else
            {
                short l_940 = 0x8769L;
                int l_969 = 3L;
                int l_970 = (-7L);
                l_567 = (((safe_mod_func_int32_t_s_s(func_36(l_497, l_839, func_48(g_146, (+(safe_div_func_int16_t_s_s(l_939, (l_940 || g_200)))), ((g_498.f0 == (safe_add_func_uint16_t_u_u(p_27.f0, (l_788 = 0UL)))) > p_27.f0), l_839.f3), p_27), 1UL)) & p_26) == (-5L));
                l_729 = (safe_mod_func_int32_t_s_s((((l_970 = ((g_201 = l_858.f2) < (((((safe_add_func_int16_t_s_s(l_909, ((safe_sub_func_int8_t_s_s(((((((safe_rshift_func_uint16_t_u_s((!((0x6BL == ((p_27.f1 ^ (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_26, 7)), (((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((0x5386L & (l_969 = (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((~(g_876 || g_649)), p_27.f1)) ^ l_928), p_27.f1)))) | l_940), 5UL)), p_27.f0)), l_619.f1)) || p_26) < l_940))), p_26))) | p_27.f1)) > p_27.f1)), 6)) ^ 255UL) || 3UL) > l_858.f0) <= g_126) && 6L), p_26)) ^ 1L))) || 0x38761396L) < g_427) > (-1L)) != g_498.f1))) && 0UL) || g_167), g_859));
            }
            g_200 = (l_550 == (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_497.f2 >= (l_788 = ((safe_add_func_uint8_t_u_u(l_788, l_497.f3)) | (l_564 = (l_729 = p_27.f1))))), 12)), 1L)));
        }
        else
        {
            int l_979 = 5L;
            int l_1020 = (-3L);
            unsigned short l_1021 = 0x3085L;
            union U1 l_1112 = {4294967295UL};
            union U2 l_1117 = {0x5BF1CB59L};
            unsigned l_1120 = 0x2DC9E0EFL;
            for (g_745 = 0; (g_745 >= (-30)); g_745 = safe_sub_func_int16_t_s_s(g_745, 4))
            {
                int l_996 = (-3L);
                if (l_979)
                    break;
                l_566 = (l_979 = ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((l_559.f1 > (((g_498.f0 <= func_55(g_498, (l_997 = (g_70 = (safe_mod_func_uint16_t_u_u(((g_990 = g_129) || ((0x51L != g_167) == (+(func_55(p_27, func_48((g_876 = g_251), ((~(safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((((g_184.f1 = (((p_26 | l_497.f3) | p_27.f1) != g_129)) > l_995) || l_979), 2)) > (-6L)), 6))) ^ l_979), p_27.f1, g_126), g_70, l_996, g_628) | g_99)))), 0xD227L)))), l_996, l_996, g_649)) < p_26) == 255UL)), g_348.f3)) ^ 0xA7L), 0x62L)), 4)), g_47)) != p_27.f0));
                for (l_547 = (-6); (l_547 >= 49); l_547 = safe_add_func_int32_t_s_s(l_547, 1))
                {
                    short l_1008 = 1L;
                    int l_1017 = 0x0BB99FC0L;
                    l_1008 = (safe_sub_func_int16_t_s_s(func_32(((8UL | (p_27.f0 = ((safe_rshift_func_int8_t_s_s((g_201 <= (p_26 | ((((safe_div_func_int16_t_s_s((l_979 = (0xF0L <= ((safe_sub_func_int32_t_s_s((((p_27.f0 < (-1L)) < (g_649 | (l_939 <= g_628))) ^ p_27.f0), g_184.f1)) && g_47))), p_27.f1)) && 4294967287UL) ^ g_243) ^ g_427))), p_26)) <= g_99))) & p_26), p_26, g_184.f1), (-1L)));
                    l_979 = ((safe_add_func_int8_t_s_s(p_27.f0, (safe_add_func_int16_t_s_s(func_32((((((safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((l_1017 = g_105) != (l_618 <= l_933.f0)), p_27.f0)) && p_26), g_859)) >= g_628) > g_200) > 0xEDL) == p_27.f1), p_26, l_1008), g_427)))) == (-1L));
                }
            }
            g_876 = (0x4EA6L | p_27.f0);
            l_928 = func_55(g_498, l_672, func_55(p_27, l_619.f0, l_939, p_27.f1, l_1021), p_26, g_129);
            if ((l_566 || func_48(g_47, p_27.f0, p_26, p_26)))
            {
                unsigned l_1025 = 18446744073709551615UL;
                for (l_586 = 0; (l_586 <= 10); l_586++)
                {
                    l_1025 = ((p_27.f0 || 0x29BF2B6CL) && (safe_unary_minus_func_uint16_t_u((l_1020 = ((-1L) || g_745)))));
                }
            }
            else
            {
                int l_1054 = 6L;
                unsigned l_1071 = 0x0DB6B871L;
                int l_1087 = 0x47C81A7CL;
                unsigned short l_1089 = 1UL;
                l_850 = (g_200 = (safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_243 = l_547), (g_498.f1 == l_934.f1))), (safe_sub_func_uint32_t_u_u(((0UL != l_979) && 0UL), p_27.f1)))), (safe_sub_func_uint32_t_u_u((g_70 = (safe_unary_minus_func_int16_t_s(l_707.f3))), (l_1021 || p_26))))) & g_876), g_637)));
                if ((p_27.f0 && g_498.f1))
                {
                    unsigned short l_1042 = 7UL;
                    int l_1055 = 0x5A7876F0L;
                    for (g_348.f2 = 0; (g_348.f2 == 1); g_348.f2 = safe_add_func_int8_t_s_s(g_348.f2, 4))
                    {
                        unsigned l_1041 = 0x6779BF60L;
                        l_1041 = (-1L);
                    }

                                        l_1055 = (p_26 < (g_876 = ((g_745 = l_1042) | (p_27.f1 > (safe_div_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u(l_1047, (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((p_27.f1 ^ ((l_1054 = (((g_498.f1 = g_348.f3) != (safe_sub_func_int16_t_s_s(p_27.f0, ((1L < (((-4L) == g_210) && p_27.f1)) > 0L)))) ^ 0xEC365E38L)) <= l_497.f0)), 1)) < p_26), 7UL)))) && g_184.f1) ^ (-2L)), (-5L)))))));

                                        if ((safe_sub_func_uint16_t_u_u((l_565 < ((-10L) >= g_397)), (safe_lshift_func_uint8_t_u_s((l_1055 = func_48(((safe_mod_func_int8_t_s_s((g_1062 >= ((safe_div_func_uint16_t_u_u(func_32(p_26, (safe_div_func_int32_t_s_s((l_850 = (safe_rshift_func_uint16_t_u_s((func_55(g_184, p_26, ((g_498.f1 = (0xF6F8L && (func_32(l_587, l_1071, l_619.f0) >= l_564))) || l_1071), g_427, g_160) <= g_876), 12))), 6UL)), g_160), g_243)) ^ 0UL)), p_27.f0)) == g_47), l_979, g_628, p_27.f1)), 7)))))
                    {
                        unsigned l_1082 = 1UL;
                        union U2 l_1088 = {0L};
                        l_1020 = (((safe_lshift_func_uint16_t_u_s(((l_1054 = ((safe_div_func_uint32_t_u_u((0xBB53L < (safe_mod_func_int16_t_s_s((((((!((((g_745 || (g_201 = (safe_lshift_func_uint8_t_u_u(((p_26 <= g_649) < l_707.f3), l_979)))) | 0xD210L) & 7UL) < g_146)) <= 0x5DL) || 0xBEL) && 0xE0F8L) || (-1L)), g_348.f2))), g_105)) || 0x4AE4L)) < 0xAF4B66E0L), p_26)) == g_146) <= g_70);
                        return g_1062;
                    }
                    else
                    {
                        return g_70;
                    }
                }
                else
                {
                    g_859 = (l_566 = l_1087);
                }
                if ((l_1089 & (((safe_mod_func_uint8_t_u_u((l_1071 != (-1L)), l_1020)) & ((safe_lshift_func_uint16_t_u_u(0x5801L, (safe_mod_func_int8_t_s_s(l_979, l_707.f2)))) & (g_348.f2 = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(g_201, 14)), 7)) == (safe_sub_func_uint32_t_u_u((p_27.f0 = l_1089), g_251)))))) && g_397)))
                {
                    for (g_99 = 0; (g_99 == 19); ++g_99)
                    {
                        unsigned l_1113 = 0x1F98E3D3L;
                        int l_1114 = 0x96F8A165L;
                        g_859 = (((g_167 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x92L, l_564)), 7))) >= func_48(l_497.f2, (safe_lshift_func_uint16_t_u_u((g_105 = (l_1087 = l_1020)), (safe_sub_func_uint16_t_u_u(((l_1114 = func_55((p_27 = l_1112), (g_210 | (l_836 <= l_672)), g_251, g_498.f1, l_1113)) < 0xF4E8L), p_26)))), g_146, p_26)) > p_26);
                        return l_1114;
                    }
                    g_859 = (65529UL > (0x754C621CL == (p_26 ^ g_146)));
                    return g_129;
                }
                else
                {
                    short l_1119 = 0x10D5L;
                    l_1020 = func_55(p_27, p_26, p_27.f0, p_26, l_850);
                }

                            }
        }
    }
    else
    {
        union U2 l_1125 = {0x31E71FB2L};
        int l_1132 = (-1L);
        unsigned short l_1136 = 0UL;
        short l_1151 = (-7L);
        if ((g_859 < (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((l_586 | (safe_sub_func_uint32_t_u_u(((l_1132 = (safe_rshift_func_uint16_t_u_s((g_167 == p_26), 3))) ^ g_70), g_18))) != p_27.f0), l_497.f1)), 0x9C816AD2L))))
        {
            unsigned l_1133 = 1UL;
            l_1133 = g_105;
            l_1136 = (safe_div_func_uint32_t_u_u(g_397, (l_1125.f0 & 0x67L)));
        }
        else
        {
            char l_1141 = 1L;
            union U2 l_1144 = {1L};
            l_729 = (g_200 = l_1125.f2);
            g_859 = (safe_add_func_int16_t_s_s((0xC6590499L <= l_619.f0), (safe_lshift_func_uint8_t_u_s(l_1141, 4))));
            l_1132 = ((safe_div_func_int32_t_s_s(((l_729 = ((func_36(l_1144, l_1125, p_27.f1, p_27) && func_55(p_27, g_498.f1, g_628, func_55(g_1118, g_201, g_201, p_27.f0, g_243), l_1145)) | l_1141)) > p_27.f1), 0x7C3CD4A1L)) != 0x9FA7F710L);
        }
        for (l_619.f0 = 9; (l_619.f0 < 19); ++l_619.f0)
        {
            union U2 l_1148 = {0xF18553F9L};
            g_200 = g_235;
            l_1132 = 1L;
        }
        l_1151 = (safe_rshift_func_uint16_t_u_s(p_26, p_26));
        if ((l_1125.f3 && (safe_div_func_uint32_t_u_u((g_126 = func_48((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(g_990, func_32((6L > (safe_add_func_int8_t_s_s(0L, p_27.f0))), ((safe_lshift_func_int16_t_s_s(l_1162, 7)) < p_26), g_201))) >= p_26), p_27.f0)), l_1125.f3, p_26, p_26)), g_990))))
        {
            unsigned l_1172 = 7UL;
            int l_1179 = 0x18447849L;
            short l_1180 = 0xC68EL;
            g_859 = (safe_mod_func_int16_t_s_s(g_18, func_48((safe_lshift_func_uint16_t_u_s(g_859, 2)), g_1167, (safe_sub_func_uint8_t_u_u(0x12L, l_1125.f1)), (p_27.f0 <= 0UL))));
            l_1179 = ((0xB0947600L || (safe_add_func_uint16_t_u_u((l_1172 = 0x33CFL), g_70))) < (l_995 | (safe_lshift_func_uint16_t_u_u((~(g_99 = (safe_lshift_func_uint16_t_u_u(((g_200 = (safe_rshift_func_uint8_t_u_s(l_1180, 6))) & l_1179), 8)))), g_1118.f1))));
        }
        else
        {
            g_876 = func_55(g_498, l_566, g_146, (0x1DD2L ^ (g_243 = (p_27.f0 > p_27.f0))), p_27.f0);
            g_200 = g_1118.f1;
            g_200 = l_875;
        }
    }

            if ((l_566 = func_36(l_497, l_497, g_498.f1, p_27)))
    {
        l_729 = p_27.f1;
lbl_1181:
        l_850 = l_933.f0;
        return p_27.f0;
    }
    else
    {
        unsigned short l_1182 = 0x000EL;
        l_1182 = (l_566 = g_102);
    }
    g_200 = (safe_rshift_func_uint8_t_u_u((l_566 = (g_876 < l_729)), 5));
    return p_27.f1;
}







static unsigned char func_32(char p_33, unsigned p_34, short p_35)
{
    unsigned l_539 = 0x51B8BC6BL;
    int l_540 = (-1L);
    union U1 l_541 = {0x934ACBDEL};
    int l_542 = 0x07EA0F65L;
    l_542 = (((0xC7388A82L && (safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(func_48(l_539, (l_540 = g_235), g_167, func_55(l_541, g_397, p_35, (l_541.f1 < ((2L ^ 0x51E5L) >= 0x9AAFL)), l_539)), g_243)) <= g_167), g_243))) || 1UL) ^ p_33);
    return g_102;
}







static char func_36(union U2 p_37, union U2 p_38, short p_39, union U1 p_40)
{
    unsigned l_499 = 1UL;
    short l_505 = 0x3D55L;
    int l_522 = 0x5E11F597L;
    short l_525 = 0L;
    unsigned short l_533 = 0UL;
    g_200 = (g_18 ^ l_499);
    l_522 = (safe_sub_func_int8_t_s_s(func_55(p_40, (safe_lshift_func_int16_t_s_s(((l_505 = (g_99 = (safe_unary_minus_func_int16_t_s(g_167)))) < ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_200 = p_38.f1), ((((safe_div_func_uint16_t_u_u(0UL, g_129)) < (safe_rshift_func_int16_t_s_s(p_37.f0, ((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(((g_210 != (safe_div_func_uint32_t_u_u(g_251, l_499))) ^ 1L), l_499)) | p_37.f3) & (-1L)), 8)) & g_251)))) != g_210) ^ (-1L)))), 0x4B78L)), g_18)) == 0x6F187F81L)), 8)), g_210, l_499, l_499), g_105));
    for (g_167 = (-7); (g_167 > 14); g_167 = safe_add_func_uint8_t_u_u(g_167, 2))
    {
        int l_526 = 6L;
        l_533 = ((l_526 = ((!l_525) < (g_348.f3 = (l_526 && func_55(g_498, p_40.f0, (+g_235), l_505, (safe_sub_func_uint8_t_u_u(0xAAL, (l_526 < ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((p_37.f2 = (-8L)), g_348.f3)), p_38.f2)) ^ p_38.f0))))))))) == p_38.f1);
        g_200 = (p_40.f0 <= g_348.f3);
    }

        return p_38.f1;
}







static union U2 func_41(union U2 p_42, unsigned short p_43)
{
    return g_348;

    }







static union U2 func_44(int p_45, int p_46)
{
    int l_65 = 0xA4182467L;
    union U2 l_66 = {0xBD8D46C6L};
    int l_194 = 0x8A0995B6L;
    int l_195 = (-1L);
    int l_241 = 0x79693F44L;
    short l_304 = (-4L);
    int l_330 = 0x376F26C4L;
    int l_380 = 0x9AA272F2L;
    unsigned l_381 = 0x310BBCF1L;
    int l_469 = (-1L);
    char l_490 = 0x55L;
    int l_496 = 1L;
    if (func_48((safe_mod_func_int32_t_s_s(((func_55((g_184 = func_61(l_65, l_66, g_47)), l_66.f2, g_18, (l_66.f3 | (p_45 & (((l_194 = (((((g_18 >= l_66.f1) >= l_66.f0) < 0x924F713FL) < p_46) > l_66.f2)) == l_195) || g_18))), p_45) < g_18) != g_18), l_66.f2)), p_46, p_46, l_66.f0))
    {
        char l_236 = 1L;
        int l_250 = 0xE0EDF683L;
        int l_300 = 1L;
        union U1 l_303 = {0xF6631531L};
        int l_305 = 0xE616D3F4L;
        unsigned char l_364 = 1UL;
        union U2 l_482 = {0x7CB75CA9L};
        l_236 = (p_45 = (g_167 <= (-1L)));
    }
    else
    {
        unsigned l_483 = 18446744073709551611UL;
        int l_491 = 0L;
        l_241 = 0x5581D9E5L;
        p_45 = p_45;
        g_200 = p_46;
        l_491 = ((((((func_55(g_184, p_46, g_160, func_48(l_483, ((safe_rshift_func_int16_t_s_s((((((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_201 = (l_483 || 65535UL)), 14)), (g_146 > (0x1BFBA212L || g_160)))) < l_490) ^ l_304) <= 1L) > g_99) == 1UL) ^ l_381), 13)) < 0xD602L), g_348.f2, g_348.f2), l_483) > p_46) & 0x836FL) >= l_66.f0) <= l_483) && 0xD6L) | 8UL);
    }
    p_45 = ((l_380 = l_380) <= (safe_div_func_uint8_t_u_u(l_66.f2, (safe_lshift_func_int16_t_s_s((l_330 = (-1L)), ((l_496 != p_45) && (p_45 == ((g_348.f1 <= p_46) > g_160))))))));
    return l_66;

    }







static int func_48(int p_49, int p_50, unsigned p_51, unsigned p_52)
{
    char l_224 = (-3L);
    int l_225 = (-1L);
    union U1 l_228 = {1UL};
    unsigned short l_233 = 0xEADAL;
    unsigned char l_234 = 254UL;
    l_225 = (p_49 = (g_105 <= (safe_unary_minus_func_uint32_t_u((l_224 = g_184.f1)))));
    l_225 = 0xF6451F01L;
    for (p_49 = 17; (p_49 != 13); p_49--)
    {
        return g_200;
    }
    g_235 = (func_55(l_228, (((((((!((((l_225 = l_225) ^ (l_228.f0 && 2L)) ^ ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_129 || p_49), g_184.f1)), ((((-1L) & ((func_55(l_228, g_146, g_70, l_228.f0, g_105) >= g_18) & l_224)) & p_49) && p_49))) >= 0xDBL)) ^ g_47)) <= g_160) ^ l_228.f1) >= l_228.f1) || p_52) || g_129) < 0x700D4B8CL), g_102, g_160, l_233) < l_234);
    return g_200;
}







static int func_55(union U1 p_56, unsigned p_57, unsigned char p_58, char p_59, int p_60)
{
    short l_208 = 0x0378L;
    int l_209 = 1L;
    char l_215 = 0x7FL;
    int l_216 = 0x617D5C18L;
    unsigned short l_221 = 1UL;
    int l_222 = 3L;
    g_201 = (g_200 = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_47, g_47)), (-1L))));
    g_210 = (l_209 = ((g_200 = (1L && ((safe_lshift_func_uint16_t_u_u(g_102, 13)) ^ 0xE634L))) <= (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0x424D4B57L, 1UL)), l_208))));
    g_200 = ((safe_rshift_func_int16_t_s_u(((+(l_216 = (safe_sub_func_int32_t_s_s((p_56.f1 || l_215), (+p_57))))) <= ((safe_sub_func_uint32_t_u_u((p_60 & (((l_221 = (safe_mod_func_int8_t_s_s(l_209, p_60))) & p_57) == g_18)), l_222)) <= 0x5CL)), 3)) || 250UL);
    l_216 = g_70;
    return g_47;
}







static union U1 func_61(unsigned short p_62, union U2 p_63, char p_64)
{
    short l_69 = 0xC90EL;
    unsigned l_75 = 18446744073709551614UL;
    unsigned l_97 = 0UL;
    unsigned l_98 = 4294967295UL;
    unsigned l_104 = 0UL;
    unsigned char l_124 = 0xC0L;
    int l_140 = 0x4A9F0E05L;
    int l_161 = 0x947FBA1FL;
    union U1 l_193 = {0xBB54825CL};
    g_70 = (safe_div_func_uint16_t_u_u(0xD552L, l_69));
    if ((safe_sub_func_uint32_t_u_u(p_64, (~(safe_lshift_func_int8_t_s_s(l_69, 0))))))
    {
        int l_94 = 0xB026EBB4L;
        int l_95 = (-1L);
        int l_96 = 0x7C8CEAAFL;
        l_97 = (l_75 <= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_64, (p_63.f2 = g_70))), ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((p_64 & l_69) < (((l_95 = (((((safe_lshift_func_int16_t_s_s(g_70, 0)) <= p_62) | ((safe_lshift_func_uint8_t_u_u((l_94 = ((l_69 & (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_94, 15)), p_62))) > 0L)), p_62)) && 1L)) & l_95) || g_70)) ^ l_96) | 0x41E7L)), 4)), 2)), l_96)) <= 1UL))));

                g_99 = ((l_98 = p_62) <= p_63.f2);
        l_96 = ((safe_lshift_func_uint16_t_u_u(p_62, g_70)) >= l_75);
        g_102 = ((l_75 & (p_63.f2 && p_62)) ^ (l_95 <= (p_63.f2 >= p_62)));
    }
    else
    {
        unsigned char l_103 = 0UL;
        unsigned l_125 = 0xEC541CD8L;
        union U1 l_162 = {1UL};
        short l_172 = 0x3F48L;
        int l_191 = 0xB4EFABF2L;
        int l_192 = 0xAEFA70C1L;
        l_104 = l_103;
        if ((g_47 && p_63.f1))
        {
            unsigned l_135 = 18446744073709551610UL;
            int l_141 = 3L;
            g_105 = 0x90CC4B0BL;
            if ((safe_lshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_104, ((l_97 == (safe_div_func_uint16_t_u_u(g_47, (safe_lshift_func_int8_t_s_u(l_69, (safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(g_99, (safe_lshift_func_uint16_t_u_s(p_63.f2, ((((((safe_sub_func_int8_t_s_s((((p_63.f2 & (((((l_104 > l_124) <= p_63.f2) <= g_102) != 4294967288UL) == l_103)) || l_104) | 6L), g_18)) | 1L) != p_64) | p_64) || p_63.f3) == 4L))))), g_70))))))) | l_125))), g_47)) >= p_64) > g_18), p_63.f1)))
            {
                g_126 = (l_98 | 0xE95444D7L);
                g_129 = (l_125 || (safe_mod_func_uint32_t_u_u(l_103, (g_70 = g_47))));
            }
            else
            {
                short l_132 = (-9L);
                int l_159 = 0xAE47ACEDL;
                l_141 = ((((-3L) != (((safe_div_func_int32_t_s_s(l_132, (safe_lshift_func_int16_t_s_u((0x87EAL < (((l_135 | (safe_sub_func_int32_t_s_s(g_129, (((safe_div_func_uint8_t_u_u(g_18, l_104)) < (l_140 = g_70)) == (9UL != p_63.f1))))) ^ p_64) <= l_132)), g_70)))) | g_102) ^ g_129)) == 0x9DL) ^ 0x668BL);
                g_146 = (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_132 || p_64), l_132)), l_125));
                l_161 = ((l_140 = (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(4294967295UL, (l_141 && (safe_lshift_func_int16_t_s_s(l_132, ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_160 = (3UL || (p_62 >= (l_159 = (safe_sub_func_int16_t_s_s((g_47 = l_98), l_103)))))), p_63.f2)), 15)) > g_105)))))), p_63.f1))) | 1UL);
            }
            return l_162;

                    }
        else
        {
            unsigned l_182 = 0x911BFE60L;
            l_140 = ((l_161 = 0xE2EA94D1L) > l_69);
            for (l_124 = 0; (l_124 <= 31); l_124++)
            {
                int l_181 = 0L;
                int l_183 = 0x1935D6DEL;
                l_161 = (((65528UL == ((safe_div_func_int8_t_s_s((g_167 = 0xC7L), (safe_div_func_int8_t_s_s((p_63.f3 = ((safe_lshift_func_int16_t_s_u((p_64 | 6UL), (l_172 ^ l_103))) != ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((((safe_div_func_int8_t_s_s((l_181 = ((g_129 = (safe_mod_func_uint32_t_u_u(l_181, g_102))) >= g_146)), (-1L))) ^ l_75) == l_140) > 0x0359L) < 0xF6407DB5L) != p_64), l_182)), (-4L))) >= g_18))), 5L)))) > p_64)) <= g_99) | l_183);

                                return g_184;

                            }
        }
        l_192 = (g_146 <= (l_191 = (g_105 = (safe_lshift_func_uint16_t_u_s((0xE9079689L && ((((-1L) == p_63.f3) & (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((g_70 <= p_63.f3), 0)), g_70))) <= (((p_62 = p_64) ^ (0UL && g_160)) > p_63.f1))), 11)))));
        l_192 = ((l_191 = p_63.f2) | (g_184.f0 > (+g_105)));
    }

        return l_193;

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_184.f1, "g_184.f1", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_348.f3, "g_348.f3", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_498.f1, "g_498.f1", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    transparent_crc(g_1118.f0, "g_1118.f0", print_hash_value);
    transparent_crc(g_1118.f1, "g_1118.f1", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1192.f0, "g_1192.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
