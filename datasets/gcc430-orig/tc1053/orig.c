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
   int f0;
   unsigned short f1;
   short f2;
   unsigned f3;
   short f4;
   short f5;
};


static short g_3 = 0xEC54L;
static unsigned char g_4 = 0x0DL;
static struct S0 g_11 = {1L,0x8B24L,0xE5ECL,0x5211521FL,0xFBF2L,9L};
static int g_45 = (-10L);
static int g_102 = 0x347E9BEEL;
static int g_104 = 0x6CF3CB91L;
static struct S0 g_112 = {-1L,0x5F6DL,0x9C23L,0x541C8ED9L,-4L,-1L};
static int g_154 = 0x232493ECL;
static struct S0 g_281 = {0xED4CE14DL,5UL,0xC018L,4294967295UL,0x5D17L,0x3920L};
static unsigned short g_349 = 65534UL;
static unsigned char g_363 = 0xFBL;
static unsigned char g_367 = 249UL;
static short g_368 = 0xA3C3L;
static unsigned g_369 = 0x2A89148BL;
static unsigned char g_464 = 255UL;
static unsigned short g_533 = 0x563FL;
static unsigned char g_549 = 6UL;
static unsigned g_596 = 5UL;



static short func_1(void);
static struct S0 func_7(struct S0 p_8, unsigned char p_9, struct S0 p_10);
static struct S0 func_12(unsigned p_13, unsigned char p_14, char p_15, short p_16, struct S0 p_17);
static char func_18(int p_19, unsigned char p_20, unsigned char p_21);
static unsigned char func_22(int p_23, char p_24);
static int func_25(unsigned char p_26, int p_27, unsigned short p_28, unsigned p_29);
static char func_37(int p_38, unsigned p_39, struct S0 p_40);
static char func_46(struct S0 p_47);
static unsigned short func_56(struct S0 p_57, unsigned p_58, struct S0 p_59, char p_60, char p_61);
static struct S0 func_62(struct S0 p_63, short p_64, unsigned p_65);
static short func_1(void)
{
    int l_2 = 0xBF5CD53BL;
    struct S0 l_5 = {0xA5166941L,0xC9A5L,0xB5BFL,0xD3F5047CL,-1L,0x54BCL};
    int l_32 = 8L;
    if (l_2)
    {
        g_3 = 1L;
    }
    else
    {
        struct S0 l_6 = {-4L,0xE305L,-3L,1UL,-9L,1L};
        g_4 = 9L;
        l_6 = l_5;
    }
    l_5 = func_7(g_11, l_5.f0, func_12(g_3, g_11.f4, func_18(g_11.f1, func_22(func_25((safe_mul_func_int8_t_s_s((l_32 | ((safe_rshift_func_int16_t_s_u((((4294967295UL == (safe_sub_func_int8_t_s_s(func_37((safe_mul_func_uint16_t_u_u((+l_5.f1), (((safe_sub_func_uint16_t_u_u(g_11.f2, g_11.f3)) | l_5.f1) <= g_11.f3))), g_11.f4, g_11), g_11.f3))) >= g_11.f1) & l_5.f3), 2)) ^ l_5.f4)), g_4)), g_11.f4, g_4, l_5.f5), g_11.f3), l_5.f1), g_11.f4, l_5));
    return g_281.f1;
}







static struct S0 func_7(struct S0 p_8, unsigned char p_9, struct S0 p_10)
{
    struct S0 l_595 = {0L,65534UL,6L,0xA0B25DE4L,1L,1L};
    int l_597 = 0x874AC288L;
    p_10.f0 = (g_367 >= (safe_mod_func_uint32_t_u_u(func_25((p_9 = (safe_rshift_func_uint8_t_u_u(255UL, 5))), func_37(p_8.f3, (g_596 = func_56((l_595 = l_595), p_10.f3, g_112, (g_349 >= 4L), g_11.f5)), g_281), l_597, l_597), 0xB20F2B84L)));
    return p_10;
}







static struct S0 func_12(unsigned p_13, unsigned char p_14, char p_15, short p_16, struct S0 p_17)
{
    unsigned l_473 = 0x483A6C77L;
    struct S0 l_477 = {-1L,1UL,6L,0x84D41BEAL,0x02E9L,0xE14CL};
    unsigned l_478 = 0x5FD7FB38L;
    struct S0 l_520 = {0x97A231E7L,0UL,0x218CL,1UL,0xE271L,0x434FL};
    int l_578 = 0xAE06F269L;
    unsigned l_587 = 4294967286UL;
    l_473 = ((-4L) | (safe_rshift_func_int8_t_s_s(p_17.f5, 0)));
    for (p_17.f5 = (-19); (p_17.f5 <= 22); p_17.f5 = safe_add_func_int32_t_s_s(p_17.f5, 8))
    {
        struct S0 l_476 = {6L,8UL,1L,0x1CA73F81L,0xDCE7L,0xFBB6L};
        struct S0 l_481 = {0x2F215B1DL,0xAA78L,0xBB0DL,0x58DDB506L,0x24C9L,0x06ADL};
        unsigned l_558 = 8UL;
        struct S0 l_565 = {1L,65526UL,6L,6UL,1L,0x41D4L};
        p_17.f0 = l_473;
        l_477 = l_476;
        if ((!p_17.f3))
        {
            p_17.f0 = l_478;
            g_112.f0 = (safe_lshift_func_int8_t_s_s(g_281.f3, 2));
            l_481 = p_17;
        }
        else
        {
            unsigned l_495 = 0x082633B8L;
            int l_516 = 1L;
            struct S0 l_551 = {-2L,0x4BC3L,0xCB39L,0x80B29A98L,0xE11CL,-1L};
            g_112.f0 = l_477.f0;
            if (g_3)
            {
                char l_496 = 0xB4L;
                struct S0 l_530 = {-8L,0xF09AL,8L,8UL,-1L,9L};
                short l_550 = (-1L);
                for (l_477.f4 = 0; (l_477.f4 < 26); l_477.f4++)
                {
                    struct S0 l_494 = {-3L,0x825AL,0x4808L,4UL,0x959DL,-10L};
                    struct S0 l_529 = {0xEF2C9137L,4UL,0xB46DL,0x394F76C4L,5L,0xD44EL};
                    int l_531 = (-5L);
                    short l_532 = (-3L);
                    l_494 = func_62(p_17, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_481.f5, g_281.f1)), func_46(func_62(l_476, (safe_lshift_func_uint8_t_u_s((0x72L < (!(((~((safe_lshift_func_int8_t_s_u(p_15, (func_56(p_17, ((safe_mod_func_int16_t_s_s(p_16, (g_349 = (g_112.f1 = func_46(p_17))))) && p_13), l_494, l_473, l_495) ^ p_13))) != 1UL)) > g_367) <= l_476.f5))), 5)), l_481.f2)))), l_496);
                    for (g_112.f3 = 14; (g_112.f3 < 13); --g_112.f3)
                    {
                        g_45 = l_494.f5;
                        return p_17;
                    }
                    if (g_11.f0)
                    {
                        unsigned char l_501 = 2UL;
                        p_17.f0 = g_281.f1;
                        l_501 = (safe_sub_func_uint32_t_u_u(func_25(((p_14 = 0UL) > (p_17.f5 == (p_17.f1 = g_154))), func_46(l_494), g_3, l_481.f2), (0xBEL != l_495)));
                        p_17.f0 = (-2L);
                        l_516 = ((safe_lshift_func_int8_t_s_u(g_281.f2, ((p_17.f0 < 0x1288L) | l_496))) > (safe_mod_func_int16_t_s_s((((g_367 = ((safe_lshift_func_uint8_t_u_u(l_494.f4, 2)) ^ (safe_mul_func_int16_t_s_s((l_496 ^ l_496), (-7L))))) > (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((l_476.f3 ^ g_11.f4) && p_17.f0) == p_15), l_476.f3)), l_477.f4)), l_476.f3))) & 1L), p_17.f4)));
                    }
                    else
                    {
                        unsigned char l_517 = 255UL;
                        if (l_517)
                            break;
                        p_17.f0 = g_464;
                        p_17.f0 = (safe_sub_func_int32_t_s_s(func_22(func_37(l_476.f0, p_17.f4, l_520), (p_17.f2 ^ 0UL)), p_17.f2));
                        g_281.f0 = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_14, (g_533 = (safe_add_func_int8_t_s_s((l_516 = (((g_281.f4 >= (safe_add_func_uint32_t_u_u(p_16, func_56(l_529, g_11.f4, (g_112 = func_62(func_62(l_530, g_11.f2, l_529.f1), l_530.f3, l_531)), p_14, l_532)))) >= 1L) <= l_476.f4)), p_17.f2))))), p_15)) | 0xF692L);
                    }
                }
                for (p_17.f4 = 0; (p_17.f4 <= 5); p_17.f4 = safe_add_func_int16_t_s_s(p_17.f4, 1))
                {
                    unsigned l_544 = 5UL;
                    int l_552 = 0x676F917EL;
                    l_516 = (p_17.f0 = ((g_4 = l_530.f0) || ((l_520.f0 = g_11.f1) & func_18(l_476.f5, (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((g_281.f3 & ((l_544 = (p_15 = ((safe_lshift_func_uint16_t_u_s(g_112.f1, 12)) > (p_16 >= 0xBA222C07L)))) < (safe_add_func_int8_t_s_s((l_530.f0 = ((p_17.f2 = (3UL | ((!((safe_sub_func_uint32_t_u_u(((func_25(p_17.f5, g_11.f3, l_530.f4, p_17.f3) >= 3L) != 0x5272L), g_549)) >= p_14)) | 0x01L))) == 0x43ADL)), 0x37L)))), p_13)) == l_550), 6)), p_17.f5)), l_476.f1))));
                    l_551 = p_17;
                    if (g_281.f4)
                        break;
                    l_552 = p_17.f4;
                }
            }
            else
            {
                struct S0 l_557 = {4L,0UL,0x11EBL,0x7EDFBB63L,0x7F35L,1L};
                l_477.f0 = (l_520.f0 = ((l_476.f4 < (safe_mul_func_int16_t_s_s(func_56(l_477, ((func_18(g_112.f4, g_11.f3, p_13) != (safe_lshift_func_int16_t_s_u((l_557.f0 = func_46(func_62(l_557, p_17.f2, (l_481.f1 <= p_17.f0)))), 6))) != l_557.f2), l_551, p_17.f1, l_558), l_551.f2))) | p_17.f3));
                g_45 = g_45;
                l_481.f0 = ((safe_rshift_func_uint16_t_u_s((l_516 == ((safe_mod_func_uint8_t_u_u((func_56(g_11, p_16, p_17, l_551.f4, ((g_11.f1 >= (0L != func_18(p_17.f4, (p_17.f3 >= 0x83BF9971L), p_14))) || 0x0DF14950L)) ^ 0x52L), l_476.f5)) >= p_13)), 1)) != p_17.f1);
                for (l_551.f0 = (-1); (l_551.f0 == (-2)); l_551.f0 = safe_sub_func_int8_t_s_s(l_551.f0, 4))
                {
                    return l_565;
                }
            }
            l_551 = g_281;
            g_281.f0 = func_25(l_476.f3, (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_516 = (l_551.f2 > func_25(g_349, p_17.f3, p_17.f0, (p_13 <= (p_16 & (l_481.f0 != 1L)))))), g_367)), 6)), l_565.f0, p_15);
        }
    }
    for (g_112.f5 = 0; (g_112.f5 > 12); g_112.f5 = safe_add_func_int32_t_s_s(g_112.f5, 1))
    {
        unsigned short l_575 = 0xD294L;
        int l_588 = 0x65A4B45CL;
        int l_589 = 0x6AFBD44EL;
        unsigned short l_590 = 65535UL;
        for (l_520.f0 = 0; (l_520.f0 >= 3); l_520.f0 = safe_add_func_int8_t_s_s(l_520.f0, 4))
        {
            unsigned char l_574 = 0x40L;
            l_574 = (l_477.f0 = 0x01ED710FL);
            l_477.f0 = g_112.f0;
        }
        p_17.f0 = ((func_25(p_14, g_281.f1, (l_575 || ((safe_add_func_uint16_t_u_u((g_533 = l_575), func_25(((l_520.f0 != l_575) <= g_368), (l_477.f0 = l_477.f1), p_16, g_369))) > 0x4DF1L)), p_17.f4) ^ 8UL) < g_281.f5);
        p_17 = func_62(g_281, func_25(func_25(l_578, g_45, ((safe_add_func_int8_t_s_s((p_15 = l_520.f5), (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_589 = ((l_588 = ((l_477.f0 = (g_368 = (p_17.f3 <= (((p_17.f5 || 0L) ^ (l_587 = 0x5CL)) <= g_363)))) && 5UL)) || l_588)), 0x3E0DB57EL)) < 4294967291UL), 253UL)), p_17.f1)))) <= l_590), g_363), g_281.f4, p_17.f2, p_13), g_549);
    }
    return l_477;
}







static char func_18(int p_19, unsigned char p_20, unsigned char p_21)
{
    struct S0 l_413 = {0L,0UL,-7L,0x8C6DA940L,-1L,0xC49BL};
    int l_419 = 0x5F4A48C4L;
    int l_428 = (-8L);
    unsigned l_429 = 0xA0D54F5DL;
    unsigned short l_470 = 65526UL;
    g_281.f0 = 1L;
    g_281 = func_62(l_413, p_21, g_11.f1);
    if ((safe_add_func_int32_t_s_s(((g_112.f1 = p_20) >= 0x3806L), func_46(l_413))))
    {
        unsigned short l_416 = 0x679DL;
        unsigned char l_417 = 0xF5L;
        struct S0 l_418 = {0x96FDA9DAL,5UL,-1L,0xA44675D0L,0xDC03L,0xA220L};
        int l_430 = 0L;
        l_418 = func_62(g_11, (l_417 = l_416), g_11.f0);
        l_418.f0 = l_417;
        l_419 = 0x93E1E056L;
        l_430 = (0x41L <= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((((0x8D73L | g_11.f4) >= func_22((safe_mod_func_int32_t_s_s((l_419 = p_19), func_37(p_21, g_4, func_62((l_418 = func_62(l_413, ((safe_add_func_uint32_t_u_u(g_112.f0, (l_429 = ((l_428 = l_413.f2) <= l_418.f1)))) > l_413.f2), g_102)), l_416, g_102)))), l_413.f5)) | g_11.f2) > 1UL), 5)) && 254UL), p_20)));
    }
    else
    {
        struct S0 l_449 = {-7L,0x373BL,-1L,0x068785BBL,0x32A8L,0x23D8L};
        char l_456 = 0x00L;
        g_45 = (safe_add_func_int32_t_s_s(p_20, g_112.f1));
        l_419 = ((l_413.f0 > (safe_sub_func_int8_t_s_s(l_413.f5, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_369, 3)), 5))))) ^ l_428);
        if (p_21)
        {
            struct S0 l_457 = {0xC1923EEEL,0x1FDAL,9L,0UL,0x517AL,-1L};
            if ((safe_add_func_int16_t_s_s((-8L), (g_281.f2 == ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_21 = (0x60B2L < ((p_19 | (func_46(l_449) != (1UL & (safe_lshift_func_int16_t_s_u((-1L), ((safe_rshift_func_int8_t_s_s((~((safe_lshift_func_int8_t_s_u((l_456 = 0x0FL), l_413.f1)) <= p_20)), l_429)) & p_20)))))) < 0x615E9B7FL))), g_11.f4)) != g_363), g_11.f0)), p_19)) >= p_20)))))
            {
                l_457 = l_457;
            }
            else
            {
                l_457.f0 = (1L <= func_25(g_367, p_21, (g_11.f3 != (l_419 && l_457.f0)), (safe_mod_func_uint32_t_u_u((l_449.f0 = p_21), (safe_mul_func_int16_t_s_s((0x44L > (g_104 >= 0xBD980E95L)), g_11.f1))))));
            }
            l_449 = g_281;
        }
        else
        {
            struct S0 l_469 = {0L,0x6E0AL,1L,4294967295UL,-6L,0x6148L};
            g_112 = func_62(g_112, g_464, (g_369 = (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u((g_4 = g_11.f2), 2)) < l_449.f4) > (0xD4L == 1L)), 6))));
            l_469 = l_413;
        }
    }
    g_112.f0 = p_20;
    return l_470;
}







static unsigned char func_22(int p_23, char p_24)
{
    struct S0 l_275 = {0L,65535UL,-1L,0UL,0xB092L,0L};
    unsigned l_280 = 0x0DA48ED9L;
    short l_311 = (-1L);
    struct S0 l_337 = {0x306CF536L,0xA488L,0xBE56L,0x4DAE90DBL,9L,0L};
    unsigned l_353 = 4294967295UL;
    int l_366 = (-10L);
    int l_412 = 0L;
    g_281 = func_62(func_62(l_275, func_25((safe_rshift_func_uint16_t_u_u(l_275.f5, 1)), (safe_add_func_int8_t_s_s(p_24, func_56(l_275, l_275.f4, (g_112 = func_62(g_112, g_3, p_24)), l_280, p_24))), g_3, l_275.f1), l_280), g_11.f5, g_11.f5);
    for (g_112.f2 = (-17); (g_112.f2 == 20); ++g_112.f2)
    {
        int l_290 = (-5L);
        struct S0 l_295 = {3L,0x2DC0L,0xE049L,0x19BCA837L,-1L,1L};
        int l_302 = 1L;
        int l_305 = (-1L);
        int l_306 = 0xA58D9422L;
        l_275.f0 = (safe_mul_func_int16_t_s_s(g_11.f2, g_112.f2));
        p_23 = ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((g_45 != (g_154 | l_290)) == g_112.f1), 0)), 0)) <= (((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(func_46(l_295), (safe_add_func_uint8_t_u_u(((l_306 = (safe_lshift_func_uint8_t_u_s((((!((safe_sub_func_uint32_t_u_u(p_23, (l_305 = ((l_302 = g_281.f5) == ((((((((safe_sub_func_uint32_t_u_u(g_11.f1, l_275.f3)) == g_11.f4) == 0x1EL) != g_11.f5) > g_11.f4) && p_24) && l_295.f3) && g_11.f1))))) >= l_295.f1)) == p_23) & l_275.f5), p_23))) <= g_11.f3), l_275.f2)))), l_290)) >= 0xBC13L) > g_104));
    }
    for (g_102 = 29; (g_102 < 2); g_102--)
    {
        int l_327 = 0x03116A7EL;
        struct S0 l_336 = {-1L,65528UL,0x593CL,5UL,-1L,9L};
        l_275 = l_275;
        if (func_46(func_62(func_62(g_281, g_112.f3, (safe_rshift_func_int8_t_s_u(0xABL, 4))), (l_311 != func_46(l_275)), (p_24 && (p_24 | l_275.f4)))))
        {
            int l_312 = 0x4D94E078L;
            struct S0 l_326 = {0xE78EC6E6L,0x1836L,0x4CEEL,0x43BED2E4L,0x0732L,0L};
            struct S0 l_352 = {0x16522CDCL,65532UL,7L,0x430CE597L,1L,1L};
            if (((~p_23) && ((+p_23) | l_275.f3)))
            {
                struct S0 l_313 = {1L,0x2C6CL,6L,0xB7B8B21FL,8L,0x003CL};
                int l_314 = 1L;
                l_275 = l_275;
                p_23 = ((g_281.f3 | (l_312 > (func_46(l_313) ^ (+(func_25(l_314, (safe_lshift_func_uint8_t_u_s(253UL, p_24)), (p_23 ^ (safe_mod_func_int8_t_s_s((-1L), l_313.f3))), g_112.f0) < 0xEFL))))) >= p_23);
                for (l_313.f1 = 27; (l_313.f1 > 16); l_313.f1 = safe_sub_func_int32_t_s_s(l_313.f1, 3))
                {
                    return l_314;
                }
            }
            else
            {
                struct S0 l_325 = {1L,0x1263L,0xB617L,4294967295UL,0x3499L,0xA9D4L};
                if (g_112.f5)
                    break;
                for (l_275.f3 = 0; (l_275.f3 < 47); ++l_275.f3)
                {
                    struct S0 l_338 = {0x0FD19086L,65535UL,1L,1UL,0x7B66L,0L};
                    for (g_112.f1 = 16; (g_112.f1 <= 28); g_112.f1 = safe_add_func_int16_t_s_s(g_112.f1, 5))
                    {
                        l_325 = l_275;
                        l_337 = func_62(l_326, l_327, (0x4FL || (l_275.f2 ^ (g_11.f0 == (l_275.f0 = ((g_281.f4 = (g_112.f4 = ((g_281.f5 = (safe_lshift_func_int8_t_s_u((p_24 != (safe_rshift_func_int8_t_s_s(l_275.f1, 5))), 5))) ^ ((safe_rshift_func_int8_t_s_s(func_46(l_336), p_24)) == g_11.f1)))) != 65535UL))))));
                        p_23 = g_104;
                        g_281 = g_281;
                    }
                    g_112.f0 = ((func_46(l_338) > (safe_mod_func_uint32_t_u_u((((g_281.f2 = ((l_336.f2 || ((safe_sub_func_uint8_t_u_u(func_25(((0x4CBEL | (((safe_sub_func_int8_t_s_s((g_11.f2 <= (safe_lshift_func_uint16_t_u_u(g_112.f4, 3))), (~(g_349 = (safe_sub_func_uint8_t_u_u(l_325.f0, (l_326.f0 = g_11.f1))))))) & (safe_mul_func_int8_t_s_s(func_46(l_352), l_325.f5))) || 248UL)) | 0xF8L), l_353, p_24, g_112.f3), l_352.f2)) > g_281.f5)) && l_275.f1)) || l_337.f5) <= g_112.f0), g_112.f2))) != 0xC75AL);
                    l_325 = l_338;
                    g_281.f0 = (safe_rshift_func_int16_t_s_u((l_338.f0 = 0xBFEFL), 5));
                }
            }
            for (g_112.f4 = (-23); (g_112.f4 == (-13)); g_112.f4 = safe_add_func_int16_t_s_s(g_112.f4, 3))
            {
                struct S0 l_376 = {0x0BCAD3E5L,0xF909L,0L,4294967291UL,0x3BCFL,1L};
                if (((((g_369 = ((func_25((safe_sub_func_int8_t_s_s(0x28L, (((0xE2L > (0x0CA6L && (safe_unary_minus_func_int32_t_s(((-1L) >= (safe_add_func_uint32_t_u_u((((g_363 = 1L) || g_112.f2) & ((safe_rshift_func_int16_t_s_s((g_281.f2 > (g_368 = (g_367 = (l_366 > (g_11.f1 ^ p_24))))), 3)) < 0x38A15CA5L)), l_312))))))) >= p_24) <= l_326.f5))), p_24, l_337.f1, p_24) | g_281.f5) && g_11.f0)) && l_326.f2) == 0L) || p_24))
                {
                    p_23 = 5L;
                }
                else
                {
                    char l_382 = 0x67L;
                    int l_387 = 0L;
                    if (((safe_sub_func_uint16_t_u_u(65528UL, (safe_lshift_func_int16_t_s_u((l_352.f0 = (g_11.f5 || func_25(g_112.f0, (func_46(func_62(g_112, (l_337.f0 = 0xBD0EL), (254UL & (((g_281.f0 = g_112.f1) ^ (safe_mul_func_int16_t_s_s(p_24, g_112.f0))) | l_337.f5)))) >= l_275.f1), g_281.f4, l_326.f2))), 8)))) && g_11.f2))
                    {
                        int l_381 = 0x04761E1FL;
                        l_376 = (l_352 = l_336);
                        l_381 = (safe_rshift_func_int8_t_s_s((l_336.f1 <= ((safe_mod_func_int8_t_s_s(g_104, g_281.f4)) && g_11.f1)), 3));
                    }
                    else
                    {
                        unsigned char l_388 = 0x91L;
                        g_112.f0 = l_382;
                        p_23 = (safe_sub_func_uint32_t_u_u((l_388 = (l_387 = (safe_mul_func_int8_t_s_s((func_25(g_368, g_281.f0, p_23, l_376.f1) || (!func_25(l_336.f0, l_376.f0, g_112.f1, g_281.f0))), 0xBFL)))), g_281.f3));
                    }
                    g_45 = (p_23 = (((func_46(l_376) >= l_353) ^ func_46(func_62(l_376, ((g_112.f0 = (g_11.f2 >= p_24)) < p_24), g_154))) & g_154));
                    p_23 = (g_45 = 0xA77EE0B9L);
                    if (g_11.f3)
                        continue;
                }
            }
            if (g_4)
                continue;
        }
        else
        {
            unsigned l_409 = 4294967291UL;
            int l_411 = 4L;
            for (l_336.f4 = (-6); (l_336.f4 < (-29)); l_336.f4--)
            {
                int l_410 = 1L;
                l_412 = (func_25(((safe_rshift_func_uint8_t_u_u((+((safe_rshift_func_uint8_t_u_s(g_369, 3)) != p_24)), 6)) >= ((l_327 > ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x63L, func_25((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_45, ((safe_sub_func_int32_t_s_s(((0x1C434035L == (g_281.f0 = (safe_rshift_func_int16_t_s_s(g_349, 8)))) <= func_46(func_62(l_275, func_46(l_337), l_275.f4))), 0x04AFA56BL)) ^ p_24))), 5L)), l_409, l_410, l_409))), 4)) != g_4), 0)) & l_411)) == (-7L))), g_154, p_24, l_337.f0) && l_412);
            }
        }
    }
    return g_112.f2;
}







static int func_25(unsigned char p_26, int p_27, unsigned short p_28, unsigned p_29)
{
    short l_274 = 0xF62FL;
    g_45 = p_28;
    return l_274;
}







static char func_37(int p_38, unsigned p_39, struct S0 p_40)
{
    struct S0 l_48 = {0L,65535UL,-2L,9UL,0L,-9L};
    struct S0 l_55 = {0x267A5E2BL,65531UL,0xA74AL,4294967288UL,-5L,-1L};
    unsigned char l_209 = 252UL;
    unsigned l_255 = 1UL;
    char l_262 = 1L;
    g_45 = g_11.f2;
    p_40.f0 = (0L ^ (func_46(l_48) > (l_48.f4 < ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_46(l_55), 65526UL)), (l_48.f0 == ((func_56(func_62(l_48, p_40.f0, g_11.f3), g_4, l_48, p_39, p_38) | 0x6836L) | 0x6E75L)))) <= g_4))));
    if (p_39)
    {
        struct S0 l_226 = {-1L,0x18BFL,0x6C19L,1UL,0xFDF0L,7L};
        struct S0 l_229 = {0x1F43CF0BL,65535UL,-4L,0x9EE68FA1L,0x6DEBL,0x74A8L};
        l_55.f0 = ((safe_rshift_func_uint8_t_u_s(((0x26L | (safe_mul_func_int8_t_s_s(func_46(l_48), 3L))) > g_11.f0), 4)) <= l_209);
        for (l_55.f1 = (-27); (l_55.f1 > 10); ++l_55.f1)
        {
            short l_212 = (-9L);
            int l_213 = 0x028CBF02L;
            struct S0 l_216 = {0L,1UL,1L,0xA5A5C426L,0x1C35L,1L};
            p_40.f0 = (g_112.f0 = (g_112.f1 && func_46(p_40)));
            l_213 = l_212;
            for (g_112.f3 = 29; (g_112.f3 != 48); g_112.f3 = safe_add_func_int16_t_s_s(g_112.f3, 1))
            {
                unsigned short l_219 = 1UL;
                p_38 = func_46(func_62(l_216, g_11.f2, g_112.f3));
                l_213 = (safe_add_func_int8_t_s_s(0x61L, (((l_219 != (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0x1AL, 6)) != g_45), 7UL)), p_40.f4))) & g_112.f3) ^ p_40.f4)));
                if (l_219)
                    break;
                l_55.f0 = p_40.f2;
            }
        }
        p_40.f0 = p_39;
        l_229 = func_62(l_226, l_209, (safe_rshift_func_uint16_t_u_s(p_38, 10)));
    }
    else
    {
        unsigned char l_251 = 0xC4L;
        int l_254 = 0L;
        int l_256 = 8L;
        struct S0 l_263 = {-1L,0xA5AFL,5L,0x051BE4F2L,0x2081L,0xC10DL};
        for (g_154 = 7; (g_154 >= 28); g_154++)
        {
            short l_232 = (-5L);
            if ((l_232 ^ (safe_rshift_func_uint16_t_u_u(0UL, (p_40.f5 ^ (g_45 = ((safe_lshift_func_uint8_t_u_u((g_104 & (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((~((safe_lshift_func_int8_t_s_s(p_40.f2, (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_102, p_40.f0)), (l_255 = ((l_251 ^ (safe_lshift_func_int8_t_s_u(((l_254 = (l_55.f5 & g_11.f3)) ^ p_39), l_251))) < p_40.f4)))), l_209)))) & p_40.f2)) == l_256), 0x0531L)), p_40.f2)), p_40.f4))), g_11.f0)) || l_232)))))))
            {
                char l_261 = 0xEEL;
                g_112.f0 = (safe_mod_func_int32_t_s_s((l_232 == (l_262 = (p_40.f0 = ((safe_add_func_uint16_t_u_u(l_261, 5L)) > 1L)))), (g_45 = p_40.f3)));
            }
            else
            {
                p_38 = 0L;
                if (g_3)
                    continue;
            }
            return l_232;
        }
        p_38 = func_56(func_62(func_62(l_263, g_45, (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_263.f0, (((l_55.f0 = func_46(func_62(func_62(g_112, g_11.f3, ((p_40.f0 || func_46(l_48)) & (l_254 = (p_40.f2 = ((((~l_55.f3) < 1L) > p_38) || 0x9AL))))), g_112.f3, g_104))) ^ p_39) & p_40.f3))), p_40.f5))), p_40.f1, g_3), l_263.f3, l_263, g_154, l_55.f1);
        g_45 = (safe_mul_func_uint16_t_u_u(0x3A07L, ((l_55.f0 >= g_4) || (g_112.f0 = (p_39 && ((p_40.f2 && (func_46(func_62(func_62(func_62(func_62((p_40 = g_112), (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_38, func_46(g_11))), p_38)), g_112.f1), g_11.f2, g_45), p_39, l_263.f1), l_48.f5, p_38)) >= 0xB27DL)) <= 0xCA18A4ECL))))));
    }
    return l_262;
}







static char func_46(struct S0 p_47)
{
    return g_3;
}







static unsigned short func_56(struct S0 p_57, unsigned p_58, struct S0 p_59, char p_60, char p_61)
{
    unsigned short l_71 = 0xC372L;
    struct S0 l_129 = {0L,1UL,0x5167L,0x4CF679B5L,0x7F45L,-3L};
    unsigned short l_204 = 0UL;
    if (((((255UL == (safe_mul_func_int8_t_s_s(((+g_4) && (safe_rshift_func_uint8_t_u_s(l_71, l_71))), ((p_61 = g_11.f4) < ((((g_11.f4 <= (safe_mod_func_int16_t_s_s((p_59.f3 && p_59.f1), (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((g_45 & 0x33472970L) | 1UL) >= g_45) || 4294967286UL), g_45)), l_71))))) <= 4294967293UL) || g_11.f5) < g_4))))) & p_57.f0) || g_11.f0) ^ l_71))
    {
        char l_82 = 0x17L;
        struct S0 l_93 = {0x5D9C67F7L,0x6E09L,-9L,0UL,0xAA48L,0xC3AAL};
        unsigned l_126 = 4294967291UL;
        struct S0 l_130 = {-1L,0UL,0x58A7L,0x6563165AL,-8L,1L};
        p_57.f0 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_82, (safe_mod_func_uint8_t_u_u((l_82 <= ((p_58 = g_45) <= l_82)), 0x31L)))), (((safe_rshift_func_int8_t_s_u((g_11.f4 <= (safe_sub_func_int32_t_s_s((255UL == l_82), (safe_mod_func_uint16_t_u_u((l_71 && g_11.f5), g_11.f4))))), 2)) > p_57.f2) ^ l_82)));
        for (p_61 = (-20); (p_61 >= 8); ++p_61)
        {
            return g_3;
        }
        l_93 = p_59;
        if ((safe_sub_func_uint8_t_u_u((g_4 <= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(func_46(g_11), l_71)), 0))), (1UL || (safe_mod_func_int16_t_s_s((-7L), 0xB538L))))))
        {
            unsigned l_103 = 0x25832669L;
            struct S0 l_114 = {0x76B33B0CL,65535UL,-1L,0x2825B7CCL,0x0ECFL,8L};
            int l_128 = 4L;
            g_45 = (l_71 && (g_102 = 4UL));
            if (l_103)
            {
                int l_108 = 0xD24B411FL;
                int l_123 = 0xA12B70BDL;
                if (g_4)
                {
                    struct S0 l_111 = {-1L,0x1E15L,5L,0UL,0L,0xE2A8L};
                    unsigned l_127 = 4UL;
                    if (g_4)
                    {
                        unsigned short l_113 = 1UL;
                        g_104 = 0L;
                        g_45 = ((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(g_45)), (l_111.f0 = ((l_108 | (safe_mul_func_int16_t_s_s(p_57.f0, func_46(func_62(l_111, ((func_46(func_62(func_62((p_59 = (g_112 = g_11)), g_11.f2, (p_57.f3 = p_57.f5)), p_57.f4, l_93.f1)) < l_113) >= g_11.f2), p_57.f2))))) || 0x5E9BL)))) || p_59.f0) | 0x9067L) == g_45);
                        l_111.f0 = p_57.f5;
                    }
                    else
                    {
                        return g_11.f0;
                    }
                    g_112 = func_62(l_114, p_59.f3, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((((((safe_mod_func_int8_t_s_s((1UL & (!(((p_57.f2 ^ ((l_123 = g_104) <= (-1L))) ^ (g_112.f4 > l_108)) != (safe_lshift_func_int8_t_s_u((g_11.f0 && 1L), 1))))), l_126)) & 0x10L) == p_57.f5) && p_59.f4) <= 0xB7L) & l_127) <= p_59.f3), 6)), g_4)), p_57.f2)));
                    l_128 = func_46(p_57);
                }
                else
                {
                    return l_93.f4;
                }
                l_129 = func_62((g_112 = g_112), p_59.f4, p_57.f3);
                g_112.f0 = ((p_59.f4 & ((p_57.f1 = 0x05A6L) <= (g_104 & (g_112.f5 == func_46((l_130 = l_114)))))) <= p_57.f2);
            }
            else
            {
                if ((p_59.f3 > ((p_58 || (((1L > (((func_46(g_112) > (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((p_57.f2 == g_4), ((safe_add_func_int32_t_s_s(p_59.f3, ((func_46(l_129) && 0x34L) < p_58))) || p_58))), 6))) <= g_112.f0) | 0x70L)) || g_11.f2) || l_128)) < 0x61L)))
                {
                    for (l_114.f0 = 0; (l_114.f0 > 10); l_114.f0++)
                    {
                        g_112.f0 = (~(g_112.f0 ^ p_59.f4));
                    }
                    p_57.f0 = (safe_rshift_func_uint8_t_u_s(0x5BL, 1));
                }
                else
                {
                    p_57 = g_112;
                    g_112.f0 = 8L;
                }
                for (p_61 = 13; (p_61 > (-13)); p_61 = safe_sub_func_int8_t_s_s(p_61, 2))
                {
                    unsigned l_143 = 4294967294UL;
                    if (((l_143 = (g_104 || l_129.f3)) < g_112.f1))
                    {
                        return l_130.f5;
                    }
                    else
                    {
                        return g_112.f1;
                    }
                }
            }
            g_45 = (g_112.f0 = 0x4DF38324L);
        }
        else
        {
            unsigned l_153 = 1UL;
            int l_160 = 0x58E6F13FL;
            struct S0 l_185 = {2L,1UL,0x1A59L,0x5BB4AD5AL,0x208AL,0x5832L};
            for (p_57.f2 = 0; (p_57.f2 >= (-7)); p_57.f2 = safe_sub_func_uint16_t_u_u(p_57.f2, 1))
            {
                unsigned l_152 = 4294967295UL;
                p_59 = l_129;
                if ((p_59.f0 = p_58))
                {
                    unsigned l_159 = 0xA61EF3BDL;
                    p_59 = l_93;
                    l_93.f0 = g_3;
                    if (p_57.f5)
                        continue;
                    g_112.f0 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((((((((safe_lshift_func_int8_t_s_u(l_152, (g_102 >= (g_154 = (0xC188B3BDL != l_153))))) ^ ((((safe_mod_func_int8_t_s_s(((((p_58 = ((safe_rshift_func_int16_t_s_s((p_59.f5 = p_57.f2), 8)) | p_57.f0)) & 1UL) <= ((g_102 & p_59.f4) >= l_152)) & g_112.f4), 0xB7L)) <= l_153) < 0xED1989E6L) | g_112.f0)) < g_45) >= p_59.f2) <= 0x28L) | l_159) && (-1L)) != l_159), 3)), 1L));
                }
                else
                {
                    struct S0 l_169 = {0x468781EBL,65530UL,0x3AA6L,0UL,0xEBA9L,0x40DBL};
                    unsigned l_198 = 8UL;
                    if ((l_152 < l_160))
                    {
                        unsigned short l_176 = 0x6E68L;
                        l_169.f0 = (safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(func_46(l_169), 2)), (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_152, (safe_add_func_uint32_t_u_u((0xEC7FL && l_176), (safe_rshift_func_int16_t_s_s(1L, 7)))))), g_112.f2)))), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_176 < (safe_add_func_uint32_t_u_u((func_46(func_62(p_57, g_112.f1, p_57.f3)) & l_129.f2), p_61))) != p_58), p_58)), g_104)))) || p_58) || p_61), 0xF97DL));
                    }
                    else
                    {
                        l_185 = g_11;
                        g_45 = (l_152 && (g_112.f5 = ((safe_mod_func_int32_t_s_s((l_198 = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((p_57.f0 >= (65528UL > (safe_mod_func_int32_t_s_s(((3L || (safe_add_func_uint32_t_u_u(p_59.f2, (((+func_46(g_11)) != (safe_mul_func_uint8_t_u_u(func_46(g_11), 0x35L))) && p_59.f0)))) & g_102), 1L)))), 255UL)), l_130.f1)) < 0x6A4EA3BCL)), l_169.f1)) ^ p_57.f0)));
                        g_112 = g_112;
                        g_112.f0 = (+func_46(p_59));
                    }
                }
            }
            l_160 = l_130.f1;
            l_130 = func_62((g_112 = p_59), func_46(p_57), (~l_129.f4));
        }
    }
    else
    {
        for (g_112.f4 = 18; (g_112.f4 != (-13)); g_112.f4--)
        {
            struct S0 l_203 = {0x5CD5396BL,0xCB61L,0x37B2L,0x04DBB215L,0L,-1L};
            if ((safe_add_func_int8_t_s_s(func_46(l_203), (~g_112.f1))))
            {
                return p_59.f0;
            }
            else
            {
                return g_112.f1;
            }
        }
    }
    l_129 = p_59;
    return l_204;
}







static struct S0 func_62(struct S0 p_63, short p_64, unsigned p_65)
{
    unsigned char l_66 = 0x87L;
    p_63.f0 = l_66;
    return p_63;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_281.f5, "g_281.f5", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
