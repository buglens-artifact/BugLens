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
   long long f0;
   short f1;
   unsigned long long f2;
};


static int g_5 = 0xA2A4F402L;
static int *g_4 = &g_5;
static struct S0 g_34[1][2][3] = {{{{0x903CFCB8F1FE3D2FLL,-9L,0UL},{0xEE85EC415051ACAELL,0xBF19L,3UL},{0x903CFCB8F1FE3D2FLL,-9L,0UL}},{{0x903CFCB8F1FE3D2FLL,-9L,0UL},{0xEE85EC415051ACAELL,0xBF19L,3UL},{0x903CFCB8F1FE3D2FLL,-9L,0UL}}}};
static unsigned g_68[3] = {0x9BF4A3CAL,0x9BF4A3CAL,0x9BF4A3CAL};
static struct S0 g_69 = {0x766E9B1CC8FFCACALL,0x8A8FL,0x013EC5CB58B1CA07LL};
static int g_73 = 0xACF27260L;
static int *g_72 = &g_73;
static int **g_71 = &g_72;
static int ***g_70 = &g_71;
static struct S0 *g_78 = &g_69;
static struct S0 **g_77 = &g_78;
static struct S0 g_85[1] = {{3L,0L,0xB1E1499B6F360822LL}};
static unsigned long long *g_86 = &g_69.f2;
static char g_94 = 0L;
static char g_96 = (-1L);
static unsigned short g_112 = 65535UL;
static unsigned *g_133 = &g_68[0];
static unsigned **g_132 = &g_133;
static struct S0 g_218 = {7L,1L,9UL};
static char *g_238 = &g_96;
static char **g_237 = &g_238;
static char **g_242[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned short **g_293 = (void*)0;
static unsigned short g_302 = 8UL;
static unsigned char g_358[6][6][5] = {{{0xFDL,0xFDL,255UL,255UL,0x6AL},{0x0AL,6UL,0xF6L,0x2EL,0x59L},{2UL,0x5AL,0xFDL,248UL,0xA6L},{0x44L,6UL,255UL,1UL,0x80L},{251UL,0xFDL,0UL,0UL,248UL},{0x4CL,1UL,0xF9L,0xFBL,254UL}},{{255UL,255UL,248UL,0xA6L,251UL},{0x78L,6UL,0x4CL,6UL,0x78L},{0UL,255UL,251UL,248UL,1UL},{0x59L,0x6CL,8UL,0x2EL,246UL},{255UL,250UL,0UL,255UL,1UL},{0x4CL,0x2EL,254UL,9UL,0x78L}},{{1UL,0x5AL,0x6AL,0xFDL,251UL},{0x0AL,252UL,0xF9L,0xC9L,248UL},{0x6AL,255UL,255UL,0xFDL,0xFDL},{249UL,1UL,249UL,9UL,0x44L},{255UL,1UL,2UL,255UL,248UL},{253UL,0UL,0x78L,0x2EL,1UL}},{{255UL,0xFDL,2UL,248UL,2UL},{0xF9L,251UL,249UL,6UL,0UL},{251UL,248UL,255UL,0xA6L,0UL},{246UL,246UL,0xF9L,0x75L,8UL},{251UL,248UL,0x6AL,0x6AL,248UL},{1UL,251UL,254UL,255UL,0xFBL}},{{250UL,0xFDL,0UL,251UL,0xA6L},{0x80L,0UL,255UL,251UL,251UL},{255UL,0UL,255UL,0UL,255UL},{8UL,0x34L,251UL,1UL,0UL},{0xA6L,251UL,0UL,0xFDL,250UL},{0x78L,0x6CL,246UL,0x34L,0UL}},{{255UL,0xFDL,0xFDL,255UL,255UL},{0UL,0x33L,0x0AL,255UL,251UL},{255UL,255UL,2UL,251UL,1UL},{0x0AL,0x75L,0x44L,255UL,253UL},{251UL,255UL,251UL,255UL,0x5AL},{0x59L,0UL,0x4CL,0x34L,255UL}}};
static struct S0 *g_364 = &g_85[0];
static const int *g_388 = (void*)0;
static const int **g_387[3] = {&g_388,&g_388,&g_388};
static unsigned char *g_398 = &g_358[5][5][0];
static unsigned char **g_461 = &g_398;
static unsigned char ** const *g_460[4][2][9] = {{{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,(void*)0,&g_461,&g_461,&g_461,&g_461,(void*)0,&g_461}},{{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,(void*)0,&g_461,&g_461,(void*)0,&g_461,&g_461,&g_461}},{{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,(void*)0,&g_461,&g_461}},{{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,(void*)0,&g_461,&g_461}}};
static short g_472 = 3L;
static short *g_471 = &g_472;
static short **g_470 = &g_471;
static long long g_474 = 0xFF21DCC8B6EF4260LL;
static unsigned long long g_476[2] = {0xC1BFD926561291A6LL,0xC1BFD926561291A6LL};
static unsigned short *g_685 = &g_302;
static char g_699 = (-1L);
static char * const **g_729[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int g_757 = 0L;
static unsigned g_781 = 0x6F7F47AEL;



static unsigned long long func_1(void);
static int * func_2(int * p_3);
static int func_10(int *** p_11);
static int *** func_12(short p_13, unsigned short p_14, int p_15, unsigned char p_16, unsigned p_17);
static long long func_18(unsigned p_19);
static int * func_20(int *** p_21, short p_22, int p_23);
static const char func_26(const int ** p_27, int * p_28, int *** p_29, int p_30);
static long long func_40(long long p_41, struct S0 ** p_42, unsigned char p_43, struct S0 * const * p_44, unsigned short p_45);
static short func_48(int *** p_49, unsigned p_50, struct S0 p_51, struct S0 * p_52, int *** p_53);
static short func_56(unsigned p_57, int * p_58, long long p_59, short p_60, char p_61);
static unsigned long long func_1(void)
{
    int **l_758 = &g_72;
    struct S0 l_759 = {1L,5L,0x3DFF06807F238361LL};
    const int *l_760 = (void*)0;
    const int **l_761 = &g_388;
    long long l_762 = (-8L);
    (*l_758) = func_2(g_4);
    (*g_364) = l_759;
    (*l_761) = l_760;
    if ((l_762 ^ (**l_758)))
    {
        unsigned short l_763 = 3UL;
        return l_763;
    }
    else
    {
        char **l_764 = &g_238;
        char **l_765[9][3][7] = {{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,(void*)0,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{(void*)0,(void*)0,&g_238,&g_238,&g_238,(void*)0,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,(void*)0,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,(void*)0,&g_238,(void*)0,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,(void*)0},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,(void*)0,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{(void*)0,&g_238,&g_238,&g_238,(void*)0,&g_238,(void*)0},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}},{{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,(void*)0,&g_238,&g_238,&g_238,(void*)0},{&g_238,&g_238,&g_238,&g_238,&g_238,&g_238,&g_238}}};
        int *l_766[10][6][4] = {{{(void*)0,&g_5,(void*)0,&g_73},{&g_5,&g_73,&g_73,&g_5},{&g_73,&g_5,&g_5,&g_5},{&g_73,(void*)0,&g_5,&g_73},{&g_5,&g_73,&g_5,&g_73},{&g_73,(void*)0,&g_73,&g_5}},{{&g_73,&g_5,&g_73,&g_5},{(void*)0,&g_73,&g_5,&g_73},{&g_5,&g_5,(void*)0,&g_5},{&g_73,&g_73,&g_73,&g_73},{&g_73,&g_5,&g_73,&g_73},{&g_73,&g_5,&g_73,&g_5}},{{&g_73,&g_5,&g_73,&g_73},{&g_73,&g_5,&g_73,(void*)0},{&g_5,&g_73,(void*)0,&g_73},{&g_73,(void*)0,&g_5,&g_5},{&g_73,&g_73,&g_73,&g_73},{(void*)0,&g_73,&g_73,&g_5}},{{&g_73,&g_5,&g_5,&g_73},{&g_73,&g_5,&g_73,&g_5},{&g_5,&g_73,&g_73,&g_73},{(void*)0,&g_73,(void*)0,&g_5},{&g_73,(void*)0,&g_5,&g_73},{&g_73,&g_73,&g_73,&g_73}},{{&g_73,&g_5,&g_73,&g_73},{&g_5,&g_73,&g_73,&g_5},{(void*)0,&g_73,&g_73,(void*)0},{&g_5,&g_73,&g_73,&g_5},{&g_73,&g_5,&g_73,&g_5},{&g_73,&g_5,&g_5,&g_5}},{{&g_73,(void*)0,(void*)0,&g_73},{(void*)0,&g_5,&g_73,&g_5},{&g_5,&g_5,&g_73,&g_5},{&g_73,&g_5,&g_5,&g_5},{&g_73,&g_5,&g_73,&g_5},{(void*)0,&g_5,&g_73,&g_73}},{{&g_73,(void*)0,&g_5,&g_5},{&g_73,&g_5,(void*)0,&g_5},{&g_5,(void*)0,(void*)0,&g_73},{&g_73,&g_5,&g_73,&g_73},{&g_5,&g_5,(void*)0,&g_73},{&g_5,(void*)0,&g_73,&g_73}},{{&g_73,&g_73,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_73},{&g_5,&g_5,&g_73,&g_73},{&g_5,&g_5,&g_5,&g_5},{&g_73,&g_5,&g_5,&g_73},{&g_5,&g_73,&g_5,&g_5}},{{(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_5,&g_73,&g_5},{&g_73,&g_5,&g_73,&g_73},{(void*)0,&g_5,&g_73,&g_73},{&g_5,&g_5,&g_5,&g_5},{&g_73,&g_73,&g_5,&g_73}},{{&g_5,(void*)0,&g_5,&g_73},{&g_73,&g_5,&g_5,&g_73},{&g_5,&g_5,&g_5,&g_73},{&g_73,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_73,&g_5},{(void*)0,&g_73,&g_73,(void*)0}}};
        short *l_790 = &g_218.f1;
        int i, j, k;
        l_765[8][2][4] = l_764;
        (*l_758) = l_766[2][0][0];
        for (l_759.f2 = 0; (l_759.f2 == 50); ++l_759.f2)
        {
            long long l_786 = 0x3D589609ABF37040LL;
            int l_791 = 0xB49F9D1DL;
            struct S0 l_792 = {0x9BD2344EC17B2E63LL,0xD657L,0xD509A4B8EA12B002LL};
            for (g_69.f0 = 2; (g_69.f0 >= 0); g_69.f0 -= 1)
            {
                int l_778 = 0x2FA1E35CL;
                for (l_762 = 0; (l_762 <= 0); l_762 += 1)
                {
                    unsigned long long l_779 = 0x89A6789B0CB7FBA2LL;
                    int i, j, k;
                    for (g_218.f1 = 0; (g_218.f1 <= 0); g_218.f1 += 1)
                    {
                        struct S0 ***l_773 = (void*)0;
                        struct S0 ***l_774[8][6] = {{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77}};
                        struct S0 **l_775 = &g_78;
                        int l_776 = 0xF11BEE3AL;
                        int ***l_777[9][8][3] = {{{(void*)0,&g_71,&g_71},{&g_71,&l_758,&g_71},{&g_71,&g_71,&g_71},{&l_758,&l_758,(void*)0},{&g_71,&l_758,&g_71},{&l_758,(void*)0,&g_71},{&g_71,&l_758,&l_758},{&l_758,&l_758,&g_71}},{{&l_758,&l_758,(void*)0},{&g_71,(void*)0,&l_758},{(void*)0,&g_71,(void*)0},{(void*)0,&g_71,&l_758},{&l_758,&l_758,&l_758},{&g_71,&g_71,&g_71},{&l_758,&l_758,&g_71},{&g_71,&g_71,(void*)0}},{{&l_758,(void*)0,&g_71},{(void*)0,&l_758,&l_758},{&g_71,&l_758,&l_758},{(void*)0,&l_758,&l_758},{&l_758,&l_758,&l_758},{&g_71,&l_758,(void*)0},{&l_758,&g_71,&l_758},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&g_71},{&l_758,(void*)0,&l_758},{&l_758,&g_71,&l_758},{&l_758,&g_71,&l_758},{(void*)0,(void*)0,&l_758},{&g_71,&l_758,&g_71},{(void*)0,(void*)0,&l_758},{(void*)0,&g_71,&g_71}},{{&g_71,&l_758,&g_71},{&l_758,&l_758,(void*)0},{&l_758,&l_758,&l_758},{&l_758,&l_758,(void*)0},{&g_71,&g_71,&g_71},{&l_758,(void*)0,&l_758},{&l_758,&l_758,&l_758},{&g_71,(void*)0,&g_71}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{(void*)0,&g_71,&g_71},{&g_71,&l_758,(void*)0},{&l_758,&g_71,&l_758},{&l_758,&l_758,(void*)0},{&l_758,&l_758,&g_71},{(void*)0,&l_758,&g_71}},{{&l_758,&g_71,&l_758},{&g_71,&l_758,&l_758},{(void*)0,(void*)0,&l_758},{(void*)0,&l_758,&g_71},{&l_758,(void*)0,&g_71},{&l_758,(void*)0,(void*)0},{(void*)0,&l_758,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&l_758,&g_71,&l_758},{(void*)0,&l_758,&g_71},{&g_71,&g_71,&g_71},{&g_71,(void*)0,&g_71},{&g_71,&l_758,(void*)0},{&l_758,&l_758,&l_758},{&l_758,&g_71,&g_71},{&g_71,&g_71,&g_71}},{{&g_71,&g_71,&l_758},{(void*)0,&l_758,&l_758},{&l_758,&g_71,&l_758},{&g_71,&g_71,&g_71},{&l_758,&g_71,(void*)0},{(void*)0,&l_758,&g_71},{&l_758,&l_758,&g_71},{&l_758,(void*)0,&l_758}}};
                        unsigned *l_780 = &g_781;
                        int i, j, k;
                        g_5 = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((l_775 = &g_364) != (g_77 = &g_78)), (l_776 = ((*g_685) = g_68[(g_218.f1 + 2)])))) >= (((*l_780) = l_778) == 0x08BB13B0L)), (*g_133)));
                        l_766[5][3][3] = (void*)0;
                        return (*g_86);
                    }
                    l_786 = (safe_add_func_int32_t_s_s(g_68[g_69.f0], (safe_mul_func_int16_t_s_s(g_68[(l_762 + 2)], g_358[(g_69.f0 + 1)][g_69.f0][(l_762 + 4)]))));
                }
                for (l_762 = 0; (l_762 >= 0); l_762 -= 1)
                {
                    unsigned l_789 = 0x57FBCA72L;
                    for (g_218.f1 = 0; (g_218.f1 <= 0); g_218.f1 += 1)
                    {
                        int i, j, k;
                        l_791 = (0x2FACL < (g_68[g_69.f0] > (g_68[(g_218.f1 + 1)] >= (0L && ((*g_133) < (l_789 > (((((*g_470) = (*g_470)) == (l_790 = l_790)) >= 65535UL) <= 0xDFC738BBL)))))));
                        (*g_364) = g_34[l_762][(l_762 + 1)][(g_218.f1 + 2)];
                        l_792 = g_34[g_218.f1][g_218.f1][g_218.f1];
                        if (l_789)
                            continue;
                    }
                    if (l_792.f2)
                        break;
                    g_5 = 0L;
                }
            }
            (*g_77) = &l_792;
            (**g_77) = (**g_77);
            if (l_792.f1)
                break;
        }
    }
    return (*g_86);
}







static int * func_2(int * p_3)
{
    short l_463[3];
    long long *l_473 = &g_474;
    unsigned long long *l_475 = &g_476[0];
    int l_753 = 0x12B4D1EEL;
    int ***l_754 = &g_71;
    int ****l_755 = &g_70;
    int *l_756 = &g_757;
    int i;
    for (i = 0; i < 3; i++)
        l_463[i] = 0xA9AFL;
    for (g_5 = 27; (g_5 >= 6); g_5 = safe_sub_func_int16_t_s_s(g_5, 9))
    {
        int **l_8 = (void*)0;
        int ***l_9 = &l_8;
        (*l_9) = l_8;
    }
    l_753 = func_10(func_12(((func_18(g_5) < ((*l_475) = (((*g_471) = ((g_358[2][1][0] != l_463[0]) > (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_358[0][1][0], g_358[3][4][3])) != 1UL), (safe_add_func_int64_t_s_s(0x1DBCB66D57E6AFCALL, ((*l_473) = (g_470 == &g_471)))))))) >= l_463[0]))) & l_463[0]), l_463[0], l_463[0], l_463[1], l_463[0]));
    (**g_70) = p_3;
    return p_3;
}







static int func_10(int *** p_11)
{
    short l_499 = 0x2F4DL;
    struct S0 *l_516 = &g_69;
    short * const *l_540 = &g_471;
    int *l_546 = (void*)0;
    int *l_549[3][7] = {{&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_5,&g_5,&g_73,&g_73,&g_5},{&g_5,&g_73,&g_5,&g_73,&g_5,&g_73,&g_5}};
    unsigned l_559 = 0x3E6CAB55L;
    char *l_574 = &g_94;
    const struct S0 l_605 = {0x02AD78C38C580D76LL,7L,18446744073709551614UL};
    unsigned **l_620 = &g_133;
    long long l_688[7];
    long long l_709 = 0L;
    unsigned long long l_713 = 0UL;
    char * const *l_727 = &g_238;
    char * const **l_726 = &l_727;
    char l_740 = (-1L);
    const int **l_744 = &g_388;
    int l_748[4][4] = {{1L,8L,8L,1L},{1L,8L,8L,1L},{1L,8L,8L,1L},{1L,8L,8L,1L}};
    char l_752 = (-3L);
    int i, j;
    for (i = 0; i < 7; i++)
        l_688[i] = 0x5105347A4A3D8314LL;
    if (l_499)
    {
        char *l_504 = &g_96;
        int l_505 = 5L;
        int ***l_517 = &g_71;
        int **l_548 = &l_546;
        for (g_69.f2 = (-1); (g_69.f2 >= 24); ++g_69.f2)
        {
            unsigned char l_514 = 0xBDL;
            int *l_521 = &g_5;
            unsigned short *l_536 = &g_112;
            struct S0 *l_547[6] = {&g_34[0][0][2],&g_34[0][0][2],&g_34[0][0][2],&g_34[0][0][2],&g_34[0][0][2],&g_34[0][0][2]};
            int i;
            for (g_218.f1 = (-2); (g_218.f1 == (-7)); g_218.f1--)
            {
                int *l_506 = &l_505;
                int **l_507 = &g_4;
                struct S0 l_515 = {0x8F5A80E56B4C94E2LL,0xBED0L,0xBC4AC5FD0A58B776LL};
                unsigned short l_518 = 0xB84EL;
                int *l_519 = &g_5;
                if (func_56((((l_518 = (((void*)0 == l_504) | (((func_48(&g_71, func_56(l_505, ((*l_507) = ((**p_11) = l_506)), l_499, (safe_lshift_func_uint8_t_u_u(0x9DL, (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_514, 0xA703L)), 3)))), l_499), l_515, l_516, l_517) != g_474) & (**g_470)) && l_514))) != (*g_133)) != g_474), l_519, l_499, (**g_470), l_499))
                {
                    unsigned l_526 = 4UL;
                    if (l_499)
                    {
                        unsigned char l_520[8][7][4] = {{{0x5DL,246UL,255UL,0x6BL},{255UL,246UL,255UL,0x20L},{246UL,4UL,0xBBL,0x8DL},{0x8DL,0x6BL,0x5DL,4UL},{0x0FL,0x5DL,0x5DL,0x0FL},{0x8DL,0x20L,0xBBL,255UL},{246UL,5UL,255UL,0x32L}},{{255UL,0x32L,255UL,0x32L},{0x5DL,5UL,0x6BL,255UL},{0xB6L,0x20L,0x32L,0x0FL},{0x6BL,0x5DL,4UL,4UL},{0x6BL,0x6BL,0x32L,0x8DL},{0xB6L,4UL,0x6BL,0x20L},{0x5DL,246UL,255UL,0x6BL}},{{255UL,246UL,255UL,0x20L},{246UL,4UL,0xBBL,0x8DL},{0x8DL,0x6BL,0x5DL,4UL},{0x0FL,0x5DL,0x5DL,0x0FL},{0x8DL,0x20L,0xBBL,255UL},{246UL,5UL,255UL,0x32L},{255UL,0xB6L,0x32L,0xB6L}},{{5UL,0x0FL,255UL,0x8DL},{246UL,0x5DL,0xB6L,0xBBL},{255UL,5UL,0x20L,0x20L},{255UL,255UL,0xB6L,4UL},{246UL,0x20L,255UL,0x5DL},{5UL,255UL,0x32L,255UL},{0x8DL,255UL,0x8DL,0x5DL}},{{255UL,0x20L,0x6BL,4UL},{4UL,255UL,5UL,0x20L},{0xBBL,5UL,5UL,0xBBL},{4UL,0x5DL,0x6BL,0x8DL},{255UL,0x0FL,0x8DL,0xB6L},{0x8DL,0xB6L,0x32L,0xB6L},{5UL,0x0FL,255UL,0x8DL}},{{246UL,0x5DL,0xB6L,0xBBL},{255UL,5UL,0x20L,0x20L},{255UL,255UL,0xB6L,4UL},{246UL,0x20L,255UL,0x5DL},{5UL,255UL,0x32L,255UL},{0x8DL,255UL,0x8DL,0x5DL},{255UL,0x20L,0x6BL,4UL}},{{4UL,255UL,5UL,0x20L},{0xBBL,5UL,5UL,0xBBL},{0x20L,5UL,255UL,4UL},{0x8DL,0xBBL,4UL,246UL},{4UL,246UL,0xB6L,246UL},{0x0FL,0xBBL,0x32L,4UL},{255UL,5UL,246UL,0x6BL}},{{0x32L,0x0FL,0x5DL,0x5DL},{0x32L,0x32L,246UL,0x20L},{255UL,0x5DL,0x32L,5UL},{0x0FL,0x8DL,0xB6L,0x32L},{4UL,0x8DL,4UL,5UL},{0x8DL,0x5DL,255UL,0x20L},{0x20L,0x32L,0x0FL,0x5DL}}};
                        int i, j, k;
                        (*l_506) = (l_520[3][6][1] = l_514);
                        (**g_70) = l_521;
                        if ((*l_519))
                            continue;
                        (*g_364) = (*g_364);
                    }
                    else
                    {
                        char l_527 = 0x69L;
                        (*l_506) = (safe_mul_func_int8_t_s_s((-1L), (((*l_521) ^ ((((*g_398) = ((**g_461) >= (((*l_521) == g_5) < (safe_lshift_func_uint8_t_u_s(l_526, 2))))) && ((((0x6F5E8B3CL | (func_56((*l_506), ((**p_11) = (*g_71)), (*l_521), l_526, (*l_521)) > (*l_521))) <= l_526) != (*g_86)) != (*l_521))) <= l_527)) >= (*g_86))));
                        return l_499;
                    }
                }
                else
                {
                    int *l_528[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_528[i] = &g_73;
                    if (((void*)0 != (*l_517)))
                    {
                        int l_529 = (-4L);
                        long long *l_537 = &l_515.f0;
                        l_528[2] = (*g_71);
                        (*l_519) = (l_529 & (safe_lshift_func_int8_t_s_u((l_499 > (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((l_536 != (void*)0), 0)) <= (0x8DCA194CL == 0x289BCB48L)), g_34[0][0][2].f2))), (((((-3L) && ((*l_537) = (l_529 != (*g_133)))) | l_529) ^ 0x6FL) >= (**g_237)))));
                    }
                    else
                    {
                        int *l_538 = &g_73;
                        short * const *l_539 = &g_471;
                        if ((*g_4))
                            break;
                        (**g_70) = l_538;
                        if ((**l_507))
                            continue;
                        l_540 = l_539;
                    }
                }
                for (g_69.f1 = 14; (g_69.f1 <= 20); g_69.f1 = safe_add_func_int16_t_s_s(g_69.f1, 1))
                {
                    int l_545 = (-5L);
                    for (l_499 = 0; (l_499 != 28); l_499++)
                    {
                        l_545 = (-1L);
                    }
                    (*l_507) = ((**p_11) = (**p_11));
                }
            }
            (**p_11) = l_546;
            (*g_77) = l_547[1];
        }
        l_505 = (((*l_548) = (void*)0) == l_549[0][1]);
    }
    else
    {
        unsigned short l_550 = 65533UL;
        int ***l_553[10][7] = {{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{(void*)0,&g_71,&g_71,(void*)0,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,(void*)0,(void*)0,&g_71,&g_71},{&g_71,&g_71,(void*)0,&g_71,&g_71,&g_71,(void*)0},{(void*)0,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71}};
        int ****l_556 = &g_70;
        struct S0 l_557 = {0L,-1L,0UL};
        int l_558 = 0x8C40F063L;
        short **l_570 = (void*)0;
        struct S0 **l_576 = &g_78;
        char l_582 = 2L;
        int *l_624 = (void*)0;
        int *l_651 = &g_73;
        int *l_653 = &l_558;
        unsigned long long l_665[9][5] = {{0x190854E4A7B94B18LL,0x07DF4D51573F5DD8LL,0x190854E4A7B94B18LL,0x190854E4A7B94B18LL,0x07DF4D51573F5DD8LL},{0UL,4UL,4UL,0UL,4UL},{0x07DF4D51573F5DD8LL,0x07DF4D51573F5DD8LL,0xD80D82F48F38E9BBLL,0x07DF4D51573F5DD8LL,0x07DF4D51573F5DD8LL},{4UL,0UL,4UL,4UL,0UL},{0x07DF4D51573F5DD8LL,0x190854E4A7B94B18LL,0x190854E4A7B94B18LL,0x07DF4D51573F5DD8LL,0x190854E4A7B94B18LL},{0UL,0UL,0UL,0UL,0UL},{0x190854E4A7B94B18LL,0x07DF4D51573F5DD8LL,0x190854E4A7B94B18LL,0x190854E4A7B94B18LL,0x07DF4D51573F5DD8LL},{0UL,4UL,4UL,0UL,4UL},{0x07DF4D51573F5DD8LL,0x07DF4D51573F5DD8LL,0xD80D82F48F38E9BBLL,0x07DF4D51573F5DD8LL,0x07DF4D51573F5DD8LL}};
        int l_675 = (-1L);
        struct S0 l_679 = {0x2629A66E89504693LL,-10L,0x93779FCEF2D93D87LL};
        unsigned l_714 = 0x82AB8AACL;
        int *l_721[8] = {&g_5,&l_558,&g_5,&l_558,&g_5,&l_558,&g_5,&l_558};
        unsigned l_730 = 18446744073709551608UL;
        int i, j;
        (*g_71) = l_549[0][1];
        (*l_516) = l_557;
        if ((*g_72))
        {
            unsigned long long l_568 = 18446744073709551615UL;
            short **l_569 = &g_471;
            short ***l_571 = &g_470;
            long long *l_575 = &g_474;
            int l_577[5][1] = {{0x3E98FCCAL},{0L},{0x3E98FCCAL},{0L},{0x3E98FCCAL}};
            struct S0 *l_578 = &l_557;
            struct S0 l_579[1][2][3] = {{{{0xAA3731C6C686415ELL,0x7749L,0x03658C40D6003391LL},{0xAA3731C6C686415ELL,0x7749L,0x03658C40D6003391LL},{0xA387B9A8C8D454ADLL,-1L,0x183C5CFBB4A88567LL}},{{0xAA3731C6C686415ELL,0x7749L,0x03658C40D6003391LL},{0xAA3731C6C686415ELL,0x7749L,0x03658C40D6003391LL},{0xA387B9A8C8D454ADLL,-1L,0x183C5CFBB4A88567LL}}}};
            char l_583 = (-7L);
            int l_598 = 0x7ABDDB75L;
            char ***l_610[10] = {&g_242[2],&g_237,&g_237,&g_242[2],&g_237,&g_242[2],&g_237,&g_237,&g_242[2],&g_237};
            unsigned char l_617 = 0UL;
            unsigned short l_625 = 0xA49CL;
            long long l_678 = 0x34E8AA4F42FC4F19LL;
            struct S0 *l_691 = &g_218;
            int i, j, k;
            if ((***p_11))
            {
                for (g_218.f0 = 0; (g_218.f0 <= 1); g_218.f0 += 1)
                {
                    (*l_516) = l_579[0][1][0];
                    for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
                    {
                        int i, j;
                        (*g_71) = &l_577[g_218.f0][g_5];
                        l_582 = (l_577[(g_218.f0 + 3)][g_5] = (safe_add_func_uint16_t_u_u(g_476[g_218.f0], l_568)));
                        if (l_583)
                            break;
                    }
                    for (g_472 = 0; (g_472 <= 4); g_472 += 1)
                    {
                        (**p_11) = (*g_71);
                        (**g_70) = (**p_11);
                    }
                }
                (***l_556) = (**g_70);
            }
            else
            {
                short l_586 = (-8L);
                struct S0 l_618 = {-1L,0x3A9BL,0xEF38BECCF09E42D4LL};
                const struct S0 *l_631 = &g_218;
                const struct S0 **l_630 = &l_631;
                for (l_557.f0 = 2; (l_557.f0 >= 0); l_557.f0 -= 1)
                {
                    for (l_558 = 2; (l_558 >= 0); l_558 -= 1)
                    {
                        (**p_11) = l_546;
                    }
                    for (l_559 = 0; (l_559 <= 1); l_559 += 1)
                    {
                        int i;
                        return g_68[l_557.f0];
                    }
                }
                if ((safe_lshift_func_int8_t_s_u(((**g_237) = l_586), (safe_mul_func_uint8_t_u_u(l_586, ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((0x81L ^ ((safe_mod_func_uint32_t_u_u((~((**g_461) <= l_577[3][0])), (*g_133))) == l_586)), l_579[0][1][0].f0)), (*g_398))) <= l_583))))))
                {
                    long long l_603 = 0L;
                    int l_604 = 0x2401F74FL;
                    struct S0 l_619 = {3L,0x0B41L,0x814DEE6584CF1BA8LL};
                    for (g_69.f2 = 0; (g_69.f2 < 48); g_69.f2++)
                    {
                        struct S0 l_597 = {0x4F3E9434CB4629DFLL,0x969EL,18446744073709551615UL};
                        (*l_578) = l_597;
                        l_604 = ((((l_598 ^ (safe_rshift_func_uint8_t_u_u(((-7L) <= g_476[0]), 5))) > (l_586 || l_586)) ^ 0x5058C0CA02A92FB3LL) | ((safe_sub_func_uint32_t_u_u(l_603, ((*g_133) = l_579[0][1][0].f0))) ^ l_597.f0));
                    }
                    if (l_603)
                    {
                        char ****l_611 = &l_610[5];
                        unsigned char *l_614[1][3][3];
                        long long l_615 = 1L;
                        unsigned char l_616 = 0xAEL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_614[i][j][k] = &g_358[2][3][4];
                            }
                        }
                        (*l_578) = l_605;
                        g_5 = (safe_mod_func_uint32_t_u_u(func_56(l_579[0][1][0].f2, (**g_70), l_586, ((((((*g_238) = (safe_lshift_func_int16_t_s_s(((0xCEL & ((((((((*l_611) = l_610[5]) != &g_242[2]) <= 0xAAEC5CD81A29E854LL) || (safe_rshift_func_uint8_t_u_u((((*g_461) = (void*)0) != l_614[0][2][0]), l_615))) >= l_568) < (-8L)) ^ 0L)) >= l_616), (*g_471)))) != l_586) < (*g_133)) || l_617) >= 0L), l_579[0][1][0].f0), l_586));
                        l_619 = l_618;
                    }
                    else
                    {
                        unsigned ***l_621 = &g_132;
                        int **l_622 = &g_4;
                        (*l_621) = l_620;
                        g_5 = 0x753F407BL;
                        (**p_11) = (**p_11);
                        (*g_70) = l_622;
                    }
                    if ((l_604 = l_603))
                    {
                        int *l_623[9] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
                        int i;
                        (*g_71) = l_623[1];
                        g_5 = l_619.f2;
                    }
                    else
                    {
                        (**p_11) = l_624;
                        g_73 = l_625;
                    }
                }
                else
                {
                    int l_629 = 0x0B387FE8L;
                    for (l_499 = (-18); (l_499 != 1); l_499++)
                    {
                        struct S0 l_628 = {1L,0x4A39L,0xA893CA9544B12631LL};
                        (*l_516) = l_628;
                        l_629 = l_618.f1;
                    }
                }
                (*l_630) = &l_605;
            }
            for (g_218.f1 = 5; (g_218.f1 <= 19); g_218.f1++)
            {
                unsigned l_634 = 0x35FE24CBL;
                int *l_637 = (void*)0;
                int l_640 = 0xE03956E2L;
                if ((!l_634))
                {
                    int * const l_635 = &l_577[1][0];
                    int **l_636 = (void*)0;
                    (**p_11) = l_635;
                    if ((*l_635))
                    {
                        unsigned short l_638 = 65535UL;
                        (*g_71) = l_637;
                        (*g_364) = (*g_364);
                        return l_638;
                    }
                    else
                    {
                        int l_639[2][10];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_639[i][j] = 0xC37126CFL;
                        }
                        return l_639[1][8];
                    }
                }
                else
                {
                    (*l_578) = (*l_578);
                }
                (*l_516) = (*g_364);
                l_640 = l_634;
            }
            for (l_583 = 0; (l_583 == 14); l_583 = safe_add_func_int64_t_s_s(l_583, 5))
            {
                unsigned long long l_643 = 0xD4262C2E4EB0A79ELL;
                unsigned char ***l_646 = (void*)0;
                unsigned char **l_648 = (void*)0;
                unsigned char ***l_647 = &l_648;
                int *l_652 = &l_558;
                struct S0 ***l_662[6];
                unsigned long long *l_663[9];
                unsigned l_664 = 1UL;
                unsigned long long l_680 = 0xC8B9CCA3BEB0F70ALL;
                int i;
                for (i = 0; i < 6; i++)
                    l_662[i] = (void*)0;
                for (i = 0; i < 9; i++)
                    l_663[i] = &g_85[0].f2;
                (***l_556) = l_651;
                (**p_11) = l_652;
                if (func_56(l_568, l_653, ((*l_575) = ((*g_86) >= ((safe_mul_func_uint8_t_u_u((*l_651), ((*g_238) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((**g_470), (((void*)0 != l_662[1]) <= ((l_577[1][0] = ((*l_652) && l_583)) < (*l_652))))), l_664)) < 1L), l_579[0][1][0].f2))))) && (*l_651)))), l_665[8][2], (*l_652)))
                {
                    unsigned char l_668 = 255UL;
                    for (l_617 = 0; (l_617 <= 0); l_617 += 1)
                    {
                        int i;
                        if (g_68[l_617])
                            break;
                        if (g_68[l_617])
                            continue;
                        (**g_70) = (**p_11);
                        l_577[1][0] = 0x92F1A61AL;
                    }
                    (**g_70) = (**p_11);
                }
                else
                {
                    unsigned l_681 = 0x5727F2DFL;
                    int ***l_682 = (void*)0;
                    int *l_683 = &l_558;
                    unsigned short *l_684 = &g_112;
                    if (l_681)
                        break;
                    l_683 = ((**p_11) = &l_577[1][0]);
                    (*l_652) = (((g_685 = l_684) == &g_302) ^ (safe_lshift_func_int8_t_s_u((*g_238), 1)));
                }
                for (l_643 = 14; (l_643 <= 20); l_643 = safe_add_func_int8_t_s_s(l_643, 9))
                {
                    (*l_651) = (l_579[0][1][0].f0 | (&l_605 == l_691));
                }
            }
            (*l_653) = l_583;
        }
        else
        {
            int l_696 = (-1L);
            struct S0 l_715 = {0x150A38D1D9C0AD58LL,1L,0x5FCE79843D451D25LL};
            (*l_653) = ((***g_70) = (0L && (*l_651)));
            if ((**g_71))
            {
                (*l_576) = &l_557;
            }
            else
            {
                short l_704 = (-9L);
                char *l_705[2][3] = {{&l_582,(void*)0,(void*)0},{&l_582,(void*)0,(void*)0}};
                int l_706 = 4L;
                long long *l_712[3];
                unsigned l_718 = 6UL;
                int *l_722[7][6] = {{&l_696,&l_558,&l_558,&g_73,&l_558,&l_558},{&l_558,&l_696,(void*)0,&l_558,&l_558,(void*)0},{&l_558,&l_558,&l_558,&g_73,&l_696,&g_73},{&l_696,&l_558,&l_696,(void*)0,&l_558,&l_558},{&l_558,&l_696,&l_696,&l_558,&l_558,&g_73},{&g_73,&l_558,&l_558,&l_558,&g_73,(void*)0},{&l_558,&g_73,(void*)0,(void*)0,&g_73,&l_558}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_712[i] = &g_474;
                (**g_71) = (((*g_685) < (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((**g_461) = (*g_398)), l_696)), (safe_mul_func_int8_t_s_s((**g_237), (g_699 == (g_474 ^ ((((l_696 && (safe_mod_func_int8_t_s_s((l_706 = ((*l_574) = ((*g_685) < l_704))), l_704))) >= l_696) ^ l_704) > (*l_651))))))))) >= (*l_653));
                if (((*l_653) = ((***p_11) = (7UL < func_56(g_85[0].f2, (**p_11), (safe_mod_func_int8_t_s_s((l_696 < (l_709 <= (((**g_470) = (safe_add_func_int64_t_s_s((g_218.f0 = 0x947B0721524B2F01LL), l_696))) && func_56((0x2EF61F05L & (((((*g_86) = 0xCF5F17A0A00BEC78LL) | l_706) ^ l_713) <= 251UL)), (**g_70), l_696, l_714, l_704)))), l_706)), l_696, l_696)))))
                {
                    (**g_71) = (***g_70);
                    (*l_516) = l_715;
                    (*g_71) = (*g_71);
                }
                else
                {
                    unsigned char **l_716 = &g_398;
                    for (g_474 = 0; (g_474 <= 6); g_474 += 1)
                    {
                        unsigned char ***l_717 = &g_461;
                        (*g_71) = (void*)0;
                        (*l_717) = l_716;
                    }
                }
                if ((l_718 = l_715.f0))
                {
                    int *l_723 = &l_696;
                    char ***l_725 = &g_242[0];
                    char ****l_724 = &l_725;
                    char * const ***l_728[10] = {(void*)0,&l_726,&l_726,(void*)0,&l_726,&l_726,(void*)0,&l_726,&l_726,(void*)0};
                    int i;
                    for (g_94 = 10; (g_94 == 1); --g_94)
                    {
                        (***l_556) = l_721[2];
                        (**p_11) = l_722[2][0];
                        l_723 = (*g_71);
                    }
                    (*l_653) = (((*l_724) = &g_242[0]) != (g_729[6] = l_726));
                    for (l_709 = 5; (l_709 >= 1); l_709 -= 1)
                    {
                        int i;
                        (*g_4) = l_730;
                        (*g_364) = (*g_364);
                    }
                }
                else
                {
                    const struct S0 *l_732 = &g_85[0];
                    const struct S0 **l_731 = &l_732;
                    (*l_731) = &l_605;
                }
                for (l_709 = 0; (l_709 <= 2); l_709 += 1)
                {
                    int i;
                    l_721[(l_709 + 3)] = (void*)0;
                    for (g_69.f1 = 0; (g_69.f1 <= 6); g_69.f1 += 1)
                    {
                        unsigned char l_733 = 0xFDL;
                        return l_733;
                    }
                }
            }
            return l_715.f1;
        }
        (*l_516) = (*g_364);
    }
    for (g_218.f0 = 0; (g_218.f0 <= 21); g_218.f0 = safe_add_func_uint16_t_u_u(g_218.f0, 1))
    {
        int *l_739 = &g_5;
        for (l_499 = 17; (l_499 == 7); l_499 = safe_sub_func_int32_t_s_s(l_499, 7))
        {
            int *l_738 = &g_73;
            l_739 = l_738;
        }
    }
    if (l_740)
    {
        const int **l_743 = (void*)0;
        int l_745 = 0x142F3C74L;
        l_745 = (safe_mul_func_uint16_t_u_u((*g_685), (safe_sub_func_uint8_t_u_u(l_745, l_748[1][0]))));
    }
    else
    {
        struct S0 *l_751 = &g_69;
        for (g_474 = 11; (g_474 > (-9)); --g_474)
        {
            (*g_77) = l_751;
            (*l_744) = (*l_744);
        }
    }
    return l_752;
}







static int *** func_12(short p_13, unsigned short p_14, int p_15, unsigned char p_16, unsigned p_17)
{
    unsigned l_479 = 0xA236BD12L;
    int * const l_496[5] = {&g_73,&g_73,&g_73,&g_73,&g_73};
    int ***l_498 = &g_71;
    int i;
    for (g_218.f0 = 0; (g_218.f0 > (-23)); g_218.f0 = safe_sub_func_int64_t_s_s(g_218.f0, 6))
    {
        int *l_480 = &g_5;
        (*l_480) = l_479;
        (*l_480) = (safe_mul_func_uint8_t_u_u(((4294967292UL | (safe_add_func_int32_t_s_s(0x7F8AC4A8L, ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((*g_133) = (*g_133)), l_479)), 5)) > (*l_480))))) & (p_17 = p_14)), (((safe_lshift_func_uint8_t_u_s((l_479 != p_15), 6)) ^ (p_14 || p_15)) && (*l_480))));
        (*g_71) = &p_15;
        for (p_14 = 0; (p_14 <= 41); p_14 = safe_add_func_int64_t_s_s(p_14, 2))
        {
            int *l_494[6][10][4] = {{{(void*)0,(void*)0,&g_73,&g_73},{&g_5,&g_73,&g_5,(void*)0},{&g_5,(void*)0,&g_73,&g_5},{&g_73,&g_5,&g_5,&g_73},{&g_73,&g_5,&g_73,(void*)0},{(void*)0,&g_73,&g_73,(void*)0},{&g_5,(void*)0,&g_5,(void*)0},{&g_5,&g_73,&g_73,&g_5},{(void*)0,&g_73,(void*)0,&g_73},{(void*)0,&g_73,(void*)0,&g_5}},{{(void*)0,&g_5,&g_73,&g_73},{&g_5,(void*)0,&g_5,&g_73},{&g_5,&g_73,&g_73,&g_73},{&g_5,&g_5,&g_73,&g_5},{&g_73,&g_73,(void*)0,(void*)0},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_73,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_73,(void*)0,&g_73},{&g_5,(void*)0,(void*)0,(void*)0}},{{&g_73,&g_73,&g_73,&g_5},{(void*)0,&g_73,(void*)0,&g_73},{&g_5,&g_73,&g_5,(void*)0},{&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,&g_5},{&g_5,&g_73,(void*)0,(void*)0},{&g_73,(void*)0,(void*)0,&g_73},{(void*)0,&g_73,&g_73,&g_5},{&g_73,&g_5,&g_5,(void*)0},{&g_73,&g_73,(void*)0,(void*)0}},{{&g_73,&g_73,&g_73,&g_5},{&g_73,&g_73,&g_5,(void*)0},{&g_5,&g_5,&g_73,&g_5},{&g_73,&g_73,&g_5,&g_73},{(void*)0,(void*)0,&g_5,(void*)0},{&g_73,(void*)0,&g_5,&g_5},{&g_5,&g_73,&g_73,&g_73},{&g_5,(void*)0,&g_5,&g_73},{&g_73,&g_73,&g_5,&g_5},{(void*)0,(void*)0,&g_5,&g_73}},{{&g_73,&g_5,&g_73,(void*)0},{&g_5,&g_73,&g_5,&g_73},{&g_73,&g_5,&g_73,&g_73},{&g_73,&g_5,(void*)0,(void*)0},{&g_73,(void*)0,&g_5,(void*)0},{(void*)0,&g_73,&g_73,(void*)0},{(void*)0,(void*)0,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,&g_5},{&g_73,&g_5,&g_5,&g_73}},{{(void*)0,&g_5,(void*)0,&g_73},{&g_73,&g_5,(void*)0,&g_5},{&g_5,(void*)0,&g_73,&g_5},{(void*)0,&g_5,&g_73,&g_73},{&g_5,(void*)0,(void*)0,&g_73},{&g_5,&g_5,&g_73,(void*)0},{&g_73,&g_5,&g_73,&g_73},{(void*)0,&g_5,&g_5,&g_73},{(void*)0,&g_5,&g_5,(void*)0},{(void*)0,&g_5,&g_5,&g_73}}};
            unsigned l_495 = 0x0FD83B5BL;
            int **l_497 = &l_480;
            int i, j, k;
            for (p_13 = 0; (p_13 <= 1); p_13 += 1)
            {
                int l_493 = 0x61449FCDL;
                int i;
                l_480 = (**g_70);
                for (g_474 = 0; g_474 < 4; g_474 += 1)
                {
                    g_242[g_474] = (void*)0;
                }
                for (g_69.f2 = 0; (g_69.f2 <= 2); g_69.f2 += 1)
                {
                    if (l_493)
                        break;
                }
                l_494[5][0][1] = (*g_71);
            }
            (**g_71) = (*l_480);
            if (l_495)
                continue;
            (*l_497) = l_496[0];
        }
    }
    return &g_71;
}







static long long func_18(unsigned p_19)
{
    int **l_25[5][2] = {{&g_4,&g_4},{&g_4,&g_4},{&g_4,&g_4},{&g_4,&g_4},{&g_4,&g_4}};
    int ***l_24 = &l_25[1][1];
    const int *l_32 = &g_5;
    const int **l_31 = &l_32;
    int l_384[4];
    struct S0 l_462 = {-1L,0x2156L,6UL};
    int i, j;
    for (i = 0; i < 4; i++)
        l_384[i] = 0xA6B27E0EL;
    (*l_31) = func_20(l_24, ((1L <= func_26(l_31, &g_5, &l_25[4][1], (*g_4))) ^ l_384[1]), p_19);
    (*g_364) = l_462;
    return p_19;
}







static int * func_20(int *** p_21, short p_22, int p_23)
{
    int ***l_389 = &g_71;
    unsigned short ** const *l_390 = (void*)0;
    int l_391 = 0x7F5A0BEDL;
    struct S0 *l_394 = &g_69;
    int *l_421[4];
    int i;
    for (i = 0; i < 4; i++)
        l_421[i] = &l_391;
    if ((safe_mul_func_int16_t_s_s((p_22 && (0xBF274DB9L != (+(*g_133)))), p_23)))
    {
        unsigned long long l_392[4][1][1];
        int l_393[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_392[i][j][k] = 5UL;
            }
        }
        l_393[4] = ((-9L) >= (l_391 != l_392[1][0][0]));
        (*g_71) = &l_393[0];
        (*g_77) = l_394;
    }
    else
    {
        unsigned char **l_395 = (void*)0;
        unsigned char *l_397 = &g_358[2][3][2];
        unsigned char **l_396[9] = {&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397};
        int l_399 = 0x7738B13EL;
        int *l_422 = &g_5;
        unsigned short *l_439 = &g_302;
        unsigned short **l_438 = &l_439;
        int *l_442 = &l_399;
        const int **l_452 = &g_388;
        struct S0 l_453 = {0xAE3DEFE9BEB21166LL,0x0879L,0xAA7488B1E2EE2184LL};
        int *l_458[9][4] = {{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73},{&l_391,&g_73,&l_391,&g_73}};
        struct S0 *l_459 = &g_85[0];
        int i, j;
        if ((&g_358[3][3][0] != (g_398 = &g_358[0][5][0])))
        {
            int *l_400 = &g_73;
            char ***l_401 = &g_242[1];
            short *l_402 = &g_69.f1;
            int *l_418 = &l_391;
            int *l_419[2];
            struct S0 l_425[1] = {{0x7F6C5157555B662DLL,1L,1UL}};
            int i;
            for (i = 0; i < 2; i++)
                l_419[i] = &l_391;
            for (g_302 = 2; (g_302 <= 8); g_302 += 1)
            {
                l_399 = (g_218.f0 >= (p_23 || 1UL));
            }
            (*g_71) = l_400;
            if (((((void*)0 == l_401) > ((((*l_402) = p_23) == p_22) | (*l_400))) & ((*g_86) = (*g_86))))
            {
                int *l_405 = &l_391;
                struct S0 l_436 = {0xA1072E609269E341LL,0xA22BL,1UL};
                for (g_69.f0 = 0; (g_69.f0 == (-6)); g_69.f0 = safe_sub_func_uint16_t_u_u(g_69.f0, 5))
                {
                    const int *l_406 = (void*)0;
                    for (l_399 = 1; (l_399 <= 8); l_399 += 1)
                    {
                        const int **l_407 = (void*)0;
                        const int **l_408 = &l_406;
                        (**g_70) = l_405;
                        (**l_389) = (*g_71);
                        (*l_408) = l_406;
                    }
                    for (g_69.f2 = 5; (g_69.f2 != 12); g_69.f2 = safe_add_func_uint32_t_u_u(g_69.f2, 5))
                    {
                        long long l_411 = 1L;
                        (***l_389) = 1L;
                        if ((***g_70))
                            break;
                        if (l_411)
                            continue;
                    }
                }
                (**g_71) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0xFAD097026E021A4CLL, l_399)), 13));
                for (g_94 = 0; (g_94 == 2); g_94 = safe_add_func_uint16_t_u_u(g_94, 4))
                {
                    int *l_420 = &l_391;
                    return l_422;
                }
                if (p_23)
                {
                    int ***l_435[4][7][4] = {{{&g_71,(void*)0,(void*)0,&g_71},{&g_71,(void*)0,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{(void*)0,(void*)0,&g_71,(void*)0},{&g_71,&g_71,(void*)0,(void*)0}},{{&g_71,&g_71,&g_71,&g_71},{(void*)0,(void*)0,&g_71,(void*)0},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,(void*)0},{&g_71,(void*)0,&g_71,&g_71},{&g_71,&g_71,&g_71,(void*)0},{(void*)0,&g_71,&g_71,(void*)0}},{{&g_71,(void*)0,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71},{(void*)0,(void*)0,&g_71,(void*)0},{&g_71,&g_71,(void*)0,(void*)0},{&g_71,&g_71,&g_71,&g_71}},{{(void*)0,(void*)0,&g_71,(void*)0},{&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,(void*)0},{&g_71,(void*)0,&g_71,&g_71},{(void*)0,&g_71,&g_71,(void*)0},{&g_71,&g_71,&g_71,&g_71},{(void*)0,&g_71,&g_71,&g_71}}};
                    int i, j, k;
                    if ((~(safe_rshift_func_int16_t_s_u(g_34[0][0][2].f0, 0))))
                    {
                        (*g_72) = ((void*)0 != l_390);
                        (*g_364) = l_425[0];
                    }
                    else
                    {
                        struct S0 ***l_426 = &g_77;
                        struct S0 * const l_429 = (void*)0;
                        struct S0 * const *l_428[4] = {&l_429,&l_429,&l_429,&l_429};
                        struct S0 * const **l_427 = &l_428[1];
                        unsigned short *l_434 = &g_112;
                        int i;
                        (*l_422) = ((***g_70) = (p_23 & p_22));
                        (**g_70) = (**g_70);
                    }
                    if (((p_22 != (*g_133)) | (((*g_238) = (((*g_86) = (func_48(&g_71, func_56(p_22, l_418, g_302, p_22, (*l_422)), (*l_394), (*g_77), p_21) >= (*l_422))) <= p_23)) | p_23)))
                    {
                        return (**p_21);
                    }
                    else
                    {
                        int *l_437 = &l_391;
                        int ***l_440 = &g_71;
                        long long *l_441 = &g_218.f0;
                        (**p_21) = (**p_21);
                        l_436 = (*l_394);
                        l_437 = (**p_21);
                        (***p_21) = ((l_438 != &l_439) || ((*l_441) = (g_218.f0 < (g_302 == (*l_422)))));
                    }
                    (*g_71) = l_442;
                }
                else
                {
                    long long l_447 = 3L;
                    int *l_449[1][4][1] = {{{&l_399},{&l_391},{&l_399},{&l_391}}};
                    int i, j, k;
                    if ((***l_389))
                    {
                        struct S0 l_448[10] = {{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL},{-10L,0L,18446744073709551606UL}};
                        int i;
                        (*l_442) = ((g_218.f0 > ((safe_lshift_func_int16_t_s_s((g_218.f0 >= (func_56(((*l_422) = g_218.f1), (*g_71), g_218.f0, (safe_rshift_func_int16_t_s_u(0xAB8AL, p_22)), l_447) ^ 0x37L)), p_23)) | (*l_405))) | (***g_70));
                        (**g_70) = (**p_21);
                        (*l_400) = ((*l_400) || (+(((*g_70) != (*p_21)) < (func_56(func_48(&g_71, p_23, l_448[5], &l_448[5], l_389), l_449[0][1][0], p_23, (*l_405), (*l_405)) >= g_69.f0))));
                        (*l_418) = ((0xC013B93577E9A953LL >= (safe_sub_func_int16_t_s_s(0xDED0L, p_22))) | g_96);
                    }
                    else
                    {
                        (*g_364) = l_453;
                        (*l_394) = (*g_364);
                    }
                    for (g_5 = 0; (g_5 <= 4); g_5 += 1)
                    {
                        unsigned char ***l_454 = &l_395;
                        (**l_389) = (**g_70);
                        (*l_454) = &g_398;
                    }
                    if ((*l_405))
                    {
                        (*g_77) = &l_436;
                    }
                    else
                    {
                        int *l_455 = &l_399;
                        return l_400;
                    }
                }
            }
            else
            {
                (*l_394) = l_453;
                for (g_302 = 0; (g_302 != 32); g_302++)
                {
                    (*g_71) = (void*)0;
                }
            }
            return l_400;
        }
        else
        {
            (*l_442) = 0x61261F33L;
        }
        (*l_394) = l_453;
        (*g_77) = l_459;
    }
    (**p_21) = ((*g_71) = (void*)0);
    g_5 = p_23;
    return (**p_21);
}







static const char func_26(const int ** p_27, int * p_28, int *** p_29, int p_30)
{
    struct S0 * const l_33 = &g_34[0][0][2];
    struct S0 *l_36 = (void*)0;
    struct S0 **l_35 = &l_36;
    int l_63 = 0xD1AFC438L;
    unsigned l_359 = 0xEAB5B3BEL;
    (*l_35) = l_33;
    if ((*g_4))
    {
        int l_39 = 0L;
        int **l_55 = &g_4;
        int ***l_54[1];
        unsigned long long *l_64 = (void*)0;
        unsigned long long *l_65 = &g_34[0][0][2].f2;
        unsigned *l_67[3][10] = {{&g_68[0],(void*)0,(void*)0,&g_68[0],&g_68[0],(void*)0,(void*)0,&g_68[0],(void*)0,&g_68[0]},{&g_68[0],&g_68[1],&g_68[2],&g_68[0],&g_68[0],&g_68[2],(void*)0,&g_68[2],&g_68[0],&g_68[0]},{&g_68[2],(void*)0,&g_68[2],&g_68[0],&g_68[0],&g_68[2],&g_68[1],&g_68[0],&g_68[0],&g_68[0]}};
        struct S0 * const *l_79 = &l_36;
        int i, j;
        for (i = 0; i < 1; i++)
            l_54[i] = &l_55;
        (*p_28) = (safe_sub_func_uint8_t_u_u(l_39, ((g_34[0][0][2].f1 == 0xC4AD1532L) != func_40((safe_mul_func_int16_t_s_s(func_48(l_54[0], (g_68[0] = (func_56(p_30, &g_5, p_30, (!(0UL ^ (~(((*l_65) = (safe_unary_minus_func_int16_t_s((((**l_55) = (p_30 || p_30)) != l_63)))) | 0UL)))), p_30) & p_30)), g_69, &g_69, g_70), l_63)), g_77, l_63, l_79, g_69.f1))));
        (*g_4) = (p_30 >= g_73);
        (**l_79) = (**l_79);
        (**l_79) = (*l_36);
    }
    else
    {
        int l_361 = 0x700EEB3CL;
        if ((***p_29))
        {
            unsigned l_353 = 0x505FBEA6L;
            short *l_354 = (void*)0;
            short *l_355 = &g_85[0].f1;
            int l_356[9];
            unsigned char *l_357 = &g_358[2][3][2];
            struct S0 **l_360 = &l_36;
            int *l_368 = (void*)0;
            int i;
            for (i = 0; i < 9; i++)
                l_356[i] = 8L;
            if (l_361)
            {
                struct S0 *l_362 = &g_34[0][0][2];
                struct S0 **l_363[6][8][1] = {{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}},{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}},{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}},{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}},{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}},{{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36},{&l_362},{&l_36}}};
                int * const l_372 = (void*)0;
                int **l_373 = &g_4;
                int i, j, k;
                if ((((*g_77) = (*l_35)) == (g_364 = l_362)))
                {
                    int *l_367 = (void*)0;
                    (**p_29) = ((*g_71) = &l_361);
                    (*p_27) = (*p_27);
                    for (g_69.f0 = (-30); (g_69.f0 >= (-4)); g_69.f0 = safe_add_func_int64_t_s_s(g_69.f0, 4))
                    {
                        (**p_29) = l_367;
                    }
                    (*p_27) = (void*)0;
                }
                else
                {
                    const char l_371 = 0x05L;
                    l_368 = (*g_71);
                    for (l_361 = 0; (l_361 < (-20)); l_361--)
                    {
                        (**p_29) = (**g_70);
                    }
                    return l_371;
                }
                (*l_373) = l_372;
            }
            else
            {
                (**l_35) = (*g_364);
                (**g_77) = (*g_364);
                for (g_302 = 0; (g_302 < 32); g_302 = safe_add_func_int64_t_s_s(g_302, 2))
                {
                    (*g_71) = (*g_71);
                }
            }
            (**p_29) = &l_356[8];
        }
        else
        {
            long long l_376 = 0xCF8A40BFA01428A1LL;
            l_376 = (l_63 = ((*g_4) = ((**g_71) = (*g_4))));
        }
        (**g_70) = (*g_71);
    }
    for (g_94 = 9; (g_94 < (-29)); g_94--)
    {
        char l_379 = 0L;
        int *l_380 = (void*)0;
        int *l_381[2][8] = {{(void*)0,(void*)0,&l_63,(void*)0,(void*)0,&l_63,(void*)0,(void*)0},{&g_73,(void*)0,&g_73,&g_73,(void*)0,&g_73,&g_73,(void*)0}};
        int i, j;
        l_63 = ((*p_28) = l_379);
    }
    for (g_69.f0 = (-7); (g_69.f0 > (-12)); g_69.f0 = safe_sub_func_uint32_t_u_u(g_69.f0, 6))
    {
        return p_30;
    }
    return (*g_238);
}







static long long func_40(long long p_41, struct S0 ** p_42, unsigned char p_43, struct S0 * const * p_44, unsigned short p_45)
{
    int ***l_82 = &g_71;
    struct S0 **l_83 = (void*)0;
    struct S0 *l_84 = &g_85[0];
    unsigned long long * const l_87 = &g_69.f2;
    int l_88 = (-3L);
    char *l_93 = &g_94;
    char *l_95 = &g_96;
    unsigned l_99 = 4294967295UL;
    unsigned short *l_155 = &g_112;
    unsigned long long l_178 = 18446744073709551612UL;
    int l_198 = 0L;
    char l_227 = 0xD6L;
    unsigned l_288 = 0UL;
    char l_345 = 0xD7L;
    (*g_71) = (**g_70);
    l_88 = ((safe_add_func_uint8_t_u_u(func_48(l_82, g_69.f1, (*g_78), (l_84 = (void*)0), l_82), (p_41 > g_85[0].f0))) || (g_86 == l_87));
    if (((p_45 <= p_41) ^ ((safe_mul_func_uint16_t_u_u(65528UL, func_56(((((*g_86) = (safe_add_func_int8_t_s_s(((*l_95) = ((*l_93) = 0x96L)), (-1L)))) < l_88) | l_99), (**l_82), p_45, l_88, p_41))) != g_85[0].f0)))
    {
        unsigned char l_109 = 0x1FL;
        int *l_125 = &g_73;
        int l_134 = 0xE5577DD4L;
        short *l_226 = (void*)0;
        char **l_244 = (void*)0;
        int l_254 = 0xF2B7163FL;
        int *l_270[6] = {&g_73,&l_254,&l_254,&g_73,&l_254,&l_254};
        int ***l_307 = &g_71;
        struct S0 *l_308 = &g_85[0];
        int i;
        if (((*g_4) = (-9L)))
        {
            int *l_108 = &l_88;
            unsigned short *l_110 = (void*)0;
            unsigned short *l_111 = &g_112;
            (**l_82) = (**l_82);
            (**l_82) = (**g_70);
            (*l_108) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((0xE318651235921E46LL >= func_56(p_41, l_108, l_109, (~(g_86 != (void*)0)), l_109)), ((*l_111) = p_41))), p_43));
        }
        else
        {
            char l_124 = (-1L);
            int *l_148 = &g_73;
            const unsigned short *l_156 = &g_112;
            short *l_157 = (void*)0;
            struct S0 l_158 = {0xC9E81EBBB35188A0LL,0x647CL,0xC7C792515ED506CELL};
            unsigned long long l_176 = 1UL;
            for (g_73 = (-2); (g_73 <= (-18)); g_73--)
            {
                char **l_127 = &l_95;
                unsigned *l_130 = &l_99;
                unsigned **l_129 = &l_130;
                if ((*g_4))
                {
                    struct S0 l_115 = {1L,-1L,18446744073709551615UL};
                    int *l_126 = &g_73;
                    l_115 = (**p_44);
                    if ((safe_mul_func_uint16_t_u_u(((((p_43 && (((*l_93) = ((*l_95) = ((safe_rshift_func_uint16_t_u_s(g_34[0][0][2].f0, 3)) && 0x71379FB2L))) != (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((*g_86) == (0x49L <= 0x82L)) | (l_124 <= g_34[0][0][2].f0)), 4)) | (!((~p_41) != g_5))), l_115.f0)))) > g_69.f1) < 0xD1L) & 0xB2F72018L), p_45)))
                    {
                        (**g_70) = l_125;
                        (**g_70) = l_126;
                    }
                    else
                    {
                        char ***l_128 = &l_127;
                        (*g_78) = (**p_44);
                        (**g_70) = (**l_82);
                        (*l_128) = l_127;
                    }
                }
                else
                {
                    unsigned ***l_131[7][8][4] = {{{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{(void*)0,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,(void*)0,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,(void*)0,&l_129},{&l_129,(void*)0,&l_129,(void*)0},{&l_129,(void*)0,&l_129,&l_129},{(void*)0,&l_129,&l_129,&l_129},{&l_129,(void*)0,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{(void*)0,&l_129,(void*)0,&l_129},{&l_129,&l_129,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129},{(void*)0,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{(void*)0,(void*)0,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,(void*)0,&l_129}},{{(void*)0,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,(void*)0,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129}},{{&l_129,(void*)0,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,(void*)0,(void*)0,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,(void*)0},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,(void*)0,&l_129},{&l_129,&l_129,&l_129,(void*)0},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129}}};
                    int i, j, k;
                    g_132 = l_129;
                }
                for (p_43 = 0; (p_43 <= 0); p_43 += 1)
                {
                    int i;
                    g_85[p_43] = g_85[p_43];
                    l_134 = ((*g_4) = p_41);
                }
                for (g_94 = 0; (g_94 >= (-3)); g_94 = safe_sub_func_uint32_t_u_u(g_94, 7))
                {
                    return g_5;
                }
                for (g_5 = 0; (g_5 <= 29); g_5++)
                {
                    unsigned long long l_143 = 0UL;
                    int *l_144 = &l_88;
                    long long l_147 = 0L;
                    for (g_112 = 22; (g_112 != 56); ++g_112)
                    {
                        (**l_82) = (**g_70);
                    }
                    l_134 = ((*l_144) = ((safe_mod_func_uint32_t_u_u(l_143, ((*l_130) = 4294967289UL))) ^ (p_43 && g_68[0])));
                    if (p_41)
                        break;
                    for (p_41 = 0; (p_41 != 4); p_41++)
                    {
                        (*l_144) = l_147;
                        (*g_71) = l_148;
                    }
                }
            }
            if ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(1UL, (g_85[0].f1 = func_56(g_34[0][0][2].f2, (*g_71), (l_155 != (l_156 = l_156)), p_41, g_69.f0)))), g_34[0][0][2].f0)), p_45)))
            {
                long long l_177 = (-1L);
                for (g_96 = 0; (g_96 <= 2); g_96 += 1)
                {
                    l_158 = ((*g_78) = (**p_42));
                    (**g_77) = (*g_78);
                    for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                    {
                        (**l_82) = (void*)0;
                    }
                }
                (*l_125) = func_56((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_43, (safe_add_func_uint64_t_u_u(0UL, g_73)))), (safe_lshift_func_int16_t_s_s((p_45 != func_56((safe_lshift_func_int16_t_s_s(g_68[0], (func_56(g_34[0][0][2].f0, ((**l_82) = (void*)0), (p_43 != (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_69.f1, l_99)), p_43)))), 65535UL))), p_43, p_41) <= p_45))), l_148, (*l_148), (*l_125), l_176)), g_5)))), l_148, (*l_148), l_177, g_69.f2);
                (**g_77) = (*g_78);
            }
            else
            {
                return l_178;
            }
            if ((((*l_148) = p_43) > (*g_4)))
            {
                if ((g_69.f0 | 0x7FL))
                {
                    unsigned l_181[8] = {4294967290UL,4294967290UL,3UL,4294967290UL,4294967290UL,3UL,4294967290UL,4294967290UL};
                    int *l_188 = &g_73;
                    int i;
                    for (l_88 = 16; (l_88 >= (-2)); l_88 = safe_sub_func_uint32_t_u_u(l_88, 4))
                    {
                        (**l_82) = (**g_70);
                        (*g_4) = p_41;
                        (*l_125) = ((func_56(p_45, (*g_71), l_181[1], p_41, g_34[0][0][2].f0) | (~((safe_add_func_uint64_t_u_u((*g_86), (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x5ED2L, ((*l_155) = p_41))), p_41)))) || l_181[1]))) || g_85[0].f2);
                    }
                    if ((9L >= 0xD09CL))
                    {
                        (**l_82) = (*g_71);
                        (*l_148) = p_43;
                    }
                    else
                    {
                        (**l_82) = (**l_82);
                        (**l_82) = l_188;
                    }
                }
                else
                {
                    l_125 = ((**g_70) = &l_134);
                    (**l_82) = (void*)0;
                }
            }
            else
            {
                unsigned long long *l_193 = &g_34[0][0][2].f2;
                int *l_199[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_199[i] = &l_88;
                (*l_148) = func_56((((p_45 >= p_45) ^ (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((g_86 == l_193) == ((0x6384L && func_56((safe_mul_func_uint16_t_u_u(((*l_155) = (safe_mod_func_uint32_t_u_u(p_43, p_45))), g_69.f1)), l_199[1], p_43, p_43, (*l_148))) | p_45)), g_34[0][0][2].f1)), p_45))) || p_41), &l_134, p_41, g_69.f1, p_43);
                for (g_69.f2 = 7; (g_69.f2 > 53); g_69.f2 = safe_add_func_uint64_t_u_u(g_69.f2, 3))
                {
                    int **l_202 = &l_199[1];
                    (**g_70) = (**g_70);
                    (*l_202) = ((*g_71) = (void*)0);
                    (**l_82) = l_199[2];
                    (*l_202) = (*g_71);
                }
            }
        }
        if ((safe_rshift_func_uint16_t_u_s((~1UL), 2)))
        {
            unsigned char l_205[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int l_234 = 0xF6D19666L;
            char **l_241 = &l_95;
            int **l_245[7];
            int **l_249 = &g_4;
            int ***l_248 = &l_249;
            struct S0 l_311 = {0x2024FCC9F8788238LL,0xBA19L,0UL};
            int i;
            for (i = 0; i < 7; i++)
                l_245[i] = &g_4;
            (**l_82) = (**l_82);
            if ((*l_125))
            {
                struct S0 l_217[4] = {{0L,0L,0x7DE148778A663DAELL},{0L,0L,0x7DE148778A663DAELL},{0L,0L,0x7DE148778A663DAELL},{0L,0L,0x7DE148778A663DAELL}};
                int **l_233 = &l_125;
                int i;
                (**g_70) = (**g_70);
                if (l_205[7])
                {
                    int l_212 = 0x746F835AL;
                    for (g_112 = (-8); (g_112 != 44); g_112 = safe_add_func_uint8_t_u_u(g_112, 6))
                    {
                        l_212 = (4294967291UL == ((*g_4) = (safe_add_func_uint64_t_u_u((*g_86), ((safe_sub_func_int16_t_s_s(0x119FL, g_85[0].f0)) && 1L)))));
                        if (p_41)
                            break;
                    }
                    (**g_70) = (void*)0;
                    for (g_73 = (-20); (g_73 != 5); g_73++)
                    {
                        (**g_70) = (void*)0;
                    }
                    for (g_96 = 0; (g_96 == 29); g_96++)
                    {
                        g_218 = ((**p_42) = l_217[2]);
                    }
                }
                else
                {
                    unsigned long long l_221 = 0x25BDA816B724CDBALL;
                    for (l_109 = (-3); (l_109 >= 35); ++l_109)
                    {
                        (**l_82) = (void*)0;
                        (*g_4) = 8L;
                        if (l_221)
                            break;
                    }
                }
                for (g_5 = 0; (g_5 >= 24); g_5 = safe_add_func_uint8_t_u_u(g_5, 2))
                {
                    int *l_228 = &l_88;
                }
                for (g_69.f0 = 8; (g_69.f0 >= 0); g_69.f0 -= 1)
                {
                    int i;
                    (*g_4) = (l_205[g_69.f0] < (*g_86));
                }
            }
            else
            {
                char **l_240[3][4] = {{&l_95,&l_93,&l_95,&l_93},{&l_95,&l_93,&l_95,&l_93},{&l_95,&l_93,&l_95,&l_93}};
                char **l_243[6];
                int **l_246 = (void*)0;
                struct S0 *l_258 = (void*)0;
                short *l_269 = &g_69.f1;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_243[i] = &g_238;
                for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                {
                    struct S0 *l_250[3];
                    unsigned long long l_253 = 1UL;
                    int *l_261 = &l_254;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_250[i] = (void*)0;
                }
                (*l_249) = (void*)0;
                if (func_56((func_56((safe_rshift_func_int8_t_s_u((0x7872L & (safe_add_func_uint16_t_u_u((*l_125), ((*l_269) = g_68[0])))), p_45)), (**l_82), g_34[0][0][2].f2, g_94, p_45) || p_45), l_270[4], p_43, p_45, p_43))
                {
                    short l_271 = 3L;
                    unsigned l_278 = 0xAA598F1EL;
                    if (((l_271 <= ((*l_125) = l_271)) || ((safe_mul_func_uint16_t_u_u((((*g_133) = (l_271 && (((0xCE60L < (g_218.f2 != (safe_lshift_func_uint8_t_u_s(l_271, p_45)))) > ((safe_sub_func_uint8_t_u_u(l_278, ((*l_95) = (**g_237)))) | 8UL)) < g_68[0]))) == 0UL), 1L)) | (*g_86))))
                    {
                        (***l_248) = (safe_lshift_func_int16_t_s_s(p_41, 12));
                    }
                    else
                    {
                        int l_281 = 0x18F066AAL;
                        return l_281;
                    }
                }
                else
                {
                    char l_289 = 0x39L;
                    long long *l_290 = &g_218.f0;
                    const int *l_309[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_309[i] = &g_5;
                    (***l_248) = (safe_lshift_func_int8_t_s_u((((*l_87) = (!((&p_45 == (void*)0) == ((*l_155) = (18446744073709551615UL != ((*l_290) = ((safe_lshift_func_uint8_t_u_s((0L & ((1UL < (((safe_mul_func_int16_t_s_s(((+l_288) == (***l_248)), ((l_289 | (p_45 == 0x18940EEDF8BB0FE6LL)) >= (*g_133)))) == 0xE88DAE93L) < 0L)) | g_69.f1)), 0)) > 0x9BL))))))) ^ 0x25CD262257234875LL), g_68[1]));
                    for (p_41 = 8; (p_41 == (-18)); --p_41)
                    {
                        unsigned short ***l_294 = &g_293;
                        (*l_294) = g_293;
                    }
                    (*g_78) = (*g_78);
                    if ((*g_4))
                    {
                        unsigned short *l_301[6][7] = {{(void*)0,&g_302,(void*)0,&g_302,(void*)0,&g_302,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_302,(void*)0,&g_302,(void*)0,&g_302,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_302,(void*)0,&g_302,(void*)0,&g_302,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        short **l_306[7][4] = {{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226},{(void*)0,&l_226,(void*)0,&l_226}};
                        short ***l_305 = &l_306[4][2];
                        int i, j;
                        (***l_248) = (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((g_302 = ((safe_sub_func_int64_t_s_s(0x57E84C0C2CA9C98FLL, (*g_86))) < (p_45 = (0UL && ((*l_155) = 65534UL))))) > ((*g_238) && ((*l_93) = ((*g_238) = (((*g_4) > p_43) && (safe_mul_func_uint8_t_u_u(p_43, p_43))))))), 10)), (*g_86)));
                        (*l_305) = &l_226;
                        (*g_4) = p_41;
                        return p_43;
                    }
                    else
                    {
                        const int **l_310 = &l_309[3];
                        (*g_77) = (l_308 = l_308);
                        (**l_307) = (**l_307);
                        (**g_70) = (**g_70);
                        (*l_310) = l_309[5];
                    }
                }
                (*g_77) = l_258;
            }
            l_311 = l_311;
        }
        else
        {
            long long l_324[7][10][3] = {{{0xFD6F1001C8258AFFLL,0xC492EAA63589723FLL,1L},{(-9L),0xC492EAA63589723FLL,0x8A6616F3A77F5BDCLL},{0x91362AE0AB808DE3LL,(-1L),0xC492EAA63589723FLL},{0xF0102901A16205BELL,0L,0x71FFFA7BA6158B85LL},{0x893153717F83612BLL,(-1L),0xC492EAA63589723FLL},{0x0C3C7E1C973A6B71LL,0x8A6616F3A77F5BDCLL,0x8A6616F3A77F5BDCLL},{0xEBA94AD18B259D47LL,0xD336E18AEF8493BBLL,0x077BFC1412A8300FLL},{(-9L),0x077BFC1412A8300FLL,(-10L)},{0x9C108E173D9858AALL,(-1L),0x25D61B8363C87D68LL},{0L,0x2958AF8EF0C7B75ELL,4L}},{{0xC492EAA63589723FLL,(-1L),0L},{1L,0x077BFC1412A8300FLL,0xE1CB4CC9C1CD1AA1LL},{0xA34898C60677F8BCLL,0xD336E18AEF8493BBLL,0xE1CB4CC9C1CD1AA1LL},{0xCFC9BDEF1E06772CLL,0xAA31FD7FDB8AA23ALL,0L},{0xCB230FD66C7585B6LL,0xE1CB4CC9C1CD1AA1LL,4L},{(-1L),0x2A1A4B1E32FE728CLL,0x25D61B8363C87D68LL},{0xCB230FD66C7585B6LL,(-1L),(-10L)},{0xCFC9BDEF1E06772CLL,(-1L),0x077BFC1412A8300FLL},{0xA34898C60677F8BCLL,(-1L),0xAA31FD7FDB8AA23ALL},{1L,(-1L),(-1L)}},{{0xC492EAA63589723FLL,0x2A1A4B1E32FE728CLL,5L},{0L,0xE1CB4CC9C1CD1AA1LL,(-1L)},{0x9C108E173D9858AALL,0xAA31FD7FDB8AA23ALL,0xAA31FD7FDB8AA23ALL},{(-9L),0xD336E18AEF8493BBLL,0x077BFC1412A8300FLL},{(-9L),0x077BFC1412A8300FLL,(-10L)},{0x9C108E173D9858AALL,(-1L),0x25D61B8363C87D68LL},{0L,0x2958AF8EF0C7B75ELL,4L},{0xC492EAA63589723FLL,(-1L),0L},{1L,0x077BFC1412A8300FLL,0xE1CB4CC9C1CD1AA1LL},{0xA34898C60677F8BCLL,0xD336E18AEF8493BBLL,0xE1CB4CC9C1CD1AA1LL}},{{0xCFC9BDEF1E06772CLL,0xAA31FD7FDB8AA23ALL,0L},{0xCB230FD66C7585B6LL,0xE1CB4CC9C1CD1AA1LL,4L},{(-1L),0x2A1A4B1E32FE728CLL,0x25D61B8363C87D68LL},{0xCB230FD66C7585B6LL,(-1L),(-10L)},{0xCFC9BDEF1E06772CLL,(-1L),0x077BFC1412A8300FLL},{0xA34898C60677F8BCLL,(-1L),0xAA31FD7FDB8AA23ALL},{1L,(-1L),(-1L)},{0xC492EAA63589723FLL,0x2A1A4B1E32FE728CLL,5L},{0L,0L,(-1L)},{(-1L),(-1L),(-1L)}},{{0x9C108E173D9858AALL,(-10L),0x0F737A74D5875D4BLL},{0x9C108E173D9858AALL,0x0F737A74D5875D4BLL,(-1L)},{(-1L),0x25D61B8363C87D68LL,9L},{0xCFC9BDEF1E06772CLL,0x2A1A4B1E32FE728CLL,0xAA31FD7FDB8AA23ALL},{(-1L),0x25D61B8363C87D68LL,5L},{0xCB230FD66C7585B6LL,0x0F737A74D5875D4BLL,0L},{0x8A6616F3A77F5BDCLL,(-10L),0L},{3L,(-1L),5L},{(-1L),0L,0xAA31FD7FDB8AA23ALL},{0L,0x077BFC1412A8300FLL,9L}},{{(-1L),0x2958AF8EF0C7B75ELL,(-1L)},{3L,(-1L),0x0F737A74D5875D4BLL},{0x8A6616F3A77F5BDCLL,(-1L),(-1L)},{0xCB230FD66C7585B6LL,0x2958AF8EF0C7B75ELL,(-1L)},{(-1L),0x077BFC1412A8300FLL,4L},{0xCFC9BDEF1E06772CLL,0L,(-1L)},{(-1L),(-1L),(-1L)},{0x9C108E173D9858AALL,(-10L),0x0F737A74D5875D4BLL},{0x9C108E173D9858AALL,0x0F737A74D5875D4BLL,(-1L)},{(-1L),0x25D61B8363C87D68LL,9L}},{{0xCFC9BDEF1E06772CLL,0x2A1A4B1E32FE728CLL,0xAA31FD7FDB8AA23ALL},{(-1L),0x25D61B8363C87D68LL,5L},{0xCB230FD66C7585B6LL,0x0F737A74D5875D4BLL,0L},{0x8A6616F3A77F5BDCLL,(-10L),0L},{3L,(-1L),5L},{(-1L),0L,0xAA31FD7FDB8AA23ALL},{0L,0x077BFC1412A8300FLL,9L},{(-1L),0x2958AF8EF0C7B75ELL,(-1L)},{3L,(-1L),0x0F737A74D5875D4BLL},{0x8A6616F3A77F5BDCLL,(-1L),(-1L)}}};
            int l_327 = (-8L);
            int i, j, k;
            for (l_99 = 0; (l_99 > 30); l_99++)
            {
                int l_316 = 0xDFE6C16DL;
                for (g_94 = 0; (g_94 > (-12)); g_94 = safe_sub_func_uint64_t_u_u(g_94, 1))
                {
                    return l_316;
                }
                for (g_69.f1 = 29; (g_69.f1 == 26); g_69.f1 = safe_sub_func_int16_t_s_s(g_69.f1, 9))
                {
                    struct S0 l_321 = {2L,0x33C1L,0UL};
                    (**g_70) = (**g_70);
                    if (p_41)
                        continue;
                    for (l_254 = (-25); (l_254 == 13); l_254++)
                    {
                        l_321 = (**p_42);
                        (*g_4) = (-4L);
                    }
                    for (p_41 = 0; (p_41 >= (-18)); p_41--)
                    {
                        if (l_324[5][1][2])
                            break;
                        if (p_41)
                            break;
                    }
                }
            }
            for (l_178 = (-7); (l_178 <= 36); l_178 = safe_add_func_int16_t_s_s(l_178, 2))
            {
                l_327 = 0x7D474E7FL;
            }
            for (l_227 = 0; (l_227 <= (-9)); l_227--)
            {
                (**l_82) = (*g_71);
            }
        }
        for (g_94 = 0; (g_94 != (-6)); g_94 = safe_sub_func_uint8_t_u_u(g_94, 2))
        {
            if (p_43)
                break;
        }
    }
    else
    {
        int *l_341 = &g_73;
        for (g_112 = 0; (g_112 != 33); g_112++)
        {
            int **l_340 = &g_72;
            for (g_73 = 2; (g_73 >= 0); g_73 -= 1)
            {
                unsigned l_334 = 0x3C297E06L;
                int l_343 = 0L;
                (**g_70) = (*g_71);
                for (l_288 = 0; (l_288 <= 2); l_288 += 1)
                {
                    unsigned char l_344 = 0x7DL;
                    for (p_45 = 0; (p_45 <= 2); p_45 += 1)
                    {
                        int *l_335[5];
                        int **l_339 = &g_72;
                        int ***l_338 = &l_339;
                        long long *l_342 = &g_34[0][0][2].f0;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_335[i] = &g_5;
                        l_334 = g_68[p_45];
                        (**g_70) = l_335[2];
                        (**l_82) = (*g_71);
                        (***g_70) = (func_56(g_68[l_288], (*g_71), ((*l_342) = (safe_add_func_uint64_t_u_u(g_68[l_288], (p_43 >= func_56((!(((**g_71) = (((((*l_338) = (void*)0) == l_340) <= p_43) & func_56((***l_82), l_341, p_43, g_94, (**g_237)))) <= 0x891040D2L)), (*g_71), p_45, g_302, (*l_341)))))), g_69.f1, p_41) < 255UL);
                    }
                    if (p_45)
                        continue;
                    l_343 = (*l_341);
                    if ((l_344 = (*g_4)))
                    {
                        (*g_4) = l_345;
                    }
                    else
                    {
                        int * const l_346 = (void*)0;
                        int **l_347 = (void*)0;
                        int **l_348 = &g_72;
                        (*l_340) = (**g_70);
                        (*l_348) = l_346;
                    }
                }
            }
        }
        (*l_341) = ((-6L) || (*l_341));
        (*l_82) = (*g_70);
    }
    (**g_70) = (**l_82);
    return g_85[0].f2;
}







static short func_48(int *** p_49, unsigned p_50, struct S0 p_51, struct S0 * p_52, int *** p_53)
{
    int *l_76[10][2] = {{(void*)0,&g_73},{(void*)0,&g_73},{&g_5,&g_5},{&g_73,(void*)0},{&g_73,(void*)0},{&g_73,&g_5},{&g_5,&g_73},{(void*)0,&g_73},{(void*)0,&g_73},{&g_5,&g_5}};
    int i, j;
    for (p_51.f2 = 11; (p_51.f2 < 7); p_51.f2 = safe_sub_func_int16_t_s_s(p_51.f2, 6))
    {
        (**g_71) = (*g_72);
        if ((***p_53))
            continue;
    }
    (**p_49) = (**p_49);
    (**p_49) = l_76[2][1];
    return g_34[0][0][2].f1;
}







static short func_56(unsigned p_57, int * p_58, long long p_59, short p_60, char p_61)
{
    int **l_66 = &g_4;
    (*l_66) = &g_5;
    return (**l_66);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_34[i][j][k].f0, "g_34[i][j][k].f0", print_hash_value);
                transparent_crc(g_34[i][j][k].f1, "g_34[i][j][k].f1", print_hash_value);
                transparent_crc(g_34[i][j][k].f2, "g_34[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_85[i].f0, "g_85[i].f0", print_hash_value);
        transparent_crc(g_85[i].f1, "g_85[i].f1", print_hash_value);
        transparent_crc(g_85[i].f2, "g_85[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_358[i][j][k], "g_358[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_476[i], "g_476[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
