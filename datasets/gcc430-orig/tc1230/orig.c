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
   int f0;
   int f1;
   unsigned char f2;
   unsigned f3;
};


static unsigned g_6 = 0UL;
static int g_14 = 1L;
static int *g_13 = &g_14;
static struct S0 g_33 = {-1L,0xB26C4F32L,0x7BL,1UL};
static short g_58 = (-9L);
static char g_70 = (-10L);
static unsigned short g_81 = 0xB66FL;
static int g_130 = 0L;
static char *g_167 = &g_70;
static char **g_166 = &g_167;
static char g_196 = (-8L);
static unsigned g_199 = 0x4812A85FL;
static unsigned char g_225 = 0xD5L;
static int g_309 = 1L;
static unsigned char g_350 = 0xC8L;
static int g_397 = 0x115ADDF4L;
static int g_413 = 0x450C6EEAL;
static short g_437 = 0L;
static unsigned g_445 = 4294967295UL;
static unsigned g_539 = 0xB9AC1F89L;
static unsigned char g_569 = 0xB1L;
static short g_660 = 0x5139L;
static unsigned g_663 = 2UL;
static int g_674 = 0xB32D8E3EL;
static short g_811 = 8L;
static short g_936 = 0xCD70L;
static unsigned g_939 = 4294967295UL;
static short g_980 = 0L;
static unsigned char g_984 = 0x0FL;
static int g_1005 = 1L;
static unsigned char g_1197 = 0xBEL;
static unsigned char g_1202 = 8UL;
static int g_1220 = 1L;
static struct S0 g_1228 = {0x7CEC9176L,0x399F3969L,0UL,0x1C98D922L};
static unsigned g_1450 = 4294967295UL;
static unsigned char g_1622 = 3UL;
static unsigned char g_1738 = 0x08L;
static int g_1789 = (-1L);
static int *g_1807 = (void*)0;
static int **g_1824 = (void*)0;
static int ***g_1823 = &g_1824;
static short g_1930 = 1L;
static unsigned char g_1950 = 2UL;
static unsigned short *g_2019 = (void*)0;
static unsigned short **g_2018 = &g_2019;
static unsigned short **g_2022 = &g_2019;
static unsigned **g_2059 = (void*)0;
static unsigned short g_2068 = 0xD511L;
static struct S0 *g_2099 = &g_33;
static unsigned short g_2103 = 0UL;
static unsigned g_2385 = 9UL;
static unsigned short g_2516 = 0x1C7CL;
static unsigned char g_2682 = 0xD4L;
static char g_2791 = (-6L);
static int g_2803 = 3L;
static unsigned char g_2839 = 252UL;
static unsigned char g_2926 = 0xA4L;
static int g_2988 = (-3L);
static short g_3272 = 0L;
static unsigned char g_3277 = 0x09L;
static unsigned g_3422 = 0UL;
static char g_3539 = (-1L);
static unsigned short g_3879 = 1UL;



static unsigned func_1(void);
static int * func_2(short p_3, struct S0 p_4, int * p_5);
static struct S0 func_7(int * p_8, short p_9);
static int * func_10(int * p_11, int * p_12);
static char func_20(short p_21, short p_22, int p_23);
static short func_26(int * p_27, unsigned p_28, struct S0 p_29);
static struct S0 func_30(unsigned p_31);
static int func_39(int * p_40, int * p_41, short p_42, unsigned p_43);
static int * func_44(unsigned p_45, int * p_46, char p_47, unsigned p_48);
static int * func_49(struct S0 p_50);
static unsigned func_1(void)
{
    unsigned char l_3592 = 0x7BL;
    int *l_3892 = (void*)0;
    int **l_4075 = &l_3892;
    (*l_4075) = func_2(g_6, ((*g_2099) = func_7(func_10(g_13, &g_14), l_3592)), l_3892);
    return l_3592;
}







static int * func_2(short p_3, struct S0 p_4, int * p_5)
{
    int *l_3893 = &g_674;
    int *l_3894 = (void*)0;
    int *l_3895 = &g_674;
    int *l_3896 = (void*)0;
    int *l_3897 = &g_413;
    int *l_3898 = &g_1005;
    int *l_3899 = &g_1220;
    int *l_3900 = (void*)0;
    int *l_3901 = &g_413;
    int *l_3902 = (void*)0;
    int l_3903 = 0x1830DD69L;
    int *l_3904 = (void*)0;
    int *l_3905 = &g_1220;
    int *l_3906 = &g_33.f1;
    int *l_3907 = &g_130;
    int *l_3908 = &l_3903;
    int *l_3909 = (void*)0;
    int l_3910 = 0x66C75A6EL;
    int *l_3911 = &l_3910;
    int *l_3912 = &l_3903;
    int *l_3913 = &l_3903;
    int *l_3914 = &g_130;
    int *l_3915 = &l_3903;
    int l_3916 = 0x77E01F40L;
    int *l_3917 = &g_1005;
    int l_3918 = 0xDFC8D049L;
    int *l_3919 = &g_33.f1;
    int *l_3920 = &g_33.f0;
    int *l_3921 = (void*)0;
    int *l_3922 = (void*)0;
    int *l_3923 = (void*)0;
    int *l_3924 = &g_397;
    int *l_3925 = &g_33.f1;
    int *l_3926 = &l_3918;
    int *l_3927 = &g_1005;
    int *l_3928 = &g_1220;
    int *l_3929 = &g_674;
    int *l_3930 = &g_1005;
    int *l_3931 = &g_33.f0;
    int *l_3932 = (void*)0;
    int *l_3933 = (void*)0;
    int *l_3934 = &l_3916;
    int *l_3935 = &g_397;
    int *l_3936 = &l_3918;
    int *l_3937 = (void*)0;
    int *l_3938 = (void*)0;
    int *l_3939 = &g_14;
    int l_3940 = (-7L);
    int l_3941 = (-10L);
    int *l_3942 = &g_397;
    int *l_3943 = (void*)0;
    int *l_3944 = &l_3916;
    int *l_3945 = &g_397;
    int *l_3946 = &l_3941;
    int *l_3947 = &l_3910;
    int l_3948 = 1L;
    int *l_3949 = &l_3916;
    int *l_3950 = &l_3916;
    int *l_3951 = &g_130;
    int *l_3952 = &l_3940;
    int *l_3953 = &g_1005;
    int *l_3954 = (void*)0;
    int *l_3955 = &l_3910;
    int *l_3956 = (void*)0;
    int l_3957 = 0x6BA0550DL;
    int l_3958 = 0x37A286B0L;
    int l_3959 = 0xB59CE8AAL;
    int *l_3960 = &l_3941;
    int *l_3961 = &g_1228.f0;
    int *l_3962 = &l_3948;
    int *l_3963 = &l_3910;
    int *l_3964 = &g_14;
    int *l_3965 = &l_3948;
    int *l_3966 = &l_3959;
    int *l_3967 = &g_1220;
    int *l_3968 = &g_1220;
    int *l_3969 = (void*)0;
    int l_3970 = 0xA9177A18L;
    int *l_3971 = &l_3957;
    int *l_3972 = &g_14;
    int *l_3973 = &l_3941;
    int *l_3974 = &l_3958;
    int l_3975 = 0x9D3065BAL;
    int *l_3976 = (void*)0;
    int *l_3977 = &l_3958;
    int l_3978 = (-5L);
    int *l_3979 = (void*)0;
    int *l_3980 = &l_3957;
    int *l_3981 = &g_413;
    int *l_3982 = &g_397;
    int *l_3983 = &g_413;
    int *l_3984 = (void*)0;
    int *l_3985 = (void*)0;
    int *l_3986 = &l_3958;
    int *l_3987 = &g_1228.f0;
    int *l_3988 = &l_3910;
    int *l_3989 = &l_3948;
    int *l_3990 = &g_130;
    int *l_3991 = &l_3959;
    int *l_3992 = (void*)0;
    int *l_3993 = (void*)0;
    int *l_3994 = &l_3978;
    int l_3995 = 0x62EBAED6L;
    int *l_3996 = &g_674;
    int l_3997 = 4L;
    int *l_3998 = &l_3995;
    int *l_3999 = &l_3916;
    int l_4000 = (-1L);
    int *l_4001 = &l_4000;
    int *l_4002 = &g_1005;
    int *l_4003 = &l_3978;
    int *l_4004 = &g_33.f0;
    int l_4005 = (-1L);
    int *l_4006 = (void*)0;
    int *l_4007 = (void*)0;
    int *l_4008 = (void*)0;
    int *l_4009 = &l_3918;
    int *l_4010 = &l_3958;
    int *l_4011 = &l_3948;
    int *l_4012 = &g_14;
    int *l_4013 = &g_33.f0;
    int *l_4014 = &l_4000;
    int *l_4015 = &l_3978;
    int *l_4016 = &g_14;
    int *l_4017 = &g_1005;
    int *l_4018 = (void*)0;
    int *l_4019 = &g_1005;
    int *l_4020 = &l_3997;
    int *l_4021 = &l_3995;
    int *l_4022 = &l_3959;
    int *l_4023 = &g_33.f0;
    int *l_4024 = &g_33.f0;
    int *l_4025 = &g_1220;
    int *l_4026 = &l_3918;
    int *l_4027 = &g_33.f1;
    int *l_4028 = &g_1220;
    int *l_4029 = (void*)0;
    int *l_4030 = (void*)0;
    int *l_4031 = &l_4000;
    int *l_4032 = &l_3918;
    int *l_4033 = &l_3975;
    int *l_4034 = &l_3995;
    int *l_4035 = (void*)0;
    int *l_4036 = &g_1005;
    int *l_4037 = &l_3948;
    int *l_4038 = &l_4000;
    int l_4039 = (-10L);
    int *l_4040 = &l_3978;
    int *l_4041 = &g_14;
    int l_4042 = 0xBF4A175EL;
    int l_4043 = 0x7349C0D2L;
    short l_4044 = (-1L);
    int *l_4045 = &l_3940;
    int *l_4046 = (void*)0;
    int *l_4047 = &g_1228.f0;
    int l_4048 = 0x44544B3DL;
    int *l_4049 = (void*)0;
    int *l_4050 = (void*)0;
    int *l_4051 = &l_4048;
    int *l_4052 = &l_3958;
    int l_4053 = 0x9CA3A00CL;
    short l_4054 = 1L;
    int *l_4055 = &g_33.f0;
    int *l_4056 = &g_1005;
    int *l_4057 = &g_14;
    int *l_4058 = &l_3903;
    int *l_4059 = &l_3916;
    int l_4060 = 0x6D4F722EL;
    int *l_4061 = &g_33.f0;
    int l_4062 = 0x32550C0FL;
    int *l_4063 = &l_3970;
    int *l_4064 = &l_3978;
    int *l_4065 = &l_3978;
    int *l_4066 = &l_3997;
    int *l_4067 = (void*)0;
    int *l_4068 = &l_3940;
    int *l_4069 = (void*)0;
    int *l_4070 = (void*)0;
    int *l_4071 = &l_3959;
    unsigned l_4072 = 1UL;
    l_4072++;
    p_5 = p_5;
    return p_5;


}







static struct S0 func_7(int * p_8, short p_9)
{
    unsigned l_3593 = 0x850120AEL;
    int *l_3594 = &g_1228.f0;
    char **l_3595 = &g_167;
    short l_3599 = 0L;
    int l_3706 = (-1L);
    int l_3736 = 0x852DA601L;
    int l_3763 = 0x37C1D974L;
    unsigned char l_3767 = 0xC3L;
    int l_3836 = 0xBC85F4DBL;
    int l_3846 = (-1L);
    char l_3882 = 2L;
    struct S0 l_3891 = {0xF956DE89L,0x6311D817L,0xD7L,4294967295UL};
    if (((*l_3594) &= ((*g_13) = l_3593)))
    {
        short l_3596 = 0x2937L;
        int l_3609 = 9L;
        int l_3623 = (-3L);
        int l_3648 = 1L;
        int l_3741 = 0x3C7522D6L;
        l_3596 = ((&g_167 == l_3595) | p_9);
        (*g_13) = l_3596;
        (*l_3594) ^= p_9;
        for (g_2103 = (-4); (g_2103 == 3); g_2103++)
        {
            char l_3710 = 0L;
            int l_3746 = 0xAE05EF01L;
            int l_3786 = 1L;
            int l_3799 = 0x63F8B44EL;
            int l_3812 = (-1L);
            int l_3877 = 0xD7B12E4DL;
        }
    }
    else
    {
        int *l_3888 = &g_14;
        int **l_3889 = &g_13;
        unsigned *l_3890 = &g_663;
        (*g_13) ^= ((safe_mod_func_uint16_t_u_u((((p_9 > 0x06F3D5DCL) , 0L) != 0x793BL), 0xC1DDL)) & g_3422);
        (*l_3594) &= (*g_13);
    }
    return l_3891;
}







static int * func_10(int * p_11, int * p_12)
{
    short l_32 = 0xFFAAL;
    int *l_3542 = (void*)0;
    unsigned *l_3547 = (void*)0;
    unsigned **l_3546 = &l_3547;
    struct S0 l_3550 = {0x4E6F949EL,0x65C89613L,246UL,0xCF95A8AFL};
    char l_3561 = 1L;
    short *l_3566 = &g_1930;
    short *l_3573 = &g_980;
    int *l_3576 = &g_397;
    struct S0 **l_3585 = &g_2099;
    unsigned char *l_3590 = (void*)0;
    unsigned char *l_3591 = &g_1738;
    for (g_14 = (-16); (g_14 < 25); g_14++)
    {
        unsigned short l_17 = 0x93D0L;
        unsigned short *l_2102 = &g_2103;
        int l_3553 = (-1L);
        int *l_3562 = (void*)0;
        int *l_3563 = &l_3550.f0;
        ++l_17;
    }
    (*l_3576) ^= (safe_sub_func_int8_t_s_s((((*l_3566) = g_1197) && ((safe_mul_func_uint8_t_u_u(g_2839, ((safe_rshift_func_int16_t_s_u(((*l_3566) = 0L), (safe_rshift_func_int8_t_s_u(((*g_167) = (*g_167)), 1)))) != (safe_mul_func_int8_t_s_s(l_3550.f1, g_539))))) | (*g_13))), l_3550.f0));
    g_1005 |= (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x26L, (*l_3576))), (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 == l_3585), 1)), (((((safe_sub_func_int32_t_s_s((((**l_3585) , (*l_3576)) <= ((safe_lshift_func_uint8_t_u_s(g_6, (*l_3576))) || ((*l_3591) |= g_70))), (*g_13))) , 0x3604L) && (*l_3576)) , (*l_3576)) <= (*l_3576))))));
    return l_3547;


}







static char func_20(short p_21, short p_22, int p_23)
{
    int **l_2108 = &g_13;
    int *l_2109 = &g_309;
    unsigned *l_2117 = (void*)0;
    unsigned *l_2118 = (void*)0;
    unsigned *l_2119 = &g_33.f3;
    struct S0 l_2120 = {0L,0x3F594A5AL,0xBAL,0UL};
    short l_2121 = 0L;
    unsigned short l_2124 = 0xCA77L;
    int l_2143 = (-6L);
    int l_2152 = 0x4055DBA4L;
    int l_2156 = 0xE7A18351L;
    int l_2177 = 6L;
    int l_2178 = 9L;
    int l_2191 = 0x40D7F397L;
    int l_2259 = 0x90CBC6C1L;
    unsigned short l_2261 = 0x9214L;
    struct S0 *l_2272 = &g_33;
    unsigned char l_2293 = 0UL;
    int l_2316 = 1L;
    short l_2394 = 0x5CB7L;
    int l_2497 = (-5L);
    unsigned l_2521 = 7UL;
    unsigned l_2857 = 0UL;
    unsigned l_2858 = 0xDE80B54AL;
    int l_2862 = 0x3CFC83F2L;
    int l_2863 = 1L;
    unsigned char l_2870 = 0x7CL;
    int *l_2957 = &l_2316;
    char l_2976 = 0xFCL;
    short l_2989 = (-1L);
    unsigned short **l_3021 = &g_2019;
    unsigned char l_3526 = 0xBEL;
    struct S0 **l_3530 = &g_2099;
    if ((l_2121 &= ((safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(0L, p_21)) | 4294967286UL) || l_2120.f2), g_14)) , p_21)))
    {
        int l_2125 = 0L;
        int *l_2126 = &g_413;
        int *l_2127 = &g_130;
        int *l_2128 = (void*)0;
        int *l_2129 = &g_1220;
        int *l_2130 = &g_33.f1;
        int *l_2131 = &g_397;
        int *l_2132 = &g_1220;
        int *l_2133 = (void*)0;
        char l_2134 = 1L;
        int *l_2135 = &l_2120.f1;
        int *l_2136 = (void*)0;
        int *l_2137 = &g_397;
        int *l_2138 = (void*)0;
        int *l_2139 = &g_33.f1;
        int *l_2140 = &g_33.f1;
        int *l_2141 = &g_1005;
        int *l_2142 = &g_1228.f0;
        int *l_2144 = &g_1228.f1;
        int *l_2145 = &l_2143;
        int *l_2146 = &g_674;
        int *l_2147 = &l_2125;
        int *l_2148 = &g_1005;
        int *l_2149 = &g_1228.f1;
        int *l_2150 = &l_2120.f0;
        int *l_2151 = &g_674;
        int *l_2153 = &g_33.f1;
        int *l_2154 = &g_130;
        int *l_2155 = &l_2125;
        int *l_2157 = &g_1220;
        int *l_2158 = (void*)0;
        int *l_2159 = (void*)0;
        int *l_2160 = &g_397;
        int *l_2161 = &g_33.f1;
        int *l_2162 = (void*)0;
        int *l_2163 = &l_2152;
        int *l_2164 = &g_674;
        int *l_2165 = &l_2156;
        int *l_2166 = (void*)0;
        int *l_2167 = (void*)0;
        int *l_2168 = &g_33.f1;
        int *l_2169 = &g_397;
        int *l_2170 = (void*)0;
        int *l_2171 = &l_2152;
        int *l_2172 = &g_397;
        int *l_2173 = &l_2120.f1;
        int *l_2174 = &l_2120.f0;
        int *l_2175 = &g_1005;
        int *l_2176 = &g_1228.f1;
        int *l_2179 = &l_2120.f0;
        int *l_2180 = (void*)0;
        int *l_2181 = &g_413;
        int *l_2182 = &l_2178;
        int *l_2183 = &l_2156;
        int *l_2184 = &l_2120.f1;
        int *l_2185 = &l_2178;
        int *l_2186 = &g_130;
        int *l_2187 = &g_130;
        int *l_2188 = &l_2178;
        int *l_2189 = &g_33.f0;
        int *l_2190 = &l_2120.f1;
        int *l_2192 = &l_2120.f0;
        int *l_2193 = &l_2156;
        int *l_2194 = &g_1228.f1;
        int *l_2195 = &l_2120.f0;
        int l_2196 = 0xCEBE24D1L;
        int *l_2197 = &g_33.f1;
        int *l_2198 = &g_397;
        int *l_2199 = &l_2156;
        int *l_2200 = &l_2120.f1;
        int *l_2201 = &g_1228.f1;
        int *l_2202 = &l_2177;
        int *l_2203 = &g_1228.f1;
        int *l_2204 = &l_2120.f0;
        int *l_2205 = (void*)0;
        int *l_2206 = &l_2152;
        int *l_2207 = (void*)0;
        int *l_2208 = &g_1005;
        int *l_2209 = &l_2152;
        int *l_2210 = &g_413;
        int *l_2211 = &g_397;
        int *l_2212 = &g_674;
        int *l_2213 = &l_2120.f0;
        int *l_2214 = &g_33.f1;
        int *l_2215 = (void*)0;
        int *l_2216 = &l_2143;
        int *l_2217 = &g_33.f1;
        int *l_2218 = &g_33.f1;
        int *l_2219 = (void*)0;
        int *l_2220 = (void*)0;
        int *l_2221 = (void*)0;
        int *l_2222 = &g_130;
        int *l_2223 = &g_1005;
        int *l_2224 = (void*)0;
        int *l_2225 = &l_2178;
        int l_2226 = 0L;
        int *l_2227 = (void*)0;
        int *l_2228 = &g_1228.f0;
        int *l_2229 = &g_1228.f0;
        int *l_2230 = &l_2156;
        int *l_2231 = &l_2120.f0;
        int *l_2232 = &l_2120.f0;
        int l_2233 = 0L;
        int *l_2234 = (void*)0;
        int *l_2235 = (void*)0;
        int *l_2236 = &l_2156;
        int *l_2237 = &g_1220;
        int *l_2238 = &l_2156;
        int l_2239 = (-2L);
        int *l_2240 = &g_674;
        int l_2241 = 1L;
        int *l_2242 = &l_2125;
        int *l_2243 = &g_33.f1;
        int *l_2244 = &g_33.f0;
        int *l_2245 = &g_397;
        int *l_2246 = &l_2156;
        int *l_2247 = (void*)0;
        int *l_2248 = &l_2125;
        int *l_2249 = &g_33.f0;
        int *l_2250 = (void*)0;
        int *l_2251 = &g_1228.f0;
        int *l_2252 = &l_2191;
        int *l_2253 = &l_2143;
        int *l_2254 = &l_2241;
        int *l_2255 = (void*)0;
        int *l_2256 = &g_674;
        int *l_2257 = &g_33.f1;
        int *l_2258 = &g_33.f0;
        int *l_2260 = &l_2156;
        struct S0 *l_2390 = &l_2120;
        short l_2393 = 0L;
        (*l_2126) &= (safe_add_func_uint16_t_u_u(p_21, ((*g_167) > (l_2124 || (g_980 = l_2125)))));
        ++l_2261;
        for (g_33.f3 = (-8); (g_33.f3 != 39); g_33.f3++)
        {
            (*l_2260) &= l_2120.f1;
        }
        for (g_984 = (-23); (g_984 == 16); ++g_984)
        {
            unsigned short l_2268 = 0x77A9L;
            int l_2283 = 0xFE9D6218L;
            int l_2284 = 0x029A1952L;
            int l_2290 = 3L;
            int l_2292 = 1L;
            char l_2395 = 0x3BL;
            int l_2400 = 0x8F3B3F2AL;
            int l_2402 = (-1L);
            int l_2453 = 0xF979BA30L;
            if (l_2268)
                break;
            if (p_23)
            {
                struct S0 *l_2270 = &g_1228;
                int *l_2276 = &l_2239;
                int l_2315 = (-4L);
                unsigned l_2333 = 0x0A6D6866L;
                if (p_22)
                {
                    unsigned short l_2273 = 65532UL;
                    int l_2281 = 9L;
                    int l_2282 = 0xE4934969L;
                    int l_2285 = 0x24824485L;
                    int l_2286 = 0x8221298BL;
                    int l_2287 = 0x833F1BB5L;
                    int l_2289 = 0x7FA8FAFEL;
                    if (g_445)
                    {
                        char l_2269 = 0x47L;
                        (*l_2137) = l_2269;
                    }
                    else
                    {
                        struct S0 **l_2271 = &l_2270;
                        l_2272 = ((*l_2271) = l_2270);

                        ;
                        l_2273--;
                    }
                    (*l_2108) = l_2276;

                    ;
                    if ((*g_13))
                    {
                        unsigned short l_2277 = 65535UL;
                        int *l_2278 = &g_33.f0;
                        (*l_2108) = (*l_2108);
                        (*l_2163) = l_2277;
                        l_2278 = l_2276;

                        ;
                    }
                    else
                    {
                        (*l_2270) = (*g_2099);
                    }
                    for (g_1950 = 0; (g_1950 >= 10); ++g_1950)
                    {
                        char l_2288 = 4L;
                        int l_2291 = (-1L);
                        ++l_2293;
                    }
                }
                else
                {
                    unsigned l_2296 = 0x74597908L;
                    --l_2296;
                    return p_21;


                }

                ;
                for (g_1950 = 17; (g_1950 > 36); g_1950++)
                {
                    struct S0 l_2305 = {0x827661B7L,0x24681E8CL,0xB6L,0x03AAA22CL};
                    unsigned char *l_2310 = &g_33.f2;
                    int l_2330 = (-1L);
                    int ***l_2331 = (void*)0;
                }
                if (p_21)
                    break;
                (*l_2157) |= (*g_13);
            }
            else
            {
                char l_2335 = 5L;
                int l_2336 = 0x03B68F56L;
                int l_2337 = 0xB33C62C8L;
                int *l_2338 = &g_1228.f1;
                int *l_2339 = (void*)0;
                int *l_2340 = (void*)0;
                int *l_2341 = &l_2226;
                int *l_2342 = &g_130;
                int *l_2343 = &l_2125;
                int *l_2344 = &l_2337;
                int *l_2345 = &g_1228.f1;
                int *l_2346 = &l_2290;
                int *l_2347 = &l_2290;
                int *l_2348 = (void*)0;
                int *l_2349 = &l_2336;
                int *l_2350 = &g_1228.f1;
                int *l_2351 = &l_2178;
                int *l_2352 = &l_2283;
                int *l_2353 = (void*)0;
                int *l_2354 = &l_2196;
                int *l_2355 = &l_2196;
                int *l_2356 = &g_1005;
                int *l_2357 = &g_1228.f0;
                int *l_2358 = &g_33.f1;
                int *l_2359 = &g_1228.f1;
                int *l_2360 = (void*)0;
                int *l_2361 = &l_2120.f0;
                int *l_2362 = &l_2259;
                int *l_2363 = (void*)0;
                int *l_2364 = &l_2120.f1;
                int *l_2365 = &g_1220;
                int *l_2366 = &l_2226;
                int *l_2367 = &l_2143;
                int *l_2368 = (void*)0;
                int *l_2369 = &l_2125;
                int *l_2370 = &g_33.f1;
                int *l_2371 = &g_1220;
                int *l_2372 = &l_2241;
                int *l_2373 = &l_2241;
                int *l_2374 = &l_2283;
                int *l_2375 = &l_2316;
                int *l_2376 = &g_413;
                int *l_2377 = (void*)0;
                int *l_2378 = &g_1228.f1;
                int *l_2379 = &l_2191;
                int *l_2380 = &l_2125;
                int *l_2381 = &g_130;
                int *l_2382 = &l_2191;
                int *l_2383 = &g_33.f1;
                int *l_2384 = (void*)0;
                int l_2421 = 0x8F0F13F7L;
                int l_2425 = 0x285D95ADL;
                int l_2440 = 0L;
                int l_2460 = 1L;
                int l_2467 = 0x0AAEB085L;
                g_2385++;
                for (g_1789 = 18; (g_1789 >= 7); g_1789 = safe_sub_func_int16_t_s_s(g_1789, 1))
                {
                    struct S0 **l_2391 = (void*)0;
                    struct S0 **l_2392 = &l_2272;
                    int l_2396 = 0x1E0382ADL;
                    char l_2397 = 0x31L;
                    int l_2398 = 0xA0B7675AL;
                    int l_2399 = 1L;
                    int l_2401 = 0L;
                    int *l_2403 = &g_397;
                    int *l_2404 = &l_2400;
                    int *l_2405 = (void*)0;
                    int *l_2406 = &l_2156;
                    int *l_2407 = &l_2290;
                    int *l_2408 = &l_2233;
                    int *l_2409 = &l_2233;
                    int *l_2410 = &g_1228.f1;
                    int *l_2411 = &l_2178;
                    int *l_2412 = &l_2120.f1;
                    int *l_2413 = &l_2143;
                    int *l_2414 = &l_2120.f0;
                    int *l_2415 = &l_2399;
                    int *l_2416 = &l_2239;
                    int *l_2417 = (void*)0;
                    int l_2418 = 0L;
                    int *l_2419 = &l_2241;
                    int *l_2420 = &l_2239;
                    int *l_2422 = (void*)0;
                    int *l_2423 = &g_33.f0;
                    int *l_2424 = &l_2418;
                    int *l_2426 = &l_2421;
                    int *l_2427 = &l_2292;
                    int *l_2428 = &g_674;
                    int *l_2429 = (void*)0;
                    int *l_2430 = &l_2290;
                    int *l_2431 = (void*)0;
                    int *l_2432 = &g_130;
                    int *l_2433 = &l_2259;
                    int *l_2434 = &g_1228.f0;
                    int *l_2435 = &l_2191;
                    int *l_2436 = &l_2191;
                    int *l_2437 = &l_2337;
                    int *l_2438 = &g_1228.f1;
                    int *l_2439 = (void*)0;
                    int *l_2441 = &g_674;
                    int *l_2442 = &l_2125;
                    int *l_2443 = &l_2233;
                    int *l_2444 = (void*)0;
                    int *l_2445 = &l_2120.f0;
                    int *l_2446 = &l_2120.f1;
                    int *l_2447 = &g_130;
                    int *l_2448 = &g_33.f0;
                    int l_2449 = 0x19E49E96L;
                    int *l_2450 = &l_2316;
                    int *l_2451 = &g_33.f1;
                    int *l_2452 = (void*)0;
                    int *l_2454 = &l_2152;
                    int *l_2455 = &g_674;
                    int *l_2456 = (void*)0;
                    int *l_2457 = &g_33.f0;
                    int *l_2458 = &l_2290;
                    int *l_2459 = &l_2396;
                    int *l_2461 = &l_2196;
                    int *l_2462 = &l_2241;
                    int *l_2463 = &l_2241;
                    int *l_2464 = (void*)0;
                    int *l_2465 = &l_2418;
                    int *l_2466 = &l_2120.f1;
                    int *l_2468 = &l_2120.f1;
                    int *l_2469 = &l_2156;
                    int *l_2470 = &g_1220;
                    int *l_2471 = &l_2120.f1;
                    int *l_2472 = &l_2399;
                    int *l_2473 = (void*)0;
                    int *l_2474 = (void*)0;
                    int *l_2475 = (void*)0;
                    int *l_2476 = &l_2125;
                    int *l_2477 = &l_2191;
                    int *l_2478 = &l_2283;
                    int l_2479 = 0x23B324BFL;
                    int *l_2480 = &l_2125;
                    int *l_2481 = &l_2402;
                    int *l_2482 = &l_2283;
                    int *l_2483 = &l_2143;
                    int *l_2484 = &l_2120.f1;
                    int *l_2485 = &l_2398;
                    int l_2486 = 3L;
                    int *l_2487 = &l_2400;
                    int *l_2488 = &l_2152;
                    int *l_2489 = &l_2449;
                    int *l_2490 = &l_2143;
                    int *l_2491 = (void*)0;
                    int *l_2492 = (void*)0;
                    int *l_2493 = &l_2284;
                    int *l_2494 = &g_397;
                    int *l_2495 = (void*)0;
                    int *l_2496 = &g_1220;
                    int *l_2498 = &l_2292;
                    int *l_2499 = (void*)0;
                    int *l_2500 = &l_2226;
                    int *l_2501 = &l_2239;
                    int *l_2502 = &l_2418;
                    int *l_2503 = &g_33.f1;
                    int *l_2504 = &l_2400;
                    int *l_2505 = &g_1228.f0;
                    int *l_2506 = (void*)0;
                    int *l_2507 = (void*)0;
                    int *l_2508 = &l_2191;
                    int *l_2509 = &l_2400;
                    int *l_2510 = &g_130;
                    int *l_2511 = &l_2152;
                    int *l_2512 = &g_33.f1;
                    int *l_2513 = &l_2120.f0;
                    int *l_2514 = &l_2120.f0;
                    int l_2515 = 0x9A3CBECCL;
                    (*l_2392) = l_2390;

                    ;
                    ++g_2516;
                    (*l_2126) = 0x150CF637L;
                    (*l_2357) ^= (+p_22);
                }
            }
            (*l_2200) = (253UL & ((*g_167) = 0x2FL));
            (*l_2272) = func_30(l_2268);
        }

        ;
        ;
    }
    else
    {
        unsigned char l_2524 = 0xA2L;
        int l_2537 = 0xA59E27A9L;
        int l_2558 = 0xE1D261E9L;
        int l_2563 = 9L;
        int l_2582 = (-1L);
        int l_2625 = 0L;
        int l_2654 = 0x476A8C0DL;
        int l_2667 = 0x408B9CCDL;
        char ***l_2842 = &g_166;
        struct S0 l_2856 = {0x7797C2E3L,0xCA0F54B9L,0x31L,4294967288UL};
        int *l_2864 = (void*)0;
        unsigned char l_2886 = 0x38L;
        int l_3281 = (-3L);
        int *l_3441 = &g_1005;
        int *l_3442 = &g_1005;
        int *l_3443 = &l_2667;
        int *l_3444 = &l_2152;
        int *l_3445 = &l_2177;
        int *l_3446 = &l_2856.f0;
        int *l_3447 = &g_413;
        int *l_3448 = &l_2120.f1;
        int *l_3449 = &g_1228.f0;
        int *l_3450 = &g_397;
        int *l_3451 = &l_2152;
        int *l_3452 = &l_2143;
        int *l_3453 = &g_674;
        int *l_3454 = &l_2178;
        int *l_3455 = &g_1228.f0;
        int *l_3456 = &l_2259;
        int *l_3457 = &l_2667;
        int *l_3458 = &l_2856.f0;
        int *l_3459 = &g_674;
        int *l_3460 = &l_2120.f1;
        int *l_3461 = &l_2625;
        int *l_3462 = &l_2856.f0;
        int *l_3463 = &g_33.f0;
        int *l_3464 = (void*)0;
        int *l_3465 = &g_1005;
        int *l_3466 = &l_2654;
        int *l_3467 = &l_2856.f1;
        int *l_3468 = &l_2120.f1;
        int *l_3469 = &g_33.f1;
        int *l_3470 = &l_2856.f1;
        int *l_3471 = &g_1005;
        int *l_3472 = &g_33.f1;
        int *l_3473 = &l_2625;
        int *l_3474 = &g_130;
        int *l_3475 = (void*)0;
        int *l_3476 = &g_397;
        int *l_3477 = &g_1005;
        int *l_3478 = (void*)0;
        int *l_3479 = (void*)0;
        int *l_3480 = &l_2178;
        int *l_3481 = &l_2856.f1;
        char l_3482 = 0x7FL;
        int *l_3483 = &g_1228.f1;
        int *l_3484 = (void*)0;
        int *l_3485 = &l_2856.f0;
        int *l_3486 = &g_674;
        int *l_3487 = (void*)0;
        int *l_3488 = &l_2316;
        int *l_3489 = &g_1228.f1;
        int *l_3490 = &l_2667;
        int *l_3491 = &l_2856.f0;
        int *l_3492 = &l_2625;
        int *l_3493 = (void*)0;
        int *l_3494 = &l_2178;
        int *l_3495 = &l_2120.f0;
        int *l_3496 = &l_2856.f0;
        int *l_3497 = (void*)0;
        int *l_3498 = (void*)0;
        int *l_3499 = &g_130;
        int *l_3500 = &g_413;
        int *l_3501 = &g_674;
        int *l_3502 = &g_33.f0;
        int *l_3503 = (void*)0;
        int *l_3504 = &l_2316;
        int *l_3505 = &l_2177;
        int *l_3506 = &l_2120.f1;
        int *l_3507 = &l_2667;
        int *l_3508 = (void*)0;
        int *l_3509 = &l_2143;
        int *l_3510 = &g_674;
        int *l_3511 = (void*)0;
        int *l_3512 = &l_2667;
        int *l_3513 = &g_33.f0;
        int *l_3514 = &l_2654;
        int *l_3515 = &g_33.f0;
        int *l_3516 = &g_674;
        int *l_3517 = &g_33.f0;
        int *l_3518 = &l_2856.f0;
        int *l_3519 = &l_2654;
        int *l_3520 = (void*)0;
        int *l_3521 = &l_2191;
        int *l_3522 = &g_1220;
        int *l_3523 = &l_2152;
        int *l_3524 = &g_130;
        int *l_3525 = &g_674;
        int l_3529 = 0x5C0BB6ACL;
        unsigned *l_3531 = (void*)0;
        unsigned *l_3532 = &l_2857;
        struct S0 l_3540 = {0x2A812DC3L,0x98A5F9ECL,0x7AL,0x7A802653L};
        if (((l_2537 ^= ((safe_sub_func_uint16_t_u_u((l_2521 && (((safe_div_func_int8_t_s_s((*g_167), (g_196 = l_2524))) , p_22) > 0UL)), ((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_23, g_199)), (safe_add_func_uint32_t_u_u(p_23, ((*l_2119)++))))), (safe_rshift_func_uint8_t_u_s(p_21, 0)))) || (*g_167)))) & (*g_167))) < 65535UL))
        {
            int l_2626 = 7L;
            int l_2653 = 0xB6555701L;
            for (l_2177 = 0; (l_2177 <= (-5)); l_2177 = safe_sub_func_int16_t_s_s(l_2177, 6))
            {
                int *l_2540 = &l_2497;
                int *l_2541 = (void*)0;
                int *l_2542 = &g_1005;
                int *l_2543 = (void*)0;
                int *l_2544 = &l_2152;
                int *l_2545 = &l_2178;
                int *l_2546 = &g_1005;
                int *l_2547 = &g_33.f0;
                int *l_2548 = &g_1228.f0;
                int *l_2549 = &l_2497;
                int *l_2550 = &g_1220;
                int *l_2551 = (void*)0;
                int *l_2552 = &g_130;
                int *l_2553 = &l_2191;
                int *l_2554 = &g_33.f0;
                int l_2555 = 0x9A9B9879L;
                int *l_2556 = &g_413;
                int *l_2557 = &g_130;
                int *l_2559 = &l_2178;
                int *l_2560 = &g_1228.f1;
                int *l_2561 = &g_1005;
                int *l_2562 = &l_2156;
                int *l_2564 = (void*)0;
                int *l_2565 = &g_1228.f0;
                int *l_2566 = &g_1228.f1;
                int *l_2567 = &l_2316;
                int *l_2568 = &g_397;
                int *l_2569 = &g_397;
                int *l_2570 = (void*)0;
                int *l_2571 = &g_33.f1;
                int *l_2572 = &g_1228.f1;
                int *l_2573 = (void*)0;
                int *l_2574 = &g_1228.f0;
                int l_2575 = 1L;
                int *l_2576 = &g_33.f1;
                int *l_2577 = (void*)0;
                int *l_2578 = &l_2555;
                int *l_2579 = (void*)0;
                int *l_2580 = &g_397;
                int *l_2581 = &g_1005;
                int *l_2583 = &g_33.f0;
                int *l_2584 = (void*)0;
                int *l_2585 = &g_1005;
                int *l_2586 = &g_674;
                int *l_2587 = &g_1220;
                int *l_2588 = &g_397;
                int *l_2589 = &l_2555;
                int *l_2590 = (void*)0;
                int *l_2591 = (void*)0;
                int *l_2592 = &l_2497;
                int *l_2593 = &l_2191;
                int *l_2594 = &l_2191;
                int *l_2595 = &l_2497;
                int *l_2596 = (void*)0;
                int *l_2597 = &l_2178;
                int *l_2598 = &g_1220;
                int *l_2599 = &g_130;
                int *l_2600 = &l_2143;
                int *l_2601 = &l_2191;
                int *l_2602 = &g_397;
                int *l_2603 = &g_397;
                int *l_2604 = (void*)0;
                int *l_2605 = &l_2259;
                int *l_2606 = (void*)0;
                int *l_2607 = &g_413;
                int *l_2608 = &g_674;
                int *l_2609 = &g_33.f0;
                int *l_2610 = &l_2563;
                int *l_2611 = &l_2259;
                int *l_2612 = &l_2497;
                int *l_2613 = (void*)0;
                int *l_2614 = &l_2497;
                int *l_2615 = &g_1220;
                int *l_2616 = &g_1005;
                int *l_2617 = &l_2143;
                int *l_2618 = &g_1220;
                int *l_2619 = &g_33.f1;
                int *l_2620 = &g_130;
                int *l_2621 = &g_1005;
                int *l_2622 = &g_33.f1;
                int *l_2623 = &g_1228.f1;
                int *l_2624 = (void*)0;
                int *l_2627 = &l_2143;
                int *l_2628 = &g_397;
                int *l_2629 = &l_2178;
                int *l_2630 = &g_33.f1;
                int *l_2631 = (void*)0;
                int *l_2632 = &l_2156;
                int *l_2633 = &l_2178;
                int *l_2634 = &g_674;
                int *l_2635 = (void*)0;
                int *l_2636 = &l_2563;
                int *l_2637 = &g_674;
                int *l_2638 = &g_1228.f1;
                int *l_2639 = &g_1005;
                int *l_2640 = (void*)0;
                int *l_2641 = &l_2191;
                int *l_2642 = &g_413;
                int *l_2643 = &l_2497;
                int *l_2644 = &g_397;
                int *l_2645 = (void*)0;
                int *l_2646 = &g_1228.f0;
                int *l_2647 = &l_2575;
                int *l_2648 = &g_130;
                int *l_2649 = (void*)0;
                int *l_2650 = (void*)0;
                int *l_2651 = &l_2259;
                int *l_2652 = &g_397;
                int *l_2655 = &l_2575;
                int *l_2656 = &l_2625;
                int *l_2657 = &g_1228.f0;
                int *l_2658 = &l_2558;
                int *l_2659 = (void*)0;
                int *l_2660 = &g_33.f1;
                int *l_2661 = &l_2120.f1;
                int *l_2662 = (void*)0;
                int *l_2663 = &l_2555;
                int *l_2664 = &l_2120.f1;
                int *l_2665 = &g_33.f0;
                int *l_2666 = (void*)0;
                int *l_2668 = &l_2626;
                int *l_2669 = &l_2626;
                int *l_2670 = (void*)0;
                int *l_2671 = &l_2653;
                int *l_2672 = &l_2143;
                int *l_2673 = &g_413;
                int *l_2674 = (void*)0;
                int *l_2675 = &l_2555;
                int *l_2676 = &g_1005;
                int *l_2677 = &g_674;
                int l_2678 = 0x89F38CB0L;
                int *l_2679 = &l_2143;
                int *l_2680 = &l_2120.f0;
                int *l_2681 = &l_2120.f1;
                g_2682--;
                return p_23;
            }
        }
        else
        {
            unsigned l_2704 = 1UL;
            int l_2715 = 0L;
            int l_2739 = (-10L);
            int l_2796 = 0x58821BAEL;
            int l_2810 = 0x96CB223CL;
            char ****l_2843 = &l_2842;
            short *l_2859 = (void*)0;
            short *l_2860 = (void*)0;
            short *l_2861 = (void*)0;
            struct S0 l_2967 = {1L,0x2C94F9D5L,0xB4L,0xD375AE00L};
            int *l_2995 = &l_2739;
            int l_3101 = 0x6071607EL;
            int l_3268 = 0x8AF35C4FL;
            int l_3308 = 0L;
            for (g_811 = 0; (g_811 <= (-6)); g_811 = safe_sub_func_uint32_t_u_u(g_811, 1))
            {
                int l_2687 = 0x1B525243L;
                int *l_2688 = &l_2667;
                int *l_2689 = &l_2120.f0;
                int *l_2690 = &g_33.f1;
                if (l_2687)
                    break;
                (*l_2690) &= ((*l_2689) = ((*l_2688) = p_23));
            }
            for (g_437 = 0; (g_437 >= (-27)); --g_437)
            {
                unsigned l_2693 = 4294967291UL;
                unsigned *l_2711 = (void*)0;
                unsigned short *l_2714 = &l_2261;
                int *l_2716 = (void*)0;
                int *l_2717 = &l_2563;
                int *l_2718 = &g_130;
                int *l_2719 = &l_2654;
                int *l_2720 = &g_130;
                int *l_2721 = &l_2177;
                int *l_2722 = &l_2667;
                int *l_2723 = &g_1228.f1;
                int *l_2724 = &l_2497;
                int *l_2725 = (void*)0;
                int *l_2726 = &l_2654;
                int *l_2727 = &l_2178;
                int *l_2728 = (void*)0;
                int l_2729 = (-6L);
                int *l_2730 = (void*)0;
                int l_2731 = 1L;
                int *l_2732 = &g_33.f1;
                int *l_2733 = (void*)0;
                int *l_2734 = &l_2152;
                int *l_2735 = &l_2654;
                int *l_2736 = &l_2316;
                int *l_2737 = &g_33.f0;
                int *l_2738 = &l_2731;
                int *l_2740 = &g_1228.f1;
                int *l_2741 = (void*)0;
                int *l_2742 = &l_2497;
                int *l_2743 = (void*)0;
                int *l_2744 = &l_2120.f1;
                int *l_2745 = &l_2654;
                int l_2746 = 0xE1DDEAF4L;
                int *l_2747 = &l_2715;
                int *l_2748 = &l_2625;
                int *l_2749 = (void*)0;
                int *l_2750 = &l_2715;
                int *l_2751 = &g_130;
                int *l_2752 = &l_2120.f1;
                int *l_2753 = (void*)0;
                int *l_2754 = &g_1005;
                int *l_2755 = &l_2497;
                int *l_2756 = &l_2152;
                int *l_2757 = &l_2120.f1;
                int *l_2758 = (void*)0;
                int *l_2759 = &l_2746;
                int *l_2760 = &l_2120.f0;
                int *l_2761 = &l_2563;
                int *l_2762 = &g_397;
                int *l_2763 = (void*)0;
                int *l_2764 = &l_2654;
                int *l_2765 = (void*)0;
                int *l_2766 = &l_2563;
                int *l_2767 = &g_1220;
                int *l_2768 = (void*)0;
                int *l_2769 = &l_2729;
                int *l_2770 = (void*)0;
                int l_2771 = 0xE4C770F9L;
                int *l_2772 = &l_2715;
                int *l_2773 = &g_674;
                int *l_2774 = &l_2625;
                int *l_2775 = &l_2143;
                int *l_2776 = &g_130;
                int *l_2777 = (void*)0;
                int *l_2778 = &l_2731;
                int *l_2779 = &l_2654;
                int *l_2780 = &l_2177;
                int *l_2781 = &g_674;
                int *l_2782 = (void*)0;
                int *l_2783 = &g_397;
                int *l_2784 = &g_33.f0;
                int *l_2785 = (void*)0;
                int *l_2786 = &l_2120.f1;
                int *l_2787 = &l_2558;
                int *l_2788 = &g_130;
                int *l_2789 = &g_1220;
                int *l_2790 = &l_2654;
                int *l_2792 = &l_2654;
                int *l_2793 = &g_1005;
                int *l_2794 = &g_674;
                int *l_2795 = &g_674;
                int *l_2797 = &l_2563;
                int *l_2798 = &l_2654;
                int *l_2799 = (void*)0;
                int *l_2800 = &g_130;
                int *l_2801 = (void*)0;
                int *l_2802 = (void*)0;
                int *l_2804 = &g_397;
                int *l_2805 = (void*)0;
                int *l_2806 = &l_2177;
                int *l_2807 = &l_2178;
                int *l_2808 = &l_2259;
                int *l_2809 = (void*)0;
                int *l_2811 = &l_2177;
                int l_2812 = 0xEBF9CEC9L;
                int *l_2813 = &l_2558;
                int *l_2814 = (void*)0;
                int *l_2815 = (void*)0;
                int l_2816 = 0x651FFAA4L;
                int *l_2817 = &g_33.f0;
                int *l_2818 = &l_2152;
                int *l_2819 = &l_2120.f0;
                int *l_2820 = &l_2812;
                int *l_2821 = (void*)0;
                int *l_2822 = (void*)0;
                int *l_2823 = (void*)0;
                int *l_2824 = &g_1228.f0;
                int *l_2825 = &g_33.f0;
                int *l_2826 = &g_130;
                int *l_2827 = &l_2143;
                short l_2828 = 1L;
                int *l_2829 = &l_2558;
                int *l_2830 = &l_2177;
                int *l_2831 = &l_2152;
                int *l_2832 = (void*)0;
                int *l_2833 = &g_674;
                int *l_2834 = (void*)0;
                int *l_2835 = (void*)0;
                int *l_2836 = &g_33.f0;
                int *l_2837 = (void*)0;
                int *l_2838 = &l_2558;
                l_2715 = (((func_30(p_23) , l_2693) > (safe_lshift_func_uint16_t_u_u(((*l_2714) = (0x73L ^ (l_2693 > (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((l_2704 <= (((p_21 > (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((l_2558 &= g_1220), ((safe_sub_func_uint32_t_u_u(p_21, p_23)) , p_23))), p_23)), l_2667))) , &g_58) != &g_660)) ^ p_23), (-1L))), p_22)), g_445))))), p_23))) ^ p_22);
                if (p_22)
                    break;
                ++g_2839;
            }
            if ((l_2558 = ((((*l_2843) = l_2842) != (void*)0) >= (safe_mul_func_uint16_t_u_u(l_2625, (safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s(((((l_2654 <= 0x13L) , ((p_22 |= (((p_21 == l_2810) < (safe_unary_minus_func_int8_t_s((~(safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_2857, 0x9934843EL)) , p_21), 6UL)) <= 0xB7L), l_2858)))))) && l_2739)) != 0xED73L)) <= l_2862) | l_2863), 0xAA7BL)))))))))
            {
                int *l_2865 = (void*)0;
                short *l_2887 = &g_660;
                char *l_2888 = &g_196;
                int l_2924 = (-1L);
                struct S0 l_2937 = {0xCA948CE4L,0xE11873B0L,255UL,4294967292UL};
                char *l_2973 = (void*)0;
                int l_3001 = 0xD01F80B1L;
                l_2715 &= p_21;
                if ((0x40L < (g_350 , p_23)))
                {
                    int l_2940 = 0L;
                    int *l_2941 = &l_2863;
                    struct S0 **l_2942 = &l_2272;
                    if ((safe_add_func_uint16_t_u_u(l_2796, p_21)))
                    {
                        struct S0 l_2891 = {0x29FCA7AEL,0x461F04F8L,1UL,6UL};
                        int *l_2892 = &l_2120.f1;
                        int *l_2893 = &l_2152;
                        int *l_2894 = &g_674;
                        int *l_2895 = &l_2191;
                        int *l_2896 = &l_2120.f1;
                        int *l_2897 = &l_2563;
                        int *l_2898 = &l_2891.f0;
                        int *l_2899 = &l_2891.f0;
                        int *l_2900 = &g_1228.f1;
                        int *l_2901 = &l_2796;
                        int *l_2902 = &l_2558;
                        int *l_2903 = &l_2558;
                        int *l_2904 = (void*)0;
                        int *l_2905 = &g_674;
                        int *l_2906 = (void*)0;
                        int *l_2907 = &l_2178;
                        int *l_2908 = (void*)0;
                        int *l_2909 = &l_2625;
                        int *l_2910 = &g_1220;
                        int *l_2911 = &l_2497;
                        int *l_2912 = &g_1005;
                        int *l_2913 = (void*)0;
                        int *l_2914 = &l_2863;
                        int *l_2915 = &l_2143;
                        int *l_2916 = &g_1228.f0;
                        int *l_2917 = &l_2654;
                        int *l_2918 = &l_2152;
                        int *l_2919 = &g_33.f1;
                        int *l_2920 = &l_2316;
                        int *l_2921 = &l_2796;
                        int *l_2922 = &g_1220;
                        int *l_2923 = &l_2259;
                        int *l_2925 = &l_2558;
                        l_2891 = (*l_2272);
                        g_2926++;
                    }
                    else
                    {
                        return p_22;
                    }
                    (*l_2941) |= (safe_mod_func_uint16_t_u_u(p_21, (safe_sub_func_int32_t_s_s(0xAEF4F52BL, (safe_mod_func_int32_t_s_s(l_2715, 4294967289UL))))));
                    (*l_2108) = (*l_2108);
                    (*l_2942) = &l_2856;

                    ;
                }
                else
                {
                    char l_2964 = 0x29L;
                    int l_2986 = 0x8E62EC94L;
                    l_2715 &= l_2704;
                    if (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_22, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_2739, p_22)), 4)), p_21)))), l_2704)), 15)) , g_1450), 4)) | 0x57C2C229L))
                    {
                        char **l_2972 = &l_2888;
                        int l_2983 = 0L;
                        unsigned char *l_2984 = &g_2682;
                        char l_2985 = 1L;
                        unsigned *l_2987 = &l_2120.f3;
                        int l_2990 = 0x0BE16E1CL;
                        unsigned short *l_2996 = (void*)0;
                        short *l_3008 = (void*)0;
                        (*l_2957) = ((safe_rshift_func_uint16_t_u_u((&p_23 == &g_2803), l_2967.f1)) == ((*g_167) = (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(((l_2796 && (g_225 = g_2926)) , l_2964), p_22)), p_21))));
                        l_2990 |= ((0xBDL > ((g_33.f3 = l_2796) >= ((*l_2957) = (((((*l_2972) = &l_2964) == l_2973) , (l_2989 = (~((((*l_2987) ^= (l_2986 |= ((safe_add_func_uint32_t_u_u(l_2976, ((p_21 , ((safe_add_func_uint32_t_u_u(p_22, (safe_lshift_func_uint16_t_u_u((l_2985 = (((((((((((((safe_mod_func_int32_t_s_s(p_23, (l_2715 = p_23))) != l_2983) < p_23) , (void*)0) != &g_2019) , l_2984) == (void*)0) != l_2983) != 0x8C99L) , 4L) != g_81) == p_21) , p_21)), p_22)))) && p_22)) >= p_23))) == 0xA25DL))) <= g_2988) , l_2986)))) > g_1622)))) , p_22);

                        ;
                        (*l_2957) = (safe_rshift_func_int16_t_s_u(l_2967.f0, 13));
                        (*g_2099) = ((safe_sub_func_uint16_t_u_u(p_22, g_309)) , (*g_2099));
                    }
                    else
                    {
                        unsigned l_3022 = 0x7438BC14L;
                        (*l_2995) = (safe_sub_func_uint32_t_u_u((((g_33.f1 & (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_21, g_1930)), p_21))) < p_22) , (((((&g_58 == ((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((l_3021 == (void*)0) & p_21), p_22)) > 3UL), l_2964)) == l_3022), p_23)) , (void*)0)) & p_21) == p_22) > p_22) || (*l_2995))), p_21));
                    }

                    ;
                }

                ;

                (*l_2957) &= 0x3A92422FL;
            }
            else
            {
                short l_3027 = 0L;
                int l_3061 = 9L;
                int l_3078 = 3L;
                int l_3127 = 0L;
                int l_3265 = (-1L);
                if (p_23)
                {
                    struct S0 *l_3023 = &l_2967;
                    int l_3043 = 0L;
                    int l_3059 = (-1L);
                    int l_3110 = 0xE5379FCCL;
                    int l_3116 = 1L;
                    int l_3154 = (-1L);
                    int l_3211 = (-1L);
                    int l_3223 = 2L;
                    int l_3225 = 1L;
                    l_3023 = &g_33;

                    ;
                    (*l_2995) = 0xD774B09FL;
                    for (l_2886 = 28; (l_2886 > 52); ++l_2886)
                    {
                        int *l_3026 = &l_2739;
                        int *l_3028 = (void*)0;
                        int *l_3029 = &g_1228.f1;
                        int *l_3030 = &g_1228.f1;
                        int *l_3031 = &l_2497;
                        int *l_3032 = &g_413;
                        int *l_3033 = &g_33.f1;
                        int *l_3034 = &l_2625;
                        int *l_3035 = &l_2667;
                        int *l_3036 = &l_2177;
                        int *l_3037 = &l_2739;
                        int *l_3038 = &g_33.f0;
                        int *l_3039 = &l_2739;
                        int l_3040 = 0xB88734B9L;
                        int *l_3041 = &l_2967.f0;
                        int *l_3042 = &l_3040;
                        int *l_3044 = (void*)0;
                        int *l_3045 = &g_33.f0;
                        int *l_3046 = &l_2739;
                        int *l_3047 = &l_2654;
                        int *l_3048 = &l_2810;
                        int *l_3049 = &l_2152;
                        int *l_3050 = &l_2558;
                        int *l_3051 = (void*)0;
                        int *l_3052 = &l_2120.f0;
                        int *l_3053 = (void*)0;
                        int l_3054 = 0x7F8C64AAL;
                        int *l_3055 = &g_413;
                        int *l_3056 = &l_2810;
                        int *l_3057 = (void*)0;
                        int *l_3058 = (void*)0;
                        int *l_3060 = &l_2177;
                        int *l_3062 = &l_2667;
                        int *l_3063 = &l_2558;
                        int *l_3064 = &g_413;
                        int *l_3065 = &l_2120.f0;
                        int *l_3066 = &l_2191;
                        int *l_3067 = &g_33.f0;
                        int *l_3068 = &g_674;
                        int *l_3069 = &l_2558;
                        int *l_3070 = &l_2796;
                        int *l_3071 = &l_2563;
                        int *l_3072 = &l_2156;
                        int *l_3073 = &g_1220;
                        int *l_3074 = &l_2715;
                        int *l_3075 = &l_2143;
                        int *l_3076 = &l_2191;
                        int *l_3077 = &l_2177;
                        int *l_3079 = (void*)0;
                        int *l_3080 = &l_3059;
                        int *l_3081 = &l_2120.f0;
                        int *l_3082 = &g_1228.f1;
                        int *l_3083 = &g_413;
                        int *l_3084 = &l_2120.f1;
                        int *l_3085 = &l_2654;
                        int *l_3086 = &l_2863;
                        int *l_3087 = &l_2810;
                        int *l_3088 = &l_2259;
                        int *l_3089 = &l_2810;
                        int *l_3090 = &l_3061;
                        int *l_3091 = &l_3078;
                        int *l_3092 = &l_2967.f1;
                        int *l_3093 = &l_2654;
                        int *l_3094 = (void*)0;
                        int *l_3095 = &g_130;
                        int *l_3096 = &l_2967.f0;
                        int *l_3097 = &g_33.f0;
                        int *l_3098 = &l_2625;
                        int *l_3099 = &l_2120.f1;
                        int *l_3100 = &l_2316;
                        int *l_3102 = &l_2316;
                        int *l_3103 = &l_3043;
                        int *l_3104 = &l_3078;
                        int *l_3105 = (void*)0;
                        int *l_3106 = &l_2667;
                        int *l_3107 = &g_33.f0;
                        int *l_3108 = (void*)0;
                        int *l_3109 = &l_2316;
                        int *l_3111 = &l_2177;
                        int *l_3112 = &g_1005;
                        int *l_3113 = &g_33.f0;
                        int *l_3114 = (void*)0;
                        int *l_3115 = &l_2654;
                        int *l_3117 = &l_2625;
                        int *l_3118 = &g_1228.f0;
                        int *l_3119 = &l_3101;
                        int *l_3120 = &l_2152;
                        int *l_3121 = (void*)0;
                        int l_3122 = 0x2FA83AB0L;
                        int *l_3123 = &l_2625;
                        int *l_3124 = &l_3040;
                        int *l_3125 = &l_3061;
                        int *l_3126 = &l_2558;
                        int *l_3128 = &g_1005;
                        int *l_3129 = (void*)0;
                        int *l_3130 = &g_33.f1;
                        int *l_3131 = (void*)0;
                        int *l_3132 = &l_2259;
                        int *l_3133 = &g_1005;
                        int *l_3134 = &l_2667;
                        int *l_3135 = &l_2654;
                        int *l_3136 = &l_2316;
                        int *l_3137 = &g_397;
                        int l_3138 = 0L;
                        int *l_3139 = &l_2558;
                        int *l_3140 = &l_3054;
                        int *l_3141 = &l_3110;
                        int *l_3142 = &g_397;
                        int *l_3143 = &l_2967.f0;
                        int *l_3144 = &l_2856.f1;
                        int *l_3145 = &l_3059;
                        int *l_3146 = &l_2143;
                        int *l_3147 = (void*)0;
                        int *l_3148 = &g_397;
                        int *l_3149 = &l_2563;
                        int *l_3150 = &l_3061;
                        int *l_3151 = &l_2497;
                        int *l_3152 = &l_2796;
                        int *l_3153 = &g_413;
                        int *l_3155 = &l_2810;
                        int *l_3156 = &l_2156;
                        int *l_3157 = (void*)0;
                        int *l_3158 = &g_1228.f1;
                        int *l_3159 = (void*)0;
                        int *l_3160 = &g_33.f0;
                        int *l_3161 = &l_2143;
                        int *l_3162 = (void*)0;
                        int *l_3163 = (void*)0;
                        int *l_3164 = (void*)0;
                        int *l_3165 = (void*)0;
                        int *l_3166 = &l_3101;
                        int *l_3167 = &l_2316;
                        int *l_3168 = &l_2863;
                        int *l_3169 = &l_3040;
                        int *l_3170 = &l_2259;
                        int *l_3171 = &l_2856.f0;
                        int *l_3172 = (void*)0;
                        int *l_3173 = &g_674;
                        int *l_3174 = &g_33.f1;
                        int *l_3175 = (void*)0;
                        int *l_3176 = (void*)0;
                        int *l_3177 = &l_2191;
                        int *l_3178 = &g_33.f0;
                        int *l_3179 = (void*)0;
                        int *l_3180 = &l_2316;
                        int *l_3181 = &g_1005;
                        int *l_3182 = &l_2156;
                        int *l_3183 = &l_3122;
                        int *l_3184 = &l_2497;
                        int *l_3185 = &l_2625;
                        int *l_3186 = (void*)0;
                        int *l_3187 = (void*)0;
                        int *l_3188 = &l_2563;
                        int *l_3189 = &l_2739;
                        int *l_3190 = (void*)0;
                        int *l_3191 = &l_2810;
                        int *l_3192 = &l_2259;
                        int *l_3193 = (void*)0;
                        int *l_3194 = &l_2856.f1;
                        int *l_3195 = &l_2152;
                        int *l_3196 = &l_2856.f1;
                        int *l_3197 = &l_3127;
                        int *l_3198 = &l_3110;
                        int *l_3199 = &l_3116;
                        int *l_3200 = &l_2856.f0;
                        int *l_3201 = &l_2625;
                        int *l_3202 = &l_3078;
                        int l_3203 = 0x50B710D1L;
                        int *l_3204 = &l_3110;
                        int *l_3205 = &l_2563;
                        int *l_3206 = &g_413;
                        int *l_3207 = &l_3078;
                        int *l_3208 = (void*)0;
                        int *l_3209 = &l_2739;
                        int *l_3210 = &l_2967.f1;
                        int *l_3212 = &l_2120.f1;
                        int *l_3213 = &l_3154;
                        int *l_3214 = &l_2178;
                        int *l_3215 = &l_3154;
                        int *l_3216 = &l_3054;
                        int *l_3217 = &l_2810;
                        int *l_3218 = &l_3059;
                        int *l_3219 = (void*)0;
                        int *l_3220 = (void*)0;
                        int *l_3221 = &l_2796;
                        int *l_3222 = &l_2856.f1;
                        int *l_3224 = &g_397;
                        int *l_3226 = &l_3122;
                        int *l_3227 = &l_2120.f1;
                        int *l_3228 = &l_3110;
                        int *l_3229 = &g_674;
                        int *l_3230 = &l_3223;
                        int *l_3231 = &l_2625;
                        int *l_3232 = &l_2563;
                        int *l_3233 = &l_2497;
                        int *l_3234 = &l_3061;
                        int *l_3235 = &l_3116;
                        int *l_3236 = &l_2810;
                        int *l_3237 = &l_3154;
                        int *l_3238 = &g_1220;
                        int *l_3239 = &l_3203;
                        int *l_3240 = (void*)0;
                        int *l_3241 = &l_2191;
                        int *l_3242 = &l_3122;
                        int *l_3243 = &l_3225;
                        int *l_3244 = (void*)0;
                        int *l_3245 = &g_1005;
                        int *l_3246 = (void*)0;
                        int *l_3247 = &l_2156;
                        int *l_3248 = (void*)0;
                        int *l_3249 = &l_2625;
                        int *l_3250 = &l_3203;
                        int l_3251 = (-8L);
                        int *l_3252 = &l_3061;
                        int *l_3253 = (void*)0;
                        int *l_3254 = &l_2739;
                        int *l_3255 = &l_2177;
                        int *l_3256 = &l_2177;
                        int *l_3257 = &l_2810;
                        int *l_3258 = (void*)0;
                        int *l_3259 = &l_2654;
                        int *l_3260 = &l_2796;
                        int *l_3261 = (void*)0;
                        int *l_3262 = (void*)0;
                        int *l_3263 = &l_3043;
                        int *l_3264 = &l_3138;
                        int *l_3266 = (void*)0;
                        int *l_3267 = &g_1220;
                        int *l_3269 = (void*)0;
                        int *l_3270 = &l_3211;
                        int *l_3271 = (void*)0;
                        int *l_3273 = &l_3211;
                        int *l_3274 = &l_3078;
                        int *l_3275 = (void*)0;
                        int *l_3276 = &l_2810;
                        struct S0 l_3280 = {0x4CAA67A3L,1L,0UL,0xED80EE6BL};
                        --g_3277;
                        (*l_2108) = &l_2739;

                        ;
                        (*l_2108) = func_49(l_3280);

                        ;
                        (*l_3173) |= (*g_13);
                    }
                    (*l_2957) &= 1L;
                }
                else
                {
                    return p_23;
                }
            }

            ;
            if ((l_3281 == (l_2843 != l_2843)))
            {
                unsigned short ***l_3289 = &g_2022;
                for (l_2886 = 0; (l_2886 > 10); ++l_2886)
                {
                    unsigned short ***l_3288 = &l_3021;
                    int l_3294 = 4L;
                    char *l_3295 = &g_196;
                    struct S0 *l_3296 = &g_33;
                    (*l_2995) &= (safe_mul_func_int16_t_s_s((g_413 == (safe_sub_func_int8_t_s_s(((l_3288 == l_3289) < (g_2385 = ((*l_2119) = 1UL))), ((*l_3295) |= (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_21, 7)), (((l_3294 || p_23) , p_23) == p_23))) == g_70) < (*l_2957)))))), g_2068));
                    l_3294 = g_2516;
                    if (p_23)
                    {
                        l_3296 = &l_2120;

                        ;
                    }
                    else
                    {
                        (*l_3296) = (*l_3296);
                    }

                    ;
                }
            }
            else
            {
                int l_3297 = 0x2BED8F83L;
                unsigned short *l_3315 = (void*)0;
                unsigned short *l_3316 = &l_2124;
                int l_3334 = 0xFEF609CAL;
                int l_3360 = (-4L);
                int l_3390 = 0x2C0C6401L;
                int l_3398 = 0x98CF2FF4L;
                unsigned char l_3439 = 0x92L;
                (*l_2995) ^= ((p_21 , g_1789) ^ (*l_2957));
                if ((safe_mod_func_uint16_t_u_u((*l_2957), (safe_lshift_func_int8_t_s_s(((p_21 , g_225) && (p_22 , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((l_3308 >= p_23), (l_2558 ^= ((*l_3316) ^= ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((p_23 , g_130), p_21)), 0x7F1EL)), p_23)) , (*l_2995)))))) , p_22) || p_23), 1)), 9)))), (*g_167))))))
                {
                    return (*g_167);
                }
                else
                {
                    (*l_2108) = func_49((*g_2099));

                    ;
                }

                ;
                for (l_2870 = 0; (l_2870 <= 33); l_2870 = safe_add_func_int16_t_s_s(l_2870, 9))
                {
                    unsigned short l_3440 = 0x4398L;
                    (*l_2957) = l_3297;
                    if ((*l_2957))
                        break;
                    for (l_2715 = 0; (l_2715 >= (-4)); l_2715 = safe_sub_func_uint32_t_u_u(l_2715, 2))
                    {
                        int *l_3321 = &g_397;
                        int *l_3322 = &l_2967.f1;
                        int *l_3323 = &l_2120.f0;
                        int *l_3324 = (void*)0;
                        int *l_3325 = &l_2654;
                        int *l_3326 = &l_2856.f1;
                        int *l_3327 = &l_2863;
                        int *l_3328 = &l_2856.f0;
                        int *l_3329 = &g_33.f0;
                        int *l_3330 = &g_33.f1;
                        int *l_3331 = &l_2558;
                        int *l_3332 = (void*)0;
                        int l_3333 = 0x550DF7EFL;
                        int *l_3335 = &l_2156;
                        int *l_3336 = &l_2739;
                        int *l_3337 = (void*)0;
                        int l_3338 = 0x3D703B1FL;
                        int *l_3339 = &l_2856.f1;
                        int *l_3340 = &l_2191;
                        int *l_3341 = &l_3268;
                        int *l_3342 = &l_2856.f1;
                        int *l_3343 = &l_2739;
                        int *l_3344 = &l_2856.f1;
                        int *l_3345 = &g_1220;
                        int *l_3346 = &l_2967.f0;
                        int *l_3347 = &g_130;
                        int *l_3348 = &l_2856.f1;
                        int *l_3349 = &l_2259;
                        int *l_3350 = &l_2259;
                        int *l_3351 = &g_413;
                        int *l_3352 = &g_33.f1;
                        int *l_3353 = &l_2967.f1;
                        int *l_3354 = (void*)0;
                        int *l_3355 = (void*)0;
                        int *l_3356 = &l_2152;
                        int *l_3357 = &l_2152;
                        int *l_3358 = &l_2796;
                        int *l_3359 = &l_2316;
                        int *l_3361 = &l_2143;
                        int *l_3362 = &l_2856.f1;
                        int *l_3363 = (void*)0;
                        int *l_3364 = &l_2625;
                        int *l_3365 = (void*)0;
                        int *l_3366 = &g_397;
                        int *l_3367 = (void*)0;
                        int *l_3368 = &l_3360;
                        int *l_3369 = &l_3334;
                        int *l_3370 = (void*)0;
                        int *l_3371 = (void*)0;
                        int *l_3372 = (void*)0;
                        int *l_3373 = &g_397;
                        int *l_3374 = &l_2810;
                        int *l_3375 = &l_2856.f1;
                        int *l_3376 = &l_2739;
                        int *l_3377 = &g_130;
                        int *l_3378 = &l_2563;
                        int *l_3379 = (void*)0;
                        int *l_3380 = (void*)0;
                        int *l_3381 = &l_2316;
                        int *l_3382 = &g_1220;
                        int *l_3383 = &l_2810;
                        int *l_3384 = &l_2654;
                        int *l_3385 = &g_1005;
                        int *l_3386 = &l_2863;
                        int *l_3387 = &g_1005;
                        int *l_3388 = &l_2497;
                        int *l_3389 = &l_2563;
                        int *l_3391 = (void*)0;
                        int *l_3392 = &g_130;
                        int *l_3393 = &l_2563;
                        int *l_3394 = &l_2667;
                        int *l_3395 = &l_3333;
                        int *l_3396 = &l_2625;
                        int *l_3397 = (void*)0;
                        int l_3399 = 0x3B094D2EL;
                        int *l_3400 = &l_2558;
                        int *l_3401 = &l_2856.f0;
                        int *l_3402 = &g_33.f0;
                        int *l_3403 = (void*)0;
                        int *l_3404 = &l_3390;
                        int *l_3405 = &l_2967.f0;
                        int *l_3406 = &l_3333;
                        int *l_3407 = &g_1228.f0;
                        int *l_3408 = &l_2796;
                        int l_3409 = (-1L);
                        int *l_3410 = &l_2259;
                        int *l_3411 = &l_2120.f1;
                        int *l_3412 = &g_33.f1;
                        int *l_3413 = &l_3334;
                        int *l_3414 = &l_3390;
                        int *l_3415 = &l_3334;
                        int l_3416 = 0x08E8ADB8L;
                        int *l_3417 = &l_3416;
                        int *l_3418 = &l_2810;
                        int *l_3419 = &l_2863;
                        int *l_3420 = &l_2625;
                        int *l_3421 = &l_2558;
                        ++g_3422;
                        (*l_3410) ^= ((&g_2019 == (void*)0) || (safe_lshift_func_int16_t_s_u((*l_2995), (g_569 || (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((*g_2099) , (safe_div_func_int16_t_s_s(g_58, (safe_sub_func_int32_t_s_s(((*l_3395) ^= ((*l_3348) = p_22)), l_3360))))), l_3439)), l_3440))))));
                        if (l_3440)
                            break;
                    }
                    (*l_2272) = func_30(l_3440);
                }
            }
        }

        ;
        ++l_3526;
        (*g_2099) = func_30((*l_2957));
    }



    (*l_2108) = (void*)0;

    ;
    l_2957 = ((*l_2108) = func_49((*g_2099)));

    ;
    ;
    return p_23;
}







static short func_26(int * p_27, unsigned p_28, struct S0 p_29)
{
    int l_36 = 0x56FD8C65L;
    short *l_56 = (void*)0;
    short *l_57 = &g_58;
    short l_59 = 0x8B42L;
    int l_1663 = 0xDD351FC2L;
    int l_1664 = 0x3FD55BC2L;
    int l_1675 = 0xC234D509L;
    int l_1719 = (-10L);
    int l_1722 = 8L;
    struct S0 l_1739 = {1L,-1L,253UL,0x17848893L};
    unsigned *l_1782 = &g_539;
    unsigned char l_1784 = 255UL;
    char **l_1821 = (void*)0;
    unsigned short **l_2021 = &g_2019;
    unsigned char l_2029 = 0UL;
    int l_2041 = 0xC996095FL;
    unsigned char *l_2083 = (void*)0;
    unsigned char **l_2082 = &l_2083;
    struct S0 **l_2095 = (void*)0;
    struct S0 **l_2096 = (void*)0;
    struct S0 *l_2098 = &g_1228;
    struct S0 **l_2097 = &l_2098;
    for (g_33.f1 = 28; (g_33.f1 <= 20); g_33.f1--)
    {
        return l_36;
    }
    if (((((safe_div_func_int16_t_s_s((func_39(func_44(p_29.f0, func_49(((246UL | ((g_6 || g_33.f3) >= (safe_mod_func_int8_t_s_s(g_6, l_36)))) , func_30((safe_add_func_uint8_t_u_u(l_36, ((4294967295UL <= (safe_unary_minus_func_int16_t_s(((*l_57) = (((l_36 , 1L) == p_29.f2) | 1L))))) && l_59)))))), p_28, g_33.f3), &l_36, p_29.f1, l_36) | 0xEE8F6A7DL), g_6)) != l_59) < 0x20L) > p_29.f2))
    {
        int l_1627 = 0xFD331502L;
        int l_1628 = 0x6CB2AFDCL;
        int *l_1629 = &g_33.f0;
        int l_1694 = (-5L);
        int l_1742 = (-4L);
        unsigned l_1800 = 0x62B7238EL;
        (*l_1629) ^= (((void*)0 == p_27) && (safe_rshift_func_int16_t_s_s((l_1628 ^= ((*l_57) &= (l_1627 , 0L))), 0)));
        for (g_445 = 15; (g_445 != 28); g_445 = safe_add_func_uint16_t_u_u(g_445, 9))
        {
            char l_1632 = 0L;
            int *l_1633 = &g_413;
            int *l_1634 = &l_1627;
            int *l_1635 = (void*)0;
            int *l_1636 = (void*)0;
            int *l_1637 = (void*)0;
            int l_1638 = 0xCAF43A98L;
            int *l_1639 = &g_1005;
            int *l_1640 = &g_674;
            int *l_1641 = &g_130;
            int *l_1642 = &l_1628;
            int l_1643 = 0x5496D31BL;
            int *l_1644 = &g_1228.f0;
            int *l_1645 = &l_1643;
            int *l_1646 = &g_130;
            int *l_1647 = &l_1627;
            int *l_1648 = &g_130;
            int l_1649 = (-2L);
            int *l_1650 = &g_1228.f0;
            int *l_1651 = &g_33.f1;
            int *l_1652 = &g_1228.f0;
            int *l_1653 = &g_33.f1;
            int *l_1654 = &g_33.f1;
            int *l_1655 = (void*)0;
            int l_1656 = 0x339704DBL;
            int *l_1657 = &g_1220;
            int *l_1658 = &g_33.f1;
            int *l_1659 = &g_1005;
            int *l_1660 = (void*)0;
            int *l_1661 = &g_33.f0;
            int *l_1662 = &l_1656;
            int *l_1665 = &l_1664;
            int *l_1666 = &l_36;
            int l_1667 = 7L;
            int *l_1668 = &g_33.f0;
            int *l_1669 = &g_413;
            int *l_1670 = &l_1627;
            int *l_1671 = &l_1663;
            int *l_1672 = &g_130;
            int *l_1673 = (void*)0;
            int *l_1674 = (void*)0;
            int *l_1676 = &l_1638;
            int *l_1677 = &l_1675;
            int *l_1678 = (void*)0;
            int *l_1679 = &g_674;
            int *l_1680 = &l_1667;
            int l_1681 = 1L;
            int *l_1682 = &l_1663;
            int *l_1683 = &g_1005;
            int l_1684 = 0x3E9E2C7CL;
            int *l_1685 = &l_1684;
            int *l_1686 = &l_1656;
            int *l_1687 = &g_1005;
            int *l_1688 = &l_1638;
            int *l_1689 = &l_1667;
            int *l_1690 = &l_1681;
            int *l_1691 = &g_413;
            int *l_1692 = &g_130;
            int *l_1693 = &l_1627;
            int *l_1695 = &l_1675;
            int *l_1696 = &g_1228.f1;
            int *l_1697 = &g_33.f0;
            int *l_1698 = (void*)0;
            int *l_1699 = &g_1005;
            int *l_1700 = (void*)0;
            int *l_1701 = &g_413;
            int *l_1702 = &l_1638;
            int *l_1703 = (void*)0;
            int *l_1704 = (void*)0;
            int *l_1705 = &l_1656;
            int *l_1706 = &g_397;
            int *l_1707 = &g_1005;
            int *l_1708 = &l_36;
            int *l_1709 = &l_1684;
            int *l_1710 = &l_36;
            int *l_1711 = (void*)0;
            int *l_1712 = (void*)0;
            int *l_1713 = (void*)0;
            int *l_1714 = &l_1627;
            int *l_1715 = (void*)0;
            int *l_1716 = (void*)0;
            int *l_1717 = &l_1694;
            int *l_1718 = &l_1694;
            int *l_1720 = &l_1643;
            int *l_1721 = (void*)0;
            int *l_1723 = &g_1228.f0;
            int *l_1724 = &l_1667;
            unsigned l_1725 = 0xACF7EA55L;
            int l_1732 = 0xC91C74BCL;
            struct S0 l_1741 = {0x2C97F813L,3L,8UL,1UL};
            int **l_1767 = &l_1668;
            int ***l_1766 = &l_1767;
            l_1725--;
            for (g_1228.f1 = 0; (g_1228.f1 <= 9); g_1228.f1++)
            {
                int l_1735 = 6L;
                int **l_1746 = &l_1662;
                int ***l_1765 = (void*)0;
                unsigned short l_1768 = 65529UL;
                short *l_1780 = &g_58;
                if ((p_28 < (4294967288UL & (safe_lshift_func_int8_t_s_u(((*g_167) = l_1732), 3)))))
                {
                    unsigned short *l_1737 = &g_81;
                    unsigned short **l_1736 = &l_1737;
                    if ((safe_sub_func_uint8_t_u_u(1UL, ((l_1735 , ((*l_1695) &= (((*l_1736) = (void*)0) == l_57))) ^ g_33.f0))))
                    {
                        if ((*p_27))
                            break;
                        if (g_1738)
                            break;
                    }
                    else
                    {
                        struct S0 *l_1740 = &l_1739;
                        (*l_1740) = l_1739;
                        (*l_1701) ^= (&g_81 == &g_81);
                        (*l_1740) = l_1741;
                    }

                    ;
                }
                else
                {
                    unsigned short l_1743 = 0xF81DL;
                    l_1743--;
                }
                (*l_1746) = &l_1694;

                ;
                if ((*p_27))
                {
                    unsigned *l_1747 = &g_33.f3;
                    int ***l_1750 = &l_1746;
                    struct S0 l_1774 = {0x3D63D847L,0xB1D3792DL,255UL,4UL};
                    if ((*p_27))
                        break;
                    if (((((*l_1747) = (*l_1629)) , (safe_add_func_int16_t_s_s((((*l_1750) = &l_1629) != ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_29 , (func_30((safe_mod_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((*p_27), 0x4E0E57E5L)) == (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((*g_167) &= ((p_29.f1 , l_1765) == l_1766)), ((*l_1629) = 0L))) & 0xF5677A84L) | 0x6952L), l_1768)), p_29.f0))) < g_1197) , 0x4D10L), g_1228.f3))) , p_29.f3)), g_1622)), 1UL)) , (void*)0)), 0x9361L))) , (*p_27)))
                    {
                        if ((*p_27))
                            break;
                    }
                    else
                    {
                        struct S0 *l_1771 = (void*)0;
                        struct S0 *l_1772 = (void*)0;
                        struct S0 *l_1773 = (void*)0;
                        (*l_1717) ^= g_33.f0;
                        (**l_1750) = func_49((l_1774 = (p_29 = func_30((safe_add_func_int16_t_s_s((((*l_1746) = func_49(p_29)) != (void*)0), 0x0ED0L))))));

                        ;
                        (*l_1680) = (-10L);
                    }

                    ;
                }
                else
                {
                    unsigned l_1779 = 0x90117C74L;
                    short **l_1781 = &l_57;
                    int l_1785 = (-1L);
                    int l_1786 = 0L;
                    int l_1792 = 0xFCF2D816L;
                    unsigned char *l_1805 = (void*)0;
                    unsigned char *l_1806 = &g_1202;
                    if (((safe_add_func_uint16_t_u_u(p_29.f3, l_1779)) >= (l_1780 != ((*l_1781) = &g_980))))
                    {
                        unsigned **l_1783 = &l_1782;
                        int *l_1787 = &l_1694;
                        int *l_1788 = &l_1663;
                        int *l_1790 = (void*)0;
                        int l_1791 = 1L;
                        int *l_1793 = &l_1786;
                        int *l_1794 = (void*)0;
                        int *l_1795 = &l_1627;
                        int *l_1796 = (void*)0;
                        int *l_1797 = &g_1220;
                        int *l_1798 = &g_674;
                        int *l_1799 = &l_1735;
                        (*l_1689) &= (l_1784 = (((*l_1783) = l_1782) == &g_445));
                        ++l_1800;
                    }
                    else
                    {
                        return g_1228.f3;
                    }

                    ;
                    (*l_1708) &= (*p_27);
                    (*l_1686) &= ((safe_mul_func_uint8_t_u_u(((*l_1806) = g_1228.f2), (*l_1717))) || p_29.f2);
                }

                ;
                (*l_1671) &= (((!p_29.f2) >= 0x1974AB81L) > (*p_27));
            }

            ;
            ;
            ;
            (*l_1708) &= (p_29.f2 ^ g_663);
            return g_1228.f3;
        }
        g_1807 = &g_397;

        ;
        (*g_1807) |= 0x2A845652L;
    }
    else
    {
        int *l_1817 = (void*)0;
        short l_1820 = 0xA2A0L;
        int l_1836 = 0xE42C0F4CL;
        int l_1867 = (-1L);
        int l_1868 = 0xBC012FB6L;
        int l_1872 = 0L;
        int l_1876 = (-9L);
        int l_1884 = 0xDD470EBDL;
        int l_2034 = 0L;
        struct S0 l_2093 = {0xB90E23F1L,0L,248UL,0x4A1D6388L};
        int **l_2094 = &g_13;
        if ((safe_rshift_func_uint8_t_u_u(g_196, 0)))
        {
            unsigned l_1816 = 1UL;
            int *l_1826 = &l_1739.f0;
            int l_1915 = 0xF3C556A7L;
            unsigned short **l_2020 = &g_2019;
            unsigned short ***l_2023 = (void*)0;
            unsigned short **l_2024 = (void*)0;
            for (p_28 = 20; (p_28 == 17); --p_28)
            {
                unsigned char l_1818 = 0xC2L;
                unsigned *l_1819 = &g_663;
                short l_1833 = 0x30CBL;
                int l_1846 = 6L;
                int l_1848 = (-10L);
                int l_1853 = (-10L);
                int l_1900 = 1L;
                int l_1940 = 0xD40AA2A8L;
                unsigned char l_1954 = 2UL;
                int **l_2017 = &l_1817;
                if (l_1739.f2)
                    break;
                if (((safe_lshift_func_int8_t_s_u(((((l_1820 | 0x56E8E09BL) != g_397) < l_1818) || p_28), p_29.f3)) != 3UL))
                {
                    char ***l_1822 = &l_1821;
                    int l_1838 = 0x50E83AEAL;
                    int l_1855 = 0x1AC2966FL;
                    int l_1862 = 1L;
                    int l_1953 = (-1L);
                    if ((((*l_1822) = l_1821) == ((((*p_27) , (void*)0) == g_1823) , &g_167)))
                    {
                        struct S0 *l_1825 = &l_1739;
                        (*l_1825) = func_30(l_59);
                    }
                    else
                    {
                        unsigned char *l_1828 = &g_569;
                        unsigned char **l_1827 = &l_1828;
                        int **l_1834 = &g_1807;
                        int *l_1835 = (void*)0;
                        int *l_1837 = &l_1719;
                        int *l_1839 = &g_33.f0;
                        int *l_1840 = &g_130;
                        int *l_1841 = (void*)0;
                        int *l_1842 = (void*)0;
                        int *l_1843 = &l_36;
                        int *l_1844 = &g_413;
                        int *l_1845 = (void*)0;
                        int *l_1847 = &l_1663;
                        int *l_1849 = &l_1664;
                        int *l_1850 = &g_1228.f1;
                        int *l_1851 = &l_36;
                        int *l_1852 = (void*)0;
                        int l_1854 = 1L;
                        int *l_1856 = &g_33.f1;
                        int *l_1857 = &l_1739.f0;
                        int *l_1858 = &g_130;
                        int *l_1859 = &g_33.f1;
                        int *l_1860 = (void*)0;
                        int *l_1861 = (void*)0;
                        int *l_1863 = &g_1220;
                        int *l_1864 = &l_1848;
                        int *l_1865 = &g_1228.f0;
                        int *l_1866 = &g_1005;
                        int l_1869 = 0xC7C79308L;
                        int *l_1870 = &g_413;
                        int *l_1871 = (void*)0;
                        int *l_1873 = &l_1838;
                        int *l_1874 = &l_1739.f1;
                        int *l_1875 = &l_1664;
                        int *l_1877 = &g_33.f1;
                        int *l_1878 = &l_1868;
                        int *l_1879 = &l_1739.f0;
                        int *l_1880 = (void*)0;
                        int *l_1881 = &g_397;
                        int *l_1882 = &g_1005;
                        int *l_1883 = &g_33.f1;
                        int *l_1885 = &l_36;
                        int *l_1886 = (void*)0;
                        int *l_1887 = &l_1876;
                        int *l_1888 = &g_130;
                        int *l_1889 = &l_1664;
                        int *l_1890 = &l_1862;
                        int *l_1891 = &g_33.f1;
                        int *l_1892 = (void*)0;
                        int *l_1893 = &g_1005;
                        int *l_1894 = &l_1862;
                        int *l_1895 = &g_1220;
                        int *l_1896 = &l_1862;
                        int *l_1897 = (void*)0;
                        int *l_1898 = &g_1228.f1;
                        int *l_1899 = &l_1836;
                        int *l_1901 = (void*)0;
                        int *l_1902 = &l_1867;
                        int *l_1903 = (void*)0;
                        int *l_1904 = &l_1846;
                        int *l_1905 = &g_674;
                        int *l_1906 = &l_1900;
                        int *l_1907 = &g_674;
                        int *l_1908 = &l_1719;
                        int *l_1909 = (void*)0;
                        int *l_1910 = &l_1862;
                        int *l_1911 = &l_1739.f0;
                        int *l_1912 = &l_1868;
                        int *l_1913 = &g_1005;
                        int l_1914 = 1L;
                        int *l_1916 = &l_1836;
                        int *l_1917 = &l_1867;
                        int *l_1918 = &l_1675;
                        int *l_1919 = (void*)0;
                        int *l_1920 = &l_1867;
                        int *l_1921 = &l_1868;
                        int *l_1922 = &g_33.f0;
                        int *l_1923 = &l_1915;
                        int *l_1924 = &g_1228.f0;
                        int *l_1925 = &l_1914;
                        int *l_1926 = &l_1868;
                        int *l_1927 = &g_1005;
                        int *l_1928 = (void*)0;
                        int *l_1929 = &l_1853;
                        int *l_1931 = &g_413;
                        int *l_1932 = &l_1675;
                        int *l_1933 = &l_36;
                        int *l_1934 = &l_1855;
                        int *l_1935 = &l_1869;
                        int *l_1936 = (void*)0;
                        int *l_1937 = &l_1853;
                        int *l_1938 = &g_1228.f0;
                        int *l_1939 = &g_1228.f1;
                        int *l_1941 = &l_1869;
                        int *l_1942 = &g_413;
                        int *l_1943 = (void*)0;
                        int *l_1944 = &l_1862;
                        int *l_1945 = &l_1675;
                        int *l_1946 = (void*)0;
                        int *l_1947 = &l_1853;
                        int *l_1948 = &l_1722;
                        int *l_1949 = &g_1228.f1;
                        (*l_1834) = l_1819;

                        ;
                        g_1950++;
                        ++l_1954;
                        if (l_1954)
                            break;
                    }
                }
                else
                {
                    unsigned short l_2014 = 9UL;
                    for (l_1868 = 0; (l_1868 > (-18)); l_1868 = safe_sub_func_int8_t_s_s(l_1868, 6))
                    {
                        unsigned char *l_1963 = &l_1954;
                        int *l_1964 = &g_674;
                        int *l_1965 = &l_1664;
                        int *l_1966 = &g_1005;
                        int *l_1967 = &l_1876;
                        int *l_1968 = &g_33.f1;
                        int *l_1969 = &l_1719;
                        int *l_1970 = &g_1220;
                        int *l_1971 = &l_1900;
                        int *l_1972 = &g_33.f0;
                        int *l_1973 = &l_1664;
                        int *l_1974 = (void*)0;
                        int *l_1975 = &l_1853;
                        int *l_1976 = &l_1900;
                        int *l_1977 = (void*)0;
                        int *l_1978 = &l_1846;
                        int *l_1979 = &l_1675;
                        int *l_1980 = (void*)0;
                        int *l_1981 = &l_1915;
                        int *l_1982 = &g_130;
                        int *l_1983 = &g_33.f1;
                        int *l_1984 = &g_33.f0;
                        int *l_1985 = &l_1867;
                        int *l_1986 = &g_397;
                        int *l_1987 = &l_1915;
                        int *l_1988 = (void*)0;
                        int *l_1989 = &g_1220;
                        int *l_1990 = &l_1872;
                        int *l_1991 = &l_1739.f0;
                        int *l_1992 = &l_1900;
                        int *l_1993 = (void*)0;
                        int *l_1994 = &l_1836;
                        int *l_1995 = &g_674;
                        int *l_1996 = &l_1848;
                        int l_1997 = (-6L);
                        int l_1998 = 0xE99080FFL;
                        int *l_1999 = &l_1998;
                        int *l_2000 = (void*)0;
                        int *l_2001 = &l_1867;
                        int *l_2002 = &g_1228.f1;
                        int *l_2003 = &l_1997;
                        int *l_2004 = &g_1228.f0;
                        int *l_2005 = &l_1884;
                        int *l_2006 = (void*)0;
                        int *l_2007 = &l_1876;
                        int *l_2008 = &l_1739.f1;
                        int *l_2009 = &g_130;
                        int *l_2010 = &l_1872;
                        int *l_2011 = &g_1220;
                        int *l_2012 = &l_1900;
                        int *l_2013 = &l_1867;
                        p_29.f1 = ((*l_1826) = ((g_1228.f2 || (safe_mod_func_int16_t_s_s(((4294967295UL < l_1848) | 0x6A2B88B2L), 0xFCA0L))) & ((safe_sub_func_int8_t_s_s((*g_167), ((*l_1963) = 0xC6L))) , (*p_27))));
                        --l_2014;
                    }
                }
                (*l_2017) = (void*)0;
            }

            ;
            if ((((l_2020 = g_2018) != (p_29.f3 , (l_2024 = (g_2022 = l_2021)))) , (~((safe_sub_func_uint8_t_u_u(((g_674 |= ((safe_rshift_func_int16_t_s_u(((*l_57) &= l_2029), 15)) ^ (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_2034, (((safe_mul_func_uint16_t_u_u(0xAB99L, (safe_rshift_func_uint8_t_u_u(p_29.f2, 4)))) & ((safe_lshift_func_int16_t_s_u((l_2041 , (safe_rshift_func_int8_t_s_u(l_36, 4))), 4)) & (*l_1826))) == p_29.f2))), 7)))) != 3L), 8L)) && g_33.f1))))
            {
                return p_29.f3;
            }
            else
            {
                unsigned l_2052 = 0x87D75627L;
                struct S0 l_2053 = {0xFB7FB28BL,-3L,0UL,4294967289UL};
                if (((safe_mul_func_uint16_t_u_u(0x9D24L, (safe_add_func_uint16_t_u_u(((void*)0 != (*l_2024)), p_29.f0)))) ^ 0x2958BA5CL))
                {
                    (*l_1826) |= (safe_mod_func_uint8_t_u_u(g_1950, (safe_mod_func_int32_t_s_s(1L, l_2052))));
                    if ((p_27 == (p_29 , &g_309)))
                    {
                        p_27 = func_49(l_2053);

                        ;
                        g_1807 = func_49(l_1739);

                        ;
                    }
                    else
                    {
                        return p_28;
                    }

                    ;
                    ;
                }
                else
                {
                    struct S0 l_2056 = {-8L,0xB48C95E3L,253UL,4294967294UL};
                    int *l_2079 = &l_1836;
                    if (((((*l_1826) , g_2059) == g_2059) > (*l_1826)))
                    {
                        char *l_2074 = &g_196;
                        int l_2078 = 0x72FF0336L;
                        p_27 = p_27;
                        l_1915 = ((safe_lshift_func_uint8_t_u_s((((*g_167) = (((*g_167) < l_2056.f1) >= (safe_mul_func_int8_t_s_s((*g_167), (l_2056.f2 == (p_29.f1 = (((((safe_sub_func_uint16_t_u_u((g_70 == g_2068), ((safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((*l_2074) ^= 0x97L), (((*l_1826) = (safe_unary_minus_func_uint16_t_u(l_2056.f3))) , (safe_mod_func_int32_t_s_s((p_29.f1 != (*l_1826)), (*p_27)))))), l_2056.f3)))) & (-10L)))) == 0xDA40L) >= g_130) & l_2078) < 0UL))))))) & p_29.f3), 4)) != 0x22AFL);
                    }
                    else
                    {
                        g_33.f1 = (-1L);
                        l_2079 = (void*)0;

                        ;
                        (*l_1826) ^= (*p_27);
                        p_27 = &g_397;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                p_29 = p_29;
                return l_2053.f1;
            }
        }
        else
        {
            unsigned char *l_2081 = &l_1784;
            unsigned char **l_2080 = &l_2081;
            int *l_2084 = &l_2041;
            int l_2087 = 7L;
            struct S0 *l_2089 = &g_1228;
            struct S0 **l_2088 = &l_2089;
            unsigned short *l_2090 = &g_2068;
            char ***l_2091 = (void*)0;
            int *l_2092 = &l_1876;
            (*l_2092) &= (((((*l_2084) = (l_2080 != ((g_309 = ((p_29.f3 > p_28) > g_196)) , l_2082))) , (((*p_27) == (safe_div_func_uint16_t_u_u(((*l_2090) &= (((((func_30(l_2087) , &l_59) == (void*)0) , l_2088) == (void*)0) , l_2087)), l_2087))) || p_29.f2)) , l_2091) != &g_166);
        }
        (*l_2094) = (p_28 , func_49(l_2093));

        ;
        p_27 = &l_1663;

        ;
    }

    ;
    ;
    ;
    ;
    g_2099 = ((*l_2097) = &g_1228);

    ;
    return g_225;
}







static struct S0 func_30(unsigned p_31)
{
    return g_33;
}







static int func_39(int * p_40, int * p_41, short p_42, unsigned p_43)
{
    int *l_734 = &g_413;
    short *l_743 = &g_437;
    unsigned *l_744 = &g_445;
    short *l_745 = &g_660;
    int l_758 = 0xD6936928L;
    int l_789 = 0x8200BA00L;
    int l_808 = 0xF642E672L;
    int l_817 = 2L;
    int l_860 = 1L;
    int l_866 = 0x24C45681L;
    int l_879 = 0x42FD6975L;
    int l_887 = 0xB70FD327L;
    int l_917 = (-1L);
    short **l_1086 = (void*)0;
    short l_1281 = (-10L);
    (*l_734) &= (*p_41);
    if (((safe_sub_func_int32_t_s_s((*l_734), (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((*l_734), (g_445 , ((*l_743) = (safe_rshift_func_uint8_t_u_s(g_70, 0)))))) , (((*l_744) = p_42) && g_14)), (*l_734))))) <= ((*l_745) = (+(-7L)))))
    {
        unsigned char *l_748 = &g_350;
        int l_757 = 0xA15FCD97L;
        unsigned *l_759 = &g_199;
        unsigned char *l_764 = &g_569;
        unsigned short *l_945 = &g_81;
        int *l_946 = &g_413;
        int *l_947 = (void*)0;
        int *l_948 = &l_758;
        int *l_949 = &l_860;
        int *l_950 = &g_130;
        int *l_951 = &l_789;
        int *l_952 = &g_33.f0;
        int *l_953 = &g_674;
        int *l_954 = &l_758;
        int *l_955 = &l_758;
        int *l_956 = (void*)0;
        int *l_957 = &g_674;
        int *l_958 = &g_33.f1;
        int *l_959 = &g_397;
        int *l_960 = (void*)0;
        int *l_961 = &l_866;
        int *l_962 = &l_817;
        int *l_963 = &l_887;
        int *l_964 = &l_860;
        int *l_965 = &l_789;
        int *l_966 = &g_413;
        int *l_967 = &l_917;
        int *l_968 = &l_817;
        int *l_969 = &l_866;
        int *l_970 = &g_130;
        int *l_971 = &l_917;
        int *l_972 = &l_757;
        int *l_973 = &g_397;
        int *l_974 = &l_757;
        int *l_975 = &l_879;
        int *l_976 = (void*)0;
        int *l_977 = &l_879;
        int *l_978 = &g_674;
        int *l_979 = &g_33.f0;
        int *l_981 = &l_789;
        int *l_982 = &g_413;
        int *l_983 = &g_674;
        int l_1010 = (-5L);
        int l_1028 = 0xF3EC99ACL;
        int l_1164 = 0x9C8437A6L;
        int l_1167 = 0xC9FE9BB5L;
        int l_1219 = 0L;
        short l_1224 = 0xADE0L;
        struct S0 l_1283 = {-5L,0x5FDB9509L,1UL,0x9B9B3982L};
        if (((func_30(((((safe_mul_func_uint8_t_u_u(((*l_748) = p_42), ((*p_40) <= ((void*)0 == &g_81)))) ^ ((*l_734) ^= p_42)) != ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_33.f0 ^= (l_758 = ((*p_41) = l_757))), (((*l_759) = g_33.f3) , (safe_lshift_func_int8_t_s_u(l_757, 0))))), (safe_rshift_func_uint8_t_u_u((++(*l_764)), l_757)))), p_43)), g_14)) , p_42)) , (*l_734))) , 247UL) < p_42))
        {
            int *l_767 = &g_413;
            int *l_768 = (void*)0;
            int l_769 = (-1L);
            int *l_770 = (void*)0;
            int *l_771 = &l_757;
            int l_772 = 7L;
            int *l_773 = &g_130;
            int *l_774 = &g_397;
            int *l_775 = &l_769;
            int *l_776 = &g_413;
            int *l_777 = (void*)0;
            int l_778 = (-4L);
            int *l_779 = &g_397;
            int *l_780 = &l_758;
            int *l_781 = &g_674;
            int *l_782 = &g_130;
            int *l_783 = &g_397;
            int *l_784 = &g_33.f0;
            int l_785 = 0L;
            int *l_786 = (void*)0;
            int *l_787 = (void*)0;
            int *l_788 = &g_33.f0;
            int *l_790 = &l_772;
            int *l_791 = &l_757;
            int *l_792 = &l_772;
            int *l_793 = (void*)0;
            int *l_794 = (void*)0;
            int *l_795 = &g_674;
            int *l_796 = &l_789;
            int *l_797 = (void*)0;
            int *l_798 = &l_769;
            int *l_799 = &l_772;
            int *l_800 = &l_789;
            int *l_801 = (void*)0;
            int *l_802 = (void*)0;
            int *l_803 = &l_769;
            int l_804 = 0x53275E71L;
            int l_805 = (-5L);
            int *l_806 = (void*)0;
            int *l_807 = &g_130;
            int *l_809 = &l_808;
            int *l_810 = &g_397;
            int *l_812 = &l_757;
            int *l_813 = &l_758;
            int *l_814 = &l_805;
            int *l_815 = (void*)0;
            int *l_816 = &g_33.f0;
            int *l_818 = &l_772;
            int *l_819 = &l_772;
            int *l_820 = &g_130;
            int *l_821 = &l_808;
            int *l_822 = &l_789;
            int *l_823 = &l_817;
            int *l_824 = (void*)0;
            int *l_825 = &l_785;
            int *l_826 = &l_804;
            int *l_827 = &g_33.f0;
            int *l_828 = &l_778;
            int *l_829 = &l_805;
            int *l_830 = &l_789;
            int *l_831 = &l_769;
            int *l_832 = &g_130;
            int *l_833 = (void*)0;
            int *l_834 = &l_769;
            int *l_835 = &l_757;
            int *l_836 = &l_789;
            int *l_837 = &l_785;
            int *l_838 = &l_817;
            int *l_839 = &g_413;
            int *l_840 = &l_778;
            int *l_841 = (void*)0;
            int *l_842 = (void*)0;
            int *l_843 = (void*)0;
            int *l_844 = &l_808;
            int *l_845 = &l_757;
            int l_846 = 0x6F19421CL;
            int *l_847 = &g_33.f0;
            int *l_848 = &l_846;
            int l_849 = 0xDF17AD67L;
            int *l_850 = &g_33.f1;
            int *l_851 = &g_33.f0;
            int *l_852 = &l_772;
            int *l_853 = &l_758;
            int *l_854 = &l_789;
            int *l_855 = &l_846;
            int *l_856 = &l_789;
            int *l_857 = &l_804;
            int *l_858 = &l_808;
            int *l_859 = (void*)0;
            int *l_861 = (void*)0;
            int *l_862 = &l_860;
            int *l_863 = (void*)0;
            int *l_864 = &l_778;
            int *l_865 = (void*)0;
            int *l_867 = &g_674;
            int *l_868 = (void*)0;
            int *l_869 = &l_757;
            int *l_870 = &l_805;
            int *l_871 = &l_789;
            int *l_872 = &l_804;
            int *l_873 = (void*)0;
            int *l_874 = &l_785;
            int l_875 = (-7L);
            int *l_876 = (void*)0;
            int l_877 = 0x9F968000L;
            int *l_878 = &g_130;
            int l_880 = 6L;
            int *l_881 = &l_877;
            int *l_882 = &g_33.f1;
            int *l_883 = &g_33.f1;
            int *l_884 = &l_785;
            int *l_885 = &l_808;
            int *l_886 = &g_33.f0;
            int *l_888 = &g_674;
            int *l_889 = &l_785;
            int *l_890 = &g_130;
            int l_891 = 7L;
            int *l_892 = &l_817;
            int *l_893 = &l_879;
            int *l_894 = &l_880;
            int *l_895 = &l_805;
            int *l_896 = &l_875;
            int l_897 = 0xFF973CAEL;
            int *l_898 = &l_846;
            int *l_899 = &g_33.f0;
            int *l_900 = (void*)0;
            int *l_901 = &l_758;
            int *l_902 = &l_866;
            int *l_903 = &l_866;
            int *l_904 = &l_778;
            int *l_905 = &l_860;
            int *l_906 = &l_758;
            int l_907 = 0x083D8C6BL;
            int *l_908 = &g_130;
            int *l_909 = &l_846;
            int *l_910 = (void*)0;
            int *l_911 = &g_674;
            int *l_912 = (void*)0;
            int *l_913 = (void*)0;
            int *l_914 = (void*)0;
            int *l_915 = &l_860;
            int *l_916 = &l_804;
            int *l_918 = &l_860;
            int *l_919 = &l_849;
            int *l_920 = (void*)0;
            int l_921 = 0x047D0D4DL;
            int *l_922 = &l_805;
            int *l_923 = &l_757;
            int *l_924 = &l_860;
            int *l_925 = &l_778;
            int *l_926 = &l_778;
            int *l_927 = &l_860;
            int *l_928 = &g_33.f1;
            int *l_929 = &l_849;
            int *l_930 = &l_880;
            int *l_931 = &g_413;
            int *l_932 = &l_907;
            int *l_933 = (void*)0;
            int *l_934 = &l_897;
            int *l_935 = (void*)0;
            int *l_937 = &l_880;
            int *l_938 = &l_907;
            g_939++;
        }
        else
        {
            char l_944 = 0xA5L;
            g_397 = (safe_mod_func_int8_t_s_s(((*l_734) = l_944), (0UL ^ g_397)));
        }
        (*p_41) |= (p_42 & ((*l_945) = g_674));
        g_984++;
        if (((safe_mod_func_int8_t_s_s(p_42, ((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_40 == &g_445), (*l_972))), ((0xA2BEL == (*l_734)) && (safe_lshift_func_int16_t_s_s(((*l_963) , (safe_sub_func_int8_t_s_s((*g_167), (safe_rshift_func_int16_t_s_u((g_70 < (*p_40)), 3))))), (*l_959)))))) | (*l_734)))) <= p_42))
        {
            int l_1033 = 0x8C88D0A3L;
            struct S0 l_1091 = {0x1E9E20C5L,0x487A13F2L,0x16L,1UL};
            char l_1181 = (-1L);
            int l_1201 = 0x3A311576L;
            unsigned l_1252 = 4UL;
            for (g_70 = 0; (g_70 != 14); g_70++)
            {
                char *l_1003 = (void*)0;
                char *l_1004 = &g_196;
                int l_1032 = 0x8E6A8557L;
                int l_1036 = 0xA19D62B9L;
                short l_1082 = 5L;
                unsigned l_1083 = 0x340D29AFL;
                int l_1116 = (-4L);
                int l_1174 = 0L;
                struct S0 *l_1218 = &l_1091;
                int *l_1229 = (void*)0;
                int *l_1230 = &g_33.f0;
                int *l_1231 = (void*)0;
                int *l_1232 = &g_397;
                int *l_1233 = &l_917;
                int *l_1234 = &l_887;
                int *l_1235 = &g_397;
                int *l_1236 = &l_1091.f0;
                int *l_1237 = &l_789;
                int *l_1238 = (void*)0;
                int *l_1239 = &l_1091.f1;
                int *l_1240 = (void*)0;
                int *l_1241 = &l_1219;
                int *l_1242 = &g_413;
                int *l_1243 = &g_1005;
                int *l_1244 = &l_1219;
                int *l_1245 = (void*)0;
                int *l_1246 = (void*)0;
                int *l_1247 = &l_866;
                int *l_1248 = &g_33.f0;
                int *l_1249 = &l_860;
                int *l_1250 = &l_789;
                int *l_1251 = &g_397;
                if ((safe_sub_func_int32_t_s_s(((((g_1005 = ((*l_1004) |= (*g_167))) != (((*l_958) = (safe_lshift_func_int8_t_s_u((-7L), 5))) == (*p_41))) , g_350) , (g_196 == (safe_mod_func_uint32_t_u_u(g_660, l_1010)))), (((*l_945) = (*l_734)) >= (l_743 != (void*)0)))))
                {
                    unsigned l_1079 = 4294967294UL;
                    int l_1095 = 0L;
                    int l_1096 = 0L;
                    int l_1140 = (-8L);
                    int l_1200 = (-1L);
                    for (g_225 = 0; (g_225 > 20); g_225 = safe_add_func_int32_t_s_s(g_225, 1))
                    {
                        short l_1017 = 0x7DC1L;
                        int *l_1018 = &l_757;
                        int *l_1019 = &l_757;
                        int *l_1020 = &g_674;
                        int *l_1021 = &g_130;
                        int *l_1022 = &g_413;
                        int *l_1023 = &l_808;
                        int *l_1024 = (void*)0;
                        int *l_1025 = (void*)0;
                        int *l_1026 = &l_887;
                        int *l_1027 = (void*)0;
                        int *l_1029 = &g_674;
                        int *l_1030 = &l_1028;
                        int *l_1031 = (void*)0;
                        int *l_1034 = &l_1032;
                        int *l_1035 = &l_757;
                        int *l_1037 = &l_817;
                        int *l_1038 = &g_413;
                        int *l_1039 = &g_413;
                        int *l_1040 = &l_917;
                        int *l_1041 = &l_866;
                        int *l_1042 = &g_674;
                        int *l_1043 = &l_917;
                        int *l_1044 = &l_789;
                        int *l_1045 = &l_1028;
                        int *l_1046 = &l_866;
                        int *l_1047 = (void*)0;
                        int *l_1048 = &l_1028;
                        int *l_1049 = &l_1036;
                        int *l_1050 = (void*)0;
                        int *l_1051 = &g_397;
                        int *l_1052 = &l_1028;
                        int *l_1053 = &l_758;
                        int *l_1054 = &g_674;
                        int *l_1055 = &g_674;
                        int *l_1056 = &l_1033;
                        int *l_1057 = &l_860;
                        int *l_1058 = (void*)0;
                        int *l_1059 = &l_1033;
                        int *l_1060 = (void*)0;
                        int *l_1061 = &l_887;
                        int *l_1062 = &g_413;
                        int *l_1063 = &l_1032;
                        int *l_1064 = (void*)0;
                        int *l_1065 = &l_757;
                        int *l_1066 = (void*)0;
                        int *l_1067 = (void*)0;
                        int *l_1068 = &g_1005;
                        int *l_1069 = (void*)0;
                        int *l_1070 = (void*)0;
                        int *l_1071 = (void*)0;
                        int *l_1072 = (void*)0;
                        int *l_1073 = &l_1032;
                        int *l_1074 = (void*)0;
                        int *l_1075 = &l_817;
                        int *l_1076 = &l_757;
                        int *l_1077 = &l_758;
                        int *l_1078 = (void*)0;
                        (*l_979) |= (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_445, g_33.f3)), ((*l_945) = 7UL)));
                        g_13 = p_40;

                        ;
                        l_1079++;
                        l_1083++;
                    }
                    if ((*p_41))
                        break;
                    if (((p_43 == ((void*)0 == l_1086)) > ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_1091 , ((*l_764) = ((*l_748) = ((safe_sub_func_int8_t_s_s(p_42, ((*l_1004) = (g_33.f2 >= g_984)))) <= ((*l_982) & p_43))))), 0xDBL)), 4UL)) , (**g_166))))
                    {
                        int l_1094 = 0x3E8A9B76L;
                        int *l_1097 = &g_130;
                        int *l_1098 = &g_1005;
                        int *l_1099 = &l_879;
                        int *l_1100 = &l_887;
                        int *l_1101 = &l_1095;
                        int *l_1102 = &l_758;
                        int *l_1103 = &l_1028;
                        int *l_1104 = &g_674;
                        int l_1105 = (-9L);
                        int *l_1106 = (void*)0;
                        int *l_1107 = (void*)0;
                        int *l_1108 = &g_33.f1;
                        int *l_1109 = &l_789;
                        int *l_1110 = &g_413;
                        int *l_1111 = &l_1105;
                        int *l_1112 = &l_789;
                        int *l_1113 = (void*)0;
                        int *l_1114 = &g_674;
                        int *l_1115 = &l_917;
                        int *l_1117 = &l_1096;
                        int *l_1118 = &l_1091.f1;
                        int *l_1119 = &g_397;
                        int *l_1120 = &l_1032;
                        int *l_1121 = &g_413;
                        int *l_1122 = (void*)0;
                        int *l_1123 = &l_757;
                        int *l_1124 = &l_866;
                        int *l_1125 = &l_1033;
                        int *l_1126 = &g_413;
                        int *l_1127 = &l_1032;
                        int *l_1128 = &l_1095;
                        int *l_1129 = &l_1091.f0;
                        int *l_1130 = (void*)0;
                        int *l_1131 = (void*)0;
                        int *l_1132 = (void*)0;
                        int *l_1133 = &l_817;
                        int *l_1134 = &l_1091.f1;
                        int *l_1135 = &l_1091.f0;
                        int l_1136 = 0L;
                        int *l_1137 = &g_33.f0;
                        int *l_1138 = &l_1028;
                        int *l_1139 = (void*)0;
                        int *l_1141 = &l_1116;
                        int *l_1142 = &l_860;
                        int *l_1143 = &g_33.f0;
                        int *l_1144 = &g_33.f0;
                        int *l_1145 = &l_1136;
                        int *l_1146 = (void*)0;
                        int *l_1147 = &l_879;
                        int *l_1148 = &l_1095;
                        int *l_1149 = (void*)0;
                        int *l_1150 = &g_674;
                        int *l_1151 = (void*)0;
                        int *l_1152 = &l_1091.f1;
                        int *l_1153 = &g_413;
                        int *l_1154 = &g_1005;
                        int *l_1155 = &g_674;
                        int *l_1156 = (void*)0;
                        int *l_1157 = &l_1032;
                        int *l_1158 = &g_33.f1;
                        int *l_1159 = &g_33.f1;
                        int *l_1160 = &l_808;
                        int *l_1161 = &l_1105;
                        int *l_1162 = (void*)0;
                        int *l_1163 = &g_130;
                        int *l_1165 = &l_789;
                        int *l_1166 = &l_1096;
                        int *l_1168 = &l_817;
                        int *l_1169 = (void*)0;
                        int *l_1170 = (void*)0;
                        int *l_1171 = &g_674;
                        int *l_1172 = &g_130;
                        int *l_1173 = &l_1033;
                        int *l_1175 = &g_33.f0;
                        int *l_1176 = (void*)0;
                        int *l_1177 = &l_1091.f0;
                        int *l_1178 = &g_413;
                        int *l_1179 = &l_887;
                        int *l_1180 = &l_1116;
                        int *l_1182 = &g_33.f0;
                        int *l_1183 = (void*)0;
                        int *l_1184 = &g_33.f0;
                        int *l_1185 = (void*)0;
                        int *l_1186 = &l_808;
                        int *l_1187 = &l_917;
                        int *l_1188 = (void*)0;
                        int *l_1189 = (void*)0;
                        int *l_1190 = (void*)0;
                        int *l_1191 = &l_817;
                        int *l_1192 = &g_413;
                        int *l_1193 = &l_1091.f1;
                        int *l_1194 = &l_1105;
                        int *l_1195 = &l_1136;
                        int *l_1196 = &g_674;
                        g_1197--;
                        g_1202--;
                    }
                    else
                    {
                        (*l_951) &= (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint32_t_u_u(g_660, (0L > ((*l_963) <= 0x2BL))))));
                    }
                    if ((safe_mul_func_int8_t_s_s(((~(safe_mod_func_int8_t_s_s((l_1033 &= (*g_167)), (0x12L | l_1096)))) != (((((*l_945)++) , ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((-1L) ^ (((void*)0 != l_1218) > (*l_981))), l_1219)), l_1079)) != g_663)) , g_1220) , 0x27L)), p_43)))
                    {
                        if (g_811)
                            break;
                    }
                    else
                    {
                        int **l_1221 = (void*)0;
                        int **l_1222 = &l_965;
                        unsigned short l_1223 = 1UL;
                        if (l_1079)
                            break;
                        (*l_1222) = p_41;


                        (*l_958) ^= ((l_1223 != (&g_309 != p_40)) < (((l_1224 ^ 247UL) < (l_1091.f1 == (((*l_955) = (((**l_1222) = l_1083) , l_1174)) , ((p_42 , (**g_166)) | l_1140)))) , l_1091.f1));
                    }
                }
                else
                {
                    (*l_968) = (-1L);
                    return (*p_41);
                }
                for (l_1091.f3 = 29; (l_1091.f3 != 43); ++l_1091.f3)
                {
                    struct S0 *l_1227 = &g_33;
                    g_1228 = ((*l_1227) = func_30(g_199));
                    if (g_674)
                        break;
                    if ((*p_41))
                        break;
                    (*l_969) &= (*p_40);
                }
                --l_1252;
            }


        }
        else
        {
            unsigned char *l_1260 = &g_1228.f2;
            struct S0 l_1266 = {0x02168895L,0L,0UL,4294967288UL};
            int l_1334 = 0L;
            int l_1401 = 0xBFC4B0FCL;
            int l_1421 = (-1L);
            int *l_1476 = &l_1266.f1;
            int *l_1477 = &l_1401;
            int *l_1478 = (void*)0;
            int *l_1479 = &g_33.f1;
            int *l_1480 = &l_1283.f0;
            int *l_1481 = &l_1334;
            int *l_1482 = &l_887;
            int *l_1483 = &g_1220;
            int *l_1484 = &l_808;
            int *l_1485 = &g_1220;
            int *l_1486 = (void*)0;
            int *l_1487 = &g_33.f0;
            int *l_1488 = (void*)0;
            int *l_1489 = (void*)0;
            int *l_1490 = (void*)0;
            int *l_1491 = &l_1219;
            unsigned l_1492 = 4UL;
            if ((*p_40))
            {
                char ***l_1265 = &g_166;
                struct S0 *l_1268 = (void*)0;
                int l_1282 = 0x5A120338L;
                int l_1289 = (-1L);
                struct S0 *l_1321 = (void*)0;
                char l_1342 = 0xC1L;
                int *l_1343 = &l_1164;
                int *l_1344 = (void*)0;
                int *l_1345 = &l_1282;
                int *l_1346 = &g_33.f1;
                int *l_1347 = (void*)0;
                int *l_1348 = &g_1005;
                int *l_1349 = &l_1282;
                int *l_1350 = (void*)0;
                int *l_1351 = &g_674;
                int *l_1352 = &l_1283.f1;
                int *l_1353 = &l_917;
                int *l_1354 = &l_808;
                int *l_1355 = (void*)0;
                int *l_1356 = &l_789;
                int *l_1357 = (void*)0;
                int *l_1358 = &g_674;
                int *l_1359 = &g_130;
                int *l_1360 = &l_879;
                int *l_1361 = &g_33.f1;
                int *l_1362 = (void*)0;
                int *l_1363 = &g_1220;
                int *l_1364 = &g_33.f0;
                int *l_1365 = (void*)0;
                int *l_1366 = &l_1282;
                int *l_1367 = &l_1167;
                int *l_1368 = (void*)0;
                int *l_1369 = &g_33.f1;
                int *l_1370 = (void*)0;
                int *l_1371 = &l_1282;
                int *l_1372 = &g_1228.f0;
                int *l_1373 = &g_1228.f1;
                int *l_1374 = &l_1283.f0;
                int *l_1375 = &g_1228.f1;
                int *l_1376 = (void*)0;
                int *l_1377 = &l_1283.f0;
                int *l_1378 = &l_917;
                int *l_1379 = &l_1289;
                int *l_1380 = &l_789;
                int *l_1381 = &l_917;
                int *l_1382 = &l_887;
                int *l_1383 = &l_887;
                int *l_1384 = &g_130;
                int *l_1385 = &g_674;
                int l_1386 = (-6L);
                int *l_1387 = &l_917;
                int *l_1388 = (void*)0;
                int *l_1389 = (void*)0;
                int *l_1390 = &l_1282;
                int *l_1391 = &g_1005;
                int *l_1392 = (void*)0;
                int *l_1393 = (void*)0;
                int *l_1394 = &l_1283.f1;
                int *l_1395 = &g_397;
                int l_1396 = (-1L);
                int *l_1397 = &l_1396;
                int *l_1398 = &g_1220;
                int *l_1399 = &l_1028;
                int *l_1400 = &g_1005;
                int *l_1402 = &g_1228.f0;
                int *l_1403 = (void*)0;
                int *l_1404 = &l_1167;
                int *l_1405 = &l_1289;
                int *l_1406 = (void*)0;
                int *l_1407 = &g_130;
                int l_1408 = 1L;
                int *l_1409 = &g_1228.f0;
                int *l_1410 = (void*)0;
                int *l_1411 = &l_1219;
                int *l_1412 = &l_917;
                int *l_1413 = &l_808;
                int *l_1414 = &l_860;
                int *l_1415 = &l_866;
                int *l_1416 = &l_817;
                int *l_1417 = &l_860;
                int *l_1418 = (void*)0;
                int *l_1419 = &g_674;
                int *l_1420 = &g_33.f0;
                int *l_1422 = (void*)0;
                int *l_1423 = (void*)0;
                int *l_1424 = &g_1228.f0;
                int *l_1425 = &l_1396;
                int *l_1426 = (void*)0;
                int *l_1427 = (void*)0;
                int *l_1428 = &l_758;
                int *l_1429 = &l_1028;
                int *l_1430 = &l_1266.f1;
                int *l_1431 = &g_1220;
                int l_1432 = 0x48276052L;
                int *l_1433 = &l_789;
                int *l_1434 = &l_1421;
                int l_1435 = 0x798CDC8FL;
                int *l_1436 = (void*)0;
                int *l_1437 = (void*)0;
                int *l_1438 = &g_397;
                int *l_1439 = &g_33.f1;
                int *l_1440 = (void*)0;
                int *l_1441 = (void*)0;
                int *l_1442 = &l_1386;
                int *l_1443 = &l_1283.f0;
                int *l_1444 = &g_130;
                int *l_1445 = &l_1396;
                int *l_1446 = &l_1283.f0;
                int *l_1447 = &l_917;
                int *l_1448 = &l_879;
                int *l_1449 = &l_887;
                if ((*p_40))
                {
                    unsigned char *l_1259 = &g_350;
                    int l_1267 = 0xA61A511FL;
                    if ((safe_mod_func_int8_t_s_s((((*l_745) = ((((l_1259 != l_1260) | p_42) ^ ((safe_add_func_int32_t_s_s((p_43 > (safe_lshift_func_uint8_t_u_u(((void*)0 != l_1265), ((*l_764) = p_43)))), (l_1266 , 0x12E7CA1BL))) <= 0x19L)) || l_1267)) , p_43), 7UL)))
                    {
                        (*l_952) = ((void*)0 != p_41);
                    }
                    else
                    {
                        struct S0 **l_1269 = &l_1268;
                        int l_1280 = 0x23EA1DD0L;
                        struct S0 *l_1284 = (void*)0;
                        struct S0 *l_1285 = (void*)0;
                        struct S0 *l_1286 = &g_33;
                        (*l_1269) = l_1268;
                        (*l_1286) = ((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(p_43, 2)) , (safe_mul_func_uint16_t_u_u(l_1280, (*l_734)))) > ((l_1281 && ((~8UL) ^ g_199)) != (*l_734))), ((**g_166) = l_1282))), (4294967286UL || (-1L)))) | l_1266.f0), 4294967295UL)) , l_1283);
                        (*l_946) = (*p_41);
                    }
                    return (*p_41);
                }
                else
                {
                    unsigned l_1318 = 4294967292UL;
                    char **l_1341 = (void*)0;
                    for (l_817 = 26; (l_817 > (-18)); l_817--)
                    {
                        int *l_1290 = &g_1005;
                        int *l_1291 = &l_1283.f1;
                        int *l_1292 = &l_879;
                        int *l_1293 = &l_1283.f1;
                        int *l_1294 = (void*)0;
                        int *l_1295 = (void*)0;
                        int *l_1296 = (void*)0;
                        int *l_1297 = (void*)0;
                        int *l_1298 = (void*)0;
                        int *l_1299 = &l_917;
                        int *l_1300 = &g_1228.f0;
                        int l_1301 = 0x1472A104L;
                        int *l_1302 = &l_917;
                        int *l_1303 = &l_887;
                        int *l_1304 = &g_1228.f1;
                        int *l_1305 = &l_808;
                        int *l_1306 = (void*)0;
                        int *l_1307 = &g_1220;
                        int *l_1308 = &l_1266.f0;
                        int l_1309 = 7L;
                        int *l_1310 = &l_1301;
                        int *l_1311 = (void*)0;
                        int *l_1312 = &g_33.f1;
                        int *l_1313 = &l_757;
                        int *l_1314 = &l_860;
                        int *l_1315 = &l_789;
                        int *l_1316 = &g_413;
                        int *l_1317 = (void*)0;
                        struct S0 **l_1322 = &l_1268;
                        l_1318--;
                        if (l_1282)
                            break;
                        (*l_1322) = l_1321;
                    }
                    if ((*l_734))
                    {
                        int l_1323 = 0x95A49290L;
                        int l_1324 = 0x747352B2L;
                        unsigned short l_1325 = 0x6ACCL;
                        ++l_1325;
                    }
                    else
                    {
                        (*l_974) ^= (safe_add_func_uint32_t_u_u((g_1220 , (safe_lshift_func_int16_t_s_u((g_539 , ((safe_mod_func_int32_t_s_s(l_1334, (safe_div_func_uint16_t_u_u((((*l_743) |= 0x54BDL) && (g_33.f0 != (safe_div_func_int32_t_s_s((((*l_1265) = ((safe_mul_func_uint8_t_u_u((g_1228.f3 & (*l_969)), (**g_166))) , l_1341)) == (void*)0), g_225)))), g_199)))) , 0x9064L)), (*l_734)))), g_1005));

                        ;
                    }

                    ;
                }

                ;
                g_1450++;
            }
            else
            {
                unsigned l_1473 = 9UL;
                for (l_866 = 0; (l_866 <= 28); l_866 = safe_add_func_int32_t_s_s(l_866, 8))
                {
                    int *l_1455 = &l_789;
                    int *l_1456 = &l_860;
                    int *l_1457 = &g_1228.f0;
                    int *l_1458 = &l_1028;
                    int *l_1459 = &l_1401;
                    int *l_1460 = &g_33.f1;
                    int *l_1461 = &g_413;
                    int *l_1462 = &l_1283.f1;
                    int *l_1463 = &l_917;
                    int *l_1464 = (void*)0;
                    int *l_1465 = (void*)0;
                    int *l_1466 = (void*)0;
                    int *l_1467 = &l_789;
                    int *l_1468 = &g_1220;
                    int *l_1469 = &l_1421;
                    int *l_1470 = &l_1164;
                    int *l_1471 = &l_887;
                    int *l_1472 = &g_33.f1;
                    if ((*l_734))
                        break;
                    l_1473--;
                    l_1471 = (void*)0;

                    ;
                }
            }

            ;
            --l_1492;
        }

        ;

    }
    else
    {
        int **l_1495 = &l_734;
        int *l_1496 = &l_887;
        int *l_1497 = &g_1220;
        int *l_1498 = &l_789;
        int *l_1499 = &l_758;
        int *l_1500 = &l_860;
        int *l_1501 = &g_1005;
        int *l_1502 = &g_1228.f0;
        int *l_1503 = &l_860;
        int *l_1504 = &g_1005;
        int *l_1505 = (void*)0;
        int *l_1506 = &g_1005;
        int *l_1507 = &g_1228.f1;
        int *l_1508 = &g_1005;
        int *l_1509 = &l_860;
        int *l_1510 = &g_33.f0;
        int *l_1511 = &l_917;
        int *l_1512 = &g_130;
        int *l_1513 = &l_808;
        int *l_1514 = &l_887;
        int *l_1515 = (void*)0;
        int l_1516 = 0x1C22A243L;
        int *l_1517 = &l_758;
        int *l_1518 = &l_860;
        int *l_1519 = &l_758;
        int *l_1520 = &l_808;
        int l_1521 = 0L;
        int *l_1522 = &g_413;
        int *l_1523 = &l_1516;
        int *l_1524 = &l_1521;
        int *l_1525 = (void*)0;
        int *l_1526 = &g_1220;
        int *l_1527 = &l_866;
        int *l_1528 = &l_887;
        int *l_1529 = &l_879;
        int *l_1530 = (void*)0;
        int *l_1531 = &l_860;
        int *l_1532 = &l_879;
        int *l_1533 = &l_879;
        int *l_1534 = &g_130;
        int *l_1535 = &g_33.f1;
        int *l_1536 = &l_1516;
        int *l_1537 = &l_1516;
        int *l_1538 = &l_758;
        int *l_1539 = &g_33.f1;
        int *l_1540 = (void*)0;
        int *l_1541 = &l_866;
        int *l_1542 = &l_860;
        int *l_1543 = &g_674;
        int *l_1544 = &g_413;
        int *l_1545 = &l_879;
        int *l_1546 = &l_789;
        int *l_1547 = &l_860;
        int *l_1548 = &g_1005;
        int *l_1549 = &g_130;
        int *l_1550 = &g_1228.f0;
        int *l_1551 = &l_1516;
        int *l_1552 = &l_758;
        int *l_1553 = &g_33.f1;
        int *l_1554 = &l_887;
        int *l_1555 = &g_1220;
        int *l_1556 = (void*)0;
        int *l_1557 = &l_917;
        int *l_1558 = &l_808;
        int l_1559 = 0x767B92A3L;
        int *l_1560 = &g_1005;
        int *l_1561 = &g_413;
        int *l_1562 = &l_1516;
        int *l_1563 = &g_33.f1;
        int *l_1564 = &g_1220;
        int l_1565 = 0xF5FDAC4DL;
        int l_1566 = 0L;
        int *l_1567 = &l_1559;
        int *l_1568 = &l_866;
        int *l_1569 = (void*)0;
        int *l_1570 = &g_1228.f1;
        int *l_1571 = &g_397;
        int *l_1572 = &l_1521;
        int *l_1573 = &l_860;
        int *l_1574 = &g_1228.f1;
        int *l_1575 = &g_674;
        int *l_1576 = &g_1220;
        int *l_1577 = &g_1005;
        int *l_1578 = &l_917;
        int *l_1579 = &l_789;
        int *l_1580 = &g_1220;
        short l_1581 = 5L;
        int *l_1582 = &l_789;
        int *l_1583 = &l_1521;
        int *l_1584 = (void*)0;
        int l_1585 = 0x70422D58L;
        int *l_1586 = &g_413;
        int *l_1587 = (void*)0;
        int *l_1588 = (void*)0;
        int *l_1589 = (void*)0;
        int *l_1590 = (void*)0;
        int *l_1591 = (void*)0;
        int *l_1592 = &g_1228.f1;
        int *l_1593 = &g_397;
        int *l_1594 = &l_1516;
        int l_1595 = 0x0C1AF16EL;
        int *l_1596 = &g_1228.f1;
        int *l_1597 = &g_1228.f1;
        int *l_1598 = &l_758;
        int *l_1599 = &l_758;
        int *l_1600 = &l_1521;
        int *l_1601 = &l_1595;
        int *l_1602 = &g_130;
        int *l_1603 = &l_887;
        int *l_1604 = &g_1005;
        int *l_1605 = &g_130;
        int *l_1606 = (void*)0;
        int *l_1607 = (void*)0;
        int *l_1608 = &l_1566;
        int *l_1609 = &l_789;
        int *l_1610 = &g_413;
        int *l_1611 = &l_917;
        int *l_1612 = &l_879;
        int *l_1613 = (void*)0;
        int *l_1614 = &l_1585;
        int *l_1615 = (void*)0;
        int *l_1616 = (void*)0;
        int *l_1617 = &g_413;
        int *l_1618 = &l_758;
        int *l_1619 = &l_917;
        int *l_1620 = &g_1228.f0;
        int *l_1621 = &l_1516;
        (*l_1495) = p_40;

        ;
        ++g_1622;
    }

    ;
    ;
    return g_663;
}







static int * func_44(unsigned p_45, int * p_46, char p_47, unsigned p_48)
{
    unsigned l_203 = 8UL;
    short *l_206 = &g_58;
    unsigned short *l_207 = (void*)0;
    int l_208 = 0x46AFD119L;
    unsigned short *l_209 = (void*)0;
    unsigned short *l_210 = &g_81;
    int *l_213 = &g_33.f1;
    unsigned char *l_224 = &g_225;
    struct S0 l_230 = {-1L,1L,0x41L,0x8449A313L};
    int l_433 = 0x0006CAC7L;
    int l_440 = 0x50D8D78FL;
    unsigned l_473 = 0xD1685AF8L;
    short l_627 = 0x7BB7L;
    (*p_46) = (*g_13);
    (*l_213) ^= (((*l_206) &= (l_203 && (safe_rshift_func_uint8_t_u_u(g_14, 2)))) < (((*l_210)--) == g_130));
    if ((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((g_33.f3 || ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((func_30(g_196) , 9L), ((*g_167) && ((((*l_224)--) <= g_33.f2) == g_196)))) <= (*l_213)) , ((*g_167) = (p_47 |= (*g_167)))), 4)), (*l_213))) < 0x55L)), 13)) && 0L) , (*g_167)) | p_48), 0xEFL)))
    {
        struct S0 l_245 = {0xB3DE1EFCL,0x47C869DDL,0x84L,0xAC962BC7L};
        unsigned char *l_278 = &l_245.f2;
        int *l_281 = &g_33.f1;
        if (((*p_46) &= (p_45 == (safe_lshift_func_int16_t_s_u(4L, 8)))))
        {
            int **l_231 = &l_213;
            int l_250 = 0L;
            int l_293 = (-1L);
            (*l_231) = func_49(l_230);

            ;
            if ((((*p_46) , (-7L)) & (safe_mul_func_int8_t_s_s(0xBAL, (*g_167)))))
            {
                struct S0 l_246 = {9L,-1L,255UL,0x9A281D64L};
                char **l_249 = &g_167;
                if ((*g_13))
                {
                    unsigned l_273 = 0x70EE5EE1L;
                    for (g_33.f0 = 0; (g_33.f0 >= (-23)); g_33.f0 = safe_sub_func_uint8_t_u_u(g_33.f0, 1))
                    {
                        return &g_130;


                    }
                    for (g_70 = 27; (g_70 < 9); --g_70)
                    {
                        unsigned *l_240 = (void*)0;
                        unsigned *l_241 = &g_33.f3;
                        unsigned *l_242 = &l_230.f3;
                        int *l_243 = &g_33.f0;
                        struct S0 *l_244 = &g_33;
                        g_33.f1 &= ((*l_243) &= ((safe_add_func_int32_t_s_s((-10L), ((*l_242) = ((*l_241) = p_48)))) || (*p_46)));
                        (*l_231) = p_46;
                        (*l_244) = l_230;
                    }
                    (*l_231) = func_49(l_245);
                    if (((**l_231) = (*g_13)))
                    {
                        int **l_247 = &g_13;
                        char ***l_248 = (void*)0;
                        int *l_251 = (void*)0;
                        int *l_252 = &l_245.f1;
                        int *l_253 = &l_246.f1;
                        int *l_254 = &l_246.f0;
                        int *l_255 = &g_33.f1;
                        int *l_256 = &l_250;
                        int *l_257 = &l_246.f0;
                        int *l_258 = (void*)0;
                        int *l_259 = &l_246.f0;
                        int *l_260 = &l_245.f0;
                        int *l_261 = &g_130;
                        int *l_262 = &l_246.f0;
                        int *l_263 = &l_230.f1;
                        int *l_264 = (void*)0;
                        int *l_265 = &l_230.f1;
                        int *l_266 = &l_208;
                        int *l_267 = &l_208;
                        int *l_268 = &l_245.f0;
                        int *l_269 = &l_230.f0;
                        int *l_270 = &g_33.f0;
                        int *l_271 = &l_245.f0;
                        int *l_272 = &l_250;
                        (*l_247) = ((*l_231) = func_49(l_246));

                        ;
                        l_249 = &g_167;
                        ++l_273;
                        (*p_46) = (safe_rshift_func_uint8_t_u_u(0xB9L, 6));
                    }
                    else
                    {
                        (*l_213) = (*g_13);
                    }

                    ;
                }
                else
                {
                    (*p_46) = (l_278 != &g_225);
                    (*l_231) = &g_130;
                }

                ;
                return &g_14;


            }
            else
            {
                struct S0 *l_280 = &g_33;
                struct S0 **l_279 = &l_280;
                (*l_279) = &l_245;

                ;
                (*l_231) = l_281;

                ;
                (*l_281) = ((**l_231) < (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((g_225 > (((0x78L | (safe_rshift_func_int16_t_s_u((**l_231), 2))) > (**g_166)) <= (((safe_mul_func_uint8_t_u_u(((p_47 != (g_130 > ((*l_210) = g_58))) || (((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((g_58 <= (*g_13)) > p_47), g_33.f3)), p_45)) , &g_14) == (void*)0)), 0xBFL)) | l_293) , p_47))), 3)))));
            }

            ;
        }
        else
        {
            int l_296 = 1L;
            char *l_307 = (void*)0;
            int l_332 = 0L;
            (*p_46) |= (*l_281);
            if ((safe_mod_func_int32_t_s_s((5UL <= (l_296 , ((safe_div_func_uint8_t_u_u((g_81 , p_45), (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((1L ^ g_70) > (-6L)), 9)), 1)))) != ((*p_46) = (safe_rshift_func_uint8_t_u_s((*l_281), ((*g_13) && (*p_46)))))))), g_33.f2)))
            {
                int *l_308 = &g_309;
                int l_320 = 0xD8EE761CL;
                (*p_46) ^= ((safe_div_func_uint8_t_u_u(p_48, (-5L))) ^ ((*l_213) = (((*l_308) = ((void*)0 != l_307)) , (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0x64L, (safe_div_func_int16_t_s_s(((*l_206) = (safe_sub_func_uint32_t_u_u(g_6, (g_6 < ((void*)0 != l_278))))), (*l_281))))), l_296)), 0UL)))));
                g_13 = &g_130;

                ;
                if ((*p_46))
                {
                    (*l_281) &= 0xC682F6D3L;
                }
                else
                {
                    int *l_321 = (void*)0;
                    int *l_322 = &l_245.f0;
                    int *l_323 = &l_320;
                    int l_324 = 5L;
                    int *l_325 = &l_320;
                    int *l_326 = &l_245.f0;
                    int *l_327 = &l_296;
                    int *l_328 = &l_230.f1;
                    int *l_329 = &l_245.f1;
                    int *l_330 = &l_245.f1;
                    int *l_331 = &l_245.f0;
                    int *l_333 = &l_296;
                    int *l_334 = &l_208;
                    int *l_335 = (void*)0;
                    int *l_336 = (void*)0;
                    int *l_337 = &l_332;
                    int *l_338 = &g_33.f1;
                    int *l_339 = &g_33.f0;
                    int *l_340 = (void*)0;
                    int *l_341 = &l_230.f1;
                    int *l_342 = &l_245.f1;
                    int *l_343 = &g_33.f1;
                    int *l_344 = &g_33.f1;
                    int *l_345 = &l_230.f0;
                    int *l_346 = &g_130;
                    int *l_347 = &l_296;
                    int *l_348 = &l_245.f0;
                    int *l_349 = &l_245.f0;
                    g_350++;
                }
                (*l_213) = (*p_46);
            }
            else
            {
                int **l_353 = &l_213;
                struct S0 *l_355 = &g_33;
                struct S0 **l_354 = &l_355;
                (*l_353) = p_46;

                ;
                (*l_354) = &g_33;
            }

            ;
            ;
        }

        ;
        ;
    }
    else
    {
        unsigned short l_364 = 6UL;
        int *l_454 = &g_309;
        int *l_455 = &g_309;
        struct S0 *l_466 = &g_33;
        int l_547 = 0x917BF7F8L;
        int l_653 = (-2L);
        int *l_697 = (void*)0;
        int *l_698 = &l_547;
        int *l_699 = (void*)0;
        int *l_700 = &l_440;
        int *l_701 = &l_440;
        int *l_702 = &g_674;
        int *l_703 = &g_397;
        int *l_704 = &l_433;
        int *l_705 = &l_440;
        int *l_706 = &l_433;
        int *l_707 = &l_208;
        int *l_708 = (void*)0;
        int *l_709 = &l_653;
        int *l_710 = &g_413;
        int *l_711 = &g_33.f0;
        int l_712 = 0x7772E995L;
        int *l_713 = &l_653;
        int *l_714 = &l_230.f0;
        int *l_715 = &l_653;
        int *l_716 = &l_712;
        int *l_717 = &g_33.f0;
        int *l_718 = (void*)0;
        int *l_719 = &l_712;
        int *l_720 = &l_547;
        int *l_721 = &g_33.f0;
        int *l_722 = &l_440;
        int *l_723 = &g_33.f1;
        int *l_724 = &l_712;
        int l_725 = (-1L);
        int *l_726 = (void*)0;
        int *l_727 = (void*)0;
        int *l_728 = &g_674;
        int *l_729 = &g_33.f1;
        int *l_730 = &g_674;
        unsigned l_731 = 0UL;
        for (p_45 = 0; (p_45 <= 30); p_45++)
        {
            int **l_358 = &g_13;
            (*l_358) = &g_14;
        }
        for (g_199 = 0; (g_199 != 19); g_199 = safe_add_func_uint8_t_u_u(g_199, 1))
        {
            int *l_361 = &g_130;
            int *l_362 = (void*)0;
            int *l_363 = &l_230.f0;
            int l_374 = (-1L);
            struct S0 *l_450 = (void*)0;
            unsigned char *l_458 = &g_350;
            int l_517 = (-7L);
            int l_532 = 0x2F378EE9L;
            int l_564 = 0x168314A8L;
            int l_607 = 0x00C481D8L;
            ++l_364;
            for (l_208 = (-9); (l_208 < (-16)); l_208 = safe_sub_func_int16_t_s_s(l_208, 1))
            {
                struct S0 *l_372 = &l_230;
                int *l_375 = (void*)0;
                int *l_376 = (void*)0;
                int *l_377 = &g_33.f1;
                int *l_378 = &l_374;
                int *l_379 = &g_33.f0;
                int *l_380 = &g_130;
                int *l_381 = (void*)0;
                int *l_382 = &l_230.f1;
                int *l_383 = &l_374;
                int *l_384 = (void*)0;
                int *l_385 = &g_33.f0;
                int *l_386 = (void*)0;
                int *l_387 = &g_130;
                int *l_388 = &l_230.f1;
                int *l_389 = &g_130;
                int *l_390 = &g_130;
                int *l_391 = &g_33.f0;
                int *l_392 = &l_230.f0;
                int *l_393 = (void*)0;
                int *l_394 = (void*)0;
                int *l_395 = (void*)0;
                int *l_396 = &l_230.f1;
                int *l_398 = &g_397;
                int *l_399 = &g_130;
                int *l_400 = &l_230.f0;
                int *l_401 = (void*)0;
                int *l_402 = &g_33.f1;
                int *l_403 = (void*)0;
                int *l_404 = &g_33.f0;
                int *l_405 = &g_397;
                int *l_406 = &l_230.f1;
                int *l_407 = &g_130;
                int *l_408 = &l_230.f1;
                int *l_409 = (void*)0;
                int *l_410 = &l_230.f1;
                int l_411 = 0L;
                int *l_412 = &g_33.f0;
                int *l_414 = &g_130;
                int *l_415 = &g_397;
                int *l_416 = &g_397;
                int *l_417 = &l_230.f1;
                int *l_418 = &l_230.f0;
                int *l_419 = &l_230.f1;
                int *l_420 = &g_397;
                int *l_421 = &g_130;
                int *l_422 = &l_411;
                int *l_423 = &g_413;
                int *l_424 = &l_374;
                int *l_425 = &g_397;
                int *l_426 = &l_411;
                int *l_427 = &g_130;
                int *l_428 = &g_33.f1;
                int *l_429 = &g_413;
                int *l_430 = &g_33.f0;
                int *l_431 = &l_411;
                int *l_432 = &l_230.f1;
                int *l_434 = &l_433;
                int *l_435 = &g_33.f0;
                int *l_436 = &g_413;
                int *l_438 = &l_230.f0;
                int *l_439 = &g_130;
                int *l_441 = &g_130;
                int *l_442 = &l_230.f1;
                int *l_443 = &g_130;
                int *l_444 = &l_433;
                for (g_350 = 0; (g_350 >= 23); g_350 = safe_add_func_int16_t_s_s(g_350, 3))
                {
                    struct S0 *l_371 = &l_230;
                    int **l_373 = &g_13;
                    (*l_371) = l_230;
                    (*p_46) |= ((void*)0 == l_372);
                    (*l_373) = (void*)0;

                    ;
                }
                g_445--;
            }
            for (p_45 = 0; (p_45 >= 43); p_45 = safe_add_func_int16_t_s_s(p_45, 2))
            {
                struct S0 **l_451 = &l_450;
                (*l_451) = l_450;
            }
            if ((safe_mul_func_uint16_t_u_u(((l_455 = (l_454 = p_46)) == &g_309), (safe_add_func_uint8_t_u_u(248UL, ((void*)0 == l_458))))))
            {
                unsigned l_459 = 0xB859E398L;
                int l_576 = 5L;
                int l_662 = 0x5FF9862DL;
                l_459--;
                if ((((*l_206) = (l_459 , ((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((l_450 = l_466) != (void*)0) , ((safe_mul_func_uint8_t_u_u(g_33.f3, l_364)) , (safe_lshift_func_uint16_t_u_u((l_473 = (safe_lshift_func_int8_t_s_u(0x5EL, 0))), p_45)))), ((safe_mod_func_int8_t_s_s(((**g_166) ^= 2L), (((*p_46) | l_459) && 0x6EE4L))) && 0xA6969CC8L))), (-5L))) , g_413))) || g_445))
                {
                    unsigned short *l_481 = &l_364;
                    int l_482 = 0xFB07EE75L;
                    int l_483 = 0x99175821L;
                    int l_502 = 0x5C94A689L;
                    int *l_545 = &l_517;
                    int *l_546 = (void*)0;
                    int *l_548 = (void*)0;
                    int *l_549 = &g_413;
                    int *l_550 = &g_397;
                    int *l_551 = &g_397;
                    int *l_552 = &g_413;
                    int *l_553 = &g_33.f1;
                    int *l_554 = (void*)0;
                    int *l_555 = &l_440;
                    int *l_556 = &l_483;
                    int *l_557 = &l_502;
                    int *l_558 = &l_517;
                    int *l_559 = &g_397;
                    int *l_560 = &g_33.f0;
                    int *l_561 = (void*)0;
                    int *l_562 = &g_33.f1;
                    int *l_563 = &l_374;
                    int *l_565 = &l_440;
                    int *l_566 = &l_433;
                    int *l_567 = &l_532;
                    int *l_568 = (void*)0;
                    if (((safe_div_func_uint8_t_u_u((*l_363), (safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(((g_33 , p_48) < l_364), p_47)))))) || ((((*l_213) , 252UL) > (((p_47 , &g_81) == l_481) , g_350)) && g_445)))
                    {
                        int *l_484 = (void*)0;
                        int *l_485 = &l_230.f0;
                        int *l_486 = &l_483;
                        int *l_487 = &l_230.f1;
                        int *l_488 = &l_440;
                        int *l_489 = &l_482;
                        int *l_490 = (void*)0;
                        int *l_491 = (void*)0;
                        int *l_492 = &l_208;
                        int *l_493 = (void*)0;
                        int *l_494 = &g_413;
                        int *l_495 = (void*)0;
                        int *l_496 = &g_130;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_230.f1;
                        int *l_499 = (void*)0;
                        int *l_500 = (void*)0;
                        int *l_501 = &l_230.f1;
                        int *l_503 = (void*)0;
                        int *l_504 = (void*)0;
                        int *l_505 = (void*)0;
                        int *l_506 = &l_433;
                        int *l_507 = &l_230.f0;
                        int *l_508 = (void*)0;
                        int *l_509 = &l_483;
                        int *l_510 = &l_440;
                        int *l_511 = &l_230.f0;
                        int *l_512 = &l_230.f1;
                        int *l_513 = &l_483;
                        int *l_514 = &g_33.f0;
                        int *l_515 = &g_33.f0;
                        int *l_516 = &l_433;
                        int *l_518 = &l_502;
                        int *l_519 = &l_230.f1;
                        int *l_520 = &l_483;
                        int *l_521 = &l_482;
                        int *l_522 = &l_374;
                        int *l_523 = &g_33.f1;
                        int *l_524 = &l_208;
                        int *l_525 = (void*)0;
                        int *l_526 = &l_374;
                        int *l_527 = &l_374;
                        int *l_528 = &g_397;
                        int *l_529 = &l_374;
                        int *l_530 = &g_33.f1;
                        int *l_531 = &g_130;
                        int *l_533 = &l_374;
                        int *l_534 = &g_33.f1;
                        int *l_535 = &l_440;
                        int *l_536 = &l_433;
                        int *l_537 = (void*)0;
                        int *l_538 = &l_230.f0;
                        --g_539;
                    }
                    else
                    {
                        int **l_542 = &l_362;
                        int ***l_543 = &l_542;
                        struct S0 l_544 = {0L,-1L,0x2CL,0x54347F6AL};
                        (*l_542) = &g_14;

                        ;
                        (*l_543) = &g_13;

                        ;
                        (*l_450) = l_544;
                    }

                    ;
                    (*l_363) |= l_483;
                    ++g_569;
                }
                else
                {
                    int *l_572 = (void*)0;
                    int *l_573 = &l_532;
                    int *l_574 = &l_547;
                    int *l_575 = (void*)0;
                    int *l_577 = &l_440;
                    int *l_578 = &l_208;
                    int *l_579 = (void*)0;
                    int *l_580 = &l_433;
                    int *l_581 = (void*)0;
                    int *l_582 = &g_130;
                    int *l_583 = &g_33.f1;
                    int *l_584 = &g_33.f1;
                    int *l_585 = &g_413;
                    int *l_586 = &l_517;
                    int *l_587 = (void*)0;
                    int *l_588 = &l_517;
                    int l_589 = 0xF491A405L;
                    int *l_590 = &l_440;
                    int *l_591 = &l_433;
                    int *l_592 = &g_130;
                    int *l_593 = (void*)0;
                    int *l_594 = &l_208;
                    int *l_595 = &l_433;
                    int *l_596 = &g_397;
                    int *l_597 = (void*)0;
                    int *l_598 = &l_576;
                    int *l_599 = &l_440;
                    int *l_600 = &g_413;
                    int *l_601 = (void*)0;
                    int *l_602 = (void*)0;
                    int *l_603 = &l_440;
                    int *l_604 = (void*)0;
                    int *l_605 = &l_230.f1;
                    int *l_606 = &l_589;
                    int *l_608 = &l_589;
                    int *l_609 = &l_433;
                    int *l_610 = &l_208;
                    int *l_611 = &l_440;
                    int *l_612 = &l_607;
                    int *l_613 = &g_33.f0;
                    int *l_614 = &l_433;
                    int *l_615 = &g_33.f0;
                    int l_616 = 0x86DEA958L;
                    int *l_617 = &l_589;
                    int *l_618 = (void*)0;
                    int *l_619 = &l_230.f1;
                    int *l_620 = &l_607;
                    int *l_621 = &l_616;
                    int *l_622 = &l_374;
                    int *l_623 = &l_607;
                    int *l_624 = &g_130;
                    int *l_625 = (void*)0;
                    int *l_626 = &g_130;
                    int *l_628 = &g_413;
                    int *l_629 = &l_547;
                    int *l_630 = &l_208;
                    int *l_631 = &l_532;
                    int *l_632 = (void*)0;
                    int *l_633 = &l_517;
                    int *l_634 = &g_397;
                    int *l_635 = &l_576;
                    int *l_636 = &l_230.f0;
                    int *l_637 = &g_397;
                    int *l_638 = &l_576;
                    int *l_639 = &l_576;
                    int *l_640 = &l_616;
                    int *l_641 = &g_130;
                    int *l_642 = (void*)0;
                    int *l_643 = &l_440;
                    int *l_644 = &g_33.f1;
                    int *l_645 = &l_517;
                    int *l_646 = &l_230.f1;
                    int *l_647 = (void*)0;
                    int *l_648 = &l_576;
                    int *l_649 = &l_208;
                    int *l_650 = &l_607;
                    int *l_651 = &g_33.f1;
                    int *l_652 = (void*)0;
                    int *l_654 = &g_130;
                    int *l_655 = (void*)0;
                    int *l_656 = &l_230.f0;
                    int *l_657 = (void*)0;
                    int *l_658 = (void*)0;
                    int *l_659 = &l_433;
                    int *l_661 = &g_130;
                    --g_663;
                    g_13 = p_46;

                    ;
                }

                ;
                ;
                for (l_653 = 0; (l_653 < 16); l_653++)
                {
                }
            }
            else
            {
                int **l_688 = &l_363;
                int ***l_687 = &l_688;
                int **l_690 = &l_363;
                int ***l_689 = &l_690;
                unsigned *l_696 = &l_473;
                unsigned **l_695 = &l_696;
                (*l_361) = (((-1L) || ((*p_46) <= 4UL)) <= g_674);
                (*l_363) ^= (safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((~(safe_mul_func_uint8_t_u_u(p_45, ((p_48 & (4294967295UL <= (safe_rshift_func_uint16_t_u_u((*l_213), ((((safe_div_func_uint32_t_u_u((((*l_687) = &g_13) == ((*l_689) = &l_361)), (0xB84C374BL || l_547))) || 3UL) <= 0x8A267DB4L) | 0x5A99FCA5L))))) , 0xDDL)))), (*g_167))), (**g_166))) == (*p_46)) == 0xEDL), 9L));

                ;
                ;
                (*l_213) |= (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(0x4E5EL, g_81)), (p_47 & (((*l_363) = ((&l_473 == ((*l_695) = &g_539)) >= g_33.f2)) || l_653))));

                ;
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        (*l_466) = l_230;
        --l_731;
    }

    ;
    ;
    (*p_46) = (-8L);
    return p_46;


}







static int * func_49(struct S0 p_50)
{
    short *l_60 = &g_58;
    int l_61 = (-9L);
    short *l_63 = (void*)0;
    short **l_62 = &l_63;
    char l_68 = (-3L);
    char *l_69 = &g_70;
    char *l_84 = &g_70;
    int l_88 = 0x3E03EB41L;
    char ***l_163 = (void*)0;
    struct S0 l_164 = {0x450AD34FL,5L,255UL,1UL};
    int *l_202 = &l_61;
    if ((((g_6 , l_60) != (l_61 , ((*l_62) = l_60))) & (g_33.f3 == (p_50.f3 < ((*l_69) |= ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(g_58, (p_50.f0 > (&g_58 == &g_58)))) || g_33.f3), p_50.f1)) >= l_68))))))
    {
        char l_79 = (-2L);
        unsigned short *l_80 = &g_81;
        char **l_85 = &l_84;
        short *l_86 = (void*)0;
        short *l_87 = (void*)0;
        int *l_89 = &l_61;
        int l_110 = 0xC78C3D28L;
        int l_116 = 0L;
        unsigned l_148 = 4294967295UL;
        (*l_89) = (safe_div_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((*l_60) = (safe_mul_func_int8_t_s_s(0xBAL, (safe_div_func_uint32_t_u_u((+0x0AF4084FL), l_79))))), g_70)) <= (((*l_80) ^= p_50.f0) < ((l_88 |= (safe_mul_func_uint8_t_u_u(l_61, (((*l_85) = l_84) == &l_68)))) , p_50.f3))) == g_33.f2), g_6));
        if ((g_81 & p_50.f2))
        {
            int *l_90 = &g_33.f0;
            int *l_91 = &g_33.f1;
            int *l_92 = &g_33.f0;
            int *l_93 = (void*)0;
            int *l_94 = (void*)0;
            int *l_95 = (void*)0;
            int *l_96 = &l_88;
            int *l_97 = &l_61;
            int *l_98 = &g_33.f1;
            int *l_99 = (void*)0;
            int *l_100 = &g_33.f0;
            int *l_101 = &l_88;
            int *l_102 = &l_88;
            int *l_103 = &g_33.f0;
            int *l_104 = (void*)0;
            int *l_105 = &g_33.f1;
            int l_106 = 0L;
            int *l_107 = &g_33.f0;
            int *l_108 = (void*)0;
            int *l_109 = &l_61;
            int *l_111 = &l_110;
            int *l_112 = (void*)0;
            int *l_113 = &l_61;
            int *l_114 = &l_110;
            int *l_115 = &l_88;
            int *l_117 = &l_88;
            int *l_118 = &l_116;
            int *l_119 = &l_116;
            int *l_120 = &g_33.f0;
            int *l_121 = &l_110;
            int *l_122 = &g_33.f1;
            int l_123 = 0x2BF48DF1L;
            int *l_124 = (void*)0;
            int *l_125 = &l_123;
            int *l_126 = &l_106;
            int *l_127 = &l_110;
            int *l_128 = (void*)0;
            int *l_129 = &g_33.f1;
            int *l_131 = (void*)0;
            int *l_132 = &g_33.f1;
            int *l_133 = &l_88;
            int *l_134 = &l_110;
            int *l_135 = &l_88;
            int *l_136 = &l_116;
            unsigned char l_137 = 0x04L;
            char ***l_146 = (void*)0;
            char ***l_147 = &l_85;
            --l_137;
            p_50.f1 ^= (safe_mul_func_uint16_t_u_u(65535UL, (((p_50.f3 > (safe_rshift_func_int16_t_s_u(((*l_60) = l_88), 5))) || (safe_sub_func_int16_t_s_s((*l_102), ((*l_80) = (&l_116 == &g_14))))) > ((void*)0 != &g_70))));
            (*l_147) = (void*)0;

            ;
        }
        else
        {
            l_148--;
            (*l_89) &= p_50.f3;
            for (g_33.f0 = 0; (g_33.f0 > 9); g_33.f0++)
            {
                unsigned char *l_157 = &g_33.f2;
                unsigned l_158 = 0x427A07EEL;
                (*l_89) &= ((safe_mul_func_int16_t_s_s((((**l_85) = (~((8L ^ ((g_33.f3 >= (!p_50.f3)) && ((*l_157) = g_58))) ^ l_158))) == (safe_mul_func_uint8_t_u_u((g_33.f1 >= (p_50.f2--)), 0x92L))), ((void*)0 != l_163))) >= l_158);
            }
        }

        ;
    }
    else
    {
        struct S0 *l_165 = &l_164;
        int *l_168 = &l_61;
        int *l_169 = &g_33.f0;
        int *l_170 = &l_164.f1;
        int *l_171 = &g_33.f0;
        int *l_172 = &l_88;
        int *l_173 = &l_164.f1;
        int *l_174 = &g_33.f1;
        int *l_175 = &g_130;
        int *l_176 = (void*)0;
        int *l_177 = &l_164.f1;
        int *l_178 = &l_88;
        int *l_179 = &g_130;
        int *l_180 = &g_33.f1;
        int *l_181 = &l_88;
        int l_182 = 0xF557AD60L;
        int *l_183 = &l_164.f1;
        int *l_184 = &l_164.f1;
        int *l_185 = &g_33.f1;
        int l_186 = 7L;
        int *l_187 = &l_61;
        int *l_188 = &g_33.f1;
        int *l_189 = &g_33.f0;
        int *l_190 = &g_33.f1;
        int *l_191 = (void*)0;
        int *l_192 = &g_33.f1;
        int *l_193 = (void*)0;
        int *l_194 = (void*)0;
        int *l_195 = &g_33.f1;
        int *l_197 = &l_164.f0;
        int *l_198 = &l_186;
        (*l_165) = l_164;
        g_166 = g_166;
        g_199--;
    }

    ;
    l_202 = l_202;
    return &g_130;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1228.f0, "g_1228.f0", print_hash_value);
    transparent_crc(g_1228.f1, "g_1228.f1", print_hash_value);
    transparent_crc(g_1228.f2, "g_1228.f2", print_hash_value);
    transparent_crc(g_1228.f3, "g_1228.f3", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1738, "g_1738", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    transparent_crc(g_1930, "g_1930", print_hash_value);
    transparent_crc(g_1950, "g_1950", print_hash_value);
    transparent_crc(g_2068, "g_2068", print_hash_value);
    transparent_crc(g_2103, "g_2103", print_hash_value);
    transparent_crc(g_2385, "g_2385", print_hash_value);
    transparent_crc(g_2516, "g_2516", print_hash_value);
    transparent_crc(g_2682, "g_2682", print_hash_value);
    transparent_crc(g_2791, "g_2791", print_hash_value);
    transparent_crc(g_2803, "g_2803", print_hash_value);
    transparent_crc(g_2839, "g_2839", print_hash_value);
    transparent_crc(g_2926, "g_2926", print_hash_value);
    transparent_crc(g_2988, "g_2988", print_hash_value);
    transparent_crc(g_3272, "g_3272", print_hash_value);
    transparent_crc(g_3277, "g_3277", print_hash_value);
    transparent_crc(g_3422, "g_3422", print_hash_value);
    transparent_crc(g_3539, "g_3539", print_hash_value);
    transparent_crc(g_3879, "g_3879", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
