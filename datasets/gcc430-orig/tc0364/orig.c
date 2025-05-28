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



static int g_3 = (-4L);
static int g_7 = 0x3E63E315L;
static int g_22 = 0x684A08DEL;
static int *g_25 = &g_7;
static int **g_24 = &g_25;
static int g_47 = 0L;
static int g_76 = 0xF9D9D8ADL;
static unsigned short g_80 = 0x764FL;
static unsigned char g_81[4][4][2] = {{{0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}}, {{0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}}, {{0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}}, {{0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}, {0x1EL, 0x2AL}}};
static int **g_84 = &g_25;
static int g_88 = 0x2330F086L;
static unsigned short g_124 = 65529UL;
static int g_218 = 0x886F20A9L;
static const int *g_265 = &g_88;
static int g_290 = 0xE6051C92L;
static unsigned char g_406 = 9UL;
static int g_414 = 1L;
static int *g_417[5][9] = {{(void*)0, &g_88, (void*)0, &g_88, &g_47, &g_88, &g_76, &g_76, (void*)0}, {(void*)0, &g_88, (void*)0, &g_88, &g_47, &g_88, &g_76, &g_76, (void*)0}, {(void*)0, &g_88, (void*)0, &g_88, &g_47, &g_88, &g_76, &g_76, (void*)0}, {(void*)0, &g_88, (void*)0, &g_88, &g_47, &g_88, &g_76, &g_76, (void*)0}, {(void*)0, &g_88, (void*)0, &g_88, &g_47, &g_88, &g_76, &g_76, (void*)0}};
static unsigned g_532 = 0xD1BB1C3DL;
static int * const g_578 = &g_88;



static unsigned char func_1(void);
static int * func_9(int ** p_10, int ** const p_11, int p_12);
static int ** func_13(int p_14);
static int ** func_26(char p_27, unsigned p_28, const int ** p_29, int ** p_30);
static const int ** func_32(int * const p_33, unsigned p_34, unsigned p_35);
static int * func_36(const short p_37, int ** p_38, unsigned p_39);
static int func_40(short p_41);
static int * func_50(unsigned short p_51, unsigned short p_52, unsigned long long p_53, int * const p_54);
static unsigned short func_55(char p_56, int * p_57, char p_58);
static int * func_59(const int * p_60, int * p_61, unsigned p_62, int ** p_63, int ** p_64);
static unsigned char func_1(void)
{
    unsigned l_2[7];
    int *l_4 = &g_3;
    unsigned l_31 = 0x0402AD92L;
    int i;
    for (i = 0; i < 7; i++)
        l_2[i] = 0UL;
    for (g_3 = 6; (g_3 >= 2); g_3 -= 1)
    {
        int **l_5 = &l_4;
        int *l_6 = &g_7;
        (*l_5) = l_4;
        (*l_6) ^= 1L;
    }
    for (g_3 = 6; (g_3 >= 0); g_3 -= 1)
    {
        int *l_8[10][8] = {{&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}, {&g_7, &g_3, &g_7, &g_3, &g_7, &g_7, &g_3, &g_3}};
        unsigned long long l_15[10][5] = {{0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}, {0x81A82E77E815F842LL, 0x81A82E77E815F842LL, 0x15B45BEAC3EFC167LL, 0x56540F213ED423CBLL, 1UL}};
        int i, j;
        g_7 &= l_2[g_3];
        (*g_24) = func_9(func_13(l_15[5][1]), func_26(g_3, l_31, func_32(func_36((*l_4), &l_4, g_3), ((void*)0 == l_8[6][5]), g_3), g_24), (*l_4));
        (*g_578) |= (*l_4);
    }
    (*l_4) = (*g_265);
    (*g_578) &= (*l_4);
    return g_3;
}







static int * func_9(int ** p_10, int ** const p_11, int p_12)
{
    char l_423 = 1L;
    int l_432 = 1L;
    unsigned long long l_463 = 0UL;
    int ***l_468 = &g_84;
    long long l_505 = 0x7000F0D6B5A1CD89LL;
    const int **l_533 = &g_265;
    int **l_584 = &g_25;
    short l_597 = 1L;
    int *l_598 = (void*)0;
    if ((safe_mod_func_uint64_t_u_u(p_12, l_423)))
    {
        unsigned long long l_424 = 0xEB4AD314AB40E4A5LL;
        int *l_425[2];
        int i;
        for (i = 0; i < 2; i++)
            l_425[i] = &g_76;
        p_12 = func_40(l_424);
        for (l_423 = (-24); (l_423 >= 12); l_423 = safe_add_func_int16_t_s_s(l_423, 7))
        {
            for (g_414 = 0; (g_414 == 11); g_414 = safe_add_func_int32_t_s_s(g_414, 6))
            {
                l_425[0] = (void*)0;
            }
            (*p_11) = &g_22;
        }
        for (l_424 = 16; (l_424 > 52); l_424 = safe_add_func_uint64_t_u_u(l_424, 1))
        {
            unsigned l_440[9] = {0x02563EA5L, 0UL, 0x02563EA5L, 0UL, 0x02563EA5L, 0UL, 0x02563EA5L, 0UL, 0x02563EA5L};
            int * const l_441 = &g_76;
            int i;
            for (p_12 = 1; (p_12 >= 0); p_12 -= 1)
            {
                long long l_433 = 0xB1AD99CC62D62753LL;
                l_432 |= p_12;
                (*p_11) = func_50(l_433, (((safe_sub_func_int32_t_s_s(l_423, (l_433 | (safe_lshift_func_uint16_t_u_u((g_406 > 0x3E30AB47L), 8))))) ^ (l_433 && (0xAA17D50CL || (g_47 ^ (p_12 > p_12))))) ^ g_22), p_12, l_441);
                (*l_441) = l_433;
                for (g_414 = 0; (g_414 <= 1); g_414 += 1)
                {
                    const int **l_450 = (void*)0;
                    int i, j, k;
                    if (g_81[(p_12 + 1)][g_414][p_12])
                        break;
                    (*g_24) = func_36((p_12 < (safe_mul_func_uint8_t_u_u((&g_417[4][0] == (void*)0), (safe_sub_func_int8_t_s_s(g_3, 0x41L))))), func_26((((safe_rshift_func_uint8_t_u_s((p_12 == g_81[(p_12 + 1)][g_414][p_12]), 1)) > p_12) & (safe_sub_func_uint32_t_u_u(4294967295UL, g_218))), g_3, l_450, &g_25), p_12);
                    (*p_11) = (*g_84);
                    for (l_423 = 0; (l_423 <= 1); l_423 += 1)
                    {
                        int **l_451[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_451[i] = &g_25;
                        (*g_24) = l_441;
                        return (*p_11);
                    }
                }
            }
            return l_425[0];
        }
        (*g_24) = &g_47;
    }
    else
    {
        unsigned l_462 = 0xD4D6F474L;
        int *l_464 = &g_3;
        unsigned char l_473 = 255UL;
        int *l_483 = &g_218;
        const long long l_484 = (-1L);
        int l_558 = (-7L);
        int *l_562 = &g_22;
        unsigned char l_592 = 0x71L;
        if ((func_55(l_462, l_464, g_218) <= (*l_464)))
        {
            l_464 = (void*)0;
        }
        else
        {
            int * const l_482 = (void*)0;
            int * const l_516 = &g_218;
            int *l_518 = &g_76;
            int ***l_528 = &g_24;
            if ((safe_unary_minus_func_int8_t_s((safe_add_func_uint64_t_u_u(p_12, l_484)))))
            {
                int l_485[3][2][10] = {{{1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}, {1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}}, {{1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}, {1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}}, {{1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}, {1L, 0x3DF5487CL, (-1L), 0x3DF5487CL, 1L, 0x9CAD8E44L, 9L, 0x3DF5487CL, 0x6C908BA9L, 0x3DF5487CL}}};
                int *l_496 = &g_47;
                int i, j, k;
                (*l_483) &= l_485[2][0][7];
                (**l_468) = &p_12;
                (*g_24) = func_50((*l_464), (((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u(0x0947880312BF4D74LL, ((l_485[1][1][8] == (((safe_mul_func_int16_t_s_s(g_22, (safe_mul_func_int8_t_s_s(p_12, ((((*p_11) == l_496) <= (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((**g_24) == ((~(safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(0x4994C722F9254335LL, g_47)), g_406))) ^ g_76)) || (**g_24)), 0x53L)), (*l_483)))) && g_7))))) || 0xF0A1L) < 0x4E22B8D7A3DE2DDBLL)) >= (***l_468)))) < l_505) | g_406), p_12)), 0x1FL)) < (***l_468)) <= (***l_468)), p_12, (*g_84));
                for (g_7 = (-7); (g_7 == (-18)); --g_7)
                {
                    char l_513[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_513[i] = 0xF0L;
                    for (g_22 = (-20); (g_22 == (-3)); g_22 = safe_add_func_int16_t_s_s(g_22, 9))
                    {
                        unsigned char l_512 = 249UL;
                        int *l_517[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i;
                        (*p_11) = (*g_24);
                        l_513[2] &= ((safe_lshift_func_int16_t_s_u(p_12, (*l_483))) && (!(l_512 | func_40(((*g_24) == (*g_84))))));
                        (**l_468) = l_496;
                        (*l_518) |= (l_518 == (*g_24));
                    }
                    if ((*g_265))
                        break;
                    for (g_218 = 20; (g_218 <= (-28)); g_218 = safe_sub_func_int32_t_s_s(g_218, 7))
                    {
                        int ** const l_525 = (void*)0;
                        int *l_529 = &g_88;
                        (*g_84) = (*p_11);
                        if ((*g_265))
                            continue;
                        (*l_529) |= (safe_sub_func_int16_t_s_s(((g_3 || p_12) && (((safe_mod_func_uint64_t_u_u((((*l_464) | 0x83L) >= (l_525 == p_10)), g_290)) >= (safe_sub_func_uint64_t_u_u(0UL, (((l_528 != &p_11) > (*l_496)) | 0x83C68033L)))) != (*l_518))), 65535UL));
                        (*l_529) &= (&l_525 != (void*)0);
                    }
                }
            }
            else
            {
                unsigned char l_552 = 0UL;
                unsigned l_581 = 6UL;
                const int *l_582 = &g_47;
                int l_583 = 9L;
                (**l_528) = l_483;
                for (g_406 = 0; (g_406 >= 58); ++g_406)
                {
                    const unsigned char l_546 = 6UL;
                    int l_559 = (-8L);
                }
                (*p_11) = func_59(l_582, (*g_84), p_12, &g_417[2][7], (*l_468));
                l_583 &= (*l_516);
            }
            (*l_562) = (*g_578);
            p_12 = (-6L);
            (*g_84) = func_59((*g_24), func_50(g_290, g_47, ((*p_11) == (**l_528)), (*g_24)), g_22, l_584, &l_562);
        }
        if ((safe_div_func_uint16_t_u_u((g_414 && (**l_533)), g_81[1][0][1])))
        {
            for (g_47 = 0; (g_47 > 14); g_47 = safe_add_func_uint32_t_u_u(g_47, 4))
            {
                int *l_591 = &g_47;
                return l_591;
            }
        }
        else
        {
            (*g_578) = l_592;
            (*l_562) = 0L;
        }
        for (g_532 = (-26); (g_532 >= 56); g_532 = safe_add_func_int32_t_s_s(g_532, 3))
        {
            (*l_483) ^= (safe_lshift_func_uint16_t_u_u(((**l_533) ^ g_22), (l_597 == (+0x4037D151L))));
        }
    }
    return l_598;
}







static int ** func_13(int p_14)
{
    for (p_14 = 0; (p_14 < 12); ++p_14)
    {
        unsigned l_20 = 0x25CF162CL;
        int **l_23 = (void*)0;
        for (g_7 = 11; (g_7 < 6); g_7--)
        {
            int *l_21 = &g_22;
            (*l_21) = l_20;
            return l_23;
        }
    }
    return g_24;
}







static int ** func_26(char p_27, unsigned p_28, const int ** p_29, int ** p_30)
{
    long long l_309[3];
    int *l_311[5] = {&g_76, &g_76, &g_76, &g_76, &g_76};
    unsigned long long l_361 = 0x90E4931B0B802A46LL;
    int * const *l_418[4];
    int i;
    for (i = 0; i < 3; i++)
        l_309[i] = 0x41639376027655B9LL;
    for (i = 0; i < 4; i++)
        l_418[i] = &l_311[2];
    (*p_30) = (void*)0;
    for (g_76 = 1; (g_76 < 8); g_76 = safe_add_func_int64_t_s_s(g_76, 4))
    {
        unsigned char l_318 = 251UL;
        long long l_322 = (-1L);
        int **l_325 = &g_25;
        int l_327 = 0xF851A6A6L;
        if (((4294967289UL && 0L) && l_309[1]))
        {
            const int *l_310 = &g_218;
            int l_319 = (-9L);
            int *l_326[7][2] = {{(void*)0, &g_88}, {(void*)0, &g_88}, {(void*)0, &g_88}, {(void*)0, &g_88}, {(void*)0, &g_88}, {(void*)0, &g_88}, {(void*)0, &g_88}};
            int **l_390 = &l_311[4];
            int i, j;
            (*g_24) = func_59(l_310, l_311[4], g_81[2][3][1], &g_25, p_30);
            if ((g_80 ^ (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_81[2][0][1], ((0xA78A4743BEBD9D38LL | (g_47 >= g_218)) & (safe_rshift_func_uint8_t_u_s(p_27, ((*l_310) < g_218)))))), ((l_318 <= 1L) != g_76)))))
            {
                l_319 ^= l_318;
            }
            else
            {
                g_290 ^= (safe_rshift_func_uint8_t_u_s((*l_310), 3));
            }
            if ((p_27 <= (g_290 == l_322)))
            {
                unsigned l_330 = 0xE036F13BL;
                int l_338 = 0L;
                unsigned l_353 = 0xBE8735A3L;
                int **l_389 = &l_326[1][0];
                for (g_218 = 0; (g_218 >= 15); ++g_218)
                {
                    if ((l_325 != &g_265))
                    {
                        g_290 &= (*g_265);
                        (*p_30) = l_326[5][0];
                    }
                    else
                    {
                        g_47 &= (*g_265);
                        l_327 = (-4L);
                    }
                }
                if (((safe_sub_func_int64_t_s_s(p_27, p_27)) < 0xC9L))
                {
                    unsigned l_331 = 4294967292UL;
                    int l_337 = 5L;
                    int **l_341 = (void*)0;
                    if ((*g_265))
                    {
                        long long l_336 = 0x32836C0D3BAF933ELL;
                        g_218 = l_330;
                        if (p_28)
                            break;
                        g_88 &= l_331;
                        l_337 |= ((p_28 == (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_331, l_336)), 14))) && (0x357069F2L ^ g_218));
                    }
                    else
                    {
                        l_338 &= (~(0x377B8471116EBA59LL <= 0x795F71308A2A7BF1LL));
                        l_327 = ((safe_mul_func_int8_t_s_s(g_76, 0x53L)) <= p_27);
                        (*l_325) = (*g_84);
                    }
                    for (l_337 = (-14); (l_337 != 18); ++l_337)
                    {
                        unsigned short l_352 = 65530UL;
                        l_352 &= (0x74D165CD4AB566C3LL <= (safe_mul_func_uint16_t_u_u((g_3 ^ (safe_sub_func_uint64_t_u_u(g_290, (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_47, 10)), (((l_330 | p_27) > g_81[0][2][0]) > p_28)))))), (0xED89L < p_27))));
                        l_353 &= (*g_265);
                    }
                }
                else
                {
                    unsigned short l_354 = 65529UL;
                    int l_359[5][10][5] = {{{2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}}, {{2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}}, {{2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}}, {{2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}}, {{2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}, {2L, 0x55BD646EL, (-1L), 0x09196A86L, 0L}}};
                    unsigned short l_387 = 0x674FL;
                    int i, j, k;
                    if (l_354)
                    {
                        unsigned l_360 = 0UL;
                        (*p_30) = (*l_325);
                        l_359[4][9][0] |= (safe_div_func_uint32_t_u_u(g_218, (safe_mul_func_int8_t_s_s((g_290 <= g_76), g_290))));
                        if (l_360)
                            break;
                        l_338 |= (((l_361 == (safe_rshift_func_int8_t_s_u(l_360, p_27))) < 0UL) ^ (safe_mul_func_uint16_t_u_u((0UL > (((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(l_359[4][9][0], p_27)) != p_28), (safe_mul_func_int16_t_s_s(p_27, p_28)))), l_330)) != l_360) != 0UL)), g_47)));
                    }
                    else
                    {
                        unsigned short l_374 = 0x244FL;
                        if (l_374)
                            break;
                    }
                    (*p_30) = func_59((*g_84), (*p_30), ((g_76 && ((*g_265) ^ (*l_310))) != ((void*)0 == &l_319)), &g_25, &g_25);
                    for (p_27 = 0; (p_27 >= (-7)); p_27 = safe_sub_func_uint32_t_u_u(p_27, 3))
                    {
                        int l_388[5][2][6] = {{{7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}, {7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}}, {{7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}, {7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}}, {{7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}, {7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}}, {{7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}, {7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}}, {{7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}, {7L, 7L, 0xA1C2368AL, 0x25DF59A0L, (-6L), 0x25DF59A0L}}};
                        int i, j, k;
                        if (l_359[3][9][2])
                            break;
                        (*g_24) = func_59(func_59((*g_84), (*p_30), ((safe_mul_func_int16_t_s_s(p_27, (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_290, (g_124 > l_330))), (&l_338 != (*p_30)))))) >= (safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_int8_t_s_s(((p_28 != 0L) >= (*g_265)), g_88)) && l_387) & 1UL) >= l_388[3][1][4]) == 1UL), l_359[4][9][0]))), &g_25, l_389), (*l_389), p_27, g_84, l_390);
                    }
                    return p_30;
                }
                (*l_325) = (*p_30);
            }
            else
            {
                int *l_396 = &g_47;
                int ***l_402[6][5] = {{(void*)0, &g_24, &g_84, &g_84, &g_24}, {(void*)0, &g_24, &g_84, &g_84, &g_24}, {(void*)0, &g_24, &g_84, &g_84, &g_24}, {(void*)0, &g_24, &g_84, &g_84, &g_24}, {(void*)0, &g_24, &g_84, &g_84, &g_24}, {(void*)0, &g_24, &g_84, &g_84, &g_24}};
                int i, j;
                (*p_30) = func_59((*l_390), (*p_30), p_28, &g_25, &l_326[5][0]);
                for (l_322 = 0; (l_322 < 5); l_322++)
                {
                    int **l_397 = &l_396;
                }
                (*l_396) ^= ((safe_unary_minus_func_int16_t_s(p_28)) < 8UL);
                return &g_25;
            }
            (*g_84) = g_417[4][8];
        }
        else
        {
            int l_419 = 1L;
            if ((l_418[1] != p_30))
            {
                if (l_419)
                    break;
            }
            else
            {
                unsigned char l_420 = 0x55L;
                l_419 ^= l_420;
            }
        }
    }
    return &g_417[4][8];
}







static const int ** func_32(int * const p_33, unsigned p_34, unsigned p_35)
{
    int **l_291 = &g_25;
    unsigned short l_296 = 1UL;
    const int **l_306 = (void*)0;
    if ((*p_33))
    {
        int ***l_292 = (void*)0;
        int ***l_293 = &l_291;
        (*l_293) = l_291;
        for (g_290 = 1; (g_290 >= 0); g_290 -= 1)
        {
            unsigned char l_297 = 0x7BL;
            int ***l_303 = &l_291;
            for (g_80 = 0; (g_80 <= 1); g_80 += 1)
            {
                long long l_295 = 0x2765BEE3EAB0AF10LL;
                int *l_298 = &g_218;
                for (g_124 = 0; (g_124 <= 1); g_124 += 1)
                {
                    int i, j, k;
                    (*l_293) = &g_25;
                    g_47 = g_81[(g_80 + 2)][g_124][g_124];
                    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
                    {
                        int *l_294 = &g_47;
                        (*l_294) = 0x939ED9BCL;
                        (*g_84) = (void*)0;
                    }
                }
                if (l_295)
                    break;
                (*l_293) = &g_25;
                l_297 ^= (g_47 == (g_81[0][1][1] >= l_296));
                for (l_297 = 0; (l_297 <= 1); l_297 += 1)
                {
                    for (g_76 = 1; (g_76 >= 0); g_76 -= 1)
                    {
                        (*l_291) = l_298;
                    }
                    for (g_47 = 1; (g_47 >= 0); g_47 -= 1)
                    {
                        int i, j, k;
                        if (g_81[l_297][(g_290 + 1)][l_297])
                            break;
                        g_88 = ((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(g_81[2][3][1], g_290)), ((((0x985221F519DDE955LL || g_81[l_297][(g_290 + 1)][l_297]) ^ ((((~(l_297 ^ (4UL > g_80))) && (l_303 == (void*)0)) >= g_88) <= g_290)) > (*p_33)) < 0x20992E8C8DB16D8ELL))) == 0x9532768AL);
                        if (g_81[l_297][(g_290 + 1)][l_297])
                            continue;
                    }
                }
            }
            return &g_265;
        }
    }
    else
    {
        (*p_33) |= (safe_lshift_func_uint8_t_u_u(0x63L, p_34));
    }
    return l_306;
}







static int * func_36(const short p_37, int ** p_38, unsigned p_39)
{
    int *l_288 = (void*)0;
    int *l_289 = &g_290;
    (*l_289) ^= func_40((safe_add_func_uint8_t_u_u(252UL, g_3)));
    return l_289;
}







static int func_40(short p_41)
{
    int **l_44 = &g_25;
    int * const l_204 = &g_3;
    int l_259 = 0x6E68A10EL;
    int *l_260[4];
    int *l_278 = &l_259;
    short l_281 = 3L;
    int *l_286 = &g_88;
    int l_287 = 0x7EF067A4L;
    int i;
    for (i = 0; i < 4; i++)
        l_260[i] = &g_218;
    if (((&g_25 == l_44) >= 0xEEDA7DA9L))
    {
        int *l_45 = &g_3;
        int *l_46 = &g_47;
        (*l_46) ^= ((*l_44) == l_45);
        for (g_47 = (-20); (g_47 == 11); g_47 = safe_add_func_uint64_t_u_u(g_47, 3))
        {
            int *l_65 = &g_47;
        }
        (*l_46) |= (safe_sub_func_int8_t_s_s((~(safe_mod_func_int64_t_s_s((p_41 >= (0xF6F5AAAE0652BE24LL <= (safe_unary_minus_func_uint16_t_u(g_218)))), 0xEBAF8E3876213B6CLL))), ((g_76 | p_41) && ((void*)0 == &l_45))));
        (*g_24) = (void*)0;
    }
    else
    {
        char l_231 = (-1L);
        const int *l_236 = &g_3;
        for (g_76 = 0; (g_76 <= 1); g_76 += 1)
        {
            int *l_224 = &g_3;
            unsigned l_244 = 4294967295UL;
            int *l_248[1];
            int i;
            for (i = 0; i < 1; i++)
                l_248[i] = &g_218;
            for (g_88 = 1; (g_88 >= 0); g_88 -= 1)
            {
                int *l_225 = &g_76;
                int **l_233 = &l_224;
                (*l_44) = l_224;
                if ((**g_84))
                    continue;
                if ((**g_84))
                    break;
                for (g_47 = 0; (g_47 <= 1); g_47 += 1)
                {
                    int l_226 = 0x23A20F63L;
                    int i, j, k;
                    (*g_24) = l_225;
                    l_226 ^= g_81[(g_47 + 2)][(g_88 + 1)][g_76];
                }
                for (g_80 = 0; (g_80 <= 1); g_80 += 1)
                {
                    int *l_232 = &g_47;
                    int i, j, k;
                }
            }
            g_88 &= (*l_236);
            if (p_41)
                break;
        }
        for (p_41 = 20; (p_41 == 26); p_41 = safe_add_func_int64_t_s_s(p_41, 1))
        {
            (*l_44) = (*l_44);
            if (p_41)
                break;
            for (g_80 = 0; (g_80 <= 29); ++g_80)
            {
                if (p_41)
                    break;
            }
            (*g_24) = (*l_44);
        }
        for (g_80 = 0; (g_80 != 51); ++g_80)
        {
            if (p_41)
                break;
        }
        g_88 = p_41;
    }
    g_218 &= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_41, (func_55(p_41, (*l_44), p_41) != ((p_41 ^ g_81[0][2][1]) && (+g_47))))), l_259));
    if ((&l_44 != (void*)0))
    {
        int *l_261 = &g_47;
        (*g_24) = l_261;
    }
    else
    {
        char l_262 = 0xAFL;
        int * const l_266 = &g_47;
        l_262 &= p_41;
        for (g_47 = 1; (g_47 <= 28); ++g_47)
        {
            long long l_267[4][2] = {{(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}};
            unsigned l_270 = 0x0E0318DBL;
            int i, j;
            for (g_124 = 0; (g_124 <= 3); g_124 += 1)
            {
                int i;
                (*g_84) = l_260[g_124];
                (*g_84) = func_59(g_265, func_50((*l_204), g_218, p_41, l_266), g_80, &g_25, &g_25);
                if (l_267[1][0])
                {
                    l_44 = (void*)0;
                }
                else
                {
                    (**g_84) &= (safe_lshift_func_uint16_t_u_u(g_76, l_270));
                    return (**g_84);
                }
                for (g_88 = 1; (g_88 >= 0); g_88 -= 1)
                {
                    int i, j, k;
                    (*g_24) = func_50((~0UL), (1UL ^ g_81[g_124][g_88][g_88]), ((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((((~(p_41 != ((p_41 != g_81[g_124][g_88][g_88]) | 0xEEL))) > (**g_84)) == (g_218 && 0xDBL)), 1UL)))) & p_41), (*g_24));
                }
            }
        }
    }
    (*l_278) ^= ((safe_sub_func_int32_t_s_s(p_41, p_41)) != p_41);
    return p_41;
}







static int * func_50(unsigned short p_51, unsigned short p_52, unsigned long long p_53, int * const p_54)
{
    char l_205 = 0xE3L;
    int *l_206 = &g_76;
    short l_207 = 0x3608L;
    (*l_206) = ((0x0BL | (*l_206)) > (*l_206));
    g_218 |= ((((void*)0 != &l_206) <= (((p_52 <= (((l_206 == (void*)0) <= (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0x9473A2E6L, 0xDA43A824L)), g_81[1][2][0])), ((safe_add_func_uint64_t_u_u(((*l_206) || 0L), (-1L))) & 0x3BB65FF7L)))) < (*l_206))) & g_88) & 1UL)) <= g_76);
    return l_206;
}







static unsigned short func_55(char p_56, int * p_57, char p_58)
{
    const unsigned l_71[10] = {4294967295UL, 0x6C84D1B3L, 4294967295UL, 0x6C84D1B3L, 4294967295UL, 0x6C84D1B3L, 4294967295UL, 0x6C84D1B3L, 4294967295UL, 0x6C84D1B3L};
    int **l_85 = (void*)0;
    unsigned l_111 = 5UL;
    int l_139 = 0x3B741B65L;
    long long l_194[8] = {(-1L), 0xEFDAD2A3BAFCB356LL, (-1L), 0xEFDAD2A3BAFCB356LL, (-1L), 0xEFDAD2A3BAFCB356LL, (-1L), 0xEFDAD2A3BAFCB356LL};
    long long l_203 = 0x78783DA1C2317E4DLL;
    int i;
    if ((l_71[6] | l_71[6]))
    {
        const int *l_83[6][9] = {{&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}, {&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}, {&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}, {&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}, {&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}, {&g_3, &g_3, &g_76, &g_3, &g_3, &g_47, &g_76, &g_47, &g_3}};
        int l_90 = 0x0D2C86D4L;
        short l_91[4][10][4] = {{{0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}}, {{0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}}, {{0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}}, {{0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}, {0x55D8L, 0x9F6CL, (-10L), (-1L)}}};
        int l_102[7] = {1L, 1L, 4L, 1L, 1L, 4L, 1L};
        int **l_107[8];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_107[i] = &g_25;
        for (p_58 = 0; (p_58 <= (-15)); p_58--)
        {
            long long l_89[6][3] = {{0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}, {0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}, {0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}, {0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}, {0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}, {0xA6500C2479274D83LL, 0x9AA20CFB035B4089LL, 0xA6500C2479274D83LL}};
            int ***l_103 = &g_84;
            int i, j;
            for (p_56 = 0; (p_56 == (-20)); p_56--)
            {
                int *l_87 = &g_47;
                int **l_86 = &l_87;
                for (g_76 = (-9); (g_76 == 8); g_76 = safe_add_func_int64_t_s_s(g_76, 8))
                {
                    int l_79 = 0L;
                    int *l_82 = &g_47;
                    g_80 = l_79;
                    for (g_80 = 0; (g_80 <= 1); g_80 += 1)
                    {
                        int i, j, k;
                        (*g_24) = l_82;
                        return g_81[(g_80 + 2)][g_80][g_80];
                    }
                    for (l_79 = 1; (l_79 >= 0); l_79 -= 1)
                    {
                        int i, j, k;
                        (*g_24) = func_59(p_57, func_59(l_83[1][6], (*g_24), g_81[(l_79 + 2)][(l_79 + 2)][l_79], g_84, l_85), g_76, l_86, g_24);
                        g_88 = (&g_25 != (void*)0);
                        if (l_89[1][0])
                            continue;
                    }
                }
                l_90 ^= g_81[3][2][0];
            }
            if (l_91[2][0][1])
                break;
            for (l_90 = 18; (l_90 != 14); l_90 = safe_sub_func_uint16_t_u_u(l_90, 2))
            {
                unsigned short l_94 = 0x51AFL;
                int *l_101[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_101[i] = &g_47;
                l_102[0] = ((p_56 != ((l_94 != (safe_div_func_uint64_t_u_u((l_94 >= (p_56 >= l_94)), (safe_mod_func_uint8_t_u_u(5UL, p_58))))) | (safe_sub_func_int64_t_s_s(((l_89[3][0] != ((void*)0 == l_101[1])) & 0x61C4DE7E0673044DLL), p_56)))) != p_56);
                if (p_56)
                    break;
                return g_3;
            }
            (*l_103) = &g_25;
        }
        if ((safe_div_func_int8_t_s_s(g_3, g_80)))
        {
            int *l_109 = &g_3;
            int **l_108 = &l_109;
            for (p_56 = 0; (p_56 <= 1); p_56 += 1)
            {
                long long l_106 = 0x80B9C827B285FCF4LL;
                for (g_76 = 5; (g_76 >= 1); g_76 -= 1)
                {
                    for (p_58 = 5; (p_58 >= 0); p_58 -= 1)
                    {
                        int i, j, k;
                        if (g_81[(p_56 + 1)][(p_56 + 2)][p_56])
                            break;
                    }
                    for (p_58 = 1; (p_58 >= 0); p_58 -= 1)
                    {
                        int i, j;
                        if (p_56)
                            break;
                    }
                }
                l_102[1] ^= l_106;
                for (l_106 = 1; (l_106 >= 0); l_106 -= 1)
                {
                    int **l_110 = &l_109;
                    int i, j;
                    (*g_84) = func_59(l_83[(l_106 + 3)][(l_106 + 6)], func_59(p_57, (*g_84), g_88, &p_57, l_107[3]), l_106, l_108, l_110);
                    for (l_90 = 1; (l_90 >= 0); l_90 -= 1)
                    {
                        l_111 |= (*l_109);
                    }
                }
            }
            (*g_24) = func_59((*g_84), (*g_84), (safe_add_func_int16_t_s_s((4294967294UL == ((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((g_76 || ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((p_56 && (g_124 <= p_58)) == p_56), p_58)), p_58)) | p_58)), p_56)) < p_58), p_58)) == p_56)), 0x78ACL)), &g_25, l_85);
            l_139 = (safe_lshift_func_uint8_t_u_s((&l_85 != (void*)0), ((safe_mod_func_uint32_t_u_u(g_47, (((((safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((void*)0 != (*g_84)), (g_47 ^ ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(65535UL, (g_3 >= ((g_47 < (*l_109)) | 255UL)))), p_58)) <= p_56)))), (-9L))), 0x620E12151E35FF2BLL)) == g_3) >= (-6L)) ^ g_80) & 1L))) ^ g_81[2][2][0])));
            l_139 |= (safe_mul_func_int8_t_s_s(((void*)0 == &l_108), p_58));
        }
        else
        {
            unsigned l_150 = 4294967289UL;
            int *l_154 = &l_102[0];
            int **l_153[6] = {&l_154, (void*)0, &l_154, (void*)0, &l_154, (void*)0};
            int i;
            g_88 = 0x2AEEF225L;
            for (l_139 = 0; (l_139 > (-14)); l_139--)
            {
                int * const *l_147[6] = {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25};
                int * const **l_146 = &l_147[5];
                int **l_156 = &l_154;
                int i;
                g_88 &= ((safe_mul_func_int16_t_s_s(((void*)0 != l_146), (safe_mul_func_uint16_t_u_u(l_150, g_47)))) & (p_57 == p_57));
                if (l_150)
                    continue;
                for (l_150 = 0; (l_150 > 31); ++l_150)
                {
                    int **l_155 = &g_25;
                    (*g_24) = func_59(func_59((*g_24), &l_139, g_124, &g_25, l_155), &g_88, g_88, l_156, &l_154);
                }
            }
        }
    }
    else
    {
        char l_157 = (-4L);
        int l_188 = 1L;
        char l_191 = (-6L);
        l_157 = 0x2F5C3AA7L;
        for (p_58 = 1; (p_58 >= 0); p_58 -= 1)
        {
            unsigned char l_158 = 0xD6L;
            int *l_159 = &g_88;
            int l_169[8] = {0x9354FBC6L, 0x9354FBC6L, 9L, 0x9354FBC6L, 0x9354FBC6L, 9L, 0x9354FBC6L, 0x9354FBC6L};
            int i;
            (*l_159) &= l_158;
            if (l_157)
                break;
            if (l_157)
                continue;
            for (g_88 = 1; (g_88 >= 0); g_88 -= 1)
            {
                unsigned long long l_164[7] = {0x697FC644E58EE9C4LL, 0x697FC644E58EE9C4LL, 0x183001FCD465C56CLL, 0x697FC644E58EE9C4LL, 0x697FC644E58EE9C4LL, 0x183001FCD465C56CLL, 0x697FC644E58EE9C4LL};
                int i;
                l_169[3] ^= (safe_add_func_int8_t_s_s(g_81[3][2][1], (((safe_add_func_int64_t_s_s(l_164[0], ((l_164[0] > (0UL < (g_80 ^ g_76))) > ((0xBD20L == l_157) >= (safe_rshift_func_uint16_t_u_u(((*l_159) == 3UL), 1)))))) <= 1UL) && l_164[0])));
                for (g_80 = 0; (g_80 <= 1); g_80 += 1)
                {
                    int i, j, k;
                    l_139 = g_81[(g_88 + 1)][(g_88 + 2)][g_80];
                }
                if ((*l_159))
                    break;
                if ((*l_159))
                    continue;
                for (l_139 = 0; (l_139 <= 1); l_139 += 1)
                {
                    long long l_170 = 0x21537E41DE62A754LL;
                    int *l_171 = &l_169[2];
                    if (l_170)
                        break;
                    (*l_171) |= 0xF2D70274L;
                    (*l_171) = ((!(g_3 < ((safe_mod_func_uint8_t_u_u(g_80, g_81[3][1][1])) & l_157))) & (safe_mul_func_uint8_t_u_u(0xEEL, p_58)));
                    l_188 = ((safe_rshift_func_uint16_t_u_s(((-7L) <= (safe_mul_func_uint8_t_u_u((l_157 & 0UL), g_88))), ((safe_sub_func_uint16_t_u_u((p_58 < ((g_47 <= (safe_mod_func_uint32_t_u_u(g_47, ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_157, 2)), 4)) | 0x1EA3L)))) && 0x8AL)), 1UL)) <= 0x753EL))) > 253UL);
                }
            }
        }
        l_191 &= (safe_rshift_func_uint16_t_u_s(p_56, 5));
        for (l_157 = (-17); (l_157 > 2); l_157 = safe_add_func_uint8_t_u_u(l_157, 7))
        {
            int ** const *l_195 = &g_84;
            l_188 = (l_194[5] > (l_195 == (void*)0));
        }
    }
    for (g_124 = 0; (g_124 >= 4); g_124 = safe_add_func_uint16_t_u_u(g_124, 1))
    {
        int *l_200 = &g_76;
        int **l_201 = (void*)0;
        for (g_76 = 0; (g_76 >= 11); g_76 = safe_add_func_uint16_t_u_u(g_76, 8))
        {
            int **l_202 = &g_25;
            for (l_139 = 5; (l_139 >= 0); l_139 -= 1)
            {
                int i;
                (*g_84) = &g_3;
            }
        }
    }
    return l_203;
}







static int * func_59(const int * p_60, int * p_61, unsigned p_62, int ** p_63, int ** p_64)
{
    char l_66 = 0xB5L;
    int *l_67[3][2][2];
    short l_68 = 0xABC0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_67[i][j][k] = (void*)0;
        }
    }
    l_68 ^= l_66;
    for (p_62 = (-8); (p_62 >= 36); ++p_62)
    {
        (*g_24) = (*g_24);
    }
    return (*p_63);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_81[i][j][k], "g_81[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
