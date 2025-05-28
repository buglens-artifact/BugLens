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
   char * f0;
   int f1;
   char * f2;
   char * f3;
   unsigned char f4;
};


static char g_13 = 0xFDL;
static char *g_12 = &g_13;
static int g_38 = 0L;
static int g_46 = (-7L);
static int g_56 = 1L;
static int g_63 = (-1L);
static int g_65 = 0xB7DC4B54L;
static unsigned g_72 = 0UL;
static unsigned g_78 = 3UL;
static int *g_82 = (void*)0;
static int **g_81 = &g_82;
static short g_85 = 1L;
static short g_91 = (-7L);
static unsigned short g_95 = 1UL;
static char *g_138 = &g_13;
static char **g_137 = &g_138;
static short g_153 = 9L;
static unsigned char g_156 = 0xBBL;
static union U0 g_210 = {0};
static union U0 *g_209 = &g_210;
static int g_219 = 0L;
static char g_247 = (-4L);
static unsigned short *g_255 = &g_95;
static unsigned short **g_254 = &g_255;
static char *g_342 = &g_247;
static unsigned short g_348 = 0UL;
static unsigned short g_378 = 65529UL;
static char ****g_399 = (void*)0;
static unsigned short g_408 = 65535UL;
static unsigned short g_429 = 0x980EL;
static unsigned short ***g_543 = &g_254;
static short ***g_584 = (void*)0;
static char g_821 = 0x17L;
static unsigned g_897 = 0UL;
static unsigned *g_1097 = &g_78;
static unsigned **g_1096 = &g_1097;
static char g_1101 = (-6L);
static short g_1238 = 0x1E3FL;
static unsigned g_1239 = 0x3CBBAB10L;
static short g_1326 = 1L;
static unsigned *g_1354 = &g_897;
static unsigned **g_1353 = &g_1354;



static int func_1(void);
static char * func_2(char * p_3, unsigned p_4, unsigned p_5);
static char * func_6(char * p_7, char p_8, unsigned p_9, unsigned p_10, unsigned short p_11);
static unsigned func_19(int p_20, unsigned p_21);
static int func_22(union U0 p_23, int p_24);
static union U0 func_25(unsigned short p_26, char * p_27);
static char * func_28(int p_29);
static unsigned char func_30(union U0 p_31, char * p_32, unsigned short p_33, char * p_34);
static union U0 func_35(char * p_36);
static short func_43(char * p_44, char p_45);
static int func_1(void)
{
    int l_14 = 0xA18E418AL;
    char *l_37 = (void*)0;
    union U0 l_592 = {0};
    short l_597 = 0xCE2BL;
    unsigned *l_1342 = (void*)0;
    unsigned *l_1343 = &g_897;
    char *l_1361 = &g_247;
    int *l_1362 = &l_14;
    (*l_1362) = ((l_1361 = func_2(((*g_137) = func_6(g_12, l_14, l_14, ((*l_1343) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0xC8100C43L | func_19(func_22((l_592 = func_25(g_13, func_28((((func_30(((*g_209) = func_35(l_37)), ((l_592 , (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_43(l_37, l_14), l_597)), 8L))) , l_37), l_597, &g_13) && g_91) ^ (*g_12)) ^ l_597)))), l_14), l_597)), l_14)), l_14))), l_597)), g_1238, g_56)) == l_37);
    return g_38;
}







static char * func_2(char * p_3, unsigned p_4, unsigned p_5)
{
    int *l_1350 = &g_63;
    char ***l_1358 = &g_137;
    char ****l_1357 = &l_1358;
    (*l_1350) &= 1L;
    for (g_78 = 1; (g_78 < 20); g_78 = safe_add_func_uint16_t_u_u(g_78, 4))
    {
        unsigned **l_1355 = &g_1354;
        int l_1356 = 7L;
        (*l_1350) = (g_1353 != l_1355);
        l_1356 &= (-1L);
        (*l_1350) |= 0x3EF3CE7FL;
    }
    l_1350 = ((l_1357 == g_399) , l_1350);
    for (g_46 = (-5); (g_46 <= 19); g_46 = safe_add_func_uint32_t_u_u(g_46, 7))
    {
        (*g_81) = l_1350;
        return p_3;
    }
    return (*g_137);
}







static char * func_6(char * p_7, char p_8, unsigned p_9, unsigned p_10, unsigned short p_11)
{
    union U0 l_1346 = {0};
    unsigned char l_1347 = 0xF2L;
    int l_1348 = 0L;
    int *l_1349 = &g_63;
    (*l_1349) ^= (l_1348 ^= ((safe_rshift_func_int8_t_s_u(((l_1347 ^ (-1L)) , (*p_7)), 6)) & 0xA5B15192L));
    return (*g_137);
}







static unsigned func_19(int p_20, unsigned p_21)
{
    unsigned short l_1263 = 3UL;
    union U0 l_1266 = {0};
    char *l_1267 = (void*)0;
    unsigned *l_1272 = &g_897;
    int l_1289 = (-1L);
    unsigned char l_1315 = 248UL;
    short *l_1321 = &g_85;
    if (p_20)
    {
        char l_1257 = 0x01L;
        int *l_1258 = &g_65;
        unsigned l_1259 = 0xED7C771DL;
        l_1259 = ((*l_1258) = l_1257);
    }
    else
    {
        union U0 l_1260 = {0};
        char *l_1261 = &g_247;
        int l_1262 = 1L;
        int l_1313 = 6L;
        short *l_1324 = &g_153;
        union U0 **l_1336 = (void*)0;
        if (((l_1262 > (~(safe_add_func_uint16_t_u_u(l_1262, p_21)))) ^ l_1262))
        {
            unsigned l_1286 = 18446744073709551615UL;
            int *l_1290 = (void*)0;
            (*g_81) = &l_1262;
            (*g_82) = (safe_sub_func_uint16_t_u_u(p_21, 1L));
            for (g_1239 = 16; (g_1239 >= 18); g_1239++)
            {
                unsigned l_1279 = 0x164DA5E7L;
                unsigned short *l_1280 = &g_378;
                unsigned short *l_1281 = (void*)0;
                unsigned short *l_1282 = &g_408;
                union U0 l_1283 = {0};
                int l_1284 = 0x3C30F417L;
                unsigned short l_1285 = 0x3BA5L;
                char *l_1287 = &g_821;
                int *l_1318 = &l_1313;
            }
        }
        else
        {
            unsigned l_1325 = 0UL;
            int l_1329 = (-7L);
            if (p_20)
            {
                char l_1322 = 6L;
                unsigned char *l_1323 = &l_1315;
                int *l_1337 = &g_38;
                char l_1340 = (-1L);
                l_1329 &= (safe_sub_func_uint32_t_u_u(((((p_21 , 0x307AL) , l_1321) != (((*l_1323) = (l_1322 & l_1313)) , l_1324)) >= (l_1325 , ((*g_342) = g_1326))), (((**g_1096) = ((((safe_rshift_func_int8_t_s_s(l_1262, 4)) , p_20) <= (*g_1097)) | (-9L))) < l_1325)));
                (*l_1337) |= l_1329;
                for (l_1325 = 0; (l_1325 > 11); l_1325++)
                {
                    return (*g_1097);
                }
                l_1340 ^= l_1329;
            }
            else
            {
                int *l_1341 = &l_1289;
                l_1341 = &g_65;
            }
            return (*g_1097);
        }
    }
    return (**g_1096);
}







static int func_22(union U0 p_23, int p_24)
{
    char *l_905 = &g_13;
    int l_906 = 0x062281C7L;
    char ***l_907 = &g_137;
    int l_908 = 0L;
    short *l_929 = (void*)0;
    short **l_928 = &l_929;
    int *l_945 = (void*)0;
    unsigned char *l_947 = &g_156;
    short *l_948 = (void*)0;
    unsigned l_955 = 18446744073709551615UL;
    char *l_956 = &g_13;
    unsigned l_957 = 18446744073709551615UL;
    int *l_985 = &g_38;
    char l_1030 = 0L;
    unsigned char l_1168 = 0x37L;
    char l_1181 = 1L;
    short l_1196 = 0xFCCDL;
    l_908 &= (((((void*)0 != l_905) || l_906) <= (((**g_137) && (0x88789C9BL | (((**g_137) , l_907) != (void*)0))) == (p_24 >= l_906))) < g_897);
    if (l_906)
    {
        unsigned short l_912 = 65535UL;
        char *l_917 = &g_247;
        int l_924 = 0xD71823D3L;
        union U0 l_941 = {0};
        unsigned char *l_942 = &g_156;
        int *l_943 = &g_46;
        char ***l_944 = &g_137;
        (*g_81) = &p_24;
        if (l_906)
            goto lbl_932;
lbl_932:
        for (g_408 = 0; (g_408 == 37); g_408++)
        {
            short *l_911 = &g_153;
            unsigned char *l_918 = &g_156;
            short *l_919 = &g_91;
            int l_920 = (-4L);
            unsigned char *l_921 = &g_210.f4;
            (**g_81) = (((((*l_911) = p_24) & l_912) != p_24) == ((((*l_921) = (((((*l_919) = (1UL || ((*l_918) = ((*g_255) , (((((*g_255) && ((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u(0UL, func_43(l_917, l_906))) < 65535UL) >= (*g_82)), (*g_255))) >= l_908)) ^ g_897) ^ 0x2BBFL) || 0xF7L))))) < l_920) == l_912) ^ p_24)) | (*g_12)) && p_24));
            l_924 = ((**g_81) = (safe_sub_func_int32_t_s_s((-1L), (p_24 | (**g_254)))));
            for (g_219 = (-7); (g_219 <= (-27)); g_219 = safe_sub_func_uint32_t_u_u(g_219, 5))
            {
                unsigned l_927 = 1UL;
                int *l_930 = (void*)0;
                int *l_931 = &l_908;
            }
        }
        p_24 = ((((((*l_943) = (safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_942) = (func_30(l_941, (*g_137), l_906, (*g_137)) == (p_24 , (***g_543)))), (*g_12))), 0L)) , 0x6024L), (*g_255))) | 0x9B9665B0L) , l_912), (*g_12)))) , 0x69L) , l_944) != l_907) != l_924);
        l_945 = ((*g_81) = (*g_81));
    }
    else
    {
        unsigned char l_946 = 6UL;
        return l_946;
    }
    if ((((*g_82) = (~(((*l_947) = (g_821 , ((*l_945) | (*g_138)))) | (((g_85 = p_24) >= (safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0xBAL, ((((*l_945) <= (l_955 != (g_348 , ((~func_43(l_956, l_957)) < 0UL)))) ^ (*l_945)) | (**g_254)))), p_24)) , 0xEF77FA1EL) <= (**g_81)), 0UL))) , (*l_945))))) || (*g_82)))
    {
        int l_962 = 8L;
        char *l_965 = &g_247;
        (*g_82) = ((safe_mod_func_uint8_t_u_u(g_91, (safe_sub_func_int8_t_s_s(l_962, ((***g_543) <= (((safe_rshift_func_int8_t_s_u((*l_945), l_962)) <= ((**g_254) >= p_24)) ^ (l_962 , func_43(l_965, l_962)))))))) < 7L);
        for (g_38 = 1; (g_38 <= 25); g_38 = safe_add_func_uint32_t_u_u(g_38, 7))
        {
            unsigned l_968 = 0UL;
            if (l_968)
                break;
        }
    }
    else
    {
        char ***l_977 = (void*)0;
        int l_980 = 0x62F35A9FL;
        int l_981 = 1L;
        unsigned char l_987 = 0x5AL;
        union U0 *l_999 = &g_210;
        char *l_1025 = &g_13;
        unsigned short *l_1066 = &g_429;
        int l_1092 = 0x551116F5L;
        char l_1183 = (-1L);
        short l_1186 = 0x9A4CL;
        short l_1187 = 4L;
        unsigned *l_1201 = &l_957;
        short ****l_1212 = &g_584;
        int l_1229 = 1L;
        unsigned l_1253 = 18446744073709551615UL;
        for (g_247 = 0; (g_247 == 17); g_247 = safe_add_func_uint16_t_u_u(g_247, 9))
        {
            unsigned short l_979 = 0xFA84L;
            char *l_983 = (void*)0;
            for (g_72 = (-16); (g_72 != 25); g_72++)
            {
                char ***l_978 = &g_137;
                for (g_95 = 0; (g_95 != 24); g_95 = safe_add_func_int8_t_s_s(g_95, 6))
                {
                    for (g_38 = 0; (g_38 < (-3)); --g_38)
                    {
                        (*l_945) &= (((l_977 == (l_978 = &g_137)) >= ((p_23 , 0xC1F0987EL) != p_24)) , (p_24 ^ p_24));
                    }
                    (*g_81) = (void*)0;
                }
                l_980 = ((p_24 != ((&l_929 != ((!l_979) , &l_948)) >= p_24)) , (((*l_945) = l_979) , 0xD59A5960L));
            }
            if ((p_24 <= (*l_945)))
            {
                int l_982 = 4L;
                int l_984 = 0x52FA3FE3L;
                l_984 = ((*l_945) = func_30((l_981 , (*g_209)), l_983, l_982, (*g_137)));
                (*g_81) = l_985;
            }
            else
            {
                short l_986 = (-4L);
                union U0 *l_998 = &g_210;
                char ***l_1012 = (void*)0;
                char ***l_1013 = (void*)0;
                char **l_1015 = (void*)0;
                char ***l_1014 = &l_1015;
                unsigned *l_1020 = &g_72;
                int *l_1021 = &l_906;
                (*l_985) = l_986;
                if (l_979)
                {
                    char *l_988 = &g_821;
                    int l_993 = 0xB397A6A1L;
                    union U0 *l_1002 = (void*)0;
                    union U0 **l_1003 = (void*)0;
                    union U0 **l_1004 = &l_1002;
                    (*l_985) ^= (l_987 , (func_30(p_23, l_988, ((*l_945) != (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(func_43((**l_907), (*g_138)), ((l_993 != 0xBFL) ^ 0x50550E37L))) , p_24), p_24))), l_988) && 0x7327191FL));
                    g_63 |= (((*l_947) = (func_30(p_23, func_28(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_947) = ((l_998 != (((*l_956) = 0x69L) , l_999)) > ((safe_mod_func_int8_t_s_s(((*g_209) , ((*g_255) & (**g_254))), (l_980 &= (((*l_1004) = l_1002) == (void*)0)))) < p_24))), 5)), p_24)) , 0xA721EA3FL)), p_24, (**l_907)) ^ (*l_985))) , (**g_81));
                    (*l_985) = 0xF37534B0L;
                }
                else
                {
                    unsigned char l_1005 = 254UL;
                    unsigned *l_1008 = (void*)0;
                    unsigned *l_1009 = &g_72;
                    (*l_945) = (l_1005 >= (safe_sub_func_int32_t_s_s(p_24, ((*l_1009) = 0UL))));
                    return g_13;
                }
                (*l_985) = func_30((*g_209), (*g_137), ((((p_24 >= (((*l_1020) |= (safe_sub_func_uint8_t_u_u((((*l_1014) = (*l_907)) != (void*)0), ((&g_254 != (p_24 , &g_254)) == (!(safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_986 == 0UL) ^ p_24), (**g_81))), 0x37CFL))))))) != 0xC38FAE6CL)) | l_980) == l_986) & 0xEFDFE17EL), l_983);
                l_1021 = (*g_81);
            }
            (*g_81) = &p_24;
            (*g_81) = (*g_81);
        }
        if (((void*)0 != (**l_907)))
        {
            char *l_1024 = &g_821;
            union U0 l_1028 = {0};
            int l_1029 = 0x0AE9E6F6L;
            char *****l_1041 = &g_399;
            char *l_1045 = (void*)0;
            unsigned l_1083 = 0x8F42BFD5L;
            unsigned char *l_1132 = &l_987;
            unsigned short l_1163 = 65535UL;
            unsigned l_1167 = 0x9ABE8670L;
            char l_1217 = (-1L);
            short *l_1230 = &l_1196;
            unsigned char l_1231 = 0x5BL;
            if (((safe_add_func_uint16_t_u_u(0xCDCBL, ((**g_254) = func_43(l_1024, ((~(g_156 = (((func_25((***g_543), l_1025) , (safe_sub_func_uint8_t_u_u(254UL, ((func_30(l_1028, l_1024, p_24, l_1024) ^ (*g_342)) , 0x69L)))) || l_1029) > 65528UL))) | g_13))))) <= l_1030))
            {
                short l_1038 = 0x29B8L;
                unsigned *l_1039 = (void*)0;
                unsigned *l_1040 = &g_78;
                unsigned l_1054 = 18446744073709551607UL;
                unsigned short **l_1057 = &g_255;
                int l_1076 = 7L;
                if ((((g_72 |= (((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((*g_255))), 1)) <= ((*l_945) & 0x2FL)) < (safe_add_func_uint8_t_u_u(((-1L) <= ((g_63 < (l_1029 != 0xCB54L)) || ((*l_1040) = (safe_add_func_uint16_t_u_u((l_1038 = (*g_255)), (**g_254)))))), 255UL)))) , 1L) , 0x0C332CD3L))
                {
                    (*g_81) = &p_24;
                    (**g_81) &= ((l_1029 , &p_23) == &l_1028);
                    return g_219;
                }
                else
                {
                    unsigned **l_1044 = &l_1039;
                    unsigned short *l_1065 = (void*)0;
                    int l_1071 = (-4L);
                    (*g_82) = (((*l_999) , &g_399) != l_1041);
                    if (g_153)
                        goto lbl_1058;
                    if ((l_1029 || (safe_sub_func_int32_t_s_s(((l_1044 == (void*)0) , l_1038), ((*l_1040) = (((*g_137) = ((*l_945) , (void*)0)) == l_1045))))))
                    {
                        (*g_81) = (*g_81);
                        (*g_82) = (safe_sub_func_uint8_t_u_u((((((*l_999) , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(g_56, l_1054)), 3)), (-1L)))) , (((safe_add_func_int32_t_s_s((*g_82), p_24)) > g_156) | (((*g_543) = l_1057) != (((g_897 && 0xFA93F9F4L) , g_408) , &g_255)))) != (*g_82)) & l_1054), g_13));
lbl_1058:
                        p_24 |= l_1029;
                        return p_24;
                    }
                    else
                    {
                        short ****l_1061 = (void*)0;
                        short ****l_1062 = &g_584;
                        (*g_82) |= (((safe_sub_func_int16_t_s_s(((((*l_1062) = g_584) != (void*)0) , (safe_mul_func_uint8_t_u_u(5UL, ((((**g_543) = l_1065) == l_1066) & (safe_lshift_func_uint16_t_u_s(((void*)0 == &l_945), 10)))))), (l_1029 >= ((safe_sub_func_uint8_t_u_u(0x45L, l_1029)) >= p_24)))) < 0xBC6F12DCL) , (-6L));
                    }
                    if (((void*)0 == &g_210))
                    {
                        (**g_81) |= p_24;
                        (*g_82) &= (*l_985);
                        (*g_81) = (*g_81);
                    }
                    else
                    {
                        (*g_82) &= l_1071;
                    }
                }
                (*l_985) = (((*l_985) == ((l_906 ^= (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_24, 1UL)), (l_1076 &= (*l_945))))) , (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(p_24, ((safe_sub_func_int16_t_s_s((65527UL > p_24), l_1083)) ^ (**g_81)))) ^ p_24), (*l_985))))) ^ l_1038);
                (*g_81) = ((safe_sub_func_int8_t_s_s(((*l_905) = (safe_lshift_func_uint16_t_u_s(p_24, 10))), func_43(l_1025, ((void*)0 == (*l_907))))) , &p_24);
            }
            else
            {
                unsigned *l_1095 = &l_955;
                unsigned short **l_1100 = &g_255;
                int l_1106 = 0xAF8CFAB2L;
                char *l_1116 = &g_821;
                char *l_1118 = &l_1030;
                union U0 *l_1121 = &l_1028;
                unsigned l_1134 = 1UL;
                int *l_1140 = &l_1092;
                union U0 **l_1141 = &l_1121;
                if ((**g_81))
                {
                    unsigned *l_1094 = &l_957;
                    unsigned **l_1093 = &l_1094;
                    int l_1107 = 0xF3AA8293L;
                    int l_1108 = 0x04E51223L;
                    (*l_945) &= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_1092 & 0x66F2L), 1)), 0x8EL));
                    (*g_82) = (((((*l_1093) = &g_897) == l_1095) , ((g_72 , (void*)0) != g_1096)) , 0x8CECA744L);
                    (*l_945) = func_43((l_981 , (*g_137)), (func_30((*l_999), ((*l_985) , func_28((safe_rshift_func_int8_t_s_u((((l_1100 == &l_1066) < (l_1107 &= func_43(func_28(g_1101), (l_1106 |= ((*l_905) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_43((*g_137), (*g_138)), p_24)), 0L))))))) != 65535UL), 4)))), l_1108, (**l_907)) , (-7L)));
                    for (g_156 = 0; (g_156 >= 59); g_156++)
                    {
                        (*g_81) = &l_1108;
                    }
                }
                else
                {
                    union U0 *l_1123 = &g_210;
                    int l_1127 = (-1L);
                    unsigned char *l_1133 = &g_156;
                    int *l_1139 = &l_906;
                    if ((**g_81))
                    {
                        short l_1113 = 0x931BL;
                        char *l_1117 = &l_1030;
                        int *l_1119 = (void*)0;
                        int *l_1120 = &l_908;
                        union U0 **l_1122 = &l_1121;
                        (*g_81) = &l_1029;
                        (*l_985) = ((safe_mul_func_int8_t_s_s(l_1113, (*l_945))) | l_1106);
                        (*l_1120) |= (((((safe_sub_func_int8_t_s_s(0x9CL, 251UL)) & (!func_30(func_35((**l_907)), (l_1045 = l_1116), p_24, (l_1118 = l_1117)))) != ((*l_1117) = ((*l_1116) ^= (l_1029 <= l_1092)))) != p_24) , 0xF8DDD6E3L);
                        (*l_1122) = l_1121;
                    }
                    else
                    {
                        union U0 **l_1124 = &l_1123;
                        unsigned l_1138 = 0x28B4CED7L;
                        (*l_945) = (*g_82);
                        (*l_1124) = (l_1106 , l_1123);
                        (**g_81) |= 0xEE5AA17BL;
                        (*l_945) = ((p_24 & (((safe_add_func_uint32_t_u_u(l_1127, ((((safe_mul_func_uint8_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u((**g_254), 10)))) , l_1132) == l_1133) || l_1134))) || (safe_lshift_func_int8_t_s_u((**g_137), 7))) <= (safe_unary_minus_func_uint32_t_u((l_1138 >= (**g_137)))))) , 0x3DDECBEAL);
                    }
                    (*l_945) = (*g_82);
                    (*g_81) = (void*)0;
                    l_1139 = &p_24;
                }
                l_1140 = &p_24;
                (*l_1141) = &p_23;
            }
            (*l_985) |= p_24;
lbl_1218:
            for (g_348 = 0; (g_348 <= 22); g_348++)
            {
                char *l_1150 = &g_1101;
                int l_1153 = 0x721ABED0L;
                unsigned l_1166 = 0x0BD43A7AL;
                unsigned ***l_1192 = (void*)0;
                for (l_908 = 9; (l_908 != 5); --l_908)
                {
                    unsigned *l_1154 = &l_1083;
                    int l_1158 = 9L;
                    (*l_985) = ((p_24 != ((safe_rshift_func_uint8_t_u_s(g_156, (*g_342))) || (safe_unary_minus_func_uint8_t_u(0xA2L)))) > ((**g_1096) ^ ((*l_1154) ^= (safe_unary_minus_func_uint8_t_u(((((*l_1066) = func_43(l_1150, l_1092)) <= (safe_mod_func_uint32_t_u_u(0x1F904D2AL, l_1153))) , 1UL))))));
                    if (((void*)0 == g_399))
                    {
                        if (p_24)
                            break;
                    }
                    else
                    {
                        int l_1157 = (-6L);
                        (*l_945) = ((*g_1096) == ((safe_add_func_int8_t_s_s(8L, (((*l_985) < l_1157) && l_1158))) , (*g_1096)));
                        (*g_81) = ((safe_mod_func_uint32_t_u_u(((**g_1096) = (((**g_1096) < l_1158) ^ (((*g_342) |= (!(safe_rshift_func_uint16_t_u_u(l_1153, 12)))) && l_1158))), p_24)) , &l_1153);
                    }
                    (*g_81) = &l_1153;
                    if (p_24)
                        break;
                }
                (*g_81) = (l_1028 , &p_24);
                if (l_1163)
                {
                    int l_1169 = 0L;
                    char *l_1170 = &g_247;
                    unsigned l_1173 = 4294967294UL;
                    if ((*g_82))
                        break;
                    if (l_1030)
                        goto lbl_1218;
                    if ((safe_add_func_int32_t_s_s(l_1166, (func_43(l_1150, l_1167) | (((*g_82) == func_43(l_1150, (func_43((**l_907), l_1168) < l_1169))) <= 0x2543L)))))
                    {
                        char l_1171 = 0x20L;
                        int **l_1172 = &l_945;
                        (*l_985) ^= ((**g_81) & (func_43(((l_1163 & ((*l_1132) = (p_24 , g_897))) , l_1170), (((l_1171 != p_24) | p_24) , (l_1171 < 1UL))) > l_981));
                        (*l_1172) = ((*g_81) = (void*)0);
                        g_63 |= (*l_985);
                        return p_24;
                    }
                    else
                    {
                        (*l_985) = ((*g_82) = l_1173);
                    }
                    if (((l_1153 > (*g_12)) & l_1083))
                    {
                        (*g_82) = func_43((*g_137), l_1173);
                    }
                    else
                    {
                        char *l_1174 = &g_247;
                        unsigned short l_1180 = 0x9353L;
                        unsigned short *l_1182 = &g_408;
                        p_24 = (l_1180 && l_981);
                    }
                    (*l_985) |= ((p_24 <= l_1187) , (*l_945));
                }
                else
                {
                    short *l_1195 = &l_1187;
                    int l_1197 = 0xAC3B0E2EL;
                    unsigned *l_1198 = &g_897;
                    if (((((*l_1198) = p_24) , l_1166) == p_24))
                    {
                        unsigned **l_1202 = &l_1198;
                        int l_1211 = 0L;
                        if (p_24)
                            break;
                        (*g_82) = (safe_rshift_func_uint8_t_u_s(((*l_947) = ((((*l_945) = ((l_1201 == ((*l_1202) = l_1201)) < l_1197)) <= (!(safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((void*)0 != &g_210), (((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((0x72CB1436L || l_1211) || ((*l_985) ^ (**g_81))) & (-2L)), 5)) , 1L), l_1211)) , l_1212) != &g_584))), l_1163)))) != p_24)), 1));
                        (*l_945) |= ((*g_82) = (0x6ED630D8L && ((**g_1096) = 0x2721E6F6L)));
                    }
                    else
                    {
                        return p_24;
                    }
                    (*g_81) = &p_24;
                    p_24 = ((*l_985) |= ((p_23 , p_24) < l_1153));
                    return p_24;
                }
            }
            (*l_945) = (safe_mul_func_uint16_t_u_u((l_1183 >= (safe_sub_func_int16_t_s_s(p_24, (safe_rshift_func_int16_t_s_s(p_24, (((*g_12) > (l_1029 >= (g_429 & ((*l_1230) |= ((safe_sub_func_int8_t_s_s((l_1028 , ((safe_rshift_func_uint16_t_u_u(func_43((*g_137), l_1217), l_1229)) & l_1186)), l_1092)) & p_24))))) <= 0x66E77F1DL)))))), l_1231));
        }
        else
        {
            char *l_1236 = (void*)0;
            int l_1237 = 0xC9E64C8AL;
            for (l_1168 = 0; (l_1168 != 6); ++l_1168)
            {
                int **l_1249 = &l_945;
                char *l_1254 = &g_13;
                if ((**g_81))
                    break;
                if ((*l_985))
                    break;
            }
            (*l_985) ^= (*l_945);
            (*g_81) = (((*g_138) && l_1237) , &p_24);
            (*g_81) = (void*)0;
        }
        (*l_985) |= (~(0xFAE6F72BL & ((*g_1097) = ((safe_lshift_func_uint8_t_u_s((0UL || 0x84L), 2)) > l_981))));
    }
    (*l_985) &= ((*l_945) , p_24);
    return (*l_985);
}







static union U0 func_25(unsigned short p_26, char * p_27)
{
    short *l_620 = &g_153;
    short **l_619 = &l_620;
    int l_645 = (-6L);
    char l_646 = 0x16L;
    int l_676 = 1L;
    union U0 l_701 = {0};
    int *l_710 = (void*)0;
    char *l_751 = &l_646;
    unsigned *l_780 = &g_78;
    unsigned **l_779 = &l_780;
    unsigned short l_781 = 0x936FL;
    short l_782 = 0xFDDDL;
    short l_783 = (-1L);
    unsigned char *l_784 = &l_701.f4;
    unsigned short l_823 = 0x7007L;
    unsigned short l_845 = 0x1DF8L;
    int l_876 = (-5L);
    unsigned char l_899 = 254UL;
lbl_815:
    for (g_408 = (-9); (g_408 != 16); g_408 = safe_add_func_uint8_t_u_u(g_408, 3))
    {
        int l_615 = 9L;
        unsigned char *l_618 = &g_156;
        short ***l_621 = &l_619;
        unsigned **l_635 = (void*)0;
        unsigned l_663 = 0x138F2BE5L;
        char **l_697 = &g_138;
        int **l_702 = &g_82;
        union U0 l_725 = {0};
        unsigned short **l_743 = &g_255;
    }
    if ((((func_43(((*g_137) = func_28((safe_mul_func_uint8_t_u_u(((*l_784) = (func_30((func_43(func_28(p_26), l_676) , l_701), (*g_137), (((((safe_sub_func_uint32_t_u_u((((l_779 == (l_781 , (void*)0)) && l_645) , l_782), p_26)) ^ l_783) , 0xF708C92BL) < 4294967286UL) == g_56), (*g_137)) < g_91)), (*p_27))))), (*p_27)) ^ 0xE3BAL) , 7UL) & p_26))
    {
        int *l_785 = (void*)0;
        int *l_786 = &g_63;
        int l_808 = 0x45488147L;
    }
    else
    {
        char *l_818 = (void*)0;
        int l_822 = 0x0B8C2900L;
        union U0 l_846 = {0};
        unsigned *l_896 = &g_897;
        int l_902 = (-1L);
        for (g_38 = 0; (g_38 < (-3)); g_38 = safe_sub_func_uint8_t_u_u(g_38, 2))
        {
            int *l_839 = &g_38;
            char l_847 = 0L;
            int l_864 = 0xC7B4695BL;
            union U0 l_867 = {0};
            unsigned char *l_898 = &l_867.f4;
            short ***l_900 = &l_619;
            int *l_901 = &l_645;
            int *l_903 = &g_63;
            for (p_26 = 0; (p_26 == 37); p_26++)
            {
                char *l_819 = &g_13;
                char *l_820 = &g_821;
                int l_833 = 0xCCF5EEEAL;
                unsigned short l_836 = 0x9693L;
                char ***l_859 = (void*)0;
                union U0 l_868 = {0};
                int *l_869 = &l_864;
                int l_875 = 0xBCDC86EFL;
                if (g_65)
                    goto lbl_815;
            }
            if (p_26)
                goto lbl_904;
            (*l_903) = (safe_mod_func_uint8_t_u_u(((((*g_255) <= (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((p_26 != (safe_sub_func_int16_t_s_s(((***l_900) = (safe_mod_func_int16_t_s_s(((*g_209) , (l_822 |= (safe_unary_minus_func_int32_t_s(((*l_901) &= (((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((((*l_784) = 3UL) != ((*l_898) = (l_896 == ((**g_254) , &g_897)))), (((***g_543) , ((*g_82) = (*g_82))) > l_899))) , (void*)0) == l_900) != g_897), g_153)) ^ 0L) & p_26), (-1L))) >= (*p_27)) ^ 252UL)))))), g_85))), (-1L)))), p_26)), l_902))) != g_85) != p_26), (*g_342)));
            return (*g_209);
        }
lbl_904:
        (*g_81) = &l_645;
        (**g_81) = p_26;
    }
    return l_701;
}







static char * func_28(int p_29)
{
    char *l_612 = &g_13;
    for (g_95 = (-12); (g_95 > 3); g_95++)
    {
        (**g_81) = (*g_82);
    }
    return l_612;
}







static unsigned char func_30(union U0 p_31, char * p_32, unsigned short p_33, char * p_34)
{
    short l_598 = 1L;
    unsigned short **l_607 = &g_255;
    int *l_608 = &g_65;
    unsigned char l_609 = 0UL;
    l_598 &= p_33;
    (*l_608) = ((*g_342) != ((safe_sub_func_uint32_t_u_u((p_32 != &g_156), ((*g_255) >= 0xB402L))) , (safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((void*)0 != l_607), func_43((*g_137), (*g_342)))), 0xE9DDL)) >= 0x9B52CC8DL), g_95))));
    (*l_608) &= p_33;
    (*g_81) = l_608;
    return l_609;
}







static union U0 func_35(char * p_36)
{
    unsigned l_329 = 0x5A60A70DL;
    char ***l_336 = &g_137;
    int l_347 = 0L;
    int l_349 = 0x3D29711FL;
    union U0 l_350 = {0};
    unsigned l_409 = 18446744073709551609UL;
    unsigned short l_430 = 65530UL;
    unsigned short **l_431 = &g_255;
    int *l_432 = &g_63;
    int *l_435 = &g_65;
    unsigned *l_449 = &g_78;
    unsigned **l_448 = &l_449;
    for (g_38 = 0; (g_38 != (-19)); g_38 = safe_sub_func_int8_t_s_s(g_38, 5))
    {
        short l_330 = 0x6B8BL;
        int l_331 = 0L;
        int *l_337 = (void*)0;
        int *l_338 = &g_63;
        int *l_339 = &g_65;
        char *l_340 = &g_13;
        char **l_341 = (void*)0;
        int l_396 = 0x130411F7L;
        unsigned short **l_419 = (void*)0;
        (*l_339) = ((safe_mod_func_int8_t_s_s((l_331 = (func_43(p_36, (*g_12)) >= (safe_mod_func_uint8_t_u_u(l_329, l_330)))), l_330)) != ((safe_lshift_func_uint16_t_u_s((**g_254), ((safe_mul_func_int16_t_s_s((((*l_338) = ((((void*)0 != l_336) & l_330) <= 0xEC63L)) | 0x812E3678L), 0x8DAFL)) , (*l_338)))) == g_247));
        if ((g_91 == func_43((*g_137), ((*l_338) | (func_43((p_36 = (*g_137)), (l_349 &= ((func_43((g_342 = l_340), (safe_sub_func_uint16_t_u_u((*g_255), (safe_rshift_func_uint16_t_u_s(l_329, (func_43((*g_137), (l_347 |= l_329)) , (*l_339))))))) != g_348) != g_63))) == l_329)))))
        {
            (*l_338) = (*l_338);
        }
        else
        {
            (*g_81) = (*g_81);
            return l_350;
        }
        (*l_339) ^= (*l_338);
        if (((*l_339) = (*l_338)))
        {
            char ***l_351 = &g_137;
            char ****l_352 = &l_351;
            (*l_338) |= ((*l_339) = ((l_336 != ((*l_352) = l_351)) && 0x7CL));
        }
        else
        {
            unsigned l_395 = 18446744073709551615UL;
            char *l_400 = (void*)0;
            int l_401 = (-7L);
            char *l_412 = &g_13;
            int l_420 = 1L;
            for (g_85 = 0; (g_85 > 2); g_85 = safe_add_func_uint16_t_u_u(g_85, 5))
            {
                int l_362 = 0x7B0FE012L;
                char *l_367 = &g_247;
                int *l_397 = &l_362;
            }
            l_420 ^= (l_409 >= (safe_lshift_func_uint8_t_u_s((0x9FL <= func_43(((**l_336) = l_412), (safe_sub_func_int32_t_s_s(0x050889C4L, (safe_add_func_int32_t_s_s((l_401 && (safe_sub_func_int16_t_s_s((((*g_12) < (*l_338)) , l_409), (&g_255 != l_419)))), 1UL)))))), l_401)));
        }
    }
    (*l_432) ^= (0xFCDBL != (((safe_rshift_func_uint16_t_u_u(l_347, (((((((**g_254) = (safe_add_func_int8_t_s_s((((((-9L) != 0xAFL) | ((g_38 >= (safe_add_func_int32_t_s_s((l_349 = (((((((0x5AL || (g_85 && 4UL)) ^ (func_43(((safe_add_func_uint8_t_u_u(((0xBC625ECAL != 4294967287UL) , 2UL), l_347)) , p_36), l_349) || 0x834CL)) > l_409) || 0x9E4DL) , 0x53022FDEL) ^ l_409) <= g_429)), l_409))) ^ g_38)) || (**g_137)) == l_430), (-1L)))) || (**g_254)) && l_409) , (*g_138)) , l_431) != (void*)0))) && (*g_255)) || l_430));
lbl_521:
    (*l_435) |= (safe_rshift_func_uint16_t_u_u(((*l_432) && 0x66D7L), 10));
    if (((((safe_rshift_func_uint8_t_u_s(((*l_435) >= (safe_add_func_uint16_t_u_u(((*l_432) , (g_219 | ((((*l_432) , (((safe_lshift_func_int16_t_s_s((-7L), (+(((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((*l_448) = l_435) != (void*)0), 14)), (*l_435))) , 6UL) , g_429)))) , (*l_336)) == (void*)0)) == 0UL) && (*g_255)))), (**g_254)))), 1)) | 0xF1L) >= g_63) , (*l_435)))
    {
        char *l_452 = (void*)0;
        int l_453 = 5L;
        int l_470 = 0x2A857ABAL;
        int l_471 = 0xECA912DCL;
        union U0 l_481 = {0};
        short *l_513 = &g_91;
        short **l_512 = &l_513;
        unsigned short l_518 = 7UL;
        if ((safe_rshift_func_uint8_t_u_u((0xEB08L != (func_43(l_452, l_453) <= (safe_lshift_func_int16_t_s_u((g_78 , l_453), (l_350 , (*l_435)))))), 6)))
        {
            unsigned short l_468 = 0UL;
            union U0 **l_469 = &g_209;
            short *l_472 = &g_85;
            short *l_473 = (void*)0;
            short *l_474 = &g_91;
            int *l_475 = &l_349;
            int *l_476 = &g_38;
            unsigned l_505 = 3UL;
            if (((*l_476) = (l_453 && ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_408, 14)), (safe_add_func_int32_t_s_s(((*l_432) = ((*l_475) |= (((*l_474) = ((((((*l_472) = (((safe_mod_func_uint16_t_u_u((((*g_342) | (g_78 < ((*l_435) = (safe_mul_func_int8_t_s_s((l_470 = ((safe_mul_func_uint8_t_u_u((g_46 && l_468), (((void*)0 == l_469) , (((((+l_453) >= g_153) != 0L) & l_468) && (*l_432))))) == (-7L))), (*g_12)))))) && 65535UL), l_471)) ^ 1L) || 0xFFFFL)) , 0xB7C8B636L) || g_91) , (*g_209)) , g_378)) >= 0x0683L))), g_78)))) | (-1L)))))
            {
                (*g_81) = (*g_81);
                for (g_78 = 22; (g_78 == 6); g_78--)
                {
                    unsigned short l_484 = 0x766EL;
                    union U0 *l_489 = (void*)0;
                    for (l_347 = 0; (l_347 != 17); ++l_347)
                    {
                        (*g_81) = (*g_81);
                        return l_481;
                    }
                    for (l_409 = (-16); (l_409 == 26); l_409 = safe_add_func_uint8_t_u_u(l_409, 7))
                    {
                        short l_490 = (-1L);
                        (*g_81) = (*g_81);
                        (*l_476) |= ((l_484 , (safe_mul_func_uint16_t_u_u(l_484, func_43(((*g_137) = ((((!0xA893L) == (*l_475)) , ((*l_432) = (l_470 = (((safe_sub_func_int32_t_s_s(g_46, ((void*)0 == l_489))) | l_453) >= (((**g_254) = (**g_254)) ^ l_490))))) , p_36)), (*g_342))))) != g_219);
                    }
                }
            }
            else
            {
                unsigned char *l_506 = &g_156;
                unsigned l_507 = 18446744073709551606UL;
                int *l_508 = &g_63;
                (*l_476) = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(func_43(p_36, func_43((*g_137), (!(*l_435)))), (*l_475))), (((((((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(1UL, ((*l_506) |= ((*l_476) , ((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(8UL, 1UL)) || l_505), (*l_435))) & (*l_432)))))) , l_507) <= (*l_432)), 0x5FL)) , g_65) < 0UL) != (*g_255)) , g_247) >= 1L) , l_471)));
                (*g_81) = l_508;
                (*l_475) &= (g_408 & 0L);
            }
        }
        else
        {
            unsigned char l_509 = 0x40L;
            union U0 l_515 = {0};
            (*l_432) = (((l_509 , (((safe_sub_func_uint16_t_u_u((0xEDL & (~l_470)), l_509)) || (((l_512 == (void*)0) || ((*g_209) , (safe_unary_minus_func_uint8_t_u((l_513 == (void*)0))))) || 4L)) > 0x3CF5L)) || l_509) & 0x00534BFDL);
            return l_515;
        }
        (*l_435) = ((safe_mul_func_uint16_t_u_u((((*l_513) = g_65) > l_518), 0xF672L)) | g_408);
    }
    else
    {
        char *l_529 = &g_247;
        int l_538 = 0L;
        union U0 *l_570 = &l_350;
        char *l_571 = &g_13;
        for (g_38 = 0; (g_38 <= (-17)); g_38--)
        {
            unsigned short l_522 = 0x3245L;
            unsigned short ***l_542 = &g_254;
            int *l_548 = &l_349;
            char *l_582 = &g_247;
            if (g_13)
                goto lbl_521;
            if (l_522)
            {
                unsigned char l_537 = 0x37L;
                (*l_435) |= (((g_13 , l_522) && (safe_mul_func_int16_t_s_s((0xE899L <= ((safe_mul_func_int8_t_s_s((*l_432), (safe_lshift_func_int16_t_s_u((func_43(((*g_209) , p_36), (*g_342)) || ((l_529 != (void*)0) , l_522)), (**g_254))))) <= 1L)), 0xBED4L))) && 0xE8318557L);
                l_347 = ((*l_435) = ((*l_432) |= (~(*l_435))));
                for (g_95 = 0; (g_95 == 33); ++g_95)
                {
                    return (*g_209);
                }
                for (l_329 = 0; (l_329 >= 44); l_329++)
                {
                    char *l_534 = &g_13;
                    int l_541 = (-1L);
                    unsigned *l_546 = &l_409;
                    unsigned *l_547 = &g_78;
                }
            }
            else
            {
                unsigned l_557 = 0x97F44B5EL;
                char *l_575 = &g_13;
                (*l_435) &= ((*l_548) = ((*l_432) = (*l_548)));
                if ((((*l_432) & l_538) , (((safe_add_func_int16_t_s_s(l_538, ((*l_432) ^ (((**g_254) = (((l_557 , ((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((((*l_548) = (((func_43(((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_538, (safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(g_56, ((void*)0 == l_570))) | 0x72F9L), 3)))), (*l_548))) , p_36), (*g_12)) <= 0x6440F526L) >= 1UL) ^ g_46)) > g_38), 12)) <= (*g_342)) && 0UL), l_557)) , (*l_435))) && 1L) , (**g_254))) ^ 0L)))) >= (*l_435)) ^ g_219)))
                {
                    unsigned l_583 = 0x141089C8L;
                    int l_588 = 0x4CBF2352L;
                    if ((*l_432))
                    {
                        unsigned short l_572 = 0x9269L;
                        union U0 **l_585 = &l_570;
                        (*l_585) = (((func_43(l_571, l_572) == l_557) & (safe_sub_func_uint8_t_u_u((func_43(l_575, (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((~(safe_lshift_func_int8_t_s_u((func_43(l_582, l_557) < l_538), l_583))), (-1L))), l_557)) , g_584) != (void*)0)) > 0UL), l_583))) , l_570);
                        l_588 ^= ((*l_548) |= (((*l_529) &= ((safe_lshift_func_uint8_t_u_s(l_583, 0)) < ((*l_449) = func_43(p_36, func_43(p_36, (*l_432)))))) && 0L));
                    }
                    else
                    {
                        (*g_81) = l_548;
                        if (l_557)
                            continue;
                    }
                }
                else
                {
                    int *l_591 = &g_38;
                    (*l_432) = (*l_435);
                    for (l_538 = 0; (l_538 != 2); l_538 = safe_add_func_uint32_t_u_u(l_538, 6))
                    {
                        (*g_81) = l_591;
                    }
                    if ((*l_548))
                        break;
                }
            }
        }
    }
    return l_350;
}







static short func_43(char * p_44, char p_45)
{
    short l_51 = 1L;
    int l_70 = 0x230B5454L;
    char ***l_110 = (void*)0;
    unsigned short *l_145 = (void*)0;
    int **l_180 = &g_82;
    unsigned char l_189 = 0x90L;
    char l_242 = 1L;
    short l_243 = (-5L);
    int l_248 = 3L;
    int l_272 = 0xB67568F5L;
    unsigned l_291 = 18446744073709551609UL;
    union U0 *l_294 = &g_210;
    unsigned *l_322 = &g_72;
    return p_45;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1238, "g_1238", print_hash_value);
    transparent_crc(g_1239, "g_1239", print_hash_value);
    transparent_crc(g_1326, "g_1326", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
