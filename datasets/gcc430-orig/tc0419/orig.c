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
   const short f0;
   unsigned f1;
   unsigned f2;
   int f3;
   unsigned f4;
};

struct S1 {
   unsigned short f0;
   short f1;
   const short f2;
   unsigned short f3;
   struct S0 f4;
   short f5;
};


static unsigned g_2 = 4294967288UL;
static struct S1 g_23 = {0x6C2EL,-10L,-7L,0x299FL,{0L,1UL,4294967295UL,0x477A14A9L,0x79EBEF9FL},0L};
static int g_65 = 1L;
static int *g_64 = &g_65;
static struct S0 *g_94 = (void*)0;
static struct S1 g_135 = {65535UL,8L,0x46F7L,0xBE78L,{-1L,0xD851819CL,0UL,-6L,0x15540926L},1L};
static const struct S0 * const g_158 = &g_135.f4;
static int * const *g_193 = &g_64;
static int * const * const * const g_192 = &g_193;
static int * const g_247 = (void*)0;
static int g_325 = (-2L);
static int *g_324 = &g_325;
static struct S1 *g_330 = &g_135;
static struct S1 **g_329 = &g_330;
static short g_482 = 0xA3B3L;



static char func_1(void);
static char func_9(struct S0 p_10, int p_11, struct S0 p_12, const unsigned p_13);
static struct S0 func_14(int p_15, unsigned short p_16, struct S1 p_17, char p_18, unsigned p_19);
static unsigned short func_24(unsigned char p_25, char p_26);
static short func_33(struct S0 p_34, unsigned p_35, unsigned short p_36);
static struct S0 func_37(struct S0 p_38, unsigned char p_39);
static struct S0 func_40(unsigned p_41, unsigned char p_42);
static unsigned short func_45(unsigned char p_46, unsigned p_47);
static int * func_51(unsigned p_52, int * p_53, int * p_54, struct S1 p_55);
static int * func_58(const int p_59, int * p_60);
static char func_1(void)
{
    unsigned l_22 = 0xF748BBE2L;
    struct S0 l_515 = {-1L,4294967293UL,0UL,0L,0xB34764E1L};
    int *l_558 = &g_325;
    const struct S0 *l_575 = (void*)0;
    const struct S0 **l_574 = &l_575;
    if (g_2)
    {
        short l_5 = 0x0011L;
        struct S0 l_486 = {-1L,0xBFF98F1AL,0x9974B571L,1L,4294967295UL};
        int l_489 = 0x23160921L;
        int **l_503 = &g_324;
        int l_541 = 0xCBAB5EB8L;
        unsigned short l_543 = 0UL;
        if ((safe_mod_func_int32_t_s_s((l_5 == g_2), g_2)))
        {
            unsigned char l_6 = 7UL;
            return l_6;
        }
        else
        {
            char l_49 = (-1L);
            int *l_502 = &g_325;
            struct S0 l_546 = {0x6BBBL,0xB207A452L,0x01F92683L,0x8A688A32L,0x2236D612L};
            struct S0 l_547 = {1L,0x73BE726EL,1UL,0xA6AC42CAL,4294967293UL};
            for (g_2 = 0; (g_2 == 60); ++g_2)
            {
                char l_50 = (-1L);
                const unsigned char l_487 = 0UL;
                l_489 = ((0L >= (func_9(func_14((safe_sub_func_uint8_t_u_u(l_5, l_22)), l_5, g_23, (func_24(l_5, ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(func_33(func_37(func_40(((l_5 < (safe_add_func_uint16_t_u_u((!func_45(((safe_unary_minus_func_uint8_t_u(l_49)) , (l_49 , l_50)), g_23.f4.f4)), l_49))) ^ g_23.f4.f0), l_50), l_50), l_49, l_22), l_50)) && 0x7C32L) , 0x01DBA4E5L) >= l_22), g_23.f4.f3)), g_2)) > g_135.f1)) && 0x7542L), l_5), g_23.f4.f1, l_486, l_487) || 4L)) >= g_23.f2);
                (*g_324) = ((safe_mod_func_int8_t_s_s((l_486.f4 >= (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(g_325, (safe_rshift_func_int8_t_s_u(4L, (l_489 || g_135.f4.f3))))) , (safe_rshift_func_int16_t_s_s(((((((void*)0 == &g_158) ^ (safe_add_func_uint32_t_u_u(((**g_192) == l_502), 0x41801E37L))) , g_135.f4.f2) || g_135.f2) , (-7L)), l_50))) != (**g_193)), g_23.f0))), l_22)) , (*l_502));
            }
            if ((l_503 == (*g_192)))
            {
                unsigned l_512 = 4294967295UL;
                (*l_503) = func_58((safe_sub_func_int16_t_s_s(func_24(g_2, (*l_502)), (((g_23.f3 , &g_329) == &g_329) >= (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_23.f1, l_22)), g_23.f4.f0)), 0))))), &g_325);
                return l_512;
            }
            else
            {
                struct S0 l_514 = {1L,4294967293UL,0xCF27C97FL,0x50E5571AL,0x812CF314L};
                char l_516 = 0x69L;
                unsigned l_536 = 1UL;
                if ((safe_unary_minus_func_uint16_t_u(func_9(l_514, (0xD10375DAL ^ 0L), l_515, (g_23.f4.f3 & g_135.f3)))))
                {
                    unsigned char l_518 = 0xE7L;
                    int **l_519 = &g_324;
                    int **l_520 = (void*)0;
                    int **l_521 = &g_64;
                    if (l_516)
                    {
                        char l_517 = 0L;
                        (**g_193) = (**l_503);
                        (**l_519) = (((g_23.f4.f2 <= l_517) , ((g_23.f4.f4 , (l_518 < (l_518 , l_517))) <= (((g_135.f4.f3 != ((*g_192) == l_519)) >= l_514.f2) || l_515.f0))) , (*l_502));
                        (*g_64) = (g_135.f4.f2 >= l_515.f4);
                    }
                    else
                    {
                        (*l_519) = l_502;
                    }
                    (*l_521) = (*g_193);
                }
                else
                {
                    unsigned short l_544 = 0x3A1EL;
                    struct S0 l_545 = {0L,0xA4869FFAL,1UL,1L,1UL};
                    for (g_2 = (-6); (g_2 < 16); ++g_2)
                    {
                        unsigned l_542 = 0xB680B1F5L;
                    }
                }
            }
            (*l_502) = (***g_192);
            (*l_502) = (func_9((func_9(((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x50L, (safe_sub_func_int16_t_s_s((g_23.f4.f1 & g_482), 65535UL)))), (func_24(g_135.f4.f2, g_23.f1) ^ g_135.f4.f0))) , func_37((*g_158), (*l_502))), g_135.f1, l_486, g_135.f4.f1) , l_546), l_22, l_515, l_515.f2) >= 1L);
        }
    }
    else
    {
        unsigned l_563 = 0x224D2B47L;
        struct S1 l_567 = {6UL,0xFF54L,-7L,0xDD16L,{0xB52DL,4294967295UL,0xBE2E4608L,0x9FF7E0A4L,3UL},0L};
        int ** const l_581 = &l_558;
        int **l_583 = &g_324;
        int ***l_582 = &l_583;
        for (g_135.f5 = (-22); (g_135.f5 <= (-19)); g_135.f5++)
        {
            unsigned l_562 = 0x2115BC5EL;
            for (g_23.f4.f1 = (-25); (g_23.f4.f1 != 16); g_23.f4.f1 = safe_add_func_int8_t_s_s(g_23.f4.f1, 5))
            {
                int **l_559 = &l_558;
                (*l_559) = func_58(((void*)0 != &g_94), l_558);
                if (((safe_lshift_func_int8_t_s_s(l_562, (0x50F65B8BL > (**l_559)))) == ((l_563 > (((safe_unary_minus_func_uint16_t_u(((*l_558) & func_24(g_2, g_23.f0)))) != (((void*)0 != &g_329) == (-1L))) & 0x83L)) || 3UL)))
                {
                    if (l_562)
                        break;
                    (*g_64) = (safe_mod_func_uint16_t_u_u(((l_563 > (*g_64)) && (((l_567 , 1UL) , (void*)0) == (((safe_rshift_func_uint8_t_u_s(((l_567.f4.f3 && 0xC4FE3FE5L) , (safe_sub_func_uint8_t_u_u(g_23.f4.f4, 0x58L))), 3)) || 255UL) , (void*)0))), g_135.f4.f2));
                }
                else
                {
                    for (g_135.f0 = (-13); (g_135.f0 != 4); g_135.f0 = safe_add_func_uint16_t_u_u(g_135.f0, 1))
                    {
                        const struct S0 ***l_576 = &l_574;
                        (*l_576) = l_574;
                        (*g_64) = 0xAD12EC64L;
                    }
                    for (g_23.f1 = 0; (g_23.f1 < 18); ++g_23.f1)
                    {
                        int **l_579 = (void*)0;
                        int **l_580 = &g_324;
                        (*l_580) = (**g_192);
                    }
                }
                (***g_192) = (*l_558);
            }
        }
        (*l_582) = l_581;
        (*l_558) = (*l_558);
        (*l_558) = (g_135.f0 <= (safe_lshift_func_uint8_t_u_u(1UL, 7)));
    }
    (**g_193) = (safe_lshift_func_uint16_t_u_u(g_135.f5, 7));
    (**g_193) = (+(((*l_558) < (0UL | ((*l_558) >= ((((((safe_mod_func_uint16_t_u_u((((func_9((*g_158), (*l_558), (*g_158), func_9(l_515, g_135.f3, (*g_158), (*l_558))) >= (*l_558)) , (*l_558)) | (*l_558)), (*l_558))) == (*g_324)) | 1UL) > (*l_558)) , 0UL) != (-1L))))) >= g_135.f1));
    return g_23.f4.f3;
}







static char func_9(struct S0 p_10, int p_11, struct S0 p_12, const unsigned p_13)
{
    int *l_488 = &g_65;
    l_488 = l_488;
    return g_23.f4.f4;
}







static struct S0 func_14(int p_15, unsigned short p_16, struct S1 p_17, char p_18, unsigned p_19)
{
    (***g_192) = 1L;
    return p_17.f4;
}







static unsigned short func_24(unsigned char p_25, char p_26)
{
    int **l_485 = &g_324;
    (*l_485) = (**g_192);
    return (**l_485);
}







static short func_33(struct S0 p_34, unsigned p_35, unsigned short p_36)
{
    int *l_483 = (void*)0;
    int **l_484 = &l_483;
    (*g_64) = g_482;
    (*l_484) = l_483;
    return g_135.f3;
}







static struct S0 func_37(struct S0 p_38, unsigned char p_39)
{
    unsigned l_336 = 4294967295UL;
    int *l_337 = &g_325;
    struct S1 l_338 = {0x1E1CL,-1L,3L,65527UL,{-8L,0x3DC06B8AL,4294967291UL,0xDFF8A22BL,1UL},0xB5E4L};
    int **l_339 = &g_64;
    unsigned char l_381 = 0x84L;
    const int l_385 = 0x5487B852L;
    (*l_339) = l_337;
    for (p_39 = (-30); (p_39 != 16); p_39 = safe_add_func_int16_t_s_s(p_39, 6))
    {
        int *l_342 = &g_325;
        int **l_343 = &g_64;
        int l_364 = (-1L);
        struct S0 l_471 = {0x974CL,0x1F2D75E2L,2UL,0L,0x540D96EBL};
        struct S1 l_479 = {3UL,0L,0x067BL,65535UL,{0xF63CL,0x25B84161L,4294967295UL,0x8D92066DL,0xDAC93B36L},0xC8C0L};
        (*l_339) = l_342;
        (*l_339) = l_342;
        (*l_343) = (*g_193);
        for (l_338.f1 = 0; (l_338.f1 > 16); l_338.f1 = safe_add_func_uint32_t_u_u(l_338.f1, 5))
        {
            unsigned l_357 = 4294967291UL;
            struct S1 l_380 = {65531UL,0x6C76L,0x820BL,0xF872L,{-3L,1UL,0UL,-1L,0x3ED229A9L},0x4B68L};
            int l_417 = 0xD1D736AFL;
            int ***l_474 = (void*)0;
        }
    }
    (*g_324) = (+(func_45((**l_339), ((((**g_193) && (safe_lshift_func_int8_t_s_u((+(0UL == (!(!p_39)))), g_135.f4.f2))) || (p_38.f0 >= g_23.f4.f1)) , p_38.f1)) != 251UL));
    (*g_64) = p_39;
    return p_38;
}







static struct S0 func_40(unsigned p_41, unsigned char p_42)
{
    unsigned l_144 = 0x2D86D1A4L;
    struct S1 l_163 = {0x13A0L,-2L,0L,1UL,{0x5A96L,0xC68CCC04L,4294967290UL,0x3440FC8FL,0x13514C0AL},1L};
    int l_164 = (-1L);
    struct S0 *l_165 = &g_23.f4;
    int *l_166 = &g_65;
    const unsigned l_167 = 0x7D783D8BL;
    int **l_195 = (void*)0;
    int ** const *l_194 = &l_195;
    char l_235 = (-7L);
    struct S0 *l_267 = (void*)0;
    short l_294 = 3L;
    for (g_135.f4.f3 = 16; (g_135.f4.f3 > (-15)); g_135.f4.f3 = safe_sub_func_int8_t_s_s(g_135.f4.f3, 6))
    {
        char l_149 = 0x59L;
        int *l_150 = &g_65;
        (*l_150) = ((safe_sub_func_int8_t_s_s((0xB3331872L < (((safe_mod_func_int8_t_s_s(func_45(l_144, p_42), g_23.f5)) >= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(p_42, 5)), 12))) | l_149)), l_149)) , (g_23.f0 ^ 0xC4L));
        if (l_144)
            break;
    }
    (*l_166) = ((func_45(p_42, ((safe_rshift_func_int8_t_s_s((l_144 , (p_42 ^ (safe_mod_func_int16_t_s_s(p_41, (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u(l_144)), (g_158 != ((!(l_144 > ((safe_lshift_func_uint16_t_u_s(0x3237L, 14)) || ((func_45(((safe_rshift_func_uint8_t_u_u((l_163 , 0UL), 5)) > g_135.f4.f1), l_163.f2) || 4UL) && l_164)))) , l_165)))))))), 3)) && 0L)) > l_163.f0) , (-5L));
    (*l_166) = ((((((((*l_166) != (8L || ((*l_166) & l_167))) || (safe_rshift_func_int8_t_s_u(g_23.f0, ((p_42 , (*l_166)) ^ p_41)))) >= (p_41 >= 6UL)) ^ (*l_166)) & (*g_64)) && p_42) | 1L);
    if (func_45(((func_45(((safe_mod_func_uint8_t_u_u((p_42 , (p_42 ^ ((g_135.f5 >= p_42) != ((*l_166) & (*l_166))))), (*l_166))) < p_42), (*l_166)) ^ g_23.f4.f4) , p_42), g_135.f5))
    {
        unsigned char l_176 = 0xC8L;
        int *l_215 = &l_164;
        int *l_218 = &g_65;
        struct S0 *l_230 = (void*)0;
        struct S1 l_251 = {65535UL,0xAFE8L,-1L,0UL,{0x11AEL,4294967294UL,4294967295UL,0L,0x11DB535AL},-1L};
        if ((+(safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_176, 0xDA82L)), (safe_lshift_func_int8_t_s_u((((0xE2L != l_176) || (((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((*l_166), (*l_166))), p_42)) ^ (*g_64)) & (p_41 ^ p_42))) != 255UL), p_42))))))
        {
            int *l_183 = &g_65;
            (*g_64) = (p_41 , p_42);
            if (l_176)
            {
                int **l_184 = &l_166;
                (*l_184) = func_58(g_135.f4.f1, l_183);
            }
            else
            {
                int **l_185 = &l_183;
                struct S0 **l_196 = (void*)0;
                (*g_64) = (-4L);
                (*l_185) = func_58((p_41 != (*l_183)), l_183);
                if (((safe_mod_func_int8_t_s_s(g_135.f1, 0xA4L)) , (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((g_192 == l_194), (((g_23.f1 > p_41) && (((((0xC0DAL >= (5UL != func_45(((0xC7C3L <= l_176) , 0xB4L), p_42))) == p_41) & 0x2550L) ^ p_42) ^ 0x05L)) | g_135.f2))), l_176))))
                {
                    unsigned short l_209 = 0x7843L;
                    if ((g_23.f4.f4 , ((+(**l_185)) , ((void*)0 != l_196))))
                    {
                        (*g_64) = (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((**l_185), p_42)) ^ (g_135.f4.f0 < (p_41 > p_41))), 1)) || g_23.f1) != (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s(0x9EL, (safe_lshift_func_int16_t_s_s(p_41, (safe_lshift_func_uint8_t_u_s(g_2, p_42)))))) && (**g_193)) || 0x7BL), p_41)));
                    }
                    else
                    {
                        int * const l_210 = &g_65;
                        int **l_211 = (void*)0;
                        int **l_212 = &l_166;
                        (**l_185) = (0L != func_45(l_209, p_42));
                        (*l_212) = l_210;
                    }
                    for (g_135.f3 = (-20); (g_135.f3 <= 14); g_135.f3++)
                    {
                        return (*g_158);
                    }
                    g_64 = l_215;
                    for (g_135.f4.f3 = 0; (g_135.f4.f3 < 6); g_135.f4.f3++)
                    {
                        const unsigned l_225 = 0x2A7BFF7CL;
                        (*l_185) = l_218;
                        (*g_64) = (safe_sub_func_uint16_t_u_u(p_41, (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_42, (l_225 <= p_42))), ((safe_mod_func_uint16_t_u_u((*l_218), g_135.f2)) == ((*l_194) != (void*)0))))));
                    }
                }
                else
                {
                    struct S0 **l_231 = &g_94;
                    int **l_234 = &l_166;
                    short l_246 = 0xA9B3L;
                    for (l_163.f4.f3 = 0; (l_163.f4.f3 > 18); l_163.f4.f3 = safe_add_func_int16_t_s_s(l_163.f4.f3, 5))
                    {
                        if ((**g_193))
                            break;
                        (*l_166) = ((p_42 && ((void*)0 == (*l_185))) | (!(*l_215)));
                    }
                    (*l_231) = l_230;
                    if ((safe_add_func_uint8_t_u_u((func_45(((*g_192) == ((((void*)0 == &l_165) , ((func_45((*l_215), ((*l_231) != (void*)0)) > 8UL) > (l_215 == (void*)0))) , l_234)), g_23.f2) , l_235), 0x3CL)))
                    {
                        int *l_244 = &g_65;
                        int ***l_245 = &l_195;
                        (**l_234) = (**l_234);
                        (*l_183) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((p_41 ^ ((safe_sub_func_uint16_t_u_u(((func_45((p_42 & ((((safe_rshift_func_int8_t_s_u((0x3D41L | ((l_244 != ((((**l_234) ^ (l_245 == (void*)0)) == g_135.f0) , func_58(g_135.f2, (*l_234)))) ^ g_135.f3)), 5)) | (*l_244)) && g_23.f4.f3) != (*g_64))), l_246) , 4294967295UL) | g_23.f5), (*l_215))) || 0x57L)) || (*l_215)), g_135.f0)), p_42));
                        (*l_185) = (*l_234);
                    }
                    else
                    {
                        int **l_248 = &l_215;
                        (**l_234) = (*l_183);
                        (*l_248) = g_247;
                    }
                }
            }
        }
        else
        {
            unsigned l_270 = 0x8411FD18L;
            const struct S0 *l_305 = &g_135.f4;
            int **l_306 = &g_64;
            for (l_163.f5 = 0; (l_163.f5 <= 28); l_163.f5 = safe_add_func_int32_t_s_s(l_163.f5, 4))
            {
                unsigned short l_258 = 65535UL;
                int l_285 = 1L;
                if ((g_23.f4.f1 <= (l_251 , (((safe_lshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((g_135.f2 & (p_41 < 0x52AD3A7CL)), (*l_166))) , &g_23) == ((((safe_lshift_func_int16_t_s_s(((p_42 > g_65) == g_135.f0), (*l_215))) == l_258) < g_2) , (void*)0)), p_41)) , 0x0335DBA2L) , 7UL))))
                {
                    (*l_166) = (+(safe_add_func_int32_t_s_s((((((*g_158) , (((safe_mod_func_uint16_t_u_u(p_41, (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_42, p_42)), 6)))) <= 0xC04AL) != p_41)) , ((void*)0 == l_267)) , (void*)0) == l_218), 4294967295UL)));
                }
                else
                {
                    int *l_271 = &g_65;
                    for (l_144 = 0; (l_144 <= 33); l_144++)
                    {
                        struct S0 l_282 = {0x52D0L,0x6111D3FEL,0x18443DA2L,-3L,0x5E65BEFBL};
                        g_64 = (l_270 , l_271);
                        (**g_193) = (safe_add_func_uint8_t_u_u(0UL, p_42));
                        l_285 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_23.f2, func_45((safe_rshift_func_uint8_t_u_s((l_258 < 7UL), 5)), (((l_282 , g_23.f4.f2) >= p_42) ^ (((((*l_271) || (safe_add_func_int16_t_s_s((((func_45(g_135.f1, g_135.f4.f4) | g_23.f1) , 0UL) < p_41), g_135.f4.f1))) == g_23.f1) , l_258) , p_42))))) , 0x6FL), 6)), p_42));
                    }
                }
                if ((*l_166))
                    break;
                (*l_218) = ((safe_rshift_func_int16_t_s_s((l_218 != (void*)0), 10)) | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_42, l_285)), ((((safe_sub_func_uint8_t_u_u((*l_218), (((g_23.f4.f1 ^ l_270) | (4294967295UL || l_294)) >= g_135.f0))) , l_270) , 0xAEA6EA95L) , p_42))) & g_135.f0));
            }
            (***g_192) = (((safe_sub_func_int32_t_s_s((*l_218), ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((g_23.f0 <= 0x8FL), (*l_218))) | ((*g_158) , ((safe_sub_func_uint8_t_u_u((l_230 != (p_41 , l_305)), 8UL)) & 0UL))) || (*l_215)), 1L)), p_41)) <= 1UL))) < 7L) || 0x86L);
            (*l_306) = (*g_193);
        }
        (*l_218) = func_45(g_135.f1, (safe_mod_func_int32_t_s_s((**g_193), g_135.f4.f3)));
    }
    else
    {
        struct S0 **l_309 = &g_94;
        struct S1 l_310 = {0UL,0L,0x055DL,1UL,{0x8480L,4294967288UL,0xC90FF421L,1L,0x857A78FEL},0x24BAL};
        int l_319 = (-5L);
        int *l_326 = &l_164;
        int **l_327 = &l_166;
        struct S0 ***l_328 = &l_309;
        int *l_334 = (void*)0;
        (*l_309) = l_267;
        (*l_327) = func_51(p_42, func_51(((l_310 , func_45((safe_sub_func_uint32_t_u_u(p_42, ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_135.f4.f2 & (safe_rshift_func_int16_t_s_u((l_309 == &g_94), 0))), (~l_319))), (func_45(l_310.f4.f4, (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_2, g_23.f1)), 0xCAL))) ^ 0xB379C0B1L))) ^ p_41))), g_23.f2)) == g_135.f4.f0), g_324, &l_319, g_135), l_326, l_310);
        (*l_328) = l_309;
        if ((p_42 != (*l_166)))
        {
            struct S1 ***l_331 = &g_329;
            (*l_331) = g_329;
            for (l_310.f4.f4 = 4; (l_310.f4.f4 > 54); l_310.f4.f4++)
            {
                (*l_327) = l_334;
            }
            (*l_328) = &g_94;
        }
        else
        {
            int **l_335 = &l_334;
            (*l_335) = (**g_192);
            (*l_327) = (void*)0;
        }
    }
    return (*l_165);
}







static unsigned short func_45(unsigned char p_46, unsigned p_47)
{
    struct S1 l_56 = {65531UL,-1L,7L,0x00BAL,{0x34C2L,4294967291UL,7UL,0x95BCD591L,4294967295UL},-1L};
    int *l_57 = (void*)0;
    struct S1 l_66 = {0xBCA7L,0xF0C8L,0x8AFEL,0UL,{0x087DL,4294967286UL,0x3BD28F7DL,0x61DAE56BL,0x6AF746A6L},2L};
    int **l_71 = (void*)0;
    int **l_72 = &g_64;
    const short l_95 = (-4L);
    int *l_110 = (void*)0;
    struct S0 *l_131 = &l_66.f4;
    struct S1 *l_134 = &g_135;
    (*l_72) = func_51((l_56 , l_56.f1), l_57, func_58(p_46, l_57), l_66);
    for (l_56.f0 = (-22); (l_56.f0 < 24); l_56.f0++)
    {
        struct S0 *l_75 = &l_66.f4;
        struct S0 **l_76 = (void*)0;
        struct S0 **l_77 = &l_75;
        int l_78 = 1L;
        int **l_86 = (void*)0;
        (*l_77) = l_75;
        if ((255UL & ((l_78 == (l_78 , l_78)) , g_23.f3)))
        {
            (**l_72) = (**l_72);
        }
        else
        {
            short l_83 = 0xEE9AL;
            unsigned l_87 = 4294967290UL;
            int l_123 = 5L;
            for (l_56.f1 = 26; (l_56.f1 > 9); l_56.f1 = safe_sub_func_uint32_t_u_u(l_56.f1, 1))
            {
                int **l_98 = &g_64;
                short l_108 = 0x22D3L;
                struct S0 **l_111 = &g_94;
                for (l_66.f1 = (-4); (l_66.f1 >= 5); l_66.f1 = safe_add_func_uint32_t_u_u(l_66.f1, 3))
                {
                    return p_46;
                }
            }
            if (p_46)
                continue;
            (**l_72) = (safe_add_func_uint8_t_u_u(g_23.f4.f0, 1L));
        }
    }
    return g_23.f3;
}







static int * func_51(unsigned p_52, int * p_53, int * p_54, struct S1 p_55)
{
    struct S0 *l_69 = &g_23.f4;
    const int *l_70 = &g_65;
    (*p_54) = ((((g_23 , ((safe_mod_func_uint8_t_u_u(((((1L && g_23.f2) , g_23.f3) && p_55.f4.f3) & (((((((l_69 == (((65535UL >= (((p_55.f4.f3 > g_65) , &g_65) == l_70)) , (*l_70)) , (void*)0)) , l_69) == l_69) && (*l_70)) == 4294967288UL) <= p_55.f4.f4) == p_55.f4.f3)), 5L)) ^ p_55.f5)) >= g_23.f4.f2) & (*l_70)) , 0x8113439BL);
    (*p_54) = (&l_69 == ((&l_69 == (void*)0) , (void*)0));
    return p_54;
}







static int * func_58(const int p_59, int * p_60)
{
    struct S1 l_61 = {0UL,-10L,1L,0xBA4BL,{0xACABL,0UL,4294967292UL,7L,0x4505AF75L},-5L};
    struct S0 *l_62 = &g_23.f4;
    struct S0 **l_63 = &l_62;
    (*l_63) = (l_61 , l_62);
    return g_64;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_23.f4.f0, "g_23.f4.f0", print_hash_value);
    transparent_crc(g_23.f4.f1, "g_23.f4.f1", print_hash_value);
    transparent_crc(g_23.f4.f2, "g_23.f4.f2", print_hash_value);
    transparent_crc(g_23.f4.f3, "g_23.f4.f3", print_hash_value);
    transparent_crc(g_23.f4.f4, "g_23.f4.f4", print_hash_value);
    transparent_crc(g_23.f5, "g_23.f5", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_135.f1, "g_135.f1", print_hash_value);
    transparent_crc(g_135.f2, "g_135.f2", print_hash_value);
    transparent_crc(g_135.f3, "g_135.f3", print_hash_value);
    transparent_crc(g_135.f4.f0, "g_135.f4.f0", print_hash_value);
    transparent_crc(g_135.f4.f1, "g_135.f4.f1", print_hash_value);
    transparent_crc(g_135.f4.f2, "g_135.f4.f2", print_hash_value);
    transparent_crc(g_135.f4.f3, "g_135.f4.f3", print_hash_value);
    transparent_crc(g_135.f4.f4, "g_135.f4.f4", print_hash_value);
    transparent_crc(g_135.f5, "g_135.f5", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
