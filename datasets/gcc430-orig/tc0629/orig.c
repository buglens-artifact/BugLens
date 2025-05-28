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



static int g_3 = 0x57976326L;
static unsigned char g_16 = 0xA8L;
static unsigned char g_18 = 1UL;
static unsigned char *g_17 = &g_18;
static unsigned g_76 = 0x393DFE8EL;
static int g_83 = 0x7709C180L;
static int *g_85 = &g_83;
static unsigned g_102 = 4294967291UL;
static short g_104 = 0x7348L;
static char g_123 = 0xCCL;
static unsigned char g_133 = 0xE4L;
static int g_141 = 0x919BB5C0L;
static short g_169 = 0x2721L;
static int *g_170 = &g_83;
static unsigned short g_197 = 65535UL;
static char *g_224 = &g_123;
static int g_240 = 0x672261EFL;
static unsigned short g_250 = 7UL;
static volatile unsigned *g_318 = (void*)0;
static volatile unsigned **g_317 = &g_318;
static int **g_343 = &g_85;
static int ***g_342 = &g_343;
static unsigned short *g_383 = &g_250;
static volatile unsigned char g_386 = 0xBCL;
static unsigned char g_396 = 0x89L;
static short *g_444 = &g_169;
static short **g_443 = &g_444;
static volatile short g_447 = 0xD648L;
static volatile short *g_446 = &g_447;
static volatile short **g_445 = &g_446;
static volatile unsigned char *g_481 = &g_386;
static volatile unsigned char **g_480 = &g_481;
static volatile unsigned char ***g_479 = &g_480;
static int g_660 = 0xD22D29A1L;
static unsigned g_691 = 0UL;
static unsigned g_694 = 4294967295UL;
static volatile int g_731 = (-10L);
static short *g_880 = &g_104;
static unsigned *g_1002 = &g_76;
static unsigned **g_1001 = &g_1002;
static unsigned ***g_1000 = &g_1001;
static unsigned ****g_999 = &g_1000;
static int *g_1135 = &g_660;



static int func_1(void);
static int * func_7(unsigned short p_8, int ** p_9, int ** p_10, int ** p_11);
static int * func_19(unsigned char * p_20, short p_21);
static unsigned char func_27(char p_28, int p_29, int * p_30, int * p_31, int ** p_32);
static int func_35(unsigned short p_36, int * p_37, unsigned short p_38, int p_39);
static int * func_40(unsigned char p_41, short p_42, unsigned p_43, unsigned char p_44, unsigned char * p_45);
static unsigned func_48(unsigned char * p_49, unsigned short p_50);
static unsigned char * func_51(int * p_52, unsigned char * p_53, unsigned char * p_54, char p_55);
static int * func_59(int * p_60, unsigned char * p_61, unsigned char * p_62, unsigned p_63);
static int * func_64(unsigned short p_65, int ** p_66, int ** p_67);
static int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = (void*)0;
    int **l_5 = (void*)0;
    int **l_6 = &l_2;
    unsigned short l_12 = 0UL;
    unsigned char *l_15 = &g_16;
    char l_1140 = 0L;
    (*l_6) = l_2;
    (*l_6) = (void*)0;

    ;
    (*l_6) = func_7(((l_12 , (safe_rshift_func_uint8_t_u_s(((*l_15) = g_3), (&g_3 != (g_1135 = ((l_15 != g_17) , func_19(l_15, g_18))))))) & (safe_mul_func_int8_t_s_s((!(safe_mul_func_uint16_t_u_u(l_1140, 0UL))), 0x61L))), &l_2, &l_2, &l_2);

    ;

    ;

    ;
    ;
    ;
    return g_18;
}







static int * func_7(unsigned short p_8, int ** p_9, int ** p_10, int ** p_11)
{
    unsigned l_1143 = 4294967295UL;
    int **l_1144 = &g_85;
    unsigned char *l_1151 = (void*)0;
    unsigned short *l_1152 = &g_197;
    int *l_1153 = &g_3;
    (*g_170) = (safe_mod_func_int32_t_s_s((*g_170), (*g_170)));
    return (*p_10);


}







static int * func_19(unsigned char * p_20, short p_21)
{
    int l_24 = 0xF7806AA1L;
    int *l_56 = (void*)0;
    unsigned char *l_57 = &g_18;
    int l_58 = 0x3610CB4EL;
    unsigned *l_360 = &g_76;
    unsigned *l_361 = &g_102;
    unsigned ****l_1003 = (void*)0;
    unsigned short l_1045 = 1UL;
    unsigned l_1078 = 3UL;
    unsigned l_1079 = 4294967290UL;
    short l_1104 = (-8L);
    int *l_1131 = &l_58;
    int *l_1132 = &l_58;
    int *l_1133 = &l_58;
    int *l_1134 = &g_83;
    for (p_21 = 0; (p_21 == (-9)); --p_21)
    {
        if (l_24)
            break;
    }
    if (((safe_lshift_func_uint8_t_u_u(((l_24 , func_27(p_21, (safe_add_func_int32_t_s_s((+func_35(g_18, func_40((!(safe_sub_func_uint32_t_u_u(((*l_361) = ((*l_360) = func_48(func_51(l_56, p_20, l_57, l_58), (((safe_rshift_func_uint16_t_u_s(l_24, 13)) <= 0xBA1BL) , g_18)))), 0x9B401562L))), g_18, l_58, (*g_17), &g_18), g_3, p_21)), p_21)), &l_58, &l_58, &l_56)) >= l_24), l_24)) && (*g_383)))
    {
        int *l_986 = (void*)0;
        int l_1030 = 9L;
        short l_1046 = 0L;
        int ****l_1056 = &g_342;
        for (g_76 = (-15); (g_76 <= 42); g_76++)
        {
            (**g_342) = l_986;

            ;
            (*g_343) = (*g_343);
            return l_986;


        }
        (*g_343) = l_986;

        ;
        (*g_343) = &l_58;

        ;
        for (g_694 = 3; (g_694 > 8); g_694 = safe_add_func_int8_t_s_s(g_694, 7))
        {
            int *l_1006 = &g_83;
            unsigned char *l_1007 = &g_396;
            int l_1034 = 0L;
            int *l_1037 = (void*)0;
            short ***l_1044 = &g_443;
            unsigned l_1047 = 1UL;
            int *l_1048 = (void*)0;
            int *l_1049 = &l_1030;
            unsigned char l_1085 = 0xB5L;
            for (g_76 = (-22); (g_76 > 25); g_76 = safe_add_func_uint32_t_u_u(g_76, 1))
            {
                unsigned char **l_993 = (void*)0;
                int l_994 = 0x736842C2L;
                int *l_996 = &l_24;
                int **l_995 = &l_996;
                int *l_998 = &l_24;
                int **l_997 = &l_998;
                unsigned char *l_1004 = &g_396;
                int l_1005 = 0x3638EE60L;
                l_1005 = ((((*l_1004) = ((safe_sub_func_uint32_t_u_u(((*l_361) = (func_48((g_17 = &g_396), p_21) && l_994)), (((*l_57) = ((***g_479) >= (((((*l_995) = &g_240) != ((*l_997) = &g_141)) , g_999) == l_1003))) > 6UL))) , 3UL)) >= g_240) , 0x501EFB6DL);

                ;
                ;
                ;
                ;
                l_1006 = (void*)0;

                ;
                if ((+func_48(l_1007, (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((-5L))), (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_21 && func_35((*g_383), &l_994, l_1005, func_35((*g_383), &l_58, ((((safe_lshift_func_uint16_t_u_u(p_21, (*g_383))) == 7L) || 0x473E20C4L) , 65534UL), (*g_170)))), p_21)), p_21)))))))
                {
                    char l_1017 = 7L;
                    int *l_1031 = &l_58;
                    (**g_342) = l_986;

                    ;
                    l_1030 = (((void*)0 != &g_443) , l_1005);
                    (*l_1031) = (*g_170);
                }
                else
                {
                    int *l_1032 = &g_660;
                    int *l_1033 = &l_994;
                    (*l_1033) = ((*l_1032) = (p_21 >= ((*g_383) = func_48(&g_396, ((*g_383) = (*g_383))))));
                }

                ;
                l_1034 = p_21;
            }

            ;
            l_1034 = (safe_lshift_func_uint8_t_u_u(((void*)0 != (***g_999)), 1));
            if ((l_1030 , p_21))
            {
                int *l_1040 = &l_1034;
                for (g_141 = 0; (g_141 >= 13); g_141 = safe_add_func_int32_t_s_s(g_141, 8))
                {
                    (**g_342) = l_1040;

                    ;
                }


            }
            else
            {
                unsigned l_1041 = 0xB628F0E6L;
                int *l_1042 = &g_83;
                (*g_343) = (((***g_479) > (0x0DL < (0L <= ((***g_1000) = (l_1041 , p_21))))) , l_1042);

                ;
            }


            if (((*l_1049) = ((func_35((p_21 > (safe_unary_minus_func_uint8_t_u(((&g_444 == ((*l_1044) = &g_880)) , (g_102 != (((func_35(p_21, &l_1034, p_21, p_21) || l_1045) | 1L) , 7UL)))))), &l_1034, l_1046, p_21) || l_1047) == (**g_480))))
            {
                unsigned char *l_1055 = &g_133;
                int l_1059 = (-1L);
                int *l_1067 = (void*)0;
                for (g_169 = (-22); (g_169 >= 18); ++g_169)
                {
                    for (g_133 = (-7); (g_133 < 29); ++g_133)
                    {
                        int *l_1054 = &l_1034;
                        (*g_343) = func_59(l_1054, p_20, l_1055, func_48(p_20, (*g_383)));

                        ;
                        l_1059 = ((l_1056 == (void*)0) , (func_48(l_1007, p_21) > (safe_mod_func_uint16_t_u_u((l_1059 , (p_21 | ((p_21 >= (((safe_add_func_uint16_t_u_u((p_21 || 1L), (*g_383))) | (-10L)) < (**g_480))) , p_21))), l_1059))));

                        ;
                        (***l_1056) = (void*)0;

                        ;
                    }
                    for (g_76 = (-2); (g_76 > 21); ++g_76)
                    {
                        return (**g_342);


                    }
                    (*l_1049) = (safe_sub_func_uint16_t_u_u((*g_383), func_48(p_20, p_21)));

                    ;
                }
                (*l_1049) = (func_48(l_57, (((*g_383) , (((+func_35(((*g_383) = (*g_383)), (l_1067 = func_59((func_48(&g_18, (p_21 && (safe_unary_minus_func_int16_t_s(0x248BL)))) , func_40((*g_17), ((l_1059 < p_21) > (*l_1049)), l_1059, l_1059, &g_133)), p_20, p_20, g_694)), p_21, g_396)) > 0x26L) , &g_691)) == (void*)0)) == p_21);

                ;
                ;
                for (l_1059 = 0; (l_1059 == 24); ++l_1059)
                {
                    unsigned l_1080 = 4294967286UL;
                    int *l_1086 = &g_240;
                    char *l_1093 = &g_123;
                    for (g_83 = 19; (g_83 != (-30)); g_83 = safe_sub_func_uint8_t_u_u(g_83, 2))
                    {
                    }
                    (***l_1056) = l_1086;

                    ;
                    (*g_343) = ((0x1CD9L ^ (*g_383)) , (**g_342));
                    (**g_342) = (void*)0;

                    ;
                }

                ;
            }
            else
            {
                int *l_1094 = &l_1034;
                (***l_1056) = ((*g_383) , l_1094);

                ;
                (*g_85) = ((safe_rshift_func_uint8_t_u_u((((*l_1044) = &g_880) != &g_880), 0)) , (*l_1094));
                l_1094 = l_1094;
            }

            ;
            ;
        }

        ;

        ;
    }
    else
    {
        int l_1106 = 0L;
        int l_1109 = (-1L);
        short *l_1116 = &g_169;
        for (g_141 = 0; (g_141 == 0); g_141 = safe_add_func_int16_t_s_s(g_141, 9))
        {
            unsigned char l_1103 = 0xFFL;
            for (g_694 = (-24); (g_694 >= 48); ++g_694)
            {
                int *l_1105 = (void*)0;
                if (((((func_35(((*g_383) = (l_1104 = (safe_rshift_func_int8_t_s_s((l_1103 , p_21), 2)))), &g_660, g_169, ((l_1105 != (void*)0) & l_1103)) & p_21) >= p_21) == l_1106) < p_21))
                {
                    short l_1110 = 4L;
                    short ***l_1114 = &g_443;
                    l_1109 = (safe_unary_minus_func_int16_t_s((p_21 , (safe_unary_minus_func_int16_t_s(0x5549L)))));
                    l_1109 = l_1110;
                    for (g_76 = (-22); (g_76 != 58); ++g_76)
                    {
                        int **l_1113 = &l_1105;
                        l_1113 = ((*g_342) = (*g_342));

                        ;
                    }
                    (*l_1114) = &g_444;

                    ;
                }
                else
                {
                    int *l_1115 = &g_83;
                    (*l_1115) = 0x71791B76L;
                    (*l_1115) = (((p_21 && ((g_76 , l_1116) == (((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((*l_1115), (+(safe_lshift_func_uint8_t_u_s(((((0xEC9F350FL | (0x52F4207AL & (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0UL, g_18)), (safe_add_func_int16_t_s_s(p_21, p_21)))))) != (*l_1115)) , 0L) , l_1106), 0))))), p_21)), 0L)) , 0x2610D242L) , (*g_445)))) , (**g_480)) ^ l_1106);
                }

                ;
            }
        }


    }

    ;


    ;

    ;
    ;
    (*l_1131) = (*g_170);
    return l_1134;



}







static unsigned char func_27(char p_28, int p_29, int * p_30, int * p_31, int ** p_32)
{
    int l_526 = (-4L);
    unsigned l_545 = 4294967294UL;
    unsigned char *l_547 = &g_396;
    char **l_554 = &g_224;
    short *l_598 = &g_104;
    unsigned *l_622 = (void*)0;
    unsigned **l_621 = &l_622;
    unsigned char *l_644 = &g_396;
    int l_695 = 0x93F91B3AL;
    unsigned short l_797 = 0xC8C6L;
    int l_856 = 0xEF5FCF47L;
    unsigned l_945 = 4294967295UL;
    if (l_526)
    {
        (*p_31) = 0xD17C5D4CL;
    }
    else
    {
        int ****l_537 = &g_342;
        unsigned char *l_542 = &g_133;
        unsigned char *l_543 = &g_396;
        char l_544 = 0x53L;
        short *l_546 = (void*)0;
        (*g_343) = (((func_35((!p_29), (*p_32), ((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((func_35(((safe_sub_func_uint8_t_u_u(((*l_543) = ((*l_542) = (~(((*g_17) = (safe_lshift_func_uint8_t_u_u(func_35(((safe_add_func_uint16_t_u_u((l_537 == (void*)0), (safe_add_func_int16_t_s_s(func_35((&g_446 == &g_444), (***l_537), l_526, ((((safe_add_func_uint32_t_u_u(p_29, 0xA9C00234L)) != 0x5E3EL) && l_526) <= p_28)), (**g_443))))) >= (*g_224)), (*p_32), (*g_383), (*p_30)), (*g_481)))) || p_28)))), (-1L))) ^ l_544), (*p_32), p_28, (*p_31)) >= p_29), p_29)), l_545)) & (*g_224)), (*p_31)) , l_546) != (void*)0) , (***l_537));
        (**g_342) = func_59((*g_343), &g_133, l_547, g_3);

        ;
    }
    if ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((**g_443) = (safe_add_func_uint16_t_u_u((&p_28 == ((*l_554) = &p_28)), ((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 != &g_342), ((*g_17) = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((p_29 == ((*g_383) = ((void*)0 == (**g_342)))), (safe_rshift_func_int16_t_s_s((((*g_446) , (l_526 & 0x3D902239L)) , 0x00A0L), (*g_444))))), 7)) > l_545)))), l_545)) < 0x7C66CE65L)))), l_545)) , (*g_481)), l_545)))
    {
        short **l_567 = &g_444;
        int l_571 = (-1L);
        unsigned char *l_576 = (void*)0;
        for (g_250 = (-5); (g_250 < 16); ++g_250)
        {
            short **l_568 = &g_444;
            int l_577 = 0x2576D12FL;
            unsigned char **l_579 = &g_17;
            unsigned char ***l_578 = &l_579;
            l_577 = (((((*g_444) = (l_567 == l_568)) ^ ((safe_rshift_func_int16_t_s_s(p_28, 6)) & l_571)) , (((safe_add_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s(p_28, func_48(l_576, l_577))) | ((*p_31) = (((0x4593ADD2L <= l_577) , &g_480) != l_578))) & 0L) == (*g_224)), 0x8934DA51L)) < 0xDAA9L) , 0xB4L)) , 1L);

            ;
        }
    }
    else
    {
        int l_582 = (-1L);
        unsigned char *l_606 = &g_18;
        unsigned l_640 = 0xC5C04CBEL;
        unsigned char **l_682 = &g_17;
        unsigned char ***l_681 = &l_682;
        short ***l_688 = &g_443;
        unsigned char l_788 = 0x5BL;
        unsigned **l_798 = &l_622;
        unsigned char l_809 = 0x4EL;
        if ((!((safe_sub_func_int16_t_s_s(0x83F2L, (((*g_224) <= (l_582 && l_582)) || (*g_170)))) | 0x3B39L)))
        {
            unsigned char *l_595 = &g_396;
            int *l_599 = &g_83;
            unsigned short **l_610 = (void*)0;
            unsigned *l_617 = &g_76;
            unsigned **l_616 = &l_617;
            int l_641 = 0xA3C1E21AL;
            unsigned char *l_808 = (void*)0;
            for (g_240 = 0; (g_240 <= (-18)); g_240--)
            {
                int **l_593 = (void*)0;
                int **l_594 = &g_170;
            }
            (*l_599) = (l_582 = ((*p_30) = (func_48(((p_29 ^ p_28) , l_595), ((*g_383) = (safe_mul_func_uint8_t_u_u(l_526, (((*g_443) = (void*)0) == (l_598 = (void*)0)))))) && (*p_31))));

            ;
            ;
            ;
            if (((*p_30) = (*g_85)))
            {
                for (l_582 = 24; (l_582 < 15); --l_582)
                {
                    unsigned char *l_607 = &g_18;
                    unsigned char *l_608 = &g_396;
                    int l_609 = 0x7033ADC8L;
                    unsigned *l_613 = &g_102;
                    unsigned ***l_618 = &l_616;
                    short *l_623 = &g_104;
                    (*p_30) = (safe_sub_func_int32_t_s_s((((p_28 <= (safe_lshift_func_uint16_t_u_u(((*g_383) = ((p_29 , ((func_48(l_608, l_609) , l_610) != &g_383)) | l_545)), 7))) & p_28) , (***g_342)), 5L));
                    if ((((safe_rshift_func_int8_t_s_s((((0UL < ((*l_613) = (!l_526))) , (l_582 , p_28)) == ((*l_623) = ((l_526 & (p_28 & (((*l_618) = l_616) != ((safe_sub_func_int8_t_s_s(func_48(&g_18, func_48(l_607, p_28)), (*g_224))) , l_621)))) , 0x8C28L))), 4)) , (-2L)) || 0L))
                    {
                        (*g_343) = (*g_343);
                    }
                    else
                    {
                        return (*g_481);


                    }
                }
                (*g_343) = (*p_32);

                ;
                (**g_342) = (**g_342);
            }
            else
            {
                unsigned char *l_628 = &g_133;
                unsigned *l_642 = &l_640;
                int l_648 = 1L;
                int l_653 = 0x98EEA49BL;
                unsigned short l_699 = 0xB556L;
                unsigned l_700 = 0UL;
                short *l_734 = &g_104;
                if (((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((*g_383) = 65531UL), (l_545 >= (((*l_642) = (func_48(l_628, ((*l_599) = (safe_lshift_func_uint16_t_u_u(((((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(0x6883A8CFL)), (((safe_mul_func_uint16_t_u_u(((void*)0 != &g_197), (((*p_31) = (safe_mod_func_uint32_t_u_u(0xE11DB51FL, (safe_sub_func_uint8_t_u_u(func_48(((0L && ((func_48(&g_133, l_640) , 0xA03EL) && 0x16F0L)) , l_547), l_526), p_29))))) ^ (-5L)))) || (***g_342)) <= 4UL))) && p_28) != l_641) != 65526UL) | l_640) & 1L), l_545)))) , l_640)) , 0xDEAB8702L)))) , p_28), 65530UL)) <= p_29))
                {
                    int *l_643 = &g_141;
                    unsigned char *l_645 = &g_18;
                    int l_646 = (-1L);
                    unsigned char *l_647 = &g_18;
                    int **l_649 = &l_599;
                    short ***l_661 = &g_443;
                    (*p_32) = l_599;


                    (*l_661) = ((g_660 = ((((safe_unary_minus_func_uint8_t_u(l_653)) != 1L) == ((safe_mod_func_int16_t_s_s(((**p_32) < (0L & ((l_545 >= (*g_446)) != (&l_622 != &l_622)))), (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((*l_599), (*g_224))), (*g_383))))) >= (*l_599))) ^ 0UL)) , (void*)0);

                    ;
                    (*p_32) = &l_653;


                }
                else
                {
                    short l_672 = 0xF3DCL;
                    unsigned l_683 = 0x30FF0EE2L;
                    short *l_684 = &g_169;
                    short *l_685 = &g_104;
                    unsigned short *l_686 = &g_197;
                    int ****l_687 = &g_342;
                    int *l_696 = (void*)0;
                    int *l_697 = (void*)0;
                    unsigned char *l_720 = &g_133;
                    (*p_31) = ((0x185D0533L < (((**l_616) = (((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(4294967288UL, (((safe_lshift_func_int16_t_s_u((((((*l_686) = (safe_mod_func_int16_t_s_s(((*l_685) = ((*l_684) = ((&g_342 == ((((*g_383) = (safe_sub_func_uint8_t_u_u((p_29 < ((*l_606) = (((func_48(l_644, (l_672 || ((*g_224) , (((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((l_648 & (l_681 != &g_480)), l_526)) != 0L) , (*g_383)), p_28)) < l_683), 3)) | 0x9B5DL), p_28)) , (*g_479)) != (void*)0) <= p_28) , (*g_383))))) | p_28) >= 0xC0C720EBL) , (**g_480)))), l_526))) , p_29) , &g_342)) , 0x0E4DL))), p_29))) & g_133) || p_29) && p_28), p_28)) != 1L) , l_582))), l_582)) , l_687) != (void*)0) , (void*)0) != l_688)) < l_648)) , (*g_85));
                    for (g_18 = 11; (g_18 > 7); g_18 = safe_sub_func_uint8_t_u_u(g_18, 8))
                    {
                        (*g_343) = (void*)0;

                        ;
                    }

                    ;
                    if (((*p_31) = ((g_240 = func_35((((~((*g_383) = 65535UL)) || g_691) <= (!p_28)), func_40((*g_481), (l_695 = ((g_694 = (((*l_686) = (func_48(&g_133, l_653) < l_653)) != ((safe_mul_func_uint16_t_u_u(((void*)0 != &l_621), 3UL)) || p_29))) , 0x10B3L)), g_3, (*g_17), &g_133), p_28, (*p_30))) , (*p_30))))
                    {
                        (*l_599) = (((*g_383) = func_48(&g_18, p_28)) | p_29);

                        ;
                    }
                    else
                    {
                        unsigned l_701 = 0UL;
                        int **l_723 = &l_599;
                        l_699 = (safe_unary_minus_func_int16_t_s((*g_446)));
                        (*l_599) = ((l_700 & l_701) | (0x7EL & l_582));
                        (*p_30) = (safe_lshift_func_uint8_t_u_u((((*l_642) = l_582) , (*g_17)), (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((0xE59B7B6DL > (l_701 || ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((*l_595) = ((*l_628) = (((-1L) & (safe_rshift_func_int8_t_s_u((l_582 | ((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*g_17) && (p_28 < (((safe_lshift_func_int8_t_s_u(p_28, 7)) >= p_28) > p_29))), 1)), 0xB67DL)) & 0x00D1L) >= 4294967295UL) , 2UL)), p_28))) | (-5L)))), (**g_480))) , (*g_224)) , (*g_383)), p_29)) != p_28))), 3)) > 1L), p_28))));
                        (***l_687) = (*g_343);
                    }

                    ;
                }

                ;
                ;

                l_653 = ((safe_unary_minus_func_uint8_t_u(((***l_681) = 0x7CL))) > (((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*l_734) = (safe_sub_func_uint8_t_u_u(g_731, (safe_lshift_func_uint16_t_u_u(1UL, 13))))), (*g_383))), (safe_mul_func_uint16_t_u_u((l_545 | (safe_mod_func_uint32_t_u_u((~0xB74B323FL), (safe_unary_minus_func_uint8_t_u((((*p_30) && (((*g_383) && (*g_383)) && (*l_599))) && p_29)))))), p_28)))) != 1L) || l_545));
                for (p_28 = 10; (p_28 > 22); p_28++)
                {
                    char l_750 = 0xC2L;
                    unsigned short ***l_767 = (void*)0;
                    unsigned short **l_769 = (void*)0;
                    unsigned short ***l_768 = &l_769;
                    unsigned short **l_770 = &g_383;
                    for (g_240 = (-23); (g_240 >= (-10)); g_240 = safe_add_func_uint16_t_u_u(g_240, 4))
                    {
                        (*p_30) = l_582;
                        (*g_343) = (**g_342);
                    }
                    l_648 = (safe_add_func_int32_t_s_s(((*p_31) = ((func_35(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_750 , 0UL), (*g_446))) != (0xDF6FL && (0x8CL != ((((*g_383) = (*g_383)) != p_29) & l_750)))), (((*l_644) = (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_648, 3)), p_29)), p_28))) , l_750))) , l_582), l_617, g_197, l_699) , 0xB4D1161AL) < p_29)), l_695));

                    ;
                    (**g_342) = (*p_32);

                    ;
                }

                ;
            }


            ;

            if ((((0x99C620EAL && (((safe_lshift_func_uint16_t_u_u(func_35(p_29, func_59(((**g_342) = l_599), &g_18, (**l_681), g_250), p_29, (safe_rshift_func_uint8_t_u_u((+(safe_mod_func_uint32_t_u_u(l_640, (*p_30)))), 2))), 11)) > p_28) > p_28)) == 1UL) | l_545))
            {
                unsigned l_800 = 8UL;
                unsigned l_802 = 0x7435D64AL;
                if ((*l_599))
                {
                    unsigned char *l_783 = &g_18;
                    unsigned **l_799 = (void*)0;
                    unsigned short *l_801 = &g_197;
                    int l_803 = 3L;
                    (*p_31) = func_35(p_28, &l_582, func_48(l_644, (*g_383)), l_797);

                    ;
                    (*p_31) = (safe_mod_func_uint8_t_u_u((***g_479), (safe_mod_func_int16_t_s_s(l_802, (0xA3L ^ (l_640 , (func_48(l_808, l_809) ^ (*g_17))))))));

                    ;
                }
                else
                {
                    (*l_599) = 0xD2E75E55L;
                    (*g_479) = (*g_479);
                }
            }
            else
            {
                (*p_32) = ((**g_342) = (void*)0);

                ;

            }
        }
        else
        {
            int l_810 = 0x9A49DB41L;
            unsigned short *l_813 = &l_797;
            (*p_31) = (((l_810 ^ (*g_383)) && (((*l_813) = ((*g_383) = (safe_rshift_func_int16_t_s_u(l_809, 3)))) , (safe_add_func_int16_t_s_s((*g_444), ((l_545 , l_582) && ((void*)0 == &g_317)))))) & func_48(l_644, p_28));

            ;
        }


        ;
        ;

        ;
        (*p_32) = &l_695;


    }


    ;
    ;
    ;

    ;
    for (g_396 = 17; (g_396 > 49); ++g_396)
    {
        unsigned char *l_818 = &g_396;
        int l_823 = 0xA2391798L;
        short *l_879 = (void*)0;
        unsigned ***l_968 = &l_621;
        if (func_48(l_818, l_526))
        {
            int l_830 = 1L;
            unsigned short l_865 = 0xA292L;
            short *l_877 = &g_104;
            int ****l_881 = &g_342;
            for (p_28 = 0; (p_28 >= (-7)); p_28 = safe_sub_func_int16_t_s_s(p_28, 7))
            {
                int **l_824 = &g_85;
                unsigned l_854 = 0x6DB5FD13L;
                int l_890 = 0x59E827ABL;
                unsigned char *l_892 = &g_396;
            }
            (*p_32) = (((*g_317) != (*l_621)) , (*p_32));
            (*g_343) = (*p_32);

            ;
            for (l_526 = 0; (l_526 < (-23)); l_526 = safe_sub_func_uint16_t_u_u(l_526, 3))
            {
                unsigned char l_909 = 0x90L;
                (***l_881) = (**g_342);
                (*p_31) = (safe_mod_func_int16_t_s_s((*g_880), l_909));
            }
        }
        else
        {
            unsigned short l_918 = 0x2F98L;
            unsigned char *l_936 = (void*)0;
            int l_950 = 0x098B1A74L;
            int l_951 = 0x931CACA2L;
            unsigned ***l_969 = &l_621;
            if ((l_695 = ((safe_unary_minus_func_uint16_t_u((((p_29 & l_856) & ((*p_30) = ((safe_add_func_int32_t_s_s((func_35(((safe_unary_minus_func_uint32_t_u((((safe_mul_func_uint16_t_u_u(((*g_383) = (safe_mod_func_int16_t_s_s(func_48((l_918 , (l_818 = &g_396)), func_48(((safe_lshift_func_uint8_t_u_u((((*g_17) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x09B9L, l_797)), ((0UL != ((void*)0 != (*g_317))) && p_28))), (*g_383)))) && l_856), 6)) , &g_133), l_918)), (*g_383)))), p_29)) >= (*g_224)) | p_28))) ^ (*p_30)), (*p_32), g_660, (*p_31)) , 6L), p_28)) != 0x0BBEL))) , (*g_383)))) != 0x1B02L)))
            {
                unsigned char *l_931 = &g_133;
                unsigned ***l_932 = (void*)0;
                unsigned ****l_933 = (void*)0;
                unsigned ****l_934 = &l_932;
                unsigned ***l_935 = &l_621;
                (**g_342) = func_59((*p_32), l_936, l_931, g_18);

                ;
            }
            else
            {
                short *l_941 = &g_104;
                short **l_942 = &l_941;
                short *l_943 = (void*)0;
                short **l_944 = &l_943;
                (**g_342) = (*p_32);

                ;
                (*p_30) = ((~(func_48((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((-2L), (((*g_224) > ((p_28 < 4UL) == 0x5398L)) && ((((*l_942) = l_941) != ((*l_944) = l_943)) > l_823)))), 0)) > ((l_526 >= (*g_224)) || (*p_30))) , (void*)0), l_945) & 0x6787L)) <= 65528UL);

                ;
            }

            ;
            l_856 = (*p_31);
            for (g_104 = 0; (g_104 < (-27)); g_104 = safe_sub_func_int16_t_s_s(g_104, 4))
            {
                for (g_240 = 0; (g_240 < (-6)); g_240--)
                {
                    if ((0xFD63L | l_950))
                    {
                        if (l_918)
                            break;
                        (*p_30) = (*g_170);
                        (*p_30) = l_951;
                    }
                    else
                    {
                        (**g_343) = ((safe_add_func_int8_t_s_s((1UL | (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*g_224), p_29)), l_856))), p_28)) || ((((safe_rshift_func_int16_t_s_s(5L, 8)) ^ (l_554 != (((safe_rshift_func_int8_t_s_u(p_28, l_823)) & 0x7ACDA737L) , &g_224))) | (*g_383)) | (*p_30)));
                        (*p_30) = l_545;
                    }
                }
                if ((***g_342))
                    continue;
                (*g_343) = (**g_342);
            }
            (*p_30) = (safe_add_func_uint8_t_u_u((((func_48(&g_133, (*g_383)) < l_526) ^ ((safe_add_func_uint8_t_u_u(((*g_17) = (safe_add_func_uint16_t_u_u(0x97CAL, ((*g_224) <= (l_968 == (l_969 = &l_621)))))), ((safe_sub_func_int8_t_s_s(((((l_823 = ((*g_383) != l_918)) || p_29) > 1L) ^ 0x300AA638L), 0x3EL)) ^ 65527UL))) | 0xE8L)) & p_29), l_945));

            ;
        }

        ;
        (*p_30) = (*p_31);
        for (g_141 = 0; (g_141 >= 10); g_141 = safe_add_func_uint32_t_u_u(g_141, 8))
        {
            short l_974 = (-6L);
            unsigned char *l_979 = (void*)0;
            char l_982 = (-7L);
            int l_983 = 0xD8949217L;
            (*p_31) = (*p_31);
            (**g_342) = (void*)0;

            ;
            if (l_974)
                break;
            (*p_31) = (l_983 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(func_35(l_823, func_59(&l_856, l_818, l_979, (0x2B2FL | (l_823 , (safe_lshift_func_int16_t_s_s(l_823, ((p_28 != ((*p_31) || 0x3FAF49E1L)) < (*g_224))))))), p_28, l_695), p_28)), l_982)));

            ;
        }

        ;
    }


    (*g_343) = (*p_32);

    ;
    return p_28;




}







static int func_35(unsigned short p_36, int * p_37, unsigned short p_38, int p_39)
{
    int *l_369 = &g_83;
    unsigned char *l_374 = &g_133;
    unsigned short *l_382 = &g_197;
    unsigned l_405 = 0xCCC11644L;
    unsigned char *l_408 = &g_18;
    unsigned char *l_419 = &g_396;
    int l_425 = 0x566FA9E7L;
    unsigned l_506 = 4294967292UL;
    (**g_342) = l_369;

    ;
    for (g_197 = 0; (g_197 <= 5); g_197++)
    {
        unsigned *l_375 = &g_102;
        int l_376 = 0xD8DE2978L;
        unsigned short *l_384 = &g_197;
        int l_385 = (-4L);
        unsigned char *l_478 = &g_18;
        int l_508 = 0xFCA33EDAL;
        int *l_511 = &g_83;
        (*g_343) = &p_39;

        ;
        (*g_343) = (void*)0;

        ;
    }

    ;
    for (g_133 = 0; (g_133 >= 6); g_133 = safe_add_func_uint16_t_u_u(g_133, 9))
    {
        int l_520 = 1L;
        unsigned char *l_523 = (void*)0;
        p_37 = ((*g_343) = (((safe_mod_func_int16_t_s_s((((func_48(l_374, p_38) && ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((*g_17), ((((*g_479) != (*g_479)) ^ l_520) , (-5L)))), 0)) == (((safe_mul_func_uint8_t_u_u(func_48(l_523, (*g_383)), p_36)) > p_38) >= p_38))) , l_520) || 0x2F1DL), 0x646BL)) || p_36) , (*g_343)));

        ;
        ;
        (*l_369) = func_48(l_374, (1UL < l_520));
        if ((*p_37))
            break;
        for (g_104 = 0; (g_104 > (-9)); g_104 = safe_sub_func_int8_t_s_s(g_104, 3))
        {
            p_37 = &l_425;

            ;
        }

        ;
    }

    ;

    return (*l_369);
}







static int * func_40(unsigned char p_41, short p_42, unsigned p_43, unsigned char p_44, unsigned char * p_45)
{
    int *l_362 = &g_3;
    unsigned char *l_363 = &g_18;
    unsigned *l_365 = &g_76;
    unsigned **l_364 = &l_365;
    unsigned ***l_366 = &l_364;
    (***g_342) = (***g_342);
    (**g_342) = func_59(l_362, l_363, &g_18, p_44);

    ;
    (*g_343) = (*g_343);
    return (**g_342);


}







static unsigned func_48(unsigned char * p_49, unsigned short p_50)
{
    short *l_353 = (void*)0;
    short **l_352 = &l_353;
    short *l_354 = (void*)0;
    short *l_355 = (void*)0;
    short *l_356 = (void*)0;
    unsigned *l_358 = &g_102;
    unsigned **l_357 = &l_358;
    int *l_359 = &g_83;
    (*l_359) = ((!((l_352 != (void*)0) > (-1L))) , ((g_104 = (-8L)) , ((void*)0 == l_357)));
    (**g_342) = l_358;

    ;
    (*l_359) = 1L;
    return p_50;
}







static unsigned char * func_51(int * p_52, unsigned char * p_53, unsigned char * p_54, char p_55)
{
    char l_77 = 4L;
    int **l_80 = (void*)0;
    unsigned l_218 = 0xA6B6FD11L;
    unsigned l_223 = 0xEBE4DD1CL;
    unsigned short *l_270 = &g_250;
    int **l_275 = &g_170;
    int l_313 = 0x7DAB6820L;
    char l_314 = (-4L);
    unsigned char *l_316 = &g_18;
    volatile unsigned ***l_319 = &g_317;
    int *l_321 = &g_83;
    short l_341 = 0xD629L;
    if (g_3)
    {
        char l_70 = 0x6FL;
        unsigned *l_75 = &g_76;
        unsigned char *l_198 = &g_18;
        int **l_199 = &g_170;
        (*l_199) = func_59(func_64(((safe_rshift_func_uint8_t_u_s((((*l_75) = ((l_70 > (safe_sub_func_uint16_t_u_u(l_70, p_55))) <= (safe_mod_func_uint32_t_u_u(((void*)0 == &p_52), l_70)))) & l_77), 5)) ^ (*p_54)), ((((safe_add_func_uint16_t_u_u(((((l_77 != p_55) >= l_77) && p_55) | g_3), g_3)) >= p_55) || g_3) , (void*)0), l_80), l_198, &g_18, p_55);

        ;
        for (g_133 = 3; (g_133 == 6); g_133 = safe_add_func_uint16_t_u_u(g_133, 6))
        {
            unsigned l_206 = 1UL;
            l_206 = ((**l_199) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*g_17) <= p_55), ((g_197 < g_104) <= (*g_170)))), 9)));
            if (g_133)
                goto lbl_320;
        }
    }
    else
    {
        short *l_209 = &g_169;
        int l_214 = 0x8B38BCC4L;
        unsigned char *l_217 = &g_133;
        char l_229 = 0x1BL;
        char *l_241 = &g_123;
        int **l_242 = (void*)0;
        int **l_243 = &g_85;
        unsigned char l_259 = 1UL;
        int **l_281 = &g_170;
        unsigned char *l_300 = &g_133;
        l_218 = ((safe_add_func_uint32_t_u_u((((&g_169 != l_209) , (0UL == ((g_102 , (((void*)0 == l_80) == (safe_rshift_func_int16_t_s_u((l_214 == g_141), 9)))) && (((*l_217) = (safe_rshift_func_uint8_t_u_s(l_214, g_76))) > (*g_17))))) <= p_55), g_102)) && g_83);
        p_52 = ((safe_mul_func_int8_t_s_s((!((*l_241) = (((safe_sub_func_int16_t_s_s(((*l_209) = ((((*g_17) == l_223) , (g_224 = &g_123)) != l_217)), ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*g_17) , (l_229 ^ ((*g_85) <= l_229))), (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((l_214 = (safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(g_240, (*g_17))) == p_55) , g_102), 0x2B3BL)) , l_214), l_229))), g_123)) >= g_3), l_229)))), (*g_17))) != g_133))) == p_55) && g_102))), (*g_17))) , &g_83);

        ;
        (*l_243) = func_64(l_229, &g_170, (p_55 , &p_52));

        ;
        ;
        if ((g_123 , (*p_52)))
        {
            unsigned l_246 = 0xBCB4418FL;
            unsigned char *l_276 = &l_259;
            unsigned l_294 = 0x727638A5L;
            int **l_299 = &g_85;
            for (p_55 = 3; (p_55 >= 13); p_55++)
            {
                short *l_247 = &g_169;
                unsigned short *l_248 = &g_197;
                unsigned short *l_249 = &g_250;
                int l_257 = 0x020862D8L;
                unsigned char *l_258 = &g_133;
                (*p_52) = (((p_55 >= (*g_170)) & (l_246 , 0xEF5AL)) | ((((*l_249) = (l_247 != (((*l_248) = p_55) , l_248))) == p_55) <= (*g_224)));
                l_257 = ((~(g_102 = 0xDAA68105L)) || ((!((safe_add_func_uint32_t_u_u(p_55, ((((*l_209) = (((-4L) & (safe_mod_func_uint8_t_u_u(0UL, (safe_mod_func_int8_t_s_s((*g_224), (65535UL ^ ((*l_249) = (l_246 || ((*p_52) = (((*l_243) = (*l_243)) == &g_83)))))))))) | l_257)) , p_53) != l_258))) >= 4UL)) == l_246));
                if ((*g_85))
                    continue;
                if (l_259)
                    break;
            }
            if (l_246)
            {
                int l_269 = 1L;
                unsigned short **l_271 = &l_270;
                unsigned *l_272 = (void*)0;
                unsigned *l_273 = (void*)0;
                unsigned *l_274 = &l_218;
                int ***l_277 = &l_275;
                p_52 = func_59(&g_3, l_276, l_276, g_141);
                (*l_277) = l_242;

                ;
            }
            else
            {
                char l_284 = (-7L);
                unsigned char **l_302 = &l_300;
                unsigned char ***l_301 = &l_302;
                for (l_218 = 22; (l_218 != 60); l_218++)
                {
                    unsigned short l_280 = 0x3D07L;
                    int *l_289 = &l_214;
                    (*l_243) = &g_83;

                    ;
                    for (l_223 = (-28); (l_223 == 22); l_223 = safe_add_func_int8_t_s_s(l_223, 1))
                    {
                        (*p_52) = ((~(0x5860L != l_284)) < (safe_sub_func_int8_t_s_s(((g_104 <= ((*g_224) == ((*g_224) | ((+(g_141 , (safe_mul_func_uint16_t_u_u(p_55, g_3)))) < p_55)))) != (**l_243)), 0xCFL)));
                        (*l_281) = &g_83;

                        ;
                        (*l_275) = l_289;

                        ;
                    }
                    if ((*g_85))
                        continue;
                }

                ;
                (*l_281) = func_59((*l_299), &l_259, l_300, p_55);

                ;
                (*l_301) = &p_53;

                ;
            }

            ;
        }
        else
        {
            char l_311 = 9L;
            int *l_312 = &l_214;
            unsigned char *l_315 = &l_259;
            (*p_52) = (((*g_17) , (safe_add_func_int16_t_s_s(((p_55 && g_104) && ((g_123 || (((l_314 = (((safe_lshift_func_int8_t_s_s((((*l_300) = (safe_mul_func_int16_t_s_s(((*l_209) = (((0x51L > ((safe_sub_func_int8_t_s_s((**l_275), ((~0xF5280B41L) & ((*l_312) = l_311)))) , p_55)) != (*g_224)) | (-1L))), l_313))) >= (*g_224)), (*g_224))) ^ (*g_17)) , (*g_170))) <= (**l_281)) < 0xFEL)) <= g_102)), (**l_243)))) >= 8L);
            return l_316;


        }

        ;
    }

    ;
    ;
    ;
    ;
lbl_320:
    (*l_319) = g_317;
    p_52 = l_321;

    ;
    if ((((*l_321) > ((p_55 | (*g_17)) | (((((safe_rshift_func_int8_t_s_s((~(1L || (~((*l_319) == &g_318)))), 7)) == (((void*)0 != p_54) , ((safe_lshift_func_uint16_t_u_u(((*l_270) = 0x176DL), g_104)) <= (*l_321)))) != g_123) , p_55) && 0xAD23L))) && 65535UL))
    {
        int l_326 = 0xF1623795L;
        int *l_327 = &g_83;
        (*l_321) = l_326;
        l_327 = (void*)0;

        ;
        (*l_321) = (((*g_224) = (*g_224)) || (*g_224));
    }
    else
    {
        short *l_333 = &g_169;
        short **l_332 = &l_333;
        int l_336 = 0L;
        int ***l_344 = &l_275;
        int ****l_345 = &l_344;
        (*p_52) = (((((safe_sub_func_int16_t_s_s((((*l_332) = l_270) != (g_133 , &g_169)), ((safe_add_func_int8_t_s_s(l_336, (((safe_lshift_func_int8_t_s_u(l_341, ((g_342 != ((*l_345) = l_344)) & (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((((p_55 && ((*p_52) && 0L)) == (*g_224)) != 0x0AL) & p_55), g_169)) > 251UL), 0x1DL))))) >= (*l_321)) | 0UL))) <= (*g_224)))) != 0UL) , 0xD016B272L) || 0x165AB94FL) || p_55);

        ;
    }
    return &g_133;


}







static int * func_59(int * p_60, unsigned char * p_61, unsigned char * p_62, unsigned p_63)
{
    return &g_83;


}







static int * func_64(unsigned short p_65, int ** p_66, int ** p_67)
{
    unsigned char l_81 = 4UL;
    int *l_82 = &g_83;
    int *l_84 = &g_83;
    unsigned char l_109 = 0xBFL;
    char *l_195 = &g_123;
    unsigned l_196 = 0xF8D76BD6L;
    if (((*l_82) = l_81))
    {
        g_85 = l_84;
    }
    else
    {
        unsigned char *l_87 = &g_18;
        unsigned l_90 = 1UL;
        int l_110 = 0xCE507631L;
        int **l_112 = &g_85;
        unsigned l_132 = 4294967295UL;
        int l_154 = 1L;
        if ((*g_85))
        {
            return &g_83;


        }
        else
        {
            unsigned char *l_86 = &l_81;
            unsigned char *l_88 = &l_81;
            int l_96 = 0x1C17FA6FL;
            int **l_111 = (void*)0;
            char l_160 = 0x33L;
            unsigned l_193 = 0UL;
            (*g_85) = (l_86 != (l_88 = l_87));

            ;
            if ((*g_85))
            {
                unsigned short l_89 = 0xFF81L;
                int *l_97 = &g_83;
                int **l_98 = &l_82;
                unsigned *l_99 = &g_76;
                unsigned *l_100 = &l_90;
                unsigned *l_101 = &g_102;
                short *l_103 = &g_104;
                (*g_85) = (l_89 && (((g_76 >= l_90) , (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(((*l_103) = (0L & ((+l_96) >= ((*l_101) = ((*l_100) = ((*l_99) = (g_3 > (((*l_98) = l_97) == (void*)0)))))))), (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((p_65 , 0xB69CL) == g_3), l_109)), 0)))))) , l_96), 0x98L))) > l_110));
                if (((*g_85) ^ (((0xD4L && ((p_65 < ((((((p_66 = (l_111 = &g_85)) == (l_98 = l_112)) || 0x6D9C50E9L) , (g_3 < ((&l_109 == (void*)0) >= g_3))) , p_65) || (**l_112))) , 1L)) ^ p_65) , (*g_85))))
                {
                    (*l_82) = ((void*)0 == &g_76);
                }
                else
                {
                    char *l_122 = &g_123;
                    int l_124 = 0x86747B33L;
                    (**l_98) = (safe_mod_func_int8_t_s_s((((*l_122) = ((safe_mul_func_uint16_t_u_u((&l_81 != (void*)0), (!(safe_rshift_func_uint8_t_u_s(((p_65 = (safe_rshift_func_int16_t_s_s(p_65, 13))) <= (&l_90 == &l_90)), 7))))) > (g_83 || (safe_unary_minus_func_uint32_t_u(((*l_100) = g_18)))))) | l_124), (**l_112)));
                }

                ;
                ;
                ;
                for (g_83 = 0; (g_83 > (-4)); g_83 = safe_sub_func_int8_t_s_s(g_83, 3))
                {
                    int *l_127 = &l_110;
                    int **l_153 = &l_82;
                    int l_159 = 0L;
                    (*l_127) = (*l_82);
                    if ((safe_sub_func_int16_t_s_s(((*l_103) = g_18), ((*l_127) > (safe_mod_func_int16_t_s_s(p_65, l_132))))))
                    {
                        (*l_98) = &g_3;
                        (*l_127) = (((((*l_101) = g_83) , p_65) , (g_133 = 0x0957L)) | (**l_112));
                    }
                    else
                    {
                        (*l_127) = (*l_127);
                    }
                    if (((safe_sub_func_int16_t_s_s(((*l_103) = (&g_102 != (void*)0)), (*l_84))) , (*g_85)))
                    {
                        int *l_136 = &g_83;
                        int **l_137 = (void*)0;
                        int **l_138 = &l_127;
                        (*l_138) = (p_65 , ((*l_98) = l_136));

                        ;
                    }
                    else
                    {
                        int **l_139 = (void*)0;
                        int **l_140 = &l_97;
                        (*l_112) = &g_3;

                        ;
                        (*l_140) = ((*l_112) = (*l_98));

                        ;
                        (*l_140) = (*l_98);
                        l_154 = (0xA321L & ((((((g_141 = 0x4F4469BDL) <= ((void*)0 != &g_133)) <= (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u(((*l_127) = ((safe_add_func_uint32_t_u_u(0xDC7329A4L, (safe_lshift_func_uint8_t_u_s(p_65, 2)))) != (&l_82 != ((safe_lshift_func_uint16_t_u_u(p_65, 8)) , (p_65 , l_153))))), g_3)))) , g_102), 4294967291UL))) | 0xE021301AL) || 2L) <= 0UL));
                    }

                    ;
                    l_159 = ((*g_17) >= ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(0UL, 0L)) , (g_141 >= p_65)), g_18)) | (*l_97)));
                }

                ;
                ;
                ;
            }
            else
            {
                if ((*g_85))
                {
                    if (l_160)
                    {
                        (*g_85) = 1L;
                        return &g_83;


                    }
                    else
                    {
                        char l_161 = 0x67L;
                        (*l_82) = l_161;
                    }
                }
                else
                {
                    int *l_162 = &l_154;
                    (*l_162) = ((*l_84) = (*g_85));
                    for (g_104 = (-30); (g_104 <= (-1)); g_104 = safe_add_func_uint32_t_u_u(g_104, 5))
                    {
                        int l_165 = (-1L);
                        short *l_168 = &g_169;
                        (*l_84) = ((2L >= ((l_165 == (1L <= (safe_add_func_int16_t_s_s(0x8FE9L, (0x1BL & (((0UL != (((*l_168) = p_65) > (&g_133 != l_87))) < g_104) > (-1L))))))) != 0x6B8AB05DL)) <= (*g_17));
                        g_170 = ((*l_112) = &g_3);

                        ;
                        ;
                    }

                    ;

                    (*l_162) = ((safe_rshift_func_uint16_t_u_s((*l_162), 15)) | (safe_mul_func_uint8_t_u_u(255UL, (safe_rshift_func_uint8_t_u_s(p_65, 0)))));
                }

                ;

                return &g_83;


            }

            ;
            ;
            ;
            ;
            for (l_110 = (-30); (l_110 <= (-22)); l_110 = safe_add_func_uint8_t_u_u(l_110, 6))
            {
                unsigned *l_184 = &g_102;
                unsigned **l_183 = &l_184;
                unsigned *l_185 = &g_102;
                short *l_192 = &g_104;
                unsigned *l_194 = &l_90;
                (*g_170) = (safe_rshift_func_int8_t_s_u(((p_65 < 0x9A9CB853L) == g_18), ((*l_86) = (safe_rshift_func_uint16_t_u_s((((**l_112) && (((*g_85) ^ ((*l_194) = (((l_185 = ((*l_183) = &g_76)) != (void*)0) == ((safe_mod_func_int16_t_s_s((+p_65), (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_192) = g_76), 0x22BFL)), (*g_17))))) >= l_193)))) || 0xD5C63F28L)) >= g_83), 10)))));

                ;
                ;
            }
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    g_197 = (((*l_195) = (p_65 , 0xB7L)) , ((*l_84) = (4294967289UL && l_196)));
    return &g_3;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
