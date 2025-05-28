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


union U0 {
   unsigned f0;
   short f1;
   signed f2 : 11;
   unsigned char f3;
   int f4;
};

union U1 {
   unsigned f0;
   unsigned f1;
   char f2;
   short f3;
};

union U2 {
   short f0;
   int f1;
   unsigned short f2;
   unsigned f3;
};

union U3 {
   unsigned f0;
   unsigned char f1;
   int f2;
   int f3;
};

union U4 {
   char f0;
   unsigned f1;
   unsigned char f2;
   unsigned char f3;
   int f4;
};

union U5 {
   unsigned char f0;
   unsigned f1;
   unsigned f2 : 19;
   unsigned f3;
   unsigned f4;
};

union U6 {
   unsigned f0;
   int f1;
   unsigned short f2;
   signed f3 : 19;
};


static short g_5 = 0xF865L;
static unsigned g_16 = 0x9495E0E2L;
static union U4 g_37 = {0x76L};
static char g_60 = (-7L);
static unsigned short g_65 = 0UL;
static int g_74 = 0x93B6ABB5L;
static union U3 g_78 = {1UL};
static union U4 g_115 = {0x2CL};
static unsigned char g_151 = 0xE7L;
static union U1 g_176 = {0x4AEDB132L};
static unsigned g_183 = 0x166B7E9EL;
static int g_204 = 0x03D4E83FL;
static union U6 g_205 = {4294967288UL};
static union U5 g_355 = {0UL};
static unsigned char g_366 = 0x59L;
static int g_430 = 0x6934D015L;
static union U2 g_432 = {0xCB22L};
static char g_794 = 3L;
static unsigned g_878 = 7UL;
static unsigned g_918 = 0UL;
static union U0 g_945 = {0UL};
static union U0 g_1089 = {0x80CBDF30L};
static char g_1245 = (-4L);
static union U1 g_1294 = {0xBB9AB61BL};
static unsigned g_1333 = 0x54655089L;
static char g_1493 = 0x41L;
static char g_1494 = 0L;
static char g_1950 = (-1L);
static int g_1968 = 0xB6518529L;
static unsigned g_1981 = 0x8E27EF36L;
static unsigned g_2019 = 0UL;
static union U3 g_2123 = {4294967293UL};
static union U3 g_2130 = {2UL};



static unsigned func_1(void);
static int func_6(union U6 p_7, union U6 p_8, int p_9, char p_10);
static union U6 func_11(int p_12, union U3 p_13, int p_14, int p_15);
static char func_20(short p_21, union U1 p_22);
static unsigned func_23(union U2 p_24, unsigned char p_25, int p_26, char p_27);
static union U2 func_29(union U4 p_30, unsigned p_31, short p_32);
static union U4 func_33(int p_34, unsigned p_35, unsigned short p_36);
static int func_39(unsigned p_40, int p_41, int p_42, int p_43, union U4 p_44);
static char func_47(unsigned p_48, union U0 p_49, int p_50, unsigned char p_51);
static unsigned func_56(unsigned p_57, unsigned short p_58);
static unsigned func_1(void)
{
    unsigned short l_2 = 0x26A0L;
    union U3 l_17 = {0xD7582BA8L};
    union U0 l_28 = {0x8464D91BL};
    union U6 l_1618 = {0x3F264A7BL};
    unsigned l_1631 = 0x852DC1CFL;
    unsigned char l_1674 = 249UL;
    union U1 l_1701 = {1UL};
    int l_1704 = 0L;
    unsigned l_1769 = 0xC1266092L;
    unsigned short l_1827 = 0x9DA5L;
    union U5 l_1900 = {250UL};
    union U4 l_1907 = {0L};
    union U2 l_1973 = {-7L};
    char l_1996 = 3L;
    unsigned l_2066 = 0x6D28A47DL;
    short l_2067 = (-1L);
    unsigned l_2134 = 0x67A160D7L;
    int l_2160 = 0x0EC25430L;
    short l_2169 = 0x52E9L;
    int l_2180 = 0x55B73402L;
    l_17.f3 = (((0x5CD3860AL < (l_2 = 1L)) <= (safe_lshift_func_int16_t_s_s((!(g_5 = 0xB504L)), (func_6(func_11(g_16, l_17, (safe_mod_func_uint16_t_u_u(0x1C9BL, (l_17.f2 || func_20((func_23(((l_28 = l_28) , func_29(func_33(g_16, l_28.f3, g_16), g_37.f3, g_37.f3)), l_17.f2, l_17.f0, g_176.f0) != g_176.f2), g_176)))), g_176.f2), l_1618, l_17.f2, l_1618.f3) <= g_366)))) | 0xFEA29FC8L);
    if (l_17.f1)
    {
        unsigned l_1634 = 4294967292UL;
        int l_1635 = 0x7612AEA3L;
        union U2 l_1636 = {-10L};
        union U5 l_1651 = {0UL};
        int l_1663 = 0xF0D2671FL;
        union U6 l_1673 = {0x3A16541AL};
        unsigned l_1675 = 0x1D25ED89L;
        unsigned l_1684 = 0xBF9A33DEL;
        unsigned l_1716 = 4294967293UL;
        int l_1725 = 1L;
        union U6 l_1740 = {1UL};
        char l_1743 = 0xE9L;
        union U4 l_1752 = {0x6FL};
        union U3 l_1797 = {0xA8F28A8AL};
        short l_1809 = 1L;
        union U1 l_1859 = {0x746A0565L};
        g_115.f4 = (((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((l_1631 && g_151) < ((((((g_16 & (g_355 , (l_1635 = (g_183 ^ (safe_add_func_uint8_t_u_u(g_1493, l_1634)))))) != g_794) <= l_1636.f2) && l_28.f1) > g_1333) <= l_28.f2)) ^ g_151) < g_918), 0x5BL)), g_183)), 7)) <= 0L) >= g_432.f0);
        if ((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_1636.f2 != g_355.f0) < ((safe_lshift_func_int16_t_s_u(0xF8B9L, func_56(((g_176.f0 & l_28.f3) & 0x17L), l_1618.f0))) | g_430)), l_28.f1)), g_176.f1)))
        {
            l_28.f2 = l_17.f1;
        }
        else
        {
            int l_1652 = 0L;
            unsigned l_1664 = 0x96FA41B3L;
            g_204 = (l_1652 , ((l_1618.f3 = (l_1663 | g_355.f0)) >= g_176.f2));
            l_1664 = (g_16 | l_17.f0);
        }
        if ((safe_add_func_uint8_t_u_u(g_183, ((safe_lshift_func_uint8_t_u_u(((-6L) < ((safe_add_func_int16_t_s_s((func_56(g_1333, l_17.f0) | (safe_mod_func_int32_t_s_s(0x8D303689L, func_6(l_1673, func_11(l_1674, l_17, g_115.f0, g_176.f3), l_1675, g_1333)))), l_17.f0)) ^ (-4L))), g_355.f0)) | l_1673.f0))))
        {
            int l_1688 = 0x690C2963L;
            union U6 l_1693 = {0x584937AEL};
            union U3 l_1719 = {6UL};
            for (g_176.f1 = 1; (g_176.f1 <= 41); g_176.f1 = safe_add_func_int16_t_s_s(g_176.f1, 7))
            {
                unsigned short l_1686 = 65534UL;
                unsigned l_1694 = 0xE254DDADL;
                unsigned l_1709 = 4294967289UL;
                int l_1724 = 1L;
                for (g_430 = 0; (g_430 != 16); ++g_430)
                {
                    union U6 l_1685 = {0xE0B5E461L};
                    short l_1687 = 0L;
                    for (l_1663 = 12; (l_1663 != 16); ++l_1663)
                    {
                        l_17.f3 = (safe_lshift_func_uint16_t_u_s(0xB048L, l_1684));
                    }
                    g_115.f4 = (((l_1688 = (l_1673.f1 != l_1673.f2)) , g_366) == g_204);
                    for (g_945.f0 = 0; (g_945.f0 >= 56); g_945.f0 = safe_add_func_int8_t_s_s(g_945.f0, 7))
                    {
                        g_432.f1 = 0x0AAFE88DL;
                        if (g_176.f1)
                            break;
                        if (l_1688)
                            continue;
                    }
                    l_1635 = ((safe_add_func_int32_t_s_s(l_1686, (func_39(l_1673.f2, l_1636.f0, func_6(g_205, l_1693, (l_1694 = 0xA3EFCB78L), g_37.f1), (safe_mod_func_uint32_t_u_u(2UL, l_2)), g_115) != (-1L)))) || g_115.f2);
                }
                if (g_151)
                    continue;
                for (g_65 = 0; (g_65 <= 27); g_65 = safe_add_func_uint8_t_u_u(g_65, 3))
                {
                    unsigned l_1712 = 0x0077AC3AL;
                    int l_1715 = 0L;
                    for (g_37.f3 = 0; (g_37.f3 >= 24); g_37.f3 = safe_add_func_uint16_t_u_u(g_37.f3, 2))
                    {
                        unsigned l_1717 = 0UL;
                        int l_1718 = 9L;
                        g_945.f2 = (l_1673.f0 && (((l_1701 , (2UL | (((safe_div_func_int8_t_s_s((g_60 = func_39((+l_1704), (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((l_1709 = g_432.f2) , (safe_rshift_func_uint8_t_u_s(((l_1712 || l_1694) < (((g_1294.f2 != (safe_sub_func_int16_t_s_s((l_1715 = (g_5 = (g_1089 , g_16))), 0xA33CL))) > 0x6AFCB67EL) == 2L)), g_878))), g_37.f3)), g_355.f0)), l_1712, l_1712, g_37)), l_1712)) == g_176.f2) <= g_1245))) | l_1716) != l_1717));
                        l_1718 = g_183;
                    }
                    return g_37.f3;
                }
                g_204 = (l_1635 = (func_6((l_1618 = g_205), func_11(g_794, (l_1719 = g_78), (l_28.f4 = 0xB7C0316FL), (g_74 = g_204)), ((((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((((l_1724 = g_794) <= l_1673.f3) & 0x3BL) >= l_1701.f3), 0x79L)), l_1725)) != 0x7FL) & g_37.f1) > g_183), g_366) || l_1634));
            }
            l_28.f2 = (((g_115 , g_74) , g_366) || (safe_rshift_func_uint16_t_u_u(func_56(g_74, g_65), 6)));
        }
        else
        {
            short l_1750 = 0xF7DCL;
            int l_1751 = 0x6D953D28L;
            short l_1780 = 0x20CAL;
            unsigned l_1783 = 0xC87EF0C6L;
            union U1 l_1796 = {4294967289UL};
            union U4 l_1854 = {8L};
            l_1673.f3 = ((safe_add_func_uint8_t_u_u((l_1704 = (safe_lshift_func_uint16_t_u_s((l_1740 , g_78.f1), (safe_mod_func_int16_t_s_s((l_1740.f0 >= func_39(l_1743, ((safe_rshift_func_uint16_t_u_u(((l_1740.f0 >= (g_1294 , l_1631)) <= (safe_mod_func_int8_t_s_s(1L, (safe_sub_func_int32_t_s_s(func_39((l_1750 = g_1245), g_430, g_1493, l_1751, l_1752), l_1751))))), 10)) >= g_37.f1), g_183, l_1725, g_37)), l_17.f0))))), 0xC2L)) != l_1751);
            for (l_1618.f1 = 0; (l_1618.f1 != (-19)); l_1618.f1 = safe_sub_func_uint8_t_u_u(l_1618.f1, 3))
            {
                union U0 l_1768 = {4294967295UL};
                for (g_432.f3 = 0; (g_432.f3 <= 22); g_432.f3 = safe_add_func_int8_t_s_s(g_432.f3, 5))
                {
                    short l_1757 = 0xE2D0L;
                    union U0 l_1779 = {0x6907F6ACL};
                    l_1757 = g_115.f1;
                    l_1768.f4 = (safe_rshift_func_uint8_t_u_u((func_56((((l_1740.f3 | l_1757) == g_176.f2) , l_1769), g_794) , g_1245), g_176.f2));
                    for (l_1684 = 0; (l_1684 >= 55); l_1684 = safe_add_func_int16_t_s_s(l_1684, 2))
                    {
                        union U6 l_1777 = {0x58CDACF5L};
                        int l_1778 = 0L;
                        g_430 = func_56(l_1757, (((l_1777.f3 = (safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((l_28.f2 = (g_78 , (~(l_1618.f2 && (safe_unary_minus_func_uint8_t_u((g_37.f0 != ((l_1779 , l_1779.f4) || g_355.f0)))))))), l_1777.f2)) != l_1780), l_1752.f2))) ^ 0xCCL) , g_65));
                    }
                }
            }
            if ((l_1751 = 6L))
            {
                short l_1793 = 0L;
                int l_1811 = 0L;
                unsigned l_1844 = 1UL;
                int l_1851 = 0x527BCCE5L;
                for (g_176.f0 = 0; (g_176.f0 != 14); g_176.f0++)
                {
                    char l_1806 = 0x38L;
                    int l_1826 = 9L;
                    if (((g_5 = 0x4B31L) , g_204))
                    {
                        unsigned char l_1792 = 4UL;
                        union U3 l_1807 = {0xA9B5FF27L};
                        unsigned short l_1808 = 0x6965L;
                        l_1783 = 0xCEA11F79L;
                        g_37.f4 = ((safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((l_1673.f3 = l_1701.f2), (g_432.f2 = (safe_add_func_int32_t_s_s(((+l_1651.f0) | (g_1333 & ((safe_rshift_func_int16_t_s_s(l_1792, 2)) == g_151))), (l_1792 != 0x14F0L)))))) ^ l_1793) ^ l_1793), 6UL)) < g_37.f1);
                        l_1751 = (safe_rshift_func_uint16_t_u_s(l_1740.f2, 14));
                        g_430 = (l_1618.f1 <= g_432.f2);
                    }
                    else
                    {
                        unsigned l_1810 = 4294967286UL;
                        l_1811 = l_1810;
                        if (g_176.f1)
                            continue;
                        g_945.f4 = g_16;
                        l_1826 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((-7L) || l_1797.f3) > ((0UL == g_945.f0) != g_945.f2)) , (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((l_1635 != (safe_add_func_uint16_t_u_u((g_432.f0 , g_945.f3), ((safe_add_func_int8_t_s_s((-5L), g_176.f3)) == g_1333)))), l_1811)) >= g_1294.f2) , 6UL), l_1797.f1))), g_176.f2)), g_366)) <= g_74), g_945.f2));
                    }
                    l_1827 = g_176.f1;
                }
                g_432.f1 = (safe_sub_func_uint8_t_u_u(((g_355.f0 <= ((safe_div_func_uint8_t_u_u(l_1780, l_28.f2)) < l_1725)) | 0L), 0L));
                g_205.f3 = (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_1796.f0 ^ ((safe_add_func_int16_t_s_s((l_1811 = l_1780), (l_1796.f3 && (g_115.f0 = g_794)))) <= l_1750)) , 0UL), g_37.f4)) >= l_1796.f1), 0x43L));
                for (g_205.f2 = 18; (g_205.f2 < 8); g_205.f2 = safe_sub_func_uint32_t_u_u(g_205.f2, 1))
                {
                    l_1752.f4 = (l_1854 , ((l_1811 && (g_945.f4 = (safe_lshift_func_int8_t_s_s((l_1636 , (g_37.f0 = l_1674)), 5)))) != (safe_mod_func_int8_t_s_s(g_918, g_183))));
                    g_78.f3 = ((((l_1859 = l_1796) , (safe_rshift_func_int16_t_s_s(g_918, 10))) >= func_56(g_432.f2, (g_115.f3 < (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((g_1294.f3 && ((l_1811 = g_74) != (safe_add_func_int16_t_s_s(((g_115 , g_183) || (safe_mod_func_int16_t_s_s(l_1752.f4, l_1809))), l_1796.f1)))) , l_1750), l_1701.f0)), 7))))) > 0L);
                }
            }
            else
            {
                int l_1873 = 0xC9157C5DL;
                g_1089.f2 = l_1740.f2;
            }
            g_432.f1 = g_366;
        }
    }
    else
    {
        union U0 l_1876 = {0UL};
        union U5 l_1901 = {7UL};
        union U2 l_1953 = {0L};
        union U1 l_1958 = {4294967295UL};
        unsigned short l_2014 = 0xBAF6L;
        union U4 l_2018 = {0xE4L};
        union U3 l_2073 = {0x2D783567L};
        unsigned l_2124 = 4294967287UL;
        unsigned short l_2126 = 0UL;
        union U0 l_2129 = {0UL};
        union U6 l_2163 = {4294967295UL};
        int l_2170 = 4L;
        if (g_115.f0)
        {
            unsigned l_1879 = 0x34854089L;
            g_945.f2 = (g_1089.f2 = (safe_div_func_uint16_t_u_u(l_1879, g_176.f1)));
        }
        else
        {
            unsigned char l_1886 = 0xA4L;
            int l_1888 = 1L;
            union U6 l_1889 = {2UL};
            int l_1895 = 0xD9412D31L;
            int l_1897 = 0L;
            union U4 l_1910 = {0xF6L};
            unsigned l_1917 = 0x52410913L;
            union U0 l_1928 = {2UL};
            unsigned short l_1931 = 0xD657L;
            for (g_432.f1 = (-10); (g_432.f1 == (-12)); g_432.f1 = safe_sub_func_int32_t_s_s(g_432.f1, 6))
            {
                int l_1891 = 5L;
                union U5 l_1894 = {0xACL};
                int l_1896 = 0x134C7A94L;
                union U2 l_1941 = {5L};
            }
            l_1876.f2 = g_176.f0;
        }
        if (l_1901.f0)
        {
            unsigned l_1957 = 6UL;
            union U1 l_1961 = {0xE1508434L};
            g_945.f4 = ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((g_1493 = l_1957))), (func_56(l_1907.f2, l_1957) && l_1618.f0))) >= ((g_78.f2 = (l_1958 , (((safe_mod_func_int8_t_s_s((l_1961 , ((safe_rshift_func_uint16_t_u_u(((g_37.f0 = g_115.f0) != (safe_rshift_func_int8_t_s_s((l_1953.f0 == g_176.f3), l_17.f0))), 8)) | (-1L))), l_1953.f2)) > l_1958.f0) & 0xB47CB22DL))) , g_176.f3));
            for (g_78.f1 = 7; (g_78.f1 < 46); g_78.f1++)
            {
                return l_17.f2;
            }
        }
        else
        {
            short l_1974 = 0L;
            int l_1998 = (-1L);
            union U3 l_2012 = {0UL};
            unsigned l_2015 = 1UL;
            unsigned l_2017 = 1UL;
            char l_2078 = 0x0AL;
            union U6 l_2133 = {4294967295UL};
            unsigned char l_2168 = 0xE4L;
            int l_2171 = 0x26A665FCL;
            if (g_151)
            {
                unsigned l_1984 = 4294967291UL;
                int l_2003 = 0xA5589AB0L;
                g_78.f3 = 0x4BAA03A9L;
                if ((1UL <= (g_115.f2 = ((g_183 < ((-5L) >= 8L)) >= g_151))))
                {
                    unsigned l_1975 = 4294967295UL;
                    int l_1978 = 0L;
                    union U0 l_1991 = {0xAF887B57L};
                    g_432.f1 = (+(l_1974 & (l_1975 != (safe_sub_func_uint32_t_u_u(((g_205 = g_205) , l_1974), (((l_1978 = g_78.f1) >= (safe_add_func_int8_t_s_s(g_1981, (((safe_rshift_func_int16_t_s_s(0xFA36L, l_1975)) <= (l_1984 <= g_78.f0)) > g_430)))) <= g_366))))));
                    for (l_28.f1 = (-19); (l_28.f1 != 21); ++l_28.f1)
                    {
                        l_1978 = (safe_add_func_int8_t_s_s(0x04L, 0xEBL));
                    }
                    if (g_78.f0)
                    {
                        int l_1997 = 0xF7E40A50L;
                        l_1997 = (((g_1494 > g_1245) < 0x3925L) != (g_115.f3 == l_1991.f0));
                    }
                    else
                    {
                        l_1953.f1 = l_1958.f2;
                        l_1998 = l_1974;
                        l_1998 = (-9L);
                        l_1704 = (g_176.f2 < l_1998);
                    }
                }
                else
                {
                    int l_2004 = 0L;
                    for (g_1968 = (-20); (g_1968 != 19); g_1968++)
                    {
                        g_37.f4 = l_1984;
                    }
                    g_204 = 0x7377D23CL;
                    for (g_151 = (-25); (g_151 <= 19); ++g_151)
                    {
                        l_2003 = g_115.f2;
                        g_1089.f2 = l_28.f0;
                        l_2004 = 0xF6D13001L;
                    }
                }
            }
            else
            {
                int l_2007 = (-3L);
                union U6 l_2013 = {0x7C317233L};
                union U0 l_2045 = {0xD19017A5L};
                if ((safe_add_func_int16_t_s_s(g_78.f1, func_6(func_11((safe_rshift_func_uint8_t_u_s((g_115.f2 = (g_432.f2 , ((l_1876.f2 || (safe_mod_func_uint16_t_u_u((l_2007 = l_1618.f0), l_1953.f2))) , l_2007))), g_878)), l_2012, g_918, l_1907.f0), l_2013, l_2014, l_2015))))
                {
                    short l_2016 = (-7L);
                    g_2019 = (l_1973.f1 = func_39((g_355.f4 = (!(l_2016 > (((g_37.f4 | func_39((g_945.f0 = (((-5L) == l_2017) , (func_56(g_60, l_1958.f3) | 0L))), ((l_2018 , g_176.f0) || 0xB852L), l_1901.f0, g_78.f1, g_37)) != 0xFAC6C852L) & 9L)))), g_37.f4, l_2016, l_2015, l_2018));
                    g_430 = (func_33(g_945.f4, g_115.f3, (l_1907 , 0x5D8EL)) , (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_1973.f2, 1UL)), 6)));
                }
                else
                {
                    char l_2030 = (-4L);
                    union U4 l_2047 = {-1L};
                    if (l_2030)
                    {
                        l_17.f3 = ((g_1494 & (g_151 ^ (safe_rshift_func_uint8_t_u_u(255UL, 1)))) > (g_1333 != g_1493));
                    }
                    else
                    {
                        int l_2035 = 9L;
                        int l_2042 = 0L;
                        union U4 l_2046 = {1L};
                        g_945.f2 = (func_39(l_2013.f3, ((((l_2030 == l_2030) || (safe_add_func_int16_t_s_s(l_2030, func_39(l_2035, (safe_div_func_int8_t_s_s(((l_2018.f4 = (l_2012.f3 = func_56(((func_39(g_183, l_1998, l_1701.f3, l_2030, g_115) <= 0x324870F4L) , 0x6B289BB1L), l_2042))) <= 0x6DL), 1L)), g_37.f2, l_1901.f0, l_2046)))) == 1UL) < g_37.f0), g_918, g_37.f2, l_2047) <= g_918);
                        g_432.f1 = l_2047.f3;
                        g_1089.f2 = g_430;
                    }
                    return g_355.f0;
                }
            }
            if ((g_430 = (safe_sub_func_uint16_t_u_u(g_1493, ((l_1953.f0 == ((safe_lshift_func_int8_t_s_u((g_1494 = (((((g_794 , (safe_div_func_uint16_t_u_u(func_56((((l_2012.f2 < (((((safe_mod_func_uint8_t_u_u((1L >= (safe_mod_func_int16_t_s_s((g_432 , l_2018.f3), l_2017))), l_2066)) || 0x173CL) | l_2017) & l_2018.f0) | l_2067)) > g_918) > l_1618.f2), g_1333), l_1974))) > 0x00L) && 0xAF8B12DFL) & g_1245) ^ g_115.f0)), 5)) ^ g_1333)) , 65527UL)))))
            {
                union U1 l_2070 = {1UL};
                int l_2079 = 0x7A0AE964L;
                union U2 l_2150 = {-1L};
                l_2079 = ((0x0EA47BD2L < (safe_sub_func_uint32_t_u_u(0xFF0D4CC1L, (g_432.f1 = ((l_2070 , (safe_lshift_func_int8_t_s_s((g_151 , (l_2073 , 0xABL)), 1))) | (g_355.f0 = (g_1968 > func_56(((((l_2078 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_2070.f1, g_2019)), l_1958.f0))) | l_17.f3) <= 1UL) | (-8L)), l_1998)))))))) & g_176.f2);
                g_1089.f4 = (safe_div_func_uint8_t_u_u(g_16, (-7L)));
                for (g_1294.f0 = (-23); (g_1294.f0 != 4); g_1294.f0 = safe_add_func_uint16_t_u_u(g_1294.f0, 7))
                {
                    int l_2086 = 0x4400E948L;
                    char l_2087 = 0xF6L;
                    int l_2092 = 0xEA83542EL;
                    union U4 l_2127 = {-3L};
                    int l_2128 = 0xC3C9F786L;
                    l_2087 = (safe_lshift_func_uint16_t_u_u(l_2086, 6));
                    l_1876.f2 = (safe_sub_func_int32_t_s_s(g_1333, (safe_add_func_int32_t_s_s(l_2017, ((g_204 & l_2014) && (~((0UL || (func_56(l_1974, (g_176.f3 >= ((l_2070.f3 , g_205) , (-1L)))) == g_176.f2)) != 65533UL)))))));
                    l_2092 = g_1294.f3;
                    if ((safe_div_func_uint32_t_u_u((g_1089.f0 | (((g_60 && g_1294.f2) >= (safe_lshift_func_uint8_t_u_s((l_2086 > ((l_2018.f4 = l_2086) , (safe_sub_func_uint32_t_u_u(g_1089.f0, g_1294.f3)))), 1))) || (-1L))), g_2019)))
                    {
                        union U6 l_2125 = {0x5F7A5ACBL};
                        g_432.f1 = (((safe_lshift_func_uint8_t_u_s((((l_1958 = l_1958) , (safe_add_func_uint32_t_u_u((g_355.f4 = (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_432.f1, g_176.f0)), l_2079)), 2))), l_2087))) <= 0UL), 2)) & l_2086) & l_1769);
                        g_1089.f4 = (l_2092 != g_65);
                        g_945.f4 = l_2125.f3;
                    }
                    else
                    {
                        int l_2153 = (-1L);
                        g_204 = (g_78.f3 = g_1089.f0);
                        l_2127.f4 = (0x3D71CB18L < (safe_unary_minus_func_uint16_t_u(((g_37.f3 = (249UL & (((g_1089.f0 = (g_355.f2 = ((safe_mod_func_uint32_t_u_u((((((((((((g_2130 , (safe_mod_func_int8_t_s_s(0xC3L, (l_2012.f3 = (safe_lshift_func_int8_t_s_u((g_1981 | g_115.f3), 0)))))) || l_2070.f0) & g_176.f2) <= l_1876.f2) != 0L) , g_1294.f0) <= l_1769) <= 65535UL) , g_355) , 9UL) <= 0x7F4DL), 0x2D296736L)) & 0x84L))) , (-1L)) , (-6L)))) & g_2123.f2))));
                        g_945.f2 = (g_1245 != (((-1L) >= (((func_56(g_5, (l_2150.f1 = ((safe_sub_func_int32_t_s_s(((l_1701 = l_2070) , (((safe_add_func_int16_t_s_s((l_2127.f4 = (safe_mod_func_int16_t_s_s(l_2018.f4, 0x8ECCL))), (g_1294.f0 != (safe_add_func_int16_t_s_s(((l_2150 , ((safe_sub_func_uint16_t_u_u((l_2153 = g_1981), 0L)) , 0xF3L)) , l_2153), g_115.f3))))) >= 0xA0L) & 0x8BAD7512L)), l_2073.f3)) ^ l_17.f0))) && g_2123.f1) >= g_1245) && g_1089.f4)) | l_2086));
                        g_430 = (safe_add_func_uint16_t_u_u(g_176.f0, (((4294967290UL || (l_2127.f3 >= g_1294.f1)) , (l_2092 = 0x6EL)) <= g_37.f2)));
                    }
                }
                g_37.f4 = (safe_rshift_func_int8_t_s_u((l_2150.f1 = (0xD734CE8DL && (g_366 != (-1L)))), g_115.f2));
            }
            else
            {
                unsigned l_2172 = 4294967289UL;
                union U2 l_2173 = {0x8655L};
                l_2172 = g_1294.f3;
                l_2180 = ((l_2073.f0 >= g_878) | l_1998);
            }
        }
        for (g_16 = 21; (g_16 >= 51); g_16 = safe_add_func_uint8_t_u_u(g_16, 4))
        {
            return g_366;
        }
    }
    return l_1973.f2;
}







static int func_6(union U6 p_7, union U6 p_8, int p_9, char p_10)
{
    unsigned char l_1621 = 0UL;
    union U3 l_1622 = {0x1CA84F1FL};
    union U3 l_1623 = {4294967295UL};
    unsigned l_1624 = 4294967295UL;
    g_37.f4 = (l_1622.f3 = (((((safe_div_func_int8_t_s_s((p_10 = l_1621), (g_37.f3 && (func_11(p_8.f1, (l_1623 = l_1622), g_1493, g_204) , (func_33(l_1624, (((((p_8.f3 , 0x12BBDC46L) == (-1L)) , (-4L)) != (-7L)) , 7UL), p_8.f3) , 0x190FL))))) , 1L) == l_1624) == 0x2685L) <= 255UL));
    l_1622.f3 = g_204;
    return g_432.f2;
}







static union U6 func_11(int p_12, union U3 p_13, int p_14, int p_15)
{
    union U6 l_1617 = {0x43160E62L};
    return l_1617;
}







static char func_20(short p_21, union U1 p_22)
{
    unsigned short l_1366 = 0xDE92L;
    int l_1367 = (-1L);
    union U3 l_1420 = {4294967295UL};
    union U6 l_1468 = {1UL};
    union U4 l_1492 = {0xA0L};
    unsigned short l_1503 = 65535UL;
    union U2 l_1547 = {0x65A8L};
    unsigned short l_1554 = 0x604BL;
    union U6 l_1557 = {4294967295UL};
    int l_1558 = (-1L);
    short l_1567 = 3L;
    unsigned l_1605 = 4294967295UL;
    if (l_1366)
    {
        unsigned l_1373 = 0UL;
        union U0 l_1375 = {1UL};
        int l_1416 = (-1L);
        union U1 l_1445 = {0x00C969ABL};
        union U4 l_1482 = {9L};
        int l_1553 = 0xA79291A4L;
        unsigned char l_1561 = 255UL;
        union U2 l_1566 = {1L};
        unsigned l_1568 = 4294967292UL;
        if (p_21)
        {
            unsigned char l_1376 = 0x11L;
            union U0 l_1409 = {0xA1EAAC6AL};
            union U2 l_1419 = {0x2AF3L};
            union U3 l_1430 = {0x7CD19F5DL};
            unsigned l_1437 = 1UL;
            union U4 l_1466 = {0xB3L};
            char l_1469 = 0x6AL;
            unsigned short l_1485 = 65535UL;
            if (g_74)
            {
                unsigned l_1372 = 0x83CFF448L;
                int l_1374 = 0x270502AAL;
                char l_1385 = (-1L);
                unsigned char l_1415 = 0xC7L;
                if (((safe_div_func_uint8_t_u_u((((l_1367 < g_366) | (g_78.f3 = g_60)) | 4294967295UL), 9UL)) && 0UL))
                {
                    int l_1379 = 5L;
                    int l_1384 = (-1L);
                    union U5 l_1404 = {246UL};
                    l_1376 = g_115.f3;
                    l_1385 = (l_1372 < ((safe_lshift_func_uint8_t_u_s((((((((p_21 , func_56(((l_1379 = 0x497CCA50L) < ((!(safe_lshift_func_uint16_t_u_u(0x970FL, (safe_add_func_int16_t_s_s((g_205.f2 < l_1376), (l_1374 == l_1372)))))) != g_878)), l_1375.f1)) , 6UL) <= l_1376) , g_1294.f2) != l_1376) ^ g_1294.f3) & (-1L)), p_22.f3)) < l_1384));
                    l_1374 = (safe_rshift_func_int16_t_s_u((+l_1366), ((((safe_sub_func_int8_t_s_s((!g_176.f2), (safe_lshift_func_uint16_t_u_s(g_205.f2, 2)))) >= (safe_lshift_func_uint8_t_u_u(((g_78.f3 & p_21) , (+l_1374)), 5))) && (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_56(g_183, (l_1375.f4 = ((+l_1376) > (safe_sub_func_uint8_t_u_u((l_1404 , g_78.f0), 0x5CL))))), 0L)), 0x1AL)), 0xA4E9ACB9L))) < g_115.f2)));
                    for (l_1375.f4 = (-2); (l_1375.f4 >= 25); l_1375.f4 = safe_add_func_int16_t_s_s(l_1375.f4, 1))
                    {
                        union U0 l_1414 = {0xF2968101L};
                        g_432.f1 = l_1376;
                        g_115.f4 = ((safe_mod_func_uint32_t_u_u(((((g_74 , l_1415) , g_355) , 0x86794612L) | p_22.f3), p_22.f0)) && 0x18L);
                        return g_1294.f3;
                    }
                }
                else
                {
                    unsigned char l_1421 = 0x7CL;
                    g_205.f3 = (func_56((safe_div_func_uint16_t_u_u((g_366 != ((l_1375.f4 & ((l_1419 , l_1420) , ((l_1421 == p_22.f3) <= 4294967293UL))) || p_21)), ((g_355 , 0x2BA00405L) ^ g_1294.f0))), g_37.f0) != l_1420.f2);
                    return g_183;
                }
            }
            else
            {
                union U0 l_1424 = {2UL};
                union U2 l_1425 = {-1L};
                g_1089.f4 = ((((p_22.f2 = ((safe_mod_func_uint8_t_u_u(l_1375.f2, p_22.f2)) | 0x4F31L)) < p_21) & p_21) > l_1424.f2);
            }
            for (g_945.f4 = 9; (g_945.f4 == (-1)); g_945.f4--)
            {
                int l_1434 = 0L;
                union U2 l_1463 = {8L};
                l_1434 = (p_22.f2 || (0x90L < (safe_unary_minus_func_uint16_t_u(p_21))));
                for (g_115.f3 = 9; (g_115.f3 < 23); ++g_115.f3)
                {
                    int l_1438 = 1L;
                    int l_1450 = 0x9AC21205L;
                    g_205.f3 = l_1437;
                    l_1438 = p_22.f2;
                    if ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((p_22 = (l_1445 = g_176)) , (g_432.f2 = ((safe_mod_func_uint8_t_u_u(g_176.f2, (safe_add_func_int8_t_s_s(((l_1450 = (p_22.f3 = func_56((g_1294.f1 = 0xE96586E9L), g_176.f1))) != (safe_add_func_uint8_t_u_u(g_176.f1, (safe_rshift_func_uint16_t_u_u(p_21, 9))))), g_37.f3)))) == l_1445.f3))) == (-1L)), p_21)), 4)), 0xF45CEF1BL)))
                    {
                        l_1434 = l_1438;
                        return g_115.f3;
                    }
                    else
                    {
                        union U0 l_1467 = {4294967295UL};
                        g_430 = ((l_1375 , ((safe_add_func_int32_t_s_s(l_1367, p_21)) & (safe_add_func_uint8_t_u_u(p_21, 6L)))) ^ ((p_22.f2 == (g_60 , (((safe_lshift_func_uint8_t_u_s(l_1420.f0, 5)) < (g_37.f3 == 0x8032L)) , g_878))) == l_1438));
                        l_1434 = (safe_rshift_func_uint16_t_u_u((~(!((l_1450 = g_115.f2) <= g_16))), 14));
                        l_1416 = (((l_1463 , (((safe_div_func_int8_t_s_s(p_21, 0x63L)) || g_115.f2) ^ g_78.f1)) != (((l_1466 , l_1467) , (g_16 ^ (((l_1468 , p_22.f3) ^ l_1450) , p_22.f3))) , 0xADD7L)) && l_1469);
                    }
                }
                if (p_22.f2)
                {
                    g_432.f1 = func_39(g_878, (safe_sub_func_int16_t_s_s(g_176.f2, (-5L))), g_16, (~(safe_mod_func_int8_t_s_s((((g_945.f2 > (l_1409.f2 = 0L)) >= ((g_918 < p_21) && ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_39(l_1466.f3, l_1463.f0, l_1434, l_1434, l_1482), l_1430.f3)), 0xFBC6L)) == p_21) != g_1294.f2), 2)) , g_1294.f2))) <= p_21), 0x85L))), g_37);
                }
                else
                {
                    return g_183;
                }
            }
            l_1416 = (p_21 , l_1468.f1);
            return p_21;
        }
        else
        {
            int l_1504 = 0x69C592F6L;
            int l_1505 = (-1L);
            unsigned l_1513 = 0x592D2D62L;
            char l_1514 = (-7L);
            l_1505 = func_56(g_1493, ((g_37.f0 , ((g_16 <= g_1494) < ((g_1294.f3 = ((safe_lshift_func_uint16_t_u_s(0UL, ((p_21 = (p_22.f0 != (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(0x38A0BB01L, l_1503)) , l_1373) > p_22.f1), g_918)), l_1375.f2)))) , l_1482.f3))) || l_1504)) >= 65535UL))) > p_22.f1));
            g_1089.f4 = (-4L);
            for (l_1445.f2 = (-11); (l_1445.f2 < (-21)); --l_1445.f2)
            {
                unsigned short l_1537 = 0x59D6L;
                int l_1540 = (-3L);
                if (g_176.f3)
                {
                    union U4 l_1512 = {0L};
                    union U4 l_1535 = {1L};
                    l_1367 = g_65;
                    for (g_205.f2 = 0; (g_205.f2 >= 29); g_205.f2 = safe_add_func_int32_t_s_s(g_205.f2, 1))
                    {
                        if (p_22.f0)
                            break;
                    }
                    if (((l_1492.f3 | (safe_rshift_func_uint16_t_u_u(p_22.f0, p_22.f2))) | ((p_22.f1 == ((g_115.f2 = (((p_22.f3 , g_205) , (0x1BEDDE15L & ((((l_1505 = ((l_1512 , (l_1420.f3 >= l_1513)) && l_1514)) , 9L) | g_176.f1) > 0x9B9DL))) != p_22.f3)) <= g_37.f0)) || p_22.f3)))
                    {
                        l_1512.f4 = g_432.f2;
                        l_1505 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, (((p_22.f0 > (safe_lshift_func_uint16_t_u_u(func_39((safe_rshift_func_int16_t_s_u(((g_1294.f3 = (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((g_205.f2 & (g_115.f2 ^ (safe_lshift_func_int8_t_s_s(((g_1294.f3 < (g_432.f0 > ((p_22.f2 == ((safe_rshift_func_uint16_t_u_s(1UL, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xBB8D4518L, p_22.f3)), 1L)))) < g_176.f0)) >= g_432.f2))) && 8L), 0)))), 255UL)) < p_22.f0), 0x35D4CC42L))) <= g_74), p_22.f3)), g_355.f0, g_355.f0, p_22.f1, l_1535), 1))) & (-2L)) < p_22.f2))), 0L));
                    }
                    else
                    {
                        return g_78.f1;
                    }
                }
                else
                {
                    unsigned short l_1536 = 1UL;
                    l_1537 = l_1536;
                    if (g_16)
                        break;
                }
                l_1420.f3 = (g_205.f3 = (safe_lshift_func_uint8_t_u_u((l_1540 = ((g_176.f3 < ((g_1089.f1 > (p_22.f0 == (p_21 | g_1333))) && 0L)) <= ((g_432.f0 == p_22.f2) , g_37.f2))), l_1420.f0)));
            }
            l_1416 = p_22.f0;
        }
        l_1375.f2 = ((~(safe_mod_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s(func_39((l_1416 ^ ((!1UL) , 8UL)), g_115.f2, ((safe_lshift_func_uint16_t_u_u((l_1547 , g_1089.f2), g_74)) > 4UL), p_22.f3, g_115), l_1420.f2)) ^ 1L) > p_21), p_22.f0)) && l_1420.f1), p_22.f2))) > g_1294.f3);
        l_1367 = (g_878 <= g_37.f3);
        l_1568 = (l_1482.f4 = ((safe_mod_func_uint8_t_u_u((p_21 || l_1567), l_1375.f2)) , g_1089.f2));
    }
    else
    {
        int l_1574 = (-2L);
        int l_1602 = 0xB155AC37L;
        for (l_1468.f1 = 0; (l_1468.f1 < 19); l_1468.f1 = safe_add_func_int32_t_s_s(l_1468.f1, 9))
        {
            unsigned char l_1573 = 0x26L;
            l_1573 = (safe_rshift_func_uint8_t_u_u(254UL, 6));
        }
        l_1574 = (p_22.f2 ^ 253UL);
        if (l_1574)
        {
            int l_1575 = 0x397E7104L;
            g_945.f2 = l_1575;
            return g_1294.f2;
        }
        else
        {
            unsigned l_1603 = 1UL;
            int l_1604 = 0x1DF1AB6DL;
            if (((safe_rshift_func_int8_t_s_s((g_37.f0 ^ (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((0x1DL >= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_22.f3, 7)), (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(p_22.f1, (l_1603 = (((((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_1574 < 0xE77CD001L), (safe_rshift_func_uint8_t_u_u(p_22.f2, 4)))) , func_56((l_1602 = (safe_mod_func_uint16_t_u_u((g_794 | l_1366), p_21))), l_1557.f1)) >= 65527UL), 0xC5L)) | 0L) , p_22.f1) && l_1574) == p_22.f3)))) != l_1604), p_22.f1))))), 15)), 0x4AL))), l_1604)) < l_1605))
            {
                unsigned l_1606 = 4294967295UL;
                char l_1612 = 7L;
                char l_1613 = 0x09L;
                l_1606 = g_366;
                l_1604 = l_1603;
                for (g_430 = (-7); (g_430 >= 26); g_430 = safe_add_func_uint32_t_u_u(g_430, 3))
                {
                    g_1089.f2 = p_22.f0;
                    return g_115.f3;
                }
            }
            else
            {
                unsigned l_1616 = 0UL;
                g_204 = l_1616;
                g_430 = g_1294.f3;
            }
        }
    }
    return p_22.f2;
}







static unsigned func_23(union U2 p_24, unsigned char p_25, int p_26, char p_27)
{
    int l_1184 = 0x4DFF78CDL;
    union U2 l_1197 = {0x4394L};
    int l_1198 = (-5L);
    union U0 l_1199 = {0xBD613042L};
    union U4 l_1200 = {1L};
    int l_1207 = 0xFA63AFC5L;
    unsigned l_1315 = 4294967295UL;
    short l_1322 = 0x8BAFL;
    unsigned l_1364 = 0x8052B53DL;
    int l_1365 = 6L;
    if (((p_24.f2 = (func_39(l_1184, p_24.f0, ((p_27 & (-10L)) > l_1197.f0), g_176.f2, l_1200) > g_60)) , p_26))
    {
        unsigned l_1218 = 0xA314F0F8L;
        short l_1248 = (-1L);
        int l_1250 = 3L;
        unsigned char l_1298 = 8UL;
        union U4 l_1312 = {8L};
        int l_1329 = 8L;
        int l_1330 = 0xEDD129B8L;
        if ((safe_add_func_uint8_t_u_u(255UL, ((g_115.f3 = l_1199.f0) < (g_78.f1 = (g_945.f3 = ((func_56(l_1200.f0, (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_176.f2, 4)), 13)) ^ l_1207) | (safe_lshift_func_int8_t_s_u(((g_37.f3 = ((((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_56((((((0x5911487EL > (safe_mod_func_int16_t_s_s((func_56(p_26, (safe_div_func_int32_t_s_s((l_1207 , ((l_1218 = func_56(((p_24.f1 = 0x838A7F73L) != 1L), l_1200.f0)) , 5L)), g_176.f2))) == g_918), g_78.f2))) <= 0x91L) , g_205.f2) & 0xE58EL) , p_24.f0), p_25), l_1199.f1)), p_26)) && l_1200.f3) || g_151) , g_78.f2)) , p_26), 5)))) >= 0xEE045034L) > 0x42L)))))))
        {
            unsigned l_1263 = 4294967292UL;
            for (l_1199.f4 = 9; (l_1199.f4 < 14); l_1199.f4 = safe_add_func_int8_t_s_s(l_1199.f4, 4))
            {
                short l_1249 = (-1L);
                union U0 l_1252 = {0xFA1B1139L};
                unsigned l_1264 = 0xA80EF7C6L;
                for (g_945.f1 = 0; (g_945.f1 <= 26); ++g_945.f1)
                {
                    unsigned l_1239 = 0xC2CD2733L;
                    unsigned l_1242 = 0xA63FCDCEL;
                    unsigned char l_1247 = 0xF4L;
                    if (g_183)
                    {
                        char l_1243 = 0x09L;
                        int l_1244 = (-7L);
                        int l_1246 = 0x36A66E3AL;
                        g_204 = (l_1250 = ((g_78 , ((safe_mod_func_int16_t_s_s(1L, (g_1089.f0 , (g_205.f2 = ((l_1199.f4 <= (func_56(((l_1248 = (((safe_div_func_int32_t_s_s((l_1218 , (((safe_rshift_func_uint8_t_u_s(l_1218, (g_794 = (g_37.f3 > (l_1246 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((((l_1244 = (safe_div_func_uint8_t_u_u((((!(((safe_lshift_func_int16_t_s_u(l_1239, 12)) >= ((safe_sub_func_uint32_t_u_u(func_56(l_1242, l_1243), 1UL)) | p_25)) >= p_24.f3)) , p_24.f0) <= p_26), l_1239))) | g_794) & 0x84L) >= g_432.f0) && g_1245), 0x29FCL)), 4))))))) < g_74) && p_26)), g_176.f0)) && (-1L)) >= l_1247)) | l_1218), p_26) == 0xB3L)) ^ l_1243))))) < l_1249)) < (-1L)));
                    }
                    else
                    {
                        int l_1251 = 0x01623332L;
                        g_432.f1 = 0xE7B3532AL;
                        g_432.f1 = (p_26 = l_1251);
                        g_115.f4 = 0x91668C3CL;
                    }
                    g_205.f3 = (g_37.f3 | (-3L));
                }
                l_1264 = ((g_918 , 4294967295UL) | ((safe_mod_func_uint8_t_u_u((l_1250 = (p_24.f2 ^ ((safe_sub_func_uint8_t_u_u((g_37.f3 = (+g_432.f2)), g_432.f0)) < (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_1263 ^ p_25), 6)), g_355.f0))))), p_27)) , 0UL));
            }
            l_1199.f2 = ((safe_mod_func_uint8_t_u_u((0UL || g_366), func_39(l_1248, (p_25 , g_1089.f4), (safe_sub_func_uint8_t_u_u(g_176.f0, 0x19L)), (p_27 , l_1250), g_115))) <= p_24.f3);
        }
        else
        {
            char l_1300 = 0L;
            int l_1301 = 0xD5307FE8L;
            for (l_1200.f0 = (-15); (l_1200.f0 > (-26)); l_1200.f0 = safe_sub_func_uint8_t_u_u(l_1200.f0, 2))
            {
                char l_1273 = 1L;
                for (g_115.f2 = 0; (g_115.f2 <= 22); g_115.f2 = safe_add_func_int16_t_s_s(g_115.f2, 3))
                {
                    int l_1299 = 0x4ADF3829L;
                    if (p_25)
                        break;
                    p_26 = (g_432.f0 && l_1273);
                    for (g_1089.f3 = 2; (g_1089.f3 > 43); ++g_1089.f3)
                    {
                        if (g_37.f0)
                            break;
                        return g_204;
                    }
                    l_1301 = ((g_176.f0 != ((safe_lshift_func_uint8_t_u_u((p_24.f2 | (l_1300 = (safe_sub_func_uint8_t_u_u(6UL, (((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((0x64C85F83L >= p_24.f1), (safe_rshift_func_int8_t_s_u((l_1197.f1 = ((safe_lshift_func_int16_t_s_s((func_56((safe_mod_func_int8_t_s_s(((g_1294 = g_176) , (((safe_add_func_uint32_t_u_u((0x325D9F0FL ^ (p_24.f0 , (((safe_unary_minus_func_uint32_t_u(p_24.f1)) , l_1184) <= 4294967293UL))), l_1218)) , 0x034BL) | 0x9D65L)), 0x76L)), g_183) , g_204), p_24.f2)) || l_1250)), p_25)))), p_24.f0)) | l_1298) ^ 0xDDL), g_355.f0)), 1L)) , 0xDEL) <= l_1299))))), p_24.f1)) && l_1300)) <= 4UL);
                }
                if (p_24.f3)
                    continue;
                if (g_366)
                    break;
            }
        }
        p_26 = (((safe_lshift_func_uint8_t_u_u(func_39(g_1089.f3, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((p_24.f0 > 0UL) != g_794), 0)), 0)), (g_355.f0 | func_39(p_24.f0, ((-10L) <= (g_205.f2 = (l_1199 , (safe_mod_func_uint8_t_u_u(g_432.f0, 1L))))), l_1298, p_26, l_1200)))), p_26, l_1199.f2, l_1312), p_24.f0)) , (-6L)) > p_24.f3);
        g_430 = func_56((((safe_mod_func_uint32_t_u_u(l_1315, 5L)) > p_27) >= p_26), g_65);
        l_1312.f4 = (((((l_1207 = (l_1315 && ((safe_add_func_uint8_t_u_u(255UL, (safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_1322, ((l_1330 = (((safe_lshift_func_uint8_t_u_u(((-8L) > (safe_sub_func_uint8_t_u_u(l_1200.f3, 1UL))), l_1200.f0)) == g_366) && l_1329)) ^ l_1200.f3))) & 0x6AF1388FL) || g_183), l_1250)))) >= p_24.f0))) , p_26) | 0xB211FB0DL) == p_24.f1) == p_24.f2);
    }
    else
    {
        unsigned l_1342 = 0xD355FCF7L;
        p_26 = (-9L);
        for (g_878 = 0; (g_878 <= 55); g_878 = safe_add_func_int32_t_s_s(g_878, 1))
        {
            g_1333 = (!g_1294.f3);
        }
        g_37.f4 = func_56(p_24.f2, l_1199.f0);
        if ((safe_mod_func_int8_t_s_s(g_1294.f0, ((safe_div_func_uint8_t_u_u((func_39((((l_1184 | 0x4BL) , (l_1200.f4 = (((l_1198 = (l_1184 <= (0x87B2949BL > (safe_lshift_func_int16_t_s_u(g_430, g_37.f2))))) < 0x850EL) < (safe_sub_func_uint32_t_u_u((p_25 < p_25), l_1342))))) || p_27), g_794, p_25, l_1342, g_115) > 0xA5L), l_1342)) ^ 0xD6L))))
        {
            g_37.f4 = p_24.f0;
            g_1089.f4 = (safe_lshift_func_uint16_t_u_s(g_115.f2, 5));
        }
        else
        {
            union U4 l_1353 = {8L};
            g_1089.f2 = (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((-1L), func_39((((!(g_1089.f1 == p_25)) == g_115.f1) & (p_24.f0 = g_366)), ((p_25 , ((safe_div_func_int32_t_s_s((g_176.f0 && (p_26 >= (g_204 & 1L))), (-6L))) , l_1342)) | p_25), l_1199.f4, p_25, l_1353))), p_25)), g_78.f1));
        }
    }
    p_24.f1 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_355.f0, (l_1197.f1 = (((safe_mod_func_int16_t_s_s(g_204, p_24.f2)) > p_25) >= g_1294.f1)))), l_1364));
    l_1365 = l_1365;
    return l_1184;
}







static union U2 func_29(union U4 p_30, unsigned p_31, short p_32)
{
    unsigned l_38 = 0x821C760FL;
    unsigned char l_59 = 255UL;
    union U0 l_66 = {4294967292UL};
    union U4 l_492 = {0x5DL};
    unsigned short l_689 = 0xCD51L;
    unsigned short l_748 = 0xC189L;
    union U3 l_816 = {0x5D88655BL};
    int l_946 = 2L;
    int l_967 = (-1L);
    union U5 l_980 = {0x37L};
    unsigned l_989 = 0xE290EC51L;
    union U0 l_1002 = {0x5FAB1470L};
    union U0 l_1021 = {0xDA30CFEBL};
    short l_1035 = 0xD82EL;
    unsigned short l_1088 = 1UL;
    union U6 l_1180 = {1UL};
    union U2 l_1183 = {0x0B4CL};
    l_66.f4 = (l_38 || (l_689 = (func_39(((p_30.f4 = (g_37.f4 = l_38)) & ((safe_rshift_func_uint8_t_u_u(g_16, l_38)) == func_47(((safe_div_func_uint32_t_u_u(((~(safe_div_func_uint32_t_u_u((func_56((g_60 = (p_32 && l_59)), (255UL | p_32)) > (-1L)), 0xCF5738F5L))) > p_31), p_32)) > 0x42L), l_66, l_66.f2, l_66.f4))), l_38, l_66.f3, g_204, l_492) , g_115.f0)));
    if (func_56(g_204, l_66.f0))
    {
        unsigned l_694 = 0xF0EDB108L;
        int l_699 = 0xBFC19294L;
        int l_700 = 0x6F0FB595L;
        int l_703 = 0x4AC93078L;
        int l_704 = (-3L);
        union U3 l_707 = {4294967286UL};
        union U4 l_731 = {0L};
        union U0 l_746 = {0x327079A3L};
        unsigned l_747 = 0x3383F287L;
        union U6 l_762 = {4294967295UL};
        union U5 l_765 = {0x75L};
        union U4 l_846 = {-1L};
        if ((((safe_add_func_int16_t_s_s((l_703 = (l_700 = ((g_151 = (p_30.f2 = ((safe_add_func_int16_t_s_s((l_694 = g_366), (safe_rshift_func_int8_t_s_s((((l_699 = (g_37.f0 = (safe_lshift_func_int8_t_s_u(1L, p_30.f2)))) != l_700) >= l_700), g_204)))) || g_65))) <= ((safe_div_func_int16_t_s_s(l_700, 0xC789L)) > 0L)))), 0xDF22L)) | l_66.f1) != l_704))
        {
            union U3 l_706 = {4294967290UL};
            short l_716 = 0x381AL;
            short l_717 = 0x63FFL;
            unsigned l_728 = 0x76CF44EDL;
            short l_732 = (-10L);
            p_30.f4 = (p_30.f3 , ((l_717 = (l_704 = (p_32 = func_39(p_30.f0, (g_74 = (safe_unary_minus_func_int8_t_s(((l_66.f4 = (p_30.f0 & (((l_707 = (g_115.f2 , (g_78 = l_706))) , ((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((p_30.f0 & (safe_rshift_func_uint8_t_u_s(g_204, 5))), (l_706.f3 = g_60))) <= (safe_add_func_uint8_t_u_u(p_30.f2, 0L))), 8)) , 0x2DL)) < l_699))) , l_716)))), p_30.f0, p_31, l_492)))) != p_31));
            l_699 = (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_703, ((~((safe_mod_func_int32_t_s_s(0xFDC2A730L, 0x2C5D2031L)) , func_56((l_66.f4 && (g_78 , (((safe_rshift_func_int16_t_s_u((l_706.f3 != (p_31 != (l_728 = g_432.f0))), 15)) & ((safe_sub_func_int16_t_s_s(((func_39((l_66.f2 = ((+(!g_205.f3)) ^ l_717)), g_204, l_707.f2, l_492.f3, l_731) | 4294967288UL) | p_30.f2), l_707.f1)) ^ g_37.f3)) == p_30.f0))), g_37.f0))) || l_66.f2))), g_432.f0)) > l_732), l_492.f0));
        }
        else
        {
            int l_743 = 4L;
            char l_751 = 0xB7L;
            g_430 = (((safe_mod_func_uint8_t_u_u((p_30.f3 = (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(l_743, 2)) ^ (safe_add_func_int8_t_s_s((l_746 , 8L), p_30.f3))) , (0x17L ^ func_47(l_747, l_746, (4L <= func_47(g_432.f2, l_66, l_492.f0, p_30.f0)), g_204))), 9UL)), g_432.f0)), g_355.f0))), g_355.f0)) & p_31) <= l_748);
            p_30.f4 = (safe_lshift_func_int8_t_s_s(l_751, 3));
        }
        for (g_37.f1 = 3; (g_37.f1 != 48); g_37.f1 = safe_add_func_uint16_t_u_u(g_37.f1, 7))
        {
            union U5 l_763 = {0xBDL};
            union U0 l_764 = {0x9766265BL};
            union U1 l_770 = {0x23E8FD4EL};
            unsigned l_888 = 0UL;
            union U2 l_931 = {0x68C0L};
        }
        for (g_37.f2 = 0; (g_37.f2 != 20); ++g_37.f2)
        {
            l_704 = g_432.f2;
        }
    }
    else
    {
        union U1 l_994 = {4294967295UL};
        int l_1017 = 0L;
        unsigned short l_1054 = 1UL;
        union U3 l_1057 = {4294967295UL};
        unsigned l_1104 = 4294967295UL;
        union U2 l_1114 = {0x6C3CL};
        union U0 l_1157 = {1UL};
        p_30.f4 = (safe_mod_func_uint8_t_u_u((p_30.f3 != l_492.f2), (l_967 = p_31)));
        p_30.f4 = l_989;
        if ((safe_add_func_int8_t_s_s(func_39(p_30.f0, (g_176 , 0x9CA8BF8FL), g_945.f4, (safe_sub_func_uint16_t_u_u((((func_47((l_994 , (2L >= l_994.f3)), g_945, ((0x7A087525L && l_66.f3) , 0xDC31A778L), g_78.f3) | l_994.f3) , l_689) >= 1UL), 0x8957L)), g_37), 0x58L)))
        {
            unsigned l_995 = 4294967291UL;
            int l_1000 = 0x0BDB9734L;
            union U0 l_1001 = {0x885ADEA2L};
            l_816.f3 = l_995;
            p_30.f4 = (safe_mod_func_uint32_t_u_u(p_30.f2, func_47((safe_mod_func_int8_t_s_s(func_56((l_1000 = p_30.f4), p_30.f3), func_39((g_366 | (l_66.f2 = (+0x0DL))), p_30.f3, p_30.f3, (l_1001 , p_30.f4), g_115))), l_1002, l_994.f3, l_994.f1)));
            g_115.f4 = l_816.f0;
        }
        else
        {
            short l_1011 = 1L;
            int l_1016 = 1L;
            int l_1018 = 0x459044ABL;
            union U0 l_1022 = {4294967286UL};
            union U2 l_1023 = {2L};
            union U0 l_1024 = {4294967289UL};
            union U5 l_1103 = {0x14L};
            l_1018 = (((l_1002.f0 && (l_1002.f2 >= (l_66.f2 >= 0xA3L))) != (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_816.f3 , (0x6AL & (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((p_30.f0 = (p_31 | (g_878 = ((l_1011 = p_30.f0) == ((l_1017 = (((((l_1016 = ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_66.f0, p_30.f1)) != g_176.f1), l_994.f3)) >= 0x64L)) < g_176.f0) & p_30.f2) >= 4294967294UL) , l_1016)) | l_689))))), l_66.f4)) < l_816.f2), l_1018)))), l_994.f3)), 9UL))) & g_176.f3);
            if (func_47((safe_rshift_func_uint16_t_u_s(p_32, 11)), (l_1022 = l_1021), (p_30.f4 = (l_1023 , (-7L))), func_47(g_176.f3, (l_1024 = l_66), (l_1018 = p_32), (g_37.f2 = (g_115.f2 = g_78.f0)))))
            {
                for (g_355.f3 = 8; (g_355.f3 == 41); g_355.f3 = safe_add_func_int8_t_s_s(g_355.f3, 1))
                {
                    unsigned l_1027 = 1UL;
                    union U6 l_1036 = {0x41379FD3L};
                    union U4 l_1043 = {0x21L};
                    g_945.f4 = l_1027;
                    p_30.f4 = (safe_div_func_int32_t_s_s(((g_432 , (safe_add_func_uint32_t_u_u((g_60 ^ (safe_unary_minus_func_int32_t_s(p_32))), (g_151 ^ (safe_lshift_func_int16_t_s_u(((((l_1035 = (g_430 == 0xA1613858L)) <= 0x44D096D1L) , l_1036) , (((safe_mod_func_int8_t_s_s((-1L), g_176.f1)) ^ p_30.f2) | g_37.f3)), g_78.f0)))))) || 0UL), g_183));
                    if (g_355.f0)
                        continue;
                    if (((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_355.f1, (p_30.f0 = g_176.f1))), (l_1017 || (l_1043 , (l_1043.f2 , (safe_sub_func_uint32_t_u_u((g_355 , ((((-4L) == p_32) == ((l_1017 = g_65) != 255UL)) < 0xA8ADC9B2L)), l_994.f1))))))) , l_994.f2))
                    {
                        p_30.f4 = ((0x94L | g_176.f0) == 0xB9L);
                    }
                    else
                    {
                        p_30.f4 = g_945.f2;
                        p_30.f4 = l_492.f0;
                    }
                }
            }
            else
            {
                unsigned l_1050 = 4294967291UL;
                int l_1052 = 0x8DE82A3BL;
                unsigned short l_1053 = 9UL;
                union U0 l_1087 = {0UL};
                unsigned l_1122 = 0x3923D280L;
                union U1 l_1144 = {4294967286UL};
                for (l_1024.f1 = 0; (l_1024.f1 > (-1)); l_1024.f1--)
                {
                    union U0 l_1051 = {0x6D27979CL};
                    for (g_205.f2 = 0; (g_205.f2 <= 11); ++g_205.f2)
                    {
                        if (g_366)
                            break;
                        p_30.f4 = 0xBC0387BCL;
                    }
                    l_1050 = p_30.f0;
                    g_945.f2 = (p_30.f1 != (((l_1017 = 0x6CF5L) && 0x980CL) || (l_1053 , 1L)));
                }
                p_30.f4 = ((0x2354L <= (p_32 = g_183)) <= (l_1053 || (l_1054 > (p_30.f3 <= p_30.f4))));
                g_945.f2 = ((+(safe_add_func_int8_t_s_s((l_1057 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(l_1002.f0, 2)) || l_1024.f1), (-6L))), 4))), g_918))) < g_115.f0);
                if ((((p_32 , p_32) | (0x4BL <= g_151)) , p_30.f3))
                {
                    unsigned l_1066 = 1UL;
                    union U5 l_1071 = {0x18L};
                    int l_1076 = 0xD2467C34L;
                    short l_1129 = 0x1207L;
                    p_30.f4 = 0xC8645FEBL;
                    l_1076 = (safe_sub_func_int8_t_s_s(((l_1066 = 0x7CL) , func_39(((((0x0BEAL ^ (0x72BFCCB8L != (safe_rshift_func_int16_t_s_s(p_31, 6)))) && (safe_add_func_int32_t_s_s((((((l_1071 , ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(g_430, (((l_1017 = (l_748 & ((g_918 = (g_176 , (p_32 , p_30.f2))) && l_1050))) & l_1057.f1) >= g_432.f2))) == g_78.f3) != 0UL), g_60)) , p_30.f3)) >= g_176.f0) ^ p_31) > 4294967295UL) ^ p_30.f1), p_30.f3))) , g_115.f2) && 0xE0L), l_1022.f0, p_32, g_37.f0, p_30)), p_30.f1));
                    if ((g_432 , ((safe_lshift_func_int16_t_s_u((g_205 , ((safe_rshift_func_uint8_t_u_u(g_1089.f4, p_31)) , 0x1780L)), 13)) == (-5L))))
                    {
                        unsigned l_1105 = 0xAA03221DL;
                        int l_1117 = 0x537A1FB6L;
                        g_430 = ((safe_sub_func_uint16_t_u_u((l_816.f3 = (safe_lshift_func_uint16_t_u_s(((g_115.f0 = ((((g_205.f3 = (-9L)) < (safe_mod_func_uint16_t_u_u(g_16, l_1057.f3))) > (p_30.f0 = (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x337021C9L, func_56((l_1018 <= (p_30.f3 = (safe_unary_minus_func_uint32_t_u(g_115.f1)))), l_1002.f3))), (safe_div_func_uint8_t_u_u((l_1103 , l_1104), l_1105)))) || 246UL) <= 0x15L))) & p_32)) && 0x90L), p_31))), l_1071.f0)) <= 0xAD670C26L);
                        g_115.f4 = l_1076;
                        l_1117 = ((1UL ^ (safe_rshift_func_uint16_t_u_s(65534UL, (p_30.f2 , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_1089.f2, (0x3B6EL == (((safe_add_func_int8_t_s_s((l_1114 , (safe_div_func_int32_t_s_s((g_78.f1 || func_56(l_1022.f2, p_32)), p_32))), p_30.f3)) & 1L) != 0x0538L)))), l_1023.f2)))))) & g_78.f0);
                        p_30.f4 = 0x9BF7EB95L;
                    }
                    else
                    {
                        p_30.f4 = ((func_56((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_1122 = (l_1018 = 2UL)), (65527UL && (l_1016 = (((safe_rshift_func_uint8_t_u_u(g_78.f3, 3)) > g_176.f2) == (!(p_32 = (safe_sub_func_uint32_t_u_u((p_30.f3 > (l_1071.f0 > (l_816.f0 | (safe_mod_func_uint16_t_u_u(p_30.f3, l_1076))))), g_151))))))))), 0xF7L)), l_1129) | l_1114.f0) , l_1129);
                        g_37.f4 = p_30.f1;
                        l_66.f2 = g_1089.f2;
                        p_30.f4 = 0xDEC0202BL;
                    }
                    for (l_994.f1 = 0; (l_994.f1 < 3); l_994.f1 = safe_add_func_uint16_t_u_u(l_994.f1, 6))
                    {
                        unsigned short l_1143 = 2UL;
                        int l_1155 = 9L;
                        union U4 l_1156 = {0x3FL};
                        p_30.f4 = (l_1057 , (safe_rshift_func_uint16_t_u_s((l_1076 = p_31), (g_432.f0 = (safe_unary_minus_func_int16_t_s((((g_183 < func_39(g_78.f3, p_30.f4, (l_1002.f0 | ((g_151 = (safe_lshift_func_int8_t_s_s(0x80L, (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_31, 12)), (g_355.f4 = 7UL)))))) < l_1103.f0)), l_1087.f0, g_115)) != 0UL) | p_31)))))));
                        g_430 = (safe_sub_func_uint16_t_u_u(l_1143, l_1104));
                    }
                }
                else
                {
                    char l_1168 = (-4L);
                    union U0 l_1169 = {0xE421E150L};
                    l_1052 = (((safe_mod_func_uint16_t_u_u(func_39(g_60, l_1144.f2, (l_1087.f4 = (g_432.f0 , (safe_rshift_func_int8_t_s_u((g_204 != (p_30.f1 <= l_66.f0)), g_78.f2)))), l_1169.f4, g_37), g_176.f2)) | 0x33L) && g_204);
                    g_432.f1 = (g_1089.f4 = func_39((g_78 , p_30.f2), (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((+((g_115.f0 = (func_56((((safe_add_func_uint16_t_u_u((l_1057.f3 = func_56(g_204, (g_205.f2 = ((+(safe_mod_func_int32_t_s_s(((0x93D8L || (func_56(l_994.f1, (l_1021.f2 = g_115.f4)) & l_1168)) ^ (l_1169.f2 = (g_355.f0 != l_1169.f3))), p_30.f4))) | g_176.f3)))), g_176.f2)) || g_432.f0) || p_30.f3), g_366) , p_30.f1)) || p_30.f2)), p_30.f1)), 12)), g_37.f2, p_32, g_37));
                }
            }
        }
    }
    p_30.f4 = func_56(((g_205.f2 = ((1L ^ (func_33((l_816 , ((((safe_lshift_func_uint16_t_u_u(p_31, (((l_1180 , 1UL) , p_30.f4) || (0x8869L <= ((l_816.f1 <= (+0L)) != 0UL))))) || l_989) <= p_30.f4) <= l_967)), p_30.f4, l_1180.f0) , 4294967289UL)) <= 2L)) ^ 0xBC98L), p_32);
    g_945.f2 = (((safe_mod_func_uint8_t_u_u((func_39((l_1021.f4 = g_78.f3), g_78.f3, p_32, p_31, l_492) > 255UL), 8L)) , p_30.f0) , p_30.f0);
    return l_1183;
}







static union U4 func_33(int p_34, unsigned p_35, unsigned short p_36)
{
    return g_37;
}







static int func_39(unsigned p_40, int p_41, int p_42, int p_43, union U4 p_44)
{
    char l_495 = (-1L);
    int l_520 = 0xE9FE08ABL;
    int l_589 = 0x1CAFE624L;
    unsigned char l_623 = 0UL;
    int l_630 = 1L;
    short l_631 = 0x7B08L;
    union U3 l_666 = {8UL};
    union U1 l_676 = {0x323B760FL};
    for (g_115.f4 = 13; (g_115.f4 >= (-15)); g_115.f4 = safe_sub_func_int8_t_s_s(g_115.f4, 1))
    {
        int l_502 = 0xC888C93FL;
        int l_518 = 3L;
    }
    return l_495;
}







static char func_47(unsigned p_48, union U0 p_49, int p_50, unsigned char p_51)
{
    union U5 l_67 = {0UL};
    union U4 l_68 = {0x61L};
    int l_75 = 5L;
    union U3 l_94 = {4294967295UL};
    union U1 l_108 = {0x0C93A8B8L};
    union U2 l_157 = {0x51B9L};
    union U0 l_299 = {0UL};
    int l_388 = 9L;
    short l_484 = 0L;
    if (((l_67 , (l_68 , p_51)) , p_49.f4))
    {
        char l_69 = 0x3EL;
        l_69 = (0L & g_16);
        l_68.f4 = p_49.f3;
    }
    else
    {
        unsigned char l_83 = 0x7EL;
        int l_84 = 1L;
        int l_85 = 0x8D362EA1L;
        l_85 = ((safe_div_func_int16_t_s_s(p_49.f1, (safe_rshift_func_int16_t_s_s((((g_74 = l_68.f2) || g_60) & ((l_75 = g_60) || (+(l_68.f0 & ((((safe_mul_func_int8_t_s_s(0xDCL, (g_78 , (l_84 = (p_49.f0 < (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_56((p_48 = (0xF0BAL & l_83)), l_67.f0), p_50)), g_78.f0))))))) > 1UL) <= g_78.f1) & p_50))))), 10)))) && g_78.f1);
    }
    g_78.f3 = (246UL | ((p_49.f3 = (safe_mod_func_uint32_t_u_u(4294967295UL, p_51))) && ((l_68.f2 && (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_68.f2, 0x74E99835L)) > l_68.f0), (((l_94 , (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((l_75 = p_49.f3), g_78.f3)), l_94.f0))) != 0xE2L) ^ 0xDE1F3C6EL))), 2))) , p_50)));
    if (l_67.f0)
    {
        union U0 l_103 = {0xCEF17F0EL};
        int l_118 = 4L;
        union U1 l_129 = {0x7DF68D34L};
        int l_135 = 0L;
        unsigned l_267 = 2UL;
        union U4 l_301 = {0x4DL};
        unsigned char l_326 = 1UL;
        union U6 l_350 = {4294967295UL};
        union U3 l_378 = {0UL};
        unsigned l_380 = 0UL;
        short l_429 = 0xF8FDL;
        short l_477 = 0x0C08L;
        union U2 l_485 = {0L};
        l_75 = p_49.f3;
        l_118 = ((+(safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_103 , g_78.f0), l_68.f0)), (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((p_49.f1 = ((l_108 , func_56(g_60, g_78.f0)) | (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((g_115 , (safe_mod_func_int8_t_s_s(((l_94.f3 = 4294967292UL) & g_16), g_78.f2))) <= 0UL), 2)), 8UL)) < g_78.f3) != 0xA2ABDB3BL))), 0)) , g_78.f0), g_78.f3))))) , l_103.f4);
        for (p_49.f0 = (-10); (p_49.f0 < 39); ++p_49.f0)
        {
            unsigned l_132 = 4294967288UL;
            int l_142 = 0x988215CFL;
            int l_152 = 1L;
            int l_300 = 1L;
            int l_325 = 0L;
            short l_344 = 2L;
            union U1 l_450 = {0UL};
            if ((safe_sub_func_uint16_t_u_u((g_65 = l_94.f1), p_48)))
            {
                for (l_68.f1 = (-19); (l_68.f1 < 30); ++l_68.f1)
                {
                    return p_49.f3;
                }
            }
            else
            {
                unsigned l_150 = 4294967295UL;
                int l_193 = (-1L);
                union U4 l_243 = {0x2FL};
                p_50 = (safe_add_func_uint16_t_u_u(((((4294967295UL | (safe_mod_func_int8_t_s_s(g_115.f0, p_51))) , (l_129 , ((safe_add_func_uint8_t_u_u(((0x4031L ^ 65534UL) < l_132), ((safe_add_func_int32_t_s_s(g_78.f3, (((g_65 = (l_135 , g_60)) , 65535UL) >= 0xDD90L))) < g_78.f2))) >= l_129.f2))) <= p_49.f4) > l_132), l_103.f4));
                for (g_115.f0 = 0; (g_115.f0 == 26); ++g_115.f0)
                {
                    short l_138 = 3L;
                    short l_141 = (-1L);
                    union U0 l_143 = {0x1C95261AL};
                    int l_225 = (-2L);
                }
                g_205.f3 = (((l_68.f0 , ((safe_rshift_func_int8_t_s_s((((l_68 = l_68) , func_56((g_204 , g_204), (safe_lshift_func_int16_t_s_s((-4L), 6)))) && l_152), g_205.f3)) <= (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x7E3EL, g_151)), g_183)))) < g_204) <= g_176.f2);
            }
            for (g_115.f3 = 23; (g_115.f3 != 55); g_115.f3 = safe_add_func_int8_t_s_s(g_115.f3, 5))
            {
                int l_264 = 0x20AB5C31L;
            }
        }
    }
    else
    {
        return g_176.f3;
    }
    return p_49.f3;
}







static unsigned func_56(unsigned p_57, unsigned short p_58)
{
    unsigned char l_61 = 0xFCL;
    int l_62 = 0L;
    l_61 = 0x1CC0D681L;
    l_62 = p_58;
    for (p_58 = 0; (p_58 >= 22); p_58++)
    {
        g_65 = g_60;
    }
    return g_60;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_37.f3, "g_37.f3", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f3, "g_115.f3", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_176.f3, "g_176.f3", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_432.f0, "g_432.f0", print_hash_value);
    transparent_crc(g_432.f2, "g_432.f2", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_1245, "g_1245", print_hash_value);
    transparent_crc(g_1294.f2, "g_1294.f2", print_hash_value);
    transparent_crc(g_1294.f3, "g_1294.f3", print_hash_value);
    transparent_crc(g_1333, "g_1333", print_hash_value);
    transparent_crc(g_1493, "g_1493", print_hash_value);
    transparent_crc(g_1494, "g_1494", print_hash_value);
    transparent_crc(g_1950, "g_1950", print_hash_value);
    transparent_crc(g_1968, "g_1968", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_2019, "g_2019", print_hash_value);
    transparent_crc(g_2123.f0, "g_2123.f0", print_hash_value);
    transparent_crc(g_2123.f1, "g_2123.f1", print_hash_value);
    transparent_crc(g_2123.f2, "g_2123.f2", print_hash_value);
    transparent_crc(g_2123.f3, "g_2123.f3", print_hash_value);
    transparent_crc(g_2130.f0, "g_2130.f0", print_hash_value);
    transparent_crc(g_2130.f1, "g_2130.f1", print_hash_value);
    transparent_crc(g_2130.f2, "g_2130.f2", print_hash_value);
    transparent_crc(g_2130.f3, "g_2130.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
