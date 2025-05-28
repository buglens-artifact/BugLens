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



static int g_2[2] = {0xCFF0EA75L,0xCFF0EA75L};
static int g_43 = 0xCDC0F1FAL;
static int *g_65 = &g_43;
static int **g_64 = &g_65;
static int g_68 = 0xC1F20CF6L;
static long long g_133 = 7L;
static short g_147 = 7L;
static unsigned g_211 = 0x3A65F83DL;
static long long g_305 = 0x011CA84DB45C908ELL;
static int g_434[5][2] = {{6L,0xAE4A5FECL},{6L,6L},{0xAE4A5FECL,6L},{6L,0xAE4A5FECL},{6L,6L}};
static unsigned short g_550 = 0x2638L;
static int g_592 = 0x20AC4414L;
static int g_639[4][7] = {{0x84D10380L,0x47858445L,0x84D10380L,0x84D10380L,0x47858445L,0x84D10380L,0x84D10380L},{1L,0L,0L,0L,1L,5L,1L},{0x47858445L,0x84D10380L,0x84D10380L,0x47858445L,0x84D10380L,0x84D10380L,0x47858445L},{0L,0L,0L,0x47FF961AL,1L,0x47FF961AL,0L}};
static unsigned g_840 = 0x28843270L;
static unsigned long long g_907[6] = {18446744073709551615UL,18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL,9UL};
static int ***g_918 = &g_64;
static int g_1089 = 0x0337D0B7L;
static short g_1091 = 0xD58FL;
static unsigned g_1119 = 0xCA7EA5D9L;
static unsigned char g_1236 = 255UL;
static unsigned short g_1255[10] = {0x0373L,0x0373L,0xB201L,0x0373L,0x0373L,0xB201L,0x0373L,0x0373L,0xB201L,0x0373L};
static unsigned g_1269 = 1UL;
static unsigned char g_1320 = 7UL;
static unsigned g_1385 = 4294967295UL;



static unsigned func_1(void);
static unsigned long long func_11(unsigned p_12, unsigned p_13, unsigned long long p_14);
static char func_15(unsigned p_16, unsigned p_17);
static char func_19(long long p_20, int p_21, unsigned short p_22);
static long long func_23(unsigned long long p_24, short p_25);
static unsigned long long func_28(unsigned long long p_29, int p_30);
static long long func_32(unsigned p_33, long long p_34, long long p_35, unsigned long long p_36);
static int ** func_44(int * p_45, int p_46, unsigned long long p_47);
static int * func_48(int ** p_49);
static int ** func_50(long long p_51, int * p_52, int p_53, long long p_54, int ** p_55);
static unsigned func_1(void)
{
    long long l_18 = 0xF9C25B054DBBE568LL;
    int l_1063 = 0x8411C532L;
    int *l_1065 = &g_2[1];
    long long l_1076 = 0xF7BB95C66161A529LL;
    int *l_1141[9][4][5] = {{{&g_434[0][1],&g_434[0][1],&g_434[0][1],&g_434[0][1],(void*)0},{(void*)0,&g_639[3][4],&l_1063,(void*)0,&g_68},{(void*)0,&g_2[1],(void*)0,(void*)0,&g_592},{&g_592,&g_592,(void*)0,(void*)0,&g_68}},{{&g_434[2][0],&g_434[0][1],&g_639[3][6],&g_434[0][1],&g_434[2][0]},{(void*)0,&g_1089,&g_43,&g_68,&g_639[1][1]},{&g_1089,(void*)0,(void*)0,&g_434[2][0],&g_639[3][0]},{(void*)0,&g_2[0],&g_43,&g_1089,&g_639[1][1]}},{{&g_592,&g_434[2][0],(void*)0,(void*)0,&g_434[2][0]},{&g_639[1][1],&g_639[0][1],&g_68,&g_434[3][1],&g_68},{&g_2[1],&g_1089,(void*)0,&g_592,&g_592},{&g_2[1],&g_1089,&g_68,&g_2[1],&g_68}},{{&g_2[1],&g_592,(void*)0,&g_434[2][0],(void*)0},{&g_639[1][1],&g_2[1],&g_592,&g_639[3][4],&g_43},{&g_592,&g_2[1],&g_434[0][1],&g_592,&g_1089},{(void*)0,&g_68,&g_68,(void*)0,&g_2[1]}},{{&g_1089,&g_2[1],&g_434[0][1],&g_592,&g_592},{(void*)0,&g_434[3][1],(void*)0,&g_68,&l_1063},{&g_2[1],&g_639[3][0],(void*)0,&g_43,&g_434[0][1]},{(void*)0,&g_68,&g_592,&g_2[0],&g_2[1]}},{{(void*)0,&g_592,(void*)0,&g_434[0][1],&g_1089},{&g_43,&g_2[1],(void*)0,&g_68,&g_68},{&g_43,&g_2[1],(void*)0,&g_434[2][0],&g_2[1]},{&g_68,&g_1089,&g_2[1],&g_2[0],&l_1063}},{{&g_434[0][1],(void*)0,&g_592,&g_434[2][0],(void*)0},{&g_592,&g_68,&l_1063,&g_68,&g_592},{&g_592,&g_43,(void*)0,&g_434[0][1],&g_592},{&g_2[1],(void*)0,&g_68,&g_2[0],&g_43}},{{&g_43,&g_434[0][1],&g_2[1],&g_43,&g_592},{&g_434[2][1],&g_2[0],&g_2[1],&g_68,&g_592},{&g_592,&g_592,(void*)0,&g_592,(void*)0},{(void*)0,&g_434[3][1],&g_1089,&g_639[3][4],&l_1063}},{{&g_434[0][1],&g_43,(void*)0,&g_639[3][0],&g_2[1]},{(void*)0,&g_639[0][1],&g_68,&g_2[0],&g_68},{&g_592,&g_592,&g_434[0][1],&g_2[1],&g_1089},{&g_434[2][1],&g_1089,(void*)0,&g_639[0][1],&g_2[1]}}};
    long long l_1212 = (-5L);
    int l_1234[5][3] = {{(-1L),1L,1L},{0xC1967BC5L,1L,1L},{0xC1967BC5L,1L,1L},{0xC1967BC5L,1L,1L},{0xC1967BC5L,1L,1L}};
    int l_1251[7] = {0xADD0D923L,0x7B6A26B2L,0x7B6A26B2L,0xADD0D923L,0x7B6A26B2L,0x7B6A26B2L,0xADD0D923L};
    int l_1268 = 1L;
    int l_1303 = 0x3A67EFADL;
    unsigned l_1323 = 0xA4273FE3L;
    char l_1339 = 0xB5L;
    int **l_1348 = &l_1065;
    long long l_1371 = (-6L);
    unsigned l_1386 = 0x3E1DBAE0L;
    short l_1393 = 0xBF93L;
    unsigned l_1394 = 5UL;
    long long l_1422[10];
    unsigned short l_1454 = 0x01FAL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1422[i] = (-1L);
    for (g_2[1] = 0; (g_2[1] == 23); ++g_2[1])
    {
        unsigned short l_624 = 0x0BA2L;
        if ((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(1L, (safe_mod_func_uint32_t_u_u((func_11(g_2[1], g_2[1], (func_15((((l_18 >= (func_19(func_23(g_2[1], g_2[1]), g_2[0], (l_624 , 0UL)) & 0UL)) <= g_2[1]) < l_624), g_2[1]) , l_18)) || 0x4BEBE05E0D49C398LL), l_18)))), l_624)))
        {
            long long l_1045[1];
            int *l_1046 = &g_592;
            int i;
            for (i = 0; i < 1; i++)
                l_1045[i] = 1L;
            (*l_1046) = (g_147 == (l_1045[0] <= l_624));
            l_1063 &= func_15((g_639[0][1] , (safe_lshift_func_int8_t_s_s((func_28((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((g_434[0][1] | (safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((((((safe_rshift_func_int8_t_s_s(g_43, 7)) != (-5L)) >= 0x83L) | g_550) && 18446744073709551612UL) & ((!(0x63L >= ((*l_1046) , 0x6DL))) < 1UL)), l_624)), 6UL))), g_434[0][0])) , 0x7A0EB8C8L), (*l_1046))) && g_2[0]), l_624)), l_624)), l_624) , 0x25L), l_18))), g_592);
            return l_1063;
        }
        else
        {
            int **l_1064 = &g_65;
            (*g_64) = &l_1063;

            ;
            (*l_1064) = func_48(l_1064);

            ;
        }

        ;
        (**g_918) = l_1065;

        ;
        if ((***g_918))
            continue;
    }

    ;
    if (((func_23((*l_1065), (func_23(g_550, ((safe_mod_func_int64_t_s_s((((*g_65) , (*l_1065)) || ((+(safe_mod_func_uint32_t_u_u((*l_1065), (safe_add_func_uint16_t_u_u(func_28(((safe_div_func_uint64_t_u_u((func_19((0x2A2488405E557BDFLL ^ (((((safe_lshift_func_uint16_t_u_u(func_28((*l_1065), (g_907[5] && ((1L > g_907[5]) , (*l_1065)))), g_639[2][1])) & g_592) , (*l_1065)) | g_907[5]) >= (*l_1065))), g_550, (*l_1065)) , 18446744073709551613UL), l_1076)) == 0x5C427723L), g_2[1]), (*l_1065)))))) , g_2[0])), 0xBC483F7D55C06A78LL)) , g_434[0][1])) > g_907[5])) >= g_550) <= 0UL))
    {
        int **l_1090 = &l_1065;
        int l_1132 = (-2L);
        char l_1140 = 0xE6L;
        short l_1154[1];
        unsigned l_1186 = 0UL;
        int **l_1202 = &l_1141[5][3][3];
        int *l_1218 = &l_1063;
        unsigned char l_1267 = 0x0FL;
        unsigned short l_1293 = 0x423DL;
        short l_1295 = 0x57A4L;
        int i;
        for (i = 0; i < 1; i++)
            l_1154[i] = 1L;
        for (l_18 = 1; (l_18 >= 0); l_18 -= 1)
        {
            int ***l_1081 = &g_64;
            int l_1097 = 0xF619334EL;
            for (g_550 = 0; (g_550 <= 1); g_550 += 1)
            {
                long long l_1098 = 0L;
                for (l_1063 = 1; (l_1063 >= 0); l_1063 -= 1)
                {
                    int i, j;
                    (**g_918) = ((g_434[(l_1063 + 2)][g_550] , (&g_434[(g_550 + 3)][l_18] == &g_2[g_550])) , &l_1063);

                    ;
                    if (((0xBA22EE90B9E3F557LL != 0UL) < g_434[(g_550 + 3)][l_18]))
                    {
                        int **l_1088[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*g_918) = (*g_918);
                        g_1091 &= (0x76L | (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((-10L), (func_11(((l_1081 == &g_64) >= (g_550 , (safe_div_func_int16_t_s_s(0x5F8FL, (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xF63B28BBL, (l_1088[3] != (func_23(g_1089, g_305) , l_1090)))), 0)) || g_434[(g_550 + 3)][l_18]) , g_2[1]))))), g_907[5], g_133) ^ g_2[1]))), g_2[1])));


                        (*l_1065) = (&g_434[(l_1063 + 2)][g_550] == (((void*)0 == (*l_1090)) , &l_1063));
                    }
                    else
                    {
                        (*g_64) = (**g_918);
                    }


                }
                if ((**l_1090))
                {
                    return g_211;


                }
                else
                {
                    unsigned l_1092[4];
                    int *l_1094[2];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1092[i] = 6UL;
                    for (i = 0; i < 2; i++)
                        l_1094[i] = &g_2[1];
                    for (g_133 = 0; (g_133 <= 1); g_133 += 1)
                    {
                        int i, j;
                        g_639[g_133][(g_133 + 2)] |= g_2[g_550];
                    }
                    (*l_1065) = 0L;
                    for (g_68 = 0; (g_68 <= 3); g_68 += 1)
                    {
                        int i, j;
                        (**l_1081) = &g_639[g_550][(g_68 + 2)];

                        ;
                        if (l_1092[0])
                            break;
                        (**g_64) &= (*l_1065);
                        if (g_639[g_550][(g_68 + 2)])
                            continue;
                    }
                    for (g_211 = 0; (g_211 <= 5); g_211 += 1)
                    {
                        int *l_1093 = &g_434[0][1];
                        l_1098 &= (g_907[5] , 1L);
                    }
                }
            }


            return (**l_1090);


        }
        for (g_133 = 0; g_133 < 6; g_133 += 1)
        {
            g_907[g_133] = 0xFD81CD4BF72C676BLL;
        }
        if ((*l_1065))
        {
            int **l_1114 = &l_1065;
            unsigned char l_1129 = 251UL;
            for (g_211 = 0; (g_211 <= 3); g_211 += 1)
            {
                short l_1099 = 1L;
                int *l_1100 = &g_434[0][1];
                (**l_1090) ^= 0L;
            }
            (*l_1090) = (*l_1090);
            if (((*l_1090) == &g_639[1][3]))
            {
                char l_1128 = 0xA6L;
                unsigned long long l_1130 = 0x2F524F459EFDD542LL;
                int *l_1142 = &g_639[2][6];
                if ((safe_lshift_func_int8_t_s_s(0xFBL, 5)))
                {
                    unsigned long long l_1131 = 1UL;
                    int l_1147 = 0L;
                    l_1132 |= (*l_1065);
                    for (g_1091 = 0; (g_1091 <= 5); g_1091 += 1)
                    {
                        int **l_1133 = &g_65;
                        int i;
                        (*g_918) = l_1133;
                        (*l_1065) = (0x94C6L | (func_15((safe_mod_func_uint16_t_u_u(g_907[g_1091], func_15((((l_1131 , l_1141[0][1][4]) == l_1142) ^ g_592), (*l_1142)))), g_907[5]) != g_1091));


                        (*g_64) = &l_1063;

                        ;
                        (**g_64) = (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((l_1147 && g_1091) < ((((+g_1119) && ((safe_sub_func_uint16_t_u_u((**l_1090), (safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((l_1154[0] == g_43), g_133)) >= l_1147), (safe_sub_func_int8_t_s_s(g_1089, 0UL)))))) > g_305)) , &l_1063) != (**g_918))) != (*l_1142)), 0x2480007AB803D9EBLL)), (**l_1090)));
                    }


                    (**l_1090) = (*l_1142);
                }
                else
                {
                    unsigned short l_1171 = 0x069FL;
                    unsigned l_1172[5][2][9] = {{{1UL,0x78982D54L,0x46631DFDL,0x78982D54L,1UL,0x007F15C8L,0xDBB33D04L,0x0571A4AFL,1UL},{0x96EC76E9L,0xE159D0E6L,0x1376CE87L,0x0A5A5F91L,0x8E5675DAL,0x0A5A5F91L,0x1376CE87L,0xE159D0E6L,0x96EC76E9L}},{{1UL,0x34005EC9L,0xF04E5A40L,1UL,0x0571A4AFL,0x007F15C8L,0xB8CA5E51L,0x007F15C8L,0x0571A4AFL},{0xB65A6268L,9UL,9UL,0xB65A6268L,0x0A5A5F91L,0x3DB5E3C1L,0x56ECC503L,0UL,1UL}},{{1UL,0x0571A4AFL,0xB8CA5E51L,1UL,1UL,0xB8CA5E51L,0x0571A4AFL,1UL,0x46631DFDL},{0x96EC76E9L,4294967286UL,1UL,0x705E0D33L,0x0A5A5F91L,0UL,0UL,0x0A5A5F91L,0x705E0D33L}},{{1UL,0xDBB33D04L,1UL,0x34005EC9L,0x0571A4AFL,1UL,4294967287UL,0x46631DFDL,0x46631DFDL},{9UL,0x96EC76E9L,0x8E5675DAL,0UL,0x8E5675DAL,0x96EC76E9L,9UL,0x96EC76E9L,0UL}},{{0xDBB33D04L,0x34005EC9L,0x46631DFDL,0xB8CA5E51L,1UL,1UL,1UL,0xB8CA5E51L,0x46631DFDL},{0x8E5675DAL,0x8E5675DAL,0x56ECC503L,4294967286UL,0UL,0x3DB5E3C1L,0x1376CE87L,0x96EC76E9L,0x1376CE87L}}};
                    int i, j, k;
                    (*l_1142) = ((**l_1090) > 9UL);
                }


            }
            else
            {
                unsigned long long l_1176 = 0x20E004E2B77C9471LL;
                int *l_1177[10][3] = {{&g_434[0][1],&g_2[1],&g_2[1]},{(void*)0,&g_639[3][2],(void*)0},{&g_434[0][1],&g_434[0][1],&g_2[1]},{&g_639[1][1],&g_639[3][2],&g_639[1][1]},{&g_434[0][1],&g_2[1],&g_2[1]},{(void*)0,&g_639[3][2],(void*)0},{&g_434[0][1],&g_434[0][1],&g_2[1]},{&g_639[1][1],&g_639[3][2],&g_639[1][1]},{&g_434[0][1],&g_2[1],&g_2[1]},{(void*)0,&g_639[3][2],(void*)0}};
                short l_1187[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1187[i] = 0x5529L;
                for (g_305 = 23; (g_305 > (-28)); g_305 = safe_sub_func_int64_t_s_s(g_305, 6))
                {
                    unsigned char l_1175 = 254UL;
                    l_1187[3] ^= l_1175;
                    for (l_18 = 7; (l_18 <= 0); l_18 = safe_sub_func_uint16_t_u_u(l_18, 2))
                    {
                        return (**l_1114);
                    }
                }
                return (**l_1114);
            }


            (**l_1090) = (g_68 ^ g_592);
        }
        else
        {
            char l_1198 = (-1L);
            unsigned char l_1199 = 0xD9L;
            int ***l_1235 = (void*)0;
            unsigned l_1252 = 0x47BE149DL;
            unsigned l_1270[9] = {0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL,0x83926BACL};
            int i;
            if (((0x6606L == (((((safe_sub_func_int8_t_s_s(g_43, (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_1091, func_23(g_1089, (safe_sub_func_int64_t_s_s((((**l_1090) , (((!((((void*)0 != &l_1063) || ((g_592 , l_1198) , g_133)) >= g_2[1])) == g_147) & 6L)) > g_147), g_305))))), g_133)) || g_840) , l_1198))) <= g_305) < l_1199) , &g_64) != &g_64)) | g_639[0][1]))
            {
                long long l_1211[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1211[i] = 0x9E9C90DD85976E90LL;
                (**g_918) = (*l_1090);

                ;
                if ((g_2[1] , (safe_mod_func_int8_t_s_s(((l_1202 == (*g_918)) | (safe_rshift_func_int8_t_s_s(((&g_64 != (void*)0) , func_23((safe_mod_func_uint32_t_u_u((g_147 , ((safe_rshift_func_uint16_t_u_u(0x7A6EL, (((safe_add_func_uint32_t_u_u((l_1211[3] == (&g_64 != &g_64)), l_1211[3])) & (*g_65)) & l_1212))) ^ 4294967288UL)), (**l_1090))), l_1198)), 5))), (*l_1065)))))
                {
                    for (g_305 = 0; (g_305 == 12); ++g_305)
                    {
                        return g_639[0][1];
                    }
                    (**g_64) = (safe_unary_minus_func_uint32_t_u(0x6EB364D9L));
                    (*l_1090) = (*l_1202);

                    ;
                }
                else
                {
                    for (g_68 = (-24); (g_68 >= (-14)); g_68 = safe_add_func_int64_t_s_s(g_68, 9))
                    {
                        (*g_64) = l_1218;

                        ;
                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                (*g_64) = &g_434[2][1];

                ;
            }

            ;
            ;
            for (g_147 = 0; (g_147 >= 10); g_147++)
            {
                short l_1229 = 0L;
                int *l_1237 = &g_639[0][1];
                long long l_1256[4] = {0xF99F2CF5E5C226D4LL,0xF99F2CF5E5C226D4LL,0xF99F2CF5E5C226D4LL,0xF99F2CF5E5C226D4LL};
                int i;
                if ((g_147 < g_550))
                {
                    unsigned l_1253 = 0x575EC122L;
                    for (l_18 = 0; l_18 < 5; l_18 += 1)
                    {
                        for (g_133 = 0; g_133 < 3; g_133 += 1)
                        {
                            l_1234[l_18][g_133] = 0x5DD858C9L;
                        }
                    }
                    (**g_64) &= 0x707D6554L;
                    if (((g_305 , (g_639[0][1] || (g_1119 == ((g_1119 , (!g_211)) <= 65534UL)))) ^ 0x72B50D49L))
                    {
                        (*g_65) ^= ((l_1235 != &g_64) >= g_1236);
                        (**g_918) = l_1237;

                        ;
                        l_1141[0][1][4] = (*g_64);
                    }
                    else
                    {
                        unsigned long long l_1244 = 0xFC8351690C76593BLL;
                        unsigned char l_1254 = 0xDEL;
                        (**g_918) = (**g_918);
                        l_1256[1] |= (**g_64);
                    }
                }
                else
                {
                    int *l_1265 = (void*)0;
                    int l_1266 = 0x07BEDBB3L;
                    (*l_1090) = func_48((*g_918));

                    ;
                    l_1270[1] &= (**g_64);
                }
                (*g_64) = (*g_64);
                for (g_592 = (-4); (g_592 < 29); g_592 = safe_add_func_int32_t_s_s(g_592, 2))
                {
                    unsigned long long l_1292[4][8] = {{0x0CD223BD5EDA49D4LL,18446744073709551615UL,0x25E61EE2B42EF6E9LL,1UL,0x25E61EE2B42EF6E9LL,18446744073709551615UL,0x0CD223BD5EDA49D4LL,18446744073709551615UL},{0x0CD223BD5EDA49D4LL,1UL,0x4D97DE60894836D0LL,1UL,0x0CD223BD5EDA49D4LL,0xA49848092A656FC7LL,0x0CD223BD5EDA49D4LL,1UL},{0x25E61EE2B42EF6E9LL,1UL,0x25E61EE2B42EF6E9LL,18446744073709551615UL,0x0CD223BD5EDA49D4LL,18446744073709551615UL,0x25E61EE2B42EF6E9LL,1UL},{0x0CD223BD5EDA49D4LL,18446744073709551615UL,0x25E61EE2B42EF6E9LL,1UL,0x25E61EE2B42EF6E9LL,18446744073709551615UL,0x0CD223BD5EDA49D4LL,18446744073709551615UL}};
                    long long l_1294 = 0x1066AB31996B9417LL;
                    int i, j;
                    for (l_1199 = 0; (l_1199 != 55); l_1199 = safe_add_func_int64_t_s_s(l_1199, 9))
                    {
                        (*g_918) = (*g_918);
                        (**g_918) = (*g_64);
                        return g_639[3][3];


                    }
                    for (g_840 = 2; (g_840 <= 22); g_840 = safe_add_func_uint32_t_u_u(g_840, 1))
                    {
                        int l_1285 = 7L;
                        l_1285 ^= ((safe_sub_func_int32_t_s_s((***g_918), (safe_div_func_int32_t_s_s((*g_65), 0x3B3D6DAFL)))) == (safe_div_func_uint8_t_u_u(g_907[1], (safe_rshift_func_int16_t_s_s(g_907[5], 10)))));
                        (**g_918) = (*g_64);
                        (*g_918) = (*g_918);
                        (*l_1218) = (((g_1269 < (*l_1237)) , (((safe_mod_func_uint16_t_u_u((0xEDBEL || g_305), ((safe_lshift_func_uint16_t_u_u(g_1091, 2)) | g_907[5]))) >= l_1294) > 0x6466L)) ^ g_907[5]);
                    }
                    return l_1295;


                }
            }

            ;
        }


        ;
    }
    else
    {
        (*g_64) = &l_1251[4];

        ;
    }


    ;
    if (g_592)
    {
        unsigned char l_1296 = 1UL;
        int **l_1308 = (void*)0;
        int *l_1309 = &g_639[3][6];
        unsigned l_1316 = 18446744073709551612UL;
        unsigned l_1319 = 0xC7914DF6L;
        int l_1376 = 0L;
        int **l_1377 = &g_65;
        int l_1387 = 0x1BEED231L;
        unsigned l_1391 = 1UL;
        unsigned short l_1419[9] = {0x95C3L,0x95C3L,0x95C3L,0x95C3L,0x95C3L,0x95C3L,0x95C3L,0x95C3L,0x95C3L};
        long long l_1451 = 0xD184851D4C3A060BLL;
        int i;
        if ((func_28(l_1296, (safe_rshift_func_int16_t_s_s(g_305, (safe_sub_func_uint32_t_u_u(g_434[0][1], (0x9536EBCEL > (g_211 == (safe_add_func_uint64_t_u_u(g_1089, l_1303))))))))) , 4L))
        {
            int *l_1304 = &l_1251[1];
            l_1304 = l_1304;
            for (l_1268 = 0; (l_1268 == 0); l_1268++)
            {
                unsigned long long l_1307 = 0x435696F900945412LL;
                if (l_1307)
                    break;
                (*g_64) = l_1309;

                ;
                for (g_550 = 13; (g_550 >= 45); g_550 = safe_add_func_int16_t_s_s(g_550, 2))
                {
                    int *l_1324 = (void*)0;
                    int ***l_1327 = &l_1308;
                    (**g_918) = (**g_918);
                    for (g_147 = 1; (g_147 <= 6); g_147 += 1)
                    {
                        int i;
                        (*l_1309) = ((g_907[5] , g_434[0][1]) , 0xEB5897CFL);
                        (*g_64) = l_1309;

                        ;
                        (*g_64) = l_1324;

                        ;
                        (*l_1304) = ((0xDDL > ((safe_lshift_func_uint16_t_u_s((((((void*)0 != l_1327) , (0x58D33E9F9FB20663LL & (+(((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(g_550)) < (*l_1304)), (((void*)0 == (*l_1327)) >= ((safe_mod_func_int8_t_s_s(((*l_1304) & 0x92L), g_133)) , g_133)))) != (*l_1309)), 5)), g_550)) | 4L) & 0x81A2DF52675B1F95LL)))) && 0x715AE6933BCBD36ELL) && (*l_1309)), 14)) , g_907[2])) == 0x17753E01D8F2AFA0LL);
                    }
                }

                ;
            }
            for (g_305 = 0; (g_305 < (-28)); g_305 = safe_sub_func_uint64_t_u_u(g_305, 7))
            {
                for (g_133 = 1; (g_133 >= 0); g_133 -= 1)
                {
                    int i, j;
                    (*g_64) = &g_2[g_133];

                    ;
                    if (g_639[(g_133 + 1)][(g_133 + 2)])
                        break;
                    if ((***g_918))
                        break;
                }
                (*l_1304) ^= 0x887F9905L;
            }
            if (func_28((~(func_19(l_1339, func_15((safe_div_func_int8_t_s_s(func_28(func_28(((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(0x32L, 6)) != (safe_lshift_func_int16_t_s_s((g_305 && 0x5CFCD327L), 6))), g_1119)) == g_2[1]), (func_23(((void*)0 != l_1348), g_1236) , (*l_1304))), (*l_1309)), g_550)), g_1091), g_1269) & (*l_1304))), g_907[5]))
            {
                int *l_1349 = &l_1251[6];
                unsigned l_1361 = 0UL;
                for (l_1296 = 0; (l_1296 <= 3); l_1296 += 1)
                {
                    int *l_1367 = &g_434[0][1];
                    int i;
                    if (g_1255[(l_1296 + 3)])
                        break;
                    for (g_1119 = 0; (g_1119 <= 9); g_1119 += 1)
                    {
                        int l_1366 = (-1L);
                        (*g_64) = l_1349;

                        ;
                        if ((*g_65))
                            break;
                        (*l_1349) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(func_15((safe_unary_minus_func_int64_t_s(func_28((safe_sub_func_uint64_t_u_u(func_23(((*l_1349) >= g_434[3][1]), (((0x6A1D3223711A9009LL == (((~((safe_mod_func_uint16_t_u_u((!(safe_rshift_func_uint8_t_u_u(l_1361, (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_1269 , (((void*)0 == (**g_918)) & (l_1366 , (g_147 < g_1091)))), g_1255[(l_1296 + 3)])), (*l_1304)))))), 65531UL)) | g_1091)) , (void*)0) != (*g_64))) , (*g_64)) != (void*)0)), g_907[5])), g_1255[(l_1296 + 3)]))), g_1255[(l_1296 + 3)]), (*l_1349))), (*l_1349)));


                        (*g_64) = l_1367;

                        ;
                    }
                    (*l_1304) = ((((&l_1348 == &g_64) & g_1255[9]) != g_434[2][0]) != g_907[4]);
                    for (g_1320 = 0; (g_1320 <= 3); g_1320 += 1)
                    {
                        if ((*l_1367))
                            break;
                        if ((*l_1304))
                            continue;
                        (*l_1367) = (*l_1304);
                    }
                }
                g_1089 ^= (safe_unary_minus_func_int32_t_s(func_11(((safe_add_func_uint16_t_u_u(((g_147 , (*l_1349)) == (-1L)), g_147)) , (*l_1309)), g_1236, (*l_1309))));
                (*l_1304) = 0xE5BB07C4L;
            }
            else
            {
                for (g_1089 = 0; (g_1089 == (-7)); g_1089--)
                {
                    for (g_1320 = 0; (g_1320 > 47); g_1320 = safe_add_func_uint8_t_u_u(g_1320, 1))
                    {
                        int *l_1378 = (void*)0;
                        (*l_1304) ^= ((-10L) < (!(-1L)));
                        (*l_1377) = ((l_1376 != 0x2DL) , l_1378);

                        ;
                        l_1387 |= (g_1089 == ((g_1269 & ((((func_28(g_43, ((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_43, (*l_1309))), 10)) || (((safe_sub_func_int64_t_s_s((*l_1304), func_23(g_1255[9], g_1236))) && 1L) ^ g_1385))) || (*l_1309)) == l_1386) == (*l_1309)) != 0xBCL)) , g_211));


                    }
                    for (l_1296 = 0; (l_1296 == 58); l_1296 = safe_add_func_int8_t_s_s(l_1296, 1))
                    {
                        long long l_1390 = (-1L);
                        return l_1390;


                    }
                }
            }


        }
        else
        {
            return g_434[0][1];


        }


        for (g_592 = 9; (g_592 >= 1); g_592 -= 1)
        {
            unsigned l_1392 = 0x749BEBE8L;
            unsigned char l_1397 = 0UL;
            unsigned l_1443[3][8][3] = {{{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L},{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L}},{{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L},{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L}},{{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L},{18446744073709551615UL,0x6909C671L,0x6909C671L},{0x52049104L,0UL,0x52049104L},{18446744073709551615UL,18446744073709551615UL,0x6909C671L},{0x43BEAFF8L,0UL,0x43BEAFF8L}}};
            int l_1444 = 0L;
            int **l_1449 = &l_1141[0][1][4];
            int i, j, k;
            if (((((*l_1309) , (*g_918)) == (void*)0) , (g_434[0][1] && l_1394)))
            {
                int l_1420 = 0xA6BB8EC7L;
                int l_1421 = 0L;
                if (((safe_rshift_func_int16_t_s_u(l_1397, 4)) <= (safe_mod_func_int8_t_s_s((~(safe_rshift_func_int16_t_s_u((-1L), 3))), g_1091))))
                {
                    (*l_1309) = l_1397;
                    return l_1392;


                }
                else
                {
                    int l_1416 = 1L;
                    for (l_1376 = 0; (l_1376 <= 3); l_1376 += 1)
                    {
                        int i;
                        (*l_1309) = ((((18446744073709551615UL >= (g_907[l_1376] , (((g_43 | (+(safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(g_550, ((g_2[1] <= ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(l_1416, (safe_sub_func_int8_t_s_s(((+g_1236) > (((g_434[0][1] == ((g_550 < 0xBE4C9E9B73166FE7LL) , l_1397)) > 18446744073709551615UL) , l_1392)), 0xF9L)))) == g_907[5]), g_147)) < g_907[5])) & g_434[1][1]))), 5)) & g_133), g_840)), g_1236)) || g_1385), l_1419[0])))) == g_907[l_1376]) ^ l_1420))) < g_434[2][1]) || g_1320) , (*l_1309));
                    }
                    l_1421 = (-9L);
                }
                (*l_1309) |= 0x25D6802FL;
            }
            else
            {
                if (g_1119)
                    break;
                l_1422[3] &= (*l_1309);
                if (l_1392)
                    continue;
            }
            g_639[2][6] = (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_rshift_func_uint8_t_u_s(((void*)0 != (*g_918)), (safe_rshift_func_uint16_t_u_s((0L <= (!(safe_rshift_func_uint8_t_u_u(g_2[1], 4)))), (*l_1309)))))));
            for (g_1119 = 0; (g_1119 <= 3); g_1119 += 1)
            {
                char l_1441 = 0x61L;
                int ***l_1442 = (void*)0;
                unsigned l_1450 = 0xA7AECE29L;
                int *l_1477 = &g_2[1];
                l_1444 |= (safe_mod_func_uint8_t_u_u(((~(safe_mod_func_uint16_t_u_u(g_147, g_592))) & ((((safe_lshift_func_int8_t_s_u((!g_1091), (safe_mod_func_int8_t_s_s((l_1397 || (l_1441 & ((((&l_1308 != l_1442) && 0x0C2A998302262F1DLL) , ((((0xC04FL <= (-1L)) && g_133) , g_1089) | l_1443[0][2][0])) != (*l_1309)))), g_133)))) & l_1392) > 1L) >= g_2[1])), g_840));
                (*l_1449) = &g_68;
                for (l_18 = 9; (l_18 >= 1); l_18 -= 1)
                {
                    int l_1463 = (-1L);
                    int i, j, k;
                    g_1089 |= (safe_div_func_uint16_t_u_u((((l_1454 , (&l_1141[g_1119][g_1119][(g_1119 + 1)] != (*g_918))) , (((+g_1255[0]) ^ (safe_div_func_int16_t_s_s((*l_1309), 0x298DL))) ^ (g_1091 ^ (!func_28(func_28(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0x958EL, 2)), 5)) <= (safe_div_func_uint64_t_u_u(g_305, g_639[2][4]))), l_1463), (*l_1309)))))) && g_1269), g_1091));
                }
                for (l_1376 = 3; (l_1376 >= 0); l_1376 -= 1)
                {
                    char l_1475 = 0L;
                    int *l_1476 = &g_1089;
                    unsigned long long l_1482 = 0x47BBFDF77E6BC6B1LL;
                    for (l_1444 = 1; (l_1444 <= 5); l_1444 += 1)
                    {
                        int l_1468 = (-1L);
                        int i, j, k;
                        l_1141[(l_1444 + 3)][g_1119][(g_1119 + 1)] = l_1477;
                    }
                    (*l_1477) &= (*l_1476);
                    if ((g_2[1] > g_1385))
                    {
                        short l_1480[3][5][6];
                        short l_1481 = 0xA623L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_1480[i][j][k] = (-5L);
                            }
                        }
                        (*l_1476) &= ((safe_add_func_int32_t_s_s((*l_1309), l_1480[2][1][5])) ^ l_1481);
                        if (l_1482)
                            break;
                        (**g_918) = (*l_1449);

                        ;
                    }
                    else
                    {
                        unsigned l_1483 = 0xC50A2BF9L;
                        if ((*l_1476))
                            break;
                        (*l_1476) = (*l_1476);
                        if (l_1483)
                            break;
                    }
                }
            }
        }


        return g_1236;


    }
    else
    {
        int *l_1484 = &g_68;
        (**g_918) = l_1484;

        ;
        (**g_64) |= ((*g_918) == (void*)0);
    }

    ;
    return g_434[0][1];
}







static unsigned long long func_11(unsigned p_12, unsigned p_13, unsigned long long p_14)
{
    int **l_930 = &g_65;
    int l_1008 = 0xBECD38D6L;
    unsigned l_1013 = 1UL;
    for (g_43 = 0; (g_43 <= 5); g_43 += 1)
    {
        int **l_923 = &g_65;
        long long l_931[7];
        int i;
        for (i = 0; i < 7; i++)
            l_931[i] = 0x177164B9304C98F9LL;
        (*g_918) = l_923;
        (*l_923) = &g_434[1][0];

        ;
        for (g_147 = 0; (g_147 <= 5); g_147 += 1)
        {
            long long l_929[1][9] = {{0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL,0x0F21D0EA2AB0DBC1LL}};
            unsigned l_940 = 0UL;
            char l_983 = 5L;
            int i, j;
            for (p_14 = 0; (p_14 <= 5); p_14 += 1)
            {
                int l_924 = 0x51A41B7AL;
                unsigned char l_941 = 1UL;
                int ***l_962 = &l_923;
                int *l_984 = &g_639[1][5];
                int i;
            }
        }
        if ((**l_923))
            continue;
        for (p_12 = 0; (p_12 <= 5); p_12 += 1)
        {
            int *l_987 = (void*)0;
            int *l_998 = &g_434[3][0];
            (**g_918) = (*l_923);
            (*g_65) = (((safe_sub_func_int32_t_s_s((**l_930), (((void*)0 == (*g_918)) != ((p_13 , (l_987 == (*g_64))) == ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((g_434[0][1] < g_2[1]) , (g_68 & 0xF1L)), 5)), g_305)) , g_305))))) | p_12) < 5UL);
            (*l_998) = (safe_lshift_func_int16_t_s_u(0x9695L, func_23((((~func_23((((*g_64) != (p_12 , (void*)0)) <= (p_12 > (((safe_mod_func_uint16_t_u_u(g_907[5], (safe_rshift_func_int16_t_s_s(g_639[0][1], 15)))) & (p_14 <= (-2L))) | 65534UL))), (**l_923))) , 255UL) < p_13), g_907[2])));
        }
    }
    if ((p_13 == p_14))
    {
        unsigned l_1006[2];
        int *l_1007 = &g_2[1];
        unsigned l_1030 = 18446744073709551613UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1006[i] = 1UL;
        if ((((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(func_19(((safe_lshift_func_uint16_t_u_s(((!(safe_sub_func_int16_t_s_s(g_907[5], (p_13 | l_1006[1])))) , (g_211 && func_19(l_1006[0], ((p_13 , &l_1007) == (*g_918)), g_592))), 15)) , 0L), (*l_1007), (*l_1007)))), (*l_1007))) && (*l_1007)) <= 0x30AA7F9BL))
        {
            long long l_1014[4] = {0x30CF1F3FBE134F7ALL,0x30CF1F3FBE134F7ALL,0x30CF1F3FBE134F7ALL,0x30CF1F3FBE134F7ALL};
            int *l_1019[10][10][2] = {{{&g_592,&g_639[0][1]},{&l_1008,&l_1008},{(void*)0,&l_1008},{&l_1008,(void*)0},{(void*)0,(void*)0},{&g_434[0][0],&g_592},{&l_1008,&g_639[0][1]},{&g_592,&l_1008},{&g_68,&g_592},{(void*)0,&g_434[0][0]}},{{(void*)0,&g_592},{&g_68,&l_1008},{&g_592,&g_639[0][1]},{&l_1008,&g_592},{&g_434[0][0],(void*)0},{(void*)0,(void*)0},{&l_1008,&l_1008},{(void*)0,&l_1008},{&l_1008,(void*)0},{(void*)0,(void*)0}},{{&g_434[0][0],&g_592},{&l_1008,&g_639[0][1]},{&g_592,&l_1008},{&g_68,&g_592},{(void*)0,&g_434[0][0]},{(void*)0,&g_592},{&g_68,&l_1008},{&g_592,&g_639[0][1]},{&l_1008,&g_592},{&g_434[0][0],(void*)0}},{{(void*)0,(void*)0},{&l_1008,&l_1008},{(void*)0,&l_1008},{&l_1008,(void*)0},{(void*)0,(void*)0},{&g_434[0][0],&g_592},{&l_1008,&g_639[0][1]},{&g_592,&l_1008},{&g_68,&g_592},{(void*)0,&g_434[0][0]}},{{(void*)0,&g_592},{&g_68,&l_1008},{&g_592,&g_639[0][1]},{&l_1008,&g_592},{&g_434[0][0],(void*)0},{(void*)0,(void*)0},{&l_1008,&l_1008},{(void*)0,&l_1008},{&l_1008,&g_68},{&g_639[0][1],&g_639[0][1]}},{{&l_1008,&g_434[0][0]},{(void*)0,&g_2[1]},{&g_434[0][0],&g_639[0][1]},{&g_434[2][0],&g_434[0][0]},{&g_639[0][1],&l_1008},{&g_639[0][1],&g_434[0][0]},{&g_434[2][0],&g_639[0][1]},{&g_434[0][0],&g_2[1]},{(void*)0,&g_434[0][0]},{&l_1008,&g_639[0][1]}},{{&g_639[0][1],&g_68},{(void*)0,&g_639[0][1]},{&g_68,&g_639[0][1]},{(void*)0,&g_68},{&g_639[0][1],&g_639[0][1]},{&l_1008,&g_434[0][0]},{(void*)0,&g_2[1]},{&g_434[0][0],&g_639[0][1]},{&g_434[2][0],&g_434[0][0]},{&g_639[0][1],&l_1008}},{{&g_639[0][1],&g_434[0][0]},{&g_434[2][0],&g_639[0][1]},{&g_434[0][0],&g_2[1]},{(void*)0,&g_434[0][0]},{&l_1008,&g_639[0][1]},{&g_639[0][1],&g_68},{(void*)0,&g_639[0][1]},{&g_68,&g_639[0][1]},{(void*)0,&g_68},{&g_639[0][1],&g_639[0][1]}},{{&l_1008,&g_434[0][0]},{(void*)0,&g_2[1]},{&g_434[0][0],&g_639[0][1]},{&g_434[2][0],&g_434[0][0]},{&g_639[0][1],&l_1008},{&g_639[0][1],&g_434[0][0]},{&g_434[2][0],&g_639[0][1]},{&g_434[0][0],&g_2[1]},{(void*)0,&g_434[0][0]},{&l_1008,&g_639[0][1]}},{{&g_639[0][1],&g_68},{(void*)0,&g_639[0][1]},{&g_68,&g_639[0][1]},{(void*)0,&g_68},{&g_639[0][1],&g_639[0][1]},{&l_1008,&g_434[0][0]},{(void*)0,&g_68},{&g_68,&g_434[0][0]},{&g_2[1],&g_68},{(void*)0,&g_434[2][0]}}};
            int i, j, k;
            for (g_211 = 0; (g_211 <= 3); g_211 += 1)
            {
                int **l_1010 = &g_65;
                for (p_14 = 0; (p_14 <= 1); p_14 += 1)
                {
                    unsigned short l_1009 = 1UL;
                    for (g_592 = 0; (g_592 <= 3); g_592 += 1)
                    {
                        int i, j;
                        g_434[g_211][p_14] = g_434[g_592][p_14];
                        g_639[g_211][g_592] ^= l_1009;
                        g_68 = l_1014[0];
                    }
                    for (g_68 = 1; (g_68 >= 0); g_68 -= 1)
                    {
                        int i, j;
                        g_434[(p_14 + 2)][g_68] = (safe_div_func_int32_t_s_s(l_1006[g_68], l_1009));
                        g_434[(g_68 + 3)][p_14] = (-1L);
                        g_434[(g_211 + 1)][p_14] = (((g_2[0] || p_12) , p_14) , (safe_rshift_func_int16_t_s_u((g_133 == ((void*)0 != &g_64)), (l_1019[6][1][0] != ((safe_sub_func_uint64_t_u_u((*l_1007), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((8UL >= 0x9BECA3F104B9CEB8LL) || g_434[4][1]), p_12)), l_1030)), 2)), l_1009)))) , (void*)0)))));
                    }
                    g_639[0][1] ^= 4L;
                }
                for (g_43 = 3; (g_43 >= 0); g_43 -= 1)
                {
                    if (p_13)
                        break;
                    if (p_12)
                        break;
                }
            }
        }
        else
        {
            int *l_1031[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1031[i] = &g_43;
            (*l_930) = l_1031[1];

            ;
            for (l_1013 = 0; (l_1013 == 17); ++l_1013)
            {
                int l_1044 = 0xBD26740CL;
            }
            return g_211;
        }
        for (g_592 = 0; (g_592 <= 1); g_592 += 1)
        {
            return p_14;
        }
        return g_907[5];
    }
    else
    {
        return p_12;
    }
}







static char func_15(unsigned p_16, unsigned p_17)
{
    unsigned l_680 = 0x75AE8D3FL;
    int l_681 = 0L;
    int **l_703 = &g_65;
    unsigned l_740 = 1UL;
    int *l_749 = &g_639[3][6];
    unsigned l_797[6][10];
    unsigned l_798 = 0x1B70F1A7L;
    int l_849 = 9L;
    unsigned char l_897 = 1UL;
    int ***l_906 = &g_64;
    int *l_922 = &l_681;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_797[i][j] = 4294967286UL;
    }
    for (g_592 = 0; g_592 < 5; g_592 += 1)
    {
        for (p_16 = 0; p_16 < 2; p_16 += 1)
        {
            g_434[g_592][p_16] = 0x711C4369L;
        }
    }
    if ((g_434[0][1] | g_43))
    {
        long long l_689 = 0xA64A1C35CDA4A480LL;
        int ***l_711 = &l_703;
        unsigned char l_729 = 247UL;
        unsigned long long l_771 = 0xC50E4EC686848ACCLL;
        int *l_785 = &l_681;
        l_681 |= l_680;
        for (g_592 = 0; (g_592 <= 1); g_592 += 1)
        {
            char l_690 = 0x3EL;
            unsigned l_693 = 0xD4608DE2L;
            int ***l_717 = &g_64;
            int l_731 = 0x94F143B4L;
            unsigned long long l_739 = 18446744073709551609UL;
            unsigned long long l_744 = 0xC8D5C547451FF2A2LL;
            unsigned char l_750 = 0UL;
        }
        return p_17;
    }
    else
    {
        int *l_808[6] = {&g_43,&g_43,&g_68,&g_43,&g_43,&g_68};
        short l_867 = (-1L);
        int i;
        for (g_68 = 0; (g_68 > 17); g_68++)
        {
            long long l_803 = 0xD73D38148B6C5BF8LL;
            int *l_844 = &g_639[0][4];
            int l_880 = (-1L);
            int ***l_891[9][6] = {{(void*)0,&g_64,&l_703,&l_703,&g_64,(void*)0},{&l_703,&g_64,(void*)0,&g_64,&l_703,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64},{&g_64,&l_703,&g_64,&g_64,&g_64,&g_64},{&l_703,&l_703,&l_703,&l_703,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64,&g_64,&g_64},{&g_64,&l_703,&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64,&g_64,(void*)0},{&l_703,&l_703,&l_703,&g_64,&g_64,&g_64}};
            int i, j;
            for (p_16 = (-13); (p_16 <= 59); p_16++)
            {
                int *l_807 = &g_434[3][0];
                if (l_803)
                {
                    int *l_809[9][9][3] = {{{&g_2[1],&g_639[0][1],&g_2[1]},{&g_68,&l_681,&g_2[1]},{&g_639[0][1],&g_434[0][1],&g_2[1]},{&g_2[1],&g_592,&g_2[1]},{&g_43,&g_68,&g_2[1]},{&g_434[0][1],(void*)0,&l_681},{&g_43,&g_43,&g_43},{&g_2[1],&g_2[1],&g_639[0][0]},{&g_639[0][1],&g_2[1],&g_2[1]}},{{&g_68,&g_592,&g_434[0][1]},{(void*)0,&g_68,&g_68},{&g_639[0][1],&l_681,&g_434[0][1]},{&g_2[1],&l_681,&l_681},{&g_43,&g_639[1][6],&g_2[1]},{&g_43,(void*)0,(void*)0},{&g_2[1],&g_434[0][1],&g_592},{&g_639[0][1],(void*)0,&g_43},{(void*)0,&g_434[0][1],&l_681}},{{&l_681,(void*)0,&l_681},{&g_434[0][1],&g_639[1][6],&l_681},{&g_639[0][1],&l_681,&l_681},{(void*)0,&l_681,&g_43},{&g_639[1][6],&g_68,&g_592},{(void*)0,&g_592,(void*)0},{&g_639[0][1],&g_639[0][1],&g_2[1]},{&g_434[0][1],&g_639[0][1],&l_681},{&l_681,&g_592,&g_434[0][1]}},{{(void*)0,&g_68,&g_68},{&g_639[0][1],&l_681,&g_434[0][1]},{&g_2[1],&l_681,&l_681},{&g_43,&g_639[1][6],&g_2[1]},{&g_43,(void*)0,(void*)0},{&g_2[1],&g_434[0][1],&g_592},{&g_639[0][1],(void*)0,&g_43},{(void*)0,&g_434[0][1],&l_681},{&l_681,(void*)0,&l_681}},{{&g_434[0][1],&g_639[1][6],&l_681},{&g_639[0][1],&l_681,&l_681},{(void*)0,&l_681,&g_43},{&g_639[1][6],&g_68,&g_592},{(void*)0,&g_592,(void*)0},{&g_592,&g_592,(void*)0},{&g_639[0][1],&g_592,&g_434[4][1]},{(void*)0,(void*)0,&l_681},{&g_68,(void*)0,&g_43}},{{&g_639[0][1],(void*)0,&l_681},{&g_639[1][6],&g_434[0][1],&g_434[4][1]},{&g_2[1],&g_639[0][1],(void*)0},{&g_2[1],&g_43,&g_434[0][1]},{&g_639[1][6],&g_639[0][1],&g_639[0][1]},{&g_639[0][1],&g_68,&l_681},{&g_68,&g_639[0][1],&g_68},{(void*)0,&g_43,&l_681},{&g_639[0][1],&g_639[0][1],&l_681}},{{&g_592,&g_434[0][1],&g_68},{&l_681,(void*)0,&l_681},{&g_639[0][1],(void*)0,&g_639[0][1]},{&l_681,(void*)0,&g_434[0][1]},{&g_592,&g_592,(void*)0},{&g_639[0][1],&g_592,&g_434[4][1]},{(void*)0,(void*)0,&l_681},{&g_68,(void*)0,&g_43},{&g_639[0][1],(void*)0,&l_681}},{{&g_639[1][6],&g_434[0][1],&g_434[4][1]},{&g_2[1],&g_639[0][1],(void*)0},{&g_2[1],&g_43,&g_434[0][1]},{&g_639[1][6],&g_639[0][1],&g_639[0][1]},{&g_639[0][1],&g_68,&l_681},{&g_68,&g_639[0][1],&g_68},{(void*)0,&g_43,&l_681},{&g_639[0][1],&g_639[0][1],&l_681},{&g_592,&g_434[0][1],&g_68}},{{&l_681,(void*)0,&l_681},{&l_681,&g_639[0][1],&g_434[0][1]},{&g_639[0][0],&g_639[3][4],&g_639[1][6]},{&g_68,&g_68,&g_68},{&g_592,&g_68,&g_592},{(void*)0,&g_639[3][4],&g_639[0][1]},{&g_43,&g_639[0][1],(void*)0},{&g_639[1][4],(void*)0,&g_639[0][1]},{&g_68,&g_2[1],&g_592}}};
                    int i, j, k;
                    if (l_803)
                    {
                        int *l_804 = &l_681;
                        (*l_804) |= (*l_749);
                    }
                    else
                    {
                        (*l_703) = ((safe_div_func_int64_t_s_s(p_16, g_305)) , l_807);

                        ;
                        (*g_64) = l_808[5];

                        ;
                    }
                    (*g_64) = l_809[1][6][2];

                    ;
                    if (((p_16 , 0x0A356107437024ECLL) & ((safe_mod_func_uint64_t_u_u(g_68, (safe_lshift_func_uint16_t_u_u((l_803 >= p_16), 8)))) | ((void*)0 == &l_749))))
                    {
                        unsigned short l_814 = 65535UL;
                        l_814 = 0xC8329D44L;
                        (*l_807) = (*l_807);
                    }
                    else
                    {
                        (*g_64) = (*g_64);
                        (*l_703) = (*g_64);
                        if (p_17)
                            continue;
                    }
                    if (p_17)
                    {
                        (*l_703) = l_807;

                        ;
                        (*l_703) = l_807;
                    }
                    else
                    {
                        unsigned long long l_821[3][2][2] = {{{1UL,1UL},{1UL,18446744073709551615UL}},{{0x00E13AB5C80C621ALL,0xE024456CE0154306LL},{18446744073709551615UL,0xE024456CE0154306LL}},{{0x00E13AB5C80C621ALL,18446744073709551615UL},{1UL,1UL}}};
                        int l_841 = 0L;
                        int i, j, k;
                        (*l_807) = (((((l_803 | ((safe_mod_func_uint64_t_u_u(g_147, (safe_rshift_func_uint8_t_u_s(g_434[3][1], 4)))) , (safe_sub_func_uint16_t_u_u(l_821[1][1][1], l_803)))) && ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_803 & (p_17 && g_434[0][1])), (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((g_840 < l_841) >= 0L), p_17)), 0x4175D01CEAFCA03ELL)), g_133)), 0xA6553F82L)))) < g_211), g_434[4][1])) , 255UL) , &l_807) != &l_749), 6)), p_17)) || 0UL)) < g_68) >= g_211) ^ (*l_749));
                    }
                }
                else
                {
                    return g_592;


                }

                ;
                if (p_16)
                    continue;
            }
            for (l_681 = (-4); (l_681 != (-2)); l_681++)
            {
                int ***l_870 = &l_703;
                int *l_882 = &l_681;
                if (p_16)
                {
                    unsigned l_868 = 18446744073709551610UL;
                    int *l_869 = &g_434[2][1];
                    (*l_703) = l_844;

                    ;
                    if ((**g_64))
                        break;
                    if (((safe_rshift_func_uint8_t_u_s(g_133, (safe_sub_func_uint32_t_u_u(0x48295667L, l_849)))) > (safe_lshift_func_uint8_t_u_s((((void*)0 == &l_703) , (g_2[1] || g_2[1])), 5))))
                    {
                        return g_2[1];
                    }
                    else
                    {
                        unsigned l_856 = 18446744073709551606UL;
                        (*g_65) = (safe_mod_func_uint64_t_u_u(g_133, ((((l_856 & ((safe_add_func_int8_t_s_s(((l_856 == 0x1BL) & 1L), p_16)) != (((+(safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((0x46L >= g_211), 5)) >= (safe_div_func_int16_t_s_s((g_68 | l_867), l_868))) , 0xC9L) , (-9L)), p_17)), g_43))) , (void*)0) != (*g_64)))) , (*l_703)) != l_869) | 0UL)));
                        return l_856;
                    }
                }
                else
                {
                    g_434[0][1] = (*l_844);
                    (*l_844) = 5L;
                    l_808[5] = (((g_147 , l_870) != &l_703) , (void*)0);
                }
                if (((((((0xE7B0AC19L && ((safe_sub_func_int8_t_s_s((-1L), p_17)) == p_16)) | (safe_add_func_int8_t_s_s(((((((-7L) | (g_211 == (&g_65 == &g_65))) >= 18446744073709551615UL) <= 0x26C5D285L) <= p_16) , (*l_844)), (*l_844)))) , l_870) == (void*)0) , 8UL) == g_305))
                {
                    int l_879[4][9] = {{1L,1L,(-3L),(-1L),0x93019DEEL,(-3L),0x93019DEEL,(-1L),(-3L)},{0x3071E055L,0x3071E055L,9L,0xC27C3E5EL,6L,9L,6L,0xC27C3E5EL,9L},{1L,1L,(-3L),(-1L),0x93019DEEL,(-3L),0x93019DEEL,(-1L),(-3L)},{0x3071E055L,0x3071E055L,9L,0xC27C3E5EL,6L,9L,6L,0xC27C3E5EL,9L}};
                    int *l_881 = &g_639[0][1];
                    int i, j;
                    l_880 |= (0x1A52758AL >= (safe_mod_func_uint32_t_u_u(p_17, (safe_lshift_func_uint8_t_u_s(((l_879[1][5] , p_17) && 0xBC0B915FC6067853LL), (*l_844))))));
                    l_881 = (p_16 , &g_434[0][1]);

                    ;
                    (*l_749) = (l_881 == l_882);
                    if (p_16)
                        break;
                }
                else
                {
                    (*l_844) = ((g_592 || (6UL < 2L)) & (*l_844));
                    return p_16;


                }
                (*l_844) |= (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u((g_147 | (l_870 == (void*)0)), 15)) , l_891[3][4]) == &g_64) , (g_592 ^ (*l_882))), (g_550 , (g_43 , p_16)))), g_68));
            }
        }



    }


    for (g_840 = 18; (g_840 == 44); ++g_840)
    {
        unsigned char l_896 = 0x2CL;
        int *l_921 = &g_592;
        (*l_749) = (safe_rshift_func_int16_t_s_u((*l_749), g_211));
        (*l_921) = (safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_16 , (((func_28(p_17, p_16) , ((g_918 != &l_703) == (safe_mod_func_int16_t_s_s(0xA802L, (0xBE11L && (((l_921 != l_921) , g_907[5]) >= 9UL)))))) && g_550) , g_133)), 0x8DL)), 13)), g_639[0][1])), g_550)) , (*l_749)), (-5L)));
        (*l_749) = (*l_921);
    }
    (*g_64) = l_922;

    ;
    return (*l_749);


}







static char func_19(long long p_20, int p_21, unsigned short p_22)
{
    long long l_627 = 0x1C808C5267024B47LL;
    int l_628[9] = {0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL,0xF106643CL};
    int i;
    if (((l_627 < (l_627 != (func_28((l_628[8] || 8UL), p_21) <= p_21))) , p_20))
    {
        (*g_64) = (void*)0;

        ;
    }
    else
    {
        long long l_629 = 0x6CF1C58CA349E405LL;
        int *l_630 = &l_628[8];
        unsigned l_661 = 0x6632F9C2L;
        (*l_630) &= l_629;
        if ((safe_mod_func_uint32_t_u_u(((g_592 , ((g_434[1][1] & ((safe_rshift_func_uint8_t_u_u(p_21, ((((safe_div_func_uint64_t_u_u(l_628[8], 0xF3538AF6535E73F7LL)) < p_20) > 0xC7C141C0L) && l_627))) <= (-10L))) != g_550)) | p_20), g_639[0][1])))
        {
            return p_21;
        }
        else
        {
            (*l_630) = 0L;
        }
        for (l_629 = 1; (l_629 >= 0); l_629 -= 1)
        {
            unsigned l_642[4] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
            int i;
            (*l_630) = ((safe_lshift_func_uint16_t_u_u((((void*)0 == &p_21) && (6UL ^ p_20)), 4)) ^ ((g_305 , 0UL) > func_23((7L > (func_23(l_642[1], (p_21 , (*l_630))) | l_642[0])), (*l_630))));
            for (l_627 = 3; (l_627 >= 0); l_627 -= 1)
            {
                int i, j;
                g_639[l_627][(l_627 + 3)] = g_639[(l_629 + 2)][(l_629 + 2)];
                if (g_639[l_627][(l_627 + 3)])
                {
                    int l_660 = (-1L);
                    if ((*l_630))
                    {
                        (*g_64) = &p_21;

                        ;
                    }
                    else
                    {
                        long long l_659[3][6][5] = {{{0xF40781AF962C16B9LL,(-5L),(-5L),0xF40781AF962C16B9LL,0x33ED503902ACB4CCLL},{0xB8525CDDEEFBF432LL,1L,1L,1L,1L},{0x8EDA3190CFD69C5FLL,0xF40781AF962C16B9LL,1L,0xC3EFCFFC4C54A92ALL,0xC3EFCFFC4C54A92ALL},{0xB8525CDDEEFBF432LL,0x66A4091A4CB6CF21LL,0xB8525CDDEEFBF432LL,1L,1L},{(-5L),0xFA874C5D7A306252LL,0xC3EFCFFC4C54A92ALL,0xFA874C5D7A306252LL,(-5L)},{0xB8525CDDEEFBF432LL,1L,0x66A4091A4CB6CF21LL,3L,0x66A4091A4CB6CF21LL}},{{0x8EDA3190CFD69C5FLL,0x8EDA3190CFD69C5FLL,0xC3EFCFFC4C54A92ALL,(-5L),0x33ED503902ACB4CCLL},{1L,0xB8525CDDEEFBF432LL,0xB8525CDDEEFBF432LL,1L,0x66A4091A4CB6CF21LL},{0xFA874C5D7A306252LL,(-5L),1L,1L,(-5L)},{0x66A4091A4CB6CF21LL,0xB8525CDDEEFBF432LL,1L,1L,1L},{0xF40781AF962C16B9LL,0x8EDA3190CFD69C5FLL,0xF40781AF962C16B9LL,1L,0xC3EFCFFC4C54A92ALL},{3L,1L,1L,1L,3L}},{{0xF40781AF962C16B9LL,0xFA874C5D7A306252LL,0x8EDA3190CFD69C5FLL,(-5L),0x8EDA3190CFD69C5FLL},{0x66A4091A4CB6CF21LL,0x66A4091A4CB6CF21LL,1L,3L,0x011F1B98303E9CAFLL},{0xFA874C5D7A306252LL,0xF40781AF962C16B9LL,0xF40781AF962C16B9LL,0xFA874C5D7A306252LL,0x8EDA3190CFD69C5FLL},{1L,3L,1L,1L,3L},{0x8EDA3190CFD69C5FLL,0xF40781AF962C16B9LL,1L,0xC3EFCFFC4C54A92ALL,0xC3EFCFFC4C54A92ALL},{0xB8525CDDEEFBF432LL,0x66A4091A4CB6CF21LL,0xB8525CDDEEFBF432LL,1L,1L}}};
                        int i, j, k;
                        g_434[(l_629 + 3)][l_629] = (safe_add_func_uint16_t_u_u(l_642[3], (safe_sub_func_int64_t_s_s((*l_630), l_661))));
                        (*l_630) ^= 0L;
                        (*l_630) = l_627;
                    }
                    if (p_21)
                        break;
                }
                else
                {
                    int **l_662 = &g_65;
                    (*g_64) = &g_639[l_627][(l_627 + 3)];

                    ;
                }
            }
        }


    }


    for (g_211 = 0; (g_211 != 56); ++g_211)
    {
        unsigned l_665 = 4294967295UL;
        int *l_670 = &g_434[1][0];
        (*g_64) = (p_20 , (((func_23(l_628[2], l_665) && (l_628[2] == (0x5419L < (g_43 && ((func_23(l_627, func_23((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0UL, g_43)), 1UL)), g_2[1])) && l_665) && 0x2EL))))) ^ 0xC415998CE9ED93A2LL) , (void*)0));

        ;
        if (p_22)
        {
            return p_20;
        }
        else
        {
            int *l_671[10] = {(void*)0,&g_434[4][1],(void*)0,&g_434[4][1],(void*)0,&g_434[4][1],(void*)0,&g_434[4][1],(void*)0,&g_434[4][1]};
            int i;
            l_670 = (*g_64);

            ;
            if (p_22)
                break;
            for (g_147 = 0; (g_147 <= 3); g_147 += 1)
            {
                unsigned short l_677 = 65528UL;
                if (l_628[8])
                    break;
                for (p_22 = 0; (p_22 <= 3); p_22 += 1)
                {
                    int l_676 = 0xAA750BF8L;
                    if (((l_671[8] != ((safe_add_func_int8_t_s_s(g_592, 1UL)) , &l_628[8])) , p_22))
                    {
                        int i, j;
                        g_639[g_147][(p_22 + 3)] &= 0xC83ED800L;
                        (*g_64) = (g_133 , (void*)0);

                        ;
                        (*g_64) = &p_21;

                        ;
                    }
                    else
                    {
                        int i, j;
                        g_639[g_147][(g_147 + 3)] = (safe_rshift_func_int8_t_s_s(l_627, 1));
                        p_21 = ((0L == g_592) || (l_628[8] < l_676));
                    }
                    l_677 = p_20;
                    for (l_676 = 0; (l_676 >= (-30)); l_676--)
                    {
                        if (p_22)
                            break;
                    }
                }
            }

            ;
            l_628[6] &= (l_627 , p_22);
        }

        ;
        ;
    }
    return g_2[1];


}







static long long func_23(unsigned long long p_24, short p_25)
{
    long long l_39 = 0x2C4EB0A117216709LL;
    unsigned l_602 = 8UL;
    int *l_603 = &g_434[4][1];
    short l_617 = 0x51C9L;
    for (p_25 = 0; (p_25 >= (-2)); p_25--)
    {
        short l_31[3];
        unsigned l_37 = 0xE24B2E80L;
        char l_38 = 0x08L;
        int *l_591 = &g_592;
        int i;
        for (i = 0; i < 3; i++)
            l_31[i] = (-7L);
    }
    for (g_68 = (-11); (g_68 == 20); g_68 = safe_add_func_int32_t_s_s(g_68, 1))
    {
        long long l_601 = 0x5A43632B43972BEELL;
    }
    for (g_147 = 1; (g_147 >= 0); g_147 -= 1)
    {
        short l_622 = 0x3942L;
        for (g_592 = 0; (g_592 <= 1); g_592 += 1)
        {
            for (p_25 = 1; (p_25 >= 0); p_25 -= 1)
            {
                int *l_604 = &g_434[4][1];
                int *l_605 = &g_68;
                int i, j;
                (*g_64) = l_604;

                ;
                (*l_605) |= (*l_603);
            }
        }
        for (p_25 = 0; (p_25 >= (-10)); --p_25)
        {
            int **l_614 = &l_603;
            int l_623 = 9L;
        }
    }
    return p_24;
}







static unsigned long long func_28(unsigned long long p_29, int p_30)
{
    unsigned l_357 = 0x72E093A6L;
    int *l_365 = &g_2[1];
    long long l_366 = 0x7EC04D9ADC42FE44LL;
    int l_388[8] = {0xB98C5EABL,0xFE6A0398L,0xB98C5EABL,0xFE6A0398L,0xB98C5EABL,0xFE6A0398L,0xB98C5EABL,0xFE6A0398L};
    char l_420 = 0x28L;
    int ***l_428 = &g_64;
    unsigned short l_508 = 65535UL;
    unsigned char l_509 = 0xC6L;
    char l_536 = 0L;
    short l_575[4][6] = {{(-9L),(-10L),(-9L),(-10L),(-9L),(-10L)},{0xD0C9L,(-10L),0xD0C9L,(-10L),0xD0C9L,(-10L)},{(-9L),(-10L),(-9L),(-10L),(-9L),(-10L)},{0xD0C9L,(-10L),0xD0C9L,(-10L),0xD0C9L,(-10L)}};
    int i, j;
    if (((safe_div_func_int32_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(p_30, ((0xC3L || g_133) >= ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_2[1], ((safe_sub_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(l_357, (safe_mod_func_int32_t_s_s(((g_133 ^ g_305) >= (0x1568L != (safe_unary_minus_func_uint16_t_u((((safe_sub_func_int8_t_s_s(g_147, l_357)) , p_30) ^ 255UL))))), 2L)))) != g_305), 0x4DL)) && l_357))) & p_30), g_68)) || 0L)))), l_357)), 0x67B892A878CF9694LL)) && g_2[1]), l_357)) || 0L))
    {
        int *l_363 = (void*)0;
        int *l_364 = &g_68;
        int **l_367 = &l_364;
        char l_376 = (-1L);
        int l_377 = 0x3DDFA527L;
        unsigned char l_378[7][7][5] = {{{3UL,0x5CL,0x95L,0xB8L,1UL},{0x47L,0xF5L,1UL,0x0EL,0UL},{0x08L,0x47L,255UL,0xC3L,3UL},{0x1DL,252UL,255UL,0x16L,0xCFL},{0xB8L,0xD9L,1UL,0x67L,247UL},{0x43L,3UL,0x95L,252UL,0UL},{0UL,8UL,8UL,0UL,0x08L}},{{0UL,0x67L,0x6CL,255UL,0UL},{252UL,3UL,0xCFL,0x1AL,0x0EL},{255UL,255UL,0xCBL,255UL,0x5CL},{0xD9L,0xFCL,1UL,0UL,0UL},{255UL,0x47L,0x1AL,252UL,0x16L},{255UL,0xCBL,0x08L,0x67L,0x83L},{0xFCL,255UL,0xB8L,0x16L,0UL}},{{0x1AL,0x6FL,252UL,0x83L,0UL},{0xF5L,8UL,0xD3L,0UL,0x93L},{3UL,0UL,0xB8L,0x0EL,0xB6L},{1UL,0x67L,252UL,252UL,0x67L},{0x16L,0x1AL,0x5CL,0xFCL,0xF2L},{0xD9L,255UL,0UL,0x0EL,0UL},{0x83L,0UL,0x95L,0xCFL,0xF5L}},{{0xD9L,0x83L,0xCBL,0x1DL,255UL},{0x16L,0x5BL,0xDDL,0xB6L,0x6FL},{1UL,0xB8L,0x95L,0x5CL,3UL},{3UL,255UL,0x43L,0x5BL,0x1AL},{0xF5L,255UL,2UL,0xF5L,0xD9L},{0x1AL,255UL,252UL,0xF2L,0xF5L},{0x5BL,255UL,0x1AL,0UL,0xCFL}},{{0xFCL,0xB8L,255UL,255UL,255UL},{252UL,0x5BL,252UL,0xCBL,0x67L},{0xB8L,0x83L,255UL,0x5BL,0x95L},{0xFCL,0UL,1UL,255UL,0x16L},{0x90L,255UL,255UL,0x95L,0x08L},{0x43L,0UL,0x18L,8UL,0UL},{255UL,1UL,0xB8L,0x95L,0x5CL}},{{252UL,0x95L,0UL,1UL,0xF2L},{0x93L,248UL,0x9EL,255UL,248UL},{0x5CL,0x43L,0UL,255UL,0x1AL},{248UL,0x1AL,0xA3L,1UL,0x95L},{8UL,0xB7L,0x6CL,0x95L,1UL},{0xC3L,8UL,0xD9L,8UL,0xC3L},{2UL,0xCBL,1UL,0x6CL,0x43L}},{{0x93L,0x18L,0x6CL,0xCFL,252UL},{0x90L,0xC3L,0xFCL,0xCBL,0x43L},{1UL,0xCFL,0xD5L,1UL,0xC3L},{0x43L,0xD5L,0x9EL,0x1AL,1UL},{0xCBL,0xC3L,247UL,0x08L,0x95L},{0x9EL,0x83L,0xB7L,0xB8L,0x1AL},{0x83L,0xDDL,0x18L,255UL,248UL}}};
        unsigned char l_421 = 0x18L;
        int i, j, k;
        (*l_364) = (p_30 == g_43);
        (*l_367) = &p_30;

        ;
        if ((((((g_2[1] >= ((-2L) ^ (((+(p_30 , ((l_377 <= g_2[1]) > 7L))) | l_378[3][0][0]) , 0x00L))) >= g_147) || (*l_365)) >= p_29) , p_29))
        {
            int **l_379 = &l_365;
            (*l_379) = l_365;
            (**l_367) |= ((*l_379) != (*l_379));
        }
        else
        {
            short l_389 = (-8L);
            unsigned long long l_410[10][2][8] = {{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}},{{5UL,5UL,0x2C4057CCA2CDC776LL,0xD2B96D31CFA25ABALL,0UL,1UL,0UL,0UL},{1UL,5UL,0UL,0xD2B96D31CFA25ABALL,1UL,1UL,0xD2B96D31CFA25ABALL,0UL}}};
            int *l_413 = &g_43;
            int i, j, k;
            if ((((safe_div_func_int64_t_s_s((*l_365), (*l_364))) > 0x40L) && (*l_365)))
            {
                int l_392 = (-9L);
                unsigned l_395 = 0x0FE30266L;
                for (l_366 = 12; (l_366 == (-16)); l_366--)
                {
                    int *l_394 = &l_392;
                    for (l_377 = 7; (l_377 >= 0); l_377 -= 1)
                    {
                        long long l_393 = 0x4D434EBCE35BBA30LL;
                        (*l_367) = (void*)0;

                        ;
                        l_392 = 0x510D6375L;
                        if (l_393)
                            break;
                    }
                    for (l_392 = 0; (l_392 <= 4); l_392 += 1)
                    {
                        p_30 = ((g_147 ^ g_2[1]) != p_30);
                    }
                    (*l_394) |= g_43;
                    l_392 = ((p_30 ^ g_133) <= (g_68 , g_2[1]));
                }

                ;
            }
            else
            {
                int ***l_411 = &l_367;
                int l_442[6][3][9];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 9; k++)
                            l_442[i][j][k] = 0x91CC74A0L;
                    }
                }
                (*l_367) = &p_30;
                for (g_211 = 0; (g_211 < 17); g_211++)
                {
                    unsigned long long l_398 = 0xD5C3C14E789EAF65LL;
                    (*l_364) ^= l_398;
                    (*l_364) |= 0x59AAA8E0L;
                    (**l_367) &= (((safe_lshift_func_uint16_t_u_u(g_2[1], 4)) || l_398) >= (safe_rshift_func_uint16_t_u_s(p_29, 1)));
                }
                for (l_366 = 1; (l_366 <= 4); l_366 += 1)
                {
                    return l_389;
                }
                if ((safe_rshift_func_uint8_t_u_s(p_30, 3)))
                {
                    unsigned short l_412 = 65535UL;
                    (*l_367) = l_413;

                    ;
                    (*l_367) = (*l_367);
                    for (g_147 = 0; (g_147 == (-9)); g_147 = safe_sub_func_int64_t_s_s(g_147, 5))
                    {
                        int *l_433[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_433[i] = &g_434[0][1];
                        g_434[0][1] |= (((*l_413) && (*l_365)) == (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((l_428 == ((65535UL || ((safe_sub_func_uint16_t_u_u(g_305, (+g_305))) > ((g_2[0] != (((l_412 & g_133) , (void*)0) == &p_30)) && 1L))) , (void*)0)) >= g_68), 0L)), g_147)));
                        l_442[4][2][5] &= ((((p_29 ^ (safe_sub_func_int16_t_s_s(p_29, (((g_68 && (safe_sub_func_uint64_t_u_u(((((1UL & (safe_rshift_func_uint8_t_u_s(((**l_367) , g_68), 6))) > (((g_434[0][0] , 255UL) < (safe_unary_minus_func_int32_t_s(((p_30 , &p_30) == (void*)0)))) , 0xC9L)) , 18446744073709551615UL) <= g_211), (*l_413)))) , p_30) > g_68)))) || p_30) && (-1L)) , (-10L));
                        if (l_412)
                            break;
                    }
                }
                else
                {
                    (**l_411) = &p_30;
                    for (l_366 = 0; (l_366 == 18); l_366++)
                    {
                        (***l_411) = (-2L);
                    }
                }

                ;
            }

            ;
        }

        ;
    }
    else
    {
        char l_450[8][5][6] = {{{0L,0xA7L,0xE4L,0xF4L,(-1L),(-5L)},{(-1L),7L,0xBDL,0L,0xBDL,7L},{0x09L,0xF4L,(-1L),(-7L),0x38L,0L},{(-8L),1L,0xFDL,0x7BL,0xF4L,0xFBL},{(-5L),1L,0x6AL,(-3L),0x38L,(-1L)}},{{1L,0xF4L,0x9DL,(-1L),0xBDL,0xFDL},{(-1L),7L,0xCBL,1L,(-1L),0xBDL},{0xF6L,0xA7L,(-7L),(-9L),0xBDL,0xF6L},{0x40L,0xF6L,0L,0L,0xF6L,0x40L},{0x09L,(-3L),1L,0L,0x92L,4L}},{{(-1L),0xFBL,1L,0xC8L,0xE4L,(-1L)},{(-1L),0x32L,0xC8L,0L,7L,0xFBL},{0x09L,0x92L,0xF4L,0L,2L,(-3L)},{0x40L,0x38L,0x65L,(-9L),(-1L),0xA7L},{0x38L,(-1L),0x09L,0x0BL,(-9L),7L}},{{(-1L),(-5L),(-9L),(-5L),(-1L),0xF4L},{0L,0xFDL,0x92L,0xF6L,0x0BL,1L},{1L,7L,(-3L),0xFDL,4L,1L},{0xBDL,0x65L,0x92L,0xF4L,0x32L,0xF4L},{4L,2L,(-9L),0xA7L,0x65L,7L}},{{0x7BL,0L,0x09L,0x40L,1L,0xA7L},{0xA7L,(-7L),0x65L,(-8L),(-3L),(-3L)},{0x65L,0xF4L,0xF4L,0x65L,(-1L),0xFBL},{0L,0xBDL,(-1L),0xFDL,0L,(-1L)},{0xA4L,(-1L),0x0BL,(-7L),0L,(-3L)}},{{0x7BL,0xF4L,0x32L,0xF4L,0x92L,0x65L},{(-9L),0xA4L,(-3L),1L,2L,(-8L)},{0xC8L,0x9DL,(-1L),(-3L),0x0BL,0x40L},{7L,0L,0x92L,0xA7L,0x38L,0xA7L},{(-1L),1L,(-1L),0xF6L,7L,0xF4L}},{{(-1L),0x38L,1L,7L,(-3L),0xFDL},{(-5L),(-1L),0xA7L,7L,0xE4L,0xF6L},{(-1L),0L,1L,0xF6L,(-7L),(-5L)},{(-1L),1L,0x40L,0xA7L,(-1L),0x0BL},{7L,0x92L,2L,(-3L),(-1L),(-9L)}},{{0xC8L,0xBDL,0L,1L,1L,0L},{(-9L),(-9L),0xC8L,0xF4L,(-1L),0L},{0x7BL,7L,(-8L),(-7L),0x6AL,0xC8L},{0xA4L,0x7BL,(-8L),0xFDL,(-9L),0L},{(-3L),0xFDL,(-1L),(-1L),0xBDL,0xA4L}}};
        unsigned char l_517 = 1UL;
        int **l_589[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_589[i] = &g_65;
        if (((void*)0 == l_428))
        {
            int l_451 = (-4L);
            char l_454 = 0L;
            int **l_574[1];
            int i;
            for (i = 0; i < 1; i++)
                l_574[i] = &l_365;
            if ((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((l_450[6][2][5] <= l_451) | (-3L)) >= ((p_29 && ((safe_mod_func_uint16_t_u_u((0xC1L <= (g_2[1] , (*l_365))), g_133)) < g_2[1])) | p_29)) >= 1UL), g_434[0][1])), 12)) <= l_454))))
            {
                unsigned l_480 = 0x7404803EL;
                int l_481 = 0x2BA11602L;
                l_481 = ((l_451 <= g_305) || 5L);
                for (g_305 = 0; (g_305 == 20); g_305 = safe_add_func_uint64_t_u_u(g_305, 5))
                {
                    unsigned l_498 = 4294967291UL;
                    for (l_454 = 0; (l_454 < 15); l_454 = safe_add_func_int64_t_s_s(l_454, 1))
                    {
                        int **l_486 = &g_65;
                        int *l_502 = (void*)0;
                        int *l_503 = &l_451;
                        (*l_486) = &p_30;

                        ;
                        if (p_29)
                            break;
                        (*l_503) |= (((safe_sub_func_int32_t_s_s((((void*)0 == &g_65) <= ((safe_unary_minus_func_int64_t_s(1L)) > (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((((safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(l_498, (safe_unary_minus_func_int8_t_s(g_147)))), l_450[7][4][0])) & 0x4901EEE6L) > (((safe_mod_func_int64_t_s_s(g_133, ((l_480 & 0xA153BC88L) & g_147))) ^ p_30) <= l_498)) > g_434[4][0]), p_29)), 7)))), p_30)) & l_498) >= g_133);
                    }
                }


            }
            else
            {
                return p_30;
            }


            if (((0UL | ((p_29 & ((safe_sub_func_int64_t_s_s((p_30 , 0xFC565E48E1CB922ELL), 1UL)) , g_434[0][1])) ^ 4UL)) , 0x6165A788L))
            {
                char l_527 = 5L;
                int *l_532 = &g_68;
                int **l_533 = &l_365;
                for (g_43 = 1; (g_43 >= 0); g_43 -= 1)
                {
                    int **l_510 = &g_65;
                    (*l_510) = &p_30;

                    ;
                    for (l_454 = 0; l_454 < 5; l_454 += 1)
                    {
                        for (g_133 = 0; g_133 < 2; g_133 += 1)
                        {
                            g_434[l_454][g_133] = 0xC2FE1B02L;
                        }
                    }
                    if ((**l_510))
                    {
                        (*l_428) = &g_65;

                        ;
                    }
                    else
                    {
                        unsigned l_520 = 0x42964910L;
                        (*g_65) = (*g_65);
                        (*g_65) = (safe_mod_func_int64_t_s_s((!((safe_lshift_func_uint16_t_u_u(l_454, (l_517 & p_30))) ^ ((void*)0 == &g_64))), ((safe_div_func_int32_t_s_s((((g_211 ^ 0L) , (g_434[4][1] , g_305)) == 0x62C2750CL), l_520)) , (-8L))));
                    }
                    for (g_68 = 1; (g_68 >= 0); g_68 -= 1)
                    {
                        int i, j;
                        (*g_65) |= g_434[g_68][g_68];
                        (*l_510) = &p_30;
                        (**l_510) |= ((safe_add_func_int8_t_s_s(g_434[0][1], 0x92L)) < 1UL);
                    }
                }
                (*l_532) |= (g_43 , (p_30 , (safe_mod_func_int8_t_s_s(((p_30 != g_43) , p_30), (*l_365)))));
                (*l_533) = &p_30;

                ;
            }
            else
            {
                int *l_537 = &g_2[1];
                char l_549 = 0x9AL;
                int l_562 = 8L;
                for (g_43 = 0; (g_43 >= (-21)); --g_43)
                {
                    l_536 |= ((p_29 <= 252UL) , p_29);
                }
                l_537 = l_537;
                p_30 = p_30;
                for (l_536 = (-19); (l_536 <= (-27)); l_536 = safe_sub_func_uint8_t_u_u(l_536, 4))
                {
                    short l_540 = 0xBA0CL;
                    int **l_551 = (void*)0;
                    int **l_552[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_552[i] = &l_537;
                    p_30 ^= ((l_450[2][3][4] < l_454) , l_454);
                    l_365 = ((((g_2[0] < (safe_rshift_func_uint8_t_u_u(g_550, l_454))) ^ l_517) != g_68) , &p_30);

                    ;
                    for (p_29 = (-17); (p_29 > 53); p_29 = safe_add_func_uint64_t_u_u(p_29, 8))
                    {
                        int l_561 = 0xA161056DL;
                        int *l_569 = &g_43;
                        l_562 &= (((((((safe_add_func_uint64_t_u_u(g_434[0][1], g_434[0][1])) , &l_365) == &g_65) < l_561) < g_147) && 65526UL) , p_30);
                        p_30 = p_30;
                        l_451 = (safe_rshift_func_int8_t_s_u(1L, ((p_30 | (65535UL ^ l_451)) , ((safe_sub_func_uint8_t_u_u(p_30, (safe_sub_func_uint8_t_u_u(g_43, (1UL ^ p_29))))) , (p_29 <= 0x4CL)))));
                        l_569 = (void*)0;

                        ;
                    }
                    if (l_450[6][2][5])
                        break;
                }

                ;
            }

            ;
            p_30 = ((((safe_div_func_uint64_t_u_u(p_30, 1L)) , 0x78BC4DD5L) , &p_30) != &g_43);
        }
        else
        {
            int l_588 = 0xB985DC85L;
            int l_590 = 0L;
            l_590 = (((safe_lshift_func_int16_t_s_s(p_29, (((!p_29) || (safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(3UL, 7)), 2)), (p_29 , p_30))), 3))) ^ (p_29 > l_588)))) , ((void*)0 == l_589[2])) <= p_30);
        }


        ;
    }


    ;
    return g_147;


}







static long long func_32(unsigned p_33, long long p_34, long long p_35, unsigned long long p_36)
{
    char l_56 = 0x4DL;
    int *l_61 = &g_43;
    unsigned char l_62 = 0x98L;
    int **l_162 = (void*)0;
    unsigned l_179 = 4UL;
    int l_208[6];
    short l_225 = 8L;
    unsigned l_243[10];
    int **l_324 = &l_61;
    int i;
    for (i = 0; i < 6; i++)
        l_208[i] = 0x50024F6DL;
    for (i = 0; i < 10; i++)
        l_243[i] = 1UL;
    if (p_33)
    {
        unsigned l_59 = 0x3D8D5894L;
        int **l_185 = &g_65;
        int l_193 = 1L;
        int **l_256 = &g_65;
        for (p_35 = 0; (p_35 < (-10)); p_35--)
        {
            int *l_42 = &g_43;
            unsigned char l_63[6][7][6] = {{{0x19L,6UL,0x2BL,255UL,254UL,0x34L},{3UL,3UL,0UL,0UL,1UL,252UL},{3UL,0x6AL,0UL,255UL,251UL,0x76L},{0x19L,254UL,0x59L,1UL,0x1BL,3UL},{1UL,252UL,0x6AL,1UL,255UL,0x19L},{251UL,2UL,252UL,0x05L,252UL,2UL},{0x8BL,1UL,251UL,0x19L,252UL,0xABL}},{{0x05L,0x34L,6UL,255UL,0x3EL,0x8CL},{0x76L,0x34L,1UL,0x5BL,252UL,0x8BL},{0xB1L,1UL,255UL,0UL,252UL,0UL},{6UL,2UL,0x76L,3UL,255UL,0UL},{0x34L,252UL,254UL,0x1BL,0x1BL,254UL},{254UL,254UL,255UL,0x3EL,251UL,255UL},{3UL,0x6AL,0x05L,0xC2L,1UL,255UL}},{{0xF6L,3UL,0x05L,6UL,254UL,255UL},{0UL,0x8BL,0xBCL,0xC2L,254UL,3UL},{0xC2L,254UL,3UL,0x19L,0x34L,0x5BL},{0x1BL,0xBCL,0x2BL,255UL,6UL,255UL},{6UL,3UL,6UL,0x59L,0xB1L,0x76L},{255UL,2UL,0xF6L,0x2BL,0x76L,0x34L},{0x8CL,0x6AL,0x8BL,0x2BL,0x05L,0x59L}},{{255UL,6UL,0UL,0x59L,0x8BL,0xABL},{6UL,0x5BL,255UL,255UL,251UL,0x3EL},{0x1BL,0xB1L,0x8CL,0x19L,1UL,1UL},{0xC2L,0UL,0UL,0xC2L,0x19L,0x2BL},{0xB1L,0UL,254UL,0x8BL,3UL,255UL},{0x05L,0xC2L,1UL,255UL,3UL,0UL},{1UL,0UL,251UL,0x6AL,0x19L,252UL}},{{3UL,0UL,0x1BL,252UL,1UL,0x8BL},{0UL,0xB1L,255UL,1UL,251UL,0UL},{0x8BL,0x5BL,252UL,0x5BL,0x8BL,0xC2L},{0x5BL,0x8BL,0xC2L,255UL,255UL,0x05L},{251UL,0x8CL,0x6AL,0x8BL,0x2BL,0x05L},{3UL,0xABL,0xC2L,0x6AL,0UL,255UL},{0x2BL,2UL,255UL,3UL,0x8BL,254UL}},{{0xB1L,0x19L,1UL,0x05L,0UL,0x76L},{255UL,3UL,252UL,252UL,3UL,255UL},{0x6AL,0x76L,0UL,2UL,1UL,1UL},{0xABL,252UL,0xF6L,3UL,0x05L,6UL},{0xABL,0x34L,3UL,2UL,0xB1L,251UL},{0x6AL,1UL,254UL,252UL,0xC2L,252UL},{255UL,6UL,0x34L,0x05L,0x1BL,0x6AL}}};
            unsigned l_203 = 0x307BCC87L;
            unsigned short l_213[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_213[i] = 65535UL;
            (*l_42) = g_2[1];
        }
        for (l_62 = 0; (l_62 >= 33); l_62 = safe_add_func_uint16_t_u_u(l_62, 7))
        {
            if (((safe_add_func_int64_t_s_s(((&g_65 == (void*)0) != g_2[1]), (*l_61))) | ((g_43 , ((safe_rshift_func_int16_t_s_s(g_43, 3)) && (g_68 & ((void*)0 == &l_61)))) , p_34)))
            {
                return g_43;
            }
            else
            {
                for (p_35 = 1; (p_35 <= 8); p_35 = safe_add_func_uint32_t_u_u(p_35, 2))
                {
                    (*l_185) = (*l_185);
                }
                l_193 ^= (*g_65);
                return p_33;
            }
        }
        (**l_185) = ((!(safe_div_func_uint64_t_u_u(p_36, (**l_185)))) >= (0UL > (p_33 == (safe_add_func_int64_t_s_s(p_35, (7L & (&g_64 == &l_162)))))));
        (*l_256) = func_48(l_256);


    }
    else
    {
        int *l_257 = &g_43;
        int l_306 = 9L;
        int ***l_335 = &l_324;
        int l_340 = 2L;
        if ((**g_64))
        {
            (*g_64) = l_257;

            ;
            return p_35;
        }
        else
        {
            long long l_268 = 0x70BFBD2DB29B32BALL;
            int *l_289[10] = {&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1],&l_208[1]};
            int i;
            if ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((*l_61) == l_268) || g_211), (safe_div_func_uint8_t_u_u(((4294967295UL ^ (((((safe_div_func_int8_t_s_s(((void*)0 == &g_65), 1L)) >= (4294967291UL ^ (*l_61))) == (*g_65)) > (*l_257)) && g_2[1])) > 3UL), 0x0FL)))), p_34)), g_211)) >= l_268) >= 0L), 5)), 0xFB0AL)))
            {
                int *l_275[9][5] = {{&g_68,&l_208[4],&g_68,&g_68,&l_208[4]},{&l_208[4],&g_68,&g_68,&l_208[4],&g_68},{&l_208[4],&l_208[4],&g_2[0],&l_208[4],&l_208[4]},{&g_68,&l_208[4],&g_68,&g_68,&l_208[4]},{&g_68,&g_2[0],&g_2[0],&g_68,&g_2[0]},{&g_68,&g_68,&l_208[4],&g_68,&g_68},{&g_2[0],&g_68,&g_2[0],&g_2[0],&g_68},{&g_68,&g_2[0],&g_2[0],&g_68,&g_2[0]},{&g_68,&g_68,&l_208[4],&g_68,&g_68}};
                unsigned l_288 = 18446744073709551607UL;
                int i, j;
                (*g_65) = (g_147 != ((safe_add_func_uint64_t_u_u(((((((void*)0 != l_275[6][0]) && (safe_mod_func_int16_t_s_s(((*l_61) >= (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_35, 0x53869009L)), 4L))), (safe_mod_func_int8_t_s_s(0xF2L, p_36))))) , &g_64) == (void*)0) >= l_268), 0x29B31E70AF4106D2LL)) , p_34));
                for (g_133 = (-21); (g_133 >= (-24)); g_133--)
                {
                    for (p_33 = 17; (p_33 > 39); p_33 = safe_add_func_uint16_t_u_u(p_33, 9))
                    {
                        return (*l_61);
                    }
                    return p_36;
                }
                l_288 |= (**g_64);
                if ((p_33 , ((void*)0 == (*g_64))))
                {
                    (*g_64) = l_289[4];

                    ;
                }
                else
                {
                    unsigned l_303 = 18446744073709551615UL;
                    g_65 = func_48(&l_61);

                    ;
                    ;
                    if ((**g_64))
                    {
                        (*l_61) = (safe_sub_func_uint16_t_u_u((g_147 > (*l_257)), ((*g_65) , 0xF2F5L)));
                    }
                    else
                    {
                        int l_296 = 3L;
                        l_306 |= (safe_div_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((void*)0 == l_289[4]), (l_296 >= (safe_lshift_func_uint8_t_u_u(((0x948781A7FB561B19LL <= (0x32AE1FD4621DE0E8LL <= g_43)) && (safe_lshift_func_int8_t_s_u(l_303, (safe_unary_minus_func_int32_t_s((g_68 < l_296)))))), p_34))))) ^ p_34) & 0xDF8891E8L), g_305));
                    }
                    for (g_133 = 0; (g_133 <= 13); g_133++)
                    {
                        (*l_61) = ((g_68 & (g_305 == (((g_2[0] ^ (safe_div_func_int16_t_s_s(p_36, (safe_rshift_func_int8_t_s_u(p_34, 3))))) ^ g_305) && 1UL))) & p_34);
                    }
                }

                ;
                ;
            }
            else
            {
                unsigned char l_322 = 250UL;
                int *l_323 = &g_2[1];
                (*l_257) = ((*l_257) , (((((**g_64) > g_43) | ((0x2AL && (g_305 == (((safe_unary_minus_func_uint32_t_u((p_34 == (-8L)))) & (p_36 > g_147)) , 6L))) >= g_2[1])) | 255UL) , (*g_65)));
                l_208[1] ^= ((((0x8D69C6D1A99E75E4LL == (g_2[1] <= (safe_mod_func_uint8_t_u_u(p_33, (p_33 | ((0x76D2L ^ (*l_257)) && (safe_sub_func_uint16_t_u_u((((*l_257) | (((((p_34 >= (safe_sub_func_uint64_t_u_u((g_133 >= 0x4B31A8EAL), 1L))) , (*l_61)) && g_2[1]) <= g_305) ^ g_305)) < p_35), g_2[1])))))))) < l_322) & 0x8A44L) , (*l_257));
                (*l_257) ^= (((&l_306 != l_323) >= (((void*)0 == l_324) , (safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(g_2[1])), ((g_147 & ((void*)0 != &g_65)) , (((((safe_unary_minus_func_uint16_t_u(p_35)) | g_68) , (void*)0) != (*g_64)) , p_35)))), p_35)))) && (-6L));
            }


            ;
        }


        ;
        l_257 = (*g_64);


        (***l_335) = ((safe_sub_func_int32_t_s_s((*l_61), (((safe_unary_minus_func_uint8_t_u(g_147)) || p_33) , (safe_unary_minus_func_int64_t_s(((((void*)0 == l_335) , g_2[1]) , (safe_sub_func_uint64_t_u_u((p_36 & (safe_add_func_uint32_t_u_u(((((((**l_324) | ((**l_324) , (*l_257))) , 0x7EDD21812B45DF68LL) < g_147) ^ (**l_324)) > 0xBC0BL), p_36))), l_340)))))))) | 0xE1C4210CL);
    }


    ;
    return p_33;



}







static int ** func_44(int * p_45, int p_46, unsigned long long p_47)
{
    int ***l_106 = &g_64;
    int **l_145 = &g_65;
    (*l_106) = &g_65;
    for (p_47 = 0; (p_47 == 50); p_47++)
    {
        int **l_113[5];
        unsigned l_153 = 0x8397568CL;
        int i;
        for (i = 0; i < 5; i++)
            l_113[i] = &g_65;
        for (g_43 = 0; (g_43 < 15); g_43 = safe_add_func_uint16_t_u_u(g_43, 9))
        {
            int l_114 = 0xDA34DBBDL;
            int l_161[7] = {0L,0L,0L,0L,0L,0L,0L};
            int i;
            l_114 = (safe_sub_func_int64_t_s_s((0xF9L < ((g_2[1] , l_113[3]) == (void*)0)), g_43));
        }
        (*l_145) = (void*)0;

        ;
        (*g_64) = (*g_64);
        return &g_65;


    }
    return (*l_106);


}







static int * func_48(int ** p_49)
{
    unsigned short l_83 = 0xC352L;
    int l_96[6];
    short l_105 = (-9L);
    int i;
    for (i = 0; i < 6; i++)
        l_96[i] = 0x58E9526DL;
    for (g_43 = 0; (g_43 >= 13); g_43 = safe_add_func_uint16_t_u_u(g_43, 6))
    {
        int *l_71[9] = {&g_43,&g_43,&g_2[1],&g_43,&g_43,&g_2[1],&g_43,&g_43,&g_2[1]};
        int ***l_72 = &g_64;
        int i;
        for (g_68 = (-14); (g_68 < 28); g_68++)
        {
            return l_71[4];


        }
        g_68 |= 0L;
        (*l_72) = p_49;
    }


    if ((((((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_68, (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_83 ^ l_83), (safe_add_func_uint16_t_u_u(l_83, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(l_83, l_83)), l_83)))))), g_68)) , ((safe_div_func_int32_t_s_s((-1L), 0x9D8D7774L)) , (*g_65))), (*g_65))))), 2)) <= l_83) & l_83) , g_2[1]) != l_83) | l_83) ^ g_68))
    {
        int l_97 = 0x9BA90DD0L;
        for (g_68 = 0; (g_68 > 21); g_68++)
        {
            unsigned l_100 = 0xE1C37891L;
            for (g_43 = 0; (g_43 < 14); g_43 = safe_add_func_int64_t_s_s(g_43, 4))
            {
                l_96[0] ^= (**p_49);
                l_96[2] |= ((l_97 , (safe_mod_func_int32_t_s_s(l_100, 0x71534BB8L))) <= ((((**p_49) , (safe_mod_func_uint64_t_u_u(g_43, g_68))) , (((safe_sub_func_int16_t_s_s(((l_105 || 4294967291UL) != (*g_65)), 0x4168L)) != 1UL) , &l_96[0])) != (void*)0));
            }
        }
    }
    else
    {
        (*p_49) = (*p_49);
    }
    return (*p_49);


}







static int ** func_50(long long p_51, int * p_52, int p_53, long long p_54, int ** p_55)
{
    (*p_52) = g_2[1];
    return g_64;


}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_434[i][j], "g_434[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_639[i][j], "g_639[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_840, "g_840", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_907[i], "g_907[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1089, "g_1089", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1236, "g_1236", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1255[i], "g_1255[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1269, "g_1269", print_hash_value);
    transparent_crc(g_1320, "g_1320", print_hash_value);
    transparent_crc(g_1385, "g_1385", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
