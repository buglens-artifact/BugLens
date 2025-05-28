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



static int g_7 = 4L;
static char g_9 = (-1L);
static unsigned g_28 = 4294967295UL;
static short g_36 = (-6L);
static unsigned short g_60 = 0xD2FCL;
static unsigned g_64 = 0xA426232CL;
static unsigned short g_79 = 65535UL;
static int g_82 = 1L;
static unsigned g_102 = 4294967295UL;
static char * volatile * volatile g_107 = (void*)0;
static unsigned short g_117 = 65527UL;
static volatile int g_175 = (-2L);
static unsigned g_182 = 0x9B161964L;
static char *g_186 = (void*)0;
static unsigned char g_193 = 0x6CL;
static int *g_218 = &g_82;
static int **g_217 = &g_218;
static int g_222 = 0x8B552A0AL;
static int * volatile g_221 = &g_222;
static char g_296 = 0x3BL;
static int g_304 = (-1L);
static int * volatile g_310 = (void*)0;
static int * volatile g_311 = &g_222;
static int *g_329 = (void*)0;
static int ** volatile g_328 = &g_329;
static unsigned char **g_519 = (void*)0;
static unsigned char *** volatile g_518 = &g_519;
static unsigned short g_520 = 0xF854L;
static short *g_574 = &g_36;
static short **g_573 = &g_574;
static short *** volatile g_572 = &g_573;
static char g_584 = 0x54L;
static char *g_585 = &g_584;
static unsigned char g_624 = 4UL;
static volatile int g_686 = 0L;
static unsigned char g_690 = 0x6BL;
static int g_718 = 0x3B9E8282L;
static int ***g_737 = &g_217;
static int ****g_736 = &g_737;
static int * volatile g_740 = &g_718;
static int * volatile g_741 = &g_718;
static int * volatile g_752 = (void*)0;
static unsigned g_951 = 0xE7F23507L;
static short g_958 = 1L;
static unsigned g_1070 = 4294967293UL;
static char g_1214 = (-1L);
static volatile int g_1237 = 0xB23089BAL;
static volatile short g_1271 = 0xA5AAL;
static volatile short g_1275 = 0x0535L;
static volatile unsigned g_1295 = 0xC52B727DL;
static int g_1374 = 0x160B6948L;
static unsigned char g_1380 = 0x74L;
static int g_1421 = 0x26BA0238L;
static unsigned char g_1569 = 0xEFL;
static volatile unsigned short g_1703 = 0x74BCL;
static short g_1764 = 0x78B1L;
static unsigned g_1767 = 0x16D87F0BL;
static unsigned g_2124 = 0x4E4CD0BCL;
static int g_2141 = 0L;
static int * volatile g_2178 = &g_718;
static char g_2288 = 7L;
static int ** volatile g_2383 = &g_329;
static int * volatile g_2405 = (void*)0;
static int ** volatile g_2465 = &g_329;
static volatile short g_2547 = (-10L);
static volatile unsigned short g_2604 = 8UL;
static int *g_2613 = &g_304;
static int **g_2612 = &g_2613;



static int func_1(void);
static int func_2(unsigned p_3, unsigned p_4, char p_5);
static int func_10(char * p_11, unsigned char p_12, char p_13, int p_14);
static char * func_15(unsigned p_16, char p_17, char * p_18, unsigned p_19);
static unsigned short func_20(int p_21, char * p_22);
static char func_25(int p_26);
static char func_29(char * p_30, char p_31, char * p_32, unsigned p_33, char * p_34);
static char * func_37(short * p_38);
static short * func_39(char p_40, short p_41, unsigned char p_42, unsigned p_43, char * p_44);
static unsigned char func_47(int p_48, short p_49, unsigned p_50, int p_51, char * p_52);
static int func_1(void)
{
    int l_6 = 0x57E8B72FL;
    char *l_8 = &g_9;
    int l_2260 = (-10L);
    short *l_2264 = &g_36;
    int l_2275 = 0x3F899963L;
    char l_2289 = (-3L);
    int l_2306 = (-1L);
    int l_2313 = 0L;
    int l_2343 = 0xBB0B8739L;
    unsigned char *l_2402 = &g_690;
    unsigned char **l_2401 = &l_2402;
    unsigned l_2404 = 0xA1EA96B8L;
    unsigned char l_2461 = 0x7CL;
    int *l_2611 = (void*)0;
    int **l_2610 = &l_2611;
    if (func_2(l_6, l_6, ((*l_8) &= (l_6 , g_7))))
    {
        char **l_2258 = &g_585;
        int l_2259 = 0x4BFA383FL;
        unsigned *l_2261 = &g_1070;
        char *l_2262 = &g_1214;
        int *l_2263 = &g_1421;
        int *l_2267 = &l_2259;
        (***g_736) = (*g_328);
        (*l_2263) |= ((***g_572) && func_29((((~(l_2259 = (safe_mod_func_int32_t_s_s(5L, (g_296 || func_29(((*l_2258) = &g_296), l_2259, func_37((*g_573)), ((*l_2261) = ((l_6 < (0x3E3FL | l_2260)) == l_2259)), &g_296)))))) , l_2260) , (void*)0), l_2260, l_2262, g_690, &g_584));
        (*l_2267) ^= func_10(func_15((l_6 = g_60), func_25(((*l_2263) , func_20((*l_2263), func_37(l_2264)))), l_8, ((*l_2261) ^= (safe_mod_func_uint16_t_u_u(g_1237, 4UL)))), g_304, l_2260, g_690);
    }
    else
    {
        unsigned char *l_2268 = &g_624;
        int ****l_2271 = (void*)0;
        int ***l_2273 = &g_217;
        int ****l_2272 = &l_2273;
        unsigned short *l_2274 = &g_60;
        unsigned l_2282 = 2UL;
        unsigned *l_2283 = &g_1767;
        int *l_2298 = &g_1374;
        char l_2299 = 0L;
        short l_2308 = 8L;
        int l_2339 = 0xF71133B1L;
        unsigned char l_2363 = 0xAAL;
        unsigned l_2382 = 0x25D735E6L;
        char *l_2398 = (void*)0;
        int *l_2426 = &g_2141;
        char l_2467 = 0xE3L;
        unsigned l_2540 = 0x1CBBCD29L;
        unsigned l_2548 = 0x2AF88B2EL;
        unsigned char l_2561 = 0UL;
        (***g_737) ^= ((l_6 && ((*l_2268) = 0UL)) >= (safe_add_func_uint16_t_u_u((l_2275 = ((*l_2274) |= ((*g_736) == ((*l_2272) = ((*g_585) , (*g_736)))))), (((~(safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*g_574) >= (0xFAL ^ ((((*l_2283) |= l_2282) , (safe_sub_func_int16_t_s_s((+(safe_mul_func_int8_t_s_s(((g_7 , l_2260) || g_1295), g_2288))), l_6))) , 0xB7L))), l_2289)), l_2260)), g_1569))) ^ (*g_574)) , g_296))));
        if (func_25(((((***g_572) == l_6) , (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(254UL, 3)), 1))) >= (safe_lshift_func_int8_t_s_u((g_304 ^ (+(safe_sub_func_uint16_t_u_u(func_20(((*l_2298) ^= func_20(l_2289, ((((****l_2272) || (-1L)) > ((*g_573) == (void*)0)) , (void*)0))), &g_296), 0x30A8L)))), l_2275)))))
        {
            int *l_2300 = &g_718;
            int *l_2301 = &g_222;
            int *l_2302 = &g_82;
            int *l_2303 = &g_1421;
            int *l_2304 = &g_82;
            int *l_2305 = &g_222;
            int *l_2307 = (void*)0;
            int *l_2309 = &l_2306;
            int *l_2310 = (void*)0;
            int *l_2311 = &l_2275;
            int *l_2312 = &g_222;
            int *l_2314 = &g_222;
            int *l_2315 = &l_2306;
            int *l_2316 = (void*)0;
            int *l_2317 = &g_1421;
            int *l_2318 = &l_2275;
            int *l_2319 = (void*)0;
            int *l_2320 = &l_2275;
            int *l_2321 = &g_222;
            int *l_2322 = &l_2313;
            int *l_2323 = &l_2313;
            int *l_2324 = &g_1421;
            int l_2325 = 0x84ADB6A6L;
            int *l_2326 = &l_2325;
            int *l_2327 = &l_2306;
            int *l_2328 = &g_1421;
            int *l_2329 = &g_222;
            int *l_2330 = (void*)0;
            int *l_2331 = &l_2313;
            int *l_2332 = &l_2325;
            int *l_2333 = &g_718;
            int *l_2334 = &g_718;
            int *l_2335 = &l_2313;
            int *l_2336 = &g_718;
            int *l_2337 = &l_2313;
            int *l_2338 = &g_718;
            int *l_2340 = &l_2313;
            int *l_2341 = &g_718;
            int *l_2342 = &l_2306;
            int *l_2344 = (void*)0;
            int *l_2345 = &l_2275;
            int *l_2346 = &g_82;
            int *l_2347 = &g_82;
            int *l_2348 = &l_2313;
            int *l_2349 = &l_2343;
            int *l_2350 = &l_2343;
            int *l_2351 = &g_82;
            int *l_2352 = &g_82;
            int *l_2353 = &l_2313;
            int *l_2354 = (void*)0;
            int *l_2355 = &g_222;
            int *l_2356 = (void*)0;
            int l_2357 = 0L;
            int *l_2358 = (void*)0;
            int l_2359 = 0x766AD9E2L;
            int *l_2360 = (void*)0;
            int *l_2361 = &l_2343;
            int *l_2362 = &l_6;
            l_2363--;
            if ((***l_2273))
            {
                int l_2372 = (-3L);
                int l_2373 = 8L;
                l_2373 ^= ((!0xED431038L) , func_10(&l_2299, g_296, (****l_2272), (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_1271, (safe_add_func_int16_t_s_s(l_2313, (*g_574))))), ((*l_2274) = (((((((*g_574) | (*l_2336)) , 255UL) , g_1214) & 0x2788L) == l_2372) , g_304))))));
            }
            else
            {
                return (*g_218);
            }
        }
        else
        {
            unsigned l_2381 = 0x6D1D555EL;
            int l_2392 = 0xDD8828D7L;
            char *l_2397 = (void*)0;
            int l_2403 = 0x48F62AC2L;
            int l_2546 = 0x1075EFDFL;
            char *l_2564 = &g_2288;
            int *l_2573 = &g_718;
            int *l_2574 = &g_1421;
            int *l_2575 = &g_82;
            int *l_2576 = &l_2306;
            int *l_2577 = &l_2343;
            int *l_2578 = &l_2339;
            int *l_2579 = &l_6;
            int *l_2580 = &l_2313;
            int *l_2581 = (void*)0;
            int *l_2582 = &l_2403;
            int *l_2583 = (void*)0;
            int *l_2584 = &l_2313;
            int *l_2585 = &g_222;
            int *l_2586 = &g_2141;
            int *l_2587 = &l_2392;
            int *l_2588 = &l_2313;
            int *l_2589 = &l_2392;
            int *l_2590 = &l_2546;
            int *l_2591 = &g_222;
            int *l_2592 = &l_2306;
            int *l_2593 = &l_2275;
            int *l_2594 = (void*)0;
            int *l_2595 = (void*)0;
            int *l_2596 = &g_718;
            int *l_2597 = &l_2306;
            int *l_2598 = &l_2392;
            int *l_2599 = &l_2403;
            int *l_2600 = &l_2339;
            int *l_2601 = &l_2275;
            int *l_2602 = &l_2403;
            int *l_2603 = (void*)0;
            (***l_2272) = &l_2306;
            if ((*g_741))
            {
                short l_2374 = 0xF24CL;
                l_2275 &= (((void*)0 != &l_2282) <= (0x60DD24C7L || ((func_2((g_28 = l_2374), (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x0CC2L, ((*g_2178) >= (((safe_sub_func_int16_t_s_s(l_2381, 65535UL)) , 0x4AL) ^ l_2382)))), (****l_2272))), l_2313) ^ g_7) & 0x7CL)));
                (*g_2383) = ((***l_2272) = (*g_217));
            }
            else
            {
                unsigned l_2386 = 4294967286UL;
                unsigned short **l_2390 = &l_2274;
                unsigned l_2391 = 0UL;
                l_2392 &= (0x46L <= (((safe_mod_func_uint8_t_u_u(l_2386, 0x87L)) || func_25(func_2(l_2386, g_2141, func_25(func_20(((*l_2298) = (safe_add_func_uint16_t_u_u(((l_2381 | (0xC3L > (((safe_unary_minus_func_int32_t_s((((((*l_2390) = &g_79) == (void*)0) == l_2381) == l_2386))) & g_1214) ^ 0xD4DD7F10L))) <= 0x9F83L), l_2391))), &g_296))))) , 0x2EL));
                (*g_311) = (safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(l_2313, (-8L))) , (void*)0) == (l_2398 = l_2397)) , (safe_lshift_func_uint8_t_u_s(g_1421, ((*g_585) = (0x1C6DE94FL < (*g_2178)))))), ((((((func_20((((void*)0 == l_2401) , g_1764), &l_2289) , 0xE0F8L) >= 0x3451L) , (**g_217)) >= l_2403) == l_2404) , 0xBBC3L)));
                (**g_217) &= l_2391;
            }
            for (l_2313 = 7; (l_2313 >= 6); --l_2313)
            {
                unsigned l_2410 = 4294967290UL;
                char *l_2417 = &g_1214;
                char l_2423 = 0xF0L;
                int l_2425 = 0xDDD69F90L;
                int l_2431 = 0x4E4CADC0L;
                int l_2460 = 0xB88D9BFCL;
                int *l_2468 = (void*)0;
                int *l_2469 = &g_222;
                int *l_2470 = (void*)0;
                int *l_2471 = &g_222;
                int *l_2472 = &g_718;
                int *l_2473 = &l_2339;
                int *l_2474 = &g_2141;
                int *l_2475 = &l_2425;
                int *l_2476 = &l_2343;
                int *l_2477 = (void*)0;
                int *l_2478 = &g_222;
                int *l_2479 = (void*)0;
                int *l_2480 = &l_2425;
                int *l_2481 = &g_2141;
                int *l_2482 = &l_2425;
                int *l_2483 = (void*)0;
                int *l_2484 = &l_2339;
                int *l_2485 = &l_2431;
                int *l_2486 = (void*)0;
                int *l_2487 = &l_6;
                int *l_2488 = (void*)0;
                int *l_2489 = &l_2431;
                int *l_2490 = (void*)0;
                int *l_2491 = &l_2343;
                int *l_2492 = &l_2306;
                int *l_2493 = (void*)0;
                int *l_2494 = (void*)0;
                int *l_2495 = &l_2275;
                int *l_2496 = &l_2431;
                int *l_2497 = &l_2425;
                int *l_2498 = &l_6;
                int *l_2499 = &l_2339;
                int *l_2500 = &l_6;
                int *l_2501 = &g_2141;
                int *l_2502 = &l_2339;
                int *l_2503 = &g_1421;
                int *l_2504 = (void*)0;
                int *l_2505 = &l_2403;
                int *l_2506 = &g_718;
                int *l_2507 = &l_2425;
                int *l_2508 = (void*)0;
                int *l_2509 = &l_2460;
                int *l_2510 = &l_2431;
                int *l_2511 = &l_2425;
                int *l_2512 = &l_2460;
                int *l_2513 = &g_2141;
                int *l_2514 = &l_2343;
                int *l_2515 = (void*)0;
                int *l_2516 = &l_2403;
                int *l_2517 = &g_718;
                int *l_2518 = &l_2306;
                int *l_2519 = (void*)0;
                int *l_2520 = &g_222;
                int *l_2521 = (void*)0;
                int *l_2522 = &l_2431;
                int *l_2523 = &l_2460;
                int *l_2524 = &l_2392;
                int *l_2525 = &g_1421;
                int *l_2526 = &l_6;
                int *l_2527 = &g_222;
                int *l_2528 = &g_222;
                int *l_2529 = &g_718;
                int *l_2530 = &l_2392;
                int *l_2531 = &l_2403;
                int *l_2532 = &l_2392;
                int *l_2533 = (void*)0;
                int *l_2534 = &l_2392;
                int *l_2535 = (void*)0;
                int *l_2536 = &l_2431;
                int *l_2537 = &g_82;
                int *l_2538 = &g_82;
                int *l_2539 = &l_6;
                if (l_2404)
                {
                    unsigned l_2420 = 0x772C5286L;
                    for (g_1214 = (-1); (g_1214 <= (-29)); g_1214 = safe_sub_func_uint16_t_u_u(g_1214, 9))
                    {
                        char *l_2416 = &g_584;
                        char *l_2424 = &g_296;
                        (****l_2272) |= (*g_2178);
                        if (l_2410)
                            break;
                        l_2425 &= (((*g_574) = (*g_574)) >= (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(((((l_2403 = ((*l_8) = (*g_585))) <= (l_6 ^ ((*l_2274) = (((*l_2424) &= ((g_958 , func_25((safe_mod_func_int16_t_s_s((((**g_217) , l_2416) != l_2417), (safe_sub_func_int16_t_s_s(((*l_2264) = l_2420), (((safe_mul_func_int16_t_s_s((l_2423 , 0xF29FL), 0xC388L)) != l_2306) >= 9L))))))) > g_222)) > l_2392)))) , (*g_585)) == 0x20L))), (*g_585))));
                        (*g_217) = l_2426;
                    }
                    if ((*g_2178))
                        continue;
                }
                else
                {
                    short l_2427 = (-10L);
                    int *l_2428 = &l_2392;
                    int *l_2429 = (void*)0;
                    int *l_2430 = &g_1421;
                    int *l_2432 = &l_2306;
                    int *l_2433 = &l_2306;
                    int *l_2434 = &g_222;
                    int *l_2435 = &l_2425;
                    int *l_2436 = &g_82;
                    int *l_2437 = &l_2339;
                    int *l_2438 = &l_6;
                    int *l_2439 = (void*)0;
                    int *l_2440 = &l_6;
                    int *l_2441 = &l_2275;
                    int *l_2442 = &l_2306;
                    int *l_2443 = &l_2392;
                    int *l_2444 = &l_2275;
                    int *l_2445 = &g_222;
                    int *l_2446 = &l_2403;
                    int *l_2447 = (void*)0;
                    int *l_2448 = &l_2431;
                    int *l_2449 = &l_2431;
                    int *l_2450 = &g_82;
                    int *l_2451 = &l_2403;
                    int *l_2452 = (void*)0;
                    int *l_2453 = &l_2392;
                    int *l_2454 = &g_718;
                    int *l_2455 = &l_2306;
                    int *l_2456 = &l_2343;
                    int *l_2457 = &g_2141;
                    int *l_2458 = &g_2141;
                    int *l_2459 = &g_82;
                    int l_2466 = 6L;
                    --l_2461;
                    if ((((*l_2417) = 0xF3L) < 0x33L))
                    {
                        unsigned *l_2464 = &g_1767;
                        (*l_2456) |= ((**g_217) & func_25(((*l_2298) ^= (l_2464 == (g_1214 , (void*)0)))));
                    }
                    else
                    {
                        (*g_2465) = ((***g_736) = (**g_737));
                        return l_2466;
                    }
                }
                l_2540++;
                for (g_7 = 0; (g_7 <= 10); g_7++)
                {
                    unsigned char l_2545 = 0xAAL;
                    int l_2571 = 5L;
                    (*l_2471) = l_2546;
                    if (g_2547)
                        continue;
                }
            }
            ++g_2604;
        }
        for (g_1764 = 0; (g_1764 < 4); g_1764 = safe_add_func_uint8_t_u_u(g_1764, 6))
        {
            short l_2609 = 0x73EDL;
            unsigned l_2614 = 0x2760BF5AL;
            l_2609 = (*g_2178);
            g_2612 = l_2610;
            l_2614++;
            return l_2343;
        }
    }
    (***g_737) = 0x47B168EAL;
    return (*g_221);
}







static int func_2(unsigned p_3, unsigned p_4, char p_5)
{
    unsigned l_27 = 0UL;
    int *l_2161 = &g_1374;
    int **l_2160 = &l_2161;
    char *l_2168 = &g_1214;
    unsigned short l_2243 = 1UL;
    g_82 ^= func_10(func_15(p_4, (func_20((safe_mod_func_int8_t_s_s(func_25(l_27), (safe_rshift_func_uint16_t_u_s((p_4 < (safe_add_func_uint16_t_u_u(((&g_7 == ((*l_2160) = &g_7)) <= 1L), 0x35BCL))), 4)))), &g_296) && (**g_573)), l_2168, g_718), l_2243, p_3, g_1421);
    return l_27;
}







static int func_10(char * p_11, unsigned char p_12, char p_13, int p_14)
{
    unsigned short *l_2246 = &g_117;
    int l_2251 = 0L;
    unsigned char *l_2254 = &g_193;
    int *l_2255 = &g_2141;
    (*l_2255) ^= (func_20((safe_lshift_func_uint16_t_u_s((func_25(p_13) , ((*l_2246)++)), (~(((safe_add_func_uint16_t_u_u((((((((void*)0 == &p_12) | l_2251) <= ((safe_mul_func_uint8_t_u_u(l_2251, ((*l_2254) = 4UL))) & ((*g_741) = ((****g_736) &= ((p_14 , &g_690) == (void*)0))))) , l_2251) , g_1421) , l_2251), 65526UL)) != p_13) != (-1L))))), l_2254) ^ l_2251);
    return p_12;
}







static char * func_15(unsigned p_16, char p_17, char * p_18, unsigned p_19)
{
    unsigned l_2169 = 1UL;
    short *l_2172 = &g_958;
    short *l_2173 = &g_1764;
    unsigned char **l_2174 = (void*)0;
    unsigned char *l_2175 = (void*)0;
    char *l_2176 = &g_1214;
    unsigned *l_2177 = &g_1767;
    int l_2179 = 1L;
    int *l_2180 = &l_2179;
    int *l_2181 = &g_2141;
    int *l_2182 = &g_82;
    int *l_2183 = &g_1421;
    int *l_2184 = &g_82;
    int *l_2185 = &g_2141;
    int *l_2186 = &l_2179;
    int *l_2187 = (void*)0;
    int *l_2188 = &l_2179;
    int l_2189 = 8L;
    int l_2190 = 0x2FE581ABL;
    int *l_2191 = &g_82;
    int *l_2192 = (void*)0;
    int *l_2193 = &l_2189;
    int *l_2194 = &g_1421;
    int *l_2195 = &g_718;
    int *l_2196 = &g_1421;
    int *l_2197 = &l_2190;
    int l_2198 = 0L;
    int *l_2199 = &l_2179;
    int *l_2200 = &g_2141;
    int *l_2201 = &g_222;
    int *l_2202 = &l_2190;
    int *l_2203 = &g_82;
    int l_2204 = (-7L);
    int l_2205 = 1L;
    int l_2206 = 0xFED2E646L;
    int *l_2207 = &g_82;
    int *l_2208 = &l_2189;
    int *l_2209 = (void*)0;
    int *l_2210 = &l_2179;
    int *l_2211 = &l_2198;
    int *l_2212 = &l_2206;
    int *l_2213 = &g_2141;
    int *l_2214 = (void*)0;
    int *l_2215 = &g_1421;
    int *l_2216 = (void*)0;
    int *l_2217 = &g_222;
    int *l_2218 = &g_222;
    int *l_2219 = &g_2141;
    int *l_2220 = &l_2205;
    int l_2221 = 3L;
    int *l_2222 = &g_82;
    int *l_2223 = &l_2206;
    int *l_2224 = &g_718;
    int *l_2225 = &l_2205;
    int *l_2226 = &l_2221;
    int *l_2227 = &g_222;
    int *l_2228 = (void*)0;
    int *l_2229 = &g_2141;
    int *l_2230 = &l_2189;
    int *l_2231 = &g_1421;
    int *l_2232 = &g_718;
    int *l_2233 = &g_2141;
    int *l_2234 = &g_718;
    int *l_2235 = &l_2205;
    int *l_2236 = &l_2206;
    int *l_2237 = (void*)0;
    int *l_2238 = &l_2205;
    int *l_2239 = &g_2141;
    unsigned l_2240 = 0x46C73231L;
    (*g_2178) = (l_2169 & ((((safe_lshift_func_int8_t_s_s((l_2172 != ((*g_573) = l_2173)), 0)) < ((*l_2177) = (((l_2175 = p_18) != p_18) >= ((+((*g_585) = (g_102 , func_20(g_296, l_2176)))) ^ 0L)))) , g_193) , 0x06L));
    l_2179 = (l_2169 , ((***g_737) = 0L));
    --l_2240;
    return l_2176;
}







static unsigned short func_20(int p_21, char * p_22)
{
    int *l_2162 = &g_222;
    char **l_2164 = &g_186;
    char ***l_2163 = &l_2164;
    char ****l_2165 = &l_2163;
    char ***l_2166 = (void*)0;
    int l_2167 = 0xB12E80ACL;
    (**g_737) = l_2162;
    (**g_737) = l_2162;
    (*g_218) = (0L | (&g_107 != ((*l_2165) = l_2163)));
    (*l_2162) = ((*l_2165) == (l_2166 = (*l_2165)));
    return l_2167;
}







static char func_25(int p_26)
{
    unsigned char l_53 = 0x67L;
    int l_753 = 0xCB54E30DL;
    char l_754 = 0x83L;
    unsigned char ***l_760 = (void*)0;
    unsigned char ****l_759 = &l_760;
    char **l_782 = &g_186;
    char ***l_781 = &l_782;
    int l_818 = 0x72233819L;
    int l_839 = 0x7900F161L;
    int l_841 = 0x4B8E5BC6L;
    int l_846 = 0xE09CE383L;
    int l_869 = 1L;
    int l_890 = 0x0C79713DL;
    int l_927 = 0x3CE48CA2L;
    int l_954 = (-1L);
    int l_960 = (-1L);
    unsigned l_1080 = 0x2B3071D6L;
    short *l_1440 = &g_36;
    char **l_1717 = &g_186;
    int **l_1748 = &g_218;
    unsigned *l_1786 = &g_1767;
    unsigned short *l_1789 = &g_117;
    unsigned char *l_1796 = &g_1569;
    int *l_1799 = &g_1421;
    int l_1809 = 0x5A75CAEFL;
    int *l_1810 = (void*)0;
    int *l_1811 = &l_846;
    short l_1875 = 5L;
    int l_2027 = (-10L);
    int l_2060 = 0x2CD662D2L;
    int l_2099 = 0x6EE89B01L;
    return (*g_585);
}







static char func_29(char * p_30, char p_31, char * p_32, unsigned p_33, char * p_34)
{
    int *l_696 = &g_222;
    int ***l_701 = &g_217;
    int ***l_703 = &g_217;
    unsigned char ***l_711 = &g_519;
    unsigned char ***l_716 = &g_519;
    int * volatile *l_742 = &g_311;
    int l_747 = (-1L);
    char *l_750 = &g_584;
    if (((*l_696) = 6L))
    {
        int ***l_702 = &g_217;
        unsigned short *l_704 = &g_117;
        unsigned char ***l_707 = &g_519;
        unsigned char ****l_708 = (void*)0;
        unsigned char ****l_709 = (void*)0;
        unsigned char ****l_710 = (void*)0;
        unsigned char *l_714 = &g_624;
        unsigned *l_715 = &g_182;
        int *l_717 = &g_718;
        (*l_717) &= (safe_mod_func_uint32_t_u_u((((*l_704) = ((safe_mod_func_uint32_t_u_u(p_31, p_33)) , (l_701 == (l_703 = (p_33 , (p_31 , l_702)))))) | ((safe_add_func_uint16_t_u_u(p_33, ((l_711 = l_707) != ((((((*l_715) = (((safe_sub_func_int8_t_s_s((((*l_714) = 1UL) || (*l_696)), (*l_696))) && (***g_572)) , p_33)) < p_31) < g_79) , g_82) , l_716)))) && p_31)), p_33));
    }
    else
    {
        int ****l_733 = (void*)0;
        int *****l_734 = (void*)0;
        int *****l_735 = (void*)0;
        int **l_738 = (void*)0;
        short l_739 = 3L;
        l_739 = p_33;
        (*g_740) = ((*l_696) = p_31);
    }
    (*l_742) = g_741;
    (*l_696) = (safe_mod_func_uint8_t_u_u(p_31, (~(((void*)0 != (*l_742)) > 0xFAL))));
    return (*p_34);
}







static char * func_37(short * p_38)
{
    int *l_693 = (void*)0;
    char *l_694 = &g_9;
    (*g_217) = l_693;
    return l_694;
}







static short * func_39(char p_40, short p_41, unsigned char p_42, unsigned p_43, char * p_44)
{
    short l_331 = 0xCC4FL;
    int l_333 = 0xBA6210C8L;
    int l_362 = 0x01C82AA6L;
    int l_376 = 0L;
    int l_389 = (-4L);
    int l_404 = 0xB35B371FL;
    int l_413 = (-1L);
    int l_423 = 0x499E8921L;
    unsigned char *l_544 = &g_193;
    unsigned char **l_543 = &l_544;
    unsigned short l_564 = 65532UL;
    char *l_583 = &g_584;
    int *l_642 = &l_389;
    int *l_643 = &l_333;
    int *l_644 = (void*)0;
    int *l_645 = (void*)0;
    int *l_646 = &l_389;
    int *l_647 = (void*)0;
    int *l_648 = &g_82;
    int *l_649 = &l_423;
    int *l_650 = &l_413;
    int *l_651 = &g_82;
    int *l_652 = &l_333;
    int *l_653 = &l_333;
    int *l_654 = &l_362;
    int *l_655 = (void*)0;
    int *l_656 = &g_82;
    int *l_657 = &l_404;
    int *l_658 = &l_389;
    int *l_659 = (void*)0;
    int *l_660 = &l_333;
    int *l_661 = &g_222;
    int *l_662 = (void*)0;
    int *l_663 = &l_362;
    int *l_664 = &g_222;
    int *l_665 = (void*)0;
    int *l_666 = &l_423;
    int *l_667 = &g_222;
    int *l_668 = &g_222;
    int *l_669 = &l_423;
    int *l_670 = &g_82;
    int *l_671 = (void*)0;
    int *l_672 = (void*)0;
    int *l_673 = &g_82;
    int *l_674 = &l_404;
    int *l_675 = &l_389;
    int *l_676 = &l_423;
    int *l_677 = (void*)0;
    int *l_678 = &g_222;
    char l_679 = (-1L);
    int *l_680 = &l_376;
    int *l_681 = (void*)0;
    int *l_682 = &l_404;
    int *l_683 = &l_423;
    int *l_684 = &g_222;
    int *l_685 = &l_362;
    int *l_687 = &g_82;
    int *l_688 = &l_362;
    int *l_689 = &g_222;
    for (g_9 = 0; (g_9 != 27); ++g_9)
    {
        unsigned short l_315 = 0x9D5EL;
        unsigned short l_324 = 0xB121L;
        int l_330 = 3L;
        int l_335 = 0xACC8E27AL;
        int l_346 = 4L;
        int l_396 = 0xE2E7B58EL;
        int l_416 = 0L;
        int l_419 = 0x91E7AC14L;
        char l_540 = (-4L);
        unsigned short l_545 = 0x78EFL;
        unsigned char **l_567 = (void*)0;
        int *l_614 = &l_362;
        int *l_625 = (void*)0;
        int *l_626 = &l_346;
        ++l_315;
        for (g_296 = 0; (g_296 < 16); ++g_296)
        {
            int *l_325 = &g_222;
            int l_347 = 0L;
            int l_349 = (-3L);
            int l_356 = 0L;
            int l_387 = 1L;
            unsigned l_529 = 0xF0B043DCL;
            unsigned short l_577 = 65528UL;
            int ***l_603 = &g_217;
            unsigned l_617 = 4294967290UL;
            int *l_621 = &l_413;
            (*l_325) ^= (safe_mul_func_int16_t_s_s(g_102, (safe_add_func_int32_t_s_s(l_324, g_60))));
            for (g_182 = 0; (g_182 >= 28); g_182 = safe_add_func_uint32_t_u_u(g_182, 4))
            {
                char l_332 = 0xC5L;
                int *l_334 = (void*)0;
                int *l_336 = &g_222;
                int *l_337 = (void*)0;
                int *l_338 = &g_222;
                int *l_339 = &l_333;
                int *l_340 = &l_333;
                int *l_341 = (void*)0;
                int *l_342 = &g_82;
                int *l_343 = &g_222;
                int *l_344 = &l_335;
                int *l_345 = &l_333;
                int *l_348 = &l_333;
                int *l_350 = &g_82;
                int *l_351 = &g_222;
                int *l_352 = &g_82;
                int *l_353 = &g_82;
                int *l_354 = &l_335;
                int *l_355 = &l_335;
                int *l_357 = &l_330;
                int *l_358 = &l_347;
                int *l_359 = &l_333;
                int *l_360 = &l_349;
                int *l_361 = (void*)0;
                int *l_363 = &l_330;
                int *l_364 = &l_356;
                int *l_365 = &l_349;
                int *l_366 = &l_346;
                int *l_367 = (void*)0;
                int *l_368 = &l_330;
                int *l_369 = &l_335;
                int *l_370 = &l_362;
                int *l_371 = (void*)0;
                int *l_372 = (void*)0;
                int *l_373 = (void*)0;
                int *l_374 = &l_335;
                int *l_375 = &l_335;
                int *l_377 = &l_333;
                int *l_378 = &l_346;
                int *l_379 = &l_346;
                int *l_380 = &g_82;
                int *l_381 = &l_330;
                int *l_382 = &l_333;
                int *l_383 = &g_82;
                int *l_384 = &g_82;
                int *l_385 = &g_82;
                int *l_386 = &l_349;
                int *l_388 = (void*)0;
                int *l_390 = &l_335;
                int *l_391 = (void*)0;
                int *l_392 = &l_376;
                int *l_393 = &l_333;
                int *l_394 = &g_222;
                int *l_395 = &l_335;
                int *l_397 = &l_333;
                int *l_398 = (void*)0;
                int *l_399 = &l_347;
                int *l_400 = &l_333;
                int *l_401 = &l_349;
                int *l_402 = (void*)0;
                int *l_403 = (void*)0;
                int *l_405 = &l_330;
                int *l_406 = (void*)0;
                int *l_407 = (void*)0;
                int *l_408 = &l_387;
                int *l_409 = &l_356;
                int *l_410 = &l_335;
                int *l_411 = &l_387;
                int *l_412 = &l_347;
                int *l_414 = &l_330;
                int *l_415 = &l_376;
                int *l_417 = &l_347;
                int l_418 = 0xB77A9950L;
                int *l_420 = &l_418;
                int *l_421 = &l_387;
                short l_422 = 1L;
                int *l_424 = &l_404;
                int *l_425 = &g_82;
                int *l_426 = &l_404;
                int *l_427 = &l_404;
                int *l_428 = &l_346;
                int *l_429 = &l_335;
                int *l_430 = &g_82;
                unsigned short l_431 = 0UL;
                unsigned short l_434 = 1UL;
                int l_498 = 1L;
                int l_501 = (-5L);
                unsigned l_513 = 0x43CF4879L;
                int ***l_575 = &g_217;
                char **l_582 = &g_186;
                (*g_328) = ((*g_217) = (*g_217));
                ++l_431;
                if (l_434)
                {
                    char l_435 = 0x41L;
                    int l_436 = 0x2CA2C021L;
                    int l_437 = (-1L);
                    int *l_438 = &l_416;
                    int *l_439 = &l_335;
                    int *l_440 = (void*)0;
                    int l_441 = 0x04A6E0F1L;
                    int *l_442 = &l_441;
                    int *l_443 = &l_437;
                    int *l_444 = &l_396;
                    int *l_445 = &l_330;
                    int *l_446 = &l_423;
                    int *l_447 = &l_436;
                    int *l_448 = &l_437;
                    int *l_449 = &l_349;
                    int *l_450 = &l_389;
                    int *l_451 = (void*)0;
                    int *l_452 = &l_347;
                    int *l_453 = &l_330;
                    int *l_454 = &l_376;
                    int *l_455 = &l_396;
                    int *l_456 = &l_423;
                    int *l_457 = (void*)0;
                    int *l_458 = &l_416;
                    int *l_459 = &l_387;
                    int *l_460 = &l_423;
                    int *l_461 = (void*)0;
                    int *l_462 = &l_437;
                    int l_463 = 0xD75DE3B2L;
                    int *l_464 = &l_387;
                    int *l_465 = &l_349;
                    int *l_466 = &l_463;
                    int *l_467 = &l_389;
                    int *l_468 = &l_330;
                    int *l_469 = &l_416;
                    int *l_470 = &g_82;
                    int *l_471 = &l_404;
                    int *l_472 = (void*)0;
                    int *l_473 = &l_330;
                    int *l_474 = &l_418;
                    int *l_475 = &l_419;
                    int *l_476 = &l_419;
                    int *l_477 = &l_463;
                    int *l_478 = &l_396;
                    int *l_479 = &l_346;
                    int *l_480 = &l_356;
                    int *l_481 = &g_82;
                    int *l_482 = &l_441;
                    int *l_483 = (void*)0;
                    int *l_484 = &l_362;
                    int *l_485 = &l_396;
                    int *l_486 = &l_441;
                    int *l_487 = &l_333;
                    int *l_488 = &l_356;
                    int *l_489 = &g_82;
                    int *l_490 = &l_330;
                    int *l_491 = &l_347;
                    int *l_492 = &l_404;
                    int *l_493 = &l_389;
                    int *l_494 = &l_418;
                    int *l_495 = &l_389;
                    int l_496 = 0xC39EAFD2L;
                    int *l_497 = &l_389;
                    int *l_499 = &g_82;
                    int *l_500 = &l_436;
                    int *l_502 = &l_362;
                    int *l_503 = &l_436;
                    int *l_504 = (void*)0;
                    int *l_505 = &g_82;
                    int *l_506 = &l_437;
                    int *l_507 = (void*)0;
                    int *l_508 = (void*)0;
                    int *l_509 = (void*)0;
                    int *l_510 = &l_437;
                    int *l_511 = &g_82;
                    int *l_512 = &l_437;
                    unsigned char *l_517 = &g_193;
                    unsigned char **l_516 = &l_517;
                    --l_513;
                    (*g_518) = l_516;
                    l_325 = &l_362;
                    ++g_520;
                }
                else
                {
                    int l_523 = 0x17AFA522L;
                    char *l_538 = &g_9;
                    unsigned char *l_539 = &g_193;
                    char *l_541 = &l_540;
                    unsigned short *l_542 = &l_431;
                    int l_546 = (-10L);
                    int l_547 = 1L;
                    int l_561 = 1L;
                    if (((p_40 , (g_193++)) || (((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(l_529)) , (safe_lshift_func_uint16_t_u_s(0xF462L, p_42))), (((safe_mod_func_int16_t_s_s((l_523 = (l_523 < ((safe_rshift_func_int16_t_s_u(0x0A27L, ((*l_542) &= (g_117 = (((((((safe_add_func_int16_t_s_s((((*l_541) = (((*l_539) |= (l_538 != (void*)0)) >= l_540)) | p_43), 65531UL)) < g_64) > p_40) , (-1L)) , 0L) < p_42) , g_64))))) > (*l_325)))), g_64)) , l_543) == (void*)0))) , l_545) & l_376)))
                    {
                        int *l_548 = &l_346;
                        int *l_549 = &l_413;
                        int *l_550 = (void*)0;
                        int *l_551 = &l_547;
                        int *l_552 = &l_423;
                        int *l_553 = &l_335;
                        int *l_554 = &l_389;
                        int *l_555 = &l_418;
                        int *l_556 = &l_347;
                        int *l_557 = &l_387;
                        int *l_558 = (void*)0;
                        int *l_559 = (void*)0;
                        int *l_560 = &l_419;
                        int *l_562 = (void*)0;
                        int *l_563 = &l_362;
                        ++l_564;
                        (*l_355) = (((void*)0 != l_567) | (safe_mul_func_int16_t_s_s(p_42, g_9)));
                    }
                    else
                    {
                        unsigned l_576 = 9UL;
                        l_389 ^= ((safe_rshift_func_int8_t_s_u((l_335 ^ g_9), 1)) && (((void*)0 == g_572) | ((&l_544 != l_567) || ((((((void*)0 == l_575) & 0xFDFDF90AL) && (*l_342)) < l_423) == l_576))));
                    }
                    (*l_325) = ((l_423 <= ((p_41 = (***g_572)) , ((*g_574) = p_43))) != ((g_28 , &g_64) != &l_513));
                }
                if ((((p_40 & (((((*l_363) <= (*l_325)) != l_577) >= p_41) | (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((((0x5186942EL && 0L) > (l_545 || ((g_585 = (l_583 = ((*l_582) = &g_296))) != l_544))) & l_330) || p_40), p_40)), l_545)))) , (void*)0) != &l_543))
                {
                    unsigned short l_592 = 0xCFF1L;
                    short **l_607 = &g_574;
                    short **l_612 = &g_574;
                    (*l_358) = 0x5F355716L;
                    if (((*l_385) = (g_304 != 4294967295UL)))
                    {
                        unsigned char l_590 = 0UL;
                        int l_591 = 0L;
                        (*l_355) = (safe_sub_func_int8_t_s_s((-9L), 0x2AL));
                        (*l_343) ^= (safe_sub_func_int16_t_s_s((~l_590), 0x29E1L));
                        l_592++;
                    }
                    else
                    {
                        int ****l_606 = &l_575;
                        short ***l_608 = &g_573;
                        short ***l_609 = (void*)0;
                        short ***l_610 = (void*)0;
                        short ***l_611 = &l_607;
                        unsigned short *l_613 = &l_434;
                        (*g_221) ^= p_42;
                        (*l_325) |= 0xA35FD440L;
                        (*l_399) = (((safe_sub_func_uint16_t_u_u(((*l_613) &= (safe_mul_func_uint16_t_u_u(g_584, (safe_mod_func_uint8_t_u_u((p_42 = (safe_mul_func_uint16_t_u_u(g_7, ((void*)0 != l_603)))), (g_304 & (((p_41 ^= (safe_mul_func_uint16_t_u_u((&g_328 != ((*l_606) = (void*)0)), (g_117 = (((*l_611) = ((*l_608) = l_607)) == (g_79 , l_612)))))) ^ (*g_574)) >= 65535UL))))))), 0x28B0L)) != l_592) , 0xAA5E41AAL);
                        (*g_217) = &l_333;
                    }
                }
                else
                {
                    (*g_328) = &l_330;
                    l_614 = ((*g_217) = (**l_575));
                }
            }
            for (l_389 = 0; (l_389 >= 20); ++l_389)
            {
                unsigned l_620 = 0x670EDC74L;
                if (l_617)
                    break;
                for (l_540 = 0; (l_540 == 27); l_540++)
                {
                    (*l_325) = l_620;
                    (*g_221) |= p_40;
                }
            }
            (*l_621) &= (p_41 && ((0xB934L ^ p_40) && (*l_325)));
        }
        if (((safe_rshift_func_uint8_t_u_s(0x84L, (*g_585))) , ((*l_626) = (g_624 = (((*l_543) = (*l_543)) != (void*)0)))))
        {
            unsigned l_630 = 0x6E09BA27L;
            for (g_36 = 0; (g_36 > (-3)); --g_36)
            {
                int *l_629 = &l_413;
                (*g_217) = &l_333;
                (*g_217) = l_629;
                (**g_217) ^= p_41;
                return (**g_572);
            }
            l_630++;
        }
        else
        {
            return (**g_572);
        }
        (*l_626) = ((l_564 | (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(l_376)), (safe_mod_func_int16_t_s_s(0x7DB1L, ((safe_lshift_func_uint8_t_u_s((~l_413), 7)) | (6UL ^ (safe_mod_func_int32_t_s_s((-6L), (+g_182)))))))))) , (-1L));
    }
    g_690--;
    return (**g_572);
}







static unsigned char func_47(int p_48, short p_49, unsigned p_50, int p_51, char * p_52)
{
    int l_67 = (-7L);
    int l_70 = (-6L);
    unsigned char l_77 = 0xC0L;
    unsigned short *l_78 = (void*)0;
    short *l_80 = &g_36;
    int l_81 = 0x99B5F277L;
    unsigned l_90 = 5UL;
    char *l_100 = &g_9;
    unsigned *l_189 = &l_90;
    unsigned char l_278 = 0x92L;
    unsigned char **l_282 = (void*)0;
    unsigned char ***l_281 = &l_282;
    unsigned char ***l_283 = &l_282;
    char **l_286 = &l_100;
    unsigned short *l_287 = &g_60;
    int ***l_292 = &g_217;
    if ((safe_lshift_func_int8_t_s_s(l_67, (((safe_add_func_uint8_t_u_u((l_70 = g_60), ((*p_52) = (*p_52)))) >= (safe_mod_func_int8_t_s_s((g_82 |= (((((safe_rshift_func_int16_t_s_s(((*l_80) = ((g_79 = (safe_sub_func_uint32_t_u_u((l_77 != l_77), (((g_28 | ((g_60 | (p_50 && (g_28 , g_7))) < 65531UL)) < p_48) < 0x9C4F4FCFL)))) , l_77)), 3)) , p_49) <= l_81) || 0x1C5AB2A4L) , g_28)), p_51))) , (-1L)))))
    {
        unsigned *l_85 = &g_64;
        int l_93 = 0xA55CCBD9L;
        char *l_97 = &g_9;
        char **l_96 = &l_97;
        char *l_99 = (void*)0;
        char **l_98 = &l_99;
        unsigned *l_101 = &g_102;
        int *l_121 = (void*)0;
        int **l_120 = &l_121;
        short *l_188 = &g_36;
        unsigned char *l_236 = &l_77;
        unsigned char **l_235 = &l_236;
        unsigned l_238 = 1UL;
        unsigned short l_267 = 65535UL;
        if ((safe_add_func_uint32_t_u_u(((*l_85)--), ((safe_mod_func_uint32_t_u_u((l_90 & (((*l_80) &= (safe_lshift_func_int16_t_s_u(l_93, 13))) , 0x8D11A6C9L)), g_79)) <= (safe_sub_func_int32_t_s_s((((*l_98) = ((*l_96) = &g_9)) != l_100), (++(*l_101))))))))
        {
            unsigned short *l_105 = &g_60;
            char ***l_106 = &l_96;
            int l_108 = 0xBB921586L;
            unsigned *l_187 = &g_64;
            char l_220 = 0xB3L;
            short **l_223 = (void*)0;
            unsigned char *l_232 = &l_77;
            unsigned char **l_231 = &l_232;
            unsigned l_237 = 0xB248B132L;
            if ((!(l_108 = ((((p_51 == (((l_105 != l_80) || l_77) <= (0x7473L & ((p_49 , l_93) < 0x7CEE7E28L)))) ^ (~((((*l_106) = &p_52) != g_107) , 0x4EL))) && l_93) || l_90))))
            {
                for (g_82 = 0; (g_82 < 29); ++g_82)
                {
                    int *l_111 = &l_108;
                    int **l_112 = &l_111;
                    (*l_111) = 0x5E135737L;
                    (*l_112) = &p_51;
                    p_51 = (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((g_117 = 0UL), (p_48 < (safe_mul_func_uint16_t_u_u((l_120 != &l_121), (((-10L) || (safe_rshift_func_int16_t_s_s(l_108, 4))) && (*p_52))))))), ((safe_unary_minus_func_uint8_t_u((p_48 >= (safe_mul_func_int8_t_s_s(((void*)0 != &g_102), (*l_111)))))) <= g_28)));
                }
            }
            else
            {
                int *l_127 = (void*)0;
                int *l_128 = &l_67;
                (*l_128) |= g_60;
                for (l_67 = 0; (l_67 > 19); l_67 = safe_add_func_int16_t_s_s(l_67, 1))
                {
                    (*l_120) = &p_48;
                }
            }
            for (l_77 = (-13); (l_77 == 29); l_77 = safe_add_func_int8_t_s_s(l_77, 6))
            {
                int l_163 = (-1L);
                char *l_185 = &g_9;
                for (p_48 = 0; (p_48 < (-4)); p_48 = safe_sub_func_uint32_t_u_u(p_48, 1))
                {
                    int *l_135 = (void*)0;
                    int *l_136 = &l_81;
                    int *l_137 = &l_108;
                    int *l_138 = (void*)0;
                    int *l_139 = &l_67;
                    int *l_140 = &g_82;
                    int *l_141 = (void*)0;
                    int *l_142 = (void*)0;
                    int *l_143 = &l_70;
                    int *l_144 = &l_93;
                    int *l_145 = (void*)0;
                    int *l_146 = (void*)0;
                    int *l_147 = &l_108;
                    int *l_148 = &g_82;
                    int *l_149 = &l_108;
                    int *l_150 = &l_108;
                    int *l_151 = &l_70;
                    int *l_152 = &l_93;
                    int *l_153 = &l_93;
                    int *l_154 = &l_93;
                    int *l_155 = &l_93;
                    int *l_156 = &l_67;
                    int *l_157 = &l_108;
                    int *l_158 = &l_108;
                    int *l_159 = (void*)0;
                    int *l_160 = &g_82;
                    int *l_161 = &l_70;
                    int *l_162 = &g_82;
                    int *l_164 = &l_81;
                    int *l_165 = &l_70;
                    int *l_166 = &g_82;
                    int *l_167 = &l_108;
                    int *l_168 = (void*)0;
                    int *l_169 = &l_67;
                    int *l_170 = &l_93;
                    int *l_171 = &l_108;
                    int *l_172 = &g_82;
                    int *l_173 = &g_82;
                    int *l_174 = &l_70;
                    int *l_176 = &g_82;
                    int *l_177 = (void*)0;
                    int *l_178 = &l_67;
                    int l_179 = 0xF12BF0D6L;
                    int *l_180 = &g_82;
                    int *l_181 = &l_67;
                    g_182++;
                    if (((((*l_80) = p_49) <= (~(p_52 != (g_186 = l_185)))) , (l_187 != (((void*)0 != l_188) , l_189))))
                    {
                        (*l_120) = &p_48;
                    }
                    else
                    {
                        unsigned char *l_192 = &g_193;
                        unsigned char **l_198 = &l_192;
                        (*l_139) = (-1L);
                        (*l_170) |= ((safe_add_func_uint8_t_u_u(((*l_192) = g_82), (*l_176))) , ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_48, 9)), (&g_193 != ((*l_198) = &g_193)))) , (safe_rshift_func_uint16_t_u_u(((*l_105) = p_50), g_28))));
                    }
                }
            }
            for (g_79 = 0; (g_79 <= 19); g_79 = safe_add_func_uint32_t_u_u(g_79, 6))
            {
                unsigned l_203 = 6UL;
                int ***l_208 = (void*)0;
                int ***l_209 = &l_120;
                unsigned char *l_214 = &g_193;
                int ***l_219 = &g_217;
                (*g_221) |= (((l_203 , (0x1EE1L > (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((((*l_209) = &l_121) == ((*l_219) = (((g_82 = (p_48 && l_93)) < ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_214) = p_48), (((safe_sub_func_int16_t_s_s(p_51, (((p_51 > p_48) > g_60) , l_77))) , 0x70L) && 0xC3L))), l_108)) && p_49)) , g_217))) < l_220) || g_117), l_108)), g_64)))) >= p_49) <= 0x05L);
                if ((***l_219))
                {
                    short ***l_224 = &l_223;
                    unsigned char ***l_233 = (void*)0;
                    unsigned char ***l_234 = &l_231;
                    (*l_224) = l_223;
                    (***l_219) = (((+(safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(g_28, p_48)) >= g_60), 255UL))) <= (p_48 == (((g_64 | (p_48 && (safe_add_func_uint32_t_u_u((((*l_234) = l_231) != l_235), 0x460F080FL)))) , g_175) , (*g_221)))) ^ 4L);
                    if (p_49)
                        continue;
                }
                else
                {
                    (*l_120) = &l_108;
                    (*g_218) = l_237;
                    l_238++;
                }
            }
        }
        else
        {
            unsigned short l_243 = 0xDD26L;
            int l_264 = 1L;
            if (((safe_sub_func_int32_t_s_s(p_50, 0xD5F4407CL)) == l_243))
            {
                unsigned short *l_248 = &l_243;
                for (l_90 = 0; (l_90 != 20); l_90++)
                {
                    (*g_218) = (safe_rshift_func_uint8_t_u_u(g_175, 1));
                    (**g_217) |= l_243;
                }
lbl_251:
                (**g_217) ^= (p_51 > ((*l_248) = g_117));
                for (g_60 = 0; (g_60 != 43); ++g_60)
                {
                    if (g_60)
                        goto lbl_251;
                }
            }
            else
            {
                unsigned l_261 = 0x2C180532L;
                for (l_67 = 0; (l_67 <= 28); l_67++)
                {
                    unsigned l_254 = 0x48BB85DCL;
                    (**g_217) = ((g_28 , l_254) != ((251UL | (((0xB42118B5L < 0xE0177B9BL) | ((((safe_lshift_func_int16_t_s_u(g_82, p_49)) | (g_222 != l_81)) || p_51) != (-1L))) , 255UL)) != (**g_217)));
                    (*l_120) = (void*)0;
                }
                (*g_218) = ((((g_82 | g_9) && ((((**l_235) = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((0x0B73L <= l_261) <= (safe_mod_func_uint16_t_u_u((l_264 = ((p_50 , ((*l_96) = &g_9)) != (g_28 , l_100))), (safe_add_func_int16_t_s_s((l_267 , p_48), g_117))))), 2)) >= 0xF187A65DL), p_50))) > l_81) != g_9)) & l_243) > l_261);
            }
            (*l_120) = (*g_217);
        }
    }
    else
    {
        int l_268 = 0L;
        short **l_269 = &l_80;
        p_51 |= l_268;
        (**g_217) = (((void*)0 == l_269) != (safe_sub_func_int32_t_s_s(l_268, (0UL >= (&l_100 != (void*)0)))));
    }
    if (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_49, ((safe_rshift_func_int16_t_s_s(l_278, 13)) & (((((*l_80) |= ((safe_sub_func_int8_t_s_s((l_278 , ((*p_52) = (*p_52))), (l_281 == (l_283 = l_283)))) ^ ((((*l_287) = (((*l_286) = (((((safe_mod_func_int8_t_s_s(l_67, p_49)) < 1UL) , 0x4E27C4DBL) < l_278) , (void*)0)) != p_52)) & 65534UL) , g_28))) & l_67) ^ 8UL) , p_49)))), l_77)) < l_70))
    {
        unsigned l_297 = 8UL;
        int l_301 = 0xD8495814L;
        for (g_9 = (-3); (g_9 >= 8); ++g_9)
        {
            short l_293 = 0xCDB1L;
            char l_298 = 0xA1L;
            if ((*g_221))
            {
                char *l_294 = (void*)0;
                char *l_295 = &g_296;
                g_304 ^= ((safe_lshift_func_uint8_t_u_u((((*p_52) & (((l_298 |= (l_297 = ((*l_295) = (l_292 != (l_293 , l_292))))) & (safe_add_func_int16_t_s_s(l_301, (***l_292)))) ^ (((safe_mod_func_int8_t_s_s((***l_292), l_293)) && p_48) > l_293))) >= (-5L)), 6)) , p_51);
            }
            else
            {
                unsigned short l_307 = 65535UL;
                for (p_49 = 0; (p_49 <= 25); p_49 = safe_add_func_int32_t_s_s(p_49, 6))
                {
                    l_307--;
                }
                return (***l_292);
            }
        }
    }
    else
    {
        (*g_311) ^= (*g_218);
        (*g_217) = &p_48;
        (**l_292) = (void*)0;
    }
    return g_7;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1214, "g_1214", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1421, "g_1421", print_hash_value);
    transparent_crc(g_1569, "g_1569", print_hash_value);
    transparent_crc(g_1703, "g_1703", print_hash_value);
    transparent_crc(g_1764, "g_1764", print_hash_value);
    transparent_crc(g_1767, "g_1767", print_hash_value);
    transparent_crc(g_2124, "g_2124", print_hash_value);
    transparent_crc(g_2141, "g_2141", print_hash_value);
    transparent_crc(g_2288, "g_2288", print_hash_value);
    transparent_crc(g_2547, "g_2547", print_hash_value);
    transparent_crc(g_2604, "g_2604", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
