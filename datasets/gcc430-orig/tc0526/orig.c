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
   short f0;
   unsigned f1;
   const unsigned f2;
};

struct S1 {
   unsigned f0;
   struct S0 f1;
};

struct S2 {
   unsigned char f0;
   unsigned f1;
   unsigned short f2;
   unsigned f3;
   unsigned f4;
};


static char g_2 = (-7L);
static int g_4 = 0L;
static const int * const g_30 = &g_4;
static const int * const *g_29 = &g_30;
static int g_56 = 0xCDE89C67L;
static char g_78 = (-1L);
static struct S1 g_84 = {0x16A5C54CL,{0x8D27L,0xD735AE52L,0x9AD701FBL}};
static int g_86 = 0x1F474372L;
static struct S0 *g_93 = &g_84.f1;
static struct S2 g_107 = {0UL,0xFE548C15L,1UL,0UL,0x0A77380AL};
static struct S2 *g_106 = &g_107;
static struct S0 g_128 = {2L,1UL,0xF8DC5A24L};
static const int *g_152 = &g_4;
static const int **g_151 = &g_152;
static unsigned char g_185 = 5UL;
static struct S1 g_223 = {6UL,{0L,0x72682E12L,0x5BDECA5BL}};
static unsigned char g_226 = 1UL;
static short *g_296 = &g_128.f0;
static int *g_319 = &g_86;
static struct S2 g_321 = {0UL,0x02D27C78L,65532UL,0x26A534EDL,0x82F0F248L};
static int g_333 = (-6L);
static unsigned * const g_353 = &g_107.f3;
static unsigned * const *g_352 = &g_353;
static unsigned g_356 = 0x7C15CB5FL;
static int *g_505 = (void*)0;
static int **g_504 = &g_505;
static struct S2 * const *g_588 = &g_106;
static struct S2 * const **g_587 = &g_588;
static int *g_634 = &g_333;
static char *g_640 = (void*)0;
static char ** const g_639 = &g_640;
static char **g_641 = &g_640;
static unsigned *g_648 = (void*)0;
static const int **g_663 = &g_152;
static int * const *g_667 = (void*)0;
static int **g_756 = &g_634;
static int ***g_755 = &g_756;
static short g_777 = 0L;
static short **g_822 = &g_296;
static short ***g_821 = &g_822;
static int ** const *g_830 = &g_504;
static int ** const **g_829 = &g_830;
static char g_847 = 2L;



static struct S0 func_1(void);
static struct S2 func_6(const unsigned p_7, const struct S2 p_8, int * p_9);
static char func_10(short p_11, unsigned p_12, int * p_13);
static short func_25(const int * const * p_26, short p_27, const unsigned p_28);
static int * func_35(const int ** p_36, int ** const p_37, const short p_38, int * const * p_39, int p_40);
static const int ** func_41(const unsigned char p_42, int ** p_43, unsigned p_44, struct S2 p_45);
static int ** func_47(unsigned char p_48, struct S0 p_49, const int * p_50, int p_51, unsigned char p_52);
static struct S2 func_60(unsigned char p_61, int ** p_62, int p_63);
static const struct S1 func_64(unsigned p_65, int * p_66, int * p_67, unsigned short p_68, unsigned short p_69);
static struct S0 * func_71(unsigned short p_72);
static struct S0 func_1(void)
{
    int *l_3 = &g_4;
    int **l_5 = &l_3;
    struct S2 l_33 = {7UL,0x7A0D7C8AL,0x6A77L,9UL,4294967289UL};
    unsigned l_34 = 1UL;
    int **l_770 = &g_319;
    char *l_848 = (void*)0;
    char *l_849 = (void*)0;
    char *l_850 = &g_2;
    struct S0 l_899 = {0x331EL,0UL,0x9E377C51L};
    (*l_3) |= g_2;
    (*l_5) = l_3;
    l_33 = func_6((((*l_850) &= func_10(((g_107.f2 = (((((**l_5) >= (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((*g_353) = (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((**l_5) <= (**l_5)) ^ (safe_mod_func_uint8_t_u_u(g_4, (safe_lshift_func_int16_t_s_s(func_25(g_29, (((0xA6B2C4EBL != ((safe_lshift_func_int8_t_s_u(g_4, 2)) > (((**l_5) , g_4) != 5L))) , l_33) , l_34), g_4), (*l_3)))))), 3)) ^ g_223.f1.f1), (*g_296)))))), (**l_5)))) == (-1L)) , (*g_755)) != l_770)) ^ (*g_296)), g_56, (*l_770))) != 1UL), l_33, (*l_770));

    ;
    return l_899;
}







static struct S2 func_6(const unsigned p_7, const struct S2 p_8, int * p_9)
{
    const unsigned short l_851 = 1UL;
    char *l_860 = &g_847;
    char *l_861 = &g_78;
    int * const *l_862 = &g_319;
    struct S1 l_869 = {0xB160626DL,{9L,0xDACCCEF4L,3UL}};
    int *l_897 = &g_4;
    struct S2 l_898 = {0x6FL,1UL,0x7AB6L,4294967295UL,0UL};
    if ((*p_9))
    {
        struct S1 **l_870 = (void*)0;
        int l_873 = (-1L);
        char *l_878 = &g_847;
        unsigned l_881 = 0x874C5D7AL;
        int l_882 = (-10L);
        struct S2 l_889 = {0x68L,1UL,0xFE17L,0xEE287AAAL,0x52406B76L};
        struct S1 l_895 = {0x1DDEC8ABL,{0x2DE4L,4294967287UL,0xBE024858L}};
        l_882 = ((*p_9) = (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((**g_151), (safe_rshift_func_int16_t_s_u(((***g_821) = (((l_869 , l_870) != (func_64((safe_add_func_uint8_t_u_u(p_8.f1, 2L)), (***g_829), (*g_504), l_873, l_881) , l_870)) | 0x1B98L)), l_873)))) | 0x0CFDL), 0xC5F7L)));
        for (g_107.f2 = 0; (g_107.f2 == 34); g_107.f2 = safe_add_func_uint16_t_u_u(g_107.f2, 1))
        {
            int *l_885 = &g_333;
            (*l_885) &= ((*p_9) = (*p_9));
            if ((safe_rshift_func_uint16_t_u_s(6UL, 10)))
            {
                const struct S2 l_888 = {0xE5L,4294967295UL,0x3366L,9UL,4UL};
                l_889 = l_888;
            }
            else
            {
                unsigned short *l_890 = &l_889.f2;
                (*l_885) &= (((*l_890) &= 6UL) & (safe_add_func_uint8_t_u_u(p_8.f2, (((*p_9) = (safe_sub_func_uint8_t_u_u(g_78, (0x9DD3L > (p_8 , ((***g_821) = (l_895 , 2L))))))) > (**g_352)))));
                if ((*p_9))
                    continue;
            }
        }
    }
    else
    {
        const int l_896 = 1L;
        (**l_862) = l_896;
        (*g_663) = (l_897 = ((*g_756) = l_897));

        ;
    }

    ;
    return l_898;
}







static char func_10(short p_11, unsigned p_12, int * p_13)
{
    short **l_772 = &g_296;
    unsigned char l_778 = 0xC6L;
    struct S1 *l_799 = &g_84;
    int ***l_833 = &g_504;
    int ****l_832 = &l_833;
    struct S2 *l_838 = &g_107;
    const int * const *l_844 = &g_30;
    if (((*p_13) |= (*g_152)))
    {
        short **l_773 = &g_296;
        short * const l_776 = &g_777;
        short * const *l_775 = &l_776;
        short * const **l_774 = &l_775;
        const int l_781 = 8L;
        unsigned *l_782 = &g_321.f3;
        int l_783 = 0L;
        const struct S2 *l_798 = &g_107;
        const struct S2 **l_797 = &l_798;
        const struct S2 ***l_796 = &l_797;
        const int * const *l_816 = &g_152;
        char **l_818 = &g_640;
        short ** const *l_824 = (void*)0;
        if (((((*g_353) &= (safe_unary_minus_func_int8_t_s(((l_773 = l_772) == ((*l_774) = l_772))))) >= p_12) != (l_783 = ((*l_782) = (l_778 & (safe_add_func_uint8_t_u_u(255UL, l_781)))))))
        {
            short l_790 = 0L;
            const int * const **l_791 = &g_29;
            (*p_13) &= (((safe_sub_func_uint32_t_u_u(0x802DB8C2L, ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((l_790 != ((func_25(((*l_791) = &g_30), (*g_296), (safe_div_func_int16_t_s_s((((p_12 & 0xEEL) , 0x84BEBD11L) ^ (safe_mul_func_uint8_t_u_u((((void*)0 != l_796) >= 0x3AL), p_12))), p_11))) <= 6UL) != l_781)), l_781)), (*g_296))) <= 0x17L))) > l_778) == 9UL);
        }
        else
        {
            struct S1 **l_800 = &l_799;
            int l_817 = 0L;
            const int * const *l_845 = &g_30;
            (*l_800) = l_799;
            (***g_755) = ((*p_13) = (safe_rshift_func_uint8_t_u_u((0xB55CL || p_12), 3)));
            for (p_12 = (-12); (p_12 >= 19); p_12++)
            {
                unsigned char l_807 = 0x71L;
                for (g_333 = 22; (g_333 >= (-1)); --g_333)
                {
                    l_807 ^= ((*g_319) |= 0xD070690EL);
                    for (g_223.f1.f1 = (-24); (g_223.f1.f1 > 7); ++g_223.f1.f1)
                    {
                        short ****l_823 = &g_821;
                        int *l_825 = &l_783;
                        unsigned l_826 = 4UL;
                        (*l_825) |= (safe_rshift_func_int16_t_s_u(func_25(&g_152, (((((safe_add_func_int16_t_s_s((l_778 != (safe_add_func_int16_t_s_s(((((p_11 ^ (func_25(l_816, l_817, (((&g_640 != l_818) > ((safe_div_func_int32_t_s_s(((((*l_823) = g_821) == l_824) , (*p_13)), p_12)) >= 0x5721L)) > 0x93L)) <= 3UL)) && 0UL) ^ (**g_822)) | 4UL), l_778))), p_12)) , (-7L)) , (*g_152)) >= (*p_13)) & p_12), g_107.f4), g_107.f3));
                        (*p_13) ^= (((*g_352) != (*g_352)) == 1L);
                        return l_826;
                    }
                    (*g_319) = (*p_13);
                }
                for (g_84.f0 = (-24); (g_84.f0 > 53); g_84.f0 = safe_add_func_uint32_t_u_u(g_84.f0, 7))
                {
                    int ** const ***l_831 = &g_829;
                    int *****l_834 = &l_832;
                    struct S0 **l_835 = &g_93;
                    (*l_835) = func_71((((*l_831) = g_829) != ((*l_834) = l_832)));
                }
            }
            if ((safe_div_func_int8_t_s_s(1L, g_223.f1.f2)))
            {
                (*p_13) &= 0L;
            }
            else
            {
                struct S2 *l_839 = (void*)0;
                int l_846 = 0L;
                l_839 = l_838;

                ;
                (**g_755) = ((((~p_11) < (safe_rshift_func_uint8_t_u_u((l_817 , func_25(l_816, (safe_mul_func_uint8_t_u_u(func_25(l_844, ((func_25(l_816, l_817, (((***l_796) , (func_25(l_845, (**l_816), p_12) ^ 0xDDA5L)) == p_11)) , l_799) != (void*)0), p_11), 1UL)), g_223.f1.f1)), 4))) ^ l_846) , (void*)0);

                ;
            }

            ;
        }

        ;
        ;
    }
    else
    {
        (*p_13) = (0x9D0FL >= 6UL);
        (**g_756) = (**g_29);
    }

    ;
    return g_847;
}







static short func_25(const int * const * p_26, short p_27, const unsigned p_28)
{
    const unsigned l_46 = 0xE48C0C84L;
    struct S0 l_53 = {0x9924L,4294967295UL,4294967295UL};
    const int *l_54 = &g_4;
    int *l_55 = &g_56;
    unsigned l_70 = 4294967293UL;
    int *l_97 = &g_4;
    int **l_96 = &l_97;
    struct S2 *l_621 = &g_107;
    struct S2 **l_622 = &l_621;
    struct S2 *l_623 = &g_107;
    char l_633 = 0xADL;
    int l_691 = (-9L);
    struct S0 l_712 = {0x3AF5L,0xB8A01547L,0xA54CFC56L};
    int l_715 = 1L;
    char *l_748 = &g_78;
    unsigned char *l_749 = &g_321.f0;
    return (*l_97);
}







static int * func_35(const int ** p_36, int ** const p_37, const short p_38, int * const * p_39, int p_40)
{
    const char l_456 = (-9L);
    int l_458 = 0x7F0A6920L;
    unsigned *l_466 = &g_84.f1.f1;
    struct S1 *l_542 = &g_223;
    short l_572 = 0xBA79L;
    struct S0 l_581 = {1L,0x84FE9D93L,0x9E39DB4AL};
    int **l_589 = (void*)0;
    struct S2 l_611 = {0x58L,0x392FE50AL,0x98B1L,0x086B1EE3L,0xCEB4E095L};
    for (g_223.f0 = (-21); (g_223.f0 != 17); g_223.f0 = safe_add_func_uint8_t_u_u(g_223.f0, 6))
    {
        unsigned l_457 = 0xB6A71BACL;
        int l_459 = 7L;
        for (g_185 = 0; (g_185 <= 47); ++g_185)
        {
            short l_451 = 3L;
        }
        if ((*g_319))
            continue;
    }
    return &g_4;


}







static const int ** func_41(const unsigned char p_42, int ** p_43, unsigned p_44, struct S2 p_45)
{
    int l_99 = 2L;
    const int *l_149 = &g_4;
    const int **l_148 = &l_149;
    int *l_267 = &g_56;
    const struct S2 *l_281 = &g_107;
    const struct S2 **l_280 = &l_281;
    unsigned l_318 = 1UL;
    int * const l_334 = &g_56;
    struct S0 l_388 = {0xF152L,9UL,0x8785A1AAL};
    int l_436 = 0x5D0FB07CL;
    if (l_99)
    {
        int l_100 = 0L;
        int *l_101 = &l_99;
        short l_104 = (-4L);
        unsigned l_122 = 0xE679C8A6L;
        int l_138 = 8L;
        (*l_101) &= l_100;
        l_101 = (void*)0;

        ;
        for (p_45.f3 = 0; (p_45.f3 == 58); p_45.f3++)
        {
            int *l_105 = &g_86;
            struct S0 *l_127 = &g_128;
            struct S2 l_129 = {1UL,0x7C2D9536L,1UL,0x900EB00DL,0xBF4B6F1EL};
            unsigned short *l_145 = (void*)0;
            if (((*l_105) = l_104))
            {
                struct S2 **l_108 = &g_106;
                (*l_108) = g_106;
            }
            else
            {
                unsigned l_120 = 0x5E55DFC9L;
                for (p_45.f0 = 16; (p_45.f0 > 54); p_45.f0 = safe_add_func_uint16_t_u_u(p_45.f0, 6))
                {
                    int *l_117 = &g_56;
                    int *l_119 = &l_100;
                    int **l_118 = &l_119;
                    unsigned short *l_121 = &g_107.f2;
                    short *l_123 = &l_104;
                    int *l_124 = &l_99;
                    (*l_105) = (safe_div_func_int32_t_s_s(p_45.f2, p_42));
                    (*l_124) ^= (safe_mul_func_int16_t_s_s(g_107.f4, ((*l_123) = (safe_rshift_func_int8_t_s_u(g_84.f1.f0, (((func_64(g_107.f3, l_117, ((*l_118) = (void*)0), p_45.f0, ((*l_121) = l_120)) , ((*l_121) ^= (*l_105))) >= l_122) == (**g_29)))))));

                    ;
                    l_127 = func_71(((*l_121) = (safe_lshift_func_uint8_t_u_u(0x77L, 5))));

                    ;
                }

                ;
                l_129 = p_45;
                if (l_99)
                    continue;
                (*l_105) ^= p_45.f3;
            }

            ;
            if (((safe_rshift_func_int16_t_s_u(((0xFF75AEE6L < g_107.f4) , (safe_sub_func_int32_t_s_s((**g_29), (0x75AA8E54L | (safe_add_func_uint8_t_u_u(g_56, ((safe_mul_func_uint16_t_u_u(l_138, p_44)) , (safe_mul_func_int8_t_s_s(p_45.f2, ((((safe_lshift_func_uint16_t_u_s((((l_145 == (void*)0) ^ 0L) && p_45.f0), p_45.f3)) <= 2UL) == g_128.f2) <= g_107.f1)))))))))), 8)) , l_99))
            {
                const int **l_150 = &l_149;
                (*l_105) ^= l_99;
                g_86 |= (!(((p_45.f4 , 7UL) , (safe_mul_func_uint8_t_u_u(p_42, g_84.f1.f1))) , 1L));
                return g_151;


            }
            else
            {
                struct S0 **l_155 = (void*)0;
                struct S0 **l_156 = &l_127;
                const struct S2 * const l_160 = &g_107;
                const struct S2 * const *l_159 = &l_160;
                const int **l_165 = (void*)0;
                const int *l_167 = (void*)0;
                const int **l_166 = &l_167;
                unsigned char l_170 = 255UL;
                int **l_175 = &l_105;
                (*l_105) ^= ((safe_lshift_func_uint16_t_u_u((((*l_156) = (void*)0) != (void*)0), 1)) != (safe_mul_func_int16_t_s_s(((void*)0 != l_159), ((safe_sub_func_int32_t_s_s((**g_151), ((safe_lshift_func_int8_t_s_s(((&g_56 == ((g_128.f1 & (**l_148)) , ((*l_166) = &g_56))) > g_2), (**l_148))) > (-5L)))) , p_42))));

                ;
                ;
                for (l_122 = 0; (l_122 > 48); l_122++)
                {
                    unsigned char l_176 = 0x53L;
                    int *l_177 = &l_138;
                    (*l_105) = (l_170 , ((safe_mul_func_int8_t_s_s(((((((safe_mod_func_int16_t_s_s((p_43 == (void*)0), (((g_107.f3 ^ 255UL) < ((*l_149) || (l_175 == ((func_60(p_45.f2, p_43, l_176) , l_129) , (void*)0)))) , (-8L)))) && g_4) || p_45.f3) != l_176) | (*l_105)) | p_45.f0), (**l_175))) <= g_107.f4));
                    (*l_148) = (*g_151);
                    (*l_177) &= (*l_105);
                }
                (*l_156) = func_71(p_44);

                ;
            }

            ;
        }
    }
    else
    {
        int l_189 = 6L;
        int l_198 = 0x144486E5L;
        const int **l_204 = &l_149;
        unsigned short l_213 = 0x259AL;
        int l_224 = 0x248F7BE4L;
        struct S0 *l_263 = &g_223.f1;
        unsigned l_284 = 4294967288UL;
        short *l_295 = &g_128.f0;
        struct S2 l_320 = {0x61L,0xD4099485L,0x6C49L,4294967294UL,0UL};
        unsigned l_415 = 0xE262E621L;
        struct S1 **l_423 = (void*)0;
        for (p_45.f3 = 20; (p_45.f3 > 44); p_45.f3++)
        {
            unsigned l_182 = 0x7943A2B2L;
            int l_203 = 0L;
            short *l_214 = &g_84.f1.f0;
            short *l_215 = (void*)0;
            short *l_216 = &g_128.f0;
            unsigned short *l_225 = &g_107.f2;
            int *l_227 = &l_224;
            const int **l_242 = &g_152;
            for (p_44 = 0; (p_44 > 17); p_44++)
            {
                short *l_186 = &g_128.f0;
                int *l_190 = &g_86;
                unsigned char *l_197 = &g_107.f0;
                (*l_190) ^= ((((g_107.f1 , l_182) , 6L) , ((((safe_rshift_func_int16_t_s_u(((*l_186) = (p_42 | g_185)), 1)) > (((l_182 , (((!(((g_2 |= (-8L)) | (((**l_148) , (safe_mul_func_uint16_t_u_u(g_84.f0, 0x59E5L))) >= 65535UL)) ^ (**l_148))) | g_128.f1) > 1UL)) != 0x1A2CE7F3L) , 0xF0L)) == p_45.f3) , (**l_148))) >= l_189);
                l_198 = (((**l_148) < ((*g_152) == (**l_148))) , (((*l_186) = ((safe_sub_func_uint32_t_u_u(g_128.f0, 4294967291UL)) || p_45.f1)) > (safe_add_func_uint8_t_u_u((*l_149), ((*l_197) = ((safe_add_func_int32_t_s_s((*l_190), (**g_151))) != g_84.f0))))));
                if ((**g_151))
                    continue;
                for (g_107.f4 = 0; (g_107.f4 != 9); g_107.f4++)
                {
                    l_203 &= ((*l_190) = (safe_div_func_uint16_t_u_u(g_107.f2, ((*l_186) &= 0x44B6L))));
                    return &g_152;


                }
            }
            (*l_204) = (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((-1L), 4)), 2)) < ((safe_mul_func_int16_t_s_s((**l_204), ((*l_216) ^= ((*l_214) = l_213)))) > (safe_div_func_uint16_t_u_u((((**l_148) != (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((g_226 ^= ((*l_225) = (func_60(g_84.f1.f1, p_43, p_45.f1) , ((g_223 , (*g_30)) >= l_224)))), p_44)) | g_185), 1))) == (*g_30)), 6UL)))) , (*l_204));
            if (l_182)
            {
                (*g_106) = p_45;
            }
            else
            {
                char *l_234 = &g_78;
                char *l_235 = &g_2;
                int l_240 = 0x1DE0336CL;
                int *l_241 = &l_240;
                (*g_151) = (*l_204);
                (*l_241) = (func_64((*l_149), l_227, &l_189, ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(8UL, (safe_add_func_int8_t_s_s(g_107.f1, ((*l_235) = ((*l_234) = 0x33L)))))), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_45.f1, 2)), 13)))) > 0xD5L), (l_198 &= 0x8F33L)) , l_240);
                (*g_151) = &l_240;

                ;
            }


            return l_242;


        }
        if ((*l_149))
        {
            unsigned char l_244 = 1UL;
            const struct S1 l_247 = {0xDCC5815BL,{0L,4294967295UL,4294967295UL}};
            int *l_260 = &g_86;
            int **l_259 = &l_260;
            unsigned short *l_268 = &g_107.f2;
            unsigned short *l_269 = &l_213;
            char *l_282 = (void*)0;
            char *l_283 = &g_78;
            struct S0 *l_293 = &g_84.f1;
            unsigned l_414 = 4294967293UL;
            struct S2 ** const l_422 = &g_106;
            struct S1 *l_425 = (void*)0;
            struct S1 **l_424 = &l_425;
            if (((*g_30) , (0xAD60D6B5L && (&g_2 != (void*)0))))
            {
                int *l_243 = &g_4;
                char *l_252 = &g_78;
                short *l_261 = &g_223.f1.f0;
                unsigned *l_262 = &g_107.f1;
                struct S0 **l_264 = &g_93;
                (*l_264) = ((((l_243 != ((*l_243) , l_243)) ^ (l_244 || ((*l_262) = (safe_mod_func_uint8_t_u_u(0x5BL, (l_247 , (((*l_261) &= (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_99 = ((*l_252) = g_107.f4)), ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_247 , (l_259 == &l_260)), g_223.f1.f2)), p_45.f0)), (-9L))) , (*l_243)))), (*l_260)))) , g_107.f1))))))) >= 0xA916L) , l_263);

                ;
            }
            else
            {
                int *l_266 = &g_4;
                int **l_265 = &l_266;
                (**l_259) |= (-1L);
                (*g_151) = ((*l_265) = ((*l_259) = (*l_259)));

                ;
                ;
                (*g_151) = (*g_29);

                ;
            }

            ;
            if ((func_64((g_84 , 4294967291UL), l_267, l_260, (*l_149), ((*l_269) |= ((*l_268) = g_107.f2))) , (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((~((*l_283) = (func_64((((void*)0 == l_280) , 0x3CAE3F3AL), &g_56, &l_224, (**l_204), g_84.f1.f1) , 0xDDL))), (**l_204))), 4)), l_284)), p_45.f2)), g_185))))
            {
                struct S0 **l_303 = &g_93;
                for (g_128.f0 = 0; (g_128.f0 <= (-26)); g_128.f0 = safe_sub_func_uint8_t_u_u(g_128.f0, 9))
                {
                    struct S0 **l_294 = &l_293;
                    int l_297 = 0L;
                    int *l_298 = &l_297;
                    const int **l_306 = &g_152;
                    (**l_259) ^= (((0UL < (((safe_mod_func_uint32_t_u_u((0x8DL & p_45.f4), (safe_sub_func_uint32_t_u_u((**l_148), (safe_lshift_func_int16_t_s_u((((*l_294) = l_293) == &g_128), 14)))))) , ((((*l_268) = 0x32ECL) , (p_45.f4 , l_295)) != g_296)) && 7UL)) ^ g_56) >= l_297);
                    (*l_298) = ((*l_260) = (*g_152));
                    for (g_78 = (-23); (g_78 < 2); ++g_78)
                    {
                        (*l_260) &= (safe_add_func_uint32_t_u_u((p_45.f0 | (+(((*g_93) , &g_93) == l_303))), (*g_152)));
                    }
                    for (g_226 = 20; (g_226 != 52); g_226 = safe_add_func_uint8_t_u_u(g_226, 4))
                    {
                        return l_306;


                    }
                }
                for (l_224 = 13; (l_224 < 17); l_224 = safe_add_func_int16_t_s_s(l_224, 1))
                {
                    l_198 |= (g_86 |= (**l_148));
                    (*g_106) = p_45;
                    (*l_260) = 0x38E576FCL;
                }
                if ((**l_148))
                {
                    const unsigned *l_310 = &l_247.f1.f1;
                    const unsigned **l_309 = &l_310;
                    (**l_259) = (((*l_309) = g_152) == (void*)0);

                    ;
                    for (l_198 = 0; (l_198 == 15); l_198 = safe_add_func_uint8_t_u_u(l_198, 7))
                    {
                        int *l_313 = &l_99;
                        struct S1 *l_314 = (void*)0;
                        struct S1 **l_315 = &l_314;
                        (**l_259) = 0x44FBD2D9L;
                        (*l_313) |= (*l_260);
                        (*l_315) = l_314;
                    }
                }
                else
                {
                    return &g_152;


                }
            }
            else
            {
                int *l_329 = (void*)0;
                int l_341 = 0xCEA0C121L;
                struct S0 **l_342 = (void*)0;
                struct S0 ** const l_343 = &l_293;
                const int **l_365 = &g_152;
                if ((**l_204))
                {
                    const unsigned l_328 = 4294967286UL;
                    int *l_332 = (void*)0;
                    for (g_107.f4 = 0; (g_107.f4 == 55); g_107.f4++)
                    {
                        (*g_151) = (g_319 = (p_45.f1 , (l_318 , &g_86)));

                        ;
                        g_321 = l_320;
                        (*g_319) ^= (safe_lshift_func_int8_t_s_s(p_45.f2, 0));
                    }

                    ;
                    g_333 = (safe_div_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((0x3BE05BE5L == p_45.f3), l_328)) , l_329) != (*l_204)), ((*l_260) = (safe_rshift_func_int16_t_s_u((*g_296), 1)))));
                    (*g_106) = (*g_106);
                    if ((**l_259))
                    {
                        unsigned short l_335 = 0x7D7BL;
                        (*l_260) = ((((void*)0 == l_334) > (**l_148)) ^ l_335);
                        g_333 &= (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((*l_260) <= 0xC1F7B2A5L), g_56)), 15));
                        (*l_148) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*g_151) = (*g_151);
                        (*l_148) = (*g_151);

                        ;
                        (*g_319) |= (safe_unary_minus_func_int8_t_s(0xCFL));
                        l_341 = ((*g_319) = 0x24ED3E9AL);
                    }

                    ;
                }
                else
                {
                    const int **l_363 = &l_149;
                    const int **l_366 = &g_152;
                    unsigned char l_381 = 0x09L;
                    if ((l_342 != l_343))
                    {
                        (*l_204) = (*l_204);
                        (*g_319) |= (*g_152);
                        (*l_260) = (**l_204);
                    }
                    else
                    {
                        unsigned * const l_355 = &g_356;
                        unsigned * const *l_354 = &l_355;
                        char l_361 = 0xCEL;
                        int ***l_362 = &l_259;
                        const int **l_364 = &l_149;
                        (*l_362) = func_47((!((~((l_268 != g_296) , (**l_259))) && ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((g_107.f0 || (safe_sub_func_uint16_t_u_u(((l_354 = g_352) == (void*)0), (safe_rshift_func_uint8_t_u_u((p_45.f2 || p_45.f3), 2))))) >= (safe_mul_func_int8_t_s_s((~p_45.f2), 1UL))), (*g_353))) == p_45.f2), (*g_353))) < g_84.f1.f1))), (*g_93), (*g_151), p_44, l_361);

                        ;
                        ;
                        return l_365;


                    }
                    (*l_366) = (*g_29);
                    (*l_260) ^= (1UL || ((**g_352) = (((&g_128 == ((p_44 | 0x4EFDL) , (void*)0)) || (**l_148)) == (**l_366))));
                    if ((**g_151))
                    {
                        return l_365;


                    }
                    else
                    {
                        unsigned l_391 = 0x6E90CCB5L;
                        (**l_259) = (((safe_mod_func_int8_t_s_s(4L, (safe_sub_func_int16_t_s_s(4L, (safe_sub_func_int16_t_s_s((**l_148), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_42, (safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((p_45.f4 < (l_381 = (**l_204))), (safe_mul_func_int8_t_s_s((+(safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((p_45.f4 | p_44), (g_84 , 0x3D293EE4L))), (**l_365)))), (**l_204))))) , l_388) , (**l_259)), p_45.f2)))), p_44)))))))) || (*g_296)) & p_45.f3);
                        (**l_259) &= (safe_mul_func_int8_t_s_s(p_42, l_391));
                        return &g_152;


                    }
                }

                ;
                ;
                for (g_321.f4 = (-16); (g_321.f4 >= 51); ++g_321.f4)
                {
                    int *l_394 = &g_4;
                    const int **l_395 = &l_149;
                    (*g_151) = l_394;

                    ;
                    (*l_395) = (*g_29);

                    ;
                    return &g_152;


                }
                (**l_259) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((255UL < (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((**l_259), 0x99L)), ((!(*g_319)) , (safe_mod_func_int8_t_s_s((g_321.f3 < ((safe_div_func_int32_t_s_s((l_198 = (p_45.f2 ^ (safe_mul_func_int16_t_s_s((*l_260), (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((**l_365), (~p_42))) && p_45.f3), g_107.f2)))))), l_414)) && g_321.f2)), (-3L))))))) & 0x8EABL) <= 1L), p_44)), l_415));
                (*l_260) = ((g_84.f1.f1 <= (((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_321.f4, ((*g_152) >= ((((safe_mod_func_int8_t_s_s(((p_45.f4 ^ ((((((void*)0 == &g_321) < (&l_281 != l_422)) < (l_423 != l_424)) >= p_45.f0) <= (*g_296))) <= g_321.f1), (-6L))) || 1UL) || p_45.f2) , 4294967295UL)))), (*l_260))) != (**g_151)) > 252UL)) ^ 0xCB6D5B29L);
            }

            ;
            ;
        }
        else
        {
            int l_426 = 0xFB8DD526L;
            int l_435 = 0xDF68B057L;
            short *l_437 = &g_223.f1.f0;
            char *l_438 = &g_78;
            char *l_439 = &g_2;
            unsigned char *l_440 = &l_320.f0;
            (*g_319) = ((g_223.f1.f0 |= ((p_45 = ((*g_106) = func_60(p_42, func_47((+l_426), (*g_93), (*g_151), (g_107.f2 < (safe_div_func_uint8_t_u_u(0x0AL, (safe_mul_func_int16_t_s_s(((*l_295) = (((safe_div_func_uint32_t_u_u(0xE127DB23L, (l_435 = ((*g_319) = 0x2BE534CBL)))) & (&l_148 != (void*)0)) , l_436)), g_223.f0))))), g_128.f2), g_321.f1))) , (*g_296))) >= 0xC9F2L);
            (*g_319) |= (*l_149);
            (*g_319) = (((*l_439) = ((*l_438) = (((**l_148) , l_437) == l_437))) | ((((*g_296) ^= l_426) , (*g_353)) , ((*l_440) = g_223.f1.f0)));
            (*l_204) = (*l_204);
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    (*l_148) = (*g_151);

    ;
    return &g_152;


}







static int ** func_47(unsigned char p_48, struct S0 p_49, const int * p_50, int p_51, unsigned char p_52)
{
    int **l_59 = (void*)0;
    for (p_51 = 0; (p_51 <= 23); p_51++)
    {
        return l_59;


    }
    return l_59;


}







static struct S2 func_60(unsigned char p_61, int ** p_62, int p_63)
{
    struct S2 l_98 = {0x3BL,1UL,0x8899L,4294967292UL,1UL};
    return l_98;
}







static const struct S1 func_64(unsigned p_65, int * p_66, int * p_67, unsigned short p_68, unsigned short p_69)
{
    struct S0 **l_94 = &g_93;
    const struct S1 l_95 = {0xDD067980L,{0xE64AL,0UL,4294967295UL}};
    (*l_94) = func_71(g_2);
    return l_95;
}







static struct S0 * func_71(unsigned short p_72)
{
    struct S0 l_75 = {-9L,0x9888327BL,0x4A6B1F15L};
    char *l_76 = (void*)0;
    char *l_77 = &g_78;
    unsigned char l_81 = 255UL;
    int *l_85 = &g_86;
    const int *l_92 = &g_4;
    const int **l_91 = &l_92;
    (*l_85) |= (safe_sub_func_int32_t_s_s(p_72, (((l_75 , ((*l_77) = g_4)) , ((safe_mul_func_int8_t_s_s((l_81 >= g_78), ((l_81 != (safe_rshift_func_int16_t_s_s(((0x1C310705L > l_75.f2) , (g_84 , g_84.f1.f1)), 6))) <= g_84.f1.f1))) && p_72)) , 4294967295UL)));
    for (g_78 = (-27); (g_78 < 14); g_78++)
    {
        struct S0 *l_89 = &l_75;
        int l_90 = 0L;
        l_90 = ((void*)0 != l_89);
    }
    (*l_91) = (*g_29);
    return g_93;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1.f0, "g_84.f1.f0", print_hash_value);
    transparent_crc(g_84.f1.f1, "g_84.f1.f1", print_hash_value);
    transparent_crc(g_84.f1.f2, "g_84.f1.f2", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_107.f3, "g_107.f3", print_hash_value);
    transparent_crc(g_107.f4, "g_107.f4", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_223.f0, "g_223.f0", print_hash_value);
    transparent_crc(g_223.f1.f0, "g_223.f1.f0", print_hash_value);
    transparent_crc(g_223.f1.f1, "g_223.f1.f1", print_hash_value);
    transparent_crc(g_223.f1.f2, "g_223.f1.f2", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_321.f0, "g_321.f0", print_hash_value);
    transparent_crc(g_321.f1, "g_321.f1", print_hash_value);
    transparent_crc(g_321.f2, "g_321.f2", print_hash_value);
    transparent_crc(g_321.f3, "g_321.f3", print_hash_value);
    transparent_crc(g_321.f4, "g_321.f4", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
