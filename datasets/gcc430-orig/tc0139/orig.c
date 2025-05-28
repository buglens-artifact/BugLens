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



static int g_13 = 7L;
static int *g_53[5] = {&g_13,&g_13,&g_13,&g_13,&g_13};
static int **g_52 = &g_53[0];
static int g_66 = 1L;
static int g_88[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
static int g_106 = 1L;
static int *g_185 = (void*)0;
static int *g_274 = &g_88[4];
static int *g_374 = (void*)0;
static int g_384 = (-9L);
static int *g_406[7] = {&g_88[4],&g_88[4],&g_88[4],&g_88[4],&g_88[4],&g_88[4],&g_88[4]};
static int g_446 = 0xF8712B36L;
static unsigned short g_461 = 0UL;
static int ***g_486 = (void*)0;
static short g_499 = (-10L);
static int g_518 = 0x681F5C89L;
static short g_544 = (-5L);
static unsigned char g_606 = 0x20L;



static unsigned short func_1(void);
static int * func_2(unsigned p_3, int * p_4, int p_5, unsigned short p_6, unsigned p_7);
static unsigned short func_10(int * p_11);
static int * func_15(int * p_16, short p_17);
static int * func_20(unsigned short p_21, int * p_22, char p_23, int * p_24, int * p_25);
static int * func_30(int p_31);
static int * func_32(char p_33, unsigned short p_34, int * p_35, unsigned p_36, int * p_37);
static int * func_38(int * p_39, int * p_40);
static int * func_42(int * p_43, int p_44, int * p_45, char p_46, int p_47);
static int ** func_49(unsigned char p_50);
static unsigned short func_1(void)
{
    int *l_12[10][8] = {{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0,&g_13},{&g_13,(void*)0,&g_13,&g_13,&g_13,(void*)0,&g_13,(void*)0},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13,&g_13,&g_13},{&g_13,(void*)0,(void*)0,&g_13,&g_13,&g_13,&g_13,(void*)0},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}};
    int *l_586[10][3] = {{&g_446,&g_88[4],&g_88[4]},{&g_446,&g_446,&g_66},{&g_446,&g_66,&g_88[4]},{&g_88[4],&g_66,&g_446},{&g_66,&g_446,&g_446},{&g_88[4],&g_88[4],&g_446},{&g_88[7],&g_66,&g_88[4]},{&g_88[7],&g_88[7],&g_66},{&g_88[4],(void*)0,&g_88[4]},{&g_66,&g_88[7],&g_88[7]}};
    int *l_589 = &g_88[4];
    int l_625 = 0x78D4C2E8L;
    int l_628 = 0x18C98ADCL;
    int i, j;
    (*g_52) = func_2(((safe_lshift_func_int8_t_s_u(((func_10(l_12[0][5]) ^ (func_10(func_15(l_12[6][1], g_13)) > (((func_10(l_586[2][2]) || ((safe_mod_func_uint16_t_u_u(g_384, g_384)) <= 2UL)) == g_88[2]) == 1L))) && g_518), 6)) && 65531UL), l_589, g_106, g_446, (*l_589));


    for (g_544 = 20; (g_544 >= 6); g_544 = safe_sub_func_int16_t_s_s(g_544, 2))
    {
        char l_602 = 0x5DL;
        int *l_627 = &g_88[6];
        if ((*l_589))
        {
            (*g_274) = func_10(l_586[2][2]);
            if ((*l_589))
                continue;
            if (l_602)
                break;
        }
        else
        {
            int l_603 = 0xD591CCFDL;
            (*g_274) = (l_602 > l_603);
            (*g_274) = l_603;
        }
        for (g_66 = 0; (g_66 <= (-12)); g_66--)
        {
            int *l_612 = &g_106;
            (*g_274) = g_606;
            for (g_461 = 0; (g_461 <= 47); g_461 = safe_add_func_int16_t_s_s(g_461, 8))
            {
                int *l_611 = (void*)0;
                unsigned l_626 = 0x41BC704DL;
                for (g_518 = 0; (g_518 != (-21)); g_518--)
                {
                    unsigned short l_620[7] = {0xEBF1L,0xEBF1L,0xEBF1L,0xEBF1L,0xEBF1L,0xEBF1L,0xEBF1L};
                    int i;
                    (*g_52) = (*g_52);
                }
                return g_446;
            }
            (*l_589) = (l_628 == ((safe_sub_func_int8_t_s_s(0xAAL, (safe_sub_func_int32_t_s_s((*l_612), g_461)))) != g_518));
        }
    }
    return g_384;
}







static int * func_2(unsigned p_3, int * p_4, int p_5, unsigned short p_6, unsigned p_7)
{
    unsigned l_590 = 0xE83B2E14L;
    int *l_599 = (void*)0;
    (*g_52) = (void*)0;


    (*g_274) = (-1L);
    (*p_4) = (l_590 && ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(8UL, 4)), (func_10((*g_52)) | func_10(p_4)))) == (safe_add_func_uint32_t_u_u((func_10(p_4) || ((((safe_mod_func_int8_t_s_s((((l_590 || 0xA1C3FCFCL) >= l_590) || g_106), (-1L))) >= g_106) != 255UL) | l_590)), l_590))));
    return l_599;


}







static unsigned short func_10(int * p_11)
{
    char l_14 = (-8L);
    return l_14;
}







static int * func_15(int * p_16, short p_17)
{
    char l_28 = 0x72L;
    char l_29 = 0L;
    int *l_48 = &g_13;
    int *l_582[5][7] = {{&g_106,(void*)0,&g_88[4],&g_88[4],&g_66,&g_88[4],&g_106},{&g_66,&g_66,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_106,&g_106,(void*)0,&g_88[4],(void*)0,(void*)0},{(void*)0,(void*)0,&g_88[4],&g_88[4],(void*)0,(void*)0,&g_106},{(void*)0,(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0}};
    int ***l_585 = &g_52;
    int i, j;
    for (p_17 = 0; (p_17 >= 14); p_17 = safe_add_func_uint16_t_u_u(p_17, 2))
    {
        int *l_41 = (void*)0;
        int **l_572 = &g_53[0];
        int *l_577[4];
        int i;
        for (i = 0; i < 4; i++)
            l_577[i] = &g_88[4];
    }
    for (g_461 = (-23); (g_461 > 57); ++g_461)
    {
    }
    (***l_585) = ((safe_add_func_uint32_t_u_u(g_13, (l_585 == l_585))) > (*l_48));
    return p_16;


}







static int * func_20(unsigned short p_21, int * p_22, char p_23, int * p_24, int * p_25)
{
    short l_515 = (-2L);
    int ***l_539 = &g_52;
    int *l_571 = (void*)0;
    for (g_13 = 0; (g_13 > 11); ++g_13)
    {
        short l_514 = 0x3A8BL;
        int *l_516 = &g_66;
        int *l_549 = (void*)0;
        int *l_568 = &g_13;
        if (l_514)
        {
            l_516 = p_22;

            ;
        }
        else
        {
            int **l_517 = &g_53[0];
            (*l_517) = p_22;
            g_518 = (*l_516);
            for (p_21 = 0; (p_21 == 1); p_21++)
            {
                unsigned l_525 = 0x692679E7L;
                int *l_528[8][8][1] = {{{&g_446},{&g_88[4]},{&g_446},{(void*)0},{&g_88[4]},{(void*)0},{&g_446},{&g_88[4]}},{{&g_446},{(void*)0},{&g_446},{&g_446},{&g_88[4]},{&g_446},{&g_446},{(void*)0}},{{&g_446},{&g_88[4]},{&g_446},{(void*)0},{&g_88[4]},{(void*)0},{&g_446},{&g_88[4]}},{{&g_446},{(void*)0},{&g_446},{&g_446},{&g_88[4]},{&g_446},{&g_446},{(void*)0}},{{&g_446},{&g_88[4]},{&g_446},{(void*)0},{&g_88[4]},{(void*)0},{&g_446},{&g_88[4]}},{{&g_446},{(void*)0},{&g_446},{&g_446},{&g_88[4]},{&g_446},{&g_446},{(void*)0}},{{&g_446},{&g_88[4]},{&g_446},{(void*)0},{&g_88[4]},{(void*)0},{&g_446},{&g_88[4]}},{{&g_446},{(void*)0},{&g_446},{&g_446},{&g_88[4]},{&g_446},{&g_446},{(void*)0}}};
                int i, j, k;
                for (g_446 = (-27); (g_446 < (-9)); ++g_446)
                {
                    int l_523 = 0x0DAA009EL;
                    (*l_516) = l_523;
                    (*l_517) = &g_13;
                    if (((&l_523 != (void*)0) == (0x87AFBEB1L != l_515)))
                    {
                        unsigned char l_524 = 0x1CL;
                        (*l_516) = l_524;
                        if (l_524)
                            continue;
                        (*l_517) = p_24;
                    }
                    else
                    {
                        int **l_526 = &g_53[4];
                        int ***l_527[6][4][5] = {{{&g_52,&g_52,(void*)0,(void*)0,&g_52},{&l_517,(void*)0,&g_52,&g_52,&l_517},{(void*)0,&g_52,(void*)0,(void*)0,&l_517},{&g_52,&l_517,&l_526,&l_517,&l_526}},{{(void*)0,(void*)0,&l_526,&g_52,&l_517},{&l_517,(void*)0,(void*)0,&l_517,&g_52},{&g_52,&l_526,(void*)0,(void*)0,(void*)0},{&l_517,&l_526,&l_517,&g_52,&g_52}},{{(void*)0,(void*)0,&g_52,(void*)0,(void*)0},{&g_52,&g_52,(void*)0,&l_517,(void*)0},{(void*)0,(void*)0,&g_52,&g_52,(void*)0},{(void*)0,&g_52,&l_526,&l_517,&l_517}},{{&l_526,&g_52,(void*)0,(void*)0,&l_526},{&g_52,&g_52,&l_526,&g_52,&l_517},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_52,&l_517,(void*)0,&g_52}},{{&l_517,(void*)0,(void*)0,&l_526,(void*)0},{&l_517,&l_526,(void*)0,&g_52,&g_52},{&l_526,&l_526,&l_517,(void*)0,(void*)0},{&l_526,(void*)0,&l_526,&l_526,(void*)0}},{{(void*)0,&l_517,(void*)0,&l_526,&g_52},{(void*)0,(void*)0,&g_52,&l_517,&g_52},{(void*)0,(void*)0,(void*)0,&g_52,&l_517},{&g_52,&l_526,&l_526,&l_526,&l_526}}};
                        int i, j, k;
                        (*l_516) = func_10(p_25);
                        (*l_516) = l_525;
                        (*l_517) = (void*)0;
                        g_52 = l_526;

                        ;
                    }
                }
                (*l_517) = l_528[7][4][0];
                (*l_516) = ((p_21 && (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((p_23 < 0UL), p_23)) <= (((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((void*)0 != l_539), (p_23 ^ (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(p_23, (((((void*)0 == &l_528[1][5][0]) < (*g_274)) > 65526UL) < (-4L)))), p_23))))), 5)) | 0x91DED5FFL) <= p_21) || p_23) != p_23)) && g_66) <= g_544), 0xDF3AL))) ^ g_446);
                for (g_461 = (-23); (g_461 > 16); g_461 = safe_add_func_int16_t_s_s(g_461, 1))
                {
                    int *l_561 = &g_446;
                    for (g_66 = 29; (g_66 > (-25)); g_66 = safe_sub_func_int32_t_s_s(g_66, 8))
                    {
                        (*l_517) = p_22;
                        return p_24;


                    }
                    for (g_446 = 3; (g_446 > 8); g_446 = safe_add_func_uint32_t_u_u(g_446, 3))
                    {
                        int **l_554 = &l_549;
                        (*l_517) = l_561;
                        (*l_516) = func_10(p_22);
                        p_22 = p_22;
                        (*l_554) = p_24;
                    }
                    if ((*l_561))
                        break;
                    (*l_517) = (void*)0;
                }
            }
        }

        ;
        if ((*g_274))
            continue;
    }



    return l_571;


}







static int * func_30(int p_31)
{
    int *l_100 = &g_88[4];
    int l_111 = (-10L);
    int *l_112 = &g_88[7];
    int ***l_124 = &g_52;
    int *l_158 = &g_13;
    short l_160 = 1L;
    int *l_168[7][6][5] = {{{&l_111,(void*)0,(void*)0,&g_88[5],&g_88[4]},{(void*)0,&g_88[8],&g_13,&g_88[4],&g_13},{&g_13,&g_66,&l_111,(void*)0,&l_111},{(void*)0,&g_88[1],&g_88[4],&g_88[4],&l_111},{&l_111,&g_88[4],&g_88[4],&l_111,(void*)0},{&g_88[4],&g_88[4],&g_88[1],(void*)0,&g_88[1]}},{{(void*)0,&l_111,&g_66,&g_13,(void*)0},{&g_88[4],&g_13,&g_88[8],(void*)0,(void*)0},{&g_88[5],(void*)0,(void*)0,&l_111,(void*)0},{&g_66,&g_66,&l_111,&g_88[4],&g_13},{&g_13,&g_13,&g_88[6],(void*)0,&l_111},{&g_88[4],&g_66,&g_106,&g_88[4],&g_88[1]}},{{(void*)0,&g_13,&l_111,&g_88[5],&g_66},{(void*)0,&g_66,&g_88[4],&g_66,(void*)0},{&l_111,&g_13,&g_88[4],(void*)0,(void*)0},{&g_88[3],&l_111,&g_13,&g_88[4],&g_13},{&g_88[4],(void*)0,(void*)0,&g_13,(void*)0},{&l_111,&g_88[4],&g_88[3],&g_88[4],&g_88[4]}},{{(void*)0,&g_13,(void*)0,&l_111,&l_111},{&g_66,&g_88[8],(void*)0,&g_88[3],&l_111},{&g_13,&l_111,&g_88[4],&g_88[4],&l_111},{(void*)0,(void*)0,(void*)0,&l_111,&l_111},{&g_66,&g_13,(void*)0,(void*)0,&g_13},{&g_88[1],&g_88[1],&g_88[3],&g_66,&g_88[1]}},{{(void*)0,&g_88[4],(void*)0,&g_13,&l_111},{(void*)0,(void*)0,&g_13,(void*)0,&g_13},{(void*)0,&g_88[6],&g_88[4],&g_66,&g_13},{&g_88[1],&g_13,&g_13,&g_88[1],&g_88[3]},{&g_66,&g_88[4],&g_88[6],(void*)0,&g_13},{(void*)0,&g_13,(void*)0,(void*)0,(void*)0}},{{&g_13,(void*)0,&g_88[4],(void*)0,&l_111},{&g_66,&g_88[3],&g_88[1],&g_88[1],&g_88[1]},{(void*)0,(void*)0,&g_13,&g_66,(void*)0},{&l_111,&g_88[1],(void*)0,&g_88[1],&g_88[3]},{&g_106,(void*)0,(void*)0,&l_111,&g_88[4]},{&g_88[4],&g_88[1],&g_106,&g_88[8],&l_111}},{{&g_13,&g_88[4],&l_111,&g_88[4],&g_13},{&g_13,&g_88[4],(void*)0,&g_88[4],(void*)0},{&g_88[4],&g_88[4],&g_13,&g_106,&l_111},{(void*)0,&g_88[1],&g_88[4],&g_88[4],(void*)0},{&g_88[4],&g_106,&g_88[4],&g_13,&g_13},{(void*)0,&g_88[4],(void*)0,&g_13,&l_111}}};
    unsigned char l_232 = 253UL;
    short l_306[4] = {0xAAC9L,0xAAC9L,0xAAC9L,0xAAC9L};
    unsigned l_322[3];
    int *l_353 = &g_13;
    unsigned short l_367 = 65535UL;
    unsigned char l_372 = 255UL;
    int *l_373 = (void*)0;
    int *l_412[1];
    unsigned short l_508 = 65531UL;
    int *l_509 = &g_13;
    int **l_510[7][5][7] = {{{(void*)0,(void*)0,&l_509,(void*)0,&l_509,(void*)0,(void*)0},{&g_406[6],&g_406[4],&l_353,&l_112,&l_353,&g_406[4],&g_406[6]},{(void*)0,(void*)0,&l_509,(void*)0,&l_509,(void*)0,(void*)0},{&g_406[6],&g_406[4],&l_353,&l_112,&l_353,&g_406[4],&g_406[6]},{(void*)0,(void*)0,&l_509,(void*)0,&l_509,(void*)0,(void*)0}},{{&g_406[6],&g_406[4],&l_353,&l_112,&l_353,&g_406[4],&g_406[6]},{(void*)0,(void*)0,&l_509,(void*)0,&l_509,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0},{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0}},{{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0},{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0},{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274}},{{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0},{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0},{&g_274,(void*)0,&l_158,(void*)0,&l_158,(void*)0,&g_274},{(void*)0,&l_112,&g_406[4],&g_406[2],&g_406[4],&l_112,(void*)0}},{{&g_274,(void*)0,&l_158,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]}},{{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112}},{{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&g_406[0],&l_168[2][3][4],&l_112,&g_406[2],&l_112,&l_168[2][3][4],&g_406[0]},{&l_112,&g_406[6],(void*)0,(void*)0,(void*)0,&g_406[6],&l_112},{&l_412[0],&g_406[2],(void*)0,&l_412[0],(void*)0,&g_406[2],&l_412[0]}}};
    int *l_511 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_322[i] = 4UL;
    for (i = 0; i < 1; i++)
        l_412[i] = &g_88[2];
    for (g_66 = (-26); (g_66 <= 6); g_66 = safe_add_func_uint16_t_u_u(g_66, 7))
    {
        int *l_107 = &g_106;
        int ***l_231 = &g_52;
        int *l_250[5][2] = {{&g_13,(void*)0},{&g_88[7],&g_66},{(void*)0,&g_66},{&g_88[7],(void*)0},{&g_13,&g_13}};
        int *l_315[9];
        int l_368 = 1L;
        unsigned short l_396[5][6] = {{0x2BA5L,0x90E4L,0x6607L,0x90E4L,0x2BA5L,0x2BA5L},{6UL,0x90E4L,0x90E4L,6UL,0x57E2L,6UL},{6UL,0x57E2L,6UL,0x90E4L,0x90E4L,6UL},{0x2BA5L,0x2BA5L,0x90E4L,0x6607L,0x90E4L,0x2BA5L},{0x90E4L,0x57E2L,0x6607L,0x6607L,0x57E2L,0x90E4L}};
        int *l_424 = &l_111;
        int l_445[1][8][8] = {{{0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL},{9L,0xE2724D8AL,9L,9L,0xE2724D8AL,9L,9L,0xE2724D8AL},{0xE2724D8AL,9L,9L,0xE2724D8AL,9L,9L,0xE2724D8AL,9L},{0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL},{9L,0xE2724D8AL,9L,9L,0xE2724D8AL,9L,9L,0xE2724D8AL},{0xE2724D8AL,9L,9L,0xE2724D8AL,9L,9L,0xE2724D8AL,9L},{0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL,0xF953E081L,0xE2724D8AL,0xE2724D8AL},{9L,0xE2724D8AL,9L,9L,0xE2724D8AL,9L,9L,0xE2724D8AL}}};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_315[i] = &g_66;
        for (p_31 = 4; (p_31 > (-2)); p_31--)
        {
            int **l_99[5][1];
            unsigned short l_103 = 0xE14AL;
            int **l_132 = &g_53[2];
            unsigned l_144 = 0x405526E2L;
            int *l_159 = &g_88[1];
            int *l_183 = &g_66;
            int *l_186 = &g_88[2];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_99[i][j] = &g_53[0];
            }
            l_100 = (void*)0;

            ;
            l_103 = (func_10(l_100) == (func_10(&g_88[4]) != (65535UL || 1L)));
            for (l_103 = 0; (l_103 == 42); l_103++)
            {
                int *l_110[6][2][5] = {{{&g_88[5],&g_13,&g_106,&g_106,&g_106},{(void*)0,&g_88[8],(void*)0,&g_88[4],(void*)0}},{{&g_88[5],&g_106,&g_13,&g_13,&g_106},{&g_66,&g_88[4],&g_13,&g_88[4],&g_66}},{{&g_106,&g_13,&g_13,&g_106,&g_88[5]},{(void*)0,&g_88[4],(void*)0,&g_88[8],(void*)0}},{{&g_106,&g_106,&g_106,&g_13,&g_88[5]},{&g_66,&g_88[8],&g_13,&g_88[8],&g_66}},{{&g_88[5],&g_13,&g_106,&g_106,&g_106},{(void*)0,&g_88[8],(void*)0,&g_88[4],(void*)0}},{{&g_88[5],&g_106,&g_13,&g_13,&g_106},{&g_66,&g_88[4],&g_13,&g_88[4],&g_66}}};
                int *l_165 = (void*)0;
                int i, j, k;
                for (g_106 = 3; (g_106 <= 8); g_106 += 1)
                {
                    unsigned char l_125 = 0x02L;
                    unsigned short l_136 = 0x9CA3L;
                    int *l_137 = (void*)0;
                    int i;
                    if ((func_10(l_107) <= ((void*)0 != &g_88[g_106])))
                    {
                        l_111 = (safe_add_func_uint16_t_u_u(func_10(l_110[3][1][0]), 0x16DDL));
                        g_53[1] = l_112;
                    }
                    else
                    {
                        int l_115 = 4L;
                        g_88[g_106] = (g_88[5] || ((safe_add_func_uint32_t_u_u(l_115, p_31)) >= (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(g_66, (safe_lshift_func_uint16_t_u_s(p_31, ((g_106 != (+((((+g_88[g_106]) != l_115) > ((void*)0 == l_124)) == (*l_107)))) || l_125))))) || 0xFAL), g_106))));
                        (*l_112) = (*l_107);
                        (*l_112) = (safe_rshift_func_uint16_t_u_u((*l_107), 11));
                        (*l_132) = l_137;
                    }
                }
                if (((((248UL < (p_31 >= ((safe_add_func_uint16_t_u_u(p_31, ((safe_sub_func_int8_t_s_s(p_31, 9L)) >= ((p_31 >= ((safe_add_func_uint16_t_u_u((g_88[4] < (((-3L) >= (~l_144)) != p_31)), 0xCBBCL)) ^ 0xFAD07B9CL)) > (*l_107))))) >= g_88[4]))) < 0x462671F2L) || 0xB0FF881DL) < p_31))
                {
                    int *l_150 = (void*)0;
                    (*l_112) = (((safe_unary_minus_func_int8_t_s(((safe_add_func_uint16_t_u_u((l_99[3][0] != (void*)0), g_13)) > func_10(l_150)))) <= ((p_31 && g_88[4]) > (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_112) ^ 0L), (*l_107))), p_31)))) > p_31);
                    for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
                    {
                        int *l_155[10][7] = {{&l_111,&g_106,&l_111,(void*)0,&g_106,&g_88[1],&g_106},{&g_106,(void*)0,&g_106,&g_66,&g_88[4],&g_88[5],&g_106},{&g_88[4],&g_106,&g_106,&g_13,&g_13,&g_106,&g_66},{&l_111,&g_88[4],&g_88[1],&g_66,&g_106,&l_111,&g_13},{&g_13,&g_88[4],(void*)0,&g_88[5],&g_88[4],&g_106,&l_111},{&g_88[1],&g_88[5],&g_13,&g_66,(void*)0,(void*)0,&g_66},{&g_106,&l_111,&g_106,&l_111,(void*)0,&g_106,&l_111},{&g_88[4],&g_106,&l_111,&l_111,&g_88[4],&g_88[4],&g_106},{&l_111,&l_111,&g_106,&g_88[4],&g_106,&g_106,&g_106},{&l_111,&g_106,&l_111,&g_106,&l_111,(void*)0,&g_106}};
                        int i, j;
                        l_110[5][0][3] = l_155[3][3];
                    }


                    (*l_132) = &g_88[4];
                }
                else
                {
                    if ((*l_112))
                        break;
                }


                for (l_160 = 0; (l_160 >= 13); l_160 = safe_add_func_int16_t_s_s(l_160, 1))
                {
                    for (l_111 = (-28); (l_111 <= 26); ++l_111)
                    {
                        (*l_132) = &g_13;
                    }
                }
                if (p_31)
                    continue;
            }
            for (g_106 = 9; (g_106 != (-7)); --g_106)
            {
                int *l_181[1];
                int ***l_192 = &l_99[3][0];
                int i;
                for (i = 0; i < 1; i++)
                    l_181[i] = &g_88[4];
                (*l_132) = l_168[4][3][1];
                for (l_111 = 0; (l_111 < 23); ++l_111)
                {
                    for (l_144 = 0; (l_144 == 1); l_144 = safe_add_func_int16_t_s_s(l_144, 4))
                    {
                        int *l_173 = &g_13;
                        (*l_132) = l_173;
                        if ((*l_107))
                            continue;
                    }
                }
                for (l_103 = 0; (l_103 <= 0); l_103 += 1)
                {
                    int *l_176 = &g_106;
                    char l_182[9] = {1L,2L,1L,1L,2L,1L,1L,2L,1L};
                    int i;
                    if ((safe_mod_func_uint8_t_u_u(func_10(l_176), (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0xAEL, g_88[(l_103 + 4)])), func_10((*l_132)))))))
                    {
                        char l_184 = 0L;
                        int i, j;
                        g_88[(l_103 + 3)] = 0x58545B0BL;
                        if (p_31)
                            break;
                        g_88[l_103] = p_31;
                        l_107 = &g_88[(l_103 + 4)];

                        ;
                    }
                    else
                    {
                        int *l_187 = &g_88[(l_103 + 4)];
                        l_176 = l_107;

                        ;
                        (*l_159) = p_31;
                        (*l_186) = (((*l_176) >= func_10(l_181[0])) >= ((*l_176) <= func_10(l_187)));
                        (*l_187) = ((safe_mod_func_uint16_t_u_u(p_31, (-6L))) && (safe_rshift_func_int16_t_s_s((l_192 == (void*)0), 5)));
                    }

                    ;
                }
                if (p_31)
                {
                    int *l_193 = &g_106;
                    (*l_132) = l_193;
                }
                else
                {
                    for (l_103 = 22; (l_103 >= 57); ++l_103)
                    {
                        int *l_196[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_196[i] = &g_106;
                        (*l_186) = p_31;
                        (*l_159) = func_10(l_196[0]);
                    }
                    (*l_186) = ((void*)0 != &l_99[3][0]);
                }
            }
        }

        ;
        for (l_160 = (-20); (l_160 < 17); l_160 = safe_add_func_uint8_t_u_u(l_160, 8))
        {
            unsigned char l_201 = 0xF0L;
            int *l_202 = &g_66;
            (*l_107) = (safe_mod_func_uint8_t_u_u((l_201 || func_10(&g_66)), g_88[4]));
        }
    }


    ;
    g_274 = l_509;

    ;
    g_53[0] = &g_106;
    return l_511;



}







static int * func_32(char p_33, unsigned short p_34, int * p_35, unsigned p_36, int * p_37)
{
    int l_67 = 0x7BD129ACL;
    unsigned l_81 = 0x587DEF5AL;
    int *l_89 = &g_13;
    if (l_67)
    {
        int *l_68 = &l_67;
        unsigned short l_69 = 0x8379L;
        int ***l_70 = &g_52;
        g_53[0] = p_37;


    }
    else
    {
        char l_73 = 0xAEL;
        unsigned l_74 = 0xE583C6DDL;
        int **l_90 = &g_53[3];
        for (g_66 = 0; (g_66 == 11); g_66 = safe_add_func_uint16_t_u_u(g_66, 5))
        {
            if (l_67)
                break;
            l_74 = l_73;
        }
        for (p_34 = 0; (p_34 != 14); p_34 = safe_add_func_int32_t_s_s(p_34, 9))
        {
            int *l_78[8] = {&l_67,&g_66,&l_67,&l_67,&g_66,&l_67,&l_67,&g_66};
            unsigned l_82 = 4294967295UL;
            int **l_83 = (void*)0;
            int **l_84 = (void*)0;
            int **l_85 = &g_53[3];
            int i;
            for (p_36 = 0; (p_36 <= 4); p_36 += 1)
            {
                int *l_77 = &g_66;
                int i;
                (*l_77) = (p_36 & (-1L));
                g_53[p_36] = (void*)0;
                p_37 = g_53[p_36];
            }
            l_67 = (&p_35 != (void*)0);
            (*l_85) = p_37;
            l_67 = (safe_sub_func_int16_t_s_s(g_88[4], (l_81 > ((((void*)0 == &l_67) >= 65535UL) <= 7UL))));
        }


        ;
        (*l_90) = l_89;
        for (p_34 = (-29); (p_34 <= 14); ++p_34)
        {
            int *l_93 = &g_66;
            int *l_94[10];
            int i;
            for (i = 0; i < 10; i++)
                l_94[i] = (void*)0;
            (*l_93) = func_10(l_93);
            (*l_90) = l_94[7];
        }
    }


    ;
    return &g_88[4];


}







static int * func_38(int * p_39, int * p_40)
{
    int *l_63 = &g_13;
    int ***l_64 = (void*)0;
    int ***l_65 = &g_52;
    p_40 = l_63;
    (*l_65) = &l_63;

    ;
    for (g_66 = 3; (g_66 >= 0); g_66 -= 1)
    {
        int i;
        return g_53[(g_66 + 1)];



    }
    return p_40;



}







static int * func_42(int * p_43, int p_44, int * p_45, char p_46, int p_47)
{
    int ***l_54 = &g_52;
    int *l_59 = &g_13;
    int l_61[5][8] = {{(-1L),0xDD679405L,2L,2L,0xDD679405L,(-1L),0xD7CD1425L,0xC95C8F38L},{0x0CB25BB5L,2L,(-1L),0L,(-6L),0L,(-6L),0L},{(-6L),0L,(-6L),0L,(-1L),2L,0x0CB25BB5L,0xC95C8F38L},{0xD7CD1425L,(-1L),0xDD679405L,2L,0L,0x5E7E8EE7L,0xC95C8F38L,2L},{2L,0xDD679405L,(-1L),0xD7CD1425L,0xC95C8F38L,0x7A762AFEL,0x5E7E8EE7L,0x7A762AFEL}};
    int i, j;
    (*l_54) = func_49(g_13);
    (**l_54) = (**l_54);
    for (p_47 = 0; (p_47 <= 29); ++p_47)
    {
        int *l_62 = &l_61[1][1];
        for (p_46 = 3; (p_46 >= 0); p_46 -= 1)
        {
            int l_60 = 0xA7ABE333L;
            int i;
            if ((safe_lshift_func_int16_t_s_u((~func_10(g_53[p_46])), 5)))
            {
                int i;
                l_61[1][1] = (((!((&g_53[p_46] == &g_53[p_46]) >= (((((*p_43) | (**g_52)) & ((void*)0 == &p_43)) <= (-3L)) && func_10(l_59)))) & l_60) >= g_13);
            }
            else
            {
                int i;
                for (p_44 = 4; (p_44 >= 1); p_44 -= 1)
                {
                    for (l_60 = 4; (l_60 >= 1); l_60 -= 1)
                    {
                        int i;
                        g_53[l_60] = g_53[l_60];
                    }
                    return (**l_54);


                }
                g_53[(p_46 + 1)] = p_43;
                (**l_54) = (*g_52);
            }
            (*l_62) = func_10(l_62);
            (*g_52) = p_43;
        }
    }
    return (**l_54);


}







static int ** func_49(unsigned char p_50)
{
    int *l_51 = (void*)0;
    l_51 = l_51;
    return g_52;


}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
