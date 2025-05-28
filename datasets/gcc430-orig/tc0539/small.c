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
   int f0;
   unsigned f1;
   char f2;
   int f3;
   volatile unsigned char f4;
};

union U1 {
   int f0;
   volatile char * f1;
   unsigned short f2;
};


static int g_5 = 1L;
static char g_10 = 0x42L;
static char *g_9 = &g_10;
static int g_15 = (-1L);
static int g_43 = 0x1A094951L;
static int *g_50 = &g_5;
static int **g_49 = &g_50;
static int *** volatile g_48 = &g_49;
static union U1 g_52 = {0L};
static int * volatile g_54 = &g_43;
static int ** volatile g_59 = &g_50;
static int * volatile g_63 = &g_43;
static int * volatile g_67 = &g_43;
static int * volatile g_75 = &g_15;
static union U0 g_78 = {0xA224D52AL};
static int * volatile * volatile g_80 = &g_75;
static int * volatile g_82 = &g_43;
static volatile unsigned g_84 = 0x7A549BDAL;
static union U0 g_86 = {0x00FABB65L};
static int * volatile g_94 = &g_78.f3;
static union U0 g_149 = {0L};
static union U0 g_158 = {0x990F7100L};
static unsigned short g_184 = 65528UL;
static int * volatile g_187 = &g_78.f3;
static volatile union U0 g_190 = {-1L};
static int * volatile g_194 = (void*)0;
static int ** volatile g_199 = &g_50;
static int ** volatile g_218 = &g_50;
static union U0 * volatile g_285 = (void*)0;
static union U0 * volatile *g_284 = &g_285;
static union U0 g_288 = {0x167041C5L};
static volatile union U0 g_302 = {0x86D45781L};
static volatile union U0 g_336 = {-8L};
static volatile unsigned g_347 = 0xD95EADCBL;
static union U0 g_380 = {0xD1D70EA7L};
static union U0 g_417 = {0xB17EABBAL};
static volatile union U0 g_451 = {0xE32C7C72L};
static volatile union U0 g_467 = {0x9BEB0EB3L};
static volatile union U0 *g_466 = &g_467;
static int * volatile g_468 = &g_417.f3;
static int ** volatile g_469 = &g_50;



static unsigned func_1(void);
static int * func_2(char p_3, int p_4);
static int func_6(char * p_7, int * p_8);
static int * func_11(unsigned short p_12);
static short func_16(char * p_17, char * p_18, char * p_19);
static char * func_20(unsigned p_21, short p_22, char * p_23, union U1 p_24, unsigned p_25);
static short func_26(int p_27, union U1 p_28, int * p_29);
static union U1 func_30(union U1 p_31, int * p_32);
static union U1 func_33(int * p_34);
static int * func_37(int * p_38, short p_39, int p_40, unsigned p_41);
static unsigned func_1(void)
{
    short l_13 = 0L;
    (*g_469) = func_2(g_5, func_6(g_9, func_11(l_13)));

    ;
    ;
        ;
        return l_13;
}







static int * func_2(char p_3, int p_4)
{
    char *l_350 = &g_158.f2;
    int l_351 = (-10L);
    union U1 l_423 = {0x5A57995AL};
    unsigned char l_444 = 0UL;
    int l_462 = 9L;
    union U0 *l_463 = &g_417;
    if ((((l_350 != (void*)0) && l_351) != (safe_lshift_func_int8_t_s_s((p_4 , (safe_lshift_func_uint8_t_u_s((p_4 >= l_351), 6))), (*g_9)))))
    {
        short l_356 = 0x8210L;
        int *l_357 = &g_288.f3;
        union U1 l_383 = {5L};
        (*l_357) |= l_356;

        for (l_356 = 0; (l_356 == 3); l_356 = safe_add_func_int16_t_s_s(l_356, 2))
        {
            unsigned short l_364 = 0x1383L;
            int l_373 = 1L;
            (*g_94) = (((((((void*)0 == &g_218) , p_3) && ((safe_lshift_func_uint16_t_u_s(((p_4 != (safe_add_func_uint8_t_u_u(0UL, l_364))) || 0x43L), 5)) ^ l_351)) > ((safe_rshift_func_int16_t_s_u(((*l_357) <= g_302.f3), g_149.f2)) != p_3)) ^ 0L) < 0xFBL);
            for (g_78.f1 = 11; (g_78.f1 < 2); g_78.f1--)
            {
                (*g_82) = (safe_sub_func_int16_t_s_s(l_351, (0x4AL && p_3)));
            }

            for (g_158.f2 = 14; (g_158.f2 < 16); ++g_158.f2)
            {
                char l_376 = (-1L);
                union U1 l_379 = {-1L};
                union U1 *l_386 = (void*)0;
                union U1 **l_385 = &l_386;
                union U1 ***l_384 = &l_385;
                int l_388 = (-1L);
                l_373 ^= ((p_3 , 0x32B6L) < func_16(&g_10, (p_4 , &p_3), &g_10));

                (*l_357) = (**g_80);
                for (g_149.f0 = (-7); (g_149.f0 <= 6); g_149.f0 = safe_add_func_uint8_t_u_u(g_149.f0, 1))
                {
                    union U1 ***l_387 = (void*)0;
                    (*g_218) = &p_4;

                    ;
                    l_388 = (l_376 > (safe_add_func_uint8_t_u_u(p_4, (func_26(l_351, l_379, (g_380 , &p_4)) , (((((*l_357) , l_384) != l_387) , p_4) < 0xBFL)))));


                    for (g_78.f1 = 0; (g_78.f1 <= 51); g_78.f1 = safe_add_func_uint16_t_u_u(g_78.f1, 5))
                    {
                        (*l_357) |= (((((~(((((safe_rshift_func_int8_t_s_u(p_3, 1)) > g_78.f3) ^ (((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_3, (*g_9))), (safe_rshift_func_uint16_t_u_u(0x85CAL, 8)))) , (4294967295UL & p_4)) >= ((l_376 | (g_52 , g_380.f4)) || 0x0A81L))) != (-1L)) > 248UL)) > p_4) , 0x957BL) >= l_388) ^ 0x93L);
                    }

                    return l_357;



                }
            }
            for (l_351 = (-4); (l_351 >= (-29)); l_351 = safe_sub_func_uint32_t_u_u(l_351, 2))
            {
                int *l_401 = &g_149.f3;
                return l_401;


            }
        }

    }
    else
    {
        int *l_402 = &g_43;
        int **l_403 = &g_50;
        char *l_419 = &g_158.f2;
        (*l_403) = l_402;

        ;
        for (g_86.f3 = 0; (g_86.f3 < (-9)); g_86.f3--)
        {
            unsigned char l_416 = 0x24L;
            char *l_420 = &g_380.f2;
            int ***l_428 = &l_403;
            union U1 **l_440 = (void*)0;
            if (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((*l_402) >= 0L), p_3)), 15)), l_351)) & p_3))
            {
                char *l_418 = (void*)0;
                int l_424 = (-10L);
                (*g_50) = ((safe_mod_func_int32_t_s_s(l_416, ((g_336.f3 && func_16((g_417 , (void*)0), l_418, (l_416 , l_419))) && g_10))) == g_417.f2);
                if (((~func_16(l_419, l_420, &g_10)) ^ 1L))
                {
                    char *l_425 = (void*)0;
                    for (l_416 = 0; (l_416 > 21); l_416++)
                    {
                        int *l_426 = &g_417.f3;
                        int ***l_427 = &l_403;
                        (*l_426) &= func_16(func_20(g_5, p_4, &g_10, l_423, l_424), l_425, &g_10);

                                                l_351 &= ((*g_9) && (l_427 == l_428));
                    }
                    if ((*l_402))
                        break;
                }
                else
                {
                    short l_439 = 0x47E2L;
                    for (g_10 = 29; (g_10 > (-14)); g_10 = safe_sub_func_int32_t_s_s(g_10, 8))
                    {
                        union U1 *l_433 = (void*)0;
                        union U1 **l_432 = &l_433;
                        union U1 ***l_431 = &l_432;
                        int l_436 = 7L;
                        unsigned l_443 = 0x41F5763BL;
                        (**l_403) |= p_4;
                        (*l_431) = (void*)0;

                        ;
                        (*g_50) = func_16(&g_10, &g_10, func_20(((safe_mod_func_uint32_t_u_u((((4L < (g_417.f4 || l_436)) ^ (safe_rshift_func_int8_t_s_s(l_439, (l_440 == ((safe_rshift_func_uint8_t_u_u((l_351 > (0x28L < 0x05L)), 1)) , (void*)0))))) != 0xEB95L), p_3)) | l_443), g_158.f1, &g_10, g_52, p_3));
                    }
                    (***l_428) = (l_444 & (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_351, (func_16(l_420, &g_10, &p_3) > ((void*)0 != &g_50)))) < (((&p_4 == (void*)0) || 6UL) & p_4)), 1UL)) | 4294967289UL), g_158.f0)));
                }
                (*l_403) = (*g_218);
                (*l_403) = (g_451 , (**l_428));
            }
            else
            {
                unsigned char l_461 = 2UL;
                (*g_50) = ((((!0x4FL) == p_3) > (safe_sub_func_uint16_t_u_u(0x1AE0L, ((p_4 > (((**l_403) & ((func_16(((*g_54) , &p_3), (((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_s((p_4 != (safe_mod_func_int32_t_s_s(l_444, (*g_50)))), l_461)))), p_4)) || l_423.f2) , &g_10), l_420) && 0x26L) != l_351)) || l_462)) & p_3)))) , (**g_59));
                (*g_284) = l_463;

                ;
            }
            if ((*g_54))
                continue;
        }

        ;
        (*g_50) = p_4;
        (*g_54) = (safe_rshift_func_int16_t_s_u(g_84, (&g_49 == &l_403)));
    }


    ;
    (*g_468) = (((*g_284) != g_466) && (1L > p_4));

        return &g_15;


}







static int func_6(char * p_7, int * p_8)
{
    int *l_35 = &g_15;
    union U1 l_72 = {1L};
    char l_73 = 0x79L;
    char *l_99 = (void*)0;
    int l_100 = 0x228708D2L;
    char *l_133 = (void*)0;
    int *l_148 = &g_15;
    int l_185 = 0L;
    int *l_269 = (void*)0;
    int l_349 = 3L;
    (*g_94) = (func_16(&g_10, func_20((0L != (*p_7)), func_26((*p_8), func_30(func_33(l_35), func_37(p_8, (g_15 | (p_7 != (void*)0)), (*l_35), (*l_35))), &g_5), p_7, l_72, l_73), &l_73) != 65535UL);


    ;
    (*l_35) = ((*l_35) & 0x77L);
    if (((!0xE45A0D00L) >= ((safe_sub_func_int32_t_s_s((((*l_35) == g_10) , ((l_35 != p_8) != ((func_16(&g_10, &g_10, ((+func_16(func_20((safe_add_func_int32_t_s_s((*p_8), func_16(&l_73, &g_10, &l_73))), (*l_35), &l_73, g_52, (*l_35)), &g_10, l_99)) , &l_73)) , g_78.f2) >= 0x89BD50C8L))), l_100)) < 4294967295UL)))
    {
        char *l_101 = &l_73;
        int l_102 = 9L;
        unsigned l_103 = 0x62773D59L;
        int *l_104 = &g_86.f3;
        union U0 *l_117 = &g_86;
        union U0 **l_116 = &l_117;
        union U1 *l_203 = &l_72;
        int l_205 = 0x78435563L;
        union U1 l_208 = {4L};
        (*l_104) &= ((((4294967295UL > 0x1FC1C174L) <= (*l_35)) ^ 0x87L) ^ (*g_9));

                for (g_86.f1 = 0; (g_86.f1 != 20); g_86.f1 = safe_add_func_uint8_t_u_u(g_86.f1, 1))
        {
            union U0 *l_107 = &g_78;
            int l_119 = 0x4671509BL;
            union U1 l_137 = {0xB0F35947L};
            short l_155 = 0xE1D9L;
            char *l_198 = (void*)0;
            if ((*l_104))
            {
                if ((*p_8))
                    break;
            }
            else
            {
                union U0 **l_108 = &l_107;
                (*l_108) = l_107;
            }
            if ((safe_sub_func_uint32_t_u_u((*l_35), (~(*l_35)))))
            {
                int l_113 = 8L;
                union U1 l_118 = {0L};
                if ((safe_sub_func_uint8_t_u_u((l_113 | ((safe_rshift_func_int16_t_s_u(func_16(func_20((l_113 | 7UL), g_78.f3, &l_73, g_52, l_118.f2), &g_10, p_7), (*l_104))) | (*l_104))), l_119)))
                {
                    unsigned l_126 = 4294967286UL;
                    union U0 *l_136 = &g_86;
                    for (l_102 = 0; (l_102 < (-8)); l_102 = safe_sub_func_uint32_t_u_u(l_102, 2))
                    {
                        short l_127 = 0x00ECL;
                        (*p_8) = (*p_8);
                        l_119 ^= (0xFADB94C9L | (((safe_sub_func_uint8_t_u_u((!(safe_sub_func_int8_t_s_s(((g_78.f1 , (*l_104)) | (((*l_35) <= l_127) > (safe_add_func_int16_t_s_s(g_86.f2, 7L)))), (-1L)))), (*p_7))) != l_127) || (*p_8)));
                    }
                    (*p_8) = (safe_unary_minus_func_uint32_t_u((((-1L) | (safe_sub_func_int32_t_s_s(0xA0E2E69AL, (((void*)0 != l_133) ^ (1UL >= ((((((safe_lshift_func_uint8_t_u_s(g_5, ((void*)0 == l_136))) != g_43) <= 1UL) && (*l_104)) || 0x42BFL) <= 4294967295UL)))))) && (*l_104))));
                    if (l_118.f2)
                        break;
                }
                else
                {
                    unsigned short l_154 = 0xAF2DL;
                    union U0 *l_156 = &g_149;
                    union U0 *l_157 = &g_158;
                    (*p_8) = ((((safe_add_func_int8_t_s_s((l_113 , (l_113 <= (l_137.f2 <= ((g_78.f0 < ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((func_33((((l_148 == p_8) && ((g_149 , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0UL, ((*l_148) && l_137.f0))), g_149.f2))) == l_113)) , (void*)0)) , 0xEA3A5B7FL) & g_86.f0), 2)), l_118.f2)) < 1L)) <= 0L)))), (*l_104))) < l_154) ^ (-3L)) & (*l_104));
                    (*l_35) |= ((((*g_94) >= l_155) , l_156) == ((g_52.f0 ^ (((*l_104) | (-1L)) ^ l_119)) , l_157));
                }
            }
            else
            {
                unsigned short l_163 = 0xE501L;
                int l_165 = 5L;
                for (g_15 = (-16); (g_15 < 0); ++g_15)
                {
                    unsigned char l_164 = 255UL;
                    int *l_200 = &l_102;
                    int **l_204 = &g_50;
                    l_164 = (~(safe_sub_func_uint8_t_u_u(l_163, (*l_35))));
                    if ((*p_8))
                    {
                        return l_165;
                    }
                    else
                    {
                        int *l_186 = (void*)0;
                        l_185 = ((((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((*l_104), (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((-1L), (((safe_rshift_func_int16_t_s_s(l_164, 5)) == ((g_15 , ((*g_9) & (safe_mod_func_uint32_t_u_u(g_78.f1, (safe_lshift_func_uint16_t_u_s(((l_165 ^ g_149.f1) > (((((safe_sub_func_int16_t_s_s(0x2F96L, 0L)) <= 4294967295UL) , (void*)0) == (*g_80)) ^ 0UL)), (*l_35))))))) != g_184)) >= (*p_7)))), g_149.f0)), g_5)) != 1UL) || 0x472F1F12L))), (*l_104))) || 246UL) <= 7L) , (*p_8));
                        (*g_187) = l_165;
                        if ((*p_8))
                            continue;
                    }
                    for (g_184 = 7; (g_184 < 49); g_184 = safe_add_func_int32_t_s_s(g_184, 9))
                    {
                        char *l_191 = &g_158.f2;
                        int l_192 = (-1L);
                        short l_193 = 0x6723L;
                        int *l_195 = &l_119;
                        (*l_195) = (g_190 , (((func_16(l_191, (((((((func_16(l_101, (l_192 , (void*)0), &g_10) < 4UL) != ((((g_86.f0 , l_192) >= g_149.f3) <= (*l_104)) <= l_193)) ^ l_119) == (*g_9)) == l_137.f0) >= l_163) , &g_10), &g_10) ^ (*p_8)) >= 1UL) < l_164));
                        if ((*l_195))
                            continue;
                        (*g_199) = func_37(p_8, (safe_sub_func_int8_t_s_s(func_16(l_198, &g_10, &g_10), (*l_148))), (2UL != l_137.f0), l_137.f0);

                        ;
                    }
                    (*l_204) = func_37(l_200, (safe_sub_func_int16_t_s_s((&l_137 == l_203), (*l_104))), g_86.f0, g_190.f4);

                    ;
                }
                (*l_148) |= l_205;
            }
        }

                (*l_148) = func_16(&g_10, &g_10, p_7);
        (*l_104) = (!((safe_sub_func_int16_t_s_s((*l_104), g_190.f4)) , (!((((*p_7) ^ (+((g_149 , func_16(&g_10, (l_208 , &g_10), &l_73)) , (*l_35)))) && (*l_104)) , (*g_82)))));

            }
    else
    {
        unsigned char l_213 = 0x4AL;
        union U1 *l_233 = &g_52;
        union U1 **l_232 = &l_233;
        unsigned l_251 = 0x1E1A05C3L;
        char *l_282 = &g_10;
        union U0 *l_287 = &g_288;
        union U0 **l_286 = &l_287;
        int *l_289 = (void*)0;
        int l_329 = (-1L);
        (*p_8) = (safe_rshift_func_uint8_t_u_u(((*l_35) ^ (safe_lshift_func_int16_t_s_s((*l_35), 15))), ((func_16(&g_10, p_7, &g_10) >= (l_213 || g_52.f0)) >= (g_158.f1 < 0x7CF3F8CEL))));
        if (func_16(&g_10, &l_73, p_7))
        {
            short l_216 = (-1L);
            int *l_253 = &g_86.f3;
            char *l_309 = &l_73;
            union U1 l_311 = {1L};
            if ((*l_148))
            {
                int *l_217 = (void*)0;
                for (l_185 = 0; (l_185 != 1); l_185 = safe_add_func_int32_t_s_s(l_185, 6))
                {
                    (*p_8) = l_216;
                    (*g_218) = l_217;

                    ;
                }


            }
            else
            {
                short l_225 = (-1L);
                char *l_230 = &l_73;
                int *l_237 = &g_15;
                for (l_185 = 0; (l_185 <= (-27)); l_185 = safe_sub_func_uint16_t_u_u(l_185, 7))
                {
                    char *l_231 = &l_73;
                    unsigned char l_234 = 252UL;
                    union U0 *l_239 = (void*)0;
                    if (((safe_mod_func_int8_t_s_s(((*l_35) > l_216), (safe_add_func_uint8_t_u_u((((-3L) ^ l_225) <= ((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_216, l_225)), (*l_35))) ^ 0x9CL) , func_16((g_190.f3 , l_230), p_7, l_231)) == (*p_8))), 255UL)))) <= g_149.f2))
                    {
                        unsigned short l_235 = 0x73FCL;
                        int *l_236 = &g_78.f3;
                        int **l_238 = &l_148;
                        union U0 **l_240 = &l_239;
                        (*p_8) = (l_232 != (void*)0);
                        (*l_236) |= (*p_8);
                        (*l_238) = (g_10 , l_237);
                        (*l_240) = l_239;
                    }
                    else
                    {
                        return (*g_82);
                    }
                    for (l_73 = 15; (l_73 >= (-5)); l_73 = safe_sub_func_int16_t_s_s(l_73, 3))
                    {
                        union U1 l_252 = {-1L};
                        int *l_254 = &g_5;
                        int **l_255 = &g_50;
                        (*p_8) = (safe_sub_func_uint8_t_u_u(((1L ^ ((g_52.f2 >= (*p_7)) , ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(0x32D2L, g_78.f4)) | ((((!(*p_8)) | 0x32B9EF21L) <= (6L || (!((g_52 , 0xD7B5L) | g_158.f0)))) < (*g_9))), l_216)) > l_251))) < 0x68L), (*g_9)));
                        (*g_54) = ((*g_187) && (l_252.f0 >= (*l_253)));
                        (*l_237) ^= 0x7C9C5F0FL;
                        (*l_255) = l_254;

                        ;
                    }
                }
            }


            for (g_86.f1 = (-21); (g_86.f1 < 53); g_86.f1 = safe_add_func_uint32_t_u_u(g_86.f1, 4))
            {
                char *l_260 = &g_10;
                int l_266 = 0L;
                if ((*p_8))
                {
                    char l_258 = 0x47L;
                    union U1 l_259 = {0x1A34F912L};
                    int *l_261 = &g_158.f3;
                    if ((*p_8))
                        break;
                    (*l_261) &= func_16(func_20((0x2A0FD96FL > (g_86.f2 <= ((((((((*p_7) >= g_84) ^ ((*l_148) > 0L)) == (g_15 != g_5)) <= l_258) , (*p_7)) ^ 4UL) >= (*l_148)))), l_213, &l_73, l_259, g_184), l_260, p_7);

                    for (l_213 = 3; (l_213 > 13); l_213++)
                    {
                        union U1 **l_272 = &l_233;
                        int l_281 = 0x3C4A1115L;
                        char *l_283 = (void*)0;
                    }
                }
                else
                {
                    int *l_290 = &g_78.f3;
                    union U1 **l_291 = &l_233;
                    union U1 ***l_292 = &l_291;
                    char *l_310 = (void*)0;
                    (*l_290) = (*p_8);
                    (*l_148) = (*g_63);
                    (*l_292) = l_291;
                    for (g_149.f0 = 12; (g_149.f0 >= (-15)); g_149.f0--)
                    {
                        unsigned char l_301 = 249UL;
                        int *l_312 = (void*)0;
                        int *l_313 = &g_288.f3;
                        (*g_284) = (*g_284);
                        (*p_8) = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((func_16(&g_10, l_260, func_20((((l_301 == (g_302 , (safe_sub_func_int16_t_s_s((*l_35), l_266)))) | 255UL) != ((g_52.f0 > ((*g_9) > 0xE8L)) > 9L)), l_266, &g_10, (*l_233), g_288.f3)) ^ 0xA697F749L), 0x218B3BFDL)), 0)), 3UL));
                        (*l_313) ^= ((g_78.f3 , func_20((*l_253), g_158.f4, l_260, (***l_292), l_301)) == l_310);

                    }
                }

            }

                    }
        else
        {
            unsigned short l_318 = 0UL;
            union U1 **l_346 = &l_233;
            if ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(g_158.f0, l_318)), (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_318, (safe_sub_func_int32_t_s_s((*g_67), (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_149.f3 , l_318), l_329)), g_158.f2)))))), l_318)))))
            {
                int l_330 = (-7L);
                (*p_8) = l_330;
            }
            else
            {
                union U1 **l_333 = &l_233;
                int l_345 = 0xCEE5B47AL;
                (*p_8) = ((safe_add_func_uint32_t_u_u((l_333 != ((safe_sub_func_uint16_t_u_u((g_336 , (~(safe_add_func_uint16_t_u_u(0xBC48L, (safe_lshift_func_uint8_t_u_s(248UL, (((safe_add_func_uint32_t_u_u((l_318 & (safe_lshift_func_int8_t_s_s((*g_9), 2))), ((*p_7) <= l_345))) || 1L) < (*p_7)))))))), g_78.f1)) , l_346)), (*l_35))) , 0xC31B227EL);
            }
            return (*p_8);
        }


                (*p_8) = (0x0BL > (((((g_347 , &g_52) == (*l_232)) | ((&p_8 != &l_269) , (g_78.f2 , g_158.f0))) < ((g_52.f0 < (*l_148)) , g_78.f2)) <= (*p_7)));
    }


        l_349 ^= (safe_unary_minus_func_int32_t_s(func_16(((*l_148) , &g_10), &l_73, p_7)));
    return (*l_35);
}







static int * func_11(unsigned short p_12)
{
    int *l_14 = &g_15;
    (*l_14) = g_10;
    return l_14;


}







static short func_16(char * p_17, char * p_18, char * p_19)
{
    int l_93 = 0xE1F98D32L;
    (*g_94) = l_93;
    return g_10;
}







static char * func_20(unsigned p_21, short p_22, char * p_23, union U1 p_24, unsigned p_25)
{
    unsigned l_74 = 0x3CC61BBCL;
    int *l_79 = (void*)0;
    union U1 l_81 = {0x74ECB9A7L};
    unsigned char l_83 = 0x86L;
    int *l_85 = &g_78.f3;
    int ***l_91 = &g_49;
    int *l_92 = &g_43;
    (*g_75) &= l_74;
    (*g_82) = ((((safe_rshift_func_uint16_t_u_u(l_74, (((g_78.f2 , 0x8B9DL) != 7L) > 0xD53DL))) & p_21) && g_52.f2) | (*p_23));
    (*l_85) |= (*g_63);

    (*l_92) ^= ((g_86 , (g_52.f2 <= ((*l_85) == (safe_mod_func_int32_t_s_s((g_52.f2 && (g_78.f4 >= (p_24.f2 > (((*g_9) ^ (0x8E95L || ((safe_sub_func_int16_t_s_s((((((+1UL) <= p_22) , l_91) == (void*)0) > 0x3AL), p_21)) , p_21))) & (*g_9))))), p_22))))) & (*l_85));
    return &g_10;


}







static short func_26(int p_27, union U1 p_28, int * p_29)
{
    char l_57 = 3L;
    short l_62 = 0xD0D4L;
    char l_71 = 3L;
    if (((*g_9) && p_28.f0))
    {
        unsigned l_58 = 0xAE264689L;
        for (p_27 = 23; (p_27 != (-13)); --p_27)
        {
            return p_28.f0;
        }
        (*g_54) = (l_57 < (g_52 , (!(l_58 > p_28.f0))));
        (*g_59) = &p_27;

        ;
        (*g_50) ^= (*p_29);
    }
    else
    {
        union U1 *l_61 = &g_52;
        union U1 **l_60 = &l_61;
        (*l_60) = &p_28;

        ;
        l_62 |= (*g_50);
    }


    p_29 = (*g_59);


    (*g_63) ^= (*p_29);
    for (g_15 = 2; (g_15 > 6); ++g_15)
    {
        int *l_66 = (void*)0;
        int *l_70 = &g_5;
        (*g_67) &= (*p_29);
        l_66 = func_37(&p_27, ((((safe_mod_func_uint8_t_u_u((g_52.f2 || p_28.f0), (*g_9))) != (+g_52.f2)) , g_43) , (0xFEFE6B3EL ^ ((((void*)0 == l_70) || p_28.f0) , (*p_29)))), l_57, l_71);

        ;
        if ((*p_29))
            break;
        return g_52.f2;


    }
    return l_71;


}







static union U1 func_30(union U1 p_31, int * p_32)
{
    int **l_47 = (void*)0;
    (*g_48) = l_47;

    ;
    if ((safe_unary_minus_func_uint16_t_u(g_43)))
    {
        return g_52;


            }
    else
    {
        int **l_53 = (void*)0;
        l_47 = l_53;
        (*g_54) |= (*g_50);
    }
    return g_52;


    }







static union U1 func_33(int * p_34)
{
    union U1 l_36 = {0x8D5FEAF8L};
    return l_36;


    }







static int * func_37(int * p_38, short p_39, int p_40, unsigned p_41)
{
    int *l_42 = &g_43;
    char *l_46 = &g_10;
    (*l_42) = 1L;
    for (p_40 = 0; (p_40 <= (-17)); --p_40)
    {
        if (g_5)
            break;
    }
    (*l_42) = (&g_10 != l_46);
    return &g_5;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_190.f4, "g_190.f4", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_288.f4, "g_288.f4", print_hash_value);
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_302.f2, "g_302.f2", print_hash_value);
    transparent_crc(g_302.f3, "g_302.f3", print_hash_value);
    transparent_crc(g_302.f4, "g_302.f4", print_hash_value);
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    transparent_crc(g_336.f1, "g_336.f1", print_hash_value);
    transparent_crc(g_336.f2, "g_336.f2", print_hash_value);
    transparent_crc(g_336.f3, "g_336.f3", print_hash_value);
    transparent_crc(g_336.f4, "g_336.f4", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_380.f0, "g_380.f0", print_hash_value);
    transparent_crc(g_380.f1, "g_380.f1", print_hash_value);
    transparent_crc(g_380.f2, "g_380.f2", print_hash_value);
    transparent_crc(g_380.f3, "g_380.f3", print_hash_value);
    transparent_crc(g_380.f4, "g_380.f4", print_hash_value);
    transparent_crc(g_417.f0, "g_417.f0", print_hash_value);
    transparent_crc(g_417.f1, "g_417.f1", print_hash_value);
    transparent_crc(g_417.f2, "g_417.f2", print_hash_value);
    transparent_crc(g_417.f3, "g_417.f3", print_hash_value);
    transparent_crc(g_417.f4, "g_417.f4", print_hash_value);
    transparent_crc(g_451.f0, "g_451.f0", print_hash_value);
    transparent_crc(g_451.f1, "g_451.f1", print_hash_value);
    transparent_crc(g_451.f2, "g_451.f2", print_hash_value);
    transparent_crc(g_451.f3, "g_451.f3", print_hash_value);
    transparent_crc(g_451.f4, "g_451.f4", print_hash_value);
    transparent_crc(g_467.f0, "g_467.f0", print_hash_value);
    transparent_crc(g_467.f1, "g_467.f1", print_hash_value);
    transparent_crc(g_467.f2, "g_467.f2", print_hash_value);
    transparent_crc(g_467.f3, "g_467.f3", print_hash_value);
    transparent_crc(g_467.f4, "g_467.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
