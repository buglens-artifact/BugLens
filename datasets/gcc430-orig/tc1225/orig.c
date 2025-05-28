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
   unsigned char f0;
};


static int g_2 = (-1L);
static int g_8 = 0x7CEFA9D1L;
static int g_12 = (-1L);
static char g_32 = 0x46L;
static unsigned short g_44[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static unsigned char g_46 = 0x61L;
static union U0 g_70 = {248UL};
static unsigned g_73[5] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
static unsigned g_98 = 1UL;
static unsigned short g_119 = 0x4140L;
static unsigned g_129 = 0x3CF271EEL;
static unsigned g_154 = 1UL;
static unsigned g_166 = 0x56E4D920L;
static unsigned short g_171 = 0xD126L;
static int g_226 = 0xD6E3AF0BL;
static union U0 g_228 = {0x12L};
static unsigned g_239 = 4294967288UL;
static union U0 g_336 = {0x60L};
static unsigned g_507 = 4294967295UL;
static short g_727 = (-1L);
static int g_1011 = (-5L);
static short g_1105 = 0xD5DFL;



static unsigned func_1(void);
static int func_5(const int p_6);
static int func_13(char p_14, unsigned short p_15, short p_16, unsigned p_17, int p_18);
static char func_20(unsigned char p_21, unsigned p_22, unsigned p_23, int p_24, int p_25);
static int func_30(unsigned short p_31);
static short func_33(int p_34, unsigned p_35, char p_36, unsigned short p_37, int p_38);
static unsigned func_39(unsigned char p_40);
static unsigned short func_47(unsigned short p_48, short p_49, union U0 p_50);
static unsigned func_61(int p_62, unsigned char p_63, int p_64, unsigned char p_65, unsigned short p_66);
static unsigned func_68(union U0 p_69);
static unsigned func_1(void)
{
    const int l_7 = 6L;
    int l_819 = 0x49D3F3D2L;
    short l_908 = (-8L);
    char l_921[6] = {0xFEL,(-3L),0xFEL,0xFEL,(-3L),0xFEL};
    int l_959 = 9L;
    short l_1061 = 0x68DEL;
    int l_1062[5] = {0x62754EF7L,0x62754EF7L,0x62754EF7L,0x62754EF7L,0x62754EF7L};
    unsigned char l_1171 = 0x2AL;
    union U0 l_1213 = {0UL};
    unsigned short l_1255 = 0x1564L;
    int i;
    for (g_2 = 0; (g_2 >= 2); ++g_2)
    {
        unsigned l_741 = 0xB28CC1BFL;
        unsigned char l_745[5][1][9] = {{{0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}},{{0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}},{{0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L,0x7CL,0x84L}}};
        int l_763 = (-10L);
        short l_784[2][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
        unsigned short l_808 = 0x400DL;
        int l_893 = 1L;
        unsigned l_906[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int l_926 = 0xBA0B7294L;
        unsigned l_927 = 8UL;
        int l_944 = 0xD30ECDCDL;
        short l_951 = 1L;
        unsigned l_967 = 0x08D152FBL;
        int i, j, k;
        if (func_5(l_7))
        {
            unsigned l_738 = 18446744073709551615UL;
            int l_742 = 1L;
            for (g_507 = 0; (g_507 == 20); g_507++)
            {
                unsigned l_737 = 0xC853F21BL;
                int l_770 = 0L;
                const unsigned short l_781 = 65533UL;
                short l_782[2][9][4] = {{{1L,1L,0x8DFEL,0L},{0L,0x85C0L,0L,0x8DFEL},{0L,0x8DFEL,0x8DFEL,0L},{1L,0x8DFEL,0L,0x8DFEL},{0x8DFEL,0x85C0L,0L,0L},{1L,1L,0x8DFEL,0L},{0L,0x85C0L,0L,0x8DFEL},{0L,0x8DFEL,0x8DFEL,0L},{1L,0x8DFEL,0L,0x8DFEL}},{{0x8DFEL,0x85C0L,0L,0L},{1L,1L,0x8DFEL,0L},{0L,0x85C0L,0L,0x8DFEL},{0L,0x8DFEL,0x8DFEL,0L},{0L,0L,1L,0L},{0L,0x8DFEL,1L,1L},{0L,0L,0L,1L},{0x85C0L,0x8DFEL,0x85C0L,0L},{0x85C0L,0L,0L,0x85C0L}}};
                unsigned l_785[8] = {0x669A90F6L,3UL,0x669A90F6L,3UL,0x669A90F6L,3UL,0x669A90F6L,3UL};
                int i, j, k;
                if (l_737)
                {
                    g_12 = g_12;
                    l_742 = (((l_738 ^ (safe_add_func_int16_t_s_s((g_336.f0 | ((1L || (l_737 < (func_68(g_70) ^ 0xEBL))) == g_226)), l_741))) != l_7) >= 0x0630L);
                    if (g_166)
                        break;
                }
                else
                {
                    unsigned short l_754 = 0x5184L;
                    const char l_783 = 0x75L;
                    g_226 = (func_47(((((+(g_46 | (l_7 && g_171))) == 65535UL) | (((safe_sub_func_int32_t_s_s(l_738, (~((func_20(((l_745[0][0][7] != (safe_mod_func_uint32_t_u_u((+((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_171, 0xBC30L)), (((safe_rshift_func_uint16_t_u_s((65535UL || (-8L)), g_2)) < g_336.f0) || l_754))) <= 7L)), 0x532375E6L))) & l_742), g_2, g_171, l_745[2][0][3], g_2) >= 0L) > g_154)))) <= g_228.f0) ^ g_8)) & l_7), l_7, g_228) > l_741);
                    if ((((g_44[1] & 246UL) == l_754) | ((0L | l_7) >= (~(0x09L < (safe_sub_func_uint16_t_u_u(((l_737 != l_754) || g_8), 65535UL)))))))
                    {
                        l_763 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_12, func_61(g_73[3], g_46, (safe_sub_func_uint32_t_u_u((g_119 && func_20(g_98, g_228.f0, g_336.f0, (((l_737 && l_7) >= g_32) && g_46), l_737)), l_738)), g_70.f0, l_738))), g_507));
                        if (l_738)
                            continue;
                    }
                    else
                    {
                        l_785[2] = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_47(l_770, ((safe_lshift_func_int8_t_s_u(l_741, ((safe_sub_func_int16_t_s_s(func_20((safe_rshift_func_int8_t_s_u(g_2, 5)), g_73[1], (((0UL && func_20(g_12, (safe_lshift_func_uint8_t_u_u((l_737 > (((((65535UL ^ ((safe_add_func_uint32_t_u_u(g_166, l_745[3][0][1])) > l_738)) <= l_781) < l_737) == g_8) | g_119)), g_171)), g_98, g_119, l_7)) > 0xCDBB8590L) ^ g_73[3]), g_44[1], l_782[1][4][0]), l_754)) > l_783))) > g_32), g_336), g_12)), l_784[0][0])), 0xE01A1BFAL));
                    }
                    g_226 = (65535UL | g_98);
                }
                return l_745[0][0][7];
            }
            g_8 = (((l_742 == ((((safe_rshift_func_uint8_t_u_s((g_98 || l_738), ((safe_lshift_func_int8_t_s_u(0x5EL, 6)) <= ((l_741 == g_98) == (safe_mod_func_int8_t_s_s(g_32, 0x24L)))))) & (safe_rshift_func_int8_t_s_u((l_7 || g_226), 0))) >= g_129) > l_738)) ^ 0x6758L) | g_70.f0);
            for (g_226 = 0; (g_226 > 15); ++g_226)
            {
                return g_2;
            }
        }
        else
        {
            int l_798[8] = {1L,0x31150131L,1L,0x31150131L,1L,0x31150131L,1L,0x31150131L};
            unsigned short l_897 = 3UL;
            int l_907 = (-4L);
            unsigned char l_914 = 247UL;
            unsigned short l_928 = 0xD94CL;
            int i;
            for (l_741 = 27; (l_741 != 56); l_741 = safe_add_func_uint16_t_u_u(l_741, 7))
            {
                unsigned l_800 = 0xB55930FEL;
                int l_807[6][9] = {{0x4938A687L,5L,0L,0x4938A687L,0x0E0E2FB3L,0x4938A687L,0L,5L,0x4938A687L},{0x5D830787L,5L,0L,0L,0x5E180B2FL,0x5D830787L,0L,0x646D5632L,0L},{0L,0x0E0E2FB3L,0L,0L,0x0E0E2FB3L,0L,(-6L),0x646D5632L,0L},{0x5D830787L,0x5E180B2FL,0L,0L,5L,0x5D830787L,0x5D830787L,5L,0L},{0x4938A687L,0x0E0E2FB3L,0x4938A687L,0L,5L,0x4938A687L,(-6L),0x74F90CC8L,0L},{0x4938A687L,5L,0L,0x4938A687L,0x0E0E2FB3L,0x4938A687L,0L,5L,0x4938A687L}};
                int l_809 = 0x82D348C4L;
                short l_884 = 0x44A7L;
                union U0 l_900 = {0xBEL};
                int i, j;
                l_798[7] = 0x7A252EA9L;
                if (l_798[5])
                    continue;
                if (g_336.f0)
                {
                    unsigned char l_799 = 0xD3L;
                    if (g_73[3])
                        break;
                    l_799 = (-3L);
                    if (l_800)
                        continue;
                    if ((((g_98 < (((safe_add_func_uint16_t_u_u(g_73[3], (l_7 || (-1L)))) <= func_20(l_7, (func_20((safe_rshift_func_uint16_t_u_s(0x5D2AL, g_507)), ((safe_add_func_uint16_t_u_u(g_166, g_8)) && 0x59L), g_119, g_70.f0, l_799) >= g_46), g_32, g_70.f0, g_166)) & g_119)) <= l_763) | g_2))
                    {
                        if (l_807[4][3])
                            break;
                        if (l_798[2])
                            continue;
                    }
                    else
                    {
                        unsigned short l_816 = 0x62E0L;
                        g_12 = (func_61(l_808, g_73[3], func_20(l_809, l_7, (safe_lshift_func_int8_t_s_u(g_166, 4)), (g_73[4] >= (((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_816, func_20(g_44[1], func_20(((((safe_add_func_uint32_t_u_u((g_239 || 1UL), l_7)) && 0UL) && 0xF1L) > 254UL), l_798[3], g_70.f0, l_798[2], l_819), l_798[7], g_2, g_98))) <= l_7), l_809)) >= g_8) && 0x7B4D9CAEL)), g_239), g_228.f0, l_741) >= l_798[7]);
                        g_12 = (safe_rshift_func_uint8_t_u_u(l_800, l_799));
                        if (g_2)
                            continue;
                    }
                }
                else
                {
                    unsigned short l_823 = 5UL;
                    int l_845 = 0L;
                    int l_847 = 0x5C907470L;
                    if (g_73[3])
                    {
                        int l_822 = 0xF0AA3C37L;
                        g_226 = (-1L);
                        l_819 = l_822;
                    }
                    else
                    {
                        unsigned l_846 = 0xA02319BBL;
                        g_12 = l_741;
                        l_819 = (func_13(l_823, g_12, (1L == (((l_741 ^ (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(func_61(g_46, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((((safe_add_func_int32_t_s_s(func_20(g_12, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_73[3], 1)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((-3L), 0xFFD5L)), g_2)))), l_823)), g_129, g_727, l_807[1][5]), l_845)) <= l_823) && 0x89L) == l_808) > l_846), 6)), 4)), g_98, l_800, g_46), 13)) != l_846), g_8))))) == l_798[3]) | 0x04CA6F6CL)), l_741, l_800) < 0UL);
                        if (l_846)
                            break;
                    }
                    l_847 = (255UL & l_823);
                    if (g_73[3])
                        continue;
                    l_763 = 0x98E7B6BFL;
                }
                if (((-1L) >= (safe_add_func_int32_t_s_s(0x9F7A876CL, (~(safe_rshift_func_uint8_t_u_u(0x05L, 3)))))))
                {
                    int l_859 = 0xC093F848L;
                    for (g_129 = 0; (g_129 < 30); g_129++)
                    {
                        short l_856 = (-1L);
                        l_809 = (safe_rshift_func_uint16_t_u_s((!func_20((l_800 ^ (g_12 || 0xD158L)), l_745[0][0][4], g_70.f0, func_20((func_20(l_856, g_129, (l_7 > (l_7 < l_819)), g_154, g_336.f0) >= g_119), l_807[2][0], l_809, g_98, g_119), l_807[4][3])), l_7));
                        l_809 = (func_20(((safe_lshift_func_uint16_t_u_u((l_859 || g_727), (safe_lshift_func_int16_t_s_u(func_20(g_166, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_119, 1L)), ((((l_784[0][4] & ((safe_mod_func_int16_t_s_s(func_20(g_46, g_73[3], (safe_mod_func_uint32_t_u_u((0L & l_856), g_8)), l_856, g_12), g_166)) ^ (-9L))) >= g_336.f0) < (-1L)) > g_171))), g_98)), g_2, g_226, g_73[3]), 13)))) || 4294967295UL), g_2, g_98, g_8, g_119) != g_226);
                        l_763 = g_8;
                        l_809 = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_808, ((safe_rshift_func_int16_t_s_u(g_8, (1UL ^ l_808))) && (l_859 <= func_20((safe_mod_func_uint32_t_u_u(((((((g_44[5] & l_807[4][3]) && 0x8BF74CDEL) & (safe_rshift_func_int16_t_s_u((!((((((((safe_mod_func_uint16_t_u_u((1L > g_73[3]), g_239)) >= l_856) < g_73[3]) == g_119) && l_798[1]) <= g_166) <= g_8) <= 8UL)), g_73[2]))) || g_727) == l_859) | 0x3B97D8ECL), l_798[3])), g_507, g_98, g_228.f0, g_166))))), g_226)) >= 0UL);
                    }
                    for (g_226 = 5; (g_226 >= 1); g_226 -= 1)
                    {
                        int l_894[6][5][6] = {{{5L,(-10L),0L,0xC612ADF6L,1L,(-1L)},{(-1L),1L,(-8L),(-8L),1L,(-1L)},{0x9A1C5AC2L,1L,0x07BD6611L,(-6L),(-1L),(-6L)},{2L,(-1L),(-1L),0xE11357ACL,0xE5E4824EL,0xAF26B705L},{2L,0x0A7DBC76L,0xE11357ACL,(-6L),0L,(-3L)}},{{0x9A1C5AC2L,(-1L),0xBF6497F4L,(-8L),0x75C30517L,0x1A7401E6L},{(-1L),0x7B06AF87L,1L,(-1L),0x5FC430D4L,0xC8D96EBDL},{0x07BD6611L,(-1L),(-1L),0L,(-1L),(-6L)},{0xBECFBC05L,0x5FC430D4L,(-3L),1L,(-2L),(-6L)},{(-1L),0xC612ADF6L,(-1L),0x1A7401E6L,0x55073B3AL,0xC8D96EBDL}},{{0xAF26B705L,0x45D02BA4L,1L,0x07BD6611L,0x3E253826L,0x1A7401E6L},{(-1L),0xE69E8423L,0xBF6497F4L,(-1L),0x71DC3DF4L,(-3L)},{0xBF6497F4L,0xF2FE4C62L,0xE11357ACL,1L,0x531F598CL,0xAF26B705L},{(-8L),1L,(-1L),(-3L),0x531F598CL,(-6L)},{(-6L),0xF2FE4C62L,0x07BD6611L,1L,0x71DC3DF4L,(-1L)}},{{0L,0xE69E8423L,(-8L),0xBECFBC05L,0x3E253826L,0xBECFBC05L},{6L,0x45D02BA4L,6L,0L,0x55073B3AL,1L},{0xD2C16BBBL,0x3E253826L,(-1L),0L,1L,(-1L)},{1L,5L,0xBECFBC05L,0L,0xE5E4824EL,(-7L)},{0xD2C16BBBL,0x45D02BA4L,0x07BD6611L,(-7L),5L,6L}},{{0xAF26B705L,1L,(-1L),(-6L),0x531F598CL,(-1L)},{(-7L),0xC70CDB34L,0x9A1C5AC2L,0x1A7401E6L,1L,(-8L)},{(-8L),0x5FC430D4L,2L,1L,0xC03CDE6AL,0x9A1C5AC2L},{(-3L),0xE5E4824EL,2L,1L,0xC70CDB34L,(-8L)},{0L,(-1L),0x9A1C5AC2L,2L,0xF2FE4C62L,(-1L)}},{{2L,0xF2FE4C62L,(-1L),0xBF6497F4L,0x5FC430D4L,6L},{1L,0L,0x07BD6611L,(-1L),1L,(-7L)},{(-8L),0x55073B3AL,0xBECFBC05L,0x6C8F1B04L,7L,(-1L)},{(-6L),0x55073B3AL,(-1L),0xD2C16BBBL,1L,1L},{0xBF6497F4L,0L,0xAF26B705L,(-8L),0x5FC430D4L,(-6L)}}};
                        int i, j, k;
                        l_894[5][1][3] = ((((l_807[g_226][(g_226 + 2)] > ((g_336.f0 == 0L) >= 65534UL)) >= (l_884 <= (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_819, (g_73[3] != ((func_20((!g_336.f0), l_784[0][0], l_819, l_798[1], g_228.f0) == 0x455B5D46L) > 0xFCL)))), l_807[3][3])) ^ l_798[4]), g_32)) > g_226) | l_893), g_73[3])))) < 0xE630L) | l_798[6]);
                        return g_154;
                    }
                }
                else
                {
                    unsigned l_909 = 0UL;
                    g_8 = (safe_mod_func_int8_t_s_s(l_798[7], 255UL));
                    if ((g_12 == 8L))
                    {
                        g_8 = g_98;
                        return l_897;
                    }
                    else
                    {
                        unsigned char l_905 = 246UL;
                        l_763 = ((safe_lshift_func_int8_t_s_u((((((func_47(l_819, g_336.f0, l_900) & (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_905, (l_906[1] ^ g_507))) | l_907), l_745[0][0][7]))) != l_807[4][3]) & l_7) <= l_908) ^ l_909), g_226)) & g_12);
                        g_226 = g_171;
                        g_226 = (0x852C7387L <= ((-7L) <= ((((safe_rshift_func_int8_t_s_u(g_228.f0, l_905)) ^ (safe_lshift_func_int16_t_s_u(l_819, 6))) != (-3L)) >= (l_905 & g_44[3]))));
                    }
                }
            }
            g_226 = l_798[1];
            l_928 = (((g_226 && l_914) != ((~g_171) >= ((safe_add_func_uint8_t_u_u((0xECL && 0xD6L), ((safe_add_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_u((((l_921[2] ^ ((((g_239 && g_171) == ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(l_798[7], l_926)) == l_927) | g_12), 0)) > l_906[8])) != l_784[0][0]) < l_763)) <= g_12) & l_798[7]), l_897)) | l_784[0][1]) & l_921[2]) > l_908) >= 0x6F1EL), g_12)) == l_741))) || 0xCFFA16A3L))) >= l_921[2]);
            if (l_907)
                continue;
        }
        for (l_819 = (-28); (l_819 > (-1)); l_819 = safe_add_func_int32_t_s_s(l_819, 4))
        {
            char l_937[3][1][7] = {{{1L,0xF5L,(-6L),0xF5L,1L,1L,0xF5L}},{{0L,(-1L),0L,0xF5L,0xF5L,0L,(-1L)}},{{0xF5L,(-1L),0L,0L,(-6L),1L,(-6L)}}};
            short l_954[1];
            char l_955 = (-3L);
            int l_962 = (-3L);
            unsigned l_1009[4];
            unsigned l_1016[7][8][4] = {{{0xE2AC1CD7L,1UL,1UL,0xE2AC1CD7L},{18446744073709551615UL,0xE672B48AL,0x910F0E45L,0x8F26A29CL},{0x3551D2BCL,0UL,7UL,0x30182E3EL},{18446744073709551615UL,0UL,0xE2AC1CD7L,0x30182E3EL},{0UL,0UL,0xAD5D10C5L,0x8F26A29CL},{0x1BDC99F0L,0xE672B48AL,18446744073709551615UL,0xE2AC1CD7L},{1UL,1UL,4UL,0x9DAAE5B9L},{0x58BC9112L,0UL,0xE672B48AL,0UL}},{{0UL,0x1BDC99F0L,0UL,0x29CC03D1L},{18446744073709551607UL,0x58BC9112L,0x1BDC99F0L,18446744073709551615UL},{18446744073709551613UL,0x3EEC344BL,0x9DAAE5B9L,0x58BC9112L},{0x910F0E45L,7UL,0x9DAAE5B9L,18446744073709551613UL},{18446744073709551613UL,0x45493D79L,0x1BDC99F0L,0x3551D2BCL},{18446744073709551607UL,0UL,0UL,0x8237C971L},{0UL,0x8237C971L,0xE672B48AL,0x45493D79L},{0x58BC9112L,0x910F0E45L,4UL,4UL}},{{1UL,1UL,18446744073709551615UL,0UL},{0x1BDC99F0L,0x29CC03D1L,0xAD5D10C5L,0xE672B48AL},{0UL,0x3551D2BCL,0xE2AC1CD7L,0xAD5D10C5L},{18446744073709551615UL,0x3551D2BCL,7UL,0xE672B48AL},{0x3551D2BCL,0x29CC03D1L,0x910F0E45L,0UL},{18446744073709551615UL,1UL,1UL,4UL},{0xE2AC1CD7L,0x910F0E45L,0UL,0x3551D2BCL},{0UL,0xE2AC1CD7L,0x8F26A29CL,0xE2AC1CD7L}},{{0x9DAAE5B9L,18446744073709551615UL,0x3551D2BCL,0x8237C971L},{0x45493D79L,0x3551D2BCL,0x58BC9112L,0x29CC03D1L},{0xE2AC1CD7L,18446744073709551615UL,0xE672B48AL,0x1BDC99F0L},{0xE2AC1CD7L,0UL,0x58BC9112L,0x30182E3EL},{0x45493D79L,0x1BDC99F0L,0x3551D2BCL,0UL},{0x9DAAE5B9L,1UL,0x8F26A29CL,0x910F0E45L},{0UL,0x58BC9112L,0x910F0E45L,4UL},{18446744073709551614UL,0UL,0UL,18446744073709551614UL}},{{0UL,18446744073709551607UL,1UL,7UL},{0x8237C971L,18446744073709551613UL,18446744073709551615UL,0UL},{0x30182E3EL,0x910F0E45L,18446744073709551614UL,0UL},{18446744073709551615UL,18446744073709551613UL,0x9DAAE5B9L,7UL},{1UL,18446744073709551607UL,0x30182E3EL,18446744073709551614UL},{0xAD5D10C5L,0UL,0UL,4UL},{0x1BDC99F0L,0x58BC9112L,18446744073709551607UL,0x910F0E45L},{0x3EEC344BL,1UL,0x3EEC344BL,0UL}},{{0x8F26A29CL,0x1BDC99F0L,1UL,0x30182E3EL},{0x29CC03D1L,0UL,4UL,0x1BDC99F0L},{1UL,18446744073709551615UL,4UL,0x29CC03D1L},{0x29CC03D1L,0x3551D2BCL,1UL,0x8237C971L},{0x8F26A29CL,18446744073709551615UL,0x3EEC344BL,0xE2AC1CD7L},{0x3EEC344BL,0xE2AC1CD7L,18446744073709551607UL,0x3551D2BCL},{0x1BDC99F0L,1UL,0xE672B48AL,0xE672B48AL},{18446744073709551614UL,18446744073709551614UL,1UL,0UL}},{{0xE2AC1CD7L,7UL,0x1F8012C3L,18446744073709551615UL},{0UL,0UL,1UL,0x1F8012C3L},{1UL,0UL,0x1BDC99F0L,18446744073709551615UL},{0UL,7UL,4UL,0UL},{0x45493D79L,18446744073709551614UL,0UL,0xE672B48AL},{1UL,4UL,0x9DAAE5B9L,0x30182E3EL},{0UL,0x910F0E45L,0UL,0x910F0E45L},{0x1F8012C3L,0UL,0x30182E3EL,0UL}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_954[i] = (-1L);
            for (i = 0; i < 4; i++)
                l_1009[i] = 4294967295UL;
            l_937[1][0][0] = ((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((0xC0L ^ (3UL & ((l_741 ^ ((safe_add_func_int8_t_s_s(g_239, g_73[2])) == g_98)) >= ((g_166 >= l_908) == 0x58A8L)))) != 1L), 7)) >= l_927), 0xE1A7L)) <= g_46) > 0xAFL) && 0L);
            if (((g_129 >= (0xB965L < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(l_921[2], 7)), g_129)))) < l_937[1][0][0]))
            {
                short l_960[10][7][3] = {{{0L,0xE90DL,0xFCD8L},{(-9L),1L,(-1L)},{(-9L),1L,9L},{0L,0xD5DFL,0x9DD5L},{9L,7L,0xE90DL},{1L,(-6L),0x2604L},{0xFEC0L,0x9F23L,(-1L)}},{{0x7E36L,1L,0xF831L},{0x237CL,0xFA02L,0L},{0L,0L,0L},{(-1L),0x1BF3L,7L},{0x2B71L,0xF831L,0x75B4L},{0xF831L,(-1L),0x8C6FL},{0x2555L,0x6279L,0xCD96L}},{{7L,0x1715L,0x1715L},{1L,0L,(-1L)},{(-3L),(-1L),(-1L)},{0x4578L,0x8C6FL,0x06FBL},{0L,0L,0x7E36L},{0x9F23L,(-1L),(-3L)},{0x24FBL,0xB9E7L,5L}},{{0x4D43L,0L,6L},{0L,0x4D43L,0xE854L},{0x1DD8L,0x732EL,0xE642L},{9L,9L,0L},{0xC3A8L,0x407DL,0xFA02L},{0L,0x8046L,0x237CL},{0xEA76L,6L,0L}},{{0x588BL,0L,1L},{0x5C67L,0x23EFL,(-9L)},{1L,0L,0x23EFL},{(-1L),0x4578L,0x6D87L},{0x2555L,(-1L),0x1715L},{0x7FB4L,0x868EL,0x999AL},{0L,0x1BF3L,0xED99L}},{{0x3C6CL,0xC3A8L,0xED99L},{0xDE40L,2L,0x999AL},{0x4E47L,(-6L),0x1715L},{4L,0x2ED1L,0x6D87L},{0L,0x75B4L,0x23EFL},{7L,0L,(-9L)},{7L,1L,1L}},{{0x8046L,0L,0L},{7L,0x2B71L,0x237CL},{1L,0L,0xFA02L},{0xD5DFL,0x7FB4L,0L},{0xED99L,1L,0xE642L},{0xFA02L,0x9F23L,0xE854L},{6L,0x8C6FL,6L}},{{0x6991L,0x2604L,5L},{0xFCD8L,0x7048L,(-3L)},{(-1L),0xF831L,(-9L)},{0x732EL,0x846FL,0x8046L},{(-1L),0x6991L,0L},{(-1L),1L,0x75B4L},{0L,0x4D43L,1L}},{{9L,0L,0xDE40L},{0xFEC0L,(-1L),0x8196L},{0x2555L,7L,7L},{0x6991L,0x732EL,0xE854L},{0x5C67L,7L,0xB9E7L},{0x846FL,0x8C6FL,0L},{1L,(-1L),0L}},{{7L,0L,(-5L)},{0x4578L,0L,0x7FB4L},{0x7C37L,0xCD96L,0L},{0x2B71L,1L,0L},{0xCD96L,(-3L),0x1715L},{0x24FBL,9L,0x237CL},{0xE90DL,9L,0xF831L}}};
                int i, j, k;
                if ((safe_rshift_func_uint16_t_u_u(((~(+(l_921[2] | (l_944 > 0x42A164F4L)))) >= ((safe_rshift_func_uint16_t_u_s(g_507, 6)) < g_70.f0)), (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_951, 6)), g_507)))))
                {
                    unsigned char l_958 = 0x4CL;
                    l_959 = (safe_sub_func_uint32_t_u_u(func_33(g_228.f0, (((l_954[0] ^ (((g_226 && (252UL ^ g_239)) | l_955) ^ (safe_add_func_int16_t_s_s(l_954[0], 1UL)))) || l_921[2]) < 0xDBL), g_336.f0, l_958, l_937[1][0][4]), 4L));
                    g_8 = l_960[9][0][2];
                    if (g_98)
                    {
                        g_8 = (-9L);
                    }
                    else
                    {
                        unsigned l_961 = 0x1D72A769L;
                        g_12 = l_961;
                        l_962 = l_960[1][2][0];
                    }
                }
                else
                {
                    g_226 = (0x13L < (g_32 & g_44[3]));
                }
                g_8 = g_70.f0;
            }
            else
            {
                int l_980 = 9L;
                union U0 l_1010 = {0x18L};
                int l_1012 = 0xB1942F36L;
                g_226 = g_507;
                if ((safe_lshift_func_int8_t_s_u((l_741 | (safe_rshift_func_uint8_t_u_u(l_967, (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((4294967295UL || (func_61((1L | (safe_lshift_func_uint16_t_u_u(l_980, g_2))), ((l_980 ^ g_73[0]) > (-9L)), g_154, l_980, g_226) ^ g_171)), g_8)), g_727)), 6)) | g_228.f0), g_46)), 4))))), 1)))
                {
                    unsigned l_987 = 0UL;
                    int l_1002 = 0x516DCCAEL;
                    for (g_228.f0 = 0; (g_228.f0 <= 4); g_228.f0 += 1)
                    {
                        int i;
                        g_12 = g_73[g_228.f0];
                        g_8 = l_980;
                        g_8 = ((((safe_mod_func_int8_t_s_s((l_954[0] == g_2), g_44[1])) || (safe_lshift_func_int8_t_s_s(func_61(g_73[2], ((((g_12 & ((1L == 0UL) <= (((safe_rshift_func_uint16_t_u_u(l_987, 7)) == (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(g_226, l_955)) & l_980) | g_239), l_987)) || l_980), g_44[3]))) >= 0x4084F837L))) == (-5L)) & 0L) ^ g_166), l_987, g_73[g_228.f0], g_171), g_239))) ^ l_987) || l_906[1]);
                    }
                    l_1002 = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((g_119 >= ((safe_mod_func_uint8_t_u_u((4294967295UL ^ g_98), l_987)) == g_119)) & (safe_rshift_func_uint8_t_u_u((0x12L < l_908), l_1002))), l_1002)), l_745[0][0][7]));
                    g_12 = g_46;
                }
                else
                {
                    int l_1013 = (-1L);
                    for (g_46 = 0; (g_46 == 34); ++g_46)
                    {
                        return g_70.f0;
                    }
                    if ((((~g_226) >= ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(g_46, (0x16L && (l_959 & (l_1009[1] ^ ((~(!(func_20((func_20(g_46, func_68(l_1010), ((g_46 || 0x709816B0L) | 0x7F27D6FAL), l_1009[0], g_98) < g_12), l_1009[2], g_1011, l_1012, l_955) != g_2))) != l_1013)))))) || 0xF34D56CFL), g_32)) | 0L)) <= 0x06EAL))
                    {
                        const unsigned short l_1025[8] = {65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL};
                        int l_1026 = 0L;
                        int i;
                        g_226 = (0x406BB833L != (((((g_336.f0 <= ((0UL >= ((safe_rshift_func_uint16_t_u_u(g_129, 2)) < func_20(l_1013, l_1016[3][1][3], ((safe_sub_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((l_980 > g_73[1]) | (safe_add_func_uint8_t_u_u(((((g_239 <= l_1025[5]) != g_154) == 0xE02AL) && 0UL), (-5L)))) && l_906[3]), 0UL)), l_927)) != 5L) | g_154) > g_73[3]), l_955)) != g_1011), g_73[3], l_937[1][0][0]))) != g_154)) & g_727) > (-4L)) || g_12) >= l_1016[3][0][3]));
                        l_1026 = l_1012;
                    }
                    else
                    {
                        char l_1033[10][10][2] = {{{0L,0L},{1L,2L},{1L,1L},{(-7L),2L},{0L,(-7L)},{1L,0x08L},{1L,(-7L)},{0L,2L},{(-7L),1L},{1L,2L}},{{1L,0L},{0L,0xDBL},{0L,2L},{0x51L,(-1L)},{0x09L,0xDBL},{0L,1L},{0xADL,0L},{0xE3L,0x51L},{(-1L),0xE1L},{0x2EL,(-1L)}},{{0x09L,0L},{1L,0L},{0x2EL,2L},{0L,0x51L},{(-1L),0xCFL},{0xADL,0L},{1L,0L},{2L,0xE1L},{1L,0xE1L},{2L,0L}},{{1L,0L},{0xADL,0xCFL},{(-1L),0x51L},{0L,2L},{0x2EL,0L},{1L,0L},{0x09L,(-1L)},{0x2EL,0xE1L},{(-1L),0x51L},{0xE3L,0L}},{{0xADL,1L},{0L,0L},{(-1L),2L},{1L,(-7L)},{0xE3L,0L},{0x09L,0x09L},{0xADL,(-1L)},{2L,0x51L},{0xCFL,(-7L)},{0x2EL,0xCFL}},{{0L,0L},{0L,0xCFL},{0x2EL,(-7L)},{0xCFL,0x51L},{2L,(-1L)},{0xADL,0x09L},{0x09L,0L},{0xE3L,(-7L)},{1L,2L},{(-1L),0L}},{{0L,1L},{0xADL,0L},{0xE3L,0x51L},{0L,1L},{0xA0L,0L},{0x51L,0x84L},{0xDBL,0xADL},{0xA0L,0x08L},{0xADL,1L},{1L,0x21L}},{{0x82L,0xB2L},{0xDBL,0x9FL},{0L,1L},{0x62L,1L},{0L,0x9FL},{0xDBL,0xB2L},{0x82L,0x21L},{1L,1L},{0xADL,0x08L},{0xA0L,0xADL}},{{0xDBL,0x84L},{0x51L,0L},{0xA0L,1L},{0L,1L},{0xE9L,0xADL},{0x82L,0xDBL},{0xB2L,0x9FL},{1L,0x08L},{0x62L,6L},{0xE9L,0x9FL}},{{0x51L,0x51L},{0x82L,0L},{0L,1L},{0x21L,6L},{0xA0L,0x21L},{0xB2L,0x84L},{0xB2L,0x21L},{0xA0L,6L},{0x21L,1L},{0L,0L}}};
                        int i, j, k;
                        l_926 = (safe_lshift_func_int8_t_s_s(0xA3L, func_13((+g_8), (safe_sub_func_uint32_t_u_u((l_944 >= (l_1012 || (+9UL))), (((((((l_1010.f0 > ((((((g_12 == (safe_sub_func_uint32_t_u_u((((((l_1009[1] != func_68(g_70)) && 0L) >= g_12) ^ 0x793A4132L) | g_98), 1UL))) >= 1UL) || g_32) < g_171) & g_8) <= g_228.f0)) <= 0x5BL) & g_1011) < g_171) || 9L) >= l_906[1]) != g_226))), l_1013, l_1033[3][0][0], l_1033[3][0][0])));
                    }
                    l_926 = ((safe_lshift_func_int16_t_s_u(g_98, 6)) != (l_980 <= g_336.f0));
                }
            }
        }
    }
    for (g_8 = 0; (g_8 == (-27)); g_8 = safe_sub_func_int32_t_s_s(g_8, 1))
    {
        unsigned short l_1052 = 65534UL;
        l_1052 = func_61((safe_rshift_func_uint16_t_u_u(l_959, g_154)), (g_166 != ((0xFFL >= ((safe_lshift_func_int16_t_s_s((-1L), 8)) != (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_908, (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_727, 3)), g_98)))), 12)), 14)))) & 0xE2L)), l_921[0], g_239, g_129);
        for (g_70.f0 = 0; (g_70.f0 == 24); g_70.f0 = safe_add_func_int8_t_s_s(g_70.f0, 7))
        {
            unsigned short l_1055 = 0x4628L;
            unsigned l_1060[5];
            int l_1063 = 0x91BBA17CL;
            int i;
            for (i = 0; i < 5; i++)
                l_1060[i] = 0x4E322D73L;
            l_1063 = func_20((l_1055 != ((0L != (((((func_20(g_166, g_32, (l_1055 & (!g_73[3])), g_228.f0, (func_20(g_70.f0, (safe_sub_func_int32_t_s_s((g_228.f0 != l_908), l_1060[4])), g_12, l_1060[3], l_1052) || g_129)) && 0UL) == 1UL) <= l_1061) || l_1062[2]) == 0x91DA652CL)) == (-1L))), l_1052, l_921[0], g_129, l_959);
            return g_171;
        }
    }
    for (g_154 = 0; (g_154 <= 5); g_154 += 1)
    {
        const unsigned char l_1076[3][10][6] = {{{0x15L,0x22L,0xEFL,2UL,250UL,0x94L},{0x22L,248UL,0x48L,2UL,3UL,255UL},{0x15L,8UL,255UL,255UL,255UL,255UL},{0x20L,0x20L,2UL,0x8FL,0x0CL,250UL},{2UL,248UL,0x0CL,255UL,0x15L,0xFDL},{2UL,2UL,0x0CL,8UL,0xEFL,250UL},{0x94L,8UL,0xFDL,255UL,0xFDL,8UL},{255UL,0xFDL,8UL,0x94L,0x48L,3UL},{8UL,0x0CL,2UL,2UL,255UL,0x2DL},{255UL,0x0CL,248UL,2UL,0x48L,0xB2L}},{{0x8FL,0xFDL,0xEFL,0xEFL,0xFDL,0x8FL},{3UL,8UL,2UL,0xB2L,0xEFL,0x94L},{0xD9L,2UL,249UL,250UL,0x15L,248UL},{0xD9L,248UL,250UL,0xB2L,0x0CL,0x15L},{3UL,0xEFL,255UL,0xEFL,3UL,249UL},{0x8FL,2UL,0x2DL,2UL,0x4AL,0x41L},{255UL,249UL,0x20L,2UL,255UL,0x41L},{8UL,250UL,0x2DL,0x94L,249UL,249UL},{255UL,255UL,255UL,255UL,8UL,0x15L},{0x94L,0x2DL,0x94L,0x41L,8UL,0x48L}},{{255UL,2UL,2UL,0x0CL,8UL,0xEFL},{0x15L,248UL,255UL,0x20L,0x41L,0x20L},{0xD9L,0x0CL,0xD9L,0x22L,2UL,8UL},{8UL,0x94L,0x48L,3UL,0x2DL,248UL},{0x94L,2UL,0x15L,3UL,250UL,0x22L},{8UL,255UL,0x41L,0x22L,0x22L,0x41L},{0xD9L,0xD9L,0xB2L,0x20L,0xFDL,0x94L},{0x15L,0x48L,0xFDL,0x0CL,255UL,0xB2L},{255UL,0x15L,0xFDL,0x41L,0xD9L,0x94L},{0xEFL,0x41L,0xB2L,0x2DL,0xB2L,0x41L}}};
        int l_1095 = 9L;
        int l_1101[3];
        int l_1112[4] = {0L,0L,0L,0L};
        int l_1119 = 7L;
        const int l_1120 = 0x5093A68CL;
        int l_1134 = 0xF1AED2A7L;
        unsigned char l_1156 = 0x90L;
        unsigned short l_1180 = 65531UL;
        unsigned char l_1188 = 0xABL;
        unsigned short l_1199[10] = {7UL,7UL,1UL,7UL,7UL,1UL,7UL,7UL,1UL,7UL};
        union U0 l_1221 = {6UL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1101[i] = (-7L);
        g_226 = (safe_lshift_func_uint16_t_u_s(((l_921[2] > (safe_add_func_int8_t_s_s(l_959, (0xC887L < ((safe_sub_func_int32_t_s_s(g_129, l_908)) > (1UL & (g_46 >= (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(func_68(g_228), 0)) == 0xA0L), l_1062[4]))))))))) == g_98), 12));
        if ((l_1076[1][3][0] | func_68(g_70)))
        {
            unsigned char l_1079 = 0xA5L;
            short l_1084 = (-8L);
            unsigned char l_1093 = 0x30L;
            short l_1100[3][6][10] = {{{5L,(-1L),0xA9EFL,0xD25DL,0x6E4DL,(-5L),0xF724L,0x63E5L,(-1L),0L},{0L,(-1L),0xA9EFL,0x6E4DL,0xEFB2L,0x63E5L,(-1L),0xD7C4L,(-6L),0x6922L},{(-10L),0x8FB0L,0x4175L,(-1L),0x1D12L,1L,0xD25DL,0xF724L,0xA9EFL,(-1L)},{0x80ACL,0x4175L,(-1L),(-1L),(-10L),(-1L),(-1L),0x4175L,0x80ACL,(-2L)},{0x4175L,(-10L),1L,0x8FB0L,5L,9L,0x80ACL,(-3L),(-1L),0x1D12L},{0x6E4DL,5L,(-1L),0x8FB0L,0xA9EFL,(-2L),0xF724L,0xD7C4L,0x80ACL,(-1L)}},{{0x5337L,(-3L),0xEC11L,(-1L),0xD7C4L,0x6E4DL,(-10L),(-6L),0xA9EFL,(-10L)},{(-1L),(-6L),(-10L),(-1L),(-2L),(-2L),(-1L),(-10L),(-6L),(-1L)},{0x483EL,0xEFB2L,9L,0x4175L,1L,(-1L),(-1L),(-10L),1L,0xF724L},{(-1L),0xD25DL,0x8FB0L,0xEFB2L,1L,(-1L),0L,(-1L),(-1L),(-1L)},{1L,(-1L),0x8E57L,(-1L),(-2L),0x8FB0L,0xEC11L,0x5337L,9L,(-10L)},{0L,(-1L),0x483EL,0xF724L,0xA9EFL,(-1L),0xA9EFL,0xF724L,0xD25DL,1L}},{{0xEFB2L,(-10L),9L,0x5337L,0xEC11L,0x8FB0L,(-2L),(-1L),0x8E57L,(-1L)},{(-3L),(-1L),(-1L),0x02BDL,0xF724L,0x8FB0L,(-1L),(-1L),1L,0x483EL},{0xEFB2L,0x6E4DL,0xA9EFL,(-1L),0L,(-1L),(-5L),0x8FB0L,0L,(-1L)},{0x1D12L,0x80ACL,0x5337L,0xA9EFL,(-1L),(-1L),(-1L),(-1L),0xA9EFL,0x5337L},{0xD7C4L,0xD7C4L,(-5L),0x6922L,(-1L),0x4175L,0xB2D4L,(-3L),(-1L),0x6E4DL},{1L,0x63E5L,5L,(-6L),0x8E57L,0xEFB2L,0xB2D4L,(-10L),0x8FB0L,0x4175L}}};
            int i, j, k;
            l_1084 = ((g_44[2] || (g_239 <= (safe_add_func_uint8_t_u_u(func_20((g_8 & 0x593FL), l_1076[1][7][3], l_1079, ((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_239, g_1011)) ^ l_1079), l_1076[1][3][0])) != g_12), g_2), g_226)))) && 0x47DA0050L);
            g_12 = (func_68(g_70) || l_1079);
            g_8 = func_20((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(0x18F14AEDL, (safe_lshift_func_int16_t_s_s(l_1076[0][0][3], g_507)))) < (safe_sub_func_uint16_t_u_u(l_1084, (g_2 | (l_1093 <= (1UL >= ((((safe_unary_minus_func_int32_t_s(((((l_1095 <= ((safe_rshift_func_uint8_t_u_s(l_1076[0][8][2], l_1100[0][0][4])) | 0UL)) != 0x6994L) ^ g_507) && g_226))) || l_1076[2][3][5]) || 0xEE86L) || 0xF5B5L))))))), 0x5BL)), g_73[2], g_2, g_2, l_1076[0][2][3]);
            l_1101[1] = ((g_73[2] != (0xF275L > (l_1062[4] && l_1076[0][3][3]))) < (-1L));
        }
        else
        {
            unsigned l_1117[9] = {0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L,0x3DACF4E6L};
            short l_1118[5] = {0xD802L,0xD802L,0xD802L,0xD802L,0xD802L};
            int l_1121 = 6L;
            int i;
            l_1121 = (((-5L) ^ ((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u(g_336.f0, 5)))) && (g_1105 & 1L)) != 0x8E51L) == ((safe_sub_func_uint32_t_u_u(func_20(((safe_sub_func_int16_t_s_s(0x2D9BL, func_20(func_20(g_166, (((safe_mod_func_uint16_t_u_u(l_1112[0], (safe_add_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u((~g_336.f0), 0x6EL)) | 0x09EF8E51L) || g_73[3]) >= l_1112[0]) == 0x8739L), 0xC9L)))) >= g_119) & l_1117[0]), g_119, l_819, g_32), l_1117[3], g_507, l_1118[3], l_1117[1]))) && g_129), g_73[1], l_1062[2], l_1112[0], l_1119), l_1120)) && 0x7188L))) ^ g_73[3]);
        }
        l_1062[2] = l_1062[2];
        for (g_226 = 5; (g_226 >= 0); g_226 -= 1)
        {
            int l_1129[10];
            unsigned short l_1181 = 6UL;
            union U0 l_1201 = {246UL};
            int l_1204 = 4L;
            char l_1205[9] = {4L,4L,0x56L,4L,4L,0x56L,4L,4L,0x56L};
            char l_1253 = 0xB4L;
            union U0 l_1254 = {0x11L};
            int i;
            for (i = 0; i < 10; i++)
                l_1129[i] = 1L;
            for (g_2 = 4; (g_2 >= 0); g_2 -= 1)
            {
                short l_1210 = (-1L);
                int i;
                if ((safe_rshift_func_uint16_t_u_s(g_73[g_2], ((-2L) >= (g_73[g_2] || g_73[g_2])))))
                {
                    int l_1137 = 0x5231A5C3L;
                    unsigned l_1143 = 1UL;
                    int i;
                    if (((safe_sub_func_int32_t_s_s(0x07ED010DL, l_921[g_154])) > l_921[(g_2 + 1)]))
                    {
                        if (g_119)
                            break;
                        return l_1062[2];
                    }
                    else
                    {
                        char l_1128 = (-10L);
                        int i;
                        l_1062[g_2] = (safe_sub_func_uint8_t_u_u((func_20(l_1128, g_507, func_20(l_1062[2], g_154, g_228.f0, l_1128, g_1011), (l_921[(g_2 + 1)] ^ l_1129[2]), l_1129[2]) >= g_8), g_171));
                        l_1112[2] = ((g_166 || (safe_add_func_uint8_t_u_u(func_20(g_336.f0, (func_20(((safe_mod_func_uint32_t_u_u(func_20(g_73[g_2], func_20(g_166, func_20(g_239, l_1076[1][3][0], l_1128, g_73[g_2], g_171), g_507, g_98, g_73[g_2]), g_73[g_2], g_12, l_1128), g_98)) | g_70.f0), g_98, l_1129[2], g_119, g_171) & l_1134), g_228.f0, l_1101[1], l_1120), 0xB3L))) < 0xD3L);
                        l_1062[0] = g_239;
                        l_1137 = (0UL != ((0x72L != (65527UL & (0x78B88C42L < g_154))) && ((safe_sub_func_uint8_t_u_u(l_1112[3], l_1129[5])) >= (l_1062[g_2] || ((func_20((g_8 | g_336.f0), g_119, g_171, g_129, l_1120) > 0xC9EBL) | 0x5B25L)))));
                    }
                    for (l_1095 = 5; (l_1095 >= 0); l_1095 -= 1)
                    {
                        unsigned char l_1138 = 0x6AL;
                        l_1062[2] = (func_20(g_2, g_1105, ((func_20(g_98, l_1129[2], g_73[0], g_166, func_20((+(g_73[g_2] && l_1112[0])), ((g_226 && g_166) | l_921[2]), l_1061, l_1138, g_171)) <= 4294967293UL) & g_226), l_1120, l_1138) > g_73[g_2]);
                    }
                    for (g_119 = 0; (g_119 <= 5); g_119 += 1)
                    {
                        int l_1159 = 0x8557447CL;
                        if (l_908)
                            break;
                        g_12 = 4L;
                        l_1156 = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1143, ((safe_sub_func_int16_t_s_s(func_68(g_228), (safe_lshift_func_uint8_t_u_s(l_1129[7], 0)))) < (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(g_119, l_908)), l_1129[5]))))), (safe_lshift_func_int16_t_s_u((l_1119 ^ ((safe_sub_func_uint32_t_u_u(g_8, 0x4330F2B4L)) | g_166)), g_8))));
                        l_1137 = ((safe_sub_func_int16_t_s_s(l_1101[1], l_1129[2])) >= func_20(g_32, (l_1159 >= l_1062[4]), g_8, g_166, l_1062[2]));
                    }
                    if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((g_73[0] && (safe_rshift_func_int16_t_s_u(g_73[g_2], g_73[g_2]))), func_20((((safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((l_1112[0] == (g_171 && (l_1062[1] && l_1076[1][3][0]))) < 4294967291UL), (l_921[(g_2 + 1)] ^ g_73[4]))) & g_32), 0xC2L)) | g_239) | g_12), l_921[g_154], l_921[2], g_46, g_171))), l_1143)))
                    {
                        short l_1170 = 0x2031L;
                        g_8 = l_1170;
                        l_1171 = 0x0AF88CC6L;
                        g_12 = g_119;
                        if (l_1170)
                            continue;
                    }
                    else
                    {
                        g_8 = g_1011;
                        l_1112[0] = (safe_add_func_int32_t_s_s(g_73[g_2], func_20((func_20(g_119, l_1129[2], l_1129[2], (g_239 ^ func_20((safe_rshift_func_uint8_t_u_s((l_921[(g_2 + 1)] == (safe_add_func_int8_t_s_s(((!((safe_mod_func_uint16_t_u_u(((func_20(((g_12 < 0xF9156575L) <= g_32), g_98, g_73[3], g_32, l_1137) > 252UL) > l_1180), g_32)) <= g_166)) <= l_1143), l_1181))), 0)), g_507, g_507, l_7, g_12)), l_1171) & g_70.f0), g_1011, l_1171, g_129, l_1181)));
                        return g_44[3];
                    }
                }
                else
                {
                    g_12 = (((g_119 | g_73[g_2]) == func_20(g_73[g_2], g_171, ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((g_8 == l_1061), 1)) == ((0xF2L && l_819) < (((g_336.f0 && 1UL) ^ l_1101[1]) >= l_1188))), g_32)) == 0x480CC2D2L), l_1076[1][3][0])) == 0x69E4L), g_46, g_73[g_2])) || 0xAEL);
                }
                for (g_507 = 0; (g_507 <= 3); g_507 += 1)
                {
                    int i;
                    return g_73[g_507];
                }
                if (func_20(g_73[g_2], func_20(g_73[4], (g_70.f0 | (safe_rshift_func_int8_t_s_s((~(safe_lshift_func_int16_t_s_s(((func_20((safe_rshift_func_uint8_t_u_u(l_1188, ((safe_mod_func_int16_t_s_s(0xA616L, (func_20(g_727, g_46, (safe_sub_func_uint32_t_u_u(l_1101[2], ((((-7L) <= g_8) >= 0xE916L) | g_507))), l_908, l_1095) ^ g_8))) | 1L))), g_154, g_171, l_959, g_228.f0) || 6L) | 255UL), 7))), 1))), g_1011, l_1129[2], l_1120), l_1199[6], l_1199[3], g_73[g_2]))
                {
                    const unsigned short l_1200 = 0xC9F8L;
                    if ((g_12 ^ l_1200))
                    {
                        g_12 = func_68(l_1201);
                        l_1204 = (safe_lshift_func_int16_t_s_s(func_68(g_70), 2));
                        g_8 = ((((func_68(g_70) <= (l_1205[0] < g_119)) >= g_166) && (safe_add_func_uint32_t_u_u(0xDBB38A52L, (l_819 >= func_20(g_239, (((((safe_sub_func_int16_t_s_s(l_959, g_154)) != l_1200) > g_336.f0) > g_46) != l_1210), l_1200, g_239, l_1062[2]))))) != g_129);
                        g_8 = (l_1188 || (!(0x66AA1EA9L ^ ((((g_2 <= (l_1101[1] < (((func_68(g_70) && ((safe_sub_func_int8_t_s_s(((func_68(l_1213) | l_1200) == g_119), g_239)) ^ g_1105)) || g_507) <= g_119))) | g_154) < g_226) == g_8))));
                    }
                    else
                    {
                        g_12 = func_20((g_226 || (g_129 != (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(0xFBF3L, 5)))), ((g_171 >= func_68(l_1221)) < (safe_rshift_func_int8_t_s_s(l_1062[2], 4))))), l_1210)))), l_1129[2], l_1200, g_119, g_171);
                    }
                    g_12 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(func_20(l_1112[0], g_73[g_2], g_8, g_226, g_226), 6)) & ((~(safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_12, (((0xA7A32686L != 5UL) != l_1204) && g_98))), l_1205[3])) != 65535UL), l_1204)) < g_166), g_166))) > 0L)), l_1062[2])), g_73[g_2]));
                    for (g_8 = 0; (g_8 <= 3); g_8 += 1)
                    {
                        int i;
                        l_1112[g_8] = l_1200;
                    }
                    for (l_1210 = 1; (l_1210 <= 8); l_1210 += 1)
                    {
                        unsigned l_1246[8] = {0x9875A2C6L,0x9875A2C6L,0x590BB923L,0x9875A2C6L,0x9875A2C6L,0x590BB923L,0x9875A2C6L,0x9875A2C6L};
                        int i;
                        l_1062[g_2] = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((0xE6L >= (0x7968L < 0x4F6FL)) || 1UL), (~(0x81L >= (safe_rshift_func_uint16_t_u_u(((l_1205[l_1210] ^ 0x90L) ^ (safe_sub_func_uint16_t_u_u(((((l_1205[(g_154 + 3)] != (g_44[4] | l_1171)) || l_921[2]) > l_1134) || l_1181), 9UL))), g_1105)))))), 0xB505AC89L)) | l_1246[2]);
                        l_1204 = ((g_46 > (g_119 == func_68(l_1213))) && l_1200);
                        l_959 = (safe_add_func_uint8_t_u_u((l_1200 < (safe_sub_func_int8_t_s_s((-4L), g_73[g_2]))), (l_1180 >= ((((l_1061 > func_20(g_171, g_119, ((safe_mod_func_int32_t_s_s(func_20(l_1129[2], ((0UL ^ l_1062[3]) > g_8), g_73[3], g_32, l_1246[7]), g_171)) && g_73[g_2]), l_1129[8], g_73[g_2])) > 0x569BL) > g_166) == 3L))));
                    }
                }
                else
                {
                    g_12 = (l_1253 ^ (func_68(l_1254) ^ (-1L)));
                }
            }
        }
    }
    return l_1255;
}







static int func_5(const int p_6)
{
    int l_19 = 0x6EAB3AE5L;
    char l_267 = (-5L);
    unsigned l_734 = 0x727D20B4L;
    for (g_8 = (-8); (g_8 >= 10); g_8++)
    {
        unsigned l_11[3][5][10] = {{{0xAA53F0D3L,0UL,0xFC36FE5AL,0x50678E04L,4294967287UL,4294967291UL,4294967289UL,1UL,0x8819570AL,0x50678E04L},{4294967291UL,4294967295UL,2UL,1UL,0xDCEFBDE2L,9UL,0xCF04B064L,0xCF04B064L,9UL,0xDCEFBDE2L},{0x8B8AE505L,0xAA53F0D3L,0xAA53F0D3L,0x8B8AE505L,0x50678E04L,0x8819570AL,1UL,4294967289UL,4294967291UL,4294967287UL},{0x8C08872FL,7UL,0x50678E04L,0x8BFFBEFAL,0x06C0E263L,0x641B44ADL,0xAA53F0D3L,1UL,4294967291UL,0xAA53F0D3L},{0xCF04B064L,0xF9C71042L,0x74B6046EL,0x8B8AE505L,0xF9C71042L,0x3E34B64BL,0xDCEFBDE2L,0UL,9UL,0UL}},{{7UL,0xFC36FE5AL,0x8C08872FL,1UL,0x8C08872FL,0xFC36FE5AL,7UL,0x101AAE4BL,0x8819570AL,4294967287UL},{0x8BFFBEFAL,4294967287UL,4294967289UL,0x50678E04L,4294967291UL,4294967289UL,0x8819570AL,7UL,0x641B44ADL,0x101AAE4BL},{0xCF04B064L,4294967287UL,1UL,0xF9C71042L,0xDCEFBDE2L,0x289A6957L,7UL,4294967287UL,0x3E34B64BL,4294967291UL},{0x06C0E263L,0xFC36FE5AL,0x8BFFBEFAL,0xDCEFBDE2L,0x8819570AL,0x8819570AL,0xDCEFBDE2L,0x8BFFBEFAL,0xFC36FE5AL,0x06C0E263L},{0xFC36FE5AL,0xF9C71042L,4294967289UL,1UL,0x641B44ADL,0xC6EED1E1L,0x289A6957L,0x8BFFBEFAL,1UL,0x3E34B64BL}},{{0x8C08872FL,0xAA53F0D3L,0xDCEFBDE2L,4294967289UL,0x641B44ADL,0x8B8AE505L,0xFC36FE5AL,0x641B44ADL,0xCF04B064L,0x101AAE4BL},{0x641B44ADL,0x289A6957L,2UL,0x8C08872FL,8UL,0x74B6046EL,0x8819570AL,0x74B6046EL,8UL,0x8C08872FL},{9UL,4294967291UL,9UL,0x74B6046EL,0x8BFFBEFAL,0xC6EED1E1L,1UL,0x8819570AL,0xC6EED1E1L,1UL},{0x50678E04L,0x641B44ADL,0xF9C71042L,0x50678E04L,0x8C08872FL,4294967295UL,0xFC36FE5AL,0x8819570AL,0x8B8AE505L,4294967295UL},{0x101AAE4BL,0x3BC1B0FEL,9UL,0xAA53F0D3L,0xC6EED1E1L,0x3E34B64BL,0x641B44ADL,0x74B6046EL,0x74B6046EL,0x641B44ADL}}};
        int i, j, k;
        for (g_12 = 2; (g_12 >= 0); g_12 -= 1)
        {
            return p_6;
        }
    }
    l_19 = func_13((l_19 & (0L <= ((func_20((safe_add_func_int8_t_s_s(((((0x6232C2A4L && (p_6 >= (safe_lshift_func_int8_t_s_s((func_30(((p_6 >= (l_19 < g_32)) == (func_33(p_6, func_39(((0L < g_8) | 0x03L)), l_267, p_6, l_267) != p_6))) <= p_6), l_267)))) ^ p_6) < g_2) < 0UL), l_19)), p_6, p_6, p_6, p_6) == 1L) || p_6))), g_44[4], g_44[0], p_6, l_19);
    if ((g_226 | 0x5D6AL))
    {
        return g_166;
    }
    else
    {
        char l_730 = 0x53L;
        g_8 = ((safe_add_func_int16_t_s_s(p_6, l_730)) < (l_730 || g_171));
        g_12 = (l_730 ^ g_2);
        l_19 = (2UL != (65528UL < func_20((((p_6 <= l_730) == (0xF3L != p_6)) != (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(0UL)), p_6))), l_734, p_6, l_730, g_228.f0)));
    }
    l_19 = ((2L && 0xF9L) < g_507);
    return l_734;
}







static int func_13(char p_14, unsigned short p_15, short p_16, unsigned p_17, int p_18)
{
    unsigned short l_449 = 0x7DF1L;
    const unsigned short l_454 = 0x0189L;
    int l_457 = 0x20EEF1A4L;
    short l_506 = 0xC3D9L;
    union U0 l_510 = {255UL};
    int l_521[7] = {0xAAC8FB9AL,0xAAC8FB9AL,0xAAC8FB9AL,0xAAC8FB9AL,0xAAC8FB9AL,0xAAC8FB9AL,0xAAC8FB9AL};
    char l_546 = (-6L);
    unsigned l_579[7];
    int i;
    for (i = 0; i < 7; i++)
        l_579[i] = 8UL;
    l_449 = (safe_mod_func_uint32_t_u_u(p_15, 0x4116E09BL));
    for (g_154 = 0; (g_154 <= 13); g_154 = safe_add_func_uint16_t_u_u(g_154, 1))
    {
        int l_452 = 0xB7DB1FACL;
        char l_461[7][6] = {{6L,1L,1L,0xCFL,1L,(-5L)},{0xD5L,6L,1L,1L,0xC4L,(-5L)},{0xC4L,0xD5L,1L,0x79L,0x79L,1L},{0xC4L,0xC4L,0xADL,1L,(-1L),0xD1L},{0xD5L,0xC4L,0x41L,0xCFL,0x79L,0xADL},{6L,6L,(-5L),(-1L),0x79L,0x41L},{0xD5L,(-1L),1L,(-1L),0xD5L,0xD1L}};
        union U0 l_523 = {7UL};
        char l_547[6][7] = {{0xA9L,0x59L,0xA9L,1L,1L,0xA9L,0x59L},{1L,0x59L,0x5EL,0x5EL,0x59L,1L,0x59L},{0xA9L,1L,1L,0xA9L,0x59L,0xA9L,1L},{9L,9L,1L,0x5EL,1L,9L,9L},{9L,1L,0x5EL,1L,9L,9L,1L},{0xA9L,0x59L,0xA9L,1L,1L,0xA9L,0x59L}};
        int i, j;
        l_452 = (p_17 || 0x33L);
        for (p_18 = 3; (p_18 >= 1); p_18 -= 1)
        {
            unsigned l_453 = 5UL;
            int l_462[3][2][3] = {{{(-5L),(-5L),0x5734132EL},{0x3CB9FE37L,0x3CB9FE37L,0x77BC7D45L}},{{(-5L),(-5L),0x5734132EL},{0x3CB9FE37L,0x3CB9FE37L,0x77BC7D45L}},{{(-5L),(-5L),0x5734132EL},{0x3CB9FE37L,0x3CB9FE37L,0x77BC7D45L}}};
            int i, j, k;
            for (g_228.f0 = 0; (g_228.f0 <= 4); g_228.f0 += 1)
            {
                int i;
                return g_44[(g_228.f0 + 1)];
            }
            if ((func_20(p_14, l_452, l_453, p_14, (0xF02CL | (+l_454))) < func_20(p_15, (p_15 || 0x09L), g_46, g_228.f0, p_15)))
            {
                int l_458 = 0x48600ED8L;
                if (l_452)
                    break;
                for (g_8 = 0; (g_8 <= 6); g_8 += 1)
                {
                    for (p_16 = 2; (p_16 <= 6); p_16 += 1)
                    {
                        int l_456 = 0x915692EBL;
                        int i;
                        l_456 = (safe_unary_minus_func_int8_t_s((g_44[g_8] ^ g_73[(p_18 + 1)])));
                    }
                    for (g_98 = 0; (g_98 <= 6); g_98 += 1)
                    {
                        int i;
                        l_457 = g_44[(p_18 + 1)];
                    }
                }
                return l_458;
            }
            else
            {
                l_452 = p_18;
                if (p_14)
                    continue;
            }
            for (g_46 = 0; (g_46 <= 4); g_46 += 1)
            {
                int l_459 = (-10L);
                int i;
                l_459 = g_44[(p_18 + 1)];
            }
            if (g_129)
            {
                int l_460 = 3L;
                int l_483 = 0L;
                l_462[0][0][0] = func_20(p_17, func_20(g_166, g_129, g_166, l_454, p_15), l_460, (func_20(g_46, l_461[5][5], g_239, g_70.f0, p_17) < 0xF06FL), g_226);
                l_452 = ((g_239 != p_15) >= func_20((7UL | l_457), l_460, p_15, (safe_sub_func_int8_t_s_s(p_17, (((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(((l_462[1][0][0] ^ ((safe_rshift_func_uint8_t_u_s(0x17L, g_129)) || 1UL)) >= 4294967295UL), p_17)) >= 0xB977L) >= p_18), 5)) != p_18) & 0xA363L))), g_32));
                for (g_98 = 0; (g_98 <= 4); g_98 += 1)
                {
                    short l_471 = 0x2996L;
                    union U0 l_482 = {247UL};
                    l_457 = (l_471 <= func_20((((safe_sub_func_int8_t_s_s(0L, (safe_add_func_int32_t_s_s(((func_20(((g_44[5] >= ((p_15 > p_16) ^ (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(4294967293UL, (safe_lshift_func_int8_t_s_u(func_68(l_482), 0)))), g_98)))) && 0x7F0C31D8L), g_129, p_15, p_18, p_15) < 5UL) || 0xF1L), l_453)))) <= 0x64446AC5L) == (-1L)), g_46, l_483, p_16, p_14));
                    if (g_119)
                        break;
                }
            }
            else
            {
                unsigned l_484 = 0x1D2A51F5L;
                int l_487 = (-1L);
                g_8 = func_20(l_453, p_18, l_453, ((g_226 < (l_484 >= 4L)) == g_228.f0), g_70.f0);
                l_487 = (func_20(p_16, g_171, p_17, (safe_add_func_uint16_t_u_u((0x345F7949L >= (-3L)), (p_15 & p_17))), ((((0x7D93L < p_18) && g_129) != 8UL) && g_228.f0)) > g_228.f0);
                for (g_129 = 1; (g_129 <= 6); g_129 += 1)
                {
                    int i, j;
                    l_462[0][0][0] = (safe_add_func_uint32_t_u_u(l_461[p_18][p_18], (((safe_rshift_func_int8_t_s_s((g_119 ^ ((l_484 < ((safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(g_70.f0, p_15)) <= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_15, (safe_add_func_int8_t_s_s(g_154, (func_20((((safe_sub_func_int16_t_s_s(func_20(g_32, (safe_mod_func_int8_t_s_s(p_14, l_452)), p_16, g_32, p_17), 7UL)) == l_462[2][1][1]) >= p_15), g_239, l_454, g_46, l_449) > 0x608A87D9L))))), l_506))) == 4294967295UL), l_462[0][0][0])) && p_16)) | p_15)), 7)) != g_166) | p_14)));
                }
            }
        }
        if (p_15)
        {
            unsigned l_512 = 18446744073709551613UL;
            int l_552 = (-9L);
            char l_672[5][6][8] = {{{0xDFL,0xDFL,0xB3L,(-9L),0x07L,(-8L),0x2AL,0x87L},{9L,0xA6L,0x7CL,0xE8L,1L,0x9AL,0x7EL,0x87L},{0xA6L,5L,(-1L),(-9L),0xF7L,0xBDL,0xA6L,(-7L)},{0xCAL,0x8FL,0x87L,9L,0xE8L,(-9L),1L,0x21L},{0xB3L,0xB2L,1L,(-1L),0x8FL,6L,0x36L,0x8FL},{0x21L,0xCEL,0xC5L,0x21L,(-1L),(-7L),5L,(-8L)}},{{0x7CL,(-5L),1L,(-1L),1L,0x74L,0xF7L,0x7CL},{0x02L,5L,0x72L,0x61L,0x7EL,0x61L,0x72L,5L},{0xBDL,0xCEL,6L,(-1L),1L,0x7FL,0x7CL,0x02L},{0x9AL,0x21L,5L,0xE8L,0xBDL,(-9L),0x7CL,0xF0L},{(-8L),0xE8L,6L,0x7FL,0xE8L,(-1L),0x72L,0xCAL},{0xE8L,(-1L),0x72L,0xCAL,0x61L,6L,0xF7L,0xB3L}},{{0xCAL,0x7CL,1L,0xB2L,(-5L),1L,5L,0x21L},{0x92L,0xBDL,0xC5L,0x7FL,(-1L),6L,0x36L,0x7CL},{5L,(-5L),1L,0x3EL,(-8L),(-7L),1L,0x02L},{0x87L,0x21L,0x8FL,9L,9L,0x8FL,0x21L,0x87L},{(-1L),(-7L),6L,0xCEL,(-1L),(-4L),(-8L),0xB2L},{0xFBL,0x92L,0x61L,0xE8L,0xCEL,(-4L),0xF7L,(-8L)}},{{0x7CL,(-7L),0xDFL,0x7EL,0xF0L,0x8FL,0xE8L,0x9AL},{(-8L),0x21L,(-1L),(-4L),1L,0x92L,6L,0x7EL},{0x21L,6L,(-8L),0x3EL,0x36L,0x7FL,0x3EL,(-1L)},{1L,0x87L,0xDFL,0xF0L,5L,0x8DL,9L,(-1L)},{1L,0xCAL,(-7L),0x36L,0xF7L,0x61L,(-8L),0x87L},{0xB2L,5L,0x72L,0x7CL,0x72L,5L,0xB2L,(-1L)}},{{0xFBL,0x9AL,0x8FL,0x8FL,0x7CL,0L,(-1L),0xFBL},{0xC5L,(-7L),6L,(-4L),0x7CL,(-7L),0xB3L,0x7CL},{0xFBL,(-8L),(-1L),0xFBL,0x72L,0xCEL,0x87L,0x8DL},{0xB3L,5L,0x3EL,0x72L,(-1L),5L,1L,(-7L)},{0L,(-4L),8L,0xEDL,(-1L),0x87L,5L,(-4L)},{(-4L),1L,0x74L,(-5L),(-2L),0xA7L,(-7L),0L}}};
            int i, j, k;
            for (g_336.f0 = 0; (g_336.f0 <= 6); g_336.f0 += 1)
            {
                unsigned l_511 = 0xFCE80095L;
                union U0 l_534 = {0UL};
                for (g_171 = 2; (g_171 <= 6); g_171 += 1)
                {
                    int l_513 = 0xFBFB0B1CL;
                    int i;
                    g_12 = g_44[g_171];
                    if (p_15)
                        continue;
                    l_513 = (((!g_507) || (0x20300EDCL || (func_20(p_14, (safe_rshift_func_uint16_t_u_u(func_68(l_510), 8)), l_511, g_336.f0, l_512) >= l_513))) | (-1L));
                }
                if ((0x7DE8L == 0x5318L))
                {
                    unsigned l_522[5] = {0xF0DBF80FL,0xF0DBF80FL,0xF0DBF80FL,0xF0DBF80FL,0xF0DBF80FL};
                    int i;
                    g_8 = l_506;
                    for (l_506 = (-17); (l_506 != 12); l_506 = safe_add_func_uint8_t_u_u(l_506, 9))
                    {
                        return g_129;
                    }
                    l_522[0] = ((0x4158L || (g_228.f0 <= (((safe_mod_func_uint32_t_u_u(p_14, (safe_unary_minus_func_int16_t_s(g_336.f0)))) < (l_452 || (safe_sub_func_uint8_t_u_u(((p_16 | l_521[3]) <= p_15), g_98)))) & g_119))) >= l_452);
                    g_12 = func_68(l_523);
                }
                else
                {
                    int l_539[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_539[i] = 0xF1F278ABL;
                    g_226 = func_20(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_46, (p_15 < g_166))), 4)) != ((0xCE70L <= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(func_68(l_534), (safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(7L, p_17)) == (((l_539[6] == 0x18L) || g_228.f0) >= p_18)), g_12)))), g_8)) && 65533UL), 11))) | g_44[4])), l_534.f0, l_452, p_14, g_12);
                    g_226 = (l_454 <= ((func_20(l_523.f0, l_510.f0, (0x84L < (g_32 | p_14)), p_17, g_336.f0) || p_16) <= l_523.f0));
                    for (p_15 = 0; (p_15 <= 6); p_15 = safe_add_func_uint32_t_u_u(p_15, 5))
                    {
                        l_546 = func_20(p_15, ((safe_rshift_func_int16_t_s_u(8L, 9)) && 0x7A56L), ((safe_lshift_func_int8_t_s_u(((func_68(g_70) != ((((g_228.f0 <= p_15) | l_452) >= g_166) > g_507)) | g_336.f0), 7)) != 0x99L), g_239, p_18);
                        l_547[3][5] = (func_20(g_44[6], p_18, func_68(l_534), l_506, (l_534.f0 <= l_534.f0)) >= g_12);
                    }
                }
                for (g_119 = (-20); (g_119 < 18); g_119++)
                {
                    const unsigned l_555 = 0UL;
                    for (g_129 = (-4); (g_129 == 10); g_129 = safe_add_func_int32_t_s_s(g_129, 1))
                    {
                        g_226 = (l_461[5][5] <= l_457);
                        l_552 = 0x04DB1782L;
                    }
                    for (p_18 = 0; (p_18 > (-27)); p_18 = safe_sub_func_int16_t_s_s(p_18, 5))
                    {
                        if (l_555)
                            break;
                    }
                }
            }
            g_12 = p_15;
            l_552 = ((safe_sub_func_uint16_t_u_u(p_17, g_32)) <= ((((safe_mod_func_int8_t_s_s(func_68(g_228), (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((g_154 != l_547[3][5]), (p_15 <= p_17))), (((g_336.f0 && l_552) <= l_512) <= g_2))))) ^ p_16) & 4294967295UL) <= 3L));
            if ((safe_lshift_func_int16_t_s_u(func_20(l_547[3][5], g_239, ((0x8831L & (g_129 && func_68(l_523))) | (-1L)), ((l_512 < g_166) > g_12), g_12), p_14)))
            {
                for (l_457 = 0; l_457 < 6; l_457 += 1)
                {
                    for (g_12 = 0; g_12 < 7; g_12 += 1)
                    {
                        l_547[l_457][g_12] = 0x60L;
                    }
                }
                if (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((func_68(l_523) && (((safe_lshift_func_int16_t_s_s(g_228.f0, func_20(g_154, p_15, (+p_15), ((safe_unary_minus_func_int8_t_s((((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((p_18 ^ 0x4A9BL), 0)) < (-2L)), l_579[2])) > 0x3004L) <= g_226))) <= 0x85BA5771L), g_129))) || 4294967287UL) <= 0x20L)) != p_15), 13)), g_46)) ^ l_547[3][5]))
                {
                    short l_582[9][4][5] = {{{1L,0xFAD0L,(-4L),3L,1L},{0x3A65L,(-10L),(-10L),0x3A65L,0L},{1L,(-9L),1L,0x114CL,0x3A65L},{3L,0xFAD0L,0x37E8L,1L,0x6BC9L}},{{0x2408L,(-1L),0xCAE8L,0x114CL,0x6BF6L},{0xDB5EL,0xB5E9L,7L,0x3A65L,0L},{(-1L),5L,1L,3L,(-10L)},{0x2408L,0xCAE8L,0L,(-9L),8L}},{{0xB5E9L,0x114CL,0xAAD0L,(-10L),0xC47EL},{0x37E8L,1L,(-1L),0L,0xC47EL},{0x3A65L,0x1455L,0xCAE8L,0x6BC9L,8L},{0xB291L,0x6BC9L,0x1572L,0x403BL,(-10L)}},{{9L,0L,5L,5L,0L},{(-10L),1L,0x6BF6L,0xB5E9L,5L},{0xDB5EL,0x2408L,0x4CF8L,0x6BC9L,1L},{8L,0L,(-4L),0x37E8L,7L}},{{0xDB5EL,8L,0xCAE8L,0xD573L,(-1L)},{(-10L),0x5516L,0x3963L,0L,0xC47EL},{0xB802L,0x403BL,(-4L),0x6BF6L,0xFAD0L},{0xFAD0L,(-1L),1L,0x5516L,1L}},{{7L,0x114CL,(-10L),7L,0xDB5EL},{1L,0x114CL,3L,5L,7L},{0x5516L,(-1L),1L,0x3A65L,0x37E8L},{0xB5E9L,0x403BL,9L,0x2408L,0x2408L}},{{9L,0x5516L,9L,0xCAE8L,(-9L)},{0x403BL,8L,0x56E6L,0x5516L,(-4L)},{0xB5E9L,0L,7L,0x114CL,(-10L)},{0x9713L,0x2408L,0x56E6L,(-4L),0x3A65L}},{{0xC47EL,1L,9L,0xD573L,0x56E6L},{7L,(-9L),9L,1L,(-10L)},{0L,1L,1L,0xB802L,0L},{0x6BC9L,(-10L),3L,0xB5E9L,(-10L)}},{{(-10L),1L,1L,0x56E6L,1L},{0xBEFFL,1L,0xE48CL,0L,(-4L)},{(-10L),0x8454L,1L,(-4L),7L},{0L,(-10L),0xDB5EL,(-10L),0L}}};
                    int l_597 = 1L;
                    int i, j, k;
                    l_597 = (safe_lshift_func_uint16_t_u_s((((l_461[4][1] < (65535UL != func_20(l_582[6][3][1], g_129, (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_239, func_68(g_228))) | ((safe_lshift_func_int8_t_s_s(p_15, 7)) && (safe_lshift_func_int16_t_s_s(g_239, p_18)))), 1UL)), 0L)) | g_98), p_15)) != 0x18L), 13)), p_16, l_582[1][3][1]))) && p_14) > 65528UL), l_512));
                    for (g_129 = 0; (g_129 >= 16); g_129 = safe_add_func_int8_t_s_s(g_129, 2))
                    {
                        l_521[3] = ((safe_rshift_func_uint8_t_u_s(l_582[6][3][1], 6)) ^ (+g_171));
                        return p_15;
                    }
                    if (p_18)
                        continue;
                }
                else
                {
                    int l_606[9][1] = {{0x57AD20DEL},{0xC9A61A53L},{0xC9A61A53L},{0x57AD20DEL},{0xC9A61A53L},{0xC9A61A53L},{0x57AD20DEL},{0xC9A61A53L},{0xC9A61A53L}};
                    int i, j;
                    if (l_449)
                    {
                        int l_621 = 0xD16D8549L;
                        l_552 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((g_336.f0 | l_606[1][0]), g_154)), (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_20((func_20(l_579[4], g_228.f0, (((g_154 != func_68(l_523)) > p_17) ^ (-1L)), g_228.f0, g_46) | l_552), g_8, g_228.f0, g_336.f0, g_98), l_606[6][0])), p_17))));
                        if (p_14)
                            continue;
                        g_226 = ((((l_452 | 0xD87DL) ^ (safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(l_461[5][4], ((0x93L ^ (safe_rshift_func_int16_t_s_u((-5L), 12))) && (g_119 ^ func_68(l_523))))) >= (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(1L, l_621)), 14))), g_239))) <= l_512) >= p_15);
                    }
                    else
                    {
                        return p_14;
                    }
                    if (l_579[3])
                        break;
                    if (g_98)
                        continue;
                }
                l_452 = (l_512 & 1UL);
            }
            else
            {
                unsigned short l_651 = 65535UL;
                int l_663 = 0x6DECFF41L;
                for (p_15 = 26; (p_15 != 1); p_15--)
                {
                    short l_636 = 0xEF39L;
                    for (l_546 = 6; (l_546 >= (-6)); l_546 = safe_sub_func_uint32_t_u_u(l_546, 7))
                    {
                        int l_637 = 0x27E7A8C1L;
                        l_637 = (((((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((l_552 >= 0x6E0EL), g_2)) < (!(g_2 | 0L))), 1)) == (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_636, ((g_239 & 0xE77CL) >= (+((func_68(g_336) < g_32) <= 65535UL))))), 251UL))), p_16)) <= 0L) >= g_171) != p_15) | g_226);
                        if (p_14)
                            break;
                    }
                }
                l_452 = g_12;
                for (l_452 = (-20); (l_452 == (-24)); l_452 = safe_sub_func_int16_t_s_s(l_452, 6))
                {
                    for (g_228.f0 = (-8); (g_228.f0 < 48); g_228.f0++)
                    {
                        int l_644[8] = {4L,4L,4L,4L,4L,4L,4L,4L};
                        int i;
                        g_8 = (safe_rshift_func_int8_t_s_s((l_552 >= (((((l_644[1] || 0xFBL) || (0UL >= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_15, 15)), l_457)), func_68(g_336))))) & (p_14 & 0UL)) == l_651) > 0xD5L)), l_521[3]));
                        g_8 = ((safe_add_func_uint8_t_u_u((func_68(g_228) != p_15), ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((0x90E3L & g_239) && (safe_sub_func_uint32_t_u_u(g_171, l_449))), 0xDD38L)), 6)) > ((safe_add_func_uint8_t_u_u(0x5CL, l_644[1])) == 0L)))) == p_16);
                        g_226 = g_154;
                    }
                    l_663 = (g_44[4] > (safe_unary_minus_func_int32_t_s(g_171)));
                    g_8 = (safe_sub_func_int32_t_s_s((-10L), (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_20((safe_rshift_func_uint16_t_u_s(g_12, 1)), g_171, (g_166 && (~((1UL || ((0xC3B8L < 0x384EL) < 9L)) <= g_46))), l_547[2][5], l_672[3][1][3]), 0xD03E6DC0L)), 10))));
                }
            }
        }
        else
        {
            int l_675 = 0x263F547DL;
            l_521[5] = (g_44[3] <= (g_98 > l_521[3]));
            for (g_46 = (-28); (g_46 >= 41); ++g_46)
            {
                l_457 = g_12;
                return l_675;
            }
            if (p_17)
            {
                for (g_507 = 0; (g_507 > 51); g_507 = safe_add_func_int8_t_s_s(g_507, 9))
                {
                    l_452 = g_12;
                    g_226 = p_16;
                }
            }
            else
            {
                for (g_98 = 0; (g_98 > 35); g_98 = safe_add_func_int8_t_s_s(g_98, 2))
                {
                    g_226 = (((l_547[1][6] > (g_226 >= ((safe_add_func_int8_t_s_s(((g_171 >= (p_17 == (safe_lshift_func_int8_t_s_u((p_17 | 0xEFL), 3)))) || ((safe_mod_func_uint8_t_u_u(((g_44[0] && l_523.f0) & ((safe_add_func_uint8_t_u_u(p_17, l_506)) == 0L)), g_507)) != p_17)), p_16)) && l_547[3][5]))) && g_239) <= l_546);
                }
                return p_14;
            }
            if (l_675)
                continue;
        }
    }
    if (((~p_16) < ((((safe_sub_func_int32_t_s_s(func_33(g_46, (safe_lshift_func_uint8_t_u_u((p_14 & (g_507 ^ ((safe_rshift_func_uint8_t_u_s(0xC8L, 4)) < (g_129 >= func_68(g_336))))), (~l_449))), g_226, g_226, g_154), l_506)) >= p_14) >= l_454) == g_44[0])))
    {
        unsigned char l_702[9][9][3] = {{{1UL,0x3AL,0x89L},{254UL,5UL,0xB0L},{0UL,5UL,0x73L},{4UL,0x3AL,0x5BL},{0x8AL,247UL,0x22L},{251UL,0x25L,0xE3L},{0x3AL,246UL,0UL},{2UL,0x43L,0x73L},{1UL,0xA1L,0x25L}},{{2UL,253UL,0x3AL},{0x3AL,0x22L,0x13L},{251UL,0x89L,1UL},{0x8AL,246UL,0UL},{4UL,0UL,253UL},{0UL,0UL,253UL},{254UL,0x82L,0UL},{1UL,1UL,1UL},{0xB0L,0x5BL,0x13L}},{{0x74L,0x4AL,0x3AL},{0x02L,2UL,0xB8L},{0x02L,0xB5L,0UL},{0UL,0x73L,255UL},{4UL,0xB0L,0x13L},{0xB9L,0x18L,0x25L},{8UL,0x3AL,0x18L},{0xB0L,1UL,0xE3L},{1UL,249UL,1UL}},{{1UL,0x22L,0x43L},{0xB0L,0x4AL,0UL},{8UL,0x43L,0UL},{0xB9L,0x25L,0UL},{4UL,0x9FL,247UL},{0UL,253UL,0xA1L},{0x02L,0UL,247UL},{255UL,0x82L,0UL},{0x51L,0xB8L,0UL}},{{0x34L,246UL,0UL},{0x3AL,0x89L,0x43L},{0x74L,0UL,1UL},{0xCCL,0UL,0xE3L},{0x49L,0x89L,0x18L},{0xB5L,246UL,0x25L},{251UL,0xB8L,0x13L},{0xE0L,0x82L,255UL},{255UL,0UL,0UL}},{{248UL,253UL,0xB8L},{255UL,0x9FL,0x89L},{0xE0L,0x25L,0UL},{251UL,0x43L,0x3AL},{0xB5L,0x4AL,0x22L},{0x49L,0x22L,0x9FL},{0xCCL,0xB8L,0xDCL},{249UL,0xF0L,254UL},{5UL,2UL,2UL}},{{0xE3L,0x29L,0x11L},{246UL,0xDEL,0xBFL},{246UL,0x00L,0x7EL},{247UL,0xA9L,0xA8L},{0x13L,0x00L,7UL},{0UL,0xDEL,0xD3L},{0x4AL,0x29L,0xD6L},{0UL,2UL,0x29L},{0x73L,0xF0L,252UL}},{{0UL,0xB8L,0UL},{0UL,254UL,3UL},{0x73L,0x9BL,2UL},{0UL,3UL,1UL},{0x4AL,0xD6L,2UL},{0UL,0xDCL,3UL},{0x13L,0x22L,7UL},{247UL,247UL,3UL},{246UL,249UL,2UL}},{{246UL,0x7EL,1UL},{0xE3L,0x5DL,2UL},{5UL,0xBFL,3UL},{249UL,1UL,0UL},{0UL,1UL,252UL},{0x22L,0xBFL,0x29L},{0xB8L,0x5DL,0xD6L},{253UL,0x7EL,0xD3L},{0UL,249UL,7UL}}};
        unsigned l_717 = 1UL;
        int l_718 = 0L;
        int i, j, k;
        g_12 = (+((65535UL || p_17) == g_171));
        for (g_98 = 1; (g_98 <= 6); g_98 += 1)
        {
            int l_705 = 0L;
            int i;
            l_521[g_98] = (((((safe_rshift_func_int16_t_s_s((l_521[g_98] >= ((!g_154) == (safe_add_func_int32_t_s_s(1L, (0x33L != (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_15, 7)), (l_702[3][4][2] ^ (+(safe_mod_func_uint32_t_u_u(func_68(l_510), (~l_579[2])))))))))))), g_2)) | (-1L)) ^ g_46) && 4294967293UL) < p_15);
            if (l_705)
                break;
            for (g_32 = (-6); (g_32 >= (-11)); g_32--)
            {
                char l_712 = 0L;
                for (p_17 = 0; (p_17 <= 2); p_17 += 1)
                {
                    int i, j, k;
                    g_8 = ((0xDE3EL <= func_68(g_336)) ^ (safe_rshift_func_int8_t_s_s((l_702[(p_17 + 5)][(p_17 + 5)][p_17] == (safe_sub_func_int16_t_s_s(g_44[(p_17 + 2)], 1UL))), 4)));
                    l_712 = l_521[0];
                }
            }
            l_717 = ((safe_lshift_func_int8_t_s_s((0x4DL || l_705), 3)) > (safe_sub_func_int32_t_s_s(func_30(((p_18 == ((g_239 > ((l_457 | ((func_30(g_166) && l_510.f0) != g_2)) != l_702[3][4][2])) <= 0L)) & 0L)), 5L)));
        }
        l_718 = l_717;
    }
    else
    {
        unsigned l_723 = 0xA87689B4L;
        int l_726[5] = {6L,6L,6L,6L,6L};
        int i;
        l_726[3] = (((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(l_521[3], l_723)), ((((g_44[1] != 4294967295UL) > (l_546 & (((func_33(g_154, (l_457 < g_44[1]), (!((safe_rshift_func_int16_t_s_u((p_14 <= 0L), 5)) && g_119)), p_16, l_521[3]) == 7L) == l_457) | g_98))) >= (-1L)) ^ (-9L)))) && p_15) != g_32);
    }
    return g_727;
}







static char func_20(unsigned char p_21, unsigned p_22, unsigned p_23, int p_24, int p_25)
{
    short l_445 = 0L;
    int l_446 = (-8L);
    for (p_23 = 28; (p_23 <= 5); p_23 = safe_sub_func_int32_t_s_s(p_23, 1))
    {
        return p_25;
    }
    l_446 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_73[3], g_73[3])), (safe_lshift_func_uint16_t_u_u(p_25, 14)))) > (g_119 != (safe_mod_func_uint8_t_u_u(((+((g_129 ^ (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(255UL, 1)) | g_166), (safe_rshift_func_uint8_t_u_u(251UL, (safe_add_func_uint32_t_u_u((((!0x5F0AL) & g_171) < 0xA3L), l_445))))))) != 0L)) != g_8), g_46))));
    return g_228.f0;
}







static int func_30(unsigned short p_31)
{
    short l_405 = 0x496FL;
    int l_408 = 6L;
    int l_409 = 0x4A030C4BL;
    int l_410 = 0x1CAF18A5L;
    char l_426 = 3L;
    for (g_226 = (-14); (g_226 >= (-13)); g_226 = safe_add_func_int16_t_s_s(g_226, 8))
    {
        l_405 = (safe_sub_func_int16_t_s_s(g_228.f0, 1L));
    }
    for (g_336.f0 = 0; (g_336.f0 <= 6); g_336.f0 += 1)
    {
        unsigned char l_425[2][9][1] = {{{1UL},{1UL},{0x35L},{0xBBL},{1UL},{0x35L},{1UL},{0xBBL},{0x35L}},{{255UL},{255UL},{0x35L},{0xBBL},{1UL},{0x35L},{1UL},{0xBBL},{0x35L}}};
        int i, j, k;
        for (g_129 = 0; (g_129 <= 6); g_129 += 1)
        {
            l_408 = (0x6FL == (safe_rshift_func_uint16_t_u_s(g_336.f0, 8)));
            if (g_73[2])
                continue;
            if (p_31)
                break;
        }
        l_410 = l_409;
        l_408 = ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_31 != ((safe_lshift_func_uint16_t_u_u((g_46 > (((safe_add_func_int16_t_s_s(p_31, (-1L))) <= func_33(l_410, g_32, (func_33((p_31 | (safe_lshift_func_uint8_t_u_u(l_425[0][1][0], ((+g_98) && l_405)))), g_129, g_98, l_426, l_410) != p_31), g_2, g_2)) > l_425[0][1][0])), 5)) && (-1L))), p_31)), l_425[0][8][0])), 7)) ^ g_98), (-7L))) == 65535UL);
    }
    return g_154;
}







static short func_33(int p_34, unsigned p_35, char p_36, unsigned short p_37, int p_38)
{
    unsigned l_285 = 18446744073709551606UL;
    const char l_326 = (-1L);
    int l_389 = 1L;
    for (g_171 = 0; (g_171 > 21); ++g_171)
    {
        unsigned l_280 = 0x71012672L;
        int l_319 = 0xDE364445L;
        for (g_119 = 2; (g_119 <= 6); g_119 += 1)
        {
            int l_316 = (-1L);
            unsigned l_346 = 0xB6EB53D8L;
            int i;
            g_226 = ((safe_add_func_uint32_t_u_u(g_44[g_119], (safe_sub_func_uint8_t_u_u(g_129, g_44[g_119])))) > (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(p_35, ((safe_rshift_func_uint8_t_u_s(((l_280 <= (func_68(g_70) > l_280)) || (((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_280 || 0x469B12F1L), g_171)), 1L)) | g_8) || l_285)), 3)) < p_36))) != p_36) && 0xAA098A50L), 0x52L)));
            if (((-1L) && (func_68(g_70) ^ ((((!(g_8 && p_38)) <= g_119) <= ((safe_sub_func_int8_t_s_s(((g_44[g_119] == 0UL) & 0xA5L), g_226)) ^ l_285)) < g_228.f0))))
            {
                unsigned l_302 = 0UL;
                for (g_12 = 0; (g_12 <= 4); g_12 += 1)
                {
                    int i;
                    g_8 = g_73[g_12];
                    if (g_8)
                        break;
                }
                g_226 = ((safe_lshift_func_int8_t_s_u(func_68(g_228), ((safe_mod_func_int32_t_s_s(g_119, (l_285 ^ (p_37 || (safe_mod_func_int32_t_s_s(g_44[6], p_37)))))) ^ ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_12, l_280)), g_46)) <= g_12)))) || 0UL);
                if (l_302)
                    break;
            }
            else
            {
                const char l_309 = 0x07L;
                int l_318 = (-6L);
                union U0 l_339 = {255UL};
                if (g_239)
                {
                    const unsigned l_305[10] = {0x20281DD2L,0x20281DD2L,0x306A485DL,0x20281DD2L,0x20281DD2L,0x306A485DL,0x20281DD2L,0x20281DD2L,0x306A485DL,0x20281DD2L};
                    int i;
                    for (g_12 = 4; (g_12 >= 0); g_12 -= 1)
                    {
                        union U0 l_308[3] = {{0xA6L},{0xA6L},{0xA6L}};
                        int i;
                        g_226 = 0x18506245L;
                        l_316 = ((0xA6L | (safe_lshift_func_int8_t_s_u(l_305[1], 7))) || ((safe_rshift_func_int16_t_s_s((((((func_68(l_308[1]) & l_309) == ((safe_mod_func_int8_t_s_s(p_38, (safe_add_func_uint8_t_u_u(0x46L, 8UL)))) <= (safe_add_func_int16_t_s_s(l_285, g_98)))) <= g_166) < g_2) >= 0L), g_129)) >= 0x689219BAL));
                        if (l_305[1])
                            continue;
                        return g_44[1];
                    }
                }
                else
                {
                    short l_317 = 0xE841L;
                    for (l_316 = 0; (l_316 <= 4); l_316 += 1)
                    {
                        int i;
                        l_317 = (g_73[l_316] <= (g_8 >= 255UL));
                    }
                    l_318 = 0xB26C8AD9L;
                }
                for (g_12 = 0; (g_12 <= 4); g_12 += 1)
                {
                    unsigned l_320 = 0UL;
                    int l_323 = (-6L);
                    if (g_154)
                    {
                        return l_309;
                    }
                    else
                    {
                        const int l_329 = 0x9F6E66C4L;
                        l_319 = 0x2E0E2086L;
                        l_323 = ((l_320 | 5L) < (safe_lshift_func_int16_t_s_u(l_280, (g_73[3] | p_38))));
                        g_8 = (((safe_sub_func_int16_t_s_s(l_326, ((((!(safe_lshift_func_int16_t_s_s(0xFD06L, 12))) | 1UL) && l_329) ^ (g_46 | (safe_mod_func_int16_t_s_s((p_38 < (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_166, (func_68(g_336) && 0UL))) && 0x50107254L), 4))), (-3L))))))) > g_44[6]) & (-2L));
                        g_8 = (-1L);
                    }
                    g_8 = (safe_sub_func_uint32_t_u_u(func_68(l_339), p_34));
                    g_226 = (+((safe_lshift_func_uint8_t_u_s(p_34, (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_346, 1)), l_285)))) > (((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_70.f0, ((g_32 ^ (g_98 ^ (g_44[g_119] && l_285))) == (p_36 == 3L)))), 7)) > 0L) == g_70.f0)));
                }
            }
            for (g_129 = 1; (g_129 <= 4); g_129 += 1)
            {
                unsigned char l_351 = 0x27L;
                int l_369 = 0x4428E234L;
                for (g_154 = 0; (g_154 <= 4); g_154 += 1)
                {
                    unsigned short l_361 = 65535UL;
                    unsigned short l_362[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_362[i] = 0xB146L;
                    if (p_37)
                    {
                        g_12 = (-1L);
                        l_351 = g_98;
                        l_316 = (safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(p_35, p_35)) > l_319) >= p_36), (0xBAL ^ ((g_70.f0 == (((safe_sub_func_uint32_t_u_u(((p_37 || g_46) | (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s((l_361 != 0xBB03L), g_70.f0))))), p_35)) && l_319) >= l_285)) < l_362[0]))));
                    }
                    else
                    {
                        const unsigned short l_388 = 65535UL;
                        l_369 = (((g_154 > g_129) | (((safe_mod_func_int16_t_s_s((l_319 < (safe_rshift_func_int16_t_s_s((0xF4F7L ^ (((((0x49795CE8L != (0UL | p_34)) > (((safe_mod_func_uint8_t_u_u((p_35 | (p_34 <= l_362[0])), p_38)) & 0x0A03F03CL) == g_73[3])) <= 0x8D60L) & g_8) && p_38)), g_70.f0))), 65526UL)) == 65529UL) | l_362[0])) ^ g_226);
                        l_319 = (safe_mod_func_uint32_t_u_u((~((l_369 ^ (safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(g_8, (((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0xCCA9L, (safe_mod_func_uint32_t_u_u(((-7L) & (func_68(g_336) <= (safe_sub_func_int32_t_s_s(0xFB43F38FL, (4294967286UL == ((safe_rshift_func_uint8_t_u_u(0xE8L, p_34)) | (-1L))))))), g_44[g_119])))), g_98)) < 0x97L) < 0x6115999DL))) == g_12) || g_129), 12))) || p_38)), 4294967295UL));
                        g_12 = (safe_add_func_int8_t_s_s(l_388, 6UL));
                        l_389 = ((+g_98) ^ (-5L));
                    }
                    for (l_280 = 0; (l_280 <= 4); l_280 += 1)
                    {
                        int i;
                        l_319 = g_73[g_129];
                        l_369 = l_285;
                        l_369 = ((safe_add_func_int8_t_s_s(g_171, (g_166 & p_36))) < (safe_lshift_func_int16_t_s_u(p_38, g_70.f0)));
                    }
                }
            }
        }
        l_389 = (p_34 || (((safe_lshift_func_int8_t_s_u(func_68(g_336), p_35)) > g_166) > l_389));
        for (g_166 = 1; (g_166 <= 6); g_166 += 1)
        {
            union U0 l_400[5][6][1] = {{{{0UL}},{{0x64L}},{{0UL}},{{253UL}},{{1UL}},{{253UL}}},{{{0UL}},{{0x64L}},{{0UL}},{{253UL}},{{1UL}},{{253UL}}},{{{0UL}},{{0x64L}},{{0UL}},{{253UL}},{{1UL}},{{253UL}}},{{{0UL}},{{0x64L}},{{0UL}},{{253UL}},{{1UL}},{{253UL}}},{{{0UL}},{{0x64L}},{{0UL}},{{253UL}},{{1UL}},{{253UL}}}};
            int i, j, k;
            l_389 = (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((func_68(l_400[0][4][0]) != 0xB73C04D7L) ^ g_44[g_166]) ^ (l_319 | g_239)), (-1L))) <= 0xF744L), l_326));
            if (p_38)
                break;
        }
        l_319 = g_228.f0;
    }
    return g_171;
}







static unsigned func_39(unsigned char p_40)
{
    const short l_41 = 0L;
    int l_42 = (-1L);
    union U0 l_177 = {0UL};
    if (l_41)
    {
        l_42 = l_41;
    }
    else
    {
        unsigned l_43 = 0UL;
        union U0 l_51 = {0x28L};
        int l_178 = 0x98794C97L;
        if (l_43)
        {
            short l_45 = 0x9963L;
            for (g_8 = 6; (g_8 >= 2); g_8 -= 1)
            {
                union U0 l_176 = {0xBDL};
                for (l_42 = 6; (l_42 >= 2); l_42 -= 1)
                {
                    for (l_43 = 2; (l_43 <= 6); l_43 += 1)
                    {
                        int i;
                        l_45 = 0xDBFD33F1L;
                        if (g_44[l_43])
                            break;
                    }
                    for (g_12 = 6; (g_12 >= 0); g_12 -= 1)
                    {
                        g_46 = 0x447FD326L;
                        g_171 = (func_47(g_12, g_2, l_51) == 0xE199L);
                    }
                    if (g_129)
                        break;
                }
                g_12 = (safe_mod_func_uint16_t_u_u((func_47((safe_lshift_func_uint16_t_u_s(((((1L & (g_2 || l_45)) >= 0x97D2L) <= 1UL) && func_68(l_176)), 4)), l_45, l_177) >= g_32), l_177.f0));
                l_42 = 0xD4EA75E2L;
            }
        }
        else
        {
            union U0 l_191[3][4][7] = {{{{0xACL},{1UL},{0xACL},{1UL},{0xACL},{1UL},{0xACL}},{{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L},{0x24L}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{0xBEL},{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L}}},{{{0xACL},{1UL},{0xACL},{1UL},{0xACL},{1UL},{0xACL}},{{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L},{0x24L}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{0xBEL},{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L}}},{{{0xACL},{1UL},{0xACL},{1UL},{0xACL},{1UL},{0xACL}},{{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L},{0x24L}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{0xBEL},{0xBEL},{0x24L},{0x24L},{0xBEL},{0xBEL},{0x24L}}}};
            int i, j, k;
            l_178 = 0xD907B652L;
            l_42 = ((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_add_func_uint8_t_u_u(p_40, (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_154, ((safe_add_func_int32_t_s_s(p_40, func_68(l_191[1][2][2]))) == (-3L)))), l_178)))) && (safe_lshift_func_uint8_t_u_s(l_191[1][2][2].f0, g_171))) || 0x5D31L) != p_40), 2)), p_40)) | 0UL) | l_51.f0) || g_32);
            g_12 = (l_177.f0 == ((l_177.f0 >= l_51.f0) > p_40));
        }
    }
    for (p_40 = 15; (p_40 == 20); p_40 = safe_add_func_int32_t_s_s(p_40, 1))
    {
        short l_227 = (-1L);
        union U0 l_233 = {0x84L};
        int l_234[5];
        int i;
        for (i = 0; i < 5; i++)
            l_234[i] = 0L;
        l_42 = (+p_40);
        for (g_46 = 0; (g_46 <= 4); g_46 += 1)
        {
            char l_199 = (-2L);
            union U0 l_225[9] = {{251UL},{0x92L},{251UL},{0x92L},{251UL},{0x92L},{251UL},{0x92L},{251UL}};
            int i;
            if (g_73[g_46])
            {
                union U0 l_198 = {255UL};
                g_12 = func_68(l_198);
            }
            else
            {
                int l_220 = 0x7E938102L;
                l_199 = p_40;
                l_42 = (safe_sub_func_int32_t_s_s(func_47(((-6L) && (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((g_98 && g_46) != (safe_rshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((g_73[3] <= p_40), (safe_add_func_uint16_t_u_u((p_40 > ((((l_41 == g_129) >= l_177.f0) == 0x190DBC92L) > p_40)), g_32)))) > g_32) <= 255UL), p_40))), 0xD3L)), g_32))), l_177.f0, g_70), p_40));
                if (g_32)
                    break;
                for (g_12 = 4; (g_12 >= 0); g_12 -= 1)
                {
                    int i;
                    if ((!((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(func_68(g_70), ((~((0xA76DL == (!g_171)) > (safe_sub_func_uint16_t_u_u(((0x6BA3L | (safe_lshift_func_int8_t_s_u(p_40, p_40))) == (l_220 <= g_171)), 0xCDB1L)))) >= p_40))), 15)) || 0x01L)))
                    {
                        unsigned short l_229 = 9UL;
                        g_8 = g_8;
                        l_229 = func_61((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(((5UL & l_220) ^ g_46), 5)) > func_47(((func_68(l_225[7]) >= ((p_40 != l_220) && (p_40 < p_40))) == g_226), l_227, g_228)), 8)), l_177.f0, p_40, g_12, g_32);
                        return g_8;
                    }
                    else
                    {
                        int l_230 = 0L;
                        l_230 = 0x742F6B53L;
                    }
                    g_8 = p_40;
                }
            }
            if (l_227)
                break;
            if (g_70.f0)
                continue;
        }
        for (g_119 = 0; (g_119 >= 59); g_119 = safe_add_func_uint16_t_u_u(g_119, 8))
        {
            g_8 = func_68(g_70);
            l_234[4] = func_68(l_233);
        }
    }
    l_42 = g_73[1];
    for (g_228.f0 = 0; (g_228.f0 <= 27); ++g_228.f0)
    {
        unsigned char l_240 = 1UL;
        unsigned short l_253 = 65535UL;
        int l_257 = 1L;
        if ((safe_lshift_func_uint16_t_u_s(((0x7E5A2BCFL || func_61(p_40, g_239, l_42, l_240, g_44[5])) < (0L == (0xB272FC51L | g_8))), 12)))
        {
            union U0 l_248 = {9UL};
            int l_249 = 0x9D540455L;
            for (l_42 = 25; (l_42 <= (-3)); l_42 = safe_sub_func_uint8_t_u_u(l_42, 9))
            {
                int l_243 = 0x99B072CAL;
                l_249 = ((0xAAL != (((g_154 <= 0x5BL) | g_44[2]) & (l_243 >= (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_40, (p_40 | func_68(l_248)))), p_40))))) ^ p_40);
            }
        }
        else
        {
            unsigned l_256 = 8UL;
            int l_264[3][6][6] = {{{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L}},{{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L}},{{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L},{0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L,0x023DFF76L}}};
            int i, j, k;
            l_257 = ((p_40 == ((~(safe_unary_minus_func_int8_t_s((p_40 <= ((safe_lshift_func_uint16_t_u_s(g_70.f0, 1)) & g_166))))) & g_119)) > (l_253 || (safe_add_func_int32_t_s_s(l_253, l_256))));
            for (g_70.f0 = 3; (g_70.f0 < 43); ++g_70.f0)
            {
                l_264[1][0][1] = ((g_44[4] || (((safe_sub_func_int32_t_s_s(0x47CCC286L, g_119)) > p_40) & (safe_sub_func_int8_t_s_s(l_42, 0xCAL)))) && p_40);
            }
        }
        l_42 = (safe_rshift_func_int8_t_s_s(g_46, 2));
        l_42 = (+(l_177.f0 >= (p_40 > ((0x0DL > g_98) != p_40))));
    }
    return g_98;
}







static unsigned short func_47(unsigned short p_48, short p_49, union U0 p_50)
{
    char l_56[10] = {(-1L),0x29L,5L,5L,0x29L,(-1L),0x29L,5L,5L,0x29L};
    int i;
    for (p_50.f0 = 18; (p_50.f0 == 2); p_50.f0 = safe_sub_func_int8_t_s_s(p_50.f0, 5))
    {
        unsigned l_67 = 0x822C3E50L;
        unsigned short l_169 = 1UL;
        int l_170 = 0xC1F5F023L;
        l_170 = (safe_rshift_func_int8_t_s_u((((l_56[7] || ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((func_61(l_67, p_50.f0, (l_67 >= p_48), p_50.f0, ((func_68(g_70) <= ((((safe_add_func_uint8_t_u_u(p_48, (-1L))) ^ 0UL) != p_48) == g_44[3])) || g_46)) >= l_169) != 0xF52E6A1EL), 5)) && g_73[3]), 11)) > g_32)) && 0xB03AC48BL) == g_12), l_67));
    }
    return l_56[7];
}







static unsigned func_61(int p_62, unsigned char p_63, int p_64, unsigned char p_65, unsigned short p_66)
{
    int l_80 = 0L;
    int l_81 = 0x911DF381L;
    const unsigned short l_84 = 1UL;
    union U0 l_85 = {0xDEL};
    char l_97 = 1L;
    int l_124 = (-1L);
    l_81 = ((0x7EF5E135L && g_12) & (safe_mod_func_int8_t_s_s(p_65, l_80)));
    if ((safe_mod_func_uint16_t_u_u((l_84 < ((0x9AD35785L || (func_68(l_85) & p_65)) >= 0xB0L)), l_84)))
    {
        l_81 = g_46;
        return g_44[4];
    }
    else
    {
        union U0 l_88 = {0x72L};
        int l_125 = 0L;
        union U0 l_165[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
        int i;
        g_98 = (safe_add_func_uint16_t_u_u((func_68(l_88) <= ((safe_lshift_func_uint8_t_u_u(p_66, g_12)) <= (g_44[3] > (((safe_add_func_int32_t_s_s((g_12 >= 0x0F05760DL), (p_64 <= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_97 & p_63), 1)), 14))))) < p_64) ^ p_64)))), l_81));
        if ((safe_mod_func_int32_t_s_s((+0L), ((safe_rshift_func_int16_t_s_u(g_46, ((safe_rshift_func_int8_t_s_u(((l_84 ^ l_88.f0) | p_62), ((4294967295UL == func_68(g_70)) && l_88.f0))) == 0x3977L))) | l_88.f0))))
        {
            unsigned l_111 = 0x6313C76AL;
            union U0 l_122 = {0xCDL};
            char l_123 = 0x90L;
            short l_130 = 0xE28EL;
            int l_141 = 1L;
            unsigned l_153 = 2UL;
            if (((safe_rshift_func_uint8_t_u_u((!(safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((~(g_46 || (l_111 | func_68(g_70)))), ((safe_lshift_func_uint8_t_u_s((!(l_111 | l_84)), 3)) != (safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(((g_98 || p_62) > ((safe_sub_func_int8_t_s_s(l_88.f0, l_111)) || l_88.f0)))) > 0UL) || 0L), g_12))))), 1))), g_98)) >= p_64))
            {
                const unsigned l_135[9] = {9UL,0x0E1B1DC0L,9UL,0x0E1B1DC0L,9UL,0x0E1B1DC0L,9UL,0x0E1B1DC0L,9UL};
                int i;
                g_119 = 0xE09151F0L;
                if (((safe_add_func_uint16_t_u_u(func_68(l_122), (l_123 >= 0UL))) != p_65))
                {
                    int l_126 = 0xB8F5B537L;
                    l_125 = (l_88.f0 || ((l_124 | l_80) <= g_44[3]));
                    l_126 = (p_65 || l_125);
                    for (l_122.f0 = 0; (l_122.f0 != 27); l_122.f0 = safe_add_func_uint32_t_u_u(l_122.f0, 4))
                    {
                        if (p_66)
                            break;
                        g_129 = 8L;
                        l_81 = l_130;
                    }
                }
                else
                {
                    for (p_66 = 0; (p_66 >= 26); p_66 = safe_add_func_uint8_t_u_u(p_66, 4))
                    {
                        unsigned short l_138[7][2][10] = {{{65535UL,65535UL,0xDAC6L,0xF8CBL,0UL,0UL,0xF8CBL,0xDAC6L,0x4E59L,0x8605L},{0x4E59L,2UL,0x70AEL,0xF8CBL,0x7048L,0x8605L,0x7048L,0xF8CBL,0x70AEL,2UL}},{{65535UL,0xDAC6L,0x8605L,2UL,0x7048L,65535UL,65535UL,0x7048L,2UL,0x8605L},{0x7048L,0x7048L,0x4E59L,65535UL,0UL,65535UL,0x70AEL,65535UL,0UL,65535UL}},{{65535UL,0x3843L,65535UL,65535UL,0xF8CBL,0x8605L,0x70AEL,0x70AEL,0x8605L,0xF8CBL},{0x4E59L,0x7048L,0x7048L,0x4E59L,65535UL,0UL,65535UL,0x70AEL,65535UL,0UL}},{{0x8605L,0xDAC6L,65535UL,0xDAC6L,0x8605L,2UL,0x7048L,65535UL,65535UL,0x7048L},{0x70AEL,2UL,0x4E59L,0x4E59L,2UL,0x70AEL,0xF8CBL,0x7048L,0x8605L,0x7048L}},{{0xDAC6L,0x4E59L,0x8605L,65535UL,0x8605L,0x4E59L,0xDAC6L,0xF8CBL,0UL,0UL},{0xDAC6L,0UL,0x70AEL,65535UL,65535UL,0x70AEL,0UL,0UL,65535UL,0x70AEL}},{{0x4E59L,65535UL,0UL,65535UL,0x70AEL,65535UL,0UL,65535UL,0x4E59L,0x7048L},{2UL,0xDAC6L,0UL,0x70AEL,65535UL,65535UL,0x70AEL,0UL,0xDAC6L,2UL}},{{0xDAC6L,65535UL,0x4E59L,0x70AEL,0x3843L,2UL,0x3843L,0x70AEL,0x4E59L,65535UL},{0x7048L,0UL,2UL,65535UL,0x3843L,0xF8CBL,0xF8CBL,0x3843L,65535UL,2UL}}};
                        int i, j, k;
                        l_141 = ((((safe_add_func_int8_t_s_s((l_135[4] >= (safe_lshift_func_int16_t_s_u(p_65, ((l_138[1][1][4] || g_44[1]) | (((safe_add_func_int8_t_s_s(l_97, (-1L))) && g_70.f0) > (g_73[2] || (~g_70.f0))))))), 254UL)) <= l_130) <= 0UL) || p_62);
                        return l_135[4];
                    }
                    for (l_123 = (-13); (l_123 == 2); l_123++)
                    {
                        unsigned char l_144 = 1UL;
                        l_144 = 5L;
                    }
                }
            }
            else
            {
                char l_145 = 0L;
                int l_152 = 0x0F080F89L;
                l_152 = (~(((0xF27D3598L & l_145) | p_66) || (safe_add_func_int8_t_s_s(g_8, (g_129 & (safe_sub_func_uint32_t_u_u(l_125, (safe_add_func_uint32_t_u_u(p_62, p_63)))))))));
            }
            l_124 = func_68(g_70);
            g_154 = l_153;
        }
        else
        {
            int l_161 = 0xCBD5F440L;
            short l_164 = 0x9954L;
            g_166 = ((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_161 != l_161), (((safe_sub_func_int32_t_s_s(l_164, 4294967290UL)) != (0UL != func_68(g_70))) || func_68(l_165[1])))), g_32)) | l_125), 4294967295UL)) >= 0x3AL);
            return g_154;
        }
        for (g_166 = 11; (g_166 >= 29); g_166++)
        {
            if (g_70.f0)
                break;
        }
        l_125 = l_97;
    }
    return p_65;
}







static unsigned func_68(union U0 p_69)
{
    short l_71 = (-6L);
    int l_72[2][7] = {{0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L}};
    int i, j;
    l_72[1][3] = l_71;
    g_73[3] = 0xDAEE1FA0L;
    for (g_70.f0 = 0; (g_70.f0 <= 54); ++g_70.f0)
    {
        return p_69.f0;
    }
    return g_12;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
