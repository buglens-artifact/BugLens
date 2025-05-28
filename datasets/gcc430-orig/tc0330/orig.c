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
   unsigned f0 : 26;
   unsigned f1;
   unsigned f2;
   unsigned f3;
   unsigned short f4;
};


static unsigned char g_5 = 1UL;
static unsigned short g_16 = 1UL;
static unsigned char g_29 = 0x30L;
static int g_31 = 0xEBEF9F3BL;
static struct S0 g_44 = {4445,3UL,0x47C038D0L,0xD8E66C79L,0x83ADL};
static int g_108 = 0xE85BCF72L;
static unsigned short g_163 = 7UL;
static struct S0 g_165 = {5392,1UL,4294967295UL,1UL,0x14DCL};
static unsigned g_177 = 0x5799EF2CL;
static unsigned g_189 = 4294967293UL;
static int g_208 = 0x829F08BAL;
static unsigned char g_243 = 255UL;
static int g_286 = 9L;
static char g_344 = 0x94L;
static unsigned g_383 = 4294967294UL;
static char g_384 = (-9L);
static int g_400 = 0x22206891L;
static unsigned short g_448 = 0x14A2L;
static int g_462 = 1L;
static short g_532 = 0x3312L;
static unsigned short g_563 = 65529UL;



static int func_1(void);
static short func_9(char p_10, char p_11, int p_12, unsigned p_13);
static struct S0 func_18(unsigned short p_19, unsigned p_20, unsigned p_21, short p_22, int p_23);
static unsigned func_24(char p_25, int p_26);
static struct S0 func_33(int p_34, unsigned p_35);
static unsigned char func_56(short p_57, char p_58);
static short func_67(short p_68, int p_69, int p_70);
static unsigned char func_72(struct S0 p_73, unsigned char p_74);
static struct S0 func_75(struct S0 p_76, int p_77, int p_78, unsigned p_79, char p_80);
static unsigned short func_86(unsigned p_87, short p_88);
static int func_1(void)
{
    short l_4 = (-5L);
    int l_6 = 3L;
    int l_17 = 0x99CDF9C7L;
    unsigned l_541 = 1UL;
    struct S0 l_542 = {7574,0xDB7A7C47L,0x337BCF86L,7UL,1UL};
    unsigned short l_574 = 0x2C8DL;
    unsigned char l_609 = 255UL;
    if (((safe_rshift_func_int8_t_s_s(l_4, 6)) , ((l_6 = (g_5 > l_4)) && ((((0xD4L == (safe_lshift_func_uint8_t_u_u((func_9(l_6, ((l_17 = (safe_lshift_func_int16_t_s_s((g_16 = g_5), g_5))) , g_5), g_5, l_6) && g_208), 6))) , l_17) != g_5) > 0xF24EL))))
    {
        unsigned short l_533 = 65528UL;
        g_400 = (g_532 , (g_165.f0 >= (l_533 & ((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s(g_165.f3, g_462)))) == (safe_add_func_uint32_t_u_u((g_462 < (safe_rshift_func_uint16_t_u_u(g_5, 1))), l_541))))));
    }
    else
    {
        unsigned short l_543 = 0x00FBL;
        int l_565 = 0xB500A737L;
        int l_566 = 0xF31B3554L;
lbl_567:
        l_542 = l_542;
        g_165 = func_75(g_44, l_543, (+(~(safe_sub_func_uint8_t_u_u((g_165.f4 <= (l_543 != g_44.f0)), (safe_add_func_uint32_t_u_u(l_541, 0xF3185283L)))))), g_108, ((safe_rshift_func_uint16_t_u_s(g_243, l_542.f4)) < l_543));
        for (l_541 = (-23); (l_541 < 47); l_541 = safe_add_func_uint16_t_u_u(l_541, 1))
        {
            int l_554 = 0x63173AEEL;
            int l_564 = (-1L);
            l_17 = (safe_rshift_func_int16_t_s_u((l_554 && (func_18((g_16 = (safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s(0x8A54C4FBL, ((((safe_mod_func_int8_t_s_s(func_24((l_543 >= l_542.f4), (l_564 = (+((l_554 & (g_165.f3 = (g_165.f2 == (((safe_add_func_uint16_t_u_u(((g_563 <= l_543) && (g_44.f0 || g_165.f0)), 0x7379L)) < g_163) && 0xC4L)))) ^ g_165.f2)))), g_344)) != 0UL) | 0x4BL) && 0L))) , g_532) != 1UL), 0L))), l_542.f3, g_44.f3, g_344, l_565) , l_565)), g_400));
            l_566 = g_165.f4;
            if (l_543)
                goto lbl_567;
        }
        g_400 = g_243;
    }
    if ((g_44.f0 | func_86(l_542.f2, ((safe_mod_func_uint8_t_u_u(0x6DL, (l_574 = (((safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(((((l_542.f4 < g_384) != g_165.f1) || l_4) , ((l_6 = g_165.f0) < g_29)), 0x23L)) <= g_165.f0) , l_541) > l_542.f1), l_541)) & 0x650F65B8L) , 0x46L)))) & g_108))))
    {
        int l_577 = 1L;
        int l_590 = 0x7DDF1DDBL;
        int l_591 = 1L;
        g_108 = (safe_mod_func_uint8_t_u_u((l_577 >= (1L || 1L)), (g_563 , 255UL)));
        for (g_5 = (-7); (g_5 <= 52); g_5 = safe_add_func_uint16_t_u_u(g_5, 3))
        {
            short l_587 = 0x5693L;
            l_6 = l_577;
            l_591 = (((((((safe_mod_func_uint16_t_u_u(0x8DE5L, (safe_mod_func_int8_t_s_s((-1L), 0xBFL)))) & (l_590 = ((safe_unary_minus_func_int16_t_s(0x4CBEL)) == func_9(func_86((((safe_lshift_func_uint8_t_u_s(((l_587 < func_9(l_587, g_163, ((((safe_lshift_func_uint16_t_u_s(g_243, 6)) && (0xDC4FL <= l_577)) == 0L) & 0xE3FE5AD8L), g_31)) < l_587), 0)) , 0x92L) & g_563), g_563), l_577, g_448, l_587)))) ^ g_532) , 0L) <= g_448) , l_17) || g_189);
        }
        l_17 = ((4294967295UL || ((g_165.f3 > 255UL) || (safe_mod_func_int8_t_s_s((l_542.f4 | g_31), func_72(g_44, (safe_sub_func_int8_t_s_s(g_344, (l_542.f4 ^ 0x57L)))))))) > g_532);
        l_542 = g_165;
    }
    else
    {
        short l_599 = 0x3286L;
        int l_600 = 0xF80F034CL;
        struct S0 l_610 = {2537,1UL,0x2CBEBA3CL,0x1FA36620L,0xC363L};
        g_400 = (((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u((l_574 , 0x077CL))), (l_599 = (l_542.f3 >= 1UL)))) < g_44.f3) < l_600);
        l_542 = func_75((l_610 = func_18(l_541, (g_189 , ((l_542.f3 , ((((l_17 = ((((((safe_lshift_func_int8_t_s_s(g_16, 5)) ^ l_599) || (~(safe_add_func_uint32_t_u_u(4294967295UL, (~(l_6 = (((l_600 ^ ((g_344 , (safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(g_44.f4, l_4)) && l_609) < (-2L)), l_542.f4))) != g_165.f2)) == 0UL) ^ (-3L)))))))) & g_384) , 0x74L) < 0x98L)) || 0L) || (-1L)) & l_599)) == l_599)), g_44.f1, l_4, l_600)), l_609, l_541, l_599, g_31);
        g_400 = (g_165.f2 , g_165.f1);
    }
    if (func_24(l_542.f3, (safe_add_func_uint32_t_u_u((((g_563 = l_609) == (((-1L) <= g_532) < (safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((func_56(g_189, g_163) >= l_541), l_542.f4)), 0)) != g_384) | 0xB562L), g_384)))) == g_165.f1), l_574))))
    {
        l_542 = g_165;
    }
    else
    {
        struct S0 l_619 = {7686,4294967295UL,0x735836EAL,0x5F2B1AF4L,0x4A96L};
        g_165 = l_619;
        g_165 = g_165;
    }
    return g_448;
}







static short func_9(char p_10, char p_11, int p_12, unsigned p_13)
{
    unsigned l_27 = 0x7F355C0CL;
    short l_30 = 0L;
    unsigned char l_32 = 0xC1L;
    struct S0 l_390 = {7365,0x87B85252L,0xDA270D7BL,4294967291UL,65532UL};
    int l_402 = 0x242D7324L;
    struct S0 l_435 = {529,0x116B153CL,2UL,0UL,0xD557L};
    int l_508 = 1L;
    unsigned char l_522 = 0xB3L;
    unsigned l_531 = 0UL;
lbl_461:
    l_390 = func_18((func_24(l_27, l_27) , func_24((l_30 <= ((((g_31 = 0xA1L) | (((l_32 = ((((p_11 != ((g_29 , (g_29 >= l_30)) >= p_11)) , l_27) , 0L) , 0xA2E255BBL)) <= g_16) , 1UL)) ^ g_29) <= g_16)), p_10)), p_13, g_16, g_16, g_16);
    for (l_390.f4 = 0; (l_390.f4 == 31); l_390.f4++)
    {
        unsigned short l_395 = 65531UL;
        int l_401 = 0xDD4E9998L;
        char l_411 = 0xCFL;
        unsigned short l_446 = 0xA73DL;
        struct S0 l_483 = {3356,4294967289UL,0UL,4294967295UL,1UL};
        l_402 = func_72((func_24((((0x45L & (((((safe_add_func_int16_t_s_s(l_395, func_86(((g_400 = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_243, 0xF0L)) && l_390.f4), l_395))) >= (l_401 = 0L)), p_13))) , g_5) , l_395) & g_16) || l_30)) == (-1L)) >= 0x53E9C7D3L), g_189) , g_165), l_395);
        if (p_12)
            break;
        if ((~0L))
        {
            g_400 = ((safe_add_func_uint8_t_u_u(0x04L, (safe_mod_func_int8_t_s_s(0xD8L, g_29)))) < p_11);
            l_402 = p_13;
        }
        else
        {
            short l_412 = 1L;
            int l_413 = (-1L);
            struct S0 l_459 = {6534,0xBF463C68L,4294967293UL,0x756A15EEL,0UL};
            int l_463 = 1L;
            int l_509 = 0x03BE7347L;
            struct S0 l_521 = {2943,0x7C97FB50L,0x5571A881L,1UL,0x14EEL};
            l_413 = ((safe_lshift_func_int16_t_s_u((func_72(g_44, p_10) || (l_412 = ((safe_sub_func_uint8_t_u_u((((l_411 = g_383) , p_12) , (l_401 = l_390.f4)), ((p_10 <= p_10) > l_395))) > l_395))), p_11)) , (-6L));
            l_401 = ((p_11 = (g_5 < p_12)) && l_401);
            if ((safe_lshift_func_uint16_t_u_u(p_10, 7)))
            {
                struct S0 l_418 = {7074,0x5C877A6FL,0xC273DC26L,0xD470F29FL,0UL};
                int l_482 = 0x6F0ECDB3L;
                l_401 = (((8UL || (g_44.f0 = (g_165.f0 = 0xC862F981L))) , 0x65L) != (func_24(l_401, l_390.f0) , (!(g_108 != g_16))));
                for (g_243 = 12; (g_243 == 58); ++g_243)
                {
                    unsigned l_433 = 1UL;
                    char l_434 = (-1L);
                    unsigned l_457 = 4294967291UL;
                    short l_458 = (-1L);
                    struct S0 l_460 = {1124,2UL,4294967295UL,0x5411ACE0L,65535UL};
                    int l_473 = 0x05B6C174L;
                    l_435 = func_75(l_418, (l_401 = (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((-1L), func_86((safe_lshift_func_uint16_t_u_s(g_163, ((safe_rshift_func_uint16_t_u_s(func_86(p_10, (((safe_rshift_func_int8_t_s_u(((((((g_29 = l_418.f0) & g_243) | (safe_add_func_int8_t_s_s(((g_189 || (l_413 , (safe_add_func_int16_t_s_s((g_44.f2 , 0L), (-3L))))) > 0xDD434D3AL), p_12))) , l_412) , 0xDA52L) , l_433), l_433)) ^ 0xD81FL) == 1L)), p_10)) , 0xA036L))), p_13))) >= l_401), 2))), p_12, p_12, l_434);
                    if ((p_10 != ((g_29 = (safe_sub_func_int32_t_s_s(l_433, (l_446 = ((safe_sub_func_uint16_t_u_u((p_13 <= (-3L)), (safe_sub_func_uint16_t_u_u((l_413 <= (l_418.f3 , ((((g_400 = ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_433, (g_165.f4 < (p_10 > 0x92735655L)))), p_11)) & 0xF1D0L)) ^ g_286) ^ l_412) , 0x813A1359L))), g_383)))) ^ g_5))))) < 0xBAL)))
                    {
                        unsigned char l_447 = 1UL;
                        struct S0 l_455 = {4024,0UL,0x3CC93BDCL,0xDFC5413FL,0x5AACL};
                        g_108 = (g_29 && func_86((g_243 < (l_447 || g_448)), (safe_add_func_int16_t_s_s(p_12, (safe_rshift_func_int8_t_s_u(((g_16 = 0x509AL) != (safe_rshift_func_uint16_t_u_u((+(l_455 , ((((safe_unary_minus_func_uint8_t_u((((func_24(((-1L) == l_455.f2), l_418.f0) , p_13) == 0x0EL) ^ p_10))) == l_457) & 0x91L) && l_458))), p_13))), 5))))));
                        l_460 = l_459;
                    }
                    else
                    {
                        if (g_165.f2)
                            goto lbl_461;
                        return p_10;
                    }
                    if (func_24(l_460.f2, ((func_56(p_12, g_383) & (g_462 = p_10)) != (l_463 = (g_165 , (g_165.f3 , p_13))))))
                    {
                        short l_464 = (-1L);
                        l_401 = func_24(g_165.f0, l_464);
                        if (p_10)
                            break;
                        l_418 = (p_12 , func_33(((l_473 = (((0xCAC8L & (safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(g_44.f1, (l_460.f1 && l_418.f0))) , 0x77663CFEL), ((safe_mod_func_int8_t_s_s((0xCB7BL ^ l_460.f2), 0x1FL)) , 0x67AE42CBL))) < (-6L)) <= p_13), l_463))) | p_12) || 65535UL)) , (-5L)), p_10));
                        l_402 = (safe_sub_func_uint32_t_u_u((0xCAL & func_56((l_401 = (safe_mod_func_int8_t_s_s((l_482 = (p_11 = ((l_460 , func_24(func_56(g_31, g_165.f0), l_459.f2)) >= (safe_sub_func_uint32_t_u_u(0xACAC37D0L, (safe_mod_func_int16_t_s_s(0x08E0L, l_464))))))), g_5))), l_390.f4)), 4294967292UL));
                    }
                    else
                    {
                        g_108 = 0xC25B8416L;
                    }
                }
                l_418 = l_483;
                for (g_243 = (-15); (g_243 <= 39); ++g_243)
                {
                    l_483 = l_390;
                }
            }
            else
            {
                if ((safe_lshift_func_uint8_t_u_s(func_24((l_463 = (+(safe_add_func_uint16_t_u_u((!p_11), (-1L))))), g_177), 6)))
                {
                    g_108 = p_10;
                }
                else
                {
                    l_483 = g_44;
                }
                if (((p_13 = g_163) & (251UL <= g_5)))
                {
                    l_435 = g_44;
                    for (g_29 = 7; (g_29 < 21); ++g_29)
                    {
                        unsigned l_494 = 4294967295UL;
                        int l_496 = 0x3D1EC19BL;
                        l_496 = (safe_mod_func_uint8_t_u_u(((func_56(l_494, (g_108 , (safe_unary_minus_func_int32_t_s(((p_10 && ((p_12 == (((func_56((g_286 <= p_11), (l_483.f4 | l_494)) | g_243) <= g_243) < l_411)) < g_462)) && (-1L)))))) , (-5L)) <= g_448), 0x1DL));
                        l_402 = l_401;
                    }
                    return l_459.f3;
                }
                else
                {
                    unsigned char l_503 = 0UL;
                    int l_510 = 5L;
                    l_510 = ((safe_lshift_func_int16_t_s_s(p_12, 6)) && (p_11 || (l_509 = ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((~l_503), ((((safe_lshift_func_int8_t_s_s(((g_189 = (safe_sub_func_int32_t_s_s(((l_463 = ((g_165.f1 , (l_401 = p_10)) != (l_435.f0 , func_86(g_165.f0, p_12)))) && p_13), g_286))) < g_44.f4), 6)) != l_508) == 65535UL) , 1L))), 9L)) && p_10))));
                }
                l_483 = (((safe_add_func_int32_t_s_s((func_67((safe_mod_func_uint16_t_u_u(0x50ABL, (safe_lshift_func_int8_t_s_s(p_12, (safe_add_func_uint32_t_u_u((p_13 = (p_11 , func_67(p_11, g_44.f1, g_448))), l_390.f0)))))), ((safe_sub_func_int32_t_s_s((g_400 = ((l_401 = (l_459.f2 > 0x074DED6CL)) < p_10)), p_12)) , g_448), l_390.f4) , 1L), g_5)) , g_243) , l_521);
                if (g_29)
                    continue;
            }
        }
    }
    g_108 = l_27;
    l_390 = func_75(l_435, l_522, ((((p_11 ^ ((4L >= (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((p_12 < (-7L)), g_165.f0)) ^ ((safe_lshift_func_uint8_t_u_s((l_402 = ((((l_390.f3 < 9UL) , 1L) > 0x6297C236L) || 0xB043L)), p_13)) , l_435.f3)), 5))))) , (-1L))) != 1UL) | p_10) <= 0x651528A5L), p_10, l_531);
    return g_384;
}







static struct S0 func_18(unsigned short p_19, unsigned p_20, unsigned p_21, short p_22, int p_23)
{
    int l_40 = 0xA8A7E8B7L;
    int l_41 = (-1L);
    struct S0 l_45 = {3880,0x7E08A84AL,2UL,0x86F3A695L,8UL};
    int l_351 = 1L;
    int l_380 = 0x8C485DBCL;
    int l_381 = 0x285B826FL;
    unsigned l_382 = 0x2C214D5FL;
    struct S0 l_388 = {7724,1UL,0x4D9D22A2L,5UL,4UL};
    g_44 = func_33((safe_add_func_uint8_t_u_u(((4294967289UL || (((0xACA8L ^ (safe_rshift_func_uint16_t_u_s(p_20, 9))) ^ l_40) || l_40)) & ((l_41 = func_24(g_16, g_29)) && (((0L != p_23) < l_41) , g_5))), l_40)), l_40);
    g_44 = l_45;
    g_384 = (safe_sub_func_int16_t_s_s(((g_16 , (func_24((safe_sub_func_int16_t_s_s((g_383 = func_24((((l_381 = (g_5 > (safe_unary_minus_func_int8_t_s((func_24((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_add_func_int8_t_s_s(0xB0L, func_24(g_31, (l_45.f2 >= ((l_380 = ((l_41 = func_56((l_351 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((g_44.f4 && (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(p_20, (func_67(g_44.f3, p_21, g_44.f3) || 1UL))), 1))), 1)) != l_45.f1), 6))), l_45.f1)) & l_45.f0)) & p_21))))))) && p_23), l_45.f0)), p_21) , p_21))))) <= g_31) != 0x93ED229AL), l_382)), g_31)), g_31) & g_5)) , p_22), g_31));
    for (l_45.f1 = 0; (l_45.f1 < 15); l_45.f1++)
    {
        struct S0 l_387 = {1511,0x2908A865L,0xE98533E3L,4294967293UL,9UL};
        int l_389 = 0x7EF3F9C4L;
        l_388 = l_387;
        l_389 = l_387.f1;
        g_108 = l_380;
        l_388 = l_45;
    }
    return l_388;
}







static unsigned func_24(char p_25, int p_26)
{
    short l_28 = 0x8009L;
    g_29 = (l_28 = g_5);
    return p_25;
}







static struct S0 func_33(int p_34, unsigned p_35)
{
    unsigned short l_42 = 0x206CL;
    struct S0 l_43 = {1004,4UL,4294967289UL,4294967289UL,0x588DL};
    l_42 = g_31;
    return l_43;
}







static unsigned char func_56(short p_57, char p_58)
{
    unsigned l_354 = 1UL;
    unsigned short l_363 = 65533UL;
    int l_364 = 0x77B25053L;
    int l_365 = (-1L);
    l_365 = ((((safe_sub_func_uint32_t_u_u(0xA561795AL, (l_364 = (l_354 ^ (p_58 == ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((g_108 = ((((safe_add_func_int32_t_s_s(((g_189 = (9L ^ (p_57 != l_354))) , (safe_rshift_func_uint8_t_u_s((((g_165.f2 <= g_29) , p_58) , g_177), p_58))), p_57)) ^ 0xC7L) <= l_363) ^ l_354)), 0x385F3E33L)) ^ p_58), g_208)) && 4UL)))))) <= g_165.f2) , 0xC5L) > 0x9FL);
    for (l_363 = 0; (l_363 != 43); l_363 = safe_add_func_int16_t_s_s(l_363, 9))
    {
        char l_376 = (-8L);
        char l_379 = 0x7DL;
        g_108 = ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0xAD3BL ^ (g_163 = g_44.f3)), (0x9038L <= (safe_lshift_func_uint16_t_u_u(((p_57 = ((g_16 = ((p_58 >= (((safe_mod_func_uint32_t_u_u(l_376, g_44.f4)) & (-3L)) ^ (((safe_sub_func_int32_t_s_s(0x473A7802L, l_379)) ^ 7L) != (-8L)))) | g_44.f0)) <= l_363)) && g_31), 14))))), p_58)) > l_376) <= p_58) || 0L);
        g_108 = 0x96D40372L;
        g_44 = func_33(l_354, p_57);
        return g_177;
    }
    return g_165.f0;
}







static short func_67(short p_68, int p_69, int p_70)
{
    unsigned char l_71 = 252UL;
    struct S0 l_81 = {5237,0x3C92AC9EL,0x432CFC9AL,0xE810F1DDL,4UL};
    int l_93 = 0xA016E985L;
    unsigned short l_94 = 0x5762L;
    unsigned short l_97 = 0xFCBAL;
    int l_317 = 0x5E7C90FFL;
    int l_318 = 0xBA821798L;
    unsigned char l_327 = 1UL;
    struct S0 l_345 = {43,2UL,7UL,0x4E5DB3D0L,0UL};
    struct S0 l_350 = {3688,1UL,1UL,4294967291UL,65535UL};
    l_318 = ((g_44.f3 || (l_71 ^ (l_317 = (p_69 = func_24((func_72(func_75(l_81, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_70, (g_16 = func_86((l_81.f3 > (((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((l_93 = p_70) >= (l_94 > (safe_add_func_int8_t_s_s(((l_97 = p_69) | func_24((safe_lshift_func_int16_t_s_s(l_94, 5)), g_16)), g_44.f4)))), l_81.f3)) & l_81.f2), 0xB7L)) && g_5) , 0xD6L)), p_70)))), p_68)) == g_44.f0), l_81.f0, g_108, g_108), l_81.f3) || p_70), l_81.f0))))) < 0x98L);
    p_69 = ((l_81.f1 == (((func_72(l_81, l_81.f0) ^ ((l_318 = (p_69 >= (((~(l_318 || (safe_mod_func_uint16_t_u_u(p_69, (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((p_69 == ((safe_sub_func_uint16_t_u_u(g_5, (-9L))) & p_68)), 13)) | l_81.f1), p_70)))))) ^ p_70) , g_5))) ^ g_5)) > g_31) | g_31)) >= l_327);
    p_69 = ((((safe_sub_func_uint8_t_u_u(l_317, (func_72(l_81, (l_93 = (l_318 = (safe_lshift_func_int8_t_s_u(0x2EL, (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_344 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_165.f2 && l_93), (-2L))), (safe_sub_func_uint8_t_u_u(l_93, (p_68 , (func_86(g_44.f4, g_44.f2) <= 0x36A3L))))))), 4)), 2UL)), g_44.f2))))))) < p_68))) , g_44.f0) && l_81.f2) ^ 0x3DC0L);
    l_350 = func_75(l_345, (+(p_69 = (safe_rshift_func_int8_t_s_s(g_165.f4, (g_344 = (func_24(l_81.f3, g_208) != (safe_lshift_func_uint16_t_u_u(l_81.f4, (0UL < g_165.f1))))))))), p_68, g_189, p_70);
    return l_345.f2;
}







static unsigned char func_72(struct S0 p_73, unsigned char p_74)
{
    int l_114 = 0xE3D09CE0L;
    int l_123 = (-1L);
    int l_124 = (-7L);
    int l_125 = 0xFE75BA72L;
    struct S0 l_146 = {6428,0x2B34E314L,0xBE924755L,0x64F81135L,1UL};
    char l_174 = 0x48L;
    int l_247 = 0xFDDA6023L;
    unsigned short l_263 = 0x8B25L;
    int l_272 = 0x5DBA2697L;
    unsigned short l_287 = 0x2A64L;
    unsigned l_289 = 1UL;
    unsigned l_316 = 4294967295UL;
    l_125 = ((safe_lshift_func_int8_t_s_u((0x27L >= ((safe_lshift_func_int8_t_s_u(1L, 2)) | p_73.f4)), g_29)) < (((l_114 = l_114) | (safe_add_func_uint8_t_u_u((l_124 = (safe_add_func_int32_t_s_s(((l_123 = (1UL >= (g_16 > (p_74 = (safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((g_108 , (0L | p_74)), 0x4986L)) & 5UL) || l_123) == l_123), 2)))))) ^ l_124), p_73.f0))), l_125))) || (-1L)));
    if ((safe_lshift_func_uint8_t_u_u(252UL, (safe_sub_func_int8_t_s_s(p_73.f0, ((l_125 == p_73.f2) < (safe_rshift_func_int8_t_s_u((func_24(((g_44.f3 & (safe_lshift_func_uint16_t_u_u(p_73.f0, ((safe_sub_func_uint8_t_u_u(func_86((g_31 && l_114), (!g_44.f4)), g_108)) | 0xFEA996BBL)))) , 0xE4L), l_124) < g_44.f0), 2))))))))
    {
        unsigned char l_136 = 248UL;
        struct S0 l_145 = {5403,0x4C5D88C5L,0x94159496L,4294967295UL,1UL};
        int l_176 = 1L;
        struct S0 l_227 = {4341,0xF1CD69E2L,0UL,7UL,0x3D01L};
        int l_242 = 1L;
        int l_251 = 0x972E57F3L;
        int l_285 = 1L;
        int l_288 = 0x05E14E59L;
        if ((l_136 == (0x35BB462CL == (0UL < (g_44.f2 ^ ((((2UL & (func_86(l_136, g_29) <= g_44.f4)) , g_44.f0) <= p_73.f0) < 0xD9L))))))
        {
            short l_141 = 0xA549L;
            struct S0 l_148 = {3658,4294967288UL,0xF0ED02C9L,4UL,3UL};
            int l_162 = 0x20B21173L;
            int l_175 = 0x443C5982L;
            int l_222 = 0x72D0B3D7L;
            for (p_73.f1 = 6; (p_73.f1 == 48); ++p_73.f1)
            {
                if (l_141)
                    break;
            }
            if (l_136)
            {
                unsigned l_159 = 0x5AD63A6EL;
                struct S0 l_164 = {3207,0x69CC3E7FL,4294967286UL,4UL,0x86D1L};
                for (g_44.f4 = (-1); (g_44.f4 < 1); g_44.f4++)
                {
                    int l_144 = (-1L);
                    struct S0 l_147 = {6145,4294967295UL,6UL,4294967287UL,0xFE66L};
                    if (l_144)
                    {
                        l_146 = l_145;
                        if (l_123)
                            continue;
                    }
                    else
                    {
                        l_148 = l_147;
                        g_108 = (safe_sub_func_uint32_t_u_u(((g_163 = (safe_lshift_func_int16_t_s_u((-1L), ((func_24((p_74 ^ ((safe_mod_func_uint8_t_u_u(l_124, p_73.f3)) <= ((((safe_lshift_func_uint16_t_u_u(((l_144 = g_29) ^ 0x9FL), 10)) < (l_159 & (safe_add_func_uint8_t_u_u((l_159 || g_29), l_162)))) >= l_147.f1) , 0xD5L))), p_74) & p_73.f1) <= g_44.f4)))) != g_44.f2), 0x1872FA33L));
                        l_164 = g_44;
                        g_108 = p_74;
                    }
                    g_165 = g_44;
                    l_144 = ((safe_add_func_int16_t_s_s((l_159 < p_73.f3), (g_16 = func_86(l_146.f1, (g_177 = ((l_145.f0 == l_147.f4) ^ (l_176 = ((l_175 = (p_73.f4 = (l_162 = func_86((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((~(func_86((func_86(((safe_add_func_uint8_t_u_u(((g_165.f3 = g_108) & (65535UL < ((func_33((l_141 , (-1L)), g_44.f4) , (-10L)) , l_144))), l_148.f0)) == 0UL), g_31) >= g_44.f0), l_174) & 0xC57027B0L)), p_73.f3)) > g_44.f4), 3)), g_165.f1)))) != 1UL)))))))) != p_73.f0);
                    for (g_44.f1 = 0; (g_44.f1 == 19); g_44.f1 = safe_add_func_int32_t_s_s(g_44.f1, 8))
                    {
                        short l_186 = 1L;
                        l_176 = (safe_lshift_func_uint16_t_u_s(4UL, 13));
                        p_73 = func_33((safe_sub_func_int8_t_s_s((((l_164 , func_86((l_145.f4 >= 0L), p_73.f4)) ^ (l_175 = (safe_lshift_func_int8_t_s_s(((g_165.f3 && g_177) ^ (p_73.f2 >= 7L)), 0)))) | 0x88L), 6UL)), l_186);
                        if (p_74)
                            continue;
                        l_144 = (g_189 = (g_108 = ((safe_rshift_func_int16_t_s_s(g_177, 10)) || (p_73.f0 = l_164.f4))));
                    }
                }
            }
            else
            {
                unsigned l_199 = 0UL;
                int l_217 = (-3L);
                l_175 = g_165.f2;
                if ((l_162 = ((safe_rshift_func_int8_t_s_s(0xD5L, l_146.f4)) | g_44.f0)))
                {
                    unsigned char l_196 = 249UL;
                    l_196 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(func_24(l_145.f4, l_141), 13)), 2));
                    for (g_163 = 0; (g_163 != 54); g_163++)
                    {
                        l_199 = l_145.f4;
                        l_176 = g_165.f4;
                    }
                }
                else
                {
                    unsigned l_219 = 0x10608413L;
                    g_108 = p_73.f3;
                    if ((safe_rshift_func_uint8_t_u_u((p_73.f1 , (safe_mod_func_int32_t_s_s((((l_162 = (((g_177 | ((safe_mod_func_uint8_t_u_u(p_73.f0, ((g_208 = (safe_add_func_uint32_t_u_u(g_44.f4, ((l_145.f2 & (func_86(p_73.f0, p_73.f4) , (p_74 || 0L))) ^ l_145.f3)))) , g_5))) > p_73.f2)) != l_199) , p_73.f2)) & p_73.f0) <= (-7L)), g_163))), p_73.f4)))
                    {
                        int l_215 = 0x849F534FL;
                        short l_216 = 1L;
                        l_217 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((+(l_176 = ((0x6BEB426BL >= 0x25FE38C5L) || (p_73.f4 = (safe_rshift_func_uint8_t_u_u(p_73.f0, (0x07L == ((l_124 , (l_215 < (l_148.f2 == 0x15L))) <= p_73.f1)))))))), p_73.f0)) <= l_216), 0x69L));
                    }
                    else
                    {
                        int l_218 = 0x9C42605AL;
                        l_218 = func_86(l_199, g_44.f3);
                    }
                    g_108 = (func_86(func_24(g_165.f2, l_219), g_165.f0) && (p_73.f3 = p_73.f1));
                }
            }
            for (l_146.f1 = 0; (l_146.f1 != 12); l_146.f1 = safe_add_func_uint16_t_u_u(l_146.f1, 8))
            {
                unsigned l_236 = 0x9022DA0CL;
                if ((func_86((g_44.f0 , (l_222 >= ((safe_lshift_func_uint16_t_u_s(g_44.f2, 8)) <= func_86(l_136, g_165.f3)))), g_163) , (safe_add_func_int16_t_s_s(l_162, g_189))))
                {
                    char l_237 = 0x3AL;
                    int l_238 = 0L;
                    l_227 = l_146;
                    l_176 = ((safe_sub_func_uint32_t_u_u((p_73.f4 ^ (p_73.f1 > (l_238 = (((g_44.f0 , l_148.f1) , l_146.f4) && ((safe_rshift_func_int16_t_s_u(func_86(p_73.f2, (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((p_73.f0 , (l_236 && ((0x39974A84L | g_165.f2) <= l_236))), l_237)) | 6UL), l_123))), p_73.f4)) && l_174))))), 0xC21393EBL)) >= 0x6368L);
                    if (p_73.f2)
                        break;
                }
                else
                {
                    unsigned short l_239 = 0UL;
                    int l_244 = 0L;
                    g_108 = ((l_239 = ((l_145.f3 || p_73.f2) >= l_145.f4)) == ((func_24(p_73.f0, (safe_mod_func_int16_t_s_s(((g_165.f4 = p_73.f2) ^ (p_73.f4 = g_108)), p_73.f1))) ^ ((g_243 = ((g_163 = (l_242 , g_44.f4)) < l_236)) < l_244)) | l_145.f3));
                    if (g_29)
                        break;
                }
            }
        }
        else
        {
            unsigned short l_248 = 2UL;
            struct S0 l_252 = {1267,0x1D39479DL,0x1489F91FL,1UL,0xDF7BL};
            int l_264 = 1L;
            struct S0 l_265 = {2311,4294967295UL,0xC353FD0BL,8UL,65535UL};
            l_252 = func_75(((safe_rshift_func_int16_t_s_s(l_247, 3)) , func_33(((((l_176 = func_24(g_189, (func_24(g_16, l_248) & (((((((g_165.f4 > (l_248 > ((g_108 = ((safe_sub_func_int16_t_s_s((l_251 , (!l_146.f0)), 65535UL)) <= p_73.f0)) ^ g_44.f4))) || 0xF3A2L) < 0x77892577L) ^ 0x6DL) > l_248) < 0x1BL) , g_108)))) , l_227.f3) | g_5) , p_73.f1), g_31)), p_73.f0, g_165.f1, p_73.f0, l_248);
            l_264 = (g_29 != ((p_74 , ((safe_mod_func_int32_t_s_s((((p_74 <= l_251) , (safe_sub_func_uint16_t_u_u((((l_176 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_145.f3, g_165.f2)), 2))) , (((safe_sub_func_int16_t_s_s(l_227.f4, 0x0DD0L)) < l_145.f3) ^ g_243)) | (-1L)), l_263))) || 1L), g_165.f0)) | g_189)) & 3UL));
            l_252 = p_73;
            l_265 = l_146;
        }
        if ((((((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_176 = g_16), g_165.f3)), g_177)) , l_176) > g_31) & p_73.f4) != (func_24(func_24((l_125 = l_136), p_73.f2), g_5) != l_272)))
        {
            return p_73.f0;
        }
        else
        {
            unsigned l_274 = 4294967294UL;
            int l_290 = 0L;
            int l_291 = 2L;
            p_73 = (l_146 = func_33((p_73.f3 < (l_291 = (l_290 = (safe_unary_minus_func_int32_t_s(func_86((g_44.f3 = (l_289 = ((l_176 = l_274) >= (l_288 = (func_24(((safe_add_func_uint16_t_u_u((l_287 = ((l_247 = (safe_rshift_func_uint16_t_u_u(0x458DL, (g_44.f2 , (p_73.f4 = (safe_add_func_int8_t_s_s(((g_16 >= p_73.f3) || ((g_286 = ((safe_add_func_uint8_t_u_u(p_74, ((((func_24((l_285 = (safe_add_func_int16_t_s_s((l_124 && (((g_189 = ((((l_263 , p_73.f2) > 0UL) , g_44.f2) > g_243)) && g_31) && g_165.f3)), 0xA255L))), g_243) ^ l_274) , g_44.f0) || g_165.f1) ^ 0x6FAE5F79L))) , l_146.f1)) , l_174)), p_73.f4))))))) <= l_274)), g_44.f4)) || g_163), g_44.f2) && l_227.f1))))), p_73.f0)))))), l_145.f3));
            for (l_146.f4 = 0; (l_146.f4 < 48); ++l_146.f4)
            {
                unsigned char l_294 = 247UL;
                l_294 = p_73.f0;
            }
            l_124 = (safe_unary_minus_func_int16_t_s((l_125 == l_291)));
        }
        g_108 = l_227.f4;
    }
    else
    {
        int l_306 = 0L;
        int l_311 = 0L;
        l_114 = (safe_sub_func_uint32_t_u_u((0xCE2DL && (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((((l_306 ^ ((p_73.f2 , ((safe_rshift_func_uint8_t_u_s(g_165.f3, ((((l_247 = l_306) || (l_306 ^ (g_16 = ((g_189 = (safe_lshift_func_uint8_t_u_u(((l_247 = (l_311 = l_306)) , (safe_rshift_func_int8_t_s_u(0xF2L, 2))), 3))) , (g_163 = (((p_74 = (safe_rshift_func_int16_t_s_u((g_165.f1 ^ g_44.f0), g_44.f1))) || g_286) ^ 0x84L)))))) && p_74) <= 0L))) , l_316)) , p_73.f1)) | p_73.f0) , 0UL), g_44.f1)) ^ p_73.f2), l_306)) || g_29) || p_73.f1), l_263)), 15))), 4294967295UL));
    }
    g_108 = g_165.f2;
    return p_73.f0;
}







static struct S0 func_75(struct S0 p_76, int p_77, int p_78, unsigned p_79, char p_80)
{
    unsigned l_109 = 4294967286UL;
    g_108 = (5UL < (p_80 , l_109));
    g_44 = (l_109 , p_76);
    return g_44;
}







static unsigned short func_86(unsigned p_87, short p_88)
{
    unsigned l_100 = 0xEF1402E7L;
    int l_105 = (-4L);
    l_105 = (func_24(l_100, g_5) || ((safe_add_func_uint8_t_u_u(l_100, (((l_100 | (0x3227D8CFL > (func_24(g_16, func_24(g_44.f3, ((safe_lshift_func_int8_t_s_u((g_5 > p_87), 2)) , l_100))) , l_100))) & p_88) || 0UL))) > g_44.f0));
    l_105 = (safe_rshift_func_int16_t_s_u(g_44.f4, 0));
    return g_44.f2;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2, "g_44.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_165.f4, "g_165.f4", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
