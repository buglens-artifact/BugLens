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
   unsigned f0;
   signed f1 : 25;
   unsigned f2;
   unsigned short f3;
   unsigned short f4;
   unsigned f5 : 9;
   int f6;
   int f7;
   unsigned short f8;
};

union U1 {
   unsigned char f0;
   char f1;
};

union U2 {
   unsigned f0;
   char f1;
   int f2;
};

union U3 {
   unsigned short f0;
};

union U4 {
   unsigned f0;
   int f1;
   unsigned f2;
   char * f3;
   char * f4;
};


static int g_2 = 0L;
static char g_6 = 0x82L;
static int g_9 = 0L;
static union U4 g_46 = {4294967295UL};
static int g_48 = 0x509B9552L;
static union U2 g_52 = {0xF1E2CD84L};
static union U2 *g_95 = &g_52;
static union U2 **g_94 = &g_95;
static struct S0 g_111 = {0xE80B3E51L,3097,4294967288UL,0xC5A1L,0x187EL,16,0L,0xD54CDCACL,0x9DAAL};
static struct S0 *g_110 = &g_111;
static int *g_132 = (void*)0;
static int **g_131 = &g_132;
static union U1 g_161 = {1UL};
static union U1 *g_201 = &g_161;
static union U3 g_245 = {0x3039L};
static struct S0 g_262 = {0xE27CC4FDL,-2557,4294967295UL,0xE288L,0x719CL,13,1L,0x8484B6C8L,1UL};
static unsigned short g_371 = 65527UL;
static union U3 *g_403 = &g_245;
static union U3 **g_402 = &g_403;
static struct S0 g_459 = {0x1ED0AED9L,-5780,0xC3EFF14AL,0xFDD3L,1UL,18,-1L,7L,1UL};
static char g_480 = 0x36L;
static union U1 **g_506 = &g_201;
static char g_821 = 0x6DL;



static int func_1(void);
static char func_12(char * p_13, int p_14, unsigned p_15);
static unsigned func_16(union U4 p_17, int * p_18);
static union U4 func_19(char * p_20, union U2 p_21);
static union U2 func_22(union U4 p_23, int * p_24);
static int * func_26(union U4 p_27);
static union U4 func_28(int * p_29, union U1 p_30, unsigned p_31, short p_32, char * p_33);
static int * func_34(short p_35);
static unsigned char func_38(union U2 p_39, char * p_40);
static union U2 func_41(unsigned short p_42, int * p_43, unsigned p_44, union U4 p_45);
static int func_1(void)
{
    char *l_7 = (void*)0;
    union U4 l_25 = {1UL};
    char *l_184 = &g_6;
    int *l_634 = &g_2;
    union U2 l_830 = {0xA16FEA69L};
    int l_833 = 0xE2F265E6L;
    int *l_834 = &g_48;
    for (g_2 = 0; (g_2 == 13); g_2 = safe_add_func_uint16_t_u_u(g_2, 1))
    {
        char *l_5 = &g_6;
        int *l_8 = &g_9;
        union U1 l_266 = {0x4DL};
        (*l_8) |= (l_5 != l_7);
    }
    (*l_834) ^= (safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((*l_634), func_38(l_830, &g_480))), ((((*l_634) > (&g_480 != &g_6)) < (0xADF25B06L | (safe_mul_func_int8_t_s_s(l_833, 0xFBL)))) | (*l_634)))) >= 8L) >= 253UL), (*l_634))) == (*l_634)) <= g_262.f0), 0x13A8L));

    (*g_131) = &l_833;

    ;
    (*g_110) = (*g_110);
    return g_111.f6;


}







static char func_12(char * p_13, int p_14, unsigned p_15)
{
    short l_804 = (-5L);
    char *l_809 = &g_161.f1;
    int *l_812 = &g_111.f6;
    union U1 ***l_813 = &g_506;
    unsigned l_818 = 0x253CDBFFL;
    for (g_459.f3 = 3; (g_459.f3 >= 33); ++g_459.f3)
    {
        union U4 l_797 = {0x1AC18D58L};
        if (((func_16(l_797, func_34(p_14)) < (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_14 > g_459.f8), (&p_14 != (void*)0))), g_48))) | g_459.f3))
        {
            union U2 l_807 = {0UL};
            int *l_808 = &g_48;
            (*l_808) &= (safe_sub_func_uint32_t_u_u(l_804, (safe_mul_func_uint16_t_u_u(0UL, func_38(l_807, &g_6)))));
            if (l_804)
            {
                if (p_14)
                    break;
            }
            else
            {
                (*g_131) = (*g_131);
            }
            (*l_808) &= (0x0E0DL || (func_38(l_807, l_809) == g_480));
            return (*p_13);


        }
        else
        {
            unsigned short l_810 = 0UL;
            int *l_811 = &g_459.f6;
            (*l_811) |= l_810;
            l_812 = &p_14;

            ;
            if (p_15)
                continue;
            (*g_131) = &p_14;

            ;
        }

        ;
        ;
    }

    ;
    ;
    (*l_813) = &g_201;
    l_818 ^= (((*l_812) && g_459.f5) & (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x0FBDL, (*l_812))), (*l_812))));
    (*l_812) ^= (safe_lshift_func_int8_t_s_u(0xB4L, 5));
    return g_111.f1;


}







static unsigned func_16(union U4 p_17, int * p_18)
{
    union U2 l_639 = {0UL};
    int l_640 = 0L;
    struct S0 l_664 = {4294967295UL,5308,0x82289A06L,4UL,0xB325L,10,8L,-2L,65535UL};
    unsigned char l_667 = 253UL;
    union U4 *l_672 = &g_46;
    union U1 *l_673 = &g_161;
    unsigned l_754 = 0xB41C7A80L;
    (*g_131) = (*g_131);
    l_640 ^= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(func_38(l_639, &g_480), 10)), l_639.f0));
    for (g_111.f0 = 0; (g_111.f0 > 46); ++g_111.f0)
    {
        unsigned l_653 = 4294967287UL;
        int *l_656 = &g_262.f6;
        struct S0 *l_659 = &g_111;
        union U4 *l_729 = (void*)0;
        short l_770 = 0xFB33L;
        union U2 *l_775 = &g_52;
        union U1 **l_782 = &g_201;
        struct S0 **l_784 = &g_110;
        (*l_656) &= (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((0UL <= ((g_111.f5 > (g_52.f1 == (p_17.f1 ^ (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_17.f0, ((void*)0 == (*g_131)))), l_653))))) >= (safe_add_func_uint32_t_u_u(((((0x48L <= l_653) ^ l_653) > l_653) >= p_17.f2), l_639.f2)))) == 0xBBL), g_161.f0)), g_161.f0));
    }
    return l_664.f1;
}







static union U4 func_19(char * p_20, union U2 p_21)
{
    int l_597 = (-1L);
    int *l_631 = (void*)0;
    int l_632 = 0L;
    union U4 l_633 = {2UL};
    if ((g_161.f0 <= 1L))
    {
        int *l_598 = &g_262.f6;
        union U3 *l_607 = &g_245;
        char *l_616 = (void*)0;
        (*l_598) = ((g_371 > p_21.f1) <= l_597);
        (*l_598) = (safe_add_func_uint8_t_u_u(l_597, (safe_mul_func_int16_t_s_s((*l_598), (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x34L, ((void*)0 == l_607))), (safe_rshift_func_int8_t_s_u((*l_598), 5))))))));
        (*l_598) ^= 0xBACB7DD6L;
        (*l_598) &= ((*p_20) < ((+g_161.f1) < ((~1L) >= ((g_245.f0 & 0UL) > (~((safe_rshift_func_int16_t_s_s(0x3959L, (+((*g_131) != l_598)))) != 255UL))))));
    }
    else
    {
        int *l_619 = &g_48;
        struct S0 *l_620 = &g_262;
        union U4 *l_622 = &g_46;
        union U4 **l_621 = &l_622;
        (*g_131) = l_619;

        ;
        l_620 = l_620;
        (*l_621) = &g_46;
    }
    l_632 |= (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*p_20), g_459.f7)), (((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_21.f1, 0xE74D237FL)), l_597)) >= 0xF5L) ^ l_597)));
    return l_633;



    }







static union U2 func_22(union U4 p_23, int * p_24)
{
    unsigned l_273 = 2UL;
    int *l_280 = &g_111.f6;
    union U4 l_281 = {4294967289UL};
    union U2 l_284 = {0xFEBA5A16L};
    union U2 **l_293 = (void*)0;
    char *l_307 = &g_52.f1;
    int ***l_349 = &g_131;
    int l_364 = (-4L);
    struct S0 *l_373 = &g_111;
    unsigned l_442 = 0x69BB4CB6L;
    union U1 *l_458 = &g_161;
    union U4 l_517 = {1UL};
    char *l_583 = &g_6;
    union U2 l_595 = {1UL};
    unsigned l_596 = 0xCBF5B8F5L;
    (*l_280) = (l_273 ^ (safe_div_func_uint32_t_u_u((0x653DA89DL && (safe_add_func_uint16_t_u_u((0UL >= (-10L)), (!p_23.f1)))), g_46.f1)));
    (*l_280) = (safe_mod_func_int16_t_s_s((func_38(l_284, &g_6) | g_6), 0x812EL));
    for (l_284.f1 = (-7); (l_284.f1 >= 1); l_284.f1 = safe_add_func_int32_t_s_s(l_284.f1, 2))
    {
        char *l_296 = &g_6;
        struct S0 *l_302 = &g_111;
        int l_312 = 0L;
        union U3 *l_318 = &g_245;
        int ***l_336 = &g_131;
        unsigned l_390 = 0xA482D9A3L;
        short l_455 = 0L;
        union U2 l_518 = {0x0D242C8DL};
        union U2 **l_555 = &g_95;
        char l_584 = 0L;
        if (((safe_mul_func_uint16_t_u_u(p_23.f2, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(1UL, g_262.f4)), (l_293 == l_293))))) && (safe_mul_func_uint8_t_u_u(6UL, p_23.f2))))
        {
            char l_299 = 0xFDL;
            int l_322 = 1L;
            (*l_280) = (p_23.f0 <= (+g_46.f2));
            for (g_262.f8 = 0; (g_262.f8 == 59); ++g_262.f8)
            {
                unsigned l_321 = 7UL;
                (*l_280) = l_299;
                if (((p_23.f2 && ((void*)0 == l_302)) ^ ((((+(g_9 < (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_262.f0, (((l_307 != (void*)0) == ((safe_lshift_func_int16_t_s_u((p_23.f2 < (l_312 > 1UL)), 9)) == l_312)) > p_23.f2))), l_299)))) && 3UL) >= (*l_280)) ^ 0L)))
                {
                    (*g_131) = func_34(g_2);

                    ;
                }
                else
                {
                    unsigned l_317 = 4294967295UL;
                    if ((safe_lshift_func_int8_t_s_s(((((((safe_sub_func_int32_t_s_s(l_317, (l_299 & g_262.f5))) | ((l_318 != (void*)0) > 0x4DDFL)) != ((p_23.f1 < ((~(0UL < (safe_mul_func_uint8_t_u_u(0UL, g_111.f4)))) ^ (-6L))) <= 1L)) >= l_321) & g_111.f3) == g_111.f6), 5)))
                    {
                        char l_323 = 9L;
                        l_322 |= (*l_280);
                        (*g_131) = func_34((l_323 != p_23.f2));

                        ;
                        if ((**g_131))
                            continue;
                        (*g_131) = func_34(g_52.f1);
                    }
                    else
                    {
                        return (*g_95);

                                            }

                    ;
                    if ((*g_132))
                        continue;
                }

                ;
                for (g_111.f8 = 0; (g_111.f8 == 58); g_111.f8 = safe_add_func_uint32_t_u_u(g_111.f8, 9))
                {
                    short l_337 = 0xCFDDL;
                    unsigned char l_338 = 0x78L;
                    if ((l_322 == ((g_262.f0 ^ (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u(((!(l_321 < (+((safe_mul_func_int8_t_s_s(((void*)0 != &g_262), l_322)) > ((l_336 != (void*)0) < (**g_131)))))) <= 0xC3L), p_23.f2)) < p_23.f1) ^ g_111.f3), l_337)), 0xFBDCL)), l_322))) | l_338)))
                    {
                        (*g_132) = 1L;
                    }
                    else
                    {
                        return (*g_95);

                                            }
                    l_312 ^= ((safe_add_func_int32_t_s_s((!(safe_mod_func_int32_t_s_s((*g_132), 0xA813B8E7L))), 4294967286UL)) && (p_23.f0 == (safe_lshift_func_int8_t_s_s((*l_280), l_338))));
                }
                if ((safe_add_func_int8_t_s_s(1L, (-10L))))
                {
                    union U3 *l_347 = &g_245;
                    union U3 **l_348 = &l_347;
                    (*l_348) = l_347;
                }
                else
                {
                    short l_372 = 0L;
                    (*g_132) |= ((~0x2A1AL) && g_2);
                    if ((**g_131))
                        continue;
                    (***l_349) = (((void*)0 != l_349) == ((safe_rshift_func_int16_t_s_s(p_23.f1, p_23.f2)) ^ p_23.f1));
                    (*l_280) |= ((l_299 == (((!(g_6 == (((((&g_201 == &g_201) < (safe_rshift_func_int16_t_s_s((-4L), (safe_div_func_int8_t_s_s((((***l_336) && (safe_lshift_func_uint16_t_u_s(((!l_364) >= (safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((g_262.f6 >= l_321), g_371)), 3L)), l_299))), p_23.f1))) < l_372), (***l_349)))))) > l_321) & 0UL) >= 0L))) ^ g_371) ^ (***l_336))) <= p_23.f2);
                }
            }
            if (l_299)
            {
                struct S0 **l_374 = &l_302;
                (*l_374) = l_373;

                ;
                l_322 = (safe_mul_func_int16_t_s_s(p_23.f2, 0x0BD6L));
                for (l_312 = 0; (l_312 < 4); l_312 = safe_add_func_uint8_t_u_u(l_312, 1))
                {
                    (*l_302) = (*g_110);
                }
            }
            else
            {
                struct S0 **l_379 = &l_302;
                if (g_9)
                    break;
                (*l_280) = p_23.f0;
                (*l_379) = l_302;
            }

            ;
            for (g_262.f0 = 0; (g_262.f0 >= 4); g_262.f0 = safe_add_func_uint8_t_u_u(g_262.f0, 6))
            {
                unsigned l_384 = 0x90647940L;
                g_9 ^= (safe_sub_func_uint32_t_u_u(l_384, (l_322 && 0x39E34AF9L)));
                for (g_52.f0 = 0; (g_52.f0 != 53); g_52.f0 = safe_add_func_int8_t_s_s(g_52.f0, 7))
                {
                    (*g_131) = func_34(g_262.f6);

                    ;
                }

                                l_322 &= ((safe_lshift_func_int8_t_s_u(((*l_280) > p_23.f2), 4)) < l_299);
            }
        }
        else
        {
            int *l_389 = &g_9;
            (**l_336) = l_389;

            ;
        }

        ;
        if ((l_390 | (((l_293 != l_293) && (*l_280)) < ((*l_280) | ((0x3AL | ((+((safe_add_func_uint16_t_u_u((*l_280), p_23.f1)) >= g_262.f8)) ^ (-1L))) < 0x0A52L)))))
        {
            short l_395 = 0xB0A4L;
            union U2 *l_406 = &g_52;
            union U3 **l_410 = &g_403;
            unsigned char l_441 = 0x4AL;
            char *l_510 = (void*)0;
            if (p_23.f2)
                break;
            for (g_52.f2 = 19; (g_52.f2 <= (-17)); g_52.f2 = safe_sub_func_uint32_t_u_u(g_52.f2, 1))
            {
                int l_396 = 0xEAAF24BCL;
                union U4 l_397 = {0xCA932172L};
                unsigned l_401 = 0xCA66366EL;
                (**l_336) = func_26(l_397);

                ;
                if (l_395)
                    break;
                for (g_161.f1 = (-27); (g_161.f1 <= (-8)); ++g_161.f1)
                {
                    unsigned short l_400 = 0UL;
                    if (l_400)
                        break;
                }

                if ((l_395 > ((2L || l_401) < (+g_262.f7))))
                {
                    (*l_280) = ((g_111.f3 == (4294967295UL <= p_23.f1)) >= ((void*)0 != g_402));
                }
                else
                {
                    return (*g_95);

                                    }
            }

                        for (g_111.f8 = 0; (g_111.f8 <= 23); g_111.f8++)
            {
                union U3 **l_415 = (void*)0;
                int l_422 = 0xEB5A4A2FL;
                int l_454 = (-9L);
                union U2 l_456 = {4294967292UL};
                union U1 *l_457 = &g_161;
                struct S0 l_473 = {2UL,4759,1UL,0UL,1UL,12,0L,-1L,65526UL};
                union U1 **l_483 = (void*)0;
                if (((void*)0 == l_406))
                {
                    char l_409 = 0x78L;
                    for (g_111.f7 = 0; (g_111.f7 == 2); g_111.f7++)
                    {
                        union U3 **l_416 = &g_403;
                        unsigned l_421 = 0x48706327L;
                        (*g_110) = (*l_302);
                        if (l_409)
                            break;
                        l_422 = (((l_409 && (((((l_410 != (void*)0) && g_111.f2) < (safe_lshift_func_uint16_t_u_u(0UL, 0))) > (safe_mod_func_int8_t_s_s((+(l_415 != l_416)), g_46.f0))) >= (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_421, (*l_280))), 1)))) ^ p_23.f0) || g_111.f7);
                        (*l_280) |= (p_23.f1 >= p_23.f1);
                    }
                    for (g_262.f0 = (-28); (g_262.f0 < 21); ++g_262.f0)
                    {
                        if (p_23.f2)
                            break;
                    }
                    if (((safe_add_func_uint8_t_u_u(g_111.f3, (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((p_23.f1 != (((safe_div_func_int32_t_s_s(l_395, p_23.f2)) <= (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((2L > ((!(safe_add_func_uint32_t_u_u(g_262.f8, p_23.f1))) | p_23.f1)), (safe_mul_func_int8_t_s_s(l_422, l_441)))), g_262.f6))) >= g_111.f5)) < 0x36EE21C4L), p_23.f0)), 250UL)))) != l_442))
                    {
                        union U1 *l_443 = (void*)0;
                        int l_444 = 0x5AC691DCL;
                        l_312 ^= (&g_161 != l_443);
                        (*l_280) = l_444;
                        (*l_280) &= l_422;
                    }
                    else
                    {
                        struct S0 **l_445 = &l_373;
                        (*l_445) = &g_262;

                        ;
                        (*l_373) = (*g_110);
                        l_454 |= (safe_mul_func_uint8_t_u_u(l_422, ((((safe_sub_func_int8_t_s_s(((((*l_280) <= (((((&l_302 != &l_373) > 0xBAD7L) >= (((void*)0 == (**l_336)) <= ((safe_sub_func_int8_t_s_s(l_409, g_262.f6)) >= p_23.f0))) ^ p_23.f1) ^ 0x8DE58FF8L)) | 4294967294UL) && 0x9CL), 254UL)) > p_23.f1) && g_111.f3) > l_441)));
                    }
                    if (l_455)
                    {
                        (*g_110) = (*g_110);
                        (*l_280) |= l_422;
                        return l_456;

                                            }
                    else
                    {
                        l_458 = l_457;
                        if (p_23.f0)
                            break;
                        (*g_110) = g_459;
                    }
                }
                else
                {
                    int ***l_464 = &g_131;
                    if ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((&g_131 == l_464), (safe_lshift_func_uint8_t_u_u(0UL, (safe_mul_func_uint8_t_u_u(g_111.f1, (&g_262 != &g_262))))))), (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_262.f1, 8)), p_23.f0)) > (*l_280)) >= 1UL))))
                    {
                        return (**g_94);

                                            }
                    else
                    {
                        (*g_110) = l_473;
                        l_312 = (p_23.f2 == (((+((void*)0 == p_24)) <= l_441) != p_23.f2));
                        (*l_280) = ((safe_sub_func_uint8_t_u_u(g_262.f7, (p_23.f1 > g_480))) > (safe_mod_func_uint16_t_u_u(p_23.f1, 1L)));
                    }
                }
                l_483 = &l_458;

                ;
                for (g_111.f2 = 8; (g_111.f2 < 6); g_111.f2 = safe_sub_func_int16_t_s_s(g_111.f2, 1))
                {
                    int **l_498 = &g_132;
                    if (((((*g_94) == (void*)0) && g_52.f1) < (safe_mul_func_uint16_t_u_u(p_23.f1, p_23.f0))))
                    {
                        int l_499 = 0x49778D70L;
                        char *l_509 = &l_456.f1;
                        (*l_280) |= (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(0x6B7CABE5L, l_395)), (((~((safe_mul_func_uint8_t_u_u((0xC2278E11L <= (g_111.f0 > (0xC1L && (safe_rshift_func_uint16_t_u_u((l_498 != (*l_336)), g_161.f0))))), l_499)) ^ g_262.f4)) || 4UL) | g_2))), p_23.f0));
                        (*l_280) ^= ((safe_sub_func_int32_t_s_s(((0L & (l_390 != 0UL)) < (g_459.f3 && (safe_mul_func_uint8_t_u_u(7UL, ((g_459.f1 != (safe_lshift_func_int8_t_s_u((1UL ^ l_499), 1))) & (p_23.f0 | l_454)))))), l_499)) == l_455);
                        g_506 = &g_201;
                        (*l_280) = (safe_lshift_func_int8_t_s_u(((l_509 != l_510) > p_23.f1), 1));
                    }
                    else
                    {
                        (**l_349) = p_24;

                        ;
                        if (p_23.f1)
                            continue;
                        (*l_280) = (g_459.f6 < g_262.f7);
                        return (*g_95);

                                            }
                    return (**g_94);

                                    }
            }
            (*g_94) = l_406;
        }
        else
        {
            (*l_280) = (&g_480 != l_307);
        }
        if (func_38(l_518, l_296))
        {
            (*l_280) = (0L >= l_390);
        }
        else
        {
            short l_521 = 0xA442L;
            union U2 *l_537 = &l_518;
            short l_560 = 0x9E16L;
            char l_593 = 0x1CL;
            int *l_594 = &g_459.f6;
            for (g_48 = 1; (g_48 >= (-7)); g_48 = safe_sub_func_uint16_t_u_u(g_48, 6))
            {
                short l_523 = 0L;
                (*g_506) = (*g_506);
                if (l_521)
                    break;
                (*l_280) &= (safe_unary_minus_func_uint32_t_u(p_23.f1));
            }
            for (g_371 = 0; (g_371 <= 23); g_371 = safe_add_func_int16_t_s_s(g_371, 4))
            {
                unsigned l_575 = 0x4E4ED972L;
                unsigned short l_576 = 0xEAA8L;
                union U4 *l_578 = (void*)0;
                union U4 **l_577 = &l_578;
                g_262.f6 = ((safe_sub_func_int8_t_s_s((0xACL >= (g_111.f5 > l_575)), l_576)) > (0x6EL > p_23.f2));
                (*l_577) = &l_517;

                ;
                (*l_302) = (*g_110);
                (*l_373) = (*l_373);
            }
            (*l_280) = ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_583 != (void*)0), (*l_280))), g_262.f2)) < l_584);
            (*l_594) ^= ((p_23.f1 | (p_23.f1 < p_23.f0)) != ((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((*l_280), (((*l_280) > (g_262.f3 != l_560)) || (safe_rshift_func_uint8_t_u_u((g_46.f2 == (!l_560)), 7))))), l_593)) & g_161.f1));
        }
        (*l_280) |= p_23.f0;
    }

    ;
        ;
    l_596 &= ((func_38(l_595, &g_6) || (-1L)) >= g_459.f3);
    return (**g_94);

    }







static int * func_26(union U4 p_27)
{
    int *l_268 = &g_9;
    struct S0 *l_269 = &g_262;
    struct S0 **l_270 = &g_110;
    char *l_271 = &g_6;
    int *l_272 = (void*)0;
    (*l_268) |= g_262.f7;
    (*l_268) = p_27.f2;
    (*l_270) = l_269;

    ;
    (*l_268) ^= p_27.f0;
    return l_272;


}







static union U4 func_28(int * p_29, union U1 p_30, unsigned p_31, short p_32, char * p_33)
{
    union U4 l_267 = {4294967292UL};
    (*p_29) = 0L;
    return l_267;



    }







static int * func_34(short p_35)
{
    char l_264 = (-4L);
    int *l_265 = &g_48;
    l_264 ^= p_35;
    return l_265;


}







static unsigned char func_38(union U2 p_39, char * p_40)
{
    int l_185 = (-1L);
    int l_193 = 1L;
    union U1 *l_196 = &g_161;
    int l_235 = 0x3016EBDAL;
    int ***l_240 = &g_131;
    unsigned char l_263 = 255UL;
    if (l_185)
    {
        unsigned char l_192 = 255UL;
        l_193 |= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(l_185, (safe_lshift_func_int8_t_s_u(l_192, p_39.f0)))), 7));
    }
    else
    {
        int *l_197 = &g_9;
        struct S0 *l_226 = &g_111;
        for (g_111.f6 = 0; (g_111.f6 == (-19)); g_111.f6--)
        {
            return l_193;
        }
        l_193 = (l_196 != &g_161);
        (*l_197) ^= p_39.f0;
        if (p_39.f1)
        {
            unsigned l_204 = 1UL;
            union U3 *l_244 = &g_245;
            if (p_39.f0)
            {
                int l_198 = (-1L);
                int *l_232 = &g_9;
                union U1 *l_241 = &g_161;
                if (l_198)
                {
                    struct S0 l_199 = {0UL,4069,4294967295UL,1UL,0x5D32L,11,-6L,0xD4FDDE0DL,5UL};
                    union U1 *l_200 = &g_161;
                    (*g_110) = l_199;
                    g_201 = l_200;
                    (*l_197) |= l_198;
                    if ((*l_197))
                    {
                        l_199.f1 = p_39.f0;
                    }
                    else
                    {
                        unsigned char l_209 = 1UL;
                        (*l_197) = ((safe_mod_func_uint8_t_u_u((g_46.f0 ^ l_185), l_204)) ^ (*l_197));
                        (*l_197) = ((g_46.f1 != (!l_199.f0)) <= (safe_add_func_int16_t_s_s((g_161.f1 <= ((safe_sub_func_uint32_t_u_u(g_111.f8, g_111.f0)) ^ (*l_197))), g_111.f1)));
                        return l_209;
                    }
                }
                else
                {
                    union U2 *l_220 = &g_52;
                    int *l_225 = &g_111.f6;
                    (*l_197) |= p_39.f1;
                    (*l_225) &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_46.f1 >= (*p_40)), l_193)), ((*l_197) != (safe_div_func_uint32_t_u_u(0x6E62E55AL, (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s(((((void*)0 == l_220) < (safe_rshift_func_uint8_t_u_u(p_39.f1, 6))) || ((safe_add_func_int8_t_s_s(l_198, (*p_40))) | g_46.f2)), p_39.f1)), g_111.f5)))))));
                    if (p_39.f0)
                    {
                        struct S0 **l_227 = &l_226;
                        (*l_227) = l_226;
                        (*l_225) ^= ((&g_110 == (void*)0) && (&g_6 == (void*)0));
                    }
                    else
                    {
                        (*g_131) = &l_198;

                        ;
                        (*l_197) = p_39.f0;
                        (*g_131) = (*g_131);
                        (*l_197) = (safe_sub_func_int32_t_s_s(p_39.f1, g_111.f7));
                    }


                    l_232 = &l_193;

                    ;
                }


                ;
                if (l_193)
                {
                    for (g_111.f8 = 0; (g_111.f8 <= 44); g_111.f8++)
                    {
                        (*g_131) = (void*)0;

                        ;
                        (*l_197) = (l_235 > (safe_add_func_int8_t_s_s((p_39.f0 & (safe_sub_func_uint16_t_u_u(p_39.f2, p_39.f1))), (~(l_240 != &g_131)))));
                    }
                }
                else
                {
                    l_196 = l_241;
                    (*l_232) ^= (-8L);
                    for (g_52.f1 = 20; (g_52.f1 < 8); --g_52.f1)
                    {
                        union U3 **l_246 = &l_244;
                        int *l_249 = &l_198;
                        (*l_246) = l_244;
                        (*l_249) ^= (0x3F4ACB36L || (safe_mul_func_uint16_t_u_u((*l_232), g_111.f7)));
                        (*g_110) = (*g_110);
                    }
                }
            }
            else
            {
                short l_252 = 0xBF48L;
                (*l_197) = (safe_add_func_uint32_t_u_u(p_39.f2, g_111.f5));
                return l_252;
            }


            (**l_240) = (void*)0;


        }
        else
        {
            unsigned l_254 = 0UL;
            struct S0 **l_258 = (void*)0;
            if (p_39.f0)
            {
                union U1 **l_253 = &g_201;
                struct S0 **l_257 = &g_110;
                (*l_253) = &g_161;
                (*l_253) = &g_161;
                (*l_197) |= g_2;
                g_111.f1 ^= (l_254 <= ((l_254 != ((safe_lshift_func_int8_t_s_s((l_257 != l_258), 5)) > (-1L))) | (p_39.f1 >= (safe_add_func_uint16_t_u_u(g_111.f7, (((*l_197) > (0xBC161824L | 1L)) < 0xF1L))))));
            }
            else
            {
                struct S0 l_261 = {4294967294UL,1731,0xA487C263L,7UL,0x1A50L,5,0x27E5EAF4L,0xB7046C61L,0x7947L};
                (*l_226) = l_261;
                l_261.f6 = 0xB66C8A74L;
            }
        }


    }


    g_111.f6 = ((void*)0 != (*l_240));
    (*g_110) = g_262;
    return l_263;
}







static union U2 func_41(unsigned short p_42, int * p_43, unsigned p_44, union U4 p_45)
{
    int *l_47 = &g_48;
    char *l_118 = &g_6;
    union U2 *l_155 = &g_52;
    union U1 *l_160 = &g_161;
    unsigned l_168 = 0x0A08B2B8L;
    int l_169 = 0x8E61E940L;
    short l_172 = 1L;
    (*l_47) |= (*p_43);
    for (p_42 = 0; (p_42 >= 29); ++p_42)
    {
        union U2 *l_51 = &g_52;
        union U2 **l_53 = &l_51;
        int l_60 = 0x8EB7BFBCL;
        char *l_63 = &g_6;
        struct S0 *l_113 = &g_111;
        int ***l_158 = (void*)0;
        int ***l_159 = &g_131;
        (*l_53) = l_51;
    }
    l_160 = l_160;
    if ((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((*p_43), (*l_47))), ((*l_47) & (+((safe_rshift_func_uint16_t_u_s((((((+l_168) > (l_169 & (safe_lshift_func_uint8_t_u_u((*l_47), (l_172 <= (!(4294967295UL >= (*l_47)))))))) > 6UL) != 0x05CCA373L) ^ (*l_47)), p_44)) < 0xEFL))))))
    {
        int *l_175 = &g_48;
        for (g_111.f6 = 0; (g_111.f6 != 16); ++g_111.f6)
        {
            return (*g_95);

                    }
        p_43 = l_175;

        ;
    }
    else
    {
        char l_180 = 0xA8L;
        int l_183 = 0x27731F37L;
        (*p_43) &= ((l_160 == l_160) || ((safe_mod_func_uint16_t_u_u(65535UL, p_45.f2)) > (*l_47)));
        for (g_161.f1 = 0; (g_161.f1 <= (-18)); g_161.f1 = safe_sub_func_uint32_t_u_u(g_161.f1, 5))
        {
            (*l_47) = l_180;
        }

        l_169 &= ((safe_add_func_int16_t_s_s(g_48, l_180)) && (l_183 > g_161.f1));
    }

    ;
    return (**g_94);

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_111.f5, "g_111.f5", print_hash_value);
    transparent_crc(g_111.f6, "g_111.f6", print_hash_value);
    transparent_crc(g_111.f7, "g_111.f7", print_hash_value);
    transparent_crc(g_111.f8, "g_111.f8", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f1, "g_161.f1", print_hash_value);
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_262.f2, "g_262.f2", print_hash_value);
    transparent_crc(g_262.f3, "g_262.f3", print_hash_value);
    transparent_crc(g_262.f4, "g_262.f4", print_hash_value);
    transparent_crc(g_262.f5, "g_262.f5", print_hash_value);
    transparent_crc(g_262.f6, "g_262.f6", print_hash_value);
    transparent_crc(g_262.f7, "g_262.f7", print_hash_value);
    transparent_crc(g_262.f8, "g_262.f8", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_459.f0, "g_459.f0", print_hash_value);
    transparent_crc(g_459.f1, "g_459.f1", print_hash_value);
    transparent_crc(g_459.f2, "g_459.f2", print_hash_value);
    transparent_crc(g_459.f3, "g_459.f3", print_hash_value);
    transparent_crc(g_459.f4, "g_459.f4", print_hash_value);
    transparent_crc(g_459.f5, "g_459.f5", print_hash_value);
    transparent_crc(g_459.f6, "g_459.f6", print_hash_value);
    transparent_crc(g_459.f7, "g_459.f7", print_hash_value);
    transparent_crc(g_459.f8, "g_459.f8", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
