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
   unsigned char f1;
   int f2;
   char f3;
   const unsigned f4;
   const int f5;
   unsigned f6;
   unsigned f7;
};


static unsigned g_2 = 0xDF37D45DL;
static char g_5 = 1L;
static short g_7 = 0x07E4L;
static int g_8 = (-8L);
static unsigned short g_9 = 65533UL;
static struct S0 g_50 = {0x21DDBC75L,0x16L,0xD3D8E1CEL,0x3CL,0xD757520CL,-1L,0UL,4294967290UL};
static unsigned short g_70 = 0x18C4L;
static unsigned short g_77 = 0x18CDL;
static int g_97 = 0x455447BFL;
static short g_105 = 0xD28DL;
static char g_106 = 0x7FL;
static int g_107 = 0L;
static unsigned short g_108 = 0x2C04L;
static unsigned g_171 = 0x5D4ADB4FL;
static unsigned g_172 = 0UL;
static unsigned short g_201 = 0xC7BDL;
static unsigned g_211 = 0x302B22EDL;
static unsigned short g_241 = 0xBE80L;
static short g_298 = 0xF524L;
static unsigned short g_299 = 0x0A5AL;
static unsigned g_304 = 0x217573BEL;
static int g_383 = 0L;
static struct S0 g_394 = {0x95291765L,0x40L,-1L,0x88L,0x21A7B5C5L,4L,18446744073709551614UL,6UL};
static short g_440 = 0x99AEL;
static int g_441 = 0x3068C0FAL;
static int g_442 = (-3L);
static int g_444 = (-1L);
static short g_445 = (-6L);
static unsigned char g_447 = 255UL;
static char g_563 = 0x4FL;
static char g_566 = 0x68L;
static unsigned char g_570 = 0xDFL;
static unsigned g_622 = 4294967288UL;
static int g_654 = 6L;
static unsigned g_656 = 0xAB96FBA1L;
static unsigned g_683 = 0UL;
static char g_691 = 0xE2L;



static const char func_1(void);
static int func_12(unsigned p_13, unsigned short p_14, int p_15, char p_16, short p_17);
static unsigned func_18(char p_19, int p_20, int p_21);
static int func_22(struct S0 p_23);
static struct S0 func_24(unsigned short p_25, struct S0 p_26, unsigned p_27, unsigned p_28, unsigned char p_29);
static unsigned char func_30(unsigned p_31, int p_32, short p_33, short p_34);
static unsigned short func_37(int p_38, unsigned short p_39, struct S0 p_40, int p_41);
static short func_44(int p_45, unsigned char p_46, struct S0 p_47, short p_48, unsigned char p_49);
static char func_51(struct S0 p_52);
static struct S0 func_53(int p_54, const unsigned p_55, short p_56);
static const char func_1(void)
{
    int l_6 = (-1L);
    int l_57 = 1L;
    int l_344 = 0x07EA7F43L;
    struct S0 l_373 = {0L,248UL,0x17E8DB4BL,-1L,0xF16C2306L,-3L,0x255ED363L,0x57A54816L};
    char l_451 = 1L;
    int l_452 = 0xF9073FC8L;
    g_2--;
    g_9--;
    g_691 &= func_12(func_18(((((g_7 <= (func_22(func_24((func_30((safe_mod_func_uint32_t_u_u((((+l_6) == (func_37(g_5, (safe_div_func_uint32_t_u_u((func_44(g_8, g_7, g_50, (func_51(func_53(((l_57 ^= g_50.f5) == g_8), g_5, l_6)) >= l_6), l_344) || l_344), l_344)), l_373, l_6) , 4L)) && 0L), l_6)), l_451, l_452, g_394.f2) != g_394.f0), l_373, g_394.f4, l_373.f1, g_440)) , 6L)) , 0xD6A88F2DL) && l_451) , l_6), g_563, g_8), g_50.f2, l_373.f0, g_622, l_344);
    return l_373.f5;
}







static int func_12(unsigned p_13, unsigned short p_14, int p_15, char p_16, short p_17)
{
    struct S0 l_690 = {0x88D81F1BL,8UL,0x57AD4680L,0x1CL,0UL,0xC2F25FC6L,0UL,0xB6F35135L};
    p_15 &= func_22(l_690);
    return p_13;
}







static unsigned func_18(char p_19, int p_20, int p_21)
{
    unsigned char l_573 = 250UL;
    unsigned char l_574 = 0UL;
    int l_575 = 0xFB3FF188L;
    int l_590 = (-10L);
    short l_591 = 1L;
    struct S0 l_608 = {-1L,253UL,-6L,0xEAL,0xEE96FCDFL,5L,18446744073709551615UL,1UL};
    int l_651 = 0x0CD059F3L;
    int l_652 = 0x72F3AB5CL;
    g_442 = g_105;
    l_573 ^= p_21;
    l_575 |= l_574;
    if ((((safe_add_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((p_21 && ((!(safe_sub_func_uint8_t_u_u(((g_50.f1 | g_394.f5) || ((0L != g_50.f6) || g_394.f3)), p_19))) > (((safe_div_func_int32_t_s_s((g_107 = (safe_div_func_uint32_t_u_u(l_574, (0xFDE8L | 1UL)))), (-1L))) ^ l_590) != p_20))) | 0x2530L), p_21)) > p_19), g_50.f3)) | g_394.f2) , p_21) | l_591), 0UL)) , l_575) ^ l_575))
    {
        unsigned l_594 = 4UL;
        struct S0 l_605 = {0L,254UL,0xA3CC4739L,0x2AL,0xB7F4CA5CL,-1L,0x56C5E294L,4294967295UL};
        int l_617 = 0xE25D27F4L;
        unsigned l_648 = 18446744073709551615UL;
        int l_653 = (-5L);
        l_594 = (safe_rshift_func_uint16_t_u_u(0xE4EDL, g_304));
        if (((safe_add_func_uint16_t_u_u(l_594, (g_440 = (+(safe_lshift_func_uint8_t_u_s(g_440, 3)))))) , (l_590 = (safe_sub_func_int8_t_s_s(l_594, (safe_add_func_int16_t_s_s(g_70, (p_19 , (252UL > ((safe_lshift_func_uint8_t_u_s((func_24(g_50.f4, l_605, l_605.f3, l_605.f3, l_575) , p_19), 5)) != p_19))))))))))
        {
            int l_613 = 0xD5361504L;
            int l_619 = 0xFA3DD422L;
            char l_633 = (-1L);
            int l_655 = (-3L);
            if (l_605.f6)
            {
                unsigned l_616 = 18446744073709551613UL;
                int l_618 = 0x3FA05098L;
                l_590 = (safe_div_func_int32_t_s_s(p_19, (((func_51(l_608) & (safe_rshift_func_uint16_t_u_s(func_30((((safe_lshift_func_int8_t_s_s(l_613, p_19)) <= p_20) <= ((safe_div_func_int32_t_s_s((((g_442 || l_616) >= ((func_30((l_617 = (((--g_447) && g_622) == 7L)), g_9, p_21, l_605.f1) == l_618) == 254UL)) , l_616), 0xC9A1FC3CL)) > p_19)), g_50.f3, l_613, g_445), g_570))) & (-1L)) , 4294967290UL)));
                l_618 = (safe_sub_func_uint8_t_u_u(l_605.f6, (safe_sub_func_uint16_t_u_u(((l_613 , ((safe_div_func_int16_t_s_s(((!p_19) < func_51(l_605)), func_30((safe_add_func_uint16_t_u_u((g_108 &= g_9), (((l_616 || (safe_add_func_uint16_t_u_u((((l_608 , func_30(l_616, l_608.f6, g_201, g_383)) , 0xE9L) & l_633), p_20))) , p_19) != 0xC0C116D5L))), g_50.f6, p_20, p_20))) == p_20)) | 250UL), p_19))));
                return p_19;
            }
            else
            {
                unsigned char l_636 = 0UL;
                const short l_647 = 0L;
                g_444 = (safe_sub_func_int32_t_s_s(l_636, (((safe_lshift_func_int8_t_s_u(1L, p_19)) > (func_37((((safe_lshift_func_uint8_t_u_s((65535UL == (0xB6E95DC3L || l_605.f5)), 5)) >= l_636) , ((l_648 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_617 || (safe_sub_func_uint32_t_u_u((((p_19 , l_575) > p_19) > l_647), 4294967292UL))), 1)), p_20)) , g_304)) | g_441)), l_608.f7, l_608, l_633) & g_566)) | (-3L))));
            }
            g_383 = (g_394.f5 , (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint32_t_u(g_622)))));
            g_656++;
            l_575 = g_241;
        }
        else
        {
            return l_652;
        }
    }
    else
    {
        unsigned short l_662 = 0xD947L;
        int l_682 = (-1L);
        if ((l_652 |= 6L))
        {
            unsigned char l_659 = 253UL;
            const unsigned short l_673 = 65532UL;
            int l_676 = 0xB6355B14L;
            l_659 = 0x06240220L;
            l_676 = ((safe_lshift_func_int16_t_s_s((l_662 | ((safe_unary_minus_func_int8_t_s(g_442)) >= (p_19 || ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((safe_rshift_func_int8_t_s_s(func_51(func_53(((g_241 = (safe_div_func_int16_t_s_s(l_673, p_20))) == ((p_20 && (((safe_add_func_uint32_t_u_u((func_30(l_659, (0xAA81D822L | g_171), l_662, l_608.f4) , g_622), 4294967295UL)) && p_20) && p_19)) != p_21)), l_608.f4, l_662)), p_19)) | g_444) , p_21))), l_662)) > 1L)))), p_19)) , l_673);
        }
        else
        {
            char l_677 = 1L;
            struct S0 l_680 = {0xCD141AA7L,255UL,0xA3EA97BFL,0x2AL,0xA48F82C1L,0xCA76B498L,3UL,0xC5050F4DL};
            char l_681 = 0L;
            l_651 = (l_682 = ((0xF0L > func_44(p_20, (l_677 <= (+(((safe_div_func_int16_t_s_s(((g_107 = g_8) != p_19), l_662)) , (((g_566 >= p_20) || (!func_22(l_680))) , p_20)) != g_5))), l_608, l_681, p_19)) | 0xDFL));
            g_444 = (((g_172 &= (0x837BL <= ((((g_50.f7 ^= (g_394.f6 ^ g_683)) , g_654) , p_19) <= (safe_div_func_uint8_t_u_u(func_30((0x1CL != g_570), (safe_add_func_int16_t_s_s((func_30(p_21, (((l_591 < 0x0BA39E85L) & g_241) , 9L), p_19, p_21) != g_566), l_662)), p_19, p_20), 0x99L))))) & l_680.f1) == 0x64L);
        }
        l_575 = ((((g_241 <= (p_21 == g_563)) ^ g_106) & l_662) | p_20);
        l_682 |= (0UL != (l_608.f4 | g_622));
        l_682 = (g_105 == 0x07L);
    }
    return p_19;
}







static int func_22(struct S0 p_23)
{
    unsigned short l_495 = 65531UL;
    unsigned char l_529 = 0x23L;
    int l_544 = (-1L);
    int l_545 = 0x5A30E264L;
    int l_546 = 0xBC8ABB22L;
    int l_547 = (-1L);
    int l_548 = 0x908EAF58L;
    int l_549 = 0xA94D586BL;
    int l_550 = 0L;
    int l_551 = 3L;
    int l_552 = 0L;
    short l_553 = 0x9B65L;
    int l_554 = 0x507B0592L;
    int l_555 = (-9L);
    int l_556 = 0x2A671382L;
    int l_557 = 4L;
    int l_558 = (-1L);
    int l_559 = (-9L);
    int l_560 = 0x1373803BL;
    int l_561 = 0x62814947L;
    int l_562 = 0L;
    int l_564 = (-9L);
    int l_565 = 0xDDE95B07L;
    int l_567 = (-1L);
    int l_568 = 6L;
    int l_569 = 3L;
    for (g_50.f3 = 5; (g_50.f3 > 9); g_50.f3++)
    {
        char l_496 = (-1L);
        int l_520 = 0x2145B11CL;
        int l_521 = 0x2BACFE62L;
        unsigned l_522 = 1UL;
        g_442 = ((~((p_23.f1 = l_495) || ((l_496 && ((safe_mod_func_uint16_t_u_u((l_496 ^ (func_51(p_23) & (g_441 = (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((g_106 != ((g_50.f6 | (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_394.f6, (safe_add_func_uint16_t_u_u((func_30(func_30((safe_lshift_func_int8_t_s_s((((((l_521 ^= ((safe_unary_minus_func_uint32_t_u(p_23.f1)) , l_520)) ^ g_394.f6) == l_522) || g_50.f2) ^ g_50.f3), 3)), g_50.f2, l_495, l_495), p_23.f2, p_23.f6, p_23.f0) != g_50.f2), 0x8F08L)))), 0)) != l_495), p_23.f7))) ^ g_440)), 0x67L)), l_495)), g_394.f1)), l_522)), 65535UL))))), g_394.f3)) == 0x71815283L)) & 0xCDL))) >= p_23.f3);
        l_521 = (((safe_mod_func_uint16_t_u_u((l_522 < (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_529, ((safe_mod_func_uint32_t_u_u(func_30(p_23.f7, (safe_div_func_int32_t_s_s(l_529, l_520)), p_23.f6, l_522), (safe_mod_func_int8_t_s_s(g_9, p_23.f2)))) <= 0x42CCL))), l_496))), l_495)) <= 1L) , 1L);
        g_441 = ((safe_lshift_func_uint8_t_u_s(0x93L, (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_529, (g_440 & (safe_rshift_func_int8_t_s_s((~(0xC4L == g_394.f1)), 0))))), (p_23.f5 == 0x51L))))) >= (l_496 ^ (255UL ^ l_495)));
    }
    g_570++;
    return g_5;
}







static struct S0 func_24(unsigned short p_25, struct S0 p_26, unsigned p_27, unsigned p_28, unsigned char p_29)
{
    int l_462 = 1L;
    int l_480 = 0x18160284L;
    int l_481 = 0x8B93C8B6L;
    int l_482 = 0xFF06CB06L;
    int l_483 = 8L;
    int l_484 = (-10L);
    unsigned char l_485 = 0x15L;
    struct S0 l_492 = {0xB812A765L,5UL,-2L,0x2EL,0xDB1E4F11L,0xED82E38CL,7UL,0x72BA1E27L};
    for (g_105 = 0; (g_105 >= 14); g_105 = safe_add_func_int8_t_s_s(g_105, 2))
    {
        short l_464 = 0x2019L;
        int l_465 = 0x0CFFF758L;
        l_462 = ((g_394.f3 = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x11B0L, 9)), (safe_div_func_uint32_t_u_u(func_30(p_28, l_462, (l_465 &= func_30((p_26.f7 &= (safe_unary_minus_func_int32_t_s(g_50.f4))), l_464, p_27, l_464)), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((0xD7DD7D03L ^ l_462), g_2)), l_462))), 0x2D7B4DC1L))))) | l_464);
        g_442 |= (safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((g_50.f3 = (g_50.f7 <= g_441)) < (65528UL > l_462)) || (safe_rshift_func_int16_t_s_u(l_462, 13))), (safe_sub_func_int16_t_s_s(g_394.f5, (safe_div_func_uint16_t_u_u(l_462, p_26.f5)))))), g_70));
    }
    ++l_485;
    l_482 = (safe_rshift_func_uint16_t_u_s(l_484, ((p_26.f5 , ((safe_add_func_uint16_t_u_u(0x1D64L, p_26.f5)) ^ p_26.f7)) >= l_480)));
    return l_492;
}







static unsigned char func_30(unsigned p_31, int p_32, short p_33, short p_34)
{
    unsigned char l_453 = 248UL;
    return l_453;
}







static unsigned short func_37(int p_38, unsigned short p_39, struct S0 p_40, int p_41)
{
    short l_374 = 0x9372L;
    unsigned short l_388 = 0x3A09L;
    struct S0 l_393 = {0xE0490F63L,0xD7L,0xE39CE783L,0L,1UL,7L,18446744073709551615UL,0x853585A6L};
    short l_396 = (-1L);
    int l_432 = 0x2D4C6D43L;
    int l_439 = 1L;
    int l_446 = (-1L);
    if ((l_374 < (l_374 , (safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((g_106 == p_40.f0) <= (safe_add_func_uint8_t_u_u(0x81L, (((safe_lshift_func_uint8_t_u_u((g_383 , (safe_div_func_int16_t_s_s(g_241, g_298))), ((safe_mod_func_uint16_t_u_u((g_7 ^ l_388), p_40.f0)) < g_7))) >= 65532UL) > (-9L))))), g_7)) != g_171), 0xA4CF7806L)))))
    {
        return p_40.f3;
    }
    else
    {
        char l_395 = (-1L);
        struct S0 l_411 = {0x5B8496F0L,0x4EL,1L,-1L,0x5C4668CBL,3L,18446744073709551614UL,4294967289UL};
        unsigned l_412 = 0x0E9EB29FL;
        int l_424 = (-4L);
        int l_435 = 0xF9AAEEBDL;
        int l_437 = 0xD414A3D8L;
        l_396 = ((g_8 >= g_50.f5) == ((func_44(p_40.f4, (safe_mod_func_uint8_t_u_u(p_41, func_44((p_40.f4 , func_44(l_374, (safe_rshift_func_int8_t_s_s(p_40.f4, g_7)), g_50, g_304, l_374)), g_9, l_393, g_50.f5, l_393.f7))), g_394, p_40.f7, l_395) == g_77) && (-9L)));
        for (p_40.f6 = 3; (p_40.f6 > 55); ++p_40.f6)
        {
            if (g_394.f6)
                break;
        }
        if (((((((safe_lshift_func_uint16_t_u_u(p_41, 13)) > (safe_lshift_func_uint16_t_u_u((p_39 |= g_108), (0xBD2AL & ((safe_rshift_func_int16_t_s_s((g_211 > ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_40.f3, (safe_rshift_func_uint8_t_u_s((p_40.f1 = p_40.f5), (p_40.f2 >= l_395))))), func_51(l_411))) | p_40.f4)), g_394.f1)) ^ l_412))))) & 253UL) <= 1L) <= 0x11L) | l_411.f6))
        {
            unsigned l_422 = 0xA4BD3031L;
            int l_423 = 0xB242C872L;
            struct S0 l_429 = {0xA31EEF8DL,0xAEL,0x9910F593L,-3L,0xD1BEAFEBL,-1L,0UL,0UL};
            int l_433 = 1L;
            int l_434 = 0xFA030214L;
            int l_436 = 0L;
            int l_438 = 0xE1C54564L;
            int l_443 = 0x2B1D1F3EL;
            g_107 = (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(0x429DL, 11)) , (+((1UL > (safe_unary_minus_func_int8_t_s((0x45002374L <= (safe_sub_func_int32_t_s_s(l_411.f3, ((safe_div_func_int32_t_s_s(((g_298 |= ((l_423 = l_422) != 65535UL)) || ((l_424 ^= (p_40.f6 && (l_422 , (l_423 |= g_171)))) & 0x7591L)), 4294967289UL)) & 0xDF84L))))))) && p_38))) , g_50.f6), (-1L))) > l_422) > g_107);
            l_432 |= (((0x9D66L ^ (safe_lshift_func_uint8_t_u_s(g_2, 1))) ^ p_40.f3) > (p_38 = ((l_424 |= (l_423 = (65534UL ^ ((g_50.f7 = (func_51(l_429) != (((safe_add_func_int32_t_s_s(l_423, p_38)) & p_39) <= g_394.f0))) || 0UL)))) , 0x2B5147D1L)));
            --g_447;
        }
        else
        {
            char l_450 = 8L;
            return l_450;
        }
    }
    return g_383;
}







static short func_44(int p_45, unsigned char p_46, struct S0 p_47, short p_48, unsigned char p_49)
{
    unsigned l_363 = 0xD59F852CL;
    int l_367 = 0x5EE7065CL;
    int l_372 = 1L;
    l_372 = (safe_mod_func_int8_t_s_s((g_50.f3 = (safe_mod_func_int16_t_s_s(((+g_5) || ((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((l_363 && (l_367 = (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int16_t_s(l_363)) != l_363), 4)))), (((safe_lshift_func_int8_t_s_u((g_106 = 0L), 5)) || p_47.f6) & (func_51(p_47) >= g_5)))) && 0x93AB50B2L), 0x66L)), 6)), g_50.f6)) != 9UL), (-9L))), g_8)), 7)) , 5UL)), g_211))), g_50.f4));
    return l_372;
}







static char func_51(struct S0 p_52)
{
    short l_215 = (-2L);
    unsigned char l_217 = 3UL;
    unsigned l_247 = 3UL;
    int l_248 = 0xE91BF3A0L;
    int l_249 = 1L;
    struct S0 l_265 = {0x39F9CD19L,246UL,0xC222C936L,0x66L,4294967295UL,0x353FDA3CL,0UL,4294967293UL};
    unsigned char l_266 = 0x20L;
    const char l_327 = 0L;
    if (g_50.f0)
    {
        unsigned l_216 = 18446744073709551615UL;
        char l_218 = 0xCDL;
        short l_227 = 1L;
        int l_233 = 0xF074F619L;
        int l_234 = 0L;
        l_215 = 1L;
        g_107 = (+((l_218 = (l_216 <= (g_172 & l_217))) <= l_216));
        if (l_215)
        {
            unsigned l_228 = 1UL;
            int l_239 = 0x2B346868L;
            int l_240 = 0x3AF98670L;
            l_234 ^= ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(8UL, (0x671F50AEL ^ (((l_233 = (safe_div_func_int8_t_s_s((l_215 , ((p_52.f0 == (safe_add_func_int8_t_s_s(l_218, (l_228 = (p_52.f1 ^= l_227))))) , (0xB2L == ((safe_sub_func_uint32_t_u_u(((g_70 < (safe_div_func_uint32_t_u_u(g_172, (-3L)))) == g_97), 6L)) != 0x66L)))), (-2L)))) < l_215) || p_52.f6)))), p_52.f6)) == p_52.f4);
            g_97 = (-1L);
            for (p_52.f3 = 0; (p_52.f3 < (-5)); --p_52.f3)
            {
                l_234 = (+g_50.f5);
                l_234 = (safe_lshift_func_uint16_t_u_s(65534UL, 14));
            }
            g_241++;
        }
        else
        {
            unsigned l_244 = 0UL;
            l_233 &= g_9;
            return l_244;
        }
        l_249 = ((!(safe_lshift_func_uint16_t_u_s(((p_52.f6 > (l_216 , (l_247 && (~(l_234 &= (l_248 |= g_2)))))) && p_52.f1), 2))) | l_215);
    }
    else
    {
        unsigned short l_250 = 1UL;
        int l_253 = (-1L);
        int l_262 = 7L;
        unsigned char l_275 = 0x1EL;
        unsigned short l_341 = 0x6143L;
        if ((l_250 <= ((l_249 = (safe_add_func_int32_t_s_s((((l_253 >= (safe_sub_func_int32_t_s_s(l_253, 0L))) <= (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_172, (safe_mod_func_uint16_t_u_u((((--g_171) , (((l_265 , p_52.f4) == l_253) < l_253)) < 0x4A1EL), g_172)))), g_77))) ^ l_250), g_50.f2))) | g_105)))
        {
            unsigned l_269 = 0xC22DBCC6L;
            l_249 = l_266;
            l_262 = p_52.f2;
            l_269 = (safe_rshift_func_int8_t_s_u(p_52.f6, 7));
            g_97 = l_269;
        }
        else
        {
            unsigned short l_272 = 65535UL;
            short l_302 = 1L;
            if ((((--g_172) | p_52.f7) < 0L))
            {
                int l_290 = 0x25B4E283L;
                int l_297 = 1L;
                int l_319 = (-1L);
                if (l_272)
                {
                    unsigned l_303 = 0x33A0128CL;
                    l_262 &= (((safe_lshift_func_uint16_t_u_u(p_52.f6, 11)) , l_265.f1) < g_50.f1);
                    l_275 = ((l_249 |= g_201) == p_52.f4);
                    for (l_265.f0 = 0; (l_265.f0 == 16); l_265.f0++)
                    {
                        unsigned char l_305 = 0xE7L;
                        l_305 = (((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_304 = ((g_2 <= ((g_5 & p_52.f7) ^ l_272)) == (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((255UL || (l_290 || (((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_298 = (p_52.f3 , l_297)), (l_302 = (g_299--)))), l_249)), g_9)) && 0x62CD732FL) != p_52.f6))) , g_172), 2)), l_266)), l_303)), 1UL)))), g_107)), (-9L))) | 0x5BE7L) & l_265.f7);
                    }
                    for (g_97 = 0; (g_97 <= 21); ++g_97)
                    {
                        int l_316 = 0x9CA37805L;
                        l_319 = (l_302 , ((safe_rshift_func_int8_t_s_s(l_303, 2)) && (safe_sub_func_int8_t_s_s((g_97 <= (safe_add_func_int32_t_s_s(((l_297 && ((safe_add_func_int8_t_s_s((((l_302 , 255UL) > l_316) >= (0x0AA003E9L & ((safe_lshift_func_uint8_t_u_s(0x36L, g_50.f5)) , g_171))), l_316)) == 0xFB98L)) ^ 0x4F68L), p_52.f3))), g_50.f5))));
                    }
                }
                else
                {
                    unsigned short l_320 = 0UL;
                    g_107 = 0xE8E0C833L;
                    l_320++;
                    for (g_105 = 0; (g_105 == 24); g_105 = safe_add_func_int8_t_s_s(g_105, 4))
                    {
                        g_107 = (p_52.f6 > ((g_9 | (((safe_rshift_func_int8_t_s_s((p_52.f0 , l_327), 5)) < ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(p_52.f7)), (65535UL && (safe_rshift_func_int8_t_s_u(((0xD8A23592L && p_52.f4) , (((l_265.f5 >= l_297) || g_107) != g_304)), 6))))) , l_215)) != l_320)) == 0xA9L));
                    }
                    l_249 = (l_262 = g_241);
                }
            }
            else
            {
                char l_339 = 1L;
                int l_340 = 0x52542902L;
                g_97 = (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(g_70, (safe_div_func_uint8_t_u_u(0x97L, (p_52.f2 || l_272))))), g_241));
                l_339 = p_52.f7;
                l_340 |= ((~((~0x57L) <= (l_248 | p_52.f6))) && l_327);
            }
            return l_302;
        }
        --l_341;
        l_249 = 0xC4DE56E9L;
    }
    g_107 = l_327;
    return g_77;
}







static struct S0 func_53(int p_54, const unsigned p_55, short p_56)
{
    const unsigned short l_60 = 65535UL;
    int l_69 = 1L;
    unsigned l_112 = 0x9AC9426BL;
    unsigned l_128 = 6UL;
    unsigned l_170 = 0xB8CC65BCL;
    unsigned short l_199 = 65533UL;
    int l_200 = 0L;
    int l_208 = 0x3F484CDFL;
    int l_209 = 0xC307FEAAL;
    int l_210 = 0xBAA91CE0L;
    struct S0 l_214 = {2L,253UL,8L,-2L,0xCCD75549L,9L,0x92DA7FE7L,4294967295UL};
    g_70 |= ((p_56 = (safe_sub_func_uint8_t_u_u(p_56, (65535UL == (g_50.f4 != ((l_60 || (((((p_54 = ((safe_div_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_s(l_60, 0)) , (safe_lshift_func_int16_t_s_s(g_50.f4, 15))) <= g_50.f1) & (l_69 = ((safe_sub_func_int16_t_s_s((g_5 , (p_55 < 1UL)), g_50.f6)) > g_50.f3))) > g_50.f1), 3L)) == p_55)) ^ (-1L)) , l_60) ^ l_60) , g_50.f6)) , 0xDD75L)))))) < l_60);
    if (((g_7 <= 1L) && (p_54 != ((!g_50.f6) | (g_50.f4 , l_69)))))
    {
        unsigned l_74 = 9UL;
        int l_101 = (-9L);
        unsigned l_129 = 18446744073709551615UL;
        struct S0 l_177 = {3L,0x53L,0x6F8BEA3AL,0x7DL,4294967295UL,0x26FDC01DL,0x3B640E48L,0x30E6B9A3L};
        for (p_54 = 0; (p_54 <= (-27)); p_54 = safe_sub_func_int8_t_s_s(p_54, 5))
        {
            unsigned short l_73 = 0x1E3BL;
            int l_98 = 0xF4405564L;
            int l_99 = (-1L);
            int l_103 = 0x5FE78F14L;
            unsigned char l_111 = 255UL;
            if (p_55)
            {
                unsigned short l_88 = 0x530EL;
                int l_100 = 0L;
                int l_102 = 0L;
                int l_104 = (-8L);
                if (l_73)
                {
                    g_77 = (g_8 || (l_74 , (safe_add_func_uint16_t_u_u(g_50.f3, g_50.f0))));
                }
                else
                {
                    unsigned short l_96 = 0xC753L;
                    for (l_69 = 0; (l_69 != (-21)); l_69 = safe_sub_func_int8_t_s_s(l_69, 5))
                    {
                        int l_80 = 0x946A2B7FL;
                        int l_81 = 0x6624E94FL;
                        l_80 = ((p_55 || g_50.f0) >= 0L);
                        l_81 = g_50.f7;
                    }
                    for (g_9 = 23; (g_9 >= 3); --g_9)
                    {
                        unsigned l_89 = 0UL;
                        l_96 = ((((0x9FE43734L == (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_50.f7 <= l_88), l_89)), (safe_rshift_func_int16_t_s_u(l_69, 11))))) | ((safe_sub_func_int16_t_s_s(g_5, (safe_lshift_func_uint16_t_u_s((g_77 && p_55), ((((((-1L) || 0x1E68A7D7L) != 247UL) , (-9L)) > l_74) && 0x1FL))))) <= p_55)) ^ l_73) , g_50.f2);
                    }
                    g_97 = p_55;
                }
                l_112 = (l_69 = ((g_108++) || ((l_60 != (g_8 | l_111)) | g_50.f4)));
            }
            else
            {
                int l_113 = (-5L);
                unsigned short l_117 = 0x170BL;
                unsigned short l_124 = 0x319BL;
                if (l_113)
                    break;
                if (p_55)
                {
                    char l_116 = 0x62L;
                    int l_125 = 0xDD4AC9C9L;
                    l_101 = (safe_sub_func_uint16_t_u_u(((g_97 &= ((l_116 , l_117) | g_106)) , (safe_div_func_int32_t_s_s(l_74, g_2))), (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((l_117 <= l_124), p_55)), p_56)) >= p_56) , 0x146AL)));
                    if ((((l_125 && 0xA6EEL) < ((l_113 ^= p_56) | (g_9 = p_55))) < (l_99 |= ((safe_lshift_func_uint16_t_u_u(g_105, (0x8CA92D9FL <= (4L | (((l_128 , l_129) < l_69) < 0xB664D791L))))) , 0x8BL))))
                    {
                        unsigned char l_138 = 5UL;
                        l_69 &= (((safe_mod_func_int32_t_s_s(0x6250C50EL, g_50.f4)) ^ ((safe_mod_func_int32_t_s_s(p_56, g_9)) != (l_129 , p_54))) , (((p_55 <= (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_50.f1 >= ((l_138++) != (p_54 && g_105))), g_50.f6)), 0xD2E7L))) ^ g_108) > 0xB716F66FL));
                    }
                    else
                    {
                        unsigned char l_153 = 0xD0L;
                        l_99 = (p_56 != ((safe_mod_func_uint16_t_u_u(p_54, ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((l_113 = (l_117 & ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_101, 1)), 3)) | (l_153 != (l_60 , ((((((safe_sub_func_int16_t_s_s(p_56, (g_105 = p_54))) > ((((g_50.f1 || 0x1C190B43L) == g_9) , p_55) >= p_55)) != (-5L)) > p_54) > 247UL) , 0xBCL)))))) < g_50.f1) & g_2), p_55)), 0x31L)) && (-9L)))) >= g_50.f7));
                    }
                }
                else
                {
                    int l_160 = 1L;
                    int l_169 = 0xDD1E6761L;
                    g_107 = (0x8C8DL > (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_160 | g_50.f5), ((safe_rshift_func_int16_t_s_s((p_55 > p_55), (safe_sub_func_int32_t_s_s(((~(safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(p_55, l_169)) , (p_54 != 0L)) ^ l_160), g_97))) || 0xFA95L), g_50.f2)))) > 0x0604L))), 0x23781183L)));
                }
                g_107 ^= ((!(g_172 = ((g_2 = l_170) >= (((g_171 = 0x08L) < (-1L)) & (l_74 & l_101))))) , (safe_sub_func_int16_t_s_s(g_8, ((p_56 != p_56) > ((g_172--) && (l_101 = 0xD390861EL))))));
            }
            return l_177;
        }
        l_200 = (0xEA3AL | (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((p_56 == ((safe_add_func_uint16_t_u_u(((p_55 > ((((l_69 = (safe_lshift_func_uint8_t_u_u(l_177.f5, 4))) >= (~(g_50.f0 == (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_105, (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u(p_54, (safe_div_func_int32_t_s_s(l_101, l_60)))))))), 6L))))) , g_50.f1) >= p_56)) > p_55), l_199)) == l_128)), p_55)) & 1L), l_177.f4)) & p_54) , l_128), g_70)), (-6L))));
        g_201--;
        p_54 = (g_7 > l_170);
    }
    else
    {
        unsigned char l_206 = 1UL;
        int l_207 = 0x538D4234L;
        p_54 = (((safe_sub_func_uint32_t_u_u(p_54, ((g_2 , g_105) ^ (g_106 = l_206)))) | (~4L)) | (l_207 = (g_108 | p_54)));
    }
    g_211++;
    return l_214;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_50.f4, "g_50.f4", print_hash_value);
    transparent_crc(g_50.f5, "g_50.f5", print_hash_value);
    transparent_crc(g_50.f6, "g_50.f6", print_hash_value);
    transparent_crc(g_50.f7, "g_50.f7", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2, "g_394.f2", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_394.f4, "g_394.f4", print_hash_value);
    transparent_crc(g_394.f5, "g_394.f5", print_hash_value);
    transparent_crc(g_394.f6, "g_394.f6", print_hash_value);
    transparent_crc(g_394.f7, "g_394.f7", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
