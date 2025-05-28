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
};

struct S1 {
   int f0;
   struct S0 f1;
   unsigned char f2;
   struct S0 f3;
};

struct S2 {
   unsigned short f0;
   int f1;
   char f2;
   unsigned f3;
   char f4;
   char f5;
};

struct S3 {
   unsigned f0;
   struct S0 f1;
   unsigned f2;
   struct S2 f3;
};

struct S4 {
   struct S1 f0;
   unsigned f1;
   unsigned char f2;
   short f3;
   struct S0 f4;
   int f5;
   struct S1 f6;
   unsigned f7;
};

struct S5 {
   struct S1 f0;
   struct S1 f1;
   unsigned f2;
   unsigned f3;
   unsigned f4;
   struct S0 f5;
   unsigned f6;
   struct S1 f7;
};

struct S6 {
   unsigned f0;
   unsigned f1;
   unsigned f2;
   unsigned short f3;
   int f4;
   unsigned short f5;
   struct S2 f6;
   unsigned short f7;
   int f8;
   unsigned short f9;
};


static struct S1 g_6 = {0x7A10DD66L,{-6L},1UL,{0L}};
static struct S0 *g_51 = (void*)0;
static struct S6 g_64 = {0x92E2E775L,0x98991D75L,4294967295UL,0UL,-1L,1UL,{65531UL,4L,0x36L,0UL,0xC5L,0x9CL},0xB3ADL,0xB9823F5DL,65535UL};
static struct S6 *g_63 = &g_64;
static int *g_72 = &g_64.f6.f1;
static int *g_74 = &g_64.f6.f1;
static struct S4 g_98 = {{2L,{-1L},0x5AL,{0x6CD9L}},4294967294UL,0x6CL,-9L,{1L},0x4C5E673EL,{0xCEBBACF0L,{0L},1UL,{8L}},0UL};
static struct S3 g_132 = {0x6530D8BCL,{0x952BL},4294967295UL,{0UL,0x90BE43CDL,0x59L,0UL,0x1EL,1L}};
static struct S4 *g_183 = &g_98;
static struct S4 **g_182 = &g_183;
static struct S5 g_195 = {{0xADB72ABDL,{0L},0UL,{0xD879L}},{9L,{0xE7A3L},0xBEL,{0xF048L}},0x7228C6F8L,0xB6F3BFE3L,18446744073709551608UL,{0xA199L},0x0F1316BCL,{7L,{0xDDA4L},0UL,{0x3C80L}}};
static struct S5 *g_194 = &g_195;
static int g_255 = 0x6AD5141DL;
static short *g_256 = &g_132.f1.f0;
static short *g_260 = &g_195.f7.f3.f0;
static struct S1 *g_264 = &g_195.f0;
static char *g_272 = &g_64.f6.f5;
static char *g_273 = &g_64.f6.f4;
static struct S4 g_319 = {{0xF37A506CL,{0xC957L},0UL,{0x9E4CL}},1UL,1UL,6L,{0L},0xA6F301E0L,{0x4CDB9EE6L,{0xBDBFL},2UL,{0xFC47L}},0UL};
static struct S2 *g_342 = &g_132.f3;
static int *g_362 = (void*)0;
static struct S5 **g_374 = &g_194;
static char **g_448 = (void*)0;
static unsigned short *g_486 = (void*)0;
static unsigned short **g_485 = &g_486;



static struct S1 func_1(void);
static struct S1 * func_3(struct S1 p_4, struct S1 p_5);
static struct S1 * func_15(struct S4 p_16);
static struct S4 func_17(unsigned p_18, unsigned short p_19, struct S0 p_20);
static struct S0 * func_24(struct S0 * p_25, int p_26, short p_27, struct S1 p_28);
static struct S0 * func_29(int p_30);
static struct S1 * func_37(struct S1 * p_38, struct S2 p_39, struct S5 p_40, struct S4 p_41, struct S3 p_42);
static struct S3 func_48(struct S0 * p_49, struct S1 * p_50);
static struct S3 * func_52(int p_53, struct S1 * p_54, int p_55, struct S3 * p_56, unsigned char p_57);
static int func_58(struct S4 p_59);
static struct S1 func_1(void)
{
    short l_2 = 1L;
    struct S4 l_446 = {{0x560B7A2BL,{0x6231L},1UL,{0L}},1UL,0xBEL,8L,{-4L},0xDDE3055BL,{-1L,{6L},253UL,{0L}},0x4D7E601FL};
    int *l_495 = &g_132.f3.f1;
    if (l_2)
    {
        struct S1 l_7 = {0xE85EC415L,{3L},255UL,{0x7BF1L}};
        struct S1 **l_424 = (void*)0;
        struct S1 **l_425 = (void*)0;
        struct S1 **l_426 = &g_264;
        struct S0 **l_428 = &g_51;
        struct S0 ***l_427 = &l_428;
        (*l_426) = func_3(g_6, l_7);

        ;

        ;
        ;
        ;
        ;
        ;
        ;
        ;
        (*l_427) = &g_51;
    }
    else
    {
        int *l_429 = &g_195.f0.f0;
        int **l_430 = &g_362;
        int **l_431 = (void*)0;
        int **l_432 = &l_429;
        unsigned short *l_435 = &g_64.f5;
        int *l_440 = &g_319.f0.f0;
        unsigned *l_445 = &g_195.f6;
        struct S2 l_449 = {0x64C0L,0xF9910F7AL,-9L,0x45683BCCL,0x97L,3L};
        unsigned short l_456 = 0UL;
        unsigned char l_457 = 0x0BL;
        struct S6 *l_458 = &g_64;
        struct S4 l_494 = {{4L,{0x1C16L},0x91L,{0L}},0xD5ADB17BL,246UL,0x51E1L,{0xC5E4L},1L,{0x98CE9C7EL,{0L},0x3BL,{0x79DFL}},0UL};
        (*l_432) = ((*l_430) = l_429);

        ;
        (*l_440) = ((**l_430) = ((*g_74) = (safe_div_func_int16_t_s_s((((*l_435) = l_2) == (safe_div_func_int32_t_s_s(func_58((*g_183)), 1L))), ((8L && (safe_lshift_func_uint8_t_u_u(g_64.f2, (+l_2)))) && (*l_429))))));
        if ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_195.f3 & (((g_64.f0 >= (g_98.f6.f2 = (g_98.f1 ^ ((*l_445) = g_98.f6.f1.f0)))) <= ((void*)0 == &g_194)) ^ func_58(l_446))), g_64.f5)), g_98.f0.f2)))
        {
            char ***l_447 = (void*)0;
            int l_464 = 0x0F732D8DL;
            unsigned short l_483 = 0UL;
            struct S6 l_484 = {18446744073709551614UL,0xA3370FCEL,9UL,0xD206L,0x4F5B720FL,0x6963L,{0xE5CAL,0x97CDD21EL,0xCCL,0x8A2DC6DFL,-7L,0xE3L},0xC2C1L,1L,7UL};
            g_448 = &g_273;

            ;
            (*g_342) = l_449;
            for (g_195.f3 = 0; (g_195.f3 <= 16); g_195.f3 = safe_add_func_int8_t_s_s(g_195.f3, 7))
            {
                struct S6 *l_461 = &g_64;
                short l_480 = 0L;
                if ((l_446.f4.f0 ^ g_64.f0))
                {
                    for (l_446.f0.f2 = 0; (l_446.f0.f2 <= 5); ++l_446.f0.f2)
                    {
                        (*g_374) = (*g_374);
                        (*g_182) = (*g_182);
                    }
                    (*l_432) = (*l_432);
                    (*l_429) = ((safe_rshift_func_uint16_t_u_u(l_456, 5)) <= 0x77L);
                    return (*g_264);


                }
                else
                {
                    struct S6 **l_459 = &l_458;
                    struct S6 **l_460 = (void*)0;
                    struct S1 **l_471 = &g_264;
                    struct S1 ***l_470 = &l_471;
                    int l_475 = 0x7D576A41L;
                    unsigned l_482 = 4294967294UL;
                    (**l_432) = (**l_430);
                    (**l_430) = l_457;
                    l_461 = ((*l_459) = l_458);
                    if (((*l_440) | ((safe_sub_func_uint32_t_u_u(func_58(func_17(func_58(l_446), l_446.f6.f3.f0, g_98.f6.f1)), (g_195.f7.f0 != l_446.f0.f0))) & g_319.f0.f2)))
                    {
                        struct S1 ****l_472 = &l_470;
                        int l_481 = (-1L);
                        (*l_429) = l_464;
                        l_446.f0.f0 = ((*g_362) = ((func_58(func_17(((*l_445) = (safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((((*l_472) = l_470) == (void*)0) & (+(safe_lshift_func_int8_t_s_u(l_475, 7)))), (safe_mod_func_int16_t_s_s(((*g_260) = (((safe_rshift_func_int16_t_s_u((*g_260), (*l_429))) | func_58((**g_182))) & l_446.f5)), g_64.f6.f5)))), l_480))))), l_481, g_195.f0.f3)) & l_482) && l_483));
                        l_484 = (*l_458);
                    }
                    else
                    {
                        unsigned short ***l_487 = &g_485;
                        int *l_488 = &l_446.f6.f0;
                        (*l_487) = g_485;
                        (*l_430) = l_488;

                        ;
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
            ;
            ;
            ;
        }
        else
        {
            struct S1 **l_489 = &g_264;
            int l_499 = 0x9247B8D5L;
            (*l_489) = &g_6;

            ;
            (*g_264) = (**l_489);
            for (g_132.f3.f2 = 0; (g_132.f3.f2 == (-16)); g_132.f3.f2--)
            {
                unsigned char l_503 = 0x21L;
                g_72 = ((*l_430) = &g_255);

                ;
                ;
                if (func_58((*g_183)))
                {
                    for (g_64.f6.f5 = 15; (g_64.f6.f5 != (-8)); g_64.f6.f5 = safe_sub_func_uint16_t_u_u(g_64.f6.f5, 7))
                    {
                        (*g_183) = l_494;
                    }
                }
                else
                {
                    int *l_498 = &g_132.f3.f1;
                    (*l_432) = l_495;

                    ;
                    for (g_64.f6.f4 = 21; (g_64.f6.f4 > (-28)); g_64.f6.f4--)
                    {
                        struct S6 *l_500 = (void*)0;
                        g_74 = l_498;

                        ;
                        (*l_498) = (((*l_498) != (-4L)) > (g_64.f5 & l_499));
                        l_500 = &g_64;

                        ;
                    }
                }
                (*g_72) = (safe_rshift_func_int16_t_s_u(func_58((*g_183)), l_503));
                if ((*g_72))
                    continue;
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
        ;
        ;
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
    ;
    return (*g_264);


}







static struct S1 * func_3(struct S1 p_4, struct S1 p_5)
{
    struct S1 *l_12 = &g_6;
    int l_23 = 0xD172E30EL;
    struct S1 **l_422 = &g_264;
    int *l_423 = &g_195.f0.f0;
    (*l_423) = ((g_6.f3.f0 == ((((safe_lshift_func_uint8_t_u_s((&p_5 == l_12), 7)) & (((safe_add_func_int16_t_s_s(((((*l_422) = func_15((g_319 = ((*g_183) = func_17(g_6.f2, (5UL < ((p_4.f3.f0 && (safe_sub_func_uint16_t_u_u(0x4B1AL, l_23))) & p_5.f1.f0)), g_6.f3))))) != &p_5) && l_23), l_23)) < g_195.f6) >= 0x5BD1L)) < p_5.f3.f0) <= l_23)) && 9UL);

    ;

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return &g_6;


}







static struct S1 * func_15(struct S4 p_16)
{
    int l_322 = 0L;
    unsigned short *l_323 = &g_64.f9;
    struct S3 *l_345 = &g_132;
    int *l_349 = &g_319.f6.f0;
    struct S6 l_365 = {0x72729E20L,1UL,2UL,0x1011L,0x950F61D7L,0UL,{1UL,0xEFD35347L,0x29L,0x9AFDC0B5L,0xB7L,-1L},1UL,0x757332DAL,65535UL};
    unsigned l_383 = 0x9A14C600L;
    struct S4 l_391 = {{2L,{-1L},0UL,{-1L}},4294967294UL,0x1EL,0x0B85L,{1L},6L,{0x1297B814L,{-10L},0xACL,{0L}},0x1F334AA7L};
    struct S1 *l_420 = &g_195.f0;
    if (((*g_72) = (((*g_260) = (*g_256)) != ((*l_323) = (0x4AC8L != (safe_div_func_uint32_t_u_u(p_16.f6.f2, l_322)))))))
    {
        unsigned *l_328 = &g_98.f7;
        int l_339 = 0xAD79FB84L;
        int l_343 = 0x1FE9B513L;
        int *l_357 = &g_6.f0;
        unsigned char *l_358 = &g_195.f1.f2;
        struct S1 *l_371 = &g_319.f6;
        struct S4 *l_397 = &g_98;
        if ((g_319.f6.f1.f0 > (safe_sub_func_uint32_t_u_u(((*l_328) = (safe_sub_func_int8_t_s_s(p_16.f6.f3.f0, 7UL))), (safe_unary_minus_func_int32_t_s((-6L)))))))
        {
            int *l_330 = &g_98.f0.f0;
            struct S6 *l_331 = &g_64;
            struct S6 **l_332 = (void*)0;
            l_330 = &g_255;

            ;
            g_63 = l_331;
            for (l_322 = (-19); (l_322 <= (-5)); l_322 = safe_add_func_uint32_t_u_u(l_322, 9))
            {
                unsigned short l_344 = 65535UL;
                p_16.f0.f0 = (0x851D5CD1L >= func_58(p_16));
                if ((*g_72))
                {
                    struct S3 *l_346 = &g_132;
                    struct S3 **l_347 = (void*)0;
                    struct S3 **l_348 = &l_346;
                    int **l_350 = &l_330;
                    struct S2 **l_351 = &g_342;
                    (*l_348) = l_346;
                    (*l_350) = (l_349 = l_330);

                    ;
                    (*l_351) = g_342;
                }
                else
                {
                    for (g_319.f5 = 2; (g_319.f5 != 20); g_319.f5 = safe_add_func_int8_t_s_s(g_319.f5, 9))
                    {
                        struct S0 *l_354 = &g_98.f6.f1;
                        (*l_354) = p_16.f6.f3;
                    }
                }
            }

            ;
        }
        else
        {
            int *l_355 = &g_319.f6.f0;
            int **l_356 = (void*)0;
            struct S6 l_364 = {0x0F9E0533L,0x85A9D1DCL,0x0155AB8AL,65535UL,0xDAC42CC3L,0x15AEL,{0x1902L,0x738DEB95L,0x1BL,4294967293UL,0xFFL,0x01L},2UL,0L,0x42F1L};
            unsigned *l_394 = &g_132.f3.f3;
            l_357 = l_355;

            ;
            if (((void*)0 != l_358))
            {
                struct S0 *l_360 = &g_6.f3;
                int *l_366 = &l_365.f8;
                if (p_16.f7)
                {
                    int **l_359 = (void*)0;
                    struct S0 **l_361 = &g_51;
                    int *l_363 = &g_64.f6.f1;
                    g_72 = &g_255;
                    (*l_361) = l_360;

                    ;
                    l_363 = g_362;

                    ;
                    l_365 = l_364;
                }
                else
                {
                    int **l_367 = (void*)0;
                    int **l_368 = &l_355;
                    (*l_368) = l_366;

                    ;
                    (*l_357) = ((*l_355) = ((*g_273) ^ (1L && g_195.f5.f0)));
                }

                ;
                ;
            }
            else
            {
                struct S1 **l_373 = (void*)0;
                struct S1 ***l_372 = &l_373;
                for (g_98.f3 = 0; (g_98.f3 != (-25)); g_98.f3 = safe_sub_func_uint32_t_u_u(g_98.f3, 3))
                {
                    return l_371;


                }
                (*g_63) = (*g_63);
                (*l_372) = &g_264;

                ;
                g_374 = (void*)0;

                ;
            }

            ;
            ;
            ;
            if (((((*g_256) = ((safe_rshift_func_int8_t_s_u((*l_349), 1)) > (safe_add_func_uint32_t_u_u(((*l_394) = (p_16.f6.f3.f0 && (0x6106L == (safe_rshift_func_int8_t_s_u(((*g_273) = p_16.f0.f2), ((((*l_328) = (l_383 || ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_58(l_391), ((((*l_358) = g_319.f5) & ((safe_lshift_func_uint16_t_u_s((p_16.f6.f1.f0 | (*l_355)), p_16.f2)) | (*l_355))) && (*l_349)))), 11)) || 6UL))), p_16.f2)) == g_64.f6.f1))) == p_16.f4.f0) & 4294967288UL)))))), g_195.f3)))) != (*l_357)) != 3UL))
            {
                struct S3 **l_411 = &l_345;
                int *l_412 = &g_132.f3.f1;
                int **l_413 = &g_74;
                if ((safe_add_func_uint32_t_u_u(((*l_394) = (l_397 != (*g_182))), 0x9A801F09L)))
                {
                    (*g_63) = (*g_63);
                }
                else
                {
                    struct S6 *l_398 = &l_364;
                    struct S6 **l_399 = &g_63;
                    struct S6 **l_400 = &l_398;
                    (*l_400) = ((*l_399) = l_398);

                    ;
                }

                ;
                for (g_64.f6.f2 = 0; (g_64.f6.f2 >= 16); g_64.f6.f2++)
                {
                    struct S1 **l_403 = &l_371;
                    struct S1 ***l_404 = &l_403;
                    struct S1 **l_406 = (void*)0;
                    struct S1 ***l_405 = &l_406;
                    (*l_405) = ((*l_404) = l_403);

                    ;
                    for (g_132.f2 = 0; (g_132.f2 <= 39); ++g_132.f2)
                    {
                        struct S5 ***l_409 = &g_374;
                        int **l_410 = &l_355;
                        (*l_409) = &g_194;

                        ;
                        (*l_410) = &l_339;

                        ;
                        return &g_6;



                    }
                    g_362 = &g_255;

                    ;
                }

                ;
                (*l_411) = &g_132;
                (*l_413) = l_412;

                ;
            }
            else
            {
                unsigned char **l_414 = &l_358;
                int l_415 = 0xFAA22A23L;
                (*l_349) = ((*g_273) <= ((g_272 == ((*l_414) = g_272)) > (l_415 || (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((*l_349), ((*l_349) != p_16.f0.f2))), g_319.f6.f1.f0)))));

                ;
                return l_420;


            }

            ;
            ;
            ;
        }

        ;

        ;
        ;
        ;
        ;
        ;
        (*g_264) = p_16.f6;
    }
    else
    {
        int **l_421 = &g_362;
        (*l_421) = l_349;

        ;
    }

    ;

    ;
    ;
    ;
    ;
    return l_420;


}







static struct S4 func_17(unsigned p_18, unsigned short p_19, struct S0 p_20)
{
    struct S1 *l_43 = &g_6;
    struct S2 l_44 = {0xD342L,0x3138B78EL,7L,0xEFA9ADBFL,0x2AL,0x62L};
    struct S2 *l_45 = &l_44;
    struct S5 l_46 = {{-9L,{0L},4UL,{0x8A74L}},{0x704BC7F4L,{-6L},255UL,{0xBCABL}},0UL,18446744073709551615UL,0x3D6F3B0AL,{-4L},1UL,{9L,{-8L},253UL,{5L}}};
    struct S4 l_47 = {{7L,{-2L},0x9AL,{0x2BFFL}},7UL,5UL,0xF28DL,{1L},-1L,{0xB2CDE802L,{0xEF3DL},0x4FL,{-10L}},4294967295UL};
    struct S1 **l_267 = &l_43;
    unsigned l_283 = 18446744073709551615UL;
    struct S0 *l_318 = &l_47.f0.f1;
    l_318 = func_24(func_29((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((*l_267) = func_37(l_43, ((*l_45) = l_44), l_46, l_47, func_48(g_51, l_43))) != (void*)0), l_47.f2)), l_46.f0.f1.f0)) == g_6.f2), g_195.f1.f3.f0))), g_195.f4, l_283, (*g_264));

    ;
    ;
    ;
    ;
    return l_47;
}







static struct S0 * func_24(struct S0 * p_25, int p_26, short p_27, struct S1 p_28)
{
    int **l_284 = &g_74;
    int l_285 = 0x5A0BEDADL;
    int *l_286 = (void*)0;
    int *l_287 = (void*)0;
    struct S4 l_292 = {{-8L,{1L},0xA6L,{0xC1BDL}},0xE5A772A1L,0UL,0L,{-8L},0L,{-1L,{0x2542L},0x6CL,{1L}},9UL};
    struct S5 **l_303 = &g_194;
    unsigned short *l_304 = (void*)0;
    unsigned short *l_305 = &g_64.f5;
    unsigned char *l_316 = (void*)0;
    unsigned char *l_317 = &l_292.f6.f2;
    (*l_284) = (void*)0;

    ;
    p_28.f0 = ((*g_72) = l_285);
    (*g_72) = (p_28.f2 || ((safe_mod_func_uint16_t_u_u(p_28.f0, (safe_lshift_func_int8_t_s_u(func_58(l_292), ((g_64.f6.f0 = ((*l_305) = (safe_div_func_uint16_t_u_u(p_27, (safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(4L, (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((l_303 == (void*)0) ^ (*g_273)), (*g_256))), 7)))) <= p_28.f3.f0), (*g_256))))))) >= g_132.f3.f1))))) < (*g_260)));
    (*g_72) = (func_58(l_292) && (g_98.f0.f2 = ((*l_317) = ((0xAD097026L > p_26) & ((safe_lshift_func_int16_t_s_s(0x54C7L, (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(g_98.f7, ((safe_lshift_func_int8_t_s_u(((*g_273) | p_28.f2), 1)) <= (safe_div_func_int16_t_s_s((*g_260), p_28.f1.f0))))) == p_26), p_28.f2)))) && p_26)))));
    return g_51;


}







static struct S0 * func_29(int p_30)
{
    unsigned *l_268 = &g_64.f1;
    char *l_271 = (void*)0;
    int **l_276 = &g_72;
    short *l_278 = &g_98.f6.f3.f0;
    short **l_279 = &g_260;
    int *l_280 = &g_64.f8;
    int l_281 = 0L;
    struct S0 l_282 = {0x16D2L};
    if (((*g_72) = (((*l_268) = ((*g_72) | (0L > 0x2080L))) || (*g_72))))
    {
        int *l_269 = &g_98.f6.f0;
        int **l_270 = &g_74;
        (*l_270) = l_269;

        ;
    }
    else
    {
        struct S0 l_274 = {-1L};
        struct S0 *l_275 = &g_195.f1.f3;
        (*g_72) = ((g_272 = l_271) != g_273);

        ;
        (*l_275) = l_274;
    }

    ;
    (*l_276) = &g_255;

    ;
    l_281 = ((*l_280) = (~((**l_276) = (safe_unary_minus_func_int8_t_s((l_278 == ((*l_279) = l_278)))))));

    ;
    g_195.f1.f1 = l_282;
    return g_51;


}







static struct S1 * func_37(struct S1 * p_38, struct S2 p_39, struct S5 p_40, struct S4 p_41, struct S3 p_42)
{
    int *l_265 = &g_255;
    int **l_266 = &g_74;
    (*l_266) = l_265;

    ;
    return p_38;


}







static struct S3 func_48(struct S0 * p_49, struct S1 * p_50)
{
    struct S4 l_60 = {{0xDFB35854L,{0xED18L},4UL,{0x281BL}},0x5FED851EL,0xD6L,0xCBD7L,{5L},0x2A76EDF0L,{0L,{-2L},249UL,{0x861CL}},0x0716F034L};
    struct S1 *l_66 = &l_60.f0;
    struct S3 *l_67 = (void*)0;
    struct S3 **l_135 = &l_67;
    struct S4 *l_181 = &l_60;
    struct S4 **l_180 = &l_181;
    struct S0 *l_188 = &l_60.f0.f1;
    struct S2 *l_213 = &g_132.f3;
    char l_245 = 0L;
    (*l_135) = func_52(func_58(l_60), l_66, g_64.f8, l_67, l_60.f1);

    ;
    ;
    ;
    for (g_64.f8 = 0; (g_64.f8 < 27); g_64.f8++)
    {
        int l_138 = 0L;
        struct S2 *l_200 = (void*)0;
        int l_225 = 0xF737A74DL;
        struct S4 l_226 = {{0xD66C7585L,{-5L},1UL,{-9L}},1UL,0x7DL,0x749BL,{0x6988L},-1L,{0x7D474E7FL,{0x2A6FL},4UL,{0xB41BL}},0x89C6BD25L};
    }
    return g_132;
}







static struct S3 * func_52(int p_53, struct S1 * p_54, int p_55, struct S3 * p_56, unsigned char p_57)
{
    struct S1 **l_68 = (void*)0;
    struct S1 ***l_69 = &l_68;
    struct S3 *l_75 = (void*)0;
    int l_87 = 1L;
    struct S4 l_88 = {{0xADE5F6D2L,{0x853BL},0UL,{0x59F5L}},0x79FDBB31L,0UL,0x37E6L,{1L},-7L,{0xCC784493L,{0x848AL},6UL,{-6L}},4294967295UL};
    struct S6 l_90 = {4UL,0x548F5A9FL,4294967294UL,5UL,0xD0AF7C67L,65535UL,{65535UL,0xB691963CL,1L,5UL,1L,0x34L},65535UL,0xEBA8194CL,0x43DCL};
    struct S6 *l_104 = &l_90;
    int **l_106 = (void*)0;
    struct S0 **l_107 = &g_51;
    unsigned char l_118 = 3UL;
    (*l_69) = l_68;
    for (g_64.f2 = 0; (g_64.f2 == 35); g_64.f2++)
    {
        int **l_73 = &g_72;
        struct S3 **l_76 = (void*)0;
        struct S3 **l_77 = &l_75;
        struct S6 *l_103 = &g_64;
        g_74 = ((*l_73) = g_72);

        ;
        (*l_77) = l_75;
        (**l_73) = (safe_mod_func_int8_t_s_s(g_64.f2, (safe_sub_func_int16_t_s_s(0L, (p_55 == 0x8165L)))));
        for (g_64.f5 = 0; (g_64.f5 >= 16); ++g_64.f5)
        {
            int l_84 = (-3L);
            int l_89 = 6L;
            struct S6 l_91 = {0xD36C6765L,0x11E98D02L,0xDA7E552DL,0x2CF6L,0x85DACF7CL,0x7A65L,{3UL,0xBCEF1D68L,2L,4294967286UL,-1L,0xBAL},0x3F70L,-1L,0UL};
            unsigned char l_105 = 9UL;
            if (p_55)
                break;
            (*g_74) = ((p_53 >= (+(l_84 | ((p_53 & (l_89 = (safe_add_func_uint16_t_u_u(((l_87 <= func_58(l_88)) ^ ((g_6.f0 && (*g_72)) >= ((-1L) <= 0xB128L))), l_84)))) <= (*g_72))))) != 0x35L);
            l_91 = l_90;
            (*g_72) = (safe_add_func_int32_t_s_s(0x25C20414L, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(func_58(g_98), 3)), (safe_lshift_func_uint8_t_u_u((255UL || (safe_rshift_func_uint16_t_u_s((l_103 != (l_104 = l_103)), l_105))), l_90.f6.f0))))));
        }
    }

    ;
    ;
    g_74 = (void*)0;

    ;
    if (p_53)
    {
        struct S0 ***l_108 = &l_107;
        struct S4 l_113 = {{8L,{0xD13DL},255UL,{0xE158L}},4294967287UL,253UL,0L,{0xEF52L},0x114BE7DEL,{0x48778A66L,{0xDAEBL},1UL,{0xE047L}},0x432E4101L};
        struct S6 l_122 = {1UL,0UL,0xEE48BEC9L,0x0A66L,-10L,65535UL,{65534UL,0L,0L,0x209D6907L,4L,0xCBL},1UL,0x7A42B8BCL,4UL};
        (*l_108) = l_107;
        if ((((0x18F9L < (((void*)0 != &g_6) <= ((*g_72) = p_55))) && (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_58(l_113), ((safe_div_func_uint32_t_u_u(4294967294UL, (safe_add_func_uint8_t_u_u((((4294967289UL & l_118) || l_113.f0.f1.f0) < l_90.f1), 0UL)))) >= 7L))), g_64.f1))) >= g_98.f5))
        {
            unsigned short l_119 = 0x98FEL;
            int l_126 = 0x19277215L;
            struct S3 *l_131 = &g_132;
            (**l_108) = (**l_108);
            (*g_72) = l_119;
            for (l_90.f7 = 0; (l_90.f7 > 29); ++l_90.f7)
            {
                struct S4 l_123 = {{0xCE209C98L,{-5L},1UL,{0xC20FL}},4294967295UL,0x8FL,0x37CAL,{-1L},0x91FDDA6BL,{-1L,{8L},251UL,{-1L}},4294967295UL};
                struct S4 *l_128 = (void*)0;
                struct S4 **l_127 = &l_128;
                (*g_63) = l_122;
                l_126 = (func_58(l_123) && ((safe_add_func_uint8_t_u_u(g_98.f6.f3.f0, (l_123.f0.f0 && (0xCC898E3FL <= (func_58(g_98) == g_98.f7))))) <= (((p_53 || (*g_72)) != 0xDAC9CA45L) | 1L)));
                (*l_127) = &g_98;

                ;
                for (g_98.f6.f2 = (-21); (g_98.f6.f2 > 32); g_98.f6.f2 = safe_add_func_int16_t_s_s(g_98.f6.f2, 8))
                {
                    return l_131;


                }
            }
            (*g_72) = p_53;
        }
        else
        {
            struct S1 l_133 = {0L,{-10L},0xE2L,{0x4CB5L}};
            (*p_54) = l_133;
        }
        return p_56;


    }
    else
    {
        int *l_134 = &g_64.f8;
        g_72 = l_134;

        ;
    }

    ;
    return p_56;


}







static int func_58(struct S4 p_59)
{
    int *l_61 = (void*)0;
    int **l_62 = &l_61;
    struct S6 *l_65 = &g_64;
    (*l_62) = l_61;
    l_65 = (g_63 = g_63);
    return g_64.f6.f2;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1.f0, "g_6.f1.f0", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_6.f3.f0, "g_6.f3.f0", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6.f0, "g_64.f6.f0", print_hash_value);
    transparent_crc(g_64.f6.f1, "g_64.f6.f1", print_hash_value);
    transparent_crc(g_64.f6.f2, "g_64.f6.f2", print_hash_value);
    transparent_crc(g_64.f6.f3, "g_64.f6.f3", print_hash_value);
    transparent_crc(g_64.f6.f4, "g_64.f6.f4", print_hash_value);
    transparent_crc(g_64.f6.f5, "g_64.f6.f5", print_hash_value);
    transparent_crc(g_64.f7, "g_64.f7", print_hash_value);
    transparent_crc(g_64.f8, "g_64.f8", print_hash_value);
    transparent_crc(g_64.f9, "g_64.f9", print_hash_value);
    transparent_crc(g_98.f0.f0, "g_98.f0.f0", print_hash_value);
    transparent_crc(g_98.f0.f1.f0, "g_98.f0.f1.f0", print_hash_value);
    transparent_crc(g_98.f0.f2, "g_98.f0.f2", print_hash_value);
    transparent_crc(g_98.f0.f3.f0, "g_98.f0.f3.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4.f0, "g_98.f4.f0", print_hash_value);
    transparent_crc(g_98.f5, "g_98.f5", print_hash_value);
    transparent_crc(g_98.f6.f0, "g_98.f6.f0", print_hash_value);
    transparent_crc(g_98.f6.f1.f0, "g_98.f6.f1.f0", print_hash_value);
    transparent_crc(g_98.f6.f2, "g_98.f6.f2", print_hash_value);
    transparent_crc(g_98.f6.f3.f0, "g_98.f6.f3.f0", print_hash_value);
    transparent_crc(g_98.f7, "g_98.f7", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1.f0, "g_132.f1.f0", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3.f0, "g_132.f3.f0", print_hash_value);
    transparent_crc(g_132.f3.f1, "g_132.f3.f1", print_hash_value);
    transparent_crc(g_132.f3.f2, "g_132.f3.f2", print_hash_value);
    transparent_crc(g_132.f3.f3, "g_132.f3.f3", print_hash_value);
    transparent_crc(g_132.f3.f4, "g_132.f3.f4", print_hash_value);
    transparent_crc(g_132.f3.f5, "g_132.f3.f5", print_hash_value);
    transparent_crc(g_195.f0.f0, "g_195.f0.f0", print_hash_value);
    transparent_crc(g_195.f0.f1.f0, "g_195.f0.f1.f0", print_hash_value);
    transparent_crc(g_195.f0.f2, "g_195.f0.f2", print_hash_value);
    transparent_crc(g_195.f0.f3.f0, "g_195.f0.f3.f0", print_hash_value);
    transparent_crc(g_195.f1.f0, "g_195.f1.f0", print_hash_value);
    transparent_crc(g_195.f1.f1.f0, "g_195.f1.f1.f0", print_hash_value);
    transparent_crc(g_195.f1.f2, "g_195.f1.f2", print_hash_value);
    transparent_crc(g_195.f1.f3.f0, "g_195.f1.f3.f0", print_hash_value);
    transparent_crc(g_195.f2, "g_195.f2", print_hash_value);
    transparent_crc(g_195.f3, "g_195.f3", print_hash_value);
    transparent_crc(g_195.f4, "g_195.f4", print_hash_value);
    transparent_crc(g_195.f5.f0, "g_195.f5.f0", print_hash_value);
    transparent_crc(g_195.f6, "g_195.f6", print_hash_value);
    transparent_crc(g_195.f7.f0, "g_195.f7.f0", print_hash_value);
    transparent_crc(g_195.f7.f1.f0, "g_195.f7.f1.f0", print_hash_value);
    transparent_crc(g_195.f7.f2, "g_195.f7.f2", print_hash_value);
    transparent_crc(g_195.f7.f3.f0, "g_195.f7.f3.f0", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_319.f0.f0, "g_319.f0.f0", print_hash_value);
    transparent_crc(g_319.f0.f1.f0, "g_319.f0.f1.f0", print_hash_value);
    transparent_crc(g_319.f0.f2, "g_319.f0.f2", print_hash_value);
    transparent_crc(g_319.f0.f3.f0, "g_319.f0.f3.f0", print_hash_value);
    transparent_crc(g_319.f1, "g_319.f1", print_hash_value);
    transparent_crc(g_319.f2, "g_319.f2", print_hash_value);
    transparent_crc(g_319.f3, "g_319.f3", print_hash_value);
    transparent_crc(g_319.f4.f0, "g_319.f4.f0", print_hash_value);
    transparent_crc(g_319.f5, "g_319.f5", print_hash_value);
    transparent_crc(g_319.f6.f0, "g_319.f6.f0", print_hash_value);
    transparent_crc(g_319.f6.f1.f0, "g_319.f6.f1.f0", print_hash_value);
    transparent_crc(g_319.f6.f2, "g_319.f6.f2", print_hash_value);
    transparent_crc(g_319.f6.f3.f0, "g_319.f6.f3.f0", print_hash_value);
    transparent_crc(g_319.f7, "g_319.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
