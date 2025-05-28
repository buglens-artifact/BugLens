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



static char g_9 = 3L;
static unsigned g_15 = 0UL;
static int g_28 = 0L;
static unsigned char g_56 = 0x47L;
static unsigned char *g_55[7] = {&g_56, &g_56, &g_56, &g_56, &g_56, &g_56, &g_56};
static unsigned g_73[8][3] = {{0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}, {0xDA3BB1D4L, 4294967290UL, 0xDA3BB1D4L}};
static int *g_88 = &g_28;
static int g_111[3][3] = {{0xD6CD47B9L, 0x5B503A71L, 0xD6CD47B9L}, {0xD6CD47B9L, 0x5B503A71L, 0xD6CD47B9L}, {0xD6CD47B9L, 0x5B503A71L, 0xD6CD47B9L}};
static unsigned char g_116 = 1UL;
static unsigned char *g_135 = &g_56;
static unsigned char **g_134 = &g_135;
static int g_159[5] = {0xC0348559L, 0x321F159AL, 0xC0348559L, 0x321F159AL, 0xC0348559L};
static short g_181 = 0x592EL;
static int *g_186 = (void*)0;
static char g_195 = 0L;
static unsigned short g_197 = 0xBAAFL;
static unsigned char ***g_206 = &g_134;
static unsigned char ***g_208 = &g_134;
static unsigned short g_214 = 0UL;
static int **g_235 = &g_186;
static unsigned short g_240 = 65533UL;
static unsigned short *g_244 = (void*)0;
static short g_255 = 0L;
static int g_299 = 9L;
static int *g_298 = &g_299;
static int **g_297 = &g_298;
static unsigned short **g_453 = &g_244;
static char *g_462[10][7][3] = {{{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}, {{&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}, {&g_195, (void*)0, &g_195}}};
static char **g_461 = &g_462[0][4][2];
static char ***g_460 = &g_461;
static unsigned char g_470 = 249UL;
static unsigned char g_488 = 0x6CL;
static short g_563[8] = {0x5F5BL, 0x5F5BL, 0x5F5BL, 0x5F5BL, 0x5F5BL, 0x5F5BL, 0x5F5BL, 0x5F5BL};
static volatile unsigned **g_611 = (void*)0;
static unsigned short ***g_618 = (void*)0;
static int g_665 = 0x08FADB2AL;



static unsigned func_1(void);
static int * func_2(char p_3, unsigned short p_4, char p_5, int * p_6);
static unsigned func_10(unsigned p_11);
static int ** func_18(int p_19, char p_20);
static int ** func_31(int ** p_32, unsigned short p_33, int ** p_34, char p_35, unsigned p_36);
static unsigned short func_37(short p_38, short p_39);
static int func_42(unsigned char * p_43, int * p_44, unsigned char * p_45, unsigned p_46);
static unsigned char * func_47(unsigned p_48, int ** p_49, short p_50, int p_51, unsigned char * p_52);
static int ** func_57(unsigned char * p_58, int ** p_59, unsigned char * p_60, unsigned char * p_61, int p_62);
static unsigned char * func_63(int p_64, unsigned char * p_65, short p_66);
static unsigned func_1(void)
{
    char l_12 = 9L;
    unsigned l_485[6] = {0xF6AEB963L, 1UL, 0xF6AEB963L, 1UL, 0xF6AEB963L, 1UL};
    unsigned short l_486[6] = {0x7D1DL, 6UL, 0x7D1DL, 6UL, 0x7D1DL, 6UL};
    unsigned char *l_487 = &g_488;
    unsigned short *l_489[8] = {&g_240, &g_240, &g_214, &g_240, &g_240, &g_214, &g_240, &g_240};
    int *l_490 = &g_159[2];
    int i;
    l_490 = func_2((safe_add_func_uint32_t_u_u(g_9, func_10(l_12))), (g_214 = (((void*)0 != &g_134) ^ ((*l_487) = (safe_sub_func_uint8_t_u_u(l_12, ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x0BBEL, (((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_12, l_12)) | l_485[2]), l_485[1])) >= l_485[2]) == 0UL))), l_485[2])) <= l_12), l_485[2])) == g_9), l_486[4])) < 0x9AL)))))), l_486[4], l_490);


    ;
    ;
    ;

    ;
    ;
    return g_116;
}







static int * func_2(char p_3, unsigned short p_4, char p_5, int * p_6)
{
    int *l_492 = &g_111[0][1];
    unsigned l_514 = 4294967290UL;
    int l_566 = (-1L);
    unsigned l_581[4];
    volatile unsigned **l_613[5];
    unsigned *l_631 = &l_514;
    unsigned short ***l_654 = &g_453;
    unsigned *l_664 = &g_15;
    unsigned char *l_671 = &g_56;
    int ***l_672 = &g_235;
    int i;
    for (i = 0; i < 4; i++)
        l_581[i] = 0x5CE69AB9L;
    for (i = 0; i < 5; i++)
        l_613[i] = (void*)0;
    if ((*p_6))
    {
        short l_491 = 9L;
        int *l_504 = &g_159[2];
        unsigned char **l_506[1];
        short l_562 = (-1L);
        unsigned short ***l_616 = &g_453;
        short l_640 = 0x2040L;
        unsigned short ***l_655 = &g_453;
        char *l_658 = &g_9;
        unsigned char *l_659 = &g_470;
        int i;
        for (i = 0; i < 1; i++)
            l_506[i] = &g_135;
        if (l_491)
        {
            (*g_297) = l_492;

            ;
        }
        else
        {
            char l_499[2];
            unsigned l_515 = 1UL;
            int l_517 = 0x39D80E39L;
            int ***l_541[2];
            unsigned char *l_580 = &g_488;
            char ***l_582 = &g_461;
            int l_597 = 0x0A9120CAL;
            char *l_598 = &g_195;
            int i;
            for (i = 0; i < 2; i++)
                l_499[i] = 0xFAL;
            for (i = 0; i < 2; i++)
                l_541[i] = (void*)0;
lbl_500:
            (*g_297) = (*g_297);
            (*g_297) = p_6;

            ;
            if ((*p_6))
            {
                short l_503[9] = {0xA4F0L, (-10L), 0xA4F0L, (-10L), 0xA4F0L, (-10L), 0xA4F0L, (-10L), 0xA4F0L};
                int *l_505[8][6] = {{&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}, {&g_299, &g_299, &g_299, &g_299, &g_299, &g_299}};
                short *l_513 = &g_255;
                unsigned short *l_516 = &g_240;
                int i, j;
                for (g_488 = 15; (g_488 >= 12); g_488 = safe_sub_func_uint32_t_u_u(g_488, 8))
                {
                    if ((*p_6))
                    {
                        (**g_297) = (-1L);
                    }
                    else
                    {
                        (*g_88) = ((*p_6) = (safe_rshift_func_int16_t_s_u(g_255, (safe_rshift_func_int16_t_s_u(g_197, l_499[1])))));
                    }
                    for (p_5 = 2; (p_5 >= 0); p_5 -= 1)
                    {
                        if (p_5)
                            goto lbl_500;
                        return p_6;


                    }
                    for (g_255 = 5; (g_255 > 16); ++g_255)
                    {
                        (*g_297) = (*g_297);
                        (*l_492) = (**g_297);
                    }
                    if ((*g_298))
                    {
                        if (l_503[0])
                            break;
                        (*g_298) = l_499[0];
                        l_505[4][0] = l_504;
                        (*g_208) = l_506[0];
                    }
                    else
                    {
                        (*l_492) = ((**g_297) = (g_116 && p_4));
                        (*g_235) = p_6;

                        ;
                    }
                }


                if ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((0L <= ((*l_513) = g_197)), (((l_517 = ((*l_516) = ((func_10(((*l_492) <= ((g_111[0][1] & ((*l_492) || ((*l_504) = func_10(l_514)))) >= p_3))) || l_515) ^ 1L))) >= 0L) && 0x81DBL))), l_499[1])), 0x2BL)))
                {
                    p_6 = p_6;
                }
                else
                {
                    for (l_517 = 0; (l_517 <= 6); l_517 += 1)
                    {
                        int *l_518 = (void*)0;
                        (*g_235) = l_518;

                        ;
                    }
                    (*l_504) = (*l_504);
                }

                ;
            }
            else
            {
                int l_531 = 1L;
                unsigned char *l_532[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                short *l_535 = &l_491;
                int l_551 = 0xE57BA105L;
                char l_567 = (-9L);
                int **l_579[8][1][2] = {{{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}, {{&g_88, &g_298}}};
                int i, j, k;
                for (l_514 = 0; (l_514 > 47); l_514 = safe_add_func_int8_t_s_s(l_514, 1))
                {
                    int l_530 = (-2L);
                    for (g_299 = 2; (g_299 <= 6); g_299 += 1)
                    {
                        int i;
                    }
                }
                (*g_297) = p_6;
                if ((safe_lshift_func_int8_t_s_u(((((((*l_492) > (((*l_535) = ((void*)0 != &p_4)) != func_10(l_531))) || p_5) & (p_3 < (((safe_sub_func_int8_t_s_s((0x08E0L || p_4), p_3)) >= (-8L)) & 255UL))) ^ p_4) && p_3), (*l_504))))
                {
                    unsigned short l_540[3][2] = {{0x939BL, 0x939BL}, {0x939BL, 0x939BL}, {0x939BL, 0x939BL}};
                    unsigned *l_548 = (void*)0;
                    unsigned *l_549 = (void*)0;
                    unsigned *l_550[9][7] = {{&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}, {&l_514, &g_73[2][0], &l_514, &g_73[3][0], (void*)0, &g_73[3][0], &l_514}};
                    int i, j;
                    if (((!(safe_add_func_uint32_t_u_u(p_4, ((-8L) != (l_551 = (0xA5C2L & ((l_540[0][0] ^ (&g_235 != l_541[1])) > (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((0x42C4EBE4L || g_28) ^ g_159[4]), (***g_208))), 1L)), l_540[0][0]))))))))) & p_5))
                    {
                        int *l_552 = &g_111[2][0];
                        (*g_235) = p_6;

                        ;
                        (*g_297) = l_552;

                        ;
                        (**g_235) = (((*l_552) = (65535UL == (l_551 = ((*l_535) = (-3L))))) == (*l_504));
                        (*g_297) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*g_235) = p_6;

                        ;
                        (*l_492) = ((safe_div_func_uint16_t_u_u(l_551, p_3)) < (*p_6));
                        return (*g_235);


                    }

                    ;
                    ;
lbl_565:
                    if ((safe_unary_minus_func_int8_t_s((*l_492))))
                    {
                        int l_564 = 0x1BC73AD0L;
                        (*g_235) = l_550[8][4];

                        ;
                        (*l_492) = (func_10((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((*l_504), func_37((p_4 != (***g_206)), g_56))), (g_563[3] = l_562))), (*p_6)))) != (l_564 | p_3));



                        ;
                        ;
                        (*g_235) = ((*g_297) = p_6);

                        ;
                        ;
                    }
                    else
                    {
                        if (g_116)
                            goto lbl_500;
                        if (l_514)
                            goto lbl_565;
                    }


                    ;
                    ;
                    (*g_297) = &l_551;

                    ;
                    return (*g_235);



                }
                else
                {
                    (*g_235) = (*g_235);
                    (*g_298) = (*g_298);
                }

                ;
                for (l_517 = 0; (l_517 <= 1); l_517 += 1)
                {
                    int i;
                    (*l_504) = g_563[(l_517 + 6)];
                    for (p_5 = 1; (p_5 >= 0); p_5 -= 1)
                    {
                        (*g_297) = (*g_297);
                    }
                }
            }

            ;
            (*g_88) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((&p_6 == &g_186), (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_5, 1L)), ((((void*)0 != &l_582) != ((*l_598) = l_597)) != (safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((*l_504) | (p_4 = 0xDB7AL)), 0x9D19L)) > (*l_492)), p_5))))), (*l_492))))), 0xD12DL));
        }

        ;
        ;
        if ((safe_sub_func_uint8_t_u_u((((*l_492) = (&l_506[0] == (void*)0)) >= (safe_div_func_uint8_t_u_u(p_4, p_3))), (*l_504))))
        {
            unsigned short ****l_617[3];
            unsigned short ***l_619 = &g_453;
            int *l_626 = &g_159[4];
            int i;
            for (i = 0; i < 3; i++)
                l_617[i] = &l_616;
            for (g_488 = (-30); (g_488 <= 50); g_488 = safe_add_func_int8_t_s_s(g_488, 1))
            {
                if ((*g_298))
                    break;
                if ((*p_6))
                    continue;
                return p_6;


            }
            for (g_15 = 0; (g_15 <= 3); g_15 = safe_add_func_uint32_t_u_u(g_15, 1))
            {
                volatile unsigned ***l_612[10] = {&g_611, &g_611, &g_611, &g_611, &g_611, &g_611, &g_611, &g_611, &g_611, &g_611};
                int i;
                l_613[2] = g_611;
            }
            (**g_297) = (safe_add_func_uint16_t_u_u(((g_618 = l_616) != l_619), p_5));

            ;
            for (g_197 = 0; (g_197 < 48); ++g_197)
            {
                unsigned char l_627 = 0x26L;
                unsigned *l_662 = (void*)0;
                unsigned **l_663[4][6][4] = {{{(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}}, {{(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}}, {{(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}}, {{(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}, {(void*)0, &l_662, &l_662, (void*)0}}};
                int i, j, k;
                for (g_195 = (-10); (g_195 <= 26); g_195 = safe_add_func_uint32_t_u_u(g_195, 7))
                {
                    for (l_566 = 0; (l_566 == (-26)); l_566--)
                    {
                        if ((**g_297))
                            break;
                        (*g_235) = p_6;

                        ;
                        return l_626;


                    }
                    return (*g_235);


                }
                if ((*g_298))
                    break;
                if (l_627)
                {
                    for (g_56 = (-15); (g_56 >= 36); g_56 = safe_add_func_uint8_t_u_u(g_56, 6))
                    {
                        (*g_235) = (*g_235);
                        if ((**g_297))
                            continue;
                    }
                }
                else
                {
                    unsigned *l_630 = &g_73[3][0];
                    char *l_634 = &g_195;
                    short *l_635[5][1];
                    int l_636 = 0xCDF6C1B8L;
                    short l_637 = (-7L);
                    int l_648 = (-1L);
                    char **l_660[5][4][6] = {{{&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}}, {{&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}}, {{&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}}, {{&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}}, {{&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}, {&l_658, &l_658, &l_634, &l_634, (void*)0, &l_658}}};
                    int *l_661 = &l_636;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_635[i][j] = &g_255;
                    }
                    (*p_6) = (((*l_634) = ((((l_631 = l_630) != l_504) & ((+(safe_mod_func_int16_t_s_s(func_10((((*l_634) = (*l_492)) >= 1L)), (g_563[3] = g_15)))) == (l_636 != (l_637 = p_4)))) != (safe_div_func_int32_t_s_s(((*p_6) & (*l_626)), l_640)))) > (*l_504));

                    ;
                    for (l_627 = 0; (l_627 == 41); l_627 = safe_add_func_uint8_t_u_u(l_627, 9))
                    {
                        int l_643 = 0L;
                        (*g_235) = l_504;

                        ;
                        if ((*l_626))
                            break;
                        (*p_6) = func_10(((p_5 && (l_643 <= (*g_135))) != ((**g_297) = (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(l_648, p_5)), 1UL)))));

                        ;
                        (*l_504) = (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(0x4224L)), l_643)), ((*g_135) = (((*l_626) < (func_10((&g_15 != (void*)0)) && p_3)) == p_3)))) >= (!((void*)0 != (*g_460)))) < (*p_6));
                    }
                    (**g_297) = (**g_297);
                    (*l_661) = ((*p_6) = ((*g_88) = (((g_618 = l_654) == l_655) < (((*l_492) = (((*g_461) = l_634) == (l_658 = func_47(func_10(p_3), &g_88, (g_563[6] = ((&g_88 != (void*)0) | (safe_mod_func_int32_t_s_s((l_658 == &p_5), 9UL)))), g_299, l_659)))) > (*l_504)))));

                    ;
                }
                g_665 = ((*p_6) = ((l_664 = l_662) == (void*)0));

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            (*g_297) = p_6;

            ;
        }

        ;
        ;
        ;
        ;
        p_6 = l_504;
    }
    else
    {
        unsigned char l_666 = 0UL;
        (*l_492) = ((*g_298) = (*g_88));
        (*g_235) = p_6;

        ;
        (*l_492) = (l_666 || (safe_mul_func_int8_t_s_s((p_5 ^ (safe_add_func_uint8_t_u_u((~(***g_208)), (*l_492)))), l_666)));
    }

    ;
    ;
    ;
    ;
    ;
    (*l_492) = (*p_6);
    (*l_672) = &g_298;

    ;
    return p_6;


}







static unsigned func_10(unsigned p_11)
{
    short l_398[2];
    short l_413 = 9L;
    unsigned short ***l_446 = (void*)0;
    char ***l_463[7] = {&g_461, &g_461, (void*)0, &g_461, &g_461, (void*)0, &g_461};
    int *l_467 = &g_28;
    int i;
    for (i = 0; i < 2; i++)
        l_398[i] = (-9L);
    for (p_11 = 0; (p_11 <= 20); ++p_11)
    {
        int *l_397 = &g_159[2];
        unsigned short **l_421 = &g_244;
        unsigned short ***l_445 = &l_421;
        char *l_458 = &g_9;
        char **l_457 = &l_458;
        char ***l_456 = &l_457;
    }
    for (g_181 = 14; (g_181 == (-4)); g_181--)
    {
        int *l_466 = &g_159[4];
        (*g_297) = l_466;

        ;
        (*g_235) = l_467;

        ;
        for (g_28 = 0; (g_28 <= (-10)); g_28 = safe_sub_func_uint16_t_u_u(g_28, 5))
        {
            (*g_297) = l_466;
        }
    }
    for (g_56 = 0; (g_56 <= 1); g_56 += 1)
    {
        if (p_11)
            break;
        return g_116;
    }
    (*g_297) = l_467;

    ;
    return g_470;
}







static int ** func_18(int p_19, char p_20)
{
    short l_24 = 4L;
    unsigned char *l_25[1][3];
    int l_26 = 0xBFB2C41AL;
    int *l_27 = &g_28;
    int **l_29 = &l_27;
    unsigned *l_71 = (void*)0;
    unsigned *l_72 = &g_73[3][0];
    short l_74 = (-7L);
    unsigned char *l_115 = &g_116;
    unsigned char **l_139 = &g_55[4];
    short *l_230[4][4][7] = {{{&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}}, {{&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}}, {{&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}}, {{&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}, {&l_74, &g_181, &g_181, &g_181, &l_24, &l_24, &g_181}}};
    int l_231[6] = {0x699C2ED7L, 0x699C2ED7L, 0x5242DE1AL, 0x699C2ED7L, 0x699C2ED7L, 0x5242DE1AL};
    int ***l_391[4];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_25[i][j] = (void*)0;
    }
    for (i = 0; i < 4; i++)
        l_391[i] = &l_29;
    (*l_27) = (safe_sub_func_uint8_t_u_u(l_24, (l_26 = 0xF4L)));
    if (l_24)
        goto lbl_30;
lbl_30:
    (*l_29) = &l_26;

    ;
    g_297 = func_31(&l_27, func_37((l_231[2] = (255UL >= (func_42(((*l_139) = func_47((safe_sub_func_uint32_t_u_u((~((void*)0 != g_55[6])), (*l_27))), func_57(func_63(g_56, l_25[0][2], (((((safe_sub_func_uint16_t_u_u((((((*l_72) = (safe_lshift_func_uint16_t_u_u(p_20, 12))) >= g_15) & 0xCD43L) || (*l_27)), l_74)) && (**l_29)) ^ 1UL) & g_56) ^ 0x4499C77EL)), &l_27, l_115, l_25[0][0], p_20), g_9, g_9, l_115)), (*l_29), g_135, g_9) <= 0x072D0B3DL))), g_15), g_297, g_15, p_19);

    ;

    ;

    ;
    ;
    return &g_88;




}







static int ** func_31(int ** p_32, unsigned short p_33, int ** p_34, char p_35, unsigned p_36)
{
    int *l_304 = &g_111[0][2];
    char *l_314 = (void*)0;
    char **l_313 = &l_314;
    int l_349 = 0xE2BCA474L;
    for (g_240 = 0; (g_240 != 59); g_240++)
    {
        char l_311 = 1L;
        char ***l_315 = &l_313;
        int l_352 = (-3L);
        int l_384 = 0x81E60A54L;
        for (g_214 = (-11); (g_214 != 46); ++g_214)
        {
            (*p_32) = l_304;


        }
    }


    return p_32;


}







static unsigned short func_37(short p_38, short p_39)
{
    unsigned short l_257 = 0xBC2AL;
    int l_262 = (-2L);
    unsigned short **l_263 = &g_244;
    for (g_214 = 0; (g_214 <= 6); g_214 += 1)
    {
        unsigned l_238 = 0x7CC21393L;
        int l_241 = 8L;
        unsigned short *l_242 = &g_197;
        for (g_197 = 0; g_197 < 7; g_197 += 1)
        {
            g_55[g_197] = &g_56;
        }
        for (g_195 = 2; (g_195 >= 0); g_195 -= 1)
        {
            int **l_232 = &g_88;
            (*l_232) = &g_111[2][0];

            ;
            for (g_181 = 0; (g_181 <= 2); g_181 += 1)
            {
                int **l_233 = &g_186;
                for (g_197 = 0; (g_197 <= 6); g_197 += 1)
                {
                    unsigned short *l_245[5];
                    short *l_254 = &g_255;
                    int l_256 = 0x48657F93L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_245[i] = &g_197;
                    for (g_116 = 0; (g_116 <= 2); g_116 += 1)
                    {
                        int ***l_234[9] = {&l_232, &l_232, &l_232, &l_232, &l_232, &l_232, &l_232, &l_232, &l_232};
                        unsigned short *l_239 = &g_240;
                        unsigned short **l_243[5] = {&l_239, &l_242, &l_239, &l_242, &l_239};
                        int i, j;
                        g_235 = l_233;
                        g_111[g_116][g_181] = ((1L > (p_39 <= (safe_lshift_func_uint8_t_u_u(0xECL, (l_238 = p_39))))) == (((((+((*l_239) = g_15)) || (p_38 <= g_73[4][0])) | l_241) || ((g_244 = l_242) == l_245[4])) || l_241));
                    }
                    if ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((p_38 || p_38) > p_38) <= (safe_sub_func_int8_t_s_s(0x51L, (g_111[2][0] <= (p_38 <= ((*l_254) = 0L)))))), g_111[0][1])), g_116)) < l_256), 7)))
                    {
                        return p_38;
                    }
                    else
                    {
                        (*g_235) = (*l_233);
                    }
                    for (g_255 = 2; (g_255 >= 0); g_255 -= 1)
                    {
                        int i, j;
                        g_111[g_195][g_195] = p_38;
                    }
                    for (p_39 = 0; (p_39 <= 2); p_39 += 1)
                    {
                        (*g_235) = (*l_232);

                        ;
                        (*l_232) = (*l_232);
                    }
                }
                (*g_88) = p_38;
                return p_39;
            }
            if (p_39)
            {
                for (g_197 = 0; (g_197 <= 2); g_197 += 1)
                {
                    int i, j;
                    (*l_232) = &g_111[g_197][g_197];
                }
                l_241 = l_257;
            }
            else
            {
                (**l_232) = (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_38, g_197)), p_38));
                if (p_38)
                    break;
            }
        }
        (*g_235) = (*g_235);
        for (l_238 = 0; (l_238 <= 2); l_238 += 1)
        {
            int i, j;
            l_262 = (g_111[l_238][l_238] = (p_39 > g_255));
            for (g_28 = 6; (g_28 >= 0); g_28 -= 1)
            {
                int i;
                if (g_159[(l_238 + 2)])
                    break;
                return g_159[(l_238 + 1)];
            }
        }
    }
    for (g_116 = 0; (g_116 <= 2); g_116 += 1)
    {
        unsigned short **l_264 = (void*)0;
        int l_267 = 1L;
        int l_280 = 0x0F1069EAL;
        int *l_284[3];
        int i;
        for (i = 0; i < 3; i++)
            l_284[i] = &l_262;
        if ((((void*)0 == &g_244) | ((l_263 != l_264) ^ (l_267 = (safe_mul_func_int8_t_s_s(g_116, (((void*)0 != &g_134) == p_39)))))))
        {
            int **l_269 = &g_88;
            for (g_195 = 0; (g_195 <= 4); g_195 += 1)
            {
                int i, j;
                for (l_267 = 0; (l_267 <= 2); l_267 += 1)
                {
                    int ***l_268[5] = {&g_235, &g_235, &g_235, &g_235, &g_235};
                    int i;
                    for (g_28 = 0; g_28 < 8; g_28 += 1)
                    {
                        for (g_240 = 0; g_240 < 3; g_240 += 1)
                        {
                            g_73[g_28][g_240] = 1UL;
                        }
                    }
                    l_269 = &g_186;

                    ;
                }
                g_111[g_116][g_116] = (((l_267 = g_111[g_116][g_116]) == (safe_sub_func_uint16_t_u_u(((g_73[(g_116 + 1)][g_116] ^ (((*g_135) = 0x9BL) && ((*g_135) = (0xD4L >= p_38)))) || (safe_div_func_int16_t_s_s((p_39 < ((safe_sub_func_int16_t_s_s(l_262, ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(p_39, 0)) | g_73[3][0]), l_280)) | (-1L)))) | l_257)), g_159[2]))), p_39))) | p_38);
            }

            ;
        }
        else
        {
            int **l_281 = &g_88;
            (*l_281) = ((*g_235) = &l_262);

            ;
            ;
            for (p_38 = 2; (p_38 >= 0); p_38 -= 1)
            {
                int i, j;
                (*g_235) = &g_111[p_38][p_38];

                ;
            }

            ;
            (*g_235) = &l_262;

            ;
            (*l_281) = ((*g_235) = (*l_281));
        }


        l_262 = (g_240 & ((safe_div_func_uint16_t_u_u(l_280, l_257)) & 247UL));
        (*g_235) = &l_267;

        ;
        if (p_39)
        {
            int *l_286 = (void*)0;
            int l_287[9][9] = {{(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}, {(-3L), 0L, (-3L), 0xE5F79DBFL, 9L, (-1L), 0xDA255B75L, 1L, (-7L)}};
            int i, j;
            (*g_235) = (void*)0;

            ;
            for (g_181 = 2; (g_181 >= 0); g_181 -= 1)
            {
                int *l_285 = &g_28;
                (*g_235) = l_285;

                ;
            }

            ;
            (*g_235) = l_286;

            ;
            return l_287[1][4];


        }
        else
        {
            (**g_235) = p_38;
            if (p_39)
                break;

        }
        for (g_197 = 0; (g_197 <= 2); g_197 += 1)
        {
            unsigned short l_288[7] = {65528UL, 0xBC8AL, 65528UL, 0xBC8AL, 65528UL, 0xBC8AL, 65528UL};
            int i;
            (*g_235) = &l_280;

            ;
            for (p_39 = 2; (p_39 >= 0); p_39 -= 1)
            {
                int i, j;
                g_111[p_39][p_39] = g_73[(p_39 + 5)][p_39];
                l_288[1] = (l_262 = ((**g_235) = g_159[(g_197 + 1)]));
            }
            if (p_39)
            {
                int i, j;
                if ((g_111[g_116][g_116] = (~(**g_235))))
                {
                    int *l_289 = &g_111[2][0];
                    (*g_235) = l_289;

                    ;
                    for (l_280 = 0; l_280 < 7; l_280 += 1)
                    {
                        l_288[l_280] = 0xCA37L;
                    }
                }
                else
                {
                    short *l_292 = &g_255;
                    int l_293 = 0x6D4A889AL;
                    if ((safe_lshift_func_int16_t_s_u(((*l_292) = (~g_240)), 0)))
                    {
                        unsigned char l_294 = 1UL;
                        l_294 = (g_56 & ((~l_257) >= l_293));
                        (*g_235) = (*g_235);
                        (*g_235) = &l_280;
                        return l_293;



                    }
                    else
                    {
                        return l_293;



                    }
                }

                ;
                for (g_181 = 0; (g_181 == (-30)); --g_181)
                {
                    return p_39;


                }
            }
            else
            {
                return l_288[1];



            }

            ;
        }

        ;
    }



    return l_262;


}







static int func_42(unsigned char * p_43, int * p_44, unsigned char * p_45, unsigned p_46)
{
    unsigned char **l_147 = &g_55[2];
    int *l_148[9][3][9] = {{{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}, {{&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}, {&g_111[2][0], (void*)0, &g_111[2][0], &g_111[1][2], (void*)0, &g_111[2][0], &g_111[2][0], &g_111[0][2], &g_111[1][2]}}};
    unsigned char ***l_169[4][8][1] = {{{&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}}, {{&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}}, {{&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}}, {{&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}, {&l_147}}};
    unsigned char ****l_168[8] = {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]};
    unsigned l_221 = 4294967289UL;
    int i, j, k;
    for (g_56 = 0; (g_56 == 38); g_56 = safe_add_func_uint32_t_u_u(g_56, 3))
    {
        int *l_153 = &g_111[0][0];
        unsigned char ****l_171[8][5] = {{&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}, {&l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0], &l_169[1][4][0]}};
        int i, j;
        for (g_28 = (-2); (g_28 <= 28); g_28 = safe_add_func_int8_t_s_s(g_28, 3))
        {
            unsigned short l_146[10] = {0x4D50L, 0xD9A9L, 0x5A79L, 0x5A79L, 0xD9A9L, 0x4D50L, 0xD9A9L, 0x5A79L, 0x5A79L, 0xD9A9L};
            int i;
            for (p_46 = (-25); (p_46 > 27); p_46 = safe_add_func_int8_t_s_s(p_46, 9))
            {
                int *l_149[8][8][4] = {{{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}, {{&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}, {&g_111[2][0], (void*)0, (void*)0, &g_111[2][0]}}};
                int i, j, k;
                (*p_44) = l_146[2];
                (*p_44) = ((void*)0 == l_147);
                l_149[0][7][1] = l_148[2][2][5];
                for (g_116 = 7; (g_116 >= 11); ++g_116)
                {
                    short l_154 = 0x1236L;
                    if ((p_44 == p_44))
                    {
                        int **l_152 = &l_149[0][7][1];
                        (*l_152) = p_44;


                        p_44 = l_153;

                        ;
                        return g_56;
                    }
                    else
                    {
                        return l_154;
                    }
                }
            }
            (*l_153) = (*p_44);
            (*l_153) = g_73[3][0];
            for (g_116 = 0; (g_116 == 46); g_116 = safe_add_func_int16_t_s_s(g_116, 6))
            {
                short l_179 = 0x75C0L;
                for (p_46 = 29; (p_46 == 49); p_46 = safe_add_func_int8_t_s_s(p_46, 9))
                {
                    char l_175[9][7] = {{1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}, {1L, (-1L), 0xEAL, 0x9FL, 0xEAL, (-1L), 1L}};
                    int i, j;
                    for (g_159[2] = 0; (g_159[2] > 24); g_159[2]++)
                    {
                        unsigned char *****l_170 = &l_168[6];
                        int l_174[4][1][7] = {{{(-1L), 0x7D95D16DL, 3L, 0x7D95D16DL, (-1L), 5L, (-1L)}}, {{(-1L), 0x7D95D16DL, 3L, 0x7D95D16DL, (-1L), 5L, (-1L)}}, {{(-1L), 0x7D95D16DL, 3L, 0x7D95D16DL, (-1L), 5L, (-1L)}}, {{(-1L), 0x7D95D16DL, 3L, 0x7D95D16DL, (-1L), 5L, (-1L)}}};
                        int i, j, k;
                        l_175[1][6] = (+(((((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_111[2][0], (&g_73[3][0] != &g_73[3][0]))), (safe_lshift_func_uint8_t_u_s(((((((*l_170) = l_168[5]) != l_171[2][1]) && ((*p_44) >= (safe_sub_func_uint32_t_u_u((&g_55[6] == (void*)0), (l_174[3][0][4] <= p_46))))) >= (-1L)) == (*l_153)), p_46)))) == l_146[2]) || (*p_43)) >= l_174[3][0][4]) == (*l_153)));
                        return (*p_44);
                    }
                    if (((*l_153) >= 0xA9L))
                    {
                        int **l_176 = &g_88;
                        (*l_176) = l_153;

                        ;
                        (*l_176) = p_44;


                    }
                    else
                    {
                        (*p_44) = (safe_rshift_func_int8_t_s_u(p_46, 3));
                        if (l_179)
                            continue;
                    }
                }


                return l_179;
            }
        }
        (*l_153) = (*p_44);
    }
    for (p_46 = 0; (p_46 <= 2); p_46 += 1)
    {
        short *l_180 = &g_181;
        int l_182 = (-2L);
        int l_198[9][10] = {{1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}, {1L, 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L, (-10L), 0x3AB97BF4L, 1L, 1L, 0x3AB97BF4L}};
        int i, j;
        (*p_44) = (*p_44);
        (*p_44) = (((*l_180) = g_73[6][1]) <= l_182);
        for (g_28 = 2; (g_28 >= 0); g_28 -= 1)
        {
            int *l_183 = &g_111[2][0];
            int **l_184 = &g_88;
            int **l_185[4][4] = {{&l_148[2][2][5], &l_148[2][2][5], &l_183, &l_148[2][2][5]}, {&l_148[2][2][5], &l_148[2][2][5], &l_183, &l_148[2][2][5]}, {&l_148[2][2][5], &l_148[2][2][5], &l_183, &l_148[2][2][5]}, {&l_148[2][2][5], &l_148[2][2][5], &l_183, &l_148[2][2][5]}};
            unsigned char ***l_207[8][7] = {{&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}, {&l_147, &g_134, &l_147, &g_134, &g_134, &g_134, &l_147}};
            unsigned char l_216[7][3][10] = {{{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}, {{6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}, {6UL, 255UL, 6UL, 0xC4L, 0xA8L, 0xF3L, 255UL, 0x85L, 0xD9L, 0x3EL}}};
            int i, j, k;
            g_186 = ((*l_184) = l_183);

            ;
            ;
            for (g_116 = 0; (g_116 <= 2); g_116 += 1)
            {
                int i, j, k;
                if (g_111[p_46][g_28])
                    break;
            }
            for (l_182 = 7; (l_182 >= 0); l_182 -= 1)
            {
                short l_203 = (-1L);
                char *l_215 = &g_195;
            }
            for (g_197 = 0; (g_197 <= 2); g_197 += 1)
            {
                int i, j, k;
                if (l_198[8][8])
                {
                    return (*g_186);
                }
                else
                {
                    unsigned short *l_222 = (void*)0;
                    unsigned short *l_223 = &g_214;
                    unsigned short l_224 = 0xCBC0L;
                    (*g_88) = (*p_44);
                    if (((safe_add_func_uint32_t_u_u((l_221 ^ ((*l_223) = g_9)), l_224)) >= 0UL))
                    {
                        unsigned short ***l_225 = (void*)0;
                        unsigned short **l_227[9][5][2] = {{{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}, {{(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}, {(void*)0, &l_223}}};
                        unsigned short ***l_226 = &l_227[6][0][1];
                        int i, j, k;
                        if ((*p_44))
                            break;
                        (*l_226) = &l_222;
                    }
                    else
                    {
                        (*g_88) = 1L;
                        return (*p_44);
                    }
                }
                for (g_195 = 23; (g_195 != 15); g_195 = safe_sub_func_uint32_t_u_u(g_195, 3))
                {
                    for (g_116 = 0; (g_116 <= 2); g_116 += 1)
                    {
                        int i, j, k;
                        (**l_184) = l_216[(g_197 + 3)][g_197][g_197];
                        if (l_216[g_197][g_116][(g_197 + 2)])
                            break;
                    }
                }
                for (g_214 = 0; (g_214 <= 6); g_214 += 1)
                {
                    (*g_88) = 0xA9CAEAABL;
                    return l_198[1][5];
                }
            }
        }
    }
    return (*p_44);
}







static unsigned char * func_47(unsigned p_48, int ** p_49, short p_50, int p_51, unsigned char * p_52)
{
    unsigned char *l_138 = &g_56;
    return l_138;


}







static int ** func_57(unsigned char * p_58, int ** p_59, unsigned char * p_60, unsigned char * p_61, int p_62)
{
    char l_129[9] = {0x57L, 0x40L, 0x57L, 0x40L, 0x57L, 0x40L, 0x57L, 0x40L, 0x57L};
    unsigned char **l_132 = (void*)0;
    unsigned char ***l_133[9][10][2] = {{{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}, {{&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}, {&l_132, &l_132}}};
    int **l_136 = (void*)0;
    int **l_137 = &g_88;
    int i, j, k;
    for (g_116 = 0; (g_116 == 57); g_116 = safe_add_func_int32_t_s_s(g_116, 5))
    {
        int l_123[8] = {0x25D0D300L, 0x53350B76L, 0x25D0D300L, 0x53350B76L, 0x25D0D300L, 0x53350B76L, 0x25D0D300L, 0x53350B76L};
        unsigned char **l_125 = &g_55[6];
        unsigned char ***l_124 = &l_125;
        unsigned char ****l_126 = &l_124;
        unsigned char ***l_128 = &l_125;
        unsigned char ****l_127 = &l_128;
        int *l_130 = &g_28;
        int i;
        if ((safe_add_func_uint32_t_u_u(2UL, (g_9 == ((safe_lshift_func_uint16_t_u_u(l_123[7], g_116)) | (((*l_126) = l_124) == ((*l_127) = (void*)0)))))))
        {
            return &g_88;


        }
        else
        {
            int **l_131 = &g_88;
            if (l_129[4])
                break;
            (*l_131) = l_130;

            ;
            (*l_131) = &g_111[2][0];

            ;
            return p_59;


        }
    }
    g_134 = l_132;

    ;
    (*l_137) = (*p_59);


    return &g_88;


}







static unsigned char * func_63(int p_64, unsigned char * p_65, short p_66)
{
    int *l_75 = (void*)0;
    int **l_76 = &l_75;
    int *l_77 = &g_28;
    int l_78 = 0xFD9132E8L;
    unsigned char *l_95 = &g_56;
    int *l_102 = (void*)0;
    unsigned char **l_109 = &l_95;
lbl_86:
    l_77 = ((*l_76) = l_75);

    ;
    if ((g_15 ^ l_78))
    {
        int *l_79 = (void*)0;
        int *l_80 = &l_78;
        (*l_80) = p_66;
    }
    else
    {
        int *l_85 = &l_78;
        if (((*l_85) = (g_28 & (+(safe_mul_func_uint8_t_u_u((((g_9 <= 0x9588L) >= 0xEFL) || p_66), (safe_rshift_func_uint8_t_u_s(p_64, 4))))))))
        {
            if (g_28)
                goto lbl_86;
            for (p_66 = 0; (p_66 <= 2); p_66 += 1)
            {
                short l_89[5] = {0xAC35L, 0x260FL, 0xAC35L, 0x260FL, 0xAC35L};
                int i;
                for (p_64 = 2; (p_64 >= 0); p_64 -= 1)
                {
                    int i, j;
                    if ((g_73[p_64][p_64] != p_64))
                    {
                        int *l_87 = &l_78;
                        g_88 = l_87;

                        ;
                        (*l_85) = g_73[p_64][p_64];
                    }
                    else
                    {
                        return p_65;



                    }

                    ;
                }
                for (g_56 = 0; (g_56 <= 2); g_56 += 1)
                {
                    for (l_78 = 0; (l_78 <= 2); l_78 += 1)
                    {
                        int *l_90[2];
                        int **l_91 = (void*)0;
                        int **l_92 = &l_85;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_90[i] = (void*)0;
                        l_89[4] = 1L;
                        if (g_73[g_56][g_56])
                            continue;
                        g_28 = (-3L);
                        (*l_92) = ((*l_76) = &g_28);

                        ;
                        ;
                    }
                    (*l_76) = (void*)0;

                    ;
                    (*l_85) = (*g_88);
                    for (l_78 = 0; (l_78 >= (-20)); l_78 = safe_sub_func_int16_t_s_s(l_78, 3))
                    {
                        (*l_76) = &g_28;

                        ;
                    }

                    ;
                }
            }

            ;
            ;
            ;
        }
        else
        {
            return l_95;


        }

        ;
        ;
        ;
    }

    ;
    ;
    for (g_56 = (-29); (g_56 != 52); g_56++)
    {
        for (p_66 = (-8); (p_66 == (-24)); p_66 = safe_sub_func_int16_t_s_s(p_66, 5))
        {
            for (l_78 = 0; (l_78 < 4); l_78 = safe_add_func_uint8_t_u_u(l_78, 7))
            {
                int *l_113 = (void*)0;
                int **l_114[9][5][5] = {{{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}, {{&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}, {&g_88, &l_77, &l_102, (void*)0, &l_102}}};
                int i, j, k;
                (*l_76) = l_102;

                ;
                for (g_28 = 0; (g_28 <= (-16)); g_28--)
                {
                    int *l_112 = (void*)0;
                    for (p_64 = (-2); (p_64 <= (-27)); --p_64)
                    {
                        unsigned char **l_108[2][4][6] = {{{&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}}, {{&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}, {&l_95, &g_55[1], &l_95, &g_55[1], &l_95, &l_95}}};
                        unsigned char ***l_107[9];
                        int *l_110 = &g_111[2][0];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_107[i] = &l_108[0][3][5];
                        g_88 = (*l_76);

                        ;
                        l_109 = &g_55[6];

                        ;
                        (*l_110) = 6L;
                        g_88 = l_112;
                    }
                }
                l_102 = (l_113 = ((*l_76) = (void*)0));
            }

            ;
            ;
            return &g_56;



        }
    }
    return &g_56;



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_563[i], "g_563[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_665, "g_665", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
