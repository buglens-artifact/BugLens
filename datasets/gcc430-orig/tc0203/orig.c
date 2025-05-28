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



static unsigned g_10 = 0xA290BE44L;
static unsigned char g_40 = 248UL;
static short g_74 = (-10L);
static unsigned short g_77 = 0x844FL;
static unsigned g_108 = 0x5AD8EDCEL;
static char g_114 = 1L;
static unsigned char g_115 = 0xC1L;
static unsigned short g_118 = 1UL;
static const unsigned short g_125 = 1UL;
static short g_152 = 3L;
static int g_160 = 0x1DE55174L;
static int g_161 = (-1L);
static short g_162 = 1L;
static int g_163 = 0x836713F9L;
static unsigned short g_170 = 0UL;
static char g_196 = 0x93L;
static short g_238 = 0xA8C2L;
static int g_239 = 0x8A796D56L;
static unsigned char g_240 = 0x4FL;
static unsigned short g_243 = 0x4672L;
static const short g_270 = 1L;
static unsigned char g_272 = 0x52L;
static char g_280 = 0x5FL;
static short g_324 = 0L;
static short g_339 = 0x715AL;
static int g_340 = 1L;
static int g_342 = 0x417869A7L;
static unsigned g_343 = 0xAF0A2B92L;
static short g_392 = 0xFAA7L;
static short g_415 = 1L;
static short g_419 = 0x5FC4L;
static unsigned short g_420 = 0x7762L;
static int g_456 = 0x9CB1F11EL;
static unsigned short g_459 = 65532UL;
static int g_594 = 0xE4198391L;
static const int g_603 = 0x234865F1L;
static const int g_741 = 0L;
static unsigned g_812 = 0UL;
static int g_854 = 0L;



static short func_1(void);
static int func_5(unsigned char p_6, short p_7, const char p_8, int p_9);
static short func_16(const unsigned p_17, const int p_18, unsigned short p_19, int p_20);
static const int func_21(unsigned p_22, const unsigned p_23, unsigned p_24, short p_25, unsigned short p_26);
static char func_28(short p_29, int p_30, char p_31, unsigned short p_32, unsigned short p_33);
static char func_38(unsigned short p_39);
static const int func_43(unsigned p_44);
static short func_53(unsigned p_54, const unsigned p_55);
static int func_60(unsigned short p_61, unsigned short p_62, const int p_63, char p_64);
static const unsigned func_92(int p_93, short p_94, int p_95);
static short func_1(void)
{
    char l_4 = 0x46L;
    int l_532 = 0xB133E6FBL;
    int l_595 = 1L;
    unsigned short l_611 = 0x4F64L;
    unsigned short l_656 = 0UL;
    unsigned l_822 = 0xD937A0E9L;
    if ((safe_rshift_func_int8_t_s_s(l_4, 2)))
    {
        unsigned short l_11 = 1UL;
        const short l_535 = (-1L);
        int l_549 = (-1L);
        int l_551 = (-1L);
        unsigned char l_552 = 0x67L;
        int l_586 = 0x249A5AC6L;
        int l_668 = 0x4C6A77FCL;
        if (func_5(g_10, (l_11 = (-1L)), l_4, l_4))
        {
            int l_520 = (-9L);
            int l_527 = 0x021D15DCL;
            short l_591 = (-1L);
            l_532 |= (((((func_21(l_520, func_38((safe_lshift_func_int16_t_s_u((0UL & (g_160 = ((g_456 |= (safe_lshift_func_uint8_t_u_s(((l_11 && l_520) && ((func_53((l_527 = l_4), l_4) | (safe_div_func_int8_t_s_s(g_152, (safe_mod_func_uint8_t_u_u(249UL, l_4))))) ^ g_74)), 3))) > g_339))), g_152))), g_270, g_239, g_125) > l_11) & 1UL) > l_520) != g_161) | 1UL);
            if ((l_532 = (g_239 == (-9L))))
            {
                unsigned l_546 = 0xE83C6F22L;
                for (g_240 = 21; (g_240 >= 34); g_240++)
                {
                    unsigned l_538 = 0xE9D92A42L;
                    int l_550 = 0x1DFB4F0EL;
                    if (l_535)
                        break;
                    if (l_11)
                    {
                        int l_539 = (-1L);
                        l_550 = (l_549 |= ((safe_rshift_func_int8_t_s_s((func_43(l_538) < l_539), l_535)) != (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((g_40 ^= (((((safe_div_func_uint8_t_u_u((((g_272 & l_532) >= l_546) | l_546), ((safe_sub_func_int8_t_s_s((0xE6L || l_520), (-8L))) || l_520))) > l_539) != l_546) < l_535) > l_546)) > g_77) != 0x6980L), l_546)), g_160))));
                        g_163 = g_456;
                        l_552--;
                        l_551 = l_549;
                    }
                    else
                    {
                        int l_559 = 0x21C4B42CL;
                        int l_560 = 0xAE3B9714L;
                        l_560 &= (func_60((g_459 |= g_170), l_546, (safe_div_func_int8_t_s_s((!g_392), 0xD7L)), g_339) & (((safe_add_func_uint32_t_u_u((l_546 && ((l_520 = l_559) > g_114)), g_419)) & l_559) < l_535));
                        l_550 = ((-10L) >= ((g_40 > (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(func_28(l_560, l_549, (safe_rshift_func_int8_t_s_u(((l_546 ^ ((-6L) && ((((l_551 = (3L != func_43(((!(safe_div_func_uint16_t_u_u(g_77, (+(l_538 > 246UL))))) == g_160)))) ^ l_538) <= g_161) | l_546))) | g_10), 0)), l_550, l_527), 6)), l_546))) && 0x0E120C08L));
                        l_559 = g_74;
                    }
                    return g_10;
                }
                g_239 = (safe_div_func_int8_t_s_s(func_53((l_532 <= (0UL | (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((g_280 != (g_108 <= func_43(g_152))) | (l_552 && ((l_551 = 0x7CL) > g_77))), g_459)) <= g_162), l_546)), g_419)))), g_196), g_125));
            }
            else
            {
                int l_583 = 0x1892ABD1L;
                int l_592 = 0xC00EF6B9L;
                unsigned l_593 = 4294967289UL;
                l_532 = (safe_unary_minus_func_uint8_t_u(g_415));
                l_586 ^= ((safe_lshift_func_uint16_t_u_u(g_77, ((func_21((!(((safe_unary_minus_func_uint16_t_u((1L & ((-1L) & l_552)))) || (safe_lshift_func_uint16_t_u_s(((g_280 || g_170) && l_583), l_583))) ^ ((safe_rshift_func_uint16_t_u_s(func_43(l_583), g_415)) > g_239))), l_583, l_532, l_552, g_243) <= 0x34L) > 0UL))) || 0x7381L);
                l_595 = (safe_rshift_func_uint8_t_u_s(((l_532 = l_583) == ((g_280 ^ (safe_lshift_func_uint16_t_u_s((l_583 == g_163), (g_594 |= func_53(g_459, func_60(func_60((l_549 || (l_592 ^= l_591)), l_551, (0x39EBL || g_125), l_4), l_591, g_342, l_593)))))) && g_160)), 1));
            }
        }
        else
        {
            int l_607 = 0x46579028L;
            const short l_614 = 0x4ACBL;
            int l_617 = (-5L);
            for (g_343 = (-1); (g_343 == 50); ++g_343)
            {
                unsigned short l_602 = 0xF3F4L;
                unsigned short l_649 = 65531UL;
                if ((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((g_161 <= l_602), 0x7399L)) >= g_152), g_603)))
                {
                    unsigned char l_606 = 1UL;
                    int l_624 = 0x295BE759L;
                    if ((safe_add_func_int16_t_s_s(func_60(((l_607 = l_606) == (safe_unary_minus_func_int16_t_s(((safe_add_func_uint32_t_u_u(g_125, 0x92644BE9L)) & (0UL != 0x4C3500AFL))))), (g_420 = l_611), (g_594 = (safe_mod_func_uint8_t_u_u((((l_614 >= (0x671CB164L & 0x8F0B6BEDL)) || l_552) || g_456), g_170))), g_238), 1UL)))
                    {
                        g_456 = (safe_sub_func_uint32_t_u_u(l_614, g_114));
                        if (l_602)
                            continue;
                    }
                    else
                    {
                        unsigned l_618 = 0UL;
                        int l_621 = 0x3A13E1CFL;
                        ++l_618;
                        l_621 = l_532;
                        g_160 = (safe_sub_func_int32_t_s_s(0x4AB9A405L, (l_624 = l_621)));
                        l_624 = (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(((g_340 | ((-1L) == (safe_sub_func_int32_t_s_s((l_621 &= l_606), (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_40, (safe_mod_func_uint16_t_u_u((g_170 = ((func_43((l_551 = g_160)) || (safe_rshift_func_uint16_t_u_u(((g_160 = (func_28((g_419 |= (((g_415 = (safe_mod_func_int8_t_s_s(g_603, l_611))) > (func_43(l_549) & 0x3ED0L)) < l_602)), l_624, g_40, l_624, l_532) <= 0x94L)) < g_240), g_118))) <= g_170)), 0xE52BL)))), g_340)))))) < 0x6AF1BCC0L), l_624)) && g_170) > 0xBBC16B0BL), g_603));
                    }
                    l_595 |= l_624;
                    l_595 = 0x0630B20FL;
                    g_239 = ((safe_sub_func_uint32_t_u_u(g_196, 0UL)) | g_243);
                }
                else
                {
                    if (g_419)
                        break;
                }
                g_160 ^= (safe_sub_func_int32_t_s_s(g_74, (((g_339 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((func_53(g_339, l_586) <= ((l_614 > l_649) <= ((l_607 = (l_551 = (safe_div_func_int32_t_s_s(g_324, (safe_div_func_uint16_t_u_u(l_602, (safe_lshift_func_uint16_t_u_u(l_586, g_272)))))))) & l_602))), l_602)), (-1L)))) < l_656) || l_611)));
            }
        }
        for (g_240 = (-30); (g_240 == 54); g_240 = safe_add_func_uint32_t_u_u(g_240, 5))
        {
            unsigned char l_667 = 0x43L;
            g_456 = (((g_114 = ((+func_28(((safe_mod_func_uint8_t_u_u(0UL, func_21(g_162, g_161, ((l_668 ^= (safe_sub_func_uint16_t_u_u(((g_115 = ((safe_add_func_int32_t_s_s(((l_551 ^= (g_77 = (~((safe_rshift_func_uint8_t_u_s(((g_10 = g_114) != g_161), 2)) || g_163)))) <= g_459), l_667)) >= l_667)) & 0xBCL), (-10L)))) != g_392), g_238, g_270))) & 0x6AL), g_114, l_549, g_340, g_161)) != g_280)) < g_340) < g_125);
        }
    }
    else
    {
        int l_673 = 6L;
        int l_674 = 0xBA74D19CL;
        char l_829 = 0x4AL;
        l_674 ^= (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(0xD7BFL, 9)) != l_673), 3));
        if (g_125)
        {
            char l_679 = 0xFBL;
            int l_692 = (-7L);
            int l_720 = 0xC568DA99L;
lbl_825:
            if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(0x0B9D952CL, 0xF2F67C04L)), 3)))
            {
                short l_680 = 0xB163L;
                l_679 = g_118;
                l_680 = l_674;
            }
            else
            {
                const unsigned l_681 = 1UL;
                int l_702 = (-2L);
lbl_757:
                l_532 = l_681;
                l_595 = (l_673 = (safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((func_60((!65533UL), l_679, g_603, ((((((0xD858L || l_681) | ((safe_add_func_uint8_t_u_u(l_674, (g_115 = 255UL))) == (safe_rshift_func_uint16_t_u_u((~((l_681 ^ g_114) | g_340)), 11)))) >= 1UL) || 0xB3L) || g_77) & g_152)) <= l_692), 1)), l_692)), g_243)));
                for (g_160 = 0; (g_160 != 9); g_160 = safe_add_func_uint32_t_u_u(g_160, 2))
                {
                    l_595 = l_681;
                    if (g_108)
                        break;
                }
                if ((+0xB508783CL))
                {
                    unsigned l_701 = 4294967291UL;
                    int l_703 = 1L;
                    unsigned char l_721 = 0xD6L;
                    int l_787 = 0xA36AD456L;
                    if (func_21((l_703 = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_162, func_92((l_702 ^= func_92((g_170 == l_674), g_415, (safe_mod_func_int8_t_s_s(g_415, l_701)))), (0x0444L != 0xD839L), l_701))), 0L))), l_674, g_114, l_532, l_532))
                    {
                        const short l_706 = 0x34DEL;
                        g_163 = (safe_rshift_func_int16_t_s_u((g_152 = (((((func_53(g_163, l_706) | (safe_mod_func_int16_t_s_s(((~(!(safe_unary_minus_func_uint8_t_u(g_415)))) != (safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_272++), (1L == g_114))) || (0xA558F39AL & (~(safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((g_339 = (l_703 == l_706)) > 0x3BF0L), 0xF8L)), 0L))))), l_706))), (-1L)))) & g_456) > l_702) | 0x66E7L) < 0x3BBFL)), 1));
                        l_721++;
                    }
                    else
                    {
                        char l_724 = 0x27L;
                        l_724 &= (4294967294UL > l_595);
                        return g_40;
                    }
                    if (func_53((((l_702 ^= (safe_div_func_int8_t_s_s(((l_595 ^= ((l_532 == (g_170 && (l_674 = l_721))) != ((l_721 | (+(safe_add_func_int16_t_s_s((!(safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(0x4CL, (safe_sub_func_int16_t_s_s(l_673, (safe_add_func_int8_t_s_s(g_340, (0x0FL & func_53(g_163, l_681)))))))) != g_420), 0x0606AE8DL))), g_162)))) && g_10))) ^ g_239), l_721))) | g_420) ^ 0xD5L), g_74))
                    {
                        const int l_739 = (-1L);
                        int l_740 = 0x926C500EL;
                        l_595 = func_53((func_5(g_603, (l_740 = (safe_rshift_func_int16_t_s_u((g_74 = l_692), (l_739 == (g_343 = g_415))))), ((0x13L == 249UL) > l_674), g_420) > 0x2DL), g_741);
                        return g_118;
                    }
                    else
                    {
                        int l_754 = 0L;
                        g_163 = (safe_div_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((g_280 = 3L) >= (safe_sub_func_int8_t_s_s(g_152, l_673))) < (g_459 = (safe_mod_func_uint32_t_u_u(5UL, (safe_lshift_func_uint16_t_u_s(func_60(l_4, (g_118 = l_754), (!((safe_mod_func_int32_t_s_s(g_272, l_681)) > func_92(g_339, g_339, l_681))), l_595), g_741)))))), 0x86D1L)), l_702)) > l_674), l_674));
                        g_160 ^= 6L;
                        if (l_656)
                            goto lbl_757;
                        l_703 |= ((l_702 = l_611) && (safe_rshift_func_int16_t_s_s(0x465DL, (l_595 = l_754))));
                    }
                    if ((safe_sub_func_uint8_t_u_u(l_681, (safe_sub_func_uint8_t_u_u((+g_163), (safe_unary_minus_func_int8_t_s((l_674 = (0xD3L >= ((g_392 && g_415) && (safe_sub_func_uint16_t_u_u(((g_160 = l_673) > g_603), ((safe_lshift_func_int16_t_s_s(l_674, 2)) < (safe_div_func_int32_t_s_s(g_170, l_701)))))))))))))))
                    {
                        unsigned l_773 = 1UL;
                        l_703 |= (safe_sub_func_uint16_t_u_u(g_415, (~g_77)));
                        return l_773;
                    }
                    else
                    {
                        unsigned l_774 = 4UL;
                        l_774 |= (l_656 || g_77);
                        g_239 = (safe_mod_func_int8_t_s_s(l_703, (func_60((g_77 = func_43(l_774)), g_342, (g_161 = (l_787 ^= (0x63L == (g_603 && ((safe_mod_func_int16_t_s_s(g_459, (safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_679 || ((l_532 = (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x8096L, 12)), g_280))) ^ 7L)), g_125)), 0x94L)))) & l_702))))), l_673) && 246UL)));
                    }
                }
                else
                {
                    for (l_674 = (-9); (l_674 > (-15)); --l_674)
                    {
                        char l_794 = 0L;
                        l_720 = g_125;
                        g_239 |= (safe_div_func_int8_t_s_s(2L, g_118));
                        l_720 |= 0x186F9118L;
                        g_163 |= (safe_rshift_func_uint16_t_u_u(l_794, 3));
                    }
                }
            }
            for (g_240 = 2; (g_240 == 8); g_240 = safe_add_func_uint16_t_u_u(g_240, 9))
            {
                const unsigned char l_797 = 253UL;
                int l_810 = 0x1283DDD8L;
                unsigned l_811 = 1UL;
                g_340 &= l_797;
                for (l_674 = 26; (l_674 <= 5); --l_674)
                {
                    if (g_238)
                        break;
                    for (g_40 = 0; (g_40 > 26); ++g_40)
                    {
                        if (g_40)
                            break;
                    }
                    g_812 = (safe_add_func_uint8_t_u_u(func_28((safe_div_func_int16_t_s_s((func_92((g_160 = (safe_lshift_func_int8_t_s_u((g_74 <= ((safe_lshift_func_uint16_t_u_s(g_340, 15)) == ((g_152 |= (g_392 <= l_797)) ^ (l_673 | (l_810 ^= (l_674 >= 65527UL)))))), 5))), l_811, l_720) || g_420), l_673)), g_114, l_692, g_324, l_692), g_196));
                    l_810 = (safe_add_func_uint32_t_u_u(((!(l_595 == (g_161 && (l_692 < ((g_114 = (g_196 &= (l_673 >= 0x67L))) || 0L))))) & (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_720 == (safe_unary_minus_func_uint16_t_u((((g_10 = ((l_822 <= l_720) | g_343)) || l_692) && l_679)))) > g_594), g_420)), 14))), l_673));
                }
                for (l_822 = 0; (l_822 >= 33); l_822++)
                {
                    if (l_656)
                        break;
                }
            }
            if (l_673)
                goto lbl_825;
        }
        else
        {
            unsigned l_826 = 0x5B15C773L;
            int l_838 = 0x097D2548L;
            int l_839 = 1L;
            l_826 ^= (l_595 = l_673);
            g_160 = (safe_mod_func_int8_t_s_s(((l_829 ^ (g_196 != l_595)) != (safe_div_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((247UL < (-1L)), (safe_sub_func_uint8_t_u_u(((func_60((((safe_sub_func_uint16_t_u_u(0UL, func_28(g_342, g_152, l_829, g_272, l_4))) | g_240) < 0L), g_603, l_674, g_114) || l_595) || l_822), 1L)))) <= (-1L)) >= l_826), l_822))), l_4));
            g_456 = l_829;
            l_674 = ((func_16(g_10, g_324, (l_838 = (4UL && l_826)), ((l_839 = 4294967289UL) | (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_270, 12)) || (g_343++)), ((g_240++) && (safe_rshift_func_uint16_t_u_u(g_125, 8))))), l_829)))) ^ 251UL) > g_415);
        }
        return g_280;
    }
    for (g_594 = (-26); (g_594 < 27); g_594 = safe_add_func_int16_t_s_s(g_594, 1))
    {
        g_239 = g_854;
    }
    return l_595;
}







static int func_5(unsigned char p_6, short p_7, const char p_8, int p_9)
{
    const unsigned l_27 = 0xE974A520L;
    unsigned l_304 = 1UL;
    int l_310 = 0x30702C5EL;
    unsigned l_346 = 8UL;
    int l_493 = (-5L);
    int l_503 = 0xC055C2ACL;
    int l_519 = (-10L);
    if ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_16(g_10, (p_9 = func_21(g_10, l_27, (0x1DL == (l_310 = func_28(((safe_mod_func_uint16_t_u_u((l_304 = (safe_div_func_int8_t_s_s(p_7, func_38((--g_40))))), g_10)) == (p_6 = 1UL)), p_9, l_27, l_27, p_9))), p_8, g_161)), l_346, p_7), g_339)), 1L)))
    {
        unsigned l_429 = 1UL;
        int l_437 = 0x24941D30L;
        int l_497 = 0L;
        if (l_27)
        {
            return l_429;
        }
        else
        {
            const char l_430 = 0x1EL;
            int l_449 = (-1L);
            int l_458 = 1L;
            g_239 &= (func_60(g_152, g_108, l_430, (safe_lshift_func_int8_t_s_s((((l_430 <= ((l_429 < (func_43(g_115) != 1L)) || ((((safe_mod_func_uint32_t_u_u((p_8 > g_74), 0xA444A4A0L)) >= 65534UL) < 1L) & p_7))) ^ 0x9BL) != l_429), p_7))) >= 0x93644EE2L);
            for (g_74 = (-4); (g_74 != (-18)); g_74 = safe_sub_func_uint16_t_u_u(g_74, 9))
            {
                unsigned l_444 = 0UL;
                int l_455 = 0x76D608B3L;
                int l_457 = (-1L);
                l_437 ^= (-7L);
                if ((l_449 = (((l_444 ^= (safe_add_func_uint8_t_u_u(((l_437 <= p_9) ^ g_74), (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((!1UL), 0)), g_340))))) ^ 4UL) >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((0L & p_8) | ((p_6 ^ 0L) == 0x64L)), 2)), p_9)))))
                {
                    for (g_243 = 0; (g_243 >= 10); g_243 = safe_add_func_int32_t_s_s(g_243, 7))
                    {
                        short l_454 = 1L;
                        g_239 = (safe_mod_func_int16_t_s_s((l_454 ^= ((l_437 = func_43(l_444)) == p_8)), l_304));
                        if (p_8)
                            continue;
                    }
                    g_340 = (p_6 == 4294967295UL);
                }
                else
                {
                    l_449 ^= l_437;
                    --g_459;
                }
                l_458 ^= l_429;
                g_160 = (safe_add_func_uint32_t_u_u(func_60(l_429, (((1UL < p_8) ^ (safe_mod_func_int32_t_s_s(l_429, l_449))) <= l_27), g_343, (safe_div_func_uint16_t_u_u(g_161, func_43((l_458 |= (g_239 ^ p_8)))))), 1L));
            }
            l_310 = (safe_lshift_func_int8_t_s_u((p_9 | func_92((func_21(p_8, (g_108 = (0x27CAL != 0xE5D3L)), (safe_div_func_int8_t_s_s(0xEDL, p_9)), (0x0FL <= 247UL), (p_9 >= 0xA0L)) || 0x81L), p_6, p_7)), 3));
        }
        for (g_163 = (-30); (g_163 > (-14)); ++g_163)
        {
            unsigned short l_487 = 0xB76BL;
            unsigned l_488 = 0x2F2EF0FFL;
            int l_491 = 0x90764872L;
            int l_492 = 0x1FC34EC1L;
            int l_494 = (-3L);
            int l_495 = 7L;
            int l_496 = 5L;
            for (g_161 = 0; (g_161 > 29); ++g_161)
            {
                return p_8;
            }
            g_340 = func_53((safe_rshift_func_int16_t_s_s((p_7 |= g_342), ((0x3EE78ADCL & (+((g_74 != (((g_196 <= (g_160 >= l_437)) < ((g_240 == (g_40 |= ((((!((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(g_342, 1)), 1)))), 0x05L)) ^ 0x2A55C7A1L)) & l_487) >= l_488) & 0UL))) > 0UL)) & l_429)) >= 0x8CL))) != l_487))), p_9);
            for (p_6 = 0; (p_6 <= 37); p_6++)
            {
                unsigned short l_498 = 65533UL;
                int l_506 = 0x35EB201CL;
                int l_509 = 0xB9D6BF60L;
                l_498--;
                l_506 = (safe_add_func_int16_t_s_s(l_503, (safe_rshift_func_uint8_t_u_s(p_9, 0))));
                l_492 = (0x3A9174A0L | (((safe_add_func_int32_t_s_s((l_310 = (l_437 = func_53((l_509 = p_6), (((g_392 < 0L) ^ (g_243--)) ^ (safe_lshift_func_int16_t_s_u(p_6, p_9)))))), (g_343 = p_8))) ^ (safe_div_func_uint8_t_u_u(p_7, 0x31L))) ^ l_503));
            }
        }
    }
    else
    {
        int l_516 = 0x6581E331L;
        return l_516;
    }
    g_340 = l_503;
    l_310 |= func_16(g_459, (safe_add_func_int32_t_s_s((l_503 ^= ((p_9 != 254UL) < ((func_28(l_346, func_28((0x66326FDAL && g_108), p_8, (g_280 |= (func_43(g_77) == p_9)), p_6, g_392), l_304, l_519, g_170) >= l_27) > p_8))), p_9)), g_161, p_6);
    l_493 = (-1L);
    return p_9;
}







static short func_16(const unsigned p_17, const int p_18, unsigned short p_19, int p_20)
{
    int l_349 = 0x8FA4D6DCL;
    int l_370 = 0L;
    char l_373 = 0x0FL;
    int l_385 = 6L;
    int l_395 = 0x24E1413FL;
    int l_416 = 1L;
    int l_417 = (-6L);
    int l_418 = 9L;
    for (p_20 = (-30); (p_20 > (-11)); p_20 = safe_add_func_uint32_t_u_u(p_20, 8))
    {
        unsigned short l_354 = 0UL;
        int l_374 = 0x62637144L;
        if (((l_349 >= (((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(p_17, (l_354 & ((0x43D6L > (func_38(p_19) | (g_10 || ((0UL != (safe_div_func_int32_t_s_s((0xAAL || g_239), g_342))) && g_239)))) | 0x31DAC2A0L)))), p_17)) || 0xDDL) && 0x6D69L)) >= 8L))
        {
            short l_371 = 1L;
            int l_372 = 0L;
            l_370 = (safe_add_func_int8_t_s_s(func_92((l_373 = func_53((func_60(((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((!func_60(((((g_243 ^= ((l_372 &= (safe_mod_func_uint32_t_u_u((+(g_196 > 0x23L)), (((p_19 || (g_77 = (4294967289UL ^ (safe_unary_minus_func_int8_t_s(((safe_add_func_int32_t_s_s(func_21(g_240, p_19, ((-4L) >= (safe_div_func_uint8_t_u_u(l_354, func_21((0L ^ g_125), p_20, p_20, l_370, l_371)))), g_152, p_17), 0x8E96B0C7L)) | p_20)))))) ^ 0xDEL) && p_18)))) <= l_371)) ^ p_20) & l_349) < l_371), p_17, p_19, g_240)), g_125)) & p_18), p_17)) != 252UL), l_371, p_18, p_20) | g_342), g_152)), p_20, p_17), p_19));
        }
        else
        {
            char l_386 = 0x12L;
            int l_387 = 0L;
            if (l_349)
                break;
            l_374 |= func_53(g_118, p_17);
            g_160 = (safe_rshift_func_uint8_t_u_s((((g_343--) < (func_28(((l_374 &= (0x7FF6CDE4L ^ l_354)) || (safe_mod_func_int16_t_s_s(p_20, (safe_sub_func_int16_t_s_s(func_60(g_196, ((safe_lshift_func_int8_t_s_s(g_114, 3)) > (++g_10)), (g_342 = g_196), g_280), (safe_div_func_uint8_t_u_u(g_161, l_370))))))), l_387, g_163, p_18, p_19) < 246UL)) == g_74), l_387));
            if (p_18)
                continue;
        }
        g_340 = p_20;
        l_395 &= func_21(l_354, (!0xA190B2B2L), g_392, p_19, ((l_370 = 0x54A1L) && ((g_162 ^ (7UL <= l_354)) != (p_20 == l_373))));
    }
    p_20 |= p_18;
    if (p_17)
    {
        unsigned char l_398 = 0UL;
        int l_399 = 0L;
        int l_404 = 0xBD235115L;
        g_163 = (safe_rshift_func_uint8_t_u_u(((l_399 = ((l_398 = 0x862EAF81L) > g_272)) == (g_280 &= (l_349 && (safe_rshift_func_uint16_t_u_u((((-2L) > (((l_404 = (safe_div_func_int8_t_s_s(l_370, g_240))) || (safe_sub_func_uint16_t_u_u(((p_19 & ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((p_20 = l_385), (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((+p_17), 0x9ECC25BDL)), p_19)))), p_19)) & p_18)) < (-9L)), (-1L)))) | g_243)) || g_162), 10))))), 0));
        g_163 |= 0xD777C955L;
        --g_420;
    }
    else
    {
        unsigned l_427 = 0x9F09814DL;
        int l_428 = 0x4BFCA968L;
        l_370 ^= (g_196 & ((!(func_43(p_20) && (l_395 = ((safe_add_func_int16_t_s_s((((g_77 <= g_420) != 4294967295UL) & (g_339 || l_416)), (safe_lshift_func_int8_t_s_u((l_428 = l_427), 7)))) & 4294967290UL)))) > 0UL));
    }
    return g_162;
}







static const int func_21(unsigned p_22, const unsigned p_23, unsigned p_24, short p_25, unsigned short p_26)
{
    const char l_317 = 0x8AL;
    int l_326 = 0xF6B5423CL;
    int l_336 = 0xA1DA3663L;
    int l_337 = (-1L);
    int l_338 = (-10L);
    int l_341 = (-2L);
    l_326 ^= (g_239 |= ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_317, (((safe_sub_func_int16_t_s_s((+(l_317 ^ (safe_add_func_int16_t_s_s(((0x0621L == g_272) && ((safe_add_func_uint32_t_u_u((g_324 = func_43(g_270)), (((safe_unary_minus_func_int16_t_s(p_26)) > ((p_22 & l_317) || 0xB491DCC6L)) == g_170))) != l_317)), l_317)))), 0xCEAAL)) & g_270) < p_26))), p_26)), 0x2E7FL)) ^ l_317));
    if (l_317)
        goto lbl_335;
lbl_335:
    g_239 |= (((func_92((g_163 ^= (safe_add_func_int16_t_s_s(l_326, g_115))), l_317, g_152) && p_22) < (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((g_160 ^= g_272), 0xB9456BA3L)), p_23)), 1UL))) | l_317);
    --g_343;
    return l_326;
}







static char func_28(short p_29, int p_30, char p_31, unsigned short p_32, unsigned short p_33)
{
    unsigned l_306 = 0x08FD1E83L;
    int l_307 = 0xC19EB95EL;
    l_307 = ((safe_unary_minus_func_int8_t_s((-7L))) == func_43(l_306));
    for (g_108 = (-20); (g_108 <= 60); g_108 = safe_add_func_uint16_t_u_u(g_108, 8))
    {
        g_163 = p_30;
    }
    return l_306;
}







static char func_38(unsigned short p_39)
{
    unsigned l_65 = 0x090AEC51L;
    int l_68 = 0x0BECC33BL;
    int l_128 = 0x77B72BA7L;
    int l_131 = 1L;
    short l_183 = 1L;
lbl_175:
    g_160 &= func_43((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((g_74 = (g_152 ^= (((safe_rshift_func_int16_t_s_s(func_53((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((func_60((l_65--), p_39, (l_68 & g_40), g_40) & (((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((g_125 && p_39), (safe_rshift_func_int16_t_s_u((l_128 = p_39), 3)))) < (safe_div_func_int8_t_s_s((l_131 = (-1L)), 0xFDL))) <= 0L), g_10)) >= 4294967287UL) & p_39)), g_114)), g_74)), l_68), 4)) ^ 9L) == 0xF5978B88L))), p_39)) <= l_68) || (-2L)), p_39)), 0xD0AB3BAAL)));
    if (l_65)
    {
        g_160 = g_115;
    }
    else
    {
        short l_188 = 0x9647L;
        int l_198 = 0L;
        unsigned l_265 = 0x6BFB3F18L;
        for (l_131 = 27; (l_131 > 16); l_131--)
        {
            unsigned l_178 = 0xA7A66DA9L;
            int l_199 = 0x12D9EA3BL;
            unsigned short l_201 = 1UL;
            for (g_163 = 0; (g_163 == 14); ++g_163)
            {
                if (g_152)
                    goto lbl_175;
            }
            if ((safe_rshift_func_int16_t_s_u(l_178, (g_161 && func_53(g_125, g_152)))))
            {
                int l_182 = 0x768DB521L;
                int l_234 = 0L;
                int l_235 = 0xB6C9F75EL;
                if (l_178)
                {
                    unsigned l_179 = 1UL;
                    int l_195 = 0L;
                    char l_197 = (-1L);
                    int l_200 = (-1L);
                    if (func_60(g_118, l_179, (safe_rshift_func_int16_t_s_u(p_39, p_39)), (l_182 || (l_183 >= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((((l_188 = func_43(p_39)) == (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_128, 0x2CB4L)), l_179)), g_40))) | 1UL) >= 0xDC829B9FL), p_39)), g_77))))))
                    {
                        if (g_125)
                            break;
                        l_201++;
                        return p_39;
                    }
                    else
                    {
                        int l_223 = (-1L);
                        l_128 |= func_53((l_68 &= (safe_add_func_int8_t_s_s((1UL ^ (safe_div_func_uint8_t_u_u((l_197 && (0xEBL || (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(0x3EL)), (safe_unary_minus_func_int8_t_s(g_108)))))), ((safe_add_func_uint16_t_u_u(g_162, ((~p_39) | p_39))) | func_43(func_43(l_182)))))), 2UL))), l_198);
                        if (g_40)
                            continue;
                        l_200 &= (safe_lshift_func_int8_t_s_s((0x8486E1DBL <= (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(p_39, (l_182 >= (safe_rshift_func_uint16_t_u_u(0UL, 14)))))))), (((+0xDDC6L) < (l_235 ^= (l_234 |= (g_74 |= (((((safe_add_func_uint32_t_u_u(g_196, ((++g_40) != ((g_118--) < p_39)))) == ((l_195 && (g_114 &= (+(safe_mul_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((~g_10), p_39)) != 1UL), g_152)) || 0x7534L) != g_160) || 8UL), 0L))))) | g_108)) > g_152) ^ 0x52BFL) == 0x4299L))))) < (-1L))));
                    }
                }
                else
                {
                    for (g_163 = (-8); (g_163 != 15); g_163 = safe_add_func_uint32_t_u_u(g_163, 1))
                    {
                        g_240++;
                    }
                }
                g_243--;
            }
            else
            {
                unsigned l_246 = 4294967287UL;
                g_160 = (func_53(((p_39 >= l_246) >= p_39), (safe_lshift_func_int16_t_s_u(p_39, ((p_39 != g_243) != (!g_163))))) ^ (g_162 = (g_10 | g_240)));
                return l_201;
            }
            for (g_160 = 2; (g_160 != (-2)); g_160 = safe_sub_func_uint16_t_u_u(g_160, 5))
            {
                unsigned short l_253 = 0UL;
                int l_256 = 0xCD90F720L;
                int l_303 = 5L;
                l_253++;
                l_68 = (l_256 |= (!0x6E398B15L));
                if ((safe_mod_func_uint16_t_u_u((++g_243), ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(l_265, func_43((l_198 = l_183)))) == (g_196 = ((safe_mod_func_int32_t_s_s(((l_178 < g_239) ^ p_39), (safe_add_func_int16_t_s_s((((p_39 & (l_256 ^= g_108)) >= p_39) < 0UL), p_39)))) ^ l_65))), g_40)) & g_270))))
                {
                    int l_271 = 5L;
                    g_272++;
                }
                else
                {
                    int l_296 = 0xE8893110L;
                    for (g_162 = 0; (g_162 <= (-16)); --g_162)
                    {
                        char l_277 = (-1L);
                        char l_287 = (-4L);
                        g_163 ^= p_39;
                        g_163 = l_277;
                        l_287 &= (func_43((g_280 = (0xC37EL <= (g_170 = (l_256 > g_40))))) ^ (0x8A68L >= (((safe_lshift_func_int16_t_s_s((l_65 <= 0xC689L), ((safe_mod_func_uint8_t_u_u(g_162, ((safe_add_func_int32_t_s_s(g_152, l_277)) && l_277))) | p_39))) ^ 65535UL) < g_74)));
                        l_198 |= p_39;
                    }
                    for (l_201 = 0; (l_201 > 40); l_201 = safe_add_func_uint16_t_u_u(l_201, 4))
                    {
                        return p_39;
                    }
                    l_296 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-3L), (g_238 = l_178))), 6)), ((~(0L & g_77)) < g_161)));
                }
                l_68 = (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((0x741FL == (safe_sub_func_uint16_t_u_u(g_40, 7UL))), 4)), (p_39 || l_303)));
            }
            l_199 = ((p_39 && g_162) & p_39);
        }
    }
    return l_68;
}







static const int func_43(unsigned p_44)
{
    int l_153 = 0xE8C007EEL;
    short l_154 = 0xCB08L;
    int l_155 = (-2L);
    int l_156 = 0x2CA17A55L;
    int l_157 = 0xBDB4A0C6L;
    int l_158 = 0x64756850L;
    int l_159 = (-7L);
    unsigned l_164 = 0xB757F9C6L;
    int l_167 = 9L;
    l_164--;
    g_163 = l_167;
    g_163 = ((p_44 == 0xD2L) || (safe_div_func_uint8_t_u_u(((-1L) | (g_170 && 0L)), g_118)));
    return g_108;
}







static short func_53(unsigned p_54, const unsigned p_55)
{
    char l_138 = (-9L);
    unsigned char l_149 = 9UL;
    int l_150 = 0x10037B86L;
    int l_151 = 8L;
    l_151 = ((safe_div_func_int16_t_s_s(g_74, func_60((4294967295UL & g_125), (safe_mod_func_uint8_t_u_u(((g_125 < (l_150 = (safe_sub_func_int32_t_s_s(l_138, ((safe_rshift_func_int8_t_s_u((l_138 ^ (safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((+(((1L >= (safe_div_func_int32_t_s_s((((((safe_lshift_func_uint16_t_u_s((g_77 = g_40), 2)) || 2L) | p_54) < p_55) != (-1L)), 1L))) || p_54) | 0x30L)), g_114)) >= l_138), l_149))), l_138)) && l_149))))) ^ l_138), 255UL)), g_115, p_54))) && 0x00C1L);
    return l_151;
}







static int func_60(unsigned short p_61, unsigned short p_62, const int p_63, char p_64)
{
    unsigned l_69 = 4294967294UL;
    int l_72 = (-1L);
    int l_73 = 0x1494FB38L;
    int l_75 = 1L;
    int l_76 = 0x384B6D70L;
    ++l_69;
    --g_77;
    g_118 = (p_64 ^ (l_72 = (l_75 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_61, (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((0xB2L | 0xADL) || (safe_sub_func_int8_t_s_s(l_76, (safe_mod_func_int32_t_s_s(l_76, func_92(p_64, l_76, p_64)))))), 7)) && g_114), g_114)))), 6)))));
    for (p_64 = 0; (p_64 != (-7)); p_64 = safe_sub_func_uint8_t_u_u(p_64, 1))
    {
        return p_62;
    }
    return g_10;
}







static const unsigned func_92(int p_93, short p_94, int p_95)
{
    unsigned short l_104 = 65531UL;
    int l_109 = 0x7EA9B924L;
    unsigned l_112 = 0x2CFCCFF5L;
    int l_113 = (-7L);
    l_113 = ((g_40 = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((g_40 <= (safe_add_func_int16_t_s_s(l_104, ((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((-7L))), (l_109 = (p_94 >= (g_108 = p_95))))) || (p_93 = (l_112 = ((p_94 <= (safe_sub_func_uint32_t_u_u(0x94A39B7BL, p_95))) != ((l_109 |= p_95) || 0UL))))) ^ p_94) || l_112)))), l_104)), l_104)) <= p_94), l_104))) < g_77);
    p_93 = g_108;
    --g_115;
    l_109 = (0x9828L >= (g_114 != p_95));
    return l_109;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
