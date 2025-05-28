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
   short f0;
   volatile unsigned f1;
   short f2;
   unsigned f3;
   unsigned short f4;
   short f5;
   int f6;
};


static int g_6 = 1L;
static int g_87 = (-7L);
static volatile struct S0 g_96 = {0xB82EL,0UL,0L,0x4023A1BFL,0x0E0EL,0xEF66L,1L};
static int *g_98 = (void*)0;
static int g_105 = 0x4FFAFD2AL;
static struct S0 g_158 = {0xA485L,4294967295UL,-4L,6UL,65526UL,0x6011L,-6L};
static struct S0 g_159 = {0x725CL,0xA702CAF5L,0xDCE7L,1UL,0x4005L,-10L,0xD5A12BEBL};
static int g_166 = 0x31187F98L;
static struct S0 g_183 = {0x421DL,0xCA3CFAA4L,1L,18446744073709551615UL,0x370AL,0xD863L,0xB28DBC52L};
static struct S0 g_198 = {0x0749L,0x40BE61B3L,1L,0x30394C60L,0x9C38L,0L,0xE233F4ACL};
static struct S0 g_227 = {0x3233L,4294967288UL,5L,18446744073709551609UL,0UL,0x7CC4L,1L};
static struct S0 g_232 = {0xDACBL,0x9D8B4DDBL,0xFA93L,0UL,65535UL,0xCEFBL,0x7572B0FFL};
static struct S0 g_233 = {-1L,4294967294UL,-5L,0xF85720E6L,0x04E2L,0L,-5L};
static struct S0 g_270 = {0xD03CL,0xEF64EFBDL,5L,0x7ABB9593L,0x8CAEL,0x4B55L,0x375361B7L};
static struct S0 g_285 = {6L,4294967289UL,0L,2UL,0xAD04L,0x61D7L,0x1B982560L};
static struct S0 g_287 = {0x4069L,4294967293UL,0x4359L,0xF8C94D68L,65535UL,0L,0x5D64FB07L};
static struct S0 g_312 = {1L,0x3648218CL,1L,18446744073709551610UL,0xE0FBL,0x3B89L,1L};
static int **g_315 = &g_98;
static int ***g_314 = &g_315;
static volatile struct S0 *g_319 = &g_96;
static volatile struct S0 **g_318 = &g_319;
static struct S0 g_367 = {0x8213L,1UL,-9L,18446744073709551608UL,0x347FL,1L,-1L};
static struct S0 g_377 = {0xAFF6L,0x0F1A0B10L,0xEEFAL,3UL,0xC2FBL,0x0153L,-1L};
static volatile struct S0 g_393 = {4L,0xBFAC9C4EL,0xA5E1L,18446744073709551612UL,0x277DL,-9L,0x26FF939FL};



static struct S0 func_1(void);
static struct S0 func_2(int p_3, unsigned char p_4, unsigned p_5);
static int func_9(unsigned short p_10);
static unsigned char func_14(int p_15);
static unsigned short func_16(char p_17, unsigned char p_18, unsigned short p_19, int p_20);
static unsigned short func_21(unsigned short p_22, short p_23, unsigned p_24);
static unsigned char func_29(unsigned char p_30);
static unsigned short func_42(unsigned char p_43, char p_44, char p_45);
static unsigned char func_53(unsigned short p_54, int p_55, unsigned p_56);
static short func_57(int p_58, char p_59);
static struct S0 func_1(void)
{
    short l_11 = 0x1546L;
    struct S0 *l_406 = &g_377;
    (*l_406) = func_2(g_6, ((safe_sub_func_uint32_t_u_u(((g_6 < g_6) && g_6), func_9((l_11 != ((((safe_lshift_func_int16_t_s_u((func_14((func_16(g_6, g_6, (((~func_21(g_6, g_6, g_6)) , l_11) , g_6), g_6) || 3L)) >= g_227.f6), 2)) >= 0x19AC70E9L) && 0x0871L) , (-1L)))))) <= g_232.f6), l_11);


    return (*l_406);
}







static struct S0 func_2(int p_3, unsigned char p_4, unsigned p_5)
{
    struct S0 *l_272 = &g_158;
    int *l_275 = (void*)0;
    int l_278 = (-1L);
    (*l_272) = g_198;
    if ((safe_lshift_func_int16_t_s_u(0x5283L, 10)))
    {
        int **l_276 = &l_275;
        struct S0 *l_277 = &g_158;
        int l_286 = (-1L);
        (*l_276) = l_275;
        l_278 = ((void*)0 == l_277);
        for (g_270.f3 = 0; (g_270.f3 >= 21); ++g_270.f3)
        {
            int l_283 = (-7L);
            int *l_284 = &l_278;
            for (g_233.f0 = 2; (g_233.f0 > (-29)); g_233.f0 = safe_sub_func_int8_t_s_s(g_233.f0, 4))
            {
                if (l_283)
                    break;
            }
            (*l_284) = (~0x81C7AF72L);
            if ((*l_284))
            {
                unsigned short l_302 = 0x9554L;
                (*l_272) = g_285;
                if ((l_286 && g_270.f4))
                {
                    g_98 = (*l_276);

                    ;
                    if (p_5)
                        break;
                }
                else
                {
                    int *l_290 = &g_166;
                    unsigned short l_311 = 0xA8A8L;
                    if (g_233.f6)
                    {
                        struct S0 **l_288 = (void*)0;
                        struct S0 **l_289 = &l_272;
                        (*l_277) = g_183;
                        g_287 = (*l_272);
                        (*l_289) = l_277;
                    }
                    else
                    {
                        short l_301 = 0L;
                        (*l_276) = l_290;

                        ;
                        (*l_284) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((+p_4) | (((safe_add_func_uint32_t_u_u((((*l_284) <= p_5) == ((((safe_add_func_uint32_t_u_u(0xC234BBA6L, (p_3 < g_227.f3))) <= ((safe_rshift_func_uint8_t_u_s((0x5FAE3B17L ^ 0L), 1)) , p_3)) < l_301) < l_302)), 0L)) , (**l_276)) & l_301)), p_5)), p_4));
                    }
                    if ((l_302 ^ g_183.f0))
                    {
                        (*l_276) = (l_302 , (*l_276));
                    }
                    else
                    {
                        struct S0 *l_307 = (void*)0;
                        int l_310 = 2L;
                        (*l_290) = func_53(p_4, ((safe_rshift_func_int16_t_s_s(9L, (((g_287.f0 || (safe_rshift_func_int8_t_s_s(((void*)0 == l_307), (safe_lshift_func_uint8_t_u_u((!p_5), 4))))) ^ g_285.f2) , 0x7D95L))) , func_53((l_310 , 65528UL), g_232.f2, g_227.f6)), g_270.f3);
                        if (l_311)
                            break;
                        return g_312;


                    }
                    (*l_290) = (p_5 > (g_159 , ((g_232.f5 , (((0x9093L | (safe_unary_minus_func_uint32_t_u((p_5 | ((*l_290) , func_53((func_42((*l_284), func_57(p_4, p_5), p_3) , 1UL), (*l_284), l_302)))))) , g_314) != (void*)0)) | (*l_290))));

                    ;
                    if ((g_6 && (g_318 != &g_319)))
                    {
                        return (*l_277);
                    }
                    else
                    {
                        (**g_314) = (*g_315);
                        l_284 = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                (**g_314) = &l_278;

                ;
            }

            ;
            ;
        }

        ;
        ;
        (*l_277) = (*l_277);
    }
    else
    {
        int ***l_324 = &g_315;
        struct S0 *l_376 = &g_377;
        int ***l_386 = &g_315;
        if ((safe_mod_func_int16_t_s_s(0x137FL, (safe_div_func_int8_t_s_s(func_42((p_3 >= p_3), g_233.f4, (&g_315 != l_324)), p_3)))))
        {
            char l_333 = 0x4AL;
            int *l_338 = &l_278;
            int l_345 = 7L;
            unsigned short l_363 = 0xE5C4L;
            (**l_324) = (**l_324);
            if (func_29((g_158.f0 , (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_3, (safe_rshift_func_int16_t_s_s(p_3, 4)))), (((**g_318) , (((safe_mul_func_int8_t_s_s(l_333, (!((safe_rshift_func_int16_t_s_u(g_227.f1, p_3)) == 247UL)))) & g_232.f3) != 1L)) >= g_312.f4))))))
            {
                unsigned l_350 = 0x88803EDBL;
                int *l_366 = &g_87;
                for (g_312.f0 = 0; (g_312.f0 <= 16); g_312.f0 = safe_add_func_uint32_t_u_u(g_312.f0, 7))
                {
                    (*g_315) = (void*)0;

                    ;
                    (**g_314) = l_338;

                    ;
                }

                ;
                if (((((safe_div_func_uint32_t_u_u(((p_4 >= (0xDCL != (safe_mod_func_uint32_t_u_u(g_287.f4, ((~(safe_mod_func_int16_t_s_s((l_345 >= (func_42(g_287.f5, p_4, ((((safe_add_func_int16_t_s_s((((~(safe_sub_func_int8_t_s_s(1L, (p_5 == 0L)))) != p_4) < g_183.f5), (-9L))) && (*l_338)) && g_183.f5) ^ 0xFDD9L)) , p_5)), 0xC921L))) , (*l_338)))))) , (*l_338)), 8L)) < 0UL) && l_350) & (-2L)))
                {
                    int *l_362 = &l_278;
                    for (g_287.f6 = 0; (g_287.f6 >= 1); ++g_287.f6)
                    {
                        (*g_318) = (*g_318);
                        return (**g_318);
                    }
                    if ((!((safe_lshift_func_int8_t_s_s(((g_287.f5 , &g_319) == (void*)0), 7)) , (safe_add_func_uint32_t_u_u(l_350, p_4)))))
                    {
                        struct S0 **l_357 = (void*)0;
                        struct S0 **l_358 = &l_272;
                        int *l_359 = &g_105;
                        (*l_358) = l_272;
                        l_359 = (**g_314);

                        ;
                        (*g_315) = ((((safe_add_func_int16_t_s_s((((((p_4 & (*l_338)) < ((-1L) || (*l_338))) , &l_278) == l_362) , ((g_87 == ((func_9((l_363 >= (safe_rshift_func_int16_t_s_u(g_183.f2, p_3)))) ^ g_105) , p_5)) >= g_233.f0)), g_232.f2)) , p_5) ^ 0xE584L) , l_362);

                        ;
                        (**l_324) = l_359;

                        ;
                    }
                    else
                    {
                        (*l_338) = l_350;
                    }
                }
                else
                {
                    (*g_315) = l_366;

                    ;
                    return g_367;
                }

                ;
            }
            else
            {
                unsigned char l_368 = 0x90L;
                (*l_338) = func_57(l_368, g_198.f5);
            }

            ;
            (*l_338) = (safe_sub_func_uint8_t_u_u(func_57((*l_338), (*l_338)), (*l_338)));
            (**g_314) = &l_345;

            ;
        }
        else
        {
            int *l_375 = &g_105;
            struct S0 **l_380 = &l_272;
            int l_385 = (-2L);
            (**l_324) = ((safe_rshift_func_int8_t_s_s((+((safe_add_func_uint8_t_u_u((func_29((((*g_319) , (*g_318)) != ((l_375 == &l_278) , l_376))) > ((((safe_add_func_int32_t_s_s(p_3, (l_380 == &l_272))) < g_377.f4) != p_3) ^ 8UL)), p_4)) | 0x6AL)), 0)) , (void*)0);
            for (g_158.f3 = (-25); (g_158.f3 > 12); g_158.f3 = safe_add_func_uint8_t_u_u(g_158.f3, 2))
            {
                int l_389 = 0x16D4BF3CL;
                int *l_390 = &l_278;
                unsigned short l_396 = 0x0351L;
                struct S0 *l_397 = &g_270;
                int ***l_400 = &g_315;
                if ((safe_lshift_func_int8_t_s_u((4294967289UL <= func_21(l_385, (g_312.f2 <= (((g_233.f2 && g_287.f5) <= (0x6938209BL >= (-10L))) <= ((g_312.f1 , l_324) == l_386))), (*l_375))), 3)))
                {
                    unsigned l_398 = 18446744073709551607UL;
                    (**g_314) = (void*)0;

                    ;
                    for (g_233.f6 = 7; (g_233.f6 >= 8); g_233.f6 = safe_add_func_int16_t_s_s(g_233.f6, 8))
                    {
                        (*l_375) = l_389;
                        (**g_314) = l_390;

                        ;
                        return (*l_376);


                    }
                    if ((l_272 == ((0x487D3886L >= func_57((*l_375), ((safe_mul_func_uint8_t_u_u(0x2DL, (p_3 == p_4))) >= func_9((g_393 , (safe_rshift_func_int8_t_s_u((~((((*g_314) == (void*)0) >= l_396) && (-1L))), 4))))))) , l_397)))
                    {
                        int *l_399 = &l_278;
                        if (l_398)
                            break;
                        (*l_390) = p_3;
                        l_375 = l_399;

                        ;
                        (*g_315) = &l_278;

                        ;
                    }
                    else
                    {
                        if (p_4)
                            break;
                        return (*l_397);
                    }

                    ;
                    ;
                    return (*l_376);


                }
                else
                {
                    int *l_401 = &l_385;
                    (*g_315) = (((void*)0 != l_400) , (void*)0);

                    ;
                    (**l_324) = l_401;

                    ;
                    for (g_233.f3 = 0; (g_233.f3 < 5); g_233.f3++)
                    {
                        (**g_314) = (**l_400);
                    }
                    (***g_314) = 0x1DC6F38FL;
                }

                ;
                if ((&g_319 != (void*)0))
                {
                    (*g_318) = (*g_318);
                }
                else
                {
                    (*g_319) = (**g_318);
                }
            }

            ;
            for (p_3 = (-27); (p_3 == 8); ++p_3)
            {
                (*l_375) = (-5L);
            }
            (*l_375) = func_14(p_3);
        }


    }


    ;
    return (*l_272);


}







static int func_9(unsigned short p_10)
{
    char l_268 = 1L;
    int *l_269 = &g_105;
    struct S0 *l_271 = &g_270;
    l_269 = (func_14(l_268) , l_269);
    (*l_271) = g_270;
    return g_270.f2;
}







static unsigned char func_14(int p_15)
{
    char l_267 = 0xDCL;
    return l_267;
}







static unsigned short func_16(char p_17, unsigned char p_18, unsigned short p_19, int p_20)
{
    int l_28 = 0x9281C1D9L;
    struct S0 *l_194 = (void*)0;
    int l_223 = 0x69658B35L;
    int ***l_231 = (void*)0;
    if ((safe_sub_func_int8_t_s_s(func_21(l_28, ((func_21(l_28, (0UL | func_29(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(3L)), ((g_6 , l_28) != (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((func_21(g_6, l_28, func_21((p_20 | g_6), l_28, g_6)) , 1UL) == g_6), 0L)), 1UL))))), p_20)) , p_20))), g_158.f4) ^ 0x7EF1F1ADL) | l_28), p_19), g_158.f3)))
    {
        struct S0 *l_188 = (void*)0;
        struct S0 **l_187 = &l_188;
        (*l_187) = (void*)0;
    }
    else
    {
        int l_195 = 0xF21B87BBL;
        struct S0 **l_196 = (void*)0;
        struct S0 **l_197 = &l_194;
        (*l_197) = ((safe_lshift_func_int16_t_s_u((+p_20), (p_20 & (0x5C0BL ^ (safe_mul_func_uint8_t_u_u((((((safe_unary_minus_func_int32_t_s(p_19)) , 0xAB75L) , g_159.f5) , l_194) != (void*)0), l_195)))))) , (void*)0);
        g_198 = g_158;
    }

    ;
    for (g_158.f6 = 0; (g_158.f6 <= 0); g_158.f6 = safe_add_func_uint16_t_u_u(g_158.f6, 1))
    {
        return p_18;
    }
    if (p_18)
    {
        short l_225 = 0L;
        struct S0 *l_228 = &g_198;
        for (g_159.f6 = 0; (g_159.f6 < (-6)); --g_159.f6)
        {
            int *l_203 = (void*)0;
            int **l_204 = &l_203;
            struct S0 **l_205 = &l_194;
            (*l_204) = l_203;
            (*l_205) = (l_28 , &g_158);

            ;
            if (((*l_204) == (void*)0))
            {
                struct S0 **l_208 = &l_194;
                int *l_226 = &l_223;
                (*l_204) = (void*)0;
                if ((safe_lshift_func_uint16_t_u_u(((l_208 == l_208) >= g_96.f6), 4)))
                {
                    for (g_87 = 0; (g_87 >= (-10)); g_87--)
                    {
                        int *l_211 = &g_87;
                        g_183 = (*l_194);
                        (*l_204) = (*l_204);
                        (*l_204) = &g_166;

                        ;
                        (*l_204) = l_211;

                        ;
                    }

                    ;
                }
                else
                {
                    for (p_18 = 0; (p_18 == 16); p_18 = safe_add_func_uint32_t_u_u(p_18, 1))
                    {
                        char l_216 = 0xD3L;
                        l_216 = (safe_add_func_uint32_t_u_u(0xFA2BBC16L, l_28));
                    }
                    for (g_158.f2 = 0; (g_158.f2 != (-5)); g_158.f2--)
                    {
                        int *l_219 = (void*)0;
                        int *l_220 = &g_87;
                        if (g_96.f1)
                            break;
                        (*l_220) = (g_158.f6 || 0xC2L);
                    }
                    for (g_198.f2 = 0; (g_198.f2 <= 21); ++g_198.f2)
                    {
                        int *l_224 = &g_105;
                        (*l_224) = l_223;
                    }
                }

                ;
                if (l_225)
                    break;
                (*l_226) = p_18;
            }
            else
            {
                (*l_194) = g_183;
            }

            ;
            if (l_223)
                break;
        }

        ;
        (*l_228) = g_227;
    }
    else
    {
        int *l_243 = (void*)0;
        struct S0 *l_244 = &g_159;
        for (g_227.f4 = 0; (g_227.f4 != 7); ++g_227.f4)
        {
            short l_236 = 0x0383L;
            int *l_237 = &l_223;
            struct S0 **l_248 = &l_194;
            (*l_237) = ((((void*)0 != l_231) & ((g_232 , g_233) , ((safe_sub_func_uint32_t_u_u(func_29(p_19), (((~((func_21(l_236, g_198.f3, g_227.f2) > 0xD5L) , 1UL)) , p_17) ^ g_227.f3))) > l_236))) == g_227.f4);
            (*l_237) = g_198.f2;
            for (g_158.f3 = 0; (g_158.f3 == 40); g_158.f3 = safe_add_func_uint16_t_u_u(g_158.f3, 1))
            {
                int *l_240 = &g_105;
                l_237 = l_240;

                ;
                for (g_159.f4 = (-18); (g_159.f4 >= 14); ++g_159.f4)
                {
                    struct S0 **l_245 = &l_244;
                    l_243 = (void*)0;
                    (*l_245) = l_244;
                    (*l_237) = 0x167A9038L;
                    (*l_245) = (void*)0;

                    ;
                }
            }

            ;
            for (g_183.f6 = 5; (g_183.f6 > 2); g_183.f6 = safe_sub_func_int8_t_s_s(g_183.f6, 7))
            {
                unsigned char l_251 = 3UL;
                int **l_256 = &g_98;
            }
        }

        ;
    }

    ;
    return l_223;
}







static unsigned short func_21(unsigned short p_22, short p_23, unsigned p_24)
{
    unsigned char l_25 = 255UL;
    return l_25;
}







static unsigned char func_29(unsigned char p_30)
{
    unsigned l_60 = 18446744073709551615UL;
    int **l_117 = &g_98;
    unsigned char l_156 = 0UL;
    int ***l_186 = &l_117;
    if ((safe_add_func_uint16_t_u_u(0x7D8EL, 0xBFBCL)))
    {
        unsigned l_50 = 0UL;
        short l_65 = 4L;
        short l_66 = 4L;
        int *l_100 = &g_87;
        unsigned l_118 = 9UL;
        unsigned l_138 = 0x72531C41L;
        unsigned l_172 = 18446744073709551615UL;
        struct S0 *l_184 = (void*)0;
        struct S0 *l_185 = &g_183;
        (*l_100) = func_21(((func_21(func_42(((0x26AECE01L || (!(safe_add_func_int8_t_s_s(l_50, ((!p_30) != ((safe_mod_func_uint32_t_u_u((func_53(g_6, ((((func_57(p_30, (g_6 == l_60)) && ((safe_rshift_func_int16_t_s_s(func_21(l_60, l_65, p_30), p_30)) , g_6)) | l_66) > g_6) , l_60), g_6) || l_60), g_6)) , g_6)))))) || 3UL), g_6, p_30), p_30, p_30) >= l_66) , 0x3F3DL), p_30, p_30);

        ;
        for (g_87 = (-24); (g_87 > (-24)); g_87 = safe_add_func_uint8_t_u_u(g_87, 8))
        {
            int l_103 = (-1L);
            int *l_104 = &g_105;
            int l_135 = 0xFB2C377CL;
            (*l_104) = (((void*)0 != &g_98) ^ func_57(l_103, g_96.f0));
            (*l_104) = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_87, func_21(((((safe_add_func_uint32_t_u_u(((&g_98 == (void*)0) , ((safe_unary_minus_func_int8_t_s((g_6 || ((*l_104) >= 255UL)))) != (safe_rshift_func_int16_t_s_u(0xD213L, (safe_add_func_int32_t_s_s(l_60, p_30)))))), g_96.f1)) , &g_98) != l_117) && g_96.f3), l_118, g_105))), p_30)) <= g_6);
            (*l_117) = &g_105;

            ;
            if ((*g_98))
            {
                for (l_66 = 27; (l_66 == 7); l_66 = safe_sub_func_int32_t_s_s(l_66, 8))
                {
                    return p_30;
                }
                return (**l_117);
            }
            else
            {
                short l_134 = 0x19F0L;
                if (((*l_117) == &g_105))
                {
                    unsigned char l_131 = 0x58L;
                    (*g_98) = (safe_lshift_func_uint16_t_u_s(g_6, ((-1L) & (safe_lshift_func_int8_t_s_s(((p_30 , (safe_lshift_func_int16_t_s_u(p_30, (((((((0xE4L ^ (safe_mod_func_int8_t_s_s(0L, (p_30 , (safe_div_func_int16_t_s_s((((6L != l_131) , 6L) , (*l_100)), g_96.f3)))))) != 0xB1B7L) != 0x0CL) == l_131) , 2UL) , (*l_100)) <= p_30)))) , g_96.f6), 6)))));
                    (*l_104) = func_57((((safe_add_func_uint8_t_u_u((func_57(((**l_117) == l_134), g_96.f6) | g_87), 0xABL)) == ((**l_117) != (1L < l_135))) , p_30), p_30);
                }
                else
                {
                    (*l_117) = &g_87;

                    ;
                    for (l_103 = 8; (l_103 == (-21)); l_103 = safe_sub_func_uint8_t_u_u(l_103, 1))
                    {
                        (*l_117) = &g_87;
                    }
                }

                ;
            }

            ;
        }

        ;
        if ((((((0x6BD06F17L | (l_138 <= g_6)) >= g_6) , g_6) != func_53(p_30, (p_30 == ((safe_lshift_func_int8_t_s_s(g_105, 0)) != (g_105 & 1UL))), g_96.f4)) , p_30))
        {
            unsigned char l_143 = 0xDAL;
            int *l_146 = &g_87;
            unsigned l_157 = 0x03959C9AL;
            (*l_100) = func_21((g_96.f1 == (g_6 , func_21((safe_add_func_uint8_t_u_u(l_143, g_105)), g_87, (g_6 <= (4294967287UL <= g_105))))), g_105, g_87);
            (*l_117) = l_100;

            ;
            for (l_60 = 4; (l_60 != 12); ++l_60)
            {
                unsigned l_155 = 0x0E7BB6F3L;
                g_98 = l_146;

                ;
                (*l_117) = (void*)0;

                ;
                if ((g_96.f3 < ((p_30 , ((0UL == ((((safe_add_func_uint8_t_u_u(func_53(((4294967295UL || ((safe_rshift_func_int8_t_s_u((p_30 <= ((func_21(((safe_mul_func_uint8_t_u_u(g_87, ((*l_146) , ((*l_146) , (((func_57((*l_146), (*l_146)) == g_87) , l_155) != 0xD73F1880L))))) != p_30), p_30, p_30) , &g_98) != &g_98)), 3)) | 0x00339178L)) == l_156), p_30, l_157), g_6)) <= p_30) == l_155) != g_6)) > l_155)) , p_30)))
                {
                    int l_171 = 1L;
                    if ((*l_100))
                    {
                        g_105 = 1L;
                        if (p_30)
                            continue;
                    }
                    else
                    {
                        struct S0 *l_161 = &g_159;
                        struct S0 **l_160 = &l_161;
                        g_159 = g_158;
                        (*l_117) = l_146;

                        ;
                        (*l_117) = &g_87;
                        (*l_160) = &g_158;

                        ;
                    }

                    ;
                    (*l_146) = func_57(g_158.f4, (safe_mod_func_uint16_t_u_u(func_53(func_53(((safe_sub_func_int32_t_s_s(((((func_57(g_166, ((l_155 >= (0L <= 0x58E8L)) , ((4294967291UL & (((safe_lshift_func_int8_t_s_u(func_57((*l_100), p_30), g_159.f2)) , (void*)0) == (void*)0)) || p_30))) , l_171) ^ g_159.f3) , l_171) != 7L), l_172)) , p_30), (*l_146), (*l_100)), g_159.f0, p_30), g_159.f4)));
                    (*l_117) = &g_87;

                    ;
                }
                else
                {
                    struct S0 *l_173 = &g_158;
                    struct S0 **l_174 = &l_173;
                    (*l_174) = l_173;
                    (*l_100) = g_96.f6;
                }

                ;
                (*l_100) = ((safe_unary_minus_func_uint8_t_u(0UL)) && (g_166 | func_57((((func_42(g_158.f4, (safe_add_func_int32_t_s_s(g_159.f0, ((0xE6A16A95L || (safe_mul_func_uint8_t_u_u((*l_146), g_158.f0))) > 1L))), p_30) != 0x69F5L) & (-6L)) ^ 8UL), p_30)));
            }

            ;
        }
        else
        {
            struct S0 *l_182 = &g_159;
            g_166 = (func_42(p_30, g_96.f4, g_158.f5) && (p_30 | (*l_100)));

            ;
            for (g_158.f6 = 3; (g_158.f6 == (-10)); g_158.f6 = safe_sub_func_int16_t_s_s(g_158.f6, 2))
            {
                return g_159.f6;
            }
            (*l_182) = g_159;
            (*l_182) = g_159;
        }

        ;
        (*l_185) = g_183;
    }
    else
    {
        return g_158.f4;
    }

    ;
    (*l_186) = &g_98;
    return p_30;
}







static unsigned short func_42(unsigned char p_43, char p_44, char p_45)
{
    int l_90 = 0L;
    int *l_91 = (void*)0;
    int *l_97 = (void*)0;
    unsigned l_99 = 0x61D2E80BL;
    for (p_44 = (-3); (p_44 == 5); p_44 = safe_add_func_uint16_t_u_u(p_44, 7))
    {
        int **l_92 = (void*)0;
        int **l_93 = &l_91;
        l_90 = p_43;
        (*l_93) = l_91;
        g_96 = (func_53(p_44, p_44, p_43) , (g_87 , (((safe_lshift_func_int8_t_s_s((l_93 != (void*)0), 1)) >= (p_45 == p_43)) , g_96)));
    }
    g_98 = l_97;

    ;
    return l_99;
}







static unsigned char func_53(unsigned short p_54, int p_55, unsigned p_56)
{
    unsigned short l_67 = 0xA2ADL;
    char l_78 = (-1L);
    unsigned l_85 = 0xABA01C9AL;
    int *l_86 = &g_87;
    (*l_86) = ((func_57((p_55 > (p_55 > g_6)), (((((l_67 && (safe_mod_func_int16_t_s_s((func_57((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_78, (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((func_57(p_56, (safe_mul_func_int8_t_s_s(p_56, 255UL))) < p_55), 0x7EL)), l_78)))), 65534UL)), 4)) > g_6) >= l_85) > 1L), p_54)), l_78) ^ 0x33F2L), g_6))) != l_67) , p_56) != p_56) , l_78)) , &p_55) != l_86);
    return g_6;
}







static short func_57(int p_58, char p_59)
{
    int *l_62 = (void*)0;
    int **l_61 = &l_62;
    (*l_61) = &p_58;

    ;
    return g_6;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_96.f6, "g_96.f6", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f3, "g_158.f3", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    transparent_crc(g_158.f5, "g_158.f5", print_hash_value);
    transparent_crc(g_158.f6, "g_158.f6", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_159.f4, "g_159.f4", print_hash_value);
    transparent_crc(g_159.f5, "g_159.f5", print_hash_value);
    transparent_crc(g_159.f6, "g_159.f6", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_183.f2, "g_183.f2", print_hash_value);
    transparent_crc(g_183.f3, "g_183.f3", print_hash_value);
    transparent_crc(g_183.f4, "g_183.f4", print_hash_value);
    transparent_crc(g_183.f5, "g_183.f5", print_hash_value);
    transparent_crc(g_183.f6, "g_183.f6", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_198.f3, "g_198.f3", print_hash_value);
    transparent_crc(g_198.f4, "g_198.f4", print_hash_value);
    transparent_crc(g_198.f5, "g_198.f5", print_hash_value);
    transparent_crc(g_198.f6, "g_198.f6", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_227.f4, "g_227.f4", print_hash_value);
    transparent_crc(g_227.f5, "g_227.f5", print_hash_value);
    transparent_crc(g_227.f6, "g_227.f6", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_232.f5, "g_232.f5", print_hash_value);
    transparent_crc(g_232.f6, "g_232.f6", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    transparent_crc(g_233.f2, "g_233.f2", print_hash_value);
    transparent_crc(g_233.f3, "g_233.f3", print_hash_value);
    transparent_crc(g_233.f4, "g_233.f4", print_hash_value);
    transparent_crc(g_233.f5, "g_233.f5", print_hash_value);
    transparent_crc(g_233.f6, "g_233.f6", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    transparent_crc(g_270.f4, "g_270.f4", print_hash_value);
    transparent_crc(g_270.f5, "g_270.f5", print_hash_value);
    transparent_crc(g_270.f6, "g_270.f6", print_hash_value);
    transparent_crc(g_285.f0, "g_285.f0", print_hash_value);
    transparent_crc(g_285.f1, "g_285.f1", print_hash_value);
    transparent_crc(g_285.f2, "g_285.f2", print_hash_value);
    transparent_crc(g_285.f3, "g_285.f3", print_hash_value);
    transparent_crc(g_285.f4, "g_285.f4", print_hash_value);
    transparent_crc(g_285.f5, "g_285.f5", print_hash_value);
    transparent_crc(g_285.f6, "g_285.f6", print_hash_value);
    transparent_crc(g_287.f0, "g_287.f0", print_hash_value);
    transparent_crc(g_287.f1, "g_287.f1", print_hash_value);
    transparent_crc(g_287.f2, "g_287.f2", print_hash_value);
    transparent_crc(g_287.f3, "g_287.f3", print_hash_value);
    transparent_crc(g_287.f4, "g_287.f4", print_hash_value);
    transparent_crc(g_287.f5, "g_287.f5", print_hash_value);
    transparent_crc(g_287.f6, "g_287.f6", print_hash_value);
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_312.f2, "g_312.f2", print_hash_value);
    transparent_crc(g_312.f3, "g_312.f3", print_hash_value);
    transparent_crc(g_312.f4, "g_312.f4", print_hash_value);
    transparent_crc(g_312.f5, "g_312.f5", print_hash_value);
    transparent_crc(g_312.f6, "g_312.f6", print_hash_value);
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_367.f2, "g_367.f2", print_hash_value);
    transparent_crc(g_367.f3, "g_367.f3", print_hash_value);
    transparent_crc(g_367.f4, "g_367.f4", print_hash_value);
    transparent_crc(g_367.f5, "g_367.f5", print_hash_value);
    transparent_crc(g_367.f6, "g_367.f6", print_hash_value);
    transparent_crc(g_377.f0, "g_377.f0", print_hash_value);
    transparent_crc(g_377.f1, "g_377.f1", print_hash_value);
    transparent_crc(g_377.f2, "g_377.f2", print_hash_value);
    transparent_crc(g_377.f3, "g_377.f3", print_hash_value);
    transparent_crc(g_377.f4, "g_377.f4", print_hash_value);
    transparent_crc(g_377.f5, "g_377.f5", print_hash_value);
    transparent_crc(g_377.f6, "g_377.f6", print_hash_value);
    transparent_crc(g_393.f0, "g_393.f0", print_hash_value);
    transparent_crc(g_393.f1, "g_393.f1", print_hash_value);
    transparent_crc(g_393.f2, "g_393.f2", print_hash_value);
    transparent_crc(g_393.f3, "g_393.f3", print_hash_value);
    transparent_crc(g_393.f4, "g_393.f4", print_hash_value);
    transparent_crc(g_393.f5, "g_393.f5", print_hash_value);
    transparent_crc(g_393.f6, "g_393.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
