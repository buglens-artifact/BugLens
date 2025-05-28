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
   char f1;
   unsigned char f2;
   unsigned f3;
   unsigned long long f4;
};


static long long g_19 = 0x927213EC752F67D5LL;
static short g_75 = 0L;
static int g_77 = 0xEB3E1984L;
static int *g_76[10][7] = {{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,(void*)0,(void*)0,(void*)0},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,(void*)0,&g_77,&g_77,&g_77,(void*)0,(void*)0},{&g_77,&g_77,&g_77,&g_77,&g_77,(void*)0,&g_77},{&g_77,(void*)0,(void*)0,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,(void*)0,&g_77,&g_77,(void*)0,(void*)0,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,(void*)0,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77}};
static unsigned g_118 = 0x2964CB19L;
static unsigned char g_122 = 0UL;
static unsigned char g_128 = 251UL;
static unsigned char *g_127 = &g_128;
static int g_158 = 0xAF5ADCE7L;
static unsigned short g_162 = 0xC27AL;
static long long g_164 = 0x8DC00671E2B228E0LL;
static long long g_176 = 0x3F65977C529044EALL;
static char g_202 = (-8L);
static unsigned char g_210[3][1][7] = {{{1UL,0UL,0UL,0UL,0UL,1UL,0UL}},{{0UL,1UL,1UL,0UL,0UL,0UL,1UL}},{{0x85L,0x85L,1UL,0UL,1UL,0x85L,0x85L}}};
static int **g_224 = (void*)0;
static unsigned g_242 = 0xAC70E9CBL;
static char *g_247 = &g_202;
static long long *g_271 = (void*)0;
static long long **g_270[6] = {&g_271,&g_271,&g_271,&g_271,&g_271,&g_271};
static long long **g_273 = &g_271;
static int g_308 = 0xF7487D38L;
static int g_338 = 0x636825E6L;
static unsigned long long g_339 = 0x753A32646635DCA3LL;
static short g_355 = 0x35E1L;
static short g_358 = 0xF284L;
static unsigned long long g_383[3] = {0x0F51D359E2882098LL,0x0F51D359E2882098LL,0x0F51D359E2882098LL};
static int *g_384 = (void*)0;
static unsigned char g_394[10][10][2] = {{{1UL,0xC3L},{255UL,0x8AL},{0UL,0UL},{3UL,0x84L},{0xFAL,0xF2L},{1UL,2UL},{0x8AL,0UL},{255UL,0x2CL},{2UL,0xA9L},{1UL,250UL}},{{8UL,3UL},{0UL,0x46L},{0xD5L,9UL},{0x0DL,9UL},{0xD5L,0x46L},{0UL,3UL},{8UL,250UL},{1UL,0xA9L},{2UL,0x2CL},{255UL,0UL}},{{0x8AL,3UL},{0xC3L,9UL},{0xFFL,1UL},{250UL,255UL},{0x92L,255UL},{9UL,252UL},{0xD5L,0x8AL},{247UL,0UL},{9UL,0xF2L},{255UL,0xC0L}},{{0UL,0xA9L},{246UL,2UL},{1UL,0x3CL},{0xA9L,1UL},{0x46L,1UL},{0xC0L,0xBCL},{0x84L,0x2CL},{0x9CL,0x9CL},{0x0AL,0xE9L},{255UL,246UL}},{{0x55L,8UL},{255UL,0x55L},{0xDFL,255UL},{0xDFL,0x55L},{255UL,8UL},{0x55L,246UL},{255UL,0xE9L},{0x0AL,0x9CL},{0x9CL,0x2CL},{0x84L,0xBCL}},{{0xC0L,1UL},{0x46L,1UL},{0xA9L,0x3CL},{1UL,2UL},{246UL,0xA9L},{0UL,0xC0L},{255UL,0xF2L},{9UL,0UL},{247UL,0x8AL},{0xD5L,252UL}},{{9UL,255UL},{0x92L,255UL},{250UL,1UL},{0xFFL,9UL},{0xC3L,3UL},{255UL,0UL},{0xE9L,0UL},{1UL,1UL},{2UL,0x8AL},{0x3CL,0x53L}},{{0x2CL,255UL},{0UL,0x46L},{0xA5L,0x46L},{0UL,255UL},{0x2CL,0x53L},{0x3CL,0x8AL},{0UL,9UL},{0UL,0x63L},{246UL,0x0BL},{1UL,1UL}},{{0x84L,250UL},{0xDFL,8UL},{0x53L,255UL},{1UL,1UL},{247UL,1UL},{0x7EL,0xB4L},{0xC0L,0x3CL},{250UL,3UL},{0xFAL,0xC3L},{0xA9L,0xF2L}},{{0xFFL,2UL},{8UL,0UL},{0xF2L,0x0AL},{0x55L,0UL},{0xC3L,0x92L},{0x0DL,255UL},{250UL,250UL},{0x46L,246UL},{255UL,0xFFL},{252UL,255UL}}};
static short *g_409 = (void*)0;
static char g_420[2] = {8L,8L};
static union U0 g_431 = {0x2BL};
static unsigned long long g_442 = 0x08BEC18352C00982LL;
static unsigned char **g_541[10][6] = {{&g_127,&g_127,&g_127,(void*)0,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127,(void*)0},{(void*)0,&g_127,&g_127,&g_127,(void*)0,(void*)0},{&g_127,(void*)0,(void*)0,(void*)0,(void*)0,&g_127},{&g_127,&g_127,&g_127,(void*)0,&g_127,&g_127},{&g_127,&g_127,(void*)0,(void*)0,(void*)0,(void*)0},{&g_127,&g_127,(void*)0,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,(void*)0,(void*)0,(void*)0},{&g_127,&g_127,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,(void*)0,&g_127,&g_127,(void*)0}};
static unsigned char ***g_540 = &g_541[1][1];
static unsigned g_544 = 0x58F22AEDL;
static union U0 *g_546 = &g_431;
static short g_555[5][7][6] = {{{1L,(-1L),0L,(-3L),0xA6C9L,1L},{0x7596L,0xBCC1L,0xD76FL,(-3L),0L,0x8B57L},{1L,0xF57DL,0L,0x8B57L,1L,0L},{(-1L),0L,0x7A74L,0L,0xF57DL,(-1L)},{1L,0xA6C9L,9L,0x5528L,0x7713L,0xC657L},{0L,(-2L),(-1L),(-1L),1L,0x9EA3L},{(-5L),1L,1L,1L,1L,1L}},{{(-6L),(-6L),(-3L),(-10L),0L,0L},{0L,0x1450L,0xA6C9L,0x9EA3L,(-1L),(-3L)},{0xD76FL,0L,0xA6C9L,(-1L),(-6L),0L},{0L,(-1L),(-3L),5L,0L,1L},{1L,(-3L),1L,(-1L),0L,5L},{1L,0x7596L,0x0F59L,(-1L),0x7713L,(-1L)},{0x7713L,0x5785L,0xF57DL,0x8B57L,(-1L),0x5528L}},{{0xF57DL,0L,(-5L),0x7A74L,(-5L),0L},{1L,(-8L),0x7713L,0x9EA3L,0x5528L,0L},{0L,1L,(-1L),0L,0L,1L},{0xA6C9L,1L,(-1L),0L,0x5528L,(-2L)},{0x3738L,(-8L),0x7A74L,0L,(-5L),0L},{(-8L),0L,0L,(-3L),(-1L),0L},{0x9EA3L,0x5785L,0L,1L,0x7713L,0x7596L}},{{0L,0x7596L,(-3L),0x3738L,0L,(-5L)},{(-10L),(-3L),(-6L),(-6L),(-3L),(-10L)},{1L,0x5528L,0xD76FL,0L,0L,0L},{0L,(-6L),0x7596L,(-1L),0x7A74L,0x1450L},{0L,(-10L),(-1L),0L,0xA6C9L,(-1L)},{1L,0L,0x9EA3L,(-6L),1L,7L},{1L,0x7596L,0x8B57L,0xBCC1L,(-10L),0L}},{{0xF57DL,0x5528L,0L,(-10L),9L,(-5L)},{0L,0L,7L,1L,5L,0x9EA3L},{0L,(-5L),0x7A74L,(-5L),0L,0xF57DL},{0xBCC1L,5L,(-1L),0x7A74L,0xF57DL,(-1L)},{0x8B57L,(-6L),0L,5L,0L,(-1L)},{9L,0L,(-1L),0L,(-1L),0xF57DL},{0L,0xA6C9L,0x7A74L,1L,(-1L),0x9EA3L}}};
static unsigned *g_630 = &g_242;
static unsigned **g_629 = &g_630;
static unsigned ***g_628 = &g_629;
static unsigned g_657 = 0x58B19664L;
static long long g_658 = 0xF6AEFDF645647216LL;
static union U0 ***g_668 = (void*)0;
static unsigned short g_678 = 0xBBFCL;
static unsigned g_694 = 4294967292UL;
static int g_782 = 0x139EB633L;
static unsigned char ***g_797 = &g_541[1][1];
static unsigned g_899 = 0x25B8597FL;
static unsigned g_910 = 0xD4CE0CC9L;
static unsigned char g_965[9] = {0x85L,0x85L,0x85L,0x85L,0x85L,0x85L,0x85L,0x85L,0x85L};
static unsigned long long ***g_986 = (void*)0;
static union U0 ****g_1042 = (void*)0;
static short **g_1046 = (void*)0;
static short ***g_1045 = &g_1046;
static int ***g_1135 = &g_224;
static int ****g_1134 = &g_1135;
static short g_1149 = 0L;
static unsigned long long g_1167 = 18446744073709551615UL;
static unsigned *g_1202 = &g_118;
static unsigned **g_1201 = &g_1202;
static char g_1209 = 0L;
static short g_1260 = (-1L);



static unsigned long long func_1(void);
static char func_4(union U0 p_5, unsigned char p_6);
static union U0 func_7(unsigned p_8, int p_9, unsigned long long p_10, unsigned p_11);
static unsigned func_12(unsigned long long p_13, unsigned p_14, unsigned char p_15, short p_16, char p_17);
static unsigned char func_20(unsigned long long p_21, unsigned short p_22, unsigned char p_23, unsigned p_24, union U0 p_25);
static unsigned char func_27(unsigned p_28, long long p_29, long long p_30, long long p_31, short p_32);
static unsigned long long func_36(char p_37, union U0 p_38, long long p_39);
static char func_40(long long p_41, unsigned long long p_42, unsigned p_43, unsigned p_44, union U0 p_45);
static unsigned func_50(unsigned long long p_51, char p_52, int p_53, char p_54, int p_55);
static int func_62(char p_63, int p_64, long long p_65);
static unsigned long long func_1(void)
{
    int l_18 = 0x8B0D193EL;
    unsigned l_26 = 0UL;
    unsigned long long l_33 = 18446744073709551615UL;
    union U0 l_570 = {0x39L};
    unsigned l_575 = 1UL;
    int l_1141 = (-4L);
    unsigned l_1145[2][9] = {{0xF1C67BF1L,0x7A7689DCL,0x7A7689DCL,0xF1C67BF1L,0x7A7689DCL,0x7A7689DCL,0xF1C67BF1L,0x7A7689DCL,0x7A7689DCL},{0UL,0x40969EF6L,0x40969EF6L,0UL,0x40969EF6L,0x40969EF6L,0UL,0x40969EF6L,0x40969EF6L}};
    unsigned long long l_1178 = 0x38D7CB638C460ECCLL;
    union U0 l_1181[7] = {{246UL},{1UL},{1UL},{246UL},{1UL},{1UL},{246UL}};
    unsigned char l_1249[3][7][7] = {{{249UL,0xD6L,0x10L,0x10L,0xD6L,249UL,6UL},{249UL,1UL,0xD1L,0xB3L,0x1FL,248UL,0xD1L},{1UL,0x7EL,1UL,0x10L,1UL,6UL,7UL},{0x4AL,246UL,0xB3L,1UL,0xB3L,246UL,0x4AL},{255UL,249UL,7UL,1UL,0xD6L,6UL,0xD6L},{246UL,0x64L,0x64L,246UL,249UL,248UL,1UL},{0x26L,0x5CL,7UL,1UL,1UL,7UL,0x5CL}},{{249UL,0x4AL,0xB3L,4UL,0x64L,1UL,1UL},{6UL,0x26L,1UL,0x26L,6UL,249UL,0xD6L},{0x1FL,248UL,0x4AL,4UL,0xD1L,4UL,0x4AL},{0xD6L,0xD6L,255UL,1UL,0x5CL,0x10L,7UL},{0x1FL,4UL,246UL,246UL,4UL,0x1FL,0xD1L},{6UL,255UL,0x26L,1UL,0x5CL,0x5CL,1UL},{249UL,1UL,249UL,1UL,0xD1L,0xB3L,0x1FL}},{{0x26L,255UL,6UL,0x10L,6UL,255UL,0x26L},{246UL,4UL,0x1FL,0x1FL,1UL,4UL,1UL},{0x26L,0x7EL,0x7EL,0x26L,0xD6L,1UL,1UL},{248UL,249UL,246UL,0x64L,0x64L,246UL,249UL},{0xD6L,0x5CL,249UL,0x10L,0x7EL,1UL,1UL},{4UL,248UL,0x64L,248UL,4UL,1UL,1UL},{255UL,1UL,0x5CL,0x10L,7UL,0x10L,0x5CL}}};
    long long l_1259 = (-1L);
    char *l_1270[3];
    short **l_1303 = &g_409;
    int l_1311 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1270[i] = &l_570.f1;
    if (((l_1141 &= (safe_rshift_func_uint8_t_u_s(((func_4(func_7(func_12(l_18, g_19, func_20(l_26, g_19, func_27(l_33, (safe_add_func_uint64_t_u_u(func_36(func_40(g_19, g_19, l_18, ((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((func_50(l_26, l_33, l_26, l_33, g_19) ^ l_26), (-1L))) || l_26), 0x4027L)) != l_18), l_570), l_570, l_575), l_33)), l_570.f2, l_33, g_420[0]), g_658, l_570), l_18, l_570.f1), l_570.f1, l_33, g_910), l_570.f0) || 0x4AL) < l_570.f2), g_338))) == 0x1E29322BL))
    {
        return g_158;
    }
    else
    {
        unsigned long long l_1142 = 0xFB9C5138AB184EAALL;
        int l_1148 = 0x57EB1AC8L;
        int *l_1150 = &g_77;
        unsigned long long l_1153 = 0UL;
        unsigned l_1164[7][9][4] = {{{7UL,4294967293UL,0UL,0x4E6F521EL},{4294967295UL,2UL,0xCE1B4623L,1UL},{0xF253613AL,0x4E6F521EL,0xC7342A49L,1UL},{0UL,2UL,4294967295UL,0x4E6F521EL},{0x2784754FL,4294967293UL,0x33D37278L,4294967293UL},{4294967292UL,0x9EE3342BL,0xC7342A49L,1UL},{4294967292UL,4294967288UL,7UL,4294967295UL},{4294967295UL,4294967293UL,0xD678F676L,4294967295UL},{4294967295UL,0xCC341177L,7UL,1UL}},{{4294967292UL,4294967295UL,0xC7342A49L,0x30DEB252L},{4294967292UL,2UL,0x33D37278L,4294967295UL},{0x2784754FL,4294967295UL,4294967295UL,4294967293UL},{0UL,4294967288UL,0xC7342A49L,0xB7D703EAL},{0xF253613AL,4294967288UL,0xCE1B4623L,4294967293UL},{0xC7342A49L,4294967293UL,0xFD5D58A6L,0xB7D703EAL},{7UL,4294967295UL,7UL,4294967294UL},{4294967295UL,0xB7D703EAL,4294967292UL,0xCC341177L},{4294967292UL,0xFED4CBCFL,0x9A2F683CL,0xB7D703EAL}},{{0x33D37278L,0x4E6F521EL,0x9A2F683CL,4294967293UL},{4294967292UL,0x30DEB252L,4294967292UL,0xA1C1A785L},{4294967295UL,0xD8764577L,7UL,0x4E6F521EL},{7UL,0x4E6F521EL,0xFD5D58A6L,4294967292UL},{0xC7342A49L,4294967295UL,4294967290UL,0xCC341177L},{4294967295UL,4294967292UL,0xD678F676L,0xCC341177L},{0xFD5D58A6L,4294967295UL,0x9A2F683CL,4294967292UL},{4294967295UL,0x4E6F521EL,0x4D28EE41L,0x4E6F521EL},{4294967292UL,0xD8764577L,0xD678F676L,0xA1C1A785L}},{{0x9D261B5EL,0x30DEB252L,7UL,4294967293UL},{0xC7342A49L,0x4E6F521EL,0xF253613AL,0xB7D703EAL},{0xC7342A49L,0xFED4CBCFL,7UL,0xCC341177L},{0x9D261B5EL,0xB7D703EAL,0xD678F676L,4294967294UL},{4294967292UL,4294967295UL,0x4D28EE41L,0xB7D703EAL},{4294967295UL,4294967293UL,0x9A2F683CL,0x4E6F521EL},{0xFD5D58A6L,0x30DEB252L,0xD678F676L,0xB96556E5L},{4294967295UL,0x30DEB252L,4294967290UL,0x4E6F521EL},{0xC7342A49L,4294967293UL,0xFD5D58A6L,0xB7D703EAL}},{{7UL,4294967295UL,7UL,4294967294UL},{4294967295UL,0xB7D703EAL,4294967292UL,0xB7D703EAL},{0x6AF59242L,0xB96556E5L,0xD678F676L,0x30DEB252L},{7UL,0x9EE3342BL,0xD678F676L,0xA75EC80AL},{0x6AF59242L,0x4E6F521EL,0x75C72339L,0xCC341177L},{7UL,4294967293UL,0x9D261B5EL,0x9EE3342BL},{0x9D261B5EL,0x9EE3342BL,0x9A2F683CL,0xD8764577L},{4294967295UL,0xA1C1A785L,0x2784754FL,0xB7D703EAL},{7UL,0xD8764577L,0x33D37278L,0xB7D703EAL}},{{0x9A2F683CL,0xA1C1A785L,0xD678F676L,0xD8764577L},{0xC7342A49L,0x9EE3342BL,4294967292UL,0x9EE3342BL},{0x6AF59242L,4294967293UL,0x33D37278L,0xCC341177L},{0xCE1B4623L,0x4E6F521EL,0x9D261B5EL,0xA75EC80AL},{4294967295UL,0x9EE3342BL,0x4D28EE41L,0x30DEB252L},{4294967295UL,0xB96556E5L,0x9D261B5EL,0xB7D703EAL},{0xCE1B4623L,0x30DEB252L,0x33D37278L,4294967292UL},{0x6AF59242L,0xA1C1A785L,4294967292UL,0x30DEB252L},{0xC7342A49L,0xA75EC80AL,0xD678F676L,0x9EE3342BL}},{{0x9A2F683CL,0x4E6F521EL,0x33D37278L,4294967294UL},{7UL,0x4E6F521EL,0x2784754FL,0x9EE3342BL},{4294967295UL,0xA75EC80AL,0x9A2F683CL,0x30DEB252L},{0x9D261B5EL,0xA1C1A785L,0x9D261B5EL,4294967292UL},{7UL,0x30DEB252L,0x75C72339L,0xB7D703EAL},{0x6AF59242L,0xB96556E5L,0xD678F676L,0x30DEB252L},{7UL,0x9EE3342BL,0xD678F676L,0xA75EC80AL},{0x6AF59242L,0x4E6F521EL,0x75C72339L,0xFED4CBCFL},{7UL,1UL,0x75C72339L,0xD8764577L}}};
        unsigned **l_1203 = (void*)0;
        union U0 *l_1257 = &g_431;
        int l_1288 = 0x24821627L;
        int l_1289 = (-6L);
        unsigned char *l_1294 = &l_570.f2;
        int l_1310[2][2];
        int **l_1314 = &g_76[3][6];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_1310[i][j] = 0xD40B7643L;
        }
        (*l_1150) = (l_1142 | l_1142);
        if (l_570.f1)
        {
            long long l_1151 = 1L;
            int *l_1152[9][6] = {{&l_18,&l_1148,(void*)0,&l_1148,(void*)0,&l_1148},{(void*)0,&l_18,&g_77,&l_1148,&l_1148,&g_77},{(void*)0,(void*)0,&l_1148,&l_1148,&l_1148,&l_1148},{&l_18,(void*)0,&l_18,&g_77,&l_1148,&l_1148},{&l_1148,&l_18,&l_18,&l_1148,(void*)0,&l_1148},{&l_1148,&l_1148,&l_1148,&l_1148,&l_1148,&g_77},{&l_1148,&l_1148,&g_77,&g_77,&l_1148,&l_1148},{&l_18,&l_1148,(void*)0,&l_1148,(void*)0,&l_1148},{(void*)0,&l_18,&g_77,&l_1148,&l_1148,&g_77}};
            union U0 *****l_1165 = &g_1042;
            unsigned long long *l_1166 = &l_1153;
            unsigned long long l_1185 = 0x75067707F86DF82ALL;
            char *l_1199 = &g_420[0];
            unsigned char l_1200 = 0x25L;
            int l_1204 = 0xC339B3F2L;
            unsigned char l_1234[7][2][2] = {{{9UL,246UL},{246UL,246UL}},{{9UL,0x98L},{1UL,0xB2L}},{{0x18L,9UL},{0UL,0x18L}},{{250UL,0UL},{250UL,0x18L}},{{0UL,9UL},{0x18L,0xB2L}},{{1UL,0x98L},{9UL,246UL}},{{246UL,246UL},{9UL,0x98L}}};
            unsigned char l_1290[8][1][1] = {{{0xE8L}},{{0xE8L}},{{0xACL}},{{0xE8L}},{{0xE8L}},{{0xACL}},{{0xE8L}},{{0xE8L}}};
            unsigned long long ****l_1293 = &g_986;
            short ***l_1297 = (void*)0;
            long long ***l_1308[1];
            long long **l_1309 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1308[i] = (void*)0;
            l_1148 = ((*l_1150) = (l_1151 <= (l_1153 &= (*l_1150))));
            if ((((safe_rshift_func_uint8_t_u_s((*l_1150), 7)) ^ (*l_1150)) == (safe_sub_func_uint16_t_u_u((((l_570.f2 & ((safe_mod_func_uint64_t_u_u(l_26, (safe_sub_func_uint64_t_u_u(((*l_1166) = (safe_mod_func_int64_t_s_s((l_1164[3][7][1] ^ (&g_668 != ((*l_1165) = (void*)0))), l_1145[1][4]))), l_33)))) || (*l_1150))) || 0xC11F094AL) | (*l_1150)), g_1167))))
            {
                int **l_1168 = &g_76[7][2];
                unsigned long long l_1182 = 0UL;
                (*l_1168) = l_1152[0][0];


                for (g_1167 = 0; (g_1167 >= 26); ++g_1167)
                {
                    int *l_1171 = &g_77;
                    long long *l_1179 = (void*)0;
                    long long *l_1180 = &l_1151;
                    l_1171 = &l_1148;

                    ;
                    l_1141 ^= ((*l_1171) = func_27((***g_628), l_575, (*l_1171), (*l_1171), (*l_1171)));
                    (*l_1150) ^= (safe_rshift_func_uint8_t_u_s((*l_1171), 7));
                    return l_26;


                }
                (*l_1150) = l_1185;
            }
            else
            {
                short l_1186 = 0xFA3CL;
                (*l_1150) = l_1186;
            }


            ;
            if ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*g_247) = (*g_247)), (safe_mod_func_int16_t_s_s((0UL != ((safe_rshift_func_uint8_t_u_s(((*g_127) = (safe_lshift_func_int8_t_s_u(((*l_1199) = (safe_sub_func_uint16_t_u_u(g_210[2][0][4], (-1L)))), ((-2L) || ((((-1L) < ((~((*l_1150) && l_1200)) & (g_1201 == l_1203))) < l_1204) >= (*l_1150)))))), 4)) > l_570.f1)), g_394[3][2][1])))), 0x8284L)))
            {
                int l_1217 = (-1L);
                union U0 l_1236 = {0x08L};
                for (g_339 = 23; (g_339 < 23); g_339 = safe_add_func_uint8_t_u_u(g_339, 9))
                {
                    unsigned *l_1210[1];
                    unsigned short *l_1215 = &g_162;
                    int l_1216 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1210[i] = &g_910;
                    l_1148 ^= (safe_rshift_func_uint16_t_u_u(func_12(g_1209, (((**g_628) = l_1210[0]) == l_1152[0][4]), (func_40((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((-5L), ((*l_1215) = g_338))), l_1216)), g_1167, (l_1217 && (*l_1150)), (*g_1202), l_1181[1]) | 4294967295UL), g_544, l_1217), l_18));

                    ;
                    for (g_1209 = 3; (g_1209 >= 0); g_1209 -= 1)
                    {
                        unsigned l_1218 = 18446744073709551614UL;
                        return l_1218;


                    }
                    return g_1209;


                }
                (*l_1150) = (&g_273 != &g_273);
                for (g_658 = 8; (g_658 > (-7)); --g_658)
                {
                    unsigned short l_1226 = 0x49C4L;
                    unsigned short l_1235[3][7][4] = {{{0x7D29L,1UL,0xDD41L,0xDD41L},{0xEF59L,0xEF59L,0x7D29L,0xDD41L},{0x1E58L,1UL,0x1E58L,0x7D29L},{0x1E58L,0x7D29L,0x7D29L,0x1E58L},{0xEF59L,0x7D29L,0xDD41L,0x7D29L},{0x7D29L,1UL,0xDD41L,0xDD41L},{0xEF59L,0xEF59L,0x7D29L,0xDD41L}},{{0x1E58L,1UL,0x1E58L,0x7D29L},{0x1E58L,0x7D29L,0x7D29L,0x1E58L},{0xEF59L,0x7D29L,0xDD41L,0x7D29L},{0x7D29L,1UL,0xDD41L,0xDD41L},{0xEF59L,0xEF59L,0x7D29L,0xDD41L},{0x1E58L,1UL,0x1E58L,0x7D29L},{0x1E58L,0x7D29L,0x7D29L,0x1E58L}},{{0xEF59L,0x7D29L,0xDD41L,0x7D29L},{0x7D29L,1UL,0xDD41L,0xDD41L},{0xEF59L,0xEF59L,0x7D29L,0xDD41L},{0x1E58L,1UL,0x1E58L,0x7D29L},{0x1E58L,0x7D29L,0x7D29L,0x1E58L},{0xEF59L,0x7D29L,0xDD41L,0x7D29L},{0x7D29L,1UL,0xDD41L,0xDD41L}}};
                    int i, j, k;
                    for (g_75 = 0; (g_75 >= 26); g_75++)
                    {
                        int *l_1223[4] = {&l_18,&l_18,&l_18,&l_18};
                        int **l_1224 = &l_1223[1];
                        int **l_1225 = &g_76[7][2];
                        unsigned short *l_1231 = (void*)0;
                        unsigned short *l_1232 = (void*)0;
                        unsigned short *l_1233 = (void*)0;
                        int i;
                        (*l_1150) |= 0xC23F6891L;
                        (*l_1225) = ((*l_1224) = l_1223[2]);
                        --l_1226;
                        (**l_1224) = ((safe_add_func_int8_t_s_s((-1L), func_40((0UL | 2L), l_1226, ((((g_678 = l_1217) != (g_162 = (((0x3E2E07C0A97A68C6LL < (((+(l_1234[2][1][1] && (*g_630))) == 0x59ED49E5L) || (*g_247))) == l_18) ^ (-9L)))) < g_555[2][2][0]) <= (*g_247)), l_1235[0][3][1], l_1236))) | l_1226);
                    }
                    if (l_18)
                        break;
                }


            }
            else
            {
                unsigned short l_1239 = 0xFF86L;
                long long *l_1242[4][8][8] = {{{&g_176,(void*)0,&g_19,&l_1151,&g_19,&g_19,&g_658,&l_1151},{&g_19,&g_176,&l_1151,&g_658,&g_176,&g_658,&l_1151,&g_176},{(void*)0,(void*)0,&g_19,&l_1151,&g_164,&g_658,(void*)0,&g_19},{&g_176,&g_176,&g_658,&g_164,(void*)0,(void*)0,(void*)0,&g_164},{&g_19,&g_164,&g_19,&g_658,&g_19,(void*)0,&l_1151,&g_164},{&g_19,(void*)0,&l_1151,&g_164,&g_164,&g_19,&g_19,&g_19},{&g_19,&l_1151,&g_658,&l_1151,&g_19,(void*)0,&g_176,&g_176},{&g_19,&l_1151,&g_164,&g_658,(void*)0,&g_19,&l_1151,&l_1151}},{{&g_176,(void*)0,&g_164,&g_176,&g_164,(void*)0,&g_176,&g_19},{(void*)0,&g_164,&g_658,&g_176,&g_176,(void*)0,&g_19,&l_1151},{&g_19,&g_176,&l_1151,&g_658,&g_176,&g_658,&l_1151,&g_176},{(void*)0,(void*)0,&g_19,&l_1151,&g_164,&g_658,(void*)0,&g_19},{&g_176,&g_176,&g_658,&g_164,(void*)0,(void*)0,(void*)0,&g_176},{&g_164,&g_176,&g_164,(void*)0,&g_176,&g_19,&g_19,&g_176},{&g_176,&g_19,&g_19,&g_176,&l_1151,&g_658,&g_176,&g_658},{&g_176,&g_164,&g_19,&g_164,&g_176,&l_1151,(void*)0,&l_1151}},{{&g_164,&g_164,&l_1151,(void*)0,&g_19,&g_658,&g_19,&g_164},{(void*)0,&g_19,&l_1151,&l_1151,&l_1151,&g_19,(void*)0,&g_658},{&g_19,&g_176,&g_19,&l_1151,(void*)0,&l_1151,&g_176,&g_164},{&g_164,&l_1151,&g_19,(void*)0,(void*)0,(void*)0,&g_19,&l_1151},{&g_19,&g_19,&g_164,&g_164,&l_1151,(void*)0,&g_19,&g_658},{(void*)0,&l_1151,&g_19,&g_176,&g_19,&l_1151,&g_19,&g_176},{&g_164,&g_176,&g_164,(void*)0,&g_176,&g_19,&g_19,&g_176},{&g_176,&g_19,&g_19,&g_176,&l_1151,&g_658,&g_176,&g_658}},{{&g_176,&g_164,&g_19,&g_164,&g_176,&l_1151,&g_19,&g_19},{&g_19,&g_658,&g_176,&g_19,&g_164,&l_1151,&g_658,&g_658},{&g_19,(void*)0,&g_176,&g_19,&g_176,(void*)0,&g_19,&l_1151},{&g_164,(void*)0,&g_176,&g_19,&g_19,&g_176,&l_1151,&g_658},{&g_19,&g_19,&g_658,&g_19,&g_19,&g_19,&g_658,&g_19},{&g_164,(void*)0,&g_19,&g_658,&g_176,&g_19,&g_164,&l_1151},{&g_19,&g_19,&g_176,(void*)0,&g_164,&g_176,&g_164,(void*)0},{&g_19,(void*)0,&g_19,&g_19,&l_1151,(void*)0,&g_658,(void*)0}}};
                int l_1243 = (-9L);
                int l_1244 = 0x931E8B05L;
                int *l_1252 = &l_1141;
                char *l_1271 = &l_1181[5].f1;
                int l_1287 = 0L;
                int i, j, k;
                if ((0x5CL ^ (!((safe_lshift_func_int8_t_s_u(l_1181[5].f0, l_1244)) != 0L))))
                {
                    int *l_1254 = &l_1148;
                    union U0 *l_1258 = (void*)0;
                    for (g_658 = (-22); (g_658 >= 7); ++g_658)
                    {
                        int **l_1253[2][7][1] = {{{&l_1152[0][0]},{&l_1152[0][0]},{&l_1152[0][0]},{&g_76[6][4]},{&g_76[6][4]},{&l_1152[0][0]},{&l_1152[0][0]}},{{&l_1152[0][0]},{&g_76[6][4]},{&g_76[6][4]},{&l_1152[0][0]},{&l_1152[0][0]},{&l_1152[0][0]},{&g_76[6][4]}}};
                        int i, j, k;
                        l_1254 = (g_76[5][2] = l_1252);

                        ;
                        (*l_1252) = ((*l_1150) ^= (safe_lshift_func_int16_t_s_s(((void*)0 == l_1199), (*l_1252))));
                    }


                    ;
                    l_1258 = l_1257;

                    ;
                }
                else
                {
                    unsigned short l_1267[4][8] = {{0UL,0x0E68L,0UL,0UL,0UL,0x0E68L,0UL,0UL},{0x0E68L,0UL,0x0E55L,0x0E55L,0UL,0x0E68L,3UL,0x0E68L},{0UL,0x0E68L,3UL,0x0E68L,0UL,0x0E55L,0x0E55L,0UL},{1UL,0x0E68L,0x0E68L,1UL,3UL,0UL,3UL,1UL}};
                    char **l_1272 = &l_1199;
                    int l_1273 = 0xBC3693E0L;
                    unsigned long long **l_1281 = &l_1166;
                    unsigned long long ***l_1280 = &l_1281;
                    unsigned l_1286[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_1286[i] = 0x818A709FL;
                    (*l_1252) = (l_1259 && ((g_1260 > (safe_sub_func_uint16_t_u_u((*l_1150), (safe_sub_func_int32_t_s_s((-10L), ((((l_1267[3][0] && ((safe_lshift_func_uint8_t_u_s(l_1267[3][0], (+(((l_1273 = (l_1270[1] == ((*l_1272) = l_1271))) || (0x5332L <= 65535UL)) >= (*l_1150))))) > l_1178)) && 1L) & 9UL) > 0xD5L)))))) && l_570.f1));

                    ;
                    for (g_694 = 0; (g_694 <= 44); g_694 = safe_add_func_uint16_t_u_u(g_694, 1))
                    {
                        char ***l_1282 = &l_1272;
                        char **l_1284[3][8] = {{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199}};
                        char ***l_1283 = &l_1284[2][0];
                        union U0 *l_1285 = &l_1181[2];
                        int i, j;
                        (*l_1150) = (safe_sub_func_int16_t_s_s(((l_1273 = 0xB0BC5BB45AA547FALL) || l_575), (*l_1150)));
                        if (l_1286[5])
                            break;
                    }
                    (*l_1252) = (*l_1150);
                }


                ;
                l_1290[3][0][0]++;
                (*l_1252) ^= ((l_1293 == &g_986) == (l_1294 != l_1294));
                for (l_1185 = 0; (l_1185 > 21); l_1185 = safe_add_func_int64_t_s_s(l_1185, 4))
                {
                    int l_1298 = (-1L);
                    (*l_1252) &= l_1298;
                }
            }


            ;
            l_1311 |= (((safe_rshift_func_int16_t_s_u((l_26 != (g_394[2][0][1] == l_18)), (safe_add_func_int32_t_s_s((l_1141 = ((void*)0 != l_1303)), (safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((((*l_1150) = ((((((l_1309 = (void*)0) != &g_271) >= (-1L)) <= ((*g_247) = l_1249[2][3][5])) <= g_965[8]) ^ (*l_1150))) == 0UL) == l_1181[5].f0), (***g_628))), l_1310[0][1])))))) | l_575) & l_1288);
        }
        else
        {
            int *l_1312 = &l_1141;
            int **l_1313 = &g_76[7][2];
            (*l_1313) = l_1312;


        }


        for (l_1141 = 0; l_1141 < 3; l_1141 += 1)
        {
            for (g_355 = 0; g_355 < 1; g_355 += 1)
            {
                for (l_1259 = 0; l_1259 < 7; l_1259 += 1)
                {
                    g_210[l_1141][g_355][l_1259] = 1UL;
                }
            }
        }
        (*l_1314) = &l_18;
    }



    ;
    ;

    ;
    return l_1141;


}







static char func_4(union U0 p_5, unsigned char p_6)
{
    int *l_979[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_980[3];
    unsigned l_981 = 18446744073709551611UL;
    unsigned long long ***l_984[1];
    unsigned long long ****l_985 = &l_984[0];
    int ***l_992 = (void*)0;
    int ****l_991 = &l_992;
    long long *l_993[8];
    int l_994 = 0x7D73904FL;
    short l_995 = 0x441EL;
    unsigned *l_1009 = (void*)0;
    union U0 **l_1057 = &g_546;
    union U0 ***l_1056 = &l_1057;
    unsigned short l_1080 = 7UL;
    long long l_1122 = (-8L);
    int l_1128 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_980[i] = 0L;
    for (i = 0; i < 1; i++)
        l_984[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_993[i] = (void*)0;
    l_981--;
    l_995 ^= ((((*l_985) = l_984[0]) == g_986) || ((func_12((safe_add_func_int16_t_s_s(p_6, ((g_210[0][0][1] < ((safe_add_func_uint16_t_u_u(0x8196L, g_394[1][2][0])) < (l_994 = (((p_5.f1 | (((*l_991) = &g_224) != (void*)0)) | p_5.f2) || p_5.f2)))) <= g_678))), p_5.f2, p_5.f0, p_5.f0, p_5.f2) && p_5.f1) < p_5.f0));

    ;
    for (g_358 = 28; (g_358 > 28); g_358 = safe_add_func_int16_t_s_s(g_358, 3))
    {
        unsigned **l_1004 = (void*)0;
        unsigned *l_1006 = &l_981;
        unsigned **l_1005 = &l_1006;
        unsigned *l_1008 = &l_981;
        unsigned **l_1007[4][9][7] = {{{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{(void*)0,&l_1008,&l_1008,(void*)0,(void*)0,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,(void*)0,&l_1008},{(void*)0,(void*)0,&l_1008,&l_1008,&l_1008,&l_1008,(void*)0},{&l_1008,(void*)0,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008,&l_1008},{(void*)0,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008},{(void*)0,&l_1008,&l_1008,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1008,(void*)0,&l_1008,&l_1008,(void*)0,(void*)0,&l_1008},{&l_1008,&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,(void*)0,&l_1008},{(void*)0,(void*)0,&l_1008,&l_1008,&l_1008,(void*)0,(void*)0},{(void*)0,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,(void*)0,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008}},{{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008},{(void*)0,&l_1008,&l_1008,&l_1008,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1008,&l_1008,&l_1008,(void*)0,&l_1008,&l_1008},{&l_1008,(void*)0,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,(void*)0,&l_1008,(void*)0,&l_1008,&l_1008},{(void*)0,(void*)0,(void*)0,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,(void*)0,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008}},{{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,(void*)0,(void*)0},{&l_1008,&l_1008,(void*)0,(void*)0,&l_1008,&l_1008,(void*)0},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,(void*)0,&l_1008},{&l_1008,&l_1008,&l_1008,(void*)0,&l_1008,(void*)0,&l_1008},{&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008,&l_1008},{&l_1008,(void*)0,&l_1008,&l_1008,(void*)0,&l_1008,&l_1008},{&l_1008,&l_1008,(void*)0,&l_1008,&l_1008,&l_1008,(void*)0},{&l_1008,(void*)0,(void*)0,&l_1008,&l_1008,(void*)0,&l_1008},{&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008,&l_1008}}};
        int l_1010 = 0x2D9D4525L;
        int l_1011[4][10][3] = {{{2L,(-1L),(-2L)},{8L,(-5L),(-5L)},{(-2L),2L,7L},{0xB8B4B287L,8L,0xE0917B62L},{(-2L),(-2L),8L},{8L,0xB8B4B287L,0x36C614B2L},{2L,(-2L),2L},{(-5L),8L,(-1L)},{(-1L),2L,2L},{(-1L),(-5L),0x36C614B2L}},{{0L,(-1L),8L},{(-1L),(-1L),0xE0917B62L},{(-1L),0L,7L},{(-5L),(-1L),(-5L)},{2L,(-1L),(-2L)},{8L,(-5L),(-5L)},{(-2L),2L,7L},{0xB8B4B287L,8L,0xE0917B62L},{(-2L),(-2L),8L},{8L,0xB8B4B287L,0x36C614B2L}},{{2L,(-2L),2L},{(-5L),8L,(-1L)},{(-1L),2L,2L},{(-1L),(-5L),0x36C614B2L},{0L,(-1L),8L},{(-1L),(-1L),0xE0917B62L},{(-1L),0L,7L},{(-5L),(-1L),(-5L)},{2L,(-1L),(-2L)},{8L,(-5L),(-5L)}},{{8L,(-1L),0L},{(-5L),0x0FEC40FEL,0x36C614B2L},{8L,8L,7L},{0x0FEC40FEL,(-5L),0xB8B4B287L},{(-1L),8L,(-1L)},{8L,0x0FEC40FEL,0xE0917B62L},{(-1L),(-1L),(-1L)},{0xE0917B62L,8L,0xB8B4B287L},{2L,(-1L),7L},{0xE0917B62L,0xE0917B62L,0x36C614B2L}}};
        union U0 l_1012 = {0UL};
        unsigned l_1038 = 4294967295UL;
        unsigned char ***l_1050[1];
        unsigned char l_1070 = 0x91L;
        short l_1077 = (-1L);
        long long l_1079 = 0x193C2A2FAA4E5A19LL;
        int l_1093[4][4][9] = {{{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L}},{{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L,(-2L),(-2L),0x1050E500L},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}},{{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}},{{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}}};
        int l_1111[2][4];
        int l_1113[3][7][10] = {{{1L,0L,(-7L),6L,(-4L),(-5L),1L,0xADEA7074L,0x5936F74EL,0xB1248BB2L},{0x5936F74EL,(-9L),0x77671CC3L,1L,0x6A920D77L,1L,0xEBE29A6DL,0x77671CC3L,0x5936F74EL,(-9L)},{0x6A920D77L,(-5L),(-9L),(-9L),0xA5261790L,1L,1L,0xA5261790L,(-9L),(-9L)},{0xA5261790L,0xA5261790L,(-7L),0L,0x54202587L,6L,0L,1L,0x54202587L,0x6A920D77L},{0x6A920D77L,0xB1248BB2L,0L,6L,0xCE1090B4L,(-9L),0L,0x5936F74EL,(-9L),0x77671CC3L},{0xADEA7074L,0xA5261790L,0xEBE29A6DL,(-7L),0x6A920D77L,0x54202587L,1L,0L,6L,0x54202587L},{(-9L),(-5L),0L,(-4L),(-9L),0xC4C64525L,0xEBE29A6DL,6L,6L,0xEBE29A6DL}},{{0x5936F74EL,(-9L),(-7L),(-7L),(-9L),0x5936F74EL,0x77671CC3L,0xEBE29A6DL,(-9L),0xA5261790L},{(-4L),(-7L),(-9L),6L,(-9L),(-7L),(-5L),0xCE1090B4L,0x54202587L,0xA7DF2794L},{(-4L),0x54202587L,0L,0L,0x6A920D77L,0x5936F74EL,0xA7DF2794L,(-5L),(-9L),0xCE1090B4L},{0x5936F74EL,0xA7DF2794L,(-5L),(-9L),0xCE1090B4L,0xC4C64525L,(-5L),0x54202587L,0x5936F74EL,0L},{(-9L),0xADEA7074L,0xEBE29A6DL,(-5L),1L,1L,(-5L),0xEBE29A6DL,0x6A920D77L,0xCE1090B4L},{0x6A920D77L,0L,0xA7DF2794L,(-4L),(-9L),0x77671CC3L,0xC4C64525L,(-4L),0x54202587L,0L},{(-9L),0xA5261790L,0x77671CC3L,0L,(-9L),0xADEA7074L,(-7L),0xC4C64525L,0x5936F74EL,0xCE1090B4L}},{{(-9L),0xC4C64525L,0L,(-9L),1L,(-7L),0xA7DF2794L,0xADEA7074L,1L,(-9L)},{(-9L),6L,(-9L),(-7L),(-4L),0xCE1090B4L,0xA7DF2794L,0xA7DF2794L,0xCE1090B4L,(-4L)},{0x6A920D77L,0xC4C64525L,0xC4C64525L,0x6A920D77L,(-9L),0xB1248BB2L,(-7L),0x54202587L,0xADEA7074L,0xB1248BB2L},{0xCE1090B4L,0xA5261790L,(-9L),0xEBE29A6DL,0xCE1090B4L,0x5936F74EL,0xC4C64525L,(-7L),0xADEA7074L,(-9L)},{0x54202587L,0L,0L,0x6A920D77L,0x5936F74EL,0xA7DF2794L,(-5L),(-9L),0xCE1090B4L,0xC4C64525L},{0xA5261790L,0x6A920D77L,0x77671CC3L,(-7L),0xCE1090B4L,0x6A920D77L,0xEBE29A6DL,(-5L),1L,1L},{0xA5261790L,0xB1248BB2L,0xA7DF2794L,(-9L),(-9L),0xA7DF2794L,0xB1248BB2L,1L,0xADEA7074L,0xA7DF2794L}}};
        unsigned l_1129 = 9UL;
        unsigned ****l_1139 = &g_628;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1050[i] = &g_541[9][3];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1111[i][j] = 1L;
        }
        l_1011[3][8][2] = func_20((((((*g_247) = (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((l_1010 = l_1010), 1L)), l_1011[3][8][2])), 0x4C719C1C742B404ALL))) >= p_6) && p_5.f2) >= p_5.f2), p_6, p_6, l_1011[3][8][2], l_1012);
        for (g_75 = 0; (g_75 > 12); g_75 = safe_add_func_uint32_t_u_u(g_75, 3))
        {
            union U0 **l_1015 = &g_546;
            int l_1020 = (-1L);
            int l_1033 = 0x15B220D6L;
            int l_1034[8][7] = {{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L},{3L,3L,1L,0x58A4720CL,0x071CE6E1L,0x58A4720CL,1L}};
            unsigned **l_1088 = &l_1006;
            unsigned char l_1108 = 0x44L;
            int i, j;
            (*l_1015) = &g_431;

            ;
            if ((((g_431.f4 = (l_1020 = (safe_mod_func_uint8_t_u_u(((***g_628) || l_1011[3][8][2]), ((safe_mod_func_uint8_t_u_u(((((void*)0 == &g_541[1][1]) > ((((g_202 && 0xABCDL) ^ 0x4B5BL) <= func_40(p_5.f1, p_5.f2, l_1011[0][3][0], g_158, l_1012)) && p_5.f2)) && p_6), l_1010)) & l_1012.f2))))) == p_5.f2) && p_5.f1))
            {
                short l_1024 = 5L;
                int l_1032[4][1][2];
                short **l_1044 = &g_409;
                short ***l_1043 = &l_1044;
                unsigned char ***l_1049 = (void*)0;
                int **l_1061[4][10][6] = {{{&g_384,&l_979[0],&l_979[0],&g_76[7][2],&g_76[2][2],(void*)0},{&l_979[6],&g_384,&l_979[2],&g_76[7][2],&g_384,&l_979[0]},{&g_384,(void*)0,(void*)0,(void*)0,&g_76[7][2],&l_979[2]},{&g_76[7][2],&g_384,&g_76[7][2],&g_76[9][6],&g_76[7][2],(void*)0},{&g_384,&g_76[4][0],&l_979[2],&l_979[0],&g_76[4][0],&l_979[0]},{&l_979[2],&g_384,(void*)0,&g_76[7][2],&g_76[6][3],&g_76[4][2]},{&g_76[9][5],&g_76[3][1],&g_384,&l_979[2],&l_979[6],&g_76[1][3]},{&g_76[9][5],&g_76[7][2],&l_979[3],&g_76[7][2],&l_979[0],&g_384},{(void*)0,&l_979[1],&g_76[7][2],&g_76[7][2],&g_76[4][2],&l_979[5]},{&g_384,&g_76[7][2],&l_979[5],&g_76[1][3],&g_76[3][4],&g_76[1][3]}},{{&g_384,(void*)0,&g_384,&g_76[7][2],&l_979[0],&l_979[5]},{&l_979[3],&l_979[0],&l_979[3],&g_76[5][6],&g_76[4][2],&g_384},{&g_384,&g_384,&g_76[7][2],&g_76[5][6],&g_76[7][2],&g_76[7][2]},{&l_979[3],&g_76[7][2],&g_76[9][5],&g_76[7][2],&g_76[7][2],&g_76[7][2]},{&g_384,&l_979[6],&g_76[7][2],&g_76[1][3],&l_979[1],&g_76[7][2]},{&g_384,&l_979[0],&g_76[7][2],&g_76[7][2],&l_979[0],&l_979[3]},{(void*)0,(void*)0,&g_384,&g_76[7][2],&g_76[9][6],&l_979[5]},{&g_76[9][5],&l_979[6],&g_76[5][6],&l_979[2],(void*)0,&l_979[6]},{&g_76[9][5],&g_76[7][2],&l_979[5],&g_76[7][2],&g_76[7][2],(void*)0},{(void*)0,&g_76[9][6],&g_384,&g_76[7][2],(void*)0,&g_384}},{{&g_384,&l_979[0],&l_979[2],&g_76[1][3],&g_384,&l_979[6]},{&g_384,&l_979[0],&g_384,&g_76[7][2],&g_76[3][4],&g_76[7][2]},{(void*)0,&g_76[7][2],&g_76[7][2],&g_76[7][2],&g_384,(void*)0},{&g_76[7][2],(void*)0,&l_979[5],&g_76[7][2],(void*)0,&g_76[7][2]},{(void*)0,&l_979[6],&l_979[6],&l_979[0],&g_384,&l_979[5]},{&g_76[7][2],&g_76[7][2],&g_76[1][3],&l_979[2],&l_979[0],&l_979[0]},{&g_76[7][2],&l_979[0],&l_979[5],&l_979[5],&l_979[0],&g_76[7][2]},{&l_979[2],&l_979[2],(void*)0,&l_979[0],(void*)0,&g_76[7][2]},{&g_76[1][3],&g_76[7][2],&g_76[7][2],&g_384,&l_979[0],&g_76[7][2]},{&g_76[1][3],&g_384,&g_384,&l_979[0],(void*)0,&g_76[5][6]}},{{&l_979[2],(void*)0,&l_979[0],&l_979[5],&l_979[1],&g_384},{&g_76[7][2],&g_76[7][2],(void*)0,&l_979[2],&g_384,&g_76[7][2]},{&g_76[7][2],&g_76[7][2],&g_76[7][2],&l_979[0],&l_979[0],&g_76[1][3]},{(void*)0,&g_76[4][2],(void*)0,&g_76[7][2],&l_979[1],&g_76[7][2]},{&g_76[7][2],&l_979[0],&l_979[2],&g_76[7][2],&g_76[7][2],&l_979[0]},{(void*)0,&g_384,&g_76[7][2],&l_979[0],(void*)0,&l_979[2]},{&g_76[7][2],&l_979[0],&l_979[6],&l_979[2],(void*)0,&l_979[0]},{&g_76[7][2],&g_76[7][2],&l_979[2],&l_979[5],&g_76[7][2],(void*)0},{&g_76[7][2],&g_76[7][2],&g_76[7][2],&g_76[7][2],&g_76[7][2],&l_979[0]},{&l_979[0],&l_979[0],&g_384,&g_76[7][2],&g_384,&g_384}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1032[i][j][k] = 0x79433E09L;
                    }
                }
                for (p_5.f3 = 0; (p_5.f3 > 10); p_5.f3 = safe_add_func_int64_t_s_s(p_5.f3, 7))
                {
                    char l_1023 = 8L;
                    int l_1025 = 0x15511E38L;
                    int l_1027 = 1L;
                    int l_1028 = 0xD0276F56L;
                    int l_1029[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1029[i] = 0x72683DB7L;
                    if (((void*)0 != &g_541[1][1]))
                    {
                        l_1020 = l_1023;
                    }
                    else
                    {
                        char l_1026 = (-7L);
                        int l_1030 = 3L;
                        int l_1031 = (-1L);
                        int l_1035 = 5L;
                        int l_1036 = 0x5E8455CFL;
                        int l_1037[5];
                        union U0 *****l_1041 = (void*)0;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1037[i] = 0L;
                        l_1038++;
                        l_1031 = ((g_1042 = &g_668) != &g_668);

                        ;
                        l_1034[4][1] |= (l_1043 != g_1045);
                    }
                    l_1034[0][4] = (((((safe_sub_func_uint64_t_u_u(g_383[1], g_176)) == (+(!p_5.f2))) < (0xB7400BD5L && (l_1033 &= 0L))) >= (l_1049 == l_1050[0])) && (((*g_630)++) | (safe_add_func_int32_t_s_s((!(l_1033 &= (safe_unary_minus_func_uint64_t_u(l_1025)))), (((void*)0 != l_1056) < 0xFF8CEBCB9B8DD922LL)))));
                    for (g_657 = (-5); (g_657 <= 50); g_657 = safe_add_func_uint8_t_u_u(g_657, 7))
                    {
                        unsigned l_1060 = 0x4120E1CAL;
                        if (l_1060)
                            break;
                        if (p_5.f0)
                            continue;
                        l_1033 |= (p_5.f1 && (+(*g_247)));
                    }
                }

                                l_1061[1][5][1] = &g_384;
            }
            else
            {
                unsigned short l_1073 = 0x153BL;
                int l_1075 = 0x282E2AD8L;
                int l_1076[10][6] = {{0x8AFF0DA1L,1L,(-3L),0xFC370A28L,0L,0x93802846L},{0x8AFF0DA1L,1L,0xFC370A28L,0L,1L,0xE746203DL},{0xE746203DL,0x51C8F25DL,(-1L),0L,0x3C182636L,0L},{0x8AFF0DA1L,0xD5D39DBBL,0x8AFF0DA1L,0xFC370A28L,1L,0L},{0x8AFF0DA1L,0xF26D839EL,7L,0L,0xF26D839EL,(-3L)},{0xE746203DL,0x3C182636L,0x93802846L,0L,8L,0xFC370A28L},{0x8AFF0DA1L,0L,0xE746203DL,0xFC370A28L,0xD5D39DBBL,(-1L)},{0x8AFF0DA1L,0x0047FDE7L,0L,0L,0x0047FDE7L,0x8AFF0DA1L},{0xE746203DL,8L,0L,0L,0x51C8F25DL,7L},{0x8AFF0DA1L,1L,(-3L),0xFC370A28L,0L,0x93802846L}};
                short l_1078 = 0xFCB8L;
                int i, j;
                for (g_242 = 0; (g_242 != 37); g_242++)
                {
                    union U0 *****l_1067 = &g_1042;
                    union U0 ******l_1066 = &l_1067;
                    int ***l_1068 = &g_224;
                    unsigned short *l_1069[1][8];
                    int l_1074 = 4L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_1069[i][j] = &g_162;
                    }
                    if (((0xF05ACFF7L != p_5.f1) | (safe_rshift_func_uint16_t_u_u((((*l_1066) = &g_1042) != &g_1042), (g_678 = (((*g_630) < (&g_224 == ((*l_991) = l_1068))) < ((!l_1020) && (((void*)0 == &g_541[1][1]) && 251UL))))))))
                    {
                        ++l_1070;
                        return p_5.f2;


                    }
                    else
                    {
                        l_1073 = p_5.f2;
                        if (l_1070)
                            continue;
                        l_1020 = p_6;
                    }

                    ;
                    l_1074 |= p_5.f1;
                }
                --l_1080;
                if (p_5.f2)
                    continue;
            }

            if (l_1012.f1)
                break;
            for (g_694 = 16; (g_694 != 34); g_694 = safe_add_func_uint16_t_u_u(g_694, 2))
            {
                unsigned short *l_1085 = &g_162;
                unsigned ***l_1089 = &l_1088;
                int l_1092 = 0xD1A5282BL;
                union U0 ****l_1099 = &g_668;
                int l_1114 = 0x110D148FL;
                int l_1115 = 1L;
                int l_1116 = 0xC5C38917L;
                int l_1117 = (-1L);
                int l_1120[7][4] = {{0x5DF801FCL,0x7085101DL,0x5DF801FCL,0x5DF801FCL},{0x7085101DL,0x7085101DL,(-7L),0x7085101DL},{0x7085101DL,0x5DF801FCL,0x5DF801FCL,0x7085101DL},{0x5DF801FCL,0x7085101DL,0x5DF801FCL,0x5DF801FCL},{0x7085101DL,0x7085101DL,(-7L),0x7085101DL},{0x7085101DL,0x5DF801FCL,0x5DF801FCL,0x7085101DL},{0x5DF801FCL,0x7085101DL,0x5DF801FCL,0x5DF801FCL}};
                short l_1121 = 0x7AFDL;
                unsigned l_1123[7][3][3] = {{{9UL,0x45798E75L,0x56A544A1L},{9UL,0x90BB68D7L,0UL},{0x90BB68D7L,9UL,0x56A544A1L}},{{0x45798E75L,9UL,0x90C106C6L},{0x6EFE94B7L,0x90BB68D7L,0x59AE3475L},{0x45798E75L,0x45798E75L,0x59AE3475L}},{{0x90BB68D7L,0x6EFE94B7L,0x90C106C6L},{9UL,0x45798E75L,0x56A544A1L},{9UL,0x90BB68D7L,0UL}},{{0x90BB68D7L,9UL,0x56A544A1L},{0x45798E75L,9UL,0x90C106C6L},{0x6EFE94B7L,0x90BB68D7L,0x59AE3475L}},{{0x45798E75L,0x45798E75L,0x59AE3475L},{0x90BB68D7L,0x6EFE94B7L,0x90C106C6L},{9UL,0x45798E75L,0x56A544A1L}},{{9UL,0x90BB68D7L,0UL},{0x90BB68D7L,9UL,0x56A544A1L},{0x45798E75L,9UL,0x90C106C6L}},{{0x6EFE94B7L,0x90BB68D7L,0x59AE3475L},{0x45798E75L,0x45798E75L,0x59AE3475L},{0x90BB68D7L,0x6EFE94B7L,0x90C106C6L}}};
                int i, j, k;
                l_1033 = ((((void*)0 != l_1085) <= ((safe_sub_func_int32_t_s_s(3L, (((*l_1089) = l_1088) == (void*)0))) | l_1033)) >= ((func_27((func_20((safe_rshift_func_int16_t_s_s(func_12(p_5.f0, func_20(l_1020, g_544, p_6, p_5.f0, p_5), p_5.f0, p_5.f1, l_1092), l_1092)), p_5.f0, p_5.f1, p_5.f1, p_5) || 0x60581AC9L), p_5.f2, l_1092, p_5.f1, p_5.f2) | (***g_628)) && (-7L)));
                if (p_5.f2)
                    break;
                if (l_1093[2][2][2])
                {
                    long long l_1098[4][7];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_1098[i][j] = 0x0DB2DCE36DC38E92LL;
                    }
                    for (l_1070 = 0; (l_1070 > 13); l_1070++)
                    {
                        int **l_1096 = (void*)0;
                        int **l_1097 = &g_384;
                        (*l_1097) = (void*)0;

                        ;
                    }
                    l_1010 &= (l_1098[3][2] || func_40(l_1011[1][8][1], l_1098[3][2], g_308, (l_1099 != &l_1056), p_5));
                    for (l_1012.f3 = (-8); (l_1012.f3 < 4); ++l_1012.f3)
                    {
                        int *l_1102 = &l_1011[3][8][2];
                        int **l_1103 = &g_76[7][1];
                        (*l_1103) = l_1102;
                        l_1034[3][0] |= (safe_sub_func_int64_t_s_s((l_1098[3][2] || 0x29L), (safe_lshift_func_int16_t_s_s(l_1010, 15))));
                        if (l_1108)
                            continue;
                    }

                                    }
                else
                {
                    char l_1109 = 0x58L;
                    int l_1110 = 0L;
                    int l_1112 = 0x2EBB2E74L;
                    int l_1118 = 0x6EB66FFAL;
                    int l_1119[3][6][6] = {{{(-1L),(-1L),0x69C4A5F8L,0x86A87027L,0xCBAB1C37L,0x86A87027L},{0x69C4A5F8L,(-1L),0x69C4A5F8L,0L,(-7L),0x461AF21AL},{(-1L),0L,0x86A87027L,(-10L),9L,9L},{(-10L),9L,9L,(-10L),0x86A87027L,0L},{(-1L),0x461AF21AL,(-7L),9L,0L,0x69C4A5F8L},{0L,(-1L),0x86A87027L,(-1L),0L,(-10L)}},{{0x69C4A5F8L,0L,(-7L),0x461AF21AL,(-1L),0xCBAB1C37L},{0xCBAB1C37L,(-1L),0L,0L,(-1L),0xCBAB1C37L},{0x461AF21AL,9L,(-7L),0L,0xCBAB1C37L,(-10L)},{(-1L),0x69C4A5F8L,0x86A87027L,0xCBAB1C37L,0x86A87027L,0x69C4A5F8L},{(-1L),(-10L),0xCBAB1C37L,0L,(-7L),9L},{0x461AF21AL,0xCBAB1C37L,(-1L),0L,0L,(-1L)}},{{0xCBAB1C37L,0xCBAB1C37L,(-1L),0x461AF21AL,(-7L),0L},{0x69C4A5F8L,(-10L),0L,(-1L),0x86A87027L,(-1L)},{0L,0x69C4A5F8L,0L,9L,0xCBAB1C37L,0L},{(-1L),9L,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),9L},{(-1L),0L,0xCBAB1C37L,9L,0L,0x69C4A5F8L}}};
                    int i, j, k;
                    --l_1123[1][0][1];
                    l_1118 |= (p_5.f1 >= (0UL != (!1L)));
                    for (g_431.f3 = 0; (g_431.f3 <= 2); g_431.f3 = safe_add_func_uint32_t_u_u(g_431.f3, 4))
                    {
                        l_1120[0][1] = p_6;
                    }

                }
            }

        }


        l_1129++;
        for (l_1012.f3 = 7; (l_1012.f3 != 37); l_1012.f3 = safe_add_func_uint16_t_u_u(l_1012.f3, 3))
        {
            unsigned char l_1138 = 1UL;
            unsigned *****l_1140 = &l_1139;
            l_1011[3][8][2] |= (l_1138 = ((l_1012.f3 >= (((void*)0 == g_1134) != p_5.f1)) && (safe_sub_func_int16_t_s_s(l_1012.f2, l_1129))));
            l_1011[3][8][2] = (g_77 != (((*l_1140) = l_1139) == (void*)0));
        }

            }

    ;
    return p_5.f0;
}







static union U0 func_7(unsigned p_8, int p_9, unsigned long long p_10, unsigned p_11)
{
    unsigned long long *l_969 = &g_383[1];
    long long ***l_970 = &g_270[0];
    union U0 *l_971 = &g_431;
    int l_972 = 0x19DB9283L;
    long long *l_973 = &g_164;
    unsigned short *l_974 = &g_162;
    int l_975 = 1L;
    short *l_976[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int l_977 = 0xB3D88CAFL;
    int *l_978 = &g_308;
    int i, j;
    (*l_978) = (((*l_969) = (((l_975 = func_20(((*l_969) &= 8UL), ((*l_974) = ((((*l_970) = (void*)0) != &g_271) && ((*l_973) ^= (l_972 |= (l_971 == &g_431))))), p_11, l_975, (*l_971))) ^ l_977) < p_10)) && 1L);
    return (*l_971);

    }







static unsigned func_12(unsigned long long p_13, unsigned p_14, unsigned char p_15, short p_16, char p_17)
{
    int *l_968 = &g_308;
    (*l_968) ^= (-1L);
    return (*g_630);
}







static unsigned char func_20(unsigned long long p_21, unsigned short p_22, unsigned char p_23, unsigned p_24, union U0 p_25)
{
    int *l_941 = &g_158;
    int l_960 = 0xE05C2869L;
    int l_961 = (-7L);
    (*l_941) = 9L;
    for (g_431.f0 = 0; (g_431.f0 <= 5); g_431.f0 += 1)
    {
        unsigned short l_942 = 1UL;
        (*l_941) ^= 0xD2F247B9L;
        if (p_22)
            break;
        return l_942;
    }

    for (p_24 = 0; (p_24 == 57); ++p_24)
    {
        int *l_945 = &g_308;
        int *l_946 = &g_77;
        int *l_947 = &g_308;
        int *l_948 = &g_308;
        int *l_949 = &g_77;
        int *l_950 = &g_77;
        int *l_951 = &g_158;
        int *l_952 = &g_308;
        int *l_953 = (void*)0;
        int l_954 = 0xD515140BL;
        int *l_955 = &g_77;
        int *l_956 = &g_308;
        int *l_957 = &g_158;
        int *l_958 = &g_158;
        int *l_959[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char l_962 = 254UL;
        int i;
        if ((*l_941))
            break;
        --l_962;
        g_965[1]++;
    }
    return p_25.f0;
}







static unsigned char func_27(unsigned p_28, long long p_29, long long p_30, long long p_31, short p_32)
{
    unsigned l_940 = 4294967295UL;
    l_940 = 0xD32F9BCEL;
    return (*g_127);
}







static unsigned long long func_36(char p_37, union U0 p_38, long long p_39)
{
    long long l_580[10][1] = {{6L},{0x93D4C53C1FAF5755LL},{6L},{0x93D4C53C1FAF5755LL},{6L},{0x93D4C53C1FAF5755LL},{6L},{0x93D4C53C1FAF5755LL},{6L},{0x93D4C53C1FAF5755LL}};
    unsigned short *l_581 = &g_162;
    int *l_584 = &g_158;
    int l_607 = 6L;
    unsigned long long l_612[3][2][2] = {{{0x5DC9BADBE6320F12LL,0x8A1A6BB1B385EB4DLL},{0x8A1A6BB1B385EB4DLL,0x5DC9BADBE6320F12LL}},{{0x8A1A6BB1B385EB4DLL,0x8A1A6BB1B385EB4DLL},{0x5DC9BADBE6320F12LL,0x8A1A6BB1B385EB4DLL}},{{0x8A1A6BB1B385EB4DLL,0x5DC9BADBE6320F12LL},{0x8A1A6BB1B385EB4DLL,0x8A1A6BB1B385EB4DLL}}};
    char *l_622 = &g_420[0];
    union U0 *l_647 = (void*)0;
    unsigned short l_683 = 0x2207L;
    int l_724 = 0xCA2ABF08L;
    int l_730 = 0xA1132C66L;
    int l_731 = 0x8012272FL;
    unsigned l_755 = 0xA8D32E4DL;
    unsigned l_803 = 0x2CD86A43L;
    int l_869 = (-1L);
    int l_906 = (-10L);
    int l_908[2][10][9] = {{{(-10L),0xF4E1E730L,0x3B3F3233L,(-9L),(-9L),0x3B3F3233L,0xF4E1E730L,(-10L),0xF4E1E730L},{5L,0xF049A14CL,0x3B3F3233L,0x3B3F3233L,0xF049A14CL,5L,(-9L),5L,0xF049A14CL},{5L,0xF4E1E730L,0xF4E1E730L,5L,(-10L),0xF049A14CL,(-10L),5L,0xF4E1E730L},{(-10L),(-10L),(-9L),0xF049A14CL,(-10L),0xF049A14CL,(-9L),(-10L),(-10L)},{0xF4E1E730L,5L,(-10L),0xF049A14CL,(-10L),5L,0xF4E1E730L,0xF4E1E730L,5L},{0xF049A14CL,5L,(-9L),5L,0xF049A14CL,0x3B3F3233L,0x3B3F3233L,0xF049A14CL,5L},{0xF4E1E730L,(-10L),0xF4E1E730L,0x3B3F3233L,(-9L),(-9L),0x3B3F3233L,0xF4E1E730L,(-10L)},{(-10L),0xF4E1E730L,0x3B3F3233L,(-9L),(-9L),0x3B3F3233L,0x3B3F3233L,5L,0x3B3F3233L},{0xF049A14CL,(-9L),(-10L),(-10L),(-9L),0xF049A14CL,(-10L),0xF049A14CL,(-9L)},{0xF049A14CL,0x3B3F3233L,0x3B3F3233L,0xF049A14CL,5L,(-9L),5L,0xF049A14CL,0x3B3F3233L}},{{5L,5L,(-10L),(-9L),0xF4E1E730L,(-9L),(-10L),5L,5L},{0x3B3F3233L,0xF049A14CL,5L,(-9L),5L,0xF049A14CL,0x3B3F3233L,0x3B3F3233L,0xF049A14CL},{(-9L),0xF049A14CL,(-10L),0xF049A14CL,(-9L),(-10L),(-10L),(-9L),0xF049A14CL},{0x3B3F3233L,5L,0x3B3F3233L,(-10L),(-10L),(-10L),(-10L),0x3B3F3233L,5L},{5L,0x3B3F3233L,(-10L),(-10L),(-10L),(-10L),0x3B3F3233L,5L,0x3B3F3233L},{0xF049A14CL,(-9L),(-10L),(-10L),(-9L),0xF049A14CL,(-10L),0xF049A14CL,(-9L)},{0xF049A14CL,0x3B3F3233L,0x3B3F3233L,0xF049A14CL,5L,(-9L),5L,0xF049A14CL,0x3B3F3233L},{5L,5L,(-10L),(-9L),0xF4E1E730L,(-9L),(-10L),5L,5L},{0x3B3F3233L,0xF049A14CL,(-10L),0x3B3F3233L,(-10L),0xF4E1E730L,0xF049A14CL,0xF049A14CL,0xF4E1E730L},{0x3B3F3233L,0xF4E1E730L,(-10L),0xF4E1E730L,0x3B3F3233L,(-9L),(-9L),0x3B3F3233L,0xF4E1E730L}}};
    long long l_933 = 0L;
    int i, j, k;
    (*l_584) = (((1UL == ((safe_add_func_uint8_t_u_u((--(*g_127)), l_580[2][0])) == 0xF9084B03L)) != (--(*l_581))) < l_580[5][0]);
    for (g_431.f4 = 22; (g_431.f4 < 36); ++g_431.f4)
    {
        unsigned short l_591[8][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
        int i, j;
        (*l_584) = (((safe_add_func_int8_t_s_s(0x89L, ((*l_584) ^ (safe_mod_func_int8_t_s_s((*g_247), l_591[4][1]))))) & p_37) <= (*g_247));
        for (g_158 = (-13); (g_158 > 9); ++g_158)
        {
            union U0 **l_595 = &g_546;
            union U0 ***l_594 = &l_595;
            int l_599 = (-7L);
            int l_600 = 0x24A449F2L;
            (*l_594) = &g_546;
            for (g_442 = (-24); (g_442 != 48); g_442 = safe_add_func_uint8_t_u_u(g_442, 1))
            {
                int **l_598 = &l_584;
                int *l_601 = &g_77;
                int *l_602 = &g_308;
                int *l_603 = &g_308;
                int *l_604 = &g_77;
                int *l_605 = &g_77;
                int *l_606 = (void*)0;
                int l_608 = (-7L);
                int *l_609 = &l_600;
                int *l_610 = (void*)0;
                int *l_611[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_611[i] = &l_600;
                (*l_598) = &g_308;

                ;
                --l_612[1][0][1];
            }
        }
        if (p_39)
            continue;
    }

        ;
    for (g_355 = 11; (g_355 < (-28)); g_355 = safe_sub_func_uint16_t_u_u(g_355, 1))
    {
        union U0 *l_617 = (void*)0;
        union U0 **l_618 = &g_546;
        union U0 **l_619 = (void*)0;
        union U0 **l_620 = &l_617;
        unsigned ***l_631[4] = {&g_629,&g_629,&g_629,&g_629};
        int l_638 = 1L;
        short **l_645 = &g_409;
        int l_646 = 1L;
        unsigned short *l_677 = &g_678;
        unsigned long long *l_701 = &g_431.f4;
        unsigned long long **l_700 = &l_701;
        int *l_721[1];
        long long **l_794 = &g_271;
        int i;
        for (i = 0; i < 1; i++)
            l_721[i] = &l_607;
        (*l_620) = ((*l_618) = l_617);

        ;
        if (p_39)
            break;
        if (p_38.f1)
        {
            char *l_621[5] = {&g_202,&g_202,&g_202,&g_202,&g_202};
            int *l_623 = (void*)0;
            int **l_624 = &l_623;
            int **l_625 = &l_584;
            short **l_642 = &g_409;
            short ***l_641 = &l_642;
            short **l_644 = &g_409;
            short ***l_643 = &l_644;
            unsigned long long l_692 = 0x2723EBA0AFCA26D4LL;
            int l_716 = 0xA6FA26B4L;
            int i;
            if (((((l_621[0] == l_622) > (((*l_624) = l_623) == ((*l_625) = &l_607))) || (safe_sub_func_int16_t_s_s((g_628 == l_631[2]), ((safe_sub_func_int32_t_s_s((l_638 = (safe_lshift_func_uint16_t_u_s(g_338, (safe_add_func_uint16_t_u_u(l_638, ((safe_lshift_func_int8_t_s_u(((l_646 = ((((*l_643) = ((*l_641) = &g_409)) == l_645) && 0x02003EC2L)) == 0UL), l_638)) == (*l_584))))))), (*l_584))) && (*l_584))))) & p_38.f1))
            {
                (*l_620) = l_647;
            }
            else
            {
                for (g_77 = 0; (g_77 == (-25)); g_77--)
                {
                    unsigned l_650 = 0x6FE423F2L;
                    l_650 &= 0xE3B05665L;
                }
            }

            ;
            for (g_431.f4 = 0; (g_431.f4 <= 2); g_431.f4 += 1)
            {
                (*l_584) = ((l_645 = &g_409) == (void*)0);
            }

                        if (((**l_625) = l_638))
            {
                int *l_660 = &g_308;
                unsigned short *l_680 = &g_678;
                long long *l_688 = (void*)0;
                unsigned long long *l_691 = &g_383[2];
                long long *l_693 = &l_580[6][0];
                if ((0x2FL || (((*l_584) <= g_308) > (safe_rshift_func_uint16_t_u_s((((l_646 = (&g_546 != (void*)0)) != (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(g_555[3][1][4], ((p_38.f1 >= (((((((((func_50(p_39, func_62((**l_625), g_657, p_38.f1), p_38.f2, p_38.f2, p_38.f0) & p_38.f2) && p_39) < l_638) >= l_638) && p_38.f0) | 255UL) != p_38.f1) == p_38.f0) > 1L)) < (*l_584)))), g_658))) ^ l_638), 0)))))
                {
                    unsigned l_659 = 0xB9D957ECL;
                    (*l_584) = p_37;
                    (*l_584) |= (l_638 > l_659);
                    g_76[2][6] = l_660;


                    if (p_38.f1)
                        break;
                }
                else
                {
                    unsigned l_665 = 1UL;
                    for (g_118 = 0; (g_118 < 52); g_118 = safe_add_func_uint16_t_u_u(g_118, 5))
                    {
                        union U0 ***l_670[2];
                        union U0 ****l_669 = &l_670[1];
                        unsigned short **l_679 = (void*)0;
                        char l_681 = 0x7AL;
                        long long *l_682[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_670[i] = &l_620;
                        for (i = 0; i < 2; i++)
                            l_682[i] = (void*)0;
                        (*l_625) = (*l_625);
                        if (p_38.f2)
                            continue;
                        (*l_584) = ((l_683 ^= ((safe_lshift_func_uint16_t_u_s(((-5L) && (l_665 && (safe_mod_func_uint16_t_u_u(l_646, ((g_668 != ((*l_669) = (void*)0)) & (((safe_lshift_func_int8_t_s_u(((*g_247) = (((((((*l_581) = g_339) == (safe_lshift_func_uint8_t_u_u(p_37, (safe_rshift_func_uint8_t_u_u(0x6FL, ((l_680 = l_677) == &g_678)))))) == p_37) ^ g_338) | 0xD703A9E512C68E19LL) >= (**g_629))), l_681)) ^ g_555[3][0][3]) & p_38.f2)))))), (*l_660))) && (*l_584))) && (*l_584));


                    }
                    for (g_442 = 0; (g_442 != 54); ++g_442)
                    {
                        int *l_686 = &l_646;
                        l_686 = (void*)0;

                        ;
                    }
                    for (g_176 = 1; (g_176 <= 5); g_176 += 1)
                    {
                        int *l_687 = &l_607;
                        (*l_625) = l_687;
                        if ((*l_687))
                            continue;
                        (*l_624) = (void*)0;
                    }
                }


                                ;
                for (l_607 = 0; (l_607 <= 0); l_607 += 1)
                {
                    for (p_38.f4 = 0; (p_38.f4 <= 1); p_38.f4 += 1)
                    {
                        int i, j, k;
                        (*l_625) = &g_158;

                        ;
                        return l_612[p_38.f4][l_607][(l_607 + 1)];


                    }

                                    }
                if (((l_638 < (l_688 == &p_39)) ^ (safe_sub_func_uint32_t_u_u(p_37, (func_50(((*l_691) = (~l_638)), (((*l_693) = (l_692 = ((void*)0 != &g_668))) | g_694), (*l_660), (*l_660), (*l_584)) && 0xD2L)))))
                {
                    return (*l_660);


                }
                else
                {
                    return (*l_660);


                }
            }
            else
            {
                unsigned l_699 = 2UL;
                union U0 l_715 = {255UL};
                l_646 |= p_37;
                for (g_176 = 5; (g_176 >= 0); g_176 -= 1)
                {
                    unsigned long long l_711 = 0x264E25CEC6D10529LL;
                    union U0 l_712 = {0xD9L};
                }
                (*l_584) = l_715.f1;
            }
        }
        else
        {
            long long l_717 = 0x7F54C27ABED9BD35LL;
            int l_718 = 0xB65E5A97L;
            int l_723[4];
            char l_785 = (-6L);
            int i;
            for (i = 0; i < 4; i++)
                l_723[i] = 0xC6285197L;
            l_718 ^= ((*l_584) >= l_717);
            for (g_164 = 2; (g_164 > (-29)); g_164 = safe_sub_func_uint64_t_u_u(g_164, 6))
            {
                int **l_722 = &g_76[1][0];
                int l_752 = 1L;
                int l_753 = 0x13252D26L;
                unsigned ***l_760 = &g_629;
                union U0 l_781 = {0xB8L};
                (*l_722) = l_721[0];
            }
            (*l_584) = (p_38.f1 != (safe_sub_func_uint8_t_u_u((p_39 && func_50(g_339, (*g_247), ((p_38.f2 < ((*l_584) = (((-1L) >= (*g_127)) == (p_38.f0 > func_40(p_39, g_694, g_782, p_38.f1, p_38))))) >= l_785), (*g_247), g_383[1])), 0x6EL)));

            ;
            (*l_584) = (*l_584);
        }

        ;
        l_730 |= (1L && (((**g_629) &= ((*l_584) = (p_38.f0 ^ func_50(g_420[0], ((0x89L | (((p_38.f1 <= (*g_247)) == (0L & (safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(p_38.f0, 9)), (safe_add_func_int64_t_s_s(((&g_271 != l_794) < (*g_247)), 0xFD569E5DEF81A458LL)))) & p_37), p_38.f0)))) | 0L)) || 65531UL), p_37, (*g_247), g_782)))) || p_39));
    }


        ;
    ;
    for (p_37 = 0; (p_37 <= 1); p_37 += 1)
    {
        unsigned l_798 = 1UL;
        unsigned *l_801 = &g_118;
        union U0 l_802[7] = {{0x80L},{0x80L},{255UL},{0x80L},{0x80L},{255UL},{0x80L}};
        int l_814 = 3L;
        unsigned **l_826 = &g_630;
        int *l_833 = &l_730;
        int l_858 = 0x90DC84AEL;
        unsigned l_896 = 9UL;
        int l_902[9][10][2] = {{{0x76E3C9DFL,0xC68A1DB0L},{0x03B87BE2L,0x76E3C9DFL},{5L,(-1L)},{5L,0x76E3C9DFL},{0x03B87BE2L,0xC68A1DB0L},{0x76E3C9DFL,(-8L)},{0x1E42CC4AL,0xF96E3725L},{8L,0L},{0L,(-1L)},{(-1L),(-1L)}},{{0xEA028707L,0x2B7220D2L},{7L,0x1E42CC4AL},{9L,0x6E241B4AL},{7L,0x0C4B123FL},{0xF96E3725L,1L},{1L,1L},{0x798FCCD2L,9L},{1L,1L},{(-1L),0x03B87BE2L},{0x94D73C75L,7L}},{{(-1L),0xC27376C1L},{0xC68A1DB0L,0xC27376C1L},{(-1L),7L},{0x94D73C75L,0x0C4B123FL},{0x6E241B4AL,0xF96E3725L},{1L,0x32DC0368L},{(-1L),0x03B87BE2L},{0xF96E3725L,(-8L)},{0x798FCCD2L,0xFA5E8EA7L},{0x1E42CC4AL,0x7FCEE06EL}},{{0x32DC0368L,1L},{0x5AAE4F43L,1L},{0x2B7220D2L,0L},{(-1L),(-1L)},{0x76E3C9DFL,0x76E3C9DFL},{0xC27376C1L,0x798FCCD2L},{1L,0x8E3FA000L},{0xEA028707L,0x0B9439C3L},{0x0C4B123FL,0xEA028707L},{0x94D73C75L,(-1L)}},{{0x94D73C75L,0xEA028707L},{0x0C4B123FL,0x0B9439C3L},{0xEA028707L,0x8E3FA000L},{1L,0x798FCCD2L},{0xC27376C1L,0x76E3C9DFL},{0x76E3C9DFL,(-1L)},{(-1L),0L},{0x2B7220D2L,1L},{0x5AAE4F43L,1L},{0x32DC0368L,0x7FCEE06EL}},{{0x1E42CC4AL,0xFA5E8EA7L},{0x798FCCD2L,(-8L)},{0xF96E3725L,0x03B87BE2L},{(-1L),0x32DC0368L},{1L,0xF96E3725L},{0x6E241B4AL,0x0C4B123FL},{1L,0x5AAE4F43L},{0xB3AE7300L,0xC68A1DB0L},{0x0B9439C3L,0xC68A1DB0L},{0xB3AE7300L,0x5AAE4F43L}},{{1L,0x0C4B123FL},{0x6E241B4AL,0xF96E3725L},{1L,0x32DC0368L},{(-1L),0x03B87BE2L},{0xF96E3725L,(-8L)},{0x798FCCD2L,0xFA5E8EA7L},{0x1E42CC4AL,0x7FCEE06EL},{0x32DC0368L,1L},{0x5AAE4F43L,1L},{0x2B7220D2L,0L}},{{(-1L),(-1L)},{0x76E3C9DFL,0xEA028707L},{0xC68A1DB0L,(-1L)},{1L,0x33C8B772L},{0x2B7220D2L,7L},{0xFA5E8EA7L,0x2B7220D2L},{1L,0x6E241B4AL},{1L,0x2B7220D2L},{0xFA5E8EA7L,7L},{0x2B7220D2L,0x33C8B772L}},{{1L,(-1L)},{0xC68A1DB0L,0xEA028707L},{0xEA028707L,0L},{0x6E241B4AL,0x76E3C9DFL},{1L,0xF96E3725L},{1L,1L},{(-1L),8L},{1L,(-1L)},{(-1L),0x8E3FA000L},{0x798FCCD2L,0x0C4B123FL}}};
        int i, j, k;
        if (func_40((((safe_rshift_func_int16_t_s_s(((void*)0 == g_797), 7)) || (((6UL > (((((*l_581) ^= (func_40(p_38.f0, (g_694 < 65531UL), l_798, ((*l_801) &= (safe_rshift_func_uint16_t_u_s(p_38.f2, (p_38.f1 || (*l_584))))), l_802[5]) >= p_39)) & 7UL) <= (*g_127)) && 5UL)) != l_803) < (*g_127))) & 6L), p_38.f1, l_802[5].f0, g_308, p_38))
        {
            int *l_806 = &l_607;
            int l_815 = 0xAAE85CE3L;
            int l_816[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int i;
            if (((*l_584) = (((((***g_628) = (0x0BL & 0xB9L)) <= 4294967295UL) == ((((*g_247) && (safe_rshift_func_uint8_t_u_u(p_39, (l_806 == (void*)0)))) < ((g_270[(p_37 + 3)] != g_270[(p_37 + 2)]) ^ 2L)) > 0x9EL)) > (*l_806))))
            {
                unsigned l_807 = 0x0E20C4CAL;
                int **l_810[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                ++l_807;
                g_76[7][2] = l_806;
            }
            else
            {
                unsigned long long l_819[10][10][2] = {{{0x753BF6FF4312F1A0LL,9UL},{1UL,0x753BF6FF4312F1A0LL},{18446744073709551613UL,1UL},{8UL,1UL},{1UL,3UL},{1UL,6UL},{0x8AD3F99BFAEC3D4ALL,1UL},{1UL,0x8DE63820DA7291C3LL},{0x5AC808158B92400DLL,1UL},{18446744073709551614UL,0x3A0A2AEA5DC6353BLL}},{{0x8DE63820DA7291C3LL,0x8DE63820DA7291C3LL},{18446744073709551615UL,18446744073709551615UL},{0x8AD3F99BFAEC3D4ALL,0x5415133DC624770CLL},{0x753BF6FF4312F1A0LL,3UL},{0x3A0A2AEA5DC6353BLL,0x753BF6FF4312F1A0LL},{8UL,0UL},{8UL,0x753BF6FF4312F1A0LL},{0x3A0A2AEA5DC6353BLL,3UL},{0x753BF6FF4312F1A0LL,0x5415133DC624770CLL},{0x8AD3F99BFAEC3D4ALL,18446744073709551615UL}},{{0xDBC654F72A374B39LL,0xF7DCC3336CEA912FLL},{0xF7DCC3336CEA912FLL,0x1A3DC8BC0AF0BB68LL},{18446744073709551610UL,9UL},{0x1709A958D75EC377LL,0xF7DCC3336CEA912FLL},{0x5415133DC624770CLL,7UL},{1UL,1UL},{0xCDCA5CF12FACABEELL,4UL},{9UL,0xCDCA5CF12FACABEELL},{18446744073709551615UL,0xEBB32909AD71D24CLL},{7UL,18446744073709551613UL}},{{9UL,0x6360162704E2CF8ALL},{18446744073709551613UL,1UL},{18446744073709551607UL,0x3A0A2AEA5DC6353BLL},{0x5415133DC624770CLL,0x1709A958D75EC377LL},{0xF7DCC3336CEA912FLL,9UL},{0x9E5275F51C307223LL,9UL},{0xF7DCC3336CEA912FLL,0x1709A958D75EC377LL},{0x5415133DC624770CLL,0x3A0A2AEA5DC6353BLL},{18446744073709551607UL,1UL},{18446744073709551613UL,0x6360162704E2CF8ALL}},{{9UL,18446744073709551613UL},{7UL,0xEBB32909AD71D24CLL},{18446744073709551615UL,0xCDCA5CF12FACABEELL},{9UL,4UL},{0xCDCA5CF12FACABEELL,1UL},{1UL,7UL},{0x5415133DC624770CLL,0xF7DCC3336CEA912FLL},{0x1709A958D75EC377LL,9UL},{18446744073709551610UL,0x1A3DC8BC0AF0BB68LL},{0xF7DCC3336CEA912FLL,0xF7DCC3336CEA912FLL}},{{0xDBC654F72A374B39LL,0x3A0A2AEA5DC6353BLL},{1UL,18446744073709551613UL},{18446744073709551613UL,4UL},{0x1A3DC8BC0AF0BB68LL,18446744073709551613UL},{18446744073709551615UL,1UL},{18446744073709551615UL,18446744073709551613UL},{0x1A3DC8BC0AF0BB68LL,4UL},{18446744073709551613UL,18446744073709551613UL},{1UL,0x3A0A2AEA5DC6353BLL},{0xDBC654F72A374B39LL,0xF7DCC3336CEA912FLL}},{{0xF7DCC3336CEA912FLL,0x1A3DC8BC0AF0BB68LL},{18446744073709551610UL,9UL},{0x1709A958D75EC377LL,0xF7DCC3336CEA912FLL},{0x5415133DC624770CLL,7UL},{1UL,1UL},{0xCDCA5CF12FACABEELL,4UL},{9UL,0xCDCA5CF12FACABEELL},{18446744073709551615UL,1UL},{0xDBC654F72A374B39LL,18446744073709551615UL},{4UL,0x9E5275F51C307223LL}},{{18446744073709551615UL,0x3A0A2AEA5DC6353BLL},{0xCDCA5CF12FACABEELL,9UL},{1UL,0x6C003BEC314BBD98LL},{0UL,4UL},{1UL,4UL},{0UL,0x6C003BEC314BBD98LL},{1UL,9UL},{0xCDCA5CF12FACABEELL,0x3A0A2AEA5DC6353BLL},{18446744073709551615UL,0x9E5275F51C307223LL},{4UL,18446744073709551615UL}},{{0xDBC654F72A374B39LL,1UL},{0x5415133DC624770CLL,7UL},{4UL,18446744073709551610UL},{7UL,0x3A0A2AEA5DC6353BLL},{18446744073709551613UL,0x1A3DC8BC0AF0BB68LL},{1UL,0UL},{0x6C003BEC314BBD98LL,4UL},{0x5AC808158B92400DLL,0x6360162704E2CF8ALL},{0UL,0UL},{18446744073709551613UL,9UL}},{{18446744073709551613UL,7UL},{18446744073709551615UL,18446744073709551610UL},{0x6360162704E2CF8ALL,18446744073709551615UL},{0x5415133DC624770CLL,18446744073709551607UL},{0x5415133DC624770CLL,18446744073709551615UL},{0x6360162704E2CF8ALL,18446744073709551610UL},{18446744073709551615UL,7UL},{18446744073709551613UL,9UL},{18446744073709551613UL,0UL},{0UL,0x6360162704E2CF8ALL}}};
                int i, j, k;
                (*l_806) = l_802[5].f2;
                for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                {
                    unsigned l_811 = 0xB7C11134L;
                    ++l_811;
                    for (g_164 = 0; (g_164 <= 2); g_164 += 1)
                    {
                        int *l_817 = &l_731;
                        int *l_818[3][8][9] = {{{&l_607,&l_607,&l_730,&l_607,&l_731,&g_158,&l_815,(void*)0,&l_730},{(void*)0,&l_816[3],&l_814,(void*)0,&l_607,&g_308,(void*)0,&l_731,&l_814},{&l_816[2],&l_816[3],&l_730,&l_814,(void*)0,&g_158,(void*)0,&l_814,&l_730},{&g_308,&g_308,&l_814,&l_731,&g_77,(void*)0,&g_158,&l_816[2],&g_158},{&g_308,&l_607,&l_814,&l_607,&l_816[4],(void*)0,&l_731,(void*)0,&l_814},{(void*)0,&g_308,&g_158,&g_77,&l_816[3],(void*)0,&l_816[3],&g_77,&g_158},{&l_730,&l_730,&l_814,(void*)0,&l_731,(void*)0,&l_816[4],&l_607,&l_814},{&g_308,(void*)0,&g_158,&l_816[2],&g_158,(void*)0,&g_77,&g_308,&g_158}},{{&l_607,&g_308,&l_814,&l_731,&l_607,(void*)0,&l_607,&l_731,&l_814},{&l_731,&l_731,&g_158,&g_308,&g_77,(void*)0,&g_158,&l_816[2],&g_158},{&g_308,&l_607,&l_814,&l_607,&l_816[4],(void*)0,&l_731,(void*)0,&l_814},{(void*)0,&g_308,&g_158,&g_77,&l_816[3],(void*)0,&l_816[3],&g_77,&g_158},{&l_730,&l_730,&l_814,(void*)0,&l_731,(void*)0,&l_816[4],&l_607,&l_814},{&g_308,(void*)0,&g_158,&l_816[2],&g_158,(void*)0,&g_77,&g_308,&g_158},{&l_731,&l_816[4],&l_816[2],&l_607,&l_607,&l_816[3],&l_607,&l_607,&l_816[2]},{&l_816[3],&l_816[3],&l_816[3],&l_731,&g_308,(void*)0,&g_77,&g_308,&l_816[3]}},{{&l_816[4],&l_731,&l_816[2],&g_308,&l_731,&l_816[3],(void*)0,&l_730,&l_816[2]},{&g_77,&g_158,&l_816[3],(void*)0,&l_816[2],(void*)0,&l_816[2],(void*)0,&l_816[3]},{&l_607,&l_607,&l_816[2],&l_730,(void*)0,&l_816[3],&l_731,&g_308,&l_816[2]},{&g_158,&g_77,&l_816[3],&g_308,&g_77,(void*)0,&g_308,&l_731,&l_816[3]},{&l_731,&l_816[4],&l_816[2],&l_607,&l_607,&l_816[3],&l_607,&l_607,&l_816[2]},{&l_816[3],&l_816[3],&l_816[3],&l_731,&g_308,(void*)0,&g_77,&g_308,&l_816[3]},{&l_816[4],&l_731,&l_816[2],&g_308,&l_731,&l_816[3],(void*)0,&l_730,&l_816[2]},{&g_77,&g_158,&l_816[3],(void*)0,&l_816[2],(void*)0,&l_816[2],(void*)0,&l_816[3]}}};
                        int i, j, k;
                        ++l_819[3][9][0];
                    }
                }
            }
        }
        else
        {
            union U0 **l_825 = &g_546;
            union U0 ***l_824 = &l_825;
            unsigned **l_827 = &g_630;
            union U0 ****l_830 = &g_668;
            long long *l_831 = &g_176;
            int *l_840 = &l_814;
            unsigned char l_867 = 0x8AL;
            if ((((safe_lshift_func_int16_t_s_u((((*l_824) = &l_647) == &g_546), (((l_798 | (l_826 != l_827)) != (safe_add_func_uint64_t_u_u((((*l_830) = l_824) == (void*)0), (func_40(((*l_584) = ((*l_831) = (&g_431 != &g_431))), g_431.f0, l_802[5].f1, g_77, l_802[3]) && (*l_584))))) && (-2L)))) ^ p_39) >= l_802[5].f0))
            {
                int *l_832[10] = {&g_308,&g_308,&l_730,&g_308,&g_308,&g_308,&g_158,&g_158,&g_308,&g_158};
                int i;
                l_833 = l_832[2];

                ;
            }
            else
            {
                unsigned l_848 = 0x5C57C856L;
                union U0 *l_868 = &l_802[5];
                for (g_657 = 0; (g_657 <= 1); g_657 += 1)
                {
                    char l_841 = 0xA2L;
                    int *l_842 = &g_77;
                    int *l_843 = &l_607;
                    int *l_844 = &l_607;
                    int *l_845 = (void*)0;
                    int *l_846 = &g_308;
                    int *l_847[4] = {&g_158,&g_158,&g_158,&g_158};
                    short *l_857 = &g_75;
                    int i;
                    for (l_803 = 0; (l_803 <= 0); l_803 += 1)
                    {
                        unsigned char l_834 = 249UL;
                        int **l_839[7][8][1] = {{{(void*)0},{&g_76[7][2]},{&l_833},{&l_833},{&l_833},{&g_76[7][2]},{(void*)0},{&g_384}},{{(void*)0},{&g_384},{&g_76[8][6]},{&g_384},{(void*)0},{&g_384},{(void*)0},{&g_76[7][2]}},{{&l_833},{&l_833},{&l_833},{&g_76[7][2]},{(void*)0},{&g_384},{(void*)0},{&g_384}},{{&g_76[8][6]},{&g_384},{(void*)0},{&g_384},{(void*)0},{&g_76[7][2]},{&l_833},{&l_833}},{{&l_833},{&g_76[7][2]},{(void*)0},{&g_384},{(void*)0},{&g_384},{&g_76[8][6]},{&g_384}},{{(void*)0},{&g_384},{(void*)0},{&g_76[7][2]},{&l_833},{&l_833},{&l_833},{&g_76[7][2]}},{{(void*)0},{&g_384},{(void*)0},{&g_384},{&g_76[8][6]},{&g_384},{(void*)0},{&g_384}}};
                        int i, j, k;
                        l_834++;
                        if (l_612[(p_37 + 1)][g_657][p_37])
                            break;
                        (*l_833) = ((safe_rshift_func_int8_t_s_s(l_580[(g_657 + 2)][l_803], 1)) >= ((+l_580[(l_803 + 4)][l_803]) & p_39));
                        l_840 = &l_814;
                    }
                    ++l_848;
                    (*l_842) = (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((p_39 >= (((safe_sub_func_int16_t_s_s(((void*)0 != &l_840), ((*l_857) ^= p_38.f1))) >= ((*g_247) >= 0xB9L)) | func_40(p_39, l_858, (++(*l_801)), (*l_844), g_431))), (*l_840))), p_38.f2));
                    for (p_38.f1 = 0; (p_38.f1 <= 1); p_38.f1 += 1)
                    {
                        (*l_833) &= (safe_mod_func_int32_t_s_s((func_50((safe_sub_func_int64_t_s_s((((*l_857) = (safe_rshift_func_uint8_t_u_u(func_40(p_37, l_848, p_38.f2, g_202, p_38), (*l_844)))) > (l_867 & ((((**g_668) = &p_38) == l_868) > g_555[3][0][3]))), 0xB8366073156BCBEALL)), (*g_247), p_39, p_37, g_339) != g_19), 0x808B1D8EL));

                        ;
                        return g_544;



                    }

                                    }
            }

            ;
            ;
            ;
            return l_869;



        }
        for (p_38.f3 = 0; (p_38.f3 <= 0); p_38.f3 += 1)
        {
            unsigned short l_870 = 0xA4B9L;
            unsigned l_871[5][1];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_871[i][j] = 8UL;
            }
            (*l_584) ^= l_870;
            for (g_162 = 0; (g_162 <= 0); g_162 += 1)
            {
                l_871[4][0]++;
            }
        }

                for (g_122 = 0; (g_122 <= 0); g_122 += 1)
        {
            int **l_874 = (void*)0;
            int **l_875 = &g_384;
            union U0 l_894[10][4] = {{{249UL},{0x22L},{247UL},{253UL}},{{251UL},{0UL},{251UL},{247UL}},{{3UL},{252UL},{0x36L},{3UL}},{{249UL},{247UL},{0x5EL},{252UL}},{{247UL},{0UL},{0x5EL},{0x5EL}},{{249UL},{249UL},{0x36L},{253UL}},{{3UL},{1UL},{251UL},{252UL}},{{251UL},{252UL},{247UL},{1UL}},{{3UL},{253UL},{0UL},{253UL}},{{253UL},{247UL},{0x22L},{249UL}}};
            unsigned long long l_898[10] = {0xE292F9182039F428LL,0x458F3584BCE98CB2LL,0xE292F9182039F428LL,0xE292F9182039F428LL,0x458F3584BCE98CB2LL,0xE292F9182039F428LL,0xE292F9182039F428LL,0x458F3584BCE98CB2LL,0xE292F9182039F428LL,0xE292F9182039F428LL};
            int l_901 = 0xBC894680L;
            int l_904[2][8][10] = {{{0xCA6CB620L,0xC8059985L,(-4L),0xD9D83FBEL,0x9526A793L,0x9BAC320FL,1L,1L,0xE704A89BL,6L},{(-1L),0xE39F9888L,0x0A168299L,0xC8059985L,0x9526A793L,0x98091A14L,0xCA6CB620L,0L,0x903052F2L,(-8L)},{0x9526A793L,1L,6L,0x9BAC320FL,(-10L),0L,(-10L),0x9BAC320FL,6L,1L},{1L,0L,0x655B100AL,0xE39F9888L,0xE704A89BL,0x903052F2L,0x9BAC320FL,0xD9D83FBEL,(-10L),0x74870877L},{(-4L),0x0A168299L,0x9BAC320FL,8L,0xCA6CB620L,0x903052F2L,0x98091A14L,0x6F9A1033L,0L,(-1L)},{1L,0xF8B92F3BL,0x3A5F3F3AL,0x6F9A1033L,6L,0L,0L,6L,0x6F9A1033L,0x3A5F3F3AL},{0x9526A793L,0x9526A793L,(-1L),0L,0x6F9A1033L,0x98091A14L,0x903052F2L,0xCA6CB620L,8L,0x9BAC320FL},{(-1L),0x6F9A1033L,0x74870877L,(-10L),0xD9D83FBEL,0x9BAC320FL,0xD9D83FBEL,0xE39F9888L,(-10L),(-1L)}},{{0L,0x74870877L,6L,6L,0L,0x9526A793L,0x903052F2L,0x9526A793L,0L,6L},{0x98091A14L,0x17ABE765L,0x98091A14L,0xD9D83FBEL,0x0A168299L,0L,0xC8059985L,0x74870877L,0L,0xE704A89BL},{0x6F9A1033L,0xE704A89BL,0x20FF6DC0L,0xE39F9888L,0x89B24843L,6L,0L,0x74870877L,0x81857A95L,0x9BAC320FL},{0xCA6CB620L,0x903052F2L,0x98091A14L,0x6F9A1033L,0L,(-1L),0x9526A793L,0x9526A793L,(-1L),0L},{(-4L),6L,6L,(-4L),0xE704A89BL,(-8L),0L,0xE39F9888L,0xF8B92F3BL,0x655B100AL},{0x903052F2L,(-10L),(-4L),0x89B24843L,0x6F9A1033L,0x0A168299L,6L,0L,0xF8B92F3BL,0x17ABE765L},{0x17ABE765L,0L,0xF8B92F3BL,(-4L),0x9BAC320FL,1L,(-1L),0x20FF6DC0L,(-1L),1L},{6L,0x6F9A1033L,0xCA6CB620L,0x6F9A1033L,6L,0x98091A14L,(-8L),1L,0x81857A95L,0x89B24843L}}};
            short l_934 = 0x78C0L;
            unsigned l_937 = 0xF658FC04L;
            int i, j, k;
            (*l_875) = &l_814;

            ;
            (*l_875) = &g_77;

            ;
            for (g_431.f4 = 0; (g_431.f4 <= 1); g_431.f4 += 1)
            {
                int *l_876 = &g_158;
                long long *l_893[10][3][8] = {{{&g_176,&g_176,&g_658,&g_658,&g_164,&g_164,&g_176,&g_176},{&g_658,&g_164,&g_176,&g_176,&g_164,&g_176,&g_164,&g_164},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_658,&g_164}},{{&g_176,&g_176,&g_176,(void*)0,(void*)0,&g_19,&g_176,&g_176},{&g_19,&g_164,(void*)0,(void*)0,(void*)0,&g_658,&g_658,&g_164},{(void*)0,(void*)0,&g_164,(void*)0,(void*)0,&g_19,(void*)0,&g_164}},{{&g_164,&g_658,(void*)0,&g_176,&g_176,&g_176,(void*)0,&g_658},{&g_658,&g_164,(void*)0,&g_164,&g_658,&g_164,&g_164,&g_176},{&g_658,&g_176,&g_164,(void*)0,&g_658,&g_176,&g_164,&g_658}},{{&g_19,(void*)0,(void*)0,&g_164,&g_658,&g_19,(void*)0,&g_164},{&g_658,&g_19,(void*)0,&g_164,(void*)0,(void*)0,(void*)0,(void*)0},{&g_176,&g_164,&g_164,&g_176,&g_164,&g_176,&g_658,(void*)0}},{{&g_164,&g_164,(void*)0,(void*)0,&g_658,(void*)0,&g_176,(void*)0},{&g_164,&g_164,&g_176,&g_19,(void*)0,(void*)0,&g_176,(void*)0},{&g_176,(void*)0,&g_164,&g_658,&g_176,&g_164,(void*)0,&g_176}},{{&g_176,(void*)0,&g_19,&g_176,&g_19,(void*)0,&g_176,(void*)0},{(void*)0,&g_19,(void*)0,&g_658,&g_164,(void*)0,&g_658,&g_658},{&g_19,&g_176,&g_658,&g_176,&g_164,(void*)0,&g_176,&g_176}},{{(void*)0,(void*)0,&g_164,&g_658,&g_19,(void*)0,&g_164,(void*)0},{&g_176,&g_19,&g_19,(void*)0,&g_176,&g_176,(void*)0,&g_19},{&g_176,&g_176,&g_658,&g_176,(void*)0,&g_658,&g_176,&g_19}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_176,&g_658,(void*)0,&g_19},{(void*)0,&g_176,&g_176,&g_176,&g_164,&g_658,(void*)0,&g_19},{(void*)0,&g_164,&g_658,(void*)0,&g_19,(void*)0,&g_176,(void*)0}},{{&g_658,&g_658,&g_658,&g_658,&g_658,&g_164,(void*)0,&g_176},{(void*)0,&g_176,&g_176,&g_164,&g_658,&g_164,(void*)0,&g_658},{&g_176,&g_658,&g_176,&g_164,(void*)0,&g_176,&g_176,&g_176}},{{&g_658,&g_658,&g_164,&g_176,&g_19,&g_19,(void*)0,&g_176},{&g_176,&g_658,&g_164,&g_164,&g_164,&g_164,&g_658,&g_176},{(void*)0,&g_658,&g_176,&g_19,(void*)0,&g_164,&g_176,(void*)0}}};
                short *l_895 = &g_555[1][1][1];
                int l_903 = 0xF979AB9BL;
                int l_905 = 0x6B00451CL;
                int l_907 = 0x21E52E8BL;
                int l_909 = 0x3F030291L;
                int l_935 = 0x4495C941L;
                int l_936 = 0x63D6A2F0L;
                int i, j, k;
                l_876 = (*l_875);

                ;
            }

                    }
    }

    ;
    return g_657;


}







static char func_40(long long p_41, unsigned long long p_42, unsigned p_43, unsigned p_44, union U0 p_45)
{
    unsigned short l_571 = 65529UL;
    int *l_574 = &g_158;
    l_571--;
    (*l_574) |= 0xE9BBF40CL;
    return (*g_247);
}







static unsigned func_50(unsigned long long p_51, char p_52, int p_53, char p_54, int p_55)
{
    unsigned l_230 = 0UL;
    int l_240 = 0x767CE192L;
    long long l_277[5][3][8] = {{{0x2829210150271E23LL,0x5900326E57CC7FD1LL,0x2829210150271E23LL,1L,0L,(-10L),0x5B3E65E92AE67165LL,0x5B3E65E92AE67165LL},{0x5B3E65E92AE67165LL,0xE2CBAFA0411A2B8DLL,9L,9L,0xE2CBAFA0411A2B8DLL,0x5B3E65E92AE67165LL,0L,0x752D06EF46315E2CLL},{0x5B3E65E92AE67165LL,0x99A783E0FBC3B89FLL,8L,0xE2CBAFA0411A2B8DLL,0L,0xE2CBAFA0411A2B8DLL,8L,0x99A783E0FBC3B89FLL}},{{0x2829210150271E23LL,8L,(-10L),0xE2CBAFA0411A2B8DLL,0x752D06EF46315E2CLL,1L,1L,0x752D06EF46315E2CLL},{9L,0x752D06EF46315E2CLL,0x752D06EF46315E2CLL,9L,0x2829210150271E23LL,0x99A783E0FBC3B89FLL,1L,0x5B3E65E92AE67165LL},{8L,9L,(-10L),1L,(-10L),9L,8L,0L}},{{(-10L),9L,8L,0L,0x99A783E0FBC3B89FLL,0x99A783E0FBC3B89FLL,0L,8L},{0x752D06EF46315E2CLL,0xE2CBAFA0411A2B8DLL,0x2829210150271E23LL,(-10L),0x5900326E57CC7FD1LL,9L,0x99A783E0FBC3B89FLL,9L},{0L,0x752D06EF46315E2CLL,(-10L),0x752D06EF46315E2CLL,0L,0x5B3E65E92AE67165LL,0xE2CBAFA0411A2B8DLL,9L}},{{0x752D06EF46315E2CLL,0x5900326E57CC7FD1LL,0x99A783E0FBC3B89FLL,(-10L),(-10L),0x99A783E0FBC3B89FLL,0x5900326E57CC7FD1LL,0x752D06EF46315E2CLL},{0x2829210150271E23LL,0x5B3E65E92AE67165LL,0x99A783E0FBC3B89FLL,8L,0xE2CBAFA0411A2B8DLL,0L,0xE2CBAFA0411A2B8DLL,8L},{(-10L),1L,(-10L),9L,8L,0L,0x99A783E0FBC3B89FLL,0x99A783E0FBC3B89FLL}},{{0x99A783E0FBC3B89FLL,0x5B3E65E92AE67165LL,0x2829210150271E23LL,0x2829210150271E23LL,0x5B3E65E92AE67165LL,0x99A783E0FBC3B89FLL,8L,0xE2CBAFA0411A2B8DLL},{0x99A783E0FBC3B89FLL,0x5900326E57CC7FD1LL,0x752D06EF46315E2CLL,0x5B3E65E92AE67165LL,8L,0x5B3E65E92AE67165LL,0x752D06EF46315E2CLL,0x5900326E57CC7FD1LL},{(-10L),0x752D06EF46315E2CLL,0L,0x5B3E65E92AE67165LL,0xE2CBAFA0411A2B8DLL,9L,9L,0xE2CBAFA0411A2B8DLL}}};
    int l_286 = 0x83EAC6F1L;
    int l_288[2][9][2] = {{{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L}},{{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L}}};
    unsigned long long l_323 = 1UL;
    unsigned long long l_332 = 0x4687D50B3FAAC7D0LL;
    unsigned char **l_347 = (void*)0;
    int **l_387 = (void*)0;
    unsigned char l_396 = 0x2BL;
    int *l_402 = &l_240;
    int *l_454 = &l_288[1][0][0];
    unsigned long long l_461 = 18446744073709551612UL;
    unsigned *l_471 = &g_242;
    unsigned **l_470 = &l_471;
    int l_542 = 0x69CC5D38L;
    int l_543 = (-1L);
    short l_563 = 0x1774L;
    int l_564[5][7][7] = {{{1L,2L,2L,1L,(-5L),0x5102C4B7L,0L},{0xBE1B6DDEL,0xD014F9BBL,(-10L),1L,0x93BFBA75L,(-1L),0x667DC7CDL},{1L,1L,2L,0x7B9F1C2DL,0xEAA80080L,(-1L),0L},{1L,0L,(-1L),1L,0xEC66CD7CL,0L,0xEC66CD7CL},{1L,2L,(-2L),1L,0xEAA80080L,0x5102C4B7L,(-2L)},{0xBE1B6DDEL,0L,(-10L),1L,0x93BFBA75L,0L,0x667DC7CDL},{1L,1L,(-2L),0x7B9F1C2DL,(-5L),(-1L),(-2L)}},{{1L,0xD014F9BBL,(-1L),1L,0xEC66CD7CL,(-1L),0xEC66CD7CL},{1L,2L,2L,1L,(-5L),0x5102C4B7L,0L},{0xBE1B6DDEL,0xD014F9BBL,(-10L),1L,0x93BFBA75L,(-1L),0x667DC7CDL},{1L,1L,2L,0x7B9F1C2DL,0xEAA80080L,(-1L),0L},{1L,0L,(-1L),1L,0xEC66CD7CL,0L,0xEC66CD7CL},{1L,2L,(-2L),1L,0xEAA80080L,0x5102C4B7L,(-2L)},{0xBE1B6DDEL,0x72F8A2BCL,(-2L),0L,0xBE1B6DDEL,0xAD21F9F4L,0xF803319EL}},{{1L,(-5L),0x89FF5C02L,6L,1L,0x58D99282L,0x7B9F1C2DL},{(-1L),6L,0L,0L,1L,0x92A88409L,1L},{1L,0xFCA5F8ECL,0xFCA5F8ECL,1L,1L,1L,1L},{0xC8B079C3L,6L,(-2L),(-1L),0xBE1B6DDEL,0x92A88409L,0xF803319EL},{(-1L),(-5L),0xFCA5F8ECL,6L,1L,0x58D99282L,1L},{(-1L),0x72F8A2BCL,0L,(-1L),1L,0xAD21F9F4L,1L},{(-1L),0xFCA5F8ECL,0x89FF5C02L,1L,1L,1L,0x7B9F1C2DL}},{{0xC8B079C3L,0x72F8A2BCL,(-2L),0L,0xBE1B6DDEL,0xAD21F9F4L,0xF803319EL},{1L,(-5L),0x89FF5C02L,6L,1L,0x58D99282L,0x7B9F1C2DL},{(-1L),6L,0L,0L,1L,0x92A88409L,1L},{1L,0xFCA5F8ECL,0xFCA5F8ECL,1L,1L,1L,1L},{0xC8B079C3L,6L,(-2L),(-1L),0xBE1B6DDEL,0x92A88409L,0xF803319EL},{(-1L),(-5L),0xFCA5F8ECL,6L,1L,1L,0xB2C30C91L},{(-1L),0L,(-1L),0xD014F9BBL,0x46885AEDL,0x72F8A2BCL,0x46885AEDL}},{{(-1L),6L,0x5102C4B7L,1L,4L,0x89FF5C02L,0x8480B6FDL},{0L,0L,0x5963E669L,0L,0L,0x72F8A2BCL,(-2L)},{1L,1L,0x5102C4B7L,2L,(-1L),1L,0x8480B6FDL},{(-1L),(-1L),(-1L),0L,0x46885AEDL,6L,0x46885AEDL},{1L,6L,6L,1L,(-1L),0x89FF5C02L,0xB2C30C91L},{0L,(-1L),0x5963E669L,0xD014F9BBL,0L,6L,(-2L)},{(-1L),1L,6L,2L,4L,1L,0xB2C30C91L}}};
    int i, j, k;
    for (p_54 = (-11); (p_54 > (-30)); p_54--)
    {
        char *l_248 = &g_202;
        int l_269 = (-8L);
        long long **l_272 = &g_271;
        int l_275 = 0xA1AFCBC4L;
        int l_279 = 1L;
        int l_280[7] = {0x39F9090CL,0x39F9090CL,0x4BFBC94AL,0x39F9090CL,0x39F9090CL,0x4BFBC94AL,0x39F9090CL};
        int l_281[1][9];
        unsigned short l_333 = 65533UL;
        unsigned char l_361 = 0x03L;
        int *l_400 = &g_308;
        union U0 *l_430 = &g_431;
        char l_503 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_281[i][j] = (-1L);
        }
        for (p_55 = 11; (p_55 >= (-18)); --p_55)
        {
            unsigned long long l_258 = 0x6EF4EA06207C1DD5LL;
            int l_259 = (-1L);
            int l_261[10][6] = {{0xF7ADB667L,1L,1L,0xF7ADB667L,0x1B5B14B4L,0xF7ADB667L},{0xF7ADB667L,0x1B5B14B4L,0xF7ADB667L,1L,1L,0xF7ADB667L},{(-1L),(-1L),1L,0x49497A16L,1L,(-1L)},{1L,0x1B5B14B4L,0x49497A16L,0x49497A16L,0x1B5B14B4L,1L},{(-1L),1L,0x49497A16L,1L,(-1L),(-1L)},{0xF7ADB667L,(-1L),(-1L),1L,0x49497A16L,1L},{1L,0x49497A16L,1L,(-1L),(-1L),1L},{0x1B5B14B4L,0x1B5B14B4L,(-1L),0xF7ADB667L,(-1L),0x1B5B14B4L},{(-1L),0x49497A16L,0xF7ADB667L,0xF7ADB667L,0x49497A16L,(-1L)},{0x1B5B14B4L,(-1L),0xF7ADB667L,(-1L),0x1B5B14B4L,0x1B5B14B4L}};
            char l_320 = 8L;
            unsigned char **l_346[8][8] = {{&g_127,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127,(void*)0},{(void*)0,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127,(void*)0,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,(void*)0,&g_127,&g_127,&g_127},{&g_127,&g_127,(void*)0,(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,(void*)0,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,(void*)0,&g_127,&g_127,(void*)0,&g_127}};
            long long l_370 = 1L;
            int *l_395 = &l_240;
            int i, j;
        }
    }
    if ((p_54 || (safe_lshift_func_uint16_t_u_s(0x491AL, func_62(((1UL ^ (((((2UL ^ 0x015FL) >= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_454) && ((g_540 != (void*)0) < (!g_77))), (-1L))), l_542))) <= l_543) & p_52) < 1L)) && 18446744073709551615UL), p_55, g_544)))))
    {
        union U0 *l_545 = &g_431;
        int l_556 = 0L;
        int l_557 = 0x3DB1BC31L;
        int l_558 = (-8L);
        int l_559 = 2L;
        char l_560 = 0x30L;
        int l_561 = 1L;
        int l_562[6] = {0xF3435E34L,0xF3435E34L,0xF3435E34L,0xF3435E34L,0xF3435E34L,0xF3435E34L};
        unsigned l_565 = 18446744073709551615UL;
        int i;
        g_546 = l_545;

        ;
        for (g_431.f1 = (-10); (g_431.f1 > (-14)); g_431.f1 = safe_sub_func_int16_t_s_s(g_431.f1, 7))
        {
            int *l_549 = &g_158;
            int *l_550 = &l_288[0][3][0];
            int *l_551 = &l_288[0][4][1];
            int *l_552 = &l_288[0][4][0];
            int *l_553 = &l_288[0][4][0];
            int *l_554[6][3] = {{&l_286,&g_308,&g_77},{&g_308,&l_286,&l_286},{&g_77,&l_286,&g_308},{&l_543,&g_308,&g_77},{&g_77,&g_77,&g_77},{&g_308,&l_543,&g_308}};
            int i, j;
            ++l_565;
        }

    }
    else
    {
        for (p_55 = 0; (p_55 > (-1)); p_55--)
        {
            return p_51;
        }
        (*l_454) = (-1L);
    }

    return p_53;
}







static int func_62(char p_63, int p_64, long long p_65)
{
    int l_70[10] = {0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L,0x1067DCC3L};
    int l_82 = 0x44A95A47L;
    int *l_95[5][3][3] = {{{&l_82,&g_77,&g_77},{&g_77,&l_82,(void*)0},{&g_77,&l_82,&l_82}},{{(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77},{&g_77,(void*)0,&l_82}},{{&l_82,&g_77,(void*)0},{&l_82,&g_77,&g_77},{&g_77,&l_82,(void*)0}},{{&g_77,&l_82,&l_82},{(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77}},{{&g_77,(void*)0,&l_82},{&l_82,&g_77,(void*)0},{&l_82,&g_77,&g_77}}};
    int l_144 = (-3L);
    short l_147[2];
    unsigned long long l_172 = 7UL;
    unsigned l_196 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_147[i] = 0x7692L;
    if ((g_19 && p_65))
    {
        unsigned short l_73 = 0UL;
        int l_83 = 0x85393F1BL;
        int l_101 = (-5L);
        unsigned l_105 = 0xCE035960L;
        for (p_65 = 0; (p_65 == 10); ++p_65)
        {
            short *l_74 = &g_75;
            unsigned short l_84 = 0x44E9L;
            int l_103 = 0xF7409415L;
            int l_104 = (-1L);
            int l_116 = 0L;
            unsigned *l_117 = &l_105;
            unsigned char *l_121 = &g_122;
            unsigned char **l_129[4] = {&g_127,&g_127,&g_127,&g_127};
            int i;
            if ((((l_70[4] != p_65) > (safe_rshift_func_uint8_t_u_s(((l_73 > l_73) < p_64), g_19))) > (((*l_74) = (!g_19)) == p_63)))
            {
                int **l_78 = &g_76[7][0];
                int l_79 = 0x2B68169BL;
                int *l_80 = (void*)0;
                int *l_81[3][1][7];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_81[i][j][k] = (void*)0;
                    }
                }
                (*l_78) = g_76[7][2];
                --l_84;
                return p_64;
            }
            else
            {
                char l_89 = 1L;
                int *l_94 = &l_82;
                int **l_96 = &l_94;
                (*l_94) = ((g_75 != l_84) == ((p_65 != g_19) > ((((safe_rshift_func_uint16_t_u_u(g_19, 8)) == p_63) > l_89) != (safe_sub_func_uint64_t_u_u(l_70[8], (safe_mod_func_int16_t_s_s(p_63, g_75)))))));
                (*l_96) = l_95[0][1][1];

                ;
                for (p_63 = 0; (p_63 <= 6); p_63 += 1)
                {
                    unsigned l_97 = 3UL;
                    int l_102[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_102[i] = 0xDF25B48FL;
                    ++l_97;
                    for (l_97 = 0; (l_97 <= 2); l_97 += 1)
                    {
                        int l_100[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_100[i] = 0xED5A8D4EL;
                        ++l_105;
                        p_64 = 0xE2787FF9L;
                    }
                }
                for (l_103 = 10; (l_103 != (-12)); l_103 = safe_sub_func_uint32_t_u_u(l_103, 3))
                {
                    (*l_96) = &p_64;

                    ;
                }

                ;
            }
            if ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_75, ((0x5E5FL || (safe_add_func_uint16_t_u_u((((p_64 = l_116) && p_63) != ((g_118 &= ((*l_117) &= l_84)) != ((safe_sub_func_uint8_t_u_u((++(*l_121)), ((0UL ^ ((safe_sub_func_int16_t_s_s((~((((g_127 = g_127) != &g_128) < (p_63 ^ 0xEBL)) < p_65)), l_103)) < 4UL)) == 4294967295UL))) <= g_75))), p_63))) & 0x9CEAL))), 1)))
            {
                l_144 |= (((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(0xD717EF146544C23BLL, p_65)), (~(safe_sub_func_uint16_t_u_u(l_84, (safe_add_func_uint8_t_u_u(p_65, ((0x358B857EB286D7ADLL >= ((safe_lshift_func_int8_t_s_u(l_84, p_63)) <= g_77)) >= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(g_118, 13)), 9)))))))))) >= 18446744073709551607UL) >= 0xC1B3L);
            }
            else
            {
                l_104 = (p_64 = l_101);
                p_64 &= ((safe_rshift_func_uint8_t_u_s(((*g_127)--), 7)) >= l_73);
            }
        }
    }
    else
    {
        unsigned short l_150 = 65533UL;
        p_64 = 0x43813938L;
        l_150 |= p_64;
        return p_63;
    }
    for (g_118 = 0; (g_118 <= 9); g_118 += 1)
    {
        unsigned l_165 = 4294967290UL;
        int l_214 = 0L;
        int **l_215 = (void*)0;
        int **l_216 = &g_76[9][0];
        if ((safe_lshift_func_int8_t_s_u(p_63, 0)))
        {
            int **l_153 = (void*)0;
            int **l_154 = &g_76[7][2];
            long long *l_169 = (void*)0;
            long long **l_168 = &l_169;
            int l_199 = (-1L);
            (*l_154) = &g_77;
            if (p_65)
                continue;
            for (g_75 = 9; (g_75 >= 3); g_75 -= 1)
            {
                char l_155[4][4] = {{0xE1L,9L,(-4L),0x4EL},{0xE1L,(-4L),0xE1L,0xC8L},{9L,0x4EL,0xC8L,0xC8L},{(-4L),(-4L),0xFEL,0x78L}};
                char l_173 = (-1L);
                int l_194[2];
                int l_195 = (-1L);
                int i, j;
                for (i = 0; i < 2; i++)
                    l_194[i] = 0L;
                l_155[3][0] &= p_64;
                for (p_63 = 2; (p_63 >= 0); p_63 -= 1)
                {
                    int i, j, k;
                    p_64 = (+l_155[3][0]);
                }
                for (p_64 = 0; (p_64 <= 1); p_64 += 1)
                {
                    int l_166 = 0x2CF28734L;
                    int l_175 = 9L;
                    int i;
                    for (p_65 = 0; (p_65 <= 9); p_65 += 1)
                    {
                        unsigned short *l_161 = &g_162;
                        long long *l_163[5][3][1] = {{{(void*)0},{&g_164},{(void*)0}},{{&g_164},{(void*)0},{&g_164}},{{(void*)0},{&g_164},{(void*)0}},{{&g_164},{(void*)0},{&g_164}},{{(void*)0},{&g_164},{(void*)0}}};
                        long long **l_167 = &l_163[4][1][0];
                        char *l_174 = &l_155[3][0];
                        int l_177 = (-1L);
                        int i, j, k;
                        l_166 = ((((0xA27731F37730FBAALL || l_147[p_64]) && ((l_165 ^= (0L ^ ((p_65 == 1L) || ((g_158 = g_128) & (safe_add_func_int16_t_s_s(g_128, (((*l_161) = g_118) > (!l_155[0][0])))))))) != g_164)) == 0x34DD5D32L) || 0L);
                        l_168 = l_167;

                        ;
                        l_175 ^= (((g_128 & p_65) && (safe_sub_func_int8_t_s_s(((*l_174) = ((0xB31ABE64536AC008LL || (g_164 = ((l_172 == l_173) == (5L && l_166)))) >= l_147[p_64])), ((*g_127) = p_63)))) > p_63);
                        l_177 = g_176;
                    }


                    return l_147[p_64];
                }
                for (g_162 = 0; (g_162 <= 2); g_162 += 1)
                {
                    long long *l_188 = &g_176;
                    int l_193 = 0xDBC5227DL;
                    int i, j, k;
                    if (p_65)
                        break;
                    l_195 = (((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((p_63 && ((*l_188) |= (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(0UL, p_64)), g_118)))) || (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(p_65, 5)), (((l_193 >= (l_194[0] = (+(~l_193)))) <= (p_63 ^ 0x8AL)) >= g_176)))), 8)) < 0xB46EF48D875F7301LL), p_63)) > g_158), 3L)) <= (-7L)) != g_118);
                    --l_196;
                }
            }
            l_199 = l_165;
        }
        else
        {
            short l_211 = (-1L);
            for (l_196 = 0; (l_196 <= 9); l_196 += 1)
            {
                unsigned l_209[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_209[i] = 0x951488D5L;
                for (l_165 = 0; (l_165 <= 9); l_165 += 1)
                {
                    unsigned long long l_205[8][2] = {{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL},{0xAB88E0C3C7F25558LL,0xAB88E0C3C7F25558LL}};
                    int i, j;
                    for (p_63 = 0; (p_63 <= 9); p_63 += 1)
                    {
                        long long *l_200 = &g_176;
                        char *l_201 = &g_202;
                        int **l_204 = &l_95[1][2][2];
                        int ***l_203 = &l_204;
                        p_64 = (((g_164 = ((*l_200) |= p_65)) >= g_128) && (!(((*l_201) = 0L) != (((*l_203) = &g_76[9][0]) == (void*)0))));

                        ;
                        if (p_64)
                            break;
                    }
                    if (((((l_205[1][0] >= p_63) | p_63) | p_64) != (g_162 && 0x3D87L)))
                    {
                        p_64 |= (g_19 || g_77);
                        return p_64;
                    }
                    else
                    {
                        short *l_208 = &l_147[1];
                        p_64 = (-1L);
                        p_64 = (p_65 >= ((*l_208) = (safe_lshift_func_int8_t_s_u(g_158, 3))));
                        if (l_209[0])
                            break;
                    }
                    if (p_64)
                        break;
                }
                if (g_210[0][0][1])
                    continue;
                if (l_211)
                    break;
                for (g_77 = 0; (g_77 <= 9); g_77 += 1)
                {
                    for (g_176 = 1; (g_176 <= 9); g_176 += 1)
                    {
                        l_214 &= (safe_mod_func_uint16_t_u_u(p_63, p_64));
                        if (p_64)
                            continue;
                        if (p_65)
                            break;
                        if (l_165)
                            break;
                    }
                    for (g_158 = 9; (g_158 >= 0); g_158 -= 1)
                    {
                        return p_64;
                    }
                    return p_64;
                }
            }
        }
        (*l_216) = &g_158;
        p_64 ^= p_65;
    }
    return p_64;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_210[i][j][k], "g_210[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_383[i], "g_383[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_394[i][j][k], "g_394[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_420[i], "g_420[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_431.f0, "g_431.f0", print_hash_value);
    transparent_crc(g_431.f1, "g_431.f1", print_hash_value);
    transparent_crc(g_431.f2, "g_431.f2", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_555[i][j][k], "g_555[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_965[i], "g_965[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
