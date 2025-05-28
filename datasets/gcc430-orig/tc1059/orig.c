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



static unsigned short g_2[8] = {0xEE76L,0xEE76L,0xEE76L,0xEE76L,0xEE76L,0xEE76L,0xEE76L,0xEE76L};
static int g_3[3][4] = {{0xB546158DL,0xB546158DL,0xB546158DL,0xB546158DL},{0xB546158DL,0xB546158DL,0xB546158DL,0xB546158DL},{0xB546158DL,0xB546158DL,0xB546158DL,0xB546158DL}};
static int g_6 = 0xFAFD11D9L;
static int g_9 = 0L;
static unsigned g_118 = 1UL;
static int g_137 = (-7L);
static unsigned char g_166 = 1UL;
static const int g_189 = 0L;
static short g_206 = (-1L);
static int g_213 = (-5L);
static char g_299 = 0x5AL;
static int g_572 = 0x9C1325FCL;
static int g_604 = 0xB7143469L;
static unsigned g_691[4][5] = {{0x30660A0AL,0x30660A0AL,0x30660A0AL,0x30660A0AL,0x30660A0AL},{0xE0961FB2L,0x2C32EAFCL,0xE0961FB2L,0x2C32EAFCL,0xE0961FB2L},{0x30660A0AL,0x30660A0AL,0x30660A0AL,0x30660A0AL,0x30660A0AL},{0xE0961FB2L,0x2C32EAFCL,0xE0961FB2L,0x2C32EAFCL,0xE0961FB2L}};
static unsigned short g_722[1] = {65533UL};
static const int g_813 = 0x452B39B4L;
static int g_823 = (-5L);
static short g_842 = 0xD4ADL;



static int func_1(void);
static unsigned short func_16(char p_17, unsigned p_18);
static char func_24(unsigned p_25, unsigned short p_26, unsigned p_27, unsigned p_28);
static unsigned func_29(unsigned char p_30, unsigned p_31);
static unsigned short func_32(unsigned p_33);
static const unsigned func_46(short p_47, int p_48);
static unsigned func_49(unsigned short p_50, int p_51, unsigned short p_52, int p_53, const unsigned char p_54);
static int func_59(unsigned p_60);
static unsigned func_61(unsigned char p_62, char p_63, unsigned p_64, unsigned char p_65);
static char func_74(unsigned short p_75, unsigned p_76, const short p_77);
static int func_1(void)
{
    unsigned short l_19 = 1UL;
    int l_804[10] = {(-7L),0x1A6364E7L,0x1A6364E7L,(-7L),0x1A6364E7L,0L,0x1A6364E7L,0L,0L,0x1A6364E7L};
    const int l_834 = 0L;
    unsigned l_888 = 1UL;
    int i;
    g_2[2] = 0x7DDC85F7L;
    for (g_3[2][1] = 16; (g_3[2][1] >= (-30)); g_3[2][1] = safe_sub_func_int8_t_s_s(g_3[2][1], 5))
    {
        int l_796 = 0x8A74191AL;
        for (g_6 = 0; (g_6 < 8); g_6 = safe_add_func_int16_t_s_s(g_6, 6))
        {
            unsigned short l_814 = 0x8BADL;
            unsigned char l_817 = 0xC4L;
            int l_818 = 0xCDB76B95L;
            for (g_9 = 0; (g_9 <= 7); g_9 += 1)
            {
                int i;
                if ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u(g_2[g_9], 0xE843631EL)) ^ ((safe_sub_func_uint32_t_u_u((0x8AL > 0x4BL), (g_2[2] || func_16(g_9, l_19)))) > (0x4CF7L && 65533UL))), 4)))
                {
                    if (g_572)
                        break;
                }
                else
                {
                    char l_803 = 0L;
                    l_804[1] = (g_166 & (safe_lshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s(l_796, ((g_3[1][2] >= 0L) && (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_189 <= (g_572 == func_49(l_19, func_59(g_166), g_299, l_803, g_213))), 0)), (-2L)))))) > g_206) && 1L), 5)));
                }
                for (g_166 = 0; (g_166 > 9); ++g_166)
                {
                    for (l_19 = 0; (l_19 <= 0); l_19 += 1)
                    {
                        g_604 = 0x095C448FL;
                    }
                }
            }
            if (((safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_813, ((((g_572 < (-1L)) <= g_2[1]) | g_166) && l_814))) != g_9), ((safe_add_func_int8_t_s_s((-9L), (g_3[2][1] >= l_796))) >= g_2[6]))) | l_817) != 255UL), l_804[6])) | g_722[0]))
            {
                for (g_604 = 0; (g_604 <= 3); g_604 += 1)
                {
                    int i, j;
                    l_818 = g_691[g_604][g_604];
                }
                l_818 = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(0xE2L, 4)) | (g_166 && (func_29(g_823, (safe_lshift_func_int16_t_s_s(g_299, 15))) != 2L))), g_722[0]));
            }
            else
            {
                l_818 = l_804[4];
            }
            if (g_9)
                continue;
        }
    }
    for (g_823 = 1; (g_823 <= 7); g_823 += 1)
    {
        unsigned short l_832 = 65529UL;
        unsigned short l_876[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_876[i][j] = 65535UL;
        }
        for (g_166 = 0; (g_166 <= 7); g_166 += 1)
        {
            short l_835 = 9L;
            int l_897 = 0xA9ABAF93L;
            short l_898 = 8L;
            for (g_9 = 7; (g_9 >= 0); g_9 -= 1)
            {
                int l_856 = 0x85179898L;
                int i;
                l_804[1] = ((safe_add_func_uint16_t_u_u((((g_2[g_166] >= (safe_lshift_func_int16_t_s_u(g_604, 9))) != (safe_mod_func_uint16_t_u_u(0xC0F5L, g_722[0]))) | g_137), g_572)) || l_832);
                for (g_572 = 1; (g_572 <= 7); g_572 += 1)
                {
                    char l_833 = 0xA1L;
                    for (g_213 = 1; (g_213 <= 7); g_213 += 1)
                    {
                        return l_833;
                    }
                }
                if (l_832)
                {
                    unsigned char l_855 = 0UL;
                    g_604 = l_834;
                    g_3[2][1] = g_2[g_166];
                    if (g_691[0][2])
                    {
                        unsigned l_847 = 0xE1587A81L;
                        int l_848[3][3][8] = {{{1L,0xC4573CFCL,3L,0xC4573CFCL,1L,0xA19CD7CCL,2L,1L},{0xA19CD7CCL,0x012BDD46L,1L,0x2D02D587L,(-10L),8L,0xC4573CFCL,0xC4573CFCL},{1L,0x68565EDDL,1L,1L,0x68565EDDL,1L,2L,(-10L)}},{{(-10L),0x04B66691L,3L,1L,0xC4573CFCL,0x2D02D587L,1L,0xA19CD7CCL},{3L,(-5L),0xA19CD7CCL,1L,0xA19CD7CCL,(-5L),3L,(-10L)},{0x68565EDDL,0xA19CD7CCL,0x012BDD46L,1L,0x2D02D587L,(-10L),8L,0xC4573CFCL}},{{1L,1L,7L,0x2D02D587L,0x2D02D587L,7L,1L,1L},{0x68565EDDL,1L,(-5L),0xC4573CFCL,0xA19CD7CCL,1L,0x012BDD46L,0x04B66691L},{3L,1L,(-5L),1L,0xC4573CFCL,1L,(-5L),1L}}};
                        int i, j, k;
                        g_3[2][1] = ((l_835 == (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(g_2[g_166], ((safe_rshift_func_uint16_t_u_u(g_842, func_59(((safe_lshift_func_int16_t_s_s(func_32(l_834), g_572)) != ((safe_lshift_func_uint16_t_u_s((g_2[g_166] != l_832), 2)) | g_2[g_166]))))) >= l_832))), g_3[2][1]))) || l_847);
                        l_848[0][1][0] = (g_2[5] <= (g_2[g_166] ^ 0xE4L));
                    }
                    else
                    {
                        g_213 = (safe_sub_func_uint8_t_u_u(func_74(func_49((safe_lshift_func_uint8_t_u_s(0x59L, l_835)), (g_842 & func_32(l_832)), (((safe_rshift_func_int8_t_s_s(g_3[2][3], 5)) == 0xEDL) < ((-7L) & l_855)), l_804[9], l_832), g_3[2][1], l_834), g_572));
                        g_213 = (g_691[0][2] != (g_722[0] <= g_2[7]));
                        l_804[1] = (g_189 < g_137);
                        l_856 = 0x235194F0L;
                    }
                    g_604 = ((func_74(g_2[5], g_137, l_855) > g_206) != g_722[0]);
                }
                else
                {
                    int l_859 = 0xBFFA77FCL;
                    g_3[0][3] = ((g_3[2][1] > l_835) | ((safe_lshift_func_uint8_t_u_u(255UL, ((l_834 & l_859) ^ (g_213 <= ((safe_lshift_func_int8_t_s_s(g_299, 2)) >= g_6))))) > (safe_sub_func_uint16_t_u_u(g_3[2][1], l_859))));
                }
                if ((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((g_299 || g_6) & func_32(g_691[3][1])), g_213)) != ((l_835 == (g_137 | (g_9 != func_74(g_2[4], g_2[5], l_832)))) <= 255UL)), 0x1D01L)))
                {
                    unsigned l_881 = 0UL;
                    if (l_19)
                    {
                        short l_884 = 0x3AA3L;
                        int l_887 = 0x7FFDD788L;
                        l_804[5] = ((!(safe_lshift_func_int8_t_s_u((g_691[2][2] & (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_2[4], func_74(g_3[2][1], g_137, g_206))), 5)) ^ (g_722[0] & (g_166 & (safe_sub_func_int16_t_s_s((!(g_213 <= g_118)), l_876[0][0]))))) & l_804[9])), l_876[0][0]))) & 0x6541L);
                        l_887 = (((safe_add_func_int8_t_s_s(func_59(l_881), (((g_604 & (g_691[0][2] & g_813)) && (safe_add_func_uint32_t_u_u(l_884, l_856))) <= l_876[1][1]))) == (((((((func_74(g_166, l_856, g_2[1]) > l_856) <= g_722[0]) < 0UL) & g_691[1][1]) >= 0xF609L) > g_206) <= g_572)) | g_2[g_166]);
                    }
                    else
                    {
                        g_213 = g_2[2];
                    }
                    if (l_888)
                        break;
                    l_897 = ((l_835 <= ((!(safe_add_func_uint16_t_u_u(1UL, (g_813 == (safe_lshift_func_uint8_t_u_s((g_691[0][2] || l_835), 6)))))) == 5UL)) >= (((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(65530UL, ((g_722[0] && (-2L)) & 0x30L))), g_3[2][1])) && 1L) > l_881));
                }
                else
                {
                    for (l_832 = 0; (l_832 <= 0); l_832 += 1)
                    {
                        l_898 = g_189;
                    }
                }
            }
        }
    }
    return g_3[0][2];
}







static unsigned short func_16(char p_17, unsigned p_18)
{
    short l_37 = 0xCC01L;
    int l_789 = 2L;
    for (p_17 = 0; (p_17 < (-10)); --p_17)
    {
        int l_42[7][8][4] = {{{7L,(-5L),(-5L),7L},{(-1L),0x1350D55FL,0x2DD31843L,0xFCCEA59FL},{(-1L),7L,0x632CBEB0L,3L},{0x136B8055L,0xC7435724L,0L,0L},{0L,0L,0x88B32A1BL,0x64EB7F04L},{0xC7435724L,0x136B8055L,0L,0xF3004064L},{0xDAD2DA0DL,1L,0L,0L},{0xFCCEA59FL,1L,0L,0xF3004064L}},{{1L,0x136B8055L,(-2L),0x64EB7F04L},{0x032B8146L,0x5DF1D979L,0x632CBEB0L,0L},{0xC758019DL,0x2FF82244L,0xE47E5F8FL,1L},{0x1CAE4674L,0L,0xFAF1BECDL,0xC758019DL},{0xC78859B3L,0x06DE21E5L,(-5L),0L},{1L,0L,7L,0L},{0xE0512ED4L,0L,0xFAF1BECDL,(-1L)},{0x66E66B6CL,1L,0L,0x632CBEB0L}},{{0xC758019DL,0x73B020B2L,(-1L),0xC758019DL},{0x2AD14CA7L,0x65B818E9L,(-2L),0x06DE21E5L},{0xD5DF5B04L,0x1350D55FL,0x6375426BL,(-5L)},{0xFCCEA59FL,0x5DF1D979L,0x33E270BBL,0xCDDCDEDCL},{1L,0L,0L,0x06DE21E5L},{(-2L),0xF3004064L,0xD5DF5B04L,0L},{0x5DF1D979L,0x73B020B2L,2L,0x73B020B2L},{1L,7L,9L,(-1L)}},{{7L,0x5DF1D979L,0x65B818E9L,0x6375426BL},{(-5L),0L,0xE47E5F8FL,0x60EE42ACL},{(-5L),0xFAF1BECDL,0x65B818E9L,0xC758019DL},{7L,0x60EE42ACL,9L,0xD5DF5B04L},{1L,0x2FF82244L,0xC7435724L,(-2L)},{0x136B8055L,0xA6B93DCEL,0x06680214L,0L},{0L,(-2L),0xC1AE2EFAL,0x8A3D3555L},{0L,7L,0x2AD14CA7L,0xFAF1BECDL}},{{0L,0x06680214L,0L,0L},{0x06680214L,(-2L),0x3D0097E4L,0xE47E5F8FL},{(-1L),0x136B8055L,0xFCCEA59FL,(-2L)},{0xFAF1BECDL,0L,0xC1AE2EFAL,7L},{0x88B32A1BL,0x032B8146L,0xF230988AL,0xC1AE2EFAL},{7L,0xC78859B3L,1L,0x032B8146L},{7L,0x0615A034L,0x5036FFE6L,0x66E66B6CL},{0x9BFBD42FL,0x136B8055L,0xF230988AL,0x3D0097E4L}},{{0xD5DF5B04L,0L,0x06DE21E5L,(-5L)},{0xFAF1BECDL,8L,8L,0xFAF1BECDL},{0x2DD31843L,0L,0x3D0097E4L,0xF230988AL},{7L,(-5L),0x1CAE4674L,0xDAD2DA0DL},{0L,0xA6B93DCEL,0x4CEAA963L,0xDAD2DA0DL},{0x33E270BBL,(-5L),0xC1AE2EFAL,0xF230988AL},{0x65B818E9L,0L,(-1L),0xFAF1BECDL},{0x136B8055L,8L,0x6AAE11E5L,(-5L)}},{{0x06680214L,0L,0xE47E5F8FL,0x3D0097E4L},{1L,0x136B8055L,0x5DF1D979L,0x66E66B6CL},{0x632CBEB0L,0x0615A034L,0xC1AE2EFAL,0x032B8146L},{(-1L),0xC78859B3L,0x8A3D3555L,0xC1AE2EFAL},{1L,(-2L),0x1350D55FL,5L},{5L,0x8A3D3555L,0x2DD31843L,(-1L)},{0x88B32A1BL,0xD5DF5B04L,0x3D0097E4L,0x724202D9L},{0x6375426BL,7L,0xCDDCDEDCL,0x66E66B6CL}}};
        int l_785 = 0xCAAC037CL;
        unsigned short l_788 = 7UL;
        int i, j, k;
        l_785 = (safe_rshift_func_int8_t_s_s(p_17, func_24(func_29((+(p_17 | ((0x3FL < (func_32(p_18) <= ((((safe_lshift_func_uint16_t_u_s((l_37 != (~((safe_sub_func_uint8_t_u_u(func_32((safe_add_func_int8_t_s_s(((((9L != func_32(g_3[1][1])) < 0xCBF7L) != l_37) ^ g_2[4]), 8L))), p_18)) ^ l_42[3][4][2]))), p_18)) | (-7L)) ^ l_37) <= 0UL))) != l_42[3][4][2]))), l_42[3][4][2]), l_42[3][4][2], p_17, l_37)));
        l_789 = (safe_add_func_uint32_t_u_u(4UL, func_49(p_18, l_37, (g_722[0] ^ func_74(p_18, g_722[0], (0x54L != l_788))), l_37, g_137)));
        if (p_18)
            continue;
        for (l_785 = 0; (l_785 == (-9)); l_785--)
        {
            if (l_788)
                break;
        }
    }
    return l_789;
}







static char func_24(unsigned p_25, unsigned short p_26, unsigned p_27, unsigned p_28)
{
    unsigned char l_455[7][7] = {{0x2AL,0xCFL,0x98L,249UL,0x98L,0xCFL,0x2AL},{0xFDL,249UL,0x98L,0xDEL,0UL,0xCFL,0xFDL},{0x2AL,249UL,0xD9L,249UL,0UL,0xF5L,0x2AL},{0x2AL,0xCFL,0x98L,249UL,0x98L,0xCFL,0x2AL},{0xFDL,249UL,0x98L,0xDEL,0UL,0xCFL,0xFDL},{0x2AL,249UL,0xD9L,249UL,0UL,0xF5L,0x2AL},{0x2AL,0xCFL,0x98L,249UL,0x98L,0xCFL,0x2AL}};
    char l_492 = 0xF4L;
    int l_528 = (-4L);
    unsigned char l_562 = 0x13L;
    unsigned char l_711 = 4UL;
    int l_741 = 1L;
    int i, j;
    for (g_206 = 1; (g_206 <= 6); g_206 += 1)
    {
        int l_468 = 0x6FC67D27L;
        unsigned short l_499 = 0x4ED3L;
        const unsigned short l_516 = 0xF867L;
        int l_529 = 0x94F7FCB8L;
        const unsigned short l_541 = 65535UL;
        unsigned short l_647 = 65527UL;
        int l_694 = 0x236CDFB7L;
        char l_710 = 0xDEL;
        for (p_25 = 0; (p_25 <= 6); p_25 += 1)
        {
            short l_463 = 0x1264L;
            int l_490 = 9L;
            for (g_137 = 6; (g_137 >= 0); g_137 -= 1)
            {
                short l_460 = 0L;
                int l_546 = (-4L);
                if ((safe_add_func_uint32_t_u_u(4294967290UL, 0x586B22E8L)))
                {
                    int l_477[5][5][5] = {{{(-1L),0x9C4D51D8L,0xCDE5819EL,0x7DF9B104L,0xCDE5819EL},{0x67BCEBC8L,0x67BCEBC8L,0x01CEAB1AL,0xD69C878DL,0x7F97A311L},{0x9C4D51D8L,(-1L),(-1L),0x9C4D51D8L,0xCDE5819EL},{(-4L),0xD69C878DL,0xDAC0776AL,0xDAC0776AL,0xD69C878DL},{0xCDE5819EL,(-1L),0x746ABD2DL,0xC398CDC4L,0xC398CDC4L}},{{0x80DCB467L,0x67BCEBC8L,0x80DCB467L,0xDAC0776AL,0x01CEAB1AL},{0x7DF9B104L,0x7DF9B104L,1L,0x7DF9B104L,0xC398CDC4L},{0xDAC0776AL,0xD69C878DL,(-4L),0x01CEAB1AL,(-4L)},{0x9C4D51D8L,0x9C4D51D8L,1L,0xC398CDC4L,(-1L)},{0xD69C878DL,0xDAC0776AL,0xDAC0776AL,0xD69C878DL,(-4L)}},{{0x7DF9B104L,0xC398CDC4L,0xCDE5819EL,0xCDE5819EL,0xC398CDC4L},{(-4L),0xDAC0776AL,0x67BCEBC8L,0x7F97A311L,0x7F97A311L},{0x746ABD2DL,0x9C4D51D8L,0x746ABD2DL,0xCDE5819EL,1L},{0x01CEAB1AL,0xD69C878DL,0x7F97A311L,0xD69C878DL,0x01CEAB1AL},{0x746ABD2DL,0x7DF9B104L,0x9C4D51D8L,0xC398CDC4L,0x9C4D51D8L}},{{(-4L),(-4L),0x7F97A311L,0x01CEAB1AL,0x80DCB467L},{0x7DF9B104L,0x746ABD2DL,0x746ABD2DL,0x7DF9B104L,0x9C4D51D8L},{0xD69C878DL,0x01CEAB1AL,0x67BCEBC8L,0x67BCEBC8L,0x01CEAB1AL},{0x9C4D51D8L,0x746ABD2DL,0xCDE5819EL,1L,1L},{0xDAC0776AL,(-4L),0xDAC0776AL,0x67BCEBC8L,0x7F97A311L}},{{0xC398CDC4L,0x7DF9B104L,1L,0x7DF9B104L,0xC398CDC4L},{0xDAC0776AL,0xD69C878DL,(-4L),0x01CEAB1AL,(-4L)},{0x9C4D51D8L,0x9C4D51D8L,1L,0xC398CDC4L,(-1L)},{0xD69C878DL,0xDAC0776AL,0xDAC0776AL,0xD69C878DL,(-4L)},{0x7DF9B104L,0xC398CDC4L,0xCDE5819EL,0xCDE5819EL,0xC398CDC4L}}};
                    int i, j, k;
                    if ((safe_sub_func_uint32_t_u_u(func_61(l_455[p_25][p_25], l_460, (safe_sub_func_uint32_t_u_u(l_463, ((safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((~l_468), (safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(func_74(p_26, (((safe_rshift_func_uint8_t_u_u(((((p_25 < l_463) <= ((safe_sub_func_uint16_t_u_u((((!func_32(p_27)) & p_26) <= 7L), g_189)) == l_463)) | g_6) | l_460), 7)) <= l_477[1][1][4]) || 1UL), l_468), p_26)) >= p_28), p_28)))) <= 0xB9L) > g_137), 0x2940L)) >= p_28))), l_455[2][2]), g_2[2])))
                    {
                        unsigned l_480 = 0UL;
                        l_480 = ((safe_rshift_func_int16_t_s_u(0L, 3)) < p_28);
                        g_213 = 0xF69CF8D5L;
                        if (g_137)
                            continue;
                    }
                    else
                    {
                        unsigned l_485[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_485[i] = 0x2805E9E5L;
                        l_490 = ((safe_lshift_func_int16_t_s_u((0x76CDL | (safe_sub_func_int32_t_s_s(l_485[0], l_460))), 10)) >= ((func_74((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((p_26 <= g_118) == (g_206 ^ p_26)), g_3[2][1])), 6)), p_26, g_2[2]) >= l_468) || l_468));
                        l_490 = (((safe_unary_minus_func_uint32_t_u((p_28 != l_455[4][4]))) < func_74(l_490, l_492, (g_2[4] && (p_26 || ((safe_sub_func_uint32_t_u_u((l_485[0] == (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_499, l_490)), 1UL))), (-8L))) >= g_118))))) ^ g_3[2][1]);
                        l_477[2][1][2] = ((((g_299 != p_25) | (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((~(((p_28 | p_27) > ((g_118 ^ (p_26 && (safe_add_func_int16_t_s_s((g_118 < (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((4294967292UL >= g_6), g_299)) >= l_455[0][1]), p_26))), 1UL)))) > 0x9CCE3705L)) != p_28)), l_460)), g_2[7])), l_477[1][1][4]))) && p_28) <= l_492);
                        g_213 = (g_213 >= 2L);
                    }
                    if (func_61(func_74((safe_sub_func_uint32_t_u_u(p_26, (safe_rshift_func_int16_t_s_u(((func_74(p_26, g_3[2][0], l_516) ^ l_477[1][1][4]) || ((safe_rshift_func_int8_t_s_s(g_189, 2)) >= g_3[1][3])), 14)))), g_166, p_25), g_299, l_516, g_299))
                    {
                        return l_477[4][1][1];
                    }
                    else
                    {
                        unsigned l_527 = 0x91F6EC8FL;
                        l_528 = (l_455[2][3] || ((0UL | (((p_26 || ((safe_add_func_uint8_t_u_u(func_74(g_3[0][0], (safe_add_func_int16_t_s_s(0x8120L, ((safe_add_func_uint8_t_u_u(0x93L, 0x7CL)) == (safe_sub_func_uint16_t_u_u(g_206, ((p_26 & l_460) >= l_477[1][1][4])))))), p_28), 0xA7L)) > l_527)) && l_477[4][1][0]) && l_527)) ^ 65532UL));
                    }
                }
                else
                {
                    for (l_492 = 6; (l_492 >= 0); l_492 -= 1)
                    {
                        l_528 = (-1L);
                        l_529 = (-9L);
                        g_213 = p_26;
                    }
                    l_528 = func_32(p_27);
                    for (g_118 = 0; (g_118 <= 6); g_118 += 1)
                    {
                        int l_530 = 0xA1D3C44DL;
                        if (p_28)
                            break;
                        l_530 = 0xD1179D6EL;
                    }
                }
                g_213 = (((((((safe_mod_func_uint32_t_u_u(p_26, p_28)) & (safe_add_func_uint16_t_u_u(7UL, (g_206 >= (l_499 <= p_26))))) >= (((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_32(p_26), ((safe_rshift_func_int8_t_s_s(0x27L, l_455[6][4])) != 6L))), l_460)) == g_166) ^ g_166)) & g_189) | 0xA300C765L) > p_28) >= l_455[2][4]);
                l_490 = l_541;
                for (l_463 = 6; (l_463 >= 0); l_463 -= 1)
                {
                    l_546 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_28, l_499)), (g_2[2] ^ g_3[2][1])));
                }
            }
            for (l_463 = 6; (l_463 >= 0); l_463 -= 1)
            {
                unsigned short l_549[1][7] = {{0x1700L,0x1700L,0x1700L,0x1700L,0x1700L,0x1700L,0x1700L}};
                int l_571[9][4][7] = {{{0x64745B99L,(-1L),1L,1L,4L,0xAAEEE257L,(-4L)},{1L,8L,(-1L),0x3873B519L,0L,0x67D870B0L,0x846FCA40L},{(-4L),0x8DE718F5L,0x64745B99L,0x5E2C747FL,0L,0L,0L},{0L,0x8DE718F5L,6L,0x3C25EBD1L,0x84E7EF7FL,(-1L),0xAEAE5535L}},{{1L,8L,0L,0L,1L,0x8E3F1E36L,7L},{(-1L),(-1L),0x67D870B0L,0x5CB97ED7L,1L,7L,1L},{(-4L),9L,9L,(-4L),0xD1F6099BL,(-1L),6L},{0x44D71DFEL,6L,1L,0L,(-1L),0x5E2C747FL,(-1L)}},{{6L,0x8E3F1E36L,0x5E2C747FL,0L,(-3L),0x8DE718F5L,6L},{0xAEAE5535L,4L,0L,0x4652A5FCL,0xF09CB9D6L,(-4L),1L},{1L,7L,1L,0x3D15EBFDL,9L,0x657440FDL,7L},{6L,0xBA13F6A3L,0x44D71DFEL,0xB422EB51L,1L,0xF54A651DL,0xAEAE5535L}},{{0x543EF3DBL,(-1L),0x662645B9L,0L,(-1L),8L,(-6L)},{0x3C25EBD1L,4L,(-1L),(-1L),(-1L),(-7L),(-3L)},{0x3873B519L,0L,0xF54A651DL,0xF09CB9D6L,(-7L),6L,0x3D15EBFDL},{0x4652A5FCL,(-6L),0xE9D7CDCDL,(-1L),(-1L),0xB422EB51L,1L}},{{8L,0x5E2C747FL,0x84E7EF7FL,(-1L),0x84E7EF7FL,0x5E2C747FL,8L},{0L,0x543EF3DBL,6L,7L,6L,0xF09CB9D6L,(-1L)},{0x04AE0E50L,(-3L),0xAAEEE257L,(-4L),0x5E2C747FL,0x657440FDL,1L},{0xF54A651DL,(-1L),6L,7L,(-1L),0x64745B99L,0x3C780709L}},{{1L,0xAAEEE257L,0x84E7EF7FL,0x3D15EBFDL,7L,(-4L),(-7L)},{0x846FCA40L,0x0A836DACL,0xE9D7CDCDL,(-7L),0L,0xAAEEE257L,1L},{(-1L),6L,0xF54A651DL,1L,0xE9D7CDCDL,(-1L),0x543EF3DBL},{(-6L),(-1L),(-1L),1L,0xD1F6099BL,1L,1L}},{{(-6L),0L,0x0A836DACL,6L,0x657440FDL,6L,(-1L)},{(-1L),0x8DE718F5L,1L,8L,0x846FCA40L,0x3C25EBD1L,0L},{0x846FCA40L,1L,0L,6L,0xAAEEE257L,0xAAEEE257L,6L},{0xBA13F6A3L,0xB422EB51L,0xBA13F6A3L,(-1L),0x19BAA0C6L,4L,0x657440FDL}},{{0x5CB97ED7L,0L,0xF09CB9D6L,1L,0x401948BFL,(-6L),1L},{(-1L),0L,0x3D15EBFDL,1L,(-1L),4L,1L},{0L,6L,1L,(-1L),0x657440FDL,0xAAEEE257L,(-1L)},{0L,6L,0x4652A5FCL,1L,1L,(-4L),1L}},{{6L,(-1L),0x5E2C747FL,0x662645B9L,8L,6L,6L},{0x401948BFL,6L,0x657440FDL,0xD1F6099BL,1L,1L,1L},{(-4L),6L,0xE9D7CDCDL,0xD1F6099BL,0x5CB97ED7L,0x64745B99L,(-4L)},{1L,(-1L),0x3C780709L,0x662645B9L,0x64745B99L,0L,4L}}};
                int i, j, k;
                l_528 = (l_455[p_25][p_25] > g_299);
                if (g_3[2][3])
                    continue;
                for (l_499 = 0; (l_499 <= 6); l_499 += 1)
                {
                    int l_556 = 1L;
                    int i, j;
                    g_213 = 0L;
                    if (l_455[l_463][l_499])
                    {
                        unsigned l_550[2];
                        int l_551 = 0xE13DAE5BL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_550[i] = 0xF65C150FL;
                        g_213 = (((safe_lshift_func_int16_t_s_s(g_189, 14)) & 0UL) > func_49(l_455[p_25][p_25], l_549[0][5], l_550[1], p_27, (g_189 | l_551)));
                        l_556 = ((func_49((safe_rshift_func_uint16_t_u_s(g_213, l_455[6][1])), p_25, func_32((0xE34FED9EL || 0x323517D9L)), (0xD7L & (p_26 || func_49(((((((safe_sub_func_uint32_t_u_u(l_455[l_463][l_499], p_27)) >= p_26) | l_550[1]) & l_549[0][0]) > g_118) > g_213), p_26, p_25, p_27, l_516))), p_27) || l_455[6][5]) != 0x821E24DCL);
                        l_529 = (~((safe_rshift_func_uint8_t_u_s((g_2[2] < l_463), 3)) || ((func_61(p_28, g_206, p_25, func_49(l_463, p_27, g_166, (g_9 ^ 251UL), p_25)) & g_6) >= g_299)));
                        l_571[6][2][4] = ((safe_unary_minus_func_uint16_t_u(((p_25 <= ((g_9 <= p_26) <= (((safe_add_func_int8_t_s_s(l_562, (l_490 && g_3[1][1]))) | (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u(g_2[2], 10)) >= (safe_add_func_int16_t_s_s((0xF485ADC1L && (safe_rshift_func_uint16_t_u_u((p_26 <= 0x87A1B26BL), p_28))), p_25))) && 0x61L), g_213))) && g_213))) >= g_206))) & p_28);
                    }
                    else
                    {
                        unsigned l_575 = 0x9D1DE248L;
                        g_213 = (g_572 != (safe_mod_func_uint32_t_u_u(g_3[2][1], p_27)));
                        return l_575;
                    }
                }
                g_213 = 0x60BD741DL;
            }
        }
        if (p_26)
        {
            const unsigned char l_578[3][9][3] = {{{254UL,1UL,0xD5L},{0xC7L,1UL,253UL},{254UL,254UL,253UL},{1UL,0xC7L,0xD5L},{1UL,254UL,1UL},{1UL,1UL,254UL},{1UL,1UL,1UL},{254UL,1UL,0xD5L},{0xC7L,1UL,253UL}},{{254UL,254UL,247UL},{0xC7L,253UL,254UL},{0xD5L,1UL,0xD5L},{0xD5L,0xC7L,1UL},{0xC7L,0xD5L,0xD5L},{1UL,0xD5L,254UL},{253UL,0xC7L,247UL},{1UL,1UL,247UL},{0xC7L,253UL,254UL}},{{0xD5L,1UL,0xD5L},{0xD5L,0xC7L,1UL},{0xC7L,0xD5L,0xD5L},{1UL,0xD5L,254UL},{253UL,0xC7L,247UL},{1UL,1UL,247UL},{0xC7L,253UL,254UL},{0xD5L,1UL,0xD5L},{0xD5L,0xC7L,1UL}}};
            int l_648 = 0L;
            unsigned char l_683 = 0x0FL;
            int i, j, k;
            g_213 = ((((safe_add_func_uint32_t_u_u((0x6FE9L | l_578[2][6][2]), func_74(g_299, p_26, g_166))) && (safe_add_func_uint32_t_u_u(0xEBE1EA08L, (safe_rshift_func_uint16_t_u_s((g_572 | (g_166 <= l_528)), 8))))) != (-1L)) < p_27);
            if (((0L != (l_528 > 8L)) < (safe_add_func_uint32_t_u_u(g_213, g_166))))
            {
                short l_595 = 1L;
                unsigned short l_596 = 0x6883L;
                int l_634 = 0L;
                unsigned char l_637 = 252UL;
                g_213 = ((safe_lshift_func_int8_t_s_s((-5L), 6)) | ((((p_27 > g_2[2]) & (((safe_mod_func_uint16_t_u_u(((p_28 && (((l_499 != g_2[0]) ^ ((safe_mod_func_int8_t_s_s((~0xC6L), (((safe_add_func_uint16_t_u_u(l_578[2][6][2], (l_541 == g_213))) == g_206) && p_27))) || l_578[1][8][2])) > l_528)) >= l_595), l_596)) ^ g_189) && p_28)) & 0xFBD34FCBL) & 0UL));
                for (g_166 = 0; (g_166 <= 6); g_166 += 1)
                {
                    int i, j;
                    if (func_32(l_455[g_206][g_206]))
                    {
                        int i, j;
                        g_213 = (safe_sub_func_uint16_t_u_u(l_455[g_206][g_206], (safe_sub_func_uint8_t_u_u(g_299, l_455[g_206][g_206]))));
                    }
                    else
                    {
                        unsigned char l_601[5][6] = {{1UL,0xCBL,0xCBL,1UL,248UL,255UL},{255UL,1UL,0x29L,1UL,255UL,253UL},{1UL,255UL,253UL,253UL,255UL,1UL},{0xCBL,1UL,248UL,255UL,248UL,1UL},{248UL,0xCBL,253UL,0x29L,0x29L,253UL}};
                        int i, j;
                        l_601[4][4] = g_189;
                        if (p_26)
                            continue;
                    }
                    if (g_206)
                    {
                        g_604 = (safe_add_func_int32_t_s_s(((p_25 | g_604) | (((safe_mod_func_uint8_t_u_u((((l_595 && func_32(((safe_sub_func_int32_t_s_s((p_25 != (func_74(((g_189 & (g_137 > (l_455[g_206][g_206] < (safe_add_func_uint8_t_u_u(0UL, g_206))))) | p_25), p_25, l_529) && 0x427C4C09L)), 0xF90121A1L)) && 247UL))) > p_26) | p_26), 0xABL)) > 0x07815DE5L) || g_166)), p_27));
                    }
                    else
                    {
                        unsigned l_625[7][8] = {{0x08806185L,4294967293UL,1UL,4294967293UL,0x08806185L,0x08806185L,4294967293UL,1UL},{0x08806185L,0x08806185L,4294967293UL,1UL,4294967293UL,0x3250D835L,0x3250D835L,1UL},{1UL,1UL,1UL,1UL,4294967293UL,1UL,1UL,1UL},{1UL,4294967293UL,0x08806185L,0x08806185L,4294967293UL,1UL,4294967293UL,0x08806185L},{1UL,4294967293UL,1UL,1UL,1UL,1UL,4294967293UL,1UL},{0x3250D835L,1UL,0x08806185L,1UL,0x3250D835L,0x3250D835L,1UL,0x08806185L},{0x3250D835L,0x3250D835L,1UL,0x08806185L,1UL,0x3250D835L,0x3250D835L,1UL}};
                        int i, j;
                        g_213 = ((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(g_604, 3UL)) != (g_189 != (0x19BA5947L && (g_604 >= p_27)))), (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_27 & (safe_add_func_uint8_t_u_u(g_118, (safe_add_func_int8_t_s_s((~(g_118 | l_625[0][3])), l_455[g_206][g_206]))))) | p_27), (-1L))), g_299)) & 1UL) ^ l_455[5][2]))) ^ 0xBBE7L) >= g_2[2]) >= p_25), 9)) == g_137);
                        l_634 = (func_49(p_28, p_25, (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((-1L), (((safe_sub_func_int8_t_s_s(g_189, g_2[1])) || ((p_26 > 0xD040L) < (safe_mod_func_uint16_t_u_u(((l_455[4][2] > p_26) && p_26), p_25)))) > l_578[2][2][0]))), 2)), p_28, p_25) | l_562);
                        l_637 = (safe_rshift_func_int8_t_s_s(g_166, p_25));
                        if (p_27)
                            break;
                    }
                }
                for (g_299 = 6; (g_299 >= 2); g_299 -= 1)
                {
                    unsigned short l_646[2];
                    unsigned l_668[2][9] = {{0xD503DBDAL,1UL,0xD503DBDAL,1UL,0xD503DBDAL,1UL,0xD503DBDAL,1UL,0xD503DBDAL},{0xD4A6A8EAL,0x2E281CEBL,0x2E281CEBL,0xD4A6A8EAL,0xD4A6A8EAL,0x2E281CEBL,0x2E281CEBL,0xD4A6A8EAL,0xD4A6A8EAL}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_646[i] = 65535UL;
                    for (l_634 = 1; (l_634 <= 6); l_634 += 1)
                    {
                        int l_638 = 0xE7EBEC44L;
                        return l_638;
                    }
                    l_528 = (((safe_mod_func_int16_t_s_s((((l_541 ^ ((g_3[2][1] == (safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(0xFBEEL, l_578[0][7][0])) > (((((safe_unary_minus_func_int32_t_s(((func_49(p_25, g_3[2][2], g_3[2][3], (0x083C853DL == p_27), g_118) || l_455[2][6]) == p_28))) > 1UL) < 1L) | p_26) >= l_646[0])) > 0xB086L), g_9))) ^ g_2[4])) | l_647) | l_578[1][5][2]), g_2[2])) || g_299) <= l_499);
                    l_648 = g_3[1][0];
                    for (l_634 = 4; (l_634 >= 1); l_634 -= 1)
                    {
                        const unsigned l_659[1] = {4294967291UL};
                        int i;
                        g_213 = (safe_lshift_func_uint16_t_u_u((func_59((safe_mod_func_int32_t_s_s(l_637, g_3[2][1]))) ^ 65532UL), (g_2[6] & (safe_add_func_int16_t_s_s(func_32(p_25), ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_9, 4)), (0UL ^ l_648))) ^ l_659[0]))))));
                        if (l_595)
                            continue;
                        g_213 = (g_3[2][1] < (g_2[4] | (safe_sub_func_uint8_t_u_u(((g_3[2][1] && p_26) < (safe_add_func_uint8_t_u_u((func_61(((func_32((safe_sub_func_int16_t_s_s((l_659[0] >= p_26), ((((safe_rshift_func_uint16_t_u_u(p_27, func_32(l_668[1][8]))) | 0xF99EL) > 0x7DE0L) > 0xFE115A90L)))) && 1UL) || g_299), l_596, l_668[1][1], p_28) & l_595), l_578[0][2][2]))), g_3[2][3]))));
                    }
                }
            }
            else
            {
                int l_675 = 0x89A11FFCL;
                l_528 = (p_25 ^ (g_572 ^ (func_74(g_118, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(p_26, 3)) || (l_675 >= ((safe_rshift_func_uint16_t_u_s((p_28 > 8L), g_3[1][3])) & (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(0x611BC79FL)) == g_189), l_499))))), p_25)), g_9)), p_28) ^ g_9)));
            }
            g_213 = (((safe_sub_func_uint32_t_u_u((l_683 != ((safe_mod_func_int8_t_s_s(p_25, 2UL)) > (((safe_add_func_int32_t_s_s(l_578[2][6][2], (g_118 < (g_299 ^ (safe_sub_func_uint16_t_u_u(((l_492 | (func_74((g_2[5] < g_9), p_27, l_499) == l_647)) ^ l_648), l_529)))))) == g_6) && g_9))), 0x460E3E0DL)) >= l_578[2][6][2]) | 3L);
        }
        else
        {
            unsigned char l_690 = 0x5AL;
            for (l_562 = 2; (l_562 <= 6); l_562 += 1)
            {
                short l_692 = 0xEED4L;
                for (l_529 = 0; (l_529 <= 6); l_529 += 1)
                {
                    for (l_499 = 0; (l_499 <= 6); l_499 += 1)
                    {
                        l_690 = p_28;
                        g_691[0][2] = g_299;
                    }
                    for (p_25 = 2; (p_25 <= 6); p_25 += 1)
                    {
                        int l_693 = 7L;
                        l_692 = p_27;
                        l_694 = (l_693 > p_27);
                        g_213 = (((p_28 ^ (((0x6959L & (p_25 == l_692)) || p_26) ^ (func_32((p_25 || (safe_lshift_func_uint16_t_u_s(l_690, func_49((safe_sub_func_int8_t_s_s((g_206 != func_61(p_25, g_137, l_541, g_3[2][1])), 0xA9L)), g_572, g_213, l_647, p_25))))) != g_213))) >= g_213) <= (-1L));
                    }
                }
            }
            for (l_647 = 2; (l_647 <= 6); l_647 += 1)
            {
                int l_699 = (-10L);
                l_699 = (-1L);
            }
        }
        if (func_61(((g_189 ^ ((func_59(p_25) ^ ((safe_add_func_uint16_t_u_u(l_528, (g_299 | (safe_sub_func_int16_t_s_s(l_562, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(func_61(func_74(func_32(l_499), func_74((1L & g_9), g_691[0][2], g_691[0][2]), p_25), p_28, l_455[2][6], p_26), 5)) > 3L), p_26)) != l_710), g_189))))))) == 1UL)) ^ 0xECBEL)) && g_691[0][0]), l_455[5][6], l_711, l_562))
        {
            short l_723[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
            int l_724 = 0x80121D18L;
            int i, j;
            l_724 = (safe_rshift_func_uint16_t_u_u((g_206 ^ (safe_add_func_uint32_t_u_u(g_6, (((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_25, (safe_mod_func_uint8_t_u_u((((((((-5L) | ((-1L) && (g_722[0] <= p_26))) != 0xD78C0DB7L) != g_166) <= g_2[3]) && p_27) || 0xEEL), l_723[0][2])))), p_26)) > 0x5ADD13F3L) <= g_722[0])))), 3));
        }
        else
        {
            l_694 = 1L;
        }
        for (g_213 = 0; (g_213 <= 6); g_213 += 1)
        {
            g_604 = 0x42F2B91CL;
        }
    }
    for (l_711 = 0; (l_711 <= 3); l_711 += 1)
    {
        unsigned l_725[3][5][6] = {{{0xA61C8E7DL,1UL,4294967286UL,4294967286UL,1UL,0xA61C8E7DL},{4294967294UL,0xA61C8E7DL,0xAEF10EB5L,1UL,0xAEF10EB5L,0xA61C8E7DL},{0xAEF10EB5L,4294967294UL,4294967286UL,0x78408CB2L,0x78408CB2L,4294967286UL},{0xAEF10EB5L,0xAEF10EB5L,0x78408CB2L,1UL,4294967294UL,0x78408CB2L},{4294967286UL,0xA61C8E7DL,4294967286UL,0xAEF10EB5L,1UL,1UL}},{{1UL,4294967286UL,4294967286UL,1UL,0xA61C8E7DL,0x78408CB2L},{0x78408CB2L,1UL,1UL,1UL,0x78408CB2L,0xAEF10EB5L},{1UL,0x78408CB2L,0xAEF10EB5L,0xAEF10EB5L,0x78408CB2L,1UL},{4294967286UL,1UL,0xA61C8E7DL,0x78408CB2L,0xA61C8E7DL,1UL},{0xA61C8E7DL,4294967286UL,0xAEF10EB5L,1UL,1UL,0xAEF10EB5L}},{{0xA61C8E7DL,0xA61C8E7DL,1UL,0x78408CB2L,4294967294UL,0x78408CB2L},{4294967286UL,0xA61C8E7DL,4294967286UL,0xAEF10EB5L,1UL,1UL},{1UL,4294967286UL,4294967286UL,1UL,0xA61C8E7DL,0x78408CB2L},{0x78408CB2L,1UL,1UL,1UL,0x78408CB2L,0xAEF10EB5L},{1UL,0x78408CB2L,0xAEF10EB5L,0xAEF10EB5L,0x78408CB2L,1UL}}};
        int l_761 = 0x91BBA011L;
        int i, j, k;
        l_725[1][4][0] = l_455[2][2];
        if ((safe_lshift_func_int16_t_s_u(((0x9FL & l_725[1][4][0]) > 0x819C7E81L), (p_27 < (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(0x910CL, 2)), 6))))))
        {
            int l_732 = 9L;
            l_732 = g_722[0];
            if (l_732)
                continue;
            l_528 = g_299;
        }
        else
        {
            g_213 = (-4L);
            return p_27;
        }
        g_604 = (((safe_sub_func_uint16_t_u_u(g_3[2][1], (0UL >= 1UL))) >= ((~1L) != (-4L))) & ((8L ^ l_725[1][3][5]) || (func_49((((safe_rshift_func_int16_t_s_u(p_27, 4)) < (safe_rshift_func_int16_t_s_u(0xDAC4L, p_28))) <= 255UL), p_25, p_25, p_28, l_562) >= l_455[6][0])));
        for (l_528 = 0; (l_528 <= 3); l_528 += 1)
        {
            unsigned short l_748 = 0x84E4L;
            int i, j;
            l_741 = l_455[l_711][(l_528 + 3)];
            if (((65535UL == l_455[(l_711 + 1)][(l_528 + 2)]) > p_25))
            {
                char l_747 = 0xA7L;
                for (l_492 = 1; (l_492 <= 6); l_492 += 1)
                {
                    char l_744 = (-1L);
                    short l_770 = (-1L);
                    l_748 = ((((safe_add_func_int8_t_s_s((-1L), l_744)) || g_722[0]) | ((safe_lshift_func_uint16_t_u_s(l_747, 11)) & g_299)) == g_2[2]);
                    for (g_166 = 0; (g_166 <= 6); g_166 += 1)
                    {
                        int l_757 = 0L;
                        int l_758[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_758[i] = 0xAAF1E355L;
                        l_758[1] = (g_722[0] && ((func_59(l_725[2][4][3]) >= p_25) == ((safe_mod_func_int16_t_s_s(g_2[2], (((((safe_sub_func_uint16_t_u_u((0x1A7CL && (g_299 && (safe_add_func_int8_t_s_s(p_28, (safe_sub_func_uint32_t_u_u(g_6, 4UL)))))), p_28)) && l_757) >= g_3[2][1]) > 0x23F21420L) & p_25))) || 1L)));
                        l_761 = (((g_166 == p_27) & p_27) <= (safe_rshift_func_uint8_t_u_u(p_26, 5)));
                    }
                    for (p_25 = 0; (p_25 <= 6); p_25 += 1)
                    {
                        int i, j;
                        l_761 = ((+((((safe_mod_func_int8_t_s_s(8L, (safe_sub_func_int16_t_s_s(g_691[l_711][(l_711 + 1)], ((((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_455[(l_711 + 2)][p_25], g_299)), p_28)) < l_528) == func_49(p_27, g_118, (((g_572 || 0x98L) | g_3[2][1]) || (-8L)), p_28, p_26)) > g_2[5]))))) < l_747) <= l_770) & l_770)) || (-5L));
                    }
                }
                l_741 = p_25;
                return p_28;
            }
            else
            {
                char l_775 = 6L;
                int l_778 = 0x5E93A42BL;
                if ((p_27 != ((0x4A37L || (7UL <= (g_691[0][4] | (p_28 ^ (p_26 <= (g_2[2] == p_27)))))) <= ((safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((g_722[0] <= l_761) >= l_455[l_711][(l_528 + 3)]), l_775)) <= p_28) == (-1L)), 9UL)) && p_25))))
                {
                    return l_748;
                }
                else
                {
                    if (p_26)
                        break;
                    if (p_28)
                        break;
                    l_778 = func_46(l_775, (0xF171L > ((safe_lshift_func_int16_t_s_u((l_748 != ((func_74(p_25, l_562, p_25) || p_26) != g_6)), 4)) | g_206)));
                    l_778 = 6L;
                }
                return l_775;
            }
        }
    }
    l_741 = (((((safe_add_func_int16_t_s_s(((p_28 ^ 1L) && (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(0xCCL, 4)) < 0xAFL) <= func_59(p_28)), 5))), (~g_722[0]))) == (g_206 < l_528)) && p_25) ^ g_691[0][2]) > p_27);
    return p_25;
}







static unsigned func_29(unsigned char p_30, unsigned p_31)
{
    unsigned l_425[10][5][5] = {{{9UL,0xCD861166L,9UL,0x5E39566DL,0x5E39566DL},{9UL,0xCD861166L,9UL,0x5E39566DL,0x5E39566DL},{9UL,0xCD861166L,9UL,0x5E39566DL,0x5E39566DL},{9UL,0xCD861166L,9UL,0x5E39566DL,0x5E39566DL},{9UL,0xCD861166L,9UL,0x5E39566DL,0x5E39566DL}},{{9UL,0xCD861166L,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL}},{{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL}},{{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL}},{{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,0xCD861166L,1UL,1UL},{0xCD861166L,0x5E39566DL,1UL,9UL,9UL}},{{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL}},{{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL}},{{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL}},{{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,9UL,9UL},{1UL,0x2B2FFAFCL,1UL,0xCD861166L,0xCD861166L},{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L}},{{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L},{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L},{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L},{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L},{0x2B2FFAFCL,9UL,0x2B2FFAFCL,0xCD861166L,0xCD861166L}}};
    int l_426 = 0x38D5244CL;
    int l_429 = (-1L);
    unsigned char l_451 = 0x1DL;
    unsigned l_452 = 0x7D59375BL;
    int l_453 = 0x43D1CCB8L;
    const int l_454 = (-3L);
    int i, j, k;
    if (p_31)
    {
        unsigned short l_55 = 2UL;
        if (g_3[2][1])
        {
            char l_58 = 0L;
            l_426 = ((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u((p_30 < ((p_30 == (4294967291UL | func_46((0x6AA12840L == func_49(func_32(p_30), l_55, (safe_lshift_func_uint8_t_u_s((g_3[2][1] > ((0xABD04657L ^ 0xF2F08334L) | l_58)), 5)), p_30, g_2[2])), g_2[2]))) != 0x30L)), l_425[7][2][0])))) >= p_30);
            for (l_426 = 26; (l_426 <= 26); l_426++)
            {
                g_213 = 0x84D4D3A3L;
                l_429 = (p_30 >= g_3[2][2]);
            }
        }
        else
        {
            int l_430 = 0x5D37A51FL;
            l_430 = g_2[2];
            l_430 = (safe_rshift_func_uint16_t_u_s(func_46((safe_lshift_func_int8_t_s_s(p_31, 1)), (safe_unary_minus_func_uint16_t_u(g_3[2][1]))), 13));
        }
    }
    else
    {
        const int l_444 = (-8L);
        g_213 = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_30, ((func_74((safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((l_444 > (p_30 ^ ((safe_lshift_func_uint16_t_u_s((+g_189), (0UL || l_444))) >= (!((0x0E4FL != p_31) && (safe_rshift_func_int16_t_s_u(g_137, 10))))))), 65535UL)) && p_31), 0xB995L)), l_444, p_31) < 0xCA87C93DL) & g_3[1][3]))), g_299)) < p_31);
        return g_166;
    }
    l_429 = l_451;
    l_426 = (func_74((func_61(l_452, ((l_426 == func_61(l_453, (((l_451 | (l_451 == (((l_426 || 4294967295UL) && 0xFF4CL) >= g_3[2][0]))) ^ l_429) || 4294967289UL), g_6, g_3[0][0])) > l_429), l_429, g_6) ^ p_30), g_299, p_30) >= l_454);
    return l_452;
}







static unsigned short func_32(unsigned p_33)
{
    unsigned l_34 = 4294967295UL;
    l_34 = p_33;
    return g_2[4];
}







static const unsigned func_46(short p_47, int p_48)
{
    unsigned l_149[7] = {0x827892DAL,0x827892DAL,0UL,0x827892DAL,0x827892DAL,0UL,0x827892DAL};
    int l_163 = 6L;
    int l_205 = 4L;
    char l_212 = 0x0EL;
    int l_249 = 0x243089C7L;
    unsigned l_254 = 0x3A04C8BEL;
    short l_269 = 6L;
    char l_270[2][5][1];
    unsigned short l_271 = 65532UL;
    int l_424 = (-8L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_270[i][j][k] = 0x52L;
        }
    }
    for (p_48 = 6; (p_48 >= 0); p_48 -= 1)
    {
        int l_156 = 0x481441D5L;
        int i;
        l_156 = (+(safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_149[p_48], l_149[p_48])), (func_49((l_149[p_48] <= l_149[p_48]), func_49(l_149[p_48], p_47, ((safe_add_func_int8_t_s_s(g_2[3], 0x12L)) != (func_59(p_47) || 0xD83BFDD0L)), g_2[2], l_149[p_48]), l_149[4], p_47, l_149[p_48]) || 0x31L))));
        return l_149[p_48];
    }
    g_166 = ((func_74(func_32(((g_9 != 0x9EE9L) == ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((g_137 && ((safe_mod_func_uint8_t_u_u(((((func_59(l_149[4]) != func_61(l_149[5], (0xEBL && ((l_163 <= (safe_mod_func_uint8_t_u_u(g_9, 0x64L))) & g_2[3])), p_48, l_149[5])) && 0xE9L) ^ l_149[2]) | g_2[2]), 0xAAL)) != 0x0DL)) >= p_48), l_163)) < 1UL), p_47)) >= p_48))), p_47, l_163) <= p_48) ^ g_9);
    for (l_163 = (-16); (l_163 <= 21); l_163 = safe_add_func_int32_t_s_s(l_163, 5))
    {
        char l_173 = 0x1BL;
        int l_250[7][5] = {{4L,0x95A8140EL,(-9L),(-9L),0x95A8140EL},{4L,1L,0x2ED9C985L,0x2ED9C985L,1L},{4L,0x95A8140EL,(-9L),(-9L),0x95A8140EL},{4L,1L,0x2ED9C985L,0x2ED9C985L,1L},{4L,0x95A8140EL,(-9L),(-9L),0x95A8140EL},{4L,1L,0x2ED9C985L,0x2ED9C985L,1L},{4L,0x95A8140EL,(-9L),(-9L),0x95A8140EL}};
        int i, j;
        if ((((safe_lshift_func_int8_t_s_s((0x4CL < (safe_rshift_func_uint16_t_u_s((l_149[5] || 0x49C65317L), (+l_173)))), g_166)) != l_149[4]) | (safe_lshift_func_int8_t_s_u(g_137, ((g_118 == (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(l_173, 9)), p_48))) <= p_47)))))
        {
            int l_184 = 0x9E6F76B8L;
            int l_214 = 0L;
            char l_248 = 0x88L;
            if ((safe_add_func_uint32_t_u_u(l_163, (safe_lshift_func_uint16_t_u_u(0xDC01L, 0)))))
            {
                l_184 = (g_2[3] && 0xF3EFAEFDL);
            }
            else
            {
                char l_194[8] = {2L,2L,2L,2L,2L,2L,2L,2L};
                int l_211 = 0xD5F31A84L;
                int i;
                l_205 = (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_189, (safe_add_func_int32_t_s_s(l_173, (safe_lshift_func_uint16_t_u_s(l_194[6], ((safe_mod_func_uint16_t_u_u(g_118, (safe_rshift_func_uint8_t_u_s(func_74((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_48, g_137)) >= (safe_lshift_func_uint16_t_u_s((~((-1L) >= p_47)), 4))), func_32(g_137))), p_48, p_48), l_149[3])))) != g_3[2][0]))))))), p_48));
                g_206 = 0x0A022885L;
                for (p_48 = 5; (p_48 >= 0); p_48 -= 1)
                {
                    for (g_166 = 0; (g_166 <= 7); g_166 += 1)
                    {
                        int i;
                        return l_194[g_166];
                    }
                    if (g_118)
                        continue;
                    g_213 = ((((0x7A2258DFL < (p_47 & func_59(l_194[2]))) == (+(((safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(func_74(p_48, (func_32(p_48) || l_211), g_3[2][1]), l_194[7])) <= g_206), g_6)) <= l_205) < p_48))) >= l_212) | p_48);
                    l_214 = 0x442BEC65L;
                }
                l_211 = (((safe_rshift_func_uint8_t_u_u((((((g_137 > p_48) <= (!(safe_add_func_int8_t_s_s(3L, (+(safe_mod_func_uint32_t_u_u(g_3[2][1], (p_48 | (g_6 < (l_173 >= (safe_mod_func_int32_t_s_s(g_166, 0x4316CF6DL)))))))))))) < 0x0A5EB146L) == 0xC2F2L) | g_166), 4)) ^ 5L) || l_173);
            }
            for (l_205 = 0; (l_205 <= 6); l_205 += 1)
            {
                int i;
                if (l_149[l_205])
                    break;
                if ((+(safe_unary_minus_func_int8_t_s(g_3[1][3]))))
                {
                    unsigned l_226 = 0x7FABF1FCL;
                    int l_227 = (-3L);
                    unsigned short l_228 = 0x7241L;
                    unsigned char l_240 = 0x19L;
                    g_213 = 0x7921FCF2L;
                    if (g_166)
                    {
                        unsigned l_239[5] = {1UL,1UL,1UL,1UL,1UL};
                        int i;
                        l_227 = (0xAB014F3CL < func_49(l_173, l_184, p_47, (p_47 || g_6), (safe_mod_func_uint32_t_u_u(func_61(l_226, ((p_48 & func_32((g_189 ^ p_48))) <= g_137), g_166, p_48), p_47))));
                        if (l_228)
                            break;
                        g_213 = ((4294967288UL == ((safe_lshift_func_int8_t_s_s(l_173, 0)) | ((((!g_137) & ((0xFCE7L & (!(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(func_61(g_137, l_239[2], g_166, g_213), g_9)), g_2[2])), g_6)) || l_173) | 1UL))) > p_47)) || 4294967295UL) <= 0xB6L))) == g_2[6]);
                    }
                    else
                    {
                        int l_247[9][7][4] = {{{0x6D4B34DCL,0x5767F022L,(-4L),0x060EF3B8L},{0x9B6F88C8L,0xCAE83776L,(-1L),0xC8C10A26L},{0xE04E4066L,0xD1648C3CL,0x9EB3430DL,0x6D62126BL},{0x96902E5CL,0xCFC0601BL,0x6D4B34DCL,0x0E005B64L},{(-3L),(-6L),0x1A803AACL,0xC8C10A26L},{(-9L),9L,0xE5F5F178L,0L},{1L,0x96902E5CL,4L,0xDCAA2655L}},{{0x1A803AACL,0xC639A340L,0x2D9E755FL,0xABCACFD4L},{0L,0xB1176B8CL,0x2B01615AL,0x6F7BA14FL},{(-1L),(-1L),0xE331D999L,0x2D9E755FL},{0x4CA97F19L,0x39F8D692L,0x0B190B9EL,0xA97485B8L},{1L,0x72042A24L,0x4CA97F19L,0x49896F32L},{(-8L),0x8CD26204L,0xCFC0601BL,(-1L)},{0x7B509B9AL,1L,9L,0x2506C6AAL}},{{0x4F870294L,0x2D9E755FL,0x7E142C4EL,(-5L)},{0x7011069DL,(-1L),0x7E46AF6DL,(-4L)},{5L,0x0861D2B5L,(-1L),(-1L)},{(-4L),(-4L),0x99A56468L,(-5L)},{(-3L),0xDCAA2655L,0L,(-1L)},{1L,(-1L),0xABCACFD4L,0L},{0x6D4B34DCL,(-1L),(-6L),(-1L)}},{{(-1L),0xDCAA2655L,(-8L),(-5L)},{(-5L),(-4L),(-5L),(-1L)},{0L,0x0861D2B5L,0L,(-4L)},{(-10L),(-1L),0x7DB5B4E7L,(-5L)},{(-6L),0x2D9E755FL,(-8L),(-8L)},{0L,0x8CD26204L,0x96902E5CL,0x39F8D692L},{(-10L),(-1L),0x6F7BA14FL,7L}},{{0x9EB3430DL,(-7L),0x5A71976BL,0x6D62126BL},{0xF73A63B4L,4L,(-7L),0x7B509B9AL},{0x7CA82C3EL,0L,0xC8C10A26L,(-10L)},{1L,0xCAE83776L,0x9EB3430DL,0L},{(-1L),0x38D345E9L,7L,9L},{0x49896F32L,0xDCAA2655L,0xE5F5F178L,(-4L)},{(-1L),0x2D9E755FL,0x2506C6AAL,0x72042A24L}},{{0x6F7BA14FL,6L,0x4CA97F19L,(-4L)},{7L,0x7E46AF6DL,0L,1L},{0x5A71976BL,0L,0xD1648C3CL,0xABCACFD4L},{(-4L),(-10L),0L,0x0B190B9EL},{0x7E46AF6DL,(-4L),0x39F8D692L,0x7E142C4EL},{0xE5F5F178L,(-6L),0xE331D999L,(-1L)},{(-1L),0L,(-1L),0xAD20B73EL}},{{0xE04E4066L,0xB1176B8CL,0x72042A24L,0x96902E5CL},{0x3C998A2EL,0L,(-1L),0xB1176B8CL},{0xF3346647L,0x9EB3430DL,(-1L),0xE7D8582BL},{0x3C998A2EL,0xE331D999L,0x72042A24L,0xC6DD85AFL},{0xE04E4066L,0xE8C40D49L,(-1L),0x49896F32L},{(-1L),0x49896F32L,0xE331D999L,0xCAE83776L},{0xE5F5F178L,(-3L),0x39F8D692L,0L}},{{0x7E46AF6DL,0xA97485B8L,0L,(-1L)},{7L,0x38D345E9L,(-1L),7L},{0x7011069DL,0xC6DD85AFL,(-5L),(-1L)},{(-1L),0x07EE7F28L,0x6D4B34DCL,(-10L)},{0x7E142C4EL,0xE04E4066L,(-10L),0xB1176B8CL},{0x72042A24L,1L,0x96902E5CL,4L},{(-5L),0xD1648C3CL,(-8L),0xCFC0601BL}},{{0x5A71976BL,0x5767F022L,7L,(-7L)},{0x7B509B9AL,0x1A803AACL,6L,0x9EB3430DL},{0xE04E4066L,(-4L),0L,0x0861D2B5L},{0L,0xBEFCB443L,0x7011069DL,0x49896F32L},{7L,4L,0x7E142C4EL,1L},{0xF3346647L,0x0E005B64L,0x5767F022L,5L},{0x07EE7F28L,(-1L),(-6L),0xCAE83776L}}};
                        int i, j, k;
                        l_240 = l_149[l_205];
                        if (l_149[l_205])
                            continue;
                        l_249 = func_61((((safe_sub_func_int8_t_s_s(((p_48 <= (func_32((safe_mod_func_int32_t_s_s((((((safe_mod_func_int8_t_s_s(func_49((0L >= g_6), g_189, l_247[6][2][1], (l_149[l_205] | (((((func_49((((l_173 != p_47) | 0x78L) || g_6), g_166, p_47, g_189, l_228) || p_47) || l_149[5]) || g_166) | l_205) >= 0L)), l_214), l_248)) != 0xC097L) > g_6) < l_226) ^ g_6), 0x89BF68E0L))) ^ 0x671EL)) && 0xE9L), 1UL)) | g_206) <= p_47), g_2[7], g_213, l_228);
                        if (l_212)
                            break;
                    }
                    return p_48;
                }
                else
                {
                    unsigned l_253 = 0xA13A2662L;
                    l_250[6][0] = (1L & 8UL);
                    for (l_249 = 6; (l_249 >= 0); l_249 -= 1)
                    {
                        g_213 = ((1UL != l_250[6][0]) && g_2[3]);
                        l_250[6][0] = (-1L);
                    }
                    l_253 = (safe_sub_func_uint8_t_u_u(255UL, g_213));
                }
                g_213 = p_48;
            }
        }
        else
        {
            l_254 = (g_6 >= func_32(p_47));
        }
        for (l_205 = 27; (l_205 > 14); l_205 = safe_sub_func_uint32_t_u_u(l_205, 8))
        {
            l_249 = (safe_lshift_func_int8_t_s_s(g_118, 7));
        }
        if (l_173)
            continue;
        g_213 = (g_137 & g_213);
    }
    if ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(p_47, 0)) || (func_74(g_3[0][1], (func_32((g_213 >= (l_163 != ((g_3[2][1] ^ (p_47 < g_2[2])) > (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_213, ((safe_mod_func_uint8_t_u_u((func_49((g_9 <= l_269), p_47, l_249, p_47, g_213) == l_212), 2UL)) >= l_205))), l_270[0][3][0])))))) > l_149[1]), p_48) > l_271)), g_6)))
    {
        unsigned char l_272 = 251UL;
        int l_273 = 0xBE247A6FL;
        l_272 = (-7L);
        l_273 = l_254;
    }
    else
    {
        unsigned short l_279 = 0x45DCL;
        int l_282 = 0L;
        unsigned l_398[6] = {8UL,8UL,8UL,8UL,8UL,8UL};
        int i;
        if (((safe_lshift_func_int16_t_s_s((l_249 == g_189), (((p_47 > p_48) != (g_166 < func_49(p_48, (safe_unary_minus_func_uint32_t_u(0x9D6124FCL)), ((safe_mod_func_int32_t_s_s((l_254 & 0x9FL), p_48)) | p_47), p_47, p_47))) != 0x8000DD47L))) < l_212))
        {
            unsigned char l_280[7];
            int i;
            for (i = 0; i < 7; i++)
                l_280[i] = 255UL;
            l_280[0] = l_279;
            g_213 = g_213;
            if (g_9)
            {
                int l_281 = 7L;
                l_282 = func_74(g_2[7], ((l_270[0][3][0] != (~((0x62A0L >= (l_281 | (l_279 != ((p_48 <= p_48) < (l_280[1] > (p_47 < p_47)))))) || l_280[0]))) == 8L), g_9);
                for (l_269 = 0; (l_269 > (-26)); l_269--)
                {
                    g_213 = ((0x5898F277L ^ p_47) == l_280[0]);
                    if (l_281)
                        break;
                    g_213 = g_189;
                }
                l_249 = (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xC9608DB1L, (0UL || (safe_rshift_func_uint8_t_u_s(l_270[1][0][0], func_32(p_48)))))), (0x10L & (safe_rshift_func_int16_t_s_s((g_206 & l_280[1]), 11))))) > (safe_mod_func_int8_t_s_s(func_59(g_206), p_48))), 0xF2L));
            }
            else
            {
                g_213 = ((safe_add_func_uint16_t_u_u(65535UL, g_299)) | ((p_48 < p_48) & ((((func_32(l_280[0]) & (g_206 >= g_3[0][0])) && (l_280[0] > p_48)) <= 1L) & 0x3C25BEEEL)));
                return l_270[1][2][0];
            }
        }
        else
        {
            int l_310 = (-7L);
            unsigned l_327 = 0UL;
            int l_371 = 0xA0E8362BL;
            l_282 = (safe_rshift_func_uint8_t_u_s(func_74(p_48, g_3[0][3], g_137), (!(p_48 > (func_32(((0x0E67F560L ^ (safe_sub_func_uint16_t_u_u((g_137 && (0x8DBA7CDBL ^ 0xA789A4CDL)), 0x9688L))) && 1UL)) && l_282)))));
            for (g_137 = 5; (g_137 >= 0); g_137 -= 1)
            {
                for (l_249 = 5; (l_249 >= 0); l_249 -= 1)
                {
                    for (l_271 = 1; (l_271 <= 6); l_271 += 1)
                    {
                        int i;
                        if (l_149[g_137])
                            break;
                    }
                }
            }
            for (l_279 = 26; (l_279 <= 59); l_279++)
            {
                char l_311 = 0xC2L;
                int l_340 = 0L;
                for (g_118 = 0; (g_118 <= 6); g_118 += 1)
                {
                    short l_314 = 0x6DE8L;
                    int l_331 = 0xEE8106C0L;
                    l_249 = (safe_mod_func_int16_t_s_s((l_279 != ((safe_add_func_int8_t_s_s(func_61(g_166, g_137, l_249, (p_48 ^ func_61(l_310, g_6, l_311, ((safe_lshift_func_int16_t_s_s(p_47, 12)) > l_314)))), g_118)) > l_310)), p_48));
                    if ((func_74(l_271, ((0x17F1L | (l_282 || (7L | func_32(g_189)))) >= p_47), ((l_149[1] | func_32((safe_mod_func_uint16_t_u_u(0UL, 0xB459L)))) <= g_137)) || p_47))
                    {
                        g_213 = g_9;
                        g_213 = (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_213 | l_314) > (func_32((g_2[2] >= l_279)) != (safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((-1L) < (safe_mod_func_int16_t_s_s((5L >= (0L >= 2L)), g_2[2]))) < 1UL), 1)) & g_3[2][1]), (-4L))))), g_6)), (-1L))) > l_310) ^ g_9);
                    }
                    else
                    {
                        short l_330 = (-1L);
                        g_213 = l_310;
                        l_331 = (func_61(l_311, l_327, g_2[5], p_47) && (0xB9L || ((+(g_189 < (safe_sub_func_int32_t_s_s((-1L), g_9)))) && l_330)));
                        g_213 = (~p_48);
                    }
                    if ((safe_sub_func_uint8_t_u_u(255UL, (safe_sub_func_uint8_t_u_u(l_279, g_3[0][1])))))
                    {
                        const char l_345 = 0xDEL;
                        l_163 = 0L;
                        l_340 = ((((g_2[2] < func_32(g_6)) | (((p_47 >= (0x1EL || ((safe_rshift_func_int16_t_s_u((g_2[2] > (p_47 && (safe_lshift_func_int8_t_s_s(p_48, (g_2[5] & g_299))))), 2)) || 0x06L))) > g_189) > 0x56L)) || g_213) < g_213);
                        g_213 = (((func_32(g_2[2]) || (safe_add_func_uint8_t_u_u(((+(safe_add_func_uint16_t_u_u(l_345, 65535UL))) && ((safe_unary_minus_func_uint8_t_u((0UL || (l_311 & 0x86CB764CL)))) > ((p_47 < l_327) == (-1L)))), l_311))) && p_47) ^ l_314);
                        if (p_47)
                            continue;
                    }
                    else
                    {
                        const unsigned char l_369 = 4UL;
                        int l_370 = 0x349F03E3L;
                        g_213 = (safe_add_func_int16_t_s_s(func_61(p_47, p_48, (safe_mod_func_uint16_t_u_u(g_137, g_213)), (p_48 && l_282)), 65535UL));
                        l_282 = ((safe_add_func_uint16_t_u_u(l_310, g_118)) > ((safe_add_func_int8_t_s_s(0xF5L, (safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint16_t_u_u(g_166, (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((0L == func_32(((safe_mod_func_int8_t_s_s(func_32(g_3[1][3]), (p_48 || l_331))) >= p_47))), p_48)), g_189)) < g_6), l_282)))) < g_9) && l_163) >= p_47), p_47)))) >= l_310));
                        l_370 = (func_32(g_206) ^ l_369);
                        l_371 = l_370;
                    }
                    for (l_331 = 6; (l_331 >= 2); l_331 -= 1)
                    {
                        char l_377 = (-1L);
                        l_377 = (l_270[0][4][0] || ((safe_unary_minus_func_int16_t_s(l_340)) | (g_137 > (safe_mod_func_uint8_t_u_u(((g_137 >= ((+(safe_add_func_int32_t_s_s(p_48, l_314))) && (p_48 == l_310))) && 0x5FL), l_282)))));
                        g_213 = (safe_add_func_uint8_t_u_u((0x17L > (!(safe_lshift_func_int16_t_s_s(g_299, 1)))), (safe_sub_func_uint32_t_u_u(g_137, ((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_47)), l_269)) != (((safe_unary_minus_func_int8_t_s((0x32188C2AL <= ((safe_add_func_int16_t_s_s(l_340, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_340, (255UL >= l_279))), 0x1B4DL)), l_398[5])), 0x2EL)))) | p_48)))) < g_213) != g_206))))));
                    }
                }
                for (l_249 = 0; (l_249 <= 0); l_249 += 1)
                {
                    unsigned short l_401 = 0UL;
                    for (l_254 = 0; (l_254 <= 0); l_254 += 1)
                    {
                        int i, j, k;
                        g_213 = l_270[l_254][(l_254 + 2)][l_249];
                        g_213 = ((safe_lshift_func_uint16_t_u_u((func_74(l_401, (l_310 & g_166), (safe_sub_func_uint8_t_u_u(l_269, l_271))) ^ func_32(p_47)), (safe_mod_func_int16_t_s_s((l_270[l_254][(l_254 + 2)][l_249] <= g_189), g_137)))) <= l_270[0][3][0]);
                        l_371 = l_270[l_254][(l_254 + 2)][l_249];
                    }
                    for (l_401 = 0; (l_401 <= 0); l_401 += 1)
                    {
                        unsigned short l_406 = 0x79CAL;
                        int l_415 = 0xA338E81CL;
                        if (g_2[5])
                            break;
                        l_406 = l_401;
                        l_371 = (func_74(((l_401 && (((func_61(((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0UL, g_118)), (safe_add_func_int32_t_s_s((p_48 != (((l_310 <= ((((!((safe_rshift_func_int8_t_s_s((l_406 >= ((((l_415 ^ (func_74(((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((((+l_282) >= func_32((g_299 != 65532UL))) < (-1L)) != 9L) ^ 0xBDL), g_118)), l_271)) != l_398[0]), 1)), 0xF397L)) <= l_398[5]), g_9, l_340) || p_48)) && l_311) && g_2[2]) != 0xEE59L)), 4)) | g_206)) ^ g_9) >= l_401) > 0x2273L)) < l_424) != 0L)), 0xB3C6EF0DL)))) && l_311), p_47, p_47, g_118) || l_279) <= g_2[2]) > 0x8733DA6AL)) > l_401), p_47, l_310) ^ p_48);
                    }
                }
            }
        }
    }
    return l_270[0][3][0];
}







static unsigned func_49(unsigned short p_50, int p_51, unsigned short p_52, int p_53, const unsigned char p_54)
{
    char l_78 = 0x6BL;
    unsigned l_138 = 0x6BFB62ABL;
    int l_139 = 0xF28E72FCL;
    unsigned l_140 = 0x0867DB85L;
    l_139 = ((g_2[2] >= ((((func_59(func_61((safe_add_func_uint32_t_u_u(p_53, (func_32(p_53) | ((safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((0x1CL < (safe_add_func_int8_t_s_s(func_74((l_78 <= ((safe_sub_func_int32_t_s_s((-1L), (p_51 ^ (l_78 | (-5L))))) < 1L)), l_78, l_78), l_78))), g_2[2])) || p_52) | 0L), l_78)) & 4294967291UL)))), g_2[0], p_50, p_50)) >= l_138) && 5UL) & p_54) || l_138)) >= 5L);
    l_140 = g_6;
    l_139 = (safe_rshift_func_int16_t_s_u((0x82959A08L > (safe_add_func_int8_t_s_s(((func_74((safe_lshift_func_uint16_t_u_u(func_32(l_138), 7)), ((+l_138) & (((safe_sub_func_uint8_t_u_u(p_51, (p_53 | g_2[2]))) | l_138) == 0x17L)), g_2[2]) != 0xD964FF40L) > 0xF6632BE3L), 0x62L))), g_9));
    return l_139;
}







static int func_59(unsigned p_60)
{
    unsigned char l_89 = 5UL;
    int l_104 = 7L;
    unsigned char l_115[4];
    char l_127[2][8] = {{(-3L),3L,3L,(-3L),3L,3L,(-3L),3L},{(-3L),(-3L),0xF3L,(-3L),(-3L),0xF3L,(-3L),(-3L)}};
    unsigned l_136 = 4294967295UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_115[i] = 0UL;
    if ((safe_rshift_func_uint8_t_u_u(g_3[2][2], ((safe_sub_func_uint8_t_u_u((l_89 & (0xAE5FB077L | g_3[2][1])), (+func_32(l_89)))) != (0x3957L < (g_3[2][1] == 0UL))))))
    {
        unsigned l_95 = 0x0F4C7584L;
        if (p_60)
        {
            unsigned l_94 = 0x0EC616C3L;
            unsigned l_100 = 0xD0CF7338L;
            unsigned l_103 = 7UL;
            l_104 = (safe_add_func_uint32_t_u_u((l_94 || (~((l_95 && (-1L)) == (+(safe_rshift_func_int16_t_s_u(0x07EFL, (((safe_add_func_uint32_t_u_u(func_74(l_100, ((safe_mod_func_uint8_t_u_u(func_61(g_2[7], l_95, (!l_103), (0xE9L | 0x6AL)), p_60)) != g_9), g_2[0]), 0x85629ED7L)) | 4294967293UL) >= l_89))))))), 0x397DF8BEL));
        }
        else
        {
            short l_107 = 1L;
            int l_114 = 0L;
            l_114 = ((g_6 > 1L) != ((-7L) & ((((safe_lshift_func_uint8_t_u_u(((((!((g_2[2] <= (g_9 == l_89)) && (l_107 <= (((safe_lshift_func_uint8_t_u_u(g_9, 5)) < (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(p_60, l_107)), l_95))) != 0x0577C06BL)))) && p_60) > p_60) > (-3L)), 1)) != p_60) & p_60) < l_107)));
        }
    }
    else
    {
        return p_60;
    }
    for (p_60 = 0; (p_60 <= 3); p_60 += 1)
    {
        int i;
        g_118 = (safe_sub_func_int16_t_s_s(l_115[p_60], g_3[2][2]));
        l_104 = ((safe_mod_func_uint32_t_u_u((p_60 <= (g_9 & p_60)), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(func_61((safe_sub_func_uint16_t_u_u((!func_61(func_32(g_2[2]), g_2[5], l_127[0][2], l_115[p_60])), 0xBFB3L)), g_118, l_115[p_60], p_60), l_115[p_60])), 1)))) >= (-1L));
    }
    g_137 = (safe_sub_func_int32_t_s_s((func_74(p_60, ((g_118 && (safe_sub_func_int16_t_s_s(g_118, 0x107EL))) < ((l_115[2] != (l_127[1][0] || (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(0x87L, (65532UL != ((p_60 | p_60) > p_60)))) < p_60), 2)))) & l_136)), l_104) ^ g_6), 4294967286UL));
    return g_118;
}







static unsigned func_61(unsigned char p_62, char p_63, unsigned p_64, unsigned char p_65)
{
    int l_84 = 0L;
    l_84 = 1L;
    return l_84;
}







static char func_74(unsigned short p_75, unsigned p_76, const short p_77)
{
    unsigned l_83[8][3][5] = {{{0x41CA980DL,9UL,4294967289UL,0x41CECC2FL,0UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x2801F5D8L,9UL,4294967295UL,0x60FB7EBEL,0UL}},{{2UL,6UL,4294967295UL,2UL,0UL},{0UL,0xE8BC9617L,0xF82584F1L,0x70EA76F4L,4294967289UL},{0UL,0x298B49A5L,2UL,0UL,6UL}},{{4294967286UL,5UL,0xF82584F1L,0xB1927A6AL,8UL},{0UL,7UL,7UL,0UL,4294967295UL},{0UL,5UL,4294967295UL,0x70EA76F4L,8UL}},{{4294967295UL,0x298B49A5L,7UL,4294967295UL,6UL},{0UL,0xE8BC9617L,0xF82584F1L,0x70EA76F4L,4294967289UL},{0UL,0x298B49A5L,2UL,0UL,6UL}},{{4294967286UL,5UL,0xF82584F1L,0xB1927A6AL,8UL},{0UL,7UL,7UL,0UL,4294967295UL},{0UL,5UL,4294967295UL,0x70EA76F4L,8UL}},{{4294967295UL,0x298B49A5L,7UL,4294967295UL,6UL},{0UL,0xE8BC9617L,0xF82584F1L,0x70EA76F4L,4294967289UL},{0UL,0x298B49A5L,2UL,0UL,6UL}},{{4294967286UL,5UL,0xF82584F1L,0xB1927A6AL,8UL},{0UL,7UL,7UL,0UL,4294967295UL},{0UL,5UL,4294967295UL,0x70EA76F4L,8UL}},{{4294967295UL,0x298B49A5L,7UL,4294967295UL,6UL},{0UL,0xE8BC9617L,0xF82584F1L,0x70EA76F4L,4294967289UL},{7UL,2UL,4294967295UL,7UL,5UL}}};
    int i, j, k;
    l_83[7][0][3] = (((p_77 <= (safe_lshift_func_int16_t_s_u((-8L), p_77))) ^ p_77) ^ 6L);
    return p_75;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_691[i][j], "g_691[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_722[i], "g_722[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
