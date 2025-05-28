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
   int f1;
   unsigned short f2;
   unsigned f3;
   unsigned f4;
   unsigned char f5;
   int f6;
   unsigned f7;
   unsigned f8;
   unsigned char f9;
};


static int g_5 = 0xB2BC40EDL;
static char g_99 = 0x1FL;
static int g_100 = 1L;
static unsigned short g_103 = 0xFB39L;
static struct S0 g_139 = {0xE86FL,0xF88D2697L,0x64D0L,0UL,0x4B1A4155L,0xC6L,0L,1UL,1UL,5UL};
static unsigned g_144 = 4294967295UL;
static int g_177 = 0x4CBC4FE3L;
static int g_191 = 0x6630CE8CL;
static unsigned char g_192 = 0x29L;
static int g_197 = (-1L);
static unsigned char g_202 = 250UL;
static unsigned short g_225 = 65535UL;
static unsigned g_249 = 0x2F7D754DL;
static short g_263 = (-1L);
static struct S0 g_286 = {65530UL,0x47B2E25AL,1UL,4UL,2UL,9UL,7L,0x36107364L,4294967292UL,255UL};
static unsigned g_299 = 0xAA03B7EAL;
static unsigned g_366 = 0UL;
static char g_373 = 0x0DL;
static unsigned short g_386 = 65530UL;
static struct S0 g_387 = {0x3EF2L,1L,65535UL,8UL,4294967291UL,0UL,0x3ED8FF8EL,0xFD7F2F9AL,0x659D5D04L,0xF3L};
static unsigned char g_388 = 0UL;
static unsigned g_390 = 1UL;
static const char g_404 = 0x7AL;
static short g_411 = 0x2551L;
static short g_419 = 6L;
static unsigned g_422 = 0xB185BCDFL;
static unsigned g_453 = 1UL;
static unsigned g_471 = 0xF9397BDFL;
static unsigned g_474 = 0UL;
static const unsigned char g_502 = 0UL;
static char g_503 = 0L;
static int g_518 = (-6L);
static unsigned g_520 = 0UL;
static unsigned short g_545 = 0x96E8L;
static unsigned g_548 = 0x82D76054L;
static unsigned g_561 = 1UL;
static short g_572 = 0xE3F7L;
static int g_593 = 0x46C8994DL;
static unsigned char g_618 = 7UL;
static int g_627 = 1L;
static int g_634 = (-8L);
static int g_662 = 0xB7D62571L;



static int func_1(void);
static struct S0 func_2(unsigned p_3, short p_4);
static char func_12(unsigned char p_13, unsigned char p_14, int p_15, unsigned char p_16, struct S0 p_17);
static int func_28(unsigned p_29, unsigned char p_30, unsigned short p_31, unsigned short p_32);
static short func_35(int p_36, unsigned p_37, const char p_38, unsigned p_39);
static unsigned func_44(struct S0 p_45);
static struct S0 func_46(unsigned short p_47, unsigned short p_48);
static short func_51(unsigned p_52, unsigned char p_53, int p_54);
static int func_56(int p_57, unsigned p_58, char p_59, unsigned char p_60, unsigned char p_61);
static short func_62(unsigned p_63, unsigned p_64, unsigned short p_65, int p_66);
static int func_1(void)
{
    int l_6 = (-1L);
    struct S0 l_8 = {1UL,0xFD06BDE6L,0xF6CBL,0xB1A7A81AL,0x2E77E815L,0x84L,0x55EBDA18L,4294967291UL,0x7071658AL,0x00L};
    const char l_269 = (-2L);
    short l_380 = 5L;
    unsigned l_433 = 0x96EEB816L;
    unsigned short l_435 = 0UL;
    struct S0 l_442 = {0xDABEL,-3L,0x40FEL,4294967291UL,0x32C3A902L,0x55L,0L,0x6170D60FL,0x644CBA51L,0xD9L};
    unsigned l_521 = 0xBE87E4E3L;
    unsigned char l_546 = 0UL;
    unsigned char l_616 = 0UL;
    char l_632 = 0L;
lbl_648:
    l_8 = func_2(g_5, l_6);
    g_366 |= (safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s((l_8.f6 || func_12((safe_sub_func_int8_t_s_s(((0xB1L & (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((+((func_28((safe_rshift_func_int16_t_s_s((func_35((2UL && (safe_rshift_func_uint16_t_u_s(((g_5 > (l_8.f5 || (safe_add_func_int16_t_s_s(0x7F46L, l_6)))) != func_44(func_46((safe_sub_func_uint32_t_u_u(l_8.f2, (g_5 | g_5))), l_8.f0))), 3))), g_5, l_8.f6, l_8.f1) >= g_100), l_8.f9)), g_99, g_99, g_5) != g_5) & 9UL)) >= g_5), l_269)), l_6)), g_99)) & l_6), l_8.f2))) <= l_8.f7), g_5)), l_8.f0, g_99, l_8.f6, l_8)), g_99))));
    for (g_139.f6 = 15; (g_139.f6 <= 15); g_139.f6 = safe_add_func_uint16_t_u_u(g_139.f6, 8))
    {
        int l_381 = 0L;
        int l_436 = 0xA80B2E25L;
        unsigned short l_468 = 0xB22CL;
        struct S0 l_470 = {65526UL,-5L,0x8BBBL,4294967289UL,4294967295UL,1UL,-10L,0x27817977L,0x184F10F6L,0xCBL};
        const int l_552 = 0L;
        unsigned l_571 = 1UL;
        short l_654 = 4L;
        unsigned char l_660 = 1UL;
        char l_661 = 1L;
        unsigned char l_665 = 1UL;
        for (g_286.f3 = (-30); (g_286.f3 > 48); g_286.f3 = safe_add_func_uint16_t_u_u(g_286.f3, 3))
        {
            const unsigned l_385 = 0UL;
            int l_391 = 0x1E7EB242L;
            unsigned l_412 = 0UL;
            g_373 &= (safe_lshift_func_uint16_t_u_u(g_177, 9));
            for (l_8.f3 = 0; (l_8.f3 < 18); ++l_8.f3)
            {
                unsigned l_384 = 0x8ED7FBBEL;
                unsigned char l_403 = 3UL;
                g_386 = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((!((g_139.f1 && g_286.f4) | func_56(l_380, l_381, g_177, g_197, (((((~l_381) <= (!(l_381 | g_286.f0))) <= l_384) > l_384) < 0xC735L)))) != 0UL), l_385)) == l_8.f3), 1));
                g_387 = g_139;
                if (l_8.f1)
                {
                    int l_389 = (-1L);
                    g_388 = g_139.f2;
                    if (l_389)
                        break;
                }
                else
                {
                    unsigned char l_410 = 0x21L;
                    g_390 &= g_286.f5;
                    l_391 = g_387.f1;
                    if ((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(0x4CL, func_35((((safe_unary_minus_func_int16_t_s((((g_286.f3 & (g_386 > ((safe_rshift_func_uint8_t_u_s(g_286.f0, (safe_mod_func_int8_t_s_s(l_8.f0, (-1L))))) & g_387.f8))) == (safe_lshift_func_uint16_t_u_s(g_286.f8, 4))) & func_56((l_8.f9 & 0x6A86L), g_390, l_384, g_286.f2, g_5)))) != l_403) & l_385), l_381, g_404, l_384))) ^ 0x8077E666L), 0xA2L)))
                    {
                        char l_407 = (-5L);
                        g_411 = (func_62(((l_8.f1 || g_286.f7) && (safe_add_func_int8_t_s_s(func_56(((l_403 | l_381) != l_407), func_62(l_8.f1, l_381, g_286.f8, (safe_add_func_int16_t_s_s(g_387.f6, l_8.f6))), l_410, l_391, l_8.f0), g_139.f3))), g_100, l_407, l_391) & g_139.f7);
                        l_412 = ((9UL <= (0xC57EL ^ 0x8679L)) < (l_380 < l_384));
                    }
                    else
                    {
                        unsigned l_413 = 9UL;
                        if (l_413)
                            break;
                        if (l_410)
                            break;
                    }
                    if (g_192)
                    {
                        int l_418 = (-1L);
                        l_6 = ((safe_sub_func_int8_t_s_s((l_412 != ((safe_lshift_func_uint16_t_u_u(g_197, g_202)) != (l_410 & (!l_418)))), g_419)) & ((safe_mul_func_int32_t_s_s(0x86ED34B7L, (g_390 <= ((l_8.f8 < 0x0BD5B5CEL) < g_263)))) | g_139.f1));
                    }
                    else
                    {
                        if (g_286.f7)
                            break;
                    }
                }
            }
            g_387 = g_387;
        }
        g_422 = g_286.f0;
        g_286 = func_2((0UL ^ l_8.f4), g_139.f5);
        if (g_422)
        {
            const unsigned l_434 = 0x0BC05A12L;
            int l_441 = 0x9FA8222BL;
            unsigned char l_454 = 4UL;
            unsigned short l_519 = 0x48EFL;
            short l_530 = 0xDD9CL;
            unsigned char l_544 = 7UL;
            unsigned l_608 = 0UL;
            short l_625 = 0L;
            char l_633 = 7L;
            l_436 = ((safe_add_func_int32_t_s_s(g_139.f3, (((safe_add_func_int8_t_s_s(((!0x65L) <= g_387.f9), (safe_mod_func_uint16_t_u_u(g_192, (l_8.f1 ^ (((g_387.f8 == (g_5 || ((safe_mod_func_int32_t_s_s((func_35((safe_lshift_func_uint16_t_u_s(func_28(((((((l_8.f1 & l_8.f6) && g_422) > l_433) != g_286.f7) >= g_5) && g_139.f4), g_286.f8, l_433, l_381), 0)), l_8.f3, l_434, g_286.f5) ^ l_381), l_434)) < l_435))) == g_286.f7) <= g_387.f7)))))) ^ g_387.f0) == 9UL))) >= g_286.f9);
            for (g_286.f4 = 7; (g_286.f4 == 12); ++g_286.f4)
            {
                short l_443 = 0x458BL;
                int l_444 = (-1L);
                for (g_139.f3 = 0; (g_139.f3 != 31); g_139.f3 = safe_add_func_uint32_t_u_u(g_139.f3, 5))
                {
                    return g_177;
                }
                l_441 |= l_434;
                l_442 = g_139;
                if (g_390)
                {
                    l_444 &= (((func_28(g_387.f6, l_436, l_441, g_286.f9) | g_139.f8) | func_62(l_269, g_388, g_390, l_443)) == l_443);
                }
                else
                {
                    unsigned char l_451 = 0UL;
                    unsigned char l_452 = 0x6CL;
                    l_454 = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((g_286.f3 && (((func_44(g_387) != (safe_lshift_func_uint8_t_u_u((g_202 ^ l_8.f9), (~func_56(g_388, g_139.f1, g_419, (+(func_44(func_2(l_8.f7, l_451)) & g_191)), g_419))))) && l_434) ^ l_452)), l_451)), g_366)) == g_453);
                }
            }
            if (g_388)
            {
                char l_469 = (-1L);
                for (l_442.f8 = 0; (l_442.f8 == 57); l_442.f8++)
                {
                    unsigned char l_457 = 0x08L;
                    int l_472 = 1L;
                    if (l_457)
                        break;
                    if ((((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((0L == ((safe_rshift_func_uint16_t_u_u((g_387.f6 != (l_381 ^ (g_286.f3 | ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_35(g_387.f7, ((l_457 < 0x11L) || l_468), func_28(((l_8.f8 < 0x7B765CC0L) > l_469), l_468, l_469, l_454), l_457), 0xF5L)), g_422)) >= g_286.f3)))), 2)) == 0UL)), 0x7EL)), 0xFEL)) & l_457) & 1UL))
                    {
                        l_470 = l_470;
                    }
                    else
                    {
                        const short l_473 = 0xC6A8L;
                        g_471 = l_8.f2;
                        l_472 = g_286.f8;
                        g_474 = (l_473 > (g_139.f2 & l_435));
                    }
                }
                if (l_441)
                    continue;
                if (g_366)
                {
                    const int l_491 = 0x33C7EF74L;
                    if (((safe_rshift_func_uint16_t_u_s(((((l_442.f8 | g_387.f5) || ((func_35(l_8.f9, (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((g_286.f6 & ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(7UL, (l_491 <= l_454))) < (0x41F9DA30L == g_387.f3)), l_469)), 1L)), g_373)), l_469)) & g_139.f1)), 5)) != 0x23L), l_469)), l_8.f0, g_202) && 0xFD91L) > 1L)) == (-3L)) && 0xD3E77C2CL), l_381)) | 0L))
                    {
                        short l_501 = (-1L);
                        int l_504 = 9L;
                        g_503 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0x05L, 3)), func_35((g_139.f8 | ((((safe_rshift_func_uint16_t_u_u((((((safe_unary_minus_func_int16_t_s(1L)) & (0x536EL > ((safe_sub_func_int32_t_s_s((l_442.f2 || l_442.f5), func_35(l_434, l_501, g_502, g_103))) <= 1UL))) <= l_501) || (-1L)) >= l_491), l_491)) || g_286.f0) || 1UL) > g_202)), l_491, l_501, l_491))) || 0x3DE0L);
                        l_504 = (g_5 && g_404);
                    }
                    else
                    {
                        unsigned short l_515 = 65531UL;
                        l_436 ^= (safe_mod_func_uint8_t_u_u(l_469, (safe_lshift_func_uint8_t_u_u(l_469, (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_387.f4, 1)) && ((l_515 == l_470.f7) ^ (safe_rshift_func_uint8_t_u_s(((+l_515) < 8L), 6)))), func_44(func_2((~l_515), l_469)))), 0xD0D7L))))));
                        g_518 = l_436;
                        g_520 = (l_519 ^ (g_225 == l_469));
                        return g_286.f2;
                    }
                    if (g_286.f4)
                        continue;
                    return l_491;
                }
                else
                {
                    l_436 = (l_521 < g_139.f3);
                }
                l_436 ^= ((1L && (safe_mod_func_int16_t_s_s(l_380, g_386))) & (l_434 != (safe_rshift_func_uint8_t_u_s(1UL, ((safe_lshift_func_int8_t_s_s((l_441 & l_519), l_470.f0)) != (safe_mod_func_int32_t_s_s(l_530, 0x95EBB0ECL)))))));
            }
            else
            {
                short l_535 = 0x7C5DL;
                unsigned char l_559 = 0xD2L;
                unsigned char l_560 = 0xB2L;
                int l_573 = (-1L);
                if (func_35((safe_mod_func_uint16_t_u_u(func_28(g_139.f0, (((safe_sub_func_uint32_t_u_u((l_535 != 1L), l_470.f0)) <= l_470.f4) ^ (safe_add_func_int32_t_s_s(((func_35((safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((l_470.f6 || ((g_299 > (safe_sub_func_int16_t_s_s((l_441 > ((g_453 | 0x654EL) | l_434)), g_387.f2))) > l_470.f8)) ^ 0xBFDCL), g_139.f7)) != 0x01460715L) && g_197), g_263)), l_442.f7, g_471, l_535) > l_454) | l_544), g_387.f3))), g_545, l_546), 0xFF01L)), l_535, l_442.f9, l_470.f8))
                {
                    g_548 = (safe_unary_minus_func_uint16_t_u(l_442.f8));
                    if (g_502)
                        continue;
                    return g_139.f5;
                }
                else
                {
                    short l_551 = 3L;
                    g_561 = (!(((1UL < (safe_sub_func_int16_t_s_s(l_551, 65527UL))) != l_470.f5) & (l_535 ^ (((l_552 || (safe_add_func_int8_t_s_s((0x5BL == ((!(safe_mod_func_int8_t_s_s((func_28(l_559, l_454, g_139.f2, g_366) == l_551), 0xBFL))) < g_139.f1)), l_470.f3))) ^ 0xF9EC9FB2L) && l_560))));
                }
                g_572 = (((safe_unary_minus_func_int16_t_s((l_8.f4 >= ((l_6 || (l_470.f5 | func_28(l_269, (safe_add_func_uint16_t_u_u(((g_286.f9 && 0UL) <= (safe_lshift_func_uint16_t_u_u(func_56(l_442.f1, ((0xC5D2L | func_62((safe_lshift_func_uint16_t_u_u(g_5, 0)), l_470.f6, g_139.f5, l_544)) < 0xA1D8L), l_535, l_454, l_544), g_366))), 65535UL)), g_139.f9, l_519))) | g_387.f5)))) >= 0xE7L) <= l_571);
                l_573 |= g_387.f2;
                for (l_442.f5 = 2; (l_442.f5 == 56); ++l_442.f5)
                {
                    unsigned short l_576 = 0UL;
                    int l_577 = (-4L);
                    unsigned short l_609 = 65535UL;
                    l_577 = l_576;
                    g_593 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_387.f8, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(0xD736L, 4)), 2)))), ((g_388 < (safe_rshift_func_uint8_t_u_s(1UL, func_62(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((l_576 <= ((g_5 ^ g_453) | (0xB662L > func_28(((safe_unary_minus_func_uint16_t_u(65533UL)) != l_576), g_520, l_577, g_191)))) == g_286.f9), g_139.f1)), l_441)) > g_387.f6), l_530, g_286.f6, l_380)))) & (-1L))));
                    if ((g_263 <= (l_530 < (g_572 == ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((0UL && (safe_lshift_func_uint8_t_u_u(l_530, g_249))) | (l_442.f2 <= (safe_mod_func_uint32_t_u_u(g_5, ((safe_mod_func_int16_t_s_s(l_577, l_530)) && 0xF1D1L))))), l_470.f0)), 0xE55D8172L)) != l_441)))))
                    {
                        int l_617 = (-1L);
                        unsigned l_626 = 0UL;
                        g_618 = (safe_sub_func_int32_t_s_s(l_608, ((l_609 != l_608) ^ (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_56((g_192 >= l_576), (safe_sub_func_uint8_t_u_u(g_373, ((((l_616 >= g_373) == g_548) > g_139.f2) || 251UL))), l_470.f8, l_617, g_387.f3), g_387.f8)), g_422)))));
                        g_627 = (safe_add_func_uint16_t_u_u(65535UL, (safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(g_286.f4, l_577)) > l_625) ^ 0xACC9FF41L), (l_626 <= l_559)))));
                        g_634 ^= (((0UL || ((safe_lshift_func_int8_t_s_u((g_286.f9 | (-1L)), ((g_419 == 7UL) & l_470.f6))) & (safe_lshift_func_int16_t_s_s(l_632, 7)))) >= l_633) && g_191);
                        if (g_593)
                            continue;
                    }
                    else
                    {
                        short l_643 = 1L;
                        l_441 |= (((l_577 | ((safe_mod_func_uint8_t_u_u((0L && (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u((((0x55BDL | l_643) <= (+l_573)) != l_643), g_139.f3)) && ((safe_add_func_int8_t_s_s((g_388 == (l_609 <= l_609)), g_618)) != 0x221FF190L)) ^ l_643), l_571)), g_422))), 0xBCL)) || 0x1B01L)) & 0UL) == g_286.f6);
                        if (g_387.f1)
                            goto lbl_648;
                    }
                    g_387 = func_2((safe_lshift_func_uint8_t_u_s((1UL != 0xB9A2L), 4)), l_544);
                }
            }
            for (g_139.f4 = 0; (g_139.f4 < 38); ++g_139.f4)
            {
                g_634 |= g_286.f9;
                if (g_139.f5)
                    continue;
            }
        }
        else
        {
            unsigned l_653 = 4294967290UL;
            unsigned short l_666 = 0UL;
            int l_668 = 0xC9E6D880L;
            g_662 &= (((l_653 <= (func_35(func_35(g_387.f2, l_654, ((g_386 > ((!(safe_sub_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((((safe_mod_func_int16_t_s_s((l_653 && l_8.f4), g_286.f1)) >= l_653) & ((l_552 <= 4L) | 0x23A5L)))) == g_572), g_249))) != l_552)) ^ g_139.f6), l_660), g_299, g_634, g_286.f6) | g_419)) == l_653) & l_661);
            if (((((g_618 >= ((-7L) != ((!((g_387.f4 | ((((((safe_lshift_func_int8_t_s_s(func_56(l_653, g_662, l_470.f0, func_44(g_139), func_56(l_381, l_442.f8, l_661, g_5, g_387.f1)), l_653)) >= l_442.f1) < l_665) > 0x53L) <= 0xF8D2L) ^ g_373)) & l_442.f1)) <= l_653))) & (-4L)) ^ (-8L)) != l_653))
            {
                int l_667 = 0L;
                g_634 = (l_666 == l_667);
            }
            else
            {
                return g_286.f1;
            }
            g_634 ^= g_286.f7;
            l_668 ^= g_286.f8;
        }
    }
    return l_8.f8;
}







static struct S0 func_2(unsigned p_3, short p_4)
{
    struct S0 l_7 = {0x012DL,1L,9UL,1UL,4294967291UL,0x15L,0L,0x13E13A6CL,4294967287UL,0x9FL};
    return l_7;
}







static char func_12(unsigned char p_13, unsigned char p_14, int p_15, unsigned char p_16, struct S0 p_17)
{
    unsigned short l_274 = 0x9F12L;
    unsigned l_275 = 1UL;
    if ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x0AL, func_44(func_2(g_139.f1, func_62(l_274, l_275, (safe_sub_func_uint32_t_u_u(((func_56(l_275, p_14, (safe_lshift_func_uint16_t_u_u(g_139.f9, 5)), (func_56((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_17.f6, l_275)), p_15)), l_275, l_274, p_14, g_202) <= 0xDDL), g_99) > l_275) && 1L), p_17.f2)), g_249))))), l_275)))
    {
        char l_295 = 0L;
        int l_297 = 0xBAB34661L;
        int l_341 = 0L;
        if ((g_139.f4 & (-2L)))
        {
            struct S0 l_287 = {65535UL,1L,0xDEB6L,0x86E68A10L,4294967288UL,1UL,0x8E2C016AL,4294967286UL,0x293935BCL,0x32L};
            for (g_139.f1 = 0; (g_139.f1 == 23); g_139.f1 = safe_add_func_int8_t_s_s(g_139.f1, 3))
            {
                g_286 = g_139;
            }
            if (l_275)
            {
                struct S0 l_288 = {0xE842L,0x49FA879EL,0x5DBAL,0x204E7C17L,4294967295UL,0UL,1L,0xD2B993DDL,4294967293UL,0xC0L};
                int l_296 = 0x4E1F72A7L;
                l_287 = p_17;
                l_288 = l_287;
                if (((l_287.f0 | (safe_add_func_int16_t_s_s((0xA18FL == func_56(l_288.f8, l_288.f3, (safe_sub_func_int32_t_s_s(l_275, (0x2902L < ((-2L) >= (((safe_sub_func_uint8_t_u_u((g_139.f5 >= func_44(l_287)), g_286.f0)) != g_139.f5) == 1L))))), p_16, l_288.f0)), g_144))) == p_17.f4))
                {
                    p_15 &= (func_44(func_46(l_288.f7, g_286.f2)) ^ 0x22L);
                    return p_17.f1;
                }
                else
                {
                    short l_298 = (-5L);
                    p_17 = p_17;
                    p_17 = g_139;
                    p_17 = g_139;
                    g_299++;
                }
            }
            else
            {
                unsigned short l_304 = 0xB1D7L;
                for (l_274 = 0; (l_274 <= 39); ++l_274)
                {
                    l_304 = g_144;
                    p_15 ^= g_286.f7;
                }
                p_17 = g_139;
            }
            g_139 = g_139;
        }
        else
        {
            const char l_309 = (-1L);
            unsigned l_317 = 4294967295UL;
            int l_318 = 1L;
            l_318 ^= (l_274 || (func_44(func_2((((safe_add_func_int32_t_s_s(p_17.f4, (l_309 | l_297))) <= (((safe_unary_minus_func_int16_t_s(6L)) < (((safe_sub_func_uint8_t_u_u(3UL, func_51((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(l_317, (0xBFA9L & 1L))) > l_295), p_17.f2)), g_202, g_191))) & 0xEAL) || 0x37E19506L)) < 0x2EL)) >= g_249), g_286.f3)) ^ 0x75L));
            for (p_15 = (-17); (p_15 > (-25)); p_15 = safe_sub_func_uint16_t_u_u(p_15, 2))
            {
                return g_139.f4;
            }
        }
        p_15 = (safe_rshift_func_int8_t_s_u(g_225, ((safe_sub_func_uint8_t_u_u(l_275, 247UL)) != (safe_rshift_func_uint8_t_u_u(l_297, p_17.f3)))));
        for (g_100 = (-1); (g_100 >= (-28)); g_100--)
        {
            short l_340 = (-1L);
            if (g_139.f4)
                break;
            if ((safe_add_func_uint8_t_u_u((+p_17.f1), (func_51(p_17.f5, g_139.f4, (func_35(g_139.f7, p_17.f3, l_297, (safe_unary_minus_func_int32_t_s(((((func_44(func_2(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_44(func_2(p_17.f3, (((p_17.f5 || (l_275 && l_340)) < g_286.f0) > 65535UL))), p_17.f7)), l_340)), 0xDEAFFB36L)), 5)) <= 0UL) | 0x6BL) ^ p_16), l_274)) & 1UL) && 1L) && 0xC2A6CD34L) <= g_139.f6)))) | p_17.f1)) == 0UL))))
            {
                unsigned char l_342 = 0xFCL;
                l_341 = p_14;
                ++l_342;
            }
            else
            {
                g_139 = g_286;
            }
        }
    }
    else
    {
        unsigned l_357 = 0x7255FA5EL;
        struct S0 l_362 = {0x460EL,0x1C458910L,0xF76DL,0UL,1UL,0x0EL,0x53FC6CF0L,0x9D6D3E38L,0UL,1UL};
        l_357 &= (safe_add_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_275, 7)) ^ 0x1F24E963L), g_139.f4)) >= 0xE01B5639L) & (p_17.f5 || l_274)), (safe_rshift_func_int16_t_s_s(3L, (safe_lshift_func_int16_t_s_u(((!(func_56(p_17.f9, (safe_add_func_int16_t_s_s((g_191 == l_274), 6L)), p_15, l_274, p_13) >= p_17.f1)) < g_5), 8))))));
        for (g_139.f5 = (-21); (g_139.f5 != 17); g_139.f5 = safe_add_func_int32_t_s_s(g_139.f5, 7))
        {
            for (g_286.f8 = 0; (g_286.f8 < 39); g_286.f8 = safe_add_func_int8_t_s_s(g_286.f8, 6))
            {
                int l_365 = (-1L);
                p_15 = ((0x41L ^ ((7UL ^ (l_274 & p_13)) ^ func_44(l_362))) & (g_5 <= ((((safe_mod_func_int8_t_s_s(l_362.f2, g_139.f1)) | l_365) != g_286.f4) != l_275)));
            }
            if (g_286.f0)
                break;
        }
    }
    return l_274;
}







static int func_28(unsigned p_29, unsigned char p_30, unsigned short p_31, unsigned short p_32)
{
    unsigned l_250 = 1UL;
    int l_251 = 0x26ACF659L;
    const struct S0 l_267 = {65535UL,1L,5UL,4294967295UL,4294967288UL,0x61L,-4L,4294967295UL,0xDB7E7919L,1UL};
    struct S0 l_268 = {65528UL,1L,0xC698L,0x71E22622L,0xEF458370L,0x0CL,0x1DFA8A07L,4294967295UL,5UL,0xFDL};
    l_251 = (l_250 < p_31);
    if (l_250)
        goto lbl_266;
lbl_266:
    for (g_139.f9 = 0; (g_139.f9 <= 59); g_139.f9 = safe_add_func_uint8_t_u_u(g_139.f9, 1))
    {
        char l_255 = 1L;
        struct S0 l_262 = {65535UL,9L,0xAAAEL,0x652BE244L,4294967287UL,252UL,-1L,0UL,4294967286UL,6UL};
        g_263 ^= ((0xE9B15D64L & ((safe_unary_minus_func_uint8_t_u(0UL)) >= ((l_255 > p_31) != (p_29 && ((4294967286UL || (safe_rshift_func_uint8_t_u_s((p_32 ^ (safe_add_func_uint32_t_u_u((p_31 >= (safe_add_func_uint8_t_u_u(func_44(l_262), (-1L)))), (-1L)))), p_30))) == p_29))))) || g_103);
        for (g_202 = 0; (g_202 < 59); ++g_202)
        {
            return g_192;
        }
    }
    l_268 = l_267;
    l_251 = (g_263 > 0xB2B69162L);
    return p_32;
}







static short func_35(int p_36, unsigned p_37, const char p_38, unsigned p_39)
{
    char l_232 = 1L;
    l_232 |= 0xA8788541L;
    g_249 = func_62(l_232, (p_37 & (safe_sub_func_uint32_t_u_u(p_38, (safe_lshift_func_int16_t_s_s((5L <= (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_192 || (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((1UL && (+((safe_add_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u(p_36, l_232))), p_37)) != 8UL))), l_232)), 3))), 1UL)), l_232))), g_202))))), g_139.f1, g_139.f9);
    return g_139.f6;
}







static unsigned func_44(struct S0 p_45)
{
    int l_231 = 0x8C12B718L;
    l_231 = (safe_mod_func_int32_t_s_s(g_139.f3, l_231));
    l_231 = l_231;
    return p_45.f0;
}







static struct S0 func_46(unsigned short p_47, unsigned short p_48)
{
    short l_55 = 2L;
    int l_67 = 0L;
    struct S0 l_205 = {0UL,0x31148879L,1UL,0xCD2035C0L,0x80E9A89EL,1UL,0L,0x51DDD8C5L,0x85194D58L,0x20L};
    char l_223 = 4L;
    l_205 = func_2(g_5, func_51(l_55, (g_5 < (func_56(l_55, (0x2FL != p_47), (func_62((l_67 & 0x46587A76L), ((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((-1L), 0UL)) & (-1L)), g_5)) == (-1L)), g_5, p_48) < g_5), g_5, g_5) & 7L)), g_100));
    for (g_139.f1 = (-12); (g_139.f1 != (-25)); --g_139.f1)
    {
        short l_216 = 1L;
        int l_228 = 1L;
        for (l_205.f2 = (-6); (l_205.f2 != 6); l_205.f2++)
        {
            short l_224 = 0x8804L;
            g_225 = ((g_139.f4 == ((safe_mod_func_int16_t_s_s((func_56((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((!0xDE62L) != p_47), func_56(l_216, p_47, (g_139.f8 == (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(p_48, (safe_lshift_func_int8_t_s_s((func_56(g_99, l_216, l_205.f3, l_216, l_223) != 0x622381DEL), 5)))) || l_205.f9), g_144)) < 0x750724E0L) >= 3UL)), p_47, p_48))), 4294967286UL)), g_139.f0, l_224, p_48, l_216) < l_224), l_224)) < g_5)) < p_48);
            return l_205;
        }
        l_228 ^= (p_48 || ((safe_rshift_func_uint16_t_u_s(((0xAA3DL | (func_62(p_48, (g_192 < 0xB3A4D1CBL), l_216, g_100) > l_216)) ^ 4294967295UL), g_144)) && 0x9F263723L));
    }
    l_67 = g_225;
    return l_205;
}







static short func_51(unsigned p_52, unsigned char p_53, int p_54)
{
    unsigned l_113 = 4294967289UL;
    const unsigned l_122 = 7UL;
    unsigned char l_140 = 0xE7L;
    int l_141 = 0xA62EB872L;
    if ((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u(p_52, (((((g_5 != func_56((safe_lshift_func_uint16_t_u_s((p_52 || l_113), 11)), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0UL, l_113)), (safe_mod_func_int16_t_s_s((g_5 == ((safe_lshift_func_uint16_t_u_s((((l_122 == 0x50BCEF86L) == 0x69947A4BL) == 1L), 14)) < 0UL)), g_5)))), l_122, l_122, g_99)) > l_122) <= l_113) || 0L) & 1UL))) > l_113) <= p_52), g_100)))
    {
        g_139 = func_2((0x7D03L != (safe_add_func_uint8_t_u_u(g_99, g_5))), func_56(p_54, (safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((0xEFL >= p_54), (safe_lshift_func_uint8_t_u_u(func_56(g_99, p_53, (safe_sub_func_uint8_t_u_u(249UL, l_122)), l_113, g_99), g_99)))), 0x01L)) < p_54), 7)) > p_54) > p_52) > g_5) & g_99), p_52)) ^ (-6L)) | p_53) | p_54), 6)), g_100, g_100, g_99));
        if ((l_140 || 0xC6A9L))
        {
            return p_53;
        }
        else
        {
            return g_139.f1;
        }
    }
    else
    {
        struct S0 l_148 = {0x9985L,0xEAA69B51L,65526UL,1UL,9UL,0xE9L,-1L,0UL,0x6EB25118L,0x22L};
        unsigned char l_190 = 0x54L;
        l_141 = g_100;
        for (l_140 = (-24); (l_140 >= 3); l_140 = safe_add_func_uint16_t_u_u(l_140, 1))
        {
            unsigned short l_147 = 0UL;
            char l_157 = 0x44L;
            int l_158 = 1L;
            g_144 = p_53;
            if ((safe_sub_func_int8_t_s_s((p_52 | p_52), l_141)))
            {
                int l_149 = 0xDA225054L;
                l_148 = func_2(l_147, l_147);
                if (l_149)
                    break;
            }
            else
            {
                int l_154 = (-7L);
                l_158 = (+(!(((!(safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(l_154, p_54)) < l_147), 0x50EEE4F3L))) <= p_54) > (8UL >= (safe_mod_func_int32_t_s_s(((l_147 < l_157) & func_62(p_52, g_139.f9, p_52, g_100)), 0x599A2C15L))))));
            }
            g_177 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(8UL, p_53)), func_56(func_62(g_100, func_56((!p_52), l_148.f3, (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(func_56(p_53, l_141, l_141, (safe_lshift_func_int8_t_s_u(0L, 2)), g_139.f3), l_147)) != l_148.f6) >= g_139.f8), l_141)), 0x6C2BL)), 3)), 7)) > l_113), p_53)), g_139.f6, l_158), l_122, g_139.f2), l_157, l_122, l_158, p_53)));
            if ((safe_lshift_func_int8_t_s_u((~((((safe_sub_func_int32_t_s_s(g_139.f5, p_54)) >= (((safe_lshift_func_uint8_t_u_s(l_140, 1)) & g_139.f2) == (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_62(l_148.f9, g_103, (p_53 ^ func_62(p_52, l_148.f8, g_144, g_139.f7)), p_52), g_139.f9)), 15)), g_139.f6)))) | l_148.f1) ^ g_139.f9)), 0)))
            {
                l_190 &= p_52;
            }
            else
            {
                if (p_52)
                    break;
                --g_192;
                for (l_148.f6 = 28; (l_148.f6 > (-7)); l_148.f6 = safe_sub_func_uint8_t_u_u(l_148.f6, 8))
                {
                    g_197 = g_139.f3;
                }
                for (l_148.f9 = 0; (l_148.f9 > 16); l_148.f9 = safe_add_func_int8_t_s_s(l_148.f9, 3))
                {
                    for (g_191 = 0; (g_191 < (-15)); g_191 = safe_sub_func_int8_t_s_s(g_191, 1))
                    {
                        return p_54;
                    }
                    if (g_139.f9)
                        continue;
                    ++g_202;
                }
            }
        }
    }
    return g_139.f6;
}







static int func_56(int p_57, unsigned p_58, char p_59, unsigned char p_60, unsigned char p_61)
{
    unsigned char l_85 = 255UL;
    unsigned l_86 = 0x9E214278L;
    int l_90 = 0x5320B353L;
    int l_98 = 0xF5D6BEAEL;
    int l_102 = (-2L);
    int l_106 = 0xEF314FBCL;
    p_57 = g_5;
    if ((4L <= ((p_59 && (g_5 != (65535UL == ((safe_rshift_func_int8_t_s_s(func_62((safe_lshift_func_uint16_t_u_u(((p_57 && (safe_lshift_func_uint16_t_u_u((!(((func_62(l_85, g_5, (func_62(((func_62(func_62((65531UL > l_85), l_86, p_58, g_5), l_86, l_86, g_5) <= g_5) <= 0xEBD359D2L), g_5, g_5, p_60) == 4UL), g_5) >= g_5) && g_5) <= 2UL)), g_5))) == 0x90A7FA1AL), l_85)), g_5, p_57, g_5), l_86)) ^ g_5)))) || 0xA650L)))
    {
        unsigned l_89 = 0x7E92B0D2L;
        l_90 = func_62(g_5, g_5, func_62((((p_61 | g_5) | g_5) != (safe_rshift_func_uint8_t_u_s(0x20L, g_5))), g_5, l_89, g_5), p_58);
    }
    else
    {
        return g_5;
    }
    for (p_59 = 0; (p_59 < 8); ++p_59)
    {
        int l_93 = 0L;
        int l_94 = 0xA7FFAE90L;
        int l_95 = 0xC835A82DL;
        int l_96 = (-4L);
        int l_97 = 7L;
        int l_101 = 0x34BFCA91L;
        g_103++;
        l_106 = func_62(l_101, p_57, g_99, (g_100 || l_97));
    }
    l_90 &= p_57;
    return l_90;
}







static short func_62(unsigned p_63, unsigned p_64, unsigned short p_65, int p_66)
{
    char l_78 = 0x72L;
    if ((safe_rshift_func_int16_t_s_s(g_5, 9)))
    {
        unsigned l_74 = 4294967295UL;
        int l_75 = 0x3B2FE496L;
        l_75 ^= (p_66 < (l_74 < g_5));
    }
    else
    {
        for (p_64 = (-22); (p_64 != 23); p_64 = safe_add_func_uint32_t_u_u(p_64, 4))
        {
            p_66 |= l_78;
        }
    }
    return g_5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_139.f5, "g_139.f5", print_hash_value);
    transparent_crc(g_139.f6, "g_139.f6", print_hash_value);
    transparent_crc(g_139.f7, "g_139.f7", print_hash_value);
    transparent_crc(g_139.f8, "g_139.f8", print_hash_value);
    transparent_crc(g_139.f9, "g_139.f9", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    transparent_crc(g_286.f1, "g_286.f1", print_hash_value);
    transparent_crc(g_286.f2, "g_286.f2", print_hash_value);
    transparent_crc(g_286.f3, "g_286.f3", print_hash_value);
    transparent_crc(g_286.f4, "g_286.f4", print_hash_value);
    transparent_crc(g_286.f5, "g_286.f5", print_hash_value);
    transparent_crc(g_286.f6, "g_286.f6", print_hash_value);
    transparent_crc(g_286.f7, "g_286.f7", print_hash_value);
    transparent_crc(g_286.f8, "g_286.f8", print_hash_value);
    transparent_crc(g_286.f9, "g_286.f9", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_387.f7, "g_387.f7", print_hash_value);
    transparent_crc(g_387.f8, "g_387.f8", print_hash_value);
    transparent_crc(g_387.f9, "g_387.f9", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
