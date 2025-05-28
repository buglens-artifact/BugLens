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


union U0 {
   char f0;
   short f1;
   char f2;
   char * f3;
};

union U1 {
   int f0;
};


static char g_4[2][1][8] = {{{0x22L,0x22L,0x22L,0x22L,0x22L,0x22L,0x22L,0x22L}},{{0x22L,0x22L,0x22L,0x22L,0x22L,0x22L,0x22L,0x22L}}};
static char *g_3 = &g_4[0][0][4];
static char **g_2 = &g_3;
static int g_63 = 0L;
static union U0 g_75 = {0xF2L};
static int *g_102[2] = {(void*)0,(void*)0};
static unsigned char g_125 = 0x43L;
static union U1 g_148 = {1L};
static int g_182[5] = {0x0C0C6297L,0x0C0C6297L,0x0C0C6297L,0x0C0C6297L,0x0C0C6297L};
static int **g_188 = &g_102[1];
static unsigned long long g_238 = 0xACBAC9F7DF0B75FELL;
static union U0 **g_307 = (void*)0;
static union U1 *g_343[6][1][7] = {{{&g_148,&g_148,(void*)0,&g_148,(void*)0,&g_148,&g_148}},{{(void*)0,&g_148,&g_148,(void*)0,&g_148,(void*)0,&g_148}},{{&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148}},{{&g_148,&g_148,&g_148,(void*)0,&g_148,&g_148,(void*)0}},{{&g_148,(void*)0,&g_148,&g_148,(void*)0,&g_148,&g_148}},{{(void*)0,(void*)0,&g_148,&g_148,&g_148,&g_148,(void*)0}}};
static int g_354 = 0x0967E6ABL;
static int g_381 = 0xF508F959L;
static unsigned g_403 = 0x31EFE639L;
static unsigned char g_502 = 255UL;
static union U0 g_510 = {1L};
static unsigned long long g_522 = 18446744073709551615UL;
static union U0 *g_724 = &g_510;



static unsigned long long func_1(void);
static long long func_7(char ** p_8, int p_9, int p_10);
static char ** func_11(char ** p_12, unsigned p_13, int p_14, unsigned p_15, char * p_16);
static char * func_18(unsigned short p_19, unsigned p_20, short p_21, union U0 p_22);
static int func_26(union U0 p_27, char * p_28);
static union U0 func_29(char ** p_30, unsigned char p_31, char ** p_32, char p_33);
static int func_44(char * p_45, unsigned long long p_46, unsigned long long p_47, char ** p_48, char ** p_49);
static char * func_50(char ** p_51, int p_52, int p_53);
static int func_54(char * p_55);
static char * func_56(char * p_57, unsigned long long p_58, unsigned char p_59, char ** p_60);
static unsigned long long func_1(void)
{
    char l_17 = 1L;
    char **l_23 = &g_3;
    char **l_34[10] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    unsigned short l_37 = 0x9552L;
    union U0 l_693 = {-1L};
    int *l_721 = &g_182[4];
    union U0 *l_723 = &g_510;
    union U0 **l_722[8][6][5] = {{{&l_723,&l_723,(void*)0,&l_723,&l_723},{(void*)0,&l_723,&l_723,&l_723,(void*)0},{&l_723,&l_723,&l_723,&l_723,&l_723},{(void*)0,(void*)0,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,(void*)0,&l_723,&l_723,(void*)0}},{{&l_723,(void*)0,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,(void*)0,(void*)0},{&l_723,&l_723,&l_723,&l_723,&l_723}},{{&l_723,&l_723,(void*)0,(void*)0,&l_723},{&l_723,&l_723,(void*)0,&l_723,&l_723},{&l_723,(void*)0,(void*)0,(void*)0,&l_723},{&l_723,&l_723,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{(void*)0,&l_723,(void*)0,&l_723,&l_723}},{{&l_723,&l_723,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,(void*)0,&l_723},{(void*)0,&l_723,(void*)0,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{(void*)0,&l_723,&l_723,(void*)0,&l_723}},{{&l_723,&l_723,(void*)0,&l_723,(void*)0},{&l_723,&l_723,(void*)0,&l_723,(void*)0},{&l_723,(void*)0,&l_723,&l_723,&l_723},{(void*)0,&l_723,&l_723,(void*)0,(void*)0},{&l_723,(void*)0,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723}},{{&l_723,&l_723,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,(void*)0},{&l_723,&l_723,&l_723,(void*)0,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{(void*)0,&l_723,&l_723,&l_723,&l_723}},{{(void*)0,(void*)0,&l_723,&l_723,&l_723},{&l_723,(void*)0,(void*)0,&l_723,&l_723},{(void*)0,&l_723,&l_723,&l_723,&l_723},{(void*)0,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723}},{{&l_723,&l_723,&l_723,(void*)0,&l_723},{&l_723,(void*)0,(void*)0,&l_723,&l_723},{&l_723,(void*)0,(void*)0,&l_723,&l_723},{&l_723,&l_723,&l_723,&l_723,&l_723},{&l_723,&l_723,(void*)0,&l_723,&l_723},{(void*)0,&l_723,(void*)0,&l_723,&l_723}}};
    int i, j, k;
    g_2 = g_2;
    (*l_721) = (safe_div_func_int64_t_s_s(func_7(func_11(&g_3, l_17, l_17, g_4[0][0][4], func_18((((l_23 != &g_3) != (safe_sub_func_uint32_t_u_u((func_26(func_29(l_34[8], (((safe_div_func_uint8_t_u_u((g_4[1][0][5] <= (((l_17 >= g_4[0][0][5]) ^ 2UL) & g_4[0][0][4])), (**g_2))) == 0x8DACL) , l_37), &g_3, (*g_3)), (*l_23)) | 0xBDDAD598L), g_510.f0))) & g_510.f0), g_510.f0, l_17, l_693)), l_693.f2, l_17), 0x4954C56B669FDC6BLL));
    g_724 = &l_693;
    return (*l_721);
}







static long long func_7(char ** p_8, int p_9, int p_10)
{
    unsigned short l_711 = 6UL;
    int *l_720 = &g_63;
    (*l_720) = (((((l_711 > (safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s((g_381 == ((1L ^ p_9) , func_26(g_510, (*g_2)))), (safe_rshift_func_int8_t_s_u(((((safe_sub_func_uint16_t_u_u(p_9, (((safe_unary_minus_func_uint8_t_u(p_10)) >= p_9) && l_711))) ^ 18446744073709551615UL) & g_75.f0) > p_9), 4))))))) || 0xE0L) , p_8) != (void*)0) , p_10);
    return (*l_720);
}







static char ** func_11(char ** p_12, unsigned p_13, int p_14, unsigned p_15, char * p_16)
{
    char *l_707[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U1 **l_708[7][10] = {{&g_343[1][0][0],&g_343[2][0][5],&g_343[4][0][0],&g_343[2][0][5],&g_343[1][0][0],&g_343[2][0][0],&g_343[4][0][0],(void*)0,&g_343[2][0][5],&g_343[3][0][0]},{&g_343[2][0][5],&g_343[4][0][0],&g_343[2][0][0],&g_343[0][0][1],&g_343[4][0][0],(void*)0,&g_343[1][0][1],&g_343[3][0][0],&g_343[4][0][0],&g_343[4][0][0]},{(void*)0,&g_343[0][0][1],&g_343[1][0][0],(void*)0,(void*)0,(void*)0,&g_343[1][0][1],&g_343[2][0][4],&g_343[0][0][1],&g_343[4][0][6]},{&g_343[4][0][0],&g_343[4][0][0],&g_343[4][0][0],(void*)0,&g_343[4][0][0],&g_343[4][0][0],(void*)0,&g_343[4][0][0],&g_343[4][0][0],&g_343[4][0][0]},{&g_343[4][0][0],&g_343[1][0][1],&g_343[3][0][0],&g_343[0][0][1],&g_343[5][0][4],(void*)0,&g_343[4][0][0],&g_343[4][0][0],&g_343[1][0][1],&g_343[5][0][4]},{(void*)0,&g_343[4][0][0],&g_343[4][0][0],&g_343[1][0][1],&g_343[5][0][4],(void*)0,&g_343[4][0][0],&g_343[2][0][4],&g_343[4][0][0],&g_343[4][0][0]},{&g_343[5][0][4],&g_343[4][0][0],&g_343[1][0][0],&g_343[1][0][1],&g_343[4][0][0],&g_343[4][0][6],&g_343[4][0][0],&g_343[3][0][0],&g_343[4][0][0],&g_343[4][0][6]}};
    char **l_709 = &l_707[1];
    int *l_710 = &g_182[1];
    int i, j;
    (*l_710) ^= p_15;
    return &g_3;
}







static char * func_18(unsigned short p_19, unsigned p_20, short p_21, union U0 p_22)
{
    unsigned l_700 = 0x7E120AB3L;
    union U0 *l_703[3][2];
    char **l_704 = &g_3;
    int *l_705 = &g_182[2];
    int l_706 = 0xA4CF1355L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_703[i][j] = &g_75;
    }
    (*l_705) = ((&g_3 == ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((l_700 > g_4[0][0][4]), ((((void*)0 != &g_188) == (-1L)) != (0x9ECDL || (safe_div_func_int32_t_s_s((g_4[0][0][4] & (l_703[0][0] != (void*)0)), l_700)))))), l_700)), l_700)) , l_704)) >= (*g_3));
    l_706 ^= (*l_705);
    return (*l_704);
}







static int func_26(union U0 p_27, char * p_28)
{
    int *l_687 = &g_182[0];
    union U1 **l_688[3][3][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_688[i][j][k] = &g_343[4][0][2];
        }
    }
    for (g_238 = 0; (g_238 == 45); g_238 = safe_add_func_uint16_t_u_u(g_238, 1))
    {
        union U1 **l_689 = &g_343[3][0][4];
        int l_692 = 0x73F45733L;
        (*g_188) = l_687;
        (*l_687) = (((((+p_27.f2) , l_688[2][1][0]) != l_689) == ((((*p_28) || (*l_687)) , (-4L)) < 0x9DD09AF2792BE9CFLL)) || (safe_div_func_int16_t_s_s(l_692, (l_692 ^ 0xCD82L))));
        return (*l_687);
    }
    return (*l_687);
}







static union U0 func_29(char ** p_30, unsigned char p_31, char ** p_32, char p_33)
{
    int l_38[2];
    char *l_39 = &g_4[0][0][4];
    unsigned l_588 = 0x36DBD377L;
    int l_595 = 0x51D00AEEL;
    int l_596 = 0xA1BD20F8L;
    union U1 *l_615 = &g_148;
    union U0 l_647 = {0x59L};
    int ***l_654[5];
    union U0 ***l_655 = (void*)0;
    char l_657[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
    unsigned short l_667[9] = {0x1A13L,65533UL,0x1A13L,65533UL,0x1A13L,65533UL,0x1A13L,65533UL,0x1A13L};
    int i;
    for (i = 0; i < 2; i++)
        l_38[i] = 1L;
    for (i = 0; i < 5; i++)
        l_654[i] = &g_188;
lbl_636:
    for (p_31 = 0; (p_31 <= 1); p_31 += 1)
    {
        int l_530 = 0xF5277055L;
        long long l_551 = 0x38CB56BBB5726BCBLL;
        int *l_559 = &g_354;
        unsigned short l_566 = 0xCDD4L;
        union U1 **l_567 = &g_343[4][0][0];
        for (p_33 = 0; (p_33 <= 1); p_33 += 1)
        {
            int l_523 = 6L;
            int *l_533 = &l_38[p_31];
            char l_557 = 0xEAL;
            union U0 l_558 = {-10L};
            int i;
            l_523 &= (l_38[p_31] ^ ((((0x7FL == ((l_39 == (void*)0) > (l_38[p_31] || (((safe_sub_func_uint8_t_u_u(0x57L, (((safe_add_func_int64_t_s_s((func_44(func_50(&g_3, p_33, func_54(func_56((*p_32), p_33, p_31, &g_3))), p_33, g_75.f0, p_32, p_32) >= p_33), 1UL)) != 0xE43DBF84L) >= l_38[1]))) <= p_31) >= l_38[p_31])))) >= (*g_3)) , (void*)0) != (void*)0));
            (*l_533) = p_31;
            for (g_238 = (-18); (g_238 == 51); g_238++)
            {
                unsigned char l_536[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_536[i] = 0x24L;
                (*l_533) &= l_536[3];
                for (g_148.f0 = (-27); (g_148.f0 == 19); g_148.f0 = safe_add_func_uint64_t_u_u(g_148.f0, 2))
                {
                    unsigned short l_539 = 65535UL;
                    (*l_533) = l_536[1];
                    if (l_539)
                    {
                        (*l_533) &= p_31;
                    }
                    else
                    {
                        union U0 l_540 = {-1L};
                        return l_540;
                    }
                }
                for (g_381 = 14; (g_381 < (-23)); g_381 = safe_sub_func_uint8_t_u_u(g_381, 1))
                {
                    union U0 l_545 = {0L};
                    char l_550 = 0L;
                    for (g_63 = 0; (g_63 == 13); g_63++)
                    {
                        return l_545;
                    }
                    for (g_125 = (-8); (g_125 < 42); g_125++)
                    {
                        int *l_556 = &g_63;
                        (*l_556) |= ((+((((safe_lshift_func_int8_t_s_u((**p_32), l_550)) <= (((l_530 != l_551) == (((safe_lshift_func_int16_t_s_u((g_4[0][0][4] , ((*l_533) , g_502)), 5)) <= g_502) || (safe_mod_func_uint64_t_u_u(0x0F03AFB107D5356ALL, p_31)))) ^ p_31)) , p_33) <= (-10L))) | p_31);
                        if (l_557)
                            continue;
                    }
                    if (l_38[1])
                        break;
                }
            }
            return l_558;
        }
        (*l_559) |= l_530;
        (*l_567) = (func_54(func_50(&l_39, g_182[3], (safe_mod_func_uint16_t_u_u((g_75.f2 , l_38[0]), (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((void*)0 == &l_559), ((((((((*l_559) != ((l_38[1] < ((*l_559) | (**p_32))) || 0xAFF6AF9687A06206LL)) != (*l_559)) , p_33) , p_31) & (*l_559)) , l_566) & g_182[0]))) ^ l_38[0]), (*l_559))))))) , (void*)0);
    }
lbl_617:
    for (g_63 = (-15); (g_63 < (-3)); g_63 = safe_add_func_int32_t_s_s(g_63, 9))
    {
        int l_589 = 0xA50744A4L;
        int *l_590 = &g_354;
        (*l_590) ^= ((p_33 , 0L) , ((!(safe_div_func_int8_t_s_s((((-3L) > g_502) <= (safe_rshift_func_int16_t_s_s(p_31, ((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(l_38[0], 0)) <= g_502) ^ (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((p_33 || (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_33, 65527UL)), l_588))) , p_33), l_589)), g_4[1][0][3])), 0x506923D000779001LL))), 0x2B92L)) | l_38[1])))), l_589))) > l_38[1]));
        (*g_188) = &l_38[0];
        l_596 |= ((g_75.f2 , (safe_add_func_uint32_t_u_u(g_354, (g_238 <= (((safe_mod_func_uint8_t_u_u((l_38[1] ^ ((-3L) && l_588)), g_522)) , 0L) | l_595))))) < p_33);
    }
    if ((l_596 >= g_510.f0))
    {
        unsigned long long l_597 = 0x5AC131053D30818BLL;
        char **l_652 = (void*)0;
        int ***l_653 = &g_188;
        union U1 l_656 = {0x8B6C9D20L};
        unsigned l_658[6] = {0xBF86E2D0L,3UL,0xBF86E2D0L,0xBF86E2D0L,3UL,0xBF86E2D0L};
        int l_671 = 0x6699DA84L;
        int i;
        if (l_597)
        {
            long long l_600 = 0L;
            for (g_354 = 0; (g_354 == (-14)); --g_354)
            {
                int *l_601 = &l_38[0];
                unsigned long long l_616 = 18446744073709551608UL;
                (*l_601) = l_600;
                for (g_522 = 0; (g_522 > 40); g_522 = safe_add_func_int16_t_s_s(g_522, 1))
                {
                    unsigned char l_625 = 0xA1L;
                    (*l_601) = func_54(func_56((*g_2), (!g_4[0][0][4]), g_510.f0, &g_3));
                    for (g_125 = 0; (g_125 <= 1); g_125 += 1)
                    {
                        union U0 l_618 = {0xBCL};
                        int i;
                        (*l_601) ^= (((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_182[(g_125 + 1)], ((((((((safe_unary_minus_func_int32_t_s(((l_600 | (!(safe_div_func_uint64_t_u_u(0xAA67C812C6561286LL, 0xEA1245EFC28E5D74LL)))) , (((((void*)0 != l_615) == p_31) <= (((((((18446744073709551615UL > (+(l_600 <= 0xCFA66510L))) != p_31) ^ (*g_3)) >= l_616) >= 0x42L) | 0xB9L) <= 0x83CA41CCL)) != 1UL)))) > g_238) <= (**p_30)) || 1UL) & 1L) == 0x3CC0L) > (**g_2)) & g_502))) , l_597), p_31)) < p_31) != p_31), g_522)), g_125)) <= p_33) , 6L);
                        if (l_616)
                            goto lbl_617;
                        if (l_597)
                            break;
                        return l_618;
                    }
                    for (p_33 = 0; (p_33 <= 1); p_33 += 1)
                    {
                        int i;
                        l_38[p_33] = l_38[p_33];
                        (*l_601) = ((((safe_div_func_uint64_t_u_u((l_38[p_33] , (&g_3 == (void*)0)), 1UL)) < ((p_33 ^ (p_31 == (l_588 > g_4[0][0][4]))) ^ (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_597 | l_597), (-5L))), l_625)))) < g_510.f2) | l_38[p_33]);
                    }
                }
            }
        }
        else
        {
            char *l_630 = (void*)0;
            int l_635 = 0x35E40D5BL;
            union U0 *l_638 = &g_510;
            union U0 **l_637 = &l_638;
            int *l_646 = (void*)0;
            if ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(l_635, 12)), p_31)))
            {
                if (g_381)
                    goto lbl_636;
            }
            else
            {
                union U0 ***l_639 = &l_637;
                (*l_639) = l_637;
            }
            l_38[1] = (safe_lshift_func_uint8_t_u_u(((0x7368L <= (safe_lshift_func_int8_t_s_s((**p_30), 7))) && (safe_rshift_func_int8_t_s_u((l_635 , l_635), 6))), 3));
            return l_647;
        }
        if (((safe_add_func_uint32_t_u_u(g_75.f0, (((safe_add_func_uint64_t_u_u((((l_652 == p_30) , l_653) == l_654[2]), (((((l_597 | p_31) > ((void*)0 == l_655)) , l_656) , l_657[1]) ^ g_238))) == l_656.f0) <= l_658[3]))) , 0xD4012CE8L))
        {
            union U0 l_659 = {0xF3L};
            return l_659;
        }
        else
        {
            unsigned l_660 = 0x38BE7FA1L;
            char *l_666 = (void*)0;
            int l_668[3];
            int l_669 = 0x1A9E01F7L;
            int **l_670 = &g_102[0];
            int i;
            for (i = 0; i < 3; i++)
                l_668[i] = 7L;
            l_669 &= (l_660 > (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((((((0x5BL >= (g_75.f0 == (p_33 == g_75.f0))) & g_75.f0) && func_44((*p_32), ((~(safe_mod_func_uint32_t_u_u(l_660, g_182[0]))) >= l_667[2]), g_182[0], &l_39, &g_3)) | 4294967293UL) <= g_502) | (**p_32)))) < l_668[2]), l_668[2])));
            l_671 = ((l_670 != l_670) <= g_4[0][0][4]);
        }
        for (l_597 = 0; (l_597 != 12); l_597 = safe_add_func_uint64_t_u_u(l_597, 8))
        {
            int l_678[9][7] = {{5L,0L,0xC7AD3D89L,0x6734C17AL,0x6A7A96ADL,0x2F4FD9F0L,0x6A7A96ADL},{8L,0x9A4F31AFL,0x9A4F31AFL,8L,(-1L),0x779E53CEL,8L},{0x6A7A96ADL,1L,0x2E770D6CL,0x2F4FD9F0L,0x2F4FD9F0L,0x2E770D6CL,1L},{0x24FC2687L,0x9A4F31AFL,(-3L),0x63482E6BL,(-10L),8L,8L},{0x6734C17AL,0x6A7A96ADL,0x2F4FD9F0L,0x6A7A96ADL,0x6734C17AL,0xC7AD3D89L,0L},{0x779E53CEL,0xA20BF48CL,0x9A4F31AFL,0x63482E6BL,0L,0x63482E6BL,0x9A4F31AFL},{0L,0L,0L,0x2F4FD9F0L,1L,5L,0x2E770D6CL},{0x779E53CEL,0x63482E6BL,(-1L),(-1L),0x63482E6BL,0x779E53CEL,0L},{0x6734C17AL,0L,0x6A7A96ADL,(-1L),1L,1L,(-1L)}};
            int l_683 = 0x72D560A5L;
            int i, j;
            if (p_31)
                break;
            l_683 |= (!(p_31 , (safe_add_func_int16_t_s_s((!((safe_sub_func_int64_t_s_s((((g_403 == ((l_678[2][1] & 0x03CCL) < ((!(4294967295UL > (safe_lshift_func_int8_t_s_u(l_671, 2)))) && ((safe_mod_func_int32_t_s_s(((l_655 != l_655) & l_678[2][1]), l_678[2][1])) , 65527UL)))) || 5UL) <= p_31), l_678[7][5])) ^ g_381)), l_678[1][5]))));
        }
    }
    else
    {
        for (l_596 = 0; (l_596 <= 1); l_596 += 1)
        {
            union U0 l_684 = {0xF3L};
            return l_684;
        }
    }
    return l_647;
}







static int func_44(char * p_45, unsigned long long p_46, unsigned long long p_47, char ** p_48, char ** p_49)
{
    union U1 *l_341 = (void*)0;
    union U1 **l_342[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_346 = 0xD015392CL;
    int *l_353 = &g_354;
    int l_357 = 0x4268F694L;
    unsigned long long l_390 = 0x96545FCD3875BE9CLL;
    union U0 l_411[8][3] = {{{0L},{-1L},{0L}},{{0x47L},{0x82L},{0x47L}},{{0L},{-1L},{0L}},{{0x47L},{0x82L},{0x47L}},{{0L},{-1L},{0L}},{{0x47L},{0x82L},{0x47L}},{{0L},{-1L},{0L}},{{0x47L},{0x82L},{0x47L}}};
    unsigned short l_443 = 65534UL;
    union U0 *l_466 = &l_411[2][0];
    char *l_496 = &g_4[0][0][2];
    int *l_521[8][10] = {{&g_63,&g_354,&g_381,&g_381,&g_354,&g_63,&g_354,&g_381,&g_381,&g_354},{&g_63,&g_354,&g_381,&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63},{&g_381,&g_63,&g_182[0],&g_182[0],&g_63,&g_381,&g_63,&g_182[0],&g_182[0],&g_63}};
    int i, j;
    g_343[4][0][0] = l_341;
    (*l_353) ^= (((((func_54((*g_2)) && 0xAAFFL) == ((safe_mod_func_uint16_t_u_u(l_346, (safe_sub_func_int32_t_s_s(p_47, ((!(safe_lshift_func_uint16_t_u_u(p_47, 5))) || ((safe_rshift_func_int16_t_s_u(g_75.f2, 8)) > p_46)))))) >= 0xDAF1D0D59C8BFB7DLL)) < 0x65BDECCB6DA8DDDDLL) & g_75.f2) == l_346);
    if (((safe_div_func_uint8_t_u_u(((*l_353) > (l_357 <= ((safe_lshift_func_int8_t_s_u((*l_353), 4)) <= func_54((*g_2))))), ((p_47 && (-8L)) && 1UL))) && func_54((*p_49))))
    {
        int l_379[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        union U0 *l_430 = &g_75;
        int ***l_433 = &g_188;
        union U0 **l_484[1];
        char *l_493[4] = {&g_4[1][0][2],&g_4[1][0][2],&g_4[1][0][2],&g_4[1][0][2]};
        int *l_518 = &l_379[7];
        int i;
        for (i = 0; i < 1; i++)
            l_484[i] = (void*)0;
lbl_467:
        for (l_346 = (-20); (l_346 <= 17); ++l_346)
        {
            int l_370 = 1L;
            int ***l_373 = &g_188;
            union U1 l_376[7][8][3] = {{{{0xE9CE888EL},{0xE5E05E85L},{0x39F62332L}},{{0xEA1D27C7L},{0xBAF50E18L},{0xCEC3EFF1L}},{{0L},{0L},{0L}},{{0xCEC3EFF1L},{0xBAF50E18L},{0xEA1D27C7L}},{{0x39F62332L},{0xE5E05E85L},{0xE9CE888EL}},{{-1L},{-5L},{-1L}},{{0x5939E3DAL},{0L},{0xD5DF71B7L}},{{-1L},{0xD234E86CL},{0xD2DF11D2L}}},{{{4L},{0L},{1L}},{{0x4B4CCF6AL},{0x81D13EEEL},{0x4AD92432L}},{{-1L},{0xFC43C31EL},{1L}},{{0x602EC693L},{1L},{0xD2DF11D2L}},{{0xAC2539A1L},{0xE9CE888EL},{0xD5DF71B7L}},{{-1L},{0x275AC898L},{-1L}},{{0xD5DF71B7L},{0xE9CE888EL},{0xAC2539A1L}},{{0xD2DF11D2L},{1L},{0x602EC693L}}},{{{1L},{0xFC43C31EL},{-1L}},{{0x4AD92432L},{0x81D13EEEL},{0x4B4CCF6AL}},{{1L},{0L},{4L}},{{0xD2DF11D2L},{0xD234E86CL},{-1L}},{{0xD5DF71B7L},{0L},{0x5939E3DAL}},{{-1L},{-5L},{-1L}},{{0xAC2539A1L},{2L},{4L}},{{0x602EC693L},{0xEA1D27C7L},{0x4B4CCF6AL}}},{{{-1L},{-2L},{-1L}},{{0x4B4CCF6AL},{0xEA1D27C7L},{0x602EC693L}},{{4L},{2L},{0xAC2539A1L}},{{-1L},{-5L},{-1L}},{{0x5939E3DAL},{0L},{0xD5DF71B7L}},{{-1L},{0xD234E86CL},{0xD2DF11D2L}},{{4L},{0L},{1L}},{{0x4B4CCF6AL},{0x81D13EEEL},{0x4AD92432L}}},{{{-1L},{0xFC43C31EL},{1L}},{{0x602EC693L},{1L},{0xD2DF11D2L}},{{0xAC2539A1L},{0xE9CE888EL},{0xD5DF71B7L}},{{-1L},{0x275AC898L},{-1L}},{{0xD5DF71B7L},{0xE9CE888EL},{0xAC2539A1L}},{{1L},{-4L},{0x4B4CCF6AL}},{{0L},{2L},{0x5939E3DAL}},{{0xD5CD2B4CL},{0x275AC898L},{0xD2DF11D2L}}},{{{0L},{0xFC43C31EL},{1L}},{{1L},{-5L},{-5L}},{{4L},{-2L},{1L}},{{0x4AD92432L},{1L},{-5L}},{{0xD5DF71B7L},{1L},{1L}},{{0x4B4CCF6AL},{0xCEC3EFF1L},{0xD2DF11D2L}},{{0x5939E3DAL},{0x4C2CC62DL},{0x5939E3DAL}},{{0xD2DF11D2L},{0xCEC3EFF1L},{0x4B4CCF6AL}}},{{{1L},{1L},{0xD5DF71B7L}},{{-5L},{1L},{0x4AD92432L}},{{1L},{-2L},{4L}},{{-5L},{-5L},{1L}},{{1L},{0xFC43C31EL},{0L}},{{0xD2DF11D2L},{0x275AC898L},{0xD5CD2B4CL}},{{0x5939E3DAL},{2L},{0L}},{{0x4B4CCF6AL},{-4L},{1L}}}};
            int *l_380 = &g_381;
            unsigned l_410[5][6][2] = {{{18446744073709551610UL,18446744073709551615UL},{0x17F0D242L,0UL},{0x2D324052L,0x0582FCE7L},{0x0582FCE7L,18446744073709551615UL},{0xCF48B9D1L,18446744073709551611UL},{5UL,0x17F0D242L}},{{7UL,0xF2398405L},{18446744073709551615UL,0xF2398405L},{7UL,0x17F0D242L},{5UL,18446744073709551611UL},{0xCF48B9D1L,18446744073709551615UL},{0x0582FCE7L,0x0582FCE7L}},{{0x2D324052L,0UL},{0x17F0D242L,18446744073709551615UL},{18446744073709551610UL,0xDCCE8D19L},{0UL,18446744073709551610UL},{0x8CC03F76L,0x83289688L},{0x8CC03F76L,18446744073709551610UL}},{{0UL,0xDCCE8D19L},{2UL,18446744073709551611UL},{18446744073709551615UL,0xCF48B9D1L},{18446744073709551615UL,0UL},{0UL,0x83289688L},{18446744073709551610UL,5UL}},{{0x2D324052L,18446744073709551615UL},{0xC4F68496L,0x17F0D242L},{18446744073709551611UL,0x17F0D242L},{0xC4F68496L,18446744073709551615UL},{0x2D324052L,5UL},{18446744073709551610UL,0x83289688L}}};
            char **l_436[5][8][1] = {{{&g_3},{&g_3},{&g_3},{&g_3},{&g_3},{&g_3},{(void*)0},{&g_3}},{{&g_3},{(void*)0},{&g_3},{&g_3},{&g_3},{(void*)0},{&g_3},{&g_3}},{{(void*)0},{&g_3},{&g_3},{&g_3},{&g_3},{&g_3},{&g_3},{&g_3}},{{&g_3},{(void*)0},{&g_3},{&g_3},{(void*)0},{&g_3},{&g_3},{&g_3}},{{(void*)0},{&g_3},{&g_3},{(void*)0},{&g_3},{&g_3},{&g_3},{&g_3}}};
            int i, j, k;
            (*l_380) ^= (safe_sub_func_uint32_t_u_u(g_148.f0, (((((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((l_370 , (((*l_353) , ((~(safe_div_func_int32_t_s_s((0x86L >= ((((void*)0 == l_373) == p_46) , ((((safe_sub_func_uint32_t_u_u((((l_376[4][4][2] , (((safe_rshift_func_int8_t_s_u(0xF0L, 4)) != 0x4D4A0A185A408D41LL) | 0x464DL)) != 0x2B09L) ^ 0L), p_47)) || p_46) ^ l_379[7]) | g_238))), g_4[0][0][4]))) && (**p_48))) && (*p_45))) , g_63), g_148.f0)), l_379[7])), p_47)) , 0x4B03L) >= g_182[0]) > p_47) && 0UL)));
            (*l_353) ^= func_54((*g_2));
            for (g_148.f0 = 0; (g_148.f0 >= 20); g_148.f0++)
            {
                long long l_391 = 0x32646635DCA352F5LL;
                int *l_402 = &g_354;
                unsigned long long l_409 = 18446744073709551615UL;
                unsigned short l_434 = 65531UL;
                unsigned l_435 = 0xEE07C89BL;
                for (p_46 = 0; (p_46 > 58); p_46++)
                {
                    int l_404 = 0x5A30E4C0L;
                    for (g_125 = 28; (g_125 < 17); g_125 = safe_sub_func_uint32_t_u_u(g_125, 8))
                    {
                        union U0 *l_388 = &g_75;
                        union U0 **l_389 = &l_388;
                        (*l_389) = l_388;
                        (*l_373) = ((((l_390 != ((void*)0 != &g_188)) == p_46) & p_46) , &g_102[1]);
                        if (p_46)
                            break;
                        return l_391;
                    }
                    for (l_370 = 4; (l_370 > 1); l_370 = safe_sub_func_int64_t_s_s(l_370, 3))
                    {
                        char l_395 = 7L;
                        (*l_353) ^= ((-4L) >= g_63);
                        (*l_380) |= (((~((safe_unary_minus_func_int8_t_s((l_395 ^ ((*g_188) != (*g_188))))) ^ (p_47 < p_47))) == ((((g_182[3] < 1UL) > (safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((*g_188) != (p_47 , l_402)), 1)), 6)) & g_238) != g_403), g_125))) , g_125) , l_404)) >= l_379[7]);
                    }
                    (*l_380) ^= ((g_63 >= (((*p_49) != (*p_49)) >= ((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((p_47 >= (l_409 , p_47)), 7)), (~g_4[1][0][3]))) ^ ((void*)0 != &g_343[4][0][0])))) == p_47);
                    (*l_402) &= (l_410[4][1][0] || (l_411[0][0] , g_63));
                }
                (*l_380) = p_46;
                (*l_402) = (((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((((6UL < p_47) , (**p_49)) & (**p_49)) == ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((((void*)0 == l_430) <= g_354), ((((l_373 != ((safe_rshift_func_int16_t_s_u(g_4[1][0][0], (*l_353))) , (void*)0)) , l_433) != (void*)0) , (**p_48)))) <= (*g_3)), l_434)) || p_47) <= p_47), (*p_45))), 4)) > 65535UL)), g_381)), p_46)), p_46)) >= l_435) <= (*l_402)), 0xEF6B593FC4E62DC6LL)), (*g_3))) , 4UL) >= (*l_402));
                if (p_47)
                {
                    (*l_353) = 0x35DAB81BL;
                    return p_46;
                }
                else
                {
                    char l_446 = 1L;
                    if (((0xAA6782EF53F30087LL != p_46) , (p_46 || ((l_436[3][2][0] != (g_182[0] , &p_45)) < (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((p_47 >= (safe_lshift_func_uint8_t_u_u(((((g_125 , g_75) , l_443) < 1UL) < p_46), 0))) , g_354) > 0x2302L), g_182[3])), (*l_353)))))))
                    {
                        (**l_373) = (**l_433);
                        (*g_188) = (void*)0;
                    }
                    else
                    {
                        union U0 **l_444 = &l_430;
                        int l_445 = (-1L);
                        union U1 *l_447 = &l_376[2][4][2];
                        (*l_444) = &l_411[0][0];
                        (*l_353) = ((7L ^ (((((**g_2) > (g_63 > ((g_125 || (&g_148 == (g_403 , &g_148))) & (((p_47 >= ((((**p_48) >= (**p_48)) , g_238) , g_182[0])) || l_445) , 0xC4E59539L)))) , g_4[0][0][4]) <= l_446) <= l_446)) >= (*l_402));
                        l_447 = &g_148;
                        (*l_402) &= l_445;
                    }
                    for (l_357 = 0; (l_357 <= 2); l_357 += 1)
                    {
                        union U0 **l_448 = &l_430;
                        int i, j;
                        (*l_380) |= 0x104E4ED9L;
                        (*l_448) = &l_411[l_357][l_357];
                        (*l_402) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*g_3), ((g_4[0][0][4] , (+0UL)) == p_47))), (+((safe_div_func_uint32_t_u_u(g_75.f2, (p_46 && p_46))) , (l_411[l_357][l_357].f0 <= (((0x1091330AL == p_46) , (*l_353)) && p_46))))));
                        (*l_353) = (l_446 , ((void*)0 != (*g_188)));
                    }
                    return p_46;
                }
            }
            for (l_443 = 0; (l_443 >= 38); ++l_443)
            {
                (*l_353) = func_54((*p_48));
                (**l_373) = (*g_188);
            }
        }
        for (g_238 = 0; (g_238 <= 8); g_238 += 1)
        {
            unsigned short l_463 = 0xCE17L;
            union U1 *l_464[2][7] = {{(void*)0,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148},{(void*)0,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148}};
            union U0 *l_465 = &g_75;
            char *l_468 = (void*)0;
            int **l_511 = &g_102[1];
            int i, j;
            (*l_353) |= (((p_46 , p_47) == ((safe_mod_func_uint16_t_u_u(0UL, (((**l_433) == (*g_188)) , 1L))) , (safe_sub_func_uint16_t_u_u((func_54(func_56((*g_2), (((p_47 , (safe_add_func_int32_t_s_s(5L, p_46))) >= 0x50L) , 18446744073709551615UL), l_463, &g_3)) & p_46), (-4L))))) && p_47);
            for (l_443 = 0; (l_443 <= 8); l_443 += 1)
            {
                (*l_353) = p_46;
                (*l_353) &= ((((p_46 , (void*)0) != (void*)0) , l_464[1][0]) != &g_148);
                for (l_346 = 3; (l_346 <= 8); l_346 += 1)
                {
                    for (g_354 = 7; (g_354 >= 0); g_354 -= 1)
                    {
                        l_466 = l_465;
                    }
                }
                if (g_75.f2)
                    goto lbl_467;
            }
            if ((g_182[0] <= (safe_sub_func_int32_t_s_s(((*l_353) > ((0x0671AC47L | ((*l_353) > (((*l_353) , ((safe_lshift_func_int16_t_s_s(0x6EDEL, ((g_354 < ((safe_rshift_func_uint8_t_u_u(p_47, 3)) != p_47)) || (*l_353)))) == 0x39E87FC2L)) || g_4[1][0][2]))) != g_75.f0)), l_463))))
            {
                int *l_477 = &g_63;
                for (p_47 = 0; (p_47 <= 2); p_47 += 1)
                {
                    (*g_188) = l_477;
                    if (p_46)
                        break;
                }
            }
            else
            {
                int l_478 = 0xBA91C9A9L;
                char **l_479 = &g_3;
                union U0 *l_483 = &l_411[4][2];
                char *l_495 = &g_75.f2;
                int *l_503 = &l_379[1];
                if ((l_478 | 0L))
                {
                    unsigned l_481 = 3UL;
                    int *l_482 = &l_346;
                    for (g_354 = 0; (g_354 <= 2); g_354 += 1)
                    {
                        int *l_480[10][5] = {{&g_182[0],&g_182[0],&g_354,&l_346,(void*)0},{(void*)0,(void*)0,(void*)0,&l_346,&l_346},{&l_346,&l_379[7],&l_346,&g_381,(void*)0},{(void*)0,(void*)0,(void*)0,&g_182[0],(void*)0},{(void*)0,&l_379[7],&l_379[7],(void*)0,&g_182[0]},{&g_182[0],(void*)0,(void*)0,(void*)0,&l_346},{&g_182[0],(void*)0,&g_182[0],(void*)0,&g_182[0]},{(void*)0,&g_381,&g_354,(void*)0,&l_379[7]},{&g_354,&g_381,(void*)0,(void*)0,&g_381},{&g_182[0],(void*)0,&g_182[0],&g_381,&l_379[7]}};
                        int i, j;
                        l_481 &= (9UL | (l_479 != (void*)0));
                    }
                    (*l_353) = p_46;
                    (*g_188) = l_482;
                    for (l_357 = 8; (l_357 >= 2); l_357 -= 1)
                    {
                        int i;
                        (*l_482) |= l_379[g_238];
                        (*g_188) = &l_379[l_357];
                    }
                }
                else
                {
                    unsigned long long l_485 = 0UL;
                    char *l_494 = (void*)0;
                    if ((l_463 ^ (l_483 != l_430)))
                    {
                        int *l_486 = &l_379[7];
                        l_484[0] = &l_465;
                        if (l_485)
                            break;
                        (*g_188) = l_486;
                        (*l_486) = (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((l_478 ^ (*g_3)), p_47)) , (&g_3 == ((((func_54(l_493[1]) , func_56(l_494, g_182[0], p_47, &l_468)) == (void*)0) , l_485) , &g_3))), g_75.f2)), g_381));
                    }
                    else
                    {
                        (*l_353) |= (&g_188 == (void*)0);
                        (*l_353) &= (func_54(l_495) , (l_485 == ((func_54((*g_2)) , (*g_2)) == l_496)));
                        (*l_353) ^= ((safe_lshift_func_int16_t_s_u(l_478, (0x7420L || 0x3836L))) <= (248UL >= ((p_47 ^ 18446744073709551615UL) , 0xA6L)));
                    }
                }
                (*l_503) &= (((!(~(safe_mod_func_int32_t_s_s((l_478 <= 18446744073709551611UL), ((l_463 == ((**g_2) , ((&l_430 == &l_483) , ((safe_unary_minus_func_uint16_t_u((!(g_502 && func_54((*p_49)))))) & l_478)))) || l_463))))) < (*l_353)) & 254UL);
                (*l_353) = func_54(func_50(((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_182[0], ((safe_rshift_func_int16_t_s_s((*l_353), ((g_510 , ((*l_353) , g_75.f2)) != g_125))) != ((void*)0 != l_511)))), g_182[0])) , &p_45), g_238, p_47));
            }
            for (l_390 = 0; (l_390 <= 2); l_390 += 1)
            {
                return p_46;
            }
            for (p_46 = 0; (p_46 <= 2); p_46 += 1)
            {
                return p_47;
            }
        }
        (*g_188) = &l_346;
        (*l_518) = ((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(func_54((*p_49)), 4)) , (((*l_353) , p_47) & (-10L))), (!((&l_346 != (g_510.f0 , l_518)) & ((((&l_466 == (void*)0) & p_47) == g_510.f2) == 255UL))))), g_354)) <= g_502);
    }
    else
    {
        union U1 *l_519 = &g_148;
        int *l_520 = (void*)0;
        l_519 = &g_148;
        (*g_188) = &l_346;
        (*g_188) = l_520;
    }
    g_522 ^= (*l_353);
    return p_46;
}







static char * func_50(char ** p_51, int p_52, int p_53)
{
    union U0 *l_337 = &g_75;
    union U0 **l_336 = &l_337;
    unsigned l_338 = 0UL;
    int l_339 = (-1L);
    int *l_340 = &g_182[0];
    (*l_340) ^= ((safe_add_func_int16_t_s_s((((g_125 || p_52) | (safe_div_func_uint32_t_u_u(((g_238 >= 1L) >= ((safe_rshift_func_uint16_t_u_u(((-6L) > ((4294967295UL != (l_336 != &l_337)) & (p_53 , l_338))), l_339)) > l_338)), 0x4D1F3700L))) == p_53), p_53)) && p_52);
    return (*p_51);
}







static int func_54(char * p_55)
{
    union U0 *l_262 = &g_75;
    int l_270[4] = {0L,0L,0L,0L};
    int l_326 = 0xED652D0FL;
    int *l_329 = (void*)0;
    int i;
    for (g_148.f0 = 0; (g_148.f0 <= 4); g_148.f0 += 1)
    {
        union U0 *l_263 = &g_75;
        int l_271 = 0x9CFB0435L;
        int l_281[7][10] = {{0x752087CFL,0x4E2CBAFAL,0xA0A62E1FL,(-1L),0x6E57CC7FL,0x5E92AE67L,0x0F11B7D9L,0x65D71448L,0L,2L},{1L,0x5E92AE67L,0xB5F79306L,0x4E2CBAFAL,0x6E57CC7FL,0L,0x72A85B3EL,(-5L),0L,(-1L)},{0x6E57CC7FL,0x0F11B7D9L,(-9L),1L,0x72A85B3EL,1L,(-9L),0x0F11B7D9L,0x6E57CC7FL,0x752087CFL},{0xA0A62E1FL,(-6L),0L,1L,0x5E92AE67L,(-1L),0L,0L,(-5L),1L},{1L,1L,0x72A85B3EL,1L,0L,2L,0L,0x8D20E8FBL,0x6E57CC7FL,0x6E57CC7FL},{9L,0L,0x41FF86E4L,1L,1L,0x41FF86E4L,0L,9L,0L,0xA0A62E1FL},{0x0F11B7D9L,0x4E2CBAFAL,(-9L),(-1L),0L,(-6L),0xB3759003L,0x851E5C6FL,(-5L),0L}};
        union U1 *l_289[2][3] = {{&g_148,&g_148,&g_148},{&g_148,&g_148,&g_148}};
        int **l_296[4] = {&g_102[1],&g_102[1],&g_102[1],&g_102[1]};
        short l_325 = 0xEDB0L;
        int i, j;
        for (g_63 = 4; (g_63 >= 1); g_63 -= 1)
        {
            int i;
            if ((((((((safe_rshift_func_int16_t_s_u(0x83E0L, 9)) < (g_182[g_148.f0] == (safe_rshift_func_uint16_t_u_u((g_182[g_148.f0] <= (!(((((l_262 == l_263) , (*p_55)) <= ((~(safe_lshift_func_uint16_t_u_s(g_182[0], 4))) > (safe_div_func_uint64_t_u_u(((((5UL > ((safe_lshift_func_uint8_t_u_u(g_4[0][0][0], g_182[g_148.f0])) && 0xFAD4L)) < l_270[3]) >= 0xCC754962DFEED02CLL) <= l_271), l_271)))) | l_271) <= g_182[2]))), l_270[3])))) , 0x41E1L) && g_182[g_148.f0]) < g_148.f0) , (*g_2)) == (void*)0))
            {
                int l_274 = 0x9FE8C370L;
                int *l_277 = &l_270[3];
                int *l_280[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_280[i] = &l_274;
                g_182[g_148.f0] = (safe_sub_func_uint64_t_u_u(g_182[g_148.f0], l_274));
                (*l_277) ^= (~((l_271 == l_271) | (((safe_rshift_func_int16_t_s_s(g_182[g_148.f0], g_182[0])) > g_182[g_148.f0]) < g_238)));
                l_281[1][7] |= ((((*l_277) | (safe_sub_func_uint32_t_u_u(1UL, (((~0UL) ^ (*l_277)) == ((*l_277) != 0x3B17L))))) && (l_271 <= l_270[3])) || (((g_182[g_148.f0] , 0x540A51D1B7C7B12ALL) && g_75.f0) | 0x71A2D92CA5481160LL));
            }
            else
            {
                int *l_282[1];
                union U0 l_288 = {-1L};
                int i;
                for (i = 0; i < 1; i++)
                    l_282[i] = (void*)0;
                l_281[4][2] = g_182[g_148.f0];
                g_182[g_148.f0] = (g_148 , (safe_lshift_func_int8_t_s_s((*g_3), ((l_281[1][5] , (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((((l_288 , (void*)0) == l_289[1][2]) , (safe_add_func_uint64_t_u_u(g_182[g_148.f0], 0x25BD731839F9090CLL))))), 4))) && (0xE0E3L | l_281[6][2])))));
            }
        }
        g_182[g_148.f0] = (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((+(+((g_182[g_148.f0] , &g_102[1]) == l_296[3]))) < (safe_lshift_func_uint8_t_u_s(l_270[3], ((safe_mod_func_uint16_t_u_u(((65535UL <= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((g_75.f2 & g_182[1]), ((((safe_add_func_int8_t_s_s((**g_2), (((l_270[2] || l_270[3]) , g_307) == g_307))) || l_270[3]) <= g_75.f0) | l_270[3]))), g_238))) > g_125), l_270[0])) <= 7L)))), g_238)), g_125));
        for (g_125 = 0; (g_125 <= 4); g_125 += 1)
        {
            union U0 **l_323 = &l_262;
            int i;
            g_182[g_148.f0] ^= (safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(l_270[0], ((safe_lshift_func_int8_t_s_s((*p_55), 1)) & g_125))) , (*g_3)) ^ 0xDCL), (safe_rshift_func_int8_t_s_u((*p_55), 6))));
            l_326 |= (safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u(((*l_263) , (!g_182[g_148.f0])))) <= (safe_sub_func_uint16_t_u_u(((((!((((((g_307 == (((**g_2) , (safe_sub_func_uint64_t_u_u(g_182[g_148.f0], g_182[0]))) , l_323)) == ((safe_unary_minus_func_uint16_t_u(((*l_323) != l_263))) != l_325)) , 18446744073709551609UL) | 3UL) >= 0L) | g_182[g_148.f0])) , g_75.f2) , g_182[3]) && l_270[3]), g_4[0][0][4]))), l_270[3]));
            (*g_188) = &g_182[g_148.f0];
        }
    }
    l_270[3] = ((((&l_270[2] == (void*)0) & (g_182[0] , g_4[0][0][4])) , (l_270[3] && ((g_75.f2 , (l_270[1] <= l_270[3])) & (((safe_lshift_func_uint16_t_u_u(l_270[0], 5)) , 1UL) != l_326)))) > 1UL);
    return l_326;
}







static char * func_56(char * p_57, unsigned long long p_58, unsigned char p_59, char ** p_60)
{
    short l_61 = 0xBBB3L;
    int *l_62 = &g_63;
    char *l_132 = &g_75.f0;
    long long l_140 = 0L;
    unsigned short l_156 = 0xBB6FL;
    char ***l_164 = (void*)0;
    union U1 *l_243 = &g_148;
    int *l_254[6][5] = {{&g_182[0],&g_63,&g_63,&g_182[0],&g_63},{&g_182[3],&g_182[0],&g_63,&g_182[0],&g_182[3]},{&g_63,&g_182[4],&g_63,&g_63,&g_182[4]},{&g_182[3],&g_63,&g_63,&g_182[3],&g_63},{&g_182[0],&g_182[3],&g_63,&g_182[4],&g_182[4]},{&g_63,&g_182[3],&g_63,&g_63,&g_182[3]}};
    union U0 *l_256[1][10][8] = {{{&g_75,(void*)0,&g_75,(void*)0,&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75,&g_75,(void*)0,(void*)0,(void*)0},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,(void*)0,&g_75,&g_75,&g_75,&g_75,(void*)0}}};
    union U0 **l_255 = &l_256[0][3][0];
    union U0 **l_257 = &l_256[0][3][5];
    int i, j, k;
    (*l_62) |= (g_4[0][0][4] > l_61);
    for (p_58 = 22; (p_58 < 43); p_58 = safe_add_func_uint32_t_u_u(p_58, 8))
    {
        union U1 l_72 = {0xDD571B4DL};
        int *l_91 = &g_63;
        int l_183 = 2L;
        union U0 *l_253 = (void*)0;
        union U0 **l_252 = &l_253;
    }
    l_254[3][3] = l_62;
    (*l_62) = ((65535UL ^ p_59) , (l_255 != (((*p_60) != (*p_60)) , l_257)));
    return (*g_2);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_148.f0, "g_148.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_510.f0, "g_510.f0", print_hash_value);
    transparent_crc(g_510.f2, "g_510.f2", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
