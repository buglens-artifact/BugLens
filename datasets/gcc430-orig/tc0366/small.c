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




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
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




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
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



static unsigned char g_7 = 255UL;
static int g_19 = 0xA9BACDE9L;
static int *g_18 = &g_19;
static short g_40 = 0x5A2EL;
static short g_52 = (-10L);
static int g_61 = 8L;
static unsigned g_65 = 0xFA08552AL;
static short *g_67 = &g_52;
static short **g_66 = &g_67;
static unsigned short g_83 = 65532UL;
static unsigned short g_85 = 0xEDC2L;
static unsigned char g_108 = 1UL;
static int *g_121 = &g_61;
static int **g_120 = &g_121;
static char g_159 = 0x71L;
static char *g_158 = &g_159;
static int *g_243 = &g_61;
static short g_244 = (-1L);
static unsigned g_376 = 0xE52DD0C4L;
static unsigned short **g_452 = (void*)0;
static unsigned *g_513 = &g_65;
static unsigned **g_512 = &g_513;
static int g_523 = 1L;
static char g_559 = 0x43L;
static unsigned g_560 = 4294967287UL;
static int *g_565 = &g_523;
static unsigned g_648 = 4294967295UL;
static char g_725 = (-1L);
static unsigned g_777 = 18446744073709551615UL;
static int *g_778 = &g_61;
static unsigned char *g_786 = &g_108;
static unsigned char **g_785 = &g_786;
static unsigned char g_889 = 0x5AL;
static short g_961 = 0L;
static unsigned g_990 = 2UL;
static char **g_1072 = &g_158;
static char ***g_1071 = &g_1072;



static unsigned char func_1(void);
static int * func_2(unsigned char p_3, unsigned p_4, int p_5);
static unsigned short func_8(unsigned p_9, int * p_10, int * p_11);
static unsigned func_12(int * p_13, int * p_14, int * p_15, int * p_16, int * p_17);
static int * func_20(char p_21);
static unsigned func_22(int * p_23, int * p_24, int * p_25, int * p_26);
static int * func_27(int * p_28, unsigned p_29, int * p_30, unsigned p_31);
static int * func_32(int p_33, int * p_34);
static unsigned char func_43(unsigned p_44, short * p_45, int p_46, short * p_47, int p_48);
static short * func_53(short * p_54, unsigned char p_55);
static unsigned char func_1(void)
{
    short l_6 = 0x32FFL;
    int *l_35 = &g_19;
    int *l_522 = &g_523;
    unsigned short *l_1099 = &g_85;
    int *l_1106 = &g_19;
    l_1106 = func_2(l_6, g_7, (((((*l_1099) = func_8(func_12(g_18, &g_19, &g_19, func_20((((*g_513) = func_22(func_27(&g_19, (&g_19 == &g_19), func_32(g_19, l_35), g_7), g_513, l_522, l_35)) != 0L)), l_522), g_18, l_522)) && (**g_66)) & g_725) || 0x8CL));


    ;
    ;



    ;
    g_565 = (void*)0;

    ;
    return (*l_35);
}







static int * func_2(unsigned char p_3, unsigned p_4, int p_5)
{
    int *l_1100 = &g_523;
    int *l_1101 = &g_19;
    unsigned *l_1102 = &g_777;
    short **l_1103 = &g_67;
    unsigned l_1104 = 4294967295UL;
    int *l_1105 = &g_523;
    (*l_1100) = (p_5 = ((-3L) != (*l_1100)));
    (*g_778) = p_4;
    (*g_565) = ((l_1103 == (void*)0) != l_1104);
    l_1101 = l_1100;

    ;
    return l_1105;


}







static unsigned short func_8(unsigned p_9, int * p_10, int * p_11)
{
    int *l_600 = &g_523;
    short *l_601 = &g_40;
    int l_602 = 0L;
    unsigned short *l_603 = &g_85;
    int *l_608 = (void*)0;
    unsigned l_674 = 0x4ECDA945L;
    int *l_698 = (void*)0;
    unsigned char *l_758 = &g_7;
    int *l_768 = (void*)0;
    char **l_808 = &g_158;
    unsigned *l_823 = &l_674;
    char l_831 = 1L;
    int *l_832 = &g_61;
    unsigned char l_836 = 0xB1L;
    int l_837 = 0L;
    unsigned l_859 = 0x9840683FL;
    int *l_921 = &g_61;
    unsigned char ***l_1015 = (void*)0;
    if ((func_12(p_11, l_600, &g_523, p_10, l_600) | (0x5C2EL || ((*l_603) = (g_559 , p_9)))))
    {
        int *l_606 = &l_602;
        short *l_669 = &g_244;
        char l_684 = 0xF8L;
        for (g_65 = 17; (g_65 == 34); ++g_65)
        {
            unsigned short l_623 = 65526UL;
            int l_624 = 0xBE53A59DL;
            unsigned char ***l_673 = (void*)0;
            unsigned char ****l_672 = &l_673;
            p_10 = l_606;

            ;
            if ((*g_18))
            {
                int **l_607 = &l_606;
                (*l_607) = p_11;

                ;
                (*l_600) = (*p_10);
            }
            else
            {
                int *l_609 = (void*)0;
                short *l_625 = (void*)0;
                unsigned char *l_640 = &g_108;
                unsigned char **l_639 = &l_640;
                unsigned char ***l_638 = &l_639;
                unsigned char ****l_671 = &l_638;
                unsigned short **l_693 = &l_603;
                if (func_12(&l_602, l_608, l_606, l_609, func_27(p_10, p_9, p_11, g_83)))
                {
                    for (p_9 = 0; (p_9 != 4); p_9 = safe_add_func_uint32_t_u_u(p_9, 7))
                    {
                        return g_523;
                    }
                    return p_9;
                }
                else
                {
                    int l_643 = 0L;
                    int l_650 = 0x45B78812L;
                    for (l_602 = 0; (l_602 <= 9); l_602 = safe_add_func_uint16_t_u_u(l_602, 2))
                    {
                        unsigned char *l_636 = (void*)0;
                        unsigned char **l_635 = &l_636;
                        unsigned char ***l_634 = &l_635;
                        unsigned char ****l_637 = &l_634;
                        unsigned short *l_649 = &g_83;
                        unsigned *l_667 = &g_560;
                        unsigned *l_668 = &g_648;
                        int l_670 = 0xB011FA06L;
                        (*p_11) = (l_650 = ((*p_10) == (((*g_67) < (safe_sub_func_int16_t_s_s((((((*l_649) = ((safe_mul_func_uint16_t_u_u((0xEE90E6D6L <= (((*l_637) = l_634) == l_638)), ((*l_603) = (safe_lshift_func_uint16_t_u_u((*l_600), l_643))))) >= (((*l_601) = ((safe_sub_func_int8_t_s_s((((((*g_158) = p_9) , (safe_mod_func_uint16_t_u_u(0x033CL, p_9))) == (*g_67)) || l_624), (-1L))) == (*l_606))) >= g_648))) || 0x2DF5L) && (-1L)) || p_9), 0x8618L))) , 0x72AC11DDL)));
                        (*p_11) = (safe_add_func_int8_t_s_s(((0x93L < (*l_606)) | ((**g_66) = ((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((g_523 , (0x5FB9EF49L && p_9)) | 1UL), l_670)) <= 0x8461L), l_650)), 0)) , 18446744073709551615UL) , (**g_66)) < p_9))), 0xECL));
                    }
                    if ((((l_671 == l_672) ^ 0x23L) <= l_623))
                    {
                        if ((*p_10))
                            break;
                        (*g_565) = (*p_10);
                        (*p_10) = ((*g_18) = (*p_11));
                    }
                    else
                    {
                        (*l_600) = (*p_11);
                        if ((*p_11))
                            break;
                        (*p_11) = l_674;
                    }
                    (*l_606) = 0x8A642A60L;
                    if (((((*l_603) = p_9) , (((*l_606) <= (safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u(((*l_606) | (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((*l_606), 0)) && (((*l_603) = ((l_650 = p_9) && g_40)) , (((*l_606) != 255UL) && (safe_lshift_func_uint8_t_u_s(g_40, 6))))), p_9))), l_684))))) , l_601)) == &l_623))
                    {
                        short *l_689 = &g_244;
                        unsigned *l_692 = &g_376;
                        unsigned short **l_694 = &l_603;
                        (*p_11) = ((((*g_66) = l_601) == (((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_376, 0x8221L)), 5L)) < g_376) , (void*)0)) || (*g_565));

                        ;
                        l_694 = l_693;
                    }
                    else
                    {
                        short ***l_695 = &g_66;
                        (*l_695) = &g_67;
                    }

                    ;
                }

                ;
                ;
                return p_9;
            }

            ;
        }

        ;
        ;
        ;
    }
    else
    {
        short l_703 = (-6L);
        int l_708 = 0L;
        short l_714 = 1L;
        char *l_724 = &g_725;
        int *l_760 = &l_602;
        int *l_804 = &l_602;
        int *l_811 = (void*)0;
        for (g_65 = (-2); (g_65 <= 1); g_65 = safe_add_func_uint32_t_u_u(g_65, 1))
        {
            unsigned *l_711 = &g_376;
            unsigned l_712 = 0xFCA4000AL;
            short *l_713 = &g_40;
            char *l_715 = &g_559;
            int l_763 = (-5L);
            int l_764 = 0xDD6982FCL;
            int *l_793 = &l_708;
            int l_801 = 8L;
            (*g_565) = (!(func_12(l_698, func_27(((*p_11) , &l_602), (*g_513), &l_708, g_108), l_711, p_11, l_711) > l_712));
            if (l_712)
                continue;
        }

        ;
        return p_9;
    }

    ;
    ;
    if ((*p_11))
    {
        unsigned l_830 = 9UL;
        int *l_833 = (void*)0;
        (*g_18) = ((p_9 ^ (!(((safe_rshift_func_int16_t_s_s(p_9, (((safe_lshift_func_uint16_t_u_u(((*g_786) , (safe_mod_func_int8_t_s_s(p_9, p_9))), 9)) , func_12(p_11, &g_523, p_11, func_27(p_11, (*g_513), p_10, p_9), g_513)) || l_830))) , 0xE1C6L) || 0xFE11L))) && (-1L));
        (*g_778) = l_831;
        if (((*p_10) == ((*g_778) = (*g_565))))
        {
            return g_40;
        }
        else
        {
            (*p_10) = (+0xA80210C1L);
        }
        l_833 = p_10;

        ;
    }
    else
    {
        g_121 = p_11;

        ;
        (*g_18) = (*p_11);
    }
    if ((safe_lshift_func_int16_t_s_s((p_9 != ((-4L) == (func_12(&l_602, p_11, (((*g_513) = ((p_9 && (*p_11)) <= (l_836 & (*g_18)))) , &l_602), &l_602, &l_602) >= l_837))), (*g_67))))
    {
        int *l_842 = &g_61;
        int **l_843 = &l_600;
        short *l_851 = (void*)0;
        unsigned *l_856 = &g_648;
        unsigned l_946 = 0x164D2302L;
        p_10 = &l_602;

        ;
        if ((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((*g_158) , (*l_832)), 1)) >= p_9) > func_12(l_842, ((*l_843) = &l_602), &l_837, p_11, p_10)), (**g_785))))
        {
            return p_9;
        }
        else
        {
            int l_848 = 0x1D62F543L;
            unsigned char l_888 = 0x80L;
            short *l_913 = &g_40;
            int l_915 = (-5L);
            (*l_843) = p_10;
            if ((*p_10))
            {
                int *l_887 = &g_61;
                unsigned short *l_892 = &g_83;
                if ((((((**g_785) = ((0xFB28L < (((((g_376 , (*l_600)) != (*p_10)) | 8UL) && p_9) > (*p_11))) , p_9)) || p_9) && 4294967286UL) < p_9))
                {
                    int l_871 = 0xC927003FL;
                    short *l_872 = (void*)0;
                    if ((&l_851 != (void*)0))
                    {
                        char l_870 = 0x57L;
                        (*g_18) = ((*p_11) = ((**l_843) = (safe_mod_func_int8_t_s_s((*g_158), 0xEAL))));
                        (*g_778) = (*g_565);
                        (*l_843) = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_877 = &g_61;
                        int **l_878 = &l_832;
                        (*p_11) = (*g_565);
                        (*l_878) = ((*l_843) = p_10);

                        ;
                    }

                    ;
                    ;
                    (*l_842) = (safe_rshift_func_int8_t_s_s((*g_158), (*g_158)));
                    (*g_18) = (((safe_rshift_func_uint8_t_u_s((((**g_66) && (safe_add_func_int8_t_s_s(((p_9 < (((((safe_lshift_func_int8_t_s_u(0x99L, (func_22(p_10, p_10, l_887, func_20(l_871)) && l_888))) , p_9) >= p_9) <= 0x2C9BL) ^ (*g_786))) != 0x4B44L), p_9))) && p_9), 4)) || g_889) , 6L);


                }
                else
                {
                    int **l_890 = (void*)0;
                    int **l_891 = &l_832;
                    char *l_914 = &g_725;
                    g_18 = ((*l_891) = ((*l_843) = (((*l_856) = p_9) , p_10)));

                    ;
                    ;
                    (*p_11) = ((void*)0 != l_892);
                    (*l_600) = (safe_add_func_int32_t_s_s((*l_887), (((*l_892) = (((!(safe_rshift_func_uint8_t_u_u((**g_785), 0))) & func_12(&l_602, &g_19, &l_837, p_11, &l_837)) & 0xF1L)) >= l_848)));
                    if ((*p_11))
                    {
                        return g_65;


                    }
                    else
                    {
                        short **l_909 = (void*)0;
                        short **l_910 = &l_601;
                        int l_916 = (-10L);
                        (**l_891) = (l_915 = (((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((0x0726F34AL > (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*p_11) = ((void*)0 == &g_785)), (*l_600))) || 9UL), (**l_891)))), 4294967295UL)), (*g_786))) , l_914) != (*l_808)));
                        (*p_10) = (l_916 , (safe_add_func_uint32_t_u_u(((*l_856) = (safe_lshift_func_uint8_t_u_s((*l_887), 0))), func_12(l_887, (*l_891), l_921, &l_915, &l_602))));
                        return l_848;


                    }
                }


                ;
                ;
                for (g_777 = 26; (g_777 <= 37); g_777 = safe_add_func_uint16_t_u_u(g_777, 6))
                {
                    int *l_924 = &g_523;
                    (*l_843) = func_27(l_924, (*l_887), l_887, g_85);

                    ;
                    (*l_887) = (*p_11);
                }

                ;
            }
            else
            {
                short l_943 = (-1L);
                int *l_969 = &g_523;
                if ((*l_832))
                {
                    int ***l_932 = &l_843;
                    int ****l_931 = &l_932;
                    unsigned *l_960 = &g_777;
                    if ((((safe_mod_func_uint32_t_u_u(((*l_823) = 7UL), (p_9 , (safe_add_func_uint32_t_u_u(l_915, (safe_sub_func_int16_t_s_s((((((*l_931) = &g_120) == &g_120) >= (safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(p_9, (safe_mul_func_int16_t_s_s((*g_67), ((*l_913) = (safe_add_func_uint8_t_u_u((*g_786), (safe_add_func_int8_t_s_s((0L | l_943), p_9))))))))) != 251UL), 3))) < 0x2B1A7CE7L), (-3L)))))))) < 65528UL) == (*g_158)))
                    {
                        unsigned short *l_949 = &g_83;
                        (*g_18) = (safe_sub_func_int32_t_s_s((((~(*g_513)) <= p_9) > 4294967288UL), p_9));
                        (*l_600) = (l_946 | 3UL);
                        (**l_843) = (((*g_513) , (((*l_603) = ((safe_add_func_int8_t_s_s(((0UL < (g_159 , (*l_600))) || (*g_67)), (*g_786))) & (*l_600))) < ((*l_949) = 1UL))) > (*g_158));
                    }
                    else
                    {
                        (*p_10) = (*l_832);
                    }

                    ;
                    (*g_18) = (func_12(p_11, (((safe_sub_func_uint16_t_u_u(0xBF48L, (g_452 == (void*)0))) | ((((*l_960) = (((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((*l_921), (safe_rshift_func_uint8_t_u_s((*g_786), (safe_lshift_func_uint16_t_u_s(0UL, 14)))))), l_943)) , ((l_888 == 7UL) >= l_943)) && (**g_785))) , &g_786) == &g_786)) , (void*)0), &l_915, &g_523, p_10) == g_961);
                }
                else
                {
                    short *l_968 = &g_40;
                    int l_983 = 0x5342AEA9L;
                    if ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((*l_969), 7)), 0x4995L)))
                    {
                        (*l_843) = (void*)0;

                        ;
                        if (l_888)
                            goto lbl_970;
                    }
                    else
                    {
                        (*l_843) = l_969;

                        ;
lbl_970:
                        (*l_842) = 0x50700946L;
                        (*l_843) = p_10;

                        ;
                    }

                    ;
                    for (l_888 = 0; (l_888 <= 8); l_888 = safe_add_func_uint32_t_u_u(l_888, 7))
                    {
                        short l_975 = 0xBC06L;
                        unsigned short l_976 = 65535UL;
                        (*g_778) = ((safe_add_func_int32_t_s_s(l_975, l_976)) > (p_9 , ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_9, p_9)), func_12(p_10, func_20(l_983), g_18, &l_915, l_969))), p_9)) , 0x118AL)));

                        ;
                        l_768 = &g_19;

                        ;
                    }

                    ;
                    for (l_848 = 0; (l_848 >= (-29)); l_848--)
                    {
                        short *l_991 = &l_943;
                        int l_992 = 0xA9EBFD33L;
                        (*p_11) = (0x12B4L < ((l_888 < (*g_786)) ^ 0x21ADE2B1L));
                        return p_9;
                    }
                }

                ;
                ;
            }


            ;
            ;
            ;
            for (g_523 = 0; (g_523 != (-17)); g_523 = safe_sub_func_int8_t_s_s(g_523, 4))
            {
                (*l_843) = p_10;

                ;
            }
        }


        ;
        ;
        ;
        (*l_843) = &g_19;

        ;
    }
    else
    {
        int l_997 = 0xB364D492L;
        short *l_998 = &g_244;
        char **l_1004 = (void*)0;
        short ***l_1022 = &g_66;
        int *l_1055 = (void*)0;
        unsigned short l_1081 = 1UL;
        unsigned char l_1094 = 255UL;
        int l_1095 = 0L;
        (*g_778) = (0x07DDL != (((*g_565) , 0L) | 0x71L));
        for (g_523 = (-22); (g_523 <= 10); g_523 = safe_add_func_uint32_t_u_u(g_523, 9))
        {
            char l_1001 = 7L;
            unsigned char **l_1010 = &l_758;
            unsigned **l_1013 = (void*)0;
            short *l_1014 = &g_52;
            unsigned char ****l_1077 = &l_1015;
            int l_1080 = 0xE70B5198L;
            if ((((p_9 ^ 0xDD191DA9L) ^ (-10L)) | l_1001))
            {
                int **l_1002 = (void*)0;
                int **l_1003 = &l_698;
                char ***l_1005 = &l_1004;
                short *l_1016 = &g_244;
                p_10 = ((*l_1003) = p_10);

                ;
                (*l_1005) = l_1004;
                (*l_1003) = (((l_997 | (l_1001 , 8L)) , (*l_832)) , (void*)0);

                ;
                if ((*g_565))
                    break;
            }
            else
            {
                if ((*g_18))
                    break;
            }
            for (g_108 = 0; (g_108 >= 52); ++g_108)
            {
                unsigned l_1021 = 4294967288UL;
                short *l_1033 = (void*)0;
                short l_1043 = 0L;
                unsigned short **l_1047 = (void*)0;
                int *l_1056 = &g_19;
                unsigned **l_1096 = (void*)0;
                unsigned ***l_1097 = (void*)0;
                unsigned ***l_1098 = &g_512;
                (*l_921) = (((safe_lshift_func_uint16_t_u_s(l_1021, 7)) , l_1022) == &g_66);
                if (l_1001)
                    continue;
                if (((~(8L == (&g_120 != (((*l_921) == l_997) , &g_120)))) >= l_1021))
                {
                    short l_1023 = 0x3074L;
                    int l_1024 = 0L;
                    unsigned short **l_1054 = &l_603;
                    int *l_1085 = &l_602;
                    if ((*g_18))
                    {
                        unsigned l_1031 = 4UL;
                        unsigned char *l_1034 = &l_836;
                        (*g_778) = (g_560 , (l_1023 | ((l_1024 = ((**g_66) = (**g_66))) & p_9)));
                    }
                    else
                    {
                        unsigned short l_1041 = 0x81F9L;
                        unsigned char *l_1042 = &g_889;
                        short *l_1044 = &l_1023;
                        (*l_832) = (l_1041 < (*g_158));
                        if ((*p_11))
                            continue;
                        l_608 = (void*)0;

                        ;
                    }
                    if ((((*g_158) <= (*g_786)) , (((*l_1054) = (((((*g_786) < p_9) | (safe_mul_func_uint8_t_u_u((*g_786), (l_1047 != (void*)0)))) != (safe_mod_func_uint8_t_u_u((((**l_808) = ((((((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_1001, p_9)) != 255UL), l_997)) || l_1043) != g_61) , 4294967290UL) & l_1001) == 0x50L)) != g_560), (*l_921)))) , (void*)0)) != &g_83)))
                    {
                        unsigned short l_1065 = 0x2329L;
                        unsigned char **l_1066 = &g_786;
                        short *l_1073 = &g_40;
                        l_1056 = l_1055;

                        ;
                        (*g_778) = ((*g_158) , (((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*l_1014) = l_1065), ((((l_1066 == (void*)0) > (safe_mul_func_uint8_t_u_u((*g_786), 0L))) , (void*)0) == (void*)0))), 0UL)), 12)), (-1L))) | 0L) | 0xEDB6L));
                    }
                    else
                    {
                        unsigned char ****l_1076 = &l_1015;
                        unsigned char ****l_1079 = &l_1015;
                        unsigned char *****l_1078 = &l_1079;
                        int *l_1082 = &g_523;
                        int **l_1083 = (void*)0;
                        int **l_1084 = &l_608;
                        if (l_1001)
                            break;
                        l_1085 = (((*l_1056) = (((safe_sub_func_int8_t_s_s((!((l_1077 = l_1076) != ((*l_1078) = (void*)0))), ((***g_1071) = (l_1080 = (*g_158))))) > l_1081) && 0x3BCCE3A3L)) , ((*l_1084) = l_1082));

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
                    unsigned l_1090 = 0xF1491A5DL;
                    short *l_1093 = &g_52;
                    (*l_921) = (((safe_rshift_func_uint16_t_u_s((((l_1090 >= ((safe_lshift_func_int16_t_s_u(((***l_1022) = (*l_1056)), p_9)) && 0x3842L)) , 0xBF1DL) | p_9), l_1094)) & 0UL) , l_1095);
                }

                ;
                (*l_1098) = l_1096;

                ;
            }
        }


        ;
        ;
    }



    ;
    ;
    ;
    ;
    ;
    return p_9;


}







static unsigned func_12(int * p_13, int * p_14, int * p_15, int * p_16, int * p_17)
{
    short **l_597 = &g_67;
    int l_598 = 0xFEB82C09L;
    int *l_599 = &g_19;
    (*g_565) = (((g_66 = l_597) == (l_598 , &g_67)) ^ (((l_598 & l_598) == 0x92716D89L) ^ l_598));
    l_599 = (void*)0;

    ;
    return l_598;
}







static int * func_20(char p_21)
{
    int *l_593 = &g_61;
    int **l_594 = (void*)0;
    int **l_595 = &g_121;
    int l_596 = 0x472B3AAAL;
    (*g_565) = (safe_add_func_int8_t_s_s((((g_244 < ((*g_158) = (func_22(((*g_18) , l_593), ((*l_595) = l_593), &g_523, (l_596 , &g_61)) < p_21))) <= p_21) & (*g_67)), g_560));

    ;
    return (*l_595);


}







static unsigned func_22(int * p_23, int * p_24, int * p_25, int * p_26)
{
    unsigned l_526 = 4294967287UL;
    unsigned short *l_535 = &g_83;
    int **l_552 = &g_121;
    if (((safe_add_func_int32_t_s_s((*g_18), ((l_526 | (safe_mul_func_uint16_t_u_u((~0x397EL), l_526))) , ((safe_rshift_func_int8_t_s_s((((((safe_lshift_func_uint8_t_u_u(l_526, (safe_rshift_func_uint16_t_u_s(((*l_535) = l_526), 13)))) , ((*g_513) , g_244)) >= ((l_526 , g_65) , l_526)) | 6L) , l_526), l_526)) | (*g_18))))) < (*g_67)))
    {
        (*p_24) = (*p_25);
        if (g_19)
            goto lbl_553;
    }
    else
    {
        int l_540 = (-3L);
        unsigned short **l_541 = (void*)0;
        int **l_548 = (void*)0;
        int **l_549 = &g_243;
        (*g_18) = (*p_26);
        (*l_549) = ((((*g_513) = (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_540 | (((*g_158) > (l_541 == g_452)) , (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((0x7361L >= (~l_540)) | (*g_513)), 12)), 0x5EB6F0B4L)), l_526)) == (*g_158)) , l_540))), l_540)), l_526))) != (*p_25)) , p_23);


    }


lbl_553:
    (*l_552) = p_25;

    ;
    for (g_19 = (-29); (g_19 < 14); g_19 = safe_add_func_int16_t_s_s(g_19, 7))
    {
        unsigned l_556 = 0x87C93DA4L;
        unsigned *l_557 = &l_526;
        char *l_558 = &g_559;
    }
    (*p_24) = (((**l_552) = (((**l_552) < (safe_rshift_func_int16_t_s_s((**l_552), (**g_66)))) , (**l_552))) | 1UL);
    return (**l_552);
}







static int * func_27(int * p_28, unsigned p_29, int * p_30, unsigned p_31)
{
    unsigned short l_447 = 0x2EA5L;
    unsigned short *l_454 = (void*)0;
    unsigned short **l_453 = &l_454;
    unsigned short *l_469 = &g_85;
    int *l_479 = &g_61;
    unsigned l_506 = 4294967295UL;
    int *l_521 = &g_19;
    if ((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((p_29 , ((*g_158) || ((0x7CL < ((safe_mul_func_uint16_t_u_u(l_447, g_7)) > p_29)) , (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_452 != l_453), 1)), 15))))), g_108)) == (*g_158)), (*g_18))))
    {
        short l_480 = 0L;
        unsigned short *l_485 = &l_447;
        int l_503 = 0x92B7236DL;
        int l_504 = 0x85561B8BL;
        unsigned *l_511 = &l_506;
        unsigned **l_510 = &l_511;
        for (l_447 = 24; (l_447 >= 52); l_447 = safe_add_func_uint32_t_u_u(l_447, 5))
        {
            unsigned char *l_458 = &g_7;
            unsigned char **l_457 = &l_458;
            unsigned short *l_468 = &l_447;
            int l_481 = (-6L);
            unsigned short l_505 = 65529UL;
            int **l_520 = &g_243;
            if ((((*l_457) = &g_108) != (void*)0))
            {
                for (g_61 = 0; (g_61 >= 6); ++g_61)
                {
                    for (g_52 = 19; (g_52 != 10); g_52 = safe_sub_func_int16_t_s_s(g_52, 4))
                    {
                        if (l_447)
                            break;
                    }
                }
                if ((*p_28))
                    continue;
                if ((*p_28))
                    continue;
                for (p_29 = 0; (p_29 <= 60); p_29++)
                {
                    int **l_465 = &g_121;
                    (*l_465) = (void*)0;

                    ;
                    p_28 = p_28;
                }
            }
            else
            {
                unsigned l_489 = 0UL;
                int l_494 = 0xF5379B79L;
                (*p_28) = (*p_28);
                if (((*l_453) == (l_469 = l_468)))
                {
                    (*g_18) = ((safe_rshift_func_uint16_t_u_u(((&l_454 == (void*)0) & (safe_mod_func_uint8_t_u_u((0x1CC4F86EL ^ (*g_18)), (p_29 , (safe_rshift_func_int8_t_s_u(2L, 3)))))), 9)) >= (safe_mod_func_uint32_t_u_u((~(+4294967288UL)), (safe_unary_minus_func_uint32_t_u(g_19)))));
                    if ((*p_28))
                        break;
                }
                else
                {
                    g_121 = l_479;

                    ;
                }

                ;
                if (l_480)
                {
                    short *l_490 = (void*)0;
                    unsigned short *l_491 = &g_83;
                    if (l_481)
                    {
                        (*g_18) = l_481;
                    }
                    else
                    {
                        unsigned l_488 = 4294967292UL;
                        short **l_492 = &l_490;
                        (*g_18) = (safe_rshift_func_int16_t_s_s((g_83 , l_481), (safe_unary_minus_func_int32_t_s((l_488 , (*g_18))))));
                    }
                    return p_30;




                }
                else
                {
                    int l_493 = 0x6EB96BC2L;
                    if (((void*)0 != &g_376))
                    {
                        unsigned *l_495 = &l_489;
                        int l_502 = 2L;
                        unsigned l_507 = 0xFF13A0B5L;
                        (*p_28) = ((+(0x692BL ^ ((((*g_67) = (((l_494 = (l_493 , (*p_28))) > ((*l_495) = ((1L & g_65) != l_489))) , p_29)) <= (safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((((l_504 = ((*g_158) = ((l_502 & l_503) , l_503))) || l_505) != 1UL), 0)) | l_506) , l_507) & l_493), (*l_479))) ^ 0x20EEL) ^ (*g_18)), p_29))) == g_61))) || (*l_479));
                        return p_30;




                    }
                    else
                    {
                        g_121 = &g_61;

                        ;
                    }

                    ;
                }

                ;
            }

            ;
            (*l_520) = ((safe_rshift_func_uint16_t_u_u((l_504 = p_29), (l_510 == (g_512 = &l_511)))) , &l_504);

            ;
            ;
        }


        ;

    }
    else
    {
        return l_479;


    }

    ;
    return l_521;


}







static int * func_32(int p_33, int * p_34)
{
    unsigned l_38 = 0x6A3F1540L;
    short *l_39 = &g_40;
    short **l_49 = (void*)0;
    short *l_51 = &g_52;
    short **l_50 = &l_51;
    unsigned short l_153 = 0UL;
    unsigned char *l_157 = &g_108;
    int *l_163 = &g_61;
    short *l_199 = &g_40;
    unsigned char l_271 = 0xFCL;
    unsigned char l_378 = 7UL;
    int l_390 = 0x8159A623L;
    int *l_397 = (void*)0;
    int l_412 = 0x228BB2A3L;
    int *l_414 = &l_390;
    int *l_438 = (void*)0;
    (*g_18) = (((((((*l_39) = (safe_rshift_func_uint16_t_u_s(l_38, 14))) > ((safe_sub_func_int32_t_s_s(((func_43(g_7, ((*l_50) = l_39), (*p_34), func_53(&g_52, p_33), l_153) & 0xBCL) , (-8L)), 1UL)) , g_85)) , g_65) | p_33) >= 0x86L) || l_153);

    ;
    ;
    if ((((*l_157) = 0UL) || ((*l_157) = func_43(l_38, (*l_50), (*g_18), (*l_50), (g_85 , (!0xBD5518D9L))))))
    {
        char *l_160 = &g_159;
        short *l_184 = &g_40;
        int l_186 = 0xFB5F1DAFL;
        if (((*g_67) >= func_43(l_153, ((*l_50) = (void*)0), (*p_34), (*g_66), (((g_158 == l_160) && ((p_33 > (safe_add_func_int32_t_s_s((l_163 == p_34), (*g_121)))) , p_33)) ^ (*g_121)))))
        {
            int l_168 = (-7L);
            int l_197 = 0xB96202E0L;
lbl_241:
            for (p_33 = (-5); (p_33 < (-26)); --p_33)
            {
                unsigned l_181 = 0xED147D6BL;
                int l_182 = 0xC87C9332L;
                unsigned l_183 = 1UL;
                short *l_185 = &g_40;
            }
            l_197 = (*p_34);
            if (l_153)
                goto lbl_241;
        }
        else
        {
            int *l_242 = &l_186;
            (*g_120) = l_242;

            ;
            return p_34;



        }

        ;
        g_243 = ((*g_120) = (*g_120));

        ;
        return p_34;


    }
    else
    {
        char l_248 = 8L;
        int *l_251 = &g_19;
        short *l_264 = &g_244;
        unsigned char *l_312 = &g_7;
        char l_319 = 0xC9L;
        char l_330 = 0xE1L;
        int ***l_336 = &g_120;
        unsigned *l_339 = &g_65;
        (*l_163) = (*l_163);
        (*l_163) = (*g_243);
        (*g_120) = l_163;

        ;
        if (g_244)
        {
            int l_247 = 0xF64E080EL;
            int *l_250 = &g_61;
            short *l_261 = &g_52;
            for (g_83 = (-9); (g_83 < 41); g_83++)
            {
                int l_249 = 0xDE4AD5F3L;
                (*l_163) = (*g_243);
                (*l_163) = (l_247 & (l_248 , l_249));
                p_34 = l_250;

                ;
                (*g_120) = l_251;

                ;
            }

            ;
            ;
            (*p_34) = func_43((safe_mul_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(((*l_251) = 0x3628F2B3L), (safe_unary_minus_func_uint8_t_u(((-1L) & ((*l_163) = p_33)))))) <= p_33) , (safe_mul_func_uint16_t_u_u((p_33 , (safe_add_func_uint32_t_u_u(g_159, p_33))), ((*g_67) , 0xB402L)))) , (*l_250)) , 0xD6L), p_33)), l_261, p_33, (*g_66), g_108);
            (*g_120) = (*g_120);
        }
        else
        {
            short ***l_262 = &l_49;
            int l_263 = (-1L);
            short *l_265 = (void*)0;
            short l_298 = 0xE969L;
            unsigned *l_383 = &g_65;
            unsigned char **l_431 = &l_157;
            if ((*g_121))
            {
                short *l_274 = &g_52;
                int l_279 = 0x225372B5L;
                short ***l_281 = &l_50;
                short l_286 = 0x5B6BL;
                short *l_287 = &g_244;
                if (((*g_121) = ((&g_66 == l_262) <= ((l_263 , l_264) == (l_265 = (*g_66))))))
                {
                    short *l_272 = &g_40;
                    for (g_85 = (-18); (g_85 != 12); ++g_85)
                    {
                        return (*g_120);


                    }
                    for (g_159 = (-3); (g_159 >= 26); g_159 = safe_add_func_int16_t_s_s(g_159, 1))
                    {
                        unsigned *l_270 = &l_38;
                    }
                }
                else
                {
                    unsigned *l_273 = &l_38;
                    int l_299 = 0x3EB71C04L;
                    if (((**g_120) || func_43((((*l_273) = g_83) || p_33), l_274, (7L && g_19), ((p_33 > (safe_mod_func_int32_t_s_s((*p_34), ((safe_lshift_func_int8_t_s_s(((*g_158) = p_33), 1)) | (*p_34))))) , l_274), l_279)))
                    {
                        int **l_280 = &g_243;
                        (*g_120) = (p_33 , (*g_120));
                        (*l_280) = ((*g_120) = &l_263);

                        ;
                        ;
                        (**g_120) = ((((void*)0 != l_281) | (*p_34)) > (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*l_163), (((void*)0 != (*g_120)) == l_263))), 6)));
                        (**g_120) = (p_33 >= (((func_43(((((*p_34) < p_33) || ((((void*)0 != &g_108) != g_108) , (((g_85 , (((*l_157) = ((void*)0 == &g_159)) > (*g_158))) == l_286) , g_61))) || 0x089FC940L), (**l_281), (**g_120), l_287, g_52) , 4UL) , g_40) == 0x42L));
                    }
                    else
                    {
                        int *l_300 = &l_299;
                        (*l_300) = ((safe_mul_func_uint8_t_u_u(g_7, ((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u((((*l_251) = ((*g_243) = (((*g_158) | (*g_158)) == p_33))) , (safe_rshift_func_int8_t_s_s((0xC0A38D34L | 0x9BEFF2D9L), 7))), (safe_mul_func_int8_t_s_s(8L, (((((1UL != (((&l_153 == &g_83) & 0x9FL) != l_279)) ^ p_33) || (-6L)) >= 1L) , l_298))))) > 255UL) || 249UL), l_299)) > g_65))) | l_298);
                    }

                    ;
                    ;
                    (*l_163) = (*p_34);
                    for (l_248 = 0; (l_248 != (-6)); l_248 = safe_sub_func_int16_t_s_s(l_248, 1))
                    {
                        (*g_120) = &l_279;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                (*l_251) = (**g_120);
                (*p_34) = (*p_34);
            }
            else
            {
                for (l_38 = 0; (l_38 > 16); l_38 = safe_add_func_int16_t_s_s(l_38, 1))
                {
                    unsigned short *l_311 = &g_83;
                    int l_313 = 0xAADBF9C2L;
                    unsigned char **l_314 = (void*)0;
                    unsigned char **l_315 = (void*)0;
                    unsigned char **l_316 = &l_157;
                    (*g_121) = 0xEEE6405BL;
                    if ((*p_34))
                        break;
                    (*g_121) = func_43(g_40, (*g_66), (safe_add_func_uint16_t_u_u(0UL, (*g_67))), ((p_33 || 4UL) , ((*l_50) = (*g_66))), (*l_251));

                    ;
                    (*g_120) = (((safe_lshift_func_int8_t_s_s(((g_244 , (((((*l_311) = ((0xA6D7L | g_61) | ((*g_158) || (g_108 = 0UL)))) ^ (l_312 != ((l_313 < ((*l_39) = ((**l_50) = l_313))) , ((*l_316) = &g_7)))) , (void*)0) == (void*)0)) < p_33), p_33)) , g_61) , l_163);

                    ;
                }

                ;
                ;
            }

            ;

            ;
            ;
            ;
            if (((+(safe_lshift_func_uint16_t_u_s((p_33 | p_33), 15))) <= (*l_251)))
            {
                (*p_34) = (g_243 == (void*)0);
                (*g_243) = (!(!(*p_34)));
            }
            else
            {
                int l_320 = (-1L);
                int **l_356 = &l_163;
                short *l_382 = &g_52;
                unsigned char *l_403 = &g_7;
                int l_406 = 0xE7BE64DCL;
                unsigned char *l_427 = &g_108;
                (*g_243) = l_319;
                if (((**g_66) , l_320))
                {
                    unsigned short l_329 = 0UL;
                    unsigned *l_334 = &l_38;
                    int l_341 = 0x273B3ADBL;
                    unsigned short l_377 = 0x96BFL;
                    unsigned l_379 = 0xB0A492C2L;
                    short *l_396 = (void*)0;
                    (*g_18) = (safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((*l_163), p_33)) && (*p_34)), g_244));
                    if (((((*l_163) < 0L) > l_263) || (((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(p_33)) & l_329), p_33)) > 0x60F88E62L) , p_33)))
                    {
                        unsigned char *l_340 = &g_108;
                        unsigned char *l_342 = &l_271;
                        char *l_349 = &l_330;
                        int l_352 = 0xF4360D1CL;
                        unsigned short *l_353 = (void*)0;
                        unsigned short *l_354 = &g_85;
                        int l_355 = 0xB329D72DL;
                        (*g_120) = p_34;

                        ;
                        (*l_163) = ((g_65 = p_33) || ((***l_336) = (2UL | ((*g_67) , ((*l_342) = (l_341 = ((*l_340) = ((safe_rshift_func_uint16_t_u_u((l_339 != &g_65), g_40)) , 0x74L))))))));
                        (*p_34) = (safe_mod_func_uint16_t_u_u(func_43((safe_rshift_func_int8_t_s_u((((*l_354) = (l_320 >= (((*l_340) = (l_352 = ((safe_add_func_uint8_t_u_u((((*g_121) , ((*l_349) = ((*g_158) = ((*l_251) = 0xB9L)))) > ((p_33 < p_33) < ((*l_339) = (g_40 != (l_298 || (*g_243)))))), (safe_lshift_func_int8_t_s_u((p_33 != (**g_66)), 6)))) > (*l_163)))) && (*g_158)))) , 0x54L), p_33)), (*g_66), l_320, (*g_66), l_355), g_40));
                        (*l_336) = l_356;

                        ;
                    }
                    else
                    {
                        unsigned *l_361 = &l_38;
                        unsigned **l_362 = (void*)0;
                        unsigned **l_363 = (void*)0;
                        unsigned **l_364 = &l_361;
                        unsigned char *l_365 = &g_108;
                        unsigned l_374 = 0x0C4CCBB0L;
                        unsigned *l_375 = &g_376;
                        (*l_356) = p_34;

                        ;
                        (*g_243) = (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((l_377 = ((g_244 , (((*l_365) = (((*l_364) = l_361) != p_34)) , (0x9D5AL != (((*l_375) = ((((safe_lshift_func_uint16_t_u_s(g_85, ((p_33 | (safe_rshift_func_int8_t_s_s(p_33, 0))) == ((*l_163) = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0xB576L, l_298)), 1UL)) & (*p_34)))))) || 0x187E16B4L) , l_329) , l_374)) , (*l_251))))) != (**g_66))), 4)) <= p_33), (*g_67))) && l_378) < l_379);
                        (**l_336) = p_34;

                        ;
                        (*g_120) = l_361;

                        ;
                    }

                    ;
                    ;
                    ;
                    if (func_43((safe_add_func_uint32_t_u_u(4294967295UL, 0x0C7025D4L)), l_382, (***l_336), ((*g_66) = (*g_66)), ((l_383 == ((safe_lshift_func_int16_t_s_s(l_298, 0)) , &g_65)) <= ((safe_rshift_func_int16_t_s_s(p_33, 15)) || (***l_336)))))
                    {
                        unsigned short l_395 = 0xCF76L;
                        int **l_398 = &l_397;
                        unsigned short *l_405 = &g_85;
                        unsigned short **l_404 = &l_405;
                        (***l_336) = ((safe_sub_func_int32_t_s_s(l_390, (((p_33 , g_85) || func_43(((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((p_33 , 0xBDL), (((((((***l_336) && p_33) <= (*l_163)) , &g_66) == (void*)0) <= 255UL) & 1UL))), 0xFBL)) , g_85), l_264, l_395, l_396, g_52)) | l_341))) <= (*g_158));
                        (*l_398) = ((**l_336) = l_397);

                        ;
                        ;
                        (*g_120) = (void*)0;
                        (*g_243) = (*g_18);
                    }
                    else
                    {
                        unsigned char l_411 = 0x49L;
                        int l_413 = 0x179202ACL;
                        l_263 = (l_406 == ((((safe_sub_func_int16_t_s_s((**g_66), (safe_mul_func_uint8_t_u_u(0UL, (l_341 = (0x1878CFACL || (**g_120))))))) != l_411) & (l_412 , p_33)) , l_379));
                        l_413 = ((*g_121) = 1L);
                    }

                    ;
                    ;
                    (**l_336) = (*l_356);

                    ;
                }
                else
                {
                    (*p_34) = (*p_34);
                    (*l_356) = ((**l_336) = l_414);

                    ;
                    ;
                }

                ;
                ;
                ;
                if (((((safe_add_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((+((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((**g_66), (g_19 >= g_61))), p_33)) == (p_33 == (safe_lshift_func_uint8_t_u_s((0x71L >= ((safe_rshift_func_uint8_t_u_s((((*l_427) = g_244) || (safe_mul_func_int16_t_s_s((**g_66), (l_263 > g_52)))), 5)) & (*l_414))), l_263))))), 0L)) | 1UL) , (*g_243)) >= (*g_18)), 1L)) <= (*p_34)) ^ g_19) , (*g_243)))
                {
                    unsigned l_430 = 0x41E9944DL;
                    unsigned char ***l_432 = &l_431;
                    (*p_34) = l_430;
                    (*l_432) = l_431;
                }
                else
                {
                    int *l_433 = &g_61;
                    return l_433;





                }
                (*g_120) = &l_390;
            }


            ;
            ;
            for (g_108 = 22; (g_108 <= 23); g_108 = safe_add_func_int16_t_s_s(g_108, 1))
            {
                unsigned short l_436 = 0x4D20L;
                int *l_437 = &l_390;
                if (l_436)
                    break;
                p_34 = ((*g_120) = l_437);

                ;
            }

            ;
            (*g_120) = (p_33 , p_34);
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

    return l_438;




}







static unsigned char func_43(unsigned p_44, short * p_45, int p_46, short * p_47, int p_48)
{
    int *l_156 = &g_61;
    for (p_44 = 10; (p_44 != 9); --p_44)
    {
        l_156 = &p_46;

        ;
    }

    ;
    (**g_120) = (*l_156);
    return g_83;
}







static short * func_53(short * p_54, unsigned char p_55)
{
    char l_58 = 0x8AL;
    int *l_62 = &g_19;
    int *l_73 = &g_19;
    short **l_86 = (void*)0;
    short l_105 = (-8L);
    int ***l_114 = (void*)0;
    unsigned char *l_131 = &g_7;
    for (p_55 = 28; (p_55 < 32); p_55 = safe_add_func_int8_t_s_s(p_55, 8))
    {
        int l_59 = (-5L);
        int *l_60 = &g_61;
        char *l_100 = &l_58;
        short *l_116 = &l_105;
        char l_136 = 0x2CL;
        unsigned short *l_146 = &g_85;
        int **l_149 = (void*)0;
        int **l_150 = &l_73;
    }
    (*g_121) = (*l_62);
    for (l_105 = (-19); (l_105 <= (-9)); l_105++)
    {
        (*g_120) = l_73;

        ;
    }

    ;
    l_62 = (*g_120);

    ;
    return (*g_66);


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
