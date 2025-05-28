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
   const int f0;
   const unsigned f1 : 4;
   signed f2 : 23;
   const unsigned f3 : 6;
   unsigned f4 : 31;
   const signed f5 : 28;
   signed f6 : 11;
   unsigned f7 : 18;
};

struct S1 {
   unsigned f0 : 3;
   signed f1 : 4;
   const signed f2 : 16;
   signed f3 : 5;
   signed f4 : 4;
   unsigned f5 : 4;
   unsigned f6 : 14;
   const unsigned f7 : 18;
   const signed f8 : 29;
   unsigned f9 : 25;
};


static unsigned g_8 = 4294967295UL;
static int g_17 = 0x8586FD5DL;
static int g_58 = (-4L);
static int *g_63 = &g_58;
static int **g_62 = &g_63;
static int ***g_61 = &g_62;
static unsigned g_78 = 0x1A7DFAE3L;
static int g_81 = 0x36453D1DL;
static unsigned g_89 = 4294967295UL;
static struct S1 g_98 = {1,1,-148,-2,1,0,113,460,-14242,3551};
static struct S1 *g_97 = &g_98;
static unsigned g_114 = 0xDCC0C03AL;
static struct S0 g_126 = {-10L,2,-1171,7,16550,-3876,-6,340};
static struct S0 *g_125 = &g_126;
static int *g_150 = &g_17;
static struct S1 **g_278 = &g_97;
static struct S1 ***g_277 = &g_278;
static struct S0 g_281 = {-1L,3,-117,7,30771,5689,40,251};
static char g_336 = 0x35L;
static const int *g_360 = &g_58;
static unsigned g_384 = 0x4B858955L;



static const unsigned short func_1(void);
static int * func_2(unsigned short p_3, int * p_4, int * p_5, unsigned short p_6, int * p_7);
static int * func_9(unsigned p_10, unsigned char p_11, unsigned p_12, unsigned p_13, char p_14);
static int func_18(int * p_19, unsigned short p_20, unsigned char p_21, int * p_22, unsigned char p_23);
static unsigned char func_25(int * p_26, unsigned char p_27, short p_28, unsigned char p_29);
static int * func_30(char p_31, int p_32, int * p_33);
static int func_34(int * p_35);
static int * func_36(int p_37, unsigned short p_38, int * p_39, unsigned char p_40);
static int func_41(const unsigned char p_42, unsigned p_43, short p_44, int * p_45);
static unsigned short func_46(unsigned short p_47, int * p_48);
static const unsigned short func_1(void)
{
    char l_15 = 1L;
    int *l_16 = &g_17;
    (*g_62) = func_2(g_8, func_9(l_15, g_8, ((void*)0 == l_16), g_8, (*l_16)), l_16, g_126.f4, l_16);
    return g_98.f4;
}







static int * func_2(unsigned short p_3, int * p_4, int * p_5, unsigned short p_6, int * p_7)
{
    (**g_61) = (*g_62);
    return p_7;
}







static int * func_9(unsigned p_10, unsigned char p_11, unsigned p_12, unsigned p_13, char p_14)
{
    int *l_24 = &g_17;
    unsigned char l_95 = 0x61L;
    (*l_24) = func_18(l_24, ((*l_24) > (*l_24)), func_25(func_30(p_13, func_34(func_36(func_41((*l_24), p_12, (func_46(p_11, l_24) | 0x970EL), l_24), p_13, l_24, l_95)), l_24), (*l_24), p_14, p_11), l_24, g_281.f4);
    return l_24;
}







static int func_18(int * p_19, unsigned short p_20, unsigned char p_21, int * p_22, unsigned char p_23)
{
    const int l_404 = 0x853B68B4L;
    struct S1 *l_410 = &g_98;
    unsigned l_485 = 1UL;
    struct S1 *** const l_494 = &g_278;
    struct S0 *l_499 = &g_126;
    (*g_62) = p_19;
    if ((~(l_404 ^ 1UL)))
    {
        int l_405 = 1L;
        int **l_406 = &g_63;
        int **l_407 = &g_63;
        (**g_61) = p_22;
        l_407 = l_406;
    }
    else
    {
        unsigned char l_415 = 8UL;
        if ((safe_add_func_uint32_t_u_u(((g_126.f3 ^ p_23) ^ ((void*)0 == l_410)), (safe_add_func_int8_t_s_s((-1L), (~(safe_add_func_int32_t_s_s((&g_281 == &g_126), p_20))))))))
        {
            (***g_61) = l_415;
        }
        else
        {
            unsigned l_418 = 1UL;
            int * const l_435 = (void*)0;
            for (p_23 = 6; (p_23 != 8); ++p_23)
            {
                return l_404;
            }
            (**g_62) = l_418;
            if ((safe_lshift_func_uint8_t_u_u((((void*)0 == &l_410) != l_404), 6)))
            {
                short l_427 = 6L;
                const int l_432 = 1L;
                struct S1 **l_455 = (void*)0;
                struct S0 *l_462 = &g_126;
                int *l_469 = &g_17;
                (**g_61) = func_30((safe_div_func_int32_t_s_s((*g_63), ((((l_404 <= ((safe_rshift_func_uint8_t_u_s(g_384, (safe_lshift_func_uint16_t_u_s(g_336, l_418)))) | l_427)) ^ (safe_mod_func_int32_t_s_s(l_415, l_415))) || (p_21 && p_20)) | p_21))), (*g_63), p_22);
                if (((0x74A3L == ((safe_rshift_func_int8_t_s_u(l_432, (p_20 >= ((void*)0 == p_19)))) & (p_20 & ((safe_rshift_func_int8_t_s_s(0xD1L, 5)) || l_418)))) && l_404))
                {
                    int **l_436 = &g_150;
                    (*l_436) = l_435;
                }
                else
                {
                    int l_448 = 7L;
                    int * const l_470 = &g_17;
                    for (l_427 = 0; (l_427 != 5); l_427 = safe_add_func_int16_t_s_s(l_427, 3))
                    {
                        int l_449 = 0x83143DDFL;
                        int l_454 = 0xED4D81FDL;
                        (*p_19) = ((void*)0 != &g_278);
                        (*p_22) = ((((+l_404) ^ (safe_mod_func_int8_t_s_s(g_281.f5, l_415))) || ((*p_19) != (((*p_19) && (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_448 >= ((void*)0 != &g_125)))), g_281.f6))) <= l_449))) < (-1L));
                        (*p_19) = l_427;
                        (*p_19) = ((func_34((**g_61)) != (p_21 < (g_98.f0 ^ (safe_add_func_uint32_t_u_u(l_454, l_427))))) <= (-1L));
                    }
                    if (l_432)
                    {
                        (*g_277) = l_455;
                    }
                    else
                    {
                        (*p_22) = (safe_add_func_uint8_t_u_u((g_98.f2 != (safe_sub_func_int32_t_s_s((*p_22), ((safe_add_func_int16_t_s_s(0x51C7L, g_126.f4)) || func_41((l_462 != &g_281), (safe_add_func_uint32_t_u_u(p_21, (safe_add_func_uint32_t_u_u(((void*)0 == &g_281), g_281.f5)))), l_432, (*g_62)))))), p_20));
                        return l_415;
                    }
                    if (func_34(func_30(l_415, ((g_126.f7 && l_427) == func_25(p_19, l_448, (safe_mod_func_int32_t_s_s(((*g_61) != (void*)0), l_448)), l_432)), p_22)))
                    {
                        (**g_61) = l_469;
                        (**g_61) = (void*)0;
                    }
                    else
                    {
                        int **l_471 = &l_469;
                        (*p_22) = 0x4AEAAAD8L;
                        (*g_62) = p_22;
                        (*l_471) = l_470;
                    }
                    (*g_62) = (**g_61);
                }
                (*p_19) = 0xC7170649L;
            }
            else
            {
                (*g_63) = (safe_sub_func_uint32_t_u_u((0xF4072B97L && (safe_sub_func_uint8_t_u_u(247UL, (safe_unary_minus_func_int8_t_s(p_20))))), l_418));
            }
        }
        return (*p_19);
    }
    (*p_22) = (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(func_41((safe_div_func_int32_t_s_s((*p_22), p_23)), l_404, g_126.f2, func_30((safe_sub_func_uint16_t_u_u(l_404, func_25(p_19, p_20, l_485, g_281.f5))), l_404, p_19)), p_21)) < 0L), l_404));
    if ((safe_mod_func_int32_t_s_s(0x2E8AA48CL, l_485)))
    {
        int *l_498 = (void*)0;
        struct S0 *l_501 = &g_281;
        for (g_384 = 0; (g_384 != 21); g_384 = safe_add_func_uint32_t_u_u(g_384, 3))
        {
            char l_495 = 0x9DL;
            struct S1 ***l_504 = (void*)0;
            if ((((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((l_494 != &g_278), g_126.f1)) > (func_41(((g_281.f1 > l_495) < (0x7BL >= (safe_rshift_func_int16_t_s_u(p_20, 14)))), p_23, p_20, l_498) ^ l_404)), l_485)) && g_17) & p_21))
            {
                return (*p_19);
            }
            else
            {
                struct S0 **l_500 = &g_125;
                (*l_500) = l_499;
                (*p_22) = (g_126.f7 == g_281.f0);
                (*l_500) = l_501;
            }
            if (((l_504 == (void*)0) > (p_19 != (*g_62))))
            {
                int l_505 = 0x7664853EL;
                return l_505;
            }
            else
            {
                return l_485;
            }
        }
    }
    else
    {
        unsigned char l_506 = 1UL;
        return l_506;
    }
    return l_404;
}







static unsigned char func_25(int * p_26, unsigned char p_27, short p_28, unsigned char p_29)
{
    struct S1 **l_395 = &g_97;
    int l_396 = 0x65D1AE42L;
    if ((0x2FL != (((0xDC2BL && ((((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_126.f0, (l_395 != (*g_277)))), 0x8AL)) >= 1UL) >= 1UL) < 0xABF8L)) || g_98.f1) & g_126.f5)))
    {
        int *l_397 = &g_17;
        l_397 = l_397;
    }
    else
    {
        int *l_398 = &g_58;
        int l_403 = 0x04568D55L;
        (*l_398) = func_34(&l_396);
        (**g_61) = (void*)0;
        (*l_398) = (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_281.f7 || (g_126.f6 < g_98.f4)), l_396)), (p_28 < l_403)));
    }
    return l_396;
}







static int * func_30(char p_31, int p_32, int * p_33)
{
    char l_377 = 2L;
    int l_389 = 0xB2059F01L;
    int *l_390 = (void*)0;
    (**g_61) = &p_32;
    return l_390;
}







static int func_34(int * p_35)
{
    struct S1 **l_298 = (void*)0;
    int l_303 = 1L;
    int *l_308 = &l_303;
    const char l_309 = 0x6DL;
    const int *l_317 = &g_17;
    const int * const *l_316 = &l_317;
    const int * const **l_315 = &l_316;
    (*g_277) = l_298;
    if (((safe_lshift_func_int16_t_s_s(func_41(((safe_sub_func_uint16_t_u_u(l_303, g_126.f6)) < l_303), ((l_303 >= (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((func_41(g_281.f4, l_303, l_303, p_35) && g_281.f7), l_303)), g_281.f5))) && 0xD1L), l_303, l_308), (*l_308))) ^ l_309))
    {
        short l_320 = 4L;
        unsigned short l_323 = 0UL;
        int *l_324 = &l_303;
        for (g_114 = (-4); (g_114 <= 48); ++g_114)
        {
            const int *l_314 = (void*)0;
            const int **l_313 = &l_314;
            const int ***l_312 = &l_313;
            struct S1 ***l_325 = &g_278;
            int *l_327 = (void*)0;
            int l_341 = 0x88BF66D7L;
            (*l_308) = (1L & (l_312 != l_315));
        }
        (*g_62) = p_35;
        (*l_308) = (*l_317);
        for (g_81 = 0; (g_81 != 12); g_81 = safe_add_func_uint16_t_u_u(g_81, 9))
        {
            int *l_363 = &g_58;
            l_324 = l_363;
            if ((*g_360))
                break;
        }
    }
    else
    {
        int *l_364 = (void*)0;
        int l_376 = 0xC9A88411L;
        (**g_61) = l_364;
        (*l_308) = (~(safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_s((~(safe_sub_func_uint8_t_u_u(g_281.f0, (***l_315)))), g_8)) != (((*g_277) == (*g_277)) ^ (safe_add_func_uint16_t_u_u((*l_308), (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(l_376, 2)) & (**l_316)), 0x8BFD0892L)))))))));
        (*g_62) = (**g_61);
        (*l_308) = (&l_364 == (void*)0);
    }
    return (***l_315);
}







static int * func_36(int p_37, unsigned short p_38, int * p_39, unsigned char p_40)
{
    int l_96 = 0xFA567606L;
    struct S1 *l_113 = &g_98;
    int l_137 = (-1L);
    struct S0 * const l_143 = &g_126;
    unsigned char l_153 = 255UL;
    int **l_170 = (void*)0;
    int l_171 = 0L;
    int *l_242 = &g_17;
    if ((l_96 ^ l_96))
    {
        struct S1 **l_99 = &g_97;
        int *l_102 = &g_17;
        (*l_99) = g_97;
        if ((safe_lshift_func_int8_t_s_u(l_96, 0)))
        {
            for (p_38 = 19; (p_38 == 25); p_38 = safe_add_func_uint8_t_u_u(p_38, 3))
            {
                if ((*p_39))
                    break;
            }
        }
        else
        {
            (**g_61) = (**g_61);
        }
        g_98.f1 = ((safe_div_func_uint16_t_u_u(func_41(p_40, (*l_102), ((safe_rshift_func_uint8_t_u_s(p_40, 7)) > g_78), p_39), (*l_102))) || 0x53532178L);
        for (p_38 = 0; (p_38 == 2); ++p_38)
        {
            int *l_122 = &g_58;
            if ((*p_39))
            {
                (*g_62) = p_39;
            }
            else
            {
                int *l_121 = &g_17;
                for (p_37 = 0; (p_37 != (-9)); p_37 = safe_sub_func_uint32_t_u_u(p_37, 4))
                {
                    for (g_58 = 4; (g_58 > (-19)); g_58--)
                    {
                        return l_121;
                    }
                }
            }
            (*l_122) = (*p_39);
        }
    }
    else
    {
        struct S0 **l_127 = &g_125;
        int *l_131 = &g_17;
        for (g_81 = 0; (g_81 != (-3)); g_81 = safe_sub_func_uint16_t_u_u(g_81, 3))
        {
            return (*g_62);
        }
        (*l_127) = g_125;
        if ((safe_add_func_int16_t_s_s((0x7DECL && (l_96 || p_40)), 7L)))
        {
            p_39 = p_39;
        }
        else
        {
            int *l_130 = &g_58;
            unsigned short l_136 = 0x8C19L;
            (*l_130) = (*p_39);
            (**g_61) = l_131;
            l_137 = l_136;
            (*l_130) = (*p_39);
        }
        for (p_40 = 0; (p_40 != 46); p_40 = safe_add_func_int32_t_s_s(p_40, 3))
        {
            struct S1 **l_140 = &g_97;
            (*l_140) = &g_98;
        }
    }
    if (((g_114 | ((l_143 != (void*)0) != (!(safe_sub_func_uint8_t_u_u((func_41(g_98.f6, (p_40 == g_126.f2), l_96, &l_137) < 0x40L), l_96))))) <= p_37))
    {
        int *l_149 = (void*)0;
        l_137 = (l_149 != (**g_61));
        (**g_61) = g_150;
    }
    else
    {
lbl_282:
        l_153 = (safe_lshift_func_int16_t_s_s(l_96, 11));
        for (g_81 = (-19); (g_81 < 13); g_81 = safe_add_func_int16_t_s_s(g_81, 9))
        {
            return (**g_61);
        }
        (*g_62) = p_39;
        return p_39;
    }
    if (((safe_add_func_uint16_t_u_u((p_37 && p_38), func_41(((safe_lshift_func_uint16_t_u_u((func_41(((+((safe_div_func_int32_t_s_s(((void*)0 != &g_97), (safe_rshift_func_uint8_t_u_u(p_40, g_126.f6)))) == ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_98.f9, 4294967295UL)), ((**g_62) != l_137))) | l_153) <= 0xC27FL) > l_96))) || 0x70156936L), g_98.f1, p_37, &l_137) ^ (-1L)), p_38)) > p_37), g_98.f7, l_96, &l_137))) != p_38))
    {
        for (g_58 = (-28); (g_58 > 8); ++g_58)
        {
            const short l_177 = 0L;
            int *l_178 = &l_137;
            (*l_178) = ((((void*)0 != l_170) > ((l_171 > p_38) & (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(0x263D67E1L, (((4294967289UL || (g_17 | (safe_rshift_func_uint16_t_u_u(((g_126.f1 > (p_37 && g_89)) & p_40), g_98.f8)))) ^ 0x7E61L) || l_177))))))) && 0x73L);
            for (g_89 = (-7); (g_89 >= 9); ++g_89)
            {
                (*l_178) = (*p_39);
                (*l_178) = (*p_39);
                (*g_62) = (void*)0;
                (*g_62) = (*g_62);
            }
            (**g_61) = p_39;
            (*g_62) = p_39;
        }
    }
    else
    {
        const short l_183 = 1L;
        struct S1 *l_184 = &g_98;
        int l_189 = 0x62D1DE33L;
        int l_221 = 8L;
        struct S1 **l_276 = &g_97;
        struct S1 ***l_275 = &l_276;
        int ***l_288 = &l_170;
        if ((safe_add_func_int32_t_s_s((func_41(l_183, ((l_184 == (void*)0) && (safe_sub_func_uint8_t_u_u(249UL, 0x09L))), (safe_mod_func_int8_t_s_s(0x4FL, l_183)), (*g_62)) > g_126.f4), (*g_150))))
        {
            int **l_190 = &g_150;
            struct S0 *l_196 = &g_126;
            int l_214 = 0L;
            int * const l_225 = &g_58;
            unsigned char l_232 = 0xD9L;
            l_189 = ((void*)0 != (*g_61));
            if ((&p_39 == l_190))
            {
                short l_191 = 0xC34FL;
                l_191 = ((**l_190) ^ (*p_39));
                l_137 = (g_98.f5 != (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_98.f3, (g_98.f6 <= ((p_38 | 0x2E39L) >= p_37)))) <= 0x01L), (&g_126 != l_196))));
            }
            else
            {
                struct S0 *l_230 = &g_126;
                int l_243 = 0xD1B3A134L;
                for (g_78 = 0; (g_78 > 56); g_78 = safe_add_func_uint8_t_u_u(g_78, 5))
                {
                    unsigned l_203 = 0xC60E83F7L;
                    int *l_215 = (void*)0;
                    int *l_216 = &g_58;
                    (*l_216) = func_41(p_38, (safe_sub_func_uint32_t_u_u(g_98.f7, (safe_lshift_func_int16_t_s_s((4294967295UL | l_203), 9)))), (((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_37, p_38)), ((*g_150) == ((safe_add_func_uint32_t_u_u(0UL, ((safe_div_func_uint8_t_u_u(g_126.f0, g_98.f8)) > 4294967292UL))) & p_38)))) || l_203) ^ 0x96L), l_214)) ^ p_37) < g_98.f3), p_39);
                    if (((~(func_41(g_98.f9, (p_37 >= 0x93L), p_37, p_39) != p_38)) < (g_98.f4 < (safe_add_func_uint32_t_u_u(p_37, 0x9D1A7C04L)))))
                    {
                        const int * const l_222 = (void*)0;
                        const int *l_224 = &l_137;
                        const int **l_223 = &l_224;
                        (**g_61) = p_39;
                        (*l_216) = (safe_div_func_uint16_t_u_u(((((void*)0 == l_113) ^ g_98.f1) | 0xCCL), (l_221 & (((void*)0 == l_143) < 4294967289UL))));
                        p_39 = (**g_61);
                        (*l_223) = l_222;
                    }
                    else
                    {
                        int **l_226 = (void*)0;
                        int **l_227 = &l_216;
                        struct S0 **l_231 = &l_196;
                        (*l_227) = l_225;
                        l_137 = func_41(g_81, ((+(g_98.f7 < (**l_227))) || g_98.f7), (safe_sub_func_int8_t_s_s((*l_225), p_37)), p_39);
                        (**g_61) = (**g_61);
                        (*l_231) = l_230;
                    }
                }
                (*l_225) = 0L;
                if (l_232)
                {
                    struct S1 *l_235 = &g_98;
                    int *l_237 = &g_58;
                    struct S0 *l_239 = &g_126;
                    for (l_171 = (-4); (l_171 == 9); l_171++)
                    {
                        int *l_236 = &l_221;
                        if ((*p_39))
                            break;
                        l_137 = ((void*)0 != l_235);
                        return l_237;
                    }
                    if ((*g_150))
                    {
                        struct S0 **l_238 = &l_196;
                        struct S0 *l_240 = (void*)0;
                        struct S1 **l_241 = &l_113;
                        (*l_238) = l_196;
                        l_240 = l_239;
                        (*l_241) = l_113;
                    }
                    else
                    {
                        return l_242;
                    }
                }
                else
                {
                    unsigned short l_248 = 0x8A03L;
                    unsigned short l_251 = 0xBE70L;
                    l_243 = (*p_39);
                    if ((*p_39))
                    {
                        return (*l_190);
                    }
                    else
                    {
                        l_251 = (((safe_add_func_uint32_t_u_u(g_8, (0xCE5FEA34L != (*g_150)))) != g_89) | p_37);
                    }
                }
                if ((&g_125 != (void*)0))
                {
                    short l_262 = 1L;
                    struct S1 **l_264 = &g_97;
                    struct S1 ***l_263 = &l_264;
                    (*l_225) = (1UL != (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_37, l_183)), 7)) < ((l_243 < (g_98.f4 == ((((0x3A84F11EL | g_126.f6) || (safe_div_func_int8_t_s_s((func_41((*l_242), (safe_mod_func_int8_t_s_s(((l_189 <= p_38) < 2L), 1L)), g_126.f1, &l_189) >= g_17), p_38))) > 4294967286UL) == l_221))) ^ l_262)), (**l_190))));
                    (*l_263) = &l_113;
                }
                else
                {
                    char l_265 = 7L;
                    l_189 = (+(l_265 != (safe_mul_func_uint16_t_u_u(65535UL, ((void*)0 != (**g_61))))));
                    for (l_221 = 0; (l_221 > 24); l_221++)
                    {
                        int *l_274 = (void*)0;
                        (*l_225) = ((safe_rshift_func_int8_t_s_u(g_126.f3, l_265)) <= l_265);
                        (*l_225) = (safe_add_func_uint8_t_u_u(l_189, 0x20L));
                        (*l_225) = 7L;
                        (*l_190) = l_274;
                    }
                    if ((l_265 & (l_275 == g_277)))
                    {
                        struct S0 **l_279 = &g_125;
                        (*l_279) = &g_126;
                        (*l_190) = &l_221;
                    }
                    else
                    {
                        struct S0 *l_280 = &g_281;
                        (*l_190) = (**g_61);
                        (*l_225) = (-1L);
                        l_280 = l_196;
                        (*l_190) = &l_243;
                    }
                }
            }
        }
        else
        {
            if (g_78)
                goto lbl_282;
            (*g_62) = &l_189;
            return p_39;
        }
        (*g_62) = p_39;
        l_221 = (g_98.f3 & func_41(g_114, p_38, (safe_sub_func_int8_t_s_s(((p_39 != (void*)0) != (&g_62 == &l_170)), (&l_242 == (void*)0))), (*g_62)));
        if ((*p_39))
        {
            int *l_285 = &g_58;
            (*l_285) = 0L;
        }
        else
        {
            int l_295 = 1L;
            int l_296 = 0x29476F64L;
            int *l_297 = (void*)0;
            l_296 = ((safe_lshift_func_int16_t_s_u(((p_37 != p_37) | (-5L)), g_81)) > l_295);
            g_98.f4 = (*l_242);
            return p_39;
        }
    }
    return p_39;
}







static int func_41(const unsigned char p_42, unsigned p_43, short p_44, int * p_45)
{
    char l_92 = 0xDFL;
    int *l_93 = &g_58;
    short l_94 = 0x8043L;
    (*l_93) = (safe_lshift_func_int8_t_s_s(l_92, 4));
    (**g_61) = (void*)0;
    return l_94;
}







static unsigned short func_46(unsigned short p_47, int * p_48)
{
    char l_49 = 1L;
    int ***l_64 = &g_62;
    if ((l_49 != ((void*)0 == p_48)))
    {
        int *l_51 = &g_17;
        int ** const l_50 = &l_51;
        int **l_53 = (void*)0;
        int ***l_52 = &l_53;
        int *l_57 = &g_58;
        (*l_52) = l_50;
        (*l_57) = ((safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((g_8 >= g_8), g_8)))) & g_17);
        p_48 = &g_58;
    }
    else
    {
        (***l_64) = (safe_rshift_func_uint8_t_u_u((((!(g_58 | p_47)) | (g_61 == l_64)) < p_47), ((void*)0 != &g_62)));
        return g_58;
    }
    (**g_62) = (p_47 <= (safe_add_func_int16_t_s_s((9L | (***l_64)), (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_8, p_47)), 0x18L)), g_58)))));
    for (g_58 = 0; (g_58 < 8); ++g_58)
    {
        const unsigned short l_75 = 65535UL;
        int l_84 = (-4L);
        int *l_85 = &g_17;
        unsigned char l_88 = 0xC9L;
        if (l_75)
            break;
        for (p_47 = 20; (p_47 < 37); p_47++)
        {
            g_78 = 0x5EF1C8D2L;
            if (((***g_61) ^ p_47))
            {
                for (l_49 = 18; (l_49 == 4); --l_49)
                {
                    if ((***l_64))
                        break;
                }
            }
            else
            {
                int l_86 = (-1L);
                g_81 = (!(*g_63));
                for (l_49 = 0; (l_49 != 8); l_49++)
                {
                    if ((*p_48))
                    {
                        l_84 = ((void*)0 == (*l_64));
                        (**l_64) = l_85;
                        if ((*p_48))
                            break;
                    }
                    else
                    {
                        (**g_61) = (void*)0;
                        (**l_64) = p_48;
                        if (l_86)
                            continue;
                    }
                    if ((*l_85))
                    {
                        int l_87 = 1L;
                        l_87 = l_87;
                        return l_88;
                    }
                    else
                    {
                        l_85 = p_48;
                        g_89 = (***g_61);
                    }
                    if ((***g_61))
                        break;
                    return g_78;
                }
            }
        }
    }
    return (***l_64);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4, "g_98.f4", print_hash_value);
    transparent_crc(g_98.f5, "g_98.f5", print_hash_value);
    transparent_crc(g_98.f6, "g_98.f6", print_hash_value);
    transparent_crc(g_98.f7, "g_98.f7", print_hash_value);
    transparent_crc(g_98.f8, "g_98.f8", print_hash_value);
    transparent_crc(g_98.f9, "g_98.f9", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2, "g_126.f2", print_hash_value);
    transparent_crc(g_126.f3, "g_126.f3", print_hash_value);
    transparent_crc(g_126.f4, "g_126.f4", print_hash_value);
    transparent_crc(g_126.f5, "g_126.f5", print_hash_value);
    transparent_crc(g_126.f6, "g_126.f6", print_hash_value);
    transparent_crc(g_126.f7, "g_126.f7", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_281.f5, "g_281.f5", print_hash_value);
    transparent_crc(g_281.f6, "g_281.f6", print_hash_value);
    transparent_crc(g_281.f7, "g_281.f7", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
