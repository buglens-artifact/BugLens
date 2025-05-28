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


struct S0 {
   unsigned f0 : 23;
   unsigned f1 : 18;
   signed f2 : 13;
   unsigned f3 : 4;
   signed f4 : 5;
   unsigned f5 : 10;
   unsigned f6 : 1;
   unsigned f7 : 16;
};

struct S1 {
   int f0;
   struct S0 f1;
   char f2;
   struct S0 f3;
   short f4;
   short f5;
   int f6;
   unsigned char f7;
   unsigned char f8;
   char f9;
};


static int g_2 = 0x143E95AAL;
static int g_6 = 5L;
static int g_31[5] = {7L, 7L, 7L, 7L, 7L};
static struct S0 *g_34 = (void*)0;
static struct S0 g_35 = {914,479,-43,3,4,1,0,249};
static unsigned char g_65 = 0x54L;
static unsigned short g_67 = 0x1E83L;
static struct S0 *g_72 = (void*)0;
static struct S0 **g_71[2] = {&g_72, &g_72};
static struct S0 g_74[1][1] = {{{1855,469,-50,1,-3,24,0,120}}};
static int g_86 = 0L;
static unsigned short *g_93 = &g_67;
static unsigned short **g_92 = &g_93;
static struct S1 g_107 = {1L,{2409,466,1,0,2,13,0,56},0x28L,{1792,139,-49,1,2,25,0,209},4L,0xA835L,0xC8BF5EF5L,2UL,0x48L,0xE1L};
static int *g_109 = &g_86;
static struct S1 g_133 = {-7L,{1455,47,46,1,-0,18,0,214},0L,{37,213,73,2,-2,7,0,114},-6L,0x3257L,0L,250UL,0x4CL,1L};
static unsigned g_166 = 4294967288UL;
static unsigned g_168 = 1UL;
static struct S1 *g_217 = &g_133;
static struct S1 **g_216 = &g_217;
static unsigned g_261 = 0xA0BBB431L;
static struct S0 *g_273[2][7][7] = {{{&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}}, {{&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}, {&g_107.f1, &g_107.f1, (void*)0, &g_107.f3, &g_74[0][0], &g_133.f3, &g_133.f1}}};
static unsigned *g_475 = &g_168;
static unsigned **g_474 = &g_475;
static unsigned ***g_495 = (void*)0;
static struct S0 ***g_522 = (void*)0;
static struct S0 ****g_521 = &g_522;
static unsigned short g_531 = 0x6BCDL;
static unsigned char *g_714 = &g_65;
static unsigned char **g_713 = &g_714;



static unsigned short func_1(void);
static unsigned short func_9(unsigned char p_10, struct S0 p_11);
static struct S0 func_12(unsigned short p_13, char p_14);
static char func_19(char p_20, int p_21, unsigned char p_22, int p_23, int p_24);
static unsigned short func_28(unsigned char p_29);
static struct S1 func_37(struct S0 p_38, char p_39, unsigned short p_40, struct S1 p_41);
static int func_50(struct S1 p_51, unsigned short p_52);
static int * func_56(int p_57, int p_58, char p_59, struct S0 ** p_60);
static struct S0 ** func_69(struct S0 ** p_70);
static struct S0 * func_75(unsigned char * p_76);
static unsigned short func_1(void)
{
    unsigned short l_5[7][4][3] = {{{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}, {{0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}, {0xA028L, 0xA388L, 0xA028L}}};
    struct S0 l_717 = {108,264,46,2,4,29,0,55};
    struct S0 **l_738 = &g_273[1][3][2];
    int **l_739 = &g_109;
    unsigned *l_744 = &g_261;
    unsigned **l_743 = &l_744;
    unsigned ***l_742 = &l_743;
    struct S0 **l_745 = &g_273[1][1][5];
    int i, j, k;
    for (g_2 = (-6); (g_2 <= 19); g_2 = safe_add_func_int32_t_s_s(g_2, 9))
    {
        unsigned char l_642 = 0xCFL;
        struct S0 l_695 = {217,333,-73,2,-4,18,0,254};
        unsigned short l_696 = 65534UL;
        struct S1 l_697 = {0xF04C4701L,{1844,82,-44,3,2,19,0,77},0x56L,{2059,232,-53,0,3,8,0,111},0xEA2AL,0xC517L,3L,0xC2L,0UL,0x37L};
        struct S0 **l_725 = &g_72;
        int **l_727 = &g_109;
        for (g_6 = 0; (g_6 <= 2); g_6 += 1)
        {
            unsigned l_27 = 4294967288UL;
            struct S1 l_722 = {0L,{1647,180,-63,1,-1,16,0,24},0L,{2815,84,84,1,1,25,0,66},0x1719L,0xCDC2L,0x795D3288L,0x36L,0xACL,1L};
        }
        (*l_727) = &g_86;
    }
    (*l_739) = func_56(((void*)0 == (*g_92)), (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(4UL, ((safe_mul_func_uint8_t_u_u((0xA729L != (safe_sub_func_int8_t_s_s(((((g_133.f1.f5 , g_107.f3.f7) > l_717.f2) <= (*g_714)) < (((safe_lshift_func_int8_t_s_u(l_717.f4, 3)) >= 0UL) < 0xA4L)), l_717.f5))), 1L)) != (**g_474)))), l_5[3][3][2])), g_107.f3.f4, l_738);
    (*g_109) = 0x90D12B06L;
    (*l_739) = func_56(g_133.f0, ((safe_sub_func_uint8_t_u_u(6UL, 1UL)) >= (((((void*)0 != l_742) , g_107.f3.f6) & ((**l_739) && ((**g_92) , (**l_739)))) ^ (**l_739))), (**l_739), l_745);
    return (**g_92);
}







static unsigned short func_9(unsigned char p_10, struct S0 p_11)
{
    unsigned char l_681 = 0x43L;
    struct S1 l_686 = {6L,{2524,267,6,1,-4,29,0,120},1L,{1372,395,7,3,-0,24,0,222},9L,0x846DL,0x75A97F17L,0xC0L,255UL,0xB7L};
    int *l_689 = &g_86;
    struct S0 *l_690 = &g_74[0][0];
    (*l_690) = func_12((l_681 && ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(func_50(((**g_216) = func_37(p_11, l_681, l_681, l_686)), p_11.f0), ((((*l_689) = ((safe_lshift_func_uint16_t_u_u((p_11.f3 > l_686.f1.f6), (*g_93))) ^ 65531UL)) , g_2) < l_686.f3.f1))), (*g_93))) ^ 1UL)), l_686.f3.f5);
    return p_11.f1;
}







static struct S0 func_12(unsigned short p_13, char p_14)
{
    struct S0 l_645 = {2325,338,16,0,1,7,0,94};
    char *l_666 = (void*)0;
    char **l_665 = &l_666;
    int *l_678 = (void*)0;
    unsigned short l_679 = 0xEAEBL;
    int *l_680 = &g_107.f6;
    (*g_216) = (*g_216);
    for (g_133.f5 = 1; (g_133.f5 < 9); g_133.f5 = safe_add_func_uint32_t_u_u(g_133.f5, 8))
    {
        struct S0 l_646 = {841,259,-21,1,4,20,0,8};
        int **l_647 = &g_109;
        struct S0 **l_654[8] = {&g_273[1][3][2], &g_72, &g_273[1][3][2], &g_72, &g_273[1][3][2], &g_72, &g_273[1][3][2], &g_72};
        int i;
        l_646 = l_645;
        (*l_647) = &g_86;
        (*l_647) = func_56((**l_647), p_13, ((((*g_475) < ((**l_647) || (safe_mul_func_uint8_t_u_u(p_14, (safe_rshift_func_int16_t_s_s(g_74[0][0].f6, g_107.f3.f1)))))) != (safe_mul_func_int16_t_s_s((**l_647), (1L != (**g_92))))) || p_13), l_654[1]);
    }
    for (g_133.f8 = 0; (g_133.f8 == 11); g_133.f8++)
    {
        struct S0 *l_657 = &g_107.f1;
        struct S0 *l_658 = &g_74[0][0];
        struct S1 l_661 = {3L,{2645,134,55,1,-0,25,0,56},0x24L,{1882,408,-38,0,-2,17,0,51},0x5D9EL,6L,1L,0xF0L,0x26L,0x3BL};
        unsigned char *l_662[9] = {&g_133.f8, &g_65, &g_133.f8, &g_65, &g_133.f8, &g_65, &g_133.f8, &g_65, &g_133.f8};
        char *l_664 = &l_661.f9;
        char **l_663 = &l_664;
        char ***l_667 = &l_665;
        char *l_668 = &g_133.f2;
        int *l_671[7][6][6] = {{{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}, {{&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}, {&g_133.f6, &g_107.f6, &g_6, &g_107.f6, &g_31[4], &g_133.f6}}};
        int i, j, k;
        (*l_658) = ((*l_657) = l_645);
        l_645.f4 = (l_661.f3.f2 = ((g_166 ^ (l_661.f6 = func_28(func_50(l_661, l_661.f7)))) > (((*l_668) = (l_663 != ((*l_667) = l_665))) == (l_645.f7 , (safe_mul_func_uint16_t_u_u(l_661.f7, 65535UL))))));
    }
    (*l_680) = (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((**g_474) = (safe_mul_func_uint16_t_u_u(l_645.f0, (((l_645.f2 = l_645.f2) , 5UL) , 0x208EL)))), l_679)), g_107.f5));
    return l_645;
}







static char func_19(char p_20, int p_21, unsigned char p_22, int p_23, int p_24)
{
    struct S0 *l_36 = &g_35;
    struct S1 l_53 = {0xD8C90CC8L,{2562,420,-53,1,-3,25,0,144},0x1DL,{965,166,-33,2,-3,27,0,127},-1L,-5L,-1L,0UL,0xD4L,0x00L};
    int *l_537 = &g_107.f6;
    int *l_616 = &g_133.f6;
    struct S0 l_638[4] = {{1496,463,71,1,-0,26,0,70}, {1496,463,71,1,-0,26,0,70}, {1496,463,71,1,-0,26,0,70}, {1496,463,71,1,-0,26,0,70}};
    int **l_640 = (void*)0;
    int **l_641 = &l_616;
    int i;
    (*l_36) = g_35;
    if ((l_36 == l_36))
    {
        struct S0 l_42 = {2234,334,35,2,-2,6,0,103};
        unsigned l_43[8] = {0x0F82EDDAL, 0xD9B76FC4L, 0x0F82EDDAL, 0xD9B76FC4L, 0x0F82EDDAL, 0xD9B76FC4L, 0x0F82EDDAL, 0xD9B76FC4L};
        struct S1 l_533 = {5L,{1263,113,64,2,1,19,0,180},0L,{561,292,76,3,0,25,0,157},0x01AFL,0xA008L,0x82B3BF63L,8UL,1UL,0xE7L};
        int **l_536[3];
        int i;
        for (i = 0; i < 3; i++)
            l_536[i] = &g_109;
        l_53 = func_37(l_42, l_43[2], (p_22 , (safe_div_func_uint32_t_u_u((!(safe_div_func_uint16_t_u_u((!(((l_42.f0 >= func_28(p_20)) < (func_50(l_53, (((6UL && p_20) , 0x0D74891BL) , g_35.f2)) <= 0xE91C252AL)) || l_42.f7)), 6UL))), (*g_109)))), l_533);
        l_537 = (void*)0;
        g_109 = &p_24;
    }
    else
    {
        int l_538 = (-9L);
        struct S1 l_550[6][4] = {{{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}, {{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}, {{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}, {{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}, {{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}, {{-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {0x65DFFB58L,{1571,268,77,0,-1,25,0,198},0x01L,{1272,136,-0,1,-4,30,0,147},1L,-5L,0xE016D88CL,0UL,0x18L,0x24L}, {-10L,{1626,216,-0,3,4,24,0,11},0L,{639,502,-71,2,-0,15,0,93},0L,0L,1L,0UL,255UL,2L}, {-5L,{892,157,59,1,0,18,0,232},-3L,{1738,325,-21,2,1,11,0,166},-10L,0xA0B5L,0x0DA62500L,255UL,0x63L,0x95L}}};
        struct S0 *l_553 = &g_107.f3;
        char l_556 = (-8L);
        char l_585[5][6] = {{(-1L), 1L, 0x6CL, 0xDCL, 1L, 0x31L}, {(-1L), 1L, 0x6CL, 0xDCL, 1L, 0x31L}, {(-1L), 1L, 0x6CL, 0xDCL, 1L, 0x31L}, {(-1L), 1L, 0x6CL, 0xDCL, 1L, 0x31L}, {(-1L), 1L, 0x6CL, 0xDCL, 1L, 0x31L}};
        int *l_588 = &g_86;
        struct S0 l_621[8] = {{2222,142,-63,3,-4,12,0,126}, {114,300,5,2,-0,20,0,116}, {2222,142,-63,3,-4,12,0,126}, {114,300,5,2,-0,20,0,116}, {2222,142,-63,3,-4,12,0,126}, {114,300,5,2,-0,20,0,116}, {2222,142,-63,3,-4,12,0,126}, {114,300,5,2,-0,20,0,116}};
        int i, j;
        if (((*l_537) = (((**g_92) = p_21) , (((**g_474) > (+((*l_537) || l_538))) || p_22))))
        {
            short *l_554 = &g_133.f4;
            unsigned short l_555 = 0xBA59L;
            char *l_557 = &l_550[1][2].f9;
            struct S1 l_558 = {0L,{2138,393,-67,2,-1,15,0,41},0x02L,{9,322,89,0,-3,18,0,164},0xF251L,0x1A0CL,0x5EED898CL,9UL,0xD7L,0x49L};
            l_558 = func_37((*l_36), ((*l_557) = ((safe_div_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((p_24 | (g_133.f8 = (l_537 != l_537))) <= (*g_109)) < (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((func_50(l_550[1][2], (65527UL && ((*l_554) = ((safe_sub_func_uint16_t_u_u(((*g_93) = ((l_553 != (void*)0) , (*g_93))), l_550[1][2].f3.f5)) != p_21)))) ^ l_555), 7)), (**g_474)))))), 1L)), p_20)) || p_22) >= l_550[1][2].f1.f0), l_556)) , 1L)), p_20, g_107);
        }
        else
        {
            struct S1 l_561[4][4] = {{{-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {1L,{1118,83,28,1,-4,28,0,240},0x21L,{208,40,83,2,1,5,0,49},0x8625L,0x0E7AL,-3L,0xD5L,0UL,0x30L}, {0xB1DEB17BL,{2144,388,62,0,0,10,0,136},0x01L,{2693,420,32,0,2,24,0,201},0x28E6L,0xF8D5L,0xC737018EL,0xC7L,255UL,3L}}, {{-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {1L,{1118,83,28,1,-4,28,0,240},0x21L,{208,40,83,2,1,5,0,49},0x8625L,0x0E7AL,-3L,0xD5L,0UL,0x30L}, {0xB1DEB17BL,{2144,388,62,0,0,10,0,136},0x01L,{2693,420,32,0,2,24,0,201},0x28E6L,0xF8D5L,0xC737018EL,0xC7L,255UL,3L}}, {{-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {1L,{1118,83,28,1,-4,28,0,240},0x21L,{208,40,83,2,1,5,0,49},0x8625L,0x0E7AL,-3L,0xD5L,0UL,0x30L}, {0xB1DEB17BL,{2144,388,62,0,0,10,0,136},0x01L,{2693,420,32,0,2,24,0,201},0x28E6L,0xF8D5L,0xC737018EL,0xC7L,255UL,3L}}, {{-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {-5L,{2562,342,-63,0,4,2,0,44},0L,{2703,116,-68,3,3,27,0,21},0x96C7L,0x7211L,0xA4CE2D85L,0xB3L,255UL,0L}, {1L,{1118,83,28,1,-4,28,0,240},0x21L,{208,40,83,2,1,5,0,49},0x8625L,0x0E7AL,-3L,0xD5L,0UL,0x30L}, {0xB1DEB17BL,{2144,388,62,0,0,10,0,136},0x01L,{2693,420,32,0,2,24,0,201},0x28E6L,0xF8D5L,0xC737018EL,0xC7L,255UL,3L}}};
            struct S0 *l_577 = &g_133.f3;
            int *l_587 = &g_2;
            int i, j;
            for (g_133.f5 = 0; (g_133.f5 > (-6)); g_133.f5 = safe_sub_func_uint32_t_u_u(g_133.f5, 6))
            {
                int *l_566 = &g_107.f6;
                struct S0 l_582 = {1660,274,-65,0,-2,31,0,125};
                struct S0 **l_600 = &g_273[1][3][2];
                if (p_20)
                    break;
                l_561[3][3] = (**g_216);
            }
            return g_531;
        }
        for (p_23 = 9; (p_23 != 1); p_23 = safe_sub_func_int8_t_s_s(p_23, 3))
        {
            (*l_537) = (safe_div_func_int32_t_s_s(((*l_36) , ((*l_588) = (*l_588))), (+((0x5FC5L != (6UL && p_24)) , (0x3954BB81L & 0x94B64656L)))));
        }
        for (g_107.f4 = 0; (g_107.f4 <= 0); g_107.f4 += 1)
        {
            struct S0 l_606 = {1672,51,-54,1,-3,31,0,224};
            struct S0 ***l_611 = &g_71[0];
            struct S0 **l_613 = &g_273[0][0][2];
            struct S0 ***l_612 = &l_613;
            int **l_614 = &l_537;
            int **l_615[2][1][5] = {{{(void*)0, (void*)0, &g_109, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_109, (void*)0, (void*)0}}};
            int i, j, k;
            l_606 = ((*l_553) = (*l_553));
            (*l_588) = (safe_rshift_func_uint8_t_u_u((((p_22 = 0xFDL) >= (!0x10L)) & (func_28(l_606.f6) < (*g_93))), 7));
            (*l_612) = ((*l_611) = &l_553);
            l_616 = ((*l_614) = l_537);
            for (g_65 = 0; (g_65 <= 0); g_65 += 1)
            {
                int *l_628 = &g_107.f6;
                int i, j;
                (**l_613) = g_74[g_107.f4][g_107.f4];
                l_628 = ((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((0UL && func_28(p_22)), (l_621[1] , (g_531 = ((((*g_93) = (safe_sub_func_int8_t_s_s((**l_614), (safe_mul_func_int8_t_s_s(g_74[g_107.f4][g_107.f4].f2, ((247UL | (safe_mod_func_uint8_t_u_u(g_74[g_107.f4][g_107.f4].f7, (*l_616)))) > 0xC573L)))))) , (*g_109)) >= (*g_109)))))), 13)) , p_22) , p_23) , &g_31[3]);
                (*l_614) = l_588;
            }
        }
        for (l_53.f7 = (-3); (l_53.f7 > 24); l_53.f7 = safe_add_func_uint16_t_u_u(l_53.f7, 5))
        {
            unsigned l_637 = 4294967295UL;
            unsigned l_639 = 0x84AAF93EL;
            (*l_616) = ((((safe_mod_func_int16_t_s_s(0L, (safe_mod_func_int16_t_s_s((*l_537), ((((safe_sub_func_int16_t_s_s(g_74[0][0].f7, l_637)) == ((**g_92) = 3UL)) > func_28(p_20)) , func_50(((l_638[1] , (**g_92)) , (**g_216)), (**g_92))))))) <= p_20) ^ l_639) , (*g_109));
            (*l_588) = (*g_109);
            (*l_537) = (*g_109);
            if ((*g_109))
                continue;
        }
    }
    l_537 = (void*)0;
    (*l_641) = &p_21;
    return g_107.f3.f7;
}







static unsigned short func_28(unsigned char p_29)
{
    int *l_30 = &g_31[4];
    struct S0 *l_33 = (void*)0;
    struct S0 **l_32 = &l_33;
    (*l_30) = g_2;
    g_34 = ((*l_32) = (void*)0);
    return (*l_30);
}







static struct S1 func_37(struct S0 p_38, char p_39, unsigned short p_40, struct S1 p_41)
{
    int *l_534[4];
    struct S1 l_535 = {3L,{781,418,-73,1,-3,10,0,202},0xA1L,{546,369,24,2,0,15,0,6},0x315AL,0xB134L,0L,0x6AL,0x77L,5L};
    int i;
    for (i = 0; i < 4; i++)
        l_534[i] = &g_133.f6;
    l_534[0] = &g_86;
    return l_535;
}







static int func_50(struct S1 p_51, unsigned short p_52)
{
    short l_527 = 1L;
    struct S0 **l_532[9] = {&g_273[0][5][5], &g_273[1][5][2], &g_273[0][5][5], &g_273[1][5][2], &g_273[0][5][5], &g_273[1][5][2], &g_273[0][5][5], &g_273[1][5][2], &g_273[0][5][5]};
    int i;
    for (p_51.f8 = 0; (p_51.f8 <= 53); p_51.f8 = safe_add_func_int32_t_s_s(p_51.f8, 9))
    {
        unsigned char *l_63 = (void*)0;
        unsigned char *l_64 = &g_65;
        unsigned short *l_66 = &g_67;
        int l_68[4];
        struct S0 **l_449[6][4][5] = {{{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}, {{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}, {{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}, {{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}, {{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}, {{&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}, {&g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2], &g_273[0][2][1], &g_273[1][3][2]}}};
        struct S0 ***l_448 = &l_449[3][1][0];
        char *l_450 = &g_107.f2;
        int **l_519 = &g_109;
        int *l_520 = (void*)0;
        unsigned short *l_530 = &g_531;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_68[i] = (-1L);
    }
    return l_527;
}







static int * func_56(int p_57, int p_58, char p_59, struct S0 ** p_60)
{
    unsigned *l_456 = &g_261;
    unsigned **l_455 = &l_456;
    unsigned *l_457 = &g_261;
    char *l_458 = &g_133.f2;
    int l_465 = 0xAADEDFACL;
    int *l_466[1];
    int l_467 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_466[i] = &g_86;
    l_467 = (safe_rshift_func_uint8_t_u_u((((0x7DD8L | (**g_92)) < ((*l_458) = (safe_add_func_uint32_t_u_u(4294967288UL, (p_57 , (((*l_455) = &g_261) == (l_457 = &g_261))))))) && (safe_div_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(0xCA6EL, 7)), 14)) && p_58) && l_465) , g_168), p_59))), 0));
    for (g_86 = 0; (g_86 <= 0); g_86 += 1)
    {
        char l_468 = 1L;
        struct S1 l_503[8][10] = {{{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}, {{0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {9L,{1789,389,16,0,-3,5,0,126},0x20L,{2279,264,40,2,1,20,0,125},1L,1L,0L,0x8CL,255UL,0x86L}, {0x25842753L,{2598,263,-49,1,-4,28,0,235},1L,{476,124,-87,3,1,6,0,216},-5L,5L,0x8DFA1675L,251UL,0UL,0xCDL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}, {0xBF647C26L,{1249,247,-58,3,3,9,0,68},0x2CL,{17,269,23,3,-3,6,0,208},0x5845L,0x2C22L,0x4C055F4DL,0x19L,0x57L,0x9EL}, {0x886215CFL,{2760,194,75,3,-0,13,0,53},-1L,{772,506,-69,3,-1,1,0,60},0L,1L,-2L,0x1DL,255UL,0xA9L}}};
        int *l_517[1][10] = {{&g_2, &g_6, &l_465, &l_465, &g_6, &g_2, &g_6, &l_465, &l_465, &g_6}};
        int **l_518[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_518[i] = &l_466[0];
        if (p_58)
            break;
        if (l_468)
            break;
        for (g_107.f4 = 0; (g_107.f4 >= 0); g_107.f4 -= 1)
        {
            unsigned short l_471 = 0UL;
            unsigned ***l_476 = &g_474;
            struct S1 l_496[1][8] = {{{8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}, {8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}, {0x0E708650L,{2363,432,28,0,-3,5,0,158},-9L,{1843,7,5,1,-1,15,0,51},0x148FL,0xC989L,1L,1UL,0x44L,0x0FL}, {8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}, {8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}, {0x0E708650L,{2363,432,28,0,-3,5,0,158},-9L,{1843,7,5,1,-1,15,0,51},0x148FL,0xC989L,1L,1UL,0x44L,0x0FL}, {8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}, {8L,{209,418,-81,0,-4,24,0,163},0x92L,{2307,328,83,0,-4,31,0,118},-1L,0x1D99L,-3L,0x3EL,0x80L,0xE0L}}};
            int *l_515 = &g_86;
            int **l_516 = &l_515;
            int i, j;
            if ((safe_sub_func_int32_t_s_s((l_471 && (p_58 , l_468)), g_133.f1.f5)))
            {
                int **l_472 = &l_466[0];
                (*l_472) = &g_6;
            }
            else
            {
                int *l_473 = &g_107.f6;
                l_473 = &p_58;
            }
            (*l_476) = g_474;
            for (g_166 = 0; (g_166 <= 0); g_166 += 1)
            {
                unsigned short *l_489 = (void*)0;
                int *l_500 = &g_133.f6;
                for (g_133.f8 = 0; (g_133.f8 <= 1); g_133.f8 += 1)
                {
                    int **l_477 = (void*)0;
                    int **l_478 = &g_109;
                    struct S1 l_497[2][10][3] = {{{{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}}, {{{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}, {{0L,{1819,139,-83,1,4,7,0,77},9L,{2740,255,-11,0,-3,16,0,43},0x8DADL,-5L,-1L,2UL,0x68L,1L}, {0x7BB73459L,{2848,290,63,2,-2,13,0,140},-2L,{887,252,-26,0,4,4,0,127},0L,0x0427L,0x7253B634L,0xD6L,253UL,-7L}, {0x4981AFD4L,{1480,73,-67,0,-0,16,0,93},-5L,{1422,211,28,2,2,9,0,34},5L,-4L,0x3B024FB4L,0UL,4UL,0xF3L}}}};
                    int i, j, k;
                    (*l_478) = &l_465;
                    for (g_107.f6 = 1; (g_107.f6 >= 0); g_107.f6 -= 1)
                    {
                        int l_490 = 0x93EAC41CL;
                        unsigned short *l_492[10];
                        unsigned short **l_491 = &l_492[9];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_492[i] = &l_471;
                        (**l_478) = (safe_sub_func_uint16_t_u_u(((**g_92) = 65533UL), (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_107.f6 , (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_489 != (p_57 , ((*l_491) = ((l_490 ^ 0xB0L) , (void*)0)))), l_471)), l_490))), (**g_474))), l_471))));
                        if (p_59)
                            continue;
                        (**l_478) = (safe_add_func_int32_t_s_s(p_58, l_490));
                        if (p_59)
                            break;
                    }
                    if ((g_495 != g_495))
                    {
                        (*g_109) = (**l_478);
                    }
                    else
                    {
                        struct S0 *l_498 = &g_133.f1;
                        struct S1 **l_499 = &g_217;
                        int i, j;
                        l_497[0][0][0] = l_496[0][7];
                        (*l_498) = g_74[g_107.f4][g_166];
                        (*g_109) = ((void*)0 != l_499);
                        (*l_478) = l_500;
                    }
                    if ((*g_109))
                    {
                        short *l_510 = &l_497[0][0][0].f4;
                        unsigned char *l_511 = &l_496[0][7].f8;
                        unsigned char *l_512 = &g_65;
                        int l_513 = (-4L);
                        short *l_514 = &l_503[6][7].f4;
                        (*g_216) = (*g_216);
                        (*g_109) = (l_468 < (((*l_514) = (+(((*l_510) = (safe_mul_func_int8_t_s_s(l_468, (l_503[6][7] , (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_74[0][0].f7, p_59)), (*g_93))), p_57)))))) != (p_59 != (((*l_512) = ((*l_511) = (((*l_458) = (((**l_478) , l_496[0][7].f3.f2) ^ (-1L))) | l_503[6][7].f1.f2))) <= l_513))))) == (-1L)));
                    }
                    else
                    {
                        int i, j, k;
                        g_273[g_107.f4][(g_86 + 1)][(g_107.f4 + 1)] = g_273[g_107.f4][g_166][(g_166 + 4)];
                    }
                }
            }
            (*l_516) = l_515;
        }
        g_109 = l_517[0][7];
    }
    return &g_6;
}







static struct S0 ** func_69(struct S0 ** p_70)
{
    struct S0 *l_73 = &g_74[0][0];
    unsigned char *l_77 = &g_65;
    struct S0 **l_417 = (void*)0;
    struct S0 **l_418[9][2][6] = {{{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}, {{&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}, {&g_273[1][3][2], &g_273[1][3][2], &g_273[1][3][4], &g_72, &g_273[1][1][2], &g_72}}};
    struct S0 *l_419[3];
    struct S0 *l_420 = (void*)0;
    struct S0 *l_421[2][5] = {{&g_74[0][0], &g_107.f1, &g_74[0][0], &g_107.f1, &g_74[0][0]}, {&g_74[0][0], &g_107.f1, &g_74[0][0], &g_107.f1, &g_74[0][0]}};
    int *l_422 = (void*)0;
    int *l_423 = &g_107.f6;
    struct S1 l_428 = {0x2CAB29C4L,{948,495,58,0,-0,8,0,222},0xFBL,{1556,144,-51,0,-2,7,0,53},0xBE0BL,0x7CFEL,5L,255UL,254UL,-1L};
    int **l_447 = &l_422;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_419[i] = &g_133.f1;
    (*l_423) = (l_73 == (l_421[1][1] = (l_420 = (l_419[2] = func_75(((*l_73) , l_77))))));
    (*l_423) = (*l_423);
    for (g_166 = 0; (g_166 <= 1); g_166 += 1)
    {
        unsigned short l_424[3][9] = {{0x16F0L, 0x2502L, 0UL, 0xFA20L, 0xFA20L, 0UL, 0x2502L, 0x16F0L, 0UL}, {0x16F0L, 0x2502L, 0UL, 0xFA20L, 0xFA20L, 0UL, 0x2502L, 0x16F0L, 0UL}, {0x16F0L, 0x2502L, 0UL, 0xFA20L, 0xFA20L, 0UL, 0x2502L, 0x16F0L, 0UL}};
        int l_425 = (-1L);
        int *l_426 = &g_133.f0;
        int *l_427 = &g_107.f0;
        int i, j;
        (*l_423) = l_424[2][6];
        if (((((*l_427) = ((*l_426) = (l_424[2][6] < ((l_425 = ((*g_93) = l_424[2][4])) ^ (*l_423))))) , l_424[2][7]) < 0x5B15C773L))
        {
            struct S0 **l_429 = (void*)0;
            (**g_216) = (g_133.f9 , l_428);
            return l_429;
        }
        else
        {
            struct S0 l_440 = {2065,152,-81,1,-2,10,0,162};
            int **l_441 = &l_422;
            for (g_86 = 0; (g_86 <= 1); g_86 += 1)
            {
                unsigned *l_430 = &g_168;
                struct S0 *l_434 = &l_428.f1;
                int l_435 = 0xD24A3C5CL;
                unsigned char **l_436 = &l_77;
                for (g_107.f5 = 0; (g_107.f5 <= 1); g_107.f5 += 1)
                {
                    int **l_431 = &l_422;
                    unsigned char ***l_437 = &l_436;
                    (*l_431) = (((void*)0 == l_430) , (void*)0);
                    for (l_428.f4 = 1; (l_428.f4 >= 0); l_428.f4 -= 1)
                    {
                        unsigned char l_432 = 250UL;
                        int l_433 = 0x77D3097DL;
                        int i, j, k;
                        l_433 = l_432;
                        (*p_70) = l_434;
                        (*p_70) = (*p_70);
                    }
                    if (l_435)
                        break;
                    (*l_437) = l_436;
                }
            }
            for (g_107.f8 = 0; (g_107.f8 == 15); g_107.f8 = safe_add_func_uint16_t_u_u(g_107.f8, 9))
            {
                l_425 = (*l_423);
            }
            (*l_73) = (((**g_92) = 1UL) , l_440);
            (*l_441) = &g_2;
        }
        for (g_133.f2 = 25; (g_133.f2 != (-16)); g_133.f2 = safe_sub_func_uint32_t_u_u(g_133.f2, 7))
        {
            struct S0 **l_446 = &g_273[1][3][2];
            for (g_107.f4 = 23; (g_107.f4 < (-20)); g_107.f4 = safe_sub_func_int16_t_s_s(g_107.f4, 6))
            {
                return l_446;
            }
        }
    }
    (*l_447) = &g_86;
    return &g_72;
}







static struct S0 * func_75(unsigned char * p_76)
{
    struct S0 **l_79 = &g_72;
    int l_83 = 0x794CA015L;
    struct S1 *l_106[6];
    char l_190 = 0xBEL;
    int l_201[1];
    int *l_231 = (void*)0;
    struct S0 l_235 = {1502,498,-13,0,2,10,0,60};
    unsigned char *l_238 = &g_107.f7;
    unsigned l_239 = 1UL;
    int *l_240 = &g_107.f6;
    unsigned char l_263 = 0xBEL;
    struct S0 ***l_291 = &g_71[1];
    char *l_317[5];
    char **l_316 = &l_317[4];
    unsigned short **l_320 = &g_93;
    struct S0 *l_322[5][2] = {{(void*)0, &l_235}, {(void*)0, &l_235}, {(void*)0, &l_235}, {(void*)0, &l_235}, {(void*)0, &l_235}};
    struct S0 *l_344 = &g_107.f1;
    struct S0 *l_348 = (void*)0;
    struct S1 *l_405 = &g_107;
    struct S0 *l_416 = &g_107.f3;
    int i, j;
    for (i = 0; i < 6; i++)
        l_106[i] = &g_107;
    for (i = 0; i < 1; i++)
        l_201[i] = 0x915B41E8L;
    for (i = 0; i < 5; i++)
        l_317[i] = &l_190;
    if ((&g_67 != (void*)0))
    {
        unsigned l_78 = 4294967290UL;
        struct S0 l_101[1] = {{1053,63,24,0,0,12,0,34}};
        int *l_118 = &l_83;
        int *l_198[6] = {&g_6, &g_6, &g_2, &g_6, &g_6, &g_2};
        int **l_209 = &l_198[0];
        struct S1 **l_219 = &g_217;
        struct S0 **l_220 = &g_72;
        int i;
        if (l_78)
        {
            struct S0 ***l_80 = &l_79;
            int l_87 = 0x5C28DFD1L;
            struct S1 **l_136[6][4] = {{&l_106[5], &l_106[5], (void*)0, &l_106[5]}, {&l_106[5], &l_106[5], (void*)0, &l_106[5]}, {&l_106[5], &l_106[5], (void*)0, &l_106[5]}, {&l_106[5], &l_106[5], (void*)0, &l_106[5]}, {&l_106[5], &l_106[5], (void*)0, &l_106[5]}, {&l_106[5], &l_106[5], (void*)0, &l_106[5]}};
            unsigned l_146 = 0xD644B8D8L;
            int *l_147 = &g_86;
            int i, j;
            (*l_80) = l_79;
            for (g_65 = 26; (g_65 != 8); g_65 = safe_sub_func_uint8_t_u_u(g_65, 9))
            {
                int l_97 = (-10L);
                int l_102 = 1L;
                struct S0 *l_103 = &g_74[0][0];
                short l_114 = 0xEB6AL;
                int *l_124[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_124[i] = (void*)0;
                for (l_78 = 0; (l_78 <= 1); l_78 += 1)
                {
                    unsigned l_89 = 1UL;
                    unsigned short ***l_94 = &g_92;
                    for (g_67 = 0; (g_67 <= 1); g_67 += 1)
                    {
                        int *l_84 = &l_83;
                        int *l_85 = &g_86;
                        (*l_85) = ((*l_84) = l_83);
                        (*l_85) = l_87;
                        if (g_74[0][0].f4)
                            break;
                    }
                    for (g_67 = 0; (g_67 <= 1); g_67 += 1)
                    {
                        int l_88 = 0L;
                        int *l_90 = &g_86;
                        int *l_91 = &l_87;
                        (*l_91) = ((*l_90) = (l_88 > l_89));
                    }
                    (*l_94) = g_92;
                }
                for (g_86 = 0; (g_86 != 27); g_86 = safe_add_func_int32_t_s_s(g_86, 7))
                {
                    int *l_98[7] = {(void*)0, (void*)0, &l_87, (void*)0, (void*)0, &l_87, (void*)0};
                    int **l_99 = &l_98[4];
                    int i;
                    g_35.f2 = l_97;
                    (*l_99) = (l_87 , ((**g_92) , l_98[5]));
                    if (l_83)
                    {
                        struct S0 l_100 = {898,417,82,3,-4,0,0,211};
                        l_101[0] = l_100;
                        l_102 = l_100.f1;
                    }
                    else
                    {
                        g_74[0][0].f4 = 0x09C4FFD0L;
                        return l_103;
                    }
                }
                for (l_87 = 0; (l_87 > (-16)); --l_87)
                {
                    struct S1 **l_108 = &l_106[3];
                    (*l_108) = l_106[5];
                    g_109 = &l_102;
                    return (**l_80);
                }
                if ((safe_rshift_func_uint8_t_u_u(g_86, 5)))
                {
                    int *l_112 = &g_6;
                    int **l_113 = &l_112;
                    (*l_113) = l_112;
                }
                else
                {
                    int l_115 = 0x167FD5A9L;
                    int **l_123 = (void*)0;
                    if (l_114)
                    {
                        int **l_116 = &g_109;
                        if (l_115)
                            break;
                        (*l_116) = &g_2;
                    }
                    else
                    {
                        int **l_117[7];
                        unsigned l_121 = 0xAC2CD0B6L;
                        struct S1 l_122 = {1L,{570,200,-70,0,1,21,0,141},-7L,{1257,390,-7,2,1,19,0,173},0x4F9EL,0L,0xE4176206L,0x65L,250UL,0L};
                        int i;
                        for (i = 0; i < 7; i++)
                            l_117[i] = &g_109;
                        l_118 = (void*)0;
                        g_107 = ((safe_rshift_func_uint16_t_u_s(l_121, 1)) , l_122);
                    }
                    l_124[1] = &g_2;
                }
            }
            for (g_107.f0 = 0; (g_107.f0 != (-24)); g_107.f0--)
            {
                struct S1 l_144 = {0x59B4EE9BL,{416,136,-26,3,0,17,0,232},0x43L,{1419,8,10,2,-4,24,0,9},4L,0xE663L,0xB799871AL,0x9FL,250UL,0x97L};
                for (g_107.f4 = 0; (g_107.f4 != (-13)); g_107.f4 = safe_sub_func_int32_t_s_s(g_107.f4, 2))
                {
                    short l_140 = (-6L);
                    struct S0 l_143[10][7] = {{{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}, {{360,331,-87,2,-2,30,0,251}, {2266,69,-61,0,-2,22,0,237}, {360,331,-87,2,-2,30,0,251}, {1298,123,64,3,4,28,0,52}, {1751,128,-8,2,4,29,0,126}, {1055,38,-42,2,3,23,0,239}, {1299,417,65,1,4,27,0,165}}};
                    int i, j;
                    for (l_83 = 0; (l_83 <= (-3)); l_83 = safe_sub_func_uint8_t_u_u(l_83, 2))
                    {
                        struct S0 l_131 = {1031,133,42,1,3,1,0,17};
                        struct S0 *l_132 = &g_107.f1;
                        struct S1 **l_137 = &l_106[5];
                        (*l_132) = l_131;
                        if (l_87)
                            continue;
                        g_133 = g_107;
                        l_101[0].f4 = (l_87 != (((safe_div_func_uint8_t_u_u((l_136[4][1] != l_137), (safe_mod_func_int32_t_s_s((*g_109), (g_107.f3.f2 | l_140))))) , (safe_add_func_int16_t_s_s(((~(&g_92 == (void*)0)) | ((l_143[9][5] , 0L) != g_133.f3.f6)), 0xF08FL))) | 0x02DEFC65L));
                    }
                    return (**l_80);
                }
                (*l_79) = (**l_80);
                for (g_107.f7 = 0; (g_107.f7 <= 3); g_107.f7 += 1)
                {
                    for (g_133.f5 = 3; (g_133.f5 >= 0); g_133.f5 -= 1)
                    {
                        struct S1 l_145 = {1L,{1550,215,-61,2,-0,4,0,167},4L,{2573,447,-16,1,2,19,0,31},0x26FBL,0xA4C9L,9L,0UL,0x1CL,0x23L};
                        l_145 = l_144;
                        if (l_146)
                            break;
                    }
                }
            }
            (*l_147) = l_146;
        }
        else
        {
            int **l_150 = (void*)0;
            int **l_151[1];
            char l_182 = 0x72L;
            int i;
            for (i = 0; i < 1; i++)
                l_151[i] = &g_109;
            for (g_133.f5 = (-24); (g_133.f5 >= (-26)); g_133.f5--)
            {
                return (*l_79);
            }
            g_109 = (void*)0;
            for (g_65 = 0; (g_65 < 3); g_65++)
            {
                struct S1 l_160 = {0x708EC85AL,{1157,496,65,0,3,13,0,2},0x1CL,{1587,294,-0,2,0,26,0,254},0xB62AL,8L,1L,0UL,1UL,0L};
                g_109 = &l_83;
                if (((-1L) <= (l_83 , ((((safe_rshift_func_int8_t_s_u((*l_118), ((l_83 | l_83) & l_83))) , ((((g_133 , (void*)0) != p_76) & (*g_93)) , (*l_118))) && 0L) > 0L))))
                {
                    unsigned *l_165 = &g_166;
                    unsigned *l_167 = &g_168;
                    int l_171 = 0x1852D112L;
                    char *l_180 = &l_160.f9;
                    (*l_118) = (safe_mul_func_int8_t_s_s((&g_109 == &l_118), ((*l_180) = (l_160 , (safe_div_func_int32_t_s_s((((*l_167) = ((*l_165) = (safe_rshift_func_int16_t_s_u((*l_118), 3)))) == ((safe_sub_func_int8_t_s_s(g_107.f1.f2, l_171)) , g_107.f1.f1)), (g_133.f3.f0 = (safe_sub_func_int8_t_s_s((+(((safe_lshift_func_uint8_t_u_s((l_160.f1 , (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_83, l_160.f1.f4)), (*l_118)))), 2)) < (*g_109)) <= (*p_76))), 0x48L)))))))));
                }
                else
                {
                    struct S1 l_181 = {5L,{2033,238,-0,0,-4,24,0,102},5L,{2268,166,65,3,-1,31,0,185},-8L,0x6263L,0x144D6AABL,0UL,0x76L,1L};
                    int *l_191 = &g_86;
                    if (l_160.f1.f7)
                    {
                        unsigned l_187 = 4294967290UL;
                        l_181 = l_160;
                        (*g_109) = (((0xF07CB16BL || (l_182 , 0x989D2F6EL)) & (((safe_rshift_func_uint16_t_u_s(l_83, 8)) , 1L) ^ (safe_sub_func_uint32_t_u_u(l_187, (((g_107.f4 = (safe_add_func_int32_t_s_s((g_107.f5 > (l_190 || g_107.f1.f7)), 0xB3495F28L))) > 0xC590L) , 0x072FE997L))))) && 0UL);
                        if ((*g_109))
                            continue;
                    }
                    else
                    {
                        struct S0 *l_192 = &g_74[0][0];
                        l_191 = (g_67 , &g_2);
                        return l_192;
                    }
                }
                for (l_190 = 13; (l_190 > (-26)); l_190 = safe_sub_func_uint8_t_u_u(l_190, 4))
                {
                    struct S1 l_197 = {0xF02F135AL,{971,87,-65,0,-2,0,0,72},0xDEL,{2245,139,-13,3,1,19,0,49},0x5D69L,0xB895L,0xD1BCB1F4L,0xC5L,0x0BL,0xA6L};
                    for (l_182 = 0; (l_182 < (-30)); --l_182)
                    {
                        g_133 = l_197;
                    }
                    for (l_197.f8 = 0; (l_197.f8 <= 0); l_197.f8 += 1)
                    {
                        int i, j;
                        if (l_197.f3.f3)
                            break;
                        g_109 = l_198[0];
                        g_74[l_197.f8][l_197.f8] = g_74[l_197.f8][l_197.f8];
                    }
                    for (g_67 = 0; (g_67 <= 5); g_67 += 1)
                    {
                        int i;
                        l_198[g_67] = &g_6;
                    }
                }
            }
            l_201[0] = ((*l_118) = (safe_lshift_func_int8_t_s_s(((*g_93) && g_133.f1.f1), 0)));
        }
        for (g_133.f2 = 0; (g_133.f2 <= 4); g_133.f2 = safe_add_func_int32_t_s_s(g_133.f2, 1))
        {
            for (g_107.f0 = 0; (g_107.f0 >= (-29)); g_107.f0 = safe_sub_func_uint8_t_u_u(g_107.f0, 6))
            {
                int **l_206 = &g_109;
                unsigned short l_208 = 65527UL;
                (*l_206) = &g_6;
                for (g_133.f4 = 0; (g_133.f4 >= 0); g_133.f4 -= 1)
                {
                    struct S0 *l_207 = &l_101[0];
                    int i;
                    (*l_207) = l_101[g_133.f4];
                    l_101[g_133.f4].f4 = (*g_109);
                    l_208 = (!l_190);
                }
            }
        }
        (*l_209) = &g_2;
        for (l_78 = (-11); (l_78 <= 7); l_78 = safe_add_func_int32_t_s_s(l_78, 9))
        {
            struct S0 l_218 = {1448,134,44,0,0,5,0,214};
            if (((safe_div_func_uint8_t_u_u(g_107.f3.f5, 0xF4L)) , ((((l_201[0] , g_216) != (l_218 , l_219)) && (!((*p_76) , (-1L)))) , l_190)))
            {
                g_107.f1.f4 = (((void*)0 != l_220) == l_218.f7);
                for (g_133.f4 = 0; (g_133.f4 <= (-13)); g_133.f4 = safe_sub_func_uint8_t_u_u(g_133.f4, 9))
                {
                    g_109 = &g_86;
                }
                (*l_209) = (*l_209);
            }
            else
            {
                return (*l_220);
            }
        }
    }
    else
    {
        unsigned short l_227 = 1UL;
        struct S0 l_228 = {2,488,-65,0,-0,4,0,42};
        int *l_232 = &g_133.f6;
        for (g_133.f7 = 0; (g_133.f7 <= 1); g_133.f7 += 1)
        {
            struct S0 l_229 = {1542,415,41,0,-2,26,0,133};
            int **l_230[9] = {&g_109, &g_109, &g_109, &g_109, &g_109, &g_109, &g_109, &g_109, &g_109};
            int i;
        }
    }
    if ((((safe_rshift_func_uint16_t_u_s(l_201[0], ((*l_79) != (*l_79)))) , ((*l_240) = (((l_235 , (*p_76)) || g_133.f2) & (safe_div_func_int16_t_s_s(((((l_238 == ((((**g_92) && (((l_106[3] != l_106[5]) <= 0x6B6FL) && l_201[0])) , 0x174052BCL) , &g_65)) == g_107.f3.f0) && l_201[0]) | g_107.f1.f7), l_239))))) ^ g_107.f1.f0))
    {
        int l_249 = 3L;
        struct S0 l_259 = {593,439,52,0,-4,23,0,63};
        int l_262 = 0x3AA215B5L;
        int *l_271 = &l_249;
        struct S1 **l_275[2];
        char *l_309 = &g_133.f9;
        short *l_355 = (void*)0;
        short **l_354[7][4][1] = {{{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}, {{&l_355}, {&l_355}, {&l_355}, {&l_355}}};
        int *l_385 = &l_83;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_275[i] = &l_106[5];
        if ((safe_mul_func_uint16_t_u_u(0xEB25L, (safe_mul_func_int16_t_s_s((*l_240), (-1L))))))
        {
            char l_252[9][8] = {{0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}, {0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L, 0xDDL, 0xB0L, 0xB0L}};
            short *l_253 = (void*)0;
            short *l_254 = &g_107.f5;
            short *l_255 = &g_107.f4;
            short *l_256 = &g_133.f5;
            struct S1 l_264 = {0L,{1418,510,70,2,-1,7,0,251},0xE2L,{1334,304,-63,3,3,26,0,144},0x2A40L,-1L,1L,0xB3L,255UL,-6L};
            int *l_272 = &g_133.f6;
            unsigned char l_296 = 0UL;
            struct S0 *l_343 = &l_264.f1;
            int i, j;
            if ((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((*g_93) = l_249) != (safe_rshift_func_int8_t_s_s((((((*l_256) = ((*l_255) = ((*l_254) = l_252[0][5]))) | g_107.f3.f6) != 0x05L) >= l_249), (0x30L != (safe_div_func_int32_t_s_s(((l_259 , g_35.f7) & g_107.f1.f6), g_133.f3.f0)))))), l_259.f7)), l_259.f2)))
            {
                unsigned *l_260 = &g_261;
                int l_265 = 0x9D2F9AA3L;
                (*l_79) = (*l_79);
                if ((((*l_260) = 1UL) , (0x0AC84BFAL & (((1UL ^ ((!4294967286UL) & l_262)) , g_133.f1.f1) || (-6L)))))
                {
                    int **l_268 = &l_231;
                    if (l_263)
                    {
                        int **l_266 = &l_240;
                        (**g_216) = l_264;
                        (*g_217) = (*g_217);
                        (*l_240) = l_265;
                        (*l_266) = &g_86;
                    }
                    else
                    {
                        int **l_267 = &l_231;
                        (*l_267) = &l_201[0];
                    }
                    (*l_268) = &l_262;
                    (**g_216) = (*g_217);
                    (*l_240) = (*l_240);
                }
                else
                {
                    int **l_269 = (void*)0;
                    int **l_270[6] = {(void*)0, (void*)0, &l_240, (void*)0, (void*)0, &l_240};
                    int i;
                    l_272 = (l_271 = &g_2);
                    return g_273[1][3][2];
                }
            }
            else
            {
                struct S1 **l_277 = &l_106[3];
                struct S0 l_282 = {425,132,-60,3,2,26,0,189};
                char **l_315 = (void*)0;
                if ((*l_271))
                {
                    if ((*l_272))
                    {
                        int l_274 = 0x532303F5L;
                        struct S1 ***l_276[6][9][4] = {{{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}, {{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}, {{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}, {{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}, {{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}, {{&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}, {&l_275[1], &l_275[0], &g_216, &l_275[1]}}};
                        int i, j, k;
                        (*g_216) = (*g_216);
                        (*l_240) = l_274;
                        l_277 = l_275[0];
                    }
                    else
                    {
                        int **l_278 = (void*)0;
                        int **l_279 = &l_231;
                        g_109 = &g_6;
                        (*l_279) = &g_2;
                        (*l_271) = (*l_231);
                    }
                }
                else
                {
                    if ((safe_unary_minus_func_int16_t_s(((*l_272) <= ((*l_271) == (l_259 , 0xD9L))))))
                    {
                        struct S1 *l_281 = &g_107;
                        struct S0 *l_283 = &l_259;
                        (*l_283) = (((*l_256) = ((&l_264 == l_281) && g_35.f5)) , l_282);
                    }
                    else
                    {
                        struct S1 l_284 = {0x7BED13A7L,{1063,16,-8,3,2,27,0,239},8L,{1557,463,80,1,-0,21,0,65},1L,0L,0L,0x3EL,255UL,1L};
                        (*l_79) = (l_264 , &l_259);
                        (*g_217) = l_284;
                    }
                    for (l_262 = 0; (l_262 != 28); ++l_262)
                    {
                        struct S0 ****l_287 = (void*)0;
                        struct S0 ****l_288 = (void*)0;
                        struct S0 ***l_290 = &g_71[1];
                        struct S0 ****l_289[7][8] = {{&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}, {&l_290, (void*)0, (void*)0, &l_290, &l_290, (void*)0, (void*)0, &l_290}};
                        int i, j;
                        (*l_272) = ((l_291 = &g_71[0]) != ((*g_217) , &l_79));
                        (*l_271) = (*l_240);
                        if ((*l_271))
                            break;
                    }
                }
                for (g_168 = 0; (g_168 < 46); g_168 = safe_add_func_uint8_t_u_u(g_168, 6))
                {
                    int l_297 = 0x23D4D1E4L;
                    struct S0 l_298 = {48,73,-79,0,-0,24,0,13};
                    struct S0 *l_299 = &l_264.f1;
                    g_109 = &g_6;
                    (*l_299) = ((safe_mul_func_uint8_t_u_u(((*p_76) = (l_296 || (*l_272))), ((5UL ^ (l_297 != (*l_272))) ^ g_133.f3.f1))) , ((*l_272) , l_298));
                    (*l_272) = l_282.f3;
                }
                for (l_264.f8 = (-4); (l_264.f8 != 26); ++l_264.f8)
                {
                    int l_302[5][6][6] = {{{0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}}, {{0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}}, {{0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}}, {{0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}}, {{0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}, {0L, 6L, 1L, 1L, 0x01C37C15L, 7L}}};
                    unsigned *l_310 = &g_166;
                    int **l_311 = (void*)0;
                    int **l_312 = (void*)0;
                    int i, j, k;
                    (*l_240) = (l_302[3][4][0] == (l_264 , (((((safe_sub_func_uint8_t_u_u(l_282.f2, 0x63L)) > (safe_rshift_func_int8_t_s_u((0xACBCL | (!(l_259 , ((*g_93) = (*l_271))))), (*l_272)))) == (l_309 == &l_190)) , &g_166) != l_310)));
                    g_109 = (void*)0;
                    if ((safe_mod_func_uint8_t_u_u(g_107.f1.f3, (*l_272))))
                    {
                        l_316 = l_315;
                    }
                    else
                    {
                        g_109 = &g_6;
                        if ((*l_240))
                            break;
                        (*l_240) = (*g_109);
                        if ((*g_109))
                            break;
                    }
                }
                for (g_107.f9 = 16; (g_107.f9 == (-26)); g_107.f9 = safe_sub_func_int32_t_s_s(g_107.f9, 3))
                {
                    struct S0 *l_323 = &l_264.f3;
                    if ((*l_271))
                    {
                        unsigned short ***l_321 = &l_320;
                        (*l_321) = l_320;
                    }
                    else
                    {
                        int **l_324 = &l_271;
                        l_323 = ((*l_79) = l_322[0][0]);
                        (*l_324) = &l_249;
                    }
                    for (l_83 = 0; (l_83 != (-30)); --l_83)
                    {
                        int **l_327 = &l_271;
                        (*l_327) = &l_249;
                    }
                    for (g_107.f6 = 4; (g_107.f6 == 0); g_107.f6 = safe_sub_func_int32_t_s_s(g_107.f6, 1))
                    {
                        char l_334 = 0xA2L;
                        int l_335 = 0x2E3E6D8BL;
                        int **l_342 = &l_271;
                    }
                    return l_344;
                }
            }
        }
        else
        {
            unsigned l_347 = 0UL;
            (*l_240) = (safe_add_func_int16_t_s_s(l_347, (*l_271)));
            return l_348;
        }
        for (g_107.f6 = 0; (g_107.f6 > (-4)); --g_107.f6)
        {
            int **l_351 = &g_109;
            (*l_271) = 6L;
            (*l_271) = 0L;
            (*l_351) = &l_201[0];
        }
        for (g_86 = 0; (g_86 >= 5); g_86 = safe_add_func_uint16_t_u_u(g_86, 4))
        {
            short ***l_356 = &l_354[3][0][0];
            int l_364 = 0x925E7F82L;
            struct S0 l_372[1] = {{1158,169,-36,0,-0,28,0,240}};
            struct S1 l_406 = {0L,{241,486,6,1,4,6,0,204},1L,{115,247,18,2,-4,4,0,159},0x54F2L,0xCC76L,0x5A4168FAL,0xA3L,0x5BL,5L};
            int i;
            (*l_356) = l_354[3][0][0];
        }
        (*l_271) = (*l_385);
    }
    else
    {
        int *l_407 = &g_6;
        int **l_408 = &l_231;
        struct S0 l_415 = {173,434,-76,3,4,18,0,113};
        (*l_408) = l_407;
        for (g_166 = 29; (g_166 < 7); g_166 = safe_sub_func_int16_t_s_s(g_166, 5))
        {
            unsigned *l_412 = &g_261;
            unsigned **l_411 = &l_412;
            unsigned ***l_413 = &l_411;
            struct S0 *l_414 = &l_235;
            (*l_413) = l_411;
            if ((*l_240))
                continue;
            return (**l_291);
        }
        (*l_408) = (l_415 , (*l_408));
        l_407 = ((*l_408) = &g_86);
    }
    return l_416;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_35.f4, "g_35.f4", print_hash_value);
    transparent_crc(g_35.f5, "g_35.f5", print_hash_value);
    transparent_crc(g_35.f6, "g_35.f6", print_hash_value);
    transparent_crc(g_35.f7, "g_35.f7", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_74[i][j].f0, "g_74[i][j].f0", print_hash_value);
            transparent_crc(g_74[i][j].f1, "g_74[i][j].f1", print_hash_value);
            transparent_crc(g_74[i][j].f2, "g_74[i][j].f2", print_hash_value);
            transparent_crc(g_74[i][j].f3, "g_74[i][j].f3", print_hash_value);
            transparent_crc(g_74[i][j].f4, "g_74[i][j].f4", print_hash_value);
            transparent_crc(g_74[i][j].f5, "g_74[i][j].f5", print_hash_value);
            transparent_crc(g_74[i][j].f6, "g_74[i][j].f6", print_hash_value);
            transparent_crc(g_74[i][j].f7, "g_74[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1.f0, "g_107.f1.f0", print_hash_value);
    transparent_crc(g_107.f1.f1, "g_107.f1.f1", print_hash_value);
    transparent_crc(g_107.f1.f2, "g_107.f1.f2", print_hash_value);
    transparent_crc(g_107.f1.f3, "g_107.f1.f3", print_hash_value);
    transparent_crc(g_107.f1.f4, "g_107.f1.f4", print_hash_value);
    transparent_crc(g_107.f1.f5, "g_107.f1.f5", print_hash_value);
    transparent_crc(g_107.f1.f6, "g_107.f1.f6", print_hash_value);
    transparent_crc(g_107.f1.f7, "g_107.f1.f7", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_107.f3.f0, "g_107.f3.f0", print_hash_value);
    transparent_crc(g_107.f3.f1, "g_107.f3.f1", print_hash_value);
    transparent_crc(g_107.f3.f2, "g_107.f3.f2", print_hash_value);
    transparent_crc(g_107.f3.f3, "g_107.f3.f3", print_hash_value);
    transparent_crc(g_107.f3.f4, "g_107.f3.f4", print_hash_value);
    transparent_crc(g_107.f3.f5, "g_107.f3.f5", print_hash_value);
    transparent_crc(g_107.f3.f6, "g_107.f3.f6", print_hash_value);
    transparent_crc(g_107.f3.f7, "g_107.f3.f7", print_hash_value);
    transparent_crc(g_107.f4, "g_107.f4", print_hash_value);
    transparent_crc(g_107.f5, "g_107.f5", print_hash_value);
    transparent_crc(g_107.f6, "g_107.f6", print_hash_value);
    transparent_crc(g_107.f7, "g_107.f7", print_hash_value);
    transparent_crc(g_107.f8, "g_107.f8", print_hash_value);
    transparent_crc(g_107.f9, "g_107.f9", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1.f0, "g_133.f1.f0", print_hash_value);
    transparent_crc(g_133.f1.f1, "g_133.f1.f1", print_hash_value);
    transparent_crc(g_133.f1.f2, "g_133.f1.f2", print_hash_value);
    transparent_crc(g_133.f1.f3, "g_133.f1.f3", print_hash_value);
    transparent_crc(g_133.f1.f4, "g_133.f1.f4", print_hash_value);
    transparent_crc(g_133.f1.f5, "g_133.f1.f5", print_hash_value);
    transparent_crc(g_133.f1.f6, "g_133.f1.f6", print_hash_value);
    transparent_crc(g_133.f1.f7, "g_133.f1.f7", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3.f0, "g_133.f3.f0", print_hash_value);
    transparent_crc(g_133.f3.f1, "g_133.f3.f1", print_hash_value);
    transparent_crc(g_133.f3.f2, "g_133.f3.f2", print_hash_value);
    transparent_crc(g_133.f3.f3, "g_133.f3.f3", print_hash_value);
    transparent_crc(g_133.f3.f4, "g_133.f3.f4", print_hash_value);
    transparent_crc(g_133.f3.f5, "g_133.f3.f5", print_hash_value);
    transparent_crc(g_133.f3.f6, "g_133.f3.f6", print_hash_value);
    transparent_crc(g_133.f3.f7, "g_133.f3.f7", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    transparent_crc(g_133.f6, "g_133.f6", print_hash_value);
    transparent_crc(g_133.f7, "g_133.f7", print_hash_value);
    transparent_crc(g_133.f8, "g_133.f8", print_hash_value);
    transparent_crc(g_133.f9, "g_133.f9", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
