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



static int g_9 = (-1L);
static unsigned char g_17 = 4UL;
static unsigned char g_29 = 0x2BL;
static unsigned char *g_28 = &g_29;
static short g_56 = (-7L);
static int g_68 = 0x57D38C46L;
static int g_100 = 0xA309CE07L;
static unsigned short g_111 = 0UL;
static unsigned g_116 = 0xCC6C9DB4L;
static unsigned g_146 = 4294967295UL;
static short g_148 = 0x154EL;
static unsigned short g_153 = 0x72C4L;
static int g_155 = 0x4C767A1EL;
static char g_159 = 9L;
static unsigned char g_182 = 255UL;
static unsigned short g_231 = 0x036DL;
static unsigned char **g_235 = &g_28;
static unsigned char ***g_234 = &g_235;
static short g_285 = 0L;
static unsigned g_295 = 3UL;
static unsigned *g_300 = &g_116;
static unsigned g_358 = 4294967295UL;
static unsigned short g_392 = 0x616CL;
static unsigned g_444 = 4294967292UL;
static unsigned char g_493 = 0x7FL;
static char g_512 = 1L;
static int g_581 = 0x399FE304L;
static unsigned char g_586 = 255UL;
static int *g_592 = &g_68;
static int **g_591 = &g_592;
static char g_662 = 0xEAL;
static char g_697 = 0x44L;
static unsigned g_704 = 1UL;
static short *g_743 = &g_148;
static char *g_786 = &g_662;
static char **g_785 = &g_786;
static unsigned g_819 = 0UL;
static unsigned g_825 = 0xFFB4F049L;



static int func_1(void);
static unsigned short func_12(unsigned p_13);
static unsigned char * func_22(int p_23, unsigned char * p_24, int p_25, unsigned char * p_26, short p_27);
static short * func_41(unsigned char * p_42, char p_43, unsigned p_44, unsigned char ** p_45, unsigned char * const p_46);
static unsigned char * func_47(char p_48, unsigned short p_49);
static char func_50(short * p_51, unsigned char * p_52, char p_53, unsigned char * const * p_54);
static unsigned char func_59(unsigned p_60, unsigned char * p_61, unsigned char * p_62, short * p_63);
static unsigned char * func_64(short * p_65, int * p_66);
static char func_124(const unsigned char * p_125, int * p_126, unsigned char ** p_127, unsigned p_128, unsigned char * p_129);
static unsigned char ** func_131(unsigned char * p_132, int * p_133, unsigned p_134, unsigned char * p_135, int * p_136);
static int func_1(void)
{
    const char l_4 = 9L;
    unsigned char *l_16 = &g_17;
    unsigned short l_30 = 65535UL;
    unsigned char **l_36 = &g_28;
    short l_37 = 1L;
    short *l_38 = &l_37;
    unsigned short l_824 = 0x22FCL;
    int *l_828 = &g_581;
    g_825 = (((safe_rshift_func_uint16_t_u_u(l_4, 2)) <= (((l_4 < (((safe_sub_func_int32_t_s_s(g_9, (safe_sub_func_uint16_t_u_u(func_12((safe_mod_func_uint8_t_u_u((((*l_16) = l_4) | (((*l_38) = (safe_sub_func_uint32_t_u_u(((l_4 < 0x9DL) == ((safe_sub_func_int32_t_s_s((((*l_36) = func_22(l_4, l_16, g_9, g_28, l_30)) == &g_29), l_37)) & 4294967288UL)), 0x5FCB4448L))) == g_9)), l_4))), l_30)))) & l_824) == 0x8F50L)) != 1UL) != g_9)) < (*g_786));
    (*l_828) = (safe_lshift_func_uint16_t_u_u(g_819, g_182));
    return (*l_828);
}







static unsigned short func_12(unsigned p_13)
{
    short *l_55 = &g_56;
    unsigned char *l_57 = &g_29;
    int l_58 = (-1L);
    short *l_147 = &g_148;
    short **l_822 = &g_743;
    int *l_823 = &l_58;
    (*l_823) = (safe_add_func_int32_t_s_s((((*l_822) = func_41(func_47(func_50(l_55, func_22(g_29, l_57, l_58, l_57, ((((l_58 <= func_59(l_58, l_57, func_64(&g_56, &l_58), l_147)) && l_58) != (*g_28)) <= g_17)), p_13, &l_57), g_9), p_13, p_13, &l_57, l_57)) != l_147), 0x67C42C5EL));
    (*g_591) = (*g_591);
    return p_13;
}







static unsigned char * func_22(int p_23, unsigned char * p_24, int p_25, unsigned char * p_26, short p_27)
{
    unsigned l_33 = 4294967295UL;
    int *l_34 = (void*)0;
    int l_35 = (-7L);
    l_35 = (safe_sub_func_uint16_t_u_u(l_33, p_27));
    return &g_29;
}







static short * func_41(unsigned char * p_42, char p_43, unsigned p_44, unsigned char ** p_45, unsigned char * const p_46)
{
    int *l_733 = &g_155;
    int **l_734 = &l_733;
    short *l_735 = (void*)0;
    short **l_740 = (void*)0;
    short *l_742 = &g_148;
    short **l_741 = &l_742;
    unsigned char *l_748 = &g_493;
    unsigned char l_763 = 0x8FL;
    const unsigned char *** const *l_772 = (void*)0;
    unsigned char l_820 = 0UL;
    short *l_821 = &g_285;
    (*l_734) = ((*g_591) = l_733);
    if (func_50(l_735, func_22(((*l_733) && 0L), (*p_45), (*l_733), (**g_234), (*g_743)), (*l_733), &l_748))
    {
        const short *l_750 = &g_148;
        const short ** const l_749 = &l_750;
        int *l_751 = &g_68;
        char *l_760 = &g_697;
        (*l_751) ^= ((**l_734) &= ((l_749 != &l_750) | g_146));
        if (((safe_sub_func_int16_t_s_s((*g_743), (((safe_rshift_func_int8_t_s_u(((*l_760) = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((*l_733), 0x1B3FL)), 2))), (**l_734))) || (-5L)) != (((safe_mul_func_uint16_t_u_u(l_763, (p_43 != (*g_743)))) ^ 1UL) >= 0x19L)))) ^ (*l_733)))
        {
            unsigned short *l_776 = &g_153;
            unsigned short **l_775 = &l_776;
            int l_777 = 0L;
            int *l_778 = &l_777;
            (*l_778) = ((*l_751) = (safe_rshift_func_uint16_t_u_u((((*l_733) = ((safe_sub_func_uint8_t_u_u((*l_751), (!((safe_add_func_uint32_t_u_u(((0x55L != (**g_235)) || ((((*l_751) || (safe_mul_func_int16_t_s_s(((*l_742) ^= ((*l_751) & g_182)), ((void*)0 != l_772)))) != ((((safe_sub_func_uint16_t_u_u((~(g_231 = (((*l_775) = (void*)0) != &g_231))), g_295)) > (*l_733)) == (*g_28)) > 0xA07CL)) > p_43)), 0UL)) == p_43)))) != p_44)) | p_43), l_777)));
            return l_776;
        }
        else
        {
            const unsigned short l_791 = 0xD618L;
            unsigned char *l_794 = (void*)0;
            for (g_155 = 0; (g_155 > 1); g_155 = safe_add_func_int32_t_s_s(g_155, 2))
            {
                const unsigned char *l_787 = &g_29;
                const unsigned char **l_788 = &l_787;
                short *l_795 = &g_56;
                (*l_751) |= ((*g_28) | g_182);
                if (p_43)
                    break;
                (*l_751) = func_59((safe_lshift_func_uint16_t_u_s(6UL, (((*l_751) = (safe_sub_func_int32_t_s_s((+(g_785 != (void*)0)), ((*l_751) == p_43)))) || 4294967295UL))), &l_763, (*p_45), l_795);
            }
            (**l_734) = (*l_733);
        }
        for (g_358 = 0; (g_358 > 1); g_358 = safe_add_func_int32_t_s_s(g_358, 4))
        {
            int *l_798 = &g_155;
            unsigned l_799 = 4294967287UL;
            if (((void*)0 != l_798))
            {
                (*g_592) = (1UL | (p_43 < (--l_799)));
            }
            else
            {
                short *l_802 = &g_56;
                int l_803 = 0xEDC90E11L;
                (*g_592) ^= p_44;
                if (p_43)
                    continue;
                if ((func_59((*g_300), (*g_235), ((*p_45) = (void*)0), l_802) <= (l_803 = p_43)))
                {
                    unsigned char l_806 = 0xCBL;
                    for (g_285 = 0; (g_285 != (-26)); --g_285)
                    {
                        (**g_591) &= l_806;
                    }
                    if (p_44)
                        continue;
                }
                else
                {
                    short *l_807 = &g_285;
                    (*l_798) = func_50(l_807, (*g_235), (safe_lshift_func_uint8_t_u_u((*p_46), (***g_234))), func_131((**g_234), l_751, (safe_rshift_func_int16_t_s_u(((*g_743) &= ((*l_751) | p_44)), 10)), (**g_234), (*g_591)));
                    (*l_733) ^= l_803;
                }
            }
        }
    }
    else
    {
        const unsigned short l_812 = 0UL;
        int *l_813 = &g_581;
        unsigned char **l_814 = &g_28;
        short *l_817 = &g_148;
        unsigned *l_818 = &g_819;
        (**l_734) = ((l_812 == ((l_820 = func_124(func_47(l_812, l_812), l_813, l_814, ((*l_818) &= (p_43 < (l_817 != (void*)0))), (*p_45))) <= p_43)) | (**g_785));
        (*l_813) |= (&l_733 == &l_813);
    }
    (*l_733) = (*l_733);
    return l_821;
}







static unsigned char * func_47(char p_48, unsigned short p_49)
{
    short *l_176 = &g_56;
    unsigned char *l_177 = &g_29;
    unsigned char * const **l_178 = (void*)0;
    unsigned char * const l_181 = &g_182;
    unsigned char * const *l_180 = &l_181;
    unsigned char * const **l_179 = &l_180;
    int l_225 = 0L;
    unsigned char ***l_236 = &g_235;
    unsigned char ***l_238 = &g_235;
    unsigned *l_298 = &g_116;
    int l_476 = (-4L);
    int l_530 = (-10L);
    int l_539 = 4L;
    int l_558 = (-1L);
    int l_562 = (-1L);
    int l_635 = (-4L);
    int l_695 = 0L;
    char l_720 = 0x62L;
    unsigned char *l_721 = &g_493;
    unsigned char *l_732 = &g_493;
    if (func_50(l_176, l_177, p_49, ((*l_179) = (void*)0)))
    {
        unsigned char *l_189 = (void*)0;
        if (p_49)
        {
            unsigned char l_187 = 0x51L;
            for (g_182 = 0; (g_182 > 55); ++g_182)
            {
                int *l_188 = &g_68;
                (*l_188) &= (safe_mod_func_int8_t_s_s(l_187, (*g_28)));
                return l_177;
            }
            return l_189;
        }
        else
        {
            int *l_190 = &g_68;
            (*l_190) ^= 0xAB448763L;
        }
    }
    else
    {
        int *l_191 = (void*)0;
        int *l_192 = &g_155;
        int l_211 = 0x28F678E9L;
        int l_228 = 0x4790DEA1L;
        unsigned l_404 = 0UL;
        unsigned char ****l_407 = &l_236;
        short *l_410 = &g_56;
        int l_577 = 0xF209D367L;
        if (((*l_192) &= g_148))
        {
            int **l_193 = &l_192;
            unsigned char *l_196 = &g_17;
            short *l_197 = &g_148;
            int l_278 = 4L;
            int l_312 = (-1L);
            int l_332 = (-1L);
            (*l_193) = &g_68;
            (*l_193) = &g_155;
            if ((safe_mul_func_uint16_t_u_u(0xD738L, func_59(((**l_193) < (**l_193)), func_64(&g_148, &g_155), l_196, l_197))))
            {
                int *l_198 = &g_155;
                int *l_199 = &g_68;
                int *l_200 = &g_68;
                int *l_201 = &g_155;
                int *l_202 = &g_68;
                int *l_203 = (void*)0;
                int *l_204 = (void*)0;
                int *l_205 = (void*)0;
                int *l_206 = &g_68;
                int *l_207 = (void*)0;
                int *l_208 = &g_155;
                int *l_209 = &g_68;
                int *l_210 = &g_68;
                int *l_212 = &l_211;
                int *l_213 = &l_211;
                int *l_214 = (void*)0;
                int *l_215 = &g_155;
                int *l_216 = &l_211;
                int *l_217 = &l_211;
                int *l_218 = &g_68;
                int *l_219 = (void*)0;
                int *l_220 = &l_211;
                int *l_221 = &l_211;
                int *l_222 = &l_211;
                int *l_223 = &g_68;
                int *l_224 = &g_68;
                int *l_226 = &g_68;
                int *l_227 = &l_211;
                int *l_229 = (void*)0;
                int *l_230 = (void*)0;
                g_231++;
                (*l_222) = ((void*)0 != &p_48);
            }
            else
            {
                unsigned char ****l_237 = (void*)0;
                char l_281 = 0x95L;
                int *l_310 = &g_68;
                int l_320 = 0xC8C60D7FL;
                (*l_192) = ((l_238 = (l_236 = g_234)) == &l_180);
                if ((0xF72EL ^ p_48))
                {
                    unsigned char l_241 = 0x98L;
                    int l_246 = 0xE0AEDB7BL;
                    int l_247 = (-1L);
                    int l_250 = 0x9D66935DL;
                    unsigned *l_299 = &g_116;
                    int l_307 = 0x06FA74B5L;
                    for (g_159 = 0; (g_159 >= (-19)); --g_159)
                    {
                        int *l_242 = &l_225;
                        int *l_243 = &g_155;
                        int *l_244 = &g_155;
                        int *l_245 = (void*)0;
                        int *l_248 = &l_225;
                        int *l_249 = &l_211;
                        int *l_251 = (void*)0;
                        int *l_252 = &l_246;
                        int *l_253 = &l_225;
                        int *l_254 = &l_211;
                        int *l_255 = &l_225;
                        int *l_256 = &l_246;
                        int *l_257 = &l_211;
                        int *l_258 = (void*)0;
                        int *l_259 = (void*)0;
                        int *l_260 = &l_225;
                        int *l_261 = &l_250;
                        int *l_262 = &l_211;
                        int *l_263 = &g_68;
                        int *l_264 = &l_211;
                        int *l_265 = &l_225;
                        int *l_266 = (void*)0;
                        int *l_267 = &l_211;
                        int *l_268 = (void*)0;
                        int *l_269 = &l_246;
                        int *l_270 = &l_211;
                        int *l_271 = &l_246;
                        int *l_272 = (void*)0;
                        int *l_273 = &l_228;
                        int *l_274 = (void*)0;
                        int *l_275 = &g_155;
                        int *l_276 = (void*)0;
                        int *l_277 = (void*)0;
                        int *l_279 = &l_225;
                        int *l_280 = &l_278;
                        int *l_282 = &g_68;
                        int *l_283 = (void*)0;
                        int *l_284 = &l_225;
                        int *l_286 = &l_278;
                        int *l_287 = &g_155;
                        int *l_288 = &l_246;
                        int *l_289 = &l_278;
                        int *l_290 = &l_278;
                        int *l_291 = (void*)0;
                        int *l_292 = &l_247;
                        int *l_293 = &l_247;
                        int l_294 = 0x31DCF842L;
                        if (l_241)
                            break;
                        ++g_295;
                        (*l_288) = 0x8F6BB93CL;
                    }
                    (*l_192) &= func_59(g_56, func_22((l_298 == (g_300 = l_299)), func_22((((safe_add_func_int32_t_s_s(l_246, g_295)) & (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_48, l_246)), (5UL <= ((*l_299) = func_59((9UL == l_281), (*g_235), l_196, &g_285)))))) && p_49), (**l_238), p_48, (**l_238), p_49), p_49, (**g_234), l_307), (*g_235), &g_148);
                    for (l_278 = 0; (l_278 != 6); l_278 = safe_add_func_uint32_t_u_u(l_278, 8))
                    {
                        int *l_311 = &l_247;
                        int *l_313 = (void*)0;
                        int *l_314 = &l_246;
                        int *l_315 = &l_312;
                        int *l_316 = &l_225;
                        int *l_317 = &l_247;
                        int *l_318 = &g_68;
                        int *l_319 = &g_68;
                        int *l_321 = &l_228;
                        int *l_322 = &l_247;
                        int *l_323 = &l_312;
                        int *l_324 = &l_320;
                        int *l_325 = &l_228;
                        int *l_326 = &l_228;
                        int *l_327 = &l_312;
                        int *l_328 = &l_312;
                        int *l_329 = (void*)0;
                        int *l_330 = &g_155;
                        int *l_331 = &l_250;
                        int *l_333 = (void*)0;
                        int *l_334 = &l_246;
                        int *l_335 = &l_312;
                        int *l_336 = &g_155;
                        int *l_337 = &l_246;
                        int *l_338 = &l_320;
                        int *l_339 = &l_332;
                        int *l_340 = &l_320;
                        int *l_341 = &g_68;
                        int *l_342 = &g_155;
                        int *l_343 = &g_155;
                        int *l_344 = &l_247;
                        int *l_345 = &l_225;
                        int *l_346 = (void*)0;
                        int *l_347 = &l_228;
                        int *l_348 = &l_250;
                        int *l_349 = &l_247;
                        int *l_350 = &l_312;
                        int l_351 = (-1L);
                        int *l_352 = &l_320;
                        int *l_353 = (void*)0;
                        int *l_354 = (void*)0;
                        int *l_355 = &l_225;
                        int *l_356 = &g_155;
                        int *l_357 = (void*)0;
                        (*l_193) = l_310;
                        ++g_358;
                    }
                }
                else
                {
                    int *l_361 = &l_225;
                    int *l_362 = &l_225;
                    int *l_363 = (void*)0;
                    int *l_364 = &l_312;
                    int *l_365 = &l_320;
                    int *l_366 = &l_228;
                    int *l_367 = &l_211;
                    int *l_368 = &l_211;
                    int *l_369 = &l_312;
                    int *l_370 = (void*)0;
                    int *l_371 = (void*)0;
                    int *l_372 = (void*)0;
                    int *l_373 = &l_278;
                    int *l_374 = &l_278;
                    int *l_375 = &l_211;
                    int *l_376 = &g_155;
                    int *l_377 = (void*)0;
                    int *l_378 = &l_278;
                    int *l_379 = &l_278;
                    int *l_380 = &l_332;
                    int *l_381 = (void*)0;
                    int *l_382 = &l_312;
                    int *l_383 = &g_68;
                    int *l_384 = &l_211;
                    int *l_385 = &g_155;
                    int *l_386 = &l_312;
                    int *l_387 = &l_278;
                    int *l_388 = &l_320;
                    int *l_389 = &l_332;
                    int *l_390 = &l_332;
                    int l_391 = (-6L);
                    int *l_395 = &l_278;
                    int *l_396 = &l_228;
                    int *l_397 = &l_312;
                    int *l_398 = &l_320;
                    int *l_399 = (void*)0;
                    int *l_400 = &l_391;
                    int *l_401 = &l_278;
                    int *l_402 = &l_332;
                    int *l_403 = &l_278;
                    g_392++;
                    (*l_192) |= g_148;
                    --l_404;
                }
                g_155 ^= ((l_225 || p_49) ^ ((g_111 && (((l_407 == l_237) >= func_59((safe_mod_func_int16_t_s_s((-1L), ((*g_28) & ((*l_181) = (*g_28))))), (*g_235), l_196, l_410)) ^ (*g_300))) == 0xC07EL));
            }
        }
        else
        {
            int l_434 = 9L;
            int l_463 = 0xE3233A39L;
            for (g_285 = 0; (g_285 >= (-23)); g_285 = safe_sub_func_int16_t_s_s(g_285, 1))
            {
                unsigned char l_423 = 0x96L;
                for (g_295 = 0; (g_295 >= 40); g_295++)
                {
                    int *l_415 = &g_155;
                    int *l_416 = (void*)0;
                    int *l_417 = &l_225;
                    int *l_418 = &g_68;
                    int *l_419 = &l_211;
                    int *l_420 = &l_228;
                    int *l_421 = &l_225;
                    int *l_422 = &l_228;
                    --l_423;
                }
                if (((p_48 | (safe_mul_func_int16_t_s_s(((*l_176) = g_17), ((*l_192) ^ (***g_234))))) < g_100))
                {
                    char l_441 = (-9L);
                    if (g_56)
                    {
                        int *l_428 = &l_211;
                        int *l_429 = (void*)0;
                        int *l_430 = &l_211;
                        int *l_431 = &l_211;
                        int *l_432 = &l_225;
                        int *l_433 = (void*)0;
                        int *l_435 = (void*)0;
                        int *l_436 = (void*)0;
                        int *l_437 = &l_228;
                        int *l_438 = &g_155;
                        int *l_439 = (void*)0;
                        int *l_440 = &g_68;
                        int *l_442 = &l_228;
                        int *l_443 = &g_68;
                        unsigned char *l_447 = &g_182;
                        (*l_192) ^= p_49;
                        --g_444;
                        return l_447;
                    }
                    else
                    {
                        l_191 = &g_68;
                    }
                }
                else
                {
                    char *l_460 = &g_159;
                    char **l_459 = &l_460;
                    for (g_100 = 10; (g_100 <= 6); g_100 = safe_sub_func_int8_t_s_s(g_100, 5))
                    {
                        unsigned char *l_454 = &g_182;
                        int **l_464 = &l_191;
                        (*l_192) = (safe_add_func_uint16_t_u_u((l_225 && (safe_mul_func_uint8_t_u_u((!func_50(l_176, (l_454 = (***l_407)), ((safe_mul_func_uint16_t_u_u((g_29 & (safe_sub_func_int32_t_s_s(g_231, ((void*)0 != l_459)))), (safe_mul_func_uint8_t_u_u((***g_234), (l_463 = 255UL))))) | l_434), (*g_234))), 0L))), p_49));
                        (*l_464) = &g_68;
                    }
                }
            }
        }
        if (p_48)
        {
            int *l_465 = &g_155;
            int *l_466 = &l_211;
            int *l_467 = &g_155;
            int *l_468 = &l_228;
            int *l_469 = (void*)0;
            int *l_470 = &l_225;
            int *l_471 = &g_68;
            int *l_472 = (void*)0;
            int *l_473 = &l_211;
            int *l_474 = (void*)0;
            int *l_475 = &g_68;
            int *l_477 = &l_211;
            int *l_478 = (void*)0;
            int *l_479 = &l_225;
            int *l_480 = &l_476;
            int *l_481 = &g_68;
            int *l_482 = &l_228;
            int *l_483 = &l_476;
            int *l_484 = &g_155;
            int *l_485 = &l_211;
            int *l_486 = &l_211;
            int *l_487 = &l_476;
            int *l_488 = &l_211;
            int l_489 = 0L;
            int *l_490 = &g_68;
            int *l_491 = &g_68;
            int *l_492 = &l_228;
            g_493++;
        }
        else
        {
            int *l_496 = (void*)0;
            int *l_497 = &l_211;
            int *l_498 = &l_211;
            int *l_499 = &l_228;
            int *l_500 = &l_228;
            int *l_501 = &l_476;
            int *l_502 = &g_68;
            int *l_503 = (void*)0;
            int *l_504 = &g_68;
            int *l_505 = &l_228;
            int *l_506 = &g_155;
            int l_507 = (-4L);
            int *l_508 = &l_211;
            int *l_509 = &l_476;
            int *l_510 = &l_211;
            int *l_511 = (void*)0;
            int *l_513 = &l_225;
            int *l_514 = &l_228;
            int *l_515 = &l_225;
            int *l_516 = &l_507;
            int *l_517 = &g_155;
            int *l_518 = (void*)0;
            int *l_519 = (void*)0;
            int l_520 = 1L;
            int l_521 = 0xDF6F84D0L;
            int *l_522 = &l_507;
            int *l_523 = &g_155;
            int *l_524 = &g_68;
            int *l_525 = &l_225;
            int *l_526 = &l_521;
            int *l_527 = &g_155;
            int *l_528 = &l_507;
            int *l_529 = &l_520;
            int *l_531 = (void*)0;
            int *l_532 = &l_521;
            int *l_533 = &g_155;
            int *l_534 = (void*)0;
            int *l_535 = &g_155;
            int *l_536 = &l_530;
            int *l_537 = (void*)0;
            int *l_538 = (void*)0;
            int *l_540 = (void*)0;
            int *l_541 = &l_520;
            int *l_542 = &l_521;
            int *l_543 = &l_507;
            int *l_544 = (void*)0;
            int *l_545 = &l_507;
            int *l_546 = &l_476;
            int *l_547 = &l_521;
            int *l_548 = &l_530;
            int *l_549 = &g_155;
            int *l_550 = &g_155;
            int *l_551 = &g_68;
            int *l_552 = &l_520;
            int *l_553 = &l_211;
            int *l_554 = &l_225;
            int *l_555 = &g_155;
            int *l_556 = &l_507;
            int *l_557 = &l_520;
            int *l_559 = &l_228;
            int *l_560 = &g_68;
            int l_561 = 8L;
            int l_563 = 0x801741C8L;
            int *l_564 = &l_561;
            int *l_565 = &l_520;
            int *l_566 = &l_558;
            int *l_567 = &l_520;
            int *l_568 = &l_476;
            int *l_569 = &l_507;
            int *l_570 = (void*)0;
            int *l_571 = &l_507;
            int *l_572 = &l_521;
            int *l_573 = (void*)0;
            int *l_574 = &l_228;
            int *l_575 = &l_225;
            int *l_576 = &l_228;
            int *l_578 = &l_558;
            int *l_579 = &l_211;
            int *l_580 = &l_228;
            int *l_582 = &l_211;
            int *l_583 = &l_561;
            int *l_584 = &l_530;
            int *l_585 = &l_521;
            --g_586;
            for (l_558 = 0; (l_558 == 1); l_558++)
            {
                unsigned short *l_593 = &g_231;
                if (p_48)
                    break;
                if (g_231)
                    continue;
                (*l_567) ^= (((*l_593) = (g_591 != (void*)0)) == g_9);
                (*g_591) = (*g_591);
            }
            (*l_569) = (*g_592);
            l_225 = ((*l_585) = ((*l_192) = p_49));
        }
    }
    if (p_49)
    {
        int *l_594 = &l_530;
        int *l_595 = (void*)0;
        int *l_596 = (void*)0;
        int *l_597 = &g_155;
        int *l_598 = &l_558;
        int *l_599 = (void*)0;
        int *l_600 = &l_530;
        int *l_601 = &l_562;
        int *l_602 = &l_558;
        int *l_603 = &l_225;
        int l_604 = 0x08B2242CL;
        int l_605 = 0xACF8998EL;
        int *l_606 = &g_581;
        int *l_607 = &l_530;
        int *l_608 = &g_68;
        int *l_609 = &g_68;
        int *l_610 = &l_558;
        int *l_611 = (void*)0;
        int *l_612 = &l_558;
        int *l_613 = &l_530;
        int *l_614 = &l_604;
        int *l_615 = (void*)0;
        int *l_616 = &l_604;
        int *l_617 = &l_605;
        int *l_618 = (void*)0;
        int l_619 = 0x60BFFE82L;
        int *l_620 = &g_155;
        int *l_621 = &l_558;
        int *l_622 = &l_476;
        int *l_623 = &l_619;
        int *l_624 = &l_605;
        int *l_625 = &l_604;
        int *l_626 = &l_530;
        int *l_627 = &l_530;
        int *l_628 = &l_558;
        int l_629 = 0x1280E95AL;
        int *l_630 = (void*)0;
        int *l_631 = &g_581;
        int *l_632 = &l_619;
        int *l_633 = &g_155;
        int *l_634 = &l_225;
        int *l_636 = &l_629;
        int *l_637 = &l_539;
        int *l_638 = (void*)0;
        int *l_639 = &l_604;
        int *l_640 = &l_539;
        int l_641 = 1L;
        int *l_642 = &g_68;
        int l_643 = 0x94D3F08EL;
        int *l_644 = &l_604;
        int *l_645 = (void*)0;
        int *l_646 = &l_643;
        int *l_647 = (void*)0;
        int *l_648 = &l_619;
        int *l_649 = &g_155;
        int *l_650 = (void*)0;
        int *l_651 = (void*)0;
        int *l_652 = (void*)0;
        int *l_653 = &g_68;
        int *l_654 = &g_155;
        int *l_655 = &l_605;
        int *l_656 = &g_155;
        int *l_657 = &l_604;
        int *l_658 = &l_629;
        int *l_659 = &l_641;
        int *l_660 = &l_530;
        int *l_661 = (void*)0;
        int *l_663 = (void*)0;
        int *l_664 = (void*)0;
        int *l_665 = &l_225;
        int *l_666 = &l_619;
        int *l_667 = &l_476;
        int *l_668 = &l_604;
        int *l_669 = &l_619;
        int *l_670 = (void*)0;
        int *l_671 = (void*)0;
        int *l_672 = &l_643;
        int *l_673 = &l_539;
        int *l_674 = &l_539;
        int *l_675 = &g_68;
        int *l_676 = &l_619;
        int *l_677 = &g_68;
        int *l_678 = &g_68;
        int *l_679 = (void*)0;
        int *l_680 = (void*)0;
        int *l_681 = &l_562;
        int l_682 = 1L;
        int *l_683 = &g_581;
        int *l_684 = &l_604;
        int *l_685 = &l_643;
        int *l_686 = &l_539;
        int *l_687 = &l_476;
        int *l_688 = &l_604;
        int *l_689 = &l_539;
        int *l_690 = &l_641;
        int *l_691 = &g_581;
        int *l_692 = &l_476;
        int *l_693 = (void*)0;
        int *l_694 = &l_476;
        int *l_696 = &l_604;
        int *l_698 = &g_581;
        int *l_699 = &g_155;
        int *l_700 = &l_643;
        int *l_701 = &l_530;
        int *l_702 = &l_682;
        int *l_703 = &l_562;
        g_704++;
    }
    else
    {
        unsigned l_713 = 0xAA94DCD1L;
        unsigned char *l_718 = &g_182;
        short *l_719 = &g_285;
        unsigned char *l_729 = &g_29;
        int l_731 = (-1L);
        (*g_591) = (*g_591);
        l_720 &= func_59(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((0xE18CL >= ((safe_lshift_func_uint16_t_u_u((l_713 != l_713), 8)) == (-9L))) && p_49), (safe_sub_func_int8_t_s_s(l_713, 0xB5L)))), (safe_mod_func_int8_t_s_s((func_59(p_49, l_718, (**l_236), l_719) < 0L), g_159)))) != p_48), (**g_234), (**g_234), l_719);
        if (func_124(func_22((**g_591), (*g_235), p_49, func_22((**g_591), l_721, (g_392 <= (((safe_add_func_uint16_t_u_u(p_49, 1UL)) && ((((safe_mul_func_int16_t_s_s((l_713 && l_695), p_48)) == g_153) & p_48) ^ l_713)) != (*g_300))), (**l_238), g_116), l_530), &l_695, (*g_234), g_285, (**g_234)))
        {
            int *l_726 = (void*)0;
            int *l_730 = &g_155;
            (*g_591) = l_726;
            (*l_730) ^= (safe_rshift_func_int8_t_s_u((0x8615L ^ 0xAC74L), (l_713 && ((g_146 || func_59(p_48, l_718, l_729, l_719)) && p_49))));
        }
        else
        {
            l_731 &= (*g_592);
        }
    }
    return l_732;
}







static char func_50(short * p_51, unsigned char * p_52, char p_53, unsigned char * const * p_54)
{
    int l_151 = 5L;
    char *l_156 = (void*)0;
    int l_174 = 0x2BE7AC75L;
    int *l_175 = &g_155;
    if (((p_53 > l_151) < 1L))
    {
        int *l_152 = &g_68;
        int *l_154 = &g_155;
        char *l_158 = &g_159;
        char **l_157 = &l_158;
        (*l_154) |= func_124(&g_17, l_152, &g_28, g_153, p_52);
        (*l_154) = (0xCA18L || (l_156 != ((*l_157) = l_156)));
        (*l_154) = g_100;
    }
    else
    {
        char l_162 = (-1L);
        unsigned *l_167 = &g_116;
        int *l_173 = &g_68;
        int **l_172 = &l_173;
        l_174 = (((safe_mul_func_int16_t_s_s(l_162, (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_167) = p_53), ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((l_162 >= l_162), ((l_151 || ((((*l_172) = &g_68) != (void*)0) > ((*g_28) & 0x45L))) >= l_151))) ^ p_53), 3)) > g_111))), 0UL)))) == p_53) == (-3L));
    }
    g_155 ^= p_53;
    (*l_175) = g_29;
    return g_29;
}







static unsigned char func_59(unsigned p_60, unsigned char * p_61, unsigned char * p_62, short * p_63)
{
    unsigned short l_149 = 65529UL;
    int *l_150 = &g_68;
    l_149 ^= (-6L);
    l_150 = l_150;
    (*l_150) = p_60;
    return (*l_150);
}







static unsigned char * func_64(short * p_65, int * p_66)
{
    int *l_67 = &g_68;
    int l_69 = 0x28BC1302L;
    int *l_70 = &l_69;
    int *l_71 = (void*)0;
    int *l_72 = &g_68;
    int *l_73 = &l_69;
    int l_74 = 0L;
    int *l_75 = &g_68;
    int *l_76 = &g_68;
    int *l_77 = &l_69;
    int *l_78 = &l_74;
    int *l_79 = &l_74;
    int *l_80 = (void*)0;
    int l_81 = 0xFC6E20B3L;
    int *l_82 = &l_81;
    int *l_83 = &l_69;
    int *l_84 = &l_74;
    short l_85 = 0x5285L;
    int *l_86 = &l_81;
    int *l_87 = &l_81;
    int *l_88 = &l_81;
    int *l_89 = &g_68;
    int *l_90 = &g_68;
    int *l_91 = &l_69;
    int *l_92 = &l_81;
    int *l_93 = &l_74;
    int *l_94 = &l_74;
    int *l_95 = &l_81;
    int *l_96 = &l_69;
    int *l_97 = &l_74;
    int *l_98 = &l_69;
    int *l_99 = &l_81;
    int *l_101 = &g_68;
    int *l_102 = &g_68;
    int *l_103 = &l_81;
    char l_104 = 0x0FL;
    int *l_105 = &l_81;
    int *l_106 = &l_81;
    int *l_107 = &l_74;
    int *l_108 = &g_68;
    int *l_109 = &g_68;
    int *l_110 = &g_68;
    const unsigned char *l_130 = &g_29;
    unsigned char *l_137 = &g_17;
    char *l_145 = &l_104;
    g_111++;
    (*l_94) |= (*l_88);
    for (l_74 = 20; (l_74 >= 16); l_74--)
    {
        unsigned char *l_119 = (void*)0;
        ++g_116;
        return l_119;
    }
    (*l_102) = (g_146 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((*l_77) > g_100), (((*l_145) = func_124(l_130, &g_68, func_131(l_137, &g_68, (1L == ((safe_add_func_uint32_t_u_u(g_17, (((*l_95) < 1UL) == 1L))) < 1UL)), l_137, &l_69), (*l_78), &g_17)) == 255UL))) == (*l_106)), g_29)));
    return l_137;
}







static char func_124(const unsigned char * p_125, int * p_126, unsigned char ** p_127, unsigned p_128, unsigned char * p_129)
{
    unsigned l_144 = 0x1BCD962FL;
    for (g_56 = 0; (g_56 < (-9)); --g_56)
    {
        (*p_126) |= 0L;
        (*p_126) &= l_144;
    }
    return p_128;
}







static unsigned char ** func_131(unsigned char * p_132, int * p_133, unsigned p_134, unsigned char * p_135, int * p_136)
{
    int l_140 = 0xE2AFE588L;
    unsigned *l_141 = &g_116;
    (*p_133) = (*p_133);
    (*p_133) ^= (((l_140 || p_134) == ((*l_141) = l_140)) == 0xB93DL);
    return &g_28;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
