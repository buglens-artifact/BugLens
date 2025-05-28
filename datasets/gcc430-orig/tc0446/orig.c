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
   unsigned short f1;
   unsigned short f2;
   int f3;
   unsigned f4;
   int f5;
};

struct S1 {
   unsigned f0;
   int f1;
};


static int g_2[2][10] = {{8L,0xF759609CL,0x622A149CL,0x622A149CL,0xF759609CL,8L,0xF759609CL,0x622A149CL,0x622A149CL,0xF759609CL},{8L,0xF759609CL,0x622A149CL,0x622A149CL,0xF759609CL,8L,0xF759609CL,0x622A149CL,0x622A149CL,0xF759609CL}};
static int g_3[2] = {5L,5L};
static struct S1 g_24 = {4294967295UL,0x021F5EB7L};
static struct S0 g_25[3][3][3] = {{{{0x457AFC49L,0x9369L,0x1D62L,0x01101210L,1UL,-5L},{0x171B3FE7L,0xDE61L,0x75C8L,-1L,0x9B037144L,0xB28543B5L},{0x941993E3L,65535UL,65535UL,0x65120B87L,4294967295UL,-1L}},{{0x171B3FE7L,0xDE61L,0x75C8L,-1L,0x9B037144L,0xB28543B5L},{-1L,1UL,65535UL,-1L,4294967292UL,0x0AB9CA24L},{-1L,1UL,65535UL,-1L,4294967292UL,0x0AB9CA24L}},{{0x286E0DAEL,0x2552L,0x8A7BL,0L,4294967292UL,-8L},{0x457AFC49L,0x9369L,0x1D62L,0x01101210L,1UL,-5L},{0x941993E3L,65535UL,65535UL,0x65120B87L,4294967295UL,-1L}}},{{{0x8F5B79C1L,0x114CL,0x3FB5L,0x6221F425L,0xD17401D8L,0x2D29C614L},{0x93E35F20L,6UL,0x5DCFL,1L,0x1351DBD7L,0xCF76E5F3L},{0x457AFC49L,0x9369L,0x1D62L,0x01101210L,1UL,-5L}},{{0x8F5B79C1L,0x114CL,0x3FB5L,0x6221F425L,0xD17401D8L,0x2D29C614L},{0x63D476FCL,65535UL,0x3744L,0L,4294967289UL,0x74C89AEDL},{0x171B3FE7L,0xDE61L,0x75C8L,-1L,0x9B037144L,0xB28543B5L}},{{0x286E0DAEL,0x2552L,0x8A7BL,0L,4294967292UL,-8L},{0x039802EEL,9UL,65535UL,7L,7UL,0x50E28AB8L},{0x286E0DAEL,0x2552L,0x8A7BL,0L,4294967292UL,-8L}}},{{{0x171B3FE7L,0xDE61L,0x75C8L,-1L,0x9B037144L,0xB28543B5L},{0x63D476FCL,65535UL,0x3744L,0L,4294967289UL,0x74C89AEDL},{0x8F5B79C1L,0x114CL,0x3FB5L,0x6221F425L,0xD17401D8L,0x2D29C614L}},{{0x457AFC49L,0x9369L,0x1D62L,0x01101210L,1UL,-5L},{0x93E35F20L,6UL,0x5DCFL,1L,0x1351DBD7L,0xCF76E5F3L},{0x8F5B79C1L,0x114CL,0x3FB5L,0x6221F425L,0xD17401D8L,0x2D29C614L}},{{0xAAC46587L,0x760FL,0xF470L,6L,3UL,-10L},{-1L,1UL,65535UL,-1L,4294967292UL,0x0AB9CA24L},{0x941993E3L,65535UL,65535UL,0x65120B87L,4294967295UL,-1L}}}};
static struct S1 g_84 = {0xFA3A44C3L,-3L};
static unsigned g_88[7][2][6] = {{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}},{{4UL,4UL,3UL,4UL,4UL,3UL},{4UL,4UL,3UL,4UL,4UL,3UL}}};
static struct S1 g_90[4] = {{0x9DDB2936L,0xB1B60A8CL},{0x9DDB2936L,0xB1B60A8CL},{0x9DDB2936L,0xB1B60A8CL},{0x9DDB2936L,0xB1B60A8CL}};
static unsigned char g_102[2][3] = {{0x93L,0x93L,0x93L},{0x93L,0x93L,0x93L}};
static unsigned short g_135 = 0UL;
static struct S0 g_141 = {0x16B741F6L,65531UL,0xD70BL,9L,0xA4172F5BL,-2L};
static int g_171 = 0x516F9BB1L;
static unsigned char g_181 = 1UL;
static int g_225 = 0xA479D4BEL;
static int g_252 = 0x0CAC3623L;
static unsigned g_253 = 4294967295UL;
static struct S0 g_257 = {0x91D3B185L,3UL,0x6CC9L,0x5A3F4D27L,0x35FF06FBL,0xC722C54AL};
static unsigned g_263[2] = {1UL,1UL};
static int g_317[6] = {1L,1L,1L,1L,1L,1L};
static short g_328 = (-3L);
static int g_424 = 0xBAD9D3F4L;
static unsigned g_474 = 7UL;
static struct S0 g_641 = {0x92092CD5L,0xCEB4L,65526UL,0x90534164L,4294967295UL,0x38F97840L};
static struct S1 g_700 = {0x86014A01L,0x4B6B8721L};
static unsigned char g_744 = 0xD8L;
static int g_762 = 6L;
static short g_790[8][6][2] = {{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),0x33FFL},{(-1L),1L},{0L,0x33FFL},{0x5E4CL,0x33FFL},{0L,1L}},{{(-1L),0x33FFL},{(-1L),1L},{0x5E4CL,8L},{(-1L),1L},{0x3286L,1L},{(-1L),8L}}};
static unsigned g_800 = 4294967295UL;



static unsigned short func_1(void);
static unsigned short func_5(int p_6, unsigned p_7, unsigned p_8, struct S0 p_9, char p_10);
static short func_19(struct S1 p_20, char p_21, struct S0 p_22, short p_23);
static int func_26(struct S1 p_27, unsigned char p_28);
static unsigned func_36(unsigned char p_37);
static int func_40(struct S1 p_41, struct S0 p_42, unsigned p_43, char p_44, unsigned p_45);
static unsigned func_46(unsigned short p_47, struct S1 p_48, struct S0 p_49, struct S0 p_50);
static unsigned char func_51(char p_52, unsigned char p_53, short p_54, unsigned p_55, unsigned p_56);
static unsigned char func_60(unsigned p_61, struct S1 p_62, struct S1 p_63);
static struct S1 func_64(char p_65, int p_66, unsigned p_67, int p_68);
static unsigned short func_1(void)
{
    int l_4[7][2][10] = {{{0L,0L,0L,0x13A6C9CDL,(-5L),0x004DDC87L,0x84255EBDL,0L,(-9L),0x84255EBDL},{0x10A3BDF7L,0x1658A600L,6L,0x01874DA8L,0x1658A600L,0x8FB0B44CL,0x84255EBDL,0x8FB0B44CL,0x1658A600L,0x01874DA8L}},{{0x06BDE64FL,0L,0x06BDE64FL,6L,0x84255EBDL,(-5L),6L,(-1L),0xC3EFC167L,0x06BDE64FL},{(-1L),0x10A3BDF7L,(-9L),0x13A6C9CDL,0L,0x147F59ECL,(-1L),(-1L),0x147F59ECL,0L}},{{0x10A3BDF7L,0x06BDE64FL,0x06BDE64FL,0x10A3BDF7L,0xC3EFC167L,0x1658A600L,0L,0x8FB0B44CL,0x06BDE64FL,(-1L)},{0xC3EFC167L,(-1L),6L,(-5L),0x84255EBDL,6L,0x06BDE64FL,0L,0x06BDE64FL,6L}},{{0x13A6C9CDL,0x10A3BDF7L,0L,0x10A3BDF7L,0x13A6C9CDL,(-1L),0x01874DA8L,0x13A6C9CDL,0x147F59ECL,0x84255EBDL},{0L,0xC3EFC167L,(-5L),0x13A6C9CDL,0L,0x1658A600L,0x84255EBDL,0xC3EFC167L,0xC3EFC167L,0x84255EBDL}},{{0x8FB0B44CL,0x13A6C9CDL,6L,6L,0x13A6C9CDL,0L,6L,(-5L),0x06BDE64FL,0x1658A600L},{0x10A3BDF7L,0x84255EBDL,0x147F59ECL,0x13A6C9CDL,0x01874DA8L,(-1L),0x13A6C9CDL,0x10A3BDF7L,0L,0x10A3BDF7L}},{{0x10A3BDF7L,0L,(-5L),(-1L),(-5L),0L,0x10A3BDF7L,0x8FB0B44CL,0L,0x84255EBDL},{0L,0x10A3BDF7L,0x8FB0B44CL,0L,0x84255EBDL,0x06BDE64FL,(-5L),(-5L),0x8FB0B44CL,0x8FB0B44CL}},{{0x84255EBDL,0x10A3BDF7L,0x004DDC87L,0x01874DA8L,0x01874DA8L,0x004DDC87L,0x10A3BDF7L,0x84255EBDL,0x147F59ECL,0x13A6C9CDL},{(-1L),0L,6L,(-5L),0x06BDE64FL,0x1658A600L,0x13A6C9CDL,0x06BDE64FL,0L,0x01874DA8L}}};
    struct S1 l_850 = {4294967295UL,-8L};
    struct S0 l_856 = {-1L,0x069FL,0xDF22L,0x08B3FA78L,0x9AEC7D0CL,0xF5136A50L};
    unsigned char l_899[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_899[i] = 0x21L;
    for (g_3[1] = 1; (g_3[1] >= 0); g_3[1] -= 1)
    {
        int l_639 = 0x0DF3FD1CL;
        unsigned short l_640[8];
        int l_837[2][2][4];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_640[i] = 0x90E2L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_837[i][j][k] = 0xDFA03EF3L;
            }
        }
        l_4[6][0][9] = g_3[1];
        l_837[0][1][1] = (func_5((g_2[1][9] ^ (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(l_4[6][0][9], g_3[1])) | ((((func_19(g_24, g_24.f1, g_25[0][2][1], l_4[1][1][1]) , 0x9AA6L) , l_639) && g_25[0][2][1].f0) <= g_3[1])), g_171)), 0)), l_639))), l_639, l_640[4], g_641, l_640[4]) || g_800);
        for (g_641.f2 = 0; (g_641.f2 <= 1); g_641.f2 += 1)
        {
            unsigned short l_855[9][1][7] = {{{6UL,65528UL,6UL,0x7ADAL,65528UL,0x7ADAL,6UL}},{{0x7012L,0x7012L,65535UL,65533UL,0x7012L,0x10ABL,65533UL}},{{0x5647L,0x7ADAL,0UL,65528UL,0UL,0x7ADAL,0x5647L}},{{0xF2FBL,65533UL,2UL,0xF2FBL,0x7012L,2UL,2UL}},{{65528UL,65528UL,65534UL,65528UL,65528UL,0xA2DCL,65528UL}},{{0x7012L,0xF2FBL,2UL,65533UL,0xF2FBL,0x10ABL,2UL}},{{1UL,0x7ADAL,1UL,0xA2DCL,0UL,0xA2DCL,1UL}},{{0xF2FBL,2UL,65533UL,0xF2FBL,0xF2FBL,65533UL,2UL}},{{6UL,0xA2DCL,65534UL,0x7ADAL,65534UL,0xA2DCL,6UL}}};
            unsigned l_857 = 4294967291UL;
            int l_858 = 0xE702C3BAL;
            int i, j, k;
            l_858 = ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((g_2[g_641.f2][(g_3[1] + 4)] = (safe_sub_func_int32_t_s_s(g_2[g_3[1]][(g_641.f2 + 4)], (((((0x56L && g_263[0]) != ((g_141.f4 || (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((l_850 , (!(safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_90[2].f1, l_855[6][0][0])), (g_744 == func_40((g_700 = func_64((((((func_40(func_64((((l_837[0][1][1] = l_4[6][0][9]) , (-2L)) == g_762), g_90[2].f1, l_850.f1, g_102[1][0]), l_856, g_25[0][2][1].f1, l_857, g_257.f2) != 0x799A495EL) >= 0x37B9L) <= g_641.f3) == g_90[2].f1) <= g_90[2].f1), g_141.f2, l_855[2][0][0], g_141.f3)), g_257, l_4[6][0][9], l_640[4], l_857)))))) == 0x7E92L), g_263[1])) , l_857), 6)), 0UL))) || g_25[0][2][1].f3)) && l_856.f1) || g_84.f1) > l_640[2])))) || l_837[1][0][3]), 3)) & g_790[2][0][0]), 0xC1L)) == l_855[0][0][6]);
        }
    }
    l_4[1][1][1] = func_60(g_24.f0, l_850, func_64(((l_856.f0 ^ 0x0C47L) >= (l_4[2][0][2] && g_225)), l_856.f3, g_141.f0, l_4[6][0][9]));
    for (g_641.f0 = 17; (g_641.f0 != 24); g_641.f0 = safe_add_func_int32_t_s_s(g_641.f0, 3))
    {
        unsigned char l_875 = 0xF2L;
        for (l_850.f0 = 0; (l_850.f0 <= 1); l_850.f0 += 1)
        {
            char l_874 = (-1L);
            int l_877[6];
            unsigned short l_897 = 0x5345L;
            unsigned short l_898 = 65527UL;
            int l_900 = 0xD4DEF35AL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_877[i] = 0x062E3125L;
            for (g_253 = 0; (g_253 <= 1); g_253 += 1)
            {
                int l_873 = 0x61B6D6A2L;
                int l_878 = (-8L);
                for (g_257.f3 = 1; (g_257.f3 >= 0); g_257.f3 -= 1)
                {
                    int l_876 = 0x259D3D9DL;
                    int i, j, k;
                    l_4[(g_253 + 1)][g_257.f3][(l_850.f0 + 5)] = g_2[g_257.f3][(g_257.f3 + 1)];
                    for (l_856.f4 = 0; l_856.f4 < 4; l_856.f4 += 1)
                    {
                        struct S1 tmp = {9UL,0xD236C92AL};
                        g_90[l_856.f4] = tmp;
                    }
                    l_4[(g_253 + 1)][g_257.f3][(l_850.f0 + 5)] = ((g_171 = ((safe_div_func_uint8_t_u_u(g_102[l_850.f0][(g_257.f3 + 1)], (safe_add_func_int16_t_s_s((l_877[1] = ((safe_add_func_uint8_t_u_u(((((l_873 = ((safe_rshift_func_int8_t_s_s((((g_3[1] = (((l_4[(g_253 + 2)][g_253][(g_253 + 8)] > ((func_40(g_90[g_257.f3], (((((g_24.f0 = (((safe_add_func_uint8_t_u_u(l_4[(g_257.f3 + 5)][g_253][g_257.f3], (g_141.f3 == ((+(g_328 = 0xB3BAL)) < g_102[1][0])))) > ((l_873 < (g_790[2][0][0] = l_4[6][0][9])) < (-8L))) != g_3[1])) , l_856.f2) , l_874) && g_2[g_257.f3][(g_257.f3 + 1)]) , g_25[g_257.f3][(g_253 + 1)][(l_850.f0 + 1)]), g_90[g_257.f3].f0, g_252, l_875) | 1UL) , 1UL)) || 0UL) , l_4[(g_253 + 2)][g_253][(g_253 + 8)])) == l_875) , (-9L)), 1)) < l_875)) & g_263[1]) < l_876) < g_141.f2), g_700.f0)) <= 255UL)), l_878)))) , g_328)) , l_856.f0);
                    g_90[(g_257.f3 + 2)] = g_90[3];
                }
            }
            for (g_141.f0 = 0; (g_141.f0 <= 3); g_141.f0 += 1)
            {
                struct S0 l_883 = {-1L,65533UL,1UL,0L,0xACE2AD6FL,0xB212E3EFL};
                for (g_328 = 3; (g_328 >= 0); g_328 -= 1)
                {
                    int l_884[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_884[i] = 0x9A2C50D2L;
                    if (g_2[l_850.f0][(g_328 + 6)])
                    {
                        int i, j;
                        g_2[l_850.f0][(l_850.f0 + 8)] = g_2[l_850.f0][(g_141.f0 + 4)];
                    }
                    else
                    {
                        int i, j;
                        return g_2[l_850.f0][g_141.f0];
                    }
                    g_2[l_850.f0][(g_328 + 5)] = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((g_102[l_850.f0][l_850.f0] != (g_88[(l_850.f0 + 5)][l_850.f0][(g_328 + 1)] ^ (!func_40(g_90[g_328], l_883, ((0xD6579CF5L >= l_856.f0) && (3L != ((l_884[1] = ((func_40(g_90[2], g_25[0][2][1], g_744, g_641.f3, g_790[1][1][0]) | 0xAEL) , 0x56L)) , g_102[1][1]))), g_171, g_135)))), 0x962AL)), l_883.f5));
                }
            }
            l_4[3][1][6] = (g_2[l_850.f0][(l_850.f0 + 2)] < (g_102[l_850.f0][l_850.f0] <= (safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_257.f4 && l_875), ((safe_div_func_int16_t_s_s(((((g_790[2][0][0] = g_102[1][0]) || (l_898 = (func_40(g_90[l_850.f0], l_856, g_102[1][0], (safe_add_func_int32_t_s_s(g_641.f5, l_897)), g_641.f3) < 0xA4L))) && g_135) <= 0x1CB98757L), l_899[1])) || g_171))), 12))));
            for (g_141.f2 = 0; (g_141.f2 <= 3); g_141.f2 += 1)
            {
                int i, j;
                g_90[g_141.f2].f1 = func_40((g_90[g_141.f2] = g_24), g_141, func_40(g_24, g_641, func_40(g_700, g_25[0][2][1], g_102[l_850.f0][l_850.f0], g_102[l_850.f0][l_850.f0], g_102[l_850.f0][l_850.f0]), g_424, l_900), g_141.f3, g_102[l_850.f0][l_850.f0]);
                g_141.f5 = ((safe_mod_func_int32_t_s_s(l_900, (l_899[1] , func_40(l_850, g_257, l_875, l_856.f5, (safe_lshift_func_uint8_t_u_u(g_263[1], 5)))))) , (0x7F2CL > 0xE878L));
                g_25[2][1][0] = (l_856 = l_856);
            }
        }
        g_90[2] = (g_24 = g_90[2]);
    }
    l_856 = l_856;
    return l_899[1];
}







static unsigned short func_5(int p_6, unsigned p_7, unsigned p_8, struct S0 p_9, char p_10)
{
    unsigned char l_646[5];
    struct S1 l_681 = {0x411ED91AL,-1L};
    unsigned short l_698 = 3UL;
    unsigned short l_704[9][10] = {{0x5B81L,65526UL,0x211AL,0x7190L,0x1E9AL,65534UL,65534UL,0x1E9AL,0x7190L,0x211AL},{0x73CFL,0x73CFL,0UL,0xD9E7L,0x9B14L,0x0CC5L,0x5457L,1UL,0x7BA8L,65526UL},{65535UL,0xF24AL,1UL,0x1E9AL,0UL,0x22C2L,0x5457L,65534UL,65535UL,0x811AL},{0x7190L,0x73CFL,0x2826L,65535UL,65526UL,0x2826L,65534UL,0xD9E7L,1UL,65535UL},{1UL,65526UL,65534UL,0x0565L,65535UL,0x7BA8L,65535UL,0x0565L,65534UL,65526UL},{1UL,0x22C2L,65534UL,65535UL,0x211AL,0x8CACL,0xD9E7L,0x7190L,0x8CACL,0x9B14L},{65535UL,1UL,0x2826L,65535UL,0x1E9AL,0x8CACL,0x764FL,0x73CFL,0x211AL,65534UL},{1UL,0x5457L,0x73D3L,0xA878L,0x1E9AL,0x9D40L,0x1DCBL,0x5457L,65534UL,0x811AL},{0x5457L,0x2826L,0x764FL,0x9B14L,0x22C2L,0x22C2L,0x9B14L,0x764FL,0x2826L,0x5457L}};
    int l_712 = 8L;
    unsigned char l_729[3];
    struct S0 l_785 = {0L,2UL,65531UL,0x3EC710CEL,0x147621DAL,0x3EA4D99BL};
    int l_821 = (-1L);
    int i, j;
    for (i = 0; i < 5; i++)
        l_646[i] = 0x2AL;
    for (i = 0; i < 3; i++)
        l_729[i] = 0x5FL;
    for (p_9.f2 = 0; (p_9.f2 <= 1); p_9.f2 += 1)
    {
        int l_649 = 0x66B615EDL;
        struct S0 l_730[2] = {{-1L,65535UL,1UL,0xDBF3BD7EL,4294967295UL,1L},{-1L,65535UL,1UL,0xDBF3BD7EL,4294967295UL,1L}};
        struct S1 l_752[9][9][1] = {{{{0x579ED494L,0L}},{{0xDF590FB9L,0x85013E33L}},{{4294967295UL,1L}},{{0UL,-1L}},{{1UL,0x357A63F9L}},{{5UL,0xED297CBDL}},{{0UL,0x33435641L}},{{0xBB41BDCEL,0xD4DA32C7L}},{{0UL,0x0B7C2122L}}},{{{0UL,0xE3C5E505L}},{{1UL,0x893FB42CL}},{{9UL,1L}},{{1UL,3L}},{{4294967289UL,0x26C58536L}},{{4294967289UL,0xD3C596A4L}},{{0UL,7L}},{{0UL,7L}},{{4294967289UL,0xD3C596A4L}}},{{{4294967289UL,0x26C58536L}},{{1UL,3L}},{{9UL,1L}},{{1UL,0x893FB42CL}},{{0UL,0xE3C5E505L}},{{0UL,0x0B7C2122L}},{{0xBB41BDCEL,0xD4DA32C7L}},{{0UL,0x33435641L}},{{5UL,0xED297CBDL}}},{{{1UL,0x357A63F9L}},{{0UL,-1L}},{{4294967295UL,1L}},{{0xDF590FB9L,0x85013E33L}},{{0x579ED494L,0L}},{{0x5D78FA37L,0xF840D1BCL}},{{4294967295UL,0x8774B3B8L}},{{4294967287UL,0L}},{{4294967295UL,0x8774B3B8L}}},{{{0x5D78FA37L,0xF840D1BCL}},{{0x579ED494L,0L}},{{0xDF590FB9L,0x85013E33L}},{{4294967295UL,1L}},{{0UL,-1L}},{{1UL,0x357A63F9L}},{{5UL,0xED297CBDL}},{{0UL,0x33435641L}},{{0xBB41BDCEL,0xD4DA32C7L}}},{{{0UL,0x0B7C2122L}},{{0UL,0xE3C5E505L}},{{1UL,0x893FB42CL}},{{9UL,1L}},{{1UL,3L}},{{4294967289UL,0x26C58536L}},{{4294967289UL,0xD3C596A4L}},{{0UL,7L}},{{0UL,7L}}},{{{4294967289UL,0xD3C596A4L}},{{4294967289UL,0x26C58536L}},{{1UL,3L}},{{9UL,1L}},{{1UL,0x893FB42CL}},{{0UL,0xE3C5E505L}},{{0UL,0x0B7C2122L}},{{0xBB41BDCEL,0xD4DA32C7L}},{{0UL,0x33435641L}}},{{{5UL,0xED297CBDL}},{{1UL,0x357A63F9L}},{{0UL,-1L}},{{4294967295UL,1L}},{{0xDF590FB9L,0x85013E33L}},{{0x579ED494L,0L}},{{0x5D78FA37L,0xF840D1BCL}},{{4294967295UL,0x8774B3B8L}},{{4294967287UL,0L}}},{{{4294967295UL,0x8774B3B8L}},{{0x5D78FA37L,0xF840D1BCL}},{{0x579ED494L,0L}},{{0xDF590FB9L,0x85013E33L}},{{1UL,3L}},{{4294967287UL,0x64B70A12L}},{{5UL,0xED297CBDL}},{{0x28F3BF48L,0x27DA26E7L}},{{1UL,0x60B62850L}}}};
        struct S0 l_755 = {0x470D0503L,0xA0E6L,0x15F1L,0xBB7352CAL,0x3C02838AL,0xB45A68F8L};
        int l_768[4];
        unsigned short l_811[3];
        int l_822 = 0x27A64420L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_768[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_811[i] = 0xBC90L;
        if (g_317[p_9.f2])
            break;
        if ((safe_add_func_int16_t_s_s((((g_317[(p_9.f2 + 4)] = (safe_sub_func_int8_t_s_s(l_646[2], p_9.f4))) , l_646[2]) < (((g_641.f5 = (-1L)) > (g_257.f5 = (safe_lshift_func_int16_t_s_s(g_263[0], l_649)))) == ((g_257.f1 && 0xD1B6L) , (safe_sub_func_uint16_t_u_u(p_9.f1, g_25[0][2][1].f5))))), l_646[4])))
        {
            int l_654[3];
            struct S1 l_663 = {0x972E2B01L,1L};
            struct S0 l_664 = {0xD71B4FD0L,65527UL,0x3B52L,0x03A12F26L,0xC5398A85L,-1L};
            unsigned short l_665[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            int i;
            for (i = 0; i < 3; i++)
                l_654[i] = 0x11F9488AL;
            l_664 = ((((!(func_36((safe_mod_func_int16_t_s_s(l_654[1], 0x19FAL))) , g_317[(p_9.f2 + 4)])) || ((g_641.f1 = (safe_rshift_func_uint8_t_u_u(((((p_9 , p_9.f0) > func_46((safe_mod_func_uint32_t_u_u(g_317[(p_9.f2 + 4)], ((l_649 = func_51((safe_sub_func_uint16_t_u_u((l_654[1] ^ ((4294967288UL || 0x1BA8B8E1L) >= l_646[2])), 0x9031L)), p_9.f1, p_9.f3, p_9.f5, l_646[2])) & 0x3F67L))), l_663, p_9, l_664)) || l_665[0]) >= 0UL), 3))) > g_257.f3)) , 0x04L) , l_664);
            if (p_9.f4)
                break;
        }
        else
        {
            struct S1 l_667 = {0xF6AD0196L,0x83A6ACAAL};
            int l_679 = 0L;
            struct S1 l_699 = {0x521A305EL,-1L};
            for (g_257.f3 = 0; (g_257.f3 <= 1); g_257.f3 += 1)
            {
                unsigned char l_666 = 1UL;
                int l_678 = 0x8BAF3E25L;
                int i, j;
                if (((((((l_666 , (l_666 && func_40(l_667, p_9, ((safe_lshift_func_int8_t_s_s((((g_2[g_257.f3][(p_9.f2 + 4)] = (safe_rshift_func_int16_t_s_s(p_9.f1, 7))) != (safe_add_func_int8_t_s_s(((l_679 = ((g_317[(p_9.f2 + 4)] = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_666, g_25[0][2][1].f4)), ((l_678 = l_666) != ((g_328 = l_667.f0) || 0UL))))) > l_646[3])) | p_10), p_9.f5))) == l_667.f1), p_9.f3)) , 2UL), g_102[1][0], p_9.f3))) ^ l_666) >= g_25[0][2][1].f5) && p_10) , l_666) | l_646[2]))
                {
                    unsigned short l_684[10] = {0x156DL,0UL,0UL,0x156DL,0UL,0UL,0x156DL,0UL,0UL,0x156DL};
                    int i;
                    if (p_6)
                    {
                        struct S0 l_680 = {3L,0xEE79L,65526UL,0xED1C5897L,0UL,-10L};
                        l_680 = g_257;
                        l_680 = g_25[2][2][1];
                    }
                    else
                    {
                        int i, j;
                        l_681 = g_84;
                        g_2[p_9.f2][(p_9.f2 + 5)] = (safe_rshift_func_uint8_t_u_u(((((+((p_9 , (p_9.f4 ^ ((0xD22CL <= 0x0E9BL) | l_684[6]))) , 0x778F3B71L)) ^ 0xC4C69DF6L) && ((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(func_51(((g_257.f1 > func_40(func_64(g_25[0][2][1].f3, l_649, g_641.f3, p_9.f1), g_141, l_678, p_9.f1, p_9.f1)) , p_9.f1), l_678, g_257.f5, g_257.f4, g_641.f3), 0x2EL)) != g_263[1]), 7L)) ^ p_10), g_102[0][2])) && g_257.f5)) | 0xE232L), 4));
                    }
                }
                else
                {
                    unsigned l_697 = 4294967295UL;
                    p_9.f5 = (((safe_sub_func_uint8_t_u_u(((0x34C2L <= l_666) != func_60((g_141.f5 , ((safe_add_func_uint8_t_u_u(((func_51(l_681.f1, (safe_div_func_uint16_t_u_u(p_9.f4, (g_474 | l_697))), g_257.f5, l_697, p_9.f1) == l_698) , l_679), 0x4AL)) ^ g_641.f0)), l_699, g_700)), p_8)) ^ 255UL) , l_697);
                }
                for (g_135 = 0; (g_135 <= 1); g_135 += 1)
                {
                    int i, j, k;
                    g_25[(p_9.f2 + 1)][(g_257.f3 + 1)][(g_135 + 1)] = g_25[g_257.f3][g_257.f3][(g_257.f3 + 1)];
                    g_25[g_257.f3][g_257.f3][(g_257.f3 + 1)].f5 = g_88[g_257.f3][g_135][g_257.f3];
                    for (g_641.f0 = 2; (g_641.f0 >= 0); g_641.f0 -= 1)
                    {
                        int i, j, k;
                        g_25[1][2][1] = g_25[(p_9.f2 + 1)][(g_257.f3 + 1)][(p_9.f2 + 1)];
                    }
                    return l_666;
                }
                for (g_641.f2 = 0; (g_641.f2 <= 1); g_641.f2 += 1)
                {
                    struct S0 l_703 = {0x03DEB0B4L,0x25A8L,0x26BAL,0xBAB33E43L,0x630F5FC1L,0x6C815F25L};
                    int i, j, k;
                    p_9.f5 = (g_88[(g_641.f2 + 2)][g_641.f2][(g_257.f3 + 3)] , (l_681.f0 == (safe_lshift_func_int16_t_s_u((l_703 , (l_699.f1 = p_9.f4)), 14))));
                    l_649 = (p_6 <= 0x78368DFEL);
                }
            }
        }
        p_9.f5 = (g_25[0][2][1] , l_704[5][0]);
        for (p_8 = 0; (p_8 <= 1); p_8 += 1)
        {
            struct S0 l_705[5] = {{0xC18D08AAL,0xC4E4L,0x0AC8L,8L,0UL,-3L},{0xC18D08AAL,0xC4E4L,0x0AC8L,8L,0UL,-3L},{0xC18D08AAL,0xC4E4L,0x0AC8L,8L,0UL,-3L},{0xC18D08AAL,0xC4E4L,0x0AC8L,8L,0UL,-3L},{0xC18D08AAL,0xC4E4L,0x0AC8L,8L,0UL,-3L}};
            struct S1 l_746 = {0x7648F037L,9L};
            unsigned short l_764 = 65529UL;
            unsigned short l_765 = 0UL;
            int i;
            l_705[3] = (l_705[3] , p_9);
            for (l_681.f1 = 0; (l_681.f1 <= 1); l_681.f1 += 1)
            {
                int i, j;
                g_25[0][2][1].f5 = (g_2[p_9.f2][(p_8 + 1)] = (((safe_rshift_func_int8_t_s_s((l_705[3].f2 || g_90[2].f1), ((safe_add_func_int16_t_s_s(p_7, p_9.f0)) | (safe_rshift_func_uint8_t_u_u((l_712 = (g_25[0][2][1].f2 & l_704[6][8])), 6))))) ^ g_84.f0) , (!p_8)));
                l_705[3].f5 = ((g_641.f5 = (safe_sub_func_int8_t_s_s((((g_257.f3 < 4294967291UL) | (g_141 , ((safe_lshift_func_int16_t_s_u((func_46(((safe_mod_func_int32_t_s_s(g_25[0][2][1].f3, 1L)) , (safe_div_func_int16_t_s_s((l_705[3].f4 | g_700.f1), ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(255UL, 6)), ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((~l_705[3].f3), 65528UL)), 0xBB18L)) , l_729[1]))) ^ p_9.f1)))), l_681, p_9, l_730[1]) > 1L), 12)) < p_9.f3))) , g_171), 0xB8L))) & 0xE33B41C9L);
            }
            for (g_257.f5 = (-23); (g_257.f5 < 7); g_257.f5++)
            {
                unsigned short l_737[6];
                struct S1 l_745 = {8UL,0x7A6B9FD5L};
                int i;
                for (i = 0; i < 6; i++)
                    l_737[i] = 1UL;
                l_705[3].f5 = func_60((p_9.f5 || ((g_744 = ((safe_lshift_func_uint8_t_u_s((g_102[1][2] = func_60(l_649, l_681, l_681)), 6)) || ((safe_div_func_uint32_t_u_u((g_641.f3 , ((((((g_257.f1 = 0xAB88L) || ((g_102[1][0] = (l_737[5] >= (safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(1UL, p_9.f2)) != 3L), p_8)) > 0UL) , l_705[3].f0), p_9.f5)))) < g_257.f1)) && 0x5CL) , p_9.f5) > l_737[0]) , 0x3199DD85L)), l_649)) , 65534UL))) == 255UL)), l_745, l_746);
            }
            for (g_328 = 20; (g_328 >= 8); g_328 = safe_sub_func_int16_t_s_s(g_328, 5))
            {
                struct S1 l_751 = {0x41C8EB24L,1L};
                struct S0 l_784 = {0L,65535UL,0UL,1L,1UL,0x9FFB74C3L};
                unsigned l_801 = 2UL;
                struct S0 l_831[3][2] = {{{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L},{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L}},{{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L},{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L}},{{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L},{-1L,3UL,0x5175L,-1L,0x9908CE2EL,-1L}}};
                int i, j;
                for (g_474 = 11; (g_474 <= 29); g_474 = safe_add_func_uint32_t_u_u(g_474, 5))
                {
                    unsigned char l_753 = 1UL;
                    int l_754 = 4L;
                    struct S0 l_756 = {0xE3A843DBL,0xACCAL,1UL,0x2051FD8FL,0xA12A16D9L,1L};
                    int l_763 = 0x087ED49CL;
                    p_9.f5 = (l_754 = ((((func_64(g_700.f1, (g_744 > (((func_60(p_9.f4, l_751, l_752[1][6][0]) || p_7) <= (p_10 = func_40(l_681, p_9, l_646[2], g_2[0][4], l_746.f1))) > p_9.f3)), l_751.f1, g_641.f5) , 0xE3634037L) , l_753) < p_7) & 1UL));
                    l_756 = l_755;
                    for (g_700.f1 = 0; (g_700.f1 == (-29)); --g_700.f1)
                    {
                        return l_751.f0;
                    }
                    l_765 = (func_51((l_764 = ((safe_div_func_uint32_t_u_u((((g_25[0][2][1].f2 < p_9.f2) | ((g_762 = (safe_unary_minus_func_uint8_t_u(g_102[1][0]))) | l_751.f1)) == p_9.f0), l_730[1].f0)) || ((0x99L || func_51(g_744, func_51(func_60((((-1L) != g_84.f1) < g_25[0][2][1].f1), l_746, g_90[2]), l_712, g_328, g_3[1], l_705[3].f1), p_9.f5, g_700.f0, l_763)) <= l_705[3].f4))), l_646[0], l_646[4], g_3[0], l_681.f1) | (-1L));
                }
                g_141.f5 = 0xD0C206F6L;
                if ((func_60(g_90[2].f0, g_24, func_64(l_729[0], func_40(l_681, g_141, (((safe_rshift_func_uint16_t_u_s((l_755.f5 = (l_646[2] != 0x69L)), p_9.f2)) , g_257.f1) || p_9.f4), p_9.f1, l_681.f1), l_730[1].f4, l_768[3])) , (-3L)))
                {
                    char l_779 = 1L;
                    p_9.f5 = (safe_div_func_uint16_t_u_u((0xFE75C817L <= func_46(((safe_mod_func_uint16_t_u_u(p_8, (((safe_add_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((~(l_779 , g_257.f2)), (l_681.f1 , ((-10L) && p_9.f2)))), (safe_rshift_func_int16_t_s_u(func_51((safe_sub_func_int32_t_s_s(func_46(((0x3CL <= ((1UL & 0xF5311755L) < (-2L))) <= p_8), l_751, l_784, l_785), g_641.f2)), l_705[3].f5, l_764, p_9.f3, p_9.f1), 12)))) & g_25[0][2][1].f3) != p_9.f1), l_785.f3)) != g_3[1]) | 0xCEL))) , 0xE7E3L), g_700, p_9, p_9)), g_328));
                    for (p_6 = 3; (p_6 >= 0); p_6 -= 1)
                    {
                        int i;
                        l_705[(p_6 + 1)] = l_705[(p_8 + 1)];
                        if (l_646[p_6])
                            break;
                    }
                    p_9.f5 = p_9.f4;
                }
                else
                {
                    char l_791 = 0x87L;
                    struct S0 l_797 = {0L,0x38F1L,65534UL,0x8FC0BA29L,0xD4B19BC7L,1L};
                    struct S1 l_810 = {0x3D014FB1L,0x817FDD50L};
                    int l_830[8] = {0xC0FE74EAL,0x93407449L,0x93407449L,0xC0FE74EAL,0x93407449L,0x93407449L,0xC0FE74EAL,0x93407449L};
                    struct S1 l_836 = {0x13FAE10EL,0x2A33A058L};
                    int i;
                    g_2[1][3] = ((p_9.f2 <= (safe_add_func_uint8_t_u_u((p_9.f0 <= p_9.f4), p_8))) != ((((safe_sub_func_uint32_t_u_u(((g_790[2][0][0] = (g_25[0][2][1].f5 == (g_90[2] , l_730[1].f5))) != ((l_751.f1 <= (((func_40(l_751, g_25[2][2][0], g_257.f0, g_2[0][9], p_9.f5) > p_9.f4) != 0x9347L) , g_24.f1)) || l_791)), 4294967293UL)) < 0x709DL) , 0UL) ^ 65531UL));
                    if ((p_9.f4 <= (l_712 = func_46(((l_751.f1 = (((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u((func_46((safe_div_func_uint8_t_u_u(func_40(g_84, (g_257 , l_797), g_25[0][2][1].f5, p_9.f4, p_9.f3), ((g_800 = (safe_sub_func_uint8_t_u_u((g_641.f5 >= g_424), 4UL))) | l_801))), l_752[1][6][0], l_755, l_730[1]) <= 0x5E3EL))) || (-1L)) || g_641.f3), p_9.f4)) > g_88[6][1][5]) & g_3[0])) , l_797.f2), l_752[1][6][0], l_784, g_641))))
                    {
                        unsigned l_812 = 0x901E953FL;
                        int l_813[10][7] = {{0L,0xC1FADC12L,0xC1FADC12L,0L,0L,9L,0L},{0L,0x855FCA43L,0x855FCA43L,0L,0x0A60B9BAL,0xBBA7EFD9L,0x0A60B9BAL},{0L,0xC1FADC12L,0xC1FADC12L,0L,0L,9L,0L},{0L,0x855FCA43L,0x855FCA43L,0L,0x0A60B9BAL,0xBBA7EFD9L,0x0A60B9BAL},{0L,0xC1FADC12L,0xC1FADC12L,0L,0L,9L,0L},{0L,0x855FCA43L,0x855FCA43L,0L,0x0A60B9BAL,0xBBA7EFD9L,0x0A60B9BAL},{0L,0xC1FADC12L,0xC1FADC12L,0L,0L,9L,0L},{0L,0x855FCA43L,0x855FCA43L,0L,0x0A60B9BAL,0xBBA7EFD9L,0x0A60B9BAL},{0xE6397ABDL,0L,0L,0xE6397ABDL,(-4L),0xC1FADC12L,(-4L)},{0x19860E15L,0L,0L,0x19860E15L,0x7D650A0DL,0x855FCA43L,0x7D650A0DL}};
                        int i, j;
                        l_705[3].f5 = g_141.f1;
                        if (g_641.f5)
                            break;
                        l_813[9][4] = (p_10 , (func_51((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s(l_764, 1UL)) != (g_252 || g_641.f2)), (p_9.f4 | (l_784.f5 = ((p_7 >= p_9.f0) , (safe_div_func_uint16_t_u_u(func_60(g_84.f0, l_810, l_810), p_9.f0))))))), 3UL)), l_730[1].f2, l_811[1], l_812, l_784.f4) & 0x9B37L));
                        if (g_3[1])
                            continue;
                    }
                    else
                    {
                        short l_820 = 0L;
                        struct S0 l_823 = {-2L,0x4787L,0UL,0xAE35145BL,4294967290UL,-3L};
                        g_641.f5 = (((safe_lshift_func_uint8_t_u_u((l_746.f1 = (safe_add_func_int16_t_s_s(g_790[2][0][0], g_257.f3))), func_46((safe_lshift_func_int16_t_s_u((((l_820 == l_797.f1) < (p_10 , (g_102[1][1] = p_7))) && l_821), 6)), l_681, l_797, g_25[0][0][1]))) , g_700.f1) <= p_9.f5);
                        l_822 = g_25[0][2][1].f3;
                        g_84.f1 = g_641.f4;
                        l_823 = g_141;
                    }
                    l_751.f1 = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((!(l_768[2] != (func_51(l_830[5], (l_831[2][0] , (safe_add_func_uint16_t_u_u(((((l_746.f1 = (0xBC46L ^ 65529UL)) && g_252) || func_60((l_751 , (safe_mod_func_uint16_t_u_u((func_60((g_800 = ((l_764 > (~g_252)) && g_141.f3)), g_700, l_836) & g_252), l_831[2][0].f0))), l_752[6][6][0], l_746)) == g_25[0][2][1].f0), g_641.f4))), p_7, g_25[0][2][1].f0, l_784.f4) == (-5L)))), p_9.f4)), g_474)) | 0x02010689L);
                }
            }
        }
    }
    return l_729[1];
}







static short func_19(struct S1 p_20, char p_21, struct S0 p_22, short p_23)
{
    int l_606[4];
    struct S0 l_608 = {0xF8FBCE8FL,0xA76BL,0x6ADCL,0xE51177DBL,5UL,0x10E88E2BL};
    int i;
    for (i = 0; i < 4; i++)
        l_606[i] = 4L;
    p_22.f5 = func_26(g_24, g_2[1][1]);
    g_25[0][2][1] = g_141;
    for (p_22.f2 = (-9); (p_22.f2 > 24); p_22.f2++)
    {
        short l_587 = 0x87C3L;
        unsigned short l_588 = 65531UL;
        int l_637 = 0xF1688D4CL;
        p_22.f5 = (p_22.f3 >= p_22.f4);
        if (p_22.f1)
        {
            if (g_263[1])
                break;
        }
        else
        {
            unsigned l_584[3];
            int l_589 = 2L;
            struct S0 l_614 = {0x6C1CB9C3L,1UL,7UL,0x06D43674L,4294967295UL,-6L};
            int i;
            for (i = 0; i < 3; i++)
                l_584[i] = 0xDF75F7AAL;
            if ((((g_317[2] != 65535UL) ^ (p_22.f4 < (safe_rshift_func_int8_t_s_s((l_589 = ((safe_div_func_int8_t_s_s(p_20.f1, (~(safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((g_84.f1 = (safe_add_func_uint16_t_u_u((((((func_64(g_2[0][2], (safe_rshift_func_uint16_t_u_u(0x28D0L, 6)), ((l_584[1] <= p_20.f0) >= (((safe_mod_func_int32_t_s_s((l_587 = p_20.f0), p_21)) < p_22.f1) ^ 0xACL)), l_588) , 0x039EE07EL) , 1UL) ^ g_171) | 65535UL) <= l_584[1]), l_584[1]))) && g_141.f2) < 4294967294UL), g_263[0])), p_20.f1))))) > l_588)), 3)))) , 0xE26E571EL))
            {
                unsigned short l_607 = 0xAEEBL;
                struct S0 l_613 = {-1L,0xEC7EL,0x20C6L,-1L,0xF99EF50DL,0x6A42E785L};
                struct S1 l_620 = {0x0EE047B0L,0L};
                g_317[0] = ((p_23 ^ (p_21 > p_22.f0)) || ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_25[0][2][1].f4 <= ((((g_2[0][6] , (safe_lshift_func_int8_t_s_u(g_181, 6))) || (((((safe_lshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s(p_23, (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_24.f1, (safe_add_func_int16_t_s_s(g_225, p_22.f5)))), l_606[3])))) | 1UL) == 0xA5L), 5)) != l_607) & 1L) != p_23) | p_22.f1)) ^ 0x8DECL) , 0x7982L)), 6)), 6L)) & p_21));
                g_141.f5 = l_607;
                l_608 = g_25[0][2][1];
                for (l_608.f2 = 0; (l_608.f2 <= 5); l_608.f2 += 1)
                {
                    int i;
                    g_90[3] = func_64(((g_317[l_608.f2] , (g_317[l_608.f2] = ((g_257.f4 = g_317[l_608.f2]) != (safe_add_func_int32_t_s_s((((~((g_317[l_608.f2] , g_317[l_608.f2]) >= (((l_589 = (safe_sub_func_int8_t_s_s((0x09L == ((p_22.f3 = (g_317[l_608.f2] || ((func_40((g_90[1] = g_24), g_25[0][2][1], l_584[2], g_317[l_608.f2], p_22.f3) != p_20.f0) | 0x56L))) , g_257.f2)), 0x2AL))) && 0x000EL) , 0xCBL))) != l_587) || 0x7BD8L), g_24.f0))))) >= 0UL), g_263[1], p_22.f4, p_22.f5);
                    l_614 = l_613;
                    l_614.f5 = (p_20.f1 = (g_317[l_608.f2] = p_22.f4));
                    if (g_88[1][1][5])
                    {
                        struct S0 l_615 = {-1L,65531UL,0UL,-1L,9UL,0xC4363D06L};
                        l_613 = l_615;
                        p_22.f5 = ((safe_div_func_uint32_t_u_u((p_20 , ((0x2EL ^ (g_141.f1 , ((safe_div_func_uint32_t_u_u(p_22.f2, ((l_620 = (((p_22.f4 == func_40(g_24, p_22, (4294967295UL & (((p_23 <= l_615.f3) <= p_20.f1) , l_608.f1)), l_587, p_22.f2)) | g_88[6][0][2]) , p_20)) , p_21))) < g_24.f1))) | 0UL)), 0x639BF657L)) ^ g_141.f5);
                        p_20.f1 = ((safe_lshift_func_uint8_t_u_s(((4294967295UL == p_20.f1) < (p_20.f0 , g_257.f1)), 7)) ^ (g_102[1][2] >= (safe_add_func_uint8_t_u_u(g_263[0], p_22.f3))));
                        l_608.f5 = p_23;
                    }
                    else
                    {
                        p_22.f5 = (-1L);
                    }
                    for (g_24.f1 = 2; (g_24.f1 >= 0); g_24.f1 -= 1)
                    {
                        g_317[l_608.f2] = l_607;
                        if (l_588)
                            break;
                    }
                }
            }
            else
            {
                int l_627 = 0L;
                l_627 = (safe_lshift_func_int16_t_s_s(0x5A30L, 9));
                if (l_588)
                    break;
                return g_424;
            }
        }
        for (l_608.f4 = 0; (l_608.f4 <= 1); l_608.f4 += 1)
        {
            short l_635 = (-3L);
            for (p_22.f3 = 0; (p_22.f3 <= 3); p_22.f3 += 1)
            {
                short l_636 = 0xD405L;
                int i, j, k;
                for (g_141.f3 = 0; (g_141.f3 <= 2); g_141.f3 += 1)
                {
                    char l_632 = 0x10L;
                    int i, j, k;
                    if ((((l_635 = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(func_40(g_90[(g_141.f3 + 1)], g_25[g_141.f3][l_608.f4][l_608.f4], (l_608.f5 = (g_474 = g_263[l_608.f4])), ((g_102[l_608.f4][g_141.f3] ^ ((p_22.f4 = l_632) & g_252)) , (safe_div_func_uint16_t_u_u((p_22.f1 = 0UL), (l_606[3] = (g_24 , g_257.f2))))), p_21), g_88[5][0][2])), g_181))) < p_20.f0) <= l_588))
                    {
                        g_25[0][2][1].f5 = p_23;
                    }
                    else
                    {
                        int i;
                        g_90[p_22.f3] = func_64(g_171, l_588, l_608.f0, ((g_252 = p_22.f1) , (g_25[0][2][1].f3 = (0xAA539860L > (g_84 , p_22.f1)))));
                        if (g_25[g_141.f3][l_608.f4][l_608.f4].f3)
                            break;
                    }
                    return l_587;
                }
                l_636 = l_606[2];
                g_25[l_608.f4][(l_608.f4 + 1)][l_608.f4] = l_608;
            }
            for (g_141.f5 = 1; (g_141.f5 >= 0); g_141.f5 -= 1)
            {
                int l_638 = 0L;
                int i;
                l_638 = (g_257.f5 = ((l_637 = g_263[g_141.f5]) ^ (-5L)));
            }
        }
    }
    return p_22.f5;
}







static int func_26(struct S1 p_27, unsigned char p_28)
{
    unsigned l_35[10][5][5] = {{{0x66755D88L,0x35A82D26L,0x690C290AL,3UL,5UL},{0UL,1UL,0x1537C3E8L,0x0BE999AAL,0x14278D6BL},{0UL,5UL,0xBD359D2DL,0x35A82D26L,5UL},{0x22BDA668L,0x0BE999AAL,5UL,0xD2C86D4CL,1UL},{5UL,0x91F7CAE9L,0UL,0UL,4294967295UL}},{{4294967295UL,0UL,0x22BDA668L,0x54706CD8L,0x66755D88L},{0UL,4294967295UL,0UL,0UL,0xF9279698L},{4294967292UL,4294967295UL,0x66755D88L,0x5BB1E24EL,4294967295UL},{0x1537C3E8L,1UL,1UL,0x5391C298L,0xC47FC0BDL},{0xA718AF62L,4294967286UL,4294967292UL,0x14278D6BL,0x22BDA668L}},{{0x6BEAEC5EL,4294967291UL,0xD2C86D4CL,0x14278D6BL,0x70407C53L},{0x390401A7L,4294967295UL,0x3C50B10BL,0x5391C298L,0UL},{0xB035B408L,4294967291UL,0UL,0x5BB1E24EL,0x811FBA65L},{0x27A37A7FL,4294967287UL,5UL,0UL,0xAE90203CL},{4294967291UL,0UL,4294967286UL,0x54706CD8L,5UL}},{{0x00C9FB39L,0xB035B408L,0xB0934BFCL,0UL,0UL},{0UL,0UL,0x0BE999AAL,0xC47FC0BDL,4294967295UL},{0UL,0xC514D69EL,0xC9C813C7L,1UL,0UL},{0x14278D6BL,0UL,0xBD359D2DL,0xD37137C2L,0UL},{4294967295UL,0x70407C53L,0xC9C813C7L,0UL,0xABE080F9L}},{{0x85721BA6L,0xB035B408L,0x0BE999AAL,4294967287UL,4294967295UL},{4294967292UL,4294967295UL,4294967286UL,0x35A82D26L,4294967286UL},{0UL,0UL,5UL,0x6BEAEC5EL,0x479274D8L},{0x00C9FB39L,5UL,0x6A58E0DEL,4294967295UL,0x5339FE21L},{0x70407C53L,0x390401A7L,0x00C9FB39L,0UL,0x811FBA65L}},{{0xC6011814L,0x3C50B10BL,4294967287UL,0x70407C53L,0x5391C298L},{4294967291UL,0xF9279698L,0xC47FC0BDL,0UL,0UL},{0x0A650A97L,0xF9279698L,4294967295UL,0x22BDA668L,0x85721BA6L},{4294967295UL,0x3C50B10BL,0x5391C298L,0UL,0x0BE999AAL},{0xD37137C2L,0x390401A7L,4294967295UL,4294967295UL,0x57037A9EL}},{{0xBD359D2DL,5UL,0UL,0UL,0x1537C3E8L},{4294967292UL,0UL,0x85020063L,0xF2F28949L,4294967286UL},{0UL,4294967295UL,6UL,6UL,4294967295UL},{0UL,0xB035B408L,0x57037A9EL,0xAE90203CL,0UL},{0x57037A9EL,0x70407C53L,4294967286UL,0x91F7CAE9L,0UL}},{{0x30F0864FL,0xB035B408L,1UL,0UL,0xF2F28949L},{0UL,0x5391C298L,0UL,6UL,4294967291UL},{0UL,0x27A37A7FL,0xB035B408L,0xC9C813C7L,1UL},{0x27A37A7FL,0x57037A9EL,4294967295UL,0xD2C86D4CL,0x1537C3E8L},{0xBB161CA2L,0xBD359D2DL,0x22BDA668L,0UL,0x6A58E0DEL}},{{0x811FBA65L,4294967290UL,0x0A650A97L,4294967286UL,1UL},{0xC47FC0BDL,0UL,0xC9C813C7L,0x35A82D26L,0x14278D6BL},{4294967291UL,0xC9C813C7L,0x479274D8L,5UL,0x70407C53L},{4294967286UL,0x1537C3E8L,0xABE080F9L,0x54706CD8L,0x70407C53L},{4294967290UL,0UL,4294967295UL,0x8952EB5FL,0x14278D6BL}},{{0UL,0x8952EB5FL,0x54706CD8L,4294967286UL,1UL},{0UL,0x30F0864FL,4294967286UL,0x22BDA668L,0x6A58E0DEL},{0xA1441E23L,0x14278D6BL,0xC47FC0BDL,4294967295UL,0x1537C3E8L},{0x66755D88L,0xD2C86D4CL,0xF9279698L,0xA718AF62L,1UL},{0x30F0864FL,5UL,5UL,0x30F0864FL,4294967291UL}}};
    int l_569[7][9][4] = {{{0x67ABBB9EL,0L,0L,0x73E01E53L},{0x7811AC45L,(-1L),(-1L),0x7811AC45L},{0x7811AC45L,0xE97D7422L,0L,0L},{0x67ABBB9EL,0x7811AC45L,0xA9ED1030L,(-1L)},{0x73E01E53L,0x1432959EL,0x73E01E53L,(-1L)},{0xA9ED1030L,0x7811AC45L,(-1L),0x67ABBB9EL},{0L,0L,0x73E01E53L,0x73E01E53L},{0xE97D7422L,0xE97D7422L,0x73E01E53L,0xA9ED1030L},{0L,0x1432959EL,(-1L),0L}},{{0L,(-1L),0xA9ED1030L,(-1L)},{0xA9ED1030L,(-1L),0L,0L},{(-1L),0x1432959EL,0L,0xA9ED1030L},{0x73E01E53L,0xE97D7422L,0xE97D7422L,0x73E01E53L},{0x73E01E53L,0L,0L,0x67ABBB9EL},{(-1L),0x73E01E53L,0L,0x7811AC45L},{0xA9ED1030L,(-1L),0xA9ED1030L,0x7811AC45L},{0L,0x73E01E53L,(-1L),0x67ABBB9EL},{0L,0L,0x73E01E53L,0x73E01E53L}},{{0xE97D7422L,0xE97D7422L,0x73E01E53L,0xA9ED1030L},{0L,0x1432959EL,(-1L),0L},{0L,(-1L),0xA9ED1030L,(-1L)},{0xA9ED1030L,(-1L),0L,0L},{(-1L),0x1432959EL,0L,0xA9ED1030L},{0x73E01E53L,0xE97D7422L,0xE97D7422L,0x73E01E53L},{0x73E01E53L,0L,0L,0x67ABBB9EL},{(-1L),0x73E01E53L,0L,0x7811AC45L},{0xA9ED1030L,(-1L),0xA9ED1030L,0x7811AC45L}},{{0L,0x73E01E53L,(-1L),0x67ABBB9EL},{0L,0L,0x73E01E53L,0x73E01E53L},{0xE97D7422L,(-1L),(-1L),0xE97D7422L},{0x73E01E53L,0xA9ED1030L,0x1432959EL,0x7811AC45L},{0L,0x1432959EL,0xE97D7422L,0x1432959EL},{0xE97D7422L,0x1432959EL,0L,0x7811AC45L},{0x1432959EL,0xA9ED1030L,0x73E01E53L,0xE97D7422L},{(-1L),(-1L),(-1L),(-1L)},{(-1L),0x7811AC45L,0x73E01E53L,0L}},{{0x1432959EL,(-1L),0L,0x67ABBB9EL},{0xE97D7422L,0L,0xE97D7422L,0x67ABBB9EL},{0L,(-1L),0x1432959EL,0L},{0x73E01E53L,0x7811AC45L,(-1L),(-1L)},{(-1L),(-1L),(-1L),0xE97D7422L},{0x73E01E53L,0xA9ED1030L,0x1432959EL,0x7811AC45L},{0L,0x1432959EL,0xE97D7422L,0x1432959EL},{0xE97D7422L,0x1432959EL,0L,0x7811AC45L},{0x1432959EL,0xA9ED1030L,0x73E01E53L,0xE97D7422L}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),0x7811AC45L,0x73E01E53L,0L},{0x1432959EL,(-1L),0L,0x67ABBB9EL},{0xE97D7422L,0L,0xE97D7422L,0x67ABBB9EL},{0L,(-1L),0x1432959EL,0L},{0x73E01E53L,0x7811AC45L,(-1L),(-1L)},{(-1L),(-1L),(-1L),0xE97D7422L},{0x73E01E53L,0xA9ED1030L,0x1432959EL,0x7811AC45L},{0L,(-1L),0L,(-1L)}},{{0L,(-1L),0L,0x73E01E53L},{(-1L),0L,0xA9ED1030L,0L},{0xE97D7422L,0x7811AC45L,0x7811AC45L,0xE97D7422L},{0xE97D7422L,0x73E01E53L,0xA9ED1030L,0x1432959EL},{(-1L),0xE97D7422L,0L,(-1L)},{0L,0x67ABBB9EL,0L,(-1L)},{0L,0xE97D7422L,(-1L),0x1432959EL},{0xA9ED1030L,0x73E01E53L,0xE97D7422L,0xE97D7422L},{0x7811AC45L,0x7811AC45L,0xE97D7422L,0L}}};
    int i, j, k;
    g_25[0][2][1].f5 = 0L;
    for (p_28 = 0; (p_28 <= 24); p_28 = safe_add_func_int8_t_s_s(p_28, 3))
    {
        p_27.f1 = 0xB7286010L;
    }
    for (p_27.f0 = 0; (p_27.f0 == 21); p_27.f0++)
    {
        return g_25[0][2][1].f2;
    }
    l_569[2][5][3] = ((!(((safe_lshift_func_uint16_t_u_u(l_35[6][4][1], ((l_35[4][1][2] >= g_3[0]) >= g_25[0][2][1].f2))) >= func_36(l_35[0][2][3])) , 0x041FL)) || 0xAE83L);
    return g_328;
}







static unsigned func_36(unsigned char p_37)
{
    struct S1 l_57 = {4UL,0x93F4BB62L};
    unsigned char l_69 = 1UL;
    int l_188 = 1L;
    struct S0 l_290 = {-4L,1UL,0x5687L,-6L,3UL,7L};
    int l_304 = 0x825BB455L;
    unsigned l_320 = 0xD1B7BA88L;
    unsigned l_386 = 0x39B553B6L;
    int l_566 = 0x38FC12DBL;
    char l_568 = 0x6DL;
    l_290.f5 = (safe_div_func_int32_t_s_s(func_40((func_46((((0x00D476A2L > (func_51((l_57 , p_37), p_37, l_57.f1, (((safe_lshift_func_int8_t_s_s(((func_60(p_37, g_24, func_64(l_57.f1, (p_37 || 65527UL), l_57.f1, l_69)) & 9UL) != g_3[1]), p_37)) >= 0L) , l_188), l_69) & p_37)) > g_171) || 255UL), l_57, g_257, g_257) , l_57), l_290, g_3[1], p_37, g_25[0][2][1].f0), g_25[0][2][1].f0));
    if ((safe_lshift_func_int8_t_s_u(0xA3L, 6)))
    {
        unsigned short l_303 = 1UL;
        int l_305 = 0x4C627817L;
        struct S1 l_306[7] = {{0xF9AAEA8AL,5L},{0UL,0L},{0xF9AAEA8AL,5L},{0xF9AAEA8AL,5L},{0UL,0L},{0xF9AAEA8AL,5L},{0xF9AAEA8AL,5L}};
        int i;
        for (g_181 = 0; (g_181 == 42); ++g_181)
        {
            l_305 = (safe_mod_func_uint16_t_u_u((((((((p_37 >= (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_3[0], 1)), 1UL))) , func_51(((l_303 | 0xE60C6703L) , (-1L)), g_84.f1, func_40(func_64(l_303, l_57.f0, p_37, g_263[0]), g_257, p_37, l_304, g_257.f1), g_25[0][2][1].f3, l_303)) == 0xB5L) ^ p_37) , p_37) > g_25[0][2][1].f3) <= g_171), 9UL));
            l_188 = g_257.f5;
        }
        l_304 = (-1L);
        l_306[0] = l_306[0];
    }
    else
    {
        unsigned char l_311 = 8UL;
        int l_316 = 0x72F43A54L;
        struct S1 l_318 = {0x99A5FCF5L,0xD2AC3BA0L};
        unsigned short l_319 = 0x3642L;
        struct S0 l_321 = {1L,4UL,0x297BL,1L,1UL,9L};
        struct S0 l_323 = {0xA435054BL,65529UL,0xB4ADL,-10L,0UL,0xE4A5A28FL};
        unsigned short l_369 = 7UL;
        struct S0 l_387 = {0xCDDD9A3EL,0xC44EL,0x61DCL,0L,0x21785523L,-8L};
        unsigned char l_558 = 255UL;
        if (((((l_318.f1 = ((p_37 , (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_311 = p_37), p_37)), ((safe_lshift_func_int8_t_s_u(func_51(p_37, g_257.f5, (!(safe_lshift_func_int8_t_s_s(((l_316 = l_316) , g_317[3]), 1))), (l_318 , (g_263[1] = 4294967291UL)), p_37), 2)) & g_25[0][2][1].f2)))) > 0x6733L)) <= 0x76L) , l_319) | l_320))
        {
            struct S0 l_322 = {0L,5UL,0UL,1L,0x77C2C50FL,1L};
            l_321 = g_25[1][2][0];
            l_323 = l_322;
            g_24.f1 = 0x116B99E8L;
        }
        else
        {
            struct S0 l_331 = {0xA23419B1L,0xD99CL,65528UL,0x627531CDL,1UL,0x4406B3DEL};
            int l_332 = 0xC6A9D3CAL;
            struct S1 l_333[7] = {{4294967293UL,-9L},{4294967293UL,-9L},{4294967293UL,-9L},{4294967293UL,-9L},{4294967293UL,-9L},{4294967293UL,-9L},{4294967293UL,-9L}};
            int l_355[1][9][1];
            unsigned short l_372 = 1UL;
            unsigned l_448 = 4294967286UL;
            unsigned char l_557 = 255UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_355[i][j][k] = (-1L);
                }
            }
            if ((((g_328 = (safe_div_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_s(0x3F93L, g_24.f1))))) | (((g_25[0][2][1].f5 || (func_40(l_318, l_321, (func_40(g_90[3], l_331, ((l_332 = (l_57.f1 , 0UL)) == 0xE3L), g_141.f0, g_24.f0) > 4294967295UL), g_102[0][1], g_257.f0) < 0x5AL)) == 9L) ^ 4294967288UL)) | 0x0F5C0070L))
            {
                short l_348 = 0x3311L;
                int l_356 = 0L;
                int l_383[7] = {0x6548F604L,0x6548F604L,0x6548F604L,0x6548F604L,0x6548F604L,0x6548F604L,0x6548F604L};
                struct S0 l_395 = {-1L,65535UL,0xA31DL,0L,1UL,0xB60C1A2DL};
                int i;
                if (g_141.f1)
                {
                    struct S1 l_334 = {0x5D26FD42L,-6L};
                    l_334 = l_333[4];
                }
                else
                {
                    unsigned short l_335 = 0UL;
                    struct S1 l_346 = {0xF5E95EBBL,0xECB0D71EL};
                    struct S0 l_352 = {1L,65532UL,0UL,0xAC3184ADL,4294967291UL,0x89C71296L};
                    for (l_323.f4 = 0; (l_323.f4 <= 1); l_323.f4 += 1)
                    {
                        unsigned l_347 = 0xD5EF6F1BL;
                        struct S0 l_349 = {-10L,8UL,0x109BL,0xE476B1B1L,4294967290UL,0x52732D65L};
                        int i;
                        if (p_37)
                            break;
                        g_90[2].f1 = l_335;
                        g_90[2].f1 = ((l_333[4].f1 & ((safe_div_func_uint16_t_u_u((((l_332 | g_25[0][2][1].f2) | (safe_rshift_func_uint16_t_u_u((l_333[4].f0 == (g_181 = (safe_sub_func_uint32_t_u_u((l_290.f3 != (((l_304 = (g_25[0][2][1].f4 = (((g_263[l_323.f4] = l_335) == ((p_37 || ((l_346.f1 = (safe_sub_func_int16_t_s_s(func_51(g_141.f1, func_40(l_346, g_25[0][2][1], p_37, l_290.f1, p_37), l_347, g_3[1], g_25[0][2][1].f5), g_171))) || 0xDDD1L)) == 0x1BL)) == g_25[0][2][1].f3))) <= (-10L)) , p_37)), g_102[1][0])))), 5))) , l_290.f1), g_317[3])) || l_348)) , l_323.f0);
                        l_356 = (((p_37 >= func_40(l_318, (l_349 = g_25[0][2][1]), (g_88[5][0][4] = ((l_290.f5 = (safe_div_func_int8_t_s_s(p_37, p_37))) , (func_40((l_346 = g_24), l_352, (safe_lshift_func_int16_t_s_s((g_328 = l_352.f4), 8)), l_321.f5, g_141.f0) != (-1L)))), l_333[4].f0, l_355[0][5][0])) , 0x62C58EC2L) == p_37);
                    }
                }
                g_257 = l_323;
                for (l_321.f0 = 1; (l_321.f0 >= 0); l_321.f0 -= 1)
                {
                    struct S0 l_370 = {7L,0x8BA9L,0x5EA5L,1L,1UL,0x5A44C41CL};
                    int l_371 = 0L;
                    int i;
                    l_333[(l_321.f0 + 4)] = (((((safe_lshift_func_int8_t_s_s((l_331 , 4L), 2)) || (g_263[l_321.f0] && (g_263[l_321.f0] & ((safe_lshift_func_int16_t_s_s(l_323.f4, (safe_add_func_uint16_t_u_u(g_257.f5, func_51((safe_div_func_uint32_t_u_u((l_356 = (safe_div_func_int16_t_s_s((((l_369 = 0x3854973AL) != func_40(l_333[(l_321.f0 + 4)], l_370, l_321.f4, g_102[1][0], g_225)) != l_321.f0), p_37))), g_181)), l_321.f1, l_371, p_37, g_2[1][3]))))) >= l_348)))) & (-1L)) , l_372) , g_90[(l_321.f0 + 2)]);
                    if (func_46(g_88[6][0][2], l_333[2], (l_290.f1 , ((0xFAL >= (safe_rshift_func_int8_t_s_s(((+(l_318.f1 = p_37)) <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s((g_90[(l_321.f0 + 2)].f1 = (((((safe_add_func_uint8_t_u_u((((l_383[6] = ((l_356 = (!(g_263[1] = p_37))) || p_37)) , (((0x443AD819L >= (((((safe_rshift_func_int8_t_s_u(l_386, 2)) , p_37) != l_356) > 0UL) < g_257.f1)) > p_37) , 5L)) <= p_37), 7L)) , l_356) , p_37) ^ 1L) || 65535UL)), 0xC7000F0DL)) == 254UL) == 1L), g_257.f2)), g_257.f0))), 7))) , l_370)), g_141))
                    {
                        g_257 = l_387;
                    }
                    else
                    {
                        l_332 = (-1L);
                        l_331.f5 = l_331.f2;
                    }
                    if ((1UL & (p_37 , (l_383[3] != (((safe_mod_func_uint16_t_u_u(func_40(l_57, g_25[0][2][1], l_316, l_387.f1, g_84.f1), 65533UL)) , g_257.f4) ^ 1UL)))))
                    {
                        unsigned l_394 = 0UL;
                        l_394 = (safe_rshift_func_int16_t_s_u(0x8861L, 12));
                    }
                    else
                    {
                        if (g_141.f3)
                            break;
                        l_395 = l_331;
                        l_323.f5 = (((((g_317[0] = g_88[3][0][3]) | g_24.f0) , p_37) > (l_332 = ((safe_mod_func_uint32_t_u_u(4294967295UL, (((safe_div_func_uint32_t_u_u(g_25[0][2][1].f5, p_37)) , ((((g_3[1] >= (safe_div_func_uint8_t_u_u(((~((g_141.f5 = (g_257.f5 = g_141.f0)) != p_37)) || l_290.f0), g_257.f3))) && p_37) <= g_135) >= 5UL)) , p_37))) & l_333[4].f0))) >= p_37);
                    }
                }
            }
            else
            {
                int l_404 = (-10L);
                int l_415 = 0x9EDFA684L;
                l_321.f5 = ((g_257.f4 ^ (safe_lshift_func_uint16_t_u_s((func_40(func_64(p_37, g_253, l_404, (l_290.f1 ^ p_37)), l_323, (0x98703DD7L || p_37), l_355[0][2][0], g_225) , l_69), 12))) && p_37);
                for (l_290.f4 = 5; (l_290.f4 == 38); l_290.f4 = safe_add_func_int8_t_s_s(l_290.f4, 1))
                {
                    int l_413 = 0x08815BC2L;
                    struct S0 l_414 = {0x828CA612L,65529UL,0x01B5L,-1L,0x4E6488ABL,0x67F8A7A6L};
                    char l_417 = (-1L);
                    int l_425 = 8L;
                    if (l_290.f2)
                    {
                        g_90[2].f1 = (safe_rshift_func_int16_t_s_s(((g_25[0][2][1].f1 & (g_257.f5 | (safe_rshift_func_uint8_t_u_u(func_40(g_24, g_141, (g_90[2].f0 = 0xFFD1B1BAL), ((g_141.f0 , ((0x620833CEL != p_37) < (safe_add_func_uint16_t_u_u(65535UL, g_317[1])))) | l_387.f3), p_37), 0)))) != l_413), g_3[1]));
                        g_141 = l_414;
                        g_257.f5 = g_90[2].f0;
                    }
                    else
                    {
                        unsigned short l_416 = 0x4091L;
                        l_415 = (-1L);
                        l_416 = func_46(g_257.f0, (l_318 = g_84), l_323, l_387);
                    }
                    g_317[3] = l_417;
                    g_257 = l_321;
                    l_425 = (safe_sub_func_uint32_t_u_u(func_51(p_37, l_404, l_332, (l_414.f5 = p_37), g_141.f3), ((g_257.f3 < 0x1B03L) , (safe_rshift_func_int8_t_s_s((g_424 = ((((safe_div_func_int32_t_s_s(g_257.f4, p_37)) && l_331.f0) || l_414.f2) < p_37)), l_425)))));
                }
                l_415 = l_290.f2;
                g_90[2] = func_64((safe_unary_minus_func_uint8_t_u((l_331.f4 && ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(65528UL, ((g_88[1][0][5] = (g_24.f0 = l_415)) , func_60(((safe_unary_minus_func_uint8_t_u(p_37)) || p_37), (l_333[4] = func_64(((l_323.f5 == (((l_331.f5 < g_317[0]) < (g_90[2] , l_404)) > 5L)) >= g_257.f0), l_404, l_319, p_37)), g_24)))), p_37)) , g_257.f0)))), l_415, l_331.f4, l_387.f0);
            }
            if (p_37)
            {
                g_141 = g_25[0][2][1];
                for (g_24.f1 = 0; (g_24.f1 > (-1)); g_24.f1--)
                {
                    int l_434 = 0x2CA6F5FAL;
                    l_304 = ((l_188 || (l_290.f5 = p_37)) == g_253);
                    return l_434;
                }
            }
            else
            {
                unsigned char l_445 = 0x67L;
                for (l_290.f2 = 22; (l_290.f2 == 15); --l_290.f2)
                {
                    for (l_290.f5 = 0; (l_290.f5 <= (-27)); l_290.f5 = safe_sub_func_int32_t_s_s(l_290.f5, 2))
                    {
                        unsigned char l_443 = 252UL;
                        int l_444 = 5L;
                        g_317[3] = g_84.f1;
                        l_188 = (g_25[0][2][1].f1 == func_51((~g_257.f0), g_84.f1, ((g_257.f4 = p_37) | (safe_sub_func_int32_t_s_s((l_331.f2 <= ((safe_lshift_func_uint16_t_u_s(65535UL, ((func_40(g_90[2], g_141, (l_444 = (l_331.f0 == l_443)), g_424, l_443) & g_257.f1) & 0x99L))) ^ p_37)), 0x7A682981L))), p_37, l_445));
                        l_57.f1 = 0L;
                        if (p_37)
                            continue;
                    }
                }
            }
            if ((((((g_141.f4 != ((p_37 == 65535UL) && g_257.f2)) ^ (l_333[4].f1 = (l_321 , (safe_div_func_uint32_t_u_u((l_318 , (((g_88[6][0][2] | (l_331.f5 = (g_263[1] = (0x2938L < (g_141.f1 = (((l_448 >= g_88[6][0][2]) & g_90[2].f1) || 7L)))))) == l_331.f1) && g_25[0][2][1].f5)), p_37))))) , 3L) , l_333[4].f0) != 0x2B5CL))
            {
                struct S1 l_459 = {5UL,0xB21BE926L};
                l_459.f1 = ((p_37 = (func_40(l_333[3], l_331, l_69, (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_321.f3, 2)), 1)), ((!func_60(g_317[1], func_64((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(func_51((l_355[0][5][0] = p_37), l_320, ((0x0F86L >= (-1L)) | 0x01L), p_37, l_290.f3), 13)) , l_321.f3), g_171)), p_37, p_37, g_102[1][0]), l_459)) == l_459.f0))), p_37) == 9L)) != l_304);
                if (((safe_rshift_func_uint16_t_u_u(((func_40(func_64(l_57.f1, l_332, p_37, (g_25[0][2][1].f0 = (p_37 | (-9L)))), l_321, g_171, g_90[2].f1, g_252) ^ (-1L)) & g_257.f2), 4)) , g_257.f0))
                {
                    for (l_387.f2 = (-18); (l_387.f2 > 6); l_387.f2++)
                    {
                        return g_257.f0;
                    }
                    return p_37;
                }
                else
                {
                    short l_464 = 0xB003L;
                    return l_464;
                }
            }
            else
            {
                if ((0x5894BABCL > p_37))
                {
                    struct S0 l_469 = {0x9D9C0599L,0x7C91L,0x75E2L,0x86C57A73L,0xF252E4C1L,-1L};
                    l_387 = (func_46(p_37, g_90[0], l_290, g_257) , (((safe_rshift_func_uint16_t_u_u((l_387.f5 , (((l_331.f5 = (safe_lshift_func_int16_t_s_s(func_40(func_64(g_257.f3, l_323.f2, l_355[0][6][0], g_252), l_469, l_290.f5, g_317[1], g_257.f1), 3))) | 4294967295UL) | 0x80L)), p_37)) | g_141.f0) , l_323));
                }
                else
                {
                    g_257 = g_141;
                }
                g_257.f5 = l_332;
                l_304 = l_331.f4;
            }
            for (l_290.f4 = 0; (l_290.f4 <= 6); l_290.f4 += 1)
            {
                short l_488 = 0x5CACL;
                struct S1 l_503 = {4294967295UL,1L};
                struct S0 l_556 = {0xD9D03E22L,2UL,8UL,0L,0UL,0xBEBCD2CAL};
                for (l_321.f0 = 1; (l_321.f0 >= 0); l_321.f0 -= 1)
                {
                    unsigned char l_485 = 247UL;
                    struct S0 l_555[8][7][4] = {{{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}}},{{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}}},{{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}}},{{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}},{{-10L,6UL,65535UL,-1L,0x9F746F2DL,0x50BB72C2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}}},{{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x4976E0D6L,0xBA18L,65535UL,0x7D9BA2B3L,0x552A5BABL,0xD36813A7L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-1L,0xAA4EL,65535UL,-3L,0x60762E30L,1L},{0L,0x8172L,1UL,1L,0x22187A63L,1L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0xF7136D0EL,9UL,65531UL,0L,0x65FB9B2EL,0xE045F61FL}},{{1L,65535UL,1UL,-1L,4294967293UL,0x5A181AD9L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{8L,9UL,0UL,1L,0UL,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}}},{{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{8L,9UL,0UL,1L,0UL,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}},{{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{8L,9UL,0UL,1L,0UL,1L}},{{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}}},{{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{8L,9UL,0UL,1L,0UL,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{8L,9UL,0UL,1L,0UL,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}},{{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{6L,0x2D5FL,0x06D9L,0xD319FBE8L,4294967287UL,-1L},{8L,9UL,0UL,1L,0UL,1L}}},{{{0x1A9FC759L,0x12BAL,0xC6B3L,0x2583626CL,0x02F5D07CL,0x2F30BECCL},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{1L,65527UL,0x3E59L,0xD0867517L,5UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{8L,9UL,0UL,1L,0UL,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L}},{{0L,0x8172L,1UL,1L,0x22187A63L,1L},{0x9E404944L,65535UL,0UL,0x00CEB9FBL,4294967287UL,-1L},{0x2DFB52CFL,2UL,65528UL,-3L,4294967294UL,0x9B49952EL},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}},{{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0xBCB9359CL,0x0125L,1UL,-2L,0x5463B0D9L,2L},{8L,9UL,0UL,1L,0UL,1L}},{{0x4C074929L,65527UL,0x98F6L,9L,0x8688B81EL,0x7625666FL},{-3L,0x1A63L,65533UL,0xF980F8B3L,1UL,1L},{0x2CADB156L,65535UL,65530UL,-10L,4294967291UL,-2L},{0x31036A06L,0xCCC8L,0UL,7L,0x6A948BE9L,0xCCE685B4L}}}};
                    int i, j, k;
                    if (((g_474 = (safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(g_263[l_321.f0], p_37)), 0))) & ((g_317[3] | g_328) , (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(func_51(((safe_div_func_uint16_t_u_u(g_25[0][2][1].f4, 65535UL)) == ((safe_sub_func_uint8_t_u_u(func_40(l_333[(l_321.f0 + 5)], (((safe_div_func_uint32_t_u_u(l_333[(l_321.f0 + 5)].f1, 4294967295UL)) ^ 65534UL) , l_331), g_263[1], g_135, g_317[3]), 0xBEL)) || 0xD24D3F17L)), g_181, l_290.f3, l_333[4].f0, l_485), 0x93L)), p_37)))))
                    {
                        return l_331.f0;
                    }
                    else
                    {
                        int i;
                        g_317[3] = (safe_rshift_func_int16_t_s_s(l_488, ((safe_rshift_func_uint8_t_u_u(func_51((safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_372, (safe_sub_func_uint32_t_u_u(l_321.f2, (p_37 , ((p_37 < (4L & p_37)) , ((((g_263[l_321.f0] = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(g_25[0][2][1].f4, ((~4294967295UL) , l_488))), g_24.f1)), g_141.f1)) < 0x034541A9L)) , p_37) , g_257.f3) <= 0L))))))) < g_88[5][0][4]), 1L)), l_488, g_90[2].f0, l_290.f2, g_225), 0)) & g_257.f4)));
                        l_503 = l_333[l_290.f4];
                        g_25[0][2][1].f5 = (((safe_sub_func_uint32_t_u_u((0L || (g_102[0][1] = (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((((l_331.f5 = (func_60(((l_333[l_290.f4].f0 & (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((l_318.f1 = 4294967295UL) , ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(1L, 12)), p_37)) , ((p_37 | ((safe_add_func_int8_t_s_s((-9L), (l_290.f2 >= (safe_sub_func_int8_t_s_s(0xA0L, g_141.f2))))) && 0xF454D6D2L)) | g_141.f0))) && g_141.f3), g_25[0][2][1].f0)), p_37))) == p_37), l_333[(l_321.f0 + 3)], g_90[2]) & l_387.f2)) < g_25[0][2][1].f4) > g_257.f2) && 0xD98AFB7FL), l_333[l_290.f4].f1)), p_37)))), 0xC881B6CBL)) || l_331.f4) ^ 1UL);
                    }
                    if (p_37)
                    {
                        short l_524[2][3][9] = {{{0L,0L,0x02DCL,0x02DCL,0L,9L,0L,0x02DCL,0x02DCL},{0xA804L,0xA804L,0x6259L,1L,0x6259L,0xA804L,0xA804L,0x6259L,1L},{0L,0L,0L,9L,9L,0L,0L,0L,9L}},{{(-2L),0x6259L,0x6259L,(-2L),0xEFC4L,(-2L),0x6259L,0x6259L,(-2L)},{0xF459L,9L,0x02DCL,9L,0xF459L,0xF459L,9L,0x02DCL,9L},{0x6259L,0xEFC4L,1L,1L,0xEFC4L,0x6259L,0xEFC4L,1L,1L}}};
                        int l_542 = 0L;
                        unsigned l_545 = 0x621CD51AL;
                        int i, j, k;
                        l_316 = p_37;
                        l_355[0][5][0] = (safe_div_func_uint8_t_u_u(l_524[0][0][2], ((safe_add_func_int8_t_s_s(g_257.f1, (safe_sub_func_int32_t_s_s(p_37, (0xB6L < p_37))))) | (l_503.f0 , 65535UL))));
                        l_321.f5 = (safe_unary_minus_func_uint16_t_u(((l_387 , ((g_317[3] , (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s(g_25[0][2][1].f5, p_37)) > (((safe_sub_func_int32_t_s_s(g_84.f0, l_485)) == (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_542 = (safe_lshift_func_int8_t_s_s(l_290.f0, 4))), 0)), (safe_div_func_uint32_t_u_u((g_25[1][2][0] , (g_141.f2 , 1UL)), 0xA285540FL))))) & p_37)), l_545)) && 9L) < p_37)) , g_257.f0)) && g_181)));
                        g_317[5] = (+(((0L | g_141.f4) == p_37) , (safe_mod_func_int8_t_s_s(l_290.f4, (p_37 = (g_102[1][0] = p_37))))));
                    }
                    else
                    {
                        struct S1 l_554 = {0UL,0x2E11D2CDL};
                        g_317[3] = ((l_355[0][0][0] = 0xDCD6648FL) , ((p_37 = (l_57.f1 = ((((((0xD8E497E4L != (safe_rshift_func_uint8_t_u_s((~(safe_add_func_int16_t_s_s((l_321.f2 , p_37), g_141.f1))), (safe_mod_func_int16_t_s_s(((4294967293UL == l_333[(l_321.f0 + 5)].f1) , (func_40(l_554, (l_555[4][4][0] , l_556), g_84.f0, l_557, l_554.f1) || l_503.f1)), p_37))))) ^ g_24.f0) > g_171) | l_503.f1) != l_188) & 0x62L))) || l_558));
                        l_556 = l_556;
                        g_141 = g_25[0][2][1];
                        g_24 = l_554;
                    }
                    if (g_102[1][0])
                    {
                        g_24.f1 = g_102[1][0];
                    }
                    else
                    {
                        unsigned l_561 = 5UL;
                        g_141.f5 = ((safe_div_func_int32_t_s_s((l_561 = p_37), g_257.f3)) == l_57.f1);
                        l_555[4][4][0].f5 = func_51(((((-1L) ^ (safe_rshift_func_uint8_t_u_s((func_51((func_46(l_331.f0, l_57, l_290, l_556) , func_51((safe_mod_func_uint16_t_u_u((((l_188 = g_225) <= (p_37 & ((l_561 == p_37) != l_561))) ^ p_37), p_37)), g_253, l_355[0][1][0], g_317[3], l_290.f4)), l_566, g_88[3][0][2], g_25[0][2][1].f1, g_181) || g_24.f0), 4))) > p_37) , p_37), p_37, g_88[3][1][1], l_556.f5, p_37);
                    }
                }
            }
        }
        l_387.f5 = (safe_unary_minus_func_int16_t_s((l_321.f5 | p_37)));
    }
    l_568 = g_257.f4;
    return l_290.f3;
}







static int func_40(struct S1 p_41, struct S0 p_42, unsigned p_43, char p_44, unsigned p_45)
{
    int l_291 = 0xCD6C90BDL;
    int l_292 = 1L;
    l_292 = l_291;
    return p_42.f5;
}







static unsigned func_46(unsigned short p_47, struct S1 p_48, struct S0 p_49, struct S0 p_50)
{
    unsigned char l_262[3][8][10] = {{{0x69L,255UL,0xAFL,0x67L,0xAFL,255UL,0x69L,0x90L,8UL,1UL},{0xADL,253UL,0xAFL,0x16L,1UL,255UL,0xADL,1UL,8UL,0x90L},{0x69L,253UL,0UL,0x67L,1UL,0x88L,0x69L,1UL,0xE1L,1UL},{0x69L,255UL,0xAFL,0x67L,0xAFL,255UL,0x69L,0x90L,8UL,1UL},{0xADL,253UL,0xAFL,250UL,0xADL,1UL,250UL,255UL,1UL,0x88L},{7UL,0xB3L,0x69L,255UL,0xADL,0x52L,7UL,255UL,0x88L,255UL},{7UL,1UL,1UL,255UL,1UL,1UL,7UL,0x88L,1UL,255UL},{250UL,0xB3L,1UL,250UL,0xADL,1UL,250UL,255UL,1UL,0x88L}},{{7UL,0xB3L,0x69L,255UL,0xADL,0x52L,7UL,255UL,0x88L,255UL},{7UL,1UL,1UL,255UL,1UL,1UL,7UL,0x88L,1UL,255UL},{250UL,0xB3L,1UL,250UL,0xADL,1UL,250UL,255UL,1UL,0x88L},{7UL,0xB3L,0x69L,255UL,0xADL,0x52L,7UL,255UL,0x88L,255UL},{7UL,1UL,1UL,255UL,1UL,1UL,7UL,0x88L,1UL,255UL},{250UL,0xB3L,1UL,250UL,0xADL,1UL,250UL,255UL,250UL,250UL},{0xAFL,0x90L,0x88L,0xB3L,253UL,1UL,0xAFL,255UL,0xA8L,255UL},{0xAFL,0x49L,1UL,0xB3L,1UL,0x49L,0xAFL,250UL,250UL,255UL}},{{0UL,0x90L,1UL,1UL,253UL,0x49L,0UL,255UL,250UL,250UL},{0xAFL,0x90L,0x88L,0xB3L,253UL,1UL,0xAFL,255UL,0xA8L,255UL},{0xAFL,0x49L,1UL,0xB3L,1UL,0x49L,0xAFL,250UL,250UL,255UL},{0UL,0x90L,1UL,1UL,253UL,0x49L,0UL,255UL,250UL,250UL},{0xAFL,0x90L,0x88L,0xB3L,253UL,1UL,0xAFL,255UL,0xA8L,255UL},{0xAFL,0x49L,1UL,0xB3L,1UL,0x49L,0xAFL,250UL,250UL,255UL},{0UL,0x90L,1UL,1UL,253UL,0x49L,0UL,255UL,250UL,250UL},{0xAFL,0x90L,0x88L,255UL,0UL,255UL,1UL,0x49L,8UL,0x49L}}};
    struct S0 l_289 = {-1L,65535UL,65535UL,0x5632E78DL,0x47270AFDL,1L};
    int i, j, k;
    for (g_135 = 0; (g_135 < 45); g_135 = safe_add_func_uint16_t_u_u(g_135, 5))
    {
        short l_271 = 0xFB64L;
        int l_272 = (-1L);
        p_48.f1 = (safe_mod_func_uint8_t_u_u(p_50.f1, p_47));
        g_257.f5 = (p_47 == (g_263[1] = (~func_51(g_257.f1, l_262[0][7][2], l_262[0][1][0], l_262[0][3][8], (p_50.f1 , (0xDBL >= 0x0BL))))));
        for (g_257.f0 = (-25); (g_257.f0 <= (-10)); g_257.f0 = safe_add_func_uint8_t_u_u(g_257.f0, 8))
        {
            int l_268 = 0x2E9FA822L;
            p_48 = (l_262[2][7][6] , g_90[0]);
            for (g_141.f0 = 3; (g_141.f0 >= (-4)); g_141.f0 = safe_sub_func_uint32_t_u_u(g_141.f0, 1))
            {
                g_257.f5 = 0xEEB73DFDL;
            }
            g_84.f1 = (p_49.f5 = l_268);
        }
        l_272 = (((g_257.f0 = p_49.f5) , (safe_mod_func_int32_t_s_s(g_181, ((!65530UL) , p_49.f1)))) , l_271);
    }
    p_48 = func_64((((g_257.f1 = (safe_div_func_int32_t_s_s(p_47, (safe_div_func_uint16_t_u_u((3L <= 0UL), p_49.f4))))) < (safe_rshift_func_uint16_t_u_s((!l_262[0][7][2]), ((safe_lshift_func_int16_t_s_u((p_50.f1 > ((safe_mod_func_uint32_t_u_u((l_262[1][0][9] < ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(p_49.f3, 15)) == l_262[0][7][2]), 0)) <= 0x026BL)), g_25[0][2][1].f3)) & p_49.f3)), l_262[0][7][2])) | l_262[0][7][2])))) < 0x908CL), g_25[0][2][1].f5, p_49.f3, g_141.f1);
    l_289 = p_49;
    return l_262[0][7][2];
}







static unsigned char func_51(char p_52, unsigned char p_53, short p_54, unsigned p_55, unsigned p_56)
{
    unsigned l_193[8][7][4] = {{{0x3CC2A6CDL,0x8C8DB16DL,0x9DDE9558L,0x985221F5L},{4294967292UL,0x1425DA53L,0UL,0x96D253E8L},{0xEFE95327L,4294967288UL,0x1425DA53L,0x1A631482L},{0UL,0x650989D3L,0x3E66BCB5L,0x3CC2A6CDL},{0x2C56CB48L,0x985221F5L,0x9EE4E01BL,0x9EE4E01BL},{0x3E66BCB5L,0x3E66BCB5L,0UL,0x650989D3L},{0x39717E37L,0x2866832CL,4294967287UL,0x55DACA86L}},{{0x96D253E8L,3UL,0x1A631482L,4294967287UL},{0x9EE4E01BL,3UL,0UL,0x55DACA86L},{3UL,0x2866832CL,4294967292UL,0x650989D3L},{4294967288UL,0x3E66BCB5L,0x3C46B0DBL,0x9EE4E01BL},{0UL,0x985221F5L,0x2866832CL,0x3CC2A6CDL},{4294967289UL,0x650989D3L,0x3F325A39L,0x1A631482L},{0xB7384CCDL,4294967288UL,0UL,0x96D253E8L}},{{9UL,0x1425DA53L,0UL,0x985221F5L},{0x1AF2571DL,0x8C8DB16DL,0x4F9B2877L,0UL},{0x0933D41CL,4294967295UL,4294967291UL,4294967292UL},{0x1B951BAAL,0x3F325A39L,4294967288UL,0x8AD48076L},{4294967289UL,0x4FC777F7L,4294967289UL,0x1B951BAAL},{4294967295UL,0xB7384CCDL,0x650989D3L,0xAF920992L},{4294967287UL,0xC88C1250L,0x7DEAFFB3L,0xB7384CCDL}},{{0UL,0x24E963F0L,0x7DEAFFB3L,3UL},{4294967287UL,0x3CC2A6CDL,0xAF920992L,0x8AD48076L},{3UL,0UL,0xEFE95327L,0x1A631482L},{0xEFE95327L,0x1A631482L,9UL,0UL},{0x985221F5L,0x3C46B0DBL,4294967295UL,0x8C8DB16DL},{0UL,0xEFE95327L,0x167741F7L,0x0933D41CL},{0x3CC2A6CDL,4294967289UL,0x1A631482L,0xB7384CCDL}},{{1UL,4294967288UL,0x2866832CL,0x9DDE9558L},{0UL,4294967295UL,0x7DEAFFB3L,0x4FC777F7L},{4294967289UL,0x8AD48076L,4294967295UL,4294967295UL},{4294967289UL,0x8C8DB16DL,0x8C8DB16DL,4294967289UL},{9UL,0x1AF2571DL,0x9EE4E01BL,0x2C56CB48L},{4294967295UL,0x4F9B2877L,4294967295UL,0x3F325A39L},{0x3E66BCB5L,4294967295UL,0x3C46B0DBL,0x3F325A39L}},{{0x6994371FL,0x4F9B2877L,0xC88C1250L,0x2C56CB48L},{0UL,0x1AF2571DL,0UL,4294967289UL},{0x0933D41CL,0x8C8DB16DL,0x3E66BCB5L,4294967295UL},{0x650989D3L,0x8AD48076L,0x0933D41CL,0x4FC777F7L},{0x2866832CL,4294967295UL,0x24E963F0L,0x9DDE9558L},{0x2C56CB48L,4294967288UL,4294967295UL,0xB7384CCDL},{0x9EE4E01BL,4294967289UL,0x4F9B2877L,0x0933D41CL}},{{0x6B8ADB2BL,0xEFE95327L,0x3F325A39L,0x8C8DB16DL},{0x8C8DB16DL,0x3C46B0DBL,0x39717E37L,0UL},{0x4F9B2877L,0x1A631482L,0UL,0x1A631482L},{0x1425DA53L,0UL,4294967287UL,0x8AD48076L},{4294967295UL,0x2866832CL,4294967295UL,0x4FC777F7L},{0x3E66BCB5L,0UL,4294967291UL,4294967288UL},{0x3E66BCB5L,0xAF920992L,4294967295UL,0xEFE95327L}},{{4294967295UL,4294967288UL,0x2C56CB48L,4294967291UL},{0x985221F5L,4294967295UL,4294967292UL,0x9DDE9558L},{0x7DEAFFB3L,0x1A631482L,0x1AF2571DL,0x4F9B2877L},{0xB7384CCDL,0x24E963F0L,0UL,0x1B951BAAL},{4294967295UL,0UL,0x7DEAFFB3L,4294967287UL},{0x4F9B2877L,0UL,0x1B951BAAL,0x8C8DB16DL},{0UL,4294967295UL,0UL,1UL}}};
    int l_203 = 0xFA5ECB41L;
    int i, j, k;
    for (g_141.f5 = 0; (g_141.f5 == 22); g_141.f5 = safe_add_func_uint16_t_u_u(g_141.f5, 7))
    {
        int l_196 = 0x27655B96L;
        int l_226 = 0L;
        if (((safe_add_func_uint16_t_u_u(l_193[3][5][1], ((safe_mod_func_int32_t_s_s((g_171 , l_196), (safe_lshift_func_uint16_t_u_u((l_203 = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(g_141.f3, l_193[3][5][1])) >= l_193[3][5][1]), 12))), 15)))) <= (+p_54)))) < (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((0x72L <= p_56) , l_196) >= (-4L)), 2)), g_141.f1)), g_90[2].f1))))
        {
            int l_210 = 8L;
            struct S1 l_211 = {0x34216DBFL,0x56E9A28FL};
            int l_236 = 0xA7C1C735L;
            if (l_210)
                break;
            for (l_210 = 1; (l_210 >= 0); l_210 -= 1)
            {
                char l_235 = 0x36L;
                for (g_84.f0 = 0; (g_84.f0 <= 1); g_84.f0 += 1)
                {
                    int i, j, k;
                    l_211 = g_90[(g_84.f0 + 2)];
                    l_226 = (((safe_div_func_int16_t_s_s(g_88[(g_84.f0 + 2)][g_84.f0][(g_84.f0 + 4)], g_88[(g_84.f0 + 5)][g_84.f0][(l_210 + 1)])) && 0L) & ((0x91F6L == g_24.f0) || (safe_unary_minus_func_int32_t_s(((g_25[0][2][1].f5 <= ((safe_add_func_int8_t_s_s(0x37L, (safe_div_func_int32_t_s_s((+g_88[6][0][2]), (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_90[(g_84.f0 + 2)].f1 = (safe_mod_func_uint8_t_u_u((0x0EA6L ^ 0xEEEFL), p_52))), 15)) , g_90[2].f1), 10)))))) != g_225)) || 0x8EL)))));
                    g_90[(g_84.f0 + 2)].f1 = (((g_84.f1 == (!l_211.f1)) != (((safe_div_func_int16_t_s_s(g_90[2].f1, (safe_sub_func_uint32_t_u_u((g_141.f4 = 0x36F13B8EL), 4294967286UL)))) == (safe_rshift_func_uint8_t_u_s(l_235, (l_236 , (safe_unary_minus_func_int16_t_s((-4L))))))) < g_90[2].f1)) , 3L);
                }
            }
        }
        else
        {
            int l_240 = 0x9D5D047FL;
            struct S0 l_255 = {8L,1UL,65531UL,1L,4294967295UL,0xB8E23BF8L};
            struct S1 l_256[2][9][3] = {{{{0xF6E7AD54L,0L},{6UL,-3L},{0xF6E7AD54L,0L}},{{0x9803C9DBL,1L},{0x0E34C557L,0x2185C57EL},{0x0E34C557L,0x2185C57EL}},{{0x11AE85B0L,7L},{6UL,-3L},{0x3E09A07EL,0L}},{{0x49501CF5L,-5L},{0x9803C9DBL,1L},{0x0E34C557L,0x2185C57EL}},{{0xF6E7AD54L,0L},{0x8D21DE16L,1L},{0xF6E7AD54L,0L}},{{0x49501CF5L,-5L},{0x0E34C557L,0x2185C57EL},{0xBE82BF19L,8L}},{{0x11AE85B0L,7L},{0x8D21DE16L,1L},{0x3E09A07EL,0L}},{{0x9803C9DBL,1L},{0x9803C9DBL,1L},{0xBE82BF19L,8L}},{{0xF6E7AD54L,0L},{6UL,-3L},{0xF6E7AD54L,0L}}},{{{0x9803C9DBL,1L},{0x0E34C557L,0x2185C57EL},{0x0E34C557L,0x2185C57EL}},{{0x11AE85B0L,7L},{6UL,-3L},{0x3E09A07EL,0L}},{{0x49501CF5L,-5L},{0x9803C9DBL,1L},{0x0E34C557L,0x2185C57EL}},{{0xF6E7AD54L,0L},{0x8D21DE16L,1L},{0xF6E7AD54L,0L}},{{0x49501CF5L,-5L},{0x0E34C557L,0x2185C57EL},{0xBE82BF19L,8L}},{{0x11AE85B0L,7L},{0x8D21DE16L,1L},{0x3E09A07EL,0L}},{{0x9803C9DBL,1L},{0x9803C9DBL,1L},{0xBE82BF19L,8L}},{{0xF6E7AD54L,0L},{6UL,-3L},{0xF6E7AD54L,0L}},{{0x9803C9DBL,1L},{0x0E34C557L,0x2185C57EL},{0x0E34C557L,0x2185C57EL}}}};
            int i, j, k;
            for (l_226 = 0; (l_226 == (-7)); l_226 = safe_sub_func_int8_t_s_s(l_226, 6))
            {
                g_84.f1 = 0L;
            }
            for (g_141.f1 = 0; (g_141.f1 <= 3); g_141.f1 += 1)
            {
                short l_249 = 0x7BF1L;
                int l_254[1][10][8] = {{{(-1L),1L,0x1BE8735AL,0x265B0F27L,0xED89B48CL,(-1L),0x4AEB7A9DL,0x4AEB7A9DL},{0x1BE8735AL,0x8077E666L,(-1L),(-1L),0x8077E666L,0x1BE8735AL,0x4AEB7A9DL,0xAF9E345EL},{(-1L),(-1L),0x1BE8735AL,(-1L),0x265B0F27L,(-1L),0x265B0F27L,(-1L)},{0x265B0F27L,(-1L),0x265B0F27L,(-1L),0x1BE8735AL,(-1L),(-1L),0xAF9E345EL},{0x4AEB7A9DL,0x1BE8735AL,0x8077E666L,(-1L),(-1L),0x8077E666L,0x1BE8735AL,0x4AEB7A9DL},{0x4AEB7A9DL,(-1L),0xED89B48CL,0x265B0F27L,0x1BE8735AL,1L,0x8077E666L,1L},{0x265B0F27L,0x1CEFCD2DL,0xAF9E345EL,0x1CEFCD2DL,0x265B0F27L,1L,(-1L),0x1BE8735AL},{(-1L),(-1L),0x1CEFCD2DL,0L,0x8077E666L,0x8077E666L,0L,0x1CEFCD2DL},{0x1BE8735AL,0x1BE8735AL,0x1CEFCD2DL,0x4AEB7A9DL,0xED89B48CL,(-1L),(-1L),(-1L)},{0x8077E666L,(-1L),0xAF9E345EL,0x1BE8735AL,0xAF9E345EL,(-1L),0x8077E666L,(-1L)}}};
                int i, j, k;
                g_24.f1 = l_240;
                l_226 = ((0x7A35L || ((p_54 && (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x7BL, 0x71L)), (g_253 = (g_252 = (l_249 >= (l_203 = ((safe_lshift_func_uint16_t_u_u((((g_90[2].f1 < l_240) , g_90[2].f1) >= g_25[0][2][1].f3), g_141.f3)) != 0x871EL))))))), 1L)), 1))) == p_52)) >= g_90[2].f0);
                for (g_24.f0 = 0; (g_24.f0 <= 3); g_24.f0 += 1)
                {
                    int i, j, k;
                    if (l_193[(g_141.f1 + 4)][g_141.f1][g_141.f1])
                    {
                        l_203 = (!p_55);
                        if (g_90[2].f0)
                            continue;
                        if (l_240)
                            break;
                    }
                    else
                    {
                        return l_203;
                    }
                    l_226 = l_249;
                }
                for (l_249 = 0; (l_249 <= 3); l_249 += 1)
                {
                    l_254[0][6][5] = l_193[2][6][1];
                    g_84.f1 = l_254[0][6][7];
                    if (p_53)
                        continue;
                }
            }
            g_24 = (l_255 , (g_84 = l_256[0][7][2]));
        }
    }
    g_141 = g_25[0][2][1];
    g_141 = g_141;
    return g_3[1];
}







static unsigned char func_60(unsigned p_61, struct S1 p_62, struct S1 p_63)
{
    int l_77[7][6][4] = {{{0xA2DF7CCAL,0xB1A4155BL,0x2EB872B5L,0xD3A2B226L},{0x2EB872B5L,0xD3A2B226L,0x23A5B0B6L,(-9L)},{(-1L),(-1L),0x5C9A6D21L,0xB25118C2L},{0x297919FDL,4L,1L,1L},{1L,0x0195B865L,0x76F7154EL,1L},{0x8AC6A973L,0xD3A2B226L,0xA69B5101L,0xF86A2F89L}},{{0x68CE5CF1L,0xC6A0115AL,1L,5L},{0x42ED1920L,0x76F7154EL,0xFFDB434EL,0L},{0xBC7DB13CL,2L,0xA2DF7CCAL,1L},{1L,(-1L),(-7L),0x297919FDL},{(-3L),5L,0xE199855EL,(-1L)},{0x5C912EA9L,(-7L),0x2EB872B5L,0x2EB872B5L}},{{0x60292229L,0x60292229L,0xD3A2B226L,0xA2DF7CCAL},{0L,(-1L),1L,0xBBF3D304L},{0L,0xF86A2F89L,0L,1L},{0xA13EA481L,0xF86A2F89L,9L,0xBBF3D304L},{0xF86A2F89L,(-1L),(-3L),0xA2DF7CCAL},{0xFFDB434EL,0x60292229L,3L,0x2EB872B5L}},{{0x5C9A6D21L,(-7L),0xA13EA481L,(-1L)},{5L,5L,0x4CB239F5L,0x297919FDL},{(-4L),(-1L),0xB1A4155BL,1L},{0xFA99CDC6L,2L,(-1L),0L},{0xB1A4155BL,0x76F7154EL,0x297919FDL,5L},{0x6349BB04L,0xC6A0115AL,0xC4C5E220L,0xF86A2F89L}},{{0x64D01240L,0xD3A2B226L,0x5C912EA9L,1L},{0xA69B5101L,0x0195B865L,0x6349BB04L,4L},{0L,1L,1L,(-9L)},{(-8L),1L,0xCC3ECA65L,(-3L)},{3L,0xF86A2F89L,0x42ED1920L,0xF86A2F89L},{1L,0L,5L,0L}},{{6L,0L,0x64D01240L,0x8AC6A973L},{(-8L),0xD3A2B226L,8L,(-4L)},{(-8L),0xA2DF7CCAL,0x64D01240L,0xC4C5E220L},{6L,(-4L),5L,0xB06647E6L},{1L,(-1L),0x42ED1920L,0xA69B5101L},{3L,0xFFDB434EL,0xA13EA481L,0xBC7DB13CL}},{{0xF86A2F89L,(-7L),3L,5L},{(-1L),0x76F7154EL,9L,1L},{1L,0L,1L,0x4452C2E7L},{0xE199855EL,8L,0xCC3ECA65L,0x5CE82FDDL},{9L,0L,(-1L),0x297919FDL},{0xA69B5101L,0xB1A4155BL,6L,(-1L)}}};
    struct S0 l_85 = {0xA2C154B2L,0UL,0UL,0x7BC28BBEL,0xE7E56D92L,-10L};
    struct S0 l_139[5][2] = {{{-1L,0xE71EL,65532UL,0x2BEF4583L,4294967286UL,0xC01DFA8AL},{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL}},{{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL},{-1L,0xE71EL,65532UL,0x2BEF4583L,4294967286UL,0xC01DFA8AL}},{{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL},{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL}},{{-1L,0xE71EL,65532UL,0x2BEF4583L,4294967286UL,0xC01DFA8AL},{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL}},{{0L,0UL,65534UL,0x89B08243L,0x15406361L,0x6ECA0ADBL},{-1L,0xE71EL,65532UL,0x2BEF4583L,4294967286UL,0xC01DFA8AL}}};
    unsigned l_186 = 0x39AC4197L;
    short l_187[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_187[i] = 2L;
    for (g_24.f0 = 0; (g_24.f0 <= 3); g_24.f0 += 1)
    {
        int l_83[7][4] = {{0xC3B741B6L,1L,0xAE4FB37EL,0xAE4FB37EL},{0x7C01AD3EL,0x7C01AD3EL,0xC3B741B6L,0xAE4FB37EL},{(-1L),1L,(-1L),0xC3B741B6L},{(-1L),0xC3B741B6L,0xC3B741B6L,(-1L)},{0x7C01AD3EL,0xC3B741B6L,0xAE4FB37EL,0xC3B741B6L},{0xC3B741B6L,1L,0xAE4FB37EL,0xAE4FB37EL},{0x7C01AD3EL,0x7C01AD3EL,0xC3B741B6L,0xAE4FB37EL}};
        int l_117 = 1L;
        struct S0 l_155 = {0xA4237FCBL,0UL,0x56AFL,0x290DDE9AL,0xAC3DA445L,0L};
        unsigned short l_180 = 6UL;
        int i, j;
        for (g_24.f1 = 3; (g_24.f1 >= 0); g_24.f1 -= 1)
        {
            int l_79 = 8L;
            char l_80 = 1L;
            int l_82 = 2L;
            g_84 = func_64(p_62.f0, (l_80 = (safe_unary_minus_func_int32_t_s((l_79 = g_3[0])))), ((p_62.f0 ^ (safe_unary_minus_func_int32_t_s(l_82))) == p_63.f0), l_83[6][3]);
            l_85 = g_25[0][2][1];
            g_25[0][2][1].f5 = 0x00CB0D77L;
            for (g_84.f1 = 3; (g_84.f1 >= 0); g_84.f1 -= 1)
            {
                int i, j, k;
                return l_77[(g_84.f1 + 1)][(g_24.f0 + 2)][g_24.f1];
            }
        }
        for (g_84.f0 = 0; (g_84.f0 <= 3); g_84.f0 += 1)
        {
            int l_100 = 1L;
            for (p_63.f1 = 0; (p_63.f1 <= 3); p_63.f1 += 1)
            {
                unsigned l_89 = 0x18B624CAL;
                int l_101 = (-7L);
                short l_105 = 0x9A0FL;
                int i, j;
                g_84.f1 = (safe_div_func_int16_t_s_s((g_88[6][0][2] = l_83[(p_63.f1 + 2)][g_24.f0]), l_89));
                for (p_63.f0 = 0; (p_63.f0 <= 3); p_63.f0 += 1)
                {
                    int l_103 = 0L;
                    int l_104 = 1L;
                    for (g_24.f1 = 3; (g_24.f1 >= 0); g_24.f1 -= 1)
                    {
                        int l_97 = 6L;
                        int l_108 = 1L;
                        p_62.f1 = ((((l_103 = (g_90[2] , (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(p_62.f1, p_63.f0)) , p_62.f1) | (((safe_sub_func_uint32_t_u_u(l_83[1][0], (l_97 <= ((l_101 = ((safe_mod_func_uint16_t_u_u((p_63.f1 | 0x33B4ECD8L), 0xB312L)) , l_100)) , g_25[0][2][1].f4)))) , g_102[1][0]) < p_61)), g_102[0][2])))) <= g_3[0]) & l_104) >= g_3[1]);
                        l_108 = ((l_105 & (safe_add_func_uint8_t_u_u(g_24.f1, (!l_104)))) & (g_84 , 0L));
                        g_90[2].f1 = (l_103 = (g_84.f0 || p_62.f0));
                        g_25[0][2][1].f5 = (p_62.f1 = ((g_90[2].f0 , (0xF6D975CFL != p_62.f0)) < g_102[1][0]));
                    }
                    return p_63.f1;
                }
            }
            for (p_62.f1 = 0; (p_62.f1 <= 3); p_62.f1 += 1)
            {
                unsigned char l_136 = 0xEBL;
                struct S0 l_138 = {0x8502B314L,0x7212L,65528UL,0x20A964B1L,0x77E2E7F7L,1L};
                l_117 = (l_100 ^ (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_100, l_85.f5)), p_62.f1)), (((g_90[2].f0 = (g_25[0][2][1] , (0x540F12F2L >= (((0x61L | ((safe_add_func_uint16_t_u_u(((0xAC405270L != (((g_25[0][2][1].f5 >= 0x1EL) >= l_85.f0) , 1UL)) & 0xD8L), g_84.f1)) < 0x6395A3B4L)) , g_25[0][2][1].f3) ^ l_85.f5)))) , 0xB326L) < p_63.f1))));
                g_25[0][2][1].f5 = 0x5C750724L;
                for (l_85.f0 = 3; (l_85.f0 >= 0); l_85.f0 -= 1)
                {
                    int l_118[7][6][2] = {{{3L,7L},{0x0E5D44BBL,0xB753E4B6L},{(-2L),0xB753E4B6L},{0x0E5D44BBL,7L},{0x3D3629F8L,3L},{(-1L),8L}},{{(-1L),3L},{0x3D3629F8L,7L},{0x0E5D44BBL,0xB753E4B6L},{(-2L),0xB753E4B6L},{0x0E5D44BBL,7L},{0x3D3629F8L,3L}},{{(-1L),8L},{(-1L),3L},{0x3D3629F8L,7L},{0x0E5D44BBL,0xB753E4B6L},{(-2L),0xB753E4B6L},{0x0E5D44BBL,7L}},{{0x3D3629F8L,3L},{(-1L),8L},{(-1L),3L},{0x3D3629F8L,7L},{0x0E5D44BBL,0xB753E4B6L},{(-2L),0xB753E4B6L}},{{0x0E5D44BBL,7L},{0x3D3629F8L,3L},{(-1L),8L},{(-1L),3L},{0x3D3629F8L,7L},{0x0E5D44BBL,0xB753E4B6L}},{{(-2L),0xB753E4B6L},{0x0E5D44BBL,7L},{0x3D3629F8L,3L},{(-1L),8L},{(-1L),3L},{0x3D3629F8L,7L}},{{0x0E5D44BBL,0xB753E4B6L},{(-2L),0xB753E4B6L},{0x0E5D44BBL,7L},{0x3D3629F8L,3L},{(-1L),8L},{(-1L),3L}}};
                    int i, j, k;
                    if ((g_90[2].f1 = (l_118[6][0][1] != (+(safe_add_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_u(g_102[1][0], (safe_add_func_int32_t_s_s(((!(((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(p_62.f0, 2)) & (((p_62.f0 , (safe_add_func_uint8_t_u_u((p_62.f1 > (g_135 = (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((g_3[1] , ((g_25[0][1][0] , g_24.f1) , l_83[6][3])), 0x2E64L)), 4)))), g_24.f1))) < g_25[0][2][1].f2) && (-1L))), l_136)) , p_62.f0) ^ l_83[6][3])) && l_118[3][4][1]), g_25[0][2][1].f3)))) ^ (-1L)) , g_3[1]) | 0x5BB632E5L) & p_62.f1), 0x5933L))))))
                    {
                        struct S0 l_137 = {0xE64CDA43L,0UL,65534UL,4L,1UL,0x5D6436AEL};
                        l_137 = g_25[0][2][1];
                        l_137.f5 = (p_63.f1 = (-3L));
                    }
                    else
                    {
                        l_138 = ((g_90[2] , l_138) , g_25[0][1][0]);
                    }
                    for (g_24.f1 = 3; (g_24.f1 >= 0); g_24.f1 -= 1)
                    {
                        return g_25[0][2][1].f3;
                    }
                    l_100 = 0xEA78EDF1L;
                    if (g_102[0][1])
                        continue;
                }
                p_63.f1 = (l_85.f5 = p_62.f1);
            }
            p_62.f1 = p_62.f1;
            for (p_63.f1 = 3; (p_63.f1 >= 0); p_63.f1 -= 1)
            {
                l_139[2][1] = l_85;
            }
        }
        for (p_63.f0 = 0; (p_63.f0 <= 3); p_63.f0 += 1)
        {
            struct S0 l_140 = {-1L,0x5513L,0x6696L,0x16D0B2B6L,0x1629920BL,1L};
            struct S0 l_154 = {-1L,5UL,65535UL,1L,0x3DDFA3CCL,0L};
            g_141 = l_140;
            l_139[2][1].f5 = g_25[0][2][1].f4;
            for (g_141.f3 = 0; (g_141.f3 <= 3); g_141.f3 += 1)
            {
                struct S1 l_144 = {4294967293UL,0x5621921CL};
                p_62.f1 = (safe_div_func_uint8_t_u_u((g_102[0][2] = g_24.f0), g_90[2].f1));
                l_85.f5 = (-7L);
                g_84 = g_90[2];
                for (l_140.f1 = 0; (l_140.f1 <= 1); l_140.f1 += 1)
                {
                    int i, j;
                    p_62 = l_144;
                    p_63.f1 = (safe_add_func_int32_t_s_s(g_102[l_140.f1][l_140.f1], (0x2D8D44CAL < ((((((+((~(safe_add_func_int32_t_s_s(g_102[l_140.f1][l_140.f1], l_83[g_24.f0][g_141.f3]))) || l_83[g_24.f0][g_24.f0])) == (g_141.f3 || l_83[3][0])) || ((((g_25[0][2][1].f1 <= ((p_62.f1 = g_25[0][2][1].f4) || l_144.f1)) ^ 0x0AE59654L) == 247UL) <= 0x75B6L)) == 1UL) < p_62.f0) <= l_144.f1))));
                    l_139[2][1].f5 = p_61;
                    p_63.f1 = (safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(((p_63.f1 >= p_62.f1) , (((0xF8876A3BL == 0x583E0304L) , l_85.f4) <= l_140.f5)))) | p_63.f1), (g_84.f1 = (l_140.f5 > l_83[g_24.f0][g_24.f0]))));
                }
            }
            l_155 = l_154;
            for (l_140.f2 = 0; (l_140.f2 <= 3); l_140.f2 += 1)
            {
                unsigned l_159 = 0x81FED2C0L;
                int l_166 = 3L;
                int l_168 = 3L;
                g_24.f1 = (p_61 , ((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_int32_t_s(l_159)) | 0L) , (l_168 = (safe_sub_func_uint8_t_u_u((7UL >= (safe_lshift_func_int16_t_s_s(p_61, (~(safe_lshift_func_int8_t_s_s((l_166 = (l_83[6][3] , p_62.f1)), 6)))))), (((safe_unary_minus_func_uint32_t_u(l_155.f1)) ^ ((l_85.f4 , 1UL) | 0x40E2L)) < g_102[0][0]))))), l_159)) < g_25[0][2][1].f1));
                l_155.f5 = ((safe_mod_func_uint32_t_u_u(((((g_171 , l_140) , (safe_lshift_func_uint16_t_u_s(p_63.f0, 6))) != ((((safe_rshift_func_uint16_t_u_u(0UL, (safe_div_func_int8_t_s_s(((g_181 = (((((4294967293UL >= (g_25[0][2][1].f3 , g_90[2].f0)) | p_63.f0) && ((safe_div_func_int8_t_s_s(p_61, l_154.f4)) < l_180)) > p_63.f1) & 0xA48598CBL)) >= l_140.f3), 0xC9L)))) >= p_62.f1) , g_102[1][1]) == g_171)) > 1L), p_63.f1)) != l_159);
                p_62 = g_24;
            }
        }
    }
    p_62.f1 = ((l_85.f3 && ((g_25[0][2][1].f2 >= g_141.f1) ^ (0xBDL ^ (l_85.f1 , (((safe_div_func_int8_t_s_s(p_63.f1, l_139[2][1].f4)) < (safe_lshift_func_uint16_t_u_u((g_25[0][2][1].f1 = 0x8C12L), ((p_62.f1 , g_24.f0) , g_25[0][2][1].f4)))) <= p_63.f0))))) <= l_186);
    return l_187[0];
}







static struct S1 func_64(char p_65, int p_66, unsigned p_67, int p_68)
{
    short l_70 = 0L;
    int l_75 = (-10L);
    struct S1 l_76 = {0x70EAEF02L,0x85B7FF5AL};
    l_70 = 0L;
    g_25[0][2][1].f5 = (l_75 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(g_25[0][2][1].f2, 14)), g_25[0][2][1].f1)));
    return l_76;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_25[i][j][k].f0, "g_25[i][j][k].f0", print_hash_value);
                transparent_crc(g_25[i][j][k].f1, "g_25[i][j][k].f1", print_hash_value);
                transparent_crc(g_25[i][j][k].f2, "g_25[i][j][k].f2", print_hash_value);
                transparent_crc(g_25[i][j][k].f3, "g_25[i][j][k].f3", print_hash_value);
                transparent_crc(g_25[i][j][k].f4, "g_25[i][j][k].f4", print_hash_value);
                transparent_crc(g_25[i][j][k].f5, "g_25[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_88[i][j][k], "g_88[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_90[i].f0, "g_90[i].f0", print_hash_value);
        transparent_crc(g_90[i].f1, "g_90[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_102[i][j], "g_102[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3, "g_141.f3", print_hash_value);
    transparent_crc(g_141.f4, "g_141.f4", print_hash_value);
    transparent_crc(g_141.f5, "g_141.f5", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_263[i], "g_263[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_317[i], "g_317[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_641.f0, "g_641.f0", print_hash_value);
    transparent_crc(g_641.f1, "g_641.f1", print_hash_value);
    transparent_crc(g_641.f2, "g_641.f2", print_hash_value);
    transparent_crc(g_641.f3, "g_641.f3", print_hash_value);
    transparent_crc(g_641.f4, "g_641.f4", print_hash_value);
    transparent_crc(g_641.f5, "g_641.f5", print_hash_value);
    transparent_crc(g_700.f0, "g_700.f0", print_hash_value);
    transparent_crc(g_700.f1, "g_700.f1", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_790[i][j][k], "g_790[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_800, "g_800", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
