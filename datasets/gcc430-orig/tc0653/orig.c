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


struct S0 {
   unsigned f0;
   unsigned f1;
   short f2;
   unsigned short f3;
   unsigned char f4;
};


static unsigned g_28 = 4294967287UL;
static struct S0 g_30 = {0xF21C9B6CL,4294967290UL,-2L,0x1AA2L,0x10L};
static struct S0 g_85 = {0UL,0x4CC78B93L,-1L,6UL,255UL};
static short g_91 = 1L;
static unsigned short g_117 = 0xD2F6L;
static char g_129 = 0xF8L;
static short g_133 = 7L;
static unsigned short g_134 = 65533UL;
static int g_146 = 0xEA337768L;
static unsigned g_162 = 0xE212201DL;
static unsigned char g_213 = 1UL;
static char g_215 = (-3L);
static const char g_270 = 0xF3L;
static unsigned short g_282 = 65535UL;
static char g_307 = 5L;
static unsigned g_353 = 0xCA541B02L;
static unsigned g_354 = 0xA1FEE238L;
static unsigned char g_358 = 0x49L;
static unsigned short g_432 = 0x3609L;
static int g_443 = 0x42FC1B85L;
static unsigned g_513 = 0x476E6703L;
static char g_527 = 0x6AL;
static unsigned char g_549 = 0x77L;
static unsigned g_586 = 0xB507B07FL;
static short g_631 = (-7L);
static char g_789 = 1L;
static struct S0 g_790 = {4294967291UL,0UL,-3L,0xB005L,1UL};
static char g_869 = 1L;
static unsigned g_904 = 4294967295UL;
static const short g_922 = 8L;
static unsigned g_1076 = 0UL;
static short g_1083 = 0xCAF0L;
static int g_1186 = 0xCD19F5D2L;
static int g_1193 = 0xE21A7B8DL;
static short g_1228 = 0xB6EBL;
static unsigned g_1251 = 3UL;
static unsigned g_1268 = 9UL;



static unsigned func_1(void);
static struct S0 func_5(struct S0 p_6, unsigned p_7, char p_8, unsigned p_9);
static struct S0 func_10(unsigned p_11, unsigned p_12, const unsigned p_13, unsigned p_14);
static int func_18(char p_19, unsigned p_20, unsigned char p_21, const char p_22, int p_23);
static char func_24(unsigned p_25, unsigned p_26, char p_27);
static short func_46(short p_47, unsigned char p_48);
static int func_51(int p_52, int p_53, struct S0 p_54, short p_55, int p_56);
static char func_59(int p_60, int p_61, unsigned p_62, const unsigned p_63, const int p_64);
static int func_65(unsigned short p_66, const char p_67);
static unsigned short func_70(unsigned p_71, short p_72, unsigned p_73);
static unsigned func_1(void)
{
    char l_2 = (-1L);
    int l_795 = 0x658B4231L;
    int l_796 = (-7L);
    const struct S0 l_817 = {0xA40CBF07L,0x878D56F8L,1L,65535UL,0xF2L};
    unsigned l_861 = 4294967288UL;
    unsigned char l_873 = 8UL;
    struct S0 l_890 = {5UL,4294967294UL,0xDCFAL,0xE0E6L,253UL};
    unsigned char l_942 = 0x5FL;
    unsigned short l_973 = 65535UL;
    unsigned l_1019 = 0x87452F2DL;
    const int l_1020 = 0x83356068L;
    char l_1043 = 0xB3L;
    const unsigned short l_1063 = 65533UL;
    unsigned short l_1082 = 65533UL;
    unsigned l_1102 = 0x020113B3L;
    int l_1108 = 0L;
    int l_1126 = 0x7FCEDB48L;
    short l_1127 = 1L;
    unsigned short l_1135 = 0UL;
    unsigned l_1145 = 0x41F59B82L;
    unsigned short l_1171 = 0xB234L;
    if (l_2)
    {
        const char l_17 = 4L;
        for (l_2 = 0; (l_2 < 14); l_2 = safe_add_func_int8_t_s_s(l_2, 1))
        {
            unsigned short l_482 = 0x94C2L;
            int l_815 = 0x1470ED73L;
            g_790 = func_5(func_10((l_17 != (func_18(func_24(g_28, g_28, (g_28 >= g_28)), (func_65(l_17, g_270) | l_17), g_432, g_28, l_2) >= 0x62878F1AL)), l_482, l_17, g_432), l_17, l_482, l_17);
            g_146 = ((safe_add_func_int16_t_s_s(((l_795 = (safe_rshift_func_uint8_t_u_s(g_790.f0, 4))) >= (g_85.f0 <= (l_796 = l_17))), (((g_30.f1 = (safe_rshift_func_int8_t_s_s((+0x8DL), g_134))) & g_134) & (g_85.f4 == (safe_sub_func_int32_t_s_s(func_65(g_162, g_85.f4), l_2)))))) == 0UL);
            for (g_85.f0 = (-17); (g_85.f0 != 53); g_85.f0++)
            {
                unsigned char l_805 = 255UL;
                int l_814 = (-6L);
                g_790 = g_85;
                g_146 = ((g_133 = ((-8L) | (func_70(g_30.f2, l_805, (safe_mul_func_uint32_t_u_u(1UL, (func_51(((g_213 != (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_353, (l_795 | (g_270 < (safe_lshift_func_uint16_t_u_s((l_814 = func_65(l_482, l_482)), 8)))))), g_85.f0))) < l_805), g_30.f1, g_85, g_215, l_482) >= g_85.f1)))) > g_443))) || 0xB0B8L);
                g_790 = g_790;
            }
            l_815 = 0x89E94E9EL;
        }
    }
    else
    {
        const unsigned l_816 = 0xFA27A167L;
        int l_820 = 0xD9E63374L;
        struct S0 l_860 = {0x95E72F4EL,0x941AFB5BL,1L,0x6D44L,247UL};
        unsigned short l_972 = 0x2CA8L;
        if ((!l_816))
        {
            char l_833 = 0xC7L;
            int l_834 = 0L;
            g_85 = l_817;
            l_834 = (safe_sub_func_int8_t_s_s((0x817C1CCDL <= ((l_820 = (l_817.f1 != 0x674FL)) | 0x78B08B27L)), func_59(((safe_lshift_func_uint16_t_u_u((((g_146 = (l_817.f1 == (g_85.f0 ^ (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((func_51(l_833, (l_816 != (l_817.f1 ^ l_816)), g_790, g_146, g_129) && l_2), 0x18504DFEL)) != (-9L)), g_162)), 15)), l_833)), l_816))))) > l_833) <= g_790.f0), g_30.f0)) <= l_833), l_833, l_817.f4, l_817.f1, g_85.f1)));
        }
        else
        {
            int l_859 = (-1L);
            int l_872 = 1L;
            unsigned l_939 = 0x5834090EL;
            struct S0 l_945 = {4294967295UL,1UL,0L,7UL,250UL};
            short l_964 = 0x7845L;
            for (l_796 = 0; (l_796 == 25); l_796++)
            {
                int l_862 = 0L;
                int l_863 = 0x8DFB0E68L;
                for (g_527 = (-19); (g_527 != 27); ++g_527)
                {
                    int l_839 = (-1L);
                    g_85 = g_85;
                    l_839 = g_631;
                    g_146 = (safe_sub_func_int16_t_s_s(g_85.f0, g_133));
                    if (l_820)
                        break;
                }
                l_795 = (g_30.f1 == ((((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(func_46((func_70((g_354 = (+(0L & (g_85.f1 = ((g_432 > (safe_add_func_int16_t_s_s(0x5D0CL, ((safe_add_func_uint16_t_u_u(func_51((func_65((g_91 && (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_859 >= 0x9164L) <= func_70(g_85.f1, (l_820 || l_817.f3), l_796)), g_85.f0)), 0xD011L)), 6))), g_133) == l_795), g_432, l_860, l_861, l_862), g_354)) != 0xCA87L)))) == l_863))))), g_527, g_307) != g_513), g_358))), l_863)), g_129)) & l_796), g_134)) < l_817.f4) | 0xFE6B94A3L) | l_859));
            }
            g_146 = l_860.f0;
            for (g_213 = 0; (g_213 <= 8); g_213 = safe_add_func_uint32_t_u_u(g_213, 1))
            {
                if (g_586)
                    break;
                if (g_146)
                    break;
            }
            if (l_859)
            {
                unsigned short l_866 = 0xF57FL;
                l_820 = (func_24(g_586, l_859, l_866) != ((((((65527UL >= ((l_859 || (g_869 || (((((l_872 = ((safe_lshift_func_uint16_t_u_u(g_432, g_790.f1)) <= 0xF3652517L)) < g_270) & 0xBD160EF4L) ^ 8L) < 0x7630L))) >= g_527)) <= l_2) && g_790.f2) > g_790.f0) <= 9L) >= 0x36C8L));
                g_146 = g_549;
                g_146 = 1L;
                l_873 = 1L;
            }
            else
            {
                short l_891 = 0x3687L;
                int l_894 = 1L;
                int l_897 = (-3L);
                short l_965 = 8L;
                if ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_24(l_872, ((((+((l_820 = func_46(g_358, (safe_sub_func_uint32_t_u_u((((g_129 = (g_215 = g_789)) | (l_860.f3 <= (g_117 || 0xB6771473L))) > ((0L || (((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_860.f4, ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((g_527 = (func_51(g_146, l_816, l_890, l_890.f2, l_891) < l_861)), l_891)) && l_817.f3), g_790.f4)) ^ l_859))), 3UL)) & g_133) || l_860.f4) >= 0x4AFD6E16L) <= l_890.f0)) ^ 249UL)), 4294967295UL)))) == l_860.f1)) || g_358) <= l_872) ^ l_872), l_890.f2), l_860.f1)), l_860.f0)), l_860.f2)))
                {
                    unsigned l_892 = 0xC680CBDFL;
                    int l_893 = (-5L);
                    unsigned short l_903 = 0x9315L;
                    if (((((l_892 & (l_894 = (l_893 = l_859))) >= (l_891 ^ ((((safe_mod_func_uint8_t_u_u(((-3L) <= (l_897 = g_146)), ((safe_add_func_uint8_t_u_u((g_213 = (g_30.f0 >= (((g_527 = 0L) < (((0x02A6633CL != (l_891 < 246UL)) < 1UL) ^ g_358)) != l_872))), l_872)) & g_354))) || g_513) && l_859) <= l_872))) < 0x1C9018AAL) || l_872))
                    {
                        l_795 = (safe_mod_func_uint16_t_u_u(g_790.f0, 7L));
                        g_790 = l_860;
                    }
                    else
                    {
                        g_904 = func_59(g_85.f2, g_358, func_65(l_890.f4, (safe_unary_minus_func_uint16_t_u(l_872))), (g_513 <= (l_795 = l_894)), func_65(g_790.f3, (l_903 > 4294967293UL)));
                        l_795 = g_30.f3;
                    }
                }
                else
                {
                    char l_907 = 0xF3L;
                    int l_940 = (-3L);
                    int l_941 = (-7L);
                    struct S0 l_944 = {8UL,0x0FEC3259L,-1L,0x8769L,0x08L};
                    if ((l_907 = ((safe_sub_func_uint16_t_u_u(0x663AL, l_890.f4)) > 2UL)))
                    {
                        unsigned l_910 = 5UL;
                        short l_920 = 0xB65CL;
                        int l_921 = 0x698E2A12L;
                        l_820 = ((((safe_rshift_func_uint16_t_u_s(l_910, ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((-2L))), l_894)) >= (0x5B80F091L & ((~(g_146 < (safe_mod_func_uint16_t_u_u(l_817.f3, g_162)))) ^ (safe_lshift_func_uint16_t_u_s(func_65(((func_70(l_907, func_51(g_85.f0, g_282, g_30, g_549, l_920), l_907) || l_897) == 0xEEL), l_894), 15))))), 0xDE42L)) >= 0x41ABE551L))) & 0UL) || l_820) | l_860.f2);
                        l_921 = l_859;
                        g_146 = (-1L);
                    }
                    else
                    {
                        short l_943 = 0L;
                        l_944 = func_10((g_790.f0 = (func_65(g_30.f2, g_922) >= (safe_add_func_uint16_t_u_u((l_943 = func_51((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_907, ((g_146 > ((((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_897, 1)), (l_941 = (l_940 = (safe_sub_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_s(g_282, l_860.f4)) ^ (func_70((safe_sub_func_int32_t_s_s((l_795 = ((+0x171E448AL) >= 0x6EC20845L)), l_872)), g_869, g_91) && g_282)) & 0xB4L) <= l_907) > l_939), 0x4560L)))))) & 1L) | 0x5AL) == l_907) | l_939) <= g_129)) || l_940))), 0x68F0L)), l_942, g_790, g_91, g_869)), g_922)))), g_85.f3, l_907, g_134);
                        l_890 = func_5(l_945, (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_432 = (safe_sub_func_uint16_t_u_u((func_46(l_943, (safe_sub_func_uint8_t_u_u(g_527, (safe_unary_minus_func_int16_t_s(((l_894 ^ (safe_lshift_func_uint16_t_u_u((g_30.f3 = (((g_307 >= (l_897 = ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(func_59(l_943, func_46(l_860.f1, ((safe_lshift_func_int16_t_s_s(g_549, 14)) < (l_860.f1 >= g_215))), g_513, l_943, l_796))), l_964)) == 4294967292UL))) | 0L) < 1L)), l_943))) & 0x81L)))))) | 0x52AEL), 65535UL))), l_860.f1)), g_353)), l_820)), g_30.f0, g_631);
                    }
                    return l_965;
                }
            }
        }
        l_860 = l_860;
        for (g_432 = (-25); (g_432 >= 46); g_432 = safe_add_func_uint8_t_u_u(g_432, 1))
        {
            struct S0 l_970 = {4UL,0x8F6342B3L,0x2C7AL,0xEED6L,0x48L};
            unsigned char l_971 = 0x96L;
            for (g_790.f3 = 0; (g_790.f3 >= 47); g_790.f3 = safe_add_func_int32_t_s_s(g_790.f3, 5))
            {
                l_820 = (g_28 == (g_129 < (-7L)));
            }
            g_790 = func_5(l_970, g_282, l_971, g_30.f0);
            if (l_972)
                break;
        }
        l_820 = g_432;
    }
    if ((((func_18(l_973, l_973, g_790.f3, (g_213 ^ func_65(func_46(g_904, g_85.f0), ((safe_lshift_func_uint16_t_u_u((l_795 = l_795), 14)) && g_30.f2))), g_922) < g_790.f2) < 1UL) == l_890.f4))
    {
        int l_984 = 0x13712C2FL;
        int l_985 = 0x247CA3AFL;
        struct S0 l_1000 = {0xCB8DA1B3L,4294967295UL,5L,0x42E3L,0x2EL};
        int l_1001 = 2L;
        for (g_85.f0 = 21; (g_85.f0 <= 30); g_85.f0 = safe_add_func_uint32_t_u_u(g_85.f0, 1))
        {
            char l_982 = 0x4CL;
            int l_983 = 2L;
            if ((g_549 != (safe_mod_func_int8_t_s_s((func_65((((((safe_rshift_func_int16_t_s_u((l_984 = ((l_795 = (l_982 & (l_983 = func_51((l_982 && func_70((l_982 > 0xF8E4BEF7L), g_527, g_129)), g_134, g_85, g_631, g_30.f0)))) == g_85.f1)), l_985)) < g_213) & l_982) != g_30.f4) || g_30.f2), g_353) ^ g_30.f1), g_117))))
            {
                unsigned short l_988 = 0x22ECL;
                g_790 = g_85;
                if (g_922)
                    break;
                g_146 = func_70(l_982, (l_795 = (safe_mod_func_int16_t_s_s(g_358, l_983))), (l_988 = l_942));
                g_146 = (safe_add_func_int16_t_s_s(g_85.f4, (safe_lshift_func_uint16_t_u_s((g_134 = (l_988 != (+(l_985 = l_982)))), 15))));
            }
            else
            {
                unsigned l_999 = 0x4EC9AB18L;
                for (l_942 = 4; (l_942 >= 33); l_942++)
                {
                    return g_30.f1;
                }
                l_983 = 0xDFCA7196L;
                g_146 = (l_983 || ((g_904 > g_586) == (safe_lshift_func_uint16_t_u_s(((g_443 && g_85.f2) && (safe_sub_func_uint8_t_u_u((g_146 < g_789), (g_85.f0 && ((l_999 = g_30.f3) && g_270))))), g_307))));
            }
            g_790 = l_1000;
        }
        l_1001 = ((l_985 = l_873) && (l_795 = g_133));
    }
    else
    {
        short l_1004 = (-1L);
        int l_1022 = 6L;
        unsigned l_1023 = 0xB5B47C5FL;
        struct S0 l_1068 = {1UL,0xD635EE75L,0x78BAL,0x9D65L,0x0CL};
        int l_1086 = 0xEFD84295L;
        unsigned char l_1095 = 1UL;
        unsigned l_1107 = 0xB4DAC16EL;
        short l_1109 = 0x1548L;
        short l_1125 = 0x7F7DL;
        for (g_282 = 0; (g_282 < 54); g_282 = safe_add_func_int8_t_s_s(g_282, 3))
        {
            unsigned short l_1005 = 65529UL;
            int l_1021 = 0x394BBD1EL;
            int l_1046 = 0xECEABAA9L;
            unsigned l_1073 = 0x4A031AE0L;
            if (func_65((l_1004 & g_213), (g_129 = 1L)))
            {
                return g_85.f1;
            }
            else
            {
                short l_1006 = 0x422FL;
                int l_1009 = 0xE3698802L;
                char l_1012 = 0x50L;
                if ((g_146 = l_2))
                {
                    g_146 = func_65(l_1005, (g_213 && 65526UL));
                }
                else
                {
                    if (g_790.f3)
                        break;
                    l_1006 = g_631;
                }
                l_1012 = (((0xAFL != l_817.f3) && (l_1009 = (safe_lshift_func_uint16_t_u_s((g_432 = 0x487EL), (l_1005 == g_282))))) ^ (safe_lshift_func_uint16_t_u_s(l_1006, (g_91 = l_1004))));
                l_1022 = (+((safe_mod_func_int8_t_s_s(0xF7L, (l_1009 = func_59(g_162, l_1012, l_1004, (l_1021 = ((safe_mod_func_int32_t_s_s(7L, (safe_add_func_int32_t_s_s(l_1005, (l_2 <= (g_358 = (((g_307 = (g_133 != ((func_70((((l_942 ^ l_1012) | l_817.f1) == 1UL), g_790.f0, g_117) & 0x5DE3L) > l_1019))) | l_1020) | l_1009))))))) && l_1020)), g_432)))) | (-1L)));
                g_30 = l_890;
            }
            if (((g_30.f3 = g_85.f0) || l_1023))
            {
                int l_1024 = 0x3FCBED20L;
                unsigned char l_1087 = 0x05L;
                if (((g_354 = 2UL) >= (l_1024 = 0x5BCBB1FDL)))
                {
                    int l_1027 = 0xA15BC73BL;
                    int l_1042 = 0x0404CBAFL;
                    unsigned char l_1051 = 0xB3L;
                    l_1043 = (g_527 == func_18((g_215 = (g_432 <= g_790.f1)), (safe_mod_func_uint32_t_u_u(l_1027, l_1027)), l_1027, (g_789 = (l_1023 != ((g_904 <= (safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((g_30.f4 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(8UL, g_133)) | (-6L)), l_1042)), 7))) | 5UL), l_796)) < 0x7B3C3E27L) | 0UL), l_1024)) < 0x60L), g_85.f0))) <= 9UL))), g_869));
                    for (l_890.f3 = 0; (l_890.f3 <= 3); l_890.f3 = safe_add_func_uint8_t_u_u(l_890.f3, 9))
                    {
                        int l_1056 = 0x56BD73A1L;
                        l_1046 = g_443;
                        g_790 = (g_30 = g_790);
                        l_795 = ((safe_mod_func_uint32_t_u_u(g_85.f3, func_70(l_817.f2, (g_85.f2 = g_30.f2), ((((((((safe_lshift_func_int8_t_s_u((g_869 = l_1051), (3L ^ (func_65(func_65((((4294967290UL > (l_1021 = func_65(((safe_mod_func_uint8_t_u_u(l_1021, (safe_sub_func_uint16_t_u_u(l_1021, g_527)))) ^ g_270), g_85.f1))) <= l_1022) | 0xF12EL), g_213), g_85.f3) ^ g_30.f1)))) < 0x2EL) < 0x6483L) > g_549) ^ g_85.f1) && l_1024) ^ l_1024) < g_215)))) < l_1056);
                    }
                }
                else
                {
                    unsigned l_1074 = 0xDBF92A84L;
                    l_890 = g_85;
                    if (((safe_sub_func_int8_t_s_s(l_1005, (g_129 = (safe_add_func_uint16_t_u_u(((g_790.f2 == (+g_631)) != g_513), g_354))))) ^ ((safe_add_func_int8_t_s_s((+l_1063), func_46(((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((+l_1024), 5)) > ((((g_30.f2 = (g_133 = g_358)) > (g_904 < g_358)) == 0xD2L) >= 0L)) && g_527), 4294967291UL)) < g_30.f4), l_890.f3))) >= (-1L))))
                    {
                        unsigned l_1071 = 8UL;
                        int l_1072 = 0x1AD7EFEDL;
                        struct S0 l_1075 = {1UL,0x936D5307L,0xE83DL,0x0CD2L,0xD2L};
                        l_1022 = (-1L);
                        g_85 = g_85;
                        g_146 = (g_270 != func_51(g_162, (l_795 = l_1004), l_1068, l_1023, ((safe_add_func_uint8_t_u_u((l_1071 = g_922), l_1072)) & (l_1074 = (l_1073 && 1L)))));
                        l_1075 = g_30;
                    }
                    else
                    {
                        unsigned l_1077 = 0UL;
                        g_146 = g_1076;
                        return l_1077;
                    }
                }
                for (l_1046 = (-28); (l_1046 == 26); l_1046 = safe_add_func_uint16_t_u_u(l_1046, 8))
                {
                    for (g_146 = 0; (g_146 != 29); g_146 = safe_add_func_int8_t_s_s(g_146, 6))
                    {
                        g_1083 = ((l_1082 = g_631) & 0x497DB1D7L);
                    }
                    if ((4294967295UL > (g_353 = ((safe_mod_func_int16_t_s_s(func_18(g_30.f4, (l_1087 = ((g_789 = l_1086) < g_270)), (l_1021 = g_358), g_117, func_65(l_1043, (func_70(l_796, (l_795 = (l_1086 != l_1068.f1)), l_1046) | g_30.f4))), l_1046)) > 1L))))
                    {
                        g_790 = g_30;
                    }
                    else
                    {
                        g_146 = g_869;
                    }
                }
                if (g_790.f4)
                    continue;
                if ((safe_lshift_func_int8_t_s_s(0xADL, (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(g_790.f3)), (0xEEEDF68DL <= l_1005))), (g_549 = (l_1095 = ((g_134 = l_1043) || g_904))))))))
                {
                    g_85 = g_30;
                    return g_443;
                }
                else
                {
                    l_795 = g_790.f0;
                }
            }
            else
            {
                unsigned short l_1096 = 65526UL;
                int l_1097 = 0x8CC2E26FL;
                l_1086 = 0xCB7C42C0L;
                l_1097 = func_70(g_91, l_1073, (l_1096 = (~(l_1043 && 0xB17D3F9DL))));
            }
            g_146 = g_904;
            g_146 = 0x3A50557AL;
        }
        l_1022 = (safe_sub_func_int32_t_s_s(func_65(g_904, (g_789 < (g_30.f0 ^ ((((safe_mod_func_int32_t_s_s(l_1102, (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0L, (l_795 = l_890.f4))), g_353)))) > (l_1108 = func_18((g_527 = (((g_282 & (func_18(((((func_65(l_796, g_85.f2) < g_432) < g_631) >= l_1107) && 0xA4F0E7D8L), l_1004, g_790.f4, g_215, g_213) == g_432)) & g_513) & 1UL)), l_1107, g_1083, g_443, g_354))) <= l_1019) <= l_1082)))), l_1109));
        l_1126 = ((safe_sub_func_int32_t_s_s(g_30.f1, g_117)) <= ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((g_213 & l_1004), 2)) || ((l_795 = ((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(((l_1108 = (l_1022 = func_65((g_790.f3 = ((~(l_817.f1 && (l_890.f3 != (safe_add_func_int16_t_s_s(g_353, (safe_rshift_func_uint8_t_u_u((func_70((g_904 = (safe_mod_func_int32_t_s_s((g_790.f2 < l_861), g_146))), g_85.f3, g_30.f2) > 0x4179L), 1))))))) != l_873)), g_443))) >= g_129), l_890.f2)))) ^ l_1004)) > l_1125)), g_30.f1)) ^ g_790.f2));
    }
    l_1127 = 0x6C17FEC2L;
    for (g_789 = (-1); (g_789 >= 2); ++g_789)
    {
        short l_1132 = 0x3A8DL;
        int l_1170 = 1L;
        unsigned l_1202 = 0xF1911806L;
        int l_1207 = 0x92D07B58L;
        struct S0 l_1245 = {0x7E0A3597L,0x5C1ABD89L,0xAD3CL,0xEE6FL,0x37L};
        char l_1287 = (-7L);
        unsigned l_1289 = 0x46F23D4AL;
        unsigned l_1290 = 0x01963A40L;
        if ((safe_sub_func_int8_t_s_s(g_353, g_30.f0)))
        {
            short l_1138 = 0xAA5DL;
            int l_1139 = 0xA4897F4DL;
            l_1132 = 0x9CA8446BL;
            for (g_215 = 0; (g_215 < (-14)); --g_215)
            {
                struct S0 l_1140 = {0UL,0xB5A44870L,5L,65535UL,0x66L};
                unsigned l_1147 = 4294967295UL;
                int l_1153 = (-6L);
                int l_1158 = 1L;
                struct S0 l_1187 = {0x4B97321BL,0x5EDD5399L,0xF4F3L,0x2CDBL,0UL};
                if ((((func_70(((l_1139 = (func_65(l_1135, l_796) == (((((0x1A72L < ((l_1138 = func_18(l_890.f2, func_46(g_358, g_443), ((safe_sub_func_int32_t_s_s(1L, 0xC141A43FL)) ^ g_790.f3), g_790.f1, g_922)) & 254UL)) || (-1L)) & g_30.f0) | 246UL) > 0x3DL))) > g_549), g_213, l_1132) <= 65534UL) | g_790.f3) <= 0x95947839L))
                {
                    char l_1146 = 0x5FL;
                    struct S0 l_1159 = {2UL,0UL,0xFDFAL,65535UL,0UL};
                    l_1140 = g_85;
                    l_1139 = ((g_358 = (((safe_rshift_func_int16_t_s_u(l_1132, 8)) >= (g_307 >= (func_46(((!((l_1126 = (0x6D6FL >= func_65(g_213, (func_51((safe_rshift_func_int8_t_s_u(l_1145, (g_586 >= (g_527 = l_973)))), l_1146, g_30, g_354, g_869) | g_1076)))) <= g_85.f0)) | g_30.f2), l_1140.f2) ^ 0xDE223A96L))) ^ l_1147)) & 0x0DL);
                    g_146 = (l_1138 <= (g_527 = (safe_unary_minus_func_int16_t_s((l_1146 < (g_134 ^ (((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(func_51((l_1153 = (l_1147 && g_631)), ((g_353 && (safe_mod_func_uint32_t_u_u(func_65(func_65(((safe_rshift_func_int8_t_s_s((func_51(l_1043, (l_1158 = l_1145), (l_1140 = l_1159), l_1132, g_922) & l_1159.f4), l_1138)) >= l_1138), l_1132), l_1147), (-7L)))) != 65530UL), g_85, g_85.f1, g_354), l_1139)) == 2UL) >= l_1159.f3), g_354)) | l_1159.f3) || l_1138)))))));
                }
                else
                {
                    l_1126 = (g_215 < l_1140.f3);
                }
                if ((g_443 & func_18(g_85.f3, (safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_1132, g_790.f3)) || 0L), (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((l_1170 = g_85.f3) || (~((g_549 < l_1170) & g_790.f3))), (-6L))), l_1171)) != 4294967295UL), g_307)))), g_91, l_1171, g_117)))
                {
                    g_1186 = (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_282, l_1132)), ((!(((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_1139, 12)), (l_1158 = 0x6CL))) || (safe_rshift_func_uint16_t_u_s(l_1139, 10))) > ((safe_add_func_int8_t_s_s((4294967295UL ^ (-1L)), l_1132)) > (safe_rshift_func_uint16_t_u_s(func_46(g_28, l_1082), g_28))))) & g_354)));
                }
                else
                {
                    struct S0 l_1188 = {0x81CD055AL,0UL,-1L,0x0F77L,255UL};
                    l_1188 = l_1187;
                }
                g_1193 = (safe_rshift_func_int16_t_s_s((g_91 = ((l_1153 = func_18(l_942, (0x2AL > (l_1139 = (0x2C8BD5A4L == (func_18((safe_sub_func_int8_t_s_s(((func_46(l_1132, (g_922 >= (g_146 = ((0x58L < l_1145) > 0x839FL)))) == l_890.f2) < g_282), l_1187.f0)), l_1063, g_869, l_1138, l_890.f4) < 1UL)))), l_1187.f2, g_904, g_790.f1)) > l_1158)), l_1170));
            }
            l_1207 = (safe_lshift_func_int8_t_s_s(((l_1170 = (0xB6CC8B77L > (g_354 = (safe_sub_func_int8_t_s_s(g_91, (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_1139 = (+(+0x9EL))), 5)), 3)) && (((((l_795 = g_117) || (!(0x85E99F61L >= func_18(g_1193, l_1170, l_1202, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((g_443 != 0xF7L) || 4294967292UL), 0)), l_1171)), g_213)))) <= g_134) > 0x4EL) || l_1138)) <= 3L)))))) && 0x6210L), 2));
            if (l_1082)
                break;
        }
        else
        {
            short l_1210 = 0x229CL;
            int l_1227 = 0x1630ABE2L;
            char l_1244 = (-1L);
            unsigned l_1254 = 1UL;
            int l_1257 = 0x8FB0D0C1L;
            if ((((((g_146 = 6L) != (safe_mod_func_int32_t_s_s(l_1210, (l_817.f1 || (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_70(g_869, (safe_mod_func_uint16_t_u_u(((g_213 = ((((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((1UL & ((g_85.f1 == (safe_lshift_func_int16_t_s_u(((g_1228 = (((g_513 >= (((l_1227 = (safe_lshift_func_int8_t_s_u(g_354, (l_1126 = (g_85.f4 = (l_1207 = (g_790.f4 = ((safe_add_func_uint8_t_u_u((0xFC07571FL == g_307), l_817.f4)) == g_85.f3)))))))) & l_817.f0) <= g_134)) <= l_1210) > g_270)) != 0x634DB62FL), l_1210))) < 2L)), l_1170)), 0x420EL)) ^ 0x7674D1D3L) <= g_307) & 0x3EBF6B3FL)) == l_1210), l_817.f3)), g_134), l_1210)), l_973)))))) | g_134) != g_790.f1) < l_1170))
            {
                short l_1229 = 0L;
                int l_1242 = 1L;
                char l_1243 = (-1L);
                l_1245 = func_10((l_1207 = ((((l_1229 = (g_527 = (g_922 | (l_1210 > (+g_869))))) | (((safe_rshift_func_int8_t_s_u((((((safe_lshift_func_int16_t_s_s(((l_1242 = func_65((65535UL >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(2UL, func_65((g_432 = (safe_sub_func_int16_t_s_s((g_631 = g_432), 0xB018L))), l_1227))), l_1227)), g_1228))), g_30.f1)) && l_890.f3), l_1243)) && l_1145) != l_973) <= 4294967295UL) < 0xDDL), 1)) != l_1207) == g_85.f1)) && l_1210) > g_30.f0)), g_282, l_1063, l_1244);
            }
            else
            {
                short l_1248 = 0x239CL;
                g_85 = g_85;
                g_1251 = (l_1207 = (func_46(g_30.f4, (((((~l_1248) > ((l_1108 = g_162) ^ ((safe_mod_func_int16_t_s_s(6L, g_134)) && (l_1227 < (-7L))))) < (func_70(g_91, (l_1210 | l_1245.f2), l_1248) <= 4UL)) <= g_133) >= 0xE7L)) && 0x59L));
            }
            l_1170 = func_59(((safe_mod_func_int32_t_s_s((((g_85.f4 = l_1254) && (func_70((g_1251 = (l_1245.f1 > (safe_sub_func_int8_t_s_s((g_215 = l_1257), (((safe_add_func_uint32_t_u_u(g_789, 0x3E6D2BC5L)) && (safe_rshift_func_uint8_t_u_s(0xC2L, (safe_sub_func_int32_t_s_s(((g_586 ^ l_1227) >= (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((!0xA492L) && g_790.f0), g_790.f3)) < l_1245.f2), g_790.f1))), l_1132))))) <= 0x6FL))))), l_1257, g_307) <= g_91)) || g_1268), 4UL)) & (-1L)), l_1244, g_1076, g_1083, l_1257);
        }
        for (g_790.f2 = 9; (g_790.f2 <= (-18)); g_790.f2--)
        {
            unsigned short l_1286 = 0UL;
            int l_1288 = 3L;
            l_890 = func_10((((safe_mod_func_uint8_t_u_u(((g_134 = (g_527 >= (safe_unary_minus_func_uint16_t_u((!1UL))))) || (safe_lshift_func_int16_t_s_s(7L, 13))), 1UL)) == g_922) == ((safe_sub_func_uint8_t_u_u(((l_1288 = ((g_443 ^ func_51((safe_add_func_uint16_t_u_u(l_890.f4, (safe_rshift_func_int8_t_s_u(g_353, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_146, l_1286)), l_1207)))))), g_358, g_30, l_1286, l_1286)) >= l_1287)) || l_1245.f3), g_904)) & l_1289)), g_631, g_443, l_1290);
            g_30 = l_1245;
        }
        if (l_796)
            break;
    }
    return g_85.f3;
}







static struct S0 func_5(struct S0 p_6, unsigned p_7, char p_8, unsigned p_9)
{
    int l_643 = 1L;
    unsigned l_650 = 0xCD458C81L;
    unsigned l_659 = 9UL;
    int l_674 = 1L;
    int l_675 = 0xB8997BD7L;
    struct S0 l_717 = {0x14C54D5AL,4294967291UL,0x887AL,0UL,1UL};
    const int l_788 = 0L;
    if ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_586, (safe_sub_func_int8_t_s_s(l_643, ((safe_sub_func_int32_t_s_s(g_215, (g_134 & (0xF5L > p_6.f4)))) >= ((safe_rshift_func_int8_t_s_u((g_353 && p_8), 0)) | (safe_add_func_uint8_t_u_u(((l_650 && l_643) <= l_650), 0xE7L)))))))), p_6.f0)))
    {
        int l_651 = 0x7AF86431L;
        struct S0 l_677 = {4294967295UL,0x126E887DL,0x20F2L,0x23FBL,0x14L};
        struct S0 l_678 = {4294967295UL,0UL,0xCFD1L,1UL,2UL};
        const unsigned char l_693 = 1UL;
        int l_724 = 0xA6DEAA2CL;
        unsigned short l_735 = 1UL;
        g_146 = (-6L);
        if ((g_146 = (!(l_651 == p_6.f2))))
        {
            short l_654 = 0L;
            struct S0 l_676 = {4294967290UL,0xD988F56AL,0x5B5EL,65529UL,0x91L};
            for (g_631 = (-17); (g_631 != 19); g_631++)
            {
                l_675 = ((l_654 = g_527) | (safe_rshift_func_uint8_t_u_s(g_282, (safe_rshift_func_int16_t_s_u(l_659, (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((!0x5FL), (((p_7 >= (safe_add_func_uint32_t_u_u((l_674 = (((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u(g_443, ((-8L) < (l_643 = (safe_add_func_uint16_t_u_u(9UL, 2UL)))))))), p_6.f1)) <= 0x9AF77E8DL) ^ 5UL)), p_6.f4))) < 0xCBE44250L) == p_7))), 1)))))));
                l_676 = g_85;
                if (g_586)
                    break;
                g_85 = p_6;
            }
            l_678 = (p_6 = (l_677 = p_6));
        }
        else
        {
            const unsigned char l_705 = 0x46L;
            int l_706 = 0x9F94F409L;
            struct S0 l_716 = {0x984FA087L,1UL,-4L,65532UL,0x5EL};
            g_30 = p_6;
            if ((safe_rshift_func_int16_t_s_s((+(safe_add_func_int32_t_s_s(p_6.f1, 0L))), (g_30.f2 = (((func_70((safe_rshift_func_uint16_t_u_s((p_7 <= func_18((safe_lshift_func_int16_t_s_u(0x7B56L, 0)), ((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(p_6.f4, p_6.f3)) >= 0xA92FL) | g_129), p_9)) <= p_6.f0), g_354, l_693, g_134)), p_7)), p_6.f1, g_213) > g_213) <= 65535UL) || 0L)))))
            {
                return l_677;
            }
            else
            {
                unsigned l_702 = 2UL;
                unsigned short l_709 = 0x5373L;
                struct S0 l_715 = {0x37C2DFFBL,0x81AB624BL,0x3819L,65529UL,0x39L};
                int l_725 = 0xBB042B4CL;
                int l_726 = 0x68E40853L;
                l_706 = (safe_rshift_func_uint8_t_u_u((~func_65(func_70(g_85.f2, l_678.f3, (p_6.f1 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(func_65(((p_6.f3 = ((safe_sub_func_int32_t_s_s((g_146 = ((-1L) ^ (p_7 != func_65(g_117, (((((g_134 = (l_702 || p_6.f2)) < (g_30.f3 = ((safe_add_func_int8_t_s_s(((((!4294967295UL) & p_6.f0) < g_85.f2) && g_307), 0xA0L)) || 249UL))) | g_28) == 0xC1C3L) || 0xDDL))))), g_30.f4)) == 7L)) > l_705), l_705), g_215)), p_7)))), p_6.f4)), g_85.f4));
                g_146 = (((p_8 < (l_643 = (g_85.f3 > func_51(((g_85.f2 = (safe_sub_func_int8_t_s_s(func_70(l_709, (l_706 = ((safe_rshift_func_uint8_t_u_s((p_6.f1 || (((p_6.f2 = ((((safe_lshift_func_int16_t_s_u(p_6.f1, p_6.f2)) > l_702) || (safe_unary_minus_func_uint16_t_u(g_85.f0))) & func_51((p_6.f2 || l_709), g_353, l_715, p_8, p_6.f4))) > 0x9888L) < p_6.f4)), 0)) == p_6.f1)), g_30.f2), l_715.f4))) >= 0L), g_134, l_716, g_85.f1, p_6.f0)))) ^ 251UL) <= 1UL);
                l_717 = l_677;
                l_651 = (safe_add_func_int32_t_s_s((l_726 = ((g_527 = (l_725 = (~(safe_add_func_int32_t_s_s((+p_6.f0), ((func_70(((p_6.f3 != p_9) == 1L), (p_6.f2 = func_65((safe_sub_func_int8_t_s_s(l_716.f2, (l_724 = g_85.f2))), l_643)), g_443) ^ l_715.f3) <= 0x0236L)))))) == g_30.f0)), l_716.f1));
            }
            l_651 = (-8L);
            g_146 = (4294967295UL != (~(safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_353 = 4294967295UL), (l_706 = (safe_lshift_func_int16_t_s_u((~(safe_mod_func_uint32_t_u_u((l_643 = 0xFE46DF10L), (((g_30.f4 <= p_7) || (p_6.f3 = (((p_6.f1 = g_146) && p_8) == (l_650 < (((-7L) ^ p_6.f3) ^ l_735))))) || p_8)))), g_30.f1))))), 11))));
        }
        g_146 = l_643;
        g_30 = p_6;
    }
    else
    {
        struct S0 l_739 = {1UL,0x6F77B25EL,0x18DDL,65535UL,1UL};
        int l_753 = 0x8E26C9F6L;
        int l_763 = 0x495BA927L;
        if ((~(0L & p_8)))
        {
            struct S0 l_736 = {3UL,4294967290UL,1L,0x3BF7L,9UL};
            int l_748 = 0x4025D845L;
            int l_751 = 0x3F9FA050L;
            int l_764 = 0x458335C1L;
            l_736 = p_6;
            for (g_85.f0 = 0; (g_85.f0 >= 24); g_85.f0 = safe_add_func_uint32_t_u_u(g_85.f0, 5))
            {
                int l_758 = 0xB53040C7L;
                l_739 = (p_6 = p_6);
                if (g_443)
                    continue;
                if ((((~0x383F60B4L) && p_6.f1) < l_674))
                {
                    unsigned short l_752 = 65535UL;
                    for (p_6.f2 = (-21); (p_6.f2 >= 27); p_6.f2++)
                    {
                        l_753 = (safe_mod_func_int32_t_s_s(g_358, (safe_sub_func_int16_t_s_s(((p_6.f3 = (g_117 = (g_213 | p_8))) | (func_51((safe_rshift_func_int8_t_s_s(((p_9 = l_748) >= (p_6.f1 = l_739.f2)), (4294967295UL ^ (safe_sub_func_uint16_t_u_u(g_30.f0, l_717.f4))))), (l_751 = g_85.f1), g_30, l_736.f1, g_270) & l_752)), 0x8440L))));
                        g_146 = g_28;
                    }
                    l_764 = func_51((g_443 = (safe_add_func_int32_t_s_s(((+(safe_sub_func_uint16_t_u_u((g_129 ^ (l_758 <= p_6.f1)), (p_6.f3 = ((func_70(g_85.f1, g_85.f4, g_282) == (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_763 = 0x9AL), l_751)), p_8))) ^ p_6.f3))))) ^ p_6.f1), l_739.f1))), l_650, l_736, l_758, l_752);
                    p_6 = g_30;
                }
                else
                {
                    int l_767 = 0L;
                    g_146 = 0L;
                    l_767 = (safe_mod_func_uint32_t_u_u(0x56C4A24AL, ((0xB809L & g_30.f2) ^ (p_8 = p_6.f1))));
                }
                g_146 = (l_659 == ((safe_lshift_func_int8_t_s_s(g_28, 0)) == (func_70((p_6.f1 = (safe_unary_minus_func_int32_t_s(0x641E4E62L))), p_8, p_6.f0) || (l_764 = (((((safe_add_func_uint32_t_u_u(g_282, ((safe_lshift_func_uint16_t_u_s((((g_85.f1 = 0xCEE0753EL) ^ func_51(g_85.f0, p_6.f2, g_30, p_6.f1, g_85.f3)) >= l_758), 11)) ^ p_6.f2))) <= l_758) | g_631) > 255UL) > l_736.f1)))));
            }
            for (l_717.f1 = (-5); (l_717.f1 != 50); l_717.f1++)
            {
                return g_30;
            }
            for (l_751 = 26; (l_751 >= (-12)); l_751 = safe_sub_func_uint32_t_u_u(l_751, 7))
            {
                return g_85;
            }
        }
        else
        {
            l_643 = (+func_46(l_763, g_270));
        }
        p_6 = func_10(func_51(func_65(g_133, (safe_add_func_uint32_t_u_u(g_527, p_8))), p_9, g_30, (p_6.f2 = (safe_unary_minus_func_uint32_t_u(((((safe_sub_func_uint8_t_u_u((p_6.f3 > g_30.f0), g_307)) && 0xB8F1L) > g_30.f4) | p_6.f3)))), p_9), g_549, p_6.f4, l_717.f4);
        l_753 = ((safe_add_func_uint8_t_u_u((((p_6.f0 && ((p_9 != 4294967295UL) <= g_30.f1)) == p_7) ^ func_46((g_133 = (p_6.f2 = (safe_sub_func_uint8_t_u_u((l_643 > (p_6.f1 && func_70(l_739.f0, (func_65(p_6.f1, l_788) && p_6.f3), g_30.f4))), g_162)))), p_6.f1)), g_789)) <= l_739.f1);
        p_6 = p_6;
    }
    return l_717;
}







static struct S0 func_10(unsigned p_11, unsigned p_12, const unsigned p_13, unsigned p_14)
{
    struct S0 l_485 = {0x744D341AL,4294967295UL,4L,0x9AD5L,0x69L};
    int l_499 = 0xE38EAFA2L;
    int l_525 = 6L;
    unsigned l_534 = 0x7425BA78L;
    char l_572 = 0xA0L;
    int l_580 = (-1L);
    const int l_610 = 0L;
    struct S0 l_635 = {1UL,0x1CDDF316L,0xE80EL,0UL,0xB4L};
    char l_636 = 5L;
    if ((safe_lshift_func_uint8_t_u_s(g_213, 0)))
    {
        unsigned l_486 = 0UL;
        struct S0 l_492 = {1UL,0xAD731CE4L,0xBFD5L,0x9F88L,6UL};
        l_485 = l_485;
        g_85 = (g_30 = g_85);
        if (((func_18((0UL <= (g_30.f3 & (g_354 = g_133))), (func_70(l_486, (g_30.f2 = func_65(g_30.f4, g_85.f1)), (safe_lshift_func_uint8_t_u_u((0x72BAL >= (safe_sub_func_int32_t_s_s(p_11, p_12))), g_85.f3))) != g_85.f2), p_12, g_85.f2, l_485.f2) & g_307) && (-1L)))
        {
            l_485 = l_485;
        }
        else
        {
            const struct S0 l_491 = {0x741467CFL,0UL,1L,0xB3CDL,0xB0L};
            l_492 = l_491;
        }
        l_499 = (((safe_sub_func_int16_t_s_s(g_133, ((p_14 & (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((l_492.f4 <= func_70(g_117, g_85.f3, (func_65(l_492.f1, func_51(g_85.f0, g_213, (g_30 = l_485), l_492.f2, g_354)) | g_117))) != p_11), 7)), l_485.f3))) | 0x41L))) & l_485.f3) ^ p_13);
    }
    else
    {
        unsigned l_502 = 4294967295UL;
        char l_511 = 1L;
        unsigned short l_512 = 65535UL;
        struct S0 l_514 = {1UL,1UL,-10L,0x1B90L,0xE4L};
        int l_524 = 0L;
        int l_526 = (-1L);
        g_513 = (g_146 = ((safe_add_func_uint32_t_u_u(g_353, (((~l_502) || l_499) || (((((safe_add_func_uint8_t_u_u(251UL, ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(func_65(g_85.f1, (g_270 >= 0x29L)), (p_14 < 0x09L))), l_502)), p_11)) == g_129))) ^ l_485.f4) > l_511) ^ l_511) <= 0xD65C0A1CL)))) || l_512));
        l_514 = l_514;
        l_514 = l_485;
        g_527 = (p_12 ^ ((-1L) <= func_70((l_526 = (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(7UL, ((g_134 = ((9UL == l_512) < (safe_lshift_func_uint8_t_u_s(l_485.f3, (safe_lshift_func_int8_t_s_s((func_46((g_30.f4 == func_51(((l_524 = (func_65((l_525 = ((((safe_unary_minus_func_uint16_t_u((l_499 = (l_485.f2 || (p_11 && l_524))))) != 0xEA6B741EL) < g_91) || (-1L))), l_514.f2) & p_12)) | l_485.f3), l_512, l_514, l_514.f1, p_13)), g_30.f4) >= g_30.f1), 7)))))) & 0xFDB0L))), 0x2A006CE6L))), l_502, l_485.f0)));
    }
    if ((((safe_add_func_int32_t_s_s(p_11, 4294967295UL)) < (g_85.f3 ^ (safe_rshift_func_uint8_t_u_s(((g_85.f1 ^ l_485.f0) ^ (g_307 = ((l_499 = ((safe_rshift_func_uint16_t_u_u((g_213 < p_13), (((((func_65(g_443, p_14) & l_534) ^ l_485.f4) && l_525) >= p_13) == l_525))) && g_353)) & 0xD6L))), p_13)))) != g_358))
    {
        struct S0 l_535 = {1UL,0xCE8C9525L,-1L,0x83CCL,0xDCL};
        g_85 = l_535;
    }
    else
    {
        const unsigned short l_536 = 65535UL;
        unsigned char l_539 = 1UL;
        int l_548 = (-1L);
        short l_550 = 0xCA59L;
        int l_551 = 0xAC93078BL;
        unsigned l_617 = 0xEF453AE2L;
        l_525 = (l_536 > ((safe_lshift_func_uint16_t_u_u((p_14 ^ ((l_539 = p_13) == ((func_46(l_536, p_12) ^ ((((safe_sub_func_int32_t_s_s((((0x75E4L <= p_13) ^ (safe_add_func_uint16_t_u_u((l_499 = (safe_rshift_func_int8_t_s_u((l_551 = (((g_549 = (((l_548 = (g_527 = p_13)) == l_485.f2) >= g_215)) ^ l_485.f4) <= l_550)), p_13))), g_117))) < g_307), p_12)) < 0xC8C7C8FDL) == 0UL) < p_13)) < 0xD6E2L))), g_307)) | 0x92L));
        for (l_550 = 13; (l_550 < 21); ++l_550)
        {
            unsigned char l_581 = 0xFAL;
            unsigned char l_611 = 255UL;
            int l_620 = (-1L);
            if ((safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint32_t_u_u(((g_30.f4 | (g_134 = p_13)) ^ (l_485.f1 <= p_11)), l_550)) & (g_30.f4 <= 4UL)) | g_215))))
            {
                struct S0 l_575 = {8UL,4294967295UL,0x0CD9L,0x97F0L,0x2EL};
                char l_579 = 1L;
                for (g_162 = 24; (g_162 == 12); --g_162)
                {
                    int l_561 = 0x89A13443L;
                    int l_576 = (-1L);
                    for (g_30.f2 = 0; (g_30.f2 >= (-1)); g_30.f2--)
                    {
                        l_561 = (g_353 > 0x09AAL);
                    }
                    for (g_134 = 0; (g_134 != 23); ++g_134)
                    {
                        char l_568 = 0xCFL;
                        int l_569 = 3L;
                        l_576 = (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((g_215 != func_70((p_14 ^ (g_282 < ((((l_569 = ((l_568 >= 0xC333776CL) ^ p_11)) < func_51(((p_14 != (safe_sub_func_int8_t_s_s((l_572 < (safe_add_func_uint16_t_u_u((g_85.f3 = ((0xD4D1L >= 0xE716L) && l_485.f3)), 0x2A1BL))), g_146))) & p_13), l_568, l_575, l_539, l_568)) != l_568) < p_14))), p_14, p_13)), p_14)), p_14));
                        l_576 = (g_146 = g_85.f2);
                        g_85 = g_85;
                        g_146 = 0L;
                    }
                }
                g_586 = (safe_add_func_uint16_t_u_u(func_24(l_579, (l_575.f1 != (l_580 >= (l_581 = (l_551 = g_85.f1)))), g_443), ((safe_add_func_int32_t_s_s(p_11, ((l_499 = (safe_rshift_func_int16_t_s_s((g_432 & l_485.f0), 14))) ^ g_527))) > 0x72L)));
                l_575 = g_85;
            }
            else
            {
                const int l_590 = 0x41A4477DL;
                int l_634 = 0xF50843E1L;
                if ((safe_rshift_func_uint8_t_u_u((g_270 | (safe_unary_minus_func_uint32_t_u(4294967294UL))), l_590)))
                {
                    g_146 = (safe_add_func_uint32_t_u_u(g_282, 4294967290UL));
                    if (p_12)
                        break;
                }
                else
                {
                    int l_597 = 0x3BD66808L;
                    const int l_602 = 0xE71DF8CFL;
                    int l_605 = (-2L);
                    l_551 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_551, (l_597 = (0x97DCL & (l_590 ^ g_146))))), (safe_lshift_func_uint16_t_u_u(func_70(g_513, (p_12 >= (func_51(g_307, func_65((safe_rshift_func_int16_t_s_u(p_13, 12)), l_602), g_85, l_548, l_602) & 0x87L)), g_30.f2), 7))));
                    l_605 = (safe_add_func_int8_t_s_s(0x70L, p_13));
                    for (l_581 = 18; (l_581 == 19); l_581 = safe_add_func_int8_t_s_s(l_581, 4))
                    {
                        unsigned short l_612 = 0x1967L;
                        l_612 = ((g_146 = (safe_mod_func_int16_t_s_s(p_14, (l_551 = (g_527 && g_354))))) & ((g_85.f3 = p_14) && (((((g_85.f0 && l_610) != (func_65(l_611, g_443) && p_11)) || p_13) == l_548) == l_597)));
                        l_620 = (safe_rshift_func_uint8_t_u_s(func_70(func_46(g_30.f3, l_536), (safe_sub_func_int16_t_s_s((-3L), l_539)), (g_353 = l_617)), (safe_sub_func_uint32_t_u_u(l_611, l_612))));
                        g_631 = ((+0x8931D4A4L) < (((l_620 = l_499) != (g_134 > (((l_485.f0 <= (~func_65(p_11, l_539))) < ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_18(func_18(func_18((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((p_13 & (g_354 = ((g_513 == (-3L)) <= 0xE2ED0821L))), g_85.f3)), g_432)), g_129, p_14, p_12, l_581), g_30.f1, g_30.f2, p_12, l_590), l_536, p_13, g_358, g_432), p_11)), 0x09C41BAFL)), g_133)) < l_602)) | g_30.f2))) >= g_117));
                    }
                    g_146 = (((((l_620 = (l_499 = ((p_14 < 0x3E08L) > 0x2CACL))) >= (safe_rshift_func_uint16_t_u_u(((((l_581 & l_590) || (+((g_129 <= (~l_581)) < 0x901C5E6DL))) && 0x9889L) < g_215), g_85.f1))) || g_134) > l_580) & l_605);
                }
                if (l_590)
                    break;
                if (l_590)
                    break;
                l_634 = l_590;
            }
            return l_635;
        }
        return l_635;
    }
    g_30 = g_30;
    l_636 = (!p_13);
    return l_635;
}







static int func_18(char p_19, unsigned p_20, unsigned char p_21, const char p_22, int p_23)
{
    int l_468 = (-1L);
    int l_469 = 0xA12D2B3BL;
    int l_470 = 0x89C221E9L;
    unsigned l_481 = 4294967295UL;
    l_470 = (l_469 = (l_468 = 0xB2AE30E2L));
    l_469 = (func_46(l_469, (safe_rshift_func_uint16_t_u_s((g_270 > (g_353 | (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(g_354, (l_470 = g_30.f3))), (l_481 = (g_307 ^ (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(1L, p_20)), 6)))))))), 11))) | l_468);
    return g_85.f4;
}







static char func_24(unsigned p_25, unsigned p_26, char p_27)
{
    struct S0 l_29 = {0x994B748AL,4294967293UL,0xDA2CL,65529UL,0UL};
    int l_35 = (-1L);
    int l_79 = 0xD242EC21L;
    int l_214 = 1L;
    unsigned l_216 = 4294967295UL;
    int l_224 = 0L;
    struct S0 l_229 = {0UL,1UL,9L,0x9362L,0xC6L};
    unsigned short l_251 = 65535UL;
    unsigned short l_325 = 1UL;
    int l_433 = 1L;
    int l_461 = 0x7B73DE58L;
    unsigned l_464 = 0xBF1E5EDFL;
    g_30 = (l_29 = l_29);
    if ((safe_rshift_func_int16_t_s_u(g_30.f3, (safe_mod_func_uint8_t_u_u(l_35, (((0x81D3L >= ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((l_224 = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(func_46((safe_sub_func_int32_t_s_s((g_215 = func_51((1UL | ((((g_213 = (safe_mod_func_int8_t_s_s((((((func_59((l_79 = func_65(p_26, (l_29.f0 ^ (safe_add_func_uint16_t_u_u(func_70(((l_29.f0 ^ p_27) & 5UL), p_26, p_27), 0x960CL))))), p_27, g_30.f1, p_27, p_25) == 0x6FL) >= g_30.f3) ^ p_26) > (-7L)) | 0x0AL), l_29.f0))) && (-1L)) < l_214) == 2UL)), g_30.f3, l_29, p_25, l_29.f1)), l_214)), l_216), g_30.f0)) < g_30.f0), p_27)), p_27))) >= 0UL) >= 0L), 0x2BL)) ^ l_216), 12)) >= 0L)) >= l_29.f4) | 0xE84E1DFFL))))))
    {
        unsigned short l_240 = 0x606FL;
        for (l_29.f3 = 0; (l_29.f3 >= 45); ++l_29.f3)
        {
            char l_227 = (-1L);
            struct S0 l_228 = {0xAF16F3B5L,1UL,0xCC86L,65533UL,0x82L};
            g_146 = (l_227 = 0xA4093195L);
            if (l_216)
                break;
            l_229 = (g_85 = l_228);
            l_228 = l_29;
        }
        g_146 = (safe_lshift_func_uint16_t_u_u((g_134 = g_162), func_51((safe_add_func_uint8_t_u_u(l_29.f4, ((safe_add_func_int16_t_s_s(p_27, (p_27 > (safe_rshift_func_int16_t_s_u((g_85.f2 & (p_26 == (-1L))), (safe_rshift_func_uint16_t_u_s(p_25, (g_91 = 0L)))))))) == g_85.f0))), l_240, g_30, g_146, p_25)));
    }
    else
    {
        unsigned l_252 = 0x86D76D35L;
        int l_255 = (-1L);
        int l_269 = 0x1C7DB9B2L;
        int l_339 = 0x06799D87L;
        unsigned char l_345 = 249UL;
        struct S0 l_393 = {0x07F5716CL,0UL,0x6D82L,2UL,0x40L};
        unsigned char l_431 = 8UL;
        int l_460 = 1L;
        if (func_70((g_30.f1 | p_27), l_35, (safe_mod_func_int16_t_s_s((0xC4L >= ((safe_sub_func_uint8_t_u_u((l_224 = (((p_26 > func_70(p_25, (safe_add_func_uint8_t_u_u(p_25, (4294967289UL <= (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_30.f2, 0x0B03L)) >= g_30.f0), l_251))))), l_252)) >= 0x08L) | l_252)), (-1L))) == 0xEE0398EEL)), l_229.f4))))
        {
            unsigned short l_263 = 0xFBF9L;
            unsigned char l_297 = 0x57L;
            struct S0 l_315 = {4294967295UL,0xB6EA32EEL,6L,65535UL,246UL};
            int l_321 = (-1L);
            for (l_229.f1 = 0; (l_229.f1 > 17); l_229.f1++)
            {
                char l_260 = 1L;
                unsigned l_266 = 0x1566F97DL;
                int l_267 = (-1L);
                struct S0 l_268 = {0x5E022920L,0x567D36ABL,2L,5UL,0UL};
                if (g_134)
                    break;
                l_255 = (l_79 = p_27);
                if (((((((g_30.f4 > (((4UL != (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(func_51(((l_224 = (p_25 & func_51(l_260, (safe_rshift_func_int16_t_s_s((l_263 ^ func_65((l_267 = (0UL && (g_28 > (g_30.f1 = func_65((l_255 = (l_260 > (l_266 && g_85.f3))), p_25))))), l_263)), g_91)), g_85, g_85.f2, g_85.f1))) != p_27), p_27, l_268, l_263, l_260), 7)) | l_269), p_25))) >= 0UL) & 0xE24DL)) ^ p_25) >= g_162) & p_26) | 1UL) | g_270))
                {
                    struct S0 l_271 = {0UL,9UL,0xA7C9L,65529UL,254UL};
                    int l_308 = (-3L);
                    g_30 = l_271;
                    if (((l_263 < p_25) & (safe_unary_minus_func_uint32_t_u(g_30.f4))))
                    {
                        unsigned char l_275 = 0xECL;
                        g_282 = (l_267 = (safe_add_func_uint32_t_u_u(((func_59(func_70((p_26 = l_29.f3), ((g_162 || (l_275 && (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((func_51(p_25, (safe_lshift_func_int8_t_s_u(g_30.f0, (0xBEL && g_85.f2))), g_85, g_117, l_275) >= g_215), p_27)) ^ g_30.f1), p_27)))) >= 3L), p_25), p_25, l_269, g_30.f2, g_117) == l_263) < 0UL), g_270)));
                        l_29 = g_30;
                        l_267 = (l_297 = func_51(l_275, (safe_add_func_int8_t_s_s((0UL && (((safe_mod_func_uint8_t_u_u((((((((safe_add_func_int32_t_s_s((0x8DL <= ((l_275 && (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((l_275 & (safe_sub_func_uint16_t_u_u(((g_28 ^ (l_79 = g_85.f4)) || func_70(p_26, g_85.f0, g_30.f2)), (-9L)))), g_213)) > g_30.f0), 252UL))) == 3L)), 4294967295UL)) >= 0x00L) & 1L) && 1UL) | l_255) ^ l_255) <= p_27), p_26)) <= l_275) != 0L)), 8UL)), l_229, g_30.f3, g_28));
                        g_30 = l_229;
                    }
                    else
                    {
                        short l_302 = 3L;
                        int l_306 = 6L;
                        g_307 = func_59((g_30.f2 == g_91), (((func_46(func_70(l_263, l_297, ((g_134 = (safe_mod_func_uint16_t_u_u(g_85.f4, (l_302 = g_30.f1)))) != ((p_27 = p_26) != (safe_rshift_func_int16_t_s_s((l_306 = ((safe_unary_minus_func_int8_t_s(p_25)) || p_26)), l_269))))), p_25) && 0L) > l_252) & p_25), l_271.f3, l_271.f3, l_229.f1);
                    }
                    l_267 = func_59(((l_308 = 1L) != func_65(func_70(((safe_mod_func_int16_t_s_s((-1L), (~g_30.f3))) && 0xF105L), p_25, ((!(safe_rshift_func_uint16_t_u_s(5UL, g_30.f2))) > func_51(p_26, ((safe_add_func_int32_t_s_s(0x63D91A67L, 4294967290UL)) < g_30.f0), l_315, g_213, l_252))), l_229.f3)), p_25, g_28, l_271.f4, l_271.f1);
                }
                else
                {
                    char l_316 = 0x98L;
                    int l_318 = 1L;
                    short l_322 = 0L;
                    if ((0UL || g_85.f1))
                    {
                        g_146 = l_316;
                    }
                    else
                    {
                        int l_317 = 0L;
                        l_317 = (248UL != (l_267 = l_315.f1));
                        if (g_28)
                            break;
                    }
                    l_318 = p_27;
                    l_255 = func_70(p_26, (g_146 && (((safe_add_func_uint32_t_u_u(0x4FA1BAC8L, (-7L))) | (l_322 = func_46(g_85.f4, (l_321 = 255UL)))) ^ l_268.f0)), l_318);
                    g_30 = l_268;
                }
            }
            l_255 = ((safe_add_func_int16_t_s_s(p_25, (l_325 || (g_85.f2 & l_269)))) | func_70(((0xD6L && 0x04L) | l_229.f1), p_27, (safe_sub_func_int16_t_s_s((l_321 = p_27), g_30.f3))));
            l_321 = (7UL != l_79);
            if (((-1L) & (g_85.f1 = p_25)))
            {
                struct S0 l_328 = {0UL,0x01983461L,0xA0ABL,0x461AL,0UL};
                l_255 = 0x99EC2D0CL;
                l_315 = l_328;
                l_255 = p_25;
                if ((safe_rshift_func_int16_t_s_u((((((l_339 = (((safe_lshift_func_int8_t_s_s(p_27, 5)) > ((((safe_rshift_func_uint16_t_u_u((l_255 = ((((safe_rshift_func_uint16_t_u_u(((0x39197272L | l_252) | 0x1DL), 11)) ^ (0L >= (safe_rshift_func_uint8_t_u_s(l_252, 1)))) | g_215) || p_26)), 13)) >= (l_321 = 0xE80EL)) > 1UL) > 0xFDL)) || 0x6C40L)) < l_79) | 5L) & p_26) | 252UL), 4)))
                {
                    unsigned l_340 = 0xF5118992L;
                    struct S0 l_341 = {0xC06DEEFBL,0xE80AEAE0L,-1L,0x53AFL,1UL};
                    int l_342 = 0x2DB01AC9L;
                    l_79 = l_340;
                    l_315 = l_341;
                    g_146 = (l_342 = g_30.f2);
                    for (l_328.f3 = 0; (l_328.f3 > 43); l_328.f3++)
                    {
                        const int l_352 = 0xD2AE1958L;
                        g_354 = ((l_269 <= 0xFCL) <= func_46((l_345 | p_25), (safe_mod_func_uint8_t_u_u(0xD2L, ((g_85.f2 = p_27) || func_59((p_26 | (func_65(l_252, ((((func_59((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_25, l_328.f2)) >= 0x91FDL), g_134)), p_26, p_27, p_25, l_352) || l_352) >= g_353) < 0x18L) > 2UL)) ^ 0x0A2FL)), l_269, g_215, g_282, g_215))))));
                    }
                }
                else
                {
                    int l_368 = 2L;
                    int l_369 = (-1L);
                    l_321 = (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(g_358)) || (!(g_85.f2 = (!(((((safe_mod_func_int32_t_s_s((0L | l_315.f1), func_70((safe_rshift_func_int8_t_s_u(p_25, 5)), g_85.f0, g_117))) < (0xAA41L >= (4294967293UL != 0xE5DCEC53L))) >= p_27) || l_328.f3) & p_25))))), l_297));
                    g_146 = p_26;
                    for (l_214 = 0; (l_214 >= 9); ++l_214)
                    {
                        unsigned l_365 = 4294967289UL;
                        if (l_365)
                            break;
                    }
                    l_79 = (l_321 > (g_307 = func_46(((g_353 = l_328.f2) | (safe_rshift_func_int16_t_s_s(((((p_27 || (func_70(l_368, (g_30.f2 = (p_25 || (g_162 = l_29.f2))), (0x43C5L & g_270)) | 0L)) != l_368) == 0xD464F1D1L) != 0x47L), 5))), l_369)));
                }
            }
            else
            {
                int l_389 = 1L;
                int l_390 = 0x16CD58F4L;
                struct S0 l_392 = {0xA71B84D1L,0UL,6L,0UL,255UL};
                for (l_214 = 0; (l_214 >= 27); l_214 = safe_add_func_uint8_t_u_u(l_214, 9))
                {
                    int l_377 = 0xFCF0DD83L;
                    for (l_224 = 0; (l_224 != (-14)); --l_224)
                    {
                        int l_386 = 0x488D7D1DL;
                        l_339 = (safe_unary_minus_func_uint16_t_u((p_25 | (safe_rshift_func_uint8_t_u_s((((l_377 <= (safe_rshift_func_int16_t_s_u(((l_79 = g_85.f4) | (safe_rshift_func_uint8_t_u_s((g_85.f1 || (l_216 <= (((safe_rshift_func_int16_t_s_u((l_321 = (2UL <= (((g_30.f0 >= ((safe_mod_func_uint32_t_u_u(g_353, l_386)) || (-7L))) & p_26) > g_85.f1))), 6)) || p_25) & l_255))), g_213))), 5))) & 0xD4L) || 0x2FFBL), 4)))));
                        if (g_30.f1)
                            break;
                        if (g_307)
                            continue;
                    }
                    l_255 = (0x5CFBL | ((l_224 = g_85.f1) | (g_30.f4 = (safe_add_func_int8_t_s_s(func_51(l_389, g_30.f3, l_315, l_315.f1, (l_390 = l_389)), 0xCBL)))));
                }
                l_224 = l_252;
                if (l_339)
                {
                    char l_391 = 4L;
                    int l_404 = 0xA3B9E3ACL;
                    int l_416 = 0L;
                    l_391 = l_269;
                    l_393 = l_392;
                    if (p_27)
                    {
                        struct S0 l_394 = {0xFF9300FBL,0xA79415D4L,0xBC7FL,0x3F55L,255UL};
                        int l_405 = 0x42263454L;
                        g_85 = l_394;
                        l_255 = ((safe_mod_func_uint8_t_u_u(0x73L, (-1L))) || (safe_sub_func_uint16_t_u_u((l_391 ^ (l_405 = (l_404 = ((((p_27 >= (g_85.f1 == (p_27 != ((safe_unary_minus_func_int8_t_s((func_70(g_30.f2, l_390, (p_26 = (((safe_add_func_uint8_t_u_u(255UL, l_391)) && g_215) || p_25))) ^ 4UL))) < g_85.f4)))) >= 0x74L) & l_29.f4) >= l_391)))), l_321)));
                    }
                    else
                    {
                        short l_419 = 0xE8C7L;
                        l_390 = ((safe_lshift_func_int16_t_s_s(l_255, 3)) > (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((l_416 = (l_339 = (l_404 = (safe_rshift_func_uint8_t_u_s((p_25 && (+9UL)), 7))))), (safe_rshift_func_uint16_t_u_s((func_70((((l_389 = 0x8FEDL) >= p_27) >= p_26), p_26, p_25) >= 0x19EDL), 0)))), 5)), 0UL)));
                        return l_419;
                    }
                    l_255 = (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0xA0L, (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(p_27, 5)) > (l_321 = func_70((g_85.f0 & ((((((l_229.f0 < 1L) ^ (g_162 = p_26)) > (func_65((g_134 = func_70(func_65((g_282 < p_25), p_26), l_431, g_432)), p_27) <= g_358)) >= 1L) > p_27) <= g_28)), g_85.f2, l_35))), 6)) & g_215))))), p_25));
                }
                else
                {
                    l_224 = (p_25 >= 4294967293UL);
                    if (((func_70((p_26 = ((((+(g_117 = g_85.f0)) == l_392.f3) <= p_26) != p_27)), p_25, p_27) ^ ((l_224 = l_255) >= g_30.f0)) && p_26))
                    {
                        l_255 = p_25;
                        l_390 = (l_433 != (safe_rshift_func_int16_t_s_s(p_26, 6)));
                    }
                    else
                    {
                        l_389 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0x037AL, (+0xA045L))), g_85.f3));
                        g_146 = 0L;
                    }
                }
            }
        }
        else
        {
            struct S0 l_440 = {0xCF6D2023L,0xA9933ACFL,1L,0x48A4L,0x17L};
            l_229 = l_440;
        }
        if ((g_146 = func_65(g_85.f4, p_26)))
        {
            g_146 = ((9L >= l_339) ^ 0L);
            g_443 = (safe_sub_func_int32_t_s_s(g_117, (l_79 = l_252)));
        }
        else
        {
            int l_446 = 0xBD67CF34L;
            int l_459 = 0xFBB83429L;
            g_146 = (safe_lshift_func_uint8_t_u_s(func_65(l_229.f4, (func_51(l_446, (safe_sub_func_int16_t_s_s(p_27, (((safe_lshift_func_int16_t_s_s((p_25 | (p_26 = p_27)), ((func_65((safe_lshift_func_uint8_t_u_u((l_255 = g_91), 2)), ((g_117 = func_65(g_30.f0, (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((g_213 = (l_460 = (safe_add_func_int8_t_s_s((g_85.f3 < ((func_65((l_459 = p_27), p_27) == p_25) <= 0xEF57L)), p_27)))) <= p_25), 4)), l_446)))) >= l_393.f1)) <= 0x093E394BL) >= l_325))) >= l_461) ^ p_27))), g_30, l_29.f4, g_85.f0) != l_269)), g_85.f4));
            l_79 = g_30.f2;
        }
        g_146 = 0x03335662L;
        if ((l_79 = ((g_358 = (l_339 || 4UL)) == (l_393.f3 || ((safe_mod_func_int32_t_s_s(p_25, l_29.f0)) <= 0x32L)))))
        {
            unsigned char l_465 = 0xEAL;
            l_465 = (g_146 = (0x53571585L ^ l_464));
            g_146 = ((((((safe_mod_func_uint8_t_u_u((p_25 | (g_215 | (g_117 > func_51((func_70(g_213, (0x962DL ^ p_26), (g_353 = 4294967295UL)) >= func_51(l_465, g_129, g_30, l_393.f3, g_30.f3)), g_30.f1, l_29, p_25, g_30.f3)))), p_27)) == l_29.f4) == l_252) || 1L) <= l_465) >= g_85.f0);
        }
        else
        {
            g_146 = (g_213 == l_339);
        }
    }
    l_79 = g_213;
    return l_229.f0;
}







static short func_46(short p_47, unsigned char p_48)
{
    struct S0 l_221 = {0xD1C907DCL,0x9F13E21FL,0L,0xB5A7L,0xDFL};
    struct S0 l_223 = {1UL,5UL,0x7AF2L,65527UL,0xC7L};
    for (g_30.f4 = 4; (g_30.f4 > 52); g_30.f4++)
    {
        for (p_48 = (-1); (p_48 != 54); p_48++)
        {
            struct S0 l_222 = {0xDD9E813DL,0xB71546BFL,0x68B0L,0x4313L,249UL};
            l_222 = l_221;
            l_222 = l_221;
        }
        g_85 = l_223;
    }
    g_146 = l_223.f1;
    return l_223.f3;
}







static int func_51(int p_52, int p_53, struct S0 p_54, short p_55, int p_56)
{
    p_54 = p_54;
    return p_56;
}







static char func_59(int p_60, int p_61, unsigned p_62, const unsigned p_63, const int p_64)
{
    struct S0 l_88 = {0x20F54F73L,0xDB22284FL,-3L,0UL,252UL};
    int l_89 = 0x589AA37CL;
    struct S0 l_106 = {4294967295UL,0xE1E3E4B8L,0L,0xB9A3L,0x54L};
    int l_132 = 0xE0B32788L;
    unsigned l_151 = 2UL;
    for (g_30.f4 = 0; (g_30.f4 != 34); ++g_30.f4)
    {
        struct S0 l_84 = {1UL,2UL,0x6967L,0xC824L,0xC0L};
        char l_102 = 0L;
        int l_103 = (-1L);
        for (g_30.f2 = 0; (g_30.f2 != 18); ++g_30.f2)
        {
            g_85 = l_84;
        }
        for (g_30.f1 = 0; (g_30.f1 < 40); g_30.f1++)
        {
            int l_90 = (-1L);
            g_85 = l_88;
            g_91 = ((func_65(g_30.f4, ((((l_89 = (0xDC06L || l_88.f4)) > (1L > (g_30.f0 >= (p_62 <= (l_90 > l_90))))) < func_65(g_85.f0, p_60)) < g_85.f2)) ^ 0xA9DD310FL) && p_64);
        }
        if (func_65((g_30.f1 < ((safe_sub_func_uint16_t_u_u((g_85.f3 = (safe_sub_func_int32_t_s_s((func_65((safe_add_func_uint8_t_u_u(((0x0BL || (l_103 = (g_85.f4 > func_70(p_62, (safe_lshift_func_int16_t_s_s((p_60 >= l_84.f2), ((((l_84.f4 <= g_28) < (safe_sub_func_uint16_t_u_u((func_70(p_64, l_102, g_28) == p_63), 8L))) ^ 255UL) & 0xCEB12FA9L))), p_63)))) > p_60), 1L)), p_64) & l_84.f2), 4294967288UL))), p_64)) == 0L)), p_63))
        {
            char l_104 = 0x26L;
            l_89 = l_104;
        }
        else
        {
            unsigned short l_105 = 0xE0F6L;
            p_60 = l_105;
        }
    }
    l_106 = l_88;
    l_106 = l_106;
    if (((safe_sub_func_int16_t_s_s(0x66FFL, ((g_85.f3 != ((safe_mod_func_int8_t_s_s((g_85.f2 > ((((safe_rshift_func_uint16_t_u_s(p_63, 1)) >= (p_63 < ((safe_add_func_uint32_t_u_u(((g_117 = p_60) == (((safe_mod_func_int32_t_s_s(l_106.f3, (safe_add_func_uint8_t_u_u(g_85.f4, (safe_lshift_func_uint8_t_u_s((func_70((safe_add_func_int8_t_s_s(g_30.f3, g_30.f1)), g_30.f4, g_85.f3) <= 0x2D643A31L), 4)))))) >= 65535UL) && l_106.f0)), g_30.f3)) < g_28))) || 1UL) != g_30.f2)), 0xD8L)) && 1L)) > g_91))) && l_88.f2))
    {
        short l_128 = 8L;
        struct S0 l_145 = {0x9ACE371FL,0x290E433BL,-1L,0x5D02L,0x7AL};
        int l_147 = 0x07658821L;
        int l_163 = 0L;
        unsigned l_168 = 0x54A37D6FL;
        g_134 = ((((((safe_sub_func_uint8_t_u_u((l_89 = l_88.f1), (g_85.f4 = g_28))) < g_30.f1) > 0xB5A3L) > func_70(p_63, (((g_133 = (func_65((g_30.f2 > (((l_128 & (g_129 = g_30.f3)) ^ (safe_sub_func_int16_t_s_s((l_132 = 0x6978L), 0x0682L))) < g_30.f1)), l_106.f3) | g_30.f2)) < 0UL) != g_85.f0), p_61)) != p_63) && 0x5DE9L);
        if (func_70(func_65(g_85.f3, g_85.f4), p_61, l_128))
        {
            unsigned short l_135 = 5UL;
            int l_138 = 0x92194A02L;
            int l_139 = (-3L);
            l_138 = ((g_85.f3 = ((g_91 > ((((p_63 || 0x50L) > (-6L)) & (p_61 > (l_135 = p_62))) && (safe_rshift_func_int16_t_s_s(((((((-8L) <= l_135) || ((l_128 ^ p_61) & 4294967287UL)) < 0UL) == p_62) == g_30.f0), p_60)))) | 0xFF795CCEL)) || l_128);
            if (((((~func_65(l_138, (((p_60 != (l_139 = g_85.f0)) && (g_30.f0 == func_65((l_135 <= (g_134 || p_62)), p_60))) || 0x15L))) == 0x39L) >= g_85.f3) || l_139))
            {
                struct S0 l_140 = {4294967295UL,4294967293UL,1L,1UL,0x7BL};
                l_140 = l_106;
                p_60 = (safe_sub_func_int16_t_s_s((-6L), g_28));
                for (l_139 = 0; (l_139 == 14); ++l_139)
                {
                    l_106 = l_145;
                    g_85 = g_30;
                    g_146 = (-2L);
                }
            }
            else
            {
                int l_150 = (-1L);
                l_147 = g_30.f4;
                g_146 = (safe_mod_func_uint16_t_u_u(((g_133 <= (l_150 = (l_147 = g_85.f0))) > p_64), l_135));
            }
        }
        else
        {
            g_146 = 0xBE867F31L;
        }
        g_146 = 0x2CF5B4EFL;
        if (((func_65(l_151, l_145.f0) <= (safe_rshift_func_int16_t_s_u((l_88.f1 ^ (~(((((l_89 = (g_117 = 0xB8E4L)) < ((g_30.f3 > 0UL) < (((p_63 <= p_62) || g_85.f0) < p_62))) > (-1L)) && 0xB8E6L) > 1UL))), 4))) >= l_106.f0))
        {
            int l_164 = 5L;
            int l_165 = 0xB26F9E2AL;
            p_60 = ((-1L) >= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_165 = (7L & (l_164 = ((safe_add_func_uint32_t_u_u(l_145.f4, p_60)) > (safe_mod_func_uint8_t_u_u((l_147 = l_128), (8UL ^ (g_162 & ((-1L) && (l_163 = func_70(g_129, l_106.f1, p_60))))))))))), 10)), p_62)));
            p_60 = l_106.f4;
            return l_165;
        }
        else
        {
            unsigned char l_169 = 0x1AL;
            struct S0 l_180 = {4294967295UL,1UL,0L,0x7C23L,0xFBL};
            int l_181 = (-10L);
            if (((safe_sub_func_uint16_t_u_u((l_163 < l_168), g_117)) & (g_30.f3 && l_169)))
            {
                unsigned l_174 = 4294967295UL;
                int l_175 = 0xAB27D908L;
                l_175 = func_65(p_60, (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_85.f0, (((g_85.f4 = g_85.f4) & 0xABL) > (((l_132 = (func_70(p_62, l_106.f0, l_174) < l_169)) <= g_162) && 1UL)))), 0x45A2L)));
                l_145 = l_145;
                for (l_88.f0 = 0; (l_88.f0 <= 57); ++l_88.f0)
                {
                    if ((safe_lshift_func_uint16_t_u_u(l_168, 2)))
                    {
                        return g_85.f0;
                    }
                    else
                    {
                        p_60 = (-1L);
                    }
                    return g_129;
                }
            }
            else
            {
                unsigned short l_202 = 65532UL;
                char l_203 = 8L;
                g_85 = l_180;
                g_146 = ((((-5L) || (g_134 = (+(l_181 = ((l_147 = p_60) || g_28))))) || l_180.f0) && 248UL);
                g_146 = (func_70(l_168, l_106.f1, g_30.f2) & (func_70(l_145.f2, l_145.f0, (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((-5L) ^ (safe_lshift_func_uint8_t_u_u((g_134 && (l_181 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_70((g_162 = (safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((g_30.f4 = func_70((func_65(((((((safe_rshift_func_int16_t_s_u((0L || p_64), 10)) & 0UL) == 0x57L) ^ l_106.f3) || g_162) <= (-10L)), l_89) && p_60), g_85.f1, p_61)) == 0x0BL) | g_30.f2), g_85.f3)) | l_88.f4), p_64))), l_202, g_30.f1), g_133)), l_145.f0)) | l_132), 0x5DBDCA49L)), l_202)))), 0))), l_203)), 2))) > l_128));
                p_60 = (safe_rshift_func_int8_t_s_s((p_63 | (safe_sub_func_int32_t_s_s(((0xA15DL ^ (func_70(l_88.f0, l_180.f4, ((p_60 != (p_60 < (~p_62))) != (g_129 = ((safe_add_func_uint8_t_u_u(((l_180.f4 ^ (!((((func_65((safe_rshift_func_uint16_t_u_u(g_117, 0)), p_63) > 0UL) || 1L) & l_106.f2) == p_60))) != p_63), l_202)) != 5L)))) ^ g_162)) > p_62), 0xAD329275L))), l_145.f0));
            }
        }
    }
    else
    {
        struct S0 l_212 = {0x75D6BB65L,0xF954241EL,0x1B27L,1UL,0xDFL};
        g_85 = l_212;
    }
    return l_88.f4;
}







static int func_65(unsigned short p_66, const char p_67)
{
    return p_66;
}







static unsigned short func_70(unsigned p_71, short p_72, unsigned p_73)
{
    int l_74 = 0x72090F9CL;
    int l_75 = 0x9FD4076BL;
    int l_76 = 0xF3E8E036L;
    l_75 = (l_74 > (p_71 = g_28));
    l_76 = (l_75 = l_75);
    for (l_76 = 14; (l_76 != 0); --l_76)
    {
        return g_30.f2;
    }
    return g_30.f0;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
    transparent_crc(g_30.f4, "g_30.f4", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_790.f0, "g_790.f0", print_hash_value);
    transparent_crc(g_790.f1, "g_790.f1", print_hash_value);
    transparent_crc(g_790.f2, "g_790.f2", print_hash_value);
    transparent_crc(g_790.f3, "g_790.f3", print_hash_value);
    transparent_crc(g_790.f4, "g_790.f4", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
