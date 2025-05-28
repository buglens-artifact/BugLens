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



static unsigned char g_4 = 255UL;
static int g_42 = 0x6A1C3D07L;
static int *g_41 = &g_42;
static unsigned long long g_99 = 0xC9D536C3AC5B6CC6LL;
static int *g_106 = &g_42;
static int g_108 = 0x81B62C3DL;
static int g_244 = 0x929257CBL;
static int **g_569 = &g_106;
static int ***g_568 = &g_569;
static int *g_578 = &g_108;
static unsigned short g_650 = 0x2B99L;
static unsigned char g_658 = 0x06L;
static unsigned long long g_663 = 0x22D59BC4994EE8CALL;
static int g_776 = 1L;
static int **g_787 = &g_41;



static unsigned char func_1(void);
static int func_2(unsigned char p_3);
static unsigned func_11(char p_12, unsigned long long p_13, long long p_14);
static int func_16(char p_17, int p_18, int p_19);
static int func_22(int p_23, unsigned p_24, unsigned p_25, long long p_26, unsigned p_27);
static int func_28(short p_29, unsigned short p_30, long long p_31, long long p_32);
static int * func_38(int * p_39, unsigned char p_40);
static unsigned func_45(unsigned p_46, unsigned long long p_47, int * p_48, unsigned p_49, unsigned short p_50);
static unsigned long long func_57(int p_58, int * p_59, int p_60, long long p_61, int p_62);
static unsigned short func_70(char p_71, unsigned char p_72, unsigned p_73);
static unsigned char func_1(void)
{
    int *l_551 = &g_108;
    int **l_552 = &g_41;
    unsigned l_559 = 0x5BEE602BL;
    char l_574 = 5L;
    unsigned long long l_596 = 0x0303E7ECED4DCE4CLL;
    short l_647 = 0xF1C3L;
    unsigned char l_697 = 255UL;
    char l_777 = (-8L);
    int *l_779 = &g_244;
    char l_796 = 0x07L;
    (*l_551) = func_2(g_4);

    ;

    (*l_552) = &g_108;

    ;
    if ((((((safe_rshift_func_int8_t_s_s(g_4, 1)) != g_4) == 9L) == (+(safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((**l_552) && 0UL), l_559)), ((**l_552) != 0xF1F1L))))) > 0x3344512BL))
    {
        (*l_552) = (*l_552);
    }
    else
    {
        int ***l_567 = (void*)0;
        int l_575 = 0x39CF4BC8L;
        unsigned short l_579 = 0xA767L;
        unsigned char l_625 = 0x49L;
        int ***l_665 = &l_552;
        int *l_666 = &g_42;
        int l_707 = (-10L);
        int l_780 = 0xBF445D05L;
        if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_add_func_int32_t_s_s((*g_41), l_575)))), ((safe_mod_func_int64_t_s_s((((*l_552) != g_578) | g_99), g_42)) == (*g_41)))), l_579)))
        {
            (*g_569) = (*l_552);

            ;
        }
        else
        {
            int l_584 = (-1L);
            int ***l_608 = &l_552;
            (*l_552) = (*l_552);
            for (l_574 = (-26); (l_574 != (-13)); l_574 = safe_add_func_uint16_t_u_u(l_574, 9))
            {
                (**g_568) = (void*)0;

                ;
            }


            for (g_244 = (-19); (g_244 <= (-9)); ++g_244)
            {
                unsigned l_595 = 0x64F65712L;
                int l_597 = (-10L);
                unsigned char l_624 = 1UL;
                int ***l_631 = &l_552;
                l_597 = (l_584 <= (safe_sub_func_uint64_t_u_u(((**l_552) != func_22(l_584, (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s((g_108 & l_596), (*l_551))) > 1L) | g_42), l_595)), g_99)), g_42, g_244, l_575)), l_595)));
            }
            (***l_608) = (*g_578);
        }


        (*l_666) |= (*l_551);
        if ((*g_578))
        {
            long long l_669 = 8L;
            int l_680 = (-7L);
            int *l_704 = (void*)0;
            for (g_108 = 0; (g_108 > 14); g_108++)
            {
                unsigned l_685 = 0x6ABB6672L;
                (*l_666) = (*g_578);
                (*l_666) |= l_669;
                (*l_666) = (*g_578);
                if ((*g_41))
                {
                    char l_670 = 0L;
                    int l_694 = 0x3380BABCL;
                    l_670 = 0x56880B5BL;
                    if (((safe_mod_func_uint8_t_u_u((g_663 > (safe_rshift_func_int8_t_s_u((g_663 && (**l_552)), g_99))), g_4)) | (safe_div_func_int32_t_s_s(l_670, (+g_108)))))
                    {
                        int *l_679 = &g_244;
                        l_680 |= (safe_add_func_int64_t_s_s(2L, ((void*)0 != l_679)));
                    }
                    else
                    {
                        unsigned l_681 = 9UL;
                        int *l_682 = &g_42;
                        l_681 = (g_99 <= g_650);
                        (*g_569) = &l_680;

                        ;
                        (*l_552) = l_682;

                        ;
                    }
                    for (l_647 = 0; (l_647 != (-7)); l_647--)
                    {
                        if (l_685)
                            break;
                    }
                    l_694 = (safe_div_func_uint8_t_u_u(((*g_41) & (((func_16((***l_665), ((*g_578) <= (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(1L, (func_16(func_22((&g_569 == (void*)0), (*l_666), g_108, (*l_551), l_670), l_670, l_680) || g_42))), g_658)), 15))), (**l_552)) < g_108) ^ g_42) ^ (*g_578))), 0xD9L));
                }
                else
                {
                    for (g_42 = 23; (g_42 < (-16)); g_42 = safe_sub_func_int64_t_s_s(g_42, 8))
                    {
                        if (l_697)
                            break;
                    }
                    for (l_579 = 0; (l_579 != 6); l_579 = safe_add_func_int16_t_s_s(l_579, 9))
                    {
                        (**l_665) = &g_244;

                        ;
                        (**l_665) = &g_244;
                    }
                    for (l_669 = (-2); (l_669 <= 18); ++l_669)
                    {
                        return g_663;


                    }
                }
            }

            ;

            (*g_578) = 0xAEA5B977L;
            (*l_551) = (*l_551);
            for (l_680 = 0; (l_680 < 8); ++l_680)
            {
                int l_734 = 0L;
                int *l_735 = &g_108;
                (**l_665) = &l_680;

                ;
                if ((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((4294967295UL < (l_735 == l_735)), func_22((*l_666), (*l_735), (safe_mod_func_int32_t_s_s((*g_41), (*l_551))), (&g_569 == (void*)0), (**l_552)))) == g_658) != g_108), (*l_735))) ^ 0L), 0UL)))
                {
                    int l_750 = 0x9FBCA9A8L;
                    int *l_763 = (void*)0;
                    (*l_666) |= ((safe_mod_func_int16_t_s_s(g_108, func_16((safe_rshift_func_uint16_t_u_u(l_750, 4)), (safe_lshift_func_uint16_t_u_s(0xE244L, (safe_rshift_func_int8_t_s_s((0UL < (***l_665)), ((*g_568) != (void*)0))))), ((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_658, ((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((void*)0 != l_763), (*g_41))) | g_658), g_244)) || 4UL))), g_99)) && g_4) ^ g_650) ^ 0x4A8C72708A86E576LL)))) | 0x9D8CL);
                    (*l_666) |= (g_650 < g_108);
                }
                else
                {
                    int *l_778 = &g_42;
                    int *l_781 = &l_680;
                    int *l_784 = &l_680;
                    l_778 = (*l_552);

                    ;
                    l_704 = l_779;

                    ;
                    (*g_578) &= l_780;
                    (*l_552) = l_784;
                }
                (*g_578) = (((g_776 == g_663) != (g_4 != ((safe_mod_func_uint32_t_u_u(((void*)0 != g_787), g_4)) || (((safe_sub_func_int8_t_s_s(g_776, (*l_779))) != 0L) > 0UL)))) <= 1UL);
            }

            ;
            ;
        }
        else
        {
            (*l_666) = (***l_665);
            (**l_665) = (*l_552);
        }


        (*g_578) ^= (*l_779);
    }



    for (l_574 = 0; (l_574 >= 17); ++l_574)
    {
        (*g_578) = 0xB0B3BAEAL;
    }
    return g_108;
}







static int func_2(unsigned char p_3)
{
    unsigned long long l_15 = 5UL;
    char l_35 = 0x5DL;
    int l_550 = (-9L);
    l_550 = ((((safe_lshift_func_int16_t_s_u((p_3 || (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((g_4 < func_11((l_15 & (func_16(g_4, l_15, (safe_mul_func_int16_t_s_s((g_4 != func_22(((0x720D7006L || func_28(g_4, (safe_rshift_func_uint8_t_u_u(((l_35 <= p_3) && 0x063D62A0L), l_35)), l_15, g_4)) == p_3), p_3, l_15, l_15, l_15)), 0xF984L))) ^ 0x935403E4L)), l_15, g_4)) <= (-1L)), p_3)), g_4))), 10)) & g_99) >= 0x82AAL) && l_15);

    ;

    return l_550;
}







static unsigned func_11(char p_12, unsigned long long p_13, long long p_14)
{
    int **l_443 = &g_106;
    int ***l_442 = &l_443;
    int ***l_448 = &l_443;
    unsigned l_453 = 0xC3AFE4F7L;
    char l_461 = 0x7DL;
    long long l_464 = 0L;
    int l_491 = 0L;
    (*l_442) = &g_106;
    for (g_42 = (-30); (g_42 < (-9)); ++g_42)
    {
        (*l_443) = &g_42;

        ;
    }
    g_42 = (g_42 && (!((safe_mod_func_int8_t_s_s(g_4, p_12)) & p_12)));
    if ((p_12 & (safe_div_func_int64_t_s_s(p_14, p_13))))
    {
        unsigned short l_471 = 0xEDBEL;
        unsigned char l_475 = 0x9DL;
        int **l_476 = &g_106;
        int l_522 = (-1L);
        unsigned l_532 = 18446744073709551615UL;
        int *l_545 = &l_491;
        for (g_108 = 25; (g_108 > 28); ++g_108)
        {
            unsigned l_472 = 0x4D3AF96CL;
            int l_489 = (-1L);
            int l_540 = (-1L);
            if (p_13)
            {
                unsigned short l_481 = 65535UL;
                int l_494 = 0xBAE10A69L;
                if ((l_475 | 0xF4L))
                {
                    l_476 = (*l_442);
                }
                else
                {
                    unsigned l_488 = 0UL;
                    int l_490 = 0L;
                    if ((safe_mul_func_uint8_t_u_u(g_244, p_13)))
                    {
                        l_490 = p_14;
                    }
                    else
                    {
                        (*l_476) = &g_244;

                        ;
                        if ((**l_476))
                            continue;
                    }
                }
                if (p_14)
                    break;
                l_491 |= l_472;
                for (p_12 = 0; (p_12 <= (-21)); p_12 = safe_sub_func_int8_t_s_s(p_12, 5))
                {
                    (**l_442) = &g_42;

                    ;
                    (*l_476) = &g_244;

                    ;
                    l_494 &= (*g_106);
                    if ((*g_106))
                        break;
                }
            }
            else
            {
                int *l_495 = &l_491;
                (*l_495) = (p_12 <= p_14);
                for (l_471 = 4; (l_471 >= 7); l_471++)
                {
                    if (l_489)
                        break;
                    return p_13;
                }
                for (l_471 = (-12); (l_471 < 55); l_471++)
                {
                    int **l_514 = (void*)0;
                    for (l_491 = 0; (l_491 <= 14); l_491++)
                    {
                        unsigned char l_515 = 1UL;
                        int *l_516 = (void*)0;
                        int *l_517 = &g_244;
                        (*l_517) = ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(3UL, ((~func_22(p_14, (!(safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0xCEB2A3E3L, g_4)), (!g_42)))), g_99, (safe_add_func_uint32_t_u_u((((l_514 == (void*)0) == 255UL) < p_13), 0x2D73AC75L)), g_99)) || g_99))), 0)), p_12)) != l_515);
                        (*l_517) = p_12;
                    }
                }
                l_522 = func_22((*l_495), p_14, (((((*l_442) != (void*)0) | ((p_12 | g_4) && (safe_sub_func_int32_t_s_s((*l_495), (safe_rshift_func_uint16_t_u_s(65535UL, func_22(((*l_495) <= g_42), (*l_495), p_14, g_244, g_108))))))) & p_12) | 1UL), p_12, p_13);
            }
            for (l_464 = 6; (l_464 > (-24)); l_464 = safe_sub_func_uint8_t_u_u(l_464, 1))
            {
                int l_529 = 0x85664476L;
                int *l_533 = &l_491;
                (*l_533) ^= func_16((((0xBD1DL > p_14) > 9L) > ((((void*)0 != &l_443) > (p_13 || ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((!l_529) && func_22((safe_lshift_func_uint8_t_u_u(l_532, 6)), g_108, g_244, g_99, p_14)), l_472)), p_12)) > l_472))) && 0x531F5AF7DCC59E95LL)), g_4, g_244);
                if (p_13)
                    break;
            }
            for (l_475 = 3; (l_475 != 53); l_475 = safe_add_func_uint64_t_u_u(l_475, 3))
            {
                for (l_464 = 0; (l_464 > 27); l_464 = safe_add_func_uint64_t_u_u(l_464, 8))
                {
                    if (p_14)
                    {
                        long long l_538 = 6L;
                        int *l_539 = &g_108;
                        unsigned l_541 = 18446744073709551606UL;
                        if (l_538)
                            break;
                        l_540 = (((void*)0 != l_539) | (p_14 | (((void*)0 != &l_443) || g_108)));
                        (**l_448) = &l_540;

                        ;
                        l_541 = p_12;
                    }
                    else
                    {
                        return p_13;


                    }

                    ;
                }
                (*l_448) = l_476;
                for (p_14 = (-3); (p_14 > (-21)); --p_14)
                {
                    int *l_544 = &l_491;
                    (*l_544) |= 0x48D094B7L;
                    (*l_544) = l_489;
                }
            }


        }


        (*l_545) = ((&g_42 == (void*)0) || p_12);
        for (p_12 = 0; (p_12 > 16); ++p_12)
        {
            (**l_448) = &g_244;

            ;
            return g_244;
        }
    }
    else
    {
        long long l_548 = 0L;
        int *l_549 = &g_244;
        (*l_549) |= l_548;
        l_549 = l_549;
    }


    return g_4;
}







static int func_16(char p_17, int p_18, int p_19)
{
    return p_17;
}







static int func_22(int p_23, unsigned p_24, unsigned p_25, long long p_26, unsigned p_27)
{
    long long l_441 = 0xA200067A72BEE661LL;
    p_23 = (+(safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((&g_42 != &g_108), 4)), l_441)));
    return p_27;
}







static int func_28(short p_29, unsigned short p_30, long long p_31, long long p_32)
{
    unsigned l_36 = 18446744073709551615UL;
    int l_37 = 0xF6A191A8L;
    long long l_64 = 0x5452E2CC7BC50133LL;
    int *l_302 = (void*)0;
    if (l_36)
    {
        l_37 = g_4;
    }
    else
    {
        long long l_63 = 0xE3B00B7228D029B4LL;
        int *l_135 = (void*)0;
        int **l_293 = &l_135;
        unsigned short l_410 = 0xC31FL;
        (*l_293) = func_38(g_41, (safe_div_func_uint32_t_u_u(func_45(g_4, ((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((-8L), (safe_sub_func_uint64_t_u_u((&g_42 == &l_37), func_57((*g_41), &g_42, (*g_41), l_63, l_64))))), 0xE2BC1352L)) > g_4), l_135, p_31, g_99), 0xA380BAD3L)));

        ;

        ;
        (*l_293) = &g_244;

        ;
        for (p_31 = (-27); (p_31 >= 1); p_31++)
        {
            long long l_296 = (-1L);
            int *l_299 = &g_108;
            unsigned char l_348 = 0UL;
            unsigned long long l_419 = 0x424AEB1D1E02F020LL;
            if (l_37)
                break;
            if ((g_42 <= 0x1039E3DCDE23EACFLL))
            {
                unsigned l_330 = 9UL;
                (*l_299) = (((((l_296 < ((void*)0 == &g_41)) == (&l_135 != (void*)0)) != (((void*)0 == &l_135) >= (g_108 >= (*l_299)))) && l_64) || g_99);
                for (l_36 = 4; (l_36 > 15); l_36 = safe_add_func_uint16_t_u_u(l_36, 7))
                {
                    l_302 = &g_42;

                    ;
                }
                if ((safe_sub_func_int32_t_s_s((&l_135 != &l_299), (*l_299))))
                {
                    unsigned l_331 = 0xCCDBE3E0L;
                    for (g_244 = (-5); (g_244 < 15); ++g_244)
                    {
                        int l_321 = 1L;
                        (*l_299) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((p_32 != p_31), (p_30 < (safe_lshift_func_uint8_t_u_s(1UL, 4))))), (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((*l_135), (safe_sub_func_uint32_t_u_u(g_42, (l_331 != 0xF703C2C6L))))) < p_32), g_42))));
                        (*l_293) = l_299;

                        ;
                        (*l_293) = l_299;
                    }
                    (*l_135) = 1L;
                }
                else
                {
                    int *l_339 = &g_42;
                    (*l_293) = &g_244;

                    ;
                    l_37 |= ((safe_sub_func_int16_t_s_s(((*l_299) || p_32), g_244)) == g_42);
                    for (l_296 = 0; (l_296 == (-25)); l_296 = safe_sub_func_int32_t_s_s(l_296, 4))
                    {
                        long long l_351 = 0x2315EEC50ED1BE1ELL;
                        (*l_299) |= p_32;
                        if (l_351)
                            break;
                    }
                }
                (*l_299) ^= (safe_add_func_int8_t_s_s(g_42, g_4));
            }
            else
            {
                short l_356 = (-8L);
                int *l_379 = &g_108;
                (*l_299) = (safe_add_func_uint8_t_u_u(g_108, g_108));
                if (p_30)
                {
                    int *l_361 = &g_42;
                    l_37 = (l_361 == &l_37);
                    if (p_32)
                    {
                        unsigned char l_362 = 0xD7L;
                        (*l_135) = l_362;
                        (*l_299) &= (safe_rshift_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(p_31, (safe_sub_func_uint32_t_u_u(l_356, (safe_div_func_uint64_t_u_u((p_31 >= l_362), (safe_mod_func_int8_t_s_s((&l_135 != (void*)0), l_362)))))))) ^ p_30) > g_99) ^ 0xC7C0L), 9));
                    }
                    else
                    {
                        (*l_135) = (p_31 && p_31);
                    }
                }
                else
                {
                    int *l_380 = &g_244;
                    l_380 = l_379;

                    ;
                    (*l_379) = (safe_add_func_uint8_t_u_u((&g_41 == &l_379), (*l_380)));
                    (*l_380) = (safe_mul_func_uint16_t_u_u(0xA2EBL, (safe_div_func_int8_t_s_s(g_99, 1UL))));
                    return (*l_299);
                }
            }
            for (l_37 = 7; (l_37 > (-5)); l_37 = safe_sub_func_uint8_t_u_u(l_37, 4))
            {
                int l_391 = 0xA8308682L;
                int l_413 = 0xA048C49FL;
                if ((safe_mul_func_uint8_t_u_u(255UL, p_31)))
                {
                    int *l_396 = &g_108;
                    (*l_299) ^= p_30;
                    (**l_293) = (((safe_lshift_func_int16_t_s_u(p_30, 13)) ^ p_32) > (-1L));
                    if ((0x56B6975B69B9C6CFLL >= 0xF825A526491130A6LL))
                    {
                        unsigned long long l_401 = 0x4AEF053EE6E3BA50LL;
                        (**l_293) = (p_30 != (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, (l_401 != p_31))), l_391)));
                        return l_391;
                    }
                    else
                    {
                        (**l_293) = (l_391 >= (safe_lshift_func_int8_t_s_s(g_4, 5)));
                        l_413 |= ((safe_add_func_uint32_t_u_u(l_410, (((l_391 || g_244) || (*l_396)) & (safe_sub_func_int8_t_s_s(0xB6L, p_30))))) || p_32);
                        return l_391;
                    }
                }
                else
                {
                    unsigned l_414 = 0xA0BC8CE9L;
                    (*l_299) = (l_414 <= (((0x48486F48L == ((safe_lshift_func_uint8_t_u_u(p_32, g_244)) <= 1UL)) < g_4) < p_31));
                }
                (*l_299) |= p_29;
                (*l_135) = g_4;
            }
            (*l_299) = 1L;
        }

        ;
        ;
        if ((((safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_244, ((safe_div_func_uint32_t_u_u((~(((+((g_99 < (0x766DL != ((!(safe_add_func_int64_t_s_s(((&l_37 != (void*)0) == (((((safe_lshift_func_uint8_t_u_s((g_99 & g_244), 7)) | p_29) || g_244) || (*l_135)) > p_30)), 0UL))) != p_31))) | g_108)) == g_108) != p_29)), g_4)) >= 4UL))) ^ (**l_293)), p_31)) >= p_31) != p_29))
        {
            int *l_434 = &g_42;
            (*l_293) = l_434;

            ;
            for (l_64 = (-16); (l_64 < 20); l_64++)
            {
                (*l_293) = &g_244;

                ;
            }

            ;
            return g_42;
        }
        else
        {
            (*l_135) ^= (p_32 > (!p_30));
        }
    }

    ;

    ;
    return p_32;
}







static int * func_38(int * p_39, unsigned char p_40)
{
    short l_140 = (-4L);
    int *l_167 = &g_42;
    int l_200 = 0x2E268365L;
    char l_292 = 0xB1L;
    if (((l_140 == l_140) & (safe_rshift_func_uint8_t_u_u(p_40, func_70(((safe_div_func_uint64_t_u_u((g_108 & ((p_39 == (void*)0) >= func_70(p_40, (safe_rshift_func_int16_t_s_u(0xBC6BL, g_4)), g_4))), l_140)) && p_40), p_40, g_4)))))
    {
        char l_149 = 6L;
        int *l_158 = (void*)0;
        int **l_181 = (void*)0;
        unsigned l_194 = 0xEDD471D0L;
        int l_258 = 0x8762EDC8L;
        (*g_41) = (g_99 & func_70(p_40, ((*g_41) <= (safe_add_func_uint16_t_u_u((l_149 || l_140), 65533UL))), g_108));
        if (l_140)
        {
            unsigned l_153 = 4UL;
            int *l_164 = &g_42;
            if ((l_149 <= p_40))
            {
                int **l_150 = &g_41;
                int *l_165 = &g_108;
                (*l_150) = p_39;
                if (((safe_mod_func_uint8_t_u_u(p_40, 253UL)) != ((p_40 || l_153) ^ func_45((0xACA8A92953C3AE4ALL & l_140), ((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((*p_39) <= ((void*)0 != p_39)), (*g_41))) > l_140) || 0x51F1203DL), 247UL)) > l_153), p_39, l_140, l_149))))
                {
                    unsigned short l_161 = 0x3933L;
                    (*p_39) = func_45(g_99, p_40, l_158, (0xE275L <= ((-1L) != (func_45((((void*)0 != &g_106) && (safe_lshift_func_uint8_t_u_s(l_161, (safe_mul_func_uint8_t_u_u(func_45((l_140 > p_40), l_153, p_39, g_99, p_40), p_40))))), g_99, p_39, g_4, (**l_150)) >= (-1L)))), g_42);
                }
                else
                {
                    (*l_150) = l_164;
                    (*l_150) = l_165;

                    ;
                    (*p_39) = 1L;
                }

                ;
            }
            else
            {
                int l_166 = 1L;
                int **l_168 = &l_167;
                (*g_106) = (*g_41);
                l_166 &= (p_40 < l_140);
                (*l_168) = l_167;
            }

            ;
        }
        else
        {
            int **l_169 = &g_106;
            (*l_169) = &g_42;
            for (p_40 = (-23); (p_40 > 49); ++p_40)
            {
                unsigned long long l_172 = 18446744073709551607UL;
                unsigned l_191 = 0x82CCC809L;
                l_158 = p_39;

                ;
                l_172 &= (g_4 & g_42);
                for (g_42 = (-18); (g_42 < 23); g_42 = safe_add_func_int8_t_s_s(g_42, 1))
                {
                    unsigned l_186 = 6UL;
                    if ((((safe_sub_func_int32_t_s_s((**l_169), (safe_div_func_int32_t_s_s((*p_39), ((safe_mod_func_int64_t_s_s((*l_167), ((g_42 != 0x7AA7700AL) & (&l_167 == l_181)))) && ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(246UL, p_40)), 0xF77AL)) && 0xD90CL)))))) > l_186) == 18446744073709551610UL))
                    {
                        return &g_108;


                    }
                    else
                    {
                        return p_39;


                    }
                }
                (*g_41) = (safe_mul_func_uint8_t_u_u(((((**l_169) | func_45((0x6EL && (safe_div_func_uint64_t_u_u(func_45((+g_42), p_40, &g_108, (**l_169), (p_40 != (**l_169))), g_42))), l_191, &g_42, p_40, l_191)) || p_40) <= p_40), p_40));
            }

            ;
            if (((g_99 ^ (~func_45((p_40 && (safe_rshift_func_int16_t_s_s((**l_169), 5))), g_99, &g_42, l_194, (**l_169)))) & (**l_169)))
            {
                int *l_205 = &l_200;
                if (((safe_unary_minus_func_uint16_t_u(p_40)) <= (**l_169)))
                {
                    (*l_167) = (-5L);
                    (*g_41) = func_45(g_4, g_42, p_39, (*l_167), (**l_169));
                    (*g_106) = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_108, p_40)), g_99));
                    l_200 &= (*p_39);
                }
                else
                {
                    unsigned short l_201 = 0x2441L;
                    if ((*g_106))
                    {
                        (*g_106) &= ((void*)0 != (*l_169));
                    }
                    else
                    {
                        int *l_204 = &l_200;
                        (*g_41) = (((l_201 && (safe_rshift_func_uint8_t_u_u(p_40, 6))) && p_40) >= g_108);
                        (*g_41) = (l_201 == g_108);
                        (*l_167) = ((l_169 == &g_41) > ((1L == func_45((0x0D6F0381F6D5568ELL <= 0xC055B41805AE8A67LL), ((-8L) != (l_204 != (void*)0)), &l_200, g_99, (*l_167))) > g_4));
                    }
                    (*l_169) = l_205;

                    ;
                    p_39 = &g_108;

                    ;
                }

                ;
                ;
                if ((**l_169))
                {
                    unsigned short l_206 = 1UL;
                    unsigned long long l_237 = 0xF4DCE59F5865897DLL;
                    (*l_169) = &g_42;

                    ;
                    (*p_39) |= l_206;
                    if ((safe_rshift_func_int8_t_s_u(func_70(g_42, l_206, (*l_205)), (g_4 || ((-2L) == (safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((&g_41 == (void*)0), (0UL == g_108))) >= 1UL) & g_4), p_40)))))))
                    {
                        unsigned char l_236 = 255UL;
                        (*g_41) = (safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_108 & (safe_rshift_func_int8_t_s_s(func_70((safe_lshift_func_uint8_t_u_s(((p_40 & (safe_rshift_func_uint8_t_u_u(0xAFL, 4))) <= (safe_unary_minus_func_int64_t_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((0xA6A314E8L == (safe_lshift_func_uint16_t_u_u(p_40, (((func_70(p_40, (*l_167), g_4) == (-2L)) && 0x2FB8L) & 0x92AA6575L)))), g_99)), p_40)) && p_40)))), 4)), g_99, g_108), p_40))), g_99)), l_236)) & g_108) == p_40), g_99)) <= p_40), l_237));
                    }
                    else
                    {
                        int *l_238 = &l_200;
                        (*l_169) = l_238;

                        ;
                    }

                    ;
                    (*l_169) = p_39;

                    ;
                }
                else
                {
                    int *l_240 = &g_108;
                    (*l_240) ^= (((g_42 && p_40) | 0xBFB94051L) > ((((g_4 < g_99) && (3UL | (*g_41))) && (safe_unary_minus_func_int64_t_s(1L))) >= (*l_205)));
                    (*l_169) = (*l_169);
                    (*l_205) &= (*p_39);
                    for (g_108 = (-22); (g_108 <= 26); g_108++)
                    {
                        int *l_243 = &g_244;
                        int l_253 = 7L;
                        (*l_243) |= (*g_106);
                        l_253 |= ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_42, ((0xC4BF40DEF69FDC44LL != p_40) && (safe_mul_func_uint16_t_u_u(((void*)0 == p_39), (*l_243)))))), (safe_mod_func_uint64_t_u_u((&g_41 != &g_41), p_40)))) || (*l_240));
                    }
                }

                ;
                if ((safe_add_func_uint32_t_u_u(g_99, ((safe_lshift_func_int8_t_s_u(g_42, p_40)) >= p_40))))
                {
                    (*g_41) |= ((void*)0 == &g_41);
                }
                else
                {
                    long long l_263 = 0L;
                    int l_264 = 0xDD58F199L;
                    l_264 |= (safe_sub_func_int32_t_s_s(l_263, (*l_205)));
                }
            }
            else
            {
                int *l_265 = &l_258;
                (*l_265) |= (*g_41);
                if ((&l_200 == (void*)0))
                {
                    int l_270 = 0x87C90910L;
                    for (g_42 = 18; (g_42 > (-27)); --g_42)
                    {
                        int *l_289 = &l_270;
                        (*l_265) = (safe_div_func_int32_t_s_s(func_45((**l_169), g_4, &l_200, p_40, l_270), (*p_39)));
                        (*l_265) ^= (safe_mod_func_uint64_t_u_u((g_4 | (((safe_div_func_int32_t_s_s(((0xFF8BL && (safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(p_40, (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_270, 12)), (((((-1L) <= ((safe_lshift_func_uint16_t_u_u(g_244, 12)) < func_45((**l_169), (safe_mul_func_int8_t_s_s((l_289 != (void*)0), p_40)), (*l_169), p_40, (*l_167)))) != (*l_289)) != g_99) <= 0x4A4212A5L))))), g_42)), g_4))) < 0x90L), 0x83C7EF23L)) ^ p_40) != 1L)), (*l_167)));
                    }
                }
                else
                {
                    return &g_108;


                }
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        unsigned char l_290 = 254UL;
        p_39 = &l_200;

        ;
        l_290 ^= (*p_39);
        g_41 = (void*)0;

        ;
    }

    ;
    ;
    ;
    l_292 = (safe_unary_minus_func_uint32_t_u(g_4));
    return &g_244;



}







static unsigned func_45(unsigned p_46, unsigned long long p_47, int * p_48, unsigned p_49, unsigned short p_50)
{
    int *l_136 = &g_42;
    int **l_137 = &l_136;
    int *l_138 = &g_108;
    int l_139 = 0xAF4752A8L;
    (*l_137) = l_136;
    (*l_137) = l_138;

    ;
    (**l_137) |= (*g_106);
    (*l_137) = (*l_137);
    return l_139;
}







static unsigned long long func_57(int p_58, int * p_59, int p_60, long long p_61, int p_62)
{
    int l_65 = 6L;
    int *l_107 = &g_108;
    int *l_128 = &l_65;
    (*l_107) ^= (((((p_61 == ((void*)0 != &g_42)) < l_65) && (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((0UL || func_70(p_62, g_42, ((void*)0 != &l_65))), l_65)), 5))) <= g_99) == 0xB1ADF13FL);
    (*l_128) ^= (safe_mod_func_uint16_t_u_u(((*l_107) >= (*l_107)), (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u(func_70(g_42, (safe_mul_func_int8_t_s_s((*l_107), (safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(p_62, (safe_add_func_int64_t_s_s((g_108 | ((p_58 & (*l_107)) && ((((*l_107) & (*l_107)) >= 0xAC07L) & 0xA8832714BD486562LL))), g_99)))), g_4)), g_99)) != p_62), g_42)) || 0xD5A1AA06L), p_61)))), (*l_107)), p_60))))));
    (*p_59) = ((safe_div_func_uint16_t_u_u((!(0xC24AL <= ((safe_mul_func_uint16_t_u_u((!(*l_128)), (safe_lshift_func_uint16_t_u_s((func_70(g_99, (&l_65 == &p_60), ((&p_62 == &l_65) >= ((void*)0 != &l_65))) | (*l_128)), g_108)))) || g_42))), g_99)) || 0x10E3L);
    return p_60;
}







static unsigned short func_70(char p_71, unsigned char p_72, unsigned p_73)
{
    unsigned l_80 = 0x0B8B0E31L;
    int l_81 = 0x293D0AE4L;
    int *l_98 = &g_42;
    (*g_41) = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_80, (9L & ((((!(l_81 || (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_81, 5)), (((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((l_81 && (safe_mul_func_uint16_t_u_u(0x6285L, (8UL < 18446744073709551607UL)))), (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((void*)0 == l_98), g_99)) == p_71), 6)) || p_73), 254UL)))) <= g_99), 15)) != 0xF2L) != (-2L)) & 0xB63CL) && 0xB6CDL))))) > 0x08C8L) | (*l_98)) > (*l_98))))), g_99)), g_4)) != g_99);
    for (p_73 = 0; (p_73 == 59); p_73++)
    {
        int *l_104 = &g_42;
        int **l_105 = &l_104;
        (*l_98) = (safe_lshift_func_uint16_t_u_s(p_73, (*l_98)));
        (*l_105) = l_104;
        g_106 = (*l_105);
    }
    (*l_98) = (p_71 | p_73);
    return g_99;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
