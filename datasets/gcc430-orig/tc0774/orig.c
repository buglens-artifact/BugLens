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



static volatile int g_7 = 0x4F2887CFL;
static unsigned g_8 = 0xC9ED9BA0L;
static int g_71 = (-1L);
static int g_79 = 6L;
static int *g_140 = &g_71;
static int **g_146 = &g_140;
static int ***g_145 = &g_146;
static int g_176 = 0x47FD4F96L;
static int **g_177 = &g_140;
static int g_204 = 1L;
static unsigned short g_210 = 0x0AF7L;
static int *g_279 = &g_71;
static int g_325 = (-1L);
static unsigned short g_362 = 65534UL;
static unsigned char g_378 = 0x06L;
static unsigned char g_389 = 6UL;
static volatile int g_489 = 0x6CEBCAC8L;
static volatile int *g_488 = &g_489;
static short g_601 = 0x279DL;
static int g_617 = 0x8DD8D36EL;
static unsigned g_801 = 4294967292UL;
static unsigned g_1009 = 0x6205A3C0L;
static unsigned short g_1034 = 0x35EDL;
static int *g_1041 = &g_176;
static volatile unsigned char g_1078 = 255UL;
static int g_1085 = 0x1CC87D8DL;
static int *g_1115 = &g_79;



static int func_1(void);
static unsigned char func_11(unsigned short p_12, char p_13, unsigned short p_14, unsigned p_15, unsigned char p_16);
static int func_17(unsigned p_18);
static short func_27(short p_28, short p_29);
static short func_32(unsigned p_33, unsigned char p_34, unsigned char p_35, unsigned p_36, short p_37);
static unsigned char func_43(unsigned short p_44, unsigned short p_45, unsigned p_46, unsigned char p_47, int p_48);
static unsigned func_49(unsigned short p_50, unsigned char p_51, unsigned p_52, unsigned short p_53);
static unsigned short func_54(unsigned char p_55, unsigned p_56, short p_57, unsigned char p_58);
static char func_61(unsigned p_62, int p_63);
static int * func_64(unsigned p_65, int p_66);
static int func_1(void)
{
    unsigned char l_6 = 255UL;
    int *l_1043 = &g_325;
    short l_1094 = 0xE485L;
    int **l_1131 = (void*)0;
    if ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_6 | g_7) | g_8), 6)), ((g_8 != ((safe_sub_func_int32_t_s_s(g_8, 0x8CF4C59CL)) | ((g_8 == func_11(g_8, ((((l_6 || l_6) == g_8) > g_8) & (-1L)), l_6, l_6, l_6)) | 2L))) || l_6))))
    {
        (*g_177) = g_1041;

        ;
    }
    else
    {
        int *l_1042 = &g_617;
        (*g_177) = l_1042;

        ;
    }

    ;

    ;
    (*g_279) ^= (*g_488);
    (*g_177) = l_1043;

    ;
    if ((*l_1043))
    {
        int *l_1044 = &g_617;
        short l_1098 = (-2L);
        int l_1111 = 7L;
        int *l_1138 = &g_617;
        l_1044 = (*g_177);

        ;
        if (((3UL | 0xE9DFF036L) & (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_176 | (*l_1043)), (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_617 | g_1034), (**g_177))), (safe_rshift_func_int16_t_s_s((&l_1043 == &l_1043), 12)))), (*l_1043))))), (*l_1044)))))
        {
            unsigned l_1057 = 6UL;
            char l_1072 = (-1L);
            int ***l_1093 = (void*)0;
            int *l_1102 = &g_176;
            (*g_1041) = 0x8AC1FC5DL;
            (*g_140) = (*l_1044);
            if ((&l_1044 != &l_1043))
            {
                (*g_279) = l_1057;
                l_1044 = (*g_177);
                (*l_1043) = (-2L);
            }
            else
            {
                unsigned char l_1074 = 2UL;
                int *l_1095 = &g_204;
                (*l_1043) = (*g_140);
                for (l_6 = (-17); (l_6 <= 4); ++l_6)
                {
                    int l_1073 = 0x2168E021L;
                    unsigned short l_1082 = 0x6B01L;
                    int ***l_1090 = &g_177;
                    (*l_1044) = (safe_lshift_func_int16_t_s_u((g_71 && ((safe_sub_func_uint16_t_u_u(func_27(g_378, (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((*l_1044), g_210)) & ((safe_sub_func_int16_t_s_s(((*l_1043) && ((*g_177) != (void*)0)), l_1057)) & func_32((func_32((safe_lshift_func_uint8_t_u_u((func_32((0x34L <= g_204), g_7, l_1072, (*l_1043), g_176) & g_389), g_389)), (*l_1043), l_1073, g_8, l_1074) && 4L), g_362, g_8, (*l_1043), l_1074))) == g_1034), 11))), (*l_1043))) <= l_1073)), 7));


                    for (g_362 = 0; (g_362 >= 37); g_362 = safe_add_func_uint16_t_u_u(g_362, 6))
                    {
                        short l_1077 = (-3L);
                        short l_1081 = 0xF7E8L;
                        l_1082 = (!(l_1077 > (*l_1043)));
                        if ((*g_279))
                            continue;
                    }
                    (*g_177) = l_1095;

                    ;
                    for (l_1074 = 26; (l_1074 < 55); l_1074++)
                    {
                        int *l_1101 = &g_204;
                        (*l_1101) &= (l_1098 == ((safe_rshift_func_int16_t_s_s(0xE8E1L, 9)) == ((l_1101 != l_1101) ^ (*l_1044))));
                    }
                }

                ;
                l_1095 = (void*)0;

                ;
            }

            ;
            (*g_177) = l_1102;

            ;
        }
        else
        {
            char l_1106 = 0x18L;
            if ((*g_1041))
            {
                char l_1105 = 0x57L;
                int *l_1107 = &g_617;
                if ((~((*l_1044) > 0x26L)))
                {
                    int l_1103 = 0x70433B7BL;
                    (**g_177) |= (*g_1041);
                    (*g_488) ^= (g_71 >= l_1103);
                    (*g_279) = (*l_1043);
                }
                else
                {
                    short l_1104 = (-9L);
                    (*l_1043) = 0xD8B6837DL;
                    if (l_1104)
                    {
                        return l_1105;
                    }
                    else
                    {
                        l_1106 |= (g_7 > (*l_1043));
                    }
                }
                (*g_177) = l_1107;

                ;
                for (g_71 = 0; (g_71 >= 7); g_71++)
                {
                    int *l_1110 = &g_204;
                    int l_1112 = 0x1E85151CL;
                    l_1112 ^= ((((*l_1043) != ((g_1009 ^ ((((~func_17((l_1107 == l_1110))) < (*l_1110)) | g_1034) | (((*l_1043) & l_1111) < (*l_1107)))) != g_176)) | g_617) | 1UL);

                    ;
                    if ((*l_1110))
                        continue;
                    for (g_204 = (-16); (g_204 < 1); g_204++)
                    {
                        (*l_1044) ^= 0xA6D3C833L;
                    }
                    (*g_177) = (*g_177);
                }

                ;
                l_1107 = (*g_177);

                ;
            }
            else
            {
                g_1115 = (*g_177);

                ;
                return (*g_1115);
            }

            ;
            for (l_1098 = 0; (l_1098 < (-16)); l_1098 = safe_sub_func_uint16_t_u_u(l_1098, 6))
            {
                int *l_1122 = &g_617;
                for (g_1085 = 0; (g_1085 == (-17)); g_1085 = safe_sub_func_int8_t_s_s(g_1085, 8))
                {
                    int l_1123 = 0x5862E3B8L;
                    for (g_362 = 12; (g_362 < 21); g_362 = safe_add_func_int8_t_s_s(g_362, 1))
                    {
                        (*g_177) = l_1122;

                        ;
                        if ((*l_1044))
                            break;
                        if (l_1123)
                            continue;
                    }
                    (*g_1041) |= (*l_1044);
                }
            }
        }

        ;
        if ((*g_140))
        {
            int ***l_1126 = (void*)0;
            for (g_801 = 0; (g_801 != 3); ++g_801)
            {
                return (**g_177);
            }
            (*g_140) = (g_7 <= (*g_1115));
        }
        else
        {
            int l_1144 = 0x428C0265L;
            int *l_1145 = &g_176;
            for (g_71 = 0; (g_71 >= 13); ++g_71)
            {
                unsigned char l_1139 = 255UL;
                (**g_177) = (*g_488);
                (*g_177) = l_1138;

                ;
                if (l_1139)
                    continue;
                for (l_1111 = 0; (l_1111 < (-28)); l_1111--)
                {
                    (*g_488) = func_54((*l_1138), g_210, g_601, (0x793CL | ((((void*)0 != (*g_177)) != g_7) <= (safe_lshift_func_uint16_t_u_s(((((*l_1044) | (*g_1115)) ^ l_1144) <= g_325), 9)))));

                    ;
                    (*g_177) = l_1145;

                    ;
                    (*g_177) = (*g_177);
                    (*l_1043) = (*g_140);
                }

                ;
            }
        }
    }
    else
    {
        int l_1156 = 0x53849888L;
        for (g_362 = 10; (g_362 <= 32); g_362 = safe_add_func_uint32_t_u_u(g_362, 5))
        {
            for (g_325 = (-15); (g_325 >= (-18)); g_325 = safe_sub_func_uint8_t_u_u(g_325, 9))
            {
                int *l_1150 = &g_79;
                l_1043 = l_1150;

                ;
                for (g_1034 = 0; (g_1034 >= 49); ++g_1034)
                {
                    unsigned l_1157 = 1UL;
                    (*l_1150) = (((**g_177) & ((safe_unary_minus_func_uint16_t_u((safe_mul_func_int32_t_s_s((((g_71 >= 0UL) || (0x6443L & l_1156)) >= g_362), 0L)))) || l_1156)) > (~(g_7 > g_325)));
                    return l_1157;
                }
                (*g_177) = l_1150;

                ;
                (*g_279) = l_1156;
            }
        }

        ;
        ;
    }

    ;
    ;
    return (*l_1043);
}







static unsigned char func_11(unsigned short p_12, char p_13, unsigned short p_14, unsigned p_15, unsigned char p_16)
{
    int l_38 = 0x791F9E6AL;
    int l_761 = (-4L);
    int l_774 = 0xB042FE6EL;
    int **l_786 = &g_140;
    unsigned char l_884 = 0xC3L;
    unsigned l_904 = 1UL;
    unsigned char l_914 = 0x15L;
    unsigned l_925 = 4294967295UL;
    int *l_950 = &g_176;
    int *l_953 = &g_176;
    int l_971 = 0x9A38ECE3L;
    unsigned short l_974 = 1UL;
    unsigned l_994 = 0xC60E6994L;
    if (func_17(((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_8, (safe_lshift_func_int16_t_s_s(func_27(p_12, (safe_mod_func_int8_t_s_s(((((g_8 != func_32(g_8, p_16, l_38, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((func_43(g_8, g_8, func_49((func_54((safe_rshift_func_int8_t_s_s(func_61((p_15 ^ 0xDDBC75B1L), p_14), 3)), l_38, l_38, g_8) == g_210), g_210, g_8, g_325), p_13, l_38) < g_210), p_15)) != p_14), g_8)), g_210)) & p_16) == p_13) || l_38), p_12))), g_210)))), 0x34L)), 1UL)) < p_14)))
    {
        short l_736 = (-1L);
        int **l_778 = &g_279;
        for (g_378 = (-27); (g_378 <= 50); g_378 = safe_add_func_uint32_t_u_u(g_378, 7))
        {
            short l_730 = 0x8DBEL;
            int *l_734 = &g_617;
            unsigned l_742 = 0x8BF88D94L;
            unsigned char l_802 = 0xDEL;
        }
    }
    else
    {
        unsigned l_806 = 9UL;
        int l_821 = 0x1F06A783L;
        char l_826 = 0xBAL;
        l_821 ^= (**g_177);
        l_821 = ((func_27(g_71, (safe_lshift_func_uint16_t_u_u(0xCE8BL, ((((safe_sub_func_int32_t_s_s((((((func_54(((-1L) > 0xAD9EL), l_826, p_13, (2L == l_821)) ^ 65535UL) == g_79) <= l_826) != p_14) > 0x66L), l_821)) & 3UL) >= l_806) ^ 4294967292UL)))) <= 0x69L) && l_806);


        (*g_177) = &l_774;

        ;
        (*g_177) = (*g_177);
    }

    ;

    ;
    if (((**l_786) >= 0x85L))
    {
        char l_827 = 0L;
        unsigned l_837 = 0x2F73C8E1L;
        int **l_859 = (void*)0;
        unsigned l_877 = 0UL;
        int *l_888 = &g_325;
        if ((*g_140))
        {
            unsigned short l_836 = 0x77EBL;
            int l_838 = 0xEE46AA68L;
            int l_860 = (-1L);
            char l_880 = 0x2DL;
            l_827 ^= 0xE675CEF7L;
            (*g_279) = (safe_sub_func_int16_t_s_s(l_827, l_837));
            if ((*g_279))
            {
                (**l_786) |= (-1L);
                l_838 |= (&l_786 != &l_786);
            }
            else
            {
                unsigned l_854 = 1UL;
                unsigned l_861 = 4294967295UL;
                int ***l_878 = &g_146;
                for (l_761 = (-25); (l_761 < 4); l_761 = safe_add_func_int32_t_s_s(l_761, 3))
                {
                    unsigned short l_862 = 0xBC84L;
                    int *l_883 = &g_71;
                    (*l_786) = &l_838;

                    ;
                    (*g_279) = (((((safe_rshift_func_uint8_t_u_u(((-1L) == (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(func_54((((((safe_add_func_uint16_t_u_u(1UL, (((safe_add_func_uint8_t_u_u((((247UL < ((l_827 < l_838) >= (safe_add_func_int32_t_s_s((l_854 != (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((0xEDL == (l_859 == l_859)), p_15)) == (**l_786)), (-1L)))), l_860)))) ^ p_14) || p_13), l_861)) <= p_14) ^ 0x70D0AAC3L))) > l_854) != p_15) != 0UL) | g_71), g_8, p_15, p_15))) != p_15), l_862))), 6)) <= p_13) == l_862) < g_362) >= g_204);

                    ;
                    for (p_13 = 0; (p_13 < (-13)); p_13--)
                    {
                        int ***l_879 = (void*)0;
                        (*g_279) &= (l_862 != g_8);
                        if (l_862)
                            continue;
                        (*l_786) = &l_838;

                        ;
                        (*g_279) &= (**l_786);
                    }

                    ;
                    if (l_854)
                    {
                        (*l_786) = l_883;

                        ;
                        (*l_878) = &l_883;

                        ;
                        (**l_878) = func_64((g_801 || p_12), p_14);

                        ;
                    }
                    else
                    {
                        char l_885 = 0xFFL;
                        (**l_786) |= l_884;
                        (**g_177) = (**g_177);
                        (*g_177) = &l_860;

                        ;
                    }

                    ;

                }

                ;
                for (g_601 = 11; (g_601 < 17); ++g_601)
                {
                    (*g_177) = &l_838;

                    ;
                }

                ;
            }

            ;
            (**g_177) ^= 9L;
        }
        else
        {
            unsigned short l_891 = 0xAE2EL;
            l_888 = (*l_786);

            ;
            for (g_210 = (-20); (g_210 < 35); g_210 = safe_add_func_uint8_t_u_u(g_210, 3))
            {
                if ((**g_177))
                {
                    (*g_177) = (*g_177);
                }
                else
                {
                    return p_13;


                }
            }
        }


        ;
    }
    else
    {
        int *l_898 = (void*)0;
        int l_903 = 8L;
        int ***l_929 = &g_146;
        (*l_786) = &l_903;

        ;
        for (g_601 = 13; (g_601 < (-19)); g_601--)
        {
            int ***l_907 = &g_146;
            int l_931 = 0xB25FB79AL;
            if ((1L > (l_907 == (void*)0)))
            {
                short l_922 = 0x464CL;
                int *l_941 = &g_204;
                for (l_884 = 2; (l_884 > 5); l_884++)
                {
                    int **l_915 = &g_140;
                    (**l_786) ^= p_12;
                    if (func_54((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((*g_279), ((p_13 & (safe_mod_func_int16_t_s_s(((((l_922 > (((void*)0 == &l_903) >= (-1L))) & (**l_915)) | ((**l_786) ^ (**l_915))) != 65535UL), (**l_915)))) >= g_325))) == (-1L)), l_922)), p_16, g_801, g_601))
                    {
                        char l_926 = (-1L);
                        l_926 ^= ((0x649B6D0DL <= ((-9L) != g_378)) || (safe_sub_func_uint8_t_u_u((func_32((**l_786), g_71, p_14, p_12, g_79) & l_925), (-9L))));
                        (*g_140) = ((g_801 && (&g_488 != &g_488)) > (**l_915));
                    }
                    else
                    {
                        short l_930 = 0x345FL;
                        l_931 |= ((safe_sub_func_int32_t_s_s((0xDAL ^ g_801), ((*g_140) | ((g_601 && g_601) <= func_32(func_32((g_325 < (0UL > 0x65EF20EFL)), (((void*)0 == l_929) > 0xBEL), g_325, g_204, g_801), p_16, p_14, p_13, l_930))))) <= 2UL);
                    }

                    ;
                    (*g_279) = (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((void*)0 == (*l_915)))), (p_16 > func_32(g_8, (func_32((**l_915), ((**l_786) <= 1L), ((*l_786) != (*g_177)), g_362, p_12) && l_922), p_14, l_922, g_617))));
                    if (func_27(g_378, (((**g_177) > (1L ^ (p_12 && (3UL && (safe_add_func_int8_t_s_s((-2L), 0xC2L)))))) == (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_32(p_12, (0xF2FABD5FL | p_12), g_210, p_13, p_13), 65535UL)), p_12)))))
                    {
                        l_38 ^= p_13;
                        (*l_915) = l_941;

                        ;
                    }
                    else
                    {
                        return p_13;
                    }

                    ;
                }

                ;
                for (l_931 = 6; (l_931 != (-10)); l_931 = safe_sub_func_uint32_t_u_u(l_931, 4))
                {
                    (*g_279) |= (*l_941);
                }
                return p_12;


            }
            else
            {
                (*g_140) = ((((p_14 || (safe_lshift_func_int8_t_s_s((-1L), 2))) < ((safe_rshift_func_uint16_t_u_u(65535UL, p_13)) ^ (**l_786))) && 9UL) ^ (&g_177 != (void*)0));
                for (g_362 = 0; (g_362 < 17); g_362++)
                {
                    (*l_950) = ((void*)0 == l_950);
                }
                if (l_931)
                    continue;
            }
        }
        (*g_279) |= ((safe_mod_func_uint32_t_u_u(((func_54(((void*)0 == &l_903), p_15, (*l_950), (6UL < (&l_786 != &l_786))) | (g_378 < 0x4601392EL)) > p_16), g_801)) <= g_801);

        ;
        (*l_950) = p_15;
    }


    l_953 = (void*)0;

    ;
    if (p_12)
    {
        unsigned short l_954 = 1UL;
        int *l_975 = &g_176;
        int **l_993 = &g_140;
        int *l_1035 = &g_617;
        (*l_786) = l_975;

        ;
        if (func_49((p_14 > ((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_975) == (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_378, ((safe_sub_func_int32_t_s_s((*g_279), (*g_279))) < ((safe_mod_func_uint32_t_u_u(0xBC7F7F6BL, (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((l_993 != &l_975), ((((*l_786) != (*l_786)) != 5UL) != l_994))), g_378)))))) | g_378)))), p_13))), 6)), p_14)) | (*l_975)) | g_617) & p_14)), g_617, (**l_993), p_14))
        {
            int ***l_996 = &l_993;
            (*g_140) = (&g_177 == (void*)0);
            (*l_993) = (*l_993);
            (*g_140) = (safe_unary_minus_func_int32_t_s((&l_993 == l_996)));
            (*g_140) = (safe_mod_func_int8_t_s_s((***l_996), p_13));
        }
        else
        {
            int l_1014 = 0L;
            for (l_954 = 7; (l_954 == 54); l_954++)
            {
                int *l_1002 = (void*)0;
                if ((g_79 ^ (safe_unary_minus_func_int8_t_s(((*l_786) != l_1002)))))
                {
                    int *l_1003 = &l_38;
                    (*l_786) = l_1003;

                    ;
                    return g_8;


                }
                else
                {
                    short l_1004 = 8L;
                    (*l_975) = (l_1004 <= (safe_mod_func_uint32_t_u_u(0x6314C7F8L, (safe_sub_func_int16_t_s_s(g_71, (g_1009 | (((((**l_786) >= (g_176 | 0x66L)) || g_362) ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_1004 && 0xA9CAL), p_13)), l_1014))) | (*l_975))))))));
                }
                (*g_177) = (*g_177);
                if ((**l_786))
                    break;
            }
            (**g_177) = (**l_993);
            (*g_279) &= ((void*)0 != &l_1014);
        }
        for (p_15 = (-10); (p_15 == 44); p_15 = safe_add_func_uint32_t_u_u(p_15, 3))
        {
            int *l_1023 = &g_204;
            for (g_389 = 0; (g_389 > 24); g_389 = safe_add_func_int32_t_s_s(g_389, 1))
            {
                (**g_177) = p_12;
            }
            (*l_993) = l_1023;

            ;
        }

        ;
        (*l_1035) |= ((((safe_lshift_func_int8_t_s_s(p_14, 0)) | (safe_rshift_func_uint16_t_u_s(((*l_975) | (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_15, ((func_54((&l_975 != &l_953), p_14, g_79, g_79) >= p_15) | g_204))), g_378)) && 1UL), p_14))), g_378))) & g_1034) | 0x19B8L);

        ;
    }
    else
    {
        char l_1038 = 0x41L;
        int **l_1039 = &g_279;
        int l_1040 = (-6L);
        (*l_950) = ((safe_sub_func_int8_t_s_s((g_325 != func_27((0x4A90632DL == (l_1038 <= ((p_16 == (g_71 & p_12)) >= (l_1039 != &l_953)))), p_14)), l_1040)) ^ g_204);


        (*g_177) = (*l_1039);

        ;
    }

    ;
    return p_15;
}







static int func_17(unsigned p_18)
{
    unsigned char l_713 = 251UL;
    int *l_714 = &g_617;
    int l_719 = (-8L);
    unsigned l_724 = 0x0256941AL;
    short l_725 = 0x1CEEL;
    unsigned short l_727 = 0xD50EL;
    (*g_177) = l_714;

    ;
    l_719 ^= ((safe_mod_func_uint16_t_u_u(((~p_18) == func_54(func_54((((void*)0 != l_714) > (-4L)), (*l_714), (safe_lshift_func_int8_t_s_u(g_71, 4)), p_18), p_18, (*l_714), g_601)), g_362)) != p_18);

    ;
    if (p_18)
    {
        unsigned short l_726 = 0x470DL;
        l_726 |= (*g_140);
    }
    else
    {
        return p_18;
    }
    return l_727;
}







static short func_27(short p_28, short p_29)
{
    short l_695 = 0x57C3L;
    int l_696 = 0x9012AFFEL;
    int ***l_711 = &g_177;
    unsigned short l_712 = 0x1DF3L;
    l_696 &= l_695;
    l_696 = (p_29 >= (p_29 >= p_28));
    (*g_279) |= (safe_mod_func_int16_t_s_s(((void*)0 == &l_696), p_29));
    (*g_177) = &l_696;

    ;
    return p_29;


}







static short func_32(unsigned p_33, unsigned char p_34, unsigned char p_35, unsigned p_36, short p_37)
{
    int *l_691 = &g_325;
    unsigned l_694 = 0x3481B34DL;
    l_691 = l_691;
    for (g_71 = 17; (g_71 <= 12); g_71 = safe_sub_func_int16_t_s_s(g_71, 7))
    {
        l_694 &= 1L;
    }
    return p_33;
}







static unsigned char func_43(unsigned short p_44, unsigned short p_45, unsigned p_46, unsigned char p_47, int p_48)
{
    int l_332 = 0xD2039C2AL;
    int l_335 = 0x99F57404L;
    short l_349 = 2L;
    int l_350 = 0xA0C52178L;
    char l_351 = 0x31L;
    int ***l_375 = &g_177;
    short l_405 = 1L;
    short l_478 = 1L;
    int *l_511 = &g_176;
    int l_576 = 0x1857FF39L;
    int l_618 = 0xC17E8F03L;
    int ***l_645 = &g_177;
    unsigned l_646 = 0x890A57B4L;
    unsigned short l_665 = 65535UL;
    unsigned l_682 = 0x518580C6L;
    l_335 = (l_332 > ((!((((!0xE4L) == l_332) == func_49(g_79, g_325, (safe_rshift_func_uint16_t_u_u(g_210, 11)), p_45)) || 8L)) >= 5L));
    if (((func_49((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(func_54(((safe_add_func_uint16_t_u_u(((void*)0 != &g_279), (((((l_335 < ((0xB6FAAA50L <= (safe_rshift_func_uint16_t_u_s((0x1CL != l_335), (g_210 > (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(l_349)), l_350)))))) == g_8)) && l_351) >= p_47) && g_210) == g_8))) != 0L), g_176, g_8, g_325), 6)), p_48)), 0)), l_351, g_71, l_335) && g_8) != p_44))
    {
        int l_382 = 0x63E3B50CL;
        int **l_443 = &g_140;
        char l_471 = 0x03L;
        int l_472 = (-5L);
        int l_514 = (-2L);
        int *l_569 = &g_325;
        int *l_585 = (void*)0;
        unsigned short l_644 = 0xCF01L;
        unsigned l_687 = 5UL;
        if ((safe_rshift_func_int16_t_s_u((p_46 | 0x09B7L), 7)))
        {
            int *l_354 = &g_176;
            short l_376 = 0x9F9DL;
            int l_404 = 1L;
            int l_444 = 0x5C22F33BL;
            l_354 = &p_48;

            ;
            if (((l_351 <= ((p_47 && 0xFBAFL) <= g_210)) ^ (p_46 && l_349)))
            {
                int l_355 = (-1L);
                (**g_177) ^= l_355;
            }
            else
            {
                int l_379 = 0xDD0A5689L;
                if (p_45)
                {
                    int *l_358 = &g_71;
                    int *l_377 = (void*)0;
                    for (l_351 = 19; (l_351 >= 16); l_351 = safe_sub_func_int8_t_s_s(l_351, 4))
                    {
                        (*g_177) = l_358;

                        ;
                    }

                    ;
                    if ((((void*)0 == &p_48) | (((func_49(g_176, g_8, g_204, g_71) <= p_48) != (*l_354)) == 0xBA0FL)))
                    {
                        int *l_361 = &g_79;
                        (**g_177) = (safe_add_func_uint32_t_u_u((l_361 == l_358), (~4294967289UL)));
                        (*l_358) = g_362;
                    }
                    else
                    {
                        l_350 |= (**g_177);
                    }
                    g_378 &= func_49(p_45, ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((p_48 < l_350), 2)), (((g_79 <= (safe_lshift_func_uint8_t_u_u((p_47 == (((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((void*)0 != l_375) | g_176), (&g_146 == l_375))), (-1L))), l_376)) != 0xCC771989L) > p_44)), 2))) || p_45) == 0xC166499EL))) & p_44), g_176, (*l_354));
                }
                else
                {
                    (*g_140) &= p_48;
                    if ((**g_177))
                    {
                        (*g_140) = ((g_325 | l_379) & ((p_44 != p_46) || (safe_add_func_uint8_t_u_u(l_382, p_47))));
                        (*g_279) |= (*l_354);
                    }
                    else
                    {
                        return g_362;
                    }
                }

                ;
                (**l_375) = (*g_177);
                (*l_354) ^= ((1UL ^ (safe_add_func_int8_t_s_s((g_210 | (l_382 && (-9L))), g_71))) == func_54(l_379, g_204, (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_54(g_176, g_79, g_8, g_71), g_389)), p_47)), g_71));

                ;
                return p_45;
            }
            for (l_376 = 0; (l_376 > 28); l_376 = safe_add_func_uint16_t_u_u(l_376, 1))
            {
                int *l_417 = &l_350;
                char l_420 = 1L;
                unsigned short l_470 = 0x9172L;
                int l_479 = 1L;
                if (((&l_354 != (*l_375)) <= (safe_lshift_func_int8_t_s_u(func_49((***l_375), g_79, p_45, ((void*)0 != &p_48)), p_48))))
                {
                    int *l_402 = &g_325;
                    unsigned l_414 = 0xD0CF6ABFL;
                    int **l_445 = &g_140;
                    for (g_325 = 22; (g_325 == (-21)); --g_325)
                    {
                        int *l_403 = &g_176;
                        (**g_177) = ((safe_lshift_func_uint8_t_u_u(((p_45 & ((safe_mod_func_int32_t_s_s(((((*g_177) == l_402) >= (l_403 == &p_48)) == (-3L)), (((void*)0 != &g_177) || l_404))) != l_405)) ^ g_176), p_48)) <= p_46);
                        (*g_279) &= ((safe_add_func_uint16_t_u_u((((***l_375) <= p_48) | (safe_lshift_func_int16_t_s_u(g_176, 15))), (6L != (safe_add_func_int16_t_s_s(p_45, (p_47 & ((p_47 ^ p_45) == (***l_375)))))))) ^ p_46);
                        (*l_417) |= ((safe_rshift_func_int8_t_s_s((!l_414), (safe_lshift_func_uint16_t_u_s(g_389, ((l_417 != &p_48) & ((safe_lshift_func_uint16_t_u_u(func_49((***l_375), l_420, (***l_375), g_204), g_176)) | p_48)))))) || (***l_375));
                    }
                    for (l_350 = 0; (l_350 < (-30)); --l_350)
                    {
                        unsigned short l_427 = 2UL;
                        (**g_177) = ((safe_mod_func_uint8_t_u_u((p_47 || (-6L)), (((0x1D64L ^ g_389) == (safe_sub_func_uint32_t_u_u((p_47 < p_46), 4294967295UL))) | 0x6FL))) | 0x86E7L);
                        (***l_375) |= (*l_402);
                        (**l_375) = (void*)0;

                        ;
                        return g_8;
                    }
                    for (g_378 = 0; (g_378 != 46); ++g_378)
                    {
                        short l_438 = 0x25A9L;
                        (*l_402) = (p_46 ^ (g_389 == ((safe_mod_func_int8_t_s_s(((-9L) < p_45), (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((1UL & ((((p_48 | (safe_sub_func_int8_t_s_s(l_438, (+(*l_402))))) | 0x4FL) && (*l_354)) & 0x7EL)), 7)) | p_47) < 0x4CL), 0xB467L)))) | 0x7D6DL)));
                        (*g_177) = (*g_177);
                        (**l_443) = (*g_140);
                        l_445 = (void*)0;

                        ;
                    }

                    ;
                    (***l_375) &= ((safe_sub_func_int16_t_s_s((g_8 && (*l_417)), g_378)) || p_45);
                }
                else
                {
                    int **l_464 = &g_279;
                    (***l_375) ^= (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((1UL | 0x15L), (safe_lshift_func_int8_t_s_s(0xCEL, g_204)))), 0x48BD2AA8L));
                    (*l_354) = func_54(g_325, p_48, (*l_417), (((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((void*)0 == (*l_375)), 5)), 0)), (l_464 != &l_354))), 15)) > p_46), ((*l_417) > p_46))) >= (*l_354)) < p_45));
                }
                for (l_332 = 0; (l_332 < (-2)); --l_332)
                {
                    unsigned char l_477 = 0x2EL;
                    (**g_177) ^= 0xB2204423L;
                    l_472 &= (0xF5L != (((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(l_470, (**l_443))))) || (g_378 || (func_49(g_79, (((func_54(g_389, p_44, p_47, g_71) >= g_378) && (*l_417)) != p_46), g_389, p_45) && l_471))) || p_48));
                    if ((8L > ((safe_sub_func_uint16_t_u_u(g_71, (safe_lshift_func_uint8_t_u_s(((l_477 > l_477) == (((p_47 > func_54((((0UL | ((+(func_54(g_204, (*l_354), (*l_417), g_176) == g_8)) || p_46)) || (-1L)) != g_71), g_204, l_478, p_44)) || (**g_177)) != l_479)), p_46)))) || p_44)))
                    {
                        if (l_477)
                            break;
                    }
                    else
                    {
                        int l_480 = (-9L);
                        (*g_279) &= (**g_177);
                        if (p_48)
                            break;
                        l_480 = (*g_140);
                    }
                    if (p_48)
                        break;
                }
            }
            (*g_279) = (safe_add_func_int8_t_s_s(0xABL, (*l_354)));
        }
        else
        {
            int **l_483 = &g_279;
            int *l_563 = (void*)0;
            short l_611 = 0xF048L;
            p_48 &= (***l_375);
            (*l_443) = (*l_443);
            if ((g_325 >= (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_204, (0x9B67L <= ((void*)0 != &g_488)))), (safe_sub_func_uint32_t_u_u(func_54(p_46, (***l_375), p_45, (**l_443)), (**l_483)))))))
            {
                char l_505 = (-3L);
                int *l_506 = &g_79;
                (*g_140) &= ((*g_279) >= 8UL);
                (**l_375) = l_506;
            }
            else
            {
                int **l_507 = &g_140;
                int *l_508 = &g_79;
                unsigned l_512 = 4294967287UL;
                if ((((***l_375) <= ((**l_483) == ((l_507 == l_507) > p_47))) >= p_48))
                {
                    unsigned char l_513 = 255UL;
                    unsigned l_525 = 0x19760893L;
                    int ***l_554 = (void*)0;
                    (**l_375) = l_508;
                    for (l_350 = 0; (l_350 > 21); l_350 = safe_add_func_int16_t_s_s(l_350, 4))
                    {
                        (*l_507) = l_511;

                        ;
                        (**g_177) = (*g_279);
                    }

                    ;
                    if (func_49(g_79, l_512, ((l_513 && ((p_44 == (0x35L < ((0xA7L > ((func_54(((1UL < p_48) != 4UL), p_47, g_204, (**l_483)) ^ 0xD422L) > 8UL)) != l_513))) <= (-1L))) < 3L), l_514))
                    {
                        (*l_508) = p_45;
                        (**l_483) = (func_54((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((5L != (safe_rshift_func_int8_t_s_u(0L, 0))) & (safe_sub_func_int32_t_s_s(0L, (safe_add_func_uint32_t_u_u(((func_54(p_44, (**l_443), l_525, g_8) || g_8) & 0x0AD2BC08L), p_46))))), 8)) || p_47), p_47)), (**l_483), g_71, g_210) && 6UL);

                        ;
                    }
                    else
                    {
                        unsigned l_540 = 0UL;
                        int *l_543 = &g_79;
                        (**l_443) = (0x4FL < (safe_mod_func_uint32_t_u_u(g_71, 0xA630C53EL)));
                        (*g_279) = (*g_140);
                        p_48 |= (g_176 <= (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((p_45 > 0UL) < 65535UL), g_71)), (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((**g_177), ((((safe_add_func_uint8_t_u_u(l_540, ((safe_mod_func_uint16_t_u_u(((*l_507) == l_543), 0xA73CL)) < 0xFFDCFF3EL))) & p_46) > p_45) < 1L))) > 6L), 1)))) > p_46), g_362)));
                    }
                    if (((safe_add_func_int8_t_s_s(0x66L, (*l_508))) != g_210))
                    {
                        unsigned short l_555 = 0xFA15L;
                        (*g_279) |= ((0xCAF5L > (safe_lshift_func_int16_t_s_u(p_48, (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((&l_508 != (void*)0), (safe_add_func_uint32_t_u_u((((**l_443) | (l_554 != l_554)) | g_204), (p_45 == p_46))))), l_555))))) && p_44);
                        (*g_177) = &p_48;

                        ;
                    }
                    else
                    {
                        int *l_564 = &l_472;
                        (*g_279) |= (safe_unary_minus_func_uint32_t_u(p_47));
                        (*l_564) |= func_49(((((safe_mod_func_uint8_t_u_u(((&l_483 == l_554) | (((&p_48 == l_563) < ((*g_177) == l_564)) < p_47)), g_79)) > ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_204, 0x2E06L)), 0x197CL)) == 7L)) == 0x60AAL) < p_48), p_48, (*l_508), (**l_443));
                    }

                    ;
                }
                else
                {
                    unsigned l_586 = 0xFA04D5B0L;
                    (*l_511) &= (**l_443);
                    (*l_507) = l_569;

                    ;
                    if ((safe_sub_func_int32_t_s_s(0L, ((p_48 < (safe_add_func_int8_t_s_s(g_389, ((+0UL) >= g_204)))) >= (safe_mod_func_int16_t_s_s(((func_54(g_204, p_47, l_576, (safe_rshift_func_uint8_t_u_s((+(0xB0L ^ p_46)), 0))) & 0xC1EDD4D4L) | (-1L)), g_8))))))
                    {
                        (**l_507) &= ((safe_mod_func_uint32_t_u_u(((-1L) & ((safe_rshift_func_int16_t_s_u(0x3D1BL, 11)) == g_389)), p_47)) ^ ((*g_279) > (safe_rshift_func_uint8_t_u_u(g_204, 4))));
                        (**l_375) = (void*)0;

                        ;
                        (*l_508) |= 0x17B945A0L;
                    }
                    else
                    {
                        l_586 |= ((void*)0 == l_585);
                        (*l_569) = p_45;
                    }

                    ;
                    if (((safe_lshift_func_uint8_t_u_s(g_362, p_46)) < g_378))
                    {
                        int **l_589 = &g_279;
                        (*g_177) = &p_48;

                        ;
                        (*l_443) = (void*)0;

                        ;
                        l_483 = l_589;
                    }
                    else
                    {
                        return g_8;
                    }

                    ;
                }

                ;
                for (g_71 = (-8); (g_71 < 27); g_71 = safe_add_func_int8_t_s_s(g_71, 1))
                {
                    unsigned char l_598 = 0x34L;
                    int *l_602 = &g_204;
                    if ((p_44 >= ((safe_rshift_func_uint16_t_u_u(p_46, ((safe_mod_func_int16_t_s_s((~p_44), 0x5565L)) >= ((*l_569) == (g_378 == (((p_45 >= g_79) <= g_362) <= 0xD6A0L)))))) & (-1L))))
                    {
                        (*l_569) |= l_598;
                        (*l_569) &= (safe_add_func_int16_t_s_s((-2L), g_389));
                    }
                    else
                    {
                        return g_601;


                    }
                    l_602 = (**l_375);

                    ;
                    (*l_511) = (safe_sub_func_uint16_t_u_u(g_176, (safe_mod_func_int16_t_s_s(g_325, p_45))));
                }
                (**l_375) = (*l_483);

                ;
                (**l_443) ^= ((&l_507 == &g_177) || (p_48 != (safe_mul_func_int8_t_s_s(0x1EL, (g_362 > (p_48 || p_44))))));
            }

            ;
            (*l_483) = (**l_375);

            ;
        }

        ;
        ;
        if ((*l_511))
        {
            unsigned short l_616 = 0UL;
            int *l_630 = &g_176;
            l_618 = (safe_add_func_uint32_t_u_u((~l_616), g_617));
            for (g_601 = (-6); (g_601 >= (-4)); g_601 = safe_add_func_int16_t_s_s(g_601, 5))
            {
                if (p_48)
                {
                    (*l_569) ^= 0x08394F84L;
                    return p_45;
                }
                else
                {
                    char l_621 = (-6L);
                    if (((p_44 | l_621) == (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_325, l_616)), func_49(l_616, g_176, g_378, p_47)))))
                    {
                        (**g_177) = p_45;
                    }
                    else
                    {
                        (*g_279) ^= (1UL == (safe_lshift_func_uint8_t_u_s(g_617, 5)));
                        (*g_279) |= (0x54FA28D6L >= g_8);
                        (*g_140) = l_621;
                        (*l_443) = (*g_177);
                    }
                    (*l_511) ^= (*g_279);
                }
                (*l_569) = p_47;
            }
            l_630 = &p_48;

            ;
        }
        else
        {
            short l_633 = 0L;
            int *l_638 = &g_617;
            (*l_569) = ((((**g_177) < (-7L)) & g_378) >= (safe_add_func_uint8_t_u_u(g_210, g_204)));
            if ((!(~((((void*)0 == (*l_375)) == ((l_633 == (0x9268L < (safe_sub_func_int32_t_s_s((g_176 & (safe_mod_func_int16_t_s_s(((0x2814L < g_204) && ((*l_375) == (*l_375))), (*l_511)))), (*l_569))))) ^ l_633)) & 1UL))))
            {
                short l_643 = 0x825AL;
                (*l_511) ^= (*g_279);
                p_48 = ((*g_177) == l_638);
                (**l_443) = (safe_rshift_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_s(g_617, 2))), (g_389 <= g_362)));
            }
            else
            {
                unsigned l_647 = 1UL;
                int *l_655 = &l_350;
                unsigned char l_676 = 0xF5L;
                if ((((g_71 & (((void*)0 != l_645) || ((((((l_647 >= ((safe_add_func_uint16_t_u_u(p_46, 7L)) != func_54(g_204, (safe_lshift_func_uint16_t_u_u(p_47, p_45)), (**l_443), (*l_569)))) != g_176) < p_46) <= 0x2EL) == 0x72E1L) > 0x3254L))) <= p_47) | g_389))
                {
                    int l_662 = (-1L);
                    int **l_666 = &l_655;
                    for (l_618 = 0; (l_618 > 2); l_618 = safe_add_func_uint32_t_u_u(l_618, 5))
                    {
                        short l_654 = 0L;
                        (**l_375) = &p_48;

                        ;
                        if (l_654)
                            break;
                        (*l_443) = l_655;

                        ;
                        (*l_511) &= (safe_mod_func_uint32_t_u_u(((***l_375) & g_204), (~l_654)));
                    }

                    ;
                    for (l_405 = (-22); (l_405 < (-17)); ++l_405)
                    {
                        (***l_645) = p_44;
                        (*g_177) = (*l_443);
                        (***l_645) |= ((void*)0 != (*l_443));
                        l_662 = (safe_add_func_int16_t_s_s(((void*)0 == &g_279), p_44));
                    }
                    for (g_389 = 0; (g_389 != 32); g_389++)
                    {
                        unsigned l_671 = 1UL;
                        int *l_672 = &g_176;
                        l_672 = (*l_666);

                        ;
                    }
                    return g_389;


                }
                else
                {
                    int *l_673 = &g_79;
                    (**l_375) = l_673;

                    ;
                    if (p_48)
                    {
                        (*l_443) = (*g_177);
                    }
                    else
                    {
                        (*g_140) ^= ((void*)0 != &l_655);
                        return p_47;
                    }
                    if ((safe_add_func_int16_t_s_s((*l_673), ((*l_673) == l_676))))
                    {
                        int l_681 = 0xA789CF9BL;
                        (*l_569) ^= (((safe_rshift_func_int8_t_s_u((*l_638), ((g_204 <= (safe_add_func_uint8_t_u_u((l_681 < (0x91L && l_682)), p_45))) || g_389))) || p_47) ^ (2UL > l_681));
                        (*g_140) &= ((*l_638) && ((**l_375) != (void*)0));
                    }
                    else
                    {
                        (**l_443) &= 6L;
                        (*g_140) = ((*g_140) | (***l_375));
                    }
                }

                ;
                if (((((&l_569 == (void*)0) && func_49((*l_569), g_79, (*l_569), (*l_655))) < p_44) != (safe_sub_func_int8_t_s_s((g_362 | g_378), (-1L)))))
                {
                    l_655 = (*g_177);

                    ;
                    (**l_375) = (*l_443);
                }
                else
                {
                    l_638 = (*g_177);

                    ;
                    (**g_177) = (*l_638);
                }

                ;
                ;
                return g_79;
            }
            (*l_511) = func_49(g_71, (***l_375), ((*l_375) != (void*)0), (*l_638));
            (**l_375) = l_638;

            ;
        }

        ;
        (*l_443) = (**l_645);
        (**l_443) = ((**l_645) == (void*)0);
    }
    else
    {
        int *l_690 = &g_204;
        (**l_645) = l_690;

        ;
    }

    ;
    ;
    (*l_511) ^= (***l_375);
    (*g_140) |= p_45;
    return g_71;
}







static unsigned func_49(unsigned short p_50, unsigned char p_51, unsigned p_52, unsigned short p_53)
{
    int l_331 = 0L;
    for (g_79 = 18; (g_79 >= (-20)); --g_79)
    {
        return g_79;
    }
    for (p_50 = (-15); (p_50 < 40); ++p_50)
    {
        int l_330 = 0xC03077D0L;
        l_330 = (*g_279);
    }
    (**g_177) ^= l_331;
    (*g_177) = (*g_177);
    return l_331;
}







static unsigned short func_54(unsigned char p_55, unsigned p_56, short p_57, unsigned char p_58)
{
    unsigned char l_319 = 0xF6L;
    int *l_324 = &g_79;
    (*g_177) = l_324;

    ;
    return p_56;
}







static char func_61(unsigned p_62, int p_63)
{
    unsigned short l_67 = 0UL;
    int *l_216 = (void*)0;
    int l_267 = 2L;
    unsigned short l_292 = 0xEF51L;
    int l_317 = 0x4ED17E8DL;
    int l_318 = (-2L);
    if ((251UL != g_8))
    {
        int *l_207 = &g_176;
        l_207 = func_64(l_67, g_8);

        ;
        ;
        if ((((void*)0 != &g_146) > (safe_rshift_func_uint8_t_u_u(6UL, g_210))))
        {
            int *l_215 = &g_176;
            (*g_140) = ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_79, 2)), ((**g_177) && p_62))) & (*g_140));
            (*l_215) &= (*l_207);
            (*g_145) = &l_207;

            ;
        }
        else
        {
            (**g_145) = l_216;

            ;
            (*g_145) = (*g_145);
        }

        ;
        ;
        return g_71;


    }
    else
    {
        int **l_217 = &l_216;
        (*g_145) = l_217;

        ;
    }

    ;
    if (p_62)
    {
        unsigned char l_218 = 249UL;
        unsigned char l_219 = 0xD7L;
        int ***l_236 = &g_146;
        int ***l_237 = &g_146;
        int l_254 = 0xEE92D2D4L;
        if ((*g_140))
        {
            int l_226 = 0x412AEBC1L;
            int **l_233 = &l_216;
            int l_235 = 2L;
            if ((((-6L) || (g_79 > ((l_218 > (p_62 <= (l_219 >= 0UL))) & (safe_sub_func_int8_t_s_s(0L, p_63))))) || 0x3791001AL))
            {
                int *l_248 = &g_79;
                int ***l_265 = &g_146;
                unsigned l_266 = 0x5F5D2826L;
                if (p_62)
                {
                    int **l_234 = &g_140;
                    l_235 &= (~((safe_rshift_func_uint16_t_u_s(0xC746L, (l_218 && (safe_add_func_int32_t_s_s(p_62, l_226))))) >= ((safe_lshift_func_int16_t_s_s(g_79, l_226)) ^ ((safe_mod_func_uint8_t_u_u((g_71 >= ((safe_mod_func_uint16_t_u_u((l_233 == l_234), g_71)) != 0x9BL)), p_62)) < p_63))));
                    if (((l_236 != l_237) <= (g_176 & ((((void*)0 == (*g_145)) <= p_62) || (**l_234)))))
                    {
                        (*g_140) ^= p_62;
                        (**g_177) &= ((g_8 != 0UL) < ((safe_mod_func_int16_t_s_s(g_8, p_62)) != ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0x0AL, 6)), ((*g_177) != (void*)0))) <= 0xDEL)));
                    }
                    else
                    {
                        (*g_140) = (*g_140);
                        (*g_140) = p_62;
                        (*l_234) = (*g_177);
                    }
                    (*g_140) = (safe_mod_func_int32_t_s_s(((l_236 == &l_234) >= g_204), ((safe_add_func_uint16_t_u_u(g_71, ((void*)0 == (*g_145)))) && ((l_237 != l_236) & ((void*)0 != &l_233)))));
                    (*g_177) = l_248;

                    ;
                }
                else
                {
                    int *l_251 = &g_204;
                    int ***l_262 = &g_177;
                    if (((251UL > p_63) | (**g_177)))
                    {
                        (*g_177) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned char l_259 = 246UL;
                        l_259 = (((safe_rshift_func_int16_t_s_u((g_176 > (l_251 != (*g_177))), 1)) < g_79) && ((-3L) || (((p_63 == (safe_mod_func_uint32_t_u_u((l_254 == (safe_sub_func_uint16_t_u_u(g_210, ((safe_mod_func_int16_t_s_s(((void*)0 != l_216), p_62)) && 1L)))), 0x1245A1B6L))) < g_79) == 0UL)));
                    }

                    ;
                    if ((((safe_add_func_uint16_t_u_u(p_62, (0UL || 65532UL))) <= ((void*)0 != l_262)) <= (safe_sub_func_uint8_t_u_u(((&g_177 == (void*)0) ^ (l_265 != l_236)), p_63))))
                    {
                        (*g_145) = (*l_262);

                        ;
                        (*l_251) = ((!p_62) && g_204);
                        (*l_251) &= ((void*)0 == l_236);
                        (*l_251) = p_62;
                    }
                    else
                    {
                        (*l_248) = (*l_251);
                    }

                    ;
                    if (l_266)
                    {
                        g_176 &= ((l_267 > 0xCC06L) <= (p_63 >= (((safe_unary_minus_func_uint32_t_u(g_71)) | ((safe_lshift_func_uint16_t_u_u(((*l_265) == (*g_145)), ((g_204 != p_62) && (*l_248)))) & (*l_248))) != g_210)));
                        (*l_248) = p_62;
                        return g_210;


                    }
                    else
                    {
                        (*l_248) = (((((g_71 && (safe_rshift_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((*l_265) != (*g_145)), 9)), g_8)) < ((g_204 == ((*g_145) == (*g_145))) && (safe_sub_func_int16_t_s_s(p_62, g_176)))) == 0x1C66F583L) < p_63), 2))) <= g_204) || p_63) & 4294967295UL) | g_71);
                    }
                }

                ;
                ;
                (*l_248) = p_63;
            }
            else
            {
                l_216 = g_279;

                ;
                (**g_146) = 8L;
                (**l_233) |= 0L;
            }

            ;
            ;
            ;
            (*g_279) ^= p_62;
            l_235 = p_63;
            if (((-9L) < (safe_lshift_func_uint16_t_u_u((p_63 <= (p_62 || (&l_267 != (void*)0))), 12))))
            {
                int l_284 = 6L;
                (**l_237) = (*l_233);
                return l_284;


            }
            else
            {
                (**g_145) = (void*)0;
            }
        }
        else
        {
            (*g_140) = (safe_add_func_int8_t_s_s(p_63, p_62));
        }

        ;
        ;
        ;
        return g_8;


    }
    else
    {
        short l_289 = 0xF0F5L;
        int *l_299 = &g_204;
        for (l_267 = 0; (l_267 <= (-15)); l_267 = safe_sub_func_int16_t_s_s(l_267, 1))
        {
            int l_306 = 1L;
            if (l_289)
            {
                int *l_293 = (void*)0;
                int l_298 = 0xE0CEF930L;
                (**g_145) = &l_267;

                ;
                (*g_146) = l_293;

                ;
                if (p_62)
                {
                    if (p_63)
                        break;
                }
                else
                {
                    unsigned char l_309 = 0xF3L;
                    (**g_177) ^= (((safe_sub_func_uint16_t_u_u(g_176, ((p_63 | p_63) > 6L))) != ((0xAC4EL != (safe_lshift_func_int8_t_s_u((~g_8), 1))) && (-7L))) != l_298);
                    l_298 |= ((**g_145) != l_299);
                    (*l_299) &= (((g_79 | (((safe_rshift_func_uint8_t_u_u((~((+(safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_306, g_210)), (safe_lshift_func_int16_t_s_u(l_309, 14))))) < (p_63 ^ l_309))), 4)) ^ (((((safe_rshift_func_uint8_t_u_u((((void*)0 != (**g_145)) | (*g_279)), p_62)) == p_62) || 0x5FL) == l_309) >= 0L)) || 65529UL)) | l_306) ^ 65535UL);
                    (*g_140) ^= p_62;
                }
                for (p_62 = 0; (p_62 >= 47); p_62++)
                {
                    return p_62;


                }
            }
            else
            {
                return p_62;


            }
            (**g_177) = l_306;
        }
        (**g_177) = p_62;
        if ((p_63 ^ p_63))
        {
            int *l_316 = (void*)0;
            (*g_279) = p_63;
            for (p_63 = 1; (p_63 != 25); p_63 = safe_add_func_int8_t_s_s(p_63, 7))
            {
                (*g_146) = l_316;
                return g_71;


            }
        }
        else
        {
            return (*l_299);


        }
    }
    if (p_63)
    {
        (*g_145) = (void*)0;

        ;
    }
    else
    {
        return l_317;


    }

    ;
    (**g_177) &= l_318;
    return g_79;
}







static int * func_64(unsigned p_65, int p_66)
{
    int *l_70 = &g_71;
    int *l_78 = &g_79;
    int **l_81 = &l_70;
    int ***l_80 = &l_81;
    int l_202 = 0L;
    (*l_78) &= ((safe_lshift_func_uint8_t_u_s(p_65, p_65)) && ((l_70 == l_70) >= ((safe_sub_func_int8_t_s_s((p_65 || (+(((&g_71 == l_70) && (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_66, 65535UL)), p_65))) != p_66))), (*l_70))) == p_65)));
    (*l_80) = &l_70;
    for (p_66 = (-20); (p_66 == 7); p_66 = safe_add_func_uint16_t_u_u(p_66, 9))
    {
        char l_100 = 0xA8L;
        int *l_126 = &g_71;
        int ***l_131 = &l_81;
        unsigned l_142 = 0x7F186A86L;
        char l_178 = 6L;
        int *l_203 = &g_204;
        if ((0xBC5DL || 0x0EA3L))
        {
            unsigned l_88 = 0x72060300L;
            int ***l_91 = &l_81;
            if (p_66)
            {
                int ***l_92 = &l_81;
                if ((g_71 > ((g_79 | (safe_lshift_func_int16_t_s_s(1L, 3))) >= l_88)))
                {
                    return &g_71;


                }
                else
                {
                    if (((safe_sub_func_uint32_t_u_u(g_71, (0x4D5916FFL < (l_91 != l_92)))) || g_8))
                    {
                        unsigned l_93 = 7UL;
                        (***l_92) = (l_93 | (((*l_81) == &g_79) && (g_71 <= 0xAF72L)));
                        (**l_92) = &g_71;
                    }
                    else
                    {
                        l_100 ^= (safe_add_func_int16_t_s_s(((**l_81) || (safe_rshift_func_uint8_t_u_u((***l_91), 2))), (1L & (safe_add_func_int8_t_s_s(g_71, 253UL)))));
                        (***l_80) = (***l_80);
                    }
                }
                (**l_80) = &g_79;

                ;
                if ((***l_92))
                {
                    (***l_92) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_8, 1)), (*l_70)));
                    return &g_71;


                }
                else
                {
                    (**l_92) = &g_79;
                }
            }
            else
            {
                unsigned l_109 = 0x10857B26L;
                char l_114 = 0x44L;
                int *l_127 = &g_71;
                (***l_91) = (-1L);
                if ((((safe_rshift_func_int8_t_s_u(((g_8 && (safe_add_func_uint32_t_u_u((l_109 | ((0x168752EBL != g_79) & l_109)), ((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s((*l_78), ((~(l_114 && (p_65 & (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((p_66 > (*l_70)), l_109)) & g_79), g_79))))) > 0x8AL))) ^ g_79) >= 1L) != l_100), g_71)) != 0L)))) != 0x72L), 6)) | p_66) <= 0L))
                {
                    (***l_91) = ((((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((*l_78), 4)) >= (safe_sub_func_uint16_t_u_u(((g_71 > p_66) | g_8), (safe_unary_minus_func_int8_t_s(((void*)0 == (**l_91))))))), 4)) <= p_66) <= (l_126 == l_127)) != 0xC200L);
                    return l_126;


                }
                else
                {
                    short l_128 = (-7L);
                    l_128 &= (*l_127);
                }
                (**l_80) = (*l_81);
                (*l_81) = &g_71;
            }

            ;
            return l_126;


        }
        else
        {
            int l_152 = 0xD3F44F86L;
            int *l_157 = &g_71;
            int ***l_179 = &g_146;
            char l_191 = 7L;
            for (l_100 = 23; (l_100 <= 12); l_100 = safe_sub_func_int8_t_s_s(l_100, 1))
            {
                unsigned char l_141 = 7UL;
                (***l_131) ^= (1UL == (((void*)0 == l_131) > 0L));
                for (g_79 = 7; (g_79 != (-5)); g_79--)
                {
                    int l_134 = 0xD0BAEE16L;
                    int *l_139 = &g_79;
                    (*l_70) = l_134;
                    g_71 = 0x33836DABL;
                    if ((1UL != ((void*)0 != (*l_81))))
                    {
                        (**l_81) = (((safe_add_func_uint16_t_u_u(g_8, (*l_126))) <= (safe_rshift_func_uint16_t_u_u(0x3DD4L, p_65))) == (l_134 <= p_66));
                        g_140 = l_139;

                        ;
                        (**l_131) = (void*)0;

                        ;
                        (*l_81) = &g_71;

                        ;
                    }
                    else
                    {
                        l_141 = (65535UL >= ((g_79 > p_65) & ((*l_126) | 4UL)));
                    }
                }
                (***l_80) = (g_8 != l_142);
            }
            if ((safe_add_func_int16_t_s_s((p_65 != (p_65 < (g_145 == (void*)0))), (*l_78))))
            {
                int *l_147 = &g_71;
                (**g_146) = p_66;
                (**g_145) = l_147;
                if ((safe_add_func_uint16_t_u_u((0xFEL & (safe_add_func_int32_t_s_s(l_152, (0x8789L & (safe_mod_func_uint8_t_u_u(g_71, p_66)))))), (((0x66F7L | p_65) != (((l_152 > (***l_131)) != 0L) || p_66)) || (*l_126)))))
                {
                    for (l_100 = 0; (l_100 < (-2)); --l_100)
                    {
                        (*l_147) = (*l_70);
                        if ((**g_146))
                            break;
                        (*l_70) = p_65;
                    }
                    return l_157;


                }
                else
                {
                    int l_170 = 1L;
                    int *l_171 = &g_71;
                    int ***l_172 = &l_81;
                    if (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((*l_70), 5)), g_8)) | (safe_add_func_int16_t_s_s(((*l_131) == &l_147), (((0xCAL > (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((*l_147), (~g_79))) < (((p_65 >= ((safe_sub_func_uint32_t_u_u((l_170 | (*l_126)), 0x983E45B0L)) != (*l_157))) != l_170) < p_65)), 7))) | 0L) && 0xAAC6DB22L)))))
                    {
                        l_147 = l_171;
                        (*g_146) = (*g_146);
                    }
                    else
                    {
                        (***l_80) = ((void*)0 != l_172);
                    }
                    (**g_146) = (safe_lshift_func_int8_t_s_s(((-1L) >= g_8), 6));
                }
            }
            else
            {
                int *l_175 = &g_176;
                (*l_157) |= (g_79 != 0xD12FL);
                (***g_145) = (***g_145);
                (*l_175) &= (*g_140);
                (*l_175) ^= (g_177 != (*g_145));
            }
            if ((**g_177))
            {
                char l_188 = (-9L);
                (*l_78) ^= ((*l_157) < (l_178 <= (***l_131)));
                if ((p_65 && ((void*)0 != l_179)))
                {
                    (**l_179) = (**l_131);
                    (**l_81) ^= ((*l_131) == (*g_145));
                }
                else
                {
                    int *l_183 = &g_71;
                    for (g_71 = 13; (g_71 <= (-11)); g_71 = safe_sub_func_int16_t_s_s(g_71, 9))
                    {
                        int **l_182 = (void*)0;
                    }
                    (*l_183) ^= p_65;
                    l_191 ^= (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_188, 1)) < (*l_183)), (safe_lshift_func_int8_t_s_s(((void*)0 != l_183), 5))));
                }
                (**g_145) = (**l_131);
                (*l_126) = (safe_mod_func_int16_t_s_s((***l_179), l_188));
            }
            else
            {
                (***l_179) = (**g_177);
            }
        }
        (*l_203) |= ((((((safe_lshift_func_uint8_t_u_s(((p_65 == ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((*l_126) | (4294967293UL == ((g_71 ^ p_66) < 0x4B41L))), 8)) >= (safe_sub_func_int8_t_s_s(((g_176 ^ (g_71 | ((0xE22EL | 0x3244L) >= (**g_177)))) | g_176), (*l_70)))), (*l_70))) >= p_65)) != l_202), g_79)) <= 0L) >= (-9L)) >= g_71) == (*l_70)) && (***l_131));
        (*g_146) = (*g_146);
        (*l_126) = (safe_rshift_func_int8_t_s_u((g_71 <= g_204), 3));
    }

    ;
    return (*g_146);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
