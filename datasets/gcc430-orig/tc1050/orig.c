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
   char * f1;
   unsigned f2;
   unsigned char f3;
};

union U1 {
   char f0;
   unsigned short f1;
   unsigned f2;
   int f3;
   const int f4;
};


static char g_14 = 0x69L;
static char *g_13 = &g_14;
static int g_59 = 5L;
static unsigned g_66 = 0x3DC4D7E3L;
static union U0 g_74 = {0};
static unsigned g_78 = 0xE206F6ECL;
static unsigned char g_90 = 250UL;
static short g_93 = 0L;
static int g_95 = 0x3AC46406L;
static int g_105 = 0xEBAC3F40L;
static int g_107 = (-4L);
static const union U0 g_111 = {0};
static unsigned short g_121 = 0x864CL;
static short g_130 = 0x99A0L;
static char g_150 = 0x2FL;
static int g_155 = 0x7AE26BD8L;
static int * const g_154 = &g_155;
static int * const *g_153 = &g_154;
static int ***g_167 = (void*)0;
static const union U0 * const g_168 = &g_111;
static const unsigned g_172 = 0x3E8F6EECL;
static union U1 g_178 = {0xD6L};
static int g_226 = 0xFD925828L;
static const int g_243 = 0L;
static unsigned g_264 = 0xE57383A1L;
static const union U0 g_280 = {0};
static short g_303 = 0x4A9CL;
static union U0 g_317 = {0};
static int *g_406 = &g_226;
static unsigned char *g_554 = (void*)0;
static unsigned char **g_553 = &g_554;
static const union U0 *g_576 = &g_74;
static const char **g_577 = (void*)0;
static unsigned short g_595 = 0xB992L;



static short func_1(void);
static char ** func_2(unsigned char p_3, const char ** p_4);
static unsigned char func_5(char p_6, unsigned char p_7, char * p_8, unsigned p_9, char * p_10);
static unsigned char func_18(char p_19);
static unsigned func_24(char * p_25, int p_26);
static char * func_27(char * p_28, union U0 * const p_29, unsigned short p_30, union U0 * p_31, unsigned p_32);
static union U0 * func_33(int p_34, char * const p_35);
static union U1 func_36(const union U0 * p_37, char ** p_38, union U0 * p_39, unsigned p_40, char * p_41);
static union U0 * func_42(unsigned p_43, short p_44, char * p_45, char * p_46, unsigned p_47);
static unsigned func_50(short p_51, char p_52, int p_53);
static short func_1(void)
{
    const char * const l_15 = (void*)0;
    int l_20 = 0x5589B583L;
    char *l_532 = &g_150;
    char **l_651 = &l_532;
    char ***l_650 = &l_651;
    (*l_650) = func_2(func_5(((*g_13) = ((safe_add_func_uint32_t_u_u((g_13 != l_15), (safe_mul_func_int8_t_s_s(((*g_13) , (255UL <= (!(*g_13)))), (!func_18(l_20)))))) ^ 0x2AE47DCBL)), g_172, &g_150, l_20, l_532), g_577);



        ;
    ;

    ;
    ;
    ;
    (**g_153) = (*g_154);
    return g_59;
}







static char ** func_2(unsigned char p_3, const char ** p_4)
{
    char **l_584 = &g_13;
    char ***l_585 = &l_584;
    int l_586 = 0xD757BACDL;
    char *l_591 = &g_14;
    union U0 * const l_592 = &g_317;
    union U0 *l_593 = &g_317;
    unsigned short *l_594 = &g_595;
    int l_600 = 0L;
    short *l_611 = &g_130;
    short l_612 = 0xF121L;
    unsigned short l_613 = 0x406FL;
    unsigned char l_628 = 0x79L;
    (*g_406) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(0xBCL, 0UL)), (l_586 = ((*l_594) |= ((((*l_585) = l_584) == (l_586 , &g_13)) | (safe_mul_func_uint8_t_u_u((0x6792L >= (safe_mod_func_int32_t_s_s(p_3, (((**g_153) && (((*g_553) = func_27(l_591, l_592, g_178.f3, l_593, p_3)) != (void*)0)) || 0x6A75L)))), 0xACL))))))), p_3));

    ;
    if (func_5(((*g_13) ^= 0xE5L), (l_613 = ((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((l_586 | (l_600 = l_586)), (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((+((safe_lshift_func_int8_t_s_s((l_586 , (l_586 , (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_586, ((((*l_611) ^= l_586) >= (l_586 < func_24((*l_584), g_178.f1))) || p_3))), 0)))), 2)) && 0xE5L)), p_3)), (-1L))))) != l_586) , g_78), l_586)) ^ l_612)), (*l_584), g_243, (*l_584)))
    {
        int **l_614 = &g_406;
        (*l_614) = &l_600;

        ;
    }
    else
    {
        unsigned short l_615 = 65527UL;
        unsigned char l_629 = 254UL;
        int l_630 = 0xABDA879BL;
        union U0 *l_649 = &g_74;
        l_630 ^= (l_615 , ((**g_153) = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((func_5(l_615, (safe_add_func_int16_t_s_s(0x08D2L, (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_3, (((safe_sub_func_int32_t_s_s((func_5(l_615, (l_600 , ((+0x6DL) < (*g_13))), (**l_585), p_3, (*l_584)) > l_628), 3UL)) >= l_629) , p_3))), (-1L))))), (**l_585), p_3, &g_150) , (-3L)), l_629)), 0x5FL)) ^ g_121)));
        if (l_600)
        {
            (*g_154) &= 0x84BA11D4L;
        }
        else
        {
            char l_642 = 3L;
            unsigned short l_646 = 1UL;
            (**g_153) = (-5L);
            for (l_586 = (-17); (l_586 == (-25)); l_586 = safe_sub_func_uint8_t_u_u(l_586, 2))
            {
                int **l_633 = (void*)0;
                int **l_634 = &g_406;
                (*l_634) = &l_600;

                ;
                for (g_178.f0 = 0; (g_178.f0 > (-24)); g_178.f0 = safe_sub_func_uint32_t_u_u(g_178.f0, 6))
                {
                    unsigned char l_637 = 3UL;
                    (**g_153) = func_50(l_637, ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(255UL, 0x31L)), 6)) & l_642), (((safe_mod_func_uint16_t_u_u(((((*l_594) = (((safe_unary_minus_func_uint32_t_u(0xCDD51217L)) < (l_646 || (3UL != ((0x3163A038L & func_24(&g_14, p_3)) | l_628)))) , p_3)) | g_78) != p_3), l_630)) == p_3) , l_615));
                }

                (*g_154) &= l_586;
                for (g_178.f1 = 0; (g_178.f1 > 5); g_178.f1 = safe_add_func_int16_t_s_s(g_178.f1, 9))
                {
                    (*l_634) = &l_586;

                    ;
                }

                ;
            }

            ;
        }

        ;
        l_649 = (void*)0;

        ;
    }

    ;
    return &g_13;



}







static unsigned char func_5(char p_6, unsigned char p_7, char * p_8, unsigned p_9, char * p_10)
{
    int * const l_535 = &g_59;
    char *l_539 = &g_14;
    short *l_542 = &g_93;
    unsigned l_570 = 0xE12F43C1L;
    for (g_178.f3 = (-17); (g_178.f3 != 5); ++g_178.f3)
    {
        union U0 *l_548 = &g_317;
        union U0 **l_547 = &l_548;
        const int l_551 = 0L;
        const int *l_556 = &g_226;
        const int **l_555 = &l_556;
        if ((*g_154))
        {
            int **l_536 = &g_406;
            char *l_545 = (void*)0;
            (*l_536) = l_535;

            ;
            (*g_154) = (safe_mul_func_uint8_t_u_u(func_24(l_539, ((safe_div_func_uint8_t_u_u(((void*)0 == l_542), ((*l_535) & (safe_sub_func_int32_t_s_s((*l_535), ((l_539 == l_545) & g_78)))))) & (p_9 > 1UL))), 1L));
        }
        else
        {
            short l_546 = 0x746AL;
            unsigned char **l_552 = (void*)0;
            (*l_547) = func_42(((((((l_535 == ((l_546 > ((1UL ^ ((*p_8) < (~((-1L) == (*l_535))))) , (l_547 == (void*)0))) , (((safe_add_func_uint8_t_u_u((l_551 != p_7), 0xD2L)) <= g_178.f4) , &g_107))) , l_552) != g_553) <= p_6) , p_6) , 0x3736988EL), g_121, &g_150, &g_150, l_546);

            ;
        }

        ;
        (*l_555) = &l_551;

        ;
    }

    if ((~0xE8C01785L))
    {
        for (g_178.f3 = 26; (g_178.f3 > 1); --g_178.f3)
        {
            (**g_153) &= func_50(p_7, ((*p_10) = 0L), ((l_542 == (void*)0) || func_24(&g_14, g_121)));
            (*g_154) |= (g_130 || 0xB1536878L);
        }
        (*g_154) = func_24((p_10 = l_539), p_9);

        ;
    }
    else
    {
        const int *l_559 = &g_178.f3;
        l_559 = (void*)0;

        ;
        for (p_6 = 13; (p_6 > (-30)); p_6 = safe_sub_func_uint16_t_u_u(p_6, 2))
        {
            int l_575 = 1L;
            (*g_154) = (-2L);
            g_576 = ((l_575 = (((safe_mul_func_uint16_t_u_u((p_9 , ((p_9 <= ((+g_95) == func_50(p_6, (!(safe_div_func_int8_t_s_s((*l_535), (safe_lshift_func_int16_t_s_u((*l_535), 1))))), ((safe_mod_func_int8_t_s_s(l_570, (g_226 && ((safe_mod_func_int32_t_s_s(p_6, g_107)) < l_575)))) == g_178.f0)))) , g_264)), g_93)) , l_575) > g_178.f2)) , &g_111);

            ;
        }
    }
    return p_7;
}







static unsigned char func_18(char p_19)
{
    unsigned l_48 = 9UL;
    char *l_112 = (void*)0;
    union U0 *l_316 = &g_317;
    int l_377 = 0xEB96B6A8L;
    char **l_390 = &l_112;
    int *l_405 = &g_226;
    const int l_411 = (-1L);
    unsigned char *l_428 = &g_74.f3;
    short *l_429 = &g_130;
    int l_475 = (-1L);
    unsigned l_478 = 0x46EE753CL;
    union U1 *l_479 = &g_178;
    union U1 * const l_493 = (void*)0;
    int *l_530 = &g_105;
    short l_531 = 0x0286L;
    if (g_14)
    {
        unsigned char l_21 = 0x9BL;
        return l_21;
    }
    else
    {
        unsigned l_55 = 0x1BB30B13L;
        char * const l_196 = &g_14;
        int *l_356 = &g_155;
        union U0 l_394 = {0};
        for (p_19 = 13; (p_19 < 5); --p_19)
        {
            char *l_49 = &g_14;
            int l_54 = (-1L);
            const union U0 *l_110 = &g_111;
        }

        ;
        ;
        ;
        ;
        for (g_121 = 0; (g_121 == 27); g_121 = safe_add_func_uint16_t_u_u(g_121, 7))
        {
            char l_363 = (-1L);
            char **l_388 = &g_13;
            if (p_19)
            {
                const unsigned char l_364 = 0xBAL;
                unsigned *l_365 = &g_66;
                int *l_368 = &g_178.f3;
                l_356 = (*g_153);

                ;
                (*l_368) = (safe_rshift_func_int16_t_s_u(((((p_19 = (safe_lshift_func_uint8_t_u_s(((*l_356) = g_59), func_24(&g_14, ((safe_add_func_int32_t_s_s(l_363, l_364)) != ((*l_365) = p_19)))))) || 0L) <= (safe_sub_func_int16_t_s_s(g_121, 0xEABEL))) ^ l_48), 12));

                            }
            else
            {
                (*g_154) = 0xE82F85C9L;
                for (g_155 = 0; (g_155 <= 18); g_155 = safe_add_func_uint16_t_u_u(g_155, 6))
                {
                    const union U0 **l_371 = (void*)0;
                    const union U0 *l_373 = &g_111;
                    const union U0 **l_372 = &l_373;
                    int *l_374 = &g_95;
                    int **l_375 = &l_356;
                    int **l_376 = &l_374;
                    (*l_372) = &g_111;
                    (*l_374) |= (p_19 , p_19);
                    (*l_375) = (void*)0;

                    ;
                    (*l_376) = (*g_153);

                    ;
                }
            }
            (*g_154) = l_48;
            if ((**g_153))
            {
                int **l_378 = &l_356;
                int **l_379 = &l_356;
                (*g_154) = l_377;
                (*l_378) = (void*)0;

                ;
                (*l_379) = (*g_153);

                ;
                for (l_377 = 1; (l_377 <= (-1)); l_377 = safe_sub_func_uint8_t_u_u(l_377, 7))
                {
                    const int *l_382 = &l_377;
                    const int **l_383 = &l_382;
                    (*l_383) = l_382;
                    (**l_378) = (((g_74 = ((*l_316) = (*g_168))) , (*l_382)) > p_19);
                    if (p_19)
                        break;
                }
            }
            else
            {
                char l_384 = 1L;
                short *l_385 = &g_130;
                char **l_387 = &l_112;
                char ***l_386 = &l_387;
                char ***l_389 = (void*)0;
                int *l_391 = &g_95;
                union U1 *l_401 = &g_178;
                (*l_391) &= (((*l_385) &= l_384) , ((**g_153) = (((*l_386) = &l_112) == (l_390 = l_388))));

                ;
                l_377 = (safe_add_func_int16_t_s_s((l_394 , ((~1L) , g_59)), (p_19 != p_19)));
                for (g_178.f1 = 0; (g_178.f1 <= 36); ++g_178.f1)
                {
                    unsigned l_397 = 0xD1F3DB49L;
                    union U1 **l_402 = &l_401;
                    l_397 = 0xD722876FL;
                    for (p_19 = (-15); (p_19 == 5); p_19 = safe_add_func_uint8_t_u_u(p_19, 8))
                    {
                        int **l_400 = &l_391;
                        (*l_400) = (void*)0;

                        ;
                    }
                    (*l_402) = l_401;
                }

                                ;
            }
            for (g_95 = 6; (g_95 < (-24)); g_95--)
            {
                g_406 = (l_356 = l_405);

                ;
                return p_19;
            }
        }

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
    if ((((*g_154) == (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_411 <= (safe_rshift_func_uint8_t_u_u(((((*l_429) |= (safe_div_func_int16_t_s_s((((~(safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((*l_428) = ((((*l_316) , (safe_mul_func_int16_t_s_s(0xDD2BL, (safe_mod_func_int8_t_s_s(func_24(&g_14, p_19), ((((safe_rshift_func_uint8_t_u_u(((g_264 | (safe_rshift_func_int8_t_s_u((*l_405), 0))) | p_19), 3)) && (*l_405)) , (*l_405)) , 1L)))))) , (void*)0) == &l_411)), g_121)), 0x1BL))) & g_78) | (*g_13)), (*l_405)))) >= p_19) < 1L), g_66))), 0x564FD79DL)), p_19))) , 0x326A62A6L))
    {
        int **l_434 = &l_405;
        union U0 l_435 = {0};
        unsigned char **l_458 = &l_428;
        char **l_474 = &l_112;
        union U1 * const * const l_488 = &l_479;
        union U1 *l_489 = (void*)0;
        if (((**g_153) &= (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((*l_434) = &l_377) == (l_435 , (void*)0)), l_48)), 6))))
        {
            int l_436 = 0xE92A9D97L;
            char *l_439 = &g_150;
            union U1 l_440 = {-9L};
            unsigned short *l_444 = (void*)0;
            unsigned short *l_445 = &g_178.f1;
            (**g_153) ^= (func_50(l_436, ((p_19 >= 0xC3FCL) , (safe_rshift_func_uint8_t_u_u(func_24(l_439, (p_19 < (l_440 , p_19))), 3))), (((safe_unary_minus_func_uint8_t_u(((*l_428) &= (safe_sub_func_uint32_t_u_u((((*l_445) = p_19) == l_436), p_19))))) , 0x2EL) , g_74.f3)) < l_440.f0);

                        (*g_154) ^= (safe_mod_func_int32_t_s_s((func_50(((*l_429) = func_50((*l_405), p_19, p_19)), (((*l_405) <= (safe_lshift_func_int16_t_s_s(((*g_13) || 0xDBL), 10))) || (((safe_lshift_func_int16_t_s_u((l_440 , 0L), p_19)) > 0x6AC0L) != l_436)), p_19) || (*g_13)), l_440.f0));
        }
        else
        {
            char l_454 = 0xE4L;
            char **l_455 = &l_112;
            union U0 * const l_459 = &g_317;
            union U0 *l_460 = &g_74;
            union U0 **l_461 = &l_460;
            for (g_178.f3 = 0; (g_178.f3 == (-28)); g_178.f3 = safe_sub_func_int32_t_s_s(g_178.f3, 9))
            {
                return l_454;
            }

                        (*l_461) = func_33(p_19, func_27(&g_150, l_459, p_19, l_460, (*l_405)));

                        (**g_153) = ((**l_434) = ((((*l_428) ^= func_24(&p_19, (**l_434))) & g_178.f0) >= (*g_406)));
        }

        ;
        ;
        ;
        if (((*g_406) = (((((*l_405) = (p_19 = (func_50((**l_434), p_19, (**l_434)) | (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((**l_434), (l_475 = func_24(((*l_474) = &p_19), (**l_434))))) >= (((safe_sub_func_int32_t_s_s((*g_154), (*g_154))) > l_478) == 1L)), 6))))) , &g_178) != l_479) == l_411)))
        {
            int l_486 = 8L;
            union U1 **l_487 = &l_479;
            (**g_153) &= (safe_mul_func_uint8_t_u_u(((**l_458) = (**l_434)), (g_178.f0 & p_19)));
            for (g_105 = 0; (g_105 != (-10)); g_105 = safe_sub_func_int32_t_s_s(g_105, 1))
            {
                (*l_434) = (*l_434);
                (*g_406) ^= ((safe_div_func_uint8_t_u_u((8UL >= 0x8AA7L), ((func_24(((&g_90 == (void*)0) , (*l_474)), l_486) ^ p_19) & (*g_154)))) | (*l_405));
            }
            (*l_405) |= (l_487 != l_488);
        }
        else
        {
            union U1 **l_490 = (void*)0;
            union U1 **l_491 = (void*)0;
            union U1 **l_492 = &l_479;
            (**l_434) ^= (((*l_492) = l_489) == (g_178 , l_493));

            ;
        }

        ;
        ;
    }
    else
    {
        int l_504 = 0x06E587C2L;
        for (g_66 = 0; (g_66 != 26); g_66 = safe_add_func_uint8_t_u_u(g_66, 5))
        {
            if ((*l_405))
                break;
            if (p_19)
                break;
        }
        (*l_405) = (g_78 != (safe_rshift_func_uint8_t_u_u(p_19, (((safe_mod_func_int16_t_s_s(((((((!((safe_mod_func_int32_t_s_s((!(g_95 & (!(safe_div_func_int16_t_s_s(l_504, l_504))))), (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((1UL == (p_19 <= g_172)))) , (p_19 == g_90)), p_19)), p_19)))) == 1L)) , l_504) != g_243) , p_19) , (void*)0) != (void*)0), g_93)) & p_19) || 6UL))));
        (*l_405) = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(0xB7L, (((250UL > p_19) & ((safe_add_func_int16_t_s_s(7L, ((65528UL && (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*l_429) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(func_50(((((safe_mod_func_uint16_t_u_u((p_19 , ((l_530 = l_405) != (void*)0)), ((((((l_316 == &g_317) >= p_19) > 0xD40D41F2L) | (*l_405)) && (*l_405)) , g_121))) , 9UL) <= 4L) && (*l_405)), (*g_13), l_504), 14)), p_19))), p_19)), 0))) == (*l_405)))) || (*l_405))) | l_531))), p_19)), (*g_13))), 0xB6L));

        ;
    }



        ;
    ;
    ;
    ;
    return g_150;
}







static unsigned func_24(char * p_25, int p_26)
{
    unsigned l_353 = 7UL;
    l_353 = 0x5BFBD02EL;
    return g_264;
}







static char * func_27(char * p_28, union U0 * const p_29, unsigned short p_30, union U0 * p_31, unsigned p_32)
{
    unsigned l_322 = 0x4E311F92L;
    int l_324 = 0xF882ED2AL;
    char **l_325 = &g_13;
    for (g_303 = 0; (g_303 < (-21)); g_303 = safe_sub_func_uint16_t_u_u(g_303, 1))
    {
        unsigned *l_323 = &g_178.f2;
        l_324 = (safe_add_func_int16_t_s_s((&g_90 == p_28), (((*l_323) = l_322) && 4294967295UL)));

    }
    if ((l_325 != (void*)0))
    {
        int * const l_326 = &g_226;
        int *l_328 = (void*)0;
        int **l_327 = &l_328;
        unsigned short *l_349 = &g_178.f1;
        unsigned short *l_350 = &g_121;
        int l_351 = 0xD993A821L;
        (*l_327) = l_326;

        ;
        (**l_327) = (((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((g_226 & (safe_add_func_uint32_t_u_u(((((l_324 != ((safe_lshift_func_uint16_t_u_u((l_324 <= ((p_30 , (safe_sub_func_uint32_t_u_u(((*p_28) , g_130), (g_150 , 0x202F86E1L)))) == (((safe_div_func_int8_t_s_s((~((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((*l_350) &= (*l_328)) >= 0xC474L), p_30)) ^ (*p_28)), l_324)) || 0x55L)), 0xEDL)) || 0x35L) , 0L))), l_324)) | g_303)) >= 255UL) != 0x4C053BF6L) >= g_150), (-9L)))) , 65535UL), g_66)), (*g_13))), (*p_28))), l_351)) > 0x313194CDL) == p_30);
    }
    else
    {
        char *l_352 = &g_14;
        return l_352;


    }
    return p_28;


}







static union U0 * func_33(int p_34, char * const p_35)
{
    char *l_197 = &g_150;
    int *l_206 = &g_178.f3;
    union U0 l_236 = {0};
    union U1 l_245 = {0x37L};
    const union U0 *l_279 = &g_280;
    char **l_281 = &l_197;
    char *l_285 = &g_150;
    if ((p_34 , 0x483B5975L))
    {
        char **l_198 = &l_197;
        int *l_201 = &g_59;
        int **l_202 = (void*)0;
        int **l_203 = &l_201;
        (*l_203) = (((g_130 > (g_130 < 0UL)) > ((((((*l_198) = l_197) == (void*)0) && g_59) || ((safe_mod_func_int32_t_s_s(0L, p_34)) , p_34)) ^ 0x95L)) , l_201);
        (*g_154) = p_34;
    }
    else
    {
        int *l_205 = &g_59;
        int **l_204 = &l_205;
        unsigned char *l_215 = (void*)0;
        unsigned char *l_216 = &g_74.f3;
        short *l_221 = &g_93;
        char *l_222 = &g_178.f0;
        unsigned short *l_223 = &g_121;
        const short l_224 = 0xB6FFL;
        int *l_225 = &g_226;
        unsigned l_250 = 0UL;
        int *l_272 = &g_95;
        const union U0 *l_278 = &g_111;
        const union U0 **l_277 = &l_278;
        union U0 *l_282 = &l_236;
        char **l_288 = &l_197;
        l_206 = ((*l_204) = &g_95);

        ;
        ;
        if (((*l_225) |= (safe_div_func_uint16_t_u_u(0x4A6EL, (+(safe_rshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(((*l_221) = (safe_lshift_func_int8_t_s_s((((*l_216) = (p_34 && p_34)) || (0L < (safe_add_func_int16_t_s_s(((*l_206) > ((*l_223) = (func_50((((safe_lshift_func_uint16_t_u_u((((*l_221) &= g_155) & (0x96844EC9L >= func_50(g_150, ((*l_222) = (*l_205)), (*l_206)))), g_95)) , 6UL) , (*l_205)), (**l_204), g_150) , 0x8C58L))), (*l_206))))), l_224))), 65527UL)) , (*p_35)) <= (*l_206)) >= p_34), p_34)))))))
        {
            int l_233 = 0x9DE83E9DL;
            int *l_246 = &g_226;
            unsigned *l_251 = &g_78;
            unsigned *l_252 = &g_178.f2;
            unsigned *l_253 = &l_245.f2;
            unsigned *l_254 = &l_245.f2;
            unsigned *l_255 = &g_178.f2;
            unsigned *l_256 = &l_245.f2;
            unsigned *l_257 = &l_245.f2;
            unsigned *l_258 = (void*)0;
            unsigned *l_259 = &l_245.f2;
            unsigned *l_260 = &l_245.f2;
            unsigned *l_261 = &l_245.f2;
            unsigned *l_262 = (void*)0;
            unsigned *l_263 = &g_178.f2;
            short *l_265 = &g_130;
            if ((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(func_50((g_66 > (safe_div_func_uint8_t_u_u(g_74.f3, l_233))), (((*l_223) ^= (**l_204)) & 0x0C62L), (((*l_221) = (safe_div_func_int8_t_s_s((*l_206), (0x2EL || (*p_35))))) > ((g_178 , l_236) , g_178.f0))), 0x86L)), 0xC625L)))
            {
                union U0 *l_240 = &l_236;
                int l_244 = 0xE041843AL;
                l_206 = ((*l_204) = &g_59);

                ;
                ;
                if ((*g_154))
                {
                    unsigned short l_241 = 0UL;
                    int l_242 = 2L;
                    for (g_95 = 0; (g_95 != 27); ++g_95)
                    {
                        int *l_239 = &g_59;
                        (*l_204) = l_239;
                        return &g_74;


                    }
                    if ((p_34 , l_241))
                    {
                        l_242 ^= (*g_154);
                    }
                    else
                    {
                        (*l_204) = &l_242;

                        ;
                    }

                    ;
                }
                else
                {
                    (*l_204) = (*l_204);
                    (*l_246) = func_50((((*l_221) = (p_34 | g_14)) > ((func_50((g_243 >= p_34), l_244, p_34) , (*l_204)) == (l_245 , l_246))), (*p_35), g_172);
                    for (g_107 = 0; (g_107 != 27); g_107 = safe_add_func_int16_t_s_s(g_107, 9))
                    {
                        int *l_249 = &g_95;
                        (*l_204) = l_246;

                        ;
                        (*l_204) = &l_244;

                        ;
                        (*l_204) = l_249;

                        ;
                    }

                    ;
                }


                (*l_204) = l_206;

                ;
            }
            else
            {
                (*l_204) = (*l_204);
            }

            ;
            ;
            ;
            ;
            (*l_205) = 0x5EB10939L;
            (*l_225) = (((*l_206) = l_250) & (p_34 , (g_264 &= (~((*l_251) &= ((g_66 || g_90) ^ (*l_246)))))));
            (*g_154) |= (((*g_168) , l_265) == ((p_34 ^ (safe_lshift_func_int16_t_s_u((g_130 , (func_50((*l_246), (!(0xD5964E55L != ((((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*l_206), (*l_225))), (*l_206))) | p_34) , p_34) <= g_150))), g_59) , (-1L))), (*l_246)))) , (void*)0));
        }
        else
        {
            (*l_204) = l_272;
            return &g_74;


        }

        ;
        ;
        ;
        ;
        if ((safe_rshift_func_uint8_t_u_s(6UL, ((g_105 && ((safe_sub_func_uint32_t_u_u(g_172, (g_178 , p_34))) || p_34)) > p_34))))
        {
            (*l_272) ^= (p_34 || (((*l_223) = (!p_34)) && 0x7462L));
            (*l_225) = ((*l_206) = (*l_206));
        }
        else
        {
            int l_304 = 0x62F4E5E3L;
            for (g_105 = 0; (g_105 <= (-21)); g_105 = safe_sub_func_uint32_t_u_u(g_105, 2))
            {
                char **l_289 = &l_222;
                int l_315 = (-9L);
                if (((~((l_288 = &l_222) != ((*g_168) , l_289))) != ((void*)0 == (*l_204))))
                {
                    short *l_300 = &g_130;
                    short *l_301 = (void*)0;
                    short *l_302 = &g_303;
                    (*l_225) &= ((safe_sub_func_uint16_t_u_u((p_34 != (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0L, (func_50(((*l_302) &= ((*l_300) |= (safe_rshift_func_int16_t_s_u(g_93, ((safe_add_func_int32_t_s_s((*l_206), p_34)) & p_34))))), (*l_206), p_34) , (*p_35)))), g_93))), l_304)) >= p_34);
                    for (g_130 = 0; (g_130 != (-24)); g_130 = safe_sub_func_uint16_t_u_u(g_130, 2))
                    {
                        const short l_309 = 0x3140L;
                        unsigned char *l_310 = (void*)0;
                        unsigned char **l_311 = (void*)0;
                        unsigned char **l_312 = &l_215;
                        (*g_154) = ((safe_mul_func_uint16_t_u_u((((-7L) & 4L) && (-1L)), (g_264 == 0L))) == 0x0CL);
                        (*l_272) |= l_309;
                        (*l_272) |= ((((*l_312) = l_310) != (void*)0) >= g_155);
                        (*l_206) = (*g_154);
                    }
                }
                else
                {
                    l_304 &= (safe_div_func_int16_t_s_s((**l_204), p_34));
                    if (l_315)
                        continue;
                }

                ;
                return &g_74;


            }

            ;
        }

        ;
    }

    ;
    ;
    ;
    return &g_74;


}







static union U1 func_36(const union U0 * p_37, char ** p_38, union U0 * p_39, unsigned p_40, char * p_41)
{
    union U0 * const l_119 = &g_74;
    unsigned short *l_120 = &g_121;
    int l_122 = 0x9F79E4B3L;
    int l_123 = 3L;
    unsigned char *l_136 = &g_90;
    int l_138 = 0xBB6FCE13L;
    int * const *l_151 = (void*)0;
    int *l_166 = &l_122;
    int **l_165 = &l_166;
    int ***l_164 = &l_165;
    union U1 l_195 = {0L};
    if ((g_59 = (((((g_95 , ((((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(g_93, ((&g_107 == (void*)0) || 0xBBL))) & p_40), 0xEAACL)) , p_40) < (((*l_120) |= (safe_div_func_int16_t_s_s((l_119 == &g_74), (-1L)))) && l_122)) & g_66)) == l_122) ^ p_40) , l_123) , l_123)))
    {
        int l_126 = (-1L);
        short l_131 = 0x90BCL;
        int *l_139 = (void*)0;
        union U0 l_156 = {0};
        if ((safe_lshift_func_int16_t_s_u(l_126, 5)))
        {
            unsigned l_127 = 4294967295UL;
            short *l_128 = &g_93;
            short *l_129 = &g_130;
            int l_141 = (-2L);
            int **l_163 = &l_139;
            int ***l_162 = &l_163;
            if (func_50(((func_50(((*l_129) = (((l_123 < ((*l_128) = (l_123 || l_127))) != p_40) & (g_90 || l_122))), ((**p_38) , l_131), l_126) ^ l_122) != p_40), l_123, l_127))
            {
                int *l_132 = &g_95;
                (*l_132) = 0L;
                for (g_105 = 0; (g_105 == (-11)); g_105 = safe_sub_func_int32_t_s_s(g_105, 9))
                {
                    (*l_132) |= p_40;
                }
            }
            else
            {
                int *l_135 = &g_59;
                (*l_135) = 0x3A0D6743L;
                l_122 = ((*l_135) = (-1L));
            }
            if ((l_136 == (void*)0))
            {
                int *l_137 = &g_59;
                int **l_140 = &l_139;
                (*l_137) ^= (~g_78);
                (*l_140) = ((l_138 , g_95) , l_139);
                if (p_40)
                {
                    l_141 ^= ((*l_137) = 6L);
                    (*l_137) = p_40;
                    (*l_137) = (p_40 < g_14);
                    (*l_140) = &g_95;

                    ;
                }
                else
                {
                    g_95 ^= (*l_137);
                }

                ;
            }
            else
            {
                unsigned l_142 = 18446744073709551615UL;
                char *l_149 = &g_150;
                int * const **l_152 = (void*)0;
                union U0 **l_159 = (void*)0;
                union U0 *l_161 = &g_74;
                union U0 **l_160 = &l_161;
                (*l_160) = func_42(l_142, ((5L || (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((+(safe_rshift_func_int8_t_s_u(((*l_149) |= l_142), 7))), l_142)), ((g_14 >= (((g_153 = l_151) == (((((*p_37) , ((*l_119) = l_156)) , (((*l_128) = ((*l_129) = (safe_mul_func_uint8_t_u_u(p_40, (**p_38))))) , 0UL)) <= (*g_13)) , &g_154)) >= 4294967295UL)) & p_40)))) , 1L), &g_14, &g_14, l_141);

                ;


                if ((((((g_66 > p_40) , l_162) == (g_167 = l_164)) , g_130) == 0xB3L))
                {
                    const union U0 *l_169 = (void*)0;
                    int l_175 = 0x71054287L;
                    l_169 = g_168;

                    ;
                    (***l_164) = ((safe_lshift_func_int8_t_s_s(g_172, 5)) , (((safe_lshift_func_int8_t_s_s(((g_172 , &p_37) == &p_39), 2)) >= l_175) , ((*g_154) |= (0x1154L < 0x1966L))));
                    for (g_90 = 0; (g_90 < 59); g_90 = safe_add_func_uint16_t_u_u(g_90, 9))
                    {
                        return g_178;


                                            }
                }
                else
                {
                    (*g_154) ^= p_40;
                }

                ;
                for (g_78 = 28; (g_78 <= 34); ++g_78)
                {
                    unsigned l_181 = 1UL;
                    if (l_181)
                        break;
                    for (l_127 = (-18); (l_127 != 19); ++l_127)
                    {
                        if (l_181)
                            break;
                    }
                    if ((*g_154))
                        continue;
                }
                (*l_166) |= (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0L, (g_155 || p_40))), ((*l_120) |= (g_178 , g_150))));
            }

            ;
            ;


            ;
        }
        else
        {
            (**l_164) = l_139;

            ;
        }

        ;
        ;


        ;
        ;
    }
    else
    {
        int *l_188 = (void*)0;
        unsigned *l_191 = &g_66;
        char *l_194 = &g_178.f0;
        l_188 = ((**l_164) = (*l_165));

        ;
        (**g_153) &= ((~(safe_mul_func_uint16_t_u_u(((((*l_191) = (p_40 == (g_107 < g_105))) != (safe_rshift_func_uint16_t_u_s((p_40 && ((*l_136) = (*l_188))), 2))) & (((*l_188) && ((*l_188) ^ ((((*l_194) = (*l_188)) != (**p_38)) , 1UL))) && (*l_188))), g_105))) <= 0xF0L);
    }

    ;
    ;
    ;
    return l_195;


    }







static union U0 * func_42(unsigned p_43, short p_44, char * p_45, char * p_46, unsigned p_47)
{
    short *l_92 = &g_93;
    int *l_94 = &g_95;
    unsigned short l_102 = 0x3593L;
    int *l_103 = &g_59;
    int *l_104 = &g_105;
    int *l_106 = &g_107;
    unsigned short l_108 = 0xCBD0L;
    union U0 *l_109 = &g_74;
    (*l_94) |= (((*l_92) |= g_59) >= g_59);
    (*l_103) &= (safe_sub_func_uint32_t_u_u(g_78, (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0xCCC7L, l_102)), (*l_94)))));
    l_108 ^= func_50((*l_103), (*l_103), ((*l_106) = ((*l_103) , ((*l_104) = p_43))));
    return l_109;


}







static unsigned func_50(short p_51, char p_52, int p_53)
{
    char **l_57 = &g_13;
    char ***l_56 = &l_57;
    int *l_58 = &g_59;
    int l_64 = 0xC630DE2FL;
    unsigned *l_65 = &g_66;
    union U0 *l_73 = &g_74;
    union U0 *l_75 = (void*)0;
    union U0 **l_76 = &l_75;
    unsigned *l_77 = &g_78;
    unsigned char *l_79 = &g_74.f3;
    unsigned char *l_80 = &g_74.f3;
    unsigned char *l_81 = (void*)0;
    unsigned char *l_82 = (void*)0;
    unsigned char *l_83 = &g_74.f3;
    unsigned char *l_84 = (void*)0;
    unsigned char *l_85 = &g_74.f3;
    unsigned char *l_86 = &g_74.f3;
    unsigned char *l_87 = &g_74.f3;
    unsigned char *l_88 = (void*)0;
    unsigned char *l_89 = (void*)0;
    int *l_91 = &l_64;
    (*l_56) = &g_13;
    (*l_58) = g_14;
    (*l_58) = ((safe_lshift_func_uint8_t_u_u((g_90 ^= (((*l_77) = (((safe_mod_func_uint32_t_u_u((((~((l_64 || (*g_13)) ^ ((*l_58) >= ((*l_65) = p_52)))) == ((l_56 = &l_57) == ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_73 == (void*)0), (l_73 != ((*l_76) = l_75)))), 0x42EF3998L)), 0UL)) , &l_57))) , 1UL), g_59)) != (*l_58)) && p_53)) == (*l_58))), 1)) , 0xDD038CF4L);
    (*l_91) |= (*l_58);
    return (*l_58);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
