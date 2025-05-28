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



static int g_8 = 1L;
static char g_9 = 0L;
static int g_21 = 0x19ADB821L;
static char g_43 = 0x83L;
static int g_45 = 0xB91359A7L;
static unsigned g_64 = 4294967295UL;
static unsigned g_80 = 1UL;
static unsigned g_100 = 0xE54B5300L;
static unsigned short g_120 = 7UL;
static short g_122 = 0x43A6L;
static unsigned char g_129 = 255UL;
static unsigned short g_131 = 0x5FF6L;
static int g_132 = 0x69EDF730L;
static int g_146 = 6L;
static short g_149 = 0xBD89L;
static const unsigned g_153 = 0UL;
static int *g_157 = &g_45;
static int **g_156 = &g_157;
static unsigned short g_169 = 65535UL;
static int g_198 = 0x60119967L;
static unsigned *g_255 = &g_80;
static unsigned * const *g_254 = &g_255;
static char g_268 = 0xD4L;
static unsigned g_320 = 4294967293UL;
static unsigned g_373 = 0x95FA6978L;
static unsigned short *g_387 = &g_120;
static unsigned short **g_386 = &g_387;
static const unsigned short *g_389 = &g_169;
static const unsigned short **g_388 = &g_389;
static unsigned char g_391 = 0xCBL;
static unsigned **g_493 = &g_255;
static int g_510 = 0x3D29C942L;
static int g_534 = 0xA0EF6109L;
static char **g_549 = (void*)0;
static unsigned char g_578 = 255UL;
static const int g_621 = 0xA4B70CB8L;
static const int g_623 = 0x12338E74L;
static unsigned g_626 = 0xD49FD10CL;
static short *g_647 = (void*)0;
static short **g_646 = &g_647;
static const short *g_781 = &g_149;
static const short **g_780 = &g_781;
static const short ***g_779 = &g_780;
static const short ****g_778 = &g_779;
static char g_856 = 8L;
static short ***g_863 = &g_646;
static short *** const *g_862 = &g_863;
static int g_884 = 0xC488D58CL;
static short ****g_890 = &g_863;
static short *****g_889 = &g_890;
static char g_922 = 0x66L;
static int *g_945 = &g_198;
static int g_1035 = 0x06C16E3EL;
static unsigned short g_1052 = 0x1DA6L;



static const char func_1(void);
static int func_4(int p_5);
static int * func_12(unsigned short p_13, int * p_14);
static int * func_16(unsigned p_17, const short p_18);
static int * func_22(int p_23, unsigned char p_24);
static int * func_29(unsigned p_30, unsigned char p_31);
static int * func_48(unsigned p_49, unsigned p_50, const char * p_51);
static short func_58(unsigned p_59, unsigned short p_60, unsigned p_61);
static short func_65(unsigned short p_66, char * p_67);
static int * func_71(unsigned p_72);
static const char func_1(void)
{
    short l_6 = 5L;
    int *l_7 = &g_8;
    unsigned l_15 = 0x831EB239L;
    int *l_20 = &g_21;
    int **l_19 = &l_20;
    int **l_1026 = &g_945;
    char *l_1027 = &g_856;
    char *l_1028 = (void*)0;
    char *l_1029 = &g_922;
    char *l_1030 = &g_43;
    int *l_1034 = &g_1035;
    unsigned short * const *l_1062 = &g_387;
    const char l_1065 = 0L;
    unsigned short l_1066 = 0UL;
    unsigned char l_1067 = 0xFFL;
    char l_1089 = (-8L);
    (*l_1034) ^= (((safe_sub_func_uint8_t_u_u((((((*l_7) = func_4(l_6)) != ((((g_9 , (safe_sub_func_uint16_t_u_u((((*g_156) = ((*l_19) = ((*l_1026) = func_12(l_15, ((*l_19) = func_16(g_9, ((+(g_9 || (((*l_1030) = ((*l_1029) = ((*l_1027) = (((*l_19) = (g_9 , l_7)) != ((*l_1026) = func_22((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(g_9, 4)) , g_21), g_9)), g_9)))))) <= (-5L)))) , (**l_1026)))))))) != (void*)0), 1UL))) , (**g_156)) & 0x3CA404A3L) == g_621)) , 0xE160L) , 1UL), g_623)) , 0L) > 7L);

    ;
    ;
    ;
    if ((*g_157))
    {
        unsigned *l_1040 = &g_626;
        unsigned char l_1047 = 0UL;
        int l_1050 = 0xDD19954CL;
        unsigned short *l_1051 = &g_1052;
        unsigned char *l_1087 = (void*)0;
        unsigned char *l_1088 = &g_129;
        (*g_945) = ((safe_add_func_uint16_t_u_u(((**g_386) |= (**g_388)), (*g_389))) != (***g_779));
        if ((func_58(((safe_add_func_uint32_t_u_u(((*l_1040) = g_131), func_4(g_510))) , (**g_493)), ((*l_7) &= ((*l_1051) ^= ((l_1050 |= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_1047, l_1047)) || (0xC0L == ((*l_20) <= (safe_lshift_func_int8_t_s_s(3L, 4))))), (*g_387))), g_131))) <= (*g_389)))), (**g_493)) , (**l_19)))
        {
            unsigned short l_1053 = 0x05EAL;
            if (((*l_1034) = (*g_945)))
            {
                (*g_945) ^= (func_4(l_1053) && (l_1053 <= (0L | (safe_mul_func_int16_t_s_s((****g_778), (g_122 = l_1050))))));
            }
            else
            {
                for (g_856 = 8; (g_856 < (-17)); --g_856)
                {
                    (*l_1026) = &g_21;

                    ;
                }

                ;
                (**l_19) = (*g_945);
            }

            ;
            (*g_945) &= l_1050;
        }
        else
        {
            unsigned l_1070 = 0x108E367AL;
            (*l_19) = func_12(((safe_lshift_func_uint16_t_u_u((*g_387), (safe_lshift_func_int8_t_s_u((l_1062 != ((((((safe_add_func_uint8_t_u_u(g_1035, l_1065)) ^ (((*l_1040) = (l_1066 >= l_1067)) < (safe_add_func_int8_t_s_s(l_1070, 0L)))) || (*g_389)) , (**g_388)) && l_1047) , &g_389)), 5)))) , (*g_389)), (*l_1026));
        }


        ;
        ;
        (*l_7) ^= ((safe_add_func_uint32_t_u_u((g_391 != (safe_rshift_func_uint16_t_u_s(((((*l_1088) = (((*l_1051) = (*g_387)) > (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_1050, (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((&g_889 != (void*)0) == (g_621 <= g_9)) == (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_4((*l_20)), (*l_1034))), 5))), 0x17L)), l_1050)))), g_373)))) , 0UL) , (*g_387)), (**l_19)))), 0xBD78EE09L)) ^ l_1050);
    }
    else
    {
        return (**l_1026);
    }


    ;
    ;
    if (((((-10L) > ((((g_626 = 3UL) ^ g_621) & 0x73L) < (((*l_7) &= ((((**l_1062) ^= ((***g_779) == (l_1089 >= ((safe_add_func_uint16_t_u_u(func_4((&g_862 == (void*)0)), (**l_1026))) , (*g_945))))) , &g_387) != l_1062)) != 0x13A63942L))) ^ (*l_1034)) , (*g_945)))
    {
        unsigned short l_1098 = 0xB6D3L;
        int l_1099 = 0x0663842FL;
        (*l_20) = ((*l_7) = ((*l_1034) |= (safe_rshift_func_int16_t_s_u((*l_20), 2))));
        for (g_64 = (-10); (g_64 >= 16); g_64++)
        {
            if ((*g_945))
                break;
        }
        if (((safe_lshift_func_uint8_t_u_u(l_1098, 1)) < l_1098))
        {
            (*l_1034) = l_1098;
        }
        else
        {
            (*g_945) = func_4(l_1099);
        }
        (*l_7) = (*g_945);
    }
    else
    {
        short * const l_1108 = (void*)0;
        int l_1121 = 0x9E294E87L;
        for (g_856 = (-16); (g_856 >= (-6)); ++g_856)
        {
            unsigned *l_1105 = &l_15;
            int l_1109 = 0x48E9BF94L;
            (*g_945) |= (safe_add_func_int8_t_s_s(g_884, ((func_4((safe_unary_minus_func_uint32_t_u(((*l_1105) = 2UL)))) , ((safe_rshift_func_int16_t_s_u(((**g_780) != (l_1108 == (void*)0)), l_1109)) <= ((*l_1105) = ((void*)0 != &g_578)))) != (*g_389))));
        }
        for (g_268 = 0; (g_268 >= (-14)); --g_268)
        {
            unsigned l_1122 = 0xD5871D8EL;
            if ((((safe_rshift_func_uint16_t_u_u(((((*l_7) & ((safe_unary_minus_func_uint8_t_u(g_64)) < (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(1UL, g_100)), (((-10L) == func_4(g_132)) && func_4(((((0x94L || (((((safe_mod_func_int8_t_s_s(((l_1121 != l_1122) || (**l_1026)), l_1121)) > l_1122) & l_1122) >= 6UL) <= 0x47L)) < l_1122) > (*g_945)) , g_922))))))) <= g_80) == 0xE69F4AC7L), 9)) , 0UL) ^ (-1L)))
            {
                int *l_1123 = &g_45;
                (*l_1026) = l_1123;

                ;
                for (g_320 = (-6); (g_320 != 32); g_320++)
                {
                    (*l_19) = &l_1121;

                    ;
                }

                ;
                return (*l_1123);
            }
            else
            {
                int l_1126 = 0x4F9C840BL;
                l_1126 ^= 9L;
                if (l_1126)
                    break;
                for (g_100 = 23; (g_100 >= 31); g_100 = safe_add_func_int32_t_s_s(g_100, 8))
                {
                    for (l_1067 = 0; (l_1067 >= 22); l_1067 = safe_add_func_uint16_t_u_u(l_1067, 1))
                    {
                        if ((*g_945))
                            break;
                    }
                }
            }
        }
        return g_132;
    }
    return (**l_19);
}







static int func_4(int p_5)
{
    return p_5;
}







static int * func_12(unsigned short p_13, int * p_14)
{
    int *l_1033 = &g_534;
    (*g_945) = 0x92C3BB01L;
    return l_1033;


}







static int * func_16(unsigned p_17, const short p_18)
{
    int l_1031 = 0L;
    const char *l_1032 = &g_9;
    (*g_156) = func_48((**g_254), p_18, (l_1031 , l_1032));

    ;
    return (*g_156);


}







static int * func_22(int p_23, unsigned char p_24)
{
    unsigned short l_34 = 0x4968L;
    char *l_42 = &g_43;
    int *l_44 = &g_45;
    char *l_1021 = &g_268;
    unsigned short l_1022 = 65526UL;
    char l_1025 = 1L;
    (*g_156) = func_29(p_24, ((p_24 & (func_4(((((g_21 , l_34) == ((func_4(g_21) , ((((*l_44) |= ((safe_add_func_uint8_t_u_u(1UL, ((*l_42) = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(0xBDL)), (safe_lshift_func_int16_t_s_u(p_24, g_21))))))) | 0UL)) && 0x88F15EA3L) || (-1L))) > 0x4A737B78L)) , p_23) >= 0UL)) , p_24)) && (*l_44)));

    ;
    (*g_156) = l_44;

    ;
    (*l_44) = (func_65((((*l_44) = g_578) == (safe_sub_func_int8_t_s_s(((*l_42) &= func_4(g_129)), func_4((safe_lshift_func_uint8_t_u_s(func_4(((p_23 & (safe_lshift_func_int8_t_s_s(((*l_1021) = p_23), (((((0x7D8AL > (l_1022 <= ((**g_493) , (safe_add_func_int16_t_s_s(l_1025, (***g_779)))))) ^ g_510) <= g_198) | (-9L)) , g_149)))) || p_23)), 3)))))), &l_1025) , (*l_44));


    return l_44;


}







static int * func_29(unsigned p_30, unsigned char p_31)
{
    int l_70 = 1L;
    unsigned short l_867 = 0xA1FBL;
    short l_877 = 0L;
    int l_1013 = 0xF00CE960L;
    int *l_1014 = &g_21;
    for (g_45 = 0; (g_45 >= 28); g_45 = safe_add_func_int16_t_s_s(g_45, 3))
    {
        unsigned char l_62 = 0UL;
        unsigned *l_63 = &g_64;
        unsigned char l_649 = 0UL;
        const char *l_650 = &g_9;
        const short *l_882 = &g_122;
        short *****l_892 = &g_890;
        int **l_894 = &g_157;
        short l_916 = 0xBA51L;
        char l_932 = 0x35L;
    }
    for (g_100 = 0; (g_100 == 38); ++g_100)
    {
        int *l_966 = &l_70;
        char *l_1003 = &g_856;
        int *l_1004 = &g_146;
        int l_1009 = 0x0EB55774L;
        int l_1010 = 0x14231DE1L;
        (*g_156) = l_966;

        ;
        for (g_373 = 0; (g_373 > 17); g_373 = safe_add_func_uint16_t_u_u(g_373, 3))
        {
            char l_991 = 0x1BL;
            unsigned *l_992 = &g_320;
            (*g_945) &= (*g_157);
            (*l_966) &= (safe_lshift_func_int16_t_s_u((l_867 < (*g_387)), 9));
            (*g_945) |= ((**g_156) = (((safe_add_func_uint16_t_u_u(0x63E2L, (safe_lshift_func_int8_t_s_u((func_4(((safe_lshift_func_uint8_t_u_u(g_510, 1)) , (((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((((*g_387) > p_30) , (safe_lshift_func_int8_t_s_s((((*l_992) = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint32_t_u(g_391)) > (safe_rshift_func_int8_t_s_s(((*l_966) == (safe_mul_func_uint8_t_u_u((((((*g_387) = ((((*g_386) != (*g_388)) && p_31) <= p_30)) , 0x6BADF1F2L) , (*l_966)) > 0x2DA7L), l_991))), p_31))), l_991)) > 0xCB5B0E53L), p_30))) , (-5L)), 3))) , l_991))), g_21)) , &p_31) == &g_129))) != p_31), 6)))) , (**g_780)) || (*l_966)));
        }
        (*g_157) = ((*g_945) = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((p_31 = (0x38CEL != (safe_rshift_func_uint16_t_u_s(65532UL, 6)))), ((*g_387) <= 1UL))), ((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_30, ((0xEEL >= 0xE7L) , (func_4(((*l_1004) = (((*l_1003) = ((((void*)0 == l_1003) > 0UL) <= p_30)) == p_30))) >= (*l_966))))), p_30)) , (*l_966)))));
        l_1013 = ((-1L) < (safe_rshift_func_int8_t_s_u((!((*l_1003) = ((*l_966) = 0xD4L))), (((*g_945) |= (safe_sub_func_int16_t_s_s(((p_30 < (l_1009 = 0xA46DE238L)) > (-2L)), (l_1010 = (l_867 >= p_31))))) , ((safe_mul_func_uint8_t_u_u(0xFBL, (func_4(g_100) < l_1010))) <= 65529UL)))));
    }

    ;
    (*g_945) |= (1L | g_132);
    return l_1014;



}







static int * func_48(unsigned p_49, unsigned p_50, const char * p_51)
{
    int l_651 = 3L;
    int *l_652 = &l_651;
    int *l_653 = &g_146;
    unsigned **l_658 = &g_255;
    unsigned ***l_659 = &l_658;
    unsigned **l_660 = &g_255;
    int l_661 = 1L;
    int l_662 = 0xB82B9CA8L;
    short ***l_692 = &g_646;
    const int l_727 = (-1L);
    unsigned short **l_765 = &g_387;
    unsigned l_769 = 4294967286UL;
    unsigned l_770 = 0xC9D46951L;
    int l_772 = (-1L);
    unsigned *l_785 = &g_626;
    unsigned ** const l_784 = &l_785;
    int *l_818 = &l_662;
    int *l_819 = &l_662;
    if ((((*l_653) = ((*l_652) = l_651)) , ((g_621 && l_651) || (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_49 , (((*l_659) = l_658) != l_660)), (l_662 &= ((l_661 && (0x5541L || g_149)) < p_49)))), 6)))))
    {
        short l_669 = (-1L);
        unsigned short l_674 = 0x3AE7L;
        int l_689 = 0L;
        char *l_719 = &g_9;
        char **l_718 = &l_719;
        int l_728 = 0L;
        unsigned **l_736 = &g_255;
        short l_744 = 0xD1E4L;
        l_662 = 0x1D53AC1DL;
        if (((safe_rshift_func_uint16_t_u_s((!(safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_129, ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((*p_51), 2)), (p_49 || (&g_254 == (void*)0)))) || g_132))) >= (*p_51)), p_49))), p_49)) != l_669))
        {
            int *l_675 = &g_198;
            const int l_681 = 0x8A805F02L;
            int l_717 = 0x5C554E68L;
            char *l_720 = &g_43;
            if (((*l_675) = l_674))
            {
                unsigned char l_678 = 7UL;
                unsigned **l_697 = &g_255;
                int *l_701 = &g_198;
                if ((l_651 < ((*g_387) = p_50)))
                {
                    int *l_682 = &g_510;
                    (*g_156) = l_682;

                    ;
                    (*g_156) = (*g_156);
                }
                else
                {
                    int l_694 = 0x196A1100L;
                    (*l_675) = func_4(g_578);
                    if (g_43)
                    {
                        unsigned char *l_685 = (void*)0;
                        unsigned char *l_686 = &g_578;
                        short ****l_693 = &l_692;
                        unsigned *l_695 = (void*)0;
                        unsigned *l_696 = &g_320;
                        (*l_675) ^= ((safe_add_func_int32_t_s_s((((*l_686) = p_49) == (~(0x881330DCL < 1L))), p_49)) == (p_49 & ((safe_add_func_uint8_t_u_u(p_49, g_391)) , 0x24L)));
                        (*l_675) &= (((*l_659) = (*l_659)) == (((*l_696) = (safe_add_func_int8_t_s_s((l_662 = (l_694 = (((*l_693) = l_692) != (void*)0))), (-1L)))) , l_697));
                        (*g_156) = func_71(((**g_254) = 4294967294UL));

                        ;
                        return (*g_156);


                    }
                    else
                    {
                        char *l_698 = &g_9;
                        (*l_675) |= l_678;
                        (*g_156) = (l_675 = func_71(l_694));

                        ;
                        ;
                    }

                    ;
                    ;
                    (*g_156) = (*g_156);
                }

                ;
                ;
                (*l_701) = ((*g_389) <= ((safe_add_func_int16_t_s_s(p_49, p_49)) || (+(*g_387))));
                l_662 &= (p_49 && (g_9 , 0xAFF6L));
            }
            else
            {
                int l_709 = 0xB11CB596L;
                short *l_712 = (void*)0;
                short *l_713 = (void*)0;
                short *l_714 = &g_149;
                unsigned short l_721 = 0x62CFL;
                int *l_722 = &g_510;
                unsigned *l_729 = &g_626;
                unsigned ** const l_737 = &g_255;
                (*g_156) = func_71((0xA64AL != l_689));

                ;
                (*l_722) &= (safe_unary_minus_func_uint16_t_u((l_661 >= (func_65((((((l_709 <= 0x278325F5L) & (!0xBBFDL)) , (safe_sub_func_int16_t_s_s(((*l_714) = p_50), 0x65F1L))) , (safe_sub_func_uint32_t_u_u(((~(l_717 | 0xAEC8785DL)) , (&p_51 == l_718)), 0xD40CE98AL))) | p_50), l_720) , l_721))));


                (*l_722) = (+(((((*l_720) = l_689) , ((*l_722) , (p_50 ^ (safe_add_func_uint8_t_u_u((l_674 && g_120), 0x55L))))) <= (**g_388)) || 0xBB5AL));
                g_21 |= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((p_49 , ((((g_534 <= p_50) || (safe_mod_func_uint8_t_u_u(p_50, 4L))) , l_736) != l_737)), ((*l_729) |= (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_744 = (((*l_675) = ((((0x026DL == (safe_mul_func_int16_t_s_s(0x0F8EL, (*l_722)))) == (*g_387)) | p_50) , p_50)) ^ (*l_722))), p_49)), p_50))))), p_49));
            }


            ;
        }
        else
        {
            int *l_748 = &l_662;
            for (l_662 = 24; (l_662 > (-29)); --l_662)
            {
                int *l_747 = &l_728;
                return &g_132;


            }
            return &g_534;


        }


        l_662 = ((((l_744 , (*g_389)) != (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_391, p_50)), g_169)) > ((p_49 || ((l_651 , (safe_rshift_func_uint16_t_u_u(p_49, 9))) & ((((safe_mul_func_int8_t_s_s(((*l_692) == &g_647), p_50)) || l_651) <= 0x7661EF79L) >= p_50))) , 0x45L)), (*g_389)))) , &g_493) != (void*)0);
    }
    else
    {
        unsigned char *l_768 = &g_578;
        int l_771 = 0L;
        int *l_773 = &l_662;
        (*g_156) = func_71(func_4(g_626));

        ;
        (*l_773) = (((!(l_772 |= (((((((**l_765) = ((safe_mod_func_int32_t_s_s((!(+((l_661 || ((*l_768) = ((*g_387) | (p_50 ^ (func_4(func_4((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((void*)0 != l_765) && (5L | (safe_lshift_func_int16_t_s_u((l_662 = (0xFEL & (!1UL))), 4)))), l_661)), 0x19L)))) , 0xDFA8L))))) ^ 65533UL))), l_769)) > l_770)) , 0xAE75ED0BL) != l_771) , p_49) <= 6UL) < l_771))) <= p_49) ^ p_50);
        (*l_773) &= (safe_add_func_int32_t_s_s((**g_156), (**g_156)));
        l_662 ^= p_49;
    }


    if (l_661)
    {
        unsigned *l_782 = &g_626;
        int l_783 = 0x2273F7EAL;
        if ((safe_add_func_uint32_t_u_u(((*l_782) = (&l_692 != g_778)), l_783)))
        {
            int *l_786 = &l_772;
            (*l_786) = (l_784 == (void*)0);
        }
        else
        {
            int *l_787 = &g_510;
            (*l_787) ^= (l_662 &= p_50);
            for (l_772 = (-24); (l_772 != (-9)); l_772 = safe_add_func_uint32_t_u_u(l_772, 7))
            {
                char l_794 = (-1L);
                for (l_783 = 0; (l_783 <= (-27)); l_783 = safe_sub_func_int16_t_s_s(l_783, 1))
                {
                    char *l_805 = (void*)0;
                    char *l_806 = (void*)0;
                    char *l_807 = (void*)0;
                    char *l_808 = &g_43;
                    int *l_809 = (void*)0;
                    int *l_810 = &l_662;
                    (*l_810) = (safe_add_func_int8_t_s_s(((*l_808) &= ((((p_50 = l_794) <= (((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_49, (safe_add_func_int32_t_s_s(p_49, ((*l_787) = (*l_787)))))), 5)) & ((safe_add_func_uint32_t_u_u(((-1L) && ((p_49 < (safe_mod_func_int32_t_s_s(func_4(g_21), p_49))) ^ (*p_51))), 0x48EA37E0L)) > 0xF6E7L)) , g_198)) || l_651) | g_391)), p_49));
                }
            }
            return l_787;


        }
    }
    else
    {
        unsigned **l_811 = &g_255;
        int l_812 = 0L;
        int *l_817 = &g_198;
        g_510 ^= ((*l_817) ^= (((!0L) & ((**l_765) = ((****g_778) >= p_49))) , 0L));
    }
    return &g_510;


}







static short func_58(unsigned p_59, unsigned short p_60, unsigned p_61)
{
    char *l_327 = (void*)0;
    unsigned char *l_332 = (void*)0;
    int l_347 = 0x892CC2C3L;
    int l_431 = 0x686B5375L;
    int l_474 = 0x4E75E4C8L;
    int *l_496 = &g_21;
    unsigned short **l_523 = &g_387;
    int l_594 = 0x44F817DDL;
    int l_613 = 0xDB4B4B19L;
    unsigned l_641 = 0x542F16BCL;
    if (p_59)
    {
        int *l_308 = &g_21;
        (*l_308) ^= 0xCF1FF036L;
    }
    else
    {
        int *l_309 = &g_45;
        char *l_405 = &g_9;
        unsigned short *** const l_457 = &g_386;
        short l_471 = 0x5ED9L;
        char *l_477 = (void*)0;
        int *l_488 = &l_431;
        int *l_489 = &l_474;
        int *l_490 = &g_21;
        (*g_156) = l_309;

        ;
        if ((safe_add_func_uint32_t_u_u((*l_309), g_129)))
        {
            char l_316 = 0x61L;
            int l_318 = 0L;
            unsigned char *l_333 = (void*)0;
            const unsigned *l_360 = &g_64;
            const unsigned short **l_390 = (void*)0;
            unsigned l_435 = 0x94D440E9L;
            int l_456 = (-1L);
            if ((safe_lshift_func_uint8_t_u_s(g_21, (&p_59 == l_309))))
            {
                l_316 = (p_59 , ((p_61 , ((safe_mod_func_uint32_t_u_u(0x239A3276L, (*l_309))) || ((**g_156) && p_60))) <= p_59));
                return g_198;
            }
            else
            {
                unsigned *l_319 = &g_320;
                int *l_321 = &g_198;
                int *l_322 = &l_318;
                const char *l_323 = (void*)0;
                const char **l_324 = &l_323;
                unsigned char *l_328 = &g_129;
                unsigned *l_329 = &g_100;
                int *l_334 = &g_132;
                int *l_335 = &l_318;
                unsigned **l_367 = (void*)0;
                short l_375 = 0xEFACL;
                (*l_321) = (safe_unary_minus_func_int8_t_s(((*l_309) && ((p_60 == ((p_60 & p_60) && (l_318 &= (*g_157)))) >= ((*l_319) ^= ((l_309 == (func_4(p_59) , func_71((*l_309)))) , p_59))))));
                if (((*l_334) &= ((((*l_322) &= (*l_321)) <= 9L) <= (((*l_324) = l_323) == ((((*l_329) ^= ((*l_319) &= (safe_add_func_int8_t_s_s(func_4(p_60), ((*l_328) = (((**g_156) , l_327) == (void*)0)))))) > (((safe_mod_func_int16_t_s_s(((l_332 = l_327) != l_333), l_316)) < p_61) >= g_21)) , &l_316)))))
                {
                    int l_338 = 0xEA129534L;
                    unsigned short *l_363 = &g_131;
                    short *l_364 = &g_149;
                    short l_365 = (-1L);
                    char *l_366 = &g_268;
                    (*g_156) = l_335;

                    ;
                    l_338 = (safe_lshift_func_uint16_t_u_s(p_59, 5));
                    for (g_43 = (-25); (g_43 < 12); g_43++)
                    {
                        (*l_321) |= func_4((safe_sub_func_int16_t_s_s(g_120, g_149)));
                    }
                    if ((safe_lshift_func_int16_t_s_u((!(((~(((((*l_366) = (g_320 , (((*l_364) = ((((safe_mul_func_uint8_t_u_u(g_146, p_61)) ^ l_347) && ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((((*l_363) |= (safe_lshift_func_uint8_t_u_s(((*l_328) = (safe_lshift_func_uint8_t_u_u((&l_329 != &l_329), 0))), (g_43 = ((((*l_322) = (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_360 != (void*)0), (safe_mul_func_uint8_t_u_u((*l_334), (*l_309))))), 0x02L))) == p_61) , 7L))))) || g_149), 65528UL)) ^ (*l_334)), l_316)) ^ p_60)) | l_316)) , l_365))) < l_338) | p_61) | p_60)) , g_131) | l_338)), (*l_309))))
                    {
                        (*g_156) = func_71(func_4((((void*)0 != l_367) <= g_198)));

                        ;
                    }
                    else
                    {
                        return g_169;


                    }

                    ;
                }
                else
                {
                    short *l_368 = &g_149;
                    unsigned short *l_374 = &g_169;
                    if ((((0L >= ((g_129 |= ((**g_156) > ((*l_334) , p_59))) , ((*l_368) = l_347))) | g_21) , (safe_mul_func_int16_t_s_s(((((*l_374) = ((safe_mod_func_int8_t_s_s(((&l_329 != &l_329) > (l_318 &= p_61)), g_373)) == 7UL)) , &g_129) != l_323), p_60))))
                    {
                        l_375 &= ((*l_321) = (&g_129 != &g_129));
                    }
                    else
                    {
                        (*l_322) &= ((*l_334) = (-10L));
                        (*l_335) = 0x2C58C679L;
                        (*g_156) = func_71((*g_255));
                    }
                }
                if (p_59)
                {
                    int l_382 = 0x3DE95E61L;
                    l_318 = 1L;
                    if (p_60)
                    {
                        unsigned short ***l_385 = (void*)0;
                        char *l_392 = &l_316;
                        (*l_335) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_61, ((*l_392) = (((*g_387) |= (((safe_mul_func_uint16_t_u_u(((l_382 == ((safe_rshift_func_int8_t_s_s((g_43 = p_59), ((g_386 = (void*)0) != (l_390 = g_388)))) , func_4(p_60))) >= l_347), 0x5754L)) & g_132) && g_391)) == l_347)))), g_198));

                        ;
                        ;
                        return g_132;
                    }
                    else
                    {
                        unsigned l_399 = 4UL;
                        int *l_400 = &g_146;
                        short *l_401 = &l_375;
                        (*l_321) &= (*g_157);
                        (*l_321) = (safe_rshift_func_uint8_t_u_s(l_347, 6));
                        (*g_156) = func_71((p_61 && ((1UL | g_198) ^ (safe_add_func_uint32_t_u_u(((p_60 , ((*l_401) = (safe_add_func_uint8_t_u_u(func_4(p_59), (l_399 == func_4(((*l_400) |= l_382))))))) , g_391), 0x2EC9369DL)))));
                        (*g_156) = l_400;

                        ;
                    }

                    ;
                    for (g_268 = 1; (g_268 != (-14)); g_268 = safe_sub_func_int16_t_s_s(g_268, 4))
                    {
                        (*g_157) &= (*l_321);
                        (*l_334) = 0xC6FD7BD4L;
                    }
                }
                else
                {
                    int **l_410 = &l_321;
                    short *l_413 = (void*)0;
                    short *l_414 = &g_122;
                    unsigned short *l_432 = (void*)0;
                    short *l_455 = (void*)0;
                    if ((g_45 ^ (**l_410)))
                    {
                        (*g_156) = func_71(p_61);
                        return g_122;
                    }
                    else
                    {
                        unsigned char *l_433 = &g_391;
                        (*g_156) = func_71((((~(g_9 ^ (p_61 == p_59))) , l_333) != (g_132 , ((safe_lshift_func_uint8_t_u_s(((l_432 = (func_4(((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-1L), (safe_mod_func_int8_t_s_s((-1L), ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(g_149, (l_431 = g_320))) || p_61), 7)), p_59)) && 0x1AD7622EL))))), 0xAE2BL)) , g_132) != g_153) >= p_59)) , (void*)0)) == (*g_388)), 1)) , (void*)0))));
                        (*l_334) &= 0x8FDA9C6AL;
                        (*g_156) = ((g_129 , ((*l_433) &= func_4(g_129))) , func_71(l_316));
                        (*l_410) = (*g_156);

                        ;
                    }

                    ;
                    if ((safe_unary_minus_func_uint16_t_u(l_435)))
                    {
                        unsigned l_436 = 2UL;
                        (*l_335) ^= (*g_157);
                        (*l_410) = l_329;

                        ;
                        (*g_156) = ((p_61 , (l_318 = ((((*l_414) = 0x58D8L) , p_59) > l_436))) , func_71((*l_309)));
                        (**l_410) = ((((*l_414) = (*l_309)) >= (g_149 = (func_4(l_431) < (*l_334)))) > (safe_add_func_int16_t_s_s(g_153, (**g_386))));
                    }
                    else
                    {
                        return p_61;
                    }

                    ;
                    if ((((((*l_328) ^= (safe_add_func_int16_t_s_s((0xF4632DF0L <= (safe_lshift_func_uint8_t_u_u(((p_61 >= (((~(safe_rshift_func_uint8_t_u_u((((l_347 = ((*l_414) = (254UL < (((safe_mod_func_uint32_t_u_u(0xBFE7C5A6L, (safe_unary_minus_func_uint16_t_u(((p_61 , ((*l_329) = (safe_unary_minus_func_uint16_t_u(((!(((((safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_u(p_60, 3)))) > (~l_316)), (*l_309))) != p_61) < (*l_322)) <= 0UL) & 0x50L)) >= l_316))))) | g_131))))) , g_153) , p_60)))) , 1L) ^ 9L), p_60))) , p_60) , p_59)) & (**g_386)), 6))), (*l_309)))) == (*l_335)) , g_43) != l_456))
                    {
                        return l_435;
                    }
                    else
                    {
                        unsigned l_460 = 0x33493CBFL;
                        (*l_335) ^= ((void*)0 == l_457);
                        (*l_322) &= (((safe_mul_func_int16_t_s_s(g_320, ((l_460 == (safe_mul_func_int16_t_s_s(g_64, (p_60 || (((~(+(safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((p_59 >= (safe_add_func_int16_t_s_s(func_4(l_460), (*g_389)))), 7)) || 0xA6A6E400L) != p_59) ^ l_431), 0xC7L)), 4)))) , 0xAEB52A00L) != 0x755CA80EL))))) < 0x42L))) != p_60) , 0x8123898DL);
                        (*l_321) = ((**l_410) & l_471);
                    }
                }

                ;
                ;
            }

            ;
            (*g_156) = l_309;

            ;
            (*g_156) = (*g_156);
            l_474 &= ((g_100 || (l_431 , (l_347 , p_60))) , (**g_156));
        }
        else
        {
            return g_391;
        }
        (*l_490) |= ((*l_489) = ((func_4((((safe_rshift_func_int8_t_s_s((g_43 = (((g_268 = p_59) , (*l_309)) >= 0xD44FL)), (safe_add_func_int8_t_s_s(((g_122 , (safe_sub_func_uint16_t_u_u(((func_4(((*l_488) = (((*l_457) = (((((safe_mul_func_uint16_t_u_u(p_59, 1UL)) >= (((safe_mul_func_uint8_t_u_u((l_431 , (safe_rshift_func_int8_t_s_u(((g_320 && p_59) , 0xE2L), 6))), (*l_309))) == 0x11L) , p_61)) == g_80) == 0xBD2EL) , (void*)0)) != &g_387))) != (*l_309)) , 0x2762L), l_347))) && p_59), p_60)))) && 0x7CL) != (*l_309))) > 0x44L) > p_61));

        ;
        (*l_489) |= (safe_mod_func_uint8_t_u_u(p_61, (func_4((*l_490)) & ((g_493 == (void*)0) == 0UL))));
    }

    ;
    for (p_61 = 0; (p_61 < 25); ++p_61)
    {
        unsigned short ***l_504 = (void*)0;
        int *l_507 = &g_45;
        int l_531 = 0x82D5CA2DL;
        char **l_561 = &l_327;
        char l_585 = 0L;
        unsigned short l_590 = 4UL;
        unsigned **l_616 = &g_255;
        unsigned **l_618 = &g_255;
        const int *l_622 = &g_623;
        l_496 = (void*)0;

        ;
        for (g_64 = (-15); (g_64 != 14); g_64++)
        {
            unsigned short ***l_503 = &g_386;
            int l_508 = 1L;
            int l_540 = 0x0A0A953EL;
            unsigned l_611 = 0x2BF80B68L;
            unsigned short *l_614 = &g_131;
            int *l_615 = &g_510;
            unsigned ***l_617 = &l_616;
            const int *l_620 = &g_621;
            const int **l_619 = &l_620;
            const int *l_625 = &g_534;
            const int **l_624 = &l_625;
            if ((((g_43 , &g_122) != &g_122) ^ (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0UL, (l_503 != l_504))) , (safe_mod_func_int8_t_s_s((l_507 != (void*)0), p_61))), l_508))))
            {
                char **l_509 = &l_327;
                int l_513 = 0L;
                int *l_514 = &g_510;
                (*g_156) = &g_45;

                ;
                (*l_514) = (func_65((p_61 ^ 65529UL), ((*l_509) = &g_268)) & (func_4(func_4((g_391 , (g_510 ^= p_60)))) > func_4((safe_mul_func_uint8_t_u_u((l_513 , p_60), g_153)))));


                ;
                (*g_156) = func_71(func_4((+(*l_507))));

                ;
                (*l_514) = (safe_add_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(p_61, 5UL)) || (((safe_rshift_func_uint16_t_u_u((l_508 || func_4(p_61)), 11)) || (safe_mod_func_int32_t_s_s(((((**l_523) = ((l_523 != ((*l_503) = &g_387)) || (g_169 , p_59))) , g_9) & (*l_514)), 0x42DAF02AL))) <= (*l_514))) & (-1L)) & 0x14L), p_59));
            }
            else
            {
                int l_528 = 0x0AEF52FCL;
                unsigned short l_599 = 0xF630L;
                int l_610 = (-7L);
                int *l_612 = &l_474;
                if ((safe_add_func_int32_t_s_s((func_4(l_508) <= (~(safe_rshift_func_uint8_t_u_u(p_61, 1)))), l_528)))
                {
                    int *l_541 = &l_540;
                    unsigned short l_570 = 65528UL;
                    (*g_156) = &l_508;

                    ;
                    if ((safe_rshift_func_int8_t_s_u(l_531, 5)))
                    {
                        char *l_535 = (void*)0;
                        char *l_536 = &g_43;
                        int **l_537 = &g_157;
                        l_540 = ((**g_156) = ((safe_add_func_uint16_t_u_u(0UL, g_534)) && (((*l_536) = 1L) ^ (((0UL < (((void*)0 != l_537) , 1UL)) > (safe_mod_func_int8_t_s_s((p_60 != ((g_21 , (-9L)) && p_59)), l_508))) | g_146))));
                        l_541 = func_71(p_59);

                        ;
                        if (l_508)
                            break;

                    }
                    else
                    {
                        int **l_542 = &l_541;
                        unsigned char *l_543 = (void*)0;
                        unsigned char *l_544 = &g_391;
                        (*l_541) ^= 2L;
                        (*l_542) = ((*g_156) = func_71((**g_493)));

                        ;
                        ;
                        (*g_156) = func_71((0x6AL >= (((*g_255) , (**g_493)) , ((*l_544) = ((g_129 != (l_528 , ((void*)0 == &g_146))) >= 3L)))));
                        if ((**g_156))
                            continue;
                    }

                    ;
                    ;
                    for (l_508 = (-21); (l_508 == (-13)); l_508 = safe_add_func_int16_t_s_s(l_508, 1))
                    {
                        short l_554 = 0x2101L;
                        short *l_559 = &l_554;
                        int l_560 = 0x50AFDC8AL;
                        char **l_562 = &l_327;
                        int *l_563 = &g_132;
                        int *l_571 = &l_560;
                        (*l_563) = (g_268 <= (0x2A34L != (((safe_lshift_func_uint16_t_u_s((g_549 == ((l_560 = (safe_mul_func_uint8_t_u_u((g_391 &= (safe_lshift_func_uint16_t_u_s(((((p_59 >= (l_554 , (((safe_sub_func_int8_t_s_s(func_4(g_131), (safe_mul_func_int16_t_s_s((((*l_559) = l_554) ^ (*l_541)), g_320)))) | 0x20EEL) == l_560))) & 0xDCA3AB21L) , l_561) == l_562), 1))), 247UL))) , g_549)), 15)) < 0x622FA75FL) & 255UL)));
                        (*l_563) &= p_59;
                        (*g_156) = &l_474;

                        ;
                        (*l_563) = ((*l_571) |= ((**g_156) < (p_59 ^ (((0xE9A23020L >= ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_508 != ((safe_mod_func_int8_t_s_s((p_59 != ((((g_129 , ((func_4(((l_570 < p_59) != p_59)) , g_129) && l_528)) & (*g_157)) > p_60) < (*l_563))), g_146)) || 0UL)) || (*l_563)), (*l_563))), (*l_541))) ^ p_59)) && l_508) | (*l_541)))));
                    }

                    ;
                }
                else
                {
                    unsigned *l_581 = (void*)0;
                    unsigned *l_582 = (void*)0;
                    unsigned *l_583 = (void*)0;
                    unsigned *l_584 = &g_100;
                    int l_591 = 0x1D338BE9L;
                    int l_592 = 0x795772DDL;
                    int l_593 = (-1L);
                    int *l_595 = (void*)0;
                    int *l_596 = &g_534;
                    if (p_61)
                        break;
                    (*l_596) |= (safe_mod_func_uint16_t_u_u((*g_387), (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(func_4(g_578), (l_528 == (safe_mod_func_uint32_t_u_u(((*l_584) |= (g_131 < g_391)), l_585))))), func_4((((safe_sub_func_int32_t_s_s(((g_320 = (((l_592 |= (l_591 = (p_60 && ((*g_387) == l_590)))) >= 0x92D4AC71L) , g_578)) || g_43), l_593)) < l_594) , p_59))))));
                }


                (*l_612) |= (((safe_add_func_uint8_t_u_u(l_599, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0UL, (((l_508 >= (g_64 >= 0x0196DA62L)) | p_61) , l_599))), 9UL)))) , (*l_507)) <= 9UL);
            }


            (*g_156) = func_71(((-2L) | (((*l_614) = (p_60 = ((*g_387) |= l_613))) | p_61)));

            ;
            (*l_615) = p_60;
            (*l_624) = ((((((*l_617) = l_616) != l_618) , 1L) < (-7L)) , (l_622 = ((*l_619) = func_71(((**l_616) &= func_4((9UL == 65529UL)))))));

            ;
            ;
            ;
        }

        ;
        (*g_156) = &g_21;

        ;
        if (g_626)
        {
            unsigned short l_627 = 65535UL;
            char *l_628 = &l_585;
            (*g_157) = p_60;
        }
        else
        {
            unsigned l_633 = 0x726B80C2L;
            int l_634 = 8L;
            char * const l_640 = (void*)0;
            short ***l_648 = &g_646;
            if ((*g_157))
            {
                unsigned l_635 = 2UL;
                unsigned *l_636 = &g_100;
                unsigned l_639 = 6UL;
                (*g_157) = ((((*l_636) |= (safe_lshift_func_int16_t_s_u(((p_61 , 0x4FL) <= ((l_635 = (g_131 < (safe_rshift_func_int16_t_s_u((l_633 ^ 0x19L), l_634)))) , (g_132 & l_635))), l_633))) , p_61) , (-1L));
                if (((safe_lshift_func_uint16_t_u_u((*l_507), 8)) > l_639))
                {
                    unsigned char l_644 = 0UL;
                    (*g_156) = func_71(((((void*)0 != l_640) & ((p_61 < ((**g_156) & p_60)) && ((-1L) <= l_641))) || (safe_sub_func_uint32_t_u_u((p_59 , (0x11DBL || (*l_507))), p_59))));

                    ;
                    if (p_60)
                        continue;
                    l_644 = l_634;
                }
                else
                {
                    (*g_157) |= l_633;
                }

                ;
            }
            else
            {
                int *l_645 = &g_534;
                (*l_645) = ((**g_156) ^= (&g_386 != l_504));
                (*l_645) |= (((void*)0 == &g_389) & l_634);
            }

            ;
            (*l_648) = g_646;
        }

        ;
    }


    ;
    ;
    return p_61;
}







static short func_65(unsigned short p_66, char * p_67)
{
    int *l_106 = &g_45;
    int **l_105 = &l_106;
    unsigned short *l_119 = &g_120;
    short *l_121 = &g_122;
    int *l_123 = &g_21;
    unsigned char *l_128 = &g_129;
    unsigned short *l_130 = &g_131;
    unsigned *l_133 = &g_100;
    unsigned short l_143 = 0x58A6L;
    short l_180 = 0L;
    unsigned l_189 = 0x8B70B0F0L;
    unsigned char l_196 = 0x76L;
    int l_230 = 0x51E3A1A6L;
    (*l_105) = func_71(g_21);
    (*l_123) = (safe_mul_func_uint8_t_u_u(p_66, ((safe_sub_func_int32_t_s_s((*l_106), (safe_mul_func_int8_t_s_s(0xEFL, g_45)))) <= (safe_mul_func_uint16_t_u_u((**l_105), (((safe_lshift_func_uint16_t_u_s((*l_106), 14)) || ((*l_121) = (((*p_67) |= (((*l_119) = (safe_mul_func_int16_t_s_s(p_66, p_66))) && g_9)) & 0x78L))) ^ (**l_105)))))));
    if (((**l_105) || ((((&g_43 != &g_43) > ((*l_133) &= (safe_mul_func_int16_t_s_s(((0xE65AFEF7L || ((*l_123) = (&g_21 == &g_21))) , (((*p_67) = 0x53L) < ((g_132 &= (safe_lshift_func_uint16_t_u_s((((*l_128) ^= (*l_123)) | (((*l_130) |= ((*l_119) = (~(g_9 | (*l_123))))) , 0x5DL)), 8))) | 0xA1DEL))), 0xB615L)))) || g_21) && g_21)))
    {
        char l_140 = 0xB7L;
        unsigned *l_141 = &g_80;
        int l_142 = 0xC8F413EFL;
        int *l_144 = (void*)0;
        int *l_145 = &g_146;
        int l_147 = 0x1008EF74L;
        short *l_148 = &g_149;
        int *l_150 = &g_132;
        const unsigned *l_152 = &g_153;
        const unsigned **l_151 = &l_152;
        unsigned short l_195 = 0x51A2L;
        int *l_221 = &g_146;
        (*l_150) = (((((*l_148) ^= ((*l_121) = (((*l_106) && ((((*l_123) &= ((*l_130) = func_4(((*l_145) = (((((*l_119) ^= (p_66 >= ((l_142 &= func_4((((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((*l_121) = ((7UL & p_66) <= (0xA0L && (*p_67)))), (safe_mul_func_uint16_t_u_u(l_140, (((void*)0 != l_141) ^ (*p_67)))))) >= (-9L)), 4)) , 0xA7L) | (*p_67)))) || g_80))) ^ l_143) || l_142) || l_140))))) < p_66) == l_147)) || 0x9E05L))) <= 0x8967L) && 0x62L) , 1L);
        if (((((*l_151) = l_141) != ((((*l_148) = (((*l_128) |= g_43) <= func_4(((func_4(((*l_145) = ((safe_add_func_uint16_t_u_u(65526UL, 0x9C2BL)) < (**l_105)))) != p_66) , (g_156 == &g_157))))) == p_66) , &g_153)) && (*l_123)))
        {
            short l_162 = (-6L);
            int *l_170 = &l_142;
            (*l_123) |= ((*l_150) = (((((safe_add_func_uint16_t_u_u(func_4((0x5DD0L == ((safe_mul_func_uint8_t_u_u(l_162, (((safe_mul_func_int8_t_s_s(1L, g_153)) , (func_4(((*l_145) = (safe_mod_func_int16_t_s_s((func_4(l_162) < ((g_146 | ((((g_9 , p_66) == 0x47L) | (*p_67)) | 4294967295UL)) == 0x11L)), p_66)))) < 0x899BC1BBL)) | p_66))) & 6L))), g_153)) >= l_162) , g_100) , p_66) == 0xB3F7L));
            (*l_123) ^= (*l_150);
            (*l_170) |= (((((*p_67) = ((*l_123) , (safe_lshift_func_int8_t_s_u((&l_106 != &l_150), p_66)))) > ((((l_162 < (((*l_133) = (g_169 ^ l_162)) > func_4(g_169))) || p_66) < g_153) < (*l_150))) & p_66) >= p_66);
            if ((safe_mul_func_int8_t_s_s(((*p_67) ^ ((0L < (0x7B122D03L || func_4(func_4(g_132)))) , (*l_150))), 8L)))
            {
                short l_185 = (-1L);
                short *l_186 = &l_180;
                char *l_194 = &l_140;
                (*l_105) = &l_142;

                ;
                for (g_122 = 0; (g_122 <= 25); g_122 = safe_add_func_int16_t_s_s(g_122, 4))
                {
                    int l_177 = 4L;
                    for (l_142 = 0; (l_142 > (-11)); --l_142)
                    {
                        l_177 = (-1L);
                    }
                    l_180 = (safe_lshift_func_uint8_t_u_s(func_4((~g_43)), g_146));
                    (*l_150) |= l_177;
                }
                (*l_150) = (g_122 > ((safe_rshift_func_int8_t_s_s(((*p_67) |= (((safe_mod_func_uint16_t_u_u(((((((g_153 < ((*l_130) = 65529UL)) ^ func_4(l_185)) == (g_149 | g_122)) && p_66) < (((*l_186) = 2L) > 1L)) != 0x8FL), g_9)) < p_66) >= p_66)), 4)) , p_66));
                (*l_106) = (safe_sub_func_uint8_t_u_u(func_4(((g_131 ^ (p_66 <= l_189)) | l_185)), ((*l_194) &= (g_43 = ((((((safe_add_func_int16_t_s_s(0L, ((*l_148) = 0xFB4DL))) > (((((*l_150) & (0L <= 0xB9L)) >= g_122) <= (**g_156)) , (*l_150))) < g_132) >= g_122) , l_106) != (void*)0)))));
            }
            else
            {
                unsigned short l_199 = 0x9186L;
                (*g_156) = l_170;

                ;
                if ((0x4496710EL | (*g_157)))
                {
                    int *l_197 = &g_198;
                    l_199 ^= ((((*l_170) ^= l_195) && ((*l_197) |= ((*l_123) = (((&l_147 != l_123) != (func_4((*l_150)) ^ ((*g_157) || func_4(g_129)))) || (l_196 && p_66))))) , 0xA5DBC7C0L);
                    for (g_132 = 0; (g_132 == (-20)); --g_132)
                    {
                        char l_202 = 0x4FL;
                        (*l_197) ^= (l_202 ^= (**g_156));
                        (*g_156) = (*g_156);
                    }
                }
                else
                {
                    (*g_156) = (*g_156);
                    for (g_21 = (-17); (g_21 <= 13); g_21 = safe_add_func_uint8_t_u_u(g_21, 5))
                    {
                        return p_66;


                    }
                    for (g_132 = 0; (g_132 < (-19)); g_132 = safe_sub_func_uint32_t_u_u(g_132, 9))
                    {
                        (*g_156) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                (*g_156) = (*l_105);

                ;
                (*l_123) &= (safe_rshift_func_int8_t_s_s((((((((g_198 <= (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((*l_133) = 0x5B37FBF5L) && (**l_105)) || g_45) ^ func_4((func_4(func_4((safe_sub_func_uint8_t_u_u(((l_221 != ((*l_150) , &l_147)) != 250UL), ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((*l_170), (*l_106))), p_66)) < 0x767BL))))) >= (*l_150)))), 0x63L)), l_199)), 0x290D558BL)) < l_199), p_66))) >= (*l_170)) && 0xE0FD6618L) >= p_66) || p_66) >= p_66) <= 0UL), l_199));
            }

            ;
        }
        else
        {
            unsigned char *l_231 = &l_196;
            int l_232 = 0xD656744AL;
            int l_251 = 0x7F5A8E2EL;
            char l_290 = 1L;
            if (((((*l_231) &= (((void*)0 != &g_153) , (((safe_add_func_uint16_t_u_u((0x5A3E3410L == (((*l_150) |= ((*l_128) = (((safe_rshift_func_uint8_t_u_u(0xD4L, 0)) , (*g_156)) == (*g_156)))) > ((*p_67) ^= (((*l_121) = ((1UL | l_230) <= ((void*)0 == &g_43))) || 0xC202L)))), g_21)) , 0x21L) , 247UL))) || l_232) > g_45))
            {
                char l_241 = 0x02L;
                int l_242 = (-5L);
                (*l_123) = p_66;
                (*l_105) = func_71(((((safe_lshift_func_uint8_t_u_u(p_66, ((+p_66) == (l_242 = (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((**g_156) , func_71((g_21 , ((((l_241 , func_71((func_4(p_66) , 0x0F48B296L))) != (void*)0) >= l_241) == g_146)))) != &g_153), p_66)), 9UL)), l_241)))))) < g_198) && l_232) , p_66));
            }
            else
            {
                (*l_150) ^= (g_9 != (safe_sub_func_uint8_t_u_u(g_21, (**l_105))));
                (*g_156) = (*g_156);
            }
            (*l_150) = (safe_sub_func_uint32_t_u_u(((*l_133) = 4294967295UL), ((safe_mod_func_int16_t_s_s((((((void*)0 != (*l_151)) == func_4((func_4(p_66) != (safe_add_func_int8_t_s_s(g_122, ((l_251 , (*p_67)) , (*l_106))))))) , 0x30371CF8L) && 0x3E810FF7L), p_66)) >= g_132)));
            (*g_156) = ((*l_105) = func_71(g_131));

            ;
            for (g_43 = (-27); (g_43 == (-1)); g_43 = safe_add_func_int32_t_s_s(g_43, 5))
            {
                unsigned char l_267 = 0x4DL;
                unsigned * const l_269 = &g_80;
                unsigned short **l_278 = (void*)0;
                unsigned short **l_279 = &l_130;
                unsigned *l_280 = &g_100;
                unsigned **l_281 = &l_133;
                unsigned *l_291 = &l_189;
                (*l_150) = ((*l_151) != (((g_254 == &g_255) || (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(func_4(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s((*p_67))) , (safe_mul_func_uint8_t_u_u((func_4(p_66) , (((*l_231) ^= func_4(((0xF5L == ((g_169 || l_267) & g_153)) > 0xE88FL))) <= l_267)), g_169))) < 1L), p_66)), (*l_150))) != g_268)), g_100)), 0))) , l_269));
                (*l_150) ^= (g_153 != (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u(4L, ((l_280 = func_71((&p_66 == ((*l_279) = (void*)0)))) == ((*l_281) = (void*)0)))) , (safe_rshift_func_uint8_t_u_u(func_4((l_251 & ((*l_291) = (safe_rshift_func_uint8_t_u_u((((*l_231) = (((g_129 = ((safe_mul_func_int16_t_s_s((-7L), (safe_mul_func_int8_t_s_s((((&l_150 != &l_150) | l_290) < g_129), 0x77L)))) || 1UL)) , g_45) == l_232)) != 3UL), 4))))), 7))) < (-6L)), 8)) , l_267), 0x8365C310L)), 9)));

                ;
                ;
                ;
                if (l_251)
                    continue;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        return g_43;
    }
    else
    {
        unsigned char l_296 = 0xD3L;
        const unsigned *l_307 = (void*)0;
        (*l_105) = func_71((((0L || (~((((((*l_128) = (safe_lshift_func_uint16_t_u_u((((*p_67) = (safe_mul_func_int16_t_s_s(6L, g_100))) | (((l_296 < (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_119) |= (*l_123)), 9)), (((((0x17L || p_66) & l_296) , (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xD2C7L, g_122)), 1))) > 0x27154731L) , p_66))) , (*g_157)), g_149))) , 2L) < g_21)), 5))) > 0L) , l_307) != &l_189) , g_45))) ^ p_66) , p_66));
    }
    (*g_156) = (*l_105);

    ;
    return (*l_106);
}







static int * func_71(unsigned p_72)
{
    unsigned *l_79 = &g_80;
    int l_81 = 0x922041F5L;
    int *l_98 = &g_21;
    unsigned *l_99 = &g_100;
    int l_101 = 1L;
    short l_102 = 0x0EDDL;
    (*l_98) = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(func_4((((*l_79) = (safe_lshift_func_int8_t_s_u(((l_79 == (void*)0) >= ((((l_81 , (((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(1UL, (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_99) = (safe_mod_func_uint16_t_u_u(((((0x15A4L != l_81) >= func_4((safe_sub_func_uint32_t_u_u(l_81, (safe_add_func_int32_t_s_s(((*l_98) &= (safe_sub_func_int32_t_s_s((l_81 & (g_45 || l_81)), (-1L)))), 0x91BE676CL)))))) , p_72) , p_72), g_45))), 1L)), l_101)))) && 65535UL), p_72)) < g_43) , 65527UL)) == (-1L)) == 0xEEL) == l_102)), 6))) , p_72)), l_101)) , (*l_98)), p_72));
    (*l_98) ^= g_45;
    for (l_102 = 0; (l_102 != 18); ++l_102)
    {
        (*l_98) = func_4(p_72);
        if (g_9)
            continue;
        (*l_98) = func_4(g_100);
        g_21 = 0xBE98DF1EL;
    }
    return &g_45;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_856, "g_856", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
