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
   unsigned f0 : 6;
   volatile unsigned f1 : 5;
   volatile unsigned f2 : 20;
   unsigned f3 : 15;
   unsigned f4 : 4;
   volatile signed f5 : 13;
   unsigned f6 : 24;
};

struct S1 {
   signed f0 : 2;
   unsigned f1 : 28;
   signed f2 : 25;
   unsigned f3 : 17;
   signed f4 : 2;
   signed f5 : 13;
   unsigned f6 : 9;
   unsigned f7 : 31;
};


static char g_12 = 0x45L;
static int g_29 = 0x7DD9AE65L;
static struct S1 g_46 = {-0,10938,-3394,237,-0,28,10,11093};
static struct S1 *g_45 = &g_46;
static int g_62 = 5L;
static int *g_61 = &g_62;
static int **g_97 = &g_61;
static int g_114 = 0L;
static struct S0 g_155 = {6,4,581,3,3,-38,3277};
static struct S0 g_204 = {6,4,367,15,2,-22,277};
static struct S0 g_206 = {5,2,867,75,3,-18,2074};
static volatile struct S0 g_231 = {4,3,426,148,3,-56,3034};
static volatile struct S0 g_232 = {6,3,549,65,3,0,672};
static volatile struct S0 g_292 = {6,3,790,30,2,-63,3128};
static volatile struct S0 *g_291 = &g_292;
static unsigned g_304 = 1UL;
static volatile struct S1 g_407 = {-1,5710,2236,293,-1,14,13,46041};
static volatile struct S1 *g_406 = &g_407;
static volatile struct S1 **g_405 = &g_406;
static volatile struct S1 ***g_404 = &g_405;
static volatile struct S0 g_501 = {4,0,65,39,2,56,1949};
static volatile struct S0 g_502 = {5,1,658,66,0,78,1268};
static int g_677 = 1L;
static struct S0 g_694 = {3,1,979,152,2,-54,2774};
static struct S0 g_695 = {7,4,177,124,0,-37,272};
static volatile struct S0 g_700 = {7,3,677,35,0,-43,3856};
static int g_720 = 0L;
static int g_732 = 0xA2EC8032L;
static volatile struct S0 *g_783 = &g_292;
static struct S0 g_821 = {3,3,89,64,2,74,3875};
static struct S1 g_822 = {0,9239,4771,59,-1,-72,2,24492};



static unsigned char func_1(void);
static int func_2(short p_3, int p_4, char p_5, unsigned short p_6);
static short func_17(int p_18, int p_19, short p_20, unsigned p_21, int p_22);
static short func_25(int p_26, short p_27);
static int * func_30(unsigned char p_31, int * p_32, unsigned char p_33);
static struct S1 * func_39(int p_40);
static int * func_41(struct S1 * p_42, unsigned short p_43, unsigned short p_44);
static short func_49(short p_50, int * p_51);
static int ** func_66(unsigned p_67, int * p_68, int * p_69, int ** p_70);
static int * func_73(int p_74, int * p_75, int ** p_76);
static unsigned char func_1(void)
{
    char l_7 = 0xC6L;
    short l_341 = 0L;
    int l_342 = (-10L);
    int l_471 = (-4L);
    struct S1 *l_472 = &g_46;
    char l_473 = 1L;
    int l_492 = 0xB6DC8C6BL;
    int l_570 = (-2L);
    int l_611 = 0x0AE45332L;
    volatile struct S1 **l_616 = &g_406;
    int l_621 = (-7L);
    struct S1 *l_633 = &g_46;
    short l_636 = 0x31BEL;
    int **l_637 = (void*)0;
    unsigned short l_640 = 0x6C7BL;
    unsigned l_659 = 4294967294UL;
    unsigned char l_669 = 255UL;
    short l_674 = 2L;
    int l_717 = 0L;
    l_471 ^= func_2(l_7, (((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_12 > g_12), (safe_add_func_uint8_t_u_u((0x9017CA4EL != ((safe_rshift_func_uint8_t_u_s((((((((func_17(l_7, (safe_add_func_uint16_t_u_u(65535UL, func_25((0x0146L ^ g_12), l_7))), l_7, g_12, g_12) ^ l_7) != (-5L)) || 0x5A0B546CL) ^ l_7) & g_204.f6) && 0x19D6L) < g_12), 7)) < g_204.f3)), g_206.f0)))), g_155.f0)) ^ 3L) <= 3L), l_341, l_342);


    l_473 ^= (l_7 & (l_472 != (void*)0));
    if ((safe_add_func_int16_t_s_s(l_342, g_46.f1)))
    {
        short l_480 = (-10L);
        int **l_485 = &g_61;
        int l_488 = 0x544E72F9L;
        int *l_491 = &l_471;
        int l_506 = 0xE95F43F9L;
        unsigned char l_507 = 0xDFL;
        unsigned short l_549 = 1UL;
        unsigned char l_612 = 255UL;
        struct S1 l_618 = {1,1969,-4547,25,1,65,4,42206};
        unsigned char l_632 = 5UL;
        struct S1 **l_634 = &g_45;
        if ((safe_lshift_func_uint8_t_u_s(g_407.f7, (safe_add_func_int32_t_s_s(l_480, ((g_304 <= ((safe_lshift_func_int8_t_s_s(l_480, 7)) <= g_46.f2)) && ((&g_62 == (void*)0) == (g_155.f3 != ((-1L) ^ l_341)))))))))
        {
            int **l_486 = &g_61;
            (*g_97) = &g_29;

            ;
            (*g_45) = (*l_472);
            (**l_486) |= ((+(l_485 != l_486)) | (l_342 ^ 0xAA3FL));
            (**g_97) ^= 0L;
        }
        else
        {
            unsigned l_487 = 0x032D324CL;
            l_488 &= (!l_487);
            if (l_492)
            {
                return g_407.f7;
            }
            else
            {
                (*g_405) = (void*)0;

                ;
            }

            ;
            (*l_491) |= ((g_292.f4 != func_25((&l_485 == &l_485), g_46.f7)) != ((l_473 & (safe_add_func_int8_t_s_s(((((g_46.f0 < l_342) & (((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_206.f3, g_204.f4)), g_46.f6)) != g_114) & l_492)) || l_487) != 65535UL), l_487))) <= g_204.f4));
            (*g_291) = g_501;
        }

        ;
        if (l_471)
        {
            int *l_503 = &l_488;
            int *l_562 = &g_62;
            (*g_291) = g_502;
            (*g_97) = l_503;

            ;
            if ((safe_mod_func_uint8_t_u_u(((65535UL != (*l_491)) == (*g_61)), 0x66L)))
            {
                int l_512 = 0x6DC88F7FL;
                struct S0 *l_538 = (void*)0;
                struct S0 **l_537 = &l_538;
                (*g_45) = (*l_472);
                (*g_61) = (g_204.f2 != (safe_sub_func_uint32_t_u_u(((**g_97) <= ((g_46.f4 > g_114) > (safe_sub_func_uint8_t_u_u(g_206.f6, func_25((**g_97), (*l_491)))))), ((!(l_512 < (*l_503))) >= g_46.f1))));
                for (l_507 = 0; (l_507 < 39); l_507 = safe_add_func_int8_t_s_s(l_507, 2))
                {
                    short l_529 = 0xF874L;
                    char l_532 = 0L;
                    short l_546 = 0L;
                }
            }
            else
            {
                short l_576 = 0L;
                unsigned l_579 = 1UL;
                struct S0 *l_586 = &g_204;
                struct S0 **l_585 = &l_586;
                int *l_595 = &g_62;
                (*l_562) &= (**g_97);
                for (l_570 = 0; (l_570 > (-26)); l_570 = safe_sub_func_int8_t_s_s(l_570, 1))
                {
                    unsigned l_573 = 0xB750284FL;
                    l_573 ^= (g_292.f6 & (&g_97 == &g_97));
                }
                if (((*l_562) > (((safe_rshift_func_uint16_t_u_s(l_576, 5)) & (**g_97)) & 3UL)))
                {
                    (*g_61) ^= 0x2536C5F6L;
                }
                else
                {
                    (*g_97) = (*g_97);
                    (**g_97) &= (-10L);
                }
                if (((safe_mod_func_int32_t_s_s((+l_579), (safe_rshift_func_int8_t_s_u((~g_206.f0), 7)))) ^ (*g_61)))
                {
                    unsigned l_582 = 4294967290UL;
                    int *l_587 = &g_62;
                    if ((*g_61))
                    {
                        (*g_97) = l_587;

                        ;
                        return g_292.f5;
                    }
                    else
                    {
                        int ***l_588 = &l_485;
                        (*l_472) = (*g_45);
                        (*g_97) = (*g_97);
                        (*l_562) = (*l_595);
                        (**l_588) = (*g_97);
                    }
                }
                else
                {
                    unsigned short l_613 = 0UL;
                    if ((safe_mod_func_int8_t_s_s(func_49(g_501.f3, (*g_97)), (safe_add_func_uint32_t_u_u(g_114, g_155.f6)))))
                    {
                        unsigned char l_602 = 0UL;
                        l_562 = l_503;

                        ;
                        (*g_291) = (*g_291);
                        l_342 = ((func_25(((g_304 >= l_611) & g_407.f3), (*l_595)) < g_206.f0) == 0x4F1C4C7AL);
                        (*l_595) |= (g_292.f5 | (func_25((0x01343C0FL == l_612), l_602) | l_613));
                    }
                    else
                    {
                        return g_292.f4;


                    }

                    ;
                    ;
                    (*l_491) = g_204.f5;
                    (*l_595) = func_25(l_342, g_231.f0);
                }

                ;
                ;
            }

            ;
            ;
            (*g_97) = (*l_485);
        }
        else
        {
            int *l_617 = &g_114;
            (*l_491) &= l_342;
            for (l_471 = 15; (l_471 >= (-8)); --l_471)
            {
                l_616 = (*g_404);
                (*l_485) = l_617;

                ;
            }
            (*l_472) = l_618;
            (*l_485) = &g_29;

            ;
        }

        ;
        (*l_634) = l_633;
    }
    else
    {
        int *l_635 = &l_342;
        (*l_635) ^= 0x05136696L;
    }

    ;
    if ((l_636 & l_342))
    {
        unsigned short l_647 = 3UL;
        int *l_648 = &l_471;
        (*l_648) = (safe_rshift_func_uint16_t_u_s(((func_25(g_155.f6, l_640) <= g_231.f0) || (safe_add_func_uint16_t_u_u(g_502.f5, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_647, 3)), g_46.f7))))), l_647));
    }
    else
    {
        unsigned short l_649 = 65535UL;
        int ***l_658 = &g_97;
        int l_660 = (-1L);
        struct S1 l_727 = {-0,3655,-3410,250,0,77,7,41273};
        struct S0 *l_764 = &g_694;
        int l_816 = 0L;
        struct S1 **l_838 = &l_472;
        struct S1 ***l_837 = &l_838;
        unsigned short l_845 = 0x12CBL;
        if (func_25(l_649, ((safe_rshift_func_uint8_t_u_u((g_155.f5 ^ (0L != (-4L))), ((safe_rshift_func_uint8_t_u_s(0x47L, 5)) >= ((*g_404) == (void*)0)))) | (safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(func_25(((((void*)0 == l_658) | 0xAD44L) > g_204.f0), l_659), l_660)) | 1L), 65531UL)))))
        {
            short l_665 = 0L;
            int *l_666 = &g_62;
            int l_693 = 1L;
            (*l_666) |= (l_665 >= g_232.f1);
            if ((safe_add_func_int32_t_s_s((l_669 || ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(l_674, g_407.f3)) | (9L != 0x61074427L)), (&l_666 != (*l_658)))) & (+(-1L)))), (safe_add_func_int16_t_s_s(((((g_46.f3 >= g_677) | g_204.f4) <= g_206.f4) || (*l_666)), g_29)))))
            {
                return (*l_666);
            }
            else
            {
                int l_687 = (-8L);
                short l_692 = (-10L);
                int *l_699 = &l_693;
                if (l_471)
                {
                    struct S1 l_678 = {-0,3093,4909,14,1,42,14,45925};
                    struct S0 *l_697 = &g_694;
                    struct S0 **l_696 = &l_697;
                    int *l_698 = &l_693;
                    (*g_45) = l_678;
                    (**l_658) = (void*)0;

                    ;
                    if ((((((g_204.f0 <= 9UL) && l_678.f2) != (253UL & (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_678.f7 < (safe_mod_func_uint32_t_u_u(l_687, (safe_add_func_int32_t_s_s(g_114, func_25((g_206.f3 & (safe_rshift_func_int16_t_s_s(g_407.f5, l_687))), g_62)))))) > 1UL), g_304)), l_649)), l_692)))) > l_341) && l_693))
                    {
                        g_695 = g_694;
                    }
                    else
                    {
                        (**l_658) = l_699;

                        ;
                    }

                    ;
                }
                else
                {
                    g_700 = (*g_291);
                }


            }


        }
        else
        {
            unsigned char l_703 = 1UL;
            unsigned short l_704 = 0x827AL;
            int *l_716 = &l_660;
            struct S1 *l_744 = (void*)0;
            short l_765 = 0L;
            unsigned l_771 = 0xCC5C8492L;
            char l_778 = 0x07L;
            struct S0 *l_790 = &g_694;
            unsigned char l_814 = 0x17L;
            int l_831 = 0x58F0B7A2L;
            int **l_832 = &l_716;
            l_703 &= (safe_rshift_func_uint16_t_u_s(g_204.f2, 6));
            if (l_704)
            {
                int l_707 = 1L;
                unsigned char l_712 = 1UL;
                short l_725 = 0x9FBCL;
                unsigned short l_729 = 9UL;
                struct S1 **l_731 = (void*)0;
                struct S1 ***l_730 = &l_731;
                int l_743 = (-7L);
                l_707 |= l_703;
                for (l_341 = 0; (l_341 > 28); ++l_341)
                {
                    unsigned short l_715 = 65535UL;
                    int *l_724 = (void*)0;
                    volatile struct S0 *l_726 = &g_700;
                    l_707 |= l_703;
                    (*l_633) = (*l_633);
                    if (l_707)
                    {
                        char l_723 = 1L;
                        (*l_716) = (((safe_mod_func_uint8_t_u_u(g_720, (safe_rshift_func_int8_t_s_u(g_292.f1, 4)))) == (4294967295UL == func_25(l_715, l_715))) && (g_204.f2 & (0x9922L != (!((g_46.f5 ^ g_206.f3) > l_725)))));
                        (*g_97) = &l_707;

                        ;
                        if ((*g_61))
                            continue;
                    }
                    else
                    {
                        l_726 = &g_232;

                        ;
                        (*l_726) = (*g_291);
                        (*l_472) = l_727;
                        (*l_716) |= (g_232.f2 | ((void*)0 == &g_291));
                    }

                    ;
                    if ((*l_716))
                        break;
                }


                if (((safe_unary_minus_func_uint32_t_u(l_729)) == (l_730 != &g_405)))
                {
                    if ((l_707 < g_206.f5))
                    {
                        (*l_716) ^= 0x0288732BL;
                    }
                    else
                    {
                        unsigned short l_737 = 1UL;
                        l_707 = (g_501.f4 ^ (g_732 != ((safe_mod_func_int16_t_s_s(((void*)0 == (*g_405)), (safe_mod_func_int32_t_s_s(((&g_291 == &g_291) && l_737), (*l_716))))) | (g_206.f3 > g_694.f0))));
                    }
                }
                else
                {
                    short l_740 = 1L;
                    for (g_62 = (-28); (g_62 >= (-26)); g_62 = safe_add_func_uint16_t_u_u(g_62, 6))
                    {
                        return l_740;


                    }
                    if ((((void*)0 != &l_637) == g_694.f2))
                    {
                        unsigned l_741 = 0xF7AD84D7L;
                        int l_742 = 0xC14FB731L;
                        l_742 |= l_741;
                        l_743 ^= 0x67C6649BL;
                    }
                    else
                    {
                        int l_745 = 0xB7D52065L;
                        (*l_716) = (l_740 != (0x1F906229L <= (safe_rshift_func_uint16_t_u_u(65535UL, 11))));
                        (*l_716) = g_114;
                    }
                    (*l_716) = l_729;
                }
            }
            else
            {
                unsigned l_760 = 0xEBF060A8L;
                unsigned l_761 = 8UL;
                struct S0 *l_793 = &g_204;
                int *l_815 = &g_732;
                if (((safe_mod_func_int8_t_s_s(l_761, g_29)) & g_407.f0))
                {
                    unsigned l_770 = 4294967286UL;
                    int l_781 = 0xB79DD083L;
                    for (l_342 = (-17); (l_342 >= (-8)); l_342 = safe_add_func_uint8_t_u_u(l_342, 5))
                    {
                        (*l_716) = func_25((((&l_716 == &g_61) < l_771) || (*l_716)), g_695.f2);
                        (*l_716) = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(((((l_778 > 0x85BFA9B4L) < (safe_lshift_func_uint8_t_u_s(g_407.f3, 1))) <= l_760) & l_761), (((-2L) > g_155.f0) && (func_25((g_304 < g_694.f0), (*l_716)) <= g_206.f3)))) == 7UL), g_62)), 0x7097L)) > (-1L));
                        l_781 ^= l_770;
                        (*l_472) = (*g_45);
                    }
                    (*g_97) = func_41(&g_46, (safe_unary_minus_func_int32_t_s(g_231.f1)), (!g_694.f3));

                    ;
                }
                else
                {
                    int *l_785 = (void*)0;
                    if ((g_783 != (void*)0))
                    {
                        int *l_784 = &g_677;
                        (*l_784) &= (*l_716);
                        (*g_97) = l_785;

                        ;
                    }
                    else
                    {
                        int *l_791 = &l_342;
                        volatile struct S0 **l_792 = &g_291;
                        (*l_791) ^= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((&g_501 != l_790), 14)), (*l_716)));
                        (*l_716) &= (~l_760);
                        (*l_792) = &g_700;

                        ;
                        g_732 |= ((&g_700 == l_793) == (0L & (g_694.f2 & ((+(safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_204.f4, 10)), (*l_791)))) | g_204.f3))));
                    }

                    ;
                    g_732 |= (*l_716);
                    return g_46.f5;
                }

                ;
                g_46.f5 |= func_25((*l_716), ((safe_lshift_func_uint16_t_u_u((*l_716), 4)) | ((safe_rshift_func_int8_t_s_u((&g_405 == (void*)0), ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(l_760, (safe_mod_func_uint32_t_u_u(l_761, ((((~(!(***l_658))) | g_700.f6) < (***l_658)) | l_814))))) && 0x3145L), g_677)), 0x2AL)) != 0x198275EFL))) <= (-7L))));
                if ((**g_97))
                {
                    for (l_7 = (-21); (l_7 != (-25)); --l_7)
                    {
                        (*l_716) ^= (*g_61);
                        if ((***l_658))
                            continue;
                        (**l_658) = (*g_97);
                    }
                    for (l_717 = 0; (l_717 >= (-18)); l_717 = safe_sub_func_uint8_t_u_u(l_717, 5))
                    {
                        (*g_61) |= ((void*)0 == &l_815);
                        if ((***l_658))
                            break;
                    }
                    (*g_783) = g_821;
                    (*g_45) = g_822;
                }
                else
                {
                    unsigned char l_825 = 0xF2L;
                    struct S1 *l_828 = (void*)0;
                    (*g_61) &= (safe_rshift_func_uint16_t_u_s(g_501.f6, (1L ^ g_822.f3)));
                    if ((l_825 == ((*l_716) ^ g_155.f4)))
                    {
                        struct S1 l_826 = {-0,15952,186,52,1,-47,11,27849};
                        l_727 = l_826;
                        (*g_61) = (*l_815);
                        (*l_633) = (*g_45);
                    }
                    else
                    {
                        int *l_827 = &g_677;
                        (*l_815) &= (**g_97);
                        (**l_658) = l_827;

                        ;
                        (***l_658) = ((***l_658) <= (*l_815));
                        (*l_790) = (*g_291);
                    }

                    ;
                    (*g_291) = (*l_793);
                    (*l_815) &= func_17((l_828 == (*g_405)), (g_502.f2 & g_821.f0), ((safe_rshift_func_int8_t_s_s(g_46.f7, 6)) == g_155.f0), l_825, (*l_716));

                    ;
                }

                ;
                (**l_658) = func_41(&g_822, g_46.f7, g_821.f1);

                ;
            }
        }
        g_677 &= (safe_sub_func_int8_t_s_s(g_232.f6, 1L));
    }
    return g_114;
}







static int func_2(short p_3, int p_4, char p_5, unsigned short p_6)
{
    char l_345 = 1L;
    int l_357 = 0xA07811D1L;
    struct S1 *l_417 = &g_46;
    int l_420 = 0x9E7FABF3L;
    struct S0 **l_454 = (void*)0;
    int *l_468 = &g_114;
    for (g_12 = 16; (g_12 == 27); ++g_12)
    {
        unsigned l_361 = 0x5987FBF2L;
        int *l_389 = &g_114;
        short l_421 = (-1L);
        if (((&g_292 == (void*)0) && l_345))
        {
            unsigned l_358 = 4294967295UL;
            struct S1 *l_399 = (void*)0;
            int l_437 = 4L;
            int l_453 = 0x1B151791L;
            struct S0 *l_458 = (void*)0;
            int **l_462 = &g_61;
            if ((&g_61 != &g_61))
            {
                int *l_346 = &g_29;
                struct S1 l_363 = {0,5479,-4502,230,-1,82,13,6275};
                int l_403 = 0xE8C3105BL;
                if ((((l_346 != (void*)0) ^ (safe_sub_func_uint8_t_u_u((l_345 >= ((((void*)0 != l_346) && (safe_lshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0xF9F7L, (safe_rshift_func_int16_t_s_u((g_155.f5 || l_357), l_358)))), l_358)) == (*l_346)) > g_46.f7), g_12))) | 0x8EFFL)), (*l_346)))) || 65535UL))
                {
                    int l_362 = (-3L);
                    if ((0xF3L == (((((func_25(l_358, (*l_346)) == 0x9E7BL) ^ (safe_sub_func_int8_t_s_s(((l_361 < l_362) && g_62), l_362))) & p_4) | p_6) ^ 0x58L)))
                    {
                        int l_379 = (-9L);
                        (*g_97) = (void*)0;

                        ;
                        (*g_45) = l_363;
                        (*g_97) = (*g_97);
                        (*l_346) ^= (g_46.f3 | (((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u(g_292.f3, (p_4 == (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 != (*g_97)), ((((g_114 == (4UL && (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((p_5 == (safe_lshift_func_int8_t_s_u((p_6 > 0L), 7))))), 0x194803DEL)))) <= p_4) == 1L) ^ g_12))), 0x5FL))))) <= 0x6BL) != 0UL), g_206.f6)) != l_379) != g_155.f0));
                    }
                    else
                    {
                        unsigned l_386 = 1UL;
                        (*l_346) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_386, (*l_389))), g_204.f1));
                    }
                }
                else
                {
                    char l_396 = 9L;
                    int l_402 = 0xDACD163CL;
                    if ((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_46.f6, (safe_sub_func_int32_t_s_s((((l_396 || (safe_lshift_func_int8_t_s_s((p_4 ^ (((1L & func_25(((l_399 != (void*)0) | 0x627DL), (func_25((safe_sub_func_int16_t_s_s(p_4, (l_402 && (*l_346)))), p_5) && l_403))) | l_358) | 6L)), l_396))) && p_3) & 0xBAD7L), g_62)))), 0x5EA8L)))
                    {
                        (*l_389) ^= p_3;
                        (*g_45) = l_363;
                        if (l_358)
                            continue;
                        (*l_346) ^= (g_155.f4 <= 8UL);
                    }
                    else
                    {
                        char l_410 = 0x2FL;
                        (*l_346) = (l_345 || (((~((((void*)0 == g_404) <= func_25((l_358 >= ((p_6 == (&g_97 != &g_97)) >= 0x3BL)), (safe_lshift_func_int8_t_s_s(func_25(l_410, (*l_389)), p_6)))) & l_410)) || (*l_346)) != 1L));
                    }
                    if ((*l_346))
                        break;
                }
                (*g_97) = &l_357;

                ;
                for (p_3 = (-4); (p_3 <= (-27)); p_3 = safe_sub_func_uint32_t_u_u(p_3, 5))
                {
                }
            }
            else
            {
                unsigned l_444 = 4294967287UL;
                for (p_5 = 0; (p_5 != 26); ++p_5)
                {
                    for (l_420 = (-24); (l_420 == 0); l_420 = safe_add_func_uint16_t_u_u(l_420, 2))
                    {
                        (*g_406) = (*l_417);
                        (*g_97) = l_389;

                        ;
                        (*g_291) = (*g_291);
                        if (l_345)
                            continue;
                    }
                    for (l_357 = 0; (l_357 <= (-8)); l_357 = safe_sub_func_uint32_t_u_u(l_357, 1))
                    {
                        (*g_97) = (void*)0;

                        ;
                        (*l_389) &= (l_444 >= 65535UL);
                    }
                }
            }
            if ((((safe_rshift_func_int16_t_s_u(p_6, 4)) <= (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_206.f6, 11)), p_6)) | 248UL) <= p_3)) < l_345))
            {
                unsigned l_457 = 0xBB3D6549L;
                (*l_389) |= (g_232.f5 | (l_457 >= g_46.f2));
            }
            else
            {
                struct S0 **l_459 = &l_458;
                (*l_459) = l_458;
            }
            (*l_389) ^= (((safe_rshift_func_int16_t_s_s(((void*)0 != l_462), ((safe_rshift_func_uint8_t_u_u(((g_46.f5 <= p_4) < ((p_3 == (safe_lshift_func_uint8_t_u_s(5UL, p_6))) == (((void*)0 == &g_97) >= p_4))), g_155.f0)) <= 0xECL))) && g_12) && 254UL);
        }
        else
        {
            int *l_467 = (void*)0;
            (*g_97) = l_467;

            ;
        }
    }

    ;
    l_468 = &l_357;

    ;
    for (l_420 = 5; (l_420 != (-15)); l_420--)
    {
        (*l_468) = p_5;
        (***g_404) = (*l_417);
    }
    return p_4;


}







static short func_17(int p_18, int p_19, short p_20, unsigned p_21, int p_22)
{
    int *l_34 = (void*)0;
    int ***l_312 = &g_97;
    char l_315 = 3L;
    unsigned l_323 = 4294967295UL;
    int l_330 = 0x6F9AE73CL;
    char l_339 = 7L;
    unsigned short l_340 = 0UL;
    (*g_97) = func_30(g_29, l_34, g_12);
    (***l_312) = (((p_21 != (safe_mod_func_int16_t_s_s(func_25(((l_312 != &g_97) & (((((p_20 != (l_315 >= p_19)) && ((safe_unary_minus_func_int16_t_s(((safe_sub_func_int8_t_s_s(((0x25L > ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_204.f3, g_155.f1)), g_46.f5)) | g_62)) ^ p_21), 1UL)) == (*g_61)))) == (***l_312))) > (**g_97)) != (-6L)) == 1L)), g_206.f3), g_12))) != l_323) | 0x4FB1L);
    (**g_97) = ((!(safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_204.f4, p_19)), ((+(safe_sub_func_uint32_t_u_u((l_330 | ((safe_add_func_uint8_t_u_u(p_19, 7L)) <= (g_292.f3 && (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(func_25((***l_312), (~((((g_155.f4 & (safe_sub_func_uint8_t_u_u((***l_312), 253UL))) <= 0L) | g_206.f5) & (**g_97)))), l_339)), p_22))))), l_340))) >= g_46.f5)))) == g_46.f4);
    g_114 |= func_49(g_46.f3, (**l_312));


    return g_114;
}







static short func_25(int p_26, short p_27)
{
    int *l_28 = &g_29;
    (*l_28) ^= 0x318B4743L;
    return (*l_28);
}







static int * func_30(unsigned char p_31, int * p_32, unsigned char p_33)
{
    int l_35 = 0x9BFAEAD2L;
    int ***l_249 = &g_97;
    if (l_35)
    {
        int l_36 = 0x80D33B94L;
        int *l_37 = (void*)0;
        int *l_38 = &l_36;
        struct S1 **l_235 = (void*)0;
        struct S1 **l_236 = &g_45;
        (*l_38) = l_36;
        (*l_236) = func_39(g_12);

        ;
        (**g_97) = (func_25((safe_sub_func_int32_t_s_s((**g_97), 0x48666C92L)), (*l_38)) == (safe_lshift_func_int16_t_s_u(((l_35 == ((g_204.f2 ^ (l_35 | (((g_155.f3 <= (((safe_lshift_func_uint8_t_u_u(g_206.f4, g_204.f3)) ^ 4294967295UL) > l_35)) != 0UL) & 0xC9L))) == (*l_38))) & (*l_38)), p_33)));
    }
    else
    {
        int *l_265 = &g_62;
        struct S1 *l_298 = &g_46;
        int *l_305 = &g_114;
        struct S0 *l_308 = (void*)0;
        for (p_33 = (-27); (p_33 == 14); p_33 = safe_add_func_uint16_t_u_u(p_33, 4))
        {
            struct S0 *l_257 = &g_155;
            struct S0 **l_256 = &l_257;
            int l_262 = 6L;
            struct S1 l_297 = {-1,2885,-5150,179,-0,31,16,39934};
        }
        (*l_305) |= (*g_61);
        (*l_265) &= ((&g_45 == (void*)0) >= ((void*)0 == &p_32));
        for (g_62 = 0; (g_62 < 7); g_62 = safe_add_func_int8_t_s_s(g_62, 6))
        {
            struct S0 **l_309 = &l_308;
            (*l_309) = l_308;
        }
    }
    return (*g_97);


}







static struct S1 * func_39(int p_40)
{
    char l_52 = 1L;
    int *l_150 = &g_62;
    int *l_173 = &g_114;
    struct S1 l_179 = {0,552,-884,237,1,32,14,40997};
    int l_201 = 0x60F172A5L;
    unsigned char l_234 = 0x14L;
    (*g_97) = func_41(g_45, func_25((~(safe_mod_func_int16_t_s_s(0xBA05L, func_49((l_52 < func_25(func_25(l_52, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((&g_29 == &p_40) != (safe_lshift_func_uint16_t_u_s(g_46.f6, 11))), 2)), g_46.f1)), 0)) != 0L)), l_52)), g_61)))), p_40), g_114);

    ;
    (**g_97) = p_40;
    for (g_29 = 0; (g_29 < (-17)); g_29--)
    {
        int l_141 = 0xA2FE6578L;
        int *l_142 = &l_141;
        struct S1 *l_145 = &g_46;
        int l_163 = (-10L);
        int **l_168 = (void*)0;
        (*l_142) = (safe_lshift_func_uint16_t_u_s((+(&g_61 == (void*)0)), (safe_lshift_func_uint16_t_u_s(l_141, 9))));
        for (l_141 = (-26); (l_141 < 24); l_141 = safe_add_func_int8_t_s_s(l_141, 9))
        {
            short l_153 = 0x3B25L;
            int l_162 = 0L;
            unsigned l_183 = 0x632091C4L;
            int *l_187 = (void*)0;
            struct S0 *l_203 = &g_204;
            struct S1 **l_217 = (void*)0;
            unsigned char l_220 = 1UL;
            struct S1 l_233 = {-0,14832,-2677,67,0,-40,12,34779};
            l_150 = func_41(l_145, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(0x4396L, (p_40 | (-1L)))), 0)), l_52);

            ;
            if (((*l_150) >= ((((*l_142) <= ((g_46.f1 ^ (4L > 8L)) || (&l_142 == &g_61))) != (l_153 && (&p_40 == (*g_97)))) > 0UL)))
            {
                struct S0 *l_154 = &g_155;
                struct S0 **l_156 = (void*)0;
                struct S0 **l_157 = &l_154;
                (*l_157) = l_154;
            }
            else
            {
                int l_166 = (-3L);
                int **l_167 = &l_150;
                struct S1 *l_178 = &g_46;
                char l_200 = 0x5EL;
                if ((safe_sub_func_uint32_t_u_u((*l_150), (*g_61))))
                {
                    int *l_164 = (void*)0;
                    int *l_165 = &l_162;
                    for (g_62 = 2; (g_62 < (-30)); g_62--)
                    {
                        l_162 = 0x348BD332L;
                    }
                    (*l_165) = l_163;
                }
                else
                {
                    p_40 = (p_40 > l_166);
                }
                if ((((((*l_142) < (l_167 != l_168)) <= (0x4E00L && (safe_lshift_func_uint8_t_u_u(g_62, 6)))) >= (safe_sub_func_uint32_t_u_u(g_46.f1, (l_153 == l_162)))) < (+255UL)))
                {
                    int l_182 = 1L;
                    (*g_97) = (*g_97);
                    if (p_40)
                    {
                        return l_178;


                    }
                    else
                    {
                        (*l_173) ^= (((*l_167) == (void*)0) < g_46.f1);
                        (*g_45) = l_179;
                    }
                    g_114 &= ((safe_lshift_func_int16_t_s_u(l_182, 11)) != ((((~g_46.f1) >= l_183) ^ g_46.f1) & (p_40 | p_40)));
                }
                else
                {
                    unsigned short l_189 = 0x1A22L;
                    (*l_173) ^= (safe_mod_func_uint8_t_u_u(l_153, (**l_167)));
                    if (p_40)
                    {
                        struct S1 l_186 = {1,10214,1291,328,1,46,0,1989};
                        l_179 = l_186;
                        l_187 = (void*)0;
                        p_40 &= (&g_46 != (void*)0);
                    }
                    else
                    {
                        int l_188 = 0L;
                        (*l_173) ^= p_40;
                        l_189 |= l_188;
                    }
                }
                for (l_52 = 0; (l_52 >= 25); l_52 = safe_add_func_uint32_t_u_u(l_52, 7))
                {
                    unsigned l_202 = 1UL;
                    struct S0 *l_205 = &g_206;
                    int *l_208 = &g_62;
                }
                (*l_173) &= (*l_142);
            }
            (*l_145) = l_233;
        }
        (*l_173) = ((*l_142) || p_40);
        p_40 = (g_206.f2 && (g_155.f3 != l_234));
    }

    ;
    return &g_46;


}







static int * func_41(struct S1 * p_42, unsigned short p_43, unsigned short p_44)
{
    int *l_134 = &g_29;
    return l_134;


}







static short func_49(short p_50, int * p_51)
{
    unsigned char l_63 = 0x78L;
    int *l_77 = &g_29;
    unsigned l_112 = 0x2EF243A4L;
    short l_115 = 0L;
    (*g_61) ^= ((((p_50 <= g_46.f7) | (p_50 && l_63)) > p_50) != l_63);
    for (g_29 = 0; (g_29 > 7); ++g_29)
    {
        unsigned l_71 = 0UL;
        int *l_72 = &g_62;
    }
    if (func_25((*p_51), p_50))
    {
        unsigned l_100 = 0x1BE66BFFL;
        short l_125 = 5L;
        for (l_63 = (-16); (l_63 <= 11); ++l_63)
        {
        }
    }
    else
    {
        int *l_132 = (void*)0;
        (*g_45) = (*g_45);
        if (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((void*)0 != p_51), 5)), (safe_sub_func_int16_t_s_s((*l_77), g_46.f7)))) || g_46.f3))
        {
            l_132 = (*g_97);


        }
        else
        {
            int *l_133 = &g_29;
            (*g_97) = func_73((*l_77), l_133, &g_61);


        }



    }


    return p_50;
}







static int ** func_66(unsigned p_67, int * p_68, int * p_69, int ** p_70)
{
    short l_85 = 0xB7C1L;
    struct S1 **l_92 = &g_45;
    int l_93 = 0x7BB9FEC4L;
    int l_94 = 0x2DDC797AL;
    (**p_70) ^= l_85;
    l_94 |= ((safe_sub_func_uint16_t_u_u(p_67, p_67)) < (l_85 > (safe_mod_func_uint32_t_u_u((g_46.f4 <= (safe_lshift_func_uint16_t_u_s((((((void*)0 != l_92) != l_85) >= l_93) != l_93), 2))), (**p_70)))));
    (*p_68) |= (((safe_add_func_int8_t_s_s(g_46.f4, g_29)) != 0x97L) > (~(!l_94)));
    return &g_61;


}







static int * func_73(int p_74, int * p_75, int ** p_76)
{
    int *l_78 = &g_62;
    int l_79 = (-1L);
    l_78 = (*p_76);


    (*g_61) = (&g_61 != &l_78);
    if (l_79)
    {
        int *l_80 = (void*)0;
        (*p_76) = l_80;

        ;
    }
    else
    {
        struct S1 **l_81 = &g_45;
        struct S1 ***l_82 = &l_81;
        struct S1 *l_84 = &g_46;
        struct S1 **l_83 = &l_84;
        (*l_82) = l_81;
        (*l_83) = (**l_82);
    }


    return (*p_76);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    transparent_crc(g_46.f4, "g_46.f4", print_hash_value);
    transparent_crc(g_46.f5, "g_46.f5", print_hash_value);
    transparent_crc(g_46.f6, "g_46.f6", print_hash_value);
    transparent_crc(g_46.f7, "g_46.f7", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_155.f3, "g_155.f3", print_hash_value);
    transparent_crc(g_155.f4, "g_155.f4", print_hash_value);
    transparent_crc(g_155.f5, "g_155.f5", print_hash_value);
    transparent_crc(g_155.f6, "g_155.f6", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4, "g_204.f4", print_hash_value);
    transparent_crc(g_204.f5, "g_204.f5", print_hash_value);
    transparent_crc(g_204.f6, "g_204.f6", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4, "g_206.f4", print_hash_value);
    transparent_crc(g_206.f5, "g_206.f5", print_hash_value);
    transparent_crc(g_206.f6, "g_206.f6", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_231.f3, "g_231.f3", print_hash_value);
    transparent_crc(g_231.f4, "g_231.f4", print_hash_value);
    transparent_crc(g_231.f5, "g_231.f5", print_hash_value);
    transparent_crc(g_231.f6, "g_231.f6", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_232.f5, "g_232.f5", print_hash_value);
    transparent_crc(g_232.f6, "g_232.f6", print_hash_value);
    transparent_crc(g_292.f0, "g_292.f0", print_hash_value);
    transparent_crc(g_292.f1, "g_292.f1", print_hash_value);
    transparent_crc(g_292.f2, "g_292.f2", print_hash_value);
    transparent_crc(g_292.f3, "g_292.f3", print_hash_value);
    transparent_crc(g_292.f4, "g_292.f4", print_hash_value);
    transparent_crc(g_292.f5, "g_292.f5", print_hash_value);
    transparent_crc(g_292.f6, "g_292.f6", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_407.f0, "g_407.f0", print_hash_value);
    transparent_crc(g_407.f1, "g_407.f1", print_hash_value);
    transparent_crc(g_407.f2, "g_407.f2", print_hash_value);
    transparent_crc(g_407.f3, "g_407.f3", print_hash_value);
    transparent_crc(g_407.f4, "g_407.f4", print_hash_value);
    transparent_crc(g_407.f5, "g_407.f5", print_hash_value);
    transparent_crc(g_407.f6, "g_407.f6", print_hash_value);
    transparent_crc(g_407.f7, "g_407.f7", print_hash_value);
    transparent_crc(g_501.f0, "g_501.f0", print_hash_value);
    transparent_crc(g_501.f1, "g_501.f1", print_hash_value);
    transparent_crc(g_501.f2, "g_501.f2", print_hash_value);
    transparent_crc(g_501.f3, "g_501.f3", print_hash_value);
    transparent_crc(g_501.f4, "g_501.f4", print_hash_value);
    transparent_crc(g_501.f5, "g_501.f5", print_hash_value);
    transparent_crc(g_501.f6, "g_501.f6", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_502.f4, "g_502.f4", print_hash_value);
    transparent_crc(g_502.f5, "g_502.f5", print_hash_value);
    transparent_crc(g_502.f6, "g_502.f6", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_694.f0, "g_694.f0", print_hash_value);
    transparent_crc(g_694.f1, "g_694.f1", print_hash_value);
    transparent_crc(g_694.f2, "g_694.f2", print_hash_value);
    transparent_crc(g_694.f3, "g_694.f3", print_hash_value);
    transparent_crc(g_694.f4, "g_694.f4", print_hash_value);
    transparent_crc(g_694.f5, "g_694.f5", print_hash_value);
    transparent_crc(g_694.f6, "g_694.f6", print_hash_value);
    transparent_crc(g_695.f0, "g_695.f0", print_hash_value);
    transparent_crc(g_695.f1, "g_695.f1", print_hash_value);
    transparent_crc(g_695.f2, "g_695.f2", print_hash_value);
    transparent_crc(g_695.f3, "g_695.f3", print_hash_value);
    transparent_crc(g_695.f4, "g_695.f4", print_hash_value);
    transparent_crc(g_695.f5, "g_695.f5", print_hash_value);
    transparent_crc(g_695.f6, "g_695.f6", print_hash_value);
    transparent_crc(g_700.f0, "g_700.f0", print_hash_value);
    transparent_crc(g_700.f1, "g_700.f1", print_hash_value);
    transparent_crc(g_700.f2, "g_700.f2", print_hash_value);
    transparent_crc(g_700.f3, "g_700.f3", print_hash_value);
    transparent_crc(g_700.f4, "g_700.f4", print_hash_value);
    transparent_crc(g_700.f5, "g_700.f5", print_hash_value);
    transparent_crc(g_700.f6, "g_700.f6", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_821.f0, "g_821.f0", print_hash_value);
    transparent_crc(g_821.f1, "g_821.f1", print_hash_value);
    transparent_crc(g_821.f2, "g_821.f2", print_hash_value);
    transparent_crc(g_821.f3, "g_821.f3", print_hash_value);
    transparent_crc(g_821.f4, "g_821.f4", print_hash_value);
    transparent_crc(g_821.f5, "g_821.f5", print_hash_value);
    transparent_crc(g_821.f6, "g_821.f6", print_hash_value);
    transparent_crc(g_822.f0, "g_822.f0", print_hash_value);
    transparent_crc(g_822.f1, "g_822.f1", print_hash_value);
    transparent_crc(g_822.f2, "g_822.f2", print_hash_value);
    transparent_crc(g_822.f3, "g_822.f3", print_hash_value);
    transparent_crc(g_822.f4, "g_822.f4", print_hash_value);
    transparent_crc(g_822.f5, "g_822.f5", print_hash_value);
    transparent_crc(g_822.f6, "g_822.f6", print_hash_value);
    transparent_crc(g_822.f7, "g_822.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
