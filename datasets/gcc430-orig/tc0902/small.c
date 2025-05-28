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



static short g_6 = 0x1C29L;
static short g_33 = 0L;
static int g_35 = 0xC9B6CD04L;
static unsigned char g_89 = 0x24L;
static int g_91 = 0L;
static char g_105 = 1L;
static unsigned g_107 = 0xF583EF4CL;
static short *g_116 = &g_33;
static short **g_115 = &g_116;
static unsigned g_124 = 0x0B38F1CEL;
static unsigned short g_129 = 4UL;
static int *g_131 = (void*)0;
static unsigned g_145 = 4294967295UL;
static int g_165 = 3L;
static unsigned char *g_226 = &g_89;
static volatile unsigned g_296 = 0UL;
static volatile unsigned *g_295 = &g_296;
static volatile unsigned **g_294 = &g_295;
static short g_316 = 0x9E81L;
static short g_363 = (-1L);
static int g_406 = 0x42FC2654L;
static unsigned char g_408 = 0x93L;
static unsigned char g_410 = 5UL;
static unsigned g_411 = 0x1DD44DDFL;
static short g_428 = 2L;
static short g_430 = 0xEE75L;
static int *g_459 = &g_406;
static int **g_504 = (void*)0;
static short *g_514 = &g_363;
static int g_518 = 0x0F36B81FL;
static volatile unsigned g_558 = 9UL;
static unsigned g_580 = 0x880585DCL;
static int **g_598 = &g_131;
static unsigned **g_648 = (void*)0;
static unsigned short g_739 = 3UL;



static unsigned func_1(void);
static int func_2(int p_3, short p_4, int p_5);
static unsigned char func_11(unsigned p_12, unsigned p_13, unsigned char p_14, unsigned p_15, unsigned p_16);
static short func_20(char p_21, unsigned p_22);
static unsigned func_36(short * p_37);
static short * func_38(int * p_39, unsigned p_40, short * p_41);
static int * func_42(short * p_43, char p_44, unsigned short p_45, short * p_46, unsigned short p_47);
static short * func_48(unsigned p_49);
static unsigned char func_63(unsigned char p_64, short * p_65);
static unsigned func_77(unsigned p_78);
static unsigned func_1(void)
{
    short l_17 = 0xBF33L;
    int **l_597 = &g_459;
    short *l_626 = &g_6;
    int l_684 = 0x15A7D8E6L;
    int l_699 = (-7L);
    unsigned l_705 = 4294967290UL;
    int *l_730 = &g_35;
    unsigned short l_732 = 65528UL;
    short *l_733 = &g_430;
    int *l_736 = &g_91;
    unsigned short *l_737 = &g_129;
    unsigned short *l_738 = &g_739;
    unsigned l_740 = 0UL;
    short l_741 = 7L;
    if (func_2(g_6, (((safe_lshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((~g_6), 0xE1ABE8F2L)) > (func_11(l_17, l_17, ((safe_lshift_func_int16_t_s_s(func_20(((0xE0L & (g_6 , ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(l_17, (safe_div_func_int8_t_s_s((g_6 , g_6), g_6)))) ^ 0x5411L), l_17)) , 0xEDL))) != g_6), l_17), 6)) != 0x977FL), g_6, l_17) == l_17)) <= 251UL), l_17)) != (-1L)) <= g_165), l_17))
    {
        int **l_590 = &g_459;
        char *l_591 = &g_105;
        short *l_601 = &l_17;
        int l_629 = 0x8D8AB632L;
        int *l_665 = &g_165;
        int **l_664 = &l_665;
        int l_670 = 0xE25B8744L;
        unsigned char l_685 = 9UL;
        for (g_406 = 0; (g_406 > 6); g_406++)
        {
            int **l_589 = (void*)0;
            g_459 = &g_406;
            g_131 = &g_91;
        }
        (*l_590) = &g_35;
        if ((((*l_591) = g_35) >= ((safe_add_func_int32_t_s_s((!((void*)0 == &g_459)), 0x8A45170DL)) < (safe_add_func_uint16_t_u_u(((**l_590) | (g_107 <= (&g_295 == (void*)0))), (*g_514))))))
        {
            int ***l_596 = &l_590;
            int **l_600 = &g_459;
            int ***l_599 = &l_600;
            (*l_596) = &g_459;
            (**l_597) = ((l_597 != ((*l_599) = (g_598 = ((*l_596) = l_590)))) || (**l_597));
        }
        else
        {
            unsigned l_605 = 0xD5E427B3L;
            int *l_615 = (void*)0;
            unsigned short *l_661 = &g_129;
            unsigned short **l_660 = &l_661;
            int **l_666 = &l_665;
            int l_667 = (-1L);
            int l_702 = 9L;
            int l_712 = 0x37696097L;
            short l_716 = 0xEFA6L;
            int *l_717 = &l_629;
            if ((**l_590))
            {
                int *l_622 = &g_518;
                int l_625 = 1L;
                unsigned *l_647 = &g_145;
                unsigned **l_646 = &l_647;
                int l_671 = 0x96273239L;
                short *l_672 = &g_430;
                unsigned char *l_683 = &g_89;
                for (g_518 = 0; (g_518 == (-18)); g_518--)
                {
                    unsigned *l_604 = &g_124;
                    int l_614 = (-3L);
                    short *l_627 = (void*)0;
                    int l_644 = (-1L);
                    (*l_590) = l_615;
                    for (g_428 = (-6); (g_428 != 3); ++g_428)
                    {
                        unsigned l_628 = 0xC9BEC96CL;
                        l_629 = (safe_lshift_func_int16_t_s_s(0x0E0EL, ((safe_mul_func_int16_t_s_s(((*g_514) = (((void*)0 == l_622) < (g_165 , (safe_div_func_uint8_t_u_u(l_628, g_558))))), 0UL)) , (*g_116))));
                    }
                    (*l_590) = &l_625;
                    if ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0xF1L, (**l_590))) && ((l_614 , ((safe_lshift_func_int8_t_s_u(((*l_591) = (safe_rshift_func_int8_t_s_u(g_411, 2))), (safe_div_func_uint32_t_u_u(l_644, 0x2D9AF334L)))) ^ 6UL)) >= 4294967295UL)), (*g_514))))
                    {
                        int ***l_645 = &g_504;
                        (*l_645) = (void*)0;
                        (**l_590) = 1L;
                        g_648 = l_646;
                    }
                    else
                    {
                        unsigned ***l_649 = (void*)0;
                        unsigned **l_651 = (void*)0;
                        unsigned ***l_650 = &l_651;
                        (*g_598) = &g_91;
                        if ((*g_131))
                            break;
                        (*l_650) = (void*)0;
                        (*g_131) = ((**l_590) = ((safe_rshift_func_uint8_t_u_s(l_625, 1)) , (**l_590)));
                    }
                }
                for (g_129 = 0; (g_129 != 19); ++g_129)
                {
                    if ((**l_597))
                    {
                        (*g_459) = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((+(*g_514)), 11)), (((void*)0 != l_660) | g_518)));
                        (*g_598) = (void*)0;
                    }
                    else
                    {
                        (*l_597) = (*l_597);
                    }
                    return (*g_295);
                }
                (*g_598) = &l_667;
                (*g_131) = (l_671 , func_2((*g_459), ((*l_672) = (safe_lshift_func_uint8_t_u_u(((*l_683) = (((**l_590) || ((*g_131) = (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((**l_597) <= (g_105 == (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(func_36(&g_428), (**l_597))), 0x301ACBECL)))), 11)), 0x7D2FL)))) && (**l_590))), 3))), l_625));
            }
            else
            {
                unsigned l_698 = 0x463DD543L;
                if (l_667)
                {
                    (*l_590) = (*l_597);
                    (**l_597) = 9L;
                    return l_684;
                }
                else
                {
                    int l_700 = 5L;
                    int l_701 = 4L;
                    if ((**l_597))
                    {
                        unsigned *l_686 = &g_580;
                        int *l_697 = &l_667;
                        l_701 = ((((((*l_686) = l_685) <= (((*l_591) = (((-6L) > (safe_sub_func_int8_t_s_s((((((g_410 || (safe_mod_func_uint8_t_u_u(((**l_597) , ((safe_add_func_uint8_t_u_u(((l_697 = ((safe_sub_func_int32_t_s_s((-5L), (*g_295))) , ((*l_590) = (void*)0))) == &g_35), g_165)) >= l_698)), g_6))) > 1UL) , 6UL) , l_698) , l_699), l_700))) > l_698)) >= 1UL)) | l_698) , l_698) || g_107);
                        (*l_590) = &l_667;
                        (**l_597) = (l_702 >= (safe_mod_func_int8_t_s_s(((*l_591) = (**l_597)), l_705)));
                        return (**g_294);
                    }
                    else
                    {
                        int l_713 = 0xA5A66CA3L;
                        unsigned *l_714 = &g_580;
                        unsigned *l_715 = &l_705;
                        (**l_597) = (252UL > ((safe_sub_func_uint16_t_u_u(g_33, (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((3UL && ((g_518 >= (((l_701 | ((*l_715) = (l_590 == (((l_712 & ((*l_714) = l_713)) && (((((**l_597) , 0xE8054638L) || (*g_295)) , (**l_597)) , l_713)) , &g_459)))) , (-1L)) <= g_363)) > l_701)), l_716)), 1UL)))) <= (*g_459)));
                    }
                }
            }
            (*l_717) = (l_667 = l_17);
            return (**g_294);
        }
    }
    else
    {
        unsigned l_722 = 0x652A006CL;
        short *l_723 = (void*)0;
        char l_728 = (-1L);
        unsigned char *l_729 = &g_408;
        int *l_731 = &l_699;
        l_731 = ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s(((*g_514) = l_722), ((((l_722 && ((((**l_597) >= 0x7D2CL) , func_2((safe_rshift_func_uint16_t_u_u(g_91, g_124)), (safe_lshift_func_uint8_t_u_u(((*l_729) = ((g_105 = (255UL || l_728)) >= 5L)), g_406)), (**l_597))) , 0x5A78L)) != 0x63F00BE4L) & l_728) , 0xFEBBL))) ^ l_722) , l_728), 10)) , l_730);
        return (**l_597);
    }
    g_131 = ((*g_598) = (*g_598));
    (*g_459) = l_741;
    return (*g_295);
}







static int func_2(int p_3, short p_4, int p_5)
{
    (*g_459) = 8L;
    return p_5;
}







static unsigned char func_11(unsigned p_12, unsigned p_13, unsigned char p_14, unsigned p_15, unsigned p_16)
{
    int l_324 = 0x21C3949AL;
    unsigned *l_325 = (void*)0;
    int l_326 = (-3L);
    short *l_327 = &g_316;
    unsigned l_351 = 1UL;
    unsigned l_413 = 0x710281F4L;
    unsigned short *l_434 = &g_129;
    int **l_435 = &g_131;
    int *l_439 = &g_165;
    int **l_438 = &l_439;
    int *l_441 = &l_326;
    int **l_440 = &l_441;
    int l_469 = 1L;
    short l_475 = 0xD8C8L;
    int l_562 = 0x3B9E3AC2L;
    if ((safe_unary_minus_func_int16_t_s(((p_16 && func_63(((p_15 = l_324) , g_91), (l_327 = func_48(l_326)))) , (safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((**g_115), l_326)) | l_326) > 0xE9L), (**g_115)))))))
    {
        char l_336 = (-10L);
        int *l_337 = &g_35;
        int **l_338 = &l_337;
        unsigned char l_346 = 0x7CL;
        int *l_352 = (void*)0;
        int *l_353 = &l_324;
        int ***l_354 = &l_338;
        (*l_338) = l_337;
        (*l_337) = (1UL == ((safe_div_func_uint16_t_u_u((((p_12 || (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s((**l_338), (l_346 || (g_165 || ((p_12 && (safe_lshift_func_uint16_t_u_s(((l_351 ^ (((**g_294) , func_77(g_89)) , (**g_294))) , p_15), p_12))) == (*l_337)))))))), 5UL))) >= g_124) & 0x8DAFL), 0xAFB4L)) && l_326));
        (*l_353) = ((*l_337) = 0x21091298L);
        (*l_354) = &g_131;
    }
    else
    {
        int l_381 = (-7L);
        int *l_382 = &l_324;
        short *l_425 = &g_6;
        for (p_14 = 2; (p_14 > 21); p_14 = safe_add_func_int32_t_s_s(p_14, 8))
        {
            int **l_365 = (void*)0;
            int ***l_364 = &l_365;
            unsigned l_412 = 3UL;
            char l_426 = 0xDCL;
            int l_433 = 0x9F1051A6L;
            for (g_89 = (-19); (g_89 == 17); g_89++)
            {
                unsigned short l_359 = 9UL;
                int l_380 = 0x4CBC0E26L;
                short *l_422 = &g_363;
                short *l_427 = &g_428;
                int l_429 = 0L;
                if (((l_359 , p_16) , g_105))
                {
                    int *l_360 = (void*)0;
                    int **l_361 = (void*)0;
                    int **l_362 = &l_360;
                    int l_414 = 0xE139EDC8L;
                    (*l_362) = l_360;
                    if (g_363)
                    {
                        unsigned l_374 = 0xBF95CD84L;
                        short ***l_389 = &g_115;
                        unsigned short *l_390 = &l_359;
                        short **l_391 = &l_327;
                        unsigned char *l_392 = (void*)0;
                        int l_393 = 7L;
                        int l_394 = 8L;
                        int *l_395 = (void*)0;
                        unsigned char *l_407 = &g_408;
                        unsigned char *l_409 = &g_410;
                        l_381 = (((void*)0 != l_364) && (((!1UL) < ((l_380 = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((l_374 = ((void*)0 != &l_325)) | ((g_105 = (safe_unary_minus_func_uint32_t_u(0x7EEBF2CDL))) != ((safe_rshift_func_uint16_t_u_s(p_15, 4)) > ((**g_115) = p_16)))) <= (safe_lshift_func_uint8_t_u_u(l_359, 2))), l_359)), l_351))) >= p_14)) || 0xF84BL));
                        l_382 = (void*)0;
                        l_394 = (((*g_116) , l_326) && (~((g_124 = (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((((l_393 = (((*l_389) = &l_327) != (((*l_390) = (1L == l_380)) , l_391))) != ((g_124 <= 253UL) == l_374)) , 0xE2BEL), p_12)), 1UL))) , l_351)));
                        l_324 = l_412;
                    }
                    else
                    {
                        int *l_415 = &l_414;
                        l_414 = (g_296 >= (p_13 < l_413));
                        (*l_362) = (g_6 , &g_406);
                        (*l_362) = (((**g_294) , p_12) , l_415);
                    }
                    if (l_324)
                    {
                        int *l_416 = &l_380;
                        (*l_416) = g_145;
                    }
                    else
                    {
                        return p_14;
                    }
                    (*l_362) = &g_35;
                }
                else
                {
                    return p_12;
                }
                l_429 = (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int32_t_s(p_12)) , ((*l_427) = (safe_add_func_int8_t_s_s(((((((g_35 == (0x611C71C7L > ((safe_div_func_uint16_t_u_u((p_16 ^ ((*l_422) = ((*l_327) = p_13))), l_413)) >= ((l_380 = l_426) < l_359)))) && (-2L)) != (*g_295)) || p_14) , l_413) & 247UL), g_91)))), p_16));
                if (g_430)
                    continue;
            }
            for (g_129 = (-7); (g_129 >= 2); g_129 = safe_add_func_uint32_t_u_u(g_129, 2))
            {
                return l_433;
            }
        }
    }
    if ((((((*l_438) = &l_326) == ((*l_440) = &l_326)) < (*g_295)) < p_16))
    {
        int *l_442 = &g_35;
        short *l_450 = &g_316;
        int l_451 = 0xA1BAC8D1L;
        char l_467 = 0x19L;
        unsigned l_478 = 4294967295UL;
        (*l_442) = p_16;
        if ((*l_442))
        {
            unsigned short l_456 = 0x84D7L;
            short *l_457 = &g_6;
            int *l_458 = &g_91;
            (*l_435) = &g_406;
            (*l_435) = l_458;
            g_459 = ((*l_435) = &g_35);
        }
        else
        {
            char *l_466 = &g_105;
            int l_468 = (-4L);
            unsigned *l_470 = (void*)0;
            unsigned *l_471 = &g_411;
            (*l_442) = ((*g_459) = (func_63(((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((((**g_115) = p_16) == (((safe_lshift_func_uint16_t_u_u(g_89, 12)) < (l_466 != (void*)0)) ^ l_467)), 4)) < ((g_430 = l_468) <= l_469)) >= p_12), ((*l_471) = p_13))) <= (**g_294)), (*g_115)) , p_14));
        }
        (*g_459) = ((((func_77((*l_442)) >= (**g_115)) == (safe_div_func_int16_t_s_s((65535UL <= (((p_15 == (safe_unary_minus_func_int16_t_s(l_475))) >= 0x80E7L) == (safe_add_func_uint16_t_u_u(g_165, p_15)))), l_478))) != (**g_294)) , (*l_442));
    }
    else
    {
        short *l_481 = &l_475;
        int l_498 = 0x675856F4L;
        int **l_513 = &l_441;
        int *l_533 = (void*)0;
        unsigned short **l_555 = &l_434;
        unsigned short l_579 = 0x5964L;
        char *l_581 = &g_105;
        unsigned l_586 = 0x3F8F3A49L;
        if ((p_14 , (safe_lshift_func_int8_t_s_s((0UL > p_12), p_15))))
        {
            unsigned *l_488 = &g_411;
            unsigned char *l_489 = &g_410;
            int l_492 = 0x7DEEA2B2L;
            (*g_459) = (safe_mod_func_uint8_t_u_u((((*l_488) = (**g_294)) & g_316), p_12));
            (*g_459) = ((*g_295) == (((*l_489) = p_13) , (safe_add_func_int16_t_s_s(((*g_294) != (void*)0), ((void*)0 != &p_15)))));
            (*g_459) = l_492;
        }
        else
        {
            unsigned short l_495 = 0x5F96L;
            char *l_501 = &g_105;
            short *l_519 = (void*)0;
            unsigned short l_531 = 0x65A0L;
            int *l_532 = &g_35;
            int ***l_544 = &l_435;
            char l_550 = 0x26L;
            char l_557 = 0xB4L;
            if (((safe_div_func_uint32_t_u_u(p_15, l_495)) == (((*g_116) = (((l_498 > ((safe_add_func_int32_t_s_s((((void*)0 == &g_116) || p_12), l_495)) , (p_15 != ((((*l_501) = func_77(p_15)) & 3L) < (*g_116))))) != 1L) , l_498)) & p_12)))
            {
                int **l_505 = &l_441;
                int ***l_506 = &l_438;
                int l_520 = 0x3143C5D1L;
                unsigned char *l_561 = &g_410;
                if (func_77(((safe_rshift_func_int8_t_s_s((((l_505 = g_504) == ((*l_506) = &l_441)) & 65529UL), 7)) == ((*l_434) = (safe_div_func_int32_t_s_s(((g_6 <= (((safe_mod_func_uint8_t_u_u((((*l_501) = p_16) , ((safe_mul_func_uint32_t_u_u((g_504 != (l_513 = g_504)), (0xB6L == 9L))) , p_16)), 255UL)) , l_413) || l_495)) , p_14), p_13))))))
                {
                    short l_530 = 5L;
                    if (func_77(g_129))
                    {
                        unsigned *l_515 = &g_145;
                        (*l_435) = &g_406;
                        g_131 = &l_520;
                        return p_13;
                    }
                    else
                    {
                        int **l_521 = &g_459;
                        short *l_522 = &g_33;
                        (*l_521) = (g_131 = &g_91);
                        l_532 = l_532;
                    }
                    l_533 = &l_498;
                }
                else
                {
                    char l_556 = 0x04L;
                    (*g_459) = (&l_435 != ((safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((((((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_14, p_15)) | ((-1L) & (safe_sub_func_int16_t_s_s(p_12, g_35)))), func_77(func_77((*l_532))))) >= l_520) , 0x61L) , l_533) != (void*)0) && p_13), (*g_295))) >= (*l_532)), 0x8287L)) , l_544));
                    for (l_469 = 0; (l_469 <= 21); l_469++)
                    {
                        short *l_549 = (void*)0;
                        (*l_532) = (*g_459);
                        if (p_12)
                            continue;
                        l_557 = (safe_rshift_func_int8_t_s_u(g_91, ((p_12 & (l_550 || ((((*g_459) = ((*l_532) = (p_12 , ((safe_add_func_uint8_t_u_u((~((safe_lshift_func_uint16_t_u_u(l_520, 13)) != l_498)), (l_555 != &l_434))) , p_14)))) < l_556) == l_498))) , p_12)));
                    }
                }
                (*g_459) = (((*l_561) = ((0x45245801L || (g_558 & (**g_115))) < ((((safe_add_func_int32_t_s_s(((*l_532) = (((p_13 <= (g_316 >= g_408)) | p_15) | g_363)), p_13)) <= g_430) & 1L) >= 4294967286UL))) , l_562);
                g_131 = &g_406;
            }
            else
            {
                (*l_532) = (*g_459);
                (*g_459) = (safe_add_func_int8_t_s_s(0x53L, 1UL));
                for (l_351 = 16; (l_351 >= 2); l_351 = safe_sub_func_int32_t_s_s(l_351, 4))
                {
                    unsigned char **l_576 = &g_226;
                    unsigned char ***l_575 = &l_576;
                    (*l_575) = (void*)0;
                    (*l_435) = (void*)0;
                }
            }
            (*l_435) = (void*)0;
            g_580 = (safe_mod_func_int8_t_s_s((p_14 , l_579), g_33));
        }
        (*l_435) = &l_498;
        (*g_459) = (safe_lshift_func_int8_t_s_s(l_586, (**l_435)));
    }
    return p_15;
}







static short func_20(char p_21, unsigned p_22)
{
    int l_31 = 1L;
    short *l_32 = &g_33;
    int *l_34 = &g_35;
    char l_54 = 0x63L;
    int *l_127 = &g_91;
    unsigned short *l_128 = &g_129;
    int **l_322 = &g_131;
    for (p_21 = 0; (p_21 <= (-19)); p_21 = safe_sub_func_int16_t_s_s(p_21, 9))
    {
        return l_31;
    }
    (*l_34) = (g_6 < ((*l_32) = p_22));
    (*l_34) = (l_32 != &g_33);
    (*l_322) = (func_36(func_38(func_42(func_48((((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_35 >= 0xE9D070FEL), ((g_33 != (l_54 , (safe_div_func_uint32_t_u_u((0x6E49L == ((*l_128) = (safe_sub_func_uint16_t_u_u((*l_34), (safe_add_func_int32_t_s_s(((((g_33 >= (((*l_127) = (!((((((safe_sub_func_uint8_t_u_u(func_63((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((0x1CC0D681L | (((safe_rshift_func_uint8_t_u_s(p_21, 1)) , &g_33) == &g_33)), (*l_34))), 5)), g_33)), l_32), (*l_34))) , (*l_34)) <= (*l_34)) && 3UL) | g_33) && p_21))) | 0L)) < p_22) , 0x12CAL) ^ (*l_34)), (*l_34))))))), g_6)))) & g_33))), (-5L))) || (-1L)) || p_22)), p_22, p_22, (*g_115), (*l_34)), g_35, &g_6)) , l_127);
    return (**g_115);
}







static unsigned func_36(short * p_37)
{
    (*g_131) = (-1L);
    return g_296;
}







static short * func_38(int * p_39, unsigned p_40, short * p_41)
{
    int l_321 = 0L;
    (*p_39) = (safe_rshift_func_uint16_t_u_u(l_321, g_91));
    return (*g_115);
}







static int * func_42(short * p_43, char p_44, unsigned short p_45, short * p_46, unsigned short p_47)
{
    int *l_130 = &g_91;
    unsigned short *l_134 = &g_129;
    unsigned short **l_133 = &l_134;
    unsigned *l_157 = (void*)0;
    short l_158 = 0xD543L;
    unsigned l_163 = 4294967286UL;
    int *l_237 = &g_91;
    unsigned short **l_244 = &l_134;
    int l_290 = (-7L);
    unsigned *l_310 = &g_107;
    short *l_313 = &l_158;
    int l_314 = 0xB5A73DFFL;
    short *l_315 = &g_316;
    unsigned l_317 = 0x18DA4701L;
    int *l_318 = (void*)0;
    g_131 = l_130;
    if ((*l_130))
    {
        int **l_132 = &l_130;
        unsigned short **l_135 = (void*)0;
        unsigned *l_142 = &g_124;
        unsigned *l_143 = &g_107;
        unsigned *l_144 = &g_145;
        short **l_146 = &g_116;
        short ***l_147 = &g_115;
        (*l_132) = &g_35;
        l_135 = l_133;
        (*l_147) = ((((*l_130) , ((*l_144) = ((*l_143) = (g_129 , ((&p_47 != (void*)0) == (safe_sub_func_uint32_t_u_u((p_45 , (safe_add_func_int8_t_s_s(g_6, g_107))), ((*l_142) = (safe_lshift_func_int16_t_s_u((*p_46), ((*l_130) == 4294967294UL))))))))))) , (**l_132)) , l_146);
    }
    else
    {
        int l_164 = 0x4E5585DAL;
        unsigned short l_185 = 8UL;
        unsigned **l_214 = &l_157;
        int l_232 = 4L;
        unsigned ***l_233 = (void*)0;
        unsigned ***l_234 = &l_214;
        unsigned short **l_246 = &l_134;
        for (g_107 = 0; (g_107 <= 42); g_107++)
        {
            int l_154 = 0x06E9E1E6L;
            int *l_166 = &l_154;
            int l_209 = 6L;
            unsigned char **l_225 = (void*)0;
            int l_231 = 5L;
        }
        if (((((*g_116) | ((((*l_234) = l_214) != (p_45 , &l_157)) > ((*g_226) , ((safe_div_func_uint16_t_u_u(65526UL, 0xB584L)) ^ ((*g_131) = l_232))))) > (*g_116)) == (-9L)))
        {
            int **l_238 = (void*)0;
            int **l_239 = (void*)0;
            int **l_240 = (void*)0;
            int **l_241 = &l_130;
            unsigned short **l_245 = (void*)0;
            unsigned char l_256 = 0x97L;
            (*l_241) = (g_131 = l_237);
            if (((~(*g_131)) & ((((safe_sub_func_uint8_t_u_u(((*g_116) , (((void*)0 == l_244) , ((*g_226) = (((l_245 == l_246) & p_47) < ((g_91 , (*g_226)) >= 249UL))))), 3L)) < (*g_116)) , 9L) > p_45)))
            {
                int *l_249 = (void*)0;
                for (p_44 = (-9); (p_44 >= (-17)); p_44 = safe_sub_func_int8_t_s_s(p_44, 1))
                {
                    unsigned char *l_257 = &l_256;
                    unsigned char **l_258 = &g_226;
                    int l_259 = 0x0B409ACCL;
                    (*l_241) = l_237;
                    (*l_241) = &g_91;
                    (*l_241) = l_249;
                    if ((safe_sub_func_uint32_t_u_u((g_124 , (((((l_259 = ((*g_116) & (((+((*g_131) , (((*g_116) && (g_105 > (((safe_div_func_uint32_t_u_u((l_256 || ((g_165 , l_257) == ((*l_258) = &l_256))), p_45)) > p_47) == 0xD1E9F69FL))) , p_44))) , 1L) & l_259))) , 4L) | (*g_131)) != 65531UL) | 65533UL)), p_44)))
                    {
                        unsigned short l_260 = 0UL;
                        short *l_267 = &l_158;
                        int l_274 = 1L;
                        l_260 = 3L;
                        l_232 = (-4L);
                        (*g_131) = (safe_rshift_func_int16_t_s_s(((*l_267) = (safe_mod_func_int16_t_s_s(((*g_116) = 0x2C22L), ((safe_rshift_func_int8_t_s_u(((*g_131) , g_129), 5)) , (~l_164))))), (safe_mod_func_uint32_t_u_u((l_274 = (((g_6 & (safe_div_func_uint16_t_u_u((g_165 , 3UL), l_164))) , ((safe_rshift_func_uint16_t_u_u(((*g_115) == (void*)0), 14)) ^ g_129)) | g_124)), 0xE782F844L))));
                    }
                    else
                    {
                        int *l_287 = &g_91;
                        (*g_131) = (g_33 || (safe_div_func_int8_t_s_s(p_45, (safe_add_func_uint16_t_u_u((1UL <= (safe_lshift_func_uint16_t_u_s((((g_35 , (((safe_lshift_func_uint16_t_u_u(l_164, 14)) || ((((safe_lshift_func_uint16_t_u_u(((!(*g_226)) != p_47), 7)) != (safe_add_func_int8_t_s_s(g_129, (*g_226)))) & p_47) , p_44)) , 1L)) <= g_145) < 1UL), 2))), l_185)))));
                        return l_287;
                    }
                }
            }
            else
            {
                (*l_241) = l_157;
            }
            (*g_131) = (safe_sub_func_uint16_t_u_u((((l_290 , 1L) , g_33) != (*g_131)), (*p_43)));
        }
        else
        {
            int *l_291 = &l_290;
            return &g_35;
        }
        for (l_185 = (-22); (l_185 != 2); l_185++)
        {
            volatile unsigned ***l_297 = &g_294;
            (*l_297) = g_294;
            if (p_44)
                continue;
        }
    }
    l_290 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((*p_46), ((safe_lshift_func_int16_t_s_u((((safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((*g_295), ((*g_131) = p_45))) , (safe_lshift_func_uint8_t_u_u((l_310 == &g_145), 7))), (g_33 , (0xBA1E86DCL && (safe_rshift_func_int16_t_s_s(((*l_315) = (((*l_313) = (*g_116)) < (((((*p_46) | l_314) || 0x878DL) >= (**g_115)) >= 0x0FL))), 13)))))) > 0x6BFDL) & 0xB0L), 4)) , p_44))) , l_317), g_107));
    return &g_91;
}







static short * func_48(unsigned p_49)
{
    return (*g_115);
}







static unsigned char func_63(unsigned char p_64, short * p_65)
{
    short *l_76 = &g_33;
    int l_79 = (-1L);
    char l_119 = 0xA2L;
    unsigned *l_123 = &g_124;
    int *l_125 = &g_91;
    int **l_126 = &l_125;
    (*l_125) = (((safe_sub_func_uint32_t_u_u(0UL, (l_76 == (void*)0))) & (func_77(l_79) , ((l_119 || (safe_add_func_int8_t_s_s((p_64 || (safe_unary_minus_func_int16_t_s((((*l_123) = g_6) , (**g_115))))), g_6))) , g_124))) > p_64);
    (*l_125) = p_64;
    (*l_125) = g_91;
    (*l_126) = &g_35;
    return (*l_125);
}







static unsigned func_77(unsigned p_78)
{
    char l_80 = 0x55L;
    int *l_93 = (void*)0;
    int *l_94 = (void*)0;
    int *l_95 = &g_91;
    int **l_96 = &l_94;
    int **l_97 = &l_93;
    unsigned l_98 = 1UL;
    char *l_103 = &l_80;
    char *l_104 = &g_105;
    unsigned *l_106 = &g_107;
    short *l_108 = &g_6;
    unsigned *l_109 = &l_98;
    if (l_80)
    {
        short ***l_81 = (void*)0;
        short **l_83 = (void*)0;
        short ***l_82 = &l_83;
        int *l_85 = (void*)0;
        int **l_84 = &l_85;
        unsigned char *l_88 = &g_89;
        int *l_90 = &g_91;
        (*l_82) = (void*)0;
        (*l_84) = &g_35;
        (*l_90) = (safe_sub_func_uint8_t_u_u(((*l_88) = p_78), 0L));
    }
    else
    {
        int *l_92 = &g_91;
        (*l_92) = p_78;
    }
    (*l_95) = (-9L);
    (*l_97) = ((*l_96) = &g_91);
    if ((l_98 , (((((((*l_106) = ((*l_95) | ((*l_104) = ((*l_103) = (safe_lshift_func_int8_t_s_u((g_35 < (7L > p_78)), (*l_95))))))) , l_108) == l_108) ^ ((*l_109) = (*l_94))) != (*l_93)) | p_78)))
    {
        return g_89;
    }
    else
    {
        int *l_112 = (void*)0;
        (*l_97) = (((*l_106) = (safe_rshift_func_int8_t_s_u(g_6, 0))) , &g_91);
        (*l_97) = (*l_96);
        (*l_97) = l_112;
        for (g_107 = (-2); (g_107 > 46); g_107++)
        {
            int *l_117 = &g_35;
            int l_118 = 0xC2A5DE23L;
            (*l_95) = ((void*)0 == g_115);
            (*l_96) = l_117;
            l_118 = (5UL < ((p_78 | p_78) != 0x0FEDL));
            if (p_78)
                break;
        }
    }
    return (*l_95);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
