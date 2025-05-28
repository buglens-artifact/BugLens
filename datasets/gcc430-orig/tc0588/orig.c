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



static int g_14 = 0xABFC3938L;
static char g_15 = 2L;
static unsigned short g_17 = 65527UL;
static unsigned short g_30 = 1UL;
static unsigned g_32 = 0x223DEC99L;
static int g_35 = 0x5D840DFEL;
static int *g_96 = &g_35;
static int **g_104 = &g_96;
static int ***g_103 = &g_104;
static unsigned char g_113 = 0xAEL;
static short g_126 = 0L;
static char g_129 = 1L;
static unsigned char g_132 = 249UL;
static short g_148 = 0x9647L;
static int g_150 = 7L;
static unsigned short *g_206 = &g_30;
static unsigned short **g_205 = &g_206;
static unsigned *g_244 = &g_32;
static unsigned **g_243 = &g_244;
static unsigned ***g_242 = &g_243;
static unsigned g_246 = 4294967295UL;
static int g_292 = (-1L);
static int g_300 = 0x50B3EC07L;
static short *g_394 = &g_126;
static unsigned short g_399 = 0x3181L;
static unsigned g_406 = 1UL;
static unsigned char *g_486 = &g_132;
static unsigned char **g_485 = &g_486;
static short g_490 = (-5L);
static unsigned char ****g_550 = (void*)0;
static unsigned ****g_618 = &g_242;
static unsigned *****g_617 = &g_618;
static unsigned char g_641 = 255UL;
static char g_667 = 0L;
static short g_799 = 0x3EF4L;
static unsigned g_816 = 1UL;
static unsigned short g_833 = 5UL;
static unsigned g_850 = 4294967295UL;
static unsigned *g_900 = &g_816;
static short **g_914 = &g_394;
static short ***g_913 = &g_914;
static int *g_1104 = &g_35;
static short g_1148 = 0x6632L;



static unsigned func_1(void);
static int func_2(int p_3, int p_4, unsigned p_5, char p_6, unsigned short p_7);
static short func_8(int p_9, char p_10, char p_11, int p_12);
static unsigned short ** func_36(unsigned * p_37, unsigned * p_38, int * p_39);
static unsigned * func_40(unsigned short * p_41);
static int func_44(unsigned short p_45, int p_46, unsigned short * p_47);
static char func_58(unsigned short p_59);
static short func_63(unsigned * p_64, int * p_65, unsigned char p_66, unsigned short ** p_67);
static unsigned * func_68(unsigned * p_69, unsigned short p_70, unsigned * p_71);
static unsigned * func_87(int p_88, unsigned p_89);
static unsigned func_1(void)
{
    int *l_13 = &g_14;
    unsigned short *l_16 = &g_17;
    int l_18 = (-7L);
    unsigned short *l_29 = &g_30;
    unsigned *l_31 = &g_32;
    int *l_33 = (void*)0;
    int *l_34 = &g_35;
    unsigned char l_1085 = 6UL;
    unsigned l_1086 = 4294967293UL;
    unsigned short l_1103 = 65535UL;
    int l_1119 = 0x404D78CEL;
    int l_1132 = 0xD21E8119L;
    if (func_2(((1L >= (func_8((~((*l_13) = 0x2B3B7BEDL)), g_15, ((((*l_16) = 0x566AL) || l_18) > ((*l_34) = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0x24DCL, (((safe_add_func_int16_t_s_s((((*l_31) ^= (safe_lshift_func_uint16_t_u_u(((((*l_29) = (g_15 ^ ((safe_sub_func_int8_t_s_s(g_15, 0xD7L)) & 0x0E7AD53AL))) ^ l_18) , 1UL), 8))) != g_15), 0x9E17L)) , g_32) , 3L))), g_15)) , g_30))), g_15) , (*l_13))) <= l_1085), g_850, l_1086, g_850, l_1086))
    {
        short l_1088 = 0xEC8FL;
        return l_1088;
    }
    else
    {
        int l_1089 = 0x9DC52BB1L;
        int l_1098 = (-3L);
        char *l_1113 = &g_667;
        unsigned char ***l_1115 = &g_485;
        unsigned char ****l_1114 = &l_1115;
        (*l_13) = l_1089;
        (**g_103) = &l_18;
        (*l_13) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((!(0x49D8L >= (safe_rshift_func_int8_t_s_u(0x4DL, ((((***g_103) = 0xE3EA5310L) | (*l_34)) , (l_1089 = 250UL)))))), 2)), ((safe_div_func_int8_t_s_s(0L, l_1098)) <= (*l_13))));
        (*g_1104) &= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((*g_206), l_1103)), (*l_13)));
    }
    (***g_103) = (***g_103);
    if ((+func_63(&l_1086, &l_18, ((**g_485) = (*l_34)), &g_206)))
    {
        unsigned short **l_1116 = (void*)0;
        unsigned short **l_1117 = &l_16;
        unsigned short *l_1118 = &l_1103;
        int l_1124 = 0x65CFC51EL;
        int l_1139 = (-1L);
        (***g_103) = (l_1119 <= (safe_rshift_func_uint8_t_u_u(5UL, (*l_13))));
        for (g_113 = (-21); (g_113 == 44); g_113 = safe_add_func_int8_t_s_s(g_113, 1))
        {
            unsigned short l_1127 = 65535UL;
            if ((***g_103))
                break;
            if (l_1127)
                continue;
        }
        l_1139 ^= ((***g_103) = (safe_lshift_func_uint8_t_u_u((((***g_103) < ((*g_206) < (safe_add_func_int32_t_s_s(((*g_1104) = (l_1132 <= ((*l_34) ^ (safe_div_func_int16_t_s_s(l_1124, ((safe_sub_func_int16_t_s_s((-1L), (safe_mod_func_uint16_t_u_u((((*l_13) |= (*g_1104)) != 3UL), l_1124)))) ^ (**g_914))))))), 0x3E8B46F4L)))) & l_1124), 7)));
        return (*l_34);
    }
    else
    {
        unsigned *l_1144 = (void*)0;
        int l_1145 = (-1L);
        unsigned short **l_1149 = &l_16;
        (*g_1104) = (((safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((*g_206) = (**g_205)), 7)) | ((*g_394) > (***g_913))), l_1145)) , l_1145) , (**g_104));
    }
    (*l_13) &= 1L;
    return g_246;
}







static int func_2(int p_3, int p_4, unsigned p_5, char p_6, unsigned short p_7)
{
    int *l_1087 = (void*)0;
    (*g_104) = l_1087;
    return p_7;
}







static short func_8(int p_9, char p_10, char p_11, int p_12)
{
    unsigned short *l_42 = (void*)0;
    unsigned l_636 = 4294967288UL;
    unsigned char *l_637 = (void*)0;
    unsigned char *l_638 = (void*)0;
    unsigned char *l_639 = (void*)0;
    unsigned char *l_640 = &g_641;
    unsigned *l_642 = (void*)0;
    unsigned short ***l_1047 = (void*)0;
    unsigned short ***l_1048 = &g_205;
    char *l_1055 = &g_667;
    char **l_1056 = &l_1055;
    char *l_1057 = &g_129;
    int l_1058 = 0x7E9DE98BL;
    short ****l_1059 = &g_913;
    short *l_1060 = (void*)0;
    short *l_1061 = &g_148;
    int l_1078 = 0x0D5D967BL;
    int l_1080 = 0L;
    (*l_1048) = func_36(func_40(l_42), ((g_300 , ((safe_mod_func_uint8_t_u_u((p_11 | (0xFE0F81F5L > p_10)), l_636)) <= (((*l_640) &= 252UL) | (g_292 || p_9)))) , l_642), l_642);
    if ((safe_sub_func_uint32_t_u_u((!(~((safe_div_func_int16_t_s_s(((((~((((((((*l_1059) = ((l_1058 = (l_636 <= ((*l_1057) = (0x7F51D4DBL > (!(&g_667 != ((*l_1056) = ((safe_sub_func_int8_t_s_s(((*l_1055) = g_35), g_300)) , (void*)0)))))))) , &g_914)) == (((*l_1061) &= ((*g_394) = p_10)) , &g_914)) ^ l_636) || 0xE630L) != p_11) , g_113) , l_1058)) && 0L) | (*g_244)) , l_1058), 0xB3DFL)) , l_1058))), p_9)))
    {
        unsigned short *l_1064 = &g_17;
        unsigned short *l_1065 = &g_17;
        int l_1066 = (-5L);
        int l_1069 = 1L;
        unsigned short l_1077 = 0x3B62L;
        int *l_1079 = &g_35;
        (*l_1079) &= (safe_sub_func_int32_t_s_s((l_1066 |= ((l_1064 = l_1064) == l_1065)), (safe_div_func_int32_t_s_s(((l_1069 , (g_399 = ((***l_1048) = (((((safe_add_func_uint16_t_u_u(((((****l_1059) = (*g_394)) && (p_10 || (safe_add_func_int16_t_s_s(((void*)0 == l_1065), (safe_div_func_uint8_t_u_u((p_12 , 0xADL), (**g_485))))))) , (**g_205)), p_10)) >= 0UL) ^ p_11) & 65535UL) || l_1078)))) , g_150), l_1058))));
    }
    else
    {
        return l_1080;
    }
    for (g_816 = (-19); (g_816 < 59); ++g_816)
    {
        unsigned **l_1083 = &l_642;
        int l_1084 = 0xBFC154DAL;
        (**g_618) = l_1083;
        return l_1084;
    }
    return l_1078;
}







static unsigned short ** func_36(unsigned * p_37, unsigned * p_38, int * p_39)
{
    char l_643 = (-1L);
    int l_657 = 0xC68E8089L;
    short **l_688 = &g_394;
    unsigned *l_691 = &g_32;
    unsigned short **l_692 = &g_206;
    short l_722 = 0x8AA3L;
    unsigned char ***l_775 = &g_485;
    unsigned *******l_836 = (void*)0;
    unsigned l_874 = 0UL;
    unsigned *l_902 = (void*)0;
    unsigned short l_907 = 0UL;
    unsigned char *****l_910 = &g_550;
    unsigned l_938 = 0x99D5224FL;
    int *l_966 = &g_35;
    unsigned short *l_978 = &g_399;
    unsigned short ***l_998 = &g_205;
    short l_1014 = (-9L);
    unsigned char l_1018 = 0UL;
    unsigned l_1035 = 0xC75495C2L;
    int *l_1036 = (void*)0;
    int *l_1037 = &g_292;
    unsigned short l_1045 = 0xCFCCL;
    if ((l_643 , (l_643 != l_643)))
    {
        int l_650 = (-1L);
        unsigned short **l_656 = &g_206;
        unsigned ******l_673 = (void*)0;
        int ***l_740 = (void*)0;
        int l_748 = 0x75BC0DC9L;
        unsigned *l_827 = &g_406;
        int *l_835 = &g_292;
        if ((+4L))
        {
            unsigned short l_646 = 65535UL;
            int *l_647 = &g_35;
            unsigned short **l_655 = &g_206;
            (*l_647) = (l_643 , (((**g_485) , (safe_lshift_func_int16_t_s_s(((*g_394) = ((void*)0 == &l_643)), (l_643 & (-1L))))) == ((***g_242) > l_646)));
            for (g_150 = 0; (g_150 <= 27); g_150 = safe_add_func_uint32_t_u_u(g_150, 9))
            {
                unsigned *l_651 = &g_246;
                int l_652 = 0xDA1E71EDL;
                l_657 &= (*l_647);
            }
            for (g_32 = 0; (g_32 < 30); g_32++)
            {
                char *l_660 = &g_15;
                int l_668 = 0L;
                int l_669 = (-1L);
                l_669 &= ((((*l_660) = (*l_647)) | ((**g_485) = 2UL)) ^ (safe_add_func_uint32_t_u_u((((-10L) & ((safe_mod_func_int16_t_s_s(l_650, 1L)) <= g_667)) & l_650), l_668)));
                (**g_103) = &l_669;
            }
            (*l_647) = (((***g_242) | (g_150 = 0L)) == l_650);
        }
        else
        {
            int *l_670 = &g_150;
            int **l_671 = &l_670;
            int *l_672 = &l_650;
            (*l_672) = (((*l_671) = l_670) != p_38);
            l_657 &= ((void*)0 == l_673);
        }
        for (g_246 = (-18); (g_246 != 42); g_246 = safe_add_func_int32_t_s_s(g_246, 1))
        {
            unsigned short l_678 = 9UL;
            int l_684 = 7L;
            unsigned short *l_685 = &g_399;
            int *l_710 = &l_650;
            short l_721 = (-1L);
            int *l_777 = (void*)0;
            if ((safe_add_func_uint8_t_u_u(((l_678 , (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(g_406)), (l_650 < l_643)))) > ((*l_685) = (l_684 = ((*g_206) ^= ((l_678 == (safe_div_func_int8_t_s_s(l_643, ((**g_485) &= ((l_657 & l_678) , l_650))))) ^ l_643))))), l_650)))
            {
                short ***l_689 = &l_688;
                int l_690 = (-1L);
                int *l_693 = &g_300;
                unsigned short *l_694 = &g_399;
                int l_696 = 0x64A7717BL;
                int l_697 = (-3L);
                unsigned ******l_717 = &g_617;
                unsigned l_732 = 7UL;
                int *l_749 = &g_150;
                l_657 = (safe_lshift_func_uint16_t_u_s((0xE331A505L & (9L >= l_643)), (((*l_689) = l_688) != (void*)0)));
                if (((((*g_206) || ((**l_656) = (l_684 >= l_678))) < l_690) ^ 0UL))
                {
                    int l_695 = (-5L);
                    unsigned l_735 = 4294967294UL;
                    unsigned char *l_760 = &g_641;
                    char *l_763 = &l_643;
                    if (l_678)
                    {
                        int **l_704 = &g_96;
                        int **l_705 = &g_96;
                        int **l_706 = &g_96;
                        int **l_707 = &g_96;
                        int **l_708 = &g_96;
                        int **l_709 = (void*)0;
                        unsigned *******l_718 = &l_717;
                        l_721 |= ((l_696 || ((g_15 , (((0UL ^ ((safe_mod_func_int16_t_s_s((*l_710), l_650)) , 0x3771L)) , (*p_37)) , 0x57L)) ^ (**g_485))) > 0UL);
                        (**g_103) = &l_695;
                        if (l_697)
                            continue;
                        (*l_710) &= ((*g_96) = l_722);
                    }
                    else
                    {
                        unsigned l_729 = 0x8A3B6B4EL;
                        int ****l_741 = &l_740;
                        int ****l_742 = &g_103;
                        unsigned char *l_745 = &g_641;
                        p_39 = func_87((0x5F245D47L != (safe_add_func_uint16_t_u_u(((+((**g_485) |= 0xDBL)) || ((l_695 , (safe_mod_func_uint32_t_u_u((***g_242), l_722))) > l_697)), (safe_mod_func_uint8_t_u_u(255UL, l_732))))), l_643);
                        if (l_690)
                            continue;
                        l_749 = &l_695;
                    }
                    (*l_749) = ((*l_710) <= (safe_mod_func_int16_t_s_s(((*g_394) = 0L), (*g_206))));
                    (*g_104) = func_87((safe_sub_func_uint32_t_u_u((***g_242), (-2L))), g_35);
                    (**g_103) = p_38;
                }
                else
                {
                    return l_656;
                }
                for (l_657 = 7; (l_657 != 8); ++l_657)
                {
                    return &g_206;
                }
            }
            else
            {
                int l_795 = 6L;
                int l_796 = 0x4CB401ACL;
                unsigned short **l_812 = (void*)0;
                char l_817 = 1L;
                unsigned *****l_822 = &g_618;
                unsigned *l_828 = &g_406;
                (*l_710) |= 0x2061A5A5L;
                for (g_667 = (-28); (g_667 != 19); g_667 = safe_add_func_int8_t_s_s(g_667, 6))
                {
                    unsigned char ***l_774 = (void*)0;
                    int l_781 = 0x4BA93529L;
                    unsigned char ***l_786 = (void*)0;
                    unsigned char l_798 = 246UL;
                    unsigned *l_815 = &g_816;
                    for (g_300 = 0; (g_300 != (-21)); g_300 = safe_sub_func_int32_t_s_s(g_300, 4))
                    {
                        unsigned char ****l_776 = &l_775;
                        int l_778 = 0x6BC76939L;
                        (*l_710) &= (l_774 != ((*l_776) = l_775));
                        (*g_104) = l_777;
                        (*l_710) = ((l_778 || (((**l_692) &= l_722) && (l_781 > (safe_rshift_func_int8_t_s_u(g_667, 2))))) <= (safe_rshift_func_int8_t_s_s((l_786 == (*l_776)), 0)));
                        l_781 |= ((*l_710) = l_778);
                    }
                    for (g_132 = 20; (g_132 == 2); g_132--)
                    {
                        unsigned l_797 = 4294967294UL;
                        p_39 = func_87((((((**l_688) = (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((((*g_206) < ((l_795 || l_781) <= ((((**g_243) & 0x1CD861BEL) != (*l_710)) != ((l_796 ^= func_63((**g_242), ((*g_104) = &l_684), l_781, &g_206)) < l_657)))) > 0x3A6D8093L) , l_797), l_798)), 6))) , (**g_205)) , (*g_96)) & (**g_243)), g_799);
                        (**g_104) = (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((**g_104) >= ((safe_rshift_func_int8_t_s_u(g_113, 0)) | (((void*)0 != (*g_485)) >= (*g_96)))), 3)) , (safe_mod_func_uint8_t_u_u(((l_795 && (safe_rshift_func_int16_t_s_u((*g_394), (*g_206)))) ^ l_797), 1UL))), l_657));
                        (**g_104) = l_781;
                    }
                    (*g_104) = func_87(l_643, (l_796 = (safe_mod_func_uint16_t_u_u((l_817 = (((l_798 ^ (*p_37)) <= l_795) | ((*l_815) = (*g_244)))), (((*p_37) < 4294967295UL) , (*g_394))))));
                }
                if (l_817)
                    break;
                for (g_113 = (-19); (g_113 >= 40); g_113 = safe_add_func_uint16_t_u_u(g_113, 9))
                {
                    unsigned *****l_823 = &g_618;
                    int l_824 = 0xB084031BL;
                    int *l_834 = &g_14;
                    for (g_292 = 25; (g_292 < 9); g_292--)
                    {
                        (*l_710) ^= (l_822 == l_823);
                    }
                    if (l_824)
                        break;
                    (*l_834) ^= l_650;
                }
            }
            (*g_104) = func_87(g_292, g_816);
            if (l_657)
                continue;
        }
        (*l_835) = l_643;
    }
    else
    {
        unsigned ***l_837 = (void*)0;
        int *l_844 = (void*)0;
        int *l_845 = &g_292;
        int l_848 = 0L;
        unsigned *l_849 = &g_406;
        int *l_851 = (void*)0;
        int *l_852 = &g_35;
        unsigned char *l_862 = (void*)0;
        (*l_852) |= ((((l_836 != (void*)0) <= ((void*)0 != l_837)) && (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((*l_845) = ((safe_rshift_func_int8_t_s_s((l_643 , (-4L)), 0)) , 0xA4990B94L)) ^ (safe_div_func_uint16_t_u_u((((*l_849) = l_848) , 0xAFB5L), (*g_394)))) || g_850), (*g_394))), (*g_486)))) , l_722);
        for (g_30 = 0; (g_30 > 46); g_30 = safe_add_func_int16_t_s_s(g_30, 1))
        {
            unsigned short l_883 = 65535UL;
            int *l_908 = (void*)0;
            for (l_722 = 6; (l_722 <= (-4)); l_722 = safe_sub_func_int32_t_s_s(l_722, 7))
            {
                int l_859 = 0xC9528167L;
                unsigned *******l_867 = (void*)0;
                int *l_885 = &l_859;
                unsigned short **l_886 = (void*)0;
                for (g_833 = 25; (g_833 < 27); ++g_833)
                {
                    if (l_859)
                        break;
                }
                if ((safe_mod_func_int32_t_s_s((l_862 == (**l_775)), (l_859 , (*p_37)))))
                {
                    char *l_868 = &g_129;
                    int l_869 = 1L;
                    unsigned short **l_884 = &g_206;
                    unsigned char l_901 = 1UL;
                    (*g_104) = func_87(g_641, ((((*l_868) &= ((safe_rshift_func_uint8_t_u_s((((4294967295UL <= (safe_sub_func_int32_t_s_s(((*l_845) = ((void*)0 != l_867)), (l_859 >= l_859)))) , l_643) , (**g_485)), 1)) & (-1L))) || l_859) >= (*l_852)));
                    if (l_874)
                    {
                        l_885 = (*g_104);
                    }
                    else
                    {
                        (**g_103) = &l_869;
                    }
                    (*l_852) = l_869;
                    for (g_799 = 0; (g_799 >= (-10)); g_799 = safe_sub_func_uint32_t_u_u(g_799, 8))
                    {
                        short l_893 = 0x279DL;
                        (*g_104) = p_38;
                        (*l_845) &= ((&g_618 == &g_618) && l_893);
                    }
                }
                else
                {
                    unsigned l_905 = 0UL;
                    for (g_490 = 28; (g_490 >= (-28)); g_490 = safe_sub_func_uint16_t_u_u(g_490, 6))
                    {
                        unsigned *l_906 = &l_874;
                        int l_909 = 0x5558DE95L;
                        (*l_852) = ((l_883 , (void*)0) != l_910);
                        (*l_845) |= (safe_mod_func_int32_t_s_s((*l_885), ((*l_852) ^= ((*****g_617) = (((*l_885) <= (**g_243)) == (((void*)0 == g_913) | ((l_905 | ((g_126 , (*g_206)) , (***g_913))) < (*g_900))))))));
                        (*l_852) = (*l_885);
                    }
                }
                for (g_17 = 22; (g_17 != 30); ++g_17)
                {
                    short l_917 = 0x6C14L;
                    (*l_852) = l_917;
                }
            }
            return &g_206;
        }
        (*g_104) = p_37;
    }
    for (g_799 = 13; (g_799 <= (-11)); g_799--)
    {
        unsigned l_924 = 1UL;
        unsigned char **l_929 = &g_486;
        int l_933 = 0x9EAC0995L;
        unsigned char ***l_954 = &l_929;
        for (l_643 = 0; (l_643 == 4); ++l_643)
        {
            char l_926 = 0L;
            int *l_971 = &l_933;
            unsigned l_997 = 4294967290UL;
            if (l_924)
            {
                int l_925 = 0x1BDCE53FL;
                unsigned l_941 = 1UL;
                unsigned l_946 = 7UL;
                unsigned short **l_949 = &g_206;
                if (l_925)
                {
                    short l_932 = 0x405DL;
                    if (l_925)
                        break;
                    if (l_722)
                    {
                        char *l_944 = &g_129;
                        char *l_945 = &l_926;
                        int *l_947 = &g_300;
                        int *l_948 = &g_292;
                        (*g_104) = (void*)0;
                        l_933 = (((*g_206) |= (safe_sub_func_uint8_t_u_u(l_932, l_926))) > l_932);
                        p_39 = func_87((l_924 , ((*l_947) = ((((((*l_945) = (safe_sub_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(l_938, (safe_div_func_uint32_t_u_u((***g_242), l_932)))) , l_941) < l_925), (safe_rshift_func_int8_t_s_s((l_932 , ((*l_944) = (l_933 = g_129))), 6))))) , l_946) , (*g_206)) && (*g_394)) , 0x3512CDEFL))), l_907);
                        (*l_948) &= l_932;
                    }
                    else
                    {
                        return l_949;
                    }
                    return &g_206;
                }
                else
                {
                    return &g_206;
                }
            }
            else
            {
                unsigned l_961 = 4UL;
                if (((safe_div_func_int8_t_s_s((((*****g_617) = (safe_mod_func_int8_t_s_s(0xCFL, (-3L)))) ^ ((void*)0 == l_954)), ((safe_mod_func_int8_t_s_s(l_933, l_926)) & 0xE039L))) | ((safe_mod_func_uint32_t_u_u(l_926, (safe_mod_func_int16_t_s_s(l_961, 0x9BB0L)))) != l_961)))
                {
                    int *l_962 = (void*)0;
                    int *l_963 = &g_35;
                    (*l_963) = l_643;
                    for (g_32 = (-13); (g_32 > 26); g_32 = safe_add_func_int8_t_s_s(g_32, 5))
                    {
                        (*g_104) = (l_874 , l_966);
                    }
                }
                else
                {
                    int *l_979 = &l_657;
                    unsigned char ***l_996 = &l_929;
                    (*l_979) ^= ((l_924 <= (safe_mod_func_uint16_t_u_u(((*l_971) & (*l_966)), 65535UL))) , l_961);
                    for (g_641 = (-25); (g_641 <= 42); g_641 = safe_add_func_int32_t_s_s(g_641, 6))
                    {
                        unsigned short ***l_988 = &g_205;
                        int l_991 = (-2L);
                        (*l_979) |= g_14;
                    }
                    if (((*l_979) = (*l_971)))
                    {
                        unsigned short l_994 = 65535UL;
                        unsigned short ***l_995 = &l_692;
                        (*l_979) &= (((((safe_lshift_func_uint16_t_u_u(((**g_205) = (l_994 & (-8L))), (*l_971))) , l_996) == (void*)0) == l_994) , 0xD67E5430L);
                        if (l_924)
                            break;
                        (*l_979) |= l_997;
                    }
                    else
                    {
                        unsigned short ***l_1000 = &l_692;
                        unsigned short ****l_999 = &l_1000;
                        (*l_979) ^= (((*l_999) = (l_998 = &g_205)) == (void*)0);
                        (*l_979) = ((*g_900) < (*l_966));
                        if (l_933)
                            continue;
                    }
                }
                (*l_971) = (-1L);
            }
            (*l_966) &= (*l_971);
            (*l_971) ^= (-1L);
        }
        if ((((0x42L > (safe_add_func_uint16_t_u_u(0UL, ((((*l_691) = (safe_mod_func_int8_t_s_s(l_924, (safe_lshift_func_uint16_t_u_u((**g_205), 1))))) < (((0UL != 8L) ^ ((((+0x1AL) != l_924) , g_150) , 0x14L)) , l_933)) , l_924)))) > l_924) > (*l_966)))
        {
            unsigned l_1015 = 0xA809489DL;
            int l_1016 = 0x91CF556EL;
            for (g_292 = 0; (g_292 == (-6)); --g_292)
            {
                unsigned char l_1013 = 246UL;
                unsigned char *l_1017 = &g_113;
                g_35 = ((*l_966) <= (((*l_1017) = (l_1016 |= ((safe_add_func_uint8_t_u_u(((***l_775) = l_933), (((((((safe_mod_func_uint32_t_u_u((l_1013 == l_1014), l_1015)) ^ l_1013) <= l_933) >= (*p_37)) | l_1013) , 0x02CBL) , 0x8BL))) >= l_1015))) ^ l_1015));
            }
            (**g_103) = &l_657;
        }
        else
        {
            l_1018 = ((*l_954) != (*l_954));
        }
        if (l_924)
            continue;
    }
    (*l_1037) &= (((safe_div_func_uint16_t_u_u((*g_206), (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((8UL | ((((*l_966) || ((*g_244) <= ((*l_966) == (safe_mod_func_int32_t_s_s(((*l_966) , (safe_add_func_uint8_t_u_u(0x8AL, (safe_lshift_func_uint16_t_u_u(((*l_966) , ((g_15 = ((((safe_rshift_func_uint8_t_u_s(((((*l_966) != 1UL) | 0L) , (*l_966)), (*l_966))) , (*l_966)) > (*l_966)) & g_816)) | g_129)), 13))))), (*g_244)))))) , (*l_966)) < (*l_966))) , l_1035), (*l_966))), (*g_244))))) , 0x69L) && (*l_966));
    if ((*l_966))
    {
        short l_1044 = 0xE423L;
        (**g_103) = func_87(g_799, ((((*l_966) | ((*g_394) >= (((*g_206) , ((*g_486) = (**g_485))) <= (safe_div_func_int32_t_s_s((*l_966), 0x2DE224D9L))))) <= (safe_div_func_int32_t_s_s((*l_966), l_1044))) || l_1044));
        l_1045 = l_1044;
        (*l_966) = l_1044;
    }
    else
    {
        int *l_1046 = (void*)0;
        (**g_103) = l_1046;
        (**g_103) = p_37;
    }
    return &g_206;
}







static unsigned * func_40(unsigned short * p_41)
{
    int *l_43 = &g_14;
    unsigned char l_344 = 0x62L;
    int l_369 = 0L;
    unsigned short **l_396 = &g_206;
    unsigned char *l_410 = &l_344;
    unsigned char **l_409 = &l_410;
    unsigned **l_414 = &g_244;
    char l_507 = (-9L);
    unsigned char ***l_522 = &l_409;
    unsigned l_566 = 4UL;
    short *l_577 = &g_126;
    unsigned short l_599 = 0xDE16L;
    unsigned char l_616 = 0x3CL;
    unsigned *****l_619 = (void*)0;
    (*l_43) = 0x2939C010L;
    if (func_44(((((*l_43) < (safe_lshift_func_int8_t_s_s((*l_43), 5))) , ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((*l_43), (safe_sub_func_uint32_t_u_u((*l_43), (0xCFL < 0L))))), 15)) || (*l_43))) | (safe_div_func_uint32_t_u_u((func_58((*l_43)) && (*l_43)), (*l_43)))), (*l_43), p_41))
    {
        int *l_257 = (void*)0;
        l_257 = ((*g_104) = l_257);
    }
    else
    {
        int l_277 = 0xB0AAA760L;
        unsigned short **l_280 = &g_206;
        unsigned short l_281 = 65534UL;
        unsigned char l_303 = 0x82L;
        int *l_349 = &g_150;
        unsigned ***l_388 = (void*)0;
        int l_392 = 0x0FD3A3C4L;
        unsigned l_453 = 1UL;
        short *l_475 = (void*)0;
        short *l_476 = &g_148;
        unsigned char ***l_487 = &g_485;
        unsigned char **l_488 = &l_410;
        short *l_489 = &g_490;
        int l_493 = (-1L);
        unsigned char ****l_552 = &l_522;
        int l_554 = 0xF05EA7E4L;
        short l_596 = (-8L);
        short **l_606 = &l_577;
        char *l_631 = &l_507;
        for (g_129 = 0; (g_129 <= (-7)); g_129 = safe_sub_func_uint8_t_u_u(g_129, 5))
        {
            unsigned *l_260 = (void*)0;
            int l_261 = 0x868E2EF6L;
            char *l_262 = &g_15;
            int *l_272 = &g_35;
            unsigned short **l_279 = &g_206;
            int *l_295 = &g_292;
            char l_350 = 0xE5L;
            unsigned char *l_408 = &g_113;
            unsigned char **l_407 = &l_408;
        }
        for (g_150 = 0; (g_150 < (-9)); g_150--)
        {
            short l_413 = 0xA796L;
            int l_428 = 0x0D181D2BL;
            unsigned *l_441 = &g_32;
            l_413 = (-10L);
            if (((*g_242) == (l_414 = l_414)))
            {
                unsigned ***l_421 = (void*)0;
                int l_426 = (-1L);
                short *l_427 = &g_148;
                if (((((safe_add_func_int16_t_s_s((*g_394), (*l_43))) <= ((safe_div_func_int32_t_s_s((((l_428 = (safe_mod_func_uint8_t_u_u(((l_421 != l_388) , ((*l_349) >= (safe_div_func_uint16_t_u_u((l_426 = (safe_div_func_int16_t_s_s(l_413, l_426))), ((*l_427) &= ((void*)0 == &g_150)))))), g_32))) >= l_413) < 253UL), (*l_43))) == (***g_242))) >= (***g_242)) > g_35))
                {
                    int l_439 = 0x8DFE0FB7L;
                    int l_440 = 0xD6011E4AL;
                    (*l_43) ^= l_426;
                    for (l_303 = 20; (l_303 >= 1); l_303--)
                    {
                        char l_433 = 0L;
                        int *l_438 = &g_150;
                        l_440 = (safe_mod_func_uint16_t_u_u(l_433, (safe_add_func_int32_t_s_s(l_433, ((((((safe_lshift_func_int8_t_s_u(((**g_242) != (((*l_349) , ((**l_396) ^= 65528UL)) , l_438)), g_113)) != (*l_43)) != l_413) >= (*l_43)) && (*l_438)) == 0L)))));
                    }
                    return l_441;
                }
                else
                {
                    if (l_428)
                        break;
                }
            }
            else
            {
                int l_446 = (-4L);
                int **l_472 = &l_349;
                unsigned short **l_474 = &g_206;
                for (l_392 = 0; (l_392 >= 7); ++l_392)
                {
                    char l_458 = 0xF6L;
                    unsigned char **l_470 = &l_410;
                    for (g_129 = 10; (g_129 == 20); g_129++)
                    {
                        (*l_43) ^= 0x4D4FCC94L;
                    }
                    (*l_43) = 0x143B8007L;
                    if (l_446)
                    {
                        unsigned short *l_448 = (void*)0;
                        unsigned short **l_447 = &l_448;
                        unsigned *l_454 = (void*)0;
                        unsigned *l_455 = (void*)0;
                        unsigned *l_456 = &l_453;
                        int *l_457 = &g_35;
                        int *l_459 = &l_277;
                        (*l_43) = (-1L);
                        (*l_459) &= (((((**l_396) = (*l_43)) < ((p_41 = p_41) != ((*l_447) = (void*)0))) | (safe_sub_func_int16_t_s_s((*g_394), (((((((((***g_242) != ((*l_456) = (safe_lshift_func_int16_t_s_s(l_453, 14)))) != ((*l_457) = (*l_349))) > l_458) , (*l_457)) == g_129) <= 0UL) || (*g_394)) | (*l_349))))) == (-10L));
                        (*l_457) &= l_458;
                        (*l_459) &= ((*l_349) , l_428);
                    }
                    else
                    {
                        unsigned char ***l_471 = &l_409;
                        unsigned **l_473 = &l_441;
                        (*l_43) = (**l_472);
                        (*l_43) |= ((*g_206) <= l_413);
                        (*l_43) = ((l_458 <= (*g_394)) , l_458);
                    }
                    if (l_413)
                        break;
                }
                (*g_104) = &l_428;
            }
        }
        if ((((*l_476) &= (*g_394)) ^ (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((*g_206) &= 0UL), (safe_mod_func_uint8_t_u_u((((void*)0 == (*g_243)) && ((*l_489) = (((*l_349) = (safe_mod_func_int8_t_s_s((((*l_487) = g_485) == l_488), ((((*l_43) , ((*l_349) == 0xA8L)) == (*l_349)) && (*l_43))))) ^ 65534UL))), 0xF8L)))) > l_392), 252UL))))
        {
            unsigned l_496 = 0xDEB6892BL;
            int l_510 = 0x646635DCL;
            unsigned char ***l_520 = &l_409;
            unsigned short **l_570 = &g_206;
            if ((((safe_add_func_uint32_t_u_u(((&g_300 != &l_392) || ((0x0A18L == 65535UL) && (((*g_486) = l_493) , (((0x7DFEB3A6L == ((safe_add_func_uint8_t_u_u((*g_486), l_496)) , (*l_349))) & (*l_349)) , (**g_485))))), (*g_244))) || (*l_349)) & l_496))
            {
                unsigned short l_508 = 0xCD38L;
                int l_509 = (-10L);
                int *l_511 = (void*)0;
                int *l_512 = &l_369;
                l_510 ^= ((*l_349) | (((*l_43) ^= l_496) <= (safe_mod_func_int32_t_s_s((((*g_486) , (*g_243)) == &l_453), (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((*g_486), 5)) <= ((safe_add_func_int16_t_s_s(((*g_394) ^ (**g_205)), (l_509 = (l_507 || l_508)))) & (**g_205))), (*l_349)))))));
                (*l_512) &= ((*l_349) &= (*l_43));
            }
            else
            {
                unsigned char ***l_519 = &g_485;
                unsigned char ****l_521 = &l_487;
                int l_527 = 6L;
                short ***l_528 = (void*)0;
                short **l_530 = &l_475;
                short ***l_529 = &l_530;
                int *l_567 = &l_554;
                int *l_571 = (void*)0;
                (*l_349) = (+((*g_206) , (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((*l_349) || (*l_349)), (safe_sub_func_uint8_t_u_u((((l_520 = l_519) == (l_522 = ((*l_521) = (void*)0))) <= 5L), (safe_rshift_func_int8_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u(l_527, l_527)))))))), (*l_43)))));
                (*l_529) = &g_394;
                (*l_43) = (~(*l_349));
                if ((*l_43))
                {
                    int l_534 = (-7L);
                    unsigned ****l_537 = &l_388;
                    unsigned *****l_553 = (void*)0;
                    (*g_104) = &l_510;
                    if ((*g_96))
                    {
                        int **l_531 = &l_43;
                        unsigned ****l_538 = &l_388;
                        unsigned *****l_539 = &l_538;
                        unsigned *l_544 = &g_406;
                        (*l_531) = ((**g_103) = (**g_103));
                        (***g_103) = l_527;
                        (*l_349) |= (safe_rshift_func_uint8_t_u_s(0xE8L, ((l_534 >= l_534) && (safe_sub_func_uint16_t_u_u((g_399 > (*g_486)), (**l_531))))));
                        (*l_43) = (((((*g_486) &= (l_537 == ((*l_539) = l_538))) & g_15) && (*l_349)) ^ l_534);
                    }
                    else
                    {
                        unsigned short l_545 = 0x1842L;
                        unsigned char *****l_551 = &l_521;
                        (**g_104) &= l_534;
                        (*g_96) = (+l_545);
                        (***g_103) |= (safe_add_func_int8_t_s_s(0L, g_148));
                        (**g_104) = (safe_sub_func_int8_t_s_s((((*l_551) = g_550) == ((*l_43) , l_552)), ((((**g_205) < ((**l_530) = (-1L))) <= (g_132 <= (l_554 &= ((void*)0 == l_553)))) <= ((*l_489) = (*l_349)))));
                    }
                }
                else
                {
                    unsigned l_559 = 6UL;
                    int l_568 = 0xAA53490FL;
                    unsigned *l_569 = &g_406;
                    (*l_43) &= (*l_349);
                    (*l_43) &= 0xDF2CCA17L;
                    l_571 = ((((*l_349) != (((((*l_476) = (((*l_43) , 0xEDL) > l_568)) , l_496) < (*l_43)) < l_568)) , (*g_394)) , (void*)0);
                    (**g_103) = &l_527;
                }
            }
            for (g_406 = 22; (g_406 != 14); --g_406)
            {
                unsigned *l_574 = &l_566;
                return (*l_414);
            }
            (*l_349) |= (*l_43);
            (*l_43) = (*l_43);
        }
        else
        {
            unsigned short l_575 = 0x1ED2L;
            short **l_576 = (void*)0;
            short ***l_607 = (void*)0;
            short ***l_608 = &l_606;
            int *l_611 = &l_277;
            unsigned *****l_620 = &g_618;
            unsigned ******l_621 = &l_620;
            char *l_622 = &g_15;
            char *l_623 = &l_507;
            int l_624 = (-1L);
            unsigned *l_625 = &g_406;
            l_369 ^= (l_575 , (((l_577 = p_41) == ((safe_div_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((+(safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((*g_394), (safe_rshift_func_uint16_t_u_s(5UL, ((safe_div_func_uint16_t_u_u((l_575 & (((safe_lshift_func_uint8_t_u_s(l_575, 5)) || (safe_add_func_uint8_t_u_u((((l_596 , ((safe_sub_func_int32_t_s_s(l_575, (((*g_243) == (void*)0) != (*g_206)))) || (*g_206))) , (***g_242)) | (***g_242)), (*l_43)))) != 0x2EL)), (*l_349))) & (*l_43)))))) <= (*l_43)), (*l_349)))) >= (*l_43)), (*g_394))) || (*l_349)), (*l_349))) , (*l_43)) | (**g_485)) >= 1UL), 0x55016A62L)) , (void*)0)) ^ 0xAEE4L));
            (*l_43) = (*l_43);
            (*l_611) = ((*l_349) = (((safe_add_func_uint8_t_u_u((*l_43), ((***l_487) |= (*l_43)))) & (safe_rshift_func_int8_t_s_s(0x4EL, (safe_add_func_uint32_t_u_u(((***g_242) = (&g_394 == ((*l_608) = l_606))), (*l_349)))))) , (((**g_243) < ((0x8AA4L <= ((!((*l_43) &= (safe_add_func_uint16_t_u_u(((*l_349) , (*l_349)), (**g_205))))) | 0xB8A4E314L)) , (*l_349))) , (*l_349))));
            (**g_103) = func_87((&g_550 == (void*)0), ((*l_625) = (((safe_sub_func_uint16_t_u_u(((((*l_611) &= (safe_div_func_int8_t_s_s((((((*l_43) = l_616) && ((l_619 = g_617) != ((*l_621) = l_620))) & ((*l_349) && (*l_349))) != ((*g_394) = ((*l_476) ^= (*l_349)))), ((*l_623) = ((*l_622) = 0xB7L))))) > l_624) && 0x0C00B2D0L), (**g_205))) ^ g_35) & 0x3797L)));
        }
        (*l_349) = (~l_566);
    }
    return (*l_414);
}







static int func_44(unsigned short p_45, int p_46, unsigned short * p_47)
{
    unsigned *l_164 = &g_32;
    unsigned **l_163 = &l_164;
    int l_172 = 0L;
    unsigned char *l_230 = &g_113;
    int *l_256 = &g_14;
    if (p_45)
    {
        int l_159 = 0x1D749550L;
        unsigned **l_165 = &l_164;
        for (g_148 = 24; (g_148 == 14); g_148 = safe_sub_func_int8_t_s_s(g_148, 9))
        {
            unsigned *l_161 = (void*)0;
            unsigned **l_160 = &l_161;
            unsigned ***l_162 = (void*)0;
            char l_175 = 0L;
            unsigned char *l_178 = &g_132;
            int *l_181 = &g_35;
            (**g_103) = func_87((p_45 != (((safe_rshift_func_int16_t_s_u(l_159, 4)) , (l_160 = (l_163 = l_160))) == l_165)), (safe_div_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_u(((((safe_add_func_int8_t_s_s(l_172, (safe_sub_func_uint32_t_u_u((65535UL || l_172), l_175)))) , 3UL) | 9UL) < g_126), 4))), 0x4CL)));
            (*l_181) = ((l_175 , (((&l_163 != (void*)0) < g_32) > ((-4L) < ((*l_178) = p_45)))) , (safe_mod_func_uint8_t_u_u((((*l_165) = &g_32) == (void*)0), g_126)));
            if ((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(l_159, p_45)) < ((((*l_165) = (void*)0) == (*l_163)) > ((safe_rshift_func_uint8_t_u_s((&l_181 != ((0x58F93B69L >= (0UL & p_46)) , &l_181)), l_172)) , 0x1146B1AAL))) > l_172), g_35)))
            {
                (*g_104) = &l_172;
                (**g_103) = (**g_103);
                (*g_104) = l_161;
            }
            else
            {
                for (p_45 = 0; (p_45 < 15); p_45 = safe_add_func_int8_t_s_s(p_45, 9))
                {
                    l_159 ^= (safe_rshift_func_int16_t_s_s((9L || g_14), (0x73L == p_45)));
                    if (p_46)
                        break;
                }
            }
        }
        for (g_132 = (-7); (g_132 <= 60); g_132++)
        {
            return p_46;
        }
    }
    else
    {
        int *l_196 = &g_35;
        unsigned short *l_199 = &g_17;
        unsigned short **l_198 = &l_199;
        unsigned l_210 = 9UL;
        int l_220 = 0xF9883E65L;
        unsigned l_223 = 0x53FEDF42L;
        (*g_96) = p_46;
        if ((***g_103))
        {
            unsigned l_194 = 0xAF73BA8EL;
            unsigned *l_195 = &g_32;
            unsigned char *l_197 = &g_113;
            short *l_200 = &g_148;
            char *l_207 = &g_15;
            unsigned char *l_208 = &g_132;
            char l_209 = 0x30L;
            (*l_196) = (((l_194 || (func_63(l_195, (**g_103), ((((void*)0 != (**g_103)) <= ((l_172 && ((*l_200) = (func_63(&g_32, l_196, ((((*l_197) &= g_132) == 2UL) < p_46), l_198) == g_30))) && l_172)) , 0x59L), &l_199) <= g_14)) && (*l_196)) , 0xB2BBD4C0L);
            (*l_196) = (safe_rshift_func_uint8_t_u_u(func_58((safe_mod_func_uint8_t_u_u(0UL, ((*l_208) |= (g_17 <= ((*l_207) = func_63(&g_32, &l_172, l_172, g_205))))))), ((l_209 , 0xA5L) & p_45)));
        }
        else
        {
            (*g_104) = l_196;
            g_150 ^= (**g_104);
            return l_210;
        }
        l_172 |= (***g_103);
        if ((***g_103))
        {
            int *l_211 = (void*)0;
            int l_221 = 0xC3766656L;
            (*g_104) = l_211;
            (*l_196) = p_45;
            for (p_46 = 0; (p_46 >= 14); p_46 = safe_add_func_int32_t_s_s(p_46, 1))
            {
                char *l_214 = &g_129;
                unsigned char *l_215 = &g_113;
                l_221 |= (((+g_132) > (((*l_214) ^= g_30) & ((*l_215) = p_46))) || (safe_sub_func_uint8_t_u_u(p_46, ((safe_div_func_uint32_t_u_u(p_46, p_45)) , (-1L)))));
            }
        }
        else
        {
            int *l_222 = &g_14;
            unsigned char *l_231 = &g_132;
            (*g_104) = (l_222 = &l_172);
            (**g_104) ^= (9L | l_223);
            for (g_150 = 0; (g_150 > 8); ++g_150)
            {
                unsigned char *l_233 = &g_132;
                int ***l_241 = (void*)0;
                unsigned *l_247 = &g_32;
                unsigned short **l_251 = (void*)0;
                for (g_14 = (-18); (g_14 <= 19); g_14++)
                {
                    unsigned char **l_232 = (void*)0;
                    unsigned char **l_234 = &l_231;
                    short *l_245 = &g_126;
                    unsigned l_248 = 0x297A455DL;
                    (*l_196) &= ((*l_222) = (safe_lshift_func_int8_t_s_u((l_172 | (((l_230 = (void*)0) != ((*l_234) = (l_233 = l_231))) != (safe_div_func_uint16_t_u_u(((p_46 || (g_15 | ((*l_245) = (((safe_add_func_uint32_t_u_u(((void*)0 == l_241), g_113)) , g_242) != &g_243)))) && (**g_205)), g_246)))), p_45)));
                    (*g_96) = func_63((((*g_206) & (**g_205)) , (p_45 , l_247)), l_222, l_172, l_251);
                }
                for (g_148 = (-25); (g_148 < 7); ++g_148)
                {
                    (*l_222) &= ((g_15 ^ (**g_205)) <= (((*l_196) = (~((**g_243) = p_45))) > 4294967295UL));
                }
                if (p_46)
                    break;
            }
        }
    }
    (*l_256) = p_45;
    (*l_256) = (*l_256);
    (**g_103) = &l_172;
    return (*l_256);
}







static char func_58(unsigned short p_59)
{
    short l_62 = (-7L);
    unsigned *l_86 = &g_32;
    char *l_90 = &g_15;
    unsigned *l_108 = &g_32;
    unsigned **l_107 = &l_108;
    unsigned l_109 = 0x179D740FL;
    unsigned short *l_135 = (void*)0;
    unsigned short **l_134 = &l_135;
    int *l_149 = &g_150;
    (*l_149) |= (!(safe_add_func_int32_t_s_s(((p_59 != (l_62 != (func_63(func_68(&g_32, ((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(((*l_90) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((65535UL || ((l_86 != ((*l_107) = func_87((p_59 == (l_62 || p_59)), (((*l_90) = g_32) , p_59)))) , 0xB847L)), l_109)), 0x12B152D5L))), p_59)), 4294967295UL)), (-1L))) <= l_109), g_14)), 0)) , p_59), l_86), l_86, l_62, l_134) != 0x01B0L))) , 0L), p_59)));
    for (g_30 = 18; (g_30 >= 30); g_30++)
    {
        if ((***g_103))
            break;
    }
    return p_59;
}







static short func_63(unsigned * p_64, int * p_65, unsigned char p_66, unsigned short ** p_67)
{
    char l_141 = 0xF8L;
    short l_142 = 0x6013L;
    int *l_143 = &g_35;
    short *l_144 = (void*)0;
    short *l_145 = &g_126;
    short *l_146 = &l_142;
    short *l_147 = &g_148;
    (*l_143) = (safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((0x2B88B27CL | (((g_126 = 0L) && ((*l_147) ^= ((*l_146) = (0UL | (safe_unary_minus_func_int8_t_s((l_141 && ((*l_145) &= ((*p_65) >= (((l_142 ^ l_142) < ((((((*p_64) < (**g_104)) != (*g_96)) , l_143) != l_143) < (*l_143))) == 0L)))))))))) && g_129)), (*l_143))) , p_66), 2));
    return g_113;
}







static unsigned * func_68(unsigned * p_69, unsigned short p_70, unsigned * p_71)
{
    unsigned char l_112 = 255UL;
    short *l_124 = (void*)0;
    short *l_125 = &g_126;
    char *l_127 = (void*)0;
    char *l_128 = &g_129;
    unsigned char *l_130 = (void*)0;
    unsigned char *l_131 = &g_132;
    int *l_133 = &g_35;
    (*g_104) = (((safe_add_func_uint8_t_u_u(l_112, g_113)) != (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(l_112, ((*l_131) |= (safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((((((*l_128) |= (((safe_rshift_func_int16_t_s_s(g_15, (g_17 <= (((p_70 | ((*l_125) &= g_14)) <= ((0x5CL < l_112) || g_32)) > (-1L))))) & (*p_71)) , 0x92L)) & 0xB5L) >= g_14) < (***g_103)), 7)) != p_70) , 0x06L), 0x8BL))))) , l_112) && g_30), p_70))) , (*g_104));
    (*l_133) = (l_112 , (**g_104));
    return l_133;
}







static unsigned * func_87(int p_88, unsigned p_89)
{
    char l_97 = (-8L);
    int l_105 = 0xB212F019L;
    unsigned *l_106 = (void*)0;
    for (p_88 = (-2); (p_88 <= (-5)); p_88 = safe_sub_func_int8_t_s_s(p_88, 4))
    {
        int *l_100 = &g_35;
        int **l_101 = (void*)0;
        int **l_102 = &l_100;
        for (g_17 = 0; (g_17 != 35); g_17 = safe_add_func_int8_t_s_s(g_17, 2))
        {
            int **l_95 = (void*)0;
            int **l_98 = &g_96;
            int ***l_99 = &l_98;
            g_96 = &g_14;
            g_35 = l_97;
            (*l_99) = l_98;
        }
        (*l_102) = l_100;
        (*l_102) = &g_35;
    }
    l_105 = ((g_103 == &g_104) > (p_88 <= g_15));
    return l_106;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_850, "g_850", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
