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
   unsigned f1;
   short f2;
};


static unsigned char g_4 = 0x5CL;
static int g_34 = (-8L);
static int g_50 = 4L;
static int g_66 = 0x71010F19L;
static struct S0 g_82 = {0xD5L,0x1CA9286DL,0x497AL};
static int *g_83 = &g_66;
static struct S0 *g_101 = &g_82;
static struct S0 **g_100 = &g_101;
static unsigned char g_128 = 0x1AL;
static unsigned short g_175 = 0x9906L;
static unsigned g_177 = 0xAFDC658CL;
static char *g_179 = (void*)0;
static unsigned g_267 = 0xC9FDBBE0L;
static unsigned g_278 = 0x2B63680AL;
static unsigned char g_301 = 255UL;
static unsigned g_313 = 1UL;
static int g_324 = 0xD0BA7A7DL;
static struct S0 g_348 = {1L,0x48C7DDD2L,-3L};
static unsigned short **g_359 = (void*)0;
static int *g_368 = &g_324;
static int **g_367 = &g_368;
static unsigned short g_391 = 0x0CE9L;
static char **g_401 = &g_179;
static char ***g_400 = &g_401;
static int g_415 = (-7L);
static unsigned char g_431 = 1UL;
static short **g_603 = (void*)0;
static unsigned short g_604 = 5UL;
static short *g_623 = &g_82.f2;
static short **g_622 = &g_623;
static unsigned short *g_628 = &g_391;
static unsigned short **g_627 = &g_628;
static int g_672 = 0L;
static unsigned g_863 = 4294967294UL;



static int func_1(void);
static char func_11(char p_12, char p_13, unsigned p_14, unsigned p_15);
static int func_25(char p_26, unsigned short p_27, unsigned p_28, char p_29);
static unsigned short func_37(unsigned p_38);
static struct S0 func_39(unsigned char p_40);
static struct S0 * func_42(unsigned char p_43);
static struct S0 ** func_45(int * p_46, unsigned short p_47, unsigned char p_48);
static unsigned short func_59(int p_60, struct S0 ** p_61, struct S0 ** p_62, unsigned short p_63, char p_64);
static char func_73(unsigned p_74);
static int func_78(struct S0 ** p_79);
static int func_1(void)
{
    char l_20 = 0xDFL;
    unsigned l_853 = 0x46922789L;
    int l_855 = (-1L);
    int l_860 = 0L;
    struct S0 l_875 = {1L,1UL,-5L};
    int **l_892 = (void*)0;
    int ***l_891 = &l_892;
    int *l_900 = &g_66;
    if (((safe_mod_func_int32_t_s_s((g_4 & ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((0x39L | ((((safe_rshift_func_int16_t_s_u((func_11((+4L), ((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(l_20, 1)) <= ((+g_4) > g_4)) <= (l_20 , 0xFC9B996AL)), (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65533UL, 0xDBF4L)), g_4)))) > l_20), l_20, g_4) != g_4), 2)) >= l_20) < 0UL) | l_20)), l_20)) | l_20), g_4)) <= 0x10L)), g_4)) && l_853))
    {
        unsigned *l_854 = &g_313;
        l_855 = g_34;
    }
    else
    {
        char l_856 = 0xC2L;
        short *l_859 = &g_348.f2;
        int l_873 = 0xA680D385L;
        int l_874 = (-1L);
        struct S0 **l_888 = &g_101;
        int ***l_893 = (void*)0;
        if (l_856)
        {
            int **l_861 = &g_83;
            struct S0 l_862 = {0xB6L,4294967290UL,0x2846L};
            (*l_861) = &l_855;
            (**g_100) = l_862;
            return g_863;
        }
        else
        {
            char *l_869 = &l_20;
            int l_876 = (-1L);
            int *l_899 = &g_50;
            for (g_672 = 0; (g_672 <= (-25)); --g_672)
            {
                unsigned l_866 = 0x40FE52DCL;
                int *l_872 = (void*)0;
                int l_879 = 0xFE15CF8FL;
                int l_880 = 0L;
                char ****l_882 = &g_400;
                char *****l_881 = &l_882;
                struct S0 ***l_894 = (void*)0;
                struct S0 ***l_895 = (void*)0;
                struct S0 ***l_896 = &g_100;
                int l_897 = (-10L);
                int l_898 = 4L;
                l_873 = ((g_66 || l_866) ^ func_73(((safe_lshift_func_uint8_t_u_u(0xA8L, 3)) , (((l_860 | ((0UL && 0xDB93L) , ((((l_869 != ((safe_sub_func_int32_t_s_s((!l_853), (g_82.f1 = (0x11L < l_856)))) , l_869)) != (**g_622)) ^ g_604) || l_855))) ^ 0L) > l_20))));
                if ((((*l_881) = (((l_874 == (**g_622)) && (l_856 == (((safe_rshift_func_int16_t_s_s((*g_623), l_879)) <= l_880) < 0xF97AL))) , (void*)0)) == &g_400))
                {
                    g_83 = &l_873;
                }
                else
                {
                    for (l_860 = 0; (l_860 != (-24)); l_860 = safe_sub_func_uint8_t_u_u(l_860, 3))
                    {
                        int *l_885 = &l_876;
                        (*l_885) = l_875.f2;
                    }
                    (**g_100) = (**g_100);
                }
                (***l_896) = (**g_100);
                if (l_898)
                    continue;
            }
            (*g_101) = (*g_101);
            l_899 = &l_876;
        }
        l_900 = &g_50;
    }
    g_83 = &g_415;
    return (*g_83);
}







static char func_11(char p_12, char p_13, unsigned p_14, unsigned p_15)
{
    unsigned short l_30 = 0UL;
    int *l_33 = &g_34;
    int l_35 = (-1L);
    char *l_813 = &g_82.f0;
    char ***l_817 = &g_401;
    struct S0 **l_850 = &g_101;
    if (func_25(l_30, (!((safe_add_func_uint32_t_u_u(7UL, (l_35 = ((*l_33) = p_12)))) <= ((safe_unary_minus_func_uint16_t_u(func_37(g_4))) & g_604))), ((((safe_add_func_int16_t_s_s((4L || p_15), p_15)) >= p_14) >= g_4) , p_13), l_30))
    {
        unsigned *l_809 = (void*)0;
        char **l_810 = &g_179;
        char *l_812 = &g_348.f0;
        char **l_811 = &l_812;
        char **l_814 = &l_813;
        struct S0 **l_815 = &g_101;
        int l_816 = 1L;
        char ****l_818 = &l_817;
        short l_821 = 3L;
        (*l_33) = (((p_14 = g_348.f0) != (func_59((((*l_811) = ((*l_810) = &p_12)) == (g_278 , ((*l_814) = l_813))), &g_101, l_815, ((*g_628) = l_816), p_12) ^ l_816)) || 0x3BB6L);
        if ((&g_401 != ((*l_818) = l_817)))
        {
            unsigned char l_825 = 0xA0L;
            if ((*l_33))
            {
                (*l_33) = ((p_15 || ((*g_623) = ((~(g_175 < (((((safe_lshift_func_uint16_t_u_u((+p_12), 2)) , &g_83) == &g_83) && p_13) && p_14))) < (l_821 && ((**l_815) , (*g_628)))))) <= p_14);
            }
            else
            {
                int **l_822 = &l_33;
                (*l_822) = &l_35;
                for (l_35 = 0; (l_35 > 6); l_35++)
                {
                    (*l_822) = &l_816;
                }
                (*g_101) = (**g_100);
                (*l_33) = l_825;
            }
        }
        else
        {
            short l_832 = 0x368AL;
            short *l_835 = &l_832;
            short *l_836 = &l_821;
            int *l_837 = &g_50;
            (*l_837) = (l_821 || (g_431 < (l_816 = (((*l_813) = p_13) > (safe_mod_func_int16_t_s_s(((g_415 != ((((**l_810) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((**g_622), ((*l_836) = ((l_832 , ((*l_835) = (((*g_628) = ((*l_33) = (safe_add_func_uint16_t_u_u(p_15, ((*g_628) & (*g_623)))))) < (*g_623)))) <= p_15)))), p_12))) , 0x8CC5L) && (*g_628))) & p_15), p_14))))));
            return l_821;
        }
    }
    else
    {
        unsigned *l_838 = &g_348.f1;
        int l_839 = 0x0AD0ECE5L;
        int l_851 = 0xF505A122L;
        (*l_33) = ((((*g_623) | p_12) ^ l_839) < 0L);
        for (g_348.f0 = 29; (g_348.f0 > (-12)); --g_348.f0)
        {
            unsigned short l_846 = 0x65ECL;
            unsigned l_849 = 4294967294UL;
            int *l_852 = &g_50;
            (*l_33) = p_14;
            l_851 = func_59(((*l_33) = (((*g_628) = (0x82378DD7L != ((p_14 < (safe_sub_func_int16_t_s_s(p_14, 0L))) | (-1L)))) && (safe_rshift_func_uint8_t_u_s(((((l_846 == (~p_12)) , (safe_add_func_int8_t_s_s(l_846, ((((l_846 > l_839) , p_13) <= (**g_622)) | (*g_623))))) < p_13) && l_849), p_14)))), l_850, &g_101, l_849, l_851);
            g_83 = l_852;
        }
    }
    return p_15;
}







static int func_25(char p_26, unsigned short p_27, unsigned p_28, char p_29)
{
    unsigned short l_613 = 0x5F80L;
    int l_616 = 1L;
    unsigned short **l_624 = (void*)0;
    struct S0 l_645 = {1L,1UL,-1L};
    int l_699 = 6L;
    int *l_700 = &g_66;
    unsigned char *l_705 = (void*)0;
    unsigned char *l_706 = &g_431;
    short l_751 = 3L;
    short l_760 = 4L;
    struct S0 **l_764 = (void*)0;
    unsigned l_787 = 0UL;
    int **l_790 = &g_83;
    int ***l_789 = &l_790;
    short l_798 = 0x285AL;
lbl_665:
    l_616 = ((safe_lshift_func_uint8_t_u_u(((7L & l_613) , g_175), 3)) || (safe_lshift_func_int16_t_s_s(l_613, ((void*)0 == (*g_367)))));
    if (((safe_rshift_func_int8_t_s_u((l_616 = p_28), 1)) <= 0xFC88879EL))
    {
        int l_619 = 8L;
        unsigned *l_620 = &g_177;
        short ***l_621 = &g_603;
        unsigned short ***l_625 = (void*)0;
        unsigned short ***l_626 = &g_359;
        int l_631 = (-7L);
        int **l_637 = &g_83;
        int **l_668 = &g_368;
        g_83 = &l_616;
        if (((((((0xDE33565DL <= (l_616 | 0L)) , (g_627 = (((*l_620) = (l_619 || 2L)) , (((((*l_621) = (void*)0) == g_622) > g_278) , ((*l_626) = l_624))))) == (void*)0) , p_27) ^ g_348.f0) >= 0x76L))
        {
            unsigned l_671 = 4294967295UL;
            for (g_415 = 4; (g_415 <= 8); ++g_415)
            {
                int **l_636 = &g_83;
                int ***l_638 = &l_637;
                short *l_650 = &g_82.f2;
                if (((l_631 = 0x65L) >= (safe_sub_func_int32_t_s_s((*g_83), (safe_sub_func_int16_t_s_s(((((((*g_623) , l_636) != ((*l_638) = l_637)) , (*g_83)) ^ (safe_mod_func_uint32_t_u_u(g_4, (safe_mod_func_int16_t_s_s((g_348.f2 != (l_616 , l_619)), (*g_628)))))) , 8L), p_26))))))
                {
                    short *l_651 = &l_645.f2;
                    int l_664 = 0x88F74F56L;
                    for (g_324 = (-29); (g_324 != 2); g_324++)
                    {
                        short *l_652 = &g_348.f2;
                        int l_663 = 1L;
                    }
                    if (p_28)
                        break;
                }
                else
                {
                    int *l_670 = &l_631;
                    for (l_645.f2 = (-2); (l_645.f2 == (-5)); l_645.f2 = safe_sub_func_int16_t_s_s(l_645.f2, 7))
                    {
                        int ***l_669 = &g_367;
                        (*g_83) = (7UL != (l_668 == ((*l_669) = &g_368)));
                        (*l_636) = l_670;
                        if (l_645.f2)
                            continue;
                        (**l_636) = (*g_83);
                    }
                    (**g_100) = (*g_101);
                    if (l_671)
                        break;
                    if (g_672)
                        break;
                }
                return p_28;
            }
            return p_28;
        }
        else
        {
            int l_681 = 8L;
            for (g_348.f1 = (-29); (g_348.f1 <= 40); ++g_348.f1)
            {
                unsigned short *l_682 = &l_613;
                int l_689 = 0xA62367ABL;
                unsigned char *l_692 = &g_128;
                if (g_391)
                    goto lbl_665;
                if ((*g_83))
                    break;
                (**l_637) = ((((*g_628) = (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*g_83), 6UL)), 3))) , 0x30289DCFL) ^ (((*l_682) = (((safe_rshift_func_int16_t_s_s(l_681, 15)) , l_645.f2) < ((*g_83) < func_73(l_613)))) , (0x45L == 0UL)));
                (**l_637) = (safe_mod_func_int32_t_s_s((*g_83), ((l_681 < (safe_add_func_uint32_t_u_u(1UL, (func_73(func_73(g_4)) || ((safe_add_func_uint32_t_u_u((((l_689 = 0xC89EL) != (((safe_sub_func_uint32_t_u_u(((((*l_692) = l_681) && (safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((((**g_622) == 9L) < l_645.f2), p_27)) ^ 0x37D235A6L), 0xA11204BBL))) >= (**g_622)), (-1L))) | (**g_622)) , l_613)) > (*g_83)), 1UL)) || 0UL))))) && (*g_83))));
            }
        }
        (*g_101) = ((**l_637) , l_645);
    }
    else
    {
        for (p_28 = 0; (p_28 != 54); p_28 = safe_add_func_uint8_t_u_u(p_28, 9))
        {
            if (l_699)
                break;
        }
    }
    l_700 = &g_50;
    if ((((safe_sub_func_uint16_t_u_u(((*g_628) = (0L != (safe_add_func_int16_t_s_s(0xD98EL, (((*l_706) = func_73(p_28)) > (((p_26 , g_4) | (((*l_700) || ((((*l_700) && (((*l_700) = 254UL) <= p_28)) , p_29) , (*g_628))) >= p_29)) && 0xCDL)))))), p_28)) , (void*)0) != (void*)0))
    {
        return p_27;
    }
    else
    {
        char l_707 = 0x8CL;
        unsigned *l_712 = &g_82.f1;
        unsigned *l_713 = &l_645.f1;
        unsigned short *l_718 = &g_604;
        unsigned short **l_735 = (void*)0;
        int *l_753 = &g_415;
        unsigned char l_781 = 0x47L;
        short **l_796 = &g_623;
        (*l_700) = ((((**g_622) = (l_707 | ((**g_622) & ((*g_628) = ((safe_add_func_uint8_t_u_u(g_267, (safe_rshift_func_uint8_t_u_u(l_707, 1)))) >= p_26))))) >= (p_27 == ((*l_713) = (((((((*l_712) = (((p_26 , (((((*l_700) & ((0x831DL ^ l_707) != (*l_700))) >= (*l_700)) >= p_29) != 0UL)) ^ g_177) & 0x9799L)) , p_27) , 0x68L) == l_707) , 0x32ECL) && 0x1A0AL)))) , p_26);
        if (g_82.f2)
            goto lbl_722;
        for (g_34 = 0; (g_34 != 7); g_34++)
        {
            struct S0 **l_719 = (void*)0;
            struct S0 **l_720 = (void*)0;
            struct S0 **l_721 = &g_101;
            (*l_721) = func_42((safe_sub_func_int8_t_s_s((l_718 != &p_27), l_707)));
        }
lbl_722:
        (*g_400) = (void*)0;
        if ((g_50 = (((void*)0 == &p_27) >= p_27)))
        {
            int *l_723 = &l_616;
            l_723 = l_723;
            if (((safe_rshift_func_uint16_t_u_u(p_27, 11)) < (*l_723)))
            {
                unsigned short l_726 = 0x3751L;
                return l_726;
            }
            else
            {
                int *l_727 = &g_34;
                int **l_728 = &g_83;
                struct S0 l_729 = {0xD9L,0xC32F80F0L,0x4C55L};
                struct S0 *l_730 = &l_729;
                (*l_728) = l_727;
                (*l_730) = ((**g_100) = l_729);
                (*l_728) = &g_415;
            }
            (*g_83) = ((*l_700) = (safe_lshift_func_uint8_t_u_u(g_324, (safe_sub_func_int16_t_s_s((*g_623), (l_712 != l_700))))));
            if (((~((((l_735 != &l_718) == (*l_700)) | (safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s(((*l_723) = 1L), (func_73((*l_700)) < (safe_unary_minus_func_int8_t_s(p_27))))) , (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((*g_83) = ((*l_723) = (p_26 < 0xCCL))) , 0x2AL), (*l_700))) > 65527UL), (*l_700))))))) > (*l_700))) >= p_29))
            {
                struct S0 ***l_746 = &g_100;
                (*l_723) = ((((**g_367) = ((safe_sub_func_uint32_t_u_u(g_604, (((*l_706) = g_267) < p_26))) , (-1L))) , 0xB226853BL) <= 0xF37576D8L);
            }
            else
            {
                int *l_752 = &g_50;
                int l_765 = 1L;
                l_752 = &l_616;
                l_753 = l_713;
                if ((*g_83))
                {
                    unsigned l_761 = 0UL;
                    int **l_762 = (void*)0;
                    int **l_763 = &l_723;
                    (*l_723) = (((((p_26 | (**g_622)) , (*g_83)) < (!(safe_add_func_uint16_t_u_u(65531UL, ((((*l_700) = (((*l_706) = (((safe_add_func_uint16_t_u_u((((*l_723) , (1UL == g_348.f1)) | ((safe_sub_func_int8_t_s_s(p_27, (0x83867358L <= p_27))) >= 0L)), 7L)) , (-3L)) | p_29)) , l_760)) <= l_761) < p_29))))) & p_26) || p_28);
                    (*l_753) = ((void*)0 == &g_313);
                    (*l_763) = l_723;
                }
                else
                {
                    unsigned short l_768 = 0xF363L;
                    if (((l_765 , (((!((g_415 | (safe_add_func_int16_t_s_s(((*l_700) = l_768), (safe_lshift_func_int16_t_s_u(((*g_623) = (g_82.f2 , p_27)), 8))))) == (*l_723))) < p_26) && ((((void*)0 != l_705) ^ (*l_700)) & l_768))) | 0x8A889526L))
                    {
                        int **l_771 = &l_723;
                        (*l_752) = p_29;
                        (*l_771) = &g_50;
                    }
                    else
                    {
                        int **l_772 = &l_723;
                        struct S0 *l_773 = &l_645;
                        (*l_772) = l_723;
                        (*l_773) = func_39((*l_753));
                    }
                }
            }
        }
        else
        {
            int *l_776 = &g_50;
lbl_779:
            (*l_753) = g_50;
            for (g_415 = (-28); (g_415 >= 24); g_415 = safe_add_func_uint16_t_u_u(g_415, 4))
            {
                int l_782 = 0xC8DF5154L;
                int ***l_792 = &l_790;
                int l_793 = 0x7CF0D0CCL;
                short *l_797 = &l_645.f2;
                l_776 = (void*)0;
                for (g_301 = (-25); (g_301 == 26); g_301 = safe_add_func_int16_t_s_s(g_301, 8))
                {
                    int **l_780 = &g_83;
                    unsigned char *l_788 = &l_781;
                    int ****l_791 = &l_789;
                    (*l_700) = p_27;
                    if (l_707)
                        goto lbl_779;
                    (*l_780) = l_713;
                    l_793 = (((l_781 , (l_782 , (p_26 , (*g_628)))) && (((*l_791) = (((safe_sub_func_uint16_t_u_u(((*g_628) = ((+((**l_780) = (*g_83))) < (((*l_712) = 8UL) & g_82.f0))), (safe_lshift_func_uint8_t_u_u(((*l_788) = ((*l_706) = (l_787 > p_29))), 6)))) , (*l_753)) , l_789)) != l_792)) , 0L);
                }
                (*l_700) = ((**g_100) , (func_73((func_73(((*l_712) = (((safe_sub_func_int16_t_s_s(((((*g_623) = p_26) , l_796) != &g_623), ((*l_797) = (p_27 > p_27)))) < (((6L || (((*l_700) ^ (((0UL <= (-2L)) <= 0x485CL) <= (*l_753))) || p_28)) <= l_798) < p_29)) , g_278))) , 4294967290UL)) | (*l_700)));
            }
            if ((safe_rshift_func_int8_t_s_s((*l_753), (safe_sub_func_uint32_t_u_u(p_28, (p_27 > p_27))))))
            {
                int *l_805 = &g_415;
                for (l_707 = 26; (l_707 != 19); l_707 = safe_sub_func_uint16_t_u_u(l_707, 3))
                {
                    (*l_700) = ((void*)0 == &g_623);
                }
                l_753 = l_805;
                l_776 = l_712;
            }
            else
            {
                unsigned short ***l_808 = &l_624;
                for (g_672 = (-28); (g_672 >= 25); g_672++)
                {
                    (*l_753) = 1L;
                    (*l_700) = (((void*)0 != l_776) != (*g_628));
                }
                (*l_808) = &g_628;
                return p_29;
            }
        }
    }
    return (*l_700);
}







static unsigned short func_37(unsigned p_38)
{
    unsigned short l_41 = 6UL;
    unsigned *l_569 = (void*)0;
    unsigned *l_570 = (void*)0;
    unsigned *l_571 = &g_82.f1;
    struct S0 l_578 = {0xCCL,0x5B84161EL,4L};
    unsigned l_601 = 0x417E2C75L;
    int l_602 = 1L;
    struct S0 *l_608 = &l_578;
    if ((g_4 , ((((((p_38 , ((func_39(l_41) , (((safe_sub_func_uint8_t_u_u((((p_38 = ((*l_571) = g_82.f1)) <= ((l_41 < l_41) < 0x724BL)) , 0x56L), g_348.f0)) >= 0x7F13L) , l_41)) , 1L)) && 0x7766L) ^ l_41) && 0xD4F3L) <= (-10L)) ^ l_41)))
    {
        int l_576 = 0x5AF13EE5L;
        unsigned short *l_577 = &g_391;
        int **l_579 = &g_83;
        (*g_101) = l_578;
        (*l_579) = l_571;
        for (g_82.f1 = (-20); (g_82.f1 <= 4); g_82.f1++)
        {
            unsigned char l_599 = 0x7BL;
            int *l_605 = (void*)0;
            int *l_606 = &g_50;
            for (g_348.f0 = 0; (g_348.f0 >= 9); g_348.f0 = safe_add_func_uint16_t_u_u(g_348.f0, 3))
            {
                struct S0 l_596 = {-9L,0x608AE73EL,0x8A54L};
                char *l_597 = &l_596.f0;
                unsigned char *l_598 = &g_128;
                int *l_600 = &g_50;
                (*l_600) = (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((g_301 != (l_599 = ((0L > (safe_mod_func_uint8_t_u_u(p_38, p_38))) <= (((*l_598) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((-1L), (l_596 , (g_82.f0 = ((*l_597) = (p_38 > p_38)))))), (~(-1L))))) & l_596.f1)))), p_38)) | p_38), g_267));
                l_602 = (l_601 = p_38);
            }
            (*l_606) = (((((p_38 , ((g_4 != l_599) >= (p_38 , ((*g_368) , p_38)))) == p_38) == ((void*)0 == g_603)) == g_177) , g_604);
        }
    }
    else
    {
        int **l_607 = &g_83;
        (*l_607) = &g_415;
    }
    (*g_101) = l_578;
    (*l_608) = func_39(p_38);
    return l_578.f1;
}







static struct S0 func_39(unsigned char p_40)
{
    unsigned short l_532 = 8UL;
    char **l_555 = &g_179;
    struct S0 l_566 = {0L,3UL,-8L};
    if ((g_4 , (+0xF997EC53L)))
    {
        unsigned l_44 = 0x1A932DA3L;
        struct S0 **l_529 = &g_101;
        (*l_529) = func_42(l_44);
        return (**g_100);
    }
    else
    {
        struct S0 *l_531 = &g_82;
        struct S0 **l_530 = &l_531;
        struct S0 l_533 = {0x13L,0x07E92FE9L,0L};
        int *l_540 = &g_50;
        int l_560 = 0x21BC7396L;
        (*l_530) = ((*g_100) = (*g_100));
        if (l_532)
        {
            l_533 = ((*g_101) = (**g_100));
        }
        else
        {
            char *l_536 = (void*)0;
            char *l_537 = &l_533.f0;
            int *l_542 = &g_66;
            struct S0 l_554 = {0xC4L,0UL,-1L};
            struct S0 **l_565 = &l_531;
            (*g_83) = (safe_add_func_int8_t_s_s(((*l_537) = p_40), l_533.f2));
            for (g_313 = 0; (g_313 <= 17); g_313++)
            {
                int **l_541 = &g_83;
                struct S0 ***l_553 = &g_100;
                unsigned short *l_556 = (void*)0;
                (*l_541) = l_540;
                l_542 = (*l_541);
                if ((!(((func_73(((**l_541) | (g_175 = (!((safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_40, g_177)), (-6L))) | ((**l_541) , (safe_rshift_func_uint8_t_u_u(((&g_101 == ((*l_553) = &g_101)) , (l_554 , (((65535UL > 3L) || p_40) && p_40))), 4)))) , l_555) != l_555), (*l_540))) >= p_40) == p_40), 5L)) <= (**l_541)))))) <= p_40) && (*l_540)) != l_532)))
                {
                    int *l_561 = &g_50;
                    short l_562 = 1L;
                    (*l_541) = &g_50;
                    (*l_541) = &g_50;
                    for (g_391 = 0; (g_391 == 31); ++g_391)
                    {
                        int *l_559 = (void*)0;
                        struct S0 ***l_563 = (void*)0;
                        struct S0 ***l_564 = &l_530;
                        g_83 = (p_40 , (void*)0);
                        (*l_542) = ((p_40 || (((func_73((p_40 ^ 0xD80E3966L)) < (*l_542)) ^ ((l_560 = p_40) , (p_40 < ((*l_542) & (((*l_564) = func_45(l_561, g_391, l_562)) != l_565))))) , g_267)) ^ g_128);
                    }
                }
                else
                {
                    (*g_101) = (**l_530);
                }
            }
        }
    }
    return l_566;
}







static struct S0 * func_42(unsigned char p_43)
{
    int *l_49 = &g_50;
    int *l_65 = &g_66;
    struct S0 *l_81 = &g_82;
    struct S0 **l_80 = &l_81;
    unsigned short *l_429 = &g_391;
    struct S0 ***l_518 = &g_100;
    char ****l_521 = &g_400;
    char ****l_523 = &g_400;
    char *****l_522 = &l_523;
    (*l_518) = func_45(l_49, ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_50, (((safe_rshift_func_uint16_t_u_s(func_59(((((*l_65) = (*l_49)) , (-7L)) , (safe_rshift_func_uint8_t_u_u(((((((*l_65) = (safe_rshift_func_int8_t_s_s(0xA6L, (safe_sub_func_uint32_t_u_u((!(((func_73(((g_4 == (((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((*l_429) = (func_78(l_80) & (safe_unary_minus_func_int8_t_s(((+((p_43 < 7L) , 0xB064L)) == (*l_49)))))))), p_43)) < g_50) >= 3L)) , p_43)) != 0xD5L) != (*l_49)) & g_301)), 4294967287UL))))) | p_43) , (*l_65)) > g_415) , g_431), g_301))), &g_101, &g_101, p_43, p_43), 11)) , 3UL) < (-3L)))), 4294967286UL)), 0x39FFL)) != (-1L)), g_301);
    (*l_65) = (((safe_rshift_func_uint8_t_u_u(p_43, 5)) | p_43) ^ ((*l_49) = (+((func_73((*l_65)) , l_521) != ((*l_522) = l_521)))));
    if (p_43)
    {
        int *l_527 = &g_66;
        int **l_528 = &l_527;
        for (g_324 = 0; (g_324 != 1); g_324 = safe_add_func_uint32_t_u_u(g_324, 8))
        {
            unsigned l_526 = 4294967289UL;
            if (l_526)
                break;
        }
        (*l_528) = l_527;
        (*l_528) = &g_66;
    }
    else
    {
        (*l_49) = (~((p_43 < g_267) != 0x4FD4113BL));
    }
    (*l_49) = p_43;
    return (*g_100);
}







static struct S0 ** func_45(int * p_46, unsigned short p_47, unsigned char p_48)
{
    return &g_101;
}







static unsigned short func_59(int p_60, struct S0 ** p_61, struct S0 ** p_62, unsigned short p_63, char p_64)
{
    int l_436 = 0xDFCB4B0FL;
    struct S0 **l_439 = (void*)0;
    unsigned l_440 = 0UL;
    unsigned short *l_441 = (void*)0;
    unsigned short *l_442 = &g_391;
    unsigned short *l_447 = &g_175;
    int l_463 = 8L;
    int l_485 = 0L;
    unsigned char *l_506 = &g_301;
    int **l_514 = &g_83;
    int *l_515 = &l_485;
    int *l_517 = (void*)0;
    int **l_516 = &l_517;
    (**g_100) = (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((l_436 & ((*l_442) = (safe_add_func_uint8_t_u_u((l_436 , (l_440 || 0x1DFCF9E4L)), l_440)))), ((*l_447) = (safe_lshift_func_int8_t_s_s(p_60, ((safe_rshift_func_int16_t_s_u(((void*)0 == (*g_400)), p_63)) && 0UL)))))), g_431)) < 1UL) , (*g_101));
    (*g_101) = (*g_101);
    if (g_313)
    {
        unsigned l_450 = 7UL;
        char l_472 = (-1L);
        int *l_475 = &g_66;
        char **l_489 = &g_179;
        unsigned char l_496 = 3UL;
        for (g_391 = 0; (g_391 <= 38); ++g_391)
        {
            int *l_451 = (void*)0;
            int *l_452 = &g_415;
            int **l_487 = &l_451;
            int **l_488 = &l_452;
            unsigned char *l_497 = &g_431;
            int *l_498 = &l_463;
            (*l_452) = (g_82.f2 > l_450);
            for (g_431 = 0; (g_431 <= 43); g_431 = safe_add_func_uint8_t_u_u(g_431, 2))
            {
                int **l_486 = &l_475;
                (**p_62) = (**g_100);
                for (g_324 = 0; (g_324 < (-8)); g_324 = safe_sub_func_uint8_t_u_u(g_324, 1))
                {
                    short *l_471 = &g_348.f2;
                    char *l_473 = &g_82.f0;
                    unsigned l_474 = 4294967295UL;
                    short *l_484 = &g_82.f2;
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-1L), 0)), (safe_add_func_uint32_t_u_u(4294967295UL, 4UL)))))
                    {
                        int **l_464 = &l_452;
                        (*l_452) = l_440;
                        l_463 = ((*l_452) = (*l_452));
                        (*l_464) = &p_60;
                        (*l_464) = &p_60;
                    }
                    else
                    {
                        if (p_63)
                            break;
                        if (g_128)
                            continue;
                    }
                    (*l_452) = g_175;
                    if (((+((*l_473) = (((+((*g_101) , g_431)) , (safe_add_func_int16_t_s_s(((*l_471) = (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_82.f0, g_278)), ((-7L) && p_63))) <= 0xDA27L) == (~g_177))), (l_472 , 0x0BF1L)))) != p_60))) , l_474))
                    {
                        int **l_476 = &l_475;
                        if (l_450)
                            break;
                        (*l_476) = l_475;
                    }
                    else
                    {
                        int **l_477 = &l_452;
                        (*l_477) = &p_60;
                        g_83 = (*l_477);
                        return l_440;
                    }
                    (*l_452) = func_73((l_485 = (((safe_rshift_func_uint16_t_u_s((g_278 || 0x55D4L), 4)) <= (safe_rshift_func_uint16_t_u_s((p_60 ^ g_177), 0))) < (safe_lshift_func_int16_t_s_u((l_463 = ((*l_484) = ((*l_471) = (l_474 > g_348.f2)))), 3)))));
                }
                (*l_486) = &g_50;
            }
            (*l_488) = ((*l_487) = l_452);
            (*l_498) = ((((void*)0 == l_489) , (safe_mod_func_uint16_t_u_u((g_348.f0 < l_463), 0xD0BCL))) && (p_63 <= (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(l_485, ((*l_497) = (((*l_451) = ((g_348.f1 > (**l_488)) <= l_496)) & g_82.f2)))) <= 1UL), (*l_475)))));
        }
    }
    else
    {
        int **l_511 = (void*)0;
        int **l_512 = (void*)0;
        int **l_513 = &g_83;
        for (g_82.f1 = 0; (g_82.f1 >= 11); g_82.f1 = safe_add_func_int8_t_s_s(g_82.f1, 7))
        {
            int l_503 = 0L;
            int *l_510 = &l_485;
            if (l_440)
            {
                return g_82.f0;
            }
            else
            {
                int *l_509 = &l_485;
                (*l_509) = (safe_sub_func_int32_t_s_s(l_503, (p_64 , ((**g_100) , (0UL | ((safe_sub_func_int16_t_s_s((&g_4 == l_506), ((+(-1L)) ^ (!(+((safe_rshift_func_int8_t_s_s(0x85L, p_60)) <= p_63)))))) != 0x73DCL))))));
            }
            (*l_510) = p_63;
            return l_436;
        }
        (*l_513) = &l_485;
        (*l_513) = &p_60;
    }
    (*l_516) = (l_515 = ((*l_514) = &l_463));
    return p_63;
}







static char func_73(unsigned p_74)
{
    struct S0 l_430 = {0x0AL,0x77B25053L,3L};
    (**g_100) = l_430;
    return p_74;
}







static int func_78(struct S0 ** p_79)
{
    char l_86 = (-1L);
    char l_99 = 0x33L;
    struct S0 *l_102 = (void*)0;
    int *l_105 = (void*)0;
    struct S0 l_224 = {-9L,0UL,8L};
    unsigned short *l_237 = &g_175;
    char **l_244 = &g_179;
    int *l_318 = &g_66;
    int **l_319 = &g_83;
    char l_341 = 0x58L;
    unsigned l_370 = 0xEBF955F4L;
    short *l_422 = &l_224.f2;
    short **l_421 = &l_422;
    g_83 = (void*)0;
    if ((safe_sub_func_int16_t_s_s((((((l_86 <= ((l_86 == ((safe_lshift_func_uint8_t_u_u((~g_82.f1), (l_86 ^ (l_86 , (safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(g_82.f1, (((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(l_86, (safe_lshift_func_int16_t_s_u(0xF270L, l_86)))) , l_86) && (-1L)), g_82.f1)) , l_86) ^ 0xA170L))) < 0x91L), g_4)))))) && l_99)) != l_86)) , g_100) != p_79) , l_102) == (*p_79)), l_99)))
    {
        char l_106 = 0xF0L;
        int l_111 = (-1L);
        int *l_116 = &g_66;
        char *l_125 = &g_82.f0;
        unsigned char *l_126 = (void*)0;
        unsigned char *l_127 = &g_128;
        struct S0 l_196 = {9L,0x11735A46L,-1L};
        int l_236 = (-1L);
        char **l_310 = &g_179;
        if ((l_86 , (safe_mod_func_uint16_t_u_u((((void*)0 == l_105) , l_106), (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_111, (safe_add_func_uint8_t_u_u(((*l_127) = (safe_lshift_func_int16_t_s_u((((*l_125) = ((l_106 || ((*l_116) = 0x0EAC2F6EL)) | ((safe_rshift_func_uint16_t_u_s(g_4, 1)) < (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_82.f1, 1UL)), 0x2ED8564FL)), 6)) >= g_50) != 1UL)))) , (*l_116)), l_86))), 0x6DL)))), g_50))))))
        {
            int *l_129 = &l_111;
            int l_130 = 7L;
            struct S0 l_132 = {1L,0x8E4F1A1EL,0xDEAEL};
            unsigned l_141 = 4294967295UL;
            unsigned char l_142 = 0x08L;
            int l_195 = 0x6EC57C89L;
            unsigned l_204 = 4294967295UL;
            int l_205 = 0L;
            struct S0 ***l_260 = &g_100;
        }
        else
        {
            int **l_261 = &g_83;
            int *l_262 = &l_111;
            int l_276 = 5L;
            (*l_116) = g_4;
            (*l_261) = &l_236;
            if (((l_262 == g_83) & (safe_unary_minus_func_int16_t_s(0x1A36L))))
            {
                (**l_261) = 0x7BFA6EBBL;
                (**l_261) = (**l_261);
            }
            else
            {
                char l_266 = 0x4AL;
                unsigned *l_277 = &g_278;
                int l_281 = 0x4153CC62L;
                unsigned *l_282 = (void*)0;
                unsigned *l_283 = &g_267;
                struct S0 l_296 = {0x6DL,0x7CD8EF88L,0x22F4L};
                (*g_83) = ((*l_116) = (safe_rshift_func_int8_t_s_s((l_266 <= l_266), g_267)));
                if (((l_266 ^ g_177) ^ (safe_sub_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u(l_86, ((-3L) || (((*l_283) = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_281 = (l_276 >= (((*l_277) = 1UL) , (safe_lshift_func_uint16_t_u_u(1UL, 12))))), 6)), ((*l_116) , 0UL)))) , (*l_116))))) , (void*)0) == &g_50) < l_266), g_82.f1))))
                {
                    (**l_261) = ((l_266 , 0x513BL) == 1UL);
                }
                else
                {
                    (**p_79) = l_196;
                }
                (*l_116) = (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((0xC979L < ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(g_66, (((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_175, 9)), ((g_267 = (((((**p_79) = l_296) , (l_281 <= ((safe_sub_func_uint16_t_u_u(g_175, ((void*)0 != l_105))) , (safe_mod_func_int8_t_s_s(g_301, g_278))))) , 0xCFL) & l_266)) ^ (-1L)))) >= g_66) != 0x25770ADEL) >= (**l_261)) , 0xF69DL))) , 0xDC87L), 13)) > 0xA1BC2A71L)) , (**l_261)), l_281)) < l_99) <= 0x33L), 5));
                (*p_79) = (void*)0;
            }
            (*l_261) = &g_66;
        }
        (*p_79) = &l_196;
        for (l_224.f2 = (-8); (l_224.f2 > (-8)); l_224.f2++)
        {
            for (g_82.f0 = 19; (g_82.f0 != 7); g_82.f0 = safe_sub_func_int8_t_s_s(g_82.f0, 8))
            {
                int **l_306 = &g_83;
                (*l_306) = &g_50;
                for (g_175 = 0; (g_175 >= 49); ++g_175)
                {
                    int l_309 = 1L;
                    (*l_306) = &g_50;
                    return l_309;
                }
            }
            l_310 = l_244;
            return (*l_116);
        }
        g_83 = &l_236;
    }
    else
    {
        int l_311 = 1L;
        int *l_314 = &g_66;
        int *l_316 = &g_66;
        int **l_317 = &l_105;
        if (l_311)
        {
            int *l_312 = &g_66;
            g_83 = &g_50;
            (*l_312) = 0x27C98E5AL;
            (**g_100) = (g_82.f1 , (**g_100));
            l_105 = l_312;
        }
        else
        {
            int **l_315 = &g_83;
            (*l_315) = (g_313 , (l_314 = &g_50));
        }
        (*l_316) = 1L;
        (*l_317) = &g_50;
    }
    (*l_319) = l_318;
    if ((*g_83))
    {
        int *l_323 = &g_324;
        int **l_322 = &l_323;
        struct S0 l_327 = {-3L,0UL,0x2FDAL};
        char *l_352 = &g_82.f0;
        for (g_82.f1 = 0; (g_82.f1 > 9); ++g_82.f1)
        {
            int **l_325 = &l_323;
            struct S0 *l_326 = &l_224;
            l_325 = l_322;
            (*l_326) = (*g_101);
            (*l_326) = l_327;
        }
        for (g_82.f1 = 0; (g_82.f1 >= 31); g_82.f1 = safe_add_func_uint16_t_u_u(g_82.f1, 9))
        {
            struct S0 l_332 = {0xC0L,0x092F73DEL,0L};
            char ***l_342 = &l_244;
            unsigned short *l_344 = &g_175;
            int *l_349 = &g_66;
            for (g_177 = 0; (g_177 == 24); g_177++)
            {
                struct S0 *l_333 = (void*)0;
                struct S0 *l_334 = &l_224;
                int *l_347 = &g_66;
                (*l_334) = l_332;
                for (g_313 = 0; (g_313 >= 24); ++g_313)
                {
                    short l_346 = (-7L);
                    if ((0x2EE9L | (((*l_318) ^ l_332.f2) || ((safe_sub_func_int16_t_s_s((0L & (safe_add_func_int8_t_s_s(l_341, ((l_342 == (void*)0) , (g_82.f0 ^ ((*l_237) = l_327.f1)))))), 0x8A20L)) || 1UL))))
                    {
                        unsigned short *l_343 = &g_175;
                        unsigned short **l_345 = &l_344;
                        l_346 = (((l_343 == ((*l_345) = l_344)) , g_128) && (**l_319));
                        if ((*g_83))
                            break;
                    }
                    else
                    {
                        (*l_319) = l_347;
                    }
                    g_348 = (*l_334);
                    if (l_346)
                        break;
                }
                l_349 = (g_82.f0 , &g_66);
                for (g_324 = 0; (g_324 > (-19)); --g_324)
                {
                    short l_353 = (-1L);
                    int *l_354 = &g_66;
                    (*g_83) = (*g_83);
                    if ((l_327.f2 || (l_352 != (void*)0)))
                    {
                        if ((*g_83))
                            break;
                        (*g_83) = l_353;
                    }
                    else
                    {
                        (*l_319) = (l_327.f2 , l_354);
                    }
                }
            }
            for (g_82.f2 = 27; (g_82.f2 > 18); g_82.f2 = safe_sub_func_int8_t_s_s(g_82.f2, 5))
            {
                int **l_366 = (void*)0;
                int l_369 = (-1L);
                unsigned short *l_390 = &g_391;
            }
        }
    }
    else
    {
        unsigned short l_426 = 0x1091L;
        int *l_427 = &g_415;
        for (l_224.f1 = 0; (l_224.f1 != 51); l_224.f1 = safe_add_func_int16_t_s_s(l_224.f1, 6))
        {
            short l_413 = 0xE63AL;
            short **l_423 = &l_422;
        }
        for (g_82.f2 = 0; (g_82.f2 == 28); g_82.f2 = safe_add_func_int16_t_s_s(g_82.f2, 4))
        {
        }
        (*l_319) = &g_66;
    }
    return (*g_83);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_82.f2, "g_82.f2", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_348.f2, "g_348.f2", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_863, "g_863", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
