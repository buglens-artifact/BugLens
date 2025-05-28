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
   int f0;
   unsigned f1;
};


static int g_2 = 0x42C70BB7L;
static int g_5 = 0xD976FF55L;
static unsigned char g_25 = 0xC9L;
static int g_36 = 0x0E69CD17L;
static char g_69 = 0x74L;
static unsigned g_75 = 0x0663B8B2L;
static unsigned g_80 = 7UL;
static int *g_83 = &g_36;
static unsigned char g_201 = 0x04L;
static unsigned char *g_200 = &g_201;
static short g_205 = 9L;
static short g_266 = 0x719CL;
static unsigned long long g_269 = 0x9B2BB32BA0D44C9CLL;
static unsigned long long g_302 = 18446744073709551609UL;
static unsigned long long g_336 = 18446744073709551608UL;
static union U0 g_345 = {1L};
static long long g_348 = (-10L);
static long long *g_347 = &g_348;
static int **g_353 = (void*)0;
static char g_393 = (-7L);
static unsigned long long g_406 = 0xB6FBBB4AD64C46BDLL;
static unsigned *g_410 = &g_80;
static unsigned **g_409 = &g_410;
static short g_423 = 0xCAD3L;
static unsigned short g_454 = 0x718FL;
static unsigned short g_460 = 0x68CEL;
static union U0 *g_490 = &g_345;
static union U0 **g_489 = &g_490;
static long long g_501 = 0x88B6B8BDBB942920LL;
static int g_503 = 2L;
static unsigned char g_527 = 0x6BL;
static int *g_574 = (void*)0;
static int **g_573 = &g_574;
static long long g_643 = (-4L);
static unsigned char g_727 = 0xB9L;
static int g_802 = 0x778CD866L;
static unsigned char g_814 = 254UL;
static unsigned g_821 = 0xD357AA4BL;
static unsigned short g_853 = 1UL;
static unsigned short *g_887 = &g_454;
static unsigned short **g_886 = &g_887;



static long long func_1(void);
static int func_8(unsigned long long p_9, int p_10, long long p_11);
static unsigned func_12(char p_13);
static union U0 func_18(int * p_19);
static unsigned char func_22(int * p_23);
static unsigned char func_28(int ** p_29, long long p_30);
static unsigned char func_39(int * p_40, union U0 p_41, union U0 p_42, int * p_43);
static int * func_44(char p_45, short p_46, int * p_47, int p_48, long long p_49);
static char func_50(int * p_51, short p_52, unsigned char * p_53, unsigned long long p_54, unsigned p_55);
static int * func_56(int ** p_57, unsigned char p_58, short p_59);
static long long func_1(void)
{
    unsigned char l_774 = 0x65L;
    int **l_838 = &g_574;
    int l_877 = 0x7A66E7C2L;
    for (g_2 = 0; (g_2 != 13); g_2++)
    {
        char l_775 = 0x8BL;
        int l_841 = 0x356C04FAL;
        long long *l_874 = &g_501;
        int *l_878 = &g_36;
        for (g_5 = (-2); (g_5 != (-30)); g_5 = safe_sub_func_uint8_t_u_u(g_5, 1))
        {
            unsigned short l_833 = 0x6C47L;
            int l_835 = (-1L);
            if (func_8(g_5, (((func_12(g_5) , (func_18(func_56(&g_83, (safe_rshift_func_uint16_t_u_s(l_774, 9)), (g_201 & 0x2183DC921ABD48EDLL))) , l_775)) | (*g_347)) | (*g_347)), (*g_347)))
            {
                int l_834 = 0x1E7B7078L;
                unsigned short *l_839 = &g_460;
                char *l_866 = &g_69;
                unsigned long long *l_871 = &g_302;
                unsigned long long *l_875 = (void*)0;
                unsigned long long *l_876 = &g_269;
                int **l_879 = &g_83;
                if ((((*g_410) | (!(safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((*l_839) = (((((safe_lshift_func_uint8_t_u_s(l_833, 4)) ^ (func_8(l_834, g_454, (*g_347)) != g_527)) , (l_835 = l_833)) != (((((safe_mul_func_int8_t_s_s((((void*)0 == l_838) || l_833), 3UL)) || l_774) & (**g_409)) | g_345.f1) <= l_775)) | 0x9F18L)) & 0xEBBCL), g_69)) == 0x16L), g_5)))) && g_336))
                {
                    int **l_840 = &g_83;
                    int *l_842 = (void*)0;
                    int *l_843 = &l_835;
                    (*l_840) = &g_5;

                    ;
                    (*l_843) = (l_841 = (*g_83));
                    return l_774;
                }
                else
                {
                    for (g_527 = 0; (g_527 >= 55); g_527 = safe_add_func_int8_t_s_s(g_527, 1))
                    {
                        unsigned l_846 = 1UL;
                        int l_847 = 0xF7DB00A7L;
                        int *l_850 = &l_835;
                        int *l_851 = &l_834;
                        int *l_852 = (void*)0;
                        l_847 &= l_846;
                        (*l_850) = (safe_mul_func_uint16_t_u_u((2L & 255UL), g_460));
                        --g_853;
                    }
                }
                (*l_879) = ((0UL | (safe_mul_func_int16_t_s_s((!(safe_add_func_int8_t_s_s(((((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((*l_866) ^= (safe_lshift_func_uint8_t_u_u((*g_200), 5))), (safe_mod_func_uint64_t_u_u(((*l_876) = ((((safe_lshift_func_uint8_t_u_u(l_774, 1)) , ((*g_410) = (*g_410))) ^ l_775) , (((((*l_871)--) , &g_643) == l_874) >= (-5L)))), g_2)))) | l_834), l_774)) & l_833) && l_774) && 0x48B00B66L) < (-1L)) > l_877) & l_841) || g_36), (*g_200)))), 0x1F47L))) , l_878);

                ;
                (*l_879) = &l_877;

                ;
                (*l_879) = &g_36;

                ;
            }
            else
            {
                int l_880 = 0x7F57A844L;
                int **l_883 = &l_878;
                (*l_883) = func_56(&l_878, l_880, (!(safe_sub_func_uint16_t_u_u(l_774, (l_877 ^ (*g_410))))));

                ;
            }


        }

        ;
        if (l_877)
            continue;
        for (g_345.f1 = 0; (g_345.f1 > 8); g_345.f1 = safe_add_func_uint16_t_u_u(g_345.f1, 9))
        {
            unsigned short ***l_888 = &g_886;
            (*l_888) = g_886;
        }

            }



    return l_774;
}







static int func_8(unsigned long long p_9, int p_10, long long p_11)
{
    unsigned char l_776 = 0x01L;
    int *l_779 = (void*)0;
    int *l_780 = &g_503;
    int *l_781 = &g_503;
    int *l_782 = &g_503;
    int *l_783 = &g_503;
    int *l_784 = &g_36;
    int *l_785 = &g_503;
    int *l_786 = &g_503;
    int *l_787 = &g_503;
    int *l_788 = &g_503;
    int *l_789 = (void*)0;
    int *l_790 = (void*)0;
    int *l_791 = (void*)0;
    int *l_792 = &g_36;
    int *l_793 = &g_36;
    int *l_794 = &g_36;
    int *l_795 = &g_503;
    int *l_796 = &g_503;
    int *l_797 = &g_503;
    int l_798 = 0xA0DFD863L;
    int *l_799 = &g_36;
    int *l_800 = &l_798;
    int *l_801 = &l_798;
    int *l_803 = (void*)0;
    int l_804 = 0x952FBC7EL;
    int *l_805 = &l_804;
    int *l_806 = &g_36;
    int *l_807 = (void*)0;
    int *l_808 = (void*)0;
    int *l_809 = &l_804;
    int *l_810 = &l_804;
    int *l_811 = &g_503;
    int *l_812 = &l_798;
    int *l_813 = &g_503;
    unsigned long long *l_817 = &g_406;
    unsigned long long *l_819 = &g_336;
    unsigned long long **l_818 = &l_819;
    unsigned *l_820 = &g_821;
    unsigned l_824 = 8UL;
    ++l_776;
    g_814++;
    l_824 = (((*l_820) = ((p_9 , l_817) != ((*l_818) = &p_9))) , (p_10 ^= ((*l_794) ^= (safe_sub_func_uint8_t_u_u((*g_200), ((*l_783) ^= p_9))))));

    ;
    return p_11;
}







static unsigned func_12(char p_13)
{
    int *l_16 = &g_5;
    unsigned long long l_742 = 18446744073709551615UL;
    unsigned short *l_761 = (void*)0;
    unsigned short *l_762 = &g_460;
    int l_763 = 0x09BAB7CAL;
    unsigned short *l_764 = &g_454;
    short *l_765 = (void*)0;
    short *l_766 = (void*)0;
    short *l_767 = &g_266;
    short *l_768 = (void*)0;
    short *l_769 = (void*)0;
    short *l_770 = &g_205;
    int **l_771 = &l_16;
    for (p_13 = (-16); (p_13 < (-13)); p_13 = safe_add_func_uint64_t_u_u(p_13, 7))
    {
        union U0 l_17 = {0xB6FE6D39L};
        unsigned char *l_24 = &g_25;
        int l_26 = 0xCB667F5AL;
        int **l_27 = &l_16;
        unsigned *l_740 = &l_17.f1;
        unsigned **l_741 = &l_740;
        int *l_746 = (void*)0;
        int *l_747 = (void*)0;
        int *l_748 = &g_503;
        l_16 = l_16;
        (*l_748) = ((-6L) >= ((l_17 , func_18(((safe_rshift_func_uint8_t_u_u(func_22(((((*l_24) ^= (g_2 < 0xDDE9AB5CL)) | (l_26 = g_5)) , ((*l_27) = l_16))), (((((*g_409) = (*g_409)) != ((*l_741) = l_740)) && p_13) == l_742))) , l_16))) , (*l_16)));

            }
    (*l_771) = func_44((safe_mod_func_int16_t_s_s(p_13, 6UL)), ((*l_770) |= (((*g_410) || (safe_add_func_int16_t_s_s(((*l_16) < (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((0x027A783D3C205DACLL && ((safe_rshift_func_uint16_t_u_s(p_13, ((*l_767) ^= ((((*l_764) = ((safe_div_func_uint32_t_u_u(((**g_409) ^= ((((*l_762) = (((l_16 == l_16) < (((*l_16) & 4294967295UL) != 0x62C20932L)) & 0x71CB94732FFEC495LL)) != l_763) & 0x6F56A687L)), p_13)) , g_69)) && p_13) | 0x7013C0B0127DD522LL)))) && 0UL)), 4)), p_13))), 0x05FFL))) == (*l_16))), &g_503, (*l_16), (*l_16));

    ;

    return p_13;
}







static union U0 func_18(int * p_19)
{
    union U0 l_745 = {-3L};
    for (g_423 = 0; (g_423 != (-11)); g_423 = safe_sub_func_uint64_t_u_u(g_423, 9))
    {
        return (**g_489);

            }
    return l_745;

    }







static unsigned char func_22(int * p_23)
{
    int *l_32 = &g_5;
    int **l_31 = &l_32;
    long long l_730 = (-4L);
    unsigned short *l_735 = (void*)0;
    unsigned short *l_736 = &g_454;
    unsigned short *l_737 = &g_460;
    int *l_738 = (void*)0;
    int *l_739 = &g_503;
    (*l_739) = ((0x6E40L <= ((*l_737) = (((func_28(l_31, g_5) > l_730) , ((*g_200)--)) , ((0L ^ (-6L)) != ((*l_736) = (safe_div_func_uint16_t_u_u(0x327EL, g_75))))))) != (*g_347));


        g_503 = 0xE43D8126L;
    return (*g_200);
}







static unsigned char func_28(int ** p_29, long long p_30)
{
    unsigned l_33 = 2UL;
    int *l_34 = (void*)0;
    int *l_35 = &g_36;
    union U0 l_361 = {1L};
    unsigned long long *l_475 = &g_406;
    union U0 *l_487 = &l_361;
    union U0 **l_486 = &l_487;
    int l_522 = (-1L);
    int *l_576 = (void*)0;
    int l_599 = 0x52CD1FFFL;
    unsigned l_614 = 9UL;
    if (((*l_35) &= l_33))
    {
        unsigned l_483 = 0xCBC3065EL;
        union U0 *l_530 = (void*)0;
        unsigned char l_544 = 1UL;
        if (((safe_lshift_func_uint8_t_u_s(func_39(func_44(func_50(func_56(&l_34, (safe_lshift_func_uint16_t_u_u(g_5, g_36)), g_25), g_2, g_200, (((**p_29) , ((*p_29) = l_35)) != &g_5), p_30), g_5, &g_5, g_302, g_2), l_361, l_361, &g_2), 2)) >= p_30))
        {
            unsigned long long *l_472 = &g_336;
            union U0 *l_477 = &g_345;
            union U0 **l_476 = &l_477;
            int l_480 = 0L;
            union U0 ***l_488 = &l_486;
            union U0 ***l_491 = &g_489;
            (*l_476) = (((((*l_472)++) & 0xB7221A5A386D9E32LL) != ((&g_269 == l_475) || 5UL)) , &g_345);
            (*p_29) = l_35;
            (*l_35) &= (safe_mul_func_int8_t_s_s(l_480, ((((safe_lshift_func_uint16_t_u_s(g_80, 10)) && l_483) > (safe_add_func_int16_t_s_s((g_266 = g_25), (((*l_472) = g_25) , (((*l_488) = l_486) != ((*l_491) = g_489)))))) >= 0x06L)));
        }
        else
        {
            int l_500 = 5L;
            long long l_562 = 0x20415C698CBA8767LL;
            long long l_585 = 0L;
            int l_586 = 0xCAD33C40L;
            for (g_269 = 0; (g_269 != 18); g_269 = safe_add_func_int32_t_s_s(g_269, 1))
            {
                if ((**p_29))
                    break;
            }
            for (g_205 = (-18); (g_205 == (-7)); g_205 = safe_add_func_int16_t_s_s(g_205, 1))
            {
                long long l_506 = (-1L);
                int l_510 = 0xACA1AAF7L;
                int l_518 = 0xEA8F3700L;
                int ***l_551 = &g_353;
            }
            (*p_29) = &l_586;


        }


        ;


    }
    else
    {
        int *l_590 = &l_522;
        int l_591 = (-1L);
        int *l_592 = &g_503;
        int *l_593 = &g_36;
        int *l_594 = (void*)0;
        int *l_595 = &l_591;
        int *l_596 = &l_591;
        int *l_597 = &g_36;
        int *l_598 = (void*)0;
        int l_600 = 0L;
        int *l_601 = &l_599;
        int *l_602 = &l_522;
        int *l_603 = &g_503;
        int *l_604 = &g_36;
        unsigned l_605 = 0x6FAC195FL;
        long long l_649 = 7L;
        int *l_650 = &l_600;
        int *l_651 = &g_36;
        int *l_652 = &l_591;
        int *l_653 = &l_591;
        int *l_654 = &l_522;
        int *l_655 = &l_599;
        int *l_656 = &g_36;
        int *l_657 = &l_522;
        int *l_658 = &g_503;
        int *l_659 = &l_591;
        int *l_660 = &l_600;
        int *l_661 = &l_599;
        int *l_662 = &g_503;
        int *l_663 = (void*)0;
        int *l_664 = &l_591;
        int *l_665 = &l_591;
        int *l_666 = &l_600;
        int *l_667 = &g_36;
        int *l_668 = (void*)0;
        int *l_669 = &l_522;
        int *l_670 = &l_599;
        int *l_671 = &l_600;
        int *l_672 = &l_591;
        int *l_673 = (void*)0;
        int *l_674 = &g_36;
        int *l_675 = &l_599;
        int *l_676 = &g_503;
        int *l_677 = &l_522;
        int *l_678 = &l_522;
        int *l_679 = &g_503;
        int *l_680 = &g_503;
        int *l_681 = &l_591;
        int *l_682 = &g_503;
        int l_683 = 9L;
        int *l_684 = (void*)0;
        int *l_685 = &l_522;
        int *l_686 = &g_503;
        int *l_687 = &l_522;
        int *l_688 = &g_503;
        int *l_689 = &g_503;
        int *l_690 = &l_522;
        int *l_691 = &l_683;
        int *l_692 = &l_522;
        int *l_693 = &l_522;
        int *l_694 = &l_522;
        int *l_695 = &l_600;
        int *l_696 = (void*)0;
        int *l_697 = &l_522;
        int *l_698 = &g_503;
        int *l_699 = &l_683;
        int *l_700 = &l_600;
        int *l_701 = &l_600;
        int *l_702 = &l_600;
        int *l_703 = &l_522;
        int l_704 = 0xECC7EE99L;
        int *l_705 = &g_503;
        int *l_706 = &l_522;
        int *l_707 = &g_503;
        int *l_708 = &l_599;
        int l_709 = 5L;
        int *l_710 = (void*)0;
        int *l_711 = (void*)0;
        int *l_712 = &l_522;
        int *l_713 = &l_709;
        int *l_714 = &l_600;
        int *l_715 = &g_36;
        int *l_716 = &l_683;
        int *l_717 = &l_709;
        int *l_718 = &l_600;
        int *l_719 = &l_600;
        int *l_720 = &l_683;
        int *l_721 = &l_591;
        int *l_722 = (void*)0;
        int *l_723 = &l_683;
        int *l_724 = (void*)0;
        int *l_725 = &g_36;
        int *l_726 = &g_36;
        l_605++;
        for (g_75 = 4; (g_75 < 9); g_75 = safe_add_func_uint64_t_u_u(g_75, 1))
        {
            int *l_617 = &g_345.f0;
            union U0 l_635 = {0xCBEC2B73L};
            unsigned short l_645 = 4UL;
            for (g_69 = 0; (g_69 == (-3)); g_69--)
            {
                return (*g_200);
            }
        }
        g_727++;
        return (*l_35);
    }


    ;


    (*l_35) = (*l_35);
    return (*l_35);
}







static unsigned char func_39(int * p_40, union U0 p_41, union U0 p_42, int * p_43)
{
    unsigned long long *l_364 = &g_336;
    unsigned **l_367 = (void*)0;
    int l_368 = 0L;
    short *l_369 = &g_266;
    int **l_370 = (void*)0;
    int **l_371 = (void*)0;
    int **l_372 = &g_83;
    unsigned char *l_375 = &g_25;
    unsigned *l_376 = &g_345.f1;
    unsigned l_424 = 1UL;
    (*l_372) = func_44(g_69, (((*g_200) = 0x86L) <= (((p_40 != (((*l_369) &= (((safe_sub_func_uint32_t_u_u(((p_42.f0 && ((*l_364)--)) || 0x73E5A116L), ((l_367 != ((l_368 | g_205) , l_367)) != l_368))) , g_345.f1) , l_368)) , p_40)) | 0xD8L) > p_41.f1)), p_43, (*p_40), p_42.f0);

    ;
    if (((((p_41.f0 >= (p_42.f0 & (((safe_sub_func_int32_t_s_s(func_50((*l_372), p_41.f0, l_375, g_75, ((*l_376) |= p_41.f1)), g_266)) < g_266) && p_42.f0))) <= 0xB43E1316L) == g_302) && p_41.f0))
    {
        return p_42.f1;
    }
    else
    {
        unsigned long long l_377 = 0x4F8C2A34A0E617A3LL;
        int l_378 = (-1L);
        int l_379 = (-8L);
        int l_380 = 1L;
        int *l_381 = &l_368;
        int *l_382 = &g_36;
        int l_383 = 0x7DB8A58FL;
        int *l_384 = &l_368;
        int *l_385 = &l_380;
        int *l_386 = &l_378;
        int *l_387 = &l_383;
        int *l_388 = &l_378;
        int *l_389 = &l_378;
        int *l_390 = &l_379;
        int *l_391 = &l_368;
        int *l_392 = &l_368;
        int *l_394 = &l_379;
        int *l_395 = &g_36;
        int *l_396 = &g_36;
        int *l_397 = &l_383;
        int *l_398 = &l_368;
        int *l_399 = &l_379;
        int *l_400 = &l_380;
        int *l_401 = &l_380;
        int *l_402 = (void*)0;
        int *l_403 = &l_368;
        int *l_404 = &l_383;
        int *l_405 = &l_383;
        unsigned **l_411 = &l_376;
        int *l_419 = (void*)0;
        int **l_418 = &l_419;
        long long *l_458 = &g_348;
        int l_471 = 1L;
        l_377 = (*p_43);
        g_406++;
        l_411 = g_409;

        ;
        if ((*l_387))
        {
            long long l_416 = 1L;
            int l_417 = 1L;
            int ***l_420 = (void*)0;
            int ***l_421 = &l_418;
            unsigned **l_443 = (void*)0;
            unsigned char l_461 = 0x52L;
            l_417 = (safe_sub_func_uint64_t_u_u(p_42.f0, (safe_div_func_uint8_t_u_u((*g_200), l_416))));
            (*l_421) = l_418;
            if (l_416)
            {
                short l_433 = 0xB234L;
                int l_434 = (-1L);
                if ((*l_403))
                {
                    long long l_422 = 0x6FCBD07F21C68809LL;
                    --l_424;
                    for (l_424 = 0; (l_424 <= 25); l_424 = safe_add_func_int8_t_s_s(l_424, 4))
                    {
                        if (l_416)
                            break;
                    }
                    (*l_372) = &g_2;

                    ;
                }
                else
                {
                    int **l_435 = (void*)0;
                    (*l_372) = func_44(p_42.f1, (((*g_200) | (((safe_div_func_int16_t_s_s(((*p_40) == (l_433 && (g_205 || (p_42.f0 > 253UL)))), p_42.f1)) , l_372) == l_435)) & g_36), &l_417, l_417, (*g_347));

                    ;
                }

                ;
            }
            else
            {
                unsigned char *l_438 = &g_25;
                int l_448 = 0L;
                if (func_50(&l_417, (safe_mod_func_int32_t_s_s(((*l_382) = (p_41 , (*l_405))), l_417)), l_438, (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_348, g_423)), ((l_443 == (((*l_364) = 1UL) , l_411)) || (*g_200)))), p_41.f0))
                {
                    char *l_451 = &g_393;
                    unsigned short *l_452 = (void*)0;
                    unsigned short *l_453 = &g_454;
                    int l_457 = 1L;
                    unsigned short *l_459 = &g_460;
                    g_83 = ((safe_div_func_uint8_t_u_u(0xCAL, (((((safe_mul_func_uint8_t_u_u(p_42.f0, (l_448 && (((*l_453) |= (safe_mul_func_int8_t_s_s(((*l_451) = 0x6FL), 1UL))) > ((*l_459) |= (g_266 == (l_457 < ((void*)0 == l_458)))))))) == 4L) & 0x58L) , l_461) && 0x549FFE04C18D013FLL))) , &l_379);

                    ;
                }
                else
                {
                    (*l_388) = (safe_div_func_int32_t_s_s((-6L), ((*l_385) = l_448)));
                    (*l_394) |= (*p_40);
                }


                (*l_390) = (((p_41.f1 ^ (*g_347)) || (safe_unary_minus_func_int64_t_s((-6L)))) , l_417);
            }


            (*l_390) = (0x7BD8L > (safe_mul_func_uint16_t_u_u((p_42.f0 ^ (safe_rshift_func_uint8_t_u_u((*g_200), ((void*)0 != &l_376)))), ((*l_369) &= (safe_rshift_func_int8_t_s_u(l_471, 1))))));
        }
        else
        {
            (*l_372) = p_43;

            ;
            return p_42.f1;
        }


    }


        return (*g_200);
}







static int * func_44(char p_45, short p_46, int * p_47, int p_48, long long p_49)
{
    int l_319 = (-5L);
    int *l_320 = &g_36;
    int *l_321 = &l_319;
    int l_322 = 0x55C915C0L;
    int *l_323 = &l_319;
    int *l_324 = &g_36;
    int *l_325 = &l_319;
    int *l_326 = &g_36;
    int *l_327 = &l_319;
    int *l_328 = &g_36;
    int *l_329 = &l_319;
    int *l_330 = (void*)0;
    int *l_331 = (void*)0;
    int *l_332 = &l_319;
    int *l_333 = &g_36;
    int l_334 = 7L;
    int *l_335 = &l_319;
    union U0 *l_346 = &g_345;
    unsigned char l_351 = 0x77L;
    int **l_352 = &l_323;
    int *l_360 = &g_2;
    g_336--;
    (*l_352) = func_56(&l_331, ((safe_rshift_func_uint8_t_u_s((*l_329), 4)) <= (safe_lshift_func_int8_t_s_u((p_45 != ((safe_rshift_func_int8_t_s_s((*l_335), 5)) < (((*l_327) , (((((*l_346) = g_345) , (void*)0) == g_347) < (safe_mod_func_uint16_t_u_u(((l_351 <= 0xE75AC6F2265D7B44LL) <= (*g_347)), p_49)))) & (*l_327)))), p_49))), (*l_323));

    ;
    ;
    (*l_352) = func_56((g_353 = &l_325), (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (g_345 , (safe_div_func_int8_t_s_s(func_50(func_56(&l_327, ((*l_327) = func_50(&p_48, func_50(&g_36, p_46, &l_351, ((safe_rshift_func_uint8_t_u_u((0L == 0xB0525A454C072960LL), p_48)) , 0x019ACE6F17F63BE1LL), (*l_324)), &l_351, (*l_327), p_45)), g_2), g_336, &g_201, p_49, p_45), g_302))))), g_336);

    ;
    ;
    ;
    return l_360;



}







static char func_50(int * p_51, short p_52, unsigned char * p_53, unsigned long long p_54, unsigned p_55)
{
    int **l_202 = &g_83;
    short *l_204 = &g_205;
    unsigned char l_212 = 0x71L;
    int l_227 = 0x32090DF5L;
    int l_236 = 0L;
    int l_244 = (-1L);
    int l_256 = 0x4F6C7F95L;
    int l_267 = 0x261DBC53L;
    long long l_290 = (-1L);
    (*l_202) = &g_5;

    ;
    if ((((((*l_204) = (safe_unary_minus_func_uint32_t_u((&g_83 == l_202)))) , (safe_add_func_int64_t_s_s((((safe_add_func_int8_t_s_s(p_55, (**l_202))) , (safe_div_func_uint8_t_u_u(((l_212 == g_25) | (safe_mul_func_uint8_t_u_u((*p_53), (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_75, g_80)) & (*g_200)), g_36))))), 0xF1L))) || (*p_51)), 0x07B948F0CD08EF1BLL))) , (**l_202)) , (*p_51)))
    {
        int *l_219 = (void*)0;
        int *l_220 = (void*)0;
        int *l_221 = &g_36;
        int *l_222 = (void*)0;
        int *l_223 = &g_36;
        int l_224 = 0x25344571L;
        int *l_225 = (void*)0;
        int *l_226 = &l_224;
        int *l_228 = &g_36;
        int *l_229 = &l_227;
        int *l_230 = &l_227;
        int *l_231 = &g_36;
        int *l_232 = (void*)0;
        int *l_233 = &l_224;
        int *l_234 = &g_36;
        int *l_235 = &l_227;
        int *l_237 = &l_227;
        int l_238 = 0x834B12E9L;
        int *l_239 = &l_236;
        int *l_240 = &l_236;
        int *l_241 = &l_236;
        int *l_242 = &g_36;
        int l_243 = (-1L);
        int *l_245 = (void*)0;
        int *l_246 = &l_224;
        int *l_247 = &l_238;
        int *l_248 = &l_224;
        int *l_249 = &l_243;
        int *l_250 = &l_224;
        int *l_251 = (void*)0;
        int *l_252 = (void*)0;
        int *l_253 = &g_36;
        int *l_254 = (void*)0;
        int *l_255 = &l_236;
        int *l_257 = &g_36;
        int *l_258 = &l_236;
        int *l_259 = &l_238;
        int *l_260 = &l_243;
        int *l_261 = (void*)0;
        int *l_262 = &g_36;
        int *l_263 = &l_256;
        int *l_264 = (void*)0;
        int *l_265 = &l_224;
        int *l_268 = &l_267;
        g_269++;
        for (g_75 = (-5); (g_75 >= 30); g_75 = safe_add_func_uint32_t_u_u(g_75, 2))
        {
            for (p_52 = 0; (p_52 > (-2)); p_52 = safe_sub_func_uint32_t_u_u(p_52, 8))
            {
                unsigned char l_280 = 0x10L;
                unsigned *l_287 = &g_80;
                (*l_242) ^= (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(0x10L, 2)), l_280));
                for (l_224 = 0; (l_224 != 12); l_224++)
                {
                    if ((*p_51))
                        break;
                }
                (*l_268) = l_280;
                (*l_263) = ((g_25 | (((&g_25 == (void*)0) == ((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((++(*l_287)), ((*l_268) = (p_52 && g_266)))), (*p_53))) ^ (**l_202))) || ((&l_243 != ((*l_202) = &l_243)) , (*l_248)))) , l_290);
            }
        }

        ;
        for (g_269 = 0; (g_269 != 55); g_269 = safe_add_func_int16_t_s_s(g_269, 1))
        {
            unsigned l_301 = 0xC324AB99L;
            (*l_237) ^= ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((*g_200), (((void*)0 == p_53) == ((((*g_83) , &g_5) == (void*)0) < ((&g_2 != (void*)0) , p_52))))), 0xC51AB325L)), l_301)) == (**l_202)), 6)) , g_302);
            if ((*p_51))
                break;
        }
    }
    else
    {
        int *l_305 = &l_236;
        long long *l_318 = &l_290;
        (*l_305) ^= ((safe_rshift_func_int16_t_s_u((0x130CB797A8B7766ALL == 0L), 15)) , (*g_83));
        (*l_202) = ((g_36 , (**l_202)) , func_56(l_202, (**l_202), (0xB8F0B0E5E2DEF937LL != ((*l_318) |= ((*l_305) = (safe_add_func_uint8_t_u_u((*g_200), (safe_sub_func_int16_t_s_s((**l_202), (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(0x6DD06A0EL, ((safe_mul_func_uint16_t_u_u((**l_202), (-1L))) & g_5))), p_52)) || g_25), 1L)))))))))));

        ;
    }


    return g_5;
}







static int * func_56(int ** p_57, unsigned char p_58, short p_59)
{
    int *l_64 = &g_5;
    int **l_63 = &l_64;
    int ***l_62 = &l_63;
    int *l_70 = &g_36;
    int l_105 = 0xBF156DE0L;
    int l_122 = 0xD4C0F600L;
    int l_144 = 1L;
    int l_160 = 0xE9CB1239L;
    union U0 l_169 = {0x3BB087A7L};
    unsigned l_199 = 0x66DEC561L;
    (*l_62) = p_57;


    (*l_70) = (g_5 == (g_69 |= (safe_mod_func_int8_t_s_s(((p_59 , 0L) , g_36), (safe_sub_func_uint32_t_u_u(((p_58 && g_36) > p_59), (g_5 > g_2)))))));
    for (p_59 = 0; (p_59 != (-30)); p_59--)
    {
        unsigned short l_73 = 0xD4D3L;
        unsigned *l_74 = &g_75;
        unsigned *l_79 = &g_80;
        unsigned **l_78 = &l_79;
        unsigned *l_82 = &g_80;
        unsigned **l_81 = &l_82;
        int l_97 = 0xA5A2D535L;
        int l_106 = 0L;
        int l_141 = (-2L);
        int l_147 = 0x84459954L;
        int l_159 = (-1L);
        unsigned short l_166 = 4UL;
        if (((l_73 , (--(*l_74))) ^ ((*l_70) = (((((*l_81) = ((*l_78) = l_70)) == &g_80) < g_2) > (l_73 >= l_73)))))
        {
            int *l_84 = &g_36;
            int *l_85 = &g_36;
            int *l_86 = &g_36;
            int *l_87 = (void*)0;
            int *l_88 = &g_36;
            int *l_89 = &g_36;
            int *l_90 = &g_36;
            int *l_91 = &g_36;
            int *l_92 = &g_36;
            int l_93 = 2L;
            int *l_94 = &l_93;
            int *l_95 = &g_36;
            int *l_96 = &l_93;
            int l_98 = 0xD5AEC2C0L;
            int *l_99 = &g_36;
            int *l_100 = (void*)0;
            int *l_101 = &l_93;
            int *l_102 = &g_36;
            int l_103 = 0x9D6F4693L;
            int *l_104 = &l_93;
            int *l_107 = &l_106;
            int l_108 = 0x57C7BD55L;
            int *l_109 = (void*)0;
            int *l_110 = (void*)0;
            int *l_111 = (void*)0;
            int *l_112 = &l_97;
            int *l_113 = (void*)0;
            int *l_114 = &l_106;
            int *l_115 = &l_108;
            int *l_116 = &l_105;
            int *l_117 = &l_93;
            int *l_118 = &g_36;
            int *l_119 = &l_98;
            int *l_120 = &g_36;
            int *l_121 = (void*)0;
            int *l_123 = &l_108;
            int *l_124 = &l_106;
            int *l_125 = &g_36;
            int *l_126 = &l_122;
            int *l_127 = &g_36;
            int *l_128 = &l_93;
            int *l_129 = (void*)0;
            int *l_130 = &l_93;
            int *l_131 = &l_97;
            int *l_132 = (void*)0;
            int *l_133 = &l_105;
            int *l_134 = &l_93;
            int *l_135 = (void*)0;
            int *l_136 = &g_36;
            int *l_137 = &l_108;
            int *l_138 = &l_93;
            int *l_139 = &l_93;
            int *l_140 = &l_108;
            int *l_142 = &l_97;
            int *l_143 = (void*)0;
            int *l_145 = &l_103;
            int *l_146 = &l_106;
            int *l_148 = &l_144;
            int *l_149 = &l_106;
            int *l_150 = &l_103;
            int l_151 = 0xC2B2271DL;
            int *l_152 = &l_103;
            int *l_153 = &l_105;
            int *l_154 = (void*)0;
            int *l_155 = &g_36;
            int *l_156 = &l_106;
            int *l_157 = &g_36;
            int *l_158 = (void*)0;
            int *l_161 = &l_108;
            int *l_162 = &l_108;
            int l_163 = 0xFF1AB120L;
            int *l_164 = &l_151;
            int *l_165 = &l_163;
            int **l_170 = &l_121;
            g_83 = l_79;

            ;
            l_166++;
            (*l_170) = ((*p_57) = (l_169 , &g_5));


            ;
            ;
            if ((*l_104))
                break;
        }
        else
        {
            char l_177 = 4L;
            for (g_25 = 0; (g_25 >= 45); g_25 = safe_add_func_uint16_t_u_u(g_25, 2))
            {
                int *l_194 = (void*)0;
                int *l_195 = &l_106;
                int *l_198 = &l_169.f0;
                l_199 |= ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_58, l_177)), (((((*l_198) = (((-1L) | ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(248UL, 1)), ((*l_74) &= ((*l_82)++)))) ^ (safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((((0x973E414CL < ((*l_195) = (safe_lshift_func_uint16_t_u_u(l_177, 10)))) ^ 0x503BCFB6L) && 0x93L), (safe_add_func_uint32_t_u_u(p_58, p_58)))) && 0L), p_59)), l_177)))) , l_166)) , l_141) < l_177) < g_5))) < p_58);
            }
        }

        ;
        ;
    }


    return &g_2;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_345.f0, "g_345.f0", print_hash_value);
    transparent_crc(g_345.f1, "g_345.f1", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
