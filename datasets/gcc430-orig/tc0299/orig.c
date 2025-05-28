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



static volatile short g_13 = 0x4B4BL;
static unsigned g_14 = 4294967287UL;
static char g_41 = 0x09L;
static char g_43 = 6L;
static unsigned char g_54 = 5UL;
static int g_63 = 0x53649D95L;
static int g_65 = (-5L);
static int g_66 = 7L;
static int g_75 = 0x0421A167L;
static int *g_84 = &g_75;
static unsigned short g_89 = 0UL;
static short g_95 = 0x5AC2L;
static volatile int g_167 = 8L;
static volatile int *g_166 = &g_167;
static unsigned g_177 = 0xCDB5522DL;
static unsigned char g_191 = 0UL;
static short *g_230 = &g_95;
static short **g_229 = &g_230;
static int g_243 = 1L;
static unsigned char g_246 = 0x91L;
static unsigned char g_252 = 247UL;
static int *g_254 = &g_75;
static int *g_275 = &g_243;
static volatile unsigned char g_309 = 0xD4L;
static unsigned g_334 = 4294967295UL;
static int **g_338 = &g_84;
static int g_377 = 0x47ABD0C9L;
static unsigned g_405 = 18446744073709551615UL;
static short g_432 = 0xFA75L;
static const volatile unsigned *g_473 = (void*)0;
static const volatile unsigned **g_472 = &g_473;
static unsigned g_484 = 0xDDFA5272L;
static volatile unsigned g_485 = 1UL;
static unsigned char g_575 = 0x79L;



static unsigned func_1(void);
static int * func_2(int p_3, int * p_4, unsigned short p_5, unsigned char p_6);
static int func_7(int * const p_8);
static const int func_15(unsigned char p_16, int p_17);
static int func_18(int p_19, char p_20);
static int * func_22(int * p_23, unsigned char p_24, int * p_25, int * const p_26, char p_27);
static int * func_28(int * p_29, int p_30);
static int * func_31(unsigned short p_32);
static unsigned func_44(int p_45, unsigned char p_46);
static unsigned short func_47(int * p_48, unsigned char p_49, unsigned p_50, short p_51);
static unsigned func_1(void)
{
    unsigned l_21 = 0x6890C544L;
    int *l_290 = &g_63;
    int **l_581 = &g_254;
    int * const l_588 = &g_66;
    int *l_592 = &g_63;
    int **l_591 = &l_592;
    unsigned l_593 = 2UL;
    unsigned l_596 = 18446744073709551608UL;
    (*l_581) = func_2(((*l_290) = func_7((((safe_add_func_int32_t_s_s(((*g_275) = (safe_mul_func_uint16_t_u_u((+g_13), ((*g_230) = ((((g_14 , 2L) , func_15(g_14, func_18(g_14, l_21))) , (**g_229)) , l_21))))), l_21)) <= g_14) , (void*)0))), l_290, l_21, l_21);
    (*g_166) &= ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((func_47((*l_581), (((**l_581) || ((*g_230) = (*g_230))) != (((safe_mul_func_int16_t_s_s(((((g_246 = ((((((func_7(l_588) != g_75) , (safe_mul_func_int16_t_s_s((l_290 != ((*l_591) = &g_63)), ((*g_254) | l_593)))) != 1L) <= 0xFEL) != (**l_581)) >= 0xC7BDL)) < (**l_581)) == (**l_581)) <= (*l_588)), (*l_588))) == (**l_581)) , (**l_581))), (**l_581), g_54) == (**l_581)), 0x3FD3L)), (**l_581))) , (*g_254));
    (*g_166) |= (safe_mod_func_int16_t_s_s(((void*)0 != &g_473), (*l_588)));
    return l_596;
}







static int * func_2(int p_3, int * p_4, unsigned short p_5, unsigned char p_6)
{
    int **l_291 = &g_275;
    unsigned char l_292 = 0xD1L;
    short ***l_351 = &g_229;
    int * const l_367 = &g_243;
    int l_374 = 0x84DB45C9L;
    const unsigned **l_382 = (void*)0;
    unsigned *l_385 = &g_334;
    unsigned * const *l_384 = &l_385;
    unsigned l_428 = 0x4CB37EDDL;
    short l_493 = 0x8A3AL;
    unsigned *l_566 = &g_14;
    if ((((((*l_291) = &g_243) != p_4) , (l_292 == (4L >= (safe_mul_func_int8_t_s_s(((**l_291) <= (safe_mod_func_int16_t_s_s(1L, g_177))), 0x18L))))) && (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(1L, (**l_291))), 7)) > 0x96L) ^ (**l_291)), 0x44A9B1B6L)) != p_5), (**l_291)))))
    {
        unsigned short l_318 = 2UL;
        unsigned char l_320 = 255UL;
        int l_321 = 0L;
        for (g_41 = 0; (g_41 >= 0); ++g_41)
        {
            unsigned l_319 = 0xF527235EL;
            l_321 = ((0xBBL || (p_5 , (p_5 , (safe_add_func_int8_t_s_s(g_309, (((safe_lshift_func_int16_t_s_s(((p_3 && (safe_mul_func_uint8_t_u_u(g_191, (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_47(&g_65, g_43, (func_44(g_246, g_246) > (*g_275)), l_318), 0x78E9L)), l_319))))) & l_320), (**g_229))) >= (**l_291)) < l_319)))))) , (*g_84));
            g_84 = ((*l_291) = &l_321);
        }
        (*g_84) = (*g_275);
    }
    else
    {
        unsigned l_330 = 0xC1F7B2A5L;
        unsigned *l_332 = &g_177;
        unsigned *l_333 = &g_334;
        unsigned char *l_335 = (void*)0;
        unsigned char *l_336 = &g_252;
        int **l_337 = (void*)0;
        int *l_341 = &g_63;
        unsigned **l_342 = &l_333;
        g_338 = ((safe_sub_func_int16_t_s_s((65529UL > func_44((safe_sub_func_uint32_t_u_u(p_3, (*g_166))), ((*l_336) = func_7(func_22(((((*l_333) |= ((*l_332) = (((((safe_mod_func_int16_t_s_s((p_5 , (safe_div_func_uint16_t_u_u(func_7(func_31(g_252)), l_330))), (safe_unary_minus_func_uint8_t_u(255UL)))) & l_330) , p_5) , (*g_229)) != (*g_229)))) , 0x2934L) , &g_243), p_6, p_4, &g_243, g_95))))), 0x2E24L)) , l_337);
        (*g_84) = ((*g_275) = (safe_mod_func_uint32_t_u_u(((((*l_341) = p_5) , ((*l_342) = p_4)) == (func_47(p_4, (p_5 , g_246), (**l_291), l_330) , &g_14)), 0x3869009AL)));
        for (g_177 = 0; (g_177 <= 3); g_177 = safe_add_func_uint16_t_u_u(g_177, 5))
        {
            const unsigned short l_375 = 65535UL;
            int *l_376 = &g_377;
            unsigned l_378 = 0UL;
            (*g_275) = (**l_291);
            (*g_166) |= (*p_4);
            for (p_5 = (-26); (p_5 <= 15); p_5 = safe_add_func_uint8_t_u_u(p_5, 8))
            {
                unsigned short l_356 = 65535UL;
                (*l_291) = func_31(g_13);
                (*g_166) = (-1L);
                (*g_275) = (safe_mod_func_uint8_t_u_u((((g_41 ^= ((safe_add_func_int8_t_s_s(((((void*)0 == l_351) == ((safe_rshift_func_uint8_t_u_s(g_95, 5)) , 1L)) || (0xDF7FL ^ ((safe_sub_func_uint8_t_u_u(g_177, (+((*g_275) | (6L > l_356))))) || 65535UL))), p_3)) & l_356)) , p_6) | (**g_229)), 3UL));
            }
            (*p_4) = ((**l_291) = ((safe_lshift_func_int16_t_s_s((((func_15((((safe_rshift_func_int16_t_s_u(((((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_4), p_3)), func_7(l_367))), (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x88L, (safe_sub_func_uint16_t_u_u((l_374 != (l_375 , func_15(g_309, ((*l_376) = (func_15(p_6, p_6) != p_6))))), l_375)))), l_375)))) , p_3) < p_5) ^ l_378) < p_3) > p_5), p_5)) && (*g_166)) || (*l_367)), p_6) ^ (**l_291)) , (*g_84)) , 9L), (**g_229))) >= l_375));
        }
    }
    if ((*g_166))
    {
        int *l_381 = &g_243;
        char l_396 = 0x12L;
        int *l_397 = &g_66;
        short l_430 = 0x1C9EL;
        const unsigned char l_512 = 4UL;
        (*l_291) = p_4;
        if ((*l_367))
        {
            unsigned l_388 = 0UL;
            short *l_394 = &g_95;
            int *l_398 = &g_63;
            for (l_374 = 3; (l_374 != (-30)); l_374--)
            {
                const unsigned ***l_383 = &l_382;
                char *l_393 = &g_41;
                int l_395 = (-8L);
                int **l_399 = (void*)0;
                int **l_400 = &l_398;
                p_4 = (func_47(l_381, (((p_5 , ((*l_383) = l_382)) == l_384) != (+(safe_add_func_uint8_t_u_u((((**l_384) &= l_388) < (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_393) = func_44(p_3, g_63)), ((((((void*)0 == l_394) , &g_66) != p_4) || l_395) & 0xB9L))), p_3))), l_396)))), l_388, l_388) , l_397);
                if ((*p_4))
                    break;
                (*l_381) |= (((*l_400) = l_398) != l_397);
            }
            return l_381;
        }
        else
        {
            int l_401 = 0x0A52FB1AL;
            int * const l_479 = &g_75;
            char l_516 = 0xC1L;
            int *l_533 = &g_66;
            (*g_254) ^= (-1L);
            (*l_291) = (*l_291);
            if (l_401)
            {
                unsigned *l_402 = (void*)0;
                unsigned *l_403 = (void*)0;
                unsigned *l_404 = &g_405;
                int l_407 = (-1L);
                unsigned char *l_429 = &g_246;
                short *l_431 = &g_432;
                short l_439 = 0x61F3L;
                int l_442 = (-7L);
                int l_466 = 0L;
                const volatile unsigned ***l_474 = &g_472;
                (*g_254) = (*g_166);
                (*l_367) = (((*l_404) = l_401) , (safe_unary_minus_func_uint8_t_u(((p_3 && g_377) <= 0UL))));
                if (((safe_lshift_func_int16_t_s_s(((g_65 || (**l_291)) , (((*l_431) ^= (func_7(&g_75) | (!(safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_15(((+(safe_lshift_func_uint8_t_u_s(((*l_429) |= (func_47(p_4, (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_401, func_47(func_22((((safe_div_func_uint8_t_u_u(g_54, (1UL || ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(0UL, l_428)), 1)) & p_5)))) || p_6) , l_397), p_5, p_4, p_4, l_407), p_3, l_401, p_3))), (*g_230))), l_407, l_401) <= 0x1BL)), 5))) , p_3), l_401), (-1L))), l_430))))) ^ (*g_230))), l_401)) && (-3L)))
                {
                    const unsigned *l_438 = &g_334;
                    const unsigned **l_437 = &l_438;
                    int l_443 = (-5L);
                    (*p_4) = (*p_4);
                    for (g_54 = 0; (g_54 >= 32); g_54 = safe_add_func_uint16_t_u_u(g_54, 1))
                    {
                        l_442 &= (safe_lshift_func_int8_t_s_s(p_5, (func_44(l_407, (func_44((((void*)0 == l_437) , l_439), ((+(**l_291)) == g_334)) || (((safe_rshift_func_int16_t_s_s((((g_309 & 0x1FL) | 0x64ECL) || 1UL), 15)) , p_5) != g_66))) , g_191)));
                    }
                    (*l_397) = (*l_381);
                    (*g_275) = (l_443 , (*p_4));
                }
                else
                {
                    int l_464 = 0xC05553CEL;
                    char l_465 = 0x7CL;
                    unsigned short *l_467 = &g_89;
                    (*l_397) = (*l_367);
                    for (g_63 = 0; (g_63 >= (-24)); g_63 = safe_sub_func_int32_t_s_s(g_63, 2))
                    {
                        unsigned char l_446 = 2UL;
                        int *l_447 = &g_75;
                        (*g_254) |= (g_252 | l_446);
                        (*l_291) = l_397;
                        return l_447;
                    }
                    (*l_381) = ((((((**l_291) = (func_18((safe_add_func_uint16_t_u_u(func_7(func_31(((*l_467) &= (5L & (safe_add_func_int32_t_s_s(((*l_367) <= (safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((func_15(g_252, (safe_mul_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(g_191, ((*l_397) &= ((*l_381) < (*g_166))))) | (safe_add_func_uint32_t_u_u(((*l_385) = g_432), 1L))) < p_6), p_3))) < g_432), (*l_367))) || l_464), l_465)) || 0xA27A8972L), l_465))), l_466)))))), p_3)), p_5) && 255UL)) >= g_377) == l_465) > p_6) && (*l_367));
                    for (l_401 = 0; (l_401 != 7); ++l_401)
                    {
                        if ((*p_4))
                            break;
                        (*g_275) |= (func_7(p_4) , ((safe_lshift_func_int8_t_s_u(0x95L, ((*l_429) = 3UL))) != l_401));
                    }
                }
                (*l_474) = g_472;
            }
            else
            {
                const unsigned short l_488 = 0xBBB0L;
                int *l_489 = &g_66;
                unsigned char l_523 = 0x34L;
                for (g_243 = (-29); (g_243 <= 5); ++g_243)
                {
                    unsigned l_501 = 0xFE6A0398L;
                    for (g_191 = 2; (g_191 < 8); g_191 = safe_add_func_int8_t_s_s(g_191, 1))
                    {
                        unsigned char *l_492 = &l_292;
                        int l_494 = 0xFAAC58BCL;
                        unsigned **l_496 = &l_385;
                        unsigned ***l_495 = &l_496;
                        (*g_166) = (func_7(l_479) != (((!g_65) && ((safe_div_func_uint8_t_u_u((**l_291), (safe_sub_func_int32_t_s_s(((*l_367) != g_177), 0L)))) <= 1UL)) ^ g_177));
                        (*g_254) = ((*p_4) = func_47(l_489, ((safe_add_func_int32_t_s_s(((((*l_492) = 1UL) & (((((void*)0 != &l_385) , g_377) , (**g_229)) , 0xA5L)) | ((l_493 , ((l_494 | p_5) , l_495)) == (void*)0)), (*l_367))) <= (-1L)), p_3, (*g_230)));
                        l_494 |= (*p_4);
                        if ((*g_275))
                            continue;
                    }
                    (*p_4) = (safe_mul_func_uint8_t_u_u(p_6, 1UL));
                    (*l_489) = (safe_sub_func_uint8_t_u_u(l_501, 0x74L));
                    if ((*g_166))
                    {
                        const unsigned short l_508 = 0x51EDL;
                        short *l_513 = &l_430;
                        short *l_514 = (void*)0;
                        short *l_515 = &l_493;
                        unsigned short *l_517 = &g_89;
                        (*g_166) = (safe_mod_func_int8_t_s_s((((p_3 && 3UL) , (safe_div_func_uint16_t_u_u(((*l_517) &= ((0x3AL || 0x15L) || (((*g_230) = p_6) & (g_432 &= (safe_sub_func_int16_t_s_s((l_508 , ((safe_unary_minus_func_int8_t_s((((((+(~p_6)) , (((*l_515) ^= (0xA183L | ((safe_lshift_func_uint16_t_u_s((((*l_513) = (((*l_397) &= (l_512 != 0x2663L)) <= (*l_381))) >= p_6), 0)) && l_508))) , p_6)) || l_516) , (void*)0) != &g_377))) && p_5)), 2UL)))))), (-1L)))) >= g_41), 0x0FL));
                        (*g_275) |= (p_5 >= (0x45L > (*l_479)));
                        return (*l_291);
                    }
                    else
                    {
                        char *l_518 = &g_43;
                        short ****l_521 = (void*)0;
                        short ****l_522 = &l_351;
                        int l_524 = 1L;
                        unsigned short *l_525 = &g_89;
                        (*p_4) = ((((p_6 , (**g_229)) < func_7((((*l_518) ^= (&g_252 != (void*)0)) , func_31(((*l_525) = (p_6 < (g_485 != (safe_mod_func_uint32_t_u_u(((((*l_522) = l_351) != &g_229) | func_47(func_31(func_47(l_489, l_523, g_377, p_6)), g_89, p_3, (*g_230))), l_524))))))))) != (*l_381)) , (*g_166));
                        (**l_291) = (!l_501);
                    }
                }
                for (g_63 = 0; (g_63 >= (-26)); g_63 = safe_sub_func_uint16_t_u_u(g_63, 1))
                {
                    if ((*l_397))
                        break;
                    (*l_291) = l_397;
                    if ((*g_275))
                        continue;
                    if ((*g_166))
                        continue;
                }
                (*l_367) = 0xFBA79588L;
            }
            for (l_396 = 0; (l_396 <= (-6)); l_396 = safe_sub_func_int32_t_s_s(l_396, 7))
            {
                int *l_530 = &g_243;
                char *l_537 = &l_396;
                char **l_536 = &l_537;
                (*p_4) = ((*g_254) = (*g_254));
                (*l_291) = func_22(l_530, (p_6 = (**l_291)), (g_84 = p_4), l_530, ((safe_rshift_func_int8_t_s_s(func_47(l_533, g_66, p_5, ((safe_div_func_uint32_t_u_u(((~((l_536 == (((*l_385) = p_5) , &l_537)) <= g_309)) , p_5), 0x50E26671L)) , (*l_397))), p_5)) , p_5));
            }
        }
        (*l_381) &= (*g_275);
    }
    else
    {
        for (g_41 = (-24); (g_41 > (-3)); g_41++)
        {
            (*l_291) = p_4;
        }
        return &g_243;
    }
    for (g_334 = (-30); (g_334 <= 50); g_334 = safe_add_func_int16_t_s_s(g_334, 1))
    {
        unsigned char l_542 = 0x89L;
        unsigned char *l_545 = &g_246;
        unsigned *l_558 = &g_177;
        char l_576 = 1L;
        if ((**l_291))
        {
            unsigned char l_556 = 4UL;
            unsigned *l_557 = &l_428;
            int *l_565 = &g_63;
            unsigned **l_567 = (void*)0;
            unsigned **l_568 = &l_385;
            char *l_571 = (void*)0;
            char *l_572 = &g_43;
            unsigned short *l_573 = &g_89;
            unsigned short *l_574 = (void*)0;
            (*g_254) &= (safe_div_func_int32_t_s_s((*p_4), ((((l_542 ^ g_95) && func_47(p_4, ((*l_545) = p_5), ((g_89 = (safe_add_func_uint32_t_u_u((0x8927L >= p_6), (*g_166)))) > ((((*l_557) = (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((l_556 = 4UL) || (-1L)) | g_191), 6L)), 0xA2L))) && 0x096DBF31L) != 4294967294UL)), p_3)) ^ g_65) || 252UL)));
            (**l_291) = ((func_44((((l_558 = &g_334) == ((*l_568) = (((((1UL < g_432) , ((((safe_mod_func_uint32_t_u_u(p_5, 4294967286UL)) != 4294967293UL) < 0x9EEF6E4CL) != (**l_291))) && g_41) , l_542) , l_566))) != l_556), l_542) , g_89) , 1L);
            (*p_4) &= (safe_div_func_uint16_t_u_u((g_575 = ((p_5 |= ((*l_573) |= (func_7(p_4) > (p_6 , ((*l_572) &= 6L))))) | p_3)), (l_576 && ((*g_254) = (-8L)))));
        }
        else
        {
            (**l_291) |= (*l_367);
            (**l_291) ^= 0x91CC74A0L;
        }
        for (g_14 = 0; (g_14 > 57); g_14 = safe_add_func_uint16_t_u_u(g_14, 1))
        {
            (*l_291) = l_558;
            (*l_291) = p_4;
            for (g_246 = 0; (g_246 <= 50); g_246 = safe_add_func_int16_t_s_s(g_246, 4))
            {
                (*l_367) = (-1L);
            }
        }
        (*p_4) |= (g_95 && 0x9004L);
        return (*l_291);
    }
    return p_4;
}







static int func_7(int * const p_8)
{
    char l_289 = 0x2BL;
    return l_289;
}







static const int func_15(unsigned char p_16, int p_17)
{
    unsigned l_280 = 0x2E177147L;
    int l_285 = 0x07D77FA0L;
    unsigned l_286 = 18446744073709551615UL;
    int l_287 = 0L;
    unsigned char l_288 = 0x07L;
    g_65 |= (func_47(g_275, (g_246 < 0UL), (l_287 ^= ((safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(l_280, (((safe_mul_func_uint32_t_u_u(g_41, ((l_285 = (((((safe_mod_func_int16_t_s_s((p_16 < (g_243 | g_43)), 9L)) , l_280) , g_63) , p_17) && g_252)) < (*g_84)))) != l_286) , l_286))) != 0x72L), 7L)) < g_252)), p_16) <= l_288);
    return p_17;
}







static int func_18(int p_19, char p_20)
{
    unsigned char l_33 = 0xB5L;
    unsigned char *l_245 = &g_246;
    unsigned char *l_251 = &g_252;
    int **l_273 = (void*)0;
    int **l_274 = &g_254;
    (*l_274) = (p_20 , func_22(func_28(func_31(l_33), l_33), ((*l_251) ^= ((p_20 , ((func_47(&g_243, ((*l_245) = l_33), ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u(1L, 3)) || 0x20A1L) != l_33), 7)) > 0x51952070L), p_19) != (-1L)) | p_20)) | g_243)), &g_243, &g_243, p_20));
    return p_19;
}







static int * func_22(int * p_23, unsigned char p_24, int * p_25, int * const p_26, char p_27)
{
    int **l_253 = &g_84;
    int *l_263 = &g_75;
    int *l_272 = &g_75;
    g_254 = ((*l_253) = func_31(g_66));
    if (((*p_25) ^= (**l_253)))
    {
        unsigned short *l_255 = (void*)0;
        unsigned short *l_256 = (void*)0;
        unsigned short *l_257 = &g_89;
        unsigned char *l_268 = (void*)0;
        unsigned char *l_269 = &g_191;
        int l_270 = 0xB2CBE358L;
        (*g_254) = (((**l_253) || ((((*l_257) = (p_24 ^ 8L)) < (safe_add_func_uint32_t_u_u(((((func_44(((safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint32_t_u_u(p_24, (p_27 ^ func_47(l_263, p_27, p_24, ((safe_div_func_uint8_t_u_u(((**l_253) = ((*l_269) = (safe_sub_func_int8_t_s_s(g_95, 1UL)))), p_27)) != g_243))))) , g_66))) < 7UL), g_177) & 0x8BL) , (*l_263)) , g_66) & l_270), p_27))) , 0x6AL)) , (**l_253));
    }
    else
    {
        int *l_271 = &g_66;
        (**l_253) &= ((**g_229) < (**g_229));
        return l_271;
    }
    (**l_253) = (*g_254);
    return l_272;
}







static int * func_28(int * p_29, int p_30)
{
    int l_83 = 0xF15F1D34L;
    char *l_90 = &g_43;
    int *l_244 = &g_75;
    (*p_29) = (&g_65 != &p_30);
    p_29 = &p_30;
    if (g_43)
    {
        short l_80 = 4L;
        unsigned short *l_116 = &g_89;
        int *l_178 = &g_75;
        short *l_188 = &g_95;
        short **l_187 = &l_188;
        short ***l_189 = &l_187;
        unsigned char *l_190 = &g_191;
        int *l_192 = &g_65;
        for (p_30 = (-23); (p_30 > 20); p_30++)
        {
            int *l_79 = &g_75;
            int **l_78 = &l_79;
            unsigned short *l_87 = (void*)0;
            unsigned short *l_88 = &g_89;
            short *l_93 = &l_80;
            short *l_94 = &g_95;
            const char *l_97 = (void*)0;
            const char **l_96 = &l_97;
            int *l_100 = &g_63;
            unsigned char *l_101 = (void*)0;
            unsigned char *l_102 = &g_54;
            int l_103 = 0x685B35A0L;
            int *l_104 = &g_75;
            (*l_78) = &g_66;
            (*l_79) = (l_80 < (((func_44((**l_78), l_83) > (0xA2L < l_83)) ^ l_83) && (((0xB0C4F31BL > (l_83 , g_14)) , g_63) != g_43)));
            g_84 = &g_65;
            (*l_104) &= (l_103 ^= func_44((((**l_78) ^ g_43) == ((((safe_rshift_func_uint16_t_u_s(((*l_88) = l_83), 0)) , l_90) != ((*l_96) = (((*l_94) = ((*l_93) |= (safe_mul_func_int16_t_s_s(p_30, p_30)))) , l_90))) , (safe_rshift_func_int8_t_s_s(l_83, 6)))), ((*l_102) = (((*l_100) = g_54) , l_83))));
        }
        if ((*g_84))
        {
            int *l_159 = &g_63;
            int l_160 = 0x491F1F15L;
            int *l_161 = &g_66;
            int *l_162 = &l_83;
            int **l_163 = (void*)0;
            int **l_164 = &l_161;
            for (g_63 = 0; (g_63 < (-28)); --g_63)
            {
                unsigned l_110 = 0UL;
                unsigned short *l_115 = &g_89;
                char l_122 = 0L;
                int **l_136 = &g_84;
            }
            (*l_161) &= (safe_lshift_func_int16_t_s_u((6L & (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((0L <= (safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(func_44((safe_rshift_func_int8_t_s_u(((*l_90) = (((safe_div_func_uint16_t_u_u(((-10L) >= g_14), l_83)) > ((*p_29) == (((*l_159) = (safe_sub_func_uint32_t_u_u((0x0802EBDDL < ((safe_div_func_uint32_t_u_u(g_14, (safe_lshift_func_int16_t_s_u((func_47(&g_75, g_14, l_80, p_30) , p_30), g_95)))) & l_80)), l_83))) , 4294967295UL))) < 2UL)), g_65)), g_95), p_30)) ^ g_89) , p_30), 0x48L))), 1L)) & 0x1EC5L), g_14)), l_160))), p_30));
            (*l_164) = l_162;
        }
        else
        {
            unsigned l_181 = 0x60EBF819L;
            if ((*p_29))
            {
                int *l_165 = &g_75;
                return l_165;
            }
            else
            {
                volatile int **l_168 = (void*)0;
                int l_173 = 0x26F77E7AL;
                unsigned *l_176 = &g_177;
                int **l_186 = &g_84;
                g_166 = g_166;
                (*g_84) ^= (*p_29);
                (*p_29) = (safe_mod_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((*g_84), p_30)) , l_80) && ((l_80 , (l_173 &= ((*l_116) ^= (((void*)0 == &g_63) > g_63)))) <= (g_65 > (safe_mul_func_uint16_t_u_u(((p_30 , 0UL) | l_83), (-4L)))))), g_63));
                (*l_186) = func_31((((((((*l_176) ^= 1UL) != func_47(l_178, ((safe_lshift_func_uint16_t_u_u(l_181, ((*l_116) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_30, (func_44((p_30 , l_173), ((p_30 , &l_80) != &l_80)) ^ g_66))), 0L))))) | 0x9CL), g_95, p_30)) , &l_90) == (void*)0) && (*l_178)) , 0xEDA8L));
            }
        }
        (*l_189) = l_187;
        (*l_192) &= ((((*l_90) = 0L) == ((*l_178) , ((*l_190) = (g_54 |= p_30)))) , ((-2L) == p_30));
    }
    else
    {
        int **l_193 = &g_84;
        int *l_198 = &g_66;
        short *l_218 = &g_95;
        short **l_217 = &l_218;
        short ***l_216 = &l_217;
        (*l_193) = &g_75;
        (*l_193) = (*l_193);
        if (((*g_84) , ((*p_29) = (safe_rshift_func_int16_t_s_s(func_47(((*l_193) = &g_75), ((safe_sub_func_int32_t_s_s((~g_63), func_47(&g_75, func_47(l_198, (*l_198), g_177, (l_83 |= (safe_div_func_int8_t_s_s((g_75 < ((p_30 , p_30) , g_66)), 0x1CL)))), g_65, g_41))) != 0x9DL), g_66, p_30), 9)))))
        {
            (*g_84) = (*p_29);
        }
        else
        {
            int **l_214 = &l_198;
            unsigned char *l_215 = &g_191;
            int l_219 = 0x5F965672L;
            unsigned l_241 = 0xA4AC0D40L;
            (*l_198) = (*g_84);
            if ((((1L >= func_44(((safe_sub_func_uint32_t_u_u(((**l_193) | ((safe_mod_func_int32_t_s_s((**l_193), g_66)) > ((8UL && (l_83 && (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(func_47(((*l_214) = &p_30), ((*l_215) = 250UL), ((((l_216 == (void*)0) & 0x1A2211D2L) , g_43) , 0x010864EBL), l_219), 0xD2L)))), 14)) | 4294967291UL) , 0UL), p_30)), (**l_193))))) || l_83))), g_177)) || 9UL), l_83)) , l_83) && p_30))
            {
                int *l_224 = &l_219;
                (*l_193) = func_31((**l_214));
                (*l_224) ^= ((p_30 , 0xAEC4L) , (p_30 < (g_75 | (l_83 || ((((((**l_217) ^= g_89) | (**l_193)) > ((safe_mul_func_uint8_t_u_u((*l_198), func_47(&g_65, p_30, l_83, g_65))) != l_83)) == l_83) , l_83)))));
            }
            else
            {
                unsigned l_232 = 0x0FEA248FL;
                for (g_41 = (-25); (g_41 >= (-4)); ++g_41)
                {
                    char l_242 = 5L;
                    for (p_30 = 29; (p_30 >= 17); p_30 = safe_sub_func_uint8_t_u_u(p_30, 3))
                    {
                        int ***l_231 = &l_214;
                        (*l_231) = ((((*l_216) = g_229) != (void*)0) , &p_29);
                        l_232 ^= ((*g_84) = (-1L));
                        (*g_84) = (safe_rshift_func_uint8_t_u_u((p_30 > (safe_div_func_int8_t_s_s((((func_47(&p_30, (safe_rshift_func_int8_t_s_u(((((p_30 >= (safe_lshift_func_uint16_t_u_s((**l_214), ((((-6L) > (l_242 &= l_241)) ^ func_47((*l_193), (*l_198), (l_232 , p_30), p_30)) > p_30)))) , 7UL) ^ p_30) != 1UL), g_89)), g_191, g_243) , g_89) != p_30) <= l_232), 0x32L))), 6));
                        (**l_193) = 5L;
                    }
                }
            }
        }
        (*l_198) = ((*l_198) , ((void*)0 == &g_63));
    }
    return l_244;
}







static int * func_31(unsigned short p_32)
{
    int l_38 = 0L;
    char *l_39 = (void*)0;
    char *l_40 = &g_41;
    char *l_42 = &g_43;
    int *l_52 = (void*)0;
    unsigned char *l_53 = &g_54;
    int *l_71 = &g_65;
    int *l_74 = &g_75;
    g_66 ^= (g_14 < ((0x56CDL != (safe_rshift_func_int8_t_s_u(((*l_42) = ((*l_40) = l_38)), 7))) >= (g_14 >= func_44(((void*)0 != l_42), (0L < func_47(l_52, ((*l_53) = 0x4FL), g_14, p_32))))));
    (*l_74) ^= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((-1L) <= ((*l_71) &= p_32)), (1UL < 0xC62B4191L))), ((safe_mul_func_int16_t_s_s(0xC1DCL, (g_66 , (-7L)))) >= 3UL)));
    g_66 ^= func_44(g_75, g_43);
    return &g_75;
}







static unsigned func_44(int p_45, unsigned char p_46)
{
    unsigned l_57 = 18446744073709551607UL;
    int *l_62 = &g_63;
    int *l_64 = &g_65;
    (*l_64) = (((safe_sub_func_uint32_t_u_u((l_57 || l_57), 0xC5A4A104L)) , func_47(((safe_sub_func_uint16_t_u_u((~(safe_div_func_int16_t_s_s((((((((*l_62) = l_57) , l_57) >= (g_14 >= ((l_62 != (void*)0) , func_47(l_62, l_57, l_57, l_57)))) == g_14) , p_45) & 1UL), p_46))), 0UL)) , l_62), g_54, p_46, l_57)) && l_57);
    return p_45;
}







static unsigned short func_47(int * p_48, unsigned char p_49, unsigned p_50, short p_51)
{
    return p_50;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
