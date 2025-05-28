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



static unsigned char g_4 = 250UL;
static unsigned char g_67 = 0x2AL;
static unsigned short g_93 = 65527UL;
static volatile int g_94 = (-1L);
static int g_299 = 0L;
static unsigned g_366 = 0x99CC331DL;
static unsigned g_435 = 0xA4C23F52L;
static unsigned g_480 = 4UL;
static unsigned g_550 = 0x1DA16B08L;
static char g_574 = 0xD7L;



static unsigned func_1(void);
static char func_2(unsigned short p_3);
static unsigned char func_11(unsigned char p_12, short p_13);
static short func_29(unsigned p_30, int p_31);
static unsigned short func_36(unsigned char p_37, unsigned short p_38, unsigned p_39, short p_40);
static unsigned char func_41(unsigned p_42, short p_43, char p_44);
static short func_45(unsigned p_46);
static unsigned func_47(short p_48, char p_49, unsigned p_50, unsigned short p_51, unsigned short p_52);
static short func_53(unsigned p_54, unsigned p_55);
static int func_70(short p_71, unsigned short p_72, int p_73, unsigned short p_74, int p_75);
static unsigned func_1(void)
{
    int l_367 = 0x04D39E5BL;
    unsigned l_379 = 7UL;
    unsigned char l_430 = 2UL;
    int l_459 = 0x7725E164L;
    unsigned short l_549 = 1UL;
    l_367 = (func_2(g_4) && g_4);
    if (g_4)
    {
        short l_370 = 0x341CL;
        int l_401 = 0xB9BEDD66L;
        char l_408 = (-1L);
        for (g_93 = 10; (g_93 > 27); g_93++)
        {
            int l_377 = 0x9D284AD6L;
            unsigned l_378 = 0x2B4C9BABL;
            l_370 |= g_299;
            l_367 = (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((g_67 < func_45((g_93 ^ 0x8F4CL))), 5)) ^ (safe_mod_func_int8_t_s_s(((func_70(l_377, func_70(l_370, g_93, g_366, ((func_70(func_70(l_377, g_299, l_367, l_367, l_367), g_299, g_67, g_93, g_67) | 0x1FE8B0F7L) && g_4), g_4), l_378, g_93, l_379) > g_366) > l_370), g_67))), 0xFEA1L));
            for (g_4 = 25; (g_4 >= 11); g_4 = safe_sub_func_int16_t_s_s(g_4, 4))
            {
                short l_384 = 0xE792L;
                if (g_299)
                    break;
                for (l_378 = 0; (l_378 != 17); ++l_378)
                {
                    char l_387 = (-9L);
                    int l_390 = 0x6379C17EL;
                    l_377 = l_384;
                    l_390 = ((((g_299 <= 0x896BA196L) == ((safe_add_func_int16_t_s_s(func_70(((g_67 >= l_387) > (((g_4 == (l_378 | func_70((safe_rshift_func_uint16_t_u_s(l_379, 11)), (~l_384), l_379, g_67, l_387))) > g_4) || g_67)), g_93, l_367, l_370, l_387), g_299)) != 0x9FA5L)) > l_367) <= 4L);
                    g_94 = (safe_lshift_func_int16_t_s_s((g_67 | (safe_mod_func_uint32_t_u_u(4294967291UL, (safe_mod_func_int8_t_s_s(g_299, (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_370, 0)), 11))))))), 13));
                }
            }
            return g_93;
        }
        l_401 = 1L;
        l_367 = ((((l_367 <= (0xDAF6L && l_379)) & ((((~((g_4 | (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((l_401 <= g_94), (g_366 && g_93))) && g_366) || l_367), l_408)), g_366))) <= (-1L))) > g_299) ^ g_4) != l_367)) || l_408) & g_366);
        g_299 |= (+(safe_div_func_int16_t_s_s(0x1905L, 65535UL)));
    }
    else
    {
        char l_428 = 0x02L;
        unsigned char l_429 = 0x0FL;
        int l_478 = 0x51C464B6L;
        short l_479 = 4L;
        short l_481 = 3L;
        unsigned short l_548 = 65535UL;
        for (g_4 = 0; (g_4 <= 23); g_4 = safe_add_func_int32_t_s_s(g_4, 8))
        {
            for (l_367 = 25; (l_367 != 14); l_367 = safe_sub_func_int16_t_s_s(l_367, 2))
            {
                char l_415 = 0xC1L;
                return l_415;
            }
            if (g_4)
                goto lbl_545;
        }
        if ((safe_sub_func_int32_t_s_s((-8L), (func_53((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((func_36((0xB4F66C18L | (65535UL <= func_47(l_428, l_429, g_4, l_428, l_379))), g_4, g_4, g_366) ^ l_428) || l_428), l_379)) > g_299), g_366)) > l_428), 0x91L)), 1)), g_299)), g_366) < 0x52E4L))))
        {
            char l_434 = 0L;
            int l_482 = 0x614948C1L;
            unsigned l_499 = 0xE3F4236DL;
            short l_505 = 0x71EDL;
            short l_525 = 0xA71EL;
            if (l_430)
            {
                unsigned l_431 = 0UL;
                unsigned l_451 = 0x68CAE07EL;
                char l_486 = 3L;
                unsigned char l_521 = 255UL;
                g_435 ^= func_36(g_299, g_94, (~l_431), (safe_mod_func_uint8_t_u_u(0UL, l_434)));
lbl_446:
                g_94 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(g_4, g_94)) != l_428) >= 0x585DL), (safe_lshift_func_int16_t_s_s(1L, 14)))), g_435));
                for (g_4 = 0; (g_4 == 3); ++g_4)
                {
                    int l_458 = 0x1B0A8133L;
                    int l_489 = 1L;
                    if (l_429)
                        goto lbl_446;
                    l_459 ^= ((func_2(l_434) > g_4) >= (+((safe_rshift_func_int8_t_s_u(l_451, 4)) >= (g_435 != (safe_rshift_func_int16_t_s_s(g_435, (safe_sub_func_int8_t_s_s(l_367, (l_458 > ((g_435 < g_435) < 3L))))))))));
                    if (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((-9L), 4)), (l_434 >= ((((l_451 >= g_299) | (l_458 ^ ((+(l_451 || ((safe_div_func_int32_t_s_s((0x2DL != g_435), (safe_sub_func_uint32_t_u_u((!func_45(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0x0DL, g_435)) < g_67), l_478)) || 0xC26755BEL))), g_4)))) || 0x0DA8BD92L))) == g_4))) < l_458) == g_435)))), l_479)), g_366)) || 0x900CL), g_93)) <= g_480))
                    {
                        l_481 &= (l_429 & 0x17L);
                        l_482 = 0L;
                    }
                    else
                    {
                        unsigned char l_485 = 0x64L;
                        int l_498 = (-1L);
                        l_482 = (safe_sub_func_int8_t_s_s(func_70(l_485, l_485, (g_94 != g_67), g_4, l_486), ((((safe_mod_func_int32_t_s_s(9L, (-5L))) | l_479) < l_482) >= g_299)));
                        l_367 |= (l_489 < (g_299 & l_458));
                        l_499 = func_11(g_4, (0xB82DL || (~(+((safe_div_func_uint32_t_u_u((g_435 < ((safe_add_func_int16_t_s_s(l_482, ((safe_div_func_uint8_t_u_u((g_480 & (func_70(((safe_rshift_func_int8_t_s_u((l_498 >= l_428), (l_478 > (g_480 & l_481)))) && 0x9752L), g_435, l_485, g_4, g_67) ^ 0L)), l_434)) >= 0x4E938482L))) && l_481)), (-1L))) ^ 3UL)))));
                    }
                }
                for (l_481 = 24; (l_481 == 28); l_481 = safe_add_func_int16_t_s_s(l_481, 7))
                {
                    char l_524 = 0x01L;
                    for (l_379 = 0; (l_379 != 47); l_379++)
                    {
                        char l_504 = 0xEBL;
                        l_459 = l_504;
                        return l_505;
                    }
                    for (l_430 = (-6); (l_430 >= 6); ++l_430)
                    {
                        unsigned l_514 = 0xF87B978AL;
                        int l_526 = (-1L);
                        l_526 = ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(251UL, (safe_sub_func_int16_t_s_s(l_514, ((safe_rshift_func_uint8_t_u_u((0UL & ((l_521 ^ l_514) == func_45(l_486))), 4)) && (((safe_add_func_uint8_t_u_u(0xABL, (func_70((!l_499), l_524, l_514, g_4, l_521) >= l_525))) || 0xCE7EL) == 5UL)))))) || (-6L)), 1)) ^ 0x6129L);
                        l_526 &= (g_94 || (g_67 > g_435));
                    }
                    g_299 = (((safe_add_func_int16_t_s_s(g_299, (0x7EACL ^ (safe_sub_func_int16_t_s_s((func_53(func_53(g_299, g_93), func_45(g_94)) <= g_435), g_299))))) == l_431) && 0xFBL);
                }
            }
            else
            {
                g_94 = 0x275C3BD3L;
                for (g_299 = 0; (g_299 == (-22)); g_299--)
                {
                    short l_533 = 0x2F03L;
                    g_94 = 6L;
                    g_94 = l_533;
                }
            }
            l_478 ^= ((l_479 != ((g_4 == ((-1L) >= (-6L))) & (((safe_add_func_uint32_t_u_u(g_435, (-7L))) & ((safe_mod_func_int16_t_s_s((0L <= g_299), (safe_add_func_int32_t_s_s((g_4 > g_299), l_428)))) != 0x7F97L)) < g_4))) && g_4);
        }
        else
        {
            int l_544 = (-3L);
            l_478 = (safe_mod_func_int16_t_s_s(l_478, ((0xC043L | (safe_add_func_int16_t_s_s(l_459, g_4))) & func_29(g_4, l_429))));
            return l_544;
        }
lbl_545:
        l_367 |= (l_429 != g_435);
        l_549 |= (safe_add_func_uint16_t_u_u(l_548, g_4));
    }
    g_94 = g_550;
    if ((safe_rshift_func_int8_t_s_u(l_379, 4)))
    {
        int l_553 = 0x00793415L;
        g_299 &= l_553;
        g_299 = g_94;
    }
    else
    {
        char l_556 = 0x57L;
        int l_575 = 0L;
        int l_576 = (-1L);
        int l_581 = 0x3B2AD67EL;
        g_299 = (((func_36(g_93, (safe_rshift_func_int16_t_s_s(g_435, 0)), l_556, g_94) & 1UL) || g_480) != (((safe_mod_func_uint8_t_u_u(253UL, g_67)) != l_556) >= 0x7A4429F5L));
        for (l_379 = 0; (l_379 >= 2); l_379 = safe_add_func_int16_t_s_s(l_379, 1))
        {
            int l_573 = 0L;
            g_574 ^= (safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(g_4, l_556)), ((l_556 | (-3L)) | func_29(((l_556 | (((g_94 == (!(l_573 >= func_70(func_70(l_379, l_556, g_480, l_573, l_367), l_573, g_93, l_430, l_573)))) == 0xC288L) == (-1L))) <= l_573), l_573)))) || l_573), l_430)), l_573)) | 0xBF59170CL), l_556));
            l_576 = ((g_550 == (func_2(l_573) <= (l_459 <= (l_575 ^ l_573)))) == 0L);
            if (g_93)
            {
                g_94 = func_53(g_550, l_367);
            }
            else
            {
                unsigned short l_579 = 7UL;
                for (g_435 = 26; (g_435 >= 26); g_435 = safe_add_func_int32_t_s_s(g_435, 3))
                {
                    g_299 &= (!l_573);
                    g_299 = l_459;
                    return l_579;
                }
                return l_579;
            }
        }
        if (l_430)
        {
            unsigned l_580 = 0UL;
            l_580 |= g_366;
            g_94 = g_550;
        }
        else
        {
            l_581 = func_45(g_299);
        }
        g_94 = l_556;
    }
    return g_435;
}







static char func_2(unsigned short p_3)
{
    int l_5 = 0x84B81147L;
    int l_6 = 0L;
    l_6 = l_5;
    g_366 = (safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((6L > func_11((safe_mod_func_int8_t_s_s(g_4, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_6, 13)), 7)))), ((safe_lshift_func_int8_t_s_s(l_6, 1)) <= p_3))), p_3)) && ((((safe_div_func_uint32_t_u_u(p_3, func_11(p_3, l_5))) >= g_4) || 0x4374L) && p_3)), l_6));
    return p_3;
}







static unsigned char func_11(unsigned char p_12, short p_13)
{
    unsigned l_56 = 6UL;
    int l_339 = (-1L);
    unsigned char l_357 = 0xFAL;
    if ((safe_sub_func_uint16_t_u_u(0x018DL, g_4)))
    {
        short l_24 = 0L;
        int l_326 = (-1L);
        int l_327 = 0x37E7697FL;
        unsigned char l_338 = 0xDDL;
        if (((l_24 == (safe_lshift_func_uint8_t_u_u(((g_4 && 0x5BL) < ((p_13 <= (((safe_sub_func_uint8_t_u_u((func_29((((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(func_36(func_41(g_4, ((((func_45(func_47(func_53(l_56, g_4), l_56, l_24, p_12, l_24)) & l_24) > (-1L)) == (-5L)) | 1L), g_4), g_4, l_24, g_4), l_24)) | l_56), p_13)) <= p_12) || l_56), g_4) & p_12), p_12)) | 0UL) || l_24)) == (-1L))), g_4))) ^ 1UL))
        {
            g_299 |= p_13;
        }
        else
        {
            unsigned char l_325 = 0x93L;
            l_325 = p_12;
            l_327 |= l_326;
            g_94 = (0x4389L > ((safe_lshift_func_uint16_t_u_s(l_56, 12)) || ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((l_325 | (g_94 <= ((((safe_add_func_uint8_t_u_u(g_299, p_13)) < p_12) | 0L) > l_338))), 0)) ^ 1L), 0xDBBCF27EL)) || g_94)));
        }
    }
    else
    {
        int l_354 = 0x9DFCBD08L;
        l_339 ^= 0x1244A164L;
        l_339 = (safe_div_func_int8_t_s_s(p_13, (safe_lshift_func_int16_t_s_s((!(safe_sub_func_int32_t_s_s((g_94 || (safe_sub_func_int32_t_s_s((0x3BE4AEF5L || (g_4 <= func_36(l_339, (safe_sub_func_int32_t_s_s(((p_12 ^ (safe_lshift_func_uint16_t_u_u(func_29((safe_sub_func_uint8_t_u_u(l_354, (safe_sub_func_uint32_t_u_u(func_29(((g_4 < func_70(l_56, l_354, p_12, g_67, p_12)) | 0xDC099E89L), g_67), 0x465673B9L)))), l_339), g_4))) || g_299), p_12)), g_93, g_4))), 0xDA80F472L))), 0xBFD188BAL))), 6))));
    }
    l_339 = (((((-2L) & func_41(p_12, p_12, ((l_357 > (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_13, (safe_div_func_uint8_t_u_u(255UL, p_13)))), l_357))) >= ((~((-1L) >= g_94)) <= 0x89D8L)))) != 0x2FL) <= p_12) > l_357);
    l_339 |= 9L;
    return l_339;
}







static short func_29(unsigned p_30, int p_31)
{
    short l_313 = 0L;
    int l_324 = 7L;
    g_94 = l_313;
    for (g_67 = 0; (g_67 <= 14); g_67++)
    {
        volatile unsigned l_316 = 4294967295UL;
        l_316 = g_94;
        g_299 = p_30;
        for (p_31 = 0; (p_31 < 23); ++p_31)
        {
            l_324 = (p_30 & (l_316 < ((((g_299 != (safe_unary_minus_func_uint16_t_u(65535UL))) ^ p_31) >= 0L) > (func_70(p_30, p_30, g_4, g_299, g_93) >= 0x217CL))));
        }
        return g_299;
    }
    l_324 ^= l_313;
    return p_31;
}







static unsigned short func_36(unsigned char p_37, unsigned short p_38, unsigned p_39, short p_40)
{
    g_94 = ((g_4 == (safe_mod_func_uint8_t_u_u(p_38, p_39))) <= 1L);
    return g_4;
}







static unsigned char func_41(unsigned p_42, short p_43, char p_44)
{
    unsigned l_271 = 0UL;
    int l_276 = 0x52BEC052L;
    unsigned l_305 = 0x4D639060L;
    int l_310 = 0x148711DFL;
    if ((((g_93 || (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(p_44, 3)), 1))) >= ((safe_lshift_func_int16_t_s_s(g_94, 3)) < (p_43 < (0x8037L == (1UL & g_67))))) & (safe_mod_func_int16_t_s_s(func_70(l_271, l_271, l_271, l_271, l_271), p_42))))
    {
        l_276 = (0x9791142BL ^ (3UL >= (4UL | (+(safe_sub_func_uint16_t_u_u((~l_271), (!(safe_lshift_func_uint8_t_u_u(g_94, 4)))))))));
    }
    else
    {
        short l_277 = 1L;
        l_277 = (+1L);
    }
    l_276 = (g_94 >= g_93);
    if ((!func_70(p_42, p_42, ((p_42 | func_70(p_43, ((safe_sub_func_int32_t_s_s((func_70(g_93, p_43, (safe_sub_func_uint32_t_u_u(p_42, (safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_42, p_42)) < p_44), 65535UL)))), p_44, l_276) && p_43), p_42)) != 0xAAL), l_276, l_276, l_276)) || g_67), g_67, g_93)))
    {
        short l_286 = 0xD8B4L;
        g_94 = l_286;
        return l_276;
    }
    else
    {
        unsigned char l_287 = 0x19L;
        char l_298 = 0L;
        int l_309 = 9L;
        g_299 ^= ((l_287 & (safe_div_func_int16_t_s_s(p_44, ((l_287 > ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_67, l_276)), (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(1L, l_298)), func_70(g_94, l_276, p_42, g_4, l_298))))) | g_4)) && 0xD36BEF08L)))) != 65534UL);
        l_276 = ((func_53(l_287, l_287) < p_44) <= (((safe_sub_func_uint8_t_u_u(255UL, (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((((func_45(p_42) > l_305) || (((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_s(((l_305 | g_93) | l_309), l_287)) == (-1L)))) & l_298) | 0L)) > p_43) < l_309))), l_310)))) ^ p_44) && l_298));
        g_94 = g_299;
    }
    return g_299;
}







static short func_45(unsigned p_46)
{
    char l_258 = (-8L);
    g_94 = (l_258 | (safe_add_func_int8_t_s_s(0x59L, 0xEEL)));
    return l_258;
}







static unsigned func_47(short p_48, char p_49, unsigned p_50, unsigned short p_51, unsigned short p_52)
{
    unsigned l_76 = 0xF396434DL;
    unsigned l_80 = 0x2871EB1CL;
    int l_86 = (-1L);
    unsigned short l_112 = 65528UL;
    unsigned short l_158 = 0UL;
    int l_218 = 0L;
    int l_257 = 0x1C9418E7L;
    for (p_48 = 21; (p_48 != (-22)); p_48--)
    {
        unsigned char l_83 = 255UL;
        int l_95 = 0xCBB28B9DL;
        int l_144 = 0xD83CB06CL;
        char l_157 = (-1L);
        l_86 = ((1L < (func_70(l_76, (((safe_unary_minus_func_uint32_t_u(func_53((safe_add_func_int8_t_s_s(((func_53(g_67, l_80) | (safe_rshift_func_int8_t_s_s(g_4, 0))) > l_76), g_4)), (+l_83)))) && p_51) < g_4), g_4, g_4, p_51) & l_83)) >= g_4);
        if ((safe_sub_func_uint8_t_u_u(p_50, ((safe_sub_func_uint8_t_u_u((func_53(l_86, g_4) >= (~((safe_lshift_func_uint16_t_u_u(p_52, 5)) | 0x330CFEF6L))), p_52)) != ((0x9DA5L == (g_4 && g_4)) > l_83)))))
        {
            g_93 = g_4;
            g_94 |= 1L;
            l_95 ^= p_50;
            g_94 &= (safe_add_func_uint16_t_u_u(0x616DL, (func_53(p_48, p_52) ^ p_48)));
        }
        else
        {
            char l_115 = (-1L);
            int l_160 = 3L;
            unsigned l_189 = 4UL;
            unsigned short l_208 = 0xC73CL;
            if (((0xC8L ^ l_86) < (((safe_sub_func_uint16_t_u_u(p_48, (((p_52 < (safe_sub_func_int16_t_s_s((g_94 > ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_112, (func_53(func_53(p_51, ((func_53(p_51, (safe_mod_func_int8_t_s_s(p_51, g_4))) != p_49) >= 0xADL)), l_115) <= l_115))), 7)) && l_115), 4294967291UL)) | g_4), p_52)) == l_95)), l_83))) & p_48) >= g_4))) < g_93) & p_51)))
            {
                unsigned l_118 = 0x4F9042C8L;
                int l_123 = (-1L);
                for (p_51 = 5; (p_51 <= 25); p_51++)
                {
                    l_123 ^= func_70(l_115, p_48, l_118, g_94, (safe_mod_func_uint32_t_u_u(g_4, (0xE5CEL && (safe_rshift_func_int8_t_s_u(p_50, p_50))))));
                    l_86 = p_50;
                    l_86 = g_94;
                    l_123 = (g_4 <= g_94);
                }
                if (func_53(p_50, (safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((((safe_div_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((g_94 == (safe_sub_func_uint16_t_u_u(65526UL, (g_93 || ((~((safe_mod_func_uint16_t_u_u(0x7CB9L, p_49)) < p_50)) == 0UL))))) == ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((g_67 < g_67) <= g_93), 0)), p_49)), g_93)) > l_118)), l_83)) ^ g_93) != p_52), g_67)) ^ l_144) < p_49) != p_49), g_4)) & 1UL), p_51))))
                {
                    g_94 = p_52;
                }
                else
                {
                    unsigned char l_149 = 1UL;
                    int l_150 = 0x4590A917L;
                    l_150 = (((safe_mul_func_int8_t_s_s((p_51 || (func_53(p_52, (safe_add_func_uint16_t_u_u(1UL, 2L))) != 0x91C45913L)), (g_93 == p_51))) > ((g_93 || l_149) | 0xAC17L)) | p_50);
                }
                l_86 |= p_52;
                l_157 = func_70(l_123, g_4, l_115, func_53((safe_lshift_func_uint8_t_u_s((g_94 | 0xCCE49B20L), 1)), (safe_mod_func_uint16_t_u_u((func_53(p_49, p_49) && (safe_sub_func_uint8_t_u_u(3UL, l_123))), p_48))), l_76);
            }
            else
            {
                int l_159 = 7L;
                l_159 &= l_158;
                if (g_4)
                    continue;
                l_160 = l_115;
            }
            l_86 = ((safe_div_func_int32_t_s_s(((l_86 & ((safe_sub_func_int8_t_s_s((l_158 == (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_86 >= ((safe_sub_func_int8_t_s_s((0x54L || ((safe_lshift_func_uint8_t_u_s(((((3L > ((safe_sub_func_int32_t_s_s(l_160, (safe_lshift_func_int8_t_s_s(p_51, (g_67 < 0x289B7103L))))) < (-1L))) && p_51) >= p_49) ^ g_4), l_157)) >= 0x96L)), g_94)) || g_94)), 0x262D627FL)), g_93))), 0x61L)) != 0x2C1CL)) == p_49), 3L)) > 0x03L);
            if (((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((0x156A7B95L <= l_80), (safe_div_func_uint32_t_u_u(l_160, (-1L))))), p_48)) >= ((p_51 > l_112) ^ 0xE6F0L)))
            {
                int l_183 = (-7L);
                l_95 |= p_50;
                l_86 ^= (func_70(l_183, g_94, p_51, (g_93 == (p_50 > (safe_sub_func_uint16_t_u_u((+func_70(p_50, (255UL & func_53(g_4, (255UL && l_157))), l_80, g_4, l_144)), l_76)))), g_4) | p_52);
                g_94 = l_115;
            }
            else
            {
                unsigned l_194 = 0x7ECC317CL;
                unsigned char l_230 = 0x84L;
                int l_231 = (-1L);
                short l_242 = 0xF14BL;
                for (g_93 = 1; (g_93 != 60); g_93 = safe_add_func_int8_t_s_s(g_93, 3))
                {
                    unsigned l_188 = 4294967288UL;
                    return l_188;
                }
                l_189 = func_70(g_93, p_49, g_4, l_112, g_94);
                if (g_67)
                {
                    char l_207 = 0x4BL;
                    int l_211 = 0L;
                    int l_234 = 0L;
                    for (p_50 = 12; (p_50 < 4); p_50--)
                    {
                        l_95 &= (safe_add_func_int32_t_s_s(func_70(p_49, func_53(g_4, p_48), p_52, l_194, (safe_mod_func_int16_t_s_s((l_83 | (8L || 0x68DCL)), 0xF0F1L))), 0x4AE1D9C2L));
                        if (p_48)
                            break;
                    }
                    if (p_51)
                        continue;
                    if ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_70((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_94, (safe_sub_func_uint16_t_u_u((g_4 >= ((!func_70(l_207, g_4, g_93, (0L || (-1L)), (l_158 == 2L))) & g_67)), p_50)))), p_49)), g_93, g_93, l_208, l_157), 4)), 4L)))
                    {
                        unsigned char l_229 = 6UL;
                        l_86 = g_93;
                        l_211 = ((safe_mod_func_uint8_t_u_u((~p_49), l_194)) & p_51);
                        l_211 = l_194;
                        l_231 = (safe_div_func_uint16_t_u_u(p_52, (l_211 || func_53(l_158, (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_218, 0x5D5F9AD4L)), ((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(func_70((l_189 == (!func_53(((((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_93, p_48)), (l_229 || g_93))) & 0x10F4L) && l_194) != 0xC71B3094L), l_229))), p_51, p_50, l_76, l_230), l_229)) ^ l_230) & g_94), g_93)) ^ p_49), g_93)) || l_229)))))));
                    }
                    else
                    {
                        l_211 = g_4;
                    }
                    g_94 |= (safe_div_func_uint8_t_u_u(246UL, l_234));
                }
                else
                {
                    int l_241 = 0xC1FC836EL;
                    l_231 |= ((l_230 == ((p_48 >= (g_93 == (func_53(l_83, func_70(l_112, l_157, (func_53(((((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x1E80D83CL, func_53(func_70(g_67, g_94, l_157, l_95, l_230), l_160))), g_93)) < p_52) > l_157) & p_50), l_230) > g_93), l_218, p_52)) > g_4))) ^ 0xB1L)) <= l_241);
                    return p_48;
                }
                if (l_242)
                    break;
            }
        }
        if (p_49)
            break;
    }
    g_94 = (g_4 != (((g_67 ^ g_67) || ((safe_sub_func_uint16_t_u_u((l_76 || ((safe_rshift_func_uint8_t_u_s(func_70(g_93, (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(g_93, g_94)) < g_67), (g_67 != 0xF0L))), 0x4BFEC47BL)) <= g_93) & g_4), g_4)), l_218)), l_257, g_4, l_257), p_48)) || g_93)), l_76)) | g_4)) || g_94));
    return g_94;
}







static short func_53(unsigned p_54, unsigned p_55)
{
    int l_65 = 0x7BB34E4AL;
    unsigned short l_66 = 0xCF28L;
    for (p_54 = 0; (p_54 <= 28); p_54 = safe_add_func_int16_t_s_s(p_54, 7))
    {
        return p_54;
    }
    g_67 &= ((safe_mod_func_uint8_t_u_u((1L != (safe_add_func_uint8_t_u_u((((g_4 < g_4) | (safe_rshift_func_uint8_t_u_u((((0UL <= 4294967291UL) < p_54) != ((g_4 && l_65) < (l_66 != l_65))), 0))) <= 0x09E1L), g_4))), l_66)) <= g_4);
    return g_4;
}







static int func_70(short p_71, unsigned short p_72, int p_73, unsigned short p_74, int p_75)
{
    char l_84 = 2L;
    unsigned short l_85 = 0xC182L;
    p_73 = g_67;
    l_84 = (p_74 <= (-1L));
    return l_85;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
