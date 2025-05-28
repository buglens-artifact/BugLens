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
   char f0;
   unsigned f1;
   char f2;
   unsigned char f3;
   int f4;
   unsigned f5;
   unsigned short f6;
};


static unsigned g_3 = 4294967290UL;
static struct S0 g_74 = {0xA5L,0xA8900E2EL,-10L,0xCFL,0x7DC89349L,4294967295UL,2UL};
static char g_82 = 2L;
static unsigned char g_114 = 0x78L;
static unsigned g_129 = 0xFD790600L;
static unsigned char g_130 = 9UL;
static unsigned short g_155 = 65535UL;
static unsigned short g_169 = 0x2A32L;
static int g_171 = 1L;
static unsigned g_225 = 1UL;
static unsigned g_246 = 1UL;
static struct S0 g_275 = {0xE8L,6UL,-1L,0xDCL,0x0BFEEDA3L,0x84FE961CL,0xC1E3L};
static unsigned g_297 = 4UL;
static int g_339 = 0L;
static unsigned short g_394 = 0x734AL;
static unsigned g_401 = 0x802A9F15L;
static struct S0 g_502 = {0L,4294967293UL,-3L,0x77L,1L,0x7CE775CAL,0x9990L};
static short g_658 = 0x77A7L;
static short g_687 = 6L;
static struct S0 g_826 = {-1L,0x4A04D4F3L,-6L,4UL,-1L,0x63A0B0ABL,0UL};



static unsigned char func_1(void);
static short func_4(unsigned p_5, struct S0 p_6, unsigned char p_7, unsigned short p_8);
static unsigned char func_14(struct S0 p_15, unsigned p_16, struct S0 p_17);
static struct S0 func_18(unsigned short p_19);
static unsigned char func_20(short p_21, unsigned p_22, short p_23);
static unsigned func_24(short p_25, unsigned short p_26, unsigned p_27, struct S0 p_28);
static unsigned func_29(char p_30, int p_31);
static struct S0 func_33(short p_34, int p_35, unsigned p_36, unsigned p_37);
static unsigned char func_55(unsigned char p_56, int p_57);
static unsigned func_60(unsigned short p_61, char p_62, unsigned char p_63, int p_64);
static unsigned char func_1(void)
{
    unsigned short l_2 = 1UL;
    int l_840 = 0x6B36BF65L;
    int l_851 = 0x763F45E0L;
    struct S0 l_852 = {0xE6L,1UL,0x9CL,246UL,0x9B22625DL,0x9FC4D6DBL,0x659CL};
    int l_887 = 0xBD2C9E33L;
    unsigned short l_945 = 0xBD45L;
    unsigned l_950 = 0x8A70C3BAL;
    unsigned l_953 = 0UL;
    char l_954 = 0xFBL;
    int l_958 = 0x7EDADF73L;
    int l_961 = 0xE140D6E5L;
    unsigned char l_966 = 0xB7L;
    char l_971 = (-1L);
    unsigned char l_972 = 1UL;
    int l_973 = 0xE599B873L;
    if (((g_3 ^= l_2) != l_2))
    {
        char l_42 = 0x53L;
        short l_43 = 1L;
        unsigned l_501 = 1UL;
        unsigned char l_827 = 0x1DL;
        int l_831 = 0xC11E6BBDL;
        unsigned l_841 = 0UL;
        int l_955 = 4L;
        struct S0 l_974 = {0L,0x103E9242L,0x1FL,0xEDL,0x77D5FE05L,0UL,0x0EEEL};
        l_831 = ((g_3 | (g_3 >= (func_4((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((func_14(func_18((func_20(g_3, func_24(l_2, l_2, func_29(g_3, g_3), func_33((safe_sub_func_int16_t_s_s(func_29(((safe_div_func_uint16_t_u_u((g_3 ^ g_3), 1L)) || g_3), l_42), l_2)), g_3, l_43, g_3)), g_3) <= l_2)), l_501, g_502) == g_3) && 0xCDF953CCL), g_3)) < l_2), l_43)) == 0x59E3L))), g_826, l_827, l_2) && l_2))) && l_2);
        if ((0xE5A8L <= ((l_501 < ((func_24((l_841 = (((safe_mul_func_uint8_t_u_u((g_502.f6 > (safe_div_func_int32_t_s_s(7L, (safe_sub_func_int32_t_s_s(func_4(g_826.f2, g_826, g_74.f4, (safe_lshift_func_int8_t_s_s(g_275.f3, 4))), l_840))))), 0UL)) > g_502.f0) == 0xF1EB7CEEL)), g_401, l_831, g_74) & 0xE44E73D3L) < g_826.f2)) ^ g_687)))
        {
            unsigned l_848 = 0xB837AF16L;
            struct S0 l_849 = {-1L,1UL,-9L,1UL,0xC787EDE9L,0x8E3728D9L,0xED6BL};
            int l_850 = 0xF30989C7L;
            short l_923 = 0x7496L;
            short l_929 = 0x1594L;
            l_851 &= (safe_div_func_int8_t_s_s(((~l_501) | func_14(g_74, l_840, g_74)), (safe_sub_func_int16_t_s_s((l_840 ^ (safe_add_func_uint32_t_u_u((+0x7E4B38FEL), (((0xD07C9735L ^ (l_850 = func_4(func_60(g_826.f4, l_848, l_2, g_826.f0), l_849, l_849.f1, l_849.f3))) > l_840) == l_848)))), g_826.f5))));
            l_849 = l_852;
            for (g_297 = (-22); (g_297 > 44); g_297++)
            {
                unsigned short l_868 = 0x95ADL;
                int l_869 = 9L;
                short l_875 = (-9L);
                int l_890 = 0L;
                unsigned l_924 = 0UL;
                struct S0 l_926 = {0xB4L,0UL,-1L,0x7DL,-1L,4294967295UL,0x6317L};
                if ((g_171 |= l_827))
                {
                    int l_867 = (-10L);
                    l_869 &= (safe_div_func_uint8_t_u_u(l_852.f6, ((+(safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(g_169, func_4(((l_849.f5 & (g_502.f2 || 0x59L)) && ((~(safe_mod_func_int32_t_s_s(((g_74.f3 = (g_339 > func_20(((0xE5L ^ (g_275.f3 = g_826.f2)) <= (g_826.f0 > l_43)), l_867, l_868))) != g_502.f4), 1L))) && g_275.f5)), g_826, g_339, g_171))) <= (-1L)), 7)) && g_502.f2) == l_849.f3), 9)), g_74.f5))) || 249UL)));
                }
                else
                {
                    int l_870 = 0L;
                    int l_910 = 8L;
                    int l_911 = 0x5D6AA926L;
                    struct S0 l_925 = {9L,0x3F09E444L,-2L,8UL,-1L,1UL,0UL};
                    char l_944 = 0x3CL;
                    if ((l_869 = func_60((g_130 != l_870), (safe_lshift_func_int16_t_s_u(func_60(l_42, l_831, g_502.f3, (((safe_sub_func_uint16_t_u_u(l_849.f6, (l_827 ^ func_20(l_831, (func_60(g_826.f1, l_870, g_129, l_849.f5) <= l_875), l_42)))) && g_169) == g_275.f5)), g_155)), l_875, l_868)))
                    {
                        unsigned short l_882 = 0UL;
                        l_870 = func_4(g_502.f2, func_33(((safe_lshift_func_uint16_t_u_s((g_74.f6 = (safe_add_func_uint8_t_u_u((0x7BL ^ (l_831 ^= (g_502.f0 = (g_171 < ((l_2 != ((safe_rshift_func_uint16_t_u_u((l_882 && (g_339 | func_60((g_394 &= ((!0x6D98L) ^ ((safe_mul_func_int16_t_s_s(g_339, (safe_mod_func_int8_t_s_s((((g_687 != 0x6FL) < g_169) || 0x5EBCC736L), 0xAAL)))) & 0UL))), l_827, g_74.f0, l_852.f6))), l_887)) && l_882)) ^ l_882))))), 8UL))), g_339)) && l_882), g_502.f6, g_275.f2, l_849.f5), g_171, g_275.f5);
                        if (g_155)
                            continue;
                        l_911 &= (safe_mod_func_int16_t_s_s(((l_890 != (safe_add_func_int8_t_s_s(func_4((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(g_826.f0)), ((safe_rshift_func_uint8_t_u_u((l_869 = ((~(g_297 | (-7L))) == ((l_849.f2 || (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_849.f4, (safe_mul_func_int8_t_s_s(((g_658 = (l_870 && (safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_852.f3, ((l_851 ^= (g_687 != g_74.f0)) <= 0xE7L))), l_848)) | l_910), 0UL)))) && g_502.f6), l_852.f2)))), 8))) >= 0x8338BF41L))), 3)) | l_848))), g_826, l_43, l_849.f5), g_74.f2))) < g_275.f4), 1UL));
                    }
                    else
                    {
                        struct S0 l_912 = {0x0CL,0xC3DA4769L,1L,0x8FL,1L,0xAB318C32L,0x6391L};
                        l_912 = g_74;
                        l_926 = (l_925 = (l_849 = func_33((safe_mod_func_int16_t_s_s(g_502.f5, (safe_add_func_uint32_t_u_u((g_74.f4 & 0UL), (safe_mul_func_uint16_t_u_u(2UL, ((l_851 &= 253UL) == (g_130 = 254UL)))))))), func_20((g_687 = ((safe_rshift_func_int8_t_s_s((g_502.f2 >= (l_923 ^= l_870)), 2)) < g_826.f5)), l_870, l_924), l_912.f4, l_42)));
                        return l_912.f5;
                    }
                    l_850 |= (safe_mul_func_uint16_t_u_u((!l_925.f6), ((g_74.f1 > l_929) <= func_20(((0L ^ (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_926.f0 && g_74.f3) && ((func_60((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_687, (l_870 = (func_20((safe_mul_func_int8_t_s_s(((l_831 = (((safe_sub_func_uint32_t_u_u((g_826.f3 < (l_869 = ((-1L) < g_275.f5))), 0xD712698AL)) == g_826.f1) == l_926.f3)) | l_925.f1), l_841)), l_852.f5, l_849.f2) == g_82)))), l_944)), l_848, l_887, g_275.f2) & 0UL) <= g_74.f5)), g_394)), g_502.f1))) > 0xCBF0L), g_394, g_171))));
                }
            }
        }
        else
        {
            unsigned char l_946 = 0xDFL;
            int l_947 = 0x732AFD8EL;
            l_946 = (l_945 && l_887);
            l_947 = func_55(g_502.f0, l_946);
            l_852 = func_18(l_852.f0);
        }
        l_955 = (0L <= (l_852.f3 == ((g_3 && (safe_add_func_uint16_t_u_u(l_950, (l_841 ^ (l_831 = l_852.f6))))) != ((func_24((safe_mul_func_uint8_t_u_u((((g_502.f0 > ((func_4((((l_42 == l_841) ^ l_953) || g_502.f4), g_502, l_887, l_43) | (-7L)) || g_687)) < g_74.f0) || l_43), 1L)), l_954, g_275.f5, g_826) < g_502.f4) > g_502.f6))));
        l_974 = func_18(func_20(func_4((safe_lshift_func_int16_t_s_s((+func_24((l_958 && (g_275.f4 <= (safe_rshift_func_int8_t_s_u(l_840, 6)))), g_275.f0, (l_955 &= func_20(((l_961 ^= g_687) && (l_961 = (~(~(safe_mul_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((l_831 ^= l_966), g_275.f1)) >= (-1L)) > (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_971, 65527UL)), l_972))) & 0x9FL) || g_502.f4), l_841)))))), l_973, g_275.f5)), g_74)), 12)), g_502, l_841, g_502.f4), g_658, g_502.f5));
    }
    else
    {
        g_171 &= g_502.f3;
    }
    return l_972;
}







static short func_4(unsigned p_5, struct S0 p_6, unsigned char p_7, unsigned short p_8)
{
    int l_828 = 0x9B39E308L;
    int l_829 = (-4L);
    int l_830 = 1L;
    l_828 ^= p_7;
    l_830 ^= (l_829 &= 0x748057E9L);
    return l_830;
}







static unsigned char func_14(struct S0 p_15, unsigned p_16, struct S0 p_17)
{
    short l_505 = 0xACFCL;
    int l_506 = 8L;
    unsigned l_514 = 4294967291UL;
    short l_515 = (-1L);
    unsigned char l_551 = 0x7FL;
    int l_623 = (-2L);
    short l_638 = 0x4291L;
    int l_711 = 1L;
    int l_717 = 0xFC717717L;
    int l_756 = (-1L);
    struct S0 l_774 = {0xA5L,0x2E7D322FL,0x44L,247UL,1L,0x4E8CC5C8L,65535UL};
    int l_815 = (-1L);
lbl_611:
    l_506 |= (safe_div_func_uint16_t_u_u(func_55(p_17.f5, (func_24(g_114, g_297, g_130, (p_15 = func_33(p_15.f2, g_275.f3, l_505, (l_505 | p_17.f6)))) || l_505)), l_505));
    for (p_15.f2 = 26; (p_15.f2 >= (-11)); p_15.f2 = safe_sub_func_int16_t_s_s(p_15.f2, 7))
    {
        int l_513 = 0xF3F660C1L;
        int l_531 = 0L;
        unsigned char l_559 = 1UL;
        int l_607 = (-1L);
        struct S0 l_666 = {9L,4294967289UL,0x84L,0x8FL,0x1DE1C84EL,0xAC11F3E4L,0x716CL};
        int l_668 = 7L;
        struct S0 l_762 = {-1L,7UL,0xD0L,1UL,0x6A7357F5L,0UL,1UL};
        int l_779 = 1L;
        int l_795 = 4L;
        g_339 = (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_513, g_74.f0)), l_514));
        if (l_515)
        {
            unsigned char l_518 = 250UL;
            int l_544 = 0xF64A1766L;
            int l_580 = 1L;
            struct S0 l_608 = {-2L,0x38AA8733L,-4L,0xF2L,0x87FBA505L,4294967295UL,1UL};
            l_531 = (0xFEDBADC3L && (safe_mul_func_int8_t_s_s(l_518, (p_15.f3 &= (safe_mod_func_uint16_t_u_u(65535UL, (safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s((!(0x19L != ((p_16 = (safe_mul_func_uint8_t_u_u(func_29((safe_mod_func_int16_t_s_s(l_518, g_275.f3)), (!p_17.f2)), (safe_rshift_func_uint16_t_u_u(g_275.f4, 8))))) >= g_401))), l_518)) || (-4L)), g_129))))))));
            for (l_518 = 0; (l_518 == 20); l_518 = safe_add_func_int8_t_s_s(l_518, 9))
            {
                if (g_394)
                    break;
            }
            if ((safe_mod_func_uint16_t_u_u((((g_155 < ((p_17.f0 = ((safe_mul_func_uint8_t_u_u((g_275.f3 = (p_17.f3 &= func_29(func_60((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_502.f5, 3)), (0x219B264FL == (p_15.f1 = (safe_mul_func_int8_t_s_s((g_339 & (l_531 = ((l_544 = 7UL) | (p_17.f0 || (safe_div_func_int16_t_s_s((((p_15.f3 >= (safe_mul_func_int8_t_s_s(((+l_518) ^ ((l_506 = p_17.f6) <= g_74.f0)), p_15.f2))) ^ 0xFAL) ^ p_17.f4), l_531)))))), g_169)))))), l_513, l_505, g_74.f6), l_518))), 0xCCL)) == p_17.f2)) ^ 0L)) | g_169) > p_15.f6), 0x7BCBL)))
            {
                unsigned short l_552 = 0x6990L;
                int l_560 = (-1L);
                char l_561 = 0L;
                struct S0 l_562 = {1L,0x7EE5616FL,0xF0L,0x82L,0xCD06652DL,4294967295UL,0xE177L};
                int l_590 = 0x4816DE83L;
                unsigned short l_591 = 1UL;
                unsigned l_655 = 4294967289UL;
                if ((safe_lshift_func_uint8_t_u_s(p_17.f5, 5)))
                {
                    l_551 &= p_15.f4;
                    l_552 &= (l_506 = l_518);
                }
                else
                {
                    unsigned short l_563 = 65526UL;
                    l_562 = func_33(g_275.f0, (l_552 > (safe_rshift_func_uint8_t_u_u((func_55(g_502.f5, g_275.f0) && (l_544 = (func_55(l_544, func_29((safe_div_func_uint32_t_u_u((l_518 ^ (l_560 = (safe_mul_func_uint8_t_u_u((func_20(g_275.f6, l_518, g_275.f6) < 0xBD5440D9L), l_559)))), p_16)), l_552)) > 0xBE39L))), 5))), l_561, p_17.f4);
                    l_544 = (l_518 >= (p_15.f4 & (l_563 |= (g_275.f2 = l_562.f1))));
                }
                if ((func_55(p_17.f2, (safe_rshift_func_uint16_t_u_s((g_155 = ((safe_rshift_func_uint16_t_u_s(((249UL | (g_502.f0 <= (safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u((254UL | (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_544 ^= (safe_rshift_func_int8_t_s_u(g_82, p_17.f0))), (safe_sub_func_uint8_t_u_u(((l_580 = (l_562.f2 & (+(g_74.f2 != p_17.f6)))) == 7L), p_17.f6)))), g_401))), l_514)))))) & 4294967295UL), g_275.f0)) < 0xC7F39BF5L)), p_15.f4))) < p_17.f3))
                {
                    unsigned short l_583 = 1UL;
                    int l_606 = 0xF5FCC2F0L;
                    if (g_155)
                    {
                        l_583 = (!(safe_sub_func_uint16_t_u_u(g_74.f3, g_130)));
                        g_502 = func_18(p_15.f4);
                        p_17 = (g_74 = g_502);
                        l_506 &= func_60(g_275.f1, p_15.f6, (safe_sub_func_uint16_t_u_u(l_559, (l_559 >= (safe_rshift_func_uint8_t_u_s(l_562.f4, (safe_div_func_int32_t_s_s((l_591 = (((((5UL & l_590) && (func_20(p_15.f6, g_225, l_562.f1) < 0x158CL)) > 0x536CL) && p_15.f0) && g_82)), g_502.f2))))))), l_544);
                    }
                    else
                    {
                        return g_297;
                    }
                    if (((g_171 &= p_15.f2) || (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((p_15.f1 | (l_583 >= (l_561 < (((l_513 > (l_544 ^= (((-1L) & func_29((p_17.f0 &= (safe_rshift_func_uint8_t_u_u(g_502.f2, g_130))), (l_580 = (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((g_171 = (((g_74.f5 ^ 0L) < 0x415688DAL) && p_15.f1)), l_583)) < p_17.f4), 7))))) & g_502.f4))) <= 0x030FL) ^ g_225)))), 1L)) ^ p_15.f1), p_15.f4)), l_518))))
                    {
                        g_502 = func_33(g_502.f3, g_3, g_275.f0, p_15.f4);
                        l_606 = (safe_rshift_func_int8_t_s_u((l_506 = (+p_17.f4)), g_502.f6));
                        l_562 = (g_502 = func_18(g_129));
                    }
                    else
                    {
                        g_171 ^= (0x38L ^ (l_607 | 5UL));
                        l_606 = g_394;
                        if (g_74.f2)
                            continue;
                    }
                    g_275 = l_608;
                }
                else
                {
                    int l_637 = 0x8C634D49L;
                    for (p_15.f6 = 0; (p_15.f6 == 31); p_15.f6 = safe_add_func_int16_t_s_s(p_15.f6, 5))
                    {
                        l_608 = p_15;
                        g_339 = (-6L);
                        if (g_275.f0)
                            goto lbl_611;
                    }
                    if (((p_15.f6 == func_55((safe_mul_func_uint16_t_u_u((l_513 | ((p_17.f2 == func_20(g_275.f5, g_394, ((safe_add_func_int8_t_s_s(((l_506 = (l_560 = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((g_169 |= 0xD603L))), 3)))) == ((safe_rshift_func_int8_t_s_u(func_55(l_562.f5, (l_623 = (safe_rshift_func_int16_t_s_u(l_608.f5, 7)))), 1)) <= p_17.f3)), g_129)) != 0UL))) & p_15.f1)), 0x5C7DL)), l_562.f5)) != 255UL))
                    {
                        l_623 ^= (safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_275.f6, (+(safe_rshift_func_int16_t_s_u(((0x8A8EB160L && (g_339 = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_637, func_20((l_638 < func_55(l_562.f2, (g_275.f4 &= l_513))), p_17.f0, ((safe_lshift_func_int8_t_s_s(0xEBL, p_15.f5)) || g_155)))), l_608.f5)) ^ g_3))) >= p_15.f1), l_608.f3))))) > l_608.f0), p_15.f4)), (-1L)))));
                        l_506 &= l_513;
                    }
                    else
                    {
                        g_339 |= (safe_lshift_func_int16_t_s_u((l_531 ^= l_560), 5));
                    }
                    g_339 = (l_623 = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((p_15.f3 ^= (l_608.f0 == g_129)), func_20(l_608.f4, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((g_502.f2 | func_60(p_17.f2, p_16, l_513, func_60(p_15.f5, g_169, g_275.f2, l_637))) && 1UL), g_3)), 8)), 6)), l_562.f3))), 8)));
                    l_623 &= (func_20(func_24(g_275.f2, (65535UL != (((((g_225 |= 4294967289UL) & (((!(((safe_div_func_int8_t_s_s(((-2L) != ((l_637 | g_297) == (0UL >= (l_637 ^ (g_275.f3 > l_562.f4))))), 2UL)) <= g_74.f1) != p_16)) || l_637) > 0x7D163C83L)) != g_275.f6) & l_515) ^ g_275.f3)), l_655, l_562), g_3, p_17.f3) || 255UL);
                }
                l_560 = (func_20(p_17.f0, (safe_mul_func_int8_t_s_s(p_15.f2, ((2UL <= l_608.f0) <= (func_20(l_638, (g_225 ^= 5UL), (g_658 = func_55((func_60(g_275.f1, (g_502.f2 = (l_623 &= func_20(g_275.f2, (p_17.f4 <= p_17.f4), g_502.f5))), p_15.f0, g_502.f6) > l_559), l_607))) || 0x6CL)))), g_130) ^ 0xFD55L);
            }
            else
            {
                unsigned char l_663 = 251UL;
                int l_667 = 1L;
                int l_669 = (-1L);
                l_669 = (l_544 = (0x55L == ((l_667 = (safe_sub_func_int32_t_s_s(func_29((safe_add_func_uint32_t_u_u(p_15.f3, l_544)), (l_608.f3 || (-1L))), (((func_24(l_663, ((l_531 = (p_15.f4 == (safe_sub_func_uint8_t_u_u((func_20(g_297, p_15.f5, p_15.f0) >= g_339), p_17.f3)))) == 65533UL), g_275.f4, l_666) | g_3) > g_502.f4) == 0xC265L)))) < l_668)));
            }
        }
        else
        {
            unsigned short l_672 = 0x5A2BL;
            int l_709 = 9L;
            for (l_666.f0 = 0; (l_666.f0 == 29); l_666.f0 = safe_add_func_int8_t_s_s(l_666.f0, 8))
            {
                unsigned short l_683 = 0x4741L;
                int l_684 = (-9L);
                struct S0 l_689 = {-1L,0UL,-8L,0UL,-4L,0x40181DB1L,0x4994L};
                int l_727 = 3L;
                int l_753 = 0L;
                unsigned char l_757 = 7UL;
                char l_763 = 0x63L;
                if ((((g_502.f6 <= (l_672 & func_29((g_74.f2 = ((4294967286UL || (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((g_169 = (safe_sub_func_int32_t_s_s((l_531 = (safe_mul_func_uint16_t_u_u((l_684 ^= func_29((~(safe_lshift_func_int16_t_s_u((g_658 &= (p_17.f4 < ((!l_531) >= g_502.f2))), 10))), l_683)), (safe_mod_func_uint16_t_u_u(g_401, 0x3120L))))), 4294967290UL))) <= g_275.f5), l_515)), 0UL))) < g_275.f2)), p_15.f4))) >= g_687) < g_275.f2))
                {
                    struct S0 l_688 = {0xECL,8UL,0xFFL,0x1DL,0xBED04C85L,0x88BB1949L,65529UL};
                    struct S0 l_690 = {0xA6L,4294967295UL,-3L,0x96L,0L,2UL,0xD7F7L};
                    int l_710 = 1L;
                    short l_712 = (-1L);
                    l_690 = (l_689 = (l_688 = (p_17 = func_18(g_171))));
                    for (p_15.f5 = 0; (p_15.f5 < 28); p_15.f5 = safe_add_func_uint8_t_u_u(p_15.f5, 3))
                    {
                        l_710 = ((g_275.f3 &= (safe_rshift_func_uint16_t_u_s(((((((safe_rshift_func_uint8_t_u_s((g_658 >= g_275.f6), l_689.f6)) ^ ((0x0BL == ((((((p_15.f0 |= (~(safe_mul_func_int16_t_s_s(0xA7B8L, (l_684 ^= (g_502.f2 & (safe_sub_func_int16_t_s_s((l_709 ^= (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_29(((l_668 &= (((-7L) && l_690.f1) ^ (safe_add_func_int8_t_s_s(((g_687 &= (safe_sub_func_int16_t_s_s(1L, p_15.f2))) ^ l_666.f3), p_16)))) || g_130), p_17.f2), 4)), l_514))), (-1L))))))))) & l_689.f6) < g_246) || (-8L)) | g_74.f2) < g_114)) || 7UL)) ^ l_689.f1) <= g_275.f0) != p_17.f2) | 0x10L), 7))) ^ 0xA4L);
                    }
                    l_711 = 7L;
                    if (l_712)
                        break;
                }
                else
                {
                    char l_718 = 9L;
                    unsigned char l_730 = 0x33L;
                    int l_758 = (-3L);
                    g_339 = (l_718 = (safe_div_func_int16_t_s_s(0L, ((p_17.f3 ^= p_15.f2) & ((l_607 && (g_394 |= (((safe_mod_func_int8_t_s_s((l_531 = (g_169 ^ g_74.f6)), 1L)) != (func_29(l_689.f6, l_717) ^ p_17.f0)) ^ p_16))) || p_17.f5)))));
                    if (((l_709 = (((65530UL > ((l_506 = (~(0x757E246BL & g_129))) | p_17.f2)) & (((safe_div_func_int8_t_s_s((func_29((func_20(((safe_sub_func_uint16_t_u_u(0UL, (l_684 &= 65527UL))) > l_709), (safe_sub_func_uint32_t_u_u(1UL, func_20(((safe_lshift_func_int8_t_s_u(l_683, l_711)) >= g_74.f0), l_689.f3, l_727))), p_17.f0) < p_17.f6), g_169) != 1UL), p_15.f5)) ^ l_709) > l_505)) > g_171)) > g_74.f0))
                    {
                        int l_728 = 1L;
                        int l_729 = 0xF02415A3L;
                        l_531 = (l_729 ^= (l_728 < p_17.f3));
                        if (p_17.f0)
                            break;
                        l_709 = g_114;
                    }
                    else
                    {
                        short l_742 = 0L;
                        g_171 &= (65530UL | (l_742 = ((((func_29(l_730, ((func_55((!((g_130 & (g_502.f5 != ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((~(safe_rshift_func_int16_t_s_u((g_275.f0 != (g_658 |= (safe_unary_minus_func_uint8_t_u(g_3)))), 14))), (p_17.f0 ^ ((((safe_sub_func_uint16_t_u_u(65533UL, ((p_17.f1 <= p_17.f0) && l_666.f2))) > 0L) ^ p_17.f3) < l_718)))) & 253UL) <= g_74.f5), 6L)), g_155)) == 0xECL))) & g_74.f0)), g_3) | 0UL) == l_666.f4)) != g_114) | p_15.f3) && 0UL) < p_15.f5)));
                        if (l_666.f3)
                            break;
                        p_17 = func_18(p_17.f4);
                    }
                    l_758 = (safe_rshift_func_int16_t_s_s(((((l_709 != (safe_lshift_func_uint8_t_u_s(((func_29((((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_74.f0, (safe_rshift_func_int8_t_s_u(func_20(l_513, (func_20(p_17.f2, p_17.f4, func_20((((0x39AEL & (0x065EL < (l_753 != (safe_mul_func_uint8_t_u_u(0x27L, l_668))))) || g_502.f4) && g_246), l_756, g_74.f6)) | p_17.f0), l_551), g_339)))) ^ l_666.f2), p_15.f5)) == l_757) | l_730), p_15.f5) | 0xC9L) >= 0UL), l_727))) && g_502.f5) | l_689.f4) | p_17.f3), l_730));
                    l_689 = func_18(g_74.f4);
                }
                if ((safe_rshift_func_int8_t_s_u(g_339, 3)))
                {
                    unsigned l_761 = 0UL;
                    l_684 ^= (l_709 &= p_17.f2);
                    l_761 = 5L;
                    l_762 = func_18(g_275.f0);
                    return l_763;
                }
                else
                {
                    unsigned short l_771 = 4UL;
                    for (g_74.f5 = (-9); (g_74.f5 >= 43); ++g_74.f5)
                    {
                        char l_766 = 0xAFL;
                        l_766 = g_502.f3;
                        l_623 = (((-1L) >= (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(0L, 4)), l_766))) == (l_771 != g_171));
                        g_339 = l_771;
                    }
                }
                if ((g_502.f1 && (g_155 = func_60(g_74.f0, g_171, p_17.f1, (safe_mod_func_uint32_t_u_u((+g_275.f1), (g_339 |= (0UL > p_16))))))))
                {
                    l_774 = p_15;
                }
                else
                {
                    l_506 = 4L;
                }
            }
            l_709 ^= (252UL != (g_130 &= 1UL));
        }
        g_339 &= ((safe_mul_func_int16_t_s_s((p_15.f2 != p_15.f2), (g_687 = (((safe_div_func_int32_t_s_s((l_668 |= p_17.f1), l_779)) == ((safe_rshift_func_uint16_t_u_u(p_15.f2, (!l_717))) < ((-1L) <= ((safe_sub_func_int32_t_s_s(g_275.f3, (p_16 ^= func_29((((((0xFEL && g_502.f6) == l_666.f2) ^ 0UL) != 0x4FL) > g_502.f5), p_17.f4)))) || l_762.f3)))) ^ p_15.f1)))) | g_502.f4);
        if ((g_339 = g_74.f6))
        {
            unsigned short l_805 = 1UL;
            l_668 = 0x3F62E05AL;
            for (g_502.f4 = 0; (g_502.f4 > 18); g_502.f4++)
            {
                char l_800 = 0x2DL;
                int l_806 = 0x5C7108E7L;
                l_506 &= ((p_17.f2 |= g_658) == g_3);
                g_74 = p_15;
                l_806 = (safe_div_func_int16_t_s_s(func_29(p_17.f3, ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(l_795, 14)) >= 1L), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(l_800, ((p_17.f1 >= (((g_74.f0 | ((safe_lshift_func_int16_t_s_u((g_658 |= (safe_mul_func_uint16_t_u_u(g_275.f1, func_29(g_297, l_762.f6)))), p_17.f0)) && p_15.f1)) || l_805) & g_275.f0)) || l_805))), p_15.f4)))) <= g_114) || p_17.f2), g_155)))) && g_687)), p_15.f1));
            }
        }
        else
        {
            struct S0 l_807 = {0x1BL,4294967295UL,0x6AL,0xE5L,1L,0x4FD655FAL,0xA12EL};
            l_807 = func_18(g_502.f2);
        }
    }
    for (g_275.f5 = (-1); (g_275.f5 >= 16); g_275.f5 = safe_add_func_uint32_t_u_u(g_275.f5, 6))
    {
        int l_816 = 0x57A3346CL;
        int l_825 = 0x25C7B2A5L;
        l_825 = (safe_div_func_uint32_t_u_u(g_658, func_29((safe_unary_minus_func_uint8_t_u(p_17.f6)), ((l_815 || (l_816 >= (safe_mul_func_int8_t_s_s(0L, (((0x53L != (safe_rshift_func_int16_t_s_s(l_774.f4, 15))) == (safe_lshift_func_uint8_t_u_u(g_74.f5, 2))) <= (safe_mod_func_int16_t_s_s(l_774.f4, 0x2EEAL))))))) & l_774.f0))));
    }
    return g_502.f5;
}







static struct S0 func_18(unsigned short p_19)
{
    char l_353 = 0xB5L;
    int l_364 = 4L;
    int l_365 = 0x6C6C8B0EL;
    int l_366 = 0xA428A5F0L;
    int l_367 = 0L;
    int l_384 = 0x98A58966L;
    unsigned l_387 = 0xE51FFDDDL;
    int l_395 = 1L;
    struct S0 l_396 = {0x4EL,0UL,0xA8L,3UL,0xE3756379L,4294967295UL,65535UL};
    struct S0 l_458 = {1L,0x893299ABL,0x2FL,0x75L,0x1433D744L,4294967294UL,1UL};
    short l_499 = 0xDC41L;
    g_74 = g_275;
    g_171 = (l_353 > ((l_367 = ((safe_sub_func_int16_t_s_s((0x0160L && func_55(p_19, l_353)), ((l_366 = ((safe_mod_func_uint8_t_u_u(g_275.f6, l_353)) && (l_365 |= (safe_lshift_func_int16_t_s_s(((0L == (l_364 |= (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((~func_60(l_353, l_353, l_353, l_353)) >= 0L), g_275.f0)), p_19)))) == g_129), 7))))) > p_19))) == l_353)) > l_353));
    l_366 ^= g_297;
    if (((safe_rshift_func_int8_t_s_s((((((safe_sub_func_uint16_t_u_u(l_365, (((safe_mul_func_int8_t_s_s(g_129, ((l_364 = ((l_366 != p_19) && (safe_div_func_int32_t_s_s((func_60(p_19, g_3, ((g_275.f5 >= l_364) > (l_366 = (l_367 |= (0xFEB7L ^ p_19)))), g_74.f0) && 0x0198L), 1UL)))) == p_19))) != p_19) >= p_19))) > 0x94L) ^ p_19) & p_19) <= l_353), p_19)) | p_19))
    {
        unsigned char l_383 = 0UL;
        int l_385 = (-1L);
        int l_386 = 0xC4EC4609L;
        short l_424 = 0x4B2BL;
        int l_467 = 0x32A69606L;
        short l_485 = 7L;
        unsigned short l_487 = 3UL;
        struct S0 l_488 = {0L,0x5F8ECFF0L,-1L,5UL,-2L,0x57B6DC8CL,5UL};
        l_387 = (safe_mul_func_uint8_t_u_u(p_19, (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(246UL)) && func_20(l_364, (g_275.f2 ^ (((g_275.f0 &= l_364) & g_3) <= 0x680D6E97L)), (((safe_sub_func_int16_t_s_s((l_386 |= (l_366 |= func_55(((l_385 |= ((l_383 = g_171) > (l_365 ^ l_384))) & 0x551CB4CDL), g_275.f2))), 0xE7E9L)) || g_74.f3) & 0x04L))) & 0UL), 0x627DL))));
        if (((safe_mod_func_uint8_t_u_u((p_19 ^ ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_275.f3, ((g_394 &= (-10L)) | func_29(l_383, (~p_19))))), g_339)) >= 0xCFL)), l_395)) != 1UL))
        {
            g_171 = 0x533656A4L;
            l_396 = g_74;
        }
        else
        {
            int l_414 = (-6L);
            int l_443 = 0x6122D1E0L;
            struct S0 l_445 = {-4L,4294967295UL,2L,0x8FL,0xC374DF2FL,1UL,65535UL};
            if (((safe_add_func_int32_t_s_s((g_401 &= func_20((l_367 != func_24(g_74.f6, (0x20D30CB4L > func_20(l_396.f2, (g_275.f3 || (0x80CFL >= (safe_lshift_func_uint8_t_u_s(g_155, 3)))), p_19)), l_365, g_275)), g_394, l_367)), g_3)) & p_19))
            {
                return g_275;
            }
            else
            {
                int l_435 = 0x1D895571L;
                struct S0 l_444 = {0xEFL,4294967288UL,0x49L,0x50L,0xD2FFA29CL,0xA56A7DEAL,8UL};
                unsigned l_446 = 0x873B9A3AL;
                int l_455 = 0x5A0BC34AL;
                for (p_19 = 13; (p_19 <= 58); ++p_19)
                {
                    short l_436 = 0xA95CL;
                    struct S0 l_438 = {-1L,4294967295UL,0x3CL,0x8BL,8L,0xA4EE8857L,0UL};
                    for (g_74.f4 = (-8); (g_74.f4 != 22); ++g_74.f4)
                    {
                        unsigned l_423 = 4294967286UL;
                        struct S0 l_437 = {0x9EL,0UL,7L,0xC0L,0x3BDF0A96L,0x437AFC53L,0UL};
                        l_367 &= (+((((-1L) >= (safe_mod_func_int32_t_s_s(g_130, (0x716EL ^ ((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_74.f3 = (safe_mod_func_int8_t_s_s(func_60((l_414 >= (l_435 &= func_29(p_19, (safe_div_func_uint32_t_u_u((func_20(p_19, (safe_rshift_func_uint16_t_u_s(func_20(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_423 || (l_424 & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_383 < 0UL), 8)), l_414)), g_74.f3)), (-7L))))), p_19)), (-3L))) <= l_385), g_171, p_19), l_396.f5)), g_114) < 0xBAL), (-6L)))))), g_171, p_19, l_396.f5), g_394))), l_396.f4)), g_275.f1)) || 65530UL))))) ^ 0x2FL) > 1UL));
                        if (l_423)
                            break;
                        l_436 = 1L;
                        l_438 = l_437;
                    }
                    g_339 |= ((l_386 = 1UL) >= (g_275.f0 != (l_443 = (!(safe_rshift_func_int16_t_s_u(p_19, (safe_lshift_func_int8_t_s_s((1UL & (l_414 = g_74.f1)), 1))))))));
                }
                l_445 = l_444;
                l_443 = (l_455 = func_29(l_446, (l_414 = func_55(l_445.f2, (safe_mul_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u((g_130 |= (safe_add_func_int8_t_s_s((l_366 = (l_444.f4 >= (g_394 >= l_424))), (0UL || ((((0x3AD9L || ((g_339 = p_19) <= p_19)) ^ g_275.f4) <= g_171) < 0x9CFBFC27L))))), l_444.f3)) || p_19) < p_19) ^ l_444.f6) ^ p_19), g_275.f5))))));
            }
            for (g_275.f1 = 0; (g_275.f1 == 5); ++g_275.f1)
            {
                l_414 |= p_19;
                return l_458;
            }
            for (g_155 = 7; (g_155 < 6); g_155 = safe_sub_func_uint32_t_u_u(g_155, 6))
            {
                int l_470 = (-1L);
                l_366 = (func_55(p_19, l_386) & (l_385 &= (safe_add_func_int16_t_s_s(func_60((l_470 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_467, ((safe_rshift_func_uint16_t_u_u(3UL, 5)) != g_275.f3))), 7))), (g_275.f2 = p_19), (safe_lshift_func_int8_t_s_s(l_395, 3)), ((g_297 | l_458.f3) >= 0L)), l_424))));
                g_339 ^= 0x3FDABBAAL;
            }
        }
        if (p_19)
        {
            for (l_396.f5 = 0; (l_396.f5 == 35); l_396.f5 = safe_add_func_int32_t_s_s(l_396.f5, 3))
            {
                return l_458;
            }
        }
        else
        {
            unsigned short l_486 = 65526UL;
            g_339 = ((((g_297 >= p_19) & (l_366 = ((l_467 = (((0x9DF7L >= 0x2D68L) ^ (l_364 = (safe_sub_func_uint16_t_u_u((p_19 != (+0x64E5F82FL)), (safe_rshift_func_uint8_t_u_u(((l_365 &= 0UL) > ((safe_div_func_uint8_t_u_u((func_55((l_485 = (g_74.f3 = (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(0x0D95D459L, p_19)), 0x298FL)))), g_275.f6) || l_486), g_3)) ^ l_396.f5)), 3)))))) > 0x32L)) & 0xA9L))) | l_487) >= (-2L));
        }
        l_488 = g_74;
    }
    else
    {
        int l_494 = 0L;
        int l_497 = 0x59ABE277L;
        struct S0 l_500 = {-1L,0x6087E686L,0x28L,8UL,-7L,4294967295UL,65535UL};
        for (l_396.f2 = 0; (l_396.f2 <= (-6)); l_396.f2 = safe_sub_func_uint32_t_u_u(l_396.f2, 5))
        {
            unsigned char l_491 = 248UL;
            l_491 = p_19;
            if ((p_19 > p_19))
            {
                unsigned char l_498 = 1UL;
                l_366 = (g_171 ^= (l_497 ^= ((safe_mul_func_int8_t_s_s(0x7CL, (l_494 = 0xC3L))) ^ (safe_sub_func_uint32_t_u_u(((l_367 ^= (!g_74.f2)) | (g_339 = 1L)), p_19)))));
                l_498 = p_19;
            }
            else
            {
                l_366 = (l_499 < g_74.f4);
            }
            l_497 ^= p_19;
        }
        g_74 = l_500;
    }
    return g_74;
}







static unsigned char func_20(short p_21, unsigned p_22, short p_23)
{
    unsigned short l_350 = 0x940AL;
    return l_350;
}







static unsigned func_24(short p_25, unsigned short p_26, unsigned p_27, struct S0 p_28)
{
    unsigned short l_83 = 4UL;
    int l_94 = 1L;
    int l_95 = 0xAEF758CFL;
    int l_113 = 0x5F7338A2L;
    struct S0 l_159 = {8L,4294967290UL,-10L,0x09L,0xAC8149AEL,0x80568E96L,0xEFB8L};
    char l_168 = 0L;
    unsigned l_313 = 0x345AD655L;
    int l_349 = 0x396BA76FL;
    l_95 &= (((~(g_74.f1 = func_29(func_60(l_83, (safe_mul_func_int8_t_s_s((0UL ^ (p_28.f1 = (safe_lshift_func_uint16_t_u_u(p_28.f6, ((safe_lshift_func_uint8_t_u_u(((((l_94 = (safe_lshift_func_int8_t_s_s((g_3 >= (safe_add_func_int8_t_s_s(p_28.f5, 0xD8L))), 0))) == ((-5L) <= l_83)) == 0xDEL) || l_94), 6)) ^ p_28.f1))))), p_28.f0)), g_74.f1, g_3), g_74.f6))) <= l_83) & 255UL);
    if (((((g_74.f2 == (0L == ((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(0UL, p_28.f6)) > (+g_82)) < 1L), ((!(p_26 ^= 65529UL)) ^ g_74.f6))) < (safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(g_74.f3, 0x96L)) < 255UL), l_83))) != g_74.f1), g_74.f5)) <= l_95))) == p_28.f4) > 0x86L) ^ 1UL))
    {
        unsigned l_112 = 0x864EC0B5L;
        struct S0 l_115 = {0L,0x0E403E3AL,8L,0xBDL,0L,0xD6E4BE99L,5UL};
        l_94 = (!((l_113 ^= (p_26 == (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((g_74.f2 <= ((p_25 && (p_28.f1 & l_83)) < l_94)), ((func_29(p_28.f6, func_60((l_112 &= 0UL), func_29((((l_95 |= 0x856DL) != 0xD187L) >= (-10L)), l_83), g_74.f5, l_83)) < 0x573BL) < 0UL))), 1)) && 4L) & g_74.f2))) != l_83));
        g_114 &= g_74.f0;
        l_115 = l_115;
    }
    else
    {
        int l_128 = 0x353D154CL;
        int l_156 = 0x33B9DB78L;
        g_130 = func_29((g_74.f0 = p_28.f0), (g_129 = (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_94 > (((safe_lshift_func_int16_t_s_s(0xE7BAL, 9)) || (p_26 = p_28.f3)) & ((safe_mul_func_uint16_t_u_u(((p_28.f4 & p_28.f2) != g_74.f2), g_74.f2)) < (((l_113 && p_28.f5) == 1UL) >= 6UL)))), p_28.f1)), l_128)), p_25))));
        g_155 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(g_74.f5, 3)), (+(safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_28.f3, p_27)), ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_95 > p_28.f2), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0UL | func_29(l_95, p_28.f5)), p_28.f1)), p_25)))), p_28.f4)), g_74.f6)) != p_28.f4)))))), l_94)) >= 0xA4D4997DL), 9)), p_28.f3)) <= l_128);
        l_156 = g_130;
    }
    if (l_83)
    {
        struct S0 l_160 = {0L,0x52A6C9F1L,1L,0x5AL,0xC90BC308L,0x421BC624L,0x912EL};
        short l_167 = (-6L);
        int l_181 = 0x60F172A5L;
        for (p_27 = (-11); (p_27 < 44); ++p_27)
        {
            l_160 = l_159;
            if (l_159.f3)
                goto lbl_170;
        }
lbl_170:
        g_169 = (((g_130 = (g_114 = func_29(((l_113 |= ((((p_28.f2 || 0xEF60L) == ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_74.f3, ((((g_155 && (-1L)) & 0UL) ^ (0xBEDBL && (safe_mul_func_int16_t_s_s(p_28.f5, g_82)))) < l_159.f4))), l_167)) < 0xE4EFL)) >= (-5L)) | 0x8A05L)) && p_25), l_159.f4))) == l_168) < 0L);
        if ((g_171 ^= l_159.f4))
        {
            short l_174 = 0L;
            int l_177 = 0x6566451EL;
            struct S0 l_190 = {0xBDL,1UL,1L,255UL,0xAA19CEE7L,0xFB06713FL,1UL};
            int l_286 = 0xCFF0F9C1L;
            unsigned l_306 = 0x3FA23589L;
            if ((safe_sub_func_int8_t_s_s(func_60(p_28.f6, l_160.f1, l_174, (safe_lshift_func_uint8_t_u_u(253UL, l_160.f1))), (g_3 <= l_159.f3))))
            {
                p_28 = l_159;
                g_171 &= 1L;
            }
            else
            {
                unsigned char l_178 = 1UL;
                int l_189 = (-3L);
                short l_212 = 0x43CEL;
                unsigned short l_253 = 3UL;
                int l_256 = 0x07D8DE42L;
                unsigned char l_273 = 0x04L;
                struct S0 l_274 = {0xA3L,0UL,0L,0xD3L,0x5B4272BEL,4294967295UL,4UL};
                unsigned l_278 = 1UL;
                l_177 |= 0xA8C9CD3FL;
                if (((l_177 = (l_178 | g_171)) & (p_28.f5 | 0L)))
                {
                    int l_188 = 0x1D4C4AE1L;
                    int l_191 = 0xD2E4DB81L;
                    if ((((1L || p_27) != (l_159.f2 ^ ((safe_mul_func_int8_t_s_s(((l_181 = (((p_26 = g_171) ^ g_3) <= 0xBD79L)) && (l_189 ^= (p_28.f3 ^= ((safe_rshift_func_int16_t_s_s(g_74.f1, (safe_rshift_func_uint16_t_u_u(g_74.f3, 15)))) != (func_60((g_155 = ((((safe_rshift_func_uint8_t_u_u(p_28.f1, 0)) != g_74.f0) & 0x05A3L) || 3L)), l_188, p_26, l_188) >= l_167))))), g_74.f1)) | l_178))) <= g_74.f5))
                    {
                        return g_74.f3;
                    }
                    else
                    {
                        int l_203 = 7L;
                        int l_213 = 3L;
                        g_74 = l_190;
                        if (p_28.f5)
                            goto lbl_192;
lbl_192:
                        l_191 |= (p_25 < ((g_171 <= p_26) && 0x1AL));
                        l_203 = (l_213 ^= (p_27 <= ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((l_203 || g_74.f4), 3)) > ((p_28.f6 = l_191) == func_60((safe_sub_func_int32_t_s_s(func_29((safe_add_func_uint16_t_u_u((+(safe_lshift_func_int16_t_s_s(((p_28.f1 != l_160.f2) < (l_203 <= g_74.f4)), 8))), (safe_rshift_func_uint16_t_u_u(p_28.f3, 3)))), l_189), l_203)), g_3, p_28.f5, g_3))) | p_25), g_171)) <= g_169) < l_212), p_28.f2)), l_203)) == 9UL), l_160.f6)) && p_27)));
                    }
                    return l_190.f0;
                }
                else
                {
                    unsigned l_214 = 0UL;
                    int l_233 = 1L;
                    l_214 = (p_28.f5 <= p_27);
                    for (p_26 = 23; (p_26 != 48); p_26 = safe_add_func_int8_t_s_s(p_26, 1))
                    {
                        unsigned short l_232 = 65535UL;
                        l_233 = (safe_sub_func_uint8_t_u_u(247UL, (0x81L == ((p_25 = ((l_189 < 0xE39F17A2L) && (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_27, (g_225 = (safe_lshift_func_int8_t_s_s(g_114, 0))))) || (func_60((1L ^ (g_74.f3 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_181 = ((g_74.f6 ^ (l_214 | 0x2614C50DL)) && l_232)), g_3)), 254UL)), l_189)))), p_28.f4, g_74.f6, g_74.f6) == g_171)), p_28.f0)))) == 0x0AF1L))));
                        if (g_74.f4)
                            continue;
                        l_177 |= ((l_95 = ((g_246 |= ((p_28.f3 > (g_129 | l_83)) > func_55(((l_181 = func_29(g_129, ((p_28.f3 >= (safe_mod_func_int16_t_s_s(func_29((safe_mod_func_int8_t_s_s((((g_171 = ((0xA124CA03L <= g_74.f0) || ((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((g_74.f3 != func_60(l_94, g_225, p_28.f4, p_27)) != g_3) != p_28.f0), 0x3F9EL)), p_28.f3)), 0x17C50ED0L)), l_160.f1)) & p_27))) > 0L) && p_28.f1), 0xACL)), p_28.f2), p_26))) <= g_74.f3))) | l_232), g_74.f3))) && g_74.f3)) == (-1L));
                        l_256 = (safe_mul_func_int8_t_s_s(p_26, (l_189 = (p_28.f1 ^ (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_130 != (l_253 ^ g_225)), (p_28.f6 = (safe_mul_func_uint8_t_u_u(p_28.f6, func_55(p_28.f0, p_26)))))), 0xFEA6F251L))))));
                    }
                    p_28 = g_74;
                }
                if (func_60(g_74.f3, ((g_171 = (safe_lshift_func_uint16_t_u_s(65533UL, p_28.f3))) ^ (safe_rshift_func_uint8_t_u_s(((((l_94 ^= (safe_div_func_uint16_t_u_u(func_29(g_155, g_225), (safe_sub_func_int16_t_s_s(p_28.f6, ((safe_lshift_func_int8_t_s_u(l_160.f3, 1)) <= (((safe_mod_func_uint32_t_u_u(((l_181 |= (p_28.f0 == 0x2F45142BL)) && l_189), p_28.f2)) < p_28.f3) ^ l_178))))))) < l_159.f4) <= g_74.f5) ^ g_225), p_28.f0))), g_129, l_190.f1))
                {
                    short l_269 = 0x341DL;
                    l_269 ^= 8L;
                    return g_74.f3;
                }
                else
                {
                    int l_272 = 1L;
                    g_171 ^= (safe_add_func_int16_t_s_s(0xB48CL, func_55((g_114 = p_28.f2), l_272)));
                    if (l_273)
                    {
                        g_74 = l_160;
                    }
                    else
                    {
                        g_275 = (g_74 = l_274);
                        l_278 = (safe_mod_func_int8_t_s_s(g_82, p_28.f2));
                    }
                }
                for (p_26 = 0; (p_26 >= 19); p_26 = safe_add_func_uint32_t_u_u(p_26, 5))
                {
                    unsigned char l_285 = 0xABL;
                    for (l_256 = (-10); (l_256 < 8); l_256++)
                    {
                        l_189 ^= (g_74.f3 < g_129);
                        g_171 = 0x4FFD4399L;
                        if (g_74.f1)
                            break;
                    }
                    for (l_159.f2 = 0; (l_159.f2 != 15); l_159.f2 = safe_add_func_uint32_t_u_u(l_159.f2, 6))
                    {
                        l_285 = g_275.f5;
                        l_95 |= (((g_225 == (p_28.f2 && (l_256 = (l_286 ^ ((g_74.f6 <= (!(l_181 &= (0xCB1DL | (safe_sub_func_int32_t_s_s((4UL ^ (safe_sub_func_int32_t_s_s((g_171 &= p_28.f2), (safe_rshift_func_uint8_t_u_u(((0x0D85L & p_28.f6) == 0x59AAL), p_27))))), g_114)))))) < g_246))))) > l_159.f1) & p_28.f2);
                        g_297 |= (+(g_171 = (safe_mod_func_int32_t_s_s(0xA5C7AFD3L, l_174))));
                        g_275 = (p_28 = g_275);
                    }
                    g_171 = ((safe_mul_func_uint8_t_u_u(1UL, (g_225 ^ (p_28.f0 = (safe_lshift_func_uint8_t_u_u(0x1BL, (0xBEDEL && (safe_lshift_func_int8_t_s_s(g_114, 6))))))))) & ((safe_add_func_int16_t_s_s((p_25 = (253UL | l_306)), g_246)) == 253UL));
                }
            }
        }
        else
        {
            unsigned char l_316 = 0x0BL;
            g_171 &= (safe_div_func_int8_t_s_s((l_95 = (safe_rshift_func_uint8_t_u_u(g_275.f3, (safe_mul_func_int16_t_s_s(l_313, (~(safe_rshift_func_uint8_t_u_u(g_74.f0, l_83)))))))), (l_316 = p_28.f6)));
            p_28 = g_74;
            g_339 = ((p_25 && 0xC65AL) >= (safe_lshift_func_uint16_t_u_s(l_316, (safe_lshift_func_uint8_t_u_u((((g_82 = (((g_297 & (safe_mul_func_int8_t_s_s((func_29((l_181 = (g_275.f3 ^ (safe_lshift_func_uint8_t_u_s(247UL, 6)))), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((!0x3E700611L), (safe_div_func_uint8_t_u_u((0x5061L != (l_113 = p_28.f4)), l_160.f6)))) == l_167), 6)) > p_27) ^ 0xBB49L) < l_160.f1), 1UL)), g_275.f3)), l_160.f4)), 0))) < l_316), 0x69L))) != p_27) ^ 1L)) > 0x2AL) == p_27), p_28.f5)))));
        }
    }
    else
    {
        return l_159.f1;
    }
    if (l_159.f4)
    {
        return l_94;
    }
    else
    {
        int l_342 = (-1L);
        int l_343 = 1L;
        int l_344 = (-1L);
        l_344 |= (safe_add_func_int32_t_s_s(g_74.f5, (l_343 ^= l_342)));
        l_343 = (0UL | (g_74.f0 ^ ((((((p_26 = ((func_29((g_74.f2 = (l_113 = func_60((safe_div_func_uint16_t_u_u((0x60L == (safe_div_func_int32_t_s_s(g_130, 0x0B50B8F9L))), (0x030D9EC7L | l_344))), (p_28.f2 = p_28.f0), g_169, l_349))), g_74.f6) <= (-6L)) ^ 0x1EA2L)) >= p_28.f6) >= l_349) == g_275.f2) == 0x2474L) != p_28.f4)));
    }
    return l_313;
}







static unsigned func_29(char p_30, int p_31)
{
    char l_32 = 0x9BL;
    l_32 = 0xE19F8C51L;
    return p_30;
}







static struct S0 func_33(short p_34, int p_35, unsigned p_36, unsigned p_37)
{
    struct S0 l_46 = {0x39L,1UL,0xF5L,0x6FL,-4L,9UL,0x7A2DL};
    unsigned l_69 = 0x1AB372C2L;
    for (p_37 = 6; (p_37 < 11); p_37++)
    {
        p_35 = 0xF45A3231L;
        return l_46;
    }
    for (l_46.f2 = 0; (l_46.f2 > (-26)); l_46.f2--)
    {
        unsigned l_73 = 0UL;
        g_82 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_34, 10)), (safe_rshift_func_uint8_t_u_u((l_46.f0 | ((func_29(((p_36 = (func_55(((safe_sub_func_int32_t_s_s(((func_60((safe_mul_func_int16_t_s_s(p_37, (safe_sub_func_int16_t_s_s(l_69, ((safe_lshift_func_int8_t_s_s(p_36, p_37)) != g_3))))), g_3, p_34, g_3) < 8L) ^ g_3), 4294967286UL)) == 4294967295UL), l_73) ^ g_3)) < p_35), l_46.f5) <= g_3) != p_34)), g_3))));
    }
    return g_74;
}







static unsigned char func_55(unsigned char p_56, int p_57)
{
    short l_77 = 1L;
    unsigned l_80 = 4294967289UL;
    int l_81 = 0x236CF92AL;
    g_74 = g_74;
    l_81 &= (safe_rshift_func_uint8_t_u_u(((l_77 < ((-1L) && g_74.f0)) ^ ((((safe_rshift_func_int8_t_s_s(((g_3 > l_77) >= (l_77 != ((func_29(g_3, func_29(p_56, p_57)) || (-1L)) || l_77))), 5)) != g_74.f5) | g_74.f0) ^ l_80)), 5));
    return l_80;
}







static unsigned func_60(unsigned short p_61, char p_62, unsigned char p_63, int p_64)
{
    struct S0 l_72 = {0x06L,0x71F67B26L,0xECL,0x2DL,0xFAEFF9B1L,0UL,65535UL};
    l_72 = l_72;
    return p_64;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_74.f6, "g_74.f6", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_275.f2, "g_275.f2", print_hash_value);
    transparent_crc(g_275.f3, "g_275.f3", print_hash_value);
    transparent_crc(g_275.f4, "g_275.f4", print_hash_value);
    transparent_crc(g_275.f5, "g_275.f5", print_hash_value);
    transparent_crc(g_275.f6, "g_275.f6", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_502.f4, "g_502.f4", print_hash_value);
    transparent_crc(g_502.f5, "g_502.f5", print_hash_value);
    transparent_crc(g_502.f6, "g_502.f6", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_826.f0, "g_826.f0", print_hash_value);
    transparent_crc(g_826.f1, "g_826.f1", print_hash_value);
    transparent_crc(g_826.f2, "g_826.f2", print_hash_value);
    transparent_crc(g_826.f3, "g_826.f3", print_hash_value);
    transparent_crc(g_826.f4, "g_826.f4", print_hash_value);
    transparent_crc(g_826.f5, "g_826.f5", print_hash_value);
    transparent_crc(g_826.f6, "g_826.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
