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



static int g_3 = 1L;
static int g_57 = (-1L);
static short g_102 = 0x1521L;
static short g_109 = 0xA13EL;
static short g_117 = 9L;
static volatile char g_165 = 1L;
static short g_188 = (-9L);
static char g_195 = 0x63L;
static volatile short g_232 = 8L;
static char g_240 = 0xFDL;
static unsigned g_262 = 4UL;
static unsigned short g_308 = 0x988AL;
static unsigned short g_311 = 0xCC2DL;
static unsigned char g_313 = 0xD7L;
static char g_315 = 0x82L;
static int g_327 = 4L;
static unsigned char g_343 = 1UL;
static int **g_351 = (void*)0;
static unsigned char g_368 = 7UL;
static unsigned g_371 = 0x42BFDF69L;
static unsigned char g_374 = 251UL;
static int *g_375 = &g_327;
static unsigned char *g_395 = (void*)0;
static unsigned char **g_394 = &g_395;
static char g_434 = 3L;
static volatile short g_487 = 0xC724L;
static char g_495 = (-9L);
static volatile unsigned g_520 = 4294967295UL;
static volatile short g_561 = 0xA6F9L;
static int *g_567 = &g_327;
static unsigned char g_586 = 0x12L;
static volatile unsigned char g_652 = 0x1EL;



static unsigned short func_1(void);
static const int * func_22(int * p_23, int p_24, const unsigned p_25, unsigned char p_26);
static int * func_27(const unsigned p_28, char p_29, unsigned char p_30);
static unsigned char func_31(int p_32, unsigned char p_33, unsigned p_34);
static unsigned char func_37(unsigned char p_38, int * p_39, unsigned short p_40, int * p_41);
static unsigned short func_45(int * p_46, unsigned p_47);
static int * func_48(int * const p_49, unsigned char p_50);
static int * func_51(int * p_52, int p_53);
static int * func_54(int * p_55);
static int * func_251(int * p_252, unsigned p_253);
static unsigned short func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = (void*)0;
    int *l_5 = &g_3;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = (void*)0;
    int *l_9 = &g_3;
    int *l_10 = &g_3;
    int *l_11 = &g_3;
    int *l_12 = &g_3;
    int *l_13 = &g_3;
    int *l_14 = &g_3;
    int *l_15 = &g_3;
    int *l_16 = (void*)0;
    int *l_17 = &g_3;
    int *l_18 = (void*)0;
    unsigned char l_19 = 0x59L;
    char *l_655 = (void*)0;
    char *l_656 = &g_434;
    int **l_765 = (void*)0;
    int **l_766 = (void*)0;
    const int *l_775 = &g_57;
    --l_19;
    (*l_7) &= 0x52835357L;
    l_775 = func_22((l_15 = func_27(g_3, (*l_11), func_31((((safe_mod_func_int32_t_s_s((func_37(((safe_unary_minus_func_int32_t_s(((0x7F17L || 0x5C2FL) < (*l_15)))) >= ((safe_rshift_func_int8_t_s_u(((*l_656) ^= (g_3 & ((l_5 == l_14) < func_45(func_48(func_51(func_54(&g_3), g_109), (*l_12)), g_240)))), (*l_11))) || g_586)), l_15, (*l_12), l_14) <= 255UL), 0xB5C36C2FL)) | 0x0EFF1E00L) & g_3), g_240, (*l_10)))), g_3, (*l_14), (*l_11));

    ;

    ;
    return g_195;
}







static const int * func_22(int * p_23, int p_24, const unsigned p_25, unsigned char p_26)
{
    char *l_771 = &g_495;
    char **l_772 = &l_771;
    char * const l_773 = &g_434;
    const int *l_774 = &g_3;
    for (g_102 = (-9); (g_102 <= (-2)); ++g_102)
    {
        int **l_769 = &g_567;
        (*p_23) |= 0xD81E4E76L;
        (*l_769) = &p_24;

        ;
        (*l_769) = &p_24;
    }

    ;
    (*p_23) &= (g_313 | (safe_unary_minus_func_int8_t_s((((*l_772) = l_771) == l_773))));
    return l_774;



}







static int * func_27(const unsigned p_28, char p_29, unsigned char p_30)
{
    int *l_764 = &g_3;
    for (p_30 = 17; (p_30 <= 23); p_30 = safe_add_func_uint8_t_u_u(p_30, 5))
    {
        return l_764;


    }
    g_375 = (void*)0;

    ;
    return l_764;


}







static unsigned char func_31(int p_32, unsigned char p_33, unsigned p_34)
{
    int *l_669 = (void*)0;
    int *l_670 = &g_57;
    int l_671 = 0x714DE6C4L;
    int l_672 = 5L;
    int *l_673 = &l_672;
    int *l_674 = (void*)0;
    int *l_675 = &g_57;
    int *l_676 = &l_672;
    int *l_677 = &g_327;
    int *l_678 = (void*)0;
    int *l_679 = &l_671;
    int *l_680 = &g_57;
    int *l_681 = &g_57;
    int *l_682 = &g_327;
    int *l_683 = &g_57;
    int *l_684 = &l_672;
    int *l_685 = &g_57;
    int *l_686 = &g_57;
    int l_687 = 0x172FA32CL;
    int l_688 = 0x44983D8CL;
    int *l_689 = &l_672;
    int l_690 = 0L;
    int *l_691 = &g_327;
    int *l_692 = &g_57;
    int *l_693 = (void*)0;
    int *l_694 = &g_327;
    int l_695 = 0x27B1B8D8L;
    int *l_696 = &l_672;
    int *l_697 = &l_672;
    int *l_698 = &g_57;
    int l_699 = 0x395CD1F3L;
    int *l_700 = &l_699;
    int l_701 = 0xF5DC8482L;
    int *l_702 = &l_701;
    int *l_703 = &l_701;
    int *l_704 = &l_671;
    int *l_705 = &g_327;
    int *l_706 = &g_327;
    int *l_707 = &l_688;
    int *l_708 = &l_687;
    int *l_709 = &l_690;
    int *l_710 = &l_701;
    int *l_711 = &l_690;
    int *l_712 = &l_695;
    int *l_713 = &l_699;
    int l_714 = 0x421B84FCL;
    int l_715 = 0L;
    int l_716 = 0x9469E337L;
    int *l_717 = &g_327;
    int *l_718 = &l_690;
    int *l_719 = &l_699;
    int l_720 = 0x8EE7861DL;
    int l_721 = (-1L);
    int *l_722 = &l_671;
    int *l_723 = (void*)0;
    int *l_724 = &l_672;
    int l_725 = 0xE4018EACL;
    int *l_726 = &l_699;
    int *l_727 = &l_672;
    int *l_728 = &l_695;
    int *l_729 = &g_57;
    int *l_730 = &l_716;
    int *l_731 = (void*)0;
    int l_732 = 0xFBA40DF1L;
    int *l_733 = &l_690;
    int *l_734 = &l_671;
    int l_735 = (-6L);
    int l_736 = 0x239F8EEAL;
    int *l_737 = &l_732;
    int *l_738 = &l_690;
    int *l_739 = &l_687;
    int *l_740 = &l_687;
    int *l_741 = &l_721;
    int l_742 = 0L;
    int *l_743 = &l_732;
    int l_744 = 0xE3DDEAEAL;
    int *l_745 = (void*)0;
    int *l_746 = &g_57;
    int *l_747 = &l_732;
    short l_748 = 0x75E8L;
    int *l_749 = &l_672;
    int *l_750 = &l_695;
    int l_751 = 0xB0BE778CL;
    int *l_752 = &l_744;
    int *l_753 = &l_742;
    int *l_754 = (void*)0;
    int l_755 = (-1L);
    int *l_756 = (void*)0;
    int l_757 = 0x7F254C74L;
    unsigned char l_758 = 0x93L;
    unsigned char l_761 = 254UL;
    (*g_567) = ((g_57 <= p_34) && (safe_lshift_func_uint16_t_u_u(g_561, 13)));
    ++l_758;
    return l_761;
}







static unsigned char func_37(unsigned char p_38, int * p_39, unsigned short p_40, int * p_41)
{
    unsigned l_663 = 0xD672B7DAL;
    int *l_666 = &g_57;
    (*l_666) = ((*g_375) = ((((safe_add_func_int16_t_s_s((p_40 != (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_327 && 0x48E5L), g_308)), ((g_495 ^ (!(safe_add_func_uint8_t_u_u((g_374 != l_663), l_663)))) > l_663)))), p_38)) >= 0xE15BE1C9L) | 0xA6L) ^ 0x46L));
    return (*l_666);
}







static unsigned short func_45(int * p_46, unsigned p_47)
{
    int l_409 = 1L;
    int l_415 = 0xA533CBFBL;
    unsigned char *l_416 = &g_313;
    int l_419 = 0xED77CBA1L;
    int *l_461 = (void*)0;
    unsigned short *l_596 = &g_308;
    unsigned short * const *l_595 = &l_596;
    unsigned short * const **l_594 = &l_595;
    int l_618 = 0xF07CC000L;
    if (((safe_sub_func_uint8_t_u_u(p_47, ((0x42CDL <= (g_117 && (l_409 = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_409, l_409)), 7))))) < (((safe_sub_func_int32_t_s_s((((*g_375) = (l_419 |= (safe_sub_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u(((*l_416) = l_415))) <= (*p_46)) && (safe_mod_func_int32_t_s_s((*g_375), p_47))), l_415)))) & l_415), 1L)) ^ p_47) | 255UL)))) ^ l_415))
    {
        int l_437 = 0x1B95325DL;
        for (g_343 = 0; (g_343 >= 1); g_343 = safe_add_func_uint8_t_u_u(g_343, 8))
        {
            char *l_424 = &g_315;
            char *l_429 = &g_240;
            char *l_430 = (void*)0;
            char *l_431 = (void*)0;
            char *l_432 = &g_195;
            char *l_433 = &g_434;
            int l_440 = 0x85FEB4F4L;
            int l_456 = 0x9FE280CDL;
        }
        l_461 = &l_437;

        ;
        for (g_495 = (-3); (g_495 <= 8); g_495 = safe_add_func_uint16_t_u_u(g_495, 4))
        {
            (*l_461) = (l_594 != &l_595);
        }
    }
    else
    {
        const unsigned short ***l_605 = (void*)0;
        int l_609 = 0x103E8C47L;
        int **l_616 = &g_567;
        short *l_617 = &g_117;
        (*p_46) = 0xC75F3B0AL;
        for (g_327 = 0; (g_327 != (-6)); g_327 = safe_sub_func_uint8_t_u_u(g_327, 6))
        {
            int *l_608 = &g_57;
            int *l_610 = (void*)0;
            int *l_611 = (void*)0;
            int *l_612 = (void*)0;
            int *l_613 = &l_409;
            (*l_613) = ((((safe_add_func_int16_t_s_s(p_47, (safe_rshift_func_int16_t_s_u(0x74ADL, 7)))) == ((((void*)0 == l_605) != (65526UL >= (safe_mod_func_int32_t_s_s(((*l_608) = (((g_3 & ((*l_596) = p_47)) ^ (*p_46)) > ((p_47 && 0x65L) < (-9L)))), (-1L))))) != l_609)) != p_47) && 0UL);
            for (g_374 = 1; (g_374 == 56); ++g_374)
            {
                (*l_608) |= ((*l_613) |= ((0xED2FL || ((-9L) < (0x80L ^ p_47))) >= p_47));
                if ((*p_46))
                    continue;
            }
        }
        g_375 = ((*l_616) = func_48(func_54(func_51(p_46, g_343)), p_47));
        if ((*g_375))
        {
            if ((((void*)0 != l_617) && p_47))
            {
                return p_47;
            }
            else
            {
                return l_618;
            }
        }
        else
        {
            int *l_619 = &g_57;
            (*l_619) &= (*g_375);
            return g_487;
        }
    }


    if ((*p_46))
    {
        const char l_620 = 3L;
        l_419 ^= (g_240 > ((*g_375) >= l_620));
        g_57 &= (l_620 & ((p_47 | (((safe_add_func_uint8_t_u_u(l_620, ((safe_sub_func_int16_t_s_s(0xC15EL, (g_3 != (0xB8E0BD86L || p_47)))) & (0xABBD7AAFL >= (0xD3L | p_47))))) == (*p_46)) <= 65535UL)) == 0xE137L));
    }
    else
    {
        int *l_625 = &l_419;
        int l_626 = 0x47268135L;
        int *l_627 = (void*)0;
        int *l_628 = &l_618;
        int *l_629 = &l_409;
        int *l_630 = &g_327;
        int *l_631 = &l_409;
        int *l_632 = &l_626;
        int *l_633 = &l_415;
        int *l_634 = &l_626;
        int *l_635 = &l_626;
        int *l_636 = &l_626;
        int *l_637 = &l_409;
        int *l_638 = &g_327;
        int *l_639 = &l_618;
        int *l_640 = (void*)0;
        int *l_641 = &g_327;
        int *l_642 = &l_626;
        int l_643 = 0x144B7A48L;
        int *l_644 = (void*)0;
        int *l_645 = (void*)0;
        int *l_646 = (void*)0;
        int *l_647 = &l_643;
        int *l_648 = &l_643;
        int *l_649 = &l_626;
        int *l_650 = &l_626;
        int *l_651 = &l_626;
        --g_652;
    }
    return p_47;
}







static int * func_48(int * const p_49, unsigned char p_50)
{
    unsigned char ***l_396 = &g_394;
    unsigned char **l_398 = &g_395;
    unsigned char ***l_397 = &l_398;
    unsigned char **l_400 = &g_395;
    unsigned char ***l_399 = &l_400;
    int l_401 = (-2L);
    int *l_402 = &g_327;
    (*l_399) = ((*l_397) = ((*l_396) = g_394));
    (*g_375) = l_401;
    return l_402;


}







static int * func_51(int * p_52, int p_53)
{
    int *l_138 = &g_57;
    int l_139 = 0x26F1A7E1L;
    int *l_140 = &l_139;
    int *l_141 = &g_57;
    int *l_142 = (void*)0;
    int *l_143 = &l_139;
    int *l_144 = &l_139;
    int *l_145 = &l_139;
    int *l_146 = &l_139;
    int l_147 = 0x9DA7DC4CL;
    int *l_148 = &l_139;
    int *l_149 = &l_139;
    int *l_150 = (void*)0;
    int *l_151 = &l_139;
    int *l_152 = &l_147;
    int *l_153 = &l_147;
    int *l_154 = (void*)0;
    int *l_155 = &l_147;
    int *l_156 = &g_57;
    int *l_157 = &g_57;
    int l_158 = 0xAF7C767DL;
    int *l_159 = &l_139;
    int l_160 = 0x83C403CBL;
    int *l_161 = &g_57;
    int *l_162 = (void*)0;
    int *l_163 = &l_139;
    int *l_164 = &l_160;
    int *l_166 = &l_139;
    int *l_167 = (void*)0;
    int *l_168 = (void*)0;
    int *l_169 = &l_147;
    int *l_170 = &l_139;
    int *l_171 = &l_158;
    int *l_172 = &l_160;
    int *l_173 = &g_57;
    int *l_174 = &l_139;
    int *l_175 = &l_139;
    int *l_176 = &l_160;
    int *l_177 = &l_147;
    int *l_178 = &l_160;
    int *l_179 = (void*)0;
    int *l_180 = (void*)0;
    int *l_181 = &l_139;
    int *l_182 = &l_160;
    int *l_183 = (void*)0;
    int *l_184 = &l_139;
    int *l_185 = &l_139;
    int *l_186 = &g_57;
    int *l_187 = &l_158;
    int *l_189 = &l_160;
    int *l_190 = (void*)0;
    int *l_191 = &l_147;
    int l_192 = 0xA0996A0DL;
    int l_193 = 0x11E04183L;
    int *l_194 = &g_57;
    int *l_196 = &l_139;
    int *l_197 = (void*)0;
    int *l_198 = &g_57;
    int l_199 = (-4L);
    int *l_200 = (void*)0;
    int *l_201 = &l_147;
    int *l_202 = &l_199;
    int *l_203 = &l_139;
    int *l_204 = (void*)0;
    int *l_205 = &g_57;
    int *l_206 = &l_158;
    int *l_207 = (void*)0;
    int *l_208 = &l_147;
    int *l_209 = &l_160;
    int *l_210 = &l_193;
    int *l_211 = &l_158;
    int *l_212 = &l_192;
    int *l_213 = &l_158;
    int l_214 = 1L;
    int *l_215 = &l_160;
    int *l_216 = (void*)0;
    int *l_217 = &l_158;
    int l_218 = 1L;
    int *l_219 = &l_147;
    int *l_220 = &l_192;
    int *l_221 = &l_158;
    int *l_222 = &l_147;
    int *l_223 = &l_192;
    int *l_224 = &l_214;
    int *l_225 = &l_214;
    int *l_226 = &l_199;
    int *l_227 = &l_214;
    int l_228 = (-1L);
    int *l_229 = &g_57;
    int l_230 = 0xFBFD2E02L;
    int *l_231 = (void*)0;
    int *l_233 = &l_214;
    int *l_234 = &l_139;
    int *l_235 = &l_139;
    int *l_236 = &l_160;
    int *l_237 = (void*)0;
    int *l_238 = &l_230;
    int *l_239 = &l_158;
    int *l_241 = &l_139;
    int *l_242 = &l_147;
    int *l_243 = &l_199;
    int *l_244 = &l_218;
    int *l_245 = (void*)0;
    unsigned char l_246 = 1UL;
    short *l_259 = &g_109;
    unsigned char *l_386 = (void*)0;
    int **l_391 = (void*)0;
    int **l_392 = &l_170;
    short *l_393 = &g_188;
    l_246--;
    for (g_57 = 0; (g_57 != (-10)); g_57--)
    {
        short *l_256 = &g_117;
        short *l_257 = (void*)0;
        short *l_258 = &g_102;
        unsigned l_260 = 18446744073709551615UL;
        int **l_380 = &l_217;
        int **l_381 = &l_176;
        (*l_381) = ((*l_380) = func_251(&l_158, (~((safe_mod_func_int16_t_s_s(g_165, (((void*)0 == &g_57) | ((g_3 > ((*l_258) = ((*l_256) = p_53))) <= ((void*)0 != l_259))))) == (l_260 == g_188)))));

        ;
        (*l_146) = (*p_52);
        (*l_201) = (*l_203);
        if ((*p_52))
            continue;
    }

    ;
    ;
    (*l_194) = (((((*g_375) >= (*l_222)) == (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((((++g_368) >= ((~g_109) | p_53)) && 0xFB42L), 7)) == (safe_add_func_int16_t_s_s(((*l_393) = (((*l_392) = func_54((p_52 = (void*)0))) == &g_3)), (((1L == p_53) > 1UL) & (-6L))))), 0))) ^ g_343) <= p_53);

    ;
    ;
    return &g_57;


}







static int * func_54(int * p_55)
{
    int *l_56 = &g_57;
    int *l_58 = (void*)0;
    int *l_59 = &g_57;
    int *l_60 = &g_57;
    int *l_61 = &g_57;
    int l_62 = 5L;
    int *l_63 = &g_57;
    int *l_64 = &g_57;
    int *l_65 = &l_62;
    int *l_66 = &g_57;
    int *l_67 = &l_62;
    int *l_68 = &l_62;
    int *l_69 = &g_57;
    int *l_70 = &g_57;
    int *l_71 = &g_57;
    int *l_72 = &l_62;
    int *l_73 = &g_57;
    int l_74 = 0x6DFE5350L;
    int *l_75 = &l_74;
    int *l_76 = &l_62;
    int *l_77 = &l_62;
    int *l_78 = &g_57;
    int *l_79 = (void*)0;
    int *l_80 = &g_57;
    int *l_81 = &l_74;
    int *l_82 = &g_57;
    int *l_83 = &g_57;
    int *l_84 = &l_62;
    int *l_85 = &g_57;
    int l_86 = 1L;
    int *l_87 = &l_86;
    int *l_88 = &l_86;
    int *l_89 = &l_86;
    int l_90 = 1L;
    int *l_91 = (void*)0;
    int l_92 = 1L;
    int *l_93 = &l_74;
    int *l_94 = &g_57;
    int *l_95 = &l_74;
    int *l_96 = &l_90;
    int *l_97 = &g_57;
    int *l_98 = &g_57;
    int *l_99 = &l_62;
    int *l_100 = &g_57;
    int *l_101 = &l_74;
    int l_103 = (-1L);
    int *l_104 = (void*)0;
    int *l_105 = &l_103;
    int *l_106 = &l_62;
    int *l_107 = &l_62;
    int *l_108 = &l_92;
    int *l_110 = &l_74;
    int *l_111 = &l_92;
    int *l_112 = &l_90;
    int *l_113 = &l_86;
    int *l_114 = (void*)0;
    int *l_115 = &l_92;
    int *l_116 = &l_92;
    int *l_118 = &l_90;
    int *l_119 = &l_74;
    int *l_120 = (void*)0;
    int l_121 = 0x4C3FC6C0L;
    int *l_122 = (void*)0;
    int *l_123 = &l_74;
    int *l_124 = (void*)0;
    int *l_125 = &l_121;
    int *l_126 = (void*)0;
    int *l_127 = &l_103;
    int *l_128 = &l_92;
    int *l_129 = &l_90;
    int *l_130 = &l_74;
    int *l_131 = &l_90;
    int *l_132 = &l_62;
    int *l_133 = &l_103;
    int *l_134 = &l_92;
    unsigned l_135 = 0x22E7E12FL;
    l_135++;
    return p_55;


}







static int * func_251(int * p_252, unsigned p_253)
{
    unsigned *l_261 = &g_262;
    short *l_271 = &g_188;
    int l_274 = (-8L);
    int **l_318 = (void*)0;
    int *l_320 = (void*)0;
    int **l_319 = &l_320;
    char *l_328 = &g_195;
    unsigned char *l_337 = &g_313;
    unsigned char *l_340 = (void*)0;
    unsigned char *l_341 = (void*)0;
    unsigned char *l_342 = &g_343;
    unsigned char l_344 = 255UL;
    unsigned short *l_364 = &g_311;
    unsigned char *l_365 = (void*)0;
    unsigned char *l_366 = (void*)0;
    unsigned char *l_367 = &g_368;
    unsigned *l_369 = &g_262;
    unsigned *l_370 = (void*)0;
    unsigned l_372 = 0UL;
    unsigned char *l_373 = &g_374;
    unsigned char l_379 = 0x28L;
    if ((((*l_261)--) && (((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_109, 1)), (*p_252))) == (safe_sub_func_int8_t_s_s((-9L), ((g_3 != g_165) < (l_271 == l_271))))) <= (safe_rshift_func_int8_t_s_s(l_274, ((safe_lshift_func_uint8_t_u_u((((*l_271) ^= (-4L)) && p_253), 1)) ^ g_262))))))
    {
        int *l_280 = &g_3;
        int **l_279 = &l_280;
        unsigned **l_298 = (void*)0;
        unsigned **l_299 = &l_261;
        const unsigned * const l_300 = &g_262;
        char *l_306 = &g_195;
        unsigned short *l_307 = &g_308;
        unsigned short *l_309 = (void*)0;
        unsigned short *l_310 = &g_311;
        unsigned char *l_312 = &g_313;
        for (g_188 = 0; (g_188 < (-1)); g_188 = safe_sub_func_int8_t_s_s(g_188, 9))
        {
            (*p_252) = g_57;
            (*p_252) = l_274;
        }
        (*l_279) = func_54(func_54(p_252));


        for (g_262 = 0; (g_262 == 39); g_262 = safe_add_func_uint8_t_u_u(g_262, 1))
        {
            (**l_279) &= ((*l_279) == &g_3);
            for (p_253 = 0; (p_253 != 18); ++p_253)
            {
                unsigned short l_285 = 65535UL;
                l_285--;
            }
        }
        if ((p_253 & ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(p_253, (((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((*l_299) = func_54(&g_57)) != l_300) > ((*l_312) = (safe_unary_minus_func_uint16_t_u(((*l_310) = ((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((*l_306) = (**l_279)), ((*p_252) == (p_253 <= ((*l_307) ^= g_57))))), (*p_252))) != p_253)))))), 0x734BL)), 0L)), (*l_280))) < (**l_279)) > 1UL))) > 0xAEL) || g_240), p_253)) ^ 1L)))
        {
            (*p_252) = ((g_195 < p_253) != g_3);
            return &g_3;


        }
        else
        {
            int *l_314 = (void*)0;
            g_315 ^= (*p_252);
        }

        ;
    }
    else
    {
        int *l_317 = &g_57;
        int **l_316 = &l_317;
        (*l_316) = &l_274;

        ;
    }

    ;
    (*l_319) = func_54(func_54(&l_274));

    ;
    (*p_252) ^= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_315, (safe_lshift_func_uint16_t_u_s((p_253 <= (g_327 = ((*l_271) &= p_253))), 2)))), 7));
    if ((((*l_328) ^= 0x4EL) || (!(((*l_373) = (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((g_371 = ((*l_369) = (((safe_rshift_func_uint16_t_u_u((((*l_320) ^= ((*l_342) = ((*l_337)--))) ^ (l_344 |= g_57)), 9)) == ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_308 ^ (safe_rshift_func_int8_t_s_s((((void*)0 == g_351) | (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((~((*l_367) ^= (((*p_252) < (-3L)) < (0L > (((safe_sub_func_uint16_t_u_u(((*l_364) = (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((1UL ^ 0x2DL), 0x2DDA2504L)), g_102)), 0xB5EBL))), 0x0395L)) ^ 4294967295UL) > p_253))))), 1UL)), p_253))), 2))), 1L)), g_165)) == 1L)) & 4L))), 0x47CAD9AAL)), g_109)) > 0xD69DL) <= l_372), p_253))) >= g_117))))
    {
        (*l_319) = func_54((p_252 = g_375));

        ;
        ;
        (*l_320) = 0x4CE34C1BL;
    }
    else
    {
        const unsigned l_378 = 0x00613AA2L;
        (*p_252) ^= (safe_sub_func_int8_t_s_s(l_378, l_379));
    }


    ;
    return p_252;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
