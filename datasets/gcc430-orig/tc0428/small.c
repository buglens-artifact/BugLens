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



static int g_2 = 0x399841B3L;
static int g_31 = (-1L);
static int *g_30[9][1] = {{&g_31},{&g_31},{&g_31},{&g_31},{&g_31},{&g_31},{&g_31},{&g_31},{&g_31}};
static int g_54 = (-8L);
static int g_62 = 0x0FD77138L;
static int *g_82 = &g_62;
static int **g_81 = &g_82;
static int g_89 = (-9L);
static char g_204 = 0x43L;
static unsigned long long g_263 = 0xF3632F02CFCB3635LL;
static char g_306 = 0xE5L;
static unsigned g_395 = 4294967292UL;
static unsigned g_409 = 0xC73ECC8EL;
static unsigned short g_510 = 3UL;
static int *g_649 = &g_62;
static long long g_683 = 0L;
static unsigned char g_871 = 0xBDL;
static unsigned char g_969[6][5] = {{255UL,0x50L,255UL,0xC6L,0x50L},{3UL,248UL,0xC6L,3UL,0xC6L},{3UL,3UL,255UL,0x50L,0x36L},{255UL,0x36L,0xC6L,0xC6L,0x36L},{0x36L,248UL,255UL,0x36L,0xC6L},{0x50L,0x36L,255UL,0x36L,0x50L}};
static int **g_1027 = &g_30[4][0];
static int *g_1064[10] = {&g_89,(void*)0,&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89,&g_2,&g_2};
static int g_1229 = 0x20C3CBABL;
static unsigned long long g_1232 = 0xFD4539ECB8A29C32LL;
static char g_1233 = 1L;
static int *g_1241 = &g_89;
static long long g_1284 = 1L;
static int **g_1576 = &g_1064[7];
static char g_1604 = 0x0CL;
static unsigned char g_1639 = 255UL;
static unsigned g_1713 = 0xD16DD8EEL;
static char g_1854 = 2L;
static int **g_2005 = &g_1241;
static short g_2024 = 0xF5E6L;



static int func_1(void);
static long long func_9(unsigned short p_10, unsigned char p_11, long long p_12, unsigned short p_13, unsigned long long p_14);
static unsigned short func_15(unsigned short p_16, long long p_17);
static int func_22(int * p_23, int * p_24, int ** p_25, char p_26);
static int ** func_27(short p_28, int p_29);
static int * func_34(int * p_35, int ** p_36, unsigned p_37);
static int * func_38(char p_39, int p_40, int ** p_41, int * p_42);
static short func_45(short p_46, long long p_47, char p_48, long long p_49);
static int * func_52(int ** p_53);
static long long func_63(unsigned p_64, int ** p_65, int ** p_66, unsigned short p_67);
static int func_1(void)
{
    unsigned l_5[10][7] = {{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L},{4UL,1UL,1UL,4UL,0xEB6B9DD9L,0UL,0xEB6B9DD9L}};
    int *l_1588 = (void*)0;
    int l_1600 = (-1L);
    unsigned l_1674 = 0UL;
    long long l_1688[4];
    int ***l_1716 = &g_81;
    short l_1729 = 0x58AAL;
    char l_1744 = 0x3BL;
    short l_1745 = 0x6ED1L;
    char l_1779 = 0xF6L;
    unsigned short l_1819 = 0UL;
    int l_1914[5];
    unsigned l_1969 = 18446744073709551613UL;
    int **l_1988 = &g_30[8][0];
    long long l_2008[9] = {(-9L),0x79DC34A810A4F1C6LL,(-9L),0x79DC34A810A4F1C6LL,(-9L),0x79DC34A810A4F1C6LL,(-9L),0x79DC34A810A4F1C6LL,(-9L)};
    int i, j;
    for (i = 0; i < 4; i++)
        l_1688[i] = 0xA89F9AE8B54AF3F1LL;
    for (i = 0; i < 5; i++)
        l_1914[i] = 0L;
    for (g_2 = 0; (g_2 >= 0); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    {
        if (g_2)
            break;
    }
    for (g_2 = 0; (g_2 <= 6); g_2 += 1)
    {
        unsigned l_8 = 0xB49D585EL;
        int *l_1583 = &g_2;
        int l_1603 = 9L;
        int l_1605 = 9L;
        unsigned l_1662 = 1UL;
        int ***l_1668 = (void*)0;
        char l_1689 = (-10L);
        unsigned l_1708 = 4294967295UL;
        int l_1712 = 7L;
        if ((safe_mod_func_uint8_t_u_u(g_2, (((l_8 == (((l_5[4][3] , (65530UL == (0x4145C17473468807LL >= l_8))) , (1UL > (l_8 , func_9(func_15(l_5[7][3], l_5[1][1]), l_8, g_1232, l_5[9][2], l_5[1][3])))) , 0x6911L)) >= l_5[9][2]) , l_5[6][4]))))
        {
            for (g_263 = 0; (g_263 <= 6); g_263 += 1)
            {
                int *l_1582 = &g_31;
                int ***l_1586[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1586[i] = (void*)0;
                if ((l_1582 != l_1583))
                {
                    int i, j;
                    return l_5[g_2][g_2];
                }
                else
                {
                    unsigned short l_1587 = 0UL;
                    int *l_1589 = &g_31;
                    (*g_649) = (((*l_1583) , &g_81) == (((safe_add_func_int8_t_s_s((((l_1586[1] == (g_31 , &g_1027)) , l_1587) != ((g_1232 > ((void*)0 != &g_1064[7])) & 0x59B72CE8058BB374LL)), l_5[2][3])) != g_510) , &g_81));
                    l_1589 = l_1588;
                }
            }
        }
        else
        {
            long long l_1590 = 0x3180EEAB3F314A81LL;
            int *l_1611 = &g_54;
            int l_1612[8][7][3] = {{{0xB137E0BAL,0x9D9AA4F9L,0x4F8886DEL},{0x4F8886DEL,0x26EED863L,0xB4B7BD26L},{1L,1L,0xBFC0814FL},{0L,0xB137E0BAL,0xF37AE231L},{0xF4745C72L,0xBFC0814FL,0x41450740L},{(-4L),0xDAFA653AL,0x0C0082CBL},{(-1L),1L,0x41450740L}},{{0xACDB2B49L,0x36EBA9D4L,9L},{0L,0L,0x69862D9CL},{0xB4B7BD26L,(-10L),0L},{0xD10E4A89L,0x6F83876BL,3L},{0xBFC0814FL,1L,(-1L)},{(-10L),5L,1L},{0x36EBA9D4L,0x184F70D5L,(-3L)}},{{(-10L),0x33637F53L,0x9D9AA4F9L},{0x69A0B200L,0xE28AC7CEL,0xA461108AL},{0L,0xD10E4A89L,0L},{(-9L),1L,8L},{0xB137E0BAL,1L,0x7299AFABL},{0L,0xD10E4A89L,5L},{1L,0xE28AC7CEL,1L}},{{0x77B7B808L,0x33637F53L,0L},{0xF37AE231L,0x184F70D5L,0xED6F797DL},{(-1L),5L,0x33637F53L},{0x7299AFABL,1L,(-10L)},{(-2L),0x6F83876BL,0L},{0x6F83876BL,(-10L),0x6F83876BL},{(-10L),0L,5L}},{{(-3L),0x36EBA9D4L,0x6492E43AL},{0x0C2084BFL,1L,0xDB20A117L},{0xA2A4FD8AL,0xDAFA653AL,(-6L)},{0x0C2084BFL,0xBFC0814FL,(-10L)},{(-3L),0x93C05D84L,0x4F8886DEL},{(-10L),(-6L),0x48340534L},{0x6F83876BL,0x0C0082CBL,0x81F8AD0DL}},{{(-2L),0xB8CBF11AL,(-10L)},{0x7299AFABL,0x9D9AA4F9L,0x7299AFABL},{0x26EED863L,5L,0x296F9EBBL},{1L,0x296F9EBBL,0xACDB2B49L},{1L,(-1L),0x4F8886DEL},{3L,0xE28AC7CEL,0x77B7B808L},{5L,0x4F8886DEL,0x69A0B200L}},{{(-10L),0x26EED863L,0x69A0B200L},{0x51ABDFFBL,(-10L),0x77B7B808L},{0L,0x6F83876BL,0x4F8886DEL},{9L,0x36EBA9D4L,0xACDB2B49L},{0L,0x184F70D5L,0x296F9EBBL},{0x77B7B808L,3L,0x7299AFABL},{0xDAFA653AL,(-2L),0L}},{{(-1L),0x41450740L,1L},{0L,0xDB20A117L,0xDB20A117L},{0x41450740L,0xB137E0BAL,(-9L)},{0x8448A219L,0xF4745C72L,0xDAFA653AL},{0L,5L,(-1L)},{0xB4B7BD26L,1L,0x6F83876BL},{0x96EE40A4L,5L,(-5L)}}};
            int l_1658 = 0xFEC82384L;
            int i, j, k;
            for (g_263 = 0; (g_263 <= 0); g_263 += 1)
            {
                int l_1602 = 0x0BC50387L;
                unsigned char l_1627 = 5UL;
                int i, j;
                g_30[(g_263 + 8)][g_263] = func_34((*g_81), &l_1583, g_306);
            }
            for (g_306 = 0; (g_306 <= 6); g_306 += 1)
            {
                unsigned long long l_1644[9] = {0x290ED3A58F77A853LL,1UL,1UL,0x290ED3A58F77A853LL,1UL,1UL,0x290ED3A58F77A853LL,1UL,1UL};
                int l_1661 = 1L;
                int ***l_1669 = &g_1027;
                int i;
                for (g_204 = 6; (g_204 >= 0); g_204 -= 1)
                {
                    unsigned char l_1657 = 6UL;
                    int *l_1660[8][6][5] = {{{&l_1603,&l_1603,&l_1603,&l_1603,&l_1600},{&l_1600,&l_1658,&g_54,&l_1600,&l_1600},{(void*)0,&l_1603,(void*)0,&l_1600,&l_1603},{&l_1600,(void*)0,&g_54,&l_1600,&g_54},{&g_62,&g_62,&l_1600,&l_1603,&g_89},{&l_1603,&l_1600,(void*)0,(void*)0,&l_1658}},{{&l_1603,(void*)0,&l_1600,&l_1603,&l_1603},{&l_1600,&l_1658,&g_2,&l_1658,&l_1600},{&l_1600,&g_89,(void*)0,&l_1603,&g_89},{&l_1600,&l_1603,&l_1603,&l_1600,(void*)0},{&l_1603,&g_62,(void*)0,&g_89,&g_89},{&g_54,&l_1600,&g_54,(void*)0,&l_1600}},{{&g_89,(void*)0,&l_1603,&g_89,&l_1603},{&l_1600,&l_1600,&g_2,&l_1600,&l_1658},{&l_1600,&l_1603,&l_1603,&l_1603,&l_1603},{&l_1658,&l_1603,&g_54,&l_1658,(void*)0},{&g_62,&l_1603,(void*)0,&l_1603,&g_62},{&g_54,&l_1600,&l_1603,(void*)0,&l_1600}},{{&g_62,(void*)0,(void*)0,&g_62,&l_1603},{&l_1658,&l_1600,&g_2,&l_1600,&l_1600},{&l_1600,&g_62,&l_1600,&l_1603,&g_62},{&l_1600,&l_1603,(void*)0,&l_1600,(void*)0},{&g_89,&g_89,(void*)0,&g_62,&l_1603},{&g_54,&l_1658,(void*)0,(void*)0,&l_1658}},{{&l_1603,(void*)0,(void*)0,&l_1600,&g_2},{(void*)0,&g_54,&l_1600,&g_54,(void*)0},{(void*)0,(void*)0,&l_1600,&g_2,(void*)0},{(void*)0,&g_54,&g_54,(void*)0,&g_89},{&l_1600,&l_1603,&g_62,(void*)0,(void*)0},{&g_2,(void*)0,&g_2,&g_89,(void*)0}},{{(void*)0,&l_1600,&g_2,(void*)0,&g_2},{&l_1603,&l_1603,&l_1600,(void*)0,&g_54},{(void*)0,&l_1600,&g_2,&g_2,&l_1600},{&g_54,&g_54,&g_2,&g_54,&g_89},{&l_1603,&l_1600,&g_62,&l_1600,&l_1603},{&g_2,&l_1603,&g_54,&g_89,&l_1603}},{{&l_1603,&l_1600,&l_1600,&l_1603,&g_2},{&g_54,(void*)0,&l_1600,&l_1603,&l_1603},{(void*)0,&l_1603,(void*)0,&g_2,&l_1603},{&l_1603,&g_54,&g_89,&l_1603,&g_89},{(void*)0,(void*)0,&g_62,&l_1603,&l_1600},{&g_2,&g_54,&g_89,&g_89,&g_54}},{{&l_1600,&l_1600,(void*)0,&l_1600,&g_2},{(void*)0,&g_54,&l_1600,(void*)0,&l_1603},{&g_2,&l_1600,(void*)0,&l_1600,&l_1600},{&l_1603,&g_2,&g_2,&l_1603,&g_54},{&l_1603,(void*)0,&g_89,&l_1600,&l_1600},{&g_89,&l_1603,&g_89,&g_54,&l_1603}}};
                    int i, j, k;
                    for (g_1233 = 4; (g_1233 >= 2); g_1233 -= 1)
                    {
                        int l_1659 = 0x86961C28L;
                        int i, j;
                        l_1600 ^= (g_969[(g_1233 + 1)][g_1233] && (safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(0x8CL, 0)) < (safe_rshift_func_int16_t_s_u(func_9((g_1639 | ((safe_mod_func_int64_t_s_s((-1L), 0x77E076BE6934E822LL)) && (safe_lshift_func_uint8_t_u_s(((g_395 ^ 1UL) , 0xE8L), 4)))), (*l_1611), l_1644[2], g_1639, g_1639), g_306))), g_1604)) , g_395) <= 8UL) , g_395), g_683)) , 0x2941L), 5)));
                        l_1659 &= (safe_mod_func_uint8_t_u_u(g_31, (((-6L) || (g_306 >= (~func_9(((func_9(g_1229, ((g_89 >= (safe_lshift_func_int16_t_s_u(((!(safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((((((safe_mod_func_int32_t_s_s((*g_649), (1L ^ (-6L)))) && (safe_mod_func_uint64_t_u_u((*l_1583), 3UL))) == (*l_1583)) > 0xD55A9939B19123A9LL) >= (*l_1611)), 14)) <= l_1657) | l_1657), 1L))) , (*l_1583)), (*l_1611)))) , l_1657), g_306, l_1658, (*l_1611)) < g_2) >= g_1232), (*l_1611), g_969[(g_1233 + 1)][g_1233], (*l_1583), g_1604)))) ^ l_1644[3])));
                        l_1661 = (l_1660[0][2][2] == &l_1659);
                        if (l_1662)
                            continue;
                    }
                    for (g_1639 = 0; (g_1639 <= 9); g_1639 += 1)
                    {
                        unsigned char l_1663 = 0UL;
                        return l_1663;
                    }
                    if ((*g_1241))
                        continue;
                }
                for (g_1639 = 1; (g_1639 <= 6); g_1639 += 1)
                {
                    int i, j;
                    (*l_1611) = ((safe_mod_func_int64_t_s_s((((l_5[(g_2 + 2)][g_1639] , (safe_rshift_func_uint16_t_u_s(((l_1668 != l_1669) & (safe_sub_func_int8_t_s_s(((l_1644[(g_2 + 1)] != 0xD13D46D82C17EBD6LL) & (((safe_div_func_uint16_t_u_u(((g_1639 ^ (*l_1583)) <= func_45(l_1644[(g_2 + 1)], (*l_1611), g_2, g_1284)), g_510)) || l_1674) , g_2)), 0x35L))), 14))) || l_5[(g_2 + 2)][g_1639]) , g_871), g_1284)) | (*l_1583));
                    for (g_683 = 6; (g_683 >= 0); g_683 -= 1)
                    {
                        (*l_1611) = ((g_1232 & g_1639) && (!(safe_sub_func_int16_t_s_s(g_395, (((safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_int8_t_s((0x309F3D5DL >= ((safe_mod_func_uint8_t_u_u((*l_1611), (safe_lshift_func_uint16_t_u_s(((void*)0 == &g_30[4][0]), g_263)))) , (-1L))))))) <= 0x42AD890E9A1230E9LL) <= g_510)))));
                        (*l_1611) &= (*g_649);
                    }
                    if ((*l_1611))
                        continue;
                }
                for (g_871 = 0; (g_871 <= 9); g_871 += 1)
                {
                    return (*l_1583);
                }
            }
        }
        if (func_45((g_510 , g_2), g_306, g_969[1][3], g_263))
        {
            unsigned l_1690 = 0UL;
            int l_1691 = 0L;
            for (l_1689 = 0; (l_1689 <= 4); l_1689 += 1)
            {
                int *l_1707[5][7] = {{(void*)0,&l_1691,(void*)0,&l_1691,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1691,(void*)0,&l_1691,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1691,(void*)0,&l_1691,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1691,(void*)0,&l_1691,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1691,(void*)0,&l_1691,(void*)0,(void*)0,(void*)0}};
                char l_1709 = 0xD7L;
                int i, j;
                (*g_649) = 1L;
                l_1691 ^= func_45(g_969[(l_1689 + 1)][l_1689], (+l_1690), g_969[(l_1689 + 1)][l_1689], g_969[(l_1689 + 1)][l_1689]);
                for (l_1603 = 5; (l_1603 >= 0); l_1603 -= 1)
                {
                    int i, j;
                    l_1691 &= l_5[(l_1689 + 3)][g_2];
                    if (l_1691)
                        break;
                    for (l_1662 = 0; (l_1662 <= 9); l_1662 += 1)
                    {
                        char l_1694 = 1L;
                        int i;
                        (*g_649) ^= ((safe_rshift_func_int8_t_s_s(((g_969[1][3] ^ l_1694) <= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_1694, 0L)), g_263)), 5))), (((l_5[(l_1689 + 3)][g_2] ^ 0x468B95DAL) && (((safe_add_func_uint32_t_u_u(g_1604, (safe_div_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((g_89 >= l_5[(l_1689 + 3)][g_2]), 0x31L)) , 4294967288UL), 0x2C5FDB01L)))) , (*l_1583)) >= g_89)) && 0x4C8CEB83L))) & l_5[(l_1689 + 3)][g_2]);
                        g_1064[l_1662] = l_1707[3][2];
                        return l_5[(l_1689 + 3)][g_2];
                    }
                }
                l_1709 ^= (l_1708 & 0x0D6E7B96L);
            }
            g_1713 |= ((((1UL > g_1284) | g_54) != 0L) & ((4L && (l_1691 < func_15(g_54, l_1712))) & 0x35BE4CE9L));
        }
        else
        {
            unsigned l_1714 = 0x97517FB3L;
            int l_1715 = (-4L);
            l_1715 = l_1714;
            l_1715 ^= (l_1668 == l_1716);
            (*g_1576) = (*g_1027);
        }
        (*g_1576) = (void*)0;
        (**l_1716) = (*g_1027);
        for (g_263 = 2; (g_263 <= 6); g_263 += 1)
        {
            return (*g_649);
        }
    }
    for (g_1229 = 0; (g_1229 != 26); g_1229++)
    {
        int *l_1721 = &g_54;
        unsigned l_1740[6] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
        char l_1761 = 0x99L;
        int **l_1830 = &g_30[4][0];
        unsigned char l_1833 = 0xC7L;
        int l_1834 = 0x3A72FCFDL;
        unsigned long long l_1873 = 18446744073709551606UL;
        unsigned l_1890[2];
        unsigned long long l_1937[9][4][6] = {{{0UL,0xCA1D692099EC6440LL,18446744073709551615UL,18446744073709551606UL,0xEF5877881745CB1DLL,1UL},{1UL,0x7F43E462D67C0B65LL,0xFDB25993FBB00591LL,1UL,0x3E03DE0733566CE4LL,0x1BB2132127621D4ALL},{0x53FF6711222093AFLL,18446744073709551615UL,1UL,2UL,0xC12586556F405F29LL,0xD166DF9078F853EELL},{0xBDDDAE3952AD5E51LL,1UL,0x55CA5BF597AA51A6LL,1UL,5UL,0UL}},{{1UL,18446744073709551606UL,2UL,18446744073709551606UL,18446744073709551615UL,0x5E30459B8F7EFE00LL},{18446744073709551615UL,0xD166DF9078F853EELL,0xAC978AB6BA1F5BD2LL,0UL,18446744073709551611UL,0UL},{0x3B86EB9770CA493ELL,18446744073709551615UL,2UL,0x6659CAEC00A5D431LL,18446744073709551615UL,0x483809D31786A9B2LL},{18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL,9UL,1UL}},{{0xE8F4161E68DB6A39LL,1UL,0x901A49A902B2DE7ALL,1UL,0x483809D31786A9B2LL,5UL},{0x42111FC26C075B41LL,0xEB2F646DA8F22425LL,0x4E0617A5F8C67F9BLL,18446744073709551611UL,18446744073709551611UL,0x4E0617A5F8C67F9BLL},{0x5E30459B8F7EFE00LL,0x5E30459B8F7EFE00LL,0x3542B224E4928307LL,1UL,0xAC978AB6BA1F5BD2LL,5UL},{0x55CA5BF597AA51A6LL,0x1ACB1A29C05DF1A7LL,18446744073709551610UL,0x53EF42885F77764CLL,0x1D581D9276DCEA2ALL,0x3542B224E4928307LL}},{{0UL,0x55CA5BF597AA51A6LL,18446744073709551610UL,18446744073709551606UL,0x5E30459B8F7EFE00LL,5UL},{0xBB1D0965CB4F84DDLL,18446744073709551606UL,0x3542B224E4928307LL,3UL,0xC12586556F405F29LL,0x4E0617A5F8C67F9BLL},{3UL,0xC12586556F405F29LL,0x4E0617A5F8C67F9BLL,18446744073709551615UL,0x4B5DCD03ECD255D6LL,5UL},{0x7F43E462D67C0B65LL,0xD166DF9078F853EELL,0x901A49A902B2DE7ALL,0x4E0617A5F8C67F9BLL,18446744073709551615UL,1UL}},{{18446744073709551615UL,18446744073709551612UL,18446744073709551615UL,0UL,18446744073709551606UL,0x483809D31786A9B2LL},{0xA728A784716F648CLL,0x8D77FF2DDF326381LL,2UL,0x3B86EB9770CA493ELL,1UL,0UL},{1UL,18446744073709551611UL,0xAC978AB6BA1F5BD2LL,0x1B2FCBCB281F5887LL,0x53EF42885F77764CLL,1UL},{0xAC978AB6BA1F5BD2LL,0x1BB2132127621D4ALL,1UL,18446744073709551615UL,3UL,1UL}},{{18446744073709551612UL,0x1B2FCBCB281F5887LL,0x3B86EB9770CA493ELL,0xC12586556F405F29LL,7UL,0x901A49A902B2DE7ALL},{1UL,3UL,0x55CA5BF597AA51A6LL,5UL,0x55CA5BF597AA51A6LL,0x483809D31786A9B2LL},{3UL,0xCA1D692099EC6440LL,18446744073709551615UL,18446744073709551611UL,0x901A49A902B2DE7ALL,0x7F43E462D67C0B65LL},{18446744073709551606UL,0x6659CAEC00A5D431LL,0UL,2UL,5UL,18446744073709551610UL}},{{0x53EF42885F77764CLL,0x6659CAEC00A5D431LL,18446744073709551612UL,0xFBC5C6B24D512F38LL,0x901A49A902B2DE7ALL,0x4B5DCD03ECD255D6LL},{1UL,0xCA1D692099EC6440LL,0x965CF6208AEF1104LL,0UL,0x55CA5BF597AA51A6LL,1UL},{18446744073709551611UL,0x483809D31786A9B2LL,18446744073709551606UL,0UL,18446744073709551615UL,18446744073709551612UL},{1UL,1UL,0xCA1D692099EC6440LL,0x6659CAEC00A5D431LL,0x483809D31786A9B2LL,0xA728A784716F648CLL}},{{18446744073709551615UL,0xA728A784716F648CLL,18446744073709551611UL,0x4E0617A5F8C67F9BLL,0x965CF6208AEF1104LL,5UL},{0x6659CAEC00A5D431LL,1UL,1UL,18446744073709551606UL,18446744073709551615UL,0UL},{0UL,0xBB1D0965CB4F84DDLL,0x53FF6711222093AFLL,0xFDB25993FBB00591LL,0x664265B753F35BDCLL,18446744073709551615UL},{2UL,0x4E0617A5F8C67F9BLL,0x6659CAEC00A5D431LL,0xC12586556F405F29LL,18446744073709551615UL,0x556CC30D63819060LL}},{{0x834E5D309F889BD3LL,0xEB2F646DA8F22425LL,0xEF5877881745CB1DLL,0x1B2FCBCB281F5887LL,0x6659CAEC00A5D431LL,18446744073709551606UL},{1UL,0x53EF42885F77764CLL,0x3AF476FD1B481521LL,0x3AF476FD1B481521LL,0x53EF42885F77764CLL,1UL},{1UL,0x664265B753F35BDCLL,1UL,0xE8F4161E68DB6A39LL,0xEF5877881745CB1DLL,2UL},{0UL,5UL,1UL,1UL,18446744073709551606UL,0x4E0617A5F8C67F9BLL}}};
        unsigned l_2003 = 7UL;
        unsigned l_2027 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1890[i] = 0xF3DB1FFAL;
        for (g_1604 = (-20); (g_1604 <= (-14)); g_1604++)
        {
            int **l_1724 = &g_30[4][0];
            int *l_1743 = &g_54;
            unsigned long long l_1760 = 0x1957FD260612EFA1LL;
            unsigned l_1775 = 0xEB17524EL;
            int *l_1814 = &g_62;
            int *l_1823 = &l_1600;
            unsigned l_1843 = 0xCE0167FBL;
            int *l_1874 = &g_54;
            int **l_1915 = &g_30[1][0];
            int **l_1919 = &g_1064[9];
            int *l_1945 = &g_31;
            (*g_81) = l_1721;
        }
        (**l_1716) = (*g_81);
        (*g_649) = (safe_sub_func_uint8_t_u_u(g_306, g_871));
        for (g_1639 = 0; (g_1639 == 19); g_1639++)
        {
            int **l_1962[5] = {&g_1241,&g_1241,&g_1241,&g_1241,&g_1241};
            unsigned char l_1967 = 251UL;
            unsigned l_1970 = 1UL;
            int l_1971 = 0L;
            int **l_1992 = &g_82;
            unsigned char l_2007 = 0xCEL;
            int i;
            if (((void*)0 == l_1962[0]))
            {
                long long l_1965[6][8] = {{0x5C3B436EEA405533LL,0x5AEE62E6854D16EELL,0L,0x5AEE62E6854D16EELL,0L,0x5AEE62E6854D16EELL,0L,(-1L)},{0L,0x7A682F0F3A3AE8C1LL,0x5C3B436EEA405533LL,0x7F7AEF776AFCCD29LL,0L,(-1L),0L,0x7F7AEF776AFCCD29LL},{(-1L),0x7A682F0F3A3AE8C1LL,(-1L),(-1L),0L,0x5AEE62E6854D16EELL,0L,0x5AEE62E6854D16EELL},{0x9518A9EDD2244C62LL,(-1L),0x5C3B436EEA405533LL,(-1L),0x9518A9EDD2244C62LL,0x95690DAA3EFB1FFFLL,0L,0x7F7AEF776AFCCD29LL},{0x9518A9EDD2244C62LL,0x95690DAA3EFB1FFFLL,0L,0x7F7AEF776AFCCD29LL,0L,0x95690DAA3EFB1FFFLL,0x9518A9EDD2244C62LL,(-1L)},{(-1L),(-1L),0L,0x5AEE62E6854D16EELL,0L,0x5AEE62E6854D16EELL,0L,(-1L)}};
                short l_1966 = 0L;
                int i, j;
                l_1966 ^= (+((((*g_1027) == ((safe_rshift_func_int16_t_s_s(0x9B73L, 14)) , (*g_1027))) <= (0x4613L & (4294967295UL <= func_9(func_9(((g_510 < ((+0x25E40A38L) ^ (((*g_1027) == (((g_306 || 1L) , g_1854) , (void*)0)) <= g_1233))) , 0UL), g_969[1][3], l_1965[2][3], g_409, g_510), g_969[1][2], g_409, g_1854, g_871)))) && g_969[2][0]));
                if (l_1967)
                    break;
            }
            else
            {
                int *l_1968 = &g_89;
                if (((func_9(((g_263 , (*l_1721)) || (*g_649)), (*l_1968), g_395, g_1232, l_1969) < (-1L)) > l_1970))
                {
                    unsigned l_1976 = 1UL;
                    (*g_649) = (((*g_1241) >= l_1971) , (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((*l_1830) == (*g_1576)) , g_1604), 0x374E4FD6L)) , l_1976), (*l_1968))));
                }
                else
                {
                    int l_1979[4][5][3] = {{{0xEE892881L,1L,1L},{(-9L),1L,(-9L)},{0L,0xEE892881L,1L},{0L,0L,0xEE892881L},{(-9L),0xEE892881L,0xEE892881L}},{{0xEE892881L,1L,1L},{(-9L),1L,(-9L)},{0L,0xEE892881L,1L},{0L,0L,0xEE892881L},{(-9L),0xEE892881L,0xEE892881L}},{{0xEE892881L,1L,1L},{(-9L),1L,(-9L)},{0L,0xEE892881L,1L},{0L,0L,0xEE892881L},{(-9L),0xEE892881L,0xEE892881L}},{{0xEE892881L,1L,1L},{(-9L),0xEE892881L,1L},{(-9L),1L,0L},{(-9L),(-9L),1L},{1L,1L,1L}}};
                    int i, j, k;
                    for (g_89 = 0; (g_89 <= 18); g_89 = safe_add_func_int32_t_s_s(g_89, 9))
                    {
                        return l_1979[2][0][1];
                    }
                    if ((*g_649))
                        continue;
                }
            }
            if ((*g_649))
            {
                unsigned char l_1982 = 0x1AL;
                unsigned l_2004[4][4][1];
                int *l_2006 = (void*)0;
                int *l_2011[9][4] = {{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600},{(void*)0,&l_1600,(void*)0,&l_1600}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_2004[i][j][k] = 4294967290UL;
                    }
                }
                (*g_1241) &= (-1L);
                for (g_871 = 11; (g_871 >= 35); g_871 = safe_add_func_uint16_t_u_u(g_871, 8))
                {
                    int l_1983[7][6] = {{0L,0x17608185L,0L,0x4E7180D9L,0x056C2F3FL,0xEABF92E6L},{0xD7B324F9L,0L,0L,1L,0xC4581CB0L,1L},{0xEABF92E6L,1L,0xEABF92E6L,0x99292492L,0x35F0C47AL,0L},{0x99292492L,0x35F0C47AL,0L,0x056C2F3FL,0xB56B0217L,0x5AC84521L},{1L,0L,(-1L),0x056C2F3FL,0x99292492L,0x99292492L},{0x99292492L,(-1L),(-1L),0x99292492L,0L,0x17608185L},{0xEABF92E6L,1L,0x5AC84521L,1L,(-1L),0L}};
                    unsigned short l_1991 = 65535UL;
                    int l_2010 = (-1L);
                    int i, j;
                    (*l_1721) ^= l_1982;
                    if (l_1983[4][2])
                        continue;
                }
                for (g_89 = 10; (g_89 == (-2)); g_89 = safe_sub_func_uint64_t_u_u(g_89, 4))
                {
                    unsigned short l_2033 = 0x5EC1L;
                    (*g_649) = (safe_mod_func_int16_t_s_s((~0x2D18L), g_409));
                }
                (**g_2005) |= (*l_1721);
            }
            else
            {
                int *l_2034 = &g_89;
                (*l_2034) = (((**l_1716) != l_2034) < func_9((g_510 , (safe_mod_func_uint64_t_u_u(g_1284, g_395))), (*l_1721), g_1284, g_871, func_9((0x0505085B66CD3A0DLL | g_1229), g_683, (*l_2034), g_306, (*l_2034))));
                if ((*l_2034))
                    continue;
            }
            (*g_649) = (*g_649);
        }
    }
    return l_1914[1];
}







static long long func_9(unsigned short p_10, unsigned char p_11, long long p_12, unsigned short p_13, unsigned long long p_14)
{
    int l_1580 = 0xEF01E886L;
    int ***l_1581 = &g_81;
    (*g_649) ^= (p_14 ^ (l_1580 ^ (&g_81 != l_1581)));
    for (g_89 = 0; (g_89 <= 9); g_89 += 1)
    {
        int i;
        g_1064[g_89] = g_1064[g_89];
        (*g_649) |= p_12;
        (*g_649) &= p_10;
        l_1580 = p_13;
    }
    return l_1580;
}







static unsigned short func_15(unsigned short p_16, long long p_17)
{
    int *l_20[8] = {(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2};
    int **l_21 = &l_20[7];
    int *l_1443 = (void*)0;
    unsigned long long l_1447 = 7UL;
    unsigned short l_1450 = 0x86FFL;
    int ***l_1457 = &g_81;
    short l_1536 = 0x90A8L;
    int i;
    for (p_16 = (-29); (p_16 == 10); ++p_16)
    {
        return g_2;
    }
    (*l_21) = l_20[7];
    (*l_21) = ((func_22((*l_21), (*l_21), func_27(g_2, g_2), g_2) , (g_31 != func_22(func_34(func_38(p_16, p_17, &l_20[7], (*l_21)), &g_1241, g_683), l_1443, &l_1443, p_16))) , (*g_81));
    if (p_16)
    {
        int *l_1444 = &g_31;
        int l_1445 = 0x2949371BL;
        int **l_1446[8] = {&g_1064[7],&g_30[4][0],&g_1064[7],&g_30[4][0],&g_1064[7],&g_30[4][0],&g_1064[7],&g_30[4][0]};
        int l_1564 = 4L;
        unsigned char l_1565[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1565[i] = 254UL;
        if ((p_17 < l_1447))
        {
            return g_2;
        }
        else
        {
            unsigned char l_1451 = 0xB2L;
            unsigned short l_1456 = 0x58ACL;
            int *l_1459 = &g_62;
            short l_1481 = (-5L);
            int *l_1543 = (void*)0;
            int **l_1544 = &l_1443;
            long long l_1556[10] = {(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
            int i;
            l_1450 |= (g_62 == (g_683 ^ (safe_lshift_func_uint8_t_u_s(250UL, 4))));
            l_1451 = ((void*)0 == &g_81);
            for (g_263 = 0; (g_263 < 27); g_263 = safe_add_func_int32_t_s_s(g_263, 1))
            {
                char l_1460 = 0x02L;
                int *l_1476 = &l_1445;
                unsigned l_1482 = 0UL;
                for (p_16 = 0; (p_16 > 26); ++p_16)
                {
                    int l_1458 = 0xA4BD47E3L;
                    l_1458 &= ((g_2 > (l_1456 & 4L)) != (&g_1027 == l_1457));
                }
            }
            for (g_263 = 3; (g_263 <= 29); g_263++)
            {
                int ***l_1515[5] = {&g_1027,&g_1027,&g_1027,&g_1027,&g_1027};
                short l_1541 = 0x9A4BL;
                int i;
            }
        }
        for (g_62 = 0; (g_62 <= 7); g_62 += 1)
        {
            int l_1561 = (-10L);
            int **l_1562[4][4] = {{(void*)0,(void*)0,&g_30[3][0],&g_649},{&g_649,&g_649,&g_30[3][0],&g_649},{(void*)0,&g_30[5][0],&g_30[4][0],&g_30[3][0]},{&g_649,&g_30[5][0],&g_30[5][0],&g_649}};
            int l_1563 = 0x257C268AL;
            int i, j;
            if (p_17)
                break;
            for (g_31 = 6; (g_31 >= 0); g_31 -= 1)
            {
                int i;
                (*g_1241) ^= (safe_add_func_uint16_t_u_u((*l_1444), (~(+(p_16 , l_1563)))));
            }
            (*g_1241) ^= (p_16 <= l_1564);
        }
        (*g_1241) |= l_1565[2];
        (**l_1457) = ((safe_add_func_uint64_t_u_u(18446744073709551615UL, g_1232)) , (*l_21));
    }
    else
    {
        unsigned l_1574 = 7UL;
        int **l_1575 = &g_30[0][0];
        int l_1579[8];
        int i;
        for (i = 0; i < 8; i++)
            l_1579[i] = 0x41C14D98L;
        for (l_1536 = 7; (l_1536 <= (-5)); l_1536--)
        {
            int l_1570 = 0x3C509685L;
            return l_1570;
        }
        (*g_1241) = (((((((!(safe_add_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(l_1574)), ((l_1575 != l_1575) > g_89)))) , g_204) & g_89) | ((g_2 , p_16) , func_22((*g_81), (*g_1027), g_1576, g_263))) ^ p_16) || 0x58L) , (*g_649));
        l_1579[3] |= (safe_lshift_func_uint8_t_u_s(p_16, 4));
    }
    return p_16;
}







static int func_22(int * p_23, int * p_24, int ** p_25, char p_26)
{
    long long l_33[9] = {9L,9L,9L,9L,9L,9L,9L,9L,9L};
    int i;
    l_33[6] &= (-1L);
    (*p_25) = (void*)0;
    return l_33[5];
}







static int ** func_27(short p_28, int p_29)
{
    int **l_32 = &g_30[4][0];
    g_30[4][0] = &g_2;
    return l_32;
}







static int * func_34(int * p_35, int ** p_36, unsigned p_37)
{
    int *l_1442[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1442[i][j] = (void*)0;
    }
    return l_1442[0][2];
}







static int * func_38(char p_39, int p_40, int ** p_41, int * p_42)
{
    int l_51 = (-1L);
    int *l_584 = &g_2;
    int **l_583 = &l_584;
    unsigned l_959 = 0x720D5C2AL;
    unsigned long long l_966 = 18446744073709551606UL;
    unsigned l_986 = 18446744073709551615UL;
    int **l_1002 = &g_30[5][0];
    unsigned char l_1018 = 0x52L;
    char l_1057 = (-3L);
    unsigned long long l_1083 = 0UL;
    unsigned short l_1101[9][6][4] = {{{0x817EL,0xB56FL,0x227EL,0x7E86L},{5UL,0x72FDL,5UL,65528UL},{5UL,65528UL,0x227EL,0xB87EL},{0x817EL,4UL,0xB64AL,65528UL},{0x227EL,0x1F1BL,0xB64AL,0x7E86L},{0x817EL,0UL,0x227EL,65535UL}},{{5UL,0x1F1BL,5UL,4UL},{5UL,4UL,0x227EL,0xE83FL},{0x817EL,65528UL,0xB64AL,4UL},{0x227EL,0x72FDL,0xB64AL,65535UL},{0x817EL,0xB56FL,0x227EL,0x7E86L},{5UL,0x72FDL,0UL,65535UL}},{{0UL,65535UL,0xB64AL,0x72FDL},{5UL,0x7E86L,0x817EL,65535UL},{0xB64AL,65528UL,0x817EL,0UL},{5UL,0xB87EL,0xB64AL,0xB56FL},{0UL,65528UL,0UL,0x7E86L},{0UL,0x7E86L,0xB64AL,0x1F1BL}},{{5UL,65535UL,0x817EL,0x7E86L},{0xB64AL,4UL,0x817EL,0xB56FL},{5UL,0xE83FL,0xB64AL,0UL},{0UL,4UL,0UL,65535UL},{0UL,65535UL,0xB64AL,0x72FDL},{5UL,0x7E86L,0x817EL,65535UL}},{{0xB64AL,65528UL,0x817EL,0UL},{5UL,0xB87EL,0xB64AL,0xB56FL},{0UL,65528UL,0UL,0x7E86L},{0UL,0x7E86L,0xB64AL,0x1F1BL},{5UL,65535UL,0x817EL,0x7E86L},{0xB64AL,4UL,0x817EL,0xB56FL}},{{5UL,0xE83FL,0xB64AL,0UL},{0UL,4UL,0UL,65535UL},{0UL,65535UL,0xB64AL,0x72FDL},{5UL,0x7E86L,0x817EL,65535UL},{0xB64AL,65528UL,0x817EL,0UL},{5UL,4UL,5UL,0x1F1BL}},{{0xB64AL,0xB56FL,0xB64AL,0xB87EL},{0xB64AL,0xB87EL,5UL,65535UL},{0x227EL,0xE83FL,0UL,0xB87EL},{5UL,0UL,0UL,0x1F1BL},{0x227EL,65528UL,5UL,0x72FDL},{0xB64AL,0UL,0xB64AL,0xE83FL}},{{0xB64AL,0xE83FL,5UL,0x7E86L},{0x227EL,0xB87EL,0UL,0xE83FL},{5UL,0xB56FL,0UL,0x72FDL},{0x227EL,4UL,5UL,0x1F1BL},{0xB64AL,0xB56FL,0xB64AL,0xB87EL},{0xB64AL,0xB87EL,5UL,65535UL}},{{0x227EL,0xE83FL,0UL,0xB87EL},{5UL,0UL,0UL,0x1F1BL},{0x227EL,65528UL,5UL,0x72FDL},{0xB64AL,0UL,0xB64AL,0xE83FL},{0xB64AL,0xE83FL,5UL,0x7E86L},{0x227EL,0xB87EL,0UL,0xE83FL}}};
    int l_1116 = (-4L);
    int *l_1122 = &g_2;
    unsigned l_1148 = 0x6E37CA10L;
    int l_1203[6];
    int *l_1219 = (void*)0;
    short l_1242 = 0x7AB2L;
    int **l_1272 = &l_1122;
    int l_1286 = 0x9C0754A5L;
    short l_1308 = 0x026AL;
    unsigned char l_1423 = 0xE7L;
    int l_1441 = 0L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1203[i] = 1L;
    for (p_39 = 0; (p_39 >= 1); ++p_39)
    {
        int *l_50 = (void*)0;
        int l_943[1];
        unsigned long long l_951 = 0UL;
        int ***l_980 = &g_81;
        unsigned short l_1222[4][10] = {{0UL,7UL,65527UL,7UL,0UL,0x6880L,0x6745L,0UL,0xC100L,1UL},{0x6880L,0x6745L,0UL,0xC100L,1UL,0xDA0CL,0x81F2L,0x81F2L,0xDA0CL,1UL},{65527UL,0xC966L,0xC966L,0xB9D2L,0x6745L,0x3F87L,1UL,65535UL,65531UL,0x6880L},{0xE0B1L,0x6745L,0xDA0CL,65527UL,65531UL,1UL,0xC966L,1UL,65531UL,65527UL}};
        int *l_1240 = &l_1203[2];
        int l_1260 = 0x4321D02AL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_943[i] = 0x1CD4236CL;
    }
    (*g_81) = (*g_1027);
    if ((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(((g_2 , 0x1EL) == ((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((*l_584), 0x370DBB04L)) || (**l_583)), p_40)) && p_40)), 1L)))))
    {
        unsigned l_1277[1];
        int l_1278 = 0xFB4C1078L;
        char l_1291 = (-6L);
        int *l_1292 = &l_1286;
        int l_1343 = 1L;
        int *l_1368 = &g_62;
        int ***l_1383 = &g_1027;
        int i;
        for (i = 0; i < 1; i++)
            l_1277[i] = 0x695A1E92L;
        for (g_409 = 0; (g_409 != 7); ++g_409)
        {
            int *l_1279 = (void*)0;
            char l_1346 = 0x97L;
            char l_1355 = 0xEEL;
            unsigned long long l_1384 = 0xB4350F3B82B9D13BLL;
            (*l_1002) = (((func_22(((g_1229 < (safe_div_func_uint8_t_u_u(func_22((*p_41), (*g_81), &p_42, g_89), l_1277[0]))) , (p_39 , ((p_39 , 4L) , (void*)0))), (*p_41), p_41, (**l_583)) > 255UL) , l_1278) , l_1279);
            for (g_204 = 3; (g_204 >= 0); g_204 -= 1)
            {
                int l_1285 = 0x6E5BC03AL;
                int **l_1290 = &g_30[4][0];
                short l_1309 = 0x06EBL;
                if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_1277[0], 2)), 8)))
                {
                    (*l_1002) = (void*)0;
                    if (l_1277[0])
                        break;
                    (*g_649) |= g_1284;
                }
                else
                {
                    l_1285 = l_1277[0];
                }
                for (l_1116 = 0; (l_1116 <= 3); l_1116 += 1)
                {
                    long long l_1287 = (-10L);
                    (*g_1241) &= (l_1286 < ((l_1287 , func_22((*g_81), (*l_1272), (l_1285 , &p_42), ((l_1285 < (((((l_1290 == &g_30[7][0]) <= 0UL) < l_1291) , g_1232) <= p_39)) , 0L))) ^ 4294967293UL));
                    if (p_39)
                        continue;
                }
                if ((*g_1241))
                    break;
                for (p_39 = 3; (p_39 >= 0); p_39 -= 1)
                {
                    int **l_1307 = (void*)0;
                    if (p_39)
                        break;
                    p_40 &= func_22((*p_41), l_1292, &g_82, (((safe_mod_func_int8_t_s_s(g_1232, (*l_1292))) , (-2L)) , (-8L)));
                    (*l_1292) = (*l_1122);
                    for (g_306 = 3; (g_306 >= 0); g_306 -= 1)
                    {
                        (*g_1241) ^= (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s(p_39, ((*l_1292) ^ 0xFAF4ECD9L))), p_39));
                        (*g_1241) = ((safe_lshift_func_int16_t_s_u((l_1285 , 0x46FFL), 6)) , (0UL < ((((0x1004BC949240A4B9LL ^ ((((&l_1002 == (void*)0) , (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_40, (safe_lshift_func_int8_t_s_u((p_40 & (p_40 ^ g_395)), 2)))), g_510))) < (*l_1292)) , 18446744073709551615UL)) < p_39) , p_40) , l_1308)));
                        if (l_1309)
                            break;
                    }
                }
            }
            if ((*g_649))
                break;
            for (l_966 = (-24); (l_966 != 47); ++l_966)
            {
                int **l_1312[1][10][8] = {{{&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122},{&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0]},{&l_1122,&l_1122,(void*)0,&l_1122,&l_1122,(void*)0,&l_1122,&l_1122},{&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122},{&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0]},{&l_1122,&l_1122,(void*)0,&l_1122,&l_1122,(void*)0,&l_1122,&l_1122},{&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122},{&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&l_1122,&g_30[1][0]},{&l_1122,&l_1122,(void*)0,&l_1122,&l_1122,(void*)0,&l_1122,&l_1122},{&g_30[1][0],&l_1122,&g_30[1][0],&g_30[1][0],&g_30[1][0],(void*)0,(void*)0,&g_30[1][0]}}};
                int l_1313[1];
                short l_1342 = 0L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1313[i] = 1L;
                if (l_1313[0])
                {
                    unsigned char l_1318 = 6UL;
                    unsigned short l_1326 = 0xB961L;
                    int l_1327 = (-2L);
                    if ((safe_div_func_uint8_t_u_u(p_40, p_39)))
                    {
                        unsigned l_1325 = 0xB6C7F655L;
                        l_1325 = ((safe_lshift_func_uint8_t_u_u(((-1L) == (*l_1292)), (g_62 , l_1318))) != (safe_mod_func_int64_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((p_40 <= (255UL & ((p_39 ^ (g_1232 , (&g_81 == (void*)0))) >= 4UL))), 0xDF21738CL)), 4294967287UL)) || p_39) || g_395) | p_40), 8UL)));
                        (*g_1241) = l_1326;
                        l_1327 = (*l_1292);
                        if ((*l_1292))
                            break;
                    }
                    else
                    {
                        (*l_1292) = ((p_40 || p_40) && func_22((*g_1027), l_1292, (g_54 , &g_30[7][0]), g_204));
                        (*g_649) = 1L;
                        (*l_1292) &= (*g_649);
                    }
                    for (g_395 = 0; (g_395 <= 0); g_395 += 1)
                    {
                        int i, j, k;
                        l_1343 ^= (l_1101[(g_395 + 6)][(g_395 + 1)][(g_395 + 2)] , ((((!l_1101[(g_395 + 1)][(g_395 + 4)][g_395]) && ((safe_div_func_int16_t_s_s(((l_1101[(g_395 + 1)][(g_395 + 4)][g_395] && g_204) > (((&l_1312[g_395][g_395][(g_395 + 6)] == (void*)0) & g_1284) , (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(g_54, 0xB9DAL)) , (*l_1122)), 0L)) || l_1342), (*l_1292))) & p_39), 0x1AL)) == g_263), 7)), 0xB027493BL)))), 0xB007L)) , 0x9F45FADFDDFF5460LL)) , 0x3A8AL) , 0x464697B4L));
                    }
                    if (((*l_1292) >= p_40))
                    {
                        (*g_649) = (safe_add_func_int32_t_s_s(l_1326, p_40));
                    }
                    else
                    {
                        if (l_1346)
                            break;
                    }
                    (*g_1241) |= ((safe_div_func_uint32_t_u_u(((((g_31 <= (((((safe_lshift_func_uint16_t_u_u(0x7894L, g_54)) , ((-1L) > (safe_add_func_int32_t_s_s((*l_1292), p_40)))) || g_306) <= (p_40 <= (safe_lshift_func_int8_t_s_s(0xA7L, (**l_1272))))) < 0xA0L)) , g_409) < 0x3EL) == p_40), l_1355)) , (*g_649));
                }
                else
                {
                    (*g_649) = 0x199EF8E3L;
                    for (g_62 = 0; (g_62 > 3); g_62 = safe_add_func_int8_t_s_s(g_62, 6))
                    {
                        (*l_1002) = (*p_41);
                        (*g_1241) = (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((0x50L || ((((void*)0 == &p_42) , func_27((**l_583), (*l_1122))) == &p_42)), (g_395 , ((g_31 ^ g_89) <= g_31)))) >= (*l_1122)), 15));
                        (*l_1292) = (p_39 < (((*g_649) != 7UL) | ((((*l_1292) >= ((0L || (0x0AL & ((((safe_mod_func_uint32_t_u_u(g_969[5][2], (safe_mod_func_int32_t_s_s((((g_204 && p_39) , p_39) >= p_40), (*g_649))))) != g_31) & 6L) , (**l_1272)))) , g_409)) , g_683) == 0L)));
                        (*l_1002) = l_1368;
                    }
                }
                for (l_1342 = 0; (l_1342 > 23); l_1342++)
                {
                    char l_1377 = 0x4DL;
                    int l_1386[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1386[i] = 0xAF9801F7L;
                    (*l_1292) = 0x1B32CD67L;
                    for (g_395 = 0; (g_395 <= 0); g_395 += 1)
                    {
                        return l_1279;
                    }
                    for (l_1308 = (-6); (l_1308 < (-8)); l_1308 = safe_sub_func_uint32_t_u_u(l_1308, 4))
                    {
                        unsigned short l_1385 = 0x7D93L;
                        (*g_1027) = (*p_41);
                        (*g_1241) |= (func_22((((void*)0 == (*p_41)) , &l_1343), ((((0xC0BFF1EB257F82F4LL <= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(l_1377, (*g_649))), (safe_unary_minus_func_uint64_t_u(0xF83BB1A1651DC00CLL))))) >= (g_510 <= ((*l_1292) == (**l_583)))) , (*l_1292)) , (*p_41)), &l_1368, g_969[1][3]) > 65528UL);
                        l_1386[0] ^= (0x01D8DFB36071F8FCLL <= ((((((safe_lshift_func_uint16_t_u_u((&p_41 != l_1383), 6)) > (-8L)) , ((((*l_1292) ^ (~(p_39 , l_1384))) != ((*g_1241) <= ((l_1377 , l_1385) || 0x350F9CDBL))) < l_1385)) , p_39) && g_1229) != p_40));
                    }
                    (*g_649) = (g_871 <= ((*p_41) == (*g_81)));
                }
            }
        }
    }
    else
    {
        int **l_1399 = &g_30[4][0];
        long long l_1415 = 0xB567FAC46D539030LL;
        for (l_959 = 1; (l_959 <= 5); l_959 += 1)
        {
            unsigned long long l_1392[4][8] = {{0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL},{0xBD57B62D4DB77F86LL,0xBD57B62D4DB77F86LL,0x755615555C8A6AC2LL,0xBD57B62D4DB77F86LL,0xBD57B62D4DB77F86LL,0x755615555C8A6AC2LL,0xBD57B62D4DB77F86LL,0xBD57B62D4DB77F86LL},{0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL},{0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL,0x50D755B4B8A08B5FLL,0xBD57B62D4DB77F86LL,0x50D755B4B8A08B5FLL}};
            int **l_1408 = &g_1064[1];
            int i, j;
            for (g_1233 = 0; (g_1233 <= 0); g_1233 += 1)
            {
                int i;
                if (l_1203[l_959])
                    break;
            }
            (*l_1002) = (void*)0;
            for (l_1242 = 0; (l_1242 >= 0); l_1242 -= 1)
            {
                int **l_1416 = &g_1064[7];
                int i;
                if (l_1203[l_959])
                    break;
                for (l_51 = 4; (l_51 >= 0); l_51 -= 1)
                {
                    unsigned long long l_1389 = 0xE50F4BD3792C77C4LL;
                    int *l_1409 = &l_1203[5];
                }
                for (g_1229 = (-9); (g_1229 == (-15)); g_1229--)
                {
                    int **l_1412 = &l_1122;
                    int **l_1424 = &l_1219;
                    (*g_1241) = func_22(&l_1203[l_959], (*l_1399), l_1416, (*l_1122));
                    (*g_1241) ^= 0x259CF139L;
                    (*g_649) ^= (g_31 , ((((((p_39 == (**l_583)) < (safe_rshift_func_int8_t_s_u((g_54 == p_39), 7))) == g_306) < p_40) , &p_41) == (void*)0));
                    for (g_409 = 0; (g_409 <= 0); g_409 += 1)
                    {
                        int i, j;
                        return g_30[(g_409 + 3)][g_409];
                    }
                }
                (*g_649) &= p_40;
            }
            (*g_1241) |= l_1203[l_959];
        }
        for (g_263 = (-19); (g_263 == 5); ++g_263)
        {
            short l_1431 = (-4L);
            int l_1437 = 1L;
            for (l_1242 = 9; (l_1242 >= 0); l_1242 -= 1)
            {
                (*g_1241) &= (safe_rshift_func_uint8_t_u_u(p_40, 0));
            }
            if (((safe_rshift_func_uint16_t_u_s(((((l_1431 , p_40) & (-9L)) , p_40) != ((0xB59E4D05L && ((void*)0 != &g_81)) >= ((((*g_1027) != (void*)0) != g_969[1][3]) < 0xE35DL))), l_1431)) <= l_1431))
            {
                long long l_1436 = 0x66D4842C8EB7CEF9LL;
                (*g_649) = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x62L, (0x17L <= p_40))), ((+p_39) , g_969[1][3]))) & 247UL);
                l_1437 = l_1436;
            }
            else
            {
                short l_1438 = (-1L);
                (*g_649) |= l_1438;
            }
            if ((*l_584))
                break;
            (*g_1241) |= (((safe_div_func_uint32_t_u_u(g_395, l_1415)) , 0xB0E522E3L) , (g_969[4][2] == l_1441));
        }
        (*g_649) &= ((g_969[1][3] > 0xE3D0L) <= 0x6FL);
        for (l_1083 = 0; l_1083 < 9; l_1083 += 1)
        {
            for (g_204 = 0; g_204 < 6; g_204 += 1)
            {
                for (g_1229 = 0; g_1229 < 4; g_1229 += 1)
                {
                    l_1101[l_1083][g_204][g_1229] = 0UL;
                }
            }
        }
    }
    return (*g_1027);
}







static short func_45(short p_46, long long p_47, char p_48, long long p_49)
{
    int l_589 = 0xC3D83218L;
    int **l_613 = &g_82;
    unsigned long long l_614 = 0x8D81E11184839CD7LL;
    int ***l_638 = (void*)0;
    char l_723 = 0x50L;
    int l_742 = 0x4DB761E1L;
    int l_750 = 0L;
    unsigned l_836 = 0xBC259DD1L;
    char l_906 = 0xE0L;
    int *l_918 = &l_750;
    int *l_919 = &g_54;
    unsigned short l_926 = 0xFB4EL;
    if ((p_46 , (l_589 > g_395)))
    {
        int *l_590 = &g_54;
        int ***l_605 = &g_81;
        unsigned short l_704 = 0xCDB4L;
        (*g_81) = l_590;
        if ((*l_590))
        {
            int l_606 = 0xA37D192AL;
            (***l_605) = ((safe_rshift_func_uint16_t_u_u((p_46 > (safe_div_func_int16_t_s_s((((((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((!(safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((void*)0 == l_590), p_46)) && (&g_81 == l_605)) | l_614), 1L)), 5))) != p_46) >= 1UL) && 0x28L) == l_606), p_46)), p_49)) > p_49) <= 0xDED6DD4A182B569DLL) , (***l_605)) <= 0x0C34L), p_47))), 9)) , 0L);
        }
        else
        {
            unsigned l_626 = 0xCA7D7FE1L;
            int *l_629 = &g_89;
            char l_672 = (-5L);
            int l_675[6][5] = {{0x31BD14B8L,0xF8339969L,0x31BD14B8L,0xF8339969L,0x31BD14B8L},{0xAD34F684L,0xAD34F684L,(-10L),(-10L),0xAD34F684L},{0x5134488FL,0xF8339969L,0x5134488FL,0xF8339969L,0x5134488FL},{0xAD34F684L,(-10L),(-10L),0xAD34F684L,0xAD34F684L},{0x31BD14B8L,0xF8339969L,0x31BD14B8L,0xF8339969L,0x31BD14B8L},{0xAD34F684L,0xAD34F684L,(-10L),(-10L),0xAD34F684L}};
            int ***l_698[2][10] = {{&l_613,&l_613,&g_81,&l_613,&l_613,&g_81,&l_613,&l_613,&g_81,&l_613},{&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613}};
            unsigned l_702 = 0x58AF02ACL;
            int i, j;
            for (p_49 = 0; (p_49 <= 0); p_49 += 1)
            {
                unsigned long long l_615 = 0x9B2D8B8AB7A71DA5LL;
                l_615 = 0x99254EB8L;
                for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
                {
                    int *l_627 = (void*)0;
                    int *l_628 = &g_62;
                    int i, j;
                    (*l_628) |= (((safe_div_func_int64_t_s_s(g_89, ((p_46 ^ (((~(safe_add_func_uint16_t_u_u(((*g_82) >= (&g_30[4][0] != (void*)0)), (safe_add_func_int16_t_s_s((p_46 > (safe_lshift_func_uint8_t_u_s((0x0DL ^ (((void*)0 == (**l_605)) <= l_615)), 2))), l_626))))) , (***l_605)) < g_409)) , 0xBBB2424BB3C40093LL))) , p_49) != p_46);
                    (*g_81) = l_629;
                }
            }
            (*l_590) = (***l_605);
            for (p_47 = 0; (p_47 >= 0); p_47 -= 1)
            {
                unsigned char l_655 = 0UL;
                int **l_682 = &g_649;
                int l_694 = 0xC96D569DL;
                (**l_613) = p_48;
                (**l_613) = ((p_47 < (safe_rshift_func_uint16_t_u_u(p_46, (((((safe_sub_func_uint8_t_u_u((***l_605), 1L)) ^ (safe_mod_func_uint64_t_u_u(((((g_62 > 0x3543EC14L) , p_46) , ((safe_add_func_uint32_t_u_u(((void*)0 == l_638), 3L)) && (-1L))) < g_263), (**l_613)))) , (**l_613)) == g_2) != 0L)))) != g_31);
                for (l_626 = 0; (l_626 <= 0); l_626 += 1)
                {
                    int l_652 = (-1L);
                    int l_697[2][5][2] = {{{0x27108703L,0xFD92EB10L},{0x60F45CFDL,0x60F45CFDL},{0x60F45CFDL,0xFD92EB10L},{0x27108703L,0x81E90575L},{0xFD92EB10L,0xFD92EB10L}},{{0x81E90575L,1L},{0x27108703L,0x27108703L},{0x27108703L,1L},{0x81E90575L,0xFD92EB10L},{1L,0xFD92EB10L}}};
                    int i, j, k;
                }
            }
        }
    }
    else
    {
        long long l_735[4] = {0x0EBE75D800DB1F12LL,0x0EBE75D800DB1F12LL,0x0EBE75D800DB1F12LL,0x0EBE75D800DB1F12LL};
        int **l_737 = (void*)0;
        int *l_743 = &g_2;
        long long l_772 = 0x3A5F49B24441C859LL;
        long long l_803 = 0L;
        int l_804 = 0xBEE1DC8DL;
        unsigned char l_820[1];
        int i;
        for (i = 0; i < 1; i++)
            l_820[i] = 0UL;
        if (p_49)
        {
            unsigned char l_712 = 0UL;
            l_712 ^= (p_47 | (g_62 , 0UL));
        }
        else
        {
            int **l_719 = &g_30[3][0];
            unsigned char l_720 = 0xCEL;
            int l_736[10][4][6] = {{{0x2DA1F31DL,1L,0x3FA28999L,0xA058FE32L,0x666142C5L,0x740136ABL},{7L,2L,0L,0L,5L,1L},{0L,5L,1L,0L,1L,0L},{0x39F34D58L,0xB0128A0FL,0L,0x42C2A725L,1L,0x2DA1F31DL}},{{0L,0x49680F4BL,0L,(-1L),0L,0L},{0x07A311C2L,1L,(-1L),(-7L),2L,0x740136ABL},{0xFCBF657FL,1L,9L,1L,0L,1L},{0L,0x49680F4BL,0xFCBF657FL,0xA058FE32L,1L,7L}},{{0x740136ABL,0xB0128A0FL,0L,0xCEC6FB68L,1L,0L},{0xA058FE32L,5L,0L,0L,5L,0xA058FE32L},{0x39F34D58L,2L,(-1L),(-7L),0x666142C5L,0x2DA1F31DL},{0x5A97DBC2L,1L,0L,1L,0L,1L}},{{0x5A97DBC2L,0L,1L,(-7L),(-7L),7L},{0x39F34D58L,0x666142C5L,9L,0xD475C144L,(-9L),0x24AB2FC0L},{(-1L),0L,0x22568A00L,(-5L),0xCEC6FB68L,0x9FF0E324L},{(-9L),0x740136ABL,(-1L),(-1L),(-1L),0x341E6A13L}},{{0x01D0D9BFL,(-10L),(-1L),5L,(-1L),0x01D0D9BFL},{7L,0x42C2A725L,4L,0x9FF0E324L,0x2DA1F31DL,0x01D0D9BFL},{(-10L),2L,(-1L),(-1L),(-9L),0x341E6A13L},{1L,0xCEC6FB68L,(-1L),0x0E84026CL,0x3FA28999L,0x9FF0E324L}},{{1L,0x2DA1F31DL,0x22568A00L,(-1L),0L,0x24AB2FC0L},{0x01D0D9BFL,0L,(-7L),0x01D0D9BFL,0xCEC6FB68L,(-1L)},{(-1L),0x42C2A725L,0L,(-1L),(-10L),5L},{(-1L),(-1L),(-1L),0xD475C144L,(-10L),(-1L)}},{{(-7L),0x42C2A725L,1L,0x0E84026CL,0xCEC6FB68L,(-1L)},{(-10L),0L,0xD475C144L,0x1B14A184L,0L,0x341E6A13L},{4L,0x2DA1F31DL,0x1B14A184L,(-1L),0x3FA28999L,(-1L)},{7L,0xCEC6FB68L,7L,(-1L),(-9L),0L}},{{(-1L),2L,(-7L),(-5L),0x2DA1F31DL,(-9L)},{0x9FF0E324L,0x42C2A725L,0x341E6A13L,(-3L),0L,0x0E84026CL},{0L,1L,(-9L),0x0E84026CL,0L,0L},{0x70F43BC9L,0xFCBF657FL,(-1L),0xED9A17E8L,(-9L),1L}},{{1L,0x740136ABL,(-8L),0xD475C144L,0x5A97DBC2L,(-8L)},{0L,1L,0xD475C144L,1L,0L,7L},{(-5L),(-9L),(-1L),(-9L),0x07A311C2L,0xD475C144L},{0L,7L,(-1L),0x8BBE7E90L,1L,7L}},{{0xED9A17E8L,0xFCBF657FL,0xD475C144L,1L,0L,(-8L)},{1L,0L,(-8L),0x0E84026CL,1L,1L},{0x01D0D9BFL,9L,(-1L),1L,(-1L),0L},{(-1L),0x740136ABL,(-9L),0x341E6A13L,0x07A311C2L,0x0E84026CL}}};
            int *l_738 = &g_31;
            int i, j, k;
            for (g_683 = (-1); (g_683 == 2); g_683 = safe_add_func_uint16_t_u_u(g_683, 6))
            {
                int *l_724 = &g_54;
                (*g_81) = (((safe_lshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s(g_510, (((&g_82 == l_719) && (l_720 , (((void*)0 == &g_30[4][0]) , (p_49 | ((0xA6E79A61E1392454LL < ((safe_div_func_uint64_t_u_u((g_54 , 0x4C0E0B0CCC1CC0EELL), p_47)) , 18446744073709551609UL)) == (-9L)))))) , g_683))) , 0xAE4DL), 13)) || l_723) , l_724);
                (*g_82) = (**l_613);
                for (g_204 = 14; (g_204 <= 9); g_204--)
                {
                    unsigned short l_727 = 0x7595L;
                    int *l_734 = &g_89;
                    if ((l_727 & ((p_47 <= (l_719 != ((0x01DE5A59348C9738LL == (p_47 | (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((g_31 && func_22(l_734, l_734, &l_734, g_409)) < (-4L)), p_46)), 0x3FL)), g_395)))) , (void*)0))) , p_49)))
                    {
                        return g_89;
                    }
                    else
                    {
                        return l_736[0][0][5];
                    }
                }
            }
            (*l_613) = l_738;
            for (g_54 = 26; (g_54 <= 3); g_54 = safe_sub_func_uint16_t_u_u(g_54, 2))
            {
                int *l_741 = &g_54;
                l_742 ^= func_22(l_741, (*g_81), &l_741, p_48);
                (*g_649) = (**g_81);
                (*l_719) = l_743;
            }
        }
        (*g_649) &= (0x2C82L != (~(((safe_div_func_uint8_t_u_u(((&l_613 == (void*)0) , p_48), (safe_add_func_uint16_t_u_u(65534UL, (~l_750))))) , &g_62) != (void*)0)));
        for (l_589 = 10; (l_589 == 21); l_589 = safe_add_func_uint64_t_u_u(l_589, 9))
        {
            int l_755[6][6][7] = {{{0xA239B743L,(-3L),1L,(-3L),0xA239B743L,(-6L),0x67D855E2L},{0xAB82A9BBL,0x07DA5116L,0x15683E4CL,4L,0x465E764FL,(-9L),0x68DA83FFL},{(-1L),(-1L),0x0C4F06AEL,0xBAE47DA4L,0x8647DE19L,0x44B881ACL,0xC98FA473L},{0xAB82A9BBL,4L,0xF636C6DAL,0xC0CF0690L,(-1L),2L,(-1L)},{0xA239B743L,(-7L),0xA239B743L,(-1L),1L,0x44B881ACL,0x67D855E2L},{0x465E764FL,0xC0CF0690L,1L,0x191101A6L,(-3L),0xAB82A9BBL,1L}},{{0x1C5279A3L,0x44CE5D90L,0xC98FA473L,0xA8085152L,(-7L),0x44B881ACL,0x3AE25426L},{0x07DA5116L,7L,(-9L),(-6L),(-6L),(-9L),7L},{0xB7905514L,0xBAE47DA4L,1L,0xF5A3AF73L,0xBE6B7797L,(-1L),0x1CA08262L},{0L,0x465E764FL,0xF636C6DAL,7L,(-3L),0x465E764FL,(-9L)},{0x861B6952L,(-1L),(-7L),0xF5A3AF73L,0x1C5279A3L,0xBAE47DA4L,(-6L)},{3L,(-9L),4L,(-6L),0L,7L,1L}},{{0xA239B743L,0x44B881ACL,0xBE6B7797L,0xA8085152L,0L,0x44CE5D90L,1L},{0xB5370A10L,0xAB82A9BBL,0xF636C6DAL,0x191101A6L,0xB5370A10L,0xC0CF0690L,0x68DA83FFL},{0x09C89AB1L,0x44B881ACL,0x1C5279A3L,(-1L),3L,0xBEFCCC60L,3L},{0x671A006FL,(-9L),(-9L),0x671A006FL,0xAB82A9BBL,2L,0L},{0x67D855E2L,(-1L),0L,0x0DEB827CL,0xB7905514L,(-6L),0x8C96DB92L},{0xB5370A10L,0x465E764FL,1L,2L,3L,(-6L),0L}},{{0x3AE25426L,0x0DEB827CL,0x861B6952L,(-7L),0xC98FA473L,(-7L),0x861B6952L},{(-3L),0xF636C6DAL,0L,(-6L),3L,2L,1L},{0xA986006AL,(-3L),0x55B1F206L,(-1L),0xB9631013L,0xBAE47DA4L,0xD40CEAE5L},{0xC0CF0690L,0x671A006FL,0xF636C6DAL,1L,3L,0L,4L},{(-1L),0xF5A3AF73L,0xC98FA473L,(-3L),0xC98FA473L,0xF5A3AF73L,(-1L)},{(-6L),(-9L),7L,0x07DA5116L,(-3L),0L,(-1L)}},{{0xD40CEAE5L,0xBAE47DA4L,0xB9631013L,(-1L),0x55B1F206L,(-3L),0xA986006AL},{0xB5370A10L,(-1L),7L,4L,(-9L),(-3L),0xF636C6DAL},{0x861B6952L,(-7L),0xC98FA473L,(-7L),0x861B6952L,0x0DEB827CL,3L},{0x465E764FL,2L,0xF636C6DAL,0L,0x07DA5116L,1L,1L},{0xBE6B7797L,0xBAE47DA4L,0x55B1F206L,4L,0x67D855E2L,(-6L),0xA239B743L},{0x465E764FL,0L,0L,0x15683E4CL,0xC0CF0690L,0xC0CF0690L,0x15683E4CL}},{{0x861B6952L,0xF5A3AF73L,0x861B6952L,(-6L),0x8647DE19L,(-1L),0x3AE25426L},{0xB5370A10L,0L,1L,(-9L),0xAB82A9BBL,0x68DA83FFL,4L},{0L,0L,0xA239B743L,(-1L),0xD40CEAE5L,(-6L),0x1CA08262L},{(-1L),0xAB82A9BBL,0L,(-9L),0L,0x671A006FL,0x191101A6L},{0x8C211A7EL,4L,0xC98FA473L,0x44B881ACL,0x8647DE19L,0xBAE47DA4L,0x0C4F06AEL},{0x671A006FL,1L,0L,0xAB82A9BBL,(-9L),1L,0L}}};
            int *l_767[9][7];
            int *l_785 = &g_54;
            int *l_793 = &g_54;
            short l_796 = 0x9EC8L;
            char l_818 = 0x1FL;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 7; j++)
                    l_767[i][j] = &g_54;
            }
            l_755[4][2][6] |= (safe_rshift_func_int8_t_s_u(0x7DL, 0));
            if ((p_46 <= p_49))
            {
                unsigned l_784 = 0x668D9495L;
                int *l_805 = &l_742;
                if ((((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) != g_89) < (((-6L) < (safe_rshift_func_int16_t_s_u(8L, 12))) | ((safe_sub_func_uint8_t_u_u((p_46 & ((*g_649) , ((safe_sub_func_int32_t_s_s((p_48 | (g_31 & ((safe_div_func_int8_t_s_s(p_48, g_263)) || 3L))), l_784)) <= p_48))), l_784)) | 0x8054L))))
                {
                    int **l_794 = &l_767[6][0];
                    int *l_795 = &l_750;
                    (*g_81) = l_785;
                    for (g_204 = 3; (g_204 >= 0); g_204 -= 1)
                    {
                        unsigned l_792[7] = {1UL,18446744073709551606UL,1UL,1UL,18446744073709551606UL,1UL,1UL};
                        int i;
                        (*g_649) ^= (!(((safe_rshift_func_int16_t_s_u(l_735[g_204], g_409)) || ((**l_613) > (safe_add_func_int64_t_s_s(0x33817FB3FD825734LL, ((safe_rshift_func_int16_t_s_s(p_48, l_792[1])) , (l_784 == p_46)))))) > ((p_48 & g_395) != (**g_81))));
                        if (p_49)
                            break;
                    }
                    (*l_795) |= (((func_22((*g_81), (((*l_743) != ((((**l_613) , (*g_649)) ^ (*l_785)) == 0x73D4B6C4L)) , l_793), l_794, l_784) , l_784) , (*l_793)) || g_510);
                    for (p_46 = 0; (p_46 <= 3); p_46 += 1)
                    {
                        int i;
                        return l_735[p_46];
                    }
                }
                else
                {
                    (*g_81) = l_767[2][6];
                    if (l_796)
                        continue;
                    l_804 |= (((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(g_409, 2)) || (0x31L & (safe_sub_func_int32_t_s_s(l_784, g_204)))), ((p_46 == ((p_48 , (p_48 || ((g_62 >= l_803) > g_409))) & 0UL)) && p_47))) || (*l_785)) , p_49);
                }
                (*l_613) = l_805;
            }
            else
            {
                int l_806 = 1L;
                int *l_812 = &g_62;
                if (l_806)
                    break;
                for (l_806 = 23; (l_806 >= 22); l_806--)
                {
                    unsigned char l_813 = 1UL;
                    for (p_46 = 10; (p_46 != 18); p_46 = safe_add_func_int32_t_s_s(p_46, 9))
                    {
                        unsigned l_811 = 0UL;
                        (*g_81) = l_812;
                        (*g_81) = (*g_81);
                        (*l_785) = l_813;
                    }
                }
                if ((safe_div_func_uint64_t_u_u(((0L <= p_49) , func_22((p_46 , &g_89), l_767[6][6], &l_767[6][3], (*l_812))), 0x5A33116A075B4BFFLL)))
                {
                    l_812 = l_812;
                    for (g_409 = 0; (g_409 <= 3); g_409 += 1)
                    {
                        int *l_819 = &g_2;
                        int i;
                        (*l_812) |= func_22(l_767[0][6], l_819, &l_767[8][3], l_735[g_409]);
                        (*l_793) |= ((g_683 > p_47) , p_47);
                    }
                    if (l_820[0])
                        continue;
                }
                else
                {
                    unsigned char l_823 = 9UL;
                    for (l_803 = 0; (l_803 != (-15)); l_803 = safe_sub_func_int64_t_s_s(l_803, 1))
                    {
                        (*g_649) = l_823;
                    }
                }
            }
            for (p_46 = 0; (p_46 <= 0); p_46 += 1)
            {
                int **l_824[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_824[i] = (void*)0;
                (*g_81) = l_793;
                (*g_82) = ((safe_mod_func_uint64_t_u_u(g_395, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((**l_613), g_204)), 2)))) & (((p_46 , (safe_lshift_func_int8_t_s_s((((**g_81) || 0xC499ACE2L) , (safe_unary_minus_func_uint8_t_u((*l_743)))), 7))) , ((void*)0 != (*g_81))) || g_2));
                if ((**g_81))
                    break;
            }
        }
    }
    if ((safe_rshift_func_int8_t_s_u((+l_836), (safe_sub_func_int16_t_s_s(g_409, (((&g_54 != (void*)0) | p_47) , (g_62 > (safe_lshift_func_int8_t_s_s((p_47 == ((&l_613 == (void*)0) <= 0xCC7A0A83L)), 7)))))))))
    {
        int *l_843 = &g_31;
        int ***l_848 = &l_613;
        short l_857[3][8];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 8; j++)
                l_857[i][j] = 0x788AL;
        }
        (*g_649) |= ((g_31 < g_204) < ((p_46 == 0x10D8L) | 0xA97EB1E7L));
        for (l_723 = 0; (l_723 == 16); l_723 = safe_add_func_uint8_t_u_u(l_723, 1))
        {
            int l_853 = 5L;
            (*l_613) = l_843;
            if (((((p_47 != (((*g_649) , (safe_add_func_int32_t_s_s(p_47, (safe_div_func_uint64_t_u_u((g_306 == (l_848 != &l_613)), g_306))))) , ((p_48 | (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_49, g_204)), 255UL))) | l_853))) & g_409) | 3UL) & 0xC5C29124B9B76EF1LL))
            {
                unsigned char l_854[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_854[i] = 0xCDL;
                l_854[0] ^= (***l_848);
            }
            else
            {
                short l_859 = 0x59FCL;
                for (l_589 = 0; (l_589 > 21); ++l_589)
                {
                    short l_858 = (-2L);
                    int l_870 = 4L;
                    int **l_872 = &g_649;
                    (*g_649) = (l_858 ^ l_859);
                    if (l_858)
                        continue;
                    if ((*g_82))
                        continue;
                    if (((0x026F36FFL >= (p_47 == (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_49, (*g_82))), 7)) , ((p_47 & ((safe_div_func_uint8_t_u_u((p_47 , ((8L | l_859) , (+(+l_870)))), p_49)) , 0x6AL)) < 0UL)), g_871)))) & 18446744073709551611UL))
                    {
                        (**l_848) = (*g_81);
                        (**l_848) = (*g_81);
                        (*g_649) = p_48;
                        if (l_859)
                            break;
                    }
                    else
                    {
                        unsigned short l_876 = 0x2282L;
                        l_876 = (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s(0xFE33L, 14))));
                    }
                }
                (**l_848) = (void*)0;
            }
            return g_62;
        }
        for (p_49 = (-14); (p_49 >= (-19)); p_49 = safe_sub_func_int64_t_s_s(p_49, 8))
        {
            int ***l_883 = &l_613;
            for (l_614 = 0; (l_614 <= 0); l_614 += 1)
            {
                unsigned char l_885 = 7UL;
                int l_895 = (-2L);
                (*g_649) = (safe_rshift_func_uint16_t_u_u(((-9L) > ((((safe_add_func_int64_t_s_s(((void*)0 != l_848), 0x7B863C9FA27D6BE8LL)) ^ ((void*)0 != l_883)) == g_204) | p_47)), 3));
                for (g_54 = 0; (g_54 <= 0); g_54 += 1)
                {
                    int l_884 = 0xA323BB6CL;
                    int ***l_888[3][9] = {{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&l_613},{&g_81,&g_81,&g_81,&l_613,&g_81,&g_81,&l_613,&g_81,&g_81},{&g_81,&g_81,&g_81,&l_613,&g_81,(void*)0,(void*)0,&g_81,&l_613}};
                    int i, j;
                    if (l_884)
                    {
                        (*g_649) ^= l_885;
                        return p_49;
                    }
                    else
                    {
                        int i, j;
                        g_30[(l_614 + 2)][g_54] = &g_62;
                        l_895 |= ((((7L <= ((safe_sub_func_uint32_t_u_u((((g_54 <= p_49) , l_888[1][8]) == &g_81), ((((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(p_47, 3)) < (-9L)), (safe_div_func_uint16_t_u_u(0xED30L, (p_49 || 0x45B4A7ACL))))) & l_885) & 0x4615E4F30F6E409ALL) <= 0L))) && p_47)) , &g_82) != &g_30[5][0]) , 0x02709904L);
                    }
                    (**l_848) = &g_62;
                }
            }
        }
    }
    else
    {
        unsigned l_898 = 0x2403BE5FL;
        int *l_905 = &l_742;
        for (p_49 = 0; (p_49 <= (-13)); p_49 = safe_sub_func_int8_t_s_s(p_49, 3))
        {
            char l_899 = 0xC2L;
            int *l_904[8] = {(void*)0,(void*)0,&l_742,(void*)0,(void*)0,&l_742,(void*)0,(void*)0};
            int i;
            (*g_649) |= l_898;
            for (g_263 = 0; (g_263 <= 0); g_263 += 1)
            {
                unsigned l_907 = 1UL;
                int i, j;
                (*g_649) |= (l_899 & (safe_sub_func_int32_t_s_s(0xCF37A52CL, ((0x5AC2F60C432E4E50LL ^ (p_47 == (safe_div_func_uint32_t_u_u(l_898, (((func_22(l_904[7], l_905, &g_82, p_46) != p_46) , p_48) & l_906))))) != l_907))));
                g_30[(g_263 + 4)][g_263] = (*g_81);
                (*l_905) = p_49;
            }
        }
        (*l_918) |= (((safe_mod_func_uint8_t_u_u(p_48, 0xD5L)) <= (safe_add_func_int16_t_s_s(0L, func_22(l_919, l_905, &l_905, p_49)))) | g_31);
        (*g_649) &= (g_871 | (safe_rshift_func_int8_t_s_u(g_54, p_46)));
        for (l_589 = (-26); (l_589 != 4); l_589 = safe_add_func_uint32_t_u_u(l_589, 1))
        {
            (*l_613) = (((p_48 <= (safe_unary_minus_func_int32_t_s(((g_683 != 18446744073709551609UL) , (p_47 , p_48))))) == (g_2 < g_395)) , &g_2);
            (*l_919) = p_48;
        }
    }
    if (p_47)
    {
        return p_47;
    }
    else
    {
        int **l_925 = (void*)0;
        int *l_929 = &l_742;
        unsigned long long l_932 = 1UL;
        if (p_49)
        {
            (*l_919) |= ((*l_929) && (p_47 , (0xAE6CL || p_47)));
        }
        else
        {
            (*l_918) &= (safe_div_func_uint32_t_u_u(((*l_929) == l_932), 4294967295UL));
        }
        for (g_871 = (-3); (g_871 > 54); g_871 = safe_add_func_uint64_t_u_u(g_871, 1))
        {
            unsigned char l_935 = 0x68L;
            (*g_649) = (l_935 <= l_935);
        }
    }
    return p_46;
}







static int * func_52(int ** p_53)
{
    unsigned l_60 = 0xA52D86A0L;
    int **l_576 = &g_82;
    int l_577 = 4L;
    unsigned long long l_582 = 1UL;
    for (g_54 = 0; (g_54 >= 0); g_54 -= 1)
    {
        unsigned l_59 = 1UL;
        int **l_61 = &g_30[4][0];
        int ***l_550 = &g_81;
        int *l_552 = (void*)0;
        unsigned char l_575[7][3][7] = {{{9UL,255UL,0UL,255UL,250UL,0xE1L,0xE1L},{0x7DL,0UL,9UL,0UL,0x7DL,0x18L,0xE1L},{0x38L,0x23L,0x1CL,1UL,0xE1L,0UL,0xBFL}},{{0x1CL,0x18L,255UL,250UL,1UL,5UL,1UL},{0x23L,0x86L,0x36L,1UL,0x36L,0x86L,0x23L},{5UL,0x86L,255UL,0UL,0UL,0x23L,0x7DL}},{{0x7DL,255UL,0UL,255UL,1UL,9UL,0xBFL},{255UL,0xBFL,255UL,0x38L,0x86L,0x38L,255UL},{0UL,0UL,0x36L,0x38L,0x25L,0x6AL,1UL}},{{0x86L,0x25L,255UL,255UL,0x7DL,0xBFL,255UL},{250UL,0x18L,0x6AL,0UL,0x25L,0xE1L,0x25L},{1UL,0x7DL,0x7DL,1UL,0x86L,0xE1L,0UL}},{{0UL,0x6AL,0x18L,250UL,1UL,0xBFL,0x38L},{255UL,255UL,0x25L,0x86L,0UL,0x6AL,0UL},{0x38L,0x36L,0UL,0UL,0x36L,0x38L,0x25L}},{{0x38L,255UL,0xBFL,255UL,1UL,9UL,255UL},{255UL,0UL,255UL,0x7DL,0UL,0x23L,1UL},{0x86L,0x7DL,9UL,0x1CL,0x1CL,9UL,0x7DL}},{{0xBFL,0UL,9UL,0UL,1UL,0x1CL,0x18L},{5UL,0xE1L,255UL,0x23L,1UL,255UL,0x25L},{9UL,0x23L,0x18L,0UL,255UL,255UL,0UL}}};
        int i, j, k;
        if ((9UL & ((safe_sub_func_int8_t_s_s((l_59 , l_60), 255UL)) > ((void*)0 == l_61))))
        {
            unsigned l_78 = 18446744073709551615UL;
            int ***l_569 = (void*)0;
            for (l_59 = 0; (l_59 <= 0); l_59 += 1)
            {
                char l_68 = (-1L);
                int *l_549 = &g_2;
                unsigned l_557 = 5UL;
                int *l_558 = &g_89;
                for (l_60 = 0; (l_60 <= 0); l_60 += 1)
                {
                    for (g_62 = 0; (g_62 >= 0); g_62 -= 1)
                    {
                        int l_75 = 0x0ECE9518L;
                        int ***l_548 = &l_61;
                        int *l_551 = &g_89;
                        int i, j;
                        (*l_548) = func_27(((func_63(l_68, (((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0L, (safe_add_func_uint16_t_u_u(((((!l_75) < (0xAAL && ((safe_lshift_func_uint16_t_u_s(l_78, 14)) > ((safe_add_func_int8_t_s_s((func_22(g_30[g_62][l_60], &g_54, &g_30[4][0], (g_2 , l_78)) , 1L), 9L)) >= 0L)))) ^ l_60) >= l_75), l_78)))) == 0x9CL), (-1L))) > g_31) , p_53), g_81, l_78) ^ 0xDF0F655A4EDAE098LL) >= 0x23L), l_75);
                        g_30[(l_60 + 2)][g_54] = l_549;
                        (*l_551) = (&g_81 != l_550);
                        return l_552;
                    }
                    (*g_82) &= 9L;
                }
                for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
                {
                    int i, j;
                    return g_30[g_89][g_89];
                }
                (*l_558) |= ((*l_549) >= (l_78 > ((((l_60 , 0xBD73L) | (0x9DL || (((safe_sub_func_int16_t_s_s(((void*)0 != &p_53), g_54)) , func_27(g_263, l_557)) != &g_82))) , g_31) , (***l_550))));
            }
            for (g_510 = (-5); (g_510 == 44); ++g_510)
            {
                unsigned char l_566 = 0xB8L;
                int ***l_571 = &l_61;
                if ((l_60 , (&g_30[4][0] == (void*)0)))
                {
                    int l_565[3][4] = {{0x9D1A7B98L,7L,0x9D1A7B98L,0x9D1A7B98L},{7L,7L,(-1L),7L},{7L,0x9D1A7B98L,0x9D1A7B98L,7L}};
                    int i, j;
                    for (l_59 = 0; (l_59 <= 43); l_59 = safe_add_func_int8_t_s_s(l_59, 8))
                    {
                        (**g_81) = (safe_add_func_uint64_t_u_u(l_565[1][1], (&p_53 == (void*)0)));
                    }
                    (*g_82) = l_566;
                }
                else
                {
                    int l_572 = (-3L);
                    for (g_306 = 0; (g_306 != (-13)); g_306 = safe_sub_func_uint64_t_u_u(g_306, 5))
                    {
                        int l_570 = (-1L);
                        (*g_82) &= l_566;
                        (***l_550) = ((void*)0 == l_569);
                        (**g_81) = l_570;
                        if ((**g_81))
                            break;
                    }
                    for (g_395 = 0; (g_395 <= 0); g_395 += 1)
                    {
                        int i, j;
                        (*g_82) &= (g_54 , l_566);
                        (*g_82) ^= (-1L);
                    }
                    if (((void*)0 == l_571))
                    {
                        (**g_81) = (l_572 || g_263);
                    }
                    else
                    {
                        return (*p_53);
                    }
                    for (l_59 = 0; (l_59 == 37); l_59 = safe_add_func_int32_t_s_s(l_59, 1))
                    {
                    }
                }
            }
            (**g_81) = (**l_576);
        }
        else
        {
            (*g_81) = (*p_53);
            return (*l_576);
        }
        if ((***l_550))
            break;
        (***l_550) = 0xC8382EA2L;
    }
    l_582 = ((safe_add_func_uint16_t_u_u(((*g_81) == (*p_53)), (**l_576))) < ((+(**l_576)) > ((&l_576 != (void*)0) > (((((&g_30[2][0] == &g_82) > (&l_576 != (void*)0)) , g_263) & (**l_576)) & (**l_576)))));
    return (*p_53);
}







static long long func_63(unsigned p_64, int ** p_65, int ** p_66, unsigned short p_67)
{
    int l_85 = (-1L);
    unsigned short l_106 = 0xA2CBL;
    int l_116[6][2] = {{0x21FDF513L,1L},{1L,0x21FDF513L},{1L,1L},{0x21FDF513L,1L},{1L,0x21FDF513L},{1L,1L}};
    int **l_153[7][2][9] = {{{&g_30[3][0],&g_82,&g_30[0][0],&g_30[4][0],(void*)0,&g_82,(void*)0,&g_30[4][0],&g_30[0][0]},{&g_30[4][0],&g_30[4][0],&g_30[4][0],(void*)0,(void*)0,&g_30[4][0],&g_82,&g_30[4][0],(void*)0}},{{&g_30[3][0],(void*)0,(void*)0,&g_30[3][0],&g_30[1][0],(void*)0,(void*)0,&g_30[0][0],(void*)0},{&g_82,(void*)0,&g_30[4][0],&g_30[4][0],(void*)0,&g_82,(void*)0,&g_30[4][0],&g_82}},{{&g_30[2][0],(void*)0,&g_30[0][0],&g_30[1][0],&g_30[1][0],&g_30[0][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_82,(void*)0,(void*)0,&g_82,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_82,(void*)0,&g_82,&g_30[4][0],&g_30[4][0],&g_82,(void*)0},{&g_30[4][0],&g_82,&g_30[4][0],(void*)0,&g_82,(void*)0,&g_30[4][0],&g_30[4][0],(void*)0}},{{&g_82,(void*)0,(void*)0,(void*)0,&g_82,(void*)0,&g_82,&g_30[4][0],&g_30[4][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_82,(void*)0}},{{&g_30[3][0],&g_30[1][0],(void*)0,(void*)0,&g_30[0][0],(void*)0,(void*)0,&g_30[1][0],&g_30[3][0]},{(void*)0,&g_30[4][0],&g_30[4][0],&g_82,&g_82,(void*)0,&g_82,&g_82,&g_30[4][0]}},{{&g_82,&g_82,&g_30[2][0],(void*)0,&g_30[1][0],&g_30[4][0],&g_30[3][0],&g_30[4][0],&g_30[1][0]},{(void*)0,&g_82,&g_82,(void*)0,&g_30[4][0],(void*)0,(void*)0,&g_30[4][0],(void*)0}}};
    int **l_205 = &g_30[6][0];
    int *l_214 = &l_116[4][1];
    unsigned short l_235 = 65528UL;
    int *l_265 = &l_116[5][0];
    int *l_307 = &g_62;
    unsigned long long l_379[9];
    short l_545 = 0x7B3EL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_379[i] = 0xB34E7BD40F763856LL;
    if ((safe_mod_func_uint8_t_u_u(0xD2L, 0x43L)))
    {
        unsigned long long l_91 = 9UL;
        int *l_129 = &g_62;
        unsigned l_169 = 0x7DB0B19EL;
        int l_170 = 1L;
        unsigned l_198 = 4294967295UL;
        for (p_67 = 0; (p_67 <= 0); p_67 += 1)
        {
            int l_90[9][6];
            int **l_162 = &g_30[4][0];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 6; j++)
                    l_90[i][j] = 0x06DCF8E4L;
            }
        }
    }
    else
    {
        int *l_213 = &l_116[0][1];
        int **l_219[7][3][1];
        long long l_247 = 0x773BEED81015B2B4LL;
        int **l_277 = &l_265;
        unsigned char l_309 = 0x31L;
        int *l_372 = &g_89;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_219[i][j][k] = (void*)0;
            }
        }
        if ((~(g_89 ^ (g_2 != func_22((*p_65), l_213, &g_82, p_67)))))
        {
            unsigned char l_221 = 0x3CL;
            (*p_65) = l_214;
            for (p_67 = 11; (p_67 != 53); ++p_67)
            {
                unsigned long long l_220 = 5UL;
                for (g_204 = 26; (g_204 != 11); g_204--)
                {
                    l_219[0][2][0] = func_27((*l_213), (*l_213));
                    (*l_213) &= func_22((*g_81), (*p_65), (g_54 , &g_30[5][0]), g_31);
                    if (l_220)
                        continue;
                    (*p_65) = (*p_65);
                }
                (*g_81) = (*p_65);
                l_221 = (+func_22((*p_65), (*p_66), p_66, g_54));
                (*l_213) = (g_89 || g_2);
            }
        }
        else
        {
            int l_224[5];
            int **l_308 = (void*)0;
            unsigned char l_323 = 255UL;
            short l_359 = 0x669BL;
            int i;
            for (i = 0; i < 5; i++)
                l_224[i] = (-1L);
            for (p_64 = 0; (p_64 <= 0); p_64 += 1)
            {
                unsigned l_246 = 0xB30A4D82L;
                int **l_270 = (void*)0;
                int **l_289 = (void*)0;
                for (g_204 = 0; (g_204 <= 0); g_204 += 1)
                {
                    unsigned char l_230 = 4UL;
                    int l_264 = (-1L);
                    for (p_67 = 0; (p_67 <= 0); p_67 += 1)
                    {
                        int l_229 = 1L;
                        int i, j;
                        (*l_214) = (safe_add_func_int32_t_s_s((+((+l_224[4]) && ((safe_rshift_func_uint16_t_u_s((0x32L <= ((safe_rshift_func_uint8_t_u_u((((l_224[4] && (1L & func_22((*g_81), (l_229 , (g_62 , (*g_81))), func_27(p_67, l_230), p_67))) > l_230) && 0x9F5DL), 2)) == g_2)), p_64)) == p_64))), (*l_213)));
                        (*l_214) = ((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((func_22((*p_66), (*g_81), func_27(((+(&g_30[(g_204 + 4)][p_64] != p_65)) , 0x642EL), ((((!l_235) | (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0x34851EF8L, (safe_add_func_int16_t_s_s(((p_64 != ((((p_67 , 0x88DFL) && p_67) ^ (-1L)) , p_67)) , 8L), (*l_214))))) & 0xF4CBL), 2)), (*l_214)))) ^ l_230) || 1L)), l_230) , 0x1FL), 1)) || g_2) == 0x1AL), (-8L))) == 0L);
                    }
                    if ((safe_sub_func_uint16_t_u_u((p_64 < (1UL || (l_224[0] <= ((g_2 , l_246) < (g_204 & ((*p_66) == &l_224[4])))))), (p_67 != p_64))))
                    {
                        int **l_258[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_258[i] = &g_30[4][0];
                        (*l_213) = func_22((*p_66), (*g_81), func_27((l_247 , (g_204 , l_246)), l_246), (safe_sub_func_uint32_t_u_u(l_246, l_224[1])));
                        (*l_213) ^= ((safe_div_func_uint16_t_u_u(g_204, (safe_add_func_uint16_t_u_u(l_246, (safe_add_func_int64_t_s_s(g_54, (!((safe_lshift_func_uint8_t_u_u((func_22((*g_81), (*p_65), l_258[1], p_64) || (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((p_66 == p_66) == l_246), g_54)), p_67)) , l_224[4]) || p_67)), g_2)) >= g_62)))))))) == g_31);
                        if (l_230)
                            break;
                    }
                    else
                    {
                        int i, j;
                        l_264 = g_263;
                        (*l_214) = (~0x1206E420L);
                        g_30[(g_204 + 6)][p_64] = (*p_66);
                        (*l_214) = ((g_204 <= (func_22(l_265, (*g_81), &g_82, p_67) >= (0x6C3A0CFAL > l_224[0]))) != (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((p_67 & l_264), 1)), g_2)));
                    }
                    for (g_263 = 0; (g_263 <= 0); g_263 += 1)
                    {
                        int i, j;
                        g_30[(g_263 + 5)][p_64] = (void*)0;
                        if (l_230)
                            continue;
                        (*l_214) &= ((&g_30[(g_263 + 5)][p_64] == l_270) != ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_230, 7)), p_64)) == l_264));
                    }
                    (*l_265) = ((safe_rshift_func_int8_t_s_s((l_277 == p_66), 0)) <= (l_224[4] > 0L));
                }
                (**l_277) = (((p_66 != (void*)0) >= 0xBF22F494L) != (p_64 & (p_64 <= (safe_unary_minus_func_uint8_t_u((g_263 , p_67))))));
                for (p_67 = 0; (p_67 <= 0); p_67 += 1)
                {
                    char l_318 = 0x09L;
                    int i;
                    l_224[(p_67 + 2)] = (safe_lshift_func_uint8_t_u_u(p_64, 5));
                    p_66 = ((((safe_mod_func_int32_t_s_s((*l_214), ((safe_div_func_int8_t_s_s(g_263, (safe_mod_func_uint32_t_u_u(1UL, p_67)))) , (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(p_67, l_224[2])) <= p_64), l_224[(p_67 + 2)]))))) ^ l_224[(p_67 + 2)]) , 4294967292UL) , &g_82);
                    if ((((safe_rshift_func_int16_t_s_u(g_263, 11)) || 9UL) >= (g_31 != ((((safe_sub_func_int32_t_s_s((*l_214), p_67)) , 0xD2BF5B2DL) <= (*l_307)) <= 0x872BC794F0E5C5ABLL))))
                    {
                        (**l_277) = func_22((*g_81), (*p_65), &g_30[4][0], ((l_309 < ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(p_64, (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(0L, p_64)), (((l_224[(p_67 + 2)] , l_224[(p_67 + 2)]) , g_89) , l_318))))), p_67)) > (-1L))) >= (*l_307)));
                        (**l_277) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((0x348B68128F69EAB3LL ^ (~l_323)), 6)), 5));
                    }
                    else
                    {
                        int i, j;
                        g_30[(p_67 + 5)][p_64] = (*p_65);
                        (*l_265) &= 6L;
                        l_224[(p_67 + 2)] &= (g_62 || g_54);
                    }
                    for (l_309 = 0; (l_309 <= 0); l_309 += 1)
                    {
                        return p_67;
                    }
                }
                for (g_263 = 0; (g_263 <= 0); g_263 += 1)
                {
                    (*l_214) = (*l_307);
                }
            }
            for (l_235 = 13; (l_235 == 12); l_235 = safe_sub_func_uint8_t_u_u(l_235, 6))
            {
                long long l_344[5] = {0x6FC550BE4A081BCELL,0x6FC550BE4A081BCELL,0x6FC550BE4A081BCELL,0x6FC550BE4A081BCELL,0x6FC550BE4A081BCELL};
                int l_354 = 0x0C8457E0L;
                int i;
                if ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((void*)0 == &g_30[4][0]), (p_67 || (safe_rshift_func_uint8_t_u_u(0xA4L, ((g_306 , 6L) & g_31)))))), g_31)))
                {
                    char l_332 = 9L;
                    int *l_345 = &l_116[3][1];
                    (*l_265) = ((l_332 <= (p_64 < (((((safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((p_64 >= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(g_2, p_67)) , 7UL), 9))) && (((safe_sub_func_uint64_t_u_u(((((safe_unary_minus_func_int32_t_s((func_22((*g_81), (*g_81), &l_213, g_62) != 8L))) || g_62) == 0x07L) <= g_263), 1L)) | p_64) ^ 0xD7L)), l_344[2])) , g_263), 4L)) < (*l_307)) < g_62) , &g_82) == (void*)0))) != p_64);
                    l_345 = (*p_65);
                    l_354 &= (g_54 < ((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((g_54 , ((p_67 || p_67) & (p_67 ^ 2L))), 0x1D1B10EDL)) ^ (0x90L > ((((safe_lshift_func_int16_t_s_s(p_67, 9)) <= p_67) , g_62) , g_2))), l_224[3])) & p_67));
                    for (p_67 = 0; (p_67 < 28); p_67 = safe_add_func_int16_t_s_s(p_67, 1))
                    {
                        (**l_277) &= (safe_lshift_func_uint8_t_u_u(g_263, 0));
                        (*l_265) = l_354;
                        return p_67;
                    }
                }
                else
                {
                    return l_359;
                }
            }
            (*l_205) = (*g_81);
        }
        (**l_277) |= (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(3L, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((p_64 , (safe_lshift_func_int16_t_s_s((p_64 < (func_22(l_372, (*g_81), &g_82, p_67) >= (g_2 >= 0x78L))), g_263))), 5)), p_67)))) != p_64), g_54));
    }
    if (((g_306 & ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((*l_265), 4)), (g_2 , g_54))) | ((0xF365L | (func_22((*g_81), (*p_66), &l_307, (safe_add_func_int32_t_s_s((+((*l_265) < p_64)), p_64))) , l_379[3])) , p_64))) != 2L))
    {
        unsigned l_387[2];
        int **l_389 = &l_307;
        int l_404 = 0x53A79702L;
        int i;
        for (i = 0; i < 2; i++)
            l_387[i] = 0x20458B27L;
        for (p_64 = 0; (p_64 <= 8); p_64 += 1)
        {
            unsigned l_380 = 0xF80CCA16L;
            int *l_388 = &g_31;
            int l_392 = (-1L);
            l_380 |= 0x89F3DD70L;
            for (p_67 = 0; (p_67 <= 8); p_67 += 1)
            {
                int *l_385 = &g_89;
                unsigned short l_386 = 0x1F35L;
                (*l_385) = (safe_add_func_int16_t_s_s(g_2, ((safe_lshift_func_uint16_t_u_s(((l_385 == (*g_81)) != (((*p_65) == (void*)0) & l_386)), (*l_214))) == ((*l_265) & p_67))));
                (*l_265) = l_387[1];
                (*p_65) = l_388;
                (*l_265) = (((func_22(l_388, (*l_205), l_389, ((*p_66) != (*p_66))) >= (p_67 , (*l_388))) || (safe_mod_func_uint64_t_u_u((func_22((*p_66), (*p_66), p_65, p_64) | (*l_388)), (-1L)))) | 4UL);
            }
            l_392 = (g_263 != 0x1EAD5D2DFEEF6DFBLL);
            if ((*l_265))
            {
                (*p_66) = (*p_65);
            }
            else
            {
                for (g_89 = 0; (g_89 <= 8); g_89 += 1)
                {
                    int l_400 = 0xB955475CL;
                    (*l_265) = (safe_rshift_func_int16_t_s_u(((g_395 && (safe_add_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((-1L), 0x72279CABB5229EB7LL)) == (g_89 <= g_395)), func_22((*l_389), &l_392, &g_30[7][0], (l_400 , g_54))))) && 18446744073709551615UL), 12));
                    for (l_400 = 2; (l_400 <= 8); l_400 += 1)
                    {
                        l_404 = (safe_unary_minus_func_int32_t_s((+(safe_sub_func_uint32_t_u_u(g_306, ((-5L) < (p_66 == &g_82)))))));
                    }
                }
            }
        }
        for (g_263 = 17; (g_263 >= 39); g_263++)
        {
            unsigned short l_412 = 0x7348L;
            int l_413 = 0L;
            unsigned char l_414 = 0UL;
            l_413 &= (((g_54 & 0x08L) >= p_64) | ((((safe_mod_func_int64_t_s_s((0x4EA5L >= g_409), g_31)) <= (9L ^ (*l_265))) != (safe_rshift_func_int16_t_s_s(l_412, 15))) | g_395));
            if (l_414)
                break;
        }
    }
    else
    {
        for (l_85 = 0; (l_85 < (-17)); l_85 = safe_sub_func_int64_t_s_s(l_85, 6))
        {
            (*l_205) = (*p_65);
        }
    }
    (*p_66) = (*g_81);
    if ((g_62 & ((~g_31) ^ ((p_67 , p_64) , g_31))))
    {
        unsigned char l_437 = 0xBEL;
        int l_439 = 0xB5DF1EF3L;
        unsigned long long l_440 = 1UL;
        unsigned l_525 = 4UL;
        int l_534 = (-8L);
        for (g_395 = (-27); (g_395 != 59); ++g_395)
        {
            unsigned l_419 = 0UL;
            short l_436[3][5][9] = {{{0x28C0L,1L,0x7E79L,0x28C0L,0x7E79L,1L,0x28C0L,1L,1L},{0xB1CFL,1L,(-8L),0xB1CFL,(-8L),1L,0xB1CFL,0x4D55L,0x4D55L},{1L,(-1L),(-3L),1L,(-3L),(-1L),1L,1L,1L},{0xB1CFL,1L,(-8L),0xB1CFL,(-8L),1L,0xB1CFL,0x4D55L,0x4D55L},{1L,(-1L),(-3L),1L,(-3L),(-1L),1L,1L,1L}},{{0xB1CFL,1L,(-8L),0xB1CFL,(-8L),1L,0xB1CFL,0x4D55L,0x4D55L},{1L,(-1L),(-3L),1L,(-3L),(-1L),1L,1L,1L},{0xB1CFL,1L,(-8L),0xB1CFL,(-8L),1L,0xB1CFL,0x4D55L,0x4D55L},{1L,(-1L),(-3L),1L,(-3L),(-1L),1L,1L,1L},{0xB1CFL,1L,(-8L),0xB1CFL,(-8L),1L,0xB1CFL,0x4D55L,0x4D55L}},{{1L,(-1L),(-3L),1L,(-3L),(-1L),1L,1L,1L},{0xB1CFL,1L,(-8L),0xB1CFL,1L,0x4D55L,0xA42BL,(-8L),(-8L)},{1L,1L,(-1L),1L,(-1L),1L,1L,(-3L),(-3L)},{0xA42BL,0x4D55L,1L,0xA42BL,1L,0x4D55L,0xA42BL,(-8L),(-8L)},{1L,1L,(-1L),1L,(-1L),1L,1L,(-3L),(-3L)}}};
            short l_438 = (-3L);
            char l_470[4];
            int l_472[10][4] = {{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L},{0xAE7E5432L,0xAE7E5432L,0xAE7E5432L,0xAE7E5432L}};
            unsigned l_490 = 0UL;
            unsigned char l_526 = 1UL;
            int **l_546 = &l_214;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_470[i] = (-1L);
            (*l_265) = (0xCD4565DFAA98F1C0LL && l_419);
            (*l_265) = (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_67 ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((1L | ((((safe_lshift_func_int8_t_s_s(0x80L, 0)) , ((safe_mod_func_int16_t_s_s(((g_2 != (func_22((*p_65), (*g_81), ((safe_add_func_uint64_t_u_u(0x8B31B9CCED615219LL, g_62)) , ((l_436[0][2][6] || l_437) , &g_30[8][0])), l_437) != g_31)) > l_438), l_438)) == l_439)) ^ l_436[0][2][6]) & l_439)), p_67)), p_64)), l_440))), p_64)), g_54));
            if (((g_204 != (p_64 == g_54)) , l_440))
            {
                int *l_453[2];
                unsigned short l_489 = 0x6A3AL;
                int i;
                for (i = 0; i < 2; i++)
                    l_453[i] = &g_54;
                if ((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((l_436[1][1][5] < (+g_31)) == (safe_sub_func_int16_t_s_s((*l_265), (safe_div_func_int16_t_s_s(((0x9E778932L & (safe_lshift_func_uint16_t_u_u((!((p_64 != (safe_rshift_func_int16_t_s_u((g_89 , l_419), 2))) | (((func_22(l_453[0], (*p_66), p_66, l_419) | 0xEE65999DL) | p_64) , l_437))), p_64))) && 0xE7L), 0x792CL))))), p_64)) ^ l_438), l_438)))
                {
                    char l_471 = (-1L);
                    (*l_214) = l_436[0][3][7];
                    for (g_263 = 0; (g_263 <= 0); g_263 += 1)
                    {
                        short l_460 = (-5L);
                        int *l_467 = &g_54;
                        int i, j;
                        l_439 |= (safe_mod_func_int64_t_s_s(l_116[(g_263 + 2)][(g_263 + 1)], (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(l_460, (((safe_div_func_int8_t_s_s((p_64 >= (p_64 | (safe_div_func_int8_t_s_s((0x0EL <= g_62), l_116[(g_263 + 2)][(g_263 + 1)])))), g_89)) | (func_22(((&g_30[(g_263 + 8)][g_263] == &g_30[(g_263 + 8)][g_263]) , (void*)0), l_467, p_66, p_64) < p_67)) & p_67))) && (-1L)), 2L))));
                    }
                    l_472[4][2] = ((safe_mul_func_uint32_t_u_u(((*l_265) ^ p_67), ((((p_67 & func_22((*g_81), (*p_65), &l_307, ((65535UL <= l_470[1]) || g_204))) < p_67) & g_2) <= (-6L)))) != l_471);
                }
                else
                {
                    return g_395;
                }
                if ((l_419 != (safe_sub_func_uint16_t_u_u((g_409 | (safe_add_func_uint16_t_u_u(g_54, (&g_30[1][0] == ((0xAAL | l_437) , p_66))))), (0xA538DCD98A7F5782LL | ((8UL | p_67) & g_306))))))
                {
                    unsigned char l_481[5] = {0xC6L,0xC6L,0xC6L,0xC6L,0xC6L};
                    int *l_482[3][5][1] = {{{&l_116[5][0]},{&g_89},{&l_116[5][0]},{&g_89},{&l_116[5][0]}},{{&g_89},{&l_116[5][0]},{&g_89},{&l_116[5][0]},{&g_89}},{{&l_116[5][0]},{&g_89},{&l_116[5][0]},{&g_89},{&l_116[5][0]}}};
                    int i, j, k;
                    for (l_437 = 7; (l_437 < 60); l_437++)
                    {
                        (*g_81) = (*p_65);
                        (*l_214) = (safe_mod_func_uint32_t_u_u(p_67, l_481[1]));
                        if (l_470[1])
                            break;
                        (*l_205) = (*p_66);
                    }
                    (*l_265) &= l_481[3];
                    (*g_81) = l_482[0][2][0];
                }
                else
                {
                    int l_497[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_497[i] = 0x2366A576L;
                    (*l_265) = ((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0x2FBA9F1A55351421LL, ((safe_add_func_uint32_t_u_u(((l_438 & (func_22((*p_66), (l_489 , (void*)0), &g_30[1][0], l_490) , (safe_div_func_uint16_t_u_u((g_263 <= 0xC5CEB63E8492A5E8LL), g_263)))) , l_439), g_54)) | g_54))), p_64)) , (-4L));
                    for (g_89 = 0; (g_89 <= 1); ++g_89)
                    {
                        unsigned short l_495 = 0xBAFDL;
                        int ***l_496 = &l_153[2][0][4];
                        (*g_81) = (*g_81);
                        (*l_496) = func_27((+(-1L)), l_495);
                        l_497[1] = 8L;
                    }
                    (*l_265) = (safe_mod_func_uint64_t_u_u((((0xDAB9A75AL <= (((p_64 < 0x4E08BB71AA7F24CELL) == (p_64 , p_67)) >= func_22((*p_66), &l_439, &g_30[6][0], p_64))) , 18446744073709551606UL) , l_439), g_204));
                    (*l_214) |= l_440;
                }
                for (g_263 = 14; (g_263 < 30); g_263 = safe_add_func_int32_t_s_s(g_263, 6))
                {
                    for (g_409 = 0; (g_409 <= 1); g_409 += 1)
                    {
                        int i, j;
                        (*g_81) = (l_116[(g_409 + 3)][g_409] , (*g_81));
                    }
                }
                for (l_437 = 0; (l_437 <= 24); l_437 = safe_add_func_int8_t_s_s(l_437, 7))
                {
                    unsigned l_533 = 3UL;
                    for (l_440 = 0; l_440 < 6; l_440 += 1)
                    {
                        for (g_409 = 0; g_409 < 2; g_409 += 1)
                        {
                            l_116[l_440][g_409] = 0xFD97C70FL;
                        }
                    }
                    for (l_419 = 0; (l_419 != 15); ++l_419)
                    {
                        l_439 = (*l_265);
                    }
                    for (l_439 = (-24); (l_439 >= (-12)); l_439 = safe_add_func_uint64_t_u_u(l_439, 1))
                    {
                        unsigned l_515 = 6UL;
                        int l_518 = 0x9181DBFAL;
                        (*l_214) = (p_64 <= (((safe_rshift_func_int16_t_s_s((0xB3L ^ ((*g_81) != (void*)0)), g_510)) | (safe_sub_func_uint16_t_u_u(((l_439 == (safe_lshift_func_int16_t_s_s((l_515 != (safe_add_func_uint32_t_u_u(((!p_64) || (p_64 | (-2L))), l_518))), p_64))) >= p_67), 1L))) , g_395));
                        (*p_66) = (((safe_mod_func_int64_t_s_s(g_263, p_64)) | (safe_sub_func_uint16_t_u_u((((0x90CE0CF0L == (((func_22((p_64 , (*p_65)), (*g_81), ((*l_265) , &g_82), (safe_lshift_func_int16_t_s_u(l_525, 1))) , l_470[0]) ^ g_409) | g_62)) , l_526) , 0xB054L), p_67))) , (void*)0);
                        l_534 = (((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_62, g_54)), func_22((*p_66), (*p_65), (((safe_add_func_int16_t_s_s(p_64, (l_533 < l_439))) ^ (g_263 < g_306)) , p_66), g_2))) && g_31) || l_515);
                        l_472[4][2] ^= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(func_22((*p_66), (*p_65), p_65, (l_545 <= (-1L))), ((void*)0 != &g_81))), g_31)), g_2)) || 0UL), p_67)), g_409));
                    }
                }
            }
            else
            {
                int **l_547 = &g_30[4][0];
                (*l_265) |= (l_546 != l_547);
            }
        }
    }
    else
    {
        return g_54;
    }
    return g_31;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_969[i][j], "g_969[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1229, "g_1229", print_hash_value);
    transparent_crc(g_1232, "g_1232", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    transparent_crc(g_1604, "g_1604", print_hash_value);
    transparent_crc(g_1639, "g_1639", print_hash_value);
    transparent_crc(g_1713, "g_1713", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_2024, "g_2024", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
