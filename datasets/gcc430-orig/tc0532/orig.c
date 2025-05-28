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
   const unsigned short f2;
   char f3;
   const int f4;
   short f5;
};


static const unsigned short g_14 = 0xC58BL;
static short g_60 = 0L;
static int g_67 = 0x78D320CDL;
static int g_88 = (-1L);
static unsigned g_99 = 0x1F5D8E54L;
static char g_100 = 0x06L;
static unsigned short g_101 = 6UL;
static unsigned g_113 = 0xB2A72B5AL;
static char g_157 = 1L;
static int g_181 = 0xF1CB64C1L;
static int g_191 = 0x7C6F1CC8L;
static unsigned short g_193 = 1UL;
static struct S0 g_225 = {0xE66DL,0x85B90726L,0x0521L,0x12L,-1L,0xE914L};
static char g_237 = 0x57L;
static int g_240 = 0x573FF772L;
static unsigned g_243 = 4294967287UL;
static unsigned char g_250 = 252UL;
static int g_262 = 0x70D87551L;
static int g_264 = (-1L);
static struct S0 g_361 = {8UL,7L,65532UL,0x5FL,-1L,0x9A81L};
static int g_472 = 0x3CF75FD0L;
static short g_477 = (-1L);
static unsigned short g_513 = 0x44CFL;
static unsigned g_544 = 0x640751A0L;
static unsigned g_609 = 4294967295UL;
static unsigned char g_618 = 0UL;
static int g_649 = (-2L);
static const unsigned g_748 = 0x87A6C7F9L;



static int func_1(void);
static char func_5(const int p_6, struct S0 p_7);
static const int func_8(unsigned short p_9);
static struct S0 func_15(const int p_16);
static unsigned char func_20(unsigned short p_21, unsigned p_22, unsigned char p_23, unsigned p_24);
static unsigned short func_34(int p_35, int p_36, const short p_37, struct S0 p_38, unsigned p_39);
static struct S0 func_40(unsigned p_41, unsigned char p_42, struct S0 p_43, const char p_44, unsigned p_45);
static const int func_62(short p_63, short p_64, unsigned p_65);
static struct S0 func_70(int p_71, int p_72, unsigned char p_73, unsigned short p_74, unsigned char p_75);
static char func_82(unsigned p_83);
static int func_1(void)
{
    int l_4 = 0xB3152C58L;
    short l_10 = 0x8D19L;
    int l_545 = (-1L);
    int l_546 = 0xBB0D3B04L;
    short l_558 = 0x0E6DL;
    unsigned l_572 = 4294967295UL;
    int l_708 = 1L;
    int l_729 = (-5L);
    char l_747 = 1L;
    struct S0 l_759 = {0x5EC9L,0x9CFAEE4DL,65532UL,6L,0x12267A78L,0xE860L};
    l_546 = (safe_mod_func_uint16_t_u_u((l_4 & (func_5(func_8(l_10), func_15(g_14)) < func_8((safe_add_func_uint8_t_u_u((g_544 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_4 | l_4), ((g_225.f1 > 65535UL) | 0x9BL))), l_10))), g_225.f0))))), l_545));
    g_472 = ((safe_rshift_func_int8_t_s_s(l_4, 5)) > (((safe_rshift_func_int16_t_s_s(l_4, 0)) | (safe_unary_minus_func_int16_t_s((0xEB59L >= l_546)))) && ((((g_250 = l_10) != (((!g_361.f5) <= (l_546 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((func_82(((g_361.f1 <= (g_513 >= l_4)) ^ l_558)) , g_262), 4)), 10)))) > l_558)) < 9UL) >= l_545)));
    for (g_99 = 5; (g_99 > 43); g_99 = safe_add_func_int32_t_s_s(g_99, 1))
    {
        int l_561 = 0xE526F1D9L;
        int l_566 = 0x059E7964L;
        struct S0 l_571 = {1UL,0x5D08145BL,65535UL,9L,0x6EE0D402L,9L};
        short l_650 = (-5L);
        unsigned l_676 = 0xD80EB1B3L;
        int l_709 = 0x652D6AA6L;
        if (func_34((l_561 & ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((l_566 = g_361.f0), ((g_225 , (safe_rshift_func_int16_t_s_s((1L != (g_544 <= l_4)), ((safe_rshift_func_int16_t_s_s(l_10, (func_8(g_262) > 0xA9B6L))) | g_361.f3)))) > 0x86L))), 0)) ^ g_262)), l_546, g_477, l_571, l_572))
        {
            unsigned l_578 = 4294967295UL;
            unsigned short l_581 = 0x0A2BL;
            int l_599 = 0xEB3D3DDBL;
            const unsigned l_710 = 0x053A0062L;
            unsigned l_734 = 1UL;
            char l_741 = (-4L);
            for (g_240 = 23; (g_240 != 15); g_240 = safe_sub_func_int8_t_s_s(g_240, 8))
            {
                int l_575 = 0x60DC5297L;
                struct S0 l_587 = {65531UL,8L,1UL,0x84L,-3L,2L};
                g_472 = (l_546 = l_575);
                for (g_100 = 0; (g_100 < (-1)); g_100--)
                {
                    return l_578;
                }
                if ((safe_add_func_uint32_t_u_u(g_88, ((l_581 >= (safe_mod_func_uint8_t_u_u((g_243 == (safe_mod_func_int8_t_s_s(g_67, ((safe_unary_minus_func_int16_t_s((l_575 = (func_8(func_34(g_88, l_545, g_361.f3, (l_581 , l_587), g_100)) == 0xC6727392L)))) || 0x86D384F6L)))), 0xA2L))) && g_361.f1))))
                {
                    char l_600 = 0x25L;
                    unsigned l_603 = 0UL;
                    int l_665 = 1L;
                    if ((l_575 = (safe_rshift_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((0xA590E5D7L ^ 4294967295UL))), ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_225.f2, 0x0B9309A9L)), ((8UL > g_191) >= (g_361.f0 >= ((safe_sub_func_uint8_t_u_u(g_477, (l_599 = 0x17L))) && g_361.f2))))) , l_600))) < 0x0F8BA134L) & g_225.f3), l_600))))
                    {
                        unsigned char l_606 = 0x00L;
                        g_264 = g_225.f2;
                        if (l_571.f4)
                            break;
                        g_264 = ((((g_472 = g_225.f5) , g_477) < 0x94L) == (((((safe_lshift_func_uint8_t_u_s((((g_193 && (l_558 , 1UL)) != (l_603 | (safe_add_func_uint8_t_u_u(l_606, (((safe_add_func_int32_t_s_s(((((((((-3L) || g_361.f3) > l_587.f2) | 0L) | l_571.f2) , g_225.f3) != 2L) | g_193), g_513)) | 1L) && 0xE4C9L))))) | 0x7A1BL), l_600)) > g_361.f0) , (-1L)) < g_225.f5) > g_609));
                    }
                    else
                    {
                        unsigned short l_619 = 0UL;
                        l_575 = (safe_lshift_func_uint8_t_u_u((g_250 = l_603), (((((safe_rshift_func_uint16_t_u_s((l_571 , g_193), (safe_mod_func_uint16_t_u_u((((((g_618 = (+((safe_sub_func_int16_t_s_s((g_225 , l_571.f4), func_8(g_225.f1))) , (l_578 == (g_477 == l_561))))) && 255UL) , g_361.f5) == 255UL) & l_619), 0x891DL)))) <= g_101) ^ l_619) <= 65527UL) > g_237)));
                        return g_60;
                    }
                    if ((g_193 > ((safe_mod_func_int32_t_s_s(func_8(l_571.f2), g_67)) > (safe_rshift_func_uint16_t_u_s(0x4904L, (l_561 = func_8(l_571.f4)))))))
                    {
                        g_472 = (l_587.f4 , (((((l_603 , l_578) && func_8(l_545)) < l_600) , ((safe_rshift_func_uint16_t_u_s(0x10BFL, 9)) | 0xCCFA9C13L)) , (((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_8(l_587.f2), g_240)), g_101)), 1)) <= 0xC3BFL) & l_558)));
                        l_566 = l_587.f1;
                        g_264 = l_572;
                    }
                    else
                    {
                        g_264 = ((g_100 , ((g_361.f0 = ((0L & (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((g_361.f2 >= g_225.f2), (safe_sub_func_uint32_t_u_u(l_581, l_599)))) , (g_618 = (g_157 & (l_10 | func_8((((g_100 | g_225.f4) && 0x12L) <= l_587.f0)))))), 1)) & l_603), (-1L)))) > 0x3AL)) || 65535UL)) | l_546);
                    }
                    for (l_599 = 0; (l_599 == (-19)); l_599 = safe_sub_func_uint16_t_u_u(l_599, 1))
                    {
                        unsigned l_646 = 0x6D59DD2BL;
                        unsigned char l_647 = 0xA1L;
                        struct S0 l_648 = {65535UL,0xA9C66883L,1UL,0xACL,-5L,7L};
                        const unsigned char l_651 = 4UL;
                        unsigned char l_664 = 0xDEL;
                        l_575 = 0x80B380F5L;
                        g_649 = ((g_100 = (safe_sub_func_uint32_t_u_u(l_572, func_34(((((safe_lshift_func_int8_t_s_u((0x792553A7L ^ l_646), 0)) , (g_361.f3 && (l_647 | 0xA475L))) , l_646) && (l_648 , g_60)), l_648.f5, l_587.f2, g_225, l_578)))) >= l_603);
                        l_546 = ((((((g_225.f0 = l_650) > (l_587.f5 == ((g_361.f0 = (l_651 == (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(g_361.f3, 0xAB53DF89L)) >= ((l_665 = (safe_mod_func_uint16_t_u_u((((g_361 , (safe_add_func_uint32_t_u_u(g_243, (-1L)))) != (g_361 , g_609)) != l_664), g_181))) && 65534UL)), l_600)) == 0x442CL), 0x7C4C0981L)) , l_587.f4), g_243)))) > 0x8B3FL))) < g_193) <= 5L) ^ g_609) == g_100);
                        l_676 = (g_225 , (safe_mod_func_int32_t_s_s((func_34(g_67, (g_262 = (safe_mod_func_uint32_t_u_u(((-1L) >= (g_477 ^ ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_665 = (safe_add_func_int16_t_s_s(g_361.f0, func_34(g_193, (g_225 , 0L), g_181, l_571, g_477)))), l_600)), 0xC3L)) || l_546))), 0x5FFAC28DL))), g_361.f1, g_225, g_193) != l_648.f1), l_581)));
                    }
                    g_472 = ((g_361.f0 = (safe_add_func_uint8_t_u_u((g_618 = (safe_mod_func_uint8_t_u_u(g_181, ((((g_250 = l_587.f1) | (~func_8(l_587.f3))) <= g_477) && (l_566 = ((((-4L) > ((-9L) < func_8(g_237))) <= g_361.f5) == l_587.f2)))))), l_578))) ^ g_361.f2);
                }
                else
                {
                    const short l_687 = 1L;
                    for (l_575 = 3; (l_575 > (-6)); l_575 = safe_sub_func_int8_t_s_s(l_575, 7))
                    {
                        if (g_513)
                            break;
                        l_599 = (g_361.f0 & 0xC15193FFL);
                        return l_650;
                    }
                    g_472 = ((safe_lshift_func_int8_t_s_s(g_243, l_687)) != g_99);
                }
                l_546 = (l_575 = l_587.f2);
            }
            if ((safe_add_func_uint8_t_u_u(l_545, (safe_sub_func_int8_t_s_s(((l_599 = ((safe_sub_func_uint32_t_u_u(l_676, ((safe_add_func_int32_t_s_s(func_8((l_578 >= (l_546 = (-1L)))), ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_10 >= (!(safe_rshift_func_int16_t_s_u(((l_708 = (safe_lshift_func_uint16_t_u_u(((-1L) <= ((g_193 = g_99) > (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_157, (-1L))), 0UL)))), l_545))) == l_709), 0)))), (-7L))) != g_513), g_361.f5)) > g_609))) & l_558))) ^ g_100)) != l_710), 0x83L)))))
            {
                unsigned short l_721 = 7UL;
                l_599 = l_599;
                if (l_581)
                {
                    char l_728 = 0x2AL;
                    g_472 = (func_34(func_8((safe_add_func_uint8_t_u_u((0x74L >= (safe_add_func_int16_t_s_s(func_8(((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((g_243 , ((g_225.f3 = (safe_add_func_int8_t_s_s((l_721 <= (g_477 = (safe_rshift_func_uint16_t_u_s(l_578, (g_157 == func_34((safe_sub_func_uint32_t_u_u(g_191, (g_243 = g_191))), (((safe_lshift_func_int16_t_s_u((func_8(g_14) == g_264), 5)) | l_571.f3) , l_599), g_225.f0, g_361, l_546)))))), l_728))) && g_477)) , 7L), g_262)) <= g_225.f1), 0x6719L)) > g_618)), g_250))), l_571.f0))), l_721, g_361.f2, g_361, g_225.f2) >= 1UL);
                }
                else
                {
                    return l_708;
                }
            }
            else
            {
                short l_730 = 0xC4E1L;
                int l_740 = (-8L);
                char l_760 = (-3L);
                g_264 = (l_599 = l_729);
                g_264 = (l_730 && g_181);
                for (l_708 = 0; (l_708 < (-29)); l_708 = safe_sub_func_uint8_t_u_u(l_708, 2))
                {
                    unsigned short l_733 = 0xDBDAL;
                    int l_739 = 0x8E752AE1L;
                    struct S0 l_746 = {65535UL,2L,1UL,0x5EL,0xD539A67DL,0x65D6L};
                    l_734 = l_733;
                    l_599 = (g_472 & (safe_mod_func_uint8_t_u_u(0x60L, ((safe_rshift_func_int16_t_s_u((l_739 = 5L), (l_740 = (l_729 = l_10)))) , ((g_60 != (l_739 = (l_561 <= ((0x51L < l_741) <= ((g_250 = (g_361.f0 == g_225.f3)) && g_477))))) , l_545)))));
                    l_740 = g_60;
                    l_599 = (safe_sub_func_uint8_t_u_u(func_8(((((g_193 >= l_730) == l_740) , ((l_739 = ((func_34(g_88, (safe_sub_func_int32_t_s_s((((+(((-1L) & (g_472 ^ func_8(g_14))) , ((l_545 < g_14) , 0x19ADL))) >= 0xD556L) , g_101), (-4L))), l_739, l_746, g_361.f4) ^ g_99) <= 0x7FD7B164L)) , l_747)) < 0x1D50BE7EL)), g_748));
                }
                l_760 = func_34(g_748, (g_262 = g_264), ((g_60 > func_8((255UL <= (((safe_rshift_func_uint8_t_u_s(((g_243 | l_730) ^ (((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_361.f3, (l_571.f3 , ((g_101 = (safe_add_func_int8_t_s_s(func_8(((g_513 == g_99) , 3UL)), 0x4BL))) < l_571.f4)))), l_581)), 0x3FL)) , g_191) == g_88)), l_734)) , 0xC1L) || g_618)))) != l_10), l_759, g_157);
            }
        }
        else
        {
            char l_761 = 9L;
            int l_767 = 0x86CF5022L;
            l_761 = l_571.f5;
            l_546 = (safe_unary_minus_func_uint8_t_u(((((0x3E3C6110L < 1UL) > (6UL && (0x7EL == (6L & (g_191 < (l_4 == (safe_rshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(l_761, (l_767 = ((l_571.f0 >= 0x61225EA0L) || 0UL)))) , 8UL) , 1L), 1)))))))) ^ g_225.f5) >= g_472)));
        }
        l_546 = ((l_708 = (func_8((func_8((((safe_mod_func_uint32_t_u_u(((l_558 ^ g_225.f2) != ((g_225.f1 != (1UL | ((g_649 & (0L > l_759.f1)) , ((l_650 >= l_729) == 0x06L)))) != g_361.f4)), 0xB262C2FBL)) || 0UL) , 0xFE5CL)) != l_650)) , l_571.f4)) || l_545);
    }
    return l_546;
}







static char func_5(const int p_6, struct S0 p_7)
{
    unsigned l_362 = 0xA723FE81L;
    int l_365 = 0x9BCA180FL;
    char l_490 = 6L;
    char l_506 = 4L;
    int l_532 = 0xC0296044L;
    g_264 = g_240;
    if (l_362)
    {
        short l_377 = 1L;
        int l_385 = 1L;
        int l_460 = (-10L);
        char l_471 = (-7L);
        short l_482 = 0x9135L;
        int l_493 = 0x0767E866L;
        l_377 = func_62(((((safe_rshift_func_int16_t_s_s(p_6, 14)) >= ((g_250 = (l_365 = 0xF9L)) && (p_7.f3 = g_193))) | (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(func_34((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_362, ((safe_sub_func_uint32_t_u_u(g_225.f4, (g_264 = p_7.f2))) || p_7.f5))), (safe_mod_func_int8_t_s_s(func_8(p_6), 0xE9L)))), p_7.f5, g_191, g_225, p_7.f4), l_362))))) == g_240), g_361.f2, p_7.f2);
        if (l_377)
        {
            unsigned short l_383 = 0xED03L;
            struct S0 l_410 = {0UL,0xA73571BDL,0x0221L,0xA4L,0x1E9944D6L,0xE7FAL};
            int l_431 = 1L;
            int l_432 = 0xC823CFCAL;
            unsigned short l_462 = 7UL;
            if ((g_225.f2 == (l_365 <= g_237)))
            {
                unsigned short l_380 = 1UL;
                int l_384 = 0x459A2861L;
                struct S0 l_417 = {0x92CBL,0x2008761DL,65535UL,0xFDL,0xE4C7542BL,-1L};
                l_385 = (p_7.f4 ^ (l_377 , (l_384 = (0x2C2ECCDBL <= (l_365 = ((l_365 <= (+g_101)) == ((safe_sub_func_uint32_t_u_u(((g_67 = (~(func_34(l_380, l_380, (l_377 > (safe_sub_func_uint16_t_u_u((~((p_7.f1 != g_113) , l_365)), p_7.f3))), g_225, l_383) , p_7.f4))) , l_362), g_361.f2)) > g_60)))))));
                if ((g_181 || (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_365 = ((!l_365) & ((safe_sub_func_uint16_t_u_u(func_82(g_225.f2), 0xC235L)) , (246UL ^ (l_384 , (safe_mod_func_int8_t_s_s((g_361.f3 = g_361.f3), (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_384 <= p_7.f1) , p_6), l_383)), p_7.f2)), g_243))))))))), 11)), 0x91L))))
                {
                    l_384 = (g_264 = p_7.f0);
                }
                else
                {
                    int l_404 = 8L;
                    unsigned short l_409 = 0x4211L;
                    struct S0 l_461 = {0UL,-10L,1UL,0L,0xBD7AF2B2L,0xFAFCL};
                    if (((func_34(l_383, (+(((l_365 ^ l_383) , (l_365 = func_82((safe_rshift_func_int16_t_s_u(((((l_385 = (safe_rshift_func_int8_t_s_s((l_404 <= ((((g_225.f3 , ((!(((l_404 ^ g_225.f4) >= (safe_lshift_func_uint8_t_u_u((+(g_99 >= ((safe_lshift_func_int8_t_s_s(l_409, 7)) , 1UL))), p_7.f4))) & p_7.f1)) & g_243)) <= p_7.f5) | g_225.f5) && p_7.f5)), p_7.f4))) > p_7.f0) < 0L) <= 1UL), p_7.f4))))) & l_362)), l_362, l_410, l_377) , p_7.f1) == p_7.f1))
                    {
                        unsigned l_418 = 4294967289UL;
                        l_418 = (func_62(func_20(g_113, g_193, (p_6 | (safe_add_func_uint32_t_u_u((g_99 = p_7.f1), ((g_101 || (p_7.f0 , ((((((+(g_193 >= (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(0x64L, (g_250 = func_34((((((p_7.f3 != 0xEE70L) & l_384) == 7L) < g_243) || p_7.f5), l_377, l_384, l_417, l_404)))), 0xA1C9E515L)))) > l_365) == p_7.f2) > 0x898C2D4BL) , 0x4F46D5D9L) , 0x9FD129FDL))) , 4L)))), g_67), l_377, p_7.f1) , g_361.f0);
                        l_385 = 0xCB941DC9L;
                    }
                    else
                    {
                        short l_430 = 1L;
                        int l_439 = 0xEE870CC9L;
                        l_432 = (safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((((!((func_82(g_250) , ((safe_sub_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((func_82((p_6 || g_88)) && func_34((l_384 = (0x99L && ((g_243 < ((safe_unary_minus_func_int32_t_s(((((g_361.f5 > ((safe_sub_func_uint16_t_u_u((((-1L) && 1L) > (-1L)), 0x8928L)) != p_6)) == l_409) , l_410.f0) ^ p_7.f5))) != l_430)) & l_385))), l_362, g_193, l_410, p_7.f4)), p_7.f1)) & g_237) == 1UL), l_431)) | 1UL)) == g_60)) , p_7.f4) || g_262), l_417.f4)) && g_67) && l_404), 0xA2C63732L));
                        l_385 = func_82((~(safe_mod_func_uint8_t_u_u((l_431 > (safe_mul_func_uint16_t_u_u(g_243, (((((func_34((l_439 = ((1L ^ func_82((func_34(((1UL & l_410.f1) , (((g_157 || (func_82((safe_sub_func_int32_t_s_s((l_384 = (func_82(p_7.f1) > ((func_8(p_6) >= g_361.f0) > g_113))), p_7.f1))) <= g_193)) | 8UL) & l_417.f3)), l_417.f3, g_113, g_225, p_7.f2) , l_385))) <= 0x0AL)), g_225.f0, l_410.f1, p_7, g_361.f5) | p_6) | l_417.f4) , 0L) | (-1L)) > l_385)))), 5UL))));
                        l_385 = 0xAF85561BL;
                        g_264 = (((safe_rshift_func_uint16_t_u_s((g_361.f3 | (((l_439 ^ (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((p_6 , (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(255UL, (0xCC2137D3L ^ 3UL))), (!l_432)))), (((l_439 , (p_7.f0 && (-1L))) , p_7.f2) || p_7.f1))) | 65535UL) , l_384) && p_7.f2), 4294967295UL)) | g_101), 4294967288UL))) && l_439) | 0xFA70L)), l_404)) <= p_6) && 0x5AB86F94L);
                    }
                    l_462 = ((safe_add_func_int32_t_s_s(l_417.f3, (safe_rshift_func_int8_t_s_s((((func_62(((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(l_409, ((0xB4L >= ((0x0986D2FAL & (g_99 , l_385)) != func_34((l_460 = (((g_361.f3 && (l_417.f5 , l_385)) || l_404) | 0L)), g_99, g_361.f3, l_461, p_7.f2))) && 1UL))) > l_362), p_7.f1)) & g_240), l_417.f2, g_237) == p_7.f0) < l_417.f4) || g_361.f4), l_404)))) | p_7.f3);
                }
                g_472 = ((safe_sub_func_int32_t_s_s((g_88 >= (safe_lshift_func_int16_t_s_s((l_471 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((~g_60) & g_225.f1), (((func_34(l_410.f4, (g_240 = l_417.f2), g_225.f2, p_7, g_225.f4) , p_7.f5) <= l_460) || p_7.f3))) | p_7.f0) == g_60), l_362))), p_7.f1))), g_361.f2)) > g_88);
                g_472 = (safe_rshift_func_uint16_t_u_u(p_7.f4, 9));
            }
            else
            {
                l_460 = g_361.f4;
                g_472 = ((g_225.f2 || ((safe_lshift_func_uint8_t_u_u((l_365 , (l_385 , g_477)), 7)) <= (safe_lshift_func_int8_t_s_s(((func_8(p_7.f3) >= (safe_mod_func_uint32_t_u_u((p_7.f3 < (g_225.f5 & ((l_482 != p_7.f3) , l_471))), 1L))) | g_243), 7)))) != p_7.f0);
            }
            l_432 = (p_7.f4 >= ((p_7.f5 && 0x7BA0L) > (safe_lshift_func_uint8_t_u_u((g_361.f5 , (safe_add_func_uint16_t_u_u(g_225.f4, (p_7.f4 , (safe_lshift_func_int16_t_s_s(p_7.f0, 13)))))), g_113))));
        }
        else
        {
            unsigned short l_489 = 65531UL;
            int l_507 = 0xDF9B1043L;
            l_493 = ((((0xCEL <= l_489) , (1UL & l_489)) | (g_250 = p_7.f3)) & ((l_490 = p_7.f1) && (safe_add_func_int16_t_s_s((!(p_7.f5 = l_471)), (g_361.f5 = (p_7.f0 ^ l_493))))));
            l_460 = 0xE1E884A5L;
            for (g_193 = (-25); (g_193 < 45); g_193 = safe_add_func_int32_t_s_s(g_193, 1))
            {
                l_507 = ((safe_rshift_func_int16_t_s_s((0xA8EE7126L != 0UL), ((0xDE94L || (p_7.f0 = (l_362 < ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_365 = func_8(((6UL > (l_490 | (p_7.f5 = (((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(((-6L) || func_8((p_7.f2 >= 0x26L))), 3)) ^ l_506) >= l_377) ^ p_6), 0)) && l_377) & 8UL)))) == l_377))), l_489)), l_460)) >= 0x8CL)))) , 0xE88BL))) ^ p_7.f3);
            }
            for (g_157 = 14; (g_157 > (-19)); g_157--)
            {
                char l_512 = 7L;
                if (g_225.f3)
                    break;
                l_507 = (l_460 = ((p_7.f2 , ((0xA1746ABDL >= (func_82(p_7.f3) & (((func_8(g_361.f1) , (g_472 = (safe_lshift_func_uint8_t_u_u((0x57L < 0x02L), (l_512 != 4294967295UL))))) || g_513) | g_262))) , p_7)) , p_7.f1));
            }
        }
        if (g_157)
        {
            unsigned l_521 = 1UL;
            for (p_7.f3 = 0; (p_7.f3 <= (-21)); --p_7.f3)
            {
                short l_516 = 6L;
                unsigned l_522 = 0x7C101DCEL;
                g_472 = ((func_20(l_516, l_365, (((func_62(g_225.f5, (safe_lshift_func_uint16_t_u_s(((0x88E2104BL ^ g_240) > (0xC954L | (((l_460 , ((safe_add_func_int16_t_s_s(g_361.f2, g_157)) >= 0xADBFL)) == l_490) , l_521))), l_516)), l_522) >= g_225.f1) < 0x7F0AEE74L) , g_361.f4), g_361.f0) , 7L) & g_361.f3);
            }
            l_460 = (-1L);
        }
        else
        {
            char l_528 = 0xAAL;
            int l_531 = 1L;
            l_532 = (safe_sub_func_int8_t_s_s(((((l_362 > (safe_sub_func_uint32_t_u_u((l_365 = (safe_unary_minus_func_uint32_t_u((func_34((l_528 = l_490), ((((p_7.f3 , g_243) && (g_361.f4 >= g_88)) , (safe_add_func_uint32_t_u_u(0UL, ((251UL | (l_531 , g_193)) || l_531)))) , l_531), l_493, g_225, l_377) , p_7.f4)))), l_471))) | g_243) && p_7.f1) == g_193), g_513));
            g_472 = (l_531 = ((p_7.f1 = 0x32C43CD1L) , ((safe_mod_func_uint16_t_u_u(0x902FL, (-1L))) >= p_6)));
        }
        l_493 = 1L;
    }
    else
    {
        int l_535 = 0xECFACDAFL;
        l_535 = func_82(g_361.f4);
    }
    for (g_88 = 0; (g_88 >= 9); g_88 = safe_add_func_uint16_t_u_u(g_88, 6))
    {
        g_472 = p_7.f5;
    }
    return p_7.f2;
}







static const int func_8(unsigned short p_9)
{
    const int l_13 = (-5L);
    for (p_9 = 0; (p_9 > 54); p_9 = safe_add_func_uint32_t_u_u(p_9, 3))
    {
        return l_13;
    }
    return g_14;
}







static struct S0 func_15(const int p_16)
{
    const short l_19 = 0x8AB9L;
    int l_25 = 0x6D402DA3L;
    unsigned char l_30 = 1UL;
    int l_354 = 0xDF74A557L;
    int l_355 = (-1L);
    int l_356 = 8L;
    l_356 = ((safe_add_func_uint8_t_u_u(l_19, (l_355 = (l_354 = func_20(p_16, l_19, (l_25 = 0UL), (p_16 , ((l_19 <= 0x3B15L) , (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(l_19, l_19)) || 1UL), l_30)) >= p_16) < p_16)))))))) , g_67);
    l_356 = (1UL && func_20((safe_rshift_func_uint16_t_u_s(((l_354 = (g_157 ^ l_355)) != (g_225.f5 = (safe_lshift_func_uint8_t_u_u((5L ^ (-1L)), l_19)))), 14)), g_113, g_264, g_14));
    return g_361;
}







static unsigned char func_20(unsigned short p_21, unsigned p_22, unsigned char p_23, unsigned p_24)
{
    unsigned l_31 = 1UL;
    unsigned l_48 = 4294967295UL;
    struct S0 l_49 = {8UL,0xD318431BL,0x57CFL,0L,0x97E410F7L,0x350DL};
    int l_315 = 0xED9C9851L;
    unsigned short l_323 = 0xE31CL;
    int l_334 = 0x6A331119L;
    l_323 = (0xAB8D2321L | ((l_31 & func_8(((g_14 , (safe_lshift_func_uint8_t_u_s(0x06L, 0))) , (((p_21 = ((func_8(func_34(g_14, l_31, g_14, func_40(func_8((((safe_mod_func_int8_t_s_s(((((((l_48 ^ p_24) | (-8L)) , l_31) < p_22) & g_14) >= p_21), l_31)) == 0xADADL) == g_14)), l_48, l_49, p_23, l_49.f3), l_315)) >= g_225.f1) ^ l_49.f3)) , p_24) ^ 0x0CL)))) | g_225.f0));
    if ((func_62(l_49.f1, (0x8128704BL != (g_225.f4 & p_24)), g_243) < (((l_49 , g_225.f0) > ((g_250 = (g_225 , 0x37L)) , l_31)) , l_49.f4)))
    {
        l_334 = ((((((((p_22 == (l_49.f2 && ((l_315 = ((((((safe_sub_func_int16_t_s_s(func_62((safe_lshift_func_uint16_t_u_u((0x4ABAL <= (safe_lshift_func_uint16_t_u_s(0x85BBL, 7))), (safe_lshift_func_uint8_t_u_s(255UL, 0)))), (func_82((safe_add_func_int16_t_s_s(0xBC25L, 0x0ACDL))) , (l_49.f1 , p_24)), g_240), l_323)) != g_225.f4) | 3UL) ^ g_225.f3) && 0UL) < 0L)) > p_21))) ^ g_60) <= 0x1752853BL) || l_49.f3) , 0x7DL) >= 0x63L) == 2UL) < l_49.f4);
    }
    else
    {
        unsigned l_343 = 0UL;
        l_315 = (((p_21 == 0x3E0EL) > (safe_add_func_uint8_t_u_u((((p_24 , (func_62(p_21, (g_14 >= (safe_mod_func_int32_t_s_s(0x9EB05264L, func_34(g_67, (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((0UL & 0x29L), l_343)) > 1L), l_49.f5)), p_23, g_225, g_225.f0)))), l_49.f2) , p_21)) && g_88) , l_343), 7L))) <= g_14);
        return p_23;
    }
    for (g_193 = 26; (g_193 != 36); g_193 = safe_add_func_uint8_t_u_u(g_193, 6))
    {
        unsigned l_346 = 0x1F55DB20L;
        unsigned char l_349 = 0x74L;
        struct S0 l_350 = {0x7FB9L,0xFE83901AL,65535UL,0x98L,0x277C9398L,0x001DL};
        int l_353 = 0x510F0830L;
        l_334 = (func_82(g_237) & (l_346 & ((safe_rshift_func_int16_t_s_u((p_21 < ((g_225.f3 = func_34((g_225 , (l_315 = 0x72CC8F6FL)), l_349, g_225.f3, l_350, p_21)) , l_49.f5)), g_113)) , 7L)));
        for (l_49.f0 = 0; (l_49.f0 > 15); l_49.f0 = safe_add_func_int8_t_s_s(l_49.f0, 7))
        {
            l_353 = (1UL ^ p_24);
        }
    }
    l_334 = l_315;
    return g_100;
}







static unsigned short func_34(int p_35, int p_36, const short p_37, struct S0 p_38, unsigned p_39)
{
    unsigned l_318 = 0x9C7F448DL;
    int l_319 = 0L;
    int l_320 = 7L;
    l_320 = (safe_mod_func_int16_t_s_s((l_319 = (~(l_318 , g_225.f0))), g_225.f4));
    for (g_181 = 17; (g_181 < (-30)); g_181--)
    {
        g_264 = g_264;
        p_35 = g_225.f1;
    }
    return l_319;
}







static struct S0 func_40(unsigned p_41, unsigned char p_42, struct S0 p_43, const char p_44, unsigned p_45)
{
    unsigned char l_249 = 0x9BL;
    int l_263 = 0xD8F7BE22L;
    struct S0 l_308 = {0UL,0x39156E3AL,0xC236L,0x62L,0x3B10FCA9L,4L};
    for (p_41 = (-9); (p_41 >= 3); p_41++)
    {
        unsigned short l_61 = 0x19D4L;
        unsigned char l_253 = 0x86L;
        int l_256 = (-1L);
        int l_261 = (-7L);
        unsigned l_299 = 0xE837760AL;
        unsigned l_306 = 1UL;
        g_250 = (safe_lshift_func_uint16_t_u_s(func_8((safe_add_func_uint8_t_u_u(func_8(((((((((func_8((((safe_rshift_func_uint8_t_u_s(((g_60 = g_14) != (p_41 < (l_61 ^ (0x3FF5L && p_45)))), 7)) ^ (((p_43.f3 ^ func_62(p_45, p_44, l_61)) && 0xB93AL) <= 65535UL)) || 0xDF72888FL)) , g_14) , 249UL) <= l_249) && g_181) | g_225.f0) <= 0x5DL) > l_249) != l_249)), l_61))), g_225.f4));
        l_263 = (g_262 = (safe_lshift_func_int16_t_s_u(g_60, (p_43.f0 = (func_8(l_253) <= ((((safe_rshift_func_int8_t_s_s(func_8(func_8((l_256 = p_44))), ((safe_sub_func_uint32_t_u_u(g_237, ((p_43.f5 = (g_225.f5 = (l_61 <= (g_243 = (g_99 = (((((safe_lshift_func_uint8_t_u_s(((p_43.f0 > g_225.f3) , p_42), 4)) | 8UL) , l_253) <= (-1L)) , 4294967295UL)))))) , g_225.f0))) < l_249))) < l_261) ^ 0L) , l_261))))));
        if (func_8(func_8(l_263)))
        {
            unsigned l_274 = 4294967288UL;
            int l_275 = (-1L);
            int l_276 = 0xB6B9B84EL;
            char l_307 = (-1L);
            struct S0 l_311 = {65530UL,0x4A862867L,1UL,-1L,0x857B65FDL,0xDD46L};
            g_264 = g_225.f2;
            if (p_43.f4)
            {
                char l_267 = 0L;
                unsigned char l_270 = 0UL;
                short l_273 = (-9L);
                int l_277 = 0x1789FE7AL;
                for (g_262 = (-22); (g_262 < (-26)); g_262 = safe_sub_func_int8_t_s_s(g_262, 3))
                {
                    l_263 = (-9L);
                    l_267 = g_243;
                    l_276 = (l_275 = func_8((((g_157 = (+((g_101 | (safe_add_func_int16_t_s_s(l_270, (safe_sub_func_int32_t_s_s((((((l_273 != p_43.f3) & (((g_250 < (l_274 || p_43.f1)) != p_43.f5) ^ p_43.f2)) , l_263) == 0x7D11L) != p_43.f2), l_249))))) | l_263))) < l_253) || 0xE3L)));
                    g_264 = 0x521089FCL;
                }
                l_263 = (p_45 > (((g_191 & 0xF19A7204L) , (0x65524AE8L || g_67)) , (l_277 = g_99)));
                for (g_262 = 12; (g_262 >= 4); g_262 = safe_sub_func_uint16_t_u_u(g_262, 7))
                {
                    unsigned char l_298 = 0x6DL;
                    for (l_276 = 14; (l_276 == 17); l_276++)
                    {
                        int l_285 = (-1L);
                        l_299 = (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((+(((5UL > ((p_43.f4 , (+(((p_43.f0 = (((l_285 <= func_82((!(p_43.f4 < p_43.f0)))) && ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((p_43.f5 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((0UL > g_225.f2), (l_275 , g_225.f2))), p_44))), l_276)), l_275)) < p_44), 1)) ^ 0x9DL), 2UL)) , p_43.f1)) == l_275)) > l_273) < p_43.f3))) || l_61)) ^ 0x3EL) && l_298)))), g_262)) != 2L) , l_273);
                        g_264 = (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_306, (g_250 = 251UL))) && func_82(l_306)), l_249)), (p_42 > l_263)));
                        l_263 = ((l_307 = (g_250 , 4294967290UL)) , (p_43.f4 < g_60));
                        return l_308;
                    }
                    for (l_61 = (-20); (l_61 <= 38); ++l_61)
                    {
                        g_264 = 0xCFFDCCC4L;
                        g_264 = g_181;
                        l_276 = 4L;
                    }
                }
                return l_308;
            }
            else
            {
                if ((0x41L <= func_8(g_240)))
                {
                    return g_225;
                }
                else
                {
                    return l_311;
                }
            }
        }
        else
        {
            return p_43;
        }
    }
    for (l_308.f3 = (-27); (l_308.f3 < 9); l_308.f3 = safe_add_func_uint16_t_u_u(l_308.f3, 5))
    {
        unsigned char l_314 = 0x6AL;
        g_264 = (g_100 == ((p_43.f3 = l_308.f0) ^ g_225.f1));
        if (l_314)
            continue;
    }
    return l_308;
}







static const int func_62(short p_63, short p_64, unsigned p_65)
{
    short l_66 = 1L;
    char l_242 = (-4L);
    int l_248 = 1L;
    g_243 = (((g_67 = (l_66 <= g_14)) || l_66) <= (safe_add_func_int8_t_s_s((func_70(((safe_sub_func_int8_t_s_s((0x469FL == ((safe_mod_func_int32_t_s_s(l_66, (g_14 ^ g_14))) || 0xDAL)), l_66)) & p_64), l_66, l_66, p_65, g_14) , (-1L)), l_242)));
    l_248 = ((safe_mod_func_int8_t_s_s(p_64, g_225.f0)) & (safe_lshift_func_uint16_t_u_s(g_100, 1)));
    return l_242;
}







static struct S0 func_70(int p_71, int p_72, unsigned char p_73, unsigned short p_74, unsigned char p_75)
{
    struct S0 l_108 = {2UL,-1L,1UL,0x8DL,0xBEB709D1L,-1L};
    int l_111 = (-4L);
    int l_112 = 0xAB42EC25L;
    int l_114 = 0L;
    int l_115 = 1L;
    short l_194 = 0L;
    p_71 = (safe_add_func_int32_t_s_s((!(g_14 & func_82(p_72))), 0x65DB386AL));
    l_115 = ((g_100 == (l_114 = ((g_113 = (l_112 = ((((safe_rshift_func_uint16_t_u_u(0UL, 11)) , (((((func_8(g_101) || ((g_14 , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_75 < (l_111 = (g_99 = func_8((l_108 , (safe_mod_func_int32_t_s_s(func_8(l_108.f1), p_75))))))), p_72)), g_100))) , 0xC0L)) & l_108.f2) , p_73) <= 0UL) ^ l_108.f0)) , 0x311AEEC8L) || 4294967293UL))) || l_108.f0))) == 0L);
    if (((g_14 > ((l_108 , (safe_rshift_func_int16_t_s_s(((p_71 = (2L > (0L | (p_74 = func_8((safe_add_func_int8_t_s_s((l_115 = l_108.f2), ((safe_mod_func_uint8_t_u_u(g_14, l_108.f2)) | (((safe_sub_func_uint32_t_u_u((l_114 = (((safe_mod_func_uint8_t_u_u(((g_100 >= (safe_rshift_func_int8_t_s_s((g_101 <= g_100), p_72))) ^ l_108.f2), 0x48L)) ^ l_108.f2) | 8UL)), l_108.f5)) >= p_72) , 1L))))))))) > 0L), p_73))) < p_72)) == g_99))
    {
        char l_154 = 0x82L;
        struct S0 l_158 = {0xA2CAL,-8L,0xA0BFL,0x30L,4L,-1L};
        int l_195 = 0x8A1F4848L;
        int l_223 = 0x8DE73D4CL;
        p_71 = func_82(l_111);
        for (p_73 = (-26); (p_73 >= 17); p_73++)
        {
            char l_130 = 0xFAL;
            int l_131 = 5L;
            l_131 = (l_108 , l_130);
        }
        for (l_108.f5 = 0; (l_108.f5 != (-23)); l_108.f5 = safe_sub_func_int8_t_s_s(l_108.f5, 9))
        {
            struct S0 l_182 = {0x892DL,0xB10FF70AL,65534UL,0xA7L,0L,0L};
            int l_200 = 9L;
            if (p_71)
                break;
            for (p_73 = 0; (p_73 != 60); p_73 = safe_add_func_int32_t_s_s(p_73, 4))
            {
                short l_140 = 1L;
                int l_155 = 0xD2ECADEDL;
                int l_156 = 0L;
                int l_159 = 0xD107E331L;
                struct S0 l_236 = {65535UL,0xAC8189C3L,0x6CB7L,-1L,0x8DF7684AL,7L};
                for (g_99 = 0; (g_99 != 58); ++g_99)
                {
                    unsigned l_160 = 0x430F9885L;
                    int l_192 = 0x49EE9FFEL;
                    l_160 = ((g_100 = ((((l_108.f5 != ((safe_lshift_func_uint16_t_u_u(func_8(((l_140 = 0x28B5F6DFL) , ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((g_113 = ((-9L) < (((g_157 = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((l_156 = (l_155 = (l_154 = (safe_add_func_int16_t_s_s(g_101, (func_8(p_74) || (safe_add_func_int8_t_s_s((-7L), (l_112 = (l_111 = (safe_unary_minus_func_uint8_t_u(0xDDL)))))))))))), p_73)), 0)) < 0xCFC11943L)) , l_158) , (-10L)))) && 0xF5EDDB6FL) >= g_101), g_99)), 3)) && g_88))), l_159)) | l_159)) >= (-5L)) <= 65535UL) , p_72)) & l_159);
                    for (g_100 = 0; (g_100 >= (-20)); g_100 = safe_sub_func_int16_t_s_s(g_100, 5))
                    {
                        short l_179 = 0x8324L;
                        int l_180 = 0x3E69D149L;
                        g_181 = (((((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_180 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(l_112, (safe_lshift_func_int16_t_s_u((4L & ((func_8(p_71) != (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((p_73 == ((((((p_73 , (safe_sub_func_uint8_t_u_u(func_8(l_179), p_73))) != p_74) || g_99) , g_113) > 1L) <= p_74)), 0x227FBC6EL)) == 65533UL), 0xD6BDL))) , g_99)), 5)))) , g_14), p_72))), 0x64FFL)), l_160)) < p_71) , g_113) || 0x02E0L) ^ 4294967295UL);
                        return l_182;
                    }
                    for (l_108.f3 = 0; (l_108.f3 >= (-22)); l_108.f3 = safe_sub_func_int16_t_s_s(l_108.f3, 3))
                    {
                        g_193 = (((0xFCL <= (safe_lshift_func_uint16_t_u_s(0x2832L, 1))) == func_8((p_74 , (((safe_sub_func_int8_t_s_s(g_14, g_101)) | p_71) < (l_192 = ((p_75 && (p_71 || (g_191 = (safe_rshift_func_uint16_t_u_u(func_8(g_88), g_14))))) != l_160)))))) != g_100);
                        l_194 = g_88;
                        p_71 = p_75;
                        l_195 = 0x5755E194L;
                    }
                    l_200 = ((safe_rshift_func_uint8_t_u_u((func_8((l_112 = (1UL != (+4294967288UL)))) , (safe_sub_func_int32_t_s_s(p_74, 1UL))), 3)) < (l_108.f3 , (((l_115 = 0x4E41L) ^ p_74) , (l_159 <= l_160))));
                }
                for (g_100 = 24; (g_100 < (-2)); g_100--)
                {
                    unsigned char l_211 = 255UL;
                    if ((g_157 == (l_155 = (l_200 = ((((safe_lshift_func_int8_t_s_s((254UL || g_191), (((safe_mul_func_int8_t_s_s(func_8(g_88), (!((p_72 , 5L) , (((safe_add_func_int32_t_s_s(l_156, p_75)) > 0L) != l_211))))) && 4294967295UL) || 0x54EA2EE6L))) != 0x76D98625L) || p_72) != g_100)))))
                    {
                        int l_214 = 0x911611CAL;
                        struct S0 l_224 = {0xD156L,-1L,1UL,-9L,0x185BE0D1L,0xB849L};
                        l_223 = (safe_add_func_uint32_t_u_u(l_214, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((p_73 , (safe_mod_func_int16_t_s_s((1L && 0xFAEFL), (g_88 ^ g_113)))), (safe_mod_func_uint16_t_u_u(l_155, 4UL)))) >= p_72), 4))));
                        return l_224;
                    }
                    else
                    {
                        if (l_211)
                            break;
                        return g_225;
                    }
                }
                g_237 = ((g_225 , (safe_rshift_func_int16_t_s_s(l_182.f4, (safe_add_func_int16_t_s_s((-1L), p_74))))) > (l_111 = (+((l_108.f4 , (safe_lshift_func_int8_t_s_s(((p_75 = ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(l_182.f1, g_193)) , p_72), (l_236 , l_182.f1))) > 0x2AECL)) , g_99), 0))) && l_140))));
            }
            for (l_182.f5 = 0; (l_182.f5 < (-4)); l_182.f5 = safe_sub_func_int32_t_s_s(l_182.f5, 8))
            {
                g_240 = (g_193 , p_71);
            }
        }
    }
    else
    {
        struct S0 l_241 = {0x7F96L,0x8A0C0796L,0x714BL,0x18L,-6L,0xC631L};
        return l_241;
    }
    return l_108;
}







static char func_82(unsigned p_83)
{
    unsigned l_84 = 0x61AC8BEBL;
    int l_85 = 0xC2614AC9L;
    int l_97 = 0x7C9E8429L;
    int l_98 = 0xF82584F1L;
    l_85 = l_84;
    g_100 = (((g_99 = ((l_85 = (g_88 = func_8((safe_lshift_func_int16_t_s_s(3L, 7))))) > (safe_lshift_func_int16_t_s_u(((l_98 = (((safe_rshift_func_int8_t_s_u((p_83 || g_14), ((((((l_84 != ((g_14 != (func_8(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_97 = p_83), l_84)), g_14)) < (-1L))) == l_84)) != g_14)) > p_83) < 6L) <= p_83) < p_83) >= l_84))) ^ p_83) <= g_14)) ^ g_14), p_83)))) == g_14) , g_88);
    g_101 = func_8(p_83);
    return p_83;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_225.f3, "g_225.f3", print_hash_value);
    transparent_crc(g_225.f4, "g_225.f4", print_hash_value);
    transparent_crc(g_225.f5, "g_225.f5", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_361.f4, "g_361.f4", print_hash_value);
    transparent_crc(g_361.f5, "g_361.f5", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
