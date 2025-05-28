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



static int g_6 = 0xD7953644L;
static unsigned short g_62 = 0xE5C4L;
static int g_64 = 0x8597A0B8L;
static int *g_63 = &g_64;
static int g_76 = 0x3095C3C6L;
static unsigned char g_78 = 6UL;
static int g_97 = 0x852B186EL;
static char g_153 = 0xF0L;
static volatile unsigned short *g_190 = (void*)0;
static volatile unsigned short **g_189 = &g_190;
static char *g_203 = (void*)0;
static char **g_202 = &g_203;
static unsigned short g_225 = 65531UL;
static char g_229 = 0xACL;
static volatile short g_259 = 0L;
static volatile short *g_258 = &g_259;
static volatile short **g_257 = &g_258;
static unsigned char ***g_310 = (void*)0;
static volatile int g_314 = 0x42C5C37AL;
static unsigned char g_328 = 0x29L;
static volatile unsigned char *g_368 = (void*)0;
static volatile unsigned char **g_367 = &g_368;
static unsigned g_375 = 0xDB585070L;
static short g_414 = 0xF98AL;
static int g_430 = 0x1E54D29FL;
static unsigned g_453 = 0UL;
static volatile int g_457 = 0x5CDB08AEL;
static volatile int *g_456 = &g_457;
static volatile int **g_455 = &g_456;
static volatile int ***g_454 = &g_455;
static unsigned short g_479 = 0x95C8L;
static int g_517 = 0x9103300BL;
static unsigned g_527 = 6UL;
static unsigned *g_526 = &g_527;
static short g_533 = (-9L);
static unsigned short g_596 = 8UL;
static volatile char g_646 = (-6L);
static volatile char *g_645 = &g_646;
static volatile char **g_644 = &g_645;
static volatile char ***g_643 = &g_644;
static volatile char ****g_642 = &g_643;
static volatile int *g_679 = &g_314;
static volatile int **g_678 = &g_679;
static unsigned short *g_750 = (void*)0;
static unsigned short **g_749 = &g_750;
static unsigned short ***g_748 = &g_749;
static unsigned short ****g_747 = &g_748;
static volatile unsigned g_806 = 0x686828E3L;
static int g_828 = 0xF61B37E8L;
static char g_995 = 0x9DL;
static short g_1005 = 0L;
static int **g_1037 = (void*)0;
static int ***g_1036 = &g_1037;
static unsigned **g_1050 = &g_526;
static unsigned ***g_1049 = &g_1050;
static short g_1061 = 4L;
static unsigned g_1065 = 8UL;
static int g_1067 = 0x821D58C8L;
static unsigned g_1132 = 2UL;
static unsigned g_1159 = 0xF5181777L;
static short g_1201 = 1L;
static int g_1218 = 0xB07BB037L;
static unsigned char *g_1235 = &g_78;
static unsigned char **g_1234 = &g_1235;
static short g_1259 = (-1L);
static int *g_1262 = (void*)0;
static int g_1270 = 0xB847D618L;



static int func_1(void);
static int func_2(unsigned char p_3, unsigned short p_4);
static unsigned char func_11(int p_12);
static unsigned short func_26(unsigned p_27, unsigned char p_28, unsigned p_29);
static unsigned func_30(unsigned p_31, unsigned p_32, short p_33, int p_34, short p_35);
static unsigned short func_43(int p_44, unsigned p_45, int p_46);
static int func_47(unsigned p_48);
static char func_51(int p_52);
static char func_55(int p_56, unsigned char p_57, unsigned char p_58);
static unsigned char func_59(int p_60);
static int func_1(void)
{
    unsigned short l_5 = 0x7A87L;
    int l_1124 = (-7L);
    int l_1156 = 0xCB0BC56AL;
    int **l_1160 = (void*)0;
    int l_1211 = 0L;
    unsigned short ****l_1214 = &g_748;
    int *l_1231 = &l_1124;
    unsigned char **l_1236 = &g_1235;
    unsigned ****l_1246 = &g_1049;
    l_1124 = func_2(l_5, g_6);
    l_1124 = ((void*)0 == (**g_747));
    return g_6;
}







static int func_2(unsigned char p_3, unsigned short p_4)
{
    unsigned l_13 = 4294967295UL;
    int l_1059 = (-8L);
    short *l_1060 = &g_1061;
    int l_1062 = 0xE9894ADBL;
    unsigned *l_1063 = (void*)0;
    unsigned *l_1064 = &g_1065;
    int *l_1066 = &g_1067;
    int *l_1068 = &g_76;
    int **l_1091 = (void*)0;
    if (((*l_1068) = (g_6 && ((safe_lshift_func_int8_t_s_s(0xCFL, (safe_sub_func_uint8_t_u_u(func_11(l_13), ((safe_add_func_int32_t_s_s(((*l_1066) = (g_828 | ((*l_1064) = ((l_1062 = ((*l_1060) = (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(p_3, (l_13 ^ (safe_rshift_func_uint8_t_u_s(0UL, 0))))) && p_4), 255UL)) == l_1059) || l_1059))) <= g_828)))), 0xFDD304CFL)) && g_1061))))) & g_78))))
    {
        int *l_1070 = (void*)0;
        int **l_1069 = &l_1070;
        int l_1075 = 0xEECC5C08L;
        unsigned char **l_1100 = (void*)0;
        unsigned char ***l_1099 = &l_1100;
        int l_1101 = 0x98F376B0L;
        (*l_1068) = p_3;
        if ((l_1069 != (void*)0))
        {
            unsigned l_1071 = 4294967294UL;
            (*l_1066) = l_1071;
        }
        else
        {
            unsigned char l_1074 = 6UL;
            for (l_1062 = 26; (l_1062 == 26); ++l_1062)
            {
                (**g_454) = (void*)0;
            }
            l_1075 = l_1074;
            return p_4;
        }
        (*l_1068) = 0x901B73B4L;
        if ((!l_1075))
        {
            int **l_1076 = &l_1066;
            unsigned l_1079 = 0xDF76058BL;
            unsigned short *l_1084 = &g_479;
            unsigned short l_1085 = 0x9152L;
            unsigned char *l_1086 = &g_78;
            int l_1109 = 0x26CAA14BL;
            unsigned ***l_1110 = &g_1050;
            (*l_1076) = &l_1075;
            (*l_1076) = &l_1062;
            if ((safe_rshift_func_int8_t_s_s(func_30(l_1079, ((*l_1064) = 0xA33E1DEAL), ((safe_lshift_func_int16_t_s_s((*g_258), 4)) != ((*l_1086) = func_30(p_3, (l_1085 && l_1075), g_1061, (**l_1076), g_517))), (*l_1068), l_1075), 2)))
            {
                int **l_1089 = &l_1070;
                int ***l_1090 = &l_1089;
                unsigned *l_1096 = &g_375;
                (**l_1076) = func_47(((*l_1096) = (((((*l_1086) = p_4) != (((*l_1090) = l_1089) != l_1091)) | ((void*)0 == &l_1070)) || (func_47(p_4) & (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((-4L), ((*l_1086) = (func_30((*l_1066), p_3, p_3, l_1075, p_4) | p_4)))) < (**l_1076)), l_1075))))));
            }
            else
            {
                (**l_1076) = ((safe_sub_func_uint16_t_u_u(((void*)0 != l_1099), (+(-10L)))) > (*l_1068));
                return l_1101;
            }
            for (g_517 = 23; (g_517 > (-30)); --g_517)
            {
                int *l_1106 = &g_76;
                for (l_1085 = 0; (l_1085 == 48); l_1085 = safe_add_func_uint16_t_u_u(l_1085, 9))
                {
                    l_1106 = l_1106;
                }
                (*l_1106) = (func_47((((safe_lshift_func_uint8_t_u_s(l_1109, (****g_642))) != (0xF154L || ((*l_1106) == (l_1110 == (void*)0)))) && (safe_lshift_func_uint8_t_u_s(p_3, 2)))) > (l_1091 == &g_679));
            }
        }
        else
        {
            return p_3;
        }
    }
    else
    {
        unsigned l_1113 = 0UL;
        (**g_454) = (**g_454);
        (*l_1066) = ((func_26((*l_1068), l_1113, p_3) & (-1L)) >= ((*l_1060) = (g_430 | (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((0x2853AA3BL == p_3) <= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_4, 5)), l_1113)), p_3))), l_1113)), p_3)))));
        (*l_1068) = (*l_1066);
    }
    return p_3;
}







static unsigned char func_11(int p_12)
{
    unsigned short l_38 = 0UL;
    int l_557 = 1L;
    int *l_991 = &l_557;
    char *l_994 = &g_995;
    unsigned char l_1017 = 1UL;
    unsigned **l_1043 = &g_526;
    for (g_6 = 0; (g_6 == 20); g_6++)
    {
        unsigned char *l_77 = &g_78;
        int l_253 = (-1L);
        int *l_254 = &g_76;
        int *l_558 = &g_517;
    }
    l_991 = &l_557;
    (*g_456) = 0xFB973533L;
    if (((safe_sub_func_uint8_t_u_u(func_43((*l_991), (*l_991), (**g_678)), (*l_991))) >= ((*l_994) = p_12)))
    {
        int l_1004 = 0x822E68F8L;
        int l_1006 = 0xD3F5E791L;
        int l_1007 = (-9L);
        (*l_991) = (safe_mod_func_int16_t_s_s(func_47(((*g_258) <= (safe_mod_func_uint32_t_u_u((p_12 >= (l_1007 = (l_1006 = (safe_rshift_func_int16_t_s_s(((g_328 | (*l_991)) | 2UL), ((l_1004 = ((p_12 > 1L) > (safe_sub_func_int8_t_s_s(p_12, p_12)))) >= g_1005)))))), (*g_526))))), p_12));
    }
    else
    {
        int l_1008 = 0x766BDADBL;
        int l_1016 = 0x61DED009L;
        int *l_1018 = &g_64;
        unsigned ***l_1047 = (void*)0;
        (*l_1018) = ((-1L) ^ (l_1008 & (safe_rshift_func_uint8_t_u_u(p_12, (g_328 = (((safe_rshift_func_uint8_t_u_s(0xF6L, 6)) > (safe_sub_func_uint16_t_u_u((l_1016 = ((safe_unary_minus_func_uint8_t_u(((*l_991) = 253UL))) || (*l_991))), p_12))) && (0x7775FCE3L & ((*g_526) = (l_1017 & p_12)))))))));
        for (g_6 = 0; (g_6 > (-16)); --g_6)
        {
            unsigned short l_1026 = 0x5ECBL;
            int *l_1034 = &l_1008;
            int **l_1033 = &l_1034;
            int ***l_1032 = &l_1033;
            unsigned **l_1044 = (void*)0;
            unsigned ****l_1048 = (void*)0;
            for (g_995 = 0; (g_995 >= (-8)); --g_995)
            {
                int **l_1023 = &l_991;
                (*l_1023) = &l_557;
                for (g_375 = 0; (g_375 < 56); g_375 = safe_add_func_int32_t_s_s(g_375, 9))
                {
                    unsigned l_1041 = 4294967293UL;
                    if ((l_1026 & 0x1DE169ADL))
                    {
                        if (p_12)
                            break;
                    }
                    else
                    {
                        int l_1027 = (-1L);
                        int ****l_1035 = &l_1032;
                        short *l_1040 = &g_533;
                        char *l_1042 = &g_229;
                        (*l_1018) = l_1027;
                        (**g_454) = (**g_454);
                        (**g_454) = (**g_454);
                        (*l_991) = ((l_1027 = (safe_rshift_func_int8_t_s_u(((*l_1042) = func_55(p_12, ((*g_526) ^ func_47(((safe_sub_func_int8_t_s_s((-1L), ((((*l_1035) = l_1032) != (g_1036 = (void*)0)) ^ (-8L)))) || (p_12 || (safe_mod_func_uint8_t_u_u((((((*l_1040) = (**g_257)) & (((*g_526) || (*g_526)) < (*l_991))) != l_1041) >= 0xB72E9C5AL), (*l_1018))))))), g_430)), p_12))) || p_12);
                    }
                    if (l_1041)
                        break;
                    (*l_1023) = &p_12;
                    l_1044 = l_1043;
                }
            }
            (*l_1018) = (p_12 && (safe_sub_func_uint16_t_u_u(p_12, (l_1047 != (g_1049 = &l_1043)))));
        }
        (*l_1018) = (-5L);
    }
    return p_12;
}







static unsigned short func_26(unsigned p_27, unsigned char p_28, unsigned p_29)
{
    int *l_562 = &g_517;
    char *l_563 = &g_153;
    short *l_570 = &g_533;
    int *l_571 = &g_97;
    unsigned short ****l_577 = (void*)0;
    unsigned l_586 = 0UL;
    unsigned char l_614 = 0x50L;
    unsigned char *l_620 = &g_328;
    unsigned char **l_619 = &l_620;
    unsigned short l_630 = 0xA161L;
    unsigned short *l_716 = &l_630;
    unsigned short **l_715 = &l_716;
    unsigned short ***l_714 = &l_715;
    short l_755 = 0L;
    char l_836 = 3L;
    unsigned **l_967 = &g_526;
    unsigned ***l_966 = &l_967;
    int l_988 = (-1L);
    unsigned char ***l_989 = &l_619;
lbl_572:
    (*l_562) = ((**g_257) | g_430);
    if ((((*l_563) = p_28) == ((safe_add_func_uint16_t_u_u(8UL, (((safe_sub_func_uint32_t_u_u(func_30((*g_526), p_27, (((*l_571) = (p_29 >= ((*l_570) = ((((*l_562) = (+((((((p_29 != (safe_rshift_func_int8_t_s_u((*l_562), (*l_562)))) || 0xD9L) == (*g_258)) < g_328) & g_76) & g_64))) >= (*g_526)) != 0x14L)))) == 1UL), g_225, p_29), g_76)) >= g_229) & 0x0CB13159L))) <= g_430)))
    {
        int *l_575 = (void*)0;
        if (g_76)
            goto lbl_572;
        for (g_479 = 0; (g_479 <= 50); g_479 = safe_add_func_uint32_t_u_u(g_479, 9))
        {
            int l_576 = 7L;
            g_63 = l_575;
            (*l_562) = (((*l_563) = (l_576 && (g_225 = 0UL))) || (func_47(g_533) | 0x29ADL));
            (*l_562) = 0xAED78E0FL;
        }
    }
    else
    {
        unsigned short *l_581 = &g_479;
        unsigned short **l_580 = &l_581;
        unsigned short ***l_579 = &l_580;
        unsigned short ****l_578 = &l_579;
        int l_587 = 0x09E194B2L;
        short l_686 = 0x49FDL;
        unsigned l_730 = 4294967294UL;
        unsigned short **l_771 = &g_750;
        char l_783 = 1L;
        int l_826 = (-7L);
        unsigned **l_872 = &g_526;
        int l_877 = 0x2E7DAC5EL;
        char ***l_897 = &g_202;
        int **l_941 = (void*)0;
        int ***l_940 = &l_941;
        char l_985 = 0x5EL;
    }
    (*l_989) = &l_620;
    return p_27;
}







static unsigned func_30(unsigned p_31, unsigned p_32, short p_33, int p_34, short p_35)
{
    short *l_559 = &g_533;
    int *l_560 = (void*)0;
    int l_561 = (-7L);
    g_517 = (((*l_559) = 0x5F4FL) != ((void*)0 != &g_314));
    return l_561;
}







static unsigned short func_43(int p_44, unsigned p_45, int p_46)
{
    unsigned char l_429 = 0xF6L;
    int l_431 = 0xDD1FA9EBL;
    short ***l_482 = (void*)0;
    int l_498 = (-1L);
    unsigned char *l_505 = &l_429;
    unsigned char **l_504 = &l_505;
    unsigned char *l_507 = (void*)0;
    unsigned char **l_506 = &l_507;
    int *l_556 = &l_431;
lbl_555:
    if ((l_431 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((((l_429 < func_47(g_78)) & l_429) == (*g_258)), p_45)) != l_429), (l_429 | (g_430 = g_78)))), p_46))))
    {
        unsigned l_432 = 4294967291UL;
        char l_438 = 1L;
        unsigned char *l_459 = &g_328;
        unsigned char **l_458 = &l_459;
        l_432 = p_45;
        if ((*g_63))
        {
            int **l_433 = (void*)0;
            int **l_434 = &g_63;
            (*l_434) = (void*)0;
        }
        else
        {
            int **l_435 = &g_63;
            unsigned l_441 = 0x036232CEL;
            unsigned *l_444 = &l_441;
            short *l_448 = &g_414;
            char l_450 = 0x79L;
            (*l_435) = &g_76;
lbl_449:
            (**l_435) = ((l_431 = (safe_sub_func_uint32_t_u_u(l_438, (safe_mod_func_int16_t_s_s((**l_435), l_441))))) & l_432);
            if (l_432)
                goto lbl_445;
lbl_445:
            (*g_63) = ((((*l_444) = (safe_rshift_func_int16_t_s_u(l_431, 4))) && 0xABC388CCL) & 0x1644D021L);
            if (((**l_435) = ((**g_257) == (safe_add_func_int16_t_s_s(((*l_448) = (((void*)0 != &g_367) || g_97)), g_375)))))
            {
                if (p_46)
                    goto lbl_449;
                return p_46;
            }
            else
            {
                short **l_484 = (void*)0;
                short ***l_483 = &l_484;
                int l_497 = 0xCDA77D31L;
                if (l_450)
                {
                    for (l_432 = 0; (l_432 != 42); l_432++)
                    {
                        (**l_435) = 1L;
                        if (l_432)
                            break;
                        (*g_63) = (g_453 & (g_454 != (void*)0));
                    }
                }
                else
                {
                    unsigned char ***l_460 = (void*)0;
                    unsigned char ***l_461 = &l_458;
                    unsigned char **l_463 = &l_459;
                    unsigned char ***l_462 = &l_463;
                    unsigned char **l_464 = (void*)0;
                    int l_478 = 0x2B5EFFBAL;
                    unsigned **l_485 = &l_444;
                    l_464 = ((*l_462) = ((*l_461) = l_458));
                    for (g_225 = 18; (g_225 != 3); g_225 = safe_sub_func_uint16_t_u_u(g_225, 9))
                    {
                        unsigned short l_477 = 65530UL;
                        (*g_456) = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((*g_202) != (void*)0), l_477)) ^ 4294967288UL) < (0xCAD5CFB6L && g_229)), 5)) >= p_44), 4)) | ((0xC1C6L || 0xD1BEL) && 0UL)), p_45));
                        if ((*g_63))
                            continue;
                        return l_478;
                    }
                    l_478 = func_55((**l_435), (g_479 & ((safe_sub_func_uint16_t_u_u((l_482 != l_483), (((**g_455) | (((~l_431) == ((((-1L) <= g_430) > ((((*l_485) = &p_45) == g_456) && 0xB0A7L)) <= 0x4C593CEEL)) != p_46)) == g_78))) != p_45)), p_46);
                }
                (*g_455) = (*g_455);
                for (g_229 = 19; (g_229 != 11); g_229 = safe_sub_func_uint32_t_u_u(g_229, 1))
                {
                    unsigned l_488 = 0x0AF87F9DL;
                    l_431 = l_488;
                    g_63 = (*l_435);
                    return p_46;
                }
                (**l_435) = (((((((((safe_rshift_func_uint16_t_u_u(l_429, l_431)) || (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0x56L, 3)), (safe_rshift_func_int16_t_s_s(((-8L) | (p_46 != (p_46 != l_431))), (**l_435))))) >= (*g_258)) & l_498)) > l_497) || 4294967295UL) >= p_46) || p_45) == 0x0DL) >= l_497) == (*g_63));
            }
        }
    }
    else
    {
        short l_503 = (-1L);
        l_503 = (safe_add_func_uint32_t_u_u(l_498, ((safe_sub_func_int8_t_s_s(p_44, l_429)) & (p_44 <= p_46))));
    }
    if ((((*l_504) = &l_429) != ((*l_506) = &g_328)))
    {
        int *l_508 = &g_76;
        l_508 = l_508;
        (**g_454) = (void*)0;
        (**g_454) = (void*)0;
        return l_429;
    }
    else
    {
        unsigned char ***l_509 = &l_504;
        int l_529 = (-6L);
        (*l_509) = &l_505;
        for (g_229 = 24; (g_229 > 2); g_229--)
        {
            int l_514 = 8L;
            unsigned l_515 = 3UL;
            unsigned *l_516 = &g_375;
            unsigned *l_518 = &l_515;
            int *l_519 = &l_498;
            unsigned **l_528 = &g_526;
            short *l_532 = &g_533;
            unsigned l_534 = 0x56A2D0B8L;
            if (func_55(((*l_519) = func_47((safe_sub_func_uint16_t_u_u(l_514, func_47(((*l_518) = (g_517 = ((*l_516) = (g_453 = l_515))))))))), (safe_sub_func_uint16_t_u_u((((*l_532) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((((*l_528) = g_526) != (void*)0), ((l_529 & (safe_mod_func_int16_t_s_s(l_514, p_45))) <= 65535UL))), 5))) ^ 0xD2D5L), p_45)), l_514))
            {
                unsigned l_545 = 4294967295UL;
                (*g_455) = (**g_454);
                if (l_534)
                    continue;
                (*g_456) = (l_529 = ((((safe_add_func_int8_t_s_s(p_45, 0x6FL)) && (((*l_532) = l_529) || (safe_add_func_int8_t_s_s((((**l_528) = ((safe_lshift_func_uint8_t_u_u(0x44L, (p_45 <= (((g_153 = (safe_add_func_int16_t_s_s(p_44, p_45))) <= 0x87L) <= (safe_add_func_int32_t_s_s((func_55(l_545, p_46, l_529) | l_529), p_46)))))) | 0x3CL)) >= 0xC6FA9665L), 0x71L)))) & 1L) >= g_97));
                return p_45;
            }
            else
            {
                int l_549 = (-7L);
                int *l_552 = &g_97;
                int **l_553 = (void*)0;
                int **l_554 = &l_552;
                (*g_456) = (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u(p_44)) & l_549), (safe_add_func_int16_t_s_s(p_45, p_46))));
                l_431 = ((*g_63) = p_44);
                if ((**g_455))
                    break;
                (*l_554) = l_552;
            }
        }
        if (p_44)
            goto lbl_555;
    }
    (**g_455) = ((*l_556) = (***g_454));
    return p_46;
}







static int func_47(unsigned p_48)
{
    int **l_405 = &g_63;
    unsigned short *l_410 = &g_225;
    unsigned short **l_411 = &l_410;
    unsigned short *l_412 = &g_225;
    short *l_413 = &g_414;
    char *l_415 = &g_153;
    int *l_416 = &g_97;
    char ***l_417 = &g_202;
    (*l_405) = &g_64;
    (**l_405) = (*g_63);
    if (((*l_416) = ((**l_405) = (safe_mod_func_int16_t_s_s(((*l_413) = ((safe_mod_func_uint8_t_u_u(252UL, (**l_405))) <= (((*l_411) = l_410) == (l_412 = l_412)))), (((*l_415) = (p_48 == p_48)) ^ p_48))))))
    {
        char ****l_418 = &l_417;
        char ***l_420 = (void*)0;
        char ****l_419 = &l_420;
        int l_421 = (-2L);
        int ***l_422 = &l_405;
        l_421 = (&g_202 != ((*l_419) = ((*l_418) = l_417)));
        (*l_422) = &l_416;
        (*l_416) = (***l_422);
        (***l_422) = (func_59((***l_422)) | 0x9EL);
    }
    else
    {
        (*l_405) = (*l_405);
        return g_62;
    }
    return (*l_416);
}







static char func_51(int p_52)
{
    int **l_255 = &g_63;
    unsigned short l_256 = 0x14D4L;
    unsigned l_261 = 0xFB24213AL;
    unsigned l_268 = 0xD30DA1FFL;
    unsigned char *l_273 = &g_78;
    char ***l_278 = (void*)0;
    char *l_279 = (void*)0;
    char *l_280 = (void*)0;
    char *l_281 = &g_153;
    short l_282 = 0xF90DL;
    unsigned short **l_322 = (void*)0;
    unsigned short ***l_321 = &l_322;
    char **l_334 = (void*)0;
    int *l_340 = &g_76;
    int l_354 = 1L;
    int l_377 = (-2L);
    (*l_255) = &p_52;
    if (l_256)
    {
        volatile short ***l_260 = &g_257;
        (*l_255) = &p_52;
        (*l_255) = &p_52;
        (*l_260) = g_257;
        (*l_255) = &g_64;
    }
    else
    {
        return l_261;
    }
    if (((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((func_59((safe_lshift_func_uint16_t_u_u((+((~func_55(l_268, (((**l_255) = (**l_255)) != ((*g_189) == (void*)0)), (safe_rshift_func_int16_t_s_s(((((*l_281) = (safe_mod_func_uint16_t_u_u(((p_52 >= (l_273 != &g_78)) >= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((g_97 = (((l_278 != &g_202) ^ (-1L)) && 0x3C9241BAL)), (-8L))), p_52)) & l_256)), l_268))) != p_52) >= 1UL), p_52)))) <= p_52)), l_256))) != l_261), l_256)), 0)) < l_282))
    {
        int *l_283 = &g_97;
        unsigned char ***l_311 = (void*)0;
        if ((*g_63))
        {
            unsigned char **l_295 = &l_273;
            char ***l_300 = &g_202;
            (*l_255) = l_283;
            (*l_255) = &g_76;
            for (g_97 = 18; (g_97 < 17); --g_97)
            {
                unsigned char **l_292 = &l_273;
                unsigned char ***l_293 = (void*)0;
                unsigned char ***l_294 = &l_292;
                char ***l_298 = &g_202;
                char ****l_299 = &l_278;
                char ****l_301 = &l_300;
                int l_302 = 0x4656B486L;
                unsigned *l_303 = &l_261;
                p_52 = ((safe_lshift_func_uint8_t_u_u((*l_283), (safe_rshift_func_int8_t_s_s(p_52, (+p_52))))) > (safe_add_func_uint32_t_u_u(((*l_303) = func_55(((p_52 >= ((((*l_294) = l_292) == l_295) ^ (safe_mod_func_int16_t_s_s((((((*l_299) = l_298) != ((*l_301) = l_300)) & ((0x4ED2L & 0UL) >= l_302)) | 1L), p_52)))) && (*l_283)), p_52, g_259)), 4294967287UL)));
            }
        }
        else
        {
            unsigned short ****l_323 = &l_321;
            short *l_324 = &l_282;
            int l_325 = 0L;
            (*g_63) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((((l_311 = g_310) == (void*)0) > (safe_add_func_int8_t_s_s(0x5DL, p_52))), g_314)) | (safe_rshift_func_uint16_t_u_s(p_52, ((*l_324) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((*l_283), (((*l_323) = l_321) != (void*)0))), (**l_255))) ^ 0xB87AEF85L))))), l_325)), p_52));
        }
        g_63 = l_283;
        (*l_255) = &g_64;
        (*l_255) = &g_97;
    }
    else
    {
        char **l_332 = &l_279;
        int l_353 = 0x3A6036A4L;
        int l_357 = 4L;
        for (p_52 = (-26); (p_52 < 2); p_52 = safe_add_func_uint32_t_u_u(p_52, 6))
        {
            unsigned l_329 = 4294967293UL;
        }
        (**l_255) = (~p_52);
        if ((**l_255))
        {
            int *l_338 = &g_76;
            int *l_339 = &g_64;
            int **l_341 = (void*)0;
            int **l_342 = &l_339;
            unsigned *l_352 = &l_261;
lbl_343:
            for (g_153 = 0; (g_153 >= (-22)); g_153 = safe_sub_func_uint16_t_u_u(g_153, 9))
            {
                l_339 = (l_338 = &g_64);
                if ((**l_255))
                    continue;
            }
            (*l_342) = (l_340 = ((*l_255) = &g_97));
            if (g_97)
                goto lbl_343;
            (**l_255) = (l_357 && 0xEBL);
        }
        else
        {
            int l_369 = 0x694175DBL;
            for (g_64 = 0; (g_64 > 13); g_64 = safe_add_func_int8_t_s_s(g_64, 4))
            {
                (*l_340) = (safe_lshift_func_int8_t_s_u(p_52, 5));
            }
            (**l_255) = (l_279 != (void*)0);
            l_369 = (g_367 != &l_273);
        }
        for (g_225 = 27; (g_225 == 54); g_225 = safe_add_func_uint32_t_u_u(g_225, 6))
        {
            char l_374 = 1L;
            unsigned char *l_388 = &g_78;
            if ((safe_sub_func_uint16_t_u_u(l_374, l_374)))
            {
                short l_376 = 0x5275L;
                if (p_52)
                    break;
                p_52 = (*g_63);
            }
            else
            {
                return p_52;
            }
            (*l_255) = (*l_255);
            (*l_340) = (safe_mod_func_uint8_t_u_u((**l_255), (~((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((&g_190 == (void*)0), (*g_63))), g_153)) > (safe_add_func_int8_t_s_s((l_374 && (safe_rshift_func_uint16_t_u_s(p_52, (0xFC290356L ^ l_374)))), (-1L)))))));
            (*l_340) = (l_388 != (void*)0);
        }
    }
    for (g_328 = 0; (g_328 != 48); g_328 = safe_add_func_uint32_t_u_u(g_328, 1))
    {
        unsigned char *l_391 = (void*)0;
        int l_404 = (-10L);
        (**l_255) = (*l_340);
        if (p_52)
        {
            int *l_392 = &g_76;
            (*l_392) = ((*g_63) = p_52);
            (*l_255) = &p_52;
        }
        else
        {
            int **l_393 = &l_340;
            unsigned short *l_394 = &g_225;
            unsigned short ***l_398 = &l_322;
            if ((((*l_394) = (l_393 == l_393)) | ((safe_unary_minus_func_uint32_t_u(p_52)) && (safe_add_func_uint16_t_u_u(p_52, (l_398 == &l_322))))))
            {
                (*l_255) = &g_64;
            }
            else
            {
                unsigned l_399 = 0xB269E627L;
                (*l_340) = (0x7EL && (&g_63 != (void*)0));
                l_399 = p_52;
            }
        }
        (*l_340) = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((+((l_404 > (!(*l_340))) < p_52)), p_52)), 6));
    }
    return g_225;
}







static char func_55(int p_56, unsigned char p_57, unsigned char p_58)
{
    unsigned l_79 = 0x734166DAL;
    unsigned char *l_85 = &g_78;
    unsigned char **l_84 = &l_85;
    int l_90 = 0xAED416A7L;
    int *l_149 = &g_97;
    int l_217 = 4L;
    (*g_63) = l_79;
    for (g_64 = 0; (g_64 == (-21)); g_64--)
    {
        unsigned char *l_83 = (void*)0;
        unsigned char **l_82 = &l_83;
        unsigned short l_94 = 0x913DL;
        unsigned l_102 = 0x63B58950L;
        unsigned char l_111 = 0x39L;
        unsigned l_121 = 0UL;
        int *l_141 = &g_97;
        int l_221 = 0x05C5DA96L;
        unsigned l_226 = 0x03869566L;
        l_84 = l_82;
    }
    (*g_63) = p_58;
    return p_57;
}







static unsigned char func_59(int p_60)
{
    int *l_61 = (void*)0;
    if ((g_62 = 0x5DD3610CL))
    {
        int **l_65 = &g_63;
        (*l_65) = g_63;
    }
    else
    {
        short l_66 = 0x90B8L;
        int *l_72 = &g_64;
        if (l_66)
        {
            int **l_73 = &g_63;
            for (g_62 = 0; (g_62 > 28); g_62 = safe_add_func_int32_t_s_s(g_62, 2))
            {
                return g_62;
            }
            for (p_60 = 4; (p_60 < 21); ++p_60)
            {
                int *l_71 = &g_64;
                l_61 = l_71;
            }
            (*l_73) = l_72;
        }
        else
        {
            int *l_74 = (void*)0;
            int *l_75 = &g_76;
            (*l_72) = 0xE1FE01AFL;
            (*l_75) = ((*g_63) = (*l_72));
        }
    }
    return p_60;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_995, "g_995", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
