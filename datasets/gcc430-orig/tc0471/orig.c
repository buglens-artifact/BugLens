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
   int f0;
};

union U1 {
   int f0;
   volatile char f1;
   unsigned char f2;
   int f3;
   unsigned f4;
};


static const unsigned short g_8 = 65529UL;
static union U0 g_26 = {0L};
static int g_47 = 1L;
static volatile int g_52 = (-5L);
static volatile int g_53 = 0x73B01729L;
static volatile int g_54 = 0xC5ADF851L;
static int g_55 = (-1L);
static int g_67 = (-1L);
static volatile union U1 g_113 = {0x19708E63L};
static union U1 g_290 = {3L};
static union U1 g_357 = {0L};
static short g_361 = (-10L);
static unsigned short g_368 = 1UL;
static unsigned char g_383 = 0UL;
static volatile union U1 g_466 = {0xD1F5A900L};
static unsigned char g_513 = 0xAFL;
static union U1 g_567 = {1L};
static const unsigned char g_636 = 0x14L;
static short g_637 = 0xDFB4L;
static short g_663 = (-4L);



static unsigned char func_1(void);
static int func_2(const int p_3, int p_4, char p_5, const union U0 p_6, short p_7);
static char func_18(unsigned char p_19, unsigned p_20);
static char func_32(int p_33);
static char func_36(const unsigned short p_37, unsigned char p_38, unsigned p_39, int p_40);
static char func_68(union U0 p_69, char p_70, int p_71, const unsigned short p_72, short p_73);
static unsigned char func_76(int p_77, char p_78, short p_79, short p_80, union U0 p_81);
static char func_82(const char p_83, char p_84);
static char func_87(unsigned p_88);
static unsigned func_89(unsigned short p_90, unsigned short p_91, union U0 p_92, const char p_93);
static unsigned char func_1(void)
{
    unsigned char l_15 = 0xB0L;
    int l_21 = 0L;
    char l_627 = 7L;
    unsigned l_662 = 0xDAB74AC6L;
    union U0 l_670 = {1L};
    g_663 ^= (func_2(g_8, ((((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(g_8, (safe_add_func_uint8_t_u_u(0x78L, l_15)))) | ((((func_18(g_8, l_21) && g_567.f2) > (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((0L && 0x51C4L), 250UL)), l_15))) > (-1L)) && 0x6241L)), g_26.f0)) , g_567.f1) <= l_15) , l_15), l_627, g_26, l_627) == l_662);

        g_290.f0 = (safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((l_670 , 4294967289UL) , (l_627 , l_21)), 0x2AL)), g_54)) <= g_567.f2), (-5L)));

        return g_567.f2;
}







static int func_2(const int p_3, int p_4, char p_5, const union U0 p_6, short p_7)
{
    unsigned l_632 = 0x08808EBEL;
    union U0 l_635 = {5L};
    int l_652 = 1L;
    unsigned l_661 = 9UL;
    g_637 &= (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((l_632 <= ((~l_632) && g_368)), (safe_mod_func_uint8_t_u_u(func_68(l_635, (g_466.f0 ^ 1UL), (g_567.f0 | 8UL), g_636, l_632), (-1L))))) , 0xC5A9L), l_635.f0));
    l_652 |= ((safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((g_26 , g_290.f1) <= (p_3 <= p_7)), (safe_sub_func_uint8_t_u_u((~(((safe_add_func_int16_t_s_s(l_635.f0, (g_26 , (((0xD8B4L > (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(p_5, g_357.f3)), 2)), 1))) , g_637) , 1UL)))) , p_3) , g_290.f4)), p_5)))) <= 0xF0CBL), p_4)) != g_361);
    p_4 = (func_87(g_361) | l_652);
    l_661 = (4UL >= (((((safe_add_func_uint8_t_u_u(0x99L, ((p_5 < ((safe_lshift_func_int16_t_s_u(0x2AD4L, 5)) , ((safe_mul_func_uint8_t_u_u((((((g_567.f2 <= g_67) <= l_635.f0) >= g_466.f1) , ((safe_rshift_func_uint8_t_u_s((l_652 , g_636), 0)) , g_357.f0)) | 0xFA2D9107L), 0xB7L)) >= p_6.f0))) && 0xBFDE44E6L))) < l_652) != l_632) ^ 9UL) >= p_6.f0));
    return p_5;
}







static char func_18(unsigned char p_19, unsigned p_20)
{
    const int l_29 = (-1L);
    int l_622 = (-1L);
    l_622 = (safe_sub_func_uint8_t_u_u(g_8, (safe_mul_func_uint8_t_u_u((g_26 , g_8), (((safe_lshift_func_int16_t_s_s(l_29, 9)) <= g_8) || (func_32(((p_19 , (safe_mul_func_int8_t_s_s((p_19 == g_8), func_36(l_29, l_29, g_8, g_26.f0)))) < l_29)) == 0L))))));

        return g_67;
}







static char func_32(int p_33)
{
    unsigned l_576 = 0xD3D6E6ADL;
    union U0 l_585 = {0x289DD40EL};
    unsigned l_586 = 0xF09172F3L;
    char l_587 = 0x24L;
    unsigned l_612 = 0x80C7E700L;
    l_585.f0 = ((((safe_sub_func_int16_t_s_s((p_33 <= func_89(((((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(p_33, func_89((func_68(g_26, (safe_mod_func_int32_t_s_s(l_576, (safe_lshift_func_uint16_t_u_s(p_33, ((func_76(func_89((((func_36(func_82(l_576, (safe_lshift_func_uint8_t_u_u(((p_33 & (0x6CAC4D57L | (safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(l_576, g_53)) != 0UL), 6)))) && g_113.f0), l_576))), p_33, g_567.f2, g_26.f0) , l_576) != g_8) , l_576), l_576, l_585, g_567.f3), l_585.f0, l_586, l_587, l_585) < g_567.f0) , 7L))))), l_587, g_8, l_586) , 0UL), g_567.f0, g_26, g_567.f4))), l_586)) >= p_33) < 0UL) == l_587), l_585.f0, g_26, l_576)), g_567.f4)) , 0xFF2AFA1CL) || 0x64FFCDEEL) | p_33);
    if ((g_513 , p_33))
    {
        for (g_383 = 0; (g_383 < 49); g_383 = safe_add_func_int32_t_s_s(g_383, 9))
        {
            if (l_576)
                break;
        }
    }
    else
    {
        unsigned char l_600 = 0xBEL;
        int l_601 = 1L;
        char l_613 = 0x3EL;
        for (g_290.f3 = 0; (g_290.f3 == (-14)); g_290.f3 = safe_sub_func_uint32_t_u_u(g_290.f3, 6))
        {
            return p_33;
        }
        l_601 = (safe_add_func_uint8_t_u_u(0UL, ((g_567.f1 != (p_33 < (safe_lshift_func_int16_t_s_u((-1L), (((safe_mul_func_int8_t_s_s(l_587, (safe_sub_func_int8_t_s_s(p_33, l_600)))) & (l_600 ^ g_26.f0)) > l_600))))) && l_585.f0)));
        l_601 = (((l_585.f0 & ((safe_add_func_int8_t_s_s((g_8 , ((safe_sub_func_int8_t_s_s(0x17L, (safe_add_func_int32_t_s_s(((((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(func_87((l_612 != (p_33 >= func_76(g_466.f4, l_600, g_357.f2, p_33, g_26)))), l_601)) != 0xF2L), l_613)) != (-7L)) ^ p_33) == 0x14L), 0x440BE902L)))) , l_587)), p_33)) , g_290.f0)) , 248UL) == 0x17L);
        g_53 = ((safe_div_func_uint8_t_u_u(g_567.f2, 252UL)) | (safe_mod_func_int32_t_s_s(l_587, (safe_add_func_uint16_t_u_u(g_290.f3, (-1L))))));
    }
    g_47 = (safe_lshift_func_int8_t_s_s(g_466.f0, 2));
    return p_33;
}







static char func_36(const unsigned short p_37, unsigned char p_38, unsigned p_39, int p_40)
{
    unsigned short l_373 = 0x3742L;
    union U0 l_379 = {-6L};
    char l_488 = (-4L);
    unsigned short l_566 = 1UL;
    for (p_38 = 12; (p_38 < 25); p_38 = safe_add_func_uint16_t_u_u(p_38, 1))
    {
        int l_58 = 0x36511F0BL;
        union U0 l_380 = {0L};
        unsigned l_404 = 4294967289UL;
        for (p_40 = 3; (p_40 < (-20)); p_40 = safe_sub_func_uint8_t_u_u(p_40, 1))
        {
            char l_347 = 0x47L;
            union U0 l_348 = {-7L};
            for (p_39 = 0; (p_39 > 55); p_39++)
            {
                char l_378 = 0xFEL;
                for (g_47 = 0; (g_47 != (-22)); g_47--)
                {
                    return p_39;
                }
                for (g_47 = 0; (g_47 != (-6)); --g_47)
                {
                    const unsigned short l_367 = 0UL;
                    int l_374 = 0xC4111C8FL;
                    for (g_55 = 4; (g_55 < (-19)); g_55 = safe_sub_func_int16_t_s_s(g_55, 7))
                    {
                        return g_8;
                    }
                    g_52 = (l_58 < 0x5AB1L);
                    for (l_58 = 0; (l_58 < 13); l_58 = safe_add_func_uint8_t_u_u(l_58, 9))
                    {
                        int l_366 = (-9L);
                        g_368 ^= ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_38, g_67)), func_68((((safe_mul_func_uint8_t_u_u(func_76((func_82(l_58, (g_26 , (((safe_lshift_func_uint8_t_u_s(l_58, func_87(func_89((safe_sub_func_uint8_t_u_u((((g_26 , (safe_add_func_uint16_t_u_u(p_40, g_47))) | (p_38 < p_40)) , 0xFFL), g_53)), l_58, g_26, g_55)))) < p_40) < 0UL))) > p_37), l_347, g_8, p_39, l_348), 255UL)) > p_40) , g_26), p_39, g_47, g_357.f3, g_357.f4))), l_366)) <= l_367);

                                                l_380.f0 = (l_58 < func_89(p_37, ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((l_373 > (l_373 ^ l_374)) , g_26.f0) != (p_37 , p_37)), ((safe_unary_minus_func_int32_t_s((((safe_sub_func_uint16_t_u_u((func_76(l_378, p_40, p_37, l_348.f0, l_379) ^ 0UL), l_374)) ^ 0x0BL) >= p_39))) | g_47))), 65527UL)) >= l_378), l_380, g_368));
                        g_67 = (safe_mod_func_uint32_t_u_u(((-8L) < g_383), p_39));
                    }
                    g_113.f3 = 7L;

                                    }
                l_380.f0 |= p_39;
            }
            g_53 &= g_26.f0;
            l_379.f0 ^= (l_58 > 0xB897L);
            for (g_290.f3 = (-17); (g_290.f3 >= 15); g_290.f3 = safe_add_func_uint8_t_u_u(g_290.f3, 4))
            {
                int l_386 = 0x8C5AC05FL;
                union U0 l_409 = {0x647D06ECL};
                unsigned short l_418 = 0x4912L;
                if (p_37)
                    break;
                l_379.f0 = ((l_386 | (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(1UL, ((((p_40 | (((safe_lshift_func_int16_t_s_u(6L, 8)) || (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((0x57L != (g_113.f4 , l_379.f0)), (g_26.f0 , (((safe_unary_minus_func_int16_t_s(p_40)) , p_40) & g_357.f4)))) >= (-1L)) < l_348.f0), 10)) && 0x9577L), 12))) > p_39)) || 0xD43C1946L) != g_47) ^ g_55))) | g_55) || g_290.f0), 11))) , l_380.f0);
                g_47 = (safe_sub_func_int32_t_s_s(l_404, ((safe_div_func_uint32_t_u_u((g_26.f0 < (safe_sub_func_uint16_t_u_u((((l_409 , (p_38 != p_37)) != p_40) || (~((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_357 , (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((func_87(g_357.f1) >= 9L), g_357.f4)), p_38))), 1)), g_361)) > g_383))), l_418))), 0x0920EB86L)) && 0L)));
                g_54 = (safe_sub_func_int32_t_s_s((l_380.f0 && func_89(((((safe_rshift_func_uint8_t_u_s(g_67, (p_37 | g_67))) >= (l_409 , p_40)) == (g_54 != (l_347 , g_361))) & l_379.f0), g_383, g_26, g_55)), l_404));
            }

                    }
        for (g_361 = 0; (g_361 <= 25); g_361 = safe_add_func_int8_t_s_s(g_361, 8))
        {
            unsigned l_431 = 0UL;
            int l_434 = 0L;
            l_434 = (safe_add_func_int16_t_s_s((0x0254D38CL < (safe_add_func_uint8_t_u_u((g_67 || ((safe_mul_func_uint16_t_u_u((l_431 | (-5L)), func_87(l_431))) , (safe_add_func_uint32_t_u_u(func_82((((l_380.f0 || l_58) , l_431) , g_290.f0), g_8), (-6L))))), p_40))), p_38));

                        if (l_373)
                break;
            for (l_379.f0 = (-18); (l_379.f0 <= (-4)); ++l_379.f0)
            {
                return g_357.f0;
            }
        }
        return l_58;
    }
    if (p_37)
    {
        int l_483 = (-3L);
        union U0 l_518 = {0xC5A4EB59L};
        for (g_383 = 0; (g_383 < 56); g_383 = safe_add_func_int32_t_s_s(g_383, 7))
        {
            int l_458 = 0xCB6A6315L;
            const union U0 l_502 = {0xD04719DAL};
            g_357.f0 &= p_38;
            for (p_38 = 17; (p_38 > 20); p_38++)
            {
                unsigned l_457 = 0xB219FC28L;
                union U0 l_459 = {0xED1A0956L};
                int l_489 = 0xFCF0A8FCL;
                g_357.f0 |= func_82(p_39, p_38);

                                if (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_47, (safe_mul_func_int16_t_s_s(((65526UL & (0UL == 0x0FAEL)) || func_89((func_76((g_8 | ((safe_mod_func_int16_t_s_s(func_87(((safe_add_func_uint16_t_u_u(g_357.f0, (safe_sub_func_int8_t_s_s((253UL <= (safe_rshift_func_uint8_t_u_s((((p_38 > (safe_div_func_uint32_t_u_u(p_38, g_26.f0))) && 65533UL) >= l_379.f0), 7))), l_457)))) , p_39)), p_39)) , 0xE8F17475L)), p_39, l_458, g_8, l_459) != (-1L)), p_37, l_379, l_379.f0)), p_39)))), p_40)) , p_38))
                {
                    unsigned char l_460 = 0xB6L;
                    int l_469 = 0xEEBAE752L;
                    l_469 ^= (l_460 & ((0xBDL < (safe_rshift_func_uint16_t_u_u(l_458, p_39))) <= (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((g_466 , (((l_460 ^ p_37) <= (safe_lshift_func_int8_t_s_u(p_38, func_82(l_373, g_113.f4)))) || p_38)))), g_67))));
                }
                else
                {
                    unsigned short l_474 = 0xB680L;
                    unsigned l_484 = 0x344EB442L;
                    union U0 l_495 = {0x61F9DEB3L};
                    int l_531 = 0x5837ADB0L;
                    if ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((p_38 || l_474), 65535UL)) | (p_39 , (l_458 , ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_483, g_67)), l_483)), 7)), l_484)) <= l_483)))), 11)))
                    {
                        unsigned l_487 = 0x47465895L;
                        short l_490 = 0xD8E7L;
                        l_489 |= ((safe_add_func_int8_t_s_s(g_26.f0, ((l_487 ^ ((0UL <= 1UL) != p_37)) >= ((l_483 ^ l_488) & (p_40 >= ((0x8AL > g_290.f1) && l_459.f0)))))) && l_458);
                        p_40 = ((((l_490 == 2L) > (0xB01260ACL & 0x9BB6E73DL)) <= ((1UL | p_38) || (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_76(l_457, g_357.f3, l_484, g_290.f3, l_495), 4UL)), l_458)))) , p_38);
                    }
                    else
                    {
                        return l_457;
                    }
                    g_67 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_502 , (safe_add_func_uint16_t_u_u(func_76(((safe_rshift_func_int16_t_s_s(((g_53 , 0x2105L) == ((0xBF81L ^ (((safe_sub_func_uint32_t_u_u(p_37, ((safe_add_func_uint8_t_u_u((g_67 || (g_26 , (!(safe_mod_func_uint16_t_u_u((g_513 != (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_483 && l_483), p_37)), 0x83F9573CL))), 0x9FA1L))))), p_37)) , (-1L)))) && 0x78BCL) >= 1L)) , l_483)), l_488)) | l_459.f0), g_290.f3, l_458, l_373, l_518), 7L))) == p_39), 0x665FL)), 2)), (-1L)));
                    l_495.f0 = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_488, 10)), g_47)) < (safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_357.f3 < (l_502 , func_68(l_518, l_531, p_38, l_458, (safe_unary_minus_func_int32_t_s(g_357.f1))))), 1L)), g_8)), 0x5B33L)) & g_357.f3), 1L)));
                }
            }
        }
        g_67 |= 0xD7F32D72L;
        for (g_513 = (-17); (g_513 > 29); g_513 = safe_add_func_uint32_t_u_u(g_513, 1))
        {
            unsigned short l_535 = 65534UL;
            l_518.f0 = ((func_82((l_535 , g_466.f2), p_39) & (safe_mod_func_uint16_t_u_u(((((l_379 , (safe_rshift_func_uint16_t_u_s(l_483, (safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(l_535, p_39)) != (((g_357.f3 , 4294967286UL) < l_379.f0) & g_357.f3)), 65528UL))))) > l_535) != p_39) <= l_535), g_47))) ^ p_39);

                        return l_483;
        }
        l_518.f0 = 0x59D80F0CL;
    }
    else
    {
        const char l_552 = (-1L);
        g_52 = (0x86FEL && (safe_mul_func_int16_t_s_s(g_54, ((+(safe_mul_func_int16_t_s_s((((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((65533UL <= (l_373 != (((l_552 != (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s(1UL, 2)) == g_55))), ((safe_mul_func_int16_t_s_s((((p_38 >= (safe_rshift_func_uint16_t_u_s(p_40, 9))) > l_488) | l_552), p_40)) && g_290.f4))), p_37)), 3UL)) | g_290.f3) != p_40)) , 0UL) , 0x19C5L))), p_39)), l_373)) | p_40) != l_552) >= p_38) ^ g_8), p_39))) , l_566))));
    }
    p_40 = (g_290.f1 != g_47);
    l_379.f0 = (g_567 , ((func_82((func_89(((l_566 < g_513) >= 0x56B2L), p_40, (g_47 , l_379), p_40) != 4294967295UL), l_566) > p_39) & l_566));

        return g_466.f1;
}







static char func_68(union U0 p_69, char p_70, int p_71, const unsigned short p_72, short p_73)
{
    short l_362 = 0x3307L;
    unsigned l_363 = 0xD74C9B7BL;
    p_69.f0 = (0x26L == (func_76(p_70, (p_69.f0 , (func_82(p_72, l_362) , l_362)), l_363, (safe_mul_func_int8_t_s_s((g_26.f0 , p_73), 0x6DL)), p_69) & l_363));
    return g_357.f2;
}







static unsigned char func_76(int p_77, char p_78, short p_79, short p_80, union U0 p_81)
{
    char l_349 = 0xDCL;
    int l_352 = 5L;
    unsigned char l_360 = 246UL;
    g_361 &= (l_349 ^ ((safe_mod_func_int32_t_s_s(func_82(((((l_352 == func_87((safe_mod_func_uint32_t_u_u(0x1335ABD9L, (safe_lshift_func_int8_t_s_u(g_290.f1, 1)))))) || ((l_352 == (g_357 , p_78)) > (safe_mul_func_int8_t_s_s(1L, g_290.f0)))) & p_80) , 7L), l_352), l_352)) < l_360));
    return p_81.f0;
}







static char func_82(const char p_83, char p_84)
{
    int l_141 = 1L;
    union U0 l_142 = {0x50633388L};
    unsigned char l_143 = 0x6BL;
    volatile int l_157 = 1L;
    unsigned l_227 = 0x6C9C1765L;
    unsigned short l_236 = 65526UL;
    int l_250 = 0L;
    unsigned l_264 = 0xD61EB32BL;
    unsigned l_289 = 4294967295UL;
    char l_299 = 0xADL;
    unsigned short l_344 = 1UL;
lbl_239:
    l_143 = func_89((safe_mod_func_uint16_t_u_u(g_113.f4, (safe_sub_func_int32_t_s_s((((p_83 | (l_141 || g_55)) , (g_47 >= p_83)) >= ((l_141 && 0xBFL) > 246UL)), l_141)))), l_141, l_142, l_141);
    for (l_142.f0 = 18; (l_142.f0 <= 9); l_142.f0 = safe_sub_func_int8_t_s_s(l_142.f0, 7))
    {
        int l_150 = 0xF2DD6158L;
        union U0 l_155 = {0xE35B4FB6L};
        const unsigned short l_156 = 0x03A5L;
        int l_188 = 0x2B1B5CBCL;
        unsigned char l_198 = 0x9BL;
        unsigned short l_216 = 65535UL;
        char l_267 = 0L;
        l_155.f0 = (func_89(g_53, (safe_mod_func_int16_t_s_s((((g_55 > (+g_47)) >= (safe_rshift_func_uint8_t_u_u((+(g_47 & l_150)), (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(p_84, 1)) < (l_142 , (p_84 || l_150))) != (-1L)), l_150))))) <= 0x9B71L), l_142.f0)), l_155, l_156) | 0x06703C07L);
        l_157 = g_113.f3;
        if (((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_156 > l_141), p_84)), 7)) || ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(func_89((func_89(p_84, p_83, g_26, ((safe_div_func_uint32_t_u_u(g_67, l_156)) | g_53)) , p_84), g_47, l_155, l_141), p_83)) && p_84), 0x0AE64C0EL)) <= p_83)))
        {
            volatile unsigned char l_168 = 255UL;
            int l_187 = 0xE9626E4EL;
            l_168 = g_113.f0;
            g_52 = (((safe_lshift_func_int8_t_s_s(0xE0L, p_83)) || (0x41L && l_141)) , (~(safe_add_func_uint32_t_u_u(l_155.f0, func_87((((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((~(safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_113.f0, l_187)) , 0x3883L), l_188)) > 0x5D25L) || 0xAA0A5B80L) , g_55) >= l_143) | 0x49FBL), l_155.f0)), p_84))), 2)), 0x58L)), g_26.f0)) >= 0x81L) | 4294967290UL))))));
            if (l_143)
                continue;
        }
        else
        {
            int l_199 = (-1L);
            int l_200 = 0xB3554E5FL;
            unsigned char l_286 = 255UL;
            union U0 l_287 = {0xE3DCAB47L};
            unsigned l_302 = 0x225A8C6FL;
            unsigned l_329 = 0xC5E223FEL;
            if (g_52)
            {
                short l_193 = 0xCADFL;
                if (p_84)
                    break;
                l_200 |= ((((safe_add_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(l_193, (g_26 , (safe_mul_func_uint16_t_u_u(func_87(p_83), ((safe_rshift_func_uint16_t_u_u((l_198 ^ (l_193 != (p_84 , l_199))), 13)) < g_8)))))) >= 4294967292UL) != (-8L)), (-1L))) , g_26) , 0x50L) < g_47);
                if (p_83)
                    continue;
                if (l_199)
                    break;
            }
            else
            {
                int l_203 = 0x3F08B235L;
                int l_249 = (-7L);
                for (l_200 = 0; (l_200 != (-1)); l_200 = safe_sub_func_int16_t_s_s(l_200, 7))
                {
                    if (l_141)
                        break;
                }
                if ((func_87(l_203) , p_84))
                {
                    union U0 l_214 = {-1L};
                    int l_215 = 0L;
                    unsigned char l_235 = 0xC1L;
                    l_155.f0 = (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((0L || (g_113.f3 || (0xE0A404EEL != (((safe_rshift_func_int16_t_s_u((((((l_214 , 0x08165012L) | (func_87((p_83 , p_84)) & (l_200 || g_26.f0))) >= l_215) > p_84) != p_83), 1)) != l_198) != l_215)))) != l_188) , l_214.f0), g_8)), p_84)), g_47));
                    if (g_54)
                    {
                        l_216 = l_215;
                    }
                    else
                    {
                        int l_234 = 0x8428C974L;
                        g_52 = l_157;
                        l_236 &= (safe_add_func_int8_t_s_s(p_84, (p_84 > ((-2L) & func_87(((safe_rshift_func_uint8_t_u_s(g_113.f3, (safe_lshift_func_int8_t_s_u(p_83, ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((g_47 & ((l_227 & (g_8 || (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_67, g_26.f0)), l_214.f0)), g_67)))) && l_156)), l_234)), l_203)) ^ 0x90L) , l_235) , l_200))))) , 0x23DD8F0EL))))));
                    }
                    for (l_235 = 17; (l_235 != 27); ++l_235)
                    {
                        if (g_55)
                            goto lbl_239;
                    }
                    if (p_84)
                        break;
                }
                else
                {
                    unsigned l_248 = 9UL;
                    int l_251 = 1L;
                    if ((((251UL != 0xE3L) == (safe_rshift_func_int16_t_s_u((g_113.f2 > (g_26 , ((g_26.f0 >= p_83) | (safe_rshift_func_uint16_t_u_s((g_26.f0 , (safe_lshift_func_int8_t_s_s((-7L), 0))), ((safe_mul_func_int8_t_s_s(p_84, g_47)) & l_248)))))), 0))) >= p_83))
                    {
                        if (g_113.f1)
                            break;
                        g_113.f3 = 0x59AD7F26L;

                                                l_249 = l_199;
                    }
                    else
                    {
                        l_251 = l_250;
                    }

                                        if ((safe_sub_func_uint8_t_u_u(((g_54 , p_83) || (-7L)), g_55)))
                    {
                        unsigned char l_256 = 0xC7L;
                        const unsigned char l_261 = 0x5AL;
                        l_199 ^= ((safe_mod_func_int8_t_s_s(l_249, (l_256 || ((-1L) | (((!g_113.f3) < ((safe_mul_func_int16_t_s_s(l_227, (p_84 ^ p_83))) , (l_142 , ((((safe_add_func_uint8_t_u_u(1UL, l_261)) == p_84) , p_84) > l_249)))) == g_26.f0))))) , (-1L));
                    }
                    else
                    {
                        l_251 = g_55;
                        l_157 &= 1L;
                        return l_142.f0;
                    }
                }
                l_200 = (0x502434DAL >= (+((safe_add_func_uint32_t_u_u(func_89((((l_264 , (((l_199 & ((safe_rshift_func_uint8_t_u_u(0x6BL, 3)) , (func_89(p_83, g_113.f3, g_26, p_83) && l_249))) <= l_249) | l_200)) <= p_84) , g_113.f3), g_8, l_142, l_249), l_250)) , 0x8FAA3ACFL)));
                l_249 = (((g_26.f0 , (func_89(g_67, g_55, g_26, (g_26 , ((252UL | 0L) < l_156))) & l_267)) || 0x6CL) | g_8);
            }
            for (l_216 = (-18); (l_216 != 7); l_216 = safe_add_func_int32_t_s_s(l_216, 6))
            {
                unsigned l_288 = 4294967287UL;
                l_155.f0 ^= ((l_142.f0 , ((safe_rshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(((g_26 , 0xDB183CEEL) && (safe_div_func_uint8_t_u_u(p_83, (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(func_89(((!l_267) >= func_89(p_84, (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((~(safe_rshift_func_int16_t_s_u(p_83, 5))) < ((func_87(l_286) , l_227) & 1UL)), p_83)), 0x6F78ACACL)), l_287, g_26.f0)), l_288, l_287, g_8), l_200)), (-9L)))))), p_84)) ^ p_83) ^ l_289), 6)) ^ 0xBB138D89L)) && 0x1128L);
                l_200 = func_87(p_84);
                if (p_83)
                {
                    return g_113.f1;
                }
                else
                {
                    char l_293 = (-5L);
                    int l_294 = 1L;
                    l_200 ^= ((g_290 , ((safe_mod_func_uint8_t_u_u(l_264, l_293)) == (-1L))) | l_293);
                    l_294 = (-5L);
                    if ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((func_87(p_84) == l_299) | 1L), ((((((safe_add_func_int8_t_s_s(p_83, (((l_302 , (p_83 , (p_84 , ((((0x51L <= l_294) , 0L) || (-1L)) < 0x9A80CE48L)))) >= 0xEC8CL) | g_8))) && l_200) > 0x73L) | 0xFF89D8E5L) || p_84) & l_200))), 0)))
                    {
                        return p_84;
                    }
                    else
                    {
                        g_54 ^= p_84;
                    }
                    g_55 = (g_113.f3 , (p_84 <= 0L));
                }
            }
            for (l_216 = (-18); (l_216 > 16); l_216 = safe_add_func_uint16_t_u_u(l_216, 6))
            {
                char l_330 = 0L;
                int l_333 = 0x7F77E456L;
                unsigned char l_334 = 255UL;
                unsigned l_337 = 0xC44D82B2L;
                l_199 ^= p_83;
                if (l_286)
                {
                    short l_317 = 0L;
                    short l_328 = 0x6EE6L;
                    g_113.f0 = (safe_div_func_uint32_t_u_u(((g_113.f0 , 0x61F00AFDL) , l_286), (g_290.f2 ^ (l_141 , (safe_lshift_func_int16_t_s_u(l_198, (l_200 <= (((p_84 == ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_84, g_290.f2)) && g_290.f2), g_47)) | 0xFFEAL)) , g_26.f0) , 0xAA21F54DL))))))));
                    if (l_199)
                        break;
                    l_330 = (func_89(l_236, g_290.f1, g_26, ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((~l_317), 0xE384L)) & p_84), ((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((l_155 , ((((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(p_84, (p_84 ^ l_328))), p_84)) <= 0x1743L) < g_55) > p_84)), 1UL)), g_55)) & l_329), 65531UL)) , p_84))) , g_290.f0)) | 0x6CL);
                }
                else
                {
                    for (l_250 = 0; (l_250 != (-8)); l_250 = safe_sub_func_uint32_t_u_u(l_250, 6))
                    {
                        return p_84;
                    }
                    l_333 = 0x14168538L;
                    if (l_334)
                        break;
                }
                l_337 &= (l_289 | (safe_rshift_func_uint16_t_u_u(p_84, 2)));
            }
            l_157 = ((p_83 <= g_113.f1) <= ((((safe_lshift_func_int16_t_s_s(p_83, (((safe_sub_func_uint16_t_u_u((((p_83 ^ g_290.f4) | (65535UL <= (g_47 , (l_188 == l_236)))) | 0UL), l_199)) || g_8) | p_83))) , l_344) || l_199) ^ l_150));
        }
        g_54 = (safe_div_func_int16_t_s_s(g_290.f2, g_290.f1));
    }
    g_290.f3 &= p_84;

        return g_67;
}







static char func_87(unsigned p_88)
{
    unsigned l_116 = 4294967295UL;
    int l_121 = 1L;
    union U0 l_136 = {0x5305585CL};
    for (p_88 = 0; (p_88 >= 42); p_88 = safe_add_func_int8_t_s_s(p_88, 7))
    {
        l_121 = (g_113 , (g_26.f0 , (safe_div_func_uint32_t_u_u((l_116 || ((p_88 && (safe_mul_func_uint16_t_u_u(((!l_116) , g_113.f1), 0x2FBBL))) <= ((g_8 , (safe_mul_func_uint8_t_u_u(0x47L, g_67))) && p_88))), g_55))));
    }
    l_136.f0 = (((safe_mod_func_uint8_t_u_u(func_89((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_121, 5)), p_88)) || (safe_add_func_int8_t_s_s(p_88, g_113.f0))) != (safe_mod_func_uint8_t_u_u(l_121, ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_121, (l_116 > (l_136 , (p_88 > p_88))))) | l_136.f0), l_136.f0)) , g_67)))), p_88, l_136, l_116), 0x47L)) != 0xD5L) != g_8);
    return g_52;
}







static unsigned func_89(unsigned short p_90, unsigned short p_91, union U0 p_92, const char p_93)
{
    int l_98 = 0xFAE2361AL;
    g_53 = l_98;
    g_55 = (!((safe_rshift_func_int8_t_s_s(p_91, 1)) ^ l_98));
    for (p_90 = 28; (p_90 < 57); p_90++)
    {
        char l_103 = (-5L);
        if (l_98)
            break;
        g_53 = (l_103 > (safe_mod_func_uint8_t_u_u(p_91, 0xE7L)));
    }
    p_92.f0 = (g_55 | ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s((p_90 , ((!(safe_rshift_func_int16_t_s_s(g_54, 8))) , l_98)), l_98)))) > (g_47 && l_98)));
    return g_52;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_113.f3, "g_113.f3", print_hash_value);
    transparent_crc(g_113.f4, "g_113.f4", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_290.f4, "g_290.f4", print_hash_value);
    transparent_crc(g_357.f0, "g_357.f0", print_hash_value);
    transparent_crc(g_357.f1, "g_357.f1", print_hash_value);
    transparent_crc(g_357.f2, "g_357.f2", print_hash_value);
    transparent_crc(g_357.f3, "g_357.f3", print_hash_value);
    transparent_crc(g_357.f4, "g_357.f4", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f1, "g_466.f1", print_hash_value);
    transparent_crc(g_466.f2, "g_466.f2", print_hash_value);
    transparent_crc(g_466.f3, "g_466.f3", print_hash_value);
    transparent_crc(g_466.f4, "g_466.f4", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_567.f0, "g_567.f0", print_hash_value);
    transparent_crc(g_567.f1, "g_567.f1", print_hash_value);
    transparent_crc(g_567.f2, "g_567.f2", print_hash_value);
    transparent_crc(g_567.f3, "g_567.f3", print_hash_value);
    transparent_crc(g_567.f4, "g_567.f4", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
