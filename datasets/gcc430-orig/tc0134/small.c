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



static char g_7 = 0xD4L;
static int g_9 = 1L;
static int *g_8 = &g_9;
static int g_14 = 0xA43B2B74L;
static volatile int g_227 = 0x1552F5CEL;
static volatile int *g_226 = &g_227;
static volatile int **g_225 = &g_226;
static volatile int ***g_224 = &g_225;
static int * const g_236 = &g_9;
static char g_281 = 0xBFL;
static int *g_437 = &g_9;
static int **g_436 = &g_437;
static const int *g_442 = &g_14;
static char g_632 = 1L;



static char func_1(void);
static short func_4(int p_5, const unsigned p_6);
static int func_15(int p_16);
static char func_18(int * p_19, unsigned p_20, unsigned char p_21, const int p_22);
static unsigned short func_30(char p_31, int p_32, unsigned p_33, int p_34, int p_35);
static unsigned func_39(int p_40, unsigned p_41, int ** p_42, int * p_43, int * p_44);
static int func_45(int * const p_46, int p_47, int ** p_48, unsigned short p_49, int * p_50);
static int * const func_51(char p_52);
static int func_57(unsigned short p_58, int p_59);
static unsigned char func_61(const int p_62, unsigned p_63);
static char func_1(void)
{
    int *l_13 = &g_14;
    int * const *l_12 = &l_13;
    unsigned short l_631 = 65531UL;
    unsigned char l_677 = 255UL;
    int l_740 = 0x9A5A581FL;
    int **l_741 = &g_437;
    if ((safe_sub_func_int16_t_s_s(func_4(g_7, g_7), ((void*)0 == l_12))))
    {
        unsigned char l_17 = 0x38L;
        int * const l_25 = &g_14;
        int l_678 = (-1L);
        unsigned char l_694 = 249UL;
        if (func_15(((&g_8 != (void*)0) | ((l_17 && (func_18(&g_9, g_7, (**l_12), (safe_lshift_func_int16_t_s_s((l_25 != (void*)0), (safe_mul_func_uint16_t_u_u((*l_13), g_7))))) < l_631)) | g_632))))
        {
            int **l_672 = &l_13;
            (*l_672) = (void*)0;

            ;
            for (g_7 = 0; (g_7 >= (-10)); --g_7)
            {
                unsigned char l_679 = 0x18L;
                if (((safe_sub_func_uint8_t_u_u((l_678 == (l_679 | (-1L))), 0x82L)) != (*g_236)))
                {
                    (*l_25) = (*g_236);
                }
                else
                {
                    l_13 = l_25;

                    ;
                }
            }

            ;
            (*l_672) = (void*)0;

            ;
        }
        else
        {
            const int l_683 = 0xAF80D826L;
            if (((*g_224) == (void*)0))
            {
                int **l_680 = &l_13;
                (*g_224) = (*g_224);
                (*l_680) = (void*)0;

                ;
                (*g_236) = (safe_mod_func_int16_t_s_s(g_227, 5UL));
                if (((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_7, g_227)), 0x2ACB0934L)) > ((safe_sub_func_int16_t_s_s(func_30((*l_25), (*g_236), g_9, l_683, (*l_25)), 0xF868L)) < l_683)))
                {
                    int ** const l_690 = &g_8;
                    g_436 = l_690;

                    ;
                    return g_632;
                }
                else
                {
                    unsigned l_701 = 0x4DC547D1L;
                    if ((*l_25))
                    {
                        int *l_693 = &g_14;
                        (*l_25) = ((safe_sub_func_int8_t_s_s((~(func_30(g_281, (l_693 != (void*)0), g_227, (l_694 < (safe_rshift_func_uint8_t_u_u(((!g_632) || (0xCB2B1A89L || (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(g_281, g_14)) & l_701), (-10L))))), 2))), (*l_693)) >= (*g_236))), g_7)) == l_701);
                        (*l_25) = (g_281 >= l_701);
                    }
                    else
                    {
                        (*g_236) = 0xA392CF70L;
                    }
                    return l_701;
                }
            }
            else
            {
                const short l_717 = 5L;
                int *l_728 = &g_14;
                int **l_729 = &l_13;
                for (g_632 = (-5); (g_632 > 22); g_632 = safe_add_func_int32_t_s_s(g_632, 2))
                {
                    int ***l_708 = (void*)0;
                    int *l_720 = (void*)0;
                    if ((safe_mul_func_int8_t_s_s(l_683, ((safe_add_func_uint16_t_u_u((g_9 == (l_708 == (void*)0)), func_57(g_227, (*g_236)))) | g_632))))
                    {
                        int *l_721 = &g_14;
                        int **l_722 = &l_721;
                        (*l_722) = l_721;
                    }
                    else
                    {
                        int *l_723 = &g_9;
                        int **l_724 = (void*)0;
                        int **l_725 = &g_437;
                        if (l_717)
                            break;
                        (*l_725) = l_723;

                        ;
                        (*l_13) = (func_61(g_227, (&l_683 != (*l_12))) > ((g_9 ^ (&l_723 != (*g_224))) & (func_30(g_9, (g_632 || 0UL), (*l_25), (*g_437), l_717) == g_632)));
                    }

                    ;
                }
                (**l_12) = (*g_236);
                (*l_729) = l_728;
                (*g_236) = l_683;
            }
        }

        ;
        ;
        ;
        ;
        ;


    }
    else
    {
        unsigned l_730 = 1UL;
        int l_733 = (-1L);
        int **l_734 = &g_8;
        char l_737 = 0x50L;
        l_733 = (1UL ^ (l_730 && ((safe_lshift_func_uint8_t_u_u(func_61(g_281, g_632), 1)) < (0x6FL != g_227))));

        ;
        (*g_224) = (*g_224);
        (*l_734) = func_51((*l_13));

        ;
        ;
        (*g_236) = (((((safe_div_func_uint32_t_u_u(func_30(l_737, (func_15((**l_734)) >= l_730), g_632, g_227, l_733), 0xF7CDE530L)) & 0xE8L) || g_9) != g_632) && 0x3EFEL);

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;


    l_740 = func_15((safe_add_func_uint16_t_u_u(g_281, g_281)));
    (*l_741) = (*l_12);

    ;
    return g_7;
}







static short func_4(int p_5, const unsigned p_6)
{
    int **l_10 = (void*)0;
    int **l_11 = &g_8;
    (*l_11) = g_8;
    (*g_8) = ((void*)0 != &g_9);
    return (**l_11);
}







static int func_15(int p_16)
{
    unsigned char l_633 = 0x62L;
    int *l_635 = &g_14;
    int ***l_657 = &g_436;
    if ((p_16 == (g_632 >= l_633)))
    {
        unsigned l_634 = 18446744073709551608UL;
        return l_634;
    }
    else
    {
        int **l_636 = &g_8;
        int *l_639 = &g_14;
        (*l_636) = l_635;

        ;
        (*l_636) = (void*)0;

        ;
        (*l_635) = (safe_add_func_int32_t_s_s(0xC4534D0BL, (l_639 != l_635)));
    }

    ;
    if ((((*g_224) != &l_635) <= (safe_add_func_int8_t_s_s((*l_635), ((*l_635) || (*l_635))))))
    {
        int **l_642 = &g_8;
        char l_651 = 0x25L;
        (*l_642) = l_635;

        ;
        (*g_8) = (p_16 | (**l_642));
        for (p_16 = 20; (p_16 < 3); --p_16)
        {
            int *l_645 = &g_9;
            int *** const l_650 = &g_436;
            (*l_642) = l_645;

            ;
            (*l_642) = l_635;

            ;
        }
    }
    else
    {
        int **l_652 = &g_437;
        (*l_652) = l_635;

        ;
    }

    ;
    (*g_236) = ((safe_lshift_func_uint16_t_u_s(((void*)0 != l_635), 11)) | (~(safe_add_func_uint16_t_u_u((4UL ^ ((l_657 != l_657) | (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((l_635 != l_635) != (p_16 < (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0x9F88L, (*l_635))), 7)), 4)) > 254UL), g_9)))) || g_14), 2)), g_9)))), 0UL))));
    return p_16;
}







static char func_18(int * p_19, unsigned p_20, unsigned char p_21, const int p_22)
{
    short l_38 = 5L;
    int *l_438 = (void*)0;
    const unsigned l_493 = 18446744073709551615UL;
    int *l_494 = &g_9;
    int ***l_527 = (void*)0;
    int *l_581 = &g_14;
    if (((safe_mod_func_int16_t_s_s(g_9, func_30(g_9, (safe_add_func_int32_t_s_s(l_38, func_39(func_45(func_51((safe_sub_func_int32_t_s_s(((&p_19 == &g_8) <= ((&p_22 != &g_14) & (p_21 < p_22))), 0x39425A33L))), g_281, g_436, l_38, l_438), g_281, &g_437, l_438, p_19))), l_38, l_38, (*g_236)))) < l_493))
    {
        (*g_436) = l_494;
    }
    else
    {
        char l_501 = 0xE2L;
        short l_502 = 0x4511L;
        int * const l_503 = &g_9;
        unsigned char l_528 = 1UL;
        const int *l_579 = &g_9;
        const int **l_591 = &l_579;
        if ((((func_61(((((safe_mul_func_uint16_t_u_u((*l_494), (*l_494))) ^ 0x45L) != g_227) > ((safe_mul_func_uint8_t_u_u((((((*l_494) != g_7) ^ g_281) < ((safe_mul_func_uint8_t_u_u((l_501 <= (*g_437)), p_21)) == g_281)) <= g_281), 1UL)) >= g_9)), g_14) && 0xE9764C4BL) >= (-1L)) | g_7))
        {
            int **l_504 = &l_494;
            (*l_504) = l_503;
            (**g_436) = (safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0UL, (*l_494))) <= (*p_19)), p_20));
            (**g_436) = 0x242FF651L;
        }
        else
        {
            int * const l_532 = &g_14;
            for (g_281 = (-8); (g_281 >= 28); g_281 = safe_add_func_uint16_t_u_u(g_281, 8))
            {
                const unsigned short l_529 = 4UL;
                const int **l_535 = &g_442;
                for (l_501 = 13; (l_501 != 20); l_501++)
                {
                    unsigned short l_524 = 0xE4F2L;
                    for (g_14 = 0; (g_14 >= 22); g_14++)
                    {
                        int **l_515 = &g_437;
                        (*l_515) = l_503;

                        ;
                    }
                    (*p_19) = (safe_add_func_int16_t_s_s((!func_45(p_19, g_281, &g_437, (((safe_mul_func_int8_t_s_s(0xEDL, (*l_494))) & ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((l_524 <= (safe_sub_func_int32_t_s_s(((&g_436 == l_527) >= 0x74DFCF0DL), (-5L)))), 6)), p_22)) == 0x1DL)) != l_528), p_19)), l_529));

                    ;
                    for (g_14 = (-4); (g_14 < 28); g_14++)
                    {
                        int **l_533 = &g_437;
                        const int **l_534 = &g_442;
                        if ((*l_494))
                            break;
                        (*l_533) = l_532;

                        ;
                        (*l_534) = &p_22;

                        ;
                    }

                    ;
                }
                (*l_535) = &p_22;

                ;
                if ((*l_532))
                    break;
            }

            ;
            ;
        }

        ;
        ;
        if ((0x070C08C9L == (*l_503)))
        {
            int *l_538 = &g_14;
            if ((safe_rshift_func_uint16_t_u_s(0x8D7DL, g_281)))
            {
                int ***l_539 = &g_436;
                l_538 = (*g_436);

                ;
                (*l_539) = &p_19;

                ;
            }
            else
            {
                unsigned l_556 = 0xFB4A7941L;
                const int **l_578 = (void*)0;
                const int **l_580 = &g_442;
                if ((**g_436))
                {
                    int ***l_540 = &g_436;
                    (*g_437) = 0x854CD4D0L;
                    if ((func_39(g_281, (&g_225 == l_540), &g_437, (*g_436), (*g_436)) ^ (safe_mul_func_int16_t_s_s(p_22, p_21))))
                    {
                        const int **l_543 = &g_442;
                        const int l_565 = 0x0E71F7FBL;
                        (*l_543) = &p_22;

                        ;
                        (*g_437) = (((safe_lshift_func_int16_t_s_u((func_61(((((safe_lshift_func_uint16_t_u_s(p_22, (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0xB797L, g_227)), func_61((&p_22 != &p_22), (safe_div_func_uint8_t_u_u((&l_538 == (*g_224)), l_556))))))) && 0xBCL) || p_22) && p_21), p_20) != (*g_437)), (*l_538))) > l_556) && p_20);
                        (*p_19) = ((safe_rshift_func_int16_t_s_u(func_61((((&l_543 == &g_225) != (0x45L || ((p_20 > (**l_543)) | (((void*)0 == (*g_224)) >= g_281)))) == (safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_227, l_565)), 4L)) <= 0x572C34D2L), 0xB7L))), (*l_538)), 3)) & p_20);
                    }
                    else
                    {
                        (*l_503) = (safe_add_func_uint8_t_u_u(((-1L) && (&p_22 != (void*)0)), (g_9 ^ g_14)));
                    }

                    ;
                }
                else
                {
                    const int **l_568 = &g_442;
                    int **l_569 = &l_494;
                    (*l_568) = &p_22;

                    ;
                    (*l_569) = l_503;
                }
                l_579 = &p_22;

                ;
                (*g_436) = (void*)0;

                ;
                (*l_580) = &p_22;

                ;
            }

            ;
            ;
            ;
            ;
            (*l_503) = 0x91C91372L;
            if ((*p_19))
            {
                return p_21;



            }
            else
            {
                return g_14;



            }
        }
        else
        {
            (*g_436) = l_581;

            ;
            for (l_502 = 0; (l_502 == (-5)); --l_502)
            {
                for (g_281 = 0; (g_281 == 8); g_281++)
                {
                    int l_588 = 1L;
                    for (l_501 = (-4); (l_501 > (-28)); l_501--)
                    {
                        if ((*g_442))
                            break;
                        if (l_588)
                            break;
                    }
                }
                (*g_436) = (*g_436);
            }
            for (g_7 = 0; (g_7 == 17); g_7 = safe_add_func_int8_t_s_s(g_7, 1))
            {
                (*g_436) = (*g_436);
            }
            (*g_436) = (*g_436);
        }

        ;
        (*l_591) = l_579;
        if ((safe_div_func_int16_t_s_s(g_7, g_281)))
        {
            unsigned l_603 = 0x317978BEL;
            if ((func_61((g_14 <= (0UL && 0xF9L)), g_7) >= (*p_19)))
            {
                for (g_281 = 0; (g_281 >= (-4)); g_281 = safe_sub_func_int16_t_s_s(g_281, 1))
                {
                    (*g_437) = (*g_236);
                    if ((**l_591))
                        break;
                }
                (*l_591) = &p_22;

                ;
                for (g_7 = 2; (g_7 <= (-25)); g_7 = safe_sub_func_int16_t_s_s(g_7, 2))
                {
                    (*l_591) = (*l_591);
                }
            }
            else
            {
                g_442 = &p_22;

                ;
            }

            ;
            (*l_581) = (safe_add_func_int8_t_s_s((((void*)0 == &g_436) != (~((*l_503) <= (*l_503)))), (&l_591 != (void*)0)));
            (*l_591) = &p_22;

            ;
        }
        else
        {
            char l_619 = (-5L);
            int **l_621 = &l_581;
            for (p_20 = 0; (p_20 == 31); p_20 = safe_add_func_int8_t_s_s(p_20, 5))
            {
                short l_614 = 8L;
                unsigned l_620 = 0UL;
                int * const l_624 = &g_14;
                (**g_436) = (*p_19);
                if (l_614)
                    continue;
                if ((*g_236))
                    break;
                if (((((g_227 >= (safe_add_func_uint8_t_u_u(p_22, ((safe_sub_func_uint8_t_u_u(func_30(g_7, l_619, g_7, l_619, l_620), ((**l_591) <= l_620))) != 8L)))) <= (*g_442)) && 65535UL) ^ 246UL))
                {
                    (*l_503) = ((void*)0 != (*g_436));
                    l_621 = l_621;
                    if ((*l_503))
                        break;
                    for (l_614 = 22; (l_614 < 3); l_614 = safe_sub_func_uint16_t_u_u(l_614, 5))
                    {
                        (*g_436) = l_624;
                    }
                }
                else
                {
                    (*l_621) = (*g_436);
                }
            }
            for (l_619 = 0; (l_619 == (-28)); --l_619)
            {
                for (l_502 = 0; (l_502 < (-2)); l_502 = safe_sub_func_int32_t_s_s(l_502, 7))
                {
                    return g_7;


                }
                (*l_591) = &p_22;

                ;
                (*l_621) = (*g_436);
                (*p_19) = (((0UL ^ g_7) < 0xD7CB8FB6L) ^ p_22);
            }

            ;
        }

        ;
    }

    ;
    ;
    ;
    ;
    ;
    for (g_14 = 0; (g_14 < 13); g_14 = safe_add_func_uint8_t_u_u(g_14, 7))
    {
        (*g_436) = (*g_436);
    }
    return g_14;


}







static unsigned short func_30(char p_31, int p_32, unsigned p_33, int p_34, int p_35)
{
    return g_7;
}







static unsigned func_39(int p_40, unsigned p_41, int ** p_42, int * p_43, int * p_44)
{
    unsigned char l_461 = 0x22L;
    int *l_471 = &g_9;
    int *l_474 = &g_14;
    unsigned l_486 = 4294967290UL;
    (*p_42) = l_471;

    ;
    (*l_474) = (safe_div_func_uint32_t_u_u(g_227, (*l_471)));
    l_471 = (void*)0;

    ;
    if ((*l_474))
    {
        int ***l_475 = &g_436;
        (*g_224) = (*g_224);
        (*l_474) = (((-1L) == ((void*)0 != l_475)) <= func_61(func_45((*p_42), (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*l_474), (safe_rshift_func_int16_t_s_u(p_40, 14)))), ((***l_475) > g_7))), &g_8, g_9, (*p_42)), g_281));

        ;
        ;
        return p_40;
    }
    else
    {
        unsigned char l_491 = 1UL;
        (*l_474) = (((&p_42 == (void*)0) < (**p_42)) < (func_61((safe_div_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((*l_474), (l_486 > (&g_436 == &p_42)))) & (safe_lshift_func_int16_t_s_s(p_41, 5))) == p_40) != p_41), g_227)), (*l_474)) == p_40));

        ;
        if (((safe_rshift_func_uint8_t_u_u(g_7, ((void*)0 != &g_225))) & l_491))
        {
            (*p_42) = (*g_436);
        }
        else
        {
            unsigned short l_492 = 0xCA54L;
            (*g_436) = (*g_436);
            l_492 = (g_227 != g_7);
        }
    }

    ;
    return g_14;
}







static int func_45(int * const p_46, int p_47, int ** p_48, unsigned short p_49, int * p_50)
{
    unsigned l_439 = 4UL;
    const int *l_440 = &g_14;
    const int **l_441 = (void*)0;
    int l_458 = 1L;
    (*g_224) = (void*)0;

    ;
    g_442 = l_440;

    ;
    for (l_439 = 0; (l_439 <= 54); l_439++)
    {
        short l_454 = 9L;
        for (p_49 = 0; (p_49 > 7); p_49++)
        {
            int ***l_449 = &g_436;
            const short l_457 = 0x1B2CL;
            l_458 = func_57(g_281, func_61((safe_mod_func_uint32_t_u_u(((((&g_225 == l_449) | g_7) ^ ((safe_sub_func_uint16_t_u_u((((0xDA7FL & (safe_lshift_func_int8_t_s_s(l_454, func_61(g_281, (safe_mul_func_int16_t_s_s((l_457 & func_61((~((***l_449) && 0x0AL)), p_47)), (-1L))))))) & p_49) && (*g_236)), (***l_449))) ^ 8UL)) && p_49), (*p_46))), g_9));

            ;
        }
    }
    return (*l_440);
}







static int * const func_51(char p_52)
{
    unsigned short l_60 = 0xA46EL;
    unsigned l_67 = 5UL;
    int * const l_97 = &g_14;
    int l_141 = 5L;
    int l_282 = 0xCDC273CEL;
    int l_340 = 0x16488FA2L;
    if (func_57(l_60, (((func_61(g_14, l_60) & (safe_add_func_int16_t_s_s((l_60 && l_67), (((g_14 > ((g_7 != ((l_67 < p_52) ^ 0xC5L)) || 0xFCE3L)) | 0x8EL) == g_7)))) & p_52) < p_52)))
    {
        unsigned char l_124 = 0UL;
        int *l_127 = &g_14;
        const int *l_190 = &g_14;
        const int **l_189 = &l_190;
        const int ***l_188 = &l_189;
        unsigned short l_193 = 1UL;
        int *l_214 = &g_9;
        int l_273 = 0xAF5BD36EL;
        unsigned l_293 = 0xE9E94926L;
        for (g_14 = (-22); (g_14 != 5); g_14++)
        {
            if (p_52)
                break;
            return l_97;


        }
        for (l_60 = 0; (l_60 == 48); ++l_60)
        {
            int **l_112 = &g_8;
            int ** const *l_111 = &l_112;
            int l_114 = 0x8B8E4845L;
            const char l_172 = 2L;
            if ((*l_97))
            {
                int l_113 = 1L;
                int *l_130 = (void*)0;
                int * const l_134 = &l_114;
                unsigned short l_158 = 65530UL;
                for (p_52 = 0; (p_52 != (-28)); p_52--)
                {
                    const int **l_110 = (void*)0;
                    int l_115 = 0L;
                    unsigned l_125 = 0UL;
                    g_14 = (0x5E682746L | (0xD9L <= ((safe_mul_func_int16_t_s_s(g_7, (!((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((void*)0 != l_110) > (((((l_111 != &l_110) | p_52) || l_113) == 0L) != l_114)), l_113)) != 1UL), p_52)) > 0x0A09L)))) > 0L)));
                    l_115 = (4294967286UL ^ (0xC9L || g_7));
                    if (((-1L) == (safe_mul_func_int8_t_s_s((((p_52 || p_52) || (*l_97)) & func_61((l_113 | (l_113 && 0x4EABL)), func_61(func_61((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(p_52, p_52)), 5)) || g_9), l_124)), l_125), p_52))), 0x49L))))
                    {
                        int **l_126 = &g_8;
                        (*l_126) = l_97;

                        ;
                        (*l_112) = l_127;
                        g_8 = (*l_126);
                        (**l_111) = l_127;
                    }
                    else
                    {
                        (*l_112) = &g_14;

                        ;
                        (*l_112) = l_127;
                    }

                    ;
                    if ((*g_8))
                        continue;
                }
                for (l_113 = 0; (l_113 < 15); l_113 = safe_add_func_int16_t_s_s(l_113, 4))
                {
                    unsigned l_131 = 0x2F63B645L;
                    (*l_112) = l_130;

                    ;
                    if (l_131)
                        break;
                    for (g_14 = 0; (g_14 != (-13)); g_14 = safe_sub_func_uint16_t_u_u(g_14, 1))
                    {
                        return &g_14;


                    }
                }
                for (g_7 = 22; (g_7 < 14); g_7 = safe_sub_func_uint16_t_u_u(g_7, 2))
                {
                    unsigned char l_142 = 255UL;
                    char l_147 = 0x47L;
                    (*l_112) = l_130;

                    ;
                    if ((func_61(p_52, (safe_div_func_uint16_t_u_u(65531UL, (((void*)0 != &g_8) & l_141)))) != ((l_142 | ((g_9 || (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((g_7 >= l_142) | 0xA213425BL), 0x58L)) ^ l_147), 4294967295UL))) < g_14)) > (*l_97))))
                    {
                        int *l_148 = (void*)0;
                        const int l_157 = 0xDD51B90AL;
                        (*l_134) = (*l_97);
                        (**l_111) = &g_14;

                        ;
                        g_8 = l_148;

                        ;
                        (*l_97) = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((func_61(g_14, (0x82C5L | (func_61(l_157, p_52) <= ((1UL < l_147) > g_14)))) != g_9), p_52)) < 0x96L), p_52)), l_142)) ^ (*l_97));
                    }
                    else
                    {
                        (*l_127) = l_158;
                        if (p_52)
                            continue;
                        (*l_134) = (g_14 >= g_14);
                    }
                    if (p_52)
                        continue;
                    if (p_52)
                        continue;
                }
                for (l_124 = 0; (l_124 != 20); ++l_124)
                {
                    if (g_9)
                    {
                        unsigned char l_163 = 0UL;
                        l_163 = (safe_rshift_func_uint16_t_u_s(((void*)0 == &g_9), 9));
                        (*l_127) = func_61((((safe_lshift_func_uint16_t_u_u(l_163, 1)) && g_7) >= (safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((-1L), g_7)), p_52)) < l_172), (!((p_52 | (-3L)) < (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((*l_97), 0x85L)) | g_9), (*l_127))), 1L)) <= p_52) ^ g_9) ^ p_52))), p_52))))))), g_14);

                        ;
                        (**l_111) = (void*)0;
                        if (p_52)
                            continue;
                    }
                    else
                    {
                        int * const l_182 = &g_14;
                        return l_182;


                    }

                    ;
                    for (l_114 = 0; (l_114 <= 21); l_114 = safe_add_func_uint8_t_u_u(l_114, 1))
                    {
                        (*l_97) = 0x88D7AC8CL;
                        (**l_111) = (void*)0;
                        (*l_97) = (safe_unary_minus_func_uint8_t_u(g_9));
                        return l_97;


                    }
                }
            }
            else
            {
                (**l_111) = (*l_112);
            }
        }

        ;
        for (l_60 = 0; (l_60 != 44); l_60 = safe_add_func_int16_t_s_s(l_60, 1))
        {
            const int **l_230 = &l_190;
            int l_231 = (-6L);
            int l_323 = (-1L);
        }
    }
    else
    {
        char l_392 = 0xA2L;
        int *l_394 = &g_14;
        if ((safe_mul_func_int16_t_s_s(func_57(g_227, p_52), (((((safe_div_func_int16_t_s_s(g_9, ((+g_9) && (l_392 <= (p_52 | g_281))))) || (0x13L != 255UL)) == (*g_236)) != l_392) && (-1L)))))
        {
            unsigned short l_393 = 0xDE78L;
            (*g_226) = l_393;
            (***g_224) = (*g_226);
        }
        else
        {
            unsigned char l_407 = 0xD4L;
            int * const l_410 = (void*)0;
            volatile int *l_414 = &g_227;
            (*g_225) = (**g_224);
            if ((l_394 != (void*)0))
            {
                int *l_398 = (void*)0;
                int **l_399 = &l_394;
                for (l_392 = (-6); (l_392 > 14); ++l_392)
                {
                    unsigned l_397 = 0UL;
                    (*g_226) = ((*l_97) || func_57(func_61(g_14, l_397), (*l_394)));
                }
                (*l_399) = l_398;

                ;
            }
            else
            {
                const unsigned l_404 = 1UL;
                int *l_421 = &g_14;
                if ((g_7 | (((*l_394) > func_61(p_52, (safe_rshift_func_uint16_t_u_u((+(safe_add_func_uint32_t_u_u(((0x70L != func_61(l_404, g_227)) || ((l_407 && ((safe_mul_func_int8_t_s_s(l_404, 0x54L)) >= l_407)) && l_407)), (*l_97)))), (*l_394))))) | g_14)))
                {
                    int *l_411 = &g_14;
                    l_411 = l_410;

                    ;
                    (*l_394) = p_52;
                    (**g_224) = (*g_225);
                    if ((*l_97))
                    {
                        int * const l_412 = (void*)0;
                        int **l_413 = &l_394;
                        (*l_394) = 0L;
                        (*l_413) = l_412;

                        ;
                        l_414 = (**g_224);
                    }
                    else
                    {
                        int l_420 = 3L;
                        (***g_224) = ((*l_97) >= (65527UL > p_52));
                        (*l_394) = ((safe_add_func_uint8_t_u_u(l_404, (*l_414))) | (-1L));
                        l_420 = ((((safe_rshift_func_uint8_t_u_s((*l_394), func_61((func_61(p_52, p_52) & 5L), (safe_unary_minus_func_uint8_t_u(g_9))))) != (g_9 != (g_281 | l_404))) & g_7) > g_14);
                        l_421 = l_97;
                    }

                    ;
                }
                else
                {
                    unsigned l_427 = 0x4CC9D79BL;
                    if ((safe_lshift_func_int16_t_s_u((g_7 >= ((void*)0 == (*g_224))), 11)))
                    {
                        int **l_424 = &g_8;
                        (*l_424) = l_410;
                        (*g_225) = (**g_224);
                        (*l_414) = func_61((safe_add_func_int8_t_s_s(p_52, p_52)), l_427);
                        (**g_225) = func_57(p_52, (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0x47L, 2)), (-1L))));
                    }
                    else
                    {
                        (*l_97) = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_281, (*l_97))), l_427));
                    }
                    (*l_414) = func_57(p_52, (*l_97));
                    (*l_421) = func_61((func_57((&l_97 == (void*)0), p_52) <= p_52), g_9);
                }

                ;
                (**g_224) = (void*)0;

                ;
            }

            ;
            ;
        }

        ;
        ;
    }

    ;
    ;
    return &g_14;


}







static int func_57(unsigned short p_58, int p_59)
{
    int **l_68 = &g_8;
    int l_92 = 0x62EA1E67L;
    int *l_93 = &l_92;
    short l_94 = 0x6A22L;
    if (((void*)0 == l_68))
    {
        int **l_69 = &g_8;
        int *l_70 = &g_14;
        (*l_70) = (((void*)0 != l_69) && g_7);
        for (g_7 = 13; (g_7 > 9); g_7--)
        {
            const unsigned short l_83 = 0xC22AL;
            int *l_90 = &g_14;
            if (((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_9, 14)), (safe_mod_func_uint32_t_u_u(func_61(l_83, (func_61(g_7, l_83) & ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((0x7865L | (safe_div_func_uint8_t_u_u(((&g_9 != &g_9) == ((g_9 & g_14) == l_83)), g_9))), p_58)) > 0x4F5258DDL), 10)) && g_9))), p_59)))), g_9)), g_9)) ^ (*l_70)))
            {
                (*l_68) = l_90;

                ;
            }
            else
            {
                int ***l_91 = &l_69;
                (*l_91) = &l_70;

                ;
            }

            ;
        }

        ;
        (*l_68) = &p_59;

        ;
    }
    else
    {
        g_8 = &p_59;

        ;
        g_8 = &g_9;

        ;
    }

    ;
    (*l_93) = l_92;
    (*l_93) = func_61((**l_68), l_94);

    ;
    return p_58;
}







static unsigned char func_61(const int p_62, unsigned p_63)
{
    unsigned l_64 = 0x016FEFD5L;
    g_8 = (void*)0;

    ;
    return l_64;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
