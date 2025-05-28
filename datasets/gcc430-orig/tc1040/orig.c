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



static const volatile unsigned short g_2 = 0UL;
static const short g_5 = 8L;
static const int g_36 = 0L;
static short g_40 = 0xAA2AL;
static unsigned char g_46 = 0xDFL;
static unsigned short g_53 = 65535UL;
static int g_57 = (-7L);
static unsigned short g_82 = 3UL;
static short g_84 = 0x0839L;
static unsigned short g_87 = 0xE161L;
static unsigned g_91 = 0x7F5CE947L;
static unsigned g_95 = 2UL;
static unsigned char g_107 = 249UL;
static const int *g_108 = &g_57;
static unsigned short g_118 = 0x514DL;
static unsigned g_121 = 4294967294UL;
static unsigned g_122 = 4294967293UL;
static int g_130 = 0L;
static char g_150 = 0xC6L;
static short g_151 = (-1L);
static int g_157 = 0L;
static unsigned g_198 = 0xD5697FC6L;
static unsigned short g_199 = 1UL;
static unsigned char g_212 = 0xC1L;
static int g_231 = 1L;
static volatile int **g_253 = (void*)0;
static int *g_261 = &g_231;
static int **g_260 = &g_261;
static unsigned short *g_280 = (void*)0;
static unsigned short **g_279 = &g_280;
static unsigned char g_311 = 0x18L;
static short *g_350 = &g_84;
static short *g_351 = &g_151;
static int g_356 = 7L;
static int g_427 = 0xFF6E7AD5L;
static unsigned short g_431 = 65535UL;
static unsigned short g_435 = 65535UL;
static int g_437 = 2L;
static int *g_441 = &g_157;
static int g_473 = 0x2368A525L;
static char g_535 = 0L;
static short g_601 = (-1L);
static const char *g_674 = &g_535;
static const char **g_673 = &g_674;
static short g_675 = 5L;
static int g_690 = 0x3338B775L;
static unsigned short **g_731 = &g_280;
static int g_766 = 0L;
static unsigned *g_799 = &g_121;
static unsigned short ****g_802 = (void*)0;
static const unsigned short **g_812 = (void*)0;
static unsigned g_818 = 0UL;
static short **g_849 = &g_350;
static volatile unsigned char g_1007 = 0x37L;
static volatile unsigned char *g_1006 = &g_1007;
static volatile unsigned char **g_1005 = &g_1006;
static volatile unsigned char *** const g_1004 = &g_1005;



static unsigned char func_1(void);
static unsigned func_7(unsigned p_8);
static unsigned char func_13(unsigned p_14);
static char func_22(unsigned char p_23);
static char func_42(unsigned char p_43);
static int func_47(unsigned short p_48, unsigned short p_49, int ** p_50);
static int ** func_54(unsigned p_55);
static unsigned char func_58(unsigned p_59, int ** p_60, const int p_61, int p_62, int p_63);
static unsigned short * func_72(unsigned short p_73, unsigned p_74, char p_75, short p_76);
static unsigned short func_77(unsigned p_78, unsigned short p_79);
static unsigned char func_1(void)
{
    int l_6 = 1L;
    unsigned l_30 = 0UL;
    int l_31 = 0xC3FA3C9EL;
    char *l_534 = &g_535;
    unsigned short *l_536 = &g_82;
    unsigned *l_537 = &g_91;
    unsigned l_564 = 0x9DBB08F2L;
    int l_622 = 6L;
    char **l_641 = &l_534;
    char ***l_640 = &l_641;
    unsigned short ***l_655 = (void*)0;
    unsigned char *l_742 = &g_212;
    unsigned char **l_741 = &l_742;
    short **l_754 = &g_351;
    int l_769 = 0x03E1E1D8L;
    int *l_790 = (void*)0;
    short l_794 = 0xC6B3L;
    int ***l_816 = &g_260;
    unsigned l_843 = 0xCB08A5F8L;
    unsigned l_876 = 1UL;
    unsigned l_906 = 4294967295UL;
    const int *l_974 = &l_622;
    int *l_987 = (void*)0;
    const char **l_994 = &g_674;
    unsigned short l_1001 = 1UL;
    short l_1008 = 1L;
    unsigned l_1013 = 0UL;
    char l_1014 = 5L;
    short l_1019 = 0x6B05L;
    if ((g_2 & ((((((safe_sub_func_uint32_t_u_u((g_5 , l_6), func_7(((((*l_537) = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_6, 4)), 1UL)) & (((((*l_536) = (func_13(l_6) & ((func_13((safe_add_func_int8_t_s_s(((g_5 < (!(safe_mod_func_int8_t_s_s(((*l_534) &= (safe_rshift_func_int8_t_s_u(func_22(((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_31 ^= (((((~(safe_sub_func_uint16_t_u_u(1UL, l_30))) != 0UL) & g_5) > 253UL) | l_6)), 10)) , l_31), 0xCECCL)) | g_5) >= g_5) || g_5)), g_36))), g_36)))) || (*g_108)), g_36))) < g_435) , l_31))) < g_5) > g_36) != l_30))) != l_6) | g_5)))) > g_435) == 255UL) >= 0xCB0D71E8L) == (-10L)) < l_30)))
    {
        unsigned l_556 = 1UL;
        short l_558 = 1L;
        (*g_260) = &l_6;
        for (g_212 = (-2); (g_212 < 4); g_212++)
        {
            short l_557 = 0x8715L;
            int l_575 = 0xEB3A9716L;
            int *l_579 = &g_57;
            const unsigned l_580 = 0UL;
        }
        (**g_260) &= (g_356 ^ 0x9CL);
    }
    else
    {
        short **l_585 = &g_350;
        int l_598 = (-5L);
        char l_633 = (-1L);
        unsigned l_660 = 0x7A8D6AECL;
        unsigned l_689 = 0x153890FDL;
        int **l_732 = &g_261;
        int *l_753 = &l_598;
        int ***l_763 = (void*)0;
        unsigned short l_781 = 0xC2E8L;
        if ((g_435 | ((void*)0 == l_585)))
        {
            unsigned l_586 = 4294967294UL;
            int ***l_592 = &g_260;
            int ****l_591 = &l_592;
            unsigned short l_597 = 0xB6C8L;
            short *l_599 = (void*)0;
            short *l_600 = &g_601;
            int *l_602 = (void*)0;
            int *l_603 = &g_231;
            short l_649 = 0x71E2L;
            unsigned char *l_662 = &g_311;
            unsigned char **l_661 = &l_662;
            int l_752 = (-2L);
            if ((g_435 , ((*l_603) = (l_586 < ((*l_600) ^= ((0xCFL | (func_7(g_199) && (l_31 = ((((safe_sub_func_uint16_t_u_u((l_586 != ((((safe_add_func_uint32_t_u_u(((((*l_591) = &g_260) != (void*)0) < ((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(((0xF4D7L <= 0x73ABL) & l_30), g_84)) || g_231) , 0xF9L), 2)) ^ 0x65B7L)), l_597)) & g_107) , l_598) , (*g_351))), (*g_351))) , g_121) == 0x548F6041L) >= l_598)))) >= l_598))))))
            {
                unsigned char l_614 = 254UL;
                (*l_603) |= ((safe_add_func_uint32_t_u_u((0x39B553B6L > (safe_add_func_uint16_t_u_u(((&l_598 != &l_598) == (safe_sub_func_int16_t_s_s(((((*l_537) = (g_427 & ((((*g_108) | 1UL) > ((&g_91 != &g_91) > ((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((l_31 = l_30) <= l_598) != l_614), l_564)), (*g_108))) < l_614))) >= g_95))) , l_614) , (*g_351)), (*g_351)))), l_598))), g_121)) || 0xEF1E55D8L);
                (*l_603) = (l_598 = l_598);
            }
            else
            {
                unsigned l_634 = 0x6549D2BDL;
                int l_648 = 0x5B444A66L;
                unsigned char l_691 = 0xA8L;
                int **l_700 = &g_261;
                unsigned short **l_729 = (void*)0;
                int l_733 = 0x3795F682L;
                (*l_603) |= (*g_108);
                if ((safe_mod_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_598 & 0UL), g_431)), ((((0x2D42A1ABL == (safe_mod_func_int8_t_s_s((((*g_351) > ((*l_536) = (safe_lshift_func_uint8_t_u_s((((0x620833CEL <= l_598) & ((*g_441) , l_633)) , g_473), 4)))) == l_634), l_634))) , 251UL) || 1L) != 1L))) && g_84) , (-9L)), g_231)))
                {
                    unsigned char l_637 = 7UL;
                    g_437 |= (l_648 = l_633);
                }
                else
                {
                    unsigned short ***l_654 = (void*)0;
                    unsigned short ****l_656 = &l_655;
                    int l_659 = 0x0D4D8155L;
                    if ((((l_649 , (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_36, g_87)), l_659))) ^ l_634) , l_660))
                    {
                        unsigned char ***l_663 = &l_661;
                        (*l_603) = (*l_603);
                        (*l_663) = l_661;
                        return g_435;
                    }
                    else
                    {
                        int *l_664 = &g_231;
                        unsigned short l_665 = 8UL;
                        const unsigned l_668 = 0UL;
                        (*g_260) = l_664;
                        (****l_591) = (l_665 || (0x72CBL == (safe_mod_func_uint16_t_u_u((l_648 = 65532UL), l_668))));
                        return (*l_664);
                    }
                }
                if ((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(65535UL, 2)), g_435)) <= (((*l_537) = l_633) <= l_634)) , ((void*)0 == g_673)))
                {
                    short l_676 = 0L;
                    unsigned l_708 = 1UL;
                    unsigned **l_712 = (void*)0;
                    unsigned l_735 = 5UL;
                    if (((*l_603) ^= ((g_675 ^ (&l_641 == &g_673)) != l_676)))
                    {
                        unsigned char l_683 = 255UL;
                        int *****l_687 = &l_591;
                        unsigned char l_688 = 0x4FL;
                        char l_701 = 1L;
                        int **l_709 = &l_602;
                        (**l_592) = &g_427;
                        l_691 &= func_77(((((*l_536) ^= (safe_rshift_func_int16_t_s_u(((*g_108) || (g_107 > (safe_sub_func_int32_t_s_s((*g_261), func_13(l_676))))), 11))) <= (g_130 <= ((l_683 < (0xAE7FL < (safe_unary_minus_func_uint16_t_u(((safe_add_func_uint8_t_u_u((((((((((*l_687) = &l_592) != (void*)0) , 0x662FL) | (*g_351)) || l_688) != (*g_351)) && l_689) , g_95), l_598)) , 0UL))))) == g_690))) , l_676), l_676);
                        (*l_709) = ((safe_mod_func_int32_t_s_s((g_690 = (l_6 |= (g_675 , (((*l_700) = (((*l_603) = func_7(((safe_add_func_int8_t_s_s((**l_700), 0x46L)) || l_31))) , (void*)0)) == (void*)0)))), 8L)) , (**l_592));
                    }
                    else
                    {
                        unsigned short l_719 = 65530UL;
                        int l_726 = 0L;
                        unsigned short ***l_730 = &g_279;
                        short l_734 = 3L;
                        l_648 = (safe_mod_func_uint32_t_u_u(((void*)0 == l_712), (safe_add_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(((l_708 | (-1L)) || 0UL), (*g_674))) > g_84) > l_734), l_735))));
                        (*l_603) = l_30;
                        (*l_732) = &l_726;
                        (***l_592) |= 0x034541A9L;
                    }
                    for (l_597 = 0; (l_597 < 37); l_597 = safe_add_func_int8_t_s_s(l_597, 5))
                    {
                        unsigned l_738 = 0x6319EE98L;
                        l_738 &= 0L;
                    }
                    for (g_601 = 0; (g_601 >= (-13)); g_601 = safe_sub_func_uint16_t_u_u(g_601, 1))
                    {
                        unsigned char ***l_743 = &l_661;
                        int l_750 = 0x3A503023L;
                        unsigned short l_751 = 65535UL;
                        (*l_603) = ((((*l_743) = l_741) != (void*)0) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((*g_350) = ((*g_351) = (l_752 ^= (((safe_add_func_int16_t_s_s((((*l_536) = l_6) , ((func_77(((l_735 <= (l_750 && (**g_673))) == (0xFC685A2AL || func_7(g_107))), l_751) | l_751) ^ (*l_603))), 0x3972L)) && g_675) , 8L)))), 3)), (*g_674))));
                        if ((*g_108))
                            break;
                        l_750 = ((*l_603) = l_31);
                    }
                    (*l_732) = &g_690;
                }
                else
                {
                    short l_755 = (-10L);
                    (*g_260) = l_753;
                    (**l_700) &= (&g_351 == l_754);
                    if (l_755)
                    {
                        int ***l_764 = (void*)0;
                        int *l_765 = &g_437;
                        char l_770 = 0x7AL;
                        g_766 &= ((func_42((**l_700)) <= ((((*l_765) = ((g_2 & func_13((((safe_rshift_func_int16_t_s_u(((*l_600) = (+((safe_sub_func_int16_t_s_s(((0L == (func_13(g_435) == (g_40 != (safe_unary_minus_func_int8_t_s(((l_763 != l_764) < 0x5A5727B4L)))))) , l_755), 0xB800L)) , g_437))), l_755)) & 4294967294UL) ^ 65535UL))) , 0L)) == 0UL) == 0x2AL)) , 1L);
                        (**g_260) = (safe_lshift_func_int16_t_s_u(l_769, 1));
                        (***l_592) &= l_770;
                        (***l_591) = (void*)0;
                    }
                    else
                    {
                        unsigned l_771 = 4294967295UL;
                        (*l_603) = (l_771 , func_42(l_771));
                    }
                }
                (*l_732) = &l_6;
            }
        }
        else
        {
            char l_772 = (-1L);
            unsigned char *l_784 = &g_311;
            unsigned char *l_785 = &g_46;
            int **l_788 = &g_261;
            int ***l_789 = &l_732;
            (*l_753) = l_772;
            l_6 |= (l_772 >= (safe_rshift_func_uint16_t_u_u(((((*g_108) , ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((l_772 > (safe_rshift_func_uint8_t_u_u(((((*l_785) = (l_781 != (safe_lshift_func_int8_t_s_u(0x6AL, ((*l_784) = ((*l_742) = l_772)))))) && l_772) < ((l_772 | (safe_add_func_int8_t_s_s(((((*l_789) = l_788) == (void*)0) | 7UL), 1UL))) <= 0x35C3740AL)), g_199))), l_622)), 8)) != (*l_753))) , 0xD34C43B6L) != (*l_753)), l_769)));
            g_356 ^= 0x0112CB70L;
            (*l_753) = 0x125BC7E0L;
        }
    }
    if ((&l_622 == l_790))
    {
        int l_793 = 0xA1820F47L;
        int l_795 = 0x6704DDA4L;
        int l_796 = 0x63F794BCL;
        unsigned *l_798 = &l_564;
        unsigned **l_797 = &l_798;
        unsigned *l_800 = &g_121;
        int *l_801 = &l_6;
        unsigned short *****l_803 = &g_802;
        unsigned char *l_806 = &g_311;
        (*l_801) = (safe_rshift_func_uint8_t_u_u(g_82, 0));
        (*l_801) = ((((g_231 == 0xB2ECL) , (((*g_350) = (*g_351)) >= (*g_351))) || ((*l_806) |= (g_107 = ((!(((**l_640) != (*g_673)) , ((**l_741) = (((*l_803) = g_802) == (void*)0)))) , (safe_lshift_func_int8_t_s_u((*g_674), g_46)))))) ^ (*l_801));
    }
    else
    {
        unsigned short l_813 = 0x952EL;
        unsigned short l_823 = 0x5D73L;
        unsigned char l_829 = 0UL;
        short l_858 = 0xBA38L;
        char l_869 = 0x86L;
        char **l_880 = &l_534;
        unsigned short * const *l_887 = &g_280;
        unsigned short * const **l_886 = &l_887;
        int l_931 = 0xD12F2E18L;
        int l_970 = 0xB8E19D5BL;
        int *l_975 = (void*)0;
        if ((*g_108))
        {
            unsigned short **l_811 = (void*)0;
            char *l_817 = &g_150;
            int l_821 = 0xD42C52E0L;
            int **l_822 = &l_790;
            short **l_847 = &g_351;
            int *l_879 = &g_356;
            int l_888 = 0L;
            short l_893 = 6L;
            g_818 ^= (((-8L) ^ g_87) != (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_811 != (g_812 = g_812)), ((*g_350) = (((*l_537) = (l_813 ^ 0x05095ECBL)) && (((((*l_817) = ((**l_641) = ((safe_rshift_func_int8_t_s_s((l_816 != &g_260), 1)) , (*g_674)))) | 0x17L) | 0x7402L) >= 0x3C1DL))))), l_813)));
            (*g_260) = ((safe_rshift_func_int8_t_s_s((**g_673), ((((l_813 != l_813) && ((*g_351) | (*g_350))) && 0x34L) || (*g_350)))) , (void*)0);
            for (g_40 = 0; (g_40 < (-30)); g_40--)
            {
                int l_828 = 0x5D721729L;
                int *l_838 = &g_231;
                short l_868 = 0L;
                (*l_838) = (!(((safe_sub_func_int32_t_s_s((-5L), l_828)) , (((0UL & (1UL || (l_829 , ((0x9EB28284L != (safe_lshift_func_int8_t_s_s(0x35L, (l_821 | (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_828, (-1L))), (*g_350))), l_813)))))) | 0UL)))) , 0x6FL) <= 7UL)) <= l_821));
                for (g_82 = 0; (g_82 == 33); ++g_82)
                {
                    short ***l_846 = &l_754;
                    short ***l_848 = (void*)0;
                    int l_852 = 3L;
                    for (l_794 = 22; (l_794 == 18); l_794 = safe_sub_func_int32_t_s_s(l_794, 7))
                    {
                        g_356 &= ((*g_108) <= func_7((*l_838)));
                        (*l_838) |= l_843;
                        (*g_260) = (void*)0;
                        (*g_260) = (void*)0;
                    }
                    if (((**g_673) & (((*l_846) = &g_350) != (g_849 = l_847))))
                    {
                        return g_151;
                    }
                    else
                    {
                        int l_855 = 0x35F77811L;
                        unsigned short l_859 = 1UL;
                        (*l_838) = (safe_lshift_func_uint16_t_u_s((g_437 ^ ((*g_674) == ((l_852 == ((safe_lshift_func_uint16_t_u_s(l_855, 12)) , (l_855 && func_13(((((l_858 ^= ((**l_741) |= (((l_855 ^ (~((safe_rshift_func_uint8_t_u_u(((((*g_674) , (*g_350)) > l_852) & (*g_108)), g_356)) > g_107))) , (void*)0) == &g_441))) >= (**g_673)) || (-8L)) || (*g_108)))))) < l_859))), 12));
                        if ((*g_108))
                            break;
                        g_690 ^= (safe_lshift_func_int8_t_s_s((g_5 < (*g_108)), l_859));
                        (*l_838) |= 8L;
                    }
                }
                (*l_838) |= (safe_add_func_uint32_t_u_u(0x571E3F1DL, (g_36 != ((*l_817) = (safe_add_func_int8_t_s_s(func_7((safe_rshift_func_uint8_t_u_s(l_829, 6))), g_82))))));
                (**l_816) = (*g_260);
            }
            if ((l_869 <= (l_876 , ((*l_879) |= (safe_mod_func_int8_t_s_s(0x32L, 0xEDL))))))
            {
                short l_885 = 0x22B1L;
                (**l_816) = (void*)0;
                (*l_879) = (((*g_674) == (l_880 != ((((l_829 , &l_641) != (void*)0) , g_231) , (*l_640)))) > (*g_674));
                for (g_198 = 0; (g_198 > 23); g_198 = safe_add_func_int32_t_s_s(g_198, 1))
                {
                    for (l_813 = 1; (l_813 == 15); l_813 = safe_add_func_uint16_t_u_u(l_813, 4))
                    {
                        if (l_893)
                            break;
                    }
                }
            }
            else
            {
                (*l_879) = (*g_108);
            }
        }
        else
        {
            const int l_907 = 0L;
            int ***l_926 = &g_260;
            unsigned l_930 = 0x1E941782L;
            int l_933 = 0xB880A357L;
            const int l_946 = 0xBA403268L;
            unsigned char l_971 = 255UL;
            for (g_150 = 11; (g_150 >= 26); g_150 = safe_add_func_uint16_t_u_u(g_150, 2))
            {
                int *l_908 = &g_130;
                unsigned short l_927 = 1UL;
                unsigned **l_967 = &l_537;
            }
            (**l_926) = l_975;
            (*g_260) = ((*g_441) , (**l_926));
        }
    }
    for (g_91 = 2; (g_91 < 41); g_91 = safe_add_func_int8_t_s_s(g_91, 4))
    {
        unsigned short l_978 = 0x0756L;
        int **l_988 = &l_790;
        char l_989 = 0x25L;
        unsigned *l_990 = (void*)0;
        unsigned *l_991 = (void*)0;
        unsigned *l_992 = &g_818;
        char l_993 = 0x6CL;
        const char ***l_995 = &l_994;
        int *** const *l_998 = &l_816;
        int *** const **l_999 = &l_998;
        g_130 ^= ((((l_978 && (g_437 <= (g_198 = (safe_sub_func_uint16_t_u_u(0x6707L, l_978))))) | ((*g_350) & (*g_351))) , (*g_351)) <= (*g_351));
        (*l_995) = l_994;
        if (((safe_rshift_func_uint8_t_u_u(g_199, (((*l_999) = l_998) != (void*)0))) <= ((*l_974) , (((g_2 <= (*g_674)) <= (&g_427 == (((*g_350) |= ((*g_799) , (-1L))) , (*l_988)))) & g_690))))
        {
            unsigned l_1000 = 0UL;
            short l_1002 = 3L;
            unsigned char ***l_1003 = &l_741;
            int *l_1009 = &g_437;
            (*l_1009) = (l_1000 >= (***g_1004));
            return (***g_1004);
        }
        else
        {
            char l_1010 = 0L;
            (*g_260) = (*l_988);
            return l_1010;
        }
    }
    if ((safe_lshift_func_uint8_t_u_s(((*g_350) , (*g_1006)), (*g_674))))
    {
        int l_1020 = 6L;
        int *l_1021 = &g_690;
        l_1014 |= l_1013;
        for (g_53 = 16; (g_53 != 34); g_53 = safe_add_func_int8_t_s_s(g_53, 1))
        {
            g_130 = func_7(((*g_799) |= 0x1CD37528L));
        }
        l_1020 |= (safe_sub_func_uint8_t_u_u(0x4AL, ((**l_641) = l_1019)));
        (**l_816) = l_1021;
    }
    else
    {
        (*g_260) = &g_766;
    }
    return (***l_816);
}







static unsigned func_7(unsigned p_8)
{
    unsigned short ***l_538 = &g_279;
    int l_547 = 0x86581499L;
    const int l_550 = 0x95095EA4L;
    int *l_551 = &g_427;
    (*l_551) = (((l_538 != ((safe_add_func_uint8_t_u_u(0x49L, p_8)) , l_538)) || (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*g_351) = p_8), ((0UL < 0UL) >= ((safe_sub_func_uint16_t_u_u((l_547 = p_8), (safe_lshift_func_uint8_t_u_u(((l_550 >= 6UL) || 0x83L), l_550)))) , p_8)))), p_8))) == l_550);
    return g_40;
}







static unsigned char func_13(unsigned p_14)
{
    unsigned l_15 = 4294967295UL;
    return l_15;
}







static char func_22(unsigned char p_23)
{
    unsigned l_41 = 1UL;
    char l_44 = 0xA5L;
    int *l_432 = &g_130;
    const unsigned short *l_434 = &g_435;
    const unsigned short ** const l_433 = &l_434;
    int l_440 = (-1L);
    int *l_444 = &g_157;
    int **l_443 = &l_444;
    int ***l_442 = &l_443;
    int l_445 = 1L;
    unsigned l_461 = 0x2455BDA0L;
    int l_469 = 4L;
    unsigned *l_525 = &g_122;
    for (p_23 = 3; (p_23 >= 35); p_23 = safe_add_func_uint16_t_u_u(p_23, 9))
    {
        const int *l_35 = &g_36;
        const int **l_34 = &l_35;
        short *l_39 = &g_40;
        unsigned char *l_45 = &g_46;
        char *l_430 = &g_150;
        int *l_436 = &g_437;
        (*l_34) = (void*)0;
        (*l_436) &= (((safe_mod_func_int16_t_s_s(((*l_39) = p_23), g_5)) , l_41) <= (((((((g_431 = ((*l_430) = func_42(((*l_45) ^= l_44)))) != g_36) , ((*l_34) == l_432)) == (((void*)0 == l_433) , 1UL)) , (void*)0) == &l_35) , p_23));
        (*l_34) = (void*)0;
    }
    if (((*l_432) = ((+((-7L) & (func_58((((safe_rshift_func_int8_t_s_u((0x00AB5CC9L <= ((((*l_432) ^ p_23) , l_432) == ((l_440 = p_23) , (g_441 = &g_157)))), 3)) & ((~(((*g_351) = (((((p_23 == g_311) ^ 0x381EB79BL) <= 0x1AL) , l_442) == &l_443)) != 65535UL)) > l_445)) <= (*g_350)), &l_432, p_23, p_23, (**g_260)) != g_427))) , p_23)))
    {
        unsigned short ***l_456 = &g_279;
        unsigned short ****l_455 = &l_456;
        int l_462 = 0xB986FF75L;
        int l_470 = 1L;
        int *l_471 = (void*)0;
        int *l_472 = &g_473;
        unsigned char *l_474 = (void*)0;
        unsigned char *l_475 = &g_212;
        unsigned char *l_476 = &g_311;
        char * const l_518 = &g_150;
        char * const * const l_517 = &l_518;
        (**g_260) = ((safe_rshift_func_int8_t_s_s((((~(safe_rshift_func_uint8_t_u_u(((*l_476) = (((*l_475) = (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_u(((((*l_455) = (void*)0) == (void*)0) || (((*l_472) ^= ((safe_mod_func_int16_t_s_s(p_23, (l_462 = (l_470 |= ((*l_432) ^ ((((safe_rshift_func_int16_t_s_s(l_461, func_77(((l_462 >= (safe_rshift_func_int8_t_s_s((g_95 , l_462), 4))) <= (((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((4294967286UL >= p_23), p_23)), g_151)) != l_462) , g_437)), l_469))) != 0xC086L) , l_462) != p_23)))))) , (*g_441))) , p_23)), 4)) < p_23) & p_23) == p_23), 0x42F2ACE3L))))) == g_53)), (*l_432)))) && (*l_432)) || 1L), 6)) > (-8L));
        for (g_427 = 0; (g_427 == 0); g_427 = safe_add_func_uint32_t_u_u(g_427, 3))
        {
            unsigned l_511 = 0xA5C60533L;
            char *l_520 = (void*)0;
            char **l_519 = &l_520;
            unsigned l_524 = 4294967295UL;
            if ((*g_108))
            {
                int l_486 = (-1L);
                unsigned char *l_500 = (void*)0;
                int l_504 = (-1L);
                for (l_41 = 0; (l_41 >= 14); ++l_41)
                {
                    char l_485 = (-8L);
                    char *l_493 = &l_485;
                    unsigned *l_501 = (void*)0;
                    unsigned *l_502 = &g_91;
                    int l_503 = 8L;
                    int *l_505 = &g_231;
                    int *l_506 = &l_462;
                    l_486 ^= ((((*g_441) = func_13(g_231)) , ((safe_rshift_func_int16_t_s_u((*g_351), func_58((func_13(p_23) ^ func_58(g_473, &g_261, (*g_261), (((safe_lshift_func_int16_t_s_s(func_77(l_485, g_157), l_485)) ^ 0xDCC10259L) <= 0xC7A9L), (*l_432))), &g_261, p_23, p_23, p_23))) && 0x562F081EL)) & 0xFEE6C433L);
                    (*g_260) = (*g_260);
                    (*l_506) &= (safe_add_func_uint8_t_u_u((((!(safe_add_func_int16_t_s_s((!((~((*l_505) ^= ((-4L) | ((p_23 >= (safe_rshift_func_int8_t_s_s(((*l_493) = g_40), 3))) || (safe_add_func_int16_t_s_s(((+(l_504 ^= (((((func_77(p_23, (((safe_rshift_func_uint8_t_u_u(((((((!(func_13(((*l_502) &= (safe_mod_func_uint8_t_u_u((g_311 = ((void*)0 != l_500)), ((*l_475) |= (((*l_432) ^= p_23) != ((*g_350) = ((g_95 ^ p_23) && p_23)))))))) , 0xF8L)) <= p_23) > 0x879EEF4EL) == 0xB4L) & g_150) || p_23), p_23)) > l_461) && l_485)) > p_23) ^ 0x37L) && l_503) , (void*)0) != l_475))) , (*g_351)), p_23)))))) > g_122)), 65535UL))) ^ l_486) && 0x6DL), p_23));
                }
                (**g_260) |= l_504;
                return p_23;
            }
            else
            {
                unsigned *l_514 = &l_511;
                char ***l_521 = &l_519;
                int *l_526 = &l_462;
                (*l_526) = ((*g_261) = (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((g_87 , l_511) < (safe_lshift_func_int8_t_s_u(g_82, ((p_23 , (l_514 == (((safe_mod_func_int16_t_s_s(((l_517 == ((*l_521) = l_519)) && (safe_lshift_func_int8_t_s_s(((*g_351) || ((l_470 != 0xFD43249AL) == l_524)), g_40))), (*g_350))) | l_511) , l_525))) <= p_23)))), (*l_432))), 0xB99EL)));
                (*g_260) = ((((*l_526) = func_13(l_524)) && ((*l_526) , (((-8L) <= (g_5 <= ((safe_mod_func_int8_t_s_s(l_470, (safe_mod_func_uint32_t_u_u((((*g_350) ^= (0x60L != g_107)) < ((g_427 >= (-7L)) != 0xCD4FL)), (*l_526))))) | g_121))) | l_511))) , &l_445);
            }
        }
    }
    else
    {
        char *l_532 = &l_44;
        char **l_531 = &l_532;
        int l_533 = 0x5AA17D50L;
        (*g_261) ^= ((((p_23 , ((*l_531) = &l_44)) != &l_44) > g_5) <= l_533);
    }
    return p_23;
}







static char func_42(unsigned char p_43)
{
    int l_51 = 0xEB7F464FL;
    unsigned short *l_52 = &g_53;
    int l_428 = 0x851CC538L;
    char l_429 = (-6L);
    l_428 &= func_47(l_51, ((*l_52) = l_51), func_54(g_5));
    return l_429;
}







static int func_47(unsigned short p_48, unsigned short p_49, int ** p_50)
{
    int **l_376 = (void*)0;
    int *l_377 = &g_356;
    char l_399 = 0x36L;
    short **l_402 = &g_350;
    int *l_403 = (void*)0;
    int *l_404 = &g_130;
    short l_409 = 0x6A86L;
    int l_412 = 0x12C1CEFCL;
    unsigned *l_420 = &g_91;
    unsigned **l_419 = &l_420;
    short *l_423 = &l_409;
    int *l_424 = (void*)0;
    int *l_425 = (void*)0;
    int *l_426 = &g_427;
    for (p_49 = (-5); (p_49 < 45); ++p_49)
    {
        return (**g_260);
    }
    if ((l_376 == g_253))
    {
        unsigned char *l_380 = &g_311;
        int l_395 = 0xBAF933E1L;
        int l_396 = 0x222758EDL;
        if ((((((void*)0 != &p_50) , (*l_377)) , p_48) < (*l_377)))
        {
            short l_389 = (-1L);
            unsigned short *l_390 = &g_53;
            l_396 ^= (((p_48 , 1L) | ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((*l_377) = (**g_260)), l_389)), p_49)), 5)) == l_389), ((*l_390) = p_48))) , ((*g_351) = (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(((0x659DL == (-10L)) > g_118), 0)) , l_395) , (void*)0) == (void*)0), 5))))) && l_395);
        }
        else
        {
            (**g_260) = (*l_377);
        }
    }
    else
    {
        (*g_260) = l_377;
        (*g_261) |= ((safe_lshift_func_int8_t_s_s((g_53 >= (*g_108)), 0)) > ((g_95 <= (l_399 , p_49)) > 0xE5C4L));
        (*l_377) = (**g_260);
    }
    l_412 = (!((*l_377) & ((p_48 > (safe_lshift_func_int8_t_s_u((((*l_404) |= ((void*)0 == l_402)) >= 4294967295UL), (safe_lshift_func_uint8_t_u_u((((*l_377) , (safe_lshift_func_uint16_t_u_s(l_409, ((((p_48 , (safe_sub_func_int16_t_s_s(((*g_351) ^ 0x97AFL), 8L))) , (*g_108)) && p_48) , (*g_350))))) != p_48), 3))))) ^ p_48)));
    (*l_426) &= ((**g_260) = (l_412 |= (safe_add_func_int8_t_s_s(func_58((((safe_add_func_uint16_t_u_u((0UL & ((*l_377) = ((*l_423) = ((*g_351) ^= (0L | (safe_sub_func_int32_t_s_s((((*l_419) = l_403) == (((**l_402) = (safe_mod_func_uint8_t_u_u(p_49, (*l_377)))) , &g_95)), (*l_404)))))))), ((g_95 || p_49) < 0xAC845C94L))) <= (*l_404)) , 0UL), &g_261, (*g_108), (*l_404), (*l_404)), 0x72L))));
    return (*g_261);
}







static int ** func_54(unsigned p_55)
{
    int *l_56 = &g_57;
    short *l_126 = (void*)0;
    int *l_128 = (void*)0;
    int *l_129 = &g_130;
    char *l_153 = (void*)0;
    unsigned char *l_174 = &g_107;
    const unsigned short l_176 = 0x4094L;
    int l_187 = 0L;
    int **l_259 = &l_128;
    unsigned short ** const l_290 = &g_280;
    int *l_318 = &g_231;
    short **l_340 = (void*)0;
    int **l_373 = &l_56;
    if ((((void*)0 != l_56) < 4UL))
    {
        int l_71 = 0xDBD7CCF7L;
        unsigned short *l_116 = &g_82;
        unsigned short **l_115 = &l_116;
        unsigned short *l_117 = &g_118;
        unsigned *l_119 = (void*)0;
        unsigned *l_120 = &g_121;
        unsigned l_123 = 0xAEC5E7E4L;
        (*l_56) = g_36;
        (*l_56) = ((g_36 > (func_58((g_122 ^= (((*l_120) ^= ((safe_mod_func_int32_t_s_s((func_13((safe_unary_minus_func_uint32_t_u(4294967287UL))) >= ((safe_mod_func_uint16_t_u_u((0x74484A86L < (((safe_lshift_func_uint8_t_u_s(func_13(l_71), 6)) || (((((*l_115) = func_72(func_77((p_55 , (!((*l_56) | ((safe_add_func_uint16_t_u_u(func_13(l_71), g_46)) > p_55)))), g_57), p_55, p_55, g_36)) == l_117) , &g_46) != &g_46)) <= (-1L))), g_5)) >= g_46)), p_55)) ^ g_46)) , 4294967287UL)), &l_56, p_55, l_123, p_55) | 255UL)) & 0x14A6L);
        (*l_56) = (l_126 == (void*)0);
    }
    else
    {
        const int **l_127 = &g_108;
        (*l_127) = &g_36;
    }
    if (((*l_56) = (((*l_129) ^= (*l_56)) , (g_57 , (*g_108)))))
    {
        int l_135 = (-6L);
        unsigned short *l_145 = &g_87;
        unsigned short **l_144 = &l_145;
        int **l_146 = (void*)0;
        const unsigned short *l_147 = &g_82;
        unsigned *l_148 = &g_91;
        char *l_149 = &g_150;
        unsigned short l_152 = 65535UL;
        unsigned l_160 = 0xB06647E6L;
        unsigned short l_167 = 65531UL;
        char *l_209 = &g_150;
        int *l_240 = &g_231;
        unsigned *l_248 = &g_198;
        if ((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((l_135 == (p_55 ^ ((func_13((g_151 = (func_13((safe_lshift_func_int8_t_s_u(p_55, g_91))) , (safe_rshift_func_int16_t_s_u(p_55, (safe_rshift_func_int8_t_s_u(((*l_149) |= ((g_95 |= ((*l_148) ^= (safe_add_func_int8_t_s_s(g_122, g_82)))) ^ 0x2EF88E35L)), 4))))))) >= p_55) || l_135))), l_152)) , (-1L)) >= 0x2EL) , g_118), (*g_108))))
        {
            unsigned short l_161 = 0xA481L;
            unsigned char l_163 = 0x98L;
            int **l_165 = &l_56;
            unsigned short l_175 = 0x552DL;
            unsigned *l_180 = &g_95;
            unsigned l_232 = 0x9656563EL;
            (*l_129) ^= (*g_108);
            (*l_56) &= (-10L);
            if ((!(-9L)))
            {
                short l_154 = 1L;
                int *l_155 = (void*)0;
                int *l_156 = &g_157;
                (*l_56) &= ((l_153 != (void*)0) < ((((l_154 > (((l_154 <= ((*l_145) = p_55)) <= ((((*l_156) = func_13(g_118)) , (g_91 , g_157)) | g_118)) >= g_118)) && p_55) ^ 0UL) , p_55));
            }
            else
            {
                int *l_162 = &l_135;
                unsigned short *l_164 = &g_82;
                unsigned short *l_173 = (void*)0;
                int l_200 = (-1L);
                unsigned **l_203 = &l_180;
                if (((((l_164 = (((!(0xE78AL != 0xA973L)) | func_58(g_130, &l_129, ((*l_162) &= ((l_161 = (safe_lshift_func_int16_t_s_u(l_160, 15))) == 1UL)), g_130, (((l_163 ^ g_95) ^ g_57) || p_55))) , (void*)0)) == (void*)0) <= 0x6EB2L) , (*g_108)))
                {
                    int **l_166 = &l_128;
                    return l_146;
                }
                else
                {
                    (*l_129) |= (l_167 && 1L);
                }
                if ((((safe_rshift_func_int8_t_s_s((((**l_144) = (p_55 <= ((**l_165) && p_55))) == (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((((*l_174) = ((((g_130 < ((l_135 = ((**l_165) ^ g_118)) , (((p_55 | (((~(&l_163 != l_174)) >= g_5) , g_107)) , (-1L)) , g_5))) > (*l_129)) && p_55) , l_175)) < p_55) || 0xA565C7EDL))), g_91))), l_176)) < p_55) | 0UL))
                {
                    unsigned *l_177 = (void*)0;
                    unsigned **l_178 = &l_177;
                    unsigned **l_179 = &l_148;
                    const short *l_184 = &g_5;
                    const short **l_183 = &l_184;
                    int l_197 = (-5L);
                    (*l_129) |= (g_57 = p_55);
                    l_162 = &g_57;
                    (*l_165) = &g_130;
                    if ((((((*l_179) = ((*l_178) = l_177)) != l_180) && g_107) > (0xC6L && (safe_sub_func_int32_t_s_s((&g_151 != ((*l_183) = l_126)), ((safe_rshift_func_uint8_t_u_u((((p_55 > (*l_56)) > 252UL) , p_55), l_187)) == g_91))))))
                    {
                        unsigned l_196 = 1UL;
                        (*l_129) = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((g_150 , func_77((g_95 |= p_55), (p_55 <= g_57))) < (*l_56)) <= (((*l_174) = g_46) > (safe_rshift_func_int8_t_s_u(func_13((g_199 = (+(safe_sub_func_int8_t_s_s((l_196 ^ func_13((g_198 |= l_197))), 0UL))))), l_135)))), g_118)), l_200));
                    }
                    else
                    {
                        char **l_208 = &l_149;
                        short *l_213 = (void*)0;
                        short *l_214 = (void*)0;
                        short *l_215 = &g_151;
                        (*l_165) = (((((safe_add_func_uint16_t_u_u(g_87, (l_203 != l_203))) == (-7L)) , &l_162) == ((((((*l_215) &= ((*l_129) = ((((safe_sub_func_uint8_t_u_u(((*l_174) ^= (safe_add_func_uint32_t_u_u((((*l_208) = &g_150) != (g_198 , l_209)), (safe_sub_func_uint16_t_u_u(g_150, g_84))))), p_55)) ^ p_55) > 0x2851L) ^ g_212))) ^ g_121) <= g_46) != p_55) , (void*)0)) , (*l_165));
                    }
                }
                else
                {
                    short l_227 = 0xAA35L;
                    int **l_228 = &l_129;
                    for (g_84 = 26; (g_84 != 22); g_84--)
                    {
                        const unsigned char l_220 = 0x9DL;
                        int *l_229 = (void*)0;
                        int *l_230 = &l_200;
                        g_231 |= ((*l_162) | ((safe_rshift_func_int8_t_s_u(g_57, (0xCA5C7507L > (-2L)))) , ((((((((l_220 , g_122) & (((*l_230) &= (g_199 == (((**l_144) = func_13(((safe_lshift_func_int8_t_s_s(p_55, 3)) ^ ((func_58((safe_lshift_func_int16_t_s_s((l_227 |= (((safe_lshift_func_int8_t_s_u(g_57, 1)) , &g_150) == (void*)0)), 5)), l_228, p_55, l_220, p_55) != 1UL) == p_55)))) || l_152))) , (**l_228))) != 3L) && 0xB9L) , 0x33L) <= 1UL) != p_55) <= 0x154FC8DDL)));
                    }
                }
                l_232 = ((void*)0 != l_147);
            }
            for (g_118 = (-29); (g_118 > 58); g_118++)
            {
                for (l_135 = 17; (l_135 != (-2)); l_135 = safe_sub_func_int32_t_s_s(l_135, 2))
                {
                    short *l_237 = &g_151;
                    if (func_77((((*l_237) = g_95) < ((p_55 , p_55) , (-1L))), g_87))
                    {
                        (*l_56) = (safe_lshift_func_int8_t_s_s(p_55, p_55));
                        (*l_165) = &g_130;
                    }
                    else
                    {
                        return l_146;
                    }
                }
                if ((*g_108))
                    continue;
            }
        }
        else
        {
            int **l_241 = &l_240;
            (*l_241) = l_240;
            (**l_241) = (*g_108);
        }
        (*l_240) = (((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_55, 6)), g_36)) & (func_77(g_150, g_46) < (p_55 >= (((safe_add_func_uint32_t_u_u(((*l_248) = (0x4C425AE9L <= (-9L))), p_55)) != 2UL) == 0x128EL)))) , 0xF469B733L);
    }
    else
    {
        int *l_249 = &g_231;
        int **l_250 = &l_56;
        (*l_250) = l_249;
        for (g_130 = (-9); (g_130 == (-2)); ++g_130)
        {
            volatile int ***l_254 = (void*)0;
            volatile int ***l_255 = &g_253;
            (*l_255) = g_253;
            (*l_250) = l_128;
            (*l_250) = l_128;
            if (p_55)
                break;
        }
        (*l_250) = (void*)0;
    }
    for (g_150 = 0; (g_150 == (-11)); g_150--)
    {
        int **l_258 = &l_129;
        return g_260;
    }
    for (l_187 = (-4); (l_187 > (-29)); l_187 = safe_sub_func_int8_t_s_s(l_187, 5))
    {
        const char l_264 = 0x16L;
        const unsigned char *l_277 = &g_212;
        const short l_293 = 0xA879L;
        int l_294 = 0L;
        int **l_315 = &l_129;
        unsigned char l_338 = 0UL;
        (*l_259) = (*g_260);
        (*g_260) = (*l_259);
        if (((*g_108) & l_264))
        {
            unsigned char l_275 = 9UL;
            unsigned short * const * const l_281 = &g_280;
            int **l_287 = &l_56;
            short **l_367 = &l_126;
            for (g_121 = 0; (g_121 == 16); ++g_121)
            {
                unsigned char **l_276 = &l_174;
                int **l_278 = &g_261;
                unsigned char *l_282 = &g_107;
                short *l_325 = &g_84;
                short *l_326 = (void*)0;
                short *l_327 = &g_151;
                unsigned *l_346 = &g_95;
                unsigned **l_345 = &l_346;
                int ***l_365 = (void*)0;
                int ***l_366 = &l_259;
                unsigned *l_372 = &g_122;
            }
        }
        else
        {
            (*g_260) = (*l_315);
            (**l_259) = (**l_315);
        }
    }
    return &g_261;
}







static unsigned char func_58(unsigned p_59, int ** p_60, const int p_61, int p_62, int p_63)
{
    (**p_60) &= (safe_lshift_func_uint16_t_u_u((~p_62), (g_5 < g_91)));
    return p_61;
}







static unsigned short * func_72(unsigned short p_73, unsigned p_74, char p_75, short p_76)
{
    int l_103 = 0xDA5E0CF2L;
    int * const l_106 = &g_57;
    int *l_110 = (void*)0;
    int **l_109 = &l_110;
    int ***l_113 = &l_109;
    unsigned char *l_114 = &g_46;
    g_107 ^= (g_82 <= ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(func_13(g_82), g_87)), ((l_103 <= (safe_mod_func_uint32_t_u_u(((((((l_106 != l_106) , (1UL ^ 1UL)) && (*l_106)) > (*l_106)) , g_82) != 9UL), 9L))) && g_5))) != (-4L)));
    g_108 = &g_36;
    (*l_109) = &g_57;
    g_57 = (safe_add_func_int8_t_s_s((g_36 && (((((*l_113) = (void*)0) != (void*)0) == 0x0FL) < (&g_107 == l_114))), g_91));
    return &g_82;
}







static unsigned short func_77(unsigned p_78, unsigned short p_79)
{
    short *l_83 = &g_84;
    unsigned short *l_85 = (void*)0;
    unsigned short *l_86 = &g_87;
    unsigned *l_90 = &g_91;
    int *l_93 = &g_57;
    int **l_92 = &l_93;
    unsigned *l_94 = &g_95;
    int *l_98 = &g_57;
    (*l_98) = (((*l_86) |= (((*l_83) = (g_82 = p_79)) != g_57)) <= (safe_sub_func_uint32_t_u_u(g_57, (((((*l_90) |= p_79) & (((*l_94) = (((*l_92) = l_90) == &g_57)) >= g_36)) , (safe_rshift_func_int8_t_s_u((((void*)0 == &g_46) , p_78), 1))) | p_79))));
    (*l_98) = 1L;
    return p_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
