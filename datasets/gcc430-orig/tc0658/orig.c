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



static int g_3 = 0x198A8F93L;
static volatile unsigned g_14 = 4294967288UL;
static unsigned g_30 = 0UL;
static short g_35 = 0L;
static unsigned g_55 = 0x458A922AL;
static unsigned *g_54 = &g_55;
static int g_58 = 0xA907865EL;
static int g_72 = 1L;
static unsigned short g_95 = 0x84D2L;
static short g_110 = 8L;
static unsigned char g_132 = 255UL;
static volatile int g_134 = (-5L);
static volatile int *g_133 = &g_134;
static char g_161 = (-1L);
static char g_169 = 0x9DL;
static unsigned g_202 = 0x218BD48EL;
static unsigned short g_244 = 0xE0BAL;
static volatile unsigned g_251 = 4294967293UL;
static volatile short **g_282 = (void*)0;
static int g_305 = 0xAC6A7184L;
static volatile int g_384 = 0L;
static int g_386 = 0x59786D45L;
static short g_404 = (-9L);
static unsigned **g_437 = &g_54;
static unsigned ***g_436 = &g_437;
static volatile unsigned short g_625 = 4UL;
static short g_666 = 0x9B64L;
static int *g_777 = &g_3;
static int **g_776 = &g_777;
static int g_871 = 0x1204D076L;
static volatile short g_919 = 0xBA4CL;
static volatile unsigned short g_924 = 0x1167L;
static unsigned ***g_963 = (void*)0;
static unsigned char g_989 = 0xA1L;
static unsigned ****g_990 = &g_963;
static unsigned g_997 = 4294967290UL;
static unsigned short g_1007 = 0xF860L;



static char func_1(void);
static int * func_17(int * p_18, unsigned p_19);
static int * func_20(char p_21);
static short func_24(int * p_25, short p_26, short p_27, int * p_28);
static int * func_31(short p_32, unsigned * p_33);
static unsigned * func_36(unsigned p_37, unsigned * p_38);
static unsigned * func_39(unsigned short p_40, int p_41, unsigned char p_42, char p_43);
static unsigned short func_44(unsigned p_45, unsigned * p_46, char p_47, unsigned short p_48);
static unsigned * func_49(short * p_50, unsigned * p_51, short p_52, unsigned char p_53);
static unsigned short func_85(unsigned p_86, char p_87, unsigned * p_88);
static char func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = &g_3;
    int *l_5 = &g_3;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = (void*)0;
    int *l_9 = &g_3;
    int *l_10 = &g_3;
    int *l_11 = &g_3;
    int *l_12 = &g_3;
    int *l_13 = &g_3;
    unsigned *l_29 = &g_30;
    short *l_34 = &g_35;
    int l_56 = 0x75CF8B87L;
    unsigned **l_275 = &g_54;
    unsigned l_933 = 0x9F8575E4L;
    int **l_958 = &l_6;
    int l_959 = 0xC5EA3A8EL;
    unsigned ****l_962 = &g_436;
    unsigned *l_964 = &g_202;
    char *l_965 = &g_169;
    unsigned short l_975 = 65534UL;
    int l_978 = (-1L);
    unsigned l_1008 = 0xA093A2CDL;
    unsigned l_1009 = 0x043BC3CBL;
    --g_14;
    (*l_958) = func_17(func_20((0x39L == ((safe_lshift_func_int16_t_s_s(func_24(&g_3, (((*l_29) = 2UL) >= (*l_12)), (*l_11), func_31(((*l_34) = (*l_9)), ((*l_275) = func_36((*l_9), ((*l_275) = func_39(func_44(g_3, func_49(l_34, g_54, l_56, g_14), (*l_7), g_3), (*l_12), (*l_6), g_3)))))), g_871)) == l_933))), g_871);
    if (((+((((l_959 & (safe_sub_func_uint8_t_u_u(((**l_958) <= ((*l_6) > ((*l_965) &= ((l_962 == &g_436) < func_44(((*l_964) = (*l_5)), (*l_275), g_30, (*l_4)))))), 0L))) != (*l_2)) < g_666) | (**l_958))) || 0x8D54L))
    {
        int l_968 = 0x80D6F434L;
        (*l_7) = ((**l_958) = (safe_rshift_func_uint8_t_u_s(g_132, (~((l_968 == (1UL == l_968)) > l_968)))));
        for (g_58 = (-2); (g_58 <= 2); ++g_58)
        {
            short l_973 = 4L;
            (*l_9) |= (safe_lshift_func_uint16_t_u_u(l_973, 1));
            (*l_10) &= ((**l_958) = 0L);
            return l_968;
        }
    }
    else
    {
        int *l_974 = &g_3;
        unsigned ***l_987 = &g_437;
        unsigned char *l_988 = &g_989;
        unsigned ****l_991 = (void*)0;
        (*l_958) = l_974;
        --l_975;
        if (((((*l_988) = (g_132 = g_384)) >= g_55) & 0x0FL))
        {
            int *l_992 = (void*)0;
            int *l_993 = &g_871;
            short *l_994 = &g_666;
            short **l_995 = &l_994;
            unsigned *l_996 = &g_202;
            unsigned short *l_1004 = &l_975;
            unsigned short *l_1005 = &g_244;
            unsigned short *l_1006 = &g_1007;
            (*l_6) = ((l_991 = g_990) != l_962);
            (*l_993) ^= (*l_974);
            (*g_776) = func_20((1L != (*l_993)));
            l_974 = (*g_776);
        }
        else
        {
            return g_1007;
        }
        l_1009--;
    }
    return g_58;
}







static int * func_17(int * p_18, unsigned p_19)
{
    short l_956 = 0x8686L;
    int *l_957 = &g_871;
    (*p_18) = (l_956 != (*p_18));
    return l_957;
}







static int * func_20(char p_21)
{
    unsigned short *l_936 = (void*)0;
    unsigned short *l_937 = (void*)0;
    unsigned short *l_938 = &g_244;
    unsigned *l_943 = &g_55;
    int l_949 = 0xFBD0AD1CL;
    short *l_950 = (void*)0;
    short *l_951 = &g_35;
    int *l_952 = &g_305;
    int *l_954 = &g_72;
    int *l_955 = &g_305;
    if ((safe_mul_func_int8_t_s_s(((((((p_21 >= (0x7187L <= p_21)) > ((*l_938)++)) ^ g_384) != (safe_rshift_func_int16_t_s_u(func_44(p_21, l_943, ((safe_add_func_uint16_t_u_u(1UL, (((*l_952) = (0x5EF47BC0L ^ (((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s(((*l_951) = l_949), g_871)))) != p_21) <= p_21))) > p_21))) || g_58), g_386), 9))) == l_949) && g_30), g_666)))
    {
        int **l_953 = &l_952;
        (*l_953) = ((*g_776) = &l_949);
        return l_954;
    }
    else
    {
        (*l_954) |= p_21;
        (*l_952) |= 0L;
    }
    return l_955;
}







static short func_24(int * p_25, short p_26, short p_27, int * p_28)
{
    int l_413 = 0xD1D02CFCL;
    int l_420 = 0x9F690D16L;
    unsigned *l_427 = &g_30;
    unsigned **l_612 = &g_54;
    unsigned short l_627 = 0UL;
    int l_658 = 0x8926852DL;
    int l_751 = 0x2CE0FBE8L;
    for (g_202 = 23; (g_202 <= 1); g_202 = safe_sub_func_uint32_t_u_u(g_202, 9))
    {
        unsigned short l_426 = 0x207BL;
        int l_479 = 0xE65520F5L;
        int l_521 = 0x1743E5C0L;
        int l_544 = 8L;
        int l_551 = (-1L);
        unsigned l_599 = 0x24F58DC4L;
        short l_602 = (-5L);
        l_413 ^= (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(g_404, 3)) ^ (((0x66A3L & 4UL) <= g_35) | p_27)), (*p_25)));
        for (g_58 = 0; (g_58 > (-21)); --g_58)
        {
            unsigned short *l_416 = &g_95;
            int l_441 = 0xB6F2C5EEL;
            int l_484 = 0L;
            int l_523 = (-9L);
            int l_531 = 0xF7BAFEBAL;
            int *l_552 = (void*)0;
            int *l_553 = &g_386;
            int *l_554 = &l_523;
            int *l_555 = &l_544;
            int *l_556 = &l_484;
            int *l_557 = &l_484;
            int *l_558 = (void*)0;
            int *l_559 = (void*)0;
            int *l_560 = &l_479;
            int *l_561 = &l_479;
            int *l_562 = (void*)0;
            int *l_563 = &l_479;
            int *l_564 = &l_479;
            int *l_565 = &l_544;
            int *l_566 = (void*)0;
            int *l_567 = &g_3;
            int *l_568 = &g_72;
            int *l_569 = &g_386;
            int *l_570 = &g_72;
            int *l_571 = &l_544;
            int *l_572 = &l_551;
            int *l_573 = (void*)0;
            int *l_574 = &l_523;
            int *l_575 = &g_72;
            int *l_576 = (void*)0;
            int *l_577 = &l_551;
            int *l_578 = &l_544;
            int *l_579 = &l_544;
            int *l_580 = &l_441;
            int *l_581 = (void*)0;
            int *l_582 = &l_523;
            int *l_583 = (void*)0;
            int *l_584 = &l_413;
            int *l_585 = &g_386;
            int *l_586 = &l_420;
            int *l_587 = &l_484;
            int *l_588 = (void*)0;
            int *l_589 = (void*)0;
            int *l_590 = &l_420;
            int *l_591 = &l_420;
            int *l_592 = &l_484;
            int *l_593 = (void*)0;
            int *l_594 = &l_420;
            int *l_595 = &g_386;
            int *l_596 = (void*)0;
            int *l_597 = &l_551;
            int *l_598 = &l_531;
            unsigned l_605 = 0x96822E51L;
            char *l_606 = &g_169;
            short *l_607 = &g_110;
            int **l_608 = &l_557;
            if (((--(*l_416)) & 7L))
            {
                char *l_419 = &g_161;
                short *l_421 = &g_110;
                int *l_429 = &l_413;
                int **l_428 = &l_429;
                (*p_28) = (*p_28);
                (*l_428) = func_31(((*l_421) ^= (((((*l_419) = (-5L)) && (l_413 = g_202)) | l_420) <= 1L)), func_31((((l_421 != (void*)0) != (((*p_25) = (*p_28)) > ((safe_rshift_func_uint8_t_u_s((l_420 & ((safe_sub_func_int16_t_s_s(p_26, l_426)) >= 0x16691D69L)), p_26)) != l_426))) || 3L), l_427));
                (*l_428) = func_31(g_132, l_427);
                (**l_428) = (*l_429);
            }
            else
            {
                unsigned char l_450 = 255UL;
                int *l_454 = &g_58;
                int **l_453 = &l_454;
                int l_490 = 0xEE71F5CCL;
                unsigned short l_548 = 65534UL;
                for (p_27 = 8; (p_27 <= (-24)); --p_27)
                {
                    unsigned ***l_434 = (void*)0;
                    unsigned ****l_435 = &l_434;
                    int l_438 = (-2L);
                    int *l_442 = (void*)0;
                    int *l_443 = &g_305;
                    int *l_444 = &g_72;
                    int *l_445 = &l_438;
                    int *l_446 = &l_420;
                    int *l_447 = &g_305;
                    int *l_448 = &l_420;
                    int *l_449 = &g_72;
                    l_438 = (safe_add_func_uint32_t_u_u((((*l_435) = l_434) != g_436), g_251));
                    (*l_443) &= ((*p_25) ^= ((*p_28) = (safe_sub_func_int16_t_s_s(((l_441 = p_27) | l_413), l_420))));
                    l_450++;
                    (*l_445) = ((l_441 ^= ((*l_416) = l_426)) & 0x00E5L);
                }
                (*l_453) = func_31(g_251, func_31(l_413, (*g_437)));
                for (g_110 = 9; (g_110 < 19); g_110++)
                {
                    for (l_420 = 0; (l_420 != 21); l_420++)
                    {
                        int *l_459 = &l_441;
                        int *l_460 = &g_386;
                        int *l_461 = &l_413;
                        int *l_462 = &l_441;
                        int *l_463 = &g_3;
                        int *l_464 = &g_72;
                        int *l_465 = &l_413;
                        int *l_466 = &l_413;
                        int *l_467 = &g_72;
                        int *l_468 = &l_413;
                        int *l_469 = &g_3;
                        int *l_470 = &g_386;
                        int *l_471 = &g_386;
                        int *l_472 = &g_305;
                        int *l_473 = &g_3;
                        int *l_474 = &g_72;
                        int *l_475 = &l_413;
                        int *l_476 = &l_413;
                        int *l_477 = &g_72;
                        int *l_478 = &g_3;
                        int *l_480 = &g_3;
                        int l_481 = 9L;
                        int *l_482 = &g_305;
                        int *l_483 = &l_481;
                        int l_485 = 4L;
                        int *l_486 = &g_386;
                        int *l_487 = &l_441;
                        int *l_488 = &l_481;
                        int *l_489 = &g_305;
                        int *l_491 = &l_490;
                        int *l_492 = &l_484;
                        int *l_493 = &l_479;
                        int *l_494 = &g_305;
                        int *l_495 = &l_441;
                        int *l_496 = &g_386;
                        int *l_497 = &l_490;
                        int *l_498 = &g_305;
                        int *l_499 = &l_413;
                        int *l_500 = &g_386;
                        int *l_501 = &g_305;
                        int *l_502 = &l_484;
                        int *l_503 = &l_490;
                        int *l_504 = &l_485;
                        int *l_505 = &g_3;
                        int *l_506 = &l_441;
                        int l_507 = 0xBE2534F4L;
                        int *l_508 = &l_507;
                        int *l_509 = (void*)0;
                        int *l_510 = &g_3;
                        int *l_511 = (void*)0;
                        int *l_512 = (void*)0;
                        int *l_513 = &g_386;
                        int *l_514 = &l_490;
                        int *l_515 = (void*)0;
                        int *l_516 = &l_413;
                        int *l_517 = &l_484;
                        int *l_518 = (void*)0;
                        int *l_519 = &l_484;
                        int *l_520 = &g_3;
                        int *l_522 = &g_72;
                        int *l_524 = &l_479;
                        int *l_525 = &l_485;
                        int *l_526 = &l_523;
                        int *l_527 = &l_484;
                        int *l_528 = &l_490;
                        int *l_529 = &l_507;
                        int *l_530 = &l_523;
                        int *l_532 = &g_386;
                        int *l_533 = (void*)0;
                        int *l_534 = (void*)0;
                        int *l_535 = &l_481;
                        int *l_536 = &g_72;
                        int *l_537 = &l_521;
                        int *l_538 = &g_386;
                        int *l_539 = &g_305;
                        int *l_540 = (void*)0;
                        int *l_541 = &l_479;
                        int *l_542 = &g_72;
                        int *l_543 = &l_485;
                        int *l_545 = &g_386;
                        int *l_546 = (void*)0;
                        int l_547 = 0x8588C8B5L;
                        l_548--;
                        (*l_454) = ((void*)0 != &l_454);
                        (*l_520) ^= l_551;
                        return (*l_522);
                    }
                }
            }
            l_599++;
            (*l_608) = func_31(g_161, func_31(l_602, func_31(((*l_607) = ((safe_mod_func_int8_t_s_s(0x87L, ((*l_606) = l_605))) > p_27)), (*g_437))));
        }
        return l_544;
    }
    for (g_244 = 0; (g_244 <= 8); ++g_244)
    {
        unsigned **l_611 = &l_427;
        p_28 = &l_420;
        (*p_25) = (((*g_436) = l_611) == (l_612 = l_611));
    }
    (*p_28) = (!(safe_mul_func_uint8_t_u_u((g_58 >= ((safe_sub_func_int8_t_s_s(p_27, p_27)) & l_413)), g_134)));
    for (g_95 = 0; (g_95 > 12); g_95 = safe_add_func_uint32_t_u_u(g_95, 7))
    {
        unsigned char l_626 = 0x43L;
        volatile int **l_628 = &g_133;
        char l_631 = 0L;
        char *l_633 = (void*)0;
        char **l_632 = &l_633;
        char ***l_634 = (void*)0;
        char ***l_635 = &l_632;
        unsigned short *l_662 = (void*)0;
        unsigned short **l_661 = &l_662;
        int l_682 = 0x34B520F0L;
        int l_690 = 0x2CC46ED3L;
        int l_757 = 0xC4627E3AL;
        int l_769 = 0xEC795900L;
        int l_843 = 1L;
        g_3 ^= ((*p_28) = ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_27 >= func_44((safe_mul_func_int8_t_s_s(l_420, g_625)), func_39((0x1645A4BCL != 0xB2854FA9L), g_161, p_27, l_626), l_626, l_627)), g_110)), g_305)) || 0x2EL));
        (*l_628) = &g_134;
        if ((((safe_sub_func_int16_t_s_s(l_631, (((*l_635) = l_632) != (void*)0))) || 252UL) == ((*p_25) == (**l_628))))
        {
            int *l_641 = &l_413;
            int **l_640 = &l_641;
            (*p_25) = 4L;
            (*l_640) = func_31(((safe_rshift_func_uint8_t_u_s(p_27, 3)) < ((*l_427) |= (**l_628))), (g_54 = p_25));
        }
        else
        {
            unsigned char l_648 = 0x34L;
            int l_651 = 0x505DB891L;
            short *l_659 = (void*)0;
            short *l_660 = &g_404;
            unsigned char l_772 = 0xE6L;
            int l_839 = 0L;
            int l_847 = 0x0FC77DC7L;
            int l_865 = 0xEF068E41L;
            if (((((p_27 > p_27) ^ (safe_sub_func_int32_t_s_s((func_44((((safe_lshift_func_uint16_t_u_s(0xD6C4L, 15)) && (safe_add_func_uint32_t_u_u(0x4552CEB1L, func_44(l_648, func_31(((*l_660) = func_44((safe_mod_func_int32_t_s_s(((*p_28) && (((*l_427) = (l_651 |= p_27)) & (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((((0xFEL == g_14) ^ 0xBD76AEBEL) && (**l_628)) && 0L), l_420)), 7)), l_648)))), 0xCCDF0915L)), (**g_436), l_658, l_627)), p_25), p_27, l_627)))) == 0L), (*g_437), p_27, l_648) | 1L), l_648))) != 0xF2953311L) && 65535UL))
            {
                unsigned short ***l_663 = &l_661;
                int l_681 = (-2L);
                int l_685 = 0x44C40334L;
                int l_765 = 8L;
                (*l_663) = l_661;
                if (g_625)
                    break;
                if ((safe_add_func_uint32_t_u_u((l_413 || ((p_26 || p_27) | (p_27 == (247UL >= g_161)))), (g_666 = (!((void*)0 != p_28))))))
                {
                    int *l_667 = &g_58;
                    int *l_668 = &g_3;
                    int *l_669 = &l_658;
                    int *l_670 = &l_651;
                    int *l_671 = &g_58;
                    int *l_672 = &g_72;
                    int *l_673 = &l_413;
                    int *l_674 = &l_420;
                    int *l_675 = &g_3;
                    int *l_676 = (void*)0;
                    int *l_677 = &l_651;
                    int *l_678 = &g_3;
                    int *l_679 = (void*)0;
                    int *l_680 = &g_3;
                    int *l_683 = (void*)0;
                    int *l_684 = &g_58;
                    int *l_686 = &l_420;
                    int *l_687 = &l_658;
                    int *l_688 = &g_305;
                    int *l_689 = &l_685;
                    int *l_691 = &l_681;
                    int *l_692 = &l_651;
                    int *l_693 = &l_690;
                    int *l_694 = &g_3;
                    int *l_695 = (void*)0;
                    int *l_696 = &l_413;
                    int *l_697 = &g_58;
                    int *l_698 = &l_413;
                    int *l_699 = (void*)0;
                    int *l_700 = &g_3;
                    int *l_701 = &l_682;
                    int *l_702 = &g_305;
                    int *l_703 = (void*)0;
                    int *l_704 = &l_413;
                    int l_705 = (-5L);
                    int *l_706 = &g_3;
                    int *l_707 = (void*)0;
                    int *l_708 = &l_651;
                    int *l_709 = &l_681;
                    int *l_710 = &g_386;
                    int *l_711 = (void*)0;
                    int *l_712 = &g_386;
                    int *l_713 = &g_58;
                    int *l_714 = &g_305;
                    int *l_715 = &l_413;
                    int *l_716 = &l_658;
                    int *l_717 = (void*)0;
                    int *l_718 = &g_305;
                    int *l_719 = &l_685;
                    int *l_720 = (void*)0;
                    int *l_721 = &g_58;
                    int *l_722 = &g_3;
                    int *l_723 = &g_72;
                    int *l_724 = &g_305;
                    int *l_725 = &l_413;
                    int *l_726 = (void*)0;
                    int l_727 = 0xDBB26A68L;
                    int *l_728 = &l_413;
                    int *l_729 = &l_682;
                    int *l_730 = &g_386;
                    int *l_731 = (void*)0;
                    int *l_732 = &g_386;
                    int *l_733 = &l_682;
                    int *l_734 = &g_3;
                    int *l_735 = (void*)0;
                    int *l_736 = &g_58;
                    int *l_737 = (void*)0;
                    int *l_738 = (void*)0;
                    int *l_739 = (void*)0;
                    int *l_740 = &g_386;
                    int *l_741 = &g_305;
                    int *l_742 = &g_305;
                    int *l_743 = &l_420;
                    int *l_744 = &l_682;
                    int *l_745 = &l_727;
                    int *l_746 = &l_420;
                    int *l_747 = &g_305;
                    int *l_748 = &g_58;
                    int *l_749 = &l_705;
                    int *l_750 = &l_685;
                    int *l_752 = &l_727;
                    int *l_753 = &g_386;
                    int *l_754 = &g_3;
                    int *l_755 = &g_3;
                    int *l_756 = &l_751;
                    int *l_758 = &l_751;
                    int *l_759 = &g_386;
                    int *l_760 = &g_58;
                    int *l_761 = (void*)0;
                    int *l_762 = &l_420;
                    int *l_763 = (void*)0;
                    int *l_764 = &l_685;
                    int *l_766 = &g_58;
                    int *l_767 = (void*)0;
                    int *l_768 = (void*)0;
                    int *l_770 = &l_685;
                    int *l_771 = &g_58;
                    l_772--;
                }
                else
                {
                    int l_775 = 0xCE89328CL;
                    int *l_779 = &l_765;
                    if (l_658)
                    {
                        int ***l_778 = &g_776;
                        (*p_28) = ((l_751 ^= l_775) >= ((((*l_778) = g_776) == &p_28) & l_772));
                    }
                    else
                    {
                        int l_780 = 0x633E6D08L;
                        l_779 = p_28;
                        (*p_28) = ((*l_779) <= 255UL);
                        return p_27;
                    }
                }
            }
            else
            {
                unsigned short l_785 = 1UL;
                int *l_800 = &l_757;
                int l_804 = 0L;
                int l_817 = 0L;
                int l_832 = 0x975AA257L;
                int l_834 = 0x81D13111L;
                if (((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(l_785, (l_627 | (g_244 = (safe_sub_func_int16_t_s_s((g_666 | (((*g_776) = func_39(g_58, ((safe_add_func_uint8_t_u_u(g_35, ((void*)0 == &g_132))) == (safe_mul_func_uint16_t_u_u(((g_666 & (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_72, p_27)), p_27)), l_785)), 2))) > 0x9C4CB7AFL), l_658))), p_27, l_785)) == l_800)), 0xF901L)))))) > p_27), 3)) < 65535UL) || (-6L)) | p_27))
                {
                    int *l_801 = &l_651;
                    int *l_802 = &l_769;
                    int *l_803 = &g_305;
                    int *l_805 = &l_658;
                    int *l_806 = &l_413;
                    int *l_807 = &l_651;
                    int *l_808 = &l_804;
                    int *l_809 = &l_413;
                    int *l_810 = &g_3;
                    int *l_811 = &l_658;
                    int *l_812 = &g_305;
                    int *l_813 = (void*)0;
                    int *l_814 = &g_386;
                    int *l_815 = &l_769;
                    int *l_816 = &g_3;
                    int *l_818 = (void*)0;
                    int *l_819 = &l_690;
                    int *l_820 = &l_658;
                    int *l_821 = &l_420;
                    int *l_822 = &g_386;
                    int *l_823 = &l_420;
                    int *l_824 = &l_817;
                    int *l_825 = &l_804;
                    int *l_826 = &l_769;
                    int *l_827 = (void*)0;
                    int *l_828 = &l_804;
                    int *l_829 = &l_817;
                    int *l_830 = &g_305;
                    int *l_831 = &l_413;
                    int *l_833 = &l_420;
                    int *l_835 = &l_834;
                    int *l_836 = &g_58;
                    int *l_837 = &g_305;
                    int *l_838 = (void*)0;
                    int *l_840 = &g_58;
                    int *l_841 = &g_386;
                    int *l_842 = &l_804;
                    int *l_844 = &l_834;
                    int *l_845 = &l_832;
                    int *l_846 = &l_690;
                    int *l_848 = &l_651;
                    int *l_849 = &g_58;
                    int *l_850 = &l_658;
                    int *l_851 = &g_386;
                    int *l_852 = &l_413;
                    int *l_853 = &g_305;
                    int *l_854 = &l_413;
                    int *l_855 = &l_413;
                    int *l_856 = &l_658;
                    int *l_857 = &l_804;
                    int *l_858 = &l_834;
                    int *l_859 = &l_658;
                    int *l_860 = &l_420;
                    int *l_861 = (void*)0;
                    int *l_862 = &g_58;
                    int *l_863 = &l_817;
                    int *l_864 = &l_817;
                    int *l_866 = &l_832;
                    int *l_867 = &l_847;
                    int *l_868 = &g_3;
                    int *l_869 = (void*)0;
                    int *l_870 = &l_843;
                    int *l_872 = &l_839;
                    unsigned l_873 = 0UL;
                    --l_873;
                }
                else
                {
                    (*p_28) = (*p_28);
                }
            }
            for (g_161 = (-25); (g_161 != (-26)); g_161 = safe_sub_func_uint32_t_u_u(g_161, 8))
            {
                int *l_878 = &g_72;
                int *l_879 = &g_305;
                int *l_880 = (void*)0;
                int *l_881 = (void*)0;
                int *l_882 = &l_751;
                int *l_883 = &g_386;
                int *l_884 = &g_72;
                int l_885 = 0x4F5F4F60L;
                int *l_886 = (void*)0;
                int *l_887 = &l_847;
                int *l_888 = &g_58;
                int *l_889 = &g_58;
                int *l_890 = &l_843;
                int *l_891 = &l_751;
                int *l_892 = (void*)0;
                int *l_893 = &g_871;
                int *l_894 = (void*)0;
                int *l_895 = &l_413;
                int *l_896 = &l_885;
                int *l_897 = &l_651;
                int *l_898 = &l_885;
                int *l_899 = (void*)0;
                int *l_900 = &l_757;
                int *l_901 = &l_658;
                int *l_902 = (void*)0;
                int *l_903 = &l_658;
                int *l_904 = &l_658;
                int *l_905 = (void*)0;
                int *l_906 = (void*)0;
                int *l_907 = &l_651;
                int *l_908 = (void*)0;
                int *l_909 = (void*)0;
                int *l_910 = &l_682;
                int *l_911 = (void*)0;
                int *l_912 = (void*)0;
                int *l_913 = &g_871;
                int l_914 = 0xFBFF3141L;
                int l_915 = 0x6229B707L;
                int *l_916 = (void*)0;
                int *l_917 = &g_3;
                int *l_918 = (void*)0;
                int *l_920 = &g_386;
                int *l_921 = &l_885;
                int *l_922 = &l_751;
                int *l_923 = &l_843;
            }
            (*g_776) = &l_847;
        }
        for (l_690 = (-23); (l_690 == (-7)); l_690++)
        {
            (*p_25) |= (safe_lshift_func_uint16_t_u_s(g_132, 3));
        }
    }
    return p_27;
}







static int * func_31(short p_32, unsigned * p_33)
{
    int l_402 = 0x09B5F3F9L;
    int *l_403 = &l_402;
    unsigned **l_406 = &g_54;
    unsigned ***l_405 = &l_406;
    g_404 &= ((*l_403) = (safe_add_func_uint16_t_u_u(0x9D25L, l_402)));
    (*l_405) = &p_33;
    g_133 = (void*)0;
    (*l_403) &= (-1L);
    return &g_386;
}







static unsigned * func_36(unsigned p_37, unsigned * p_38)
{
    int *l_276 = (void*)0;
    int *l_277 = (void*)0;
    short *l_281 = (void*)0;
    short **l_280 = &l_281;
    int l_292 = 0x5D022B33L;
    unsigned l_300 = 4294967288UL;
    int l_329 = 0xF0A70CCFL;
    int l_360 = 0x454AFB46L;
    int l_363 = 3L;
    g_58 &= p_37;
    if ((safe_mul_func_int16_t_s_s(((l_280 = (void*)0) == g_282), (-8L))))
    {
        int *l_283 = (void*)0;
        int **l_284 = &l_283;
        short *l_287 = &g_110;
        int *l_293 = &g_58;
        unsigned short *l_296 = &g_244;
        unsigned l_299 = 3UL;
        int *l_303 = (void*)0;
        int *l_304 = &g_305;
        (*l_284) = l_283;
        (*l_293) = (safe_lshift_func_uint8_t_u_u((g_110 | (l_287 == l_287)), ((safe_rshift_func_int16_t_s_u(((+(safe_mod_func_uint16_t_u_u(p_37, l_292))) && g_72), 5)) == g_110)));
        (*l_304) &= (safe_rshift_func_uint16_t_u_s(func_85((g_251 | ((*l_293) > p_37)), (((*l_296) = (p_37 < l_292)) != ((g_72 = ((safe_add_func_uint8_t_u_u((l_299 ^ l_300), ((+(safe_mod_func_uint16_t_u_u((((((g_161 | p_37) | 0x2B659617L) && g_55) == (*l_293)) || (*l_293)), g_3))) | g_58))) != p_37)) || (-6L))), &g_202), 15));
    }
    else
    {
        int l_308 = 0xC4BEF2EFL;
        int *l_311 = &g_305;
        int l_327 = 4L;
        int l_343 = 0L;
        int l_356 = 0xE93F746AL;
        unsigned l_390 = 0x0E47E4D3L;
        for (g_58 = 9; (g_58 <= (-17)); --g_58)
        {
            short l_312 = 1L;
            int l_399 = 1L;
            if (l_308)
                break;
            for (g_244 = 8; (g_244 <= 10); g_244 = safe_add_func_uint16_t_u_u(g_244, 4))
            {
                int *l_313 = &l_308;
                int *l_314 = &l_308;
                int *l_315 = (void*)0;
                int *l_316 = &l_308;
                int *l_317 = &l_308;
                int *l_318 = &g_72;
                int *l_319 = &g_305;
                int *l_320 = &l_308;
                int *l_321 = &g_72;
                int *l_322 = &l_308;
                int *l_323 = &g_305;
                int *l_324 = &g_72;
                int *l_325 = &g_72;
                int *l_326 = &g_72;
                int *l_328 = &l_327;
                int *l_330 = &l_329;
                int *l_331 = &g_72;
                int *l_332 = (void*)0;
                int *l_333 = &l_327;
                int *l_334 = (void*)0;
                int *l_335 = &g_305;
                int *l_336 = &l_327;
                int *l_337 = &g_72;
                int *l_338 = &g_305;
                int *l_339 = (void*)0;
                int *l_340 = &l_327;
                int *l_341 = &g_305;
                int *l_342 = &l_329;
                int *l_344 = (void*)0;
                int *l_345 = &l_308;
                int *l_346 = &l_327;
                int *l_347 = (void*)0;
                int *l_348 = &l_327;
                int *l_349 = (void*)0;
                int *l_350 = &l_343;
                int *l_351 = &g_72;
                int *l_352 = &l_327;
                int l_353 = 0x937E0F49L;
                int *l_354 = (void*)0;
                int *l_355 = &g_305;
                int *l_357 = (void*)0;
                int *l_358 = &l_329;
                int *l_359 = &l_329;
                int *l_361 = (void*)0;
                int *l_362 = &g_305;
                int *l_364 = (void*)0;
                int *l_365 = &g_72;
                int *l_366 = &l_343;
                int *l_367 = &l_353;
                int *l_368 = &l_327;
                int *l_369 = &l_329;
                int *l_370 = &l_353;
                int *l_371 = &l_329;
                int *l_372 = &l_343;
                int *l_373 = &g_72;
                int *l_374 = &l_343;
                int *l_375 = &l_360;
                int *l_376 = (void*)0;
                int *l_377 = (void*)0;
                int *l_378 = &l_308;
                int *l_379 = (void*)0;
                int *l_380 = &g_305;
                int *l_381 = &l_329;
                int *l_382 = (void*)0;
                int *l_383 = (void*)0;
                int *l_385 = &l_343;
                int *l_387 = &g_386;
                int *l_388 = &l_353;
                int l_389 = 1L;
                l_311 = (void*)0;
                l_390--;
                (*l_338) = ((*l_381) &= (l_399 ^= ((((safe_mul_func_int16_t_s_s((*l_362), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((-1L) < g_72), 13)), 1)))) && p_37) | p_37) == g_132)));
            }
        }
        return l_311;
    }
    return &g_202;
}







static unsigned * func_39(unsigned short p_40, int p_41, unsigned char p_42, char p_43)
{
    int l_273 = 9L;
    int *l_274 = &g_58;
    (*l_274) |= (l_273 && g_132);
    return l_274;
}







static unsigned short func_44(unsigned p_45, unsigned * p_46, char p_47, unsigned short p_48)
{
    int *l_269 = (void*)0;
    int *l_270 = &g_58;
    short *l_271 = &g_110;
    int *l_272 = &g_72;
    (*l_270) = p_47;
    (*l_272) = ((*l_270) = ((!(l_271 != (void*)0)) != g_95));
    return g_161;
}







static unsigned * func_49(short * p_50, unsigned * p_51, short p_52, unsigned char p_53)
{
    int *l_57 = &g_58;
    int *l_59 = &g_58;
    int *l_60 = &g_58;
    int *l_61 = &g_58;
    int *l_62 = &g_58;
    int *l_63 = &g_58;
    int *l_64 = &g_58;
    int *l_65 = &g_58;
    int *l_66 = &g_58;
    int *l_67 = &g_58;
    int l_68 = 4L;
    int *l_69 = &l_68;
    int *l_70 = &l_68;
    int *l_71 = &l_68;
    int *l_73 = &g_58;
    int *l_74 = &l_68;
    int *l_75 = &l_68;
    int l_76 = 0L;
    int l_77 = 1L;
    unsigned char l_78 = 8UL;
    char *l_168 = &g_169;
    unsigned l_170 = 1UL;
    unsigned char l_267 = 0x9BL;
    unsigned l_268 = 0xAA89525BL;
    ++l_78;
    if ((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_85((p_53 != (((*l_73) >= (!(safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_95 = ((*p_51) = (*l_60))), (*l_71))), (safe_sub_func_uint16_t_u_u((0xD6B8L != (g_14 <= ((*l_63) || g_3))), 0x4DCFL)))))) == g_58)), g_58, l_75), 1UL)), p_53)) ^ g_3) == g_3))
    {
        unsigned char l_129 = 0UL;
        for (p_52 = 10; (p_52 <= 23); p_52 = safe_add_func_uint32_t_u_u(p_52, 7))
        {
            unsigned char *l_123 = (void*)0;
            unsigned char *l_124 = (void*)0;
            unsigned char *l_125 = (void*)0;
            unsigned char *l_126 = &l_78;
            g_132 &= (g_14 | ((((*l_126) = g_55) & ((1L | (p_53 &= ((safe_sub_func_uint16_t_u_u(g_58, (l_129 > 1UL))) >= (+g_3)))) & ((safe_rshift_func_int16_t_s_s(g_72, 4)) && (((p_52 < 7L) >= l_129) < 0x2ED8E9B0L)))) && p_53));
            g_133 = (void*)0;
        }
        (*l_66) &= l_129;
    }
    else
    {
        unsigned *l_154 = &g_55;
        unsigned char *l_155 = (void*)0;
        int l_156 = (-7L);
        unsigned short *l_157 = &g_95;
        char **l_191 = &l_168;
        int l_227 = 0x29E641F7L;
        int l_236 = 0x4D2E0C58L;
        if (((safe_unary_minus_func_uint32_t_u((0xBE49L <= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((*l_157) = ((func_85(g_58, p_53, l_154) != (g_132 = (g_3 ^ ((p_53 <= 0x28L) < p_53)))) && l_156)) < g_3) > (-1L)), 9)), 0UL)), g_3))))) >= (*l_69)))
        {
            char *l_176 = (void*)0;
            unsigned short *l_182 = &g_95;
            unsigned short *l_183 = (void*)0;
            unsigned l_186 = 0x5ECE1F0CL;
            int l_211 = 0x55B77933L;
            int l_247 = (-1L);
            int l_248 = 0x0BA812F1L;
            int **l_254 = &l_61;
            if ((*g_133))
            {
                char *l_160 = &g_161;
                short *l_173 = &g_110;
                unsigned *l_174 = &g_55;
                int l_175 = 0x4D7B1BA9L;
                int l_199 = 5L;
                if (((*l_75) &= ((func_85((safe_rshift_func_int8_t_s_s(((*l_160) = g_72), (&g_133 == (void*)0))), ((*l_168) = (((*l_173) ^= (((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(g_14, (l_168 == &g_169))) != 0L) != (--l_170)), p_53)), ((*l_67) <= g_55))) ^ p_52) & p_52)) >= (-8L))), l_174) != g_132) & l_175)))
                {
                    char **l_177 = &l_160;
                    (*l_57) &= (!(((*l_177) = l_176) == (void*)0));
                    (*l_75) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*g_133), (l_182 == (l_183 = (void*)0)))), 13));
                }
                else
                {
                    char **l_192 = &l_160;
                    char ***l_193 = &l_192;
                    char **l_195 = &l_160;
                    char ***l_194 = &l_195;
                    int l_198 = 0xD8D7B0DAL;
                    unsigned *l_200 = (void*)0;
                    unsigned *l_201 = &g_202;
                    if ((((l_175 == (safe_sub_func_uint16_t_u_u(l_186, (((*l_201) ^= ((*p_51) = (safe_mod_func_uint8_t_u_u((l_199 = (safe_lshift_func_uint16_t_u_s((g_55 | (l_191 == ((*l_194) = ((*l_193) = l_192)))), ((*l_60) >= ((safe_rshift_func_int8_t_s_u((~g_110), g_72)) >= (l_198 <= l_198)))))), g_110)))) & l_175)))) == l_198) & g_132))
                    {
                        int **l_203 = &l_69;
                        (*l_203) = p_51;
                    }
                    else
                    {
                        (*l_63) = 0x0752C94BL;
                    }
                    (*l_64) = p_53;
                }
            }
            else
            {
                int *l_212 = &l_156;
                int *l_213 = (void*)0;
                int *l_214 = (void*)0;
                int *l_215 = &l_156;
                int *l_216 = (void*)0;
                int *l_217 = (void*)0;
                int *l_218 = &l_211;
                int *l_219 = (void*)0;
                int *l_220 = (void*)0;
                int *l_221 = (void*)0;
                int *l_222 = &l_211;
                int *l_223 = &g_58;
                int *l_224 = &l_156;
                int *l_225 = &l_68;
                int *l_226 = (void*)0;
                int *l_228 = &l_156;
                int *l_229 = &l_77;
                int *l_230 = &l_227;
                int *l_231 = &g_58;
                int *l_232 = &l_77;
                int *l_233 = (void*)0;
                int *l_234 = &g_72;
                int *l_235 = &l_227;
                int *l_237 = &l_77;
                int *l_238 = &g_58;
                int *l_239 = &l_156;
                int *l_240 = &l_227;
                int *l_241 = &l_68;
                int *l_242 = &g_58;
                int *l_243 = &l_76;
                int *l_249 = &l_227;
                int *l_250 = &l_77;
                for (g_58 = 6; (g_58 == (-3)); g_58--)
                {
                    short *l_207 = &g_110;
                    short **l_206 = &l_207;
                    short ***l_208 = &l_206;
                    short **l_210 = &l_207;
                    short ***l_209 = &l_210;
                    (*l_209) = ((*l_208) = l_206);
                }
                ++g_244;
                ++g_251;
            }
            (*l_254) = &l_248;
        }
        else
        {
            unsigned **l_266 = &g_54;
            for (g_169 = 0; (g_169 > (-30)); --g_169)
            {
                unsigned char *l_261 = &l_78;
                l_267 ^= ((safe_add_func_uint16_t_u_u((0x291BL && 0xC69CL), (((**l_266) = ((*p_51) >= (((-9L) > ((*l_261) |= (safe_add_func_uint16_t_u_u((0xB2C4L > g_14), (p_53 || (g_244 = 0UL)))))) | ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((void*)0 == l_266), p_53)), g_202)) ^ 4L)))) > 0x4ADEE2F4L))) != g_72);
                (*l_66) |= (*g_133);
            }
            return l_73;
        }
    }
    (*l_69) ^= l_268;
    return &g_55;
}







static unsigned short func_85(unsigned p_86, char p_87, unsigned * p_88)
{
    int *l_100 = &g_58;
    int l_120 = 0L;
    for (g_72 = (-5); (g_72 >= (-27)); g_72--)
    {
        unsigned l_103 = 0xDDA6A1E0L;
        unsigned *l_113 = &g_55;
        int l_115 = (-1L);
        (*l_100) = ((~g_58) | (p_88 == l_100));
        (*l_100) = g_72;
        for (g_55 = 0; (g_55 == 3); g_55 = safe_add_func_int8_t_s_s(g_55, 7))
        {
            unsigned **l_114 = &l_113;
            g_58 = ((l_103 | (safe_mul_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_86, g_14)), (p_87 || (g_110 = 4294967288UL)))) || (*g_54)) && ((p_86 > ((g_72 || (safe_mul_func_int8_t_s_s(p_86, g_58))) != l_103)) | (*p_88))), (-1L)))) >= 0L);
            (*l_100) &= ((void*)0 == &g_14);
            (*l_100) = g_110;
            l_115 |= (~(((*l_114) = l_113) == (void*)0));
        }
    }
    l_100 = p_88;
    l_120 = ((*l_100) = (safe_mul_func_int8_t_s_s((g_95 == (safe_lshift_func_int8_t_s_s((*l_100), 4))), p_86)));
    return p_87;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
