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
   unsigned f0 : 20;
   short f1;
   unsigned f2;
   unsigned f3;
   unsigned char f4;
   unsigned f5;
   int f6;
};

union U1 {
   unsigned f0;
   unsigned f1;
   int f2;
   char f3;
};

union U2 {
   short f0;
   char * f1;
};


static int g_2 = 0L;
static char g_20 = 0L;
static char *g_19 = &g_20;
static unsigned g_26 = 4294967291UL;
static char **g_30 = &g_19;
static int g_38 = 0L;
static int *g_37 = &g_38;
static int g_43 = (-9L);
static unsigned short g_79 = 65527UL;
static short g_81 = (-1L);
static int g_82 = 0L;
static struct S0 g_96 = {233,0xF974L,5UL,0x2F19166CL,0xC0L,0x25FC6431L,0xF30CE744L};
static struct S0 g_98 = {80,-1L,0x74211FA8L,0UL,1UL,0x90C99E84L,0x8E6FCAC8L};
static unsigned g_112 = 0xF3D54CDCL;
static union U2 g_136 = {0x9FC4L};
static union U2 *g_135 = &g_136;
static union U1 g_148 = {0x6189FD49L};
static char g_272 = (-1L);
static struct S0 g_351 = {1023,0L,8UL,0xA5246AA7L,0xCFL,0x9B87DF7DL,0x461C5FAEL};



static int func_1(void);
static int * func_5(int * p_6, char * p_7, struct S0 p_8, char * p_9, int * p_10);
static char * func_11(short p_12, char * p_13);
static unsigned func_14(char p_15, char * p_16);
static struct S0 * func_21(int * p_22);
static int * func_23(unsigned p_24);
static struct S0 * func_46(struct S0 p_47, unsigned * p_48);
static struct S0 func_49(int p_50);
static union U1 func_51(char ** p_52, char ** p_53);
static char ** func_54(struct S0 * p_55, unsigned short p_56, union U2 p_57, unsigned short p_58);
static int func_1(void)
{
    int l_18 = 0x3718BD85L;
    int *l_292 = &g_2;
    char *l_350 = &g_272;
    int **l_352 = (void*)0;
    int **l_353 = &l_292;
    for (g_2 = 0; (g_2 < 20); g_2++)
    {
        unsigned l_17 = 0xF93BD5DEL;
        unsigned l_268 = 18446744073709551615UL;
        short *l_269 = &g_136.f0;
        char *l_270 = &g_20;
        char *l_271 = &g_272;
        struct S0 l_291 = {121,-10L,0x529F8FE3L,1UL,0x2EL,0x38C47E81L,0x8B05D211L};
        int **l_349 = &g_37;
        (*l_349) = func_5(&g_2, func_11((func_14(((l_17 = 0x7AB6L) >= l_18), g_19) , func_14(((l_17 > ((*l_269) = ((g_96.f4 ^ (*g_19)) ^ l_268))) != g_20), l_270)), l_271), l_291, l_270, l_292);

        ;
        ;
            }

    ;
    ;
    ;
    (*l_353) = func_5(&g_43, &g_20, func_49(((*l_292) || (*l_292))), l_350, (g_351 , l_292));

    ;
    return (*l_292);
}







static int * func_5(int * p_6, char * p_7, struct S0 p_8, char * p_9, int * p_10)
{
    union U1 *l_295 = (void*)0;
    union U1 **l_294 = &l_295;
    union U1 ***l_293 = &l_294;
    int l_296 = (-1L);
    short *l_303 = &g_81;
    int *l_306 = &g_82;
    char l_326 = 7L;
    char l_334 = 4L;
    int ***l_339 = (void*)0;
    int **l_341 = &l_306;
    int ***l_340 = &l_341;
    char **l_342 = &g_19;
    unsigned short *l_348 = &g_79;
    (*l_306) = ((((((void*)0 == l_293) & l_296) , 0xEA071135L) , (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((~l_296), ((*l_303) = (safe_lshift_func_int16_t_s_s(0xC4D6L, 2))))), ((((safe_sub_func_uint16_t_u_u(g_38, l_296)) , 0UL) <= l_296) , p_8.f4)))) || g_96.f2);
    for (g_98.f2 = 22; (g_98.f2 < 11); g_98.f2 = safe_sub_func_uint16_t_u_u(g_98.f2, 1))
    {
        struct S0 *l_315 = &g_96;
        struct S0 **l_314 = &l_315;
        union U2 l_336 = {0x3046L};
        int **l_337 = (void*)0;
        int **l_338 = &l_306;
    }
    (*l_306) = ((g_136.f0 | (((((*p_7) = 0L) >= (((p_8.f2 < ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(((0UL >= 0x15703533L) | ((((*l_348) = p_8.f4) & p_8.f2) || p_8.f5)))), p_8.f2)) , g_148.f3)) ^ 0xD35DFBDCL) < p_8.f1)) >= 65530UL) , 2UL)) && 1UL);
    return &g_2;


}







static char * func_11(short p_12, char * p_13)
{
    struct S0 *l_273 = &g_96;
    int l_276 = 0x1726EC9FL;
    unsigned short l_279 = 65531UL;
    unsigned *l_282 = &g_26;
    unsigned l_283 = 4294967288UL;
    char *l_290 = &g_272;
    l_273 = l_273;
    for (p_12 = 0; (p_12 == 6); p_12++)
    {
        short l_284 = 9L;
        unsigned *l_287 = &l_283;
        int *l_289 = &l_276;
        (*l_273) = func_49(p_12);

        ;
        if (p_12)
            break;
        if ((p_12 <= l_276))
        {
            int l_285 = 0L;
            unsigned char *l_286 = &g_98.f4;
            struct S0 *l_288 = &g_96;
            l_288 = func_46(func_49((((g_148.f1 , (-9L)) && ((*l_286) = func_14((*p_13), ((p_12 <= ((safe_mod_func_int8_t_s_s((((l_279 && (safe_add_func_uint8_t_u_u(((((*g_19) = (~0x61L)) & ((void*)0 != l_282)) == ((((l_283 , g_148.f0) || p_12) && l_284) ^ l_284)), (*p_13)))) , l_285) ^ p_12), g_148.f3)) && p_12)) , &g_272)))) , (-1L))), l_287);

            ;
            ;
        }
        else
        {
            return p_13;


        }

        ;
        (*l_289) = 0xCF5E0702L;
    }

    ;
    return l_290;



}







static unsigned func_14(char p_15, char * p_16)
{
    unsigned *l_25 = &g_26;
    struct S0 *l_262 = &g_98;
    struct S0 **l_261 = &l_262;
    union U2 **l_263 = &g_135;
    union U2 **l_265 = &g_135;
    union U2 ***l_264 = &l_265;
    int *l_266 = &g_148.f2;
    union U2 *l_267 = (void*)0;
    (*l_261) = func_21(func_23(((*l_25) = p_15)));

    ;
    ;
    ;
    (*l_266) = (l_263 == ((*l_264) = l_263));

        (*l_266) = p_15;
    l_267 = (void*)0;
    return p_15;
}







static struct S0 * func_21(int * p_22)
{
    union U2 l_256 = {-1L};
    int **l_257 = &g_37;
    struct S0 *l_260 = &g_98;
    struct S0 **l_259 = &l_260;
    struct S0 ***l_258 = &l_259;
    (*l_257) = (l_256 , (void*)0);

    ;
    (*p_22) = ((((g_148.f1 <= (g_148.f0 , (*g_19))) , l_256) , l_258) == (l_256 , &l_259));
    return &g_96;


}







static int * func_23(unsigned p_24)
{
    char ***l_27 = (void*)0;
    char **l_29 = &g_19;
    char ***l_28 = &l_29;
    char **l_31 = &g_19;
    int l_220 = 0L;
    int l_249 = 7L;
    unsigned short l_254 = 0UL;
    l_31 = (g_30 = ((*l_28) = (void*)0));

    ;
    ;
    ;
    for (g_20 = (-4); (g_20 > (-5)); g_20 = safe_sub_func_uint32_t_u_u(g_20, 2))
    {
        int *l_36 = &g_2;
        unsigned l_39 = 18446744073709551615UL;
        unsigned l_45 = 1UL;
        struct S0 *l_197 = &g_96;
        int l_214 = 2L;
        unsigned **l_234 = (void*)0;
        int *l_239 = (void*)0;
        int *l_240 = &g_82;
        for (p_24 = 0; (p_24 != 12); p_24++)
        {
            int *l_40 = &g_38;
            int *l_41 = (void*)0;
            int *l_42 = &g_43;
            char l_44 = 1L;
            union U1 *l_207 = &g_148;
            union U1 **l_206 = &l_207;
            unsigned char *l_212 = (void*)0;
            g_37 = l_36;

            ;
            (*l_42) = (~((*l_40) = l_39));
            if (l_44)
            {
                if (l_45)
                    break;
            }
            else
            {
                unsigned *l_111 = &g_112;
                unsigned **l_113 = &l_111;
                int **l_237 = &g_37;
                int **l_238 = &l_36;
                l_197 = func_46(func_49(p_24), ((*l_113) = l_111));

                ;
                ;
                if (g_148.f2)
                {
                    int *l_204 = &g_38;
                    for (l_39 = 0; (l_39 <= 31); l_39 = safe_add_func_int8_t_s_s(l_39, 4))
                    {
                        int **l_200 = (void*)0;
                        union U2 **l_201 = &g_135;
                        l_42 = l_36;

                        ;
                        (*l_201) = &g_136;

                        ;
                    }

                    ;
                    for (g_81 = 0; (g_81 <= 27); g_81 = safe_add_func_uint8_t_u_u(g_81, 9))
                    {
                        int **l_205 = &l_40;
                        union U1 ***l_208 = &l_206;
                        (*l_205) = l_204;

                        ;
                        if (p_24)
                            continue;
                        (*l_208) = l_206;
                        (*l_205) = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    union U2 **l_209 = &g_135;
                    int *l_221 = &g_38;
                    struct S0 l_223 = {910,0x24D4L,0xC0B7275DL,0xFB8A8D5BL,254UL,0xD10CE58AL,-1L};
                    int *l_224 = &g_38;
                    unsigned char l_231 = 0UL;
                    (*l_209) = (void*)0;

                    ;
                    if (p_24)
                    {
                        unsigned char **l_213 = &l_212;
                        int l_215 = (-1L);
                        unsigned short *l_216 = &g_79;
                        short *l_217 = &g_136.f0;
                        l_220 = ((((safe_add_func_uint16_t_u_u((((*l_213) = l_212) == (void*)0), (l_214 && (l_215 & ((*l_217) = (((*l_216) = g_96.f1) & p_24)))))) && 4UL) > 4294967295UL) == (safe_rshift_func_int8_t_s_s(p_24, 7)));
                        return l_42;


                    }
                    else
                    {
                        int **l_222 = &l_221;
                        unsigned char **l_228 = &l_212;
                        unsigned char ***l_227 = &l_228;
                        unsigned ***l_235 = &l_234;
                        struct S0 **l_236 = &l_197;
                        (*l_42) = ((((*l_222) = l_221) != (l_223 , l_224)) != (safe_rshift_func_uint16_t_u_u(0UL, (((*l_227) = (void*)0) == (void*)0))));

                        ;
                        (*l_221) = ((**l_222) >= (safe_lshift_func_uint8_t_u_s((l_231 <= (p_24 | ((*g_19) > (p_24 || ((void*)0 != (*l_227)))))), (safe_mod_func_uint8_t_u_u((((*l_235) = l_234) != (l_113 = &l_111)), l_220)))));
                        (*l_236) = &l_223;

                        ;
                        if ((*l_224))
                            continue;

                    }

                    ;
                    if ((*l_42))
                        continue;

                }


                ;
                ;
                (*l_238) = ((*l_237) = l_111);

                ;
                ;
            }

            ;
            ;
        }

        ;

        (*l_240) = p_24;
        for (l_220 = 0; (l_220 == 25); l_220 = safe_add_func_int32_t_s_s(l_220, 1))
        {
            struct S0 **l_250 = &l_197;
            struct S0 **l_252 = &l_197;
            struct S0 ***l_251 = &l_252;
            int l_253 = 0xC1439D1BL;
            short *l_255 = &g_96.f1;
            l_253 = (65534UL > (safe_mod_func_int16_t_s_s((*l_240), (+((*l_255) = (((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0xEB63L, ((p_24 <= (*l_36)) <= (l_249 = 0x2479E727L)))) == (g_79 = (l_250 == ((*l_251) = l_250)))), l_253)) , 0x6F61L) || l_254))))));
            (*l_240) = (*l_240);
        }
    }

    ;
    return &g_43;


}







static struct S0 * func_46(struct S0 p_47, unsigned * p_48)
{
    short l_118 = 4L;
    unsigned **l_119 = (void*)0;
    unsigned *l_121 = &g_98.f3;
    unsigned **l_120 = &l_121;
    int l_122 = 0L;
    int **l_123 = &g_37;
    int ***l_124 = &l_123;
    int **l_126 = &g_37;
    int ***l_125 = &l_126;
    int l_130 = 0x7196FBADL;
    char *l_133 = &g_20;
    union U1 *l_191 = &g_148;
    union U1 *l_192 = (void*)0;
    union U2 *l_194 = &g_136;
    int *l_196 = (void*)0;
    int **l_195 = &l_196;
    if ((safe_mod_func_uint32_t_u_u(((p_47.f5 ^ ((safe_add_func_int32_t_s_s(0x8B27CD67L, (((l_118 || (((*l_120) = &g_112) == (void*)0)) && l_122) == g_98.f3))) , ((&g_37 != ((*l_125) = ((*l_124) = l_123))) >= 4294967294UL))) != 0x881BL), g_96.f5)))
    {
        struct S0 *l_127 = (void*)0;
        return l_127;


    }
    else
    {
        int l_134 = 2L;
        int l_141 = 3L;
        struct S0 *l_157 = &g_98;
        struct S0 *l_160 = &g_96;
        unsigned char l_178 = 0xB9L;
        union U2 *l_193 = (void*)0;
        if (((safe_sub_func_int16_t_s_s((p_47.f1 > 0x11F35E5FL), ((0UL || (l_130 >= (p_47.f5 | (p_47.f5 > (safe_rshift_func_uint16_t_u_u(((l_133 != (l_134 , l_133)) != 0UL), 12)))))) < 3UL))) & l_134))
        {
            unsigned l_149 = 0x72896A24L;
            struct S0 **l_161 = &l_160;
            struct S0 **l_162 = &l_157;
            if (p_47.f6)
            {
                union U2 **l_137 = &g_135;
                int l_140 = 0x1B1B7DE0L;
                struct S0 l_144 = {644,0x8A8FL,3UL,0x8219F003L,0xE4L,0xCDAB5827L,0L};
                (*l_137) = g_135;
                l_134 = (g_96.f3 <= ((((((p_47.f6 , l_134) > ((l_141 = ((g_82 , (*p_48)) , (safe_lshift_func_uint16_t_u_u(((l_140 & p_47.f1) | ((-9L) < g_96.f0)), 6)))) , l_140)) ^ p_47.f3) , p_47.f5) == 2L) > 0xA5L));
                for (g_82 = 0; (g_82 > (-1)); g_82 = safe_sub_func_uint16_t_u_u(g_82, 7))
                {
                    struct S0 *l_145 = &l_144;
                    union U1 *l_147 = &g_148;
                    union U1 **l_146 = &l_147;
                    unsigned l_150 = 0xA464987AL;
                    (*l_145) = l_144;
                    (*l_145) = g_96;
                    (*l_146) = (void*)0;

                    ;
                    if ((l_122 = (g_38 = (0x924CL > (p_47.f3 , g_148.f2)))))
                    {
                        l_150 = l_149;
                        g_37 = (void*)0;

                        ;
                        g_43 = g_136.f0;
                    }
                    else
                    {
                        int l_151 = 9L;
                        l_151 = p_47.f1;
                    }
                }
                for (l_144.f6 = 0; (l_144.f6 != (-5)); l_144.f6 = safe_sub_func_int32_t_s_s(l_144.f6, 1))
                {
                    (*l_126) = &g_38;

                    ;
                }

                ;
            }
            else
            {
                int *l_159 = (void*)0;
                for (g_148.f3 = 0; (g_148.f3 < (-8)); g_148.f3--)
                {
                    int *l_156 = &l_122;
                    struct S0 *l_158 = &g_98;
                    (*l_156) = 0x40006811L;
                    if (p_47.f3)
                    {
                        (*l_156) = (-6L);
                    }
                    else
                    {
                        l_158 = l_157;
                        if (p_47.f3)
                            break;
                    }
                }

                                g_148.f2 = (g_81 , 0x9F82EC59L);

                                (*l_123) = &g_43;

                ;
                (***l_124) = p_47.f2;
            }

            ;
            (*l_126) = (g_98.f0 , &g_2);

            ;
            (*l_162) = ((*l_161) = l_160);

            ;
        }
        else
        {
            struct S0 l_163 = {27,1L,0xEAF73BA8L,0x61E940A4L,0x41L,0xE072EDA5L,0xF8BA2E11L};
            (*l_157) = l_163;
        }

        ;
        ;
        for (g_81 = (-22); (g_81 != (-28)); g_81 = safe_sub_func_int8_t_s_s(g_81, 1))
        {
            char l_168 = 0x44L;
            int *l_177 = &g_148.f2;
            short *l_179 = &g_136.f0;
            if (((*p_48) | (((safe_lshift_func_int8_t_s_s((l_168 = (p_47.f3 , (*g_19))), 4)) == (*g_19)) , (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((0x04D5L || (-1L)), ((*l_177) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_141, 11)), 12))))), ((*l_179) = (l_178 && 0x044FL)))))))
            {
                unsigned l_182 = 1UL;
                unsigned char *l_183 = &l_178;
                int l_184 = 0xCFB1E1F6L;
                for (g_98.f6 = 0; (g_98.f6 == (-21)); g_98.f6 = safe_sub_func_int8_t_s_s(g_98.f6, 2))
                {
                    (*l_126) = p_48;


                }


                (*l_177) = (0xAAL >= p_47.f2);
                (*l_177) = ((((l_182 = (((~(((*l_121) = 0x702CAF5AL) > ((p_47.f5 || (p_47.f1 , (*l_177))) || (p_47.f0 & (*g_19))))) && (g_96.f1 >= ((p_47.f1 , ((((g_148 , p_47.f4) > (*l_177)) ^ p_47.f2) , p_47.f3)) != 0x329C145DL))) <= 0xDDE0D53BL)) > 1L) && g_96.f2) , p_47.f5);
                l_184 = (((*l_183) = p_47.f5) || l_141);
            }
            else
            {
                unsigned short l_190 = 0xE746L;
                for (g_112 = (-19); (g_112 == 27); g_112++)
                {
                    int *l_189 = &g_82;
                    for (g_98.f1 = (-25); (g_98.f1 <= 11); ++g_98.f1)
                    {
                        (*l_160) = (*l_160);
                        (*l_126) = l_189;

                        ;
                        (*l_126) = &g_38;

                        ;
                        if (l_190)
                            break;
                    }
                    l_192 = l_191;

                    ;
                    l_194 = l_193;

                    ;
                }

                ;
            }


                        (**l_124) = &g_82;

            ;
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    (*l_195) = ((**l_125) = p_48);



    return &g_96;


}







static struct S0 func_49(int p_50)
{
    struct S0 *l_59 = (void*)0;
    union U2 l_62 = {0xC2DBL};
    char **l_87 = &g_19;
    int **l_110 = (void*)0;
    int ***l_109 = &l_110;
    (*l_109) = (func_51(func_54(l_59, (safe_sub_func_uint32_t_u_u(g_26, (0x3E1984BBL > 0x846E972FL))), l_62, g_20), l_87) , &g_37);

    ;
    ;
    return g_98;
}







static union U1 func_51(char ** p_52, char ** p_53)
{
    struct S0 l_91 = {417,0xA2AAL,18446744073709551615UL,0x298B2365L,0UL,0xF019D465L,-8L};
    int **l_106 = &g_37;
    struct S0 *l_107 = &l_91;
    union U1 l_108 = {18446744073709551606UL};
    if ((*g_37))
    {
        for (g_26 = (-15); (g_26 < 17); g_26++)
        {
            union U1 l_90 = {0xAC42121AL};
            return l_90;

                    }
    }
    else
    {
        struct S0 *l_92 = &l_91;
        struct S0 *l_93 = (void*)0;
        struct S0 *l_94 = (void*)0;
        struct S0 *l_95 = &g_96;
        struct S0 *l_97 = &g_98;
        int l_101 = 0L;
        union U1 l_102 = {1UL};
        (*l_97) = ((*l_95) = ((*l_92) = l_91));
        (*l_97) = (l_91.f0 , ((safe_rshift_func_int16_t_s_s(l_101, (l_102 , g_38))) , g_98));
        for (l_91.f6 = 0; (l_91.f6 <= (-28)); l_91.f6 = safe_sub_func_uint8_t_u_u(l_91.f6, 2))
        {
            struct S0 l_105 = {828,1L,0x2E5CE9E3L,0UL,0x3AL,9UL,0x0E0EEEF6L};
            (*l_97) = l_105;
        }
    }
    (*l_106) = (void*)0;

    ;
    (*l_106) = (*l_106);
    (*l_107) = l_91;
    return l_108;

    }







static char ** func_54(struct S0 * p_55, unsigned short p_56, union U2 p_57, unsigned short p_58)
{
    int **l_63 = (void*)0;
    int **l_64 = &g_37;
    int l_67 = 0x6BBB3073L;
    unsigned short *l_76 = (void*)0;
    unsigned short *l_77 = (void*)0;
    unsigned short *l_78 = &g_79;
    short *l_80 = &g_81;
    int l_83 = 0x1BFD6FFBL;
    int *l_84 = (void*)0;
    int *l_85 = &g_43;
    int *l_86 = &g_43;
    (*l_64) = &g_2;

    ;
    (*l_64) = (*l_64);
    (*l_85) = ((safe_sub_func_int16_t_s_s((g_82 = (l_67 < ((safe_mod_func_uint16_t_u_u((((0x8C20L && ((*l_78) = (safe_sub_func_int32_t_s_s((8UL || (g_38 >= (+(**l_64)))), (safe_add_func_uint16_t_u_u((**l_64), g_43)))))) != p_56) || ((((*l_80) = p_56) || 0x2CA0L) | 4294967295UL)), (**l_64))) != (*g_37)))), p_56)) == l_83);
    (*l_64) = l_86;

    ;
    return &g_19;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_96.f6, "g_96.f6", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4, "g_98.f4", print_hash_value);
    transparent_crc(g_98.f5, "g_98.f5", print_hash_value);
    transparent_crc(g_98.f6, "g_98.f6", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_148.f0, "g_148.f0", print_hash_value);
    transparent_crc(g_148.f1, "g_148.f1", print_hash_value);
    transparent_crc(g_148.f2, "g_148.f2", print_hash_value);
    transparent_crc(g_148.f3, "g_148.f3", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_351.f0, "g_351.f0", print_hash_value);
    transparent_crc(g_351.f1, "g_351.f1", print_hash_value);
    transparent_crc(g_351.f2, "g_351.f2", print_hash_value);
    transparent_crc(g_351.f3, "g_351.f3", print_hash_value);
    transparent_crc(g_351.f4, "g_351.f4", print_hash_value);
    transparent_crc(g_351.f5, "g_351.f5", print_hash_value);
    transparent_crc(g_351.f6, "g_351.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
