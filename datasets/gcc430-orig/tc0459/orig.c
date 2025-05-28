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
   unsigned short f0;
   unsigned short f1;
   int f2;
   unsigned f3 : 26;
};


static volatile unsigned g_15 = 0x13245616L;
static short g_48 = 8L;
static char g_74 = (-8L);
static struct S0 g_77 = {65532UL,0x3A56L,-4L,7789};
static char g_113 = 0x42L;
static short g_121 = 0x962FL;
static int g_124 = 1L;
static struct S0 g_128 = {0xD6B8L,1UL,0xF2DDDEE6L,8084};
static char g_150 = 0x4AL;
static short g_163 = 0x6408L;
static char g_230 = 0x65L;
static int g_234 = 9L;
static struct S0 g_278 = {0UL,0xD9E7L,0L,2474};
static unsigned g_281 = 0x03686D0EL;
static int g_285 = 0x8FA397C7L;
static short g_317 = 1L;
static unsigned g_356 = 0xC8D2CA16L;
static char g_382 = 1L;
static unsigned short g_469 = 0x9018L;
static unsigned short g_470 = 0x7C46L;
static char g_472 = (-6L);
static unsigned g_491 = 0x909B225CL;
static int g_543 = 0xE027D985L;
static unsigned g_582 = 0xE42780EBL;
static unsigned g_609 = 4294967293UL;
static struct S0 g_627 = {65535UL,0x8B84L,0xEFDEA1CBL,7621};
static unsigned g_630 = 4294967289UL;
static int g_692 = 0xCCA5A0DBL;
static short g_701 = 1L;
static unsigned char g_823 = 255UL;
static int g_824 = 0xE80BBB10L;
static unsigned g_1021 = 0x5491342EL;
static struct S0 g_1100 = {0xAE2EL,65535UL,0x61F1CFF4L,6317};
static int g_1307 = 0L;
static int g_1308 = 1L;
static char g_1419 = 0xE7L;
static unsigned char g_1523 = 0xBAL;
static unsigned g_1793 = 0x4C29BED3L;
static unsigned char g_1794 = 255UL;
static unsigned char g_1851 = 0UL;



static unsigned short func_1(void);
static short func_6(unsigned short p_7, const unsigned short p_8, unsigned char p_9, unsigned char p_10, const int p_11);
static unsigned char func_18(int p_19, unsigned p_20, unsigned p_21, unsigned short p_22);
static unsigned char func_34(unsigned short p_35, unsigned short p_36);
static unsigned short func_37(char p_38);
static int func_41(struct S0 p_42, int p_43);
static int func_45(unsigned char p_46, int p_47);
static char func_49(unsigned p_50, short p_51, short p_52, int p_53, unsigned char p_54);
static unsigned func_55(char p_56, char p_57, struct S0 p_58, unsigned short p_59, unsigned p_60);
static int func_65(unsigned char p_66, char p_67, unsigned short p_68, struct S0 p_69);
static unsigned short func_1(void)
{
    char l_12 = 0xE5L;
    unsigned short l_29 = 65535UL;
    int l_1113 = 0x323227DFL;
    short l_1422 = 6L;
    int l_1852 = 0xE6CB7230L;
    l_1852 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((func_6(l_12, ((((safe_sub_func_uint32_t_u_u((g_1793 = (g_15 != (0x1D59L && ((((func_18((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_29 >= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_12, func_34((l_1113 = func_37(l_29)), l_29))), 0x0BA3L)) != g_630)), l_12)), 1L)), 0xCBA4AA11L)), l_1422, l_29, l_1422) & 0xECL) && g_74) > 246UL) > g_1793)))), l_29)) & l_1422) < g_1794) < (-1L)), g_1794, l_12, g_1794) > 0x1D0DL), 6)), g_1851));
    g_285 |= l_1113;
    return g_627.f3;
}







static short func_6(unsigned short p_7, const unsigned short p_8, unsigned char p_9, unsigned char p_10, const int p_11)
{
    unsigned l_1795 = 3UL;
    int l_1796 = 1L;
    struct S0 l_1797 = {2UL,0UL,-1L,7262};
    unsigned l_1822 = 4294967295UL;
    int l_1823 = 0L;
    int l_1848 = 1L;
    l_1796 ^= l_1795;
    l_1797 = (g_278 = l_1797);
    for (g_1100.f2 = (-8); (g_1100.f2 <= 15); g_1100.f2 = safe_add_func_uint16_t_u_u(g_1100.f2, 5))
    {
        short l_1821 = 1L;
        int l_1849 = (-6L);
        for (g_1523 = 0; (g_1523 < 26); g_1523 = safe_add_func_int8_t_s_s(g_1523, 6))
        {
            int l_1814 = 0xB84B0721L;
            struct S0 l_1850 = {0x7B3AL,7UL,0x41D76698L,4344};
            g_824 &= (safe_sub_func_uint8_t_u_u((l_1823 = (l_1797.f2 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((!0x3CL), (p_9 = (p_7 && (safe_lshift_func_int16_t_s_s((g_317 ^= (g_469 > (p_9 ^ (p_10 = ((p_10 == (safe_lshift_func_int16_t_s_s(g_1100.f2, 14))) != (l_1814 > ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((!(safe_add_func_uint16_t_u_u(func_65(l_1821, p_11, p_11, l_1797), l_1822))), l_1814)), 0L)) == g_1419))))))), 8)))))), 0x385B7F1BL)), p_8)))), 0x8AL));
            l_1849 &= (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_469, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((~(safe_mul_func_uint16_t_u_u(0xFC7CL, (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((~(safe_rshift_func_int8_t_s_u(p_9, (safe_mod_func_uint32_t_u_u(0xE0A9CA9DL, (((0x8A98D21CL & 0x1CE53A23L) != g_1308) | l_1821)))))) != l_1795), 65527UL)) & g_630) > g_1794), l_1797.f1)), 2)))), l_1821))))) && l_1848) == g_113), 4)), g_278.f2)))), 0x1DB1L));
            g_285 = g_150;
            l_1797 = l_1850;
        }
    }
    return l_1822;
}







static unsigned char func_18(int p_19, unsigned p_20, unsigned p_21, unsigned short p_22)
{
    unsigned short l_1425 = 0xFCD7L;
    int l_1430 = (-1L);
    int l_1431 = (-1L);
    int l_1436 = 0x4277BFC7L;
    int l_1441 = (-8L);
    int l_1442 = (-9L);
    int l_1454 = 0x6A77EE21L;
    int l_1490 = 1L;
    int l_1536 = 0xF83483A0L;
    const struct S0 l_1580 = {0xF6A5L,0x056BL,0x24095148L,8006};
    char l_1583 = (-3L);
    unsigned l_1584 = 0x1F7AA5C9L;
    int l_1610 = 1L;
    const char l_1669 = 0x9CL;
    short l_1680 = 0xE9ABL;
    unsigned char l_1743 = 6UL;
    struct S0 l_1792 = {0x0962L,0xB028L,0x06D4B592L,7715};
    if ((((+((g_281 ^= (safe_div_func_uint8_t_u_u((func_65(l_1425, (l_1442 = (l_1441 = (safe_add_func_uint16_t_u_u(p_20, ((safe_lshift_func_int8_t_s_s(((l_1430 |= (g_77.f2 = p_20)) != (l_1431 = 4294967295UL)), 6)) < (safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((l_1436 = (1L & 0L)) > ((l_1425 | (safe_lshift_func_uint8_t_u_s(((l_1425 && (safe_lshift_func_int16_t_s_s(((g_278.f2 & 0x7E82L) || 5UL), g_77.f1))) > 0xD4L), 7))) == (-9L))), l_1425)), l_1425))))))), g_163, g_1100) >= g_630), g_627.f1))) ^ 0x59E88E2AL)) <= g_627.f3) == p_22))
    {
        unsigned char l_1449 = 0UL;
        unsigned l_1455 = 0x22FE0133L;
        int l_1456 = 0L;
        for (g_278.f1 = (-23); (g_278.f1 < 36); g_278.f1 = safe_add_func_int16_t_s_s(g_278.f1, 5))
        {
            unsigned short l_1448 = 0x49CFL;
            int l_1458 = 0L;
            char l_1477 = 0xB0L;
            struct S0 l_1505 = {8UL,0xCFD5L,0xA84D311BL,7634};
            const unsigned char l_1544 = 0x29L;
            char l_1585 = 0L;
            char l_1598 = 0x4AL;
            for (g_128.f0 = 0; (g_128.f0 > 14); ++g_128.f0)
            {
                char l_1447 = 0x42L;
                unsigned l_1457 = 0UL;
                l_1448 = l_1447;
                if (l_1449)
                    continue;
                l_1458 = ((l_1456 ^= ((func_49((safe_sub_func_int16_t_s_s((l_1431 & (p_19 == (p_19 > func_49(p_20, p_19, func_49((l_1448 | (1UL <= (safe_div_func_uint8_t_u_u(1UL, func_49((g_77.f0 ^ l_1454), g_278.f2, p_22, p_22, g_469))))), l_1448, l_1449, l_1455, p_19), p_20, l_1448)))), p_21)), l_1454, g_234, p_21, g_627.f0) < l_1442) < 0xD3L)) | l_1457);
            }
            if ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(253UL, l_1448)), (safe_div_func_uint32_t_u_u(g_48, (safe_mul_func_uint8_t_u_u(g_1021, (func_49(p_20, ((safe_mod_func_int32_t_s_s((((((((safe_add_func_uint32_t_u_u(0x0EBE1E59L, l_1448)) <= (l_1458 > ((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((p_22 = (l_1477 = (safe_mul_func_int16_t_s_s(func_49(l_1430, g_630, g_77.f2, l_1441, p_21), l_1441)))) == 0L), l_1458)), p_21)) != (-2L)))) & g_121) != g_77.f1) & g_285) ^ p_21) || l_1441), g_77.f2)) >= p_20), l_1458, l_1458, l_1455) != 7UL))))))))
            {
                unsigned l_1478 = 0x20B14043L;
                int l_1479 = 0x947FD472L;
                int l_1501 = 0x8B3AE66DL;
                unsigned short l_1516 = 0xE3ABL;
                struct S0 l_1558 = {0x604AL,2UL,1L,3322};
                int l_1577 = 0x29DA4040L;
                l_1479 ^= l_1478;
                g_824 = (safe_add_func_uint8_t_u_u((g_823 >= (safe_add_func_uint8_t_u_u(g_1100.f2, ((safe_sub_func_uint8_t_u_u((3L > (!p_22)), func_49(((65532UL && (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((0xF07BL >= g_1100.f3), (l_1479 = (-1L)))) & func_49((func_49(l_1448, l_1478, l_1490, l_1458, g_824) != l_1478), l_1478, l_1431, l_1477, l_1442)) ^ 0x3C3D3A1BL), 12))) != g_278.f1), l_1454, l_1478, g_317, g_234))) && 65534UL)))), 0UL));
                if (g_230)
                {
                    unsigned char l_1498 = 0UL;
                    struct S0 l_1504 = {65535UL,1UL,-6L,3831};
                    l_1442 = (p_22 & (p_20 >= (p_21 = (g_582 = (g_77.f3 = (safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((l_1436 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((g_1100.f3 == g_113) && 0xFAL), func_49(l_1498, (l_1490 &= g_543), p_22, (func_49(((safe_mod_func_int8_t_s_s(0x41L, 255UL)) > 0x8144L), l_1454, p_21, l_1430, g_317) == 0L), l_1478))) >= g_491), p_21))), g_382)))))))));
                    l_1501 = g_124;
                    for (g_128.f1 = (-29); (g_128.f1 <= 48); ++g_128.f1)
                    {
                        int l_1528 = 1L;
                        unsigned l_1529 = 0xD171D1B8L;
                        l_1505 = l_1504;
                        if (l_1504.f2)
                            break;
                        g_285 &= (safe_lshift_func_int16_t_s_u((l_1456 = ((safe_add_func_int32_t_s_s((-4L), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((!0xA6A5L), (l_1431 &= (l_1516 = (!(safe_lshift_func_int16_t_s_s(p_21, 9))))))), l_1477)))) && (safe_sub_func_uint8_t_u_u((l_1529 = ((safe_lshift_func_int8_t_s_u((p_22 ^ ((safe_lshift_func_uint16_t_u_u((p_19 >= (g_1523 = (g_823 ^= (g_356 > p_22)))), 10)) ^ (l_1504.f2 &= (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(0UL, l_1528)), 0))))), 5)) < 0x3ADDL)), 0xD0L)))), 2));
                        l_1504 = g_128;
                    }
                }
                else
                {
                    int l_1543 = 0x82CAADBDL;
                    int l_1557 = (-1L);
                    for (g_121 = 0; (g_121 != 25); ++g_121)
                    {
                        short l_1537 = 0xF340L;
                        int l_1538 = 0xE22D3E6FL;
                        l_1538 = (safe_add_func_int8_t_s_s(l_1455, (safe_add_func_uint8_t_u_u(((l_1536 = 0UL) <= l_1537), 0xA7L))));
                        l_1479 = (l_1477 ^ (g_278.f1 <= ((func_49(((p_22 >= (0xA31DL < (safe_mod_func_uint8_t_u_u(l_1505.f1, l_1538)))) | (((p_21 & (safe_mod_func_uint8_t_u_u((func_49((0x37F65627L || l_1425), l_1537, l_1477, l_1543, l_1477) || l_1544), (-1L)))) >= p_22) <= 0x8115DA86L)), p_19, p_20, l_1456, g_77.f3) | p_22) > p_20)));
                        return g_234;
                    }
                    if ((l_1543 ^= 0xD0A534B7L))
                    {
                        struct S0 l_1545 = {0UL,0x9D31L,0L,2318};
                        g_128 = l_1545;
                        l_1456 |= 0xD9DA2DA6L;
                        l_1543 = p_22;
                        g_1307 = (safe_rshift_func_uint8_t_u_u((255UL & ((safe_lshift_func_int16_t_s_s(g_824, (safe_add_func_uint8_t_u_u(p_20, ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(func_49((8L < l_1543), (safe_sub_func_int16_t_s_s((func_65((l_1557 = ((l_1456 = g_278.f1) >= func_65(g_163, g_128.f3, g_1523, l_1545))), l_1455, g_356, g_627) ^ l_1545.f1), g_1308)), l_1505.f0, p_20, l_1505.f3))), g_1307)) ^ p_19))))) & l_1501)), l_1478));
                    }
                    else
                    {
                        g_627 = l_1558;
                    }
                }
                if (g_281)
                {
                    return p_19;
                }
                else
                {
                    unsigned short l_1569 = 65531UL;
                    struct S0 l_1574 = {0xAEB4L,0UL,0x89759F67L,1454};
                    for (g_77.f0 = 21; (g_77.f0 < 50); ++g_77.f0)
                    {
                        g_285 |= ((l_1536 = (p_22 ^ func_49(g_1100.f0, p_21, ((safe_sub_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((0xFC60L ^ l_1448), p_22)), (safe_lshift_func_uint8_t_u_u((l_1569 != (safe_add_func_int16_t_s_s(p_20, g_609))), 0)))) != p_22) >= 9L), 0xBCAF695BL)) ^ g_627.f2), l_1456, g_128.f3))) != 0x69DAL);
                    }
                    for (g_823 = (-4); (g_823 >= 29); ++g_823)
                    {
                        g_128 = l_1574;
                        g_627.f2 ^= (safe_rshift_func_uint8_t_u_u(func_65(p_19, l_1577, l_1574.f2, g_77), (safe_lshift_func_uint16_t_u_u(g_48, 7))));
                    }
                    if (l_1574.f1)
                    {
                        int l_1599 = 4L;
                        int l_1600 = 0x54FA589FL;
                        g_77 = l_1580;
                        g_285 |= (l_1600 = func_65(g_128.f2, (safe_lshift_func_int16_t_s_s(func_49((l_1569 == ((~func_49(((l_1536 = (~(g_278.f1 != (l_1584 = l_1583)))) > func_49(l_1585, l_1505.f3, (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_281 = (p_20 = ((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_1479 = func_49((l_1574.f0 >= (g_77.f2 & g_472)), l_1598, g_278.f1, l_1599, g_1021)), p_22)), 65532UL)) == g_1100.f2))), 0xDEEC203AL)), 1)), l_1455)), 1UL)), g_823, p_22)), g_278.f2, g_317, p_22, p_22)) | 0x07B1L)), l_1505.f2, g_278.f1, l_1599, p_21), l_1431)), g_1307, g_77));
                    }
                    else
                    {
                        const unsigned l_1601 = 4294967295UL;
                        g_1307 = (p_19 && l_1601);
                        g_692 = p_22;
                        g_627.f2 ^= (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((4UL ^ ((safe_lshift_func_int8_t_s_s(((l_1558.f2 ^= l_1610) || (g_278.f3 >= (~((+(((247UL > 0x6EL) ^ (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_1574.f1, (l_1458 |= p_19))), (safe_mul_func_int8_t_s_s(g_609, 0xD3L))))) <= 0xC2DBL)) || l_1442)))), p_22)) || g_113)), p_22)) > g_692), 9UL)) < l_1477), g_77.f1));
                    }
                    l_1458 ^= g_382;
                }
            }
            else
            {
                l_1536 ^= func_65(p_19, g_1523, g_627.f3, (g_128 = l_1580));
            }
            if (g_121)
                break;
        }
        l_1456 ^= l_1580.f2;
        l_1431 = p_21;
    }
    else
    {
        int l_1622 = 4L;
        struct S0 l_1626 = {0x3D0EL,65533UL,-7L,4522};
        int l_1734 = 0L;
        short l_1738 = 0x3D90L;
        if ((p_19 == (g_1523 = (g_823 = (((safe_lshift_func_int16_t_s_u((((func_55(p_19, l_1425, l_1580, (p_22 = ((safe_mul_func_uint16_t_u_u(0x3F88L, (g_1100.f0 & ((func_55((safe_unary_minus_func_int8_t_s((func_45(l_1580.f1, (1UL | l_1536)) || p_22))), l_1441, g_1100, p_20, l_1622) != l_1584) && g_128.f3)))) || g_543)), g_701) & 0xA70A1E4BL) != g_1100.f1) >= 1L), 8)) && l_1610) | l_1580.f0)))))
        {
            unsigned char l_1623 = 250UL;
            int l_1624 = 0x53A79F96L;
            int l_1625 = 1L;
            struct S0 l_1627 = {0x2EC1L,1UL,7L,408};
            int l_1777 = 0x8A9B8A98L;
            l_1625 |= func_49(g_630, (g_692 | g_582), g_1100.f1, g_627.f2, (p_20 || func_65((l_1623 & g_74), l_1624, p_20, g_77)));
            g_77.f2 = 0x03B1EC1AL;
            if ((l_1622 = ((g_77.f0 < (0x16L >= (g_1523 = (l_1442 = (0x8054L || 0x6EBBL))))) < (0x94L < ((255UL > g_121) ^ g_278.f0)))))
            {
                const int l_1647 = 0xC18C9409L;
                int l_1670 = 0x33544C7CL;
                l_1626 = g_128;
                l_1627 = g_1100;
                for (g_630 = (-16); (g_630 > 21); g_630 = safe_add_func_int32_t_s_s(g_630, 5))
                {
                    short l_1638 = 0x11ADL;
                    if ((g_627.f2 = (((safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((l_1536 = (l_1610 = (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((g_627.f3 ^ l_1623), p_20)) < (l_1442 <= (func_49(l_1638, p_21, g_609, g_582, p_20) || l_1638))), l_1622)))), 0xA47456B9L)) != g_121), 65535UL)) != g_278.f3) ^ p_20)))
                    {
                        char l_1639 = 8L;
                        int l_1648 = (-3L);
                        int l_1649 = 0x676CC0BBL;
                        l_1649 = (0UL >= (l_1639 != ((g_1523 && (l_1648 &= (((safe_sub_func_uint8_t_u_u(l_1639, g_627.f3)) | ((safe_mod_func_int16_t_s_s((((0xF282L & (func_65(l_1627.f0, p_22, (safe_unary_minus_func_uint32_t_u((l_1430 && g_470))), l_1627) == 0xD2L)) || 65532UL) ^ g_472), l_1647)) <= g_278.f3)) | 0UL))) >= g_278.f3)));
                    }
                    else
                    {
                        unsigned char l_1658 = 0UL;
                        int l_1675 = 6L;
                        struct S0 l_1681 = {0xE11DL,0x9E54L,0x8F4A3080L,3348};
                        g_1100.f2 = ((safe_sub_func_int16_t_s_s(((~(safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(1L, l_1626.f3)) || 0x40L) > g_234), (safe_sub_func_uint32_t_u_u((g_627.f3 = l_1658), g_1100.f0))))) | (safe_add_func_uint8_t_u_u((((p_22 <= p_19) && p_20) != 0x90D9BD68L), l_1626.f0))), p_22)) < l_1638);
                        g_1307 = (l_1624 = (l_1670 = (safe_mul_func_uint16_t_u_u(func_37(g_230), (l_1442 && (((safe_rshift_func_uint8_t_u_u(p_20, (g_1523 < (l_1622 = ((safe_div_func_int8_t_s_s(((l_1490 |= func_49((0x1C93L || (~(g_630 & g_630))), ((safe_mul_func_int8_t_s_s((g_1523 ^ 1UL), g_1419)) ^ p_20), g_1523, l_1658, p_21)) | 0x12FB4304L), l_1669)) <= p_19))))) && g_1308) > p_21))))));
                        l_1670 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_20, (+(((l_1675 &= 4294967295UL) || g_609) >= ((safe_mul_func_uint8_t_u_u(l_1680, (~0xC8L))) ^ ((0xBBL >= g_382) >= (0xCD4B901FL < (((((func_55(l_1638, p_21, l_1681, g_113, l_1626.f0) ^ 0x57476B46L) <= g_701) ^ l_1626.f0) || g_317) != 0x03D0L)))))))), l_1626.f3));
                        if (g_230)
                            break;
                    }
                    g_1100.f2 &= g_356;
                }
            }
            else
            {
                unsigned l_1691 = 0xC75A52E1L;
                int l_1723 = 1L;
                for (g_1100.f2 = 21; (g_1100.f2 != 8); g_1100.f2 = safe_sub_func_uint16_t_u_u(g_1100.f2, 1))
                {
                    struct S0 l_1686 = {0xEDA7L,0x9D2AL,0xCBEB2A8AL,6558};
                    for (g_470 = 0; (g_470 != 19); ++g_470)
                    {
                        l_1686 = g_128;
                    }
                }
                for (l_1680 = 0; (l_1680 != (-12)); --l_1680)
                {
                    struct S0 l_1706 = {0x1270L,0xBDA5L,8L,5519};
                    for (g_1307 = (-7); (g_1307 < 29); ++g_1307)
                    {
                        if (p_21)
                            break;
                    }
                    if (((func_45((g_1523 &= (l_1691 != (safe_sub_func_int32_t_s_s((l_1622 = l_1584), (safe_lshift_func_uint8_t_u_s(((l_1626.f2 = (((safe_rshift_func_int8_t_s_u(0L, 2)) & (safe_unary_minus_func_uint16_t_u(0xA50AL))) >= (0x8C15L <= (safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((func_41(l_1626, ((func_41(l_1580, (safe_mul_func_int16_t_s_s((0x8CC0L ^ (l_1691 ^ g_113)), 0x00CAL))) > 0xE1L) || (-9L))) != l_1691), g_630)) & g_1419), 255UL))))) & 247UL), 4)))))), p_19) & 0xA6F0L) & p_21))
                    {
                        return g_128.f3;
                    }
                    else
                    {
                        const unsigned char l_1705 = 0UL;
                        l_1624 = l_1705;
                        g_128 = l_1706;
                    }
                }
                l_1723 = ((func_49((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_77.f1 = ((+l_1626.f0) > (safe_mul_func_int8_t_s_s((p_19 == 0x272B1225L), (!(safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((l_1626.f2 &= p_22) || g_48), (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(p_19, g_627.f3)) != func_49(l_1691, p_22, l_1625, l_1431, l_1430)) && l_1627.f3), p_22)), 0x8D74L)))), l_1626.f3))))))), g_77.f2)), l_1625)), g_1523, p_22, g_77.f3, p_22) && g_281) > g_630);
            }
            if (p_19)
            {
                short l_1735 = 0xC2B8L;
                struct S0 l_1748 = {0UL,0xA0D4L,0x2177C824L,4674};
                for (g_113 = (-8); (g_113 < 27); g_113 = safe_add_func_uint16_t_u_u(g_113, 8))
                {
                    int l_1726 = 5L;
                    return l_1726;
                }
                for (l_1626.f0 = 12; (l_1626.f0 <= 55); l_1626.f0 = safe_add_func_uint8_t_u_u(l_1626.f0, 6))
                {
                    unsigned short l_1733 = 65535UL;
                    struct S0 l_1749 = {0UL,0x685CL,0L,5364};
                    if ((g_278.f2 |= p_19))
                    {
                        unsigned char l_1744 = 0UL;
                        int l_1745 = (-7L);
                        l_1745 = ((((safe_mul_func_int16_t_s_s(g_317, ((g_77.f1 >= (safe_div_func_int32_t_s_s((g_692 = l_1733), (l_1734 && (g_128.f2 = l_1735))))) > (safe_div_func_uint8_t_u_u(l_1738, func_49(p_20, (safe_sub_func_int8_t_s_s(((g_1523 = 0x73L) | (+func_49(((safe_mod_func_uint16_t_u_u(0x5DF5L, p_21)) ^ l_1436), l_1743, g_582, l_1627.f0, l_1626.f1))), l_1735)), l_1744, l_1626.f1, p_21)))))) || g_1021) >= 0xA0L) == l_1627.f0);
                        return g_1021;
                    }
                    else
                    {
                        l_1622 = (safe_sub_func_uint8_t_u_u(l_1626.f0, p_19));
                        l_1749 = l_1748;
                    }
                    g_77 = l_1626;
                    for (g_1308 = (-8); (g_1308 != 22); ++g_1308)
                    {
                        return p_19;
                    }
                    g_77.f2 |= p_19;
                }
                l_1627 = l_1626;
            }
            else
            {
                struct S0 l_1756 = {65535UL,0xB2A4L,-1L,2888};
                for (g_692 = (-25); (g_692 == 13); g_692 = safe_add_func_int16_t_s_s(g_692, 3))
                {
                    struct S0 l_1757 = {0x8D84L,0x8DCBL,1L,1308};
                    for (p_20 = 0; (p_20 == 5); p_20 = safe_add_func_int32_t_s_s(p_20, 8))
                    {
                        l_1622 = (g_285 = 2L);
                        l_1757 = l_1756;
                        l_1757.f2 = (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(func_49((safe_sub_func_int32_t_s_s(((p_21 <= (((l_1756.f2 = ((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_278.f2 = g_582), (safe_div_func_int8_t_s_s((0x803DFB46L & p_20), (safe_unary_minus_func_int32_t_s((+(safe_mod_func_uint16_t_u_u(((l_1610 ^= func_65(p_21, (g_1419 = 0L), l_1626.f2, l_1580)) ^ 0x59L), 0xBB90L))))))))), p_21)) != g_701)) | l_1757.f2) | 0xCDL)) < g_1100.f1), p_21)), p_20, g_278.f0, g_1308, g_824), g_1021)), 0xAAL));
                    }
                    g_1100.f2 = (func_55(p_19, g_278.f3, l_1626, (l_1777 &= (safe_mul_func_uint16_t_u_u(((g_113 |= (4294967289UL ^ (g_124 = l_1442))) ^ g_824), (safe_add_func_uint8_t_u_u(0x8FL, p_21))))), (l_1624 &= func_49(((-2L) && g_470), g_128.f3, g_1523, g_74, l_1627.f1))) & p_21);
                    l_1626.f2 = (func_49((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_627.f0 > (safe_mul_func_uint16_t_u_u(func_55(g_128.f1, g_285, g_77, g_77.f2, p_21), (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((func_49(l_1757.f0, l_1757.f3, l_1756.f2, g_1021, g_382) ^ 9L), 0x562D7F98L)), 13))))), p_20)), 0L)) && p_20), 0xF71C6C72L)), g_1021, g_701, g_609, g_1419) < g_582);
                    g_1100.f2 = g_701;
                }
            }
        }
        else
        {
            l_1626.f2 = (safe_mul_func_int16_t_s_s(l_1431, p_19));
        }
        l_1626 = l_1580;
        l_1792 = l_1580;
        g_627.f2 = (p_19 & (g_630 == l_1490));
    }
    return g_128.f1;
}







static unsigned char func_34(unsigned short p_35, unsigned short p_36)
{
    unsigned l_1118 = 0x4D601970L;
    int l_1119 = 0x40D49785L;
    struct S0 l_1124 = {0x5B09L,65535UL,-4L,930};
    int l_1288 = 0xF5021CB3L;
    int l_1359 = 1L;
    unsigned char l_1403 = 0xD8L;
    unsigned char l_1418 = 1UL;
    unsigned short l_1420 = 0x8210L;
    struct S0 l_1421 = {0xB971L,0x1B43L,1L,7101};
    l_1119 = ((safe_rshift_func_int8_t_s_s(((p_36 = (safe_sub_func_uint32_t_u_u(p_36, g_824))) < g_124), 6)) != (+l_1118));
    if (g_281)
    {
        struct S0 l_1123 = {0UL,0x6BBCL,0x3FDD2651L,504};
        int l_1177 = 0xF6577300L;
        int l_1188 = 0xD5A36E9AL;
        int l_1205 = 0xA98EA71CL;
        for (g_77.f2 = 0; (g_77.f2 <= 13); g_77.f2 = safe_add_func_int16_t_s_s(g_77.f2, 4))
        {
            unsigned short l_1122 = 0xC029L;
            l_1122 = g_630;
        }
        l_1124 = (g_1100 = l_1123);
        for (g_543 = (-15); (g_543 == (-21)); g_543--)
        {
            struct S0 l_1127 = {0xDC93L,0x58CDL,0xAAFA5921L,3549};
            int l_1153 = 3L;
            g_627 = l_1123;
            l_1127 = l_1124;
            l_1153 = (((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(247UL, p_35)), (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((l_1124.f2 & (-4L)) == (safe_mod_func_uint16_t_u_u(p_35, g_74))) && func_37((((safe_unary_minus_func_int8_t_s(func_65((((safe_mod_func_int32_t_s_s((p_36 ^ (safe_rshift_func_int16_t_s_u(p_35, 15))), ((safe_mul_func_int16_t_s_s(func_41(g_77, l_1153), (-5L))) && p_36))) > 0UL) != l_1123.f2), p_35, p_35, l_1124))) || l_1123.f0) | g_543))), l_1127.f3)), l_1123.f3)) <= 0x14A7L), 7)) != l_1124.f0), g_543)))), 0x6A90L)), p_35)) != 1L) != g_630);
            g_1100.f2 &= ((((safe_sub_func_uint16_t_u_u(0x6931L, (safe_div_func_int8_t_s_s(1L, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(func_45((safe_mod_func_int16_t_s_s(((-9L) == (safe_lshift_func_int8_t_s_s(p_36, (l_1123.f2 && ((~(safe_sub_func_int16_t_s_s((l_1153 = ((g_74 != g_150) & 0UL)), (p_35 = p_36)))) >= 0xCF8EL))))), p_36)), g_74), 0xCFL)), p_36)), g_48)) | p_36))))) <= p_36) || 0x6455L) | p_36);
        }
        if (l_1124.f1)
        {
            int l_1176 = 4L;
            struct S0 l_1262 = {0UL,0x2430L,1L,4110};
            if ((safe_add_func_uint8_t_u_u(p_35, (((safe_mod_func_int32_t_s_s((l_1177 = (l_1118 <= l_1176)), (g_285 ^= l_1124.f3))) == g_230) != ((!(!0xA0L)) || g_77.f1)))))
            {
                int l_1191 = 0xD5EB60DEL;
                int l_1204 = (-10L);
                struct S0 l_1218 = {0xE749L,0x855CL,0xAA09F574L,5425};
                unsigned l_1236 = 0x38420372L;
                for (l_1123.f2 = 0; (l_1123.f2 != (-18)); l_1123.f2 = safe_sub_func_int8_t_s_s(l_1123.f2, 2))
                {
                    unsigned l_1192 = 0xBABA146AL;
                    struct S0 l_1241 = {2UL,0UL,8L,4913};
                    l_1124.f2 |= g_281;
                    if ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_1176, (-1L))), func_65((l_1123.f3 != ((safe_mod_func_int16_t_s_s((65530UL > (safe_mod_func_uint32_t_u_u(0x34684324L, (func_49(g_630, p_35, (l_1188 &= (~0x5E17L)), (safe_sub_func_uint16_t_u_u(65530UL, p_35)), l_1191) || l_1191)))), l_1191)) > l_1192)), g_234, g_470, l_1124))))
                    {
                        int l_1197 = 8L;
                        unsigned char l_1233 = 1UL;
                        l_1205 = (safe_add_func_uint32_t_u_u((g_281 = (((l_1204 = (l_1188 = ((safe_rshift_func_uint8_t_u_s((5L ^ l_1176), (g_382 |= ((l_1197 &= g_278.f0) ^ (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(func_65(func_65(g_469, p_35, p_35, g_278), (func_49((safe_mul_func_int8_t_s_s((~g_317), 0UL)), l_1176, p_35, p_35, l_1192) <= p_36), l_1191, g_627), 0x5C2EL)), p_35)))))) & l_1176))) || g_630) && l_1197)), g_278.f3));
                        g_285 &= func_65((safe_lshift_func_int16_t_s_s(p_36, g_234)), (func_49((func_49(func_49((safe_sub_func_int32_t_s_s(l_1123.f3, (p_36 > (safe_add_func_uint32_t_u_u(l_1176, (safe_sub_func_int32_t_s_s(l_1192, (!g_128.f3)))))))), g_627.f3, (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(1UL, l_1176)), g_1021)), g_630, p_36), l_1204, p_36, g_121, p_35) & g_823), p_35, l_1204, p_35, g_1100.f0) <= 0x6229C441L), g_278.f1, l_1218);
                        l_1204 = ((safe_mul_func_int16_t_s_s((!(safe_mod_func_int16_t_s_s(0x1742L, (safe_sub_func_uint8_t_u_u(g_285, g_543))))), (safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(p_35, (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(255UL, (l_1218.f2 = (func_49(((p_36 > g_278.f0) < (func_49(l_1233, ((l_1205 = (safe_sub_func_uint16_t_u_u(g_1100.f1, (-1L)))) ^ 1L), l_1236, p_36, g_128.f1) && 255UL)), l_1204, g_627.f1, p_35, l_1123.f3) | g_627.f2)))) & p_35), 6)))) == p_36), 0x8694L)))) >= g_823);
                        l_1119 = g_491;
                    }
                    else
                    {
                        const short l_1239 = 0xF631L;
                        struct S0 l_1240 = {0x246DL,0xE872L,0x2CCE60E7L,7884};
                        l_1176 = ((safe_add_func_uint16_t_u_u(0x697FL, l_1124.f3)) || l_1239);
                        l_1241 = l_1240;
                        if (l_1240.f3)
                            break;
                        if (p_36)
                            break;
                    }
                    l_1119 = (l_1124.f2 = p_35);
                }
                l_1119 |= (0xCBCFD184L <= (l_1176 = (safe_sub_func_uint16_t_u_u((g_1100.f2 < l_1124.f2), (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_163, ((g_582 = l_1176) > (l_1123.f2 = (safe_rshift_func_uint8_t_u_u(g_469, (l_1204 & (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_1176, ((g_77.f0 = (((+(safe_mod_func_uint8_t_u_u(((3L > 0xD5973647L) ^ p_36), g_627.f2))) || l_1124.f2) && p_35)) && p_36))), l_1176))))))))), p_36))))));
            }
            else
            {
                return g_491;
            }
            l_1119 = (0L >= (((l_1124.f2 = ((safe_div_func_uint8_t_u_u(((!func_49(((+(0xD7DC4C28L && 0xE491C117L)) <= ((safe_div_func_int32_t_s_s((-7L), func_55(l_1205, g_630, l_1262, (~65533UL), l_1124.f1))) >= 65535UL)), g_627.f3, l_1262.f2, l_1262.f2, g_382)) <= l_1124.f2), 0xECL)) <= g_470)) == 0UL) && l_1124.f3));
        }
        else
        {
            g_627 = g_77;
        }
    }
    else
    {
        const unsigned l_1270 = 9UL;
        struct S0 l_1271 = {65533UL,9UL,-1L,6608};
        int l_1303 = 0x3FD5C945L;
        int l_1360 = 1L;
        unsigned char l_1393 = 0x65L;
        int l_1398 = (-5L);
        l_1124 = g_627;
        l_1124.f2 = ((safe_lshift_func_uint8_t_u_s((l_1124.f1 >= (safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(l_1119, g_285))))), (func_49(g_230, p_35, p_36, (!((p_35 ^ (safe_div_func_int8_t_s_s((l_1270 && l_1124.f1), g_74))) ^ 0x75517659L)), p_36) < g_278.f2))) || 0xB8L);
        if (g_1100.f1)
        {
            l_1271 = g_627;
        }
        else
        {
            struct S0 l_1276 = {65535UL,65526UL,0x681DAF57L,4155};
            int l_1289 = 0x7ED09B38L;
            if (((func_49((p_36 == ((safe_lshift_func_uint16_t_u_u(p_35, 14)) < 0xE046L)), ((((safe_sub_func_uint16_t_u_u(0x462EL, g_278.f0)) > (l_1276.f2 = func_65((l_1270 | (-1L)), g_278.f3, l_1271.f2, l_1276))) <= 65533UL) | l_1270), p_36, p_36, l_1124.f1) != l_1276.f1) && p_35))
            {
                l_1271 = l_1276;
            }
            else
            {
                l_1124.f2 = (p_35 & p_36);
            }
            g_627.f2 = p_36;
            l_1119 ^= ((g_491 | (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_1100.f3 == l_1124.f3), p_35)), (p_35 && 0x3456L))), 5))) || 0x0AL);
            for (g_543 = 18; (g_543 <= 16); g_543 = safe_sub_func_uint32_t_u_u(g_543, 7))
            {
                char l_1287 = 0x5BL;
                int l_1300 = 0xC76B1E6AL;
                const struct S0 l_1304 = {1UL,4UL,-8L,2812};
                g_692 = func_55((~(safe_add_func_uint16_t_u_u((g_627.f0 = (p_35 |= 1UL)), l_1124.f3))), l_1119, l_1276, ((-4L) | 0x7D6EF31AL), (l_1289 ^= (l_1288 = (l_1124.f2 = func_49((4294967288UL | 0x12F95A28L), l_1276.f3, l_1287, p_36, g_472)))));
                g_128.f2 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((g_630 || (g_1100.f0 && (l_1271.f2 & p_35))) != g_609) & ((g_128.f3 || ((safe_add_func_uint16_t_u_u(g_128.f0, func_49(l_1287, l_1287, p_35, l_1271.f1, p_36))) <= 0x3C84L)) | l_1124.f3)), g_1100.f3)), p_36));
                l_1271 = l_1276;
                if ((l_1276.f2 = func_49(((0xC3L ^ ((l_1287 && ((~(l_1124.f0 & (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(p_35, l_1287)) > g_278.f1), (8L != l_1300))))) && (safe_div_func_uint16_t_u_u((g_701 == g_150), 0x2551L)))) >= l_1288)) | l_1303), g_627.f1, p_35, g_285, p_36)))
                {
                    g_128 = l_1304;
                }
                else
                {
                    struct S0 l_1309 = {0x035BL,0UL,0xFE0667B4L,4653};
                    const struct S0 l_1319 = {1UL,0x5FFDL,-7L,1684};
                    g_627.f2 &= g_543;
                    for (g_627.f1 = (-29); (g_627.f1 > 41); g_627.f1 = safe_add_func_int8_t_s_s(g_627.f1, 3))
                    {
                        unsigned short l_1310 = 65535UL;
                        g_1307 = g_124;
                        g_1308 = 9L;
                        g_1100 = l_1309;
                        l_1124.f2 = func_65(g_128.f1, l_1310, ((safe_div_func_uint8_t_u_u((l_1304.f2 == (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(0x41L, (safe_add_func_int32_t_s_s((65535UL && ((func_49(p_35, (p_35 < (l_1289 = p_35)), (g_48 ^= ((g_128.f0 && p_35) && 5L)), g_627.f2, g_1308) != 0xE8L) || l_1276.f3)), g_627.f2)))), g_543))), g_472)) > 1UL), g_627);
                    }
                    if (g_472)
                        continue;
                    if (((g_1307 > func_45(l_1276.f1, (func_37(l_1309.f0) > 0L))) != g_1307))
                    {
                        struct S0 l_1320 = {0x8530L,65528UL,0x51EB3815L,3828};
                        l_1320 = l_1319;
                    }
                    else
                    {
                        unsigned l_1327 = 0xDB1F8232L;
                        l_1271 = g_128;
                        g_824 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_36, l_1327)) >= g_1308), g_128.f1)), (0UL > (safe_add_func_int8_t_s_s(func_49((l_1271.f2 = p_35), p_35, g_128.f2, (safe_mod_func_int16_t_s_s((func_49(p_35, g_278.f0, p_36, g_1100.f3, g_128.f0) ^ g_74), g_1021)), g_150), l_1118))))) >= l_1319.f0);
                    }
                }
            }
        }
        for (p_36 = 10; (p_36 <= 48); p_36++)
        {
            struct S0 l_1338 = {0x04B0L,65535UL,0xE23625B5L,870};
            short l_1362 = 0x956FL;
            unsigned l_1380 = 4294967295UL;
            for (g_128.f0 = 10; (g_128.f0 < 48); g_128.f0 = safe_add_func_int8_t_s_s(g_128.f0, 6))
            {
                unsigned char l_1345 = 0xC8L;
                char l_1361 = 1L;
                struct S0 l_1402 = {1UL,0x5085L,0x97601DA1L,51};
                for (g_124 = 0; (g_124 <= 18); g_124 = safe_add_func_uint16_t_u_u(g_124, 9))
                {
                    if (p_36)
                        break;
                    l_1338 = g_128;
                    l_1271.f2 = (0xAAL && (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(p_36, (0x12L || p_35))), (((safe_div_func_uint8_t_u_u((((l_1345 > 1UL) ^ (safe_mul_func_uint8_t_u_u((l_1288 = p_36), ((p_35 <= (safe_sub_func_int32_t_s_s(l_1345, 0xAEB19659L))) ^ l_1338.f0)))) < 0x704A8127L), p_36)) <= l_1124.f3) ^ g_582))));
                    if (p_36)
                        break;
                }
                if ((safe_add_func_int32_t_s_s(((g_627.f0 &= (l_1338.f2 = (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u((p_35 = (((func_49(((safe_rshift_func_int16_t_s_u(p_35, 11)) || (l_1124.f2 = (l_1361 = (func_49(g_77.f3, p_36, l_1359, g_278.f3, (p_35 >= l_1360)) & g_627.f1)))), l_1362, l_1271.f2, l_1345, p_35) < (-1L)) > 0x7CF088E2L) >= 0x117EL)), 5)))), 0xDFACL)))) == l_1119), p_36)))
                {
                    g_1100.f2 = 0xDFA269F6L;
                    g_692 = l_1345;
                }
                else
                {
                    for (l_1124.f0 = 0; (l_1124.f0 == 13); l_1124.f0 = safe_add_func_uint32_t_u_u(l_1124.f0, 2))
                    {
                        short l_1367 = 2L;
                        l_1367 = (safe_rshift_func_int16_t_s_u(l_1338.f0, 14));
                    }
                    g_692 ^= l_1124.f2;
                }
                if (p_35)
                {
                    int l_1381 = 0x93AE02A7L;
                    const int l_1382 = 0x78169254L;
                    l_1338.f2 |= ((safe_sub_func_uint8_t_u_u(253UL, (l_1124.f2 = g_48))) < (safe_add_func_uint8_t_u_u((4294967291UL >= (func_49(l_1338.f3, g_630, func_49(g_278.f3, (func_49(p_35, p_36, (safe_mod_func_uint8_t_u_u((g_823 &= (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_s(g_278.f1, 6))), p_36)), l_1380))), p_36)), g_121, l_1338.f3) < l_1270), l_1360, g_48, p_36), l_1381, p_36) ^ g_472)), l_1382)));
                    for (g_609 = 0; (g_609 > 4); g_609 = safe_add_func_uint8_t_u_u(g_609, 9))
                    {
                        char l_1392 = 0x0AL;
                        short l_1394 = (-2L);
                        g_824 = ((l_1394 = (l_1362 || ((g_470 = (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(func_49(l_1345, (func_49(((safe_add_func_int16_t_s_s(l_1392, (0xACCAL > func_49(l_1338.f3, (func_49(l_1361, p_35, p_36, ((l_1360 = (((-1L) == l_1381) <= g_582)) <= l_1393), g_1308) > g_163), g_317, p_36, g_823)))) == l_1338.f3), p_35, p_35, g_128.f0, p_35) & l_1124.f0), g_163, g_1100.f1, g_1100.f1), g_1308)))), 5))) & (-2L)))) < g_163);
                    }
                }
                else
                {
                    short l_1397 = 0x9834L;
                    int l_1399 = 1L;
                    int l_1400 = 1L;
                    struct S0 l_1401 = {65535UL,0UL,9L,5362};
                    if ((g_128.f2 |= func_49((l_1271.f1 >= ((252UL > (safe_rshift_func_int8_t_s_s((l_1398 ^= ((l_1271.f2 = func_49(l_1271.f0, func_49((g_356 |= l_1118), l_1397, p_35, g_121, (l_1360 |= (p_36 < 0x98BF93ADL))), g_1308, p_35, p_35)) && l_1397)), l_1399))) > 0L)), l_1124.f2, g_278.f2, g_1307, l_1338.f1)))
                    {
                        l_1400 &= (p_36 != p_36);
                    }
                    else
                    {
                        g_278 = l_1338;
                        l_1402 = l_1401;
                        g_1100 = g_1100;
                    }
                    l_1403 = p_35;
                }
            }
        }
    }
    l_1420 |= (((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((p_35 = (func_37((safe_add_func_uint32_t_u_u(p_35, l_1124.f1))) ^ (safe_lshift_func_int16_t_s_s(0L, g_1307)))), 13)), l_1124.f3)) | (safe_mod_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((l_1124.f2 = 0x8B37FFEBL), ((l_1288 ^= func_49((g_1419 = (safe_rshift_func_int16_t_s_u((l_1119 | (p_36 ^ l_1418)), 13))), l_1418, g_1308, p_36, p_36)) && (-6L)))) == 0xD489L) && 0xB6L), g_543))) <= g_630);
    l_1124 = (l_1421 = l_1421);
    return p_35;
}







static unsigned short func_37(char p_38)
{
    struct S0 l_44 = {5UL,65529UL,-3L,3528};
    unsigned char l_72 = 1UL;
    unsigned short l_1104 = 65533UL;
    unsigned short l_1112 = 0xE533L;
    for (p_38 = (-17); (p_38 > (-22)); p_38 = safe_sub_func_int32_t_s_s(p_38, 7))
    {
        unsigned l_73 = 0x57D38C46L;
        int l_346 = 0xAA4E5B74L;
        l_44.f2 = func_41(l_44, func_45(p_38, (g_48 == func_49(func_55((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x0165D3E8L, func_65(((g_74 = (l_73 |= (safe_sub_func_uint16_t_u_u((l_72 = p_38), 0L)))) >= (safe_lshift_func_int8_t_s_u((g_48 > 0x54656E2EL), p_38))), p_38, p_38, g_77))), g_48)), l_44.f0, g_278, l_44.f2, p_38), p_38, l_346, l_346, l_44.f1))));
        g_77.f2 &= (safe_unary_minus_func_uint8_t_u(((((l_44.f3 & (g_77.f1 = g_582)) <= (safe_add_func_uint8_t_u_u(l_346, func_49(func_49((l_1104 != (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u((g_48 | (safe_div_func_int16_t_s_s(p_38, p_38))), (safe_sub_func_uint32_t_u_u(g_128.f0, (g_627.f2 == l_73)))))))), g_317, g_281, g_278.f0, l_1112), p_38, l_44.f1, g_128.f3, p_38)))) ^ l_44.f1) >= l_44.f1)));
    }
    return l_44.f3;
}







static int func_41(struct S0 p_42, int p_43)
{
    struct S0 l_693 = {0x0101L,65532UL,0x72452704L,2647};
    const unsigned l_760 = 0UL;
    int l_898 = 0xA3625516L;
    char l_974 = 1L;
    g_692 = (p_43 ^ g_113);
    l_693 = g_128;
    for (g_77.f0 = 0; (g_77.f0 < 50); g_77.f0++)
    {
        unsigned l_700 = 0xBBEFEC8FL;
        l_693.f2 ^= func_49((0x4B76L == p_43), ((safe_add_func_uint16_t_u_u(65527UL, p_42.f2)) & g_469), p_43, (l_700 ^= (safe_add_func_int32_t_s_s(g_630, p_43))), p_43);
        p_43 = ((-6L) | (g_701 >= g_234));
        return l_693.f3;
    }
    for (p_42.f2 = (-28); (p_42.f2 != 4); ++p_42.f2)
    {
        struct S0 l_710 = {0xB471L,0UL,0xF4ED5EFBL,5227};
        int l_716 = 0x0438FF36L;
        int l_734 = 0xD38D2026L;
        int l_803 = 0L;
        const short l_847 = (-10L);
        int l_914 = 0x8A361394L;
        for (l_693.f1 = (-21); (l_693.f1 >= 55); l_693.f1++)
        {
            char l_717 = 0x15L;
            int l_731 = 0x5C8AC8BCL;
            int l_732 = 0x332B884FL;
            int l_733 = (-1L);
            for (g_472 = 0; (g_472 == 12); ++g_472)
            {
                if (g_234)
                    break;
            }
            if (p_42.f0)
            {
                unsigned short l_730 = 0x901AL;
                for (g_627.f2 = (-2); (g_627.f2 <= (-2)); g_627.f2 = safe_add_func_uint8_t_u_u(g_627.f2, 5))
                {
                    struct S0 l_711 = {65529UL,0x3CB7L,0x36B2F34CL,2762};
                    g_692 = g_128.f1;
                    g_278 = (g_77 = g_77);
                    l_711 = l_710;
                    g_692 = (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_717 = l_716), ((func_55((((!0L) == g_278.f1) ^ ((safe_lshift_func_uint16_t_u_u(((l_732 = (safe_mod_func_int8_t_s_s((g_382 &= ((l_731 = (l_693.f2 = (safe_div_func_uint16_t_u_u((g_124 < (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_278.f3, (safe_mul_func_int16_t_s_s(0x03C7L, (g_163 = 1L))))) | ((((+p_43) && (g_77.f1 |= (l_730 & l_730))) ^ g_491) == g_627.f1)), g_472))), g_48)))) != l_710.f0)), 0x11L))) && 0xC0B6L), 2)) ^ l_710.f2)), l_693.f0, g_278, l_693.f1, l_733) | p_42.f2) >= 0x4D01495BL))), p_42.f0));
                }
                p_43 = l_734;
            }
            else
            {
                return g_627.f0;
            }
            l_734 |= l_710.f3;
            for (g_281 = (-15); (g_281 != 46); g_281 = safe_add_func_int16_t_s_s(g_281, 1))
            {
                if (g_124)
                    break;
                l_731 |= (safe_div_func_int8_t_s_s(p_43, 1L));
            }
        }
        if ((safe_add_func_uint16_t_u_u(p_42.f1, g_630)))
        {
            unsigned short l_757 = 0x4356L;
            int l_758 = 0xA724F08AL;
            char l_777 = (-1L);
            int l_778 = 0xA1E61851L;
            short l_785 = 0x3AE3L;
            struct S0 l_786 = {0xF294L,0UL,7L,5880};
            unsigned char l_787 = 255UL;
            short l_848 = 1L;
            struct S0 l_887 = {0UL,65535UL,0x7764B607L,4651};
            unsigned l_894 = 0x8DB288EAL;
            if ((g_150 & g_163))
            {
                char l_741 = (-1L);
                const unsigned char l_750 = 253UL;
                int l_769 = 0x32A3BEC1L;
                int l_776 = 0x882ABB10L;
                unsigned l_806 = 4UL;
                struct S0 l_809 = {1UL,7UL,0x634E2971L,7899};
                g_77 = p_42;
                if (l_741)
                    break;
                if (g_278.f2)
                {
                    unsigned short l_759 = 65526UL;
                    int l_774 = 1L;
                    p_43 = (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((+(safe_add_func_uint8_t_u_u(l_750, ((safe_lshift_func_int8_t_s_s(g_543, 3)) == (safe_lshift_func_int16_t_s_u((g_278.f2 | (safe_add_func_uint32_t_u_u((l_758 = l_757), 0x31EB4D04L))), l_734)))))), ((g_163 = g_77.f2) == func_49(l_759, func_49(g_121, l_693.f1, p_43, g_582, g_356), g_128.f0, g_630, l_757)))), p_43)), l_760));
                    for (l_758 = 3; (l_758 > (-29)); l_758--)
                    {
                        struct S0 l_775 = {0x4C7AL,0UL,0xA472C8A0L,5749};
                        l_778 &= (((func_65(p_42.f1, (l_776 = (safe_mul_func_uint16_t_u_u((~p_42.f2), ((p_42.f2 == ((safe_add_func_int32_t_s_s(p_42.f0, (l_693.f2 = (l_769 = p_43)))) >= (safe_mod_func_uint8_t_u_u(func_65((l_774 = (safe_mod_func_int32_t_s_s(l_693.f3, g_627.f3))), l_760, (p_43 || (-3L)), l_775), 255UL)))) ^ 0x4EBEAC6DL)))), l_757, g_627) == g_627.f1) ^ 65530UL) < l_777);
                        l_710.f2 &= (p_43 &= g_48);
                        g_692 = (p_42.f0 > (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((l_778 &= g_317), l_776)), 5)));
                    }
                }
                else
                {
                    int l_798 = 0x79132284L;
                    char l_807 = 0x14L;
                    unsigned l_840 = 0UL;
                    l_787 &= (p_43 = (l_716 && ((safe_rshift_func_int8_t_s_u(g_627.f1, func_65((l_785 == l_710.f2), p_42.f2, p_43, l_786))) < 1UL)));
                    l_803 |= (p_42.f3 < (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_769 &= (l_693.f2 <= (((safe_lshift_func_int8_t_s_s((0x5458L == (safe_mul_func_int16_t_s_s(l_750, (-1L)))), 4)) <= func_49(l_798, g_356, (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_693.f0 >= func_55(g_491, g_77.f3, g_77, l_710.f0, l_693.f1)), p_43)), l_776)), l_798, l_798)) < g_48))), 5)), g_356)), l_798)));
                    if (g_48)
                        break;
                    if (((safe_add_func_uint8_t_u_u(((l_776 = (l_693.f3 < func_65(p_43, (l_798 = (-1L)), (func_55(l_760, l_741, p_42, (l_806 = 1UL), (g_77.f3 &= (65535UL & (0xF372L | l_807)))) || 0x65D29837L), p_42))) != g_627.f2), l_785)) > p_42.f3))
                    {
                        struct S0 l_808 = {65535UL,0x47B1L,0x956AC036L,5874};
                        l_809 = l_808;
                    }
                    else
                    {
                        unsigned l_835 = 0xF890E0FBL;
                        p_43 = (func_45(p_42.f1, ((safe_unary_minus_func_int8_t_s(g_382)) && func_45((l_798 = l_806), (((func_45((g_150 ^ ((safe_div_func_uint8_t_u_u((g_824 = ((p_42.f3 &= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((g_543 ^ (g_74 = g_285)) ^ (safe_mul_func_int8_t_s_s(l_809.f0, (safe_mod_func_uint8_t_u_u((g_823 ^= (((g_582 != ((safe_rshift_func_int16_t_s_s((g_701 |= (p_42.f1 > 0x293E8454L)), 1)) | l_786.f1)) || g_121) < l_693.f0)), 0x1EL))))), 5UL)), p_42.f1))) | 0x8FBEA629L)), g_382)) != g_472)), g_48) >= p_42.f0) < 0xDB2FBD99L) >= 0xC57EL)))) | 0x155A3305L);
                        g_128 = p_42;
                        l_848 &= (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((p_42.f3 ^= (((g_582 = g_285) != (safe_div_func_int16_t_s_s(g_609, (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((-4L) & (func_49(l_835, (((g_824 = ((((safe_sub_func_int32_t_s_s(((g_128.f2 = 0x370DA551L) > (+(safe_mod_func_uint16_t_u_u(l_840, (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_803, 4)), g_627.f2)))))), ((safe_lshift_func_uint16_t_u_u(g_230, g_278.f1)) == 0x3DB57018L))) == g_150) && l_710.f0) | l_835)) > l_758) && p_43), l_693.f3, p_43, g_234) <= l_710.f2)), l_710.f2)), 1))))) || 1L)) == p_42.f0) > 0L), (-4L))) != g_317), l_847));
                    }
                }
            }
            else
            {
                unsigned l_853 = 0UL;
                g_824 = (safe_mul_func_uint8_t_u_u((func_49((l_693.f2 = func_55((l_778 ^= (-5L)), ((safe_mul_func_uint16_t_u_u(func_45((p_42.f0 | func_49(l_734, p_43, p_42.f1, l_853, p_42.f1)), ((1UL <= p_42.f0) == 0x4A57L)), 1UL)) & l_853), p_42, l_853, l_853)), p_42.f2, p_42.f1, g_630, l_758) ^ l_693.f3), 0x58L));
                l_758 ^= l_693.f0;
                return g_121;
            }
            if ((((safe_rshift_func_int16_t_s_u(l_693.f0, 9)) > (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(0L, l_760)), g_77.f0))) > (g_77.f1 = l_693.f2)))
            {
                struct S0 l_860 = {0x6C93L,0x40A0L,0x084A1313L,1382};
                l_860 = l_710;
                if (g_491)
                    break;
                if (((safe_add_func_int8_t_s_s((func_65((+(safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_860.f1, (safe_div_func_uint8_t_u_u(((l_710.f1 >= (safe_div_func_int16_t_s_s((l_716 != (safe_add_func_uint8_t_u_u((+((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((l_778 = ((g_278.f0 = (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(l_860.f3, ((safe_div_func_int16_t_s_s(l_716, l_710.f0)) >= func_49((l_734 = l_860.f3), l_786.f1, l_860.f2, l_860.f0, g_77.f1)))) || 0x7C57L) & 0xDA60L), g_77.f0))) < l_693.f1)) ^ g_121), l_787)), l_785)), g_823)) <= p_42.f1)), p_42.f1))), l_860.f2))) && g_113), g_469)))), g_121)), p_42.f3))), l_860.f2, g_582, l_887) | p_43), 0xDAL)) < 1UL))
                {
                    unsigned l_897 = 0x67B7F40BL;
                    p_43 = (safe_mul_func_int16_t_s_s(l_693.f1, p_42.f1));
                    l_887 = p_42;
                    for (l_887.f1 = 0; (l_887.f1 != 8); ++l_887.f1)
                    {
                        g_285 = g_150;
                        g_124 = (+(safe_mul_func_int16_t_s_s(g_74, ((g_278.f0 && 0x101AA8C3L) && (!0x5E22E080L)))));
                    }
                    p_43 = (0L & (func_45((p_42.f1 < l_693.f2), p_42.f0) != func_49(l_894, (l_860.f2 = 0L), (l_898 = (((safe_add_func_int16_t_s_s((-7L), 0x0376L)) & l_897) < l_693.f0)), g_630, l_693.f1)));
                }
                else
                {
                    unsigned l_899 = 4294967295UL;
                    l_710 = l_693;
                    g_278.f2 ^= l_899;
                    g_627 = l_887;
                }
            }
            else
            {
                for (p_42.f0 = 0; (p_42.f0 != 51); p_42.f0 = safe_add_func_uint32_t_u_u(p_42.f0, 6))
                {
                    l_693 = (g_128 = p_42);
                    g_692 &= g_627.f3;
                    for (g_74 = 0; (g_74 > 18); g_74++)
                    {
                        struct S0 l_904 = {0x93DBL,0x8FD8L,1L,6341};
                        l_710 = l_904;
                        return p_42.f1;
                    }
                }
            }
            for (p_43 = (-19); (p_43 != 18); p_43 = safe_add_func_int8_t_s_s(p_43, 8))
            {
                int l_913 = 0xF09A06FDL;
                l_710.f2 |= p_42.f0;
                l_758 ^= (func_49((((((g_582 == g_701) != 5L) > p_43) > ((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_693.f0 ^ (((safe_rshift_func_int8_t_s_u(p_42.f3, l_757)) == (((g_382 &= p_42.f2) || g_627.f0) ^ g_285)) && 0x78455D8BL)), 3L)), 0xFFL)) || l_734)) | l_710.f2), g_470, g_48, l_913, l_914) & p_42.f1);
            }
        }
        else
        {
            unsigned char l_919 = 0UL;
            short l_924 = 0x3F2CL;
            int l_938 = (-1L);
            struct S0 l_951 = {0x7054L,0x02FDL,0xF3F9A9F7L,835};
            int l_971 = (-8L);
            for (g_627.f2 = 0; (g_627.f2 <= (-25)); --g_627.f2)
            {
                int l_937 = 0x8260E1F5L;
                if ((((l_919 ^= (safe_add_func_int32_t_s_s(g_77.f2, p_42.f3))) <= ((safe_div_func_uint16_t_u_u(g_356, (safe_mod_func_int8_t_s_s(l_924, (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_693.f2, (p_43 <= (safe_sub_func_uint32_t_u_u((g_281 = g_630), 0x893A53E9L))))), (safe_div_func_uint32_t_u_u(0x3916B766L, l_924)))) > p_42.f2), l_710.f2)))))) > 0x8EE22BB7L)) ^ p_43))
                {
                    unsigned l_935 = 4294967295UL;
                    l_935 |= 1L;
                }
                else
                {
                    char l_936 = 7L;
                    g_824 ^= p_42.f1;
                    p_43 ^= (g_124 = (~l_936));
                    if ((2L < (g_582 | l_937)))
                    {
                        l_938 = (l_693.f2 = g_278.f1);
                        p_43 |= (l_898 |= 8L);
                    }
                    else
                    {
                        char l_943 = 0xDDL;
                        int l_950 = 0x05178EA8L;
                        g_692 &= ((+(func_65(p_42.f2, (((((safe_rshift_func_int8_t_s_u(((l_943 = (safe_lshift_func_uint16_t_u_u(p_42.f1, (p_42.f0 = p_42.f2)))) || (safe_div_func_int8_t_s_s(g_278.f0, g_74))), (g_128.f1 || ((((safe_lshift_func_int8_t_s_u(func_49(p_42.f3, l_936, (safe_div_func_uint8_t_u_u(3UL, p_42.f2)), p_42.f2, p_42.f2), 6)) || p_42.f1) == 0x46L) ^ l_950)))) == l_950) < 0UL) >= g_356) && 4294967287UL), l_937, l_951) < p_42.f1)) | l_760);
                        p_43 |= ((safe_add_func_uint16_t_u_u(65531UL, ((safe_mod_func_uint16_t_u_u(p_42.f3, ((255UL | g_150) & (safe_mod_func_int16_t_s_s(0x6248L, p_42.f3))))) ^ (g_356 == ((p_42.f1 == (((g_278.f1 == l_936) < 0UL) && p_42.f0)) != g_543))))) >= p_42.f0);
                        l_938 = l_951.f3;
                    }
                }
                if (func_49(g_128.f2, ((safe_lshift_func_int16_t_s_u(g_491, 13)) >= (safe_unary_minus_func_uint16_t_u(func_49(p_42.f2, ((((((~(l_898 &= (p_43 & 1L))) > (-4L)) == (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(l_734, 0)) && ((0xF8L || (safe_mul_func_int16_t_s_s((l_924 ^ l_847), 0L))) <= g_234)) < 0UL), l_710.f1))) > l_951.f0) != p_42.f3) == g_824), p_42.f1, p_42.f1, g_163)))), p_42.f1, g_278.f2, l_919))
                {
                    unsigned l_992 = 0x863DF443L;
                    g_285 = (p_43 ^= (l_971 ^ (safe_mul_func_uint8_t_u_u(p_42.f0, g_113))));
                    if ((l_974 || p_42.f3))
                    {
                        const struct S0 l_975 = {7UL,1UL,0x828E174AL,4988};
                        l_951 = l_975;
                    }
                    else
                    {
                        unsigned short l_989 = 0x3AE0L;
                        unsigned char l_990 = 246UL;
                        int l_991 = 0xEFB266FFL;
                        l_991 = (((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(((g_627.f3 = (safe_sub_func_uint32_t_u_u(((l_693.f2 = (0x1B86600CL | l_951.f1)) <= (p_43 ^ (((g_470 == l_937) || (safe_sub_func_int16_t_s_s(p_42.f1, (safe_add_func_uint32_t_u_u(g_824, ((safe_sub_func_uint16_t_u_u((g_150 && ((((safe_rshift_func_uint8_t_u_u(func_49(g_543, l_989, l_693.f0, p_42.f1, l_974), l_937)) | 65529UL) > p_42.f3) || p_42.f3)), 5UL)) < g_701)))))) || 0x1C26L))), g_278.f0))) || l_990), 0xD9L)))) > 6L) >= p_42.f0);
                        l_992 = p_42.f2;
                        l_951.f2 &= g_121;
                    }
                }
                else
                {
                    unsigned char l_993 = 0xCFL;
                    g_285 &= func_65(l_937, l_993, p_43, l_693);
                    l_951.f2 = g_278.f3;
                    p_43 ^= 1L;
                }
                l_938 = l_937;
            }
            g_124 = (l_803 <= g_701);
            for (l_710.f1 = 0; (l_710.f1 >= 10); ++l_710.f1)
            {
                g_124 = (l_974 | 0x0318L);
                for (g_692 = 0; (g_692 > (-8)); --g_692)
                {
                    struct S0 l_998 = {0x6DA6L,6UL,0x1C05D77FL,203};
                    if (g_627.f0)
                        break;
                    g_77 = l_998;
                }
            }
        }
        p_43 &= (func_45(((safe_mod_func_int32_t_s_s(p_42.f3, p_42.f3)) == g_150), (l_693.f0 > func_49((safe_add_func_uint16_t_u_u((g_128.f2 < (safe_rshift_func_int16_t_s_s((g_77.f3 <= func_49(p_42.f1, (g_128.f2 < (0xD2L ^ g_491)), l_710.f1, l_693.f0, l_847)), p_42.f2))), 4L)), p_42.f0, l_710.f1, g_234, l_760))) == 0x94EBL);
        for (l_734 = 0; (l_734 < (-2)); l_734--)
        {
            const int l_1009 = (-1L);
            struct S0 l_1057 = {0x3B2FL,65528UL,0x6DB16F6BL,2419};
            int l_1079 = 0x5CAFA434L;
            char l_1096 = 0xD5L;
            if (func_65(g_823, g_128.f3, (safe_rshift_func_int16_t_s_u(((l_1009 | func_49(p_42.f1, (safe_unary_minus_func_int16_t_s((((g_48 |= ((safe_add_func_uint32_t_u_u((g_278.f3 = ((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_77.f3, (p_42.f2 != (p_42.f1 && (g_1021 ^= ((safe_div_func_uint8_t_u_u(p_42.f3, (safe_mod_func_int16_t_s_s((g_163 |= func_49(p_42.f0, l_710.f2, l_1009, g_121, l_1009)), g_278.f3)))) || l_710.f3)))))) || l_710.f2), 0x09L)) == 0x6FBBL)), 4294967289UL)) & g_77.f1)) & p_42.f0) == 0x61L))), p_42.f3, l_710.f2, l_716)) == p_42.f2), l_898)), g_77))
            {
                unsigned l_1049 = 1UL;
                if (g_543)
                    break;
                for (g_627.f2 = (-20); (g_627.f2 < (-25)); g_627.f2--)
                {
                    unsigned short l_1026 = 1UL;
                    for (g_74 = 0; (g_74 != 14); ++g_74)
                    {
                        return l_1026;
                    }
                    p_43 ^= 0xEEBAF6AEL;
                    for (l_710.f0 = 0; (l_710.f0 <= 30); l_710.f0 = safe_add_func_uint32_t_u_u(l_710.f0, 7))
                    {
                        unsigned l_1056 = 2UL;
                        p_43 = (safe_div_func_int16_t_s_s((p_43 != (0x302F8A92L ^ (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(func_55((l_1056 = (g_472 |= (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_693.f3 ^ (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((((0x95L > l_1049) >= p_42.f0) < func_55((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_543, (safe_mul_func_uint8_t_u_u((g_356 | g_627.f2), 0x62L)))), g_491)), l_1009, l_710, g_823, g_77.f1)) | p_42.f3), 7)), 7)), 2UL)), 0x6644L))), l_1026)), 4L)))), l_716, l_1057, p_42.f0, g_281), g_627.f1)) != 0x1AL), l_693.f1)) && p_43), 65535UL)))), p_43));
                    }
                    l_898 = (!(safe_add_func_int8_t_s_s(p_43, 0x12L)));
                }
            }
            else
            {
                unsigned l_1073 = 0x1B2CA3B9L;
                int l_1078 = 0x0CFE6ED1L;
                int l_1082 = 1L;
                int l_1086 = 2L;
                struct S0 l_1099 = {0x54A2L,65535UL,1L,2367};
                g_77.f2 = (safe_lshift_func_uint8_t_u_u((l_1009 >= g_317), (safe_add_func_int8_t_s_s(0x35L, 6UL))));
                if ((0xA0396075L && 4294967289UL))
                {
                    int l_1068 = 0xCDFDD124L;
                    struct S0 l_1085 = {0xCFDEL,0UL,-6L,2937};
                    if (((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_1068, ((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((l_1073 = g_77.f3) != ((l_710.f2 = (l_1068 ^ 0UL)) >= (l_710.f1 == ((l_914 > (((safe_div_func_int16_t_s_s((0xA0L & g_234), 0x2E9AL)) < g_1021) == 1UL)) <= g_77.f2)))), l_693.f1)) < g_278.f3), p_42.f3)) ^ p_43))), 2L)) > l_1078))
                    {
                        l_898 = p_42.f2;
                        if (l_1079)
                            continue;
                        l_693 = p_42;
                        g_128.f2 = (p_43 = (safe_sub_func_int32_t_s_s(g_281, 1L)));
                    }
                    else
                    {
                        unsigned short l_1091 = 5UL;
                        if (g_234)
                            break;
                        p_43 = ((((g_823 = func_45((((l_1078 != ((l_1082 ^= p_43) == 0xC4E7L)) | l_1068) < func_55(p_42.f2, (safe_div_func_uint16_t_u_u(g_281, (l_1086 = func_55(l_693.f3, g_234, (l_1085 = (g_128 = g_278)), p_42.f0, l_1057.f0)))), g_627, g_627.f3, l_1057.f2)), p_42.f2)) || p_42.f3) == g_48) ^ g_824);
                        if (p_43)
                            break;
                        l_1085.f2 = ((p_42.f0 && (safe_lshift_func_int16_t_s_s((-1L), (safe_lshift_func_int16_t_s_s((g_317 = (-5L)), (l_1091 &= 0xEE44L)))))) || (safe_mul_func_int16_t_s_s((!g_630), (safe_rshift_func_uint8_t_u_u(((g_469 < func_65((l_693.f2 |= l_1096), ((safe_rshift_func_uint8_t_u_u(g_627.f1, 5)) ^ (p_43 = 0xB9B7BBA5L)), l_710.f1, p_42)) != 0UL), g_543)))));
                    }
                    g_278 = l_1099;
                }
                else
                {
                    g_1100 = g_128;
                    g_124 = 0x613354CFL;
                }
            }
        }
    }
    return g_692;
}







static int func_45(unsigned char p_46, int p_47)
{
    unsigned l_353 = 0UL;
    char l_357 = (-10L);
    int l_358 = 0xFB6A7BBCL;
    unsigned l_376 = 0xB63F948CL;
    struct S0 l_402 = {0UL,0x5F44L,1L,1577};
    unsigned short l_426 = 0x5FD9L;
    struct S0 l_555 = {0x8E0EL,0x9FCEL,0L,803};
    unsigned l_590 = 4294967289UL;
    short l_668 = 3L;
    g_278 = g_77;
    p_47 = (safe_rshift_func_int16_t_s_s(func_55(g_77.f0, (safe_add_func_uint16_t_u_u(((l_353 || l_353) & (+p_46)), ((safe_rshift_func_int8_t_s_s(p_46, 2)) & g_285))), g_77, (l_358 ^= (func_49((g_356 = 0UL), (l_357 < 0xDDACL), p_46, g_278.f0, l_357) && l_357)), l_357), 3));
    if (((0UL == 0x6399FE30L) >= l_358))
    {
        int l_363 = 0L;
        unsigned char l_366 = 1UL;
        int l_375 = 0L;
        int l_377 = 0xC5321604L;
        unsigned short l_387 = 0x30ADL;
        struct S0 l_390 = {0x1F4EL,65531UL,0xC0F58D22L,4510};
        const unsigned l_405 = 9UL;
        l_376 |= (safe_rshift_func_int8_t_s_u((g_150 = (safe_sub_func_uint32_t_u_u(((0x6FDD7113L & p_46) < ((l_363 = (p_46 > g_278.f1)) & (!(safe_rshift_func_int8_t_s_s((l_366 = (g_74 &= p_46)), (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(g_77.f1, g_163)), 15))))))), (safe_sub_func_uint8_t_u_u(g_124, ((safe_mul_func_uint8_t_u_u(0xE6L, 0UL)) > l_375)))))), 4));
        if (func_55((l_377 = g_77.f2), (l_363 | func_49(g_77.f0, g_234, func_49(p_47, ((p_46 < ((safe_rshift_func_uint8_t_u_u((0x22L && ((((g_382 = (func_49((safe_mul_func_int16_t_s_s(g_163, g_128.f3)), p_46, l_363, l_375, p_47) == l_358)) >= p_46) || p_46) < 0x3CL)), g_278.f1)) < g_128.f2)) > p_47), l_363, p_46, l_376), p_47, g_285)), g_128, g_74, p_47))
        {
            g_124 |= (g_278.f2 |= (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(l_357, ((g_128.f3 = p_47) ^ p_47))) | (g_278.f0 <= g_128.f1)) <= ((l_387 = g_77.f3) < (safe_rshift_func_int8_t_s_s(l_375, g_285)))), (g_356 || g_128.f1))));
            l_390 = l_390;
            g_128.f2 = (p_47 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(1L, g_48)), (p_46 = g_77.f2))));
        }
        else
        {
            char l_399 = 0x1DL;
            const int l_403 = 4L;
            int l_404 = (-1L);
            unsigned short l_425 = 0x5F9AL;
            p_47 = g_234;
            l_404 &= func_49((safe_lshift_func_uint16_t_u_u((g_278.f0 = ((p_47 != func_65(l_390.f0, (safe_div_func_int16_t_s_s(p_46, l_399)), ((g_121 = ((255UL >= ((-9L) != ((safe_mul_func_uint8_t_u_u((p_46 > 1UL), (func_49(g_317, l_375, l_377, p_47, p_47) && g_77.f2))) != 0xAB0D6962L))) & (-1L))) | 0xCCDAL), l_402)) == 0xF6L)), l_403)), l_377, g_382, l_399, g_285);
            l_375 = (l_405 & (l_402.f0 <= (safe_add_func_uint8_t_u_u(((l_376 <= (safe_lshift_func_int16_t_s_s(0xCD17L, 7))) < (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((g_163 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_128.f0, (0x2C5E3D64L && (safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((func_49(l_402.f0, l_425, g_128.f3, l_426, g_128.f3) ^ 0x87B538F5L), p_46)) >= 1L), 6)) && g_124) < g_113), 4L))))), g_128.f1))) && l_399))) < l_404), l_402.f1)), 4)) >= g_285) <= l_425)), (-1L)))));
        }
        g_278.f2 = (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(l_402.f3, (p_46 = 0xCBL))) & g_128.f0) >= func_49(func_49((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_128.f3 >= 4UL), p_47)), 6)), g_128.f0, p_47, l_402.f2, l_387), p_47, l_377, g_234, l_363)) > 0xA1L), l_387)) > p_47), 0x869CL));
        for (g_121 = 0; (g_121 == (-10)); --g_121)
        {
            g_278.f2 &= p_46;
            for (g_382 = 0; (g_382 > (-30)); g_382 = safe_sub_func_uint32_t_u_u(g_382, 1))
            {
                g_77 = l_402;
            }
        }
    }
    else
    {
        unsigned l_450 = 0xEA663127L;
        struct S0 l_455 = {0x76D8L,0UL,0x247A357FL,5644};
        char l_551 = 1L;
        const short l_552 = 0x1050L;
        int l_554 = (-9L);
        unsigned l_581 = 1UL;
        unsigned l_605 = 0x5B80AED1L;
        struct S0 l_626 = {0xF420L,0x41B5L,0xC0C667D8L,5183};
        unsigned l_628 = 0xC45E554DL;
        unsigned l_669 = 0UL;
        int l_685 = 0xC00EC5AAL;
        if (p_47)
        {
            char l_449 = 1L;
            int l_451 = 0L;
            struct S0 l_460 = {65535UL,0x8592L,0x2A19E3A6L,2208};
            unsigned l_518 = 0xD3A62D3EL;
            for (g_285 = (-18); (g_285 == (-2)); ++g_285)
            {
                unsigned char l_445 = 0x9CL;
                unsigned short l_471 = 0x01BDL;
                short l_474 = 0L;
                int l_492 = 0x724DE4B2L;
                int l_516 = 0xA4ADEA55L;
                for (g_121 = 0; (g_121 < (-21)); g_121 = safe_sub_func_int16_t_s_s(g_121, 3))
                {
                    unsigned l_454 = 0x338563B0L;
                    struct S0 l_457 = {65535UL,65530UL,-7L,156};
                    short l_490 = 0x4278L;
                    if (p_47)
                    {
                        char l_448 = 0x0DL;
                        l_445 = l_358;
                        l_358 = ((safe_div_func_uint32_t_u_u(((0x81F5611FL != func_49(((l_449 = l_448) && l_450), p_46, l_451, (safe_lshift_func_uint8_t_u_s(g_74, 2)), l_451)) != (l_454 = (func_49(p_47, g_128.f2, p_47, g_124, p_46) < 8UL))), 0x5584C7ECL)) != 0xD9L);
                        l_455 = g_278;
                        if (p_46)
                            break;
                    }
                    else
                    {
                        struct S0 l_456 = {0x5B7BL,0xEB05L,5L,1833};
                        l_457 = l_456;
                        g_278.f2 = (safe_lshift_func_int8_t_s_u(((p_47 >= g_128.f2) ^ p_47), 6));
                        l_455 = l_456;
                        l_460 = l_460;
                    }
                    l_460.f2 ^= p_47;
                    for (g_77.f1 = 0; (g_77.f1 < 37); ++g_77.f1)
                    {
                        int l_473 = 0L;
                        struct S0 l_493 = {65528UL,0x1651L,4L,5742};
                        l_402.f2 = ((g_285 && (g_278.f2 > (l_460.f2 = (safe_rshift_func_int8_t_s_s(p_47, (g_230 = g_281)))))) || (g_77.f1 && (g_382 < ((l_358 = g_150) > (func_49((safe_div_func_int16_t_s_s(g_278.f2, (safe_mod_func_int8_t_s_s(((func_49((g_470 = (g_469 ^= (g_356 = 0x2D5F285FL))), l_471, p_46, l_471, l_471) <= g_77.f3) > 0x6EL), l_402.f2)))), g_472, p_46, l_473, g_128.f0) || 0xF0C4BB2AL)))));
                        if (g_230)
                            continue;
                        l_492 |= (func_49(g_128.f2, l_451, l_474, (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_382 & ((safe_unary_minus_func_uint32_t_u(((g_128.f0 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(1L, (safe_add_func_uint8_t_u_u(((g_472 = (p_46 & (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(1L, (g_491 = func_49(g_278.f3, (l_460.f2 |= g_317), l_358, l_490, g_48)))) == p_46), g_281)))) && 9L), l_473)))), l_451))) <= g_121))) != g_317)) || g_48), g_278.f3)), 0xB4L)), p_47) ^ g_128.f1);
                        l_457 = l_493;
                    }
                }
                for (g_124 = (-9); (g_124 == 3); g_124 = safe_add_func_int16_t_s_s(g_124, 3))
                {
                    int l_504 = 6L;
                    int l_513 = 0xF72BF05EL;
                    unsigned l_515 = 0xDA22FC5AL;
                    g_77.f2 = ((g_278.f0 != p_46) != p_47);
                    for (g_317 = 0; (g_317 <= (-6)); g_317 = safe_sub_func_uint16_t_u_u(g_317, 9))
                    {
                        unsigned short l_514 = 0UL;
                        l_460.f2 ^= p_46;
                        g_77.f2 = func_49(((0UL <= func_49((safe_rshift_func_uint16_t_u_s(l_460.f3, (l_516 ^= ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(255UL, (func_49(((0x74F3L > l_504) != (l_451 = (safe_mod_func_uint16_t_u_u(5UL, (g_469 = (safe_mul_func_uint16_t_u_u((func_49((((func_49((g_491 = func_49(l_504, g_382, (l_513 |= (((l_492 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_46 || l_504), l_402.f3)), g_234))) && g_48) >= 0x1CL)), l_504, g_77.f2)), p_46, l_402.f2, g_77.f3, p_47) && p_47) >= l_445) <= 0L), l_514, g_128.f1, l_515, g_230) <= g_77.f0), 4UL))))))), l_514, g_234, l_450, g_124) || l_514))) && p_46), l_455.f2)) <= 65528UL)))), p_46, g_124, l_450, g_278.f3)) != l_460.f0), g_470, g_74, p_47, l_460.f0);
                    }
                }
            }
            g_124 = (safe_unary_minus_func_uint32_t_u(l_518));
        }
        else
        {
            int l_550 = 9L;
            int l_553 = 0xA0D4F16EL;
            struct S0 l_556 = {0UL,0x5FBBL,0xA4EBFBA9L,3920};
            l_555.f2 = (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_47 = func_65(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((func_55(p_47, l_450, g_278, (l_554 &= (0xF0B17DDDL | (safe_mul_func_uint16_t_u_u((l_402.f2 = ((safe_mod_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s(0x5F3DL, (l_455.f2 = ((safe_sub_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((+g_543), (g_121 = (safe_lshift_func_uint16_t_u_u((0L & func_49((l_550 = (safe_mod_func_int16_t_s_s(p_46, (l_358 = (safe_sub_func_uint16_t_u_u(0x3F70L, p_46)))))), p_47, g_285, g_77.f2, l_455.f1)), 3))))), g_48)), p_46)), g_382)) < p_46) >= 0x7D55L) & p_47) && l_551), 0x701C12E9L)) & l_402.f2)))) | g_124) != 0xD40BL) || l_455.f3), p_47)) == l_552)), l_553)))), p_46) & p_46) | l_353), 3UL)), l_402.f1)) <= 1L), g_470, l_553, l_555)), p_46)) && g_128.f2), 4L));
            l_556 = l_556;
            for (l_358 = (-23); (l_358 >= (-16)); l_358 = safe_add_func_uint16_t_u_u(l_358, 9))
            {
                int l_583 = (-5L);
                l_583 |= (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(g_234, (g_582 = (safe_lshift_func_int8_t_s_s(0xAFL, (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0xBB45L || (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_317 = (g_470 && (((safe_sub_func_uint8_t_u_u(func_49(p_47, g_163, (((p_46 | ((g_128.f3 < func_49((((l_554 &= g_469) | 1L) > 4L), g_77.f3, g_285, g_278.f0, g_470)) > 5UL)) | 1L) > 65535UL), g_472, g_128.f2), 0xB9L)) <= l_556.f1) != 0x98L))), l_455.f0)), l_581)) == l_556.f3), 0xDEL))), l_555.f2)), g_48)), g_281))))))), p_46)) || 65533UL) | p_47);
                if (l_556.f1)
                {
                    unsigned l_588 = 0x8768DE7AL;
                    int l_589 = 0L;
                    l_589 = ((0UL != (p_46 & (0UL > 0UL))) || ((((((g_582 = p_46) > func_49((l_554 ^= (safe_add_func_int32_t_s_s(l_353, (65535UL == func_55(p_46, ((safe_add_func_int32_t_s_s(g_491, 0x2BB06094L)) | 0xA7EDL), g_77, g_230, p_46))))), l_588, g_382, l_556.f2, g_356)) == p_47) ^ p_46) == l_455.f2) ^ 4UL));
                    l_455 = l_556;
                    g_124 = g_469;
                    if (l_590)
                        break;
                }
                else
                {
                    short l_600 = 0xDF5EL;
                    int l_606 = 0xA3B450E9L;
                    if (g_469)
                    {
                        unsigned char l_593 = 7UL;
                        p_47 = 7L;
                        l_555 = g_278;
                        l_606 = (safe_rshift_func_int16_t_s_s((p_47 ^ func_65(l_593, (safe_rshift_func_uint16_t_u_s(((l_555.f2 = (safe_mul_func_uint8_t_u_u(l_583, (((safe_mul_func_int16_t_s_s(l_552, g_234)) < (func_49(g_128.f3, l_600, (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_600, 0L)), g_113)), g_278.f3, l_581) > g_230)) || l_556.f0)))) & 0xA19EL), l_605)), g_469, g_77)), p_47));
                    }
                    else
                    {
                        unsigned l_618 = 0x9F82284BL;
                        l_618 = (g_472 & (safe_rshift_func_int16_t_s_s((l_606 || (g_609 = 246UL)), (safe_rshift_func_int8_t_s_s((0L != (3L > func_49(((safe_sub_func_int16_t_s_s(func_65(((safe_add_func_int16_t_s_s(((g_382 > p_46) >= 0x63L), (safe_mod_func_int8_t_s_s((0x9E98B80AL ^ l_550), 0xCDL)))) != g_77.f0), p_47, g_128.f0, g_128), g_281)) > p_47), p_46, p_46, g_278.f2, p_47))), 5)))));
                        return p_47;
                    }
                    l_455 = l_455;
                }
                if (g_128.f1)
                    continue;
            }
        }
        if (((safe_rshift_func_uint16_t_u_u((l_554 &= func_65(p_47, (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u((4294967293UL <= func_55(p_47, (l_455.f2 = (safe_lshift_func_uint16_t_u_s(65531UL, 13))), l_626, (l_402.f2 ^= func_49(g_77.f3, g_382, ((g_609 >= p_46) == g_121), g_128.f1, g_543)), p_46)), l_455.f0)))), g_609, g_627)), g_609)) | l_358))
        {
            struct S0 l_629 = {7UL,65533UL,0x1A982257L,2644};
            l_628 = ((0x5B76L <= (l_402.f2 = l_555.f0)) ^ g_470);
            g_77 = l_629;
            g_278.f2 = 0xF310B0F9L;
        }
        else
        {
            unsigned l_643 = 0x7A6E8E74L;
            l_455.f2 |= (((g_630 <= (safe_lshift_func_int16_t_s_u(func_49((g_491 = (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, g_150)), (l_554 &= 2L)))), (safe_lshift_func_int16_t_s_u(func_49((g_74 <= (l_626.f2 = p_47)), p_46, ((~((((safe_div_func_int16_t_s_s(((g_128.f3 = p_47) == (safe_add_func_int8_t_s_s(p_46, l_358))), 0xC580L)) != p_47) != p_47) && l_455.f0)) && g_74), l_628, p_47), 14)), p_46, p_46, l_643), 15))) < 1UL) || g_128.f3);
            for (l_643 = 0; (l_643 > 26); l_643++)
            {
                for (l_555.f2 = (-19); (l_555.f2 == (-24)); l_555.f2--)
                {
                    for (p_46 = 14; (p_46 == 15); p_46++)
                    {
                        int l_652 = (-1L);
                        if (l_455.f0)
                            break;
                        l_652 = (safe_mod_func_int32_t_s_s(g_627.f2, p_47));
                        p_47 |= 1L;
                        g_627.f2 = (g_281 != (safe_rshift_func_int16_t_s_u((-1L), 14)));
                    }
                }
                p_47 = (safe_rshift_func_int16_t_s_s((0UL != l_555.f0), 0));
            }
        }
        if ((safe_sub_func_int16_t_s_s(p_47, (func_49(l_590, func_49(l_353, g_582, p_46, (func_49(l_552, ((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((((safe_add_func_int16_t_s_s((g_317 |= (l_554 = ((((safe_mul_func_int8_t_s_s(p_46, (l_668 = ((safe_add_func_uint16_t_u_u(g_121, 0x1C8DL)) != p_47)))) <= p_46) != p_47) != 6UL))), 1L)) & 1UL) > (-1L)) || 6L))), 0x08L)) != g_121), g_285, p_46, l_376) <= 0x100AL), l_626.f0), l_669, l_605, p_46) <= g_472))))
        {
            for (l_555.f2 = 0; (l_555.f2 == (-4)); --l_555.f2)
            {
                unsigned l_676 = 0x586FE887L;
                int l_681 = 0x4341AF9EL;
                l_676 = (safe_mod_func_int16_t_s_s(p_46, (g_472 || (safe_rshift_func_int8_t_s_u((0x90L && g_317), 4)))));
                l_681 ^= ((safe_sub_func_uint16_t_u_u((9L | (safe_add_func_int32_t_s_s((p_47 = func_55((p_46 && l_676), p_46, (g_77 = g_627), p_47, g_121)), (p_46 & l_676)))), 65529UL)) > l_554);
                g_77 = g_128;
                g_627 = g_128;
            }
            return p_46;
        }
        else
        {
            unsigned char l_690 = 0UL;
            int l_691 = 3L;
            g_627.f2 = (255UL || ((safe_unary_minus_func_int32_t_s((l_358 = ((0x5FE194E9L >= (3L >= ((safe_sub_func_int16_t_s_s(l_685, ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((p_46 != l_555.f2), l_690)), 6)) <= (g_692 = ((!(g_472 = (g_74 = 0xC5L))) && ((l_691 ^= 0L) || 0x7DD300EEL)))))) == p_47))) > g_77.f0)))) != p_47));
        }
    }
    return g_48;
}







static char func_49(unsigned p_50, short p_51, short p_52, int p_53, unsigned char p_54)
{
    unsigned char l_347 = 0x71L;
    int l_348 = (-8L);
    l_348 |= (l_347 > 0x67L);
    return l_348;
}







static unsigned func_55(char p_56, char p_57, struct S0 p_58, unsigned short p_59, unsigned p_60)
{
    unsigned char l_284 = 0UL;
    struct S0 l_286 = {0x7F17L,65527UL,0x99429188L,4911};
    char l_289 = 0xDEL;
    int l_341 = 0L;
    int l_342 = 0L;
    if ((((safe_lshift_func_uint8_t_u_s(func_65(g_113, g_281, (safe_rshift_func_int8_t_s_u((l_284 >= ((((!p_59) ^ l_284) < (g_285 = l_284)) || l_284)), 6)), l_286), g_48)) >= 0xE79DL) == 0x6A7BL))
    {
        unsigned short l_295 = 65533UL;
        g_128 = l_286;
        l_289 = ((safe_mod_func_int32_t_s_s(0xE94F0C07L, p_58.f0)) | p_58.f2);
        for (g_77.f0 = 15; (g_77.f0 <= 31); ++g_77.f0)
        {
            const unsigned l_308 = 0xF5924090L;
            g_77.f2 |= (((safe_unary_minus_func_int16_t_s(0L)) || (safe_sub_func_uint8_t_u_u((l_295 || (safe_rshift_func_int8_t_s_s(((l_295 >= (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((253UL > (0x93L > (+(l_286.f1 || (safe_lshift_func_int16_t_s_s(g_77.f1, 2)))))), 8)), (safe_add_func_uint16_t_u_u(l_295, g_230)))), g_278.f3))) ^ l_289), p_60))), g_48))) && l_308);
        }
    }
    else
    {
        unsigned short l_331 = 0xCB9EL;
        for (l_289 = (-24); (l_289 < (-28)); l_289--)
        {
            unsigned char l_321 = 255UL;
            if (p_57)
            {
                unsigned l_318 = 0x33B74F71L;
                unsigned char l_343 = 1UL;
                struct S0 l_344 = {65535UL,0xFA3DL,0x56C0FDE0L,6431};
                p_58.f2 &= (safe_add_func_int32_t_s_s(g_278.f2, 0x9D77DEF9L));
                g_128.f2 |= (g_230 ^ (safe_rshift_func_uint8_t_u_s(p_58.f2, 6)));
                l_286.f2 &= (p_58.f2 = (safe_mul_func_uint8_t_u_u((g_317 = 0UL), (l_318 ^= p_58.f3))));
                if (((p_57 |= (g_74 &= (safe_mod_func_int16_t_s_s(p_58.f3, p_56)))) & (l_321 = g_234)))
                {
                    for (l_318 = 0; (l_318 >= 9); l_318++)
                    {
                        short l_324 = 8L;
                        p_58.f2 = l_324;
                        g_124 = p_58.f0;
                        p_58 = g_128;
                        if (p_58.f0)
                            continue;
                    }
                }
                else
                {
                    unsigned l_327 = 0xA657FA00L;
                    for (p_57 = 24; (p_57 == (-28)); --p_57)
                    {
                        unsigned l_332 = 0x87C5984AL;
                        p_58.f2 ^= l_327;
                        g_278.f2 |= ((safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(0x50F805FCL)) > ((!g_150) > l_331)), l_327)) == (l_332 |= (l_286.f1 && g_163)));
                        p_58.f2 = g_278.f2;
                        g_278.f2 = (((p_56 = func_65(func_65((g_128.f1 >= (((0xDC2B5266L & 0x6F2389C7L) | ((!(safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((g_124 ^ (safe_mod_func_uint32_t_u_u(p_59, (l_341 ^= l_331)))), ((g_77.f1 != l_321) && (g_77.f0 != 1L)))) && (-1L)), g_278.f0)), 0x5AL))) & 0x3ABCL)) || g_113)), l_332, l_332, p_58), l_331, l_342, p_58)) && g_77.f2) | l_343);
                    }
                    if (p_58.f2)
                        break;
                    l_344 = g_278;
                }
            }
            else
            {
                struct S0 l_345 = {0x7BA3L,8UL,0xCDB69A65L,7869};
                g_77 = (l_345 = p_58);
            }
            if (l_284)
                break;
        }
        g_278 = g_278;
        return g_128.f0;
    }
    return p_58.f2;
}







static int func_65(unsigned char p_66, char p_67, unsigned short p_68, struct S0 p_69)
{
    const char l_86 = (-6L);
    unsigned l_93 = 4294967295UL;
    int l_95 = 0x8EE08A9CL;
    int l_108 = 0x1B0F05BAL;
    struct S0 l_109 = {0xBE22L,0xA0C8L,-3L,6471};
    for (p_69.f2 = (-16); (p_69.f2 > (-12)); p_69.f2 = safe_add_func_uint16_t_u_u(p_69.f2, 9))
    {
        unsigned l_94 = 4294967295UL;
        int l_102 = 1L;
        l_95 = ((((g_77.f0 ^ (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_48, 9)), (safe_sub_func_int16_t_s_s((-1L), g_48))))) < l_86) <= (p_69.f0 >= (4294967295UL | (safe_sub_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_93, p_69.f3)) != l_94), 1UL)) > g_77.f3) <= g_77.f1) > g_77.f2), 0xCE86L))))) <= p_69.f2);
        l_102 |= (p_69.f2 <= (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_86, (safe_mul_func_uint16_t_u_u(((-7L) | 0x91A6L), (g_77.f1 = l_86))))), 8)));
    }
    for (p_69.f0 = (-12); (p_69.f0 == 38); p_69.f0 = safe_add_func_int32_t_s_s(p_69.f0, 2))
    {
        unsigned l_107 = 0x6328DA4CL;
        unsigned short l_151 = 65531UL;
        int l_184 = 9L;
        struct S0 l_276 = {65529UL,1UL,-8L,6935};
        for (g_77.f2 = 0; (g_77.f2 == (-16)); g_77.f2 = safe_sub_func_uint32_t_u_u(g_77.f2, 1))
        {
            struct S0 l_110 = {0xB6CAL,0x54D8L,0xF4020D70L,4607};
            l_108 = l_107;
            l_110 = (l_109 = g_77);
        }
        if (l_109.f2)
        {
            struct S0 l_125 = {0x9B65L,8UL,0x7040CCA8L,5956};
            struct S0 l_129 = {8UL,0x4368L,1L,7476};
            for (g_77.f2 = 14; (g_77.f2 <= (-6)); g_77.f2 = safe_sub_func_uint32_t_u_u(g_77.f2, 6))
            {
                int l_116 = 0x52677066L;
                int l_198 = 9L;
                char l_235 = 0xD8L;
                g_113 = 0x82FBA83EL;
                if ((safe_lshift_func_uint8_t_u_s(l_116, 5)))
                {
                    int l_123 = (-9L);
                    if (g_48)
                    {
                        l_123 = ((safe_rshift_func_int16_t_s_u(g_48, 0)) <= ((safe_mod_func_uint8_t_u_u((p_69.f1 > (g_121 &= 0x04L)), (safe_unary_minus_func_int8_t_s((p_66 & g_74))))) != l_123));
                        g_124 &= g_74;
                        l_125 = l_125;
                        g_124 = (safe_rshift_func_int8_t_s_u(p_69.f0, 4));
                    }
                    else
                    {
                        g_128 = p_69;
                        g_128 = l_129;
                    }
                }
                else
                {
                    unsigned l_169 = 0x8C8944EAL;
                    for (g_77.f0 = (-3); (g_77.f0 != 17); g_77.f0 = safe_add_func_int32_t_s_s(g_77.f0, 4))
                    {
                        return g_128.f1;
                    }
                    if ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(0xC79EC616L, g_77.f2)), 0x1E07D3A0L)), ((safe_lshift_func_int8_t_s_u((-4L), ((g_48 == ((((safe_lshift_func_int8_t_s_u((g_74 = (g_150 = (l_116 <= (safe_mul_func_int16_t_s_s((g_128.f2 < 0x75L), (safe_mod_func_uint8_t_u_u(l_129.f0, p_69.f0))))))), l_151)) && p_69.f2) & p_67) > 250UL)) ^ p_69.f3))) >= (-7L)))), p_68)), 65534UL)))
                    {
                        char l_156 = 0x0DL;
                        int l_185 = 0x2DF5847FL;
                        p_69.f2 = (safe_sub_func_int16_t_s_s(((p_69.f3 = (safe_sub_func_uint8_t_u_u(l_156, ((safe_div_func_int8_t_s_s(p_69.f2, 0x4EL)) & ((safe_mul_func_int8_t_s_s((p_67 = (+g_113)), p_69.f1)) < p_69.f2))))) <= (safe_sub_func_uint8_t_u_u((g_163 ^= 0xE6L), 2L))), 0x497FL));
                        if (g_121)
                            continue;
                        if (p_69.f2)
                            continue;
                        l_185 = (l_184 = ((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(g_128.f3, l_116)) ^ (safe_unary_minus_func_int32_t_s((((g_150 = l_169) | 0xDFL) != l_109.f0)))), (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_77.f3, (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x7287L, g_128.f2)), (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_67, 4294967287UL)), g_77.f2)))), g_128.f2)))), p_69.f3)))) == p_68));
                    }
                    else
                    {
                        if (g_150)
                            break;
                        p_69.f2 = p_66;
                        l_109 = l_109;
                        p_69.f2 = 0L;
                    }
                    for (g_150 = (-12); (g_150 < (-18)); g_150 = safe_sub_func_int8_t_s_s(g_150, 7))
                    {
                        g_128.f2 &= (-1L);
                        return p_68;
                    }
                    l_198 &= (safe_add_func_int16_t_s_s(g_128.f0, (p_69.f0 && ((p_68 > (0x8960L == (l_107 & ((safe_mul_func_uint8_t_u_u(0UL, (l_116 = (l_95 ^ ((((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_69.f3, p_69.f2)) <= 1UL), p_69.f3)), l_125.f3)) | l_169) ^ 1L) || p_66))))) && 0L)))) < p_69.f0))));
                }
                if ((l_151 | (safe_lshift_func_int8_t_s_s((4UL | (safe_sub_func_uint32_t_u_u(((!(safe_unary_minus_func_int16_t_s(p_68))) | p_68), (g_121 & ((g_150 < l_116) & g_77.f0))))), 5))))
                {
                    if (((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(65527UL, g_74)), (safe_add_func_uint32_t_u_u((g_128.f3 = (safe_sub_func_uint32_t_u_u((l_95 = (safe_add_func_uint16_t_u_u(65535UL, ((g_113 | g_128.f3) ^ (l_129.f2 = (g_128.f0 |= (g_77.f0 ^ l_107))))))), p_69.f1))), (safe_mod_func_uint32_t_u_u((l_151 != l_116), g_77.f2)))))) ^ (-7L)))
                    {
                        p_69.f2 = g_77.f2;
                    }
                    else
                    {
                        return p_69.f1;
                    }
                    for (g_113 = 13; (g_113 != (-11)); g_113--)
                    {
                        if (l_129.f3)
                            break;
                        return l_107;
                    }
                }
                else
                {
                    l_109 = g_128;
                }
                for (g_128.f2 = 0; (g_128.f2 > (-3)); g_128.f2 = safe_sub_func_uint32_t_u_u(g_128.f2, 9))
                {
                    unsigned l_231 = 0xA99610AAL;
                    p_69.f2 = (safe_sub_func_uint8_t_u_u((g_234 ^= (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0x29A1L, 6)), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_230 &= 0xDBL), (l_198 ^ (l_231 = p_66)))), (safe_sub_func_int32_t_s_s((-8L), (g_77.f2 && g_77.f1)))))))), l_235));
                }
            }
            if (g_128.f0)
                continue;
            g_128.f2 = l_129.f3;
            p_69.f2 = g_163;
        }
        else
        {
            char l_249 = 0x5AL;
            char l_275 = 0x51L;
            struct S0 l_277 = {0xFE39L,6UL,0x08496B46L,5761};
            if (p_69.f0)
                break;
            for (g_230 = 16; (g_230 < 25); ++g_230)
            {
                int l_248 = 1L;
                p_69.f2 |= (l_248 = (((8L || (g_128.f0 >= (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(0x08L, (((safe_mul_func_int8_t_s_s(((g_124 ^= ((l_109.f2 && p_69.f0) == (safe_sub_func_int32_t_s_s(g_77.f0, (g_74 >= ((safe_mod_func_uint32_t_u_u(((g_128.f3 = l_248) || l_248), 1L)) & g_77.f2)))))) != l_249), g_230)) == (-1L)) < 0x58E7943EL))) > 0L), 0x1A523987L)))) == g_77.f2) == l_249));
                if (g_74)
                {
                    int l_274 = 7L;
                    g_77.f2 |= (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((-9L), 1L)), ((safe_mul_func_int8_t_s_s(g_163, ((g_113 = (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((l_248 = l_151), ((safe_mul_func_uint8_t_u_u(g_150, (safe_div_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(g_128.f0, 5)) < (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((!((0x99L != g_230) | g_128.f2)) <= g_124), 3)), 0xB7L))) == g_77.f3) > p_69.f0), l_274)))) && g_128.f3))) == 0xE8889E10L), 6)), 0x38L)), p_69.f2))) | p_69.f0))) >= g_234)));
                }
                else
                {
                    l_275 &= p_69.f2;
                }
            }
            g_124 = (+1L);
            g_128 = (l_277 = l_276);
        }
        g_77 = g_77;
        return p_69.f2;
    }
    return p_69.f2;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_278.f0, "g_278.f0", print_hash_value);
    transparent_crc(g_278.f1, "g_278.f1", print_hash_value);
    transparent_crc(g_278.f2, "g_278.f2", print_hash_value);
    transparent_crc(g_278.f3, "g_278.f3", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_627.f0, "g_627.f0", print_hash_value);
    transparent_crc(g_627.f1, "g_627.f1", print_hash_value);
    transparent_crc(g_627.f2, "g_627.f2", print_hash_value);
    transparent_crc(g_627.f3, "g_627.f3", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1100.f0, "g_1100.f0", print_hash_value);
    transparent_crc(g_1100.f1, "g_1100.f1", print_hash_value);
    transparent_crc(g_1100.f2, "g_1100.f2", print_hash_value);
    transparent_crc(g_1100.f3, "g_1100.f3", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1308, "g_1308", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1793, "g_1793", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1851, "g_1851", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
