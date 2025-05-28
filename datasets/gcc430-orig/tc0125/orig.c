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
   char f0;
   short f1;
   unsigned f2;
   unsigned short f3;
   short f4;
   int f5;
   char f6;
   int f7;
   unsigned f8;
};

union U1 {
   unsigned f0;
   int f1;
   struct S0 f2;
   short f3;
   unsigned short f4;
};

union U2 {
   short f0;
   int f1;
   short f2;
};


static unsigned g_20 = 0x839E071AL;
static char g_23 = 0x9AL;
static char g_27 = 1L;
static char *g_26 = &g_27;
static short g_57 = 1L;
static struct S0 g_60 = {0xDFL,-1L,0x7E942FAFL,4UL,0x2CFBL,-1L,0x9AL,0L,1UL};
static unsigned long long g_102 = 0x1C9A8392DDE99E23LL;
static struct S0 g_106 = {0x9BL,-10L,1UL,0UL,0x1744L,7L,0L,0x87DF3DEFL,6UL};
static union U2 *g_117 = (void*)0;
static int *g_120 = &g_106.f5;
static struct S0 g_121 = {0x7CL,0x927BL,0UL,0xDA1EL,0xBAC9L,0x574D2646L,-4L,1L,0UL};
static struct S0 g_127 = {0xA8L,0x5B3CL,0xBD61F34FL,0x91D6L,0xC915L,0x731B4BD6L,0x46L,0L,0UL};
static char *g_183 = &g_121.f6;
static char **g_182 = &g_183;
static unsigned long long g_213 = 0x00487FC3788430C3LL;
static struct S0 *g_226 = &g_60;
static long long g_271 = 0xA62993E52E987CD8LL;
static union U1 g_332 = {0UL};
static unsigned g_411 = 0UL;
static unsigned char **g_444 = (void*)0;
static int *g_447 = &g_121.f5;
static unsigned long long *g_504 = (void*)0;
static unsigned long long **g_503 = &g_504;
static unsigned *g_516 = &g_106.f8;
static unsigned **g_515 = &g_516;
static unsigned g_564 = 0x17052955L;
static union U1 *g_587 = &g_332;
static union U1 **g_586 = &g_587;
static union U1 ***g_585 = &g_586;
static union U2 **g_611 = &g_117;
static union U2 g_685 = {0xD68DL};
static struct S0 **g_690 = &g_226;
static short *g_731 = &g_127.f4;
static long long g_845 = (-3L);



static int func_1(void);
static short func_3(union U1 p_4, short p_5, int p_6);
static union U1 func_7(char p_8, struct S0 p_9, short p_10);
static long long func_13(char p_14, short p_15, unsigned short p_16, char p_17);
static unsigned func_24(char * p_25);
static char ** func_28(char ** p_29, char * p_30, struct S0 p_31, int p_32);
static char * func_34(unsigned short p_35, union U2 p_36, char ** p_37, int p_38, unsigned p_39);
static unsigned short func_40(char * p_41, char ** p_42, char * p_43, long long p_44);
static char * func_45(char * p_46, unsigned long long p_47, short p_48, char ** p_49, unsigned long long p_50);
static char * func_51(int p_52, char * p_53);
static int func_1(void)
{
    long long l_2 = 0xD9EDBDA7FE64FD9ELL;
    char *l_21 = (void*)0;
    char *l_22 = &g_23;
    short *l_574 = &g_332.f2.f4;
    unsigned l_575 = 0xC72FE5FEL;
    struct S0 l_609 = {0x02L,0x89D8L,0x4C7AD058L,0x3685L,-1L,1L,-1L,0x03A01098L,0x471FAD2DL};
    int *l_861 = &g_60.f7;
    int **l_862 = &l_861;
    (*l_861) = (l_2 && func_3(func_7((l_2 , (safe_div_func_int64_t_s_s(func_13(((*l_22) = (safe_rshift_func_uint8_t_u_s(g_20, 5))), ((*l_574) = (((g_20 ^ g_20) , (l_2 , g_20)) > func_24(g_26))), l_2, l_575), g_20))), l_609, g_20), g_20, l_2));

    ;

    ;
    ;



    ;
    (*l_862) = g_516;

    ;
    (**l_862) = 0x63B8CDBDL;
    return g_60.f0;
}







static short func_3(union U1 p_4, short p_5, int p_6)
{
    char **l_616 = &g_26;
    int l_623 = 1L;
    short *l_624 = &g_127.f4;
    unsigned short *l_625 = (void*)0;
    unsigned short *l_626 = &g_106.f3;
    int *l_629 = &g_127.f5;
    struct S0 l_640 = {0x7AL,-7L,0x788B7660L,2UL,-1L,0x7BE90FC8L,-10L,6L,1UL};
    unsigned short l_647 = 65535UL;
    unsigned char *l_661 = (void*)0;
    unsigned *l_675 = &g_411;
    unsigned **l_674 = &l_675;
    unsigned *l_691 = &g_121.f8;
    unsigned char l_701 = 2UL;
    unsigned char *l_761 = &l_701;
    short l_763 = 0xE994L;
    struct S0 ***l_800 = &g_690;
    char **l_813 = (void*)0;
    union U2 *l_821 = &g_685;
    char *l_841 = &g_127.f6;
    int **l_860 = &g_120;
    if (((*l_629) = (((0x5CDAAA27C9C6825ELL | func_13((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_5, 7)), func_40((*g_182), l_616, func_51((g_332.f1 = (func_13(p_4.f1, ((*l_624) = func_40(((((safe_rshift_func_int8_t_s_s((!((safe_mul_func_uint16_t_u_u(((*l_626) = (safe_add_func_uint32_t_u_u(l_623, (&p_5 == l_624)))), (safe_rshift_func_int8_t_s_u((l_623 == p_4.f0), 5)))) > p_4.f1)), 0)) > l_623) != 0x7375L) , (*l_616)), &g_183, (*g_182), p_4.f3)), g_106.f1, p_6) , 0xB16D0730L)), (*l_616)), p_5))), l_623, l_623, p_5)) | 0x4EL) != p_4.f4)))
    {
        int l_634 = 1L;
        char *l_635 = &g_121.f6;
        unsigned long long l_653 = 0x0D9853B42015616ALL;
        int *l_672 = &g_60.f5;
        union U2 *l_684 = &g_685;
        unsigned **l_700 = &g_516;
        char *l_782 = &g_121.f0;
        struct S0 l_818 = {0x91L,-5L,0x23C2ED7BL,0UL,0L,6L,0xE0L,0xFFA91CF5L,0xE6870884L};
        union U1 *l_830 = &g_332;
        l_623 = ((*l_629) = (((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_634, 8)), (*l_629))) && (1UL && ((((*l_635) = ((*g_26) = (**g_182))) , p_6) < (safe_add_func_int8_t_s_s(func_40((*g_182), &g_26, (g_20 , (*g_182)), g_127.f4), g_127.f8))))) & 0x4299B5ECL));
        if (((safe_add_func_uint64_t_u_u(0xA1866D73C981C03ALL, 0x2D1547B91E947ADELL)) != ((l_634 , (func_7((*l_629), l_640, (*l_629)) , (((1L != p_5) , 8UL) <= p_4.f4))) , 4294967295UL)))
        {
            long long *l_650 = &g_271;
            char **l_651 = (void*)0;
            int *l_652 = &g_106.f5;
            short **l_654 = &l_624;
            short l_655 = 0x78E0L;
            struct S0 l_656 = {-1L,0x75C9L,0xC76C8D7DL,0x2A60L,0x220EL,-1L,0xA3L,8L,4294967295UL};
            unsigned char ***l_665 = (void*)0;
            union U1 ***l_671 = &g_586;
            union U2 l_718 = {1L};
            struct S0 l_780 = {-6L,-1L,0x5A0C1395L,5UL,3L,0x43381CA4L,4L,5L,0UL};
            l_640.f5 = ((~(1UL <= (((*l_626) = g_106.f0) & ((safe_mul_func_int8_t_s_s(((((*l_629) = ((((safe_rshift_func_uint16_t_u_s((((((safe_mod_func_uint64_t_u_u(l_647, (*l_629))) ^ p_4.f4) <= (*g_516)) || (safe_div_func_int64_t_s_s((*l_629), ((*l_650) = g_121.f5)))) != (((*l_652) = ((void*)0 == l_651)) <= p_4.f4)), g_121.f1)) != g_213) , 0xBF10934648B2AE1FLL) <= (*l_629))) && p_4.f4) == 0L), p_4.f3)) != l_653)))) != 0L);
            if ((p_4.f1 , (((((*l_654) = l_624) == &p_5) == (func_7(l_655, l_656, (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((l_656 , l_661) != l_635), func_13((safe_div_func_uint16_t_u_u((((*l_629) = func_13((*l_652), (*l_652), g_106.f1, p_4.f3)) , p_6), p_4.f3)), p_4.f3, p_4.f0, (**g_182)))), p_5))) , 0L)) && (*l_629))))
            {
                unsigned l_664 = 9UL;
                unsigned char ***l_668 = (void*)0;
                unsigned **l_676 = &l_675;
                struct S0 l_679 = {-10L,0xA013L,0x05FC9237L,65533UL,1L,-7L,0x2FL,-6L,0x49131DF7L};
                unsigned short **l_695 = &l_626;
                char **l_715 = &g_183;
                union U2 ***l_758 = &g_611;
                if (((0UL & (((**g_586) , (l_664 , l_665)) != ((safe_rshift_func_uint16_t_u_u(0UL, 15)) , l_668))) < (safe_mul_func_int8_t_s_s(((void*)0 != l_671), ((-6L) > l_634)))))
                {
                    int **l_673 = &l_672;
                    struct S0 *l_677 = &g_106;
                    long long **l_680 = &l_650;
                    long long ***l_681 = &l_680;
                    (*l_673) = l_672;
                    l_676 = l_674;
                    if (((void*)0 != &l_675))
                    {
                        struct S0 **l_678 = &l_677;
                        (*l_678) = l_677;
                    }
                    else
                    {
                        (*l_677) = l_679;
                        (*l_673) = l_672;
                        return p_4.f0;
                    }
                    (*l_681) = l_680;
                }
                else
                {
                    struct S0 l_694 = {-7L,0xCE68L,0x68A80DCCL,0UL,0x3EFDL,0L,1L,-7L,1UL};
                    short l_730 = 0x3B09L;
                    char **l_757 = &l_635;
                    for (g_60.f4 = (-13); (g_60.f4 <= 18); g_60.f4 = safe_add_func_uint16_t_u_u(g_60.f4, 3))
                    {
                        (*l_652) = (*l_652);
                        (*g_611) = l_684;

                        ;
                        (*l_672) = l_679.f4;
                    }

                    ;
                    if (((*l_672) = ((+g_127.f6) > (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*l_624) = (((((g_690 = (void*)0) == (void*)0) != ((((void*)0 == l_691) != p_6) >= (safe_lshift_func_int16_t_s_u((l_694 , (*l_672)), func_13(((void*)0 != &g_120), g_106.f4, g_213, (*l_672)))))) , p_6) && (*l_652))), (*l_672))), g_106.f2)))))
                    {
                        unsigned short ***l_696 = (void*)0;
                        unsigned short ***l_697 = &l_695;
                        struct S0 **l_698 = &g_226;
                        (*l_697) = l_695;
                        (*l_698) = (void*)0;

                        ;
                    }
                    else
                    {
                        int **l_699 = &g_447;
                        union U1 **l_708 = (void*)0;
                        union U1 *l_710 = (void*)0;
                        union U1 **l_709 = &l_710;
                        union U1 *l_712 = &g_332;
                        union U1 **l_711 = &l_712;
                        union U1 *l_714 = &g_332;
                        union U1 **l_713 = &l_714;
                        union U2 l_719 = {0xC0C1L};
                        union U2 **l_732 = &l_684;
                        (*l_699) = g_516;

                        ;
                        (*l_699) = ((g_564 = ((((void*)0 == l_700) ^ ((*g_26) = ((*g_586) == ((*l_713) = ((*l_711) = ((*l_709) = (((((l_701 & (safe_lshift_func_int8_t_s_u(((g_27 == ((safe_rshift_func_uint8_t_u_s(g_127.f7, 2)) < (safe_lshift_func_uint8_t_u_s(p_4.f3, (*g_26))))) > p_4.f3), l_694.f7))) < l_679.f3) | l_694.f5) != p_4.f3) , (void*)0))))))) , g_127.f0)) , &l_623);

                        ;
                        ;
                        ;
                        (*g_447) = func_40((g_23 , (*l_616)), l_715, (*g_182), (safe_lshift_func_int16_t_s_u((~p_4.f3), (((l_719 = l_718) , ((safe_add_func_int64_t_s_s((((((*l_650) = p_4.f3) , l_732) != (void*)0) | 0xEA41L), p_5)) ^ (*l_629))) != (-1L)))));
                    }


                    ;
                    for (g_213 = 0; (g_213 < 40); g_213 = safe_add_func_int32_t_s_s(g_213, 5))
                    {
                        char **l_751 = &g_183;
                        int l_756 = 3L;
                        (*l_652) = (safe_div_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((*l_629), 0)), (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(0x68A586DC91FEF622LL, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((*g_731) = ((*l_629) <= func_40(l_635, l_751, (*g_182), ((*l_650) = ((func_40(l_635, (((((safe_add_func_uint16_t_u_u(((p_4.f0 , l_694.f4) , g_121.f3), g_271)) < l_756) , &g_611) != (void*)0) , l_757), (*l_757), (*l_629)) && l_756) < 0UL))))), 15)), 7)))), p_5)))), p_4.f0))));
                    }
                    l_656 = l_694;
                }

                ;

                ;
                (*l_758) = &l_684;

                ;
            }
            else
            {
                unsigned l_762 = 18446744073709551611UL;
                struct S0 **l_768 = &g_226;
                unsigned l_783 = 18446744073709551615UL;
                if ((((safe_div_func_int32_t_s_s((func_13((**g_182), (~(func_13((*l_629), ((((*l_635) = (((l_661 = &l_701) != (l_761 = (void*)0)) || (((*l_691) = func_40((*g_182), &g_183, (*g_182), (l_762 ^ l_762))) || (*l_629)))) > p_4.f0) ^ g_57), (*l_672), (*l_672)) == 0L)), g_106.f6, (*l_672)) < g_57), 0x1065C35FL)) && l_763) || (-1L)))
                {
                    unsigned **l_765 = &l_691;
                    char *l_781 = (void*)0;
                    (*l_672) = (safe_unary_minus_func_uint64_t_u(((*g_515) == ((*l_765) = l_652))));

                    ;
                    for (g_57 = 0; (g_57 <= (-15)); g_57--)
                    {
                        struct S0 ***l_769 = &l_768;
                        struct S0 *l_770 = &g_106;
                        int l_779 = 0x30AA0AFEL;
                        unsigned char ****l_784 = &l_665;
                        int l_785 = 7L;
                        (*l_769) = l_768;
                        (*l_770) = l_656;
                        (*l_629) = (p_4.f3 , (safe_mod_func_uint8_t_u_u(((((**l_765) = 4294967294UL) , ((*l_661) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*g_731), 9)), 0)), p_4.f1)))) < (((l_779 || ((l_780 , &g_444) != ((*l_784) = (l_762 , (void*)0)))) != (*l_672)) <= p_4.f3)), l_785)));
                    }
                }
                else
                {
                    p_4.f2 = l_656;

                                    }

                ;
                ;
                ;
                l_629 = l_672;

                ;
            }

            ;

            ;
            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned char *l_792 = &l_701;
            char **l_797 = &g_183;
            int l_798 = 0xDB8C9031L;
            long long l_799 = 6L;
            if (p_5)
            {
                (*l_672) = (-1L);
            }
            else
            {
                int **l_789 = &g_447;
                int ***l_788 = &l_789;
                int **l_822 = &g_447;
                int **l_823 = &l_629;
                if ((safe_add_func_int16_t_s_s(p_4.f4, (((*l_788) = (void*)0) != &g_120))))
                {
                    union U2 l_801 = {3L};
                    char *l_812 = &g_106.f0;
                    (*g_611) = ((safe_sub_func_uint32_t_u_u(((!((p_4 , (void*)0) != l_792)) <= (*g_731)), ((*l_672) == (safe_mod_func_uint8_t_u_u(p_6, ((func_13(((safe_div_func_int32_t_s_s(func_13((((*l_761) = ((l_799 , l_800) == &g_690)) > (*g_26)), p_4.f1, p_4.f4, (*l_672)), (*g_516))) , 0x4CL), (*g_731), p_5, (*g_26)) , p_4.f4) , (**g_182))))))) , (void*)0);
                    (*l_629) = ((*g_731) | ((((*l_684) = l_801) , ((!(safe_mod_func_int8_t_s_s(((*l_782) = (*g_26)), (safe_div_func_int64_t_s_s(p_4.f0, (safe_rshift_func_int16_t_s_s(func_13(((safe_mul_func_int8_t_s_s((p_4 , 0xCBL), 0xA0L)) < ((safe_mul_func_int16_t_s_s(((!func_40(l_812, l_813, (*g_182), p_4.f1)) , l_801.f0), p_4.f4)) , 0UL)), (*g_731), (*l_672), (**g_182)), p_4.f0))))))) , p_5)) < p_4.f3));
                }
                else
                {
                    int *l_814 = &l_623;
                    int **l_815 = &g_120;
                    int l_820 = 0x36FC2E1EL;
                    g_447 = l_814;

                    ;
                    (*l_815) = &l_623;

                    ;
                    for (l_640.f3 = 0; (l_640.f3 > 57); ++l_640.f3)
                    {
                        struct S0 *l_819 = &l_818;
                        (*l_819) = l_818;
                        if (l_820)
                            break;
                        l_684 = l_821;
                    }
                    (*g_611) = (*g_611);
                }



                ;
                g_447 = g_516;

                ;
                (*l_823) = ((*l_822) = g_447);

                ;
                for (p_4.f2.f8 = (-5); (p_4.f2.f8 > 39); p_4.f2.f8 = safe_add_func_uint16_t_u_u(p_4.f2.f8, 6))
                {
                    short **l_827 = (void*)0;
                    short ***l_826 = &l_827;
                    (*l_822) = &l_798;

                    ;
                    (*l_822) = &l_798;
                    (**g_585) = (**g_585);
                    (*l_826) = &g_731;

                    ;
                }

                ;
            }



            ;
            for (g_60.f1 = 0; (g_60.f1 >= (-16)); --g_60.f1)
            {
                return p_4.f0;



            }
            return p_4.f3;



        }

        ;

        ;
        ;
        ;
        ;
        ;
        ;
        (*g_586) = l_830;
        (*l_629) = (!(*l_629));
    }
    else
    {
        union U2 **l_833 = &l_821;
        char *l_837 = &g_121.f0;
        struct S0 l_846 = {-8L,0x2373L,4294967293UL,0x83B7L,8L,0x8ED9D0AFL,0x7AL,1L,0x84FA94CCL};
        struct S0 *l_847 = &l_846;
        struct S0 *l_848 = &g_127;
        unsigned short **l_857 = &l_626;
        unsigned short **l_859 = &l_625;
        unsigned short ***l_858 = &l_859;
        for (g_106.f2 = (-23); (g_106.f2 >= 57); g_106.f2 = safe_add_func_uint8_t_u_u(g_106.f2, 6))
        {
            union U2 ***l_834 = &g_611;
            char **l_838 = &l_837;
            char **l_839 = (void*)0;
            char **l_840 = &g_183;
            int l_842 = 0x95F6E19EL;
            long long *l_843 = &g_271;
            long long *l_844 = &g_845;
            (*l_834) = l_833;

            ;
            (*l_629) = (safe_add_func_uint32_t_u_u(func_40(l_837, l_838, (*g_182), func_40((func_40(l_837, &g_183, (l_841 = ((*l_840) = l_837)), ((((**g_515) = ((*g_587) , (((*l_844) = ((*l_629) = ((*l_843) = func_13((*l_629), func_40((*l_616), &g_26, (*g_182), p_6), p_4.f4, l_842)))) <= p_4.f0))) , g_121.f8) & (-5L))) , (*g_182)), l_839, (*g_182), g_60.f1)), 0x6EA5022AL));

            ;
            ;
        }

        ;
        ;
        ;
        (*l_848) = ((*l_847) = l_846);
        (*l_629) = (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_s(((*l_841) = l_846.f5), ((**g_182) = (safe_sub_func_int32_t_s_s((*l_629), (((((*l_847) , l_857) != ((*l_858) = l_857)) != (func_40(l_837, &l_837, l_837, g_60.f6) & p_4.f3)) , 0xE676DF3DL)))))))), p_4.f3));

        ;
    }

    ;
    ;


    ;
    ;
    ;
    ;
    ;
    ;
    (*l_860) = g_516;

    ;
    return (*l_629);



}







static union U1 func_7(char p_8, struct S0 p_9, short p_10)
{
    union U2 **l_610 = &g_117;
    g_611 = l_610;
    return (***g_585);

    }







static long long func_13(char p_14, short p_15, unsigned short p_16, char p_17)
{
    union U1 *l_580 = &g_332;
    union U1 *l_581 = &g_332;
    int l_582 = (-1L);
    union U1 **l_584 = &l_581;
    union U1 ***l_583 = &l_584;
    struct S0 l_590 = {0x8BL,-1L,0UL,65528UL,0x860FL,0xDB80E536L,0xB9L,3L,0xCA42F984L};
    int *l_591 = &g_106.f5;
    char *l_597 = &g_121.f6;
    char **l_606 = &l_597;
    union U2 l_607 = {-1L};
    int **l_608 = &l_591;
    (*l_591) = (safe_add_func_uint64_t_u_u((((((safe_div_func_int32_t_s_s(((l_580 = l_580) != (g_60.f7 , l_581)), l_582)) , 1UL) , (l_582 , l_583)) != g_585) | (safe_add_func_int32_t_s_s((((l_590 , 0x9FDF41CCB88553EBLL) ^ 0xF709E39E3572298CLL) , p_17), (**g_515)))), g_127.f1));
    for (l_590.f8 = 29; (l_590.f8 >= 16); l_590.f8 = safe_sub_func_uint16_t_u_u(l_590.f8, 7))
    {
        char *l_596 = (void*)0;
        int *l_598 = &g_121.f5;
        int **l_599 = &g_447;
        (*l_591) = ((safe_rshift_func_int16_t_s_s((func_40(l_596, &g_183, ((((0xC04CFA2CL && (*l_591)) <= ((*g_516) & (*g_516))) < 0x9BL) , l_597), p_17) < 18446744073709551615UL), g_332.f4)) == 0xFA84A016L);
        (*l_599) = l_598;

        ;
        if ((*g_447))
            continue;
        (*l_599) = g_447;
    }
    l_590.f7 = (safe_add_func_uint64_t_u_u(((*l_591) = p_14), ((*g_516) , (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((func_40(&p_17, l_606, (*l_606), func_40((*l_606), &l_597, (*l_606), g_121.f5)) , g_332.f1), g_121.f7)), p_15)))));
    (*l_608) = &l_582;

    ;
    return p_16;
}







static unsigned func_24(char * p_25)
{
    char **l_33 = &g_26;
    int l_54 = 1L;
    unsigned long long *l_100 = (void*)0;
    unsigned long long *l_101 = &g_102;
    union U2 l_166 = {0xB92BL};
    char ***l_417 = &g_182;
    struct S0 l_422 = {0xAFL,-1L,0UL,1UL,-1L,0xB6310204L,0x15L,0x1B61BB21L,0xB53ACB93L};
    int l_427 = (-10L);
    unsigned *l_428 = &g_411;
    char *l_436 = &g_121.f0;
    int *l_454 = &l_422.f7;
    unsigned char *l_485 = (void*)0;
    unsigned char **l_484 = &l_485;
    char *l_490 = &l_422.f0;
    char **l_528 = &g_26;
    unsigned l_538 = 0x5F55AF59L;
    union U1 l_544 = {1UL};
    int l_557 = 0x58E60A46L;
    int *l_573 = &l_544.f2.f7;
    (*l_417) = func_28(l_33, func_34(func_40(func_45(func_51((l_54 , l_54), p_25), ((*l_101) = 18446744073709551611UL), l_54, l_33, l_54), &g_26, (*l_33), g_121.f3), l_166, l_33, g_127.f7, l_54), g_121, g_20);

    ;
    ;
    ;

    if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(func_40(func_34(l_166.f0, l_166, &p_25, l_422.f3, ((*l_428) = (safe_lshift_func_uint16_t_u_u((((((*g_26) = (((safe_mul_func_int16_t_s_s((l_166.f2 & 0xAAC3L), l_54)) != l_427) & l_166.f2)) >= l_422.f5) , l_166) , 0x59D2L), g_332.f4)))), &g_183, (**l_417), l_427), g_106.f2)), 9)))
    {
        char **l_429 = &g_183;
        union U1 *l_430 = &g_332;
        union U1 **l_431 = &l_430;
        int l_432 = 0x7104AFCEL;
        char **l_435 = &g_183;
        long long *l_437 = &g_271;
        struct S0 l_455 = {-4L,0x94D7L,0UL,1UL,0x7FA7L,-1L,-9L,0x54D59C3CL,0x19842934L};
        union U2 l_486 = {0xFCDEL};
        char **l_487 = &l_436;
        int **l_489 = &g_447;
        int *l_510 = &l_427;
        g_332.f2.f7 = (((void*)0 != &g_226) > func_40((*l_33), l_429, p_25, l_422.f2));
        (*l_431) = l_430;
        if ((l_432 == ((0UL == (safe_add_func_uint16_t_u_u((l_422.f0 & l_166.f2), ((((*l_437) = func_40(p_25, &p_25, l_436, g_106.f1)) , l_427) , g_106.f5)))) , l_166.f2)))
        {
            int *l_446 = &l_422.f5;
            struct S0 l_470 = {-5L,9L,0x9CC18198L,0UL,0xD1B2L,0L,0x18L,0x7B696B44L,0x87E8C344L};
            struct S0 *l_471 = (void*)0;
            struct S0 *l_472 = &l_455;
            struct S0 *l_473 = &g_127;
            for (g_60.f3 = 0; (g_60.f3 <= 15); g_60.f3++)
            {
                int *l_450 = &g_127.f5;
                struct S0 l_462 = {-1L,0x74E3L,4294967291UL,0x66C5L,0xA4E9L,0x50E9C848L,-2L,0L,0UL};
                int **l_469 = &l_446;
                if (l_422.f8)
                {
                    int *l_440 = &l_422.f7;
                    int **l_441 = &g_120;
                    (*l_441) = (g_121.f8 , l_440);

                    ;
                    (*l_441) = g_120;
                    for (g_332.f2.f5 = 12; (g_332.f2.f5 == 13); g_332.f2.f5++)
                    {
                        unsigned char ***l_445 = &g_444;
                        (*l_445) = g_444;
                        g_447 = (g_120 = l_446);

                        ;
                    }

                    ;
                    g_447 = g_447;
                }
                else
                {
                    struct S0 *l_456 = &g_121;
                    int l_468 = 0x8FB1C91FL;
                    for (g_106.f2 = (-23); (g_106.f2 == 2); g_106.f2 = safe_add_func_int16_t_s_s(g_106.f2, 6))
                    {
                        int **l_451 = (void*)0;
                        int **l_452 = &l_450;
                        struct S0 **l_453 = &g_226;
                        (*l_452) = l_450;
                        (*l_453) = &g_121;

                        ;
                        l_454 = l_446;

                        ;
                    }
                    (*l_456) = l_455;
                    if ((g_27 , ((*g_447) , 1L)))
                    {
                        unsigned char l_457 = 0xC9L;
                        union U2 l_463 = {-10L};
                        int **l_464 = (void*)0;
                        int **l_465 = &l_450;
                        l_454 = ((*l_465) = (((l_457 , ((safe_add_func_int16_t_s_s((((*l_450) > (((*l_101) = g_127.f0) > l_455.f7)) == ((*p_25) || (((l_462 , l_463) , 1L) >= (l_455 , g_60.f6)))), g_121.f5)) , l_463.f2)) || (*g_447)) , (void*)0));

                        ;
                        ;
                        (*l_465) = g_447;

                        ;
                        (*l_465) = &l_432;

                        ;
                        (*l_465) = l_450;
                    }
                    else
                    {
                        (*l_446) = (g_60.f1 & (safe_add_func_uint16_t_u_u(g_102, (*l_450))));
                        if (l_468)
                            break;
                    }

                    ;
                }

                ;
                (*l_469) = ((*l_446) , g_447);
            }

            ;

            ;
            ;
            ;
            (*l_473) = ((*l_472) = l_470);
            (*g_447) = ((g_121.f2 , (safe_sub_func_uint32_t_u_u(((*g_447) < (func_40(p_25, (*l_417), ((*l_435) = func_45(((*l_429) = ((*g_182) = (*g_182))), l_455.f6, ((((~(*l_446)) || (*l_446)) <= (g_332 , (*l_446))) , (-6L)), (*l_417), g_121.f8)), g_127.f2) < (-1L))), 5L))) || (*l_446));

            ;
        }
        else
        {
            int *l_480 = &l_455.f5;
            for (g_121.f1 = (-11); (g_121.f1 > (-17)); g_121.f1 = safe_sub_func_uint32_t_u_u(g_121.f1, 7))
            {
                int **l_481 = &l_480;
                (*l_481) = l_480;
                l_432 = (safe_add_func_uint8_t_u_u((*l_480), (l_484 != g_444)));
                if ((**l_481))
                    continue;
            }
        }

        ;
        ;

        ;
        ;
        if (func_40((*g_182), ((l_486 , func_40((*l_435), (*l_417), ((*l_487) = p_25), g_127.f3)) , l_435), l_490, (**l_489)))
        {
            (*l_431) = (*l_431);
        }
        else
        {
            int l_497 = 0x9918F8D0L;
            char **l_529 = &l_490;
            int *l_530 = (void*)0;
            union U1 **l_531 = &l_430;
            int *l_550 = &g_121.f7;
            char *l_555 = &l_422.f6;
            union U2 l_556 = {0xCE2FL};
            unsigned l_559 = 18446744073709551611UL;
            long long l_567 = (-4L);
            short l_568 = (-9L);
            for (l_427 = (-16); (l_427 < 21); l_427++)
            {
                int *l_498 = &g_127.f7;
                struct S0 l_502 = {0x40L,0xD469L,0x9C68050AL,0x7886L,0xC41AL,5L,0x9BL,0x7E79E752L,0UL};
                char *l_506 = &g_60.f6;
                unsigned ***l_517 = (void*)0;
                unsigned ***l_518 = &g_515;
                unsigned **l_520 = &g_516;
                unsigned ***l_519 = &l_520;
                unsigned short *l_523 = &g_127.f3;
            }
            if (g_121.f4)
                goto lbl_539;
            if ((0x3FBA25CAL == l_497))
            {
                union U1 ***l_532 = &l_431;
                int l_535 = 0x638BED41L;
                (*l_489) = l_530;

                ;
                (*l_532) = l_531;
                for (g_121.f6 = 0; (g_121.f6 == 9); g_121.f6 = safe_add_func_int32_t_s_s(g_121.f6, 4))
                {
                    if (l_535)
                        break;
                }
            }
            else
            {
lbl_539:
                (**l_489) = (safe_div_func_uint16_t_u_u(l_538, g_60.f0));
                (*l_489) = (void*)0;

                ;
                if ((l_422.f8 < (((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((1L == (l_544 , ((safe_lshift_func_int8_t_s_u((*p_25), 2)) == (-10L)))), g_121.f1)), (*l_510))) , g_60.f0) , (safe_mul_func_uint8_t_u_u(g_121.f1, l_422.f6))) | 0UL) < l_544.f0)))
                {
                    int *l_549 = &l_455.f5;
                    short *l_558 = &g_57;
                    (*l_489) = l_549;

                    ;
                    l_550 = g_120;

                    ;
                    (**l_489) = 0x5146A9DDL;
                    if ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(65530UL, (**l_489))), func_40(l_555, &g_26, ((*l_487) = (l_556 , func_45((*l_33), ((**l_489) , (**l_489)), ((*l_558) = (((**l_489) || g_102) || l_557)), l_487, l_559))), g_60.f3))))
                    {
                        (**l_489) = (((*l_558) = ((void*)0 == &g_444)) , (safe_add_func_uint8_t_u_u((g_564 = (safe_lshift_func_uint16_t_u_u(0x7359L, 14))), 1UL)));
                    }
                    else
                    {
                        (*g_447) = (safe_sub_func_uint16_t_u_u(0xD72DL, (((*l_558) = (func_40((*l_429), &p_25, p_25, (l_567 = 0xC9520C32995C481ALL)) , l_568)) <= g_60.f5)));
                        (*l_489) = (void*)0;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    for (g_106.f7 = 16; (g_106.f7 == (-18)); --g_106.f7)
                    {
                        long long l_571 = 1L;
                        if (l_571)
                            break;
                        (*l_550) = 0L;
                    }
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
    }
    else
    {
        struct S0 l_572 = {0x92L,0x116FL,0xF1C565F0L,0x7DA9L,0xF44BL,1L,-1L,2L,1UL};
        g_106 = (g_332 , l_572);
    }

    ;
    ;

    ;

    ;
    (*l_573) = (((**g_182) & 5UL) != ((*l_101) = l_54));
    return (*g_516);



}







static char ** func_28(char ** p_29, char * p_30, struct S0 p_31, int p_32)
{
    int l_190 = (-1L);
    union U2 l_222 = {0x7789L};
    char *l_223 = (void*)0;
    struct S0 *l_225 = (void*)0;
    int *l_228 = &g_127.f7;
    int **l_229 = (void*)0;
    int **l_230 = &l_228;
    unsigned long long l_233 = 0xBFA45521639E2500LL;
    char **l_240 = &g_26;
    char l_257 = 0x53L;
    int l_258 = 0xDBFCEA1EL;
    unsigned char l_259 = 2UL;
    unsigned l_261 = 0xD913343AL;
    int *l_276 = &g_127.f5;
    int l_304 = 0x7C481DA6L;
    short l_329 = (-7L);
    unsigned long long l_330 = 0x18106815FF81F1C5LL;
    union U1 *l_354 = &g_332;
    int l_361 = 6L;
    int l_366 = (-1L);
    union U2 **l_398 = (void*)0;
    union U2 ***l_397 = &l_398;
    unsigned long long l_399 = 0xB01F773235E0E7B4LL;
    unsigned l_400 = 0x26119749L;
    char **l_410 = (void*)0;
    long long l_414 = (-1L);
    unsigned *l_415 = &g_60.f8;
    struct S0 l_416 = {0x9AL,0x9ADEL,1UL,8UL,0x56CCL,1L,0x1FL,0x87F3A99EL,1UL};
    if (l_190)
    {
        int l_209 = 0xB598FB19L;
        unsigned short *l_210 = &g_127.f3;
        unsigned long long *l_211 = &g_102;
        unsigned long long *l_212 = &g_213;
        long long l_214 = 0xDC6AD9C61CCE0B29LL;
        struct S0 l_219 = {0xA6L,4L,0xB4F9A3E3L,65535UL,0L,0xAE4BFFE4L,0x61L,4L,0x1BCC1DD9L};
        int *l_224 = &l_209;
        if ((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((+(safe_div_func_int8_t_s_s((5L & ((*l_212) = ((*l_211) = func_40((l_190 , (*p_29)), ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((0x1F7435F2L || 0x4A6FF7F1L), (1UL && (**p_29)))), (safe_div_func_uint32_t_u_u(0x176E3802L, ((!(((*l_210) = (safe_mul_func_uint16_t_u_u(l_190, l_209))) , l_190)) | 0x5F2AL))))) , &g_183), (*p_29), l_190)))), p_31.f6))), l_190)), 14)) , 0UL) || l_209) , 0x83L) , l_209), l_214)), g_127.f1)))
        {
            struct S0 *l_217 = &g_60;
            for (g_60.f2 = 0; (g_60.f2 != 59); g_60.f2++)
            {
                if (p_31.f5)
                    break;
                if (g_27)
                    goto lbl_227;
            }
            (*l_217) = p_31;
        }
        else
        {
            int **l_218 = &g_120;
            (*l_218) = g_120;
        }
        (*l_224) = ((l_219 , (g_27 , ((safe_lshift_func_uint8_t_u_u((l_214 || l_219.f1), 6)) | p_31.f5))) | (g_106.f6 != (l_222 , func_40((*g_182), &g_26, l_223, g_106.f8))));
    }
    else
    {
        if (p_31.f3)
        {
lbl_227:
            g_226 = l_225;

            ;
            (*l_230) = l_228;
        }
        else
        {
            (*g_120) = (safe_mod_func_int32_t_s_s((&p_31 == (void*)0), (*g_120)));
        }

        ;
        if (((p_31 , ((-1L) != (l_233 & g_106.f4))) > ((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_31.f5, 6)), (safe_div_func_uint8_t_u_u((**l_230), func_40((*g_182), l_240, (*g_182), p_31.f5))))) ^ 0x03B0C7BE276FF74ALL)))
        {
            int *l_243 = (void*)0;
            union U2 l_250 = {-4L};
            unsigned char *l_260 = &l_259;
            for (l_222.f2 = (-10); (l_222.f2 != (-20)); l_222.f2 = safe_sub_func_int8_t_s_s(l_222.f2, 8))
            {
                l_243 = g_120;

                ;
                if (g_106.f8)
                    goto lbl_413;
            }

                        ;
            (*l_228) = (((g_106.f7 > (((*l_260) = ((safe_add_func_uint64_t_u_u(((-1L) > (g_121.f1 != (((g_213 , (safe_rshift_func_uint8_t_u_s(((((safe_div_func_int64_t_s_s((func_40(func_34(p_32, l_250, &p_30, (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(g_106.f5, (~((+(~(safe_mod_func_uint16_t_u_u(g_213, 0x5937L)))) == l_257)))), l_258)), l_259), &g_183, (*g_182), p_31.f1) != p_31.f4), g_213)) || 0xA8L) , (**l_230)) == p_31.f5), 1))) >= 1UL) != g_121.f2))), g_106.f8)) | g_106.f0)) ^ 7L)) | p_31.f7) <= l_261);

            ;
        }
        else
        {
            int l_275 = 0x5C6AC741L;
            char *l_343 = (void*)0;
            union U1 *l_353 = (void*)0;
            int l_367 = (-6L);
            for (g_121.f8 = 21; (g_121.f8 != 21); ++g_121.f8)
            {
                int *l_264 = &g_60.f7;
                (*l_230) = l_264;

                ;
            }

            ;
            if ((((**p_29) = (*p_30)) | (*l_228)))
            {
                long long *l_267 = (void*)0;
                long long *l_268 = (void*)0;
                long long *l_269 = (void*)0;
                long long *l_270 = &g_271;
                int l_274 = 1L;
                l_275 = ((safe_mod_func_uint16_t_u_u(((func_40((*g_182), &g_26, (*g_182), ((*l_270) = 0x17F0F52E07C21493LL)) && 1L) >= ((safe_sub_func_int16_t_s_s(((p_31.f3 = 0x1E81L) , 0x1452L), (p_31.f4 , 0x5CD9L))) > p_31.f7)), l_274)) , (*g_120));
                (*l_230) = l_276;

                ;
                (*l_230) = &l_274;

                ;
            }
            else
            {
                unsigned long long *l_279 = &g_102;
                union U2 *l_287 = &l_222;
                long long l_294 = (-1L);
                unsigned short l_327 = 0UL;
                int *l_334 = (void*)0;
                char **l_342 = (void*)0;
                if ((safe_div_func_uint64_t_u_u(g_121.f3, ((*l_279) = 8UL))))
                {
                    unsigned *l_317 = (void*)0;
                    unsigned *l_318 = &g_106.f8;
                    unsigned short *l_328 = &g_60.f3;
                    (*g_120) = (-9L);
                    for (g_127.f4 = 21; (g_127.f4 <= (-4)); g_127.f4 = safe_sub_func_uint16_t_u_u(g_127.f4, 3))
                    {
                        struct S0 *l_282 = &g_106;
                        union U2 *l_283 = &l_222;
                        union U2 **l_284 = (void*)0;
                        union U2 **l_285 = (void*)0;
                        union U2 **l_286 = &l_283;
                        unsigned long long **l_299 = &l_279;
                        unsigned long long *l_302 = (void*)0;
                        unsigned long long *l_303 = &g_213;
                        (*l_282) = p_31;
                        if ((*g_120))
                            continue;
                        (**l_230) = (((((*l_286) = l_283) == l_287) != (safe_rshift_func_int16_t_s_u((!((safe_rshift_func_int16_t_s_s((((*l_303) = (safe_div_func_int8_t_s_s(l_294, (g_127.f5 , (safe_rshift_func_uint16_t_u_s((p_31.f8 , ((p_31.f3 = ((safe_div_func_uint32_t_u_u((((&g_213 != ((*l_299) = &l_233)) , ((p_31 , (safe_rshift_func_uint16_t_u_s(p_31.f6, 9))) & p_31.f7)) == 0x50L), 0xAABCE9E3L)) ^ 0x2FL)) != l_275)), 15)))))) & (*l_276)), 14)) , g_27)), l_304))) , (**l_230));

                        ;
                        (*l_230) = g_120;

                        ;
                    }

                    ;
                    ;
                    (*l_228) = p_31.f0;
                    if ((safe_mod_func_uint8_t_u_u((l_294 || ((*l_276) = (*g_120))), (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(0x8CA9B3D7L, ((*l_318) = p_31.f4))), 7)), ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_213, (((*g_26) = (((safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u(((p_31.f3 > l_294) ^ ((*p_30) = l_275)), (safe_unary_minus_func_int64_t_s((((*l_328) = l_327) >= 0xDCFAL))))))) && l_329) != (*g_120))) >= p_32))), 65535UL)) | g_60.f5))) && l_330) , 0x73L) < l_327) , g_106.f1), l_275)), 0x9113L)))))
                    {
                        union U1 *l_331 = &g_332;
                        union U1 **l_333 = &l_331;
                        (*l_333) = l_331;
                        (*l_276) = p_31.f3;
                        (*g_120) = (-5L);
                        (*l_276) = p_31.f3;
                    }
                    else
                    {
                        struct S0 **l_335 = &g_226;
                        (*l_230) = &p_32;

                        ;
                        l_334 = g_120;

                        ;
                        (*l_335) = &p_31;

                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    long long *l_352 = &l_294;
                    int **l_368 = (void*)0;
                    int **l_369 = &l_276;
                    if (((p_31.f8 ^ (**l_230)) , (safe_add_func_int32_t_s_s((((safe_mod_func_int64_t_s_s((((safe_add_func_int8_t_s_s(l_275, func_40((*p_29), l_342, l_343, ((+(((safe_mul_func_uint16_t_u_u((p_31.f1 > (safe_div_func_int64_t_s_s((((*l_352) = (safe_mod_func_int16_t_s_s(g_106.f8, 1UL))) & 0x4F5809B3B63D6E52LL), 0xB656643B3FE90797LL))), p_31.f0)) , (-3L)) && 249UL)) , g_106.f1)))) , g_332) , g_127.f0), 0x896E17EB04718072LL)) & 1UL) ^ (**p_29)), g_127.f6))))
                    {
                        p_31.f5 = ((*g_120) = p_31.f7);
                        (*l_230) = &p_32;

                        ;
                        if (p_31.f1)
                            goto lbl_355;
lbl_355:
                        l_354 = l_353;

                        ;
                        g_120 = g_120;
                    }
                    else
                    {
                        union U1 **l_356 = &l_353;
                        (*l_356) = l_353;
                        return &g_26;


                    }

                    ;
                    ;
                    (*l_369) = ((*l_230) = (((safe_rshift_func_int16_t_s_u(func_40(func_51((safe_rshift_func_uint8_t_u_s(((((*g_26) = ((*l_228) < l_361)) <= ((safe_lshift_func_int16_t_s_u((!(safe_div_func_int16_t_s_s(0x40CFL, g_332.f4))), l_366)) | (l_275 = func_40((*p_29), &p_30, l_343, ((*l_352) = g_60.f2))))) && (**p_29)), 7)), (*p_29)), &g_183, (*g_182), l_367), 8)) | p_31.f2) , (void*)0));

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                ;
                ;
                for (l_327 = 0; (l_327 == 21); ++l_327)
                {
                    unsigned long long l_379 = 1UL;
                    union U2 l_409 = {-3L};
                    for (g_332.f0 = 0; (g_332.f0 >= 22); g_332.f0 = safe_add_func_int8_t_s_s(g_332.f0, 6))
                    {
                        unsigned l_378 = 1UL;
                        union U2 **l_395 = &g_117;
                        union U2 ***l_394 = &l_395;
                        unsigned *l_396 = &g_127.f2;
                        int *l_412 = &g_121.f7;
                        (*g_120) = 0x1EBDC434L;
                        (*g_120) = (safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(l_378, l_379)), (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((l_379 < (safe_add_func_int32_t_s_s(p_31.f6, (((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((+1UL) != (safe_rshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(p_31.f3, (l_394 != (l_397 = (((*l_396) = g_60.f1) , (void*)0))))) , (void*)0) != (void*)0), 5))) , g_106.f4), 3UL)), 14)) , l_379) == l_399)))), g_121.f7)) < p_32), l_400))));

                        ;
                        (*l_395) = g_117;
                        (*l_412) = (((&g_183 == ((safe_rshift_func_int16_t_s_s((((*g_182) == (void*)0) != (+(safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(g_121.f0, 2)) , (**g_182)), 4)))), func_40(func_45((*g_182), p_31.f8, g_411, &g_26, p_31.f6), &l_223, (*g_182), p_31.f1))) , (void*)0)) < p_31.f2) >= g_127.f8);
                    }
                }

                ;
            }

            ;

            ;
            ;
            ;
        }

        ;
                ;

        ;
        ;
        ;
    }

    ;
    ;

    ;
    ;
    ;
lbl_413:
    g_120 = (void*)0;

    ;
    g_117 = g_117;
    l_416 = (((l_414 | (func_40(((*g_182) = (void*)0), &p_30, func_45((*p_29), ((g_121.f7 = (p_31.f0 > (((*l_415) = ((*g_26) <= ((void*)0 != &l_225))) == (g_332.f0 == g_127.f4)))) >= p_31.f4), g_60.f3, &l_223, p_31.f4), p_31.f6) && g_121.f8)) && p_31.f4) , p_31);

    ;
    ;
    return &g_26;



}







static char * func_34(unsigned short p_35, union U2 p_36, char ** p_37, int p_38, unsigned p_39)
{
    unsigned short *l_167 = &g_127.f3;
    int l_170 = (-1L);
    union U2 **l_179 = &g_117;
    union U2 ***l_180 = &l_179;
    struct S0 l_181 = {2L,1L,0x1FE2E2A7L,0UL,0x7743L,0xD8D72E10L,-1L,0x1E0CC641L,0xF9FCAAD6L};
    char *l_184 = &l_181.f6;
    unsigned short l_185 = 1UL;
    int *l_186 = &l_181.f5;
    int **l_187 = &l_186;
    struct S0 *l_188 = &g_60;
    struct S0 *l_189 = &g_127;
    l_181.f5 = (l_185 = (~(((*l_167) = g_60.f0) , (p_36.f1 = ((safe_rshift_func_uint16_t_u_u(l_170, ((func_40(((*p_37) = func_51((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(255UL, 2)), ((safe_mod_func_int8_t_s_s((((*l_180) = l_179) == (l_181 , &g_117)), 0xF6L)) , l_181.f2))), (l_181.f8 == l_170))), (*p_37))), g_182, l_184, g_121.f7) , (void*)0) == &g_102))) != (-2L))))));

        (*l_187) = l_186;
    (*l_189) = ((*l_188) = l_181);
    return (*g_182);


}







static unsigned short func_40(char * p_41, char ** p_42, char * p_43, long long p_44)
{
    int *l_163 = &g_60.f7;
    unsigned long long l_165 = 0x35A7C04A76FC5854LL;
    for (g_106.f3 = 18; (g_106.f3 > 18); g_106.f3 = safe_add_func_uint64_t_u_u(g_106.f3, 1))
    {
        int **l_164 = &g_120;
        (*l_164) = l_163;

        ;
        g_120 = g_120;
        if ((**l_164))
            continue;
    }
    return l_165;
}







static char * func_45(char * p_46, unsigned long long p_47, short p_48, char ** p_49, unsigned long long p_50)
{
    struct S0 l_105 = {0x10L,0x8D1DL,0xF66F6C63L,0xF4C6L,6L,6L,-1L,-7L,0xDE593F29L};
    int *l_107 = &g_106.f5;
    long long *l_153 = (void*)0;
    int *l_158 = &l_105.f5;
    int *l_159 = &g_60.f5;
    char *l_160 = &g_60.f0;
    for (g_60.f8 = 20; (g_60.f8 >= 41); g_60.f8++)
    {
        int **l_108 = &l_107;
        struct S0 l_132 = {0xA2L,0x1477L,0xB981B607L,65535UL,0xDD2FL,0L,0L,1L,7UL};
        union U2 l_148 = {0xBB3EL};
        g_106 = l_105;
        (*l_108) = l_107;
        for (g_106.f7 = 23; (g_106.f7 < (-7)); g_106.f7 = safe_sub_func_int8_t_s_s(g_106.f7, 5))
        {
            struct S0 *l_111 = (void*)0;
            struct S0 *l_112 = &l_105;
            int l_150 = 0x98EA379FL;
            union U2 l_151 = {-1L};
            (*l_112) = g_60;
        }
        if (p_47)
            break;
    }
    (*l_159) = (((*l_107) = ((void*)0 == &g_102)) , ((safe_mul_func_uint16_t_u_u(p_47, (safe_div_func_int8_t_s_s(((*g_26) = (*g_26)), (*l_107))))) < (((*l_158) = (p_47 == p_48)) >= g_106.f0)));
    return l_160;


}







static char * func_51(int p_52, char * p_53)
{
    short l_58 = 0x7FF5L;
    struct S0 l_59 = {-1L,3L,0UL,0x520AL,0x48C8L,0x060A3B7DL,5L,-6L,0xF6B4AB19L};
    if ((((safe_lshift_func_int16_t_s_s(0xC01DL, g_57)) == l_58) , (l_58 <= ((*g_26) = (*p_53)))))
    {
        int *l_65 = &l_59.f5;
        g_60 = l_59;
        for (g_60.f2 = 0; (g_60.f2 < 2); g_60.f2++)
        {
            char **l_64 = &g_26;
            char ***l_63 = &l_64;
            int *l_73 = &g_60.f5;
            unsigned short l_76 = 3UL;
            int *l_77 = &l_59.f5;
            (*l_63) = &p_53;

            ;
            l_65 = (void*)0;

            ;
            (*l_77) = (247UL != (safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((0x8E5EL ^ (((((safe_sub_func_uint16_t_u_u(p_52, p_52)) | ((p_52 || ((l_65 = l_73) != (void*)0)) , (((*l_73) = g_27) | (safe_mul_func_uint16_t_u_u((+((g_57 >= l_76) >= 0x3F58F29AL)), g_60.f3))))) || (-7L)) > 1L) < g_60.f0)))), p_52)));

            ;
        }

        ;
    }
    else
    {
        short l_91 = 0x224FL;
        short l_96 = 0xF345L;
        int *l_97 = &l_59.f7;
        struct S0 l_98 = {0x64L,0L,4294967292UL,0x9C5DL,1L,2L,-8L,0L,0UL};
        struct S0 *l_99 = &l_98;
        (*l_97) = ((safe_div_func_uint64_t_u_u(0UL, (safe_unary_minus_func_int16_t_s(((safe_mod_func_uint16_t_u_u(p_52, p_52)) & ((safe_rshift_func_uint16_t_u_u(p_52, (((g_20 & (safe_sub_func_int8_t_s_s((p_52 == 0x84L), ((safe_sub_func_uint64_t_u_u((l_91 >= (safe_sub_func_uint16_t_u_u((((((safe_mod_func_uint32_t_u_u((g_60.f3 > p_52), p_52)) < l_91) || 0x0016C6A45D312257LL) >= l_59.f4) > 0x0A20L), l_96))), (-8L))) , 0x41L)))) ^ 8UL) >= g_60.f2))) == g_60.f0)))))) ^ l_96);
        (*l_99) = l_98;
    }
    return &g_27;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_60.f4, "g_60.f4", print_hash_value);
    transparent_crc(g_60.f5, "g_60.f5", print_hash_value);
    transparent_crc(g_60.f6, "g_60.f6", print_hash_value);
    transparent_crc(g_60.f7, "g_60.f7", print_hash_value);
    transparent_crc(g_60.f8, "g_60.f8", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_106.f4, "g_106.f4", print_hash_value);
    transparent_crc(g_106.f5, "g_106.f5", print_hash_value);
    transparent_crc(g_106.f6, "g_106.f6", print_hash_value);
    transparent_crc(g_106.f7, "g_106.f7", print_hash_value);
    transparent_crc(g_106.f8, "g_106.f8", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_121.f5, "g_121.f5", print_hash_value);
    transparent_crc(g_121.f6, "g_121.f6", print_hash_value);
    transparent_crc(g_121.f7, "g_121.f7", print_hash_value);
    transparent_crc(g_121.f8, "g_121.f8", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_127.f6, "g_127.f6", print_hash_value);
    transparent_crc(g_127.f7, "g_127.f7", print_hash_value);
    transparent_crc(g_127.f8, "g_127.f8", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_332.f4, "g_332.f4", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_685.f0, "g_685.f0", print_hash_value);
    transparent_crc(g_685.f2, "g_685.f2", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
