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
static int g_35 = 0L;
static int *g_34 = &g_35;
static int ** volatile g_33 = &g_34;
static int * volatile g_79 = (void*)0;
static int * volatile g_80 = (void*)0;
static unsigned short g_102 = 1UL;
static unsigned short *g_107 = &g_102;
static unsigned short **g_106 = &g_107;
static unsigned short *** volatile g_105 = &g_106;
static int *g_112 = (void*)0;
static int ** volatile g_111 = &g_112;
static int *g_114 = (void*)0;
static int **g_113 = &g_114;
static const volatile unsigned g_127 = 0x3287B788L;
static int g_134 = 0L;
static int g_136 = 3L;
static int * volatile g_135 = &g_136;
static int * volatile g_148 = (void*)0;
static int * volatile g_149 = &g_134;
static const int g_199 = 1L;
static short g_210 = 0x8C97L;
static unsigned g_220 = 0x8D447F79L;
static unsigned char g_223 = 0x9AL;
static char g_227 = 0x64L;
static unsigned short g_229 = 0x2B0BL;
static volatile char g_254 = 9L;
static volatile char *g_253 = &g_254;
static volatile char * volatile * volatile g_252 = &g_253;
static volatile char * volatile * volatile * volatile g_255 = &g_252;
static unsigned *g_285 = (void*)0;
static int g_294 = 9L;
static unsigned char g_316 = 0xA2L;
static unsigned char g_327 = 246UL;
static int g_360 = 3L;
static unsigned short *** volatile g_453 = &g_106;
static const volatile char g_458 = 0L;
static short g_488 = 0L;
static int * volatile g_490 = (void*)0;
static unsigned g_493 = 0xB21C627CL;
static int *** volatile g_494 = &g_113;
static volatile unsigned char g_507 = 0x87L;
static volatile unsigned char *g_506 = &g_507;
static volatile unsigned char **g_505 = &g_506;
static volatile unsigned char ** volatile * volatile g_504 = &g_505;
static int g_524 = (-10L);
static unsigned char g_525 = 0xF4L;
static int * volatile g_528 = &g_35;
static int **g_529 = (void*)0;
static int *g_538 = &g_11;
static int **g_537 = &g_538;
static char g_586 = 0L;
static short *g_643 = &g_488;
static short * volatile *g_642 = &g_643;
static short * volatile * volatile *g_641 = &g_642;
static short * volatile * volatile * volatile *g_640 = &g_641;
static const int *g_695 = &g_136;
static unsigned char *g_716 = &g_316;
static unsigned char **g_715 = &g_716;
static unsigned char ***g_714 = &g_715;
static int * volatile g_732 = &g_360;
static short *** const g_737 = (void*)0;
static short *** const *g_736 = &g_737;
static short *** const **g_735 = &g_736;
static volatile short g_804 = 0xCEDAL;
static const unsigned char g_825 = 255UL;
static int ** volatile g_832 = &g_112;
static int **g_865 = &g_112;



static int func_1(void);
static short func_15(char p_16);
static const char func_18(int p_19, unsigned short p_20, int p_21);
static unsigned func_27(int p_28, short p_29);
static unsigned short func_49(short p_50);
static short func_53(const int * p_54, int ** p_55, const int p_56, const unsigned p_57, int * p_58);
static int ** func_60(const unsigned p_61, int p_62, int * const * const p_63);
static int * func_85(const int p_86, int * p_87, int ** p_88, const short p_89);
static int * func_91(int ** p_92, unsigned short p_93, int p_94, unsigned p_95);
static int ** func_96(unsigned short p_97);
static int func_1(void)
{
    int l_8 = 1L;
    int l_12 = 0x7439CB61L;
    int *l_539 = (void*)0;
    unsigned short l_556 = 0x39C1L;
    const short ***l_621 = (void*)0;
    const short ****l_620 = &l_621;
    int *l_632 = (void*)0;
    unsigned * const *l_683 = &g_285;
    unsigned short l_689 = 1UL;
    int l_713 = 0x9F85ADECL;
    char *l_724 = (void*)0;
    char **l_723 = &l_724;
    char ***l_722 = &l_723;
    const short l_729 = (-7L);
    short *** const *l_734 = (void*)0;
    short *** const **l_733 = &l_734;
    unsigned char l_739 = 0x7BL;
    int l_746 = 0L;
    char l_747 = 0L;
    short *l_748 = &g_210;
    unsigned short l_749 = 65527UL;
    unsigned char l_785 = 0xFCL;
    const unsigned l_786 = 0xFEEBCD03L;
    int *l_870 = &l_12;
    int *l_871 = &g_35;
    if (((safe_lshift_func_int8_t_s_s((-5L), 1)) < ((l_12 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_8, 10)), (safe_sub_func_int16_t_s_s(g_11, g_11))))) ^ g_11)))
    {
        short l_17 = (-3L);
        int l_22 = (-1L);
        unsigned char l_37 = 255UL;
        short *l_496 = &g_210;
        int *l_522 = (void*)0;
        int *l_523 = &g_524;
        int *l_526 = &g_134;
        int *l_527 = (void*)0;
        g_525 |= ((*l_523) ^= (safe_sub_func_int16_t_s_s(func_15((g_11 != (((*l_496) = (~((l_17 = (g_11 | 0x89L)) != func_18(l_22, g_11, (safe_add_func_uint8_t_u_u((1UL & 0UL), (l_37 &= ((safe_sub_func_uint32_t_u_u(g_11, func_27((safe_lshift_func_int16_t_s_s(0x9271L, 14)), l_12))) & g_11)))))))) < l_8))), l_12)));
        (*g_528) = ((*l_526) &= ((*l_523) = (l_12 <= (-2L))));
    }
    else
    {
        int *l_530 = &g_134;
        int l_542 = 0xAC12D24EL;
        char l_595 = 0xB3L;
        unsigned l_599 = 0x2D04F4FFL;
        short *l_616 = &g_488;
        short **l_615 = &l_616;
        short ***l_614 = &l_615;
        short ****l_613 = &l_614;
lbl_569:
        (*l_530) = (0x50C281D8L & func_53((*g_113), g_529, func_49(g_493), g_458, l_530));
        for (g_227 = 0; (g_227 <= 13); g_227 = safe_add_func_int16_t_s_s(g_227, 5))
        {
            short l_533 = 8L;
            int *l_534 = &g_294;
            int l_582 = 4L;
            const short l_635 = 0xCC89L;
            short l_665 = 0x45EFL;
            char l_682 = (-1L);
            unsigned l_688 = 4294967286UL;
            int **l_696 = &g_112;
            l_539 = func_91(func_96((*l_530)), l_533, ((*l_534) = (*l_530)), ((safe_sub_func_uint8_t_u_u(l_533, (*l_530))) | (l_533 && (&l_534 == (g_537 = g_537)))));
            for (g_360 = (-1); (g_360 < 25); g_360 = safe_add_func_uint8_t_u_u(g_360, 1))
            {
                short *l_553 = &g_488;
                int **l_557 = (void*)0;
                short l_563 = 0xEAB5L;
                int *l_590 = &g_136;
                int l_610 = 0x7725D2CFL;
                unsigned char l_612 = 255UL;
                short *****l_617 = &l_613;
                short ****l_619 = (void*)0;
                short *****l_618 = &l_619;
                const short *****l_622 = &l_620;
                short l_623 = (-1L);
            }
            if ((+(*l_539)))
            {
                char l_654 = 0xD0L;
                unsigned char *l_657 = &g_223;
                int *l_668 = &l_12;
                char l_671 = (-7L);
                if (l_654)
                {
                    char l_658 = 0x48L;
                    unsigned short *l_666 = &l_556;
                    unsigned short *l_667 = &g_229;
                    if ((safe_mod_func_int8_t_s_s(((l_654 == (l_657 != (void*)0)) & ((l_658 >= ((safe_rshift_func_int16_t_s_s((*g_643), 3)) <= ((*g_107) |= (l_635 && (*l_530))))) != l_635)), ((safe_lshift_func_uint16_t_u_u(((*l_667) = ((*l_666) |= (safe_rshift_func_int16_t_s_u((l_665 = l_582), 8)))), l_635)) || l_654))))
                    {
                        l_668 = l_668;
                        (*l_539) &= (safe_mod_func_int16_t_s_s((0xDEL <= (*g_506)), (*g_107)));
                    }
                    else
                    {
                        const unsigned l_674 = 0UL;
                        int *l_675 = &g_360;
                        (*g_34) = (*l_539);
                        if ((*g_112))
                            continue;
                        (*l_530) &= (*g_112);
                        l_675 = func_91((*g_494), l_671, ((**g_537) = (func_49((*l_539)) >= ((!(*l_530)) != (*l_530)))), (l_674 && (((****g_640) = l_658) <= ((g_199 > 0L) < g_229))));
                    }
                    for (l_595 = (-30); (l_595 <= 17); l_595 = safe_add_func_int8_t_s_s(l_595, 5))
                    {
                        if ((**g_111))
                            break;
                        l_582 = (*g_112);
                        (*g_113) = (**g_494);
                        return (*g_538);
                    }
                    (*l_539) |= ((safe_rshift_func_uint8_t_u_s((+((255UL >= l_658) && (((*g_135) ^ (((safe_lshift_func_uint16_t_u_u((*g_107), 1)) & (func_49(l_682) && ((l_683 != (void*)0) <= l_658))) < 0x55L)) <= 0UL))), 1)) == (*g_643));
                    for (g_229 = (-9); (g_229 == 24); g_229 = safe_add_func_int8_t_s_s(g_229, 1))
                    {
                        (*g_34) = (-2L);
                    }
                }
                else
                {
                    (*g_113) = func_85((safe_sub_func_int16_t_s_s(l_688, l_688)), func_91((*g_494), l_635, l_665, (*l_530)), &l_539, (l_689 || 6L));
                    (*g_113) = &l_12;
                }
                if (l_665)
                    goto lbl_569;
                (*g_135) = 1L;
            }
            else
            {
                char *l_692 = &l_682;
                int ***l_697 = &g_529;
                (*g_113) = (**g_494);
                if ((*l_530))
                    continue;
                (*l_539) = (safe_mod_func_uint8_t_u_u((((((*l_692) = 0x71L) <= (-1L)) >= ((safe_mod_func_int16_t_s_s(((***g_255) > g_327), 0x0757L)) > (****g_640))) >= (*l_530)), (*l_539)));
                if (g_229)
                    goto lbl_569;
            }
        }
        for (l_542 = 29; (l_542 < 14); l_542 = safe_sub_func_int32_t_s_s(l_542, 4))
        {
            unsigned char l_706 = 0x1BL;
            unsigned char *l_709 = (void*)0;
            unsigned char *l_710 = &g_223;
            unsigned char ****l_717 = (void*)0;
            unsigned char ***l_718 = (void*)0;
            int l_719 = 0L;
            char * const *l_726 = &l_724;
            char * const **l_725 = &l_726;
            (*l_530) = (-1L);
            l_719 |= (*l_530);
            (*g_113) = &l_12;
            (*l_530) = (((l_706 <= (((*l_530) | (***g_504)) <= ((safe_sub_func_int32_t_s_s(func_49((g_134 <= ((****g_640) || ((l_722 == l_725) != func_49((l_706 == (safe_lshift_func_int16_t_s_u((func_49((*l_530)) & 2L), (*g_107))))))))), l_729)) != 0x7550L))) || (***g_714)) == g_524);
        }
    }
    if ((safe_rshift_func_int8_t_s_s(3L, 3)))
    {
        (*g_732) = (*g_528);
    }
    else
    {
        int *l_738 = &l_12;
        l_12 &= (&g_640 != (g_735 = l_733));
        (*l_738) |= (*g_135);
    }
    if ((((**g_715) = ((((((**g_252) >= (g_227 = ((l_739 | (**g_715)) > g_35))) ^ ((****g_640) > ((*l_748) = (l_747 = (((safe_mod_func_uint16_t_u_u((*g_107), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(func_49(l_746), l_713)) >= l_746), (*g_107))))) && 0x914F5AEFL) & (-8L)))))) <= l_12) >= l_749) & (*g_107))) ^ l_739))
    {
        unsigned char l_750 = 0x90L;
        const int *l_777 = &l_713;
        int ***l_778 = &g_529;
        short *l_783 = (void*)0;
        short *l_784 = (void*)0;
        int *l_787 = &l_12;
        int l_828 = 0L;
        char l_831 = 0xA9L;
        unsigned char l_858 = 4UL;
        if (l_750)
        {
            int **l_751 = &g_34;
            (*l_751) = &l_12;
            (**l_751) |= 1L;
            (**l_751) = l_750;
            (*l_751) = func_91(l_751, (&g_252 == (void*)0), ((safe_mod_func_uint16_t_u_u(((((*g_34) = (l_750 | ((**g_642) < (((void*)0 != (**g_255)) | 0x0CF0L)))) == (safe_lshift_func_int8_t_s_s(g_524, 1))) & l_750), (*g_643))) >= (*g_107)), l_750);
        }
        else
        {
            unsigned char *l_762 = &g_316;
            int l_769 = 0x09A29872L;
            for (l_689 = 0; (l_689 >= 49); l_689++)
            {
                const unsigned char ***l_764 = (void*)0;
                const unsigned char ****l_765 = &l_764;
                unsigned short ** const * const l_768 = &g_106;
                int *l_770 = &g_134;
                l_12 = (*g_149);
                (*l_770) = (safe_add_func_int16_t_s_s(l_750, ((safe_lshift_func_uint16_t_u_s((l_762 == (**g_714)), (safe_unary_minus_func_int32_t_s(((&g_505 != ((*l_765) = l_764)) == ((((void*)0 == (*l_722)) < l_750) && (l_768 != (void*)0))))))) & l_769)));
            }
        }
        (*l_787) ^= (safe_sub_func_uint16_t_u_u((*g_107), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_53(l_777, ((*l_778) = func_96((*l_777))), (safe_rshift_func_int8_t_s_s((g_11 && ((l_785 = (((**g_715) < ((*g_716) > (((safe_rshift_func_int16_t_s_u(((l_784 = l_783) == (void*)0), (*g_107))) || (*l_777)) & 0xA3L))) | (*g_107))) & l_786)), (*l_777))), (*l_777), &l_713), 7)), 7))));
        for (g_294 = 29; (g_294 == (-8)); --g_294)
        {
            const int *l_790 = &g_360;
            unsigned *l_793 = &g_220;
            char l_797 = 0L;
            unsigned l_798 = 0x568861B0L;
            int l_829 = 0x790DB3BCL;
            int l_861 = 1L;
            if (l_798)
            {
                int l_805 = 7L;
                unsigned l_815 = 1UL;
                int l_818 = 0x82987BC6L;
                unsigned char *l_830 = &g_525;
                for (l_749 = 24; (l_749 < 11); l_749 = safe_sub_func_uint32_t_u_u(l_749, 1))
                {
                    char l_801 = 6L;
                    char *l_816 = &l_747;
                    char *l_817 = &l_797;
                    int *l_819 = (void*)0;
                    int *l_820 = (void*)0;
                    int *l_821 = (void*)0;
                    int *l_822 = &g_35;
                    l_801 |= 0xFE10FCA6L;
                    (*l_822) ^= ((safe_sub_func_int16_t_s_s((g_804 == ((*g_107) = l_805)), (g_11 ^ (safe_add_func_uint16_t_u_u(((l_801 ^ ((safe_add_func_int8_t_s_s((l_805 < (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(l_801, ((*l_817) = ((*l_816) = ((*l_787) == func_49(l_815)))))))), l_805))), 2UL)) | (**g_715))) | (*g_695)), l_815))))) || l_818);
                    if (l_818)
                        break;
                }
                l_829 = (safe_sub_func_uint8_t_u_u((g_825 != (func_15(((*g_107) ^ ((*g_107) > ((*l_790) || ((*g_537) == (*g_537)))))) ^ (safe_sub_func_uint8_t_u_u(((0xA644L != l_828) ^ l_815), l_805)))), 0x82L));
                (*l_787) = l_831;
            }
            else
            {
                unsigned short l_849 = 0x0BCBL;
                (*g_832) = ((**l_778) = &l_829);
                for (g_524 = 4; (g_524 == 12); g_524 = safe_add_func_uint8_t_u_u(g_524, 3))
                {
                    unsigned l_847 = 0UL;
                    for (g_327 = (-22); (g_327 >= 50); g_327++)
                    {
                        const int **l_837 = &g_695;
                        unsigned char *l_848 = &g_525;
                        int *l_850 = &g_35;
                        const unsigned *l_852 = (void*)0;
                        const unsigned **l_851 = &l_852;
                        (**l_778) = (void*)0;
                        (**l_778) = (void*)0;
                        (*g_112) &= (**l_837);
                        (*l_787) |= (l_793 != ((*l_851) = &g_220));
                    }
                    (**l_778) = (*g_33);
                    l_828 = (((*g_112) = (*g_528)) & (safe_lshift_func_int16_t_s_u(((1L > ((*l_787) = (((*g_107) = (((*g_695) > ((safe_mod_func_uint32_t_u_u((5UL <= ((safe_unary_minus_func_uint32_t_u(g_294)) != l_858)), (*l_790))) || 0x1882L)) != (safe_rshift_func_uint16_t_u_s(0x30F7L, l_849)))) || l_847))) && l_861), g_199)));
                }
            }
            for (l_785 = 0; (l_785 <= 59); l_785 = safe_add_func_int8_t_s_s(l_785, 7))
            {
                (*g_529) = (void*)0;
            }
        }
        (*l_787) = (0UL == ((***g_714) |= (**g_505)));
    }
    else
    {
        const unsigned char l_864 = 0UL;
        unsigned short l_868 = 0x3EBCL;
        int *l_869 = &g_360;
        (*g_865) = l_869;
    }
    (*l_871) |= ((*l_870) = (((*g_732) | l_713) < (***g_714)));
    return (*l_871);
}







static short func_15(char p_16)
{
    char l_499 = 1L;
    unsigned char *l_510 = &g_223;
    unsigned char **l_509 = &l_510;
    unsigned char ***l_508 = &l_509;
    unsigned char ****l_511 = &l_508;
    char *l_516 = &g_227;
    int l_517 = (-3L);
    short *l_518 = &g_488;
    int *l_519 = &g_360;
    unsigned short l_520 = 0x5045L;
    int **l_521 = &g_34;
    (*l_519) = (safe_sub_func_int16_t_s_s(func_49(l_499), (safe_sub_func_int16_t_s_s(((*l_518) ^= (!((safe_lshift_func_uint8_t_u_u((((g_504 != ((*l_511) = l_508)) >= p_16) | (!((safe_sub_func_int8_t_s_s((func_49(l_499) & (safe_mod_func_int32_t_s_s((l_517 = ((((*g_107) = (l_499 > (((*l_516) |= g_35) <= l_499))) < p_16) & p_16)), p_16))), 0x8AL)) | g_210))), 0)) <= p_16))), p_16))));
    (*l_519) = ((l_520 = (p_16 = (**g_252))) | ((void*)0 != l_521));
    return (*l_519);
}







static const char func_18(int p_19, unsigned short p_20, int p_21)
{
    unsigned l_42 = 4294967288UL;
    const int *l_59 = (void*)0;
    const int l_64 = 0x254764FEL;
    int * const l_68 = (void*)0;
    int * const * const l_67 = &l_68;
    int *l_469 = &g_360;
    char *l_492 = (void*)0;
    unsigned short *l_495 = &g_229;
    (*l_469) = (0x7D437F1BL && (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_27(func_27((l_42 &= p_21), ((+(((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*l_469) = func_27((0x851F08A1L && (safe_mod_func_uint16_t_u_u(func_49(((safe_lshift_func_int16_t_s_s(func_53(l_59, func_60(func_27((l_64 <= (-1L)), (!(safe_mod_func_int8_t_s_s((func_27(l_64, g_11) == p_20), g_11)))), p_21, l_67), p_19, p_20, l_469), 5)) | p_19)), g_11))), g_199)) & 0x2BL), p_20)), 1)) || 0xC80864EDL) && 1UL)) > g_11)), g_11), g_11)), p_19)));
    (*g_113) = &p_19;
    (*g_494) = func_60((*l_469), g_493, &l_469);
    (*l_469) |= (&p_20 == l_495);
    return (***g_255);
}







static unsigned func_27(int p_28, short p_29)
{
    int *l_32 = (void*)0;
    int *l_36 = &g_35;
    (*g_33) = l_32;
    (*l_36) |= 0xEDD1EDB6L;
    return p_28;
}







static unsigned short func_49(short p_50)
{
    unsigned l_489 = 0x7869FA13L;
    int l_491 = 0xFA25F1CDL;
    l_491 = l_489;
    return l_489;
}







static short func_53(const int * p_54, int ** p_55, const int p_56, const unsigned p_57, int * p_58)
{
    unsigned short *l_474 = (void*)0;
    int l_481 = 1L;
    unsigned *l_482 = &g_220;
    unsigned l_483 = 0x58AF41B1L;
    int l_484 = (-1L);
    short *l_485 = (void*)0;
    short *l_486 = &g_210;
    short *l_487 = &g_488;
    (*p_58) &= (((*l_487) = ((*l_486) = (safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((l_474 != l_474), 0x8E7ED444L)) | (((safe_lshift_func_int16_t_s_u((p_56 != ((safe_sub_func_int16_t_s_s(0L, (((func_27((((*l_482) = (safe_add_func_uint32_t_u_u((func_27(l_481, (g_210 &= (((((*l_482) &= p_56) && (0x44F4L | (&l_474 == &l_474))) != 0xF0180740L) < l_483))) < l_483), 0x0DBAB8B7L))) || 0x9188F1EDL), p_57) > l_481) || l_481) != l_481))) != 0x48439092L)), 14)) || p_57) ^ l_484)) | 0x32L), p_57)))) <= p_56);
    return l_481;
}







static int ** func_60(const unsigned p_61, int p_62, int * const * const p_63)
{
    unsigned l_73 = 4294967291UL;
    int **l_75 = &g_34;
    int **l_82 = &g_34;
    unsigned short **l_397 = &g_107;
    const unsigned l_410 = 0xEBF90950L;
    int l_468 = 0L;
lbl_415:
    for (p_62 = 0; (p_62 <= 16); ++p_62)
    {
        short l_78 = 0L;
        int *l_81 = &g_35;
        (*l_81) = (safe_rshift_func_uint8_t_u_u(l_73, ((safe_unary_minus_func_int32_t_s((&g_34 == l_75))) >= (safe_mod_func_uint8_t_u_u(l_78, 0xFDL)))));
    }
    (*l_82) = (*p_63);
    for (p_62 = 23; (p_62 < (-17)); --p_62)
    {
        const int l_90 = (-3L);
        int **l_100 = &g_34;
        unsigned short *l_101 = &g_102;
        int *l_293 = &g_294;
        short *l_295 = &g_210;
        unsigned short *l_296 = &g_229;
        unsigned char *l_326 = &g_327;
        short * const * const l_376 = &l_295;
        short * const * const *l_375 = &l_376;
        unsigned short **l_396 = &l_101;
        unsigned short **l_398 = &l_101;
        unsigned char l_428 = 0UL;
        (*g_113) = ((*l_100) = func_85(l_90, func_91(func_96(((*l_101) = ((safe_mod_func_uint32_t_u_u((((void*)0 != l_100) || (((*p_63) != (void*)0) < (l_90 || func_27((((*l_101) = 0UL) != p_62), (g_35 > g_11))))), 0xD8A5C089L)) || 1L))), p_61, g_11, p_62), g_113, p_61));
        (*l_82) = (*l_100);
        if ((safe_mod_func_int32_t_s_s((((*l_296) |= ((((*g_107) = func_27(((*l_293) ^= (65533UL > 0x5CB5L)), ((*l_295) = g_102))) && 0L) < p_61)) & (p_61 < p_62)), 0xF89D8E52L)))
        {
            char l_301 = 0xA8L;
            int l_305 = 0x33F460C0L;
            unsigned char *l_314 = &g_223;
            const short *l_343 = &g_210;
            unsigned char l_405 = 0x05L;
            const char l_406 = 5L;
            int l_419 = 0L;
            unsigned short l_420 = 0xFF87L;
            unsigned short l_455 = 0x1280L;
            for (g_223 = 0; (g_223 == 29); g_223++)
            {
                char l_304 = 0x22L;
                int **l_306 = (void*)0;
                int l_309 = 0x1E384F03L;
                int l_317 = 0x87FA1743L;
                unsigned short **l_391 = (void*)0;
                if (func_27((func_27((((void*)0 == (*p_63)) != (-9L)), g_199) == p_61), (((safe_mod_func_uint16_t_u_u(p_61, (g_294 & (((void*)0 != l_293) > l_301)))) < p_62) ^ 4294967295UL)))
                {
                    for (g_136 = 0; (g_136 >= 13); g_136++)
                    {
                        (*g_112) = l_304;
                        if ((*g_112))
                            break;
                        l_305 = p_62;
                    }
                    return l_306;
                }
                else
                {
                    unsigned char *l_315 = &g_316;
                    int l_318 = (-3L);
                    int *l_365 = &g_136;
                    (*g_149) = (*g_149);
                    l_317 = ((&l_82 == &p_63) > ((*l_296) = (safe_sub_func_int8_t_s_s(l_309, ((safe_sub_func_int32_t_s_s(p_62, (1L | l_301))) > (safe_add_func_uint8_t_u_u(((*l_315) = ((void*)0 == l_314)), ((***g_255) <= 0xA7L))))))));
                    if (l_318)
                    {
                        unsigned l_319 = 0xEEAEBF9CL;
                        l_319 = (*g_149);
                        if ((*g_112))
                            break;
                    }
                    else
                    {
                        unsigned char **l_328 = (void*)0;
                        unsigned char **l_329 = &l_314;
                        char *l_330 = &g_227;
                        char *l_331 = &l_304;
                        int l_332 = 0x60CB00EDL;
                        short **l_337 = (void*)0;
                        short **l_338 = &l_295;
                        short *l_342 = &g_210;
                        short **l_341 = &l_342;
                        unsigned *l_346 = &g_220;
                        const unsigned l_353 = 4294967288UL;
                        (*g_135) = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_315) = p_61), ((void*)0 == (*g_33)))) > ((p_62 <= ((*l_296) = (p_62 || 8L))) | (safe_add_func_uint8_t_u_u(((l_326 = &g_223) != ((*l_329) = &g_327)), ((*l_331) = ((*l_330) = (+0L))))))), l_332));
                        (*g_149) |= (safe_sub_func_uint8_t_u_u((l_318 | g_327), (safe_add_func_int32_t_s_s((((*l_338) = &g_210) == (void*)0), (((*l_331) = p_62) == ((safe_sub_func_uint32_t_u_u(((((((*l_341) = l_296) == l_343) & (((safe_lshift_func_uint8_t_u_s(p_62, 7)) > ((*l_346) = p_62)) || (*g_107))) > (*g_112)) || 0L), p_62)) <= l_301))))));
                        l_332 = ((*g_112) &= (safe_lshift_func_uint8_t_u_s((~g_316), (safe_mod_func_uint32_t_u_u((((*g_253) | (0UL != (((safe_sub_func_uint16_t_u_u(l_353, (0xD9L > g_11))) || 0xCE67L) | 65530UL))) & ((*l_331) = (safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(p_62, 255UL)) == 8L) >= p_62), p_62)))), l_332)))));
                        l_365 = func_85((((safe_rshift_func_uint16_t_u_s((*g_107), g_11)) || p_62) < g_360), (*g_111), l_306, (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0xD87EL, 9)), g_220)));
                    }
                }
                for (g_229 = 0; (g_229 != 42); ++g_229)
                {
                    char *l_370 = &l_301;
                    short * const * const **l_377 = &l_375;
                    int l_380 = (-1L);
                    int l_381 = 0xDFB8CD42L;
                    l_381 &= (safe_rshift_func_uint8_t_u_s((((p_62 || 0xC44B2EB3L) != ((((*l_370) = (!0x0CL)) <= 5UL) || g_220)) & (safe_mod_func_int16_t_s_s((+g_327), (safe_add_func_int8_t_s_s((((*l_377) = l_375) == (void*)0), (((((safe_sub_func_int16_t_s_s((!l_305), 0xE49AL)) == l_380) && l_305) || p_61) & 1UL)))))), 2));
                }
                if (func_27(g_220, g_360))
                {
                    int *l_386 = (void*)0;
                    for (g_294 = 0; (g_294 >= (-4)); g_294 = safe_sub_func_uint32_t_u_u(g_294, 1))
                    {
                        int **l_384 = &l_293;
                        int l_385 = (-3L);
                        (*g_112) &= (&g_11 != ((*l_384) = &g_294));
                        l_386 = &l_305;
                    }
                }
                else
                {
                    (*g_112) = p_62;
                    (*g_113) = ((*l_100) = (void*)0);
                    if (p_62)
                        break;
                }
                for (g_316 = 0; (g_316 <= 21); ++g_316)
                {
                    unsigned short ***l_392 = (void*)0;
                    unsigned short ***l_393 = &g_106;
                    unsigned short ***l_394 = &g_106;
                    unsigned short ***l_395 = &g_106;
                    int l_399 = (-5L);
                    unsigned l_400 = 0xA9577ACFL;
                    const unsigned l_407 = 0xC70B0799L;
                    l_399 ^= (((**g_111) >= g_227) <= ((((l_396 = l_391) != (l_398 = l_397)) || p_61) < l_305));
                    l_317 &= (l_399 && ((p_62 < p_61) <= (g_102 > p_61)));
                    if ((((void*)0 != &l_376) || (func_27(func_27(func_27(l_400, l_305), ((0UL == ((g_102 != ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((4L >= (((p_61 || l_304) | 6L) < l_405)) != l_406) < l_407) > (-6L)), 0xA226L)), 1)) >= 1UL)) && l_406)) > 0UL)), p_61) != 0x69774912L)))
                    {
                        (*g_112) ^= (-9L);
                    }
                    else
                    {
                        (*g_112) = (safe_sub_func_int16_t_s_s(l_410, ((safe_lshift_func_int8_t_s_s((-1L), 0)) < ((**l_376) &= 0x9737L))));
                    }
                }
            }
            for (g_35 = 5; (g_35 > (-7)); --g_35)
            {
                int **l_418 = &g_34;
                unsigned short **l_451 = (void*)0;
                int *l_454 = &g_134;
                if (l_305)
                {
                    if (l_90)
                        goto lbl_415;
                }
                else
                {
                    return l_100;
                }
                for (l_305 = 0; (l_305 >= 0); ++l_305)
                {
                    unsigned char l_421 = 251UL;
                    int *l_450 = &g_136;
                    unsigned short ***l_452 = (void*)0;
                    l_419 = (l_418 != (void*)0);
                    if (l_420)
                    {
                        int l_429 = 0x6C3FE3CDL;
                        int *l_430 = &g_136;
                        const unsigned char *l_433 = &l_405;
                        const unsigned char **l_432 = &l_433;
                        const unsigned char ***l_431 = &l_432;
                        unsigned short *l_436 = (void*)0;
                        unsigned short *l_437 = &l_420;
                        (*l_82) = func_91(l_418, l_421, g_102, (((*g_253) ^ 255UL) & ((safe_lshift_func_uint16_t_u_s((p_62 | g_294), 14)) | (+((safe_mod_func_uint8_t_u_u(g_210, (safe_mod_func_uint32_t_u_u(0x57A9E3E7L, l_428)))) | p_61)))));
                        (*l_430) |= (p_61 & l_429);
                        (*l_431) = (void*)0;
                        (*g_149) &= ((safe_mod_func_uint16_t_u_u(p_61, ((*l_437) = ((*l_430) &= ((*l_296) = (g_294 < ((**l_398) = 0x342DL))))))) || ((void*)0 != &g_210));
                    }
                    else
                    {
                        short l_440 = 0xD63AL;
                        unsigned *l_441 = &g_220;
                        (*l_75) = func_91(func_96((safe_rshift_func_int8_t_s_u(l_301, ((*l_326) &= p_62)))), p_61, l_440, ((*l_441) = l_419));
                    }
                    (*l_450) &= (safe_add_func_int16_t_s_s((p_62 & 0x096A5C97L), ((safe_add_func_int8_t_s_s((~p_62), 0x37L)) > (!(safe_mod_func_uint32_t_u_u((0x22L <= (safe_add_func_int32_t_s_s(((***g_255) >= (((void*)0 != &l_421) && p_62)), l_421))), (**l_418)))))));
                    (*g_453) = l_451;
                }
                (*l_454) = (l_405 || (0x60L > p_61));
                (*g_149) = l_455;
            }
            (*g_112) |= ((safe_rshift_func_int16_t_s_s(9L, 13)) && g_458);
        }
        else
        {
            int l_461 = 6L;
            unsigned *l_462 = &l_73;
            unsigned *l_463 = &g_220;
            (*l_75) = func_91(l_82, p_62, p_62, ((*l_463) = ((*l_462) = (safe_lshift_func_uint16_t_u_u(l_461, 2)))));
            l_468 = ((safe_sub_func_int16_t_s_s(4L, (((safe_mod_func_uint16_t_u_u(((**l_100) = ((g_254 ^ (4UL && ((**l_100) < 0x89544A4EL))) > p_61)), p_62)) ^ p_62) != 0x18L))) >= l_461);
        }
    }
    return l_82;
}







static int * func_85(const int p_86, int * p_87, int ** p_88, const short p_89)
{
    unsigned short **l_115 = &g_107;
    unsigned short ***l_116 = &g_106;
    unsigned short ***l_117 = (void*)0;
    unsigned short ***l_118 = &g_106;
    unsigned short **l_119 = (void*)0;
    unsigned short ***l_120 = &g_106;
    unsigned short ***l_121 = &g_106;
    unsigned short **l_122 = &g_107;
    int **l_130 = &g_34;
    char l_171 = (-9L);
    const int *l_200 = &g_35;
    short *l_209 = &g_210;
    (*p_87) &= ((void*)0 != &g_114);
    if (((*p_87) = (l_115 != (l_122 = (l_119 = (void*)0)))))
    {
        short l_137 = 0x0062L;
        int l_138 = 0x2BC35819L;
        int **l_155 = &g_112;
        int l_188 = 0xFED1463EL;
        if ((safe_rshift_func_uint16_t_u_s((&g_80 != (void*)0), 15)))
        {
            int l_141 = (-6L);
            int *l_156 = &l_141;
            short *l_161 = &l_137;
            unsigned char l_166 = 0x16L;
            char *l_205 = &l_171;
        }
        else
        {
            (*g_112) = (l_209 == &l_137);
        }
        (**l_155) = (g_127 & g_210);
    }
    else
    {
        unsigned l_248 = 0x0866168EL;
        if ((0L || 1UL))
        {
            unsigned short ** const l_221 = &g_107;
            int l_230 = 0xF404FB78L;
        }
        else
        {
            unsigned short **l_288 = &g_107;
            short **l_290 = &l_209;
            short ***l_289 = &l_290;
            (*l_118) = l_288;
            (*l_289) = (void*)0;
            (*l_289) = (*l_289);
        }
    }
    return (*g_113);
}







static int * func_91(int ** p_92, unsigned short p_93, int p_94, unsigned p_95)
{
    int *l_110 = &g_35;
    (*g_111) = ((*p_92) = l_110);
    return (*g_33);
}







static int ** func_96(unsigned short p_97)
{
    unsigned short *l_104 = &g_102;
    unsigned short **l_103 = &l_104;
    int *l_108 = &g_35;
    int **l_109 = &g_34;
    (*g_105) = l_103;
    (*l_109) = l_108;
    return &g_34;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
