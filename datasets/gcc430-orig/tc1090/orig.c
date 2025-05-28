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



static char g_8 = 0xAFL;
static unsigned char g_63 = 0x8AL;
static int g_67 = 0x349B8AE0L;
static int g_86 = 0xFAF1BECDL;
static unsigned char g_104 = 0x51L;
static unsigned char **g_129 = (void*)0;
static int g_168 = 0x7B2EA262L;
static short g_203 = 0x7EF5L;
static short *g_202 = &g_203;
static int *g_208 = &g_67;
static int **g_207 = &g_208;
static int g_229 = 9L;
static char g_244 = 0x41L;
static unsigned short g_286 = 0x1854L;
static unsigned char g_351 = 255UL;
static unsigned char *g_381 = &g_104;
static unsigned short g_383 = 0x6205L;
static char g_397 = 0x68L;
static unsigned short *g_429 = &g_383;
static unsigned short **g_428 = &g_429;
static unsigned short ***g_427 = &g_428;
static short g_448 = 0x781FL;
static unsigned g_463 = 0x7F560DB0L;
static volatile char **g_469 = (void*)0;
static volatile int g_533 = (-1L);
static volatile int *g_532 = &g_533;
static int g_549 = 0x941DC917L;
static unsigned char g_574 = 5UL;
static unsigned g_586 = 4294967295UL;
static unsigned g_589 = 0x5092B723L;
static int g_591 = 0L;
static unsigned char *g_609 = (void*)0;
static char g_616 = 0x82L;
static int g_620 = 0x1D502BB4L;
static unsigned short g_671 = 0x1060L;
static char *g_693 = (void*)0;
static unsigned **g_722 = (void*)0;
static unsigned ***g_721 = &g_722;
static unsigned g_803 = 0x2B364926L;
static short g_805 = 0L;
static short g_857 = 9L;
static unsigned g_923 = 0x7FFEC3E8L;
static int ****g_967 = (void*)0;
static int *****g_966 = &g_967;
static unsigned char g_978 = 0UL;
static int *g_1027 = &g_168;



static unsigned char func_1(void);
static int func_9(int p_10, unsigned p_11, int p_12);
static unsigned func_15(int p_16, unsigned p_17);
static int func_18(int p_19, int p_20, int p_21, unsigned p_22);
static int func_23(unsigned p_24, unsigned short p_25);
static short func_38(char p_39, unsigned p_40, unsigned short p_41, unsigned p_42);
static unsigned short func_43(int p_44, unsigned char p_45, unsigned p_46, unsigned short p_47, unsigned p_48);
static short func_54(char p_55, char p_56, char p_57, char p_58);
static unsigned func_60(unsigned char p_61);
static int func_70(unsigned char * p_71);
static unsigned char func_1(void)
{
    unsigned l_2 = 0x70AD6F2EL;
    int l_3 = 0x20F89B54L;
    int l_575 = 0x3C312396L;
    unsigned l_576 = 0UL;
    int *l_854 = &g_86;
    unsigned l_1029 = 0x48D5FF73L;
    unsigned char *l_1056 = (void*)0;
    char l_1057 = 0x16L;
    int ***l_1080 = &g_207;
    l_3 |= l_2;
    if ((safe_lshift_func_uint8_t_u_u((l_3 = (safe_lshift_func_uint8_t_u_u((g_8 >= func_9((~((*l_854) = ((safe_sub_func_uint32_t_u_u(func_15(func_18(g_8, func_23(l_3, ((g_620 &= (safe_add_func_int8_t_s_s((((-1L) == 0x6D21L) | (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((g_589 &= (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_2 || (((safe_sub_func_int16_t_s_s((-1L), func_38(((l_575 = ((func_43((safe_lshift_func_int16_t_s_u(6L, 14)), g_8, g_8, g_8, l_2) & 0x400EL) || (*g_202))) & 0x3533L), l_576, g_574, l_576))) | l_3) & 0x166D391CL)), g_586)), 1UL))) | (-5L)) < l_3), l_576)), l_3))), l_2))) <= l_3)), g_586, g_586), l_576), (-1L))) | l_576))), l_3, l_2)), l_2))), l_1029)))
    {
        int *l_1032 = &g_549;
        unsigned l_1038 = 0x63D8AC21L;
        l_575 = l_2;
        for (g_168 = 12; (g_168 >= (-19)); --g_168)
        {
            int **l_1033 = &g_208;
            (*l_1033) = l_1032;
            for (g_671 = 0; (g_671 > 31); g_671++)
            {
                short *l_1043 = &g_203;
                int l_1044 = (-1L);
                l_3 = (safe_rshift_func_uint16_t_u_s((l_1044 & (*g_381)), l_1044));
                (*g_532) = l_1044;
                for (g_86 = 2; (g_86 != 22); g_86 = safe_add_func_uint16_t_u_u(g_86, 8))
                {
                    if ((**l_1033))
                        break;
                }
                for (g_923 = (-23); (g_923 <= 27); g_923++)
                {
                    unsigned l_1049 = 0x67C254A7L;
                    l_1044 &= l_1049;
                    return l_1044;
                }
            }
            (*l_1033) = &l_3;
            (**l_1033) = (*l_1032);
        }
        return (*l_1032);
    }
    else
    {
        int *l_1052 = &l_575;
        unsigned l_1076 = 0xDDC3CE75L;
        int **l_1077 = &g_1027;
        short *l_1081 = &g_448;
        for (g_229 = (-29); (g_229 <= (-18)); g_229 = safe_add_func_int8_t_s_s(g_229, 5))
        {
            int **l_1053 = &g_1027;
            (*l_1053) = l_1052;
            (**l_1053) = ((safe_sub_func_uint8_t_u_u((0xAADC19BCL && 5L), l_3)) == l_1057);
            if ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((**l_1053), ((safe_rshift_func_uint8_t_u_u(((((*l_1052) <= (**l_1053)) != (safe_lshift_func_int8_t_s_u((g_616 ^= (**l_1053)), ((*g_381) ^= (**l_1053))))) >= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((*l_1052), (0x4AC0FAC1L != (**l_1053)))), 5)) || (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((l_1076 || (**l_1053)) & l_576), (*l_1052))), 0xF488L))), 4))), 5)) ^ 0x5BL))), l_2)))
            {
                return (*g_381);
            }
            else
            {
                if ((**l_1053))
                    break;
            }
            (*g_1027) = (l_3 |= (**l_1053));
        }
        (*l_1077) = l_1052;
        (*g_532) &= (safe_add_func_int16_t_s_s((((void*)0 == l_1080) == ((*l_1081) |= l_575)), (*l_1052)));
    }
    return (*g_381);
}







static int func_9(int p_10, unsigned p_11, int p_12)
{
    unsigned l_862 = 0x75AC1E55L;
    unsigned char l_872 = 0x7AL;
    unsigned l_879 = 8UL;
    int *l_880 = (void*)0;
    unsigned *l_881 = &g_803;
    unsigned char ****l_882 = (void*)0;
    unsigned char l_913 = 0x6DL;
    char l_938 = 0xCDL;
    int *****l_964 = (void*)0;
    int **l_985 = &g_208;
    unsigned short l_1003 = 8UL;
    int l_1019 = (-5L);
    for (g_397 = 0; (g_397 < 10); g_397 = safe_add_func_int32_t_s_s(g_397, 1))
    {
        unsigned short *l_858 = &g_286;
        int l_861 = 0xD71C867DL;
        unsigned char l_871 = 251UL;
        p_12 &= g_857;
        (*g_532) = (((void*)0 == l_858) == (g_805 = (((safe_add_func_int16_t_s_s(l_861, l_872)) && 0UL) == g_549)));
        return l_872;
    }
    if ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(func_15(((safe_sub_func_int8_t_s_s((l_879 || (*g_429)), 255UL)) == ((*g_532) >= 4294967295UL)), g_805), (((*l_881) = ((l_880 != g_532) < g_244)) || p_12))), p_12)))
    {
        short l_885 = 0xFCADL;
        (*g_532) &= (((l_882 != (void*)0) == (safe_add_func_uint16_t_u_u((*g_429), p_10))) < l_885);
    }
    else
    {
        int l_910 = 1L;
        unsigned char l_937 = 255UL;
        int ***l_952 = (void*)0;
        int ****l_951 = &l_952;
        int **l_986 = (void*)0;
        if ((safe_rshift_func_uint8_t_u_u((*g_381), 3)))
        {
            unsigned l_898 = 0x8C6D6C4DL;
            unsigned char l_912 = 0UL;
            int l_930 = 0x8493D67AL;
            int *****l_953 = &l_951;
            int *l_954 = &l_910;
            unsigned short l_955 = 1UL;
            unsigned short *l_956 = &l_955;
            unsigned l_957 = 0UL;
            for (g_586 = 0; (g_586 >= 51); g_586 = safe_add_func_int32_t_s_s(g_586, 6))
            {
                int l_911 = 0xBBE76C4AL;
                (*g_207) = (void*)0;
                if (((safe_sub_func_uint16_t_u_u(p_10, 3L)) || p_10))
                {
                    int l_918 = 0x6A0F4DF7L;
                    (*g_532) &= p_11;
                    (*g_532) |= (safe_add_func_uint16_t_u_u((~(l_911 > p_12)), (safe_rshift_func_int8_t_s_s(l_918, 7))));
                }
                else
                {
                    int ***l_919 = &g_207;
                    (*l_919) = &l_880;
                    (**l_919) = (*g_207);
                    return l_898;
                }
                for (l_913 = 0; (l_913 > 42); l_913 = safe_add_func_uint32_t_u_u(l_913, 6))
                {
                    if (p_10)
                    {
                        return l_898;
                    }
                    else
                    {
                        (*g_207) = &p_12;
                        if (p_11)
                            continue;
                        (*g_532) &= (p_10 != (safe_unary_minus_func_int8_t_s(p_10)));
                    }
                    (*g_532) |= (*g_208);
                    if ((*g_208))
                        continue;
                    for (g_244 = 0; (g_244 >= (-27)); --g_244)
                    {
                        (*g_532) = (*g_532);
                    }
                }
                l_930 = (g_168 &= (safe_rshift_func_int16_t_s_s(((*g_532) > l_910), 4)));
            }
            (*g_532) = ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0x3DL, ((*g_381) = p_12))), 0xA63DL)) > ((l_910 = (safe_lshift_func_uint16_t_u_s((((void*)0 != l_881) <= l_898), l_937))) && (p_12 < ((*g_429) = ((g_589 = l_938) >= p_11)))));
            (*g_532) &= 2L;
            (*l_954) = func_18((safe_lshift_func_int16_t_s_u((0xFAL & 0xA6L), 8)), (safe_mod_func_uint16_t_u_u((0x5C089BB2L != (safe_add_func_int8_t_s_s(0xF7L, (((*g_429) & (safe_add_func_uint16_t_u_u((*g_429), (((safe_mod_func_uint16_t_u_u(0xFCDEL, ((*l_956) = (safe_mod_func_int32_t_s_s(((*l_954) = (((*l_953) = l_951) != (void*)0)), l_955))))) || (*g_532)) ^ l_957)))) == 0x1DAC4378L)))), p_12)), g_671, p_11);
        }
        else
        {
            char l_960 = 7L;
            int l_968 = 0xB7A4C958L;
            int l_987 = 0xFC07FF9CL;
            int ***l_990 = &l_986;
            if ((*g_532))
            {
                int l_975 = (-4L);
                unsigned char l_984 = 0xBEL;
                int **l_989 = &g_208;
                int ***l_988 = &l_989;
                short *l_991 = &g_448;
                for (g_63 = (-14); (g_63 == 33); g_63++)
                {
                    unsigned short l_963 = 65533UL;
                    int ******l_965 = &l_964;
                    (*g_207) = (*g_207);
                    if ((l_968 ^= p_12))
                    {
                        return (*g_532);
                    }
                    else
                    {
                        unsigned char ***l_973 = &g_129;
                        unsigned l_974 = 0x66AA33F0L;
                        int *l_979 = &l_910;
                        (*g_532) = (p_10 || l_960);
                        l_975 &= (((p_12 = (safe_rshift_func_uint8_t_u_u(p_10, 2))) != (safe_lshift_func_uint8_t_u_s(((void*)0 == l_973), 6))) ^ l_974);
                        g_978 |= (safe_sub_func_int32_t_s_s((-2L), p_10));
                        (*l_979) ^= (*g_532);
                    }
                    (*g_532) = p_10;
                }
                (*g_207) = &l_968;
                (**l_989) = (**l_985);
                (**l_989) &= p_12;
            }
            else
            {
                char **l_993 = &g_693;
                char ***l_992 = &l_993;
                int *l_994 = &l_968;
                int *l_1028 = &g_67;
                if (((*l_994) = (g_397 >= (((*l_992) = &g_693) == &g_693))))
                {
                    for (g_351 = 0; (g_351 != 15); g_351 = safe_add_func_int32_t_s_s(g_351, 1))
                    {
                        (*l_994) = p_12;
                        if ((*g_532))
                            break;
                        (*l_994) |= (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_10, 1L)), 5));
                        (*g_532) = (p_10 > l_960);
                    }
                    (*g_532) = (safe_add_func_uint16_t_u_u(l_1003, (*l_994)));
                    for (g_805 = 28; (g_805 <= (-15)); --g_805)
                    {
                        p_12 ^= (0UL & 251UL);
                        p_12 = 0x54052681L;
                        (*g_207) = &p_12;
                    }
                    for (g_383 = 1; (g_383 > 56); g_383 = safe_add_func_int16_t_s_s(g_383, 2))
                    {
                        (*l_994) = (safe_lshift_func_int8_t_s_u(p_11, 0));
                        (*g_532) &= 0xE3A9BAECL;
                        (*g_207) = (*l_985);
                    }
                }
                else
                {
                    unsigned **l_1010 = &l_881;
                    unsigned ***l_1011 = &l_1010;
                    int l_1016 = 0x8E008AABL;
                    if (((((*g_721) = (*g_721)) == ((*l_1011) = l_1010)) && (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(func_15(func_18(l_1016, p_12, g_448, p_12), (+p_12)), 0x8F19D8CCL)), 9))))
                    {
                        char *l_1024 = &l_938;
                        int l_1025 = 0L;
                        short *l_1026 = &g_203;
                        (*g_532) = (((*l_1026) |= l_1016) && p_12);
                        (*g_207) = l_994;
                        g_1027 = ((*l_985) = (void*)0);
                    }
                    else
                    {
                        (*l_985) = &l_1016;
                        l_994 = &p_12;
                    }
                }
                (*l_985) = l_1028;
            }
            (**l_985) &= p_10;
            return p_11;
        }
    }
    (*l_985) = &p_12;
    return p_10;
}







static unsigned func_15(int p_16, unsigned p_17)
{
    int l_800 = 1L;
    unsigned short l_806 = 65535UL;
    unsigned char l_815 = 0xFEL;
    unsigned char **l_822 = &g_609;
    int l_823 = 0xE8488AAEL;
    char **l_845 = &g_693;
    for (g_549 = (-9); (g_549 <= (-23)); g_549--)
    {
        unsigned short **l_794 = &g_429;
        int l_795 = (-10L);
        unsigned *l_796 = (void*)0;
        unsigned *l_797 = &g_586;
        unsigned *l_801 = (void*)0;
        unsigned *l_802 = &g_803;
        short *l_804 = &g_805;
        int l_826 = (-4L);
        char **l_846 = (void*)0;
        if ((safe_mod_func_uint8_t_u_u(((*g_381) = (l_800 <= l_795)), p_16)))
        {
            int l_811 = 0x5A55DEDCL;
            char *l_814 = &g_616;
            unsigned char *l_820 = &g_574;
            int *l_821 = &g_168;
            (*l_821) |= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_811 >= l_811), 4)) || p_17), (safe_div_func_int8_t_s_s(l_815, (g_351 &= (((*l_820) |= (((*l_804) = ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_23(p_17, l_811), 14)), l_800)) && l_800)) && 7L)) == 1L))))));
            if ((p_16 & ((l_795 = ((void*)0 == l_822)) & (((*l_821) >= p_16) <= (p_16 > ((((l_823 = (*l_821)) >= ((((safe_mod_func_int8_t_s_s(((p_17 ^ p_17) >= (*g_532)), 0xDCL)) <= 0x3028L) | l_826) | 0x3C25L)) ^ l_826) <= p_16))))))
            {
                (*g_207) = &p_16;
            }
            else
            {
                (*l_821) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((p_17 <= (l_826 < (safe_div_func_int32_t_s_s((*l_821), (*l_821))))) >= 5UL) != (*l_821)), 8)), 3));
            }
            for (g_586 = 0; (g_586 < 20); g_586 = safe_add_func_uint8_t_u_u(g_586, 5))
            {
                unsigned l_837 = 1UL;
                (*g_532) = p_17;
            }
            l_821 = l_821;
        }
        else
        {
            int l_844 = 0xA10BF69FL;
            (*g_207) = &g_168;
            for (p_16 = 0; (p_16 < 23); p_16++)
            {
                (*g_532) = (safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((p_16 >= (l_844 <= 0xCFA9C132L)), ((*l_797) = (6UL & p_17)))), (-1L)));
                (*g_207) = (*g_207);
                return p_16;
            }
            if (p_16)
                continue;
        }
        if (p_17)
            continue;
        if (((l_845 != l_846) ^ (safe_rshift_func_uint16_t_u_u(1UL, l_806))))
        {
            l_826 |= l_806;
        }
        else
        {
            unsigned l_853 = 0x368EC120L;
            l_853 = ((safe_lshift_func_uint16_t_u_u((p_16 <= ((*g_429) = ((((l_815 <= (p_16 || p_17)) || (l_826 ^ 65534UL)) >= l_795) < p_16))), 6)) == (-1L));
        }
        if (p_17)
            break;
    }
    (*g_207) = (void*)0;
    (*g_532) = (p_16 = 7L);
    return l_815;
}







static int func_18(int p_19, int p_20, int p_21, unsigned p_22)
{
    int *l_711 = (void*)0;
    unsigned *l_720 = &g_589;
    unsigned **l_719 = &l_720;
    unsigned ***l_718 = &l_719;
    short l_754 = 0x587DL;
    unsigned short **l_755 = &g_429;
    int l_756 = 1L;
    unsigned l_758 = 1UL;
    unsigned char ***l_788 = &g_129;
    l_711 = (void*)0;
    if ((*g_532))
    {
        int *l_712 = &g_67;
        int l_715 = 0x411EFA3EL;
        unsigned ****l_723 = &g_721;
        unsigned ****l_724 = (void*)0;
        unsigned ***l_726 = &l_719;
        unsigned ****l_725 = &l_726;
        unsigned ***l_739 = (void*)0;
        char *l_742 = (void*)0;
        (*g_532) = ((*l_712) = 0x014387A0L);
        if ((safe_sub_func_int16_t_s_s(((l_715 || ((safe_div_func_uint16_t_u_u(((l_718 != ((*l_725) = ((*l_723) = g_721))) == (*g_429)), p_22)) > (p_20 >= ((safe_div_func_uint8_t_u_u((((*l_712) ^= (*g_429)) == (p_22 && 0xACDAF8CFL)), 0x50L)) <= p_20)))) & p_20), p_22)))
        {
            unsigned l_749 = 0x1EFDEB9EL;
            p_20 ^= (safe_div_func_uint16_t_u_u((((*g_429) |= (((void*)0 != l_742) != (*l_712))) || (safe_div_func_int16_t_s_s((*l_712), 0xD878L))), l_749));
        }
        else
        {
            int l_752 = 0L;
            p_20 ^= ((l_715 = ((*l_712) = (*g_532))) ^ ((safe_unary_minus_func_uint16_t_u(p_19)) > p_22));
            l_754 ^= (*g_532);
        }
        (*g_532) = ((*l_712) > (((*g_427) = (*g_427)) == l_755));
        p_20 = ((l_756 |= (*g_429)) && 0xBEE7L);
    }
    else
    {
        short l_757 = 0xABE2L;
        short **l_783 = &g_202;
        if ((l_758 |= l_757))
        {
            (*g_532) &= p_21;
            (*g_207) = &p_20;
            (**g_207) ^= l_757;
        }
        else
        {
            return p_20;
        }
        for (l_756 = 0; (l_756 > 0); l_756 = safe_add_func_int16_t_s_s(l_756, 8))
        {
            unsigned char *l_764 = &g_574;
            int l_776 = (-1L);
            int l_777 = 0xD535E3D7L;
            for (g_383 = 0; (g_383 >= 17); g_383++)
            {
                char l_763 = (-4L);
                unsigned short *l_774 = (void*)0;
                unsigned short *l_775 = &g_286;
                l_777 = (((l_763 = 1UL) != g_351) | (l_776 = (func_70(l_764) ^ (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(4294967286UL, ((safe_unary_minus_func_uint32_t_u(4294967295UL)) ^ (safe_add_func_uint16_t_u_u((((void*)0 == &l_718) && ((*l_775) = ((p_19 > p_22) > (-2L)))), 65526UL))))), l_776)))));
            }
            (*g_532) &= ((*g_208) ^= p_19);
        }
        for (g_397 = 0; (g_397 < (-25)); g_397 = safe_sub_func_uint16_t_u_u(g_397, 7))
        {
            short *l_782 = &l_757;
            (**g_207) = p_22;
            (*g_532) = (((*l_782) ^= (0x676959FBL == ((safe_div_func_int16_t_s_s(g_67, 0x0A2BL)) && (p_22 <= (*g_381))))) > 0x4D60L);
            (*g_532) = ((void*)0 != l_783);
            (*g_207) = (*g_207);
        }
        (*g_207) = (*g_207);
    }
    for (g_397 = 6; (g_397 <= (-15)); g_397 = safe_sub_func_uint16_t_u_u(g_397, 4))
    {
        unsigned char ***l_787 = &g_129;
        unsigned char ****l_786 = &l_787;
        unsigned char ****l_789 = &l_788;
        (*g_532) = (l_756 < (((*l_786) = (void*)0) == ((*l_789) = l_788)));
    }
    return l_754;
}







static int func_23(unsigned p_24, unsigned short p_25)
{
    unsigned *l_622 = &g_589;
    unsigned **l_621 = &l_622;
    unsigned ***l_623 = &l_621;
    unsigned **l_625 = &l_622;
    unsigned ***l_624 = &l_625;
    short *l_628 = (void*)0;
    short **l_629 = &g_202;
    short *l_630 = &g_203;
    unsigned char *l_631 = &g_104;
    int l_636 = 5L;
    char *l_692 = (void*)0;
    unsigned l_702 = 0x06B51639L;
    int *l_710 = &l_636;
    (*l_624) = ((*l_623) = l_621);
    if ((safe_div_func_uint32_t_u_u(((((*l_629) = l_628) == l_630) ^ p_24), p_25)))
    {
        int *l_637 = (void*)0;
        int l_660 = 0L;
        unsigned char **l_685 = &g_609;
        unsigned char ***l_686 = &g_129;
        unsigned char ***l_687 = (void*)0;
        unsigned char **l_689 = &g_381;
        unsigned char ***l_688 = &l_689;
        char *l_690 = &g_616;
        char **l_691 = &l_690;
        int *l_694 = &g_67;
        for (g_286 = 0; (g_286 == 53); ++g_286)
        {
            unsigned char l_645 = 246UL;
            for (g_63 = 0; (g_63 <= 25); ++g_63)
            {
                unsigned char ****l_640 = (void*)0;
                unsigned char ***l_642 = &g_129;
                unsigned char ****l_641 = &l_642;
                unsigned short ****l_646 = &g_427;
                int l_650 = (-1L);
                int l_661 = 0L;
                unsigned short *l_670 = &g_671;
                char *l_679 = &g_397;
                char **l_678 = &l_679;
                char ***l_680 = &l_678;
                if (l_636)
                    break;
                (*g_207) = l_637;
                if ((safe_rshift_func_int8_t_s_u((((*l_641) = &g_129) != (void*)0), (safe_add_func_int16_t_s_s(l_645, ((*g_429) = 0xBCA8L))))))
                {
                    unsigned l_647 = 0UL;
                    int ***l_657 = (void*)0;
                    int ****l_656 = &l_657;
                    int ***l_659 = &g_207;
                    int ****l_658 = &l_659;
                    if ((l_646 != (void*)0))
                    {
                        (*g_207) = (void*)0;
                    }
                    else
                    {
                        (*g_207) = (*g_207);
                        return (*g_532);
                    }
                    if (l_645)
                        continue;
                    l_661 |= (l_647 > (l_660 = (safe_lshift_func_int8_t_s_u(p_25, (p_25 & (((l_636 == p_25) != l_650) >= l_660))))));
                }
                else
                {
                    return p_24;
                }
                (*g_532) |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(7L, 5)), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((((*l_670) &= (*g_429)) && (((l_636 & l_645) & ((***l_623) = ((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((*g_429), p_24)) ^ ((((*l_630) |= (safe_div_func_uint32_t_u_u((g_469 != ((*l_680) = l_678)), p_25))) || p_24) != p_25)), p_24)) <= l_636))) < 4UL)) ^ (*g_381)), p_25)), l_650))));
            }
        }
        (*g_532) = ((*l_694) = (+(safe_lshift_func_int8_t_s_u((l_636 < g_8), p_25))));
        (*g_207) = &l_636;
    }
    else
    {
        unsigned char l_701 = 0x9CL;
        char *l_703 = &g_616;
        (*g_532) = ((safe_div_func_uint32_t_u_u(0xF0677D09L, (safe_sub_func_uint32_t_u_u(g_67, (safe_sub_func_int8_t_s_s(l_701, l_701)))))) == l_701);
        for (g_448 = 0; (g_448 <= (-12)); --g_448)
        {
            int *l_709 = &g_549;
            int **l_708 = &l_709;
            (*l_708) = ((*g_207) = (void*)0);
            (*g_532) = 0x9EE8C583L;
        }
        (*g_532) = 0x01DCEB39L;
    }
    (*l_710) ^= (*g_532);
    return (*g_532);
}







static short func_38(char p_39, unsigned p_40, unsigned short p_41, unsigned p_42)
{
    volatile int *l_577 = &g_533;
    int l_580 = 0x5F5379B7L;
    unsigned *l_585 = &g_586;
    unsigned *l_587 = (void*)0;
    unsigned *l_588 = &g_589;
    int l_590 = 1L;
    volatile int **l_619 = &g_532;
    l_577 = &g_533;
    if ((safe_add_func_uint32_t_u_u((p_41 || g_591), 0UL)))
    {
        (*g_207) = &l_580;
    }
    else
    {
        char *l_596 = &g_8;
        char **l_595 = &l_596;
        char ***l_594 = &l_595;
        int *l_597 = &l_580;
        (*l_597) |= (safe_lshift_func_uint8_t_u_s(0x08L, ((*g_381) | ((&g_469 != l_594) == (+((*g_202) = (p_42 < (*l_577))))))));
        for (g_463 = 0; (g_463 >= 22); g_463 = safe_add_func_uint32_t_u_u(g_463, 4))
        {
            int l_606 = 0x998B90FEL;
            int l_610 = 0L;
            unsigned char *l_611 = &g_574;
            (*l_577) = (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_606, g_383)), ((((p_40 != (p_40 != (safe_add_func_uint16_t_u_u(0x5E6FL, p_41)))) & (g_244 = l_610)) < ((*l_611) |= (*g_381))) & p_41))) && 0x21L), p_42));
            for (l_580 = 17; (l_580 < 18); l_580 = safe_add_func_uint8_t_u_u(l_580, 1))
            {
                unsigned char *l_617 = &g_351;
                if (((safe_lshift_func_uint16_t_u_u((l_606 | 0L), (*g_429))) >= (*l_577)))
                {
                    l_610 = p_40;
                }
                else
                {
                    volatile int ***l_618 = (void*)0;
                    l_619 = &l_577;
                }
                (*g_207) = l_597;
                return (*g_202);
            }
        }
    }
    return (*g_202);
}







static unsigned short func_43(int p_44, unsigned char p_45, unsigned p_46, unsigned short p_47, unsigned p_48)
{
    int l_53 = 0L;
    int l_59 = 0x56FE18BDL;
    unsigned char *l_62 = &g_63;
    unsigned char l_446 = 0x48L;
    int l_447 = 5L;
    int *l_548 = &g_549;
    (*l_548) &= (safe_mod_func_int16_t_s_s((l_53 || l_53), func_54(p_46, (l_59 |= 0xDFL), (((((0xAD14L < ((g_448 |= (g_8 ^ (l_447 ^= ((func_60(((*l_62) = p_45)) && 0x2DD0C4F6L) > l_446)))) < 4294967292UL)) <= l_53) & (-8L)) < 0xA93B77ADL) < g_8), g_8)));
    if (((*l_548) = (+(p_44 |= (*l_548)))))
    {
        unsigned l_558 = 0UL;
        unsigned short *l_559 = &g_286;
        (*g_532) |= (1L != g_168);
        if (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_46, 14)), 5)) != ((func_54((*l_548), (*l_548), (*l_548), g_383) < p_45) || p_46)), (p_47 = (((((*l_559) = l_558) == (*g_429)) || 0xDECDL) ^ p_47)))), 3L)) & p_45))
        {
            int *l_560 = &g_67;
            (*g_207) = l_560;
        }
        else
        {
            return p_45;
        }
    }
    else
    {
        unsigned char **l_563 = &g_381;
        int l_564 = 0x46868B74L;
        char ***l_567 = (void*)0;
        int l_570 = 2L;
        unsigned char *l_571 = (void*)0;
        unsigned char *l_572 = (void*)0;
        unsigned char *l_573 = &g_574;
        (*g_532) &= ((*l_548) = (*l_548));
        (*g_207) = &l_570;
    }
    return p_48;
}







static short func_54(char p_55, char p_56, char p_57, char p_58)
{
    unsigned char *l_451 = &g_63;
    int *l_453 = &g_67;
    unsigned short ****l_484 = &g_427;
    volatile int **l_534 = &g_532;
    for (g_229 = (-22); (g_229 != 9); ++g_229)
    {
        int *l_452 = &g_168;
        (*l_452) = func_70(l_451);
        (*g_207) = l_453;
        for (g_86 = 0; (g_86 > (-29)); --g_86)
        {
            unsigned char l_482 = 0x21L;
            unsigned short ****l_483 = (void*)0;
            int l_485 = (-5L);
            unsigned *l_487 = (void*)0;
            unsigned **l_486 = &l_487;
            unsigned **l_490 = &l_487;
            int l_512 = (-4L);
            for (p_55 = (-18); (p_55 < 8); p_55 = safe_add_func_uint32_t_u_u(p_55, 7))
            {
                unsigned char *l_468 = (void*)0;
                int l_479 = 1L;
                unsigned short l_492 = 0UL;
            }
            for (g_104 = 0; (g_104 > 48); g_104 = safe_add_func_uint8_t_u_u(g_104, 4))
            {
                return p_58;
            }
        }
    }
    (*l_534) = g_532;
    if ((p_56 != (*l_453)))
    {
        unsigned char *l_535 = &g_104;
        int l_538 = (-8L);
        if (func_70((l_535 = l_451)))
        {
            (*l_453) = (safe_rshift_func_int16_t_s_s(l_538, ((*g_202) = p_55)));
            for (g_351 = 26; (g_351 <= 52); g_351 = safe_add_func_uint16_t_u_u(g_351, 4))
            {
                int *l_543 = &l_538;
                for (g_244 = 0; (g_244 == (-27)); g_244 = safe_sub_func_uint8_t_u_u(g_244, 6))
                {
                    return p_57;
                }
                (*g_207) = l_543;
            }
        }
        else
        {
            (*g_532) |= 0x241AA35AL;
            (*l_453) = (**l_534);
        }
        for (g_203 = (-29); (g_203 > (-14)); g_203 = safe_add_func_uint8_t_u_u(g_203, 3))
        {
            (*g_532) = (**l_534);
            return (*g_202);
        }
        (*l_453) = (safe_mod_func_int16_t_s_s((*g_202), (*l_453)));
    }
    else
    {
        (*l_534) = &g_533;
    }
    return p_58;
}







static unsigned func_60(unsigned char p_61)
{
    char l_64 = 0xB0L;
    int *l_65 = (void*)0;
    int *l_66 = &g_67;
    unsigned char *l_72 = &g_63;
    short l_110 = (-5L);
    int **l_125 = (void*)0;
    unsigned l_139 = 0xE2562E96L;
    int l_188 = 0xEA9D5ECCL;
    int l_409 = 0x33B8448DL;
    unsigned short ***l_431 = &g_428;
    char l_432 = 2L;
    int *l_444 = &l_188;
    (*l_66) &= l_64;
    for (g_67 = 0; (g_67 >= (-28)); g_67 = safe_sub_func_uint16_t_u_u(g_67, 2))
    {
        return g_8;
    }
    if (func_70(l_72))
    {
        int l_111 = 0x38E6A276L;
        unsigned l_142 = 1UL;
        short l_153 = 0xD1F7L;
        unsigned char *l_171 = &g_104;
        short l_181 = 0x49E2L;
        int l_192 = (-1L);
        int **l_224 = &g_208;
        int l_341 = 0x676504F6L;
        unsigned short **l_436 = &g_429;
        if (((*l_66) |= (safe_lshift_func_uint8_t_u_u(l_110, l_111))))
        {
            unsigned l_121 = 4294967293UL;
            int *l_189 = &l_111;
            short *l_201 = (void*)0;
            short **l_217 = &l_201;
            unsigned short l_252 = 65535UL;
            unsigned char *l_265 = &g_104;
            if (p_61)
            {
                int l_120 = 4L;
                int **l_126 = &l_66;
                if (p_61)
                {
                    int **l_112 = &l_65;
                    (*l_112) = &g_67;
                }
                else
                {
                    int *l_119 = &g_67;
                    for (l_110 = (-28); (l_110 > (-20)); ++l_110)
                    {
                        (*l_66) |= (0UL > g_63);
                    }
                    for (g_63 = 13; (g_63 < 60); g_63++)
                    {
                        int **l_117 = (void*)0;
                        int **l_118 = &l_66;
                        (*l_118) = &g_67;
                        (*l_118) = l_119;
                        if (l_120)
                            continue;
                        (*l_119) = l_121;
                    }
                    if ((safe_rshift_func_int8_t_s_s(g_8, 5)))
                    {
                        int **l_124 = &l_65;
                        (*l_124) = &l_120;
                    }
                    else
                    {
                        unsigned char ***l_130 = (void*)0;
                        unsigned char **l_132 = &l_72;
                        unsigned char ***l_131 = &l_132;
                        int *l_133 = &l_120;
                        short l_134 = (-1L);
                        (*l_119) = (l_125 != l_126);
                        (*l_133) = ((*l_119) &= (safe_rshift_func_int8_t_s_u(g_86, (g_129 != ((*l_131) = g_129)))));
                        (**l_126) = g_104;
                        (*l_66) = l_134;
                    }
                }
            }
            else
            {
                int *l_147 = &g_67;
                int **l_148 = &l_66;
                for (l_110 = (-1); (l_110 != (-26)); l_110--)
                {
                    unsigned char l_140 = 3UL;
                    int l_141 = 5L;
                    int l_146 = (-1L);
                    for (l_111 = 21; (l_111 > (-11)); --l_111)
                    {
                        return l_139;
                    }
                    l_141 |= (l_111 |= (p_61 > l_140));
                    l_142 ^= ((l_111 = (l_141 ^ p_61)) > (g_67 &= p_61));
                    for (l_140 = 0; (l_140 != 43); l_140++)
                    {
                        unsigned l_145 = 0x03C6C282L;
                        l_146 = l_145;
                        return g_8;
                    }
                }
                (*l_148) = l_147;
                (*l_147) = func_70(l_72);
                (**l_148) &= ((safe_lshift_func_int8_t_s_u(g_86, p_61)) & (l_153 <= 0xA76FL));
            }
            if ((0x548FL != 0xAFAEL))
            {
                short *l_164 = &l_153;
                int l_165 = 0xF3F9EAB4L;
                int l_166 = 0x9F826083L;
                int *l_167 = &g_168;
                unsigned char **l_178 = &l_171;
                (*l_167) &= ((safe_div_func_uint32_t_u_u(0UL, ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_72) &= 0x1BL), (p_61 != (safe_div_func_int32_t_s_s(((p_61 | (safe_sub_func_uint32_t_u_u(l_111, (g_67 || p_61)))) < (g_86 != (((l_165 = ((((*l_164) = p_61) || 0x4BCBL) ^ 248UL)) >= l_166) == 0x0F4CL))), l_121))))), p_61)) ^ g_104))) != (*l_66));
                (*l_167) = (safe_lshift_func_int8_t_s_u((l_72 == (void*)0), p_61));
                l_111 &= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_61, (((safe_rshift_func_int8_t_s_s(func_70(((*l_178) = &p_61)), 4)) != g_8) ^ (g_168 = p_61)))), g_8));
            }
            else
            {
                int **l_179 = (void*)0;
                int ***l_180 = &l_125;
                unsigned short l_204 = 0x96EEL;
                int l_216 = 0xDED147D6L;
                (*l_180) = l_179;
                if ((func_70(&g_63) & 0xFE46L))
                {
                    char l_182 = 1L;
                    l_182 = l_181;
                    return p_61;
                }
                else
                {
                    unsigned char l_185 = 0xEBL;
                    char *l_186 = (void*)0;
                    char *l_187 = &l_64;
                    int **l_190 = (void*)0;
                    int **l_191 = &l_65;
                    l_188 = ((*l_66) = (safe_sub_func_uint8_t_u_u(255UL, ((*l_187) = l_185))));
                    (*l_191) = l_189;
                }
                l_192 ^= ((*l_65) |= l_153);
                if ((((*l_66) | (g_67 == (p_61 <= ((*l_72) = (safe_mod_func_uint32_t_u_u(0UL, (safe_rshift_func_int16_t_s_s((0x2571DCDCL != ((safe_lshift_func_uint8_t_u_u(((l_201 != g_202) > (l_204 > ((((*g_202) | p_61) < p_61) != 65535UL))), 1)) < 1UL)), 3)))))))) <= p_61))
                {
                    int **l_215 = &l_189;
                    if ((safe_sub_func_int8_t_s_s(((&l_66 != g_207) ^ ((*l_65) ^= ((safe_sub_func_int16_t_s_s(((*g_202) = (((p_61 || (safe_mod_func_int32_t_s_s((l_216 = (g_104 | (safe_add_func_int8_t_s_s(g_86, ((*l_72) = (l_215 == (void*)0)))))), p_61))) > (0x1A25AED9L | 0x1E9822E9L)) ^ g_8)), p_61)) >= 0x9A7DBD60L))), 0x70L)))
                    {
                        (*g_207) = (void*)0;
                    }
                    else
                    {
                        return g_168;
                    }
                    l_217 = &g_202;
                }
                else
                {
                    int ***l_225 = &l_179;
                    unsigned char *l_226 = &g_63;
                    unsigned short *l_227 = (void*)0;
                    unsigned short *l_228 = (void*)0;
                    char *l_230 = (void*)0;
                    char *l_231 = &l_64;
                    int *l_232 = (void*)0;
                    int *l_233 = &l_192;
                    (*l_233) ^= (safe_mod_func_int8_t_s_s(((*l_231) = (safe_lshift_func_int16_t_s_s((((*g_202) = (p_61 <= (safe_add_func_int16_t_s_s((((*l_180) = (void*)0) != ((*l_225) = l_224)), (g_229 = func_70(l_226)))))) > ((*l_189) = g_8)), 9))), p_61));
                    for (g_203 = 0; (g_203 <= 9); g_203 = safe_add_func_uint32_t_u_u(g_203, 2))
                    {
                        (*l_233) &= ((**l_179) = 1L);
                        (*l_179) = l_189;
                    }
                    (*l_224) = (*g_207);
                    if (((func_70(l_231) ^ (safe_sub_func_uint32_t_u_u(g_229, 0x2DAB10FFL))) == (p_61 >= g_203)))
                    {
                        char *l_242 = (void*)0;
                        char *l_243 = &g_244;
                        int l_247 = 3L;
                        int *l_248 = &g_168;
                        (*l_248) |= ((***l_225) <= ((p_61 > ((((g_86 >= (g_63 | g_8)) == ((safe_div_func_uint8_t_u_u(g_203, ((*l_243) = ((*l_231) &= (*l_233))))) & p_61)) || (safe_add_func_uint32_t_u_u((l_247 >= 0xC6F1L), (*l_189)))) || l_247)) != g_63));
                    }
                    else
                    {
                        (*l_179) = (**l_225);
                        (**g_207) = (func_70(&p_61) > ((&l_171 == &l_226) & (p_61 & g_244)));
                        (*l_233) ^= (*g_208);
                        (***l_225) = p_61;
                    }
                }
            }
            for (l_121 = 0; (l_121 == 32); ++l_121)
            {
                int *l_254 = &g_67;
                if (((*l_189) = (*l_66)))
                {
                    unsigned char l_251 = 0x3CL;
                    int *l_253 = &g_168;
                    if (l_251)
                    {
                        return l_252;
                    }
                    else
                    {
                        if (p_61)
                            break;
                    }
                    (*l_224) = l_253;
                    if ((**l_224))
                    {
                        (*g_207) = l_254;
                    }
                    else
                    {
                        (*l_189) = (*g_208);
                    }
                }
                else
                {
                    unsigned l_278 = 0x70C6443EL;
                    for (g_86 = 0; (g_86 != 1); g_86++)
                    {
                        short l_266 = 5L;
                        unsigned *l_267 = &l_139;
                        (*l_66) = (safe_mod_func_uint8_t_u_u((*l_254), 1UL));
                        l_278 |= ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*l_254), (l_265 == (void*)0))), (((*g_202) = (((*l_267) = l_266) >= 0x79F91161L)) | 0UL))) >= l_266) ^ (safe_add_func_int8_t_s_s(((p_61 < ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_266 && p_61), p_61)), 3))), g_104)), p_61)) && g_168)) || (*l_254)), p_61))), p_61)) ^ 1L);
                        (*l_66) ^= (*l_189);
                        (*l_224) = (*g_207);
                    }
                }
            }
        }
        else
        {
            int *l_281 = &g_67;
            if ((func_70(l_72) ^ 0L))
            {
                (*g_208) &= (safe_div_func_int16_t_s_s(p_61, 0xE347L));
                (*l_224) = l_281;
                for (l_111 = 0; (l_111 > (-2)); --l_111)
                {
                    unsigned short *l_285 = &g_286;
                    unsigned short **l_284 = &l_285;
                    int l_296 = (-4L);
                    (*g_207) = (*g_207);
                    (*g_207) = l_281;
                    if (((*l_66) = (**l_224)))
                    {
                        return p_61;
                    }
                    else
                    {
                        unsigned short ***l_287 = &l_284;
                        int l_297 = 5L;
                        (*l_287) = l_284;
                        g_168 &= (l_297 ^= (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((*g_208) | ((*g_202) <= (safe_sub_func_int32_t_s_s(0xA18C07E2L, (**g_207))))) > (safe_lshift_func_uint16_t_u_s(0x82AEL, 8))) != g_86), ((((void*)0 == &g_202) || p_61) & l_296))), (*g_202))));
                    }
                }
                (*g_208) |= 1L;
            }
            else
            {
                for (g_286 = 12; (g_286 <= 44); g_286 = safe_add_func_int16_t_s_s(g_286, 1))
                {
                    (*g_208) = (**l_224);
                }
                (*l_224) = (void*)0;
                for (l_181 = 0; (l_181 == (-24)); l_181--)
                {
                    return p_61;
                }
            }
            if (p_61)
            {
                unsigned *l_304 = &l_139;
                int l_325 = 0xD2730DB2L;
                unsigned char l_326 = 9UL;
                (*g_207) = (*g_207);
                (*l_66) ^= (g_208 == (void*)0);
                if ((safe_mod_func_int8_t_s_s(g_244, (((*l_304) |= p_61) && 0x402E1775L))))
                {
                    for (l_142 = (-9); (l_142 > 23); l_142 = safe_add_func_uint16_t_u_u(l_142, 6))
                    {
                        (*l_281) = (safe_mod_func_uint8_t_u_u((0xF0L ^ 0x52L), (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((4294967291UL | g_168), p_61)), (((*l_72) |= (*l_281)) != ((safe_mod_func_int16_t_s_s((p_61 <= (((safe_add_func_uint16_t_u_u(1UL, g_104)) != p_61) != 0L)), 0xAEE2L)) || 250UL))))));
                        g_168 ^= ((*l_281) ^= (safe_mod_func_int8_t_s_s(p_61, 3UL)));
                    }
                }
                else
                {
                    unsigned l_321 = 6UL;
                    int **l_324 = &l_281;
                    (*l_281) &= l_321;
                    (*l_66) = (safe_div_func_int16_t_s_s((*g_202), p_61));
                    (*l_324) = ((*g_207) = (*g_207));
                    (*l_66) = (l_326 = (l_325 = g_67));
                }
                (*l_224) = &l_325;
            }
            else
            {
                int l_329 = 0xE4875687L;
                (*l_281) = (((func_70(&p_61) ^ 4294967294UL) & (safe_sub_func_int8_t_s_s(p_61, l_329))) || p_61);
            }
            (*l_66) &= 0x8A2A5497L;
        }
        for (l_192 = 11; (l_192 == 8); l_192 = safe_sub_func_uint32_t_u_u(l_192, 5))
        {
            int l_336 = 0x79E94900L;
            int *l_338 = &l_188;
            int l_406 = 0xF53D3AF3L;
            for (l_188 = (-20); (l_188 < 3); l_188 = safe_add_func_uint16_t_u_u(l_188, 7))
            {
                unsigned l_337 = 0xB6E22C6DL;
                int l_361 = 0x2E5476D4L;
                char *l_393 = &l_64;
                (*l_66) ^= (safe_sub_func_uint16_t_u_u(p_61, p_61));
                (*l_66) = l_336;
                if (l_337)
                {
                    int l_342 = 0x8F511497L;
                    unsigned char *l_349 = &g_63;
                    (*l_224) = l_338;
                    (*l_66) = (l_337 | (l_341 < l_342));
                    for (l_337 = 28; (l_337 > 7); l_337--)
                    {
                        unsigned char *l_350 = &g_351;
                        int l_354 = 0xD9EB1176L;
                        l_354 ^= ((safe_sub_func_uint8_t_u_u((func_70(l_349) ^ (((p_61 >= ((*l_350) &= (p_61 & (-4L)))) <= g_203) < ((0x4AE8L < (l_337 != ((!g_244) != l_342))) || g_229))), (-1L))) != l_337);
                    }
                    l_361 |= ((+(((safe_mod_func_int8_t_s_s(0x9BL, ((-9L) ^ (l_342 || (safe_rshift_func_int16_t_s_s(((*l_338) <= func_70((l_349 = &p_61))), 15)))))) < ((*g_208) <= p_61)) ^ (**l_224))) ^ g_8);
                }
                else
                {
                    int l_366 = (-1L);
                    unsigned short *l_379 = &g_286;
                    unsigned char *l_380 = &g_63;
                    unsigned short *l_382 = &g_383;
                    for (g_229 = 26; (g_229 > 22); g_229 = safe_sub_func_uint16_t_u_u(g_229, 8))
                    {
                        (*l_66) &= ((safe_add_func_uint8_t_u_u(((*l_171) = p_61), l_366)) < (0x4EL == l_337));
                        (*l_66) = ((p_61 & ((safe_add_func_uint16_t_u_u(0xE78FL, (safe_mod_func_uint32_t_u_u(l_361, func_70(&p_61))))) > ((-4L) & (g_203 & 6L)))) == p_61);
                    }
                    (*l_66) ^= 2L;
                    if ((safe_sub_func_int16_t_s_s(((*g_202) = ((((*l_382) = ((safe_sub_func_uint32_t_u_u(((l_111 = p_61) ^ (safe_lshift_func_uint16_t_u_u(((*l_379) = (safe_lshift_func_uint16_t_u_u(p_61, l_366))), p_61))), p_61)) || func_70((g_381 = l_380)))) > p_61) && (((*l_338) && (*g_381)) & p_61))), p_61)))
                    {
                        unsigned char **l_388 = &l_171;
                        char *l_394 = &l_64;
                        int l_395 = 0x22CCC344L;
                        (*l_66) = (((0x4AA4L | ((*l_382) &= ((safe_mod_func_int32_t_s_s((-1L), (safe_div_func_uint8_t_u_u((((*l_388) = &p_61) != l_380), (safe_rshift_func_uint16_t_u_s((p_61 | (g_286 || 0L)), 5)))))) <= ((safe_lshift_func_int8_t_s_u(g_229, 2)) < (l_393 == l_394))))) == l_395) < 0xB963L);
                    }
                    else
                    {
                        int l_396 = 0xE3A13B9CL;
                        (*l_66) = ((!(((*g_202) = l_396) | g_8)) && func_70(&p_61));
                        if (p_61)
                            break;
                        l_406 = ((*l_66) = ((0x53L > l_366) <= ((((*l_66) ^ (((g_397 != ((*g_202) ^= ((safe_rshift_func_uint16_t_u_s(((*l_379) |= g_229), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_67, 1)), 6)))) > (0x963DL != (safe_add_func_uint32_t_u_u((2UL || p_61), 0x46904C32L)))))) < p_61) == p_61)) || g_397) ^ 0xB7L)));
                    }
                    if (p_61)
                        continue;
                }
                for (g_397 = (-2); (g_397 < (-18)); --g_397)
                {
                    unsigned l_412 = 4294967290UL;
                    l_409 &= func_70(&g_63);
                    if ((safe_mod_func_int16_t_s_s(l_361, l_412)))
                    {
                        int *l_413 = &g_168;
                        (*l_224) = &l_361;
                        (*g_207) = l_413;
                    }
                    else
                    {
                        l_406 = ((*l_66) = 0x864273B3L);
                        return g_203;
                    }
                    (*l_224) = &l_361;
                }
            }
            if (p_61)
                break;
        }
        for (g_286 = 0; (g_286 != 14); g_286 = safe_add_func_uint16_t_u_u(g_286, 5))
        {
            int l_422 = 1L;
            for (g_67 = 0; (g_67 != (-2)); --g_67)
            {
                unsigned short ****l_430 = (void*)0;
                unsigned *l_433 = &l_142;
                int *l_437 = &l_422;
                l_192 &= ((((safe_mod_func_int16_t_s_s((*g_202), l_422)) > (&l_341 != (void*)0)) <= (safe_add_func_int8_t_s_s(p_61, 0x75L))) != ((*l_433) = (safe_lshift_func_uint16_t_u_u((((g_427 = g_427) == l_431) >= (l_432 <= 6UL)), 10))));
                (*l_437) = ((3UL ^ (l_436 == (*g_427))) <= ((g_168 = 0x412A56E4L) != 0xE406031CL));
                if (l_422)
                {
                    (*l_437) &= 7L;
                }
                else
                {
                    unsigned l_441 = 0xED9ED397L;
                    int l_442 = 1L;
                    unsigned short **l_443 = (void*)0;
                    for (g_351 = 0; (g_351 <= 34); g_351 = safe_add_func_uint16_t_u_u(g_351, 4))
                    {
                        unsigned char l_440 = 9UL;
                        if (l_440)
                            break;
                        if ((*l_437))
                            break;
                        l_442 &= l_441;
                        (*g_427) = l_443;
                    }
                    (*g_207) = l_444;
                }
                return g_104;
            }
            if (l_422)
                break;
        }
        (*l_224) = &g_67;
    }
    else
    {
        unsigned l_445 = 4294967295UL;
        (*l_444) = ((**g_207) >= (g_244 < l_445));
    }
    (*g_207) = (*g_207);
    return p_61;
}







static int func_70(unsigned char * p_71)
{
    int *l_74 = &g_67;
    int **l_73 = &l_74;
    int l_81 = 0L;
    int *l_107 = &l_81;
    l_73 = l_73;
    if (g_63)
    {
        int *l_77 = &g_67;
        for (g_63 = (-2); (g_63 >= 19); ++g_63)
        {
            int *l_78 = &g_67;
            if (g_63)
                break;
            l_78 = l_77;
            for (g_67 = (-24); (g_67 == (-23)); g_67 = safe_add_func_uint16_t_u_u(g_67, 5))
            {
                if (g_67)
                {
                    return g_63;
                }
                else
                {
                    int *l_82 = (void*)0;
                    l_81 |= ((*l_78) > (*l_78));
                    (*l_73) = l_82;
                }
                return g_63;
            }
        }
        (*l_77) |= (&g_67 != (void*)0);
    }
    else
    {
        unsigned short l_85 = 0x2B81L;
        int l_87 = 0x95C78859L;
        for (g_67 = (-28); (g_67 == 15); g_67 = safe_add_func_int16_t_s_s(g_67, 9))
        {
            if (l_85)
                break;
            (*l_73) = (*l_73);
            g_86 = g_8;
            l_87 &= (l_85 ^ (l_85 && 0x64EB7F04L));
        }
        return (*l_74);
    }
    if ((*l_74))
    {
        (*l_74) = g_67;
    }
    else
    {
        int l_90 = (-1L);
        unsigned l_91 = 9UL;
        int **l_96 = &l_74;
        (*l_73) = (*l_73);
        (*l_74) = (safe_lshift_func_int8_t_s_s((g_63 == (l_91 &= l_90)), 0));
        for (g_63 = 13; (g_63 != 26); ++g_63)
        {
            int *l_102 = &g_67;
            unsigned char *l_103 = &g_104;
            unsigned char **l_106 = &l_103;
            (**l_96) = (safe_sub_func_int32_t_s_s(((void*)0 == l_96), (g_63 & (safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u((*p_71))) == (0xD3L ^ ((*l_103) ^= (65526UL == (safe_rshift_func_int8_t_s_s(((void*)0 == l_102), 2)))))) < ((safe_unary_minus_func_uint8_t_u(g_8)) && (*l_102))), 3UL)))));
            l_106 = &l_103;
        }
    }
    (*l_107) |= ((*l_74) = g_86);
    return g_8;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
