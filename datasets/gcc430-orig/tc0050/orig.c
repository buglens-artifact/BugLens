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



static short g_8 = 0L;
static int g_73 = 0xD57ECA51L;
static int *g_72 = &g_73;
static int g_92[7][8] = {{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0x99669D59L,0L,0L,0x99669D59L,0L,0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0x99669D59L,0L,0L,0x99669D59L,(-1L),(-1L)},{0x99669D59L,(-1L),0x99669D59L,0x99669D59L,(-1L),0x99669D59L,0x99669D59L,(-1L)}};
static int **g_173 = &g_72;
static int ***g_172[6][4][6] = {{{&g_173,(void*)0,&g_173,(void*)0,&g_173,&g_173},{&g_173,(void*)0,(void*)0,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,(void*)0,(void*)0,&g_173},{&g_173,&g_173,(void*)0,&g_173,(void*)0,&g_173}},{{(void*)0,&g_173,&g_173,&g_173,&g_173,(void*)0},{&g_173,(void*)0,&g_173,(void*)0,&g_173,&g_173},{&g_173,(void*)0,(void*)0,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,(void*)0,(void*)0,&g_173}},{{&g_173,&g_173,(void*)0,&g_173,(void*)0,&g_173},{(void*)0,&g_173,&g_173,&g_173,&g_173,(void*)0},{&g_173,(void*)0,&g_173,(void*)0,&g_173,&g_173},{&g_173,(void*)0,(void*)0,&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173,(void*)0,(void*)0,&g_173},{&g_173,&g_173,(void*)0,&g_173,(void*)0,&g_173},{(void*)0,(void*)0,&g_173,&g_173,(void*)0,&g_173},{&g_173,&g_173,&g_173,&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173,&g_173,(void*)0,&g_173},{&g_173,(void*)0,&g_173,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,&g_173,&g_173,&g_173},{&g_173,(void*)0,&g_173,&g_173,(void*)0,&g_173}},{{&g_173,&g_173,&g_173,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,&g_173,(void*)0,&g_173},{&g_173,(void*)0,&g_173,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,&g_173,&g_173,&g_173}}};
static char g_208 = 1L;
static int g_226[1] = {0x75F0E6FBL};
static int g_335[2][2][1] = {{{0xE3D8E4E1L},{0xE3D8E4E1L}},{{0xE3D8E4E1L},{0xE3D8E4E1L}}};
static unsigned g_470 = 0UL;
static int *g_722 = &g_92[3][6];
static int g_944 = 0x46E96AD6L;
static unsigned g_970 = 0xD166F6F9L;
static unsigned short g_991 = 1UL;
static int g_996 = 0x7AC7D66FL;
static int g_1016 = 0x4DAF2EE0L;



static const unsigned char func_1(void);
static short func_4(unsigned char p_5, unsigned char p_6);
static short func_16(unsigned short p_17, unsigned p_18, int p_19, unsigned p_20, unsigned char p_21);
static const char func_32(int p_33, int p_34);
static short func_37(int p_38, int p_39, unsigned p_40);
static unsigned func_41(const int p_42);
static char func_43(const unsigned char p_44, char p_45, short p_46);
static unsigned char func_56(char p_57, unsigned short p_58);
static int * func_63(unsigned p_64, int * p_65, int * p_66);
static int * func_67(int * p_68, int * p_69, short p_70);
static const unsigned char func_1(void)
{
    unsigned l_7 = 7UL;
    const char l_24 = (-1L);
    int *l_1012 = (void*)0;
    short l_1013 = 0xD16BL;
    unsigned l_1014 = 4294967295UL;
    int *** const l_1017 = &g_173;
    (*g_722) = ((safe_add_func_int16_t_s_s(func_4(l_7, g_8), (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(func_4(l_7, (safe_sub_func_int16_t_s_s(func_16((func_4((((0x1BL <= ((l_7 != ((l_7 , g_8) && (safe_add_func_uint16_t_u_u(0x3E75L, l_24)))) > l_7)) ^ l_7) , g_8), l_7) , l_7), g_8, g_8, l_7, l_7), l_24))), 7)), l_7)))) || (*g_72));
    (*g_722) = (((g_991 , 0x3FE6L) && l_24) & func_37((l_1012 == l_1012), g_226[0], ((((void*)0 != (*g_173)) ^ ((func_56(l_1013, l_1014) < (*g_722)) , (*g_72))) | l_1014)));
    (*g_722) = (((g_226[0] ^ (safe_unary_minus_func_int16_t_s((g_92[3][6] | (65534UL >= (g_335[0][1][0] & g_1016)))))) > g_944) > (g_1016 & (l_1017 != l_1017)));
    (**l_1017) = (**l_1017);
    return g_970;
}







static short func_4(unsigned char p_5, unsigned char p_6)
{
    int l_9 = (-1L);
    return l_9;
}







static short func_16(unsigned short p_17, unsigned p_18, int p_19, unsigned p_20, unsigned char p_21)
{
    unsigned l_25 = 6UL;
    const int l_946 = 0x7401CB88L;
    const int *l_998 = (void*)0;
    const int **l_997 = &l_998;
    int l_999[6] = {(-1L),(-1L),0L,(-1L),(-1L),0L};
    int *l_1000 = (void*)0;
    int *l_1001 = &g_335[0][1][0];
    int *l_1002 = &g_335[0][1][0];
    int *l_1003 = (void*)0;
    int *l_1004 = &g_335[1][0][0];
    int *l_1005 = &g_996;
    int *l_1006 = &g_226[0];
    int *l_1007[1][5];
    short l_1008 = (-5L);
    unsigned l_1009[2][2][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_1007[i][j] = &l_999[1];
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_1009[i][j][k] = 4294967286UL;
        }
    }
    ++l_25;
    for (p_19 = 17; (p_19 <= (-29)); p_19 = safe_sub_func_uint16_t_u_u(p_19, 8))
    {
        unsigned char l_551 = 0UL;
        const short l_552 = (-9L);
        for (l_25 = (-16); (l_25 >= 51); ++l_25)
        {
            unsigned char l_53 = 0x39L;
            int l_943 = 0xB52BEF85L;
            int *l_994 = (void*)0;
            int *l_995 = &g_996;
        }
        (*g_173) = (*g_173);
    }
    (*l_997) = &l_946;
    l_1009[0][0][0]++;
    return p_21;
}







static const char func_32(int p_33, int p_34)
{
    short l_950 = (-1L);
    int l_954 = 1L;
    int l_955 = (-5L);
    int l_956 = 0xCDB648A4L;
    int l_957 = 0x5831E4C3L;
    int l_959 = 7L;
    int l_961 = 0xAD226DFEL;
    int l_962 = 0xBFFE1062L;
    int l_963 = 0x52DC9E24L;
    int l_964 = 0xF1F8CD48L;
    int l_965 = 8L;
    int l_966 = (-1L);
    int l_967 = 0x3D7F28B7L;
    int l_968[3];
    short l_969[4][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
    int *l_985 = &g_226[0];
    int *l_986 = &l_954;
    int *l_987 = &l_955;
    int *l_988[2];
    int l_989 = 0x77D1F89AL;
    char l_990 = 1L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_968[i] = 1L;
    for (i = 0; i < 2; i++)
        l_988[i] = &g_226[0];
    for (p_33 = 2; (p_33 <= 6); p_33 += 1)
    {
        int *l_947 = &g_73;
        int l_951 = 0xFFDC3AC5L;
        int *l_952 = (void*)0;
        int *l_953[4] = {&g_226[0],&g_226[0],&g_226[0],&g_226[0]};
        char l_958 = 0x72L;
        int l_960[6][10][4] = {{{0x0F39DC60L,0x0B2AF474L,0x8D2FE53AL,0L},{0x6F5EA7A2L,1L,(-1L),8L},{4L,0x33A6BCFBL,(-1L),(-4L)},{(-4L),0L,(-9L),0x49E2C3B7L},{(-1L),0L,0x29196FC7L,4L},{(-9L),(-1L),0x261D11CFL,0x79CAAC06L},{0L,(-6L),0x81436D27L,9L},{0L,0x3D04C691L,3L,1L},{1L,(-9L),0L,0x964C35DAL},{0x77ED141EL,0L,0xF3697F93L,0x27AB5237L}},{{0xFDFE5595L,0xDA19950DL,(-3L),0x3D071C01L},{6L,0x8DA7184EL,0L,0x33A6BCFBL},{0xC9E88E40L,1L,0x6C098239L,0L},{0x9BB1F59CL,6L,(-8L),(-5L)},{0L,0L,0x3D071C01L,0x38F051CBL},{0xF03929EFL,(-9L),0x6F5EA7A2L,0x9FC3A15FL},{(-8L),(-4L),(-1L),1L},{0L,0x4EAAD528L,1L,0x9DC857F1L},{(-8L),0x4D597C03L,0x3A0B4968L,0x4D597C03L},{(-6L),0x77ED141EL,(-1L),0L}},{{(-6L),0x461921EAL,0x9A31B115L,1L},{0xFC069686L,0xF03929EFL,0xDFA7FCBAL,(-9L)},{0xFC069686L,0xBC442B8EL,0x9A31B115L,0L},{(-6L),0x4EAAD528L,1L,0xB01A89E4L},{(-1L),0x4ABD6AB4L,(-9L),1L},{0x3D04C691L,1L,(-1L),0x9FC3A15FL},{3L,6L,0xBC442B8EL,0x49E2C3B7L},{(-9L),0xC9E88E40L,8L,9L},{0xDFA7FCBAL,0L,(-8L),0x9A31B115L},{1L,0L,0x3D04C691L,0x29196FC7L}},{{(-9L),0x45907897L,0x964C35DAL,(-1L)},{(-5L),0xEF04523DL,0xD2E67407L,0L},{1L,0x896A7AAFL,5L,0xFDFE5595L},{0x8DA7184EL,(-8L),0x4D597C03L,0L},{0x8D2FE53AL,0L,0xFDFE5595L,0x9BB1F59CL},{(-1L),3L,0L,(-9L)},{0x2602D5F8L,(-6L),0x45907897L,0L},{(-1L),(-9L),6L,0x3D071C01L},{(-3L),0xB01A89E4L,1L,0x62EB1372L},{(-8L),(-9L),(-3L),0x3A0B4968L}},{{(-8L),0x3D04C691L,0x3D071C01L,5L},{0x887C7738L,0L,0x38F051CBL,1L},{8L,0x3D071C01L,1L,(-1L)},{1L,0L,0L,0x4ABD6AB4L},{0x62EB1372L,5L,0L,6L},{0L,1L,(-8L),(-8L)},{0L,0L,0xEF04523DL,0x461921EAL},{(-1L),0L,1L,0xB2762C0FL},{(-1L),0xF3697F93L,0x3A0B4968L,1L},{0x38F051CBL,0xF3697F93L,(-8L),0xB2762C0FL}},{{0xF3697F93L,0L,(-3L),0x7875E41EL},{1L,0x461921EAL,0x29196FC7L,0L},{0L,0L,1L,0x6C098239L},{(-9L),0x0B2AF474L,1L,0x8DA7184EL},{0x896A7AAFL,1L,9L,5L},{0x79CAAC06L,6L,0xDFA7FCBAL,0x8D2FE53AL},{1L,(-1L),0x7875E41EL,1L},{0L,0x5FF0EC71L,(-1L),0L},{0L,1L,0x08CEF562L,0L},{0x0ED35CBBL,0x6F5EA7A2L,0x2FF489DEL,6L}}};
        const int ** const l_980 = (void*)0;
        const int ** const *l_979 = &l_980;
        int i, j, k;
        l_951 &= (p_33 != ((1L | ((+((void*)0 != l_947)) > ((safe_add_func_uint16_t_u_u(l_950, func_56(func_56((((-1L) || func_41(p_34)) , p_34), (*l_947)), (*l_947)))) & 0xD5B499F1L))) , 65531UL));
        g_970--;
        for (l_958 = 6; (l_958 >= 1); l_958 -= 1)
        {
            int i, j;
            (*g_722) = ((safe_rshift_func_uint16_t_u_u(g_92[p_33][(p_33 + 1)], 11)) < (((safe_add_func_int16_t_s_s((+0L), (safe_lshift_func_uint8_t_u_u((((void*)0 != l_979) <= g_92[l_958][p_33]), 3)))) <= (safe_add_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_u(((((void*)0 != &g_92[l_958][l_958]) > (((void*)0 == &l_980) , g_335[0][1][0])) , g_470), 4)) != p_33) | 8UL) , 4294967295UL), 0x14DB3979L))) , 0L));
        }
    }
    --g_991;
    return g_335[1][0][0];
}







static short func_37(int p_38, int p_39, unsigned p_40)
{
    int l_945 = 0xAB6CCF74L;
    (*g_722) = (func_41(p_40) != (l_945 , g_335[0][1][0]));
    return p_38;
}







static unsigned func_41(const int p_42)
{
    int ***l_866 = &g_173;
    int l_871[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    unsigned l_884 = 0x74C18133L;
    int ***l_887 = &g_173;
    const int *l_942[10][6] = {{&g_92[3][6],&g_335[0][1][0],&g_92[3][6],&l_871[2],&g_92[4][2],&g_335[1][1][0]},{(void*)0,&l_871[2],&g_335[0][1][0],&g_92[3][6],&g_92[4][0],&g_92[4][0]},{&g_92[3][6],&g_92[4][0],&g_92[4][0],&g_92[3][6],&g_335[0][1][0],&l_871[2]},{(void*)0,&g_335[1][1][0],&g_92[4][2],&l_871[2],&g_92[3][6],&g_335[0][1][0]},{&g_92[3][6],&g_335[0][1][0],&g_226[0],&g_335[0][1][0],&g_92[3][6],(void*)0},{&g_335[0][1][0],&g_335[1][1][0],(void*)0,&l_871[2],&g_335[0][1][0],&g_92[4][2]},{&g_92[4][2],&g_92[4][0],&l_871[2],&l_871[2],(void*)0,&g_226[0]},{&g_335[1][1][0],&g_92[4][0],&g_92[4][2],&l_871[2],&g_226[0],&g_92[3][6]},{(void*)0,&g_92[3][6],&g_335[0][1][0],&g_226[0],&g_335[0][1][0],&g_92[3][6]},{(void*)0,&g_92[3][6],&g_226[0],&l_871[2],&g_92[4][2],&g_92[4][0]}};
    int i, j;
    for (g_470 = 0; (g_470 <= 6); g_470 += 1)
    {
        unsigned l_865 = 0xF4B5293DL;
        unsigned short l_885 = 65531UL;
        int * const l_886[5][8] = {{&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0]},{&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0]},{&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0]},{&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0]},{&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0],&g_226[0]}};
        unsigned char l_888 = 0x6FL;
        int i, j;
        l_871[2] &= ((l_865 < g_226[0]) > (((((((void*)0 == l_866) , (((safe_mod_func_uint8_t_u_u((0x6244L == func_56(p_42, p_42)), (safe_mod_func_uint32_t_u_u((((l_865 , 0L) & 0xDB82L) || p_42), g_92[3][6])))) ^ p_42) , &g_173)) != (void*)0) != 4294967293UL) , 8UL) , g_335[0][1][0]));
        if ((func_4(g_226[0], (((((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u(func_56(g_226[0], g_335[1][1][0]), (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0x5BD16895L, l_865)), ((g_226[0] , ((safe_unary_minus_func_uint32_t_u(l_884)) , (((((l_865 , l_885) , (void*)0) != l_886[3][6]) , g_8) < 0xA0L))) >= 0xE0L))))))) == 0x0165L), p_42)) < p_42), g_92[1][0])) , l_887) != &g_173) > l_888) , g_92[3][3])) , (*g_722)))
        {
            unsigned short l_889 = 0UL;
            int l_892 = 0x600878A4L;
            if ((l_889 <= ((func_4(p_42, g_470) || (((safe_mod_func_int16_t_s_s(((void*)0 != l_866), p_42)) , (func_4(p_42, l_889) || 0xC52FL)) ^ p_42)) >= 0xF152L)))
            {
                l_892 ^= l_889;
            }
            else
            {
                unsigned char l_893 = 7UL;
                int l_896 = (-1L);
                if (l_893)
                    break;
                (**l_866) = (*g_173);
                l_896 |= (0x53L && (safe_mod_func_int8_t_s_s((+((*g_722) , (!0xD3L))), g_73)));
            }
        }
        else
        {
            unsigned short l_897 = 0xDA5CL;
            int **l_900 = &g_72;
            --l_897;
            (**l_866) = (void*)0;
            (*l_900) = l_886[3][6];
            for (g_208 = 0; (g_208 <= 6); g_208 += 1)
            {
                const int **l_938 = (void*)0;
                const int **l_939 = (void*)0;
                const int *l_941 = &g_335[0][1][0];
                const int **l_940[8][4][7] = {{{&l_941,&l_941,(void*)0,&l_941,&l_941,&l_941,&l_941},{&l_941,(void*)0,(void*)0,&l_941,&l_941,&l_941,&l_941},{(void*)0,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{(void*)0,&l_941,(void*)0,&l_941,&l_941,&l_941,&l_941}},{{(void*)0,&l_941,&l_941,(void*)0,&l_941,&l_941,&l_941},{(void*)0,(void*)0,&l_941,&l_941,(void*)0,&l_941,(void*)0},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941}},{{&l_941,&l_941,&l_941,&l_941,(void*)0,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,(void*)0,&l_941,(void*)0,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,(void*)0,&l_941,&l_941}},{{&l_941,&l_941,&l_941,&l_941,(void*)0,(void*)0,&l_941},{(void*)0,(void*)0,&l_941,&l_941,(void*)0,(void*)0,&l_941},{&l_941,(void*)0,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,(void*)0,(void*)0,(void*)0,&l_941,&l_941}},{{&l_941,(void*)0,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,(void*)0,&l_941,&l_941,&l_941,(void*)0,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941}},{{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,(void*)0},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,(void*)0,&l_941},{&l_941,&l_941,&l_941,(void*)0,&l_941,&l_941,&l_941}},{{(void*)0,(void*)0,&l_941,(void*)0,&l_941,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,&l_941,&l_941,&l_941},{&l_941,&l_941,&l_941,&l_941,(void*)0,&l_941,&l_941},{(void*)0,&l_941,(void*)0,(void*)0,&l_941,&l_941,(void*)0}},{{&l_941,(void*)0,(void*)0,&l_941,&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941,&l_941,&l_941,(void*)0,&l_941},{&l_941,&l_941,&l_941,(void*)0,&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941,(void*)0,(void*)0,(void*)0,&l_941}}};
                int i, j, k;
                if ((safe_mod_func_int16_t_s_s((g_92[g_208][(g_208 + 1)] < func_4((**l_900), (***l_866))), (safe_rshift_func_int8_t_s_u(g_8, g_470)))))
                {
                    for (l_865 = 0; (l_865 >= 15); ++l_865)
                    {
                        return g_92[3][6];
                    }
                    return p_42;
                }
                else
                {
                    char l_907[6][4][2] = {{{0xB0L,0x95L},{7L,7L},{0x69L,7L},{7L,0x95L}},{{0xB0L,0xB1L},{0x69L,0xB0L},{0xB1L,0x95L},{0xB1L,0xB0L}},{{0x69L,0xB1L},{0xB0L,0x95L},{7L,7L},{0x69L,7L}},{{7L,0x95L},{0xB0L,0xB1L},{0x69L,0xB0L},{0xB1L,0x95L}},{{0xB1L,0xB0L},{0x69L,0xB1L},{0xB0L,0x95L},{7L,7L}},{{0x69L,7L},{7L,0x95L},{0xB0L,0xB1L},{0x69L,0xB0L}}};
                    int *l_911 = &g_226[0];
                    int i, j, k;
                    (**l_900) = (((void*)0 == &g_173) , l_907[3][3][0]);
                    for (l_888 = 0; (l_888 == 32); l_888 = safe_add_func_uint16_t_u_u(l_888, 3))
                    {
                        int *l_910 = &g_335[0][0][0];
                        (**l_887) = func_63(g_208, l_910, l_911);
                        return (*l_911);
                    }
                    l_871[2] ^= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(func_4(g_208, ((g_335[0][1][0] != (((((safe_lshift_func_int8_t_s_s((((***l_887) , ((g_335[0][1][0] , (safe_mod_func_int8_t_s_s(1L, ((((***l_866) >= (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_92[g_208][(g_208 + 1)], 0x61L)), 2)), 8)) < g_8) , 8UL)) >= 0x7CL) & (**l_900))))) == 0x0C4FL)) ^ p_42), p_42)) ^ g_470) && 0x9E67L) >= p_42) >= 0x31A039E3L)) ^ p_42)), (**l_900))), g_73)) | 65535UL);
                    for (l_888 = 23; (l_888 <= 53); ++l_888)
                    {
                        unsigned l_932 = 0x464B6A2AL;
                        int l_937 = 0x8D2CEA19L;
                        l_932 ^= (p_42 ^ func_56(p_42, (((1UL >= 5L) && 0x10L) , (safe_sub_func_uint16_t_u_u((p_42 && (safe_add_func_int8_t_s_s((*l_911), func_4((g_335[0][1][0] & p_42), (*l_911))))), g_73)))));
                        l_937 |= ((0x4EL <= (p_42 , (l_932 >= ((func_56(p_42, g_92[1][1]) , 1L) , (safe_lshift_func_uint8_t_u_u(g_226[0], 7)))))) || ((safe_mod_func_int16_t_s_s(p_42, 0xFBB8L)) || p_42));
                    }
                }
                l_942[6][5] = &p_42;
                return g_92[2][7];
            }
        }
        for (l_888 = 0; (l_888 <= 6); l_888 += 1)
        {
            int i, j;
            return g_92[l_888][(g_470 + 1)];
        }
    }
    return p_42;
}







static char func_43(const unsigned char p_44, char p_45, short p_46)
{
    int l_553 = (-1L);
    short l_556[3][4] = {{0x23ECL,0xE7B0L,0xE7B0L,0x23ECL},{0xE7B0L,0x23ECL,0xE7B0L,0xE7B0L},{0x23ECL,0x23ECL,7L,0x23ECL}};
    int ***l_562 = (void*)0;
    int *l_567 = &g_226[0];
    unsigned l_585 = 0x78FFA720L;
    const int l_586 = 0xEAC98B35L;
    int l_600 = 0x786C600FL;
    int l_601[3];
    unsigned short l_620 = 0x1B81L;
    int l_658 = 1L;
    unsigned l_678[3];
    int ***l_685 = &g_173;
    unsigned l_698 = 4294967295UL;
    unsigned char l_725 = 247UL;
    char l_730 = 0x88L;
    unsigned l_794 = 1UL;
    unsigned l_818 = 0x23E839FFL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_601[i] = 0xA88CF82AL;
    for (i = 0; i < 3; i++)
        l_678[i] = 0xDDB4BEC3L;
    (*g_72) = (l_553 < ((safe_rshift_func_int16_t_s_s((((func_4(l_556[0][1], (g_92[1][2] ^ (safe_unary_minus_func_uint16_t_u(((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((void*)0 == l_562) >= (((safe_sub_func_uint32_t_u_u(((func_4(g_208, ((safe_lshift_func_uint16_t_u_s(func_4(p_46, ((&l_553 == l_567) == 5UL)), 1)) == g_208)) | g_335[0][1][0]) ^ p_46), (*l_567))) , (*l_567)) , p_44)), p_46)) && p_46), p_45)) < 0x3DL))))) && 0x03BF86AFL) ^ 0xB6A1639CL) < (*l_567)), p_44)) == p_45));
    for (g_208 = (-7); (g_208 == 26); g_208 = safe_add_func_int32_t_s_s(g_208, 6))
    {
        int *l_572 = (void*)0;
        for (p_46 = 21; (p_46 <= 2); p_46 = safe_sub_func_int32_t_s_s(p_46, 5))
        {
            (*g_173) = l_572;
            if (p_46)
                continue;
        }
    }
    for (g_73 = 4; (g_73 >= 0); g_73 -= 1)
    {
        unsigned l_573 = 0x48750214L;
        int l_593 = 0L;
        int l_597 = 0x7AF973CFL;
        int l_598 = 0L;
        int l_599 = (-1L);
        int l_602 = (-10L);
        int l_603[6];
        unsigned char l_619[3];
        unsigned l_627 = 0UL;
        int l_649[4] = {1L,1L,1L,1L};
        int i;
        for (i = 0; i < 6; i++)
            l_603[i] = 0x29570085L;
        for (i = 0; i < 3; i++)
            l_619[i] = 0x63L;
        if (l_573)
        {
            char l_582 = 4L;
            (*l_567) = (safe_rshift_func_uint16_t_u_u(65531UL, (p_45 || (((p_44 <= (safe_sub_func_uint32_t_u_u(6UL, g_73))) != p_46) , 0x31L))));
            (*l_567) &= ((safe_mod_func_uint8_t_u_u(((0x083305F7L & func_4(func_4((g_92[4][7] <= (safe_sub_func_int8_t_s_s(l_582, (l_573 , (((safe_mod_func_int32_t_s_s(((((g_208 >= p_46) ^ g_73) , p_45) , (p_46 || 0x859EL)), g_335[0][1][0])) <= g_335[1][1][0]) < g_8))))), g_8), p_46)) ^ p_46), 0x07L)) ^ l_585);
            (*l_567) = l_586;
        }
        else
        {
            int l_592 = 6L;
            l_593 = (p_46 != ((((safe_lshift_func_uint16_t_u_u(0x8743L, (0xA5L | (g_73 , g_208)))) & (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(g_335[1][1][0], 6))))) , ((0x0DL || (l_573 == (l_592 >= p_46))) <= p_46)) != 0UL));
        }
        for (l_553 = 0; (l_553 <= 2); l_553 += 1)
        {
            int *l_594 = &g_226[0];
            int *l_595 = &g_92[3][6];
            int *l_596[1];
            unsigned short l_604 = 0x57F4L;
            int l_625 = (-5L);
            short l_626[9] = {0xA4F0L,0x7880L,0xA4F0L,0x7880L,0xA4F0L,0x7880L,0xA4F0L,0x7880L,0xA4F0L};
            int * const *l_633 = &l_567;
            int * const **l_632 = &l_633;
            int i, j;
            for (i = 0; i < 1; i++)
                l_596[i] = &g_226[0];
            --l_604;
            if ((safe_rshift_func_int16_t_s_s(((l_556[l_553][l_553] | ((g_92[(g_73 + 2)][(l_553 + 1)] | g_92[(g_73 + 2)][(l_553 + 4)]) , (~(-3L)))) != ((((((((safe_rshift_func_uint8_t_u_s((func_4((g_335[0][1][0] <= (!(safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_92[3][6], 6L)), (safe_mod_func_uint8_t_u_u((p_45 , ((p_45 , l_573) , l_602)), g_226[0])))), (*l_567))))), p_45) > l_619[2]), g_8)) >= l_620) | (-1L)) | g_208) && 8UL) > 0UL) && 0UL) < p_46)), 0)))
            {
                int l_621 = 0xD70C9E32L;
                int l_622[2][8] = {{(-6L),0L,0L,(-6L),0xE2D1EB9CL,(-6L),0L,0L},{0L,0xE2D1EB9CL,0xEEEC6C94L,0xEEEC6C94L,0xE2D1EB9CL,0L,0xE2D1EB9CL,0xEEEC6C94L}};
                int l_623 = 0xDD5218F4L;
                short l_624 = 1L;
                int i, j;
                ++l_627;
                return g_335[0][1][0];
            }
            else
            {
                l_595 = (*g_173);
                (***l_632) |= (p_44 | ((((safe_rshift_func_uint8_t_u_u(0x7AL, 4)) , l_632) != &g_173) , g_92[3][6]));
                (**l_633) = (0UL == (p_45 || g_8));
            }
            l_597 ^= ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u((*l_594), ((1UL ^ ((*l_632) == (void*)0)) > ((!p_44) , p_46)))))), 2)), func_56((safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s((p_45 && ((safe_lshift_func_uint16_t_u_s(((*l_632) != (((safe_add_func_int32_t_s_s(func_56((((p_46 || 0x1F8CL) > 0xBC37E1D0L) , (-8L)), p_46), p_46)) , l_603[2]) , (void*)0)), 9)) , g_92[3][6])), p_44)) <= l_649[3]) > p_44), 7)), g_208))) < 253UL);
            return g_208;
        }
        for (g_208 = 0; (g_208 >= 0); g_208 -= 1)
        {
            int *l_650 = (void*)0;
            int l_656 = 8L;
            int l_657[3];
            short l_659 = 0x8338L;
            unsigned short l_661 = 0x9A43L;
            int i;
            for (i = 0; i < 3; i++)
                l_657[i] = 1L;
            if (p_45)
                break;
            for (l_599 = 0; (l_599 >= 0); l_599 -= 1)
            {
                int *l_651 = &l_602;
                int *l_652 = &l_598;
                int *l_653 = &l_649[3];
                int *l_654 = &l_593;
                int *l_655[4][9][7] = {{{&g_226[0],&l_601[1],&g_226[0],(void*)0,(void*)0,&g_226[0],(void*)0},{&l_602,&g_92[3][6],&l_602,&l_602,&g_92[3][6],&l_602,&g_92[3][6]},{&l_601[1],&l_649[3],&l_649[3],&l_601[1],(void*)0,&l_601[1],&l_649[3]},{&l_553,&l_553,&l_602,&l_602,&l_602,&l_553,&l_553},{&g_226[0],&l_649[3],&g_335[g_208][(g_208 + 1)][g_208],&l_649[3],&g_226[0],&g_226[0],&l_649[3]},{&l_553,&g_92[3][6],&l_553,&l_602,&l_602,&l_553,&g_92[3][6]},{&l_649[3],(void*)0,&g_335[g_208][(g_208 + 1)][g_208],&g_335[g_208][(g_208 + 1)][g_208],(void*)0,&l_649[3],(void*)0},{&l_553,&l_602,&l_602,&l_553,&g_92[3][6],&l_553,&l_602},{&g_226[0],&g_226[0],&l_649[3],&g_335[g_208][(g_208 + 1)][g_208],&l_649[3],&g_226[0],&g_226[0]}},{{&l_553,&l_602,&l_602,&l_602,&l_553,&l_553,&l_602},{&l_601[1],(void*)0,&l_601[1],&l_649[3],&l_649[3],&l_601[1],(void*)0},{&l_602,&g_92[3][6],&l_602,&l_602,&g_92[3][6],&l_602,&g_92[3][6]},{&l_601[1],&l_649[3],&l_649[3],&l_601[1],(void*)0,&l_601[1],&l_649[3]},{&l_553,&l_553,&l_602,&l_602,&l_602,&l_553,&l_553},{&g_226[0],&l_649[3],&g_335[g_208][(g_208 + 1)][g_208],&l_649[3],(void*)0,(void*)0,&g_226[0]},{&l_602,&l_602,&l_602,&l_553,&l_553,&l_602,&l_602},{&g_226[0],&g_335[g_208][(g_208 + 1)][g_208],&l_601[1],&l_601[1],&g_335[g_208][(g_208 + 1)][g_208],&g_226[0],&g_335[g_208][(g_208 + 1)][g_208]},{&l_602,&l_553,&l_553,&l_602,&l_602,&l_602,&l_553}},{{(void*)0,(void*)0,&g_226[0],&l_601[1],&g_226[0],(void*)0,(void*)0},{&g_92[3][6],&l_553,&l_553,&l_553,&g_92[3][6],&g_92[3][6],&l_553},{&l_649[3],&g_335[g_208][(g_208 + 1)][g_208],&l_649[3],&g_226[0],&g_226[0],&l_649[3],&g_335[g_208][(g_208 + 1)][g_208]},{&l_553,&l_602,&l_553,&l_553,&l_602,&l_553,&l_602},{&l_649[3],&g_226[0],&g_226[0],&l_649[3],&g_335[g_208][(g_208 + 1)][g_208],&l_649[3],&g_226[0]},{&g_92[3][6],&g_92[3][6],&l_553,&l_553,&l_553,&g_92[3][6],&g_92[3][6]},{(void*)0,&g_226[0],&l_601[1],&g_226[0],(void*)0,(void*)0,&g_226[0]},{&l_602,&l_602,&l_602,&l_553,&l_553,&l_602,&l_602},{&g_226[0],&g_335[g_208][(g_208 + 1)][g_208],&l_601[1],&l_601[1],&g_335[g_208][(g_208 + 1)][g_208],&g_226[0],&g_335[g_208][(g_208 + 1)][g_208]}},{{&l_602,&l_553,&l_553,&l_602,&l_602,&l_602,&l_553},{(void*)0,&l_649[3],&l_601[1],(void*)0,&l_601[1],&l_649[3],&l_649[3]},{&l_602,&l_553,&g_92[3][6],&l_553,&l_602,&l_602,&l_553},{&g_335[g_208][(g_208 + 1)][g_208],&g_226[0],&g_335[g_208][(g_208 + 1)][g_208],&l_601[1],&l_601[1],&g_335[g_208][(g_208 + 1)][g_208],&g_226[0]},{&l_553,&l_553,&g_92[3][6],&g_92[3][6],&l_553,&l_553,&l_553},{&g_335[g_208][(g_208 + 1)][g_208],&l_601[1],&l_601[1],&g_335[g_208][(g_208 + 1)][g_208],&g_226[0],&g_335[g_208][(g_208 + 1)][g_208],&l_601[1]},{&l_602,&l_602,&l_553,&g_92[3][6],&l_553,&l_602,&l_602},{&l_649[3],&l_601[1],(void*)0,&l_601[1],&l_649[3],&l_649[3],&l_601[1]},{&l_602,&l_553,&l_602,&l_553,&l_553,&l_602,&l_553}}};
                int l_660 = 0L;
                int i, j, k;
                l_650 = &l_603[0];
                --l_661;
                (*l_654) ^= (safe_add_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s((-2L), 6)) == (l_619[1] , func_4((*l_650), l_597))) , (safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((p_46 <= l_649[2]), ((safe_rshift_func_int16_t_s_u((g_92[3][6] == ((safe_lshift_func_int8_t_s_u(0xB3L, g_335[0][1][0])) && 0x0201L)), 14)) != g_226[0]))) >= 3L) || g_226[0]), p_46))) > g_208) & p_45), p_45));
            }
        }
    }
    for (l_620 = 0; (l_620 == 1); l_620 = safe_add_func_uint8_t_u_u(l_620, 2))
    {
        int *l_679 = &g_226[0];
        int ** const l_680 = &l_567;
        int l_690 = 0x49B3495DL;
        int l_692[4];
        unsigned char l_719 = 6UL;
        const unsigned short l_756 = 0xB780L;
        int l_810 = (-1L);
        unsigned char l_847 = 0xFFL;
        int i;
        for (i = 0; i < 4; i++)
            l_692[i] = 0x68627536L;
        for (g_470 = 0; (g_470 <= 2); g_470 += 1)
        {
            int **l_681 = &l_679;
            int l_691[4][10][6] = {{{(-4L),0x840FE9D6L,0x70E7EA6FL,0xBB0D01FAL,0x7CF6C27FL,(-9L)},{7L,(-1L),0xD3A4F9F8L,0x303EA4CDL,(-1L),(-10L)},{(-2L),0x2420C994L,0xECB54F03L,1L,0x156238E9L,0L},{(-1L),0x3D716E89L,0L,1L,4L,(-1L)},{(-1L),(-2L),0L,(-2L),(-1L),0L},{0x94CEFBE6L,0xE4F19341L,0xE166F3F2L,0xE38B29A6L,0xE0705513L,0x8A226096L},{0L,0xCF2ED9A5L,0xDE324508L,0xE4F19341L,0x7CF6C27FL,0x3D716E89L},{0L,0x84EEEDE9L,0x0A22721BL,0x22CF19A4L,0x07BDD697L,0x8AEDDF4EL},{0x7CF6C27FL,0xBB0D01FAL,0x70E7EA6FL,0x840FE9D6L,(-4L),1L},{0x9F128B5EL,0xC9DDD189L,0xBB0D01FAL,(-4L),0xECCBFA6BL,0x17876E7DL}},{{(-7L),7L,(-2L),0L,8L,0xCA89584AL},{0x156238E9L,0L,1L,(-5L),0L,0xC9DDD189L},{6L,(-5L),0x303EA4CDL,0x3ADF156EL,0L,0x74E5D7A2L},{0xD3A4F9F8L,0L,0xCF2ED9A5L,1L,0L,(-5L)},{0x3ADF156EL,6L,0x8C0DF946L,0x303EA4CDL,1L,(-9L)},{0x27C6A31EL,0x22CF19A4L,0xDE324508L,0L,0xAFB97F72L,0x303EA4CDL},{(-6L),0x8A226096L,0x4CAD0DB0L,(-1L),7L,6L},{0x4CAD0DB0L,0xE6B023C8L,0x156238E9L,0x58A338D1L,(-6L),2L},{(-10L),0xE0705513L,0x9F128B5EL,(-6L),0xC10007E5L,0x7CF6C27FL},{(-5L),(-7L),6L,0L,(-2L),0L}},{{0L,0xF374931CL,8L,(-9L),0x478EA1A9L,0x8B168D4DL},{0xE3E3163FL,(-7L),0x983C7CADL,4L,0x3FA8B9ADL,0x387F6D64L},{0xDE324508L,0x01A792C8L,0L,0x68AC4AA3L,0L,0L},{0xD3A4F9F8L,(-9L),(-9L),0xD3A4F9F8L,6L,0x58A338D1L},{1L,0L,1L,0x07BDD697L,(-1L),(-4L)},{0xC36A87E7L,0x30E15FDBL,0L,0xC10007E5L,(-1L),0L},{0x7CF6C27FL,0L,(-2L),0L,6L,(-7L)},{6L,(-9L),(-9L),0x17876E7DL,0L,0xE761DF43L},{0xA57BF84DL,9L,0x4CAD0DB0L,0L,0x07BDD697L,0x01A792C8L},{(-1L),0L,(-4L),0xBB0D01FAL,1L,0x0A22721BL}},{{0x840FE9D6L,0L,0xCA89584AL,0x58A338D1L,0xF374931CL,0xCF2ED9A5L},{0L,0x207A77AEL,0L,0x01A792C8L,1L,0x27C6A31EL},{(-1L),1L,0x07BDD697L,0x84EEEDE9L,0x142D4398L,(-1L)},{3L,2L,0x478EA1A9L,0xCF0EC01CL,0xE3E3163FL,1L},{0x2420C994L,(-7L),0x8AEDDF4EL,(-5L),0x9F128B5EL,(-1L)},{0L,0x0A22721BL,0L,0xECB54F03L,0xE38B29A6L,(-3L)},{0x01A792C8L,0xCF0EC01CL,0x8C0DF946L,0xDE324508L,0x387F6D64L,0x7C60384EL},{1L,0x3ADF156EL,3L,6L,0xECB54F03L,0x7CF6C27FL},{0x7C60384EL,(-1L),(-7L),0x840FE9D6L,(-6L),0L},{0x8AEDDF4EL,(-2L),0x3D716E89L,4L,(-1L),(-1L)}}};
            int l_712 = 9L;
            short l_734 = 0L;
            int i, j, k;
            l_601[g_470] = l_601[g_470];
            (*g_173) = (l_678[0] , l_679);
            l_681 = l_680;
        }
        for (l_658 = 4; (l_658 <= (-14)); l_658 = safe_sub_func_uint32_t_u_u(l_658, 9))
        {
            char l_738 = 3L;
            int ***l_765 = (void*)0;
            int l_791 = 0L;
            int l_811 = 0L;
            int l_814 = 0xFC40D4BCL;
            int l_815[3];
            int *l_848 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_815[i] = 0x476F50DEL;
            if (p_46)
            {
                unsigned char l_739 = 255UL;
                unsigned short l_779 = 0xCC55L;
                int l_781 = 1L;
                int l_782 = 0x8F708214L;
                int l_812 = 0x91CE2BCCL;
                int l_813 = (-1L);
                int l_816 = 9L;
                int l_817 = 0x0FF2DEDDL;
                l_739--;
                for (l_690 = (-12); (l_690 > (-28)); --l_690)
                {
                    unsigned l_757 = 0x9A01D0F6L;
                    unsigned l_764 = 1UL;
                    const int **l_767 = (void*)0;
                    const int ***l_766 = &l_767;
                    int *l_768 = &l_600;
                    int l_807[7] = {0xA632D896L,0xA632D896L,6L,0xA632D896L,0xA632D896L,6L,0xA632D896L};
                    int i;
                }
            }
            else
            {
                unsigned char l_849 = 1UL;
                int l_861 = 0x45F4BCAAL;
                (**l_685) = (((*g_173) != (((safe_rshift_func_int16_t_s_s(1L, g_226[0])) | (g_335[0][1][0] , (func_4(((safe_add_func_int8_t_s_s(p_45, (*l_679))) >= (*l_679)), (4L == l_847)) == p_46))) , (*l_680))) , l_848);
                if ((**l_680))
                {
                    l_849++;
                }
                else
                {
                    unsigned short l_858 = 65530UL;
                    unsigned char l_862 = 0x26L;
                    l_862 |= ((p_44 <= p_44) & (((safe_add_func_int32_t_s_s((!((1L < func_4(((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((((func_56(l_858, g_226[0]) || ((0xB7L > 0x94L) && func_4(((safe_sub_func_uint32_t_u_u(p_46, l_858)) , 5UL), p_45))) <= 4294967295UL) || p_46) & p_45), g_335[0][1][0])) | g_226[0]), 7)) , 254UL), l_858)) && 0xCEL)), g_92[3][6])) > g_92[1][1]) , l_861));
                    return l_858;
                }
                for (l_849 = 0; (l_849 > 23); l_849 = safe_add_func_uint32_t_u_u(l_849, 6))
                {
                    for (l_861 = 0; l_861 < 1; l_861 += 1)
                    {
                        g_226[l_861] = 0x7A252014L;
                    }
                }
                (**l_680) &= func_56(g_208, l_849);
            }
        }
        if (p_45)
            continue;
    }
    return g_8;
}







static unsigned char func_56(char p_57, unsigned short p_58)
{
    int *l_71 = (void*)0;
    unsigned char l_233 = 1UL;
    int l_236 = (-1L);
    unsigned char l_272 = 0UL;
    int l_290[5];
    int ***l_345 = &g_173;
    int l_501 = (-1L);
    unsigned l_502 = 0x42392340L;
    int *l_505 = &g_226[0];
    unsigned short l_530 = 0x6435L;
    int i;
    for (i = 0; i < 5; i++)
        l_290[i] = 0xB352D91BL;
    for (p_58 = (-18); (p_58 > 47); ++p_58)
    {
        unsigned l_74 = 0x07F7A796L;
        int *l_225 = &g_226[0];
        unsigned l_276 = 0UL;
        int l_291 = (-1L);
        char l_319[8][2][2];
        char l_331[3][4] = {{0x1CL,0x95L,0x95L,0x1CL},{0x95L,0x1CL,0x95L,0x95L},{0x1CL,0x1CL,0x51L,0x1CL}};
        int l_332 = 1L;
        int l_333 = 0L;
        int l_334[10] = {1L,0x57429C90L,1L,0x57429C90L,1L,0x57429C90L,1L,0x57429C90L,1L,0x57429C90L};
        short l_336 = 1L;
        int ***l_362 = &g_173;
        short l_384 = 1L;
        short l_398[5][5][1] = {{{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L}}};
        short l_469[8][3][3] = {{{(-1L),(-1L),0xB778L},{0x17FFL,0L,(-1L)},{0xB778L,(-4L),0xC0F0L}},{{0x17FFL,(-1L),0x17FFL},{(-1L),0xB778L,0xC0F0L},{(-6L),(-1L),(-1L)}},{{0x4BF6L,0xB778L,0xB778L},{(-1L),(-1L),0x795BL},{0x4BF6L,(-4L),0x4BF6L}},{{(-6L),0L,0x795BL},{(-1L),(-1L),0xC0F0L},{0xBA8DL,0xFEC4L,0x795BL}},{{0xC0F0L,0xB778L,(-1L)},{0xBA8DL,0L,0xBA8DL},{0x4BF6L,0xC0F0L,(-1L)}},{{0x17FFL,0xE49FL,0x795BL},{(-4L),0xC0F0L,0xC0F0L},{0x795BL,0L,(-6L)}},{{(-4L),0xB778L,(-4L)},{0x17FFL,0xFEC4L,(-6L)},{0x4BF6L,0x4BF6L,0xC0F0L}},{{0xBA8DL,0xFEC4L,0x795BL},{0xC0F0L,0xB778L,(-1L)},{0xBA8DL,0L,0xBA8DL}}};
        unsigned l_498[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_319[i][j][k] = (-1L);
            }
        }
        for (p_57 = 0; (p_57 < 27); p_57++)
        {
        }
    }
    return g_8;
}







static int * func_63(unsigned p_64, int * p_65, int * p_66)
{
    int *l_227[10] = {&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6],&g_92[3][6]};
    int l_228[4] = {0x89DC33B4L,0x89DC33B4L,0x89DC33B4L,0x89DC33B4L};
    unsigned l_229[6] = {0xC284662EL,4294967295UL,0xC284662EL,0xC284662EL,4294967295UL,0xC284662EL};
    int i;
    ++l_229[5];
    return l_227[7];
}







static int * func_67(int * p_68, int * p_69, short p_70)
{
    int *l_75 = (void*)0;
    char l_87 = 0xB5L;
    int l_94[10] = {0L,(-6L),0L,0L,(-6L),0L,0L,(-6L),0L,0L};
    short l_110 = 1L;
    int l_123[3][3] = {{0xF387BF19L,0xF387BF19L,0L},{0xF387BF19L,0xF387BF19L,0L},{0xF387BF19L,0xF387BF19L,0L}};
    unsigned l_129 = 4UL;
    int ***l_169[3];
    unsigned char l_184 = 0UL;
    char l_210[2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_169[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_210[i] = (-1L);
    if (((void*)0 == l_75))
    {
        int l_86 = 1L;
        int l_98 = 3L;
        int l_99[3][7] = {{(-1L),0x9125BEC3L,(-1L),0x9125BEC3L,(-1L),0x9125BEC3L,(-1L)},{0x42E901CCL,0x4E0B5904L,0x4E0B5904L,0x42E901CCL,0x42E901CCL,0x4E0B5904L,0x4E0B5904L},{6L,0x9125BEC3L,6L,0x9125BEC3L,6L,0x9125BEC3L,6L}};
        int **l_149 = &g_72;
        int ***l_148 = &l_149;
        int i, j;
        (*p_69) = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((0x69L < (safe_add_func_int16_t_s_s(((0x6BL >= (func_4((safe_mod_func_uint16_t_u_u(func_4(g_73, l_86), g_8)), g_8) && 65532UL)) || g_8), 0xA74AL))), l_86)), l_87)), g_8)) , (*g_72));
        for (g_73 = (-14); (g_73 == 24); ++g_73)
        {
            char l_95[2][1][2];
            int l_96 = 0xAA7D8725L;
            int l_97[5][4];
            int l_112 = (-1L);
            unsigned short l_139[10] = {0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L,0x83E6L};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_95[i][j][k] = 0x6EL;
                }
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_97[i][j] = 0L;
            }
            for (p_70 = (-10); (p_70 <= (-10)); ++p_70)
            {
                int *l_93[8] = {&g_92[3][6],(void*)0,(void*)0,&g_92[3][6],(void*)0,(void*)0,&g_92[3][6],(void*)0};
                unsigned l_100 = 4294967294UL;
                unsigned l_113 = 0xE96879FCL;
                int i;
                l_100--;
                for (l_87 = 9; (l_87 >= 1); l_87 -= 1)
                {
                    int l_104 = 8L;
                    char l_106 = 0xFBL;
                    int l_107 = 0L;
                    int l_108[6][2] = {{0x3B58279FL,0x3B58279FL},{0x9BEE6A4CL,0x3B58279FL},{0x3B58279FL,0x9BEE6A4CL},{0x3B58279FL,0x3B58279FL},{0x9BEE6A4CL,0x3B58279FL},{0x3B58279FL,0x9BEE6A4CL}};
                    int i, j;
                    for (l_86 = 5; (l_86 >= 2); l_86 -= 1)
                    {
                        int **l_103 = &l_93[6];
                        int l_105 = 0x34387970L;
                        int l_109 = 1L;
                        int l_111[9];
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_111[i] = 0xC91DF687L;
                        (*l_103) = (void*)0;
                        l_113++;
                    }
                    for (l_107 = 0; (l_107 <= 6); l_107 += 1)
                    {
                        return &g_92[4][7];
                    }
                }
                for (l_113 = 0; (l_113 <= 19); l_113 = safe_add_func_int8_t_s_s(l_113, 8))
                {
                    unsigned short l_118[5][9][5] = {{{65535UL,1UL,0xB3C1L,65533UL,0UL},{0x028AL,0UL,0UL,65535UL,0x891BL},{1UL,0x028AL,1UL,0x868FL,2UL},{0UL,0xEFF3L,0x891BL,0xE42BL,0UL},{0x670BL,9UL,1UL,9UL,0x670BL},{0UL,0xC445L,9UL,0x24A2L,0xB64EL},{0xA825L,0UL,0x984FL,0UL,0x1121L},{0xB3C1L,0x868FL,0x8239L,0xC445L,0xB64EL},{0x5FC0L,0UL,2UL,0x8239L,0x670BL}},{{0xB64EL,0UL,0x3C97L,0x4232L,0UL},{65535UL,0x3C97L,0x624CL,0x891BL,2UL},{2UL,0x1989L,4UL,9UL,0xE374L},{65535UL,0xB845L,0xC083L,0xA228L,5UL},{4UL,0x24A2L,0x1121L,1UL,0UL},{0x028AL,65535UL,0xC754L,0UL,0x624CL},{65535UL,8UL,0x7B67L,0x6588L,65533UL},{0x11B3L,0UL,0x1989L,65533UL,0x1061L},{0x11B3L,0x4296L,0UL,0x24A2L,65529UL}},{{65535UL,0x670BL,1UL,0xF8ADL,0UL},{0x028AL,0xF4F3L,65535UL,0xB64EL,2UL},{4UL,0x1CC7L,0x891BL,0x8033L,0x00A5L},{65535UL,0UL,0UL,1UL,0x9005L},{2UL,0xC754L,65529UL,1UL,65535UL},{0xDAB0L,0xC083L,0x5084L,0xBB45L,0x5084L},{0xEFF3L,0xEFF3L,0x83FBL,65535UL,0x1CC7L},{65535UL,0x5084L,0UL,2UL,0xE9B7L},{0UL,0x1272L,65533UL,0x529EL,0xD652L}},{{1UL,0x5084L,0UL,0x1272L,9UL},{0x1238L,0xEFF3L,0xB3C1L,65535UL,0xB845L},{4UL,0xC083L,0x4296L,7UL,65535UL},{1UL,0x6588L,65535UL,0xE9B7L,0x24A2L},{5UL,0UL,0x529EL,0x75CFL,8UL},{0UL,0UL,7UL,0xF8ADL,2UL},{0xEFF3L,65529UL,0x36AAL,0UL,0x1989L},{0UL,0xE42BL,0x455DL,0x2812L,0xA228L},{0x83FBL,0x4232L,0xF8ADL,0x11B3L,7UL}},{{0xD652L,65535UL,0xF8ADL,0xFBD4L,1UL},{0UL,0xB845L,0x455DL,0xC083L,0UL},{0x1272L,0UL,0x36AAL,0x6588L,0x8239L},{0x75CFL,0UL,7UL,65535UL,0UL},{0UL,0x5FC0L,0x529EL,0x624CL,0x5AA5L},{0x901EL,0xC083L,65535UL,1UL,0xE42BL},{0x6588L,0UL,0x4232L,0x028AL,0xC754L},{7UL,0xE9B7L,0xE9B7L,7UL,0UL},{0UL,1UL,0UL,65529UL,0x624CL}}};
                    int l_122 = 1L;
                    int l_124 = 0x2B5ABC4BL;
                    int l_125 = (-8L);
                    int l_126 = 0L;
                    int l_127 = 4L;
                    int l_128 = 0xF56C5408L;
                    int i, j, k;
                }
            }
            g_92[2][6] = func_4((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0xE1L, (safe_lshift_func_int16_t_s_u(0L, g_73)))), ((g_73 , &g_72) != (((((p_70 == 1L) , p_69) != (void*)0) & g_73) , &g_72)))), p_70);
        }
        (*l_148) = &g_72;
    }
    else
    {
        int l_154 = (-1L);
        for (l_110 = 13; (l_110 < (-8)); l_110 = safe_sub_func_uint8_t_u_u(l_110, 8))
        {
            for (l_129 = 0; (l_129 == 33); l_129 = safe_add_func_uint8_t_u_u(l_129, 8))
            {
                return &g_92[0][5];
            }
        }
        (*p_69) = ((p_70 & ((((p_70 , l_154) , 0xDE7AL) , p_68) == p_69)) != func_4(p_70, (safe_mod_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((p_70 > (*g_72)), g_8)) , &g_92[1][4]) == p_69), l_154))));
    }
    for (g_73 = 0; (g_73 <= 14); g_73 = safe_add_func_uint32_t_u_u(g_73, 9))
    {
        unsigned char l_174 = 254UL;
        char l_175 = 1L;
        int * const l_176 = (void*)0;
        int l_187 = 0x9EF1DD19L;
        int l_211 = 2L;
        int l_213 = 0xE043BED2L;
        int l_215[3];
        unsigned l_222 = 0x10767AB1L;
        int i;
        for (i = 0; i < 3; i++)
            l_215[i] = 0L;
        l_175 = ((!(0xE1F43CF0L != (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_92[3][6], 0)), (l_169[1] != ((safe_add_func_uint32_t_u_u((((func_4((g_172[2][0][1] != (func_4((0x0BL > g_92[3][6]), p_70) , &g_173)), l_174) == p_70) >= 0x8E5BL) != 65535UL), 0x2773B058L)) , &g_173)))) > l_174), 0x92L)), 0UL)))) <= g_92[6][0]);
        for (l_110 = 2; (l_110 >= 0); l_110 -= 1)
        {
            int *** const l_181 = &g_173;
            int l_188 = 0x764B8550L;
            int **l_197[5][8][6] = {{{&l_75,&l_75,&g_72,&g_72,&l_75,&g_72},{&g_72,&l_75,&g_72,&g_72,&g_72,&l_75},{&l_75,&l_75,&g_72,(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72,&l_75,&g_72,&g_72},{&g_72,&g_72,&g_72,&l_75,(void*)0,(void*)0},{&g_72,&l_75,&g_72,&l_75,&l_75,&g_72},{(void*)0,&g_72,&g_72,&g_72,&g_72,&l_75},{&l_75,&g_72,&l_75,&l_75,(void*)0,&g_72}},{{&l_75,&l_75,&l_75,&l_75,&g_72,&g_72},{&l_75,&g_72,(void*)0,&l_75,&g_72,&l_75},{&l_75,&l_75,(void*)0,&l_75,&g_72,&g_72},{&g_72,&g_72,&l_75,&l_75,&l_75,(void*)0},{&g_72,&l_75,&l_75,&g_72,&l_75,&l_75},{&g_72,&g_72,&l_75,(void*)0,&g_72,(void*)0},{&l_75,&g_72,&g_72,(void*)0,&g_72,&g_72},{&g_72,&g_72,&l_75,&g_72,&g_72,&l_75}},{{&l_75,&g_72,&l_75,&g_72,&l_75,&g_72},{&l_75,&l_75,&l_75,(void*)0,&l_75,&g_72},{&g_72,&g_72,&l_75,(void*)0,&g_72,&l_75},{&g_72,&l_75,&l_75,&l_75,&g_72,&l_75},{&g_72,&l_75,&g_72,&g_72,&l_75,&g_72},{&g_72,(void*)0,&g_72,(void*)0,&l_75,&g_72},{&g_72,&g_72,&g_72,(void*)0,&g_72,&g_72},{&g_72,(void*)0,&g_72,&g_72,&l_75,&l_75}},{{&l_75,(void*)0,(void*)0,&g_72,&g_72,&g_72},{&g_72,&g_72,&l_75,&g_72,&l_75,&g_72},{&l_75,(void*)0,&l_75,&l_75,&l_75,&l_75},{&g_72,&l_75,&g_72,(void*)0,&g_72,&l_75},{&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72},{&l_75,&g_72,(void*)0,&l_75,&g_72,&g_72},{(void*)0,&g_72,(void*)0,&g_72,&g_72,&l_75},{(void*)0,&g_72,&g_72,&l_75,&g_72,&g_72}},{{&l_75,&g_72,&g_72,&g_72,&l_75,&g_72},{&g_72,(void*)0,&g_72,(void*)0,(void*)0,&g_72},{&g_72,&g_72,&l_75,&l_75,&g_72,&l_75},{&l_75,&g_72,&l_75,&l_75,&l_75,&g_72},{(void*)0,&g_72,(void*)0,&l_75,(void*)0,&g_72},{&g_72,&g_72,&g_72,&l_75,&g_72,&l_75},{&l_75,&g_72,&g_72,&l_75,&g_72,&l_75},{&g_72,(void*)0,&g_72,(void*)0,&g_72,&g_72}}};
            int i, j, k;
            if (l_174)
                break;
            for (l_129 = 0; (l_129 <= 2); l_129 += 1)
            {
                unsigned short l_185 = 0x88B6L;
                int * const **l_186 = (void*)0;
                int l_209 = 0L;
                short l_212 = (-5L);
                int l_214 = 0L;
                int l_216 = 8L;
                int l_217 = 0L;
                int l_218 = 0x362763AFL;
                int l_219 = 0x94DCDECDL;
                int l_220 = 0xFB1A5F3CL;
                int l_221[4][1][2];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_221[i][j][k] = 0x99FC73D9L;
                    }
                }
                p_69 = l_176;
                l_187 = (safe_add_func_uint8_t_u_u(p_70, ((safe_rshift_func_uint8_t_u_u(p_70, (0xE9DE08ACL | ((l_181 != (void*)0) , ((&g_173 != (func_4((g_92[3][6] > (safe_add_func_uint8_t_u_u(((((func_4(l_184, l_185) & 0x7AL) , p_70) | 0x1BL) , 0x20L), 0x19L))), p_70) , l_186)) >= 0xB8BDL))))) > 0L)));
                for (p_70 = 3; (p_70 >= 0); p_70 -= 1)
                {
                    int i, j, k;
                    l_188 = (-5L);
                    l_187 &= (safe_mod_func_int16_t_s_s(((((**g_173) , (((+((g_8 && (g_8 != (func_4((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((l_197[3][5][4] == &p_68), func_4(p_70, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((func_4((0x66A7A55DL < (safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(p_70, 7)) ^ p_70), g_92[3][5])) | g_208), p_70))), g_208) || 0x65879E4AL) != g_208) > 0L), g_73)), g_92[3][6]))))) <= g_208) < (-10L)), 2)), g_92[3][6])), p_70) <= g_73))) , 0xEDE8C016L)) , p_70) >= (*g_72))) == p_70) , 0L), g_92[5][5]));
                }
                --l_222;
            }
        }
        l_187 |= ((void*)0 == &p_68);
    }
    return (*g_173);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_208, "g_208", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_226[i], "g_226[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_335[i][j][k], "g_335[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
