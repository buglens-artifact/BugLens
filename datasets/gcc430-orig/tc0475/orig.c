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
   short f0;
   unsigned char f1;
   unsigned f2;
   const unsigned char f3;
   unsigned char f4;
   unsigned short f5;
   unsigned char f6;
   short f7;
   const int f8;
};

struct S1 {
   const int f0;
   short f1;
   int f2;
   const char f3;
   int f4;
   struct S0 f5;
   char f6;
};


static const unsigned char g_2 = 0xB7L;
static struct S0 g_32 = {0xAF1EL,0xCDL,0x491F199EL,0xF9L,3UL,0UL,246UL,0x2EC6L,0x0D4A7C76L};
static int g_65 = 5L;
static unsigned g_69 = 3UL;
static struct S1 g_84 = {7L,0x3F42L,1L,0xF2L,-9L,{0x529CL,252UL,3UL,0xF8L,1UL,0xE133L,255UL,0x2FD5L,0x8C55CA0DL},9L};
static int *g_131 = (void*)0;
static short g_185 = 0x6597L;
static char g_186 = 3L;
static int g_187 = 0x593A71EFL;
static unsigned short g_188 = 65535UL;
static char g_223 = 0L;
static unsigned char g_245 = 0x2DL;
static int g_535 = 0L;
static unsigned g_547 = 0x902527EDL;
static int g_638 = 0x2531EFE6L;
static int **g_652 = &g_131;
static int ***g_651 = &g_652;
static short g_656 = (-6L);
static short g_857 = 2L;
static int g_946 = 0x9EDD88C3L;
static unsigned g_1057 = 0UL;
static struct S0 *g_1065 = &g_32;
static struct S0 **g_1064 = &g_1065;
static int g_1278 = 0x31AAC8C6L;
static unsigned g_1290 = 0xF9E30CB8L;
static int g_1293 = 0x5A3A4CF1L;
static short g_1385 = (-1L);
static unsigned g_1396 = 0x743532D5L;
static unsigned g_1552 = 0x207BC864L;
static struct S0 g_1557 = {0x334EL,0xD0L,4294967293UL,255UL,0UL,1UL,1UL,0x8196L,0L};
static struct S0 g_1574 = {0x6662L,0xD7L,0x4264E25CL,252UL,0UL,65527UL,0xFAL,-2L,0xDBA46D1EL};
static struct S0 g_1600 = {-5L,0xEAL,0UL,1UL,247UL,0x52ADL,6UL,0xC3EDL,0x40E9FF2EL};
static short g_1745 = 0xD433L;
static unsigned g_1749 = 0x28933796L;
static unsigned g_1851 = 0x7ABE6CD8L;
static struct S1 *g_1857 = (void*)0;
static struct S1 **g_1856 = &g_1857;
static struct S1 ** const *g_1855 = &g_1856;
static unsigned short g_1995 = 0x7997L;
static struct S1 g_1998 = {-1L,0x2CFAL,1L,1L,0xBD0990BFL,{0x0E14L,0xA8L,0xC57C856DL,0x8AL,0x11L,0x5ED1L,0UL,0x9D9DL,1L},0x87L};
static int g_2173 = 0xC2FC15FDL;
static int g_2184 = 0xC035D50CL;
static char g_2226 = 0x68L;
static unsigned char g_2232 = 0UL;
static struct S1 *g_2259 = (void*)0;
static unsigned g_2479 = 1UL;



static short func_1(void);
static char func_7(unsigned p_8, char p_9, unsigned p_10);
static const unsigned char func_16(const unsigned char p_17, struct S1 p_18, short p_19, const int p_20);
static short func_23(unsigned char p_24, char p_25);
static const int func_26(char p_27, struct S0 p_28, unsigned char p_29, unsigned p_30, unsigned short p_31);
static unsigned func_33(struct S0 p_34);
static struct S0 func_37(char p_38, unsigned p_39, char p_40, int p_41, char p_42);
static struct S0 func_53(unsigned short p_54);
static int func_72(int * p_73, unsigned p_74, struct S0 p_75);
static int * func_76(unsigned p_77, const int p_78, unsigned p_79, struct S1 p_80, unsigned p_81);
static short func_1(void)
{
    unsigned l_15 = 0x17AB6DADL;
    const short l_1999 = (-8L);
    int *l_2401 = &g_1278;
    struct S1 *l_2402 = &g_1998;
    short l_2442 = 0xEF58L;
    int l_2461 = 0xB5764455L;
    int l_2468 = 0L;
    (*l_2401) = ((g_2 <= ((65532UL | (safe_rshift_func_int16_t_s_u(((4UL && 0x72L) || 0xECL), 5))) && (safe_sub_func_int8_t_s_s(func_7((safe_add_func_uint8_t_u_u(0x41L, ((safe_mod_func_uint8_t_u_u(l_15, func_16((safe_mod_func_uint16_t_u_u(0x9281L, func_23(g_2, l_15))), g_1998, l_15, l_1999))) || 0x5EL))), g_1600.f7, g_1600.f3), g_2173)))) < l_15);
    (*g_1856) = l_2402;
    for (g_1557.f5 = 0; (g_1557.f5 <= 26); ++g_1557.f5)
    {
        unsigned l_2482 = 0x841D1E27L;
        for (g_1557.f2 = 0; (g_1557.f2 <= 26); g_1557.f2 = safe_add_func_uint8_t_u_u(g_1557.f2, 8))
        {
            unsigned short l_2409 = 0x461FL;
            int ***l_2414 = &g_652;
            int *l_2415 = (void*)0;
            int *l_2416 = &g_84.f2;
            int *l_2417 = (void*)0;
            int *l_2418 = &g_1278;
            int *l_2419 = &g_1278;
            int *l_2420 = &g_638;
            int *l_2421 = &g_1998.f2;
            int *l_2422 = &g_65;
            int *l_2423 = &g_946;
            int *l_2424 = &g_187;
            int *l_2425 = &g_84.f2;
            int *l_2426 = &g_1998.f2;
            int *l_2427 = (void*)0;
            int *l_2428 = &g_638;
            int *l_2429 = &g_1998.f2;
            int *l_2430 = (void*)0;
            int *l_2431 = &g_946;
            int *l_2432 = &g_65;
            int *l_2433 = &g_84.f2;
            int *l_2434 = &g_65;
            int *l_2435 = &g_65;
            int *l_2436 = &g_84.f2;
            int *l_2437 = &g_84.f2;
            int *l_2438 = &g_1998.f2;
            int *l_2439 = &g_187;
            int *l_2440 = &g_65;
            int *l_2441 = &g_1278;
            int *l_2443 = &g_187;
            int *l_2444 = &g_65;
            int *l_2445 = &g_638;
            int *l_2446 = &g_1998.f2;
            int *l_2447 = &g_946;
            int *l_2448 = &g_65;
            int *l_2449 = &g_946;
            int *l_2450 = &g_946;
            int *l_2451 = (void*)0;
            int *l_2452 = &g_84.f2;
            int *l_2453 = (void*)0;
            int *l_2454 = (void*)0;
            int *l_2455 = (void*)0;
            int *l_2456 = &g_1278;
            int *l_2457 = &g_946;
            int l_2458 = (-1L);
            int *l_2459 = (void*)0;
            int *l_2460 = &g_1998.f2;
            int *l_2462 = &l_2458;
            int *l_2463 = (void*)0;
            int *l_2464 = &g_638;
            int *l_2465 = &g_638;
            int *l_2466 = &g_638;
            int *l_2467 = &g_1278;
            int *l_2469 = &l_2461;
            int *l_2470 = &g_1998.f2;
            int *l_2471 = &g_65;
            int *l_2472 = &l_2458;
            int *l_2473 = (void*)0;
            int *l_2474 = (void*)0;
            int *l_2475 = &l_2461;
            int *l_2476 = &g_946;
            int *l_2477 = &l_2461;
            int *l_2478 = &g_946;
            for (g_1574.f7 = 18; (g_1574.f7 <= (-28)); g_1574.f7--)
            {
                ++l_2409;
                (**g_651) = (*g_652);
                (*l_2401) = ((safe_mod_func_uint32_t_u_u(func_7((((l_2414 == &g_652) > g_32.f6) ^ ((g_32.f2 != func_7((g_1998.f5.f5 > g_84.f5.f4), (g_1574.f3 == g_84.f1), g_1574.f6)) < g_84.f6)), g_1574.f7, g_1557.f6), g_1557.f1)) != 0xBEL);
            }
            --g_2479;
            --l_2482;
            if ((*l_2432))
                continue;
        }
    }
    return (*l_2401);
}







static char func_7(unsigned p_8, char p_9, unsigned p_10)
{
    unsigned char l_2400 = 246UL;
    (**g_651) = (void*)0;
    return l_2400;
}







static const unsigned char func_16(const unsigned char p_17, struct S1 p_18, short p_19, const int p_20)
{
    const struct S1 *l_2005 = &g_1998;
    const struct S1 **l_2004 = &l_2005;
    const unsigned short l_2006 = 0x8D82L;
    struct S0 *l_2007 = (void*)0;
    int *l_2008 = (void*)0;
    int *l_2014 = &g_946;
    unsigned l_2021 = 8UL;
    unsigned short l_2057 = 0x4A7CL;
    unsigned short l_2087 = 1UL;
    int l_2165 = (-3L);
    int l_2186 = 0L;
    if ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((3L && ((void*)0 == l_2004)), l_2006)), (((((void*)0 != l_2007) & ((0x6DL >= (l_2007 == (void*)0)) | 0x91L)) || l_2006) & 1L))))
    {
        const char l_2009 = 1L;
        (*g_652) = l_2008;
        return l_2009;
    }
    else
    {
        char l_2010 = 0L;
        int l_2013 = (-1L);
        l_2010 |= (p_18.f5.f5 & g_1998.f5.f6);
        (*g_652) = l_2008;
        p_18.f2 ^= p_18.f5.f2;
        l_2013 ^= ((+(l_2010 || l_2006)) && (safe_sub_func_uint32_t_u_u(((void*)0 != (*g_1856)), (g_656 && (p_18.f3 || g_946)))));
    }
    if ((((func_72(l_2014, g_1057, func_37(p_18.f5.f3, p_18.f5.f5, (safe_rshift_func_int16_t_s_u((0x2AL < (~((((0xFC0CL == (safe_sub_func_uint32_t_u_u(g_1600.f7, g_1574.f3))) != (((+(0xBBFEL && p_18.f5.f3)) < p_18.f0) ^ 0x078D2E28L)) ^ p_18.f4) == 0x3EFEA068L))), 2)), p_18.f5.f7, p_18.f1)) || 8L) != 65533UL) | p_18.f1))
    {
        struct S1 ** const * const l_2022 = &g_1856;
        const int l_2023 = 0xFEE419C5L;
        int *l_2024 = &g_1998.f2;
        unsigned l_2044 = 0xA96A932DL;
        struct S0 l_2070 = {0x0F3AL,253UL,0UL,250UL,0UL,0UL,255UL,0xCE86L,0x9A10335DL};
        int l_2083 = 0x88FA4C9AL;
        const unsigned short l_2084 = 0x1BB9L;
        int l_2149 = (-9L);
        int l_2172 = 5L;
        int l_2189 = (-9L);
        int l_2197 = 0x46B9F37DL;
        int l_2205 = (-3L);
        int l_2221 = 0x29BC5327L;
        short l_2238 = (-5L);
        if ((((safe_mod_func_uint8_t_u_u((251UL & (l_2021 >= (+(*l_2014)))), (-1L))) != (func_26((p_20 < ((l_2022 == &g_1856) | (p_18.f5.f6 != g_32.f5))), (*g_1065), g_84.f4, (*l_2014), g_84.f0) && 0x30L)) ^ (*l_2014)))
        {
            return l_2023;
        }
        else
        {
            int l_2027 = 2L;
            struct S1 ** const *l_2036 = &g_1856;
            char l_2065 = 0x2FL;
            (**g_651) = l_2024;
            if (((safe_add_func_int32_t_s_s(((*l_2024) > l_2027), (-1L))) < 0L))
            {
                int *l_2041 = &g_1278;
                struct S0 **l_2077 = &g_1065;
                unsigned char l_2082 = 0xCBL;
                if ((**g_652))
                {
                    unsigned short l_2037 = 1UL;
                    int *l_2040 = &g_638;
                    (**g_652) |= (safe_sub_func_uint32_t_u_u((p_18.f5.f8 | (((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((g_84.f3 | ((void*)0 != l_2036)), l_2037)) || (safe_lshift_func_int8_t_s_s(((g_1396 & (l_2027 && p_17)) != (func_72(l_2040, g_1998.f5.f8, (**g_1064)) == p_18.f5.f3)), 3))), p_17)) <= 0xE734L) < p_18.f2)), p_18.f5.f6));
                    if ((((l_2014 == l_2041) & (((-7L) <= (safe_sub_func_int8_t_s_s((*l_2040), ((l_2044 > g_1600.f0) || (safe_mod_func_uint32_t_u_u((0xB2609852L | (safe_sub_func_uint16_t_u_u((g_32.f5 || 0x50F2L), (*l_2024)))), l_2027)))))) <= g_32.f1)) || g_32.f1))
                    {
                        int *l_2049 = &g_946;
                        int *l_2050 = &g_638;
                        int *l_2051 = &g_187;
                        int *l_2052 = &g_638;
                        int *l_2053 = &g_65;
                        int *l_2054 = &g_84.f2;
                        int *l_2055 = &g_1278;
                        int *l_2056 = &g_84.f2;
                        (*g_1856) = &p_18;
                        (*g_652) = l_2040;
                        ++l_2057;
                        (*l_2041) = (0xE2L == p_18.f5.f8);
                    }
                    else
                    {
                        (***g_651) = (**g_652);
                        return (*l_2040);
                    }
                    if ((safe_sub_func_uint8_t_u_u((g_32.f3 && func_23(g_84.f5.f7, p_18.f3)), func_33(p_18.f5))))
                    {
                        return (*l_2024);
                    }
                    else
                    {
                        (*l_2040) = 0x76A4E17BL;
                    }
                }
                else
                {
                    if ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((l_2065 > ((~(safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_1574.f4, func_33(l_2070))), ((*l_2014) | (0xBB03L || (safe_add_func_int8_t_s_s(g_1557.f0, ((safe_lshift_func_int8_t_s_s((+(*l_2024)), func_33((*g_1065)))) <= p_18.f5.f7)))))))) > (*l_2041))))), 0x0F34BB36L)))
                    {
                        (**g_651) = l_2041;
                        (**g_651) = (**g_651);
                        (***g_651) = (0UL || (g_1998.f0 <= ((void*)0 == l_2077)));
                    }
                    else
                    {
                        (*l_2024) |= (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_84.f5.f5, (l_2082 || ((func_33(func_53(p_18.f5.f4)) || ((((*l_2004) != (void*)0) <= p_18.f4) || (p_18.f1 >= l_2083))) || 0xFBL)))), g_1293));
                        return l_2084;
                    }
                }
            }
            else
            {
                short l_2088 = 0x27B2L;
                int *l_2101 = &g_65;
                struct S1 **l_2106 = &g_1857;
                int l_2174 = 0L;
                int l_2191 = 2L;
                int l_2207 = (-1L);
                (*l_2024) = (safe_mod_func_uint32_t_u_u((func_23(l_2087, ((l_2027 == p_20) != (2L <= (func_72((*g_652), p_17, (**g_1064)) < (((0x58628A30L >= l_2065) < p_18.f5.f5) ^ p_18.f4))))) || 4294967290UL), l_2088));
                for (g_84.f5.f5 = 0; (g_84.f5.f5 >= 10); g_84.f5.f5 = safe_add_func_int32_t_s_s(g_84.f5.f5, 4))
                {
                    int l_2099 = (-1L);
                    int l_2215 = (-1L);
                    (*l_2024) = func_33((**g_1064));
                    if (l_2088)
                    {
                        struct S1 l_2100 = {0x29FBFB7CL,0xDC03L,0xC8D2373EL,0x47L,0xBBF98124L,{1L,255UL,0xB09E90EBL,0x5DL,0UL,65527UL,255UL,0x6CF6L,-7L},0xFEL};
                        (**g_651) = func_76(g_32.f0, (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x1AEE6911L, (g_1385 < (*l_2024)))), ((func_33(p_18.f5) >= (safe_add_func_int16_t_s_s(p_18.f2, g_1998.f5.f2))) | l_2099))), g_84.f5.f4)), g_65, l_2100, g_656);
                        (**g_652) = p_19;
                        l_2101 = l_2008;
                        (*l_2024) = (0xD10DL || (safe_sub_func_int16_t_s_s((p_18.f5.f2 > (((safe_add_func_uint8_t_u_u(((l_2106 == (void*)0) ^ 0L), 0xF5L)) != (!1L)) & g_1998.f2)), (&g_652 != &g_652))));
                    }
                    else
                    {
                        int *l_2107 = &g_1278;
                        int *l_2108 = &g_65;
                        int *l_2109 = (void*)0;
                        int *l_2110 = (void*)0;
                        int *l_2111 = &g_1278;
                        int l_2112 = 0L;
                        int *l_2113 = (void*)0;
                        int *l_2114 = &l_2083;
                        int *l_2115 = &g_187;
                        int *l_2116 = &g_65;
                        int *l_2117 = &g_1998.f2;
                        int *l_2118 = &g_1278;
                        int *l_2119 = &g_1278;
                        int *l_2120 = (void*)0;
                        int *l_2121 = &l_2027;
                        int *l_2122 = &g_1278;
                        int *l_2123 = &g_1998.f2;
                        int *l_2124 = &g_65;
                        int *l_2125 = &g_84.f2;
                        int *l_2126 = (void*)0;
                        int *l_2127 = &g_65;
                        int *l_2128 = &g_187;
                        int *l_2129 = &l_2083;
                        int *l_2130 = &g_65;
                        int *l_2131 = (void*)0;
                        int *l_2132 = (void*)0;
                        int *l_2133 = &l_2112;
                        int *l_2134 = (void*)0;
                        int *l_2135 = &g_1278;
                        int *l_2136 = &g_84.f2;
                        int *l_2137 = &g_1998.f2;
                        int *l_2138 = &l_2083;
                        int *l_2139 = &g_65;
                        int *l_2140 = &l_2083;
                        int *l_2141 = &g_187;
                        int *l_2142 = &l_2112;
                        int *l_2143 = &g_1998.f2;
                        int *l_2144 = &l_2083;
                        int *l_2145 = &g_1998.f2;
                        int *l_2146 = &g_187;
                        int *l_2147 = &g_1278;
                        int *l_2148 = &g_1278;
                        int *l_2150 = &g_638;
                        int *l_2151 = &l_2149;
                        int *l_2152 = &l_2027;
                        int *l_2153 = &g_1998.f2;
                        int *l_2154 = (void*)0;
                        int *l_2155 = &g_946;
                        int *l_2156 = &g_1278;
                        int *l_2157 = &g_1998.f2;
                        int *l_2158 = &g_187;
                        int *l_2159 = &l_2149;
                        int *l_2160 = &g_638;
                        int *l_2161 = &l_2112;
                        int *l_2162 = (void*)0;
                        int *l_2163 = &g_946;
                        int *l_2164 = &g_946;
                        int l_2166 = 0xC3638B66L;
                        int *l_2167 = &l_2083;
                        int *l_2168 = &g_1998.f2;
                        int *l_2169 = &g_84.f2;
                        int *l_2170 = &g_1998.f2;
                        int *l_2171 = &l_2166;
                        int *l_2175 = (void*)0;
                        int *l_2176 = &g_187;
                        int *l_2177 = &g_1278;
                        int *l_2178 = &g_84.f2;
                        int *l_2179 = (void*)0;
                        int *l_2180 = &l_2165;
                        int *l_2181 = &g_1998.f2;
                        int *l_2182 = &g_187;
                        int *l_2183 = &l_2165;
                        int *l_2185 = &l_2165;
                        int *l_2187 = &l_2149;
                        int *l_2188 = &g_638;
                        int *l_2190 = &l_2149;
                        int *l_2192 = &l_2149;
                        int *l_2193 = &l_2174;
                        int *l_2194 = &g_638;
                        int *l_2195 = &l_2174;
                        int *l_2196 = &g_187;
                        int *l_2198 = &l_2165;
                        int *l_2199 = &l_2172;
                        int *l_2200 = &g_65;
                        int *l_2201 = &g_187;
                        int *l_2202 = &l_2189;
                        int *l_2203 = &l_2112;
                        int *l_2204 = (void*)0;
                        int *l_2206 = (void*)0;
                        int *l_2208 = (void*)0;
                        int *l_2209 = (void*)0;
                        int *l_2210 = &g_946;
                        int *l_2211 = &g_84.f2;
                        int *l_2212 = &l_2189;
                        int *l_2213 = &g_187;
                        int *l_2214 = &l_2027;
                        int *l_2216 = &g_638;
                        int *l_2217 = (void*)0;
                        int *l_2218 = &g_65;
                        int *l_2219 = &g_1278;
                        int *l_2220 = &l_2215;
                        int *l_2222 = &g_1998.f2;
                        int *l_2223 = (void*)0;
                        int *l_2224 = &g_946;
                        int *l_2225 = &g_187;
                        int *l_2227 = &l_2189;
                        int *l_2228 = (void*)0;
                        int *l_2229 = &l_2172;
                        int *l_2230 = &l_2186;
                        int *l_2231 = &g_65;
                        ++g_2232;
                        (**g_651) = &l_2189;
                        return p_19;
                    }
                }
                (*l_2014) &= (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(((*l_2024) & l_2238))) <= ((void*)0 == &g_1856)), l_2065));
            }
        }
    }
    else
    {
        unsigned l_2241 = 1UL;
        struct S0 l_2256 = {1L,252UL,4294967295UL,7UL,0xE6L,65535UL,0xCAL,0x5060L,-10L};
        const unsigned l_2257 = 2UL;
        unsigned short l_2260 = 65527UL;
        struct S1 **l_2273 = (void*)0;
        char l_2274 = 5L;
        int *l_2277 = &l_2186;
        int l_2343 = 0L;
        int l_2347 = 0xDDA86E52L;
        if ((*l_2014))
        {
            const int l_2255 = 0x0CD196BEL;
            struct S1 l_2258 = {0x13DCF1EEL,-1L,-1L,0x12L,2L,{0x6EC3L,1UL,0x633E47AEL,252UL,0x56L,0x774CL,246UL,0xF359L,0L},0x15L};
            int *l_2263 = &g_946;
            for (g_1574.f7 = 0; (g_1574.f7 != 10); g_1574.f7 = safe_add_func_uint32_t_u_u(g_1574.f7, 9))
            {
                unsigned l_2242 = 0xB5186029L;
                if (l_2241)
                {
                    int * const *l_2254 = &g_131;
                    (*l_2014) = l_2242;
                    (*g_652) = func_76((l_2241 ^ 249UL), ((safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint8_t_u_u(p_18.f2, (safe_sub_func_int32_t_s_s(func_23(g_223, ((safe_mod_func_uint8_t_u_u(0x8EL, (0x580BL || (safe_add_func_uint8_t_u_u((p_18.f5.f8 & (safe_rshift_func_uint8_t_u_s(l_2242, (((~func_72(func_76((l_2254 != (void*)0), l_2255, l_2242, p_18, g_84.f4), p_18.f5.f4, l_2256)) != g_2) != p_18.f5.f8)))), l_2255))))) ^ (*l_2014))), l_2242)))) & g_1998.f6) ^ g_1600.f7))) ^ l_2257), g_186, l_2258, g_1998.f5.f5);
                    (**g_652) = ((func_72((*g_652), func_72((**g_651), ((((p_19 > p_20) | ((&l_2004 != &g_1856) > ((g_2259 == &p_18) < (**l_2254)))) ^ l_2242) >= (*g_131)), (*g_1065)), p_18.f5) | g_1745) && 4294967295UL);
                    l_2260++;
                }
                else
                {
                    (*g_652) = l_2263;
                }
            }
            for (g_1851 = 0; (g_1851 <= 45); g_1851++)
            {
                const struct S1 ***l_2266 = &l_2004;
                (*l_2266) = (void*)0;
            }
            for (g_1557.f1 = 5; (g_1557.f1 == 43); g_1557.f1++)
            {
                unsigned char l_2353 = 251UL;
                struct S0 **l_2358 = &l_2007;
                int *l_2370 = &g_84.f2;
                if (((+((safe_lshift_func_uint16_t_u_u(g_84.f5.f0, (safe_rshift_func_int16_t_s_s((((l_2273 != (*g_1855)) || l_2274) >= (((!0x7A92L) ^ (safe_lshift_func_uint16_t_u_s(g_1600.f3, 11))) == p_18.f3)), 12)))) > 0x3EL)) | g_1396))
                {
                    (*g_652) = l_2277;
                }
                else
                {
                    int *l_2278 = &l_2186;
                    int *l_2279 = &l_2258.f2;
                    int *l_2280 = &g_946;
                    int *l_2281 = &g_187;
                    int *l_2282 = &l_2186;
                    int *l_2283 = &g_1278;
                    int *l_2284 = &l_2165;
                    int *l_2285 = &g_187;
                    int *l_2286 = &g_1998.f2;
                    int *l_2287 = &g_65;
                    int *l_2288 = &l_2186;
                    int *l_2289 = &g_187;
                    int *l_2290 = &g_946;
                    int *l_2291 = &g_187;
                    int *l_2292 = &g_638;
                    int *l_2293 = &g_187;
                    int *l_2294 = &g_65;
                    int *l_2295 = &l_2186;
                    int *l_2296 = &l_2258.f2;
                    int *l_2297 = &g_638;
                    int *l_2298 = &g_946;
                    int *l_2299 = &g_187;
                    int *l_2300 = &g_84.f2;
                    int *l_2301 = &g_187;
                    int *l_2302 = (void*)0;
                    int *l_2303 = &g_84.f2;
                    int *l_2304 = &g_946;
                    int *l_2305 = &g_638;
                    int *l_2306 = &l_2258.f2;
                    int *l_2307 = &g_1278;
                    int *l_2308 = &g_1278;
                    int *l_2309 = (void*)0;
                    int *l_2310 = &g_638;
                    int *l_2311 = &g_65;
                    int *l_2312 = &l_2165;
                    int *l_2313 = &l_2165;
                    int *l_2314 = (void*)0;
                    int l_2315 = 0xEC52874CL;
                    int *l_2316 = &l_2186;
                    int *l_2317 = &g_187;
                    int *l_2318 = &g_638;
                    int *l_2319 = (void*)0;
                    int *l_2320 = &g_84.f2;
                    int *l_2321 = (void*)0;
                    int *l_2322 = &g_1278;
                    int *l_2323 = (void*)0;
                    int *l_2324 = &l_2315;
                    int *l_2325 = (void*)0;
                    int *l_2326 = &l_2186;
                    int l_2327 = 0xFE78CFCCL;
                    int *l_2328 = &g_638;
                    int *l_2329 = &l_2186;
                    int *l_2330 = &l_2258.f2;
                    int *l_2331 = (void*)0;
                    int *l_2332 = (void*)0;
                    int *l_2333 = &g_1278;
                    int *l_2334 = &g_1998.f2;
                    int *l_2335 = &g_84.f2;
                    int *l_2336 = (void*)0;
                    int *l_2337 = &l_2186;
                    int *l_2338 = &l_2315;
                    int *l_2339 = (void*)0;
                    int *l_2340 = &l_2186;
                    int *l_2341 = &g_946;
                    int *l_2342 = (void*)0;
                    int *l_2344 = &g_187;
                    int *l_2345 = &l_2327;
                    int *l_2346 = &l_2343;
                    int *l_2348 = &g_1278;
                    int *l_2349 = &l_2343;
                    int *l_2350 = (void*)0;
                    int *l_2351 = &g_946;
                    int *l_2352 = &l_2347;
                    l_2353++;
                    if (l_2353)
                    {
                        (*l_2283) = p_20;
                    }
                    else
                    {
                        (*l_2278) = 6L;
                    }
                    (*l_2313) &= func_72(func_76(p_20, (((safe_rshift_func_int8_t_s_u(l_2353, ((void*)0 == l_2358))) && ((*l_2263) > (*l_2014))) && (safe_lshift_func_uint16_t_u_s(((void*)0 == (*g_1855)), 2))), (*l_2277), p_18, (*l_2263)), (*l_2277), p_18.f5);
                    return g_1998.f2;
                }
                for (p_18.f6 = 17; (p_18.f6 < 2); --p_18.f6)
                {
                    int l_2363 = 0xE69CB819L;
                    (***g_651) = l_2363;
                    l_2258.f2 &= (((-1L) ^ (g_1600.f3 | (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((!p_18.f1), ((l_2363 ^ (((+((2UL && (((safe_rshift_func_uint16_t_u_u(func_72(l_2370, (safe_lshift_func_int8_t_s_s(1L, ((*g_131) < (safe_sub_func_uint8_t_u_u(((func_33(p_18.f5) || (*l_2263)) != (*l_2370)), 0UL))))), (*g_1065)), 4)) <= g_2232) > (*l_2277))) != (*l_2263))) > l_2363) || (***g_651))) < (*g_131)))), p_18.f2)))) & g_1574.f1);
                }
            }
        }
        else
        {
            unsigned short l_2375 = 8UL;
            int *l_2376 = &g_1998.f2;
            int *l_2377 = &g_84.f2;
            int *l_2378 = &l_2186;
            int *l_2379 = &g_84.f2;
            int *l_2380 = &g_65;
            int *l_2381 = &l_2186;
            int *l_2382 = (void*)0;
            int *l_2383 = &g_65;
            int *l_2384 = &g_638;
            int *l_2385 = (void*)0;
            int *l_2386 = &g_187;
            int *l_2387 = &l_2186;
            int l_2388 = 0L;
            int *l_2389 = &g_65;
            int *l_2390 = &g_187;
            int *l_2391 = &l_2186;
            int *l_2392 = &l_2186;
            int *l_2393 = &l_2388;
            int *l_2394 = &g_946;
            int *l_2395 = &l_2165;
            int *l_2396 = &l_2165;
            unsigned short l_2397 = 65534UL;
            (*l_2277) = (l_2375 <= ((void*)0 != &g_652));
            l_2397++;
            (*l_2383) = p_18.f0;
        }
    }
    return p_18.f5.f2;
}







static short func_23(unsigned char p_24, char p_25)
{
    struct S0 l_35 = {-6L,0xB2L,4294967288UL,0xC8L,255UL,0x9053L,0xE0L,4L,0L};
    int *l_1075 = &g_84.f2;
    int l_1078 = 0x7AB8CBF2L;
    int l_1084 = 0x41D4A1ACL;
    int l_1090 = 5L;
    int l_1096 = 0L;
    int l_1103 = 9L;
    int l_1114 = (-1L);
    int l_1115 = 1L;
    int l_1131 = 0x6CF7CFFAL;
    unsigned char l_1140 = 0x99L;
    int *l_1149 = &l_1078;
    char l_1151 = 0x6BL;
    struct S0 **l_1158 = &g_1065;
    unsigned l_1306 = 0xB9089193L;
    struct S1 l_1564 = {-5L,9L,0x99236B9FL,0xA3L,0L,{-6L,0x58L,0x74BADA96L,0UL,0x48L,0x7D12L,4UL,0x2489L,0xACD0A75AL},0x67L};
    struct S1 **l_1595 = (void*)0;
    struct S1 ***l_1594 = &l_1595;
    int l_1616 = 0xE8E7EBF4L;
    int l_1911 = 0xCDCA5CF1L;
    int l_1966 = 8L;
    int l_1969 = 2L;
    int l_1974 = 0x3FF722B6L;
    int l_1980 = 0x50C86605L;
    if (func_26(p_25, g_32, (1L && func_33(l_35)), l_35.f0, (p_25 ^ func_33(func_37((safe_add_func_uint32_t_u_u((g_32.f3 >= (g_32.f7 || 0x4544A95AL)), p_24)), g_32.f1, p_24, g_32.f3, p_25)))))
    {
        struct S0 l_1076 = {0x89CEL,0xBCL,0xFBD15E6AL,1UL,4UL,65528UL,255UL,0xA8AFL,0x50F9DAF3L};
        int l_1077 = (-3L);
        int *l_1079 = &g_946;
        int *l_1080 = (void*)0;
        int *l_1081 = &g_187;
        int *l_1082 = &g_187;
        int *l_1083 = (void*)0;
        int *l_1085 = &g_187;
        int *l_1086 = &g_84.f2;
        int *l_1087 = &g_65;
        int *l_1088 = (void*)0;
        int *l_1089 = (void*)0;
        int *l_1091 = &l_1090;
        int *l_1092 = &l_1090;
        int *l_1093 = &l_1090;
        int *l_1094 = &g_65;
        int *l_1095 = &l_1090;
        int *l_1097 = &l_1084;
        int *l_1098 = &l_1090;
        int *l_1099 = (void*)0;
        int *l_1100 = (void*)0;
        int *l_1101 = &g_187;
        int *l_1102 = &g_946;
        int *l_1104 = &l_1078;
        int l_1105 = 0x31680E0DL;
        int *l_1106 = (void*)0;
        int *l_1107 = &l_1090;
        int *l_1108 = &l_1103;
        int *l_1109 = (void*)0;
        int *l_1110 = (void*)0;
        int l_1111 = 0x37EA1967L;
        int *l_1112 = &g_65;
        int *l_1113 = (void*)0;
        int l_1116 = 0L;
        int *l_1117 = &g_187;
        int *l_1118 = &g_638;
        int *l_1119 = (void*)0;
        int *l_1120 = &l_1116;
        int *l_1121 = &l_1105;
        int *l_1122 = &g_65;
        int *l_1123 = (void*)0;
        int *l_1124 = &g_638;
        int *l_1125 = &l_1105;
        int *l_1126 = &g_84.f2;
        int *l_1127 = &l_1114;
        int *l_1128 = (void*)0;
        int *l_1129 = &l_1111;
        int l_1130 = 0xD853264CL;
        int *l_1132 = (void*)0;
        int *l_1133 = (void*)0;
        int *l_1134 = &l_1114;
        int *l_1135 = &l_1114;
        int *l_1136 = &l_1130;
        int *l_1137 = (void*)0;
        int *l_1138 = &l_1116;
        int *l_1139 = &l_1090;
        char l_1150 = 0xE5L;
        l_1077 |= (p_25 | (safe_rshift_func_int16_t_s_u(((func_72(l_1075, (((p_24 < (*g_131)) != 0x30818B41L) ^ g_32.f4), (**g_1064)) && func_33(l_1076)) >= 4294967293UL), 4)));
        l_1140--;
        l_1151 ^= ((*l_1079) && (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((*l_1075) || (safe_sub_func_uint16_t_u_u(65531UL, func_72(l_1149, l_1150, func_53((*l_1120)))))), 0x1DL)), g_32.f1)));
        if (p_25)
        {
            (*l_1149) = (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(g_84.f5.f4, 10)), 12)) <= 0xB3CDL), g_245));
            return p_24;
        }
        else
        {
            return g_84.f5.f1;
        }
    }
    else
    {
        unsigned l_1159 = 0x7B329CE1L;
        l_1159 = (l_1158 == &g_1065);
        (*g_652) = &l_1103;
    }
    if ((**g_652))
    {
        int *l_1172 = &g_187;
        struct S1 l_1184 = {-3L,0L,1L,0xD9L,4L,{0x93BFL,1UL,4294967295UL,0x3BL,247UL,1UL,0xBAL,0x2A14L,0xFD4012CEL},0xC8L};
        int l_1261 = 0x1A36A766L;
        int l_1267 = 0L;
        int l_1269 = 0xC7A5DD09L;
        int l_1277 = 0xD8DC0A00L;
        struct S0 *l_1295 = &l_35;
        char l_1325 = 0x1EL;
        struct S0 l_1332 = {0L,0x2DL,0xB191FF16L,0xCCL,0xC0L,65535UL,0x56L,-3L,0xFAB2FF24L};
        int l_1501 = 2L;
        int l_1521 = 0xC9E3E886L;
        (**g_652) &= ((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((*l_1149), (((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((*l_1075), 1)), g_187)) || (-1L)) == ((((((safe_mod_func_int16_t_s_s(p_24, (safe_rshift_func_uint8_t_u_s(p_25, p_25)))) <= p_24) <= (*l_1149)) > (-1L)) >= 1L) | (*l_1149))))) || (*l_1075)), g_84.f5.f1)) || p_25) < g_32.f7) == 0x81EE3BAAL);
        if (func_33((*g_1065)))
        {
            int **l_1179 = &l_1075;
            int l_1255 = 0x5109E778L;
            int l_1259 = 0L;
            struct S0 **l_1294 = (void*)0;
            (**g_651) = l_1172;
            (*l_1149) &= p_24;
            if (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(255UL, 0)), ((safe_lshift_func_uint16_t_u_u(0UL, 1)) == (((&l_1172 != l_1179) && (&l_1075 == &l_1075)) | (**l_1179))))) & (*l_1075)))
            {
                int l_1187 = (-1L);
                struct S1 l_1188 = {0xD4BF706AL,-9L,0x70E3CFADL,0x2CL,1L,{5L,0x7DL,0x7D1A1356L,1UL,0x3BL,2UL,0UL,0x5015L,3L},-4L};
                int l_1283 = (-9L);
                int ***l_1310 = &l_1179;
                struct S1 **l_1322 = (void*)0;
                for (g_84.f5.f4 = 0; (g_84.f5.f4 > 31); g_84.f5.f4 = safe_add_func_uint16_t_u_u(g_84.f5.f4, 7))
                {
                    int ***l_1182 = &g_652;
                    (*l_1179) = func_76((l_1182 != (void*)0), (safe_unary_minus_func_int8_t_s(p_25)), g_185, l_1184, g_535);
                    return g_32.f3;
                }
                (*g_131) = (*l_1172);
                (*g_652) = func_76((safe_sub_func_uint32_t_u_u(l_1187, ((&l_1172 == (void*)0) ^ (***g_651)))), l_1187, (*l_1172), l_1188, (p_25 <= ((func_33(l_1188.f5) > g_188) != p_25)));
                for (l_35.f0 = (-11); (l_35.f0 <= 25); l_35.f0++)
                {
                    short l_1201 = (-4L);
                    int l_1260 = 0x44B2BDDAL;
                    struct S1 l_1307 = {8L,5L,0x07A90D69L,0L,0x0D1A472CL,{0L,3UL,0x125BFBDBL,255UL,0xA3L,65535UL,3UL,0x1C8DL,0x11F97843L},0L};
                    int *l_1308 = (void*)0;
                    int ***l_1311 = &l_1179;
                    int l_1314 = 0x157E5C68L;
                    (*g_131) = (65532UL != (safe_sub_func_uint8_t_u_u(1UL, ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(l_1201, 15)) > (*l_1075)) || (((safe_lshift_func_int8_t_s_s(((void*)0 != (*g_652)), (safe_rshift_func_uint8_t_u_s(((+(func_33((*g_1065)) || 0xBCL)) & 1L), 1)))) >= g_84.f2) < (*l_1075))), 7L)), p_24)) < 1L))));
                    for (l_1188.f6 = 0; (l_1188.f6 != 28); l_1188.f6++)
                    {
                        int *l_1208 = &l_1131;
                        int *l_1209 = &g_187;
                        int *l_1210 = (void*)0;
                        int *l_1211 = &g_65;
                        int *l_1212 = &l_1115;
                        int *l_1213 = &l_1115;
                        int *l_1214 = &l_1103;
                        int *l_1215 = &l_1114;
                        int *l_1216 = &l_1114;
                        int *l_1217 = &l_1115;
                        int *l_1218 = &l_1090;
                        int *l_1219 = &l_1184.f2;
                        int *l_1220 = &l_1084;
                        int *l_1221 = &l_1188.f2;
                        int *l_1222 = &g_65;
                        int *l_1223 = &g_187;
                        int *l_1224 = &l_1084;
                        int *l_1225 = &l_1188.f2;
                        int *l_1226 = &l_1131;
                        int *l_1227 = &l_1078;
                        int *l_1228 = &l_1188.f2;
                        int *l_1229 = &l_1188.f2;
                        int *l_1230 = &l_1184.f2;
                        int *l_1231 = &l_1103;
                        int *l_1232 = &l_1188.f2;
                        int l_1233 = 2L;
                        int *l_1234 = &l_1084;
                        int *l_1235 = &l_1114;
                        int *l_1236 = (void*)0;
                        int *l_1237 = &l_1084;
                        int *l_1238 = &l_1114;
                        int *l_1239 = &l_1084;
                        int *l_1240 = &g_84.f2;
                        int *l_1241 = &g_638;
                        int *l_1242 = &l_1096;
                        int *l_1243 = (void*)0;
                        int *l_1244 = &l_1233;
                        int *l_1245 = (void*)0;
                        int *l_1246 = &l_1090;
                        int *l_1247 = (void*)0;
                        int *l_1248 = &l_1131;
                        int *l_1249 = (void*)0;
                        int *l_1250 = &l_1096;
                        int *l_1251 = &g_187;
                        int *l_1252 = &g_84.f2;
                        int *l_1253 = &l_1090;
                        int *l_1254 = &l_1184.f2;
                        int *l_1256 = &g_65;
                        int *l_1257 = &l_1115;
                        int *l_1258 = &l_1184.f2;
                        int *l_1262 = (void*)0;
                        int *l_1263 = &l_1078;
                        int *l_1264 = (void*)0;
                        int *l_1265 = &l_1188.f2;
                        int *l_1266 = &l_1184.f2;
                        int *l_1268 = &l_1184.f2;
                        int *l_1270 = (void*)0;
                        int *l_1271 = &l_1090;
                        int *l_1272 = &l_1078;
                        int *l_1273 = &g_638;
                        int *l_1274 = &l_1103;
                        int *l_1275 = (void*)0;
                        int *l_1276 = &l_1233;
                        int *l_1279 = &l_1131;
                        int *l_1280 = (void*)0;
                        int *l_1281 = &g_1278;
                        int *l_1282 = &l_1103;
                        int *l_1284 = &l_1096;
                        int *l_1285 = &g_946;
                        int *l_1286 = &l_1277;
                        int *l_1287 = &l_1096;
                        int *l_1288 = &g_946;
                        int *l_1289 = &l_1267;
                        ++g_1290;
                        if ((*l_1224))
                            break;
                    }
                    if (func_26(l_1188.f1, (**l_1158), (*l_1172), g_1293, (0xF4L & ((l_1294 == (void*)0) < ((void*)0 == (*g_651))))))
                    {
                        (*g_131) = (l_1295 != (void*)0);
                        (*g_131) = p_24;
                        l_1308 = func_76(g_84.f2, (+(safe_rshift_func_int16_t_s_u(0xAB17L, ((((safe_mod_func_int16_t_s_s(g_188, (safe_lshift_func_uint8_t_u_u((((0x107735A1L < (((safe_lshift_func_int8_t_s_u(g_84.f5.f3, 5)) > g_84.f5.f5) | ((safe_sub_func_uint8_t_u_u((g_188 < p_25), 0xA4L)) & l_1306))) & p_24) || (*l_1172)), 7)))) <= 0xF8DDFC34L) == p_25) <= p_25)))), p_25, l_1307, g_84.f0);
                    }
                    else
                    {
                        short l_1309 = 0xFF94L;
                        short l_1317 = 0x26C0L;
                        (**g_651) = (void*)0;
                        (**g_651) = func_76(g_84.f5.f4, (*l_1172), (l_1309 > (l_1310 == l_1311)), l_1307, (safe_add_func_uint16_t_u_u(l_1314, (safe_sub_func_uint16_t_u_u(func_33((*g_1065)), l_1317)))));
                    }
                    for (l_1184.f5.f6 = (-21); (l_1184.f5.f6 < 32); l_1184.f5.f6 = safe_add_func_int16_t_s_s(l_1184.f5.f6, 3))
                    {
                        struct S1 *l_1321 = (void*)0;
                        struct S1 **l_1320 = &l_1321;
                        struct S1 ***l_1323 = &l_1322;
                        (*l_1320) = &l_1184;
                        (*l_1320) = (void*)0;
                        (**l_1311) = (**g_651);
                        (*l_1323) = l_1322;
                    }
                }
            }
            else
            {
                return g_84.f4;
            }
        }
        else
        {
            struct S0 l_1324 = {7L,0x08L,4294967295UL,255UL,0x10L,0xCB18L,0xEDL,2L,0L};
            struct S1 l_1363 = {-4L,0xCD9CL,0x4B7B8A80L,0x48L,-2L,{3L,255UL,5UL,0x8DL,255UL,65535UL,0x1DL,2L,1L},0L};
            struct S0 **l_1399 = &l_1295;
            int ***l_1402 = &g_652;
            int l_1459 = 0x049120D0L;
            int l_1461 = 0xDC76226AL;
            int l_1493 = 0x258F1575L;
            int l_1507 = 0x73219B72L;
            int l_1508 = 0L;
            int l_1541 = 0L;
            if ((func_72(&l_1267, func_26((((func_26(((0x3512CDEFL && (g_69 != 6L)) | (-1L)), (**l_1158), (*l_1172), p_24, (g_84.f3 > (***g_651))) > 7UL) <= 65534UL) < 7UL), (*l_1295), g_946, g_84.f0, p_25), l_1324) >= l_1325))
            {
                unsigned l_1333 = 0x13693BFBL;
                int l_1334 = 0xD7DF3C32L;
                int **l_1343 = &l_1149;
                unsigned char l_1352 = 0x1BL;
                const struct S0 *l_1358 = (void*)0;
                (*l_1172) = func_26(((((p_25 & (safe_add_func_int8_t_s_s(((((((safe_add_func_uint32_t_u_u(((((void*)0 != (*g_652)) <= (*l_1149)) != ((g_1057 >= 0x79L) > 0x388573F6L)), 0x5AC8E2D5L)) && (((*l_1149) >= (-1L)) >= p_24)) ^ p_24) >= (-3L)) & 0L) >= (*l_1172)), p_24))) && p_25) != (*l_1172)) ^ 2UL), l_1332, l_1333, l_1334, g_84.f6);
                if ((***g_651))
                {
                    unsigned l_1344 = 4294967295UL;
                    if ((p_24 != (((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((((0UL & (((safe_mod_func_uint8_t_u_u(0x05L, (safe_add_func_uint8_t_u_u(((l_1324.f8 <= (((*g_651) != l_1343) >= (*l_1075))) | 0x4327L), 1L)))) && (*l_1075)) < 4294967295UL)) & p_25) == (**l_1343)) > 0x4891793BL), g_65)), l_1324.f0)) | 0xE6L) <= g_186)))
                    {
                        (**g_651) = (*g_652);
                        (*l_1075) = 0L;
                    }
                    else
                    {
                        (*l_1149) &= (**g_652);
                        --l_1344;
                    }
                }
                else
                {
                    struct S0 l_1349 = {-1L,0xB8L,0xDEB50740L,0x9FL,246UL,0UL,0x3DL,-5L,-9L};
                    const unsigned short l_1366 = 0x94EDL;
                    int l_1371 = (-2L);
                    if ((safe_rshift_func_uint16_t_u_u(p_25, 5)))
                    {
                        unsigned l_1353 = 3UL;
                        (**l_1343) = ((*g_131) <= (p_24 ^ ((g_535 < 5L) == (g_535 | (func_33(l_1349) < (*l_1172))))));
                        (*g_131) = ((*l_1172) && (l_1352 > (l_1353 != (((g_32.f5 ^ g_84.f1) == p_25) == (safe_sub_func_uint16_t_u_u((g_84.f5.f3 >= (l_1349.f3 > func_33((*g_1065)))), l_1353))))));
                        (*l_1343) = func_76(l_1324.f2, ((**l_1343) | func_72(&l_1103, l_1324.f4, l_1349)), (safe_lshift_func_uint16_t_u_s(((void*)0 != l_1358), ((((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(l_1353, (*l_1075))) | (***g_651)), (*l_1172))) > p_24) == g_84.f5.f6) || 0x6AL))), l_1363, p_25);
                    }
                    else
                    {
                        (***g_651) |= (safe_mod_func_int32_t_s_s(l_1366, 0x69A6EDDFL));
                    }
                    for (l_1349.f1 = 0; (l_1349.f1 != 22); ++l_1349.f1)
                    {
                        int *l_1372 = &l_1334;
                        int *l_1373 = &g_1278;
                        int *l_1374 = &l_1363.f2;
                        int *l_1375 = &l_1131;
                        int *l_1376 = &l_1114;
                        int *l_1377 = &l_1277;
                        int *l_1378 = &l_1371;
                        int *l_1379 = (void*)0;
                        int *l_1380 = &g_946;
                        int *l_1381 = (void*)0;
                        int *l_1382 = &l_1096;
                        int *l_1383 = &g_638;
                        int *l_1384 = (void*)0;
                        int *l_1386 = &l_1363.f2;
                        int *l_1387 = &l_1277;
                        int *l_1388 = &l_1267;
                        int *l_1389 = &g_1278;
                        int *l_1390 = &l_1084;
                        int *l_1391 = &l_1078;
                        int *l_1392 = &l_1131;
                        int *l_1393 = &l_1096;
                        int l_1394 = 5L;
                        int *l_1395 = &l_1334;
                        (***g_651) = (safe_rshift_func_uint16_t_u_u(0UL, 3));
                        --g_1396;
                        (*l_1389) &= (-9L);
                    }
                }
                (***g_651) = (g_223 || 0x21EDL);
                (**l_1343) = (func_72(&l_1131, (g_547 || (l_1399 != &g_1065)), (**g_1064)) <= ((p_25 >= (l_1402 == &g_652)) ^ (***l_1402)));
            }
            else
            {
                int *l_1403 = &l_1090;
                int *l_1404 = &g_187;
                int *l_1405 = &g_638;
                int *l_1406 = &g_1278;
                int *l_1407 = (void*)0;
                int *l_1408 = &l_1267;
                int *l_1409 = &l_1096;
                int *l_1410 = (void*)0;
                int *l_1411 = &l_1103;
                int l_1412 = 9L;
                int l_1413 = 0x665BC636L;
                int *l_1414 = (void*)0;
                int *l_1415 = &g_187;
                int *l_1416 = &g_1278;
                int *l_1417 = &l_1413;
                int *l_1418 = &l_1096;
                int *l_1419 = &l_1277;
                int *l_1420 = &l_1277;
                int *l_1421 = (void*)0;
                int *l_1422 = &g_1278;
                int l_1423 = (-1L);
                int *l_1424 = &l_1261;
                int *l_1425 = &l_1115;
                int *l_1426 = &g_84.f2;
                int l_1427 = 0x67276338L;
                int l_1428 = 0x6CAC0B2FL;
                int *l_1429 = &l_1261;
                int *l_1430 = &l_1096;
                int *l_1431 = &g_187;
                int *l_1432 = &l_1261;
                int *l_1433 = &l_1103;
                int *l_1434 = (void*)0;
                int *l_1435 = &l_1423;
                int *l_1436 = &g_84.f2;
                int *l_1437 = &l_1078;
                int *l_1438 = &g_638;
                int *l_1439 = (void*)0;
                int *l_1440 = &l_1269;
                int *l_1441 = &l_1423;
                int *l_1442 = &l_1267;
                int *l_1443 = (void*)0;
                int *l_1444 = &l_1090;
                int *l_1445 = &l_1090;
                int *l_1446 = &l_1078;
                int *l_1447 = &l_1131;
                int *l_1448 = &g_187;
                int *l_1449 = (void*)0;
                int *l_1450 = &l_1412;
                int *l_1451 = &l_1423;
                int *l_1452 = &l_1078;
                int *l_1453 = &l_1114;
                int *l_1454 = &l_1277;
                int *l_1455 = (void*)0;
                int *l_1456 = &l_1103;
                int *l_1457 = &l_1184.f2;
                int *l_1458 = (void*)0;
                int *l_1460 = &g_187;
                int *l_1462 = &l_1461;
                int *l_1463 = &g_1278;
                int *l_1464 = &l_1428;
                int *l_1465 = (void*)0;
                int *l_1466 = &l_1363.f2;
                int *l_1467 = &l_1114;
                int *l_1468 = &l_1427;
                int *l_1469 = &l_1131;
                int *l_1470 = (void*)0;
                int *l_1471 = &g_1278;
                int *l_1472 = &g_1278;
                int *l_1473 = &l_1269;
                int *l_1474 = &g_65;
                int *l_1475 = &l_1096;
                int *l_1476 = &l_1261;
                int *l_1477 = &l_1115;
                int *l_1478 = (void*)0;
                int *l_1479 = &g_946;
                int *l_1480 = &l_1131;
                int *l_1481 = &l_1461;
                int l_1482 = 1L;
                int *l_1483 = &l_1423;
                int *l_1484 = &l_1267;
                int *l_1485 = (void*)0;
                int *l_1486 = &g_65;
                int *l_1487 = &l_1363.f2;
                int *l_1488 = &g_84.f2;
                int *l_1489 = &l_1184.f2;
                int *l_1490 = (void*)0;
                short l_1491 = (-7L);
                int *l_1492 = &l_1114;
                int *l_1494 = &l_1267;
                int *l_1495 = &l_1115;
                int *l_1496 = (void*)0;
                int *l_1497 = &l_1090;
                int *l_1498 = &l_1267;
                int *l_1499 = &l_1114;
                int *l_1500 = &l_1114;
                int *l_1502 = (void*)0;
                int *l_1503 = &g_1278;
                int *l_1504 = &l_1261;
                int *l_1505 = (void*)0;
                int *l_1506 = &l_1461;
                int *l_1509 = &g_187;
                int *l_1510 = (void*)0;
                int *l_1511 = (void*)0;
                int *l_1512 = &l_1261;
                int *l_1513 = &l_1115;
                int *l_1514 = &l_1428;
                int *l_1515 = &g_946;
                int *l_1516 = &g_946;
                int *l_1517 = &l_1084;
                int *l_1518 = &l_1096;
                int *l_1519 = &l_1363.f2;
                int *l_1520 = &l_1459;
                int *l_1522 = (void*)0;
                int *l_1523 = &l_1078;
                int *l_1524 = &l_1114;
                int *l_1525 = &l_1363.f2;
                int *l_1526 = &l_1501;
                int *l_1527 = &l_1115;
                int *l_1528 = &l_1096;
                int *l_1529 = &l_1521;
                int *l_1530 = (void*)0;
                int *l_1531 = &l_1493;
                int *l_1532 = &l_1501;
                int *l_1533 = (void*)0;
                int *l_1534 = (void*)0;
                int *l_1535 = &l_1459;
                int *l_1536 = &l_1428;
                int *l_1537 = (void*)0;
                int *l_1538 = &l_1507;
                int l_1539 = (-7L);
                int *l_1540 = &l_1363.f2;
                int *l_1542 = &l_1541;
                int *l_1543 = &l_1084;
                int *l_1544 = (void*)0;
                int *l_1545 = &l_1078;
                int *l_1546 = &l_1115;
                int *l_1547 = &l_1501;
                int *l_1548 = &l_1084;
                int *l_1549 = (void*)0;
                int *l_1550 = &g_65;
                int *l_1551 = (void*)0;
                --g_1552;
            }
            (*l_1172) |= (((safe_rshift_func_int8_t_s_s((***l_1402), 2)) < (((***l_1402) > p_24) ^ func_33(g_1557))) < ((safe_lshift_func_int16_t_s_u(((func_33((**g_1064)) != (safe_add_func_int16_t_s_s(func_33((**l_1399)), g_32.f3))) != 0x372ED3BFL), p_24)) > p_24));
            (***g_651) &= (safe_lshift_func_uint16_t_u_u(p_24, (*l_1075)));
            (***g_651) |= (*l_1172);
        }
        (*l_1172) ^= (***g_651);
        (*l_1075) = (0x4EABBD0AL != p_24);
    }
    else
    {
        int *l_1572 = &l_1115;
        struct S0 *l_1573 = &g_1574;
        struct S0 *l_1599 = &g_1600;
        struct S1 *l_1615 = (void*)0;
        int l_1639 = 7L;
        int l_1650 = 1L;
        int l_1715 = 0L;
        int *l_1866 = &l_1131;
        int *l_1867 = &l_1564.f2;
        int *l_1868 = &l_1639;
        int *l_1869 = (void*)0;
        int *l_1870 = &g_84.f2;
        int *l_1871 = &g_187;
        int *l_1872 = (void*)0;
        int *l_1873 = &l_1115;
        int *l_1874 = &l_1114;
        int *l_1875 = &l_1131;
        int *l_1876 = &l_1115;
        int *l_1877 = &l_1078;
        int *l_1878 = &l_1564.f2;
        int *l_1879 = &l_1103;
        int *l_1880 = &l_1650;
        int *l_1881 = &g_946;
        int *l_1882 = &g_84.f2;
        int *l_1883 = (void*)0;
        int *l_1884 = &l_1639;
        int *l_1885 = &l_1639;
        int *l_1886 = &l_1103;
        int *l_1887 = (void*)0;
        int *l_1888 = &l_1090;
        int *l_1889 = &l_1715;
        int *l_1890 = &g_946;
        int *l_1891 = (void*)0;
        int *l_1892 = &l_1639;
        int *l_1893 = (void*)0;
        int *l_1894 = &l_1078;
        int *l_1895 = &l_1090;
        int *l_1896 = &l_1114;
        int *l_1897 = &l_1715;
        int *l_1898 = &g_1278;
        int *l_1899 = &l_1084;
        int *l_1900 = &l_1639;
        int *l_1901 = &g_65;
        int *l_1902 = (void*)0;
        int *l_1903 = &g_65;
        int *l_1904 = &g_187;
        int l_1905 = 0x9BFAEC3DL;
        int *l_1906 = &l_1564.f2;
        int *l_1907 = &l_1114;
        int *l_1908 = &l_1905;
        int l_1909 = 1L;
        int *l_1910 = &g_65;
        int *l_1912 = &l_1909;
        int l_1913 = 1L;
        int *l_1914 = &l_1639;
        int *l_1915 = (void*)0;
        int *l_1916 = &l_1650;
        int *l_1917 = &g_1278;
        int *l_1918 = &l_1131;
        int *l_1919 = &g_1278;
        int *l_1920 = &l_1084;
        int *l_1921 = &l_1913;
        int *l_1922 = &l_1913;
        int *l_1923 = &l_1115;
        int *l_1924 = &l_1650;
        int *l_1925 = (void*)0;
        int l_1926 = 0x7768BB18L;
        int *l_1927 = &l_1639;
        int *l_1928 = &l_1114;
        int *l_1929 = &l_1103;
        int *l_1930 = &l_1084;
        int l_1931 = 0xFBBF601BL;
        int *l_1932 = &l_1114;
        int *l_1933 = &l_1911;
        int *l_1934 = &l_1909;
        int l_1935 = (-1L);
        int *l_1936 = &l_1084;
        int *l_1937 = &l_1115;
        int *l_1938 = &l_1650;
        int *l_1939 = &g_84.f2;
        int *l_1940 = &l_1913;
        int *l_1941 = &l_1096;
        int *l_1942 = &l_1084;
        int *l_1943 = &l_1909;
        int *l_1944 = &g_187;
        int *l_1945 = &l_1911;
        int *l_1946 = &l_1926;
        int *l_1947 = &l_1096;
        int *l_1948 = &l_1911;
        int *l_1949 = &g_84.f2;
        int *l_1950 = &l_1650;
        int *l_1951 = (void*)0;
        int *l_1952 = &l_1913;
        int *l_1953 = &g_187;
        int *l_1954 = &g_84.f2;
        int *l_1955 = &l_1084;
        int *l_1956 = &l_1905;
        int l_1957 = 2L;
        int *l_1958 = &g_187;
        int *l_1959 = &l_1131;
        int *l_1960 = &l_1564.f2;
        int *l_1961 = &l_1564.f2;
        int *l_1962 = &l_1564.f2;
        int *l_1963 = &l_1639;
        int *l_1964 = &l_1090;
        int *l_1965 = &l_1078;
        int *l_1967 = &l_1096;
        int *l_1968 = &l_1935;
        int *l_1970 = &l_1909;
        int *l_1971 = (void*)0;
        int *l_1972 = (void*)0;
        int *l_1973 = (void*)0;
        int *l_1975 = &l_1114;
        int *l_1976 = &l_1114;
        int *l_1977 = &l_1114;
        int *l_1978 = &l_1090;
        int *l_1979 = (void*)0;
        int *l_1981 = &g_65;
        int *l_1982 = (void*)0;
        int *l_1983 = &l_1935;
        int *l_1984 = &g_187;
        int *l_1985 = (void*)0;
        int *l_1986 = (void*)0;
        int *l_1987 = &g_84.f2;
        int *l_1988 = &l_1966;
        int *l_1989 = &l_1650;
        int *l_1990 = &l_1115;
        int *l_1991 = &g_65;
        int l_1992 = 0x43497719L;
        int l_1993 = (-1L);
        int *l_1994 = (void*)0;
        if ((g_223 == ((-8L) || 0xBA0AL)))
        {
            struct S1 *l_1569 = &l_1564;
            struct S1 ** const l_1568 = &l_1569;
            struct S1 ** const *l_1567 = &l_1568;
            struct S0 l_1577 = {0L,0x90L,9UL,0x81L,0xBEL,0xFE04L,0xD1L,-1L,0x87B2F12AL};
            char l_1578 = (-6L);
            int l_1590 = 0x9B3DF4F1L;
            int l_1681 = 1L;
            int l_1683 = (-1L);
            int l_1730 = (-1L);
            int *l_1854 = &l_1090;
            (**g_651) = func_76(g_1278, (*l_1075), p_24, l_1564, ((safe_add_func_uint16_t_u_u((0x6879L == (~(l_1567 == (void*)0))), (((g_1557.f3 && ((safe_mod_func_int8_t_s_s((l_1572 != (void*)0), g_1557.f7)) || p_24)) && p_25) < (*l_1149)))) == (**g_652)));
            l_1573 = (*g_1064);
            if ((safe_lshift_func_int16_t_s_u(func_72((*g_652), g_84.f5.f6, l_1577), (0x9B5569C4L >= ((p_24 > l_1578) ^ l_1577.f4)))))
            {
                for (g_946 = 0; (g_946 > (-22)); g_946 = safe_sub_func_int16_t_s_s(g_946, 4))
                {
                    (**g_651) = (void*)0;
                    return p_25;
                }
                return g_638;
            }
            else
            {
                struct S0 l_1589 = {0L,0x2CL,4294967295UL,0xC6L,0x85L,0x97FDL,0xA8L,-1L,0xAA8A560CL};
                int *l_1601 = &l_1564.f2;
                for (l_1577.f2 = 24; (l_1577.f2 <= 6); l_1577.f2--)
                {
                    unsigned short l_1585 = 0xDA30L;
                    (*l_1075) = ((g_223 <= 65529UL) | (*l_1572));
                    if ((*g_131))
                    {
                        (**g_652) = (safe_mod_func_uint32_t_u_u(l_1585, func_33((**g_1064))));
                    }
                    else
                    {
                        unsigned char l_1586 = 1UL;
                        --l_1586;
                    }
                    (*l_1075) |= (p_25 >= g_32.f2);
                }
                (***g_651) = (p_24 && func_33(l_1589));
                if (((0x00ED9AD4L < l_1577.f6) == (l_1577.f1 | l_1590)))
                {
                    char l_1591 = (-5L);
                    int l_1598 = 6L;
                    (**g_652) ^= (*l_1075);
                    l_1591 = p_24;
                    l_1598 = (safe_rshift_func_uint16_t_u_u((&l_1568 == l_1594), (l_1589.f6 > ((g_84.f5.f7 != (safe_sub_func_uint32_t_u_u(p_25, l_1577.f2))) != 255UL))));
                    l_1599 = (*g_1064);
                }
                else
                {
                    unsigned short l_1611 = 0x8D86L;
                    (*g_652) = l_1601;
                    (*l_1572) &= (func_26((safe_add_func_uint32_t_u_u(g_946, (*g_131))), (**g_1064), ((safe_add_func_int16_t_s_s(((((((0x7A1CE969L | (safe_unary_minus_func_uint8_t_u(((-5L) ^ (**g_652))))) < g_1385) > ((safe_add_func_int16_t_s_s(l_1577.f4, (safe_add_func_uint16_t_u_u((&l_1084 != (void*)0), g_84.f5.f3)))) < 0x68L)) != g_1557.f6) == (*l_1149)) <= p_24), 0UL)) != (-2L)), g_84.f5.f4, l_1611) && 0x19L);
                    (*l_1568) = &g_84;
                    (*l_1572) = ((safe_unary_minus_func_uint32_t_u(0UL)) < ((**g_651) == (*g_652)));
                }
            }
            if ((safe_add_func_int32_t_s_s(((p_24 >= 0x39L) | ((*l_1568) == &g_84)), ((0xAB0114CCL == ((l_1615 != (void*)0) < l_1616)) && p_25))))
            {
                unsigned char l_1661 = 0xFDL;
                int l_1664 = 1L;
                int l_1713 = 0xD35A66B2L;
                int l_1740 = 0xEEDC6685L;
                for (l_1577.f0 = 0; (l_1577.f0 >= 9); l_1577.f0 = safe_add_func_uint16_t_u_u(l_1577.f0, 7))
                {
                    unsigned l_1636 = 0UL;
                    int l_1647 = 0x2EF7E0E9L;
                    int l_1726 = 0L;
                    int l_1735 = (-5L);
                    unsigned l_1758 = 0UL;
                    if ((*l_1149))
                        break;
                    if (func_33((**g_1064)))
                    {
                        int *l_1619 = &l_1114;
                        int *l_1620 = (void*)0;
                        int *l_1621 = (void*)0;
                        int *l_1622 = &l_1084;
                        int *l_1623 = &l_1084;
                        int *l_1624 = &l_1103;
                        int l_1625 = (-7L);
                        int *l_1626 = &g_187;
                        int *l_1627 = &l_1564.f2;
                        int *l_1628 = &g_84.f2;
                        int *l_1629 = &g_1278;
                        int *l_1630 = &g_1278;
                        int *l_1631 = &l_1078;
                        int *l_1632 = &l_1103;
                        int *l_1633 = (void*)0;
                        int *l_1634 = &l_1115;
                        int *l_1635 = &l_1078;
                        int *l_1640 = &l_1078;
                        int *l_1641 = &l_1639;
                        int *l_1642 = &l_1131;
                        int *l_1643 = &l_1625;
                        int *l_1644 = (void*)0;
                        int *l_1645 = &l_1564.f2;
                        int *l_1646 = &g_65;
                        int *l_1648 = &l_1564.f2;
                        int *l_1649 = &g_65;
                        int *l_1651 = &l_1639;
                        int *l_1652 = &l_1650;
                        int l_1653 = 0x59DF1B1BL;
                        int *l_1654 = &g_1278;
                        int *l_1655 = &l_1114;
                        int *l_1656 = &l_1131;
                        int *l_1657 = &l_1564.f2;
                        int *l_1658 = &l_1078;
                        int *l_1659 = &l_1084;
                        int *l_1660 = &l_1564.f2;
                        l_1636--;
                        if (p_24)
                            break;
                        --l_1661;
                        if ((*l_1075))
                            break;
                    }
                    else
                    {
                        int *l_1665 = &l_1647;
                        int *l_1666 = &g_946;
                        int *l_1667 = &l_1114;
                        int *l_1668 = &g_946;
                        int *l_1669 = &l_1647;
                        int *l_1670 = &g_65;
                        int *l_1671 = &l_1647;
                        int *l_1672 = (void*)0;
                        int *l_1673 = (void*)0;
                        int *l_1674 = &g_84.f2;
                        int *l_1675 = &l_1078;
                        int *l_1676 = &l_1084;
                        int *l_1677 = &l_1115;
                        int *l_1678 = &l_1096;
                        int *l_1679 = (void*)0;
                        int *l_1680 = &l_1131;
                        int *l_1682 = &l_1647;
                        int *l_1684 = &g_187;
                        int *l_1685 = &l_1103;
                        int *l_1686 = &l_1639;
                        int *l_1687 = &l_1647;
                        int *l_1688 = (void*)0;
                        int *l_1689 = &l_1090;
                        int *l_1690 = &l_1131;
                        int *l_1691 = &l_1096;
                        int *l_1692 = &g_638;
                        int *l_1693 = &g_1278;
                        int *l_1694 = (void*)0;
                        int *l_1695 = (void*)0;
                        int *l_1696 = &l_1114;
                        int *l_1697 = (void*)0;
                        int *l_1698 = &g_84.f2;
                        int *l_1699 = &l_1131;
                        int *l_1700 = (void*)0;
                        int *l_1701 = &g_84.f2;
                        int *l_1702 = &l_1090;
                        int *l_1703 = &l_1590;
                        int *l_1704 = &l_1647;
                        int *l_1705 = &g_1278;
                        int *l_1706 = &g_638;
                        int *l_1707 = &g_946;
                        int *l_1708 = &l_1084;
                        int *l_1709 = &l_1090;
                        int *l_1710 = &g_187;
                        int *l_1711 = &l_1590;
                        int *l_1712 = &l_1115;
                        int *l_1714 = &l_1084;
                        int *l_1716 = &g_65;
                        int *l_1717 = &l_1650;
                        int *l_1718 = (void*)0;
                        int l_1719 = 0xBEABEF0DL;
                        int *l_1720 = &l_1719;
                        int *l_1721 = &l_1564.f2;
                        int *l_1722 = &l_1090;
                        int *l_1723 = &g_84.f2;
                        int *l_1724 = &l_1681;
                        int *l_1725 = (void*)0;
                        int *l_1727 = &l_1681;
                        int *l_1728 = &l_1131;
                        int *l_1729 = &l_1078;
                        int *l_1731 = &l_1650;
                        int *l_1732 = &g_1278;
                        int *l_1733 = &g_638;
                        int *l_1734 = &l_1719;
                        int *l_1736 = (void*)0;
                        int *l_1737 = &l_1664;
                        int *l_1738 = &l_1715;
                        int *l_1739 = &g_946;
                        int *l_1741 = (void*)0;
                        int l_1742 = (-5L);
                        int *l_1743 = &g_187;
                        int *l_1744 = &l_1681;
                        int *l_1746 = &l_1650;
                        int *l_1747 = &l_1681;
                        int *l_1748 = &l_1713;
                        g_1749++;
                        (*g_652) = &l_1730;
                    }
                    (***g_651) |= (l_1713 >= 0xA8L);
                    for (g_1574.f5 = 0; (g_1574.f5 >= 17); g_1574.f5 = safe_add_func_int8_t_s_s(g_1574.f5, 4))
                    {
                        char l_1763 = 0L;
                        int l_1766 = 0xB6023067L;
                        int *l_1767 = &g_65;
                        int *l_1768 = &l_1115;
                        int *l_1769 = (void*)0;
                        int *l_1770 = (void*)0;
                        int *l_1771 = &g_187;
                        int *l_1772 = &l_1114;
                        int *l_1773 = (void*)0;
                        int *l_1774 = &l_1650;
                        int *l_1775 = &g_84.f2;
                        int *l_1776 = &l_1681;
                        int *l_1777 = &l_1096;
                        int *l_1778 = &l_1683;
                        int *l_1779 = &l_1590;
                        int *l_1780 = (void*)0;
                        int *l_1781 = &l_1730;
                        int *l_1782 = &l_1735;
                        int *l_1783 = &l_1115;
                        int *l_1784 = &l_1726;
                        int *l_1785 = &l_1647;
                        int *l_1786 = &l_1650;
                        int *l_1787 = &l_1713;
                        int *l_1788 = &g_638;
                        int *l_1789 = &l_1078;
                        int *l_1790 = &l_1766;
                        int *l_1791 = &l_1650;
                        int *l_1792 = &g_84.f2;
                        int *l_1793 = &l_1683;
                        int *l_1794 = (void*)0;
                        int *l_1795 = &l_1664;
                        int *l_1796 = &l_1664;
                        int *l_1797 = &g_65;
                        int *l_1798 = &l_1650;
                        int *l_1799 = (void*)0;
                        int *l_1800 = &l_1131;
                        int *l_1801 = &l_1103;
                        int *l_1802 = &l_1715;
                        int *l_1803 = &l_1590;
                        int *l_1804 = &l_1114;
                        int *l_1805 = &g_946;
                        int *l_1806 = (void*)0;
                        int *l_1807 = &l_1715;
                        int *l_1808 = &l_1664;
                        int *l_1809 = &g_65;
                        int *l_1810 = &l_1131;
                        int *l_1811 = &l_1647;
                        int *l_1812 = (void*)0;
                        int *l_1813 = &l_1078;
                        int *l_1814 = (void*)0;
                        int *l_1815 = (void*)0;
                        int *l_1816 = &l_1726;
                        int *l_1817 = &l_1664;
                        int *l_1818 = &g_638;
                        int *l_1819 = &l_1713;
                        int *l_1820 = &l_1096;
                        int *l_1821 = &l_1647;
                        int *l_1822 = &l_1096;
                        int *l_1823 = &l_1713;
                        int *l_1824 = &l_1114;
                        int *l_1825 = &l_1078;
                        int *l_1826 = &l_1766;
                        int *l_1827 = &l_1564.f2;
                        int *l_1828 = &g_187;
                        int *l_1829 = &l_1078;
                        int *l_1830 = &l_1564.f2;
                        int *l_1831 = &l_1681;
                        int *l_1832 = (void*)0;
                        int *l_1833 = &l_1078;
                        int *l_1834 = (void*)0;
                        int l_1835 = 9L;
                        int *l_1836 = &l_1681;
                        int *l_1837 = (void*)0;
                        int *l_1838 = &l_1096;
                        int *l_1839 = &g_65;
                        int *l_1840 = &g_65;
                        int *l_1841 = &l_1664;
                        int *l_1842 = &g_946;
                        int *l_1843 = &g_946;
                        int *l_1844 = &l_1090;
                        int *l_1845 = &l_1103;
                        int *l_1846 = &l_1639;
                        int *l_1847 = &l_1647;
                        int *l_1848 = &l_1683;
                        int *l_1849 = &l_1564.f2;
                        int *l_1850 = &l_1115;
                        (**g_651) = func_76((g_84.f5.f0 || (+(safe_lshift_func_int8_t_s_u((0x27B8L > (safe_mod_func_uint16_t_u_u(g_245, g_1557.f2))), l_1758)))), (safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((&l_1075 == (void*)0), (l_1763 | ((*g_1064) != (*g_1064))))) > p_24), 0x29L)), p_25, g_84, p_24);
                        l_1766 = (safe_add_func_int16_t_s_s(p_24, 6UL));
                        --g_1851;
                    }
                }
            }
            else
            {
                int *l_1860 = &l_1096;
                struct S1 l_1861 = {0xC15E3666L,-4L,-4L,0L,0xA16C589FL,{9L,0x37L,0x070AADA0L,255UL,0xA4L,65531UL,0x83L,0x425CL,0x35947256L},0x21L};
                (**l_1567) = &g_84;
                (*g_131) = (-8L);
                (**g_651) = l_1854;
                (**g_651) = func_76((g_1855 == &g_1856), (func_26(g_84.f5.f7, (**l_1158), ((safe_lshift_func_uint8_t_u_u((l_1860 == (**g_651)), 3)) < (***g_651)), g_32.f3, ((*l_1572) && (*l_1860))) | 2UL), p_24, l_1861, p_24);
            }
        }
        else
        {
            for (l_1306 = 15; (l_1306 > 4); l_1306 = safe_sub_func_int16_t_s_s(l_1306, 3))
            {
                (*g_652) = (void*)0;
                (*l_1158) = (*g_1064);
                (*l_1149) = (safe_lshift_func_int16_t_s_u(g_1574.f7, 5));
            }
            (*g_652) = (**g_651);
        }
        ++g_1995;
        return p_24;
    }
    (**g_651) = &l_1980;
    return p_25;
}







static const int func_26(char p_27, struct S0 p_28, unsigned char p_29, unsigned p_30, unsigned short p_31)
{
    int l_585 = (-1L);
    struct S1 l_590 = {-8L,-1L,7L,0xA9L,0xF4CD234EL,{0x6C85L,0xC4L,0xD4B7D2DFL,255UL,0x1EL,0xCE88L,1UL,0x8188L,0x2DB29C9EL},0x3AL};
    struct S0 l_701 = {2L,0xD0L,0xE8F6FAFFL,255UL,6UL,0x5068L,1UL,0L,0x75AE3038L};
    int l_752 = 5L;
    int l_818 = 0L;
    int l_833 = 0xE935D95EL;
    int l_846 = 1L;
    int l_894 = 1L;
    int l_1020 = 0x0620666BL;
    int l_1038 = 0x49BAF866L;
    for (g_84.f5.f4 = 14; (g_84.f5.f4 != 57); g_84.f5.f4 = safe_add_func_uint8_t_u_u(g_84.f5.f4, 1))
    {
        unsigned l_579 = 0UL;
        int **l_580 = (void*)0;
        const char l_618 = 0x1BL;
        struct S1 l_653 = {6L,0xFCE7L,0L,-1L,0x42C8DAD5L,{-1L,255UL,0xC4F68496L,1UL,250UL,0x6CB4L,0x9FL,-3L,0L},0xE1L};
        unsigned char l_688 = 0x41L;
        struct S0 *l_702 = (void*)0;
        int l_724 = 3L;
        int l_788 = 1L;
        int l_828 = 0x4208F383L;
        int l_829 = 5L;
        g_131 = func_76(l_579, l_579, ((void*)0 != l_580), g_84, (0x2A76L >= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_185, 9)), (l_585 > ((((p_28.f5 <= g_65) | 0x623326BAL) ^ l_585) >= 0UL))))));
        g_131 = func_76(g_32.f1, (safe_add_func_int16_t_s_s(g_84.f5.f8, (safe_mod_func_int8_t_s_s(p_28.f6, g_84.f6)))), l_585, l_590, l_585);
        for (g_32.f2 = 13; (g_32.f2 <= 6); g_32.f2 = safe_sub_func_int32_t_s_s(g_32.f2, 9))
        {
            int l_620 = (-1L);
            struct S0 l_654 = {-5L,0x29L,4294967295UL,3UL,0x19L,0xE6E4L,246UL,1L,-8L};
            const int *l_677 = (void*)0;
            const int ** const l_676 = &l_677;
            int l_725 = 0x8E3B2298L;
            int l_830 = 1L;
            for (g_84.f5.f5 = (-30); (g_84.f5.f5 <= 46); g_84.f5.f5 = safe_add_func_uint16_t_u_u(g_84.f5.f5, 5))
            {
                struct S0 ** const l_617 = (void*)0;
                struct S1 l_619 = {0x3F2D43C9L,0x28CBL,0xF12418ACL,0L,4L,{1L,0xBEL,0xEF2AA02DL,0UL,1UL,4UL,1UL,0x589FL,-1L},0x53L};
                unsigned l_639 = 0x40813638L;
                short l_673 = 1L;
            }
            if ((safe_sub_func_int8_t_s_s(func_33(p_28), ((safe_lshift_func_int16_t_s_s(g_2, 4)) ^ (((void*)0 != &g_32) != g_84.f5.f6)))))
            {
                int **l_703 = &g_131;
                (*g_131) = p_28.f7;
                if (p_28.f6)
                {
                    int *l_696 = &l_653.f2;
                    if ((*g_131))
                        break;
                    (*l_696) &= (!(((safe_unary_minus_func_uint16_t_u(p_31)) == (*g_131)) <= (safe_add_func_int8_t_s_s(g_84.f5.f6, (1UL & g_84.f6)))));
                    return (*g_131);
                }
                else
                {
                    (*g_131) |= (safe_sub_func_uint32_t_u_u(((!0x72L) == g_32.f6), (((func_33(l_701) >= ((void*)0 != l_702)) || (-1L)) || (l_703 != (*g_651)))));
                    (***g_651) |= l_590.f5.f3;
                }
                (***g_651) = (safe_rshift_func_uint8_t_u_u(0x4EL, 3));
                if (l_590.f5.f3)
                {
                    unsigned l_710 = 4UL;
                    int *l_711 = &g_638;
                    (*l_676) = (*l_676);
                    (*l_711) &= ((((safe_add_func_int8_t_s_s(((g_84.f6 == (0UL || 65526UL)) & p_28.f6), ((safe_rshift_func_int16_t_s_u(l_710, 13)) >= (p_29 && func_72((*g_652), ((**l_703) >= func_33(l_654)), g_84.f5))))) == l_701.f0) || p_28.f0) ^ 0x6E73L);
                    return p_28.f8;
                }
                else
                {
                    (**g_652) = p_28.f5;
                }
            }
            else
            {
                unsigned l_714 = 4294967294UL;
                int l_756 = 0x63889E4DL;
                int l_832 = 0xA4A6100CL;
                if ((safe_mod_func_uint32_t_u_u((p_27 >= g_84.f1), (g_32.f7 || (((0xCFL & 255UL) && g_84.f5.f5) >= (0x4B48B606L == (g_188 & ((l_714 != g_32.f3) == g_84.f2))))))))
                {
                    struct S0 **l_715 = &l_702;
                    (*l_715) = l_702;
                    (*g_131) |= ((p_28.f6 > p_31) > l_590.f2);
                }
                else
                {
                    int *l_716 = &l_585;
                    int *l_717 = &l_585;
                    int *l_718 = &l_590.f2;
                    int *l_719 = &l_585;
                    int *l_720 = &g_187;
                    int *l_721 = &g_187;
                    int *l_722 = &l_653.f2;
                    int *l_723 = &g_187;
                    int *l_726 = &l_724;
                    int *l_727 = &l_725;
                    int *l_728 = &l_724;
                    int l_729 = 0xB0D939E8L;
                    int *l_730 = (void*)0;
                    int *l_731 = &g_84.f2;
                    int *l_732 = &l_590.f2;
                    int *l_733 = &g_65;
                    int *l_734 = &l_724;
                    int *l_735 = &l_585;
                    int *l_736 = &g_187;
                    int *l_737 = &l_725;
                    int *l_738 = &l_585;
                    int *l_739 = &g_65;
                    int *l_740 = &g_187;
                    int *l_741 = &l_729;
                    int *l_742 = &l_729;
                    int *l_743 = (void*)0;
                    int *l_744 = &l_729;
                    int *l_745 = (void*)0;
                    int *l_746 = &g_65;
                    int *l_747 = &g_65;
                    int *l_748 = (void*)0;
                    int *l_749 = &g_187;
                    int *l_750 = &g_638;
                    int *l_751 = &g_84.f2;
                    int *l_753 = (void*)0;
                    int *l_754 = &g_84.f2;
                    int *l_755 = (void*)0;
                    int *l_757 = &l_752;
                    int *l_758 = &l_724;
                    int *l_759 = &l_752;
                    int *l_760 = &g_65;
                    int *l_761 = (void*)0;
                    int *l_762 = (void*)0;
                    int *l_763 = &g_638;
                    int *l_764 = &l_724;
                    int *l_765 = (void*)0;
                    int *l_766 = (void*)0;
                    int *l_767 = &g_84.f2;
                    int *l_768 = &g_65;
                    int *l_769 = &l_729;
                    int *l_770 = (void*)0;
                    int *l_771 = &l_729;
                    int *l_772 = (void*)0;
                    int l_773 = (-1L);
                    int *l_774 = (void*)0;
                    int *l_775 = &g_638;
                    int *l_776 = &g_187;
                    int *l_777 = (void*)0;
                    int *l_778 = &l_725;
                    int *l_779 = (void*)0;
                    int *l_780 = &l_585;
                    int *l_781 = &l_725;
                    int *l_782 = &l_590.f2;
                    int *l_783 = &g_84.f2;
                    int *l_784 = &l_653.f2;
                    int *l_785 = &l_725;
                    int *l_786 = &g_84.f2;
                    int *l_787 = &g_84.f2;
                    int *l_789 = &g_638;
                    int *l_790 = &l_773;
                    int *l_791 = (void*)0;
                    int *l_792 = (void*)0;
                    int *l_793 = &g_638;
                    int *l_794 = &g_84.f2;
                    int *l_795 = &g_65;
                    int *l_796 = (void*)0;
                    int *l_797 = &l_752;
                    int *l_798 = &g_65;
                    int *l_799 = &l_756;
                    int *l_800 = &l_773;
                    int l_801 = 0xDA6D2872L;
                    int *l_802 = &l_653.f2;
                    int *l_803 = &l_729;
                    int *l_804 = &g_65;
                    int *l_805 = (void*)0;
                    int *l_806 = &l_756;
                    int *l_807 = &l_590.f2;
                    int *l_808 = (void*)0;
                    int *l_809 = &l_801;
                    int *l_810 = (void*)0;
                    int *l_811 = (void*)0;
                    int *l_812 = &l_725;
                    int *l_813 = &l_756;
                    int *l_814 = &g_65;
                    int *l_815 = &g_84.f2;
                    int *l_816 = &g_65;
                    int *l_817 = &l_725;
                    int *l_819 = &l_752;
                    int l_820 = 1L;
                    int *l_821 = (void*)0;
                    int *l_822 = &l_818;
                    int *l_823 = &l_590.f2;
                    int *l_824 = &l_729;
                    int *l_825 = &g_65;
                    int *l_826 = &l_724;
                    int *l_827 = &g_65;
                    int *l_831 = &l_801;
                    int *l_834 = &g_84.f2;
                    int *l_835 = &g_187;
                    int *l_836 = &l_801;
                    int *l_837 = &l_725;
                    int *l_838 = &l_585;
                    int *l_839 = &l_832;
                    int *l_840 = &l_773;
                    int *l_841 = &l_829;
                    int *l_842 = &l_830;
                    int *l_843 = &l_818;
                    int *l_844 = (void*)0;
                    int *l_845 = &g_65;
                    int *l_847 = &l_724;
                    unsigned l_848 = 0x9A62F582L;
                    --l_848;
                    (*l_726) = func_72(&l_729, ((-2L) <= g_32.f2), g_84.f5);
                    for (l_833 = 0; (l_833 > 14); l_833++)
                    {
                        (*l_797) ^= (0x2E2A44E8L && p_30);
                    }
                    if ((***g_651))
                        break;
                }
                (**g_652) = (p_28.f4 ^ p_30);
                (**g_651) = (**g_651);
            }
        }
        for (g_84.f4 = 0; (g_84.f4 == 7); ++g_84.f4)
        {
            unsigned char l_855 = 1UL;
            (***g_651) = l_855;
        }
    }
    if ((((0x9DC975D2L > ((void*)0 == &g_32)) || l_590.f6) == (255UL == (+(g_69 >= p_28.f2)))))
    {
        int *l_856 = &g_187;
        int l_867 = 0x3B653CF7L;
        int l_876 = (-3L);
        int l_897 = 0L;
        int l_917 = (-4L);
        int l_932 = 3L;
        int l_948 = 0xB86E02A3L;
        unsigned short l_964 = 65535UL;
        int *l_967 = &l_894;
        int *l_968 = &l_752;
        int *l_969 = &l_897;
        int *l_970 = (void*)0;
        int *l_971 = &l_818;
        int *l_972 = &l_894;
        int *l_973 = &g_84.f2;
        int *l_974 = &l_894;
        int *l_975 = &g_187;
        int *l_976 = &l_876;
        int *l_977 = &l_867;
        int *l_978 = &l_897;
        int *l_979 = &l_867;
        int *l_980 = &l_846;
        int *l_981 = &l_590.f2;
        int *l_982 = (void*)0;
        int *l_983 = (void*)0;
        int *l_984 = &l_867;
        int *l_985 = &l_590.f2;
        int *l_986 = &l_846;
        int *l_987 = (void*)0;
        int *l_988 = &l_590.f2;
        int *l_989 = &g_65;
        int *l_990 = &l_585;
        int *l_991 = &l_590.f2;
        int *l_992 = &l_932;
        int *l_993 = &g_946;
        int *l_994 = &l_897;
        int *l_995 = &g_187;
        int *l_996 = (void*)0;
        int *l_997 = &l_894;
        int *l_998 = &g_187;
        int *l_999 = &l_867;
        int *l_1000 = &l_752;
        int *l_1001 = &l_932;
        int *l_1002 = (void*)0;
        int *l_1003 = &g_638;
        int *l_1004 = &l_818;
        int *l_1005 = (void*)0;
        int *l_1006 = &l_585;
        int *l_1007 = &l_876;
        int *l_1008 = &l_948;
        int *l_1009 = (void*)0;
        int *l_1010 = &l_917;
        int *l_1011 = &g_65;
        int *l_1012 = &l_897;
        int *l_1013 = (void*)0;
        int *l_1014 = &l_818;
        int *l_1015 = &g_65;
        int *l_1016 = &l_818;
        int *l_1017 = &g_187;
        int *l_1018 = &l_876;
        int *l_1019 = &l_846;
        int *l_1021 = &l_894;
        int *l_1022 = &l_917;
        int *l_1023 = &l_917;
        int *l_1024 = (void*)0;
        int *l_1025 = &l_876;
        int *l_1026 = &g_187;
        int *l_1027 = &l_585;
        int *l_1028 = &g_638;
        int *l_1029 = (void*)0;
        int *l_1030 = (void*)0;
        int *l_1031 = &l_585;
        int l_1032 = 0xDB41C7A8L;
        int *l_1033 = &l_932;
        int *l_1034 = &l_897;
        int *l_1035 = &l_752;
        int *l_1036 = &l_917;
        int *l_1037 = &l_833;
        int *l_1039 = &l_585;
        int *l_1040 = &l_1038;
        int *l_1041 = &l_932;
        int *l_1042 = &g_187;
        int *l_1043 = &l_867;
        int *l_1044 = (void*)0;
        int l_1045 = 0xC2A42968L;
        int l_1046 = 0x25C6EDAEL;
        int *l_1047 = &l_948;
        int *l_1048 = &l_1038;
        int *l_1049 = &l_1046;
        int *l_1050 = &l_833;
        int *l_1051 = &g_638;
        int *l_1052 = &l_948;
        int l_1053 = 0xC7D40CDCL;
        int *l_1054 = &l_1038;
        int *l_1055 = &l_1038;
        int *l_1056 = &g_946;
        (*l_856) = 0x8E331A50L;
        if (((+g_857) | l_590.f0))
        {
            unsigned l_858 = 4294967295UL;
            (*l_856) |= l_858;
        }
        else
        {
            char l_861 = (-1L);
            int l_862 = 0x738DC0C6L;
            int *l_863 = &l_862;
            int *l_864 = &l_752;
            int *l_865 = &l_585;
            int *l_866 = (void*)0;
            int *l_868 = &l_590.f2;
            int *l_869 = (void*)0;
            int *l_870 = &l_752;
            int *l_871 = &g_638;
            int *l_872 = (void*)0;
            int *l_873 = &l_585;
            int *l_874 = (void*)0;
            int *l_875 = (void*)0;
            int *l_877 = &l_862;
            int *l_878 = &g_84.f2;
            int *l_879 = &l_590.f2;
            int *l_880 = &l_862;
            int *l_881 = &g_84.f2;
            int *l_882 = (void*)0;
            int *l_883 = (void*)0;
            int *l_884 = &l_585;
            int *l_885 = &l_818;
            int l_886 = 0xBD0D5142L;
            int *l_887 = &l_876;
            int *l_888 = &l_833;
            int *l_889 = &g_187;
            int *l_890 = (void*)0;
            int *l_891 = &g_187;
            int l_892 = 0x38D8F312L;
            int *l_893 = &l_876;
            int *l_895 = &l_867;
            int *l_896 = &l_892;
            int *l_898 = (void*)0;
            int *l_899 = &g_638;
            int *l_900 = &l_590.f2;
            int *l_901 = &l_818;
            int *l_902 = &l_585;
            int *l_903 = &l_833;
            int *l_904 = &g_638;
            int *l_905 = (void*)0;
            int *l_906 = &l_894;
            int *l_907 = &l_752;
            int *l_908 = &l_833;
            int *l_909 = &l_876;
            int *l_910 = &l_867;
            int *l_911 = &g_187;
            char l_912 = 0x01L;
            int *l_913 = &l_886;
            int *l_914 = &l_862;
            int *l_915 = &l_833;
            int *l_916 = &g_65;
            int *l_918 = &l_886;
            int *l_919 = &l_897;
            int *l_920 = &l_894;
            int *l_921 = &l_897;
            int *l_922 = &l_752;
            int *l_923 = &l_833;
            int *l_924 = &l_590.f2;
            int *l_925 = &l_876;
            int l_926 = 0x7717D998L;
            int *l_927 = &l_585;
            int *l_928 = &g_84.f2;
            int *l_929 = &l_926;
            int *l_930 = &l_917;
            int *l_931 = &g_638;
            int *l_933 = &l_892;
            int *l_934 = (void*)0;
            int *l_935 = &l_862;
            int *l_936 = &l_818;
            int *l_937 = (void*)0;
            int l_938 = 1L;
            int *l_939 = &l_938;
            int *l_940 = &l_917;
            int *l_941 = (void*)0;
            int *l_942 = &l_926;
            int *l_943 = &l_932;
            int *l_944 = &l_818;
            int *l_945 = &l_752;
            int *l_947 = &l_752;
            int *l_949 = (void*)0;
            int *l_950 = &l_948;
            int *l_951 = &l_833;
            int *l_952 = &l_590.f2;
            int *l_953 = &l_917;
            int *l_954 = &l_926;
            int *l_955 = &l_948;
            int *l_956 = &l_862;
            int *l_957 = (void*)0;
            int *l_958 = (void*)0;
            int *l_959 = &g_65;
            int *l_960 = &l_917;
            int *l_961 = (void*)0;
            int *l_962 = (void*)0;
            int *l_963 = (void*)0;
            for (g_857 = 0; (g_857 == (-4)); g_857 = safe_sub_func_uint8_t_u_u(g_857, 7))
            {
                (*l_856) &= 0L;
            }
            l_964--;
        }
        g_1057++;
    }
    else
    {
        int *l_1062 = (void*)0;
        int *l_1063 = &l_894;
        struct S0 **l_1066 = &g_1065;
        (*l_1063) = (safe_sub_func_uint16_t_u_u(g_32.f5, g_84.f5.f0));
        l_1066 = g_1064;
        (*l_1063) = (*l_1063);
    }
    (*g_652) = &g_638;
    for (p_30 = 0; (p_30 != 36); ++p_30)
    {
        (***g_651) |= (((((void*)0 != (*g_652)) ^ ((safe_mod_func_int32_t_s_s((-1L), (p_28.f3 || g_84.f3))) >= (0L < p_28.f3))) != ((safe_rshift_func_int8_t_s_u(p_28.f6, p_30)) || g_84.f5.f2)) >= l_701.f6);
    }
    return (*g_131);
}







static unsigned func_33(struct S0 p_34)
{
    int l_36 = (-1L);
    l_36 |= g_32.f6;
    return l_36;
}







static struct S0 func_37(char p_38, unsigned p_39, char p_40, int p_41, char p_42)
{
    char l_417 = 0L;
    int l_436 = 0xC47171A2L;
    int l_455 = (-1L);
    struct S0 l_469 = {0xD33FL,255UL,0UL,255UL,0xC1L,0x44BBL,1UL,0xB4EDL,0x34A8C5B1L};
    int ** const l_476 = &g_131;
    for (p_39 = (-13); (p_39 <= 12); p_39++)
    {
        unsigned l_402 = 0xF798E078L;
        const struct S0 *l_412 = &g_84.f5;
        const struct S0 **l_411 = &l_412;
        int l_422 = 8L;
        int l_426 = 0x461C5FAEL;
        int l_448 = 0x900326E5L;
        int l_534 = 0L;
        int l_541 = 0x5EE233FAL;
        int l_543 = (-1L);
        int *l_557 = &l_543;
        struct S1 l_572 = {0x4D4FCC94L,1L,0xD658C919L,0L,6L,{-7L,0UL,2UL,0x63L,0x80L,65530UL,0x71L,0x4FF2L,0x53BF5C43L},0x58L};
        if (g_32.f0)
            break;
        if (p_41)
        {
            unsigned short l_404 = 0x7700L;
            unsigned short l_463 = 1UL;
            int l_488 = 0x944A458AL;
            int l_497 = 1L;
            int l_505 = 0x4B93AAF6L;
            int l_523 = 4L;
            int l_530 = 1L;
            unsigned short l_550 = 0x0FF3L;
            for (p_40 = (-8); (p_40 < 28); p_40 = safe_add_func_int32_t_s_s(p_40, 7))
            {
                unsigned l_405 = 0x94391B95L;
                const struct S0 *l_407 = &g_32;
                int *l_418 = &g_84.f2;
                int l_462 = 1L;
                for (p_42 = 0; (p_42 != 20); p_42 = safe_add_func_int8_t_s_s(p_42, 2))
                {
                    unsigned l_401 = 0x192BC719L;
                    struct S0 l_403 = {0L,255UL,4294967295UL,254UL,0UL,65535UL,5UL,0xBB95L,0x3E8CAEB4L};
                    int *l_406 = &g_187;
                    const struct S0 **l_408 = &l_407;
                    unsigned l_466 = 0xF0E90282L;
                    (*l_406) ^= ((((safe_add_func_int16_t_s_s(((((func_33(func_53(g_32.f4)) != g_32.f7) >= (safe_rshift_func_int16_t_s_u((l_401 == 0x70E9L), ((l_402 == ((func_33(l_403) < l_404) > p_42)) && 0x5AACL)))) || p_38) || 0x83L), 0xCC7AL)) == 0x54DDF528L) | g_84.f0) | l_405);
                    (*l_408) = l_407;
                    if ((((((p_38 && (((((void*)0 != l_411) >= ((safe_add_func_uint16_t_u_u((p_42 <= (func_72(&g_187, (safe_rshift_func_uint16_t_u_s(l_405, 12)), func_53(l_402)) | p_40)), p_40)) == 0UL)) != g_32.f5) || p_38)) & 5UL) == 0xDD19L) & 0xE6B5L) || l_417))
                    {
                        struct S0 l_419 = {0x72C5L,2UL,1UL,1UL,0xABL,0x1157L,0x35L,0x347AL,0x62D5FF5CL};
                        (*l_411) = &g_32;
                        (*l_406) ^= (func_33((**l_408)) > (((func_72(l_418, p_40, l_419) ^ (p_40 != (func_33(l_419) == 0UL))) <= 0x63L) || 0x3AL));
                        (*l_418) = 0x712A338AL;
                        if (l_402)
                            continue;
                    }
                    else
                    {
                        int *l_420 = &g_65;
                        int *l_421 = &g_84.f2;
                        int *l_423 = (void*)0;
                        int *l_424 = &g_84.f2;
                        int *l_425 = &g_65;
                        int *l_427 = (void*)0;
                        int *l_428 = &l_426;
                        int *l_429 = &g_65;
                        int *l_430 = &g_65;
                        int *l_431 = &g_84.f2;
                        int *l_432 = &g_65;
                        int *l_433 = (void*)0;
                        int *l_434 = (void*)0;
                        int *l_435 = &l_422;
                        int *l_437 = &l_422;
                        int *l_438 = &l_426;
                        int *l_439 = (void*)0;
                        int *l_440 = &g_84.f2;
                        int *l_441 = &g_187;
                        int *l_442 = (void*)0;
                        int *l_443 = &g_84.f2;
                        int *l_444 = &g_84.f2;
                        int *l_445 = (void*)0;
                        int l_446 = 0L;
                        int *l_447 = &l_446;
                        int *l_449 = &g_187;
                        int *l_450 = (void*)0;
                        int *l_451 = (void*)0;
                        int *l_452 = (void*)0;
                        int *l_453 = (void*)0;
                        int *l_454 = &g_65;
                        int *l_456 = &l_422;
                        int *l_457 = &l_422;
                        int *l_458 = &l_446;
                        int *l_459 = &g_84.f2;
                        int *l_460 = &l_455;
                        int *l_461 = &l_426;
                        --l_463;
                        --l_466;
                        l_406 = &l_455;
                        (*l_461) = (((g_84.f2 ^ ((void*)0 != l_407)) || g_32.f4) <= 0x7443FE62L);
                    }
                }
                (*l_418) = (func_72(&l_426, ((func_33(l_469) > ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_463, (!(0x2A202F78L == func_72(&l_422, l_404, g_84.f5))))), 0xCD60L)) || 1L)) < g_84.f3), g_32) != 0x05L);
                (*l_418) = (0x5A0C25E5L ^ p_39);
            }
            g_187 ^= l_469.f4;
            for (g_84.f5.f7 = 0; (g_84.f5.f7 > (-6)); g_84.f5.f7 = safe_sub_func_int32_t_s_s(g_84.f5.f7, 1))
            {
                int **l_478 = &g_131;
                int ***l_477 = &l_478;
                int *l_479 = &g_84.f2;
                int *l_480 = &g_65;
                int *l_481 = &l_455;
                int l_482 = (-1L);
                int *l_483 = &l_436;
                int *l_484 = (void*)0;
                short l_485 = 0xB46AL;
                int *l_486 = &l_426;
                int *l_487 = &l_455;
                int *l_489 = &g_187;
                int *l_490 = &l_448;
                int *l_491 = (void*)0;
                int l_492 = (-6L);
                int *l_493 = &l_422;
                int *l_494 = &l_492;
                int *l_495 = &l_488;
                int *l_496 = &g_187;
                int *l_498 = &l_497;
                int *l_499 = &g_187;
                int l_500 = (-1L);
                int *l_501 = &l_492;
                int *l_502 = &l_422;
                int *l_503 = &g_65;
                int *l_504 = &l_436;
                int *l_506 = &l_436;
                int *l_507 = &g_84.f2;
                int *l_508 = &l_497;
                int *l_509 = &g_187;
                int *l_510 = &l_455;
                int *l_511 = &l_448;
                int *l_512 = (void*)0;
                int l_513 = 0x7710A52FL;
                int l_514 = (-8L);
                int *l_515 = &l_436;
                int *l_516 = &l_488;
                int *l_517 = &l_422;
                int *l_518 = &g_65;
                int *l_519 = &l_514;
                int *l_520 = &l_500;
                int *l_521 = (void*)0;
                int *l_522 = &l_448;
                int *l_524 = &l_492;
                int *l_525 = &l_505;
                int *l_526 = (void*)0;
                int *l_527 = (void*)0;
                int *l_528 = &l_426;
                int *l_529 = &l_482;
                int *l_531 = &l_513;
                int *l_532 = (void*)0;
                int *l_533 = &l_500;
                int *l_536 = (void*)0;
                int *l_537 = &l_455;
                int *l_538 = &l_514;
                int *l_539 = &l_455;
                int *l_540 = &l_455;
                int *l_542 = (void*)0;
                int *l_544 = &l_422;
                int *l_545 = &l_543;
                int *l_546 = &g_187;
                (*l_477) = l_476;
                ++g_547;
                (*l_522) &= ((g_32.f8 != l_463) > p_39);
            }
            l_550 = func_33(l_469);
        }
        else
        {
            for (g_84.f5.f5 = (-3); (g_84.f5.f5 != 2); g_84.f5.f5 = safe_add_func_int8_t_s_s(g_84.f5.f5, 2))
            {
                int *l_553 = &g_187;
                l_422 |= 0xB352B369L;
                l_553 = &l_543;
            }
            for (l_469.f0 = 0; (l_469.f0 < 7); l_469.f0++)
            {
                int *l_556 = &g_187;
                l_556 = &g_187;
                (*l_476) = &g_187;
            }
        }
        (*l_557) ^= l_402;
        if ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((0x918DL ^ (safe_unary_minus_func_uint16_t_u(((*l_557) != ((p_41 == (g_84.f5.f3 || (l_469.f3 != func_72(func_76(((safe_rshift_func_uint16_t_u_u(((((*l_557) == (4294967295UL | ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u((g_84.f5.f7 || ((p_39 >= p_42) < (*l_557))), 1L)))) >= p_40))) & 0x0DL) >= 0L), p_38)) > 1L), p_42, (*l_557), l_572, (*l_557)), g_223, g_84.f5)))) || g_32.f3))))), g_187)), (*l_557))) < (*l_557)), p_40)))
        {
            (*l_557) = g_245;
        }
        else
        {
            const unsigned l_573 = 4294967287UL;
            int **l_575 = &g_131;
            int ***l_574 = &l_575;
            struct S1 l_576 = {0L,0L,0x36CFAE2EL,0x42L,5L,{0x94B0L,0UL,3UL,0xADL,254UL,0UL,1UL,0x7147L,0x9C755FA3L},6L};
            (*l_476) = func_76(g_84.f5.f7, l_573, (&l_476 == l_574), l_576, ((l_469.f5 == g_223) || g_84.f5.f0));
        }
    }
    return l_469;
}







static struct S0 func_53(unsigned short p_54)
{
    unsigned l_58 = 1UL;
    int * const l_86 = &g_84.f2;
    struct S0 l_90 = {0L,5UL,0x5F2590C1L,0x9CL,0UL,0x18CAL,0x02L,0xFFAFL,-1L};
    unsigned l_110 = 0x438E4B99L;
    int l_142 = 1L;
    int l_153 = 0xB6F3936DL;
    struct S0 l_179 = {-1L,251UL,0UL,255UL,0xADL,0x3B9DL,4UL,8L,0x6FF799FEL};
    struct S1 l_180 = {0x40662CF2L,0x7346L,0x39F9920BL,-1L,1L,{0xC085L,0UL,4294967286UL,0xD8L,0xAFL,0xE199L,255UL,0L,1L},1L};
    int l_326 = (-1L);
    int l_329 = 1L;
    unsigned char l_372 = 255UL;
    char l_387 = 3L;
    char l_396 = 1L;
    int *l_397 = &l_180.f2;
    int **l_398 = &g_131;
    for (p_54 = 0; (p_54 == 40); ++p_54)
    {
        int l_59 = (-1L);
        int *l_63 = &l_59;
        if ((0UL == g_32.f3))
        {
            int *l_57 = (void*)0;
            int *l_60 = &l_59;
            l_58 = p_54;
            (*l_60) = l_59;
        }
        else
        {
            int *l_61 = (void*)0;
            int *l_62 = &l_59;
            (*l_62) &= p_54;
        }
        (*l_63) = p_54;
    }
    if (g_32.f6)
    {
        int *l_64 = &g_65;
        int *l_66 = (void*)0;
        int *l_67 = &g_65;
        int *l_68 = &g_65;
        int *l_85 = &g_84.f2;
        ++g_69;
        (*l_64) = func_72(func_76((0x8ECCDF33L ^ 4294967288UL), (safe_lshift_func_uint16_t_u_u(0x5ED5L, 8)), l_58, g_84, (((l_85 == l_86) != p_54) >= (!g_84.f4))), g_84.f5.f8, l_90);
    }
    else
    {
        int *l_95 = &g_65;
        struct S0 l_109 = {0x3892L,0x96L,0xCB199FC8L,1UL,4UL,6UL,0x3BL,-1L,0L};
        int l_141 = 1L;
        int l_160 = 4L;
        int l_163 = 0x2A5491B9L;
        int l_181 = 5L;
        int *l_249 = &l_163;
        int *l_250 = &l_163;
        int *l_251 = &l_141;
        int *l_252 = &l_142;
        int *l_253 = &l_180.f2;
        int *l_254 = &g_187;
        int *l_255 = &l_160;
        int *l_256 = &l_142;
        int *l_257 = &l_180.f2;
        int *l_258 = &g_65;
        int *l_259 = &g_65;
        int *l_260 = (void*)0;
        int *l_261 = &l_180.f2;
        int *l_262 = &g_187;
        int *l_263 = &g_84.f2;
        int *l_264 = &l_160;
        int *l_265 = &l_160;
        int *l_266 = (void*)0;
        int *l_267 = &l_163;
        int *l_268 = &l_163;
        int *l_269 = &l_163;
        int *l_270 = &l_153;
        int *l_271 = &l_153;
        int *l_272 = (void*)0;
        int *l_273 = &g_65;
        int *l_274 = &g_84.f2;
        int *l_275 = (void*)0;
        int *l_276 = &l_141;
        int *l_277 = &l_141;
        int *l_278 = &l_180.f2;
        int *l_279 = &l_153;
        int *l_280 = (void*)0;
        int *l_281 = &g_187;
        int *l_282 = (void*)0;
        int *l_283 = &g_84.f2;
        int *l_284 = &l_142;
        int *l_285 = &g_187;
        int *l_286 = (void*)0;
        int *l_287 = (void*)0;
        int *l_288 = &g_65;
        int *l_289 = &l_153;
        int *l_290 = &g_84.f2;
        int *l_291 = &g_187;
        int *l_292 = (void*)0;
        int *l_293 = &l_163;
        int *l_294 = &g_187;
        int *l_295 = &g_187;
        int *l_296 = &l_141;
        int *l_297 = &g_65;
        int *l_298 = &l_180.f2;
        int *l_299 = &l_163;
        int *l_300 = &l_163;
        int *l_301 = (void*)0;
        int *l_302 = (void*)0;
        int *l_303 = &g_84.f2;
        int *l_304 = &l_180.f2;
        int *l_305 = (void*)0;
        int *l_306 = &l_160;
        int *l_307 = (void*)0;
        int *l_308 = &l_141;
        int *l_309 = (void*)0;
        int *l_310 = &l_163;
        int *l_311 = &l_141;
        int *l_312 = &l_160;
        int *l_313 = &l_180.f2;
        int *l_314 = &l_141;
        int *l_315 = &l_160;
        int *l_316 = &g_84.f2;
        int *l_317 = &l_141;
        int *l_318 = (void*)0;
        int *l_319 = &l_142;
        int *l_320 = &l_160;
        int *l_321 = (void*)0;
        int *l_322 = &g_84.f2;
        int l_323 = (-2L);
        int l_324 = (-3L);
        int *l_325 = &l_153;
        int *l_327 = &l_142;
        int *l_328 = &l_153;
        int *l_330 = &l_329;
        int *l_331 = &l_180.f2;
        int *l_332 = (void*)0;
        int *l_333 = &l_141;
        int *l_334 = &l_323;
        int l_335 = 0x6B9F5D82L;
        int *l_336 = &l_141;
        int *l_337 = (void*)0;
        int *l_338 = (void*)0;
        int *l_339 = (void*)0;
        int *l_340 = &l_153;
        int *l_341 = &l_160;
        int *l_342 = &g_187;
        int *l_343 = &g_84.f2;
        int *l_344 = &l_335;
        int *l_345 = &l_141;
        int *l_346 = &l_163;
        int *l_347 = &l_329;
        int *l_348 = &g_187;
        int *l_349 = &l_323;
        int *l_350 = &l_326;
        int *l_351 = &l_180.f2;
        int *l_352 = &l_323;
        int *l_353 = (void*)0;
        int *l_354 = &l_335;
        int *l_355 = &g_84.f2;
        int *l_356 = &l_329;
        int *l_357 = &l_326;
        int *l_358 = &g_187;
        int *l_359 = &l_323;
        int *l_360 = &l_160;
        int *l_361 = (void*)0;
        int *l_362 = &l_323;
        int *l_363 = (void*)0;
        int *l_364 = &l_141;
        int *l_365 = (void*)0;
        int *l_366 = &l_180.f2;
        int *l_367 = &l_163;
        int *l_368 = &l_180.f2;
        int *l_369 = &l_324;
        int *l_370 = &l_329;
        int *l_371 = &l_153;
        if (((void*)0 == l_95))
        {
            return g_32;
        }
        else
        {
            short l_103 = (-1L);
            int *l_106 = (void*)0;
            struct S0 l_113 = {0x5069L,4UL,0x5199CEA1L,6UL,0x19L,0x6711L,255UL,9L,-3L};
            struct S1 l_130 = {-6L,-7L,1L,1L,1L,{-1L,0xCEL,0UL,1UL,0x71L,1UL,0xB7L,-1L,0L},0x08L};
            unsigned l_172 = 0x2663EEDCL;
            if ((safe_unary_minus_func_int32_t_s((~(safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((~65535UL), p_54)), (l_103 > (p_54 | (safe_rshift_func_uint8_t_u_s((((~(((l_106 != &g_65) || p_54) >= g_84.f5.f7)) && (safe_rshift_func_int8_t_s_u(func_33(l_109), l_110))) && g_2), 4)))))) || p_54), 0xEAFFL))))))
            {
                unsigned short l_122 = 0x3469L;
                int *l_132 = &g_65;
                int *l_133 = (void*)0;
                int *l_134 = &g_84.f2;
                int *l_135 = &g_65;
                int *l_136 = &l_130.f2;
                int *l_137 = &g_84.f2;
                int *l_138 = (void*)0;
                int *l_139 = &l_130.f2;
                int *l_140 = &g_84.f2;
                int *l_143 = &g_65;
                int *l_144 = &l_130.f2;
                int *l_145 = (void*)0;
                int *l_146 = &g_65;
                int *l_147 = &l_142;
                int *l_148 = &g_84.f2;
                int *l_149 = (void*)0;
                int *l_150 = &g_65;
                int *l_151 = &l_141;
                int *l_152 = &l_130.f2;
                int *l_154 = &l_142;
                int *l_155 = (void*)0;
                int *l_156 = (void*)0;
                int *l_157 = &l_142;
                int *l_158 = (void*)0;
                int *l_159 = &l_142;
                int *l_161 = (void*)0;
                int *l_162 = &g_84.f2;
                int *l_164 = &l_160;
                int *l_165 = (void*)0;
                int *l_166 = &l_142;
                int *l_167 = &l_163;
                int *l_168 = &l_160;
                int *l_169 = &l_141;
                int *l_170 = &l_130.f2;
                int *l_171 = &l_142;
                int **l_182 = (void*)0;
                int **l_183 = (void*)0;
                int **l_184 = &l_152;
                for (l_90.f4 = 9; (l_90.f4 < 22); ++l_90.f4)
                {
                    struct S0 l_124 = {1L,0UL,0x924C0CEFL,0xD8L,252UL,9UL,250UL,0x2C47L,0x536986BDL};
                    if (((*l_95) ^ 0x8447B4B0L))
                    {
                        (*l_86) = (-3L);
                        (*l_86) |= (g_2 > 2UL);
                        return l_113;
                    }
                    else
                    {
                        int *l_123 = &g_65;
                        int **l_125 = &l_106;
                        g_65 = func_33(g_84.f5);
                        (*l_125) = func_76(g_32.f1, ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((0x77C446C1L >= g_84.f5.f1), (safe_rshift_func_int16_t_s_s(l_122, 6)))), func_72(l_123, p_54, l_124))), (*l_86))) | g_84.f5.f6), g_84.f5.f0, g_84, g_32.f4);
                        g_131 = func_76(g_32.f7, (safe_mod_func_uint16_t_u_u(l_122, (func_72(&g_65, (**l_125), l_124) | (g_84.f5.f1 != (safe_mod_func_uint8_t_u_u(((p_54 || g_84.f5.f4) == g_84.f5.f3), 252UL)))))), p_54, l_130, p_54);
                        return l_124;
                    }
                }
                l_172--;
                (*l_184) = func_76(g_84.f2, (~(p_54 && 0x033A2A3AL)), (+(((*l_95) > (0xEBD0L >= ((safe_lshift_func_int16_t_s_u((&g_131 != &g_131), (safe_add_func_uint8_t_u_u(func_33(l_179), g_32.f4)))) == 0x31L))) < (*l_148))), l_180, l_181);
                g_188--;
            }
            else
            {
                int *l_191 = (void*)0;
                int *l_192 = &l_130.f2;
                int *l_193 = &l_142;
                int *l_194 = &l_141;
                int l_195 = 0L;
                int *l_196 = &l_180.f2;
                int *l_197 = &g_84.f2;
                int *l_198 = &l_142;
                int *l_199 = &l_142;
                int *l_200 = (void*)0;
                int *l_201 = (void*)0;
                int *l_202 = &l_141;
                int *l_203 = &l_130.f2;
                int *l_204 = &l_163;
                int *l_205 = &l_153;
                int *l_206 = (void*)0;
                int l_207 = 0x421D5CA3L;
                int *l_208 = (void*)0;
                int *l_209 = (void*)0;
                int *l_210 = &g_65;
                int *l_211 = &l_207;
                int *l_212 = (void*)0;
                int *l_213 = &l_207;
                int l_214 = 0xB1BB55F1L;
                int *l_215 = &l_130.f2;
                int l_216 = 0x0DFD19A3L;
                int *l_217 = &g_187;
                int *l_218 = &l_130.f2;
                int *l_219 = &l_195;
                int *l_220 = (void*)0;
                int *l_221 = &l_130.f2;
                int *l_222 = &l_214;
                int *l_224 = &g_187;
                int *l_225 = (void*)0;
                int *l_226 = &l_153;
                int *l_227 = &l_216;
                int *l_228 = &l_216;
                int *l_229 = (void*)0;
                int *l_230 = (void*)0;
                int *l_231 = (void*)0;
                int *l_232 = &l_142;
                int *l_233 = &g_65;
                int *l_234 = &g_84.f2;
                int *l_235 = &l_153;
                int *l_236 = (void*)0;
                int *l_237 = &l_163;
                int *l_238 = &g_84.f2;
                int *l_239 = &l_141;
                int *l_240 = &l_180.f2;
                int *l_241 = &l_130.f2;
                int *l_242 = &g_84.f2;
                int l_243 = (-1L);
                int *l_244 = &g_187;
                (*l_86) |= p_54;
                g_245++;
                if ((func_33(l_130.f5) < 65532UL))
                {
                    struct S0 l_248 = {1L,0x36L,0xD9C877E7L,0xCCL,251UL,0xE50CL,0x27L,1L,0L};
                    (*l_197) &= func_33(l_248);
                }
                else
                {
                    g_131 = &l_141;
                }
                (*l_203) &= (*l_95);
            }
        }
        --l_372;
        return l_90;
    }
    (*l_397) &= ((0x40CFL | 1UL) & (safe_rshift_func_uint8_t_u_s((g_32.f3 == ((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0xE9F7L, l_387)), (((1UL != (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0x1EL, (safe_add_func_int8_t_s_s((*l_86), (safe_sub_func_uint16_t_u_u((*l_86), (*l_86))))))), g_245))) != 0x47L) > l_396))) && 4L), (*l_86))), 1UL)) ^ 0x1FL) > 65531UL) < (*l_86))), p_54)));
    (*l_398) = &l_326;
    return g_32;
}







static int func_72(int * p_73, unsigned p_74, struct S0 p_75)
{
    const int *l_93 = &g_65;
    (*p_73) &= (safe_add_func_uint32_t_u_u(0x86717EFFL, ((l_93 == p_73) < (safe_unary_minus_func_uint8_t_u(p_75.f3)))));
    return (*p_73);
}







static int * func_76(unsigned p_77, const int p_78, unsigned p_79, struct S1 p_80, unsigned p_81)
{
    unsigned l_87 = 0x79D87571L;
    l_87++;
    return &g_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_32.f4, "g_32.f4", print_hash_value);
    transparent_crc(g_32.f5, "g_32.f5", print_hash_value);
    transparent_crc(g_32.f6, "g_32.f6", print_hash_value);
    transparent_crc(g_32.f7, "g_32.f7", print_hash_value);
    transparent_crc(g_32.f8, "g_32.f8", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_84.f4, "g_84.f4", print_hash_value);
    transparent_crc(g_84.f5.f0, "g_84.f5.f0", print_hash_value);
    transparent_crc(g_84.f5.f1, "g_84.f5.f1", print_hash_value);
    transparent_crc(g_84.f5.f2, "g_84.f5.f2", print_hash_value);
    transparent_crc(g_84.f5.f3, "g_84.f5.f3", print_hash_value);
    transparent_crc(g_84.f5.f4, "g_84.f5.f4", print_hash_value);
    transparent_crc(g_84.f5.f5, "g_84.f5.f5", print_hash_value);
    transparent_crc(g_84.f5.f6, "g_84.f5.f6", print_hash_value);
    transparent_crc(g_84.f5.f7, "g_84.f5.f7", print_hash_value);
    transparent_crc(g_84.f5.f8, "g_84.f5.f8", print_hash_value);
    transparent_crc(g_84.f6, "g_84.f6", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1385, "g_1385", print_hash_value);
    transparent_crc(g_1396, "g_1396", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1557.f0, "g_1557.f0", print_hash_value);
    transparent_crc(g_1557.f1, "g_1557.f1", print_hash_value);
    transparent_crc(g_1557.f2, "g_1557.f2", print_hash_value);
    transparent_crc(g_1557.f3, "g_1557.f3", print_hash_value);
    transparent_crc(g_1557.f4, "g_1557.f4", print_hash_value);
    transparent_crc(g_1557.f5, "g_1557.f5", print_hash_value);
    transparent_crc(g_1557.f6, "g_1557.f6", print_hash_value);
    transparent_crc(g_1557.f7, "g_1557.f7", print_hash_value);
    transparent_crc(g_1557.f8, "g_1557.f8", print_hash_value);
    transparent_crc(g_1574.f0, "g_1574.f0", print_hash_value);
    transparent_crc(g_1574.f1, "g_1574.f1", print_hash_value);
    transparent_crc(g_1574.f2, "g_1574.f2", print_hash_value);
    transparent_crc(g_1574.f3, "g_1574.f3", print_hash_value);
    transparent_crc(g_1574.f4, "g_1574.f4", print_hash_value);
    transparent_crc(g_1574.f5, "g_1574.f5", print_hash_value);
    transparent_crc(g_1574.f6, "g_1574.f6", print_hash_value);
    transparent_crc(g_1574.f7, "g_1574.f7", print_hash_value);
    transparent_crc(g_1574.f8, "g_1574.f8", print_hash_value);
    transparent_crc(g_1600.f0, "g_1600.f0", print_hash_value);
    transparent_crc(g_1600.f1, "g_1600.f1", print_hash_value);
    transparent_crc(g_1600.f2, "g_1600.f2", print_hash_value);
    transparent_crc(g_1600.f3, "g_1600.f3", print_hash_value);
    transparent_crc(g_1600.f4, "g_1600.f4", print_hash_value);
    transparent_crc(g_1600.f5, "g_1600.f5", print_hash_value);
    transparent_crc(g_1600.f6, "g_1600.f6", print_hash_value);
    transparent_crc(g_1600.f7, "g_1600.f7", print_hash_value);
    transparent_crc(g_1600.f8, "g_1600.f8", print_hash_value);
    transparent_crc(g_1745, "g_1745", print_hash_value);
    transparent_crc(g_1749, "g_1749", print_hash_value);
    transparent_crc(g_1851, "g_1851", print_hash_value);
    transparent_crc(g_1995, "g_1995", print_hash_value);
    transparent_crc(g_1998.f0, "g_1998.f0", print_hash_value);
    transparent_crc(g_1998.f1, "g_1998.f1", print_hash_value);
    transparent_crc(g_1998.f2, "g_1998.f2", print_hash_value);
    transparent_crc(g_1998.f3, "g_1998.f3", print_hash_value);
    transparent_crc(g_1998.f4, "g_1998.f4", print_hash_value);
    transparent_crc(g_1998.f5.f0, "g_1998.f5.f0", print_hash_value);
    transparent_crc(g_1998.f5.f1, "g_1998.f5.f1", print_hash_value);
    transparent_crc(g_1998.f5.f2, "g_1998.f5.f2", print_hash_value);
    transparent_crc(g_1998.f5.f3, "g_1998.f5.f3", print_hash_value);
    transparent_crc(g_1998.f5.f4, "g_1998.f5.f4", print_hash_value);
    transparent_crc(g_1998.f5.f5, "g_1998.f5.f5", print_hash_value);
    transparent_crc(g_1998.f5.f6, "g_1998.f5.f6", print_hash_value);
    transparent_crc(g_1998.f5.f7, "g_1998.f5.f7", print_hash_value);
    transparent_crc(g_1998.f5.f8, "g_1998.f5.f8", print_hash_value);
    transparent_crc(g_1998.f6, "g_1998.f6", print_hash_value);
    transparent_crc(g_2173, "g_2173", print_hash_value);
    transparent_crc(g_2184, "g_2184", print_hash_value);
    transparent_crc(g_2226, "g_2226", print_hash_value);
    transparent_crc(g_2232, "g_2232", print_hash_value);
    transparent_crc(g_2479, "g_2479", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
