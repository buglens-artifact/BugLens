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



static unsigned short g_8 = 0xEF72L;
static const int g_10 = 0L;
static const int *g_9 = &g_10;
static int g_19[3] = {(-1L),(-1L),(-1L)};
static int g_25 = 0xD8143836L;
static int g_28 = (-1L);
static int g_31 = 0xBBD4856CL;
static int g_45 = 0x132DC1B2L;
static unsigned g_90[9] = {0x3B00C6B6L,0x5AC29F8DL,0x3B00C6B6L,0x3B00C6B6L,0x5AC29F8DL,0x3B00C6B6L,0x3B00C6B6L,0x5AC29F8DL,0x3B00C6B6L};
static int g_91 = 1L;
static int g_93 = 0xE27FCE2EL;
static int g_98 = 0xBA0E3889L;
static int *g_131[7][7] = {{&g_45,(void*)0,&g_25,&g_25,(void*)0,&g_45,&g_19[2]},{&g_45,(void*)0,&g_25,&g_25,(void*)0,&g_45,&g_19[2]},{&g_45,(void*)0,&g_25,&g_25,(void*)0,&g_45,&g_19[2]},{&g_45,(void*)0,&g_25,&g_25,(void*)0,&g_45,&g_19[2]},{&g_45,(void*)0,&g_25,&g_25,(void*)0,&g_45,&g_19[1]},{(void*)0,&g_19[2],&g_91,&g_91,&g_19[2],(void*)0,&g_19[1]},{(void*)0,&g_19[2],&g_91,&g_91,&g_19[2],(void*)0,&g_19[1]}};
static short g_153[7] = {0L,0L,0L,0L,0L,0L,0L};
static int g_180[6] = {0L,0L,0L,0L,0L,0L};
static int g_199 = 0xBA409152L;
static char g_217[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static int **g_229[5][10] = {{&g_131[0][4],&g_131[5][1],(void*)0,&g_131[5][1],&g_131[0][4],&g_131[4][6],&g_131[4][6],&g_131[0][4],&g_131[5][1],(void*)0},{&g_131[0][2],&g_131[0][2],(void*)0,&g_131[0][4],(void*)0,&g_131[0][4],(void*)0,&g_131[0][2],&g_131[0][2],(void*)0},{&g_131[5][1],&g_131[0][4],&g_131[4][6],&g_131[4][6],&g_131[0][4],&g_131[5][1],(void*)0,&g_131[5][1],&g_131[0][4],&g_131[4][6]},{&g_131[2][5],&g_131[0][2],&g_131[2][5],&g_131[4][6],(void*)0,(void*)0,&g_131[4][6],&g_131[2][5],&g_131[0][2],&g_131[2][5]},{&g_131[2][5],&g_131[5][1],&g_131[0][2],&g_131[0][4],&g_131[0][2],&g_131[5][1],&g_131[2][5],&g_131[2][5],&g_131[5][1],&g_131[0][2]}};
static int ***g_228 = &g_229[1][7];
static int *g_275 = &g_199;
static int **g_274 = &g_275;
static unsigned short g_343 = 0xEFE6L;
static int *g_369 = (void*)0;
static const short g_443 = 0x52C6L;
static int g_583 = (-1L);
static int *g_616 = (void*)0;
static int * const g_693 = &g_199;
static unsigned g_739 = 3UL;
static int *g_763[7][4] = {{&g_98,&g_98,&g_25,&g_98},{&g_98,&g_93,&g_93,&g_98},{&g_93,&g_98,&g_93,&g_93},{&g_98,&g_98,&g_25,&g_98},{&g_98,&g_93,&g_93,&g_98},{&g_93,&g_98,&g_93,&g_93},{&g_98,&g_98,&g_25,&g_98}};



static unsigned func_1(void);
static int * func_2(short p_3, const int * p_4, int p_5, unsigned char p_6, int * p_7);
static char func_16(int * p_17);
static unsigned short func_34(unsigned p_35, int p_36, int p_37, int * p_38);
static unsigned short func_39(const int * p_40, unsigned char p_41);
static short func_48(int * const p_49, int p_50, const int p_51);
static unsigned func_57(int * p_58, int * p_59, const unsigned p_60, int p_61, int * p_62);
static int * func_63(short p_64, int * const p_65);
static char func_66(int p_67);
static unsigned func_75(int * const p_76, unsigned short p_77);
static unsigned func_1(void)
{
    unsigned short l_15[4];
    int *l_18 = &g_19[1];
    int *l_582 = &g_583;
    int i;
    for (i = 0; i < 4; i++)
        l_15[i] = 0xEC17L;
    (*g_274) = func_2(g_8, g_9, (safe_mod_func_uint32_t_u_u(((*g_9) >= (safe_rshift_func_uint16_t_u_u(((g_10 > l_15[2]) <= 0xCE96L), 7))), (func_16(l_18) ^ (l_582 == (void*)0)))), (*l_582), l_582);



    ;
    ;
    for (g_583 = (-9); (g_583 != (-27)); g_583 = safe_sub_func_int32_t_s_s(g_583, 9))
    {
        (*g_274) = (void*)0;

        ;
    }
    return (*l_18);
}







static int * func_2(short p_3, const int * p_4, int p_5, unsigned char p_6, int * p_7)
{
    int * const l_594[7][8] = {{(void*)0,&g_199,&g_583,(void*)0,&g_583,&g_199,(void*)0,&g_199},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_19[1],(void*)0,(void*)0},{&g_583,(void*)0,&g_583,&g_199,(void*)0,&g_199,&g_583,(void*)0},{(void*)0,&g_199,&g_583,(void*)0,&g_583,&g_199,(void*)0,&g_199},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_19[1],(void*)0,(void*)0},{&g_583,(void*)0,&g_583,&g_199,(void*)0,&g_199,&g_583,(void*)0},{(void*)0,&g_199,&g_583,(void*)0,&g_583,&g_199,(void*)0,&g_199}};
    int *l_595 = (void*)0;
    const unsigned short l_596 = 0x9044L;
    int *l_597 = &g_91;
    const int **l_666 = (void*)0;
    const int *** const l_665[1] = {&l_666};
    unsigned l_856 = 0xBA89BA3BL;
    int *l_888[4][1][5] = {{{(void*)0,(void*)0,(void*)0,&g_583,&g_583}},{{&g_25,&g_25,&g_25,&g_98,&g_98}},{{(void*)0,(void*)0,(void*)0,&g_583,&g_583}},{{&g_25,&g_25,&g_25,&g_98,&g_583}}};
    int i, j, k;
    for (g_93 = 4; (g_93 >= 0); g_93 -= 1)
    {
        int * const l_584 = &g_583;
        int *l_599[2];
        char l_653[3];
        int ** const *l_662 = (void*)0;
        int * const l_672 = &g_45;
        int *l_727[7][2][3] = {{{&g_28,&g_199,&g_98},{&g_19[1],&g_19[0],&g_98}},{{&g_45,&g_19[1],&g_28},{&g_45,&g_45,&g_28}},{{&g_45,&g_28,&g_19[1]},{&g_19[1],&g_28,&g_45}},{{&g_28,&g_45,&g_45},{&g_28,&g_19[1],&g_45}},{{&g_98,&g_19[0],&g_19[1]},{&g_98,&g_199,&g_28}},{{&g_28,&g_19[1],&g_28},{&g_28,&g_199,&g_98}},{{&g_19[1],&g_19[0],&g_98},{&g_45,&g_19[1],&g_28}}};
        short l_766 = (-4L);
        unsigned l_767[10] = {4294967291UL,4294967287UL,0xB17EAD15L,0xB17EAD15L,4294967287UL,4294967291UL,4294967287UL,0xB17EAD15L,0xB17EAD15L,4294967287UL};
        short l_768 = (-5L);
        short l_837 = 0x2D23L;
        int * const l_851 = &g_583;
        int l_860 = 0x0ACF52EDL;
        const unsigned l_874 = 0x22089C5BL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_599[i] = &g_31;
        for (i = 0; i < 3; i++)
            l_653[i] = 0x53L;
        if (func_48(l_584, (*l_584), (*l_584)))
        {
            int * const l_593[1][1][2] = {{{&g_199,&g_199}}};
            int l_612[1];
            unsigned short l_622[5] = {0x7F96L,0x7F96L,0x7F96L,0x7F96L,0x7F96L};
            int ***l_638 = &g_229[0][9];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_612[i] = 1L;
            for (g_91 = 4; (g_91 >= 0); g_91 -= 1)
            {
                const int **l_657 = &g_9;
                int i, j;
                if (((safe_lshift_func_int8_t_s_u(g_180[4], 0)) < p_3))
                {
                    int *l_598 = &g_583;
                    const int l_613 = 0x653DB5C6L;
                    (*g_274) = &l_612[0];

                    ;
                }
                else
                {
                    int l_621 = 1L;
                    (*l_584) = ((g_45 | (((safe_add_func_uint32_t_u_u((g_616 != l_595), p_5)) < ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_31 & p_6), 0xC2L)), 5)) , p_6)) | ((g_93 , 0UL) <= (*l_584)))) & 1UL);
                    l_621 &= (*p_7);
                }
                if ((l_622[1] == ((+func_48(&p_5, (safe_div_func_uint16_t_u_u(g_93, (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(g_28)), p_5)) <= ((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((func_48(&p_5, g_343, (*l_597)) & 1UL), p_3)), 3L)) || (*p_7))), g_180[0])) , p_6), 2UL)))), (*p_4))) & g_153[0])))
                {
                    int *l_637 = &g_19[1];
                    const char l_652 = 0L;
                    for (g_31 = 0; (g_31 <= 4); g_31 += 1)
                    {
                        int *l_636 = &l_612[0];
                        return l_637;



                    }
                    (*g_274) = l_595;

                    ;
                    for (g_343 = 1; (g_343 <= 4); g_343 += 1)
                    {
                        int l_645 = 0x65D1B872L;
                        int i, j;
                        if ((*p_4))
                            break;
                        (*p_7) = (((&p_5 != (((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_25, (safe_mul_func_uint8_t_u_u((p_3 && (((l_645 || ((((g_343 != l_645) , (l_599[0] != &p_5)) > (&p_5 != &p_5)) == p_3)) ^ 5L) , g_180[4])), l_645)))), (*p_4))) | 1L) , (*g_274))) < (*g_9)) , 1L);
                        (*p_7) = ((65529UL >= (g_91 > p_5)) , (*p_4));
                    }
                    l_653[2] = ((safe_lshift_func_int16_t_s_s((0x439DL & (p_3 | (safe_rshift_func_uint16_t_u_s((*l_637), p_3)))), 7)) == ((0x8DDCL < ((((*l_597) <= ((func_48((*g_274), (p_6 == (safe_lshift_func_int16_t_s_s((p_3 && 1L), g_28))), l_652) , p_5) >= p_3)) && p_6) > g_28)) ^ g_45));
                }
                else
                {
                    for (p_5 = (-17); (p_5 >= (-26)); p_5 = safe_sub_func_uint8_t_u_u(p_5, 5))
                    {
                        int l_656 = 0x8F934819L;
                        l_656 |= (*p_7);
                        (*g_274) = &p_5;

                        ;
                        return l_599[0];



                    }
                }
                l_657 = &p_4;

                ;
                for (g_8 = 0; (g_8 > 23); g_8 = safe_add_func_int8_t_s_s(g_8, 8))
                {
                    if (((safe_add_func_int32_t_s_s((l_662 != &g_229[1][7]), (*p_4))) <= (safe_rshift_func_int16_t_s_u(((&g_274 == l_665[0]) , (safe_rshift_func_uint16_t_u_u(g_28, 14))), 7))))
                    {
                        (*l_584) = (*p_7);
                    }
                    else
                    {
                        char l_669 = (-5L);
                        l_669 = (*p_4);
                        p_5 |= (*p_7);
                    }
                }
            }


            (*l_584) ^= (*p_4);
            if (((((&p_5 != ((*l_584) , &p_5)) , 0x91L) != g_153[6]) | 0L))
            {
                int *l_680 = (void*)0;
                for (g_583 = 20; (g_583 != (-14)); g_583 = safe_sub_func_int8_t_s_s(g_583, 1))
                {
                    int * const l_675[8] = {&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199};
                    int *l_676[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_676[i] = &g_45;
                    p_7 = l_676[3];

                    ;
                }
                (*l_584) = (*p_7);
                if ((*p_7))
                    break;

                for (p_3 = 15; (p_3 <= 28); p_3 = safe_add_func_uint8_t_u_u(p_3, 4))
                {
                    for (g_8 = 1; (g_8 <= 6); g_8 += 1)
                    {
                        int l_679 = 8L;
                        int i, j;
                        l_679 = 0x0534DCB2L;
                        return l_680;



                    }
                }
            }
            else
            {
                unsigned l_694 = 0x766A961CL;
                int *l_700 = &g_98;
                int *l_742 = (void*)0;
                int *l_746 = &g_45;
                if ((((p_5 , (0x01L != (g_217[6] == g_199))) <= (g_199 > p_3)) >= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((g_45 && (safe_div_func_int16_t_s_s((((safe_div_func_int16_t_s_s(func_48(l_594[1][7], ((func_48(((*p_4) , g_693), g_19[1], (*p_4)) <= g_199) < g_98), (*p_7)), p_3)) , p_3) == l_694), g_98))), 15)), 10)), p_5))))
                {
                    unsigned l_697 = 0x52F3F7DBL;
                    for (g_45 = 0; (g_45 <= 2); g_45 += 1)
                    {
                        int i;
                        if (g_19[g_45])
                            break;
                        (*g_274) = &p_5;

                        ;
                    }
                    (*g_693) = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_6, (safe_sub_func_int16_t_s_s((g_25 ^ (((safe_mod_func_int8_t_s_s(g_10, g_443)) != (((safe_div_func_int16_t_s_s(((((void*)0 != &p_5) , (safe_div_func_uint16_t_u_u(65530UL, p_6))) <= (safe_div_func_uint16_t_u_u((p_5 <= g_25), p_5))), 0x78F4L)) , 1UL) & p_3)) ^ 0UL)), p_6)))), g_31));
                    (*p_7) = 0x4ADC50E4L;
                    for (g_98 = 0; (g_98 != (-10)); --g_98)
                    {
                        int *l_717 = &g_45;
                        return l_717;



                    }
                }
                else
                {
                    int l_728[5] = {0x81ADF150L,0x81ADF150L,0x81ADF150L,0x81ADF150L,0x81ADF150L};
                    int * const l_733 = &g_19[1];
                    int * const l_740 = &g_31;
                    int i;
                    if ((~1L))
                    {
                        int *l_718[5][7] = {{&g_19[1],&l_612[0],&g_31,&g_199,&g_199,&g_31,&l_612[0]},{&g_19[1],(void*)0,&g_25,&g_19[1],&g_93,&g_93,&g_19[1]},{&g_25,&l_612[0],&g_25,&g_93,&l_612[0],(void*)0,(void*)0},{&l_612[0],&l_612[0],&g_45,&l_612[0],&g_199,&g_45,&g_19[1]},{&g_19[1],&g_25,(void*)0,&g_19[1],(void*)0,&g_25,&g_19[1]}};
                        int i, j;
                        (*l_597) ^= (((*p_4) , (p_6 | p_6)) , (0xC9L & p_6));
                        (*p_7) &= 0x4DA6274EL;
                        l_728[0] = (safe_div_func_uint8_t_u_u((((((0x0BA69F2DL > (*p_7)) || ((safe_mul_func_uint16_t_u_u((0x79L > (safe_rshift_func_uint16_t_u_s(1UL, g_217[6]))), (((*l_700) , (safe_add_func_int16_t_s_s(g_19[1], (l_727[2][1][2] == l_718[3][4])))) > 0L))) | 0L)) & 0x8CL) || 0xFBL) < g_25), 0x1EL));
                    }
                    else
                    {
                        int l_734 = 0x1BF586C8L;
                        int *l_735[4][2][10] = {{{&g_91,(void*)0,(void*)0,&g_28,&g_93,&g_19[1],&l_612[0],&g_25,&g_45,&g_45},{&g_45,(void*)0,(void*)0,(void*)0,&g_93,&g_19[0],(void*)0,&g_28,(void*)0,&g_28}},{{&g_93,&l_612[0],&g_28,&g_91,(void*)0,(void*)0,&g_45,&g_93,&g_19[1],&g_93},{&g_583,&g_91,(void*)0,(void*)0,(void*)0,&g_91,&g_583,(void*)0,&g_91,(void*)0}},{{&g_583,(void*)0,&g_28,&g_98,&g_19[1],(void*)0,&g_25,&g_25,&g_91,(void*)0},{(void*)0,(void*)0,&g_91,&g_91,&g_19[0],(void*)0,&g_583,(void*)0,&g_91,&g_28}},{{(void*)0,&g_91,&g_98,(void*)0,&g_19[0],&g_25,&g_45,&g_45,&g_25,&g_19[0]},{(void*)0,&l_612[0],&l_612[0],(void*)0,&g_91,&g_98,(void*)0,&g_45,&g_91,(void*)0}}};
                        unsigned short l_736 = 65530UL;
                        char l_741 = 6L;
                        short l_743[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_743[i] = 1L;
                        (*l_584) |= ((((void*)0 == l_638) <= (~l_728[0])) <= (safe_div_func_uint32_t_u_u((&p_4 != ((((p_6 == g_10) || (safe_rshift_func_uint16_t_u_u(((g_217[7] | func_48(l_733, (0x75L > (*l_733)), (*l_700))) , p_5), g_180[4]))) , l_734) , &p_4)), (-3L))));
                        (*l_700) = ((g_153[5] && func_48(l_733, p_6, (*p_7))) ^ 0x5BF8L);
                        if (l_743[2])
                            continue;

                        (*l_597) ^= (*p_4);
                    }
                    (*l_597) &= (safe_lshift_func_uint16_t_u_s((g_93 && 0L), 3));
                    if ((*p_4))
                        continue;

                }
                (*g_274) = &p_5;

                ;
                return l_746;



            }
        }
        else
        {
            char l_757 = 0x82L;
            int * const l_761 = &g_91;
            int *l_776 = &g_583;
            int ***l_784 = &g_229[1][7];
            unsigned char l_875[8] = {0xB2L,0x0DL,0xB2L,0x0DL,0xB2L,0x0DL,0xB2L,0x0DL};
            int i;
            for (p_6 = (-10); (p_6 != 32); p_6 = safe_add_func_int16_t_s_s(p_6, 4))
            {
                const short l_758 = 0x5890L;
                int * const l_762 = (void*)0;
                (*g_274) = g_763[6][1];

                ;
            }
            (*g_693) = 0x21891E8EL;
            for (p_5 = 0; (p_5 == (-27)); p_5 = safe_sub_func_int8_t_s_s(p_5, 7))
            {
                int * const l_775[3] = {&g_91,&g_91,&g_91};
                int l_778 = (-2L);
                char l_781[4] = {7L,7L,7L,7L};
                int l_792[1][6][10] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
                int *l_793 = (void*)0;
                int ***l_814[7][9][1] = {{{&g_229[2][8]},{(void*)0},{&g_229[1][4]},{&g_229[4][5]},{&g_274},{&g_274},{&g_229[3][9]},{&g_274},{(void*)0}},{{&g_274},{&g_229[0][6]},{&g_229[1][7]},{&g_229[0][6]},{&g_274},{(void*)0},{&g_274},{&g_229[3][9]},{&g_274}},{{&g_274},{&g_229[4][5]},{&g_229[1][4]},{(void*)0},{&g_229[2][8]},{&g_229[1][7]},{&g_229[3][9]},{&g_229[3][2]},{&g_229[1][4]}},{{&g_229[1][0]},{&g_229[2][8]},{&g_274},{&g_274},{&g_274},{&g_229[2][8]},{&g_229[4][0]},{&g_229[2][8]},{&g_274}},{{&g_274},{&g_274},{&g_229[2][8]},{&g_229[1][0]},{&g_229[1][4]},{&g_229[3][2]},{&g_229[3][9]},{&g_229[1][7]},{&g_274}},{{&g_229[1][7]},{&g_229[3][9]},{&g_229[3][2]},{&g_229[1][4]},{&g_229[1][0]},{&g_229[2][8]},{&g_274},{&g_274},{&g_274}},{{&g_229[2][8]},{&g_229[4][0]},{&g_229[2][8]},{&g_274},{&g_274},{&g_274},{&g_229[2][8]},{&g_229[1][0]},{&g_229[1][4]}}};
                int i, j, k;
                if ((((*l_672) > ((&p_5 != &p_5) ^ l_766)) , (((p_3 && 0xFCE738EEL) & l_767[8]) | l_768)))
                {
                    unsigned l_777[8][2];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_777[i][j] = 0xCD13A505L;
                    }
                    (*p_7) = ((((((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_48(l_775[1], ((void*)0 == l_662), (*p_7)), g_443)), l_778)) <= (*l_761)), 5)) && g_153[6]) | (*l_597)) , g_153[6]) , p_3) , (*p_7));
                    (*l_761) |= (~(((void*)0 == &p_4) > (safe_add_func_uint16_t_u_u(1UL, 0L))));
                }
                else
                {
                    int l_791 = 7L;
                    (*p_7) |= l_781[3];
                    if ((*p_4))
                        break;
                    if ((safe_mul_func_int16_t_s_s(p_3, (l_784 != l_662))))
                    {
                        int * const l_790 = (void*)0;
                        (*l_584) = (safe_rshift_func_int8_t_s_s(((func_48(&p_5, (safe_sub_func_uint16_t_u_u((&p_5 == ((safe_unary_minus_func_int32_t_s(((void*)0 != &p_7))) , &p_5)), (l_791 == l_792[0][0][9]))), (*p_4)) , 0xF1ED6AE5L) , 0x82L), 7));
                    }
                    else
                    {
                        (*g_274) = l_793;

                        ;
                    }
                    if (((~p_3) , (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((*l_761), (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_153[6], 2)), (p_5 , l_791))) , (0xFF25B865L >= (l_662 == l_784))) ^ (&p_5 == (void*)0)))), 65535UL))))
                    {
                        return l_597;



                    }
                    else
                    {
                        (*g_274) = &p_5;

                        ;
                    }

                    ;
                }
                (*g_274) = &p_5;

                ;
            }
            for (p_5 = 20; (p_5 > 5); p_5 = safe_sub_func_uint8_t_u_u(p_5, 6))
            {
                int *l_820[5];
                unsigned l_869 = 4294967289UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_820[i] = &g_93;
                if ((*p_4))
                {
                    unsigned l_821[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_821[i][j] = 0x265F2BDEL;
                    }
                    (*l_761) ^= (*p_7);
                    for (g_31 = 0; (g_31 <= 7); g_31++)
                    {
                        const int l_819 = 1L;
                        if (l_819)
                            break;
                        if ((*g_693))
                            continue;
                        return l_820[2];



                    }
                    (*l_584) &= (g_180[4] & (-1L));
                }
                else
                {
                    unsigned short l_834 = 0xFFBEL;
                    int * const l_847 = &g_19[0];
                    int *l_852 = &g_45;
                    int *l_853 = &g_28;
                    l_834 |= ((-1L) <= ((*g_9) < (g_153[6] & (g_25 <= (((((safe_mod_func_uint8_t_u_u(g_180[0], ((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_sub_func_uint16_t_u_u((((((safe_div_func_int8_t_s_s((l_662 == &g_229[1][7]), g_199)) > p_5) ^ p_6) || 0xAB0D8EB9L) | 0x55DA0688L), 0L)))) || g_443))) <= g_153[6]) != g_583) , (*p_7)) , g_180[4])))));
                    if (((*l_672) , (safe_rshift_func_uint16_t_u_s((((l_837 | (safe_sub_func_uint8_t_u_u((((g_98 == (!(safe_rshift_func_int8_t_s_s((l_834 , g_98), 2)))) > (safe_unary_minus_func_uint32_t_u(l_834))) >= (safe_mod_func_uint32_t_u_u((+((((((safe_div_func_int32_t_s_s((((func_48(&p_5, g_343, (*p_7)) & 0x41L) && (*p_7)) , (*l_761)), (*l_847))) || (*l_584)) , 0UL) ^ (*g_693)) && (*l_847)) != p_3)), 1UL))), (*l_847)))) <= g_19[0]) || g_28), 6))))
                    {
                        unsigned char l_850[4][2] = {{0x35L,0x35L},{0x35L,0x35L},{0x35L,0x35L},{0x35L,0x35L}};
                        int i, j;
                        (*l_672) = (safe_lshift_func_uint8_t_u_s((0x3756DA03L != ((((l_850[2][0] != ((g_343 , g_180[4]) , g_45)) && g_31) >= p_6) > g_180[3])), 3));
                    }
                    else
                    {
                        int l_859 = 0x6BA193CCL;
                        (*g_274) = l_852;

                        ;
                        (*p_7) = (safe_rshift_func_uint16_t_u_s(l_856, ((((safe_lshift_func_uint16_t_u_s(func_57(l_853, func_63(l_859, func_63((*l_761), (*g_274))), g_343, g_19[1], l_852), g_443)) < 1UL) , l_860) & g_19[0])));

                        ;
                        (*l_584) &= (((p_6 && (*p_4)) ^ 0UL) < (!(safe_mod_func_int8_t_s_s(p_6, (8L && (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_869, (&p_5 != &p_5))), (((l_853 != l_853) < 0x5B1AL) >= (*l_853)))), g_90[8])))))));
                    }
                }
                for (l_757 = (-11); (l_757 < (-18)); l_757 = safe_sub_func_int8_t_s_s(l_757, 4))
                {
                    (*l_851) = ((&g_274 != ((safe_mod_func_uint32_t_u_u(g_8, (*p_7))) , &l_666)) != l_874);
                    if ((0xF28DF010L < ((l_875[2] > (g_93 | p_6)) & (p_3 | g_739))))
                    {
                        (*g_274) = l_820[2];

                        ;
                    }
                    else
                    {
                        (*g_274) = &p_5;

                        ;
                        (*p_7) &= (*p_4);
                    }

                    ;
                }
                for (g_343 = (-4); (g_343 < 21); g_343 = safe_add_func_int32_t_s_s(g_343, 9))
                {
                    (*l_672) &= (&l_666 != l_662);
                    (*g_693) = (-2L);
                    if ((*p_4))
                        break;
                }
                p_4 = &p_5;

                ;
            }
        }
        (*g_693) = ((safe_mul_func_int16_t_s_s((func_48(l_595, p_6, (*p_4)) | 0x9F9AL), 0x152FL)) & g_739);
    }


    ;
    ;
    return l_888[2][0][4];



}







static char func_16(int * p_17)
{
    const char l_22 = 0x76L;
    int * const l_439 = &g_28;
    unsigned l_482 = 4UL;
    short l_533 = 0xB558L;
    int *l_563 = &g_31;
    if ((safe_add_func_uint8_t_u_u(g_10, (l_22 >= (safe_mul_func_uint8_t_u_u(0x41L, l_22))))))
    {
        const int *l_42[6] = {&g_19[1],&g_19[1],&g_19[1],&g_19[1],&g_19[1],&g_19[1]};
        int * const l_471[4] = {&g_19[0],&g_19[0],&g_19[0],&g_19[0]};
        int l_475 = (-4L);
        int l_493 = 3L;
        unsigned l_566 = 0xC2959D62L;
        int i;
        for (g_25 = (-6); (g_25 >= (-1)); g_25++)
        {
            int l_440 = 0x6C547C90L;
            unsigned char l_490[7][4][9] = {{{0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L},{0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L},{0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L},{0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L,0xCEL,0x72L,0x72L}},{{0xCEL,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL}},{{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL}},{{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL}},{{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL}},{{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL}},{{0x72L,2UL,2UL,0x72L,2UL,2UL,0x72L,2UL,2UL},{0x72L,2UL,2UL,2UL,0xCEL,0xCEL,2UL,0xCEL,0xCEL},{2UL,0xCEL,0xCEL,2UL,0xCEL,0xCEL,2UL,0xCEL,0xCEL},{2UL,0xCEL,0xCEL,2UL,0xCEL,0xCEL,2UL,0xCEL,0xCEL}}};
            int l_492 = 0xBE49399CL;
            int i, j, k;
            for (g_28 = 0; (g_28 >= 12); ++g_28)
            {
                short l_43[5][9][5] = {{{0L,0x4938L,0x945CL,0L,0xEDA7L},{0x1B5FL,0xF6C5L,9L,(-1L),(-1L)},{0x945CL,0x0F1FL,0x945CL,(-8L),0xAEB9L},{0x1B5FL,0x5CC9L,(-1L),(-1L),0x4A6BL},{0L,0x0F1FL,(-1L),0L,0xAEB9L},{(-1L),0xF6C5L,(-1L),0x4A6BL,(-1L)},{0L,0x4938L,0x945CL,0L,0xEDA7L},{0x1B5FL,0xF6C5L,9L,(-1L),(-1L)},{0x945CL,0x0F1FL,0x945CL,(-8L),0xAEB9L}},{{0x1B5FL,0x5CC9L,(-1L),(-1L),0x4A6BL},{0L,0x0F1FL,(-1L),0L,0xAEB9L},{(-1L),0xF6C5L,(-1L),0x4A6BL,(-1L)},{0L,0x4938L,0x945CL,0L,0xEDA7L},{0x1B5FL,0xF6C5L,9L,(-1L),(-1L)},{0x945CL,0L,0x09E1L,0x3964L,0x4F16L},{0xF6C5L,0x4A6BL,0x5CC9L,0x296AL,0x3ECDL},{(-10L),0L,0xF3C5L,(-1L),0x4F16L},{0x5CC9L,(-1L),0x5CC9L,0x3ECDL,0x296AL}},{{(-10L),(-8L),0x09E1L,(-1L),0x8DADL},{0xF6C5L,(-1L),(-1L),0x296AL,0x296AL},{0x09E1L,0L,0x09E1L,0x3964L,0x4F16L},{0xF6C5L,0x4A6BL,0x5CC9L,0x296AL,0x3ECDL},{(-10L),0L,0xF3C5L,(-1L),0x4F16L},{0x5CC9L,(-1L),0x5CC9L,0x3ECDL,0x296AL},{(-10L),(-8L),0x09E1L,(-1L),0x8DADL},{0xF6C5L,(-1L),(-1L),0x296AL,0x296AL},{0x09E1L,0L,0x09E1L,0x3964L,0x4F16L}},{{0xF6C5L,0x4A6BL,0x5CC9L,0x296AL,0x3ECDL},{(-10L),0L,0xF3C5L,(-1L),0x4F16L},{0x5CC9L,(-1L),0x5CC9L,0x3ECDL,0x296AL},{(-10L),(-8L),0x09E1L,(-1L),0x8DADL},{0xF6C5L,(-1L),(-1L),0x296AL,0x296AL},{0x09E1L,0L,0x09E1L,0x3964L,0x4F16L},{0xF6C5L,0x4A6BL,0x3C12L,(-1L),9L},{0x8DADL,9L,0x4F16L,(-1L),0x945CL},{0x3C12L,0x4A10L,0x3C12L,9L,(-1L)}},{{0x8DADL,0x33F2L,0x2B33L,(-1L),(-1L)},{0x3ECDL,0x4A10L,0x296AL,(-1L),(-1L)},{0x2B33L,9L,0x2B33L,(-2L),0x945CL},{0x3ECDL,0L,0x3C12L,(-1L),9L},{0x8DADL,9L,0x4F16L,(-1L),0x945CL},{0x3C12L,0x4A10L,0x3C12L,9L,(-1L)},{0x8DADL,0x33F2L,0x2B33L,(-1L),(-1L)},{0x3ECDL,0x4A10L,0x296AL,(-1L),(-1L)},{0x2B33L,9L,0x2B33L,(-2L),0x945CL}}};
                int * const l_472[1][6][9] = {{{&g_28,&g_199,&g_199,&g_28,&g_199,&g_199,&g_28,&g_199,&g_199},{&g_93,&l_440,&l_440,&g_93,&l_440,&l_440,&g_93,&l_440,&l_440},{&g_28,&g_199,&g_199,&g_28,&g_199,&g_199,&g_28,&g_199,&g_199},{&g_93,&l_440,&l_440,&g_93,&l_440,&l_440,&g_93,&l_440,&l_440},{&g_28,&g_199,&g_199,&g_28,&g_199,&g_199,&g_28,&g_199,&g_199},{&g_93,&l_440,&l_440,&g_93,&l_440,&l_440,&g_93,&l_440,&l_440}}};
                int i, j, k;
                for (g_31 = 0; (g_31 <= 2); g_31 += 1)
                {
                    int i;
                }
            }
            if ((*g_9))
                continue;
        }
        (*g_228) = &p_17;


        (*p_17) ^= 0x6B76D250L;
        for (g_31 = 0; (g_31 > (-15)); g_31 = safe_sub_func_int32_t_s_s(g_31, 1))
        {
            unsigned char l_512 = 9UL;
            int **l_515 = &g_275;
            short l_516[3][6][7] = {{{(-2L),0L,0x3297L,(-2L),0x3297L,0L,(-2L)},{0xC478L,0x1CD9L,(-1L),0L,2L,0L,(-1L)},{(-2L),(-2L),0x8FF4L,0x4AE7L,6L,0x8FF4L,6L},{(-1L),0x2BFDL,(-1L),1L,0L,9L,(-1L)},{(-1L),6L,0x3297L,0x3297L,6L,(-1L),0L},{0xCC21L,1L,0xAA23L,0x1CD9L,2L,(-7L),(-1L)}},{{6L,0L,(-1L),6L,0x3297L,0x3297L,6L},{0xC478L,1L,0xC478L,0L,(-1L),0x2BFDL,(-1L)},{0x4AE7L,6L,0x8FF4L,6L,0x4AE7L,0x8FF4L,(-2L)},{2L,0x2BFDL,0L,0x1CD9L,0L,0x2BFDL,2L},{(-1L),(-2L),0L,0x3297L,(-2L),0x3297L,0L},{2L,0x2BFDL,(-1L),0L,0xC478L,1L,0xC478L}},{{0x3297L,0L,0L,0x3297L,0x7BE9L,0x8FF4L,0x3297L},{0xAA23L,9L,0x8BC4L,0xA117L,0xC478L,(-7L),6L},{(-1L),0x3297L,0x4AE7L,0L,0L,0x4AE7L,0x3297L},{0xC478L,7L,0xAA23L,9L,0x8BC4L,0xA117L,0xC478L},{0x8FF4L,0x3297L,0x8FF4L,0x7BE9L,0x3297L,0L,0L},{0L,9L,(-1L),9L,0L,1L,(-1L)}}};
            int ***l_538 = &g_274;
            int l_555[1][6][7] = {{{0x6AE9C315L,0xC5267024L,0x6AE9C315L,(-2L),(-2L),0x6AE9C315L,0xC5267024L},{0L,0xCF106643L,(-8L),0xFE59029FL,(-10L),4L,(-10L)},{0x6AE9C315L,(-2L),(-2L),0x6AE9C315L,0xC5267024L,0x6AE9C315L,(-2L)},{1L,0x924870A3L,0L,0xFE59029FL,0L,0x924870A3L,1L},{0xF8693797L,(-2L),0xDB24D3CDL,(-2L),0xF8693797L,0xF8693797L,(-2L)},{0xCC59CD81L,0xCF106643L,0xCC59CD81L,4L,0L,1L,(-10L)}}};
            int i, j, k;
            if (((safe_lshift_func_uint8_t_u_s(254UL, 7)) != (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_217[0] , 0xE019L), (safe_div_func_uint8_t_u_u(g_28, (*l_439))))), g_343)), (safe_rshift_func_int16_t_s_u((func_34((((safe_sub_func_int16_t_s_s((l_512 <= (safe_sub_func_uint32_t_u_u(((l_515 != (void*)0) , (*l_439)), (**l_515)))), (*l_439))) , (*l_439)) && 0xC8E4L), g_343, g_19[0], (*l_515)) && (**l_515)), l_516[2][4][2])))) == (*l_439)), 0L))))
            {
                int **l_517 = &g_369;
                (*l_517) = l_439;

                ;
                l_42[1] = func_63(g_153[6], p_17);


                for (g_25 = 1; (g_25 < (-23)); g_25--)
                {
                    unsigned char l_520 = 0x47L;
                    (*l_439) = (*p_17);
                    for (g_98 = 0; (g_98 <= 4); g_98 += 1)
                    {
                        int i, j;
                        (**l_515) = l_520;
                    }
                    for (g_93 = 19; (g_93 == (-4)); g_93 = safe_sub_func_int8_t_s_s(g_93, 2))
                    {
                        int l_525[7][1][6] = {{{0xBD112002L,0xF47C3AB1L,(-1L),0xB0CB3A23L,0x5FA71856L,0xB0CB3A23L}},{{0xBEEA884BL,0x162E85ADL,0xBEEA884BL,(-1L),0xAF250661L,0x51E375A4L}},{{(-1L),0xAF250661L,0x51E375A4L,0x5FA71856L,(-5L),(-8L)}},{{0x2DB8C20AL,0x51E375A4L,(-1L),0x5FA71856L,(-1L),(-1L)}},{{(-1L),0L,0L,(-1L),8L,0x1BB957E9L}},{{0xBEEA884BL,0x2DB8C20AL,(-8L),0x162E85ADL,(-1L),0xBD112002L}},{{0xF47C3AB1L,0x5FA71856L,0x632B4397L,0xAFC88108L,(-1L),0xAF250661L}}};
                        int i, j, k;
                        (*g_275) &= 0xECC25D41L;
                        (*g_275) = (safe_add_func_int32_t_s_s((*g_9), l_525[1][0][0]));
                    }
                }
                for (g_343 = 0; (g_343 != 11); ++g_343)
                {
                    unsigned short l_530 = 0x77BFL;
                    int l_539 = (-7L);
                    (*l_515) = &l_493;

                    ;
                    if ((*g_275))
                        continue;
                    l_539 ^= (func_75((*l_515), ((((safe_add_func_int32_t_s_s(l_530, (safe_rshift_func_uint16_t_u_u((((((*l_439) > l_533) , (((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((&l_517 != (func_75(&l_493, (**l_515)) , l_538)), g_217[7])), (*l_439))) && g_19[1]) == 0x71033A2CL)) || g_180[4]) && 0x52976CABL), (*l_439))))) | (**l_517)) <= 0x6E57B451L) , g_93)) < (*l_439));
                }


                ;
            }
            else
            {
                unsigned short l_551 = 65535UL;
                if ((*p_17))
                    break;
                for (g_45 = 8; (g_45 >= 0); g_45 -= 1)
                {
                    unsigned l_550 = 0UL;
                    unsigned char l_552 = 0UL;
                    for (g_28 = 8; (g_28 >= 0); g_28 -= 1)
                    {
                        int i;
                        (**l_538) = (void*)0;

                        ;
                        (*p_17) = (g_217[g_28] & (g_153[5] , (safe_div_func_uint16_t_u_u(g_180[4], (safe_sub_func_int8_t_s_s(g_217[g_28], (((safe_add_func_uint8_t_u_u((~((((safe_div_func_uint32_t_u_u((((*g_9) != (~(*p_17))) ^ ((safe_mul_func_uint16_t_u_u(g_91, ((void*)0 != &g_229[3][2]))) ^ g_25)), 5L)) | l_550) || g_93) != l_551)), 0x0AL)) | 4294967288UL) , g_217[g_28])))))));
                        (*g_274) = p_17;

                        ;
                        if (l_552)
                            break;
                    }
                }

                ;
                (*l_439) = (safe_add_func_int32_t_s_s((*l_439), l_555[0][4][1]));
                for (g_343 = 0; (g_343 < 46); g_343 = safe_add_func_uint32_t_u_u(g_343, 5))
                {
                    (*p_17) = (&g_229[4][8] != &g_274);
                }
            }



            ;
            ;
            for (l_482 = 0; (l_482 <= 4); l_482 += 1)
            {
                unsigned char l_558 = 0xCEL;
                int l_562 = 0x490838AFL;
                int i, j;
                (*g_275) = (((g_10 <= l_558) & (*l_439)) , 0xA4C8512AL);
                (*p_17) = (*g_9);
                for (l_512 = 0; (l_512 <= 2); l_512 += 1)
                {
                    int *l_559 = &l_493;
                    int i, j, k;
                    p_17 = l_559;

                    ;
                    (*p_17) = (l_516[l_512][l_482][(l_512 + 3)] <= g_25);
                }
            }

            ;
            (*l_515) = (*l_515);
            return g_217[1];




        }
    }
    else
    {
        int **l_577 = &l_563;
        (*l_563) ^= (safe_mul_func_uint8_t_u_u(((void*)0 == p_17), ((*p_17) <= (safe_mod_func_int32_t_s_s(((void*)0 == l_439), (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(g_98, (g_180[4] , g_153[6]))) , ((safe_div_func_int8_t_s_s(((void*)0 != l_577), g_28)) < (*g_9))), 0x02L)))))));
        for (g_199 = 4; (g_199 >= 0); g_199 -= 1)
        {
        }
        return (**l_577);
    }


    return (*l_439);


}







static unsigned short func_34(unsigned p_35, int p_36, int p_37, int * p_38)
{
    int l_444[2][9] = {{(-4L),0x373AC1E6L,0x373AC1E6L,(-4L),0x373AC1E6L,0x373AC1E6L,(-4L),0x373AC1E6L,0x373AC1E6L},{(-4L),0x373AC1E6L,0x373AC1E6L,(-4L),0x373AC1E6L,0x373AC1E6L,(-4L),0x373AC1E6L,0x373AC1E6L}};
    int ***l_460 = &g_274;
    int i, j;
    l_444[1][3] = (g_180[3] > (safe_div_func_int32_t_s_s(g_443, g_28)));
    if ((*p_38))
    {
        int ** const l_447 = (void*)0;
        int l_448 = 0xA4664BDAL;
        (*p_38) = (p_37 != (g_343 , 0xDFL));
        (*g_274) = &l_444[1][3];

        ;
        (*g_274) = func_63(l_444[1][1], (p_37 , p_38));

        ;
        (*p_38) = ((g_180[3] , &p_38) == l_447);
    }
    else
    {
        unsigned short l_459 = 0x4D15L;
        const char l_466[1][1][9] = {{{0xEAL,0xEAL,0xEAL,0xEAL,0xEAL,0xEAL,0xEAL,0xEAL,0xEAL}}};
        int i, j, k;
        for (g_93 = 0; (g_93 >= (-6)); g_93--)
        {
            char l_457[1][2];
            const int **l_464[9] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
            const int ***l_463[2][2][7] = {{{&l_464[6],&l_464[7],&l_464[7],&l_464[6],&l_464[7],&l_464[7],&l_464[6]},{&l_464[7],&l_464[6],&l_464[7],&l_464[7],&l_464[6],&l_464[7],&l_464[7]}},{{&l_464[6],&l_464[6],&l_464[2],&l_464[6],&l_464[6],&l_464[2],&l_464[6]},{&l_464[6],&l_464[7],&l_464[2],&l_464[7],&l_464[2],&l_464[2],&l_464[7]}}};
            int l_465 = 0L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_457[i][j] = 0x75L;
            }
            for (g_98 = 0; (g_98 >= (-16)); g_98--)
            {
                unsigned char l_458 = 0x18L;
                for (g_199 = 0; (g_199 >= 10); g_199++)
                {
                    l_458 = (safe_div_func_int32_t_s_s(((&g_274 != (void*)0) != l_457[0][1]), (*p_38)));
                    for (p_36 = 2; (p_36 >= 0); p_36 -= 1)
                    {
                        int i;
                        g_19[p_36] = g_180[p_36];
                        return l_459;
                    }
                }
                if ((*g_9))
                    continue;
            }
            l_465 &= (l_459 && ((((l_460 == ((g_90[0] & g_91) , &g_229[3][9])) , ((((-10L) && ((&g_274 == ((safe_div_func_uint8_t_u_u((g_180[5] ^ (g_19[1] , p_36)), p_36)) , l_463[1][1][5])) | g_217[1])) , 0x3B27E887L) , l_459)) , 2L) <= (*p_38)));
            (*p_38) = (l_466[0][0][1] || (&p_38 != (*g_228)));
        }
    }
    return p_37;
}







static unsigned short func_39(const int * p_40, unsigned char p_41)
{
    short l_44[3][2][2] = {{{0x93AFL,(-1L)},{(-1L),0x93AFL}},{{(-1L),(-1L)},{0x93AFL,(-1L)}},{{(-1L),0x93AFL},{(-1L),(-1L)}}};
    char l_387 = 0x48L;
    int * const l_389 = &g_45;
    int *l_398 = &g_28;
    int l_424 = 0xCC3B6660L;
    const int *l_426 = &g_25;
    int i, j, k;
    for (p_41 = 0; (p_41 <= 1); p_41 += 1)
    {
        int * const l_52 = &g_19[1];
        int *l_397 = &g_25;
        unsigned short l_414 = 0UL;
        for (g_45 = 0; (g_45 <= 1); g_45 += 1)
        {
            unsigned short l_388 = 0xF47DL;
            int l_413 = 0x5086B1EEL;
        }
        for (l_387 = 1; (l_387 >= 0); l_387 -= 1)
        {
            unsigned short l_415[8] = {0x66A8L,0x66A8L,0x66A8L,0x66A8L,0x66A8L,0x66A8L,0x66A8L,0x66A8L};
            int *l_416 = (void*)0;
            int i;
            l_415[3] = l_414;
            (*g_274) = l_416;

            ;
            (*g_228) = (*g_228);
            for (g_45 = 0; (g_45 <= 1); g_45 += 1)
            {
                int *l_417 = &g_91;
                int i, j, k;
                (*l_417) = l_44[p_41][p_41][l_387];
                l_424 &= (safe_mul_func_int16_t_s_s(g_25, func_75(l_397, (*l_397))));
                (*g_274) = l_417;

                ;
            }

            ;
        }
    }


    (*g_274) = &l_424;

    ;
    p_40 = &l_424;

    ;
    if ((*l_398))
    {
        unsigned short l_425 = 65529UL;
        l_425 = func_66((*p_40));


    }
    else
    {
        int * const l_429 = (void*)0;
        int ***l_432[1][8] = {{&g_229[1][7],&g_229[1][7],&g_229[1][7],&g_229[1][7],&g_229[1][7],&g_229[1][7],&g_229[1][7],&g_229[1][7]}};
        int i, j;
        (**g_274) = (((((void*)0 != &l_424) & ((void*)0 == (*g_228))) , ((*g_274) == l_426)) & func_66((*l_398)));


        for (g_343 = 0; (g_343 <= 8); g_343 += 1)
        {
            (*l_389) = ((safe_lshift_func_uint8_t_u_s(0xB8L, 0)) <= ((*l_389) >= (+g_90[2])));
            return g_93;


        }
        (*l_389) = (func_57(&l_424, &l_424, ((*l_398) != 0xE2L), p_41, &l_424) <= (*l_426));

        ;
        for (g_343 = 22; (g_343 != 2); g_343 = safe_sub_func_int32_t_s_s(g_343, 8))
        {
            int *l_435 = &g_98;
            int *l_436 = &g_199;
            (*l_436) &= ((((((*l_435) && 0xCFL) == g_19[1]) == 0xFB25L) | (*l_389)) ^ (*l_435));
            if ((*p_40))
                break;
        }
    }


    ;
    return g_217[8];


}







static short func_48(int * const p_49, int p_50, const int p_51)
{
    int l_405 = 0x7A0F8B64L;
    int l_411 = 0x9FCD1214L;
    short l_412 = (-6L);
    if ((safe_mul_func_uint8_t_u_u(2UL, p_51)))
    {
        return l_405;
    }
    else
    {
        const int l_410 = 0xD964076DL;
        l_411 |= (safe_add_func_int16_t_s_s((l_405 | 1L), (safe_div_func_int8_t_s_s(((l_410 , g_90[1]) || 1UL), l_410))));
        l_412 = (l_405 < l_410);
    }
    return l_412;
}







static unsigned func_57(int * p_58, int * p_59, const unsigned p_60, int p_61, int * p_62)
{
    const unsigned l_399 = 1UL;
    int *l_402 = (void*)0;
    (**g_274) ^= l_399;
    for (p_61 = 0; (p_61 == (-24)); p_61--)
    {
        (*g_274) = l_402;

        ;
    }


    return l_399;
}







static int * func_63(short p_64, int * const p_65)
{
    unsigned l_390 = 7UL;
    unsigned short l_395 = 0x2209L;
    int *l_396 = &g_199;
    (*g_275) = (l_390 != l_390);
    (**g_274) = (g_199 & 1UL);
    l_395 |= (((safe_add_func_int32_t_s_s(((-1L) < (safe_lshift_func_uint16_t_u_s(p_64, g_153[6]))), (g_28 >= l_390))) >= g_153[6]) , (*p_65));
    (*g_274) = (g_180[4] , l_396);

    ;
    return l_396;


}







static char func_66(int p_67)
{
    unsigned char l_68[3];
    int *l_218 = &g_91;
    int *** const l_256 = &g_229[1][7];
    unsigned l_382 = 0xDB755E30L;
    int i;
    for (i = 0; i < 3; i++)
        l_68[i] = 5UL;
    for (p_67 = 2; (p_67 >= 0); p_67 -= 1)
    {
        int **l_206 = &g_131[2][5];
        unsigned l_210[3];
        char l_262 = 0x25L;
        int l_263 = 0x1E3334ADL;
        int l_271[10][3] = {{(-1L),(-1L),(-1L)},{0xC370606DL,1L,0x1AC8A185L},{0x627F0016L,(-1L),0xD6ED3673L},{0xC370606DL,0xC370606DL,0x537B6BF4L},{(-1L),0x627F0016L,0x2456AF5DL},{1L,0xC370606DL,1L},{(-1L),(-1L),0x2E726D7FL},{0x4BCF00CCL,1L,1L},{0x2E726D7FL,(-1L),0x2456AF5DL},{0x442C588EL,0x4BCF00CCL,0x537B6BF4L}};
        unsigned short l_273 = 0xCD78L;
        unsigned l_313 = 0xF91229C4L;
        int l_357[7] = {0x12700EA1L,0x12700EA1L,0x5F82760AL,0x12700EA1L,0x12700EA1L,0x5F82760AL,0x12700EA1L};
        int l_366 = 0x8DB97C4DL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_210[i] = 0x150234E0L;
    }
    (*l_218) ^= p_67;
    (**g_274) = p_67;
    (*g_275) ^= ((p_67 >= func_75((((*l_218) ^ (((~((safe_lshift_func_int8_t_s_s(0xAEL, ((safe_mul_func_uint16_t_u_u((g_98 || (*l_218)), (g_19[1] == (safe_add_func_int32_t_s_s(((!l_382) <= (0xE9F7AADCL ^ 6L)), 2L))))) && (-1L)))) < (*l_218))) && p_67) && 0x399EL)) , &p_67), p_67)) , 1L);


    return (*l_218);


}







static unsigned func_75(int * const p_76, unsigned short p_77)
{
    unsigned l_94[10] = {0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L,0xB8EBACA8L};
    int l_149 = 0x9E982BA9L;
    unsigned char l_159 = 9UL;
    int **l_173 = &g_131[6][5];
    int i;
    for (p_77 = 0; (p_77 <= 8); p_77 += 1)
    {
        char l_101[4][6][5] = {{{0x30L,0x61L,0x26L,(-2L),0xA9L},{1L,1L,(-1L),(-3L),1L},{0xA9L,0x61L,0x80L,0x61L,0xA9L},{0L,0L,1L,(-1L),(-7L)},{0xD3L,7L,0x30L,0x9FL,(-5L)},{(-7L),0L,0L,0L,(-7L)}},{{(-5L),0x9FL,0x30L,7L,0xD3L},{(-7L),(-1L),1L,0L,0L},{0xD3L,0x9FL,(-2L),0x9FL,0xD3L},{0L,0L,1L,(-1L),(-7L)},{0xD3L,7L,0x30L,0x9FL,(-5L)},{(-7L),0L,0L,0L,(-7L)}},{{(-5L),0x9FL,0x30L,7L,0xD3L},{(-7L),(-1L),1L,0L,0L},{0xD3L,0x9FL,(-2L),0x9FL,0xD3L},{0L,0L,1L,(-1L),(-7L)},{0xD3L,7L,0x30L,0x9FL,(-5L)},{(-7L),0L,0L,0L,(-7L)}},{{(-5L),0x9FL,0x30L,7L,0xD3L},{(-7L),(-1L),1L,0L,0L},{0xD3L,0x9FL,(-2L),0x9FL,0xD3L},{0L,0L,1L,(-1L),(-7L)},{0xD3L,0L,1L,0x0BL,0x99L},{1L,0L,0xAFL,0L,1L}}};
        int *l_104 = &g_31;
        int **l_103 = &l_104;
        int i, j, k;
        for (g_91 = 3; (g_91 <= 8); g_91 += 1)
        {
            int *l_92 = &g_93;
            int **l_102 = &l_92;
            (*l_92) ^= ((void*)0 != &g_45);
            for (g_93 = 8; (g_93 >= 0); g_93 -= 1)
            {
                int *l_97 = &g_98;
                int i;
                (*l_97) ^= ((g_90[p_77] , (l_94[7] | (3UL == (p_76 == (void*)0)))) && (p_77 != g_45));
                (*l_97) ^= ((safe_add_func_int32_t_s_s((0xBA474122L != p_77), 0x79556C6CL)) != l_101[0][3][1]);
                for (g_98 = 0; g_98 < 10; g_98 += 1)
                {
                    l_94[g_98] = 0xCB137123L;
                }
            }
            if ((*l_92))
                break;
            (*l_102) = &g_25;

            ;
        }
        if (g_90[p_77])
            break;
        (*l_103) = p_76;


        for (g_93 = 7; (g_93 >= 0); g_93 -= 1)
        {
            if (l_94[7])
                break;
        }
    }
    if ((safe_add_func_uint16_t_u_u(65533UL, (safe_add_func_int8_t_s_s(4L, (+(-1L)))))))
    {
        char l_115 = 0x04L;
        int l_124 = (-3L);
        int **l_132 = &g_131[2][4];
        for (g_98 = 0; (g_98 == (-28)); g_98--)
        {
            unsigned char l_122 = 255UL;
            int ** const l_143[7] = {&g_131[2][5],&g_131[2][5],&g_131[2][5],&g_131[2][5],&g_131[2][5],&g_131[2][5],&g_131[2][5]};
            int i;
            if ((g_8 == ((safe_sub_func_int8_t_s_s(((l_115 & (g_8 > ((~(safe_mod_func_int8_t_s_s((0x900EB00DL ^ (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_93, ((void*)0 != &g_9))), 0x2F80L)) >= p_77) , 2UL)), l_94[9]))) && l_122))) == l_122), p_77)) < g_91)))
            {
                return g_28;
            }
            else
            {
                int *l_123 = (void*)0;
                l_124 = (*g_9);
                if (l_115)
                    break;
                for (l_124 = 12; (l_124 >= 0); l_124--)
                {
                    int **l_154 = &g_131[0][0];
                    if ((((g_93 & ((safe_rshift_func_int8_t_s_u(((((p_77 & ((void*)0 != &l_123)) > (safe_mul_func_uint16_t_u_u((((((&g_9 == (void*)0) , (p_77 | g_91)) > ((((void*)0 == g_131[2][5]) , p_77) ^ p_77)) || 0x3DL) & p_77), p_77))) , l_132) == (void*)0), g_91)) > p_77)) < p_77) , 0x985A9A92L))
                    {
                        int l_148 = (-7L);
                        l_149 &= (safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((0UL & (((safe_sub_func_uint16_t_u_u(p_77, (l_94[7] ^ (0x9F22L || (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((l_143[2] != ((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((*p_76), g_93)), ((g_45 <= ((((((p_77 , 0xDC2E7BD3L) == g_31) == 0xFCB1527DL) & p_77) != l_94[2]) & p_77)) || 1UL))) , &g_131[2][5])) , (-9L)), l_148)), (*p_76))))))) , l_94[7]) & p_77)) | p_77), p_77)), 4294967293UL));
                    }
                    else
                    {
                        unsigned l_150 = 4294967295UL;
                        if (l_150)
                            break;
                        l_149 = (safe_lshift_func_uint8_t_u_s(l_150, 6));
                        if (g_153[6])
                            break;
                        if (l_94[7])
                            continue;
                    }
                    (*l_154) = p_76;
                }
                l_124 = ((*p_76) > (p_77 < p_77));
            }
            if (l_149)
                break;
            g_131[1][3] = (*l_132);
            for (g_93 = 0; (g_93 >= (-6)); g_93 = safe_sub_func_uint16_t_u_u(g_93, 5))
            {
                unsigned char l_162 = 9UL;
                int l_164 = (-4L);
                if ((((p_77 > 0xFD6FL) != ((g_93 != (g_31 == (p_77 >= p_77))) || (*g_9))) > (((((safe_mul_func_int16_t_s_s(((void*)0 == &g_9), g_91)) , l_94[4]) , (void*)0) != (void*)0) | l_159)))
                {
                    if (((g_90[4] || (p_77 , (6L >= (p_77 == g_153[6])))) , (((0x1CL != 0x62L) , ((((safe_div_func_uint32_t_u_u(p_77, l_94[7])) != g_45) , 0xE6L) , (*p_76))) > (*g_9))))
                    {
                        return l_94[7];
                    }
                    else
                    {
                        return p_77;
                    }
                }
                else
                {
                    unsigned short l_163 = 65527UL;
                    l_163 |= l_162;
                    l_164 = (l_163 == ((~(l_162 >= g_10)) < ((p_77 == p_77) , l_162)));
                }
                l_164 = (safe_mul_func_uint16_t_u_u((((((void*)0 == &g_131[2][5]) >= ((0x1259A4FAL ^ (l_94[7] < (*g_9))) | 7L)) == g_98) != 0x87L), ((safe_add_func_int16_t_s_s((g_28 <= g_28), 0L)) , g_153[6])));
            }
        }


        for (l_159 = 0; (l_159 >= 51); ++l_159)
        {
            int l_171[7];
            int i;
            for (i = 0; i < 7; i++)
                l_171[i] = 1L;
            return l_171[5];
        }
    }
    else
    {
        int *l_172[10][4] = {{&l_149,&g_19[2],&l_149,&g_45},{&g_93,(void*)0,(void*)0,&g_25},{(void*)0,&g_93,(void*)0,(void*)0},{&g_28,&g_28,(void*)0,&l_149},{(void*)0,&g_93,(void*)0,&g_93},{&g_93,(void*)0,&l_149,(void*)0},{&l_149,(void*)0,&g_93,&g_93},{(void*)0,&g_93,(void*)0,&l_149},{(void*)0,&g_28,&g_28,(void*)0},{(void*)0,&g_93,(void*)0,&g_25}};
        int i, j;
        l_149 |= 0xE333570BL;
    }


    (*l_173) = p_76;
    return g_45;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_180[i], "g_180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_217[i], "g_217[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
