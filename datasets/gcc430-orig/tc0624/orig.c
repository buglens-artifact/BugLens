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



static unsigned g_2 = 0x29000D4EL;
static unsigned short g_3 = 0x6E83L;
static unsigned g_69 = 0UL;
static unsigned char g_90 = 255UL;
static int g_99 = 0x3CFF8552L;
static unsigned g_100 = 4294967295UL;
static unsigned char g_103 = 0xC6L;
static int g_110 = 0xF0EF7C86L;
static int g_120 = 0xFE02729DL;
static unsigned char g_121 = 0xB3L;
static char g_153 = 0xF4L;
static int g_154 = 0x5870CA50L;
static unsigned short g_188 = 0x7B1CL;
static unsigned g_189 = 0x7E9E4A88L;
static int g_214 = 0x9B552DC1L;
static unsigned g_270 = 0xCA493033L;
static int g_368 = 0x4FEF44D4L;
static unsigned char g_418 = 0x16L;
static int g_432 = 9L;
static const short g_434 = 9L;
static unsigned g_463 = 0x9E36A9C6L;
static unsigned short g_520 = 0x25A3L;
static unsigned g_538 = 0x01BA04E9L;
static unsigned g_612 = 0x238D1F79L;



static unsigned func_1(void);
static short func_4(unsigned p_5, unsigned char p_6);
static int func_29(const int p_30, unsigned short p_31, unsigned p_32, unsigned short p_33, short p_34);
static unsigned func_39(int p_40, unsigned p_41, unsigned p_42);
static int func_43(unsigned p_44, short p_45, unsigned char p_46);
static unsigned func_47(unsigned char p_48, int p_49);
static unsigned char func_52(char p_53);
static int func_54(int p_55, const unsigned char p_56, char p_57, const unsigned short p_58);
static unsigned char func_60(unsigned p_61, char p_62, unsigned p_63);
static unsigned func_64(int p_65, const unsigned p_66, unsigned p_67);
static unsigned func_1(void)
{
    short l_21 = (-2L);
    unsigned l_27 = 0x3826A056L;
    char l_28 = 0xDBL;
    int l_435 = 0x5E8F5276L;
    unsigned short l_570 = 0x4A06L;
    int l_572 = 0x8C888C93L;
    unsigned l_573 = 0UL;
    int l_598 = (-1L);
    unsigned short l_611 = 65535UL;
    l_598 = (((g_3 = g_2) == func_4((l_573 = (safe_lshift_func_int8_t_s_s((65527UL == (((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_21, (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u(l_27, (l_28 >= ((l_572 = (g_2 <= (func_29((((safe_add_func_uint32_t_u_u((((((safe_div_func_int8_t_s_s(((func_39(func_43((l_435 = func_47(g_2, (safe_sub_func_uint8_t_u_u(g_2, func_52((((1UL != g_2) >= g_2) > 8UL)))))), l_27, g_2), g_434, l_27) >= l_28) | g_2), 0xBBL)) > g_434) < g_434) & 0xA0CC205EL) || g_100), g_2)) < l_21) > 3UL), l_570, g_2, l_570, l_28) != g_434))) || g_418)))))), 1UL)))), 3)) ^ 0x82L), 11)), 0UL)), g_434)), g_434)) && 255UL) == g_2)), 3))), g_2)) ^ 0x1E5BL);
    l_598 = (safe_mod_func_int16_t_s_s(((l_27 > (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(g_520, 4294967295UL)), (safe_mul_func_uint8_t_u_u(l_598, (((0x598EL <= l_27) <= (safe_rshift_func_int8_t_s_u((g_153 = (safe_rshift_func_uint8_t_u_s(g_368, (0x7EBCL >= (g_612 = l_611))))), 6))) < g_69)))))) != 0x8551L), 7L));
    l_572 = (((((g_121 = (safe_div_func_uint16_t_u_u(l_611, g_434))) & l_21) | ((l_27 && ((safe_add_func_int16_t_s_s(l_28, (safe_lshift_func_int16_t_s_s((((g_520 = g_100) | (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(0xFAL, 2)), 0)) ^ (g_120 = ((g_69 = g_270) <= ((safe_lshift_func_int8_t_s_u(g_189, g_189)) && g_368)))) >= 0L), l_570))) == l_572), 0)))) && 0xED943A51L)) != l_21)) >= g_103) > 0xE6D4DE31L);
    return g_121;
}







static short func_4(unsigned p_5, unsigned char p_6)
{
    unsigned char l_589 = 255UL;
    int l_590 = 0x2A4D6AD2L;
    int l_591 = 0x9CA0A0CFL;
    for (g_189 = (-21); (g_189 < 43); g_189++)
    {
        unsigned l_588 = 4294967290UL;
        l_591 = (+func_54((((l_590 = func_60(func_60((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_153, func_64(p_6, (p_5 > (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0x12L, 5)), 7))), g_69))) || (!(4UL > (safe_mod_func_int32_t_s_s(((65526UL ^ (g_2 & 0x5DL)) >= g_368), l_588))))), g_214)), g_538, l_589), g_368, l_589)) <= p_5) != 4294967289UL), p_5, g_463, p_6));
        l_591 = (-6L);
        g_120 = (safe_add_func_int8_t_s_s(g_154, (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_5, (-1L))), l_589))));
        g_368 = g_214;
    }
    return g_270;
}







static int func_29(const int p_30, unsigned short p_31, unsigned p_32, unsigned short p_33, short p_34)
{
    unsigned short l_571 = 0x4580L;
    g_368 = l_571;
    return g_520;
}







static unsigned func_39(int p_40, unsigned p_41, unsigned p_42)
{
    int l_527 = 0x167A158CL;
    unsigned l_536 = 5UL;
    int l_537 = 0L;
    g_538 = (safe_div_func_uint8_t_u_u((g_90 = (safe_sub_func_int32_t_s_s(l_527, l_527))), func_64((safe_div_func_uint16_t_u_u(0x4867L, (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_60(g_69, p_40, (l_536 < (l_537 = g_188))), g_368)), p_42)), l_536)))), g_368, l_536)));
    for (g_189 = (-9); (g_189 >= 15); ++g_189)
    {
        char l_543 = (-1L);
        unsigned short l_566 = 0x77BBL;
        int l_569 = 8L;
        if ((safe_mod_func_int16_t_s_s((-4L), (l_543 ^ (!(((safe_lshift_func_int16_t_s_u(l_536, 10)) || g_103) > ((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((g_100 = 0x12639A6BL), (safe_add_func_uint32_t_u_u((p_40 != func_54(p_42, (safe_div_func_int16_t_s_s((+(safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_520, p_41)), g_69)) ^ l_536), p_40))))), g_463)), l_543, p_41)), g_110)))))) & 0xF537F280L)))))))
        {
            return g_110;
        }
        else
        {
            unsigned l_567 = 0x84D10E74L;
            unsigned short l_568 = 0UL;
            g_120 = ((safe_mul_func_uint8_t_u_u(p_41, (p_42 <= 0xA199L))) < (func_54(g_120, ((((l_569 = ((safe_mod_func_int16_t_s_s((func_47((func_47(((safe_rshift_func_int16_t_s_s(l_537, l_566)) < (g_154 | (l_567 == func_64((p_40 = func_64(l_543, g_368, p_40)), p_41, l_537)))), l_527) | l_537), l_537) || l_567), l_568)) || 0xD4L)) && 2UL) != 0xE5L) <= 1UL), p_42, p_42) <= p_42));
        }
    }
    p_40 = g_69;
    return g_99;
}







static int func_43(unsigned p_44, short p_45, unsigned char p_46)
{
    short l_440 = 0xCE33L;
    const int l_445 = (-1L);
    int l_450 = 1L;
    unsigned l_455 = 1UL;
    int l_458 = 0xE461BC19L;
    char l_488 = 0x49L;
    int l_509 = 0L;
    unsigned char l_521 = 255UL;
    int l_522 = 0xB2D5A250L;
    if ((safe_sub_func_uint16_t_u_u((g_188 == ((((8L <= g_270) != (safe_rshift_func_uint16_t_u_u(l_440, 4))) | (-3L)) ^ (safe_mod_func_int8_t_s_s((0x6E24L & (safe_add_func_int16_t_s_s((((l_445 | ((safe_add_func_int32_t_s_s(p_46, func_64((safe_sub_func_uint16_t_u_u(l_445, 0xF674L)), l_445, l_440))) >= p_45)) != p_44) && p_45), l_450))), g_189)))), p_45)))
    {
        short l_459 = 8L;
        int l_460 = 1L;
        int l_461 = (-1L);
        int l_462 = 1L;
        l_462 = (l_461 = (((safe_sub_func_uint16_t_u_u(0xBA0CL, p_46)) != (l_455 >= 0x9A0C4D33L)) & (safe_mul_func_uint8_t_u_u((l_458 = 0UL), ((~(l_460 = func_52(func_47(l_459, l_459)))) < g_2)))));
    }
    else
    {
        unsigned char l_466 = 0x5BL;
        int l_467 = 0x177F6988L;
lbl_508:
        g_120 = (((g_154 = 0x15B3629CL) <= (g_69 = 0x1A7CE520L)) < (g_463 = 0xC8D1L));
        for (l_440 = 9; (l_440 == (-24)); --l_440)
        {
            int l_468 = (-2L);
            int l_487 = 0x617977A9L;
            int l_502 = 5L;
            if ((l_467 = l_466))
            {
                unsigned short l_489 = 65527UL;
                int l_494 = 0xCC429925L;
                g_368 = (+((l_468 ^ (p_46 || (func_54((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((!((g_153 = p_46) < (safe_mod_func_uint16_t_u_u(l_450, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((p_44 < (safe_rshift_func_uint8_t_u_s(((g_188 = (safe_add_func_int32_t_s_s((-1L), (safe_sub_func_uint32_t_u_u(g_188, 0xBD6D8D53L))))) || ((l_487 = p_46) != (-4L))), l_488))), l_489)) | (-9L)), l_488)), g_121)))))), l_468)), 0x80C7L)), l_458, g_120, l_489) >= 0x8AL))) ^ 0L));
                l_494 = (((g_121 & (((l_467 = l_440) == p_45) ^ l_487)) | l_455) <= (+(l_458 = ((l_466 || (g_90 == (safe_rshift_func_uint8_t_u_u(func_60(p_45, p_45, g_69), p_46)))) || g_418))));
                l_458 = l_466;
            }
            else
            {
                unsigned l_501 = 0UL;
                const unsigned l_503 = 0x8BE23AFDL;
                l_468 = (l_458 = ((safe_mod_func_int16_t_s_s((p_45 = (safe_mul_func_uint16_t_u_u(func_60(g_99, l_466, func_47((p_46 = func_64(g_463, ((l_466 && (safe_rshift_func_int16_t_s_u((l_468 ^ (g_418 = 1UL)), 1))) ^ 0x35DAL), ((((l_501 = ((g_270 ^ (func_60(g_434, l_455, p_45) >= 0xCA8DL)) >= 1L)) && 0x70BC3DA8L) != 0L) || 0xFDB39CC4L))), l_450)), 0x662EL))), l_502)) < p_44));
                g_120 = l_503;
                g_120 = 0xF709D5F9L;
                for (p_44 = 0; (p_44 < 38); p_44 = safe_add_func_uint16_t_u_u(p_44, 3))
                {
                    l_467 = func_64(((l_468 == 7UL) ^ g_188), (safe_rshift_func_int8_t_s_u(p_45, g_121)), p_45);
                    if (g_100)
                        goto lbl_508;
                }
            }
            l_509 = l_440;
        }
        return l_466;
    }
    g_368 = (((!(((l_522 = ((((g_520 = (safe_div_func_uint32_t_u_u(((0UL || (p_44 > (safe_sub_func_uint32_t_u_u((g_110 < (!l_440)), (0x4C56L && l_455))))) || (safe_add_func_int16_t_s_s((l_458 = (safe_rshift_func_uint8_t_u_u(l_450, g_90))), (g_188 = (p_44 < l_440))))), g_270))) <= l_521) || l_450) > g_103)) ^ 0x64CDL) & p_46)) >= l_445) && 0UL);
    l_458 = l_445;
    l_522 = (g_120 <= l_509);
    return l_522;
}







static unsigned func_47(unsigned char p_48, int p_49)
{
    unsigned l_403 = 4294967291UL;
    const unsigned l_416 = 0x6BACA21FL;
    short l_417 = 0xE52FL;
    int l_419 = (-1L);
    unsigned l_422 = 0x5CF69D18L;
    int l_429 = 0x250DB7EAL;
    int l_433 = 0xC3D9B55EL;
    g_368 = l_403;
    l_419 = (p_48 >= (safe_add_func_int32_t_s_s((p_48 <= (p_48 <= (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_418 = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_48, (safe_mul_func_uint16_t_u_u(((l_416 != p_48) & l_417), (0UL == p_49))))), 3))), 7)), g_214)))), g_270)));
    l_433 = ((safe_mod_func_uint8_t_u_u(p_49, func_54(l_422, ((safe_mul_func_uint8_t_u_u(((func_54(((-1L) | ((g_432 = (safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((l_429 = (~(l_419 = g_100))), l_403)) & ((safe_lshift_func_uint8_t_u_s((p_49 != l_422), p_48)) && g_154)), l_403))) <= g_189)), g_120, l_433, g_214) || l_416) && g_103), l_422)) > l_416), p_48, g_434))) <= l_433);
    return g_188;
}







static unsigned char func_52(char p_53)
{
    char l_59 = 1L;
    int l_68 = (-1L);
    int l_80 = 1L;
    int l_89 = 0x9C015C40L;
    int l_158 = 0xF8D1F2F8L;
    unsigned char l_310 = 255UL;
    l_158 = func_54(l_59, ((g_121 = (func_60((l_80 = func_64(g_2, ((l_68 = l_59) >= (!0xF5E2L)), l_59)), g_2, (g_90 = ((l_89 = (safe_mul_func_int8_t_s_s((4294967295UL && (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_2, l_59)), l_59)), p_53))), l_59))) != g_2))) < (-1L))) <= (-1L)), g_2, l_59);
    for (l_59 = 0; (l_59 != 28); l_59++)
    {
        const short l_187 = 0x20EFL;
        int l_202 = 0x24D0950DL;
        const char l_256 = 0L;
        int l_284 = 0L;
        unsigned l_370 = 4UL;
        unsigned l_371 = 4294967286UL;
        g_189 = (p_53 > ((g_153 = (l_158 != func_60(g_69, (safe_add_func_uint32_t_u_u(((!(safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((l_68 = (l_89 = g_121)) != (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_53, (g_188 = (((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_100 || ((safe_lshift_func_int8_t_s_u(p_53, 6)) != (~(safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((g_99 & g_90), 6)), g_120)), p_53))))), l_80)), 0x0C0BL)) || 0x6959L) < l_187)))), l_187)) | 0xBBL) > g_99), g_103)) ^ (-8L)) <= l_59), 4))), l_187)), 0x0AL))) ^ p_53), p_53)), l_187))) & l_80));
        for (g_121 = (-26); (g_121 != 11); g_121++)
        {
            unsigned l_208 = 1UL;
            int l_221 = 0x6EEAA0BBL;
            unsigned short l_243 = 0x5554L;
            const int l_314 = 0xCD5AEAFDL;
            int l_352 = 0x2AFB47A1L;
            if ((safe_lshift_func_int16_t_s_u(p_53, p_53)))
            {
                short l_203 = 0xA524L;
                int l_211 = 0x6881A2BAL;
                unsigned char l_241 = 0x64L;
                g_120 = ((safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((func_54(p_53, (l_202 = (safe_rshift_func_int16_t_s_s(0x69C4L, 1))), (l_89 = (l_203 || (248UL && g_189))), (safe_add_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(0UL, p_53)) != (l_158 = g_153)) & (l_208 = l_203)), 0x8D1CA076L))) < g_99), 3)), (-1L))) >= p_53), p_53)) | 0xD849L);
                if (((safe_mod_func_uint16_t_u_u((l_89 = ((g_188 || func_64(g_2, (g_189 = ((l_203 && l_208) == 0x78L)), p_53)) & 1UL)), (l_202 = (l_211 = l_158)))) != p_53))
                {
                    l_221 = (safe_mod_func_int16_t_s_s(((l_211 = ((func_54(g_154, p_53, (g_214 = (g_103 & (1L | p_53))), (l_202 <= (safe_mul_func_int16_t_s_s(l_208, (1UL == ((safe_mul_func_int16_t_s_s(g_153, p_53)) < 0x26L)))))) && l_89) == 0x6487L)) ^ g_110), 0x0683L));
                    g_120 = 0x5332FEFFL;
                }
                else
                {
                    char l_251 = 4L;
                    for (g_103 = 0; (g_103 != 29); g_103 = safe_add_func_int8_t_s_s(g_103, 3))
                    {
                        int l_240 = 0xF32CBD3EL;
                        int l_242 = 0xAB1173BAL;
                        g_120 = (safe_sub_func_uint16_t_u_u((0x1363E690L < l_89), (safe_mul_func_uint16_t_u_u((func_54(l_187, l_221, (l_80 = ((l_208 != func_64(((0xA63C7B2EL && (safe_mul_func_uint16_t_u_u(65535UL, (safe_lshift_func_int16_t_s_s((l_242 = ((l_202 = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_68 = (safe_lshift_func_int16_t_s_u(g_153, l_221))), l_240)), l_241)), 4L))) >= 0x6F7BL)), 11))))) < 0xA8L), p_53, l_208)) == g_103)), g_153) && p_53), 0x317CL))));
                        if (l_241)
                            break;
                        l_242 = func_64(l_243, g_2, (((g_189 = (func_64((safe_lshift_func_int16_t_s_u((-1L), (p_53 <= (5L <= (!(9L & ((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(p_53, func_64((((l_202 = g_99) > g_154) >= 0x8CBBL), g_121, g_189))), 7)) | 0x4248L))))))), g_154, g_103) != g_110)) != g_99) < 0L));
                    }
                    if (l_203)
                        break;
                    if (p_53)
                        continue;
                    if (p_53)
                    {
                        int l_250 = 5L;
                        l_202 = (g_120 > l_211);
                        g_154 = l_250;
                        if (l_251)
                            continue;
                        g_120 = p_53;
                    }
                    else
                    {
                        g_120 = 0x971FE1FCL;
                        return p_53;
                    }
                }
            }
            else
            {
                int l_285 = (-1L);
                for (g_99 = 6; (g_99 == 6); g_99 = safe_add_func_uint16_t_u_u(g_99, 1))
                {
                    unsigned char l_269 = 9UL;
                    int l_286 = 0xCE8927BEL;
                    g_120 = g_2;
                    g_154 = p_53;
                    for (g_214 = 0; (g_214 > (-3)); --g_214)
                    {
                        unsigned short l_279 = 8UL;
                        g_270 = (l_221 = func_54(g_189, l_256, p_53, ((+0x52AAL) & (((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((p_53 && (p_53 == g_100)), (g_99 >= ((((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((~g_2) & p_53) ^ 65530UL), g_103)), 0UL)), p_53)) || 0xDCC67E5AL) <= g_214) | l_269)))), 0xA7472D96L)) >= g_120) <= g_103))));
                        g_154 = (safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((l_286 = (g_90 < (g_2 | ((safe_add_func_int16_t_s_s(l_279, (l_285 = ((safe_sub_func_uint8_t_u_u(g_154, (g_90 != (l_284 = (l_89 = (+((l_202 = ((g_69 = (safe_rshift_func_int8_t_s_s(p_53, 3))) < (+p_53))) && 0xC0L))))))) | g_154)))) != l_279)))), l_269)) | l_279), p_53));
                    }
                    l_284 = l_68;
                }
                l_285 = (safe_mod_func_int16_t_s_s(p_53, 0x00CDL));
                for (g_103 = (-26); (g_103 <= 30); ++g_103)
                {
                    const int l_309 = 0xB5ACFBA1L;
                    for (l_284 = 0; (l_284 > 18); l_284 = safe_add_func_uint8_t_u_u(l_284, 6))
                    {
                        int l_311 = (-1L);
                        l_311 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((g_121 >= (+(safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_53, p_53)) & (safe_div_func_uint8_t_u_u(((p_53 & 0x1DFAL) == ((l_202 = (((safe_mul_func_uint16_t_u_u(func_54(((((!0xDA7B0075L) == (l_310 = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((func_54(l_285, l_309, l_208, g_121) && p_53), p_53)), 0x2638L)))) == 6L) & 0x68L), l_285, p_53, g_189), 0xD1C9L)) & g_90) ^ 0x3E21F936L)) <= g_121)), 0x78L))), 0UL)))), 1L)), 1));
                        return p_53;
                    }
                }
            }
            if (func_64((((l_221 = 0x5FE0F0C4L) && (p_53 == g_90)) & ((g_188 | (l_208 >= l_59)) == 1UL)), (safe_rshift_func_uint8_t_u_u((l_314 > p_53), 6)), g_120))
            {
                return p_53;
            }
            else
            {
                const unsigned short l_325 = 0x0B8CL;
                const short l_330 = (-5L);
                unsigned l_331 = 0xD0E754D6L;
                g_120 = 7L;
                g_120 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((g_90 = (((l_221 = l_68) >= (g_154 = (safe_rshift_func_int16_t_s_s(g_153, (+(p_53 != ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_189, l_325)), (safe_sub_func_uint8_t_u_u(l_208, p_53)))) > (((~((safe_sub_func_int32_t_s_s(l_208, l_330)) && (-4L))) && 7L) ^ l_208)))))))) < 0x43F5AAB5L)) & l_331), 2)), 3UL));
                g_120 = (l_221 >= l_158);
            }
            if ((l_352 = ((0x37B5L && 0xB5BDL) == (safe_div_func_int8_t_s_s(g_2, (safe_mod_func_int32_t_s_s((l_221 = ((safe_lshift_func_int16_t_s_u((l_284 = (safe_div_func_uint8_t_u_u(((l_202 = l_187) == g_100), (((safe_mul_func_uint8_t_u_u((g_90 = 1UL), (safe_add_func_int32_t_s_s(l_89, (safe_mul_func_int16_t_s_s((func_64(p_53, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_120, 0xF9L)), 0x19AFL)), 7)), p_53) == (-1L)), l_59)))))) >= 5UL) ^ p_53)))), p_53)) | g_270)), g_188)))))))
            {
                unsigned l_363 = 0x4B727EF4L;
                unsigned l_369 = 0x87D9E4C9L;
                if (((((safe_lshift_func_uint8_t_u_s(g_90, func_60(p_53, p_53, g_100))) <= (((l_284 = (safe_rshift_func_uint16_t_u_s(p_53, 5))) >= (safe_rshift_func_uint8_t_u_s((((l_371 = (safe_lshift_func_uint8_t_u_u((l_80 = (l_202 = ((safe_add_func_uint8_t_u_u((((l_363 < ((safe_div_func_uint32_t_u_u(((0x8DL != (!(g_368 = g_214))) <= l_363), l_369)) && 0x95CDL)) && l_370) == 252UL), l_363)) ^ g_90))), l_221))) | 255UL) || 0x3317L), g_189))) == (-1L))) < g_99) > 0xEF035144L))
                {
                    char l_382 = 0x6FL;
                    int l_385 = (-1L);
                    for (g_154 = 0; (g_154 == (-16)); g_154 = safe_sub_func_uint8_t_u_u(g_154, 5))
                    {
                        short l_386 = 0xBC26L;
                        l_221 = p_53;
                        g_368 = (safe_div_func_int32_t_s_s((g_120 = ((safe_rshift_func_int8_t_s_s(1L, 3)) || (p_53 >= (0x20L | ((((g_100 && ((safe_rshift_func_uint16_t_u_u(0xB8D8L, (l_352 = (l_386 = (!func_64(g_368, func_64((l_382 = 0x5727A9A3L), p_53, ((safe_rshift_func_int16_t_s_s((l_385 && p_53), 8)) ^ 0UL)), g_214)))))) ^ g_214)) < g_368) >= (-6L)) == g_120))))), 8UL));
                        return g_214;
                    }
                }
                else
                {
                    return g_120;
                }
            }
            else
            {
                for (l_68 = 11; (l_68 <= (-24)); l_68--)
                {
                    unsigned l_397 = 0xD00403DCL;
                    l_284 = ((safe_sub_func_uint16_t_u_u(g_99, (p_53 | (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_314, p_53)) || (safe_add_func_uint32_t_u_u(l_397, (safe_mul_func_int8_t_s_s(p_53, ((func_60((safe_mod_func_int32_t_s_s(l_397, l_397)), g_90, p_53) & p_53) | 0x89242FC2L)))))), l_397))))) == 255UL);
                }
                g_368 = (safe_unary_minus_func_uint16_t_u(l_89));
            }
            if (p_53)
                break;
        }
    }
    return l_68;
}







static int func_54(int p_55, const unsigned char p_56, char p_57, const unsigned short p_58)
{
    unsigned short l_124 = 0UL;
    unsigned short l_152 = 0x513FL;
    int l_155 = 0xA07A5590L;
    unsigned short l_156 = 0x7743L;
    short l_157 = (-1L);
    p_55 = (safe_mul_func_int16_t_s_s(l_124, (0x23L == l_124)));
    l_156 = ((l_155 = (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((0x0E15L >= ((safe_lshift_func_uint8_t_u_s((0xC3L || (p_57 = ((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s(l_124, g_103)) >= (safe_add_func_uint16_t_u_u(l_124, (g_154 = (safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_110, (g_153 = (p_57 & func_64((safe_mul_func_int16_t_s_s(((((g_69 = (((safe_add_func_int8_t_s_s(((l_124 ^ ((((((safe_sub_func_uint16_t_u_u(l_124, g_121)) < g_121) <= p_55) <= l_124) > p_58) > p_56)) != 0x69D4L), g_99)) < 0x0C890823L) | l_152)) || p_55) && l_152) & l_124), g_99)), p_56, p_57))))), 255UL)))))))) >= 3L))), l_152)) ^ p_55)), 0x85DAL)), l_124)), p_55)), g_90))) | g_99);
    g_154 = 1L;
    return l_157;
}







static unsigned char func_60(unsigned p_61, char p_62, unsigned p_63)
{
    unsigned char l_93 = 251UL;
    int l_98 = 0xD9AAD11CL;
    unsigned l_111 = 0x06A2EEAFL;
    int l_118 = 1L;
    char l_119 = (-1L);
    g_100 = (safe_mod_func_int32_t_s_s((l_93 || (p_63 | (((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((((l_98 = l_93) != p_61) | 0xFCL), ((((!func_64(l_93, p_63, g_99)) | g_2) | g_2) < 1L))), g_2)) & p_63) > l_93))), l_93));
    g_103 = (safe_mod_func_int8_t_s_s((((func_64(func_64(p_61, g_99, p_62), g_2, ((g_100 != (p_62 >= (255UL <= g_100))) < 8UL)) <= 4294967295UL) | 0xB757L) > 0UL), 5UL));
    g_120 = (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((l_93 > g_100), (safe_rshift_func_int8_t_s_s(func_64((g_110 = l_98), (0xFEL > ((~l_111) >= func_64(l_98, (safe_mod_func_int8_t_s_s(l_98, (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(g_100, (l_118 = (~1L)))), p_63)))), l_119))), l_119), 4)))) ^ g_99) & 0x2FA99DB6L), l_93));
    return l_119;
}







static unsigned func_64(int p_65, const unsigned p_66, unsigned p_67)
{
    char l_76 = 0x38L;
    int l_78 = (-1L);
    int l_79 = 0x76B84923L;
    if (p_67)
    {
        p_65 = (-1L);
        if ((g_69 = g_2))
        {
            p_65 = p_66;
            for (p_65 = (-8); (p_65 < 26); p_65++)
            {
                char l_72 = 0L;
                l_72 = 0xB31915E3L;
            }
        }
        else
        {
            unsigned short l_73 = 6UL;
            l_73 = (0xCCL || g_2);
        }
        for (p_67 = 9; (p_67 < 4); p_67 = safe_sub_func_int16_t_s_s(p_67, 7))
        {
            unsigned short l_77 = 0xCF50L;
            p_65 = p_66;
            l_79 = (((l_76 = p_66) == p_67) & (l_78 = ((l_77 = (0xDF500C33L && (!(p_65 = 5L)))) > p_67)));
            p_65 = l_77;
        }
    }
    else
    {
        l_78 = l_76;
    }
    l_79 = ((~p_67) <= p_67);
    return l_78;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
