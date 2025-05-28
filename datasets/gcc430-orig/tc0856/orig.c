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


struct S0 {
   unsigned f0 : 30;
   signed f1 : 27;
   signed f2 : 17;
   unsigned f3 : 25;
   signed f4 : 4;
   unsigned f5 : 11;
   unsigned f6 : 29;
   signed f7 : 30;
   signed f8 : 10;
};


static unsigned g_4 = 0UL;
static int g_48 = 1L;
static unsigned long long g_53 = 0UL;
static char g_55 = 0xA2L;
static short g_65 = (-7L);
static unsigned char g_67 = 0x62L;
static short g_78 = (-1L);
static short *g_77 = &g_78;
static struct S0 g_84 = {25706,-1800,-108,5478,3,21,22795,-10567,-20};
static char *g_91 = &g_55;
static char **g_90 = &g_91;
static struct S0 g_100 = {25861,-3807,-359,5371,0,35,18264,16139,6};
static unsigned short g_107 = 1UL;
static int g_115 = 0x7EAFC3DEL;
static int *g_114 = &g_115;
static char g_186 = 7L;
static unsigned long long g_196 = 18446744073709551615UL;
static int g_220 = (-3L);
static unsigned char *g_240 = (void*)0;
static unsigned char **g_239 = &g_240;
static struct S0 *g_307 = &g_100;
static struct S0 **g_306 = &g_307;
static char g_314 = 0xE7L;
static int g_327 = 0x53772DA2L;
static int *g_326 = &g_327;
static int **g_325 = &g_326;
static unsigned char ***g_400 = &g_239;
static int ***g_412 = &g_325;
static unsigned g_419 = 0xE962D3FBL;
static unsigned *g_418 = &g_419;
static unsigned **g_417 = &g_418;
static short g_468 = (-1L);
static int **g_545 = &g_114;
static int *g_601 = (void*)0;
static unsigned short *g_607 = (void*)0;
static unsigned short **g_606 = &g_607;
static unsigned short ***g_605 = &g_606;
static unsigned short g_618 = 65527UL;
static long long g_636 = 0x7A13F41D85E18353LL;
static unsigned long long g_709 = 0UL;



static long long func_1(void);
static int func_2(long long p_3);
static struct S0 func_5(unsigned char p_6, unsigned p_7, long long p_8, unsigned short p_9, unsigned char p_10);
static short func_13(unsigned p_14, unsigned char p_15, char p_16, int p_17);
static int func_20(long long p_21, unsigned short p_22, unsigned short p_23, short p_24, int p_25);
static struct S0 func_26(int p_27, int p_28, unsigned p_29, struct S0 p_30, short p_31);
static int * func_36(int * p_37);
static int * func_38(int * p_39, int * p_40, int p_41, struct S0 p_42);
static int * func_43(int * p_44, int p_45, int * p_46);
static int func_49(int p_50);
static long long func_1(void)
{
    int *l_723 = &g_48;
    struct S0 l_724 = {29257,-2486,198,2921,-2,1,11159,30012,-31};
    struct S0 *l_725 = &g_84;
    unsigned char *l_726 = &g_67;
    int l_731 = (-9L);
    (*l_723) = func_2(g_4);


    ;
    ;

    (*l_725) = ((**g_306) = l_724);
    (*l_725) = (*l_725);
    return (*l_723);
}







static int func_2(long long p_3)
{
    struct S0 l_35 = {6943,7770,-49,640,-3,7,13014,2853,6};
    char l_124 = (-1L);
    unsigned long long *l_420 = &g_196;
    unsigned short *l_486 = &g_107;
    unsigned short **l_485 = &l_486;
    int *l_514 = &g_220;
    unsigned **l_523 = (void*)0;
    char **l_552 = &g_91;
    short **l_556 = &g_77;
    unsigned char ***l_579 = (void*)0;
    int l_591 = 0L;
    int ***l_596 = &g_545;
    struct S0 **l_632 = &g_307;
    char l_634 = 7L;
    long long l_706 = 0x903009D6631C7B46LL;
    int *l_714 = &g_115;
    if ((func_5((safe_add_func_uint64_t_u_u((((-10L) < (((*l_420) = (((g_4 , ((0xDD013D0BB94D0F4FLL >= (g_4 == (((*g_418) = (((((func_13(g_4, (g_4 | (l_35.f1 = ((safe_sub_func_int32_t_s_s(func_20(g_4, (((l_124 = ((func_26(g_4, (safe_sub_func_int16_t_s_s((((((safe_unary_minus_func_int8_t_s(1L)) > 0x4EL) || p_3) > 0L) > 0UL), 0x7DC4L)), p_3, l_35, l_35.f4) , p_3) < g_4)) < g_115) == g_115), l_35.f0, p_3, l_35.f1), p_3)) < l_35.f1))), p_3, (*g_326)) ^ 65531UL) != g_327) ^ l_35.f5) ^ l_35.f8) , 0x66982638L)) & l_35.f0))) , (*g_91))) , 65535UL) != p_3)) != 0x5AF59706343A8D19LL)) ^ p_3), g_327)), p_3, g_4, p_3, p_3) , p_3))
    {
        int l_484 = 0x541A47F7L;
        int *l_516 = &g_220;
        struct S0 l_528 = {3154,-4021,-219,2243,-0,5,240,5664,-29};
        for (g_48 = 0; (g_48 == 10); ++g_48)
        {
            unsigned **l_495 = (void*)0;
            char l_499 = 0x4BL;
            int *l_529 = &g_115;
            char l_539 = 0x25L;
            int *l_540 = &g_115;
        }
    }
    else
    {
        unsigned char l_555 = 247UL;
        int l_559 = 0x77E2F420L;
        unsigned l_568 = 0x9CE1DC2FL;
        short l_598 = 0xDE21L;
        for (g_78 = (-23); (g_78 != 13); g_78 = safe_add_func_uint8_t_u_u(g_78, 5))
        {
            unsigned long long *l_550 = &g_53;
            int l_551 = 0x28FA6E7BL;
            (*l_514) = ((((*g_418) = p_3) <= (func_13((g_84.f3 = p_3), (safe_add_func_int64_t_s_s(g_100.f7, (((((l_550 != &g_53) || func_49((p_3 <= 0x53L))) | (*l_514)) | g_468) == 0x1A56E3F1L))), g_100.f7, l_551) > g_84.f1)) , l_551);
            (*g_306) = (*g_306);
        }
        if (((l_552 == (void*)0) , ((safe_add_func_int32_t_s_s(l_555, (p_3 | func_13((**g_417), ((l_555 , (((void*)0 == l_556) , (safe_rshift_func_uint16_t_u_s(((l_559 = (!0UL)) < 1UL), 9)))) >= g_419), (**g_90), p_3)))) <= (*l_514))))
        {
            int l_566 = 0x38227B8DL;
            unsigned l_594 = 0xACA550A6L;
            int *l_597 = &g_48;
            unsigned char *l_599 = (void*)0;
            if (((+p_3) <= (*l_514)))
            {
                return (*l_514);
            }
            else
            {
                short l_590 = 2L;
                int l_592 = 0xC7686749L;
                unsigned l_593 = 2UL;
                int l_595 = 2L;
                for (g_53 = 6; (g_53 < 9); g_53++)
                {
                    int l_567 = 0x0F99AD8EL;
                    l_568 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(func_13((*l_514), (l_566 == p_3), (l_567 && p_3), p_3), l_567)), 9));
                    (*l_514) = ((safe_rshift_func_uint16_t_u_u(((**l_485) = g_100.f6), p_3)) && ((l_595 = ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(8UL, (p_3 > ((!(safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(0L, l_567)) , ((((void*)0 == l_579) , (!(safe_sub_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((l_592 = (((*l_486) = ((((safe_sub_func_uint16_t_u_u(func_13((safe_add_func_int8_t_s_s((func_13((((safe_mod_func_int16_t_s_s(l_566, p_3)) & p_3) <= (**g_417)), l_567, l_559, l_590) <= l_567), (*g_91))), l_591, p_3, (*g_326)), l_559)) || l_559) <= l_590) & 0xCFL)) != 0L)), (*g_91))) ^ g_4) ^ 1L), l_593)))) | 18446744073709551615UL)), l_594))) > p_3)))) , (*g_77)), g_84.f0)) , l_594)) >= 0x9FL));
                    l_559 = ((*l_514) = (&g_545 == l_596));
                }
            }
            l_597 = ((*g_545) = (void*)0);

            ;
            ;
            (*g_307) = func_26((*g_326), p_3, p_3, func_5(p_3, p_3, p_3, (0x43L >= (g_67 = ((5L >= ((p_3 , 2L) || l_598)) , (*l_514)))), p_3), p_3);

            ;
        }
        else
        {
            int *l_600 = &g_220;
            (*g_306) = (*g_306);
            g_601 = ((*g_545) = func_36(l_600));

            ;
            ;
        }

        ;
        ;
    }


    ;
    (**l_596) = l_514;

    ;
    if ((!(((*l_514) = (***l_596)) < func_49((*g_326)))))
    {
        unsigned short ****l_602 = (void*)0;
        unsigned short ***l_604 = &l_485;
        unsigned short ****l_603 = &l_604;
        (*g_545) = func_36((((*l_514) || func_49((((*l_603) = (void*)0) == ((p_3 ^ p_3) , g_605)))) , (*g_545)));

        ;
        ;
        for (g_53 = (-24); (g_53 == 34); g_53++)
        {
            (*l_514) = p_3;
            if ((*g_114))
                break;
        }
    }
    else
    {
        struct S0 l_612 = {17900,-3242,101,444,-2,34,12448,29336,12};
        short *l_637 = &g_65;
        int *l_641 = &g_115;
        unsigned char **l_665 = &g_240;
        unsigned ***l_692 = &g_417;
        if (p_3)
        {
            (*g_605) = &l_486;

            ;
        }
        else
        {
            unsigned **l_614 = &g_418;
            unsigned ***l_615 = &g_417;
            int l_633 = 0L;
            struct S0 l_638 = {16518,-3538,-298,4268,-3,7,256,16947,-6};
            unsigned char **l_676 = &g_240;
            unsigned short l_695 = 0x010DL;
            int *l_716 = &g_48;
            for (g_55 = 0; (g_55 != 18); g_55 = safe_add_func_int8_t_s_s(g_55, 1))
            {
                struct S0 l_613 = {7916,11055,-65,51,1,8,7020,22248,-14};
                (*g_114) = (*g_114);
                (*l_514) = 6L;
                (**g_306) = (**g_306);
                l_613 = l_612;
            }
            (*l_615) = l_614;
            if ((*g_114))
            {
                unsigned short l_621 = 0x907CL;
                char **l_626 = (void*)0;
                struct S0 **l_631 = (void*)0;
                long long *l_635 = &g_636;
                int *l_642 = &g_220;
                unsigned **l_685 = &g_418;
                unsigned short l_710 = 1UL;
                (***l_596) = (safe_add_func_uint64_t_u_u(p_3, ((((*g_418) = ((**g_417) > l_612.f0)) >= (8L > (g_100.f7 > (g_618 = ((0x1995L == p_3) , 0L))))) ^ (safe_rshift_func_uint16_t_u_s((((l_612.f1 && g_314) | l_621) , l_621), p_3)))));
                if ((((safe_lshift_func_int8_t_s_u((g_55 , ((*l_514) > ((*l_635) = (g_84.f2 > (safe_mod_func_uint32_t_u_u((l_626 != ((safe_rshift_func_uint8_t_u_s(((((((*g_77) = func_13((*g_418), (safe_sub_func_int16_t_s_s((l_631 != l_632), (l_633 == (((*g_77) = (*g_77)) < g_419)))), l_633, p_3)) != l_633) < 0L) <= p_3) , l_612.f8), p_3)) , l_626)), l_634)))))), 3)) , (void*)0) != l_637))
                {
                    (**l_596) = (void*)0;

                    ;
                    (**l_632) = l_638;
                    for (l_591 = 0; (l_591 < 25); l_591 = safe_add_func_uint16_t_u_u(l_591, 1))
                    {
                        (**l_596) = l_641;

                        ;
                        (**g_306) = (**l_632);
                    }

                    ;
                    (*g_545) = l_642;

                    ;
                }
                else
                {
                    char l_649 = 0x81L;
                    (*g_306) = (*g_306);
                    (*g_545) = (l_638.f4 , l_641);

                    ;
                    (*l_641) = func_20(g_65, ((func_13((*g_418), (safe_add_func_uint64_t_u_u(func_13((65531UL || 0L), (((func_13(((**l_632) , (safe_add_func_uint64_t_u_u(g_196, ((**g_417) ^ (safe_lshift_func_uint16_t_u_s(l_649, 10)))))), ((*l_642) = ((l_649 , l_556) == l_556)), p_3, l_649) , 0x7AABD8BFL) && 4294967290UL) , 0x68L), (*g_91), p_3), p_3)), l_638.f5, p_3) | p_3) != l_649), p_3, (*g_77), p_3);


                }


                for (g_327 = (-21); (g_327 == 23); g_327 = safe_add_func_int32_t_s_s(g_327, 2))
                {
                    char l_652 = 1L;
                    unsigned ***l_693 = &l_614;
                    if (((*l_641) = ((*l_514) = ((*g_77) || 9UL))))
                    {
                        (*g_545) = &g_220;

                        ;
                    }
                    else
                    {
                        int *l_682 = &l_633;
                        (*l_641) = (((l_652 == (((*l_514) = ((65535UL && ((**l_485) = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((((((p_3 , ((p_3 == g_636) | p_3)) > ((safe_sub_func_uint16_t_u_u((func_49((safe_rshift_func_int8_t_s_s((+(*l_514)), 1))) < (((safe_lshift_func_uint8_t_u_s(p_3, (*l_514))) , 0x2322L) == (*l_641))), 0xA543L)) != g_84.f0)) | p_3) , p_3) ^ (*g_77)), l_652)), p_3)) >= g_84.f2))) | 0x22L)) > (-1L))) > g_84.f8) < 7L);
                        (*l_514) = (safe_add_func_uint16_t_u_u((((p_3 <= p_3) , (l_665 != ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_67 = (0xA06CCF5EEEAFDC7DLL & (*l_514))), (((safe_rshift_func_int16_t_s_s(((**l_556) = (safe_mod_func_int64_t_s_s((l_652 || 0x93F9L), g_618))), (*l_642))) && l_638.f8) >= (*l_641)))), (*l_642))) , l_676))) || p_3), 0x1402L));
                        (*l_682) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_3, (safe_unary_minus_func_uint8_t_u((func_49((*l_514)) && (0x728BEDF8L < (((*l_641) = ((*l_514) = p_3)) , p_3))))))), 2));
                        (**l_596) = &g_48;

                        ;
                    }

                    ;
                    for (g_419 = 0; (g_419 != 56); g_419++)
                    {
                        unsigned char l_694 = 1UL;
                        struct S0 *l_696 = &g_84;
                        unsigned ***l_699 = &l_523;
                        l_685 = ((*l_615) = (void*)0);

                        ;
                        ;
                    }
                    for (g_107 = 0; (g_107 <= 59); g_107 = safe_add_func_uint32_t_u_u(g_107, 1))
                    {
                        (**l_632) = (*g_307);
                    }
                }

                ;
                ;
                (**g_306) = l_638;
            }
            else
            {
                int *l_713 = &l_633;
                int **l_715 = &l_514;
                l_716 = func_38(l_713, func_43(((*g_545) = &l_633), g_84.f5, ((*l_715) = ((((*g_605) = (void*)0) == (void*)0) , l_714))), (((*g_418) && 6UL) ^ g_4), l_612);

                ;
                ;
                ;
            }


            ;
            ;
            ;
            (*l_714) = (*l_641);
        }


        ;
        ;
        ;
    }


    ;
    ;
    ;
    for (g_115 = 0; (g_115 != (-27)); --g_115)
    {
        int *l_721 = &g_220;
        struct S0 l_722 = {13621,5352,185,2365,1,18,17980,-874,15};
        (*l_721) = (safe_lshift_func_uint8_t_u_s(p_3, 7));
        (**g_306) = l_722;
    }
    return (*l_514);


}







static struct S0 func_5(unsigned char p_6, unsigned p_7, long long p_8, unsigned short p_9, unsigned char p_10)
{
    unsigned l_423 = 6UL;
    int *l_427 = &g_48;
    int l_444 = (-5L);
    struct S0 l_446 = {32118,-7227,-75,1213,-2,26,17738,-17746,-4};
    unsigned char l_470 = 0xB8L;
    int l_471 = 0x72298C6AL;
    if ((safe_sub_func_uint8_t_u_u(l_423, (l_423 & (**g_90)))))
    {
        int **l_424 = (void*)0;
        int **l_425 = &g_114;
        struct S0 l_426 = {27587,-2836,296,1768,2,33,1296,-18587,-21};
        unsigned char **l_428 = &g_240;
        (*l_425) = &g_115;

        ;
        (**g_306) = func_26((**l_425), p_6, l_423, l_426, (*g_77));
        l_427 = l_427;
        (*g_400) = l_428;
    }
    else
    {
        unsigned char *l_435 = &g_67;
        int l_442 = 4L;
        int l_443 = 0L;
        struct S0 l_445 = {24113,-9644,-188,3672,2,14,21484,13097,25};
        for (g_67 = 0; (g_67 > 54); g_67 = safe_add_func_uint8_t_u_u(g_67, 7))
        {
            (**g_306) = (*g_307);
        }
        if (((safe_mod_func_int32_t_s_s(p_7, (safe_lshift_func_uint16_t_u_u(((p_9 = (((*l_435) = (((**g_417) = (((*g_90) = (*g_90)) != (void*)0)) & ((*l_427) = p_8))) , p_7)) && p_6), 11)))) , 0x72056563L))
        {
            unsigned short l_455 = 0x8FC2L;
            (*g_307) = l_445;
            (*l_427) = (l_446 , (safe_lshift_func_int16_t_s_u(((void*)0 == &g_307), ((safe_mod_func_int16_t_s_s((((*l_427) >= (*g_77)) & ((safe_lshift_func_int8_t_s_u((((!(((func_49((((*g_418) = (**g_417)) , (*l_427))) , ((safe_mod_func_int16_t_s_s(func_49((**g_325)), l_443)) < g_100.f2)) || 1UL) > p_6)) , 246UL) & 1UL), l_455)) | p_8)), (*l_427))) , l_445.f2))));
        }
        else
        {
            unsigned l_458 = 0UL;
            short *l_467 = &g_468;
            long long l_469 = 0x074B489054EB9D77LL;
            (**g_306) = (**g_306);
        }
    }
    (*l_427) = l_471;
    for (g_220 = 0; (g_220 < 21); g_220++)
    {
        int *l_476 = &g_220;
        int *l_477 = &g_220;
        for (g_468 = 0; (g_468 != (-18)); --g_468)
        {
            int **l_478 = &g_114;
            int **l_479 = (void*)0;
            int **l_480 = &l_477;
            struct S0 l_481 = {7936,-10450,31,3416,-1,1,9510,30776,22};
            (*l_478) = func_38(((*l_480) = &g_115), &g_220, (*l_427), ((*g_307) = l_481));

            ;
            ;
        }

        ;
        l_446 = l_446;
        return l_446;
    }
    return l_446;
}







static short func_13(unsigned p_14, unsigned char p_15, char p_16, int p_17)
{
    char l_381 = 0x90L;
    struct S0 l_385 = {2262,-4055,320,4469,0,40,18766,16373,-7};
    char ***l_405 = &g_90;
    short **l_409 = &g_77;
    l_381 = g_100.f8;
    for (g_115 = (-6); (g_115 >= (-1)); g_115 = safe_add_func_int64_t_s_s(g_115, 7))
    {
        int *l_384 = &g_115;
        int **l_386 = &g_114;
        int ***l_410 = &g_325;
        struct S0 l_414 = {23461,9858,-191,3106,0,7,22362,-13738,30};
        unsigned *l_416 = (void*)0;
        unsigned **l_415 = &l_416;
        (*l_386) = func_38(((**g_325) , l_384), l_384, p_14, l_385);

        ;
        for (p_15 = 23; (p_15 == 13); p_15--)
        {
            unsigned char l_397 = 0UL;
            unsigned char ***l_401 = (void*)0;
            unsigned char ****l_402 = &l_401;
            int *l_406 = (void*)0;
            int l_407 = 0x299F0A38L;
            struct S0 l_408 = {8356,-6830,-130,4659,-1,37,21761,16193,14};
            int ****l_411 = &l_410;
        }
    }
    return p_14;
}







static int func_20(long long p_21, unsigned short p_22, unsigned short p_23, short p_24, int p_25)
{
    unsigned long long l_127 = 0x652DBFB6B4A2447ELL;
    int l_128 = 2L;
    unsigned long long *l_129 = &g_53;
    struct S0 l_130 = {28682,-10832,-133,3105,0,2,7486,12121,-5};
    struct S0 *l_244 = &g_84;
    int **l_380 = &g_114;
    (*g_114) = (*g_114);
    (*g_114) = (((safe_mod_func_int8_t_s_s(l_127, (l_128 = p_22))) != (-7L)) == ((*l_129) = p_21));
    if ((l_130 , p_23))
    {
        unsigned l_135 = 8UL;
        int *l_138 = &g_48;
        unsigned short l_164 = 0x57EFL;
        struct S0 l_176 = {11410,3810,350,4897,-2,26,11438,-27575,-6};
        unsigned l_276 = 0x26888C05L;
        char ***l_378 = &g_90;
        if ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((l_135 > g_84.f7), 10)), ((safe_mod_func_int64_t_s_s(func_49(((void*)0 != l_138)), l_130.f6)) == ((((void*)0 == &p_22) , ((p_22 & (*l_138)) && 0xB019L)) , 6UL)))))
        {
            unsigned char l_142 = 0x41L;
            int *l_147 = &g_48;
            short *l_179 = &g_65;
            char l_189 = 4L;
            unsigned char l_226 = 0xAEL;
            char l_234 = 0L;
            struct S0 l_246 = {7285,6192,-211,3995,-1,26,7797,-12758,-9};
            if (p_21)
            {
                int l_145 = 2L;
                short **l_168 = &g_77;
                struct S0 l_181 = {20175,7586,-69,1847,0,32,2449,31089,20};
                unsigned *l_215 = &l_135;
                int *l_264 = (void*)0;
                unsigned char *l_272 = (void*)0;
                unsigned char *l_273 = (void*)0;
                unsigned char *l_274 = (void*)0;
                unsigned char *l_275 = &g_67;
                if (((*l_138) = 0L))
                {
                    struct S0 *l_139 = &g_84;
                    int l_159 = 0x831FD11EL;
                    unsigned *l_165 = (void*)0;
                    unsigned *l_166 = &l_135;
                    unsigned short *l_167 = &g_107;
                    int **l_200 = &l_138;
                    (*l_139) = g_100;
                    if (((**g_90) , (((func_49((func_49(g_84.f7) >= g_84.f4)) | p_24) , p_25) , ((safe_lshift_func_int16_t_s_u(l_142, p_24)) || p_21))))
                    {
                        (*l_138) = p_24;
                    }
                    else
                    {
                        unsigned char *l_144 = &l_142;
                        unsigned char **l_143 = &l_144;
                        int l_146 = 0L;
                        int *l_148 = &l_128;
                        (*l_139) = func_26(p_23, ((((*l_138) >= ((((*g_114) , ((((g_67 = 9UL) == (*l_138)) , &g_67) == ((*l_143) = g_91))) , (g_84.f2 >= p_24)) < l_145)) & l_142) != l_146), g_84.f0, g_84, p_24);

                        ;
                        ;
                        l_148 = func_36(l_147);

                        ;
                    }
                    if ((safe_add_func_int16_t_s_s((*g_77), ((*l_167) = ((safe_add_func_int64_t_s_s((p_22 == l_145), (((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_159, ((safe_add_func_uint8_t_u_u(((*l_138) || (((0UL != ((*l_166) = (safe_rshift_func_uint8_t_u_s(l_164, (**g_90))))) < (l_145 >= 5UL)) ^ (-6L))), p_22)) & g_100.f8))) & g_4), p_21)) > l_130.f7) >= 0xAD9788A37CDCD6FDLL), 0)) , &g_78) != (void*)0))) && l_130.f3)))))
                    {
                        long long l_172 = 0xEC3C314682580673LL;
                        unsigned long long *l_174 = (void*)0;
                        unsigned long long *l_175 = &l_127;
                        int *l_177 = &g_48;
                        int **l_178 = &g_114;
                        (*l_139) = func_26(((((p_24 , l_168) == l_168) , (((func_49(func_49((((*l_175) = ((*l_129) = (((((((*g_77) = p_23) & g_100.f5) > (safe_unary_minus_func_uint64_t_u(((((safe_add_func_uint16_t_u_u(l_172, (((safe_unary_minus_func_uint64_t_u(func_49(p_22))) == p_24) && g_100.f6))) != 0x2DBEL) , g_100.f5) != p_24)))) > (*l_147)) , p_25) , p_21))) & 0x0C7B6A1989BE62DBLL))) <= l_172) && g_100.f4) > 0x6FL)) , l_127), p_22, g_84.f8, l_176, p_25);

                        ;
                        (*l_178) = l_177;

                        ;
                    }
                    else
                    {
                        struct S0 l_180 = {31483,-4935,210,4896,-1,20,14473,-27764,-4};
                        char *l_184 = (void*)0;
                        char *l_185 = &g_186;
                        char *l_190 = &l_189;
                        char ***l_193 = &g_90;
                        unsigned char *l_199 = &g_67;
                        l_181 = func_26(p_23, ((void*)0 == l_179), l_145, l_180, p_21);

                        ;
                        (*l_147) = ((func_49(p_23) && 255UL) & (l_159 , ((*l_190) = (((*l_166) = (~g_100.f5)) != (((*l_185) = 0xD3L) && ((g_100.f6 != (0x511DFB01F2DFD3FBLL > (safe_rshift_func_uint8_t_u_s((*l_138), l_189)))) & g_107))))));
                        (*l_138) = (safe_sub_func_uint8_t_u_u(((*l_199) = ((p_25 == g_100.f8) , ((((void*)0 == l_193) != (safe_add_func_uint32_t_u_u(g_196, (*g_114)))) | (safe_lshift_func_uint16_t_u_s((*l_138), 1))))), ((*l_138) , (**g_90))));
                    }
                    (*l_200) = &g_48;
                }
                else
                {
                    int l_205 = 0L;
                    char *l_208 = &g_186;
                    int *l_209 = &l_205;
                    int **l_210 = &g_114;
                    (*l_210) = func_38(&g_115, func_43(l_138, l_130.f1, &g_115), ((*l_209) = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_205 <= ((*l_208) = (((l_181.f4 = l_128) != p_25) , (safe_lshift_func_int16_t_s_u((*g_77), g_4))))), (*g_91))), 7))), g_100);

                    ;
                }
                (*g_114) = ((func_49(p_24) && (*l_138)) && (safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(func_49(((((*l_215) = g_84.f3) == func_49((*l_138))) ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_220, ((safe_lshift_func_int16_t_s_s(9L, 11)) ^ (0x8AB4L & g_84.f3)))) != p_21), (*g_77))))), g_84.f7)), 12)));
                for (p_24 = 9; (p_24 < 24); ++p_24)
                {
                    short l_225 = 0xAABCL;
                    (*l_147) = 0L;
                    if ((func_49(p_25) , (*g_114)))
                    {
                        return l_225;
                    }
                    else
                    {
                        char *l_233 = &g_186;
                        unsigned char *l_235 = (void*)0;
                        unsigned char *l_236 = (void*)0;
                        unsigned char *l_237 = &l_226;
                        unsigned long long *l_238 = &g_196;
                        unsigned char ***l_241 = &g_239;
                        int **l_242 = (void*)0;
                        int **l_243 = &l_138;
                        struct S0 **l_245 = &l_244;
                        (*l_243) = func_36(func_38(func_36((func_49(((l_226 = (*l_147)) || (safe_rshift_func_int16_t_s_s(0x7C48L, (safe_lshift_func_int8_t_s_u(((*l_233) = (safe_lshift_func_int8_t_s_s(((**g_90) = (*g_91)), 3))), (((*l_241) = (((*l_138) , (((*l_238) = ((*l_129) = (l_225 != ((*l_237) = l_234)))) < g_84.f6)) , g_239)) != &g_240))))))) , (void*)0)), l_215, g_84.f5, g_84));

                        ;
                        (*l_245) = l_244;
                        l_181 = l_246;
                    }

                    ;
                    if ((((*l_147) < (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_130.f5 <= ((**g_90) = (p_25 < (+(l_246 , ((*l_129) = p_23)))))), (p_24 , (l_225 , g_48)))), ((l_176 , (*l_138)) && p_21)))) > 0x38252909BAAA912ALL))
                    {
                        unsigned char l_255 = 0x4EL;
                        unsigned short *l_260 = &l_164;
                        unsigned short *l_263 = &g_107;
                        (*g_114) = (safe_rshift_func_uint16_t_u_s(l_225, 15));
                        (*g_114) = (l_255 == (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x8213L, ((*l_263) = (g_115 | (((!((*l_138) = (((g_100.f7 || func_49(g_48)) ^ ((((((((*l_260) = g_100.f4) | (safe_rshift_func_uint16_t_u_s(g_115, 0))) | 0x0D41L) || p_24) >= p_24) < p_24) , (-8L))) ^ p_21))) , l_225) , (*l_147)))))), 6)));
                        (*l_138) = (((void*)0 == l_260) , p_23);
                    }
                    else
                    {
                        l_264 = func_36(&l_128);

                        ;
                    }
                }

                ;
                (*l_138) = ((p_25 , (p_24 | ((*l_147) < (safe_sub_func_uint32_t_u_u(p_23, ((((*l_275) = (safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_s(p_24, (safe_sub_func_uint8_t_u_u((((func_49((*l_138)) , func_49(g_100.f6)) ^ (*l_147)) <= 18446744073709551610UL), p_22)))) , (*g_77))))) | (*l_147)) < 0x7871L)))))) == l_276);
            }
            else
            {
                g_114 = (void*)0;

                ;
            }

            ;
            for (l_189 = 28; (l_189 >= (-9)); l_189--)
            {
                (*l_138) = l_130.f4;
            }
            l_246 = ((*l_244) = func_26(p_23, g_100.f7, p_24, g_84, (p_23 == p_21)));

            ;
        }
        else
        {
            long long l_279 = 0x47BCE47EAB302B97LL;
            int l_300 = 0L;
            int *l_308 = &g_48;
            struct S0 l_310 = {14097,-1984,170,5109,-3,34,11345,3080,6};
            int l_345 = 0xBEFE16E3L;
            long long *l_374 = (void*)0;
            long long *l_375 = (void*)0;
            long long *l_376 = &l_279;
            int *l_377 = &l_345;
            (*g_114) = ((g_84.f8 & 0xB587L) | (*g_91));
            if (func_49(((((p_25 <= (((*g_77) = (*g_77)) && l_279)) && func_49(((p_21 = g_220) , (safe_lshift_func_uint8_t_u_u(0xF1L, (safe_lshift_func_uint16_t_u_u(((*g_91) || func_49(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((p_23 , l_279), (0xD4L < 0xCDL))) > p_21), 12)) , 0L))), 3))))))) ^ p_25) , 0xE0126B19L)))
            {
                int l_290 = 0x9D257C1AL;
                int *l_293 = &g_220;
                struct S0 l_309 = {25649,996,-38,5653,-3,28,1756,20505,3};
                unsigned char *l_317 = &g_67;
                unsigned *l_320 = &l_276;
                unsigned l_355 = 0x9C6F2927L;
                unsigned short l_362 = 0UL;
                (*l_244) = g_84;
                if (((*l_138) = ((safe_sub_func_int32_t_s_s(l_290, p_23)) || func_49(p_25))))
                {
                    int l_291 = 1L;
                    if (l_291)
                    {
                        int **l_292 = &g_114;
                        (*g_114) = (g_115 != (-2L));
                        (*l_292) = l_138;

                        ;
                        (*g_114) = (func_49(p_25) <= l_130.f6);
                    }
                    else
                    {
                        (*l_138) = func_49(g_100.f4);
                    }
                }
                else
                {
                    int **l_294 = (void*)0;
                    int **l_295 = &l_138;
                    unsigned char *l_313 = &g_67;
                    (*l_295) = l_293;

                    ;
                    for (p_23 = (-5); (p_23 < 35); p_23 = safe_add_func_uint64_t_u_u(p_23, 5))
                    {
                        int *l_301 = &g_115;
                        if ((*l_138))
                            break;
                        l_300 = ((safe_sub_func_uint32_t_u_u((l_176 , g_107), func_49(p_24))) , 1L);
                    }
                    (**g_306) = func_26((*l_308), (&l_308 == (void*)0), p_24, l_309, (((*l_293) <= (((((*l_313) = (((l_310 , 9UL) || func_49(((safe_add_func_uint8_t_u_u((0xFEL != 1L), 7UL)) , (*l_138)))) == p_25)) & g_314) && (**g_90)) > (*l_308))) & p_23));

                    ;
                }

                ;
                if ((((*l_293) | 2L) > ((*l_320) = (g_65 == (!((*g_307) , ((l_130.f4 > ((*l_317) = (0UL && p_21))) && (safe_rshift_func_int16_t_s_s(((*g_77) | (((p_22 > p_25) || g_84.f3) > p_25)), (*g_77))))))))))
                {
                    int *l_332 = &g_220;
                    struct S0 l_338 = {921,-6151,-171,2507,0,11,11403,16702,-10};
                    for (p_25 = (-18); (p_25 < 14); p_25 = safe_add_func_int8_t_s_s(p_25, 2))
                    {
                        g_114 = &g_48;

                        ;
                    }
                    for (g_196 = 0; (g_196 >= 11); g_196 = safe_add_func_uint16_t_u_u(g_196, 9))
                    {
                        int ***l_328 = &g_325;
                        long long *l_331 = &l_279;
                        struct S0 l_333 = {21020,998,342,2301,3,26,4339,18505,8};
                        (*l_328) = g_325;
                        l_332 = &g_115;

                        ;
                        (*g_307) = l_333;
                    }

                    ;
                    if ((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_114), (func_49((*g_326)) , (safe_sub_func_int32_t_s_s(((*g_114) & ((l_338 , 0L) , ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_25, 5)), (l_130.f2 , (*g_77)))) != (*l_293)))), p_23))))))
                    {
                        long long *l_346 = &l_279;
                        int l_349 = 0xDBCEEC59L;
                        int **l_352 = &l_332;
                        (**g_306) = (*g_307);
                        (*l_332) = ((safe_lshift_func_uint16_t_u_u((l_345 != (g_100.f4 != (p_21 = ((+p_24) || ((*l_346) = 0x28A99B2E194D7DD9LL))))), 10)) | ((((**g_90) = (((safe_mod_func_int64_t_s_s(l_349, p_24)) < ((0x51CB3ACDL || ((safe_sub_func_int16_t_s_s((*l_308), (g_4 & (*l_293)))) || p_24)) >= 7UL)) > (*l_332))) ^ p_25) , g_100.f6));
                        (*l_352) = &g_220;

                        ;
                    }
                    else
                    {
                        int l_356 = (-1L);
                        l_356 = ((*l_293) = ((safe_lshift_func_int16_t_s_s(l_355, 14)) ^ (*l_332)));
                        return (*l_332);
                    }

                    ;
                    (*g_306) = (*g_306);
                }
                else
                {
                    int *l_359 = &l_128;
                    struct S0 l_360 = {25356,2232,-67,5500,2,43,6738,-24974,1};
                    char *l_361 = &g_186;
                    if ((((safe_mod_func_int64_t_s_s(g_48, func_49((((*l_359) = ((*l_293) = ((((*g_91) = p_22) >= p_23) ^ g_84.f0))) == (*g_114))))) < (g_314 ^ (~(((*l_361) = (l_360 , 9L)) && l_362)))) > 0xA1FDL))
                    {
                        int *l_363 = &g_48;
                        int **l_364 = &l_308;
                        unsigned char l_365 = 0xC8L;
                        l_363 = l_138;

                        ;
                        (*l_364) = &g_115;

                        ;
                        l_308 = ((p_24 = ((*l_359) , ((((*g_91) = (func_49((*l_293)) , (p_21 < ((*l_138) = (*g_77))))) || func_49((**g_325))) || l_365))) , &l_300);

                        ;
                    }
                    else
                    {
                        return p_24;
                    }

                    ;
                    for (l_345 = 4; (l_345 != (-22)); --l_345)
                    {
                        int **l_368 = (void*)0;
                        int **l_369 = (void*)0;
                        int **l_370 = &g_114;
                        (*l_244) = l_309;
                        (*l_370) = &g_48;

                        ;
                        (**g_306) = l_309;
                    }
                    for (l_127 = 0; (l_127 != 39); ++l_127)
                    {
                        l_359 = func_36(func_36(&l_128));

                        ;
                        ;
                        (*l_359) = (*g_114);
                    }

                    ;
                }

                ;
            }
            else
            {
                struct S0 l_373 = {2247,-9733,-250,5466,-2,12,6453,-31998,-7};
                l_373 = (*l_244);
                return l_373.f6;
            }

            ;
            ;
            (*l_138) = (p_23 && (func_26((**g_325), (((((*g_77) = func_49(((*l_377) = (0UL || (((*l_376) = p_25) == p_22))))) != l_127) == (&g_90 != l_378)) < (*l_138)), (*l_138), l_310, p_25) , p_21));
        }

        ;
    }
    else
    {
        long long l_379 = 0xFC572CB7CAE5FA1DLL;
        l_379 = ((*g_114) = (4294967288UL && l_130.f2));
    }
    (*l_380) = &l_128;

    ;
    return p_21;


}







static struct S0 func_26(int p_27, int p_28, unsigned p_29, struct S0 p_30, short p_31)
{
    int *l_47 = &g_48;
    char *l_54 = &g_55;
    int l_116 = 0x757C61DAL;
    struct S0 l_117 = {25720,-6499,-295,153,-3,1,21996,31782,-6};
    l_47 = func_36(func_38(func_43(l_47, func_49((safe_rshift_func_uint8_t_u_s(((g_53 , ((*l_54) = g_4)) <= (1UL | ((g_53 , l_54) != ((*l_47) , l_54)))), (p_30.f6 , (*l_47))))), &g_48), g_114, l_116, l_117));

    ;
    return p_30;
}







static int * func_36(int * p_37)
{
    struct S0 l_120 = {28789,9011,-244,435,-1,27,6051,-12197,4};
    struct S0 *l_121 = &g_100;
    int *l_122 = &g_48;
    int **l_123 = &l_122;
    (*l_121) = l_120;
    (*l_121) = (*l_121);
    g_114 = &g_115;

    ;
    (*l_123) = l_122;
    return &g_48;


}







static int * func_38(int * p_39, int * p_40, int p_41, struct S0 p_42)
{
    struct S0 l_118 = {11489,4736,-81,1663,3,3,18278,-12782,13};
    struct S0 *l_119 = &l_118;
    (*l_119) = l_118;
    return &g_48;


}







static int * func_43(int * p_44, int p_45, int * p_46)
{
    char ***l_92 = &g_90;
    struct S0 *l_93 = &g_84;
    int l_101 = (-10L);
    long long l_102 = 2L;
    int l_103 = 0xE664DD2FL;
    int *l_109 = &l_101;
    int *l_113 = &l_101;
    (*l_92) = g_90;
    (*l_93) = g_84;
    if (((safe_mod_func_uint16_t_u_u(65535UL, ((p_45 > (g_67 != 0x4EB4CA122FC4CEA7LL)) ^ p_45))) & (g_55 <= ((!g_67) & (((safe_mod_func_uint64_t_u_u(g_48, ((safe_lshift_func_int16_t_s_u(((((g_100 , 18446744073709551615UL) , &g_53) == &g_53) , (*g_77)), g_4)) & p_45))) < l_101) | l_102)))))
    {
        unsigned short *l_106 = &g_107;
        struct S0 l_111 = {8112,-2396,105,1702,-3,13,9568,-18033,31};
        (*p_46) = l_103;
        if ((safe_mod_func_uint16_t_u_u(((*l_106) = g_48), p_45)))
        {
            struct S0 l_108 = {15591,960,-9,2580,-1,20,131,-5727,-5};
            int **l_110 = &l_109;
            (*l_93) = l_108;
            (*p_46) = g_84.f6;
            (*l_110) = l_109;
        }
        else
        {
            (*l_93) = l_111;
            (*l_109) = (-1L);
            (*p_44) = (*p_46);
            (*l_109) = 0x6939AD6FL;
        }
    }
    else
    {
        int **l_112 = &l_109;
        (*l_112) = &p_45;

        ;
        (*p_44) = ((void*)0 == (**l_92));
    }

    ;
    return &g_48;


}







static int func_49(int p_50)
{
    char *l_56 = &g_55;
    char **l_57 = &l_56;
    int l_62 = (-1L);
    int l_63 = 0L;
    short *l_64 = &g_65;
    unsigned char *l_66 = &g_67;
    unsigned long long *l_68 = &g_53;
    char *l_69 = &g_55;
    struct S0 l_87 = {15261,-7587,291,4007,0,27,4874,15670,28};
    int *l_89 = &l_62;
    int **l_88 = &l_89;
    l_62 = ((((*l_69) = (((*l_57) = l_56) != (((safe_lshift_func_uint16_t_u_s((((((*l_68) = (((*l_64) = (safe_mod_func_uint32_t_u_u(0x95B172C6L, (l_62 & (l_63 = 18446744073709551606UL))))) ^ ((&g_48 != ((g_4 >= ((l_62 & (((*l_66) = (((void*)0 == &g_48) < g_48)) >= p_50)) | l_62)) , &l_62)) , 0x42D3L))) < l_62) & g_4) >= 0xE77DF0EBL), 3)) != l_62) , l_66))) | 1UL) , 0x7F16C3B1L);
    for (l_62 = 7; (l_62 >= (-16)); l_62--)
    {
        unsigned long long *l_72 = &g_53;
    }
    (*l_88) = (void*)0;

    ;
    return g_84.f8;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_84.f4, "g_84.f4", print_hash_value);
    transparent_crc(g_84.f5, "g_84.f5", print_hash_value);
    transparent_crc(g_84.f6, "g_84.f6", print_hash_value);
    transparent_crc(g_84.f7, "g_84.f7", print_hash_value);
    transparent_crc(g_84.f8, "g_84.f8", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_100.f5, "g_100.f5", print_hash_value);
    transparent_crc(g_100.f6, "g_100.f6", print_hash_value);
    transparent_crc(g_100.f7, "g_100.f7", print_hash_value);
    transparent_crc(g_100.f8, "g_100.f8", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
