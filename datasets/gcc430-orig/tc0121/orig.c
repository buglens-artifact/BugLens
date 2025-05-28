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
   short f0;
   unsigned f1;
   const int f2;
   int f3;
   unsigned f4;
   const unsigned f5;
   unsigned short f6;
   int f7;
   unsigned char f8;
};


static unsigned g_4 = 0x4B666A75L;
static int g_15 = 9L;
static int g_44 = 0xC2C6F739L;
static int g_85 = 0L;
static int **g_86 = (void*)0;
static unsigned short g_95 = 65529UL;
static unsigned short **g_99 = (void*)0;
static struct S0 g_102 = {-8L,0x5819C35EL,-5L,0L,4294967295UL,0UL,0xFC9AL,6L,253UL};
static const struct S0 *g_101 = &g_102;
static struct S0 g_114 = {0x57EBL,0x0776C575L,0xD5C11101L,-1L,1UL,0xCE843D8BL,6UL,1L,0xD5L};
static char g_159 = 1L;
static unsigned char *g_160 = &g_114.f8;
static struct S0 *g_165 = &g_102;
static struct S0 **g_164 = &g_165;
static unsigned g_275 = 0UL;
static int *g_340 = &g_85;
static int **g_376 = (void*)0;
static struct S0 g_394 = {0x959AL,0x813E8738L,0xA1B6D9E0L,0x4A355E92L,0xF645FABAL,0x6876B8AEL,65528UL,0x70949F32L,0UL};
static const int **g_433 = (void*)0;
static short * const g_436 = &g_102.f0;
static short *g_478 = &g_394.f0;
static unsigned g_496 = 0x04C149F1L;
static struct S0 g_500 = {0x0037L,0xF3510A28L,0xEDF92732L,-2L,0UL,4UL,2UL,0xF0AA5391L,0x9EL};
static unsigned short *g_546 = &g_394.f6;
static unsigned short **g_545 = &g_546;
static const int *g_570 = &g_500.f7;
static unsigned short g_597 = 8UL;
static const int g_635 = 1L;
static struct S0 ***g_669 = &g_164;
static struct S0 ****g_668 = &g_669;
static unsigned g_670 = 0x286B3819L;
static const int g_680 = 1L;
static int *g_718 = &g_44;
static int g_748 = (-3L);
static unsigned short g_848 = 65526UL;
static short **g_855 = &g_478;
static short ***g_854 = &g_855;
static int *g_864 = (void*)0;
static const int *g_1010 = &g_102.f3;
static int *g_1018 = &g_44;
static struct S0 g_1062 = {-1L,6UL,-4L,5L,9UL,4294967292UL,0xE5A0L,0xB99768E1L,1UL};
static char g_1131 = 0xD6L;
static const int g_1134 = 5L;
static char * const g_1142 = &g_1131;
static char * const *g_1141 = &g_1142;
static char * const **g_1140 = &g_1141;



static short func_1(void);
static int func_2(unsigned p_3);
static unsigned short func_7(short p_8, struct S0 p_9, const int p_10);
static struct S0 func_23(short p_24, int p_25, unsigned char p_26, const int p_27);
static unsigned short func_32(int * p_33, int * p_34, char p_35);
static const unsigned short func_37(int p_38, const int * p_39, int * const p_40, int * p_41, int * p_42);
static int func_45(int p_46, const int * p_47);
static int func_48(char p_49, struct S0 p_50);
static struct S0 func_51(int * p_52, int * p_53, unsigned p_54, unsigned char p_55);
static int * func_56(int * p_57, int * p_58, short p_59, struct S0 p_60, int * p_61);
static short func_1(void)
{
    unsigned l_1153 = 0xF060C9CBL;
    if (func_2(g_4))
    {
        int *l_1149 = (void*)0;
        l_1149 = l_1149;
    }
    else
    {
        int * const l_1150 = (void*)0;
        int **l_1151 = (void*)0;
        int **l_1152 = &g_340;
        (*l_1152) = l_1150;

        ;
    }


    ;


    ;
    ;
    ;
    return l_1153;
}







static int func_2(unsigned p_3)
{
    struct S0 l_13 = {-1L,0x823AAF5BL,1L,1L,0xFB2C41ACL,0xDC99CDF9L,5UL,0L,246UL};
    const unsigned char l_293 = 0x06L;
    unsigned short l_504 = 0x42C2L;
    int *l_534 = (void*)0;
    struct S0 l_592 = {0L,6UL,0xB0D563B0L,-1L,0x0D009DE2L,0xC95DFDBFL,0xE3A2L,0x8CEB5E55L,0x6AL};
    unsigned char l_593 = 255UL;
    struct S0 l_595 = {7L,0UL,0x9CC52C69L,0L,0x8891A6DCL,0xF1C86011L,0x1246L,0xBF4C4FE3L,0xE5L};
    unsigned short * const *l_599 = &g_546;
    unsigned short * const * const *l_598 = &l_599;
    unsigned *l_603 = &g_496;
    struct S0 ***l_608 = &g_164;
    struct S0 l_633 = {-1L,0x4C064EB7L,0x534B82F9L,0x639B9EEFL,0x9AF76244L,3UL,0x2B61L,4L,0xA4L};
    int l_640 = 0xED80953FL;
    int *l_648 = &l_13.f3;
    int *l_651 = &g_394.f3;
    unsigned l_652 = 0xECEC2F4FL;
    const int *l_679 = &g_680;
    int *l_717 = &l_640;
    short **l_800 = &g_478;
    int *l_831 = &g_44;
    char *l_834 = &g_159;
    int *l_837 = (void*)0;
    char l_891 = 0xF0L;
    int ***l_904 = (void*)0;
    unsigned short l_921 = 0UL;
    int *l_992 = &g_44;
    const char l_1023 = 0x4EL;
    int *l_1081 = (void*)0;
    unsigned char l_1128 = 0x1CL;
    unsigned short l_1148 = 0x3421L;
    if ((safe_lshift_func_uint16_t_u_u(0x24C0L, func_7((safe_lshift_func_uint8_t_u_u((0UL || g_4), 4)), l_13, g_4))))
    {
        int * const l_18 = &l_13.f7;
        int *l_36 = &l_13.f3;
        int l_292 = 0xBACDE27DL;
        struct S0 l_505 = {1L,0UL,2L,-1L,4294967294UL,0x9EA8A1E0L,0x27C1L,2L,0x54L};
        int **l_572 = (void*)0;
        int *l_574 = &g_44;
        int **l_573 = &l_574;
        struct S0 l_589 = {-1L,0xAB10429BL,0xDE252377L,0L,8UL,0x98EB3211L,0xBC5EL,0x0CE41A86L,7UL};
        char *l_590 = (void*)0;
        char *l_591 = &g_159;
        char l_594 = 0x12L;
        int **l_596 = &l_36;
        (*l_18) = (func_7((((((l_18 == &g_15) >= (!l_13.f0)) || p_3) <= p_3) & (safe_sub_func_int32_t_s_s(((*l_18) = (safe_sub_func_uint8_t_u_u((func_7(g_15, func_23(g_4, (((g_15 <= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_32(l_36, l_36, g_15), g_114.f4)), l_13.f8))) | g_114.f2) < g_102.f6), l_292, l_293), g_15) & g_102.f6), p_3))), g_394.f2))), g_500, g_394.f3) != p_3);


        ;
        ;
        for (g_500.f6 = (-27); (g_500.f6 == 16); ++g_500.f6)
        {
            int *l_503 = (void*)0;
            int l_506 = 0xA4E3D260L;
            unsigned short **l_547 = &g_546;
            int *l_558 = &g_102.f3;
        }
        (*l_596) = func_56(func_56(l_36, ((*l_573) = l_36), (((safe_sub_func_uint32_t_u_u(((func_48((safe_lshift_func_int16_t_s_s((p_3 >= ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((*l_18) = ((g_102.f1 < 0xF4L) <= (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(p_3, ((safe_lshift_func_int8_t_s_u(((*l_591) = (((*g_160) = (func_48(g_102.f4, l_589) | (*l_36))) || (*l_18))), 4)) ^ p_3))), 8)))) || 8L), p_3)), p_3)) & p_3)), 14)), l_592) != l_593) > g_102.f6), (*g_570))) | (**g_545)) >= g_500.f4), l_592, &l_292), l_534, l_594, l_595, &g_15);

        ;
        ;
    }
    else
    {
        return g_597;
    }


    ;
    ;
    if (((p_3 == ((void*)0 != l_598)) < ((safe_unary_minus_func_uint16_t_u(p_3)) == ((safe_sub_func_uint16_t_u_u(0x13C9L, (((*l_603) = 0UL) < g_394.f6))) || func_45(p_3, func_56(l_603, l_603, p_3, l_13, l_603))))))
    {
        struct S0 ***l_609 = (void*)0;
        int *l_610 = &g_44;
        int l_614 = 0xBF8FBF68L;
        struct S0 l_615 = {0L,4294967291UL,1L,0L,0x0F310D54L,0xDF4E50ECL,0x64C4L,0x2ACFF277L,0x3CL};
        for (g_15 = 0; (g_15 < (-16)); g_15 = safe_sub_func_int8_t_s_s(g_15, 4))
        {
            int *l_616 = &g_15;
            struct S0 l_618 = {8L,0xAFC3680DL,1L,0x0DE4CAEAL,0x0C259331L,0xF619D96BL,1UL,8L,5UL};
            int **l_621 = &l_616;
            for (l_13.f6 = 0; (l_13.f6 < 58); l_13.f6 = safe_add_func_int8_t_s_s(l_13.f6, 9))
            {
                int l_611 = 0L;
                struct S0 l_612 = {-10L,0x86AC8422L,-1L,0x27EC538CL,0x8E6B4230L,5UL,0UL,0xCE252D31L,253UL};
                int *l_613 = (void*)0;
                int *l_617 = &l_614;
                int **l_619 = (void*)0;
                int **l_620 = &l_617;
                (*l_617) = ((l_608 == (l_609 = l_608)) | func_45(p_3, func_56(l_610, func_56(func_56(l_534, &g_44, (p_3 && l_611), l_612, l_613), &l_611, l_614, l_615, l_603), p_3, l_615, l_616)));

                ;
                (*l_620) = func_56(l_603, l_603, p_3, l_618, l_613);

                ;
            }
            (*l_621) = func_56(l_603, &g_44, (~p_3), l_618, func_56(l_610, func_56(l_534, &g_44, p_3, l_595, l_616), (*g_478), (*g_101), &l_614));

            ;
            if ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s(9UL, 12)))), 8)))
            {
                return p_3;
            }
            else
            {
                int *l_627 = (void*)0;
                int **l_628 = &l_610;
                struct S0 ** const *l_631 = &g_164;
                int l_632 = 1L;
                const int *l_634 = &g_635;
                int *l_636 = &l_615.f7;
                l_618.f7 = 0xC9EE55C3L;
                if (((*l_636) = func_45(p_3, (l_634 = func_56(func_56(func_56(l_627, func_56(l_603, func_56(l_534, &g_44, (**l_621), l_592, &l_614), p_3, (*g_101), &l_632), (*g_436), (*g_101), &l_632), l_616, p_3, l_633, (*l_621)), l_610, p_3, (*g_101), &l_614)))))
                {
                    (*l_636) = (p_3 == (**l_621));
                    for (l_595.f4 = 0; (l_595.f4 >= 56); ++l_595.f4)
                    {
                        int *l_639 = &l_632;
                        (*l_621) = l_639;

                        ;
                    }

                    ;
                }
                else
                {
                    l_534 = &l_614;

                    ;
                    return p_3;
                }

                ;
                ;
            }


        }

        ;
    }
    else
    {
        int *l_645 = (void*)0;
        int l_646 = 0x504798EEL;
        struct S0 l_649 = {3L,0x7BA05042L,0L,2L,4294967288UL,6UL,1UL,0x986CC69AL,1UL};
        int *l_678 = &l_640;
        short l_699 = 0L;
        unsigned short l_747 = 0xC489L;
        char l_777 = 1L;
        const short l_817 = 0x468EL;
        int *l_838 = &g_102.f7;
        unsigned char **l_928 = &g_160;
        int *l_943 = &g_44;
        unsigned short **l_961 = &g_546;
        char **l_1103 = &l_834;
        int **l_1108 = (void*)0;
        int **l_1109 = &l_992;
        int **l_1110 = &l_534;
        if (l_640)
        {
            int *l_644 = &g_44;
            struct S0 l_647 = {0x5ADCL,4294967288UL,-7L,1L,0x6D18A176L,4294967295UL,65532UL,0xC6BABE01L,0x09L};
            int **l_650 = &l_648;
            struct S0 ****l_663 = (void*)0;
            char *l_724 = (void*)0;
            short l_731 = 1L;
            int *l_776 = &g_44;
            unsigned short * const * const *l_792 = &l_599;
            unsigned l_798 = 4294967290UL;
            if (((*g_478) <= (safe_lshift_func_uint16_t_u_s(0x5D74L, ((*g_436) = (safe_unary_minus_func_uint32_t_u((((l_652 = ((*l_651) = p_3)) != (**l_650)) == g_500.f4))))))))
            {
                struct S0 ***l_659 = &g_164;
                int l_671 = 0x67D229A8L;
                int *l_673 = (void*)0;
                for (l_633.f1 = 0; (l_633.f1 == 13); l_633.f1++)
                {
                    int *l_672 = &l_649.f7;
                    for (l_647.f4 = 0; (l_647.f4 <= 11); l_647.f4 = safe_add_func_uint16_t_u_u(l_647.f4, 9))
                    {
                        struct S0 ***l_660 = &g_164;
                        struct S0 ****l_661 = &l_608;
                        struct S0 ****l_662 = &l_660;
                        struct S0 ***l_665 = (void*)0;
                        struct S0 ****l_664 = &l_665;
                        struct S0 *****l_666 = (void*)0;
                        struct S0 *****l_667 = &l_663;
                        l_671 = (func_45(p_3, l_648) >= ((**l_650) = (safe_rshift_func_uint16_t_u_u(((l_659 == ((*l_662) = ((*l_661) = l_660))) > (~(((*l_667) = (l_664 = l_663)) != g_668))), ((p_3 != g_670) || 0xDEFEL)))));

                        ;
                        (*l_650) = l_672;

                        ;
                        l_673 = l_534;
                    }
                }

                ;
                if ((safe_add_func_int16_t_s_s((0L <= (safe_rshift_func_uint16_t_u_s((func_48(p_3, (*g_101)) == g_500.f7), p_3))), 0xA6E6L)))
                {
                    struct S0 l_689 = {0x6B8DL,0x0CED7490L,-1L,0L,0UL,0xEA9371F0L,0x34EFL,0L,0x3BL};
                    int *l_690 = &g_102.f7;
                    (**l_650) = (((p_3 = (safe_add_func_int16_t_s_s((*l_651), (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x0CL, ((0x525FB524L > ((func_48(g_4, l_649) >= 0UL) || (**l_650))) | (*g_160)))), p_3)) == p_3), g_635))))) == 0x9271EA49L) || 8L);
                    (*l_650) = (*l_650);
                    for (l_595.f8 = 0; (l_595.f8 != 36); ++l_595.f8)
                    {
                        char *l_697 = &g_159;
                        const int *l_698 = &l_633.f3;
                        int l_700 = 0x3E6019CDL;
                        (*l_650) = (void*)0;

                        ;
                        (*l_651) = (((safe_rshift_func_uint16_t_u_u((0UL != ((safe_mod_func_int8_t_s_s(((*l_697) = (0x266A0F22L | p_3)), p_3)) & (**g_545))), (func_45(p_3, l_698) ^ (l_700 = ((p_3 <= l_699) > (*g_436)))))) < p_3) <= p_3);
                    }

                    ;
                    (*l_650) = (void*)0;

                    ;
                }
                else
                {
                    for (l_595.f7 = 15; (l_595.f7 == 28); ++l_595.f7)
                    {
                        int * const *l_703 = &l_645;
                        int * const **l_704 = &l_703;
                        (*l_704) = l_703;
                    }
                    for (g_114.f3 = (-15); (g_114.f3 > 21); g_114.f3++)
                    {
                        unsigned l_707 = 8UL;
                        if ((*l_651))
                            break;
                        l_707 = 0x9D110461L;
                        l_649.f3 = ((*l_651) = 1L);
                    }
                    (**l_608) = (***g_668);
                }

                ;
                for (g_394.f0 = 0; (g_394.f0 > (-24)); g_394.f0 = safe_sub_func_int16_t_s_s(g_394.f0, 5))
                {
                    int *l_710 = &g_114.f3;
                    l_651 = l_710;

                    ;
                    (*l_710) = p_3;
                }

                ;
                for (g_114.f8 = 29; (g_114.f8 == 21); g_114.f8--)
                {
                    int *l_713 = &g_44;
                    int **l_714 = (void*)0;
                    int **l_715 = &l_678;
                    struct S0 l_716 = {0x4C3EL,0UL,1L,-3L,0x9039A6F0L,5UL,0x7B63L,4L,0x78L};
                    g_570 = (*l_650);

                    ;
                    (*l_650) = func_56(((*l_715) = l_713), (g_718 = (l_717 = func_56(&g_44, &g_44, (*g_478), l_716, func_56(func_56(&l_640, l_673, (*g_478), l_716, &l_646), l_644, p_3, l_716, &l_646)))), (*g_436), l_716, l_534);

                    ;
                    ;
                    ;
                    (*l_650) = (void*)0;

                    ;
                    for (l_647.f1 = 25; (l_647.f1 == 10); --l_647.f1)
                    {
                        unsigned char *l_723 = &l_592.f8;
                        char **l_725 = &l_724;
                        (*l_650) = func_56(l_644, l_673, (*g_478), l_649, (l_648 = l_603));

                        ;
                        l_649.f3 = ((p_3 ^ p_3) <= (safe_lshift_func_uint8_t_u_u(((*l_723) = 0xF3L), (l_723 == ((*l_725) = l_724)))));
                        (**l_650) = 1L;
                        (*l_650) = &l_671;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                ;
            }
            else
            {
                int *l_726 = &l_640;
                int **l_727 = &g_718;
                struct S0 l_728 = {0x1782L,0x000DC6D6L,0xE9E3DE8BL,0xC4692278L,0x842AB500L,0xC684EE53L,0x007CL,-1L,0x67L};
                (*l_650) = func_56(l_726, ((*l_727) = (void*)0), (*l_648), l_728, func_56(&g_44, &g_44, ((safe_sub_func_uint32_t_u_u(p_3, (((*g_668) != (void*)0) < (-3L)))) == 0x0DL), l_649, l_726));

                ;
                ;
            }



            ;
            ;
            ;
            ;
            if (func_45(((void*)0 != &l_640), l_651))
            {
                int *l_732 = &g_102.f7;
                l_649.f3 = ((*l_651) = l_731);
                l_534 = l_732;

                ;
                return (*l_732);


            }
            else
            {
                (*l_650) = l_717;

                ;
                l_649.f3 = func_48(p_3, l_649);
            }

            ;
            if ((**l_650))
            {
                (*l_651) = ((*l_648) = 0x1F2B0B24L);
                (*l_650) = &l_646;

                ;
            }
            else
            {
                const unsigned char l_735 = 0xE5L;
                int *l_736 = (void*)0;
                struct S0 l_744 = {0xCC43L,0xC124A680L,0x38567CC2L,-1L,0UL,0UL,0xB2BBL,0x797455B4L,7UL};
                unsigned char l_752 = 0xF9L;
                for (g_496 = (-30); (g_496 == 51); g_496++)
                {
                    unsigned * const l_738 = &g_275;
                    int *l_743 = &g_114.f7;
                    if (l_735)
                        break;
                    if ((p_3 < ((void*)0 == &l_608)))
                    {
                        (*l_650) = l_736;

                        ;
                    }
                    else
                    {
                        int *l_737 = &l_633.f3;
                        unsigned **l_739 = &l_603;
                        l_737 = l_737;
                        (**l_650) = p_3;
                        (*l_737) = (l_738 == ((*l_739) = &p_3));

                        ;
                    }

                    ;
                    ;
                    (*l_650) = (*l_650);
                    if ((safe_add_func_uint16_t_u_u(65528UL, p_3)))
                    {
                        int * const l_742 = &l_592.f7;
                        struct S0 l_745 = {2L,1UL,-1L,0x2D75D8DEL,4294967295UL,4294967295UL,0x65EBL,-2L,1UL};
                        int *l_746 = &g_15;
                        (*l_650) = func_56(l_736, &g_44, ((*g_436) = (g_500.f7 && (g_114.f1 & (*l_743)))), l_744, (*l_650));

                        ;
                        (*l_650) = func_56(&l_640, l_743, (*g_478), l_649, func_56(&g_44, l_743, (*g_478), (*g_101), l_736));

                        ;
                        return l_747;


                    }
                    else
                    {
                        char l_749 = 0xB8L;
                        l_749 = (g_748 = p_3);
                        return p_3;


                    }
                }
                (*l_650) = (*l_650);
                for (l_633.f7 = 18; (l_633.f7 < 7); l_633.f7--)
                {
                    int *l_770 = &l_640;
                    char *l_773 = &g_159;
                    int **l_774 = &l_717;
                    int **l_775 = &l_644;
                    struct S0 l_778 = {3L,4294967295UL,0xCD8A740FL,8L,0x39FE6F56L,0x6F2E34BEL,0UL,0xDB252B05L,0x5FL};
                    unsigned short **l_797 = &g_546;
                    short ***l_801 = &l_800;
                    if (((*l_651) = l_752))
                    {
                        unsigned short l_763 = 0x324EL;
                        (**l_650) = (safe_sub_func_uint8_t_u_u(((**l_650) && (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((~g_114.f4), ((((safe_rshift_func_int16_t_s_u(2L, 7)) < (((*g_160) = l_763) > 0UL)) && ((safe_add_func_int16_t_s_s((*g_478), p_3)) <= (safe_rshift_func_uint16_t_u_s((**l_650), func_45(((((safe_rshift_func_uint16_t_u_u(0UL, p_3)) ^ p_3) > l_649.f1) | l_646), &l_646))))) <= l_763))), p_3))), g_275));
                        (*l_648) = p_3;
                    }
                    else
                    {
                        (**l_650) = p_3;
                        g_340 = (*l_650);

                        ;
                    }

                    ;
                    if ((l_777 = (((*l_775) = ((*l_774) = func_56(l_770, &g_44, ((safe_lshift_func_int8_t_s_u(((*l_773) = p_3), 4)) & (p_3 == ((l_736 = ((*l_650) = l_603)) != l_770))), l_649, l_644))) == l_776)))
                    {
                        unsigned short l_783 = 3UL;
                        short *l_786 = (void*)0;
                        short *l_787 = &l_592.f0;
                        unsigned short *l_791 = &g_597;
                        unsigned short ** const l_790 = &l_791;
                        unsigned short ** const *l_789 = &l_790;
                        unsigned short ** const **l_788 = &l_789;
                        (*l_650) = func_56(&l_640, &g_44, (*g_478), l_778, l_717);

                        ;
                        (*l_651) = ((*g_436) & ((safe_rshift_func_int16_t_s_s(((*l_787) = ((g_102.f1 || (safe_rshift_func_int16_t_s_s(((*g_478) = (l_783 = (p_3 > p_3))), 2))) & (safe_lshift_func_int8_t_s_s((*l_651), 6)))), (((**l_599) = p_3) ^ (((*l_788) = &g_545) == l_792)))) != (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((l_797 != (void*)0) <= g_85), p_3)) && p_3), 3))));

                        ;
                        (*l_648) = ((*l_648) & g_114.f4);
                    }
                    else
                    {
                        int *l_799 = &l_647.f7;
                        (*l_651) = p_3;
                        (*l_650) = l_799;

                        ;
                        if ((*l_799))
                            break;
                        l_799 = l_770;

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    (*l_801) = l_800;
                    return p_3;



                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_807 = &g_44;
            struct S0 l_811 = {-10L,0UL,-1L,0x6152CF91L,8UL,4294967295UL,0x165BL,9L,0xD2L};
            const struct S0 * const *l_822 = (void*)0;
            const struct S0 * const **l_821 = &l_822;
            const struct S0 * const ***l_820 = &l_821;
            const struct S0 * const ****l_819 = &l_820;
            struct S0 l_832 = {0x0124L,0xC24805BAL,0x3F29A8F9L,0xB3D0412DL,0UL,0x514AE6B4L,0x0BF0L,0xBB1194BDL,0UL};
            char *l_836 = &g_159;
            int **l_840 = (void*)0;
            struct S0 l_841 = {-1L,0x12C01416L,1L,5L,0x5DA372F0L,4294967295UL,0xB4A5L,1L,9UL};
            int *l_856 = &l_640;
            short **l_875 = &g_478;
            int l_922 = 0x63B211F9L;
            int *l_944 = &l_841.f3;
            int *l_946 = (void*)0;
            int l_996 = 0xB71D8437L;
            int *l_1016 = &l_922;
            if ((safe_unary_minus_func_uint16_t_u(65533UL)))
            {
                int *l_808 = &g_102.f7;
                for (l_777 = (-22); (l_777 < 7); l_777++)
                {
                    struct S0 l_809 = {1L,0xABDA1F29L,-9L,0L,0x3FB3ECAFL,4294967290UL,65535UL,0x7C257D59L,0x3CL};
                    struct S0 ****l_818 = &g_669;
                    const struct S0 * const *****l_823 = &l_819;
                    (**g_669) = (**l_608);
                    for (g_275 = 9; (g_275 < 53); ++g_275)
                    {
                        int *l_810 = (void*)0;
                        int **l_812 = &l_534;
                        (*l_812) = func_56(l_807, &g_44, (*g_478), l_811, &g_748);

                        ;
                    }
                    l_811.f3 = (((safe_lshift_func_int16_t_s_u(((*g_436) = ((((safe_rshift_func_uint16_t_u_s(((p_3 | g_114.f3) >= 0UL), p_3)) ^ (l_817 != (l_818 != &l_608))) | (((*l_603) = ((((*l_823) = l_819) == (void*)0) | p_3)) >= g_114.f3)) >= 0x6F2CB345L)), (*l_808))) & 0x47L) || l_809.f3);
                }

                ;
            }
            else
            {
                (**l_608) = (***g_668);
            }

            ;
            for (g_500.f1 = (-2); (g_500.f1 < 51); g_500.f1 = safe_add_func_uint32_t_u_u(g_500.f1, 3))
            {
                return p_3;
            }
            if ((safe_sub_func_int16_t_s_s(0L, (**g_545))))
            {
                int **l_828 = &l_645;
                struct S0 l_829 = {1L,4294967295UL,0x406EC09EL,-2L,0UL,0x11E349ABL,0x2BB5L,0x3EDA6FB3L,0x42L};
                int *l_830 = &l_595.f3;
                int **l_833 = &l_651;
                char **l_835 = &l_834;
                int *l_842 = &g_102.f7;
                int *l_871 = &l_640;
                (*l_833) = func_56(&g_44, func_56(((*l_828) = &g_44), (l_717 = func_56(&l_640, l_807, (*g_478), l_649, l_648)), (*g_436), l_832, l_831), (*g_478), l_649, l_807);

                ;
                ;
                ;
                (*l_833) = &l_646;

                ;
                (*l_833) = (void*)0;

                ;
                if (((((*l_835) = l_834) != l_836) || ((*g_160) = (l_832.f4 == (-3L)))))
                {
                    int ***l_839 = (void*)0;
                    int l_845 = (-1L);
                    l_838 = l_837;

                    ;
                    l_840 = &l_678;

                    ;
                    (*l_833) = func_56(((*l_828) = &g_44), l_830, (*g_478), l_841, ((*l_833) = l_842));

                    ;
                    if (((g_102.f8 && (((safe_add_func_uint8_t_u_u(((*g_478) || (1L <= ((*l_648) || ((***l_598) = (g_848 == p_3))))), l_845)) | g_394.f5) != (-2L))) == (*l_651)))
                    {
                        (*l_830) = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0UL, p_3)), (p_3 <= ((*l_648) = (0UL > 3UL)))));
                    }
                    else
                    {
                        struct S0 l_853 = {-1L,1UL,0xFB47E943L,0xCDA60630L,0xCF8D73D7L,0xD0AF645AL,0xE977L,0L,255UL};
                        (*l_648) = p_3;
                        (*l_833) = func_56(((*l_840) = (void*)0), &g_44, (p_3 != 0x415B443CL), l_853, &l_646);

                        ;
                        ;
                        (*l_833) = l_807;

                        ;
                        (*l_651) = (*g_570);
                    }

                    ;
                }
                else
                {
                    int *l_857 = &g_102.f7;
                    int *l_862 = &l_640;
                    unsigned l_869 = 1UL;
                    struct S0 l_870 = {0x869BL,4294967291UL,-1L,0xEA926D4FL,0x8ACCDE46L,4294967295UL,0xB8E9L,-7L,0x8AL};
                    (*l_838) = (((g_854 == &g_855) | (g_635 || (((**g_545) = ((*l_857) & 0xC7F5L)) != p_3))) || 8L);
                    if ((l_811.f3 && p_3))
                    {
                        struct S0 l_863 = {0xD849L,0xB3D5E275L,-1L,-1L,4294967295UL,7UL,0x3214L,0xFC9CE6CEL,1UL};
                        int *l_865 = (void*)0;
                        (*l_833) = func_56(&g_44, func_56(func_56(&g_44, ((*l_828) = func_56((*l_828), &l_640, (**g_855), l_829, (*l_833))), (((*g_436) = ((safe_add_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((*l_857), (*g_160))) == (*l_830)) < p_3), (*l_842))) && p_3)) && p_3), l_649, (*l_833)), l_862, p_3, l_863, &g_15), (*l_830), l_829, l_856);

                        ;
                        ;
                        l_838 = g_864;

                        ;
                        (*l_833) = func_56(l_862, func_56(func_56(&g_44, l_862, (*g_436), (*g_101), l_865), l_862, (*l_857), l_649, l_856), (*l_857), (*g_101), l_807);

                        ;
                        return p_3;
                    }
                    else
                    {
                        unsigned short l_867 = 0UL;
                        int *l_868 = &l_640;
                        struct S0 l_872 = {-1L,8UL,0L,5L,0xD8DE5D0BL,0xA47DF065L,65535UL,0x96AC091BL,1UL};
                        (*l_830) = ((void*)0 == &g_680);
                        (*l_842) = (p_3 ^ ((*l_838) < (safe_unary_minus_func_uint16_t_u((*g_546)))));
                        (*l_838) = (*l_648);
                        (*l_838) = (*l_857);
                    }
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                int **l_876 = &g_340;
                const int **l_877 = (void*)0;
                const int **l_878 = &g_570;
                const int *l_880 = &g_394.f7;
                const int **l_879 = &l_880;
                int l_884 = 0xCBCF5876L;
                struct S0 ****l_887 = &l_608;
                short *l_890 = (void*)0;
                (*l_879) = ((*l_878) = func_56(&g_44, &g_44, (safe_sub_func_int8_t_s_s(((((*g_854) = l_875) != l_800) < 0xF167L), p_3)), (*g_101), ((*l_876) = l_717)));

                ;
                ;
                ;
                for (l_640 = 0; (l_640 == (-1)); l_640 = safe_sub_func_uint32_t_u_u(l_640, 1))
                {
                    unsigned l_883 = 0x681B52DAL;
                    l_884 = l_883;
                }
                (*l_648) = (safe_add_func_int32_t_s_s((((*g_160) = func_48(((void*)0 != l_887), l_649)) > ((*l_836) = p_3)), (safe_sub_func_uint8_t_u_u((0L ^ ((void*)0 != &l_838)), ((func_7((+((void*)0 == l_890)), l_13, p_3) ^ p_3) > l_891)))));
                if ((((**l_876) && (g_394.f5 == p_3)) || (((*l_651) = (safe_sub_func_int32_t_s_s(1L, (+(((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((*g_436), (((*g_160) = p_3) != (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((void*)0 != l_904), (l_811.f6 >= p_3))), (*g_478)))))), (**g_545))), (*g_436))) <= (*g_340)) == (**l_879)))))) || g_394.f2)))
                {
                    unsigned l_907 = 0UL;
                    (*g_340) = ((safe_rshift_func_int8_t_s_u(l_907, 0)) | 0x009E3EE9L);
                }
                else
                {
                    int *l_908 = &l_649.f3;
                    struct S0 l_910 = {0xA6DDL,0xCF99A87AL,8L,-10L,0xD6683EAEL,0xD5A0D77AL,65535UL,-1L,4UL};
                    if ((*g_570))
                    {
                        int l_909 = 0x5FEA6483L;
                        (**l_876) = (*g_570);
                        (*l_879) = func_56(&g_44, l_678, ((*g_436) = (**g_855)), l_910, &l_909);
                        (*l_876) = &g_85;

                        ;
                        (*l_876) = l_908;

                        ;
                    }
                    else
                    {
                        l_838 = l_807;

                        ;
                    }

                    ;
                    ;
                    (**l_876) = ((*l_648) = ((((safe_lshift_func_uint8_t_u_u(0x05L, 5)) < g_114.f3) < (~(*g_160))) | 9UL));
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            if ((safe_mod_func_int32_t_s_s(((p_3 <= p_3) == ((**g_545) = (safe_rshift_func_uint16_t_u_u(0x5DA2L, (safe_rshift_func_int8_t_s_u(((((*l_834) = func_7((p_3 > (l_921 != ((l_922 = p_3) & ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((l_836 != (void*)0))), 1)) ^ (safe_lshift_func_int16_t_s_s(l_811.f7, 1)))))), l_649, (*g_718))) ^ p_3) == p_3), 7)))))), p_3)))
            {
                unsigned char ***l_929 = &l_928;
                int l_930 = 1L;
                (*l_929) = l_928;
                l_930 = (g_95 >= 0xA0569EFDL);
            }
            else
            {
                int *l_938 = &l_841.f7;
                int *l_939 = &l_640;
                struct S0 l_949 = {9L,0UL,0x2D25A186L,0x3FB5F1F1L,0x40F8C69BL,4294967292UL,0UL,1L,1UL};
                struct S0 l_963 = {-2L,6UL,0L,0x149175B3L,0x17BD2A1FL,5UL,4UL,-6L,0x42L};
                int *l_1019 = (void*)0;
                for (l_592.f7 = 0; (l_592.f7 != 20); l_592.f7++)
                {
                    char l_937 = 0x06L;
                    struct S0 l_940 = {2L,0x06E8D8CFL,0x0414509BL,0xFC57CECDL,0UL,0x48DE5971L,0x136BL,0x4C77D1B9L,4UL};
                    int *l_941 = &g_15;
                    if (p_3)
                        break;
                    if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((func_45(((p_3 > ((-8L) < func_7(l_937, l_649, (*l_941)))) & (*g_478)), l_941) <= p_3), p_3)), 3)))
                    {
                        int **l_942 = (void*)0;
                        int l_945 = 9L;
                        struct S0 l_947 = {9L,4294967295UL,0x0E930621L,0xC8D5E823L,2UL,4294967291UL,1UL,1L,0x52L};
                        int *l_948 = &l_13.f7;
                        int **l_950 = (void*)0;
                        int **l_951 = (void*)0;
                        if ((*g_570))
                            break;
                        l_838 = func_56((l_943 = &l_640), l_838, ((**l_800) = p_3), l_949, l_941);

                        ;
                        ;
                    }
                    else
                    {
                        int *l_952 = &l_633.f7;
                        int **l_953 = &l_952;
                        (*l_953) = func_56(l_678, &g_44, (*g_478), l_649, l_952);

                        ;
                        (*l_944) = ((g_394.f1 <= ((*l_941) = (1UL || (safe_sub_func_int16_t_s_s((p_3 || (*g_478)), p_3))))) || (safe_sub_func_uint16_t_u_u((((0x6A4FL > 0xD77BL) > ((*l_941) != g_394.f5)) < (*l_938)), 0x4369L)));
                    }
                }

                ;
                ;
                if (((*l_944) = 0xE42D6241L))
                {
                    int **l_958 = &l_831;
                    int l_962 = 0L;
                    int **l_964 = &l_944;
                    struct S0 l_991 = {1L,4294967295UL,1L,0x3920B896L,0x7683A05DL,1UL,0xE569L,0xE62A3BADL,1UL};
                    (*l_964) = func_56(l_938, func_56(((*l_958) = l_938), (g_718 = &g_44), p_3, l_649, l_944), (((safe_rshift_func_uint16_t_u_s(((*l_938) = ((**g_545) = ((void*)0 == l_961))), p_3)) >= p_3) | l_962), l_963, l_807);

                    ;
                    ;
                    (*l_938) = (p_3 > (((g_670 = p_3) <= (safe_lshift_func_int8_t_s_s(0xEEL, 1))) && 0xA1381E17L));
                    if ((safe_unary_minus_func_uint32_t_u((func_7((0x04C4B24CL == (((safe_lshift_func_uint8_t_u_s(((*g_160) = ((*l_944) == (1UL || (*g_570)))), ((p_3 >= (*l_648)) < (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(l_747)), (**l_964)))))) || (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((***g_668) = (*g_164)) == &g_394), g_114.f5)), p_3))) || g_496)), l_963, (*g_718)) > 4294967292UL))))
                    {
                        l_938 = (*l_964);

                        ;
                        return p_3;


                    }
                    else
                    {
                        int l_983 = 0x34EB8019L;
                        unsigned char *l_984 = &g_500.f8;
                        int l_985 = 0L;
                        unsigned char *l_987 = &l_592.f8;
                        unsigned char *l_988 = &g_394.f8;
                        int *l_993 = &g_102.f3;
                        (*l_964) = (*l_964);
                        l_963.f3 = (((safe_sub_func_int32_t_s_s((*g_570), p_3)) == ((*l_648) = ((*l_987) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((*l_938) = (l_983 = ((**l_928) = (*g_160)))) >= ((g_500.f4 == ((*l_984) = l_962)) >= l_985)), 13)), (safe_unary_minus_func_uint8_t_u(p_3))))))) & (((*l_988) = p_3) == (safe_rshift_func_int16_t_s_u((p_3 < p_3), 3))));
                        l_993 = func_56((l_645 = ((*l_958) = func_56(((*l_958) = func_56((*l_958), &l_640, p_3, l_991, func_56(&g_44, func_56(&g_44, (*l_958), (*g_436), l_13, (*l_964)), (***g_854), l_963, l_807))), l_992, (**l_964), l_649, &l_646))), &g_44, (*l_944), (*g_101), (*l_964));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    l_938 = ((*l_964) = &l_646);

                    ;
                    ;
                }
                else
                {
                    for (g_114.f4 = (-23); (g_114.f4 > 51); ++g_114.f4)
                    {
                        (*l_938) = (*g_570);
                    }
                }

                ;
                ;
                ;
                ;
                if (l_996)
                {
                    int *l_997 = &l_963.f7;
                    int **l_998 = &l_944;
                    (*l_998) = l_997;

                    ;
                    for (l_633.f3 = 15; (l_633.f3 >= (-13)); --l_633.f3)
                    {
                        struct S0 *l_1001 = (void*)0;
                        struct S0 **l_1012 = &l_1001;
                        struct S0 ***l_1011 = &l_1012;
                        int l_1013 = (-3L);
                        l_1001 = &l_963;

                        ;
                        (**l_998) = (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_3, 13)) < (*l_938)), ((safe_add_func_uint8_t_u_u(((**l_928) = func_45((safe_sub_func_int16_t_s_s(p_3, p_3)), g_1010)), ((*l_608) == ((*l_1011) = (*g_669))))) || l_1013)));

                        ;
                    }
                }
                else
                {
                    int *l_1014 = &l_996;
                    struct S0 l_1015 = {6L,4294967295UL,0x1B537DAFL,0x3ABA0D71L,0x3ABB5BB8L,4294967295UL,0xCDF3L,0xE1F90A4AL,6UL};
                    int **l_1017 = &g_864;
                    unsigned short *l_1022 = &l_921;
                    l_938 = (void*)0;

                    ;
                    (*l_1017) = func_56(func_56(l_1014, &g_44, p_3, l_1015, func_56(l_1016, &g_44, ((*g_1010) & (-8L)), (*g_101), l_938)), l_938, (**g_855), l_649, &g_748);

                    ;
                    (*l_1017) = func_56(g_1018, func_56((l_1019 = l_939), &l_996, ((*g_546) ^ ((*l_1022) = ((((*l_834) = (safe_add_func_uint8_t_u_u(((*g_546) & (**g_545)), 0L))) | g_394.f8) ^ (*l_944)))), (*g_101), l_938), (**g_855), l_649, l_938);

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*l_944) = l_1023;
            }

            ;
            ;
            ;
            ;
            ;

        }

        ;
        ;



        ;
        ;
        ;
        ;

        ;
        ;
        ;
        if ((g_85 = (*g_1010)))
        {
            char **l_1024 = &l_834;
            char ***l_1025 = &l_1024;
            int l_1026 = (-1L);
            int *l_1027 = &g_85;
            int *l_1028 = &l_595.f3;
            (*l_1025) = l_1024;
            (*l_1028) = ((*l_1027) = l_1026);
        }
        else
        {
            const int **l_1036 = (void*)0;
            const int **l_1037 = &g_1010;
            struct S0 l_1038 = {0xB255L,0x895A9974L,1L,5L,0xB735CEB3L,4294967293UL,0UL,6L,8UL};
            int *l_1039 = (void*)0;
            int *l_1040 = &g_500.f3;
            int *l_1043 = (void*)0;
            int l_1044 = 0x7049B621L;
            int *l_1051 = &l_1038.f7;
            g_114.f3 = (*g_1010);
            (*l_1040) = (g_500.f2 && ((*g_160) && (safe_mod_func_uint8_t_u_u(func_7((func_45((safe_unary_minus_func_int32_t_s((((safe_mod_func_uint8_t_u_u((*g_160), g_114.f8)) | (safe_rshift_func_int16_t_s_s(1L, 3))) <= ((-1L) && p_3)))), ((*l_1037) = l_992)) <= (*g_160)), l_1038, p_3), g_394.f8))));

            ;
            if ((g_635 && ((p_3 > p_3) > (safe_rshift_func_int16_t_s_u(((func_45((*g_1010), &g_635) && ((**l_800) = (**g_855))) < (*g_546)), (**g_545))))))
            {
                (*l_1040) = func_7(((**g_855) = func_48(g_102.f3, (*g_101))), (*g_101), (*l_1040));
            }
            else
            {
                int *l_1046 = &l_640;
                int *l_1053 = &g_114.f3;
                if (l_1044)
                {
                    int *l_1049 = &l_649.f7;
                    struct S0 l_1050 = {0xBE05L,0x4A1E3401L,0x1DFEA1A7L,-3L,3UL,0xD9D32F3CL,0x000AL,2L,1UL};
                    if (p_3)
                    {
                        (*l_1040) = p_3;
                    }
                    else
                    {
                        int *l_1045 = &l_592.f3;
                        int **l_1047 = (void*)0;
                        int **l_1048 = &l_992;
                        (*l_1037) = l_1045;

                        ;
                        l_1049 = func_56(l_1046, (l_645 = l_1045), (**g_855), l_592, l_1046);

                        ;
                        ;
                        (*l_1037) = func_56(func_56(((*l_1048) = func_56(func_56(&g_44, &g_44, p_3, l_1050, l_1051), l_943, p_3, l_1038, l_1046)), l_1046, p_3, l_649, l_1046), l_1046, (**g_855), l_649, &g_15);

                        ;
                        ;
                    }


                    ;
                    ;
                    ;
                    (*l_1049) = 0x6CA330F3L;
                }
                else
                {
                    unsigned short l_1052 = 1UL;
                    (*l_1037) = func_56(&g_44, &g_44, l_1052, l_595, l_1053);

                    ;
                    return (*g_1010);



                }


                ;
                ;
            }


            ;
            ;
            (**g_669) = (**l_608);
        }


        ;
        ;
        for (l_13.f4 = 20; (l_13.f4 >= 3); l_13.f4 = safe_sub_func_int16_t_s_s(l_13.f4, 8))
        {
            int **l_1056 = &l_837;
            unsigned char *l_1057 = &l_595.f8;
            const int **l_1058 = (void*)0;
            const int **l_1059 = &g_570;
            const int l_1060 = 2L;
            struct S0 l_1061 = {0xFE10L,4294967288UL,-1L,0x64B07660L,2UL,0x248436AFL,1UL,1L,1UL};
            int *l_1063 = &g_500.f7;
            (*l_1056) = (void*)0;
            (*l_1063) = ((((*g_160) = (*g_160)) >= ((*l_1057) = g_670)) != ((*g_478) == ((*g_436) = (l_1061.f3 = func_48(func_7(((&g_855 != (void*)0) <= func_7((func_45(p_3, ((*l_1059) = &l_646)) != g_500.f3), l_649, l_1060)), l_1061, p_3), g_1062)))));

            ;
            if ((252UL && ((void*)0 == (*l_961))))
            {
                unsigned l_1070 = 0xADA2AC00L;
                for (l_592.f1 = 25; (l_592.f1 != 31); l_592.f1 = safe_add_func_int16_t_s_s(l_592.f1, 1))
                {
                    return p_3;



                }
                (*l_1063) = (((*g_160) = (*g_160)) && ((l_1070 = (0UL == (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_3, 15)), (*g_436))))) != (*g_1010)));
            }
            else
            {
                (*l_1063) = p_3;
                if (p_3)
                    break;
            }
            for (g_114.f4 = 25; (g_114.f4 != 36); g_114.f4 = safe_add_func_int16_t_s_s(g_114.f4, 9))
            {
                unsigned short l_1075 = 65535UL;
                struct S0 l_1076 = {0xD4EEL,0xE92DA18DL,0x07CD4CAFL,5L,0UL,0xBE1EFDDCL,0x9B94L,5L,1UL};
                int *l_1077 = &l_1076.f3;
                unsigned short ** const *l_1095 = &l_961;
                (*l_1063) = (safe_lshift_func_int8_t_s_u((((4294967288UL == (l_1075 = ((void*)0 == &l_608))) == 0x85L) | g_102.f8), (*l_1077)));
            }
        }


        (*l_1110) = func_56(func_56(((*l_1109) = &g_44), &g_44, ((g_597 = ((***l_598) = (*g_546))) > (p_3 <= p_3)), l_649, &l_646), &g_44, p_3, l_649, &l_646);

        ;
        ;
    }


    ;


    ;
    ;
    ;

    ;
    ;
    for (l_633.f6 = 0; (l_633.f6 != 59); l_633.f6 = safe_add_func_int16_t_s_s(l_633.f6, 2))
    {
        short l_1117 = 1L;
        const int *l_1118 = &l_592.f7;
        int * const l_1122 = &l_592.f3;
        int *l_1124 = &l_640;
        char **l_1144 = &l_834;
        char ***l_1143 = &l_1144;
        struct S0 l_1147 = {0xC3E3L,0x7A27710DL,0x8208AD59L,7L,0xA81D447BL,4294967295UL,0x73ECL,0xBB9F78A7L,0x9FL};
        for (l_633.f3 = 0; (l_633.f3 >= (-6)); l_633.f3 = safe_sub_func_int8_t_s_s(l_633.f3, 6))
        {
            char l_1119 = 0x32L;
            int *l_1123 = &g_394.f7;
            struct S0 l_1125 = {0x3B52L,1UL,0xF4F0C44FL,0L,0UL,0xFA68C96EL,5UL,0x8717932DL,0x81L};
            int *l_1126 = &l_633.f7;
            char *l_1127 = &l_1119;
            int **l_1129 = (void*)0;
            int **l_1130 = &g_864;
            unsigned l_1135 = 0xDA6A37CAL;
            (*l_1122) = (l_1128 = (safe_sub_func_int8_t_s_s(func_45(l_1117, l_1118), ((*l_1127) = ((*l_834) = ((~((*l_1126) = (((*g_160) = ((l_1119 ^ (safe_lshift_func_uint8_t_u_u((+(*l_1122)), 6))) <= p_3)) | (*l_1118)))) || (*l_1118)))))));
            (*l_1130) = &g_85;

            ;
            (*l_1122) = (p_3 > g_1131);
            (*g_864) = ((((*l_1123) != ((p_3 || ((**g_855) = func_7((p_3 > ((*l_603) = (safe_sub_func_uint32_t_u_u(p_3, ((l_800 = (*g_854)) != (*g_854)))))), l_1125, g_1134))) ^ p_3)) ^ (*l_1122)) & l_1135);
        }
        if (p_3)
            break;
        (*l_1122) = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((g_1140 = g_1140) != l_1143), (safe_lshift_func_int8_t_s_u(func_7((*l_1122), l_1147, (((**g_1141) = ((*g_546) && (*g_546))) ^ p_3)), (((**g_855) = (*g_478)) > l_1148))))), 3)) || (*g_1010));
        (*l_1122) = p_3;
    }

    ;
    return (*g_1010);



}







static unsigned short func_7(short p_8, struct S0 p_9, const int p_10)
{
    int *l_14 = &g_15;
    int *l_16 = (void*)0;
    int l_17 = 0L;
    l_17 = ((*l_14) = g_4);
    return (*l_14);
}







static struct S0 func_23(short p_24, int p_25, unsigned char p_26, const int p_27)
{
    struct S0 l_305 = {0x3FEFL,4294967290UL,0x37043CBFL,0xE0FD3B0AL,1UL,1UL,0xD277L,0x0F319DCEL,0xDDL};
    int *l_311 = &g_114.f3;
    int *l_315 = &g_102.f3;
    struct S0 **l_326 = &g_165;
    int *l_338 = (void*)0;
    int *** const l_348 = (void*)0;
    unsigned short *l_363 = (void*)0;
    int * const l_364 = &l_305.f7;
    char *l_454 = &g_159;
    struct S0 l_467 = {1L,4294967295UL,0xBD6CA1A1L,1L,0xD675A7E4L,0xC92CC150L,65535UL,0x962F4354L,3UL};
    int l_469 = 1L;
    int **l_477 = &l_338;
    int ***l_476 = &l_477;
    struct S0 l_480 = {-7L,0x36F0ECDBL,0x315A43EBL,0xEDCD0D5EL,0UL,0x67BEC60FL,1UL,-9L,0x84L};
    const int *l_497 = &l_467.f3;
    int **l_498 = &g_340;
    const int **l_499 = &l_497;
    if (p_27)
    {
        int *l_301 = &g_44;
        const int l_303 = 0xE5074FC5L;
        char l_318 = 2L;
        const int *l_331 = &g_114.f7;
        int *l_344 = &g_15;
        for (g_102.f0 = 0; (g_102.f0 == 10); g_102.f0 = safe_add_func_uint8_t_u_u(g_102.f0, 5))
        {
            const int **l_296 = (void*)0;
            const int **l_297 = (void*)0;
            const int *l_299 = &g_102.f7;
            const int **l_298 = &l_299;
            int *l_300 = &g_44;
            short *l_308 = (void*)0;
            short *l_309 = &g_114.f0;
            struct S0 l_310 = {-6L,0UL,1L,0xC3F00060L,1UL,0x2E59CB8BL,0x82DAL,0x392BCE64L,255UL};
            struct S0 l_336 = {0xA474L,0xB00D7999L,0xDE05E415L,0xE7B897F4L,0xC64AD36BL,0UL,65531UL,1L,0x83L};
            if (g_114.f8)
                break;
            (*l_298) = &p_27;

            ;
            (*l_298) = func_56(func_56(l_300, l_301, ((*l_309) = (((safe_unary_minus_func_uint8_t_u(l_303)) == g_114.f0) > ((safe_unary_minus_func_uint16_t_u(func_48(p_24, l_305))) | ((safe_mod_func_uint32_t_u_u(p_25, p_26)) > 0x41F5L)))), l_310, l_300), &g_44, g_102.f1, l_310, l_311);

            ;
        }
    }
    else
    {
        unsigned *l_349 = &g_275;
        struct S0 ***l_354 = (void*)0;
        const int *l_369 = &l_305.f3;
        int l_395 = 0x01627ED3L;
        unsigned short ***l_461 = &g_99;
        (*g_164) = (*g_164);
        if ((((*l_349) = (p_27 <= (safe_rshift_func_int8_t_s_u(((l_348 != &g_86) >= 9UL), 7)))) >= (safe_sub_func_uint8_t_u_u((0x407AL >= g_102.f8), (*l_311)))))
        {
            struct S0 ****l_355 = &l_354;
            int **l_360 = &l_311;
            const unsigned short *l_361 = &g_114.f6;
            const unsigned short **l_362 = &l_361;
            int *l_365 = &g_15;
            unsigned short l_366 = 0x3434L;
            unsigned short l_367 = 65533UL;
            short *l_368 = &g_114.f0;
            struct S0 l_424 = {0xC112L,0x3016CAA6L,0xD1D736AFL,1L,4294967295UL,0x5BDC0AB1L,0x9F66L,-1L,0x94L};
            const struct S0 **l_430 = &g_101;
            const int ***l_434 = &g_433;
            int *l_435 = (void*)0;
            const unsigned l_468 = 4294967295UL;
            const int **l_482 = &l_369;
            (*l_315) = (safe_rshift_func_int8_t_s_u((((*l_355) = l_354) == &l_326), ((safe_lshift_func_uint16_t_u_u(func_45((((*l_368) = ((safe_rshift_func_uint8_t_u_u(((((*l_360) = l_349) == &g_15) | (l_366 <= l_367)), (*g_160))) && (-8L))) || p_25), l_369), (*l_365))) >= g_102.f8)));

            ;
            if (p_25)
            {
                int ***l_374 = &g_86;
                int **l_375 = &l_311;
                int ***l_377 = &l_360;
                unsigned short *l_386 = &l_367;
                int *l_387 = &g_44;
                struct S0 *l_393 = &g_394;
                short l_420 = 0x42F2L;
                if (((g_114.f4 >= p_25) | (*g_340)))
                {
                    struct S0 *l_391 = &g_114;
                    struct S0 **l_390 = &l_391;
                    struct S0 *l_392 = &l_305;
                    int **l_396 = &l_338;
                    int l_399 = 0x33699D08L;
                    const int **l_400 = (void*)0;
                    const int **l_401 = &l_369;
                    (*l_360) = func_56(func_56(&g_44, l_387, (safe_lshift_func_int8_t_s_s((l_395 = (((*l_390) = ((*g_164) = (void*)0)) != (l_393 = l_392))), 3)), (*g_101), (g_340 = ((*l_375) = func_56(((*l_396) = &g_44), l_311, (safe_mod_func_int16_t_s_s((&l_354 == l_355), l_399)), (*g_101), &l_399)))), &g_44, l_399, (*g_101), l_349);

                    ;
                    ;
                    ;
                    ;
                    ;
                    ;
                    (*l_401) = &p_27;

                    ;
                    if ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((*g_160) <= (safe_add_func_int8_t_s_s(((void*)0 != (*g_164)), (g_159 = p_26)))), (safe_sub_func_uint16_t_u_u(((*g_340) >= ((l_395 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((**l_360), (safe_add_func_int8_t_s_s((&l_393 != (void*)0), (safe_mod_func_uint16_t_u_u(65530UL, 0x4C25L)))))), 0x03C2L))) != 0UL)), p_26)))) == l_420), 14)), (*g_160))))
                    {
                        struct S0 ***l_421 = &g_164;
                        int *l_422 = &l_399;
                        int **l_423 = &l_365;
                        char *l_425 = &g_159;
                        (*l_421) = l_326;
                        (*l_422) = ((((g_275 = (((*l_425) = ((p_27 & 4294967295UL) != g_159)) || g_394.f5)) >= p_25) ^ p_25) | (**l_360));
                        (**l_421) = (*l_326);
                        (*l_401) = &p_27;
                    }
                    else
                    {
                        (*l_360) = (*l_360);
                    }
                    return (*g_101);
                }
                else
                {
                    for (g_102.f1 = 1; (g_102.f1 != 20); g_102.f1 = safe_add_func_int32_t_s_s(g_102.f1, 1))
                    {
                        (*l_364) = (*g_340);
                    }
                    return (**g_164);
                }
            }
            else
            {
                (*l_360) = (void*)0;

                ;
            }

            ;
            if (((4294967295UL == (((*l_430) = (*g_164)) != (void*)0)) & ((safe_lshift_func_uint16_t_u_u(((*l_364) = (((&l_338 != ((*l_434) = g_433)) >= (*l_364)) & func_48(p_25, (**l_326)))), 0)) | 0x4AL)))
            {
                int *l_437 = &g_44;
                int **l_438 = &l_338;
                int l_439 = 0x5628F387L;
                struct S0 l_440 = {0xED79L,0x7356551CL,0x85484A3FL,0xD026599EL,4294967295UL,0x2D76455CL,0x4DC2L,-1L,1UL};
                const int *l_451 = &l_424.f7;
                (*l_360) = func_56(((*l_438) = func_56(func_56(func_56(l_435, l_435, ((void*)0 == g_436), (*g_101), (*l_360)), l_349, p_26, (*g_165), &g_15), l_437, (*g_436), (**l_430), &g_15)), &g_44, l_439, (**l_326), &l_439);

                ;
                ;
                (*l_360) = func_56(&g_44, &p_25, (*g_436), l_440, func_56(&p_25, &p_25, (safe_sub_func_int8_t_s_s(((g_102.f6 ^ (p_25 || func_48((safe_mod_func_uint32_t_u_u(p_25, (*g_340))), (**l_326)))) <= 247UL), 0L)), (*g_101), &l_395));

                ;
                for (l_440.f7 = 0; (l_440.f7 < 16); l_440.f7 = safe_add_func_int32_t_s_s(l_440.f7, 7))
                {
                    char **l_455 = (void*)0;
                    char **l_456 = &l_454;
                    unsigned short * const *l_460 = &l_363;
                    unsigned short * const ** const l_459 = &l_460;
                    char *l_462 = &g_159;
                    (*g_340) = (safe_sub_func_int16_t_s_s(0xC541L, (safe_mod_func_int8_t_s_s(((*l_462) = (func_45(p_26, l_451) < (safe_lshift_func_uint16_t_u_u(((&g_159 != ((*l_456) = l_454)) <= (((safe_sub_func_uint16_t_u_u((l_459 != l_461), g_102.f8)) ^ (*l_369)) <= (*g_436))), (*l_451))))), (-4L)))));
                    if (p_26)
                        break;
                }
            }
            else
            {
                int **l_475 = &l_435;
                int ***l_474 = &l_475;
                struct S0 l_479 = {0x5C10L,0UL,-3L,0xB76F203CL,0xECA8B75BL,2UL,6UL,0x4411FA72L,0xB3L};
                int *l_481 = &g_114.f7;
                (*g_340) = (safe_rshift_func_uint8_t_u_u(((l_395 = (((*g_436) = ((+((((safe_mod_func_uint32_t_u_u(func_48(g_114.f4, l_467), l_468)) && l_469) || g_102.f7) != (*g_436))) > 4294967295UL)) || 0x9E84L)) ^ (*l_369)), (*g_160)));
                (*l_360) = func_56(func_56(((*l_475) = func_56(&g_44, l_338, ((*g_478) = (safe_add_func_uint32_t_u_u(g_394.f2, ((safe_add_func_int16_t_s_s((l_474 != l_476), (*g_436))) != (&p_24 != (l_368 = g_478)))))), l_479, &l_469)), (*l_477), (*g_436), l_480, (*l_360)), &g_44, (*g_436), (**g_164), l_481);

                ;
                ;
                ;
                (*g_164) = (*g_164);
                (*l_360) = (void*)0;

                ;
            }

            ;
            ;
            ;
            ;
            (*l_482) = &p_27;

            ;
        }
        else
        {
            const int **l_483 = &l_369;
            int *l_493 = (void*)0;
            (*l_483) = &p_27;

            ;
            for (g_275 = 0; (g_275 < 15); g_275 = safe_add_func_int16_t_s_s(g_275, 1))
            {
                char l_486 = 5L;
                int *l_494 = &g_44;
                unsigned *l_495 = &g_496;
                (*l_315) = (l_486 & func_45((((*l_495) = (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((func_45((p_27 < ((safe_rshift_func_int8_t_s_u((func_45((*l_369), func_56(func_56(func_56(&p_25, l_349, p_24, (*g_165), &l_395), &g_44, p_26, (**g_164), l_493), l_349, l_486, (**l_326), &l_395)) >= 1UL), 1)) <= 0x53165345L)), l_494) < 0xF1A5L), (*l_364))), 0x8849ED32L))) | p_24), l_494));
                l_497 = &p_27;

                ;
                if (p_25)
                    break;
            }

            ;
            (*l_311) = p_26;
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    (*l_498) = (void*)0;

    ;
    (*l_364) = func_45(p_24, (*l_498));
    (*l_499) = &p_27;

    ;
    return (**l_326);
}







static unsigned short func_32(int * p_33, int * p_34, char p_35)
{
    int *l_43 = &g_44;
    int l_254 = 0xD7EC65E0L;
    char *l_274 = &g_159;
    int **l_287 = (void*)0;
    (*p_33) = (func_37(((*l_43) = 1L), l_43, &g_15, l_43, &g_15) < ((l_254 == p_35) > (l_254 | l_254)));


    (*p_34) = (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((l_254 == (safe_lshift_func_uint8_t_u_s(0xF9L, (g_275 = (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((p_35 | (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((p_35 == g_114.f0), p_35)) ^ ((*l_274) = func_45(func_45((*p_33), &l_254), &l_254))), (*p_34))), 65535UL))) >= l_254), p_35)) >= 0x8CF511DBL), (-1L))) <= l_254), l_254)), 8)))))) | g_102.f4))), p_35));
    for (g_114.f3 = 0; (g_114.f3 > (-19)); --g_114.f3)
    {
        int *l_282 = (void*)0;
        struct S0 l_283 = {-1L,0x259659D1L,0xFF827C71L,-9L,0x4BD023BCL,0x7531C0F0L,1UL,0x3DE9391AL,0x0DL};
        unsigned short *l_284 = &g_114.f6;
        short *l_291 = &l_283.f0;
        (*p_33) = (((*l_284) = (func_48(((*l_274) = (((((*p_33) = (safe_lshift_func_int16_t_s_s(0x0F7FL, 10))) != (4294967287UL | l_254)) ^ ((safe_lshift_func_int16_t_s_s(((-7L) || (p_35 == (*g_160))), g_102.f8)) | 1UL)) ^ p_35)), l_283) <= g_102.f1)) > p_35);
        (*p_34) = (safe_mod_func_uint16_t_u_u(((*p_34) > ((l_287 == &p_33) | (safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(func_45(g_114.f2, p_34), (((*l_291) = (g_85 ^ ((p_35 = g_85) >= ((*l_274) = (func_45(g_114.f8, l_282) | (*g_160)))))) & l_283.f5))))))), l_283.f2));
        l_282 = p_33;


        p_34 = l_282;
    }
    return g_114.f5;
}







static const unsigned short func_37(int p_38, const int * p_39, int * const p_40, int * p_41, int * p_42)
{
    int *l_62 = &g_44;
    int **l_63 = (void*)0;
    int **l_64 = (void*)0;
    int **l_65 = (void*)0;
    int *l_67 = &g_44;
    int **l_66 = &l_67;
    unsigned char l_68 = 0x97L;
    struct S0 l_69 = {-1L,0x84A00028L,0xF3A6950EL,0xE27DFDEEL,0xF792179BL,1UL,0xBAF3L,-1L,0x39L};
    int **l_70 = (void*)0;
    int *l_72 = &l_69.f3;
    int **l_71 = &l_72;
    unsigned char l_90 = 0x5AL;
    unsigned short l_137 = 65535UL;
    struct S0 **l_168 = &g_165;
    unsigned short *l_182 = &g_114.f6;
    unsigned short ** const l_181 = &l_182;
    int *l_187 = &g_15;
    char *l_238 = &g_159;
    if (((*p_41) = func_45(((*p_41) = func_48(g_44, func_51(func_56(l_62, ((*l_66) = l_62), l_68, l_69, ((*l_71) = l_62)), &g_44, ((-1L) <= g_44), l_90))), p_39)))
    {
        unsigned char l_133 = 0x24L;
        const int *l_135 = (void*)0;
        int l_136 = 0xD72C3A22L;
        int *l_138 = &g_44;
        struct S0 l_144 = {0xDAA5L,1UL,1L,-1L,0xA7B65799L,0x725F5692L,0xD296L,-3L,254UL};
        (*l_71) = &g_85;

        ;
        if ((g_114.f7 = (*p_42)))
        {
            unsigned short *l_129 = (void*)0;
            unsigned short ** const l_128 = &l_129;
            unsigned short ***l_130 = &g_99;
            struct S0 l_134 = {0xD50EL,1UL,3L,0xC197979DL,0UL,8UL,0xD09CL,0x0600665BL,253UL};
            (*l_130) = l_128;

            ;
            (*p_41) = (safe_sub_func_uint32_t_u_u((0UL <= l_133), (p_38 && (l_136 = ((*l_72) > func_45(func_48(p_38, l_134), l_135))))));
        }
        else
        {
            int *l_139 = &g_44;
            int l_142 = 0x2EB29FA7L;
            unsigned l_157 = 0UL;
            const int l_161 = 1L;
            int *l_175 = &g_114.f7;
            struct S0 l_190 = {-5L,0xB7D52387L,0L,0x07F36C1BL,0x63813A0BL,1UL,0x1057L,-1L,249UL};
            if (((p_38 > (~((**l_71) = l_137))) < 0x81L))
            {
                struct S0 l_143 = {0xF0AAL,2UL,-7L,-1L,4294967294UL,0UL,0x7022L,0x3B1C7E41L,1UL};
                int *l_145 = &g_44;
                unsigned short ***l_154 = &g_99;
                struct S0 *l_156 = &g_114;
                struct S0 **l_155 = &l_156;
                char *l_158 = &g_159;
                p_42 = func_56(func_56(((*l_66) = &g_44), func_56(func_56(&g_44, func_56(func_56(l_138, (l_139 = &p_38), ((safe_mod_func_int8_t_s_s(p_38, func_48(l_142, l_143))) > p_38), l_144, &l_142), l_145, p_38, (*g_101), &g_15), g_102.f2, l_144, &g_15), &g_44, g_114.f4, (*g_101), p_42), p_38, l_144, p_41), &g_44, p_38, (*g_101), p_41);

                ;
                ;
                for (l_142 = 0; (l_142 <= (-16)); l_142--)
                {
                    return p_38;
                }
                if ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_142, ((*p_42) >= ((void*)0 != l_154)))), (((&g_114 == ((*l_155) = (void*)0)) || (*l_72)) != (((((*l_158) = l_157) ^ (l_143.f3 = (-1L))) >= (**l_71)) == 0x14L)))), g_114.f1)))
                {
                    (*l_71) = &l_142;

                    ;
                    (*p_41) = ((void*)0 == g_160);
                    return l_161;
                }
                else
                {
                    struct S0 **l_166 = &g_165;
                    struct S0 ***l_167 = &l_155;
                    struct S0 ***l_169 = &l_168;
                    struct S0 **l_171 = &g_165;
                    struct S0 ***l_170 = &l_171;
                    for (g_114.f1 = 6; (g_114.f1 != 7); g_114.f1 = safe_add_func_int16_t_s_s(g_114.f1, 1))
                    {
                        (*l_155) = (void*)0;
                        if ((*p_42))
                            break;
                        if ((*p_42))
                            break;
                        if ((*p_39))
                            continue;
                    }
                    if ((((*l_167) = (l_166 = g_164)) == ((*l_170) = ((*l_169) = l_168))))
                    {
                        (*l_71) = (void*)0;

                        ;
                        return p_38;
                    }
                    else
                    {
                        return g_102.f4;
                    }
                }
            }
            else
            {
                int ***l_172 = &l_70;
                struct S0 l_209 = {-1L,0x7C7E5BD8L,0L,0L,6UL,0UL,1UL,-1L,0xC2L};
                (*p_41) = func_48((((*l_172) = g_86) == g_86), (**l_168));
                (*l_71) = p_42;

                ;
                if (g_102.f4)
                {
                    int l_178 = 0x325B3C6BL;
                    short *l_188 = &l_69.f0;
                    char *l_189 = &g_159;
                    int *l_193 = &l_144.f3;
                    for (l_144.f6 = 0; (l_144.f6 >= 12); ++l_144.f6)
                    {
                        unsigned short **l_183 = &l_182;
                        unsigned short ***l_184 = (void*)0;
                        unsigned short ***l_185 = &g_99;
                        short *l_186 = &g_102.f0;
                        p_42 = (void*)0;

                        ;
                        l_175 = &l_142;

                        ;
                    }

                    ;
                    ;
                    (*p_41) = ((((*l_188) = ((void*)0 != l_187)) != 0x30F1L) || (((*l_168) == (*g_164)) || (((*l_188) = g_44) > (0x3237L | (func_48(((*l_189) = 1L), l_190) | p_38)))));
                    for (l_69.f6 = 4; (l_69.f6 < 30); l_69.f6 = safe_add_func_uint8_t_u_u(l_69.f6, 9))
                    {
                        char l_207 = (-5L);
                        char *l_208 = &l_207;
                        (*l_175) = 1L;
                        (*l_71) = l_193;

                        ;
                        (*l_71) = func_56(l_193, l_193, (~func_48((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((**l_71) = (func_48(((((-1L) > (*g_160)) > (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(5UL, ((*l_189) = g_102.f8))), ((*l_208) = (~((p_38 | ((*l_188) = (g_95 ^ (((g_102.f0 < p_38) ^ l_207) | (*l_193))))) & p_38)))))) && p_38), (*g_165)) <= 0UL)), g_114.f5)), g_102.f1)))), g_114.f0)), 11)), l_190)), l_209, &g_15);

                        ;
                    }

                    ;
                }
                else
                {
                    int l_212 = 8L;
                    g_102.f3 = ((6UL ^ func_45((safe_mod_func_int32_t_s_s((g_102.f0 | func_48(l_212, l_209)), p_38)), &l_142)) || g_95);
                    l_175 = &g_15;

                    ;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            l_144.f7 = g_102.f7;
        }

        ;
        ;

        for (g_102.f8 = 3; (g_102.f8 < 28); ++g_102.f8)
        {
            char l_219 = 0L;
            unsigned short ***l_221 = &g_99;
            unsigned short ****l_222 = &l_221;
            const int *l_223 = &g_102.f3;
            short *l_224 = &g_114.f0;
            char l_225 = 0xE0L;
            int l_232 = 1L;
            struct S0 l_234 = {8L,0x6A6A9CAEL,1L,0x6458F5FFL,0x28952072L,0x0B3D7231L,0UL,1L,0xBDL};
            int *l_250 = &l_69.f7;
            const int **l_253 = &l_135;
            l_225 = ((*p_41) = (0x1E08L && ((*l_224) = (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((*g_160) = (p_38 >= 0xA8L)), 5)) & p_38), (((func_48(l_219, (*g_101)) | (safe_unary_minus_func_uint8_t_u((func_45((&g_99 == ((*l_222) = l_221)), l_223) || p_38)))) > p_38) || 0L))))));
        }
    }
    else
    {
        (*l_71) = (void*)0;

        ;
    }

    ;


    return g_102.f7;
}







static int func_45(int p_46, const int * p_47)
{
    short l_127 = 0x2977L;
    return l_127;
}







static int func_48(char p_49, struct S0 p_50)
{
    int *l_123 = (void*)0;
    int *l_124 = &g_114.f7;
    (*l_124) = (safe_add_func_uint32_t_u_u(g_102.f3, 0x6DA17685L));
    (*l_124) = (safe_mod_func_uint16_t_u_u(0x852BL, 0x1FA0L));
    return p_50.f2;
}







static struct S0 func_51(int * p_52, int * p_53, unsigned p_54, unsigned char p_55)
{
    unsigned l_93 = 0x39BCA7AFL;
    unsigned short *l_94 = &g_95;
    int *l_97 = (void*)0;
    struct S0 l_98 = {1L,8UL,-4L,-1L,0x8EF108C6L,0xC2A3D91DL,65534UL,0xF019E2F9L,0xBCL};
    struct S0 *l_113 = &g_114;
    int **l_117 = (void*)0;
    int **l_118 = (void*)0;
    int **l_119 = (void*)0;
    int **l_120 = &l_97;
    if (((safe_rshift_func_uint16_t_u_s(((*l_94) = l_93), 12)) > l_93))
    {
        const int *l_96 = &g_15;
        l_96 = l_96;
        l_97 = p_52;

        ;
        return l_98;
    }
    else
    {
        unsigned short ***l_100 = &g_99;
        const struct S0 **l_103 = &g_101;
        int *l_106 = &g_102.f7;
        unsigned char *l_107 = &g_102.f8;
        int l_112 = 0x50B76A7FL;
        (*l_100) = g_99;
        (*l_103) = g_101;
        if ((((safe_rshift_func_int16_t_s_s((((*l_106) = (*p_52)) < (g_102.f3 > ((((*l_107) = p_54) < (safe_lshift_func_int16_t_s_u(g_102.f0, (safe_sub_func_uint32_t_u_u(p_54, l_112))))) == (g_102.f1 == (g_95 || 0UL))))), 4)) & 4294967294UL) >= g_44))
        {
            l_113 = &l_98;

            ;
        }
        else
        {
            char l_115 = (-10L);
            int **l_116 = &l_97;
            (*l_116) = func_56(p_52, p_53, l_115, (**l_103), &g_15);

            ;
        }

        ;
        ;
        (*l_106) = 0x8CF631B5L;
    }

    ;
    ;
    (*l_120) = p_53;

    ;
    return (*g_101);
}







static int * func_56(int * p_57, int * p_58, short p_59, struct S0 p_60, int * p_61)
{
    int *l_83 = (void*)0;
    int *l_84 = &g_85;
    int ***l_87 = &g_86;
    int **l_89 = (void*)0;
    int ***l_88 = &l_89;
    for (p_59 = 7; (p_59 > 8); p_59 = safe_add_func_int8_t_s_s(p_59, 2))
    {
        int *l_76 = (void*)0;
        int **l_75 = &l_76;
        (*l_75) = (void*)0;
        return p_57;


    }
    (*l_84) = ((safe_mod_func_uint8_t_u_u(0x61L, g_4)) > (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(p_60.f5, 12)), 5)));
    (*l_88) = ((*l_87) = g_86);

    ;
    return &g_15;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_102.f3, "g_102.f3", print_hash_value);
    transparent_crc(g_102.f4, "g_102.f4", print_hash_value);
    transparent_crc(g_102.f5, "g_102.f5", print_hash_value);
    transparent_crc(g_102.f6, "g_102.f6", print_hash_value);
    transparent_crc(g_102.f7, "g_102.f7", print_hash_value);
    transparent_crc(g_102.f8, "g_102.f8", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_114.f5, "g_114.f5", print_hash_value);
    transparent_crc(g_114.f6, "g_114.f6", print_hash_value);
    transparent_crc(g_114.f7, "g_114.f7", print_hash_value);
    transparent_crc(g_114.f8, "g_114.f8", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2, "g_394.f2", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_394.f4, "g_394.f4", print_hash_value);
    transparent_crc(g_394.f5, "g_394.f5", print_hash_value);
    transparent_crc(g_394.f6, "g_394.f6", print_hash_value);
    transparent_crc(g_394.f7, "g_394.f7", print_hash_value);
    transparent_crc(g_394.f8, "g_394.f8", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_500.f0, "g_500.f0", print_hash_value);
    transparent_crc(g_500.f1, "g_500.f1", print_hash_value);
    transparent_crc(g_500.f2, "g_500.f2", print_hash_value);
    transparent_crc(g_500.f3, "g_500.f3", print_hash_value);
    transparent_crc(g_500.f4, "g_500.f4", print_hash_value);
    transparent_crc(g_500.f5, "g_500.f5", print_hash_value);
    transparent_crc(g_500.f6, "g_500.f6", print_hash_value);
    transparent_crc(g_500.f7, "g_500.f7", print_hash_value);
    transparent_crc(g_500.f8, "g_500.f8", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_1062.f0, "g_1062.f0", print_hash_value);
    transparent_crc(g_1062.f1, "g_1062.f1", print_hash_value);
    transparent_crc(g_1062.f2, "g_1062.f2", print_hash_value);
    transparent_crc(g_1062.f3, "g_1062.f3", print_hash_value);
    transparent_crc(g_1062.f4, "g_1062.f4", print_hash_value);
    transparent_crc(g_1062.f5, "g_1062.f5", print_hash_value);
    transparent_crc(g_1062.f6, "g_1062.f6", print_hash_value);
    transparent_crc(g_1062.f7, "g_1062.f7", print_hash_value);
    transparent_crc(g_1062.f8, "g_1062.f8", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
