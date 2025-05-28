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



static int g_2 = 0L;
static int g_7 = (-1L);
static char g_12 = 0xBAL;
static int g_13 = 0xDADE0980L;
static unsigned g_100 = 0xDBAC6B99L;
static int g_110 = 0L;
static short g_124 = (-10L);
static short g_144 = 0x0D6FL;
static int g_145 = (-10L);
static int g_177 = 0x419F4420L;
static short g_326 = 1L;
static int g_340 = 2L;
static unsigned g_383 = 0x3DAEFC0EL;
static int g_417 = 0x84EA6A66L;
static short g_432 = 0x978BL;
static int g_435 = 1L;
static unsigned g_453 = 0x606EB438L;
static unsigned g_466 = 4294967292UL;
static unsigned short g_525 = 0x1C4BL;
static short g_713 = 9L;
static unsigned short g_789 = 65531UL;
static unsigned char g_884 = 255UL;
static unsigned g_917 = 0xCC260BA5L;
static char g_918 = 0L;
static int g_967 = 0L;
static int g_968 = 0x78A63060L;



static unsigned char func_1(void);
static unsigned short func_19(unsigned char p_20, unsigned p_21, int p_22, unsigned p_23, short p_24);
static short func_29(int p_30, int p_31, unsigned char p_32, char p_33);
static int func_34(unsigned p_35, unsigned p_36);
static unsigned char func_37(int p_38, int p_39);
static char func_48(char p_49);
static unsigned short func_57(char p_58, char p_59, unsigned short p_60, unsigned short p_61, int p_62);
static char func_65(unsigned short p_66);
static unsigned func_82(unsigned p_83, char p_84, unsigned short p_85);
static int func_88(short p_89, int p_90, unsigned p_91, int p_92);
static unsigned char func_1(void)
{
    unsigned l_10 = 4294967295UL;
    int l_712 = (-1L);
    int l_943 = 0L;
    int l_944 = (-5L);
    int l_962 = 0x6C653551L;
    unsigned short l_971 = 0xD13AL;
    int l_972 = (-1L);
    for (g_2 = (-26); (g_2 >= 15); ++g_2)
    {
        if ((safe_lshift_func_uint16_t_u_s((g_2 == (g_2 != (+((~(+0xE6E7L)) > 0x37A9L)))), 9)))
        {
            for (g_7 = 0; (g_7 <= (-26)); g_7 = safe_sub_func_int8_t_s_s(g_7, 6))
            {
                return l_10;
            }
            if (g_7)
                continue;
            return g_2;
        }
        else
        {
            unsigned char l_11 = 0xEEL;
            int l_18 = 0xB166C193L;
            l_18 = ((~(g_13 = (g_12 = (l_11 = 8UL)))) == (l_10 | ((~l_10) != ((safe_sub_func_int16_t_s_s(7L, 0x2134L)) <= ((-3L) != l_10)))));
            g_13 = 5L;
        }
    }
    l_962 = (func_19((safe_rshift_func_int16_t_s_s(g_13, 8)), l_10, ((g_2 != 0xF5E4L) & (safe_div_func_uint32_t_u_u(((func_29(((func_34((func_37((safe_sub_func_uint16_t_u_u((g_713 = (l_712 = ((((safe_sub_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(4294967295UL, g_2)) ^ l_10), (safe_sub_func_int8_t_s_s(func_48(g_2), l_10)))) || g_100) ^ g_13) > l_10))), g_13)), g_2) < l_10), l_10) == 4294967295UL) == l_10), g_2, g_2, l_10) < 0x434AL) <= 2UL), l_943))), l_943, l_944) != 1UL);
    g_968 = ((safe_lshift_func_int8_t_s_s((((((l_712 = ((l_962 = (g_2 = func_82((0UL || (l_712 && l_943)), l_944, l_944))) != l_10)) != l_943) | (((g_967 = (g_713 = ((((safe_lshift_func_int16_t_s_u(g_525, 5)) < l_944) || 0x77L) < 0x8AL))) > l_943) && (-9L))) || g_789) & 65535UL), g_13)) == g_884);
    l_971 = (safe_lshift_func_uint8_t_u_u(g_177, 5));
    return l_972;
}







static unsigned short func_19(unsigned char p_20, unsigned p_21, int p_22, unsigned p_23, short p_24)
{
    short l_945 = 0xE6F7L;
    int l_948 = 0x08BDF11AL;
    int l_957 = 0x0A8C66B9L;
    unsigned char l_960 = 1UL;
    int l_961 = 0xC94060FBL;
    l_961 = (g_13 = ((l_945 = 0x8C2FL) | (safe_sub_func_int16_t_s_s(p_23, (+(((l_948 = ((l_960 = (65533UL < (l_948 || (safe_div_func_uint32_t_u_u((((6UL || func_34((g_383 = (safe_sub_func_int8_t_s_s(g_383, (g_12 = (((safe_unary_minus_func_uint16_t_u((l_948 > (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((l_957 = p_21) && (safe_add_func_uint8_t_u_u(p_20, p_24))))) & l_948), l_948))))) == l_948) && (-8L)))))), g_7)) ^ 9L) ^ l_948), g_917))))) ^ (-4L))) < p_24) & 0x76CEL))))));
    return p_20;
}







static short func_29(int p_30, int p_31, unsigned char p_32, char p_33)
{
    unsigned short l_909 = 0UL;
    short l_916 = (-5L);
    int l_919 = 1L;
    unsigned l_920 = 1UL;
    int l_923 = 0xBAAC097CL;
    int l_940 = 1L;
    int l_941 = 0x42D2B6BDL;
    int l_942 = 0xEDECB8EDL;
    p_31 = (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_12 = p_32), (safe_add_func_int32_t_s_s((g_2 <= p_32), (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((l_909 >= ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(func_57((g_918 = func_57(func_57(g_884, (safe_add_func_uint16_t_u_u(l_909, (((2UL && ((g_145 = p_31) >= l_916)) || g_124) >= l_916))), g_917, g_417, l_916), l_916, l_916, g_177, g_340)), g_7, g_110, l_916, g_884), p_31)), l_919)) <= 65528UL)) && l_920), g_417)) > p_30), l_916)) <= 1UL), 0xB3L)))))), p_33));
    l_923 = (p_32 | (safe_rshift_func_int8_t_s_s(((func_34(p_33, func_65(p_31)) | p_33) > (!p_30)), 2)));
    l_923 = (safe_add_func_uint16_t_u_u(((g_144 >= g_713) & 0x12L), func_34(func_88(p_31, l_923, g_340, l_920), l_909)));
    l_923 = ((((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(p_31, (safe_lshift_func_int16_t_s_u(((l_920 || ((l_920 & (l_942 = (safe_div_func_uint32_t_u_u((l_923 <= ((l_941 = (safe_lshift_func_uint8_t_u_s((l_940 = (safe_sub_func_int16_t_s_s(0xE35EL, (func_57(l_909, p_30, (g_144 ^ func_88(p_31, p_30, g_789, l_916)), p_33, g_918) >= 0x69L)))), l_923))) < l_919)), l_920)))) | 0xEEB40656L)) && g_383), p_33)))) & p_33), l_909)) || p_33) <= 2UL) != l_923);
    return p_30;
}







static int func_34(unsigned p_35, unsigned p_36)
{
    unsigned char l_888 = 0UL;
    int l_889 = 1L;
    int l_890 = 0x9C39CCBFL;
    int l_893 = 0x675AE96BL;
    int l_894 = 1L;
    int l_895 = (-5L);
    int l_896 = 0x1DF77141L;
    l_890 = (l_889 = l_888);
    l_896 = (((((p_35 || ((l_889 = 0xE508L) > ((l_895 = (g_326 = (l_894 = (l_893 = (safe_rshift_func_int8_t_s_u((g_177 || ((l_890 = g_2) >= (-2L))), p_35)))))) ^ p_36))) >= p_35) != func_57(func_57(l_888, p_36, l_888, g_432, l_888), p_36, g_2, l_888, l_888)) >= p_36) != g_432);
    return g_12;
}







static unsigned char func_37(int p_38, int p_39)
{
    unsigned l_720 = 4294967293UL;
    int l_725 = 0L;
    int l_726 = 1L;
    unsigned char l_727 = 0x7FL;
    int l_746 = 5L;
    unsigned l_757 = 0x1277713EL;
    int l_864 = 0L;
    int l_877 = 0xAECF7155L;
lbl_872:
    p_38 = (l_727 = (~(safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x4136L, ((safe_rshift_func_uint8_t_u_u((l_726 = (l_720 ^ (l_725 = (safe_sub_func_uint16_t_u_u(((func_65(func_88((g_432 ^ (((safe_rshift_func_uint8_t_u_s(p_39, 2)) <= 4UL) > (4294967292UL == 1UL))), g_713, (l_720 <= p_39), g_417)) > p_39) | 0x69L), l_720))))), p_38)) && 0x7BL))), 0x4FABL))));
    l_726 = (safe_mod_func_uint8_t_u_u(func_48((safe_sub_func_int16_t_s_s((g_432 = p_38), (l_725 = 0xA45AL)))), ((p_39 < (safe_mod_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_38 != ((0xE7L < (safe_div_func_uint8_t_u_u(l_726, (l_746 = (safe_lshift_func_uint8_t_u_s((p_39 == (safe_add_func_int32_t_s_s(p_38, 0x2C35721DL))), 3)))))) & 0xB69AA1C8L)), 10)), g_13)), l_720)) & g_13) != l_727) && g_13), g_2))) && g_2)));
    g_177 = l_725;
    if ((safe_sub_func_uint16_t_u_u((0x97L || (0L != l_720)), (l_746 && ((l_726 <= (safe_add_func_int32_t_s_s(9L, (l_757 = ((safe_div_func_uint32_t_u_u((+((l_746 = (p_38 = (0xE5AAL > (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((+l_727) && func_65(g_383)), 0)) >= l_725), p_38))))) <= g_13)), 0xAB172BB9L)) <= 0x6744L))))) != 5L)))))
    {
        unsigned char l_760 = 1UL;
        int l_784 = 0L;
        int l_826 = 0x85D18CD1L;
        unsigned char l_846 = 0xC4L;
        l_725 = (safe_sub_func_int16_t_s_s(func_82(l_760, g_2, (g_12 | func_88(func_57(l_760, (p_39 | (0x4244L > (safe_add_func_int32_t_s_s((p_38 = 1L), p_39)))), (g_435 | p_39), p_39, g_525), l_746, p_39, g_124))), 0x87D9L));
        if (g_713)
        {
            unsigned l_780 = 0x733FBBA8L;
            int l_781 = 0xA272196AL;
            int l_783 = (-9L);
            char l_800 = 0x2AL;
            for (g_453 = 0; (g_453 == 50); ++g_453)
            {
                unsigned l_777 = 3UL;
                int l_779 = 0xB5D9E4A2L;
                unsigned l_782 = 4294967295UL;
                for (l_720 = (-5); (l_720 >= 3); l_720++)
                {
                    int l_778 = 0x9A7C258AL;
                    p_38 = (l_784 = ((p_39 != (g_417 != ((l_760 <= (safe_rshift_func_uint8_t_u_s((l_783 = (safe_add_func_uint8_t_u_u(0x89L, (func_57((func_57((l_781 = (safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((l_777 < func_57(l_777, g_432, l_777, l_778, l_779)), l_780)) == g_110) > l_777), p_38)), g_432))), g_2, l_782, p_39, l_778) && p_39), p_38, g_713, g_145, p_38) > g_144)))), l_780))) <= g_453))) <= (-6L)));
                    if (g_417)
                        continue;
                    g_340 = (-1L);
                }
            }
            p_38 = func_48(func_82(((+((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_789 = 0xA4L), 1)), 12)) <= (p_39 == ((+(safe_lshift_func_uint8_t_u_u(0x5DL, (0UL >= ((func_48(((g_383 = g_383) == (((safe_lshift_func_int16_t_s_s((func_88(l_760, ((safe_lshift_func_uint16_t_u_s((p_39 < 0x8954L), 6)) <= ((safe_lshift_func_uint16_t_u_u(0x13C0L, 13)) <= g_7)), p_39, g_435) && 1UL), 4)) <= g_525) == 9UL))) == 65526UL) ^ 0x2BF85BBEL))))) && 0xC0L)))) >= l_800), g_13, p_38));
            l_784 = l_757;
        }
        else
        {
            unsigned short l_825 = 1UL;
            int l_829 = (-4L);
            l_829 = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_789, (safe_div_func_uint32_t_u_u(func_88((((safe_rshift_func_int16_t_s_u((g_326 = ((safe_lshift_func_int16_t_s_s((l_725 = ((g_12 = (safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(g_466, g_144)) == 65532UL), (+((safe_sub_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(g_145, (safe_sub_func_int8_t_s_s((-7L), ((safe_mod_func_uint8_t_u_u(func_57((l_784 = g_383), (safe_div_func_uint32_t_u_u((l_826 = l_825), (safe_add_func_int8_t_s_s(0x44L, p_39)))), g_12, l_726, p_38), p_38)) || g_435))))) | 65527UL) && p_39), l_726)) ^ 0x6DL))))) || g_124)), 12)) <= l_760)), 1)) ^ 252UL) ^ g_7), l_720, p_38, g_124), l_825)))), l_760)) <= g_340);
            g_177 = 7L;
            l_826 = (safe_rshift_func_uint16_t_u_s((g_435 & (l_784 >= g_453)), 10));
            p_38 = (g_144 ^ (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((p_38 ^ ((l_826 = g_383) & l_825)), ((p_38 & (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(0xD6F6L, func_57((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_38, (l_846 > (g_340 ^ g_7)))), p_38)), p_38)), g_145, p_38, g_7, l_829))), 2))) | p_38))), 0xD6B6A2B7L)) & l_829) < 0xB4B89DFBL));
        }
    }
    else
    {
        unsigned char l_857 = 0xBEL;
        unsigned short l_887 = 0xCB59L;
        p_38 = (l_725 = 0x478B73E5L);
        if (((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_39 != (((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((g_525 = (g_789 = ((l_857 || (!((safe_add_func_int16_t_s_s(l_727, p_38)) >= ((p_38 != g_145) >= (safe_sub_func_int8_t_s_s(0xF6L, (safe_add_func_int8_t_s_s((g_417 == g_453), 255UL)))))))) < (-9L)))), 1)) <= g_466), p_38)) > p_38) == p_38)), g_144)), g_177)) || 0xF8FF0A66L) != (-7L)), l_864)) < (-1L)))
        {
            int l_867 = (-2L);
            int l_870 = (-1L);
            g_177 = ((l_870 = (safe_lshift_func_uint16_t_u_u(((((0x73L & g_340) >= p_38) >= (l_867 = 1L)) >= (safe_div_func_int8_t_s_s((l_757 != p_39), 0x84L))), p_38))) == 0x692B8BC5L);
        }
        else
        {
            unsigned l_871 = 6UL;
            l_871 = g_100;
            if (g_110)
                goto lbl_872;
            g_417 = (safe_mod_func_uint8_t_u_u((g_884 = ((safe_mod_func_int32_t_s_s(l_877, (((safe_add_func_uint8_t_u_u(g_383, g_2)) == l_871) & l_727))) <= ((l_871 != ((l_746 = (l_725 = g_432)) > (safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_39, (((l_877 < g_177) > 0x3C4D1DA1L) | 6L))) > 2UL), 0x0BL)))) != g_525))), l_757));
            g_110 = (((safe_add_func_uint16_t_u_u(0x8A74L, p_39)) >= l_887) >= p_38);
        }
    }
    return p_38;
}







static char func_48(char p_49)
{
    unsigned short l_52 = 0xA329L;
    unsigned short l_551 = 0xDF2FL;
    unsigned l_557 = 1UL;
    int l_574 = (-1L);
    int l_576 = 0x5AF4C30FL;
    unsigned l_601 = 7UL;
    int l_602 = 9L;
    unsigned l_641 = 0x2A9A5BB9L;
    for (g_12 = 0; (g_12 != 1); ++g_12)
    {
        l_52 = 0xA27438E2L;
        return g_2;
    }
    if ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(func_57(g_2, l_52, ((safe_add_func_uint8_t_u_u((func_65(g_13) != ((safe_rshift_func_int8_t_s_u(g_2, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(p_49, p_49)), 0)) > (g_2 >= (-1L))))) < g_2)), g_2)) ^ (-1L)), p_49, g_13), g_13)), g_13)))
    {
        int l_539 = 0x8D7B6EF0L;
        l_539 = l_52;
        for (g_326 = 0; (g_326 < 1); g_326 = safe_add_func_int8_t_s_s(g_326, 6))
        {
            g_340 = (safe_rshift_func_int8_t_s_s(l_539, (g_466 <= (g_525 = p_49))));
            return p_49;
        }
        return g_383;
    }
    else
    {
        int l_544 = 0xBC7448AAL;
        if ((l_544 = 0xA750B496L))
        {
            return g_7;
        }
        else
        {
            unsigned l_556 = 4294967287UL;
            int l_577 = 0xA63A098AL;
            for (g_432 = 0; (g_432 > (-27)); g_432--)
            {
                int l_558 = 1L;
                g_145 = 0x5045420DL;
                g_7 = p_49;
                if ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((func_57((g_12 = g_432), (func_57(l_551, (safe_mod_func_uint32_t_u_u(0xA08C83F3L, ((safe_div_func_int32_t_s_s((g_13 && (p_49 && (l_556 < l_551))), 0xAB5EF2E3L)) | l_557))), l_544, g_145, g_466) > p_49), l_544, l_544, p_49) <= l_551), 0x44C7L)), 5)))
                {
                    g_417 = 0L;
                    l_558 = p_49;
                }
                else
                {
                    int l_573 = 0L;
                    unsigned char l_575 = 1UL;
                    l_577 = (l_558 >= (((((l_575 = (safe_sub_func_uint8_t_u_u((((g_12 = l_556) & (safe_div_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_7, (l_574 = (((safe_sub_func_int16_t_s_s((255UL == 1UL), func_57((safe_lshift_func_int8_t_s_u((p_49 > l_573), 1)), g_110, (((l_544 = g_417) == 0UL) && l_556), l_556, p_49))) & p_49) != 0x6BL)))), p_49)), g_124)) == 2L), p_49))) | g_383), 0x7CL))) < g_417) | 0L) && l_576) || 250UL));
                }
            }
            l_544 = ((0xF2L & p_49) || 0x6AL);
            for (g_340 = (-6); (g_340 != (-26)); g_340 = safe_sub_func_uint16_t_u_u(g_340, 3))
            {
                unsigned l_590 = 0xAD346C97L;
                l_544 = (safe_sub_func_int8_t_s_s(func_57(((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(p_49, 0x9F56L)), (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_590 != ((((l_574 = ((!(safe_mod_func_int8_t_s_s((((0x38457D29L < (1UL > 4294967295UL)) < g_13) <= ((((safe_add_func_int8_t_s_s(p_49, (func_57(((((func_88((safe_add_func_uint32_t_u_u(g_2, p_49)), p_49, l_577, l_590) ^ p_49) && p_49) && p_49) ^ 0xE87BL), g_326, p_49, g_13, p_49) | p_49))) >= l_544) <= p_49) < g_340)), p_49))) >= p_49)) <= l_52) > p_49) < g_417)), p_49)), g_13)))) > (-5L)), g_326, g_525, p_49, l_590), l_590));
            }
        }
    }
    l_602 = func_88(((l_557 ^ (l_574 = 65535UL)) == ((safe_sub_func_int16_t_s_s(p_49, (safe_lshift_func_int8_t_s_s((4UL && g_124), 1)))) | ((l_551 || l_557) == g_144))), l_52, g_435, l_601);
    if (func_57((0L || 0x1490F189L), p_49, ((safe_rshift_func_int8_t_s_u(l_574, 0)) <= g_12), (l_602 = 65530UL), p_49))
    {
        unsigned short l_615 = 0x1B0AL;
        int l_616 = (-4L);
        int l_619 = 0xBE5066D9L;
        unsigned l_631 = 0UL;
        short l_648 = 0x413FL;
        unsigned l_669 = 0x92D4AC71L;
        l_616 = ((((1UL < (((((!p_49) ^ (func_65(func_82((l_574 = (safe_div_func_int8_t_s_s((p_49 <= (safe_lshift_func_uint16_t_u_u(((~(safe_lshift_func_uint8_t_u_s(func_57(p_49, p_49, ((4294967288UL != 0xF4496314L) || ((0x05B79149L && (g_417 = ((((safe_div_func_uint8_t_u_u((l_602 = g_177), l_576)) > g_13) ^ l_601) || 0xDC0A0A95L))) > p_49)), p_49, l_52), 1))) | p_49), 10))), 0x94L))), p_49, p_49)) & 7UL)) || g_124) ^ 0x2B6BBC50L) < 0x1CL)) != 0x6DL) && 0x6AFCF428L) != l_615);
        for (g_453 = 0; (g_453 < 13); g_453 = safe_add_func_int16_t_s_s(g_453, 6))
        {
            unsigned short l_623 = 0x4596L;
            int l_625 = 0x1A53D890L;
            if ((((l_619 = (l_616 = g_383)) == (safe_div_func_int32_t_s_s(((+p_49) <= p_49), l_602))) | p_49))
            {
                g_177 = g_13;
                g_340 = (((safe_unary_minus_func_uint32_t_u((l_623 = p_49))) >= g_383) <= 251UL);
            }
            else
            {
                short l_626 = (-1L);
                char l_689 = 0xAAL;
                l_625 = (((((~p_49) || (1UL != 249UL)) >= (safe_unary_minus_func_uint16_t_u(l_623))) >= l_619) < l_574);
                if (p_49)
                    continue;
                if (g_417)
                {
                    int l_638 = 0L;
                    int l_670 = 0x1A2D1802L;
                    int l_675 = 7L;
                    int l_696 = 0x7030C7EEL;
                    l_602 = (((l_626 > 1UL) == (safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(l_631, 0xB2L)) == p_49), (safe_lshift_func_int8_t_s_s(((l_625 && (safe_sub_func_uint32_t_u_u(g_326, (g_100 = (safe_sub_func_uint32_t_u_u(g_7, l_576)))))) | g_383), l_626))))) != l_638);
                    l_641 = (((((0x4F0F7B13L != (((l_638 <= p_49) ^ p_49) < 0x68739926L)) >= (l_625 = g_417)) & ((safe_mod_func_int32_t_s_s(p_49, func_57(p_49, p_49, l_631, p_49, l_626))) <= l_638)) & 0xF45EL) && 0x31FD29A6L);
                    if ((safe_lshift_func_int16_t_s_s(g_12, 7)))
                    {
                        short l_646 = 0x746BL;
                        int l_647 = 1L;
                        l_647 = (l_626 <= ((g_7 || (((~(-7L)) != func_88(p_49, p_49, (l_625 = ((l_616 < (6UL == (l_646 <= ((g_340 = p_49) == g_2)))) <= p_49)), g_417)) <= l_623)) | 0x3C33L));
                        l_647 = l_648;
                        g_417 = (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_525 >= (safe_lshift_func_int8_t_s_u((p_49 = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((l_675 = (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((+(safe_mod_func_int16_t_s_s((g_340 || (l_602 = ((safe_add_func_uint16_t_u_u(l_623, ((l_670 = l_669) >= ((safe_lshift_func_uint8_t_u_s(p_49, (g_12 = func_88(g_177, ((safe_sub_func_uint16_t_u_u(0x3F55L, g_453)) < ((-6L) & p_49)), g_453, g_383)))) >= 4L)))) || 0x17738128L))), 0xCD0AL))), p_49)), g_100)), p_49)) == p_49) >= l_615)) ^ l_576) & p_49), 2)), 4294967295UL))), 1))), 0xF6E9L)), l_623));
                    }
                    else
                    {
                        char l_678 = 7L;
                        l_625 = ((safe_sub_func_uint8_t_u_u(g_13, (func_88(g_177, (g_7 = 0x68C4AD82L), l_678, (func_57(g_435, (safe_sub_func_int16_t_s_s(p_49, 0L)), (safe_div_func_int32_t_s_s((!0x80B686B2L), g_2)), g_525, l_626) && l_602)) || 0x30L))) != l_648);
                        return l_625;
                    }
                    g_340 = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_49, (safe_div_func_int16_t_s_s(0x7DD9L, g_100)))), func_88(l_689, (safe_div_func_int16_t_s_s((-1L), (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_432 = (l_696 = p_49)), (((p_49 ^ (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(l_670, (0xE1F5L || l_623))) | g_100), l_623))) || g_417) | g_12))), p_49)))), g_144, g_466)));
                }
                else
                {
                    l_616 = g_432;
                }
            }
            g_145 = (0x4EL == p_49);
        }
        g_177 = p_49;
    }
    else
    {
        unsigned char l_707 = 8UL;
        int l_708 = 1L;
        int l_711 = 0x88593EF3L;
        l_574 = (((safe_lshift_func_uint8_t_u_u((((~((safe_mod_func_int16_t_s_s((g_326 = p_49), (safe_add_func_uint16_t_u_u((func_57((l_708 = func_57(l_707, p_49, (g_525 = g_100), p_49, p_49)), ((safe_div_func_uint32_t_u_u((func_57((g_12 = g_177), l_551, g_340, g_110, g_466) & l_52), l_52)) & p_49), l_711, p_49, p_49) | l_711), 0xD264L)))) || l_711)) && l_708) <= 0x9945L), 4)) & p_49) == 0UL);
    }
    return g_177;
}







static unsigned short func_57(char p_58, char p_59, unsigned short p_60, unsigned short p_61, int p_62)
{
    int l_538 = 0x0533493CL;
    p_62 = (safe_add_func_uint8_t_u_u(((l_538 >= p_58) ^ p_58), p_60));
    p_62 = (g_144 & g_145);
    return g_177;
}







static char func_65(unsigned short p_66)
{
    short l_73 = 0xC201L;
    int l_80 = 3L;
    int l_81 = 0x78FD71F6L;
    char l_510 = 0xF4L;
    int l_511 = 0x9A530B49L;
    l_81 = ((safe_rshift_func_uint16_t_u_u((g_2 <= g_7), 14)) > (((safe_add_func_int16_t_s_s((l_80 = ((~((safe_mod_func_int32_t_s_s(l_73, (safe_lshift_func_uint16_t_u_s(l_73, p_66)))) == (0xD9L & ((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((g_2 || ((0xD991L != 0x709CL) ^ 0L)) | p_66), p_66)), 0x06A5L)) && l_73)))) != g_2)), l_73)) | l_73) >= g_13));
    if (p_66)
    {
        unsigned l_86 = 0x43C7D870L;
        int l_498 = 8L;
        char l_499 = 1L;
        l_499 = ((func_82(l_86, p_66, (safe_unary_minus_func_uint32_t_u((p_66 && p_66)))) && ((~((((func_82(p_66, l_86, (l_81 = func_82(g_124, (l_80 = (g_12 = (l_498 = (p_66 && 0UL)))), l_86))) ^ g_2) && 0xB1CAD426L) == l_86) <= l_86)) <= p_66)) ^ (-10L));
    }
    else
    {
        unsigned short l_521 = 0x5903L;
        int l_527 = 0L;
        if (((((g_7 && ((0x94L <= ((((safe_sub_func_int8_t_s_s(g_7, (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_66 > ((((safe_lshift_func_uint8_t_u_s(g_12, 3)) & p_66) <= (!(-8L))) & (g_100 & l_510))), g_2)), g_110)))) ^ l_510) == 1L) <= p_66)) || 0L)) > p_66) ^ 0x1A3A6D9EL) == l_511))
        {
            unsigned l_514 = 0xE596C879L;
            l_514 = (func_82(g_432, (safe_rshift_func_uint16_t_u_u(l_73, 8)), (g_2 <= 0UL)) < l_81);
        }
        else
        {
            unsigned l_522 = 1UL;
            int l_526 = 0xBE90F856L;
            l_81 = (l_80 = (l_527 = ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u(func_88((g_435 ^ p_66), g_326, l_521, p_66), 9)) ^ (g_525 = (g_417 >= ((+((l_522 = g_2) && (safe_mod_func_int8_t_s_s(((g_432 = (g_432 && p_66)) != p_66), 1UL)))) < g_466)))) == g_13) || p_66), 1L)), l_526)) | l_521)));
        }
        l_527 = p_66;
    }
    return p_66;
}







static unsigned func_82(unsigned p_83, char p_84, unsigned short p_85)
{
    int l_93 = 2L;
    int l_365 = (-1L);
    int l_408 = 0x38A84264L;
    int l_436 = 8L;
    unsigned short l_470 = 0xC0BBL;
lbl_212:
    g_7 = 0xD72D30A9L;
    if (func_88(l_93, p_84, (l_93 & (l_93 && (g_100 = (g_2 < (((safe_sub_func_int32_t_s_s(g_12, (((safe_sub_func_int32_t_s_s(7L, ((g_2 || g_13) < p_85))) != 0L) < p_84))) <= 0x050D6AE9L) == 0UL))))), l_93))
    {
        unsigned l_201 = 4294967293UL;
        int l_203 = 0x88579843L;
        unsigned char l_209 = 0x3CL;
        int l_236 = 0xB91DEDA0L;
        short l_265 = (-1L);
        if (p_85)
        {
            unsigned l_202 = 0xA607CF51L;
            int l_206 = (-1L);
            int l_237 = 0x632C09F9L;
            short l_261 = 1L;
            unsigned l_339 = 0xD62DBF7BL;
            unsigned short l_366 = 65529UL;
            for (g_110 = (-24); (g_110 < 10); g_110 = safe_add_func_uint32_t_u_u(g_110, 4))
            {
                char l_213 = 0x7BL;
                int l_216 = (-1L);
                unsigned char l_240 = 0xA7L;
                int l_264 = 1L;
                if (((g_145 = (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_202 = (safe_sub_func_uint16_t_u_u((~0UL), (((safe_lshift_func_uint8_t_u_s(l_201, 0)) >= g_177) >= g_100)))), g_177)), p_84))) < (((l_203 = p_85) <= (l_206 = ((safe_lshift_func_uint16_t_u_u(g_13, 6)) < 65533UL))) && p_85)))
                {
                    g_7 = ((safe_lshift_func_int16_t_s_u((248UL || l_209), 8)) > g_110);
                }
                else
                {
                    for (g_124 = 2; (g_124 == (-22)); g_124 = safe_sub_func_uint32_t_u_u(g_124, 2))
                    {
                        g_145 = (p_85 <= g_124);
                        if (g_12)
                            continue;
                    }
                    if (g_2)
                        goto lbl_212;
                    return l_213;
                }
                for (l_203 = (-9); (l_203 < 26); l_203++)
                {
                    if (((l_93 > (8UL == (p_84 >= l_213))) <= (65528UL <= p_84)))
                    {
                        l_216 = g_7;
                        return p_83;
                    }
                    else
                    {
                        int l_235 = (-1L);
                        l_237 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((l_235 = (safe_add_func_int16_t_s_s((l_206 = (0x4533L > (safe_sub_func_int16_t_s_s(p_83, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_7, 11)), (p_83 < ((g_124 < (p_84 >= (l_236 = ((safe_div_func_int8_t_s_s(l_93, l_235)) < (g_144 < l_206))))) == l_216)))))))), g_177))) && g_2) == 0x0DAAL), g_110)), g_145)), 8)) | (-1L));
                    }
                    if ((safe_sub_func_uint16_t_u_u(p_83, l_240)))
                    {
                        unsigned l_242 = 0UL;
                        l_242 = (safe_unary_minus_func_uint32_t_u(g_100));
                        if (l_240)
                            continue;
                    }
                    else
                    {
                        l_216 = (safe_lshift_func_uint16_t_u_s(p_83, 6));
                    }
                    if (p_85)
                        break;
                }
                l_237 = l_237;
                l_265 = (safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(g_100, (~g_12))) | (g_100 | ((safe_rshift_func_uint16_t_u_u((l_216 = 0x08A8L), ((safe_lshift_func_uint16_t_u_u(l_201, (p_85 = (safe_rshift_func_uint8_t_u_s(p_83, (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(249UL, (p_84 = l_261))), 4)), (l_203 = (l_264 = ((safe_div_func_int32_t_s_s(l_264, p_85)) >= p_83)))))))))) < l_93))) ^ p_83))) && l_93), l_240));
            }
            l_206 = func_88(((p_83 != (p_85 & 0x24B9L)) != (l_93 = (+(-7L)))), p_83, (l_203 = g_144), g_7);
            if ((l_237 = g_7))
            {
                short l_288 = 0xAD61L;
                int l_296 = (-4L);
                short l_331 = 0x711BL;
                for (l_236 = 0; (l_236 == (-21)); l_236--)
                {
                    int l_285 = 0x949A0C9DL;
                    int l_293 = 5L;
                    l_206 = (0x0B1250D9L && (p_84 != p_83));
                    for (g_110 = 0; (g_110 == 17); g_110++)
                    {
                        short l_278 = 0x4E76L;
                        l_93 = (((g_110 | 65535UL) | ((((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((g_12 = 0L), 3)) > l_278) == p_85) | g_145), 0xCAABL)) | (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((+(p_83 > (safe_mod_func_uint16_t_u_u(g_7, g_144)))), 0x6181L)), 0x6AL))) != l_209), p_84)), 0L)) != l_265) || p_84) > p_85)) < l_278);
                        l_288 = (5UL != ((g_2 || (g_100 & (g_144 = (l_285 ^ (((l_278 != 0UL) != p_85) & (l_93 ^ 0x2D8CL)))))) == 0x0438L));
                        l_93 = (((safe_mod_func_int8_t_s_s(((p_85 == (safe_lshift_func_int8_t_s_s((-1L), 5))) & g_2), (l_203 & (((l_293 = g_7) ^ ((((safe_mod_func_uint16_t_u_u((((p_83 < g_2) > ((((g_7 >= g_177) >= g_7) ^ p_83) == l_209)) > 2UL), p_83)) == l_285) && g_12) ^ 0x9470L)) >= 0x79B65F2BL)))) != g_2) || g_144);
                        g_177 = (g_145 ^ g_177);
                    }
                    l_296 = ((p_83 != p_83) < g_144);
                    if ((l_206 = (l_293 = (safe_div_func_uint32_t_u_u((g_2 > g_100), (1UL && (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((-1L), ((g_100 | (safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(l_293, g_144)) && l_93), g_110))) ^ p_85))), l_203))))))))
                    {
                        g_7 = 0L;
                        g_177 = (+g_7);
                        l_296 = (0x52L > 0UL);
                        g_177 = ((((((((g_12 = p_83) | (g_100 <= (safe_div_func_int32_t_s_s(0x5CAA7A5EL, (safe_add_func_int8_t_s_s((p_84 = (0x990CL == (l_237 = ((g_177 | l_288) && p_84)))), ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_93 >= 0UL), g_13)), 0xC1L)) & l_296))))))) != p_83) | p_83) >= (-1L)) > 0xFE88L) != g_124) == 65529UL);
                    }
                    else
                    {
                        unsigned short l_323 = 0xD97FL;
                        int l_332 = 0x72E7577DL;
                        g_110 = (safe_lshift_func_int16_t_s_u(p_83, 15));
                        l_93 = (l_293 && (l_293 || 1L));
                        l_332 = ((p_83 = (safe_mod_func_int32_t_s_s(p_83, g_144))) > ((l_201 || (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((l_323 >= p_85) && 0x4D25L), (safe_mod_func_int16_t_s_s(((g_100 = ((l_203 = ((g_326 = 0xDDL) & (((g_7 < ((safe_rshift_func_int16_t_s_s((p_85 <= g_100), 15)) <= g_100)) <= g_13) > 252UL))) != l_202)) && p_85), g_2)))), l_331))) | l_323));
                        l_296 = func_88(p_83, p_85, (p_83 >= (((p_83 <= (0x9B1EL | (!((~(safe_rshift_func_int16_t_s_s(1L, (!(l_332 = (~((safe_rshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((!0x4EL), g_177)) > l_339) && l_93), g_124)) == 0x62F63DB9L))))))) || g_145)))) && g_340) == g_110)), g_177);
                    }
                }
                return p_85;
            }
            else
            {
                unsigned short l_355 = 65527UL;
                int l_356 = 0x2E91BB18L;
                char l_367 = 0xFEL;
                l_356 = (((safe_sub_func_int32_t_s_s((g_340 = (g_110 = p_83)), l_209)) && (p_84 == (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((0xA2715473L && ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_145, ((safe_lshift_func_int16_t_s_u(l_237, 15)) ^ 255UL))), (p_84 < (safe_rshift_func_uint16_t_u_s(l_93, 11))))) ^ l_355)), p_83)), 6)))) & 0xCF1FL);
                l_367 = (safe_rshift_func_uint8_t_u_u(((-1L) && (safe_add_func_uint16_t_u_u(p_85, ((g_144 = ((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_12, (((((p_83 = l_365) <= l_365) >= l_366) < (g_124 || g_124)) || g_124))), p_84)) <= l_355)) > g_2)))), 1));
            }
        }
        else
        {
            char l_382 = 0xEDL;
            g_340 = (g_2 != ((p_83 || (((safe_div_func_int32_t_s_s(g_12, func_88((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((0x1B35FC2BL ^ 0xF66D644BL), 12)) >= (g_383 = (((p_83 = ((safe_lshift_func_uint8_t_u_s(g_7, ((((l_93 = ((l_365 < g_177) == (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_365, 4294967295UL)), g_340)))) && p_83) || l_382) && 0x5634L))) && g_13)) & p_85) >= 8UL))), 3)), p_85)), g_326, g_12, p_85))) < g_326) && g_383)) <= p_85));
        }
        for (g_145 = 0; (g_145 <= (-11)); g_145 = safe_sub_func_uint16_t_u_u(g_145, 8))
        {
            int l_388 = (-9L);
            for (g_12 = 0; (g_12 != (-13)); g_12 = safe_sub_func_int32_t_s_s(g_12, 8))
            {
                g_110 = p_85;
                l_93 = g_177;
            }
            l_388 = (l_236 || l_365);
        }
        g_110 = (((g_7 & (safe_unary_minus_func_uint16_t_u(l_201))) == (((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_83 ^ (l_203 = p_84)), 4)), g_7)) || p_85) > g_383), (safe_sub_func_int16_t_s_s((((0xBED7L < (g_145 || g_13)) | p_83) >= 1L), p_84)))) == g_145) != 0L)) >= 0x6BL);
        for (p_84 = 0; (p_84 >= 4); p_84 = safe_add_func_uint8_t_u_u(p_84, 5))
        {
            return l_93;
        }
    }
    else
    {
        unsigned l_426 = 0xF86EE01CL;
        int l_427 = (-10L);
        int l_428 = 0x0F9213A3L;
        char l_429 = 0x5DL;
        int l_493 = 1L;
        g_340 = (safe_div_func_int8_t_s_s(g_13, (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((func_88((p_85 || g_12), l_365, l_408, func_88((safe_mod_func_int16_t_s_s(((+0x4F53L) != (!(safe_rshift_func_uint16_t_u_s(((~(safe_div_func_uint16_t_u_u((g_417 = p_84), (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(func_88((safe_sub_func_uint32_t_u_u(0xFD4DCD57L, (l_427 = (safe_div_func_int8_t_s_s((l_426 = p_83), l_427))))), p_83, p_84, p_84), g_12)) <= l_365), l_428))))) > p_83), 3)))), g_12)), g_144, l_429, l_408)) || l_365) && 0x89027508L), 5)) != 5UL), 65535UL))));
        for (g_383 = 0; (g_383 <= 25); ++g_383)
        {
            unsigned short l_434 = 0UL;
            short l_469 = 0x2FE4L;
            int l_471 = 1L;
            l_93 = ((func_88(l_93, (g_432 >= (safe_unary_minus_func_uint16_t_u((0xF22A3EE8L & l_434)))), g_432, g_177) <= (((g_435 = 0xEFFB6EFAL) | (l_436 = p_85)) >= 0x8CL)) == g_144);
            if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((func_88((g_144 = 0x0B94L), (~(p_84 || p_85)), (g_100 = ((p_84 | l_428) && 0xCDF2B2EDL)), p_84) > (safe_div_func_int16_t_s_s(g_326, l_434))), l_434)), 12)) == p_85), l_93)), 1)))
            {
                short l_449 = 0xEEF4L;
                l_427 = (l_428 && p_83);
                l_449 = ((safe_mod_func_uint32_t_u_u(((p_85 == (p_84 > 0L)) >= g_340), 0x541A58AEL)) ^ (l_408 = p_84));
                l_93 = g_417;
                l_93 = l_365;
            }
            else
            {
                unsigned short l_452 = 1UL;
                int l_467 = 0x2C701E8AL;
                int l_468 = 6L;
                l_471 = (l_427 | (safe_div_func_uint16_t_u_u((g_453 = l_452), func_88(l_436, (0xBD37L && l_452), l_452, (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_85 >= (safe_lshift_func_int8_t_s_u(func_88(g_12, (l_468 = func_88((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_84 = ((safe_sub_func_int8_t_s_s((l_467 = (g_466 = p_84)), 0xB1L)) ^ p_83)), p_83)), p_83)), p_85, p_83, p_85)), l_469, l_470), g_100))), p_83)), l_426))))));
            }
            for (g_7 = 0; (g_7 <= (-23)); g_7 = safe_sub_func_int16_t_s_s(g_7, 6))
            {
                int l_485 = (-1L);
                int l_486 = 0x685A0F50L;
                for (g_144 = 23; (g_144 != 16); g_144--)
                {
                    char l_480 = 0xBCL;
                    g_417 = (l_486 = (l_485 = (((safe_sub_func_int16_t_s_s(g_12, 0L)) != (safe_mod_func_uint8_t_u_u((l_480 != g_144), (g_110 | g_177)))) || (safe_div_func_int16_t_s_s((p_84 <= ((safe_div_func_uint16_t_u_u(p_84, 0xA267L)) || l_480)), g_13)))));
                    if (l_434)
                        break;
                    l_471 = l_486;
                }
                return p_84;
            }
            if (p_85)
                break;
        }
        g_145 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_84, g_340)), 13));
        g_340 = (safe_add_func_int8_t_s_s((l_493 >= (safe_div_func_int8_t_s_s((-1L), (safe_rshift_func_int16_t_s_u((g_432 = (l_428 = (((p_83 | 0L) >= (g_417 <= func_88(g_326, g_466, g_432, g_435))) && 65535UL))), p_85))))), l_427));
    }
    l_408 = p_84;
    g_417 = (l_408 > (g_177 <= p_84));
    return l_408;
}







static int func_88(short p_89, int p_90, unsigned p_91, int p_92)
{
    int l_125 = 0x5427816DL;
    int l_126 = 0xF8735943L;
    int l_127 = 0x1830F2B0L;
    char l_146 = 0x32L;
    for (g_7 = (-15); (g_7 < 25); g_7 = safe_add_func_uint16_t_u_u(g_7, 9))
    {
        unsigned short l_105 = 0xFF34L;
        short l_136 = 0xABBAL;
        if (p_89)
        {
            char l_118 = 0xA1L;
            int l_121 = 6L;
            p_92 = (safe_mod_func_int16_t_s_s(((l_105 ^ (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_110 = p_91), 9)), (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_91, g_100)), (safe_unary_minus_func_int16_t_s(((g_12 | (p_89 = ((safe_div_func_int32_t_s_s(l_118, l_118)) < p_89))) & (safe_lshift_func_int8_t_s_s((~(g_12 > l_118)), l_118)))))))))) ^ p_92), p_92));
            l_121 = (-1L);
            p_92 = (safe_div_func_uint16_t_u_u((l_125 = (g_124 = l_118)), g_100));
        }
        else
        {
            unsigned l_141 = 0x726045FFL;
            l_127 = ((p_89 = 1L) < (l_126 = l_125));
            p_92 = (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_2, (safe_mod_func_uint16_t_u_u(g_13, g_124)))), 0xD4ECL)) && 0x787CL), 0x484BL));
            g_110 = l_136;
            p_92 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((l_141 ^ l_141) ^ g_7) & (g_100 >= p_89)), (safe_lshift_func_uint16_t_u_s((g_145 = ((~((g_144 || p_90) & g_13)) > g_12)), 5)))), g_13));
        }
        if (g_100)
            continue;
        p_92 = 0xE496E341L;
    }
    if (l_146)
    {
        int l_151 = 5L;
        int l_162 = 0L;
        unsigned short l_176 = 0x53C7L;
        p_92 = g_124;
        if (g_12)
            goto lbl_163;
lbl_163:
        g_110 = ((3UL < (p_91 || (g_12 == p_89))) <= (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((p_91 != l_151), p_89)), 9)) >= (((((safe_mod_func_uint16_t_u_u(((l_162 = ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(0x23L, (safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((p_90 != l_126), l_127)) | p_89), l_146)))), 5)) >= p_90)) != p_90), 0x6193L)) >= p_90) | g_100) >= p_89) ^ 0UL)) > g_124));
        g_7 = l_126;
        g_110 = (l_151 == (l_146 >= (safe_sub_func_uint16_t_u_u((g_100 >= (0x5DC08455L < (((safe_sub_func_uint8_t_u_u((l_126 = (g_177 = ((g_7 != (0xA0DE8031L == (safe_rshift_func_int16_t_s_u((p_92 ^ ((g_144 && (((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_176, p_89)), p_90)) || 0xF46CL) >= 0xFE84F9EDL)) >= (-1L))), p_91)))) && l_125))), p_90)) && g_124) > (-7L)))), g_124))));
    }
    else
    {
        unsigned short l_180 = 65535UL;
        p_90 = l_146;
        for (g_110 = 0; (g_110 < (-10)); --g_110)
        {
            return g_7;
        }
        l_180 = g_13;
        g_110 = (l_127 >= ((l_126 = ((4294967295UL != p_92) < (~(safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int32_t_s_s(p_92, (safe_add_func_int8_t_s_s((g_144 && ((p_89 == (g_2 >= (safe_sub_func_uint16_t_u_u(p_91, 0x36EAL)))) > 255UL)), 0xAEL)))) >= p_90) != p_92) || (-1L)), 2))))) <= l_180));
    }
    return p_91;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
