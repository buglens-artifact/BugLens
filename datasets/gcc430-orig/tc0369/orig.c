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
   char f1;
   char f2;
   int f3;
   unsigned f4;
   unsigned f5;
   int f6;
   short f7;
   unsigned f8;
};


static int g_3 = 2L;
static unsigned g_5 = 9UL;
static short g_55 = 0x3A21L;
static int g_61 = 0x58D911ACL;
static unsigned g_63 = 2UL;
static unsigned g_69 = 0UL;
static unsigned *g_68 = &g_69;
static struct S0 g_83 = {0x95BCL,0x59L,1L,0x8B12ACF1L,0x29B4DB59L,0xB14BE569L,0xA12B2FE0L,-1L,4294967295UL};
static struct S0 *g_82 = &g_83;
static unsigned short g_94 = 0xBB7EL;
static unsigned short *g_102 = &g_94;
static unsigned short **g_101 = &g_102;
static int g_121 = 0L;
static short *g_146 = &g_83.f7;
static short **g_145 = &g_146;
static short g_154 = 0xDE8AL;
static char *g_255 = &g_83.f1;
static int *g_257 = (void*)0;
static int **g_256 = &g_257;
static unsigned char g_260 = 0x9BL;
static unsigned **g_322 = (void*)0;
static unsigned ***g_321 = &g_322;
static unsigned short g_383 = 0x2153L;
static unsigned char g_387 = 1UL;
static int *g_417 = (void*)0;



static int func_1(void);
static int func_6(int * p_7, int * p_8, unsigned char p_9);
static int * func_10(int * p_11, int * p_12, unsigned char p_13, unsigned p_14);
static int * func_15(unsigned char p_16, char p_17);
static unsigned char func_18(int * p_19, unsigned short p_20, int p_21);
static int * func_22(unsigned char p_23, short p_24, int p_25, unsigned p_26, unsigned p_27);
static short func_30(int p_31, int * p_32, int p_33, unsigned p_34, unsigned p_35);
static int func_36(int * p_37, unsigned short p_38);
static int * func_39(short p_40);
static short func_41(unsigned char p_42, unsigned p_43, int p_44, unsigned p_45);
static int func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = (void*)0;
    char l_345 = 1L;
    unsigned *l_565 = &g_83.f8;
    unsigned **l_564 = &l_565;
    unsigned ***l_563 = &l_564;
    struct S0 **l_574 = &g_82;
    struct S0 ***l_573 = &l_574;
    g_5 = ((*l_2) = 0xADE2167FL);
    (*l_2) = func_6(func_10(func_15(func_18(func_22(g_3, ((0UL > (((~(safe_lshift_func_uint16_t_u_u((func_30(((*l_2) , (*l_2)), &g_3, func_36(func_39(func_41(((*l_2) , g_5), (safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_uint8_t_u(((g_55 = (((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((((*l_2) ^ (0xD7L || g_5)) || (-1L)) > g_5) > 0x7B4D2C29L), 4)) , g_3), g_5)) < (*l_2)) & g_3)) , g_5))) > (*l_2)) > 0L), (*l_2))), (*l_2), g_3)), (*l_2)), (*l_2), (*l_2)) , 0UL), g_3))) && (**g_145)) | (*l_2))) <= g_3), g_3, (*l_2), g_3), l_345, g_260), g_260), l_2, g_383, g_383), l_4, g_260);

    ;



    for (g_63 = 0; (g_63 <= 32); g_63 = safe_add_func_uint8_t_u_u(g_63, 7))
    {
        int **l_538 = &l_2;
        unsigned char *l_545 = &g_260;
        int l_546 = 0L;
        int *l_547 = (void*)0;
        int *l_548 = &g_83.f6;
        short l_570 = (-4L);
        struct S0 l_592 = {0xF361L,0L,1L,0L,8UL,0x5D27EC53L,0xC58E6B42L,3L,2UL};
        (*l_548) = ((((l_546 = (((**g_145) = func_6(((*l_538) = ((*g_256) = &g_121)), &g_121, g_83.f1)) || ((((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(func_18(func_10(func_22(((*l_545) = (+(((*l_2) , ((((g_69 , ((**l_538) >= g_69)) & (safe_mod_func_int32_t_s_s(func_18(((((void*)0 != &g_83) & (*g_255)) , (*g_256)), (**l_538), g_121), (*l_2)))) , (*g_145)) != (void*)0)) , 9UL))), (**l_538), (*l_2), g_5, g_83.f1), (*l_538), g_69, g_61), l_546, g_383), 0L)), 0x2E01F926L)) , (*g_146)) & 0x688AL) || 0xF2L))) , (*g_255)) && (*g_255)) , (*l_2));

        ;
        for (g_387 = 0; (g_387 > 23); g_387 = safe_add_func_uint8_t_u_u(g_387, 3))
        {
            struct S0 **l_572 = &g_82;
            struct S0 ***l_571 = &l_572;
            int *l_578 = &l_546;
            for (g_69 = 0; (g_69 > 14); ++g_69)
            {
                struct S0 **l_553 = &g_82;
                int l_554 = 1L;
                unsigned l_569 = 0UL;
                int *l_582 = &g_121;
                (*l_553) = &g_83;

                ;
                if (((*l_548) = ((**l_538) = l_554)))
                {
                    unsigned *l_562 = &g_83.f8;
                    unsigned **l_561 = &l_562;
                    unsigned ***l_560 = &l_561;
                    unsigned ****l_559 = &l_560;
                    struct S0 l_568 = {0x0448L,-1L,9L,0x8FB8F4EEL,0UL,6UL,0x59F0BB17L,5L,2UL};
                    char l_579 = 8L;
                    int l_590 = 0x299FD8B8L;
                    if ((safe_add_func_int32_t_s_s(((**l_538) = ((func_18(&g_61, (*l_2), (0x5549L ^ (((safe_add_func_uint32_t_u_u(g_94, func_41(((((*l_559) = (void*)0) == l_563) && (safe_add_func_uint8_t_u_u((l_568 , func_41(g_387, (((*l_545) = g_83.f8) && 255UL), l_568.f0, g_83.f1)), 0x42L))), (**l_538), l_569, l_569))) | l_570) == (**l_538)))) , l_571) == l_573)), 0xBBA0CD18L)))
                    {
                        int *l_577 = &l_546;
                        unsigned l_586 = 7UL;
                        (*g_82) = (func_6(&g_61, l_582, g_63) , (*g_82));
                        (*l_538) = l_577;

                        ;
                        g_82 = &g_83;
                        if (l_586)
                            continue;
                    }
                    else
                    {
                        int l_587 = 0x0816E5A8L;
                        (*l_548) = (((**l_538) = l_587) , (safe_sub_func_int16_t_s_s(((*l_548) != ((*g_255) ^ (*l_578))), func_6(l_562, &g_3, g_63))));
                    }

                    ;
                }
                else
                {
                    unsigned short l_591 = 3UL;
                    (**l_574) = (*g_82);
                    (*l_578) = (l_591 , (l_592 , (*l_578)));
                }
                l_4 = l_578;

                ;
            }
        }

        ;

    }



    ;

    return l_345;
}







static int func_6(int * p_7, int * p_8, unsigned char p_9)
{
    unsigned **l_534 = (void*)0;
    int *l_535 = &g_61;
    (*l_535) = ((void*)0 == l_534);
    return (*l_535);
}







static int * func_10(int * p_11, int * p_12, unsigned char p_13, unsigned p_14)
{
    struct S0 l_458 = {0xA776L,0x3CL,0xE6L,-6L,4UL,1UL,-3L,1L,0x35AACB7BL};
    struct S0 *l_459 = &g_83;
    short *l_464 = &g_83.f0;
    short l_498 = (-5L);
    unsigned l_533 = 1UL;
    (*l_459) = l_458;
    (*l_459) = (*l_459);
    if (((*p_12) = 1L))
    {
        char l_461 = (-4L);
        int *l_462 = &g_83.f6;
        short *l_463 = &g_83.f7;
        if ((((((*g_145) = (*g_145)) == ((g_83.f1 >= (safe_unary_minus_func_uint32_t_u(((l_461 && (func_18(l_462, ((l_463 == l_464) , (func_18((*g_256), (l_458.f6 = (+(g_94 = l_458.f8))), (*l_462)) != (-1L))), l_458.f0) > 0x8B6EL)) <= l_458.f3)))) , l_463)) , (*l_462)) ^ (*l_462)))
        {
            unsigned short **l_465 = &g_102;
            int l_486 = 1L;
            int l_496 = 0L;
            (*g_256) = func_15(g_3, ((void*)0 == l_465));
            if (func_18(p_11, p_13, g_55))
            {
                int l_468 = (-10L);
                int l_471 = 0xA42C4EBEL;
                (*p_12) = ((safe_add_func_uint32_t_u_u(g_83.f7, l_468)) <= (safe_lshift_func_int8_t_s_s(l_471, 5)));
            }
            else
            {
                unsigned *l_472 = (void*)0;
                unsigned *l_473 = &g_83.f8;
                int l_476 = 0x7BA10509L;
                int l_497 = 0x11087EC5L;
                if (((((*l_473) = (*l_462)) & (*p_12)) <= 0xECD1L))
                {
                    int **l_479 = &l_462;
                    unsigned char *l_495 = &g_387;
                    int l_499 = 0xA7D29C3FL;
                    (*l_459) = g_83;
                    for (l_458.f3 = 3; (l_458.f3 <= 0); --l_458.f3)
                    {
                        struct S0 **l_477 = (void*)0;
                        struct S0 **l_478 = &g_82;
                        g_83.f6 = l_458.f2;
                        (*l_462) = l_476;
                        (*l_478) = &l_458;

                        ;
                        return (*g_256);



                    }
                    (*l_479) = ((*g_256) = (void*)0);

                    ;
                    ;
                    (*g_256) = func_22((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_486, g_383)), (((*l_495) = (safe_sub_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((func_41(g_83.f4, (safe_sub_func_uint16_t_u_u(1UL, (safe_sub_func_int8_t_s_s((l_476 = (*g_255)), ((*l_495) = p_14))))), (func_41(p_14, g_61, (l_496 = ((func_41((p_13 = (((*l_473) = (p_14 & g_83.f8)) || p_13)), g_83.f4, (*p_12), g_83.f3) & 0x03CEL) < 0x743CL)), g_154) , l_486), l_497) | l_458.f0), g_3)) >= l_497) , l_498), (-1L)))) >= (*g_255)))) && l_499), p_14)), l_497, g_83.f1, g_83.f3, g_83.f3);
                }
                else
                {
                    unsigned **l_501 = &l_472;
                    unsigned ***l_500 = &l_501;
                    unsigned **l_503 = &l_473;
                    unsigned ***l_502 = &l_503;
                    int l_506 = 0x7828EE9EL;
                    (*p_12) = ((((*l_502) = ((*l_500) = &l_473)) == (void*)0) < (l_497 , (safe_rshift_func_int16_t_s_s(((*g_146) = (-1L)), (((((*p_12) || 1L) , (9UL & 0x49L)) | l_506) <= p_13)))));

                    ;
                }

                ;
                for (g_83.f4 = 0; (g_83.f4 >= 36); g_83.f4 = safe_add_func_int32_t_s_s(g_83.f4, 3))
                {
                    int *l_509 = &l_496;
                    struct S0 **l_510 = &g_82;
                    (*g_256) = l_509;

                    ;
                    (*l_510) = &g_83;

                    ;
                }

                ;
            }

            ;
            ;
            return p_12;



        }
        else
        {
            int l_517 = 0x8A3CF447L;
            int l_518 = 1L;
            char *l_525 = &l_461;
            unsigned **l_532 = &g_68;
            (*p_12) = func_30(p_13, func_15((((((safe_lshift_func_uint16_t_u_s((l_518 = ((safe_rshift_func_uint8_t_u_s((1UL != ((safe_add_func_int8_t_s_s(1L, (*l_462))) & 65528UL)), ((l_458.f6 = (!1UL)) < (g_83.f8 | func_18((*g_256), l_517, g_83.f2))))) , p_13)), 1)) , g_69) , (**g_145)) && p_13) <= l_458.f7), l_458.f0), l_458.f8, l_517, (*l_462));
            l_518 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(func_18((*g_256), (p_13 | (((*l_525) = ((*g_255) = p_14)) < (l_458.f7 >= (safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((0x59D7L >= (((*l_532) = p_12) == (void*)0)), 0UL)) | p_13) , 250UL), l_533))))), (*l_462)), p_13)), p_13)), 12));

            ;
        }

        ;
    }
    else
    {
        (*g_256) = (*g_256);
    }
    return (*g_256);


}







static int * func_15(unsigned char p_16, char p_17)
{
    struct S0 l_355 = {1L,0x89L,0x1DL,0x6B064C71L,0xAA14C0BAL,0x720ECE5EL,0x5E385F3EL,0x3FAEL,0x59DB557BL};
    unsigned short **l_357 = &g_102;
    unsigned short **l_358 = &g_102;
    int *l_359 = &l_355.f6;
    short *l_429 = &g_55;
    unsigned l_448 = 0x15EEDD2BL;
    int *l_449 = &l_355.f6;
    for (g_3 = 0; (g_3 < 17); ++g_3)
    {
        unsigned l_352 = 4294967295UL;
        unsigned short **l_356 = &g_102;
        int *l_360 = &g_3;
        int l_361 = 0x18CC1155L;
        int l_395 = (-1L);
        char l_431 = 0L;
        char l_439 = 0xEDL;
        struct S0 *l_446 = &g_83;
    }
    return (*g_256);


}







static unsigned char func_18(int * p_19, unsigned short p_20, int p_21)
{
    char l_346 = 0xBDL;
    int l_347 = 0x8A4656B0L;
    l_347 = l_346;
    return p_21;
}







static int * func_22(unsigned char p_23, short p_24, int p_25, unsigned p_26, unsigned p_27)
{
    int l_244 = 9L;
    char *l_269 = &g_83.f1;
    int l_313 = 0x1AA62D46L;
    int *l_314 = &g_83.f6;
    unsigned ***l_323 = &g_322;
    struct S0 *l_329 = (void*)0;
    unsigned char l_334 = 250UL;
    unsigned char l_341 = 0xDDL;
    int *l_342 = &g_3;
    struct S0 l_343 = {0x9014L,-6L,0x88L,-9L,4294967292UL,1UL,0xD15E0714L,0L,0xFD94092DL};
    struct S0 *l_344 = &g_83;
    if ((safe_sub_func_int8_t_s_s(l_244, 1L)))
    {
        int *l_245 = (void*)0;
        int *l_246 = &g_83.f6;
        int **l_247 = &l_246;
        struct S0 l_272 = {-9L,0x35L,-1L,0xBA7A7D87L,0x69C53B77L,0x3CCC9B7EL,5L,-2L,4294967295UL};
        struct S0 **l_274 = &g_82;
        char l_312 = 0x50L;
        (*l_246) = (p_24 && (p_27 & g_69));
        (*l_247) = &g_121;

        ;
        for (g_5 = 0; (g_5 <= 8); g_5 = safe_add_func_int16_t_s_s(g_5, 1))
        {
            short l_250 = 0L;
            struct S0 l_265 = {0xAD67L,0L,1L,0x7A1FF17BL,1UL,0x28120CE1L,-1L,-4L,0x827C98E5L};
            char l_298 = 0xE1L;
            unsigned l_327 = 1UL;
            struct S0 *l_328 = &l_272;
        }
    }
    else
    {
        struct S0 **l_330 = (void*)0;
        struct S0 **l_331 = &l_329;
        struct S0 **l_332 = &g_82;
        int *l_333 = &g_83.f6;
        short *l_337 = &g_154;
        int l_338 = 0x2B970DB5L;
        unsigned char *l_339 = &l_334;
        int l_340 = 1L;
        l_314 = (*g_256);

        ;
        (*l_332) = ((*l_331) = l_329);

        ;
        l_314 = ((*g_256) = ((g_83 , func_30(((((*l_339) = (((**g_145) = (!(((*l_333) = (p_23 < (**g_145))) && l_334))) | ((*l_337) = func_41(g_63, p_27, (~(safe_lshift_func_uint8_t_u_s((g_154 , (((l_338 = ((*l_337) = p_23)) , l_333) != (void*)0)), (*g_255)))), p_25)))) >= p_25) || l_340), (*g_256), p_27, l_341, g_3)) , (void*)0));

        ;
        ;
    }

    ;
    (*l_342) = p_27;
    (*g_321) = (*l_323);
    (*l_344) = l_343;
    return (*g_256);


}







static short func_30(int p_31, int * p_32, int p_33, unsigned p_34, unsigned p_35)
{
    int *l_238 = &g_121;
    struct S0 l_239 = {0x6C1BL,0L,-1L,-7L,0UL,0x02393EE3L,1L,-1L,0xF8AAB923L};
    struct S0 *l_240 = (void*)0;
    struct S0 *l_241 = &l_239;
    (*l_238) = g_69;
    (*l_241) = l_239;
    return (**g_145);
}







static int func_36(int * p_37, unsigned short p_38)
{
    struct S0 *l_89 = (void*)0;
    int *l_99 = &g_61;
    struct S0 l_105 = {0x5732L,0xA1L,0xDAL,0x16E9852BL,0x53350B76L,0x7FFA3025L,0x628AE825L,0x0D30L,0x74181134L};
    short *l_120 = &g_83.f0;
    unsigned short *l_124 = &g_94;
    unsigned short l_133 = 4UL;
    if ((l_89 != (void*)0))
    {
        unsigned l_90 = 0UL;
        unsigned short *l_93 = &g_94;
        short *l_96 = &g_83.f0;
        short **l_95 = &l_96;
        int *l_97 = (void*)0;
        int *l_98 = &g_61;
        struct S0 l_110 = {0x4D2AL,0L,0x7DL,0xCF631B5FL,9UL,6UL,0L,0xF9DFL,0UL};
        l_90 = g_3;
        if (((*l_98) = ((g_83.f7 == (safe_lshift_func_int8_t_s_s(((((*l_93) = (&g_82 == &g_82)) , &l_89) != &g_82), 6))) | ((((*l_95) = l_93) != (void*)0) & p_38))))
        {
            int **l_100 = &l_98;
            unsigned short **l_103 = &g_102;
            (*l_100) = l_99;
            l_103 = g_101;
        }
        else
        {
            struct S0 l_104 = {0xAEF2L,0L,0x60L,0xE5B73647L,6UL,0UL,0x437717E4L,0xAB87L,4294967295UL};
            int **l_106 = &l_99;
            struct S0 **l_107 = (void*)0;
            struct S0 **l_108 = &g_82;
            int l_109 = 0xBFF0AA60L;
            l_105 = l_104;
            (*l_106) = &g_61;
            l_105 = (((((*l_108) = &l_105) != (void*)0) & func_41(l_109, (*l_99), (g_63 & 65532UL), (65531UL ^ p_38))) , l_110);

            ;
        }

        ;
        ;
    }
    else
    {
        struct S0 l_111 = {0L,1L,0xFAL,0xA7086DEEL,0UL,8UL,1L,0x96F0L,2UL};
        unsigned short l_144 = 0x15FEL;
        int l_168 = (-1L);
        int l_169 = (-9L);
        unsigned *l_215 = &g_83.f8;
        if ((l_111 , (-1L)))
        {
            return p_38;
        }
        else
        {
            (*l_99) = g_83.f3;
        }
        (*l_99) = (((((safe_mod_func_int16_t_s_s((p_38 >= (safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s((func_41((safe_sub_func_int8_t_s_s((((void*)0 != l_120) , func_41(g_121, l_111.f0, ((*l_99) = ((safe_mod_func_int32_t_s_s((((((*g_101) = &p_38) != (l_124 = (void*)0)) && func_41(((-3L) == 0x813EL), (*l_99), g_3, l_111.f3)) >= g_94), l_111.f6)) == p_38)), p_38)), l_111.f1)), l_111.f8, g_55, p_38) > l_111.f6), 0x16L)) && 9UL), p_38))), l_111.f7)) , (*l_99)) | p_38) < 0L) ^ p_38);

        ;
        ;
        for (g_69 = 0; (g_69 <= 54); g_69 = safe_add_func_int32_t_s_s(g_69, 9))
        {
            char *l_132 = &g_83.f1;
            unsigned char l_137 = 0x11L;
            int l_138 = (-4L);
            short *l_141 = &l_111.f7;
            short l_153 = 0L;
            l_111.f6 = (func_41(((4L ^ func_41((safe_unary_minus_func_int8_t_s(((l_137 = (safe_add_func_int16_t_s_s((*l_99), (safe_rshift_func_uint16_t_u_s((((*l_132) = 1L) || l_133), ((safe_unary_minus_func_uint32_t_u(0x96E4AE6EL)) , (g_83.f3 > (safe_rshift_func_int8_t_s_u((-6L), (((*g_102) = ((g_69 >= (g_83.f4 && p_38)) == p_38)) && p_38)))))))))) , g_83.f5))), l_138, (*l_99), g_121)) < 252UL), l_111.f0, l_138, l_111.f4) > 0x8E2B3D63L);
            if (p_38)
            {
                unsigned l_142 = 0x14DBE924L;
                unsigned char *l_143 = &l_137;
                struct S0 l_170 = {0x2D05L,0x5FL,-4L,0x799EF2C4L,0x0428BAAFL,0x22C2485CL,-1L,0xE248L,4294967290UL};
                if ((safe_mod_func_int32_t_s_s(func_41((func_41(((*l_143) = (g_83.f1 <= (((*g_102) <= ((func_41(((((p_38 & g_83.f0) , l_141) != (void*)0) >= g_121), p_38, l_142, g_55) >= g_61) , 8L)) == 0xE52F1CB2L))), g_55, g_3, g_55) < p_38), g_121, l_144, g_83.f5), g_61)))
                {
                    short **l_148 = &l_141;
                    short ***l_147 = &l_148;
                    (*l_99) = (g_145 != ((*l_99) , ((*l_147) = &g_146)));

                    ;
                }
                else
                {
                    int l_155 = 0xF75C09CCL;
                    int *l_156 = &l_138;
                    unsigned *l_167 = &g_83.f8;
                    struct S0 *l_171 = &l_111;
                    for (g_55 = 0; (g_55 > 0); g_55 = safe_add_func_int32_t_s_s(g_55, 1))
                    {
                        (*l_99) = g_83.f0;
                        (*g_82) = l_111;
                        (*g_82) = (*g_82);
                    }
                    (*l_156) = func_41(p_38, p_38, ((*l_99) = l_137), (((((~g_83.f1) < ((*l_156) = func_41((safe_lshift_func_int8_t_s_u((l_153 != ((**g_145) = g_154)), 0)), (((*l_156) = (l_155 = (((&g_68 != (void*)0) , ((((0x7C8980ECL == g_83.f0) , g_83.f5) && g_83.f2) < p_38)) <= 0x73L))) && p_38), g_83.f3, l_137))) , (**g_145)) & p_38) , 0xFDF78E13L));
                    if ((safe_rshift_func_int16_t_s_s((**g_145), (((((*l_171) = ((func_41(((safe_rshift_func_uint16_t_u_u(p_38, ((safe_lshift_func_int8_t_s_s((((func_41((safe_add_func_int32_t_s_s((func_41((!g_154), (l_138 = ((*l_99) = (~((*l_167) = ((248UL || ((*l_143) = p_38)) , ((safe_rshift_func_uint16_t_u_u((((((*g_146) | 0x2AF4L) == p_38) ^ 0xB6L) > p_38), 4)) , l_111.f0)))))), l_142, p_38) | (*g_146)), g_63)), p_38, l_142, g_5) , (-1L)) , g_94) , l_153), 7)) , l_142))) < l_168), p_38, g_121, l_169) != l_153) , l_170)) , (void*)0) != (void*)0) , l_111.f0))))
                    {
                        return g_83.f7;


                    }
                    else
                    {
                        int **l_172 = &l_99;
                        (*l_172) = &g_61;
                    }
                }
            }
            else
            {
                int l_173 = 5L;
                unsigned short l_179 = 0x1CCFL;
                unsigned char l_193 = 255UL;
                unsigned l_222 = 0xDA0C8096L;
                if (l_173)
                {
                    (*g_82) = l_111;
                    if (g_69)
                        continue;
                }
                else
                {
                    return l_173;


                }
                if (func_41(g_83.f0, l_144, ((p_38 & l_173) , (l_111.f6 = ((safe_sub_func_int32_t_s_s(((l_138 = 0xA4L) == 1UL), g_69)) || (g_83.f5 < (p_38 & 4UL))))), g_83.f1))
                {
                    unsigned *l_178 = &l_105.f8;
                    struct S0 *l_180 = &l_105;
                    int l_187 = 3L;
                    (*l_99) = (safe_rshift_func_int16_t_s_u((((*l_178) = ((*l_99) ^ p_38)) && ((func_41(g_83.f6, (g_5 , (l_179 == func_41(((((*l_180) = (*g_82)) , 4294967295UL) && ((g_61 || (((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((g_94 == 2L) != p_38), g_83.f3)), l_137)), g_83.f4)) || p_38) > l_111.f7)) & p_38)), g_83.f3, p_38, (*l_99)))), l_187, g_83.f4) > (*g_102)) | p_38)), p_38));
                    if ((*l_99))
                        continue;
                }
                else
                {
                    unsigned char *l_190 = &l_137;
                    unsigned **l_196 = (void*)0;
                    unsigned **l_198 = (void*)0;
                    unsigned ***l_197 = &l_198;
                    (*l_99) = (g_83.f6 = (safe_mod_func_int8_t_s_s((((l_190 == ((((safe_lshift_func_int8_t_s_u(((*l_132) = (*l_99)), l_173)) || (l_193 > (safe_sub_func_uint32_t_u_u(l_179, g_83.f5)))) != (l_196 == ((*l_197) = (void*)0))) , &l_137)) , (*l_99)) <= 255UL), (-1L))));
                }
                for (l_168 = (-14); (l_168 >= (-2)); l_168 = safe_add_func_int32_t_s_s(l_168, 5))
                {
                    char l_204 = 0x41L;
                    unsigned *l_212 = &g_83.f4;
                    int *l_233 = &l_138;
                }
                (*l_99) = l_193;
            }
            for (g_154 = 0; (g_154 < (-19)); g_154 = safe_sub_func_uint32_t_u_u(g_154, 3))
            {
                for (g_83.f0 = 1; (g_83.f0 < (-27)); --g_83.f0)
                {
                    return g_94;


                }
            }
            (*l_99) = g_63;
        }
    }

    ;
    ;
    ;
    return (*l_99);



}







static int * func_39(short p_40)
{
    unsigned *l_62 = &g_63;
    short *l_64 = &g_55;
    int l_67 = 0x199ED189L;
    unsigned *l_71 = &g_69;
    unsigned **l_70 = &l_71;
    int *l_72 = &l_67;
    unsigned ***l_73 = &l_70;
    struct S0 *l_74 = (void*)0;
    int *l_88 = &g_83.f6;
    for (g_5 = 0; (g_5 == 53); g_5 = safe_add_func_int16_t_s_s(g_5, 1))
    {
        int *l_60 = &g_3;
        int **l_59 = &l_60;
        (*l_59) = &g_3;
    }
    (*l_72) = (func_41(g_61, (g_3 , ((g_61 >= (((*l_62) = p_40) , ((*l_64) = (p_40 > 1UL)))) <= (((safe_sub_func_uint16_t_u_u(l_67, (g_68 == ((*l_70) = (void*)0)))) , (void*)0) != &l_67))), l_67, p_40) > 0L);

    ;
    (*l_73) = &l_62;

    ;
    if (p_40)
    {
        struct S0 **l_75 = &l_74;
        int **l_76 = &l_72;
        (*l_75) = l_74;
        (*l_76) = (void*)0;

        ;
    }
    else
    {
        struct S0 l_85 = {0x98F8L,0x6FL,-1L,1L,0xCABD119EL,0xD4DC4505L,-7L,0xFBD2L,4294967295UL};
        int *l_87 = &l_67;
        if ((p_40 && 4294967295UL))
        {
            int *l_77 = (void*)0;
            return l_77;


        }
        else
        {
            int **l_78 = &l_72;
            (*l_78) = &g_3;

            ;
            if (g_63)
            {
                short l_79 = (-8L);
                g_61 = l_79;
            }
            else
            {
                struct S0 l_86 = {0x2915L,0L,0xFCL,0x2E2EE0BDL,0x4A170516L,4294967295UL,-9L,1L,0xFB3884E3L};
                for (g_5 = 0; (g_5 != 31); g_5++)
                {
                    struct S0 **l_84 = &g_82;
                    (*l_84) = g_82;
                }
                (*l_78) = (*l_78);
                l_86 = l_85;
                l_87 = &g_3;

                ;
            }

            ;
        }

        ;
        ;
        return l_88;


    }

    ;
    return &g_3;


}







static short func_41(unsigned char p_42, unsigned p_43, int p_44, unsigned p_45)
{
    unsigned l_56 = 8UL;
    return l_56;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_83.f6, "g_83.f6", print_hash_value);
    transparent_crc(g_83.f7, "g_83.f7", print_hash_value);
    transparent_crc(g_83.f8, "g_83.f8", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
