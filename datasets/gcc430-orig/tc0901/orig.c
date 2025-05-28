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
   char f0;
};

struct S1 {
   unsigned f0;
   struct S0 f1;
   int f2;
};

union U2 {
   struct S1 f0;
};

union U3 {
   const int f0;
};

union U4 {
   int f0;
   int f1;
};


static int g_2 = (-9L);
static unsigned char g_84 = 0xDAL;
static struct S0 g_87 = {-4L};
static union U2 g_91 = {{0x03B64E31L,{0x6AL},0x0D2634D7L}};
static int g_102 = 0L;
static int g_106 = 0L;
static unsigned g_149 = 4294967295UL;
static unsigned short g_193 = 0xEDB8L;
static union U3 g_198 = {0x2B9424D4L};
static union U4 g_207 = {0xE4834083L};
static struct S1 g_219 = {4294967295UL,{0xC4L},0xB3155C3DL};
static unsigned g_233 = 0x817256ABL;
static int g_271 = 0x5C9B7392L;
static unsigned char g_272 = 0x41L;
static char g_305 = 0x3BL;
static unsigned g_306 = 0UL;
static union U2 g_320 = {{0x1CB252DFL,{0x45L},1L}};
static short g_329 = (-1L);
static unsigned short g_330 = 0x6659L;
static unsigned char g_371 = 0xEFL;
static int g_502 = 0xD85AB170L;
static short g_503 = (-9L);
static int g_505 = 9L;
static short g_506 = 0x26E9L;
static unsigned short g_507 = 0xCE6BL;
static unsigned g_523 = 0x291522D0L;
static union U2 g_546 = {{4294967295UL,{0x42L},0xEC2F027CL}};
static union U2 g_558 = {{0x8CA1691FL,{0x9CL},7L}};
static unsigned short g_630 = 65535UL;
static union U3 g_653 = {0xF75DB711L};
static unsigned short g_657 = 65535UL;
static int g_702 = (-1L);
static unsigned char g_703 = 0UL;
static unsigned g_713 = 0x037653A6L;
static unsigned g_733 = 0xBD21A556L;
static int g_754 = 5L;
static short g_764 = 0x67C6L;
static unsigned g_765 = 1UL;



static int func_1(void);
static unsigned func_10(unsigned short p_11, int p_12, unsigned short p_13);
static int func_14(union U2 p_15);
static union U2 func_16(struct S0 p_17, const unsigned p_18);
static short func_24(union U2 p_25, union U2 p_26);
static union U2 func_37(unsigned char p_38, char p_39, short p_40, char p_41);
static int func_52(union U4 p_53, union U4 p_54, int p_55, union U4 p_56, union U2 p_57);
static union U4 func_59(unsigned p_60, unsigned char p_61, char p_62, int p_63);
static short func_64(unsigned char p_65, char p_66, struct S1 p_67, struct S1 p_68, unsigned char p_69);
static unsigned char func_74(short p_75, unsigned p_76, const unsigned char p_77);
static int func_1(void)
{
    int l_9 = 0xC2443AC4L;
    struct S0 l_19 = {-1L};
    union U4 l_688 = {1L};
    struct S1 l_690 = {0xC9533D40L,{0x70L},0L};
    char l_759 = 9L;
    int l_760 = 0xFE9189B8L;
    int l_761 = 0x8574A42CL;
    int l_762 = 0xBB5B26F3L;
    int l_763 = 0xEC53DA12L;
    union U2 l_770 = {{4294967295UL,{7L},0xB30D6B43L}};
    for (g_2 = 25; (g_2 != (-4)); --g_2)
    {
        short l_658 = (-1L);
        unsigned short l_661 = 1UL;
        int l_671 = (-8L);
        int l_674 = (-7L);
        const union U3 l_730 = {5L};
        int l_747 = 0x38244934L;
        g_657 |= (safe_mul_func_int16_t_s_s(0xD4DFL, (safe_sub_func_int8_t_s_s((l_9 < ((func_10(g_2, func_14(func_16(l_19, g_2)), g_305) , l_19.f0) >= g_219.f1.f0)), 0x5CL))));
        if (l_658)
        {
            int l_668 = 0xA69E1B1DL;
            int l_673 = (-1L);
            union U2 l_697 = {{0x0D557E9FL,{1L},0L}};
            unsigned char l_717 = 0UL;
            int l_731 = (-4L);
            if (g_320.f0.f0)
                break;
            l_9 |= (((safe_mul_func_uint8_t_u_u(l_661, l_658)) ^ ((g_149 < ((safe_mul_func_int8_t_s_s((((((0xEEL | 7L) || 6UL) , (safe_mod_func_int8_t_s_s(l_658, (0x1519L || 0x0811L)))) & 0x9DL) & l_668), g_193)) <= g_558.f0.f1.f0)) & 0x4F3FL)) ^ l_668);
            for (g_102 = 0; (g_102 != 18); g_102 = safe_add_func_uint16_t_u_u(g_102, 5))
            {
                int l_672 = 0xF240E94BL;
                unsigned l_675 = 4294967286UL;
                struct S1 l_689 = {1UL,{0xBCL},0x9312A182L};
                char l_716 = 0x57L;
                int l_732 = 0xFBBD9EE1L;
                int l_752 = (-10L);
                short l_753 = 0xD4B2L;
                int l_755 = 0xB3125CF0L;
                ++l_675;
                for (g_507 = 7; (g_507 > 52); g_507 = safe_add_func_int16_t_s_s(g_507, 4))
                {
                    union U2 l_684 = {{0xBB712821L,{0x90L},7L}};
                    union U2 l_685 = {{4294967295UL,{8L},3L}};
                    if ((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(g_198.f0, func_24((l_684 , l_684), l_685))) , l_684.f0.f1) , (func_10(l_685.f0.f1.f0, l_9, ((safe_lshift_func_uint8_t_u_s((l_688 , 247UL), 1)) , 65535UL)) || g_546.f0.f2)), l_9)))
                    {
                        l_671 = 0x8C7A5CB6L;
                    }
                    else
                    {
                        l_690 = ((g_502 < l_672) , l_689);
                        g_546.f0.f2 = (safe_sub_func_int16_t_s_s(0x46A8L, (safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((func_24(l_697, g_558) || g_507), (l_661 <= l_684.f0.f1.f0))) , ((safe_div_func_uint8_t_u_u(func_10(l_672, func_10(g_320.f0.f0, g_219.f1.f0, g_91.f0.f0), l_9), 0xEDL)) < l_661)), g_271))));
                        l_674 &= g_546.f0.f0;
                    }
                    g_502 = l_671;
                    l_674 = ((g_84 != l_697.f0.f0) ^ (safe_rshift_func_uint8_t_u_s(g_149, 1)));
                    ++g_703;
                }
                for (g_630 = 0; (g_630 == 33); g_630++)
                {
                    struct S0 l_708 = {0x4EL};
                    int l_738 = 0L;
                    int l_748 = (-3L);
                    l_708 = l_19;
                    l_671 = ((l_672 , (g_198.f0 ^ func_10(l_697.f0.f2, (l_689.f2 || (+g_657)), g_149))) , (((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((g_713 || (safe_lshift_func_uint8_t_u_u(g_329, 0))), l_716)), l_717)) | l_688.f1) >= 0xF6L));
                    if ((safe_lshift_func_uint16_t_u_s(((g_657 , func_10((l_673 | (((safe_lshift_func_uint8_t_u_u(0xDEL, (safe_sub_func_int32_t_s_s((-1L), (g_91.f0.f0 != l_689.f2))))) > (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_mod_func_uint16_t_u_u(g_233, (l_730 , 0x0D09L))) || l_9) | l_9) ^ g_219.f1.f0) <= 65535UL), 3)), 0x2EL))) || l_673)), g_305, l_673)) > g_219.f1.f0), g_502)))
                    {
                        unsigned l_749 = 0x1CB06B6EL;
                        g_733--;
                        if (g_329)
                            break;
                        g_320.f0.f2 = (safe_div_func_uint16_t_u_u(((func_24(g_91, (l_738 , l_697)) <= (safe_rshift_func_int16_t_s_u(((g_320.f0.f2 < ((((safe_div_func_uint32_t_u_u((((g_702 < (safe_rshift_func_int16_t_s_u((((g_329 == ((safe_mul_func_int16_t_s_s(l_697.f0.f1.f0, 0x7EAAL)) != l_747)) & 0L) & l_671), 6))) & g_106) | g_219.f2), 3L)) && l_689.f2) >= g_546.f0.f2) | l_697.f0.f2)) ^ 0xC483L), 2))) && 0xE5B35CFEL), (-1L)));
                        --l_749;
                    }
                    else
                    {
                        unsigned l_756 = 1UL;
                        l_9 ^= g_733;
                        --l_756;
                    }
                }
            }
        }
        else
        {
            return g_207.f1;
        }
        return g_233;
    }
    g_765++;
    l_690.f2 = ((func_59(l_761, ((0x0C44D814L >= (func_14(g_546) < func_24(g_320, l_770))) ^ l_759), (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_219.f2, 0x14L)), g_546.f0.f2)), (-1L))), 0x58L)), l_770.f0.f2) , 0L) < 65533UL);
    return l_690.f1.f0;
}







static unsigned func_10(unsigned short p_11, int p_12, unsigned short p_13)
{
    struct S1 l_656 = {0x1CABDCCEL,{0xD3L},0xB5A29FBAL};
    g_87 = g_558.f0.f1;
    l_656 = l_656;
    return g_219.f0;
}







static int func_14(union U2 p_15)
{
    int l_648 = 0L;
    int l_655 = 0L;
    l_648 = ((p_15.f0.f2 , ((l_648 , (safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((func_59((g_653 , (l_648 < (g_630 < (((safe_unary_minus_func_int8_t_s(l_648)) | p_15.f0.f1.f0) & (((l_648 ^ (l_648 , l_655)) < g_87.f0) || l_655))))), p_15.f0.f2, p_15.f0.f2, g_91.f0.f0) , l_648), 0xBE86L)), 4L))) >= l_655)) == g_523);
    return g_87.f0;
}







static union U2 func_16(struct S0 p_17, const unsigned p_18)
{
    unsigned l_22 = 1UL;
    int l_23 = 0xEF51AE9AL;
    union U2 l_27 = {{0xF8CD3BEDL,{8L},-1L}};
    short l_47 = 0x199FL;
    union U4 l_576 = {0x371B8838L};
    int l_584 = 0x3E0CBF07L;
    int l_587 = 6L;
    struct S0 l_618 = {0xA1L};
    unsigned l_628 = 5UL;
    struct S1 l_643 = {1UL,{0xE7L},0xC1ECACDDL};
    struct S1 l_644 = {4294967293UL,{9L},0xE69548A3L};
    int l_647 = 0xA4BEE277L;
    for (p_17.f0 = 0; (p_17.f0 == (-10)); p_17.f0 = safe_sub_func_int32_t_s_s(p_17.f0, 8))
    {
        l_22 = p_18;
        if (p_17.f0)
            break;
    }
    l_23 ^= (-1L);
    l_23 = (func_24(l_27, l_27) , g_2);
    for (p_17.f0 = (-27); (p_17.f0 <= 7); ++p_17.f0)
    {
        union U4 l_58 = {3L};
        union U2 l_83 = {{4294967295UL,{-1L},9L}};
        unsigned l_234 = 0x4C74F74AL;
        int l_582 = (-3L);
        int l_585 = 0x7184DA73L;
        union U2 l_614 = {{0x97F6F321L,{-5L},0x993387B3L}};
        for (l_27.f0.f0 = 0; (l_27.f0.f0 == 48); ++l_27.f0.f0)
        {
            struct S1 l_220 = {1UL,{4L},1L};
            union U4 l_577 = {0x5D731C35L};
            int l_583 = 0xEC87AE34L;
            union U2 l_617 = {{0x01C8FF98L,{0xADL},0xD1570FAAL}};
            for (l_22 = (-16); (l_22 > 42); ++l_22)
            {
                unsigned l_44 = 0xD790F958L;
                union U2 l_82 = {{4294967295UL,{-1L},1L}};
                union U4 l_578 = {0x67C416ACL};
                g_502 &= (func_24(func_37((((safe_div_func_int16_t_s_s((((l_44 >= 0x308FL) , (safe_div_func_uint8_t_u_u(l_47, (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((func_52(l_58, func_59(g_2, (((func_64(l_23, (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(func_74(p_18, (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((func_24(l_82, l_83) != 0x1826471BL), 0x1255L)), 10)), l_22), 0x96L)), 0)), g_219, l_220, l_83.f0.f0) == l_234) < g_106) != 0L), l_27.f0.f1.f0, l_234), g_207.f1, g_207, g_320) , l_82.f0.f1.f0), g_2)), g_329))))) ^ 9L), g_193)) , 0x9D763D55L) <= p_18), p_17.f0, g_106, g_503), l_82) ^ 1UL);
                g_546.f0.f2 |= ((l_27.f0.f2 > func_52(l_576, l_577, g_371, l_578, l_27)) < g_502);
            }
            for (g_219.f0 = 0; (g_219.f0 <= 13); g_219.f0 = safe_add_func_uint8_t_u_u(g_219.f0, 1))
            {
                struct S0 l_581 = {0L};
                int l_586 = 0x70940D5DL;
                unsigned char l_588 = 7UL;
                l_581 = l_27.f0.f1;
                l_588--;
                l_23 = p_17.f0;
            }
            l_220 = l_83.f0;
            for (l_577.f1 = 0; (l_577.f1 < (-24)); l_577.f1 = safe_sub_func_uint8_t_u_u(l_577.f1, 1))
            {
                const union U2 l_596 = {{6UL,{0xE8L},0xA2438228L}};
                union U4 l_605 = {0xC015F699L};
                unsigned l_610 = 0x13C5CF94L;
                int l_616 = 0x23585365L;
                for (l_587 = 0; (l_587 > 5); ++l_587)
                {
                    short l_595 = (-1L);
                    int l_606 = 1L;
                    union U4 l_611 = {-1L};
                    union U2 l_615 = {{0x5E47ECAFL,{1L},0L}};
                    union U3 l_619 = {1L};
                    int l_629 = 0L;
                    if (l_595)
                        break;
                    if (((l_596 , p_17.f0) ^ ((g_320.f0.f0 ^ (0x5DL > (l_583 >= (l_595 < (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(l_58.f1, (safe_mul_func_uint16_t_u_u(9UL, 0UL)))), 1)))))) , l_58.f1)))
                    {
                        unsigned short l_603 = 65532UL;
                        union U4 l_604 = {-5L};
                        unsigned char l_607 = 0xB4L;
                        l_584 ^= (((((l_603 , 0xFEBDL) == (l_595 | l_596.f0.f1.f0)) , func_59(l_595, p_18, p_18, func_74((l_577.f1 , (func_37((((func_52(l_604, l_605, p_18, l_604, g_320) == g_558.f0.f1.f0) && (-1L)) ^ l_58.f1), p_17.f0, g_106, l_604.f0) , p_17.f0)), l_604.f1, p_17.f0))) , l_603) || l_595);
                        l_607 = l_606;
                    }
                    else
                    {
                        return g_546;

                                            }
                    l_616 = (safe_mul_func_int16_t_s_s((func_24(func_37(p_17.f0, l_27.f0.f1.f0, func_24(func_37((l_610 ^ l_83.f0.f1.f0), (l_577.f1 || (l_611 , (safe_add_func_int16_t_s_s((((0UL > l_596.f0.f0) , l_27.f0.f1) , g_306), g_558.f0.f2)))), p_17.f0, p_18), l_614), l_596.f0.f1.f0), l_615) && 0x6F6875BAL), g_198.f0));
                    if (func_24(l_617, l_615))
                    {
                        l_618 = g_87;
                    }
                    else
                    {
                        char l_627 = 0x51L;
                        if (p_17.f0)
                            break;
                        g_502 |= func_74((g_193 < (l_577.f1 && (func_52(func_59((func_64((g_91.f0 , (((l_619 , (safe_unary_minus_func_uint32_t_u(((func_59((((safe_sub_func_uint32_t_u_u(p_17.f0, (safe_lshift_func_uint16_t_u_s((p_17.f0 >= (safe_mul_func_uint16_t_u_u((g_306 , (g_84 && g_272)), 0xC796L))), g_546.f0.f0)))) >= l_627) == l_628), g_503, l_605.f1, g_320.f0.f0) , l_615.f0.f1) , 0UL)))) & 250UL) < g_2)), l_629, l_27.f0, g_558.f0, l_58.f0) == 0x047B41D5L), l_629, g_207.f1, p_17.f0), g_207, l_596.f0.f0, g_207, l_615) <= l_617.f0.f0))), l_596.f0.f1.f0, g_193);
                    }
                }
                g_630--;
            }

                    }
        g_502 &= (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_17.f0, ((safe_rshift_func_uint8_t_u_s(g_306, ((~p_17.f0) , func_64(((func_64(l_582, (l_83.f0.f2 & func_24(func_37(((safe_sub_func_int32_t_s_s((l_83.f0.f2 <= ((-1L) == (((((safe_add_func_uint8_t_u_u((p_17 , g_630), g_306)) , g_219.f0) == 4294967287UL) , 0x20L) == g_219.f1.f0))), 0x131B7AEDL)) , l_587), g_506, g_272, g_558.f0.f1.f0), l_27)), l_614.f0, l_614.f0, p_18) != g_272) ^ 9L), g_546.f0.f2, l_643, l_644, p_17.f0)))) || p_17.f0))), p_17.f0));
        g_219.f2 &= (safe_rshift_func_uint16_t_u_u((p_17.f0 >= g_91.f0.f1.f0), p_18));
        l_647 |= l_643.f1.f0;
    }
    return l_27;

    }







static short func_24(union U2 p_25, union U2 p_26)
{
    unsigned char l_30 = 1UL;
    l_30 |= (safe_rshift_func_uint8_t_u_u(p_26.f0.f1.f0, 6));
    return g_2;
}







static union U2 func_37(unsigned char p_38, char p_39, short p_40, char p_41)
{
    struct S0 l_529 = {0x41L};
    unsigned char l_530 = 248UL;
    struct S1 l_537 = {0x02211F9BL,{-9L},0x1A87ACB2L};
    union U4 l_566 = {1L};
    struct S0 l_575 = {-5L};
    for (p_38 = 0; (p_38 >= 6); p_38 = safe_add_func_uint8_t_u_u(p_38, 4))
    {
        unsigned l_528 = 0UL;
        int l_535 = 0xAEFB289EL;
        union U2 l_547 = {{4294967292UL,{-1L},0xF7070EBDL}};
        unsigned l_564 = 0x8A9A023CL;
        l_535 = func_74(l_528, g_320.f0.f1.f0, (((l_529 , l_530) <= 0xDAL) > (0xF0L <= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((0xC3L != 0xA5L), g_320.f0.f2)), 2)))));
        if (l_529.f0)
        {
            unsigned l_536 = 4294967291UL;
            l_536 ^= l_529.f0;
            l_537 = g_219;
            g_505 = (safe_lshift_func_int16_t_s_s(p_41, 14));
            l_535 = (!l_535);
        }
        else
        {
            union U2 l_548 = {{0x027B5696L,{0xFCL},8L}};
            union U4 l_565 = {0x3879D9A8L};
            for (g_84 = (-5); (g_84 < 7); ++g_84)
            {
                unsigned l_555 = 5UL;
                union U2 l_559 = {{0UL,{9L},1L}};
                l_555 = (safe_div_func_int16_t_s_s((~(safe_mod_func_int16_t_s_s(func_24(g_320, g_546), func_24(l_547, l_548)))), (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((0xF9L > (safe_mod_func_uint16_t_u_u(((((p_40 | l_548.f0.f1.f0) > 0x3B58L) , p_38) , l_548.f0.f2), 65532UL))), 1)), g_503))));
                l_537.f2 = ((((safe_add_func_uint16_t_u_u(g_91.f0.f1.f0, func_24(g_558, l_559))) == (g_546 , p_38)) , (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((0xBBCB2381L > (l_547.f0.f2 > 0xCFB5L)), g_546.f0.f2)), l_564))) , p_41);
            }
            g_505 |= ((func_52(g_207, l_565, g_305, l_566, ((safe_sub_func_int8_t_s_s((((p_41 == (((~l_548.f0.f0) & (p_38 <= (safe_rshift_func_uint16_t_u_s(p_40, 12)))) , (safe_div_func_uint32_t_u_u((!g_2), g_558.f0.f0)))) >= p_40) == 248UL), 249UL)) , l_548)) > l_566.f0) > 0xA828E597L);
            if (l_528)
                break;
        }
        l_575 = l_547.f0.f1;
    }
    return g_320;

    }







static int func_52(union U4 p_53, union U4 p_54, int p_55, union U4 p_56, union U2 p_57)
{
    const unsigned l_323 = 4294967286UL;
    int l_327 = 0x8EB0DDB8L;
    int l_368 = (-4L);
    struct S0 l_392 = {0x67L};
    union U2 l_427 = {{8UL,{0x15L},-1L}};
    int l_499 = 4L;
    int l_518 = 2L;
    int l_519 = 0x63B76497L;
    int l_520 = 0xE38BD596L;
    int l_521 = 0x5F62A797L;
    int l_522 = (-1L);
    for (g_87.f0 = 29; (g_87.f0 == (-15)); g_87.f0 = safe_sub_func_int16_t_s_s(g_87.f0, 1))
    {
        unsigned short l_324 = 0xB208L;
        int l_355 = (-1L);
        int l_363 = 0xAA069C69L;
        int l_370 = 0xD957DF1AL;
        unsigned l_412 = 0x0F54ECB6L;
        char l_456 = 0x13L;
        union U2 l_489 = {{4294967294UL,{-9L},-1L}};
        int l_500 = 0x0732C857L;
        int l_501 = (-6L);
        int l_504 = 0xD3E56773L;
        if (((l_323 , l_324) > 1L))
        {
            unsigned l_325 = 4294967295UL;
            int l_326 = 0xBEB13191L;
            union U2 l_333 = {{0UL,{0L},0x8853CA86L}};
            int l_364 = 0x4DDAD7DDL;
            int l_365 = 0x02719992L;
            int l_366 = (-8L);
            const short l_400 = 0L;
            union U3 l_401 = {0x6DD1D8D2L};
            unsigned char l_428 = 0xF9L;
            unsigned l_440 = 1UL;
            l_326 = l_325;
            if ((p_56.f0 & 0x98B0FE1EL))
            {
                short l_328 = 0xE925L;
                union U2 l_334 = {{0x5D6DFA7AL,{0x64L},0xEFCA2EE2L}};
                struct S0 l_390 = {0x4CL};
                ++g_330;
                if (func_24(l_333, l_334))
                {
                    union U2 l_350 = {{0UL,{0xB3L},0x35D84F5EL}};
                    for (g_91.f0.f2 = 23; (g_91.f0.f2 < 8); g_91.f0.f2 = safe_sub_func_int16_t_s_s(g_91.f0.f2, 2))
                    {
                        char l_340 = 0x6FL;
                        int l_341 = 0x9B7089B1L;
                        p_57.f0.f2 = (p_57.f0.f1.f0 || (safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u((l_323 | (g_306 , l_340)), 0x638479CFL)))));
                        l_341 ^= (l_334.f0.f2 ^ p_56.f1);
                        p_57.f0.f2 &= (l_324 ^ (func_24(g_91, g_91) ^ ((safe_sub_func_uint32_t_u_u(l_326, 0L)) & (((safe_sub_func_int8_t_s_s((-1L), ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_350 , (safe_mul_func_uint8_t_u_u(p_54.f1, g_193))), 13)), g_149)) , p_55))) == 0x67B9L) , g_320.f0.f0))));
                    }
                    if (g_271)
                    {
                        unsigned char l_362 = 0x90L;
                        char l_367 = 0x6FL;
                        int l_369 = (-1L);
                        l_334.f0.f2 = ((l_355 > (l_334.f0.f0 != p_57.f0.f2)) == (p_57 , (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((((+p_57.f0.f0) ^ (safe_sub_func_uint32_t_u_u((l_362 < g_320.f0.f2), 0x76D71741L))) ^ (0x11L != g_219.f2)) == g_330), g_91.f0.f1.f0)), p_57.f0.f1.f0))));
                        g_371++;
                        return g_207.f1;
                    }
                    else
                    {
                        if (p_57.f0.f0)
                            break;
                        p_55 = (((g_91 , p_57.f0.f1) , p_56.f0) | ((safe_rshift_func_int8_t_s_s(((p_57 , (safe_div_func_uint8_t_u_u(g_320.f0.f0, 255UL))) ^ (((0xA55AB99AL == g_87.f0) < func_24(g_320, l_350)) != l_370)), l_370)) != 1UL));
                        p_57.f0.f2 &= 0xBECF892AL;
                    }
                    l_368 = func_24(p_57, l_334);
                    if (g_330)
                    {
                        l_368 ^= (((safe_mod_func_uint32_t_u_u(func_24(g_320, p_57), ((safe_mod_func_int16_t_s_s(func_24(p_57, p_57), ((safe_div_func_uint32_t_u_u((!0xE00FD490L), (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_57.f0.f0, (((func_24(g_91, l_350) && g_219.f2) & 0xAEL) , g_305))), 7)) | 0xECL), 1UL)))) ^ l_327))) , l_324))) | g_2) < p_55);
                        return p_56.f1;
                    }
                    else
                    {
                        if (l_334.f0.f1.f0)
                            break;
                        l_390 = g_320.f0.f1;
                    }
                }
                else
                {
                    struct S1 l_391 = {0xCD9FBB12L,{0xFDL},0xAB54657BL};
                    p_57.f0 = l_391;
                    l_392 = l_392;
                    return g_271;
                }
            }
            else
            {
                struct S0 l_398 = {0xF9L};
                int l_463 = (-1L);
                union U2 l_497 = {{4294967295UL,{0x06L},0xF0E95BBEL}};
                for (l_370 = 27; (l_370 != (-10)); --l_370)
                {
                    int l_395 = 0L;
                    int l_399 = 3L;
                    if (l_395)
                        break;
                    g_320.f0.f2 = (l_370 < (p_54.f1 == ((g_193 ^ ((l_398 , (((p_56.f0 ^ 1UL) ^ l_399) == p_56.f0)) <= l_395)) == 0L)));
                    l_363 = ((((l_400 <= ((l_401 , 3UL) , ((7L & l_323) >= l_392.f0))) && ((safe_add_func_int32_t_s_s(l_323, (safe_add_func_uint16_t_u_u((g_106 > (p_57.f0.f1.f0 && p_54.f1)), g_271)))) ^ (-6L))) >= l_355) == g_91.f0.f0);
                    g_102 = ((safe_mul_func_uint16_t_u_u((g_84 , 0xCAE9L), g_193)) && 4UL);
                }
                g_91.f0.f2 = (p_57.f0.f2 && (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_412 , (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_327, 1L)), 1UL))), ((g_207.f0 && (p_57.f0.f1 , ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(func_24((func_24(l_333, l_427) , g_91), l_427), p_55)) & l_364), 6)), (-10L))), l_324)), l_428)) < p_56.f1))) == l_392.f0))), g_233)));
                if ((((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((p_54.f1 & (safe_sub_func_int32_t_s_s(p_53.f1, (safe_unary_minus_func_int8_t_s(((l_364 || func_24((p_57.f0.f1 , g_91), g_91)) , (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((+((((l_333.f0.f1.f0 | (4294967289UL >= g_272)) , (-1L)) ^ g_207.f0) || l_365)) == g_2), g_87.f0)) > l_370), l_440)))))))) >= l_398.f0) ^ g_84), 2)) && p_55), 1L)) , l_398.f0) > l_363))
                {
                    unsigned short l_447 = 65535UL;
                    p_57.f0.f2 ^= (g_91.f0.f1 , g_102);
                    p_57.f0.f2 = (safe_mod_func_int32_t_s_s(l_355, (safe_mul_func_int16_t_s_s((l_447 == ((safe_sub_func_int8_t_s_s(((g_149 < g_219.f0) && (safe_div_func_uint16_t_u_u(p_55, ((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((-8L), (g_271 != ((p_55 && l_456) , l_368)))), 0x3F52DB4BL)) | l_363)))), l_333.f0.f2)) , 0L)), 0xA870L))));
                    l_463 &= (safe_mul_func_int8_t_s_s((l_333.f0.f0 > func_24(p_57, g_91)), (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((l_365 && ((l_428 & (g_320.f0 , g_305)) , (p_57.f0.f1.f0 , l_398.f0))), p_55)) <= g_219.f2), g_306))));
                    p_57.f0.f2 = (safe_unary_minus_func_int32_t_s((((safe_lshift_func_int16_t_s_s((p_56.f0 == (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((func_24(g_320, l_333) > (p_57.f0.f2 <= (safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_57.f0.f2, ((safe_sub_func_int16_t_s_s((g_91.f0.f1.f0 != ((g_219.f1.f0 < l_447) < 0x0CL)), p_57.f0.f1.f0)) , p_54.f0))), 14)), p_54.f0)), l_333.f0.f0)) > 0x06L) , g_330), 5)), l_428)), g_84)))) && 0UL) || g_371), l_412)), g_91.f0.f2))), p_53.f0)) != 1UL) && g_87.f0)));
                }
                else
                {
                    unsigned l_496 = 4294967290UL;
                    const unsigned l_498 = 0UL;
                    g_102 ^= (safe_mod_func_uint16_t_u_u((func_24(g_320, l_489) <= (func_24(g_320, ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_333.f0.f0, l_496)), g_320.f0.f0)), (~func_24(p_57, l_497)))) , p_57)) != 0x3BL)), l_498));
                }
                --g_507;
            }
        }
        else
        {
            short l_510 = 0L;
            l_427.f0.f1 = p_57.f0.f1;
            g_91.f0.f2 = p_56.f1;
            p_55 &= (l_510 >= (l_510 || (p_57.f0.f2 && (safe_mul_func_int16_t_s_s((0x1AE6CA90L < 0xE8931671L), l_489.f0.f2)))));
        }
        for (l_500 = 0; (l_500 == 13); l_500 = safe_add_func_int8_t_s_s(l_500, 1))
        {
            unsigned short l_515 = 65535UL;
            l_515--;
        }
        if ((func_24(p_57, p_57) , p_53.f0))
        {
            l_489.f0.f1 = p_57.f0.f1;
        }
        else
        {
            p_55 = p_57.f0.f0;
            if (g_503)
                break;
        }
    }
    --g_523;
    return p_57.f0.f2;
}







static union U4 func_59(unsigned p_60, unsigned char p_61, char p_62, int p_63)
{
    struct S1 l_235 = {0x849BAEF5L,{0x9DL},1L};
    int l_242 = 0xACA0D500L;
    union U3 l_288 = {0L};
    unsigned l_293 = 0xAA631CA5L;
    union U2 l_315 = {{1UL,{0L},-10L}};
    short l_319 = 0xBB41L;
    l_235 = l_235;
    for (l_235.f2 = 0; (l_235.f2 > (-22)); l_235.f2 = safe_sub_func_int8_t_s_s(l_235.f2, 5))
    {
        union U2 l_238 = {{4294967289UL,{8L},0xA422D8A0L}};
        int l_239 = 1L;
        union U2 l_269 = {{0x7B014ADFL,{0x49L},-1L}};
        l_239 = (((func_24(l_238, g_91) < l_235.f1.f0) | p_62) > ((p_63 >= p_62) || l_235.f1.f0));
        for (l_238.f0.f1.f0 = 0; (l_238.f0.f1.f0 == (-8)); l_238.f0.f1.f0 = safe_sub_func_uint8_t_u_u(l_238.f0.f1.f0, 2))
        {
            unsigned char l_243 = 1UL;
            struct S1 l_254 = {4294967292UL,{0L},0xD86996B2L};
            int l_255 = 0x341D8F6AL;
            union U2 l_262 = {{0x1CF85E0DL,{0x63L},0x7C4FD434L}};
            l_243++;
            for (g_102 = 7; (g_102 != (-28)); g_102 = safe_sub_func_int32_t_s_s(g_102, 2))
            {
                struct S0 l_248 = {0x11L};
                union U2 l_261 = {{0xA7637066L,{4L},0x1D09A1BDL}};
                unsigned short l_282 = 65535UL;
                g_87 = l_248;
                for (g_91.f0.f1.f0 = 0; (g_91.f0.f1.f0 >= (-11)); g_91.f0.f1.f0--)
                {
                    int l_253 = 0x32987EEEL;
                    union U2 l_260 = {{0xF2A3873CL,{-4L},9L}};
                    union U2 l_265 = {{1UL,{0x6CL},0L}};
                    l_255 ^= (safe_lshift_func_int16_t_s_u(((g_233 > ((g_198.f0 , ((l_248.f0 >= l_253) ^ (l_254 , (g_91 , 6UL)))) || l_254.f2)) , ((g_198.f0 > g_91.f0.f2) && p_60)), 10));
                    if ((safe_div_func_int8_t_s_s((func_24(l_260, l_260) | 0UL), func_24(l_261, l_262))))
                    {
                        union U2 l_266 = {{0UL,{0x92L},0x4C427817L}};
                        int l_270 = (-1L);
                        l_270 &= (g_87.f0 != (safe_sub_func_uint32_t_u_u(func_24(l_265, l_266), (safe_mul_func_int16_t_s_s(func_24(l_269, g_91), g_91.f0.f1.f0)))));
                        if (g_233)
                            continue;
                    }
                    else
                    {
                        union U2 l_281 = {{4294967291UL,{0L},0x23A1A752L}};
                        unsigned l_283 = 0xE829FDF1L;
                        --g_272;
                        l_282 = (((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((func_24(g_91, l_261) <= 0L), ((-3L) > (0xBE73AF67L <= ((((l_261.f0.f0 ^ func_24(g_91, l_281)) || p_60) <= p_62) && p_61))))), g_84)) & 5L) || l_235.f1.f0);
                        l_283++;
                    }
                    l_260.f0.f2 = p_61;
                    l_261.f0.f2 = g_272;
                }
            }
        }
        if (p_62)
        {
            short l_286 = 0xE1F0L;
            int l_287 = 0x7356A93CL;
            int l_304 = 0x77308337L;
            l_242 = (l_242 & l_286);
            l_287 ^= l_238.f0.f2;
            l_287 = (g_219.f1.f0 != (l_288 , 247UL));
            l_304 |= (safe_div_func_int32_t_s_s(((+func_64((l_238.f0.f0 , ((safe_rshift_func_uint16_t_u_u(g_207.f0, l_293)) | ((l_235.f2 ^ ((safe_mod_func_int16_t_s_s((1L | p_61), (safe_div_func_int16_t_s_s((0x89L ^ (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(func_64(l_287, g_2, g_91.f0, l_235, p_61), g_207.f0)), 7)), 0xD43D4350L))), p_60)))) ^ 3UL)) < 65532UL))), g_193, l_269.f0, g_219, l_269.f0.f2)) > 2UL), p_60));
        }
        else
        {
            --g_306;
        }
        l_242 |= ((((g_84 & ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((func_24(l_315, l_238) && g_87.f0) < ((g_193 || ((safe_lshift_func_int8_t_s_s(l_239, 7)) | (safe_unary_minus_func_int16_t_s((func_24(l_269, g_91) && 0x8BL))))) <= l_319)) , 0x6DL), l_235.f1.f0)), p_62)) == g_233)) && l_288.f0) | 5L) >= (-2L));
    }
    return g_207;

    }







static short func_64(unsigned char p_65, char p_66, struct S1 p_67, struct S1 p_68, unsigned char p_69)
{
    union U4 l_223 = {0x331B9385L};
    union U2 l_224 = {{0x2C455D1EL,{0x57L},3L}};
    unsigned char l_225 = 0x9BL;
    g_91.f0.f2 = (safe_sub_func_uint32_t_u_u((1L || (!g_91.f0.f0)), (((p_68.f2 | (g_91 , p_66)) & ((func_24((l_223 , g_91), l_224) , l_225) > p_67.f1.f0)) > 0xA1L)));
    p_68.f2 = l_224.f0.f0;
    g_233 |= ((((g_91.f0.f0 && (safe_rshift_func_uint8_t_u_u(func_24(l_224, l_224), 3))) && (safe_mul_func_uint8_t_u_u(((g_219.f1 , (func_74(func_74(p_68.f2, (safe_unary_minus_func_int16_t_s(func_74(p_67.f2, g_106, (safe_div_func_int32_t_s_s(0x55672CA5L, g_87.f0))))), g_219.f0), g_207.f1, l_224.f0.f2) , 1UL)) && g_106), l_224.f0.f1.f0))) & g_219.f2) & l_223.f0);
    return l_223.f1;
}







static unsigned char func_74(short p_75, unsigned p_76, const unsigned char p_77)
{
    struct S0 l_88 = {-6L};
    union U2 l_92 = {{4UL,{-1L},0x811D020AL}};
    int l_103 = (-1L);
    int l_146 = 0x4209ED79L;
    union U4 l_181 = {1L};
    g_84 = p_76;
    for (p_76 = (-14); (p_76 >= 24); p_76 = safe_add_func_int8_t_s_s(p_76, 1))
    {
        unsigned l_109 = 4294967294UL;
        short l_144 = 0xB43BL;
        int l_145 = (-10L);
        int l_147 = (-1L);
        int l_148 = 0x1DBD4BE3L;
        struct S0 l_162 = {-1L};
        unsigned char l_163 = 0x4AL;
        union U4 l_196 = {1L};
        unsigned short l_214 = 65533UL;
        l_88 = g_87;
        if ((safe_sub_func_uint32_t_u_u(func_24(g_91, l_92), (g_91 , (safe_rshift_func_int8_t_s_s((-6L), 0))))))
        {
            int l_95 = 0x026EBB4DL;
            unsigned l_99 = 4294967295UL;
            int l_104 = (-1L);
            int l_107 = 0xC06FE6C8L;
            int l_108 = 0xD353AE79L;
            struct S1 l_129 = {4294967295UL,{0x2BL},0x660DC513L};
            union U2 l_133 = {{0xF039C001L,{-1L},8L}};
            unsigned short l_157 = 0x8AF3L;
            if (l_95)
            {
                struct S0 l_96 = {-1L};
                struct S1 l_114 = {0x6106A478L,{0xC2L},0x7E1152F5L};
                union U2 l_123 = {{0xD9968C90L,{0L},-1L}};
                union U2 l_128 = {{4294967295UL,{0xA5L},5L}};
                int l_156 = (-1L);
                g_87 = l_96;
                for (g_91.f0.f2 = 0; (g_91.f0.f2 < 27); g_91.f0.f2 = safe_add_func_uint16_t_u_u(g_91.f0.f2, 5))
                {
                    union U2 l_115 = {{0xBE97B5C1L,{-1L},0x5EFF0D54L}};
                    if (l_99)
                        break;
                    for (g_87.f0 = (-3); (g_87.f0 >= 22); g_87.f0 = safe_add_func_uint8_t_u_u(g_87.f0, 8))
                    {
                        short l_105 = 4L;
                        int l_116 = 0xF4FEF511L;
                        ++l_109;
                        l_92.f0.f2 = (safe_mod_func_int16_t_s_s(func_24(g_91, (l_114 , l_115)), func_24(g_91, l_115)));
                        l_116 = (0x98L != p_75);
                    }
                    if ((p_75 >= ((l_109 == l_95) && l_96.f0)))
                    {
                        l_108 &= (g_91.f0 , (l_103 != (((safe_div_func_int32_t_s_s(g_2, (g_91.f0.f2 ^ (!((p_75 | (-5L)) | (p_75 >= (-1L))))))) <= ((safe_rshift_func_uint16_t_u_s(g_2, 12)) & 1UL)) || p_76)));
                        g_102 = l_115.f0.f2;
                        g_87 = g_91.f0.f1;
                    }
                    else
                    {
                        union U2 l_124 = {{1UL,{0x08L},0x926BDC2DL}};
                        unsigned l_125 = 0x753CE469L;
                        l_107 &= ((safe_mul_func_uint16_t_u_u((0x99L && func_24(g_91, l_123)), 0x4345L)) || (func_24(l_124, l_92) , (~(((g_106 ^ 0xC9FE4BF8L) < l_125) & p_76))));
                        g_102 = (safe_lshift_func_uint8_t_u_s((l_128 , (func_24(g_91, g_91) , ((func_24(l_123, l_115) ^ l_109) & l_96.f0))), g_91.f0.f0));
                        l_129 = l_114;
                        return g_106;
                    }
                }
                for (l_123.f0.f1.f0 = (-7); (l_123.f0.f1.f0 == (-4)); l_123.f0.f1.f0++)
                {
                    unsigned short l_136 = 0xCEA3L;
                    int l_139 = 6L;
                    unsigned short l_140 = 0x9668L;
                    union U2 l_160 = {{1UL,{1L},0xF04045D3L}};
                    if (((((safe_unary_minus_func_int16_t_s(p_77)) || p_77) | p_77) != (((l_104 ^ func_24(g_91, l_133)) || p_76) > (safe_mul_func_int16_t_s_s((l_136 , g_2), g_91.f0.f0)))))
                    {
                        l_139 = (safe_rshift_func_uint8_t_u_u(255UL, g_87.f0));
                        l_128.f0.f2 |= g_84;
                        if (l_92.f0.f0)
                            break;
                        l_140 = (~(6UL > p_77));
                    }
                    else
                    {
                        struct S1 l_141 = {0x030B0025L,{-1L},0L};
                        l_129 = l_141;
                        g_102 &= ((p_75 , (safe_rshift_func_int8_t_s_s(0x13L, 2))) != g_91.f0.f1.f0);
                        if (l_109)
                            break;
                        g_149++;
                    }
                    l_128.f0.f2 ^= func_24(g_91, g_91);
                    for (l_144 = 0; (l_144 > (-3)); --l_144)
                    {
                        l_114.f2 ^= (g_106 > (safe_lshift_func_uint8_t_u_s((p_76 == (-1L)), l_96.f0)));
                        --l_157;
                        l_146 |= p_77;
                        l_145 ^= (!(l_139 ^ ((p_77 & p_76) < func_24(l_160, l_160))));
                    }
                    if (l_92.f0.f2)
                        continue;
                }
                l_103 ^= p_76;
            }
            else
            {
                union U2 l_168 = {{4294967293UL,{9L},0xAA9519D3L}};
                l_108 = (safe_unary_minus_func_uint16_t_u(p_75));
                g_87 = l_162;
                l_163--;
                g_91.f0.f2 = (l_92.f0.f1.f0 || (((safe_rshift_func_uint8_t_u_s(p_77, 0)) < func_24(l_168, g_91)) && (safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_91.f0.f1.f0 > 4294967295UL), 0xE9L)) > l_145), g_87.f0))));
            }
            if (p_75)
                continue;
            l_133.f0.f2 = (((g_91.f0.f0 != ((l_108 == ((((((g_91.f0.f2 && l_92.f0.f2) >= 0x7948L) || (safe_add_func_uint16_t_u_u(p_77, (((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_87.f0, ((safe_mul_func_uint8_t_u_u((l_181 , (l_92.f0 , l_163)), l_133.f0.f0)) , g_106))), l_92.f0.f1.f0)) | p_75) < l_133.f0.f0)))) < (-7L)) ^ g_91.f0.f1.f0) != (-8L))) <= p_77)) != p_76) > 1L);
            l_145 = l_181.f0;
        }
        else
        {
            union U2 l_182 = {{1UL,{1L},0x64D16729L}};
            union U2 l_197 = {{0xBE69E52EL,{0xD3L},-1L}};
            short l_212 = 1L;
            char l_213 = 0xA7L;
            g_91.f0.f2 = func_24(l_182, l_92);
            l_182.f0.f2 = (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(l_144, 2)) > ((func_24(((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_102, p_76)) >= ((((safe_add_func_int8_t_s_s((((-1L) & (g_193 ^ g_2)) | (safe_div_func_int16_t_s_s(g_91.f0.f2, 0xE975L))), ((l_196 , g_102) , p_76))) > g_87.f0) , 0x02L) & p_77)), p_76)) , l_92), l_197) != 0xCBL) != (-1L))) != l_162.f0), 1));
            g_91.f0.f1 = g_87;
            if ((g_198 , l_182.f0.f2))
            {
                l_103 = g_91.f0.f1.f0;
            }
            else
            {
                l_148 &= (((safe_sub_func_int8_t_s_s(p_77, (safe_rshift_func_uint16_t_u_u(l_146, (l_103 || (g_198.f0 <= p_75)))))) != 1L) || ((l_88.f0 , 0x7FL) | (g_91.f0.f1 , l_162.f0)));
                if (l_182.f0.f2)
                    continue;
                l_148 = ((safe_div_func_int32_t_s_s((g_207 , l_103), 0x06272B9DL)) >= (!(249UL & (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((g_87.f0 , l_197.f0.f1.f0), 2)), (+(l_212 != l_213)))))));
                l_92.f0.f2 ^= l_214;
            }
        }
    }
    g_91.f0.f2 = (safe_lshift_func_int8_t_s_s(func_24(((g_193 != (safe_div_func_uint32_t_u_u((l_88.f0 && (+l_146)), g_207.f1))) , l_92), l_92), 0));
    g_102 = func_24(l_92, l_92);
    return l_181.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_91.f0.f0, "g_91.f0.f0", print_hash_value);
    transparent_crc(g_91.f0.f1.f0, "g_91.f0.f1.f0", print_hash_value);
    transparent_crc(g_91.f0.f2, "g_91.f0.f2", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_219.f0, "g_219.f0", print_hash_value);
    transparent_crc(g_219.f1.f0, "g_219.f1.f0", print_hash_value);
    transparent_crc(g_219.f2, "g_219.f2", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_320.f0.f0, "g_320.f0.f0", print_hash_value);
    transparent_crc(g_320.f0.f1.f0, "g_320.f0.f1.f0", print_hash_value);
    transparent_crc(g_320.f0.f2, "g_320.f0.f2", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_546.f0.f0, "g_546.f0.f0", print_hash_value);
    transparent_crc(g_546.f0.f1.f0, "g_546.f0.f1.f0", print_hash_value);
    transparent_crc(g_546.f0.f2, "g_546.f0.f2", print_hash_value);
    transparent_crc(g_558.f0.f0, "g_558.f0.f0", print_hash_value);
    transparent_crc(g_558.f0.f1.f0, "g_558.f0.f1.f0", print_hash_value);
    transparent_crc(g_558.f0.f2, "g_558.f0.f2", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_653.f0, "g_653.f0", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
