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



static int g_3 = 0L;
static int g_25[2][10] = {{0L, 1L, 0x9CA3191BL, 0xF63588C5L, 0x4E797535L, 0x9FE57F6CL, 0x4E797535L, 0xF63588C5L, 0x9CA3191BL, 1L}, {0L, 1L, 0x9CA3191BL, 0xF63588C5L, 0x4E797535L, 0x9FE57F6CL, 0x4E797535L, 0xF63588C5L, 0x9CA3191BL, 1L}};
static int *g_27[1] = {&g_25[1][6]};
static int **g_26 = &g_27[0];
static int g_29 = 4L;
static unsigned short g_48 = 0xF9F4L;
static unsigned long long g_72[1] = {0UL};
static unsigned short g_92 = 0xCEE5L;
static unsigned short g_94[7][5] = {{6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}, {6UL, 1UL, 6UL, 1UL, 6UL}};
static unsigned short g_97 = 0UL;
static unsigned short *g_96 = &g_97;
static unsigned short **g_95 = &g_96;
static unsigned char g_108 = 0x69L;
static char g_122 = 0L;
static char g_144 = 0x0CL;
static long long g_163 = 2L;
static long long *g_162 = &g_163;
static unsigned g_170 = 4294967295UL;
static int *g_174 = (void*)0;
static short g_191 = 8L;
static int g_210 = 0L;
static int *g_335 = &g_25[1][0];
static unsigned ***g_366 = (void*)0;
static unsigned long long **g_495 = (void*)0;
static unsigned char g_584 = 255UL;
static unsigned *g_626 = (void*)0;
static unsigned **g_625 = &g_626;
static unsigned char g_641 = 255UL;
static int g_644 = 0x9990502BL;
static int *g_660 = &g_3;
static int **g_659[10] = {&g_660, &g_660, &g_660, &g_660, &g_660, &g_660, &g_660, &g_660, &g_660, &g_660};
static long long g_673 = 1L;
static short g_686[1][4] = {{1L, 1L, 1L, 1L}};
static unsigned char *g_692 = &g_108;
static int g_704 = 1L;
static char *g_794 = &g_144;
static char **g_793 = &g_794;
static unsigned char g_804[8] = {0UL, 0xF6L, 0UL, 0xF6L, 0UL, 0xF6L, 0UL, 0xF6L};
static unsigned short g_805 = 0xB61DL;
static unsigned short ****g_846[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static short g_849[9] = {(-6L), 1L, (-6L), 1L, (-6L), 1L, (-6L), 1L, (-6L)};



static int func_1(void);
static int ** func_4(long long p_5, unsigned char p_6, unsigned short p_7, long long p_8, int * p_9);
static unsigned char func_10(int ** p_11, char p_12, unsigned long long p_13);
static int ** func_14(int ** p_15, int p_16, unsigned p_17, int p_18, int ** p_19);
static int ** func_20(int p_21, int ** p_22, int * p_23);
static int * func_32(unsigned short p_33, int ** p_34, int * p_35);
static unsigned short func_36(char p_37, short p_38, long long p_39, int ** p_40, long long p_41);
static int ** func_49(unsigned short p_50);
static unsigned char func_61(int ** p_62, int p_63);
static int ** func_64(long long p_65, int * p_66, int * p_67);
static int func_1(void)
{
    int *l_2 = (void*)0;
    int *l_28[5];
    short l_42 = 0x339BL;
    unsigned char l_43 = 0xE0L;
    int ***l_912 = &g_26;
    unsigned l_913 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 5; i++)
        l_28[i] = &g_29;
    g_3 |= (-2L);
    (*l_912) = func_4((func_10(func_14(func_20(g_3, &l_2, (l_2 = l_2)), (l_28[0] == (void*)0), (safe_add_func_uint64_t_u_u(g_29, g_3)), ((((*g_26) = func_32(func_36(g_29, g_29, l_42, &g_27[0], l_43), &g_27[0], (*g_26))) != l_28[0]) && g_29), &l_28[0]), l_42, l_43) <= g_108), l_43, l_43, l_42, g_174);


    ;

    return l_913;
}







static int ** func_4(long long p_5, unsigned char p_6, unsigned short p_7, long long p_8, int * p_9)
{
    unsigned long long *l_518 = (void*)0;
    unsigned long long **l_517 = &l_518;
    unsigned **l_521 = (void*)0;
    int l_522[9][4][7] = {{{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}, {{0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}, {0xA76985ACL, (-1L), (-1L), (-9L), 0xB59CE29AL, (-9L), (-1L)}}};
    short **l_523 = (void*)0;
    int **l_524 = &g_27[0];
    unsigned short l_564 = 0UL;
    char *l_628 = (void*)0;
    int **l_663 = &g_660;
    int l_674 = 1L;
    short l_688 = 0L;
    unsigned char l_696 = 0x5FL;
    unsigned short ***l_800 = (void*)0;
    unsigned short **l_826[3][5][5] = {{{&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}}, {{&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}}, {{&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}, {&g_96, &g_96, (void*)0, &g_96, (void*)0}}};
    short l_832 = 0xD761L;
    unsigned l_845[4][1] = {{18446744073709551607UL}, {18446744073709551607UL}, {18446744073709551607UL}, {18446744073709551607UL}};
    unsigned l_894 = 18446744073709551609UL;
    int i, j, k;
    if (((((l_517 == &l_518) && ((((1L ^ ((&p_6 == &g_108) & p_5)) ^ (g_94[1][3] || (((*g_335) = (((safe_rshift_func_int16_t_s_s((-1L), 0)) | (l_521 == (void*)0)) || 1UL)) | l_522[6][2][2]))) || 0x91D3C02AL) || l_522[6][2][2])) >= p_8) & 4UL))
    {
        int **l_525 = &g_335;
        short *l_536 = &g_191;
        unsigned long long *l_537 = &g_72[0];
        char *l_538[2];
        unsigned char *l_539 = &g_108;
        int *l_540 = &l_522[6][3][4];
        char *l_561 = &g_144;
        char **l_560[7][7] = {{&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561, &l_561}};
        unsigned long long l_579 = 1UL;
        unsigned *l_622 = &g_170;
        unsigned **l_621 = &l_622;
        int i, j;
        for (i = 0; i < 2; i++)
            l_538[i] = &g_144;
        (*l_525) = ((*l_524) = func_32(((*g_96) = (l_523 != l_523)), l_524, p_9));
        (*l_540) ^= (((((void*)0 == &l_525) | (safe_rshift_func_int8_t_s_s(p_7, 6))) == ((*l_539) = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(p_6, 1)), 5)), 7)) != (((-9L) <= (**l_525)) != (g_144 = (g_122 = (((safe_mod_func_uint64_t_u_u(((*l_537) = (((((*g_96) = p_6) > func_36(p_5, ((*l_536) = (**l_525)), (*g_162), l_524, p_5)) || p_6) <= 0xC7DBB01AL)), p_6)) <= (**l_525)) != 0x7EL))))))) <= p_8);
        for (g_3 = 0; (g_3 >= 9); g_3++)
        {
            unsigned short **l_547 = &g_96;
            int l_548 = 1L;
            (*l_525) = (*g_26);
            (*l_540) ^= ((*g_335) = (safe_lshift_func_uint16_t_u_s(((*g_96) = (safe_mul_func_int8_t_s_s((g_72[0] >= (255UL > (((void*)0 == l_547) != (**l_525)))), ((**l_524) || p_8)))), 6)));
            (*l_540) |= p_5;
            (**l_525) = l_548;
        }
        for (g_3 = 0; (g_3 >= 12); g_3++)
        {
            char **l_557 = (void*)0;
            char **l_558 = (void*)0;
            char **l_559 = &l_538[1];
            int ***l_562 = &g_26;
            short l_563 = (-1L);
            int l_611 = (-6L);
        }
    }
    else
    {
        unsigned l_645 = 0xA545B287L;
        int *l_655 = &l_522[3][0][5];
        char *l_656 = &g_122;
        int l_738[8] = {0x372766B8L, 1L, 0x372766B8L, 1L, 0x372766B8L, 1L, 0x372766B8L, 1L};
        char l_757 = 0xB0L;
        int i;
        for (g_210 = 0; (g_210 == 25); g_210 = safe_add_func_int64_t_s_s(g_210, 6))
        {
            unsigned l_627[9][7][4] = {{{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}, {{3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}, {3UL, 7UL, 4294967289UL, 0x08D4367AL}}};
            char *l_629[6] = {&g_144, &g_122, &g_144, &g_122, &g_144, &g_122};
            int *l_630 = &l_522[6][2][2];
            int i, j, k;
            (*l_524) = (*g_26);
            (*l_630) ^= ((*g_335) = (((l_627[1][2][0] |= func_10(&g_27[0], (g_625 == l_521), p_8)) != (g_163 | (0xEF848B9DF2D1978CLL >= (l_628 == l_629[2])))) || 1L));
        }
        for (g_108 = (-7); (g_108 >= 6); g_108++)
        {
            int *l_635 = &l_522[6][2][2];
            int l_642 = 0xCD68C35CL;
            char *l_652[1];
            int i;
            for (i = 0; i < 1; i++)
                l_652[i] = &g_122;
            for (p_6 = 0; (p_6 != 11); p_6 = safe_add_func_uint16_t_u_u(p_6, 5))
            {
                (*g_26) = l_635;
            }
            for (g_584 = 16; (g_584 <= 24); g_584 = safe_add_func_uint64_t_u_u(g_584, 1))
            {
                int **l_638 = &l_635;
                int *l_643 = &g_644;
            }
            (*l_524) = func_32((0x1655B606FC880666LL & ((safe_add_func_int64_t_s_s((+(((safe_sub_func_int64_t_s_s((*l_635), ((((!0xC4FE8095E9CFFED7LL) ^ 1L) || p_7) & (*g_162)))) < (safe_mul_func_uint16_t_u_u(((&g_122 != l_652[0]) > (safe_mod_func_uint32_t_u_u(p_8, 0x5D36D8FBL))), (*g_96)))) | (**g_95))), 18446744073709551615UL)) < p_6)), l_524, l_655);
            (*g_26) = p_9;
        }


        (*g_335) = (l_656 == &g_122);
        for (g_644 = 0; (g_644 <= 1); g_644 += 1)
        {
            int l_664 = 0x55C0EEADL;
            int **l_668 = &g_174;
            int l_707 = 0L;
            unsigned short ***l_727 = (void*)0;
            unsigned short ***l_728[10][5] = {{&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95, &g_95, &g_95}};
            int l_769 = (-1L);
            int i, j;
        }
    }


    (*g_335) |= 0xE33CBB81L;
    for (p_6 = 0; (p_6 < 15); p_6 = safe_add_func_uint8_t_u_u(p_6, 2))
    {
        int l_786 = 0x85F3E9CDL;
        int **l_790 = (void*)0;
        char **l_792 = &l_628;
        unsigned short l_801[10] = {1UL, 1UL, 65535UL, 1UL, 1UL, 65535UL, 1UL, 1UL, 65535UL, 1UL};
        int **l_803[2][6][7] = {{{&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}}, {{&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}, {&g_335, &g_27[0], &g_335, &g_174, (void*)0, &g_335, (void*)0}}};
        char l_813[9][7][4] = {{{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}, {{0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}, {0x27L, (-2L), 0x5EL, 0x15L}}};
        int l_905 = (-1L);
        int i, j, k;
    }
    return &g_335;



}







static unsigned char func_10(int ** p_11, char p_12, unsigned long long p_13)
{
    unsigned long long *l_497[9];
    unsigned long long **l_496 = &l_497[1];
    int l_500 = 7L;
    int l_513 = 0x7F61878CL;
    int l_514 = (-4L);
    unsigned long long l_515 = 3UL;
    int ***l_516 = &g_26;
    int i;
    for (i = 0; i < 9; i++)
        l_497[i] = &g_72[0];
    (*p_11) = func_32(((**g_95) = 0x66AEL), ((*l_516) = func_64((safe_mul_func_int16_t_s_s((((g_495 == l_496) && p_12) & p_12), (safe_add_func_int64_t_s_s(l_500, (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((func_36(p_13, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_514 = (safe_mul_func_uint16_t_u_u((l_513 = 65535UL), ((l_500 || 5UL) | p_13)))) || 6L), 0x1D7EL)), l_500)), (*g_162), &g_335, p_12) | l_500), p_12)), 3)), l_515)))))), (*p_11), &l_500)), &g_29);
    (*p_11) = (**l_516);
    return p_13;
}







static int ** func_14(int ** p_15, int p_16, unsigned p_17, int p_18, int ** p_19)
{
    int *l_304[4][10] = {{&g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0]}, {&g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0]}, {&g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0]}, {&g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0], &g_25[1][0]}};
    unsigned l_314 = 0xB2C214BEL;
    unsigned *l_408 = (void*)0;
    unsigned *l_409[6] = {&g_170, &g_170, &g_170, &g_170, &g_170, &g_170};
    unsigned **l_413 = &l_408;
    unsigned ***l_412[10][2][6] = {{{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}, {{(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}, {(void*)0, &l_413, &l_413, &l_413, &l_413, &l_413}}};
    int *l_414 = &g_25[1][0];
    unsigned char l_415 = 0x2AL;
    short *l_423 = &g_191;
    short *l_425 = (void*)0;
    unsigned long long *l_428[6][7][3] = {{{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}, {{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}, {{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}, {{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}, {{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}, {{&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}, {&g_72[0], (void*)0, &g_72[0]}}};
    unsigned long long **l_427 = &l_428[0][1][2];
    char l_441[10][4] = {{0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}, {0x27L, (-7L), 0xFBL, 0xACL}};
    unsigned short l_455 = 65533UL;
    int i, j, k;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    {
        unsigned l_46 = 0x09757A83L;
        int l_308 = 0x19096216L;
        unsigned char *l_334 = &g_108;
        int l_336 = (-10L);
        unsigned char l_398 = 5UL;
    }
    if (func_36((safe_add_func_int32_t_s_s((p_16 | (safe_mul_func_uint16_t_u_u(p_16, (safe_mod_func_uint64_t_u_u(p_17, p_17))))), (g_170 |= g_108))), ((((p_17 >= (**g_95)) && (((safe_mul_func_int16_t_s_s(g_92, (func_61(func_20(((*g_335) = func_61(func_20(((**p_19) = (g_366 != l_412[4][0][3])), &g_174, l_414), g_163)), p_15, g_174), g_48) >= 0x0AD142F2L))) ^ p_18) >= p_16)) <= 0L) ^ 0xBC29BCD7L), (*g_162), &g_174, l_415))
    {
        int l_418 = 0x2BF84802L;
        (*l_414) ^= (safe_lshift_func_int8_t_s_s(l_418, 3));
        return p_15;


    }
    else
    {
        unsigned char l_419[8][5][3] = {{{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}, {{6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}, {6UL, 1UL, 0x2BL}}};
        int **l_421 = &l_414;
        int *l_422 = &g_210;
        unsigned long long ***l_433 = &l_427;
        int l_475 = (-9L);
        int i, j, k;
        p_16 = (!((*g_335) = (((g_144 <= l_419[2][0][2]) | (((l_419[2][4][1] || (((~(*l_414)) ^ ((*l_414) | ((**p_19) = (safe_unary_minus_func_int16_t_s(((**p_19) < func_61(&l_304[1][5], ((*l_422) = (((p_16 <= p_17) < p_17) == g_29))))))))) != 255UL)) | g_25[1][0]) | (-1L))) || 1UL)));
        if ((*g_335))
        {
            short **l_424 = &l_423;
            short *l_426 = &g_191;
            int **l_436 = &l_304[1][8];
            int *l_437 = &g_25[1][0];
            (*l_421) = func_32((((*l_424) = l_423) == (l_426 = l_425)), p_19, (*p_19));

            ;
            ;
            for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
            {
                unsigned long long ***l_434 = (void*)0;
                int *l_438 = &g_25[1][0];
                unsigned long long **l_458 = &l_428[1][1][1];
                unsigned **l_473 = &l_409[4];
                (*p_19) = l_408;
                for (g_191 = 0; (g_191 >= 0); g_191 -= 1)
                {
                    unsigned long long ***l_429 = &l_427;
                    unsigned char *l_431 = (void*)0;
                    unsigned char **l_430 = &l_431;
                    unsigned char ***l_432 = &l_430;
                    int l_435 = (-1L);
                    int i, j;
                    (*l_429) = l_427;
                    (*l_432) = l_430;
                    if ((func_61(func_64(func_61(func_64((l_433 == l_434), func_32((l_435 > p_16), &g_27[0], l_304[(g_191 + 3)][(g_3 + 6)]), func_32(p_17, func_64(func_36(p_16, g_94[1][1], p_17, l_436, p_17), l_304[(g_191 + 1)][(g_191 + 9)], g_27[g_191]), l_437)), p_17), &g_29, l_438), p_17) == 0x5BL))
                    {
                        unsigned char *l_448 = &l_419[2][3][2];
                        short l_456 = 0x7830L;
                        int **l_457 = &g_335;
                        long long l_474 = (-1L);
                        (*g_335) = ((safe_mul_func_int16_t_s_s((l_441[0][1] <= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((**g_95), (((*l_448) = g_170) || (safe_rshift_func_int16_t_s_u((func_36(p_16, (safe_mod_func_uint64_t_u_u(((p_16 | (safe_sub_func_int32_t_s_s(l_455, (g_170 = (p_16 | (~(**l_421))))))) == 1UL), (*g_162))), l_456, &g_27[0], p_16) ^ 0x711A9525L), 3))))) >= (*g_162)), (*l_438))) < g_191), 13))), p_17)) <= (**p_15));
                        (**l_436) |= func_61(l_457, ((void*)0 != l_458));
                        l_475 |= (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((g_72[0] <= (safe_rshift_func_uint16_t_u_s(((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((**g_95) = ((func_36(((safe_mod_func_int32_t_s_s((18446744073709551615UL < g_92), (**l_421))) & (((p_17 & (((void*)0 == l_473) >= p_16)) <= (p_16 != (*g_96))) || p_17)), (*l_438), p_18, p_15, (*l_414)) != (*g_96)) == (*l_438))), p_18)), p_18)) ^ 0L) | p_16) != 4294967295UL), 4))), (-2L))), l_474)), (**l_457)));
                    }
                    else
                    {
                        (**l_421) |= (*g_335);
                        return p_15;


                    }
                    for (l_475 = 0; (l_475 <= 3); l_475 += 1)
                    {
                        int i, j;
                        (*l_438) = (**p_15);
                        l_304[l_475][l_475] = (*g_26);
                    }
                }
            }


        }
        else
        {
            for (g_191 = 0; (g_191 >= (-14)); g_191--)
            {
                unsigned l_480 = 0x211D7790L;
                (*g_26) = (*p_15);
                for (g_48 = (-11); (g_48 > 31); g_48++)
                {
                    if ((**p_15))
                        break;
                }
                if (l_480)
                    break;
                return p_15;


            }
            (*p_15) = (*p_15);
            (*g_26) = (*g_26);
        }


        ;
        for (g_191 = 0; (g_191 == 23); g_191 = safe_add_func_uint32_t_u_u(g_191, 1))
        {
            unsigned long long l_491 = 1UL;
            int l_492 = 8L;
            l_475 |= (safe_add_func_uint64_t_u_u(g_170, ((safe_lshift_func_int16_t_s_u(func_36((safe_sub_func_int32_t_s_s((*g_335), (**l_421))), p_16, (**l_421), func_64((l_492 ^= (g_97 | func_36((safe_add_func_int32_t_s_s(((~(**l_421)) ^ p_16), 0x5F51031CL)), p_16, (*g_162), &l_304[1][5], l_491))), (*g_26), (*g_26)), p_18), 2)) ^ 5L)));
            if ((**g_26))
                continue;
            if ((**p_15))
                continue;
        }
    }


    ;
    return p_15;


}







static int ** func_20(int p_21, int ** p_22, int * p_23)
{
    int *l_24 = &g_25[1][0];
    (*l_24) = g_3;
    return g_26;


}







static int * func_32(unsigned short p_33, int ** p_34, int * p_35)
{
    return (*p_34);


}







static unsigned short func_36(char p_37, short p_38, long long p_39, int ** p_40, long long p_41)
{
    int *l_44 = (void*)0;
    int l_45 = (-3L);
    l_45 = (g_29 || (l_44 != (*p_40)));
    return g_3;
}







static int ** func_49(unsigned short p_50)
{
    int *l_68[2];
    int *l_102 = (void*)0;
    long long l_104 = 0x39C8BEE33383FD25LL;
    long long l_178 = 0xE38B7F8293AB6977LL;
    unsigned short *l_220 = (void*)0;
    int l_237 = 0xBF77ECFCL;
    int i;
    for (i = 0; i < 2; i++)
        l_68[i] = &g_25[1][0];
    if ((safe_mul_func_int8_t_s_s(1L, (safe_lshift_func_int16_t_s_u((func_36(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(func_61(func_64(p_50, l_68[0], func_32(g_25[1][0], &g_27[0], ((*g_26) = l_68[0]))), g_29), g_29)), p_50)) || p_50), g_25[1][0], g_3, &l_68[0], p_50) && g_25[1][0]), p_50)))))
    {
        long long l_77 = 1L;
        l_77 &= p_50;
        return &g_27[0];


    }
    else
    {
        int **l_82 = &l_68[0];
        unsigned short **l_87 = (void*)0;
        short l_109 = 1L;
        int l_145 = 0x47C546E7L;
        short l_168 = 0xBE42L;
        unsigned short l_177 = 6UL;
        for (p_50 = 0; (p_50 == 46); ++p_50)
        {
            unsigned short **l_98 = &g_96;
            int l_101 = (-5L);
            int l_124 = 0x4A900533L;
            if ((((safe_mul_func_uint8_t_u_u(func_61(l_82, g_3), (p_50 == (((safe_sub_func_uint32_t_u_u(0x54CDFF18L, 0UL)) >= ((safe_mul_func_uint8_t_u_u(0xFDL, (g_72[0] > p_50))) || p_50)) & p_50)))) < g_25[0][1]) ^ g_25[1][4]))
            {
                unsigned short ***l_88 = &l_87;
                unsigned short *l_91 = &g_92;
                unsigned short *l_93 = &g_94[0][3];
                int *l_103[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_103[i] = &g_25[1][6];
                (*l_88) = l_87;
                l_104 ^= (((func_61(l_82, g_25[0][0]) == (safe_sub_func_int64_t_s_s((((*l_93) = ((*l_91) = p_50)) > 0UL), (((*l_88) = g_95) != l_98)))) < (safe_add_func_int16_t_s_s(l_101, (l_102 == l_103[0])))) || p_50);

                ;
                (*g_26) = (void*)0;
            }
            else
            {
                int *l_125 = &l_124;
                for (g_29 = 0; (g_29 >= 0); g_29 -= 1)
                {
                    unsigned char *l_107[7] = {&g_108, &g_108, &g_108, &g_108, &g_108, &g_108, &g_108};
                    int l_115 = (-1L);
                    int l_120 = 0x00AB6897L;
                    int **l_123 = &l_102;
                    int i;
                    if ((safe_mod_func_uint8_t_u_u((g_108 = (!g_3)), g_25[0][4])))
                    {
                        int i;
                        g_27[g_29] = func_32(p_50, &g_27[0], g_27[g_29]);
                        if (l_109)
                            break;
                    }
                    else
                    {
                        unsigned short l_112[8][8] = {{1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}, {1UL, 0UL, 0x9801L, 65535UL, 6UL, 0xFEADL, 0xFEADL, 6UL}};
                        short *l_116 = (void*)0;
                        short *l_117 = &l_109;
                        char *l_121[2][8] = {{(void*)0, &g_122, (void*)0, &g_122, (void*)0, &g_122, (void*)0, &g_122}, {(void*)0, &g_122, (void*)0, &g_122, (void*)0, &g_122, (void*)0, &g_122}};
                        int i, j;
                        if (l_101)
                            break;
                        (*l_82) = func_32((**g_95), l_123, l_125);
                    }
                }
            }


            ;
            l_101 &= (p_50 || p_50);
            return &g_27[0];


        }
        if ((!(((*g_26) = (void*)0) != l_68[0])))
        {
            long long l_126[10][2] = {{(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}};
            int i, j;
            l_126[7][1] = (-5L);
            (*l_82) = (*l_82);
        }
        else
        {
            long long *l_134 = (void*)0;
            long long *l_135 = &l_104;
            int l_142 = (-8L);
            char *l_143[2][9][2] = {{{&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}}, {{&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}, {&g_122, &g_144}}};
            int **l_147[3][2][6] = {{{&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}, {&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}}, {{&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}, {&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}}, {{&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}, {&l_68[0], &g_27[0], &l_68[0], &g_27[0], &l_68[0], &g_27[0]}}};
            long long l_160[9][7] = {{(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}, {(-1L), 1L, (-1L), 0x2BCBE6FDDE1F1B1ELL, (-1L), (-1L), (-1L)}};
            int i, j, k;
            for (g_92 = 6; (g_92 <= 42); ++g_92)
            {
                long long l_129 = 0x78202B69C37587FDLL;
                l_129 &= 0x6B673D79L;
            }
            l_145 &= (l_142 = (0x3DBE8D7CL || ((((safe_rshift_func_int16_t_s_s(p_50, 15)) < (safe_add_func_int64_t_s_s(((*l_135) = p_50), (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((p_50 >= p_50) && g_122), (((safe_lshift_func_uint8_t_u_s(g_94[3][3], (g_144 = (!l_142)))) < p_50) | g_3))), 0UL))))) != l_142) && 0x7D2885B45BF07671LL)));
            for (p_50 = 0; (p_50 <= 4); p_50 += 1)
            {
                int l_146 = (-5L);
                long long *l_164 = &l_104;
                int *l_173 = &l_142;
                short l_175 = (-3L);
                l_145 = (p_50 & l_146);
            }
            if ((**l_82))
            {
                return &g_27[0];


            }
            else
            {
                l_177 &= (**l_82);
                l_178 ^= (+0x53ABCEACL);
                l_145 ^= p_50;
            }
        }
        l_145 = p_50;
    }
    if (func_61(func_64((*g_162), l_68[0], l_102), (safe_mul_func_uint32_t_u_u(1UL, ((void*)0 == g_96)))))
    {
        int **l_181 = &l_68[0];
        int ***l_182 = (void*)0;
        int ***l_183 = &l_181;
        unsigned char l_186 = 0xCAL;
        int l_232 = (-8L);
        unsigned char l_233 = 0x27L;
        if ((func_61(&l_102, ((func_36(g_72[0], g_25[1][1], (*g_162), ((*l_183) = l_181), ((((0x437FL != (*g_96)) < (safe_mul_func_int16_t_s_s(g_170, (**g_95)))) ^ g_3) > 1UL)) <= 0xAFL) >= 0x1EL)) >= l_186))
        {
            short *l_190 = &g_191;
            unsigned char *l_192 = &g_108;
            int **l_193 = (void*)0;
            unsigned long long *l_194[6] = {&g_72[0], &g_72[0], &g_72[0], &g_72[0], &g_72[0], &g_72[0]};
            int l_195 = 8L;
            unsigned char l_211[4][10] = {{0xF6L, 0xDFL, 0xF6L, 0x21L, 0xE6L, 0xCCL, 4UL, 4UL, 0xCCL, 0xE6L}, {0xF6L, 0xDFL, 0xF6L, 0x21L, 0xE6L, 0xCCL, 4UL, 4UL, 0xCCL, 0xE6L}, {0xF6L, 0xDFL, 0xF6L, 0x21L, 0xE6L, 0xCCL, 4UL, 4UL, 0xCCL, 0xE6L}, {0xF6L, 0xDFL, 0xF6L, 0x21L, 0xE6L, 0xCCL, 4UL, 4UL, 0xCCL, 0xE6L}};
            unsigned *l_215 = &g_170;
            unsigned **l_214 = &l_215;
            unsigned short *l_221[9] = {(void*)0, (void*)0, &g_94[0][3], (void*)0, (void*)0, &g_94[0][3], (void*)0, (void*)0, &g_94[0][3]};
            unsigned short *l_252 = &g_97;
            int **l_254 = (void*)0;
            int i, j;
            if ((l_195 |= (((**l_181) ^ p_50) ^ (safe_unary_minus_func_uint64_t_u((g_72[0] = func_36(g_92, (safe_mul_func_int8_t_s_s(((void*)0 != l_190), ((*l_192) = 0xF8L))), p_50, &g_174, p_50)))))))
            {
                char l_198 = 0xA4L;
                for (l_178 = 9; (l_178 <= (-25)); l_178--)
                {
                    (*g_26) = ((*l_181) = (*g_26));
                }


                l_198 = (!p_50);
            }
            else
            {
                short l_203 = (-8L);
                int *l_208 = (void*)0;
                int *l_209 = &g_210;
                int l_253 = 1L;
                (**l_183) = func_32((**g_95), &g_174, (*g_26));


                if ((safe_sub_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(l_203, ((safe_sub_func_uint16_t_u_u(0x3230L, l_203)) < func_61((l_193 = &l_208), g_72[0])))) == 5L) <= l_203), g_163)))
                {
                    int **l_219 = &l_68[0];
                    int *l_230 = (void*)0;
                    int *l_231 = &l_195;
                    for (g_97 = 6; (g_97 <= 54); g_97 = safe_add_func_uint64_t_u_u(g_97, 2))
                    {
                        unsigned ***l_216 = &l_214;
                        (*l_216) = l_214;
                    }
                    (*l_231) &= ((safe_mod_func_int8_t_s_s(func_61(l_219, (l_220 == (l_221[4] = l_220))), (p_50 && (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_50, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0x8F03L, 5)), (&l_215 == (void*)0))))), g_29))))) == 18446744073709551615UL);
                    return &g_27[0];


                }
                else
                {
                    unsigned short l_234 = 65535UL;
                    int *l_239 = &l_237;
                    l_232 &= 0xE9EDABCFL;
                    l_234 = (l_233 = 1L);
                    for (g_92 = 0; (g_92 <= 0); g_92 += 1)
                    {
                        int **l_238 = &l_68[1];
                        int i;
                        (*l_193) = ((*g_26) = ((**l_183) = func_32(((safe_mul_func_int8_t_s_s(func_36(g_72[g_92], ((void*)0 == &g_163), l_237, l_238, ((*g_162) = p_50)), (g_210 ^ (&g_122 != &g_144)))) != l_234), (*l_183), l_239)));
                        (*l_239) = ((safe_add_func_uint8_t_u_u(1UL, p_50)) >= (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((**g_95), p_50)), ((g_97 == func_61(&g_27[0], ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*g_96) != func_36(p_50, ((*l_190) = (((safe_add_func_uint32_t_u_u((&l_234 != l_252), p_50)) | 0xF5FCE747L) | g_72[0])), (*g_162), &g_174, (*g_162))), 0)), l_253)) > (*l_239)))) || 0x5C4FL))));
                        return &g_27[0];


                    }
                }

                ;
                ;
                l_253 &= ((0xEAF4L ^ (*g_96)) < (-1L));
                l_195 &= func_36((((void*)0 == &l_104) >= g_92), g_144, p_50, (*l_183), (*g_162));
            }



            l_195 = 0x45B5AEDBL;
            l_232 |= ((void*)0 == &l_178);
        }
        else
        {
            long long l_264 = 1L;
            int *l_275 = &g_25[1][0];
            for (g_97 = 0; (g_97 <= 1); g_97 += 1)
            {
                int l_255 = 0x6540DECCL;
                unsigned char *l_260 = (void*)0;
                unsigned char *l_261 = &l_186;
                unsigned short *l_265 = (void*)0;
                unsigned short *l_266 = &g_94[5][3];
                int i;
                l_232 = l_255;
                l_255 = (safe_mod_func_int16_t_s_s(g_122, ((*l_266) = (l_264 = (safe_mul_func_int8_t_s_s(((+((-10L) || ((p_50 > (((*l_261) |= 0x31L) <= (((safe_lshift_func_int16_t_s_s((**l_181), 8)) ^ (***l_183)) != p_50))) > 7UL))) == ((void*)0 != &g_108)), g_72[0]))))));
            }
            (**l_183) = &l_237;


            (*g_26) = func_32((((*g_162) = (safe_mod_func_int64_t_s_s(((l_264 >= (!(safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((p_50 | 0x4DL), ((l_264 > l_264) && func_61(&g_27[0], g_191)))) == (safe_lshift_func_int16_t_s_u((-1L), (*g_96)))), 0x3C976F2AL)))) == p_50), p_50))) > (**l_181)), (*l_183), l_275);


        }



        ;
        l_232 |= ((-1L) > p_50);
        l_232 = p_50;
    }
    else
    {
        unsigned long long l_283 = 0x350418DC97FACF82LL;
        int l_287 = 0x3E7F411AL;
        for (g_97 = 12; (g_97 == 19); g_97 = safe_add_func_uint64_t_u_u(g_97, 9))
        {
            long long l_286 = 0x8C7C0D026D05DBCDLL;
            int l_288[6][1][6] = {{{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}, {{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}, {{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}, {{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}, {{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}, {{0x8F3FBB26L, 0x50BEF6F8L, 7L, 0x50BEF6F8L, 0x8F3FBB26L, 0x7518134EL}}};
            int *l_294 = &g_3;
            short l_300 = 0xD929L;
            int i, j, k;
            for (l_237 = 0; (l_237 >= 0); l_237 -= 1)
            {
                unsigned short **l_280[5][7] = {{&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}, {&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}, {&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}, {&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}, {&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}};
                int *l_289 = &l_288[0][0][4];
                int **l_295 = &l_102;
                int l_303[6] = {0x172DAD6FL, 8L, 0x172DAD6FL, 8L, 0x172DAD6FL, 8L};
                int i, j;
                l_288[4][0][2] ^= (l_287 = (safe_rshift_func_int8_t_s_s(((((l_220 = ((*g_95) = (*g_95))) == &g_94[0][3]) >= (safe_add_func_int32_t_s_s(0x89AC199AL, ((((l_283 >= (((*g_26) != (*g_26)) == l_283)) ^ (p_50 ^ (safe_sub_func_uint16_t_u_u((g_94[2][4] = l_286), l_283)))) < g_92) & g_210)))) | p_50), 2)));

                ;
                for (g_29 = 0; (g_29 <= 0); g_29 += 1)
                {
                    int **l_290 = &g_174;
                    int ***l_291[9][4] = {{&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}, {&g_26, &l_290, (void*)0, (void*)0}};
                    short *l_301 = (void*)0;
                    short *l_302 = &l_300;
                    int i, j;
                    l_289 = &l_237;

                    ;
                    l_303[4] = ((func_61((g_26 = l_290), (safe_mul_func_int16_t_s_s(((*l_302) = func_36((g_144 &= g_29), l_283, (6UL <= (&g_3 != l_294)), (l_295 = &g_27[0]), ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(p_50, p_50)), l_300)) > (-8L)))), 0L))) != g_3) || p_50);

                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;
            ;
            return &g_174;


        }
    }



    ;
    return &g_174;



}







static unsigned char func_61(int ** p_62, int p_63)
{
    int **l_73 = &g_27[0];
    int **l_74 = (void*)0;
    int **l_75[9] = {(void*)0, &g_27[0], (void*)0, &g_27[0], (void*)0, &g_27[0], (void*)0, &g_27[0], (void*)0};
    unsigned short l_76 = 0xA497L;
    int i;
    (*p_62) = func_32(g_72[0], l_73, (*g_26));
    (*l_73) = (*p_62);
    return l_76;
}







static int ** func_64(long long p_65, int * p_66, int * p_67)
{
    int *l_69 = (void*)0;
    int *l_70[9][6][4] = {{{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29, &g_29}}};
    short l_71 = (-1L);
    int i, j, k;
    g_72[0] = (l_71 |= (*p_66));
    return &g_27[0];


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_686[i][j], "g_686[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_704, "g_704", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_804[i], "g_804[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_805, "g_805", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_849[i], "g_849[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
