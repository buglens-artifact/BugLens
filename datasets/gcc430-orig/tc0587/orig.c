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



static unsigned g_21 = 0UL;
static int g_25 = 0x85E0710DL;
static int *g_43 = &g_25;
static int **g_42 = &g_43;
static int g_60 = 0x21F20595L;
static int g_98 = 0xD6DF81F9L;
static int **g_102 = (void*)0;
static unsigned g_212 = 0xF2B41A0BL;
static unsigned char g_213 = 0x5FL;
static int g_258 = 0x219EB458L;
static unsigned short g_372 = 1UL;
static unsigned g_615 = 0x9451FE82L;
static unsigned g_619 = 0x75A4D654L;
static int ***g_707 = &g_102;
static int *g_734 = &g_60;
static int **g_748 = &g_734;
static unsigned g_906 = 0UL;



static unsigned func_1(void);
static int func_2(unsigned short p_3);
static unsigned short func_15(int p_16, char p_17, unsigned p_18, unsigned char p_19, int p_20);
static unsigned char func_47(int ** p_48, unsigned p_49);
static int ** func_50(int p_51, int ** p_52);
static int ** func_53(int * p_54, int * p_55, unsigned p_56, int p_57);
static int * func_63(int p_64, int p_65);
static int func_66(int p_67, unsigned p_68, unsigned p_69, int * p_70, int * p_71);
static int * func_74(int * p_75, int p_76);
static int * func_77(int ** p_78, unsigned p_79);
static unsigned func_1(void)
{
    unsigned short l_14 = 0xEDBDL;
    short l_22 = 0x611BL;
    int l_1046 = 1L;
    l_1046 = (func_2((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_14, (!((func_15(g_21, l_14, l_14, l_22, l_22) <= 0xF230L) != 0x55L)))), l_14)) || l_22), 8L)) != 0x30DFL) >= g_21), l_14)), l_14))) ^ l_22);
    (*g_42) = &l_1046;
    return g_615;
}







static int func_2(unsigned short p_3)
{
    int **l_41 = (void*)0;
    unsigned char l_46 = 4UL;
    int *l_58 = &g_25;
    unsigned short l_1045 = 0x601FL;
    (*l_58) = ((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0x71L >= (!g_25)), 0x8CFFL)), ((safe_add_func_int8_t_s_s((l_41 == g_42), ((safe_add_func_uint8_t_u_u(l_46, func_47(func_50(p_3, func_53(l_58, l_58, (*l_58), g_25)), p_3))) || p_3))) >= g_372))) && g_906), l_1045)) <= p_3), 0x06L)), p_3)) ^ (*l_58));
    return (*g_734);
}







static unsigned short func_15(int p_16, char p_17, unsigned p_18, unsigned char p_19, int p_20)
{
    int *l_24 = &g_25;
    int **l_23 = &l_24;
    int l_26 = (-2L);
    (*l_23) = (void*)0;
    return l_26;
}







static unsigned char func_47(int ** p_48, unsigned p_49)
{
    int **l_945 = (void*)0;
    int *l_960 = &g_98;
    unsigned short l_987 = 0xCAEAL;
    unsigned l_992 = 4294967295UL;
    for (p_49 = (-26); (p_49 <= 47); p_49++)
    {
        (*g_42) = (*g_42);
        if ((*g_43))
            continue;
    }
    (**g_42) = ((l_945 == p_48) != p_49);
    for (g_615 = 0; (g_615 >= 1); g_615 = safe_add_func_int16_t_s_s(g_615, 1))
    {
        int l_948 = 0xF591D6D7L;
        int **l_949 = &g_43;
        unsigned char l_971 = 0UL;
        int *l_972 = &g_258;
        int l_988 = 0xC194E333L;
        char l_1016 = 0xD2L;
        unsigned l_1040 = 4UL;
        (*g_42) = func_63(l_948, g_619);
        if ((l_949 == (void*)0))
        {
            int l_970 = (-6L);
            int *l_973 = &g_258;
            (*g_748) = (*l_949);
            (*g_748) = l_973;
        }
        else
        {
            unsigned short l_974 = 0x38E9L;
            int *l_1039 = &g_98;
            (**g_748) = l_974;
            (*g_748) = (*g_748);
            if ((p_49 >= (*l_960)))
            {
                unsigned short l_1007 = 65535UL;
                int *l_1019 = &g_258;
                if ((g_372 >= ((func_15(((0xF36CB20CL || ((+2L) || (safe_rshift_func_int16_t_s_u(((+func_15(g_619, ((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(0xA271598FL, l_974)), (((safe_rshift_func_int8_t_s_u(g_212, 2)) || (safe_sub_func_int8_t_s_s(g_25, (((safe_sub_func_uint32_t_u_u(g_98, l_987)) | (-9L)) != 2L)))) ^ 0xBBB1L))) == p_49), (*l_972), l_988, l_974)) | 65532UL), g_906)))) || 0xE0L), p_49, g_21, (*l_972), (**g_748)) || 0x1DEDL) & (*l_960))))
                {
                    unsigned l_1026 = 4294967286UL;
                    for (l_971 = 20; (l_971 == 33); l_971 = safe_add_func_uint8_t_u_u(l_971, 6))
                    {
                        int **l_991 = &l_960;
                        unsigned l_1011 = 0xA41644FAL;
                        l_960 = (*g_748);
                        (*l_972) = ((((void*)0 != (*g_748)) || (l_974 && (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0xC61DL, (!(((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((~0xF974L), 15)), (0x4669L && (safe_sub_func_uint16_t_u_u(g_619, ((safe_div_func_int16_t_s_s(((((0x31E1L & (safe_mul_func_int8_t_s_s((**l_991), 0x75L))) || (*l_960)) > g_25) || p_49), p_49)) == p_49)))))) & g_212) ^ l_1007)))), 0x68L)))) || l_1007);
                        (*g_734) |= (((safe_unary_minus_func_int8_t_s(0x40L)) | p_49) <= ((safe_add_func_uint8_t_u_u(l_1011, p_49)) <= (~p_49)));
                    }
                    g_98 |= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_1016, ((safe_mul_func_int8_t_s_s(g_60, (l_1019 != (void*)0))) | ((((safe_sub_func_uint8_t_u_u(((p_49 ^ ((*l_1019) >= g_258)) ^ g_258), (safe_div_func_int8_t_s_s((~(safe_lshift_func_uint16_t_u_s(g_213, l_1026))), 3L)))) == p_49) & l_974) | g_21)))), p_49)) < g_258);
                    l_1040 &= (safe_sub_func_uint32_t_u_u(func_15((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(65534UL, (safe_sub_func_uint8_t_u_u(((*l_1019) & (0xB837A181L | (*l_1019))), (-3L))))), g_213)), ((safe_mul_func_uint8_t_u_u(func_66((**g_748), p_49, g_906, l_1039, (*g_748)), g_258)) <= 1UL))), p_49, g_212, p_49, (*l_1019)), (*l_972)));
                    for (l_948 = 0; (l_948 < 19); l_948 = safe_add_func_int8_t_s_s(l_948, 4))
                    {
                        int *l_1043 = (void*)0;
                        (*g_42) = l_1043;
                    }
                }
                else
                {
                    if ((*g_734))
                        break;
                }
            }
            else
            {
                int *l_1044 = &g_25;
                l_1039 = l_1044;
            }
            (*l_960) = (func_66((*g_734), ((void*)0 != &l_1039), p_49, (*l_949), (*g_748)) >= (*l_972));
        }
    }
    (*l_960) &= p_49;
    return p_49;
}







static int ** func_50(int p_51, int ** p_52)
{
    int *l_930 = &g_98;
    int l_941 = 0x165E5A92L;
    int **l_942 = &l_930;
    for (g_906 = 19; (g_906 < 22); g_906 = safe_add_func_int16_t_s_s(g_906, 3))
    {
        (*g_707) = p_52;
    }
    (*g_42) = (*g_748);
    return p_52;
}







static int ** func_53(int * p_54, int * p_55, unsigned p_56, int p_57)
{
    int *l_59 = &g_60;
    int ***l_852 = (void*)0;
    int ***l_853 = &g_42;
    int **l_866 = &g_43;
    (*l_59) ^= (*p_54);
    for (g_60 = (-29); (g_60 == (-3)); g_60 = safe_add_func_int32_t_s_s(g_60, 4))
    {
        unsigned char l_659 = 7UL;
        int ***l_864 = &g_102;
        int l_865 = 0xAE43666DL;
    }
    (*g_734) |= (3UL && ((void*)0 != l_866));
    if (((***l_853) || (((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(g_60, ((safe_unary_minus_func_uint32_t_u((*l_59))) && (p_56 == p_57)))) > (safe_mod_func_uint16_t_u_u((g_213 != (g_258 != ((safe_add_func_uint16_t_u_u(g_60, (safe_rshift_func_int8_t_s_u(0L, p_56)))) == g_212))), g_372))) ^ (***l_853)), 0x248BL)), (*p_55))) & (*l_59)) == (*l_59))))
    {
        int l_904 = 0x80A67DA1L;
        for (g_98 = 5; (g_98 < (-24)); --g_98)
        {
            unsigned char l_882 = 0x23L;
            int **l_913 = &g_734;
            unsigned short l_922 = 0x9AECL;
            char l_924 = 0x57L;
            if ((*p_55))
                break;
            if (l_882)
                break;
            if ((safe_rshift_func_int8_t_s_s((&p_54 != &p_55), 2)))
            {
                unsigned l_905 = 4294967291UL;
                char l_907 = 0L;
                int l_923 = 8L;
                if ((*p_55))
                {
                    char l_903 = 0x12L;
                    int *l_908 = &g_25;
                    if (func_15((func_15(g_25, g_21, (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(func_15((safe_sub_func_int32_t_s_s(l_882, (safe_mul_func_uint16_t_u_u(((*p_54) != (*p_55)), ((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_212 <= (((func_15((~((safe_add_func_uint8_t_u_u(func_15((p_57 != g_213), (safe_rshift_func_int16_t_s_u(p_57, 13)), l_882, p_56, (*g_43)), g_21)) <= g_619)), p_56, l_903, g_615, l_903) || l_882) < l_882) && p_57)), g_25)), 0x949EL)), (**l_866))) & l_904))))), p_56, l_905, g_258, (*p_54)), p_57)) && l_903), (**l_866))), g_213, (*g_734)) <= 2L), l_882, g_906, p_57, (**g_42)))
                    {
                        (**l_853) = (void*)0;
                        (*g_42) = p_54;
                        (*l_59) = l_903;
                    }
                    else
                    {
                        short l_909 = 0xC0E3L;
                        (**g_748) = (l_907 ^ 0L);
                        (**l_853) = l_908;
                        if (l_909)
                            continue;
                    }
                }
                else
                {
                    char l_912 = 1L;
                    int **l_925 = &l_59;
                    if (((safe_div_func_uint32_t_u_u((l_912 & (&p_54 != l_913)), (p_57 | (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_56, p_56)), (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((p_57 && ((func_15(l_922, g_25, (**l_913), l_923, l_912) & (**l_913)) <= g_906)), p_57)) || 0x5536F4F6L) == p_56), g_372))))))) >= p_56))
                    {
                        if ((*p_54))
                            break;
                        (*g_734) = l_924;
                        return (*g_707);
                    }
                    else
                    {
                        return (*g_707);
                    }
                }
            }
            else
            {
                if ((**l_913))
                    break;
                return (*g_707);
            }
        }
        (*l_866) = func_74((*l_866), (((*l_853) == (*g_707)) & (*g_734)));
        (*g_734) &= func_15(g_615, g_372, p_57, (safe_add_func_uint32_t_u_u(g_212, (!1UL))), (*p_55));
    }
    else
    {
        return (*g_707);
    }
    return &g_43;
}







static int * func_63(int p_64, int p_65)
{
    unsigned char l_678 = 255UL;
    char l_680 = (-7L);
    int l_690 = 0x2B7A54E8L;
    int l_692 = 5L;
    int *l_763 = &g_25;
    int ***l_829 = (void*)0;
    unsigned short l_844 = 0x3E40L;
    int l_847 = 3L;
    if (p_64)
    {
        unsigned l_668 = 0xDAD853ECL;
        unsigned char l_675 = 0UL;
        int *l_679 = &g_258;
        (*l_679) ^= (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((p_64 >= ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_65, l_668)), ((safe_sub_func_int16_t_s_s(0x3BF1L, (safe_add_func_uint32_t_u_u(g_98, p_65)))) == (255UL ^ (safe_add_func_int8_t_s_s(l_675, ((safe_rshift_func_uint8_t_u_s(p_65, l_678)) != l_675))))))) ^ 65535UL)) || 0xE3L), p_64)), g_615));
        p_64 |= l_680;
        l_690 ^= ((((safe_lshift_func_uint8_t_u_s(254UL, g_258)) == (safe_mod_func_int8_t_s_s(l_680, (safe_div_func_int16_t_s_s(p_65, 65535UL))))) & (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(p_64)), (p_64 & (*l_679))))) < (*l_679));
        (*l_679) |= 0x7BC6A34EL;
    }
    else
    {
        (*g_42) = (void*)0;
        return (*g_42);
    }
    if (l_678)
    {
        char l_691 = 0x08L;
        int *l_693 = &l_690;
        (*g_42) = func_74(&p_64, p_64);
        (*l_693) = (p_65 <= (func_15(func_66(l_691, g_615, l_690, &l_690, &l_690), ((l_692 >= ((g_21 == g_60) != l_691)) == g_619), g_619, p_64, p_64) == p_64));
    }
    else
    {
        unsigned char l_698 = 3UL;
        unsigned char l_701 = 246UL;
        int *l_706 = &l_692;
        int l_710 = 0L;
        unsigned char l_722 = 249UL;
        int l_732 = 0x5F558A12L;
        (*g_42) = &l_692;
        l_710 |= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((l_698 | (safe_mul_func_int8_t_s_s(l_701, (safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((((void*)0 != l_706) | l_690) & (g_707 == &g_42)) == func_15(g_21, (safe_lshift_func_uint16_t_u_u((g_619 >= 65535UL), l_692)), (*l_706), p_65, l_678)), g_212)) >= p_64), 0xD7277B6CL))))), p_64)) ^ (*l_706)), l_678));
        (**g_42) &= l_678;
        for (g_213 = (-10); (g_213 >= 28); ++g_213)
        {
            char l_719 = 7L;
            int *l_738 = &l_732;
            int *l_749 = &l_710;
        }
    }
    l_692 |= (**g_748);
    p_64 = (safe_sub_func_uint16_t_u_u(((0xDEL <= ((+(*l_763)) && (((safe_mod_func_int32_t_s_s((**g_748), (safe_mod_func_uint8_t_u_u(l_844, func_15((safe_rshift_func_uint16_t_u_u(l_847, 8)), p_64, g_21, (safe_lshift_func_int16_t_s_u(2L, 12)), (*g_734)))))) > p_65) == p_65))) > p_65), 0xEFB9L));
    return (*g_748);
}







static int func_66(int p_67, unsigned p_68, unsigned p_69, int * p_70, int * p_71)
{
    unsigned char l_657 = 0x34L;
    for (p_67 = (-3); (p_67 != 18); p_67 = safe_add_func_int32_t_s_s(p_67, 9))
    {
        unsigned l_652 = 1UL;
        int *l_658 = &g_98;
        (*l_658) = (safe_mul_func_uint8_t_u_u(func_15((l_652 > 8UL), p_69, func_15(l_652, (safe_mul_func_uint8_t_u_u((+0x32L), (1L >= (safe_sub_func_int32_t_s_s(((+5UL) > (((p_69 < l_657) | p_67) != g_98)), l_652))))), g_21, g_60, l_657), g_372, l_657), 0x6BL));
    }
    return g_212;
}







static int * func_74(int * p_75, int p_76)
{
    int **l_150 = &g_43;
    unsigned char l_252 = 0x0BL;
    unsigned char l_268 = 0xE0L;
    char l_285 = (-5L);
    int l_287 = 0L;
    unsigned char l_326 = 0UL;
    unsigned char l_370 = 1UL;
    int **l_462 = &g_43;
    int *l_463 = &g_60;
    unsigned l_536 = 3UL;
    int ***l_550 = &l_150;
    unsigned l_561 = 4294967293UL;
    int l_567 = 0x59EE0047L;
    short l_620 = 8L;
    int l_621 = (-1L);
    int *l_646 = &l_621;
    int *l_647 = (void*)0;
    for (p_76 = (-15); (p_76 == (-10)); ++p_76)
    {
        int *l_143 = &g_98;
        char l_171 = (-4L);
        unsigned l_174 = 4294967295UL;
        unsigned char l_222 = 255UL;
        int ***l_243 = &g_102;
        char l_250 = (-1L);
        int l_269 = (-8L);
        short l_325 = 0x1D58L;
        (*l_143) |= (*p_75);
        if ((*p_75))
        {
            unsigned l_165 = 0x50B285FAL;
            int *l_184 = &g_25;
            unsigned short l_283 = 65530UL;
            char l_286 = 0xE7L;
            int ***l_315 = &l_150;
            for (g_21 = 21; (g_21 != 6); g_21 = safe_sub_func_uint32_t_u_u(g_21, 5))
            {
                (*l_143) &= (*p_75);
                for (g_98 = (-11); (g_98 >= (-16)); g_98--)
                {
                    return l_143;
                }
                (*g_42) = l_143;
            }
            if ((*l_143))
            {
                unsigned l_151 = 0UL;
                int l_156 = 0xA8DCBC2BL;
                (*l_143) = (((safe_add_func_uint32_t_u_u(p_76, ((&l_143 == &g_43) || ((l_150 != &p_75) | func_15(l_151, g_21, l_151, (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(p_76, g_25)) <= g_21), (*l_143))) ^ 4UL) | p_76), (*p_75)))))) >= 0x0BB848F3L) ^ p_76);
                if (l_156)
                    continue;
                (*l_143) = ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_151, (((func_15((p_76 != (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((p_76 & (func_15((0x17541656L == (*p_75)), g_60, p_76, g_25, (*l_143)) | g_21)) || 2UL), 3)), 1L))), g_21, g_60, l_165, l_165) || (*l_143)) && l_165) ^ (*p_75)))) != 0xBEL), 3)) || g_21);
                if ((*p_75))
                    break;
            }
            else
            {
                unsigned char l_183 = 0xC0L;
                int **l_217 = (void*)0;
                int l_221 = 1L;
                int *l_230 = &g_98;
                int l_284 = 0xCAB9C88EL;
                int l_300 = (-1L);
                (*l_143) = (((safe_div_func_int32_t_s_s((0x2CA7L < (safe_unary_minus_func_int32_t_s(((safe_mod_func_uint16_t_u_u((func_15(p_76, (+(((void*)0 == &p_76) & l_171)), (safe_div_func_uint32_t_u_u(p_76, ((func_15(p_76, ((1UL & ((void*)0 != &p_76)) > g_21), g_98, p_76, l_174) && p_76) & 246UL))), p_76, (*p_75)) <= 1UL), (*l_143))) ^ (-1L))))), (-1L))) ^ (*l_143)) != p_76);
                if ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_76, (p_76 ^ (p_76 >= g_25)))), (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((func_15((*l_143), l_183, l_183, g_60, (((g_60 <= 5L) <= g_98) ^ l_165)) >= (*l_143)), p_76)), (*p_75))))))
                {
                    int **l_216 = &l_143;
                    char l_220 = (-7L);
                    unsigned short l_251 = 1UL;
                    (*g_42) = l_184;
                    if ((safe_add_func_int16_t_s_s(p_76, (safe_add_func_int16_t_s_s((func_15(((&l_143 == &g_43) <= (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(((0x15A1L | (safe_add_func_uint8_t_u_u(g_60, 0x40L))) != (safe_lshift_func_uint16_t_u_s((!(safe_mod_func_int32_t_s_s((*g_43), ((+l_183) || p_76)))), 8))), 0x6A5DL)), g_21)), 0x4FE9L))), g_60, (*l_184), p_76, (*l_184)) && 0UL), g_21)))))
                    {
                        short l_205 = (-7L);
                        g_213 |= ((3UL || func_15(p_76, (((safe_mul_func_uint8_t_u_u(p_76, (func_15(p_76, func_15((((safe_rshift_func_uint8_t_u_s(p_76, l_205)) != (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(func_15(((((safe_sub_func_int8_t_s_s(0x72L, (g_212 ^ (**l_150)))) ^ 1UL) && (**g_42)) > p_76), g_21, (**l_150), p_76, (**g_42)), p_76)) != (**g_42)), p_76))) && (*l_184)), (*l_143), p_76, g_25, (*p_75)), (**l_150), l_183, (*p_75)) != 4UL))) & l_183) > g_60), g_98, p_76, (*p_75))) <= p_76);
                        (*l_143) = 0xFF7F1617L;
                        (*l_150) = (*l_216);
                        (*g_43) = ((l_222 > 6L) == (safe_rshift_func_uint16_t_u_u(g_25, 10)));
                    }
                    else
                    {
                        int ***l_225 = &l_216;
                        (*l_225) = &g_43;
                    }
                    if (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((((void*)0 == l_230) == (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_213, ((safe_rshift_func_int8_t_s_u((p_76 < g_212), 7)) > (safe_rshift_func_int8_t_s_u((~0x82L), 7))))), (safe_sub_func_uint32_t_u_u(func_15(p_76, p_76, (safe_rshift_func_uint16_t_u_s((&g_43 == &p_75), (*l_184))), g_21, (**l_216)), 1UL))))), p_76)), 1)) < (*l_184)))
                    {
                        char l_248 = 0x62L;
                        short l_249 = 0xB0C7L;
                        int *l_255 = (void*)0;
                        int *l_256 = (void*)0;
                        int *l_257 = &g_258;
                        l_251 &= (((func_15(g_60, g_212, func_15((((0UL > g_98) == ((void*)0 != l_243)) >= (safe_rshift_func_uint16_t_u_u((*l_184), 13))), (!(safe_mul_func_int8_t_s_s(0x50L, l_248))), (*l_184), (**l_216), l_249), l_250, (**l_150)) | 0xA2L) ^ (**l_216)) || g_212);
                        (*l_243) = &p_75;
                        (*l_257) &= ((***l_243) > (p_76 || func_15((*l_184), (**l_150), l_252, (safe_rshift_func_uint8_t_u_u((***l_243), p_76)), (**g_42))));
                    }
                    else
                    {
                        (*l_143) ^= 1L;
                        return l_184;
                    }
                    return (*g_42);
                }
                else
                {
                    int l_267 = 4L;
                    int *l_270 = &g_258;
                    unsigned char l_316 = 0x2CL;
                    short l_327 = 5L;
                    (*l_270) ^= ((((safe_lshift_func_int8_t_s_u(g_25, (func_15((*l_230), p_76, func_15((safe_lshift_func_int8_t_s_s(0x4BL, (safe_div_func_int16_t_s_s(func_15(((7L != g_60) != (safe_sub_func_uint8_t_u_u(l_267, l_268))), p_76, g_212, g_60, (*p_75)), p_76)))), l_267, p_76, p_76, (*l_184)), l_267, l_269) <= p_76))) < 0x9EC6L) ^ 0x13L) > p_76);
                    if (((((safe_mod_func_int8_t_s_s(p_76, g_212)) <= 0x93L) & ((safe_sub_func_int32_t_s_s(((p_76 == ((safe_mod_func_uint32_t_u_u((func_15((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(func_15(func_15(p_76, g_98, g_98, (safe_rshift_func_uint16_t_u_u(7UL, (((0xE7ADD062L ^ g_98) & 65535UL) > 0x5C6AL))), (*p_75)), g_21, g_60, l_283, l_284), g_258)), (*l_184))), (*l_230), l_285, p_76, (*l_184)) >= (*l_230)), 1L)) | g_213)) && 255UL), 0x35FD4661L)) ^ 0xDAL)) ^ l_286))
                    {
                        (*l_150) = &p_76;
                        (*l_150) = l_184;
                        p_75 = (*g_42);
                        (*g_42) = l_230;
                    }
                    else
                    {
                        (*l_230) |= (*p_75);
                        (*g_42) = &p_76;
                        if ((*g_43))
                            break;
                    }
                    (*l_270) = ((g_25 || (((safe_lshift_func_uint8_t_u_u(((*g_42) != &l_267), 5)) > (*l_184)) ^ (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_76, (**l_150))), 4294967294UL)) > (safe_div_func_int8_t_s_s(func_15((safe_rshift_func_uint16_t_u_u(g_212, func_15((**l_150), p_76, (*l_270), l_300, (*p_75)))), (*l_143), g_25, p_76, (*p_75)), 0x5CL))), 6)))) ^ (**l_150));
                    if (((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(65535UL, p_76)), 0x78DBA8A7L)) && (safe_mod_func_int16_t_s_s(0x8A90L, (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_60, 2)), g_25))))))
                    {
                        unsigned l_311 = 0x543C7B79L;
                        (*l_270) = (l_311 >= (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(p_76)), g_21)));
                    }
                    else
                    {
                        unsigned char l_328 = 251UL;
                        (*l_270) = (p_76 < (((l_315 != &g_102) | 1UL) < func_15(l_316, (&g_42 != (void*)0), ((((func_15(func_15((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_76 | (safe_mod_func_int16_t_s_s(((*l_270) > l_325), 0xD53BL))), g_21)), l_326)) != p_76), l_327)), g_258, (*l_143), l_328, l_328), (*l_270), (*l_270), p_76, (*p_75)) < p_76) | 0x35BFL) ^ 0x02L) & g_25), g_212, (*l_143))));
                    }
                }
            }
        }
        else
        {
            (*g_42) = &p_76;
        }
        if ((*p_75))
            continue;
    }
    if ((*p_75))
    {
        int ***l_361 = &l_150;
        unsigned l_387 = 0xC48DCC07L;
        if ((&g_42 != (void*)0))
        {
            char l_356 = (-1L);
            unsigned char l_369 = 0xA5L;
            unsigned l_371 = 4294967294UL;
            char l_386 = 1L;
            short l_388 = 0x402CL;
            int **l_406 = &g_43;
            short l_431 = (-10L);
            char l_452 = 0L;
            for (l_285 = 1; (l_285 >= (-29)); --l_285)
            {
                unsigned l_341 = 0x79703896L;
                int *l_373 = &g_258;
                int l_457 = 0xE30E5366L;
                if ((safe_mul_func_uint16_t_u_u(0xC054L, (safe_mul_func_int8_t_s_s((0x60A7L > (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((+g_213), 0x1DL)), p_76)), g_258))), func_15(g_25, (((p_76 != 4L) >= p_76) & 0x097FL), g_98, p_76, l_341))))))
                {
                    unsigned short l_342 = 0xE3E2L;
                    int *l_353 = &g_98;
                    l_287 |= (l_342 == (0x812EL && (safe_rshift_func_int8_t_s_s(g_25, (((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_342, (((safe_add_func_int16_t_s_s(p_76, (g_25 <= (0xCBL == 0x05L)))) | p_76) >= g_213))), 0x2DL)) <= 0xA787L) > (-1L))))));
                    (*l_353) = (*p_75);
                    if ((*p_75))
                    {
                        (*l_353) &= (safe_add_func_uint16_t_u_u(l_356, p_76));
                    }
                    else
                    {
                        unsigned l_357 = 0x03679C85L;
                        (*l_353) ^= l_357;
                        (*l_353) |= l_341;
                    }
                }
                else
                {
                    int *l_362 = &g_98;
                    for (g_212 = 0; (g_212 != 1); ++g_212)
                    {
                        int *l_360 = &g_98;
                        return l_360;
                    }
                    (*l_362) &= (l_341 && ((void*)0 != l_361));
                }
                (*l_373) = (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((+(-1L)) != func_15(g_25, l_369, p_76, g_60, l_370)), (func_15(p_76, (((*p_75) == p_76) < p_76), l_371, p_76, g_372) >= 1UL))), g_60)), g_21));
                if (((0UL | g_212) ^ ((safe_add_func_uint16_t_u_u(func_15(g_60, ((safe_mul_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((0UL != g_212) <= p_76), ((~g_21) > (safe_mod_func_uint8_t_u_u((((func_15(l_356, (*l_373), g_213, g_21, l_386) & g_212) <= 0x8ECCL) >= (*l_373)), g_98))))), g_21)), 0x53L)) ^ (*l_373)) > l_387), p_76)) >= 0x29D0FCF4L), p_76, g_372, (*p_75)), l_388)) != 1L)))
                {
                    int *l_400 = &g_98;
                    unsigned char l_405 = 0x7EL;
                    if ((~(safe_lshift_func_int16_t_s_u(p_76, func_15((~g_25), (1UL <= (safe_add_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(g_213, (safe_sub_func_int32_t_s_s((p_76 ^ (0x7F8C89F1L != (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((&p_76 != l_400))), (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((*l_373) != g_60), p_76)), (*p_75))))))), g_21)))) & l_386) < 0x3925L) | 0x93L), l_405))), g_372, g_212, (*p_75))))))
                    {
                        (*l_373) |= (g_212 > (l_406 == &g_43));
                        (*l_400) |= (-1L);
                    }
                    else
                    {
                        (*l_150) = &p_76;
                        l_400 = &p_76;
                        if ((*p_75))
                            continue;
                    }
                    (**l_361) = &p_76;
                }
                else
                {
                    unsigned short l_409 = 0x14D8L;
                    (*l_373) = l_409;
                    if ((l_268 == ((*l_373) == ((l_409 <= g_212) ^ 6UL))))
                    {
                        int l_420 = 1L;
                        (*l_150) = &p_76;
                    }
                    else
                    {
                        int l_436 = 8L;
                        p_76 = ((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(0x2829L, (4294967295UL < (safe_add_func_int32_t_s_s(0xB1F4020BL, ((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_431, p_76)), (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((void*)0 == &p_76), g_258)) != (p_76 && (*p_75))), 1)))) == g_372) && 1L) || l_436)))))) == 255UL), 1UL)) < 0x233A8C09L);
                        (**l_361) = &p_76;
                        (*l_373) ^= (**l_406);
                    }
                    for (l_369 = 22; (l_369 < 39); l_369 = safe_add_func_uint16_t_u_u(l_369, 8))
                    {
                        (*l_373) ^= (***l_361);
                        (**l_406) = (**g_42);
                    }
                    (*l_373) ^= 0x3C419842L;
                }
                if (((&p_75 != &g_43) > (safe_rshift_func_uint16_t_u_u(func_15(g_212, (safe_add_func_int16_t_s_s((func_15(p_76, g_21, l_452, ((func_15((*l_373), (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_372, ((-3L) != g_212))), 0)), p_76, g_25, (*p_75)) > 0x98L) < g_25), (*l_373)) & 3L), l_457)), g_60, g_25, (**l_150)), p_76))))
                {
                    for (l_431 = 0; (l_431 >= (-6)); l_431--)
                    {
                        (**l_406) = (*p_75);
                    }
                }
                else
                {
                    (*l_150) = &p_76;
                    return l_373;
                }
            }
            return l_463;
        }
        else
        {
            int *l_464 = &g_25;
            (**l_361) = &p_76;
            return l_464;
        }
    }
    else
    {
        int l_467 = 0x91353104L;
        unsigned l_474 = 0x74D68A0EL;
        g_98 = ((&g_102 != &l_462) || 0xA5F8B7EBL);
        g_258 = ((p_76 == g_25) < 0x1FDA2849L);
        p_76 = ((safe_mod_func_uint32_t_u_u(((+(p_76 && (((void*)0 == &l_463) | l_467))) & p_76), ((l_467 != (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_76, 4294967288UL)), p_76)), 8L))) && p_76))) < l_474);
    }
    for (g_213 = 0; (g_213 > 52); g_213++)
    {
        int *l_477 = &l_287;
        char l_566 = (-10L);
        unsigned l_568 = 0x0716335FL;
        int l_571 = 0xCDA6642AL;
        int l_601 = 0xAA1F1E0DL;
        short l_625 = 0x2093L;
        int **l_638 = &l_477;
        (*l_477) = (*p_75);
        for (g_21 = 0; (g_21 >= 38); g_21 = safe_add_func_uint16_t_u_u(g_21, 9))
        {
            short l_493 = 5L;
            int ***l_516 = &g_42;
        }
        (*l_477) ^= 7L;
    }
    for (g_98 = (-1); (g_98 >= 1); ++g_98)
    {
        int l_644 = 0xE0B8788BL;
        int *l_645 = &g_98;
        for (l_567 = 0; (l_567 != 22); ++l_567)
        {
            int l_643 = (-1L);
            l_643 = (*p_75);
            if (l_644)
                break;
        }
        (**l_550) = l_645;
    }
    return l_647;
}







static int * func_77(int ** p_78, unsigned p_79)
{
    int l_86 = 0xE7E64BFCL;
    unsigned short l_95 = 65534UL;
    int l_96 = (-1L);
    int *l_97 = &g_98;
    (*l_97) |= ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_60, func_15(g_21, l_86, g_25, (safe_rshift_func_uint8_t_u_s((p_79 < p_79), (((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(g_25, func_15(((void*)0 == &g_43), g_21, p_79, l_86, l_86))) < p_79) || (**p_78)), p_79)) < p_79), (**p_78))) && p_79) ^ l_95))), l_96))), g_25)), l_95)) | p_79);
    (*l_97) = ((void*)0 != &l_97);
    if ((**p_78))
    {
        int *l_99 = &g_25;
        l_97 = l_99;
    }
    else
    {
        int l_103 = 0L;
        unsigned l_124 = 0xD263D1F0L;
        for (l_96 = 25; (l_96 >= (-17)); --l_96)
        {
            unsigned l_110 = 4294967295UL;
            if (((void*)0 != &g_43))
            {
                g_102 = &g_43;
                if ((**p_78))
                    break;
            }
            else
            {
                unsigned l_131 = 0x4D29FB7AL;
                (*l_97) = ((p_78 != (void*)0) >= (l_103 ^ (**g_42)));
                for (g_21 = 0; (g_21 < 56); ++g_21)
                {
                    unsigned short l_119 = 65528UL;
                    if ((**p_78))
                        break;
                    for (p_79 = 0; (p_79 != 7); p_79++)
                    {
                        int *l_125 = (void*)0;
                        int *l_126 = &l_86;
                    }
                    (*l_97) = (0xA2DC96F0L == (l_110 < (((l_131 & (safe_sub_func_int8_t_s_s(0x8BL, 2L))) | l_131) >= (p_79 <= (safe_div_func_uint16_t_u_u(((~7L) >= l_131), l_119))))));
                }
                (*g_42) = &l_103;
                for (g_98 = 0; (g_98 <= 28); ++g_98)
                {
                    int *l_138 = &l_86;
                    (*l_138) &= (**g_42);
                    g_102 = p_78;
                    for (l_95 = 1; (l_95 <= 58); l_95++)
                    {
                        return (*p_78);
                    }
                }
            }
        }
    }
    return (*p_78);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
