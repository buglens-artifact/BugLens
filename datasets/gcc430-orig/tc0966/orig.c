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
   unsigned f0;
   short f1;
   char f2;
   int f3;
   volatile unsigned f4 : 20;
};

union U1 {
   short f0;
   int f1;
   volatile short f2;
   unsigned char f3;
   unsigned char f4;
};


static unsigned g_17 = 0x7919ADB8L;
static long long g_49 = 0x88C83B91359A7032LL;
static int g_79 = 0x1562E432L;
static char g_87 = 8L;
static unsigned char g_90 = 0x21L;
static union U1 g_98 = {-10L};
static union U0 g_104 = {18446744073709551615UL};
static int *g_107 = &g_104.f3;
static int **g_106 = &g_107;
static short g_112 = 0xE7F8L;
static short g_114 = 9L;
static union U1 g_136 = {1L};
static int g_157 = 0xF1415305L;
static volatile union U1 g_159 = {2L};
static union U1 g_164 = {0x1C25L};
static short g_172 = 0xC064L;
static union U0 g_184 = {0UL};
static unsigned g_193 = 0xC38EE3FEL;
static volatile union U1 g_205 = {0xE6F6L};
static union U0 g_209 = {18446744073709551615UL};
static union U0 *g_217 = &g_104;
static union U0 **g_216 = &g_217;
static volatile union U1 g_222 = {-1L};
static union U0 g_239 = {0x308A82E3L};
static unsigned long long g_245 = 1UL;
static long long *g_254 = &g_49;
static volatile union U1 g_257 = {1L};
static long long g_260 = 0x1C89E38A5526950CLL;
static unsigned short g_265 = 1UL;
static union U0 g_328 = {3UL};
static union U1 g_389 = {0x3D21L};
static char *g_395 = &g_87;
static char **g_394 = &g_395;
static volatile unsigned **g_426 = (void*)0;
static volatile union U0 g_474 = {18446744073709551606UL};
static unsigned long long g_529 = 18446744073709551615UL;
static unsigned g_543 = 0xF143CC1BL;
static union U0 g_547 = {1UL};
static volatile long long g_616 = 0xE886D3929B7091DFLL;
static volatile long long *g_615 = &g_616;
static volatile long long **g_614 = &g_615;
static volatile long long ***g_613 = &g_614;
static long long g_623 = (-5L);
static unsigned *g_627 = &g_543;
static unsigned **g_626 = &g_627;
static union U0 g_637 = {0x574AF8F4L};
static volatile union U0 g_638 = {8UL};
static volatile unsigned long long g_662 = 18446744073709551615UL;
static volatile unsigned long long *g_661 = &g_662;
static volatile unsigned long long **g_660 = &g_661;
static short g_668 = 0x4AF7L;
static volatile short *g_708 = (void*)0;
static volatile short **g_707 = &g_708;
static volatile unsigned short g_713 = 0xB4B4L;
static unsigned ***g_725 = &g_626;
static unsigned ****g_724 = &g_725;
static union U1 *g_741 = (void*)0;
static union U1 **g_740 = &g_741;
static unsigned g_786 = 1UL;
static unsigned g_788 = 0x4300B704L;



static char func_1(void);
static unsigned char func_3(unsigned long long p_4, int p_5, unsigned long long p_6, unsigned char p_7);
static unsigned long long func_8(unsigned p_9, unsigned short p_10);
static int func_14(int p_15, unsigned char p_16);
static unsigned long long func_18(int p_19, unsigned p_20);
static unsigned long long func_23(char p_24, short p_25);
static int func_26(unsigned p_27, int p_28, unsigned p_29, char p_30);
static long long func_34(unsigned p_35, unsigned char p_36, unsigned char p_37);
static int func_50(long long * p_51, long long * p_52, long long * p_53, unsigned long long p_54);
static unsigned long long func_75(long long * p_76, long long * p_77);
static char func_1(void)
{
    int l_2 = 0x7822E6E7L;
    unsigned l_11 = 0x6AB2AEE5L;
    unsigned *l_528 = (void*)0;
    unsigned long long *l_546 = &g_529;
    int *l_575 = &g_79;
    char *l_635 = &g_209.f2;
    unsigned ****l_726 = &g_725;
    int l_730 = 1L;
    unsigned l_753 = 4294967292UL;
    short l_758 = 1L;
    int l_762 = (-6L);
    char l_780 = 0L;
    unsigned char *l_781 = &g_164.f3;
    unsigned *l_784 = &l_753;
    unsigned *l_785 = &g_786;
    unsigned *l_787 = &g_788;
    (*l_575) = (l_2 | func_3(((*l_546) = func_8((g_529 &= (((l_11 & (((((safe_sub_func_int32_t_s_s(func_14((g_17 && 0x342F3D47L), ((((0x3691F6F49C23EDB3LL == func_18((safe_lshift_func_int8_t_s_u((((func_23(g_17, l_2) | l_2) != 0x13274FA118B2DAAALL) > l_2), 2)), g_114)) || g_205.f3) || l_2) , 254UL)), g_112)) == 0x19L) && 0x2305L) , g_104.f1) & 255UL)) < g_157) > 0xA825F12828909DBFLL)), g_17)), l_11, g_260, l_2));


        if ((*l_575))
    {
        short l_578 = 0xAAEBL;
        int *l_593 = &g_389.f1;
        char **l_600 = &g_395;
        short l_625 = 1L;
        unsigned long long l_644 = 0x27FB038DC0A0A953LL;
        short l_688 = 0xA907L;
        long long **l_696 = &g_254;
        long long ***l_695 = &l_696;
        short *l_706 = &g_114;
        short **l_705 = &l_706;
        (*l_575) = (g_87 != (l_578 > (safe_add_func_uint32_t_u_u(((-3L) > (*l_575)), 0x3A843BA5L))));
        for (g_260 = (-13); (g_260 != 6); ++g_260)
        {
            short l_583 = 1L;
            int l_590 = 0xB907F171L;
            char **l_598 = &g_395;
            char ***l_599 = &g_394;
            unsigned **l_603 = (void*)0;
            unsigned **l_604 = &l_528;
            long long ***l_617 = (void*)0;
            long long *l_622 = &g_623;
            char l_624 = 4L;
            int l_657 = 0xA9B57CE6L;
            unsigned l_667 = 1UL;
            if (l_578)
            {
                int *l_584 = &g_209.f3;
                int *l_585 = (void*)0;
                int *l_586 = (void*)0;
                int *l_587 = &g_389.f1;
                l_583 = (-1L);
                (*l_587) = ((*l_584) = ((*l_575) = (*l_575)));
                (*l_584) = (safe_div_func_int64_t_s_s((+(4294967292UL && l_590)), (safe_lshift_func_int8_t_s_s((((**g_216) , 0x9FL) | (g_157 && g_389.f3)), 3))));
                (*g_106) = l_528;

                ;
            }
            else
            {
                (*g_106) = l_593;

                ;
            }

            ;
            (*l_575) = (((((((safe_add_func_uint64_t_u_u(((*l_546) = ((safe_rshift_func_uint8_t_u_s(g_543, 1)) > (((*l_599) = l_598) == l_600))), func_14((((safe_sub_func_int64_t_s_s((*g_254), g_205.f0)) >= ((((((((*g_254) > func_14(func_14((((*l_604) = (void*)0) != &g_193), (((*l_575) & 0x00L) , (*l_593))), g_389.f0)) != (*l_575)) , 0x44ECL) && 1UL) >= g_543) | l_590) != 0x4CL)) & (*l_575)), (*l_575)))) && (*l_575)) || 0x3AL) != g_239.f2) < (-1L)) > (*l_575)) , (*l_593));
            if (((*l_575) = ((((((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(func_26(func_3(((*l_546) |= 4UL), (safe_rshift_func_uint16_t_u_u(((g_613 == l_617) & ((255UL & 0x08L) , (((*l_622) = (g_98 , ((*g_254) = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((func_3(g_389.f1, l_590, (g_222 , (*l_575)), (*l_575)) > l_11), (*l_593))) <= l_590), g_157))))) ^ 0x4EE37C265CB37662LL))), g_90)), g_209.f0, g_136.f3), g_260, l_624, (*g_395)), (*g_395))), (*l_593))), l_625)) , g_626) != (void*)0) <= 250UL) , (*l_593)) ^ l_11)))
            {
                char l_628 = 0x4BL;
                int ***l_632 = (void*)0;
                int ****l_631 = &l_632;
                unsigned short *l_636 = &g_265;
                unsigned long long **l_663 = &l_546;
                if (((l_628 < (safe_sub_func_uint64_t_u_u(func_8((**g_626), ((*l_636) = ((+((l_628 , l_590) >= g_104.f4)) >= (((*l_593) > (((*l_631) = &g_106) == ((safe_lshift_func_int8_t_s_u((((*g_394) = (*g_394)) == l_635), (*l_593))) , &g_106))) | (*l_575))))), 1UL))) & (*l_575)))
                {
                    (***l_631) = (*g_106);
                }
                else
                {
                    (**l_632) = (***l_631);
                }

                ;
                (*l_575) = (*l_593);
                if (g_239.f3)
                {
                    int l_645 = 0x14C46B2AL;
                    long long *l_655 = (void*)0;
                    if ((g_159.f4 && 0xB267L))
                    {
                        unsigned l_643 = 7UL;
                        unsigned *l_646 = &g_239.f0;
                        int *l_649 = &g_157;
                        unsigned l_650 = 0UL;
                        int *l_651 = &g_136.f1;
                        (*l_593) = (g_136.f1 = ((*l_575) = ((!((g_637 , g_638) , (**g_614))) , (*l_593))));

                        (*l_575) = (safe_add_func_uint64_t_u_u((((!0x2BA7L) != ((*l_636) |= ((safe_rshift_func_int8_t_s_s((**g_394), 3)) && ((l_643 > l_644) <= l_624)))) > l_590), l_645));
                        (*l_651) |= func_8((*g_627), ((g_205 , (func_26(((*l_646) = 18446744073709551615UL), ((*l_649) = ((func_14((safe_lshift_func_uint16_t_u_u((((*g_395) , &g_164) != &g_159), 3)), g_265) , ((*l_575) = (18446744073709551609UL >= l_643))) >= 0x714AECA3L)), g_205.f2, l_590) > 0x7D0AC7CBL)) && l_650));

                        (**l_632) = l_528;

                        ;
                    }
                    else
                    {
                        int l_652 = 7L;
                        long long **l_656 = &l_622;
                        (*l_575) |= l_652;
                        (*l_593) &= (safe_add_func_int16_t_s_s(((l_655 != (((**g_216) , (l_645 , (l_645 , ((**g_626) ^= l_590)))) , ((*l_656) = &g_49))) >= ((*g_254) = (-1L))), (0x9856A42A3F20EE1CLL != ((((l_652 & g_136.f3) , 0UL) , l_657) > 4294967289UL))));

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned long long ***l_664 = &l_663;
                    int *l_665 = &g_157;
                    int l_666 = 0L;
                    for (g_184.f0 = 4; (g_184.f0 != 51); g_184.f0 = safe_add_func_int8_t_s_s(g_184.f0, 7))
                    {
                        if (g_136.f2)
                            break;
                        (***l_631) = l_575;

                        ;
                    }

                    ;
                    if (g_209.f2)
                        break;
                    (*l_575) = (g_205.f3 > ((((func_14((l_666 = (((*g_254) = (g_660 == ((*l_664) = l_663))) , ((*l_665) = g_547.f1))), (l_667 == (*l_593))) ^ (**g_394)) != 0xBBL) | l_624) ^ g_668));
                    if (g_209.f1)
                        break;
                }

                ;
                ;
            }
            else
            {
                int *l_669 = &g_209.f3;
                (*g_106) = l_669;

                ;
                (*g_106) = (l_624 , (void*)0);

                ;
            }

            ;
            ;
        }


        for (g_239.f3 = (-15); (g_239.f3 <= 12); g_239.f3++)
        {
            short *l_673 = &g_389.f0;
            short **l_672 = &l_673;
            unsigned short l_686 = 65535UL;
            char l_687 = 0x8FL;
            unsigned char l_699 = 1UL;
            int *l_715 = &g_547.f3;
        }
    }
    else
    {
        return (*g_395);
    }


    for (g_239.f3 = 7; (g_239.f3 == 5); g_239.f3 = safe_sub_func_int8_t_s_s(g_239.f3, 8))
    {
        unsigned short l_729 = 65535UL;
        unsigned long long l_731 = 0xB04E7DF0C69CE8C6LL;
        long long *l_736 = &g_49;
        short l_743 = (-5L);
        (*l_575) = (((((safe_mod_func_uint64_t_u_u((**g_660), (safe_sub_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((*g_254), (g_724 != l_726))) | (func_14(((safe_add_func_int16_t_s_s(g_98.f4, l_729)) & l_729), g_328.f3) == g_328.f1)) < 254UL), (*l_575))))) || l_729) ^ 255UL) , (*l_575)) >= (*l_575));
        if (l_730)
            break;
        if (l_731)
            break;
        for (g_193 = (-6); (g_193 <= 41); g_193++)
        {
            long long *l_737 = &g_49;
            union U1 **l_738 = (void*)0;
            union U1 ***l_739 = &l_738;
            int l_750 = 0x8C1F87F8L;
            int l_759 = (-1L);
            int ***l_766 = &g_106;
            int ****l_765 = &l_766;
            unsigned short *l_767 = (void*)0;
            unsigned short *l_768 = (void*)0;
            unsigned short *l_769 = &g_265;
            if ((safe_rshift_func_uint16_t_u_s((g_265 &= g_389.f0), (((*l_739) = l_738) == (g_98.f3 , g_740)))))
            {
                unsigned short l_742 = 0xBB0EL;
                g_79 |= (+(l_742 |= (1UL >= 7L)));
            }
            else
            {
                return l_743;
            }
            (*l_575) = ((**g_394) ^ (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((1L && (safe_mod_func_int8_t_s_s(1L, l_750))), (l_750 || ((***g_725) || (((safe_sub_func_int64_t_s_s(l_753, ((((!((l_759 |= (func_26((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((**g_660) <= 0x5D4FAB60BF649907LL), (*l_575))) <= 0x9E975092L), g_543)), l_750, l_758, (**g_394)) == l_729)) == (*g_627))) <= (*l_575)) < 4294967295UL) ^ l_731))) && (****g_724)) && l_729))))), l_750)));
            (*l_575) = (safe_lshift_func_uint16_t_u_s(((*l_769) = (l_762 && (safe_lshift_func_uint8_t_u_s((*l_575), (((*l_765) = &g_106) != &g_106))))), ((void*)0 == &g_740)));
        }
    }
    l_730 &= (safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((*l_546) &= (safe_lshift_func_uint16_t_u_s((+(*l_575)), func_8((***g_725), (*l_575))))) <= (safe_mod_func_uint8_t_u_u(((*l_781) |= (g_136.f3 = (safe_add_func_int8_t_s_s(l_780, (*g_395))))), (safe_add_func_int32_t_s_s((((*l_575) >= 18446744073709551615UL) & ((*l_787) = ((*l_785) |= ((*l_784) = 0x681C13AEL)))), g_637.f1))))) , (***g_613)), (*g_254))), g_209.f1));

    return (**g_394);
}







static unsigned char func_3(unsigned long long p_4, int p_5, unsigned long long p_6, unsigned char p_7)
{
    int *l_548 = &g_79;
    unsigned *l_555 = &g_543;
    unsigned *l_556 = &g_17;
    unsigned short *l_573 = &g_265;
    unsigned *l_574 = &g_193;
    (*l_548) = ((g_547 , &g_217) != (void*)0);
    (*l_548) = (((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_556) = ((*l_555) ^= (safe_lshift_func_uint16_t_u_s((*l_548), 4)))), (safe_rshift_func_uint8_t_u_s((g_547.f4 > ((*l_574) &= (((*l_548) & (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x88EEL, 4)), g_79))) | ((*l_573) = ((safe_rshift_func_uint8_t_u_u((*l_548), 5)) , (safe_div_func_int16_t_s_s(((*l_548) <= (p_5 , (safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(0x0533493CL, 0xDBCE61ADL)) && p_6) , g_136.f4), 0x207DE155L)), 0x39450F0E9F3FECB3LL)))), 0xDA05L))))))), (**g_394))))), p_4)) > g_112) != (*l_548));
    return p_5;
}







static unsigned long long func_8(unsigned p_9, unsigned short p_10)
{
    char l_534 = 0x39L;
    char *l_535 = (void*)0;
    unsigned *l_540 = (void*)0;
    unsigned **l_541 = &l_540;
    int l_542 = (-8L);
    unsigned *l_544 = &g_17;
    int *l_545 = &g_389.f1;
    (*l_545) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((l_534 = g_205.f0), ((((l_535 == (void*)0) & p_9) | (((-10L) < (((*l_544) ^= (((safe_add_func_uint32_t_u_u((g_193 = (safe_lshift_func_uint16_t_u_s(g_239.f3, (((l_542 = (((*l_541) = l_540) == &p_9)) , l_542) || 0x79D28539L)))), g_543)) , g_104.f2) || 5L)) , p_9)) & p_9)) && l_542))), 8));

    return g_209.f1;
}







static int func_14(int p_15, unsigned char p_16)
{
    long long **l_515 = &g_254;
    int l_520 = 0xFFE276B1L;
    long long l_527 = 0L;
    l_527 = ((*g_254) ^ 1L);
    return l_520;
}







static unsigned long long func_18(int p_19, unsigned p_20)
{
    long long *l_331 = &g_49;
    int l_333 = 0L;
    long long *l_341 = &g_260;
    char **l_397 = &g_395;
    unsigned l_409 = 18446744073709551615UL;
    char l_488 = 0x6FL;
    if (p_20)
    {
        long long **l_332 = &l_331;
        int l_340 = 0L;
        unsigned *l_342 = &g_193;
        unsigned l_361 = 4294967295UL;
        char *l_369 = &g_104.f2;
        int **l_381 = &g_107;
        int **l_384 = &g_107;
        char ***l_396 = &g_394;
        unsigned long long *l_398 = &g_245;
        int *l_399 = (void*)0;
        int *l_400 = &g_239.f3;
        if ((!(l_340 = (((*l_332) = l_331) != (func_26((g_136.f0 >= g_164.f0), g_209.f4, l_333, g_164.f4) , l_341)))))
        {
            int *l_343 = (void*)0;
            int l_344 = (-4L);
            l_344 ^= p_19;
        }
        else
        {
            unsigned l_349 = 0x69C0D2D9L;
            unsigned *l_354 = (void*)0;
            unsigned *l_355 = &g_104.f0;
            unsigned short l_358 = 1UL;
            unsigned char *l_359 = &g_164.f3;
            char l_360 = 0xD1L;
            int *l_362 = &g_98.f1;
            int *l_363 = (void*)0;
            int *l_364 = &g_98.f1;
            int *l_365 = &g_98.f1;
            int *l_366 = &g_239.f3;
            unsigned **l_368 = &l_342;
            unsigned ***l_367 = &l_368;
            char **l_370 = (void*)0;
            char *l_372 = &g_328.f2;
            char **l_371 = &l_372;
            int ***l_382 = (void*)0;
            int ***l_383 = &l_381;
            char *l_385 = (void*)0;
            char *l_386 = &g_87;
            (*l_366) ^= (safe_sub_func_uint8_t_u_u(((*l_359) = ((l_340 ^ p_19) | (0x393004D836B3EBBCLL < (func_26(p_20, ((l_349 & ((safe_mod_func_int16_t_s_s(((*g_254) == (safe_add_func_uint32_t_u_u(func_26(((*l_355) = (l_333 <= p_19)), (((*l_359) &= (safe_rshift_func_uint16_t_u_s((((8UL | 0x8E05B0D0C258B7C0LL) | l_358) ^ l_358), 9))) > l_333), p_20, g_193), l_360))), l_333)) && (-1L))) || l_361), l_340, g_209.f1) != g_328.f3)))), g_79));

                        (*l_367) = &l_342;
            if (((((l_369 = l_369) != ((*l_371) = &g_87)) & ((*l_386) = (safe_mod_func_int64_t_s_s(((*l_331) |= (safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(0x9B39C02D81B6AF7DLL, ((safe_add_func_int64_t_s_s(p_19, (((*l_383) = l_381) != ((*g_217) , l_384)))) || 0x9AB7FDA88B9B9657LL))) , g_104.f2), g_245))), p_19)))) >= 0xCF7F315CL))
            {
                l_333 &= 0x13883B9DL;
            }
            else
            {
                return p_19;
            }

            ;
        }

        (*l_384) = &l_333;

        ;
        (*l_400) &= ((func_50(((*l_332) = (*l_332)), l_341, l_341, (safe_rshift_func_int8_t_s_s((g_389 , (func_26(l_333, p_19, (!(safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((*l_398) = (((((*l_396) = g_394) != l_397) , 1L) || p_20)), g_184.f4)), 10))), p_19) || g_184.f0)), 6))) && (-1L)) , p_20);


        l_333 = l_409;
    }
    else
    {
        unsigned long long l_422 = 0x8282A283FA32E500LL;
        unsigned short l_427 = 0x075FL;
        unsigned long long l_434 = 4UL;
        int l_448 = 0xF1FDF211L;
        long long *l_461 = (void*)0;
        long long **l_482 = (void*)0;
        long long ***l_481 = &l_482;
        unsigned l_493 = 4294967295UL;
        int l_505 = (-2L);
        unsigned **l_514 = (void*)0;
        unsigned ***l_513 = &l_514;
        if (p_20)
        {
            char **l_415 = &g_395;
            int l_416 = 1L;
            short l_419 = 0xC032L;
            long long *l_425 = (void*)0;
            int *l_428 = &g_328.f3;
            for (g_164.f1 = 0; (g_164.f1 < 8); ++g_164.f1)
            {
                for (g_98.f3 = 6; (g_98.f3 == 3); g_98.f3 = safe_sub_func_int16_t_s_s(g_98.f3, 8))
                {
                    char **l_414 = &g_395;
                    l_416 = (l_414 == l_415);
                }

                (*g_106) = &l_416;

                ;
            }


            (*l_428) |= ((~((func_26((((safe_lshift_func_uint16_t_u_u(l_419, 11)) >= l_409) | ((safe_mod_func_int32_t_s_s(l_422, l_333)) || l_333)), g_159.f0, ((safe_rshift_func_uint8_t_u_u(((g_265 = 0x23CEL) == func_75(l_425, ((g_426 != (void*)0) , (void*)0))), p_19)) & p_20), p_19) || l_422) ^ 0x7628L)) != l_427);

        }
        else
        {
            int *l_449 = &g_184.f3;
            for (g_79 = 0; (g_79 > (-18)); g_79 = safe_sub_func_int64_t_s_s(g_79, 1))
            {
                unsigned *l_431 = &g_209.f0;
                int l_447 = 0xD54BD57DL;
                l_448 &= ((func_26(p_19, l_409, func_26(((*l_431) |= p_20), (g_222.f2 , (safe_sub_func_uint16_t_u_u((l_434 , (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_422 != (safe_mod_func_uint16_t_u_u(p_19, (safe_rshift_func_int16_t_s_s(l_333, 5))))), (safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((p_19 && l_447), p_19)) > 0x99L), p_19)))), p_20))), p_20))), g_328.f1, (*g_395)), l_447) | p_19) != (-9L));

            }
            (*g_106) = l_449;

            ;
        }


        if (p_20)
        {
            short l_456 = 0xFB4EL;
            long long *l_487 = &g_260;
            unsigned long long *l_489 = &l_434;
            int *l_490 = &g_164.f1;
            unsigned short *l_491 = &l_427;
            long long ***l_492 = &l_482;
            int *l_494 = &g_104.f3;
            for (g_184.f2 = 0; (g_184.f2 > 24); g_184.f2 = safe_add_func_int8_t_s_s(g_184.f2, 1))
            {
                short l_462 = 0L;
                int *l_471 = &l_333;
                short *l_475 = &g_114;
                short *l_476 = &g_136.f0;
                int *l_477 = &g_239.f3;
                (*l_477) &= (safe_lshift_func_uint16_t_u_u((((*l_476) ^= (safe_add_func_uint16_t_u_u(l_456, (safe_div_func_int16_t_s_s(((*l_475) |= (safe_mod_func_uint8_t_u_u(l_456, (*l_471)))), g_104.f2))))) || g_159.f0), p_19));

            }

            for (g_49 = 0; (g_49 >= 6); g_49++)
            {
                int *l_480 = &l_448;
                (*g_106) = l_480;

                ;
                if ((**g_106))
                    continue;
            }


            (*l_494) = ((l_481 != ((((*l_491) = ((safe_mod_func_int32_t_s_s(((*l_490) = ((func_26(g_389.f2, ((g_328.f0 &= (safe_add_func_int32_t_s_s((((func_75(l_487, &g_260) >= l_488) , ((*l_489) |= 18446744073709551614UL)) == g_104.f1), p_19))) , g_245), p_19, p_20) >= 0UL) <= 0xB180F1149AF9143DLL)), p_20)) || p_20)) || p_19) , l_492)) || l_493);

        }
        else
        {
            unsigned long long *l_499 = &g_245;
            int l_504 = 0L;
            unsigned char *l_506 = &g_136.f3;
            unsigned *l_511 = &g_193;
            unsigned **l_510 = &l_511;
            unsigned ***l_509 = &l_510;
            unsigned ****l_512 = &l_509;
            l_333 ^= ((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((*l_499) = l_434) || (+(l_488 && p_20))) , (-9L)), 4294967287UL)), 7UL)) , l_409);
        }


        l_448 &= 0x2D105EE8L;
    }


    (*g_106) = &l_333;

    ;
    return l_488;


}







static unsigned long long func_23(char p_24, short p_25)
{
    unsigned l_31 = 4294967287UL;
    long long *l_48 = &g_49;
    int *l_330 = &g_209.f3;
    (*l_330) = func_26(l_31, (safe_mod_func_int64_t_s_s(p_24, func_34((p_24 , (safe_add_func_int32_t_s_s(p_25, (safe_div_func_int64_t_s_s(g_17, (safe_lshift_func_int16_t_s_s((3UL != ((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((*l_48) = p_24), (1L & (p_24 != 0x6659L)))), l_31)) | g_17)), l_31))))))), l_31, g_17))), l_31, l_31);


    return g_164.f4;
}







static int func_26(unsigned p_27, int p_28, unsigned p_29, char p_30)
{
    return g_205.f3;
}







static long long func_34(unsigned p_35, unsigned char p_36, unsigned char p_37)
{
    long long *l_55 = &g_49;
    long long *l_61 = &g_49;
    long long **l_60 = &l_61;
    int l_64 = 1L;
    unsigned long long l_248 = 0x2C41C70B5F690A14LL;
    int *l_290 = (void*)0;
    long long *l_320 = (void*)0;
    if (func_50(&g_49, l_55, l_55, (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((((*l_60) = l_55) != l_55), 1L)), ((safe_lshift_func_int16_t_s_u(l_64, 13)) < g_49)))))
    {
        long long *l_221 = &g_49;
        int l_223 = 0x7F8C634FL;
        l_223 ^= l_64;
        for (g_184.f3 = (-25); (g_184.f3 >= 9); g_184.f3++)
        {
            (*g_106) = &l_64;

            ;
            l_223 = ((safe_add_func_int8_t_s_s(1L, (g_205.f2 <= g_87))) && (l_223 <= p_36));
        }


    }
    else
    {
        unsigned char *l_228 = &g_98.f4;
        int *l_229 = &g_104.f3;
        long long *l_253 = (void*)0;
        (*l_229) = (g_222.f4 ^ func_75((((*l_228) ^= p_37) , &g_49), (*l_60)));

        (*g_106) = &g_79;

        ;
        for (g_209.f3 = 0; (g_209.f3 != 0); g_209.f3 = safe_add_func_int32_t_s_s(g_209.f3, 1))
        {
            char *l_262 = &g_184.f2;
            union U1 *l_275 = &g_136;
            int *l_285 = &l_64;
            long long *l_313 = &g_49;
            int l_318 = 1L;
            int l_319 = 5L;
        }

    }


    return l_64;


}







static int func_50(long long * p_51, long long * p_52, long long * p_53, unsigned long long p_54)
{
    long long *l_202 = &g_49;
    int l_206 = 0xC0CC138CL;
    union U0 *l_208 = &g_209;
    union U0 **l_207 = &l_208;
    union U1 *l_219 = &g_136;
    union U1 **l_220 = &l_219;
    if (((safe_add_func_int16_t_s_s(g_49, 1UL)) , 1L))
    {
        unsigned char l_210 = 250UL;
        long long **l_211 = &l_202;
        int *l_215 = (void*)0;
        int **l_214 = &l_215;
        (**g_106) |= (safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_54, p_54)), 6)) || func_75(p_53, &g_49)) , func_75(l_202, l_202)) != (((((safe_add_func_int16_t_s_s((g_205 , (-10L)), 0x3CE8L)) , l_206) , (void*)0) == l_207) ^ p_54)), g_98.f3)) && l_210), 0xDAE7EE4AL));

        (**g_106) = (func_75(((*l_211) = p_53), &g_49) || ((func_75(l_202, &g_49) ^ (p_54 == p_54)) > p_54));

        ;
        (*l_214) = ((*g_106) = &l_206);

        ;
        ;
        (*g_106) = &l_206;
    }
    else
    {
        int *l_218 = &l_206;
        (*g_107) &= p_54;

        (*l_207) = (*l_207);
        (*l_218) = ((**g_106) = (&l_208 != (g_184.f1 , g_216)));
    }


    ;
    (*l_220) = l_219;
    return l_206;


}







static unsigned long long func_75(long long * p_76, long long * p_77)
{
    int *l_78 = &g_79;
    int **l_80 = (void*)0;
    long long *l_83 = &g_49;
    unsigned short l_85 = 0xC659L;
    char l_117 = 9L;
    union U1 *l_130 = &g_98;
    unsigned long long l_195 = 0x18F5FB703A76A61ALL;
    unsigned l_200 = 0x4D6C3E8AL;
    l_78 = l_78;
    (*l_78) &= 0x613644CAL;
    for (g_49 = 0; (g_49 >= (-14)); --g_49)
    {
        unsigned l_84 = 18446744073709551615UL;
        char *l_86 = &g_87;
        unsigned char *l_88 = (void*)0;
        unsigned char *l_89 = &g_90;
        long long *l_92 = &g_49;
        long long **l_91 = &l_92;
        int l_93 = 0x0DD35930L;
        char *l_127 = &g_104.f2;
        int l_196 = 0xA6A1C6E9L;
        l_93 = (g_49 , (l_83 != ((*l_91) = (((((*l_89) = ((((g_79 , (p_77 == p_76)) && (l_84 , ((*l_86) ^= (l_85 ^ (0UL | ((-6L) || 18446744073709551615UL)))))) <= 0xC4AEL) , 0x17L)) , (*l_78)) , g_79) , &g_49))));
    }
    return (*l_78);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4, "g_98.f4", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_104.f2, "g_104.f2", print_hash_value);
    transparent_crc(g_104.f3, "g_104.f3", print_hash_value);
    transparent_crc(g_104.f4, "g_104.f4", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_136.f3, "g_136.f3", print_hash_value);
    transparent_crc(g_136.f4, "g_136.f4", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_159.f4, "g_159.f4", print_hash_value);
    transparent_crc(g_164.f3, "g_164.f3", print_hash_value);
    transparent_crc(g_164.f4, "g_164.f4", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_184.f2, "g_184.f2", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_205.f2, "g_205.f2", print_hash_value);
    transparent_crc(g_205.f3, "g_205.f3", print_hash_value);
    transparent_crc(g_205.f4, "g_205.f4", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_222.f0, "g_222.f0", print_hash_value);
    transparent_crc(g_222.f2, "g_222.f2", print_hash_value);
    transparent_crc(g_222.f3, "g_222.f3", print_hash_value);
    transparent_crc(g_222.f4, "g_222.f4", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f1, "g_239.f1", print_hash_value);
    transparent_crc(g_239.f2, "g_239.f2", print_hash_value);
    transparent_crc(g_239.f3, "g_239.f3", print_hash_value);
    transparent_crc(g_239.f4, "g_239.f4", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_328.f1, "g_328.f1", print_hash_value);
    transparent_crc(g_328.f2, "g_328.f2", print_hash_value);
    transparent_crc(g_328.f3, "g_328.f3", print_hash_value);
    transparent_crc(g_328.f4, "g_328.f4", print_hash_value);
    transparent_crc(g_389.f0, "g_389.f0", print_hash_value);
    transparent_crc(g_389.f1, "g_389.f1", print_hash_value);
    transparent_crc(g_389.f2, "g_389.f2", print_hash_value);
    transparent_crc(g_389.f3, "g_389.f3", print_hash_value);
    transparent_crc(g_389.f4, "g_389.f4", print_hash_value);
    transparent_crc(g_474.f0, "g_474.f0", print_hash_value);
    transparent_crc(g_474.f1, "g_474.f1", print_hash_value);
    transparent_crc(g_474.f2, "g_474.f2", print_hash_value);
    transparent_crc(g_474.f3, "g_474.f3", print_hash_value);
    transparent_crc(g_474.f4, "g_474.f4", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_547.f1, "g_547.f1", print_hash_value);
    transparent_crc(g_547.f2, "g_547.f2", print_hash_value);
    transparent_crc(g_547.f3, "g_547.f3", print_hash_value);
    transparent_crc(g_547.f4, "g_547.f4", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_637.f1, "g_637.f1", print_hash_value);
    transparent_crc(g_637.f2, "g_637.f2", print_hash_value);
    transparent_crc(g_637.f3, "g_637.f3", print_hash_value);
    transparent_crc(g_637.f4, "g_637.f4", print_hash_value);
    transparent_crc(g_638.f0, "g_638.f0", print_hash_value);
    transparent_crc(g_638.f1, "g_638.f1", print_hash_value);
    transparent_crc(g_638.f2, "g_638.f2", print_hash_value);
    transparent_crc(g_638.f3, "g_638.f3", print_hash_value);
    transparent_crc(g_638.f4, "g_638.f4", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
