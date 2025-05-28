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
   signed f1 : 4;
   char f2;
   int f3;
   char f4;
   signed f5 : 1;
   unsigned char f6;
   int f7;
};


static struct S0 g_8 = {-3L,-3,1L,0x8900FDB6L,0x68L,0,0UL,0xA3187110L};
static int g_15 = 1L;
static int g_103 = 0xB6EB866BL;
static char g_104 = 1L;
static char g_123 = 1L;
static char g_126 = 3L;
static struct S0 g_128 = {0x33AFFD86L,0,0x45L,0L,8L,0,2UL,0x3DA9491BL};
static int g_135 = 0x8884C663L;
static unsigned short g_152 = 0UL;
static unsigned char g_155 = 1UL;
static char g_173 = (-1L);
static int g_222 = 0L;
static char g_236 = 1L;
static unsigned g_251 = 18446744073709551614UL;
static short g_290 = (-1L);
static struct S0 g_448 = {1L,-0,0x4AL,-1L,0L,0,255UL,1L};
static unsigned g_503 = 0x8714130EL;
static unsigned g_536 = 0x0D90F1D9L;
static unsigned g_651 = 9UL;
static unsigned char g_725 = 0xB8L;
static int g_735 = 0x1B04BDBAL;



static unsigned func_1(void);
static struct S0 func_3(struct S0 p_4, int p_5, unsigned p_6, unsigned short p_7);
static struct S0 func_18(int p_19, unsigned char p_20, struct S0 p_21, int p_22);
static unsigned short func_25(unsigned p_26, char p_27, unsigned p_28, struct S0 p_29, struct S0 p_30);
static struct S0 func_35(char p_36, short p_37, unsigned p_38, int p_39, unsigned char p_40);
static char func_45(unsigned p_46, int p_47, int p_48, unsigned p_49, short p_50);
static short func_52(unsigned p_53, unsigned p_54, struct S0 p_55);
static unsigned char func_76(int p_77, char p_78, int p_79, unsigned char p_80, int p_81);
static short func_82(short p_83, unsigned short p_84, struct S0 p_85);
static short func_86(unsigned p_87, int p_88);
static unsigned func_1(void)
{
    struct S0 l_9 = {0x2E3F9150L,-3,1L,0L,6L,-0,0x40L,0x26F39384L};
    int l_10 = (-10L);
    int l_31 = 0x25B78C6AL;
    struct S0 l_32 = {0xB8600767L,-1,-1L,-3L,0xA8L,-0,0xA5L,-1L};
    l_32.f7 = (safe_unary_minus_func_int16_t_s((func_3((l_9 = g_8), ((l_10 , ((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((g_15 = g_8.f2), 15)) | (0x53D2L > (-5L))) <= (g_8.f4 , (l_10 = g_8.f0))), ((safe_mul_func_uint8_t_u_u(((func_18(g_8.f6, (safe_rshift_func_uint16_t_u_s(func_25((g_8.f4 & l_31), g_8.f3, l_31, g_8, l_32), g_8.f7)), g_8, g_8.f1) , 0x3AL) ^ g_155), 0xE5L)) || g_128.f5))) ^ 0xE1B9L)) <= 6L), g_8.f7, l_31) , 0x6F2EL)));
    return g_128.f0;
}







static struct S0 func_3(struct S0 p_4, int p_5, unsigned p_6, unsigned short p_7)
{
    short l_445 = 6L;
    unsigned char l_449 = 0x9CL;
    int l_452 = (-1L);
    unsigned l_453 = 4294967295UL;
    int l_454 = 0x838D84C4L;
    int l_511 = 0x4C7872DBL;
    short l_585 = 0L;
    struct S0 l_605 = {-1L,-0,0x5FL,0x185A9B60L,-1L,-0,252UL,0L};
    short l_724 = 0L;
    if ((l_454 = (g_128.f7 = ((((((g_251 = l_445) , (safe_mul_func_uint16_t_u_u(1UL, ((((g_448 , l_449) >= p_4.f6) & (g_128.f2 && p_4.f4)) <= (l_445 ^ ((((l_452 = (g_8.f5 = ((safe_sub_func_int16_t_s_s(0L, 0x5DBAL)) != g_236))) > l_453) & 0xCDL) | p_4.f1)))))) >= l_445) & 0x2676F98FL) <= p_4.f5) != (-7L)))))
    {
        return p_4;
    }
    else
    {
        unsigned l_457 = 4294967295UL;
        struct S0 l_478 = {1L,3,0L,0x9F0B637EL,0x90L,-0,255UL,0x1AED0314L};
        int l_612 = 1L;
        unsigned char l_688 = 0x39L;
        unsigned l_698 = 18446744073709551611UL;
        unsigned char l_723 = 0x73L;
        g_8.f0 = 0L;
        g_15 = l_449;
        if (g_448.f6)
        {
            int l_476 = 0x4B7B7BFCL;
            int l_537 = (-9L);
            int l_586 = (-1L);
            struct S0 l_604 = {0xC913FEEBL,0,0x3DL,0L,9L,0,6UL,0x5D4AC070L};
            struct S0 l_613 = {-2L,1,-8L,1L,0xD0L,-0,251UL,-1L};
            for (p_5 = 0; (p_5 != 21); ++p_5)
            {
                int l_479 = (-5L);
                if ((l_453 , (-8L)))
                {
                    int l_475 = (-10L);
                    struct S0 l_490 = {0xDB0BA435L,2,0x7DL,0x4EEEC51CL,0x69L,-0,0UL,0x825AB778L};
                    if (l_457)
                    {
                        unsigned l_462 = 0x1D458869L;
                        struct S0 l_477 = {0x8C1FD13DL,-1,-1L,0L,-7L,-0,255UL,0xD9E0D6B9L};
                        p_4 = (func_52(l_454, (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_445, l_462)), (p_4.f2 = func_45(g_155, (+0x143878ACL), p_4.f5, (func_82(((g_290 = (safe_lshift_func_uint8_t_u_u(0x93L, ((l_476 = (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((0xDE44E6BBL > (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_123, l_457)), g_155)), l_475))) & 0x39L), p_4.f5)), l_475))) | p_5)))) && 0xB35BL), g_152, p_4) || g_448.f7), g_8.f7)))), l_477) , l_478);
                        p_4.f5 = (0L == ((1UL | (l_479 >= func_86(g_8.f2, (safe_add_func_int16_t_s_s((l_477.f7 = ((safe_rshift_func_int8_t_s_s(0x64L, 6)) , (l_477.f4 < p_4.f3))), (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((p_4.f6 | l_476) > 4294967292UL), 7)) <= g_8.f3) <= p_4.f5), p_4.f2)), 4))))))) || 0xB7FC677CL));
                    }
                    else
                    {
                        g_448 = g_8;
                        l_490 = g_8;
                    }
                    l_479 = (((func_86(l_490.f4, ((safe_mul_func_uint16_t_u_u((4294967293UL || (((((safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(func_52((safe_sub_func_uint32_t_u_u((p_4.f0 && p_4.f1), ((safe_add_func_uint16_t_u_u(l_490.f6, p_7)) , (g_128.f4 < func_86(func_86((g_236 , (g_251 = p_5)), g_448.f1), g_173))))), l_453, g_8), l_479)) == 0L), 3)) | l_445) >= 0x51L) == 0xAFL) >= 1L)), l_476)) && g_135)) , p_4.f7) < p_4.f6) <= g_8.f5);
                }
                else
                {
                    unsigned char l_506 = 250UL;
                    int l_516 = 1L;
                    unsigned char l_534 = 0x9FL;
                    unsigned l_535 = 1UL;
                    int l_551 = 0xFDFD6C58L;
                    if ((((safe_mul_func_int16_t_s_s(((p_5 ^ (g_503 = g_126)) | (safe_mod_func_uint16_t_u_u(l_454, p_4.f3))), l_506)) <= func_86(func_82(l_452, (((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((l_511 ^ ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_222 | func_86(p_4.f2, p_4.f0)), 6)) || p_6), 1UL)) && l_457)) , l_478.f1), p_4.f0)) && g_448.f4), p_4.f2)) < 253UL) , p_4.f4), g_8), g_236)) ^ g_8.f6))
                    {
                        l_516 = p_7;
                        l_479 = p_6;
                        p_4 = g_448;
                        return g_448;
                    }
                    else
                    {
                        g_128 = p_4;
                    }
                    if ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((func_45((l_506 & (((safe_rshift_func_int16_t_s_u((0UL | (((safe_sub_func_int16_t_s_s((g_536 = (safe_add_func_int16_t_s_s((g_503 , (safe_rshift_func_int8_t_s_s(((p_4.f3 == (safe_lshift_func_int16_t_s_u(((0x3855L & 9L) >= func_52(p_4.f2, ((safe_rshift_func_int16_t_s_u((l_511 > (((safe_unary_minus_func_uint8_t_u((~(l_534 ^ p_4.f5)))) >= 0L) != 0x29D3L)), 7)) && g_448.f6), g_448)), l_535))) >= g_448.f4), 5))), p_4.f7))), 0x4C7DL)) < g_15) ^ g_251)), l_537)) > g_448.f6) < 0xB6F4L)), g_8.f7, l_452, g_448.f5, l_476) && 0xA7C83BB6L) < g_503), g_503)), l_479)))
                    {
                        char l_546 = 0L;
                        int l_552 = 0xDA7A4DDAL;
                        l_552 = (safe_lshift_func_uint16_t_u_u((l_478.f5 = (~(safe_mod_func_uint8_t_u_u((+0x92L), (-8L))))), (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((((((+(0L || l_479)) && ((l_551 = ((l_546 = p_5) , (((((((safe_rshift_func_uint16_t_u_u(((l_479 < (g_8.f5 , ((safe_mod_func_uint8_t_u_u(((l_516 = 0L) ^ (func_86(l_537, p_4.f7) , l_506)), 255UL)) == p_4.f0))) & g_8.f1), l_511)) >= 0x977DL) <= g_8.f0) > p_4.f3) , 0x9C23E226L) ^ 4294967288UL) >= 0x875FL))) , g_173)) , g_128.f0) , p_4.f6) < l_479), 1L)) | g_536), l_452))));
                        if (l_516)
                            continue;
                        p_4 = g_8;
                    }
                    else
                    {
                        int l_575 = 0xD01A2FE5L;
                        int l_576 = 0xA8051BF2L;
                        g_128.f7 = (safe_sub_func_uint8_t_u_u(((((l_551 != (g_290 = (safe_mul_func_uint8_t_u_u((func_86(g_448.f0, p_4.f5) < (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(5L, 1)), 5L)), (((g_448.f2 ^ g_135) , (((safe_lshift_func_uint16_t_u_s(l_457, p_4.f7)) & 255UL) && p_4.f3)) && 0x3EL)))), 0xC4L)))) <= 0x9A93L) , p_5) , p_5), 0x3BL));
                        g_448.f7 = p_4.f2;
                        p_4.f5 = l_478.f7;
                        l_576 = (safe_mul_func_int16_t_s_s((((-6L) | ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((l_511 && (4L || (l_453 > (safe_mod_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((l_537 , (l_476 != (l_537 = func_86(g_8.f0, l_479)))), 5)) != l_575) == p_4.f5) & g_128.f7), l_476))))), l_479)) & 4UL), 7)) , l_575)) & 0x4FL), 0x0CF6L));
                    }
                }
                if (p_4.f6)
                    continue;
            }
            l_586 = (safe_sub_func_uint32_t_u_u((p_4.f4 | ((0x74645053L >= g_236) <= ((safe_add_func_uint8_t_u_u(p_4.f7, (p_4.f2 = 0L))) && ((safe_mul_func_int8_t_s_s((l_537 = (((((g_448.f5 , (safe_sub_func_int8_t_s_s(func_76(g_8.f3, ((l_478.f5 , p_5) & l_585), l_454, p_5, p_4.f2), 0x66L))) , 254UL) > g_123) || 0x7936L) , 0xB0L)), 0xAEL)) <= g_448.f6)))), 4294967291UL));
            if ((safe_lshift_func_int8_t_s_s(((4294967288UL != (l_454 < (((p_4 = func_18((safe_add_func_uint8_t_u_u(0xC6L, (g_448 , ((((safe_sub_func_uint8_t_u_u(g_126, (g_536 ^ (+0L)))) >= ((g_448 , (((safe_rshift_func_uint8_t_u_s(l_457, 0)) & l_457) , p_4.f4)) >= g_173)) , p_5) , p_7)))), g_536, g_8, g_222)) , g_128.f5) , l_449))) < p_6), 5)))
            {
                int l_601 = 0x42890521L;
                g_448.f7 = func_45((p_4.f0 , g_448.f5), g_536, (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_454 = 0xD40615B8L), (((func_82(((func_76(g_8.f4, l_601, (l_478.f7 > (p_4.f6 < (p_4.f5 && p_4.f0))), l_478.f5, g_128.f3) ^ p_4.f5) || 0x16L), g_8.f7, l_604) > p_4.f5) != p_5) <= 6UL))), p_4.f5)) < g_236), 2)), p_4.f2, p_6);
                l_605 = p_4;
            }
            else
            {
                struct S0 l_606 = {-1L,3,1L,0L,0x0FL,0,252UL,0x5282ADF5L};
                short l_607 = 0x39A7L;
                l_604 = l_606;
                if ((0xB877L >= 0x46ABL))
                {
                    p_4.f1 = l_607;
                    l_606.f0 = (safe_rshift_func_uint16_t_u_u((g_152 = l_604.f5), (safe_rshift_func_uint16_t_u_u(((((((l_452 = l_606.f5) , 0xDEDDD5F1L) > (((l_476 == g_236) | g_128.f1) <= (p_7 != (l_612 = g_128.f2)))) == (func_86((func_86((p_6 = ((p_4.f1 , p_4.f2) || g_8.f7)), l_586) && 0x8D60L), g_448.f7) > l_604.f7)) & p_4.f0) , p_4.f4), p_4.f2))));
                }
                else
                {
                    int l_632 = (-1L);
                    int l_635 = 6L;
                    p_4 = l_613;
                    for (l_454 = (-22); (l_454 <= (-11)); l_454++)
                    {
                        unsigned char l_636 = 0x69L;
                        g_448.f1 = 1L;
                        g_448.f0 = g_103;
                        g_448 = func_35((safe_mul_func_int8_t_s_s((p_5 != (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((p_4.f7 >= (g_290 = p_4.f3)), (safe_mod_func_int16_t_s_s((!(safe_add_func_int32_t_s_s(g_448.f1, (((g_536 = (~0xC8A15D8FL)) >= 0x048BFD6DL) > (((safe_lshift_func_int8_t_s_u((l_635 = (((safe_mod_func_uint8_t_u_u(func_45((0x3821L > (l_632 = (safe_lshift_func_int16_t_s_u(l_606.f6, 12)))), (safe_lshift_func_uint8_t_u_s((p_4.f6 = (l_606.f1 <= l_604.f2)), 3)), g_448.f3, g_128.f3, g_503), 250UL)) == g_126) , g_128.f6)), l_636)) , l_478) , g_503))))), (-8L))))), 4))), g_8.f4)), g_448.f0, l_452, p_7, g_251);
                    }
                }
            }
            l_478 = ((g_173 , g_290) , g_448);
        }
        else
        {
            unsigned l_652 = 4UL;
            unsigned char l_681 = 9UL;
            int l_729 = 0x81556BA7L;
            for (g_290 = 0; (g_290 < 14); g_290 = safe_add_func_uint16_t_u_u(g_290, 7))
            {
                unsigned char l_641 = 253UL;
                int l_680 = 0x6ADE5046L;
                int l_697 = (-1L);
                if (p_4.f0)
                {
                    unsigned l_650 = 0x76CA1F13L;
                    p_4.f7 = ((((safe_add_func_uint8_t_u_u(g_448.f2, (+func_76((func_76(g_135, (6L && p_4.f6), l_641, (g_128.f6 = g_8.f7), (p_4.f3 = ((safe_mul_func_uint8_t_u_u(g_103, (g_173 ^ (g_651 = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((func_86(l_585, l_445) , 0x17AFL), l_650)) > l_478.f7), p_5)), 0L)))))) && l_652))) , 0xEB1247E8L), l_605.f0, l_652, g_503, g_8.f6)))) & l_641) | l_641) >= g_104);
                    if ((safe_mul_func_int16_t_s_s((l_605.f0 = (0x29L && 0xC0L)), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((g_173 = (safe_sub_func_int32_t_s_s((0xE021L && (((l_680 = ((safe_sub_func_uint16_t_u_u(func_86((safe_add_func_int8_t_s_s(0xE3L, ((safe_add_func_int32_t_s_s(g_503, (g_8.f7 = p_4.f1))) != (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_612, (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(func_76(((255UL | (((((safe_lshift_func_uint8_t_u_s(((l_478.f5 = (p_4.f4 = (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(((p_4.f2 = 0x19L) & 0x41L), l_641)) , p_4.f6) || 0xCFCCL), 0x18L)))) , 0xCAL), g_128.f5)) == p_6) <= 0xC770L) , 0xA310L) & 0x12D7L)) < g_8.f0), l_652, l_478.f6, g_251, l_652))), l_650)))), g_448.f4))))), g_103), 0x3B98L)) || p_4.f6)) , 0x4C17L) || (-1L))), l_641))) != p_7), g_123)), l_681)))))
                    {
                        return p_4;
                    }
                    else
                    {
                        int l_699 = 0xC9E951DCL;
                        if (l_680)
                            break;
                        p_4.f0 = (!func_45(func_76(((safe_add_func_uint32_t_u_u(func_45((p_6 != g_135), g_8.f6, (0L && (((0UL <= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(func_76(p_4.f6, func_76((l_688 = 3L), l_650, p_4.f1, g_128.f1, g_152), l_681, g_173, l_680), l_680)), 0x50L))) == 4294967295UL) & g_8.f1)), p_7, g_448.f2), 0xD3F94733L)) , g_15), l_445, l_650, p_4.f5, p_4.f6), p_4.f7, g_15, p_4.f1, g_236));
                        if (l_681)
                            continue;
                        l_699 = (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((l_680 = g_536) , (p_4.f7 == (g_128.f6 , p_4.f7))) & func_86((~((p_4.f2 = func_86((((safe_mul_func_int16_t_s_s(g_128.f4, ((safe_add_func_int16_t_s_s((l_697 = (p_6 != (p_4.f3 && ((func_86(((p_4.f5 , (l_452 , p_4.f0)) != (-1L)), g_128.f3) <= 0xBA7A458FL) , 1UL)))), p_4.f6)) != g_222))) , 0x0CL) , 0xE307FD02L), p_4.f3)) & l_698)), g_128.f2)) ^ l_453), g_8.f7)), 65535UL));
                    }
                }
                else
                {
                    unsigned char l_708 = 0xA9L;
                    for (g_448.f4 = 0; (g_448.f4 == (-2)); --g_448.f4)
                    {
                        if (g_503)
                            break;
                    }
                    l_511 = ((l_478 , g_128.f3) , (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((g_8.f5 = (safe_sub_func_uint16_t_u_u(((p_4.f4 , (p_6 , (l_585 == 0x29CF21EEL))) | func_86(g_8.f6, l_708)), p_4.f3))) | l_478.f7), 2L)), 5)));
                    g_448.f7 = (safe_add_func_uint16_t_u_u(l_708, p_4.f0));
                    l_697 = (-5L);
                }
                if ((safe_add_func_uint32_t_u_u((func_45((safe_mod_func_int16_t_s_s(l_680, ((l_680 < (g_725 = (g_152 = (safe_rshift_func_uint8_t_u_u((((p_4.f6 ^ g_236) ^ ((l_697 = p_4.f5) && (func_76(g_128.f4, (func_86((safe_mul_func_int16_t_s_s(g_135, ((safe_add_func_int32_t_s_s(6L, ((safe_rshift_func_uint8_t_u_s((g_173 || 3L), g_448.f5)) , g_448.f3))) == (-1L)))), g_155) < 0x59L), p_4.f0, l_723, l_724) , l_641))) ^ g_8.f5), l_641))))) , l_723))), g_536, l_681, g_126, l_652) >= g_8.f4), g_155)))
                {
                    unsigned l_728 = 0xEC2A495FL;
                    int l_732 = 0x80390572L;
                    l_729 = func_86(l_641, (p_4.f3 > ((-3L) != ((((p_4.f7 = func_76(l_728, p_4.f2, (l_697 = (l_728 , ((g_448.f5 = (251UL && (g_173 , ((-1L) >= 255UL)))) <= l_723))), g_236, p_6)) >= 0x2F3C14A3L) != p_4.f5) >= p_5))));
                    if ((g_104 ^ g_128.f0))
                    {
                        if (p_4.f3)
                            break;
                    }
                    else
                    {
                        p_4 = p_4;
                        if (p_4.f1)
                            break;
                        p_4 = g_128;
                        g_448.f7 = (l_732 = (safe_lshift_func_int16_t_s_s((l_449 < p_4.f2), 14)));
                    }
                    for (p_4.f6 = (-21); (p_4.f6 <= 10); p_4.f6 = safe_add_func_int32_t_s_s(p_4.f6, 1))
                    {
                        int l_736 = 0x60CDFBDBL;
                        l_736 = ((p_4.f3 | (l_652 <= (g_128.f4 = g_735))) ^ p_4.f6);
                    }
                }
                else
                {
                    g_448.f7 = (p_4.f1 = (g_8.f4 >= l_454));
                    if (func_86(func_82(g_725, g_128.f2, g_128), ((p_4.f6 , (safe_lshift_func_uint8_t_u_s(l_681, 5))) && (g_152 = g_251))))
                    {
                        return p_4;
                    }
                    else
                    {
                        unsigned char l_739 = 0x18L;
                        l_478.f0 = l_739;
                    }
                }
            }
        }
        p_4.f0 = (((!(-1L)) & (((safe_mul_func_int16_t_s_s(((p_7 = p_4.f3) < (((safe_rshift_func_uint8_t_u_s(0xB1L, 4)) & (l_605.f7 = (p_4.f2 , (g_290 = func_76((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_698, (safe_mul_func_uint8_t_u_u(g_128.f4, (g_8.f3 > (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(2L, g_155)), l_605.f5))))))), l_612)), 2)), p_4.f5)), p_4.f0, g_8.f7, l_511, g_104))))) , p_4.f7)), g_135)) && 0xC380L) , g_128.f7)) , p_4.f4);
    }
    if (l_511)
    {
        unsigned char l_762 = 1UL;
        struct S0 l_767 = {0x303A4123L,1,0x93L,0x51272849L,2L,0,255UL,0x0CBA4102L};
        l_605 = func_35((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_605.f5, p_5)), 0)), p_4.f1, l_762, ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_4.f6, p_4.f2)), 15)) , (g_8.f0 = p_4.f3)), p_4.f1);
        g_128 = (l_767 = p_4);
    }
    else
    {
        int l_774 = 0L;
        g_448 = func_35((p_4.f7 > ((((safe_lshift_func_int8_t_s_s(0x54L, func_82(p_4.f4, ((p_4 , (g_503 , (l_452 , 65532UL))) | (p_4.f5 < (safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(l_774, p_4.f3)) | 0x2ABA59FCL), l_453)))), p_4))) ^ 0x796DAF0BL) || 65531UL) != 65535UL)), p_4.f5, l_605.f0, p_7, p_4.f5);
    }
    return p_4;
}







static struct S0 func_18(int p_19, unsigned char p_20, struct S0 p_21, int p_22)
{
    int l_441 = (-1L);
    short l_444 = 0x7F1EL;
    g_128.f7 = (safe_mod_func_int8_t_s_s((((((p_21.f0 = (g_128.f6 && (((safe_mul_func_int16_t_s_s(0xE1BDL, (safe_lshift_func_int8_t_s_s(g_128.f2, p_20)))) < ((g_8.f0 > (((l_441 < p_21.f1) == (l_444 = (safe_lshift_func_int16_t_s_s((~(g_290 = p_21.f2)), 12)))) != func_86(l_441, g_8.f2))) < 1UL)) , p_21.f5))) >= p_21.f2) != g_128.f2) | l_441) != 0x24L), p_21.f2));
    return p_21;
}







static unsigned short func_25(unsigned p_26, char p_27, unsigned p_28, struct S0 p_29, struct S0 p_30)
{
    unsigned char l_51 = 1UL;
    int l_434 = 0xF25A782DL;
    p_29.f1 = ((safe_sub_func_uint32_t_u_u((((g_8.f1 == (p_29.f7 = ((l_434 = (func_35((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_45((p_26 = 0x4A474477L), g_8.f7, ((l_51 > func_52((safe_add_func_int16_t_s_s(g_8.f5, (g_8 , (safe_unary_minus_func_uint32_t_u((((p_29.f3 = ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint16_t_u_s(p_30.f5, 11)) , (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_51 && (g_8.f2 == 0xCFL)), p_29.f2)), l_51)), l_51)), g_8.f0))))), g_8.f4)), p_30.f1)) , g_8.f6)) , 8L) & 0x84FF3FA3L)))))), p_29.f2, p_30)) | p_29.f6), p_29.f5, l_51), 4)), l_51)), p_29.f0, l_51, g_8.f6, g_251) , l_51)) == g_8.f7))) , g_222) & p_30.f7), g_8.f5)) | 255UL);
    return p_30.f2;
}







static struct S0 func_35(char p_36, short p_37, unsigned p_38, int p_39, unsigned char p_40)
{
    unsigned char l_339 = 0x24L;
    struct S0 l_343 = {-1L,0,-4L,-4L,0x7FL,0,0x6AL,0x8F079D20L};
    unsigned char l_385 = 0x1AL;
lbl_433:
    l_339 = g_126;
    for (g_128.f0 = 0; (g_128.f0 >= (-26)); g_128.f0--)
    {
        struct S0 l_342 = {-9L,-0,0x9BL,0xAD8240C3L,1L,-0,0x21L,0xC8FBD4BFL};
        l_342 = l_342;
    }
    if (g_8.f4)
    {
        struct S0 l_344 = {0x26DD5439L,-1,-1L,3L,0x2EL,-0,0x6BL,-6L};
        unsigned char l_345 = 0x98L;
        char l_368 = 1L;
        struct S0 l_420 = {0xC58D8B7DL,1,6L,0xED79F198L,0xACL,0,2UL,0x40FA5F11L};
lbl_392:
        l_345 = func_82(p_37, p_38, (l_344 = l_343));
        for (l_343.f4 = 0; (l_343.f4 >= 5); ++l_343.f4)
        {
            struct S0 l_348 = {1L,3,0x4BL,0L,0x63L,0,0x2FL,-1L};
            int l_351 = 1L;
            if (g_128.f2)
                break;
            g_128 = l_348;
            g_128.f1 = (safe_sub_func_uint8_t_u_u(((((l_344 , (g_103 <= (0xC1L == g_128.f0))) | func_86(l_351, (((((-1L) | (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((func_86(func_86((func_86(((safe_add_func_int8_t_s_s(0x6EL, p_40)) != (((safe_mul_func_uint8_t_u_u(((-1L) < 0xD4B7L), 0L)) & 0L) >= l_339)), p_40) <= 0UL), p_40), l_344.f4) || 0L) & p_40) , p_36), g_126)), 5)), p_39)), 2))) , l_343.f0) , 0x8FDF5145L) , l_348.f5))) != 1UL) || p_36), 253UL));
        }
        if (((safe_sub_func_uint32_t_u_u(4294967286UL, (((safe_lshift_func_uint16_t_u_u(((l_368 || g_8.f5) & (~((safe_sub_func_uint8_t_u_u(255UL, (l_344.f7 = (g_290 , func_45(((l_344.f5 = (safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((((l_344.f1 = (g_128.f4 <= 0xEF32L)) <= (254UL > (p_37 , 0x6EL))) < p_37), p_37)) && l_343.f7), 5))) == 9UL), p_38, p_39, g_8.f3, p_38))))) && g_104))), l_344.f0)) != 1L) ^ l_339))) > 0xF4ABL))
        {
            unsigned l_389 = 1UL;
            int l_403 = 0xD0464ABDL;
            struct S0 l_419 = {-1L,-2,0L,0xF6648867L,0x31L,0,1UL,0xD4C2E39CL};
            for (g_152 = 0; (g_152 > 40); g_152 = safe_add_func_int32_t_s_s(g_152, 5))
            {
                unsigned char l_377 = 255UL;
                struct S0 l_388 = {0L,0,0x18L,0x45FDAD9AL,-1L,0,0x58L,1L};
                unsigned char l_418 = 247UL;
                g_128 = l_343;
                if (l_377)
                {
                    unsigned short l_384 = 65535UL;
                    int l_386 = (-1L);
                    int l_387 = 0xC7521459L;
                    l_389 = ((func_82((l_343.f7 = func_82(((g_290 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_40 == (safe_rshift_func_int8_t_s_s((p_39 > ((l_384 = 0xC023L) == func_86(((5L > (((l_386 = l_385) | ((g_155 ^ g_152) <= (g_128.f5 > (p_39 , p_37)))) && 0x8A7FL)) , g_251), g_128.f5))), 0))), l_344.f5)), p_37))) != l_387), g_8.f1, l_388)), p_40, l_388) >= p_39) & g_8.f1);
                }
                else
                {
                    l_344 = ((+p_38) , g_128);
                    for (g_222 = (-2); (g_222 == 18); g_222 = safe_add_func_int32_t_s_s(g_222, 8))
                    {
                        if (g_8.f3)
                            goto lbl_392;
                        g_128.f0 = (safe_rshift_func_uint8_t_u_s(p_36, ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_128.f1, (safe_add_func_int8_t_s_s(l_389, (func_86((((g_135 | (g_128.f2 , p_36)) == p_38) >= (((safe_mod_func_uint8_t_u_u((((func_86(g_128.f0, (l_403 = ((p_40 , p_36) > l_368))) == 0x66L) <= 4294967289UL) , 0xBEL), p_37)) != 0UL) || 0UL)), g_123) == 1L))))), l_343.f2)) >= p_36)));
                        if (p_38)
                            continue;
                    }
                    return g_8;
                }
                p_39 = func_45((((l_343.f5 = ((safe_mul_func_int16_t_s_s((g_123 , ((safe_add_func_uint16_t_u_u(l_385, func_82((safe_add_func_uint32_t_u_u((p_36 , p_36), func_82((l_343.f0 = ((safe_mod_func_int32_t_s_s(((((l_419.f7 = (safe_mod_func_int32_t_s_s(func_86((g_251 = func_45(g_8.f1, ((p_38 = (((((func_82((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((l_343.f1 = 0x0680L) == (g_290 = (l_344.f7 = (l_344.f1 = (g_8.f5 , 0x8461L))))) , ((l_403 , l_418) < g_236)), g_8.f4)), g_8.f6)), l_403, l_419) || g_8.f3) == l_388.f7) <= p_40) >= p_37) , p_37)) , l_343.f7), p_37, p_37, l_388.f6)), g_8.f6), l_344.f6))) & (-1L)) || 0UL) | 8UL), 4294967295UL)) ^ 5L)), p_40, l_420))), p_37, g_8))) && l_420.f4)), l_420.f1)) & l_419.f1)) != g_8.f7) <= l_344.f3), g_8.f2, g_8.f6, l_388.f3, g_8.f5);
                l_388 = l_388;
            }
        }
        else
        {
            struct S0 l_421 = {0L,-3,0xC1L,0x0783E365L,0x66L,-0,0x6FL,-4L};
            g_128.f0 = p_39;
            g_128.f7 = g_8.f1;
            l_421 = g_8;
            p_39 = func_76((((((p_40 = (l_343.f2 != 1UL)) & (safe_mod_func_uint32_t_u_u((l_421.f1 = (safe_unary_minus_func_uint32_t_u(func_45((((safe_mod_func_int16_t_s_s(((p_37 = (p_38 < (0x97A1D36FL | l_420.f5))) == (~(safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(5UL, 6)), (safe_mul_func_uint16_t_u_u(l_420.f5, g_128.f6)))))), l_421.f7)) != 0x3DL) , l_421.f5), g_8.f5, p_36, l_420.f0, l_344.f6)))), 0xF1DF2DCFL))) || 0xB8L) > 249UL) & g_8.f5), g_8.f7, l_421.f3, p_39, g_8.f1);
        }
        g_128 = l_343;
    }
    else
    {
        p_39 = (p_37 , (~((-8L) >= l_343.f7)));
        if (g_128.f2)
            goto lbl_433;
    }
    return l_343;
}







static char func_45(unsigned p_46, int p_47, int p_48, unsigned p_49, short p_50)
{
    unsigned short l_305 = 65531UL;
    struct S0 l_308 = {-4L,2,0x4DL,0x3C1946B9L,1L,-0,248UL,0xC2A5EDB7L};
    p_48 = (0xE3F4L > ((p_47 != (l_308.f0 = (((safe_lshift_func_uint16_t_u_u((func_82((l_305 = p_46), (safe_rshift_func_int16_t_s_u(p_50, 14)), l_308) <= func_86(g_8.f7, l_308.f2)), p_47)) >= g_8.f1) | l_308.f7))) ^ p_46));
    for (g_222 = 0; (g_222 != 2); g_222 = safe_add_func_uint32_t_u_u(g_222, 2))
    {
        int l_311 = (-1L);
        struct S0 l_324 = {0xA3F4E828L,0,1L,0x747EDB3FL,1L,-0,1UL,0xCA56E3BAL};
        l_311 = p_46;
        g_128.f0 = p_48;
        g_128.f5 = (l_324.f7 = ((l_308.f7 = (safe_mod_func_uint16_t_u_u((g_128 , l_311), (safe_mul_func_uint8_t_u_u(((l_305 > p_46) & (safe_sub_func_int16_t_s_s((func_86(l_308.f0, (g_251 && (((safe_mul_func_int8_t_s_s(func_86((safe_rshift_func_uint8_t_u_u(p_48, 4)), ((safe_mod_func_uint32_t_u_u((~(l_324 , p_49)), l_308.f7)) ^ (-1L))), p_47)) & p_47) && 1L))) || 0L), l_308.f6))), g_152))))) != 0xEFF8L));
    }
    g_128.f7 = (((safe_mul_func_uint16_t_u_u(g_8.f7, ((g_128.f5 & (p_50 = (l_308.f7 = ((safe_lshift_func_uint16_t_u_s(p_46, 7)) , g_8.f7)))) == ((safe_sub_func_uint16_t_u_u((p_46 > func_86((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(l_305, (+((func_86(p_48, (((((l_308.f5 = 0x78L) <= (safe_mul_func_uint16_t_u_u(func_86((((((((((safe_rshift_func_uint8_t_u_u((((g_128 , p_47) <= g_8.f6) > p_46), 2)) != l_308.f1) == l_308.f6) ^ g_236) >= 65535UL) | p_49) >= 0L) != g_8.f1) | 0x24L), p_47), p_47))) == p_46) > g_8.f7) | l_308.f6)) & 0xF9L) <= g_128.f5)))), 4)), g_128.f3)), g_128.f7)) && 255UL)))) == l_308.f3) != p_46);
    return g_8.f3;
}







static short func_52(unsigned p_53, unsigned p_54, struct S0 p_55)
{
    unsigned short l_89 = 0x957FL;
    int l_153 = 0xDCCF353FL;
    char l_175 = (-10L);
    struct S0 l_193 = {0L,2,0x62L,0L,0xA7L,-0,246UL,0x7FB4A33CL};
    unsigned char l_242 = 0xCBL;
    if ((safe_add_func_uint8_t_u_u(func_76((func_82(func_86(l_89, p_55.f0), (safe_rshift_func_uint8_t_u_s(p_55.f2, 5)), g_8) > (func_86(p_55.f2, ((!(safe_add_func_int32_t_s_s(p_55.f7, func_86(p_55.f3, p_55.f4)))) | (-1L))) ^ p_53)), g_126, p_55.f4, g_8.f2, g_8.f5), p_55.f2)))
    {
        unsigned l_144 = 18446744073709551615UL;
        p_55.f0 = (p_55.f0 > (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((g_8.f4 < ((g_135 = (2UL && g_128.f0)) && (safe_add_func_int32_t_s_s(((l_89 , (safe_lshift_func_uint8_t_u_u(g_8.f3, (+(safe_rshift_func_uint16_t_u_u(p_53, (safe_mul_func_uint8_t_u_u((g_123 != l_144), g_128.f0)))))))) ^ g_135), l_144)))) , p_55.f3))), 0x037D67D2L)));
        return g_128.f6;
    }
    else
    {
        int l_145 = 0L;
        int l_154 = 0L;
        struct S0 l_168 = {0x9AF42D70L,2,-1L,0x17D4CA52L,-9L,-0,255UL,5L};
        if ((((4294967295UL != (l_145 >= (safe_mod_func_int32_t_s_s((((((l_154 = ((safe_mod_func_uint8_t_u_u(((func_76((g_128.f1 = 0x3571D3B0L), (((safe_mul_func_int16_t_s_s(p_55.f6, p_55.f4)) == (l_89 < p_55.f6)) == ((func_86((l_153 = (g_152 = 18446744073709551615UL)), (p_55.f6 >= g_128.f0)) , g_128.f7) , (-10L))), l_89, g_128.f6, p_54) , l_153) != p_55.f1), 0x63L)) ^ 0x3130L)) ^ g_155) && 1UL) || (-3L)) ^ 0xA3L), 0xACA1152AL)))) , p_53) > g_8.f3))
        {
            g_135 = g_8.f4;
            p_55 = g_8;
            p_55 = g_128;
            p_55.f1 = g_128.f5;
        }
        else
        {
            int l_167 = 0x4C8627F2L;
            p_55.f1 = 0xA484DF50L;
            for (l_145 = (-8); (l_145 <= 24); l_145++)
            {
                unsigned l_160 = 0x0A9F045BL;
                struct S0 l_174 = {0x9C716618L,-2,0x79L,0xE0618799L,9L,0,0UL,5L};
                for (g_128.f3 = 23; (g_128.f3 > 17); g_128.f3 = safe_sub_func_uint8_t_u_u(g_128.f3, 1))
                {
                    p_55.f0 = 0L;
                    return l_160;
                }
                for (g_126 = 6; (g_126 >= (-29)); --g_126)
                {
                    l_167 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_160, 12)) && ((func_82((l_167 >= ((p_55 , (p_53 , l_168)) , (g_173 = func_82((l_167 | (safe_sub_func_int8_t_s_s(p_55.f1, ((l_160 <= (safe_mul_func_uint16_t_u_u((~(((l_154 < l_167) ^ (-7L)) == l_160)), 0L))) >= l_160)))), p_55.f3, g_8)))), p_54, l_174) < p_55.f1) && p_55.f0)), 0x0EL));
                    p_55.f1 = p_55.f1;
                    l_175 = l_167;
                }
                if (l_174.f0)
                    continue;
            }
        }
        for (p_55.f2 = 0; (p_55.f2 < 18); ++p_55.f2)
        {
            unsigned char l_195 = 0UL;
            int l_214 = 0L;
            unsigned l_231 = 0xCB5E7A75L;
            int l_239 = 0x43437DABL;
            char l_255 = 0L;
            int l_265 = 0x2EBB47E7L;
            struct S0 l_291 = {0L,-3,0x03L,1L,-3L,-0,0x60L,0x18505309L};
            if (g_128.f2)
            {
                p_55.f1 = 0x4DEADDEDL;
                g_128 = g_8;
                p_55.f5 = l_89;
            }
            else
            {
                char l_189 = (-1L);
                int l_192 = 5L;
                struct S0 l_194 = {0x72B03FFEL,-1,0x83L,-9L,0x45L,0,9UL,0x6B2B969AL};
                for (g_128.f7 = (-29); (g_128.f7 != 3); g_128.f7++)
                {
                    char l_184 = 0L;
                    char l_221 = 0x44L;
                    struct S0 l_229 = {0xD3F0A855L,-3,0x92L,1L,8L,0,2UL,0x2C5E5416L};
                    if (((safe_rshift_func_int8_t_s_s(6L, 7)) != ((safe_lshift_func_int16_t_s_s(0x45A2L, p_54)) && (l_184 < (l_192 = ((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((l_189 < (l_168.f0 = func_86(g_126, (safe_mul_func_uint16_t_u_u(65533UL, (+0xC186L)))))), p_53)) == l_89) , 0x5C27L) , p_55.f0), 7)) != 0xEEL))))))
                    {
                        l_194 = l_193;
                        return l_195;
                    }
                    else
                    {
                        l_194.f1 = 9L;
                    }
                    for (g_123 = 0; (g_123 != 19); g_123++)
                    {
                        g_128.f5 = ((g_8.f0 || l_168.f6) , (safe_lshift_func_uint8_t_u_u(p_55.f4, 7)));
                    }
                    p_55.f7 = func_86(func_86((safe_rshift_func_uint8_t_u_u(func_86(((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((0x30L != p_55.f1), func_86((safe_lshift_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s((g_222 = func_86((func_86(p_55.f2, (func_86(g_104, ((l_168.f5 , ((g_128.f4 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((l_214 = g_173), ((((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((p_55.f5 | 0xAEL) == (safe_lshift_func_int16_t_s_u(l_195, 4))) || l_221) == p_55.f1), p_55.f6)), g_135)) || 0L) | g_123) && 0x816FL))), l_195))) , p_53)) == 0x60L)) >= p_55.f2)) , 0x57E3DCABL), p_55.f2)), g_128.f6)) <= 0L) , g_173) , 0L) & 0xA5L), l_193.f0)), g_126))), l_193.f4)) <= g_8.f3), g_8.f3), 0)), p_55.f1), p_55.f0);
                    for (g_128.f6 = 19; (g_128.f6 >= 23); g_128.f6++)
                    {
                        unsigned l_230 = 0UL;
                        p_55.f7 = func_86(((0L <= func_86((((p_55.f1 | ((safe_lshift_func_int8_t_s_s(g_128.f7, (safe_rshift_func_int16_t_s_s((((func_86(((l_229 , g_8.f6) || (3L || (-8L))), l_230) , l_231) != p_55.f7) && 0x39L), 9)))) < 1UL)) < l_231) , 0xFFD04AB9L), p_55.f3)) >= l_230), g_128.f6);
                    }
                }
            }
            if ((safe_mod_func_uint32_t_u_u((((((safe_add_func_uint32_t_u_u(((g_155 || p_53) <= p_55.f6), (g_236 = l_231))) <= (p_55.f7 & l_193.f2)) || g_128.f2) && ((((l_239 = ((l_231 <= (safe_add_func_int32_t_s_s(8L, 0xA7A67A8AL))) || p_55.f6)) , p_55.f6) & l_214) & 65527UL)) > p_55.f3), p_55.f5)))
            {
                unsigned l_254 = 0x68538732L;
                int l_264 = 0x773CFD7DL;
                l_242 = (g_128.f7 = (g_128.f2 | ((safe_rshift_func_int16_t_s_u(g_236, 14)) | (g_8.f2 == g_8.f6))));
                if (p_55.f2)
                {
                    p_55.f1 = (p_55.f3 >= g_128.f7);
                }
                else
                {
                    short l_252 = (-1L);
                    struct S0 l_253 = {1L,-2,1L,0x2AFE41C3L,0x56L,-0,0xE6L,-1L};
                    p_55.f1 = (safe_mul_func_int16_t_s_s(func_76(l_231, (l_254 = func_82((l_195 , (0xE5L | (g_135 > ((0x9EE6CF7EL | (p_55.f7 = (safe_mul_func_uint8_t_u_u(6UL, (safe_sub_func_int8_t_s_s(p_55.f1, func_82((6UL > (safe_add_func_uint32_t_u_u(((g_8.f7 , g_251) != 0x1743C508L), p_55.f4))), l_252, p_55))))))) > l_145)))), l_252, l_253)), p_55.f3, p_53, l_255), g_236));
                    l_193 = g_128;
                    p_55.f7 = ((l_255 ^ (g_135 = (func_76(((l_153 = ((l_253.f7 = (l_214 = (safe_lshift_func_uint8_t_u_s(g_128.f2, (p_55.f7 != (safe_rshift_func_int8_t_s_s(p_54, 5))))))) , g_126)) , ((((safe_lshift_func_int16_t_s_s((func_82((safe_mul_func_uint16_t_u_u(((-1L) >= ((l_264 = (((((g_128.f6 == 0x9F4EE447L) || (p_55.f0 = ((p_55.f0 >= p_53) == p_55.f3))) , g_251) >= 1UL) , 0x83ACL)) | l_214)), p_55.f5)), g_123, l_253) >= l_265), 13)) >= g_152) & p_55.f5) , (-1L))), g_222, g_222, g_8.f5, l_254) || p_55.f1))) , (-1L));
                }
            }
            else
            {
                g_128.f7 = (g_128.f4 > (safe_lshift_func_int8_t_s_s((l_239 = p_55.f6), (((safe_sub_func_int16_t_s_s((-7L), ((safe_rshift_func_uint8_t_u_u(0UL, (g_128.f6 = g_128.f1))) , (p_55.f5 <= ((l_193.f4 | ((g_128.f3 || (l_214 = (g_8.f4 < g_236))) , 0x78L)) >= p_55.f0))))) | g_8.f7) , g_128.f0))));
            }
            g_128 = p_55;
            if ((g_135 = (safe_rshift_func_int16_t_s_s((p_55.f3 > (0x26L == ((+(safe_add_func_uint8_t_u_u(func_82(((safe_lshift_func_uint8_t_u_s(((g_152 = g_8.f0) & ((g_290 = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((func_86(((g_123 != ((l_168.f0 = p_55.f3) != p_55.f2)) == 246UL), (((((safe_rshift_func_int16_t_s_s(0L, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 3)), 0x421EL)))) | l_89) , 0x42D0C338L) == p_55.f2) < l_195)) | g_128.f1), 0)) , (-1L)), 3)) < l_195)) || g_8.f7)), g_251)) , 0x9604L), l_153, l_291), l_193.f2))) < g_126))), 9))))
            {
                for (l_195 = 0; (l_195 != 43); l_195++)
                {
                    if (g_128.f4)
                        break;
                }
            }
            else
            {
                p_55.f0 = g_8.f3;
                if ((l_239 = p_55.f7))
                {
                    unsigned char l_294 = 0x97L;
                    l_294 = g_8.f7;
                    g_128.f0 = g_155;
                    for (p_55.f6 = (-28); (p_55.f6 == 3); ++p_55.f6)
                    {
                        return p_55.f7;
                    }
                    if (l_291.f3)
                        continue;
                }
                else
                {
                    return l_193.f3;
                }
            }
        }
        p_55.f1 = (((p_55.f7 = ((safe_mul_func_uint8_t_u_u(l_193.f6, func_86(p_55.f5, ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((1L ^ g_8.f6), func_82((l_154 = 0x1620L), l_153, g_8))) , p_55.f6), 9)) > g_8.f0)))) || l_168.f0)) == g_173) || l_168.f7);
    }
    g_128.f7 = p_55.f5;
    return g_251;
}







static unsigned char func_76(int p_77, char p_78, int p_79, unsigned char p_80, int p_81)
{
    struct S0 l_131 = {1L,3,0x18L,0x40A1317DL,-8L,0,0x8CL,0L};
    l_131 = l_131;
    g_128 = l_131;
    return g_8.f3;
}







static short func_82(short p_83, unsigned short p_84, struct S0 p_85)
{
    unsigned char l_95 = 0xB4L;
    unsigned short l_98 = 9UL;
    int l_105 = 2L;
    int l_106 = 0L;
    int l_118 = 0x7916956DL;
    short l_127 = 1L;
    if ((l_95 != (((safe_mul_func_uint8_t_u_u(p_85.f4, ((l_98 ^ (safe_mod_func_int16_t_s_s((g_103 = (safe_mul_func_uint16_t_u_u(g_8.f2, g_8.f4))), (l_105 = (l_106 = (func_86((g_104 = func_86(p_85.f6, l_98)), ((p_84 = l_105) || 0L)) , g_8.f6)))))) && 0x89L))) ^ 0xBF30E8C0L) != l_98)))
    {
        for (p_85.f2 = 0; (p_85.f2 < (-7)); --p_85.f2)
        {
            unsigned l_115 = 8UL;
            l_118 = (safe_rshift_func_uint8_t_u_u(((!((p_84 & ((g_103 >= (safe_sub_func_uint32_t_u_u((l_105 = 4294967295UL), (safe_mul_func_uint8_t_u_u((!0x44L), 1UL))))) == func_86(l_115, (safe_lshift_func_int16_t_s_s(l_115, 4))))) > (func_86(p_85.f2, l_98) , p_85.f4))) == p_85.f2), 7));
        }
    }
    else
    {
        int l_124 = (-8L);
        int l_125 = 1L;
        l_127 = func_86((g_8.f7 && func_86((((safe_mul_func_uint16_t_u_u(((~(8L || (l_95 < ((safe_sub_func_uint8_t_u_u(0UL, 0xC4L)) & 1UL)))) & 251UL), (~((((((l_124 = (g_123 = (p_85.f5 , p_85.f1))) & p_85.f1) | l_118) , 65535UL) | l_125) && g_8.f7)))) && 0x25053E2DL) >= g_126), l_105)), g_126);
        g_128 = (p_85 = g_8);
    }
    return g_128.f6;
}







static short func_86(unsigned p_87, int p_88)
{
    struct S0 l_90 = {-9L,-3,1L,0x4C9BF6A7L,0L,0,0xCCL,0x7BCF7A53L};
    l_90 = l_90;
    return g_8.f2;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_8.f5, "g_8.f5", print_hash_value);
    transparent_crc(g_8.f6, "g_8.f6", print_hash_value);
    transparent_crc(g_8.f7, "g_8.f7", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5, "g_128.f5", print_hash_value);
    transparent_crc(g_128.f6, "g_128.f6", print_hash_value);
    transparent_crc(g_128.f7, "g_128.f7", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    transparent_crc(g_448.f3, "g_448.f3", print_hash_value);
    transparent_crc(g_448.f4, "g_448.f4", print_hash_value);
    transparent_crc(g_448.f5, "g_448.f5", print_hash_value);
    transparent_crc(g_448.f6, "g_448.f6", print_hash_value);
    transparent_crc(g_448.f7, "g_448.f7", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
