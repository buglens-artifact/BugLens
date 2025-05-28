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
   signed f0 : 1;
   short f1;
};


static int g_26 = 0L;
static union U0 g_77 = {1L};
static short g_81 = 0xD4F6L;
static unsigned short g_91 = 5UL;
static short g_93 = 0xB54DL;
static unsigned short g_194 = 0x00A5L;
static unsigned g_273 = 0x2F3D0092L;
static unsigned short g_369 = 0x8B21L;
static short g_390 = 9L;
static unsigned g_432 = 0x2B9A8F95L;
static int g_433 = 0x2A47882FL;
static short g_472 = 0L;
static char g_479 = 0x30L;
static short g_742 = 1L;
static char g_862 = 0x28L;
static unsigned g_1066 = 0UL;
static short g_1100 = 0xA47BL;



static unsigned func_1(void);
static unsigned func_15(unsigned short p_16, unsigned short p_17, unsigned char p_18, int p_19, unsigned p_20);
static unsigned short func_21(unsigned p_22, char p_23, short p_24, short p_25);
static short func_27(unsigned short p_28, int p_29);
static char func_30(char p_31);
static int func_34(unsigned char p_35, int p_36, int p_37, int p_38);
static char func_43(unsigned p_44, unsigned p_45);
static int func_47(union U0 p_48, char p_49, unsigned short p_50, unsigned char p_51);
static union U0 func_52(int p_53, unsigned char p_54, unsigned char p_55);
static unsigned short func_70(unsigned p_71, unsigned p_72, unsigned char p_73);
static unsigned func_1(void)
{
    int l_4 = (-1L);
    short l_1122 = 0x1444L;
    int l_1123 = 0L;
    l_1123 = (safe_lshift_func_int16_t_s_u(l_4, (safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((l_4 & (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_15(((l_4 , (func_21(g_26, ((func_27((func_30((safe_mod_func_int32_t_s_s(func_34((((-2L) | ((safe_add_func_uint32_t_u_u(3UL, (((~(l_4 != (((safe_add_func_uint32_t_u_u((((func_43(l_4, l_4) != l_4) == l_4) < 0x9AA5L), 0x6A81D68CL)) ^ g_26) || 1L))) <= 0x786C7A88L) && l_4))) , l_4)) , g_26), l_4, l_4, g_26), 4L))) && l_4), l_4) && g_26) ^ l_4), l_4, l_4) & l_4)) != g_1100), l_4, l_4, g_862, l_4), 0xB2C98314L)), g_26))), 0x8761L)) , l_1122), l_1122)) >= l_4), g_862))));

        g_77.f0 = l_4;

        return l_1123;
}







static unsigned func_15(unsigned short p_16, unsigned short p_17, unsigned char p_18, int p_19, unsigned p_20)
{
    char l_1119 = (-1L);
    for (g_472 = 0; (g_472 == (-7)); g_472 = safe_sub_func_uint8_t_u_u(g_472, 6))
    {
        int l_1116 = 0x191BF796L;
        p_19 = (safe_sub_func_int16_t_s_s(p_19, p_18));
    }
    g_433 = 0xEBA288FEL;
    p_19 = 0x03905A3BL;
    return g_81;
}







static unsigned short func_21(unsigned p_22, char p_23, short p_24, short p_25)
{
    int l_480 = 0x9BFA86D8L;
    short l_491 = 0L;
    int l_492 = 0xF64F763DL;
    unsigned l_493 = 3UL;
    union U0 l_526 = {0L};
    unsigned l_693 = 0x4C5228C2L;
    int l_694 = (-1L);
    unsigned char l_770 = 0x9EL;
    int l_783 = 1L;
    unsigned short l_788 = 1UL;
    int l_789 = 0xB7120AC1L;
    unsigned l_790 = 7UL;
    unsigned l_819 = 0x73D8B77DL;
    unsigned l_822 = 1UL;
    l_492 = func_43(l_480, (((+(((p_23 != (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((1UL == ((safe_lshift_func_int8_t_s_s(((((((safe_add_func_uint16_t_u_u(p_23, g_433)) ^ l_480) != g_93) , 6L) > 0x94089DC3L) , g_77.f1), 5)) , g_77.f1)), l_480)), l_480))) <= p_25) >= l_480)) >= (-3L)) , 4294967291UL));
    if (l_493)
    {
        int l_509 = 6L;
        int l_537 = 1L;
        union U0 l_695 = {-5L};
        int l_705 = 6L;
        unsigned l_706 = 8UL;
        unsigned l_728 = 6UL;
        if (g_432)
        {
            unsigned char l_496 = 0x67L;
            l_492 = (safe_lshift_func_uint16_t_u_s(0xE850L, 14));
            l_492 = 2L;
            l_492 = (l_496 > ((safe_sub_func_uint32_t_u_u(p_24, (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((0xBB3B64A9L || (l_480 , ((((safe_add_func_uint16_t_u_u(g_273, l_496)) , ((((safe_rshift_func_int16_t_s_u(((0xAFL == (253UL ^ (safe_add_func_int32_t_s_s(p_22, p_22)))) <= 0x69L), p_22)) <= l_492) == l_496) & 1UL)) ^ 1UL) & l_509))), 1L)), 0xF1L)))) <= g_390));
        }
        else
        {
            unsigned l_532 = 6UL;
            int l_557 = 0x5FE35067L;
            int l_570 = (-1L);
            union U0 l_577 = {7L};
lbl_576:
            g_433 = 0x162FA79AL;
            for (p_22 = 5; (p_22 >= 50); ++p_22)
            {
                unsigned l_515 = 4294967295UL;
                short l_523 = 0L;
                int l_617 = (-1L);
                union U0 l_619 = {1L};
                for (l_480 = 0; (l_480 > (-12)); l_480 = safe_sub_func_uint32_t_u_u(l_480, 5))
                {
                    short l_520 = 8L;
                    int l_558 = 5L;
                    if ((func_30(g_26) , (~2L)))
                    {
                        return g_91;
                    }
                    else
                    {
                        unsigned short l_514 = 0x20A6L;
                        char l_533 = 2L;
                        int l_534 = 0x7E0B9DB8L;
                        l_514 = p_23;
                        g_433 = (l_515 == (safe_sub_func_uint32_t_u_u(func_30((p_22 && (0x41L < ((l_514 >= (safe_mod_func_uint16_t_u_u(65527UL, l_509))) || g_390)))), 0x319029A4L)));
                        l_534 = (l_520 , (safe_mod_func_int32_t_s_s(l_533, p_25)));
                        l_526.f0 = p_25;
                    }
                    if (p_22)
                        break;
                    for (g_479 = 0; (g_479 <= (-28)); g_479 = safe_sub_func_uint16_t_u_u(g_479, 8))
                    {
                        short l_542 = 1L;
                        l_537 = 0x135CE45CL;
                        if (p_24)
                            continue;
                        l_537 = p_22;
                        l_557 = ((((safe_add_func_int8_t_s_s((0x206ECABFL && ((safe_add_func_int32_t_s_s(g_369, ((l_542 ^ (safe_sub_func_uint16_t_u_u(p_23, l_542))) < (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_492, 7)), ((safe_lshift_func_int8_t_s_s(p_23, 6)) | g_390))), (((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(g_91, l_532)) , p_24) ^ p_25), 0x208D0039L)) | l_520) && 65527UL)))))) && 1UL)), g_472)) >= g_479) | l_480) || l_537);
                    }
                    l_558 = 0L;
                }
                if (p_24)
                    break;
                for (l_491 = 0; (l_491 != 19); l_491++)
                {
                    for (g_93 = 20; (g_93 != (-15)); g_93 = safe_sub_func_uint16_t_u_u(g_93, 2))
                    {
                        unsigned char l_569 = 0UL;
                        l_557 = (safe_add_func_uint8_t_u_u(g_26, g_194));
                        l_526.f0 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_509, l_569)), 0));
                        return p_25;
                    }
                    g_77.f0 = p_22;

                                    }
                if (l_537)
                {
                    unsigned l_575 = 1UL;
                    int l_601 = 0xFD0442BEL;
                    int l_618 = (-1L);
                    unsigned l_621 = 0x6F312882L;
                    if (func_43(l_570, p_22))
                    {
                        l_575 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(p_23, g_273)), 6));
                        if (g_273)
                            goto lbl_576;
                    }
                    else
                    {
                        unsigned char l_580 = 0UL;
                        l_537 = 0x21561EAFL;
                        g_433 = ((p_24 , (((g_81 | ((((l_577 , ((0xB3598A36L < (safe_add_func_uint8_t_u_u(g_26, l_580))) & ((p_23 , (safe_mod_func_int32_t_s_s((((p_22 ^ l_492) , g_91) != g_433), l_491))) , l_523))) < 0L) < 1L) , g_93)) , 0x0483A6C7L) <= (-1L))) != g_432);
                        l_601 = ((safe_mod_func_int8_t_s_s((p_25 && (safe_sub_func_uint32_t_u_u((0x3D07L && (~(safe_sub_func_int32_t_s_s(l_575, 0x1BA6AE79L)))), (safe_lshift_func_uint8_t_u_s((((g_194 <= (((l_580 >= (safe_lshift_func_uint16_t_u_u(((~((g_369 == (safe_sub_func_int16_t_s_s(l_580, ((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((!((l_515 == p_24) != 1L)) >= l_580), g_472)), 7)) & g_432) >= 0L) ^ p_25)))) >= g_93)) ^ p_24), 1))) >= 2UL) <= p_23)) , g_81) < p_22), 2))))), 0x5EL)) || l_580);
                        l_537 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_22, 4)), (g_81 , l_509)));
                    }
                    for (g_93 = 22; (g_93 > 27); g_93++)
                    {
                        int l_612 = 0L;
                        char l_620 = 0xCDL;
                        l_537 = ((((((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((l_612 , g_369) && (((p_22 && (l_515 , l_537)) , ((safe_mod_func_int8_t_s_s(g_273, g_433)) == ((safe_add_func_int32_t_s_s(p_22, g_194)) ^ g_433))) ^ l_617)) < l_601), 15)), l_480)) <= p_22) >= l_509) <= p_23) && g_81) != l_618) >= g_390) < p_24);
                        if (p_23)
                            continue;
                        l_537 = g_390;
                        l_621 = p_24;
                    }
                    g_433 = (g_91 & (0x87F9L >= (l_621 <= l_526.f0)));
                    g_433 = (p_25 > (safe_mod_func_uint32_t_u_u((g_479 , (((p_24 != (g_432 != p_23)) ^ 0L) <= l_480)), l_619.f0)));
                }
                else
                {
                    unsigned short l_638 = 3UL;
                    l_526.f0 = p_22;
                    for (g_479 = 8; (g_479 <= (-17)); g_479--)
                    {
                        char l_631 = 1L;
                        l_537 = (safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint32_t_u(p_23)) > (p_24 , l_523)) | 0x00L), p_25));
                        if (g_472)
                            break;
                        g_433 = (p_23 , 6L);
                        g_433 = (g_479 , (func_30(p_25) > p_22));
                    }
                    if (p_22)
                        continue;
                    g_77.f0 = (((safe_sub_func_int32_t_s_s(0x05021547L, g_432)) >= p_25) | (safe_rshift_func_uint8_t_u_u(((p_24 | ((safe_sub_func_int16_t_s_s(l_638, ((p_25 ^ ((safe_sub_func_uint16_t_u_u(func_43(g_26, p_24), p_24)) , 4294967293UL)) == p_23))) >= 0L)) >= p_24), g_433)));

                                    }
            }
            if (((safe_lshift_func_int8_t_s_s(l_526.f0, 4)) ^ (p_25 | ((safe_lshift_func_int16_t_s_u(g_369, 10)) & ((0x441EL != g_273) | ((((((((safe_mod_func_uint16_t_u_u(p_23, p_23)) & ((safe_sub_func_int16_t_s_s(p_25, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_23, g_26)), g_81)))) == 0x80L)) , 0x65L) ^ 2L) , g_194) != 8UL) || l_537) , l_509))))))
            {
                union U0 l_657 = {0xBF30543AL};
                g_433 = ((l_509 , (((safe_rshift_func_uint16_t_u_s((p_24 > g_479), (safe_rshift_func_uint8_t_u_u(func_30(l_509), (l_657 , l_480))))) | (g_472 && (l_493 <= g_194))) , p_24)) && p_22);
                l_492 = (l_509 | (l_526.f0 && g_369));
            }
            else
            {
                unsigned short l_658 = 65528UL;
                unsigned char l_661 = 0UL;
                union U0 l_670 = {0x3DF25CE0L};
                unsigned char l_677 = 8UL;
                if (l_493)
                {
                    l_492 = l_658;
                    l_661 = (safe_add_func_uint32_t_u_u(l_658, p_22));
                    g_433 = (g_433 , ((g_432 ^ ((0x9860L == (safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint8_t_u_u(g_472, (l_661 , (func_30(g_273) != (((p_25 ^ (g_479 || p_23)) && p_25) | l_658))))) && g_273)))) >= g_433)) >= l_492));
                }
                else
                {
                    unsigned char l_676 = 0x86L;
                    for (l_661 = 0; (l_661 <= 7); ++l_661)
                    {
                        int l_667 = 0L;
                        l_667 = p_25;
                    }
                    l_526.f0 = ((safe_mod_func_uint16_t_u_u((g_369 >= (func_43(p_25, g_273) <= 0UL)), p_24)) || 6UL);
                    for (p_24 = 0; (p_24 < (-19)); p_24 = safe_sub_func_int8_t_s_s(p_24, 7))
                    {
                        union U0 l_678 = {3L};
                        g_433 = ((g_273 != 0xBF99L) & (1UL | (l_678 , l_677)));
                    }
                }
                g_433 = (p_25 <= ((safe_rshift_func_int16_t_s_s((p_22 & l_658), p_24)) & p_23));
            }
            if ((l_695 , 0L))
            {
                for (g_91 = 0; (g_91 < 48); g_91 = safe_add_func_uint16_t_u_u(g_91, 9))
                {
                    return p_24;
                }
            }
            else
            {
                short l_700 = 0x9253L;
                g_77.f0 = (~(0x77L >= (p_22 , (safe_add_func_uint32_t_u_u((g_433 != p_23), (((func_43(l_695.f0, l_700) & g_479) <= 7L) < l_695.f0))))));

                                l_577.f0 = func_70((func_43(g_432, (+(((g_91 ^ (safe_rshift_func_uint16_t_u_u(((l_557 , g_91) != ((((((g_81 && p_23) <= (((l_694 | ((safe_rshift_func_int16_t_s_s(func_47(g_77, g_433, l_700, l_705), p_24)) , 0x3BL)) != g_390) != l_706)) , l_532) , p_23) , 0x88D9L) , 0x44L)), l_577.f0))) | 0x0A621B5AL) <= p_25))) != l_706), p_23, g_432);
                for (p_23 = 0; (p_23 != 27); p_23++)
                {
                    int l_718 = 1L;
                    if (g_273)
                        break;
                    for (l_537 = 24; (l_537 != 20); l_537 = safe_sub_func_int32_t_s_s(l_537, 3))
                    {
                        unsigned short l_711 = 0x403AL;
                        int l_719 = (-7L);
                        g_433 = p_24;
                        l_711 = p_23;
                        l_719 = (((((p_24 >= (((!(g_81 & (g_390 > 0x3403L))) , (func_27((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(p_22, g_432)), (1UL <= (safe_add_func_uint32_t_u_u(l_509, l_532))))), p_23) ^ l_509)) || l_718)) == 1L) , g_77.f1) || l_570) < 65535UL);

                                            }
                    l_695.f0 = (l_700 != (((safe_sub_func_uint16_t_u_u((l_509 <= (l_570 <= 0L)), ((((safe_rshift_func_int8_t_s_u((-3L), 6)) && (g_77 , p_25)) , 0x5DADL) > l_718))) , g_273) != l_718));
                }

                            }
        }

                l_728 = (((safe_mod_func_uint8_t_u_u(((((0UL >= (0xC968L != l_492)) & g_472) & func_27(l_526.f0, p_25)) & (((g_369 > (l_537 == l_509)) , g_81) && 0x874AL)), 0xADL)) && 1UL) >= g_273);

                l_537 = (g_194 != 0x25L);
        for (p_23 = 0; (p_23 > (-23)); p_23--)
        {
            g_77.f0 = p_25;

                    }

            }
    else
    {
        char l_755 = 0x64L;
        int l_757 = (-10L);
        for (p_24 = 2; (p_24 == 21); ++p_24)
        {
            unsigned l_735 = 0x952E4C3FL;
            unsigned l_756 = 1UL;
            l_735 = 0xBE5E3F44L;
            l_694 = g_273;
            l_757 = ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_22, (p_25 <= g_77.f1))), 0xB7L)) & 0L);
            if (p_25)
                break;
        }
        l_526.f0 = p_25;
    }

        g_77.f0 = (((l_493 && 0x6E37L) >= ((safe_sub_func_uint16_t_u_u(((4294967295UL | (g_390 , ((((((((((0xF733L ^ (((0x8187L | p_22) == l_480) && (safe_mod_func_int32_t_s_s(((p_22 | l_526.f0) == g_472), (-9L))))) > p_24) & p_25) == g_81) & g_472) , p_23) , g_433) || g_369) == 0UL) <= g_390))) , p_23), l_694)) <= 255UL)) || g_273);

        if (func_34((g_472 , (safe_mod_func_int16_t_s_s(((((((l_770 > (p_25 | (+((safe_lshift_func_int8_t_s_s((((l_493 & (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((g_433 , ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((l_783 & (((safe_sub_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s((func_70(((p_23 <= ((~((3L & (l_492 || g_432)) & p_24)) == l_493)) ^ 0x4C7A623DL), g_194, p_22) || l_788), p_23)) || g_91) < l_492) >= 1UL) , g_390) ^ l_789), l_790)) == 0L) != 0UL)) & 0xED76L), 0x1EL)) < l_788), p_24)), g_93)) , 8L)) && g_194) & l_783), p_24)), l_526.f0))) >= g_26) == p_23), l_770)) , (-1L))))) || g_472) != 0x5023L) > p_22) ^ p_22) && l_480), 0xA715L))), l_693, l_492, p_24))
    {
        unsigned l_799 = 0x3773F015L;
        int l_823 = 1L;
        g_77.f0 = (g_390 , (((1L == (p_23 != (safe_lshift_func_int8_t_s_u(g_273, 5)))) <= (((safe_mod_func_int32_t_s_s(g_81, 0xF41CECACL)) <= (safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(p_22, (~p_22))) || g_91) == g_194), 0xBFL))) , 1UL)) , p_22));

                l_799 = l_480;
        for (p_25 = 24; (p_25 <= 8); p_25 = safe_sub_func_uint8_t_u_u(p_25, 1))
        {
            unsigned l_802 = 0x72F0392EL;
            unsigned l_842 = 4294967288UL;
            int l_872 = 8L;
            if (((l_802 <= ((l_802 < ((safe_lshift_func_uint16_t_u_u(p_23, 9)) <= (((safe_add_func_uint16_t_u_u(l_799, (((safe_lshift_func_uint16_t_u_s(func_30((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(1L, 11)) & (safe_lshift_func_uint16_t_u_u(p_22, 15))) | ((l_526 , (safe_sub_func_int8_t_s_s(p_23, (safe_sub_func_int32_t_s_s((p_23 || l_783), g_81))))) , p_23)), l_693))), g_433)) ^ g_433) < l_789))) | p_25) != l_819))) | l_802)) , l_802))
            {
                l_822 = (safe_lshift_func_uint8_t_u_s(8UL, 6));
                l_526.f0 = (-1L);
                l_823 = (0x7DE6L < (-2L));
                g_433 = (l_492 | 0x5A9C98DCL);
            }
            else
            {
                unsigned short l_828 = 0xD556L;
                int l_843 = (-1L);
                g_433 = (((safe_rshift_func_int16_t_s_u(7L, (safe_rshift_func_uint16_t_u_s(l_828, 7)))) || (safe_unary_minus_func_uint16_t_u((l_828 < (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_25, ((safe_mod_func_uint32_t_u_u(p_25, 0xA4EEBC3CL)) <= (0UL || (((((safe_lshift_func_uint8_t_u_s(func_30((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0x99CCL, l_802)), l_828))), l_842)) , 0xFF9269D6L) , g_81) <= l_770) | g_432))))) > p_25), l_799)))))) , 7L);
                l_843 = p_24;
            }
            l_823 = (g_194 | l_802);
            for (g_369 = 2; (g_369 == 56); g_369 = safe_add_func_int8_t_s_s(g_369, 3))
            {
                union U0 l_867 = {0x95F48701L};
                for (g_472 = (-24); (g_472 != 9); g_472 = safe_add_func_uint8_t_u_u(g_472, 1))
                {
                    char l_870 = 0xEEL;
                    int l_871 = 1L;
                }
            }
        }
    }
    else
    {
        int l_932 = 0x832339B7L;
        char l_944 = 0x86L;
        union U0 l_958 = {1L};
        int l_1016 = (-1L);
        int l_1090 = 8L;
        unsigned l_1104 = 0x2F22A449L;
        l_492 = ((l_822 ^ p_25) < func_30((g_26 , ((safe_sub_func_uint16_t_u_u(g_26, func_30(g_81))) >= (func_43((((safe_mod_func_uint8_t_u_u(((((0xFD16L || (g_81 | ((safe_add_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(((((g_432 || l_788) | l_493) ^ p_25) , 5UL), l_932)) <= 2L) != g_742) != p_22), 0UL)) > l_788))) == 0UL) , l_932) > l_932), 0xD7L)) , g_472) , g_81), l_932) > l_493)))));
lbl_1067:
        g_433 = func_30((0UL > (p_23 != ((safe_rshift_func_uint16_t_u_u((0xCB0FL || (safe_rshift_func_uint16_t_u_u(l_932, g_91))), g_194)) > 0xDE18L))));
        if (((safe_mod_func_int16_t_s_s(3L, p_25)) , ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_932, func_27(((safe_unary_minus_func_int32_t_s((l_944 != 4294967294UL))) == (func_30(((((g_432 & (((safe_mod_func_uint16_t_u_u(g_390, p_25)) > ((safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(p_22, g_433)) , l_932) || 0x47800640L), 0xD1L)) < l_493)) || l_789)) & 1UL) < l_944) ^ p_24)) != 4294967293UL)), l_770))), 1)) | p_23)))
        {
            unsigned short l_978 = 0x1440L;
            int l_989 = 0x91C480BFL;
            int l_1018 = 0x7235D7BFL;
            unsigned short l_1036 = 0x396CL;
            char l_1039 = 0xDEL;
            unsigned short l_1052 = 65531UL;
            short l_1091 = (-8L);
            l_789 = ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((g_273 > (safe_sub_func_uint32_t_u_u((((((safe_sub_func_uint16_t_u_u((+(p_23 > l_480)), (((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_24, (-10L))) ^ ((p_23 && p_24) , g_390)), 13)) && g_432), l_932)) , p_22) <= 65528UL))) != p_25) , l_789) <= 1L) == 1L), p_22))), l_978)) >= p_22), 4)) , p_24);
            if (((safe_lshift_func_uint16_t_u_u(l_978, 5)) & (-1L)))
            {
                int l_998 = 0x08E21E7DL;
                l_932 = p_23;
                if (g_742)
                {
                    short l_981 = 0xE761L;
                    g_433 = ((((~g_472) , l_981) , (safe_add_func_int32_t_s_s((((0xC2FFL ^ (safe_rshift_func_int16_t_s_s((((0x4AL ^ (safe_unary_minus_func_uint32_t_u(p_22))) < (0xC24ED0ABL <= 1UL)) < (safe_sub_func_uint16_t_u_u((g_273 & ((g_194 | 0xE724L) > g_862)), 0UL))), g_81))) , l_978) >= 0UL), p_25))) <= l_958.f0);
                    l_989 = (p_22 >= (l_981 ^ g_81));
                }
                else
                {
                    return p_25;
                }
                l_694 = ((p_23 != ((((0x7D9A7D37L >= (g_26 <= (g_862 , (l_526.f0 >= (p_25 > func_27((safe_lshift_func_uint8_t_u_s(p_22, (safe_add_func_int16_t_s_s(p_22, ((((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((g_433 , g_472) < 1UL) , 0x48L), p_25)) != l_998), (-1L))) && p_25) , g_273) , p_22))))), l_989)))))) == 0xD3C4L) < (-5L)) , g_742)) & l_944);
            }
            else
            {
                unsigned char l_1003 = 255UL;
                for (g_369 = 0; (g_369 < 25); ++g_369)
                {
                    unsigned l_1017 = 1UL;
                    l_492 = ((((l_1003 == l_989) , l_932) >= g_91) != p_25);
                    l_958.f0 = (((g_194 && (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((!((0x25L ^ (((g_432 >= 0L) >= l_788) <= ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((p_24 < (((g_77.f1 | 0x5F7BBBC8L) == g_433) > l_989)), 1)) != g_91), 14)) != 1L))) == 1UL)) > l_1016), l_1003)), p_22))) ^ p_24) , (-1L));
                    l_1017 = g_369;
                    l_1018 = p_25;
                }
            }
            for (p_22 = (-25); (p_22 > 22); p_22++)
            {
                unsigned short l_1035 = 0xDF8EL;
                int l_1068 = 0L;
                if (((((p_22 & (func_43(p_25, ((((safe_lshift_func_uint16_t_u_s(0x2127L, (safe_lshift_func_int8_t_s_u(((g_77.f1 , ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((l_1018 > ((safe_sub_func_int8_t_s_s((((p_22 , p_23) < 0x0816L) , l_1035), p_23)) && p_25)) , g_91), 12)), g_742)) == 0x28L)) >= l_480), 3)))) < 0L) | 0xB916L) && l_1035)) , p_22)) < p_22) , g_77.f1) , (-8L)))
                {
                    return g_862;
                }
                else
                {
                    unsigned l_1055 = 0xBF901E4BL;
                    g_77.f0 = (safe_sub_func_int16_t_s_s(g_26, g_433));

                                        if (((l_1035 > (((func_30(g_479) || ((safe_add_func_uint32_t_u_u((l_1055 <= (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((func_52(((p_23 ^ ((safe_add_func_int16_t_s_s(g_93, p_24)) == (safe_lshift_func_int8_t_s_s((g_93 , ((safe_sub_func_uint16_t_u_u(p_24, p_23)) , g_26)), 5)))) < p_22), g_390, g_432) , l_944), g_479)), p_24))), p_23)) | p_22)) >= g_432) < 0x14E6C07EL)) , l_1055))
                    {
                        g_1066 = 0xDB3D2A78L;
                        if (l_770)
                            goto lbl_1067;
                        l_989 = l_944;
                    }
                    else
                    {
                        unsigned short l_1079 = 65535UL;
                        l_1068 = g_91;
                        l_989 = (0xEBL || (((func_30((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(1L, ((((((((((+((safe_mod_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((p_25 , 0L) & ((((l_1016 , l_1079) >= l_1055) < g_432) > 0x189626CDL)), p_25)), g_93)) ^ 4294967288UL) < 0xCBL) , g_862), l_1016)) > 0x81L)) < 2UL) > g_1066) , p_24) | 0x81L) < l_1016) == 0x69AB6CE7L) , g_742) >= p_25) == l_788))) > l_480), g_81))) < g_479) || p_22) != g_479));
                    }
                    return p_24;
                }
            }
            l_989 = (safe_lshift_func_uint16_t_u_u((g_472 > ((func_27((g_81 == l_932), g_479) < 0xD1L) || l_978)), 0));
        }
        else
        {
            unsigned char l_1103 = 255UL;
            int l_1105 = (-4L);
            l_1105 = ((+(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((0xB98DL && ((safe_add_func_uint16_t_u_u((((p_23 || (g_479 , g_91)) > (+(((safe_lshift_func_uint8_t_u_s(((p_22 >= 0x5323L) && (g_1100 && l_493)), g_1100)) && g_472) > l_1103))) , 0xFBE2L), p_25)) != l_790)) < (-10L)), g_472)), 15)) >= 0UL) == p_23)) , g_742);
            for (g_1066 = (-22); (g_1066 > 25); g_1066 = safe_add_func_uint16_t_u_u(g_1066, 6))
            {
                g_433 = (g_77.f1 > (func_43(l_493, ((((safe_mod_func_int8_t_s_s((g_390 < ((p_22 > (p_25 , (p_22 > (p_25 , (p_22 != (safe_rshift_func_int16_t_s_s((g_433 || l_491), g_93))))))) , l_1090)), l_819)) & 0xB3F3F6C3L) ^ p_22) , g_742)) == 0xDE7AL));
            }
        }

            }

        return g_91;
}







static short func_27(unsigned short p_28, int p_29)
{
    unsigned short l_402 = 1UL;
    int l_462 = 0x48B5D1EFL;
    for (g_77.f1 = 21; (g_77.f1 <= 8); g_77.f1 = safe_sub_func_uint16_t_u_u(g_77.f1, 6))
    {
        short l_389 = (-1L);
        int l_409 = 0L;
        unsigned short l_452 = 1UL;
        g_390 = ((l_389 , g_81) <= 1L);
        if ((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_91 , ((safe_unary_minus_func_int32_t_s((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_28, (safe_sub_func_uint16_t_u_u((5UL > p_29), l_402)))), func_43(g_390, g_390))) <= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_273, p_29)) ^ 0x9AF5CD88L), 3))) , g_369) <= l_389) , g_77.f1))) != g_273)), (-7L))), g_369)))
        {
            unsigned char l_416 = 3UL;
            unsigned l_444 = 4294967286UL;
            int l_453 = 8L;
            for (g_390 = (-8); (g_390 != (-11)); g_390 = safe_sub_func_int16_t_s_s(g_390, 4))
            {
                int l_442 = 0L;
                if (p_28)
                    break;
                l_409 = (g_77 , g_369);
                if ((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(l_416, func_43((g_91 & (l_409 < p_29)), (safe_mod_func_int32_t_s_s(p_29, (safe_mod_func_uint16_t_u_u(0x34E9L, p_29))))))) ^ g_369) >= l_389), p_28)), g_390)))
                {
                    unsigned char l_431 = 0x4FL;
                    g_432 = (g_390 <= ((+(l_402 , ((((safe_lshift_func_int8_t_s_u(((1UL <= func_43(g_77.f1, g_81)) & g_77.f1), 2)) <= p_29) != ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((func_43(((p_28 < l_431) , g_194), l_402) || p_29), 11)) > 254UL), 0)) , 0L)) <= g_93))) == 0x6B60L));
                }
                else
                {
                    short l_449 = 4L;
                    g_433 = 0x08639D33L;
                    for (p_28 = 0; (p_28 >= 35); p_28++)
                    {
                        unsigned char l_443 = 0xDEL;
                        l_409 = func_43((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_273, ((1UL > (l_442 || (func_43((l_442 == 0xF7L), l_443) != 0UL))) ^ (0UL >= 1UL)))), 3)), l_444);
                        if (p_28)
                            continue;
                        g_433 = 0x39597B68L;
                        l_453 = (!(safe_lshift_func_int8_t_s_s(g_433, ((g_433 , l_389) != (safe_rshift_func_int8_t_s_s((l_449 >= (g_432 , ((safe_mod_func_uint16_t_u_u(l_443, g_369)) | p_29))), (l_452 , 8L)))))));
                    }
                }
                l_462 = (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_442, func_43(g_81, (l_409 < func_43((0x6EL == p_29), p_28))))), g_26)) <= l_409), 6)) , l_389), l_402));
            }
            if (p_28)
                continue;
        }
        else
        {
            unsigned char l_469 = 2UL;
            l_409 = ((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((((l_469 <= l_402) && (safe_add_func_int32_t_s_s((g_472 < l_469), (safe_sub_func_uint32_t_u_u(g_433, func_43(p_29, l_452)))))) ^ g_77.f1), l_469)) == g_369) > 0x52A6L), 1UL)), l_469)) || 0UL);
        }
    }

        l_462 = p_29;
    l_462 = ((safe_add_func_uint16_t_u_u((g_479 >= 0UL), 0xE87AL)) <= 0x5396L);
    return g_81;
}







static char func_30(char p_31)
{
    int l_249 = 0x75E7628BL;
    unsigned l_250 = 0x1879496EL;
    int l_251 = 0xA41BE1EEL;
    unsigned short l_274 = 0xF444L;
    union U0 l_324 = {0x980F1695L};
    for (g_93 = 0; (g_93 == (-14)); --g_93)
    {
        unsigned l_244 = 0x396BCCB6L;
        union U0 l_325 = {4L};
        int l_328 = 0xDB836AC6L;
        unsigned char l_335 = 252UL;
        short l_340 = 0xEE10L;
        l_244 = p_31;
        if (p_31)
            goto lbl_365;
        if ((~(safe_lshift_func_int16_t_s_s((((l_244 | (((((((safe_add_func_int8_t_s_s(g_26, g_26)) != (7UL != (g_194 >= (l_249 < ((g_91 == g_91) || g_91))))) & l_249) ^ l_250) || p_31) != p_31) != l_250)) , l_251) != 0x4BL), g_194))))
        {
            union U0 l_270 = {0L};
            g_77.f0 = (0UL == (g_81 , (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0xEFDCL <= (1L ^ (p_31 >= ((((p_31 >= l_244) || (g_81 <= (((((g_194 | p_31) , (-1L)) < 0x06L) ^ 0UL) , p_31))) , p_31) || g_26)))), l_244)), p_31))));

                        g_273 = ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((((func_52(func_47(g_77, p_31, g_93, ((g_93 & (safe_lshift_func_int8_t_s_s((((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(0x74A8A973L, (((l_270 , g_194) || (safe_mod_func_int16_t_s_s(func_43(l_244, func_43(g_93, g_26)), 0x265CL))) != 0UL))) && 0x7D22A03BL), g_77.f0)) && 6L) >= l_244) > g_93) <= l_270.f0), g_77.f0))) ^ p_31)), g_81, g_93) , 0xBA22A9C7L) , p_31) ^ l_251) > 0x8EL), g_194)) != 0xC7B452A9L), 0)), g_26)) >= l_270.f0);
            l_274 = ((l_250 | g_194) & 0x45L);
            if ((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0x7CB76F65L, (g_93 <= p_31))), ((safe_lshift_func_int16_t_s_u((l_244 != p_31), 14)) < (func_52((((safe_rshift_func_int16_t_s_s(g_93, ((safe_add_func_uint8_t_u_u(0x4BL, l_251)) & 1L))) <= p_31) , 0xC1BC387DL), g_273, l_244) , p_31)))))
            {
                unsigned l_295 = 4294967295UL;
                l_251 = (l_270.f0 ^ (p_31 == (((p_31 == g_273) != g_77.f0) & (((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(func_43((g_194 || (((safe_rshift_func_int8_t_s_u((p_31 == ((safe_lshift_func_int16_t_s_s(l_270.f0, (((safe_mod_func_uint8_t_u_u(g_91, p_31)) != g_194) && l_251))) <= 0xB2BE1894L)), 6)) >= p_31) , g_81)), p_31), 4)), l_295)) ^ 0x10D4DAC2L) && l_244))));
                if (p_31)
                    break;
                g_77.f0 = p_31;
            }
            else
            {
                int l_302 = 6L;
                l_302 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((g_194 & ((g_93 || (((func_70((p_31 , g_93), (4UL | l_302), l_244) <= (p_31 ^ g_93)) >= 0x17929216L) <= 0xC584L)) && l_244)) ^ l_302) , l_274) , l_270.f0), g_26)), 3UL));
                g_77.f0 = g_273;
            }
        }
        else
        {
            union U0 l_315 = {0xF2878E98L};
            l_251 = (g_26 == p_31);
            if ((p_31 | l_325.f0))
            {
                unsigned l_338 = 4294967287UL;
                g_77.f0 = (l_328 == (p_31 != l_250));

                                l_338 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((l_335 & func_43(g_81, g_81)) == (safe_mod_func_int32_t_s_s(l_315.f0, g_26))), 7)), 3)), (g_93 <= (((~p_31) ^ ((g_77.f0 ^ p_31) && g_93)) || g_91)))) , p_31);
            }
            else
            {
                char l_339 = (-9L);
                l_340 = l_339;
                l_325.f0 = (safe_mod_func_int8_t_s_s(p_31, (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(p_31, 10)), 10))));
            }
        }
        l_324.f0 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_328, ((safe_lshift_func_uint8_t_u_u(((+(safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(p_31, 4)) & ((safe_rshift_func_uint8_t_u_s(((!(safe_sub_func_int16_t_s_s(0xD4D0L, ((0x9EL < (g_77 , l_324.f0)) && ((!func_43(p_31, p_31)) , l_274))))) > l_325.f0), 0)) < g_91)), p_31)) && 0x7CL), 1)), g_194))) != 0x49L), g_194)) == g_93))) > 0xB8D56C0CL), p_31));
    }
lbl_365:
    l_324.f0 = p_31;
    for (g_91 = 26; (g_91 <= 1); g_91 = safe_sub_func_uint32_t_u_u(g_91, 4))
    {
        short l_368 = 0L;
        g_77.f0 = (l_250 || l_368);

                g_369 = g_77.f0;
        for (l_368 = 0; (l_368 >= (-12)); l_368 = safe_sub_func_uint32_t_u_u(l_368, 2))
        {
            char l_375 = 0x03L;
            int l_386 = 1L;
            g_77.f0 = ((-1L) | ((1L == 6L) > p_31));
            l_386 = (safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s(func_70((l_375 , (safe_sub_func_int8_t_s_s((g_77.f0 ^ ((((safe_add_func_uint16_t_u_u(65535UL, g_91)) || ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_368 > (l_250 > (l_375 , (safe_add_func_uint32_t_u_u(func_43(g_93, l_274), g_81))))), g_194)), p_31)) >= 0x9BEDL)) >= g_26) || p_31)), p_31))), l_375, p_31), 255UL))));
        }
        if (p_31)
            continue;
    }
    return g_194;
}







static int func_34(unsigned char p_35, int p_36, int p_37, int p_38)
{
    char l_62 = 9L;
    union U0 l_98 = {-8L};
    unsigned l_204 = 0x8E6F13F4L;
    unsigned l_208 = 0UL;
    int l_230 = 0xA57C4A03L;
    g_93 = func_47(func_52((p_37 , (((p_36 == 0x2C67A955L) > (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(0x4ADEL, (safe_add_func_int8_t_s_s(((0x77ED469FL <= l_62) | p_36), g_26)))) >= 0x32L), 4))) ^ g_26)), g_26, l_62), p_36, l_62, l_62);
    if (((0UL > (((((p_38 <= (p_36 ^ l_62)) , (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(3L, func_47(l_98, p_38, (func_47(func_52(l_62, p_36, p_37), l_62, p_38, p_36) <= g_93), g_93))) < l_98.f0), g_91))) || p_38) <= l_98.f0) <= 0L)) >= p_37))
    {
        unsigned char l_108 = 0x66L;
        union U0 l_109 = {0x11FA983EL};
        if ((safe_lshift_func_int8_t_s_s(g_93, 2)))
        {
            int l_105 = 0x335DC65FL;
            union U0 l_144 = {-1L};
            unsigned l_201 = 0UL;
            g_77.f0 = ((g_77.f0 ^ (((safe_add_func_int32_t_s_s(((p_37 | (((safe_rshift_func_int8_t_s_u(0x7CL, 6)) || (p_36 != l_105)) , ((((safe_sub_func_int32_t_s_s((func_43(g_81, p_35) , (((l_108 <= p_37) || g_93) , l_105)), 0xE59D8630L)) != 0xF3L) >= 0x37EFL) | p_38))) , (-10L)), 0x9DBF79CEL)) && 0UL) < 0x6AL)) , g_91);
            if (g_81)
            {
                int l_112 = 0x0E4E2A80L;
                int l_121 = 0x33B0C632L;
                l_98.f0 = func_43((((l_109 , (((safe_mod_func_int32_t_s_s((l_112 == 0x1A517225L), (g_81 , ((254UL > (safe_rshift_func_int8_t_s_s((0x5F6DL >= (safe_lshift_func_uint8_t_u_s(0x8EL, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((func_43(l_108, g_81) > 0x8A3620CEL), 0UL)), 4294967290UL))))), l_98.f0))) && l_62)))) < 3UL) , l_109.f0)) == g_93) && l_112), l_108);
                l_121 = 0xB16568BFL;
            }
            else
            {
                short l_132 = 1L;
                int l_137 = 2L;
                l_98.f0 = (safe_sub_func_uint8_t_u_u((p_37 , (1UL >= 0L)), (0L & ((safe_mod_func_int16_t_s_s(l_62, func_47(func_52(p_38, (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(p_36, (safe_add_func_uint16_t_u_u(0xFD63L, (l_62 ^ l_105))))) | g_26), g_93)), l_98.f0), l_105, l_132, l_109.f0))) & g_26))));
                if (func_43(l_132, l_105))
                {
                    l_105 = (p_38 ^ (safe_sub_func_uint8_t_u_u(0UL, 255UL)));
                }
                else
                {
                    int l_146 = 0L;
                    for (p_38 = 0; (p_38 == 22); p_38++)
                    {
                        int l_145 = (-6L);
                        l_137 = (g_81 < g_81);
                        l_146 = (0x90L && ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_37, (safe_rshift_func_int16_t_s_s((0L ^ func_70(l_98.f0, g_93, ((func_47(l_144, g_91, l_145, g_77.f0) < 0x45L) > p_36))), 11)))) == g_91), 11)) , g_77.f0));
                    }
                }
            }
            if ((0x47ABF92CL && (((safe_rshift_func_uint8_t_u_u((((-1L) >= (safe_add_func_int32_t_s_s((4UL ^ (safe_unary_minus_func_int16_t_s(func_43(((safe_sub_func_uint16_t_u_u((l_144 , 0x9456L), p_38)) , (g_77.f0 | 0xF3A3L)), p_36)))), g_81))) | p_38), 4)) , 0UL) != g_93)))
            {
                int l_171 = (-1L);
                p_38 = 0x9C59BD72L;
                for (l_98.f1 = (-24); (l_98.f1 != (-28)); l_98.f1--)
                {
                    char l_166 = (-2L);
                    for (p_37 = 21; (p_37 != 28); p_37 = safe_add_func_int32_t_s_s(p_37, 1))
                    {
                        p_36 = (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_36 || (g_81 | (!((safe_sub_func_int8_t_s_s(l_166, p_36)) >= func_43((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((l_171 | g_93) && 0xB2C2L), 0xABL)) , 0x02L), g_91)), p_38))))) >= 65535UL), 0UL)), p_36));
                        return l_171;
                    }
                    for (g_77.f1 = 1; (g_77.f1 < 27); g_77.f1++)
                    {
                        if (p_37)
                            break;
                        g_194 = (safe_sub_func_uint8_t_u_u((((p_35 > (safe_mod_func_int8_t_s_s(g_91, (safe_add_func_int16_t_s_s((0UL >= (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((l_171 && (g_93 >= (g_91 != (safe_add_func_uint32_t_u_u(g_26, 1L))))) & (((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_38, g_77.f1)), 0x362DD0B5L)), p_38)) == l_166) >= 4294967294UL)), g_77.f1)) , g_91), l_171))), l_166))))) , p_36) & 4UL), 2UL));
                        l_105 = 0x38ADB6E0L;
                        l_144.f0 = ((l_109.f0 | ((safe_rshift_func_uint16_t_u_s(g_77.f1, p_36)) != ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(0x4F35L, (0x9E60L && 1UL))) || l_201), (func_43(((1L & (safe_rshift_func_int8_t_s_s((l_98.f1 | p_37), 4))) > p_38), p_38) , g_26))) == 9UL))) | l_204);
                    }

                                    }

                                                l_105 = l_109.f0;
            }
            else
            {
                char l_207 = (-2L);
                for (p_35 = 0; (p_35 > 8); p_35 = safe_add_func_int16_t_s_s(p_35, 1))
                {
                    union U0 l_211 = {1L};
                    unsigned short l_213 = 0xDEB2L;
                    l_98.f0 = l_207;
                    if (l_207)
                    {
                        l_208 = (g_26 != (0UL ^ l_144.f0));
                    }
                    else
                    {
                        union U0 l_212 = {0xB6F47332L};
                        g_77.f0 = p_35;
                        p_36 = (safe_sub_func_uint16_t_u_u(func_47(l_211, g_194, func_47(l_212, p_37, g_26, g_77.f0), p_37), l_213));
                        return g_81;
                    }
                    g_77.f0 = p_37;
                    g_77.f0 = l_207;
                }
            }

                                    p_37 = ((safe_mod_func_uint16_t_u_u(g_26, (safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((p_37 && g_81), (safe_lshift_func_uint16_t_u_u((g_194 == (safe_lshift_func_uint8_t_u_u((l_201 , (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(p_37, (9UL & (l_109.f0 , (safe_add_func_uint8_t_u_u(p_36, g_81)))))), 2))), l_230))), 12)))), l_109.f0)))) , 5L);
        }
        else
        {
            char l_241 = 0x10L;
            p_37 = (p_37 , (((safe_lshift_func_int16_t_s_u((((p_38 >= ((g_77.f0 >= ((safe_lshift_func_int8_t_s_s(p_36, ((safe_rshift_func_uint16_t_u_s(((p_35 && ((safe_sub_func_uint32_t_u_u(l_109.f0, (((safe_rshift_func_int8_t_s_s(((((p_35 ^ p_37) <= l_208) || 0xC14FL) && 65535UL), g_194)) >= 0x27L) && (-6L)))) ^ g_91)) | l_204), p_37)) , l_204))) || l_241)) && g_26)) , g_81) && (-1L)), l_241)) == g_26) , 0L));
            p_38 = 3L;
        }

                    }
    else
    {
        return p_37;
    }

            return p_38;
}







static char func_43(unsigned p_44, unsigned p_45)
{
    unsigned short l_46 = 0x87B3L;
    return l_46;
}







static int func_47(union U0 p_48, char p_49, unsigned short p_50, unsigned char p_51)
{
    int l_90 = 0x6DE0D780L;
    unsigned l_92 = 0x62928133L;
    p_48.f0 = g_26;
    l_92 = (((func_52(g_81, (g_77.f0 , g_77.f0), ((((p_48.f0 || (((((((safe_lshift_func_int8_t_s_s((p_48.f0 , (safe_rshift_func_uint8_t_u_u(1UL, (5L <= (safe_sub_func_uint32_t_u_u(((((~func_43((safe_rshift_func_int8_t_s_u((+(((((0xFDL <= g_26) & 3UL) != 0x1CL) & g_26) && 0x2C83L)), p_50)), l_90)) , g_91) > 0x6005BF03L) | 0x9E0FL), l_90)))))), p_48.f0)) ^ p_49) != g_77.f0) & g_26) , g_91) <= g_77.f0) | p_50)) != p_49) < p_51) ^ l_90)) , p_50) || l_90) , p_51);
    return g_77.f0;
}







static union U0 func_52(int p_53, unsigned char p_54, unsigned char p_55)
{
    unsigned short l_63 = 0xEFBAL;
    unsigned short l_79 = 65535UL;
    int l_80 = 0xB3DAD933L;
    l_80 = (0UL & (((g_26 < (~(2L > 0x9E98C534L))) >= (l_63 , (((safe_sub_func_uint16_t_u_u((l_63 < g_26), g_26)) ^ (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(func_70(l_63, l_63, g_26), g_26)), g_26))) == 246UL))) | l_79));
    return g_77;

    }







static unsigned short func_70(unsigned p_71, unsigned p_72, unsigned char p_73)
{
    union U0 l_76 = {-1L};
    int l_78 = 0L;
    g_77.f0 = ((((p_71 & (safe_rshift_func_uint16_t_u_u((l_76 , func_43((p_72 >= (l_76.f0 ^ p_71)), (g_77 , func_43((p_73 , func_43((l_76.f0 | (g_26 & l_78)), p_71)), p_73)))), 9))) , g_77.f0) > l_76.f0) != g_77.f0);
    return g_77.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
