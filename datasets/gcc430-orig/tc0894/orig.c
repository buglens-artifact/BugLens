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



static short g_7 = 0xAFC3L;
static unsigned short g_15 = 0x2BD4L;
static short g_25 = 1L;
static const unsigned short g_33 = 0x7223L;
static short g_46 = 0x3672L;
static const short *g_45 = &g_46;
static int g_67 = (-8L);
static int *g_66 = &g_67;
static char g_77 = 0x7CL;
static int g_83 = (-7L);
static char g_103 = (-10L);
static unsigned char g_106 = 0xD8L;
static unsigned short g_112 = 5UL;
static unsigned g_116 = 4294967292UL;
static short *g_118 = &g_46;
static int g_149 = 0xCF78B729L;
static unsigned char g_183 = 9UL;
static short **g_238 = &g_118;
static short ***g_237 = &g_238;
static int g_253 = 0xE2193700L;
static int g_346 = 0x46D762BCL;
static unsigned char g_349 = 0xA7L;
static char g_447 = 0x8DL;
static char g_450 = (-1L);
static int g_471 = (-1L);
static short g_478 = 0x8B59L;
static unsigned g_482 = 0x64E26916L;
static int g_537 = 0x98C910E4L;
static int g_603 = 0xC70819A1L;
static int g_606 = 0x27FBF086L;
static unsigned short g_607 = 0UL;
static unsigned short *g_619 = (void*)0;
static unsigned short **g_618 = &g_619;
static int g_657 = (-1L);
static int g_658 = (-1L);
static unsigned char g_663 = 0x74L;
static unsigned **g_674 = (void*)0;
static unsigned g_735 = 0x6A54095CL;
static unsigned short g_763 = 0x2622L;
static unsigned g_918 = 0x5C839E66L;
static unsigned g_937 = 0x32808B4FL;
static int g_976 = 0x687620AFL;
static short * const *g_999 = (void*)0;
static short * const **g_998 = &g_999;
static unsigned char **g_1041 = (void*)0;
static unsigned short g_1127 = 0x5674L;
static short g_1170 = 0L;
static unsigned char g_1216 = 0x50L;
static const unsigned g_1346 = 0xB7AC92C4L;
static char *g_1352 = &g_103;
static char **g_1351 = &g_1352;
static unsigned short ***g_1465 = &g_618;
static unsigned short ****g_1464 = &g_1465;
static unsigned g_1651 = 0UL;
static const int *g_1670 = &g_83;
static unsigned g_1723 = 0xF02FE1D9L;
static const unsigned char *g_1813 = &g_183;
static const unsigned char **g_1812 = &g_1813;
static const unsigned char ***g_1811 = &g_1812;
static unsigned ***g_1823 = (void*)0;
static unsigned short g_1876 = 1UL;
static const unsigned g_1925 = 3UL;
static int g_1926 = 0x8E561E09L;
static unsigned char g_1934 = 0xC3L;
static unsigned * const g_1955 = (void*)0;
static unsigned * const *g_1954 = &g_1955;
static unsigned short g_1960 = 0UL;
static const int g_1988 = 0xCBFF6764L;
static char g_2030 = 0xA3L;
static unsigned short g_2087 = 1UL;
static char **g_2137 = &g_1352;
static char ***g_2136 = &g_2137;
static unsigned g_2233 = 4294967295UL;
static unsigned g_2284 = 0xB3D2DCB9L;
static int g_2381 = 0L;
static char g_2397 = (-8L);
static unsigned char g_2402 = 0x88L;
static unsigned g_2471 = 0x0E21D400L;
static unsigned char g_2524 = 0x5CL;
static int g_2648 = 0x6FAE43BBL;
static short g_2658 = 0x0B58L;
static unsigned short g_2665 = 0x01CCL;



static int func_1(void);
static short func_8(const short * p_9, int p_10, short * p_11, unsigned short p_12, short * p_13);
static char func_28(const char p_29, unsigned short p_30, const int p_31, short p_32);
static int func_34(unsigned char p_35, short * p_36, unsigned char p_37);
static short * func_38(const short * p_39, char p_40, short * const p_41, unsigned p_42);
static const int * const func_47(int * const p_48, int * const p_49);
static int * const func_50(int * p_51);
static int * func_52(unsigned p_53, int * p_54, unsigned char p_55);
static unsigned func_56(short * const p_57);
static unsigned func_59(unsigned p_60, unsigned p_61, int p_62, short * p_63, unsigned short * p_64);
static int func_1(void)
{
    short l_2144 = 0x669EL;
    int l_2157 = 0x81A9166AL;
    unsigned * const l_2169 = (void*)0;
    unsigned * const *l_2168 = &l_2169;
    unsigned * const * const *l_2167 = &l_2168;
    char l_2249 = 7L;
    int l_2282 = 1L;
    unsigned char l_2304 = 0x5FL;
    const char **l_2317 = (void*)0;
    char l_2332 = 0x26L;
    int l_2340 = 0xA68EC652L;
    int l_2475 = 3L;
    int l_2478 = 5L;
    int *l_2582 = &g_657;
    int *l_2583 = &g_657;
    int *l_2584 = &g_2381;
    int *l_2585 = (void*)0;
    int *l_2586 = &l_2475;
    int *l_2587 = &g_657;
    int *l_2588 = &l_2475;
    int *l_2589 = &g_2381;
    int *l_2590 = &l_2478;
    int *l_2591 = &l_2282;
    int *l_2592 = &g_537;
    int *l_2593 = &l_2478;
    int *l_2594 = &l_2478;
    int *l_2595 = &g_2381;
    int *l_2596 = (void*)0;
    int *l_2597 = &g_537;
    int *l_2598 = &g_2381;
    int *l_2599 = &l_2157;
    int *l_2600 = (void*)0;
    int *l_2601 = &g_67;
    int *l_2602 = &l_2475;
    int *l_2603 = &l_2282;
    int *l_2604 = &l_2282;
    int *l_2605 = &l_2478;
    int *l_2606 = &l_2282;
    int *l_2607 = (void*)0;
    int *l_2608 = &l_2282;
    int *l_2609 = &g_67;
    int *l_2610 = (void*)0;
    int *l_2611 = &g_657;
    int *l_2612 = &g_149;
    int *l_2613 = &l_2282;
    int *l_2614 = &l_2475;
    int *l_2615 = &g_67;
    int *l_2616 = &l_2282;
    int *l_2617 = &g_2381;
    int *l_2618 = &l_2282;
    int *l_2619 = (void*)0;
    int *l_2620 = &l_2478;
    int *l_2621 = &l_2475;
    int *l_2622 = &g_67;
    int *l_2623 = (void*)0;
    int *l_2624 = &l_2478;
    int *l_2625 = &g_67;
    int *l_2626 = &l_2157;
    int *l_2627 = &l_2282;
    int *l_2628 = &g_149;
    int *l_2629 = (void*)0;
    int *l_2630 = (void*)0;
    int *l_2631 = &g_2381;
    int *l_2632 = &g_2381;
    int *l_2633 = &g_657;
    int *l_2634 = &g_83;
    int *l_2635 = &l_2282;
    int *l_2636 = &l_2478;
    int *l_2637 = &g_2381;
    int *l_2638 = &g_537;
    int l_2639 = (-9L);
    int *l_2640 = &l_2639;
    int *l_2641 = &l_2282;
    int *l_2642 = &g_657;
    int *l_2643 = (void*)0;
    int *l_2644 = &g_67;
    int *l_2645 = &g_657;
    int *l_2646 = &g_67;
    int *l_2647 = &l_2475;
    int *l_2649 = (void*)0;
    int *l_2650 = &l_2475;
    int *l_2651 = (void*)0;
    int *l_2652 = &l_2282;
    int *l_2653 = (void*)0;
    int *l_2654 = &g_2381;
    int *l_2655 = &g_67;
    int *l_2656 = (void*)0;
    int *l_2657 = (void*)0;
    int *l_2659 = &l_2157;
    int *l_2660 = &g_537;
    int *l_2661 = (void*)0;
    int *l_2662 = (void*)0;
    int *l_2663 = (void*)0;
    int l_2664 = 1L;
    if ((safe_rshift_func_int8_t_s_u((-7L), 0)))
    {
        short *l_6 = &g_7;
        unsigned short *l_14 = &g_15;
        int l_20 = 3L;
        short *l_23 = (void*)0;
        short *l_24 = &g_25;
        unsigned *l_2145 = (void*)0;
        unsigned *l_2146 = &g_116;
        l_2157 = ((((*l_6) = (safe_rshift_func_uint16_t_u_u(0xE52DL, 12))) & (func_8((((--(*l_14)) == (safe_mod_func_int32_t_s_s(l_20, ((*l_2146) = (safe_rshift_func_uint8_t_u_u((l_20 != ((((*l_24) = l_20) ^ ((((safe_sub_func_int8_t_s_s(func_28(g_33, g_33, func_34((g_33 , l_20), func_38(((safe_lshift_func_int8_t_s_u((-1L), l_20)) , g_45), g_46, &g_46, g_46), g_471), g_471), 1UL)) | l_2144) >= g_763) != 4294967295UL)) | l_20)), 5)))))) , l_14), l_20, l_23, l_2144, g_619) >= 0x6D13L)) == l_20);


        ;

        return (*g_1670);
    }
    else
    {
        int *l_2158 = (void*)0;
        int **l_2159 = &l_2158;
        unsigned short l_2171 = 0UL;
        int l_2222 = 0x230F97B2L;
        int l_2223 = 0xB8D3DB98L;
        const short l_2243 = 0x2A2FL;
        short * const l_2255 = (void*)0;
        unsigned ****l_2259 = &g_1823;
        short l_2279 = 0xD155L;
        short *l_2283 = &l_2144;
        unsigned char l_2319 = 0x2FL;
        char l_2330 = (-10L);
        char **l_2342 = (void*)0;
        int l_2396 = (-1L);
        (*l_2159) = (*l_2159);
        for (g_471 = 0; (g_471 < (-22)); g_471 = safe_sub_func_uint32_t_u_u(g_471, 4))
        {
            unsigned short **l_2162 = &g_619;
            int l_2165 = 0xA59843A6L;
            unsigned *l_2166 = &g_1651;
            unsigned * const * const **l_2170 = &l_2167;
            int l_2174 = 0x3793855AL;
            short l_2229 = 0x7673L;
            unsigned *l_2238 = &g_2233;
            unsigned **l_2237 = &l_2238;
            unsigned ***l_2236 = &l_2237;
            char l_2256 = 0x60L;
            unsigned char l_2287 = 3UL;
            int *l_2288 = (void*)0;
            int *l_2289 = &g_657;
            int l_2290 = 6L;
            (*g_1465) = l_2162;
        }
        (*g_66) |= 0xC0E49D1DL;
        if ((*g_66))
        {
            int *l_2291 = &l_2157;
            int *l_2292 = &g_67;
            int *l_2293 = &l_2223;
            int *l_2294 = &g_537;
            int *l_2295 = &l_2223;
            int *l_2296 = &g_537;
            int l_2297 = (-9L);
            int *l_2298 = (void*)0;
            int *l_2299 = &l_2222;
            int *l_2300 = (void*)0;
            int *l_2301 = &l_2297;
            int *l_2302 = (void*)0;
            int *l_2303 = (void*)0;
            const short *l_2324 = &g_1170;
            char l_2495 = 1L;
            unsigned char l_2527 = 1UL;
            l_2304++;
            for (g_607 = 9; (g_607 == 38); g_607++)
            {
                int l_2312 = (-3L);
                char **l_2341 = (void*)0;
                short l_2366 = 0x892AL;
                int l_2401 = 0x467E3AF4L;
                int l_2474 = (-3L);
                int l_2476 = 0xFD5862E2L;
                for (g_482 = (-12); (g_482 == 54); g_482 = safe_add_func_int16_t_s_s(g_482, 2))
                {
                    int *l_2311 = &l_2297;
                    (*l_2159) = l_2311;

                    ;
                }
            }

            ;
            g_1670 = &g_2381;

            ;
            (*l_2159) = &g_83;

            ;
        }
        else
        {
            unsigned char l_2545 = 9UL;
            int *l_2548 = &g_2381;
            int *l_2549 = &g_67;
            int *l_2550 = &l_2157;
            int *l_2551 = &g_2381;
            int *l_2552 = &l_2282;
            int *l_2553 = &l_2222;
            int *l_2554 = &l_2478;
            int *l_2555 = &l_2222;
            int l_2556 = 0x2C832A56L;
            int *l_2557 = &l_2157;
            int *l_2558 = &l_2396;
            int *l_2559 = &l_2475;
            int *l_2560 = &g_149;
            int *l_2561 = &l_2222;
            int *l_2562 = &l_2157;
            int *l_2563 = &l_2157;
            int *l_2564 = &l_2223;
            int *l_2565 = &g_537;
            int *l_2566 = &l_2222;
            int *l_2567 = &g_83;
            int *l_2568 = &g_657;
            int *l_2569 = &l_2396;
            int *l_2570 = &l_2396;
            int *l_2571 = &l_2282;
            int *l_2572 = (void*)0;
            int *l_2573 = &l_2222;
            int *l_2574 = &g_2381;
            int *l_2575 = (void*)0;
            int *l_2576 = &g_67;
            int *l_2577 = (void*)0;
            int *l_2578 = &l_2396;
            unsigned l_2579 = 0xD5356D47L;
            for (l_2171 = 0; (l_2171 == 46); ++l_2171)
            {
                int *l_2530 = &l_2396;
                int *l_2531 = &l_2396;
                int *l_2532 = (void*)0;
                int *l_2533 = &g_83;
                int *l_2534 = (void*)0;
                int *l_2535 = &g_83;
                int *l_2536 = &l_2478;
                int *l_2537 = &g_657;
                int *l_2538 = &l_2157;
                int *l_2539 = &l_2475;
                int *l_2540 = &g_2381;
                int *l_2541 = &g_2381;
                int *l_2542 = (void*)0;
                int *l_2543 = &l_2223;
                int *l_2544 = &g_537;
                ++l_2545;
            }
            --l_2579;
        }

        ;
        ;
    }

    ;
    --g_2665;
    return (*g_66);
}







static short func_8(const short * p_9, int p_10, short * p_11, unsigned short p_12, short * p_13)
{
    unsigned short ****l_2154 = (void*)0;
    int l_2155 = 0xE7D7530FL;
    int *l_2156 = &g_149;
    (*l_2156) = (((safe_lshift_func_int8_t_s_s(0x04L, 4)) != (safe_add_func_int32_t_s_s((-1L), (((p_10 != (((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((l_2154 != (void*)0))) , p_10) | ((((l_2155 , ((void*)0 == &p_10)) > (*g_1670)) ^ (-7L)) || 0x44D6L)), l_2155)) ^ l_2155) , (-3L))) != 0x8DC99761L) == 0x67EAL)))) , (*g_1670));
    return (*l_2156);
}







static char func_28(const char p_29, unsigned short p_30, const int p_31, short p_32)
{
    return p_30;
}







static int func_34(unsigned char p_35, short * p_36, unsigned char p_37)
{
    int l_1337 = 0x74621008L;
    short **** const l_1338 = &g_237;
    unsigned *l_1344 = &g_937;
    const unsigned *l_1345 = &g_1346;
    unsigned char *l_1349 = &g_106;
    char **l_1353 = &g_1352;
    unsigned l_1383 = 1UL;
    unsigned *l_1395 = &g_735;
    unsigned **l_1394 = &l_1395;
    unsigned **l_1416 = &l_1344;
    unsigned short ***l_1419 = (void*)0;
    int *l_1432 = &g_67;
    int l_1486 = 0x2466839AL;
    int l_1497 = (-2L);
    int l_1523 = (-5L);
    int l_1533 = 0x781476E5L;
    int l_1535 = 0x31939B89L;
    int l_1682 = 0xFE67925AL;
    int *l_1729 = &l_1533;
    unsigned char ***l_1810 = &g_1041;
    unsigned l_1816 = 0x88DB7CA4L;
    const int l_1931 = 0xE5185CF2L;
    int **l_2143 = &l_1729;
    if ((l_1337 != p_35))
    {
        char *l_1371 = &g_447;
        int l_1376 = 1L;
        unsigned short *l_1384 = &g_112;
        int *l_1387 = &g_657;
        unsigned *l_1389 = &g_116;
        unsigned **l_1388 = &l_1389;
        unsigned ***l_1390 = (void*)0;
        unsigned ***l_1391 = (void*)0;
        unsigned ***l_1392 = &g_674;
        unsigned ***l_1393 = &g_674;
        unsigned ***l_1396 = &l_1394;
        unsigned short ***l_1417 = &g_618;
        int **l_1431 = &l_1387;
        if ((l_1337 &= g_253))
        {
            int *l_1339 = &g_67;
            int **l_1340 = &g_66;
            short ***l_1343 = (void*)0;
            unsigned char *l_1350 = &g_183;
            int *l_1372 = &g_537;
            l_1339 = (void*)0;

            ;
            (*l_1340) = l_1339;

            ;
            for (g_918 = 0; (g_918 >= 57); g_918 = safe_add_func_int8_t_s_s(g_918, 5))
            {
                unsigned l_1359 = 0UL;
                unsigned short *l_1360 = (void*)0;
                int *l_1361 = &g_657;
                int *l_1362 = &g_149;
                (*l_1362) = ((*l_1361) = (l_1343 == (func_56((g_606 , (***l_1338))) , (void*)0)));
            }
            (*l_1372) ^= (((safe_lshift_func_int16_t_s_s((p_37 > ((((l_1350 != ((safe_add_func_int16_t_s_s((p_37 | (func_56(p_36) ^ 0xEA16L)), l_1337)) , l_1371)) , g_83) , (void*)0) != p_36)), l_1337)) , (*g_1352)) | 1UL);
        }
        else
        {
            int *l_1373 = &g_537;
            (*l_1373) = p_37;
        }


        (*l_1387) |= (p_35 || (safe_sub_func_uint32_t_u_u(((l_1337 != ((*l_1349) = l_1376)) >= ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_1337, (safe_add_func_uint8_t_u_u((((l_1383 >= (p_37 | ((*l_1384) = p_35))) || (safe_mod_func_uint16_t_u_u(l_1383, l_1337))) && l_1383), l_1376)))), 6)) != l_1376)), p_37)));
        if (((l_1388 = l_1388) != ((*l_1396) = l_1394)))
        {
            for (g_1127 = 0; (g_1127 > 10); ++g_1127)
            {
                int l_1399 = 1L;
                int *l_1400 = &g_149;
                int *l_1401 = &g_537;
                int *l_1402 = &g_83;
                int *l_1403 = &l_1376;
                int *l_1404 = &g_149;
                int *l_1405 = (void*)0;
                int *l_1406 = &l_1337;
                int *l_1407 = &g_657;
                int *l_1408 = &l_1337;
                int *l_1409 = &g_83;
                int *l_1410 = &g_537;
                int *l_1411 = &g_657;
                int *l_1412 = (void*)0;
                unsigned l_1413 = 4294967295UL;
                l_1413++;
                if (g_658)
                    continue;
            }
        }
        else
        {
            unsigned short ****l_1418 = &l_1417;
            int l_1420 = (-1L);
            l_1416 = (void*)0;

            ;
            l_1420 = ((*l_1387) = p_35);
            for (g_183 = 0; (g_183 < 38); ++g_183)
            {
                return l_1420;
            }
            (*l_1387) ^= ((p_35 ^ 2UL) != p_35);
        }

        ;
        l_1432 = ((*l_1431) = func_52((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((&l_1419 != (g_346 , &l_1417)) , 4294967291UL), p_37)) , p_37), ((~(safe_rshift_func_int16_t_s_u((*p_36), 0))) || (safe_lshift_func_int8_t_s_s(((void*)0 != &g_1041), (*l_1387)))))), &l_1337, (*l_1387)));

        ;
        ;
        ;
    }
    else
    {
        char l_1433 = 0L;
        int *l_1434 = &g_657;
        int *l_1435 = &g_149;
        int l_1436 = 0x90AB741CL;
        int *l_1437 = (void*)0;
        int *l_1438 = &g_67;
        int *l_1439 = (void*)0;
        int *l_1440 = (void*)0;
        int *l_1441 = &l_1337;
        int *l_1442 = &l_1436;
        int *l_1443 = &g_657;
        unsigned short l_1444 = 65535UL;
        l_1444--;
        for (g_607 = 6; (g_607 <= 27); g_607 = safe_add_func_uint16_t_u_u(g_607, 4))
        {
            unsigned short l_1461 = 4UL;
            int l_1468 = (-1L);
            const char l_1469 = 0L;
            (*l_1432) = ((safe_add_func_int32_t_s_s((!(*l_1432)), ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_37, 6)), (((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0x39D3L, (*g_45))), (((safe_add_func_int32_t_s_s((l_1461 = ((*l_1443) = 0xC968731DL)), (((safe_add_func_int16_t_s_s((g_1464 == (p_35 , (void*)0)), (safe_sub_func_int16_t_s_s(((((((*l_1441) = g_658) == 4294967293UL) ^ g_1216) > p_35) <= (*g_1352)), p_37)))) > p_37) | p_35))) & (**g_1351)) >= 0x55E7L))) <= l_1468) == (*l_1432)))) , l_1469))) >= p_37);
            for (l_1383 = (-13); (l_1383 >= 44); l_1383 = safe_add_func_int32_t_s_s(l_1383, 7))
            {
                return p_37;
            }
        }
    }


    ;
    ;
    if ((&p_36 == ((*g_237) = (**l_1338))))
    {
        int **l_1472 = &g_66;
        (*l_1472) = (void*)0;

        ;
    }
    else
    {
        int *l_1473 = &l_1337;
        int *l_1474 = &g_149;
        int *l_1475 = (void*)0;
        int *l_1476 = &g_149;
        int *l_1477 = &g_657;
        int *l_1478 = &g_67;
        int *l_1479 = &g_83;
        int *l_1480 = &g_657;
        int *l_1481 = &g_149;
        int l_1482 = 0x4B1B8587L;
        int *l_1483 = &g_149;
        int *l_1484 = &g_83;
        int *l_1485 = &l_1482;
        int *l_1487 = &g_67;
        int *l_1488 = (void*)0;
        int *l_1489 = &l_1486;
        int *l_1490 = &g_67;
        int *l_1491 = &l_1337;
        int *l_1492 = (void*)0;
        int *l_1493 = (void*)0;
        int *l_1494 = (void*)0;
        int l_1495 = 0x9536D145L;
        int *l_1496 = (void*)0;
        int l_1498 = 0L;
        int *l_1499 = &l_1337;
        int *l_1500 = &l_1495;
        int l_1501 = 0xF73E63F1L;
        int *l_1502 = (void*)0;
        int *l_1503 = &l_1337;
        int *l_1504 = (void*)0;
        int *l_1505 = (void*)0;
        int *l_1506 = &g_657;
        int *l_1507 = &l_1495;
        int *l_1508 = &g_67;
        int *l_1509 = &l_1501;
        int *l_1510 = &g_657;
        int *l_1511 = &l_1495;
        int *l_1512 = &g_657;
        int *l_1513 = (void*)0;
        int l_1514 = 1L;
        int *l_1515 = (void*)0;
        int *l_1516 = &l_1497;
        int l_1517 = 0x8C44075CL;
        char l_1518 = (-1L);
        int *l_1519 = &l_1517;
        int *l_1520 = (void*)0;
        int *l_1521 = &l_1497;
        int *l_1522 = (void*)0;
        int *l_1524 = (void*)0;
        int *l_1525 = &g_83;
        int l_1526 = (-1L);
        int *l_1527 = &g_67;
        int *l_1528 = &g_657;
        int *l_1529 = &l_1337;
        int *l_1530 = &g_83;
        int *l_1531 = (void*)0;
        int *l_1532 = (void*)0;
        int *l_1534 = &l_1526;
        int *l_1536 = &l_1501;
        int *l_1537 = &g_149;
        int *l_1538 = &l_1514;
        int *l_1539 = &l_1517;
        unsigned short l_1540 = 0xDFCBL;
        l_1540--;
        (*l_1519) &= ((*l_1432) = (safe_rshift_func_int8_t_s_s(((((*l_1491) <= (safe_rshift_func_uint8_t_u_u(func_56(p_36), 7))) , ((*g_1352) |= (*l_1477))) >= ((*l_1349) = 3UL)), 5)));
    }


    for (p_37 = 0; (p_37 >= 20); p_37 = safe_add_func_uint16_t_u_u(p_37, 5))
    {
        int *l_1549 = &l_1523;
        int *l_1550 = &g_537;
        int l_1570 = 0L;
        int l_1588 = 6L;
        int l_1612 = 0xB50C0AFBL;
        int l_1633 = (-9L);
        short * const l_1809 = (void*)0;
        const unsigned char ***l_1814 = &g_1812;
        unsigned short l_1829 = 0x05E7L;
        unsigned short ** const l_1898 = &g_619;
        int l_1916 = (-10L);
        int l_1919 = 5L;
        unsigned **l_1953 = &l_1344;
        const int *l_1987 = &g_1988;
        short l_2017 = 1L;
        int l_2093 = 0xC74CD9D8L;
        l_1550 = l_1549;

        ;
        for (g_116 = (-15); (g_116 == 56); ++g_116)
        {
            short *l_1558 = &g_478;
            short **l_1557 = &l_1558;
            int l_1565 = 0x9FEA9B28L;
            int l_1604 = 8L;
            int l_1641 = 1L;
            int * const l_1669 = &l_1497;
            int **l_1726 = &l_1432;
        }
    }
    return p_37;


}







static short * func_38(const short * p_39, char p_40, short * const p_41, unsigned p_42)
{
    short * const l_507 = &g_46;
    int l_538 = 0xC7B8C27CL;
    unsigned char l_1045 = 0xE3L;
    unsigned short * const *l_1046 = &g_619;
    int l_1074 = 0xEA17E637L;
    int l_1089 = 0x3AE1EC52L;
    int l_1093 = 0xB184F2CCL;
    unsigned l_1172 = 0x25046926L;
    short ***l_1197 = &g_238;
    const short **l_1200 = &g_45;
    const short ***l_1199 = &l_1200;
    unsigned l_1284 = 0x477E0818L;
    unsigned char *l_1299 = &g_663;
    unsigned char * const *l_1298 = &l_1299;
    unsigned char * const **l_1297 = &l_1298;
    int l_1309 = (-7L);
    unsigned l_1315 = 0UL;
    int * const l_1320 = &g_67;
    if ((0x58L && g_46))
    {
        short *l_65 = &g_46;
        int *l_536 = &g_537;
        unsigned short **l_1025 = (void*)0;
        int l_1072 = 1L;
        int l_1084 = (-1L);
        unsigned short l_1098 = 65535UL;
        int *l_1178 = &l_1074;
        unsigned short *l_1202 = &g_607;
        int l_1259 = 1L;
        int l_1273 = 0x732DD368L;
        unsigned char **l_1295 = (void*)0;
        if (p_42)
        {
            short *l_58 = &g_46;
            char *l_506 = &g_450;
            const int *l_1022 = &l_538;
            const int **l_1021 = &l_1022;
            unsigned short ***l_1026 = &g_618;
            unsigned short ***l_1027 = &l_1025;
            unsigned char *l_1042 = (void*)0;
            unsigned char *l_1043 = &g_349;
            unsigned *l_1044 = &g_937;
            (*l_1021) = func_47(func_50(func_52(func_56(((((*l_506) &= ((p_41 == l_58) < func_59(p_40, p_40, p_40, l_65, l_58))) , g_67) , l_507)), l_536, l_538)), &l_538);



            ;
            if (((((*l_1027) = ((*l_1026) = l_1025)) == ((*l_536) , l_1046)) == 0L))
            {
                (*l_536) |= g_471;
            }
            else
            {
                return l_58;


            }

            ;
            for (g_657 = (-14); (g_657 == (-5)); g_657++)
            {
                int *l_1049 = &g_67;
                int *l_1050 = &g_537;
                int *l_1051 = &g_67;
                int *l_1052 = (void*)0;
                int *l_1053 = (void*)0;
                int *l_1054 = (void*)0;
                int *l_1055 = &l_538;
                int *l_1056 = &g_537;
                int *l_1057 = &l_538;
                int *l_1058 = &g_83;
                int *l_1059 = &g_149;
                int *l_1060 = &g_83;
                int *l_1061 = &l_538;
                int *l_1062 = (void*)0;
                int *l_1063 = &g_149;
                int *l_1064 = &g_537;
                int *l_1065 = &g_83;
                int *l_1066 = &l_538;
                int *l_1067 = &g_83;
                int *l_1068 = (void*)0;
                int *l_1069 = &l_538;
                int *l_1070 = &g_67;
                int *l_1071 = (void*)0;
                int *l_1073 = &g_537;
                int *l_1075 = &g_83;
                int *l_1076 = &l_538;
                int *l_1077 = &g_67;
                int *l_1078 = &l_538;
                int *l_1079 = &g_67;
                int l_1080 = (-1L);
                int *l_1081 = &l_1074;
                int *l_1082 = (void*)0;
                int *l_1083 = &g_149;
                int *l_1085 = &g_83;
                int l_1086 = (-7L);
                int *l_1087 = &g_83;
                int *l_1088 = &l_1086;
                int *l_1090 = (void*)0;
                int *l_1091 = &g_537;
                int *l_1092 = &g_149;
                int *l_1094 = &g_67;
                int *l_1095 = &l_1093;
                int *l_1096 = &g_537;
                int *l_1097 = &l_1093;
                l_1098--;
            }
        }
        else
        {
            unsigned char *l_1108 = (void*)0;
            unsigned char **l_1107 = &l_1108;
            int l_1109 = 0L;
            unsigned *l_1114 = &g_937;
            short *l_1179 = &g_1170;
            const char l_1211 = (-10L);
            unsigned char * const **l_1300 = &l_1298;
            (*g_66) &= l_1045;
            (*l_536) = (safe_add_func_int16_t_s_s((-7L), ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((l_1107 != (p_42 , g_1041)) , ((func_56((l_1109 , (void*)0)) & ((p_42 , l_1109) <= 0xC872L)) == 4294967295UL)) | (*p_39)), 1UL)) > l_1109), l_1045)) != l_1109)));
            for (l_1093 = 0; (l_1093 > (-13)); l_1093 = safe_sub_func_uint8_t_u_u(l_1093, 8))
            {
                char *l_1115 = &g_103;
                char *l_1116 = (void*)0;
                char *l_1117 = &g_447;
                int l_1131 = 0L;
                unsigned char * const **l_1212 = (void*)0;
                unsigned char * const l_1215 = &g_1216;
                unsigned char * const *l_1214 = &l_1215;
                unsigned char * const **l_1213 = &l_1214;
                int l_1217 = 0xEB615112L;
                int *l_1218 = &l_1217;
                int *l_1219 = (void*)0;
                int *l_1220 = (void*)0;
                int *l_1221 = &l_1109;
                int *l_1222 = &l_1217;
                int *l_1223 = &l_1217;
                int *l_1224 = (void*)0;
                int *l_1225 = &g_83;
                int *l_1226 = (void*)0;
                int *l_1227 = &l_1217;
                int *l_1228 = &l_1217;
                int *l_1229 = &l_1084;
                int *l_1230 = &l_538;
                int *l_1231 = &g_83;
                int *l_1232 = (void*)0;
                int *l_1233 = &g_149;
                int *l_1234 = &g_537;
                int *l_1235 = (void*)0;
                int *l_1236 = &l_1217;
                int *l_1237 = &l_1074;
                int *l_1238 = &g_537;
                int *l_1239 = (void*)0;
                int *l_1240 = &l_1084;
                int *l_1241 = &l_1131;
                int *l_1242 = &g_83;
                int *l_1243 = &g_537;
                int *l_1244 = &g_67;
                int *l_1245 = &l_1109;
                int *l_1246 = &g_67;
                int *l_1247 = &g_67;
                int *l_1248 = &l_1131;
                int *l_1249 = &g_537;
                int *l_1250 = &g_83;
                int *l_1251 = &l_1217;
                int *l_1252 = &l_1089;
                int *l_1253 = &l_1217;
                int *l_1254 = &l_1131;
                int *l_1255 = &l_1131;
                int *l_1256 = &l_1074;
                int *l_1257 = &l_1084;
                int *l_1258 = &g_149;
                int *l_1260 = &l_1217;
                int *l_1261 = (void*)0;
                int *l_1262 = &g_657;
                int *l_1263 = &l_1084;
                int l_1264 = 0xC5BA30A4L;
                int *l_1265 = &l_1264;
                int *l_1266 = &l_1259;
                int *l_1267 = &l_1089;
                int *l_1268 = (void*)0;
                int *l_1269 = &g_149;
                int *l_1270 = &g_149;
                int *l_1271 = &l_1259;
                int *l_1272 = &l_1109;
                int *l_1274 = &l_1264;
                int *l_1275 = &l_1259;
                int *l_1276 = &g_537;
                int *l_1277 = &l_1259;
                int *l_1278 = &g_537;
                int *l_1279 = &l_1264;
                int *l_1280 = &l_1273;
                int *l_1281 = &l_1084;
                int *l_1282 = &l_1217;
                int *l_1283 = &g_149;
                if ((((((*l_1115) = (safe_mod_func_uint8_t_u_u((((void*)0 == l_1114) != 4L), p_42))) == ((*l_1117) = g_450)) , (((*p_39) , (p_40 <= g_77)) , ((-4L) >= l_1109))) || l_1074))
                {
                    unsigned short l_1132 = 0x08D6L;
                    int *l_1133 = &g_83;
                    int l_1134 = 1L;
                    int *l_1135 = &l_1074;
                    int *l_1136 = &l_538;
                    int *l_1137 = &l_1134;
                    int *l_1138 = &g_537;
                    int *l_1139 = &l_538;
                    int *l_1140 = &l_1074;
                    int *l_1141 = &g_537;
                    int *l_1142 = &l_1134;
                    int *l_1143 = &g_537;
                    int *l_1144 = &g_67;
                    int *l_1145 = &l_1131;
                    int *l_1146 = &l_1134;
                    int *l_1147 = &l_1089;
                    int *l_1148 = (void*)0;
                    int *l_1149 = &l_1131;
                    int *l_1150 = &g_657;
                    int *l_1151 = &l_1131;
                    int *l_1152 = &l_1074;
                    int *l_1153 = &l_1109;
                    int *l_1154 = &l_1089;
                    int l_1155 = 0x1919631AL;
                    int *l_1156 = &g_83;
                    int *l_1157 = &l_1089;
                    int *l_1158 = &l_1089;
                    int *l_1159 = &g_657;
                    int *l_1160 = &l_1109;
                    int *l_1161 = (void*)0;
                    int *l_1162 = &l_538;
                    int *l_1163 = &g_537;
                    int l_1164 = 0xA1D291C3L;
                    int *l_1165 = &l_1155;
                    int *l_1166 = &l_1089;
                    int *l_1167 = &l_1109;
                    int *l_1168 = &l_1131;
                    int *l_1169 = &l_1109;
                    int *l_1171 = &l_1164;
                    for (g_937 = 0; (g_937 <= 7); g_937++)
                    {
                        short **l_1126 = &g_118;
                        int l_1130 = 0x4B9943CEL;
                        l_1132 = ((safe_add_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((~(252UL > (safe_mod_func_int8_t_s_s(func_56(((*l_1126) = l_507)), g_1127)))), (!(((p_42 == (0xBC2B520EL == p_40)) == (l_1130 = (safe_mod_func_uint32_t_u_u((((*l_536) &= l_1130) , (l_1109 = p_40)), l_1130)))) > l_1131)))) , 0x74L) | p_40), 1UL)) , 1L);
                    }
                    l_1172++;
                }
                else
                {
                    unsigned *l_1190 = &g_735;
                    unsigned **l_1189 = &l_1190;
                    int l_1195 = 0xBC01EA85L;
                    for (g_112 = (-22); (g_112 != 29); g_112 = safe_add_func_uint16_t_u_u(g_112, 4))
                    {
                        int *l_1177 = &g_537;
                        l_1178 = func_50(l_1177);



                        ;
                        return l_1179;


                    }
                    l_1109 |= p_42;
                    for (l_1045 = 0; (l_1045 <= 53); l_1045 = safe_add_func_int16_t_s_s(l_1045, 6))
                    {
                        unsigned l_1196 = 0x65E792FBL;
                        short ****l_1198 = &l_1197;
                        char l_1201 = 8L;
                        const int *l_1208 = (void*)0;
                        const int **l_1207 = &l_1208;
                    }
                }
                (*l_1178) = ((((safe_lshift_func_uint16_t_u_u(((&g_77 == &p_40) & ((((l_1211 > ((&l_1108 == ((*l_1213) = g_1041)) <= ((*l_1215) = ((((*l_1179) = (l_1131 = (*p_41))) , (*g_66)) > (g_83 , ((((((&l_1200 != &g_238) >= g_116) >= l_1109) , l_1217) || 65534UL) , p_40)))))) <= p_42) == 253UL) | (*g_66))), 12)) <= 1L) , 1L) , l_1109);

                ;
                ++l_1284;
                for (g_607 = 0; (g_607 <= 32); g_607 = safe_add_func_uint16_t_u_u(g_607, 8))
                {
                    unsigned char ***l_1296 = (void*)0;
                    unsigned char * const ***l_1301 = (void*)0;
                    unsigned char * const ***l_1302 = &l_1212;
                    (*l_1221) = (safe_sub_func_int32_t_s_s((p_40 , ((safe_lshift_func_uint16_t_u_s(func_56(p_41), 9)) >= ((((*l_1277) = (safe_lshift_func_uint8_t_u_s(((g_1041 = l_1295) == (void*)0), ((*l_1115) = (p_42 || (l_1074 = (((*l_1302) = (l_1300 = l_1297)) == ((safe_sub_func_uint16_t_u_u(l_1089, (p_42 <= (*l_1248)))) , &l_1298)))))))) != l_1109) , (*l_1178)))), 0x6C929C7DL));

                    ;
                    return (**l_1197);


                }
            }
            (*l_1178) = (safe_sub_func_int32_t_s_s((p_42 , ((*l_536) = ((***g_237) > (safe_lshift_func_uint8_t_u_u(func_56((l_1109 , p_41)), l_1309))))), p_40));
        }


        ;

    }
    else
    {
        int *l_1310 = &l_1093;
        int *l_1311 = (void*)0;
        int l_1312 = (-4L);
        int *l_1313 = (void*)0;
        int *l_1314 = &g_83;
        l_1315++;
        (*l_1310) &= func_56(p_41);
    }


    ;

    for (g_663 = 0; (g_663 >= 58); g_663 = safe_add_func_int16_t_s_s(g_663, 5))
    {
        const int **l_1321 = (void*)0;
        const int *l_1323 = &l_1089;
        const int **l_1322 = &l_1323;
        (*l_1322) = func_47(&g_83, l_1320);

        ;
        for (l_1315 = 0; (l_1315 != 42); l_1315++)
        {
            int * const l_1332 = &l_1074;
            for (g_77 = 4; (g_77 <= 26); g_77++)
            {
                unsigned char l_1328 = 254UL;
                int * const l_1331 = (void*)0;
                --l_1328;
                (*l_1322) = &g_67;

                ;
                (*l_1332) &= p_42;
                (*l_1332) = (*l_1332);
            }
        }

        ;
        if ((*l_1320))
            continue;
    }
    return (**g_237);


}







static const int * const func_47(int * const p_48, int * const p_49)
{
    short * const l_1019 = &g_46;
    int **l_1020 = (void*)0;
    (*p_49) = func_56(l_1019);
    (*p_48) = ((void*)0 == l_1020);
    return p_48;


}







static int * const func_50(int * p_51)
{
    unsigned l_740 = 0UL;
    unsigned char *l_749 = &g_663;
    char *l_752 = &g_77;
    unsigned short ***l_753 = &g_618;
    short *l_754 = &g_46;
    unsigned short *l_755 = &g_607;
    unsigned *l_756 = (void*)0;
    int l_757 = (-3L);
    int *l_758 = &g_537;
    int **l_759 = &l_758;
    int *l_760 = &l_757;
    int l_773 = 0x9A86774CL;
    int l_793 = (-6L);
    int l_807 = 0x38FB024DL;
    int l_820 = 0xCD269D8AL;
    int l_821 = 0xFC5D8A82L;
    int l_834 = 0x641AE819L;
    int l_844 = (-8L);
    int l_872 = 2L;
    int l_881 = 0xD9804745L;
    int l_908 = (-1L);
    unsigned short l_926 = 0UL;
    int l_956 = 0xE8088BF0L;
    (*l_759) = func_52((l_757 = (+(safe_mod_func_int8_t_s_s(((3UL > l_740) > l_740), (((((l_740 , 0xD458L) & l_740) , g_46) < (*p_51)) && (**g_238)))))), l_758, (*l_758));

    ;
    ;
    (*l_760) &= (*p_51);
    (*l_760) |= (**l_759);
    if ((*p_51))
    {
        return p_51;


    }
    else
    {
        int *l_768 = &g_657;
        int *l_769 = &g_149;
        int *l_770 = (void*)0;
        int *l_771 = &l_757;
        int *l_772 = &g_657;
        int *l_774 = &l_773;
        int *l_775 = &g_149;
        int *l_776 = &l_773;
        int *l_777 = (void*)0;
        int *l_778 = &l_773;
        int *l_779 = &l_773;
        int *l_780 = &g_83;
        int *l_781 = &l_773;
        int *l_782 = &g_537;
        int *l_783 = &g_657;
        int *l_784 = &g_149;
        int *l_785 = &g_67;
        int *l_786 = &g_537;
        int *l_787 = (void*)0;
        int *l_788 = &g_657;
        int *l_789 = &g_83;
        int *l_790 = &g_83;
        int *l_791 = (void*)0;
        int *l_792 = &l_757;
        int *l_794 = &l_757;
        int *l_795 = &l_773;
        int *l_796 = &g_657;
        int *l_797 = &l_793;
        int *l_798 = &g_67;
        int *l_799 = &g_657;
        int *l_800 = &l_793;
        int *l_801 = &g_67;
        int *l_802 = &l_757;
        int *l_803 = &g_537;
        int *l_804 = &g_537;
        int *l_805 = &g_657;
        int *l_806 = &g_83;
        int *l_808 = (void*)0;
        int *l_809 = &l_807;
        int *l_810 = &g_67;
        int *l_811 = &g_83;
        int *l_812 = &l_793;
        int *l_813 = &g_149;
        int *l_814 = &l_773;
        int *l_815 = &g_83;
        int *l_816 = &g_657;
        int *l_817 = &g_83;
        int *l_818 = &g_67;
        int *l_819 = &l_773;
        int *l_822 = &l_757;
        int *l_823 = (void*)0;
        int *l_824 = (void*)0;
        int *l_825 = &l_820;
        int *l_826 = &l_757;
        int *l_827 = (void*)0;
        int *l_828 = &g_83;
        int *l_829 = &l_807;
        int *l_830 = &g_657;
        int *l_831 = &g_537;
        int *l_832 = (void*)0;
        int *l_833 = &g_149;
        int *l_835 = (void*)0;
        int *l_836 = &g_537;
        int *l_837 = &g_657;
        int *l_838 = &g_67;
        int *l_839 = &l_834;
        int *l_840 = &l_773;
        int *l_841 = &g_657;
        int l_842 = 0xF934DA77L;
        int *l_843 = &g_67;
        int *l_845 = &g_83;
        int *l_846 = &l_773;
        int *l_847 = (void*)0;
        int *l_848 = &g_83;
        int *l_849 = &l_842;
        int *l_850 = &l_807;
        int *l_851 = (void*)0;
        int *l_852 = (void*)0;
        int *l_853 = &l_757;
        int *l_854 = &l_757;
        int *l_855 = (void*)0;
        int *l_856 = &g_537;
        int *l_857 = &l_821;
        int *l_858 = (void*)0;
        int *l_859 = (void*)0;
        int *l_860 = &l_773;
        int *l_861 = (void*)0;
        int *l_862 = &l_757;
        int *l_863 = &l_820;
        int l_864 = (-6L);
        int *l_865 = &g_149;
        int *l_866 = &l_773;
        int *l_867 = &g_537;
        int *l_868 = &g_149;
        int *l_869 = &l_757;
        int *l_870 = (void*)0;
        int *l_871 = (void*)0;
        int l_873 = 0L;
        int *l_874 = &l_821;
        int *l_875 = &g_83;
        int *l_876 = &g_537;
        int *l_877 = &g_67;
        int *l_878 = &g_537;
        int *l_879 = (void*)0;
        int *l_880 = &l_873;
        int l_882 = 1L;
        int l_883 = 0L;
        int *l_884 = &g_657;
        int *l_885 = &l_883;
        int l_886 = 0L;
        int *l_887 = &g_67;
        int *l_888 = &l_864;
        int *l_889 = &l_834;
        int *l_890 = &l_882;
        int *l_891 = &l_873;
        int *l_892 = (void*)0;
        int *l_893 = &l_883;
        int *l_894 = &l_807;
        int *l_895 = &g_657;
        int l_896 = (-6L);
        int *l_897 = &l_757;
        int *l_898 = (void*)0;
        int *l_899 = &l_773;
        int *l_900 = &g_537;
        int *l_901 = &l_872;
        int *l_902 = &g_67;
        int *l_903 = &l_882;
        int *l_904 = (void*)0;
        int *l_905 = &l_842;
        int *l_906 = &g_537;
        int *l_907 = &l_793;
        int *l_909 = (void*)0;
        int *l_910 = &g_67;
        int *l_911 = &g_657;
        int *l_912 = &l_886;
        int *l_913 = &g_657;
        int *l_914 = &l_908;
        int *l_915 = (void*)0;
        int *l_916 = &l_842;
        int *l_917 = (void*)0;
        short *l_995 = &g_46;
        short *l_997 = (void*)0;
        short * const **l_1000 = &g_999;
        short l_1009 = 0x96ADL;
        char l_1010 = 0L;
        int *l_1011 = &g_83;
        g_918++;
        if (((*l_758) | (&g_66 != ((*l_826) , &p_51))))
        {
            short l_927 = 0x6FB6L;
            const unsigned short *l_928 = &l_926;
            int l_931 = 1L;
            int l_932 = 0L;
            int l_933 = 0xCD7BEECDL;
            short l_936 = 0L;
            unsigned short **l_965 = &g_619;
            const short ** const *l_981 = (void*)0;
            if ((*l_760))
            {
                return p_51;


            }
            else
            {
                unsigned char l_923 = 0x88L;
                unsigned l_957 = 1UL;
                unsigned short * const *l_960 = &g_619;
                int l_966 = 0x09BA0F58L;
                short *l_971 = &g_478;
                short l_974 = 0xEBDBL;
                (*l_905) = func_56((((((~((((g_447 &= ((((*l_760) | ((*l_752) ^= l_923)) | (*l_758)) >= ((safe_rshift_func_uint16_t_u_u(((((l_926 || (l_923 >= (*l_911))) != (*l_895)) && (*l_758)) > l_923), 13)) != (*l_876)))) != l_927) , (**l_753)) == l_928)) && (-8L)) != g_103) != l_927) , (void*)0));
                for (l_740 = 23; (l_740 < 38); l_740 = safe_add_func_uint16_t_u_u(l_740, 6))
                {
                    int l_934 = 7L;
                    int l_935 = 5L;
                    g_937++;
                    for (l_820 = 0; (l_820 < (-16)); l_820 = safe_sub_func_uint32_t_u_u(l_820, 8))
                    {
                        unsigned short * const **l_961 = &l_960;
                        int l_964 = 0x6C49D658L;
                        (*l_759) = p_51;
                        (*l_884) = (+(((*l_755) = ((((g_447 && (safe_add_func_int32_t_s_s(((*l_905) |= (*p_51)), ((((*l_961) = l_960) == ((*l_753) = &g_619)) || (((safe_add_func_uint16_t_u_u((~((l_960 != (g_77 , (l_957 , (void*)0))) | ((l_935 == 0UL) , (*l_758)))), 65531UL)) | 0xBBL) | l_964))))) | 0xC6L) , l_957) & l_923)) & l_923));
                        if ((*g_66))
                            break;
                        (*l_759) = (*l_759);
                    }
                    if ((*p_51))
                    {
                        int **l_975 = &l_874;
                        (*l_975) = ((g_918 = ((*l_758) ^ ((((**g_238) |= (((((safe_mod_func_int32_t_s_s((0xF9L || g_735), l_923)) != (((*l_901) , (((g_607 == (l_974 && 0x948D6704L)) , &l_760) != l_975)) > 0UL)) <= (*g_66)) && (*l_790)) < g_976)) , 0xD25131B3L) , 1L))) , (void*)0);

                        ;
                        (*l_776) &= ((*p_51) = (safe_lshift_func_int8_t_s_s(0L, ((*l_752) = (((255UL && l_934) , ((((((*p_51) ^ l_957) || (safe_lshift_func_int8_t_s_u(((*p_51) , (l_935 & ((*l_878) >= (((l_974 <= l_935) || (-10L)) != g_537)))), g_77))) , (*l_758)) , (void*)0) != l_981)) ^ 0xABL)))));
                        (*l_975) = func_52((((*l_837) ^= (l_927 , ((*l_760) < l_966))) & (0UL >= (((((safe_mod_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s(((*l_971) ^= (*g_118)), l_935)) & (((*l_809) ^= (((safe_sub_func_int32_t_s_s((((void*)0 != &l_754) , (+func_56((*g_238)))), 9UL)) , (*l_758)) > 7UL)) < 3UL)) >= g_603) != 0x1BL) , (***g_237)), 1UL)) && 1L) ^ g_937) == (*l_866)) | 0x7E46L))), &g_537, l_934);

                        ;
                        return &g_657;


                    }
                    else
                    {
                        return p_51;


                    }
                }
            }
        }
        else
        {
            int l_993 = 0xBC5DBC72L;
            short **l_994 = (void*)0;
            unsigned *l_996 = (void*)0;
            int l_1001 = 1L;
            (*l_759) = &l_873;

            ;
            (*l_772) = (((l_1000 = ((((&g_663 == (void*)0) & ((*l_749) ^= (**l_759))) > (l_993 = (safe_unary_minus_func_uint32_t_u(((safe_add_func_int32_t_s_s(5L, (l_993 >= (*g_118)))) || (*l_758)))))) , g_998)) != &g_238) != l_1001);
            l_779 = (*l_759);

            ;
            for (g_537 = (-8); (g_537 != (-19)); g_537--)
            {
                short l_1008 = 0xA669L;
                unsigned char **l_1012 = &l_749;
                short **l_1018 = &g_118;
                if (((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((((*l_752) = (*l_774)) >= g_606) , ((*l_749) = (((((((*l_789) , (1L ^ (***g_237))) <= l_1008) , (void*)0) != &g_66) >= ((+g_471) , g_116)) , l_993))) , g_67), g_603)), 8)) | l_1009))
                {
                    if ((l_1010 = l_1001))
                    {
                        (*l_897) |= func_56(&l_1008);
                        (*l_759) = l_1011;

                        ;
                    }
                    else
                    {
                        (*l_759) = &g_67;

                        ;
                    }

                    ;
                    (*l_759) = p_51;

                    ;
                }
                else
                {
                    unsigned char ***l_1013 = (void*)0;
                    unsigned char ***l_1014 = &l_1012;
                    int *l_1017 = &l_834;
                    (*l_1014) = l_1012;
                    for (g_450 = (-7); (g_450 >= (-14)); g_450--)
                    {
                        (*l_759) = (g_66 = l_1017);

                        ;
                        ;
                    }

                    ;
                }

                ;
                (*l_759) = p_51;

                ;
                (*l_771) |= (1L == (l_1018 != ((*g_237) = l_1018)));
            }

            ;
            ;
        }

        ;
        ;
        ;
    }

    ;

    return &g_149;



}







static int * func_52(unsigned p_53, int * p_54, unsigned char p_55)
{
    unsigned l_552 = 0x0F9083A5L;
    char *l_558 = &g_103;
    char **l_557 = &l_558;
    int l_578 = 0L;
    int l_580 = 0x775C3926L;
    int **l_671 = &g_66;
    unsigned short * const *l_693 = &g_619;
    unsigned short * const * const * const l_692 = &l_693;
    int *l_699 = (void*)0;
    int *l_700 = &g_67;
    int *l_701 = &g_537;
    int *l_702 = &l_578;
    int *l_703 = &l_578;
    int *l_704 = &g_657;
    int *l_705 = &g_149;
    int *l_706 = &l_580;
    int *l_707 = &g_67;
    int *l_708 = &l_580;
    int *l_709 = (void*)0;
    int l_710 = 0x56D41D6DL;
    int *l_711 = &g_67;
    int *l_712 = &g_537;
    int *l_713 = &l_710;
    int *l_714 = &l_580;
    int *l_715 = &g_537;
    int *l_716 = &l_580;
    int *l_717 = &l_580;
    int l_718 = 1L;
    int l_719 = 6L;
    int *l_720 = &l_578;
    int *l_721 = &l_578;
    int *l_722 = (void*)0;
    int *l_723 = &g_537;
    int *l_724 = &l_578;
    int *l_725 = (void*)0;
    int *l_726 = &g_657;
    int l_727 = 3L;
    char l_728 = 0xE0L;
    int *l_729 = &g_149;
    int l_730 = 3L;
    int *l_731 = &l_727;
    int *l_732 = &l_730;
    int *l_733 = (void*)0;
    int *l_734 = &l_719;
    g_66 = p_54;


    for (g_116 = 20; (g_116 > 23); g_116 = safe_add_func_uint16_t_u_u(g_116, 6))
    {
        int l_569 = 1L;
        int *l_613 = &g_149;
        short * const l_624 = &g_46;
        int l_627 = 0xD76BC94AL;
        int l_639 = 0x9B4813DCL;
        int l_646 = 0xD0C05B78L;
        int *l_666 = (void*)0;
        int *l_667 = &l_580;
        int *l_668 = &l_646;
        for (g_83 = (-5); (g_83 < (-14)); --g_83)
        {
            const unsigned short l_562 = 1UL;
            short ***l_570 = &g_238;
            int l_588 = 0x81E61262L;
            int l_595 = 0x67AC9D76L;
            char l_599 = 0xA4L;
            unsigned char l_616 = 0xDCL;
            unsigned short ***l_620 = &g_618;
            int **l_621 = &l_613;
            for (g_346 = 0; (g_346 > (-1)); g_346--)
            {
                int *l_545 = (void*)0;
                int *l_546 = (void*)0;
                int *l_547 = &g_537;
                int *l_548 = &g_537;
                int *l_549 = &g_149;
                int *l_550 = &g_149;
                int *l_551 = &g_537;
                char **l_559 = &l_558;
                int l_581 = 6L;
                l_552++;
                (*p_54) = ((((safe_rshift_func_int8_t_s_u(((l_557 != l_559) == (-7L)), g_67)) , p_53) <= ((*l_558) ^= (safe_lshift_func_int8_t_s_s(l_562, 7)))) >= ((safe_sub_func_int32_t_s_s((*p_54), (safe_rshift_func_int16_t_s_s(((**g_238) = (255UL >= (safe_lshift_func_int8_t_s_u((p_55 & l_552), g_478)))), l_569)))) <= 0L));
                if ((l_570 != (void*)0))
                {
                    int *l_571 = &g_67;
                    int *l_572 = &g_149;
                    int *l_573 = (void*)0;
                    int *l_574 = (void*)0;
                    int *l_575 = &g_537;
                    int *l_576 = &g_67;
                    int *l_577 = (void*)0;
                    int *l_579 = &g_67;
                    int *l_582 = &l_580;
                    int *l_583 = (void*)0;
                    int *l_584 = &l_580;
                    int *l_585 = &g_149;
                    int *l_586 = &g_537;
                    int *l_587 = (void*)0;
                    int *l_589 = &g_537;
                    int *l_590 = &l_580;
                    int *l_591 = &l_588;
                    int *l_592 = &g_67;
                    int *l_593 = &g_149;
                    int *l_594 = &l_578;
                    int *l_596 = &l_588;
                    int *l_597 = &g_149;
                    int *l_598 = &l_580;
                    int *l_600 = &g_537;
                    int *l_601 = &g_149;
                    int *l_602 = &l_581;
                    int *l_604 = (void*)0;
                    int *l_605 = &g_67;
                    short ***l_612 = (void*)0;
                    g_607++;
                    if (l_552)
                        break;
                    if (l_580)
                    {
                        int **l_610 = (void*)0;
                        int **l_611 = &l_550;
                        (*l_611) = &g_537;

                        ;
                        if ((*l_549))
                            break;
                    }
                    else
                    {
                        if ((*g_66))
                            break;
                        (*l_548) |= ((g_607 >= (+p_53)) && ((*l_597) = (65533UL && ((**g_238) &= (p_55 , ((void*)0 != l_612))))));
                    }

                    ;
                }
                else
                {
                    (*l_547) ^= 1L;
                    return l_613;


                }

                ;
            }
            for (l_578 = 27; (l_578 > 18); --l_578)
            {
                const int l_617 = 0x3CADAEC6L;
                if (l_616)
                    break;
                if (l_617)
                    continue;
            }
            (*l_620) = g_618;
            (*l_621) = &g_67;

            ;
        }

        ;
        for (l_552 = 0; (l_552 == 56); l_552 = safe_add_func_uint8_t_u_u(l_552, 6))
        {
            int *l_625 = &l_580;
            int *l_626 = (void*)0;
            int *l_628 = &g_83;
            int *l_629 = &l_627;
            int *l_630 = &g_537;
            int *l_631 = &g_67;
            int *l_632 = &g_149;
            int *l_633 = &g_67;
            int *l_634 = (void*)0;
            int *l_635 = (void*)0;
            int *l_636 = &g_67;
            int *l_637 = (void*)0;
            int *l_638 = &l_578;
            int *l_640 = &l_639;
            int *l_641 = &l_578;
            int *l_642 = &g_67;
            int *l_643 = &g_537;
            int *l_644 = (void*)0;
            int *l_645 = &l_578;
            int l_647 = (-1L);
            int l_648 = 0x2370A5FEL;
            int *l_649 = (void*)0;
            int *l_650 = &l_646;
            int *l_651 = &g_537;
            int *l_652 = &l_580;
            int *l_653 = &l_639;
            int *l_654 = (void*)0;
            int *l_655 = &l_580;
            int *l_656 = (void*)0;
            int *l_659 = &l_580;
            int *l_660 = (void*)0;
            int *l_661 = &l_578;
            int l_662 = (-6L);
            (*p_54) = func_56(l_624);
            if ((*p_54))
                continue;
            g_663--;
        }
        (*l_668) &= ((*l_667) ^= ((*p_54) &= func_56(l_624)));
    }
    if ((safe_add_func_uint16_t_u_u((((*l_671) = &g_83) == &l_578), func_56((p_55 , (void*)0)))))
    {
        unsigned *l_673 = &g_116;
        unsigned **l_672 = &l_673;
        g_674 = l_672;

        ;
    }
    else
    {
        unsigned short l_675 = 65533UL;
        short * const l_676 = &g_478;
        unsigned char l_681 = 0xC1L;
        unsigned *l_688 = &g_482;
        unsigned **l_689 = (void*)0;
        unsigned *l_691 = &g_482;
        unsigned **l_690 = &l_691;
        unsigned char *l_696 = &g_663;
        char *l_697 = &g_450;
        int *l_698 = &g_657;
        (*p_54) = (l_675 , (*g_66));
        (*l_698) &= (func_56(l_676) == (((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((!((**l_557) = (l_681 == (*g_118)))), (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((*l_697) &= (((safe_sub_func_uint16_t_u_u((((l_688 = &g_116) != ((*l_690) = p_54)) > (((l_692 == (void*)0) || (((safe_lshift_func_int16_t_s_u((((*l_696) ^= ((*p_54) , g_149)) , (*g_45)), 3)) == 0L) | (*p_54))) , (-1L))), 0xC40EL)) != 1UL) || (*p_54))), 1L)) != 0x7382L), l_681)))), (**g_238))) <= 0x024E053DL) | p_53));

        ;

    }

    ;
    ++g_735;
    return p_54;


}







static unsigned func_56(short * const p_57)
{
    unsigned short l_510 = 0x9832L;
    short * const *l_511 = (void*)0;
    short * const **l_512 = (void*)0;
    short * const **l_513 = &l_511;
    short *l_514 = &g_478;
    short l_515 = 0x7750L;
    int l_526 = 0L;
    short **l_531 = &l_514;
    int l_532 = 0x98634C5CL;
    int *l_533 = &g_83;
    int **l_534 = (void*)0;
    int **l_535 = &l_533;
    if ((g_67 , (!l_510)))
    {
        int *l_516 = &g_67;
        (*l_516) = l_515;
    }
    else
    {
        unsigned char *l_522 = (void*)0;
        unsigned char *l_523 = (void*)0;
        unsigned char *l_524 = &g_349;
        int l_525 = 0xAF91E436L;
        l_526 = (safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((0x26L == ((*l_524) = g_253)), 6)) <= l_510), l_525))));
    }
    (*l_533) ^= ((((l_526 & l_510) | (-1L)) & l_532) , l_510);
    (*l_535) = &g_149;

    ;
    return (**l_535);
}







static unsigned func_59(unsigned p_60, unsigned p_61, int p_62, short * p_63, unsigned short * p_64)
{
    const unsigned char l_74 = 0x46L;
    char *l_75 = (void*)0;
    char *l_76 = &g_77;
    short l_78 = (-1L);
    int l_88 = 4L;
    unsigned short * const l_111 = &g_112;
    int l_172 = 0x1642D9A1L;
    int l_178 = (-1L);
    int l_179 = (-1L);
    unsigned short l_226 = 0xB2C6L;
    unsigned short l_254 = 0x59E9L;
    unsigned short l_360 = 0x2794L;
    unsigned l_401 = 0xC44ED0FAL;
    if (((*g_66) |= ((g_33 & ((*p_63) = (((void*)0 == g_66) > (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(3L, (safe_sub_func_uint32_t_u_u(l_74, (p_61 == (~(+(p_60 , (l_74 != ((*l_76) = (((((1L >= l_74) , (void*)0) == (void*)0) >= l_74) == l_74))))))))))), p_61))))) , l_78)))
    {
        int *l_93 = &g_83;
        char *l_97 = &g_77;
        int l_164 = 0x71E1A547L;
        short ***l_239 = &g_238;
        int l_242 = 1L;
        int l_301 = (-2L);
        unsigned *l_355 = &g_116;
        int l_372 = 0xAF82B879L;
        short l_481 = (-5L);
        unsigned char l_503 = 3UL;
        if (p_62)
        {
            unsigned char l_90 = 255UL;
            for (g_67 = 0; (g_67 < 22); g_67 = safe_add_func_int16_t_s_s(g_67, 9))
            {
                int *l_81 = (void*)0;
                int *l_82 = &g_83;
                int *l_84 = &g_83;
                int *l_85 = &g_83;
                int *l_86 = &g_83;
                int *l_87 = &g_83;
                int *l_89 = &l_88;
                --l_90;
                (*l_85) ^= ((*p_64) == g_77);
                (*l_84) &= ((l_88 > 0x113DL) , p_61);
            }
            (*g_66) = l_74;
            return g_83;
        }
        else
        {
            int **l_94 = &g_66;
            char *l_98 = &g_77;
            int l_132 = (-3L);
            int l_181 = 0xA82727C9L;
            unsigned char *l_188 = &g_106;
            unsigned short * const l_217 = &g_112;
            int l_347 = 0x06E3C85DL;
            (*l_94) = (g_77 , l_93);

            ;
            if (p_60)
            {
                return g_83;
            }
            else
            {
                char **l_104 = &l_75;
                unsigned char *l_105 = &g_106;
                unsigned *l_115 = &g_116;
                short **l_117 = (void*)0;
                int l_139 = 0xFE417BD4L;
                int l_144 = 0x53FA0D08L;
                (*l_93) = (safe_rshift_func_uint16_t_u_s(((((l_97 = l_76) == l_98) >= ((safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((g_77 ^= p_61), ((*l_105) = (((((void*)0 != &g_46) != (g_103 = ((void*)0 != &g_33))) , l_98) == ((*l_104) = l_98))))) , (*p_64)) | (*p_63)), 0x634890B8L)) < p_60)) > p_62), 2));

                ;
                (*l_93) = (((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((p_64 != l_111), ((safe_mod_func_uint8_t_u_u((((*l_115) = p_61) <= p_60), ((*l_105) &= g_67))) && (((g_106 , p_61) , p_61) , ((g_118 = &g_46) != &g_46))))), (*p_63))) == (*g_66)) != p_60);
                (*l_94) = &l_88;

                ;
                for (g_103 = 6; (g_103 > (-16)); --g_103)
                {
                    int l_121 = 0x49712A80L;
                    short *l_122 = &l_78;
                    int *l_123 = &g_83;
                    int *l_124 = &l_121;
                    int *l_125 = (void*)0;
                    int *l_126 = &g_67;
                    int *l_127 = &g_67;
                    int *l_128 = (void*)0;
                    int *l_129 = &g_67;
                    int *l_130 = &g_83;
                    int *l_131 = &l_121;
                    int l_133 = 1L;
                    int *l_134 = &g_67;
                    int *l_135 = &l_121;
                    int *l_136 = &l_88;
                    int *l_137 = (void*)0;
                    int *l_138 = (void*)0;
                    int *l_140 = &l_133;
                    int *l_141 = (void*)0;
                    int *l_142 = &l_121;
                    int *l_143 = &l_133;
                    int *l_145 = &g_67;
                    int *l_146 = &l_121;
                    int l_147 = (-10L);
                    int *l_148 = &l_121;
                    int *l_150 = &l_132;
                    int *l_151 = &l_144;
                    int *l_152 = &g_149;
                    int *l_153 = &g_149;
                    int *l_154 = &l_121;
                    int *l_155 = &g_149;
                    int *l_156 = &g_149;
                    int *l_157 = &l_144;
                    int *l_158 = &l_121;
                    int *l_159 = &g_83;
                    int *l_160 = &g_83;
                    int *l_161 = &l_132;
                    int *l_162 = &g_83;
                    int *l_163 = &l_132;
                    int *l_165 = &l_133;
                    int *l_166 = (void*)0;
                    int *l_167 = &l_144;
                    int *l_168 = &l_147;
                    int *l_169 = (void*)0;
                    int *l_170 = &g_83;
                    int *l_171 = &l_121;
                    int *l_173 = (void*)0;
                    int *l_174 = &l_144;
                    int *l_175 = &l_172;
                    int *l_176 = &l_88;
                    int *l_177 = &g_67;
                    int *l_180 = &g_67;
                    int *l_182 = &l_147;
                    (*g_66) |= (g_116 && ((*l_111) = (l_121 > ((((g_46 > (*l_93)) >= ((*p_63) >= ((*l_122) = (*p_63)))) ^ 65530UL) != 0x08L))));
                    --g_183;
                    (*l_146) &= (*g_66);
                }
            }

            ;
            ;
            if (((((*l_188) |= (g_149 || (0xB265L || (safe_mul_func_int16_t_s_s(((*p_63) = (*g_118)), ((void*)0 == &p_63)))))) > (**l_94)) == (l_78 > g_112)))
            {
                short **l_190 = &g_118;
                short ***l_189 = &l_190;
                short **l_192 = (void*)0;
                short ***l_191 = &l_192;
                int l_208 = (-1L);
                int l_309 = 0L;
                (*l_191) = ((*l_189) = &p_63);

                ;
                ;
                (*l_93) = (p_61 != (*g_66));
                if ((**l_94))
                {
                    int *l_193 = &g_149;
                    (*l_193) |= ((*l_93) = (*g_66));
                }
                else
                {
                    short l_198 = (-7L);
                    char *l_206 = (void*)0;
                    unsigned *l_207 = &g_116;
                    (**l_94) = p_60;
                    if (((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_198 > (safe_lshift_func_int8_t_s_u((((*g_118) = (*p_63)) < ((safe_unary_minus_func_int32_t_s((l_198 ^ ((safe_add_func_uint32_t_u_u((((g_112 <= (((*l_207) = ((**l_94) < (p_61 < ((safe_add_func_uint16_t_u_u((((*l_93) &= (-10L)) | p_62), (l_75 == l_206))) && (**l_94))))) ^ 1L)) , g_103) & 0x8BF0L), l_208)) && g_103)))) != 8UL)), 0))), l_198)), g_149)) , (-7L)))
                    {
                        unsigned char l_218 = 1UL;
                        g_149 |= (((safe_sub_func_uint16_t_u_u((*p_64), (*p_64))) <= p_62) ^ ((safe_add_func_int32_t_s_s((((~(((safe_lshift_func_uint16_t_u_u(((*l_111) |= ((((void*)0 == &g_106) , ((*p_63) != (p_61 ^ (*g_66)))) & (safe_mod_func_int8_t_s_s(g_116, l_198)))), l_198)) , l_217) != l_111)) , g_112) <= g_83), 0x59AB2ABFL)) <= g_116));
                        l_218++;
                    }
                    else
                    {
                        unsigned l_225 = 0x1B771C4AL;
                        (*l_93) &= (safe_lshift_func_int8_t_s_s(((*l_189) != ((((((*p_64) = ((*l_217) = l_88)) && (((p_62 ^ ((safe_mod_func_uint16_t_u_u((((p_60 , ((*l_188) = l_225)) & g_77) , (l_225 ^ (g_112 || p_61))), 2UL)) > g_46)) > p_61) & (*g_45))) | l_226) , (*p_64)) , (void*)0)), 6));
                        (*l_94) = ((safe_sub_func_int16_t_s_s((p_60 == (*g_66)), (l_179 != ((((*g_66) != (safe_mod_func_uint8_t_u_u((*l_93), l_225))) < (safe_mod_func_int32_t_s_s((((*l_188) &= (g_112 || ((g_46 , &l_76) != &l_75))) >= g_77), 0xC26CA6B1L))) == 6L)))) , &g_149);

                        ;
                    }

                    ;
                    l_132 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((((*g_118) ^ (g_116 || ((&l_208 == ((g_237 == l_239) , ((*l_94) = l_207))) || ((void*)0 == (*g_237))))) || 0xC03B69B8L) || g_46), l_198)), 0xC95AA9AFL));

                    ;
                    l_208 = (safe_lshift_func_int8_t_s_s(((!((*g_66) || ((*l_207) = ((l_242 < ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((**l_94), ((((*g_66) | ((*l_93) = (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_226, (*l_93))) || p_60), (*l_93))))) & (safe_lshift_func_int16_t_s_u((0xF6L ^ g_183), g_103))) || g_253))), 6)) < (*p_64))) == l_254)))) , p_61), p_60));
                }

                ;
                if ((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(g_46, l_208)) == 0x92L), (~(++g_106)))))
                {
                    int *l_261 = &l_132;
                    l_261 = &g_67;

                    ;
                    return g_149;


                }
                else
                {
                    int l_269 = (-10L);
                    int l_283 = 0x8A8AD467L;
                    int l_327 = 1L;
                    int l_336 = 0x8DC8AC01L;
                    for (l_181 = 16; (l_181 == (-15)); --l_181)
                    {
                        int *l_264 = &l_164;
                        int *l_265 = &l_178;
                        int *l_266 = (void*)0;
                        int *l_267 = &l_88;
                        int *l_268 = &l_132;
                        int *l_270 = &l_269;
                        int *l_271 = (void*)0;
                        int *l_272 = &l_132;
                        int *l_273 = &l_172;
                        int *l_274 = &l_132;
                        int *l_275 = &l_172;
                        int *l_276 = &l_164;
                        int *l_277 = (void*)0;
                        int *l_278 = &l_132;
                        int *l_279 = (void*)0;
                        int *l_280 = &l_88;
                        int *l_281 = (void*)0;
                        int *l_282 = &l_132;
                        int *l_284 = &l_88;
                        int *l_285 = &l_178;
                        int *l_286 = (void*)0;
                        int *l_287 = &l_208;
                        int *l_288 = (void*)0;
                        int *l_289 = (void*)0;
                        int l_290 = 1L;
                        int *l_291 = &g_83;
                        int *l_292 = &l_172;
                        int *l_293 = &g_83;
                        int *l_294 = (void*)0;
                        int *l_295 = (void*)0;
                        int *l_296 = &g_149;
                        int *l_297 = &g_67;
                        int *l_298 = &l_164;
                        int *l_299 = &l_178;
                        int *l_300 = &g_83;
                        int *l_302 = &g_149;
                        int *l_303 = &g_67;
                        int *l_304 = &l_164;
                        int *l_305 = (void*)0;
                        int l_306 = 0x6DD20EC9L;
                        int *l_307 = &g_83;
                        int *l_308 = &l_290;
                        int *l_310 = &l_301;
                        int *l_311 = &g_67;
                        int *l_312 = (void*)0;
                        int *l_313 = &l_178;
                        int *l_314 = &l_208;
                        int *l_315 = (void*)0;
                        int *l_316 = &l_132;
                        int *l_317 = (void*)0;
                        int *l_318 = &l_269;
                        int *l_319 = (void*)0;
                        int *l_320 = &l_178;
                        int *l_321 = &l_132;
                        int *l_322 = &l_172;
                        int *l_323 = (void*)0;
                        int *l_324 = &g_67;
                        int *l_325 = &l_269;
                        int l_326 = 0x4FFD7926L;
                        int *l_328 = &l_88;
                        int *l_329 = &l_208;
                        int *l_330 = &l_178;
                        int *l_331 = &l_172;
                        int *l_332 = &l_132;
                        int *l_333 = &l_309;
                        int *l_334 = (void*)0;
                        int *l_335 = &l_283;
                        int *l_337 = &l_306;
                        int *l_338 = (void*)0;
                        int *l_339 = (void*)0;
                        int *l_340 = &l_172;
                        int l_341 = 1L;
                        int *l_342 = &g_83;
                        int *l_343 = &l_326;
                        int *l_344 = &l_341;
                        int *l_345 = &l_132;
                        int *l_348 = (void*)0;
                        ++g_349;
                        (*l_93) ^= (((g_253 >= ((p_64 = (void*)0) != (void*)0)) , ((*l_188) = p_61)) < (4294967288UL != 9L));

                        ;
                        l_309 = l_309;
                        (*l_94) = &l_208;

                        ;
                    }

                    ;
                    ;
                    for (l_172 = 0; (l_172 != (-22)); l_172 = safe_sub_func_int32_t_s_s(l_172, 8))
                    {
                        (*l_94) = &l_164;

                        ;
                        (*l_94) = &g_67;

                        ;
                    }

                    ;
                    l_93 = &g_149;

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned l_354 = 0x841AED08L;
                (*g_66) = (((*l_93) ^= l_354) >= p_62);
            }

            ;

            ;
        }

        ;

        ;
        ;
        (*l_93) = ((((*l_355) = (l_78 && l_78)) , ((((~p_62) , (safe_sub_func_uint16_t_u_u((*l_93), l_360))) >= (l_178 < 0x3724L)) < 0xFE57L)) , ((*l_93) ^ (-8L)));
        for (l_78 = 0; (l_78 > (-16)); l_78 = safe_sub_func_int16_t_s_s(l_78, 7))
        {
            int *l_363 = &l_301;
            int *l_364 = &l_178;
            int *l_365 = &g_67;
            int *l_366 = &l_88;
            int *l_367 = &l_301;
            int *l_368 = (void*)0;
            int *l_369 = &l_172;
            int *l_370 = &g_67;
            int *l_371 = &l_164;
            int *l_373 = &l_88;
            int *l_374 = &g_149;
            int *l_375 = &l_172;
            int *l_376 = (void*)0;
            int *l_377 = &l_164;
            int *l_378 = &l_178;
            int l_379 = 1L;
            int *l_380 = &l_164;
            int *l_381 = (void*)0;
            int *l_382 = &l_172;
            int *l_383 = &g_67;
            int *l_384 = &g_149;
            int *l_385 = (void*)0;
            int *l_386 = &l_379;
            int *l_387 = &l_379;
            int *l_388 = &l_88;
            int *l_389 = (void*)0;
            int *l_390 = &l_372;
            int *l_391 = &l_178;
            int *l_392 = &l_301;
            int *l_393 = &g_83;
            int *l_394 = &l_88;
            int *l_395 = &l_379;
            int *l_396 = &g_149;
            int *l_397 = &l_88;
            int *l_398 = &g_67;
            int *l_399 = &g_149;
            int *l_400 = (void*)0;
            l_401++;
        }
        for (l_254 = 0; (l_254 > 39); l_254 = safe_add_func_uint8_t_u_u(l_254, 4))
        {
            int *l_406 = &g_149;
            int *l_407 = &l_301;
            int *l_408 = &l_178;
            int *l_409 = &g_83;
            int *l_410 = &l_301;
            int *l_411 = &l_301;
            int *l_412 = &l_179;
            int *l_413 = &l_372;
            int *l_414 = &l_178;
            int *l_415 = &l_164;
            int *l_416 = &l_172;
            int *l_417 = &g_83;
            int *l_418 = (void*)0;
            int *l_419 = &l_179;
            int *l_420 = &l_178;
            int *l_421 = &g_67;
            int *l_422 = &l_178;
            int *l_423 = &l_178;
            int *l_424 = (void*)0;
            int *l_425 = (void*)0;
            int *l_426 = &l_88;
            int *l_427 = &l_88;
            int l_428 = 0xD59963E9L;
            int *l_429 = (void*)0;
            int *l_430 = &l_178;
            int *l_431 = (void*)0;
            int *l_432 = &g_149;
            int l_433 = (-2L);
            int *l_434 = &g_83;
            int *l_435 = &g_149;
            int l_436 = 0x28677C6AL;
            int *l_437 = (void*)0;
            int *l_438 = &g_67;
            int *l_439 = &g_149;
            int *l_440 = (void*)0;
            int *l_441 = &l_301;
            int *l_442 = (void*)0;
            int *l_443 = &l_164;
            int *l_444 = &l_88;
            int *l_445 = &l_178;
            int *l_446 = &l_164;
            int *l_448 = &g_149;
            int *l_449 = &l_436;
            int *l_451 = &l_172;
            int *l_452 = &l_433;
            int *l_453 = (void*)0;
            int *l_454 = &l_436;
            int *l_455 = &g_83;
            int *l_456 = (void*)0;
            int *l_457 = &l_436;
            int *l_458 = &l_301;
            int *l_459 = &l_178;
            int *l_460 = &l_172;
            int *l_461 = (void*)0;
            int *l_462 = &l_172;
            int *l_463 = (void*)0;
            int *l_464 = &l_301;
            int *l_465 = &l_172;
            int *l_466 = &g_149;
            int *l_467 = &l_372;
            int *l_468 = &g_83;
            int l_469 = 1L;
            int *l_470 = &l_178;
            int *l_472 = &l_164;
            int *l_473 = &l_172;
            int *l_474 = &l_372;
            int *l_475 = &l_301;
            int *l_476 = &g_149;
            int *l_477 = &l_372;
            int *l_479 = &l_164;
            int *l_480 = &l_469;
            (*l_93) = g_83;
            g_482--;
            if ((*l_93))
                continue;
            for (g_103 = 15; (g_103 > (-5)); g_103--)
            {
                unsigned l_487 = 4294967291UL;
                const unsigned short l_494 = 0x4D7BL;
                (*l_430) = ((*l_464) = ((*l_449) = ((*p_63) , ((l_487 = p_60) == (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(g_253, (safe_rshift_func_uint8_t_u_u(246UL, 3)))) || ((*p_63) = ((l_494 <= (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(0xCBL, 5)), ((*p_63) && 65530UL))), 2)) == ((0x7481L | (-1L)) | g_106)), 0))) >= l_494))), l_503))))));
            }
        }
    }
    else
    {
        int *l_504 = &g_67;
        int **l_505 = &l_504;
        (*g_66) = p_60;
        (*l_505) = l_504;
    }

    ;

    ;
    return p_60;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1346, "g_1346", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    transparent_crc(g_1723, "g_1723", print_hash_value);
    transparent_crc(g_1876, "g_1876", print_hash_value);
    transparent_crc(g_1925, "g_1925", print_hash_value);
    transparent_crc(g_1926, "g_1926", print_hash_value);
    transparent_crc(g_1934, "g_1934", print_hash_value);
    transparent_crc(g_1960, "g_1960", print_hash_value);
    transparent_crc(g_1988, "g_1988", print_hash_value);
    transparent_crc(g_2030, "g_2030", print_hash_value);
    transparent_crc(g_2087, "g_2087", print_hash_value);
    transparent_crc(g_2233, "g_2233", print_hash_value);
    transparent_crc(g_2284, "g_2284", print_hash_value);
    transparent_crc(g_2381, "g_2381", print_hash_value);
    transparent_crc(g_2397, "g_2397", print_hash_value);
    transparent_crc(g_2402, "g_2402", print_hash_value);
    transparent_crc(g_2471, "g_2471", print_hash_value);
    transparent_crc(g_2524, "g_2524", print_hash_value);
    transparent_crc(g_2648, "g_2648", print_hash_value);
    transparent_crc(g_2658, "g_2658", print_hash_value);
    transparent_crc(g_2665, "g_2665", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
