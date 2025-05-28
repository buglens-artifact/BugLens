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
   int f0;
   int f1;
   int f2;
   long long f3;
   long long f4;
   unsigned long long f5;
   long long f6;
   long long f7;
};


static unsigned char g_2 = 0x83L;
static char g_37 = 0x4EL;
static unsigned short g_113 = 0x84C8L;
static struct S0 g_114 = {0x0DAFEA22L,1L,1L,0xDB654FA892F2EE52LL,0x03225053E2D80D5DLL,18446744073709551615UL,1L,0x309CA0AE64C0ED61LL};
static long long g_116 = (-1L);
static short g_139 = 0x26C4L;
static unsigned g_161 = 0xF47029A2L;
static char g_175 = 0x26L;
static unsigned long long g_186 = 0xAB515CB5E7A75935LL;
static struct S0 g_190 = {1L,0L,0x604E7EADL,0L,-1L,0xF7CBA255AA24B6D0LL,0x9A793064653F5576LL,0L};
static char g_199 = 0L;
static char g_211 = 0xD7L;
static unsigned long long g_248 = 0x198E9E6E954CBD25LL;
static char g_249 = 0x26L;
static int g_288 = (-5L);
static char g_290 = 0xA0L;
static struct S0 g_293 = {-1L,-6L,1L,0x126096A5C97E8F17LL,1L,18446744073709551615UL,-1L,0x860CB6A6315E37E8LL};
static unsigned char g_295 = 8UL;
static unsigned short g_303 = 0x5EB0L;
static long long g_309 = 1L;
static short g_333 = 6L;
static int g_372 = 0x7F1E95D7L;
static int g_389 = 0xB3055F34L;
static unsigned short g_439 = 0x2FC3L;
static unsigned char g_441 = 0x25L;



static unsigned func_1(void);
static long long func_8(int p_9, short p_10, long long p_11, unsigned short p_12);
static long long func_16(unsigned p_17, unsigned p_18, int p_19, short p_20, unsigned long long p_21);
static unsigned func_22(unsigned p_23, unsigned p_24, long long p_25, short p_26, int p_27);
static struct S0 func_43(unsigned p_44, unsigned p_45, short p_46, char p_47);
static struct S0 func_55(char p_56, char p_57, unsigned p_58, unsigned char p_59);
static int func_80(short p_81, unsigned char p_82, long long p_83);
static struct S0 func_92(int p_93, unsigned p_94, unsigned long long p_95, int p_96);
static unsigned short func_101(int p_102);
static int func_105(short p_106, unsigned short p_107, unsigned p_108, int p_109);
static unsigned func_1(void)
{
    unsigned l_5 = 18446744073709551611UL;
    unsigned char l_440 = 1UL;
    struct S0 l_444 = {0L,-1L,0x18AC4B50L,0L,0x0636930A452EFA37LL,0UL,1L,-1L};
    unsigned long long l_445 = 1UL;
    int l_451 = 1L;
    int l_452 = 0xF85F8D3FL;
    int l_453 = 0xF1D9F398L;
    short l_456 = 0x2C7EL;
    g_441 |= ((g_2 && (safe_add_func_int32_t_s_s((g_2 ^ (((l_5 ^ (l_5 ^ (((~(safe_add_func_uint8_t_u_u(l_5, ((func_8(g_2, l_5, l_5, (l_5 ^ l_5)) < l_440) == (-9L))))) > g_309) > l_5))) , 0xBB9C6FD1L) <= 0xC4D6FD4BL)), l_5))) && g_199);
    g_293.f1 = ((safe_lshift_func_uint8_t_u_s((l_444 , l_444.f6), (((l_445 && (safe_unary_minus_func_uint16_t_u(((l_453 ^= (l_452 = (l_451 = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0xC1L, (g_114.f3 , l_444.f2))), g_114.f0))))) >= (safe_lshift_func_int8_t_s_s((l_444.f4 < ((func_22(l_444.f1, l_456, l_444.f2, g_113, l_444.f3) > 0xBBL) , 0xABL)), 6)))))) | g_190.f2) >= 65535UL))) , l_444.f0);
    return l_444.f3;
}







static long long func_8(int p_9, short p_10, long long p_11, unsigned short p_12)
{
    unsigned short l_32 = 0x0BC2L;
    int l_33 = 0xFF3E141BL;
    unsigned long long l_36 = 0xB834283644BB323FLL;
    unsigned short l_429 = 65532UL;
    int l_437 = 0xE45CEBF8L;
    int l_438 = 7L;
    p_9 = g_2;
    p_9 = (((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(g_2)), func_16((p_10 >= ((g_37 |= func_22(g_2, (safe_rshift_func_int16_t_s_s(g_2, 13)), (safe_sub_func_uint16_t_u_u(0x4782L, (l_33 &= l_32))), p_11, ((0xD53D2AE45661C443LL < (safe_rshift_func_uint16_t_u_s(p_9, l_36))) >= p_10))) ^ 4294967295UL)), l_36, g_2, p_12, g_2))) & p_10) < 1L);
    g_439 |= func_105((l_438 ^= ((1L <= func_22((((safe_unary_minus_func_int16_t_s(((safe_sub_func_int8_t_s_s(func_80(g_293.f7, l_429, g_114.f0), (func_22(l_429, ((safe_mul_func_int8_t_s_s((((p_9 < (safe_unary_minus_func_uint32_t_u((l_33 < ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((l_437 |= l_36) >= 0x6EL), l_33)), l_36)) == g_303))))) < 1L) | 0xF1L), 0x99L)) , 4294967286UL), p_10, l_36, g_309) <= l_33))) && l_32))) >= g_333) | l_36), l_36, g_309, g_333, p_10)) && l_36)), g_290, g_372, l_32);
    p_9 = l_33;
    return p_11;
}







static long long func_16(unsigned p_17, unsigned p_18, int p_19, short p_20, unsigned long long p_21)
{
    int l_52 = (-1L);
    int l_300 = 0L;
    int l_307 = 5L;
    struct S0 l_310 = {0xCB12AE87L,0x96607F19L,0x99B7AB3DL,1L,-10L,0UL,0x5D04719DAB7DA403LL,1L};
    struct S0 l_321 = {0x541A6D47L,0L,9L,0xA31BCA2B792B403ELL,0x05B3301B3E1286DFLL,18446744073709551615UL,0xF3659B2FF8A7F073LL,0L};
    long long l_359 = 0x2DCF23DB8272E403LL;
lbl_425:
    for (p_18 = (-14); (p_18 != 36); ++p_18)
    {
        int l_298 = 0x22F16A01L;
        unsigned char l_299 = 0x71L;
        for (p_20 = 0; (p_20 > 1); p_20 = safe_add_func_uint8_t_u_u(p_20, 8))
        {
            unsigned l_42 = 0xE5156BE8L;
            int l_308 = 0x3F41B2F4L;
            int l_317 = 0xC5A4EB59L;
            if (((!l_42) || (l_300 = func_22(g_37, func_22(((g_2 || (func_43((safe_rshift_func_uint8_t_u_s(p_19, p_17)), p_18, func_22(((safe_add_func_int32_t_s_s(((p_20 || (-1L)) , p_17), 0UL)) , l_52), p_19, g_37, g_2, p_20), g_37) , l_298)) , l_299), g_290, p_17, p_20, l_298), p_20, l_298, p_17))))
            {
                l_300 = g_190.f3;
            }
            else
            {
                unsigned short l_306 = 1UL;
                unsigned char l_319 = 0x8FL;
                if ((7UL & ((func_105((g_139 = (1L <= 18446744073709551606UL)), ((l_308 = ((safe_mul_func_uint16_t_u_u((func_105((g_303 = p_19), (safe_add_func_uint64_t_u_u(0xB6E73D4B730C5E3ALL, (l_306 , l_298))), g_114.f5, g_249) | 0xE4L), 65535UL)) != l_307)) , l_308), g_309, l_52) || g_139) <= p_20)))
                {
                    unsigned long long l_315 = 0x1583F1BB0B55B83FLL;
                    l_310 = g_293;
                    for (g_161 = 2; (g_161 == 58); g_161 = safe_add_func_int32_t_s_s(g_161, 1))
                    {
                        unsigned l_316 = 0xA25F1CDEL;
                        l_317 = (0xAAL != ((l_308 |= 0xAB04B888L) , ((func_105(l_310.f2, (g_303 = g_293.f7), l_42, g_114.f6) , (((safe_rshift_func_uint8_t_u_s((l_315 & ((l_315 ^ l_298) <= l_316)), g_2)) == 6L) > 0xAB8AB87AA9934864LL)) != 65529UL)));
                        if (l_315)
                            continue;
                    }
                    return g_290;
                }
                else
                {
                    int l_318 = 4L;
                    int l_320 = (-5L);
                    l_321 = (l_310 = func_43((l_318 = p_21), (g_293.f7 >= func_105(((func_22(l_42, l_310.f6, l_319, p_20, g_303) >= ((l_308 = (!(l_306 == g_248))) != l_42)) , p_17), l_310.f1, l_319, p_21)), l_320, g_190.f0));
                }
            }
            p_19 = (l_310.f3 , ((g_114.f5 == 6L) > ((func_22((safe_lshift_func_int8_t_s_s((-1L), ((p_17 & l_321.f4) & (p_21 >= ((p_19 < g_139) || 0xA250L))))), p_19, l_298, l_321.f6, l_321.f1) && l_307) & g_190.f3)));
        }
    }
    for (p_21 = 0; (p_21 <= 33); p_21 = safe_add_func_int32_t_s_s(p_21, 9))
    {
        short l_332 = 0x3615L;
        struct S0 l_334 = {0xD6711F4CL,0xF19964D2L,0xB6356CCCL,-1L,0xDF5E64901A23591ALL,18446744073709551615UL,0x2B138DAF7CC52B96LL,0x960AB7BA86002319LL};
        int l_355 = (-1L);
        unsigned char l_370 = 0xE8L;
        unsigned short l_392 = 0xF238L;
        unsigned l_403 = 0x8240D0ABL;
        l_334 = func_55((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((p_21 == (g_175 & 0x0C06B61277F72065LL)) == (((p_17 && 0x0B86L) && p_21) , (func_22((l_310.f1 = ((safe_mul_func_int16_t_s_s((func_92(p_20, l_332, l_332, g_190.f7) , 0xB66BL), g_333)) <= 6UL)), p_17, g_190.f2, p_19, p_20) & p_21))) == g_37), l_332)), g_190.f2)), p_21, g_293.f6, g_290);
        for (l_321.f4 = 13; (l_321.f4 < (-4)); l_321.f4--)
        {
            unsigned long long l_337 = 0UL;
            long long l_349 = 0x7EEA5A3F09172F3FLL;
            int l_360 = 6L;
            unsigned long long l_388 = 0xB706A233103372BFLL;
            if ((((l_337 != (((p_20 , (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-8L), 6)), l_337))) && (2L || (safe_rshift_func_int8_t_s_u((((-1L) < (safe_rshift_func_int16_t_s_u((0xD3CC1AAF0B857579LL & (((func_22(((((((l_307 || p_19) , g_190) , 0x6AB611BE9C3BF5AFLL) < 0x57B7C47FB11891A6LL) ^ 0xD94AL) , l_300), l_337, l_337, p_18, g_2) <= p_21) > g_114.f6) ^ g_295)), g_114.f4))) <= 0x13D0D662L), p_19)))) && g_114.f5)) >= g_333) <= 65535UL))
            {
                return g_190.f1;
            }
            else
            {
                unsigned l_346 = 0UL;
                int l_350 = 0x65866136L;
                l_321.f1 &= ((func_22(l_346, p_18, l_52, p_18, (l_334.f2 = (safe_sub_func_uint8_t_u_u(l_349, (((l_346 && ((l_350 = 0L) , (l_310.f4 & ((g_249 != p_19) != p_19)))) , p_17) || p_19))))) | p_20) || 1UL);
                g_293.f2 = 0x7CCF2080L;
            }
            if (p_21)
            {
                int l_356 = 0xD0766773L;
                unsigned long long l_363 = 0x7E7008B7D56E1FB3LL;
                if ((l_321.f2 = func_22(g_114.f4, l_337, (safe_sub_func_uint16_t_u_u(g_303, func_22((l_360 = (((g_186 == (g_293.f0 = ((safe_mod_func_uint32_t_u_u(l_355, (l_334.f0 = l_356))) | ((func_22(((g_288 = ((g_293.f3 &= 0x2E142DFABE5443D2LL) , p_18)) , (g_161 = l_321.f3)), g_293.f5, g_37, l_359, l_310.f5) < 0UL) < l_332)))) , p_20) || l_321.f2)), g_211, p_19, l_334.f7, p_21))), l_310.f1, p_20)))
                {
                    int l_371 = (-10L);
                    g_372 = func_101((l_371 ^= (safe_mul_func_int8_t_s_s(l_363, (((g_186 >= (l_334.f1 &= (safe_lshift_func_int8_t_s_u((l_310.f0 &= (safe_lshift_func_uint8_t_u_u((!p_17), ((func_22(p_17, (((l_332 != (g_333 >= 0L)) , 0xDE1BDE27L) < (safe_rshift_func_uint8_t_u_s(((+255UL) | g_114.f6), 2))), l_370, p_21, g_190.f4) <= g_175) , 0x7FL)))), p_20)))) ^ p_20) < g_161)))));
                }
                else
                {
                    long long l_378 = 0xCB5B05CEEE61D6F7LL;
                    struct S0 l_387 = {4L,0xB572F9DAL,-1L,1L,-4L,0xC8555D86A5192AD4LL,0x5F37C1D458869293LL,0L};
                    if ((g_309 > ((p_21 > (l_356 < g_114.f5)) , ((((0x563BL & (0x3B7FL <= (g_190.f3 | (safe_lshift_func_uint16_t_u_s((l_310.f2 |= (0x08808EBED17D9366LL || 0xF77C9F149971C26ELL)), p_21))))) < p_21) , p_21) >= 0L))))
                    {
                        struct S0 l_375 = {1L,9L,0x6F182F2CL,0x5A911D0B9F633A44LL,0xDFB41FB67EE0DE53LL,18446744073709551614UL,-5L,1L};
                        g_114 = (l_375 = (g_139 , g_293));
                        l_387.f0 = (p_19 = (((safe_rshift_func_int16_t_s_s(func_101(l_375.f7), p_17)) , ((func_101(((((l_378 < (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_360 = ((g_211 | (safe_mul_func_int16_t_s_s(((g_114.f7 = (l_334.f0 |= (p_17 == (safe_sub_func_uint32_t_u_u((l_387 , l_388), (g_389 = (l_387.f1 == 1L))))))) <= p_18), l_363))) , p_20)), l_375.f5)), p_18))) < 1L) >= p_20) || p_17)) == l_337) >= g_290)) ^ (-1L)));
                        g_293 = g_114;
                    }
                    else
                    {
                        return p_21;
                    }
                    p_19 ^= (g_293.f4 && (((safe_mod_func_int32_t_s_s((p_17 < (l_356 && ((p_18 || p_21) , func_80(func_101(g_114.f3), l_392, l_310.f4)))), p_18)) > 0xB253L) ^ l_363));
                    g_293.f0 = l_363;
                }
                if (p_17)
                    break;
                return l_363;
            }
            else
            {
                int l_408 = 5L;
                p_19 |= (((((l_388 == ((func_80((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((p_20 > ((l_334.f2 = (safe_sub_func_int8_t_s_s(p_18, (safe_rshift_func_uint8_t_u_s(l_310.f6, (g_211 &= 0xCCL)))))) , ((func_101(l_403) > ((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((p_21 != l_334.f3), l_334.f0)), l_408)) ^ g_303)) && 0x1CEDL))) == p_18), 3)), (-3L))), g_288)), g_293.f1, g_303) <= l_310.f3) , l_403)) & 0xEC51C669L) != g_37) & p_17) & g_295);
            }
            g_190.f1 = (safe_add_func_uint16_t_u_u(l_310.f4, (safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint64_t_u_u(((((p_19 <= (g_290 = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u(p_17, (p_18 < (safe_add_func_uint8_t_u_u((l_310.f0 != (safe_mod_func_uint16_t_u_u(0x0A1CL, 0x6F23L))), p_17))))) , (p_20 && p_19)), 4)) == p_18), l_310.f5)))) <= p_19) , g_139) , 0x585EEB956FE72EDBLL), p_17)) <= l_321.f0) < 1L) | 0x8DCDL), 13))));
            if (l_321.f1)
                goto lbl_425;
        }
    }
    return p_21;
}







static unsigned func_22(unsigned p_23, unsigned p_24, long long p_25, short p_26, int p_27)
{
    return p_27;
}







static struct S0 func_43(unsigned p_44, unsigned p_45, short p_46, char p_47)
{
    unsigned long long l_65 = 9UL;
    int l_76 = 0xB98B5DB2L;
    unsigned short l_78 = 0x2663L;
    for (p_47 = 0; (p_47 <= 1); p_47 = safe_add_func_int8_t_s_s(p_47, 9))
    {
        int l_75 = 0x3212EC38L;
        int l_77 = 0xA5C089A4L;
        int l_79 = 8L;
        struct S0 l_297 = {0xB680DFCAL,-1L,-2L,-1L,0xBA0D21EE898A727FLL,0x40FC8A15306002A6LL,0x6272C872FF5E7564LL,0x511363FC42F59FF7LL};
        l_297 = func_55(p_44, (0xCE30L ^ ((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(((l_79 ^= ((func_22((safe_mul_func_int16_t_s_s((l_65 & func_22((safe_unary_minus_func_uint8_t_u(p_45)), ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((+(safe_sub_func_int32_t_s_s(p_45, (l_77 |= (l_76 &= (((safe_sub_func_int16_t_s_s(g_37, func_22(g_37, l_75, g_37, l_75, p_45))) , g_2) ^ 18446744073709551609UL)))))) | p_45) , l_75) == g_2), 4L)), 7)) != l_78), g_37, p_46, l_75)), 0xB8BBL)), l_75, l_78, g_37, l_75) >= p_45) | g_2)) ^ 8UL), p_44)))) == g_2)), l_78, g_37);
        if (g_190.f1)
            continue;
    }
    return g_190;
}







static struct S0 func_55(char p_56, char p_57, unsigned p_58, unsigned char p_59)
{
    unsigned long long l_84 = 0xCD88FCBDC27B9F09LL;
    unsigned char l_91 = 0UL;
    int l_294 = 0x53A96FB9L;
    struct S0 l_296 = {6L,-1L,0x096BB92BL,0x2A9D3D1F5A900BB5LL,0xCD1AAE636F438B26LL,0x5AA8DD26E86E7FB3LL,0x6AE8F079D2087A2CLL,-1L};
    g_295 |= (l_294 &= func_80(p_57, ((l_84 == (safe_lshift_func_uint8_t_u_s((g_2 & (((p_57 >= (((0xC17BCF7A535ACB96LL != 3L) & (safe_lshift_func_uint8_t_u_u(0xD3L, p_58))) > (safe_mod_func_uint32_t_u_u(p_56, l_91)))) , l_84) != 3UL)), g_2))) && 0UL), g_2));
    return l_296;
}







static int func_80(short p_81, unsigned char p_82, long long p_83)
{
    unsigned long long l_97 = 0xF449D34E1B6EB866LL;
    int l_98 = 0xBB1B7708L;
    int l_247 = 0xAD092DFBL;
    struct S0 l_276 = {1L,0xDECFFE95L,-1L,0L,0x4D38C07B383B7C05LL,1UL,0x65BCABADEEFF87F5LL,0xCED175345269AC79LL};
    unsigned long long l_277 = 1UL;
    short l_289 = 0x75E7L;
    unsigned short l_291 = 0xF833L;
    int l_292 = (-2L);
    l_276 = func_92(l_97, (((((l_98 = (0x3304EDDCL != 0xEE7960B9L)) || ((g_249 = (!(g_248 |= ((((p_81 , p_83) & func_22(p_82, (l_247 |= (func_22((p_81 , l_97), (((safe_mod_func_uint64_t_u_u(((!func_101(l_97)) == l_98), g_2)) , l_98) , g_190.f6), p_82, l_98, g_37) ^ g_37)), g_37, p_83, p_82)) == p_82) , 0x8CL)))) >= (-5L))) & l_97) == p_81) >= 0xBA1B2CCCL), g_2, g_37);
    g_293 = func_92(l_277, (l_98 ^ (l_276.f0 = (func_101(l_98) >= (((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((~g_37) , (func_22((safe_mul_func_uint16_t_u_u(func_22(p_83, l_247, (l_276.f2 = ((-1L) <= (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_276.f1 = (g_288 &= l_276.f5)), l_289)) ^ p_83), g_290)) <= 0x26F5L) , g_37))), l_276.f6, p_82), l_276.f7)), p_82, l_291, g_2, p_81) , l_98)), 8)) != l_276.f0) ^ l_292), l_276.f7)) || g_288) , g_248)))), g_248, g_290);
    return l_276.f3;
}







static struct S0 func_92(int p_93, unsigned p_94, unsigned long long p_95, int p_96)
{
    char l_256 = (-10L);
    int l_259 = (-1L);
    struct S0 l_260 = {-9L,0x5BF24F83L,0L,-9L,0L,0UL,-1L,0L};
    char l_275 = 0x55L;
    l_259 = ((((p_95 || g_190.f5) , ((safe_mod_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(252UL, l_256)) && p_94) & l_256), (l_256 > ((safe_mul_func_int16_t_s_s(((func_105(g_190.f0, g_114.f2, p_93, g_190.f7) > p_96) == g_139), p_93)) < g_190.f2)))) <= p_93) == l_256), 1UL)) == l_256)) >= g_190.f6) && g_190.f7);
    l_260 = l_260;
    l_260.f0 &= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_2, g_114.f5)), 2)) < ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_260.f5 < ((func_22(l_256, p_95, (safe_mod_func_uint8_t_u_u(g_114.f2, (~(safe_rshift_func_int8_t_s_u((l_259 = (((func_22(g_139, (func_22(((safe_lshift_func_int16_t_s_s((l_275 && ((func_22(l_260.f6, l_260.f7, l_259, p_94, g_190.f4) || g_175) && 0x2DL)), 6)) != 0x7845D0CCC565EBF9LL), p_94, g_116, l_275, p_94) > p_94), p_96, g_249, p_93) , g_248) <= 2L) , 0xCCL)), l_260.f6))))), g_211, g_211) <= 0L) < (-1L))) > 0xE948L) & g_190.f5), p_95)), g_114.f3)) > l_260.f4));
    l_260.f1 ^= l_260.f5;
    return l_260;
}







static unsigned short func_101(int p_102)
{
    char l_103 = (-1L);
    int l_104 = 0xEC12BCECL;
    int l_112 = 0xA1EF1C42L;
    unsigned short l_117 = 0xD25EL;
    struct S0 l_129 = {0xE0A1F665L,0x5ADEA466L,0xC14BEF02L,-1L,0xA0367B5E8C0C1622LL,1UL,0xE0A404EE80DCCF35LL,1L};
    unsigned char l_134 = 0x11L;
    short l_164 = 1L;
    int l_223 = 0x01C7BE8AL;
    int l_224 = (-1L);
    unsigned l_235 = 4294967294UL;
    short l_236 = 0L;
    if (((l_103 < (((l_104 = 0xF353L) == ((p_102 , (p_102 != 3UL)) > ((0xB1L ^ (g_116 = (((+(func_105(g_2, ((safe_rshift_func_int16_t_s_s((l_112 |= p_102), (((g_113 ^= (g_37 & g_37)) < l_103) >= (-1L)))) & 0x81L), p_102, l_103) | p_102)) | p_102) & 6UL))) > g_2))) || 65527UL)) || g_114.f0))
    {
        unsigned l_128 = 0xD4276EE3L;
        int l_130 = 1L;
        g_114 = (((((((((((l_104 , l_117) != func_22(((safe_rshift_func_uint16_t_u_u((!65535UL), (((l_104 != (((0x35B9L < (safe_add_func_int32_t_s_s((g_114.f6 > ((safe_rshift_func_uint8_t_u_u((((l_103 | (((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0x1AL, g_2)) | 18446744073709551613UL), l_103)) && 1UL) >= l_117)) & 1UL) != p_102), l_128)) <= 1L)), 0x3D745D28L))) != g_113) , 2UL)) > l_128) | g_113))) || 0x35L), l_104, l_112, p_102, p_102)) < g_114.f6) && p_102) != 1L) && g_114.f7) < 0xD2L) | l_128) || (-7L)) && g_37) , l_129);
        l_130 = g_37;
    }
    else
    {
        unsigned l_133 = 0x3E417FD6L;
        struct S0 l_155 = {-4L,0L,1L,0x5CDA24EF59AD7F26LL,0x2B4697688CC61388LL,2UL,0x972AC2E06E0E4DEALL,0xDED739273CA0E7FDLL};
        for (g_114.f0 = 11; (g_114.f0 != (-15)); g_114.f0--)
        {
            unsigned long long l_142 = 1UL;
            unsigned l_153 = 1UL;
            struct S0 l_154 = {0x21E08C4FL,0xE33EB71EL,8L,-1L,0x99C71661823C796ELL,0x6187993A35CC15AFLL,-1L,0L};
            unsigned char l_185 = 1UL;
            long long l_187 = (-5L);
            l_112 |= ((((l_133 &= 0x5E18L) & (g_113 = func_22(g_114.f3, (g_114.f2 > 4294967295UL), l_134, (l_129.f0 = 0x15DFL), p_102))) >= (g_114.f4 |= (l_129.f2 = g_114.f1))) <= 0UL);
            if ((!(((safe_mul_func_int16_t_s_s((g_139 = (safe_lshift_func_int8_t_s_s(p_102, 6))), (safe_mul_func_int8_t_s_s((l_142 > ((safe_mod_func_uint32_t_u_u((func_22((((l_112 > ((safe_mod_func_uint8_t_u_u((0xF42DL < (l_142 , ((safe_sub_func_uint32_t_u_u((l_142 || ((safe_lshift_func_int16_t_s_u(g_114.f1, 8)) || (safe_mul_func_uint8_t_u_u(g_114.f0, (g_116 <= l_133))))), 0x8C1C32F4L)) || p_102))), l_133)) == p_102)) | l_129.f6) , 4294967293UL), p_102, g_114.f6, g_114.f6, l_134) && l_142), p_102)) == l_142)), l_133)))) <= l_153) != g_113)))
            {
                struct S0 l_156 = {4L,1L,0x5A2CE011L,0xA800174E01C40779LL,0x6EE47DEF404FB78DLL,0x62DABF79C03FCF02LL,1L,0x776B272A17EAE09CLL};
                int l_172 = 0x8946ABEEL;
                l_155 = l_154;
                l_156 = l_155;
                if (g_114.f0)
                    break;
                if ((((l_156.f3 != ((l_154.f2 = p_102) < ((((((safe_lshift_func_uint16_t_u_s(l_156.f7, l_129.f7)) == ((p_102 | (safe_lshift_func_uint16_t_u_s(((l_154.f1 = g_37) <= (l_129.f0 = g_161)), (((g_139 || ((safe_lshift_func_int8_t_s_u((((((p_102 , g_37) > p_102) , l_164) & l_156.f4) < l_155.f0), g_114.f0)) | 1L)) & l_134) == 6L)))) , g_114.f1)) != p_102) == l_129.f1) < g_113) | p_102))) & p_102) == g_113))
                {
                    short l_171 = 0x14A5L;
                    if ((safe_rshift_func_int16_t_s_s((l_172 |= (g_113 , ((((safe_mod_func_uint64_t_u_u((l_155.f4 , (+func_22(p_102, p_102, ((func_22((l_129.f1 &= (l_154.f1 = (g_139 <= (((g_37 ^ ((safe_mod_func_uint16_t_u_u(((g_113 = 65534UL) != (p_102 , (l_156 , 0xB4DCL))), g_139)) , g_161)) > 0xB128L) <= 18446744073709551615UL)))), l_153, l_171, l_171, l_156.f2) , 0x226DL) >= g_116), g_114.f7, g_2))), g_114.f5)) || 0xF78ACACBF73657E3LL) , 5UL) == 0L))), 6)))
                    {
                        unsigned long long l_184 = 0xF0A855FB79274EEELL;
                        g_114.f1 |= (safe_sub_func_uint32_t_u_u(func_22(g_114.f2, l_171, ((g_175 &= l_155.f2) && (g_2 , (g_175 = g_161))), p_102, g_37), g_114.f0));
                        l_187 = (safe_mod_func_int8_t_s_s((0x91L ^ (safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s(p_102, func_22(l_155.f0, func_22(g_113, (g_186 = (safe_sub_func_uint32_t_u_u((g_161 = ((func_22(l_156.f5, ((l_112 &= ((~l_171) > ((((g_114.f4 || (+func_22(l_171, l_129.f1, l_184, p_102, l_154.f1))) > l_171) , 0x4A47L) == 2UL))) > p_102), g_114.f0, l_184, p_102) ^ l_172) < g_175)), l_185))), l_156.f1, l_154.f0, g_114.f0), l_133, g_114.f2, p_102))) != g_37) == 1L), 0x29AFF89DL))), l_134));
                    }
                    else
                    {
                        l_154.f2 |= (-1L);
                        g_114.f1 = (p_102 < p_102);
                    }
                }
                else
                {
                    struct S0 l_188 = {-1L,0x2D85689EL,0L,0x94BE0A22320633EALL,0x39EC2880661F00AFLL,0xCDC94ECEE0DB94E0LL,0xC750D59A3684ED69LL,3L};
                    l_188 = g_114;
                }
            }
            else
            {
                short l_189 = 1L;
                int l_193 = 0x9C72776EL;
                long long l_194 = 0xFA1743C508AB74A1LL;
                int l_200 = 0xA8BBF57CL;
                g_114.f2 = l_189;
                g_190 = g_114;
                l_200 = (safe_rshift_func_int8_t_s_u(((g_199 = (((l_155.f1 = ((l_194 |= (l_155.f0 |= (l_193 ^= l_153))) < (safe_add_func_uint8_t_u_u(0UL, p_102)))) ^ (8UL < (((((((safe_lshift_func_uint8_t_u_u(g_190.f5, p_102)) != (g_161 = (g_190.f5 , l_103))) > p_102) , g_190.f2) <= 0xF7L) == l_185) , l_154.f1))) , 0x5BL)) < 0L), p_102));
            }
        }
    }
    l_129.f0 |= func_105(l_117, p_102, (g_211 = ((safe_add_func_uint64_t_u_u((g_186 = 0xA8C50790A60CB00ELL), (l_129.f1 = (+((safe_sub_func_uint32_t_u_u(g_190.f7, (((g_190.f1 && (g_114.f4 &= (safe_add_func_uint32_t_u_u((0x3EL > ((p_102 > (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((-1L), (p_102 & p_102))), 3))) > p_102)), g_114.f1)))) == 0x0EL) <= 0x18DC958FL))) < p_102))))) < (-1L))), p_102);
    l_224 = ((((((l_129.f2 &= 0x712BL) , (+p_102)) & (l_223 = (g_161 ^= ((safe_mul_func_uint8_t_u_u((l_129.f1 &= (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((l_129.f0 = 0x63L) <= (safe_mul_func_int16_t_s_s(g_190.f1, (safe_mod_func_uint8_t_u_u((l_104 &= g_114.f1), (safe_unary_minus_func_uint16_t_u((l_103 & g_186)))))))), 3UL)), (l_112 = (g_114.f7 , g_114.f2))))), g_175)) != 65527UL)))) > 0x288B700F523956FFLL) == l_117) & l_117);
    l_104 = (0x2FB06025L | (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((l_129.f1 &= l_104) | (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((func_105((safe_mod_func_int32_t_s_s((l_235 > (-10L)), l_236)), ((safe_rshift_func_int16_t_s_u((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_37, p_102)), (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(func_22((l_223 |= 4294967295UL), (l_129.f2 >= p_102), g_114.f3, l_129.f6, p_102), g_114.f2)), g_190.f3)))) > l_129.f2) > g_114.f6), g_190.f3)) , g_116), p_102, l_134) , p_102), g_37)) , p_102) || l_236), 2))) == l_129.f0) == p_102), 0x17L)) , p_102), 5)));
    return l_129.f0;
}







static int func_105(short p_106, unsigned short p_107, unsigned p_108, int p_109)
{
    short l_115 = 0x143AL;
    g_114 = g_114;
    return l_115;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_114.f5, "g_114.f5", print_hash_value);
    transparent_crc(g_114.f6, "g_114.f6", print_hash_value);
    transparent_crc(g_114.f7, "g_114.f7", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_190.f4, "g_190.f4", print_hash_value);
    transparent_crc(g_190.f5, "g_190.f5", print_hash_value);
    transparent_crc(g_190.f6, "g_190.f6", print_hash_value);
    transparent_crc(g_190.f7, "g_190.f7", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_293.f5, "g_293.f5", print_hash_value);
    transparent_crc(g_293.f6, "g_293.f6", print_hash_value);
    transparent_crc(g_293.f7, "g_293.f7", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
