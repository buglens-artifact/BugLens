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



static int g_4 = 0x60B4FFB8L;
static const int **g_11 = (void*)0;
static int g_20 = 5L;
static int *g_63 = &g_20;
static int **g_62 = &g_63;
static int g_69 = (-5L);
static int g_76 = 0x6FA41D40L;
static int * const *g_81 = (void*)0;
static int g_82 = 0x401FF3C8L;
static unsigned short g_97 = 0x7606L;
static unsigned char g_125 = 0xF9L;
static unsigned char g_140 = 7UL;
static char g_157 = 0x63L;
static unsigned g_163 = 4294967295UL;
static int g_176 = 1L;
static short g_192 = 1L;
static short *g_191 = &g_192;
static unsigned g_219 = 0xC302F645L;
static unsigned short g_267 = 0xEDFEL;
static unsigned short g_284 = 0xAA81L;
static int g_344 = 0x797122E4L;
static unsigned g_379 = 8UL;
static unsigned char g_470 = 0x51L;
static int g_473 = (-10L);
static int g_475 = (-1L);
static unsigned g_478 = 1UL;
static int g_573 = (-10L);
static unsigned char *g_594 = (void*)0;
static unsigned g_660 = 0UL;
static char *g_669 = (void*)0;
static char g_853 = 8L;
static char g_864 = 0x58L;
static char g_869 = 0x33L;
static int g_878 = 0xE06555FDL;
static int g_889 = (-6L);
static char g_902 = 6L;
static char g_908 = (-1L);
static int g_909 = 0x1E1BFC9CL;
static int g_914 = 0x7A55F609L;
static int g_922 = 1L;
static unsigned short g_930 = 1UL;
static unsigned g_933 = 1UL;
static unsigned short g_1043 = 1UL;
static int g_1056 = 1L;
static int g_1135 = 0x2ABFE3EEL;
static int g_1164 = 0L;
static unsigned g_1169 = 0x49E7C4A5L;
static short g_1248 = 0x9004L;
static short **g_1515 = &g_191;
static short ** const *g_1514 = &g_1515;
static unsigned g_1526 = 3UL;
static const int *g_1772 = &g_76;
static int g_1981 = 1L;
static char g_1983 = 0L;
static char g_2143 = (-3L);
static short ***g_2179 = &g_1515;
static short g_2219 = 0x2721L;
static char g_2261 = 5L;
static unsigned g_2272 = 0xF795256CL;
static unsigned char g_2273 = 0x83L;
static unsigned **g_2297 = (void*)0;
static unsigned g_2307 = 0UL;
static unsigned *g_2400 = &g_478;
static unsigned * const *g_2399 = &g_2400;
static unsigned char g_2418 = 255UL;
static int *g_2426 = (void*)0;
static int g_2579 = 2L;
static int g_2586 = (-9L);
static short g_2621 = 0xB48AL;
static unsigned short g_2629 = 0x4D26L;
static unsigned char g_2673 = 0xDFL;
static unsigned char g_2824 = 0x81L;
static unsigned char **g_2911 = &g_594;
static int g_2927 = 1L;



static char func_1(void);
static unsigned func_12(unsigned char p_13, unsigned short p_14, const int ** p_15);
static unsigned short func_28(unsigned p_29, int * p_30, const int p_31);
static unsigned func_32(unsigned p_33, int * p_34, unsigned p_35, int p_36, short p_37);
static char func_38(unsigned char p_39);
static unsigned char func_42(unsigned short p_43, int * p_44, int * p_45);
static int * func_46(int p_47, char p_48, int * p_49, unsigned char p_50);
static int ** func_53(int ** p_54, int p_55);
static int ** func_56(int ** p_57, int ** p_58, int * p_59, int ** const p_60, unsigned char p_61);
static int ** func_64(int ** p_65, int ** p_66);
static char func_1(void)
{
    int *l_3 = &g_4;
    int **l_2 = &l_3;
    int l_2484 = (-1L);
    int l_2491 = 1L;
    unsigned l_2504 = 0x4405D474L;
    const unsigned char l_2521 = 0xE3L;
    char l_2565 = 0x26L;
    int ***l_2643 = &g_62;
    int l_2644 = 0x58E371BAL;
    unsigned ***l_2649 = &g_2297;
    int *l_2670 = &g_2579;
    unsigned short l_2725 = 0xEEB5L;
    int l_2833 = 0xA49F8CC1L;
    unsigned **l_2844 = &g_2400;
    unsigned l_2926 = 0xC22D45BAL;
    (*l_2) = (void*)0;

    ;
    if (((safe_mod_func_uint16_t_u_u(g_4, (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((void*)0 != g_11) < g_4), 0)), func_12(g_4, g_4, g_11))))) | (safe_rshift_func_uint8_t_u_s(g_284, 6))))
    {
        int l_2465 = 0x5AA7A73EL;
        for (g_933 = 0; (g_933 <= 31); g_933 = safe_add_func_int8_t_s_s(g_933, 6))
        {
            int *l_2427 = &g_69;
            int *l_2428 = &g_889;
            int *l_2429 = &g_82;
            int *l_2430 = &g_76;
            int *l_2431 = &g_82;
            int *l_2432 = &g_1056;
            int *l_2433 = &g_20;
            int *l_2434 = &g_4;
            int *l_2435 = (void*)0;
            int *l_2436 = &g_1056;
            int *l_2437 = &g_4;
            int *l_2438 = &g_1164;
            int *l_2439 = &g_20;
            int *l_2440 = &g_76;
            int *l_2441 = &g_20;
            int *l_2442 = &g_20;
            int *l_2443 = &g_76;
            int *l_2444 = (void*)0;
            int *l_2445 = &g_69;
            int *l_2446 = &g_20;
            int *l_2447 = &g_4;
            int *l_2448 = &g_473;
            int *l_2449 = &g_69;
            int *l_2450 = &g_82;
            int *l_2451 = &g_922;
            int *l_2452 = (void*)0;
            int *l_2453 = (void*)0;
            int *l_2454 = (void*)0;
            int *l_2455 = &g_20;
            int *l_2456 = &g_20;
            int *l_2457 = &g_889;
            int *l_2458 = &g_76;
            int *l_2459 = &g_473;
            int *l_2460 = &g_473;
            int *l_2461 = &g_473;
            int *l_2462 = &g_20;
            int *l_2463 = &g_922;
            int *l_2464 = &g_473;
            int *l_2466 = (void*)0;
            int *l_2467 = &g_20;
            int *l_2468 = (void*)0;
            int *l_2469 = &g_76;
            int *l_2470 = (void*)0;
            int *l_2471 = (void*)0;
            int *l_2472 = &g_922;
            int *l_2473 = &g_76;
            int *l_2474 = (void*)0;
            int *l_2475 = (void*)0;
            int *l_2476 = &g_4;
            int *l_2477 = &g_889;
            int *l_2478 = &g_1056;
            int *l_2479 = &g_1056;
            int *l_2480 = (void*)0;
            int *l_2481 = (void*)0;
            int *l_2482 = &g_4;
            int *l_2483 = &g_20;
            int *l_2485 = (void*)0;
            int *l_2486 = &g_69;
            int *l_2487 = &l_2484;
            int *l_2488 = &l_2484;
            int *l_2489 = &g_1056;
            int *l_2490 = &g_473;
            int *l_2492 = &g_20;
            int *l_2493 = (void*)0;
            int *l_2494 = (void*)0;
            int l_2495 = 0x7CC02695L;
            int *l_2496 = &g_1164;
            int *l_2497 = (void*)0;
            int *l_2498 = &g_82;
            int *l_2499 = (void*)0;
            int *l_2500 = &l_2484;
            int *l_2501 = (void*)0;
            int *l_2502 = &l_2491;
            int *l_2503 = &g_473;
            (*l_2) = g_2426;
            if ((*g_63))
                continue;
            l_2504++;
            (*l_2434) = (safe_mod_func_uint32_t_u_u(0x4213800BL, (**g_2399)));
        }
    }
    else
    {
        unsigned short *l_2515 = &g_267;
        unsigned char *l_2516 = &g_140;
        unsigned short l_2517 = 0xA2DDL;
        int *l_2518 = &g_889;
        (*l_2518) = ((***g_2179) || (safe_rshift_func_int8_t_s_u((0x8CL && (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_2515 != (((*l_2516) = 0xCBL) , (void*)0)), (func_12(func_42(g_192, (*g_62), (*g_62)), g_176, &g_1772) | l_2517))), l_2517))), g_909)));
    }

    ;

    (**g_62) &= (((**g_2399)++) < l_2521);
    for (g_470 = (-8); (g_470 != 22); ++g_470)
    {
        char l_2528 = (-7L);
        char *l_2529 = &g_1983;
        int *l_2530 = &g_1164;
        char *l_2531 = &g_853;
        char *l_2532 = &g_864;
        int l_2533 = 0xB22AF50EL;
        int l_2540 = (-10L);
        int l_2551 = 8L;
        int l_2562 = 8L;
        int l_2587 = 0L;
        int l_2641 = 0x9CDABA52L;
        unsigned l_2645 = 0x40F55046L;
        const short l_2669 = 0x92D9L;
        int l_2674 = 0xBFA37BE4L;
        short *l_2847 = &g_2219;
        unsigned short *l_2848 = &g_267;
        short l_2849 = 0xB7C1L;
        unsigned short l_2883 = 1UL;
        unsigned * const **l_2922 = &g_2399;
    }
    return g_2927;
}







static unsigned func_12(unsigned char p_13, unsigned short p_14, const int ** p_15)
{
    int l_16 = 1L;
    int *l_17 = (void*)0;
    int *l_18 = (void*)0;
    int *l_19 = &g_20;
    int *l_27 = (void*)0;
    unsigned short l_1350 = 0x5CACL;
    char l_1351 = 0x0DL;
    int l_2420 = (-1L);
    int *l_2421 = &g_1164;
    (*l_19) = l_16;
    (*l_2421) = (safe_sub_func_int32_t_s_s(3L, ((*l_19) = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_27 == (void*)0), p_13)), (func_28(func_32((((func_38(p_14) != (safe_rshift_func_uint8_t_u_s(func_42((*l_19), func_46(g_4, (g_20 , 0xDAL), l_27, p_13), l_19), 2))) == l_1350) , 0x8DEA2EE4L), l_18, p_13, (*l_19), l_1351), l_17, p_14) <= l_2420))) == 0UL))));
    return (*l_19);
}







static unsigned short func_28(unsigned p_29, int * p_30, const int p_31)
{
    int l_1447 = (-1L);
    int l_1454 = (-8L);
    char *l_1474 = &g_869;
    char *l_1475 = &g_902;
    const int *l_1478 = (void*)0;
    unsigned l_1479 = 4294967295UL;
    int l_1488 = 5L;
    unsigned l_1489 = 3UL;
    char l_1490 = 0x72L;
    int *l_1492 = &g_1056;
    char l_1501 = 6L;
    const int *l_1512 = &g_1164;
    unsigned char l_1528 = 1UL;
    short ***l_1530 = &g_1515;
    unsigned l_1534 = 6UL;
    int *l_1547 = &g_889;
    const int *l_1548 = &g_914;
    int *l_1558 = &g_20;
    int l_1561 = 0xEE1D6871L;
    int l_1566 = 1L;
    int l_1569 = 0x5C5A03ACL;
    unsigned short l_1588 = 1UL;
    short l_1599 = 3L;
    unsigned *l_1600 = (void*)0;
    int l_1602 = (-4L);
    const short l_1627 = 0L;
    int l_1636 = 1L;
    int *l_1642 = &g_4;
    char l_1643 = (-9L);
    int l_1644 = (-7L);
    char l_1669 = (-3L);
    unsigned l_1670 = 4294967295UL;
    const int *l_1681 = (void*)0;
    short l_1685 = 0x31B8L;
    unsigned l_1697 = 0x76FACCA6L;
    const int *l_1701 = (void*)0;
    int l_1707 = (-2L);
    unsigned l_1726 = 0xDEAEC6BAL;
    unsigned char l_1729 = 0UL;
    unsigned l_1734 = 7UL;
    unsigned l_1740 = 0x15177AADL;
    unsigned l_1751 = 0xC1FE5B15L;
    int * const **l_1762 = (void*)0;
    int *l_1766 = (void*)0;
    int ***l_1770 = &g_62;
    int *l_1773 = &g_1164;
    char l_1787 = 0xEAL;
    char l_1790 = 8L;
    unsigned l_1791 = 1UL;
    int l_1792 = 0x5AAA05BCL;
    unsigned l_1840 = 3UL;
    const short l_1846 = (-1L);
    char l_1921 = (-8L);
    short l_1947 = 0xA64CL;
    short l_1951 = 0L;
    unsigned short l_1986 = 0x0D02L;
    const unsigned char l_1993 = 255UL;
    unsigned char **l_2006 = &g_594;
    unsigned l_2007 = 1UL;
    unsigned l_2008 = 1UL;
    unsigned l_2039 = 0UL;
    int l_2046 = (-8L);
    short l_2053 = 0x15F8L;
    short l_2059 = 0x57B0L;
    unsigned l_2074 = 0x1C964024L;
    int *l_2087 = &g_4;
    unsigned short l_2088 = 0x1E59L;
    unsigned char l_2111 = 0UL;
    unsigned char **l_2138 = &g_594;
    unsigned char l_2140 = 0xA4L;
    short **l_2141 = &g_191;
    short l_2156 = 0x1383L;
    unsigned short *l_2159 = &g_284;
    unsigned char *l_2162 = &l_2140;
    short l_2169 = 1L;
    short ***l_2170 = &l_2141;
    int *l_2171 = (void*)0;
    unsigned short l_2172 = 0x8374L;
    short ** const *l_2176 = &g_1515;
    short ***l_2178 = &g_1515;
    short l_2190 = 0x414AL;
    unsigned l_2191 = 0xE67BBCD4L;
    unsigned l_2192 = 2UL;
    unsigned short l_2193 = 0xC9C9L;
    unsigned l_2194 = 0xED364D81L;
    short l_2276 = 0x0E37L;
    int l_2282 = 0L;
    int *l_2283 = &g_69;
    int l_2284 = 0L;
    unsigned char l_2305 = 0x6AL;
    unsigned char l_2388 = 253UL;
    return g_267;
}







static unsigned func_32(unsigned p_33, int * p_34, unsigned p_35, int p_36, short p_37)
{
    int *l_1352 = &g_922;
    int *l_1353 = &g_1164;
    int *l_1354 = &g_922;
    int *l_1355 = &g_69;
    int *l_1356 = &g_922;
    int *l_1357 = &g_922;
    int *l_1358 = &g_69;
    int *l_1359 = (void*)0;
    int *l_1360 = &g_889;
    int *l_1361 = &g_889;
    int *l_1362 = &g_1056;
    int *l_1363 = &g_76;
    int *l_1364 = &g_922;
    int *l_1365 = &g_922;
    int *l_1366 = (void*)0;
    int *l_1367 = &g_1164;
    int *l_1368 = &g_69;
    int *l_1369 = &g_889;
    int *l_1370 = &g_1164;
    int l_1371 = 0xED7D4FD5L;
    int *l_1372 = (void*)0;
    int *l_1373 = &g_1056;
    int *l_1374 = &g_1164;
    int *l_1375 = (void*)0;
    int *l_1376 = &g_69;
    int *l_1377 = &g_69;
    int *l_1378 = &g_889;
    int l_1379 = 0L;
    int *l_1380 = &g_1056;
    int *l_1381 = &g_76;
    int *l_1382 = &g_76;
    int *l_1383 = &l_1371;
    int *l_1384 = &g_76;
    int *l_1385 = &g_473;
    int *l_1386 = &g_20;
    int *l_1387 = &g_82;
    int *l_1388 = &l_1379;
    int *l_1389 = &g_473;
    int *l_1390 = (void*)0;
    int *l_1391 = &g_473;
    int *l_1392 = (void*)0;
    int *l_1393 = &l_1371;
    int *l_1394 = &g_82;
    int *l_1395 = &g_82;
    int *l_1396 = &g_922;
    int *l_1397 = &g_69;
    int *l_1398 = &g_82;
    int *l_1399 = (void*)0;
    int l_1400 = (-1L);
    int *l_1401 = &l_1371;
    int *l_1402 = (void*)0;
    int *l_1403 = &l_1400;
    int *l_1404 = &g_922;
    int *l_1405 = &g_473;
    int *l_1406 = &l_1400;
    int *l_1407 = &g_1056;
    int *l_1408 = &g_1164;
    int *l_1409 = &g_473;
    int l_1410 = 0x5EC8D698L;
    int *l_1411 = (void*)0;
    int *l_1412 = &l_1410;
    int *l_1413 = &g_69;
    int *l_1414 = &g_473;
    int *l_1415 = &l_1379;
    int *l_1416 = (void*)0;
    int *l_1417 = &g_82;
    int *l_1418 = &g_889;
    int *l_1419 = &g_69;
    int *l_1420 = &g_76;
    int *l_1421 = &l_1400;
    int *l_1422 = &l_1379;
    int *l_1423 = &g_20;
    int *l_1424 = &g_1164;
    int l_1425 = 0xDAA3D388L;
    int *l_1426 = (void*)0;
    int *l_1427 = (void*)0;
    int *l_1428 = &g_473;
    int *l_1429 = (void*)0;
    int *l_1430 = &g_1056;
    int l_1431 = 0x4A591184L;
    int *l_1432 = &g_76;
    int *l_1433 = &l_1431;
    int *l_1434 = &g_76;
    int l_1435 = 0xB072766DL;
    int *l_1436 = &l_1435;
    int *l_1437 = &l_1379;
    int l_1438 = 0xC6A579B6L;
    int *l_1439 = (void*)0;
    int *l_1440 = &l_1431;
    int *l_1441 = &g_82;
    int *l_1442 = &g_69;
    int *l_1443 = &g_473;
    unsigned char l_1444 = 4UL;
    ++l_1444;
    return (*l_1354);
}







static char func_38(unsigned char p_39)
{
    return g_20;
}







static unsigned char func_42(unsigned short p_43, int * p_44, int * p_45)
{
    unsigned l_1347 = 0UL;
    int *l_1348 = (void*)0;
    char l_1349 = 0xA2L;
    (*g_62) = p_45;


    return p_43;
}







static int * func_46(int p_47, char p_48, int * p_49, unsigned char p_50)
{
    int **l_67 = (void*)0;
    int ***l_1317 = &l_67;
    int l_1318 = 0xC9A0DDC9L;
    int *l_1339 = &g_69;
    unsigned *l_1346 = &g_163;
    (*l_1339) = (safe_add_func_uint16_t_u_u(((&p_47 != &p_47) < 0x6A68L), (((*l_1317) = func_53(((*l_1317) = func_56(g_62, func_64(&g_63, l_67), &p_47, g_62, p_47)), l_1318)) == g_62)));


    ;
    (*l_1339) = (!(p_48 && ((*g_191) = (safe_mod_func_int32_t_s_s((*l_1339), ((*l_1346) = (((void*)0 != p_49) && (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(func_38(((g_864 <= (func_38((p_48 , p_48)) == p_48)) & 0xEF18L)), 2)) < p_47), 6)))))))));
    return &g_473;


}







static int ** func_53(int ** p_54, int p_55)
{
    short ** const l_1319 = &g_191;
    int *l_1320 = (void*)0;
    int *l_1321 = &g_473;
    unsigned char l_1326 = 0xD5L;
    unsigned char *l_1327 = &g_125;
    short l_1332 = 0xDDFEL;
    (*l_1321) &= ((void*)0 == l_1319);
    (*l_1321) ^= (+(safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(l_1326, 7UL)) <= g_20) , g_219) || ((*l_1327) = g_379)), (safe_mod_func_int16_t_s_s((g_933 <= ((safe_lshift_func_int8_t_s_u(l_1332, 6)) , ((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_267, 1)), 0xC1L)) != 0x1F443B18L), 3)) | 0x0E6A0AB1L))), (*g_191))))));
    return &g_63;


}







static int ** func_56(int ** p_57, int ** p_58, int * p_59, int ** const p_60, unsigned char p_61)
{
    const char l_1287 = 0xCFL;
    int l_1302 = 0x9FCDFB52L;
    int l_1305 = (-1L);
    short **l_1314 = (void*)0;
    int **l_1316 = (void*)0;
    for (g_69 = 4; (g_69 <= (-17)); g_69 = safe_sub_func_uint16_t_u_u(g_69, 1))
    {
        unsigned l_1290 = 1UL;
        int l_1296 = 1L;
        int l_1299 = 0x4456736AL;
        unsigned *l_1300 = (void*)0;
        unsigned *l_1301 = &g_478;
        char *l_1303 = &g_853;
        char *l_1304 = &g_869;
        unsigned short *l_1315 = &g_1043;
        l_1305 = ((*p_59) = (65535UL || ((l_1287 <= p_61) ^ (safe_rshift_func_uint16_t_u_u(l_1290, (p_61 >= ((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(l_1290, ((*l_1304) ^= (safe_mod_func_int8_t_s_s((((l_1296 |= l_1290) ^ ((*l_1303) = (func_38((((*l_1301) = ((safe_rshift_func_int16_t_s_s(((((l_1299 , ((*p_59) && (*p_59))) & 0x46CAD6A1L) < l_1290) == p_61), 6)) != g_97)) , 247UL)) > l_1302))) ^ 0xD5C4D138L), l_1299))))))) , p_61)))))));
        g_889 = (safe_add_func_uint8_t_u_u((((((*l_1315) = (safe_lshift_func_uint16_t_u_s(0xC6FBL, (l_1299 >= (safe_lshift_func_int8_t_s_s(((g_909 & (l_1287 >= (p_61 = (safe_mul_func_uint8_t_u_u(l_1296, ((g_1056 , l_1314) == ((!(func_38(func_38(l_1287)) > p_61)) , (void*)0))))))) >= 0xACL), 6)))))) >= 0x9E45L) == 0x2B0E3037L) , l_1296), 252UL));
    }
    return l_1316;


}







static int ** func_64(int ** p_65, int ** p_66)
{
    int *l_68 = &g_69;
    unsigned l_74 = 0UL;
    const unsigned char l_84 = 0UL;
    int l_115 = 2L;
    short l_194 = 5L;
    int l_242 = (-10L);
    int l_476 = 0xBBA2241EL;
    int l_558 = 1L;
    int l_569 = 0xB6840F77L;
    char l_580 = 9L;
    int l_587 = 0x6E401372L;
    unsigned l_610 = 0xE2D5DD3EL;
    int l_674 = 0x112BF304L;
    unsigned *l_687 = &l_74;
    int l_694 = 0x5A65C302L;
    unsigned l_1173 = 0UL;
    short l_1184 = 0x6F1AL;
    const short *l_1277 = (void*)0;
    const short **l_1276 = &l_1277;
    unsigned short l_1279 = 0x1CB7L;
    unsigned l_1282 = 0UL;
    (*l_68) = (**g_62);
    if (((*p_65) == (void*)0))
    {
        int l_77 = 1L;
        short l_93 = 0xA9E7L;
        unsigned short l_128 = 65535UL;
        int **l_223 = &g_63;
        short **l_245 = &g_191;
        int *l_291 = &g_76;
        unsigned char *l_294 = (void*)0;
        unsigned short l_296 = 65535UL;
        int l_433 = 0x2533FD09L;
        int l_586 = 6L;
        int l_665 = 0xB42871C5L;
        unsigned char *l_695 = (void*)0;
        unsigned char *l_696 = &g_125;
        int l_697 = 0x64933B06L;
        for (g_69 = (-12); (g_69 == 21); g_69++)
        {
            int **l_72 = (void*)0;
            int **l_73 = &l_68;
            int *l_75 = &g_76;
            unsigned short l_131 = 65530UL;
            short *l_186 = &l_93;
            unsigned char l_203 = 0x82L;
            int l_252 = 3L;
            int l_281 = 0L;
            (*p_65) = (void*)0;

            ;
        }


        if ((safe_add_func_int32_t_s_s(((void*)0 != &p_65), (4294967295UL != (safe_mul_func_uint8_t_u_u(((((*l_291) &= (*l_68)) | (safe_mod_func_int8_t_s_s((0L || 0UL), (-3L)))) , (l_294 != &g_125)), 0xF5L))))))
        {
            unsigned l_295 = 0x1E915D1EL;
            short *l_306 = &l_93;
            int l_313 = 7L;
            unsigned l_494 = 6UL;
            int l_635 = 0L;
            int l_650 = 0xB3515830L;
            int **l_663 = &g_63;
            if ((l_295 && func_38((l_296 ^ (l_295 , (*l_68))))))
            {
                int **l_316 = &g_63;
                int l_474 = 0x55EECBC7L;
                int l_552 = 0x1ACF54B0L;
                int l_585 = 0xEE497319L;
                unsigned char *l_593 = &g_125;
                (*l_223) = &l_115;

                ;
                for (g_219 = 0; (g_219 != 43); g_219 = safe_add_func_int16_t_s_s(g_219, 5))
                {
                    char l_305 = 0x48L;
                    int **l_314 = &g_63;
                    int **l_315 = &g_63;
                    unsigned *l_382 = &g_379;
                    int l_392 = 0x66B5957EL;
                    int l_401 = 0xCF1FFD86L;
                    int l_456 = (-1L);
                    int l_460 = 0x9FF928E1L;
                    if (((*l_291) = (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(1UL, l_305)) , l_306) != &g_192), 12)) >= (g_157 = func_38((safe_rshift_func_uint16_t_u_s((g_97 ^= (g_69 < (l_295 , (safe_sub_func_uint16_t_u_u((l_313 |= (safe_sub_func_uint8_t_u_u(0x4DL, func_38(g_76)))), (*g_191)))))), l_305))))), g_20))))
                    {
                        return p_66;



                    }
                    else
                    {
                        int ***l_327 = &l_314;
                        int *l_328 = &l_77;
                        int *l_329 = (void*)0;
                        int *l_330 = &l_313;
                        int *l_331 = &g_82;
                        int *l_332 = (void*)0;
                        int *l_333 = &l_77;
                        int *l_334 = &g_82;
                        int *l_335 = &g_82;
                        int *l_336 = &g_82;
                        int *l_337 = &g_76;
                        int *l_338 = &g_82;
                        int *l_339 = &l_77;
                        int *l_340 = &l_77;
                        int *l_341 = &l_115;
                        int *l_342 = (void*)0;
                        int *l_343 = &g_76;
                        int *l_345 = &g_82;
                        int *l_346 = &g_76;
                        int *l_347 = (void*)0;
                        int *l_348 = (void*)0;
                        int *l_349 = (void*)0;
                        int *l_350 = (void*)0;
                        int *l_351 = &g_82;
                        int *l_352 = &g_69;
                        int *l_353 = &l_313;
                        int *l_354 = &g_69;
                        int *l_355 = &l_115;
                        int *l_356 = &l_313;
                        int *l_357 = (void*)0;
                        int *l_358 = &g_76;
                        int *l_359 = (void*)0;
                        int *l_360 = (void*)0;
                        int *l_361 = &g_76;
                        int *l_362 = &l_313;
                        int *l_363 = &g_82;
                        int *l_364 = (void*)0;
                        int *l_365 = &g_76;
                        int *l_366 = &l_313;
                        int *l_367 = (void*)0;
                        int *l_368 = (void*)0;
                        int *l_369 = &g_82;
                        int *l_370 = &g_69;
                        int *l_371 = &l_77;
                        int *l_372 = &g_69;
                        int *l_373 = &l_115;
                        int *l_374 = &g_69;
                        int *l_375 = &l_313;
                        int *l_376 = &l_77;
                        int *l_377 = (void*)0;
                        int *l_378 = &g_82;
                        (**p_65) = ((((safe_lshift_func_uint8_t_u_u(0x0CL, 1)) || (((((*l_327) = ((safe_add_func_uint32_t_u_u(((**l_223) < (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((**l_314) , ((*l_68) <= (((safe_mod_func_uint16_t_u_u(0UL, 0x7ACDL)) | 0x055BL) | g_176))), ((void*)0 == l_245))) , 0x0B4DL), 2))), 0x1BAC026DL)) , (void*)0)) == (void*)0) < 1L) ^ g_163)) , 0x3248L) , 0L);

                        ;
                        --g_379;
                    }

                    ;
                    if ((**l_223))
                        continue;
                    if ((((*l_382)--) , (**p_65)))
                    {
                        (*l_315) = (*g_62);
                    }
                    else
                    {
                        char l_385 = 0x91L;
                        int *l_386 = (void*)0;
                        int *l_387 = (void*)0;
                        int *l_388 = &l_313;
                        int *l_389 = &g_82;
                        int *l_390 = &g_82;
                        int *l_391 = &l_77;
                        int *l_393 = &l_392;
                        int *l_394 = &g_76;
                        int *l_395 = (void*)0;
                        int *l_396 = &g_82;
                        int *l_397 = &l_77;
                        int *l_398 = &g_69;
                        int *l_399 = &l_313;
                        int *l_400 = &g_82;
                        int *l_402 = &g_69;
                        int *l_403 = (void*)0;
                        int *l_404 = &l_401;
                        int *l_405 = &l_392;
                        int *l_406 = &l_401;
                        int *l_407 = (void*)0;
                        int *l_408 = &l_115;
                        int *l_409 = &l_115;
                        int *l_410 = (void*)0;
                        int *l_411 = &g_82;
                        int *l_412 = &l_401;
                        int *l_413 = (void*)0;
                        int *l_414 = &l_401;
                        int *l_415 = &l_313;
                        int *l_416 = &l_313;
                        int *l_417 = &g_82;
                        int *l_418 = &l_115;
                        int *l_419 = &g_82;
                        int *l_420 = &g_76;
                        int *l_421 = &l_401;
                        int *l_422 = &g_76;
                        int *l_423 = &g_76;
                        int *l_424 = &l_392;
                        int *l_425 = (void*)0;
                        int *l_426 = &l_77;
                        int *l_427 = &l_115;
                        int *l_428 = &g_82;
                        int *l_429 = (void*)0;
                        int *l_430 = (void*)0;
                        int *l_431 = &l_401;
                        int *l_432 = &l_313;
                        int *l_434 = (void*)0;
                        int *l_435 = (void*)0;
                        int *l_436 = &l_433;
                        int *l_437 = (void*)0;
                        int *l_438 = &g_76;
                        int *l_439 = (void*)0;
                        int *l_440 = &l_392;
                        int *l_441 = &g_82;
                        int *l_442 = &g_76;
                        int *l_443 = (void*)0;
                        int *l_444 = &l_77;
                        int *l_445 = (void*)0;
                        int *l_446 = &l_115;
                        int *l_447 = &l_115;
                        int *l_448 = &l_313;
                        int *l_449 = &g_69;
                        int *l_450 = &l_313;
                        int *l_451 = &g_76;
                        int *l_452 = &l_77;
                        int l_453 = 1L;
                        int *l_454 = &l_453;
                        int *l_455 = &l_453;
                        int *l_457 = &g_76;
                        int *l_458 = &l_453;
                        int *l_459 = &l_433;
                        int *l_461 = &l_456;
                        int *l_462 = &l_392;
                        int *l_463 = &l_456;
                        int *l_464 = &l_115;
                        int *l_465 = &l_77;
                        int *l_466 = &g_69;
                        int *l_467 = &g_82;
                        int *l_468 = &g_69;
                        int *l_469 = &l_453;
                        int *l_477 = &l_433;
                        ++g_470;
                        if ((*l_68))
                            continue;
                        --g_478;
                        (*l_459) ^= (**p_65);
                    }
                }
                for (g_379 = 0; (g_379 == 59); g_379++)
                {
                    unsigned short l_491 = 0xE670L;
                    unsigned *l_493 = &g_219;
                    int *l_495 = (void*)0;
                    int *l_496 = &l_77;
                    short ** const l_500 = (void*)0;
                    int l_517 = 9L;
                    char l_519 = 0x38L;
                    int l_524 = 0xC93F125DL;
                    int l_531 = 1L;
                    int l_554 = (-1L);
                    unsigned l_588 = 0xD97BF032L;
                    (*l_496) |= (safe_rshift_func_int8_t_s_s((*l_68), (((safe_mod_func_uint16_t_u_u(((~((**l_316) >= (((((safe_lshift_func_int16_t_s_u((*l_291), ((safe_mul_func_int16_t_s_s(((((*l_493) = (l_491 > ((&g_470 != ((&l_291 == p_65) , &g_140)) >= (safe_unary_minus_func_uint32_t_u(g_176))))) , (*l_291)) , (*g_191)), 0xC722L)) && l_494))) & 0x411622C3L) , l_313) >= (**l_316)) != (*g_191)))) >= 0x7EL), (**l_223))) <= 65531UL) , (**l_316))));
                    for (l_128 = (-7); (l_128 < 36); l_128 = safe_add_func_uint16_t_u_u(l_128, 1))
                    {
                        int **l_499 = (void*)0;
                        (**g_62) = (-9L);
                        return l_499;



                    }
                    (*g_63) = (((l_500 != (void*)0) == g_478) == g_192);
                    if ((**g_62))
                    {
                        int *l_501 = (void*)0;
                        int *l_502 = (void*)0;
                        int *l_503 = &l_77;
                        int *l_504 = &g_76;
                        int *l_505 = &l_115;
                        int *l_506 = &g_76;
                        int *l_507 = &g_82;
                        int *l_508 = (void*)0;
                        int *l_509 = &g_76;
                        int *l_510 = &g_82;
                        int *l_511 = &l_313;
                        int *l_512 = &g_69;
                        int *l_513 = (void*)0;
                        int *l_514 = (void*)0;
                        int *l_515 = &l_313;
                        int *l_516 = (void*)0;
                        int *l_518 = &g_69;
                        int *l_520 = &l_517;
                        int *l_521 = &l_115;
                        int *l_522 = (void*)0;
                        int *l_523 = &l_433;
                        int *l_525 = &l_524;
                        int *l_526 = &l_524;
                        int *l_527 = (void*)0;
                        int *l_528 = (void*)0;
                        int *l_529 = &g_69;
                        int *l_530 = &l_517;
                        int *l_532 = (void*)0;
                        int *l_533 = &l_474;
                        int *l_534 = &g_82;
                        int *l_535 = &g_76;
                        int *l_536 = &l_524;
                        int *l_537 = &l_524;
                        int *l_538 = &l_474;
                        int *l_539 = &l_476;
                        int *l_540 = &l_524;
                        int *l_541 = &l_531;
                        int *l_542 = (void*)0;
                        int *l_543 = &l_524;
                        int *l_544 = &g_82;
                        int *l_545 = &l_313;
                        int *l_546 = &l_524;
                        int *l_547 = &g_76;
                        int *l_548 = &l_474;
                        int *l_549 = (void*)0;
                        int *l_550 = &l_517;
                        int *l_551 = &g_76;
                        int *l_553 = &g_473;
                        int *l_555 = (void*)0;
                        int *l_556 = &l_552;
                        int *l_557 = (void*)0;
                        int *l_559 = &l_433;
                        int *l_560 = &l_115;
                        int *l_561 = &l_433;
                        int l_562 = 0x8A001155L;
                        int *l_563 = &g_473;
                        int *l_564 = &l_433;
                        int *l_565 = (void*)0;
                        int *l_566 = (void*)0;
                        int *l_567 = &l_313;
                        int *l_568 = &g_82;
                        int *l_570 = &l_517;
                        int *l_571 = (void*)0;
                        int *l_572 = &l_433;
                        int *l_574 = &l_313;
                        int *l_575 = &l_562;
                        int *l_576 = &l_569;
                        int *l_577 = &l_115;
                        int *l_578 = &l_562;
                        int *l_579 = &l_77;
                        int *l_581 = &l_77;
                        int *l_582 = &l_524;
                        int *l_583 = &l_313;
                        int *l_584 = &l_517;
                        (*g_63) = ((g_4 == (g_4 != func_38(l_313))) && g_473);
                        ++l_588;
                    }
                    else
                    {
                        int l_595 = 0xC86451FEL;
                        char *l_598 = &l_519;
                        (*l_68) = ((((*l_496) , ((-8L) ^ (((*l_496) = (safe_rshift_func_uint8_t_u_u(((&g_470 == (g_594 = l_593)) != 0x2B4AL), g_125))) , func_38(((((*g_191) = ((((((*g_191) ^ (l_295 , g_69)) ^ 0x161AC216L) || l_595) , l_295) , l_494)) > 65535UL) , 0xE6L))))) | (**p_65)) | 0xAC68L);

                        ;
                        (*p_65) = &l_115;
                        if ((*l_291))
                            break;
                        (*l_68) &= ((**g_62) = func_38((safe_sub_func_uint8_t_u_u((**l_316), ((*l_598) &= l_595)))));
                    }
                }
            }
            else
            {
                int *l_599 = (void*)0;
                int *l_600 = &g_69;
                int *l_601 = (void*)0;
                int *l_602 = &l_476;
                int *l_603 = &g_82;
                int *l_604 = &l_115;
                int *l_605 = &l_587;
                int *l_606 = &l_77;
                int *l_607 = &g_473;
                int *l_608 = &g_76;
                int *l_609 = &g_473;
                int *l_613 = &l_313;
                int *l_614 = (void*)0;
                int *l_615 = &l_569;
                int *l_616 = (void*)0;
                int *l_617 = &l_433;
                int *l_618 = &l_115;
                int *l_619 = &g_82;
                int *l_620 = &l_587;
                int *l_621 = &l_569;
                int *l_622 = &l_115;
                int *l_623 = &l_433;
                int *l_624 = &l_558;
                int *l_625 = &g_76;
                int *l_626 = &l_569;
                int *l_627 = &l_115;
                int *l_628 = &g_69;
                int *l_629 = &l_115;
                int *l_630 = &l_569;
                int *l_631 = &l_587;
                int *l_632 = &l_558;
                int *l_633 = &l_433;
                int *l_634 = &l_587;
                int *l_636 = (void*)0;
                int *l_637 = (void*)0;
                int *l_638 = &l_569;
                int *l_639 = &g_76;
                int *l_640 = &l_433;
                int *l_641 = (void*)0;
                int *l_642 = &g_473;
                int *l_643 = (void*)0;
                int *l_644 = &l_115;
                int *l_645 = &g_76;
                int *l_646 = &l_433;
                int *l_647 = &l_433;
                int l_648 = 1L;
                int *l_649 = &g_76;
                int *l_651 = &l_648;
                int *l_652 = &l_313;
                int *l_653 = (void*)0;
                int *l_654 = &l_433;
                int *l_655 = &l_558;
                int *l_656 = &l_635;
                int *l_657 = &l_77;
                int *l_658 = &l_558;
                int *l_659 = (void*)0;
                l_610++;
                g_660++;
            }


            (*p_65) = (*p_65);
            return &g_63;



        }
        else
        {
            char l_664 = 0L;
            int **l_666 = &l_291;
            l_665 ^= l_664;
            (*l_666) = ((*g_62) = (*p_65));


            (*l_68) = (safe_mul_func_int16_t_s_s((((*g_191) | ((g_669 = l_294) == &g_157)) && g_344), (*l_68)));

            ;
        }


        ;
        (*l_68) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((l_674 , ((*l_68) | (safe_mod_func_uint32_t_u_u(0xD8483F44L, (((*l_68) >= (safe_mod_func_int16_t_s_s(func_38(((safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((!(&l_74 == l_687)) , (safe_sub_func_uint8_t_u_u(((*l_696) |= ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_694, ((l_128 <= 9L) == 0UL))) && (*l_68)), (*l_68))) , 0xFBL)), 0xECL))), (*g_191))), g_379)) > (*l_68)) & (-4L)), (*l_68))) != 0x57L) , (*l_68)), (*l_68))) , (*l_68))), 0x95FFL))) , l_697))))), g_344)), (*l_68)));
    }
    else
    {
        int *l_698 = &l_115;
        int *l_699 = &l_569;
        int *l_700 = &l_558;
        int *l_701 = (void*)0;
        int *l_702 = (void*)0;
        int *l_703 = &l_569;
        int *l_704 = (void*)0;
        int *l_705 = (void*)0;
        int *l_706 = (void*)0;
        int *l_707 = (void*)0;
        int *l_708 = &g_82;
        int *l_709 = &g_76;
        int *l_710 = &l_476;
        int *l_711 = &g_76;
        int *l_712 = (void*)0;
        int *l_713 = &l_569;
        int *l_714 = &l_558;
        int *l_715 = &g_69;
        int *l_716 = &g_82;
        int *l_717 = &l_587;
        int *l_718 = &l_558;
        int *l_719 = &l_587;
        int l_720 = (-4L);
        int *l_721 = &g_76;
        int *l_722 = &g_69;
        int *l_723 = (void*)0;
        int *l_724 = &g_76;
        int *l_725 = &l_476;
        int *l_726 = &l_476;
        int *l_727 = &g_82;
        int *l_728 = &g_69;
        int *l_729 = &l_720;
        int *l_730 = &l_115;
        int *l_731 = (void*)0;
        int l_732 = 0L;
        int l_733 = 0xAD27171BL;
        unsigned short l_734 = 1UL;
        const short *l_739 = (void*)0;
        const short **l_738 = &l_739;
        const short ***l_737 = &l_738;
        unsigned l_744 = 0UL;
        unsigned l_758 = 0x361EA858L;
        unsigned l_938 = 0xE8001C53L;
        unsigned char l_956 = 9UL;
        char *l_970 = (void*)0;
        short *l_975 = (void*)0;
        int ***l_1047 = &g_62;
        int **l_1172 = &l_709;
        int l_1269 = 5L;
        const short ***l_1278 = &l_1276;
        unsigned short *l_1280 = &g_267;
        int l_1281 = (-1L);
lbl_1183:
        --l_734;
        if (func_38((((*l_68) & (((*l_737) = (void*)0) == &g_191)) , func_38((*l_708)))))
        {
            unsigned char *l_754 = &g_470;
            int l_755 = 0x08CFCD1AL;
            unsigned short *l_756 = &g_267;
            unsigned *l_757 = &g_163;
            int * const l_950 = &g_82;
            char l_963 = 0xDEL;
            (*l_698) ^= (func_38(((safe_sub_func_int16_t_s_s(((*g_191) = (((((safe_lshift_func_uint8_t_u_u((l_744 = ((*l_68) = 0x54L)), 5)) , ((*l_757) ^= (!(safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((*g_62) == &l_733), (!(safe_sub_func_int32_t_s_s((**p_65), ((safe_unary_minus_func_uint8_t_u(func_38((!((safe_mul_func_int8_t_s_s((((*l_754) = (*l_68)) & l_755), ((((func_38((0xD8FA08B5L < ((g_4 , (&g_63 == p_66)) < l_755))) , &g_284) == l_756) <= g_82) ^ 0x74C1L))) == (*l_68)))))) != 0x68F0L)))))), 11))))) || 0UL) > g_473) <= (*g_191))), (*l_716))) & l_758)) , (-10L));
            for (g_470 = 0; (g_470 != 10); ++g_470)
            {
                unsigned l_761 = 0xCF5B08C5L;
                int l_793 = 0xEF6AE49DL;
                int l_881 = 0xD1CCF461L;
                int l_895 = 7L;
                int l_920 = 7L;
                unsigned l_959 = 0UL;
                if (l_761)
                    break;
                (*p_65) = (*g_62);
            }
        }
        else
        {
            short l_993 = 0x05D7L;
            int l_997 = 0L;
            int l_998 = 0x961AD5E7L;
            int l_1014 = 0xD775665AL;
            int l_1032 = 0xD703B77AL;
            int l_1099 = 0xCB2A0AFBL;
            unsigned char l_1262 = 3UL;
            if ((safe_add_func_uint16_t_u_u(0x7DC3L, (+(*l_68)))))
            {
                short l_991 = 3L;
                int l_992 = 1L;
                char **l_1046 = &g_669;
                int l_1143 = 0xAB6B8E09L;
                int l_1255 = 0x6EBA1704L;
                for (g_922 = (-22); (g_922 < 4); g_922++)
                {
                    unsigned short l_994 = 0x7A02L;
                    int *l_999 = &l_720;
                    int *l_1000 = &g_889;
                    int *l_1001 = (void*)0;
                    int *l_1002 = &l_587;
                    int *l_1003 = (void*)0;
                    int *l_1004 = &g_76;
                    int *l_1005 = &g_82;
                    int *l_1006 = (void*)0;
                    int *l_1007 = (void*)0;
                    int *l_1008 = &g_76;
                    int *l_1009 = (void*)0;
                    int *l_1010 = (void*)0;
                    int *l_1011 = &g_69;
                    int *l_1012 = &l_569;
                    int *l_1013 = &l_992;
                    int *l_1015 = &l_569;
                    int *l_1016 = &g_69;
                    int *l_1017 = &l_998;
                    int l_1018 = 0x6ED0D1A3L;
                    int *l_1019 = &l_732;
                    int *l_1020 = &l_1014;
                    int *l_1021 = &l_558;
                    int *l_1022 = &l_587;
                    int *l_1023 = (void*)0;
                    int *l_1024 = &l_992;
                    int *l_1025 = &l_476;
                    int *l_1026 = &l_1018;
                    int *l_1027 = &l_476;
                    int *l_1028 = &l_587;
                    int *l_1029 = (void*)0;
                    int *l_1030 = (void*)0;
                    int *l_1031 = &l_476;
                    int *l_1033 = &l_1014;
                    int *l_1034 = &g_69;
                    int *l_1035 = &l_998;
                    int *l_1036 = &l_720;
                    int *l_1037 = &g_76;
                    int *l_1038 = &l_997;
                    int *l_1039 = &l_558;
                    int *l_1040 = &g_82;
                    int *l_1041 = &g_82;
                    int *l_1042 = &l_992;
                    for (g_930 = 0; (g_930 > 11); g_930 = safe_add_func_uint32_t_u_u(g_930, 4))
                    {
                        return &g_63;



                    }
                    l_994++;
                    g_1043++;
                    if ((*l_1034))
                        continue;
                }
                if ((((((g_864 = (((((*g_191) < (g_470 || ((&l_580 != ((*l_1046) = &l_580)) , (*g_669)))) , (void*)0) == l_1047) | (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((**g_62), (((*l_716) = ((*g_191) || g_1043)) < (**p_65)))) , l_997), 0xBBA7L)), (*g_191))))) , g_864) & l_992) , 0x7D0F3674L) , (**p_65)))
                {
                    int l_1111 = (-1L);
                    int l_1119 = 0x9E42BA7CL;
                    int l_1134 = 1L;
                    if ((g_864 != (safe_rshift_func_int16_t_s_u(g_1056, 3))))
                    {
                        int *l_1057 = (void*)0;
                        int *l_1058 = &g_922;
                        int *l_1059 = &l_997;
                        int *l_1060 = &l_569;
                        int *l_1061 = &l_998;
                        int *l_1062 = (void*)0;
                        int *l_1063 = &l_732;
                        int *l_1064 = &l_732;
                        int *l_1065 = &l_733;
                        int *l_1066 = &g_82;
                        int *l_1067 = &l_476;
                        int *l_1068 = &l_992;
                        int *l_1069 = &l_558;
                        int *l_1070 = &g_922;
                        int *l_1071 = &g_69;
                        int *l_1072 = &g_1056;
                        int *l_1073 = &g_473;
                        int *l_1074 = (void*)0;
                        int *l_1075 = &l_732;
                        int *l_1076 = &g_889;
                        int *l_1077 = &g_889;
                        int *l_1078 = &l_476;
                        int *l_1079 = &l_569;
                        int *l_1080 = &l_997;
                        int *l_1081 = &g_76;
                        int *l_1082 = &l_992;
                        int *l_1083 = &l_733;
                        int *l_1084 = &l_476;
                        int *l_1085 = (void*)0;
                        int *l_1086 = &g_1056;
                        int *l_1087 = &l_1032;
                        int *l_1088 = &l_733;
                        int *l_1089 = (void*)0;
                        int *l_1090 = (void*)0;
                        int *l_1091 = (void*)0;
                        int *l_1092 = &l_733;
                        int *l_1093 = (void*)0;
                        int *l_1094 = &g_82;
                        int *l_1095 = (void*)0;
                        int *l_1096 = &l_569;
                        int *l_1097 = (void*)0;
                        int *l_1098 = &l_720;
                        int *l_1100 = &g_473;
                        int *l_1101 = &g_889;
                        int *l_1102 = (void*)0;
                        int *l_1103 = &g_76;
                        int *l_1104 = &l_476;
                        int *l_1105 = &l_992;
                        int *l_1106 = &g_889;
                        int *l_1107 = &l_476;
                        int *l_1108 = &l_587;
                        int *l_1109 = &g_69;
                        int *l_1110 = &l_115;
                        int *l_1112 = &g_82;
                        int *l_1113 = (void*)0;
                        int *l_1114 = &g_889;
                        int *l_1115 = &g_1056;
                        int *l_1116 = &l_992;
                        int *l_1117 = &l_115;
                        int *l_1118 = (void*)0;
                        int *l_1120 = &l_476;
                        int *l_1121 = (void*)0;
                        int *l_1122 = &l_569;
                        int *l_1123 = &l_115;
                        int *l_1124 = &l_998;
                        int *l_1125 = &l_569;
                        int *l_1126 = &l_1014;
                        int *l_1127 = &l_1111;
                        int *l_1128 = &l_587;
                        int *l_1129 = &l_1119;
                        int *l_1130 = &l_569;
                        int *l_1131 = &l_998;
                        int *l_1132 = &l_720;
                        int *l_1133 = &l_732;
                        int *l_1136 = &l_732;
                        int *l_1137 = &l_733;
                        int *l_1138 = (void*)0;
                        int *l_1139 = &l_732;
                        int *l_1140 = &l_733;
                        int *l_1141 = (void*)0;
                        int *l_1142 = (void*)0;
                        int *l_1144 = &l_587;
                        int *l_1145 = &g_82;
                        int *l_1146 = (void*)0;
                        int *l_1147 = &l_1032;
                        int *l_1148 = (void*)0;
                        int *l_1149 = &l_992;
                        int *l_1150 = (void*)0;
                        int *l_1151 = (void*)0;
                        int *l_1152 = &l_569;
                        int *l_1153 = &l_1014;
                        int *l_1154 = &g_76;
                        int *l_1155 = &l_1032;
                        int *l_1156 = (void*)0;
                        int *l_1157 = (void*)0;
                        int *l_1158 = &l_997;
                        int *l_1159 = &l_732;
                        int *l_1160 = &g_473;
                        int *l_1161 = &l_1032;
                        int *l_1162 = (void*)0;
                        int *l_1163 = &g_889;
                        int *l_1165 = (void*)0;
                        int *l_1166 = &l_998;
                        int *l_1167 = &l_732;
                        int *l_1168 = &l_997;
                        ++g_1169;
                        return p_66;



                    }
                    else
                    {
                        l_1173++;
                        (*p_65) = (*g_62);
                    }
                    (*g_62) = (*p_65);
                }
                else
                {
                    unsigned short *l_1182 = &g_97;
                    int *l_1185 = &l_997;
                    int *l_1186 = &g_82;
                    int *l_1187 = &l_569;
                    int *l_1188 = &l_1032;
                    int *l_1189 = &g_922;
                    int *l_1190 = &g_76;
                    int *l_1191 = &l_569;
                    int *l_1192 = &l_1032;
                    int *l_1193 = &l_1143;
                    int *l_1194 = &l_558;
                    int *l_1195 = (void*)0;
                    int *l_1196 = &l_997;
                    int *l_1197 = &l_476;
                    int *l_1198 = (void*)0;
                    int *l_1199 = &l_115;
                    int *l_1200 = &g_69;
                    int *l_1201 = (void*)0;
                    int *l_1202 = &g_82;
                    int *l_1203 = &l_1143;
                    int *l_1204 = &l_1143;
                    int *l_1205 = &l_1032;
                    int *l_1206 = &g_473;
                    int *l_1207 = &g_82;
                    int *l_1208 = &g_889;
                    int *l_1209 = &l_1143;
                    int *l_1210 = &l_720;
                    int *l_1211 = &g_82;
                    int *l_1212 = &l_115;
                    int *l_1213 = &l_997;
                    int *l_1214 = &l_115;
                    int *l_1215 = &l_569;
                    int *l_1216 = &l_1032;
                    int *l_1217 = (void*)0;
                    int *l_1218 = &l_476;
                    int *l_1219 = (void*)0;
                    int *l_1220 = &g_82;
                    int *l_1221 = &l_569;
                    int *l_1222 = &g_82;
                    int *l_1223 = (void*)0;
                    int *l_1224 = &l_733;
                    int *l_1225 = (void*)0;
                    int *l_1226 = &l_997;
                    int *l_1227 = (void*)0;
                    int *l_1228 = &g_82;
                    int *l_1229 = &l_732;
                    int *l_1230 = &l_476;
                    int *l_1231 = &l_476;
                    int *l_1232 = &g_76;
                    int *l_1233 = &l_1014;
                    int *l_1234 = &g_922;
                    int *l_1235 = &l_720;
                    int *l_1236 = &l_1143;
                    int *l_1237 = &l_732;
                    int *l_1238 = &g_1164;
                    int *l_1239 = &l_992;
                    int *l_1240 = (void*)0;
                    int *l_1241 = (void*)0;
                    int *l_1242 = &l_1143;
                    int *l_1243 = &l_115;
                    int *l_1244 = (void*)0;
                    int *l_1245 = &g_922;
                    int *l_1246 = &g_1056;
                    int *l_1247 = &l_1032;
                    int *l_1249 = (void*)0;
                    int *l_1250 = &l_1014;
                    int *l_1251 = &g_473;
                    int *l_1252 = &l_720;
                    int *l_1253 = &g_69;
                    int *l_1254 = &l_997;
                    int *l_1256 = &l_558;
                    int *l_1257 = &g_82;
                    int *l_1258 = &l_1143;
                    int *l_1259 = &l_1014;
                    int *l_1260 = &g_82;
                    int *l_1261 = &l_558;
                    (*l_713) = (l_1099 ^ (safe_mul_func_uint16_t_u_u(65535UL, (((*l_1182) = (((((!l_1143) & l_1143) < (((safe_sub_func_uint8_t_u_u((*l_700), (((*l_68) , l_1046) != &g_669))) , (safe_mod_func_uint16_t_u_u((0x3DL == (-6L)), l_1014))) > l_1143)) , l_1143) >= (-5L))) , 0x4896L))));
                    if (g_20)
                        goto lbl_1183;
                    ++l_1262;
                }
                (*l_730) ^= ((0x183CL < (safe_rshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((*l_68), l_1143)) , func_38(((l_993 <= func_38(((l_1269 == l_998) && (safe_rshift_func_int16_t_s_u(((((*g_191) = (*g_191)) , (*l_714)) <= (*l_711)), 0))))) || (*l_68)))) & (*l_68)), 5))) <= 0x7EL);
            }
            else
            {
                (*g_62) = (*g_62);
            }
        }

        ;
        (*l_725) &= func_38((safe_mul_func_int8_t_s_s(((**g_62) , (((*l_1280) = ((((safe_add_func_int8_t_s_s((((*g_63) == (&g_1248 != &l_1184)) , (((*l_737) == ((*l_1278) = l_1276)) != ((!g_853) | ((*g_191) = (*l_716))))), (((func_38(((((*l_713) != (**p_65)) ^ (*l_68)) >= l_1279)) & (**g_62)) ^ g_908) ^ 0xCDC10AB8L))) , (*l_728)) & 0x3516L) >= (*l_68))) > (*l_724))), 0x0AL)));
        l_1282++;
    }



    return &g_63;



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    transparent_crc(g_1164, "g_1164", print_hash_value);
    transparent_crc(g_1169, "g_1169", print_hash_value);
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_1983, "g_1983", print_hash_value);
    transparent_crc(g_2143, "g_2143", print_hash_value);
    transparent_crc(g_2219, "g_2219", print_hash_value);
    transparent_crc(g_2261, "g_2261", print_hash_value);
    transparent_crc(g_2272, "g_2272", print_hash_value);
    transparent_crc(g_2273, "g_2273", print_hash_value);
    transparent_crc(g_2307, "g_2307", print_hash_value);
    transparent_crc(g_2418, "g_2418", print_hash_value);
    transparent_crc(g_2579, "g_2579", print_hash_value);
    transparent_crc(g_2586, "g_2586", print_hash_value);
    transparent_crc(g_2621, "g_2621", print_hash_value);
    transparent_crc(g_2629, "g_2629", print_hash_value);
    transparent_crc(g_2673, "g_2673", print_hash_value);
    transparent_crc(g_2824, "g_2824", print_hash_value);
    transparent_crc(g_2927, "g_2927", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
