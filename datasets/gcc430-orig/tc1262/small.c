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
   short f0;
   signed f1 : 27;
   int f2;
   char * f3;
};

union U1 {
   short f0;
};

union U2 {
   int f0;
   unsigned f1;
   unsigned f2;
   unsigned char f3;
};


static int g_21 = 0xEEC80F21L;
static unsigned char g_22 = 253UL;
static union U0 g_27 = {0x3650L};
static char g_42 = 0x8DL;
static char *g_43[6][7] = {{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,(void*)0,(void*)0,&g_42,&g_42,&g_42,(void*)0},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,&g_42,(void*)0,(void*)0,&g_42,(void*)0,&g_42}};
static int g_70 = 0x6C3A74F5L;
static int *g_69 = &g_70;
static union U2 g_76 = {0x23B0CAFCL};
static unsigned short g_93 = 0x0B5BL;
static union U1 g_123 = {-1L};
static union U0 *g_134 = (void*)0;
static union U0 **g_133[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int g_157 = 0L;
static char g_170 = 0x4FL;
static union U2 g_186 = {0L};
static unsigned short g_198[9][4][2] = {{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}},{{6UL,6UL},{6UL,6UL},{6UL,6UL},{6UL,6UL}}};
static char **g_260 = &g_43[5][6];
static char ***g_259 = &g_260;
static char ****g_258 = &g_259;
static unsigned short *g_319 = &g_198[2][0][0];
static short g_343 = 0x8A58L;
static int g_354 = (-7L);



static union U0 func_1(void);
static union U0 * func_2(short p_3, char * p_4, union U2 p_5);
static unsigned char func_6(char * p_7, char * p_8);
static char * func_9(unsigned char p_10, char * p_11, char p_12, short p_13, union U0 * p_14);
static char * func_16(union U0 p_17);
static union U0 func_18(unsigned short p_19, unsigned short p_20);
static int func_34(int p_35, union U2 p_36, int p_37, union U0 * p_38);
static int * func_44(union U0 * p_45, int * p_46, union U0 ** p_47, unsigned p_48, union U0 p_49);
static union U0 ** func_52(char * p_53);
static char * func_54(union U0 p_55, union U0 * p_56, union U2 p_57, short p_58);
static union U0 func_1(void)
{
    unsigned char l_15 = 255UL;
    union U0 *l_26 = &g_27;
    union U2 l_39 = {-8L};
    char *l_169 = &g_42;
    union U0 **l_369 = &g_134;
    (*l_369) = func_2(((((((((-6L) && ((*l_169) = (((func_6((g_43[1][3] = func_9(l_15, func_16(((*l_26) = func_18(g_21, g_22))), ((!(g_22 != (+g_22))) & (((safe_div_func_int32_t_s_s(func_34(l_15, l_39, g_22, l_26), g_22)) >= 0x869EL) == 254UL)), l_39.f1, l_26)), &g_42) > g_42) | 0x28L) && g_21))) == (-1L)) == g_170) < 7UL) ^ g_170) >= l_39.f2) >= l_39.f1), l_169, l_39);
    return (*l_26);
}







static union U0 * func_2(short p_3, char * p_4, union U2 p_5)
{
    union U0 *l_173[5] = {&g_27,&g_27,&g_27,&g_27,&g_27};
    char *l_174[6] = {&g_170,&g_170,&g_170,&g_170,&g_170,&g_170};
    int l_175 = 1L;
    int l_176 = 0xA3BF2598L;
    int l_201 = 0x2B71B2A3L;
    union U0 l_227 = {-1L};
    unsigned char l_228 = 0x6FL;
    char **l_235[7][3][1] = {{{(void*)0},{&l_174[3]},{(void*)0}},{{&l_174[3]},{(void*)0},{(void*)0}},{{&g_43[1][3]},{&g_43[1][3]},{(void*)0}},{{&l_174[2]},{&g_43[5][3]},{(void*)0}},{{&g_43[3][5]},{(void*)0},{&g_43[5][3]}},{{&l_174[2]},{(void*)0},{&g_43[1][3]}},{{(void*)0},{&l_174[2]},{&g_43[5][3]}}};
    char ***l_234 = &l_235[1][0][0];
    char *l_274 = (void*)0;
    union U2 l_276 = {0xE4827AF0L};
    union U1 *l_328[9][3][2] = {{{&g_123,&g_123},{&g_123,(void*)0},{&g_123,&g_123}},{{(void*)0,&g_123},{&g_123,(void*)0},{&g_123,&g_123}},{{&g_123,(void*)0},{&g_123,&g_123},{(void*)0,&g_123}},{{&g_123,(void*)0},{&g_123,&g_123},{&g_123,&g_123}},{{&g_123,&g_123},{&g_123,&g_123},{&g_123,&g_123}},{{&g_123,&g_123},{&g_123,(void*)0},{&g_123,&g_123}},{{(void*)0,&g_123},{&g_123,(void*)0},{&g_123,&g_123}},{{&g_123,(void*)0},{&g_123,&g_123},{(void*)0,&g_123}},{{&g_123,(void*)0},{&g_123,&g_123},{&g_123,&g_123}}};
    int *l_352 = (void*)0;
    short l_363 = 0x3B4DL;
    int *l_366 = &g_354;
    short *l_367 = &g_123.f0;
    union U0 *l_368 = &g_27;
    int i, j, k;
    if ((safe_add_func_int8_t_s_s((l_176 |= (l_175 = ((*p_4) = (*p_4)))), 0L)))
    {
        char l_177[6];
        union U2 *l_178 = &g_76;
        int *l_179 = &g_27.f2;
        int *l_180 = &g_27.f2;
        union U0 *l_181 = &g_27;
        unsigned char *l_182 = (void*)0;
        unsigned char *l_183[10] = {&g_76.f3,(void*)0,&g_76.f3,&g_76.f3,&g_76.f3,&g_76.f3,(void*)0,&g_76.f3,&g_76.f3,&g_76.f3};
        unsigned short *l_187 = &g_93;
        union U0 **l_196[4][1];
        unsigned short *l_197 = &g_198[2][0][0];
        int i, j;
        for (i = 0; i < 6; i++)
            l_177[i] = 0L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_196[i][j] = &g_134;
        }
        (*g_69) |= (((l_177[0] > (g_22 = func_34(p_5.f3, ((*l_178) = p_5), (l_176 ^= (l_177[0] >= l_175)), l_181))) & (((*l_187) = (safe_sub_func_int16_t_s_s(func_34(p_3, g_186, g_157, l_181), p_3))) != 0x4C13L)) | (*p_4));
        if (((((*l_187) ^= (l_177[0] & g_27.f0)) < ((l_175 != (safe_rshift_func_uint8_t_u_u(((65527UL | (p_5.f2 && (safe_add_func_int16_t_s_s((p_3 <= g_21), ((*l_197) = ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_181 != (l_173[3] = l_181)), 0x6CE72152L)), p_5.f3)) & 65535UL)))))) < l_177[1]), 1))) & 0xCE875DABL)) != l_177[0]))
        {
            int *l_199 = &g_157;
            int **l_200 = &l_199;
            int l_218[4][8][2] = {{{0x3A9CDA35L,0x302614C5L},{0x302614C5L,0x3A9CDA35L},{0xEE176D6BL,(-5L)},{0xEE176D6BL,0x3A9CDA35L},{0x302614C5L,0x302614C5L},{0x3A9CDA35L,0xEE176D6BL},{(-5L),0xEE176D6BL},{0x3A9CDA35L,0x302614C5L}},{{0x302614C5L,0x3A9CDA35L},{0xEE176D6BL,0L},{(-5L),0x1862B91AL},{0xEE176D6BL,0xEE176D6BL},{0x1862B91AL,(-5L)},{0L,(-5L)},{0x1862B91AL,0xEE176D6BL},{0xEE176D6BL,0x1862B91AL}},{{(-5L),0L},{(-5L),0x1862B91AL},{0xEE176D6BL,0xEE176D6BL},{0x1862B91AL,(-5L)},{0L,(-5L)},{0x1862B91AL,0xEE176D6BL},{0xEE176D6BL,0x1862B91AL},{(-5L),0L}},{{(-5L),0x1862B91AL},{0xEE176D6BL,0xEE176D6BL},{0x1862B91AL,(-5L)},{0L,(-5L)},{0x1862B91AL,0xEE176D6BL},{0xEE176D6BL,0x1862B91AL},{(-5L),0L},{(-5L),0x1862B91AL}}};
            union U0 *l_220 = (void*)0;
            char **l_230 = &l_174[1];
            char ***l_229 = &l_230;
            char ***l_239 = &l_235[6][2][0];
            int i, j, k;
            (*g_69) |= p_5.f2;
            (*l_200) = l_199;
            if (l_201)
            {
                for (g_42 = 5; (g_42 >= 0); g_42 -= 1)
                {
                    int *l_202 = &g_157;
                    (*l_200) = l_202;
                }
            }
            else
            {
                char *l_214 = &l_177[0];
                int l_217[7][2];
                union U0 *l_219 = &g_27;
                union U0 l_226[4] = {{0x32B2L},{0x32B2L},{0x32B2L},{0x32B2L}};
                char ****l_231 = &l_229;
                char ***l_233[5][6][3] = {{{&l_230,&l_230,(void*)0},{&l_230,&l_230,&l_230},{&l_230,&l_230,&l_230},{(void*)0,&l_230,&l_230},{&l_230,&l_230,(void*)0},{&l_230,(void*)0,&l_230}},{{&l_230,&l_230,&l_230},{&l_230,&l_230,&l_230},{&l_230,&l_230,(void*)0},{&l_230,&l_230,&l_230},{&l_230,&l_230,&l_230},{(void*)0,&l_230,&l_230}},{{&l_230,&l_230,&l_230},{&l_230,(void*)0,&l_230},{&l_230,&l_230,(void*)0},{&l_230,&l_230,&l_230},{(void*)0,&l_230,&l_230},{&l_230,&l_230,&l_230}},{{&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230},{&l_230,&l_230,&l_230},{(void*)0,&l_230,&l_230},{&l_230,&l_230,&l_230},{&l_230,(void*)0,&l_230}},{{&l_230,&l_230,&l_230},{&l_230,&l_230,&l_230},{(void*)0,&l_230,&l_230},{&l_230,&l_230,&l_230},{&l_230,(void*)0,&l_230},{&l_230,&l_230,&l_230}}};
                char ****l_232 = &l_233[4][3][0];
                char ****l_236 = (void*)0;
                char ****l_237 = (void*)0;
                char ****l_238 = &l_234;
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_217[i][j] = 0x935D499BL;
                }
                for (g_76.f0 = 0; (g_76.f0 != 15); ++g_76.f0)
                {
                    unsigned char l_205 = 0x74L;
                    short *l_210 = &g_27.f0;
                    short *l_211 = &g_123.f0;
                    p_5.f0 = ((*l_199) |= (l_205 <= ((((safe_add_func_int8_t_s_s((&p_5 != (void*)0), g_198[7][2][0])) <= (((void*)0 != &g_198[2][2][1]) == (255UL | 0xDEL))) && (safe_rshift_func_int16_t_s_s(((*l_211) = ((*l_210) &= (((*g_69) == p_5.f2) & g_76.f0))), 9))) | p_5.f3)));
                    if (((safe_rshift_func_int16_t_s_u(((void*)0 == l_214), 4)) > (*l_199)))
                    {
                        (**l_200) = p_5.f1;
                        (**l_200) = (safe_sub_func_uint32_t_u_u(0x70F4BDAFL, l_217[3][1]));
                        if (l_217[1][0])
                            continue;
                        (*g_69) = func_34(p_5.f1, p_5, l_218[1][5][0], l_219);
                    }
                    else
                    {
                        (*l_199) = (g_157 >= p_5.f3);
                    }
                }
                for (g_186.f3 = 0; (g_186.f3 <= 0); g_186.f3 += 1)
                {
                    for (p_5.f2 = 0; (p_5.f2 <= 0); p_5.f2 += 1)
                    {
                        int l_223 = 1L;
                        int **l_224 = (void*)0;
                        int **l_225 = &g_69;
                        int i, j;
                        (*l_225) = ((*l_200) = &l_201);
                    }
                }
                p_5.f0 |= (((*l_232) = ((*l_231) = l_229)) != (l_239 = ((*l_238) = l_234)));
            }
        }
        else
        {
            union U0 *l_240 = (void*)0;
            return l_240;
        }
    }
    else
    {
        unsigned short l_243 = 0UL;
        int l_248 = 0L;
        int l_263 = 0x95053D33L;
        union U0 *l_290 = (void*)0;
        short l_312 = 0L;
        int *l_326 = &l_248;
        union U2 l_336[7] = {{0xDE2A011EL},{0xDE2A011EL},{0xDE2A011EL},{0xDE2A011EL},{0xDE2A011EL},{0xDE2A011EL},{0xDE2A011EL}};
        char l_340 = 0x55L;
        int i;
lbl_298:
        l_243 = (safe_lshift_func_uint16_t_u_s(p_5.f2, 0));
        (*g_69) ^= (~0L);
        for (g_76.f1 = 0; (g_76.f1 <= 5); g_76.f1 += 1)
        {
            unsigned short l_253 = 1UL;
            union U2 l_275 = {0xABC0FDD5L};
            union U1 *l_296[3];
            union U2 l_313[3] = {{0x0F5E0B14L},{0x0F5E0B14L},{0x0F5E0B14L}};
            char l_357 = (-6L);
            int i;
            for (i = 0; i < 3; i++)
                l_296[i] = &g_123;
            (*g_69) = 0x9EEF94E8L;
            for (g_70 = 0; (g_70 <= 5); g_70 += 1)
            {
                union U0 *l_255 = &g_27;
                int l_257 = 0x1E8FE05AL;
                unsigned l_265 = 4294967295UL;
                union U0 *l_277 = &l_227;
                union U1 *l_294 = &g_123;
                unsigned short *l_315[8] = {&l_243,&l_243,&l_243,&l_243,&l_243,&l_243,&l_243,&l_243};
                unsigned short **l_314 = &l_315[0];
                union U0 *l_322 = &l_227;
                int i;
                for (g_21 = 5; (g_21 >= 0); g_21 -= 1)
                {
                    unsigned char l_254 = 0xDDL;
                    union U0 *l_256 = &l_227;
                    int l_280 = 0x76ADDCD7L;
                    union U1 **l_295[8][8][4] = {{{(void*)0,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{(void*)0,&l_294,&l_294,(void*)0},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{(void*)0,&l_294,(void*)0,(void*)0},{&l_294,&l_294,&l_294,&l_294}},{{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{(void*)0,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{&l_294,&l_294,(void*)0,&l_294}},{{(void*)0,&l_294,&l_294,&l_294},{&l_294,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,&l_294},{(void*)0,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,&l_294},{(void*)0,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{(void*)0,(void*)0,&l_294,&l_294}},{{&l_294,&l_294,(void*)0,&l_294},{(void*)0,&l_294,&l_294,&l_294},{&l_294,(void*)0,(void*)0,&l_294},{&l_294,&l_294,&l_294,(void*)0},{(void*)0,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294}},{{&l_294,&l_294,&l_294,(void*)0},{&l_294,(void*)0,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,(void*)0},{&l_294,&l_294,&l_294,&l_294},{(void*)0,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294}},{{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{&l_294,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294}},{{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,(void*)0},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,(void*)0},{&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294}},{{(void*)0,(void*)0,(void*)0,&l_294},{(void*)0,&l_294,&l_294,(void*)0},{&l_294,&l_294,(void*)0,&l_294},{&l_294,&l_294,&l_294,(void*)0},{&l_294,&l_294,&l_294,&l_294},{&l_294,(void*)0,&l_294,&l_294},{&l_294,&l_294,(void*)0,(void*)0},{&l_294,&l_294,&l_294,&l_294}}};
                    int *l_297 = &l_201;
                    int i, j, k;
                    if (((func_34((safe_lshift_func_uint16_t_u_u(p_5.f2, (safe_add_func_int16_t_s_s((((~(((l_248 = (*p_4)) || func_34(l_175, g_186, (0x14E5L < func_34((((safe_rshift_func_uint8_t_u_u(l_248, ((65533UL || g_76.f0) || (safe_rshift_func_uint16_t_u_s(g_93, 8))))) <= l_253) != l_254), p_5, g_170, l_255)), l_256)) < l_257)) <= 0L) && 65535UL), g_70)))), p_5, g_170, &l_227) > g_76.f0) > l_257))
                    {
                        char l_261[1];
                        int *l_262 = &l_257;
                        union U2 l_264 = {-1L};
                        int *l_278 = &l_227.f2;
                        union U0 *l_279 = &g_27;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_261[i] = 0x7DL;
                        p_5.f0 ^= ((g_258 = (void*)0) == &g_259);
                        (*l_262) = (l_261[0] == l_254);
                        l_280 &= func_34((p_5.f0 = l_263), l_264, ((*l_278) = (l_265 ^ (((safe_sub_func_uint8_t_u_u(func_34((l_265 && (safe_mod_func_uint32_t_u_u(g_170, func_34(func_34((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((((void*)0 == l_274) && ((((l_248 || ((*g_69) & (*g_69))) <= l_175) == 65534UL) && p_3)), l_254)) == (-10L)) <= (*l_262)), (*l_262))), l_275, p_3, l_255), l_276, p_3, l_256)))), l_264, p_3, l_277), (*p_4))) >= 0x4F9AL) & (-1L)))), l_279);
                        return l_255;
                    }
                    else
                    {
                        union U0 **l_291 = (void*)0;
                        union U0 **l_292 = &l_255;
                        int *l_293 = &g_186.f0;
                        p_5.f0 |= (*g_69);
                        l_263 = (safe_div_func_int32_t_s_s((*g_69), (safe_lshift_func_uint8_t_u_s(((+0x1DC3L) < (safe_rshift_func_uint16_t_u_s(0x3DCFL, ((((&g_22 != p_4) > (*g_69)) > (g_198[4][2][1] &= 1UL)) ^ (safe_unary_minus_func_uint32_t_u(l_263)))))), 0))));
                        if ((*g_69))
                            break;
                        (*l_293) &= (l_263 & (l_257 = ((func_34((*g_69), p_5, ((safe_div_func_uint16_t_u_u(l_175, func_34(l_275.f2, p_5, l_257, ((*l_292) = (l_290 = (void*)0))))) >= (*g_69)), l_277) || l_275.f2) >= (*p_4))));
                    }
                    l_296[2] = l_294;
                    (*l_297) |= (*g_69);
                }
                for (l_275.f0 = 1; (l_275.f0 <= 5); l_275.f0 += 1)
                {
                    int l_305 = 0xE9DA0C82L;
                    if (l_275.f0)
                        goto lbl_298;
                    for (g_186.f2 = 0; (g_186.f2 <= 0); g_186.f2 += 1)
                    {
                        int *l_306 = &l_176;
                        int *l_309 = &l_263;
                        (*l_306) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(func_34(p_5.f0, g_76, (safe_sub_func_int8_t_s_s((((*l_306) = (g_157 < l_305)) > (safe_lshift_func_uint16_t_u_u((l_257 & (((*l_309) = 0xD66F257DL) == (safe_mod_func_uint32_t_u_u(0x1C25903AL, func_34(((l_312 || ((l_276.f1 || 7L) ^ (*p_4))) ^ p_5.f2), l_313[0], p_5.f0, &l_227))))), 8))), g_22)), l_277), g_170)), 250UL));
                        if ((*g_69))
                            break;
                        (*l_309) = (p_5.f3 == ((void*)0 == p_4));
                        if (p_5.f3)
                            break;
                    }
                    for (g_93 = 0; (g_93 <= 5); g_93 += 1)
                    {
                        unsigned short ***l_316 = &l_314;
                        (*l_316) = l_314;
                    }
                }
                for (p_5.f3 = 1; (p_5.f3 <= 5); p_5.f3 += 1)
                {
                    int *l_320 = &g_21;
                    int i;
                    (*l_320) = (safe_div_func_uint32_t_u_u(p_3, ((l_276.f0 = (l_315[(p_5.f3 + 1)] == (g_319 = &l_243))) | g_76.f2)));
                }
                p_5.f0 = 0x4FD0D3E9L;
            }
            if (l_276.f1)
                goto lbl_298;
            for (l_175 = 0; (l_175 >= 0); l_175 -= 1)
            {
                int *l_324 = &g_186.f0;
                union U0 *l_337 = &l_227;
                for (l_228 = 0; (l_228 <= 0); l_228 += 1)
                {
                    l_324 = &l_176;
                    if ((*l_324))
                    {
                        int **l_325 = &g_69;
                        (*l_325) = &g_70;
                    }
                    else
                    {
                        int **l_327 = &g_69;
                        union U1 **l_329 = &l_296[2];
                        l_326 = (void*)0;
                        (*l_327) = &g_157;
                        (*l_329) = l_328[6][1][1];
                    }
                    for (g_170 = 3; (g_170 >= 1); g_170 -= 1)
                    {
                        union U0 **l_330 = &l_173[(l_228 + 2)];
                        union U1 **l_331 = &l_296[2];
                        union U1 **l_332 = &l_328[3][1][0];
                        int i;
                        (*l_330) = l_173[(l_228 + 2)];
                        p_5.f0 = (p_5.f0 & (*p_4));
                        (*l_332) = ((*l_331) = &g_123);
                    }
                }
            }
            for (l_340 = 1; (l_340 <= 5); l_340 += 1)
            {
                int **l_359[8][6] = {{&g_69,(void*)0,(void*)0,(void*)0,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69,(void*)0,(void*)0},{&l_326,&g_69,&g_69,&l_326,(void*)0,&l_326},{&l_326,(void*)0,&l_326,&g_69,&g_69,&l_326},{(void*)0,(void*)0,&g_69,(void*)0,&g_69,(void*)0},{&g_69,(void*)0,(void*)0,(void*)0,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69,(void*)0,(void*)0},{&l_326,&g_69,&g_69,&l_326,(void*)0,&l_326}};
                int *l_360 = &g_21;
                int i, j;
                l_360 = (void*)0;
            }
        }
    }
    (*g_69) = 0xA2C7F498L;
    (*g_69) = (safe_mod_func_int32_t_s_s(((l_276.f2 == ((*l_367) ^= (l_228 > ((p_3 >= ((l_363 ^ l_276.f2) < (func_34(p_5.f0, l_276, ((*l_366) |= (safe_lshift_func_uint8_t_u_u(p_5.f2, 6))), &l_227) || l_276.f1))) & 3UL)))) == 0x4AA1L), (*g_69)));
    (*g_69) = l_363;
    return l_368;
}







static unsigned char func_6(char * p_7, char * p_8)
{
    union U0 *l_50 = &g_27;
    int *l_51 = &g_21;
    union U2 l_59 = {0xADD890AAL};
    union U0 l_135 = {0L};
    int **l_168 = &g_69;
    (*l_168) = func_44(l_50, l_51, func_52(func_54(func_18(func_34((*l_51), l_59, func_34(((*p_8) && 255UL), l_59, (safe_lshift_func_int16_t_s_u((*l_51), (*l_51))), l_50), l_50), g_27.f0), &g_27, l_59, g_22)), l_59.f1, l_135);
    return (*l_51);
}







static char * func_9(unsigned char p_10, char * p_11, char p_12, short p_13, union U0 * p_14)
{
    char *l_41 = &g_42;
    return l_41;
}







static char * func_16(union U0 p_17)
{
    char *l_28 = (void*)0;
    int *l_29 = &g_21;
    union U0 *l_31[3][9] = {{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27}};
    union U0 **l_30 = &l_31[0][3];
    int i, j;
    (*l_29) = ((void*)0 != l_28);
    (*l_30) = &g_27;
    return l_28;
}







static union U0 func_18(unsigned short p_19, unsigned short p_20)
{
    union U0 l_25 = {-1L};
    for (g_21 = 0; (g_21 >= 21); g_21++)
    {
        return l_25;
    }
    g_21 = (l_25.f0 & 1L);
    return l_25;
}







static int func_34(int p_35, union U2 p_36, int p_37, union U0 * p_38)
{
    unsigned l_40 = 0UL;
    l_40 &= (~(-2L));
    return p_36.f2;
}







static int * func_44(union U0 * p_45, int * p_46, union U0 ** p_47, unsigned p_48, union U0 p_49)
{
    int l_139 = 3L;
    union U0 *l_153 = &g_27;
    union U2 l_163 = {0xEDFF1B34L};
    char l_166 = 0x4AL;
    for (g_70 = (-23); (g_70 > 9); g_70 = safe_add_func_uint8_t_u_u(g_70, 5))
    {
        short *l_138 = &g_27.f0;
        l_139 &= ((*p_46) = (((*l_138) = 0x4D94L) && p_48));
    }
    (*g_69) = l_139;
    for (g_76.f3 = 0; (g_76.f3 <= 5); g_76.f3 += 1)
    {
        union U0 *l_155 = &g_27;
        int l_162[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        union U2 l_164 = {0xC2A325B7L};
        int i;
        for (g_123.f0 = 5; (g_123.f0 >= 1); g_123.f0 -= 1)
        {
            int **l_140 = &g_69;
            (*l_140) = &g_21;
            if ((*p_46))
                continue;
        }
        for (p_48 = 0; (p_48 <= 5); p_48 += 1)
        {
            int *l_154 = &l_139;
            int *l_156 = &g_157;
            int *l_165 = &g_27.f2;
            int **l_167 = &l_156;
            (*l_156) |= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_22, 1)), (g_70 | g_93))) != (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(g_76.f3, 0x54C8L)), (-1L))), (*l_154))) ^ g_22), g_21)));
        }
    }
    return &g_21;
}







static union U0 ** func_52(char * p_53)
{
    char *l_127[9] = {&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42};
    unsigned short *l_128 = &g_93;
    int l_129[2];
    union U0 *l_131 = (void*)0;
    union U0 **l_130 = &l_131;
    union U0 **l_132[5][3][9] = {{{&l_131,&l_131,&l_131,(void*)0,&l_131,&l_131,(void*)0,&l_131,&l_131},{&l_131,&l_131,&l_131,(void*)0,(void*)0,&l_131,(void*)0,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131}},{{(void*)0,&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0,&l_131,&l_131},{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{(void*)0,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131}},{{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{&l_131,(void*)0,&l_131,(void*)0,(void*)0,&l_131,&l_131,&l_131,&l_131}},{{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{(void*)0,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131}},{{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{&l_131,(void*)0,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131},{&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131,&l_131}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_129[i] = 0x155EFB0FL;
    l_129[1] = (safe_lshift_func_uint16_t_u_s(((*l_128) = ((void*)0 != l_127[8])), l_129[1]));
    return g_133[5];
}







static char * func_54(union U0 p_55, union U0 * p_56, union U2 p_57, short p_58)
{
    int l_62[9][5][5] = {{{1L,9L,(-1L),0x72FEE613L,(-6L)},{0L,(-3L),0L,0x06571F67L,(-1L)},{1L,0xD3184BAFL,(-1L),(-6L),(-6L)},{4L,(-3L),4L,0x06571F67L,0xC9466B01L},{1L,9L,(-1L),0x72FEE613L,(-6L)}},{{0L,0x06571F67L,(-1L),(-1L),(-1L)},{9L,0x72FEE613L,0xD3184BAFL,0xDAC17B1AL,0xDAC17B1AL},{1L,0x06571F67L,1L,(-1L),1L},{9L,(-6L),0xD3184BAFL,0x3003F861L,0xDAC17B1AL},{(-1L),0x06571F67L,(-1L),(-1L),(-1L)}},{{9L,0x72FEE613L,0xD3184BAFL,0xDAC17B1AL,0xDAC17B1AL},{1L,0x06571F67L,1L,(-1L),1L},{9L,(-6L),0xD3184BAFL,0x3003F861L,0xDAC17B1AL},{(-1L),0x06571F67L,(-1L),(-1L),(-1L)},{9L,0x72FEE613L,0xD3184BAFL,0xDAC17B1AL,0xDAC17B1AL}},{{1L,0x06571F67L,1L,(-1L),1L},{9L,(-6L),0xD3184BAFL,0x3003F861L,0xDAC17B1AL},{(-1L),0x06571F67L,(-1L),(-1L),(-1L)},{9L,0x72FEE613L,0xD3184BAFL,0xDAC17B1AL,0xDAC17B1AL},{1L,0x06571F67L,1L,(-1L),1L}},{{9L,(-6L),0xD3184BAFL,0x3003F861L,0xDAC17B1AL},{(-1L),0x06571F67L,(-1L),(-1L),(-1L)},{9L,0x72FEE613L,0xD3184BAFL,0xDAC17B1AL,0xDAC17B1AL},{1L,0x06571F67L,1L,(-1L),1L},{9L,(-6L),0x3003F861L,(-1L),1L}},{{(-1L),0L,(-1L),(-1L),0L},{0xDAC17B1AL,0x9EED1686L,0x3003F861L,1L,1L},{1L,0L,1L,(-1L),4L},{0xDAC17B1AL,1L,0x3003F861L,(-1L),1L},{(-1L),0L,(-1L),(-1L),0L}},{{0xDAC17B1AL,0x9EED1686L,0x3003F861L,1L,1L},{1L,0L,1L,(-1L),4L},{0xDAC17B1AL,1L,0x3003F861L,(-1L),1L},{(-1L),0L,(-1L),(-1L),0L},{0xDAC17B1AL,0x9EED1686L,0x3003F861L,1L,1L}},{{1L,0L,1L,(-1L),4L},{0xDAC17B1AL,1L,0x3003F861L,(-1L),1L},{(-1L),0L,(-1L),(-1L),0L},{0xDAC17B1AL,0x9EED1686L,0x3003F861L,1L,1L},{1L,0L,1L,(-1L),4L}},{{0xDAC17B1AL,1L,0x3003F861L,(-1L),1L},{(-1L),0L,(-1L),(-1L),0L},{0xDAC17B1AL,0x9EED1686L,0x3003F861L,1L,1L},{1L,0L,(-9L),(-3L),1L},{1L,1L,0x9EED1686L,0xD3184BAFL,9L}}};
    union U2 *l_75 = &g_76;
    unsigned l_121 = 18446744073709551615UL;
    int i, j, k;
    for (p_57.f1 = 0; (p_57.f1 <= 5); p_57.f1 += 1)
    {
        int l_63 = 0x084C010BL;
        char *l_96[10][4][6] = {{{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,(void*)0,(void*)0,&g_42,(void*)0},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42}},{{(void*)0,&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,(void*)0,(void*)0,&g_42,(void*)0},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,&g_42}},{{&g_42,&g_42,(void*)0,(void*)0,&g_42,(void*)0},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,(void*)0,(void*)0,&g_42,(void*)0}},{{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,(void*)0,&g_42,(void*)0,&g_42},{(void*)0,&g_42,(void*)0,&g_42,(void*)0,&g_42}},{{&g_42,&g_42,&g_42,(void*)0,(void*)0,(void*)0},{&g_42,&g_42,&g_42,&g_42,(void*)0,&g_42},{(void*)0,&g_42,(void*)0,&g_42,(void*)0,&g_42},{&g_42,&g_42,&g_42,(void*)0,(void*)0,(void*)0}},{{&g_42,&g_42,&g_42,&g_42,(void*)0,&g_42},{(void*)0,&g_42,(void*)0,&g_42,(void*)0,&g_42},{&g_42,&g_42,&g_42,(void*)0,(void*)0,(void*)0},{&g_42,&g_42,&g_42,&g_42,(void*)0,&g_42}},{{(void*)0,&g_42,(void*)0,&g_42,(void*)0,&g_42},{&g_42,&g_42,&g_42,(void*)0,(void*)0,(void*)0},{&g_42,&g_42,&g_42,&g_42,(void*)0,&g_42},{(void*)0,&g_42,(void*)0,&g_42,(void*)0,&g_42}},{{&g_42,&g_42,&g_42,(void*)0,(void*)0,(void*)0},{&g_42,&g_42,&g_42,&g_42,(void*)0,&g_42},{(void*)0,&g_42,(void*)0,(void*)0,&g_42,&g_42},{&g_42,&g_42,(void*)0,&g_42,&g_42,&g_42}},{{(void*)0,&g_42,&g_42,&g_42,&g_42,(void*)0},{&g_42,&g_42,&g_42,(void*)0,&g_42,&g_42},{&g_42,&g_42,(void*)0,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,(void*)0}},{{&g_42,&g_42,&g_42,(void*)0,&g_42,&g_42},{&g_42,&g_42,(void*)0,&g_42,&g_42,&g_42},{(void*)0,&g_42,&g_42,&g_42,&g_42,(void*)0},{&g_42,&g_42,&g_42,(void*)0,&g_42,&g_42}}};
        int i, j, k;
        if (p_57.f0)
            break;
        l_62[0][2][4] = (&p_56 == &p_56);
        if (l_63)
            continue;
        for (g_21 = 5; (g_21 >= 0); g_21 -= 1)
        {
            char l_64 = 0xAAL;
            int l_82 = (-1L);
            union U2 l_109 = {-2L};
            union U1 *l_122[1];
            union U1 **l_124 = &l_122[0];
            int i;
            for (i = 0; i < 1; i++)
                l_122[i] = &g_123;
            for (g_22 = 0; (g_22 <= 5); g_22 += 1)
            {
                int *l_67[8] = {(void*)0,&l_63,(void*)0,&l_63,(void*)0,&l_63,(void*)0,&l_63};
                unsigned l_74 = 0xF92AC6B8L;
                unsigned short l_83 = 0UL;
                unsigned short l_118 = 0UL;
                union U0 *l_119 = (void*)0;
                int l_120 = 0x9FC31E85L;
                int i;
            }
            for (g_76.f1 = 0; (g_76.f1 <= 5); g_76.f1 += 1)
            {
                (*g_69) ^= ((void*)0 == &l_75);
            }
            (*l_124) = l_122[0];
        }
    }
    return &g_42;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_186.f3, "g_186.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_198[i][j][k], "g_198[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
