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
   unsigned short f0;
   unsigned long long f1;
   unsigned short f2;
   unsigned f3;
   const unsigned f4;
   unsigned long long f5;
};

struct S1 {
   long long f0;
   unsigned f1;
   const unsigned short f2;
   char f3;
   unsigned char f4;
};

struct S2 {
   const unsigned f0;
   const long long f1;
   unsigned short f2;
   const unsigned long long f3;
   unsigned char f4;
   char f5;
   unsigned long long f6;
   unsigned f7;
   int f8;
   unsigned f9;
};

struct S3 {
   unsigned f0;
};

struct S4 {
   unsigned char f0;
   struct S2 f1;
   long long f2;
   char f3;
   char f4;
   const struct S2 f5;
   struct S2 f6;
   struct S3 f7;
   int f8;
};

struct S5 {
   const short f0;
   long long f1;
   unsigned char f2;
   unsigned long long f3;
   unsigned long long f4;
};


static char g_4 = 0x53L;
static int g_12 = 1L;
static struct S3 g_13 = {1UL};
static struct S2 g_14 = {2UL,8L,65526UL,0xB090AEC51AC06E32LL,0x8DL,0L,0UL,0xCA0BECC3L,-8L,0x72157666L};
static const int *g_73 = (void*)0;
static const int ** const g_72 = &g_73;
static int *g_75 = &g_12;
static int ** const g_74 = &g_75;
static struct S4 g_79 = {0xD4L,{18446744073709551615UL,0xE66B6A1353FB5FCDLL,0xA05CL,0UL,252UL,0xAEL,0UL,4294967290UL,2L,0x5C70F91DL},0L,0xBDL,-1L,{0x73AEC32AL,1L,0x95D3L,0xA6B801CBC849BC54LL,2UL,0x7CL,0x5AB7803ABDF95B38LL,1UL,9L,4UL},{0xD70E6FC0L,2L,0x97EEL,18446744073709551607UL,1UL,0xCEL,0UL,4294967293UL,2L,4294967295UL},{0UL},0xBEF3D604L};
static struct S4 *g_78 = &g_79;
static struct S0 g_128 = {65535UL,0x1E233BC691B77CFFLL,0xB7CEL,6UL,4UL,0x762DA6596622A97DLL};
static const struct S3 *g_143 = &g_79.f7;
static struct S5 g_149 = {0x60B2L,-1L,0x13L,18446744073709551613UL,0x75F5708CA354A29ALL};
static const struct S5 *g_214 = (void*)0;
static struct S1 g_224 = {0x81FBFCF653B7EF44LL,4294967295UL,65534UL,-1L,0xB3L};
static int *g_231 = &g_12;
static struct S1 g_245 = {0xF9A6713A9174A039LL,4294967289UL,65534UL,-1L,1UL};
static struct S2 *g_257 = (void*)0;
static struct S2 **g_256 = &g_257;
static int g_267 = 1L;
static struct S3 g_269 = {0xF41EE8F7L};
static const int *g_299 = &g_12;
static const int **g_298 = &g_299;



static unsigned short func_1(void);
static struct S3 func_2(unsigned char p_3);
static struct S3 func_20(int * p_21, short p_22, int * p_23);
static int * func_24(unsigned p_25, unsigned p_26);
static unsigned func_27(struct S0 p_28, long long p_29);
static const int * func_39(struct S1 p_40, short p_41);
static struct S1 func_42(struct S5 p_43, int ** p_44, char p_45, struct S3 p_46, int ** const p_47);
static struct S5 func_48(const struct S5 p_49, struct S0 p_50, int * p_51);
static struct S5 func_52(int p_53, unsigned char p_54, struct S3 p_55, struct S4 p_56, int * p_57);
static int func_60(unsigned short p_61, int * p_62, const int ** p_63, int ** const p_64);
static unsigned short func_1(void)
{
    struct S1 l_7 = {0x45BBBDEBF889E022LL,0x5BC42206L,0xD2CCL,0x10L,0xFAL};
    struct S0 l_30 = {65531UL,0xD81C91930E88FEFDLL,65531UL,0x1AFD208DL,0UL,18446744073709551615UL};
    int *l_35 = (void*)0;
    const int *l_266 = &g_267;
    const int **l_265 = &l_266;
    int *l_275 = (void*)0;
    struct S3 * const l_277 = &g_269;
    const int **l_330 = (void*)0;
    unsigned l_349 = 0xA6C8B988L;
    if (((0x8884515FL != ((func_2(((g_4 , (safe_div_func_uint64_t_u_u(((l_7 , l_7.f1) , (safe_mod_func_int64_t_s_s((((0x6CL >= 0xB0L) || (g_4 , 0x3CF68729L)) && 65531UL), l_7.f2))), 0x36A5B5CF0ADC1094LL))) | g_4)) , g_14) , 0UL)) <= 18446744073709551609UL))
    {
        int l_19 = (-1L);
        struct S3 *l_250 = &g_13;
        struct S0 *l_251 = &l_30;
        int *l_264 = &l_19;
        (*l_250) = (((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(g_14.f0, l_19)), l_7.f2)) ^ g_14.f1) , func_20(func_24(l_19, func_27(l_30, (((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_14.f8 >= (g_14.f4 , g_14.f6)), 0x3DL)), g_4)) , l_35) == &l_19))), l_19, g_231));
        (*l_250) = ((((((g_79.f1.f6 , (((g_128 , ((void*)0 == l_251)) > ((((safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((g_256 != (void*)0), (*g_231))) & (l_19 > (l_7 , g_79.f3))) != g_79.f7.f0), g_149.f3)) | 1L) <= 0x1D03L) >= g_79.f1.f5)) , 0x0F09D011E3BC3947LL)) <= l_19) || 0x5EBEA80BL) >= (**g_72)) | (**g_72)) , (*l_250));
        (*g_231) = ((safe_div_func_uint64_t_u_u((g_79.f1.f5 <= (!((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((func_60(g_224.f0, func_24(((*g_73) && 9UL), func_60((g_79.f1.f9 ^ (func_60(g_79.f5.f6, l_264, &g_73, &l_35) ^ 0L)), l_35, &g_73, &g_231)), l_265, &l_264) | (*l_264)) <= 1UL), (**l_265))), g_79.f6.f7)) >= 0x1B2DL))), 0x656525348D2017B4LL)) ^ (-8L));
    }
    else
    {
        struct S3 *l_268 = &g_269;
        struct S1 l_274 = {0x9CF260A98DB19585LL,4294967289UL,0x3F5EL,-1L,1UL};
        const int *l_276 = &g_12;
        struct S3 *l_278 = (void*)0;
        int ** const l_280 = &l_275;
        struct S2 **l_285 = (void*)0;
        unsigned char l_300 = 0UL;
        struct S4 *l_311 = (void*)0;
        struct S4 * const l_312 = &g_79;
        int l_319 = 9L;
        struct S5 *l_332 = &g_149;
        struct S0 *l_346 = &l_30;
        struct S0 **l_345 = &l_346;
        if ((((func_27(g_128, (*l_266)) >= (l_268 == &g_269)) && (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_267 ^ ((+(~g_79.f1.f2)) | g_12)), func_60((l_274 , l_274.f1), l_275, &l_266, &g_231))), 0x09L))) | 1UL))
        {
            (*g_231) = func_27(l_30, g_79.f6.f4);
            (*l_265) = l_276;
            l_278 = l_277;
        }
        else
        {
            unsigned short l_279 = 1UL;
            (*g_74) = func_24(g_149.f0, l_279);
        }
        if (func_60(g_79.f5.f6, (*g_74), &l_276, l_280))
        {
            (*l_265) = (*g_72);
        }
        else
        {
            const int **l_281 = &l_276;
            int l_288 = 0x407BED13L;
            struct S0 *l_289 = &l_30;
            struct S0 **l_290 = &l_289;
            unsigned short l_297 = 2UL;
            int ** const l_339 = &g_75;
            int *l_341 = (void*)0;
            int l_348 = (-1L);
            if (func_60(g_14.f3, (*l_280), l_281, &g_75))
            {
                struct S5 *l_283 = &g_149;
                struct S5 **l_282 = &l_283;
                (*l_282) = &g_149;
            }
            else
            {
                struct S0 l_284 = {0x9204L,7UL,0xBFB6L,0UL,1UL,8UL};
                (*g_231) = (((0x48BA5253D42AAD9CLL | func_27(l_284, l_284.f2)) >= (&g_257 == l_285)) ^ (((safe_sub_func_uint8_t_u_u(249UL, 0x3CL)) ^ 0UL) == l_288));
            }
            (*l_290) = l_289;
            if (((safe_sub_func_uint8_t_u_u(((**l_281) <= ((void*)0 == &g_269)), (**l_281))) & (((**l_281) == (safe_rshift_func_int16_t_s_u(((func_60((*l_276), ((0x7F89L < (safe_mod_func_int32_t_s_s(((func_20(&l_288, g_79.f6.f3, (*l_280)) , 0xE152L) <= (**l_281)), l_297))) , &l_288), g_298, &g_231) != (*l_276)) != (*l_276)), g_128.f1))) == l_300)))
            {
                int l_303 = 0x1ECC703EL;
                for (g_79.f6.f4 = 0; (g_79.f6.f4 < 25); g_79.f6.f4 = safe_add_func_int16_t_s_s(g_79.f6.f4, 1))
                {
                    (*g_72) = func_39(g_245, l_303);
                    (*g_298) = (*g_298);
                }
            }
            else
            {
                long long l_320 = (-1L);
                struct S2 *l_334 = &g_79.f1;
                const int **l_340 = &g_299;
                int ** const l_342 = &l_275;
                for (g_128.f3 = 12; (g_128.f3 == 57); ++g_128.f3)
                {
                    unsigned l_306 = 4UL;
                    int l_331 = 0xD2B7819FL;
                    if ((((*l_266) == (l_306 ^ (((void*)0 == &g_257) ^ ((((safe_lshift_func_uint8_t_u_s(g_79.f1.f9, (((**l_281) , (safe_rshift_func_uint16_t_u_s(((((void*)0 == (*g_72)) < ((void*)0 != l_311)) & 0x0F35D9B5L), g_245.f4))) && 0x7911EC5A63EBDE44LL))) == 0x57D6EC1892ABD192LL) != g_14.f5) >= g_79.f6.f2)))) ^ 0x1E82L))
                    {
                        struct S4 **l_313 = &g_78;
                        struct S1 **l_314 = (void*)0;
                        struct S1 **l_315 = (void*)0;
                        struct S1 *l_317 = &l_274;
                        struct S1 **l_316 = &l_317;
                        (*l_313) = l_312;
                        (*l_316) = (void*)0;
                        (*l_280) = (void*)0;
                        (*g_231) = (**g_72);
                    }
                    else
                    {
                        struct S0 l_318 = {0UL,0UL,1UL,1UL,0xF2B35090L,0xE9071DC19AD11F48LL};
                        (*l_277) = func_2((*l_276));
                        l_319 = (l_318 , (((((*g_78) , g_224.f0) >= (1L <= (-8L))) , (func_27(l_318, g_14.f0) , ((func_60((*l_266), (*g_74), &g_73, l_280) == 3UL) || 7UL))) , (*g_75)));
                    }
                    if ((**g_74))
                    {
                        int l_329 = 0xE292644BL;
                        (*g_231) = l_306;
                        l_331 = ((0xB5E6L < (g_245.f0 != l_320)) >= (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s((!(g_14.f6 | (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((7UL < (0L | func_60(l_329, (*g_74), l_330, l_280))) | (**l_281)), 0UL)), (**l_281))))), 7)) ^ g_128.f1) , g_79.f6.f6), 14)) | 0x0155L) | (**l_281)));
                    }
                    else
                    {
                        struct S5 **l_333 = &l_332;
                        (*l_333) = l_332;
                        (*g_256) = l_334;
                        if ((*g_231))
                            continue;
                    }
                    (*g_75) = (**g_298);
                }
                (*g_231) = (safe_sub_func_uint16_t_u_u((g_79.f6.f4 == (g_128.f4 > (((-6L) >= (l_320 == l_320)) ^ ((**l_265) != ((func_60((safe_mod_func_uint16_t_u_u(func_60(func_60(g_14.f2, (*g_74), l_281, l_339), (*l_280), l_340, &g_231), g_14.f6)), l_341, &l_276, l_342) || (**l_339)) || g_128.f5))))), 0xAE1FL));
                for (g_4 = (-4); (g_4 < 15); ++g_4)
                {
                    struct S0 ***l_347 = &l_345;
                    (*l_347) = (g_128 , l_345);
                }
            }
            (**g_74) = l_348;
        }
        (*g_75) = l_349;
    }
    return (**l_265);
}







static struct S3 func_2(unsigned char p_3)
{
    short l_10 = 0x9C93L;
    int *l_11 = &g_12;
    (*l_11) = l_10;
    return g_13;
}







static struct S3 func_20(int * p_21, short p_22, int * p_23)
{
    struct S1 l_249 = {-1L,0x0596581EL,0x31A3L,0L,1UL};
    (*g_72) = ((0L >= (g_79.f5.f4 < 0x735C3782DB21E731LL)) , func_39(l_249, l_249.f4));
    return (*g_143);
}







static int * func_24(unsigned p_25, unsigned p_26)
{
    struct S1 *l_244 = &g_245;
    struct S3 l_246 = {0x659281DEL};
    struct S3 *l_247 = (void*)0;
    struct S3 *l_248 = &g_79.f7;
    l_244 = &g_224;
    (*g_72) = (*g_72);
    (*l_248) = l_246;
    (*g_75) = p_26;
    return (*g_74);
}







static unsigned func_27(struct S0 p_28, long long p_29)
{
    int *l_36 = &g_12;
    int **l_37 = (void*)0;
    int **l_38 = &l_36;
    struct S3 l_69 = {0xC007EE71L};
    struct S4 l_77 = {0x8FL,{0x69C76AADL,0xA6E1962FF4F29679LL,65535UL,0UL,0x29L,-1L,18446744073709551614UL,0x0370FD57L,-1L,5UL},0xC28DFD1F3BD0260CLL,0x03L,0xC8L,{0xAEC7FB9EL,0xBD095E97E3D8B0AALL,65535UL,0x990685852762AA91LL,1UL,-1L,1UL,4294967295UL,0x1A7A66DAL,0x8BAAD8DBL},{0xA5085D52L,-7L,65535UL,18446744073709551615UL,255UL,0x6EL,0x4865E95B66984B8FLL,0x6CCE4FA1L,0x2BB27750L,0x480CDBF8L},{0x720D768DL},1L};
    struct S0 l_82 = {0xFC89L,0xDC83B1EF4386DA90LL,0x5763L,4294967286UL,18446744073709551615UL,0UL};
    (*l_38) = l_36;
    (*g_72) = func_39(func_42(func_48(func_52(((+((*l_36) && (func_60(((+(safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_69 , (g_14.f9 & g_14.f1)), 6)), 1L))) | ((((safe_add_func_int32_t_s_s((g_72 != &g_73), (*l_36))) != g_13.f0) , g_13.f0) != 0xF0L)), (*l_38), &g_73, g_74) < p_29))) <= 0L), g_14.f2, l_69, l_77, (*l_38)), l_82, (*l_38)), &l_36, g_14.f8, l_77.f7, &l_36), g_79.f6.f3);
    return g_79.f1.f0;
}







static const int * func_39(struct S1 p_40, short p_41)
{
    int *l_241 = &g_12;
    struct S3 l_242 = {0x2ACDC9DEL};
    struct S3 *l_243 = &g_79.f7;
    (*g_74) = l_241;
    (*l_243) = l_242;
    return (*g_72);
}







static struct S1 func_42(struct S5 p_43, int ** p_44, char p_45, struct S3 p_46, int ** const p_47)
{
    for (g_128.f0 = 22; (g_128.f0 >= 28); ++g_128.f0)
    {
        return g_224;
    }
    for (g_79.f1.f9 = 0; (g_79.f1.f9 <= 31); g_79.f1.f9 = safe_add_func_int32_t_s_s(g_79.f1.f9, 5))
    {
        struct S1 l_240 = {0x0764872840B4C9AELL,0xDD1FC34EL,0x1C7CL,0x73L,255UL};
        return l_240;
    }
    return g_224;
}







static struct S5 func_48(const struct S5 p_49, struct S0 p_50, int * p_51)
{
    unsigned l_83 = 4294967287UL;
    short l_90 = 0x4A68L;
    struct S4 **l_93 = &g_78;
    int * const l_122 = (void*)0;
    const struct S3 *l_175 = &g_13;
    int *l_203 = &g_12;
    struct S1 l_223 = {0L,4294967290UL,65533UL,0x1FL,255UL};
    const int **l_225 = &g_73;
    const int **l_227 = &g_73;
    const unsigned short l_228 = 0xF97EL;
    struct S5 l_232 = {0x3C09L,0L,0x9CL,0x74052BC20A2A55C7LL,0UL};
    (*p_51) = (l_83 ^ (safe_lshift_func_int8_t_s_u(((func_2(p_50.f1) , l_83) ^ (((g_79.f6.f0 >= l_83) , (safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((p_49.f0 & l_83), g_14.f1)) != 0x1FE0044EL), l_90))) | p_49.f2)), g_79.f6.f1)));
    for (p_50.f1 = 0; (p_50.f1 <= 12); ++p_50.f1)
    {
        int *l_96 = &g_12;
        struct S2 l_97 = {1UL,0xF148B7478A259DFFLL,65535UL,0xA29F626814382FC2LL,246UL,0L,0x32BBBA2D269C2A35LL,0x381F490EL,9L,0xD554AE0EL};
        const int **l_108 = (void*)0;
        struct S4 *l_137 = &g_79;
        struct S0 *l_216 = &g_128;
        struct S0 **l_215 = &l_216;
        struct S2 *l_218 = &g_79.f6;
        struct S2 **l_217 = &l_218;
        int ** const l_226 = &l_96;
        if (((void*)0 == l_93))
        {
            struct S3 *l_94 = (void*)0;
            struct S3 l_95 = {4294967293UL};
            struct S4 l_98 = {0xEBL,{0x0B67F160L,0L,1UL,0UL,0xB7L,0x65L,0xE0B4A55CD8020B3ELL,0xA31E12F6L,0x2AC77CF8L,0UL},0L,0L,0xB0L,{0x7CAC5470L,0x9EDBDCEA1F6060BALL,0UL,0x32BF644599FCF80ELL,0x9EL,0x68L,18446744073709551606UL,0UL,0xDCCD6D88L,0xF70B1BDBL},{18446744073709551612UL,0xB247686F9EF08FD1LL,5UL,18446744073709551615UL,0xFCL,-10L,0UL,4294967291UL,0x22890EE7L,0x767623DBL},{4294967292UL},2L};
            const int l_109 = 0x89D5DEC7L;
            int *l_110 = &g_12;
            const int **l_111 = &g_73;
            l_95 = g_79.f7;
            if ((p_51 != l_96))
            {
                (*g_72) = (*g_74);
            }
            else
            {
                int **l_99 = &g_75;
                (*l_96) = (func_60((l_95.f0 , ((l_97 , (((&p_51 == (l_98 , l_99)) ^ ((*g_73) & (((g_79.f5.f9 , (safe_lshift_func_uint8_t_u_s(func_60(((safe_add_func_int32_t_s_s(((((*p_51) != (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_50.f1 <= p_50.f5), g_79.f5.f7)), 7))) , 1L) | p_50.f0), g_79.f5.f2)) && (*g_75)), l_96, l_108, &g_75), l_98.f0))) | 0x2A8FA4D6DC9EE6F4LL) > g_79.f5.f1))) & g_79.f1.f4)) >= l_109)), l_110, l_111, g_74) , 0L);
            }
            if ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((~1L), (+func_60((g_79.f6.f2 != (!((safe_sub_func_uint32_t_u_u(g_79.f5.f1, (p_50.f4 >= (((((g_79.f7 , &l_110) != &p_51) <= (safe_div_func_int32_t_s_s((*l_96), (p_50.f5 & g_79.f1.f1)))) != 65528UL) < p_50.f2)))) , g_14.f9))), l_110, &g_73, &l_96)))), g_79.f5.f6)))
            {
                int ** const l_140 = &g_75;
                struct S5 l_148 = {0x2BCDL,4L,0x3AL,0UL,0xF34C10F2D454A17CLL};
                struct S0 *l_165 = &g_128;
                for (l_98.f3 = (-21); (l_98.f3 == 15); l_98.f3 = safe_add_func_uint32_t_u_u(l_98.f3, 8))
                {
                    int **l_123 = &l_96;
                    (*g_72) = (p_50.f3 , (*g_74));
                    (*l_123) = l_122;
                    for (l_98.f6.f2 = 13; (l_98.f6.f2 > 30); l_98.f6.f2 = safe_add_func_uint16_t_u_u(l_98.f6.f2, 6))
                    {
                        struct S0 *l_127 = &g_128;
                        struct S0 **l_126 = &l_127;
                        (*l_126) = &p_50;
                    }
                    if (((((((((((~(safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(1UL, (func_60((safe_add_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((g_79.f6.f2 , ((void*)0 == l_137)) <= (safe_sub_func_int64_t_s_s((g_79.f5.f7 != func_60((1UL > 0UL), (*g_74), &g_73, l_140)), 0x637144D6AAB76A27LL))) , g_79.f5.f1), g_13.f0)) < (-8L)), p_49.f1)), p_51, &g_73, l_123) || 0UL))) & (*p_51)), p_49.f2))) > g_79.f1.f6) || (**l_111)) || g_79.f5.f3) <= g_79.f6.f6) > g_79.f5.f0) , g_79.f1.f3) == p_49.f2) <= (**g_72)) == 9L))
                    {
                        struct S0 *l_142 = &g_128;
                        struct S0 **l_141 = &l_142;
                        (*l_111) = p_51;
                        (*l_141) = (p_50 , &p_50);
                        (**g_74) = (*p_51);
                    }
                    else
                    {
                        (*l_110) = ((&l_95 != g_143) && (p_50.f1 ^ ((p_49 , (safe_add_func_int64_t_s_s((((void*)0 == (*l_111)) <= (safe_sub_func_uint8_t_u_u((((**l_111) , l_148) , g_79.f0), 0xE9L))), g_14.f7))) > (**l_140))));
                        return g_149;
                    }
                }
                for (g_4 = 0; (g_4 != 16); g_4 = safe_add_func_uint8_t_u_u(g_4, 9))
                {
                    const int **l_158 = &g_73;
                    (*p_51) = (safe_lshift_func_uint8_t_u_u((((((+((safe_rshift_func_uint8_t_u_s(0xEBL, 0)) | ((*g_78) , (safe_lshift_func_uint8_t_u_u(func_60(p_50.f5, p_51, l_158, ((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((((((**l_140) >= (((g_79.f4 != ((p_50.f4 == g_128.f0) < (**g_74))) <= g_128.f0) >= 1L)) & 0x94L) > g_79.f6.f6) >= g_79.f1.f9), p_50.f0)), p_49.f0)) , &g_75)), 2))))) || g_14.f9) == 1L) , &l_110) == &l_96), 0));
                    for (g_13.f0 = 0; (g_13.f0 <= 27); g_13.f0++)
                    {
                        (*g_75) = ((void*)0 == l_165);
                    }
                    (*l_111) = (g_79.f5.f0 , (*l_158));
                }
                (**l_140) = (g_79.f6.f1 >= (**l_140));
                (*l_140) = p_51;
            }
            else
            {
                unsigned l_172 = 0x9F09814DL;
                struct S3 *l_197 = &g_79.f7;
                struct S3 **l_210 = (void*)0;
                struct S3 **l_211 = &l_94;
                if ((safe_div_func_uint64_t_u_u(((func_60(((((safe_add_func_uint8_t_u_u(p_50.f2, (safe_lshift_func_int8_t_s_s(l_172, (safe_mod_func_int8_t_s_s((l_175 != (((0xBCL <= ((p_50.f4 < g_14.f9) , (safe_sub_func_uint64_t_u_u(p_49.f3, (safe_sub_func_uint32_t_u_u(0x21D9A2B6L, (func_60((&l_137 == (void*)0), l_110, &g_73, &g_75) , 5L))))))) | g_79.f8) , (void*)0)), 0x91L)))))) < 1L) , 0x435AD9687AAEBE99LL) != 18446744073709551608UL), p_51, l_111, g_74) , l_172) > 0x77C499EDL), g_79.f8)))
                {
                    unsigned short l_193 = 0x3E8FL;
                    struct S3 **l_198 = &l_197;
                    (*l_110) = (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((**g_74) > 1L), (g_149.f0 ^ (((safe_add_func_int64_t_s_s((**l_111), (safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s((*p_51), l_172)))))) != ((*p_51) >= g_128.f1)) || g_128.f0)))), p_50.f5)), (*l_110))) , g_128.f3), g_128.f0));
                    if (l_193)
                        continue;
                    if ((*p_51))
                        break;
                    (*l_198) = (l_98.f1 , ((safe_div_func_uint16_t_u_u(g_79.f6.f2, (safe_unary_minus_func_uint32_t_u((l_172 && 0x252BL))))) , l_197));
                }
                else
                {
                    struct S3 **l_208 = &l_197;
                    if (((safe_sub_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s(func_60(p_50.f5, l_203, l_111, &p_51), 9)) != (safe_lshift_func_int16_t_s_u((*l_110), (safe_div_func_uint16_t_u_u(g_13.f0, l_172))))) != ((void*)0 != l_208)), g_13.f0)) , (-1L)))
                    {
                        const int *l_209 = (void*)0;
                        (**l_208) = (*g_143);
                        l_209 = (*g_72);
                    }
                    else
                    {
                        (*g_74) = (*g_74);
                        if ((*g_73))
                            continue;
                        (*l_111) = (*g_74);
                    }
                }
                (*l_211) = l_197;
                for (g_79.f1.f2 = (-28); (g_79.f1.f2 > 52); ++g_79.f1.f2)
                {
                    return p_49;
                }
            }
        }
        else
        {
            g_214 = &p_49;
        }
        (*l_215) = &g_128;
        (*l_217) = &g_14;
        (*p_51) = ((func_60((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_14.f6, (p_50.f2 <= ((l_223 , (void*)0) != (void*)0)))) >= func_60((((+((4294967290UL ^ ((*l_175) , (((g_224 , func_60(p_49.f3, l_203, l_225, l_226)) && g_79.f5.f0) && p_49.f4))) , 0x7FC0L)) , 0x9C56L) ^ p_50.f5), p_51, l_227, g_74)), 0x3B0BL)), p_51, l_225, &l_203) , (void*)0) != (void*)0);
    }
    (*p_51) = l_228;
    if ((*g_75))
    {
        int ** const l_233 = &l_203;
        (*p_51) = (*g_73);
        g_13 = (*l_175);
        g_13 = func_2(p_50.f3);
        (**l_233) = (safe_rshift_func_int8_t_s_u(((p_50.f5 , p_49.f2) && func_60(g_79.f6.f5, g_231, &g_73, (l_232 , ((*l_175) , l_233)))), g_12));
    }
    else
    {
        struct S0 *l_235 = &g_128;
        struct S0 **l_234 = &l_235;
        (*l_234) = &p_50;
    }
    return l_232;
}







static struct S5 func_52(int p_53, unsigned char p_54, struct S3 p_55, struct S4 p_56, int * p_57)
{
    struct S4 **l_80 = &g_78;
    struct S5 l_81 = {0xB98CL,0x90F720CA041FCA27LL,0x6FL,0x9218137C7680494BLL,0x7C8BBA856D6AB550LL};
    (*g_72) = (*g_74);
    (*l_80) = g_78;
    return l_81;
}







static int func_60(unsigned short p_61, int * p_62, const int ** p_63, int ** const p_64)
{
    int *l_76 = &g_12;
    (*g_74) = l_76;
    return (**g_74);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_14.f5, "g_14.f5", print_hash_value);
    transparent_crc(g_14.f6, "g_14.f6", print_hash_value);
    transparent_crc(g_14.f7, "g_14.f7", print_hash_value);
    transparent_crc(g_14.f8, "g_14.f8", print_hash_value);
    transparent_crc(g_14.f9, "g_14.f9", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1.f0, "g_79.f1.f0", print_hash_value);
    transparent_crc(g_79.f1.f1, "g_79.f1.f1", print_hash_value);
    transparent_crc(g_79.f1.f2, "g_79.f1.f2", print_hash_value);
    transparent_crc(g_79.f1.f3, "g_79.f1.f3", print_hash_value);
    transparent_crc(g_79.f1.f4, "g_79.f1.f4", print_hash_value);
    transparent_crc(g_79.f1.f5, "g_79.f1.f5", print_hash_value);
    transparent_crc(g_79.f1.f6, "g_79.f1.f6", print_hash_value);
    transparent_crc(g_79.f1.f7, "g_79.f1.f7", print_hash_value);
    transparent_crc(g_79.f1.f8, "g_79.f1.f8", print_hash_value);
    transparent_crc(g_79.f1.f9, "g_79.f1.f9", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5.f0, "g_79.f5.f0", print_hash_value);
    transparent_crc(g_79.f5.f1, "g_79.f5.f1", print_hash_value);
    transparent_crc(g_79.f5.f2, "g_79.f5.f2", print_hash_value);
    transparent_crc(g_79.f5.f3, "g_79.f5.f3", print_hash_value);
    transparent_crc(g_79.f5.f4, "g_79.f5.f4", print_hash_value);
    transparent_crc(g_79.f5.f5, "g_79.f5.f5", print_hash_value);
    transparent_crc(g_79.f5.f6, "g_79.f5.f6", print_hash_value);
    transparent_crc(g_79.f5.f7, "g_79.f5.f7", print_hash_value);
    transparent_crc(g_79.f5.f8, "g_79.f5.f8", print_hash_value);
    transparent_crc(g_79.f5.f9, "g_79.f5.f9", print_hash_value);
    transparent_crc(g_79.f6.f0, "g_79.f6.f0", print_hash_value);
    transparent_crc(g_79.f6.f1, "g_79.f6.f1", print_hash_value);
    transparent_crc(g_79.f6.f2, "g_79.f6.f2", print_hash_value);
    transparent_crc(g_79.f6.f3, "g_79.f6.f3", print_hash_value);
    transparent_crc(g_79.f6.f4, "g_79.f6.f4", print_hash_value);
    transparent_crc(g_79.f6.f5, "g_79.f6.f5", print_hash_value);
    transparent_crc(g_79.f6.f6, "g_79.f6.f6", print_hash_value);
    transparent_crc(g_79.f6.f7, "g_79.f6.f7", print_hash_value);
    transparent_crc(g_79.f6.f8, "g_79.f6.f8", print_hash_value);
    transparent_crc(g_79.f6.f9, "g_79.f6.f9", print_hash_value);
    transparent_crc(g_79.f7.f0, "g_79.f7.f0", print_hash_value);
    transparent_crc(g_79.f8, "g_79.f8", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5, "g_128.f5", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3, "g_224.f3", print_hash_value);
    transparent_crc(g_224.f4, "g_224.f4", print_hash_value);
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_245.f2, "g_245.f2", print_hash_value);
    transparent_crc(g_245.f3, "g_245.f3", print_hash_value);
    transparent_crc(g_245.f4, "g_245.f4", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
