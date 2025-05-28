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



static int g_11 = 0L;
static int g_41 = 0x40C9BA5BL;
static unsigned g_51 = 4294967286UL;
static int g_85 = 1L;
static int *g_89 = (void*)0;
static int **g_88 = &g_89;
static unsigned g_93 = 0x3144D991L;
static unsigned short g_94 = 0x1EBBL;
static char g_96 = 0x8FL;
static unsigned char g_99 = 0x13L;
static char g_100 = 0x9FL;
static short g_114 = 2L;
static int g_120 = 0xE83D4860L;
static int g_122 = (-1L);
static int ***g_197 = &g_88;
static int ****g_196 = &g_197;
static unsigned g_235 = 4294967290UL;
static unsigned char *g_239 = (void*)0;
static unsigned char **g_238 = &g_239;
static int g_260 = 0x09DD6967L;
static int g_305 = 1L;
static short g_353 = (-6L);
static char g_363 = 8L;
static short g_364 = 4L;
static unsigned g_508 = 0x37DE6D6BL;
static unsigned g_521 = 0xD6E749ECL;
static int *g_544 = &g_122;
static unsigned short g_561 = 0x43F8L;
static int *g_564 = &g_11;
static int g_573 = 0xDFAD66BDL;
static int g_652 = 0x9A14BB42L;
static char g_672 = 0xE3L;
static unsigned g_677 = 4UL;
static unsigned char *g_755 = &g_99;
static short *g_777 = &g_114;
static short **g_776 = &g_777;
static short ***g_775 = &g_776;
static int *g_813 = &g_652;
static int **g_812 = &g_813;
static short g_915 = 0x098DL;
static unsigned short g_928 = 0x3F61L;
static unsigned *g_952 = &g_521;
static int g_1061 = 0x4DFE14C3L;
static int g_1072 = 1L;
static unsigned short g_1084 = 0xF021L;
static unsigned short g_1088 = 6UL;
static int g_1093 = 0x5770C8B2L;
static char *g_1184 = (void*)0;
static unsigned char g_1192 = 254UL;
static unsigned char g_1293 = 8UL;
static char g_1396 = 6L;
static unsigned char g_1520 = 7UL;
static unsigned short g_1610 = 1UL;
static unsigned g_1671 = 1UL;
static unsigned char g_1821 = 1UL;
static char g_1841 = 0x44L;
static unsigned char g_1936 = 0xBDL;
static unsigned g_1969 = 4294967295UL;
static int g_2029 = (-1L);
static int g_2118 = 0x380E5D15L;
static int g_2252 = 1L;
static int g_2254 = 0x98107B9EL;
static char g_2269 = 1L;
static unsigned g_2283 = 0UL;
static unsigned char g_2383 = 1UL;
static int *g_2403 = &g_1093;
static unsigned char ***g_2442 = &g_238;
static unsigned char ****g_2441 = &g_2442;
static unsigned char *****g_2440 = &g_2441;
static int g_2536 = 0xEBE187ACL;
static char g_2562 = 0L;
static char g_2564 = 0x91L;
static int g_2570 = 0x29065711L;
static unsigned g_2571 = 4294967295UL;
static int g_2591 = 0xDF6B2137L;
static char **g_2608 = &g_1184;
static char ***g_2607 = &g_2608;
static char g_2666 = 0xA9L;
static int ****g_2723 = &g_197;



static unsigned func_1(void);
static int * func_2(unsigned char p_3, int * p_4);
static unsigned func_8(unsigned p_9);
static int * func_13(int * p_14, int * p_15);
static unsigned short func_17(unsigned p_18, int ** p_19);
static unsigned short func_56(short p_57, int p_58, int * p_59);
static short func_64(unsigned char p_65, int * p_66, unsigned short p_67, int p_68, unsigned p_69);
static int * func_70(int p_71, int p_72, unsigned p_73, char p_74);
static unsigned func_75(char p_76, int p_77, unsigned char p_78);
static int func_79(int * p_80);
static unsigned func_1(void)
{
    int l_5 = 0xF665683CL;
    int l_1324 = 0x33A3600AL;
    int **l_2658 = &g_2403;
    int l_2659 = 0xF7092CCAL;
    int *l_2721 = (void*)0;
    int *l_2722 = &g_85;
    int **l_2729 = &g_544;
    int *l_2730 = (void*)0;
    (*l_2658) = func_2(l_5, ((safe_lshift_func_uint8_t_u_s(((1UL && 0x3707L) | (((func_8(l_5) , (l_5 != (l_5 , (l_5 || ((!(l_1324 = (((safe_mul_func_int8_t_s_s((func_8((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(0x02L, 1L)) >= 0x0BL) >= 0xF8L), 0x8FL))) , (-9L)), 1UL)) , 0x91L) != l_5))) == g_93))))) , l_5) , 0x9AL)), 6)) , (*g_88)));
    if ((l_5 , (l_2659 & 0x55L)))
    {
        char l_2660 = (-6L);
        return l_2660;
    }
    else
    {
        unsigned char l_2661 = 0xC9L;
        unsigned l_2662 = 0xC2E3714CL;
        short l_2665 = (-4L);
        int l_2667 = (-1L);
        int l_2672 = 0xF91811ECL;
        if (l_2661)
        {
            return l_2662;
        }
        else
        {
            (*g_544) ^= l_2661;
        }
        if ((safe_add_func_int16_t_s_s(l_2661, l_2665)))
        {
            unsigned l_2693 = 1UL;
            int *l_2700 = (void*)0;
            int l_2728 = (-1L);
            int l_2731 = 0x75C08F92L;
            if (g_2666)
            {
                (*g_564) = (*g_564);
            }
            else
            {
                int *l_2668 = &g_1093;
                int *l_2669 = (void*)0;
                int *l_2670 = &g_85;
                int *l_2671 = &g_1093;
                int *l_2673 = &g_2591;
                int *l_2674 = &g_122;
                int *l_2675 = &l_2667;
                int *l_2676 = &l_1324;
                int l_2677 = 0x88C9164AL;
                int *l_2678 = &g_2118;
                int *l_2679 = &l_2667;
                int *l_2680 = &g_2591;
                int *l_2681 = (void*)0;
                int *l_2682 = &g_85;
                int *l_2683 = &g_11;
                int *l_2684 = &l_5;
                int *l_2685 = (void*)0;
                int *l_2686 = (void*)0;
                int l_2687 = 0xE8D5C5AFL;
                int *l_2688 = &l_2667;
                int *l_2689 = (void*)0;
                int *l_2690 = &g_2570;
                int *l_2691 = &l_5;
                int *l_2692 = &g_122;
                char *l_2701 = &g_100;
                unsigned short *l_2702 = &g_94;
                int *l_2717 = &g_85;
                ++l_2693;
                for (g_2254 = (-4); (g_2254 < 25); g_2254++)
                {
                    (*l_2691) ^= 0L;
                    (*l_2678) ^= l_2662;
                }
                (*l_2668) = (((*l_2702) = (safe_mul_func_uint8_t_u_u(((*g_755) = l_2693), (((*l_2701) ^= l_2661) || 0x59L)))) || ((*g_777) = ((*g_777) != (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((!(+(safe_sub_func_uint32_t_u_u(((**g_812) , (safe_add_func_int8_t_s_s((*l_2679), (g_96 >= (*l_2675))))), (*g_564))))), l_2661)), (*g_777))))));
                for (g_2383 = 0; (g_2383 == 49); ++g_2383)
                {
                    int l_2718 = 0x60848D7BL;
                    (*l_2658) = (*l_2658);
                    l_2686 = l_2700;
                    for (g_1841 = 0; (g_1841 > (-15)); --g_1841)
                    {
                        (*l_2658) = &l_2677;
                        (*l_2678) &= (l_2718 != (((*g_952) , (safe_rshift_func_uint8_t_u_s(248UL, 2))) >= (*l_2675)));
                    }
                    l_2722 = l_2721;
                }
            }
            l_2667 &= ((***g_775) , (l_2665 ^ ((((&g_197 != g_2723) <= (((*g_196) = (*g_196)) == &l_2658)) != ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x8FL, l_2672)), g_2118)) <= (-1L))) || l_2728)));
            l_2731 &= ((l_2665 , 0xD7L) ^ ((*g_952) , ((!(l_2662 & (((**l_2729) < ((*g_755) >= l_2662)) , g_1969))) , l_2661)));
            return (*g_952);
        }
        else
        {
            int *l_2732 = &g_260;
            int *l_2733 = &l_2672;
            int *l_2734 = (void*)0;
            int *l_2735 = (void*)0;
            int *l_2736 = &g_2570;
            int *l_2737 = &g_2591;
            int *l_2738 = &l_5;
            int *l_2739 = &l_5;
            int *l_2740 = &g_260;
            int *l_2741 = &l_5;
            int l_2742 = 0x32210ECEL;
            int *l_2743 = &g_260;
            int *l_2744 = &g_120;
            int *l_2745 = &g_122;
            int *l_2746 = &l_2667;
            int *l_2747 = (void*)0;
            int *l_2748 = &g_1093;
            int *l_2749 = &g_11;
            int *l_2750 = &g_2570;
            int *l_2751 = &l_1324;
            int *l_2752 = &g_11;
            int *l_2753 = (void*)0;
            int *l_2754 = &g_2118;
            int *l_2755 = &g_2570;
            int *l_2756 = &l_1324;
            int *l_2757 = (void*)0;
            int *l_2758 = &g_122;
            int l_2759 = 0L;
            int *l_2760 = (void*)0;
            int l_2761 = 0x4F80265EL;
            int *l_2762 = &l_2761;
            int *l_2763 = &l_2759;
            unsigned char l_2764 = 0x42L;
            ++l_2764;
        }
    }
    for (g_652 = (-18); (g_652 == 1); g_652 = safe_add_func_int8_t_s_s(g_652, 2))
    {
        int l_2775 = 0xAABEC42AL;
        int *l_2776 = &g_1093;
        (*g_544) ^= (((safe_mod_func_int8_t_s_s(g_521, (((*g_952) < 0L) || 0x77BB6F13L))) && (*l_2776)) >= (*l_2776));
    }
    return (*g_952);
}







static int * func_2(unsigned char p_3, int * p_4)
{
    char *l_1325 = &g_100;
    int l_1329 = 0L;
    int l_1334 = 1L;
    int l_1340 = 0L;
    int l_1354 = 6L;
    int l_1366 = 0L;
    int l_1377 = 0x0FC50309L;
    int *l_1395 = &g_122;
    unsigned **l_1398 = &g_952;
    unsigned ***l_1397 = &l_1398;
    short *l_1614 = &g_915;
    short ***l_1651 = (void*)0;
    unsigned l_1677 = 0x42199604L;
    int *l_1839 = &g_11;
    int ***l_1989 = &g_88;
    unsigned char l_1998 = 0x8AL;
    unsigned l_2110 = 0x8142E46FL;
    unsigned char **l_2140 = &g_755;
    short *l_2147 = &g_915;
    unsigned short l_2315 = 0xD9D9L;
    unsigned l_2372 = 0xDF3CE4DFL;
    int l_2627 = 0x2F94E7B9L;
    short l_2638 = (-10L);
    int l_2653 = 0L;
lbl_2336:
    if (((((*g_813) = (**g_812)) , l_1325) != (void*)0))
    {
        int l_1326 = 0L;
        int *l_1327 = (void*)0;
        int *l_1328 = &l_1326;
        int *l_1330 = &g_1093;
        int *l_1331 = &g_120;
        int *l_1332 = &g_260;
        int *l_1333 = &g_260;
        int *l_1335 = &l_1334;
        int *l_1336 = &g_120;
        int *l_1337 = &g_120;
        int *l_1338 = &l_1326;
        int *l_1339 = &g_120;
        int l_1341 = (-5L);
        int *l_1342 = (void*)0;
        int *l_1343 = &g_11;
        int *l_1344 = &g_120;
        int *l_1345 = (void*)0;
        int *l_1346 = &l_1340;
        int *l_1347 = (void*)0;
        int *l_1348 = &l_1334;
        int *l_1349 = (void*)0;
        int *l_1350 = &g_260;
        int *l_1351 = (void*)0;
        int *l_1352 = &g_122;
        int *l_1353 = &g_260;
        int l_1355 = (-8L);
        int *l_1356 = &l_1354;
        int *l_1357 = &g_1093;
        int *l_1358 = &g_120;
        int *l_1359 = &l_1326;
        int *l_1360 = &g_85;
        int l_1361 = 0xA90A5877L;
        int *l_1362 = (void*)0;
        int *l_1363 = (void*)0;
        int *l_1364 = (void*)0;
        int *l_1365 = &l_1355;
        int *l_1367 = &l_1326;
        int *l_1368 = (void*)0;
        int *l_1369 = &l_1354;
        int *l_1370 = &g_120;
        int *l_1371 = &l_1341;
        int *l_1372 = &l_1329;
        int *l_1373 = &l_1361;
        int l_1374 = 0x7DBEDCBDL;
        int *l_1375 = &g_122;
        int *l_1376 = &l_1326;
        int l_1378 = 0x183FB0A1L;
        int l_1379 = (-1L);
        int *l_1380 = &l_1361;
        int *l_1381 = &l_1340;
        int *l_1382 = &g_122;
        int *l_1383 = &l_1341;
        int *l_1384 = (void*)0;
        int *l_1385 = &g_120;
        int *l_1386 = &l_1341;
        int *l_1387 = &l_1377;
        int *l_1388 = (void*)0;
        int *l_1389 = &l_1334;
        unsigned short l_1390 = 0x68F6L;
        (*g_564) = l_1326;
        --l_1390;
    }
    else
    {
        for (g_364 = 0; (g_364 == 25); ++g_364)
        {
            (*g_88) = l_1395;
        }
    }
    (*l_1395) &= (p_3 , g_1396);
    if (((void*)0 != l_1397))
    {
        char *l_1401 = &g_363;
        unsigned l_1405 = 0xDDB1C0CBL;
        int l_1423 = 1L;
        int l_1456 = 0x9C886904L;
        int l_1459 = 0x919837B6L;
        int l_1580 = 0x93CF65A1L;
        int l_1605 = 0x9BB5B4B3L;
        short *l_1613 = (void*)0;
        int *l_1678 = &g_120;
lbl_1676:
        if ((safe_mul_func_int16_t_s_s(((0xAAL != ((l_1401 == l_1401) != ((*g_544) ^ (*l_1395)))) , (safe_unary_minus_func_int16_t_s(((((**l_1398) = 4294967295UL) & (safe_mul_func_int8_t_s_s(0L, p_3))) | (*l_1395))))), 0x6445L)))
        {
            unsigned char *l_1406 = &g_1293;
            int l_1415 = 0xBC08AB45L;
            unsigned short l_1422 = 1UL;
            int l_1470 = (-4L);
            int l_1478 = (-4L);
            int l_1483 = 0x1221782FL;
            int l_1489 = 0xCB662E99L;
            int l_1500 = 0x2DA7C418L;
            int l_1504 = (-7L);
            int l_1506 = 8L;
            int **l_1525 = &g_89;
            int ***l_1524 = &l_1525;
            if (((l_1405 ^ (l_1406 == (p_3 , l_1325))) && (!(safe_mul_func_uint16_t_u_u(((((void*)0 == &p_4) >= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_1405, (func_56(l_1405, l_1405, p_4) && 1UL))), g_41)), l_1405))) <= l_1405), l_1415)))))
            {
                int *l_1424 = &l_1377;
                int *l_1425 = &l_1366;
                int *l_1426 = &l_1366;
                int l_1427 = (-8L);
                int *l_1428 = (void*)0;
                int *l_1429 = &l_1366;
                int *l_1430 = &g_1093;
                int *l_1431 = &g_260;
                int *l_1432 = &l_1423;
                int *l_1433 = &g_85;
                int *l_1434 = (void*)0;
                int *l_1435 = &l_1334;
                int *l_1436 = &g_1093;
                int *l_1437 = &l_1366;
                int *l_1438 = &l_1334;
                int *l_1439 = &l_1377;
                int *l_1440 = &l_1366;
                int *l_1441 = &g_85;
                int *l_1442 = &g_120;
                int *l_1443 = (void*)0;
                int *l_1444 = (void*)0;
                int *l_1445 = &l_1354;
                int *l_1446 = &l_1334;
                int *l_1447 = (void*)0;
                int *l_1448 = &l_1427;
                int *l_1449 = &g_260;
                int *l_1450 = (void*)0;
                int *l_1451 = (void*)0;
                int *l_1452 = &l_1377;
                int *l_1453 = &g_120;
                int *l_1454 = &l_1354;
                int *l_1455 = &l_1366;
                int *l_1457 = &l_1340;
                int *l_1458 = &g_122;
                int *l_1460 = &l_1329;
                int *l_1461 = &l_1340;
                int *l_1462 = &l_1415;
                int *l_1463 = (void*)0;
                int *l_1464 = &l_1423;
                int *l_1465 = &l_1334;
                int *l_1466 = &l_1329;
                int *l_1467 = (void*)0;
                int *l_1468 = &g_85;
                int *l_1469 = &l_1377;
                int *l_1471 = &l_1470;
                int *l_1472 = &l_1459;
                int *l_1473 = &l_1329;
                int *l_1474 = (void*)0;
                int *l_1475 = &l_1329;
                int *l_1476 = (void*)0;
                int *l_1477 = &l_1329;
                int *l_1479 = &l_1377;
                int *l_1480 = &g_1093;
                int *l_1481 = (void*)0;
                int *l_1482 = &l_1377;
                int l_1484 = (-1L);
                int *l_1485 = &l_1456;
                int *l_1486 = &g_120;
                int *l_1487 = &l_1377;
                int l_1488 = 0x82F1C53CL;
                int *l_1490 = &l_1366;
                int *l_1491 = &g_85;
                int *l_1492 = &l_1340;
                int *l_1493 = &l_1484;
                int *l_1494 = &l_1329;
                int *l_1495 = (void*)0;
                int *l_1496 = (void*)0;
                int *l_1497 = (void*)0;
                int *l_1498 = &g_260;
                int *l_1499 = &l_1483;
                int *l_1501 = &g_260;
                int *l_1502 = &l_1415;
                int *l_1503 = &g_1093;
                int *l_1505 = &l_1459;
                int *l_1507 = &g_122;
                int *l_1508 = &l_1484;
                int *l_1509 = &l_1334;
                int *l_1510 = &l_1478;
                int *l_1511 = (void*)0;
                int *l_1512 = (void*)0;
                int *l_1513 = &l_1456;
                int *l_1514 = &g_120;
                int *l_1515 = &l_1483;
                int *l_1516 = &l_1489;
                int *l_1517 = (void*)0;
                int *l_1518 = &l_1427;
                int *l_1519 = &g_260;
                (*l_1395) &= ((*g_755) == ((0x46D6277DL != l_1415) | ((safe_mul_func_int16_t_s_s(l_1415, g_1061)) > (0L == (safe_add_func_uint32_t_u_u(l_1422, p_3))))));
                g_1520--;
            }
            else
            {
                int *l_1523 = (void*)0;
                return l_1523;
            }
            l_1456 = ((p_3 , ((*l_1524) = ((**g_196) = &l_1395))) != (void*)0);
        }
        else
        {
            unsigned char l_1535 = 0x29L;
            int *l_1536 = &g_122;
            int *l_1537 = &g_1093;
            int *l_1538 = &l_1377;
            int *l_1539 = &l_1366;
            int *l_1540 = &l_1340;
            int *l_1541 = &l_1366;
            int *l_1542 = &l_1459;
            int *l_1543 = &l_1377;
            int *l_1544 = &l_1354;
            int *l_1545 = &g_122;
            int *l_1546 = &l_1377;
            int *l_1547 = &g_11;
            int *l_1548 = &l_1334;
            int *l_1549 = &l_1366;
            int *l_1550 = &g_1093;
            int *l_1551 = &l_1354;
            int *l_1552 = &g_85;
            int *l_1553 = &l_1354;
            int *l_1554 = &l_1329;
            int *l_1555 = (void*)0;
            int *l_1556 = (void*)0;
            int l_1557 = 1L;
            int *l_1558 = &g_122;
            int *l_1559 = &g_122;
            int *l_1560 = &l_1557;
            int *l_1561 = &l_1377;
            int *l_1562 = &l_1366;
            int *l_1563 = &l_1354;
            int *l_1564 = &l_1340;
            int *l_1565 = &l_1366;
            int *l_1566 = &g_11;
            int *l_1567 = &l_1334;
            int *l_1568 = &l_1354;
            int *l_1569 = &l_1354;
            int *l_1570 = &g_85;
            int *l_1571 = &l_1329;
            int *l_1572 = &g_120;
            int *l_1573 = &l_1456;
            int *l_1574 = &l_1456;
            int *l_1575 = (void*)0;
            int *l_1576 = &l_1557;
            int *l_1577 = &g_120;
            int *l_1578 = &l_1456;
            int *l_1579 = &l_1557;
            int *l_1581 = &g_11;
            int *l_1582 = (void*)0;
            int *l_1583 = &g_260;
            int *l_1584 = &l_1354;
            int *l_1585 = &l_1459;
            int *l_1586 = &g_260;
            short l_1587 = 0x076FL;
            int *l_1588 = (void*)0;
            int *l_1589 = &l_1354;
            int *l_1590 = &g_260;
            int *l_1591 = (void*)0;
            int *l_1592 = &g_120;
            int *l_1593 = &l_1354;
            int *l_1594 = &g_11;
            int *l_1595 = &l_1377;
            int *l_1596 = &g_120;
            int *l_1597 = (void*)0;
            int *l_1598 = (void*)0;
            int *l_1599 = &g_11;
            int *l_1600 = (void*)0;
            int *l_1601 = &g_260;
            int *l_1602 = &l_1329;
            int *l_1603 = &l_1329;
            int *l_1604 = (void*)0;
            int *l_1606 = (void*)0;
            int *l_1607 = &l_1377;
            int *l_1608 = &l_1340;
            int *l_1609 = &l_1354;
            (*l_1395) = ((l_1423 == (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((*g_952), (g_99 >= ((safe_mul_func_int8_t_s_s((*l_1395), (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((*g_564) = (*l_1395)))), (((**g_776) = ((*g_544) < (0x7B7EL == p_3))) , l_1535))))) <= 1UL)))) && l_1535), 0x6715L))) && l_1459);
            g_1610++;
            if ((((-4L) > 65528UL) , ((l_1614 = l_1613) != ((*g_776) = (**g_775)))))
            {
                int *l_1629 = &l_1557;
                int *l_1652 = (void*)0;
                unsigned short l_1668 = 1UL;
                (**g_197) = &l_1340;
                for (g_93 = 0; (g_93 >= 33); ++g_93)
                {
                    unsigned char l_1628 = 0x68L;
                    unsigned *l_1630 = &l_1405;
                    (***g_196) = (***g_196);
                    if (g_11)
                        goto lbl_1676;
                    (***g_196) = (**g_197);
                    for (g_1072 = 0; (g_1072 < (-6)); g_1072--)
                    {
                        int l_1646 = 0x1D8D1604L;
                    }
                    (*l_1607) = 0xFC431D97L;
                }
                for (l_1456 = 0; (l_1456 <= 28); l_1456++)
                {
                    short l_1655 = (-1L);
                    int l_1656 = 0x464A0D96L;
                    int l_1657 = (-8L);
                    int *l_1658 = &l_1366;
                    int *l_1659 = &g_1093;
                    int *l_1660 = &g_11;
                    int *l_1661 = &l_1557;
                    int *l_1662 = &l_1557;
                    int *l_1663 = &g_1093;
                    int *l_1664 = &l_1423;
                    int *l_1665 = &l_1580;
                    int *l_1666 = (void*)0;
                    int *l_1667 = &l_1354;
                }
                (*l_1573) = ((g_100 &= ((*l_1401) = (p_3 != (((*g_777) == (+(g_1671 <= (safe_sub_func_uint16_t_u_u(l_1405, (((void*)0 != &l_1587) <= (!((((**l_1397) = l_1566) != ((((((*l_1629) , ((*g_544) > g_235)) != g_1671) > 1UL) > p_3) , &l_1405)) != g_915)))))))) & 0x0BL)))) & 0x9FL);
            }
            else
            {
                unsigned short *l_1674 = &g_1084;
                unsigned short *l_1675 = &g_561;
                (*l_1559) ^= (((*l_1675) = ((*l_1674) = (g_1293 & 0x9C76L))) , 0x1CEFE36DL);
                (*l_1545) ^= (*g_564);
            }
        }
        l_1678 = func_70((*l_1395), (*g_564), p_3, l_1677);
        (***g_196) = &l_1456;
    }
    else
    {
        char l_1694 = 0xF5L;
        unsigned **l_1706 = &g_952;
        short l_1718 = 0L;
        int l_1761 = (-4L);
        int l_1762 = 8L;
        int l_1763 = 0x893BB3DCL;
        int l_1764 = 0L;
        int l_1810 = 9L;
        int ****l_1853 = &g_197;
        int l_1981 = (-9L);
        char l_2026 = 0x6AL;
        unsigned char l_2105 = 0xE3L;
        unsigned short *l_2169 = &g_94;
        unsigned l_2300 = 0x11C2370CL;
        unsigned l_2465 = 0xAF300889L;
        unsigned char l_2479 = 0x28L;
        char l_2611 = 0L;
        unsigned short *l_2626 = &g_1610;
        unsigned ****l_2628 = &l_1397;
        for (g_120 = 0; (g_120 >= (-15)); g_120--)
        {
            unsigned char l_1685 = 247UL;
            int l_1877 = 0x682E8D6FL;
            int l_1880 = (-1L);
            int l_1896 = (-3L);
            int l_1905 = 1L;
        }
        if ((safe_unary_minus_func_uint32_t_u(p_3)))
        {
            unsigned l_1991 = 9UL;
            int l_1992 = (-1L);
            char l_2009 = (-1L);
            unsigned l_2012 = 0x3F07AB06L;
            int l_2075 = 0x457E040FL;
            int l_2089 = 0L;
            for (l_1761 = (-28); (l_1761 >= 13); ++l_1761)
            {
                int ****l_1990 = &l_1989;
                unsigned short l_1993 = 0x0159L;
                int l_2060 = 2L;
                int l_2085 = 0x05F48628L;
                int l_2091 = 1L;
                l_1992 |= (((((func_8((p_3 , 0xC80E063EL)) , (((safe_lshift_func_uint16_t_u_u(func_17((((*g_196) = (*g_196)) != ((*l_1990) = l_1989)), &p_4), (((-1L) != p_3) <= (*g_564)))) == 1UL) , (*l_1839))) == p_3) , (*l_1395)) | l_1991) | p_3);
                if (l_1993)
                {
                    char l_2005 = (-8L);
                    int l_2010 = 0xA5487EFEL;
                    int *l_2011 = &l_1329;
                    for (g_1671 = 0; (g_1671 < 49); g_1671 = safe_add_func_uint16_t_u_u(g_1671, 1))
                    {
                        unsigned short *l_2003 = &g_561;
                        unsigned short *l_2004 = &l_1993;
                        int l_2008 = (-8L);
                        (*l_1839) = (safe_mod_func_int8_t_s_s(3L, (g_1520 ^= (l_1998 != (safe_sub_func_int8_t_s_s(func_56(p_3, ((func_64((l_2010 = func_64((safe_mod_func_int32_t_s_s((((*l_2004) = ((*l_2003) = g_1841)) || (func_75(((*l_1325) = l_2005), p_3, (((*g_755) , func_64(l_2008, p_4, l_2005, l_2009, l_2009)) >= 0UL)) && 0L)), 0x5A88AE5EL)), &g_120, g_93, l_1991, g_508)), p_4, p_3, (**g_812), l_2008) ^ p_3) , 0xA8877812L), l_2011), g_11))))));
                    }
                }
                else
                {
                    char l_2019 = 0xF9L;
                    int l_2033 = (-1L);
                    int l_2049 = (-7L);
                    int l_2100 = 9L;
                    l_2012++;
                    (*l_1839) ^= ((l_1810 < (0x26L != p_3)) , (((*g_777) ^ ((*g_755) <= ((safe_sub_func_int8_t_s_s(p_3, (((**g_776) , (safe_sub_func_int16_t_s_s(0x4C3DL, p_3))) , l_2019))) || (*l_1395)))) != (*g_952)));
                    (*l_1839) = (safe_rshift_func_uint16_t_u_u((p_3 == (((*g_952) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(func_64(l_2019, (*g_88), (&g_1184 == (void*)0), l_2026, (safe_lshift_func_uint16_t_u_s(g_1821, 12))), 0)), 14))) != g_2029)), 3));
                    for (g_2029 = 0; (g_2029 < (-13)); g_2029 = safe_sub_func_uint32_t_u_u(g_2029, 7))
                    {
                        int l_2032 = 1L;
                        int *l_2034 = &l_1366;
                        int *l_2035 = &g_11;
                        int *l_2036 = &l_1377;
                        int l_2037 = 0L;
                        int *l_2038 = &l_2033;
                        int *l_2039 = &l_1329;
                        int *l_2040 = &g_1093;
                        int *l_2041 = (void*)0;
                        int *l_2042 = &l_1762;
                        int *l_2043 = &g_260;
                        int *l_2044 = &l_2037;
                        int l_2045 = 0x876F22BCL;
                        int *l_2046 = &l_1377;
                        int *l_2047 = &l_2033;
                        int *l_2048 = &g_120;
                        int *l_2050 = &l_1366;
                        int *l_2051 = &l_1763;
                        int *l_2052 = &l_2033;
                        int *l_2053 = &l_1992;
                        int *l_2054 = &l_1992;
                        int *l_2055 = &g_85;
                        int *l_2056 = &l_1366;
                        int *l_2057 = &l_1762;
                        int *l_2058 = &l_2045;
                        int *l_2059 = &l_1764;
                        int *l_2061 = (void*)0;
                        int *l_2062 = &l_2033;
                        int *l_2063 = (void*)0;
                        int *l_2064 = &g_122;
                        int *l_2065 = &l_1981;
                        int *l_2066 = &l_1354;
                        int *l_2067 = &l_1763;
                        int l_2068 = (-3L);
                        int *l_2069 = &l_2045;
                        int *l_2070 = (void*)0;
                        int *l_2071 = &g_85;
                        int *l_2072 = &l_2060;
                        int *l_2073 = &l_1340;
                        int *l_2074 = &l_1981;
                        int *l_2076 = &g_120;
                        int *l_2077 = &l_1340;
                        int *l_2078 = &g_122;
                        int *l_2079 = &l_1810;
                        int *l_2080 = &l_1354;
                        int *l_2081 = &l_2060;
                        int *l_2082 = &g_85;
                        int *l_2083 = &g_260;
                        int *l_2084 = &l_2075;
                        int *l_2086 = (void*)0;
                        int *l_2087 = &l_2049;
                        int *l_2088 = &l_2085;
                        int *l_2090 = &l_1763;
                        int *l_2092 = &l_2089;
                        int *l_2093 = &l_2075;
                        int *l_2094 = &g_85;
                        int *l_2095 = &g_85;
                        int *l_2096 = &l_2075;
                        int *l_2097 = (void*)0;
                        int *l_2098 = &l_2089;
                        int *l_2099 = &l_2068;
                        int *l_2101 = &l_1763;
                        int *l_2102 = &l_2060;
                        int *l_2103 = &l_1981;
                        int *l_2104 = &l_1377;
                        --l_2105;
                        (*l_2090) = (1UL >= (((**g_812) = p_3) , ((!func_64(((p_3 || (safe_sub_func_uint32_t_u_u(((func_17(l_2110, &l_2051) >= g_677) , (*g_952)), (safe_unary_minus_func_uint8_t_u((p_3 , p_3)))))) ^ p_3), &l_1992, g_1841, l_2049, l_2019)) <= 0UL)));
                        return (**l_1989);
                    }
                }
                for (l_2009 = 0; (l_2009 >= (-12)); --l_2009)
                {
                    unsigned l_2114 = 7UL;
                    int *l_2138 = (void*)0;
                    int **l_2137 = &l_2138;
                    if (l_2114)
                    {
                        unsigned char l_2119 = 2UL;
                        unsigned short *l_2120 = (void*)0;
                        unsigned short *l_2121 = (void*)0;
                        unsigned short *l_2122 = &g_94;
                        unsigned short *l_2123 = (void*)0;
                        unsigned short *l_2124 = &g_561;
                        unsigned char ***l_2139 = &g_238;
                        l_2089 = (((*l_2124) ^= (((safe_unary_minus_func_int16_t_s((l_2009 , (**g_776)))) > (safe_lshift_func_uint16_t_u_s(((*l_2122) = (func_64(g_2118, (**g_197), (((0x2043L < ((p_3 >= l_2119) ^ (((l_2075 , ((&g_197 != &l_1989) , 0x00L)) >= p_3) , p_3))) || l_2119) < p_3), p_3, (*g_952)) != (***g_775))), 15))) >= g_353)) | (***g_775));
                        l_2091 &= ((l_2089 != (safe_rshift_func_int16_t_s_u(((*g_777) = ((*g_755) || (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_75((safe_mul_func_uint8_t_u_u(0x67L, (((*l_1839) | ((safe_add_func_uint8_t_u_u((((*g_812) = (*g_812)) == &g_1061), (((((*g_777) = (((+(((*l_2139) = ((((((safe_mod_func_uint8_t_u_u(p_3, (p_3 ^ (l_1354 = ((*l_1395) = (255UL | 0x76L)))))) || 4UL) <= 0x13500D57L) , g_812) == l_2137) , (void*)0)) == l_2140)) <= l_2119) ^ l_2114)) == p_3) <= p_3) && 4UL))) , (-6L))) , p_3))), p_3, p_3), p_3)), 0xECL)))), g_96))) , p_3);
                        (*l_1839) |= ((*g_544) > (p_3 & p_3));
                    }
                    else
                    {
                        int *l_2141 = &l_2060;
                        return p_4;
                    }
                    (***l_1990) = (***l_1990);
                }
                return (***g_196);
            }
            if ((*l_1839))
            {
                return (*g_88);
            }
            else
            {
                return p_4;
            }
        }
        else
        {
            unsigned char l_2149 = 0x91L;
            int *l_2156 = (void*)0;
            int l_2237 = 7L;
            char l_2320 = 0x3BL;
            int *l_2339 = &g_120;
            int *l_2340 = &g_1093;
            int *l_2341 = &l_1762;
            int *l_2342 = &l_1354;
            int *l_2343 = &g_85;
            int *l_2344 = (void*)0;
            int *l_2345 = &l_1763;
            int *l_2346 = &l_1366;
            int *l_2347 = &l_1762;
            int *l_2348 = (void*)0;
            int *l_2349 = &l_1334;
            int *l_2350 = (void*)0;
            int *l_2351 = (void*)0;
            int *l_2352 = &l_1354;
            int *l_2353 = &l_1763;
            int *l_2354 = &g_120;
            int *l_2355 = &l_1764;
            int *l_2356 = (void*)0;
            int *l_2357 = (void*)0;
            int *l_2358 = (void*)0;
            int *l_2359 = &l_1761;
            int *l_2360 = &g_1093;
            int *l_2361 = (void*)0;
            int *l_2362 = &l_1340;
            int *l_2363 = &g_1093;
            int *l_2364 = &g_122;
            int *l_2365 = (void*)0;
            int *l_2366 = &g_2118;
            int *l_2367 = &l_1377;
            int *l_2368 = &g_120;
            int *l_2369 = &g_120;
            int *l_2370 = &g_1093;
            int *l_2371 = &l_1340;
            int ***l_2375 = &g_88;
            int *****l_2381 = &l_1853;
            int *l_2475 = &g_2254;
            int l_2548 = 0xA2689B22L;
            unsigned l_2579 = 4294967295UL;
            int l_2582 = 0xAE3506B6L;
            for (g_672 = (-9); (g_672 <= 11); g_672 = safe_add_func_int8_t_s_s(g_672, 4))
            {
                char l_2148 = 0xBDL;
                unsigned char *l_2154 = &g_1192;
                int l_2155 = 0x3FF55707L;
                unsigned short *l_2163 = &g_1084;
                unsigned short *l_2164 = &g_561;
                (*g_544) = (safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u((((void*)0 == l_2147) != (l_2148 || ((p_3 ^ ((***g_775) , (l_2149 & (((*l_1395) != ((***g_775) || (*g_777))) <= 7L)))) , (*l_1839)))), 0x7863L))));
                l_2155 &= (safe_mul_func_uint8_t_u_u((*l_1395), ((*g_755) | (l_2149 & ((*g_952) != ((safe_add_func_int32_t_s_s(((**g_776) != ((((*l_2154) = p_3) , (*g_952)) != 4294967295UL)), l_2149)) , 0x501C5B6BL))))));
                if ((*g_544))
                    break;
                (*g_564) = ((1UL > p_3) && ((safe_rshift_func_int8_t_s_u(((*l_1325) = (((safe_rshift_func_uint16_t_u_u(((*l_2164) = ((*l_2163) ^= (safe_sub_func_uint16_t_u_u((~(p_3 && 0x81L)), 1L)))), 15)) ^ (safe_mul_func_uint8_t_u_u((p_3 == ((((safe_mod_func_int8_t_s_s(p_3, p_3)) == (*g_952)) , (void*)0) == l_2169)), p_3))) && p_3)), 0)) | (*g_544)));
            }
lbl_2453:
            if ((((*l_1614) |= (**g_776)) != (safe_unary_minus_func_uint16_t_u(g_93))))
            {
                short l_2180 = 0L;
                int l_2236 = 0L;
                int l_2253 = 0xCD8259B4L;
                unsigned l_2286 = 0UL;
                int ***l_2293 = (void*)0;
                unsigned l_2331 = 0UL;
                (*g_564) = (*g_564);
                for (g_364 = 22; (g_364 == (-18)); g_364 = safe_sub_func_uint8_t_u_u(g_364, 5))
                {
                    short l_2179 = 0L;
                    int **l_2181 = &l_1395;
                    int l_2295 = 0x3F5CCFEBL;
                    if (((safe_mul_func_int8_t_s_s(((~(safe_mod_func_uint32_t_u_u(((***l_1397) &= p_3), (--g_1671)))) > (l_2179 <= l_2180)), ((*g_544) & l_1764))) >= p_3))
                    {
                        int *l_2182 = &l_1334;
                        int *l_2183 = &l_1334;
                        int *l_2184 = &l_1377;
                        int *l_2185 = &g_120;
                        int *l_2186 = &l_1762;
                        int *l_2187 = (void*)0;
                        int *l_2188 = (void*)0;
                        int *l_2189 = &l_1366;
                        int *l_2190 = &g_2118;
                        int *l_2191 = &l_1763;
                        int *l_2192 = &l_1762;
                        int *l_2193 = (void*)0;
                        int *l_2194 = &g_122;
                        int *l_2195 = &g_260;
                        int *l_2196 = &l_1810;
                        int *l_2197 = &l_1377;
                        int *l_2198 = &l_1761;
                        int *l_2199 = &l_1762;
                        int *l_2200 = (void*)0;
                        int *l_2201 = (void*)0;
                        int *l_2202 = (void*)0;
                        int *l_2203 = &g_11;
                        int *l_2204 = (void*)0;
                        int *l_2205 = &g_11;
                        int *l_2206 = (void*)0;
                        int *l_2207 = &l_1329;
                        int *l_2208 = &g_122;
                        int *l_2209 = &g_120;
                        int *l_2210 = &l_1354;
                        int *l_2211 = &l_1810;
                        int *l_2212 = &l_1764;
                        int *l_2213 = &g_11;
                        int *l_2214 = &g_85;
                        int *l_2215 = &g_11;
                        int *l_2216 = &l_1377;
                        int *l_2217 = (void*)0;
                        int *l_2218 = &l_1810;
                        int *l_2219 = &l_1763;
                        int *l_2220 = (void*)0;
                        int *l_2221 = (void*)0;
                        int *l_2222 = &g_120;
                        int *l_2223 = &l_1340;
                        int *l_2224 = &g_120;
                        int *l_2225 = &g_122;
                        int *l_2226 = (void*)0;
                        int *l_2227 = &g_11;
                        int *l_2228 = &g_120;
                        int *l_2229 = &l_1329;
                        int *l_2230 = &l_1764;
                        int *l_2231 = &g_1093;
                        int *l_2232 = &l_1334;
                        int *l_2233 = &l_1762;
                        int *l_2234 = (void*)0;
                        int *l_2235 = &l_1354;
                        int *l_2238 = &l_1764;
                        int *l_2239 = &l_1354;
                        int *l_2240 = &l_2237;
                        int *l_2241 = (void*)0;
                        int *l_2242 = (void*)0;
                        int *l_2243 = &l_1366;
                        int *l_2244 = (void*)0;
                        int *l_2245 = (void*)0;
                        int l_2246 = (-1L);
                        int *l_2247 = &l_1763;
                        int *l_2248 = &l_1762;
                        int *l_2249 = &l_2246;
                        int *l_2250 = &g_260;
                        int *l_2251 = (void*)0;
                        int *l_2255 = &g_1093;
                        int *l_2256 = &l_1810;
                        int *l_2257 = &l_2237;
                        short l_2258 = 0L;
                        int *l_2259 = (void*)0;
                        int *l_2260 = &l_1810;
                        int *l_2261 = &l_2253;
                        int l_2262 = 0xC2CB821FL;
                        int *l_2263 = &l_1366;
                        int *l_2264 = &l_1810;
                        int *l_2265 = &l_1366;
                        int *l_2266 = &l_1810;
                        int *l_2267 = &l_1329;
                        int *l_2268 = &l_1981;
                        int *l_2270 = &l_1981;
                        int *l_2271 = &l_1761;
                        int *l_2272 = &l_2246;
                        int *l_2273 = &l_1366;
                        int *l_2274 = &l_1354;
                        int *l_2275 = &l_2253;
                        int *l_2276 = &g_85;
                        int *l_2277 = &l_1810;
                        int *l_2278 = &g_120;
                        int *l_2279 = &g_1093;
                        int *l_2280 = &l_2262;
                        int *l_2281 = &l_2253;
                        int *l_2282 = &l_1763;
                        --g_2283;
                        l_2286++;
                    }
                    else
                    {
                        short l_2294 = 0xA425L;
                        (*g_544) = ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_2293 != l_1989), (7L && (***g_775)))), 13)) , (((p_3 != ((((**l_1398) = l_2294) <= (((p_3 , (**l_2181)) < (g_1061 == p_3)) > g_915)) ^ l_2294)) <= l_2295) , (*g_544)));
                    }
                    (**l_2181) = ((safe_mul_func_int16_t_s_s(((+func_8((0UL < (safe_mul_func_int16_t_s_s(((***l_1853) != (***g_196)), (l_2300 , ((*l_1614) &= (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((**g_776), 2)) , (*l_1395)), ((**l_2140)--))))), (0x8B88FC29L <= ((*g_952) , 0x384013C3L))))))))))) < p_3), p_3)) , 0x3983B565L);
                    for (g_508 = 27; (g_508 >= 24); --g_508)
                    {
                        int *l_2314 = &l_1340;
                        unsigned short *l_2329 = (void*)0;
                        unsigned short *l_2330 = &g_561;
                        (*l_2314) ^= (func_8((safe_lshift_func_int8_t_s_s((*l_1395), 0))) > 0L);
                        l_2315++;
                        p_4 = func_70(((**g_812) = (safe_lshift_func_uint8_t_u_s(l_2320, ((((***l_1397)--) >= ((*g_544) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_3 ^ (((*l_2169) = p_3) ^ ((*g_777) > ((*l_2330) = p_3)))) ^ func_64((*g_755), (*l_2181), p_3, (*g_813), g_677)), 3UL)), p_3)))) || 0UL)))), l_2331, g_1671, l_2253);
                    }
                }
            }
            else
            {
                for (g_1396 = 7; (g_1396 < (-23)); g_1396 = safe_sub_func_uint16_t_u_u(g_1396, 9))
                {
                    for (l_2320 = (-28); (l_2320 >= (-30)); l_2320 = safe_sub_func_int16_t_s_s(l_2320, 5))
                    {
                        if (l_1764)
                            goto lbl_2336;
                    }
                    return p_4;
                }
                for (l_2105 = (-27); (l_2105 > 52); l_2105 = safe_add_func_uint32_t_u_u(l_2105, 6))
                {
                    return p_4;
                }
            }
            --l_2372;
            if ((((((*l_1853) = l_2375) != ((*l_2360) , l_2375)) , p_3) || ((**g_812) , ((((*g_952) > p_3) , (*l_2369)) > (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((func_64((safe_unary_minus_func_uint16_t_u((((void*)0 == l_2381) , g_521))), (***g_196), p_3, p_3, p_3) && (*l_2359)) == g_1841) < (*l_2347)), 13)) >= (-1L)), (*l_2341)))))))
            {
                int l_2382 = 0x6B8D0451L;
                int l_2419 = 6L;
                unsigned char l_2424 = 0UL;
                int l_2443 = 0L;
                --g_2383;
                if (((safe_add_func_uint8_t_u_u((p_3--), (*l_2360))) || (!(safe_lshift_func_uint8_t_u_u((*g_755), 5)))))
                {
                    unsigned l_2400 = 0x09F98ED9L;
                    unsigned l_2401 = 0xF4D6B0B1L;
                    unsigned char l_2402 = 0x36L;
                    int l_2404 = (-1L);
                    int l_2405 = 1L;
                    int *l_2406 = &l_1329;
                    int *l_2407 = &l_1762;
                    int *l_2408 = &l_1334;
                    int *l_2409 = &g_260;
                    int *l_2410 = &l_1334;
                    int *l_2411 = &l_1810;
                    int *l_2412 = (void*)0;
                    int *l_2413 = &l_1340;
                    int *l_2414 = &g_11;
                    int *l_2415 = (void*)0;
                    int *l_2416 = &l_1810;
                    int *l_2417 = &l_2382;
                    int *l_2418 = &l_1354;
                    int *l_2420 = &l_1762;
                    int *l_2421 = &g_120;
                    int *l_2422 = &g_120;
                    int *l_2423 = &g_120;
                    if ((*l_2359))
                    {
                        (*g_88) = (void*)0;
                        (*g_544) = ((-1L) && (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((!4L) && ((g_2252 < (***g_775)) != (((0xC354L >= ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((p_3 < l_2400) && (**g_776)), l_2400)), l_2401)) != (*g_952))) , l_2402) | l_2400))), 0x42L)), p_3)));
                    }
                    else
                    {
                        return g_2403;
                    }
                    ++l_2424;
                }
                else
                {
                    (****l_2381) = func_70(l_2382, (*l_2367), (0UL > (*l_1839)), (safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((safe_rshift_func_uint16_t_u_s(g_1821, 4)) || 0L) < ((g_2440 == (void*)0) <= l_2443)))), (*l_2354))) == (*g_777)), 12)), 0x4CL)) || 0xDCCF4F6FL), p_3)));
                    (*g_564) ^= (*g_2403);
                }
            }
            else
            {
                int l_2448 = (-1L);
                unsigned char ***l_2464 = (void*)0;
                int *l_2478 = &l_1334;
                int l_2484 = 0xCDD50383L;
                int l_2494 = 0xD9ABA294L;
                int l_2515 = 0xBEA5730CL;
                int l_2525 = 0xA5E358BBL;
                if ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u(((p_3 , (*g_952)) , 0xB02FBA44L), (!l_2448))), p_3)))
                {
                    int l_2454 = 0x27CDAC6CL;
                    int l_2481 = 0x5C926D5CL;
                    int l_2482 = 0x48F5C56DL;
                    int l_2491 = 1L;
                    int l_2541 = 0x5D1B57B4L;
                    int l_2555 = (-1L);
                    int l_2558 = 0x5AADA00FL;
                    (*l_2367) ^= p_3;
                    for (l_2237 = 0; (l_2237 >= 16); l_2237 = safe_add_func_uint32_t_u_u(l_2237, 6))
                    {
                        (*l_2362) &= (4294967291UL <= (safe_rshift_func_int8_t_s_u(((*l_2369) = (p_3 & 65526UL)), 3)));
                    }
                    if (g_573)
                        goto lbl_2453;
                    if ((l_2454 != p_3))
                    {
                        int **l_2457 = (void*)0;
                        unsigned char *l_2472 = &l_2149;
                        (*l_2345) = (((g_1396 , (l_2448 > (safe_rshift_func_int16_t_s_u(l_2454, 9)))) && p_3) , ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((**g_2440) != l_2464) > l_2454), p_3)), p_3)) && (*g_777)));
                        (*l_1839) |= (*l_1395);
                        --l_2465;
                        (*l_1839) = (((**l_2140)++) > (safe_add_func_uint16_t_u_u((((*l_2472) = (&g_776 == (void*)0)) , (safe_sub_func_int32_t_s_s((*l_2369), (((*g_2403) , (((((l_2475 == p_4) && ((safe_add_func_int16_t_s_s((func_64(l_2448, l_2478, l_2454, (**g_812), (*g_952)) != p_3), l_2479)) != (*l_1839))) , (void*)0) != (void*)0) > (*l_2478))) <= p_3)))), p_3)));
                    }
                    else
                    {
                        int l_2483 = 0L;
                        int l_2485 = 1L;
                        int *l_2486 = &l_1377;
                        int *l_2487 = &g_1093;
                        int *l_2488 = &l_1334;
                        int *l_2489 = &g_1093;
                        int *l_2490 = &l_2485;
                        int *l_2492 = &l_1340;
                        int *l_2493 = &l_1981;
                        int *l_2495 = &l_1762;
                        int *l_2496 = &l_2494;
                        int *l_2497 = &l_2481;
                        int *l_2498 = &l_1334;
                        int *l_2499 = &l_1761;
                        int *l_2500 = (void*)0;
                        int *l_2501 = &g_120;
                        int *l_2502 = &l_1810;
                        int l_2503 = 0x27300F08L;
                        int *l_2504 = &l_2485;
                        int *l_2505 = &g_2118;
                        int *l_2506 = &g_260;
                        int *l_2507 = &g_120;
                        int *l_2508 = &l_2485;
                        int *l_2509 = &l_1763;
                        int *l_2510 = (void*)0;
                        int *l_2511 = &l_1329;
                        int *l_2512 = (void*)0;
                        int *l_2513 = &l_1329;
                        int *l_2514 = (void*)0;
                        int *l_2516 = &g_1093;
                        int *l_2517 = &l_2515;
                        int *l_2518 = &g_260;
                        int *l_2519 = &l_2237;
                        int *l_2520 = (void*)0;
                        int *l_2521 = &l_1810;
                        int *l_2522 = &l_1334;
                        int *l_2523 = (void*)0;
                        int *l_2524 = (void*)0;
                        int *l_2526 = &l_2525;
                        int *l_2527 = &l_2525;
                        int *l_2528 = &g_2118;
                        int *l_2529 = &l_2491;
                        int *l_2530 = (void*)0;
                        int *l_2531 = (void*)0;
                        int *l_2532 = &l_1366;
                        int *l_2533 = &g_2118;
                        int *l_2534 = &l_2515;
                        int *l_2535 = &l_2237;
                        int *l_2537 = (void*)0;
                        int *l_2538 = &l_1981;
                        int l_2539 = 2L;
                        int *l_2540 = (void*)0;
                        int *l_2542 = &l_1764;
                        int *l_2543 = (void*)0;
                        int *l_2544 = &l_2539;
                        int *l_2545 = &l_2237;
                        int *l_2546 = &l_1354;
                        int *l_2547 = (void*)0;
                        int *l_2549 = (void*)0;
                        int *l_2550 = (void*)0;
                        int *l_2551 = &l_2541;
                        int *l_2552 = (void*)0;
                        int *l_2553 = &l_2481;
                        int *l_2554 = &l_1762;
                        int *l_2556 = &g_1093;
                        int *l_2557 = &l_2525;
                        int *l_2559 = &l_2482;
                        int *l_2560 = &l_1764;
                        int *l_2561 = (void*)0;
                        int *l_2563 = &l_1329;
                        int *l_2565 = (void*)0;
                        int *l_2566 = &l_2555;
                        int *l_2567 = &l_2237;
                        int *l_2568 = &g_85;
                        int *l_2569 = &l_1981;
                        (*l_2340) = (safe_unary_minus_func_int32_t_s(l_2454));
                        --g_2571;
                    }
                }
                else
                {
                    char **l_2583 = &g_1184;
                    int l_2598 = 0xDF63FA2AL;
                    (****l_2381) = (***g_196);
                    if (((safe_unary_minus_func_int8_t_s((l_2579 = ((*l_1325) ^= (0x7D13643EL > (safe_mod_func_int16_t_s_s(p_3, ((*l_2478) , ((*l_2169)++))))))))) >= (*l_2349)))
                    {
                        char ***l_2584 = &l_2583;
                        (*g_2403) = (*g_544);
                        (*l_2584) = l_2583;
                    }
                    else
                    {
                        short l_2599 = 0L;
                        (***l_1853) = func_70((p_3 >= func_75((safe_add_func_uint8_t_u_u((*l_1839), (safe_rshift_func_int16_t_s_u(p_3, 12)))), ((safe_mod_func_uint8_t_u_u(p_3, (*l_2478))) , func_75((g_2591 , func_56((safe_mul_func_int8_t_s_s((g_2269 = (p_3 != p_3)), (((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_3, p_3)), l_2598)) & (*l_1395)) , l_2598))), (*g_2403), p_4)), p_3, p_3)), p_3)), (*l_2478), l_2599, p_3);
                        (*l_1839) &= (p_3 != (*g_2403));
                    }
                    (*l_2366) |= ((safe_sub_func_int32_t_s_s((((0x5883L <= (((safe_unary_minus_func_uint32_t_u(l_2598)) || (safe_rshift_func_int8_t_s_u((*l_2478), ((safe_mul_func_uint16_t_u_u(0x2475L, (p_3 >= p_3))) & ((((void*)0 == g_2607) , ((p_3 ^ 0L) , (*g_755))) | p_3))))) > (*g_952))) ^ p_3) & (*l_2367)), (*g_952))) == 0xA567L);
                }
                (*l_2368) |= (safe_add_func_uint8_t_u_u(0xC6L, (*l_2478)));
                l_2611 ^= (*l_1395);
            }
        }
        (*g_2403) |= (safe_add_func_int32_t_s_s(func_8((safe_sub_func_uint16_t_u_u((p_3 ^ (*g_952)), 0xF5A4L))), (safe_mul_func_int8_t_s_s((g_2269 = (p_3 || ((*l_2626) = (safe_rshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_3 == 0x92L), p_3)), p_3)), 0xB41DC463L)) , 0x1C4B8175L) , p_3), p_3))))), p_3))));
        (*g_544) = (l_2627 , ((((*g_755) , ((p_3 , (l_2628 == (void*)0)) == func_56(((*l_2147) &= p_3), (*g_564), func_70(p_3, ((safe_lshift_func_uint8_t_u_u((--(*g_755)), 7)) <= ((*g_952) = 3UL)), p_3, p_3)))) == (*l_1839)) < l_1762));
    }
    if ((p_3 && p_3))
    {
        unsigned char l_2635 = 1UL;
        (*g_544) |= (safe_lshift_func_uint16_t_u_u((l_2635 , 1UL), 3));
    }
    else
    {
        char l_2643 = 1L;
        unsigned short *l_2644 = &l_2315;
        unsigned short *l_2647 = &g_94;
        unsigned *l_2650 = &g_1671;
        (*g_564) |= (*g_2403);
        (*g_2403) = (safe_sub_func_uint8_t_u_u((l_2638 ^ ((*g_544) = (((safe_sub_func_uint32_t_u_u(((*g_952) = p_3), l_2643)) , (l_2653 & func_56((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_3, 5)), p_3)), (*g_544), &l_1354))) , 0x6F2B99E2L))), (-1L)));
    }
    return p_4;
}







static unsigned func_8(unsigned p_9)
{
    int *l_10 = &g_11;
    int **l_12 = &l_10;
    int l_1298 = 0xFEFAF255L;
    unsigned short *l_1303 = &g_1088;
    unsigned l_1306 = 4294967287UL;
    int l_1307 = 0x3A18243DL;
    unsigned short *l_1308 = &g_561;
    unsigned l_1310 = 0x4C197FCAL;
    (*l_12) = l_10;
    (*l_12) = func_13(&g_11, (*l_12));
    (*g_544) |= ((*g_564) ^= (safe_lshift_func_int16_t_s_u(l_1298, 15)));
    if ((p_9 < ((((((*l_1308) = (((safe_lshift_func_uint16_t_u_s(0x225BL, p_9)) | (safe_lshift_func_uint8_t_u_s(((*g_755) = (((((p_9 , (++(*l_1303))) != l_1306) && ((p_9 || func_75(p_9, (**g_812), p_9)) | 0x52L)) , p_9) >= l_1307)), p_9))) , p_9)) && (*g_777)) , 3L) , 0x9B4C66ECL) && 0x614266DDL)))
    {
        int ****l_1309 = &g_197;
        (***l_1309) = func_70(((**g_812) = (p_9 | func_56(p_9, ((((void*)0 == l_1309) > func_64(func_64(p_9, (**g_197), p_9, (*g_813), (l_1310 , p_9)), (*l_12), g_100, p_9, (*g_952))) || p_9), (*l_12)))), p_9, p_9, l_1306);
        for (g_96 = 0; (g_96 == 26); g_96++)
        {
            unsigned ***l_1313 = (void*)0;
            unsigned **l_1315 = (void*)0;
            unsigned ***l_1314 = &l_1315;
            char *l_1316 = &g_672;
            (*g_88) = func_70(p_9, ((((*l_1314) = &g_952) == (void*)0) <= 0UL), (*g_952), ((*l_1316) = p_9));
        }
    }
    else
    {
        int *l_1317 = (void*)0;
        (*g_88) = l_1317;
    }
    return p_9;
}







static int * func_13(int * p_14, int * p_15)
{
    unsigned l_20 = 4294967292UL;
    int *l_22 = (void*)0;
    int **l_21 = &l_22;
    char *l_1137 = (void*)0;
    char *l_1138 = &g_363;
    int *l_1139 = (void*)0;
    unsigned short *l_1140 = &g_1088;
    int l_1142 = (-8L);
    unsigned char l_1191 = 0x69L;
    unsigned char l_1195 = 0xF8L;
    unsigned l_1204 = 0xF763FB01L;
    int *l_1205 = &g_122;
    int *l_1206 = &l_1142;
    int *l_1207 = &g_120;
    int *l_1208 = &g_85;
    int *l_1209 = &g_122;
    int *l_1210 = &g_122;
    int *l_1211 = &g_85;
    int *l_1212 = (void*)0;
    int *l_1213 = &g_122;
    int *l_1214 = (void*)0;
    int *l_1215 = &g_1093;
    int *l_1216 = &g_122;
    int *l_1217 = (void*)0;
    int *l_1218 = &g_1093;
    int *l_1219 = &l_1142;
    int *l_1220 = (void*)0;
    int *l_1221 = &g_120;
    int *l_1222 = &g_11;
    int *l_1223 = (void*)0;
    int *l_1224 = &g_120;
    int *l_1225 = &g_85;
    int *l_1226 = &g_120;
    int *l_1227 = &g_122;
    int *l_1228 = &g_260;
    short l_1229 = 0x438BL;
    int *l_1230 = (void*)0;
    int *l_1231 = &g_120;
    int *l_1232 = &g_260;
    int l_1233 = (-8L);
    int *l_1234 = &g_260;
    int *l_1235 = &g_11;
    int *l_1236 = (void*)0;
    int *l_1237 = &g_11;
    int *l_1238 = &l_1233;
    int *l_1239 = &g_122;
    int *l_1240 = &g_122;
    int *l_1241 = &g_122;
    int l_1242 = 0x065341F3L;
    int *l_1243 = &l_1142;
    int *l_1244 = (void*)0;
    int *l_1245 = &g_260;
    int *l_1246 = &g_120;
    int *l_1247 = (void*)0;
    int *l_1248 = (void*)0;
    int *l_1249 = &g_120;
    int *l_1250 = &l_1142;
    int *l_1251 = &g_260;
    int *l_1252 = &l_1233;
    int *l_1253 = &g_1093;
    int *l_1254 = &g_1093;
    int *l_1255 = &g_1093;
    int *l_1256 = (void*)0;
    int *l_1257 = &g_1093;
    int l_1258 = (-8L);
    int *l_1259 = &g_260;
    int *l_1260 = &l_1142;
    int *l_1261 = &g_1093;
    int *l_1262 = &g_11;
    int *l_1263 = &l_1258;
    int l_1264 = 0L;
    int *l_1265 = (void*)0;
    int *l_1266 = (void*)0;
    int *l_1267 = (void*)0;
    int *l_1268 = &g_122;
    int *l_1269 = &l_1264;
    int *l_1270 = (void*)0;
    int *l_1271 = (void*)0;
    int *l_1272 = (void*)0;
    int *l_1273 = &l_1242;
    int l_1274 = 0L;
    int *l_1275 = &l_1258;
    int *l_1276 = &l_1142;
    int *l_1277 = &g_11;
    int *l_1278 = &g_11;
    int l_1279 = 0x76CEF9AEL;
    int *l_1280 = &l_1142;
    int *l_1281 = &g_122;
    int *l_1282 = &l_1279;
    int *l_1283 = (void*)0;
    int *l_1284 = &l_1242;
    int *l_1285 = (void*)0;
    int *l_1286 = &l_1242;
    int *l_1287 = &l_1142;
    int *l_1288 = (void*)0;
    int *l_1289 = &l_1274;
    int *l_1290 = &g_11;
    int *l_1291 = &g_85;
    int *l_1292 = (void*)0;
    if ((((((*l_1140) = (~((safe_unary_minus_func_uint16_t_u(func_17(l_20, l_21))) , ((safe_rshift_func_int8_t_s_s((((func_64(((func_56((8L & (safe_sub_func_int8_t_s_s(((*l_1138) = (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_64((*g_755), (p_15 = ((**g_197) = (((*l_1138) = ((safe_mul_func_uint8_t_u_u(l_20, g_672)) >= (p_14 == ((*g_812) = p_15)))) , l_1139))), l_20, g_677, (*g_952)), 0L)), l_20))), l_20))), (*p_14), (*l_21)) , 0L) | g_260), p_14, l_20, l_20, g_1061) != g_41) ^ g_1061) > g_96), 0)) , 1UL)))) & g_1084) < 8UL) != (*p_14)))
    {
        unsigned l_1141 = 4294967295UL;
        unsigned l_1160 = 0x5ED0B117L;
        int l_1163 = 0x6B871675L;
        if ((l_1141 = (*g_544)))
        {
            int *l_1143 = &g_11;
            int *l_1144 = &g_260;
            int *l_1145 = (void*)0;
            int *l_1146 = &g_11;
            int *l_1147 = (void*)0;
            int *l_1148 = &g_1093;
            int *l_1149 = &g_85;
            int l_1150 = 6L;
            int l_1151 = (-8L);
            int *l_1152 = &l_1151;
            int *l_1153 = (void*)0;
            int *l_1154 = &l_1142;
            int *l_1155 = &g_260;
            int *l_1156 = &l_1142;
            int *l_1157 = (void*)0;
            int *l_1158 = &g_120;
            int *l_1159 = &g_260;
            l_1160--;
        }
        else
        {
            short l_1186 = 0x475DL;
            (*g_88) = p_15;
lbl_1164:
            l_1163 = (*p_14);
            if ((*g_544))
            {
                (*g_544) = (*p_14);
                (*p_14) = l_1141;
                if (g_11)
                    goto lbl_1164;
                (*p_14) ^= (safe_lshift_func_int8_t_s_s(l_1160, 0));
            }
            else
            {
                unsigned l_1183 = 0UL;
                if (((void*)0 == &g_51))
                {
                    unsigned short l_1176 = 2UL;
                    char **l_1185 = &g_1184;
                    (*g_88) = (void*)0;
                    for (g_915 = (-19); (g_915 < 27); g_915++)
                    {
                        char l_1169 = 1L;
                        int *l_1170 = &g_11;
                        int *l_1171 = &g_1093;
                        int *l_1172 = &g_122;
                        int *l_1173 = &l_1163;
                        int *l_1174 = &l_1142;
                        int *l_1175 = &g_122;
                        ++l_1176;
                        if ((*p_14))
                            continue;
                    }
                    for (g_652 = 0; (g_652 > (-5)); --g_652)
                    {
                        (***g_196) = (void*)0;
                        (*p_14) = (*p_14);
                    }
                    (*l_21) = func_70((safe_mul_func_int16_t_s_s(((l_1183 || (-1L)) >= (((*l_1185) = g_1184) != l_1137)), l_1186)), ((*g_564) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_1176, (func_17(l_1191, &p_15) , g_122))), l_1186))), g_364, l_1186);
                }
                else
                {
                    return p_15;
                }
            }
        }
    }
    else
    {
        (*p_14) = (*g_564);
        (*g_544) = g_1192;
    }
    (**g_197) = (((**g_776) && ((**g_812) , (***g_775))) , func_70(((*g_564) | (safe_lshift_func_int8_t_s_s((-1L), 6))), (l_1142 = (l_1195 = (((*g_238) = &l_1191) == &l_1191))), (*g_952), (g_100 = g_41)));
    (*l_21) = func_70((**g_812), (*p_14), ((func_56((safe_lshift_func_uint8_t_u_s((l_1191 && (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((&l_1139 == (g_1072 , (*g_197))), (safe_add_func_int32_t_s_s(2L, 0x5311E47EL)))) ^ ((*g_952) <= (*g_952))), 4))), 7)), (*p_14), p_15) | g_114) > (-1L)), l_1204);
    ++g_1293;
    return p_14;
}







static unsigned short func_17(unsigned p_18, int ** p_19)
{
    int *l_23 = &g_11;
    int *l_24 = &g_11;
    int *l_25 = &g_11;
    int *l_26 = &g_11;
    int *l_27 = &g_11;
    int l_28 = 0x2E3CA369L;
    int l_29 = 0L;
    int *l_30 = &l_29;
    int *l_31 = (void*)0;
    int *l_32 = &l_29;
    int *l_33 = &l_29;
    int *l_34 = (void*)0;
    int *l_35 = &l_28;
    int *l_36 = &l_29;
    int *l_37 = &g_11;
    int *l_38 = &g_11;
    int *l_39 = &g_11;
    int l_40 = 3L;
    int *l_42 = &g_11;
    int *l_43 = (void*)0;
    int *l_44 = &l_29;
    int *l_45 = (void*)0;
    int *l_46 = (void*)0;
    int *l_47 = &l_40;
    int *l_48 = &l_40;
    int *l_49 = &l_29;
    int *l_50 = &g_11;
    unsigned short *l_1126 = &g_1088;
    --g_51;
    (*l_33) = ((*l_33) > (safe_sub_func_uint16_t_u_u(((*l_1126) = (func_56((p_18 | (safe_sub_func_uint16_t_u_u(g_11, (0x7DF7DC23L >= (safe_lshift_func_int16_t_s_u(func_64(g_11, func_70((g_11 && ((void*)0 != &l_40)), (func_75(p_18, g_51, (*l_25)) , (-1L)), g_114, g_100), (*l_48), (*g_813), p_18), 4)))))), (*l_35), (*p_19)) , g_93)), 0x8961L)));
    return p_18;
}







static unsigned short func_56(short p_57, int p_58, int * p_59)
{
    short ***l_935 = &g_776;
    int l_936 = 0x8A85BE22L;
    int **l_937 = &g_89;
    unsigned short *l_942 = &g_561;
    int **l_943 = &g_813;
    unsigned *l_949 = &g_235;
    unsigned **l_948 = &l_949;
    unsigned *l_951 = &g_235;
    unsigned **l_950 = &l_951;
    unsigned char l_953 = 1UL;
    unsigned char l_954 = 255UL;
    unsigned l_963 = 4294967295UL;
    unsigned l_984 = 0UL;
    int l_1036 = 3L;
    int l_1042 = 0xEF66CDA5L;
    int l_1064 = (-1L);
    int l_1076 = (-5L);
    int l_1087 = 0x2D6161D9L;
    unsigned char **l_1104 = &g_239;
    unsigned l_1106 = 1UL;
    (*g_544) = (((safe_lshift_func_int16_t_s_s(p_57, 12)) <= 0x93L) || (safe_add_func_uint16_t_u_u((p_58 < g_96), ((((void*)0 == l_935) , (l_936 <= ((**g_196) != (l_936 , l_937)))) ^ 4UL))));
    (*g_88) = (void*)0;
    (*g_544) = (((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_58, ((*l_942) ^= g_364))) <= (+(p_58 == ((*g_544) == (l_943 == ((((safe_mul_func_uint8_t_u_u(((*g_755) = (safe_sub_func_uint8_t_u_u((((*l_950) = ((*l_948) = &g_235)) == (g_952 = &g_235)), 0xF4L))), l_953)) && g_652) > g_573) , l_943)))))), l_954)) ^ p_57) && g_100);
    for (g_85 = 0; (g_85 > 21); ++g_85)
    {
        int l_959 = (-1L);
        unsigned char ***l_960 = (void*)0;
        int *l_961 = (void*)0;
        int *l_962 = &l_936;
        char *l_964 = &g_96;
        short *l_965 = &g_915;
        short l_985 = 0x0BF6L;
        int l_1010 = 0L;
        int l_1011 = 0xA0881330L;
        int l_1022 = 0x5E8C1CBEL;
        int l_1044 = 0x6B830D21L;
        int l_1083 = (-4L);
        int *l_1105 = &g_260;
        int l_1115 = (-5L);
    }
    return g_508;
}







static short func_64(unsigned char p_65, int * p_66, unsigned short p_67, int p_68, unsigned p_69)
{
    unsigned l_836 = 0x63698265L;
    unsigned char ***l_837 = &g_238;
    int l_838 = 1L;
    int l_839 = (-5L);
    int l_842 = 1L;
    int *l_848 = &l_838;
    int *l_849 = &l_839;
    int *l_850 = &g_122;
    int l_851 = 0xA622FA75L;
    int *l_852 = &g_120;
    int l_853 = 0x8F9B7C2FL;
    int *l_854 = &l_853;
    int *l_855 = &l_842;
    int *l_856 = (void*)0;
    int *l_857 = &g_122;
    int *l_858 = &l_851;
    int *l_859 = &l_839;
    int *l_860 = &g_85;
    int *l_861 = &g_260;
    int *l_862 = &g_120;
    int *l_863 = &l_842;
    int *l_864 = (void*)0;
    int *l_865 = &l_851;
    int *l_866 = &l_839;
    int l_867 = 0x37687399L;
    int *l_868 = &l_851;
    int *l_869 = &l_853;
    int *l_870 = &l_839;
    int *l_871 = &g_120;
    int *l_872 = &l_842;
    int *l_873 = &l_867;
    int l_874 = 0xCC7E9C47L;
    int *l_875 = &g_260;
    int *l_876 = &g_85;
    int *l_877 = &l_874;
    int l_878 = 7L;
    int *l_879 = (void*)0;
    int *l_880 = &l_867;
    int *l_881 = &l_878;
    int *l_882 = &l_878;
    int *l_883 = &l_839;
    int *l_884 = &l_838;
    int *l_885 = &g_122;
    int *l_886 = (void*)0;
    int *l_887 = &l_851;
    int *l_888 = &l_867;
    int *l_889 = (void*)0;
    int *l_890 = &l_867;
    int *l_891 = &l_838;
    int *l_892 = (void*)0;
    int *l_893 = (void*)0;
    int *l_894 = &l_867;
    int *l_895 = &l_838;
    int *l_896 = &l_874;
    int *l_897 = (void*)0;
    int *l_898 = &g_122;
    int *l_899 = (void*)0;
    int *l_900 = &l_874;
    int *l_901 = &g_120;
    int *l_902 = &l_867;
    int *l_903 = &l_878;
    int *l_904 = (void*)0;
    int *l_905 = &g_122;
    int *l_906 = (void*)0;
    int *l_907 = &g_120;
    int *l_908 = &g_120;
    int *l_909 = &g_120;
    int *l_910 = &l_839;
    int *l_911 = &g_260;
    int *l_912 = &l_851;
    int *l_913 = (void*)0;
    int *l_914 = &l_838;
    int *l_916 = &l_853;
    int *l_917 = &g_260;
    int *l_918 = &g_122;
    int *l_919 = &l_867;
    int *l_920 = &l_867;
    int *l_921 = (void*)0;
    int *l_922 = &l_838;
    int *l_923 = &g_85;
    int l_924 = 0x1E8CC54EL;
    int *l_925 = &g_120;
    int *l_926 = &l_839;
    int *l_927 = &l_842;
    (*g_544) ^= l_836;
    if ((&g_238 == (l_836 , l_837)))
    {
        l_838 ^= (((g_672 , 1UL) , l_836) >= l_836);
        (*g_88) = (*g_88);
        (***g_196) = (void*)0;
        l_838 = (*g_544);
    }
    else
    {
        int *l_840 = &g_85;
        int *l_841 = (void*)0;
        int *l_843 = &l_842;
        int *l_844 = &g_260;
        unsigned short l_845 = 0xAFDCL;
        ++l_845;
        (*l_843) |= l_838;
    }
    --g_928;
    return (***g_775);
}







static int * func_70(int p_71, int p_72, unsigned p_73, char p_74)
{
    short l_246 = 0xF51DL;
    int *l_251 = &g_85;
    unsigned short l_254 = 0xD69BL;
    unsigned short *l_257 = &g_94;
    unsigned char l_258 = 6UL;
    int *l_259 = &g_260;
    unsigned l_287 = 1UL;
    int l_318 = (-2L);
    int l_345 = 2L;
    int l_355 = 3L;
    unsigned char l_365 = 0x9FL;
    int l_662 = 0xD9E8982AL;
    unsigned l_735 = 2UL;
    int l_783 = (-3L);
    short l_820 = (-1L);
    (*g_88) = (***g_196);
    (*l_259) &= (((safe_sub_func_uint8_t_u_u((func_75((safe_rshift_func_int8_t_s_u(g_235, (l_246 , (safe_sub_func_int8_t_s_s((l_246 , (g_99 < (safe_rshift_func_int16_t_s_u((!(((!((*l_251) ^= (-1L))) | (((*l_257) = ((p_74 , (safe_mul_func_uint8_t_u_u((l_254 >= (safe_rshift_func_uint8_t_u_s(p_71, (p_74 , (-5L))))), g_94))) >= g_99)) <= 65535UL)) < p_71)), p_74)))), g_114))))), p_72, p_71) > l_258), 0x68L)) >= g_114) ^ 0x4377L);
    if (g_122)
        goto lbl_835;
lbl_835:
    for (g_114 = 0; (g_114 < (-1)); g_114--)
    {
        int *l_299 = &g_260;
        int l_322 = (-5L);
        int l_341 = 0xAEEF4BBCL;
        int l_350 = 1L;
        int l_356 = 0xA7616D27L;
        int l_520 = 1L;
        unsigned l_554 = 4294967288UL;
        int l_640 = 0x7859EA8BL;
        int l_655 = 2L;
        unsigned char ***l_682 = (void*)0;
        unsigned char l_697 = 0x88L;
        int ***l_722 = &g_88;
    }
    (*l_259) ^= ((*g_544) = p_71);
    return (***g_196);
}







static unsigned func_75(char p_76, int p_77, unsigned char p_78)
{
    int *l_81 = &g_11;
    int l_124 = 0x253DC176L;
    int l_136 = (-1L);
    unsigned l_146 = 4294967291UL;
    int l_174 = 0x498758D7L;
    unsigned short l_218 = 0xADB2L;
    int *l_241 = &l_124;
    if (func_79(l_81))
    {
        int *l_123 = (void*)0;
        int *l_125 = &l_124;
        int *l_126 = &l_124;
        int *l_127 = &l_124;
        int *l_128 = (void*)0;
        int l_129 = 9L;
        int *l_130 = (void*)0;
        int *l_131 = (void*)0;
        int *l_132 = &g_85;
        int *l_133 = &g_120;
        int *l_134 = &g_120;
        int *l_135 = &g_85;
        int *l_137 = (void*)0;
        int *l_138 = (void*)0;
        int *l_139 = (void*)0;
        int *l_140 = &l_136;
        int *l_141 = &l_124;
        int l_142 = 6L;
        int *l_143 = &l_129;
        int *l_144 = &g_85;
        int *l_145 = &l_136;
        l_146++;
    }
    else
    {
        char l_152 = 0xC8L;
        int ***l_156 = &g_88;
        int ****l_155 = &l_156;
        short *l_172 = &g_114;
        unsigned char ***l_240 = &g_238;
        if ((safe_mod_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(7UL)) && l_152) , 255UL) & l_152), (((g_100 , (g_114 && (p_76 , ((void*)0 != l_155)))) > (*l_81)) & 1UL))))
        {
            short l_165 = (-3L);
            int l_167 = 0x295B34A7L;
            unsigned short *l_173 = &g_94;
            unsigned l_175 = 1UL;
            if (((0x0511L == (safe_mul_func_uint16_t_u_u((((7UL >= ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((1UL & (g_51 = ((safe_lshift_func_int16_t_s_u((l_165 || (safe_unary_minus_func_int32_t_s((l_167 ^= p_76)))), 5)) , (*l_81)))), (safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((*l_173) = (((l_172 == ((((*l_81) <= g_100) || 1L) , l_172)) , (void*)0) != (void*)0)), p_77)) , g_100) || l_174), (*l_81))))) && l_175), g_85)) < p_78)) | 0xC2BD310EL) , (*l_81)), 0x93E1L))) ^ 65530UL))
            {
                unsigned *l_176 = (void*)0;
                unsigned *l_177 = &l_146;
                int l_188 = 0L;
                char *l_189 = &l_152;
                int *l_190 = &l_167;
                (**l_156) = (*g_88);
                (*l_190) = ((((*l_177)--) < (p_76 , g_114)) >= ((*l_189) &= (((g_100 == ((*l_173)--)) > (safe_mul_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((g_114 && ((g_51 , p_77) < (safe_rshift_func_uint16_t_u_u(((&g_88 == (void*)0) | p_78), 3)))), p_76)) <= 0xF7L) , 0xC3L), l_188))) , l_165)));
                (*g_88) = (***l_155);
            }
            else
            {
                unsigned short l_193 = 0xA2DAL;
                int *l_194 = &l_136;
                unsigned *l_195 = &l_146;
                l_193 &= (safe_sub_func_uint8_t_u_u(((*l_81) , g_85), p_76));
                (*l_194) = ((((1UL >= (func_79(l_194) > (0xFD9C85C1L || ((*l_195) = g_99)))) , g_196) == (void*)0) ^ p_78);
            }
        }
        else
        {
            unsigned l_200 = 1UL;
            int l_203 = 0xF058C4D6L;
            (***g_196) = (*g_88);
            for (g_99 = (-10); (g_99 > 30); g_99 = safe_add_func_int8_t_s_s(g_99, 1))
            {
                int l_210 = 1L;
                int **l_216 = &g_89;
                int l_217 = (-1L);
                int *l_227 = &g_120;
                int *l_228 = &l_136;
                int *l_229 = (void*)0;
                int *l_230 = &l_136;
                int *l_231 = &l_217;
                int *l_232 = &g_85;
                int *l_233 = &l_217;
                int *l_234 = (void*)0;
                l_200--;
                if ((g_94 || 0x1EL))
                {
                    int l_206 = (-1L);
                    if ((l_203 |= p_76))
                    {
                        unsigned char *l_205 = &g_99;
                        unsigned char **l_204 = &l_205;
                        int l_209 = (-1L);
                        l_210 |= ((g_96 < (((((*l_204) = &g_99) != &g_99) , (((((((~l_206) != p_76) == (safe_sub_func_int32_t_s_s((!p_77), 0xEF0CFF6EL))) , p_77) | 4294967294UL) < (*l_81)) ^ 4UL)) == l_209)) <= 1UL);
                    }
                    else
                    {
                        int **l_215 = &l_81;
                        l_217 = (safe_add_func_uint32_t_u_u(g_96, (safe_mul_func_int16_t_s_s((func_79((p_76 , &l_206)) , (((p_77 >= (0x5DL != p_77)) > ((l_215 != l_216) < l_200)) != p_78)), 0UL))));
                    }
                    if (l_203)
                        break;
                    if ((*l_81))
                        continue;
                }
                else
                {
                    int *l_221 = &g_85;
                    int *l_226 = &g_122;
                    --l_218;
                    (*l_221) = p_78;
                    (*l_226) &= ((*l_221) = (safe_sub_func_uint32_t_u_u((func_79(&l_203) <= ((safe_sub_func_uint8_t_u_u(248UL, p_78)) <= p_77)), (-1L))));
                }
                --g_235;
                (*l_230) = l_203;
            }
            return p_78;
        }
        (*l_240) = g_238;
    }
    (*l_241) = (&l_146 != &l_146);
    return g_120;
}







static int func_79(int * p_80)
{
    int l_90 = 0x0A0C2010L;
    unsigned l_109 = 0x55A4044AL;
    int *l_115 = &g_85;
    int ***l_116 = (void*)0;
    int ***l_118 = &g_88;
    for (g_51 = (-2); (g_51 > 4); g_51 = safe_add_func_uint8_t_u_u(g_51, 5))
    {
        int *l_84 = &g_85;
        int **l_92 = &g_89;
        int ***l_91 = &l_92;
        char l_97 = 0L;
        short *l_113 = &g_114;
        int ****l_117 = &l_116;
        int *l_119 = &g_120;
        int *l_121 = &g_122;
        (*l_84) = g_51;
    }
    return (*p_80);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1396, "g_1396", print_hash_value);
    transparent_crc(g_1520, "g_1520", print_hash_value);
    transparent_crc(g_1610, "g_1610", print_hash_value);
    transparent_crc(g_1671, "g_1671", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    transparent_crc(g_1841, "g_1841", print_hash_value);
    transparent_crc(g_1936, "g_1936", print_hash_value);
    transparent_crc(g_1969, "g_1969", print_hash_value);
    transparent_crc(g_2029, "g_2029", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    transparent_crc(g_2252, "g_2252", print_hash_value);
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2269, "g_2269", print_hash_value);
    transparent_crc(g_2283, "g_2283", print_hash_value);
    transparent_crc(g_2383, "g_2383", print_hash_value);
    transparent_crc(g_2536, "g_2536", print_hash_value);
    transparent_crc(g_2562, "g_2562", print_hash_value);
    transparent_crc(g_2564, "g_2564", print_hash_value);
    transparent_crc(g_2570, "g_2570", print_hash_value);
    transparent_crc(g_2571, "g_2571", print_hash_value);
    transparent_crc(g_2591, "g_2591", print_hash_value);
    transparent_crc(g_2666, "g_2666", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
