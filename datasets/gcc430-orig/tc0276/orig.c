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
   unsigned short f0;
};

union U1 {
   volatile char f0;
   unsigned short f1;
   unsigned f2;
};

union U2 {
   volatile char f0;
   char f1;
   volatile char * volatile f2;
};

union U3 {
   int f0;
   unsigned short f1;
   volatile int f2;
};

union U4 {
   volatile char f0;
   unsigned f1;
   char f2;
};


static volatile int g_4 = 0x9CF30836L;
static char g_14 = 0xA7L;
static unsigned char g_19 = 0xB4L;
static union U0 g_44 = {8UL};
static int g_46 = 0L;
static volatile union U4 *g_69 = (void*)0;
static volatile union U4 g_71 = {-1L};
static unsigned g_77 = 1UL;
static union U4 g_98 = {0L};
static unsigned char g_100 = 0xE7L;
static short g_105 = 1L;
static union U4 g_113 = {-2L};
static unsigned char g_122 = 0UL;
static union U2 g_129 = {4L};
static volatile union U2 g_156 = {0x45L};
static volatile union U2 *g_155 = &g_156;
static union U4 *g_158 = (void*)0;
static union U0 *g_162 = &g_44;
static volatile int g_183 = 0x674BE705L;
static volatile int *g_182 = &g_183;
static volatile int **g_181 = &g_182;
static volatile int ***g_180 = &g_181;
static union U2 g_189 = {0xBEL};
static int g_213 = 0x7C9149DFL;
static union U1 g_222 = {0xA4L};
static union U3 g_228 = {3L};
static volatile union U3 g_231 = {0x68D2024EL};
static volatile union U3 *g_230 = &g_231;
static union U3 g_233 = {0L};
static unsigned char * volatile g_246 = &g_100;
static unsigned char * volatile *g_245 = &g_246;
static union U2 g_258 = {-1L};
static union U2 g_262 = {0x93L};
static int g_270 = 0x86E9F2B4L;
static volatile int g_295 = 0x85D3632DL;
static volatile int *g_294 = &g_295;
static volatile int **g_293 = &g_294;
static union U3 g_324 = {0x0A7D36E6L};
static union U3 g_327 = {-10L};
static volatile short g_345 = 5L;
static volatile short *g_344 = &g_345;
static volatile short * volatile *g_343 = &g_344;
static int **g_351 = (void*)0;
static int ***g_350 = &g_351;
static int g_368 = (-1L);
static unsigned g_376 = 0x9BA9FE94L;
static int *g_391 = &g_327.f0;
static union U3 g_396 = {0x0956FB6AL};
static union U1 g_405 = {-6L};
static union U1 g_407 = {7L};
static union U1 *g_406 = &g_407;
static unsigned g_413 = 0x802A82EBL;
static unsigned g_429 = 0x730AE061L;
static union U3 g_431 = {0x4B767AB5L};
static union U3 g_444 = {-5L};
static union U1 g_448 = {-1L};
static unsigned char g_466 = 255UL;
static int g_471 = (-1L);
static union U3 g_491 = {0x2B1AC3C3L};
static union U3 g_493 = {0xE7512D4AL};
static union U3 *g_492 = &g_493;
static unsigned char g_498 = 0xB7L;
static union U1 g_506 = {0L};
static union U3 g_528 = {0x8ABAF3FFL};
static volatile union U4 g_594 = {8L};
static volatile union U4 *g_593 = &g_594;
static short g_598 = 0x9966L;
static union U1 g_606 = {0L};
static union U4 *g_625 = (void*)0;
static union U4 g_634 = {-4L};
static union U2 g_640 = {0x2BL};
static unsigned char g_656 = 255UL;
static unsigned char g_681 = 0x7CL;
static union U2 g_764 = {0x63L};
static union U2 *g_766 = (void*)0;
static union U2 **g_765 = &g_766;
static union U4 g_772 = {0x21L};
static char ***g_808 = (void*)0;
static volatile unsigned g_813 = 0x8D3D2C2BL;
static volatile unsigned *g_812 = &g_813;
static volatile unsigned **g_811 = &g_812;
static unsigned g_840 = 4294967292UL;
static unsigned *g_860 = &g_376;
static unsigned **g_859 = &g_860;
static union U2 g_875 = {0xE9L};



static union U2 func_1(void);
static char * func_5(char * p_6, char p_7);
static char * func_8(char * p_9, unsigned short p_10, char * p_11, char * p_12);
static unsigned func_22(union U0 p_23, unsigned char * p_24);
static union U0 func_25(unsigned char * p_26, short p_27, unsigned p_28, unsigned p_29);
static unsigned char * func_30(unsigned char * p_31, unsigned char p_32, unsigned char * p_33, char * p_34);
static union U0 func_37(union U0 p_38, short p_39, char p_40);
static union U0 func_41(char * p_42, union U0 p_43);
static int func_50(unsigned short p_51, short p_52, unsigned p_53);
static unsigned short func_60(int * p_61, int p_62);
static union U2 func_1(void)
{
    char *l_13 = &g_14;
    int l_15 = 0x4F4E7975L;
    unsigned char *l_18 = &g_19;
    unsigned char *l_705 = &g_681;
    unsigned char **l_704 = &l_705;
    unsigned l_706 = 0xB6BA4237L;
    char *l_707 = &g_129.f1;
    char **l_919 = &l_13;
    union U0 l_920 = {5UL};
    int *l_921 = &g_491.f0;
    l_15 = (safe_mod_func_int32_t_s_s((g_4 != (((*l_919) = func_5(func_8(l_13, (l_15 != (safe_rshift_func_uint8_t_u_s(((*l_18) = g_14), 5))), l_13, (((safe_add_func_uint32_t_u_u((func_22(func_25(func_30(((*l_704) = (((6L <= (((((safe_add_func_uint16_t_u_u((((func_37(func_41(&g_14, g_44), l_15, g_129.f1) , l_15) <= 0xB2BAB7EFL) , g_491.f0), 0x75D7L)) , l_13) != &g_14) , l_13) != &g_681)) == l_15) , &g_498)), l_706, &g_656, l_707), l_15, l_15, g_528.f1), l_707) <= l_15), 4294967288UL)) || l_706) , (void*)0)), l_706)) == (void*)0)), 7L));

    ;
    ;
    ;

    ;
    ;
    ;

    if (l_706)
    {
        (**g_180) = (**g_180);
        return (*g_155);


            }
    else
    {
        l_921 = &l_15;

        ;
        (*l_921) = ((*l_921) == (!(~(-1L))));
        return (*g_155);


            }
}







static char * func_5(char * p_6, char p_7)
{
    int *l_901 = (void*)0;
    int l_902 = 1L;
    unsigned short *l_903 = &g_396.f1;
    int *l_904 = &g_270;
    unsigned l_913 = 0x13C24EB4L;
    short *l_914 = &g_598;
    unsigned l_915 = 0x24EC93AEL;
    (*l_904) = ((safe_rshift_func_uint8_t_u_s(g_368, (*p_6))) & l_915);
    for (g_233.f0 = 0; (g_233.f0 == (-25)); g_233.f0 = safe_sub_func_uint32_t_u_u(g_233.f0, 4))
    {
        volatile union U4 **l_918 = &g_593;
        (*l_918) = g_69;

        ;
    }

    ;
    return &g_14;


}







static char * func_8(char * p_9, unsigned short p_10, char * p_11, char * p_12)
{
    unsigned char *l_889 = &g_656;
    unsigned char **l_888 = &l_889;
    int l_894 = 0xB07FFC2EL;
    int *l_895 = (void*)0;
    int *l_896 = (void*)0;
    unsigned char l_897 = 0xBAL;
    int *l_898 = &g_471;
    l_888 = l_888;
    for (g_327.f0 = 0; (g_327.f0 == (-19)); g_327.f0 = safe_sub_func_int32_t_s_s(g_327.f0, 8))
    {
        int *l_892 = &g_324.f0;
        int *l_893 = &g_431.f0;
        (*l_892) = p_10;

        (*l_893) = ((*l_892) = 0x1DDE1B50L);

    }
    l_894 = l_894;
    (*l_898) = l_897;
    return p_11;


}







static unsigned func_22(union U0 p_23, unsigned char * p_24)
{
    int *l_825 = &g_327.f0;
    char *l_834 = &g_98.f2;
    unsigned short l_837 = 0xB613L;
    unsigned *l_838 = &g_77;
    unsigned *l_839 = &g_840;
    union U3 **l_841 = &g_492;
    unsigned l_842 = 0xB1845A34L;
    char *l_843 = &g_640.f1;
    unsigned short *l_844 = &g_233.f1;
    unsigned l_845 = 0x06F4A0E3L;
    int l_846 = 0xD52FD6D9L;
    union U4 **l_869 = &g_158;
    char l_887 = 0xC4L;
    l_825 = l_825;
    if ((l_846 = (((*l_825) = ((((*l_825) >= (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((g_368 >= 0xFFL) ^ ((*l_834) = (safe_lshift_func_uint8_t_u_u(0x6CL, 5)))), (((((*l_844) = (((((*l_843) = (((*l_825) | (((*p_24) > (((((safe_add_func_uint16_t_u_u(((((*p_24) ^ p_23.f0) != ((((*l_839) = ((*l_838) = ((g_498 > p_23.f0) & l_837))) | p_23.f0) | g_44.f0)) , (*l_825)), p_23.f0)) > (*l_825)) , l_841) == &g_492) & 0xEB7CF0EFL)) ^ 1L)) ^ l_842)) <= p_23.f0) & 0x57L) & g_233.f0)) , p_23.f0) ^ l_845) , p_23.f0))), 4)), 3L))) <= 0x2DL) & (*l_825))) != (*p_24))))
    {
        union U0 l_853 = {0UL};
        union U0 *l_854 = &l_853;
        unsigned short l_883 = 0x6B17L;
        int l_886 = 0x5CE3714CL;
        if ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_23.f0, (*l_825))), ((((safe_sub_func_int16_t_s_s(((void*)0 == &p_23), (((*l_854) = l_853) , (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((252UL & (*l_825)), g_528.f1)), ((void*)0 == g_859)))))) <= (*l_825)) > (*p_24)) ^ p_23.f0))))
        {
            int **l_863 = &l_825;
            union U4 **l_867 = &g_158;
            union U2 *l_874 = &g_875;
            for (g_491.f1 = 20; (g_491.f1 > 7); --g_491.f1)
            {
                int *l_866 = &g_368;
                union U4 ***l_868 = (void*)0;
                int l_873 = (-5L);
                union U2 **l_876 = &g_766;
                char ****l_877 = &g_808;
            }

            l_883 = ((*g_391) = (l_853.f0 , (safe_sub_func_uint16_t_u_u((**l_863), 0x1482L))));
        }
        else
        {
            for (g_405.f2 = 10; (g_405.f2 == 60); g_405.f2 = safe_add_func_int32_t_s_s(g_405.f2, 2))
            {
                l_886 = (*g_391);
                return p_23.f0;
            }

        }

    }
    else
    {
        g_391 = &l_846;

        ;
    }

    ;
    return l_887;


}







static union U0 func_25(unsigned char * p_26, short p_27, unsigned p_28, unsigned p_29)
{
    int *l_770 = &g_431.f0;
    unsigned l_801 = 0x56677253L;
    union U0 *l_820 = &g_44;
    unsigned short *l_824 = &g_528.f1;
    for (g_105 = 0; (g_105 == (-26)); g_105--)
    {
        union U2 *l_763 = &g_764;
        union U2 **l_762 = &l_763;
        int *l_769 = &g_324.f0;
        unsigned *l_816 = &g_77;
        unsigned **l_815 = &l_816;
        g_406 = (void*)0;

        ;
        g_765 = l_762;

        ;
        for (g_528.f0 = 0; (g_528.f0 <= 10); ++g_528.f0)
        {
            union U0 l_782 = {0x44A1L};
            unsigned short l_804 = 0x3527L;
            int l_810 = 0L;
            int *l_819 = &g_491.f0;
            l_770 = l_769;

            ;
        }
    }

    ;

    ;
    (*g_391) = ((g_344 == ((p_29 , ((*l_770) = ((*p_26) > ((safe_add_func_uint16_t_u_u(p_28, (0xA249L < (l_801 >= g_634.f2)))) || g_431.f1)))) , l_824)) >= p_28);

    return (*l_820);

    }







static unsigned char * func_30(unsigned char * p_31, unsigned char p_32, unsigned char * p_33, char * p_34)
{
    char l_710 = 0x85L;
    union U0 **l_717 = (void*)0;
    union U0 ***l_718 = &l_717;
    union U0 **l_719 = &g_162;
    int l_720 = 0x1099D796L;
    unsigned short *l_721 = &g_431.f1;
    int l_722 = 1L;
    int *l_725 = &g_491.f0;
    unsigned char *l_746 = (void*)0;
    l_722 = (((*l_721) = (safe_rshift_func_int8_t_s_s((((*g_391) = (p_32 & l_710)) | (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(l_710, ((safe_lshift_func_uint16_t_u_u(p_32, 5)) , (l_720 = (((*l_718) = ((p_32 >= g_493.f1) , l_717)) == l_719))))) > (l_710 && l_710)) || 0x3BL), l_710))), l_710))) <= g_493.f0);

    for (g_606.f1 = (-7); (g_606.f1 > 29); g_606.f1 = safe_add_func_int16_t_s_s(g_606.f1, 5))
    {
        int **l_726 = &l_725;
        int *l_748 = &g_368;
        int **l_747 = &l_748;
        int l_751 = 0xB5FAC56BL;
        (*l_726) = l_725;
        (*g_181) = (**g_180);
        for (g_448.f1 = 0; (g_448.f1 > 47); g_448.f1 = safe_add_func_uint8_t_u_u(g_448.f1, 1))
        {
            char l_737 = 0x6BL;
            int l_743 = 1L;
        }

        (**g_180) = (void*)0;

        ;
    }

    (*l_725) = (((((*l_725) == (*p_33)) < p_32) ^ (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_721) = ((*l_719) != &g_44)), p_32)), (*l_725))), g_493.f0))) , p_32);
    for (g_98.f1 = 0; (g_98.f1 >= 13); ++g_98.f1)
    {
        return &g_466;


    }

    return &g_656;


}







static union U0 func_37(union U0 p_38, short p_39, char p_40)
{
    unsigned l_685 = 4294967292UL;
    unsigned *l_697 = &g_429;
    unsigned **l_696 = &l_697;
    int **l_700 = &g_391;
    unsigned *l_701 = &g_429;
    char *l_702 = (void*)0;
    char *l_703 = &g_258.f1;
    (*g_391) = (l_685 == (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_40 = (((*l_703) = p_39) || 0L)), 5)), (**l_700))));
    return p_38;

    }







static union U0 func_41(char * p_42, union U0 p_43)
{
    int *l_45 = &g_46;
    union U4 *l_633 = &g_634;
    union U2 *l_639 = &g_640;
    union U2 **l_638 = &l_639;
    union U0 l_667 = {0x38D4L};
    unsigned short l_680 = 0x2C3FL;
    (*l_45) = g_14;
    for (g_46 = 0; (g_46 <= (-30)); g_46 = safe_sub_func_int16_t_s_s(g_46, 4))
    {
        int **l_49 = &l_45;
        (*l_49) = (void*)0;

        ;
    }

    ;
    (*g_391) = func_50(g_44.f0, g_44.f0, g_46);

    ;
    ;
    ;
    for (g_466 = 0; (g_466 > 56); ++g_466)
    {
        int l_635 = 2L;
        int l_651 = 0xC1AE3B33L;
        unsigned *l_677 = (void*)0;
        unsigned **l_676 = &l_677;
        g_158 = l_633;

        ;
        (*g_391) = l_635;
    }

    ;
    return g_44;

    }







static int func_50(unsigned short p_51, short p_52, unsigned p_53)
{
    int *l_63 = &g_46;
    char l_597 = (-1L);
    union U1 *l_605 = &g_606;
    int l_607 = 0xD00228FDL;
    unsigned l_608 = 0xB016F9D1L;
    short *l_611 = &g_598;
    union U0 l_614 = {1UL};
    union U0 **l_615 = &g_162;
    union U4 **l_624 = &g_158;
    union U4 **l_626 = &g_625;
    unsigned char *l_627 = &g_100;
    (*g_391) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint8_t_u_s(0x1CL, ((func_60(l_63, ((*l_63) = (*l_63))) & p_53) , ((((safe_lshift_func_uint8_t_u_u(((~((l_597 = 255UL) != g_324.f0)) ^ g_598), 7)) <= ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*l_63) = ((safe_mod_func_uint32_t_u_u(((void*)0 == l_605), (*g_391))) , (*l_63))) & g_429), l_607)), p_52)) || (*l_63))) & g_444.f1) == g_105)))) && 0x2548L) != 0xA741L) , (*l_63)), 7)), l_608));

    ;
    ;
    ;
    (*g_391) = ((*l_63) = (safe_lshift_func_uint8_t_u_u(((((*l_63) < (-8L)) | (((void*)0 != l_611) & ((*l_63) || (safe_rshift_func_uint8_t_u_s(p_53, 1))))) , p_51), 1)));
    (*l_615) = (void*)0;

    ;
    if ((safe_rshift_func_uint8_t_u_s(p_53, (p_53 , ((safe_mod_func_uint16_t_u_u(((*l_63) = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((((*l_624) = (void*)0) == ((*l_626) = g_625)) && (*l_63)), 2)), 14))), g_444.f0)) != ((((*l_627) = g_431.f1) != 1L) | g_444.f0))))))
    {
        int l_628 = 0L;
        return l_628;
    }
    else
    {
        (*g_391) = (safe_mod_func_int16_t_s_s(0L, (*l_63)));
        return p_52;
    }
}







static unsigned short func_60(int * p_61, int p_62)
{
    int l_64 = (-9L);
    int l_95 = 0x94516193L;
    union U4 *l_97 = &g_98;
    union U4 **l_96 = &l_97;
    short l_174 = 0xE7CFL;
    int *l_179 = (void*)0;
    int **l_178 = &l_179;
    int ***l_177 = &l_178;
    unsigned l_184 = 4294967286UL;
    union U2 **l_271 = (void*)0;
    unsigned l_287 = 0x25BE33F8L;
    unsigned char *l_301 = &g_100;
    union U3 *l_430 = &g_431;
    int l_434 = 1L;
    int *l_446 = &g_444.f0;
    union U1 *l_447 = &g_448;
    unsigned short *l_480 = (void*)0;
    unsigned char l_501 = 0x7CL;
    union U0 l_504 = {0x209EL};
    unsigned short l_515 = 0UL;
    int *l_555 = (void*)0;
    union U2 *l_588 = (void*)0;
    if (l_64)
    {
        unsigned l_81 = 3UL;
        union U4 *l_114 = (void*)0;
        unsigned char *l_133 = &g_122;
        unsigned char **l_132 = &l_133;
        int *l_136 = &l_95;
        union U3 *l_227 = &g_228;
        union U2 *l_261 = &g_262;
        union U2 **l_260 = &l_261;
        union U2 ***l_259 = &l_260;
        unsigned char *l_288 = &g_100;
        char *l_290 = (void*)0;
        char *l_291 = &g_258.f1;
        char **l_441 = (void*)0;
        char ***l_440 = &l_441;
        if (((*p_61) = (safe_lshift_func_int8_t_s_u(l_64, 7))))
        {
            unsigned char **l_68 = (void*)0;
            unsigned char ***l_67 = &l_68;
            volatile union U4 *l_70 = &g_71;
            int l_80 = 0xAD6770D2L;
            union U0 *l_126 = &g_44;
            union U2 *l_188 = &g_189;
            (*l_67) = (void*)0;
            l_70 = g_69;

            ;
            if (g_44.f0)
            {
                volatile union U4 **l_72 = &g_69;
                int l_82 = 0x7151158EL;
                unsigned l_83 = 0x4D14C5BDL;
                (*l_72) = (g_44 , g_69);
                (*p_61) = (safe_add_func_uint32_t_u_u((g_46 & (((((safe_rshift_func_int16_t_s_u((((((void*)0 == &g_46) <= (g_77 = p_62)) > ((g_46 | ((safe_mod_func_int16_t_s_s(l_80, l_81)) > p_62)) && 4UL)) && (-1L)), l_82)) ^ g_44.f0) > l_83) >= g_46) < l_80)), 0x5DBDFDDCL));
            }
            else
            {
                int l_88 = 0L;
                unsigned char *l_99 = &g_100;
                int *l_101 = &l_95;
                short *l_121 = &g_105;
                union U2 **l_190 = &l_188;
                if ((g_77 <= (((*l_101) = (g_46 = (((safe_mod_func_uint16_t_u_u(g_14, (safe_sub_func_int16_t_s_s(l_88, (((*l_99) = ((((((p_62 || ((safe_mod_func_int32_t_s_s(g_46, (*p_61))) == ((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u(g_44.f0, (248UL & l_80))) <= p_62) ^ (*p_61)) , p_62), l_64)) , l_95))) , l_96) == (void*)0) , g_14) >= l_64) ^ 0xEAL)) | g_46))))) >= 0xFBA6L) >= l_80))) ^ l_81)))
                {
                    int *l_123 = &l_95;
                    union U2 *l_128 = &g_129;
                    int *l_147 = &l_80;
                    if ((*p_61))
                    {
                        short *l_104 = &g_105;
                        char *l_110 = &g_98.f2;
                        unsigned *l_111 = &g_77;
                        union U4 *l_112 = &g_113;
                        (*p_61) = (+0x75EF58E7L);
                        (*p_61) = (((safe_lshift_func_int16_t_s_s(((*l_104) = g_14), (((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_110) = p_62) < (((l_64 < ((*l_111) = (l_81 && p_62))) , g_100) || (((g_100 , l_112) != ((*l_96) = l_114)) ^ l_81))), p_62)), l_80)) , (-1L)) && p_62) , 0xA7L) | 247UL))) == 0x6C41L) , (-1L));

                        ;
                        (*l_101) = 0x979765BCL;
                    }
                    else
                    {
                        int **l_116 = &l_101;
                        int ***l_115 = &l_116;
                        p_61 = &g_46;
                        (*l_115) = &p_61;

                        ;
                        (*l_116) = (void*)0;

                        ;
                        (*l_101) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_62, ((g_100 , (*l_101)) <= p_62))), (*l_101)));
                    }

                    ;
                    ;
                    if ((((void*)0 != l_121) && (g_122 = p_62)))
                    {
                        int **l_124 = (void*)0;
                        int **l_125 = &l_123;
                        union U0 **l_127 = &l_126;
                        union U2 **l_130 = (void*)0;
                        union U2 **l_131 = &l_128;
                        (*l_125) = l_123;
                        (*l_127) = l_126;
                        (*l_131) = l_128;
                        (*l_123) = ((g_77 || ((g_46 < ((void*)0 == l_132)) <= l_95)) == 0xF44DL);
                    }
                    else
                    {
                        int **l_134 = (void*)0;
                        int **l_135 = &l_101;
                        (*l_135) = &l_95;
                        l_136 = (void*)0;

                        ;
                        return g_77;
                    }
                    if (((*l_136) > (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_44.f0 , ((*l_121) = (safe_add_func_int32_t_s_s(p_62, (g_122 ^ ((((safe_add_func_uint32_t_u_u(l_64, (+(-1L)))) , l_64) , (((((*l_147) = (*l_123)) == (safe_mod_func_int32_t_s_s(p_62, (*l_136)))) >= 1L) , p_62)) & (*l_123))))))), 4)), 4)), 3))))
                    {
                        int **l_150 = &l_123;
                        (*l_150) = &p_62;

                        ;
                        return g_98.f2;
                    }
                    else
                    {
                        unsigned *l_157 = &g_77;
                        (*l_136) = (*l_147);
                        g_46 = (p_62 == (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((*l_147) , ((g_44 , l_128) == g_155)), (((*l_157) = 1UL) <= ((&g_100 == (p_62 , &g_100)) <= (*l_136))))), (*l_147))));
                        g_46 = (0x6BFE3AE0L & (-1L));
                    }
                }
                else
                {
                    union U4 **l_159 = &g_158;
                    unsigned *l_165 = &g_77;
                    unsigned **l_164 = &l_165;
                    unsigned ***l_163 = &l_164;
                    (*l_101) = (((*l_96) = l_114) != ((*l_159) = g_158));

                    ;
                    for (g_77 = 27; (g_77 != 12); --g_77)
                    {
                        if (g_14)
                            break;
                        (*l_136) = l_95;
                        g_162 = &g_44;
                        return p_62;
                    }
                    (*l_163) = (void*)0;

                    ;
                    return g_77;
                }

                ;
                ;
                for (l_81 = 22; (l_81 >= 29); l_81 = safe_add_func_uint32_t_u_u(l_81, 9))
                {
                    unsigned l_168 = 0xC493E54AL;
                    if (((((p_62 , l_168) & ((safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(65526UL, ((l_95 , ((g_129.f1 && (safe_rshift_func_int8_t_s_s(((l_174 = g_129.f1) < ((*l_99) = (p_62 , 0x3EL))), (((&l_70 == &l_114) < 8UL) ^ 0x0EBA2CB8L)))) ^ (*l_101))) , g_113.f2))))) ^ l_95)) == (-3L)) , g_129.f1))
                    {
                        (*l_101) = (p_62 >= 3UL);
                        (*l_136) = g_44.f0;
                    }
                    else
                    {
                        int **l_175 = &l_101;
                        char *l_176 = &g_98.f2;
                        union U2 ***l_185 = (void*)0;
                        union U2 **l_187 = (void*)0;
                        union U2 ***l_186 = &l_187;
                        (*l_175) = &p_62;

                        ;
                        g_46 = (((&g_46 == (l_64 , (l_174 , &g_46))) , (l_80 <= ((((((*l_176) = (*l_136)) && (l_177 == g_180)) == g_122) , l_184) || p_62))) >= l_80);
                        (*l_186) = (void*)0;
                        return p_62;
                    }
                    (**g_180) = (void*)0;

                    ;
                    (*l_136) = (g_46 = 1L);
                }

                ;
                (*l_190) = ((g_98.f2 | p_62) , l_188);
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_195 = &g_46;
            char *l_197 = &g_14;
            char **l_196 = &l_197;
            int l_217 = (-1L);
            int l_265 = (-2L);
            union U2 **l_272 = &l_261;
            int *l_279 = &l_265;
            unsigned short l_282 = 0x2C26L;
            unsigned char *l_283 = &g_100;
            short l_285 = 0L;
            for (g_122 = (-21); (g_122 != 31); g_122++)
            {
                unsigned char l_216 = 0x1BL;
                unsigned *l_218 = &l_184;
                int l_219 = 0x00AC53F8L;
                unsigned char *l_220 = &g_100;
                union U1 *l_221 = &g_222;
                unsigned l_266 = 0UL;
                union U0 l_274 = {7UL};
                for (g_77 = (-10); (g_77 < 39); g_77 = safe_add_func_int8_t_s_s(g_77, 6))
                {
                    char ***l_198 = &l_196;
                    unsigned short *l_203 = &g_44.f0;
                    l_195 = (void*)0;

                    ;
                    (*l_198) = l_196;
                    for (g_98.f1 = (-8); (g_98.f1 < 39); ++g_98.f1)
                    {
                        if ((*p_61))
                            break;
                        (*l_178) = &p_62;

                        ;
                        (*p_61) = (*p_61);
                    }

                    (*p_61) = (safe_rshift_func_uint16_t_u_u(((*l_203) = (!p_62)), 10));
                }
                if ((((safe_rshift_func_int16_t_s_u((((g_129.f1 , ((((((*l_220) = ((((g_46 || ((*p_61) > (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((l_219 = (+(safe_sub_func_uint16_t_u_u(((*l_136) == (safe_add_func_int8_t_s_s((0x6997C529L && ((*l_218) = (~((0x73L != ((g_213 >= ((l_216 = (g_77 != 0UL)) & l_217)) && l_216)) < p_62)))), 3UL))), g_105)))))) != 255UL), 0x0DA4L)))) , g_105) , 0x83B4L) && p_62)) || p_62) ^ p_62) < p_62) ^ p_62)) <= 1UL) , l_219), p_62)) & g_77) <= g_189.f1))
                {
                    union U1 **l_223 = (void*)0;
                    union U1 **l_224 = &l_221;
                    union U3 *l_232 = &g_233;
                    (*l_224) = l_221;
                    for (g_113.f2 = 0; (g_113.f2 != (-4)); g_113.f2--)
                    {
                        union U3 **l_229 = &l_227;
                        (*l_229) = (p_62 , l_227);
                        (*l_136) = (g_230 != l_232);
                        if ((*p_61))
                            break;
                    }

                }
                else
                {
                    unsigned l_239 = 0x9A8B32BEL;
                    union U2 *l_257 = &g_258;
                    union U2 **l_256 = &l_257;
                    union U2 ***l_255 = &l_256;
                    unsigned short *l_267 = &g_44.f0;
                    if ((((void*)0 != l_136) | 2UL))
                    {
                        unsigned char **l_238 = &l_220;
                        int l_244 = 0x6FDDE1F1L;
                        (*p_61) = (g_129.f1 > ((((safe_lshift_func_int16_t_s_s(0L, 8)) >= ((*l_218) = (safe_sub_func_int32_t_s_s(((g_213 <= p_62) | (-1L)), (l_238 == (l_239 , (((safe_rshift_func_uint16_t_u_u(((~((safe_rshift_func_int16_t_s_u(((*p_61) >= (*p_61)), p_62)) > 0x1DA1D933L)) != l_244), p_62)) == 1UL) , g_245))))))) , (void*)0) != &g_77));
                    }
                    else
                    {
                        (**g_180) = (*g_181);
                    }
                    if (g_122)
                        break;
                    (*p_61) = ((*l_136) = (((*l_218) = (p_62 < (((safe_mod_func_uint32_t_u_u(l_216, (~(((((*l_267) = (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_265 = (((((*l_136) , (((0x79B5F31FL > (safe_rshift_func_uint16_t_u_s(0xFE12L, 4))) , l_255) == (g_113.f2 , l_259))) ^ (g_98.f2 = ((safe_add_func_int16_t_s_s(((-8L) < p_62), p_62)) , g_14))) | (*p_61)) , (*l_136))) , g_228.f1), 15)) , 1L), l_266))) | g_213) , g_105) < g_233.f0)))) >= 7L) > g_14))) < g_262.f1));

                }

                for (g_98.f2 = 0; (g_98.f2 != (-9)); g_98.f2--)
                {
                    int *l_273 = &l_265;
                    (*l_136) = g_233.f0;
                    (**l_177) = &p_62;

                    ;
                    (*l_179) = g_46;
                    l_219 = (((g_270 , l_266) && (l_271 != (g_46 , l_272))) , ((((((*l_273) = ((((((*l_179) = (*p_61)) ^ l_216) || ((void*)0 == &g_14)) , (*l_136)) ^ g_258.f1)) , (-6L)) | g_233.f1) , l_274) , g_77));
                }

            }

            ;
            ;
            for (l_184 = 13; (l_184 <= 52); ++l_184)
            {
                (**g_180) = (*g_181);
            }
            (*l_136) = (safe_sub_func_uint32_t_u_u(p_62, ((((((((*l_279) = g_228.f1) , (g_122 ^ ((safe_rshift_func_uint8_t_u_s(((*l_283) = l_282), (((safe_unary_minus_func_int32_t_s((l_285 , (*l_136)))) && 1UL) == 0x86L))) > p_62))) || (*p_61)) | g_129.f1) , 0xECL) , (*l_136)) | g_258.f1)));
            g_228.f0 = ((*p_61) = (0x0081L >= (safe_unary_minus_func_uint8_t_u(p_62))));
        }

        ;
        ;
        ;
        ;
        if (((*l_136) = (((*l_288) = ((**l_132) = l_287)) <= ((*l_291) = (safe_unary_minus_func_int8_t_s(p_62))))))
        {
            short l_292 = 0L;
            return l_292;
        }
        else
        {
            volatile int **l_296 = &g_294;
            volatile union U2 **l_297 = (void*)0;
            volatile union U2 **l_298 = &g_155;
            int l_304 = 0x96AD6193L;
            int l_331 = 0x15F0C1A5L;
            union U0 **l_338 = &g_162;
            char *l_416 = &g_258.f1;
            l_296 = g_293;
            (*l_298) = g_155;
            if ((safe_sub_func_uint16_t_u_u(((void*)0 == l_301), 0xF4C0L)))
            {
                int *l_302 = (void*)0;
                int *l_303 = (void*)0;
                p_62 = ((*l_136) = 0xBCEACDC0L);
            }
            else
            {
                short l_311 = 0x609DL;
                union U3 *l_323 = &g_324;
                if (g_98.f2)
                {
                    int l_314 = 0x09D400D4L;
                    unsigned *l_316 = &g_77;
                    unsigned **l_315 = &l_316;
                    short *l_317 = &g_105;
                    g_228.f0 = ((l_304 | (*l_136)) & g_258.f1);
                    (*g_181) = (*g_181);
                    for (g_113.f2 = 0; (g_113.f2 < (-27)); g_113.f2--)
                    {
                        (*g_181) = (void*)0;

                        ;
                    }

                    (*l_96) = ((p_62 >= (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((*l_136) & ((g_233.f0 = p_62) , (l_311 == 0xFDB9L))), g_262.f1)), ((safe_sub_func_int16_t_s_s(((*l_317) = (g_113.f2 , (l_314 , ((void*)0 != l_315)))), l_314)) <= 0L)))) , (void*)0);

                    ;
                }
                else
                {
                    int *l_328 = &g_213;
                    (**g_180) = (**g_180);
                    for (g_228.f1 = 15; (g_228.f1 != 50); g_228.f1++)
                    {
                        char l_322 = 1L;
                        union U3 **l_325 = &l_323;
                        union U3 *l_326 = &g_327;
                        g_233.f0 = (p_62 || (safe_sub_func_uint8_t_u_u(l_322, g_100)));
                        (*l_325) = l_323;
                        (*l_325) = l_326;

                        ;
                        (*l_178) = l_328;

                        ;
                    }

                    ;
                    ;
                    (*l_136) = (safe_add_func_int8_t_s_s((p_62 ^ l_331), ((g_77 <= ((((safe_rshift_func_uint16_t_u_u((p_62 || (-3L)), 8)) >= ((*l_136) , (~p_62))) <= (g_270 = (g_98.f2 >= (l_311 && (-1L))))) == 1UL)) , 1UL)));
                    p_62 = g_77;
                }

                ;
                ;
                (*l_136) = (safe_add_func_uint8_t_u_u(l_304, ((((safe_lshift_func_int8_t_s_u(p_62, p_62)) ^ (l_338 == ((*g_162) , &g_162))) , g_327.f0) >= g_77)));
            }

            ;
            for (l_174 = 0; (l_174 < (-25)); l_174--)
            {
                int ***l_353 = &l_178;
                int l_371 = 0xF28B6A91L;
                int l_390 = (-9L);
                unsigned *l_402 = &l_184;
                union U1 *l_404 = &g_405;
                char **l_438 = (void*)0;
                char ***l_437 = &l_438;
                l_114 = (void*)0;
                (**g_180) = (*g_181);
            }
        }

        ;
        (*g_181) = (void*)0;

        ;
    }
    else
    {
        unsigned short l_445 = 0UL;
        (*l_178) = (void*)0;
        (*p_61) = l_445;
        (*p_61) = l_445;
    }

    ;
    ;
    ;
    ;
    (*l_446) = (*g_391);
    if ((p_62 == ((void*)0 != &l_430)))
    {
        union U1 **l_449 = &g_406;
        (*l_449) = l_447;

        ;
        return p_62;
    }
    else
    {
        unsigned l_450 = 8UL;
        int *l_463 = &g_368;
        int **l_462 = &l_463;
        int l_467 = 0x70EE555CL;
        unsigned l_516 = 0UL;
        union U4 *l_591 = (void*)0;
        g_406 = g_406;
        if (l_450)
        {
            unsigned l_489 = 0x3F4ED036L;
            int *l_526 = &l_434;
            for (l_64 = 0; (l_64 == 5); ++l_64)
            {
                unsigned short l_459 = 1UL;
                union U3 *l_490 = &g_491;
                unsigned l_503 = 0xA1FBE2FBL;
                union U1 *l_505 = &g_506;
                union U4 *l_507 = (void*)0;
            }
            if ((~l_516))
            {
                for (g_228.f1 = 26; (g_228.f1 <= 25); --g_228.f1)
                {
                    return g_270;
                }
            }
            else
            {
                for (l_450 = 0; (l_450 != 12); l_450 = safe_add_func_uint8_t_u_u(l_450, 8))
                {
                    int l_521 = 0L;
                    if (l_521)
                        break;
                }
                for (g_429 = 0; (g_429 >= 59); g_429++)
                {
                    return g_233.f0;
                }
            }
            for (l_450 = 0; (l_450 <= 15); ++l_450)
            {
                union U3 *l_527 = &g_528;
                short *l_541 = &l_174;
                int l_542 = 1L;
                unsigned *l_543 = &g_448.f2;
                p_61 = l_526;

                ;
                l_467 = ((0x65L && (l_527 == (((*l_543) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((g_528.f1 , (p_62 && ((*l_541) = (safe_add_func_int32_t_s_s((+(safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(0xDDL, (~(p_62 >= ((*l_301) = p_62))))), (*g_391))), (g_105 = ((void*)0 != (*g_293)))))), g_77))))) | 0x973EA4A8L), l_542)), 3))) , g_230))) || p_62);
                (*p_61) = (0xDE2EL ^ (safe_mod_func_int32_t_s_s((*p_61), l_542)));
                for (g_46 = 0; (g_46 > 9); g_46 = safe_add_func_int8_t_s_s(g_46, 1))
                {
                    char *l_552 = &g_262.f1;
                    unsigned **l_553 = &l_543;
                    unsigned *l_554 = (void*)0;
                    int l_556 = 0xE25946A8L;
                    union U0 **l_557 = &g_162;
                    (*l_557) = ((((safe_add_func_int16_t_s_s(((65530UL <= (safe_sub_func_int8_t_s_s(((*l_552) = (g_466 >= p_62)), (p_61 != ((*l_553) = &l_287))))) & ((*p_61) | ((*l_446) = 0xED11083BL))), ((*l_541) = (l_516 , ((l_555 = (void*)0) == &l_64))))) >= p_62) < l_556) , (void*)0);

                    ;
                    ;
                    if ((*l_526))
                        break;
                    (*l_96) = g_158;

                    ;
                }

                ;
            }

            ;
            ;
        }
        else
        {
            union U1 **l_558 = &l_447;
            int l_559 = 0x4020D6A4L;
            unsigned *l_562 = &l_184;
            unsigned short *l_569 = &g_396.f1;
            if ((((*l_446) = (7L == (g_406 == ((*l_558) = g_406)))) ^ (((*l_569) = (l_559 ^ ((((*l_562) = l_450) > ((safe_rshift_func_uint16_t_u_s(l_559, 8)) > ((*g_391) = (l_467 , (((safe_sub_func_uint32_t_u_u(((g_491.f1 , (safe_sub_func_uint32_t_u_u(p_62, l_516))) ^ (-1L)), 1L)) ^ g_431.f1) , 1L))))) & p_62))) , g_413)))
            {
                char l_576 = 0x2DL;
                int *l_583 = &g_368;
                l_559 = (g_498 && (g_466 = ((*l_301) = (((((((+((safe_sub_func_int8_t_s_s(l_450, (((safe_sub_func_int32_t_s_s(((g_122 & g_233.f1) > 1UL), (!((*g_391) = p_62)))) < g_228.f1) == g_528.f1))) & (safe_rshift_func_uint16_t_u_s(((2L & g_122) && p_62), 4)))) && p_62) < 0L) >= g_258.f1) >= g_471) ^ p_62) , l_576))));
                for (l_95 = 29; (l_95 > (-14)); l_95 = safe_sub_func_uint8_t_u_u(l_95, 6))
                {
                    union U0 *l_579 = &l_504;
                    union U0 **l_580 = &g_162;
                    (*l_580) = (l_579 = (void*)0);

                    ;
                    ;
                }

                ;
                if (l_559)
                {
                    (*l_446) = ((safe_lshift_func_int16_t_s_u(p_62, (l_562 != l_583))) < l_516);
                }
                else
                {
                    for (g_396.f0 = 0; (g_396.f0 < 16); g_396.f0 = safe_add_func_int16_t_s_s(g_396.f0, 3))
                    {
                        return p_62;
                    }

                    (*l_446) = (*g_391);
                }
            }
            else
            {
                short l_590 = 0x6C6AL;
                for (l_174 = (-27); (l_174 < (-26)); l_174 = safe_add_func_int16_t_s_s(l_174, 1))
                {
                    union U2 **l_589 = &l_588;
                    int l_592 = 0xD8B2D813L;
                    (*l_589) = l_588;
                    if (l_590)
                        break;
                    (*g_391) = 0xE7DAE0BDL;
                    if ((~p_62))
                    {
                        (*g_391) = ((*l_446) = (l_591 != (l_592 , g_593)));
                        if (l_559)
                            continue;
                        if (l_559)
                            continue;
                        (*g_350) = (*g_350);
                    }
                    else
                    {
                        return l_559;
                    }
                }
            }

            ;
            ;
            return g_444.f0;
        }

        ;
        ;
    }

    ;
    ;
    return g_528.f1;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_156.f0, "g_156.f0", print_hash_value);
    transparent_crc(g_156.f1, "g_156.f1", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_222.f0, "g_222.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    transparent_crc(g_233.f2, "g_233.f2", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_327.f0, "g_327.f0", print_hash_value);
    transparent_crc(g_327.f1, "g_327.f1", print_hash_value);
    transparent_crc(g_327.f2, "g_327.f2", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_396.f1, "g_396.f1", print_hash_value);
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_407.f0, "g_407.f0", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_444.f0, "g_444.f0", print_hash_value);
    transparent_crc(g_444.f1, "g_444.f1", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_491.f1, "g_491.f1", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_493.f1, "g_493.f1", print_hash_value);
    transparent_crc(g_493.f2, "g_493.f2", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_506.f0, "g_506.f0", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_594.f0, "g_594.f0", print_hash_value);
    transparent_crc(g_594.f2, "g_594.f2", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_606.f0, "g_606.f0", print_hash_value);
    transparent_crc(g_606.f1, "g_606.f1", print_hash_value);
    transparent_crc(g_634.f0, "g_634.f0", print_hash_value);
    transparent_crc(g_634.f2, "g_634.f2", print_hash_value);
    transparent_crc(g_640.f0, "g_640.f0", print_hash_value);
    transparent_crc(g_640.f1, "g_640.f1", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_764.f0, "g_764.f0", print_hash_value);
    transparent_crc(g_764.f1, "g_764.f1", print_hash_value);
    transparent_crc(g_772.f0, "g_772.f0", print_hash_value);
    transparent_crc(g_772.f2, "g_772.f2", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_875.f0, "g_875.f0", print_hash_value);
    transparent_crc(g_875.f1, "g_875.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
