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
   unsigned f0 : 5;
   int f1;
   int f2;
   unsigned f3;
   short f4;
   unsigned char f5;
   unsigned char f6;
   int f7;
   int f8;
   unsigned f9 : 24;
};


static int g_3 = 8L;
static struct S0 g_15 = {4,0x24891023L,0x126C7F05L,0x43260389L,1L,4UL,1UL,1L,0xA2C39D5BL,1158};
static unsigned g_37 = 0xF2842C5AL;
static unsigned short g_42 = 0x176AL;
static int *g_70 = &g_15.f8;
static int **g_69 = &g_70;
static struct S0 g_75 = {3,0xB11FE8BEL,0L,3UL,-10L,4UL,9UL,-1L,0x59FE4D3DL,3384};
static char g_82 = (-1L);
static unsigned short g_107 = 65534UL;
static short g_189 = 0x9479L;
static char *g_215 = (void*)0;
static char **g_214 = &g_215;
static char **g_220 = &g_215;
static struct S0 g_222 = {0,0x55C6A8F6L,0x6309575DL,4294967295UL,0xFEA6L,1UL,0x61L,0L,0xDB4DFD0EL,1488};
static int *g_231 = &g_75.f8;
static unsigned char g_260 = 0xD2L;
static int g_267 = (-1L);
static int *g_266 = &g_267;
static int **g_265 = &g_266;
static int **g_292 = &g_70;
static unsigned g_339 = 0x73470AD2L;
static short g_387 = (-8L);
static int g_432 = 0x3D328635L;



static unsigned char func_1(void);
static int * func_5(unsigned char p_6, int ** p_7, int ** p_8);
static unsigned short func_13(struct S0 p_14);
static unsigned char func_18(int ** p_19, int p_20, int p_21, int * p_22);
static int ** func_23(struct S0 p_24, unsigned p_25, int p_26, unsigned p_27, unsigned short p_28);
static struct S0 func_43(unsigned short * p_44, char p_45, int ** p_46, int p_47);
static unsigned short * func_48(unsigned char p_49, unsigned short p_50);
static unsigned short * func_51(int p_52, unsigned short * p_53);
static int func_58(int p_59, int * p_60);
static int ** func_61(int ** p_62, unsigned short * p_63, int ** p_64, int ** p_65, unsigned p_66);
static unsigned char func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    int **l_10 = &l_2;
    unsigned *l_433 = &g_339;
    unsigned l_437 = 4294967294UL;
    unsigned short *l_438 = &g_42;
    (*l_4) = l_2;
    (*g_292) = func_5((safe_unary_minus_func_uint8_t_u((g_3 | g_3))), l_10, &l_2);

    ;

    if (((safe_div_func_uint8_t_u_u((g_222.f6 = ((safe_add_func_int8_t_s_s(func_58((**g_265), (*g_292)), (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_432, ((g_75.f0 & 0x4C9E616EL) < 0UL))), g_75.f7)), ((*l_433) = g_222.f4))))) | g_189)), 3UL)) >= g_222.f7))
    {
        short l_434 = (-10L);
        int **l_439 = &g_231;
        (*l_2) = (func_18(&g_70, l_434, (((safe_rshift_func_uint16_t_u_s(l_437, 1)) == ((func_18(&g_70, (**l_10), (**g_292), (*g_292)) && g_75.f7) < 4L)) ^ g_222.f2), (*l_10)) <= l_434);


    }
    else
    {
        short l_442 = 0L;
        int ***l_443 = (void*)0;
        int ***l_444 = &l_10;
        int *l_445 = &g_222.f2;
        (*l_445) = (safe_div_func_int8_t_s_s(l_442, func_18(((*l_444) = &g_70), ((**g_69) = (**g_292)), l_442, ((*l_4) = (*g_292)))));

        ;

    }

    ;

    (*g_69) = (*l_4);

    ;
    return (**l_4);
}







static int * func_5(unsigned char p_6, int ** p_7, int ** p_8)
{
    struct S0 l_16 = {4,0L,4L,1UL,0x6FD8L,247UL,1UL,0x090707E2L,9L,2021};
    short *l_386 = &g_387;
    int l_400 = 1L;
    unsigned char l_415 = 0x47L;
    if ((safe_mod_func_uint8_t_u_u((((((func_13((l_16 = g_15)) <= ((l_386 != l_386) >= p_6)) != 65535UL) >= p_6) > 0x97547879L) >= (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((l_400 <= g_107), 0xF4L)) != p_6), l_400)), l_400)) | 8L), 5)), g_387)), 65535UL))), p_6)))
    {
        int **l_407 = (void*)0;
        unsigned char l_416 = 0x4EL;
        for (g_222.f7 = (-12); (g_222.f7 < 19); g_222.f7++)
        {
            char l_414 = (-1L);
            (**p_7) = (safe_sub_func_int8_t_s_s(l_400, (+(g_15.f8 ^ (safe_sub_func_int16_t_s_s(p_6, ((0x6DL != l_414) < l_416)))))));
            (*g_292) = (*p_7);

            ;
        }


    }
    else
    {
        for (l_16.f2 = 7; (l_16.f2 != 9); l_16.f2 = safe_add_func_uint32_t_u_u(l_16.f2, 7))
        {
            unsigned *l_421 = &g_37;
            l_16.f7 = ((**p_7) = (safe_sub_func_int32_t_s_s((p_6 <= 3L), ((*l_421) = g_75.f8))));
        }
        (*p_8) = (*p_8);
    }



    return (*p_7);


}







static unsigned short func_13(struct S0 p_14)
{
    int *l_17 = &g_15.f7;
    unsigned l_29 = 1UL;
    unsigned *l_30 = &l_29;
    int l_35 = 0L;
    unsigned *l_36 = &g_37;
    int l_40 = 0x30386B9BL;
    unsigned short *l_41 = &g_42;
    int *l_234 = &g_222.f7;
    unsigned *l_294 = &l_29;
    short l_303 = (-1L);
    int *l_307 = &g_15.f8;
    int **l_340 = &g_70;
    l_17 = (void*)0;

    ;
    (*l_234) = (l_40 = ((g_15.f7 | ((func_18(func_23(g_15, ((*l_30) = l_29), (p_14.f8 > p_14.f4), p_14.f8, ((*l_41) = (safe_lshift_func_int8_t_s_u((g_15.f6 > (safe_div_func_uint32_t_u_u(((*l_36) = (l_35 = g_15.f2)), (safe_div_func_int16_t_s_s((p_14.f4 >= l_40), g_15.f9))))), 2)))), p_14.f1, g_15.f6, &l_40) != p_14.f2) && g_222.f8)) <= l_40));



    p_14.f1 = 1L;
    if ((*l_234))
    {
        unsigned l_237 = 4294967295UL;
        int **l_287 = &g_70;
        int l_318 = (-3L);
        unsigned **l_371 = (void*)0;
        unsigned short *l_384 = &g_42;
        unsigned short **l_385 = &l_384;
lbl_328:
        p_14.f8 = (0x06967E03L & p_14.f4);
        p_14 = g_15;
        if ((safe_rshift_func_uint8_t_u_s(func_18(&g_70, (g_222.f2 = l_237), (*l_234), &l_40), 4)))
        {
            unsigned short l_246 = 65534UL;
            unsigned *l_249 = &l_29;
            int **l_269 = (void*)0;
            char **l_271 = &g_215;
            char **l_272 = &g_215;
            int **l_284 = &l_17;
            unsigned l_293 = 4294967290UL;
            unsigned l_295 = 0UL;
            struct S0 l_298 = {3,-1L,0xB4B9B858L,4294967295UL,0x8EBBL,9UL,0x3AL,5L,0xB4410920L,985};
            if (((*l_234) = p_14.f6))
            {
                struct S0 l_240 = {3,-1L,0x375581D7L,0x2F74E254L,2L,246UL,255UL,-3L,-10L,2400};
                int *l_242 = (void*)0;
                for (g_15.f7 = (-25); (g_15.f7 >= (-28)); --g_15.f7)
                {
                    struct S0 *l_241 = &g_75;
                    (*l_241) = l_240;
                }
                if (((*l_234) = p_14.f7))
                {
                    char *l_245 = &g_82;
                    (*g_69) = l_242;

                    ;
                    (*g_69) = l_242;
                    (*l_234) = (246UL | (g_15.f9 < ((*l_245) = p_14.f7)));
                    (*g_69) = &l_40;

                    ;
                }
                else
                {
                    unsigned **l_250 = &l_36;
                    unsigned *l_251 = &l_29;
                    unsigned **l_252 = (void*)0;
                    unsigned **l_253 = (void*)0;
                    unsigned **l_254 = (void*)0;
                    unsigned **l_255 = &l_251;
                    p_14.f1 = (l_246 = p_14.f4);
                    (*l_234) = ((p_14.f7 = (-2L)) < func_58((safe_sub_func_uint16_t_u_u(((*l_41) = ((((*l_250) = l_249) != ((*l_255) = l_251)) ^ ((safe_lshift_func_int16_t_s_u(g_222.f1, ((g_75.f0 & g_82) && 255UL))) || (-1L)))), (safe_sub_func_uint32_t_u_u((g_260 ^ 1L), (-1L))))), &g_3));

                    ;
                    (*l_234) = l_246;
                    (*l_234) = (safe_add_func_uint32_t_u_u(g_42, g_222.f4));
                }

                ;

            }
            else
            {
                int **l_285 = &l_17;
                unsigned short *l_286 = &g_107;
                int l_304 = 0xEC6FA8E4L;
                for (g_15.f8 = (-6); (g_15.f8 <= 15); g_15.f8 = safe_add_func_uint8_t_u_u(g_15.f8, 4))
                {
                    int ***l_268 = &g_265;
                    char **l_270 = &g_215;
                    unsigned char *l_276 = &g_260;
                    unsigned char **l_275 = &l_276;
                    unsigned short *l_281 = (void*)0;
                    int **l_283 = &g_70;
                    l_269 = ((*l_268) = g_265);

                    ;
                    if (((((((*l_30) = (((l_271 = l_270) != l_272) != ((((safe_sub_func_int16_t_s_s(g_222.f0, ((((*l_275) = &g_260) == (void*)0) >= g_15.f1))) < ((*l_36) = 0xDF71456EL)) || p_14.f7) <= (safe_rshift_func_uint16_t_u_s(0xE174L, 14))))) > (-8L)) || l_246) > l_237) <= p_14.f9))
                    {
                        struct S0 *l_279 = (void*)0;
                        struct S0 *l_280 = &g_222;
                        int ***l_282 = &g_69;
                        (*l_280) = g_222;
                        (*l_280) = g_15;
                        g_75.f1 = p_14.f2;
                    }
                    else
                    {
                        char *l_296 = &g_82;
                        int l_297 = 0x87038CBDL;
                        l_297 = (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x168ACB36L, func_18(g_292, l_293, ((void*)0 == l_294), (*l_285)))), (+(l_295 > (((*l_296) = ((~0xC917BF7FL) || p_14.f4)) > 0x45L)))));
                    }
                    p_14 = l_298;
                    for (g_75.f7 = 0; (g_75.f7 <= (-8)); g_75.f7 = safe_sub_func_int32_t_s_s(g_75.f7, 5))
                    {
                        struct S0 *l_301 = &g_222;
                        int **l_302 = &l_17;
                        (*l_301) = g_222;
                    }
                }

                ;
                for (g_222.f1 = 10; (g_222.f1 > (-10)); g_222.f1--)
                {
                    short l_327 = 0x8E16L;
                    (*g_292) = l_307;

                    ;
                    for (l_237 = 0; (l_237 <= 10); l_237 = safe_add_func_uint16_t_u_u(l_237, 2))
                    {
                        short l_314 = 1L;
                        int **l_315 = &l_234;
                    }
                }
                p_14.f1 = ((*l_234) = 0L);
            }

            ;

            ;
        }
        else
        {
            struct S0 **l_329 = (void*)0;
            struct S0 *l_331 = (void*)0;
            struct S0 **l_330 = &l_331;
            int ***l_332 = &g_265;
            int l_333 = 3L;
            unsigned char *l_334 = &g_15.f5;
            int l_335 = 0L;
            int *l_338 = (void*)0;
            short l_352 = 7L;
            int *l_376 = &g_75.f8;
            if (g_37)
                goto lbl_328;
            (*l_330) = &g_15;

            ;
            if (((l_333 = ((((l_332 == &g_265) ^ l_333) < ((*l_334) = func_58((*g_266), &l_40))) < 0x68L)) == ((l_335 && (0x39653B59L ^ g_75.f7)) < 0UL)))
            {
                (*g_292) = &l_40;

                ;
                for (l_29 = 4; (l_29 >= 15); l_29 = safe_add_func_uint8_t_u_u(l_29, 6))
                {
                    return g_75.f4;


                }
            }
            else
            {
                int l_370 = 0x842B8A07L;
                (*l_287) = &l_335;

                ;
                (*l_287) = &l_333;

                ;
                (*g_69) = &l_333;
                if ((**g_69))
                {
                    short l_364 = 4L;
                    l_338 = (void*)0;
                    g_222 = ((*l_331) = g_15);
                    if (p_14.f1)
                    {
                        unsigned char *l_359 = (void*)0;
                        unsigned *l_362 = &l_29;
                        int l_363 = 0x67E6F342L;
                        (*l_234) = (safe_unary_minus_func_int8_t_s((**l_287)));
                        (*l_307) = ((0x6B32D8E3L & ((safe_add_func_int32_t_s_s(((void*)0 == &g_215), ((l_364 = ((g_15.f4 != (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((l_352 = (*l_307)), 11)), (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_260 = (g_222.f1 | (((safe_add_func_uint32_t_u_u(((*l_362) = (((void*)0 == l_359) && (safe_lshift_func_uint16_t_u_u((&g_339 == l_362), l_363)))), 0xC170D780L)) > 8UL) || g_222.f1))), 1UL)), p_14.f4)))), 4)) != 0x7BL), g_222.f1)) && 0x22A196B4L) < g_75.f6)) != (**l_287))) == p_14.f0))) || p_14.f7)) & p_14.f8);
                        (*l_331) = g_15;
                    }
                    else
                    {
                        unsigned char l_369 = 0xFAL;
                        (*l_234) = (safe_add_func_int32_t_s_s((-1L), (safe_add_func_int16_t_s_s(l_369, l_370))));
                        l_370 = (((**g_69) < ((void*)0 == l_371)) != g_339);
                        if (g_82)
                            goto lbl_377;
                        (*l_234) = (safe_rshift_func_uint16_t_u_s(p_14.f7, ((0x4945L == func_18(&l_307, l_370, (0xFFC98CE2L > (((*l_41) = (p_14.f0 != l_370)) <= (safe_rshift_func_int8_t_s_u(l_370, 6)))), (*l_287))) | 0x4449L)));

                        ;

                        l_338 = (void*)0;
                    }

                    ;

                    (*g_69) = l_376;

                    ;
                }
                else
                {
lbl_377:
                    (*l_287) = (*g_292);
                    return p_14.f7;


                }

                ;

            }

            ;

        }

        ;


        (*l_234) = ((((*g_265) == (*g_265)) ^ ((*l_294) = (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((*l_234), 3)), (p_14.f1 = func_18(&g_70, p_14.f6, p_14.f3, &g_3)))) | p_14.f3), 15)))) > g_75.f0);
    }
    else
    {
        return g_222.f0;
    }

    ;


    return p_14.f6;


}







static unsigned char func_18(int ** p_19, int p_20, int p_21, int * p_22)
{
    unsigned l_226 = 0x455B6F9CL;
    int l_227 = 0xDBD19848L;
    int *l_230 = (void*)0;
    l_227 = func_58(l_226, &p_20);
    for (g_15.f3 = 0; (g_15.f3 == 49); g_15.f3 = safe_add_func_uint8_t_u_u(g_15.f3, 9))
    {
        l_230 = &p_21;

        ;
        g_231 = ((*p_19) = &p_20);


        ;
        for (g_189 = 10; (g_189 > (-24)); g_189 = safe_sub_func_uint16_t_u_u(g_189, 6))
        {
            (*g_69) = (void*)0;

            ;
        }
        (*p_19) = &l_227;


    }


    ;

    return g_75.f1;



}







static int ** func_23(struct S0 p_24, unsigned p_25, int p_26, unsigned p_27, unsigned short p_28)
{
    int *l_68 = &g_15.f1;
    int **l_67 = &l_68;
    int ***l_76 = &g_69;
    int ***l_77 = &l_67;
    unsigned short *l_78 = (void*)0;
    unsigned short *l_79 = (void*)0;
    unsigned short *l_80 = &g_42;
    char *l_81 = &g_82;
    unsigned short **l_87 = &l_80;
    struct S0 *l_221 = &g_75;
    g_222 = ((*l_221) = func_43(func_48((&p_28 == ((*l_87) = func_51(((((*l_81) = (g_15.f8 | ((*l_80) = ((safe_sub_func_int32_t_s_s(func_58(p_27, &g_3), p_24.f8)) != ((((*l_77) = ((*l_76) = func_61(l_67, &p_28, &l_68, g_69, p_24.f9))) == &l_68) & p_24.f1))))) >= 0xB5L) > p_24.f8), l_79))), g_15.f0), p_27, &l_68, g_15.f8));

    ;
    ;

    for (g_75.f1 = 0; (g_75.f1 > (-11)); g_75.f1--)
    {
        struct S0 *l_225 = &g_222;
        (*l_67) = (void*)0;

        ;
        (*l_225) = (*l_221);
    }


    return &g_70;


}







static struct S0 func_43(unsigned short * p_44, char p_45, int ** p_46, int p_47)
{
    int l_89 = (-1L);
    unsigned short *l_106 = &g_107;
    unsigned l_115 = 4294967295UL;
    int l_117 = (-3L);
    int **l_126 = &g_70;
    struct S0 l_137 = {4,1L,0x4E2F553DL,4294967286UL,1L,0x2AL,0xBEL,0x01A4E0C3L,0xD9FE8AC1L,3191};
    struct S0 *l_154 = &l_137;
    int ****l_172 = (void*)0;
    int ***l_175 = (void*)0;
    int ****l_174 = &l_175;
    char l_197 = 0xDDL;
    int *l_208 = &l_137.f2;
    g_75 = g_75;
    if (((g_75.f3 != p_47) > (func_58((((l_89 > (safe_lshift_func_int16_t_s_u((p_45 == g_15.f6), (((((*g_70) = 0xE21EF5C2L) <= g_75.f5) & (*p_44)) || (*p_44))))) | 0xA205A567L) & g_15.f2), (*p_46)) && (-6L))))
    {
        int *l_96 = &g_15.f7;
        (*g_70) = (safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((((*p_44) >= (0xDBA6L >= 0x49BDL)) > p_47), func_58((l_96 == (*p_46)), (*p_46)))) == g_15.f3), g_75.f9));
    }
    else
    {
        unsigned short l_136 = 5UL;
        int *l_139 = &l_117;
        int ***l_156 = &l_126;
        struct S0 l_161 = {4,0x061D4BFAL,0x62913F7DL,0xBD80DBD0L,-8L,0xB5L,1UL,0L,0x0DD1ACC9L,3792};
        if ((!(~(safe_add_func_int16_t_s_s((0xCA868CE9L | 0xCFDA208EL), (g_15.f1 >= g_75.f6))))))
        {
            unsigned short l_99 = 0UL;
            int *l_134 = &g_75.f2;
            char l_140 = 5L;
            if (l_99)
            {
                unsigned char *l_102 = &g_75.f5;
                int l_103 = 0x673F556CL;
                unsigned short **l_108 = (void*)0;
                unsigned short *l_110 = &l_99;
                unsigned short **l_109 = &l_110;
                unsigned char *l_116 = &g_75.f6;
                struct S0 *l_138 = &g_75;
                l_117 = (((*l_116) = (safe_sub_func_uint8_t_u_u(((*l_102) = 0UL), ((l_103 != ((*p_44) = g_15.f2)) ^ (((safe_sub_func_int8_t_s_s((l_106 != ((*l_109) = &g_107)), ((safe_div_func_uint8_t_u_u(((l_103 >= 0x4AL) < (safe_div_func_int16_t_s_s(0x557AL, p_45))), g_3)) && g_75.f6))) > l_115) == (-6L)))))) <= g_37);

                ;
                for (g_75.f8 = 0; (g_75.f8 >= (-3)); g_75.f8 = safe_sub_func_uint32_t_u_u(g_75.f8, 1))
                {
                    unsigned char l_127 = 1UL;
                }
                (*l_138) = l_137;
                (*l_138) = g_75;
            }
            else
            {
                int ***l_143 = &g_69;
                int ***l_155 = &g_69;
                int *****l_173 = &l_172;
                short *l_182 = &l_161.f4;
                l_139 = (*p_46);

                ;
                if (((0x2B29L < l_140) && (safe_mod_func_int8_t_s_s(((0xB8L ^ (l_126 != ((*l_143) = (p_46 = &g_70)))) < (safe_sub_func_int8_t_s_s(g_75.f9, (*l_134)))), ((((*p_44) = (+(safe_div_func_uint32_t_u_u((**l_126), p_47)))) ^ (*l_139)) || p_47)))))
                {
lbl_153:
                    if ((**g_69))
                    {
                        (*l_139) = ((**g_69) = (**l_126));
                        (*p_46) = l_134;
                        (**l_126) = (***l_143);
                    }
                    else
                    {
                        struct S0 l_149 = {1,-1L,-2L,4294967293UL,0xB39CL,255UL,0x65L,0xB517B2DEL,0x82C3DD90L,3151};
                        struct S0 *l_150 = (void*)0;
                        struct S0 *l_151 = &l_149;
                        (*l_151) = l_149;
                    }
lbl_157:
                    if ((g_82 != (safe_unary_minus_func_uint8_t_u(g_42))))
                    {
                        if (g_75.f9)
                            goto lbl_153;
                    }
                    else
                    {
                        l_154 = &g_75;

                        ;
                    }
                    if ((!((l_155 != l_156) > (**l_126))))
                    {
                        if (l_137.f5)
                            goto lbl_157;
                        (*g_69) = (*g_69);
                        (**l_155) = (*p_46);

                        ;
                        (*p_46) = (*p_46);


                    }
                    else
                    {
                        unsigned short **l_159 = &l_106;
                        unsigned short ***l_158 = &l_159;
                        (**l_143) = (**l_156);
                        (*l_158) = &p_44;

                        ;
                        (**l_156) = (*g_69);
                        (*l_154) = g_15;
                    }

                    ;

                }
                else
                {
                    int *l_160 = &g_15.f8;
                    (**l_156) = l_160;
                    (*l_126) = (**l_156);
                    return l_161;
                }

                ;


                ;
                (***l_155) = ((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_75.f4 ^ g_15.f8), (safe_rshift_func_int8_t_s_u((((*l_173) = l_172) == l_174), (*l_134))))), (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s(g_15.f7, 14)) > g_15.f6) > (safe_lshift_func_int16_t_s_u((g_15.f4 = ((*l_182) = (***l_156))), 10))), (p_45 | 0xB9L))))), 7)), (*p_44))) | g_42) <= 0x15L) || 0xE6L);
            }

            ;


            ;
            ;
        }
        else
        {
            (*l_154) = g_75;
            (**g_69) = (safe_lshift_func_uint8_t_u_u(g_75.f7, p_45));
            (**l_126) = (**g_69);
            l_154 = &g_15;

            ;
        }

        ;


        ;
        ;
        if (((g_15.f6 > 1L) | (safe_lshift_func_uint16_t_u_u((*p_44), 4))))
        {
            char *l_194 = &g_82;
            int l_199 = 0x40374B80L;
            struct S0 l_212 = {2,0x0580F477L,5L,4294967289UL,-9L,8UL,1UL,0xDF4364D3L,8L,751};
            struct S0 *l_213 = &l_137;
            char ***l_216 = &g_214;
lbl_202:
            for (g_75.f1 = 0; (g_75.f1 > 20); g_75.f1 = safe_add_func_uint16_t_u_u(g_75.f1, 1))
            {
                return l_161;
            }
            if (((***l_156) = ((g_15.f9 = (((g_189 && p_47) | (safe_mod_func_uint16_t_u_u(0UL, (*l_139)))) ^ (safe_mod_func_uint8_t_u_u((((*l_194) = (g_15.f4 | (&p_45 == (void*)0))) && (g_15.f2 ^ ((safe_lshift_func_uint16_t_u_s((*p_44), (*l_139))) > (*g_70)))), 254UL)))) | l_197)))
            {
                (*l_139) = (safe_unary_minus_func_int16_t_s(0xCFE1L));
                if (l_137.f7)
                    goto lbl_205;
            }
            else
            {
                if (l_199)
                {
lbl_205:
                    for (l_137.f7 = 0; (l_137.f7 <= 19); l_137.f7++)
                    {
                        if (l_137.f0)
                            goto lbl_202;
                        l_199 = ((**g_69) = (safe_div_func_uint32_t_u_u(g_15.f8, ((*l_139) | 0x04CCL))));
                    }
                    for (g_75.f6 = (-16); (g_75.f6 < 30); g_75.f6 = safe_add_func_int8_t_s_s(g_75.f6, 1))
                    {
                        l_208 = ((*g_69) = (*p_46));

                        ;
                        (*g_69) = (*p_46);
                    }

                    ;
                    (**p_46) = (**p_46);
                }
                else
                {
                    struct S0 **l_209 = &l_154;
                    int *l_210 = (void*)0;
                    (*l_209) = &l_137;

                    ;
                    if ((**g_69))
                    {
                        struct S0 l_211 = {1,1L,0x3FCEF47AL,4UL,-2L,6UL,0xEBL,-1L,0xAA4C83CDL,419};
                        (**l_209) = l_211;
                    }
                    else
                    {
                        (*g_69) = &l_199;

                        ;
                    }

                    ;
                }

                ;
                ;
                (*l_213) = l_212;
                (*l_208) = (**p_46);
            }

            ;
            ;
            (*l_216) = g_214;
        }
        else
        {
            unsigned short **l_218 = &l_106;
            unsigned short ***l_217 = &l_218;
            char ***l_219 = &g_214;
            (*l_217) = &p_44;

            ;
            g_220 = ((*l_219) = &g_215);
        }


        ;
        (*l_208) = p_47;
    }




    ;
    ;
    return g_15;
}







static unsigned short * func_48(unsigned char p_49, unsigned short p_50)
{
    struct S0 *l_88 = &g_75;
    (*l_88) = g_15;
    return &g_42;


}







static unsigned short * func_51(int p_52, unsigned short * p_53)
{
    struct S0 l_83 = {0,3L,-1L,1UL,0x24CDL,0xC0L,1UL,1L,0x0E7A9F47L,920};
    struct S0 *l_84 = (void*)0;
    struct S0 *l_85 = &g_75;
    unsigned short *l_86 = &g_42;
    (*l_85) = l_83;
    return l_86;


}







static int func_58(int p_59, int * p_60)
{
    (*p_60) = (*p_60);
    return (*p_60);
}







static int ** func_61(int ** p_62, unsigned short * p_63, int ** p_64, int ** p_65, unsigned p_66)
{
    unsigned char l_73 = 0UL;
    struct S0 *l_74 = &g_75;
    for (g_15.f3 = 0; (g_15.f3 > 35); g_15.f3 = safe_add_func_int8_t_s_s(g_15.f3, 5))
    {
        (**p_64) = (g_15.f8 ^ l_73);
    }
    (*l_74) = g_15;
    (*l_74) = g_75;
    return &g_70;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
    transparent_crc(g_15.f3, "g_15.f3", print_hash_value);
    transparent_crc(g_15.f4, "g_15.f4", print_hash_value);
    transparent_crc(g_15.f5, "g_15.f5", print_hash_value);
    transparent_crc(g_15.f6, "g_15.f6", print_hash_value);
    transparent_crc(g_15.f7, "g_15.f7", print_hash_value);
    transparent_crc(g_15.f8, "g_15.f8", print_hash_value);
    transparent_crc(g_15.f9, "g_15.f9", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_75.f4, "g_75.f4", print_hash_value);
    transparent_crc(g_75.f5, "g_75.f5", print_hash_value);
    transparent_crc(g_75.f6, "g_75.f6", print_hash_value);
    transparent_crc(g_75.f7, "g_75.f7", print_hash_value);
    transparent_crc(g_75.f8, "g_75.f8", print_hash_value);
    transparent_crc(g_75.f9, "g_75.f9", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_222.f0, "g_222.f0", print_hash_value);
    transparent_crc(g_222.f1, "g_222.f1", print_hash_value);
    transparent_crc(g_222.f2, "g_222.f2", print_hash_value);
    transparent_crc(g_222.f3, "g_222.f3", print_hash_value);
    transparent_crc(g_222.f4, "g_222.f4", print_hash_value);
    transparent_crc(g_222.f5, "g_222.f5", print_hash_value);
    transparent_crc(g_222.f6, "g_222.f6", print_hash_value);
    transparent_crc(g_222.f7, "g_222.f7", print_hash_value);
    transparent_crc(g_222.f8, "g_222.f8", print_hash_value);
    transparent_crc(g_222.f9, "g_222.f9", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
