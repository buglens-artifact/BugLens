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
   unsigned char f0;
   int f1;
};

union U1 {
   short f0;
   unsigned f1;
};


static short g_2 = 0x7230L;
static unsigned g_12 = 0xD594D035L;
static union U0 g_13 = {0x01L};
static int g_63 = 0x6E2E31B5L;
static unsigned char g_64 = 0UL;
static short g_67 = 5L;
static union U0 g_86 = {2UL};
static union U1 g_134 = {0x3445L};
static char g_157 = 0x0CL;
static unsigned g_198 = 0xD5B22CD4L;
static unsigned short g_217 = 0xDD69L;
static int g_221 = (-1L);
static unsigned g_249 = 4294967289UL;
static unsigned g_265 = 4UL;
static unsigned g_268 = 0UL;
static unsigned short g_281 = 2UL;
static unsigned char g_291 = 246UL;
static int g_292 = 0xD99C1F59L;
static unsigned char g_318 = 0xD4L;
static short g_352 = 0xD209L;
static int g_366 = 0x3DB6FB7CL;
static union U1 g_445 = {0xA874L};
static char g_446 = 0xF9L;
static unsigned short g_506 = 65535UL;
static unsigned g_543 = 4294967290UL;
static unsigned g_609 = 0xEB6AE51CL;
static unsigned g_634 = 0x225AF877L;
static char g_661 = 0L;
static char g_733 = 0xD8L;
static unsigned short g_743 = 0x7BECL;
static unsigned g_781 = 8UL;
static int g_801 = 0x84A13136L;
static union U0 g_808 = {2UL};
static unsigned g_832 = 0x445FC5A3L;
static union U1 g_869 = {-4L};



static short func_1(void);
static unsigned func_6(unsigned p_7, int p_8, union U0 p_9, union U1 p_10, unsigned p_11);
static int func_14(unsigned short p_15, unsigned short p_16, unsigned p_17, unsigned char p_18);
static unsigned short func_21(union U1 p_22, union U1 p_23, short p_24, unsigned p_25);
static union U1 func_26(char p_27, short p_28, unsigned char p_29);
static unsigned char func_31(union U0 p_32, union U1 p_33, unsigned p_34, unsigned p_35, char p_36);
static union U0 func_37(int p_38, int p_39);
static char func_40(unsigned p_41, unsigned char p_42, char p_43, unsigned short p_44, unsigned char p_45);
static unsigned char func_46(short p_47, union U0 p_48);
static union U0 func_49(union U0 p_50, unsigned p_51, char p_52, char p_53, unsigned p_54);
static short func_1(void)
{
    int l_3 = (-1L);
    union U0 l_871 = {246UL};
    unsigned l_900 = 0x3C06727AL;
    l_900 = (g_2 ^ (l_3 | (g_2 , ((((0x0BD2L <= (g_2 < (safe_sub_func_int16_t_s_s((func_6((g_12 = g_2), (g_13 , func_14(((g_2 & (0x6C849023L ^ l_3)) , 0x83A0L), l_3, g_2, g_2)), l_871, g_869, l_871.f0) > l_871.f0), 0x9787L)))) , 65527UL) & 0UL) , l_3))));
    return l_3;
}







static unsigned func_6(unsigned p_7, int p_8, union U0 p_9, union U1 p_10, unsigned p_11)
{
    unsigned l_874 = 4294967286UL;
    unsigned l_881 = 4294967294UL;
    int l_882 = 0xC562E95DL;
    int l_885 = 1L;
    unsigned l_898 = 0xC2175A9AL;
    int l_899 = 0L;
    g_86.f1 = (safe_mul_func_uint8_t_u_u((g_808.f0 = (l_874 ^ l_874)), (p_8 != ((safe_lshift_func_int8_t_s_s((l_882 |= (safe_lshift_func_int16_t_s_s((func_37(p_10.f0, (safe_lshift_func_int8_t_s_s((-1L), ((l_874 == (l_874 , 1L)) <= l_874)))) , g_2), l_881))), g_198)) > l_881))));

        l_885 = (safe_rshift_func_int16_t_s_u(l_881, 8));
    l_882 = (l_899 = (l_885 > (safe_mul_func_int8_t_s_s(l_882, ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((func_14((((!0xB658B846L) ^ ((safe_sub_func_int32_t_s_s(func_14(g_2, (p_11 || (((safe_mul_func_int8_t_s_s((p_7 , (p_7 >= (((safe_lshift_func_uint8_t_u_u((g_543 != 0xB9B3L), 5)) > p_7) | g_198))), l_874)) , l_882) >= 0UL)), l_885, p_9.f0), p_9.f0)) || 0x941ED641L)) != 4294967295UL), l_881, p_10.f0, g_2) & p_7), l_898)), 2)) < l_882)))));

        return g_134.f0;
}







static int func_14(unsigned short p_15, unsigned short p_16, unsigned p_17, unsigned char p_18)
{
    short l_30 = 0x9A4DL;
    union U0 l_55 = {255UL};
    int l_56 = 0x783DE769L;
    int l_57 = 0xA0165D3EL;
    short l_62 = (-9L);
    union U1 l_434 = {0L};
    unsigned char l_756 = 255UL;
    char l_757 = 1L;
    unsigned l_780 = 0UL;
    union U0 l_786 = {0UL};
    int l_789 = 7L;
    unsigned short l_826 = 0xA90FL;
    l_757 = ((((safe_mod_func_int16_t_s_s((func_21(func_26(g_13.f0, l_30, func_31((l_55 = func_37((func_40(g_2, func_46(g_13.f0, func_49(l_55, (l_56 = g_2), (((l_57 = p_15) <= ((0x9C42FA43L || (safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(g_13.f0, l_55.f0)) , g_2) & g_13.f0), l_30))) ^ l_62)) , g_13.f0), g_13.f0, g_2)), l_62, p_18, l_30) < g_13.f0), l_30)), g_134, g_13.f0, g_134.f0, g_134.f0)), l_434, l_30, g_2) != 0xAB36L), 0x293EL)) , g_265) ^ g_2) , l_756);
lbl_831:
    if (l_57)
    {
        unsigned char l_760 = 0x57L;
        int l_761 = 0x5A330531L;
        union U0 l_762 = {0UL};
        union U1 l_763 = {1L};
        unsigned char l_764 = 0xB2L;
        l_55.f1 = ((safe_mod_func_int16_t_s_s(0xD16EL, 1UL)) > (g_609 > (g_198 != p_16)));

                l_761 = l_760;
        l_761 |= p_18;
        l_764 = func_31(l_762, l_763, l_56, p_18, (l_761 = (p_15 , 0x73L)));
    }
    else
    {
        unsigned l_771 = 0xDD7C9ABDL;
        g_781 ^= (safe_mul_func_uint8_t_u_u(func_40(g_221, (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_771, l_55.f0)) , ((safe_rshift_func_uint8_t_u_u((p_18 = (func_40(l_62, (func_26(p_15, p_15, ((l_57 = (safe_mod_func_uint16_t_u_u(g_157, (safe_lshift_func_uint16_t_u_u(l_771, (safe_mul_func_int16_t_s_s((func_46(g_86.f0, l_55) == 1L), g_506))))))) != 0x944CL)) , 2UL), l_434.f0, g_292, g_268) && p_18)), 4)) , (-7L))), l_780)), p_15, p_17, g_291), p_17));
        l_57 ^= (l_56 >= 0L);
    }
    if ((g_13.f1 = (l_789 ^= func_40(func_40(g_221, ((safe_add_func_uint16_t_u_u((((l_57 = (safe_add_func_uint16_t_u_u(func_46(p_15, l_786), ((l_434.f0 & ((l_56 |= ((func_46((safe_mod_func_uint8_t_u_u(func_46((g_67 |= l_756), l_55), g_506)), l_55) > g_268) != g_661)) <= 1UL)) > g_661)))) && 1L) >= 7UL), 0x7E94L)) > l_786.f0), p_18, p_17, l_30), p_18, p_15, l_434.f0, l_55.f0))))
    {
        unsigned char l_800 = 253UL;
        char l_802 = 0xBFL;
        int l_807 = 0x36FE4C2BL;
        if ((((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_157 != ((safe_add_func_int8_t_s_s((g_801 = (l_800 = g_134.f0)), (l_802 , (((safe_mod_func_int16_t_s_s((g_318 & (-1L)), l_57)) <= 0x80CCL) , func_46((g_445.f0 = (l_434.f0 <= (g_67 = (safe_mul_func_uint16_t_u_u((func_26(g_13.f1, g_543, l_807) , p_16), p_17))))), g_808))))) >= g_292)), 7)) , p_16), 0x9D0DL)) , (-1L)) & 0xB543AF38L), l_802)), 1UL)) >= 2L) == g_221))
        {
            return p_16;
        }
        else
        {
            union U1 l_813 = {0x9E28L};
            int l_825 = 0L;
            int l_827 = (-1L);
            l_827 = func_46((!(safe_sub_func_uint16_t_u_u((func_40(l_789, ((((((l_807 = (safe_mul_func_int8_t_s_s(func_21(l_813, g_445, (g_64 < (((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u((((safe_add_func_int32_t_s_s(0L, g_13.f0)) < ((safe_mod_func_uint32_t_u_u(0x25251C35L, (l_825 ^= (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((l_813.f0 ^ (g_63 ^ 0x7758DB48L)) != l_813.f0), g_445.f0)) , p_15), g_733))))) ^ p_15)) & g_281))) & 8UL), l_802)) && l_802) != 0xF2L)), g_134.f0), l_55.f0))) <= g_2) | p_17) >= g_2) >= 0xB5CBL) && p_17), g_2, g_743, l_826) <= g_808.f0), 0x062CL))), l_55);

                    }

            }
    else
    {
        unsigned short l_830 = 0x0376L;
        char l_857 = 0x52L;
        union U0 l_860 = {4UL};
        int l_861 = (-7L);
        union U1 l_868 = {0x96DCL};
        for (l_56 = (-11); (l_56 < 18); l_56++)
        {
            int l_837 = 7L;
            l_830 &= g_265;
            if (l_830)
            {
                int l_850 = 0x698A7F41L;
                unsigned short l_858 = 1UL;
                union U0 l_859 = {1UL};
                if (g_217)
                    goto lbl_831;
                if (g_832)
                    continue;
                l_861 ^= (!(g_366 |= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(l_837, ((g_198 ^ (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((0x2217L >= (p_16 = (((safe_mod_func_int16_t_s_s(func_46(((safe_mul_func_int8_t_s_s(p_16, (safe_add_func_uint32_t_u_u(func_46(((p_15 = (func_46(l_850, func_37(((l_789 = (p_18 = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_13.f0, ((p_17 , ((p_16 != (l_837 > l_857)) > g_198)) < 0xAFL))), l_850)), l_858)))) | p_15), p_16)) , p_15)) , p_15), l_859), g_446)))) <= p_16), l_860), p_17)) , 255UL) != 255UL))) , p_16), 0x35L)), 5)), 0x11L))) && 0x56L))), 0))));
                for (g_445.f0 = 0; (g_445.f0 > 19); ++g_445.f0)
                {
                    l_837 |= p_17;
                }
            }
            else
            {
                unsigned l_864 = 0UL;
                union U1 l_867 = {6L};
                int l_870 = 9L;
                l_870 ^= (l_864 != (p_18 < (p_15 <= (safe_add_func_int8_t_s_s(func_31(func_37(p_18, func_21(l_434, l_867, l_837, func_21(((((((g_217 && (g_743 = (((l_860.f1 = (func_46(g_217, l_860) ^ p_16)) < p_18) == 246UL))) & 0x3EL) ^ g_446) | p_16) == p_15) , g_134), l_868, g_249, p_15))), g_869, g_733, g_808.f0, l_756), l_780)))));
                g_808.f1 = p_17;

                            }
        }

            }
    return l_57;
}







static unsigned short func_21(union U1 p_22, union U1 p_23, short p_24, unsigned p_25)
{
    unsigned short l_435 = 0x4CE5L;
    union U0 l_442 = {1UL};
    union U0 l_491 = {252UL};
    union U0 l_590 = {0x9DL};
    unsigned l_714 = 8UL;
    unsigned short l_745 = 65527UL;
    union U0 l_754 = {255UL};
    unsigned char l_755 = 252UL;
    l_435 = 0x8DC470D1L;
    if ((g_13.f1 = (0x0472L < (safe_lshift_func_int8_t_s_s(l_435, (g_446 = func_31(func_37((safe_mul_func_uint8_t_u_u((l_435 ^ func_31(g_86, g_134, g_198, ((((g_265 | ((safe_add_func_uint8_t_u_u((((l_442 = l_442) , (safe_lshift_func_int8_t_s_s((l_442.f0 != 0L), p_25))) != 0x5C9F013AL), p_23.f0)) < p_23.f0)) || 253UL) != g_134.f0) <= g_157), p_22.f0)), p_24)), g_2), g_445, p_23.f0, l_435, p_25)))))))
    {
        char l_451 = 0xD4L;
        union U1 l_480 = {6L};
        union U0 l_483 = {0xF9L};
        int l_633 = 0x793C0B44L;
        int l_635 = 0x90FD3DB7L;
        l_442.f1 = 0L;

                if (g_445.f0)
        {
            unsigned short l_461 = 3UL;
            int l_499 = 7L;
            union U0 l_648 = {0UL};
            short l_656 = 0x8BC8L;
            for (g_67 = 0; (g_67 == (-22)); --g_67)
            {
                short l_462 = 0xFC5AL;
                int l_463 = 0x568839B8L;
                union U0 l_518 = {0xAEL};
                unsigned char l_528 = 9UL;
                unsigned char l_529 = 251UL;
                int l_541 = 1L;
                unsigned l_561 = 4294967295UL;
                unsigned l_562 = 0x2284B4C7L;
                l_451 |= (safe_lshift_func_uint8_t_u_s((g_292 && 3UL), (~0xD7L)));
                l_463 = (func_26(g_318, (l_451 <= (safe_rshift_func_uint8_t_u_s(((l_442.f1 = 0xB41FL) <= ((safe_unary_minus_func_int8_t_s(0x97L)) <= (safe_mod_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((g_221 || ((l_462 ^= ((safe_mod_func_int32_t_s_s(l_461, 7UL)) <= l_435)) , 0x5089336CL)), p_25)) , l_461) , 0x03DA074FL) , p_25), l_463)))), 3))), l_435) , 6L);
                if (p_24)
                {
                    unsigned l_484 = 1UL;
                    int l_488 = 7L;
                    union U0 l_498 = {7UL};
                    for (g_268 = (-10); (g_268 == 44); ++g_268)
                    {
                        char l_485 = 0L;
                        l_442.f1 = (safe_add_func_uint32_t_u_u((l_442.f0 ^ ((((l_463 = (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(0xE4A5L, (p_22.f0 &= (l_484 = (safe_mod_func_int16_t_s_s((func_26(p_24, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((g_13.f1 ^ (((l_480 , ((safe_rshift_func_uint8_t_u_u(7UL, p_23.f0)) , (func_46(p_25, l_483) && l_483.f0))) , p_24) | l_442.f0)), p_24)) || p_23.f0), p_24)), p_23.f0) , l_461), p_25)))))), 1)), p_24)) < g_249) | l_485)) || p_25) & l_461) , g_198)), l_483.f0));
                        g_86.f1 = (l_484 , 0L);

                                            }
                    for (g_268 = 0; (g_268 <= 29); g_268 = safe_add_func_uint32_t_u_u(g_268, 2))
                    {
                        l_488 &= g_291;
                    }
                    l_499 ^= (safe_mod_func_int8_t_s_s(func_46(p_23.f0, l_491), (safe_rshift_func_int8_t_s_u((g_157 = (safe_lshift_func_uint16_t_u_s(((l_461 >= l_480.f0) ^ (g_445 , (l_463 = func_46(g_64, ((l_461 , (safe_lshift_func_int16_t_s_u(9L, l_491.f0))) , l_498))))), g_366))), 0))));
                    if ((p_24 & (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_23.f0, func_46((((((safe_rshift_func_uint8_t_u_u(l_442.f0, (0x8859L <= g_506))) == ((func_49(l_491, l_491.f0, l_461, ((g_366 || 0xBA9004A2L) & 0x7427L), g_268) , g_352) == l_480.f0)) == 0xB37FL) == l_461) | g_2), l_491))) , 9UL), 65526UL))))
                    {
                        return p_25;
                    }
                    else
                    {
                        return p_23.f0;
                    }
                }
                else
                {
                    unsigned char l_514 = 0x31L;
                    int l_519 = 0L;
                    for (l_491.f0 = 0; (l_491.f0 != 49); ++l_491.f0)
                    {
                        int l_511 = 0x83543AC0L;
                        union U0 l_517 = {0x5DL};
                        l_519 = (safe_mul_func_uint16_t_u_u((l_511 <= g_13.f0), (safe_add_func_uint16_t_u_u(((((func_46(l_514, (l_518 = ((l_483.f0 && (safe_add_func_int16_t_s_s(g_64, 0L))) , (l_517 = func_37(l_499, g_134.f0))))) && g_13.f0) & 0x01L) || 0x66L) > g_366), g_291))));
                    }
                    l_519 = (safe_add_func_uint32_t_u_u(((l_483.f1 = (safe_lshift_func_int16_t_s_u(1L, 8))) | (safe_sub_func_int16_t_s_s(l_480.f0, (l_491.f0 <= ((g_217 = ((l_463 &= ((safe_mul_func_uint8_t_u_u((p_22 , (l_462 , p_25)), func_46((l_528 , p_23.f0), g_13))) && 0x9BAAB29BL)) | l_529)) , p_24))))), 0x806E90A4L));

                                        if ((0xDF5C93D2L & g_281))
                    {
                        g_366 = l_491.f0;
                        g_13.f1 = (g_366 = 0xDBF1C60DL);
                    }
                    else
                    {
                        int l_530 = 0x31D52825L;
                        int l_542 = 0x75A2C40AL;
                        l_542 |= ((((-1L) > l_530) > ((p_22.f0 < (((safe_lshift_func_uint16_t_u_s(l_530, p_25)) ^ (func_26((g_446 = ((safe_lshift_func_int8_t_s_s(p_24, (((l_499 ^= ((0x35L <= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_281, g_268)), l_442.f1)), g_86.f0))) | p_25)) == l_528) , g_265))) >= g_506)), l_541, g_2) , 4294967295UL)) & p_23.f0)) <= 0x36D3FA54L)) ^ p_22.f0);
                    }
                    l_519 = (g_86.f0 < (g_366 & (g_543 = (g_13.f1 = l_442.f0))));
                }

                                for (l_480.f1 = 0; (l_480.f1 >= 18); ++l_480.f1)
                {
                    unsigned char l_560 = 0xC8L;
                    unsigned short l_563 = 0xD622L;
                    g_86.f1 = (((safe_add_func_int8_t_s_s((0xD9433F04L <= ((p_22.f0 && ((((!p_22.f0) , (safe_add_func_uint16_t_u_u(((p_22 , (((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((((g_13.f1 ^= l_483.f0) , l_480.f0) != (safe_mul_func_uint8_t_u_u((l_541 |= (func_46((p_24 = (+(safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((l_560 <= (g_198 & g_265)), g_292)), l_499)))), g_86) ^ 0UL)), l_518.f0))), 2)) <= l_560) || 0x1B1BL), (-1L))) || l_561) < l_562)) , g_134.f0), l_483.f0))) != l_435) , 0x9EF02342L)) & l_462)), l_563)) == 0UL) | g_67);

                                    }

                            }
            if (l_499)
            {
                int l_566 = 7L;
                l_442.f1 &= (-5L);
                g_86.f1 = (-5L);

                                g_366 = (((safe_mul_func_int8_t_s_s((-3L), g_13.f1)) && l_566) | 0L);
            }
            else
            {
                unsigned char l_570 = 0x25L;
                for (g_67 = 0; (g_67 >= 13); g_67++)
                {
                    g_13.f1 = p_25;
                }
                if (l_483.f0)
                    goto lbl_571;
                l_442.f1 ^= (safe_unary_minus_func_int16_t_s(l_570));
lbl_571:
                l_499 = (~g_291);
                if ((l_570 ^ 0xBF775516L))
                {
                    int l_580 = 0xF310B0F9L;
                    int l_589 = 0xA3345FE6L;
                    g_13.f1 = ((~((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_499 == 0x59F8796BL), (g_64 == ((safe_mul_func_int16_t_s_s((l_580 = g_543), (safe_mul_func_int16_t_s_s((p_24 = (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0x64L, ((safe_rshift_func_uint16_t_u_u(l_491.f0, 13)) != (l_461 == l_589)))), func_46(g_2, l_590)))), 1UL)))) != 0xF5C6L)))), p_23.f0)), 5)) != (-1L))) == g_506);
                    l_590.f1 = (((safe_unary_minus_func_int8_t_s(l_580)) != (l_499 ^= (p_22.f0 < 0x83EAL))) , 0x59A9ACA6L);

                                        l_499 |= g_2;
                    g_86.f1 = (safe_rshift_func_uint16_t_u_s((g_86.f0 == ((p_23.f0 , (0xADL ^ 9L)) , g_366)), (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_13.f0, 0x4AD8L)), (safe_lshift_func_int16_t_s_u(((l_442.f1 = g_64) , ((g_249 == p_25) || g_366)), 11))))));

                                    }
                else
                {
                    unsigned char l_608 = 254UL;
                    int l_643 = 3L;
                    int l_655 = (-1L);
                    if (((l_483.f1 = g_445.f0) , 0xF677F32DL))
                    {
                        union U0 l_604 = {0UL};
                        int l_607 = 0x4C5D950EL;
                        l_604.f1 = (safe_lshift_func_uint8_t_u_s(((g_86.f0 && (((((g_445.f0 & (func_46(g_13.f1, l_604) > ((g_249 != ((((l_607 &= g_292) > 0x1F2BL) , 0x34L) == l_608)) || l_570))) & p_25) , g_198) | g_13.f1) <= g_609)) , l_607), p_23.f0));

                                            }
                    else
                    {
                        int l_636 = (-1L);
                        g_366 &= 8L;
                        l_636 = (((((safe_lshift_func_int8_t_s_u(g_13.f1, (func_46((g_445.f0 = g_281), (g_86 = func_37(l_608, ((safe_add_func_uint16_t_u_u(l_491.f0, (safe_mul_func_uint16_t_u_u(0xB100L, ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((l_635 ^= ((l_483.f1 = 0UL) > ((safe_rshift_func_int16_t_s_s((g_634 &= (safe_add_func_int32_t_s_s((l_499 || (l_442.f1 = ((safe_lshift_func_uint16_t_u_s((p_25 != ((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((!((((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((((l_633 = p_23.f0) , p_25) == g_86.f0), 2)))) | l_461) , 0x3BE8L) , l_499)) == g_366) , p_23.f0), p_25)) , (-6L)), p_23.f0)) , l_570)), 12)) == 0x72L))), p_23.f0))), g_2)) > p_25))), 0)) < g_318), 5)) != 0xA0L))))) , 0xA744A128L)))) , g_67))) ^ 3L) ^ 0x96EB765BL) , g_221) <= g_67);
                    }

                                        l_655 = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((p_22.f0 = (l_643 &= 0xDD30L)), (((p_25 || (safe_add_func_int32_t_s_s(p_23.f0, (p_24 , func_40(((safe_mod_func_uint32_t_u_u(((func_46(l_483.f0, l_648) & 0x78B1L) ^ func_46((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_506 ^= 65535UL), g_13.f1)), (-1L))), g_198)), l_491)), 0xE1A35C79L)) < l_499), l_483.f1, p_25, p_23.f0, g_13.f0))))) == p_23.f0) & l_608))), 0L)), g_13.f0)) ^ 0L);
                }
            }
            g_13.f1 = (l_656 != (255UL != ((((l_633 = (l_480.f0 , l_635)) , ((safe_add_func_int8_t_s_s(l_656, (((p_22.f0 ^= 0x0DCBL) >= (l_491.f0 == ((safe_lshift_func_int16_t_s_s(p_25, 3)) , (g_67 > g_157)))) || 0xE6L))) ^ p_25)) > g_318) | 0x079A2566L)));
            g_661 |= (g_67 != (l_590.f1 = (func_26(l_499, g_221, l_461) , l_499)));

                    }
        else
        {
            union U0 l_665 = {0x0EL};
            int l_684 = 0xA9332367L;
            g_86.f1 = (((0x64L ^ (((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(p_22.f0)) < func_46(g_268, l_665)) > (safe_mul_func_int8_t_s_s((g_157 &= ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((p_25 , 0xD97B653DL), (safe_mul_func_uint8_t_u_u(l_665.f0, g_221)))) | l_491.f0), 5)) || l_442.f0)), p_25))), p_24)) | 6UL) > p_22.f0)) < p_25) && 65531UL);

                        l_590.f1 = 6L;

                        g_366 = 0xC8AC8BC6L;
            g_366 = (safe_mod_func_int8_t_s_s((g_64 , (func_49((g_13 = l_665), p_22.f0, (p_25 <= ((l_491.f1 = g_291) >= ((~(l_635 = ((func_46((l_483.f1 = (safe_sub_func_int16_t_s_s(func_46((l_442.f1 = (safe_sub_func_int8_t_s_s(((l_590 , (((l_684 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(p_23.f0, (((l_442.f1 < (l_635 && g_86.f1)) > (-7L)) < p_23.f0))), 9))) >= g_634) <= (-1L))) && g_157), p_22.f0))), g_86), l_665.f0))), g_86) , 1UL) , g_249))) , g_2))), l_435, p_22.f0) , l_665.f0)), 1UL));

                                            }

                    }
    else
    {
        unsigned l_715 = 0x83600FDCL;
        unsigned char l_722 = 0xD8L;
        int l_731 = 0x597E8113L;
        union U0 l_732 = {0x33L};
        short l_734 = (-1L);
        int l_735 = 3L;
        unsigned char l_742 = 0x42L;
        int l_744 = 5L;
        for (g_86.f1 = (-20); (g_86.f1 <= (-21)); g_86.f1--)
        {
            int l_713 = 3L;
            int l_716 = 0L;
            union U0 l_717 = {0x19L};
            l_717.f1 = ((g_221 = ((safe_add_func_int32_t_s_s(g_291, (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_23.f0 ^= (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(func_46((l_716 |= ((l_442.f1 = (l_491.f1 = (g_318 &= ((65535UL || ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_86.f0, 0xEAL)), (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((0x53ACL || g_2), (safe_add_func_int16_t_s_s(((g_13.f1 ^= (safe_lshift_func_int8_t_s_s(((g_198 = p_25) , (l_590.f1 = (~((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((l_713 |= ((((p_24 , (g_86.f1 & g_609)) > g_661) < g_506) , l_491.f0)), l_435)), l_714)) > 0xBEAC6DC5L)))), l_715))) & l_714), 0x0576L)))) != l_715) > p_22.f0), 6)))) || g_445.f0)) , l_715)))) ^ 0UL)), l_717), 0x06ABCF9EL)) , l_715), g_63))), p_24)) <= l_715), 0x01B0L)))) , l_442.f1)) , p_24);

                                            }

                l_722 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_217, g_366)), (l_714 && p_22.f0)));
        l_735 |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(func_31(((safe_sub_func_uint32_t_u_u(func_31(l_590, (g_281 , func_26((l_731 = 0xDAL), func_31(g_13, p_23, p_22.f0, (l_715 && p_25), (l_491.f1 = 0x5FL)), g_609)), l_722, p_23.f0, l_590.f0), (-4L))) , l_732), g_445, p_23.f0, p_23.f0, g_733), l_590.f0)) <= g_445.f0) == g_506), l_734)), (-10L)));

                        l_744 &= ((~func_46(func_40(l_491.f1, ((safe_sub_func_int8_t_s_s(p_23.f0, g_265)) , (g_733 >= ((func_49(g_86, p_22.f0, (p_22.f0 || (((((-1L) == (l_731 = (l_735 = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_590.f0, 0x2EL)), 0UL)) ^ l_742)))) & (-2L)) & g_265) != g_366)), l_742, l_491.f1) , (-1L)) <= g_249))), g_743, p_22.f0, g_733), l_732)) > l_732.f0);
    }
    l_442.f1 = ((l_714 != (+l_745)) & (safe_mod_func_int16_t_s_s(l_491.f0, ((safe_add_func_int8_t_s_s((((0xF9F8L <= (1L >= (safe_lshift_func_int8_t_s_s(0x75L, 6)))) < (((+((g_634 , func_46(l_435, l_754)) <= g_86.f0)) > g_743) <= g_733)) <= g_281), l_755)) || p_22.f0))));

        l_442.f1 &= 0xF613E142L;
    return g_265;
}







static union U1 func_26(char p_27, short p_28, unsigned char p_29)
{
    unsigned l_412 = 0xA07C460DL;
    g_366 = ((((l_412 = ((g_281 <= ((safe_rshift_func_int8_t_s_s(p_29, (((g_217 & 0xEF7DL) == g_63) <= ((safe_mul_func_uint8_t_u_u(func_46((((((safe_sub_func_int8_t_s_s(p_29, g_249)) <= g_2) & (g_352 |= (0x455FC125L | g_67))) == g_64) ^ 0x462A4FBEL), g_13), 255UL)) && 0L)))) , 1UL)) <= 0x15A9L)) ^ g_86.f0) & p_27) ^ g_64);
    for (p_27 = 13; (p_27 > (-29)); p_27 = safe_sub_func_uint16_t_u_u(p_27, 8))
    {
        for (g_64 = (-15); (g_64 > 8); g_64 = safe_add_func_int16_t_s_s(g_64, 5))
        {
            unsigned l_417 = 0x49BF21CDL;
            if (g_64)
                break;
            g_86.f1 = g_63;

                        l_417 = func_46(g_64, g_86);
            if (g_2)
                continue;
        }
        g_13.f1 = ((safe_rshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((0xEC3AL >= (safe_add_func_uint16_t_u_u(0xEF26L, g_2))) || (safe_add_func_int32_t_s_s(l_412, p_27))), (safe_mod_func_int8_t_s_s((65535UL > (p_27 | g_268)), 0x81L)))), 1)) && g_157) || 65535UL), l_412)), 0xCABD7E2DL)) >= p_29) || g_292), 0)) | l_412);

            }
    return g_134;

    }







static unsigned char func_31(union U0 p_32, union U1 p_33, unsigned p_34, unsigned p_35, char p_36)
{
    char l_182 = (-8L);
    unsigned l_183 = 4294967289UL;
    unsigned l_194 = 0xAC05BC8AL;
    short l_219 = 0x9E10L;
    unsigned l_247 = 0x0FE09707L;
    int l_252 = 1L;
    int l_271 = 0x513ECE4BL;
    short l_347 = 0x9C20L;
    union U0 l_378 = {0xADL};
    int l_380 = 1L;
    unsigned char l_396 = 5UL;
    if (((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(1UL, ((0x81L || (safe_sub_func_int16_t_s_s((func_40((func_37((func_40(g_13.f0, p_34, (safe_rshift_func_uint8_t_u_s(func_46(g_63, ((((safe_add_func_int8_t_s_s(p_35, (safe_sub_func_uint8_t_u_u(l_182, (l_182 < (g_67 | 255UL)))))) && 0x553E7E88L) && 0xF31DCF84L) , g_86)), p_34)), p_34, g_64) <= g_13.f0), g_2) , g_157), p_32.f0, l_182, l_183, p_34) , 0x0440L), l_182))) ^ 0x26L))), l_183)) == g_2))
    {
        short l_190 = 0xCD52L;
        int l_192 = (-1L);
        unsigned l_193 = 0x280F0832L;
        int l_207 = 1L;
        union U0 l_230 = {0x87L};
        unsigned l_240 = 0x6FB5C466L;
lbl_293:
        for (p_34 = 0; (p_34 == 42); p_34 = safe_add_func_uint16_t_u_u(p_34, 7))
        {
            int l_188 = 0x13724E75L;
            union U0 l_189 = {0x98L};
            unsigned l_191 = 0x6FA74B5DL;
            union U0 l_232 = {0x9FL};
            if ((safe_mul_func_int16_t_s_s((func_46((g_2 > l_188), l_189) ^ (l_190 > l_190)), l_191)))
            {
                l_192 ^= (-1L);
            }
            else
            {
                return l_192;
            }
            p_32.f1 = l_193;

                        if (l_194)
            {
                char l_195 = 3L;
                union U0 l_215 = {0xE7L};
                p_32.f1 = (l_195 | l_193);
                g_86.f1 = 0x0DFEC3DBL;

                                for (p_35 = (-27); (p_35 > 57); ++p_35)
                {
                    short l_212 = 0xADB3L;
                    int l_216 = 0xCE499BA8L;
                    int l_218 = 0x50297C0CL;
                    int l_220 = 0x3E490638L;
                    g_198 = 0L;
                    g_221 ^= ((1UL < (safe_mul_func_int16_t_s_s((l_220 ^= (safe_mod_func_uint16_t_u_u(func_40((l_192 = (g_134.f1 = (safe_mul_func_int16_t_s_s(g_2, l_195)))), (safe_sub_func_uint8_t_u_u(0x01L, ((l_207 ^= (g_157 = g_198)) & (g_217 = (l_216 = (((func_46((l_191 >= (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_212 = g_63) <= (g_64 = ((((g_86.f0 ^= (((safe_mul_func_int8_t_s_s(func_46(p_33.f0, l_215), g_63)) , g_198) || p_35)) != g_63) , g_86) , l_182))), p_32.f0)), g_67))), p_32) | l_216) > p_32.f0) ^ 1UL)))))), l_218, g_2, l_219), g_198))), g_2))) || 0L);

                                    }

                            }
            else
            {
                union U0 l_231 = {0x87L};
                unsigned l_248 = 0x855E7E66L;
                p_32.f1 = g_63;
                if (l_219)
                    break;
                for (g_86.f0 = 0; (g_86.f0 >= 6); g_86.f0 = safe_add_func_int8_t_s_s(g_86.f0, 2))
                {
                    int l_235 = 0xF17199E9L;
                    l_231.f1 = (safe_rshift_func_int8_t_s_s(func_46(((((((0x221AL > func_46(g_86.f0, func_49(g_13, func_46((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(func_46((l_192 = (g_134 , func_46(g_86.f0, g_13))), (p_32 = (l_230 = p_32))), (-1L))), p_34)), l_231), g_64, g_157, l_183))) <= 0x76L) || l_231.f0) & (-1L)) >= g_198) , g_2), l_232), 5));

                                                            p_32.f1 ^= ((safe_lshift_func_int8_t_s_s(p_33.f0, 6)) || l_193);
                    p_32.f1 = ((l_232.f0 > (func_46(l_235, p_32) ^ 0x188FF261L)) > ((((((p_36 || p_35) && (g_198 == (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_240, 0xE7L)) < g_2), p_32.f0)))) >= p_32.f1) , 247UL) <= g_67) , 0x5E15L));
                }
                g_249 |= func_46(((((safe_mul_func_uint16_t_u_u(g_63, (((!(g_198 = func_46(g_221, func_37(l_231.f0, (p_32.f1 &= l_192))))) & (safe_sub_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_232.f0, (~l_189.f0))) | g_217) && l_247), l_207))) ^ p_35))) <= 0x0097F2B5L) , l_248) , l_192), l_231);
            }
        }
        if ((((safe_rshift_func_uint16_t_u_u((l_252 &= ((6L > l_247) <= func_46(g_198, g_13))), 11)) , p_34) & (+(p_36 || ((safe_rshift_func_uint16_t_u_s(func_46((l_192 | 0L), p_32), 10)) >= 0xFA93L)))))
        {
            short l_266 = 0x2FA0L;
            union U0 l_309 = {0xF0L};
            unsigned char l_312 = 0xFEL;
            int l_313 = 0x677A516FL;
            int l_314 = 0xE70040E6L;
            unsigned short l_319 = 3UL;
            for (g_86.f1 = 25; (g_86.f1 <= (-15)); g_86.f1--)
            {
                unsigned short l_261 = 0xFA00L;
                int l_264 = 1L;
                int l_267 = (-4L);
                union U0 l_278 = {255UL};
                g_268 |= ((l_267 = (g_221 != (l_266 = (safe_rshift_func_int16_t_s_s((((p_35 , g_249) >= ((l_264 = (((((safe_rshift_func_uint8_t_u_s(((l_261 = 8L) & ((g_265 &= (((g_134 , 0xD5A0L) != (safe_add_func_int8_t_s_s((l_264 , g_249), 0UL))) >= g_198)) & l_264)), 0)) <= 0UL) || g_217) || (-6L)) <= g_63)) != g_221)) ^ p_36), 1))))) ^ 4294967295UL);
                l_278.f1 = (((4294967293UL > (safe_add_func_uint32_t_u_u(func_46(l_271, g_13), (l_266 ^ ((l_264 = func_46((safe_sub_func_uint32_t_u_u(1UL, (safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(g_86.f1, (g_13.f0 == (0x156DC989L != 0xF20AB2C1L)))) <= 0x6CA204FFL), l_271)))), l_278)) , g_217))))) , p_36) | (-1L));

                                for (l_261 = 28; (l_261 == 40); ++l_261)
                {
                    int l_290 = 0xE6AA4E5BL;
                    g_281 = g_249;
                    for (l_252 = 1; (l_252 < 18); ++l_252)
                    {
                        g_292 = ((g_291 &= ((l_230 = p_32) , ((l_230 , ((safe_sub_func_int8_t_s_s(p_34, l_266)) == (safe_lshift_func_uint16_t_u_u((g_217 = ((g_221 & l_271) , (((p_33.f0 = ((safe_add_func_uint32_t_u_u((l_290 != (g_13.f0 ^ g_63)), l_193)) < 1L)) | l_290) , g_221))), 2)))) , p_34))) != p_35);
                        if (g_86.f1)
                            continue;
                        if (g_291)
                            goto lbl_293;
                    }
                    if (g_13.f0)
                        goto lbl_302;
                }
            }

                        g_86.f1 = ((safe_mod_func_uint32_t_u_u(g_249, p_34)) <= p_33.f0);
            if ((g_86.f1 &= p_36))
            {
lbl_302:
                for (g_291 = 0; (g_291 != 18); g_291 = safe_add_func_uint32_t_u_u(g_291, 7))
                {
                    g_86.f1 = (((safe_rshift_func_uint16_t_u_u(p_33.f0, 6)) , (-1L)) != (safe_mul_func_int8_t_s_s(g_265, l_266)));
                    g_86.f1 = g_64;
                }
                g_86.f1 &= (((safe_lshift_func_int8_t_s_s(0x6FL, 5)) || (((safe_lshift_func_int8_t_s_u((0UL & (safe_rshift_func_int16_t_s_u((func_46(l_194, l_309) , (safe_mul_func_int16_t_s_s(l_312, (l_314 &= l_313)))), ((safe_unary_minus_func_uint8_t_u((p_35 >= (safe_rshift_func_int8_t_s_u(p_36, g_318))))) && 0x2DECL)))), 0)) , 0L) && (-3L))) , l_194);
                l_319 &= (-1L);
            }
            else
            {
                unsigned l_322 = 0x6666EC8DL;
                l_252 &= ((p_33.f0 & (l_190 , (safe_mul_func_uint8_t_u_u(((l_314 < (l_207 = p_32.f0)) | ((l_309.f1 = p_36) != 2L)), ((g_318 != func_40((p_36 | g_86.f1), g_292, g_157, l_322, g_292)) ^ g_134.f0))))) , p_32.f0);

                                                p_32.f1 = ((func_40(g_281, g_291, p_33.f0, (l_309.f1 = (l_192 = 0UL)), (g_318 = (0x57L ^ p_32.f0))) , (l_207 |= ((g_86 , (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(g_318, l_192)) , g_292), 3))) <= 0x52L))) > g_265);

                            }

                        for (g_281 = 0; (g_281 >= 44); g_281 = safe_add_func_uint16_t_u_u(g_281, 2))
            {
                union U0 l_346 = {0xE0L};
                int l_357 = 0L;
                for (l_219 = 21; (l_219 > 3); l_219--)
                {
                    char l_333 = 0xB3L;
                    int l_353 = 7L;
                    int l_356 = 0x354F5FD8L;
                    for (l_182 = (-21); (l_182 != (-9)); l_182 = safe_add_func_uint16_t_u_u(l_182, 7))
                    {
                        g_86.f1 = l_333;

                                                g_352 &= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(g_134.f0, p_34)) != (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_86.f1 = (l_347 &= func_46((g_67 = g_2), (p_36 , l_346)))), g_134.f0)), (safe_mul_func_int8_t_s_s(((((((safe_mul_func_uint8_t_u_u(0UL, 0xFDL)) > g_134.f0) || p_34) > l_247) < 0L) | 0x44BCL), 1L)))) >= 0x2FL), 5))), 13)), p_32.f0));
                        l_353 = l_346.f0;
                    }
                    for (l_309.f0 = 0; (l_309.f0 < 52); ++l_309.f0)
                    {
                        l_357 &= (l_356 = g_198);
                    }
                }
                l_271 = (l_230.f1 = (g_291 | p_36));

                                l_192 = (safe_sub_func_int8_t_s_s((g_366 ^= (safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((((g_86.f1 = p_36) != (p_32.f1 = (g_2 , (((l_230.f1 != 0x36L) , (g_318 , (l_194 <= func_46(p_34, l_346)))) >= (-10L))))) >= 0xBAL) & 0xC9665395L), g_134.f0)), 5)) , g_157) != p_36), g_291))), 0x97L));

                                                g_86.f1 = ((l_252 = p_32.f1) && g_86.f0);
            }
        }
        else
        {
            int l_379 = 0x5573769EL;
            unsigned l_389 = 0x9401B699L;
            int l_390 = (-9L);
            l_380 = ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_2, (safe_mul_func_int16_t_s_s(l_240, ((p_32.f1 = (-1L)) != l_183))))), (safe_rshift_func_uint16_t_u_s((l_378 , 0x8245L), g_198)))))) < l_183), (l_379 |= (p_36 , p_34)))) | g_63);

                        for (l_192 = 12; (l_192 <= (-30)); l_192 = safe_sub_func_int16_t_s_s(l_192, 8))
            {
                unsigned l_391 = 0x7F2F1D17L;
                p_32.f1 = (!((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u(l_389, func_40(((~(l_390 = l_230.f0)) , 4294967290UL), ((l_391 != g_64) && 1UL), p_32.f0, (safe_lshift_func_uint8_t_u_s(((((l_252 = (func_46(((safe_lshift_func_int16_t_s_u(func_46((g_249 == 65535UL), l_378), p_36)) , p_32.f0), g_86) & p_33.f0)) <= p_34) != 0x67L) == 0xF3C9L), 2)), l_396))) < l_379) , p_34), 8)), g_292)) && g_291));
                l_252 ^= l_389;
                l_390 |= (safe_add_func_uint16_t_u_u(p_33.f0, 0x6597L));
            }
        }
        return g_249;
    }
    else
    {
        int l_399 = 0x6B6CE06DL;
        int l_404 = (-5L);
        int l_405 = 0xE3D77252L;
        l_399 = g_198;
        l_405 &= (((l_380 || (l_404 &= (l_399 , (((((safe_add_func_uint32_t_u_u((func_46((((((l_271 = 0x2E8BD18FL) , (p_34 , 0x0FL)) && ((g_198 = 0xEA184C44L) != (func_37(func_46((func_40((safe_rshift_func_int16_t_s_s((p_35 != (p_36 >= (~l_399))), g_265)), p_34, g_86.f0, p_35, p_36) < 0x25L), g_13), g_217) , l_399))) , g_318) , l_399), g_13) > g_318), 4294967291UL)) | 0x270AL) < g_217) && g_352) > l_399)))) , g_157) & g_352);
    }
    return l_194;
}







static union U0 func_37(int p_38, int p_39)
{
    char l_168 = (-1L);
    union U0 l_169 = {0x82L};
    p_39 = (safe_lshift_func_uint16_t_u_s((0xA0L < p_39), 5));
    for (g_86.f0 = 0; (g_86.f0 >= 38); g_86.f0 = safe_add_func_uint8_t_u_u(g_86.f0, 3))
    {
        char l_165 = 0xA4L;
        l_165 = (safe_add_func_int16_t_s_s((-9L), p_38));
    }
    p_39 = (safe_lshift_func_int8_t_s_s(l_168, 4));
    return l_169;

    }







static char func_40(unsigned p_41, unsigned char p_42, char p_43, unsigned short p_44, unsigned char p_45)
{
    unsigned l_70 = 0xDF47B588L;
    union U0 l_85 = {8UL};
    union U0 l_87 = {255UL};
    unsigned l_88 = 0x66538695L;
    int l_89 = 0xB0F05BA8L;
    short l_100 = 7L;
    unsigned l_117 = 0x9764F797L;
    g_67 = g_64;
    l_89 = (safe_sub_func_int16_t_s_s(func_46(l_70, (l_85 = func_49(func_49(func_49((l_87 = ((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((1UL >= (l_70 <= (safe_rshift_func_uint16_t_u_s((l_85.f1 = func_46((safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_43, (0x63L | (safe_mul_func_int8_t_s_s(func_46((p_43 == p_42), (g_86 = l_85)), l_70))))), p_45)) ^ 1UL) & g_64) || 1UL), (-1L))), l_85)), 11)))), p_45)) != l_70), l_70)) , l_85)), p_41, l_88, g_67, p_41), p_45, p_41, p_45, p_43), p_42, p_44, g_13.f0, p_43))), p_42));

        if ((g_2 ^ ((((func_49(l_87, func_46(p_43, (g_86 = g_86)), (func_46(func_46((safe_lshift_func_int8_t_s_u(((p_41 < (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((p_44 >= g_63), ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_87.f1 <= g_64) | g_64), g_13.f0)), 6)) & p_43) | 0x92L) && p_44))), 0))) , 0x41L), l_85.f0)), l_87), l_87) , p_41), g_13.f0, l_88) , g_67) > 0x0E62L) && l_100) <= g_2)))
    {
        char l_113 = 0x55L;
        union U0 l_116 = {255UL};
        l_85.f1 = (!(safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((p_45 <= (safe_add_func_uint32_t_u_u((l_89 = (l_116.f1 = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((((!(safe_rshift_func_uint8_t_u_u(l_113, (safe_mul_func_uint8_t_u_u((g_64 , 6UL), (l_116 , (func_46(l_117, l_116) != func_46(func_46(p_43, g_13), l_116)))))))) , p_43) && p_43), g_13.f0)), g_86.f0)))), l_113))), p_42)) != g_63) <= l_113), p_43)));

                    }
    else
    {
        int l_118 = 9L;
        int l_119 = 8L;
        int l_142 = 0x8FFA6F56L;
        union U0 l_149 = {0xBBL};
        l_119 &= (l_118 < g_63);
        for (p_45 = 0; (p_45 >= 20); p_45++)
        {
            unsigned short l_139 = 0x418BL;
            int l_140 = (-2L);
            union U0 l_141 = {1UL};
            unsigned l_158 = 0x2C631130L;
            if (g_63)
                break;
            for (g_64 = 28; (g_64 < 11); g_64 = safe_sub_func_int16_t_s_s(g_64, 7))
            {
                union U0 l_135 = {0xACL};
                int l_138 = 0x2FE7C9D8L;
                int l_150 = 8L;
                g_86.f1 = (safe_lshift_func_uint16_t_u_u((l_118 & ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_45, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(func_46(p_42, (g_134 , l_135)), (l_142 = (l_119 = (l_141.f1 = (func_46(((l_140 = func_46((safe_lshift_func_uint16_t_u_s((l_138 = 0UL), (g_67 = (l_139 = (((((func_46(g_13.f0, l_85) < 0L) , 0xB7L) != 0xB4L) ^ p_45) | g_2))))), g_86)) || l_89), l_141) >= g_63)))))), 2)))) || (-1L)), p_45)) , g_67)), l_117));

                                                if (p_45)
                    break;
                g_157 ^= ((((((0xC2796081L ^ (l_138 &= (g_86.f1 = (safe_lshift_func_int8_t_s_s((l_87.f0 , (((safe_rshift_func_int16_t_s_s(((((p_43 = (safe_rshift_func_int16_t_s_s(((l_135 , l_149) , l_150), 2))) , (l_89 = (p_44 & ((-7L) <= (safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((~(safe_add_func_int16_t_s_s(((g_134.f0 ^ l_135.f0) == 0x7E3690D5L), g_2))), p_45)) < 0xAF42L) & p_43), g_67)))))) , g_86.f0) , g_13.f0), 7)) == 6UL) == p_42)), g_134.f0))))) , 5L) & p_44) <= l_87.f1) ^ l_150) && g_63);
            }
            l_158 = (l_140 &= 0x15D644C5L);
        }
    }
    return p_42;
}







static unsigned char func_46(short p_47, union U0 p_48)
{
    unsigned char l_65 = 255UL;
    int l_66 = 0xC6E20B39L;
    p_48.f1 = (3UL && (g_64 < (l_66 = l_65)));

        return g_63;
}







static union U0 func_49(union U0 p_50, unsigned p_51, char p_52, char p_53, unsigned p_54)
{
    g_64 = ((-1L) < (g_13.f0 <= (g_63 = p_53)));
    return g_13;

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_808.f0, "g_808.f0", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_869.f0, "g_869.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
