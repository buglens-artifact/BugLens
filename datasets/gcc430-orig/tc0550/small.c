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
   unsigned short f0;
   unsigned f1;
};

union U1 {
   int f0;
   unsigned short f1;
   int f2;
   char f3;
   unsigned f4;
};


static int g_3 = 0x50E6DA50L;
static int *g_2 = &g_3;
static int g_51 = (-9L);
static short g_64 = 0x6587L;
static int g_71 = (-8L);
static int g_77 = 0xD1A68408L;
static int g_79 = 1L;
static unsigned short g_85 = 1UL;
static union U0 g_86 = {3UL};
static char g_110 = 6L;
static unsigned g_123 = 3UL;
static unsigned char g_126 = 0x0FL;
static int *g_166 = &g_71;
static unsigned char g_188 = 1UL;
static short *g_194 = &g_64;
static short **g_193 = &g_194;
static short ***g_192 = &g_193;
static short g_218 = 8L;
static char g_228 = 0x86L;
static unsigned g_255 = 0xC960B144L;
static unsigned *g_254 = &g_255;
static int g_308 = 0xB93ECFD4L;
static int g_386 = 0xF21BAC02L;
static union U1 g_405 = {1L};
static union U0 *g_422 = &g_86;
static union U0 **g_421 = &g_422;
static int **g_501 = (void*)0;
static unsigned short *g_505 = &g_405.f1;
static unsigned short **g_504 = &g_505;
static char *g_510 = &g_228;
static char **g_509 = &g_510;
static unsigned **g_613 = &g_254;
static unsigned char g_643 = 0x57L;
static unsigned short g_644 = 0UL;
static union U1 *g_711 = &g_405;
static short g_761 = 0xBF39L;



static short func_1(void);
static short func_7(int * p_8, short p_9);
static int * func_11(union U1 p_12, int p_13, char p_14, union U1 p_15);
static short func_30(unsigned p_31, int ** p_32, unsigned char p_33, char p_34, int p_35);
static int func_38(short p_39, unsigned p_40, unsigned char p_41, unsigned p_42);
static short func_43(int p_44, int ** p_45);
static int func_46(unsigned short p_47);
static unsigned short func_56(union U0 p_57);
static union U0 func_58(unsigned short p_59, int * p_60);
static unsigned short func_61(int p_62);
static short func_1(void)
{
    int **l_4 = (void*)0;
    int **l_5 = (void*)0;
    int *l_6 = &g_3;
    unsigned char *l_796 = &g_126;
    unsigned char **l_795 = &l_796;
    union U0 *l_802 = (void*)0;
    l_6 = g_2;
    (*l_6) = (func_7(&g_3, (g_3 == 0xAAB7L)) == (*l_6));

    ;
    ;

    ;
    for (g_643 = 0; (g_643 <= 48); g_643 = safe_add_func_int8_t_s_s(g_643, 3))
    {
        int l_791 = (-4L);
        (*g_166) = l_791;
    }
    for (g_85 = 0; (g_85 != 27); g_85 = safe_add_func_uint8_t_u_u(g_85, 2))
    {
        unsigned l_794 = 4294967295UL;
        int l_801 = 0L;
        if (l_794)
        {
            unsigned char ***l_797 = &l_795;
            int *l_800 = &g_77;
            (*l_797) = l_795;
            for (g_86.f0 = 21; (g_86.f0 > 7); g_86.f0 = safe_sub_func_uint32_t_u_u(g_86.f0, 5))
            {
                g_2 = l_800;

                ;
                l_801 = (*l_800);
                (*g_421) = l_802;

                ;
            }

            ;
            return l_801;
        }
        else
        {
            (*g_166) = 8L;
        }
        if (l_794)
            continue;
    }
    return (*g_194);
}







static short func_7(int * p_8, short p_9)
{
    int **l_10 = &g_2;
    union U1 l_16 = {0x17D0B0A3L};
    (*l_10) = (void*)0;

    ;
    (*l_10) = &g_3;

    ;
    (*l_10) = func_11(l_16, (*p_8), (safe_div_func_int16_t_s_s(g_3, (safe_unary_minus_func_int32_t_s((g_3 == (safe_add_func_int16_t_s_s(((*g_194) = ((**l_10) && (((p_9 >= ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_30((0x0CFDL | (safe_add_func_int32_t_s_s(func_38(func_43(func_46(g_3), &g_166), p_9, g_405.f2, p_9), p_9))), g_501, p_9, p_9, (*p_8)), p_9)), g_405.f4)), p_9)), (-1L))) || p_9)) ^ l_16.f2) & 65528UL))), (*g_505)))))))), g_405);

    ;
    ;

    ;
    return l_16.f4;
}







static int * func_11(union U1 p_12, int p_13, char p_14, union U1 p_15)
{
    unsigned l_560 = 4294967293UL;
    int l_566 = 0x0B22DD97L;
    union U0 l_583 = {0xFDC3L};
    unsigned **l_612 = (void*)0;
    int *l_615 = &g_79;
    int **l_665 = &l_615;
    short *l_668 = &g_218;
    unsigned ***l_672 = &g_613;
    unsigned ****l_671 = &l_672;
    unsigned ***l_674 = &l_612;
    unsigned ****l_673 = &l_674;
    int l_690 = 0x5032CC20L;
    int *l_777 = (void*)0;
    int l_785 = (-1L);
    for (p_13 = 0; (p_13 == (-2)); p_13 = safe_sub_func_uint16_t_u_u(p_13, 9))
    {
        unsigned **l_558 = &g_254;
        int l_559 = 1L;
        int l_561 = 0xF5C5A597L;
        int l_564 = 6L;
        unsigned char *l_565 = &g_126;
        int *l_567 = (void*)0;
        if ((*g_166))
            break;
        for (p_15.f3 = 0; (p_15.f3 > 5); p_15.f3 = safe_add_func_int8_t_s_s(p_15.f3, 8))
        {
            (*g_166) = 0x773E9139L;
        }
        (*g_166) = ((l_566 = (safe_rshift_func_int16_t_s_u(((**g_193) = (-1L)), (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((*l_565) = ((safe_mul_func_uint8_t_u_u(255UL, (((safe_sub_func_uint16_t_u_u((0xEE88E772L && (safe_lshift_func_uint16_t_u_s((p_14 >= (l_559 = ((void*)0 == l_558))), (l_561 = l_560)))), (safe_rshift_func_uint16_t_u_s((((&g_193 == (void*)0) >= (**g_509)) | 65533UL), 0)))) != l_564) ^ 246UL))) | l_564)) < (*g_510)), (-3L))), p_12.f2))))) < l_564);
        l_567 = &p_13;

        ;
    }

        if (l_566)
    {
        union U0 **l_570 = &g_422;
        int l_578 = (-1L);
        int *l_587 = &g_79;
        union U1 *l_588 = &g_405;
        short l_646 = 9L;
        if ((safe_lshift_func_uint16_t_u_s((l_570 == &g_422), ((safe_sub_func_int16_t_s_s((p_13 < (((((*g_254) = (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(l_578)), l_578))) & func_38(p_12.f4, (safe_div_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((p_13 >= l_566) >= p_13), (**g_509))) == l_578) > l_583.f0), p_13)), g_405.f3, l_566)) < 1L) > p_12.f0)), p_13)) > (***g_192)))))
        {
            int *l_584 = (void*)0;
            (*g_166) = p_12.f1;
            (*g_166) = l_566;
            l_584 = &p_13;

            ;
            (*l_584) = l_560;
        }
        else
        {
            union U1 **l_589 = (void*)0;
            union U1 **l_590 = &l_588;
            for (p_12.f1 = 0; (p_12.f1 <= 28); p_12.f1 = safe_add_func_int32_t_s_s(p_12.f1, 9))
            {
                return l_587;


            }

                        (*l_590) = l_588;
        }

                for (g_218 = 0; (g_218 >= (-4)); g_218 = safe_sub_func_int8_t_s_s(g_218, 1))
        {
            char ***l_595 = &g_509;
            union U0 l_605 = {4UL};
            unsigned **l_614 = &g_254;
            char l_618 = 0x6EL;
            int *l_627 = &g_71;
            int **l_661 = (void*)0;
            int **l_662 = &g_2;
            union U0 *l_664 = &l_605;
            union U0 **l_663 = &l_664;
            if (((*g_166) = ((g_188 = ((void*)0 == (*g_193))) ^ (+(safe_mul_func_int32_t_s_s(0x961345A4L, (l_595 != &g_509)))))))
            {
                union U1 *l_598 = &g_405;
                int l_599 = (-1L);
                unsigned char *l_600 = &g_188;
                int l_645 = 5L;
                p_13 = p_14;
                if ((safe_add_func_uint32_t_u_u((((l_598 == (void*)0) & l_599) || ((*l_600) = g_126)), p_14)))
                {
                    unsigned short *l_610 = &g_85;
                    int l_611 = 1L;
                    union U0 l_626 = {65535UL};
                    if ((safe_add_func_uint32_t_u_u(0x3EC5F407L, ((safe_mod_func_uint8_t_u_u(g_218, (((*g_254) & ((((+(*g_254)) && l_566) || (*g_505)) && (*g_505))) & ((((*l_610) = (safe_add_func_int32_t_s_s((((*l_600) = (safe_mul_func_int16_t_s_s((***g_192), 0xEEDDL))) & l_566), p_14))) >= l_611) & l_611)))) ^ 1L))))
                    {
                        (*l_587) = (l_612 == (l_614 = (g_613 = (void*)0)));

                        ;
                        ;
                        l_615 = &l_578;

                        ;
                        (*l_587) = (safe_rshift_func_int8_t_s_s(l_618, 5));
                        (*l_595) = &g_510;
                    }
                    else
                    {
                        unsigned l_623 = 0x1B88068CL;
                        int l_624 = 5L;
                        int **l_625 = &g_2;
                        (*l_587) = func_38(p_12.f3, g_110, (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((!l_623) & ((**g_504) = p_15.f3)), 3L)), l_624)), (**g_613));

                        (*l_625) = &p_13;

                        ;
                        (*g_2) = func_56(l_626);
                        if ((*g_2))
                            break;
                    }

                    ;
                    ;
                    ;
                    return l_627;




                }
                else
                {
                    unsigned char *l_638 = (void*)0;
                    unsigned char *l_641 = &g_126;
                    unsigned char *l_642 = &g_643;
                    (*g_421) = (*g_421);
                    (*l_587) = (safe_mul_func_int16_t_s_s(func_38((safe_rshift_func_int8_t_s_u(func_61((safe_mul_func_uint16_t_u_u((((l_599 >= l_599) || (safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((*l_600) = p_14), (l_599 = g_405.f3))) < (~(safe_add_func_uint8_t_u_u(((p_15.f3 < g_218) != (***g_192)), 0xFFL)))), (g_644 = ((*l_587) = ((*l_642) = ((*l_641) = (func_38((*g_194), (*l_587), (*l_627), p_14) < 9L)))))))) >= (**g_193)), 65527UL))), g_228)), l_645, p_12.f3, l_646), (*g_194)));
                    return l_627;




                }
            }
            else
            {
                unsigned char *l_656 = &g_126;
                int ***l_657 = &g_501;
                unsigned ***l_660 = &g_613;
                (*l_627) = ((safe_div_func_int32_t_s_s((p_15.f3 ^ ((void*)0 != &g_501)), 4UL)) & (safe_unary_minus_func_int32_t_s((0x8BB31A6AL > ((*l_627) | ((*l_627) ^ (safe_mod_func_int16_t_s_s((**g_193), (*l_627)))))))));
                (*l_615) = func_30((safe_add_func_int16_t_s_s(((*g_254) || (*g_254)), (safe_sub_func_int8_t_s_s(((*g_192) != (void*)0), (~((void*)0 == l_660)))))), &l_587, g_405.f1, p_12.f1, (*l_615));
                if ((*l_615))
                    continue;
            }
            (*l_662) = &p_13;

            ;
            (*l_663) = ((*g_421) = &l_583);

            ;
            ;
            if (p_15.f3)
                break;
        }


        ;
    }
    else
    {
        return &g_3;


    }


    ;
        (*l_665) = &g_71;

    ;
    if ((p_13 = (safe_rshift_func_int16_t_s_u(0L, ((((((**g_193) = (*l_615)) == ((*l_668) = (*l_615))) != p_12.f3) < (safe_div_func_uint8_t_u_u((((*l_673) = ((*l_671) = &g_613)) != &g_613), p_14))) >= p_12.f1)))))
    {
        for (g_79 = (-12); (g_79 <= 28); ++g_79)
        {
            for (g_77 = 0; (g_77 != (-2)); g_77 = safe_sub_func_uint32_t_u_u(g_77, 3))
            {
                int *l_679 = &g_79;
                int *l_680 = &g_386;
                unsigned char *l_689 = &g_643;
                l_679 = l_679;
                (*l_680) = ((*l_615) = (+(*l_615)));
                (*l_615) = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_13, ((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_13, 7)), func_61(p_12.f1))) & ((*l_689) = (&l_583 == (*g_421)))))), 0x91L));
                (*l_615) = l_690;
            }
        }
    }
    else
    {
        union U0 l_709 = {0x33BFL};
        int l_734 = 0x5EF1944EL;
        int l_742 = 0L;
        unsigned l_778 = 0x4FC837D2L;
        if ((*l_615))
        {
            unsigned char *l_693 = &g_188;
            int l_700 = (-10L);
            union U1 *l_710 = &g_405;
            union U0 *l_717 = &g_86;
            p_13 = ((*g_166) = (p_12.f1 != (((l_700 = (((void*)0 == &g_405) > ((safe_mul_func_int8_t_s_s((-1L), (l_693 == &g_188))) < (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xD92EL, 0x9E08L)), (safe_add_func_int16_t_s_s(((*g_166) > (-8L)), p_12.f3))))))) || p_15.f3) >= p_12.f3)));
            (*l_615) = l_700;
            if (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(0x11L, ((*l_693) = l_700))), (safe_sub_func_uint32_t_u_u(((func_61(((**l_665) = p_12.f3)) < ((p_12.f1 >= (safe_add_func_int8_t_s_s(p_13, (0x67L || p_14)))) || (+(((*l_668) = l_709.f0) >= p_12.f3)))) | (**g_193)), l_709.f0)))) ^ 0UL))
            {
                int l_716 = 0xD8F7FDECL;
                g_711 = l_710;
                for (p_12.f4 = (-10); (p_12.f4 < 11); p_12.f4 = safe_add_func_int32_t_s_s(p_12.f4, 4))
                {
                    for (l_560 = 5; (l_560 > 27); l_560 = safe_add_func_int8_t_s_s(l_560, 2))
                    {
                        if (l_700)
                            break;
                        (*l_665) = &l_700;

                        ;
                        if (l_716)
                            break;
                    }
                }

                                ;
                (*g_421) = l_717;

                ;
            }
            else
            {
                unsigned ***l_726 = (void*)0;
                int *l_735 = (void*)0;
                for (g_86.f1 = 8; (g_86.f1 <= 11); ++g_86.f1)
                {
                    unsigned l_733 = 5UL;
                    l_734 = (safe_add_func_uint8_t_u_u(((((*g_510) = p_13) && (safe_add_func_uint8_t_u_u(p_13, (safe_add_func_int16_t_s_s((0x88L & 8L), (!(((void*)0 != l_726) != ((**g_504) ^ (safe_mul_func_int16_t_s_s((!(((safe_div_func_uint16_t_u_u((*g_505), (safe_mul_func_int16_t_s_s(((*l_668) = (func_61(p_14) == g_228)), l_733)))) > p_13) || p_13)), (**g_193))))))))))) <= p_15.f3), p_12.f1));
                    (**l_665) = p_13;
                    return l_735;




                }

                (*l_665) = &p_13;

                ;
                for (g_255 = 0; (g_255 >= 32); g_255++)
                {
                    unsigned short l_751 = 65535UL;
                    unsigned short *l_758 = &l_583.f0;
                    unsigned short *l_759 = &g_86.f0;
                    short *l_760 = &g_761;
                    (*g_166) = (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_38(((*l_760) = (l_742 | (((*l_693) = (safe_lshift_func_int16_t_s_s(p_14, (+(safe_div_func_int16_t_s_s(((*l_668) = ((***g_192) = (safe_mul_func_int8_t_s_s(((((func_46((safe_add_func_uint8_t_u_u(l_751, ((safe_div_func_int32_t_s_s(0x71BED1CCL, 0x612B5FDAL)) > func_61((safe_div_func_int8_t_s_s((p_13 || func_38(((safe_lshift_func_uint16_t_u_s(((*l_759) = ((*l_758) = ((*g_505) = 0xDD66L))), 5)) ^ ((*g_166) = ((**l_665) <= l_709.f0))), g_644, p_14, (*g_254))), (**g_509)))))))) && 2UL) < p_15.f3) >= p_12.f1) == l_742), 0xB8L)))), p_12.f3)))))) || l_751))), p_15.f3, g_644, p_12.f1), p_13)), p_12.f3));


                }

                (*l_665) = &p_13;
            }

            ;
        }
        else
        {
            int **l_762 = &g_2;
            (*l_665) = (*l_665);
            (*l_762) = ((*l_665) = &g_51);

            ;
            ;
            (*l_762) = &p_13;

            ;
            if (p_14)
            {
                for (p_15.f1 = (-8); (p_15.f1 >= 4); p_15.f1++)
                {
                    short l_765 = 1L;
                    if (l_765)
                        break;
                }

                                (*l_665) = &p_13;

                ;
                (*l_762) = &g_79;

                ;
            }
            else
            {
                for (l_560 = 0; (l_560 >= 57); l_560 = safe_add_func_int8_t_s_s(l_560, 8))
                {
                    (*g_166) = (safe_div_func_uint32_t_u_u((**g_613), ((*g_2) = (*g_2))));
                    (*l_762) = &p_13;
                }
                (*l_665) = &p_13;

                ;
                for (g_644 = (-3); (g_644 > 13); ++g_644)
                {
                    union U1 **l_776 = &g_711;
                    (*l_762) = &p_13;

                    ;
                    (**l_665) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(0x0FEAL, (***g_192))), (**g_504)));
                    (*l_762) = &l_742;

                    ;
                    (*l_776) = &g_405;
                }

                ;
            }

            ;
            ;
        }



        (*l_665) = l_777;

        ;
        p_13 = (l_778 >= ((*g_510) = ((void*)0 != &l_674)));
        for (g_761 = 11; (g_761 == (-30)); g_761 = safe_sub_func_int32_t_s_s(g_761, 5))
        {
            unsigned char *l_786 = &g_643;
            (*l_665) = &p_13;

            ;
            for (p_15.f4 = 0; (p_15.f4 == 35); ++p_15.f4)
            {
                (*l_665) = &g_77;

                ;
            }

                        ;
            l_734 = (safe_add_func_int8_t_s_s(l_778, func_30(l_785, &g_166, ((*l_786) = g_79), (((**l_665) = ((g_188 = (**l_665)) && g_86.f0)) || 0xA05C9A7EL), func_61(((safe_sub_func_int8_t_s_s(((**g_509) = 0x43L), (~func_61((l_778 || p_12.f3))))) ^ p_15.f0)))));
        }

        ;
    }


    ;
    ;
    return &g_71;




}







static short func_30(unsigned p_31, int ** p_32, unsigned char p_33, char p_34, int p_35)
{
    unsigned short *l_503 = &g_85;
    unsigned short **l_502 = &l_503;
    unsigned short ***l_506 = &g_504;
    char **l_511 = &g_510;
    union U1 *l_512 = &g_405;
    int *l_521 = (void*)0;
    if (((l_502 != ((*l_506) = g_504)) & ((*g_254) = (safe_add_func_uint16_t_u_u((*g_505), (g_509 != l_511))))))
    {
        char l_513 = 0xEEL;
        unsigned **l_514 = (void*)0;
        unsigned ***l_515 = &l_514;
        unsigned **l_517 = (void*)0;
        unsigned ***l_516 = &l_517;
        int *l_520 = &g_386;
        int **l_522 = &g_2;
        (*g_166) = (!((l_512 == (void*)0) == (((**g_509) = (func_61(l_513) || (+(((*l_515) = l_514) != ((*l_516) = &g_254))))) | (safe_mod_func_int8_t_s_s((0L ^ 65529UL), 0x73L)))));

        ;
        (*l_520) = ((*g_166) = (-1L));
        (*l_520) = p_31;
        (*l_522) = l_521;

        ;
    }
    else
    {
        short l_523 = 0xF1C0L;
        if (l_523)
        {
            unsigned char *l_532 = &g_126;
            int l_535 = 0x49B4CD97L;
            int *l_540 = &g_386;
            (*l_540) = (safe_rshift_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(0x274B08A3L, (4UL && ((*g_166) = (0x8CL || (!(safe_lshift_func_uint8_t_u_u(((*l_532) = p_31), p_33)))))))), (safe_rshift_func_uint16_t_u_u(p_34, 0)))) > l_535) >= (0x3FA3B0DDL && ((*g_254) = (safe_mod_func_int8_t_s_s(((*g_510) = (((((**g_509) ^ p_34) || (*g_254)) && l_535) < (**g_509))), 1UL))))), 2));
            (*g_421) = (void*)0;

            ;
        }
        else
        {
            int *l_541 = &g_79;
            g_166 = (l_521 = l_541);

            ;
            ;
            (*l_541) = (*l_541);
        }

        ;
    }

    ;
    return (**g_193);
}







static int func_38(short p_39, unsigned p_40, unsigned char p_41, unsigned p_42)
{
    int *l_500 = &g_386;
    for (g_308 = 0; (g_308 < 18); g_308 = safe_add_func_uint8_t_u_u(g_308, 4))
    {
        int l_499 = 0x27F2DA0FL;
        l_499 = ((*g_166) = (-10L));
    }
    l_500 = &g_51;

    ;
    return (*l_500);
}







static short func_43(int p_44, int ** p_45)
{
    short l_294 = 8L;
    int *l_298 = &g_77;
    unsigned **l_336 = &g_254;
    unsigned **l_337 = (void*)0;
    unsigned char l_338 = 0x80L;
    union U0 l_345 = {0x72ECL};
    unsigned short l_346 = 0x1CFEL;
    int **l_371 = (void*)0;
    union U1 *l_404 = &g_405;
    char *l_408 = &g_405.f3;
    char **l_407 = &l_408;
    unsigned short l_450 = 0xB503L;
    short **l_470 = &g_194;
    short **l_472 = &g_194;
    int l_480 = 9L;
    union U1 **l_496 = &l_404;
    if ((p_44 >= (func_61(l_294) >= p_44)))
    {
        for (g_71 = 0; (g_71 <= 18); ++g_71)
        {
            int **l_297 = &g_2;
            (*l_297) = ((*p_45) = (void*)0);

            ;
            ;
            (*p_45) = l_298;

            ;
        }


        ;
    }
    else
    {
        unsigned l_311 = 4294967295UL;
        union U0 l_319 = {0xEA34L};
        int l_320 = 0L;
        union U0 *l_323 = &l_319;
        int **l_329 = &g_2;
        int ***l_328 = &l_329;
        if ((**p_45))
        {
            union U0 l_301 = {65535UL};
            unsigned char *l_316 = (void*)0;
            unsigned char *l_317 = (void*)0;
            unsigned char *l_318 = &g_126;
            int *l_321 = (void*)0;
            int *l_322 = &g_79;
            union U0 **l_324 = &l_323;
            for (g_123 = (-4); (g_123 >= 26); g_123 = safe_add_func_uint16_t_u_u(g_123, 4))
            {
                union U0 *l_302 = (void*)0;
                union U0 *l_303 = &l_301;
                p_45 = &g_166;
                (*p_45) = (*p_45);
                (*p_45) = &g_51;

                ;
                (*l_298) = (**p_45);
            }

            ;
            (**p_45) = 0xCD7B2C77L;
            (*l_322) = ((*l_298) = ((**p_45) = (safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_308, (((safe_sub_func_int8_t_s_s((65535UL > 6L), ((*l_318) = (l_311 <= (safe_div_func_int8_t_s_s(0x3CL, (safe_div_func_int32_t_s_s(l_301.f0, 0xA8361CFBL)))))))) <= l_320) == g_110))) < 0x42L), 0x6C83L))));
            (*l_324) = l_323;
        }
        else
        {
            for (g_86.f0 = 0; (g_86.f0 > 13); g_86.f0++)
            {
                int l_327 = 0xEB1FCE9CL;
            }
        }

        ;
        (*l_328) = &g_166;

        ;
        for (g_86.f0 = 7; (g_86.f0 == 55); g_86.f0 = safe_add_func_int16_t_s_s(g_86.f0, 2))
        {
            (*l_298) = 0x5BC35386L;
        }
    }


    ;
    if ((((safe_add_func_int8_t_s_s(((!(safe_lshift_func_int16_t_s_u((((l_336 = l_336) != l_337) <= g_71), 15))) ^ l_338), (safe_add_func_uint8_t_u_u(p_44, ((safe_lshift_func_uint16_t_u_s(g_255, 0)) >= (safe_div_func_int32_t_s_s(((*l_298) = (p_44 != l_346)), p_44))))))) | 0x0322L) & g_308))
    {
        unsigned char *l_349 = &g_126;
        int l_350 = (-1L);
        union U0 l_353 = {0xD4A8L};
        char l_354 = (-1L);
        unsigned **l_356 = &g_254;
        int l_375 = 8L;
        l_350 = (safe_rshift_func_uint8_t_u_u(((*l_349) = 1UL), 0));
        for (p_44 = 26; (p_44 < 16); p_44 = safe_sub_func_uint8_t_u_u(p_44, 9))
        {
            short l_357 = 0x094AL;
            int l_374 = 9L;
            if ((g_77 && l_354))
            {
                g_2 = &g_3;

                ;
                (*p_45) = (*p_45);
                if ((*l_298))
                    continue;
            }
            else
            {
                unsigned **l_355 = (void*)0;
                l_356 = l_355;

                ;
                if (l_353.f0)
                    break;
                (**p_45) = l_357;
            }

            ;
            if ((safe_sub_func_int32_t_s_s(l_357, (((*g_166) = (**p_45)) <= ((*g_254) = 0x954CA772L)))))
            {
                for (l_350 = (-3); (l_350 > (-14)); l_350--)
                {
                    int *l_362 = (void*)0;
                    l_362 = (*p_45);

                    ;
                    if ((**p_45))
                        continue;
                    for (g_86.f0 = 9; (g_86.f0 < 53); g_86.f0++)
                    {
                        short l_369 = 1L;
                        unsigned short *l_370 = &g_85;
                        l_375 = ((*g_166) = (safe_div_func_uint16_t_u_u((l_374 = (~(safe_rshift_func_uint8_t_u_u(g_126, (((*l_370) = l_369) != ((l_371 != (void*)0) ^ (((**p_45) & (safe_add_func_uint8_t_u_u((*l_362), ((((**l_336) = l_357) <= (+6UL)) && l_369)))) != p_44))))))), p_44)));
                    }
                }
                if (l_374)
                    break;
            }
            else
            {
                return p_44;
            }
            return (***g_192);
        }


        ;
        if ((&g_123 == &g_255))
        {
            unsigned short *l_376 = &l_353.f0;
            short *l_385 = &l_294;
            int l_389 = (-5L);
            (*g_166) = (l_350 < (l_376 != (void*)0));
            (*p_45) = (*p_45);
            (*g_166) = ((safe_lshift_func_int8_t_s_u((((**l_336) = func_61((**p_45))) & (((*l_385) = (1L >= (safe_mod_func_uint8_t_u_u(l_353.f0, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_44, 4)), 1)))))) ^ (l_375 & (~((g_386 > (l_389 ^ 0L)) | 0x05L))))), p_44)) < 0xA3L);
            (**p_45) = ((+(((**l_336) = ((+g_85) | (l_389 != 0xB9L))) ^ p_44)) <= p_44);
        }
        else
        {
            union U0 *l_392 = (void*)0;
            union U0 l_393 = {0UL};
            (*g_166) = ((*g_166) & (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_393.f0, (g_386 = l_393.f0))), l_354)));
            (*g_166) = (!((!((**g_193) = ((!g_77) ^ (((**p_45) <= (safe_lshift_func_int8_t_s_u(1L, 3))) || (safe_lshift_func_uint8_t_u_s(g_123, l_375)))))) ^ (p_44 | (+0xD27605DAL))));
        }
    }
    else
    {
        unsigned char l_402 = 253UL;
        char ***l_409 = &l_407;
        int *l_410 = &g_386;
        unsigned short *l_434 = &g_86.f0;
        unsigned l_436 = 4294967295UL;
        int l_437 = (-6L);
        union U0 **l_468 = &g_422;
        if (((*g_166) = (p_44 == (~l_402))))
        {
            (*p_45) = &g_71;

            ;
        }
        else
        {
            short l_403 = 0x5148L;
            union U1 *l_406 = &g_405;
            (*l_298) = l_403;
            l_406 = l_404;
        }
        (*l_409) = l_407;
        l_298 = l_410;

        ;
        for (g_86.f0 = 0; (g_86.f0 == 60); ++g_86.f0)
        {
            unsigned char l_426 = 0UL;
            int *l_438 = &g_386;
            union U0 **l_465 = &g_422;
            unsigned char l_475 = 0x68L;
        }
    }


    ;
    (*l_496) = &g_405;
    return (*g_194);
}







static int func_46(unsigned short p_47)
{
    int l_65 = 0xED994AD4L;
    int l_93 = 0x03401FF3L;
    union U0 l_120 = {0UL};
    int *l_208 = &g_71;
    short ***l_216 = &g_193;
    int **l_229 = &l_208;
    short ***l_235 = &g_193;
    int *l_293 = &g_51;
    for (p_47 = 0; (p_47 < 16); p_47 = safe_add_func_int32_t_s_s(p_47, 8))
    {
        int *l_50 = &g_51;
        char *l_162 = (void*)0;
        int *l_210 = &g_79;
        int **l_211 = &g_2;
        short *l_217 = &g_218;
        unsigned *l_225 = &g_123;
        char *l_226 = &g_110;
        char *l_227 = &g_228;
        (*l_50) = (-5L);
    }
    (*l_229) = &l_93;

    ;
    for (g_123 = 9; (g_123 != 59); g_123++)
    {
        short ***l_236 = (void*)0;
        int l_245 = 3L;
        int l_282 = 0x93023009L;
        char *l_292 = (void*)0;
        char **l_291 = &l_292;
        for (g_79 = 0; (g_79 <= (-10)); g_79 = safe_sub_func_int8_t_s_s(g_79, 2))
        {
            unsigned char l_234 = 0x4CL;
            unsigned *l_252 = &g_123;
            unsigned **l_253 = &l_252;
            short ***l_258 = &g_193;
            int l_279 = 1L;
            char l_287 = 0x4EL;
        }
        (*g_166) = p_47;
        l_291 = (void*)0;

        ;
    }
    g_2 = (l_293 = ((*l_229) = (*l_229)));

    ;
    ;
    return (*g_166);


}







static unsigned short func_56(union U0 p_57)
{
    int *l_89 = &g_3;
    char l_91 = 0x91L;
    int **l_92 = &l_89;
    for (g_79 = 0; (g_79 >= (-21)); g_79 = safe_sub_func_uint16_t_u_u(g_79, 6))
    {
        int **l_90 = &l_89;
        (*l_90) = l_89;
        (*l_90) = &g_79;

        ;
        l_91 = (*g_2);
    }

    ;
    (*l_92) = l_89;
    (*l_92) = &g_77;

    ;
    return (**l_92);
}







static union U0 func_58(unsigned short p_59, int * p_60)
{
    int *l_73 = &g_71;
    (*l_73) = ((void*)0 != p_60);
    for (g_64 = (-13); (g_64 == 28); g_64 = safe_add_func_int32_t_s_s(g_64, 7))
    {
        int *l_76 = &g_77;
        int *l_78 = &g_79;
        unsigned short *l_84 = &g_85;
        (*l_78) = ((*l_76) = ((*l_73) = (&g_3 != p_60)));
        (*l_78) = ((*l_73) && (safe_mod_func_uint32_t_u_u(((*g_2) ^ func_61(((*l_78) = ((*l_73) = (*g_2))))), (safe_mul_func_int16_t_s_s(7L, (((*l_84) = 0x66FAL) != 65534UL))))));
    }
    return g_86;

    }







static unsigned short func_61(int p_62)
{
    int *l_66 = &g_51;
    int **l_67 = &l_66;
    char l_68 = 0xA1L;
    int *l_69 = (void*)0;
    int *l_70 = &g_71;
    (*l_67) = l_66;
    (*l_70) = l_68;
    return g_64;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_405.f1, "g_405.f1", print_hash_value);
    transparent_crc(g_405.f3, "g_405.f3", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
