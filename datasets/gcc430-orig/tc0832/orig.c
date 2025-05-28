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



static int g_2 = 0L;
static int g_5 = (-3L);
static volatile int g_8 = 4L;
static int g_9 = 3L;
static int g_12 = 0x80444555L;
static int g_19 = (-3L);
static unsigned char g_30 = 0xFFL;
static int g_38 = 0x3813BF58L;
static int g_57 = 0x839BF5BFL;
static short g_72 = 0x039CL;
static unsigned char g_114 = 0x33L;
static volatile int g_117 = (-4L);
static volatile int *g_116 = &g_117;
static volatile int **g_115 = &g_116;
static int *g_118 = (void*)0;
static int g_136 = 6L;
static short g_145 = 0x8BACL;
static unsigned g_151 = 2UL;
static int *g_153 = &g_57;
static unsigned short g_180 = 65529UL;
static char g_200 = 0x1EL;
static char g_202 = 0xC8L;
static char g_204 = 0x05L;
static unsigned char g_212 = 3UL;
static int **g_240 = (void*)0;
static unsigned short g_270 = 0UL;
static unsigned short *g_282 = &g_180;
static unsigned short **g_281 = &g_282;
static unsigned g_300 = 4294967286UL;
static short g_305 = 0xBE77L;
static volatile char g_356 = 0x91L;
static unsigned g_385 = 0x0D329E78L;
static volatile short *g_408 = (void*)0;
static volatile short **g_407 = &g_408;
static int **g_433 = &g_153;
static short ***g_458 = (void*)0;
static char *g_462 = (void*)0;
static char **g_461 = &g_462;
static char ***g_460 = &g_461;
static unsigned char g_470 = 255UL;
static unsigned short g_479 = 1UL;
static int g_481 = 0xB5EDEE61L;
static int g_484 = 0x7992D643L;
static unsigned char g_702 = 0UL;
static int *g_706 = &g_484;
static unsigned short ***g_743 = &g_281;
static unsigned short ****g_742 = &g_743;
static unsigned char g_753 = 0x79L;
static unsigned char *g_859 = &g_114;
static unsigned char *g_860 = &g_212;



static unsigned func_1(void);
static int func_23(unsigned p_24, int * p_25, int * p_26, int * p_27, unsigned char p_28);
static int * func_32(unsigned short p_33, int * p_34);
static int * func_42(unsigned short p_43, char p_44, int p_45, int * p_46);
static short func_73(unsigned p_74);
static int func_77(unsigned p_78, int ** p_79, short p_80, int * p_81, int * p_82);
static char func_86(int * p_87, int p_88);
static int * func_89(int ** p_90, unsigned short p_91, unsigned char * p_92, unsigned char p_93, short p_94);
static int ** func_95(unsigned char p_96, int p_97, unsigned p_98, unsigned short p_99);
static int func_102(int p_103, char p_104, int * p_105, int p_106);
static unsigned func_1(void)
{
    unsigned l_17 = 0x733582F8L;
    short *l_524 = &g_72;
    short **l_523 = &l_524;
    short l_532 = 0x1C53L;
    unsigned l_545 = 0x5146A9DDL;
    int *l_555 = (void*)0;
    unsigned char **l_560 = (void*)0;
    int l_574 = 0xABE2860FL;
    unsigned short ***l_605 = &g_281;
    unsigned short l_644 = 0x3464L;
    int *l_666 = &g_136;
    short l_681 = 2L;
    int *l_685 = (void*)0;
    int *l_705 = &g_12;
    short ****l_709 = (void*)0;
    unsigned short l_737 = 0x5C67L;
    int l_738 = (-10L);
    unsigned short ***l_759 = &g_281;
    unsigned char l_793 = 0xD2L;
    unsigned short l_794 = 1UL;
    int l_828 = 5L;
    short *l_829 = &g_305;
lbl_767:
    for (g_2 = 0; (g_2 < (-6)); --g_2)
    {
        int *l_54 = &g_9;
        char **l_559 = (void*)0;
        char l_578 = 0x20L;
        short *l_582 = &g_72;
        int l_590 = (-1L);
        unsigned short l_634 = 0UL;
        for (g_5 = 8; (g_5 >= 2); g_5 = safe_sub_func_uint16_t_u_u(g_5, 1))
        {
            int l_20 = 0x77A1245CL;
            short **l_525 = &l_524;
            for (g_9 = (-30); (g_9 > (-3)); g_9 = safe_add_func_int16_t_s_s(g_9, 8))
            {
                unsigned short l_522 = 0x5312L;
                for (g_12 = (-13); (g_12 != 22); g_12 = safe_add_func_uint16_t_u_u(g_12, 1))
                {
                    int *l_18 = &g_19;
                    int *l_55 = (void*)0;
                    l_20 = ((*l_18) = (safe_add_func_uint8_t_u_u(0UL, l_17)));
                    for (g_19 = (-6); (g_19 > 26); g_19 = safe_add_func_int32_t_s_s(g_19, 1))
                    {
                        unsigned char *l_29 = &g_30;
                        int l_35 = 0xAE974CA7L;
                        int **l_47 = &l_18;
                        int *l_49 = &g_12;
                        int **l_48 = &l_49;
                        char **l_521 = &g_462;
                    }
                    (*g_116) ^= (-1L);
                    (*g_433) = (l_54 = (*g_433));
                }
                (*g_115) = (*g_115);
                if (l_522)
                    break;
            }
            (**g_433) = (*g_153);
            (**g_115) &= (l_17 ^ (l_523 != l_525));
        }
        for (g_200 = 0; (g_200 > 4); ++g_200)
        {
            short *l_533 = &g_305;
            int l_536 = 0x7B3F76F2L;
            int l_543 = 1L;
            unsigned l_544 = 0xCB852216L;
            int l_548 = (-1L);
            char l_570 = 0x57L;
            int *l_575 = (void*)0;
            unsigned short l_606 = 5UL;
            unsigned short ***l_640 = &g_281;
        }
        for (l_644 = 0; (l_644 <= 1); l_644++)
        {
            (**g_115) = ((0xEB7BL ^ ((*l_582) = (*l_54))) < (-1L));
            (*g_433) = func_32((safe_sub_func_uint16_t_u_u(4UL, g_470)), l_666);
        }
    }
    if (((*g_153) &= (*l_666)))
    {
        unsigned short l_669 = 0x86F4L;
        int l_677 = 0x9CE1DC2FL;
        int l_683 = 6L;
        char l_684 = 0xF4L;
        int *l_686 = &g_481;
        unsigned short ****l_687 = &l_605;
        unsigned char l_692 = 0UL;
        unsigned short *l_693 = &g_479;
        unsigned *l_694 = &g_300;
        unsigned char *l_701 = &g_30;
        unsigned char *l_703 = (void*)0;
        unsigned char *l_704 = &g_470;
        unsigned l_713 = 4294967293UL;
        unsigned char l_735 = 0x57L;
        int l_741 = 1L;
        unsigned char l_748 = 0x96L;
        short l_756 = 1L;
lbl_760:
        for (g_305 = 5; (g_305 > 10); g_305 = safe_add_func_uint8_t_u_u(g_305, 8))
        {
            int *l_670 = (void*)0;
            int *l_680 = &g_19;
            unsigned char *l_682 = &g_212;
            (*l_666) = (l_669 != func_23(l_669, l_670, (*g_433), func_32((safe_add_func_int16_t_s_s((*l_666), ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(((l_677 = (*l_666)) >= 0L), (((l_683 = (((l_669 >= ((*l_682) = (((*l_680) |= (**g_433)) != l_681))) > l_669) == g_481)) != l_684) & l_684))) == 0xD126L), l_684)) == g_30))), &l_574), g_136));
            l_686 = l_685;
        }
        (*l_705) = (func_23((((*l_687) = l_605) != (void*)0), &l_677, &l_574, g_706, (*l_705)) != g_479);
        for (l_574 = 12; (l_574 < 20); l_574 = safe_add_func_int16_t_s_s(l_574, 6))
        {
            unsigned short l_712 = 0x4375L;
            unsigned char *l_717 = &g_212;
            int *l_719 = &l_683;
            if ((l_712 == l_713))
            {
                unsigned l_718 = 1UL;
                for (l_684 = 0; (l_684 > (-9)); l_684 = safe_sub_func_uint8_t_u_u(l_684, 6))
                {
                    int ***l_716 = &g_240;
                    char l_720 = 1L;
                    unsigned char *l_733 = (void*)0;
                    if (((**g_281) ^ g_702))
                    {
                        char l_723 = 0x5DL;
                        int ***l_732 = &g_433;
                        char *l_734 = &l_720;
                        (*l_666) = ((safe_mod_func_uint32_t_u_u(l_723, (safe_sub_func_uint8_t_u_u(((0xA7L != (g_8 != (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((*l_734) ^= ((func_86(func_89(((*l_732) = ((*l_716) = func_95(l_723, (*l_719), ((*l_694) = 0xE26F66ACL), l_723))), (*g_282), l_733, g_38, (*l_719)), g_72) >= 0L) != l_718)), g_2)) != (*g_282)), (*g_706))))) && 0xB5EEL), l_735)))) || (***l_732));
                        return l_718;
                    }
                    else
                    {
                        (*l_719) &= (g_484 != 1UL);
                    }
                }
                if ((**g_433))
                    break;
                return g_114;
            }
            else
            {
                unsigned l_736 = 0xFA6EAC7CL;
                int *l_752 = &g_5;
                (**g_433) = (0xE5328678L > 0x879A0458L);
                if ((l_736 | (((l_737 ^= g_484) <= (4294967294UL ^ (1UL ^ l_738))) < (*g_153))))
                {
                    unsigned short l_751 = 0xC4D9L;
                    int *l_754 = (void*)0;
                    int *l_755 = (void*)0;
                    for (g_151 = 0; (g_151 < 1); g_151++)
                    {
                        unsigned short *****l_744 = &l_687;
                        int **l_745 = (void*)0;
                        (**g_433) = (g_702 < (l_741 ^ (**g_433)));
                        (*l_705) = (((*l_744) = g_742) == &g_743);
                        (*g_433) = l_719;
                    }
                    (*g_116) = ((g_117 || (!(0L && ((safe_rshift_func_uint16_t_u_s((****g_742), 14)) && l_748)))) <= ((safe_sub_func_uint32_t_u_u(((*l_694) = l_751), (*l_719))) < (*g_706)));
                    for (g_180 = 0; (g_180 < 50); g_180 = safe_add_func_int32_t_s_s(g_180, 9))
                    {
                        (*g_706) |= (((((*l_687) = (*g_742)) != l_759) ^ ((*l_705) |= (*l_752))) != (g_204 != g_385));
                        if ((*g_153))
                            continue;
                        (*g_706) &= (((void*)0 != &l_735) & g_57);
                        (*l_705) = ((*g_706) = (*g_116));
                    }
                    (**g_433) = 0x664565F4L;
                }
                else
                {
                    if (g_5)
                        goto lbl_760;
                }
                for (g_481 = 0; (g_481 == (-25)); --g_481)
                {
                    (**g_115) = (*l_752);
                }
                (**g_115) ^= ((g_212 = (*l_719)) < (*l_752));
            }
        }
    }
    else
    {
        short *l_768 = &l_681;
        short *l_769 = &g_305;
        int l_770 = (-6L);
        short ***l_814 = &l_523;
        for (g_270 = 0; (g_270 == 10); g_270++)
        {
            for (l_17 = 22; (l_17 <= 41); l_17++)
            {
                if ((**g_433))
                    break;
                if (l_738)
                    goto lbl_767;
            }
            (*g_116) = (*g_116);
        }
        l_770 = ((**g_433) = (((l_768 != ((*l_523) = l_769)) && (*l_705)) | l_770));
        if ((**g_433))
        {
            unsigned char l_784 = 255UL;
            int **l_786 = &l_555;
            for (g_479 = 8; (g_479 == 39); ++g_479)
            {
                unsigned char *l_781 = &g_30;
                int l_782 = 0x8625CBCBL;
                unsigned *l_783 = &g_151;
                unsigned char *l_785 = &g_212;
            }
            (*l_786) = (void*)0;
            for (g_145 = 2; (g_145 != 20); ++g_145)
            {
                for (g_19 = 0; (g_19 == 24); g_19 = safe_add_func_uint32_t_u_u(g_19, 5))
                {
                    (*l_786) = &l_574;
                }
            }
            (*l_705) ^= (g_180 && (safe_rshift_func_uint16_t_u_u((*g_282), 14)));
        }
        else
        {
            unsigned char *l_797 = &g_30;
            int l_815 = 6L;
            char *l_816 = &g_200;
            unsigned *l_817 = &g_300;
            unsigned short ****l_827 = &l_759;
            unsigned short *****l_826 = &l_827;
            (**g_115) = (~(**g_115));
            (*g_706) &= ((l_793 == (*l_666)) ^ (l_815 = ((*l_817) = (l_770 || (l_794 >= (safe_sub_func_uint8_t_u_u(((*l_797) = g_753), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u((***g_743), (!(safe_rshift_func_int8_t_s_u((g_180 || ((*l_816) = (safe_lshift_func_uint8_t_u_s(g_114, (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((l_814 != &g_407) && l_815), (**g_281))), 2)) || l_770), (**g_281))))))), g_5))))) && g_57) < (*l_666)) && g_117), 1UL)), (*l_705))))))))));
            (*g_433) = (*g_433);
            (**g_115) = (+(safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((*g_461) != l_816), ((&l_759 == ((*l_826) = (g_742 = &g_743))) != l_828))) <= ((*l_705) > (l_770 == ((*g_743) != (*g_743))))), g_136)), l_770)) ^ l_815), (*g_282))));
        }
        (*g_116) &= (l_829 != (**l_814));
    }
    for (g_484 = 26; (g_484 == (-26)); g_484 = safe_sub_func_uint32_t_u_u(g_484, 1))
    {
        int l_834 = 0L;
        short l_839 = 0x9FB0L;
        int *l_842 = &g_38;
        int *l_861 = &g_136;
        for (g_180 = 0; (g_180 <= 56); g_180 = safe_add_func_uint16_t_u_u(g_180, 3))
        {
            int *l_840 = (void*)0;
            unsigned *l_841 = &l_17;
            (*g_433) = func_32(l_834, func_32((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_834, 0x5277L)), (g_202 < l_839))), l_840));
            l_666 = func_32(func_23(((*l_841) ^= g_200), l_842, l_841, ((*g_433) = (*g_433)), (safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((****g_742), (safe_sub_func_uint8_t_u_u(g_180, ((*l_666) != (safe_add_func_uint32_t_u_u(1UL, (+g_479)))))))) ^ g_145) && 0xF94410ACL), (*l_666)))), l_840);
            (*g_433) = (*g_433);
        }
        for (g_479 = (-9); (g_479 == 26); g_479 = safe_add_func_uint8_t_u_u(g_479, 9))
        {
            int *l_853 = &l_574;
            unsigned char *l_856 = (void*)0;
            unsigned char **l_857 = (void*)0;
            unsigned char **l_858 = &l_856;
            unsigned char l_862 = 0xC3L;
            (*g_433) = func_32((*g_282), l_842);
            (*g_433) = func_32((*l_842), l_853);
            (*g_433) = func_32((((*l_705) = (safe_sub_func_uint32_t_u_u((*l_842), 0xB2301925L))) & func_23((*l_666), l_861, (*g_433), (*g_433), l_862)), (*g_433));
        }
    }
    return g_481;
}







static int func_23(unsigned p_24, int * p_25, int * p_26, int * p_27, unsigned char p_28)
{
    unsigned char l_511 = 1UL;
    char **l_518 = &g_462;
    int **l_519 = &g_153;
    int *l_520 = &g_136;
    (*g_116) = ((safe_rshift_func_uint16_t_u_u((l_511 | ((((safe_rshift_func_uint16_t_u_u((l_511 || (**g_281)), l_511)) || func_102(l_511, (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_28, p_28)), 9)), p_26, p_24)) & (*g_116)) ^ 1L)), 1)) < 0UL);
    return (*p_26);
}







static int * func_32(unsigned short p_33, int * p_34)
{
    int *l_41 = &g_38;
    for (p_33 = 15; (p_33 <= 9); --p_33)
    {
        for (g_38 = 28; (g_38 == 16); --g_38)
        {
            if (g_19)
                break;
            if (g_9)
                break;
        }
    }
    return l_41;
}







static int * func_42(unsigned short p_43, char p_44, int p_45, int * p_46)
{
    int *l_56 = &g_57;
    unsigned l_471 = 4UL;
    unsigned short *l_472 = &g_270;
    int *l_473 = (void*)0;
    int *l_474 = &g_136;
    int l_475 = 0xC8B6362EL;
    int l_476 = 5L;
    unsigned l_477 = 4294967295UL;
    unsigned short *l_478 = &g_479;
    int *l_480 = &g_481;
    int *l_482 = (void*)0;
    int *l_483 = &g_484;
    short *l_498 = (void*)0;
    short **l_497 = &l_498;
    int l_508 = 4L;
    (*l_56) &= g_12;
    (*l_483) = ((*l_480) &= (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*l_478) = (((((0x85A1L > ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_476 |= (l_475 |= ((*l_474) = (safe_add_func_int32_t_s_s((0x5F6BL & ((*l_472) = (safe_add_func_uint8_t_u_u(g_72, ((((*l_56) = ((*l_56) && (func_73((*l_56)) || ((*g_282) ^= func_102(((*l_56) || ((*p_46) ^ p_43)), p_43, p_46, l_471))))) <= (*p_46)) & 0x1AL))))), (*p_46)))))) >= p_45), 0L)), l_477)) ^ g_12)) >= p_44) >= p_45) && (-2L)) ^ (-9L))), p_44)), 3)) < p_45) ^ 1UL), 7)));
    (*l_56) ^= (safe_add_func_uint8_t_u_u(0UL, 255UL));
    for (g_202 = (-2); (g_202 >= 23); g_202++)
    {
        unsigned l_493 = 0x3FE9918FL;
        short **l_495 = (void*)0;
        short ***l_496 = &l_495;
        short ***l_499 = (void*)0;
        short ***l_500 = &l_497;
        int *l_507 = (void*)0;
        (**g_115) ^= ((*l_474) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_102((*p_46), l_493, p_46, ((safe_unary_minus_func_int32_t_s(((((*l_496) = l_495) == ((*l_500) = l_497)) && ((p_43 || (*l_474)) >= g_114)))) <= (*p_46))), p_45)), l_508)));
        (*g_116) = ((*l_483) = ((*l_480) = ((*l_474) ^= ((*l_56) = (*p_46)))));
    }
    return p_46;
}







static short func_73(unsigned p_74)
{
    short l_83 = 8L;
    int l_109 = (-10L);
    unsigned l_110 = 0x35CCC4EFL;
    int *l_148 = &g_57;
    unsigned *l_149 = (void*)0;
    unsigned *l_150 = &g_151;
    unsigned char *l_182 = &g_114;
    (*l_148) = ((safe_mod_func_int32_t_s_s(func_77((g_8 != (l_83 || ((safe_sub_func_int8_t_s_s(func_86(func_89(func_95(l_83, p_74, ((*l_150) |= ((((*l_148) = (safe_mod_func_int32_t_s_s(((p_74 < g_72) & func_102((g_57 = (((l_109 &= (safe_lshift_func_int16_t_s_u((((l_83 != l_83) && 0xA4358B9EL) != l_83), 11))) & l_110) & g_2)), g_5, &g_12, g_72)), 0xCFEE841AL))) > p_74) && 0x86FCL)), p_74), p_74, l_182, p_74, l_83), p_74), p_74)) != p_74))), g_240, p_74, l_148, l_149), g_470)) >= p_74);
    return (*l_148);
}







static int func_77(unsigned p_78, int ** p_79, short p_80, int * p_81, int * p_82)
{
    unsigned l_243 = 1UL;
    int l_247 = (-1L);
    int l_250 = 1L;
    char *l_251 = (void*)0;
    int l_279 = 1L;
    int *l_306 = &l_279;
    int l_312 = 1L;
    short *l_372 = &g_72;
    short **l_371 = &l_372;
    short l_379 = 1L;
    unsigned l_401 = 0x7F8C89F1L;
    unsigned l_404 = 4294967286UL;
    unsigned char *l_437 = &g_212;
    (*g_116) = (g_8 & (p_78 | ((g_204 ^= (safe_lshift_func_uint16_t_u_u((l_243 && (safe_unary_minus_func_uint32_t_u(g_136))), 9))) < p_78)));
    if ((*g_153))
    {
        char l_254 = 0xE3L;
        int l_267 = 0x36BFB3ECL;
        int l_272 = 3L;
        unsigned char *l_273 = &g_212;
        unsigned short l_274 = 0xC7BEL;
        int **l_275 = &g_153;
        unsigned l_307 = 4294967289UL;
        int **l_325 = &g_118;
lbl_302:
        l_254 |= (**g_115);
        for (g_145 = (-25); (g_145 <= 27); g_145 = safe_add_func_int16_t_s_s(g_145, 8))
        {
            int *l_261 = &g_57;
            unsigned char *l_278 = (void*)0;
            unsigned short **l_283 = (void*)0;
            char **l_334 = (void*)0;
            for (g_180 = (-12); (g_180 != 27); ++g_180)
            {
                short l_266 = (-1L);
                char l_268 = 7L;
                unsigned short *l_269 = &g_270;
                char *l_271 = &l_254;
                int l_280 = (-7L);
                (*p_81) |= ((g_8 == ((safe_lshift_func_uint16_t_u_s((((g_153 = &l_250) == (l_261 = &g_136)) && (((safe_rshift_func_int8_t_s_u(((*l_271) = (safe_sub_func_int8_t_s_s((g_136 ^ (p_80 > l_266)), (((l_267 = 0x98814D17L) ^ (((*l_269) ^= ((l_243 >= l_268) && l_266)) < (-1L))) <= p_78)))), 2)) >= (*l_261)) == p_78)), 7)) <= g_200)) <= l_272);
                l_261 = l_261;
                (*l_275) = func_89(l_275, (l_247 &= (g_270 |= (safe_lshift_func_int8_t_s_u(((g_5 && p_78) >= (**l_275)), 5)))), l_278, (l_279 &= 0xC6L), g_136);
                l_280 |= (g_136 != 0x69L);
            }
            (*p_81) = ((g_281 == l_283) ^ g_12);
            if ((*g_116))
            {
                for (l_250 = 16; (l_250 < (-23)); l_250 = safe_sub_func_uint16_t_u_u(l_250, 9))
                {
                    return l_250;
                }
            }
            else
            {
                int *l_286 = &g_57;
                unsigned short l_295 = 65527UL;
                short *l_304 = &g_305;
                unsigned char *l_333 = &g_114;
                int l_345 = 0L;
                if (((*l_261) = (*l_261)))
                {
                    char l_291 = 0x54L;
                    int *l_292 = &l_272;
                    short *l_294 = &g_145;
                    short **l_293 = &l_294;
                    p_81 = ((*l_275) = l_286);
                    (*l_292) &= ((((safe_add_func_int16_t_s_s(0x347AL, p_78)) < (1UL <= ((g_212 <= ((**l_275) == (safe_lshift_func_int16_t_s_s((((**g_115) < (*g_153)) > ((*g_282) <= 0L)), 3)))) & 0x11DFB01FL))) != l_291) != 65526UL);
                    l_295 &= (l_250 & (~((&g_145 != ((*l_293) = &p_80)) || p_78)));
                }
                else
                {
                    unsigned *l_296 = (void*)0;
                    unsigned *l_297 = &g_151;
                    int l_303 = 1L;
                    if ((((*l_297) = (((*g_282) <= (0x7F5F9C35L || 0xAD261E81L)) & (*l_286))) ^ (0UL != ((safe_sub_func_uint32_t_u_u((**l_275), (g_300 = (p_80 == p_78)))) <= g_72))))
                    {
                        int l_301 = (-2L);
                        (*g_116) |= l_301;
                        (*l_275) = &l_247;
                        if ((**g_115))
                            break;
                    }
                    else
                    {
                        if (l_243)
                            goto lbl_302;
                    }
                    return l_303;
                }
                if ((((*l_304) = (l_247 < ((**g_281) = (*g_282)))) > (249UL <= ((**l_275) >= p_78))))
                {
                    l_306 = (void*)0;
                }
                else
                {
                    int l_332 = 1L;
                    int l_351 = 0x152E5FB8L;
                    if (l_307)
                    {
                        unsigned l_308 = 0UL;
                        unsigned short **l_313 = &g_282;
                        unsigned short ***l_314 = &g_281;
                        (**l_275) |= l_308;
                        (**g_115) |= 0x5C6B9971L;
                        (*g_116) = (l_312 &= (((*l_273) = ((((*l_304) = (-6L)) ^ (safe_unary_minus_func_int16_t_s((*l_286)))) > (*g_282))) == ((safe_lshift_func_int8_t_s_u(g_300, l_308)) & ((-8L) & l_308))));
                        (*l_314) = l_313;
                    }
                    else
                    {
                        unsigned short l_321 = 4UL;
                        int l_324 = 4L;
                        l_324 = (safe_sub_func_int8_t_s_s(p_78, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((((&p_81 == &g_116) <= ((*l_261) = ((-9L) != (-9L)))) | ((0xE2DC38A9L ^ (l_321 < (safe_rshift_func_uint16_t_u_u(p_78, 2)))) & (*g_282))) & p_80), 7)), 7))));
                    }
                    (*g_116) &= (*l_286);
                    if (((!((**l_275) > (-7L))) || (**l_275)))
                    {
                        short l_328 = 0L;
                        unsigned *l_331 = (void*)0;
                        char ***l_335 = &l_334;
                        (*l_325) = l_331;
                        (*g_153) = (g_114 && (l_286 != l_331));
                        (*l_335) = l_334;
                        if (g_204)
                            goto lbl_302;
                    }
                    else
                    {
                        unsigned l_344 = 4294967294UL;
                        unsigned char *l_350 = (void*)0;
                        (*g_116) &= ((*p_81) = (*g_153));
                        (**l_275) = (g_300 == ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_19, p_78)), 3)) & 0x83L));
                        (*l_325) = func_89(&p_82, (g_270 >= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_344, 4)) == (p_80 || (l_345 == ((**g_281) || (((safe_rshift_func_uint16_t_u_u(((*g_282) = ((*g_116) | (*l_261))), (safe_add_func_uint8_t_u_u(((*l_273) = g_212), (*l_261))))) ^ (*l_286)) | (-6L)))))), 1))), l_350, p_80, l_351);
                        (*g_153) |= (*g_116);
                    }
                }
                for (g_270 = 0; (g_270 < 16); ++g_270)
                {
                    return (*l_261);
                }
            }
        }
    }
    else
    {
        int l_370 = 0L;
        unsigned l_375 = 0x71E699FBL;
        char l_402 = 0x56L;
        unsigned char *l_403 = &g_114;
        int l_426 = 4L;
        short ***l_456 = (void*)0;
        char **l_467 = &g_462;
        (*g_115) = (*g_115);
        if ((safe_mod_func_uint16_t_u_u(0x0434L, 0x3B71L)))
        {
            int *l_363 = &l_250;
            unsigned char *l_368 = &g_114;
            unsigned char *l_369 = &g_212;
            unsigned short *l_378 = &g_270;
            int **l_380 = &g_118;
            g_356 = (**g_115);
            (**g_115) = (safe_mod_func_uint32_t_u_u(((0xCBL | (safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((*l_369) = ((*l_368) = (((p_78 > (((*g_115) == l_363) <= 0xD5C0L)) <= func_86(&g_2, g_200)) <= (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((*l_306), (*l_363))), (*l_363)))))), g_19)) && (**g_281)) >= g_72), l_370))) && 1L), 0x313447BCL));
            (*l_380) = p_81;
        }
        else
        {
            char l_386 = 0x4AL;
            (*p_81) ^= (*l_306);
            l_386 = (g_385 = func_86(&l_370, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_370 = (-6L)), 7)), 4))));
            (*p_81) = ((func_86(&l_370, ((~((*l_306) = ((void*)0 == &g_114))) >= 0xBF0DDE07L)) | ((safe_lshift_func_uint16_t_u_s(65535UL, l_386)) & (safe_lshift_func_int16_t_s_u(l_386, 14)))) > (safe_lshift_func_int8_t_s_s(p_78, 3)));
            (*l_306) = 0x8BCD1460L;
        }
        l_370 |= ((p_78 & (g_270 && (0xCEL && (safe_add_func_int16_t_s_s((g_305 | (((safe_rshift_func_uint16_t_u_s(65535UL, (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((func_102((*l_306), p_80, func_89(func_95(g_356, ((*g_153) > l_401), l_402, l_402), (**g_281), l_403, g_180, g_114), (*l_306)) || 0x18L), (*l_306))), p_78)))) && (*l_306)) | g_204)), (-9L)))))) || g_202);
        if ((7UL | (+(~l_404))))
        {
            int l_425 = 0xCA2AA58FL;
            int *l_444 = &g_136;
            short **l_450 = &l_372;
            for (g_212 = 0; (g_212 < 46); g_212++)
            {
                volatile short ***l_409 = &g_407;
                int l_424 = 9L;
                (*l_409) = g_407;
                l_426 |= (safe_add_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(255UL, ((safe_mod_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(g_114, (l_402 && (~(~(safe_rshift_func_uint8_t_u_s((0x7E304C94L <= (((func_102((safe_rshift_func_uint8_t_u_u(((p_78 & p_80) > l_424), 3)), g_8, &l_424, g_300) | g_385) < p_78) || (*g_116))), p_78))))))) >= p_78) <= (*g_282)), l_425)) > 4294967287UL))), l_370)) | l_375) & 65530UL) > p_80) & g_114), l_402));
            }
        }
        else
        {
            unsigned l_465 = 0x84915D70L;
            char *l_466 = &g_202;
            (*p_81) &= ((((void*)0 != g_460) > (safe_rshift_func_int16_t_s_u(((((*l_466) |= l_465) ^ (((*g_460) == l_467) ^ ((p_78 ^ (safe_lshift_func_int8_t_s_u(((l_465 ^ 0x85C9L) != l_465), 5))) >= (*g_282)))) || p_80), (*g_282)))) < g_114);
        }
    }
    return (*g_116);
}







static char func_86(int * p_87, int p_88)
{
    int *l_189 = &g_136;
    unsigned short *l_198 = &g_180;
    char *l_199 = &g_200;
    char *l_201 = &g_202;
    char *l_203 = &g_204;
    int l_205 = 0xDA28E2A2L;
    unsigned l_206 = 0xDE15252EL;
    int l_209 = 0x3A861C21L;
    unsigned *l_210 = &g_151;
    unsigned char *l_211 = &g_212;
    int l_222 = 3L;
    short l_225 = 0L;
    for (g_57 = (-3); (g_57 < 8); g_57++)
    {
        int *l_187 = &g_136;
        int **l_188 = &l_187;
        (*l_188) = l_187;
    }
    (*l_189) |= (*g_153);
    (*l_189) = ((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((0UL | ((l_205 &= (((((*l_203) |= func_102((*l_189), ((*l_201) &= ((*l_199) = ((*l_189) != ((l_198 == &g_180) != g_114)))), l_189, (*l_189))) > p_88) == g_180) == (-8L))) > l_206)) & g_2), g_5)), 1UL)), p_88)) | g_114);
    if ((((*l_199) = (safe_sub_func_uint8_t_u_u(((func_102((*p_87), p_88, &g_9, p_88) ^ ((*l_210) = l_209)) <= p_88), ((*p_87) || (((*l_211) = (p_88 <= g_5)) > 0x8CL))))) | g_9))
    {
        unsigned char l_223 = 250UL;
        int *l_224 = &l_205;
        short *l_227 = &g_145;
        short **l_226 = &l_227;
        unsigned char *l_234 = &l_223;
        int l_235 = (-1L);
        (*l_224) &= (safe_rshift_func_int16_t_s_u((((safe_sub_func_uint8_t_u_u((+((safe_unary_minus_func_int32_t_s(((((void*)0 != &g_114) > (func_102((((*l_189) &= 0x3C55L) >= ((safe_rshift_func_int8_t_s_u((l_189 == &g_151), 0)) ^ ((0xA7L && ((safe_rshift_func_uint16_t_u_u(g_145, 11)) & g_145)) > g_200))), l_222, &g_57, p_88) < g_204)) & l_223))) || g_12)), g_212)) <= g_151) <= l_223), 5));
        (*l_224) = l_225;
        l_235 &= (((*l_224) = (((((*l_226) = &g_72) == &g_145) & 2L) ^ ((*p_87) < ((safe_rshift_func_uint8_t_u_s(((*l_234) &= ((*p_87) || (g_204 != ((((((((*l_210) = p_88) | (safe_sub_func_uint8_t_u_u((+(((safe_sub_func_uint32_t_u_u((p_88 < (g_212 = (((-1L) | (*l_189)) < 0x865313BCL))), g_57)) > 0x51AD0A0FL) == (*l_189))), p_88))) < p_88) && 0x4E9DL) || (*l_189)) | 0x0708L) >= g_57)))), 1)) == p_88)))) == 1L);
    }
    else
    {
        (*l_189) = (safe_mod_func_uint32_t_u_u(0xF59071E4L, (safe_lshift_func_uint8_t_u_s(0x1AL, 4))));
    }
    return (*l_189);
}







static int * func_89(int ** p_90, unsigned short p_91, unsigned char * p_92, unsigned char p_93, short p_94)
{
    int *l_183 = &g_12;
    int **l_184 = &g_118;
    (*l_184) = ((*p_90) = l_183);
    return (*p_90);
}







static int ** func_95(unsigned char p_96, int p_97, unsigned p_98, unsigned short p_99)
{
    int **l_152 = &g_118;
    int *l_177 = &g_12;
    unsigned short *l_179 = &g_180;
    unsigned short **l_178 = &l_179;
    unsigned short ***l_181 = &l_178;
    g_153 = ((*l_152) = &g_57);
    for (p_98 = 0; (p_98 != 16); p_98 = safe_add_func_int8_t_s_s(p_98, 1))
    {
        unsigned *l_162 = (void*)0;
        unsigned *l_163 = &g_151;
        int **l_164 = &g_153;
        int **l_165 = (void*)0;
        int *l_167 = &g_2;
        int **l_166 = &l_167;
        short *l_174 = &g_145;
        unsigned char l_175 = 1UL;
        int *l_176 = &g_136;
        (*l_176) = (l_175 = (safe_add_func_uint16_t_u_u(g_19, ((safe_sub_func_int16_t_s_s(((*l_174) = (safe_mod_func_int16_t_s_s(p_99, func_102((((*l_163) = p_97) & func_102((*g_118), g_9, ((*l_166) = ((*l_164) = &p_97)), g_114)), (((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_98, p_98)), g_19)), p_96)) <= p_96) || g_72), &g_5, g_2)))), p_98)) <= 0xB3L))));
        (*l_152) = l_177;
        (*g_153) ^= (**l_152);
        p_97 = p_96;
    }
    (*l_181) = l_178;
    return &g_153;
}







static int func_102(int p_103, char p_104, int * p_105, int p_106)
{
    unsigned short l_111 = 0x949EL;
    int *l_112 = &g_57;
    unsigned char *l_113 = &g_114;
    unsigned l_131 = 8UL;
    int **l_138 = &g_118;
    unsigned short *l_143 = &l_111;
    short *l_144 = &g_145;
    int *l_146 = &g_136;
    unsigned l_147 = 0xA5FB02C8L;
    if (((*l_112) = (l_111 > l_111)))
    {
        unsigned l_133 = 0x5621C9A8L;
        p_103 = ((*l_112) = (l_113 != (void*)0));
        if ((*p_105))
        {
            (*l_112) &= (g_115 == &g_116);
            g_118 = &p_103;
        }
        else
        {
            unsigned *l_132 = &l_131;
            (*l_112) = (*p_105);
            (*l_112) = (safe_add_func_uint32_t_u_u(0x0EC44CB1L, ((*l_132) = (((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((g_57 == ((void*)0 != &g_116)), ((g_114 || (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((&p_105 != (void*)0) == ((safe_add_func_uint32_t_u_u(p_104, l_131)) < g_5)), 0x0D6EL)), g_9))) | 0x030DL))), g_19)) & (*p_105)) && (-6L)))));
        }
        g_57 = (p_106 & (g_72 >= l_133));
    }
    else
    {
        unsigned l_134 = 0x25587BB5L;
        int *l_135 = &g_136;
        int **l_137 = &l_135;
        (*l_112) = (0L | l_134);
        (*l_135) = ((*l_112) = (*l_112));
        (*l_137) = &p_103;
    }
    (*l_146) &= ((l_112 == ((*l_138) = &g_57)) < ((safe_add_func_int16_t_s_s(((*l_144) = (safe_rshift_func_uint16_t_u_u(((*l_143) |= g_57), 15))), g_19)) & 0xA12E2198L));
    g_118 = &p_103;
    return l_147;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
