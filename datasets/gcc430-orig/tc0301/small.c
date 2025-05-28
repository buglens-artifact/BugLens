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



static const unsigned g_6 = 0x7F2FB5A5L;
static int g_23 = 0x51C6076FL;
static int *g_22 = &g_23;
static unsigned short g_81 = 3UL;
static int g_90 = 0x08F94BBBL;
static int * const volatile g_89 = &g_90;
static int * volatile g_97 = &g_90;
static int * volatile g_100 = (void*)0;
static int * volatile g_101 = &g_90;
static short g_109 = (-6L);
static unsigned char g_116 = 0xF0L;
static unsigned char g_121 = 0x9EL;
static int * volatile g_145 = &g_90;
static int g_146 = 0L;
static int ** volatile g_153 = (void*)0;
static int ** volatile g_157 = (void*)0;
static char g_163 = (-1L);
static unsigned char g_173 = 0xE9L;
static unsigned g_184 = 0x04249512L;
static short ** const volatile g_192 = (void*)0;
static short *g_195 = &g_109;
static short ** volatile g_194 = &g_195;
static int **g_201 = &g_22;
static int *** volatile g_200 = &g_201;
static unsigned g_230 = 0xDE09C777L;
static short g_268 = 1L;
static int *g_272 = &g_146;
static int ** volatile g_271 = &g_272;
static int ** volatile g_274 = &g_272;
static unsigned g_285 = 0UL;
static const unsigned short g_296 = 0x112BL;
static int ** const volatile g_299 = &g_272;
static int ** volatile g_300 = &g_272;
static unsigned short g_332 = 0x1F11L;
static int g_364 = 0L;
static int * volatile g_363 = &g_364;
static unsigned char *g_390 = &g_116;
static unsigned char **g_389 = &g_390;
static unsigned char *** volatile g_388 = &g_389;
static char g_394 = 0xEDL;
static int ** volatile g_415 = &g_272;
static char * const g_432 = &g_163;
static char * const *g_431 = &g_432;
static char * const ** volatile g_430 = &g_431;
static int ** volatile g_435 = (void*)0;
static unsigned short g_451 = 0xF276L;
static const int *g_484 = &g_23;
static int ** volatile g_513 = &g_22;
static int * volatile g_514 = &g_364;
static const int ** volatile g_515 = &g_484;
static unsigned short g_531 = 0UL;
static unsigned short * const g_530 = &g_531;
static unsigned short * const *g_529 = &g_530;
static char *g_542 = (void*)0;
static char **g_541 = &g_542;
static int * volatile g_560 = &g_364;
static int ** volatile g_567 = &g_22;
static char g_611 = 0x6CL;
static short g_656 = 0xFE42L;
static int * volatile g_683 = &g_90;
static int ** volatile g_684 = (void*)0;
static int ** volatile g_701 = &g_22;
static int g_703 = 3L;



static unsigned func_1(void);
static int * func_2(char p_3, int p_4, short p_5);
static unsigned char func_9(int * p_10, int * const p_11);
static int * func_12(int * p_13, unsigned p_14, int * p_15, unsigned char p_16);
static int * func_17(int * p_18, int * p_19, const char p_20, int * const p_21);
static int * func_24(const unsigned p_25, int p_26, unsigned short p_27);
static const unsigned func_28(char p_29, int * p_30, int * p_31, unsigned char p_32, unsigned char p_33);
static int * func_35(int * p_36, char p_37, int * p_38, int p_39);
static int * func_40(unsigned char p_41, int p_42, unsigned p_43, int * p_44, short p_45);
static int * func_53(short p_54);
static unsigned func_1(void)
{
    unsigned l_34 = 0xF3B8C105L;
    int *l_46 = &g_23;
    int *l_301 = (void*)0;
    short l_652 = (-1L);
    int *l_653 = &g_90;
    unsigned char l_702 = 255UL;
    unsigned l_720 = 0x1732A1ACL;
    (*g_299) = func_2((((!(g_6 && ((safe_sub_func_int32_t_s_s(((~1UL) >= func_9((l_653 = func_12(func_17(g_22, func_24(func_28(l_34, func_35(func_40(l_34, l_34, ((l_46 != l_46) == (safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(g_23, (*l_46))) >= g_6) ^ 0x67L) > (*l_46)), g_23))), &g_23, (*l_46)), g_116, l_46, l_34), l_301, g_296, g_6), g_121, g_296), g_451, l_46), g_6, g_22, l_652)), l_46)), g_531)) < l_652))) > l_702) & g_703), g_296, g_296);
    return l_720;
}







static int * func_2(char p_3, int p_4, short p_5)
{
    unsigned short l_710 = 65535UL;
    int *l_711 = &g_146;
    int **l_712 = &g_272;
    int *l_713 = &g_146;
    unsigned l_714 = 1UL;
    int *l_719 = &g_90;
    (*g_22) = (((*g_195) && (1L || ((((*l_713) = ((safe_div_func_int16_t_s_s(((*g_195) = (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_4, p_5)), (*l_713)))), (-1L))) != 0x1EL)) < g_451) != p_4))) <= p_3);
    (*l_713) = (*l_713);
    for (g_703 = 0; (g_703 == (-22)); g_703--)
    {
        unsigned short l_717 = 0UL;
        int **l_718 = &l_711;
        (*l_713) = l_717;
        (*l_718) = ((*l_712) = (void*)0);
        (*g_22) = p_3;
    }
    return l_719;
}







static unsigned char func_9(int * p_10, int * const p_11)
{
    char l_657 = 0x84L;
    int ** const **l_671 = (void*)0;
    short **l_679 = &g_195;
    unsigned *l_682 = &g_230;
    for (g_146 = (-23); (g_146 <= 13); g_146 = safe_add_func_int16_t_s_s(g_146, 4))
    {
        unsigned l_666 = 0UL;
        unsigned l_667 = 0x9D09711BL;
        int ***l_670 = (void*)0;
        int ****l_669 = &l_670;
        int *****l_668 = &l_669;
        short *l_672 = &g_268;
        unsigned *l_681 = &g_230;
        int *l_686 = &g_90;
        (*g_22) = (g_656 && (l_657 != (((safe_mod_func_int8_t_s_s(((**g_529) > (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((*p_10), (l_657 || (***g_388)))), 9))), (safe_sub_func_uint8_t_u_u(0xE6L, l_666)))) ^ (l_657 && l_657)) | l_667)));
        (*g_683) = ((*p_11) = (((*l_672) = ((*g_195) = (((*l_668) = (void*)0) != l_671))) != (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((*p_11) < ((l_666 && l_657) & ((safe_add_func_uint32_t_u_u((((void*)0 == l_679) > ((*l_681) = (safe_unary_minus_func_int32_t_s((l_681 == l_682))))), (*p_10))) > 0x3FAFL))), 0L)), (**g_389)))));
        if (((~0xF1E5A9D0L) != g_394))
        {
            int **l_685 = &g_272;
            (*l_685) = p_11;
            (*l_685) = (*l_685);
            l_686 = p_10;
        }
        else
        {
            int l_689 = 0x07066F5EL;
            p_10 = func_12(p_10, ((safe_div_func_uint32_t_u_u(l_657, ((*l_682) = 4294967295UL))) >= (((((((*g_432) = ((***g_388) | l_689)) >= (safe_add_func_uint32_t_u_u(((*g_22) < ((*g_390) || ((*p_11) > g_23))), (*p_10)))) <= l_657) <= l_689) | (*g_22)) & l_657)), &l_689, l_689);
        }
        for (g_285 = 0; (g_285 <= 53); g_285 = safe_add_func_uint8_t_u_u(g_285, 1))
        {
            unsigned char l_696 = 0x6FL;
            int *l_697 = &g_90;
            l_697 = func_53((0x31L != ((safe_lshift_func_int8_t_s_u((l_696 == (**g_513)), 5)) < ((+((void*)0 != p_10)) == 0UL))));
        }
    }
    for (l_657 = (-20); (l_657 > (-23)); l_657 = safe_sub_func_int16_t_s_s(l_657, 7))
    {
        int *l_700 = &g_23;
        (*g_701) = l_700;
    }
    return l_657;
}







static int * func_12(int * p_13, unsigned p_14, int * p_15, unsigned char p_16)
{
    return p_13;
}







static int * func_17(int * p_18, int * p_19, const char p_20, int * const p_21)
{
    unsigned l_496 = 1UL;
    int *l_518 = &g_23;
    unsigned short *l_533 = &g_332;
    unsigned short **l_532 = &l_533;
    unsigned l_603 = 4294967295UL;
    short l_612 = 0xD81AL;
    int ***l_630 = &g_201;
    for (g_116 = 6; (g_116 <= 33); ++g_116)
    {
        unsigned l_472 = 4294967292UL;
        short l_479 = 0xA677L;
        const int *l_482 = &g_90;
        int *l_488 = &g_90;
        unsigned short *l_511 = (void*)0;
        unsigned short **l_510 = &l_511;
        int **l_519 = &l_488;
        const short *l_619 = &g_109;
        const short **l_618 = &l_619;
    }
    (*l_518) = (*p_21);
    (*l_518) = ((safe_lshift_func_uint8_t_u_s((&l_612 == (void*)0), p_20)) && p_20);
    p_19 = l_518;
    return p_19;
}







static int * func_24(const unsigned p_25, int p_26, unsigned short p_27)
{
    unsigned l_406 = 0x7A7B21ABL;
    int *l_412 = &g_364;
    unsigned short **l_420 = (void*)0;
    int l_421 = 1L;
    char *l_429 = (void*)0;
    char * const *l_428 = &l_429;
    unsigned l_440 = 4294967289UL;
    unsigned char *l_453 = &g_116;
    int *l_466 = &l_421;
    int *l_467 = &g_90;
    if ((*g_89))
    {
        unsigned short *l_409 = (void*)0;
        unsigned short *l_410 = &g_81;
        unsigned char l_411 = 0x96L;
        int l_413 = 0x45AF6B68L;
        int **l_414 = (void*)0;
        (*g_415) = func_40(p_25, (l_406 & ((safe_lshift_func_uint16_t_u_s(((*l_410) = g_296), l_406)) ^ g_364)), l_411, l_412, (l_413 = (*g_195)));
        (*g_300) = (void*)0;
        if ((((safe_div_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((*l_412), l_421)) < (*l_412)), p_25)) > p_25) <= 0x6AL))
        {
            int *l_424 = &g_146;
            int **l_425 = &l_412;
            for (g_285 = 0; (g_285 > 10); g_285 = safe_add_func_uint16_t_u_u(g_285, 3))
            {
                (*g_22) = ((*l_412) = (-1L));
                (*l_412) = (+p_25);
            }
            (*l_425) = l_424;
            (*l_425) = (*g_300);
        }
        else
        {
            (*g_415) = &l_421;
            for (l_411 = 0; (l_411 != 20); ++l_411)
            {
                (*g_22) = 8L;
            }
        }
        (*g_430) = l_428;
    }
    else
    {
        int **l_443 = (void*)0;
        int **l_448 = &g_272;
        int l_452 = 0L;
        for (g_121 = 0; (g_121 < 30); g_121 = safe_add_func_uint16_t_u_u(g_121, 6))
        {
            int **l_436 = &l_412;
            int ***l_444 = (void*)0;
            int ***l_445 = (void*)0;
            int ***l_446 = &g_201;
            int ***l_447 = &l_443;
            unsigned *l_449 = &g_285;
            unsigned *l_450 = &g_184;
            (*l_436) = (*g_299);
            (*l_436) = &l_421;
            (*g_272) = ((safe_add_func_uint16_t_u_u(((**l_436) = g_6), (safe_unary_minus_func_int8_t_s((!func_28((l_440 == func_28(((safe_rshift_func_int8_t_s_u(1L, 3)) != ((*g_390) = (((*l_447) = l_443) != l_448))), (*l_448), (*l_448), (g_163 != ((*l_450) = ((*l_449) = p_27))), p_26)), l_412, (*l_448), g_451, l_452)))))) & (-4L));
        }
        (*l_412) = (l_453 == l_453);
        (*l_448) = &l_421;
    }
    l_412 = func_40(p_25, ((0x04L >= (((*l_453) = (safe_div_func_int16_t_s_s(((*g_195) = (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((+(l_421 = (*g_432))), (*g_390))), 0x0BL))), l_440))) != 0xE6L)) & 9L), p_25, (*g_299), p_27);
    for (g_116 = (-1); (g_116 >= 4); g_116 = safe_add_func_uint16_t_u_u(g_116, 9))
    {
        (*l_412) = (safe_add_func_int8_t_s_s((-3L), (*l_412)));
    }
    return l_467;
}







static const unsigned func_28(char p_29, int * p_30, int * p_31, unsigned char p_32, unsigned char p_33)
{
    int *l_303 = &g_90;
    int l_403 = 0x5BEF1D05L;
    int *l_404 = &g_90;
    unsigned short l_405 = 65535UL;
    if ((*g_101))
    {
        const unsigned l_302 = 5UL;
        return l_302;
    }
    else
    {
        int *l_304 = &g_146;
        int **l_305 = &l_303;
        unsigned l_308 = 0xFF0CECDEL;
        unsigned short l_327 = 0xD413L;
        l_304 = l_303;
        (*l_305) = (p_30 = (*g_300));
        for (g_81 = 0; (g_81 > 40); g_81 = safe_add_func_uint8_t_u_u(g_81, 8))
        {
            short l_328 = 5L;
            unsigned char l_329 = 0UL;
            p_31 = p_30;
            if (l_308)
            {
                unsigned char *l_309 = &g_116;
                unsigned char *l_310 = &g_173;
                int l_317 = 0x28A352BAL;
                unsigned short *l_330 = &l_327;
                unsigned short *l_331 = &g_332;
                char *l_333 = (void*)0;
                char *l_334 = &g_163;
                (*p_31) = (((((p_32 != ((*l_309) = (*l_303))) <= ((*l_310) = g_285)) >= g_268) == (safe_rshift_func_int8_t_s_u((((*l_334) = (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((0x85L >= (l_317 >= ((*l_331) = ((*l_330) = ((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((**g_300) < (safe_unary_minus_func_uint32_t_u(p_32))), (safe_add_func_uint32_t_u_u((*l_303), l_327)))) | (*p_31)) ^ (*l_304)), p_29)), l_328)) >= l_329))))) | p_33), 1)) || g_6), l_317))) || 0x8DL), l_329))) != 4294967291UL);
                for (g_173 = 0; (g_173 > 13); g_173 = safe_add_func_int16_t_s_s(g_173, 9))
                {
                    if ((**g_271))
                        break;
                    (*l_304) = (*g_145);
                    (*l_305) = &l_317;
                }
            }
            else
            {
                unsigned short *l_339 = &l_327;
                (*p_31) = (safe_sub_func_uint16_t_u_u((((*l_339) = ((&p_33 != (void*)0) & (~(**l_305)))) | (*l_304)), ((p_32 == (safe_sub_func_uint32_t_u_u(p_29, (p_29 != ((l_329 & g_173) & p_29))))) && g_163)));
                if ((*g_22))
                    break;
            }
            (*l_305) = p_30;
        }
        for (g_23 = 0; (g_23 < (-2)); --g_23)
        {
            short l_362 = 0xBD6DL;
            int l_371 = (-5L);
            int l_378 = 0xA7C964B7L;
        }
    }
    (*g_145) = ((*p_30) = (*l_303));
    (*g_22) = (((*g_390) || ((*g_390) = (~p_32))) != 7L);
    (*p_30) = (safe_sub_func_uint16_t_u_u(g_285, (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((**g_300) >= ((*l_404) = (l_403 = (*l_303)))), p_29)) ^ l_405), (0x5CL && (*l_303))))));
    return p_32;
}







static int * func_35(int * p_36, char p_37, int * p_38, int p_39)
{
    char l_176 = 0L;
    int l_188 = 0x3805CA1CL;
    int l_232 = 0x3AAE15D1L;
    int l_243 = 0L;
    unsigned char l_244 = 0xDFL;
    const unsigned short *l_295 = &g_296;
    if (((*p_36) = (*g_101)))
    {
        char *l_162 = &g_163;
        int l_170 = 0xB5993E3AL;
        unsigned short *l_171 = &g_81;
        unsigned char *l_172 = &g_116;
        int l_187 = 0xE3CA85F2L;
        (*p_38) = (*p_36);
        (*p_38) = (*p_36);
        if ((((*l_162) = (+(0xDCBDL <= (safe_lshift_func_uint8_t_u_u(p_39, 2))))) || ((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(p_37, ((safe_sub_func_int8_t_s_s(l_170, (g_146 != ((*l_172) = ((g_163 | ((*l_171) = g_146)) >= 4UL))))) ^ (g_173 = g_146)))) == g_121), g_146)) & g_6) <= p_39) > 0x1C0E1BB5L)))
        {
            const unsigned char *l_191 = &g_121;
            int *l_199 = &g_146;
            int *l_205 = &g_90;
            (*p_38) = (*p_36);
            for (g_163 = 0; (g_163 != 23); g_163 = safe_add_func_int16_t_s_s(g_163, 5))
            {
                short l_182 = 1L;
                if (l_176)
                {
                    int l_179 = 0xD619F20AL;
                    unsigned *l_183 = &g_184;
                    int *l_190 = (void*)0;
                    int **l_189 = &l_190;
                    (*l_189) = func_53((((((l_179 || 0xFA75L) | ((&g_100 != &p_36) != ((p_37 & (((*g_22) = (*p_38)) < ((*l_183) = l_182))) && ((((*l_172) = ((safe_sub_func_int32_t_s_s(l_187, ((((*l_171) = g_109) ^ 1L) == (-6L)))) | 0x7620052CL)) >= g_90) > g_146)))) && l_188) & 0x5BFDL) == (*p_36)));
                    if ((l_191 != &g_116))
                    {
                        (*l_189) = p_38;
                    }
                    else
                    {
                        short ** volatile *l_193 = &g_194;
                        (*l_193) = g_192;
                        (*g_22) = l_188;
                    }
                    for (g_81 = 24; (g_81 < 56); g_81 = safe_add_func_uint32_t_u_u(g_81, 9))
                    {
                        int *l_198 = (void*)0;
                        (*l_189) = p_38;
                        return l_198;
                    }
                }
                else
                {
                    (*g_22) = (-10L);
                }
                (*g_22) = (g_109 ^ 0x618FL);
                l_199 = p_36;
            }
            (*g_200) = &l_199;
            for (p_39 = 0; (p_39 >= (-9)); p_39 = safe_sub_func_uint16_t_u_u(p_39, 2))
            {
                int l_204 = (-8L);
                l_204 = 0xD0FC9738L;
                (*g_201) = (void*)0;
                (*g_97) = (p_39 > l_187);
                (*g_201) = l_205;
            }
        }
        else
        {
            unsigned char **l_206 = &l_172;
            unsigned char ***l_207 = &l_206;
            unsigned *l_218 = &g_184;
            unsigned *l_229 = &g_230;
            int l_231 = 0L;
            p_38 = p_36;
            (*l_207) = l_206;
            (*p_38) = ((safe_add_func_int16_t_s_s(l_176, (safe_div_func_uint8_t_u_u((l_232 = (safe_rshift_func_int8_t_s_u(((!(safe_mod_func_uint32_t_u_u((((*l_218) = g_23) < ((-1L) == ((***l_207) = (p_37 != p_37)))), ((*l_229) = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((0L || (safe_add_func_int32_t_s_s(l_170, (safe_sub_func_uint16_t_u_u(l_170, (g_100 == (void*)0)))))), 0x1D3EL)), g_146)))))) ^ 0xBBL), l_231))), 0x82L)))) && 0UL);
        }
        for (g_163 = 0; (g_163 < 19); g_163++)
        {
            int l_235 = 0xC9105A86L;
            unsigned short *l_236 = (void*)0;
            unsigned short *l_237 = (void*)0;
            (*g_22) = (*g_101);
            if ((*p_38))
                continue;
            (*g_22) = (l_235 ^ (l_187 = ((*l_171) = g_23)));
        }
    }
    else
    {
        unsigned char l_242 = 0x48L;
        char *l_245 = &l_176;
        int l_246 = 1L;
        int *l_288 = &g_90;
        (*p_38) = (safe_lshift_func_int8_t_s_u(p_37, 3));
        if ((!((l_246 = ((((-9L) | ((*l_245) = ((safe_sub_func_uint8_t_u_u(p_39, (((p_39 || (l_242 && l_232)) < l_242) == ((((*g_195) = ((((*g_145) != (l_243 = l_232)) > p_39) != 1UL)) & l_244) != (-1L))))) < p_39))) >= g_23) == 0x69DCL)) < (*g_22))))
        {
            (*g_22) = (-7L);
            (*g_89) = (*p_36);
        }
        else
        {
            int l_249 = (-1L);
            int l_269 = 0x27E704F4L;
            const unsigned short *l_294 = (void*)0;
            (*p_38) = (safe_mod_func_uint32_t_u_u(l_249, g_146));
            for (g_230 = 0; (g_230 == 31); ++g_230)
            {
                unsigned char l_266 = 0x8BL;
                for (l_188 = 29; (l_188 < 12); l_188 = safe_sub_func_uint16_t_u_u(l_188, 7))
                {
                    return (*g_201);
                }
            }
            if ((p_39 < p_37))
            {
                for (g_116 = 0; (g_116 >= 6); g_116++)
                {
                    for (p_39 = 0; (p_39 <= (-9)); p_39 = safe_sub_func_uint16_t_u_u(p_39, 1))
                    {
                        int l_280 = (-1L);
                        (*p_38) = l_280;
                    }
                }
                return p_38;
            }
            else
            {
                unsigned char l_283 = 0x7CL;
                unsigned char *l_284 = &g_173;
                l_288 = func_40((safe_rshift_func_uint8_t_u_u(l_283, (l_283 ^ ((*l_284) = l_283)))), ((*g_22) = l_176), (g_285 = l_249), (*g_274), (safe_div_func_int32_t_s_s(0x73A89DF1L, (*p_36))));
                for (l_244 = 0; (l_244 <= 53); l_244 = safe_add_func_int8_t_s_s(l_244, 5))
                {
                    short l_291 = (-4L);
                    unsigned short *l_292 = (void*)0;
                    unsigned short *l_293 = &g_81;
                    (*g_272) = ((g_285 = p_37) < ((**g_194) && ((*l_293) = l_291)));
                    (*g_272) = (&g_81 != (l_295 = l_294));
                    for (g_268 = (-14); (g_268 == 21); ++g_268)
                    {
                        (*g_272) = (-8L);
                        (*g_299) = p_36;
                        (*g_271) = (*g_201);
                    }
                }
            }
        }
        (*g_274) = p_38;
    }
    (*g_300) = (*g_299);
    return p_38;
}







static int * func_40(unsigned char p_41, int p_42, unsigned p_43, int * p_44, short p_45)
{
    int *l_52 = (void*)0;
    int **l_51 = &l_52;
    int *l_159 = (void*)0;
    int **l_158 = &l_159;
    (*l_51) = &p_42;
    (*l_158) = ((*l_51) = func_53((**l_51)));
    return &g_146;
}







static int * func_53(short p_54)
{
    int *l_55 = &g_23;
    int *l_135 = &g_90;
    int **l_154 = &l_135;
    l_55 = &g_23;
    for (p_54 = 3; (p_54 > (-23)); p_54--)
    {
        int l_63 = (-9L);
        int l_64 = 0x53505CE4L;
        int l_84 = (-9L);
        unsigned short *l_88 = &g_81;
        unsigned l_119 = 0xD519FD4AL;
        unsigned char *l_149 = &g_116;
        for (g_23 = 0; (g_23 == (-18)); g_23 = safe_sub_func_uint32_t_u_u(g_23, 9))
        {
            unsigned short *l_62 = (void*)0;
            int *l_65 = &l_64;
            if (((*l_65) = (safe_rshift_func_int8_t_s_s((p_54 || ((l_63 = (&g_23 == (void*)0)) ^ p_54)), l_64))))
            {
                int *l_66 = (void*)0;
                unsigned l_79 = 1UL;
                unsigned short *l_80 = &g_81;
                (*l_65) = (l_55 == l_66);
                l_84 = (safe_add_func_uint16_t_u_u((((*l_55) != p_54) <= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0x281BL, 13)), 3)), ((&l_55 == (void*)0) < (safe_sub_func_uint16_t_u_u(((*l_65) = ((*l_80) = l_79)), ((0x1521F00BL || (*l_55)) ^ (safe_rshift_func_uint8_t_u_s(p_54, 5)))))))), g_23))), g_23));
                if ((*g_22))
                    continue;
                for (l_79 = 0; (l_79 != 42); ++l_79)
                {
                    int *l_87 = &l_64;
                    return &g_23;
                }
            }
            else
            {
                int *l_93 = &g_23;
                (*g_89) = ((*l_65) = ((l_88 = &g_81) == &g_81));
                for (l_64 = 0; (l_64 <= (-23)); l_64 = safe_sub_func_int8_t_s_s(l_64, 1))
                {
                    int **l_94 = &l_65;
                    (*l_94) = l_93;
                }
            }
            (*g_97) = ((safe_sub_func_int32_t_s_s(l_84, p_54)) ^ (*l_65));
        }
        for (g_23 = (-20); (g_23 != (-8)); g_23 = safe_add_func_int32_t_s_s(g_23, 6))
        {
            short *l_108 = &g_109;
            int **l_114 = &l_55;
            unsigned char *l_115 = &g_116;
            unsigned char *l_120 = &g_121;
            int l_132 = 0xFBE56F42L;
            (*g_101) = (*g_22);
        }
    }
    (*l_154) = l_135;
    (*g_22) = (0xA2F2E681L >= (safe_mod_func_uint8_t_u_u((*l_135), (**l_154))));
    return &g_90;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
