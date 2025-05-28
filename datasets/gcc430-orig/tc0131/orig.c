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



static unsigned short g_2 = 1UL;
static unsigned short g_4 = 0x6F9BL;
static unsigned char g_32 = 255UL;
static unsigned short *g_59 = &g_2;
static int g_64 = 0xFB861A71L;
static int g_70 = 0x59960698L;
static unsigned short g_89 = 0x5F1CL;
static int g_93 = 0x4CA00AF4L;
static char g_111 = 1L;
static int *g_120 = &g_70;
static int **g_119 = &g_120;
static unsigned g_133 = 4294967295UL;
static unsigned char g_154 = 0xADL;
static unsigned char g_156 = 0x85L;
static char *g_173 = &g_111;
static char **g_172 = &g_173;
static unsigned short **g_223 = &g_59;
static short g_257 = 0xF3DAL;
static char g_267 = 0xEAL;
static unsigned char *g_293 = &g_156;
static int g_330 = 1L;
static short g_452 = 0x3091L;
static int **g_487 = (void*)0;
static short *g_522 = &g_452;
static short **g_521 = &g_522;
static unsigned g_594 = 1UL;
static unsigned char g_723 = 1UL;
static volatile int g_775 = (-9L);
static unsigned g_778 = 4294967295UL;
static int g_864 = 0x2669966DL;
static unsigned g_894 = 0xECBACDF8L;
static unsigned char g_895 = 5UL;
static unsigned *g_907 = &g_778;
static unsigned **g_906 = &g_907;
static char ***g_916 = (void*)0;
static unsigned g_938 = 0x17F07449L;
static short g_941 = 0x986EL;
static short g_952 = 0x75A2L;



static unsigned char func_1(void);
static char func_9(char p_10, int p_11, unsigned short * p_12, unsigned short * p_13);
static unsigned char func_16(unsigned short * p_17, unsigned short * p_18, unsigned char p_19, unsigned short * p_20);
static unsigned short * func_21(unsigned short * p_22, unsigned short * p_23, unsigned p_24, unsigned short * p_25);
static unsigned short * func_26(unsigned short p_27);
static int func_35(int p_36, unsigned char * p_37);
static unsigned char func_42(unsigned p_43, unsigned short * p_44);
static unsigned func_48(unsigned short * p_49, unsigned char * p_50);
static unsigned short * func_51(short p_52, unsigned short * p_53);
static unsigned char func_54(unsigned short * p_55);
static unsigned char func_1(void)
{
    unsigned short *l_3 = &g_4;
    int l_30 = 0x89A9B8FAL;
    unsigned char *l_31 = &g_32;
    int l_918 = 0x37DBEFF9L;
    char l_953 = 1L;
    unsigned char l_954 = 0xCFL;
    int *l_955 = &g_93;
    int l_960 = 0x4F320406L;
    int *l_971 = (void*)0;
    int *l_972 = &g_70;
    (*l_955) = (((*l_3) |= g_2) <= (safe_mod_func_uint8_t_u_u((255UL < 0x02L), (g_2 | ((*g_173) = (safe_mod_func_int8_t_s_s(((func_9((l_918 |= (0L != ((*g_173) = (safe_mod_func_int8_t_s_s(0xCFL, func_16(func_21(func_26((0x9EF4A042L & ((safe_mul_func_uint8_t_u_u(((*l_31) ^= ((&g_2 != &g_2) < l_30)), 5UL)) != g_2))), l_3, g_2, l_3), l_3, l_30, l_3)))))), l_30, &g_2, &g_2) != l_953) | l_954), 0xD8L)))))));
    (*l_972) |= ((*l_955) = ((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((l_960 | ((safe_sub_func_uint8_t_u_u((*g_293), 0xF9L)) != (-1L))), (*l_955))), (*l_955))) && (*l_955)) | 0x49L) ^ (*l_955)));
    (*l_972) = (*l_972);
    (*l_955) &= (*l_972);
    return (*g_293);
}







static char func_9(char p_10, int p_11, unsigned short * p_12, unsigned short * p_13)
{
    char l_919 = 0x4FL;
    unsigned short *l_923 = &g_89;
    int l_935 = 0x21DB0C38L;
    unsigned short *l_936 = &g_89;
    unsigned l_942 = 0x3F08047FL;
    unsigned short l_944 = 1UL;
    l_919 ^= p_10;
    if (((*p_12) >= (((*g_906) = (*g_906)) == (void*)0)))
    {
        int **l_920 = (void*)0;
        int ***l_921 = &g_487;
        int l_922 = 0x1DE9BA2CL;
        int l_924 = 0xBD667145L;
        (*l_921) = l_920;
        l_924 &= (((p_11 <= l_922) < (p_12 != (p_13 = l_923))) && l_919);
    }
    else
    {
        unsigned short l_933 = 5UL;
        short *l_934 = &g_257;
        unsigned *l_937 = &g_938;
        short *l_940 = &g_941;
        short **l_939 = &l_940;
        int *l_943 = &g_64;
        p_11 = (safe_mul_func_uint8_t_u_u((((((*g_173) = (safe_add_func_uint16_t_u_u(l_919, (((safe_add_func_uint32_t_u_u((((*g_173) & ((*g_293) = (safe_lshift_func_int16_t_s_s(9L, 15)))) ^ ((*l_934) = ((**g_521) = l_933))), ((p_13 != ((*l_939) = func_21(&g_2, &g_89, ((*l_937) = func_54(func_21((p_12 = func_21(func_51((l_935 |= (((void*)0 != &g_907) < 0xEFC6L)), &l_933), &l_933, g_111, p_12)), l_936, l_919, l_936))), p_13))) > 0x1BA1EE4CL))) | l_942) ^ (*g_907))))) == 9L) || 0xA3L) < p_11), (-1L)));
        l_944 ^= (g_70 = ((*l_943) ^= p_11));
        for (g_257 = (-29); (g_257 <= 13); g_257 = safe_add_func_uint32_t_u_u(g_257, 2))
        {
            int l_951 = 0L;
            for (g_64 = 13; (g_64 > (-29)); g_64 = safe_sub_func_int16_t_s_s(g_64, 1))
            {
                unsigned short l_949 = 0x09F3L;
                int *l_950 = &g_70;
                l_951 = ((*l_950) = l_949);
            }
            g_952 = (((*l_943) != (*l_943)) == p_10);
            if ((*l_943))
                continue;
            (*g_119) = &p_11;
        }
    }
    l_935 &= (-6L);
    return p_11;
}







static unsigned char func_16(unsigned short * p_17, unsigned short * p_18, unsigned char p_19, unsigned short * p_20)
{
    unsigned l_504 = 7UL;
    int l_508 = 0x03350E35L;
    unsigned short *l_517 = &g_89;
    unsigned char **l_543 = &g_293;
    unsigned short l_554 = 0xBC9AL;
    int *l_607 = &g_70;
    int l_684 = 0x570C23EEL;
    short **l_696 = &g_522;
    unsigned char ***l_721 = &l_543;
    char ***l_764 = (void*)0;
    short l_798 = 0xB9B3L;
    int l_808 = 0x46946E5BL;
    int ***l_874 = (void*)0;
    int l_899 = (-1L);
    if (p_19)
    {
        int l_498 = (-7L);
        unsigned short *l_501 = &g_89;
        int *l_505 = &g_64;
        unsigned char *l_509 = &g_154;
        int ***l_556 = (void*)0;
        short **l_655 = &g_522;
        unsigned l_673 = 0x933EFBF3L;
        unsigned l_674 = 18446744073709551615UL;
        (*l_505) = (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_19, g_32)) ^ l_498), p_19));
        if (func_35((safe_sub_func_int32_t_s_s(l_508, (0x4DF80EDAL >= 4294967289UL))), l_509))
        {
            int l_512 = 0x4425E713L;
            int ***l_555 = &g_119;
            unsigned l_577 = 18446744073709551615UL;
            int *l_589 = &g_330;
            int **l_588 = &l_589;
            short l_601 = (-1L);
            int *l_609 = &l_508;
            unsigned char l_629 = 0xF6L;
            (**g_119) = (*l_505);
            (*l_505) = (safe_mul_func_uint8_t_u_u(l_512, ((safe_sub_func_uint16_t_u_u(l_504, l_512)) >= (*l_505))));
            if (l_512)
            {
                short l_533 = 0x029AL;
                int *l_534 = &g_70;
                for (g_154 = 0; (g_154 <= 3); ++g_154)
                {
                    int *l_520 = &g_93;
                    (*l_520) &= (*g_120);
                    (*g_119) = (*g_119);
                    if (p_19)
                    {
                        return (*g_293);
                    }
                    else
                    {
                        short ***l_523 = &g_521;
                        (*g_120) = 1L;
                        (*l_523) = g_521;
                    }
                }
                (*l_534) ^= ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((*g_173), p_19)), ((*l_505) = (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(p_19)), ((*g_293) < func_35((1UL && (((*g_522) &= (func_54(l_517) ^ ((func_35(g_93, l_509) == l_512) & p_19))) || p_19)), &g_154))))))) <= l_533), 0xD0ABL)) < l_504);
                for (g_452 = 25; (g_452 != 6); g_452 = safe_sub_func_uint8_t_u_u(g_452, 1))
                {
                    unsigned char **l_544 = &g_293;
                    unsigned char ***l_545 = &l_544;
                    short *l_550 = (void*)0;
                    short *l_551 = &g_257;
                    l_508 ^= p_19;
                    (**g_119) &= (safe_mod_func_int32_t_s_s((p_19 == (*l_534)), (-8L)));
                    (*l_505) = (safe_lshift_func_uint16_t_u_s((&g_119 == (void*)0), ((*l_551) = (*g_522))));
                }
            }
            else
            {
                return (*l_505);
            }
            if (p_19)
            {
                unsigned l_557 = 0x8970B20DL;
                int l_566 = (-10L);
                int l_567 = 0xA93F4D8DL;
                int *l_580 = &l_508;
                if ((safe_add_func_int16_t_s_s((((**g_521) ^= (~(l_554 & (l_508 != ((**g_119) &= 0xD6342A7EL))))) ^ l_557), 0UL)))
                {
                    for (g_330 = (-17); (g_330 != 19); g_330 = safe_add_func_int8_t_s_s(g_330, 3))
                    {
                        (***l_555) = (**g_119);
                    }
                }
                else
                {
                    unsigned short *l_564 = (void*)0;
                    int *l_565 = (void*)0;
                    int l_572 = 1L;
                    unsigned char *l_575 = &g_32;
                    unsigned short *l_576 = &l_554;
                    int *l_581 = (void*)0;
                    (*l_505) = (safe_sub_func_int16_t_s_s((*g_522), (safe_add_func_uint8_t_u_u((*g_293), func_35((l_566 |= ((~(*l_505)) & func_35(((**g_119) != 0x429D4AADL), &p_19))), &g_156)))));
                    if (((**g_172) && (***l_555)))
                    {
                        (*g_119) = (void*)0;
                        (*g_119) = (*g_119);
                        (*l_505) ^= l_567;
                    }
                    else
                    {
                        int *l_570 = (void*)0;
                        int *l_571 = (void*)0;
                        l_572 |= (g_93 = ((**g_119) = ((((safe_sub_func_uint16_t_u_u((***l_555), ((*g_522) = (l_508 = 1L)))) || 9UL) == ((**g_172) = (-3L))) & (p_19 && (***l_555)))));
                        (*g_120) = (((***l_555) >= (*g_522)) > p_19);
                    }
                    if (l_577)
                    {
                        int *l_578 = &l_572;
                        int ***l_579 = &g_487;
                        (*g_119) = l_578;
                        (*l_579) = (void*)0;
                        (**l_555) = (*g_119);
                    }
                    else
                    {
                        (*g_119) = (l_580 = (*g_119));
                        l_581 = &l_566;
                    }
                    (**l_555) = (**l_555);
                }
                l_508 = l_554;
                (**l_555) = &l_508;
                (**l_555) = (*g_119);
            }
            else
            {
                short l_602 = 0xB1D7L;
                unsigned char *l_625 = &g_156;
                int l_627 = 0x86474421L;
                for (g_452 = (-24); (g_452 != 0); g_452 = safe_add_func_int8_t_s_s(g_452, 8))
                {
                    unsigned char l_590 = 0xCBL;
                    unsigned *l_591 = &l_504;
                    unsigned *l_592 = &g_133;
                    unsigned *l_593 = &g_594;
                    int *l_604 = &g_70;
                }
                for (g_93 = (-4); (g_93 > 22); ++g_93)
                {
                    int **l_608 = &l_505;
                    l_609 = ((*l_608) = (l_607 = ((*g_119) = &l_498)));
                    for (p_19 = (-12); (p_19 != 44); ++p_19)
                    {
                        unsigned short *l_626 = &l_554;
                        short ***l_628 = &g_521;
                        (*l_505) = (((safe_unary_minus_func_uint8_t_u(((void*)0 == l_589))) < ((((*l_626) &= (safe_mod_func_uint16_t_u_u(((*l_517) = func_35((+((func_35((*l_607), (l_509 = &p_19)) ^ g_133) | (g_64 && (safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((*g_293) < (*g_293)) == (*l_609)) < l_602), (*g_293))), (*g_293))), (*l_607))), (*g_293))) > (*g_522)), 0UL))))), l_625)), l_602))) >= (*l_505)) == l_627)) == (*l_607));
                        (*l_505) |= ((p_19 ^ (l_628 == &g_521)) < (((&l_501 == &p_18) ^ (~((**g_172) = (**g_172)))) ^ l_629));
                    }
                }
            }
        }
        else
        {
            int *l_630 = &g_93;
            l_607 = (*g_119);
            (*g_119) = l_630;
            for (g_64 = 0; (g_64 >= 6); g_64 = safe_add_func_int8_t_s_s(g_64, 2))
            {
                char l_651 = 1L;
                unsigned *l_652 = &g_594;
                unsigned *l_656 = &l_504;
                unsigned short *l_657 = &l_554;
                int l_658 = (-6L);
                for (g_154 = 0; (g_154 > 43); g_154 = safe_add_func_int16_t_s_s(g_154, 7))
                {
                    (*g_119) = (void*)0;
                    (*g_119) = (*g_119);
                }
                l_658 |= (safe_rshift_func_uint16_t_u_s(((*l_657) |= (safe_sub_func_uint8_t_u_u((((*l_656) = (((*g_293) = (safe_mul_func_uint16_t_u_u(((((*l_517) = (safe_mod_func_uint8_t_u_u(p_19, (p_19 | (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((**g_521), 8)), (safe_mod_func_uint16_t_u_u(((0x9A7892C7L > ((*l_652) = ((*g_522) && l_651))) & (safe_lshift_func_int16_t_s_u(((((((void*)0 == l_655) == (l_651 > (*l_630))) != l_651) > 1UL) >= p_19), 2))), l_651)))) < (*l_630)), p_19)))))) != 0x7979L) || (*g_293)), (**g_521)))) < (*l_630))) != p_19), 253UL))), 7));
            }
        }
        (*l_505) = (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*g_522) | (*l_607)), ((*l_517) = (((((safe_sub_func_int8_t_s_s(func_35(((safe_lshift_func_uint16_t_u_s((*l_505), 12)) ^ (safe_mod_func_int16_t_s_s((p_19 && (~(251UL == p_19))), ((safe_sub_func_uint16_t_u_u((*l_607), ((*l_517) = g_64))) || (safe_lshift_func_uint8_t_u_u((*g_293), (*l_505))))))), (*l_543)), (*l_607))) == p_19) | l_673) == (*l_607)) != l_674)))), (*l_505)));
        return p_19;
    }
    else
    {
        int *l_675 = &l_508;
        unsigned short *l_676 = &l_554;
        int *l_677 = (void*)0;
        int *l_678 = &g_330;
        (*l_675) |= (*l_607);
        if (((*l_675) > ((*l_607) > ((~func_35(((*l_678) = func_54(l_676)), &g_156)) == (safe_mod_func_int32_t_s_s((1UL | ((func_54(&l_554) == (*g_522)) >= (**g_521))), p_19))))))
        {
            (*l_675) &= p_19;
        }
        else
        {
            int *l_681 = &g_70;
            (*g_119) = (void*)0;
            (*g_119) = l_681;
            (*l_675) |= ((*l_607) > 0x64L);
            (*g_119) = (*g_119);
        }
        (*g_119) = (*g_119);
        l_684 = (safe_lshift_func_uint8_t_u_u(func_35((g_594 >= (*g_522)), &p_19), 2));
    }
    (*g_119) = &l_508;
    (*l_607) = p_19;
    for (g_32 = 3; (g_32 > 52); g_32 = safe_add_func_int8_t_s_s(g_32, 4))
    {
        char l_703 = 0L;
        int l_704 = 0x161275F9L;
        unsigned char **l_727 = &g_293;
        int l_740 = 1L;
        unsigned short *l_743 = &l_554;
        int *l_746 = &l_508;
        unsigned char l_802 = 0x2DL;
        unsigned short l_883 = 0x10ACL;
        unsigned **l_908 = &g_907;
        char l_914 = 0xC9L;
        for (g_70 = 0; (g_70 != (-13)); g_70--)
        {
            short ***l_693 = &g_521;
            unsigned char *l_722 = &g_156;
            unsigned short *l_725 = &g_89;
            unsigned short l_733 = 0UL;
            int *l_745 = &l_508;
        }
    }
    return (*g_293);
}







static unsigned short * func_21(unsigned short * p_22, unsigned short * p_23, unsigned p_24, unsigned short * p_25)
{
    unsigned char *l_243 = &g_32;
    int l_244 = 0xDEDAE182L;
    unsigned short *l_246 = (void*)0;
    int *l_297 = &g_70;
    int **l_296 = &l_297;
    unsigned short ***l_304 = (void*)0;
    unsigned short l_339 = 65532UL;
    char ***l_341 = &g_172;
    int *l_486 = &g_330;
    int **l_485 = &l_486;
    for (g_32 = (-9); (g_32 == 34); g_32 = safe_add_func_int16_t_s_s(g_32, 5))
    {
        unsigned l_240 = 0x32D04EE4L;
        unsigned l_245 = 0UL;
        int *l_247 = &g_93;
        unsigned l_280 = 4294967295UL;
        unsigned char *l_291 = (void*)0;
        char ***l_349 = &g_172;
        unsigned short *l_391 = &l_339;
        unsigned char l_400 = 0x18L;
        unsigned char l_414 = 0xB4L;
        int l_430 = 0L;
        int l_484 = (-1L);
    }
    return p_25;
}







static unsigned short * func_26(unsigned short p_27)
{
    char l_47 = 0x6BL;
    unsigned *l_131 = (void*)0;
    unsigned *l_132 = &g_133;
    unsigned short *l_134 = &g_89;
    unsigned char *l_155 = &g_156;
    int l_158 = 0x33996C8BL;
    int l_159 = 0x3EC0817FL;
    int ***l_191 = (void*)0;
    char **l_202 = &g_173;
    char **l_205 = &g_173;
    unsigned short l_230 = 1UL;
    int *l_232 = &g_70;
    unsigned short *l_233 = (void*)0;
    if ((((l_158 = (safe_mod_func_int32_t_s_s(func_35(((65535UL <= (((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(func_42(((l_47 == ((g_2 || ((*l_132) = func_48(func_51(((+g_32) && func_54(&g_2)), g_59), &g_32))) < l_47)) == p_27), l_134), p_27)), l_47)) != 0xACL) && 0x83C047C6L)) < g_2), l_155), (-1L)))) < l_47) & l_159))
    {
        unsigned short *l_167 = (void*)0;
        char *l_181 = &g_111;
        int *l_184 = &g_64;
        int ***l_190 = &g_119;
        char ***l_203 = (void*)0;
        char ***l_204 = &l_202;
        char ***l_206 = &g_172;
        for (g_70 = 23; (g_70 == 17); g_70 = safe_sub_func_int32_t_s_s(g_70, 4))
        {
            unsigned char l_164 = 0x5BL;
            for (g_154 = 1; (g_154 > 60); g_154++)
            {
                unsigned short **l_165 = (void*)0;
                unsigned short **l_166 = &l_134;
                unsigned short ***l_183 = &l_165;
                unsigned short ****l_182 = &l_183;
            }
        }
        (*g_119) = l_184;
        for (g_64 = (-28); (g_64 == (-8)); g_64 = safe_add_func_int8_t_s_s(g_64, 4))
        {
            unsigned short *l_187 = &g_89;
            return l_187;
        }
        (*l_184) ^= ((safe_add_func_int8_t_s_s(((p_27 | (((l_190 == l_191) ^ (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_133, p_27)), ((*l_134) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((*l_204) = l_202) != ((*l_206) = l_205)), 0x2BBFL)), ((((safe_lshift_func_uint8_t_u_u(func_35(g_70, l_181), 0)) | p_27) == p_27) != 0x45A8L)))))), 1L))) & g_111)) < l_158), p_27)) > p_27);
    }
    else
    {
        unsigned short **l_209 = &g_59;
        int *l_214 = &g_64;
        int *l_215 = &g_70;
        (*l_214) = (+func_42(((p_27 < (func_54(((*l_209) = &p_27)) >= func_35((safe_lshift_func_uint8_t_u_u(g_93, 7)), l_155))) < (g_154 < (safe_rshift_func_uint8_t_u_u((g_32 >= g_2), p_27)))), l_134));
        l_215 = l_214;
    }
    for (l_47 = (-12); (l_47 == 2); l_47 = safe_add_func_uint8_t_u_u(l_47, 3))
    {
        char l_220 = 0L;
        int l_226 = 2L;
        for (g_32 = 0; (g_32 != 18); ++g_32)
        {
            unsigned short *l_224 = (void*)0;
            unsigned short **l_225 = &l_224;
            l_158 |= func_54(((*l_225) = func_51(((((p_27 & p_27) || g_133) || ((l_220 >= (safe_rshift_func_uint16_t_u_u((((g_223 = &g_59) == &l_134) < func_54(&g_2)), 10))) != func_54(l_134))) == (*g_120)), l_224)));
            (*g_119) = (*g_119);
            l_226 |= p_27;
        }
    }
    if (((**g_119) = (0L & g_154)))
    {
        unsigned l_227 = 0x7010F87BL;
        unsigned char **l_228 = (void*)0;
        unsigned char **l_229 = &l_155;
        (*g_119) = (*g_119);
        (**g_119) = (l_227 <= l_230);
    }
    else
    {
        int *l_231 = (void*)0;
        (*g_119) = l_231;
    }
    (*l_232) = l_158;
    return l_233;
}







static int func_35(int p_36, unsigned char * p_37)
{
    int *l_157 = &g_64;
    (*g_119) = l_157;
    return p_36;
}







static unsigned char func_42(unsigned p_43, unsigned short * p_44)
{
    unsigned short l_137 = 0UL;
    int *l_148 = &g_64;
    unsigned short **l_149 = &g_59;
    unsigned char *l_150 = &g_32;
    unsigned char **l_151 = (void*)0;
    unsigned char **l_152 = (void*)0;
    unsigned char **l_153 = &l_150;
    (**g_119) &= ((safe_mul_func_uint8_t_u_u(l_137, p_43)) >= p_43);
    for (g_93 = 20; (g_93 > (-20)); g_93 = safe_sub_func_int8_t_s_s(g_93, 4))
    {
        int **l_140 = &g_120;
        int ***l_141 = &l_140;
        (*l_141) = l_140;
        (**l_140) = (safe_lshift_func_uint16_t_u_u((((**l_140) < (!(safe_lshift_func_int8_t_s_s(g_32, 2)))) && (safe_rshift_func_uint16_t_u_s(0x73B7L, (l_137 & p_43)))), (*g_59)));
        if ((*g_120))
            break;
        return g_133;
    }
    (*g_119) = l_148;
    (*l_148) = (g_154 &= func_48(((*l_149) = &l_137), ((*l_153) = l_150)));
    return g_133;
}







static unsigned func_48(unsigned short * p_49, unsigned char * p_50)
{
    int *l_63 = &g_64;
    int **l_65 = &l_63;
    unsigned short *l_91 = (void*)0;
    int l_117 = (-7L);
    unsigned l_124 = 0x64CE3E23L;
    (*l_65) = l_63;
    for (g_64 = 0; (g_64 != (-6)); g_64 = safe_sub_func_int16_t_s_s(g_64, 1))
    {
        int l_81 = (-1L);
        for (g_32 = 28; (g_32 != 29); g_32 = safe_add_func_int32_t_s_s(g_32, 4))
        {
            int l_73 = 0x47CF2842L;
            int l_118 = 0xEA4B5445L;
            for (g_70 = 26; (g_70 <= 24); g_70 = safe_sub_func_int16_t_s_s(g_70, 3))
            {
                unsigned short *l_88 = &g_89;
                int ***l_121 = &g_119;
                if ((+(-6L)))
                {
                    return l_73;
                }
                else
                {
                    unsigned short l_114 = 1UL;
                    for (l_73 = 6; (l_73 > 10); l_73 = safe_add_func_uint32_t_u_u(l_73, 3))
                    {
                        unsigned char l_76 = 246UL;
                        unsigned short **l_90 = (void*)0;
                        int *l_92 = &g_93;
                        char *l_110 = &g_111;
                        if (l_76)
                            break;
                        (*l_92) = ((g_2 ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_81, ((0x3CL && (safe_lshift_func_uint8_t_u_s(7UL, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((l_91 = func_51((&l_73 == (void*)0), (l_88 = &g_2))) != (void*)0), 3)), 7UL))))) > g_64))), (*g_59)))) & l_76);
                        l_118 = (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(g_70, ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((func_54(l_88) || ((!g_89) && ((safe_mul_func_uint8_t_u_u((*l_92), ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0xB2L, ((*l_110) = g_64))), (safe_sub_func_uint32_t_u_u(l_114, (safe_lshift_func_uint16_t_u_s(0x9FE4L, (*l_63))))))) >= l_81))) < 0xDC662BFFL))), g_70)), g_2)) >= l_117))) || l_81) < (*g_59)), 3)) | g_2), 5));
                    }
                }
                (*l_121) = g_119;
                (*g_119) = (*g_119);
            }
        }
        for (g_93 = 0; (g_93 <= (-3)); g_93 = safe_sub_func_int8_t_s_s(g_93, 5))
        {
            unsigned short **l_128 = &l_91;
            int l_130 = 1L;
            if (l_124)
            {
                int *l_127 = &g_70;
                unsigned short ***l_129 = &l_128;
                for (g_32 = 0; (g_32 >= 14); g_32 = safe_add_func_int8_t_s_s(g_32, 1))
                {
                    l_127 = (void*)0;
                    if ((**l_65))
                        break;
                }
                (*l_129) = l_128;
            }
            else
            {
                if (l_81)
                {
                    return g_2;
                }
                else
                {
                    return l_130;
                }
            }
        }
    }
    return g_111;
}







static unsigned short * func_51(short p_52, unsigned short * p_53)
{
    int *l_60 = (void*)0;
    int **l_61 = &l_60;
    unsigned short *l_62 = (void*)0;
    (*l_61) = l_60;
    return l_62;
}







static unsigned char func_54(unsigned short * p_55)
{
    int l_56 = (-10L);
    int *l_57 = &l_56;
    int **l_58 = &l_57;
    (*l_57) = l_56;
    (*l_58) = (void*)0;
    return l_56;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
