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



static unsigned char g_2[2] = {0x10L,0x10L};
static int g_3[7][2] = {{1L,0x43CDF98AL},{1L,1L},{0x43CDF98AL,1L},{1L,0x43CDF98AL},{1L,1L},{0x43CDF98AL,1L},{1L,0x43CDF98AL}};
static int g_9 = 0x7A7525D2L;
static int * volatile g_8 = &g_9;
static int *g_34 = &g_3[1][0];
static int **g_33 = &g_34;
static int **g_53 = (void*)0;
static unsigned char g_55[1] = {0x03L};
static int g_61[8] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
static int ***g_64 = (void*)0;
static char g_93[7][6] = {{0x88L,0x8FL,(-1L),0x8FL,0x88L,(-1L)},{0x88L,0x8FL,(-1L),0x8FL,0x88L,(-1L)},{0x88L,0x8FL,(-1L),0x8FL,0x88L,(-1L)},{0x88L,0x8FL,(-1L),0L,0x0CL,0x8FL},{0x0CL,0L,0x88L,0L,0x0CL,0x8FL},{0x0CL,0L,0x88L,0L,0x0CL,0x8FL},{0x0CL,0L,0x88L,0L,0x0CL,0x8FL}};
static int *g_134 = (void*)0;
static char g_150 = (-1L);
static unsigned g_160 = 0UL;
static unsigned char *g_180 = (void*)0;
static unsigned char **g_179 = &g_180;
static unsigned char *** volatile g_178 = &g_179;
static unsigned short g_200 = 0x3588L;
static unsigned short *g_199 = &g_200;
static volatile unsigned g_225 = 0UL;
static int **g_231 = (void*)0;
static int g_323 = 1L;
static char g_327[6] = {0x32L,0x32L,0xEAL,0x32L,0x32L,0xEAL};
static int g_330 = (-1L);
static short g_331 = 0x22CDL;
static char *g_395 = &g_93[0][0];
static char **g_394 = &g_395;
static char *** volatile g_393[9] = {&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394};
static char *** volatile g_396 = &g_394;
static unsigned g_454 = 4294967295UL;
static unsigned short *** volatile g_480 = (void*)0;
static unsigned short **g_482 = &g_199;
static unsigned short *** volatile g_481 = &g_482;
static volatile int g_578[9][2] = {{0x95D73391L,0x95D73391L},{6L,0x95D73391L},{0x95D73391L,1L},{0xDCB649C3L,6L},{6L,0xDCB649C3L},{6L,1L},{6L,0xDCB649C3L},{6L,6L},{0xDCB649C3L,1L}};
static int * volatile g_610 = &g_61[6];
static char g_658 = 0x35L;
static unsigned *g_739 = &g_160;
static int **g_745 = &g_34;
static unsigned short g_748 = 0x416DL;
static int * volatile g_783[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static volatile int **g_823 = (void*)0;
static volatile int ***g_822 = &g_823;
static volatile int **** volatile g_821[5] = {&g_822,&g_822,&g_822,&g_822,&g_822};
static volatile int **** volatile *g_820 = &g_821[2];
static int g_825 = 1L;
static int *g_827[8][5] = {{&g_61[1],&g_61[6],&g_61[2],&g_61[5],&g_61[6]},{(void*)0,&g_3[6][1],&g_3[6][1],(void*)0,&g_61[6]},{&g_9,&g_3[5][1],(void*)0,&g_61[6],&g_61[6]},{&g_3[6][1],(void*)0,&g_3[6][1],&g_61[6],(void*)0},{&g_61[6],&g_61[2],&g_61[5],&g_61[6],&g_61[5]},{&g_61[6],&g_61[6],&g_3[6][1],(void*)0,&g_61[6]},{&g_61[5],&g_3[5][1],&g_61[2],&g_61[2],&g_3[5][1]},{(void*)0,&g_3[6][1],&g_61[6],(void*)0,&g_3[6][1]}};
static unsigned short g_833 = 0UL;
static volatile unsigned short g_892 = 0x9D12L;
static int g_980 = 5L;



static unsigned short func_1(void);
static int func_4(short p_5, unsigned char p_6);
static int * func_10(unsigned short p_11, unsigned short p_12, int * p_13);
static int ** func_18(int * p_19, int ** p_20);
static int ** func_22(int * p_23, unsigned p_24, int p_25, int p_26, char p_27);
static unsigned func_28(int ** p_29, int p_30, int ** p_31, int ** p_32);
static int ** func_35(int * p_36, unsigned short p_37);
static int * func_39(int p_40, int ** p_41, int * p_42, unsigned p_43, int * p_44);
static int ** func_45(int p_46, short p_47);
static int func_48(int ** p_49, int ** p_50);
static unsigned short func_1(void)
{
    unsigned l_988 = 0UL;
    int l_989 = 7L;
    unsigned char *l_990 = &g_55[0];
    int *l_991 = &g_980;
    for (g_3[6][1] = 0; (g_3[6][1] <= 1); g_3[6][1] += 1)
    {
        int *l_979 = &g_980;
        char l_983 = (-3L);
        int i;
        (*l_979) &= func_4((g_2[g_3[6][1]] != g_3[5][1]), g_2[g_3[6][1]]);
        (*l_979) = (safe_mod_func_int32_t_s_s((((((**g_394) >= ((***g_481) == ((*l_979) || (~(*g_395))))) && g_327[4]) ^ 0x9FB23AF6L) > l_983), (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_988, 13)), (**g_394)))));
        if ((*g_34))
            continue;
    }
    (*g_34) = ((!l_989) != (l_990 != (void*)0));
    l_991 = (void*)0;
    return (**g_482);
}







static int func_4(short p_5, unsigned char p_6)
{
    int *l_7 = &g_3[2][1];
    l_7 = l_7;
    for (p_5 = 1; (p_5 >= 0); p_5 -= 1)
    {
        (*g_8) = p_6;
    }
    (*g_745) = func_10(g_9, (safe_mul_func_int16_t_s_s((*l_7), p_6)), l_7);
    return (*g_8);
}







static int * func_10(unsigned short p_11, unsigned short p_12, int * p_13)
{
    int *l_21 = &g_3[1][0];
    int l_939 = 1L;
    int *l_958 = &g_3[0][0];
    char ***l_965 = &g_394;
    for (g_9 = 2; (g_9 < (-2)); g_9 = safe_sub_func_int32_t_s_s(g_9, 1))
    {
        unsigned short l_38 = 0x0004L;
        int **l_456 = &g_134;
        int **l_938 = &g_134;
    }
    l_939 = (*l_21);
    if ((safe_sub_func_uint32_t_u_u((func_48(&l_21, &l_21) < ((safe_lshift_func_uint16_t_u_u(65535UL, (*g_199))) || (safe_add_func_int32_t_s_s((*p_13), 1UL)))), ((*g_739) = (0xE0L | (safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((*l_21), 3)), (**g_482))) & p_12), (*g_739))))))))
    {
        int l_953 = (-6L);
        int *l_954[7][1] = {{&g_330},{&g_330},{&g_323},{&g_330},{&g_330},{&g_323},{&g_330}};
        short *l_972 = &g_331;
        int i, j;
        if ((((func_28(&l_21, (*p_13), func_35(&l_939, p_12), &l_21) < (*l_21)) | g_323) < 7UL))
        {
            return p_13;
        }
        else
        {
            int **l_957 = &g_134;
            (*l_957) = ((*g_745) = p_13);
            l_953 |= (**l_957);
        }
        (*g_33) = l_958;
        l_953 = (l_953 || (safe_add_func_int8_t_s_s(((*g_395) = ((safe_add_func_uint16_t_u_u((***g_481), (safe_mod_func_int16_t_s_s((l_965 == (void*)0), p_11)))) != p_12)), (safe_add_func_int16_t_s_s(((*l_972) = (safe_lshift_func_int16_t_s_s((p_12 < (safe_mul_func_int16_t_s_s(g_3[3][1], (*l_21)))), g_61[6]))), (**g_482))))));
    }
    else
    {
        short *l_978 = &g_331;
        (*g_33) = &l_939;
        (*g_34) = (((safe_unary_minus_func_int8_t_s(((**g_394) = (*l_958)))) || ((*l_958) >= (***g_481))) | (safe_rshift_func_uint16_t_u_s((((*l_978) = g_150) >= (0x2F04L <= ((*l_21) <= p_11))), 6)));
        (*g_8) &= ((*g_739) <= (*p_13));
    }
    return p_13;
}







static int ** func_18(int * p_19, int ** p_20)
{
    int *l_937[7];
    int i;
    for (i = 0; i < 7; i++)
        l_937[i] = &g_9;
    (*g_33) = l_937[3];
    return &g_134;
}







static int ** func_22(int * p_23, unsigned p_24, int p_25, int p_26, char p_27)
{
    int **l_729 = (void*)0;
    int **l_730 = (void*)0;
    int *l_732 = &g_323;
    int **l_731 = &l_732;
    int l_749 = 0xE189CD97L;
    unsigned l_761[6][7] = {{0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L},{0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L},{0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L},{0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L},{0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L,0x730A2076L},{0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L,0x4DC442C5L,0x44FE6F87L}};
    unsigned l_774 = 0UL;
    unsigned char **l_811 = &g_180;
    unsigned char **l_813[6];
    int ****l_819[4][1][9] = {{{(void*)0,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,(void*)0,&g_64,&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,(void*)0,&g_64,&g_64}}};
    int *****l_818 = &l_819[0][0][8];
    unsigned **l_883 = (void*)0;
    unsigned short l_920 = 1UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_813[i] = &g_180;
    if ((p_27 | ((((*l_731) = (void*)0) == &g_578[2][0]) ^ (safe_sub_func_int8_t_s_s(((*g_199) <= p_25), (+p_24))))))
    {
        char l_740 = (-1L);
        int **l_746 = &g_134;
        int ****l_758 = &g_64;
        int l_760 = 5L;
        unsigned *l_800 = &l_761[4][6];
        unsigned short l_804 = 3UL;
        for (p_24 = 0; (p_24 <= 1); p_24 += 1)
        {
            int **l_741 = &g_34;
            unsigned short *l_747 = &g_748;
            short *l_785 = &g_331;
            unsigned l_788 = 4294967295UL;
            int **l_791 = &g_134;
            unsigned l_801 = 0x5E360869L;
            int i;
        }
    }
    else
    {
        int *l_824[6][9][4] = {{{&g_330,&g_825,(void*)0,(void*)0},{&g_825,&g_330,(void*)0,&g_330},{&g_330,(void*)0,&g_825,(void*)0},{&g_825,&g_330,&g_330,&g_825},{&g_825,&g_330,&g_825,&g_330},{(void*)0,&g_330,&g_825,&g_825},{&g_825,&g_330,&g_825,&g_330},{&g_825,&g_825,&g_825,&g_330},{&g_330,&g_825,&g_825,(void*)0}},{{(void*)0,&g_330,&g_825,&g_825},{&g_825,&g_330,(void*)0,(void*)0},{&g_825,&g_825,&g_330,&g_330},{&g_330,&g_825,(void*)0,&g_825},{(void*)0,(void*)0,&g_330,(void*)0},{(void*)0,(void*)0,&g_330,&g_825},{(void*)0,&g_825,&g_825,&g_330},{(void*)0,&g_825,&g_825,(void*)0},{&g_825,&g_330,&g_330,&g_825}},{{&g_330,&g_330,(void*)0,(void*)0},{&g_330,&g_825,&g_330,&g_330},{&g_330,&g_825,&g_330,&g_330},{&g_330,&g_330,(void*)0,&g_825},{(void*)0,&g_330,(void*)0,&g_330},{&g_330,&g_330,&g_330,&g_825},{&g_825,(void*)0,(void*)0,&g_330},{&g_825,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{(void*)0,&g_825,&g_825,(void*)0},{(void*)0,&g_825,&g_330,&g_825},{&g_330,&g_330,&g_330,&g_330},{(void*)0,(void*)0,&g_825,&g_825},{&g_330,(void*)0,&g_330,&g_825},{&g_825,&g_330,&g_330,&g_330},{&g_825,&g_825,&g_825,&g_825},{(void*)0,(void*)0,(void*)0,&g_330},{&g_825,&g_330,&g_330,&g_330}},{{&g_330,(void*)0,&g_330,&g_825},{&g_330,&g_330,&g_330,&g_825},{&g_330,&g_825,&g_330,(void*)0},{&g_330,&g_330,&g_330,&g_330},{&g_330,(void*)0,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_825},{&g_825,&g_825,(void*)0,&g_330},{(void*)0,(void*)0,&g_825,&g_330},{&g_825,&g_825,&g_330,&g_330}},{{&g_825,&g_330,&g_330,&g_825},{&g_330,&g_330,&g_825,&g_825},{(void*)0,&g_330,&g_330,&g_330},{&g_825,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_825,&g_330,&g_825,(void*)0},{(void*)0,&g_825,&g_330,&g_330},{&g_330,&g_825,(void*)0,&g_330},{&g_825,&g_825,&g_825,&g_330}}};
        int **l_826 = &g_134;
        int ***l_830 = &g_33;
        int *l_831 = &l_749;
        unsigned short l_860 = 0x2D4BL;
        unsigned **l_882 = (void*)0;
        char l_887 = (-3L);
        int **l_895 = &l_831;
        unsigned short *l_917 = (void*)0;
        int i, j, k;
        p_25 ^= (safe_mod_func_uint8_t_u_u(((*g_739) > ((void*)0 == l_818)), (p_27 || (g_820 == &l_819[0][0][4]))));
        (*g_745) = (*l_826);
        for (p_26 = 9; (p_26 == 5); --p_26)
        {
            unsigned char l_832[4][6][1] = {{{247UL},{0x39L},{247UL},{0x4CL},{247UL},{0x39L}},{{247UL},{0x4CL},{247UL},{0x39L},{247UL},{0x4CL}},{{247UL},{0x39L},{247UL},{0x4CL},{247UL},{0x39L}},{{247UL},{0x4CL},{247UL},{0x39L},{247UL},{0x4CL}}};
            unsigned short l_838 = 0UL;
            short *l_840 = &g_331;
            short **l_839 = &l_840;
            int *l_841[8][7] = {{&g_9,&g_61[6],&g_61[6],&g_9,&g_9,&g_3[2][1],&g_61[6]},{&g_61[6],&g_3[5][0],&g_61[6],&g_61[6],&g_61[6],&g_3[2][1],&g_9},{&g_9,&g_3[5][0],&g_61[1],&g_9,&g_61[6],(void*)0,&g_61[6]},{&g_9,&g_61[6],&g_61[6],&g_9,&g_9,&g_3[2][1],&g_61[6]},{&g_61[6],&g_3[5][0],&g_61[6],&g_61[6],&g_61[6],&g_3[2][1],&g_9},{&g_9,&g_3[5][0],&g_61[1],&g_9,&g_61[6],(void*)0,&g_61[6]},{&g_9,&g_61[6],&g_61[6],&g_9,&g_9,&g_61[6],&g_61[6]},{&l_749,&g_9,&g_61[6],&l_749,&g_61[6],&g_61[6],&g_9}};
            unsigned **l_842[8] = {&g_739,&g_739,&g_739,&g_739,&g_739,&g_739,&g_739,&g_739};
            unsigned short l_873 = 0x6340L;
            int **l_900 = &g_34;
            int *l_905[1][4][3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_905[i][j][k] = &g_825;
                }
            }
            if ((func_28(&g_827[7][0], ((l_830 = &g_745) == (void*)0), &g_34, &p_23) != 4294967291UL))
            {
                return (*l_830);
            }
            else
            {
                l_832[2][3][0] |= (*p_23);
            }
            (*l_831) = g_833;
            if (((g_739 = &l_761[1][1]) == (void*)0))
            {
                unsigned short l_847 = 0x7DF0L;
                int ****l_848 = &g_64;
                for (g_160 = 0; (g_160 == 1); g_160 = safe_add_func_int32_t_s_s(g_160, 8))
                {
                    unsigned l_859 = 0x63726C81L;
                    (*g_745) = &p_25;
                    (**g_53) ^= (safe_lshift_func_int8_t_s_u((+((l_847 | func_48(&g_827[0][1], &p_23)) | (((**g_394) = (((*l_818) = l_848) != &g_64)) ^ ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*g_739) ^ (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((l_859 | (-1L)), g_150)) ^ g_323), 15))) | l_860), p_27)), p_26)) <= 0UL), (*p_23))) | p_26)))), p_27));
                }
                p_23 = &p_25;
                (*p_23) ^= 0L;
            }
            else
            {
                unsigned char l_884 = 0xBAL;
                int **l_888 = &g_827[5][2];
                int **l_891 = (void*)0;
                int **l_894[6];
                int *l_899 = (void*)0;
                unsigned char **l_903 = &g_180;
                unsigned char ***l_904 = &l_903;
                int **l_911 = &l_841[6][5];
                int **l_936 = &g_34;
                int i;
                for (i = 0; i < 6; i++)
                    l_894[i] = &l_841[7][4];
                for (g_658 = 18; (g_658 == (-27)); --g_658)
                {
                    int **l_893 = &l_841[6][5];
                    unsigned char l_896 = 8UL;
                    (**l_895) = (~(((p_25 != ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((l_884 |= (l_882 != l_883)) && func_28(&g_34, (safe_mul_func_int16_t_s_s((l_884 >= func_28(&g_827[2][3], ((l_887 = p_24) ^ (func_28((l_888 = &p_23), (((safe_mod_func_int8_t_s_s(func_28((l_891 = (*l_830)), (*p_23), (*l_830), (*l_830)), 0x6DL)) ^ 0x86L) || g_892), &l_841[6][5], l_893) & 1UL)), l_894[2], l_893)), p_24)), l_895, &g_34)), (*p_23))), p_24)), 1)) <= 0UL)) ^ l_896) & 0x5588L));
                }
                (*g_610) = ((safe_mul_func_uint8_t_u_u(g_327[4], ((l_899 == (l_905[0][1][1] = &p_26)) >= 4294967295UL))) < p_24);
                if ((*p_23))
                {
                    int l_906 = 0x0ECF0BBEL;
                    int **l_912 = &g_134;
                    (*l_831) = (((l_906 &= 255UL) && (safe_rshift_func_uint16_t_u_s(((func_28(l_911, (*p_23), l_912, &p_23) == (((safe_add_func_int32_t_s_s(((p_27 = (safe_add_func_uint8_t_u_u(p_27, p_27))) == (((*g_482) != l_917) | 2L)), 4294967294UL)) > 0x47621DA2L) | p_25)) || 0L), 4))) <= p_25);
                    if ((*p_23))
                        break;
                    (*g_33) = &p_25;
                }
                else
                {
                    unsigned char l_923 = 4UL;
                    int l_928 = 0x4E2F839BL;
                    int *l_935 = (void*)0;
                    for (g_748 = 0; (g_748 == 24); ++g_748)
                    {
                        (**l_895) &= ((*p_23) <= ((p_26 == l_920) > (*p_23)));
                        (*g_745) = (*g_53);
                        p_25 = (!(safe_mul_func_uint8_t_u_u((l_923 = func_28((*l_830), (*p_23), &l_841[4][0], (*l_830))), (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((!(p_27 == g_833)), l_928)) & 1L), l_928)))));
                    }
                    for (l_887 = 24; (l_887 != 20); l_887 = safe_sub_func_uint16_t_u_u(l_887, 6))
                    {
                        (*g_33) = &p_25;
                        (**g_53) |= 0L;
                        if ((*p_23))
                            continue;
                    }
                    (*l_888) = &p_25;
                }
            }
            return &g_134;
        }
        return (*l_830);
    }
    return &g_827[0][0];
}







static unsigned func_28(int ** p_29, int p_30, int ** p_31, int ** p_32)
{
    int **l_471 = &g_34;
    unsigned short *l_475[9][3][3] = {{{(void*)0,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{(void*)0,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{(void*)0,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{(void*)0,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}},{{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200}}};
    short l_477 = (-1L);
    unsigned *l_489 = &g_160;
    int l_514 = 4L;
    unsigned char l_557 = 0x35L;
    char *l_570 = &g_327[4];
    unsigned l_586[3][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL}};
    int **l_674[1][5][5] = {{{&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,&g_134,&g_134,&g_134},{&g_34,&g_134,&g_134,&g_134,&g_34},{&g_134,&g_34,&g_134,&g_134,&g_34},{&g_34,&g_134,&g_134,&g_34,&g_134}}};
    char l_676 = 0xDEL;
    short l_680[8] = {0x91D3L,0x91D3L,0x91D3L,0x91D3L,0x91D3L,0x91D3L,0x91D3L,0x91D3L};
    int **l_704[5][1] = {{&g_34},{&g_134},{&g_34},{&g_134},{&g_34}};
    unsigned l_711 = 9UL;
    unsigned short l_722 = 0x07EEL;
    unsigned char **l_728 = &g_180;
    int i, j, k;
    for (p_30 = (-29); (p_30 < 5); p_30++)
    {
        unsigned char l_459 = 0UL;
        unsigned short **l_460[10] = {&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199};
        int **l_472 = (void*)0;
        unsigned char *l_476 = &g_2[0];
        int *l_478 = &g_61[7];
        unsigned l_479 = 9UL;
        int i;
        (*l_478) |= ((l_459 >= (&g_199 != l_460[3])) < (safe_lshift_func_int16_t_s_s((l_477 = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_459, (func_48(l_471, l_472) != (((*l_476) ^= (safe_lshift_func_int16_t_s_u((l_475[8][1][2] != &g_200), 0))) < p_30)))), g_93[2][4])) ^ p_30), p_30)), p_30)) < g_454)), 12)));
        if (l_479)
            continue;
        return p_30;
    }
    return p_30;
}







static int ** func_35(int * p_36, unsigned short p_37)
{
    int **l_52 = &g_34;
    int ***l_51[4];
    unsigned short l_56 = 0xFA0BL;
    unsigned short *l_453[8][4][7] = {{{&g_200,(void*)0,&g_200,&g_200,(void*)0,&l_56,&g_200},{&l_56,&l_56,(void*)0,&l_56,&l_56,(void*)0,&g_200},{(void*)0,&l_56,&l_56,(void*)0,&l_56,&l_56,(void*)0},{&g_200,&g_200,&l_56,&l_56,&g_200,&l_56,&l_56}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56,&l_56,&g_200},{&l_56,(void*)0,&g_200,&l_56,(void*)0,&g_200,&g_200},{&l_56,&g_200,&g_200,&l_56,&l_56,&g_200,&g_200}},{{(void*)0,&l_56,&l_56,(void*)0,&g_200,&l_56,(void*)0},{&l_56,&g_200,&l_56,&l_56,&g_200,&g_200,&g_200},{(void*)0,(void*)0,&g_200,(void*)0,(void*)0,&l_56,&l_56},{&l_56,&g_200,&l_56,&l_56,&l_56,&g_200,&l_56}},{{&l_56,&g_200,&g_200,&l_56,&l_56,&l_56,&g_200},{&l_56,&l_56,&g_200,&g_200,&l_56,&g_200,&l_56},{(void*)0,&l_56,&g_200,(void*)0,&g_200,&g_200,(void*)0},{&l_56,&l_56,&l_56,&l_56,&l_56,&l_56,&g_200}},{{(void*)0,(void*)0,&g_200,&g_200,&l_56,&l_56,(void*)0},{&l_56,&g_200,&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,(void*)0,&l_56,&l_56,(void*)0,&l_56,&g_200},{&g_200,&l_56,&g_200,&l_56,&l_56,&g_200,&g_200}},{{&g_200,&l_56,&l_56,&l_56,&l_56,&l_56,&g_200},{&g_200,&g_200,(void*)0,&l_56,&g_200,&l_56,(void*)0},{&g_200,&l_56,(void*)0,&l_56,&l_56,(void*)0,&l_56},{&l_56,(void*)0,(void*)0,&l_56,&l_56,&g_200,&l_56}},{{&g_200,&g_200,&l_56,&g_200,&l_56,&l_56,(void*)0},{&l_56,&l_56,&g_200,&g_200,&g_200,&g_200,&l_56},{&l_56,&l_56,&g_200,&g_200,&l_56,&g_200,&l_56},{&g_200,&l_56,&g_200,&l_56,&l_56,(void*)0,(void*)0}},{{&g_200,&g_200,(void*)0,&g_200,&g_200,(void*)0,&g_200},{&g_200,(void*)0,&l_56,&g_200,&l_56,(void*)0,&g_200},{&g_200,&l_56,(void*)0,&g_200,&g_200,&g_200,(void*)0},{&g_200,&g_200,&g_200,&l_56,&l_56,&g_200,&l_56}}};
    unsigned char *l_455 = &g_2[0];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_51[i] = &l_52;
    (*g_33) = func_39(p_37, func_45(func_48(&g_34, (g_53 = &g_34)), ((**l_52) >= l_56)), p_36, (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_3[6][1], p_37)), 0x39L)), p_36);
    (*l_52) = func_39(g_225, (g_231 = &p_36), ((*g_33) = p_36), (((*l_455) &= ((g_454 = (p_37 ^= (*g_199))) >= ((*g_199) > g_55[0]))) & (g_61[6] != (*p_36))), p_36);
    return &g_134;
}







static int * func_39(int p_40, int ** p_41, int * p_42, unsigned p_43, int * p_44)
{
    unsigned char l_439 = 0x12L;
    unsigned char *l_444 = &g_2[1];
    int **l_447 = &g_134;
    unsigned *l_448[4];
    short *l_449 = &g_331;
    int l_450 = 0xAB9A6D87L;
    int i;
    for (i = 0; i < 4; i++)
        l_448[i] = &g_160;
    l_450 = (safe_lshift_func_int8_t_s_u(l_439, (((*g_199) >= ((*l_449) &= (((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_444) = 255UL), 2)), ((g_160 = (safe_mod_func_uint32_t_u_u((&g_160 != &g_160), func_48(l_447, &g_34)))) != ((!(((**g_53) != (*p_44)) > p_43)) ^ p_43)))) != 2L) || p_40))) ^ l_439)));
    return (*l_447);
}







static int ** func_45(int p_46, short p_47)
{
    int **l_59 = &g_34;
    int *l_60 = &g_61[6];
    int ***l_63 = &g_53;
    int ****l_62[8][4] = {{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63}};
    int *l_79[8] = {&g_61[4],&g_61[4],&g_61[4],&g_61[4],&g_61[4],&g_61[4],&g_61[4],&g_61[4]};
    char **l_165 = (void*)0;
    unsigned short *l_201 = &g_200;
    int l_306[10];
    unsigned short **l_314 = &l_201;
    unsigned short ***l_313 = &l_314;
    int l_362 = 0xD54B43B3L;
    int **l_384 = &l_79[4];
    int **l_385 = &l_60;
    int i, j;
    for (i = 0; i < 10; i++)
        l_306[i] = 0x743BEBD9L;
    (*l_60) = (safe_sub_func_uint32_t_u_u(func_48(l_59, &g_34), p_47));
    (*l_60) ^= ((**l_59) >= (&g_53 == (g_64 = &l_59)));
    if (func_48((*l_63), (*g_64)))
    {
        int **l_65 = &l_60;
        int l_66 = (-1L);
        int l_67 = (-5L);
        l_67 = (l_66 = ((*l_60) = func_48((*l_63), l_65)));
        for (p_47 = 0; (p_47 != (-3)); p_47--)
        {
            unsigned short l_80 = 65529UL;
            unsigned char l_101 = 0UL;
            char *l_105 = &g_93[2][2];
            int l_108[1][7];
            unsigned l_133 = 1UL;
            unsigned char l_167 = 0x90L;
            unsigned char **l_177[3];
            int **l_185 = &g_34;
            int **l_193 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_108[i][j] = 0x4D69EA85L;
            }
            for (i = 0; i < 3; i++)
                l_177[i] = (void*)0;
            for (l_67 = 19; (l_67 == (-6)); l_67 = safe_sub_func_int16_t_s_s(l_67, 1))
            {
                unsigned short l_74 = 0x76E5L;
                unsigned short *l_75 = &l_74;
                int l_78 = 9L;
            }
            (*g_33) = (**g_64);
            for (p_46 = 0; (p_46 == 1); p_46 = safe_add_func_int16_t_s_s(p_46, 1))
            {
                unsigned l_94 = 1UL;
                int **l_102 = &g_34;
                for (l_67 = 14; (l_67 >= (-19)); --l_67)
                {
                    for (l_80 = (-11); (l_80 < 58); l_80 = safe_add_func_uint8_t_u_u(l_80, 1))
                    {
                        unsigned char l_91[5][5][8] = {{{1UL,254UL,1UL,1UL,254UL,1UL,1UL,254UL},{254UL,1UL,1UL,254UL,1UL,1UL,254UL,1UL},{254UL,254UL,0UL,254UL,254UL,0UL,254UL,254UL},{1UL,254UL,1UL,1UL,254UL,1UL,1UL,254UL},{254UL,1UL,1UL,254UL,1UL,1UL,254UL,1UL}},{{254UL,254UL,0UL,254UL,254UL,0UL,254UL,254UL},{1UL,254UL,1UL,1UL,254UL,1UL,1UL,254UL},{254UL,1UL,1UL,254UL,1UL,0UL,1UL,0UL},{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL}},{{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL},{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL},{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL}},{{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL},{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL}},{{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL},{1UL,1UL,254UL,1UL,1UL,254UL,1UL,1UL},{0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL}}};
                        char *l_92 = &g_93[0][0];
                        int i, j, k;
                        (**l_65) = (((safe_add_func_int8_t_s_s(((*l_92) ^= l_91[4][4][4]), (g_2[0] < p_46))) & l_94) >= (safe_sub_func_uint32_t_u_u(0x4278D6BFL, p_47)));
                    }
                    (*g_33) = (*l_65);
                    (*l_65) = (**g_64);
                }
                for (l_94 = 6; (l_94 > 25); ++l_94)
                {
                    char *l_107 = (void*)0;
                    char **l_106 = &l_107;
                    for (l_66 = 0; (l_66 <= 1); l_66++)
                    {
                        (**l_65) |= l_101;
                        if ((***g_64))
                            break;
                        return l_102;
                    }
                    (*l_60) |= ((safe_mul_func_int8_t_s_s((l_105 == ((*l_106) = &g_93[2][2])), g_93[6][0])) > (0x7704L != p_46));
                    l_108[0][0] ^= 8L;
                }
            }
            for (l_67 = (-19); (l_67 > 7); l_67 = safe_add_func_int32_t_s_s(l_67, 5))
            {
                unsigned l_120 = 4294967288UL;
                int *l_122 = &g_9;
                int **l_127 = (void*)0;
                unsigned *l_132 = &l_120;
                unsigned short l_156 = 0x6E4CL;
                unsigned *l_166 = &g_160;
                for (p_46 = 0; (p_46 >= 0); p_46 -= 1)
                {
                    int *l_111 = &g_9;
                    int l_121 = (-8L);
                    for (l_80 = 0; (l_80 <= 0); l_80 += 1)
                    {
                        unsigned short **l_123 = (void*)0;
                        unsigned short ***l_124 = &l_123;
                        int i;
                        (*g_53) = l_111;
                    }
                    if (l_101)
                        continue;
                }
            }
        }
        return (*l_63);
    }
    else
    {
        int *l_226 = &g_3[1][0];
        int l_227[8][10] = {{1L,4L,(-4L),(-5L),0x40A8872AL,0x51878783L,0x51878783L,0x40A8872AL,(-5L),(-4L)},{0x40A8872AL,0x40A8872AL,(-1L),1L,0x8216C10DL,0x51878783L,0xFB2AA1FCL,0x51878783L,0x8216C10DL,1L},{1L,0xFD4B6AB4L,1L,0x51878783L,1L,(-4L),0xFB2AA1FCL,0xFB2AA1FCL,(-4L),1L},{(-1L),0x40A8872AL,0x40A8872AL,(-1L),1L,0x8216C10DL,0x51878783L,0xFB2AA1FCL,0x51878783L,0x8216C10DL},{(-4L),4L,1L,4L,(-4L),(-5L),0x40A8872AL,0x51878783L,0x51878783L,0x40A8872AL},{0xFB2AA1FCL,0xFB2AA1FCL,1L,1L,0xFB2AA1FCL,0x8216C10DL,4L,(-5L),1L,(-5L)},{0x40A8872AL,1L,1L,(-1L),1L,1L,0x40A8872AL,4L,0xFD4B6AB4L,0xFD4B6AB4L},{0x40A8872AL,0xFD4B6AB4L,0x8216C10DL,(-4L),(-4L),0x8216C10DL,0xFD4B6AB4L,0x40A8872AL,0xFB2AA1FCL,4L}};
        unsigned short *l_267 = &g_200;
        unsigned short *l_268[2][6] = {{&g_200,&g_200,&g_200,&g_200,&g_200,&g_200},{&g_200,&g_200,&g_200,&g_200,&g_200,&g_200}};
        int ***l_276 = &g_53;
        char l_295 = (-2L);
        int **l_373[7][8][4] = {{{&g_134,&l_60,&l_79[5],&l_226},{&l_79[1],&l_60,&l_79[1],(void*)0},{&l_226,&g_34,&l_60,&g_134},{&l_226,(void*)0,&l_79[1],&l_226},{&l_79[1],&g_134,&l_79[5],&g_134},{&g_134,&l_226,&l_79[1],(void*)0},{&l_60,&l_226,&g_34,&g_134},{&g_34,(void*)0,&g_134,&g_134}},{{&l_79[7],&l_226,&l_79[1],(void*)0},{(void*)0,&l_226,(void*)0,&g_134},{&g_134,&g_134,&l_226,&l_226},{&g_134,(void*)0,&g_34,&g_134},{&l_60,&g_34,&g_34,(void*)0},{&g_134,&l_60,&l_226,&l_226},{&l_79[1],(void*)0,&g_134,&l_79[0]},{&g_134,&l_79[0],&l_79[1],&l_79[1]}},{{&g_34,(void*)0,&l_79[1],&g_134},{&l_60,(void*)0,&g_34,&l_79[1]},{(void*)0,&l_79[0],&l_79[1],&l_79[0]},{&g_34,(void*)0,&l_79[1],&l_226},{&l_79[1],&g_134,&g_34,&l_60},{&l_79[7],&l_60,(void*)0,&l_226},{&l_79[7],&g_134,&g_34,&l_226},{&l_79[1],&l_226,&l_79[1],&g_34}},{{&g_34,&l_79[1],&l_79[1],&l_60},{(void*)0,&l_226,&g_34,(void*)0},{&l_60,&l_60,&l_79[1],(void*)0},{&g_34,&l_226,&l_79[1],&l_60},{&g_134,&l_79[1],&g_134,&g_34},{&l_79[1],&l_226,&l_79[7],&l_226},{(void*)0,&g_134,&g_34,&l_226},{&g_134,&l_60,&g_34,&l_60}},{{(void*)0,&g_134,&l_79[7],&l_226},{&l_79[1],(void*)0,&g_134,&l_79[0]},{&g_134,&l_79[0],&l_79[1],&l_79[1]},{&g_34,(void*)0,&l_79[1],&g_134},{&l_60,(void*)0,&g_34,&l_79[1]},{(void*)0,&l_79[0],(void*)0,&g_134},{&l_79[1],&g_134,&g_134,&g_134},{(void*)0,(void*)0,&g_134,&l_60}},{{&l_79[1],&g_134,&l_60,&l_60},{&l_79[1],&l_79[0],&g_134,(void*)0},{(void*)0,&l_60,&g_134,(void*)0},{&l_79[1],&g_34,(void*)0,&l_226},{&l_60,(void*)0,&l_79[7],(void*)0},{&g_34,&l_60,&g_34,(void*)0},{&l_79[1],(void*)0,&l_60,&l_226},{&g_134,&g_34,&g_134,(void*)0}},{{&g_34,&l_60,&l_79[1],(void*)0},{&g_34,&l_79[0],&l_226,&l_60},{&l_79[5],&g_134,&l_226,&l_60},{&g_34,(void*)0,&l_79[1],&g_134},{&g_34,&g_134,&g_134,&g_134},{&g_134,&g_134,&l_60,&g_34},{&l_79[1],&g_134,&g_34,&g_134},{&g_34,&g_134,&l_79[7],&g_34}}};
        int **l_374 = &l_60;
        int **l_379[1][5];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_379[i][j] = &l_79[4];
        }
    }
    return (*l_63);
}







static int func_48(int ** p_49, int ** p_50)
{
    int *l_54 = (void*)0;
    g_55[0] ^= (*g_8);
    return g_55[0];
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
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_55[i], "g_55[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_93[i][j], "g_93[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_578[i][j], "g_578[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
