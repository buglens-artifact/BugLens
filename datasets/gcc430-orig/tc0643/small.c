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



static unsigned g_16 = 4294967287UL;
static int g_19 = 5L;
static unsigned short g_50 = 0xCF59L;
static unsigned g_65 = 0UL;
static int g_67 = (-10L);
static int *g_66 = &g_67;
static int g_71 = 0x7280DDA2L;
static char g_84 = 0L;
static short g_127 = 0xDC86L;
static short g_133 = 0L;
static int g_145 = 0x780BBC09L;
static int g_156 = 0xAC298B4AL;
static char g_166 = 0xF5L;
static unsigned short g_169 = 0xB4A2L;
static int g_181 = 0xFDF186BEL;
static unsigned g_192 = 1UL;
static char g_244 = 0x3BL;
static int *g_247 = &g_145;
static int * const *g_246 = &g_247;
static unsigned char g_341 = 1UL;
static unsigned g_466 = 0x94E5E5AFL;
static short g_621 = 0L;
static short g_627 = 0L;
static unsigned short g_631 = 0x9665L;
static int g_690 = 1L;
static int g_714 = 0x4407E7B2L;
static unsigned short g_729 = 65530UL;
static unsigned short g_798 = 65535UL;
static unsigned g_832 = 0xDC90E115L;
static char g_1025 = 0xD9L;
static unsigned short g_1028 = 65535UL;
static const short *g_1047 = &g_627;
static const short **g_1046 = &g_1047;
static short *g_1051 = &g_627;
static short **g_1050 = &g_1051;
static int g_1159 = 0xE5D19EDFL;
static short g_1180 = 1L;
static unsigned short g_1185 = 65530UL;
static unsigned *g_1196 = &g_832;
static int g_1219 = 1L;
static unsigned char g_1443 = 0xA8L;
static unsigned short *g_1541 = &g_631;
static unsigned short **g_1540 = &g_1541;
static int ***g_1577 = (void*)0;
static int ****g_1576 = &g_1577;
static char g_1583 = 0L;



static char func_1(void);
static unsigned short func_10(unsigned p_11);
static unsigned char func_56(int * p_57, const int * p_58);
static int * func_59(const unsigned p_60, int p_61, unsigned short p_62, int * p_63, unsigned p_64);
static int * func_86(char p_87, const char p_88);
static unsigned short func_89(char p_90, unsigned short p_91);
static int ** func_92(int p_93, int * const * p_94);
static int func_95(unsigned short p_96, unsigned p_97, unsigned char p_98, int p_99);
static int ** func_102(int p_103);
static int * const func_104(int ** p_105);
static char func_1(void)
{
    const short l_12 = 0xF40FL;
    unsigned *l_15 = &g_16;
    int l_53 = 1L;
    int *l_1545 = &g_1219;
    short **l_1556 = &g_1051;
    char *l_1575 = &g_1025;
    int *l_1584 = &g_145;
    unsigned short *l_1590 = &g_798;
    int l_1594 = 0x562E95D8L;
    int l_1596 = (-1L);
    (*l_1545) &= (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_10((l_12 > (safe_add_func_uint32_t_u_u(((*l_15) = 4294967295UL), l_12)))), 2L)), l_53)) >= ((safe_mul_func_uint8_t_u_u(l_53, func_56(func_59(l_12, g_65, l_12, g_66, g_67), &g_1219))) & 0UL)), g_1185));
    for (g_169 = 0; (g_169 < 51); g_169 = safe_add_func_int32_t_s_s(g_169, 7))
    {
        int *l_1548 = (void*)0;
        int **l_1549 = &g_247;
        char *l_1550 = &g_1025;
        char *l_1551 = &g_84;
        int l_1552 = 0x240698A7L;
        short **l_1555 = (void*)0;
        (*l_1549) = l_1548;
        l_1552 &= ((*l_1545) = ((~(((*l_1545) && (*g_1051)) > (*g_66))) == (func_89(((*l_1551) = ((*l_1550) = (((~g_466) <= func_10(g_690)) == ((*l_1545) != 0UL)))), ((**g_1540) = 0UL)) < 0x5259L)));
        (*g_66) = (safe_mul_func_int8_t_s_s((l_1555 == l_1556), ((*l_1545) ^ ((*l_1551) = (safe_mul_func_uint16_t_u_u((**g_1540), (safe_rshift_func_uint16_t_u_s(((g_466 | g_244) > (*l_1545)), ((*g_1051) &= (*l_1545))))))))));
    }
    if ((safe_add_func_uint32_t_u_u(0x9463914BL, (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((*l_1545), (safe_add_func_int16_t_s_s((((*l_1545) | (((*l_1545) > (*l_1545)) >= (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((*l_1545), (*l_1545))), ((*l_1575) = (((*l_1545) && (~((void*)0 != &g_66))) | g_127)))), 0x7AL)))) < (*g_1196)), 0x29BAL)))), 0xF2L)))))
    {
        const unsigned short l_1580 = 0x893AL;
        (*g_66) = (65535UL <= ((**l_1556) = (*g_1047)));
        return (*l_1545);
    }
    else
    {
        const int *l_1585 = (void*)0;
        unsigned short *l_1588 = &g_169;
        unsigned short **l_1589 = &l_1588;
        char **l_1591 = &l_1575;
        char *l_1593 = &g_1025;
        char **l_1592 = &l_1593;
        int l_1595 = 0x03DF8DD9L;
        short *l_1597 = &g_127;
        l_1545 = &l_53;
        l_1595 &= (*l_1584);
        (*l_1545) = ((*g_66) ^= ((((**g_1050) | (+(g_621 &= (**g_1050)))) != ((*l_1597) = l_1596)) & 1L));
    }
    return g_1583;
}







static unsigned short func_10(unsigned p_11)
{
    unsigned char l_17 = 7UL;
    int *l_18 = &g_19;
    int *l_20 = &g_19;
    int l_21 = 0x6160CBEBL;
    int *l_22 = (void*)0;
    int *l_23 = (void*)0;
    int l_24 = 0L;
    int *l_25 = &l_24;
    int *l_26 = &l_24;
    int l_27 = (-1L);
    int *l_28 = (void*)0;
    int *l_29 = &l_21;
    int l_30 = 7L;
    int *l_31 = &l_27;
    int *l_32 = &l_24;
    int *l_33 = &l_24;
    int *l_34 = &l_21;
    int *l_35 = &g_19;
    int *l_36 = &g_19;
    int l_37 = 0x92F1E5C8L;
    int *l_38 = &l_21;
    int l_39 = 0x45A8CCEDL;
    int *l_40 = &l_21;
    int *l_41 = &l_37;
    int *l_42 = &l_30;
    int *l_43 = &l_30;
    int *l_44 = &g_19;
    int *l_45 = &l_39;
    int *l_46 = &l_27;
    int *l_47 = &l_37;
    int *l_48 = (void*)0;
    int l_49 = 0xCBBBC254L;
    (*l_18) = (l_17 <= g_16);
    g_50--;
    return p_11;
}







static unsigned char func_56(int * p_57, const int * p_58)
{
    unsigned short l_1542 = 0UL;
    ++l_1542;
    return g_466;
}







static int * func_59(const unsigned p_60, int p_61, unsigned short p_62, int * p_63, unsigned p_64)
{
    unsigned char l_444 = 0x08L;
    const int l_445 = 0x4A9CA1E3L;
    int l_767 = 0x9018EF9AL;
    int l_773 = 6L;
    unsigned short *l_857 = &g_729;
    unsigned *l_862 = &g_192;
    unsigned short l_867 = 65535UL;
    char l_1045 = 0xE7L;
    char l_1054 = 1L;
    int l_1143 = 0L;
    int l_1150 = 0x1C5DA31AL;
    unsigned char *l_1198 = (void*)0;
    unsigned char *l_1199 = &l_444;
    char *l_1202 = &g_1025;
    int l_1310 = 8L;
    int l_1312 = 0xA724F08AL;
    int l_1326 = 1L;
    int l_1328 = 5L;
    int l_1339 = 8L;
    int l_1372 = 0x1BB9193FL;
    int l_1375 = 0x9A7819B8L;
    unsigned l_1376 = 0UL;
    int l_1396 = 1L;
    const int *l_1449 = &l_445;
    const int **l_1448 = &l_1449;
    const char l_1456 = (-3L);
    int **l_1504 = &g_66;
    unsigned char l_1518 = 255UL;
    for (p_61 = 0; (p_61 < (-14)); --p_61)
    {
        int *l_70 = &g_71;
        int l_764 = 0L;
        int l_774 = (-4L);
        int l_797 = 0L;
        char l_835 = 0xD4L;
        short **l_890 = (void*)0;
        int l_960 = 3L;
        unsigned short l_1055 = 1UL;
        short l_1081 = 0xD9EFL;
        int l_1105 = (-2L);
        int l_1119 = 0xADAB816EL;
        int l_1141 = 7L;
        unsigned char l_1195 = 1UL;
        if (((*l_70) |= (*g_66)))
        {
            short l_74 = 0xF81AL;
            const int l_100 = 0x718BA309L;
            int l_754 = 0x32F45397L;
            int l_780 = 0L;
            const char l_803 = 1L;
            for (p_64 = 24; (p_64 == 40); ++p_64)
            {
                char *l_83 = &g_84;
                int *l_751 = &g_145;
                if ((((l_74 != (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((*l_70), p_64)), (safe_mod_func_int16_t_s_s(g_65, (safe_mod_func_int16_t_s_s(g_65, (~((void*)0 != l_70))))))))) && ((*l_83) = g_67)) <= 0x56CFL))
                {
                    int **l_85 = &g_66;
                    int ***l_442 = &l_85;
                    int **l_750 = &g_66;
                    (*l_85) = l_70;
                    (*l_750) = func_86((l_444 = (func_89((!((((*l_442) = func_92(func_95(g_67, l_74, (**l_85), (g_71 != ((*l_83) ^= ((+0x4565L) | l_100)))), g_246)) == g_246) < p_62)), l_74) > p_64)), l_445);
                    return &g_181;
                }
                else
                {
                    return l_751;
                }
            }
            for (g_690 = 0; (g_690 >= 15); g_690 = safe_add_func_int8_t_s_s(g_690, 3))
            {
                int *l_755 = &g_145;
                int l_756 = 0x0FC767BCL;
                int *l_757 = (void*)0;
                int *l_758 = (void*)0;
                int *l_759 = (void*)0;
                int *l_760 = &g_145;
                int *l_761 = &g_145;
                int l_762 = (-1L);
                int *l_763 = (void*)0;
                int *l_765 = &l_762;
                int *l_766 = &g_67;
                int *l_768 = (void*)0;
                int *l_769 = (void*)0;
                int *l_770 = &g_71;
                int *l_771 = &l_764;
                int *l_772 = (void*)0;
                int *l_775 = &l_774;
                int *l_776 = &g_156;
                int *l_777 = &l_754;
                int *l_778 = &g_714;
                int *l_779 = &l_756;
                int *l_781 = &g_156;
                int *l_782 = (void*)0;
                int *l_783 = &l_756;
                int *l_784 = &g_181;
                int *l_785 = &l_762;
                int *l_786 = &l_767;
                int *l_787 = (void*)0;
                int *l_788 = &g_145;
                int *l_789 = &g_156;
                int *l_790 = &g_145;
                int *l_791 = &l_780;
                int *l_792 = &l_773;
                int *l_793 = &l_774;
                int *l_794 = &l_762;
                int *l_795 = &l_774;
                int *l_796 = &g_156;
                int **l_802 = &l_784;
                int ***l_801 = &l_802;
                g_798++;
                (*l_801) = &p_63;
                if (l_803)
                    continue;
            }
        }
        else
        {
            int *l_804 = &g_145;
            return l_804;
        }
        for (g_798 = 22; (g_798 >= 46); g_798++)
        {
            unsigned char *l_809 = &l_444;
            int l_812 = 0L;
            int l_825 = 0x3A2BE198L;
            unsigned short l_853 = 0x9B0EL;
            short *l_854 = &g_621;
            short *l_856 = &g_627;
            unsigned l_866 = 0x4CA89CF4L;
            unsigned l_868 = 8UL;
            unsigned short **l_1035 = &l_857;
            unsigned l_1042 = 0UL;
            const short ***l_1048 = (void*)0;
            const short ***l_1049 = &g_1046;
            short ***l_1052 = (void*)0;
            short ***l_1053 = &g_1050;
            const unsigned l_1056 = 0xA2C7D364L;
            int l_1112 = 0x16189462L;
            int l_1131 = 0x41DFE7E1L;
            int l_1146 = 0x3A4854F9L;
            int l_1154 = 8L;
            int l_1161 = 0x611FAA56L;
            int *l_1192 = &l_1131;
            unsigned char l_1197 = 0x1EL;
        }
    }
    if ((((*l_1199) = l_1143) ^ ((*l_1202) &= (0x8AF7L && (p_64 | (l_867 ^ (safe_lshift_func_uint16_t_u_s(l_445, 6))))))))
    {
        int *l_1203 = &g_156;
        int *l_1204 = &g_1159;
        int *l_1205 = (void*)0;
        int *l_1206 = (void*)0;
        int *l_1207 = &l_767;
        int *l_1208 = (void*)0;
        int *l_1209 = (void*)0;
        int *l_1210 = (void*)0;
        int *l_1211 = (void*)0;
        int *l_1212 = &l_767;
        int *l_1213 = &l_767;
        int *l_1214 = &g_181;
        int *l_1215 = &g_690;
        int *l_1216 = &l_1143;
        int *l_1217 = &g_71;
        int *l_1218 = &g_181;
        unsigned l_1220 = 4294967291UL;
        --l_1220;
    }
    else
    {
        unsigned short l_1230 = 1UL;
        int l_1233 = 1L;
        int *l_1234 = &l_773;
        int *l_1235 = &g_181;
        int *l_1236 = &l_773;
        int *l_1237 = &g_145;
        int *l_1238 = &l_1143;
        int l_1239 = 0x993599F1L;
        int *l_1240 = &l_767;
        int *l_1241 = &g_714;
        int *l_1242 = &l_1150;
        int *l_1243 = &g_156;
        int *l_1244 = &g_690;
        int *l_1245 = &g_181;
        int *l_1246 = (void*)0;
        int *l_1247 = &l_1233;
        int *l_1248 = &g_181;
        int *l_1249 = &l_773;
        int *l_1250 = &l_1143;
        int *l_1251 = (void*)0;
        int l_1252 = 8L;
        int *l_1253 = &l_773;
        int l_1254 = 9L;
        int *l_1255 = &g_690;
        int *l_1256 = &g_1219;
        int *l_1257 = (void*)0;
        int *l_1258 = (void*)0;
        int *l_1259 = &g_71;
        int *l_1260 = &l_1254;
        int *l_1261 = (void*)0;
        int *l_1262 = &l_1252;
        int l_1263 = 0x9CD3F009L;
        int *l_1264 = &g_714;
        int *l_1265 = (void*)0;
        int *l_1266 = &g_145;
        int *l_1267 = &g_1219;
        int l_1268 = 0x6332B884L;
        int *l_1269 = &g_156;
        int *l_1270 = &l_1268;
        int *l_1271 = &l_1233;
        int *l_1272 = &g_1159;
        int l_1273 = 0x724DCE0FL;
        int *l_1274 = &l_767;
        int *l_1275 = &g_181;
        int *l_1276 = &l_773;
        int *l_1277 = &g_1159;
        int *l_1278 = &g_1219;
        int *l_1279 = &l_1254;
        int *l_1280 = &g_181;
        int *l_1281 = &l_1233;
        int *l_1282 = (void*)0;
        int *l_1283 = &l_1233;
        int *l_1284 = &l_1263;
        int *l_1285 = (void*)0;
        int *l_1286 = &l_767;
        int *l_1287 = &g_156;
        int *l_1288 = &g_71;
        int *l_1289 = &l_1263;
        int *l_1290 = &g_1219;
        int *l_1291 = &g_71;
        int *l_1292 = &l_1233;
        int *l_1293 = &g_714;
        int *l_1294 = (void*)0;
        int *l_1295 = &l_1254;
        int *l_1296 = &g_156;
        int *l_1297 = &l_1268;
        int l_1298 = 0xF1389972L;
        int *l_1299 = &l_767;
        int *l_1300 = &l_1273;
        int *l_1301 = &l_767;
        int *l_1302 = &l_1150;
        int *l_1303 = &g_71;
        int *l_1304 = &l_1263;
        int *l_1305 = &g_1219;
        int *l_1306 = &l_1252;
        int *l_1307 = &l_1233;
        int *l_1308 = &l_1252;
        int *l_1309 = &l_1298;
        int *l_1311 = (void*)0;
        int *l_1313 = &l_1312;
        int *l_1314 = &g_1159;
        int *l_1315 = &g_714;
        int *l_1316 = &g_156;
        int *l_1317 = &l_1239;
        int l_1318 = 0L;
        int *l_1319 = &g_690;
        int *l_1320 = &l_1143;
        int *l_1321 = &g_67;
        int *l_1322 = (void*)0;
        int *l_1323 = &l_773;
        int *l_1324 = &l_1252;
        int *l_1325 = (void*)0;
        int *l_1327 = (void*)0;
        int *l_1329 = &l_1239;
        int *l_1330 = &l_1143;
        int *l_1331 = &l_1143;
        int *l_1332 = &g_1159;
        int *l_1333 = &l_1263;
        int *l_1334 = (void*)0;
        int *l_1335 = &l_1252;
        int *l_1336 = &l_1233;
        int *l_1337 = &l_767;
        int *l_1338 = &l_1263;
        int *l_1340 = &l_1310;
        int *l_1341 = &g_1219;
        int *l_1342 = &l_1252;
        int *l_1343 = &l_1150;
        int *l_1344 = (void*)0;
        int *l_1345 = &g_690;
        int *l_1346 = &l_1239;
        int *l_1347 = &g_714;
        int *l_1348 = &l_1312;
        int *l_1349 = &g_714;
        int *l_1350 = &g_67;
        int *l_1351 = &l_1298;
        int *l_1352 = &l_1150;
        int *l_1353 = &l_1318;
        int *l_1354 = &l_1254;
        int *l_1355 = &g_181;
        int *l_1356 = &l_1239;
        int *l_1357 = (void*)0;
        int *l_1358 = &g_1159;
        int *l_1359 = (void*)0;
        int *l_1360 = (void*)0;
        int *l_1361 = &l_1252;
        int *l_1362 = &l_1233;
        int *l_1363 = &l_1328;
        int *l_1364 = &l_1326;
        int *l_1365 = &l_1312;
        int l_1366 = 0xE65880C7L;
        int *l_1367 = (void*)0;
        int *l_1368 = &l_1263;
        int *l_1369 = &l_1268;
        int l_1370 = 0x61851666L;
        int l_1371 = 0xE3B71D9BL;
        int *l_1373 = &g_690;
        int *l_1374 = &l_1263;
        short l_1379 = (-4L);
        int *l_1380 = &l_1143;
        int *l_1381 = &l_1310;
        int *l_1382 = (void*)0;
        int *l_1383 = &g_67;
        int *l_1384 = &l_1252;
        int *l_1385 = (void*)0;
        int *l_1386 = &l_1318;
        int *l_1387 = &l_1263;
        int *l_1388 = &l_1366;
        int *l_1389 = &l_1263;
        int *l_1390 = (void*)0;
        int *l_1391 = &l_1326;
        int *l_1392 = &l_1326;
        int *l_1393 = &l_1328;
        int *l_1394 = &l_1375;
        int *l_1395 = &g_145;
        int *l_1397 = (void*)0;
        int *l_1398 = &l_1312;
        int *l_1399 = &l_1268;
        int *l_1400 = (void*)0;
        int *l_1401 = (void*)0;
        int *l_1402 = &l_1312;
        int *l_1403 = &l_1371;
        int *l_1404 = &l_1396;
        int *l_1405 = &g_1219;
        int *l_1406 = (void*)0;
        int *l_1407 = &l_1298;
        int *l_1408 = &l_1239;
        int *l_1409 = &g_145;
        int *l_1410 = (void*)0;
        int *l_1411 = &l_1150;
        int *l_1412 = (void*)0;
        int *l_1413 = &l_1254;
        int *l_1414 = &l_1375;
        int *l_1415 = &l_1143;
        int *l_1416 = &l_1233;
        int *l_1417 = &g_156;
        int *l_1418 = (void*)0;
        int *l_1419 = &l_1366;
        int *l_1420 = &l_773;
        int *l_1421 = &l_1263;
        int *l_1422 = (void*)0;
        int *l_1423 = &l_1263;
        int *l_1424 = &g_156;
        int *l_1425 = &l_1312;
        int *l_1426 = (void*)0;
        int *l_1427 = (void*)0;
        int *l_1428 = &l_1150;
        int *l_1429 = &l_1371;
        int *l_1430 = &l_773;
        int *l_1431 = &l_1268;
        int *l_1432 = &l_1328;
        int *l_1433 = &l_1328;
        int *l_1434 = &l_1263;
        int *l_1435 = &l_1328;
        int *l_1436 = (void*)0;
        int *l_1437 = &g_1219;
        int *l_1438 = &l_1318;
        int *l_1439 = &l_1263;
        int *l_1440 = &l_1371;
        int *l_1441 = &g_145;
        int *l_1442 = &l_1252;
        for (g_192 = 0; (g_192 <= 9); g_192 = safe_add_func_uint32_t_u_u(g_192, 3))
        {
            int *l_1225 = &l_1143;
            int *l_1226 = &g_714;
            int *l_1227 = (void*)0;
            int *l_1228 = &g_156;
            int *l_1229 = &l_767;
            l_1230++;
        }
        l_1376--;
        (*l_1304) = (*l_1302);
        ++g_1443;
    }
    if ((safe_mul_func_uint16_t_u_u((((*l_1448) = &p_61) == &p_61), 0x293EL)))
    {
        int **l_1450 = &g_247;
        (*l_1448) = ((*l_1450) = &g_714);
    }
    else
    {
        unsigned char l_1451 = 0UL;
        if ((l_1451 = (*g_247)))
        {
            return &g_156;
        }
        else
        {
            (*g_247) = (safe_add_func_uint32_t_u_u((*g_1196), l_1451));
        }
    }
    if ((safe_sub_func_int16_t_s_s((+l_1456), 0xFED4L)))
    {
        char *l_1463 = (void*)0;
        int l_1476 = 1L;
        int **l_1493 = &g_247;
        int ***l_1492 = &l_1493;
        int ****l_1491 = &l_1492;
        const short **l_1508 = (void*)0;
        unsigned short **l_1525 = &l_857;
        (*p_63) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(7UL, (*g_1196))), (*l_1449)));
        for (g_1180 = (-12); (g_1180 >= (-9)); g_1180 = safe_add_func_uint16_t_u_u(g_1180, 6))
        {
            int l_1482 = (-1L);
            const short **l_1510 = &g_1047;
            for (l_1310 = 15; (l_1310 < 26); l_1310++)
            {
                unsigned l_1483 = 0UL;
                for (l_1375 = 0; (l_1375 >= (-22)); l_1375 = safe_sub_func_int16_t_s_s(l_1375, 2))
                {
                    const unsigned short l_1488 = 6UL;
                    (**g_246) = (((*g_1196) = ((safe_mul_func_uint16_t_u_u((~((*g_1050) != l_857)), ((*p_63) && (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(l_1476, func_89((l_1476 != p_64), (safe_rshift_func_int8_t_s_u((-1L), (safe_mul_func_int16_t_s_s(((*g_1051) |= (safe_unary_minus_func_uint32_t_u(p_64))), 0L))))))) > 0x8E4CL), l_1482))))) > 0x4DC0L)) <= l_1483);
                    for (g_690 = 7; (g_690 >= (-8)); g_690 = safe_sub_func_uint16_t_u_u(g_690, 1))
                    {
                        (**g_246) = (l_1476 & (safe_mul_func_uint8_t_u_u(l_1488, ((*l_1202) = (safe_mul_func_int8_t_s_s((g_244 <= 0x3472L), ((*l_1199) = l_1482)))))));
                        (*g_247) |= 1L;
                    }
                }
                if (((*g_1196) < ((l_1491 != (void*)0) >= 0xC9879348L)))
                {
                    char *l_1496 = &g_84;
                    int l_1499 = 0xB29B5C1DL;
                    char *l_1505 = &g_166;
                    l_1396 &= (!((safe_sub_func_int8_t_s_s(((*l_1496) = ((*l_1202) = 0xD9L)), (**l_1493))) <= (safe_add_func_int8_t_s_s(((*l_1505) = (l_1499 == ((p_64 | (**g_1046)) && ((*p_63) = (~(safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((((*l_1449) && ((l_1504 = &p_63) == &g_247)) == func_89(g_631, l_1499)) <= (**g_1050)), l_1499)), (*g_66)))))))), 1UL))));
                    for (g_65 = 0; (g_65 <= 36); g_65 = safe_add_func_uint8_t_u_u(g_65, 2))
                    {
                    }
                }
                else
                {
                    const short ***l_1509 = &l_1508;
                    (**l_1504) = (((*l_1509) = l_1508) != l_1510);
                    (*g_66) = (**g_246);
                }
            }
            if (l_1482)
                break;
            (**g_246) = (*g_66);
            for (g_631 = (-13); (g_631 <= 29); ++g_631)
            {
                unsigned short **l_1516 = (void*)0;
                unsigned short ***l_1515 = &l_1516;
                int *l_1517 = &g_714;
                (*g_247) |= (safe_add_func_uint8_t_u_u(255UL, ((**l_1504) && (g_244 ^ (&l_857 == ((*l_1515) = &l_857))))));
                (**l_1492) = l_1517;
                (*p_63) = (*p_63);
                l_1518--;
            }
        }
        for (l_1376 = 0; (l_1376 > 3); ++l_1376)
        {
            int * const l_1528 = &g_714;
            char l_1537 = 0xD5L;
            (*p_63) &= (safe_sub_func_uint8_t_u_u(((void*)0 != l_1525), ((safe_rshift_func_int8_t_s_s((&p_61 != l_1528), 1)) ^ (*l_1528))));
            (*g_66) = (safe_lshift_func_int16_t_s_s((((*l_1202) = p_64) > (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((*g_1196) = ((safe_mod_func_uint16_t_u_u(0x7051L, (((*l_1528) = ((p_62 = ((**l_1525) &= g_84)) & (safe_mul_func_int8_t_s_s(p_61, ((void*)0 != g_1540))))) & p_64))) && (*l_1528))), (*p_63))), 0UL))), p_64));
        }
    }
    else
    {
        (**l_1504) = 3L;
    }
    return &g_181;
}







static int * func_86(char p_87, const char p_88)
{
    unsigned char l_446 = 0x68L;
    int *l_447 = &g_156;
    unsigned *l_452 = &g_192;
    short *l_455 = &g_127;
    int l_467 = 0x36AAFCD2L;
    int **l_468 = &g_247;
    int l_520 = (-1L);
    int l_532 = 0x345C20B6L;
    int l_539 = (-4L);
    int l_543 = 0xA2A389E9L;
    int l_554 = 0x8D5DC915L;
    int l_593 = 1L;
    int l_619 = (-1L);
    unsigned short l_634 = 0xD17EL;
    unsigned short l_732 = 65526UL;
    int l_744 = 0x72521209L;
    char *l_745 = (void*)0;
    char *l_746 = (void*)0;
    char *l_747 = &g_166;
    unsigned l_748 = 0xABD2FAB7L;
    int *l_749 = &g_690;
    (*l_447) = ((*g_247) = l_446);
    if (((l_467 || p_87) >= (*l_447)))
    {
        int *l_471 = &g_67;
        unsigned short *l_479 = &g_169;
        if (func_89((g_127 < (*l_447)), (*l_447)))
        {
            int ***l_469 = (void*)0;
            int ***l_470 = &l_468;
            (*l_468) = l_471;
        }
        else
        {
            unsigned char l_476 = 2UL;
            unsigned char l_477 = 0UL;
            char *l_478 = &g_84;
            (**g_246) &= (*l_447);
            (*l_468) = (*l_468);
            (*l_447) ^= ((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(p_87, 6)) != func_89(((*l_478) = (**l_468)), (((((*l_471) = (func_89(g_192, g_192) >= (**g_246))) && 0x7EL) & 0x7D99L) && p_88))) ^ 0xA488L), p_87)) ^ g_169);
        }
        (*g_247) = 0x8D32F107L;
        (*l_447) |= (*g_247);
        (**g_246) = p_87;
    }
    else
    {
        unsigned l_502 = 1UL;
        int l_523 = 4L;
        int l_541 = 0x1312F68CL;
        int l_574 = 5L;
        int l_577 = 0L;
        int l_582 = 0L;
        int l_590 = (-1L);
        int l_607 = 1L;
        int *l_637 = &g_67;
        int *l_638 = (void*)0;
        int *l_639 = &l_520;
        int *l_640 = (void*)0;
        int *l_641 = (void*)0;
        int *l_642 = &l_541;
        int *l_643 = (void*)0;
        int *l_644 = &l_520;
        int *l_645 = (void*)0;
        int *l_646 = &l_523;
        int *l_647 = (void*)0;
        int *l_648 = &l_532;
        int *l_649 = (void*)0;
        int *l_650 = (void*)0;
        int *l_651 = (void*)0;
        int *l_652 = (void*)0;
        int *l_653 = &g_71;
        int *l_654 = &l_593;
        int *l_655 = &l_523;
        int *l_656 = &l_582;
        int *l_657 = &g_71;
        int *l_658 = &l_523;
        int *l_659 = &l_574;
        int *l_660 = (void*)0;
        int *l_661 = &l_593;
        int *l_662 = &l_593;
        int *l_663 = &g_71;
        int *l_664 = &g_71;
        int *l_665 = &g_145;
        int *l_666 = &l_539;
        int *l_667 = (void*)0;
        int *l_668 = &l_590;
        int *l_669 = &l_523;
        int *l_670 = &g_181;
        int *l_671 = &l_543;
        int *l_672 = (void*)0;
        int *l_673 = &l_532;
        int *l_674 = &l_541;
        int *l_675 = &l_532;
        int *l_676 = &g_67;
        int *l_677 = &g_71;
        int *l_678 = (void*)0;
        int *l_679 = &l_541;
        int *l_680 = &g_145;
        int *l_681 = &g_181;
        int *l_682 = &g_181;
        int *l_683 = &g_145;
        int *l_684 = &l_582;
        int *l_685 = &l_590;
        int *l_686 = &l_523;
        int *l_687 = &l_520;
        int *l_688 = &l_574;
        int *l_689 = (void*)0;
        int *l_691 = &g_67;
        int *l_692 = &l_590;
        int *l_693 = (void*)0;
        int *l_694 = (void*)0;
        int *l_695 = &g_71;
        int *l_696 = (void*)0;
        int *l_697 = (void*)0;
        int *l_698 = &l_541;
        int *l_699 = &l_539;
        int *l_700 = &l_590;
        int *l_701 = &l_543;
        int *l_702 = &l_541;
        int *l_703 = &g_145;
        int *l_704 = &g_145;
        int *l_705 = &g_67;
        int *l_706 = &l_593;
        int *l_707 = &l_539;
        int *l_708 = &g_145;
        int *l_709 = &g_156;
        int *l_710 = (void*)0;
        int *l_711 = &l_539;
        int *l_712 = &g_67;
        int *l_713 = &l_543;
        int *l_715 = &g_145;
        int *l_716 = &g_71;
        int *l_717 = (void*)0;
        int *l_718 = &g_181;
        int *l_719 = &l_541;
        int *l_720 = (void*)0;
        int *l_721 = &l_607;
        int l_722 = 1L;
        int *l_723 = &l_607;
        int *l_724 = &l_543;
        int *l_725 = &l_523;
        int *l_726 = (void*)0;
        int *l_727 = &g_145;
        int *l_728 = &g_714;
        if ((safe_add_func_int32_t_s_s((+p_88), (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*g_247), g_466)), (safe_lshift_func_uint8_t_u_s(0xCBL, 6)))))))
        {
            int *l_490 = &g_71;
            int *l_491 = (void*)0;
            int *l_492 = &g_71;
            int l_493 = 0x88D3ECBDL;
            int *l_494 = (void*)0;
            int *l_495 = &g_71;
            int *l_496 = &g_67;
            int *l_497 = &g_71;
            int *l_498 = (void*)0;
            int *l_499 = &g_181;
            int l_500 = 0x37839183L;
            int *l_501 = &l_493;
            int *l_505 = &g_71;
            int *l_506 = &g_156;
            int *l_507 = &g_181;
            int *l_508 = &l_493;
            int *l_509 = &l_500;
            int *l_510 = (void*)0;
            int *l_511 = &g_181;
            int *l_512 = &g_145;
            int *l_513 = &g_145;
            int *l_514 = (void*)0;
            int *l_515 = &g_156;
            int *l_516 = &g_71;
            int *l_517 = (void*)0;
            int *l_518 = &g_181;
            int *l_519 = (void*)0;
            int *l_521 = &g_145;
            int *l_522 = &g_145;
            int *l_524 = &l_523;
            int *l_525 = &l_493;
            int *l_526 = (void*)0;
            int *l_527 = (void*)0;
            int *l_528 = (void*)0;
            int *l_529 = &l_520;
            int *l_530 = (void*)0;
            int *l_531 = &g_181;
            int *l_533 = &g_181;
            int *l_534 = &g_181;
            int *l_535 = &l_500;
            int *l_536 = &l_520;
            int *l_537 = &l_532;
            int *l_538 = (void*)0;
            int *l_540 = &g_71;
            int *l_542 = &g_145;
            int *l_544 = &g_156;
            int *l_545 = &l_541;
            int *l_546 = &l_520;
            int *l_547 = &g_181;
            int *l_548 = &g_156;
            int *l_549 = &l_543;
            int *l_550 = (void*)0;
            int *l_551 = (void*)0;
            int *l_552 = &l_523;
            int *l_553 = &g_145;
            int *l_555 = &l_541;
            int *l_556 = &l_539;
            int *l_557 = &l_539;
            int *l_558 = &l_520;
            int *l_559 = &l_493;
            int *l_560 = &l_523;
            int l_561 = 0x28FBD838L;
            int *l_562 = &l_493;
            int *l_563 = &l_539;
            int *l_564 = (void*)0;
            int *l_565 = &l_543;
            int *l_566 = &l_561;
            int *l_567 = &l_539;
            int *l_568 = &l_543;
            int l_569 = (-7L);
            int *l_570 = &l_569;
            int *l_571 = &l_493;
            int *l_572 = &g_71;
            int *l_573 = &l_523;
            int *l_575 = &g_181;
            int *l_576 = (void*)0;
            int *l_578 = (void*)0;
            int *l_579 = &l_577;
            int *l_580 = &l_493;
            int *l_581 = (void*)0;
            int *l_583 = (void*)0;
            int *l_584 = &l_500;
            int *l_585 = &l_500;
            int *l_586 = &l_541;
            int *l_587 = &l_561;
            int *l_588 = &l_523;
            int *l_589 = &g_181;
            int *l_591 = &g_156;
            int *l_592 = (void*)0;
            int l_594 = 1L;
            int *l_595 = &l_523;
            int *l_596 = &l_594;
            int *l_597 = (void*)0;
            int *l_598 = &l_500;
            int *l_599 = (void*)0;
            int *l_600 = &g_67;
            int *l_601 = &l_594;
            int *l_602 = &l_594;
            int *l_603 = (void*)0;
            int *l_604 = &l_539;
            int *l_605 = &l_523;
            int *l_606 = (void*)0;
            int l_608 = (-3L);
            int *l_609 = &l_577;
            int *l_610 = &l_577;
            int *l_611 = &l_594;
            int *l_612 = &l_541;
            int *l_613 = (void*)0;
            int *l_614 = &l_539;
            int *l_615 = &l_539;
            int *l_616 = &l_590;
            int *l_617 = &l_593;
            int *l_618 = (void*)0;
            int *l_620 = (void*)0;
            int *l_622 = &l_561;
            int *l_623 = &l_500;
            int *l_624 = &l_500;
            int *l_625 = &l_574;
            int *l_626 = &l_582;
            int *l_628 = &l_608;
            int *l_629 = (void*)0;
            int *l_630 = &l_541;
            --l_502;
            ++g_631;
            --l_634;
            (*l_570) = ((*l_624) = p_88);
        }
        else
        {
            (**g_246) = p_88;
        }
        ++g_729;
        g_66 = ((*l_468) = &g_181);
    }
    (*l_749) &= ((&g_246 != &l_468) | (~((l_732 | (safe_add_func_uint8_t_u_u((((*l_447) ^= 0UL) & ((safe_add_func_uint8_t_u_u(1UL, 0xE8L)) >= ((*l_452) = func_89((safe_unary_minus_func_int8_t_s(((safe_add_func_uint8_t_u_u(0xF5L, (l_748 = func_89(p_88, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*l_747) = (((9L >= l_744) <= (*g_247)) >= 0L)), p_87)), (-7L))))))) >= 1UL))), g_67)))), p_88))) == 0x55L)));
    return (*l_468);
}







static unsigned short func_89(char p_90, unsigned short p_91)
{
    int l_443 = 3L;
    return l_443;
}







static int ** func_92(int p_93, int * const * p_94)
{
    int *l_250 = &g_71;
    int l_287 = 0x0DB34691L;
    int l_324 = (-8L);
    char *l_330 = &g_84;
    int *l_375 = &g_156;
    unsigned l_439 = 0x9B656CCAL;
    if ((*g_247))
    {
        char l_266 = 0xC9L;
        int l_284 = 0x12B29A1DL;
        int l_306 = (-9L);
        unsigned *l_333 = &g_192;
        short l_334 = 0x6DF7L;
        short *l_337 = &g_133;
        unsigned char *l_340 = &g_341;
        int *l_344 = &l_287;
        int **l_345 = &g_66;
        if ((safe_sub_func_int8_t_s_s((-1L), g_145)))
        {
            int *l_258 = &g_71;
            int ** const l_257 = &l_258;
            int ** const *l_256 = &l_257;
            int ** const **l_255 = &l_256;
            l_250 = l_250;
            if ((safe_add_func_int32_t_s_s(((**p_94) = 1L), ((safe_sub_func_uint32_t_u_u((g_169 < g_244), (-7L))) == (((*l_255) = (void*)0) == (void*)0)))))
            {
                int **l_259 = &g_247;
                return l_259;
            }
            else
            {
                int **l_262 = &l_258;
                for (g_71 = 0; (g_71 != 24); g_71++)
                {
                    return &g_247;
                }
            }
        }
        else
        {
            unsigned l_265 = 3UL;
            int *l_269 = &g_67;
            int *l_270 = &g_71;
            int *l_271 = &g_156;
            int *l_272 = &g_71;
            int *l_273 = (void*)0;
            int *l_274 = (void*)0;
            int *l_275 = &g_181;
            int *l_276 = &g_156;
            int *l_277 = &g_67;
            int *l_278 = &g_67;
            int *l_279 = &g_67;
            int *l_280 = (void*)0;
            int *l_281 = &g_145;
            int *l_282 = &g_67;
            int *l_283 = (void*)0;
            int *l_285 = &g_67;
            int *l_286 = &g_71;
            int *l_288 = (void*)0;
            int *l_289 = &g_145;
            int l_290 = 0xBA3292ADL;
            int *l_291 = (void*)0;
            int *l_292 = &g_71;
            int *l_293 = &g_71;
            int *l_294 = &g_67;
            int *l_295 = &g_156;
            int *l_296 = &g_71;
            int *l_297 = &l_287;
            int *l_298 = &g_67;
            int *l_299 = &g_145;
            int *l_300 = &l_284;
            int *l_301 = &g_145;
            int *l_302 = &l_287;
            int *l_303 = &g_145;
            int *l_304 = &l_287;
            int *l_305 = (void*)0;
            int *l_307 = &g_181;
            int *l_308 = &l_290;
            int *l_309 = &g_145;
            int *l_310 = &g_181;
            int l_311 = 4L;
            int *l_312 = &l_311;
            int *l_313 = &l_311;
            int *l_314 = &l_287;
            int l_315 = 0L;
            int *l_316 = (void*)0;
            int *l_317 = (void*)0;
            int *l_318 = &g_67;
            int l_319 = 0x376514B0L;
            int *l_320 = &g_71;
            int *l_321 = (void*)0;
            int *l_322 = &l_306;
            int *l_323 = &l_311;
            int *l_325 = &l_284;
            unsigned short l_326 = 65535UL;
            unsigned l_329 = 1UL;
            if ((**p_94))
            {
                int *l_263 = &g_145;
                int **l_264 = &l_250;
                (*l_264) = l_263;
                l_266 = l_265;
                (**g_246) = l_266;
            }
            else
            {
                int **l_267 = &g_247;
                int **l_268 = &g_66;
                (*l_267) = (*g_246);
                (*l_268) = (*g_246);
            }
            l_326++;
            l_329 |= 1L;
        }
        (*l_344) |= ((l_284 &= (-1L)) >= (((&l_266 != l_330) > (safe_mul_func_int16_t_s_s((((*l_250) = ((*l_333) &= 0xF8201C62L)) == 4294967286UL), l_334))) & ((((*l_337) = (safe_mul_func_int8_t_s_s(g_156, g_244))) | (safe_rshift_func_uint8_t_u_s((+(--(*l_340))), 2))) || g_133)));
        (*l_345) = (*p_94);
        for (g_156 = 0; (g_156 == 7); g_156 = safe_add_func_int32_t_s_s(g_156, 1))
        {
            int l_357 = 0x0779CC83L;
            int l_358 = 0L;
            (*l_250) = (**p_94);
            for (g_244 = (-17); (g_244 != (-17)); ++g_244)
            {
                int **l_350 = &g_247;
                (*l_350) = (*p_94);
                l_358 |= ((safe_sub_func_uint16_t_u_u((((((*g_66) &= (-1L)) != (g_127 > p_93)) > (0x983FL | (*l_344))) ^ ((safe_sub_func_uint8_t_u_u(0x64L, (((safe_sub_func_uint8_t_u_u(l_357, g_71)) == ((*l_330) &= ((g_133 |= (&g_66 == (void*)0)) < g_67))) || g_341))) | g_67)), g_71)) | g_127);
            }
        }
    }
    else
    {
        int l_363 = 0x3221AC85L;
        (**p_94) ^= (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(p_93, l_363)) == g_169), (safe_rshift_func_int16_t_s_u((-7L), p_93))));
    }
    (**g_246) = (0UL >= ((safe_lshift_func_int16_t_s_s((0UL ^ (**p_94)), (*l_250))) <= (((l_250 != l_250) == (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*l_375) = (safe_unary_minus_func_uint16_t_u(0x59D9L))), (*g_247))), (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((p_93 > (*l_250)))), (**p_94))))) <= g_67), g_244))) == p_93)));
    for (l_287 = 1; (l_287 != (-27)); l_287 = safe_sub_func_int32_t_s_s(l_287, 1))
    {
        int **l_381 = &l_250;
        int **l_382 = &l_375;
        int *l_383 = &g_156;
        int *l_384 = &l_324;
        int *l_385 = &g_181;
        int *l_386 = &g_181;
        int *l_387 = &g_181;
        int *l_388 = &l_324;
        int *l_389 = &g_181;
        int *l_390 = &g_71;
        int *l_391 = &l_324;
        int *l_392 = &l_324;
        int *l_393 = &g_67;
        int *l_394 = &g_156;
        int *l_395 = &g_156;
        int *l_396 = &g_181;
        int *l_397 = (void*)0;
        int *l_398 = &l_324;
        int *l_399 = &g_156;
        int l_400 = 0x9A9A7229L;
        int *l_401 = (void*)0;
        int *l_402 = &g_67;
        int *l_403 = &l_400;
        int *l_404 = &l_324;
        int *l_405 = &l_324;
        int *l_406 = (void*)0;
        int *l_407 = &g_71;
        int *l_408 = &g_67;
        int *l_409 = &l_324;
        int *l_410 = (void*)0;
        int l_411 = 0x7098317EL;
        int *l_412 = &g_67;
        int *l_413 = &l_324;
        int *l_414 = &l_324;
        int *l_415 = (void*)0;
        int *l_416 = &l_324;
        int *l_417 = &g_71;
        int *l_418 = &l_411;
        int *l_419 = &g_181;
        int *l_420 = &g_67;
        int *l_421 = &l_411;
        int *l_422 = &g_71;
        int *l_423 = &g_156;
        int *l_424 = &g_71;
        int *l_425 = &g_181;
        int *l_426 = &g_145;
        int *l_427 = &l_324;
        int *l_428 = &l_400;
        int *l_429 = &l_324;
        int *l_430 = &g_67;
        int *l_431 = &g_67;
        int *l_432 = &l_400;
        int *l_433 = &g_145;
        int *l_434 = &g_156;
        int *l_435 = &g_67;
        unsigned l_436 = 0x0869E2DFL;
        (*l_381) = &l_324;
        (*l_382) = (*g_246);
        l_436--;
        --l_439;
    }
    return &g_66;
}







static int func_95(unsigned short p_96, unsigned p_97, unsigned char p_98, int p_99)
{
    int **l_101 = (void*)0;
    int ***l_225 = (void*)0;
    int **l_227 = &g_66;
    int ***l_226 = &l_227;
    int *l_228 = (void*)0;
    int *l_229 = &g_67;
    unsigned *l_232 = (void*)0;
    unsigned *l_233 = &g_192;
    unsigned char l_234 = 0x4BL;
    int ***l_241 = &l_101;
    const short l_245 = 0L;
    (*l_229) = (l_101 != ((*l_226) = func_102(p_99)));
    (*l_229) |= ((safe_sub_func_uint32_t_u_u(((*l_233) = g_181), l_234)) > ((g_244 = (safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((p_97 = (safe_rshift_func_int16_t_s_s(((((*l_226) = &g_66) == ((*l_241) = (void*)0)) == (l_241 != l_226)), 3))), g_71)) < (safe_add_func_int16_t_s_s(g_84, ((l_229 == (void*)0) == (-7L))))) < p_99), p_98))) ^ l_245));
    return p_96;
}







static int ** func_102(int p_103)
{
    int **l_106 = &g_66;
    int **l_197 = &g_66;
    char *l_214 = &g_84;
    unsigned short l_221 = 9UL;
    int l_222 = 0x34A9EDB9L;
    int *l_223 = &g_67;
    int *l_224 = &g_181;
    (*l_197) = func_104(l_106);
    (*l_224) &= (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((+p_103), (-7L))) <= (safe_mul_func_int16_t_s_s(((p_103 & (((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((p_103 || g_166) > (safe_sub_func_int8_t_s_s(((*l_214) = ((safe_mul_func_uint8_t_u_u(255UL, p_103)) > g_169)), (!(safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*l_223) &= ((((((safe_mul_func_uint8_t_u_u(l_221, g_127)) > g_156) & l_222) != 4294967286UL) < p_103) >= 9UL)), g_133)), g_166)))))), p_103)), p_103)) < 0xC8L) > p_103)) > 253UL), p_103))), 1UL)), p_103));
    return &g_66;
}







static int * const func_104(int ** p_105)
{
    int *l_108 = &g_71;
    int l_114 = 0xEFD0E68AL;
    int l_136 = 0L;
    int l_152 = 1L;
    int l_153 = 1L;
    int *l_196 = &g_67;
    if (((*g_66) = (*g_66)))
    {
        int *l_107 = &g_67;
        int *l_109 = &g_67;
        int *l_110 = &g_71;
        int *l_111 = (void*)0;
        int *l_112 = &g_71;
        int *l_113 = (void*)0;
        int l_115 = (-1L);
        int *l_116 = (void*)0;
        int *l_117 = &l_115;
        int *l_118 = &g_71;
        int *l_119 = (void*)0;
        int *l_120 = &g_67;
        int *l_121 = &l_114;
        int *l_122 = &g_67;
        int *l_123 = &l_115;
        int *l_124 = &l_115;
        int *l_125 = &l_115;
        int *l_126 = &l_114;
        int *l_128 = &l_114;
        int *l_129 = (void*)0;
        int *l_130 = &g_71;
        int *l_131 = &l_114;
        int *l_132 = &g_67;
        int *l_134 = &g_67;
        int *l_135 = &l_115;
        int *l_137 = &l_114;
        int *l_138 = &l_114;
        int *l_139 = &l_136;
        int *l_140 = &l_136;
        int *l_141 = &l_114;
        int *l_142 = (void*)0;
        int *l_143 = &l_114;
        int l_144 = (-5L);
        int l_146 = 0L;
        int *l_147 = &g_67;
        int *l_148 = &l_114;
        int *l_149 = &g_145;
        int *l_150 = (void*)0;
        int *l_151 = &l_136;
        int *l_154 = &l_153;
        int *l_155 = &g_67;
        int *l_157 = (void*)0;
        int *l_158 = (void*)0;
        int *l_159 = &l_114;
        int *l_160 = &l_153;
        int *l_161 = &g_145;
        int *l_162 = (void*)0;
        int l_163 = 0x47BED265L;
        int *l_164 = &g_156;
        int *l_165 = &l_114;
        int *l_167 = &g_156;
        int l_168 = 1L;
        (*l_107) |= (**p_105);
        l_108 = &g_67;
        g_169++;
        for (l_168 = 0; (l_168 <= 19); l_168 = safe_add_func_uint32_t_u_u(l_168, 4))
        {
            char l_174 = 0x9EL;
            int *l_175 = &g_145;
            int *l_176 = &g_67;
            int *l_177 = (void*)0;
            int *l_178 = &l_144;
            int *l_179 = &g_145;
            int *l_180 = &l_114;
            int *l_182 = &l_136;
            int *l_183 = &l_153;
            int *l_184 = &g_181;
            int *l_185 = &l_152;
            int l_186 = 0xD3A0897DL;
            int *l_187 = &g_156;
            int *l_188 = &l_163;
            int *l_189 = &l_144;
            int *l_190 = (void*)0;
            int *l_191 = &l_136;
            g_192++;
        }
    }
    else
    {
        int * const l_195 = (void*)0;
        (*p_105) = (*p_105);
        return l_195;
    }
    (*p_105) = (*p_105);
    (*p_105) = l_196;
    return &g_181;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
