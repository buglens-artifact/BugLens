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
   unsigned f0;
   short f1;
};

union U1 {
   unsigned long long f0;
   unsigned f1;
};

union U2 {
   unsigned long long f0;
   short f1;
   unsigned long long f2;
   unsigned f3;
};

union U3 {
   int f0;
   unsigned f1;
   int f2;
};


static union U0 g_9 = {0xEB987642L};
static union U1 g_24 = {0x28D5FEAF86F25DB2LL};
static union U1 *g_23 = &g_24;
static union U0 **g_72 = (void*)0;
static int *g_75 = (void*)0;
static union U2 g_79[3] = {{0UL},{0UL},{0UL}};
static int g_111[10] = {0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L,0x58DD5D93L};
static union U2 *g_174 = &g_79[0];
static union U3 g_211 = {1L};
static long long g_220 = 0L;
static union U1 *g_275 = (void*)0;
static int *g_298[10] = {&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8]};
static union U2 **g_313 = (void*)0;
static union U3 *g_323 = &g_211;
static union U3 **g_322 = &g_323;
static unsigned long long g_340 = 0xA1CC2CD02EC44FEFLL;
static int g_400 = 0x52055553L;
static union U0 *g_543 = &g_9;
static union U0 **g_542 = &g_543;
static union U0 ***g_541[1] = {&g_542};



static short func_1(void);
static int func_2(union U0 p_3, short p_4, union U3 p_5);
static short func_7(union U0 p_8);
static union U0 * func_10(short p_11, unsigned p_12);
static int func_13(unsigned p_14);
static int func_25(union U1 * p_26);
static int func_33(unsigned char p_34, char p_35, short p_36, long long p_37, union U2 p_38);
static unsigned long long func_43(char p_44, union U2 p_45, int p_46, char p_47);
static union U2 func_48(union U1 * p_49, unsigned p_50, unsigned long long p_51, union U1 * p_52);
static char func_59(union U1 * p_60, int p_61, union U1 * p_62, union U0 * p_63, union U1 * p_64);
static short func_1(void)
{
    union U0 l_6 = {0x42374B1BL};
    union U3 l_687 = {0xA9DA0364L};
    int l_770 = 0L;
    int *l_771 = (void*)0;
    int **l_772 = &l_771;
    char l_773[7] = {0x17L,0x1DL,0x17L,0x17L,0x1DL,0x17L,0x17L};
    int i;
    l_770 = func_2(l_6, func_7(g_9), l_687);

        ;
    ;

    ;
    (*l_772) = l_771;
    return l_773[3];
}







static int func_2(union U0 p_3, short p_4, union U3 p_5)
{
    char l_690 = 0xB4L;
    union U0 l_695 = {18446744073709551615UL};
    short l_696[4];
    union U1 *l_709[10][3][8] = {{{(void*)0,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24},{&g_24,&g_24,(void*)0,(void*)0,(void*)0,&g_24,(void*)0,&g_24}},{{(void*)0,(void*)0,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24},{&g_24,(void*)0,(void*)0,&g_24,&g_24,&g_24,&g_24,(void*)0},{(void*)0,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,(void*)0,(void*)0,&g_24,&g_24,(void*)0,&g_24},{&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,(void*)0,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24},{(void*)0,&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24,(void*)0}},{{&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{(void*)0,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,(void*)0},{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24},{(void*)0,(void*)0,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24},{&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{(void*)0,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24},{&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,(void*)0,&g_24}},{{(void*)0,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24}},{{&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24},{&g_24,(void*)0,&g_24,&g_24,&g_24,&g_24,(void*)0,&g_24}}};
    int l_718 = 0xC4B744C0L;
    int *l_731 = &g_111[0];
    union U2 **l_764 = &g_174;
    union U3 **l_769 = &g_323;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_696[i] = 0xB488L;
    if ((safe_sub_func_int32_t_s_s(((l_690 < 0xC622A37772B60255LL) | (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(g_111[8], 2)), (g_79[0].f1 | (func_33(p_3.f1, (func_7(l_695) || l_696[0]), l_690, p_3.f1, (*g_174)) & g_340))))), p_5.f1)))
    {
        int l_699 = 0xE747812EL;
        union U1 *l_706 = &g_24;
        int *l_711[1][2][6];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 6; k++)
                    l_711[i][j][k] = (void*)0;
            }
        }
        if ((((safe_add_func_int16_t_s_s(l_699, (safe_rshift_func_int16_t_s_u((0x8875302040F4F157LL < (((((safe_div_func_uint64_t_u_u(g_9.f1, g_111[0])) | ((safe_mod_func_uint32_t_u_u(p_5.f0, func_59(l_706, (safe_add_func_uint8_t_u_u(l_695.f1, ((l_695.f1 <= (0xC6DEE6A0846ABBCELL == g_24.f1)) != l_695.f1))), l_709[4][0][4], &l_695, l_709[4][0][4]))) & l_699)) < 0x0BE7CF87L) && p_3.f0) <= p_3.f1)), 1)))) | 5UL) == p_5.f0))
        {
            int **l_710[8][1];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_710[i][j] = &g_298[4];
            }
            l_711[0][0][0] = &g_400;


            for (g_9.f1 = 0; (g_9.f1 != (-30)); g_9.f1 = safe_sub_func_int32_t_s_s(g_9.f1, 6))
            {
                g_75 = (void*)0;
            }
        }
        else
        {
            int *l_716[9][10][2] = {{{&g_111[6],&g_111[8]},{&g_111[8],&g_111[8]},{&g_111[6],&g_400},{&g_111[4],&g_111[5]},{(void*)0,(void*)0},{&g_111[8],&g_400},{(void*)0,(void*)0},{&g_111[8],&g_111[5]},{&g_111[8],&g_400},{(void*)0,&g_111[8]}},{{(void*)0,&g_111[8]},{(void*)0,&g_400},{&g_111[8],&g_111[5]},{&g_111[8],(void*)0},{(void*)0,&g_400},{&g_111[8],(void*)0},{(void*)0,&g_111[5]},{&g_111[4],&g_400},{&g_111[6],&g_111[8]},{&g_111[8],&g_111[8]}},{{&g_111[6],&g_400},{&g_111[4],&g_111[5]},{(void*)0,(void*)0},{&g_111[8],&g_400},{(void*)0,(void*)0},{&g_111[8],&g_111[5]},{&g_111[8],&g_400},{(void*)0,&g_111[8]},{(void*)0,&g_111[8]},{(void*)0,&g_400}},{{&g_111[8],(void*)0},{&g_400,&g_111[8]},{&g_111[8],&g_111[3]},{&g_111[4],&g_111[8]},{&g_111[8],(void*)0},{(void*)0,&g_111[3]},{(void*)0,&g_111[5]},{&g_400,&g_111[5]},{(void*)0,&g_111[3]},{(void*)0,(void*)0}},{{&g_111[8],&g_111[8]},{&g_111[4],&g_111[3]},{&g_111[8],&g_111[8]},{&g_400,(void*)0},{&g_111[6],&g_111[3]},{&g_111[8],&g_111[5]},{&g_111[8],&g_111[5]},{&g_111[8],&g_111[3]},{&g_111[6],(void*)0},{&g_400,&g_111[8]}},{{&g_111[8],&g_111[3]},{&g_111[4],&g_111[8]},{&g_111[8],(void*)0},{(void*)0,&g_111[3]},{(void*)0,&g_111[5]},{&g_400,&g_111[5]},{(void*)0,&g_111[3]},{(void*)0,(void*)0},{&g_111[8],&g_111[8]},{&g_111[4],&g_111[3]}},{{&g_111[8],&g_111[8]},{&g_400,(void*)0},{&g_111[6],&g_111[3]},{&g_111[8],&g_111[5]},{&g_111[8],&g_111[5]},{&g_111[8],&g_111[3]},{&g_111[6],(void*)0},{&g_400,&g_111[8]},{&g_111[8],&g_111[3]},{&g_111[4],&g_111[8]}},{{&g_111[8],(void*)0},{(void*)0,&g_111[3]},{(void*)0,&g_111[5]},{&g_400,&g_111[5]},{(void*)0,&g_111[3]},{(void*)0,(void*)0},{&g_111[8],&g_111[8]},{&g_111[4],&g_111[3]},{&g_111[8],&g_400},{&g_111[8],&g_111[8]}},{{(void*)0,&g_400},{&g_111[8],&g_111[3]},{&g_400,&g_111[3]},{&g_111[8],&g_400},{(void*)0,&g_111[8]},{&g_111[8],&g_400},{&g_111[8],&g_400},{&g_400,&g_400},{&g_400,&g_111[8]},{(void*)0,&g_400}}};
            int i, j, k;
            for (p_5.f1 = (-3); (p_5.f1 < 21); ++p_5.f1)
            {
                int **l_717 = &g_75;
                (*l_717) = l_716[0][4][0];
                if (p_4)
                    continue;
                l_718 = p_5.f1;
            }

            ;
                    }

        ;

    }
    else
    {
        int **l_719[8] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
        int i;
        g_75 = (void*)0;
        l_718 = 0xF5994D0AL;
    }

    ;
    if (l_695.f0)
    {
        union U0 ***l_723 = &g_542;
        int l_724 = 0x07288E2CL;
        int *l_734 = &g_111[8];
        g_174 = &g_79[0];
lbl_732:
        g_298[9] = &l_718;
        for (p_3.f1 = 0; (p_3.f1 <= 2); p_3.f1 += 1)
        {
            int *l_720 = &g_400;
            union U0 **l_727[5][8][3] = {{{(void*)0,&g_543,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{(void*)0,(void*)0,&g_543}},{{(void*)0,&g_543,(void*)0},{&g_543,(void*)0,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_543,(void*)0,&g_543},{&g_543,(void*)0,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543}},{{&g_543,&g_543,&g_543},{&g_543,&g_543,(void*)0},{&g_543,&g_543,&g_543},{&g_543,(void*)0,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_543,(void*)0,&g_543},{&g_543,(void*)0,&g_543}},{{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543}},{{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,(void*)0},{(void*)0,&g_543,(void*)0},{&g_543,&g_543,(void*)0}}};
            union U2 **l_741 = &g_174;
            int i, j, k;
            if (g_111[p_3.f1])
                break;
            (*l_720) = func_13(g_211.f1);
            for (g_24.f1 = 0; (g_24.f1 <= 2); g_24.f1 += 1)
            {
                union U0 **l_728[9][1][7] = {{{(void*)0,&g_543,&g_543,&g_543,(void*)0,&g_543,(void*)0}},{{(void*)0,(void*)0,&g_543,&g_543,(void*)0,(void*)0,(void*)0}},{{&g_543,&g_543,&g_543,(void*)0,&g_543,(void*)0,(void*)0}},{{&g_543,&g_543,&g_543,&g_543,&g_543,&g_543,&g_543}},{{(void*)0,&g_543,(void*)0,&g_543,&g_543,&g_543,&g_543}},{{&g_543,(void*)0,(void*)0,&g_543,(void*)0,(void*)0,&g_543}},{{&g_543,(void*)0,(void*)0,&g_543,&g_543,&g_543,&g_543}},{{(void*)0,&g_543,(void*)0,(void*)0,&g_543,&g_543,&g_543}},{{&g_543,&g_543,(void*)0,(void*)0,&g_543,(void*)0,(void*)0}}};
                int l_729[3];
                int *l_733 = &l_718;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_729[i] = (-8L);
                for (l_695.f1 = 0; (l_695.f1 <= 2); l_695.f1 += 1)
                {
                    return p_5.f2;


                }
                (*l_720) = (18446744073709551615UL != (safe_rshift_func_int16_t_s_u((((void*)0 != l_723) || l_724), func_13((safe_lshift_func_int16_t_s_s((((l_727[2][1][1] == l_728[8][0][3]) > g_340) && ((g_79[0].f2 != (l_724 <= 18446744073709551608UL)) & l_729[1])), (*l_720)))))));
                for (p_5.f1 = 0; (p_5.f1 <= 2); p_5.f1 += 1)
                {
                    int **l_730[4] = {&l_720,&l_720,&l_720,&l_720};
                    int i;
                    l_731 = &l_718;

                    ;
                    for (g_400 = 0; (g_400 <= 2); g_400 += 1)
                    {
                        g_298[9] = (void*)0;
                        g_298[0] = &l_729[1];
                        if (p_4)
                            goto lbl_732;

                        l_734 = l_733;

                        ;
                    }
                    for (l_724 = 2; (l_724 >= 0); l_724 -= 1)
                    {
                        return (*l_720);


                    }
                }


                                for (g_400 = 2; (g_400 >= 0); g_400 -= 1)
                {
                    unsigned l_746 = 0x9BF86969L;
                    for (p_5.f0 = 2; (p_5.f0 >= 0); p_5.f0 -= 1)
                    {
                        return p_4;


                    }

                                        (*l_733) = (g_211.f2 && (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_211.f0, (safe_lshift_func_uint8_t_u_s((((*g_322) != &p_5) | ((void*)0 != l_741)), g_400)))), ((safe_sub_func_uint8_t_u_u(0x50L, (safe_mod_func_uint8_t_u_u(p_5.f2, g_79[0].f1)))) ^ 0UL))));
                    for (g_211.f1 = 0; (g_211.f1 <= 2); g_211.f1 += 1)
                    {
                        if (l_746)
                            break;
                        return l_746;


                    }

                }
            }
        }
        for (g_24.f0 = 0; (g_24.f0 != 15); g_24.f0 = safe_add_func_uint64_t_u_u(g_24.f0, 1))
        {
            int *l_758 = (void*)0;
            for (l_695.f1 = 0; (l_695.f1 <= 2); l_695.f1 += 1)
            {
                union U0 l_755 = {7UL};
                int i;
                if ((0L & (safe_add_func_int64_t_s_s(g_111[(l_695.f1 + 6)], (safe_rshift_func_uint16_t_u_u((&l_724 != &g_400), (safe_mod_func_int64_t_s_s(((func_7(l_755) && ((g_340 && ((p_5.f0 < (safe_mod_func_int8_t_s_s(g_24.f0, 0x3DL))) & p_5.f0)) == g_340)) | p_5.f2), 0xC05716B84309B7D3LL))))))))
                {
                    if (p_4)
                    {
                        int **l_759 = &l_734;
                        union U3 *l_760 = &g_211;
                        (*l_759) = l_758;

                        ;
                        l_760 = l_760;
                        return p_5.f0;


                    }
                    else
                    {
                        (*l_731) = g_111[(l_695.f1 + 6)];
                    }
                    for (l_718 = 0; (l_718 <= 2); l_718 += 1)
                    {
                        int **l_761[4][7][7] = {{{&l_734,&g_298[0],&l_734,&g_75,&l_731,&l_758,&g_75},{&g_298[0],&l_734,&l_731,&l_734,&g_298[0],&g_75,(void*)0},{&l_734,&g_298[0],&g_75,&l_731,&l_734,(void*)0,&l_734},{&g_298[0],&g_75,&g_75,&g_75,&l_758,&l_758,&l_758},{&g_298[0],&g_298[0],&g_298[0],&g_298[0],&l_731,(void*)0,&l_734},{&l_734,&l_731,(void*)0,&l_731,&g_298[0],(void*)0,(void*)0},{&g_298[0],&l_734,&l_758,&g_75,&l_758,&l_758,&l_734}},{{&l_734,&l_734,&l_731,&l_734,&g_75,&g_75,&l_758},{(void*)0,&l_731,&l_734,&g_75,&g_75,&g_75,&l_734},{&l_758,&l_758,&g_298[5],&g_298[0],&l_731,&l_734,&g_298[0]},{&g_298[0],&l_731,&l_734,&l_734,&l_731,(void*)0,(void*)0},{&g_75,&l_734,(void*)0,(void*)0,&g_298[0],&l_731,(void*)0},{&l_758,&l_734,&g_298[7],&g_75,(void*)0,(void*)0,&g_298[0]},{&l_731,&l_734,&g_75,&g_75,&g_75,&l_734,&l_731}},{{&l_734,&l_734,(void*)0,(void*)0,&g_75,&g_75,&l_734},{&l_734,&g_75,&g_298[5],&l_734,&l_758,&g_298[0],&g_75},{&l_731,&l_731,(void*)0,&l_758,&g_298[0],(void*)0,&g_298[0]},{&g_298[0],&l_731,&g_75,&l_731,&g_75,&g_298[0],&g_298[0]},{&g_75,&l_731,&g_298[7],&l_731,&g_75,&l_758,&g_75},{&g_298[0],&l_731,(void*)0,&l_734,(void*)0,&l_731,&l_731},{&l_734,&g_75,&l_734,&g_298[0],&g_298[0],&g_298[0],(void*)0}},{{&g_298[0],&l_734,&l_734,&l_734,&l_734,&g_298[5],(void*)0},{&g_75,&l_734,(void*)0,(void*)0,&l_731,&l_731,(void*)0},{&g_298[0],&l_734,(void*)0,&l_734,(void*)0,&g_75,&g_298[0]},{&l_734,&g_298[0],(void*)0,&l_734,(void*)0,&l_758,&l_734},{&g_298[0],&g_298[5],&g_298[0],(void*)0,&l_758,&g_75,&l_731},{&g_298[7],&l_731,&l_758,&g_298[7],&g_75,&l_758,&l_734},{&l_734,&g_75,&g_298[0],&g_75,&g_75,&g_298[0],&g_75}}};
                        union U1 *l_762 = (void*)0;
                        int i, j, k;
                        g_298[4] = &g_111[8];
                        g_298[8] = &g_111[8];
                        l_709[(l_695.f1 + 3)][l_718][(l_718 + 4)] = l_762;
                    }
                }
                else
                {
                    (*l_734) = ((p_5.f1 & (safe_unary_minus_func_uint32_t_u((&g_174 == l_764)))) <= ((p_5.f2 <= (safe_sub_func_uint32_t_u_u(p_5.f1, (p_4 & ((*l_734) | (*l_734)))))) < 65532UL));
                }
            }
        }

    }
    else
    {
        unsigned short l_767[2][6] = {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}};
        int *l_768 = &g_400;
        int i, j;
        (*g_542) = func_10(g_79[0].f1, l_767[1][0]);

        ;
        l_768 = &g_400;
    }


            ;
    g_322 = l_769;
    return p_3.f1;


}







static short func_7(union U0 p_8)
{
    union U0 *l_20 = &g_9;
    int l_676 = (-1L);
    union U3 *l_677 = &g_211;
    int *l_680 = (void*)0;
    int *l_681[7][4][1] = {{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}},{{&g_400},{&g_111[8]},{&g_400},{&l_676}}};
    char l_682 = 0x60L;
    unsigned long long l_685[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_685[i] = 0xFDE97FB6D1F15F85LL;
    (*g_542) = func_10(((func_13((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_20 != &g_9))), p_8.f0)), 1))) & 0UL) || (p_8.f0 & ((l_676 != (l_677 != (*g_322))) ^ 0xDA31A772L))), l_676);

    ;
    l_682 = ((void*)0 == &l_20);
    l_685[4] = (safe_mod_func_uint32_t_u_u(g_79[0].f2, 4294967292UL));
    if (((&g_24 != &g_24) && g_79[0].f1))
    {
        (*g_542) = (void*)0;

        ;
        return g_111[8];
    }
    else
    {
        long long l_686 = 0x9FD67BF3BA1469EALL;
        l_686 = (&g_111[8] == &l_676);
    }
    return g_340;
}







static union U0 * func_10(short p_11, unsigned p_12)
{
    int **l_678 = &g_298[0];
    union U0 *l_679[2][1][5];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_679[i][j][k] = &g_9;
        }
    }
    (*l_678) = &g_111[8];
    return l_679[0][0][3];


}







static int func_13(unsigned p_14)
{
    unsigned l_675 = 9UL;
    for (g_9.f1 = 0; (g_9.f1 < (-17)); g_9.f1--)
    {
        union U1 *l_27 = (void*)0;
        int *l_672 = (void*)0;
        int *l_673[6] = {&g_111[8],(void*)0,&g_111[8],&g_111[8],(void*)0,&g_111[8]};
        unsigned l_674 = 0x32DE1133L;
        int i;
        if (g_9.f1)
            break;
        if (p_14)
            break;
        g_23 = (void*)0;

        ;
    }
    return l_675;
}







static int func_25(union U1 * p_26)
{
    unsigned long long l_30 = 0xEAE215169FF4CAA5LL;
    unsigned long long l_135 = 0x20F6EBCB29D2F475LL;
    union U2 l_407[10][3] = {{{1UL},{0UL},{0UL}},{{3UL},{5UL},{3UL}},{{1UL},{1UL},{0UL}},{{18446744073709551615UL},{5UL},{18446744073709551615UL}},{{1UL},{0UL},{0UL}},{{3UL},{5UL},{3UL}},{{1UL},{1UL},{0UL}},{{18446744073709551615UL},{5UL},{18446744073709551615UL}},{{1UL},{0UL},{0UL}},{{3UL},{5UL},{3UL}}};
    short l_526 = 0x8F09L;
    int *l_552 = &g_111[4];
    int l_564[3];
    short l_580 = 0L;
    union U0 *l_591[5];
    union U3 *l_612 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_564[i] = 0xD218427DL;
    for (i = 0; i < 5; i++)
        l_591[i] = &g_9;
    if ((l_30 && (g_9.f1 < (safe_sub_func_uint32_t_u_u(l_30, func_33((g_9.f1 & ((void*)0 == p_26)), ((safe_add_func_uint16_t_u_u((func_43(g_24.f1, func_48(p_26, l_30, g_24.f1, p_26), g_79[0].f3, l_135) ^ g_79[0].f1), 65528UL)) & 4294967287UL), l_30, l_30, l_407[4][0]))))))
    {
        short l_499 = 0xECCCL;
        union U0 *l_514[10][9] = {{&g_9,&g_9,(void*)0,&g_9,&g_9,(void*)0,&g_9,(void*)0,&g_9},{(void*)0,&g_9,&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,&g_9,(void*)0,(void*)0,(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,(void*)0,(void*)0,&g_9,&g_9,&g_9}};
        union U0 ***l_519 = &g_72;
        int *l_554 = (void*)0;
        union U1 *l_649[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_649[i] = &g_24;
        if (l_499)
        {
            short l_500 = 0x01CFL;
            union U2 l_511[1] = {{0xEEB869F02853F57ALL}};
            int *l_551 = &g_111[8];
            int i;
            if (((l_500 | (!l_407[4][0].f2)) | (1L > (0x88D00478L >= (((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((g_220 & (((safe_div_func_uint8_t_u_u(l_30, func_33(g_9.f1, l_499, (safe_rshift_func_int16_t_s_s(((func_33(l_499, g_211.f1, l_500, g_111[9], l_511[0]) != l_511[0].f2) > g_400), l_511[0].f0)), g_79[0].f3, (*g_174)))) < 4UL) || l_499)), 248UL)), 18446744073709551615UL)), g_79[0].f3)) > l_407[4][0].f2) <= l_500)))))
            {
                int *l_512 = &g_400;
                if (((void*)0 != l_512))
                {
                    int l_513 = (-3L);
                    union U2 l_534[5][9] = {{{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL},{0xEB9E52CF93ED212ELL},{0UL},{0xDC59FE1D74C6D1DBLL},{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL}},{{9UL},{9UL},{0xE00940E46D6B166CLL},{9UL},{9UL},{0xE00940E46D6B166CLL},{9UL},{9UL},{0xE00940E46D6B166CLL}},{{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL},{0xEB9E52CF93ED212ELL},{0UL},{0xDC59FE1D74C6D1DBLL},{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL}},{{9UL},{9UL},{0xE00940E46D6B166CLL},{9UL},{9UL},{0xE00940E46D6B166CLL},{9UL},{9UL},{0xE00940E46D6B166CLL}},{{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL},{0xEB9E52CF93ED212ELL},{0UL},{0xDC59FE1D74C6D1DBLL},{0UL},{0xEB9E52CF93ED212ELL},{18446744073709551611UL}}};
                    int i, j;
                    (*l_512) = 5L;
                    if (func_33(g_111[8], (*l_512), l_511[0].f1, l_511[0].f0, l_407[1][1]))
                    {
                        union U0 **l_515 = &l_514[4][4];
                        l_513 = (&g_323 != (void*)0);
                        (*l_512) = l_499;
                        (*l_515) = l_514[7][6];
                    }
                    else
                    {
                        union U1 *l_516 = &g_24;
                        (*l_512) = (g_111[8] ^ (0xBC187AC4L | (246UL >= ((void*)0 == l_516))));
                    }
                    if ((safe_div_func_int16_t_s_s(((void*)0 == l_519), (safe_sub_func_uint32_t_u_u((l_511[0].f2 && (g_24.f1 > ((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u(l_526, 4)) < (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((!0L) && (safe_lshift_func_uint16_t_u_u((l_513 | ((0x9E03L <= (l_407[4][0].f2 < l_513)) > l_513)), 13))), 7)), g_79[0].f0))) <= 0x06L), g_211.f0)) == (-8L)))), 0x9C65E470L)))))
                    {
                        unsigned long long l_533 = 1UL;
                        (*l_512) = ((g_79[0].f2 || (func_33(l_533, g_111[8], l_499, l_513, l_534[1][0]) > (safe_mod_func_uint16_t_u_u(l_534[1][0].f1, l_533)))) && (-10L));
                    }
                    else
                    {
                        short l_537 = (-10L);
                        union U2 **l_538 = &g_174;
                        (*l_512) = l_537;
                        (*l_538) = (void*)0;

                        ;
                        return l_513;
                    }
                }
                else
                {
                    int l_550 = 0L;
                    int **l_553[5][1][8] = {{{&g_75,&g_75,&g_75,(void*)0,&g_298[0],&g_75,&g_298[0],(void*)0}},{{&g_75,(void*)0,&g_75,&l_551,(void*)0,&l_551,&l_551,(void*)0}},{{(void*)0,&l_551,&l_551,(void*)0,&l_551,&g_75,(void*)0,&g_75}},{{(void*)0,&g_298[0],&g_75,&g_298[0],(void*)0,&g_75,&g_75,&g_75}},{{&g_75,&g_298[0],&l_551,&l_551,&g_298[0],&g_75,&l_551,&g_298[0]}}};
                    int i, j, k;
                    if (((+((safe_rshift_func_int8_t_s_u(func_59(p_26, l_407[4][0].f0, p_26, &g_9, &g_24), ((g_541[0] == (void*)0) != (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0x9BB8L, 15)), l_550)), (*l_512)))))) > g_79[0].f2)) < l_499))
                    {
                        (*l_512) = l_135;
                    }
                    else
                    {
                        l_551 = l_512;

                        ;
                    }

                    ;
                    l_512 = l_552;

                    ;
                    for (l_30 = 0; (l_30 <= 0); l_30 += 1)
                    {
                        int *l_555[10] = {&g_400,(void*)0,(void*)0,&g_400,(void*)0,(void*)0,&g_400,(void*)0,(void*)0,&g_400};
                        int i;
                        l_555[5] = l_554;
                        return (*l_512);
                    }
                }

                ;
                ;
                for (l_135 = 0; (l_135 > 25); l_135 = safe_add_func_int64_t_s_s(l_135, 9))
                {
                    unsigned l_562 = 0x7D913A93L;
                    for (g_220 = 3; (g_220 <= 9); g_220 += 1)
                    {
                        union U0 *l_563[3][1][5] = {{{&g_9,&g_9,&g_9,&g_9,&g_9}},{{(void*)0,&g_9,&g_9,&g_9,&g_9}},{{&g_9,(void*)0,&g_9,&g_9,&g_9}}};
                        int i, j, k;
                        g_111[g_220] = (safe_mod_func_int64_t_s_s(8L, (*l_512)));
                        (*l_551) = (g_400 > (safe_rshift_func_uint16_t_u_s(((l_562 != func_59(&g_24, (!(*l_512)), p_26, l_563[1][0][3], &g_24)) & g_79[0].f2), g_79[0].f0)));
                        (*l_512) = l_564[0];
                    }
                    return (*l_512);
                }
            }
            else
            {
                (*l_552) = (*l_552);
            }

            ;
        }
        else
        {
            unsigned char l_571[7] = {0xF8L,0xF8L,0xF8L,0xF8L,0xF8L,0xF8L,0xF8L};
            union U3 **l_581[6][1][8] = {{{(void*)0,&g_323,(void*)0,&g_323,&g_323,&g_323,(void*)0,(void*)0}},{{(void*)0,&g_323,(void*)0,(void*)0,&g_323,(void*)0,&g_323,(void*)0}},{{(void*)0,(void*)0,&g_323,&g_323,&g_323,&g_323,&g_323,(void*)0}},{{(void*)0,&g_323,&g_323,&g_323,(void*)0,&g_323,&g_323,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_323,(void*)0}},{{&g_323,(void*)0,&g_323,&g_323,&g_323,(void*)0,&g_323,&g_323}}};
            union U0 *l_590 = &g_9;
            int *l_603 = &g_111[8];
            char l_627 = 0x91L;
            int i, j, k;
            for (l_135 = 22; (l_135 >= 42); ++l_135)
            {
                union U0 **l_574 = &g_543;
                int l_575[7][8] = {{0x6561775CL,0x6561775CL,3L,0x6561775CL,0x6561775CL,3L,0x6561775CL,0x6561775CL},{0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L,0x6561775CL},{0xAA3851B1L,3L,3L,0xAA3851B1L,3L,3L,0xAA3851B1L,3L},{0xAA3851B1L,0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L},{3L,0xAA3851B1L,3L,3L,0xAA3851B1L,3L,3L,0xAA3851B1L},{0xAA3851B1L,3L,3L,0xAA3851B1L,3L,3L,0xAA3851B1L,3L},{0xAA3851B1L,0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L,0x6561775CL,0xAA3851B1L,0xAA3851B1L}};
                int i, j;
                for (g_400 = 0; (g_400 == 16); g_400 = safe_add_func_int8_t_s_s(g_400, 8))
                {
                    unsigned l_569 = 1UL;
                    int l_570[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_570[i] = 5L;
                    l_570[2] = l_569;
                    if (l_571[6])
                        break;
                }
                (*l_552) = (safe_lshift_func_uint8_t_u_u((*l_552), ((*l_519) != l_574)));
                if (l_575[0][7])
                    continue;
            }
            (*l_552) = func_43(((safe_add_func_int16_t_s_s(func_33(g_24.f0, (l_571[6] || g_24.f1), (safe_div_func_uint8_t_u_u(l_580, g_220)), g_340, l_407[3][0]), ((void*)0 == l_581[4][0][5]))) != 1UL), l_407[0][0], (*l_552), l_571[1]);

            if ((safe_sub_func_int8_t_s_s(l_571[5], (func_43(func_43((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((l_590 == l_591[4]), (*l_552))) | (*l_552)) || l_571[0]), (*l_552))), ((g_211.f2 < (l_571[6] <= g_79[0].f3)) && (*l_552)))), l_407[3][1], l_571[4], g_24.f1), g_79[0], g_79[0].f0, l_571[0]) ^ l_571[6]))))
            {
                union U2 l_602 = {0x707D56BF6B1128E7LL};
                int l_624[9][3][2] = {{{(-1L),(-1L)},{0xA60C2E28L,0x60072C20L},{0xFF9F3DD9L,0x3FE73E84L}},{{0x3FE73E84L,(-1L)},{(-1L),(-1L)},{0x3FE73E84L,0x3FE73E84L}},{{0xFF9F3DD9L,0x60072C20L},{0xA60C2E28L,(-1L)},{(-1L),(-9L)}},{{(-1L),(-1L)},{0xB43B4A65L,1L},{0xB43B4A65L,(-1L)}},{{(-1L),(-9L)},{(-1L),(-1L)},{0xA60C2E28L,0x60072C20L}},{{0xFF9F3DD9L,0x3FE73E84L},{0x3FE73E84L,(-1L)},{(-1L),(-1L)}},{{0x3FE73E84L,0x3FE73E84L},{0xFF9F3DD9L,0x60072C20L},{0xA60C2E28L,(-1L)}},{{(-1L),(-9L)},{(-1L),(-1L)},{0xB43B4A65L,1L}},{{0xB43B4A65L,(-1L)},{(-1L),(-9L)},{(-1L),(-1L)}}};
                int i, j, k;
                if (func_59(p_26, (((void*)0 != &l_590) && (0xDE96E97046417AEELL < 18446744073709551610UL)), &g_24, l_590, &g_24))
                {
                    int l_601[4] = {(-2L),(-2L),(-2L),(-2L)};
                    int i;
                    if (l_571[0])
                    {
                        union U2 **l_600 = &g_174;
                        (*l_552) = (safe_add_func_uint16_t_u_u(func_33((safe_sub_func_uint64_t_u_u((((g_79[0].f3 > ((0xF595BCB2A54CF172LL <= (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((4L & (l_571[5] || ((func_33(g_400, (l_600 != &g_174), g_79[0].f0, l_571[4], l_407[9][1]) >= 0xEC21L) >= g_9.f1))), l_571[2])), l_601[3])) < g_79[0].f1) >= l_571[3])) ^ g_340)) == g_79[0].f3) || 0x9884F594L), l_601[3])), g_9.f1, l_571[6], g_111[3], l_602), g_111[9]));

                    }
                    else
                    {
                        int **l_604 = &g_298[0];
                        union U1 **l_605 = &g_23;
                        (*l_604) = l_603;
                        (*l_605) = p_26;

                        ;
                        (*l_604) = &l_601[3];


                    }


                    (*l_603) = (safe_rshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u(g_400, (safe_rshift_func_uint16_t_u_u(0UL, 13)))) <= 0x6353L) >= (((l_612 == (void*)0) ^ func_33((*l_552), l_601[3], g_400, (safe_mod_func_int16_t_s_s(func_33((safe_unary_minus_func_int8_t_s((l_602.f0 || (*l_552)))), (*l_603), (*l_552), l_601[3], (*g_174)), (*l_603))), l_407[4][0])) < l_601[3])), l_601[0]));

                    for (g_211.f1 = 20; (g_211.f1 <= 7); --g_211.f1)
                    {
                        int **l_618 = (void*)0;
                        int **l_619[10][5][1] = {{{&l_603},{&g_298[0]},{&g_75},{&g_298[0]},{&l_603}},{{(void*)0},{&g_298[0]},{&g_75},{&g_298[0]},{(void*)0}},{{&l_603},{&g_298[0]},{&g_75},{&g_298[0]},{&l_603}},{{(void*)0},{&g_298[0]},{&g_75},{&g_298[0]},{(void*)0}},{{&l_603},{&g_298[0]},{&g_75},{&g_298[0]},{&l_603}},{{(void*)0},{&g_298[0]},{&g_75},{&g_298[0]},{(void*)0}},{{&l_603},{&g_298[0]},{&g_75},{&g_298[0]},{&l_603}},{{(void*)0},{&g_298[0]},{&g_75},{&g_298[0]},{(void*)0}},{{&l_603},{&g_298[0]},{&g_75},{&g_298[0]},{&l_603}},{{(void*)0},{&g_298[0]},{&g_75},{&g_298[0]},{(void*)0}}};
                        int i, j, k;
                        l_552 = l_554;

                        ;
                        (*l_603) = (l_602.f1 || (g_211.f1 >= 0x6D06BB92D8DC2E47LL));
                        l_554 = &l_601[1];

                        ;
                        if ((*l_554))
                            continue;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short l_622 = 0x9F3FL;
                    long long l_623[6][5] = {{0x7A249D9EE0DF27A3LL,0x65723DBE77CA2A3ALL,0x7A249D9EE0DF27A3LL,0x7A249D9EE0DF27A3LL,0x65723DBE77CA2A3ALL},{0x9AAB0E710EBD2781LL,8L,8L,0x9AAB0E710EBD2781LL,8L},{0x65723DBE77CA2A3ALL,0x65723DBE77CA2A3ALL,0xC507E00B3EDB47F7LL,0x65723DBE77CA2A3ALL,0x65723DBE77CA2A3ALL},{8L,0x9AAB0E710EBD2781LL,8L,8L,0x9AAB0E710EBD2781LL},{0x65723DBE77CA2A3ALL,0x7A249D9EE0DF27A3LL,0x7A249D9EE0DF27A3LL,0x65723DBE77CA2A3ALL,0x7A249D9EE0DF27A3LL},{0x9AAB0E710EBD2781LL,0x9AAB0E710EBD2781LL,0xCAA6866BF250873DLL,0x9AAB0E710EBD2781LL,0x9AAB0E710EBD2781LL}};
                    int i, j;
                    for (g_24.f1 = 0; (g_24.f1 != 2); g_24.f1 = safe_add_func_uint16_t_u_u(g_24.f1, 5))
                    {
                        return l_622;
                    }
                    l_624[8][2][0] = l_623[3][3];
                }



            }
            else
            {
                int **l_625 = &l_554;
                union U2 l_626 = {0x6A9D21E0851634EBLL};
                int l_636 = (-9L);
                union U2 **l_644 = &g_174;
                union U0 *l_650 = &g_9;
lbl_638:
                (*l_625) = l_603;

                ;
                (*l_552) = 0x1E3E6136L;
                if (func_43((*l_603), l_626, l_627, (**l_625)))
                {
                    union U1 **l_628 = &g_275;
                    int *l_629 = (void*)0;
                    (**l_625) = (&p_26 != l_628);
                    (*l_625) = l_629;

                    ;
                    if ((*l_552))
                    {
                        l_636 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_111[8], 2)), g_9.f1)), 11));
                        (*l_603) = (g_220 < (*l_603));
                        (*l_552) = (*l_552);
                    }
                    else
                    {
                        int l_637 = 0xD426FBADL;
                        (*l_625) = (*l_625);
                        l_637 = l_637;
                    }
                }
                else
                {
                    long long l_641 = 1L;
                    union U2 l_651 = {0x171E7296B1B38A07LL};
                    (*l_625) = l_554;
                    if (l_627)
                        goto lbl_638;
                    for (l_626.f3 = 0; (l_626.f3 <= 9); l_626.f3 += 1)
                    {
                        int i;
                        (*l_554) = (((*l_554) || (*l_603)) ^ ((**l_625) & ((*l_554) & (safe_add_func_uint64_t_u_u(l_641, (func_33((safe_rshift_func_int16_t_s_s((l_644 == (void*)0), ((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((func_33(func_59(l_649[1], (**l_625), l_649[1], l_650, p_26), g_79[0].f0, l_641, g_220, l_651) || g_400), (*l_603))), g_79[0].f1)) == l_651.f2))), (*l_603), l_641, (*l_552), (*g_174)) | 4UL))))));

                    }

                                    }

                ;
                            }



            (*l_603) = (g_400 && g_340);
        }



    }
    else
    {
        unsigned l_654 = 8UL;
        union U2 *l_663 = &l_407[4][0];
        for (l_580 = 4; (l_580 >= 0); l_580 -= 1)
        {
            int **l_652 = &l_552;
            union U0 *l_660 = &g_9;
            (*l_652) = (void*)0;

            ;
            for (g_220 = 0; (g_220 <= 4); g_220 += 1)
            {
                short l_661[4][10][5] = {{{0x0B46L,0x295BL,0x0B46L,0x1581L,(-6L)},{(-1L),0xEEE3L,1L,1L,(-1L)},{0x4534L,0x8E14L,0x7A11L,0x0B46L,1L},{(-8L),0x0B46L,0x7A11L,(-7L),(-1L)},{(-1L),0x7A11L,(-9L),0xF79FL,(-8L)},{0x0B46L,1L,0L,1L,0x4D9AL},{0x32DEL,1L,(-5L),(-5L),1L},{1L,0x7A11L,(-8L),1L,0L},{0xF79FL,0x0B46L,(-6L),0L,(-1L)},{0L,0x4D9AL,(-5L),(-9L),(-1L)}},{{0xF79FL,(-9L),0x32DEL,1L,(-9L)},{1L,0x1581L,(-1L),0L,1L},{0x32DEL,(-1L),0x7A11L,0x0C7CL,1L},{0x0B46L,0L,0L,0x0B46L,(-9L)},{(-1L),0x0B46L,0x8E14L,1L,(-1L)},{(-8L),0xF79FL,(-9L),0x7A11L,(-1L)},{0x0B46L,0x0C7CL,0x32DEL,1L,0L},{0xEEE3L,1L,(-1L),0x0B46L,1L},{(-9L),0xF79FL,(-8L),0x0C7CL,0x4D9AL},{0xF79FL,(-5L),(-8L),0L,(-8L)}},{{0x4D9AL,0x4D9AL,(-1L),1L,(-1L)},{0x7A11L,(-1L),0x32DEL,0L,0x4D9AL},{0x4D9AL,(-8L),0L,1L,0x32DEL},{0x0B46L,1L,0x295BL,0L,0xEEE3L},{0x7A11L,0x1581L,(-6L),0x7A11L,0x4D9AL},{1L,0x7A11L,(-9L),0xEEE3L,(-9L)},{1L,(-1L),1L,(-1L),1L},{0x7A11L,0L,(-5L),0x32DEL,0x1581L},{0x0B46L,5L,0x7A11L,0xF79FL,5L},{0x4D9AL,(-1L),(-1L),0L,0x1581L}},{{(-9L),0xF79FL,0x0C7CL,(-7L),1L},{0x1581L,(-6L),0x7A11L,0x4D9AL,(-9L)},{(-1L),1L,(-1L),0x4D9AL,0x4D9AL},{0L,(-1L),0L,(-7L),0xEEE3L},{0x0B46L,(-9L),(-9L),0L,0x32DEL},{0xF79FL,0x1581L,0xC619L,0xF79FL,0x4D9AL},{0x0C7CL,0xF79FL,(-9L),0x32DEL,1L},{1L,(-9L),0L,(-1L),0x0C7CL},{0xF79FL,0L,(-1L),0xEEE3L,0x1581L},{(-5L),0L,0x7A11L,0x7A11L,0L}}};
                union U0 *l_662 = &g_9;
                int i, j, k;
                for (l_30 = 0; (l_30 <= 4); l_30 += 1)
                {
                    short l_659 = 1L;
                    int *l_671 = &g_400;
                    int i;
                    for (g_340 = 0; (g_340 <= 4); g_340 += 1)
                    {
                        int i;
                        return g_111[(g_340 + 1)];


                    }
                    for (g_24.f0 = 0; (g_24.f0 <= 2); g_24.f0 += 1)
                    {
                        int *l_653[6][9] = {{&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8]},{&g_400,&g_111[8],&g_400,&g_111[4],&g_400,&g_111[8],&g_400,&g_111[8],&g_400},{&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8]},{&g_400,&g_111[8],&g_400,&g_111[4],&g_400,&g_111[8],&g_400,&g_111[8],&g_400},{&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8],&g_111[8]},{&g_400,&g_111[8],&g_400,&g_111[4],&g_400,&g_111[8],&g_400,&g_111[8],&g_400}};
                        int i, j;
                        l_654 = (0x20E0090EBC206280LL == (-1L));
                    }
                    if ((safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(((l_659 <= (l_591[l_580] != l_660)) < (-1L)), l_661[2][6][3])), 18446744073709551615UL)))
                    {
                        union U2 **l_664[9];
                        int l_669 = 1L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_664[i] = &g_174;
                        l_591[g_220] = l_662;
                        g_174 = l_663;

                        ;
                        (*l_652) = &g_111[7];

                        ;
                        (*l_552) = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_669, (-10L))), g_400));
                    }
                    else
                    {
                        unsigned l_670 = 0x851746D8L;
                        l_670 = func_59(p_26, g_79[0].f1, p_26, l_662, p_26);
                        if (l_659)
                            break;
                        l_671 = l_671;
                    }
                }
            }

            ;
        }

        ;
        ;
    }

    ;

    ;


    return l_30;


}







static int func_33(unsigned char p_34, char p_35, short p_36, long long p_37, union U2 p_38)
{
    union U0 *l_408 = &g_9;
    union U0 **l_409 = &l_408;
    int l_421 = 0x3F5A5799L;
    int *l_423 = (void*)0;
    int *l_432[5];
    int *l_435 = &g_111[8];
    union U1 *l_446 = &g_24;
    int i;
    for (i = 0; i < 5; i++)
        l_432[i] = &g_111[6];
    (*l_409) = l_408;
    for (p_38.f2 = 0; (p_38.f2 <= 29); p_38.f2++)
    {
        int l_412 = 0xC48BDE9DL;
        if ((l_412 >= 0xAA43L))
        {
            int *l_413[2][4][7] = {{{&g_111[8],&g_111[6],&g_400,&g_400,&g_111[5],&g_400,&g_400},{&g_111[5],&g_111[5],&g_111[8],&g_400,&g_400,&g_400,&g_111[0]},{&g_111[8],&g_111[8],&g_111[0],(void*)0,&g_111[8],&g_400,(void*)0},{&g_400,&g_111[7],&g_400,&g_111[0],&g_400,&g_111[7],&g_400}},{{&g_111[8],&g_400,&g_111[3],&g_111[0],&g_111[5],(void*)0,(void*)0},{(void*)0,&g_111[8],&g_111[6],(void*)0,&g_111[8],&g_111[8],&g_111[8]},{&g_111[6],&g_400,&g_111[3],&g_111[8],&g_111[8],&g_400,&g_111[8]},{&g_111[8],&g_111[8],&g_111[3],&g_111[2],&g_400,&g_111[8],&g_111[0]}}};
            int **l_414 = &l_413[1][3][5];
            int i, j, k;
            (*l_414) = l_413[1][3][5];
        }
        else
        {
            union U1 *l_417 = &g_24;
            for (g_211.f2 = 0; (g_211.f2 > (-3)); g_211.f2 = safe_sub_func_uint32_t_u_u(g_211.f2, 9))
            {
                union U0 *l_418[3];
                char l_422 = (-4L);
                int *l_424 = &g_111[8];
                int i;
                for (i = 0; i < 3; i++)
                    l_418[i] = &g_9;
                l_422 = ((((func_59(l_417, g_111[8], &g_24, l_418[1], &g_24) != (safe_mod_func_int8_t_s_s(((((8UL | ((g_79[0].f3 < (g_9.f1 == p_38.f0)) || p_37)) <= g_400) > p_34) > l_421), p_35))) > l_412) & p_37) & l_421);
                l_424 = l_423;

                ;
            }

        }
    }

        for (g_24.f0 = (-11); (g_24.f0 != 48); g_24.f0 = safe_add_func_uint16_t_u_u(g_24.f0, 5))
    {
        int *l_427 = &g_111[8];
        union U0 *l_428 = &g_9;
        unsigned short l_466 = 0x1078L;
        union U1 *l_478 = (void*)0;
        union U0 **l_481 = &l_408;
        int **l_498[4] = {&l_423,&l_423,&l_423,&l_423};
        int i;
    }

    return (*l_435);
}







static unsigned long long func_43(char p_44, union U2 p_45, int p_46, char p_47)
{
    union U1 *l_136 = &g_24;
    union U0 *l_137 = &g_9;
    int l_146 = (-6L);
    union U0 ***l_162 = &g_72;
    union U3 *l_207 = (void*)0;
    int *l_295 = &g_111[8];
    unsigned l_361 = 0UL;
lbl_177:
    if (func_59(l_136, p_45.f0, l_136, l_137, &g_24))
    {
        int *l_138 = (void*)0;
        int *l_139 = &g_111[8];
        (*l_139) = p_46;
        if (p_45.f0)
            goto lbl_177;
    }
    else
    {
        char l_153 = 0L;
        union U0 *l_163 = (void*)0;
        union U1 *l_167[7][1] = {{&g_24},{&g_24},{&g_24},{&g_24},{&g_24},{&g_24},{&g_24}};
        int *l_168[6] = {&l_146,&l_146,&l_146,&l_146,&l_146,&l_146};
        int i, j;
        for (p_46 = 8; (p_46 >= 0); p_46 -= 1)
        {
            int i;
            if (g_111[(p_46 + 1)])
                break;
            for (p_45.f3 = 1; (p_45.f3 <= 9); p_45.f3 += 1)
            {
                int **l_140 = (void*)0;
                int **l_141 = &g_75;
                union U0 *l_164 = (void*)0;
                int i;
                (*l_141) = (void*)0;

                ;
                for (p_47 = 9; (p_47 >= 0); p_47 -= 1)
                {
                    int i;
                    (*l_141) = &g_111[p_45.f3];

                    ;
                    if (p_46)
                        goto lbl_176;
                }

                ;
                for (g_24.f1 = 1; (g_24.f1 <= 9); g_24.f1 += 1)
                {
                    int i;
                    if (g_111[(p_46 + 1)])
                        break;
                    for (p_47 = 6; (p_47 >= 0); p_47 -= 1)
                    {
                        int i;
                        g_111[(p_47 + 1)] = 0L;
                        (*l_141) = &g_111[p_45.f3];

                        ;
                        (*g_75) = (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_146 < g_79[0].f1), g_111[6])), (safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(l_146, l_146)) >= (((*g_75) <= g_111[8]) >= (safe_sub_func_uint16_t_u_u(l_153, (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((-8L), 6)), p_46)), g_111[(p_46 + 1)])), 252UL)))))) && (-1L)), p_46))));
                    }
                    (*l_141) = &g_111[g_24.f1];

                    ;
                    if (((l_162 != (void*)0) && 18446744073709551613UL))
                    {
                        (*l_141) = (void*)0;

                        ;
                        if (p_46)
                            break;
                    }
                    else
                    {
                        int i;
                        g_111[p_45.f3] = (l_163 == l_164);
                        return p_44;


                    }

                    ;
                }
                g_111[p_45.f3] = (safe_div_func_uint16_t_u_u((((((void*)0 != l_167[2][0]) | (((g_79[0].f3 ^ g_79[0].f2) <= g_9.f1) || 0x7DD28A493C9A8455LL)) == (3UL ^ (g_79[0].f1 & ((void*)0 == &g_23)))) <= p_45.f1), g_111[8]));
            }
        }

                g_111[8] = 0x9F68FA65L;
lbl_176:
        if ((0x8A156A7B958418D4LL ^ (func_59(l_136, p_45.f1, &g_24, &g_9, l_136) | ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((l_146 ^ l_146), 15)), 1)) || p_47))))
        {
            union U2 **l_173[1];
            int i;
            for (i = 0; i < 1; i++)
                l_173[i] = (void*)0;
            g_174 = &g_79[1];
        }
        else
        {
            union U1 *l_175 = &g_24;
            l_175 = &g_24;
            return g_79[0].f2;


        }
        for (l_153 = 0; l_153 < 6; l_153 += 1)
        {
            l_168[l_153] = (void*)0;
        }

    }

    lbl_378:
    for (p_45.f0 = 0; (p_45.f0 <= 2); p_45.f0 += 1)
    {
        unsigned l_184 = 4294967289UL;
        union U0 *l_221 = (void*)0;
        int *l_222 = &g_111[8];
        union U1 *l_229 = &g_24;
        union U0 ***l_234 = &g_72;
        for (p_46 = 0; (p_46 <= 2); p_46 += 1)
        {
            char l_181 = 0xADL;
            int **l_190 = &g_75;
            for (g_24.f1 = 0; (g_24.f1 <= 2); g_24.f1 += 1)
            {
                short l_178 = (-3L);
                if ((l_178 == (safe_rshift_func_uint16_t_u_u((l_181 <= l_146), (safe_add_func_uint32_t_u_u((g_111[5] < p_45.f2), l_184))))))
                {
                    union U2 **l_185 = &g_174;
                    int i;
                    if (l_184)
                        break;
                    (*l_185) = &g_79[g_24.f1];
                }
                else
                {
                    int i;
                    g_111[(g_24.f1 + 7)] = (g_79[0].f2 == ((-1L) > ((((((safe_sub_func_uint32_t_u_u(p_45.f1, p_46)) | ((safe_lshift_func_int16_t_s_u(p_44, 9)) & p_45.f0)) ^ ((&g_79[p_45.f0] == (void*)0) != p_45.f1)) <= l_181) & l_184) & p_45.f3)));
                }
            }
            (*l_190) = &g_111[0];

            ;
        }
        if (g_111[8])
        {
            long long l_195 = 0xF96D3B482F0B7091LL;
            union U0 **l_199 = &l_137;
            int l_205 = 1L;
            int **l_206[6][9][4] = {{{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75},{&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75}},{{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,(void*)0,&g_75},{&g_75,(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{(void*)0,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,(void*)0,&g_75},{&g_75,&g_75,(void*)0,&g_75}},{{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,(void*)0,&g_75},{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75}}};
            int i, j, k;
            if (p_45.f0)
            {
                int *l_196 = &g_111[4];
                (*l_196) = ((p_44 > (p_45.f0 == 4294967295UL)) | (safe_mod_func_uint64_t_u_u(((~((((safe_sub_func_int32_t_s_s(p_45.f0, l_195)) < (g_9.f1 > l_184)) != (~4294967295UL)) & g_79[0].f0)) | l_184), p_45.f2)));
            }
            else
            {
                unsigned char l_202 = 0xB0L;
                for (l_146 = 0; (l_146 <= 2); l_146 += 1)
                {
                    l_205 = (safe_div_func_int16_t_s_s((g_72 != l_199), (p_45.f1 | (safe_sub_func_uint8_t_u_u((l_202 <= 0x82E6L), (safe_sub_func_int16_t_s_s(p_47, (0x46280EF9L > g_9.f1))))))));
                    if (l_202)
                        continue;
                }
            }
            g_75 = &l_205;

            ;
        }
        else
        {
            union U3 **l_208 = (void*)0;
            union U3 **l_209[2];
            int i;
            for (i = 0; i < 2; i++)
                l_209[i] = &l_207;
            l_207 = l_207;
        }
        for (g_24.f1 = 2; (g_24.f1 <= 9); g_24.f1 += 1)
        {
            for (p_47 = 0; (p_47 <= 9); p_47 += 1)
            {
                union U3 *l_210 = &g_211;
                union U3 **l_212 = &l_210;
                (*l_212) = l_210;
                for (p_44 = 2; (p_44 >= 0); p_44 -= 1)
                {
                    return p_46;


                }
                return p_45.f2;


            }
            if (p_45.f0)
                goto lbl_177;
            return p_45.f3;


        }
        for (g_211.f2 = 0; (g_211.f2 <= 2); g_211.f2 += 1)
        {
            int *l_224 = &g_111[8];
            union U1 *l_236 = &g_24;
            if (((safe_unary_minus_func_uint32_t_u((safe_add_func_int64_t_s_s(p_45.f1, (~(safe_mod_func_uint16_t_u_u(func_59(&g_24, (safe_div_func_uint32_t_u_u(p_45.f2, g_220)), l_136, l_221, l_136), (g_111[9] & 0x1C95L)))))))) != g_79[0].f1))
            {
                int **l_223[3][7] = {{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}};
                int i, j;
                l_224 = l_222;
            }
            else
            {
                union U1 *l_235 = &g_24;
                if (p_44)
                    goto lbl_177;
                for (p_47 = 2; (p_47 >= 0); p_47 -= 1)
                {
                    union U1 *l_230 = &g_24;
                    union U0 *l_237 = &g_9;
                    if ((((safe_rshift_func_int16_t_s_u(0x2514L, (~p_45.f2))) < (safe_rshift_func_uint8_t_u_s(0xF4L, (l_207 != (void*)0)))) > func_59(l_229, p_45.f2, l_230, l_137, l_136)))
                    {
                        int **l_231 = &l_224;
                        if (p_45.f1)
                            goto lbl_177;
                        (*l_224) = ((*l_222) == l_146);
                        (*l_231) = &l_146;

                        ;
                        (*l_224) = (safe_sub_func_int16_t_s_s(p_45.f1, 0xF941L));
                    }
                    else
                    {
                        union U1 *l_238 = &g_24;
                        int **l_239 = &l_224;
                        (*l_222) = ((l_234 == &g_72) & func_59(l_235, (0xED3EF12DL || p_45.f0), l_236, l_237, l_238));
                        (*l_239) = l_222;

                        ;
                    }
                }

                ;
            }

            ;
            for (l_146 = 0; (l_146 <= 2); l_146 += 1)
            {
                unsigned char l_240 = 248UL;
                if (p_45.f0)
                    break;
                if (l_240)
                    break;
            }
        }

    }

        for (p_44 = 29; (p_44 <= 3); p_44--)
    {
        union U2 *l_243 = &g_79[1];
        l_243 = &g_79[0];
        return g_24.f1;


    }
    for (p_45.f1 = 19; (p_45.f1 > (-16)); p_45.f1 = safe_sub_func_uint16_t_u_u(p_45.f1, 1))
    {
        union U1 *l_258 = &g_24;
        union U2 *l_261 = (void*)0;
        union U0 *l_263 = &g_9;
        int *l_277 = &l_146;
        union U3 *l_312 = &g_211;
        union U2 **l_314 = &l_261;
        char l_348 = 0L;
        int **l_349 = &g_298[0];
        short l_354 = 0x5EBFL;
        for (p_46 = (-10); (p_46 >= (-13)); p_46 = safe_sub_func_int64_t_s_s(p_46, 3))
        {
            int l_248 = (-6L);
            int *l_267 = &g_111[8];
            union U1 *l_274 = &g_24;
            union U1 *l_324 = (void*)0;
            union U0 *l_338 = &g_9;
            int **l_341 = &l_277;
        }
        (*l_349) = &l_146;
        for (p_46 = 0; (p_46 < (-28)); p_46 = safe_sub_func_uint32_t_u_u(p_46, 7))
        {
            union U0 *l_362 = &g_9;
            int l_364 = (-5L);
            union U0 ***l_369[8][9][3] = {{{&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72},{&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72},{&g_72,(void*)0,&g_72},{&g_72,(void*)0,&g_72},{&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0},{&g_72,&g_72,(void*)0},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0}},{{&g_72,&g_72,(void*)0},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0},{&g_72,&g_72,(void*)0},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0},{&g_72,&g_72,(void*)0},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0}},{{&g_72,&g_72,(void*)0},{&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72}},{{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,&g_72}},{{(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72}},{{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72},{&g_72,&g_72,(void*)0},{(void*)0,&g_72,(void*)0},{&g_72,&g_72,(void*)0}}};
            int i, j, k;
            (*l_295) = (safe_mod_func_int8_t_s_s(p_46, g_211.f0));
            if (l_354)
                break;
            if (((safe_lshift_func_uint16_t_u_u(p_46, (((safe_lshift_func_int16_t_s_u(g_79[0].f2, ((1L < ((g_111[8] != (+1UL)) != (safe_sub_func_int64_t_s_s(g_220, g_79[0].f0)))) < ((p_45.f1 & func_59(l_136, l_361, l_136, l_362, &g_24)) ^ p_45.f1)))) < (*l_295)) ^ p_44))) >= g_220))
            {
                union U1 *l_363 = &g_24;
                (*l_295) = (0xA786B7301D2B11E0LL | ((void*)0 == l_363));
                l_364 = (((((*l_295) != g_220) >= (-9L)) <= 0x7EA915CF9A51A2D8LL) & func_59(&g_24, l_364, &g_24, l_263, l_136));
                (*l_349) = &g_111[7];
            }
            else
            {
                union U1 *l_374 = (void*)0;
                int l_397 = 0L;
                union U0 *l_398[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_398[i] = (void*)0;
                (*l_277) = ((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(0L, (+((void*)0 != l_369[4][3][1])))), 0L)) && g_220);
                for (p_47 = (-21); (p_47 < 14); p_47 = safe_add_func_int32_t_s_s(p_47, 8))
                {
                    long long l_375 = (-10L);
                    for (g_211.f0 = 2; (g_211.f0 >= 0); g_211.f0 -= 1)
                    {
                        int i;
                        g_111[(g_211.f0 + 6)] = ((p_45.f1 >= (4294967295UL & (p_47 | p_44))) < ((void*)0 == l_374));
                    }
                    if (p_45.f1)
                        break;
                    l_375 = (p_44 || p_45.f1);
                }
                for (g_211.f1 = (-17); (g_211.f1 <= 4); g_211.f1 = safe_add_func_int16_t_s_s(g_211.f1, 4))
                {
                    union U1 *l_379 = &g_24;
                    int l_388 = (-4L);
                    unsigned short l_399 = 0x373FL;
                    if (g_211.f1)
                        goto lbl_378;
                    l_388 = (p_46 || func_59(l_379, ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((!255UL), 7)), (((l_388 && (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(func_59(l_136, l_397, l_374, l_398[4], l_258), l_388)) <= g_211.f0), 1UL)) < g_211.f0), l_399)), p_46))) != 0xC37EL) && g_400))), 0x1954L)), 2)) ^ p_47) > g_211.f2) != 253UL), &g_24, &g_9, &g_24));
                    (*l_295) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(p_45.f1, (1UL <= p_46))), l_397));
                }

                if (p_47)
                    continue;
            }
            l_364 = (safe_add_func_uint64_t_u_u(((void*)0 != &g_9), p_45.f1));
        }
    }

        return g_24.f1;


}







static union U2 func_48(union U1 * p_49, unsigned p_50, unsigned long long p_51, union U1 * p_52)
{
    short l_124 = (-1L);
    int *l_126 = &g_111[8];
    for (p_51 = 0; (p_51 != 31); p_51 = safe_add_func_int16_t_s_s(p_51, 9))
    {
        union U0 *l_67[1][3];
        union U1 *l_80[3];
        union U2 l_87 = {0xFC87C03C79A39DA5LL};
        union U1 *l_122 = &g_24;
        int l_125 = 0x5A9B3FC6L;
        int *l_134 = &g_111[8];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_67[i][j] = &g_9;
        }
        for (i = 0; i < 3; i++)
            l_80[i] = &g_24;
        if (p_50)
        {
            union U1 *l_68 = (void*)0;
            int l_74 = 0xAA4AECA2L;
            union U2 *l_86 = &g_79[2];
            if ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(func_59(p_49, (((void*)0 == &g_24) && (safe_sub_func_uint8_t_u_u((!g_24.f0), 0xB7L))), &g_24, l_67[0][0], l_68), g_24.f1)), l_74)))
            {
                int **l_76[1][5][10] = {{{&g_75,&g_75,&g_75,&g_75,&g_75,(void*)0,(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}}};
                union U1 **l_81[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_81[i] = &l_68;
                g_75 = g_75;
                for (l_74 = (-4); (l_74 <= 5); ++l_74)
                {
                    return g_79[0];

                                    }
                g_23 = l_80[0];

                ;
            }
            else
            {
                union U0 *l_82 = &g_9;
                int l_83 = 0x32A224D5L;
                union U2 *l_85 = &g_79[0];
                if (func_59(l_68, g_79[0].f3, &g_24, l_82, &g_24))
                {
                    union U0 *l_84 = &g_9;
                    if (func_59(&g_24, (l_83 & 1L), p_52, l_84, &g_24))
                    {
                        l_86 = l_85;
                    }
                    else
                    {
                        return l_87;

                                            }
                }
                else
                {
                    union U1 **l_88 = (void*)0;
                    union U1 **l_89 = (void*)0;
                    p_52 = l_68;
                    l_74 = l_74;
                }
                for (l_87.f3 = 5; (l_87.f3 <= 59); l_87.f3++)
                {
                    for (l_74 = 6; (l_74 == (-16)); --l_74)
                    {
                        if (l_87.f3)
                            break;
                    }
                }

                            }

                    }
        else
        {
            int *l_110 = &g_111[8];
            g_75 = g_75;
            for (l_87.f1 = 0; (l_87.f1 != 11); l_87.f1++)
            {
                union U0 *l_96 = &g_9;
                int l_117 = 0x9D4FCBE7L;
            }

                        for (l_125 = 0; (l_125 >= (-11)); l_125--)
            {
                l_134 = l_126;
            }
        }

                g_75 = &g_111[8];

        ;
    }

    ;
    ;
    return g_79[0];

    }







static char func_59(union U1 * p_60, int p_61, union U1 * p_62, union U0 * p_63, union U1 * p_64)
{
    unsigned char l_69 = 0x34L;
    int *l_70 = (void*)0;
    int l_71[9][9][3] = {{{8L,(-9L),0x1BBDB817L},{0xC34309E9L,0xC34309E9L,0L},{0x1BBDB817L,1L,0L},{1L,0xC6C8ECDCL,9L},{(-9L),9L,0x434D12EAL},{0L,1L,9L},{3L,1L,0L},{0L,0xDCF28D0DL,0L},{(-8L),0L,0x1BBDB817L}},{{(-8L),0x04A86D6AL,0xFBA323A3L},{1L,0x04A86D6AL,0xA04D97F6L},{(-10L),0L,(-10L)},{0x81CA8FD5L,0xDCF28D0DL,0x04A86D6AL},{0L,1L,1L},{0x81CA8FD5L,(-9L),0x8CDE333BL},{8L,0L,0xA04D97F6L},{0x81CA8FD5L,3L,0x8A597FB6L},{1L,0L,1L}},{{(-5L),(-8L),(-10L)},{0xB5C02AC6L,(-8L),0x1BBDB817L},{0L,1L,0x1BBDB817L},{0x8CDE333BL,(-10L),(-10L)},{0x8A597FB6L,0x81CA8FD5L,1L},{0xC34309E9L,0L,0x8A597FB6L},{(-4L),0x637EAC69L,0xA04D97F6L},{(-1L),0x04A86D6AL,0x8CDE333BL},{(-8L),0x637EAC69L,1L}},{{(-9L),0L,8L},{(-6L),0x81CA8FD5L,0xB5C02AC6L},{(-8L),(-10L),0xC6C8ECDCL},{(-10L),1L,0x04A86D6AL},{(-10L),(-8L),(-6L)},{(-8L),(-8L),(-1L)},{(-6L),0L,0xC34309E9L},{(-9L),3L,0L},{(-8L),0L,0xDCF28D0DL}},{{(-1L),(-9L),0L},{(-4L),1L,0xC34309E9L},{0xC34309E9L,0x1BBDB817L,(-1L)},{0x8A597FB6L,0xC34309E9L,(-6L)},{0x8CDE333BL,8L,0x04A86D6AL},{0L,8L,0xC6C8ECDCL},{0xB5C02AC6L,0xC34309E9L,0xB5C02AC6L},{(-5L),0x1BBDB817L,8L},{1L,1L,1L}},{{0x81CA8FD5L,0xFBA323A3L,8L},{0xA04D97F6L,0L,0x434D12EAL},{0L,0x1BBDB817L,0x21D2CF1AL},{0L,(-9L),(-1L)},{1L,0x8CDE333BL,0xC6C8ECDCL},{3L,0x04A86D6AL,0x81CA8FD5L},{(-9L),1L,0x81CA8FD5L},{8L,0xC6C8ECDCL,0xC6C8ECDCL},{0x21D2CF1AL,0L,(-1L)}},{{(-8L),9L,0x21D2CF1AL},{(-6L),(-4L),0x434D12EAL},{0xC34309E9L,0x8A597FB6L,8L},{0x04A86D6AL,(-4L),1L},{0xFBA323A3L,9L,0xA04D97F6L},{(-5L),0L,3L},{0x8CDE333BL,0xC6C8ECDCL,0xDCF28D0DL},{0xC6C8ECDCL,1L,0x8A597FB6L},{0xC6C8ECDCL,0x04A86D6AL,(-5L)}},{{0x8CDE333BL,0x8CDE333BL,0xC34309E9L},{(-5L),(-9L),(-8L)},{0xFBA323A3L,0x1BBDB817L,0L},{0x04A86D6AL,0L,0x637EAC69L},{0xC34309E9L,0xFBA323A3L,0L},{(-6L),(-1L),(-8L)},{(-8L),0x81CA8FD5L,0xC34309E9L},{0x21D2CF1AL,(-8L),(-5L)},{8L,0xA04D97F6L,0x8A597FB6L}},{{(-9L),0xA04D97F6L,0xDCF28D0DL},{3L,(-8L),3L},{1L,0x81CA8FD5L,0xA04D97F6L},{0L,(-1L),1L},{0L,0xFBA323A3L,8L},{0xA04D97F6L,0xC34309E9L,0xDCF28D0DL},{1L,(-6L),0x434D12EAL},{(-1L),(-8L),0xFBA323A3L},{1L,0x21D2CF1AL,3L}}};
    union U0 ***l_73[5][6] = {{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72}};
    int i, j, k;
    l_71[4][2][2] = ((l_69 ^ g_9.f1) & p_61);
    g_72 = g_72;
    return p_61;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_79[i].f0, "g_79[i].f0", print_hash_value);
        transparent_crc(g_79[i].f1, "g_79[i].f1", print_hash_value);
        transparent_crc(g_79[i].f2, "g_79[i].f2", print_hash_value);
        transparent_crc(g_79[i].f3, "g_79[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
