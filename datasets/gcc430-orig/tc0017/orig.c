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


struct S0 {
   unsigned f0;
   char f1;
   unsigned f2 : 21;
   char f3;
   int f4;
   short f5;
   unsigned f6;
};


static struct S0 g_4 = {1UL,-6L,967,0xE7L,0x08F4727CL,0xD7D7L,0x1E7BFF44L};
static int g_8 = (-1L);
static unsigned short g_78 = 2UL;
static int g_86 = 1L;
static int *g_85 = &g_86;
static int **g_124 = &g_85;
static char *g_132 = &g_4.f3;
static unsigned char g_136 = 248UL;
static struct S0 g_147 = {0xBB67281BL,1L,982,0x85L,0xE2D6ACBDL,0xFBB0L,0xA76EDF0EL};
static int **g_178 = (void*)0;
static int *g_216 = (void*)0;
static struct S0 **g_266 = (void*)0;
static struct S0 ***g_265 = &g_266;
static unsigned char *g_304 = &g_136;
static unsigned char **g_303 = &g_304;
static unsigned short g_353 = 1UL;
static char g_398 = 0x6CL;
static struct S0 *g_423 = &g_147;



static int func_1(void);
static struct S0 func_2(struct S0 p_3);
static int func_5(unsigned p_6);
static struct S0 * func_16(int p_17, char p_18, struct S0 * p_19, unsigned char p_20, int p_21);
static char func_25(int ** p_26, struct S0 * p_27, unsigned p_28);
static int ** func_29(unsigned short p_30, int ** p_31, unsigned char p_32, char p_33);
static int * func_36(struct S0 * p_37, short p_38, int ** p_39, struct S0 * p_40, char p_41);
static int ** func_44(int * p_45);
static int * func_46(int p_47, int p_48);
static int func_49(char p_50);
static int func_1(void)
{
    struct S0 *l_15 = &g_4;
    int l_22 = (-1L);
    int **l_34 = (void*)0;
    char *l_35 = &g_4.f1;
    int l_396 = (-1L);
    struct S0 **l_428 = &g_423;
    (*l_15) = func_2(g_4);
    (*l_428) = func_16(l_22, ((safe_rshift_func_int8_t_s_u(func_25(func_29(g_4.f3, l_34, g_4.f3, ((*l_35) = g_4.f6)), l_15, l_396), 6)) <= l_396), l_15, l_22, g_398);




    ;
    for (l_396 = 14; (l_396 != 23); l_396 = safe_add_func_int16_t_s_s(l_396, 8))
    {
        unsigned l_437 = 6UL;
        for (g_136 = 0; (g_136 == 38); g_136++)
        {
            int **l_433 = &g_216;
            int *l_435 = &g_86;
            int **l_434 = &l_435;
            int l_436 = 0xAC961514L;
            (*l_433) = (void*)0;

            ;
            (*l_434) = ((*l_433) = (g_85 = &g_8));

            ;
            ;
            ;
            if (l_436)
                break;
        }
        if (l_437)
            break;
    }


    return l_22;
}







static struct S0 func_2(struct S0 p_3)
{
    int *l_14 = &g_8;
    (*l_14) = func_5(((+0xA7L) & 1UL));
    return p_3;
}







static int func_5(unsigned p_6)
{
    int *l_7 = &g_8;
    int **l_9 = &l_7;
    (*l_9) = l_7;
    (*l_7) = ((safe_add_func_uint8_t_u_u(p_6, 0UL)) < (safe_mod_func_uint8_t_u_u(g_4.f6, g_4.f0)));
    return g_4.f6;
}







static struct S0 * func_16(int p_17, char p_18, struct S0 * p_19, unsigned char p_20, int p_21)
{
    int l_399 = 6L;
    int *l_400 = &g_86;
    struct S0 *l_401 = (void*)0;
    unsigned l_412 = 1UL;
    struct S0 *l_425 = &g_4;
    if (((*l_400) = l_399))
    {
        struct S0 **l_402 = &l_401;
        (*p_19) = (*p_19);
        (*l_402) = l_401;
    }
    else
    {
        int **l_403 = &g_85;
        struct S0 *l_415 = &g_4;
lbl_421:
        (*l_403) = &l_399;

        ;
        for (g_4.f3 = 0; (g_4.f3 < (-16)); g_4.f3 = safe_sub_func_uint16_t_u_u(g_4.f3, 8))
        {
            unsigned *l_406 = (void*)0;
            unsigned *l_407 = &g_147.f6;
            int *l_424 = &g_8;
            if (func_5((~func_25(&g_216, l_401, ((*l_407) = g_147.f4)))))
            {
                if ((**l_403))
                    break;
            }
            else
            {
                unsigned char l_414 = 251UL;
                struct S0 **l_416 = &l_401;
                for (g_147.f5 = (-21); (g_147.f5 >= (-1)); g_147.f5++)
                {
                    for (g_4.f0 = 0; (g_4.f0 != 27); g_4.f0++)
                    {
                        (**l_403) = ((*l_400) = ((void*)0 != &g_178));
                        if (p_17)
                            break;
                    }
                }
                if (p_20)
                {
                    (*l_400) = l_412;
                }
                else
                {
                    struct S0 *l_413 = (void*)0;
                    (*l_400) = ((**l_403) = p_18);
                    return l_413;



                }
                if (l_414)
                    continue;
                (*l_416) = l_415;

                ;
            }
            for (g_86 = (-13); (g_86 == (-11)); ++g_86)
            {
                struct S0 *l_422 = (void*)0;
                for (g_4.f5 = 0; (g_4.f5 > (-25)); --g_4.f5)
                {
                    if (p_18)
                        goto lbl_421;
                }
                g_423 = l_422;

                ;
                if (g_4.f6)
                    goto lbl_421;
                l_424 = l_406;

                ;
            }

            ;
        }
        if (func_25(&l_400, (p_19 = l_425), (*l_400)))
        {
            for (g_147.f4 = 0; (g_147.f4 <= (-27)); g_147.f4 = safe_sub_func_uint16_t_u_u(g_147.f4, 6))
            {
                (**l_403) = (-6L);
            }
            (*l_403) = &l_399;
        }
        else
        {
            return l_415;



        }
    }


    ;
    ;
    return p_19;



}







static char func_25(int ** p_26, struct S0 * p_27, unsigned p_28)
{
    struct S0 *l_397 = (void*)0;
    l_397 = p_27;

    ;
    return p_28;
}







static int ** func_29(unsigned short p_30, int ** p_31, unsigned char p_32, char p_33)
{
    struct S0 *l_42 = (void*)0;
    int l_43 = 0x41A59C3CL;
    int *l_90 = (void*)0;
    int l_91 = 1L;
    int **l_394 = &g_216;
    int *l_395 = &l_43;
    (*l_394) = func_36(l_42, l_43, func_44(func_46(func_5(p_32), (l_91 = func_49(l_43)))), l_42, p_33);



    ;
    (*l_394) = (*l_394);
    (*l_394) = l_395;

    ;
    return p_31;



}







static int * func_36(struct S0 * p_37, short p_38, int ** p_39, struct S0 * p_40, char p_41)
{
    char l_256 = (-10L);
    struct S0 ***l_267 = &g_266;
    unsigned short *l_273 = &g_78;
    unsigned short **l_272 = &l_273;
    int ***l_278 = (void*)0;
    int l_285 = 0xB9D19FEDL;
    struct S0 l_392 = {0UL,-3L,1081,-8L,0xAE0AB808L,0xE3DAL,3UL};
    if (l_256)
    {
        unsigned l_284 = 18446744073709551615UL;
        unsigned short ***l_301 = &l_272;
        int l_320 = 0xD7872CC1L;
        struct S0 *l_325 = &g_4;
        unsigned char **l_343 = &g_304;
        int l_350 = 1L;
        if (((safe_lshift_func_int8_t_s_s((*g_132), (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_4.f3, 0)), (p_41 & p_38))) && (g_265 != l_267)), ((p_41 == (((void*)0 == (*p_39)) > p_38)) < l_256))))) || g_147.f3))
        {
            unsigned char l_297 = 255UL;
            int *l_321 = &l_285;
            int *l_333 = (void*)0;
            for (g_4.f0 = 0; (g_4.f0 < 11); g_4.f0 = safe_add_func_uint16_t_u_u(g_4.f0, 3))
            {
                unsigned short **l_274 = &l_273;
                int ****l_275 = (void*)0;
                int ***l_277 = (void*)0;
                int ****l_276 = &l_277;
                int l_281 = 3L;
                short *l_286 = &g_147.f5;
                unsigned char l_287 = 0x2CL;
                struct S0 l_294 = {0x7168B76DL,1L,953,0x3AL,-8L,3L,0UL};
                int l_306 = (-1L);
                if (((safe_mod_func_int32_t_s_s((((g_4.f0 < (l_272 == l_274)) == (((*l_276) = &g_178) != l_278)) | (((*l_286) = (l_285 && p_38)) < 0x3CD9L)), l_287)) & (*g_132)))
                {
                    unsigned l_293 = 0xE8D05733L;
                    struct S0 *l_295 = &g_147;
                    unsigned short ***l_298 = &l_274;
                    for (l_284 = 0; (l_284 >= 21); l_284 = safe_add_func_int16_t_s_s(l_284, 2))
                    {
                        unsigned char *l_292 = &g_136;
                        l_293 = (safe_add_func_int8_t_s_s(l_284, ((*l_292) = g_136)));
                    }
                    (*l_295) = l_294;
                    (*l_295) = (*l_295);
                    if (l_284)
                    {
                        char l_296 = (-10L);
                        unsigned short ****l_299 = (void*)0;
                        unsigned short ****l_300 = &l_298;
                        int l_302 = 0x2371F549L;
                        if (l_296)
                            break;
                        if (l_296)
                            continue;
                        if (l_297)
                            break;
                        l_302 = (((*l_300) = l_298) != l_301);
                    }
                    else
                    {
                        unsigned char ***l_305 = &g_303;
                        int *l_307 = &g_8;
                        (*l_305) = g_303;
                        if (l_306)
                            continue;
                        (*l_307) = g_78;
                    }
                }
                else
                {
                    int *l_322 = (void*)0;
                    for (g_8 = 8; (g_8 < (-8)); g_8 = safe_sub_func_int16_t_s_s(g_8, 4))
                    {
                        struct S0 l_310 = {2UL,-1L,1403,-8L,-2L,0xBEB2L,0x62E7AD90L};
                        struct S0 *l_311 = (void*)0;
                        struct S0 *l_312 = &g_147;
                        int *l_319 = &l_306;
                        (*l_312) = l_310;
                        (*l_319) = (0x0860L > (g_78 = (((*g_132) = 0x4DL) && ((safe_mod_func_int16_t_s_s(p_41, l_287)) == (((safe_add_func_int16_t_s_s(9L, g_4.f6)) == p_38) ^ (safe_div_func_uint32_t_u_u(((p_38 <= l_310.f6) | (-1L)), l_297)))))));
                    }
                    l_320 = 0xB25155DEL;
                    if (g_147.f5)
                        continue;
                    l_322 = l_321;

                    ;
                }

                ;
                (*l_321) = 1L;
            }
lbl_338:
            for (p_38 = 0; (p_38 > (-22)); p_38 = safe_sub_func_uint16_t_u_u(p_38, 8))
            {
                (*p_39) = (*p_39);
                if (func_5(g_4.f2))
                {
                    short l_326 = 2L;
                    unsigned *l_327 = &g_4.f0;
                    int l_328 = 0x4A9805B7L;
                    p_37 = l_325;

                    ;
                    (*l_321) = l_326;
                    l_328 = func_5(((*l_327) = g_147.f6));
                    (*p_39) = (*p_39);
                }
                else
                {
                    if (l_320)
                        break;
                    for (g_4.f5 = (-19); (g_4.f5 > (-15)); g_4.f5++)
                    {
                        unsigned short *l_336 = &g_78;
                        int l_337 = 0x71D8DB5BL;
                        (*p_39) = l_333;
                        l_337 = (safe_lshift_func_uint8_t_u_s((func_5(((void*)0 == l_336)) != p_41), 0));
                        (*p_39) = (*p_39);
                        (*g_265) = (void*)0;
                    }
                }
                if (l_285)
                    goto lbl_338;
            }
            for (p_41 = 11; (p_41 > (-9)); p_41 = safe_sub_func_int16_t_s_s(p_41, 8))
            {
                unsigned short *l_351 = (void*)0;
                unsigned short *l_352 = &g_353;
                int l_362 = (-8L);
                int l_363 = 0x3AB6FC98L;
                (*l_325) = g_147;
                (*l_321) = (safe_sub_func_int32_t_s_s(func_5((~((p_41 >= (func_5(p_38) || 0x494E06A0L)) | ((l_320 = ((*l_352) = ((*l_273) = ((l_343 == &g_304) || ((*l_321) = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u(p_38, (((g_147.f5 & g_147.f4) & p_41) == 0x5BL))) < g_147.f4) != l_350), p_41))))))) != l_350)))), l_256));
                l_350 = (safe_sub_func_int8_t_s_s(((*g_132) = (*g_132)), (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(l_362, l_363)) | func_5(g_78)), l_285)), g_4.f6))));
            }
            if (((*l_321) = p_41))
            {
                (*l_321) = l_256;
            }
            else
            {
                unsigned short **l_364 = &l_273;
                (*l_301) = l_364;
                return (*p_39);


            }
        }
        else
        {
            struct S0 *l_379 = &g_4;
            if (l_285)
            {
                unsigned char l_365 = 255UL;
                if (func_5(l_365))
                {
lbl_370:
                    (*p_39) = &l_285;

                    ;
                    for (g_147.f6 = 13; (g_147.f6 == 10); g_147.f6--)
                    {
                        if (g_147.f1)
                            goto lbl_370;
                        (**p_39) = (p_38 == p_38);
                        (**p_39) = (-4L);
                        (**p_39) = (*g_216);
                    }
                }
                else
                {
                    int ***l_371 = &g_124;
                    char *l_376 = &g_147.f1;
                    p_39 = ((*l_371) = &g_216);

                    ;
                    (**l_371) = (*p_39);
                }


                ;
            }
            else
            {
lbl_383:
                (*p_39) = &l_320;

                ;
                (*p_39) = (*p_39);
                for (g_147.f5 = (-15); (g_147.f5 >= 18); g_147.f5++)
                {
                    struct S0 **l_380 = &l_325;
                    (*l_380) = l_379;
                }
                for (l_350 = (-21); (l_350 == (-26)); l_350 = safe_sub_func_uint32_t_u_u(l_350, 1))
                {
                    if (l_320)
                        goto lbl_383;
                }
            }


            ;
        }


        ;
        ;
        (*p_39) = &g_8;

        ;
    }
    else
    {
        if (l_256)
        {
            int l_384 = 7L;
            struct S0 l_385 = {4294967288UL,8L,901,1L,-3L,0x71FFL,0xA7BA6158L};
            struct S0 *l_386 = &g_4;
            l_384 = l_256;
            (*l_386) = l_385;
            (*p_39) = &g_86;

            ;
        }
        else
        {
            return (*p_39);


        }

        ;
        (**p_39) = l_285;
    }


    ;
    ;
    for (l_256 = (-28); (l_256 >= (-11)); l_256++)
    {
        struct S0 *l_393 = &l_392;
        (*l_393) = l_392;
        (**p_39) = l_256;
    }
    return &g_86;


}







static int ** func_44(int * p_45)
{
    unsigned short l_234 = 1UL;
    int l_249 = 1L;
    int *l_252 = (void*)0;
    int *l_253 = &l_249;
    int *l_254 = (void*)0;
    int *l_255 = &g_86;
    for (g_4.f6 = 0; (g_4.f6 > 2); g_4.f6 = safe_add_func_uint8_t_u_u(g_4.f6, 2))
    {
        unsigned char l_229 = 1UL;
        unsigned short l_239 = 0x5D35L;
        int l_243 = 0xAEB97B0EL;
        for (g_136 = 0; (g_136 > 56); g_136++)
        {
            struct S0 *l_228 = &g_4;
            short *l_242 = (void*)0;
            int l_244 = 0xE41012E1L;
            int *l_245 = &g_8;
            int *l_246 = &l_243;
            (*l_246) = ((*l_245) = ((((void*)0 == l_228) == (0x733EL & ((0x0111016EL && l_229) >= (safe_rshift_func_int16_t_s_s(func_5((safe_div_func_int32_t_s_s(l_234, (l_244 = (safe_lshift_func_int16_t_s_u((l_243 = (safe_rshift_func_int8_t_s_u(l_239, (g_147.f4 >= (safe_div_func_int8_t_s_s(l_234, 2L)))))), 4)))))), 6))))) >= l_234));
        }
    }
    (*l_255) = ((*l_253) = ((g_147.f5 = l_234) > (((*g_132) || 1UL) > (g_86 == 1L))));
    return &g_216;


}







static int * func_46(int p_47, int p_48)
{
    unsigned l_92 = 4294967295UL;
    unsigned l_103 = 0x44A6599FL;
    struct S0 *l_110 = &g_4;
    char *l_116 = &g_4.f1;
    struct S0 **l_125 = &l_110;
    int l_128 = (-2L);
    int **l_206 = &g_85;
    unsigned l_220 = 0xB01D3160L;
    int *l_223 = (void*)0;
    if (((0x0883475FL >= (g_86 | func_5((~l_92)))) || (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((~(!(p_48 <= (safe_rshift_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u(func_5((((g_4.f2 = (safe_lshift_func_uint8_t_u_s((p_48 ^ func_5(((l_92 != (l_92 < 0x7FL)) != p_48))), 4))) < g_4.f4) ^ 0x54F1F2BDL)), g_4.f1)) & g_4.f3) == l_92) > l_92) & l_92), l_103))))), l_92)), 12))))
    {
        int **l_104 = &g_85;
        (*l_104) = &p_47;

        ;
        return &g_8;



    }
    else
    {
        struct S0 *l_106 = &g_4;
        int *l_148 = (void*)0;
        short l_163 = 1L;
        unsigned char *l_168 = &g_136;
        int *l_215 = &l_128;
        if (p_48)
        {
            int **l_105 = &g_85;
            struct S0 *l_111 = &g_4;
            (*l_105) = &g_8;

            ;
            if (((*g_85) && 0x238A52A6L))
            {
                struct S0 **l_107 = (void*)0;
                struct S0 **l_108 = (void*)0;
                struct S0 **l_109 = &l_106;
                (*l_109) = l_106;
                l_111 = l_110;
                (**l_105) = 0xBF9D6D6FL;
            }
            else
            {
                (*l_106) = func_2(g_4);
                return &g_86;


            }
            (*l_105) = &g_8;
            if ((4294967292UL && l_92))
            {
                g_85 = &g_86;

                ;
            }
            else
            {
                for (g_8 = 0; (g_8 != 24); g_8 = safe_add_func_uint16_t_u_u(g_8, 2))
                {
                    int *l_121 = &g_86;
                    (*l_121) = (p_48 || (~(~(safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((~9UL), (**l_105))), p_48)))));
                    for (l_92 = 26; (l_92 <= 56); l_92++)
                    {
                        g_124 = (void*)0;

                        ;
                        l_125 = &l_111;

                        ;
                        (*l_105) = &p_47;

                        ;
                        (*l_125) = &g_4;
                    }
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned short l_129 = 0x39B2L;
            struct S0 ***l_155 = &l_125;
            unsigned char *l_156 = &g_136;
            unsigned short *l_164 = &g_78;
            int l_196 = 0x4CA43DC4L;
            int **l_200 = &g_85;
            if ((safe_lshift_func_int8_t_s_s((+7L), g_86)))
            {
                int *l_131 = &l_128;
                if ((l_128 = (g_4.f1 >= p_48)))
                {
                    char *l_133 = &g_4.f1;
lbl_139:
                    if ((l_129 != 0xF0F1L))
                    {
                        int *l_130 = &l_128;
                        (*g_124) = (void*)0;

                        ;
                        (*l_130) = (p_48 >= g_4.f2);
                    }
                    else
                    {
                        char *l_134 = &g_4.f3;
                        unsigned short *l_135 = &g_78;
                        (*g_124) = l_131;

                        ;
                        (*g_124) = (*g_124);
                        p_47 = (((*l_135) = func_49(((g_132 == (l_134 = l_133)) == p_48))) < (g_136 = p_47));


                        ;
                    }
                    for (p_48 = 0; (p_48 >= 1); ++p_48)
                    {
                        if (l_129)
                            goto lbl_139;
                    }
                }
                else
                {
                    int **l_140 = &l_131;
                    int ***l_141 = (void*)0;
                    int ***l_142 = &g_124;
                    struct S0 **l_143 = &l_110;
                    struct S0 ***l_144 = &l_143;
                    struct S0 ***l_145 = (void*)0;
                    struct S0 ***l_146 = &l_125;
                    (*l_142) = l_140;

                    ;
                    (*l_146) = ((*l_144) = l_143);
                    (*l_106) = g_4;
                }


                ;
                g_147 = ((*l_106) = (*l_106));
            }
            else
            {
                return l_148;


            }



lbl_199:
            p_47 = ((safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(l_129, ((safe_lshift_func_int8_t_s_s((l_155 != &l_125), ((((*g_132) = 0x31L) >= (((((*l_156) = 255UL) ^ g_4.f0) || (p_48 < (safe_div_func_uint8_t_u_u((((*l_164) = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_136 = (p_47 || l_163)), 4)), 4294967295UL))) > g_8), g_147.f5)))) <= g_147.f0)) != g_4.f1))) & g_4.f4))) == 0xB59DL) > l_163), 13)) < (-1L));
            if ((((*l_164) = (0xE75F18E8L & func_5(l_128))) < 65529UL))
            {
                struct S0 **l_186 = &l_106;
                int l_195 = 0x63C95D73L;
lbl_177:
                for (g_4.f5 = (-18); (g_4.f5 == (-9)); ++g_4.f5)
                {
                    unsigned char *l_167 = (void*)0;
                    int *l_169 = &g_86;
                    (*l_169) = (g_147.f3 & (l_167 == l_168));
                    return l_148;



                }
                (*l_106) = g_4;
                if (p_48)
                {
                    unsigned *l_173 = (void*)0;
                    unsigned *l_174 = (void*)0;
                    unsigned *l_175 = &l_92;
                    int ***l_179 = &g_178;
                    if (((safe_unary_minus_func_uint32_t_u(p_47)) | ((*l_175) = (g_4.f0 = ((!(safe_div_func_uint32_t_u_u(g_4.f0, p_48))) > 0x3032L)))))
                    {
                        int **l_176 = &g_85;
                        (*l_176) = &p_47;

                        ;
                    }
                    else
                    {
                        if (l_129)
                            goto lbl_177;
                        if (g_4.f0)
                            goto lbl_183;
                    }
                    (*l_179) = g_178;
lbl_183:
                    for (g_147.f6 = (-23); (g_147.f6 >= 47); g_147.f6++)
                    {
                        int *l_182 = &g_86;
                        return l_182;



                    }
                    for (g_4.f3 = 0; (g_4.f3 >= (-7)); g_4.f3--)
                    {
                        g_86 = (p_47 = ((void*)0 != l_186));
                    }
                }
                else
                {
                    unsigned l_197 = 0x70AD09C9L;
                    int *l_198 = &l_195;
                    (*l_198) = p_48;
                }
                if (g_4.f4)
                    goto lbl_199;
            }
            else
            {
                int ***l_201 = &g_124;
                int ***l_202 = (void*)0;
                int ***l_203 = &g_124;
                int ***l_204 = (void*)0;
                int ***l_205 = &l_200;
                int ***l_207 = &g_124;
                int ***l_208 = &l_206;
                int *l_209 = (void*)0;
                int *l_210 = (void*)0;
                int *l_211 = (void*)0;
                int *l_212 = &g_8;
                unsigned short **l_214 = &l_164;
                unsigned short ***l_213 = &l_214;
                (*l_212) = (((*l_205) = l_200) == ((*l_208) = l_206));
                (*l_213) = &l_164;
            }
            return g_216;



        }

        ;
        ;

        for (g_78 = 25; (g_78 < 48); g_78 = safe_add_func_int16_t_s_s(g_78, 1))
        {
            struct S0 l_219 = {4294967293UL,0xA7L,1398,0xD9L,0x9836C0E9L,5L,0x4C5E673EL};
            g_147 = l_219;
            if (p_48)
                break;
        }
        if (l_220)
        {
            int l_221 = 0x06F392B1L;
            l_221 = p_48;
        }
        else
        {
            int *l_222 = &g_8;
            return l_222;



        }
    }

    ;
    ;

    return l_223;



}







static int func_49(char p_50)
{
    int l_67 = 0xF874340CL;
    int l_81 = 0xACF27260L;
    int l_84 = (-8L);
    int **l_88 = (void*)0;
    int **l_89 = &g_85;
    for (g_4.f1 = (-15); (g_4.f1 == (-28)); --g_4.f1)
    {
        int l_70 = 0x3B8AF769L;
        int l_83 = 0x221365D5L;
        for (p_50 = 0; (p_50 <= 10); ++p_50)
        {
            unsigned short l_71 = 0x43C7L;
            unsigned short *l_76 = (void*)0;
            unsigned short *l_77 = &g_78;
            char *l_79 = &g_4.f3;
            int *l_80 = &l_67;
            int *l_82 = &l_81;
            int **l_87 = &l_82;
            l_84 = ((p_50 || (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((*l_82) = (safe_div_func_int32_t_s_s(((*l_80) = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_70 = ((l_67 & (safe_sub_func_uint32_t_u_u((l_70 != (0xD503L && l_71)), g_4.f5))) <= 4UL)) != ((*l_79) = (safe_div_func_uint16_t_u_u(((*l_77) = (safe_mod_func_uint8_t_u_u(3UL, (((+l_71) >= 4294967294UL) ^ 0xFF01L)))), 7UL)))), (-1L))), 2)), g_4.f0))), l_81))) == l_83), g_4.f5)) ^ g_4.f1), p_50))) & 0x8EDFL);
            (*l_82) = p_50;
            (*l_87) = g_85;


        }
    }
    (*g_85) = (*g_85);
    (*l_89) = &l_84;

    ;
    (**l_89) = 0x523F84E0L;
    return p_50;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    transparent_crc(g_4.f4, "g_4.f4", print_hash_value);
    transparent_crc(g_4.f5, "g_4.f5", print_hash_value);
    transparent_crc(g_4.f6, "g_4.f6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_147.f2, "g_147.f2", print_hash_value);
    transparent_crc(g_147.f3, "g_147.f3", print_hash_value);
    transparent_crc(g_147.f4, "g_147.f4", print_hash_value);
    transparent_crc(g_147.f5, "g_147.f5", print_hash_value);
    transparent_crc(g_147.f6, "g_147.f6", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
