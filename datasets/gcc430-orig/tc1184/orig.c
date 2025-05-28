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
   int f0;
   signed f1 : 26;
   unsigned f2 : 6;
   unsigned f3;
   signed : 0;
   char f4;
   short f5;
   int f6;
};


static int *g_6 = (void*)0;
static struct S0 g_32 = {0xB818F8F6L,-522,4,1UL,-2L,-1L,8L};
static struct S0 g_77 = {-1L,-3131,2,0x569F1341L,0x0BL,0xAC45L,0L};
static struct S0 g_89 = {0L,-1342,3,4294967295UL,-1L,0L,1L};
static struct S0 ***g_262 = (void*)0;
static int **g_380 = &g_6;
static int ***g_379 = &g_380;
static int *g_423 = &g_77.f0;
static struct S0 *g_425 = &g_89;
static unsigned short g_498 = 0x5C9FL;
static int g_500 = 0xC265BF0EL;
static unsigned char g_536 = 0x48L;
static short g_565 = 0xF40AL;
static short g_712 = 1L;



static unsigned short func_1(void);
static int * func_2(int * p_3, char p_4, int * p_5);
static struct S0 func_9(unsigned p_10, int p_11, int * p_12);
static char func_13(char p_14, struct S0 p_15, int * p_16, int p_17);
static struct S0 func_18(int * p_19, unsigned short p_20, int * p_21);
static int * func_22(int p_23);
static struct S0 * func_25(unsigned char p_26, unsigned short p_27, struct S0 * p_28, unsigned char p_29);
static int * func_37(unsigned char p_38, struct S0 * p_39, int * p_40, unsigned p_41);
static unsigned func_43(struct S0 p_44, int * p_45);
static struct S0 func_52(short p_53, int * p_54, int p_55, int p_56, struct S0 * p_57);
static unsigned short func_1(void)
{
    short l_7 = 0x8C44L;
    unsigned char l_8 = 0xBCL;
    struct S0 *l_757 = (void*)0;
    struct S0 *l_758 = &g_77;
    (*g_380) = func_2(g_6, l_7, (((g_6 == (void*)0) , l_8) , g_6));


    for (g_77.f3 = (-13); (g_77.f3 > 54); ++g_77.f3)
    {
        int l_756 = 0xD6772546L;
        return l_756;
    }
    (*l_758) = g_77;
    return l_7;
}







static int * func_2(int * p_3, char p_4, int * p_5)
{
    unsigned l_24 = 0xF3004570L;
    struct S0 **l_441 = (void*)0;
    int *l_499 = &g_500;
    struct S0 l_753 = {0xFB8A5CDAL,-3939,2,0x29FA6174L,1L,0xEC59L,0x4CD57BB3L};
    l_753 = func_9((func_13(p_4, func_18(func_22(l_24), p_4, ((l_24 , (&g_380 == ((safe_sub_func_uint8_t_u_u((l_441 != (void*)0), ((safe_add_func_uint16_t_u_u((1UL ^ l_24), 0L)) <= 0x45E1269DL))) , &g_380))) , (void*)0)), l_499, (*l_499)) < (-4L)), l_24, p_5);



    return p_5;


}







static struct S0 func_9(unsigned p_10, int p_11, int * p_12)
{
    unsigned l_601 = 0UL;
    struct S0 l_602 = {0x3B070D76L,-4453,4,4294967293UL,0xC1L,0xC87DL,0x1211DD32L};
    int *l_603 = &g_77.f6;
    int l_634 = 3L;
    struct S0 l_636 = {8L,-2834,2,0x05EF7F2AL,0x2BL,0L,1L};
    unsigned char l_666 = 0UL;
    int **l_697 = (void*)0;
    struct S0 l_706 = {0x3862BAEEL,-5897,1,4294967295UL,0xF8L,-5L,1L};
    struct S0 **l_738 = (void*)0;
    for (g_89.f3 = 0; (g_89.f3 >= 39); g_89.f3 = safe_add_func_uint32_t_u_u(g_89.f3, 8))
    {
        unsigned char l_598 = 255UL;
        int *l_604 = &g_500;
        (*g_423) = (safe_lshift_func_int16_t_s_s(((+l_598) , (safe_sub_func_uint32_t_u_u(l_601, (g_565 , func_43(l_602, l_603))))), (p_10 >= func_43(func_18(l_603, p_11, l_604), l_603))));
        (*l_603) = p_10;
    }
    if ((*l_603))
    {
        struct S0 *l_610 = &g_89;
        int *l_633 = (void*)0;
        struct S0 **l_685 = &g_425;
        struct S0 ***l_684 = &l_685;
        int *l_717 = (void*)0;
        for (g_32.f5 = 0; (g_32.f5 <= (-4)); --g_32.f5)
        {
            (*g_423) = (-8L);
            if ((*g_423))
                break;
        }
        if ((*l_603))
        {
            unsigned l_609 = 18446744073709551615UL;
            struct S0 l_611 = {0x6F1C64A7L,-1760,5,0x9C26405DL,0x47L,0x4FA0L,0x7A45CF17L};
            unsigned char l_635 = 255UL;
            (*g_423) = p_10;
            for (l_602.f5 = 0; (l_602.f5 < (-24)); l_602.f5 = safe_sub_func_uint16_t_u_u(l_602.f5, 7))
            {
                unsigned l_612 = 0x05192ADFL;
                struct S0 *l_619 = &g_89;
                int *l_620 = (void*)0;
                (**g_379) = l_603;

                ;
                (*g_6) = (((((safe_add_func_uint8_t_u_u((*l_603), 247UL)) , (*g_423)) == p_11) , l_635) != p_11);
                l_636 = l_611;
                (**g_379) = (**g_379);
            }


        }
        else
        {
            short l_641 = 7L;
            struct S0 *l_672 = (void*)0;
            struct S0 **l_678 = &l_672;
            struct S0 ***l_677 = &l_678;
            int *l_737 = &g_89.f0;
            int ***l_744 = &g_380;
            (*g_380) = ((safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_89.f4, 0UL)) ^ (*l_603)), 1L)) , &p_11);

            ;
            if (((safe_sub_func_uint8_t_u_u(g_77.f1, func_43(l_636, ((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((3UL | (safe_mod_func_uint16_t_u_u((((*l_603) != (safe_lshift_func_uint8_t_u_s(249UL, 5))) > p_11), l_641))) ^ p_10), (&l_603 == &p_12))), l_641)) , (**g_379))))) , p_11))
            {
                return (*l_610);


            }
            else
            {
                int l_670 = 0x9AE39BA1L;
                int l_675 = 0x58861D40L;
                if ((((((safe_mul_func_int16_t_s_s(p_10, 0xFF15L)) >= ((g_89.f4 <= (func_43(func_18(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_77.f2, (safe_mod_func_int32_t_s_s(((g_89.f1 || ((***g_379) && func_43(g_89, (**g_379)))) == (-2L)), (*l_603))))) , g_89.f6), (*l_603))) , &p_11), l_666, (**g_379)), (**g_379)) , l_641)) != p_10)) | 5UL) == g_32.f3) < p_10))
                {
                    (*l_610) = l_602;
                }
                else
                {
                    struct S0 l_667 = {0xC85637D3L,-7937,0,0xBD5B639AL,0x90L,1L,-1L};
                    int *l_671 = &g_77.f6;
                    (*l_610) = l_602;
                    for (l_667.f6 = (-2); (l_667.f6 >= (-3)); --l_667.f6)
                    {
                        struct S0 l_676 = {3L,-3865,5,4294967295UL,-3L,0x1A2BL,-1L};
                        l_675 = l_641;
                        return l_676;


                    }
                    return l_667;


                }
            }
            if ((65535UL && (func_43((*l_610), l_633) , ((((l_677 != (((*l_603) || ((safe_lshift_func_int16_t_s_u((((!(!(safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((1UL & (g_89.f5 <= p_11)) , 1UL))), l_641)))) || l_641) , (*l_603)), g_89.f6)) | (*l_603))) , l_684)) && 0UL) == p_10) ^ p_11))))
            {
                char l_695 = 0x17L;
                int **l_696 = &l_603;
                struct S0 l_707 = {1L,-597,3,0UL,0x60L,0xC1BBL,-1L};
                for (g_32.f5 = (-25); (g_32.f5 != (-8)); g_32.f5 = safe_add_func_uint8_t_u_u(g_32.f5, 7))
                {
                    unsigned l_692 = 1UL;
                    (**g_380) = p_11;
                    (***g_379) = (((~((((((safe_add_func_int16_t_s_s((p_10 == g_89.f6), ((safe_rshift_func_int16_t_s_u(0x11BEL, (g_565 > g_536))) < 0x471FL))) , l_692) & (safe_rshift_func_int16_t_s_s(g_77.f6, (((func_43((func_43((*l_610), (*g_380)) , l_636), (**g_379)) , &p_12) == (void*)0) == g_32.f6)))) & l_641) && g_89.f0) || l_695)) , (void*)0) != (void*)0);
                }
                (*l_677) = (*l_684);

                ;
                l_697 = l_696;

                ;
                if (((safe_add_func_uint8_t_u_u(1UL, (((safe_rshift_func_uint16_t_u_u((g_89.f0 , 0x2103L), l_641)) | (safe_mod_func_int8_t_s_s(func_43(l_602, (*l_697)), func_43(((safe_rshift_func_uint8_t_u_s((l_706 , g_89.f0), 0)) , l_707), l_633)))) , g_89.f2))) ^ l_641))
                {
                    char l_713 = (-1L);
                    struct S0 *l_714 = &l_602;
                    if ((**g_380))
                    {
                        l_636 = func_52((safe_lshift_func_int8_t_s_u((**l_697), ((((safe_lshift_func_uint8_t_u_s(g_89.f1, (**l_696))) == 1L) , (p_11 , 1L)) < g_712))), (*g_380), p_10, l_713, l_714);
                        (*g_423) = ((0x37L > p_10) >= 0xC2L);
                    }
                    else
                    {
                        (*l_697) = &p_11;

                        ;
                    }

                    ;
                }
                else
                {
                    (**l_696) = ((void*)0 == &p_12);
                    (*g_6) = 6L;
                    for (g_32.f0 = 0; (g_32.f0 < (-11)); g_32.f0--)
                    {
                        (*l_696) = (((void*)0 != &g_380) , &p_11);

                        ;
                        (**l_696) = func_43((*l_610), l_717);
                    }

                    ;
                }

                ;
            }
            else
            {
                int *l_718 = &l_634;
                short l_721 = 0xABEDL;
                struct S0 l_736 = {0L,1287,6,0xCFD56A41L,0x70L,0xB11DL,0xEAC818BDL};
                (*l_610) = func_18(l_718, (safe_mod_func_int32_t_s_s(((((0xBF27L < g_89.f5) , l_721) > (safe_add_func_uint8_t_u_u(g_32.f3, p_10))) < (!((safe_lshift_func_uint8_t_u_s(((*l_684) != (void*)0), 4)) , (safe_mod_func_uint16_t_u_u(((((((*l_603) , (*g_380)) != (void*)0) >= g_536) <= g_32.f2) ^ p_10), 8L))))), l_641)), (*g_380));
                for (g_565 = 0; (g_565 < (-24)); g_565 = safe_sub_func_int32_t_s_s(g_565, 3))
                {
                    char l_747 = 0xB3L;
                    (***g_379) = (**g_380);
                    p_12 = l_717;
                    (*l_718) = p_10;
                    if (((((0UL != (safe_rshift_func_uint8_t_u_s(1UL, 6))) , ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(1L, func_43(l_636, (**g_379)))) , ((~p_11) ^ ((g_89.f3 < g_498) == 0UL))), p_10)) , l_736)) , g_32.f5) != g_89.f1))
                    {
                        (*g_380) = l_737;

                        ;
                    }
                    else
                    {
                        short l_743 = (-6L);
                        int *l_748 = &l_706.f0;
                        (*l_677) = l_738;

                        ;
                        (**g_379) = func_22(((g_89.f4 == (((safe_mod_func_uint16_t_u_u(g_565, p_11)) && (safe_add_func_uint32_t_u_u(l_743, 1L))) || p_10)) == (func_43((((void*)0 != l_744) , ((((safe_mod_func_int16_t_s_s(g_32.f3, l_747)) , 0x393CC686L) >= 0x6D5F5459L) , l_736)), l_748) >= p_11)));

                        ;

                    }

                    ;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            (**g_380) = (safe_mul_func_int16_t_s_s((65528UL ^ (g_77.f4 >= (***l_744))), (*l_603)));
        }


        ;
        ;
    }
    else
    {
        short l_751 = 0xD898L;
        int *l_752 = &l_602.f0;
        (*g_380) = &p_11;

        ;
        (**g_379) = l_752;

        ;
    }


    ;
    ;
    return l_602;


}







static char func_13(char p_14, struct S0 p_15, int * p_16, int p_17)
{
    char l_518 = 1L;
    int *l_531 = &g_32.f0;
    char l_543 = 0x39L;
    struct S0 l_554 = {0x2CFDE6ECL,-640,1,0xECDC32FBL,1L,0x7DB7L,0x0AEA5B97L};
    for (p_15.f3 = 0; (p_15.f3 < 24); ++p_15.f3)
    {
        struct S0 **l_509 = (void*)0;
        unsigned l_523 = 5UL;
        char l_524 = 0x47L;
        struct S0 l_542 = {-1L,-6348,3,1UL,4L,0x823AL,0L};
        int *l_577 = &l_542.f0;
        if (((((safe_mul_func_int16_t_s_s(p_15.f0, (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_509 != l_509), ((safe_mod_func_uint16_t_u_u(g_77.f0, (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_15.f1, ((g_32.f2 != (safe_sub_func_uint32_t_u_u(l_518, (*p_16)))) < (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_523, 13)), 1))))), l_523)))) , l_518))), 0xF544AEDDL)))) > 0xDA2AL) , l_524) == g_32.f2))
        {
            int l_525 = 0x99173535L;
            struct S0 *l_532 = &g_77;
            (**g_379) = p_16;

            ;
            (*l_532) = func_18((*g_380), (((func_52(p_15.f3, p_16, l_523, l_525, &g_77) , func_43(p_15, l_531)) , p_15.f3) == 0x3CL), &l_525);
            (*g_380) = (void*)0;

            ;
            for (g_77.f4 = (-9); (g_77.f4 != 5); ++g_77.f4)
            {
                return g_77.f2;
            }
        }
        else
        {
            int *l_535 = &g_77.f0;
            unsigned char l_541 = 6UL;
            struct S0 *l_557 = (void*)0;
            short l_581 = 0L;
            l_542 = p_15;
            (*l_535) = (((-6L) < (*g_423)) & l_543);
            if ((safe_add_func_uint16_t_u_u(p_15.f5, (l_542.f4 || (safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_43(p_15, l_531), 7)), (l_542.f1 == func_43(l_554, p_16)))), (*l_531))) && p_15.f3) != 1UL), p_17))))))
            {
                char l_569 = 2L;
                int *l_570 = &l_542.f0;
                for (l_554.f0 = (-24); (l_554.f0 == 21); l_554.f0 = safe_add_func_uint32_t_u_u(l_554.f0, 6))
                {
                    struct S0 *l_560 = &g_77;
                    int l_566 = 0L;
                    if (l_524)
                        break;
                    l_560 = (void*)0;

                    ;
                    (*l_535) = ((safe_lshift_func_int8_t_s_s(p_15.f3, g_89.f2)) > (p_15.f1 > (safe_mul_func_int8_t_s_s(((g_565 <= l_566) || (((*p_16) < (((safe_rshift_func_int16_t_s_s((g_89.f0 == (((func_43(p_15, p_16) , 0xF08A58AEL) != 0x33D75169L) | g_32.f6)), (*l_531))) ^ l_569) , 4294967289UL)) , 250UL)), g_32.f4))));
                    return p_15.f4;
                }
                if ((*p_16))
                    continue;
                (*g_380) = l_570;

                ;
                if ((*l_535))
                    continue;

            }
            else
            {
                struct S0 ***l_578 = &l_509;
                int l_591 = 0xEC7659C3L;
                for (g_536 = 0; (g_536 >= 60); g_536 = safe_add_func_int32_t_s_s(g_536, 2))
                {
                    int *l_584 = &g_89.f6;
                    struct S0 l_588 = {0x244A5408L,6152,2,0xC536DE1EL,0xE8L,-4L,0L};
                    for (g_500 = (-8); (g_500 >= 5); g_500++)
                    {
                        struct S0 *l_587 = (void*)0;
                        (*g_423) = ((safe_mul_func_int16_t_s_s((func_43(p_15, l_577) & ((g_500 , l_578) != (((0x0B2F2AA9L || (safe_sub_func_int16_t_s_s((*l_531), ((((func_43(p_15, l_531) <= l_581) || g_89.f6) == 0x1DL) & g_77.f6)))) && g_536) , &l_509))), p_15.f3)) , (*p_16));
                        (*l_577) = (safe_add_func_uint8_t_u_u(0x40L, (0x03L | p_17)));
                        (*g_380) = l_584;

                        ;
                        l_588 = p_15;
                    }
                    (*l_584) = (*l_584);
                }
                for (g_77.f5 = (-27); (g_77.f5 >= 13); g_77.f5 = safe_add_func_uint16_t_u_u(g_77.f5, 9))
                {
                    (*g_423) = l_591;
                }
                l_554 = p_15;
            }


            (*g_423) = 0xC484A317L;
        }


        for (g_77.f4 = 20; (g_77.f4 == (-22)); --g_77.f4)
        {
            (*l_531) = func_43(((~0xC37B43A1L) , p_15), &g_500);
        }
        p_16 = p_16;
    }


    return g_77.f6;
}







static struct S0 func_18(int * p_19, unsigned short p_20, int * p_21)
{
    int ***l_444 = &g_380;
    struct S0 *l_447 = &g_77;
    int *l_450 = &g_89.f0;
    struct S0 ***l_468 = (void*)0;
    struct S0 l_488 = {-8L,6470,2,0x080E4268L,-1L,-10L,0xDEA3361AL};
    int l_489 = 0xD1445CBCL;
    if ((((l_444 == ((safe_lshift_func_uint16_t_u_s(((void*)0 != l_447), (p_20 , ((*p_19) || ((safe_sub_func_int16_t_s_s((((func_43((*l_447), p_19) , p_20) , g_32.f1) , g_32.f3), g_77.f5)) <= g_89.f2))))) , l_444)) , (*g_423)) & g_89.f5))
    {
        struct S0 l_457 = {-7L,2644,6,0UL,1L,1L,0xDBDBB795L};
        for (g_89.f5 = 0; (g_89.f5 <= 16); g_89.f5 = safe_add_func_int32_t_s_s(g_89.f5, 1))
        {
            struct S0 l_458 = {-1L,3831,1,0x0955D3BFL,0x94L,1L,0x6737B0DCL};
            unsigned l_467 = 0xF84D0554L;
            for (p_20 = (-8); (p_20 != 11); ++p_20)
            {
                unsigned l_459 = 0x3FDE5F41L;
                struct S0 l_460 = {1L,-1572,7,4294967295UL,0L,-1L,0x4C2B6021L};
                struct S0 **l_469 = &l_447;
                if ((*p_19))
                {
                    l_458 = l_457;
                    l_457.f6 = l_459;
                }
                else
                {
                    if (l_459)
                        break;
                }
                l_460 = l_457;
                (*l_469) = ((((g_77.f6 , (p_20 <= (l_458 , (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(func_43((*l_447), p_19), (((safe_mul_func_uint8_t_u_u((((((*l_450) != l_467) ^ (-10L)) >= 0L) < p_20), l_457.f2)) , g_262) != l_468))) >= 0x36L) ^ 0xBFL), p_20))))) ^ g_32.f3) ^ 0x5AL) , &g_89);

                ;
                (*p_19) = ((((((safe_sub_func_int16_t_s_s(0x9E45L, 0xEB15L)) < (((safe_mod_func_uint8_t_u_u((0UL == ((safe_sub_func_uint32_t_u_u(4294967295UL, (*p_19))) || (246UL & func_43((**l_469), p_19)))), g_89.f2)) && l_457.f0) != 0x53DF97EAL)) ^ 0xA12CL) , g_32.f0) >= g_89.f2) , l_460.f5);
            }
            if ((*p_19))
                break;
        }

        ;
        g_425 = (void*)0;

        ;
    }
    else
    {
        int *l_480 = (void*)0;
        struct S0 l_481 = {0x4743B2D0L,-5217,0,0x03A24010L,-1L,0L,0xF8A0486EL};
        (*p_19) = func_43(l_481, l_480);
        l_481.f0 = l_481.f2;
        (*l_447) = l_481;
    }

    ;
    (*g_423) = (func_43(l_488, l_450) , func_43(((l_489 > (p_20 != (((((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((~(safe_rshift_func_uint8_t_u_s((func_43(g_77, p_19) > (*l_450)), (*l_450)))), p_20)) <= (*l_450)), p_20)) || g_498) , p_20) , p_20) || 3L))) , (*l_447)), p_21));
    return g_89;
}







static int * func_22(int p_23)
{
    short l_30 = (-5L);
    struct S0 *l_31 = &g_32;
    int *l_414 = &g_89.f0;
    unsigned char l_417 = 252UL;
    l_31 = func_25(p_23, l_30, l_31, p_23);


    (*l_414) = (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((+((&g_77 == l_31) >= 1L)), p_23)), 9)) > (safe_lshift_func_int8_t_s_s(l_30, 4))) , p_23);
    if ((safe_rshift_func_int8_t_s_u(l_417, 4)))
    {
        short l_422 = 0L;
        struct S0 l_424 = {-1L,-8062,6,7UL,1L,0xB637L,0x628B04ABL};
        g_425 = ((*l_31) , &l_424);

        ;
        for (g_32.f6 = 0; (g_32.f6 <= (-11)); g_32.f6 = safe_sub_func_int8_t_s_s(g_32.f6, 2))
        {
            (**g_379) = l_414;

            ;
        }
    }
    else
    {
        struct S0 **l_428 = &g_425;
        int l_433 = 0L;
        (*l_428) = &g_89;

        ;
        l_433 = (((0xD094B7E8L ^ (+(g_77.f4 , (safe_mul_func_int16_t_s_s(1L, (safe_mod_func_int16_t_s_s(l_433, func_43((**l_428), l_414)))))))) >= (g_32.f0 , (p_23 != (*l_414)))) >= g_32.f6);
        for (g_89.f0 = 14; (g_89.f0 > (-28)); --g_89.f0)
        {
            struct S0 l_438 = {0x56C9350DL,3416,0,0x585AC561L,-7L,0L,0L};
            for (g_89.f4 = 10; (g_89.f4 > 2); --g_89.f4)
            {
                (*l_31) = (*g_425);
                if (p_23)
                    continue;
                (*l_31) = l_438;
            }
            (**g_379) = (void*)0;

            ;
        }
        (**g_379) = &l_433;

        ;
    }



    return l_414;


}







static struct S0 * func_25(unsigned char p_26, unsigned short p_27, struct S0 * p_28, unsigned char p_29)
{
    char l_33 = 5L;
    int *l_46 = &g_32.f0;
    struct S0 *l_50 = &g_32;
    unsigned short l_310 = 65535UL;
    int l_355 = 0L;
    int l_401 = (-1L);
    if (g_32.f6)
    {
        struct S0 *l_297 = &g_32;
        int *l_299 = &g_77.f6;
        struct S0 l_309 = {0x7067DF3CL,-2289,5,0x120B94C4L,-4L,0x76B7L,0L};
        short l_311 = 0x9287L;
        int *l_323 = (void*)0;
        int l_330 = 6L;
        struct S0 *l_348 = &g_89;
        unsigned char l_402 = 0xD8L;
        if (l_33)
        {
            int l_42 = 1L;
            int **l_292 = &g_6;
            struct S0 l_295 = {1L,-8171,1,0xB70FBF4BL,0xDBL,0L,0xE590C066L};
            (*l_46) = ((+((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((((0xE3B0L || 0x7228L) , func_37((((l_42 == func_43(g_32, l_46)) , ((((safe_add_func_uint32_t_u_u(0x3565E139L, 4294967288UL)) < (p_27 && 2L)) > p_26) & 246UL)) , p_26), l_50, l_46, l_42)) != (void*)0), p_26)))) , g_89.f6)) != 4294967295UL);


            (*l_292) = l_46;

            ;
            for (g_89.f6 = 0; (g_89.f6 == 13); g_89.f6++)
            {
                int *l_296 = &l_295.f6;
                (*p_28) = l_295;
                l_296 = g_6;

                ;
                return l_297;


            }
            (*l_292) = l_46;
        }
        else
        {
            struct S0 l_298 = {0xBCA048C4L,-4361,0,0xF08096EFL,0x62L,1L,0xB5C6D67AL};
            int **l_302 = &l_46;
            (*l_299) = ((func_43(l_298, l_299) <= (&g_6 != &l_299)) ^ (*l_299));
            (*l_50) = (*l_50);
            (*l_299) = (safe_add_func_int16_t_s_s(0x8B3DL, p_27));
            g_6 = (func_52((l_302 != &l_299), l_299, ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_89.f3, 4)), (safe_mod_func_int8_t_s_s((0x5683L | (func_43(g_32, l_46) | (((func_43(l_309, (*l_302)) >= g_32.f2) > (-5L)) > l_310))), 0x89L)))) < g_77.f5), l_311, p_28) , g_6);
        }


        for (g_77.f0 = 0; (g_77.f0 > (-27)); g_77.f0--)
        {
            struct S0 l_314 = {0xA57C6E5AL,-845,5,7UL,0L,0xE3EDL,-4L};
            int *l_361 = &l_330;
            unsigned l_383 = 0x06F2AADEL;
            int *l_393 = &l_314.f0;
            struct S0 l_395 = {0x4E9D23C2L,-5908,4,4294967292UL,0x7FL,8L,0x739507D3L};
            if (func_43(l_314, g_6))
            {
                for (p_29 = 0; (p_29 != 19); p_29++)
                {
                    if (p_26)
                        break;
                }
            }
            else
            {
                int *l_317 = (void*)0;
                int **l_318 = &l_299;
                int *l_331 = &g_32.f6;
                (*l_318) = l_317;

                ;
                (*p_28) = (*p_28);
                for (g_89.f4 = (-14); (g_89.f4 < 2); g_89.f4++)
                {
                }
                (*l_297) = (*p_28);
            }
        }

        ;
        (*l_46) = (func_43((*l_50), (*g_380)) > l_402);
    }
    else
    {
        int l_407 = 0x6B18DD72L;
        (*l_50) = func_52(g_89.f5, &l_355, g_89.f2, ((p_26 || ((safe_add_func_int16_t_s_s((&p_28 != &l_50), p_29)) , (safe_rshift_func_uint8_t_u_s((g_89.f5 > g_77.f4), l_407)))) || (*l_46)), p_28);
    }


    return &g_32;


}







static int * func_37(unsigned char p_38, struct S0 * p_39, int * p_40, unsigned p_41)
{
    unsigned l_51 = 0xA7003B9FL;
    short l_64 = 1L;
    int l_65 = 0x5B2841C2L;
    unsigned short l_235 = 0x7DB7L;
    struct S0 l_267 = {0x0F9884C0L,-5225,0,5UL,0L,0xB02EL,-1L};
    int *l_271 = &g_77.f6;
    int l_273 = 0x4134AB34L;
    if (((g_32.f4 && l_51) | ((func_43(func_52((safe_lshift_func_int8_t_s_u(((l_51 , (g_32.f4 != (safe_add_func_uint32_t_u_u(g_32.f1, l_51)))) != (safe_mod_func_int8_t_s_s((l_64 > (func_43(g_32, g_6) <= l_65)), l_65))), g_32.f1)), p_40, g_32.f2, (*p_40), p_39), g_6) <= p_38) ^ 0L)))
    {
        struct S0 l_180 = {0x88E0E80EL,-8022,5,0x3E5C67DEL,1L,0xA033L,0x47E55B5CL};
        if (((((~(safe_mul_func_uint16_t_u_u(0x2929L, p_41))) , func_43(g_77, &l_65)) <= p_41) ^ (*p_40)))
        {
            struct S0 *l_193 = &g_32;
            struct S0 **l_192 = &l_193;
            struct S0 ***l_191 = &l_192;
            int **l_206 = &g_6;
            unsigned short l_212 = 0x283CL;
            int *l_218 = &g_89.f6;
            short l_259 = (-1L);
            for (p_38 = 0; (p_38 != 48); p_38++)
            {
                int l_203 = 4L;
                int *l_211 = &l_65;
                unsigned char l_236 = 6UL;
                char l_242 = (-5L);
                struct S0 l_264 = {-1L,-424,2,1UL,0L,0x17C1L,1L};
                if ((*p_40))
                {
                    int *l_198 = &g_89.f0;
                    if (((func_43(l_180, &l_65) <= 0x98D51729L) <= (safe_rshift_func_uint16_t_u_s(65535UL, (safe_add_func_uint16_t_u_u((((void*)0 != p_40) ^ 0xDC84E98FL), 0x53C5L))))))
                    {
                        int *l_199 = (void*)0;
                        int **l_200 = &l_198;
                        l_198 = ((p_38 > ((((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x15L, func_43(func_52(((void*)0 != l_191), p_40, (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(g_77.f3, func_43(g_89, p_40))) & (*p_40)), g_89.f1)), l_65, &g_32), g_6))), 0x7287L)), 1)) <= g_32.f5) > l_64) ^ l_180.f4)) , p_40);


                        (*l_200) = l_199;

                        ;
                        return l_198;



                    }
                    else
                    {
                        int **l_201 = (void*)0;
                        int **l_202 = &l_198;
                        (*l_202) = p_40;


                        if ((*p_40))
                            continue;
                        if (l_203)
                            break;
                    }


                    for (l_65 = (-3); (l_65 > (-13)); l_65--)
                    {
                        struct S0 *l_213 = &g_32;
                        g_77 = (g_77.f4 , g_77);
                    }
                    (*l_206) = g_6;
                }
                else
                {
                    if (l_65)
                        break;
                }
                if ((safe_lshift_func_uint8_t_u_u(g_77.f3, ((safe_mod_func_uint32_t_u_u(g_89.f2, g_89.f5)) > ((((p_41 , func_43((*p_39), l_218)) != (0x14L ^ ((9UL ^ g_89.f1) , l_64))) != g_77.f6) , p_38)))))
                {
                    for (l_212 = 18; (l_212 < 19); l_212 = safe_add_func_uint8_t_u_u(l_212, 3))
                    {
                        unsigned char l_237 = 2UL;
                        (*l_211) = (g_89.f4 & (safe_rshift_func_int16_t_s_s((p_41 , (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_41, 4)), (0xB2L ^ (0x7DL < ((((*p_39) , (((p_38 , (safe_rshift_func_uint8_t_u_u(((((l_65 || ((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(0L, (-4L))) | g_32.f5), l_235)) >= 1L) < g_89.f4) > p_41)) >= (*l_218)) , (void*)0) != &p_39), l_236))) > g_89.f5) < 1UL)) > p_41) != l_237)))))), g_32.f5)));
                        g_6 = p_40;


                        (*l_206) = g_6;
                        (*l_206) = (p_38 , (void*)0);

                        ;
                    }
                }
                else
                {
                    struct S0 ***l_261 = &l_192;
                    int *l_263 = &g_77.f6;
                    for (p_41 = 0; (p_41 > 45); p_41++)
                    {
                        int *l_245 = &l_65;
                        (*l_245) = (65535UL & (((safe_lshift_func_uint8_t_u_s(((l_242 , (p_41 , ((g_32.f6 <= (safe_mod_func_uint16_t_u_u(p_41, (((0x57F9L >= p_38) , func_43(((g_6 == ((((void*)0 != p_40) ^ g_77.f2) , g_6)) , (**l_192)), l_245)) , (*l_245))))) || (*p_40)))) , 255UL), 5)) & p_41) == g_89.f6));
                    }
                    if (((g_32.f3 && (+p_41)) && (l_65 || p_41)))
                    {
                        int l_254 = (-1L);
                        int l_255 = 0xF7F900F8L;
                        struct S0 l_256 = {3L,-5603,5,0xC7FC0633L,-1L,0L,0x9773CC98L};
                        (*l_206) = (((safe_mod_func_int32_t_s_s((+(*p_40)), 1L)) > func_43(g_77, p_40)) , l_211);

                        ;
                        (***l_191) = ((((((((*p_40) , ((p_38 < ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_32.f4, 0)), (4294967295UL && (safe_rshift_func_uint16_t_u_s(l_180.f5, ((g_89.f3 , &g_32) == &g_77)))))) , 0xEACAEC42L) == 0x499AF200L) != p_38)) >= l_254)) , p_41) < g_77.f1) , l_255) ^ g_89.f0) <= (*l_211)) , l_256);
                        l_264 = func_52((safe_sub_func_uint16_t_u_u((l_259 , ((((*l_211) , g_32.f3) & (!((safe_unary_minus_func_uint32_t_u((**l_206))) <= g_32.f0))) , ((((l_261 != g_262) < 0xCDC3L) , ((g_89.f3 | g_32.f1) < (*g_6))) , p_41))), 0x0BC3L)), l_263, g_77.f3, l_254, p_39);
                    }
                    else
                    {
                        (*l_206) = (g_89.f3 , l_263);

                        ;
                    }

                    ;
                    (*l_206) = g_6;
                }
            }


            if ((!(safe_sub_func_uint32_t_u_u((((65532UL && g_77.f1) && p_38) < l_51), (!func_43(l_267, p_40))))))
            {
                (**l_192) = (*p_39);
            }
            else
            {
                int ***l_268 = &l_206;
                struct S0 l_272 = {-1L,399,3,0x7037FAAFL,0L,0x8C91L,-6L};
                (*l_268) = &p_40;

                ;
                (*l_206) = ((safe_mul_func_int8_t_s_s((p_38 >= p_41), ((g_89.f1 >= func_43((*p_39), l_271)) , func_43(l_272, g_6)))) , (void*)0);

                ;
                g_89.f6 = g_89.f2;
            }


            ;
        }
        else
        {
            int l_278 = 1L;
            struct S0 l_279 = {-5L,243,2,0x9876400BL,5L,0xFAEEL,0L};
            (*p_39) = (*p_39);
            if (l_273)
            {
                return g_6;


            }
            else
            {
                char l_276 = 0x99L;
                int ***l_277 = (void*)0;
                for (g_77.f3 = (-30); (g_77.f3 == 20); g_77.f3 = safe_add_func_int8_t_s_s(g_77.f3, 5))
                {
                    return g_6;


                }
                (*p_39) = ((0xF7L != (+p_41)) , l_279);
                (*p_40) = (-2L);
            }
            for (g_89.f3 = 0; (g_89.f3 <= 15); g_89.f3++)
            {
                int *l_284 = (void*)0;
                struct S0 *l_290 = (void*)0;
                struct S0 **l_289 = &l_290;
                for (l_64 = 0; (l_64 >= 11); l_64 = safe_add_func_int32_t_s_s(l_64, 7))
                {
                    g_6 = l_284;

                    ;
                    (*p_40) = (safe_mul_func_uint8_t_u_u(g_77.f1, (safe_rshift_func_int8_t_s_s((!((0xCE60284BL < l_180.f5) , p_41)), 0))));
                }
                g_6 = l_284;

                ;
                (*l_289) = &g_32;

                ;
            }
        }



    }
    else
    {
        int **l_291 = &g_6;
        (*l_291) = g_6;
        (*l_291) = p_40;


    }



    return p_40;



}







static unsigned func_43(struct S0 p_44, int * p_45)
{
    char l_47 = 0x56L;
    return l_47;
}







static struct S0 func_52(short p_53, int * p_54, int p_55, int p_56, struct S0 * p_57)
{
    unsigned l_68 = 1UL;
    unsigned l_69 = 4294967295UL;
    struct S0 *l_72 = (void*)0;
    int *l_73 = &g_32.f6;
    int *l_106 = &g_89.f0;
    struct S0 l_139 = {-1L,5818,0,0UL,0L,0xE95CL,1L};
    struct S0 **l_167 = &l_72;
    if (((safe_mod_func_uint32_t_u_u(((g_32.f0 , ((l_68 >= l_69) , (g_32.f6 || (0xC8198303L ^ ((((safe_mod_func_int32_t_s_s(((l_69 || 0x9760L) , (((void*)0 == l_72) < p_56)), 0x940354EEL)) , 0x1428L) == 0xABE6L) | (-1L)))))) < p_55), (*p_54))) != 0L))
    {
        int **l_74 = (void*)0;
        int **l_75 = &l_73;
        struct S0 *l_76 = &g_77;
        p_54 = l_73;

        ;
        (*l_75) = ((g_32.f0 == (+p_55)) , &p_56);

        ;
        (*l_76) = g_32;
        (*l_76) = g_77;
    }
    else
    {
        unsigned short l_81 = 65529UL;
        int *l_101 = &g_77.f6;
        int **l_108 = &l_106;
        for (g_77.f3 = 0; (g_77.f3 < 25); g_77.f3 = safe_add_func_uint16_t_u_u(g_77.f3, 1))
        {
            int **l_80 = &l_73;
            struct S0 *l_87 = (void*)0;
            struct S0 *l_88 = &g_89;
            unsigned l_92 = 4294967295UL;
            (*l_80) = &p_56;

            ;
            if (l_81)
            {
                struct S0 l_86 = {0xED022C1CL,-5076,2,4294967295UL,0x24L,0xAD4DL,-10L};
                if ((((safe_mul_func_int8_t_s_s(g_32.f0, (g_32 , ((((void*)0 == &g_6) , (((((safe_mul_func_uint16_t_u_u((((g_32.f0 , func_43((p_55 , l_86), g_6)) ^ 0x04L) > (*p_54)), g_77.f5)) , g_32.f4) || g_32.f0) <= l_81) & p_56)) , g_77.f0)))) <= p_53) == (**l_80)))
                {
                    (*l_80) = g_6;


                }
                else
                {
                    (*p_54) = (func_43((*p_57), g_6) >= 9UL);
                }


            }
            else
            {
                return (*p_57);
            }


            (*l_88) = g_77;
            if (((func_43((*p_57), g_6) ^ ((safe_rshift_func_int16_t_s_s((func_43(g_77, g_6) == l_92), (safe_lshift_func_int8_t_s_s(((((&p_56 == &p_56) , &g_6) != &l_73) , g_77.f5), 7)))) && (*p_54))) != p_55))
            {
                struct S0 l_102 = {0xACA8A929L,-6149,4,0UL,1L,0xCA97L,-1L};
                if (l_81)
                    break;
                if ((*p_54))
                {
                    (*l_80) = g_6;


                }
                else
                {
                    struct S0 l_103 = {-8L,3593,5,4294967290UL,0L,0L,-1L};
                    for (p_53 = 0; (p_53 >= (-6)); p_53 = safe_sub_func_uint32_t_u_u(p_53, 4))
                    {
                        if ((*p_54))
                            break;
                        (*l_80) = &p_56;

                        ;
                        (*l_101) = (func_43((*p_57), g_6) < ((*p_54) != ((safe_lshift_func_int16_t_s_u((&p_54 == (void*)0), (((*p_54) & (3L == (safe_add_func_int8_t_s_s(func_43((*p_57), l_101), 5UL)))) == (**l_80)))) | (*p_54))));
                    }
                    if ((l_72 != (void*)0))
                    {
                        (*l_101) = (+func_43(l_102, g_6));
                        (*p_54) = (0x61E74A9FL >= func_43((*p_57), (*l_80)));
                        p_54 = &p_56;

                        ;
                    }
                    else
                    {
                        (*p_54) = (*p_54);
                        if ((*p_54))
                            continue;
                    }
                    g_89 = l_103;
                }
                (*l_80) = g_6;


            }
            else
            {
                int *l_107 = &g_32.f6;
                for (p_55 = 10; (p_55 <= 4); p_55--)
                {
                    (*l_107) = (((&l_73 == &l_73) > func_43((*p_57), ((g_32.f4 , 0xED42C185L) , l_106))) > func_43((*p_57), l_107));
                }
            }
        }



        (*l_108) = &p_56;

        ;
    }



    ;
    for (p_53 = 20; (p_53 >= 2); --p_53)
    {
        int l_122 = (-1L);
        int *l_140 = &g_32.f6;
        for (g_89.f4 = 3; (g_89.f4 <= (-17)); g_89.f4--)
        {
            unsigned char l_119 = 0x70L;
            int l_120 = 0x4500EE54L;
            int **l_121 = &l_73;
            struct S0 l_125 = {0xEA34FD0DL,-3758,5,0x6BD07DBCL,0L,-6L,0xEED63D9FL};
            l_120 = (((+(g_89.f2 != ((safe_sub_func_uint32_t_u_u(p_56, (((safe_lshift_func_int8_t_s_u((&p_56 == &p_56), (((((g_32.f4 >= ((*p_57) , func_43(g_32, l_73))) || p_55) >= l_119) , 255UL) > l_119))) && l_119) > 0L))) ^ 0L))) > (-1L)) , 1L);
            (*l_121) = g_6;


            if ((*p_54))
                break;
            if (l_122)
            {
                int l_126 = 0x82CCC809L;
                struct S0 l_143 = {0x95997860L,2824,6,0xD7A14AA7L,-2L,-5L,0xF0381F6DL};
                (*l_121) = (*l_121);
                if ((g_77.f3 , ((~((p_53 <= (((safe_lshift_func_int8_t_s_s(g_77.f0, (l_122 | (((func_43(l_125, g_6) < (l_126 == l_126)) == g_77.f4) , 0xE399L)))) >= l_126) < (*l_106))) != l_122)) , (*p_54))))
                {
                    for (g_89.f5 = 0; (g_89.f5 < (-25)); g_89.f5 = safe_sub_func_int8_t_s_s(g_89.f5, 1))
                    {
                        int *l_141 = &l_125.f6;
                        struct S0 **l_142 = &l_72;
                        (*l_121) = &p_56;

                        ;
                        (*p_54) = ((safe_sub_func_int8_t_s_s(((g_32.f2 || 7UL) ^ (*l_73)), p_53)) , (safe_lshift_func_uint16_t_u_s(func_43((((safe_mul_func_uint16_t_u_u(65535UL, (*l_106))) != (*l_106)) , (*p_57)), ((((safe_add_func_uint32_t_u_u((func_43(((safe_add_func_int8_t_s_s(g_32.f1, 0xAEL)) , l_139), g_6) & 0L), p_55)) | 0x46BDDA40L) == 0xA4L) , l_140)), 12)));
                        (*l_121) = l_141;

                        ;
                        (*l_142) = p_57;


                    }



                    g_77 = l_143;
                }
                else
                {
                    short l_144 = 0x95E7L;
                    if ((l_144 && (*l_140)))
                    {
                        (*l_140) = (*p_54);
                        (*l_121) = &p_56;

                        ;
                        (*l_73) = (g_32.f6 & (p_56 <= (g_32.f6 >= g_77.f3)));
                    }
                    else
                    {
                        struct S0 *l_147 = &l_125;
                        (*l_147) = (*p_57);
                    }


                    (*l_121) = &p_56;

                    ;
                    (*l_121) = g_6;


                    if ((func_43(g_89, g_6) != 0L))
                    {
                        (*l_140) = (l_144 | 0x5CC310F3L);
                        (*l_121) = &p_56;

                        ;
                        if ((*p_54))
                            continue;
                        (*l_121) = l_140;

                        ;
                    }
                    else
                    {
                        struct S0 **l_149 = &l_72;
                        struct S0 ***l_148 = &l_149;
                        (*l_148) = (void*)0;

                        ;
                        (*p_54) = (*p_54);
                        return g_32;
                    }

                    ;
                }



                return g_77;
            }
            else
            {
                int l_152 = 0x5C9785ECL;
                if ((*p_54))
                {
                    (*l_121) = &p_56;

                    ;
                    (**l_121) = (safe_rshift_func_int16_t_s_u(0x2AE1L, ((((((*l_140) || (-1L)) ^ (-1L)) && (((l_152 , (**l_121)) & 4UL) == func_43(g_89, g_6))) , 0x31L) == (*l_73))));
                }
                else
                {
                    struct S0 *l_153 = &l_125;
                    struct S0 **l_154 = &l_72;
                    (*l_154) = l_153;

                    ;
                }



            }



        }
    }


    for (l_139.f6 = (-16); (l_139.f6 != 12); l_139.f6 = safe_add_func_int16_t_s_s(l_139.f6, 6))
    {
        unsigned short l_158 = 0UL;
        unsigned short l_172 = 0UL;
        struct S0 *l_175 = &g_77;
        if ((*p_54))
        {
            int **l_157 = &l_106;
            (*l_157) = l_73;


            p_54 = &p_56;

            ;
            return g_77;
        }
        else
        {
            if (l_158)
                break;
        }
        if ((*p_54))
            continue;
        (*l_175) = ((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((((p_53 , g_89.f2) , &p_57) == (void*)0) || ((&p_57 != l_167) || (((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_172, (safe_sub_func_uint16_t_u_u(func_43((*p_57), g_6), g_32.f4)))), 0xCCDD416DL)) >= g_77.f6) == 0xCFL) , g_89.f3) | 0xC91CL))), 6)), l_172)), p_56)), (*p_54))) <= 0x45B73C7DL) & l_172) , g_32);
    }
    return g_89;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_32.f4, "g_32.f4", print_hash_value);
    transparent_crc(g_32.f5, "g_32.f5", print_hash_value);
    transparent_crc(g_32.f6, "g_32.f6", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_77.f6, "g_77.f6", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_89.f3, "g_89.f3", print_hash_value);
    transparent_crc(g_89.f4, "g_89.f4", print_hash_value);
    transparent_crc(g_89.f5, "g_89.f5", print_hash_value);
    transparent_crc(g_89.f6, "g_89.f6", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
