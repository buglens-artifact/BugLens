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



static unsigned g_14[6][7] = {{4294967289UL,0x25BFC88EL,4294967293UL,4294967293UL,0x25BFC88EL,4294967289UL,0x25BFC88EL},{0x8DEE21AFL,4294967289UL,4294967289UL,0x8DEE21AFL,0x25BFC88EL,0x8DEE21AFL,4294967289UL},{0x42760385L,0x42760385L,4294967289UL,4294967293UL,4294967289UL,0x42760385L,0x42760385L},{0x42760385L,4294967289UL,4294967293UL,4294967289UL,0x42760385L,0x42760385L,4294967289UL},{0x8DEE21AFL,0x25BFC88EL,0x8DEE21AFL,4294967289UL,4294967289UL,0x8DEE21AFL,0x25BFC88EL},{4294967289UL,0x25BFC88EL,4294967293UL,4294967293UL,0x25BFC88EL,4294967289UL,0x25BFC88EL}};
static unsigned g_18 = 0UL;
static unsigned short g_39 = 1UL;
static int g_53 = 0x1563CFEBL;
static int *g_52 = &g_53;
static int g_58[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int *g_57 = &g_58[3];
static char g_61 = 1L;
static unsigned short g_63 = 0UL;
static char g_66 = 0x68L;
static unsigned g_113 = 4294967295UL;
static unsigned g_123 = 0xD9658938L;
static int *g_149 = &g_58[3];
static short g_209 = 0x37C2L;
static int **g_213[3] = {(void*)0,(void*)0,(void*)0};
static unsigned short g_226 = 0xDCE5L;
static short *g_250 = &g_209;
static unsigned char g_257 = 255UL;
static unsigned char g_260 = 255UL;
static unsigned char *g_264 = &g_260;
static unsigned char *g_265 = &g_260;
static unsigned char g_293 = 0xB5L;
static unsigned char g_307 = 0x54L;
static const unsigned *g_350 = &g_123;
static const unsigned ** const g_349 = &g_350;
static int *g_385 = &g_58[3];
static const int **g_418 = (void*)0;
static const int ***g_417 = &g_418;
static unsigned g_422 = 4294967289UL;
static short g_478 = (-3L);
static unsigned short * const g_556 = &g_39;
static unsigned short * const *g_555 = &g_556;
static unsigned short *g_764[10] = {&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63};
static unsigned short **g_763 = &g_764[8];
static unsigned short ***g_762[2][5][9] = {{{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{(void*)0,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,(void*)0,&g_763},{(void*)0,&g_763,&g_763,(void*)0,&g_763,&g_763,&g_763,&g_763,&g_763}},{{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763},{(void*)0,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,(void*)0,&g_763},{&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763}}};
static unsigned short *** const *g_761 = &g_762[0][1][8];
static int *g_788 = (void*)0;
static char **g_807 = (void*)0;
static char *** const g_806 = &g_807;
static char *g_853 = &g_66;
static int g_869 = 0xEAE78124L;
static unsigned char g_963 = 7UL;
static const int *g_979 = &g_53;
static short **g_985 = (void*)0;
static short ***g_984[5] = {&g_985,&g_985,&g_985,&g_985,&g_985};
static int g_992[8][6][5] = {{{0x930F1A19L,0xE48796ACL,0L,0xEF551E6DL,0x2BB14FFDL},{0xC523E8ABL,0x7CFA9EC0L,0xDE16D567L,(-6L),0xDE16D567L},{(-1L),(-1L),0xB5EAFBC4L,(-9L),0xDE16D567L},{7L,9L,0xE48796ACL,(-1L),0x2BB14FFDL},{0xD020D68DL,(-1L),(-1L),0L,(-6L)},{0L,9L,0x930F1A19L,0x930F1A19L,9L}},{{0x2BB14FFDL,(-1L),0xEF551E6DL,0x930F1A19L,0x7CFA9EC0L},{0L,0x7CFA9EC0L,(-7L),0L,(-1L)},{(-9L),0xE48796ACL,(-6L),(-1L),7L},{0L,(-9L),7L,(-9L),0L},{0x2BB14FFDL,0xC523E8ABL,7L,(-6L),(-1L)},{0L,0xB5EAFBC4L,(-6L),0xEF551E6DL,0xD020D68DL}},{{0xD020D68DL,0L,(-7L),0xC523E8ABL,(-1L)},{7L,0xEF551E6DL,0xEF551E6DL,7L,0L},{(-1L),0xEF551E6DL,0x930F1A19L,0x7CFA9EC0L,7L},{0xC523E8ABL,0L,(-1L),0xDE16D567L,(-1L)},{0x930F1A19L,(-9L),0xB5EAFBC4L,(-1L),(-1L)},{(-9L),7L,(-9L),0L,0L}},{{(-9L),9L,0xD020D68DL,7L,0x7CFA9EC0L},{0xDE16D567L,0xB5EAFBC4L,1L,(-1L),0xEF551E6DL},{7L,(-1L),0xD020D68DL,0x7CFA9EC0L,0xD020D68DL},{(-7L),(-7L),(-9L),9L,0xD020D68DL},{0L,0L,0xB5EAFBC4L,(-6L),0xEF551E6DL},{0xC523E8ABL,(-6L),(-7L),0x2BB14FFDL,0x7CFA9EC0L}},{{0x2BB14FFDL,0L,0xDE16D567L,0xDE16D567L,0L},{0xEF551E6DL,(-7L),(-1L),0xDE16D567L,(-1L)},{1L,(-1L),0x930F1A19L,0x2BB14FFDL,(-6L)},{9L,0xB5EAFBC4L,0x7CFA9EC0L,(-6L),0L},{1L,9L,0L,9L,1L},{0xEF551E6DL,7L,0L,0x7CFA9EC0L,(-7L)}},{{0x2BB14FFDL,(-9L),0x7CFA9EC0L,(-1L),0xC523E8ABL},{0xC523E8ABL,1L,0x930F1A19L,7L,(-7L)},{0L,(-1L),(-1L),0L,1L},{(-7L),(-1L),0xDE16D567L,(-1L),0L},{7L,1L,(-7L),0xD020D68DL,(-6L)},{0xDE16D567L,0x2BB14FFDL,0L,0xDE16D567L,0xDE16D567L}},{{0x2BB14FFDL,0xE48796ACL,0x2BB14FFDL,0xB5EAFBC4L,(-1L)},{0x2BB14FFDL,0xEF551E6DL,0L,0xE48796ACL,0x930F1A19L},{7L,0L,(-9L),(-1L),0x7CFA9EC0L},{0xE48796ACL,0xDE16D567L,0L,0x930F1A19L,0L},{0xD020D68DL,0xD020D68DL,0x2BB14FFDL,0xEF551E6DL,0L},{0xB5EAFBC4L,(-1L),0L,(-7L),0x7CFA9EC0L}},{{1L,(-7L),0xD020D68DL,(-6L),0x930F1A19L},{(-6L),(-1L),7L,7L,(-1L)},{0x7CFA9EC0L,0xD020D68DL,(-1L),7L,0xDE16D567L},{(-9L),0xDE16D567L,0xC523E8ABL,(-6L),(-7L)},{0xEF551E6DL,0L,0x930F1A19L,(-7L),0xB5EAFBC4L},{(-9L),0xEF551E6DL,0xB5EAFBC4L,0xEF551E6DL,(-9L)}}};
static char g_1020 = 0xA4L;
static unsigned char g_1021 = 0xA5L;
static int *g_1197 = &g_53;
static unsigned *g_1344 = &g_18;
static char g_1361 = 0x69L;
static unsigned char **g_1414 = &g_264;
static unsigned char ***g_1413 = &g_1414;
static unsigned g_1439 = 2UL;
static unsigned **g_1473 = &g_1344;
static unsigned ***g_1472[10][6] = {{&g_1473,(void*)0,&g_1473,&g_1473,(void*)0,&g_1473},{&g_1473,(void*)0,&g_1473,&g_1473,&g_1473,&g_1473},{&g_1473,&g_1473,&g_1473,&g_1473,(void*)0,&g_1473},{&g_1473,(void*)0,&g_1473,&g_1473,(void*)0,&g_1473},{&g_1473,&g_1473,&g_1473,&g_1473,&g_1473,&g_1473},{&g_1473,&g_1473,&g_1473,&g_1473,&g_1473,&g_1473},{(void*)0,&g_1473,&g_1473,(void*)0,&g_1473,(void*)0},{(void*)0,&g_1473,(void*)0,&g_1473,&g_1473,(void*)0},{&g_1473,&g_1473,&g_1473,&g_1473,&g_1473,&g_1473},{&g_1473,&g_1473,&g_1473,&g_1473,&g_1473,&g_1473}};
static const unsigned short g_1559 = 4UL;
static const unsigned short *g_1558[7][9] = {{&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,(void*)0,(void*)0,(void*)0,&g_1559},{&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,(void*)0,&g_1559},{(void*)0,&g_1559,&g_1559,&g_1559,&g_1559,(void*)0,&g_1559,&g_1559,&g_1559},{&g_1559,&g_1559,(void*)0,&g_1559,&g_1559,(void*)0,&g_1559,&g_1559,&g_1559},{&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559},{&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559,&g_1559},{&g_1559,(void*)0,&g_1559,(void*)0,&g_1559,&g_1559,(void*)0,(void*)0,&g_1559}};
static const short *g_1570 = &g_209;
static const short **g_1569 = &g_1570;
static const unsigned *g_1575 = (void*)0;
static const unsigned * const *g_1574 = &g_1575;
static const unsigned g_1578[2][6] = {{0x4FA3D5ABL,0x4FA3D5ABL,5UL,4294967295UL,4294967295UL,8UL},{4294967295UL,5UL,0x4FA3D5ABL,0x4FA3D5ABL,5UL,4294967295UL}};
static short **g_1580 = &g_250;



static unsigned func_1(void);
static unsigned short func_6(const int p_7, unsigned p_8, int p_9, const char p_10);
static char func_21(unsigned * p_22, int p_23);
static unsigned * func_24(unsigned * p_25, unsigned * const p_26, unsigned * p_27, unsigned * p_28);
static int * func_29(char p_30);
static int * func_68(char * p_69);
static char * func_70(unsigned p_71);
static int func_74(char * p_75, int ** p_76);
static int ** func_78(unsigned p_79, short p_80, unsigned short p_81, char * p_82, unsigned * p_83);
static char * func_84(unsigned short * p_85, const unsigned short p_86, char * p_87, int p_88);
static unsigned func_1(void)
{
    unsigned l_13 = 0UL;
    unsigned *l_17 = &g_18;
    const unsigned short l_1033 = 0UL;
    const short l_1307 = 0xC649L;
    int *l_1314 = &g_53;
    unsigned * const l_1345 = (void*)0;
    char *l_1360 = &g_66;
    int *l_1362 = &g_58[3];
    int **l_1363 = &l_1362;
    char l_1364 = 0x20L;
    unsigned l_1387 = 0x22F17261L;
    const short l_1475 = 4L;
    short *l_1478 = &g_478;
    int *l_1480 = &g_869;
    unsigned l_1510 = 1UL;
    int l_1546 = (-1L);
    int **l_1563 = (void*)0;
    if ((safe_rshift_func_int8_t_s_u(((*g_853) = ((safe_div_func_uint16_t_u_u(func_6(((*g_149) = (safe_div_func_int8_t_s_s(((l_13 | (9UL ^ g_14[4][5])) != (((((*l_17) = ((safe_mod_func_int16_t_s_s((-10L), (l_13 | l_13))) > 1L)) != (((!(safe_div_func_int8_t_s_s(func_21(func_24(&l_13, &g_14[4][5], &g_14[1][5], &g_14[4][5]), g_963), 3L))) | l_13) == l_13)) | l_13) < l_13)), l_13))), l_13, l_13, l_1033), l_13)) && l_1033)), 6)))
    {
        unsigned l_1308 = 0xFF6FFCB0L;
        int *l_1313 = &g_53;
        (*g_149) = func_6(l_1307, g_61, l_1308, ((safe_sub_func_uint8_t_u_u(((*g_264) = 0x09L), 0UL)) == (+((*l_17) = l_1308))));
        for (g_422 = 0; (g_422 > 46); ++g_422)
        {
            return g_53;


        }
        l_1314 = l_1313;
        for (g_226 = (-4); (g_226 != 10); g_226 = safe_add_func_uint16_t_u_u(g_226, 2))
        {
            char l_1319 = 0x11L;
            (*g_1197) = ((-1L) && (((*g_264) = l_1319) == (!(*g_853))));
        }
    }
    else
    {
        unsigned short l_1324 = 0UL;
        int **l_1325 = &g_385;
        int *l_1330 = &g_869;
        char *l_1341[6];
        unsigned *l_1343[8];
        unsigned **l_1342[8] = {&l_1343[2],(void*)0,&l_1343[2],(void*)0,&l_1343[2],(void*)0,&l_1343[2],(void*)0};
        int i;
        for (i = 0; i < 6; i++)
            l_1341[i] = &g_1020;
        for (i = 0; i < 8; i++)
            l_1343[i] = &g_14[4][5];
        (*l_1325) = l_17;

        ;
        (*l_1314) = (safe_rshift_func_uint8_t_u_u((*g_264), (*l_1314)));
    }

    ;
    ;

    ;
    ;
    (*l_1363) = l_1362;
    for (g_422 = 0; (g_422 <= 1); g_422 += 1)
    {
        int *l_1366 = &g_869;
        const int l_1393 = 0x36FCEA8BL;
        char l_1395 = 1L;
        char l_1409 = 0x2AL;
        unsigned char ***l_1416 = &g_1414;
        unsigned short l_1440 = 0x26F8L;
        int **l_1479[2][9][8] = {{{&g_52,&l_1314,&g_57,(void*)0,&l_1314,&g_385,&l_1314,(void*)0},{&g_57,&g_57,&g_57,&g_1197,&l_1314,&l_1366,&g_57,&l_1314},{&l_1314,&g_57,&l_1314,&g_385,&l_1366,&g_385,&l_1314,&g_57},{&l_1314,&l_1314,&g_57,&l_1366,&l_1314,&g_1197,&g_57,&g_57},{&g_57,(void*)0,&l_1314,&g_385,&l_1314,(void*)0,&g_57,&l_1314},{&g_52,&g_385,&g_57,&g_1197,&l_1314,(void*)0,&l_1314,(void*)0},{&l_1314,(void*)0,&l_1314,(void*)0,&l_1314,&g_1197,&g_57,&g_385},{&g_52,&l_1314,&g_57,(void*)0,&l_1314,&g_385,&l_1314,(void*)0},{&g_57,&g_57,&g_57,&g_1197,&l_1314,&l_1366,&g_57,&l_1314}},{{&l_1314,&g_57,&l_1314,&g_385,&l_1366,&g_385,&l_1314,(void*)0},{&g_52,&g_1197,&l_1314,&g_149,&l_1366,&g_57,&g_57,(void*)0},{&g_57,&g_385,&g_52,&l_1366,&g_52,&g_385,&g_57,&g_1197},{&l_1314,&l_1366,&l_1314,&g_57,&l_1314,&g_385,&l_1366,&g_385},{&l_1314,&g_385,&l_1366,&g_385,&l_1314,&g_57,&l_1314,&l_1366},{&l_1314,&g_1197,&g_57,&g_385,&g_52,&l_1366,&g_52,&g_385},{&g_57,(void*)0,&g_57,&g_57,&l_1366,&g_149,&l_1314,&g_1197},{&g_52,(void*)0,&l_1366,&l_1366,&g_57,&l_1366,&l_1366,(void*)0},{&g_52,&g_1197,&l_1314,&g_149,&l_1366,&g_57,&g_57,(void*)0}}};
        short *l_1487 = &g_478;
        short *l_1488 = &g_209;
        unsigned short l_1489 = 0x4A0BL;
        unsigned short **l_1490 = &g_764[8];
        const int l_1515 = 0x1E39EFB3L;
        unsigned short *** const *l_1544 = &g_762[0][2][4];
        unsigned char l_1547 = 0xE4L;
        short **l_1583 = (void*)0;
        int i, j, k;
        for (g_53 = 0; (g_53 <= 1); g_53 += 1)
        {
            unsigned l_1382 = 4UL;
            int l_1389 = 0L;
            unsigned short l_1447 = 0UL;
            int *l_1449 = &g_58[1];
            int i;
        }
        l_1480 = (l_1314 = ((*l_1363) = l_1366));

        ;
        ;
        (*l_1366) = ((0x1CE9L || (safe_rshift_func_uint8_t_u_s(func_6((safe_rshift_func_int8_t_s_u((((**g_349) && (**g_349)) && (safe_lshift_func_int16_t_s_u((*l_1480), ((l_1488 = l_1487) != l_1487)))), ((***l_1416) = (*l_1366)))), g_1020, l_1489, (*l_1480)), 3))) ^ 9UL);

        ;
        for (l_1409 = 1; (l_1409 >= 0); l_1409 -= 1)
        {
            unsigned short ***l_1491 = (void*)0;
            unsigned short ***l_1492 = (void*)0;
            unsigned short ***l_1493 = &g_763;
            char *l_1494[8][3][5] = {{{&l_1395,&g_61,&g_1020,&g_1361,&g_61},{&g_61,&l_1409,&g_66,&g_1020,&g_61},{&g_61,&g_1361,&l_1395,&l_1409,&g_1361}},{{&g_61,&l_1409,&g_1020,&g_61,&g_1361},{&l_1409,&l_1409,&l_1395,&g_61,&g_61},{&g_1020,&g_1020,&g_1020,&l_1409,&g_61}},{{&l_1395,&g_1020,&g_1361,(void*)0,&g_61},{&l_1409,&g_1020,&l_1364,&l_1409,&g_61},{&g_61,&l_1409,&g_1361,&g_61,&g_61}},{{&g_1020,&g_1361,&l_1409,&l_1409,&g_61},{&l_1409,(void*)0,&l_1364,&l_1395,&g_1020},{&g_1020,(void*)0,&g_61,&g_61,(void*)0}},{{&g_61,&g_1361,&g_61,(void*)0,&g_66},{&l_1409,&l_1409,&g_1020,&g_61,&g_1020},{&g_66,&g_1020,&g_61,&l_1409,&g_61}},{{&l_1409,&g_1020,&g_1020,&g_61,&l_1409},{&g_61,&g_1361,(void*)0,&g_61,&l_1395},{&g_1020,&g_61,&g_1361,&l_1409,&l_1395}},{{&l_1409,&g_66,&g_66,&l_1409,&l_1409},{&g_1020,&l_1409,&g_1020,&l_1395,&g_61},{&g_61,&l_1409,&l_1409,&g_1361,&g_1020}},{{&l_1409,&l_1409,&g_1020,&l_1395,&g_66},{&g_1361,(void*)0,&g_1020,&l_1409,(void*)0},{&l_1409,&l_1409,&g_61,&l_1409,&g_1020}}};
            int **l_1495 = &g_57;
            char *l_1509 = &g_61;
            const int l_1512[8][10][3] = {{{1L,0x8B624A4FL,0xE9B9E36CL},{1L,0x340671FCL,0L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L}},{{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)}},{{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)}},{{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L}},{{0L,7L,0L},{0x340671FCL,(-1L),9L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L}},{{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)},{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),9L},{(-1L),(-4L),0xBE5E93A0L},{0x340671FCL,(-1L),(-1L)}},{{0L,(-4L),0L},{0x8BD7293FL,(-1L),(-1L)},{(-1L),7L,0xBE5E93A0L},{0x8BD7293FL,(-1L),9L},{0L,7L,0L},{0x340671FCL,(-1L),0xFF66C333L},{0xBE5E93A0L,1L,0xBCD57BDAL},{(-1L),0x8883CED9L,0x8883CED9L},{(-5L),1L,0x5F582749L},{(-8L),1L,0x8883CED9L}},{{0xBE5E93A0L,(-10L),0xBCD57BDAL},{(-8L),0x8883CED9L,0xFF66C333L},{(-5L),(-10L),0x5F582749L},{(-1L),1L,0xFF66C333L},{0xBE5E93A0L,1L,0xBCD57BDAL},{(-1L),0x8883CED9L,0x8883CED9L},{(-5L),1L,0x5F582749L},{(-8L),1L,0x8883CED9L},{0xBE5E93A0L,(-10L),0xBCD57BDAL},{(-8L),0x8883CED9L,0xFF66C333L}}};
            unsigned short l_1513 = 1UL;
            short l_1521[9] = {0x1F71L,0x1F71L,0x1F71L,0x1F71L,0x1F71L,0x1F71L,0x1F71L,0x1F71L,0x1F71L};
            int l_1564 = 0x9F85AF47L;
            unsigned *l_1566 = &g_14[4][5];
            int i, j, k;
            (*l_1493) = l_1490;
            (*g_385) = (*g_149);
            (*l_1362) = func_6((*l_1362), g_963, func_74(l_1494[7][1][2], l_1495), (*g_853));

            ;
            (*l_1495) = (*l_1495);
            for (g_1021 = 0; (g_1021 <= 1); g_1021 += 1)
            {
                unsigned l_1504[1][2];
                int l_1511 = 0xDBA6E764L;
                char l_1514 = 0xA1L;
                short * const l_1520 = (void*)0;
                int ***l_1524 = &l_1363;
                const unsigned short *l_1556 = &l_1513;
                unsigned l_1560 = 0x9BB9ACE3L;
                const int *l_1568 = (void*)0;
                const short **l_1572[7];
                const unsigned * const *l_1579 = &g_1575;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1504[i][j] = 0xE381B3EAL;
                }
                for (i = 0; i < 7; i++)
                    l_1572[i] = &g_1570;
            }
        }
        for (g_293 = 0; (g_293 <= 1); g_293 += 1)
        {
            return g_209;


        }
    }

    ;
    ;
    return (*l_1314);


}







static unsigned short func_6(const int p_7, unsigned p_8, int p_9, const char p_10)
{
    int *l_1043 = &g_869;
    short l_1063 = 0x1676L;
    char *l_1066 = &g_1020;
    int **l_1067[1][10][9] = {{{&g_149,&l_1043,&l_1043,&g_149,&g_385,(void*)0,&l_1043,&g_385,&g_788},{&l_1043,&l_1043,&g_149,&l_1043,&g_385,&g_385,(void*)0,&g_385,&g_385},{(void*)0,&l_1043,&l_1043,(void*)0,&g_385,&g_385,&g_149,&g_385,&g_149},{&g_149,&l_1043,&l_1043,&g_149,&g_385,(void*)0,&l_1043,&g_385,&g_788},{&l_1043,&l_1043,&g_149,&l_1043,&g_385,&g_385,(void*)0,&g_788,&l_1043},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1043,&g_385,&l_1043,&g_788,&l_1043},{&l_1043,(void*)0,&g_385,&l_1043,&l_1043,&g_149,&g_52,&g_788,&g_149},{&g_52,(void*)0,&g_385,&g_52,&l_1043,&g_788,(void*)0,&g_788,&l_1043},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1043,&g_385,&l_1043,&g_788,&l_1043},{&l_1043,(void*)0,&g_385,&l_1043,&l_1043,&g_149,&g_52,&g_788,&g_149}}};
    char l_1102[7] = {0x77L,1L,1L,0x77L,1L,1L,0x77L};
    unsigned short l_1114 = 65526UL;
    short ***l_1153 = (void*)0;
    const int *l_1189 = &g_58[3];
    unsigned short ****l_1231[7][8][4] = {{{(void*)0,(void*)0,&g_762[1][3][0],&g_762[1][4][5]},{&g_762[0][2][2],&g_762[1][3][0],&g_762[0][0][5],&g_762[1][3][1]},{&g_762[1][1][2],&g_762[0][1][8],&g_762[0][1][8],(void*)0},{(void*)0,&g_762[0][1][8],&g_762[0][1][8],&g_762[1][1][7]},{&g_762[0][1][8],&g_762[1][2][4],(void*)0,&g_762[0][1][8]},{&g_762[0][1][8],(void*)0,&g_762[0][1][8],&g_762[0][1][8]},{(void*)0,(void*)0,&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][1][8],(void*)0,&g_762[1][2][7],&g_762[0][1][8]}},{{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],(void*)0},{&g_762[0][1][8],(void*)0,&g_762[0][1][8],&g_762[0][1][8]},{(void*)0,&g_762[0][1][8],&g_762[1][4][5],&g_762[0][1][8]},{(void*)0,&g_762[0][1][8],(void*)0,&g_762[0][1][8]},{(void*)0,&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][2][1],&g_762[0][2][1],(void*)0,&g_762[0][1][8]},{&g_762[0][0][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][0][5]}},{{&g_762[0][1][8],&g_762[1][4][1],&g_762[0][1][8],&g_762[0][1][8]},{(void*)0,&g_762[1][4][1],&g_762[1][2][4],&g_762[0][0][5]},{&g_762[1][4][1],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[1][4][5],&g_762[0][2][1],&g_762[0][4][5],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],(void*)0,&g_762[0][1][8]},{&g_762[0][2][2],&g_762[0][1][8],(void*)0,&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][1][6],(void*)0,&g_762[0][1][8],&g_762[0][1][8]}},{{&g_762[0][1][8],(void*)0,&g_762[0][3][0],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],(void*)0},{&g_762[1][2][7],&g_762[0][0][6],&g_762[0][1][8],&g_762[1][2][4]},{&g_762[0][1][8],&g_762[0][1][8],(void*)0,&g_762[0][3][5]},{&g_762[0][1][8],&g_762[0][4][8],&g_762[0][0][3],&g_762[0][1][8]},{(void*)0,&g_762[0][1][0],&g_762[0][1][6],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][1][8],(void*)0,(void*)0,&g_762[0][1][8]}},{{&g_762[0][0][5],&g_762[0][4][3],&g_762[0][1][8],(void*)0},{&g_762[1][3][0],&g_762[0][1][8],(void*)0,&g_762[0][1][8]},{(void*)0,&g_762[0][1][8],(void*)0,(void*)0},{&g_762[0][1][8],&g_762[0][1][8],&g_762[1][1][7],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][8],(void*)0,&g_762[0][1][8]},{&g_762[0][3][5],&g_762[0][1][8],&g_762[1][2][3],&g_762[0][1][8]},{&g_762[0][2][5],&g_762[0][1][8],&g_762[0][4][3],&g_762[1][4][1]},{&g_762[0][1][8],(void*)0,&g_762[0][1][8],&g_762[0][1][8]}},{{&g_762[1][2][4],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[0][1][8],&g_762[0][1][6],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[1][3][1],&g_762[0][1][8],&g_762[0][1][8],(void*)0},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]},{&g_762[1][2][4],(void*)0,&g_762[0][1][8],(void*)0},{&g_762[0][1][8],(void*)0,&g_762[0][4][3],&g_762[1][4][5]},{&g_762[0][2][5],&g_762[0][1][0],&g_762[1][2][3],&g_762[0][1][8]},{&g_762[0][3][5],&g_762[0][1][8],(void*)0,&g_762[0][1][8]}},{{&g_762[0][1][8],&g_762[0][1][8],&g_762[1][1][7],&g_762[1][3][5]},{&g_762[0][1][8],&g_762[0][2][5],(void*)0,&g_762[0][1][8]},{&g_762[1][1][2],(void*)0,(void*)0,(void*)0},{(void*)0,&g_762[0][1][8],&g_762[0][1][8],&g_762[0][4][5]},{&g_762[0][1][8],(void*)0,&g_762[1][3][5],(void*)0},{&g_762[0][1][8],&g_762[0][1][8],&g_762[0][3][3],&g_762[0][1][8]},{(void*)0,(void*)0,&g_762[0][1][8],&g_762[0][1][8]},{(void*)0,&g_762[0][1][8],&g_762[0][2][1],&g_762[1][2][4]}}};
    unsigned *l_1286 = &g_422;
    int l_1296 = 6L;
    unsigned short l_1305 = 0x5BA2L;
    int i, j, k;
    for (g_39 = 0; (g_39 == 15); ++g_39)
    {
        unsigned *l_1038 = &g_14[4][5];
        unsigned *l_1039 = &g_123;
        unsigned *l_1040 = &g_422;
        unsigned *l_1041 = &g_18;
        int **l_1042[7];
        char *l_1061 = &g_66;
        int *l_1072 = &g_58[3];
        int l_1099 = 0xE0BA9A06L;
        unsigned l_1113 = 0xFFCE22ADL;
        int * const *l_1145 = &l_1043;
        int * const **l_1144 = &l_1145;
        int * const ***l_1143 = &l_1144;
        int ***l_1147[6] = {&g_213[0],&g_213[0],&g_213[0],&g_213[0],&g_213[0],&g_213[0]};
        int ****l_1146[9] = {&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0],&l_1147[0]};
        const short * const ***l_1177 = (void*)0;
        short l_1203 = 0xD847L;
        const int *l_1246 = &g_58[3];
        unsigned short **l_1267[4];
        int i;
        for (i = 0; i < 7; i++)
            l_1042[i] = &g_788;
        for (i = 0; i < 4; i++)
            l_1267[i] = &g_764[8];
        l_1043 = l_1038;

        ;
    }

    ;
    return p_10;
}







static char func_21(unsigned * p_22, int p_23)
{
    int *l_964 = (void*)0;
    char l_977 = 0x44L;
    short ***l_989[8];
    int *l_1004 = &g_53;
    int i;
    for (i = 0; i < 8; i++)
        l_989[i] = &g_985;
    if ((*g_149))
    {
        return p_23;
    }
    else
    {
        unsigned l_965 = 1UL;
        int *l_972 = &g_58[3];
        short ***l_983 = (void*)0;
        char *l_1007 = &g_61;
        l_964 = (void*)0;
        if (l_965)
        {
            return p_23;
        }
        else
        {
            unsigned l_968 = 0x51793571L;
            int *l_991 = &g_58[3];
            char *l_1030 = &g_66;
            (*g_385) = p_23;
            for (g_260 = 0; (g_260 <= 5); g_260 += 1)
            {
                int *l_969 = &g_53;
                const int *l_981 = (void*)0;
                if ((safe_rshift_func_uint16_t_u_s(6UL, (*g_250))))
                {
                    int l_970[7][10] = {{0x502E6264L,0xFC8D7E5BL,0x8EF1FE4DL,0x502E6264L,(-1L),(-1L),0x502E6264L,0x8EF1FE4DL,0xFC8D7E5BL,0x502E6264L},{0x8EF1FE4DL,0xE60650B4L,0xFC8D7E5BL,(-1L),0xE60650B4L,(-1L),0xFC8D7E5BL,0xE60650B4L,0x8EF1FE4DL,0x8EF1FE4DL},{0x502E6264L,7L,0x92676AEFL,0xE60650B4L,0xE60650B4L,0x92676AEFL,7L,0x502E6264L,0x92676AEFL,0x502E6264L},{0xE60650B4L,0xFC8D7E5BL,(-1L),0xE60650B4L,(-1L),0xFC8D7E5BL,0xE60650B4L,0x8EF1FE4DL,0x8EF1FE4DL,0xE60650B4L},{0x8EF1FE4DL,0x502E6264L,(-1L),(-1L),0x502E6264L,0x8EF1FE4DL,0xFC8D7E5BL,0x502E6264L,0xFC8D7E5BL,0x8EF1FE4DL},{7L,0x502E6264L,0x92676AEFL,0x502E6264L,7L,0x92676AEFL,0xE60650B4L,0xE60650B4L,0x92676AEFL,7L},{7L,0xFC8D7E5BL,0xFC8D7E5BL,7L,(-1L),0x8EF1FE4DL,7L,0x8EF1FE4DL,(-1L),7L}};
                    int i, j;
                    for (g_307 = 0; (g_307 <= 1); g_307 += 1)
                    {
                        int i;
                        g_58[g_260] = (0xDA7474FCL > ((*g_250) ^ p_23));
                        l_969 = &p_23;

                        ;
                    }

                    ;
                    if (l_965)
                        continue;
                    if (l_970[1][8])
                        break;
                    for (g_963 = 0; (g_963 <= 1); g_963 += 1)
                    {
                        int l_971 = (-8L);
                        (*l_969) = l_971;
                        (*g_385) = ((*g_556) <= p_23);
                        l_969 = &p_23;

                        ;
                    }
                }
                else
                {
                    int *l_973[6][5][7] = {{{&g_58[0],&g_58[0],&g_869,(void*)0,&g_58[3],&g_53,&g_58[3]},{&g_58[3],&g_58[0],&g_53,&g_53,&g_58[0],(void*)0,(void*)0},{&g_869,&g_58[3],&g_869,&g_58[3],&g_869,&g_58[3],&g_869},{&g_58[3],&g_58[3],&g_53,&g_53,&g_53,&g_58[1],&g_53},{&g_53,&g_53,&g_58[2],&g_53,&g_53,&g_53,&g_58[4]}},{{(void*)0,&g_869,(void*)0,&g_58[4],&g_53,&g_58[3],&g_869},{&g_58[4],&g_58[3],&g_53,&g_58[1],&g_869,&g_58[3],&g_53},{(void*)0,&g_53,&g_58[3],&g_869,(void*)0,&g_58[0],&g_869},{&g_58[3],&g_53,&g_53,&g_869,(void*)0,&g_58[3],&g_58[3]},{&g_58[3],(void*)0,(void*)0,&g_53,&g_53,&g_58[0],&g_58[2]}},{{(void*)0,&g_58[3],&g_58[1],&g_58[4],&g_58[4],&g_58[1],&g_58[3]},{&g_58[4],&g_58[3],&g_58[3],&g_53,&g_58[3],&g_58[2],&g_869},{(void*)0,&g_869,&g_58[4],(void*)0,(void*)0,&g_58[3],(void*)0},{&g_53,&g_58[0],&g_869,&g_53,&g_58[4],&g_53,&g_869},{&g_58[3],(void*)0,&g_58[2],&g_58[4],&g_58[0],&g_58[1],&g_53}},{{&g_58[1],&g_58[3],&g_58[0],&g_53,&g_53,&g_58[1],&g_869},{&g_58[3],&g_869,&g_58[3],(void*)0,&g_869,&g_869,&g_53},{&g_58[3],&g_58[1],&g_58[3],&g_53,&g_53,&g_58[4],&g_58[0]},{&g_58[3],&g_58[3],&g_869,&g_58[0],&g_869,&g_58[3],&g_58[3]},{&g_58[3],&g_53,&g_58[3],&g_869,&g_58[3],&g_869,&g_53}},{{&g_58[4],&g_53,&g_53,&g_53,&g_58[3],&g_58[3],&g_58[2]},{&g_58[3],&g_869,&g_58[3],(void*)0,&g_58[3],&g_58[0],&g_869},{&g_58[3],&g_58[3],&g_869,&g_53,&g_53,&g_53,&g_58[3]},{&g_869,&g_58[3],&g_58[3],&g_58[3],&g_869,&g_53,&g_58[3]},{&g_58[3],&g_869,&g_58[3],&g_53,&g_58[3],&g_53,&g_58[3]}},{{&g_53,&g_53,&g_58[4],&g_58[3],&g_869,&g_53,&g_869},{&g_58[0],&g_869,(void*)0,(void*)0,&g_869,&g_58[0],&g_53},{&g_58[4],&g_53,&g_58[3],&g_869,&g_869,&g_58[3],&g_869},{(void*)0,&g_869,&g_58[3],&g_58[0],&g_869,&g_869,&g_58[3]},{&g_58[3],&g_53,&g_58[0],&g_58[3],&g_869,&g_58[3],&g_58[0]}}};
                    int i, j, k;
                    l_972 = l_972;
                    for (g_123 = 0; (g_123 <= 1); g_123 += 1)
                    {
                        l_973[3][4][4] = &p_23;
                    }


                }

                ;
                for (g_66 = 0; (g_66 <= 1); g_66 += 1)
                {
                    unsigned short l_975 = 0xD4CCL;
                    int l_982 = 6L;
                }
            }
            if ((*l_972))
            {
                int **l_993 = &l_991;
                (*l_993) = &p_23;

                ;
            }
            else
            {
                unsigned l_994 = 0xD8B174A2L;
                int *l_1005 = (void*)0;
                char *l_1016 = (void*)0;
                if (l_994)
                {
                    for (g_61 = 29; (g_61 > (-2)); --g_61)
                    {
                        unsigned *l_999 = &g_14[0][3];
                        unsigned **l_998 = &l_999;
                        unsigned ***l_997 = &l_998;
                        (*l_997) = &p_22;

                        ;
                        return (*g_853);
                    }
                    for (g_66 = 7; (g_66 > 27); ++g_66)
                    {
                        return p_23;
                    }
                    if (p_23)
                    {
                        int **l_1002 = (void*)0;
                        int **l_1003[7] = {&g_385,&g_385,&g_385,&g_385,&g_385,&g_385,&g_385};
                        int i;
                        p_23 = (*g_385);
                        l_1004 = (l_964 = l_972);

                        ;
                        ;
                        l_1005 = func_68(&l_977);

                        ;
                        l_964 = l_964;
                    }
                    else
                    {
                        int **l_1006[7][5] = {{&l_1004,&l_972,(void*)0,(void*)0,&l_972},{&l_964,&l_991,&g_788,&g_788,&l_991},{&l_1004,&l_972,(void*)0,(void*)0,&l_972},{&l_964,&l_991,&g_788,&g_788,&l_991},{&l_1004,&l_972,(void*)0,(void*)0,&l_972},{&l_964,&l_991,&g_788,&g_788,&l_991},{&l_1004,&l_972,(void*)0,(void*)0,&l_972}};
                        int i, j;
                        l_1005 = l_964;
                        (*l_1004) = func_74(l_1007, &g_788);
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    int **l_1017[2][10] = {{&g_57,&l_1005,&l_1004,&l_1004,&l_1005,&g_57,&l_1005,&l_1004,&l_1004,&l_1005},{&g_57,&l_1005,&l_1004,&l_1004,&l_1005,&g_57,&l_1005,&l_1004,&l_1004,&l_1005}};
                    int i, j;
                    (*l_1004) = (~((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*p_22) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((*l_972), ((*g_264) == (*l_972)))), 10))), (((l_994 > ((safe_add_func_int16_t_s_s((p_23 && (0x8BL <= 0x8EL)), g_1020)) && p_23)) < g_1021) != 7UL))), (*g_264))) ^ 0x33L));
                    l_964 = l_991;

                    ;
                    if (p_23)
                    {
                        int **l_1031 = &l_1005;
                        unsigned char **l_1032 = &g_265;
                        (*l_1004) = (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0xCE8D30B9L, ((1L < 0UL) <= p_23))), 7)) >= (((*l_991) = ((*g_149) && (func_74(l_1030, l_1031) >= (((*l_1032) = (void*)0) == l_1007)))) ^ (*p_22))) > (**g_763)), (**g_555)));

                        ;
                    }
                    else
                    {
                        (*l_991) = (*g_385);
                        (*l_964) = p_23;
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                return (*l_972);
            }

            ;
            return (*l_972);
        }
    }
}







static unsigned * func_24(unsigned * p_25, unsigned * const p_26, unsigned * p_27, unsigned * p_28)
{
    int l_37 = 0x243B9C30L;
    unsigned short *l_38 = &g_39;
    int *l_51 = &l_37;
    int **l_50 = &l_51;
    int **l_56[8][2][4] = {{{&g_52,&g_52,&g_52,&g_52},{(void*)0,(void*)0,&g_52,&g_52}},{{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52}},{{(void*)0,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52}},{{(void*)0,(void*)0,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52}},{{&g_52,(void*)0,(void*)0,&g_52},{&g_52,(void*)0,&g_52,(void*)0}},{{(void*)0,&g_52,&g_52,&g_52},{&g_52,&g_52,(void*)0,&g_52}},{{&g_52,&g_52,&g_52,(void*)0},{&g_52,(void*)0,(void*)0,&g_52}},{{&g_52,(void*)0,&g_52,(void*)0},{(void*)0,&g_52,&g_52,&g_52}}};
    unsigned l_59 = 4UL;
    char *l_60 = &g_61;
    unsigned short *l_62 = &g_63;
    char *l_64 = (void*)0;
    char *l_65 = &g_66;
    char l_857 = 0x80L;
    unsigned char *l_858[2];
    unsigned short ** const *l_902[9][4] = {{&g_763,&g_763,&g_763,(void*)0},{&g_763,&g_763,(void*)0,&g_763},{&g_763,&g_763,&g_763,&g_763},{&g_763,&g_763,(void*)0,(void*)0},{&g_763,&g_763,(void*)0,&g_763},{&g_763,&g_763,(void*)0,&g_763},{&g_763,&g_763,&g_763,(void*)0},{&g_763,&g_763,(void*)0,&g_763},{&g_763,&g_763,&g_763,&g_763}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_858[i] = (void*)0;
    g_52 = func_29(((*l_65) = (safe_lshift_func_uint16_t_u_s(((*l_62) = (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((!((*l_38) = l_37)), 1)) && (p_25 != p_26)) > (safe_sub_func_int8_t_s_s(((*l_60) = (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((*g_52) = (((*l_50) = &l_37) == g_52)) >= (safe_sub_func_uint16_t_u_u(((g_57 = p_25) != &g_58[3]), l_59))) && (9UL <= g_14[4][3])), g_14[0][0])), 0x7EL)), g_14[2][5])), 0x6F8AL))), g_58[3]))), 1L))), 12))));

    ;

    (*l_50) = func_68(func_70((*l_51)));

    ;
    ;


    for (g_226 = 29; (g_226 > 48); ++g_226)
    {
        int l_834 = 0x95E5D663L;
        unsigned char *l_859 = &g_257;
        int l_862 = 0x20082290L;
        unsigned *l_865 = (void*)0;
        char l_880 = 0x73L;
        unsigned char **l_884 = &l_859;
        int l_897 = 0x995EB342L;
        unsigned l_941[1][3];
        int **l_956 = &g_788;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_941[i][j] = 0x2325CCDDL;
        }
        for (g_66 = (-7); (g_66 != (-28)); g_66 = safe_sub_func_uint32_t_u_u(g_66, 4))
        {
            (*g_149) = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((*l_60) = l_834), (*g_264))), 0));
            if ((*l_51))
                continue;
        }
        for (g_63 = 0; (g_63 != 1); g_63++)
        {
            int l_837[4] = {(-4L),(-4L),(-4L),(-4L)};
            const int *l_838 = &l_834;
            char *l_848 = &g_66;
            int l_866[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
            short **l_871[5] = {&g_250,&g_250,&g_250,&g_250,&g_250};
            unsigned char **l_877[9][5] = {{&g_265,&g_265,&g_265,&g_265,&g_265},{&l_859,&l_859,&l_859,&l_859,&l_859},{&g_265,&g_265,&g_265,&g_265,&g_265},{&l_859,&l_859,&l_859,&l_859,&l_859},{&g_265,&g_265,&g_265,&g_265,&g_265},{&l_859,&l_859,&l_859,&l_859,&l_859},{&g_265,&g_265,&g_265,&g_265,&g_265},{&l_859,&l_859,&l_859,&l_859,&l_859},{&g_265,&g_265,&g_265,&g_265,&g_265}};
            int *l_913 = &l_866[4];
            int ***l_946 = &g_213[0];
            int i, j;
        }
        (*l_956) = (*l_956);
        if ((*g_149))
            continue;
    }
    return &g_422;


}







static int * func_29(char p_30)
{
    int *l_67[7][9] = {{(void*)0,&g_53,(void*)0,&g_58[3],&g_58[3],(void*)0,&g_58[3],&g_58[4],&g_58[3]},{&g_58[3],(void*)0,&g_58[0],&g_58[5],&g_58[3],&g_58[4],&g_58[3],&g_58[5],&g_58[0]},{&g_58[3],&g_58[3],&g_53,&g_58[3],&g_58[3],(void*)0,&g_58[0],&g_58[5],&g_58[3]},{(void*)0,&g_58[3],&g_58[4],&g_58[3],&g_53,&g_53,&g_58[3],&g_58[4],&g_58[3]},{&g_53,&g_58[3],&g_53,&g_58[3],&g_58[3],&g_58[3],&g_58[3],&g_58[0],&g_58[3]},{&g_58[5],(void*)0,&g_58[0],&g_58[3],(void*)0,&g_58[3],&g_58[0],(void*)0,&g_58[5]},{&g_58[3],&g_58[3],(void*)0,(void*)0,&g_58[3],&g_58[3],&g_58[3],&g_53,(void*)0}};
    int i, j;
    (*g_52) = (p_30 != 0x35E06C08L);
    return l_67[1][8];


}







static int * func_68(char * p_69)
{
    int **l_723[1];
    int ***l_724 = &g_213[0];
    short **l_740 = &g_250;
    short **l_741 = &g_250;
    unsigned short ****l_765[7] = {&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8],&g_762[0][1][8]};
    char *l_820[5];
    unsigned *l_821 = &g_14[4][5];
    int *l_825 = &g_58[3];
    int i;
    for (i = 0; i < 1; i++)
        l_723[i] = &g_52;
    for (i = 0; i < 5; i++)
        l_820[i] = &g_66;
    if (func_74(&g_66, ((*l_724) = l_723[0])))
    {
        const int * const l_725 = &g_58[3];
        const int *l_727 = &g_53;
        const int **l_726 = &l_727;
        int l_732 = (-1L);
        (*l_726) = l_725;

        ;
        (*l_726) = (void*)0;

        ;
        l_732 = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((**g_349), (*l_725))), (*g_265))) != ((*l_724) == (void*)0));
    }
    else
    {
        char *l_734 = &g_61;
        char ** const l_733 = &l_734;
        char **l_736 = &l_734;
        char ***l_735 = &l_736;
        int l_737 = 0xF03EC771L;
        unsigned short ***l_742 = (void*)0;
        unsigned short ****l_743 = (void*)0;
        unsigned short ****l_744 = (void*)0;
        unsigned short *l_748 = (void*)0;
        unsigned short **l_747 = &l_748;
        unsigned short ***l_746[5][6][4] = {{{&l_747,&l_747,&l_747,(void*)0},{(void*)0,&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747,&l_747},{(void*)0,(void*)0,&l_747,(void*)0},{&l_747,&l_747,&l_747,&l_747}},{{&l_747,&l_747,&l_747,&l_747},{&l_747,&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747,(void*)0},{&l_747,(void*)0,&l_747,&l_747},{(void*)0,&l_747,(void*)0,(void*)0},{&l_747,&l_747,(void*)0,&l_747}},{{(void*)0,&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747,(void*)0},{&l_747,(void*)0,(void*)0,&l_747},{&l_747,&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747,(void*)0},{&l_747,&l_747,&l_747,(void*)0}},{{(void*)0,&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747,&l_747},{(void*)0,(void*)0,&l_747,(void*)0},{&l_747,&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747,(void*)0}},{{(void*)0,&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747,&l_747},{(void*)0,(void*)0,&l_747,&l_747},{&l_747,(void*)0,&l_747,(void*)0},{&l_747,&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747,&l_747}}};
        unsigned short ****l_745 = &l_746[3][1][2];
        unsigned l_749 = 9UL;
        int l_774 = (-7L);
        int *l_780 = &l_774;
        unsigned l_815[4][2];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_815[i][j] = 4294967295UL;
        }
        (*l_735) = l_733;
        (*g_149) = (l_737 <= ((l_740 != (l_741 = &g_250)) ^ (l_737 != ((**l_733) = (l_742 == ((*l_745) = l_742))))));
        (*g_149) = l_749;
        for (g_39 = 0; (g_39 < 54); g_39 = safe_add_func_int16_t_s_s(g_39, 7))
        {
            int l_754 = (-9L);
            int *l_757 = (void*)0;
            int *l_777 = &l_774;
            int *l_778[2];
            char l_808 = 0xDFL;
            int i;
            for (i = 0; i < 2; i++)
                l_778[i] = &l_754;
        }
    }

    ;
    return l_825;


}







static char * func_70(unsigned p_71)
{
    int *l_72 = (void*)0;
    int **l_73 = &g_57;
    char *l_77 = (void*)0;
    unsigned short *l_89 = (void*)0;
    char *l_388 = &g_66;
    int l_399 = 0xB03C8F09L;
    unsigned short ** const l_430 = &l_89;
    unsigned short ** const *l_429 = &l_430;
    int **l_474[5][9][3] = {{{(void*)0,&g_385,&g_52},{&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385},{&g_57,&l_72,&g_57},{&g_385,(void*)0,(void*)0},{&g_385,&g_57,&g_57},{(void*)0,&g_57,(void*)0},{&g_52,(void*)0,&g_385},{&g_149,&l_72,&g_385}},{{(void*)0,(void*)0,&g_385},{&g_149,&g_385,(void*)0},{&l_72,&g_385,&g_57},{&l_72,&g_57,(void*)0},{&g_149,&g_57,&g_57},{(void*)0,&g_52,&g_385},{&g_149,&g_57,&g_385},{&g_52,&g_57,&g_52},{(void*)0,&g_385,&g_52}},{{&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385},{&g_57,&l_72,&g_57},{&g_385,(void*)0,(void*)0},{(void*)0,&g_57,&g_149},{&g_385,&g_57,&g_149},{&g_385,(void*)0,(void*)0},{(void*)0,&g_52,&g_57},{(void*)0,&g_57,(void*)0}},{{&g_52,&g_385,&g_149},{&g_57,&l_72,&g_149},{&g_57,&g_149,(void*)0},{&g_52,&g_385,&l_72},{(void*)0,&g_385,&l_72},{(void*)0,&g_385,&g_385},{&g_385,&g_149,&g_385},{&g_385,&l_72,&g_385},{(void*)0,&g_385,&g_385}},{{&g_385,&g_57,&l_72},{(void*)0,&g_52,&l_72},{&g_385,(void*)0,(void*)0},{(void*)0,&g_57,&g_149},{&g_385,&g_57,&g_149},{&g_385,(void*)0,(void*)0},{(void*)0,&g_52,&g_57},{(void*)0,&g_57,(void*)0},{&g_52,&g_385,&g_149}}};
    unsigned char *l_532 = (void*)0;
    unsigned char **l_541 = &l_532;
    unsigned char ***l_540 = &l_541;
    unsigned short l_550 = 8UL;
    int i, j, k;
    return &g_66;


}







static int func_74(char * p_75, int ** p_76)
{
    int * const l_393 = (void*)0;
    int l_395 = 0x0851E8DEL;
    unsigned short l_396 = 65533UL;
    int *l_397 = &g_58[3];
    int *l_398 = &g_53;
    (*p_76) = l_393;

    ;
    for (g_257 = 0; (g_257 <= 5); g_257 += 1)
    {
        int **l_394 = &g_57;
        (*l_394) = l_393;

        ;
    }
    l_396 = l_395;
    (*l_398) = (4294967290UL != ((*l_397) = l_396));
    return (*l_397);
}







static int ** func_78(unsigned p_79, short p_80, unsigned short p_81, char * p_82, unsigned * p_83)
{
    unsigned char l_391 = 0UL;
    int *l_392 = &g_58[2];
    (*l_392) = (safe_rshift_func_uint16_t_u_s((p_79 > (l_391 && 0x36475EF0L)), l_391));
    (*l_392) = (*l_392);
    return &g_149;


}







static char * func_84(unsigned short * p_85, const unsigned short p_86, char * p_87, int p_88)
{
    int l_92[6];
    int l_99 = 0x480AD74EL;
    unsigned *l_104 = &g_14[4][5];
    int *l_131 = &g_58[2];
    int *l_215 = (void*)0;
    unsigned char *l_259 = &g_260;
    unsigned short **l_277 = (void*)0;
    unsigned l_364 = 0x77E28792L;
    int **l_384[10][9][2] = {{{(void*)0,&g_57},{&g_149,(void*)0},{&l_215,&l_131},{&g_149,&g_57},{&g_57,&g_149},{&l_131,&l_215},{(void*)0,&g_149},{&g_57,(void*)0},{&g_149,&l_131}},{{&g_57,&l_131},{&g_149,(void*)0},{&g_57,&g_149},{(void*)0,&g_149},{&g_57,(void*)0},{&g_52,&g_52},{(void*)0,&g_57},{&g_149,&l_131},{&l_131,&g_52}},{{&g_149,&l_131},{&g_57,&g_149},{&g_57,&l_131},{&g_149,&g_52},{&l_131,&l_131},{&g_149,&g_57},{(void*)0,&g_52},{&g_52,(void*)0},{&g_57,&g_149}},{{&l_131,&l_131},{&g_52,&g_149},{&l_131,&g_57},{&g_149,&g_57},{&l_131,&g_149},{&g_52,&l_131},{&l_131,&g_149},{&g_57,(void*)0},{&g_52,&g_52}},{{(void*)0,&g_57},{&g_149,&l_131},{&l_131,&g_52},{&g_149,&l_131},{&g_57,&g_149},{&g_57,&l_131},{&g_149,&g_52},{&l_131,&l_131},{&g_149,&g_57}},{{(void*)0,&g_52},{&g_52,(void*)0},{&g_57,&g_149},{&l_131,&l_131},{&g_52,&g_149},{&l_131,&g_57},{&g_149,&g_57},{&l_131,&g_149},{&g_52,&l_131}},{{&l_131,&g_149},{&g_57,(void*)0},{&g_52,&g_52},{(void*)0,&g_57},{&g_149,&l_131},{&l_131,&g_52},{&g_149,&g_57},{&g_149,&g_149},{&g_149,&g_57}},{{&g_149,&l_131},{&g_57,&l_131},{(void*)0,&g_149},{&l_215,&l_131},{&l_131,&l_215},{&g_149,(void*)0},{&l_131,&g_57},{&l_131,&g_149},{&g_57,&g_149}},{{&g_149,&g_149},{&g_57,&g_149},{&l_131,&g_57},{&l_131,(void*)0},{&g_149,&l_215},{&l_131,&l_131},{&l_215,&g_149},{(void*)0,&l_131},{&g_57,&l_131}},{{&g_149,&g_57},{&g_149,&g_149},{&g_149,&g_57},{&g_149,&l_131},{&g_57,&l_131},{(void*)0,&g_149},{&l_215,&l_131},{&l_131,&l_215},{&g_149,(void*)0}}};
    int *l_386 = (void*)0;
    int *l_387 = &g_53;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_92[i] = 0xED160806L;
    if ((safe_lshift_func_uint8_t_u_s(((void*)0 == &g_57), 4)))
    {
        unsigned char l_93 = 0x24L;
        int l_98 = 0L;
        unsigned *l_158 = &g_123;
        char *l_189[3];
        int *l_206 = &l_92[1];
        short *l_247[6] = {&g_209,(void*)0,&g_209,&g_209,(void*)0,&g_209};
        int l_284 = 0x4767EC67L;
        int *l_311 = &l_99;
        int *l_315 = (void*)0;
        unsigned short *l_317 = &g_39;
        unsigned char **l_318 = &l_259;
        unsigned char **l_319 = &g_265;
        int i;
        for (i = 0; i < 3; i++)
            l_189[i] = (void*)0;
        l_93 = l_92[5];
        if (((((g_61 && l_93) && (safe_sub_func_uint8_t_u_u((l_92[5] > (l_99 = (safe_add_func_uint16_t_u_u((l_98 = 0x1E2CL), g_61)))), ((safe_lshift_func_uint8_t_u_u(g_58[3], ((safe_add_func_int8_t_s_s((p_88 || l_93), (l_104 == (void*)0))) >= l_92[5]))) && p_88)))) <= g_14[4][5]) & g_53))
        {
            short l_109 = (-7L);
            unsigned **l_119 = &l_104;
            int *l_126 = &g_58[3];
            int **l_130[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_53 = 0; (g_53 < (-24)); g_53 = safe_sub_func_uint8_t_u_u(g_53, 6))
            {
                int l_111 = (-9L);
                if (p_88)
                    break;
                for (p_88 = 0; (p_88 <= 5); p_88 += 1)
                {
                    unsigned short *l_107[1];
                    int **l_114 = &g_52;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_107[i] = &g_39;
                    for (g_66 = 0; (g_66 <= 5); g_66 += 1)
                    {
                        unsigned short **l_108 = &l_107[0];
                        int *l_112[1][4];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_112[i][j] = &l_98;
                        }
                        g_113 = (((((g_58[p_88] = (g_58[g_66] & (!g_58[p_88]))) <= (l_109 = (l_92[p_88] = (&p_86 != ((*l_108) = l_107[0]))))) > ((((((g_14[4][5] ^ 0x6083L) > (safe_unary_minus_func_int16_t_s(0x34D2L))) > ((7UL ^ (!p_86)) && l_111)) && p_88) || (-10L)) == g_53)) >= p_88) >= p_88);
                    }
                    (*l_114) = &l_111;

                    ;
                    (*l_114) = &g_58[3];

                    ;
                }
                if (l_92[4])
                    continue;
                for (l_99 = 15; (l_99 != (-7)); --l_99)
                {
                    unsigned char *l_122[6][7] = {{(void*)0,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{(void*)0,&l_93,&l_93,(void*)0,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{(void*)0,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93}};
                    int i, j;
                    for (g_66 = 0; (g_66 <= 5); g_66 += 1)
                    {
                        int i;
                        g_58[g_66] = g_58[g_66];
                        return &g_66;



                    }
                    for (g_39 = 1; (g_39 <= 5); g_39 += 1)
                    {
                        int **l_117 = &g_57;
                        unsigned **l_118 = &l_104;
                        int i;
                        g_58[g_39] = l_92[g_39];
                        (*l_117) = &l_92[g_39];

                        ;
                        l_119 = l_118;
                    }
                    g_58[3] = ((safe_lshift_func_int16_t_s_u(g_61, (l_92[5] < (g_123 = g_63)))) | g_14[4][5]);
                    for (g_123 = 18; (g_123 < 34); g_123 = safe_add_func_int8_t_s_s(g_123, 7))
                    {
                        int **l_127[7] = {(void*)0,&l_126,&l_126,(void*)0,&l_126,&l_126,(void*)0};
                        int i;
                        if (l_109)
                            break;
                        g_52 = l_126;

                        ;
                    }
                }
            }

            ;
            for (l_98 = 0; (l_98 != 21); ++l_98)
            {
                if (p_88)
                    break;
                (*l_126) = 0xC1C174C2L;
            }
            l_131 = &g_53;

            ;
            for (g_123 = (-6); (g_123 < 11); g_123 = safe_add_func_uint16_t_u_u(g_123, 5))
            {
                int l_139 = 0xF2EBD030L;
                const int l_146 = 1L;
                unsigned l_150 = 4294967291UL;
                for (p_88 = (-2); (p_88 == (-22)); p_88 = safe_sub_func_uint32_t_u_u(p_88, 1))
                {
                    for (g_66 = 5; (g_66 >= 0); g_66 -= 1)
                    {
                        char *l_138[2][6][7] = {{{&g_61,&g_66,&g_66,&g_61,&g_61,&g_66,&g_66},{&g_66,&g_61,&g_61,(void*)0,(void*)0,&g_66,&g_61},{&g_61,&g_66,&g_66,&g_61,&g_66,&g_61,&g_66},{(void*)0,&g_66,&g_66,&g_66,&g_66,&g_61,&g_61},{&g_66,&g_61,&g_66,&g_66,(void*)0,&g_66,&g_66},{&g_61,&g_61,&g_61,&g_61,(void*)0,&g_61,(void*)0}},{{&g_61,&g_66,&g_66,(void*)0,&g_61,&g_61,&g_61},{(void*)0,(void*)0,&g_61,&g_61,(void*)0,&g_66,&g_61},{(void*)0,&g_61,&g_61,&g_61,(void*)0,&g_66,&g_66},{&g_66,&g_61,&g_66,&g_61,&g_66,&g_66,&g_66},{(void*)0,&g_61,&g_61,&g_61,&g_61,&g_66,&g_66},{&g_61,&g_61,&g_61,&g_66,&g_66,&g_66,&g_66}}};
                        int i, j, k;
                        (*l_126) = (0x0DL > l_92[g_66]);
                        g_52 = (void*)0;

                        ;
                        (*l_126) = (safe_add_func_int8_t_s_s((l_139 = g_58[g_66]), (safe_add_func_uint16_t_u_u(((g_58[g_66] > g_58[g_66]) >= (safe_sub_func_int32_t_s_s(2L, (((safe_rshift_func_uint8_t_u_s((((&g_66 != &g_61) <= g_58[g_66]) ^ p_88), g_14[1][2])) > l_146) == 0xBEL)))), 1UL))));
                    }
                    (*l_126) = (!((l_98 < (g_39 >= (&l_131 == (void*)0))) <= g_58[3]));
                    g_149 = &l_92[5];

                    ;
                }
                if (l_150)
                    continue;
                (*l_131) = 0x7B03FFABL;
                g_149 = &l_92[2];

                ;
            }

            ;
        }
        else
        {
            int *l_165 = &g_58[3];
            unsigned *l_220 = (void*)0;
            if (p_88)
            {
                int **l_151 = (void*)0;
                char *l_154 = &g_61;
                unsigned *l_155 = &g_14[4][6];
                unsigned **l_156 = (void*)0;
                unsigned **l_157[10][6] = {{&l_104,(void*)0,(void*)0,&l_104,&l_104,&l_104},{&l_155,&l_155,&l_155,&l_104,&l_104,&l_155},{&l_104,&l_104,&l_104,&l_104,&l_104,&l_155},{&l_155,&l_155,(void*)0,&l_155,&l_104,&l_155},{&l_155,(void*)0,&l_155,&l_155,(void*)0,&l_155},{&l_155,&l_104,(void*)0,&l_104,&l_155,&l_155},{(void*)0,&l_155,&l_104,&l_155,&l_104,&l_155},{(void*)0,&l_155,&l_155,&l_104,(void*)0,&l_104},{&l_155,&l_155,(void*)0,&l_155,&l_155,(void*)0},{&l_155,&l_155,&l_104,&l_155,(void*)0,&l_155}};
                unsigned *l_159 = &g_123;
                int l_184 = (-1L);
                int *l_188[2];
                unsigned short *l_202 = &g_39;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_188[i] = &l_99;
                g_149 = &l_99;

                ;
                if (((*l_131) = (safe_mod_func_uint8_t_u_u(((l_158 = l_155) != l_159), g_58[5]))))
                {
                    int *l_164[5][3] = {{&g_58[2],&g_58[2],&g_58[2]},{&g_58[3],&g_58[3],&g_58[3]},{&g_58[2],&g_58[2],&g_58[2]},{&g_58[3],&g_58[3],&g_58[3]},{&g_58[2],&g_58[2],&g_58[2]}};
                    unsigned char * const l_172[2] = {&l_93,&l_93};
                    unsigned l_183 = 1UL;
                    int i, j;
lbl_185:
                    l_165 = l_164[1][2];
                    for (l_93 = (-16); (l_93 == 33); l_93 = safe_add_func_uint32_t_u_u(l_93, 5))
                    {
                        l_184 = (safe_mod_func_int16_t_s_s((((g_14[4][5] >= p_86) || (0xA46B62C3L < (safe_lshift_func_int8_t_s_u(((void*)0 == l_172[1]), ((safe_rshift_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((*g_149) = ((safe_mod_func_int8_t_s_s(g_123, ((l_98 = ((*l_165) = g_39)) ^ ((g_61 = (((safe_add_func_int16_t_s_s((9L != g_66), g_14[5][1])) || g_66) ^ 0xA1L)) <= g_66)))) != 65527UL)), l_183)) >= l_93), g_63)) < p_88) != 0x9117D6C0L) && l_93) != 0xEC7BL), p_88)) ^ g_113))))) <= g_66), g_123));
                        if (g_61)
                            goto lbl_185;
                    }
                }
                else
                {
                    const int *l_187 = &l_98;
                    const int **l_186 = &l_187;
                    (*l_186) = (void*)0;

                    ;
                    l_188[1] = &g_58[5];


                    return l_189[1];



                }

                ;
                for (l_99 = (-25); (l_99 <= (-25)); l_99 = safe_add_func_uint8_t_u_u(l_99, 1))
                {
                    int l_194[10][6] = {{(-1L),0xD8635005L,(-9L),(-8L),3L,0xDDED1B2FL},{3L,(-6L),0xB01682E6L,(-1L),(-8L),(-1L)},{(-8L),(-8L),0x667E6DEFL,(-1L),(-1L),0x667E6DEFL},{(-9L),(-9L),(-1L),1L,(-5L),3L},{0xB01682E6L,1L,(-5L),1L,(-1L),(-1L)},{(-8L),0xB01682E6L,(-5L),0x667E6DEFL,(-9L),3L},{0xDDED1B2FL,0x667E6DEFL,(-1L),0L,(-1L),0x667E6DEFL},{0L,(-1L),0x667E6DEFL,0xDDED1B2FL,(-1L),(-1L)},{0x667E6DEFL,(-5L),0xB01682E6L,(-8L),1L,0x21D3D7B6L},{1L,(-5L),1L,0xB01682E6L,(-1L),(-8L)}};
                    int *l_205 = &l_92[2];
                    int **l_214 = (void*)0;
                    unsigned short *l_225 = &g_226;
                    unsigned char *l_227 = &l_93;
                    int i, j;
                    if ((safe_add_func_int8_t_s_s(0x5FL, 0x47L)))
                    {
                        (*l_131) = p_88;
                        g_149 = &g_58[3];

                        ;
                    }
                    else
                    {
                        int l_195 = 1L;
                        unsigned short **l_203 = (void*)0;
                        unsigned short **l_204 = &l_202;
                        int l_207[2][6] = {{8L,0xEFCC7DE1L,8L,0xEFCC7DE1L,8L,0xEFCC7DE1L},{8L,0xEFCC7DE1L,8L,0xEFCC7DE1L,8L,0xEFCC7DE1L}};
                        short *l_208 = &g_209;
                        int i, j;
                        l_195 = (g_66 >= (l_194[8][5] & 0xCFL));
                        g_57 = &l_194[9][2];

                        ;
                        (*l_165) = (((*l_208) = ((((1L & ((l_206 = l_205) != l_165)) <= p_86) <= (l_207[1][2] = (0x5219DD48L && ((*l_205) = (p_88 && p_88))))) == 0L)) >= p_88);
                    }


                    if ((*g_149))
                        continue;

                    for (p_88 = 15; (p_88 >= 23); ++p_88)
                    {
                        int ***l_212[6] = {&l_151,&l_151,&l_151,&l_151,&l_151,&l_151};
                        int i;
                        l_214 = (g_213[0] = &g_52);

                        ;
                        (*l_214) = l_215;

                        ;
                    }

                    ;
                    (*l_131) = ((((safe_add_func_uint32_t_u_u(p_86, p_86)) && ((*l_154) = ((g_66 || (p_86 < ((*l_227) = (safe_sub_func_int8_t_s_s(((l_220 = &g_123) == l_165), (((*l_225) = ((*l_202) = (0x68258FFCL == (safe_div_func_uint8_t_u_u(g_39, (safe_div_func_uint16_t_u_u(g_58[3], p_88))))))) & 6L)))))) != 1UL))) || g_53) ^ 0x18L);
                }


                ;

                ;
                l_188[1] = &l_98;


            }
            else
            {
                short l_274 = 0x9F24L;
                int l_308[5][7] = {{1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L},{7L,7L,7L,7L,7L,7L,7L},{1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L},{7L,7L,7L,7L,7L,7L,7L},{1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L,0x62EBD1B2L,1L}};
                int i, j;
                (*l_165) = (*g_149);
                if ((safe_sub_func_int8_t_s_s((*l_206), (!(*l_165)))))
                {
                    unsigned l_232 = 0xCEE319E1L;
                    short *l_249 = &g_209;
                    short **l_248[6];
                    unsigned char *l_251 = &l_93;
                    unsigned char *l_256 = &g_257;
                    unsigned char **l_261 = (void*)0;
                    unsigned char **l_262 = (void*)0;
                    unsigned char **l_263[10][3] = {{&l_251,&l_259,&l_259},{&l_259,&l_259,&l_256},{&l_259,&l_259,&l_256},{&l_251,&l_259,&l_256},{&l_259,&l_259,&l_256},{&l_251,&l_259,&l_259},{&l_259,&l_259,&l_256},{&l_259,&l_259,&l_256},{&l_251,&l_259,&l_256},{&l_259,&l_259,&l_256}};
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_248[i] = &l_249;
                    for (l_99 = (-17); (l_99 < (-24)); --l_99)
                    {
                        short l_246 = 9L;
                        (*l_206) = (((*l_165) >= l_232) && 1UL);
                        if ((*g_149))
                            continue;
                        (*g_149) = (((&g_149 == (void*)0) == (safe_add_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(g_209)) || (safe_sub_func_uint32_t_u_u(l_232, (safe_mod_func_int8_t_s_s(g_58[2], p_86))))) > (((safe_add_func_int8_t_s_s(p_88, (safe_add_func_uint8_t_u_u(5UL, 5L)))) < 0xD3L) && 0L)), 255UL))) > l_246);
                    }
                    (*g_149) = (((*l_251) = (l_247[5] == (g_250 = &g_209))) == (l_232 ^ ((safe_lshift_func_uint8_t_u_u((p_88 != (safe_div_func_uint16_t_u_u((((*l_256) = (*l_206)) || p_86), (0x33L || (safe_unary_minus_func_int32_t_s((((l_259 = (g_264 = l_259)) != (g_265 = &g_260)) != (*l_131)))))))), 6)) == 5L)));
                }
                else
                {
                    unsigned short l_281 = 0xA819L;
                    if (p_88)
                    {
                        const unsigned l_266 = 0xB8B129FCL;
                        (*g_149) = l_266;
                    }
                    else
                    {
                        int l_273[2][10][10] = {{{0x5EF97BF6L,0x2C4D34D6L,(-2L),0L,0xF617F48AL,1L,0L,1L,0xDF1EA78DL,0xDF1EA78DL},{0x2C4D34D6L,(-9L),1L,0xEB3E2729L,0xEB3E2729L,1L,(-9L),0x2C4D34D6L,0L,0L},{0x5EF97BF6L,(-2L),0L,0x2C4D34D6L,0x28C49628L,0xEB3E2729L,3L,0L,3L,0xEB3E2729L},{0x23423A12L,0x28C49628L,0L,0x28C49628L,0x23423A12L,0L,0L,0x2C4D34D6L,(-9L),1L},{0L,0xF617F48AL,1L,0L,1L,0xDF1EA78DL,0xDF1EA78DL,1L,0L,1L},{0L,0L,(-2L),0x5EF97BF6L,0xEB3E2729L,0x23423A12L,0L,0L,0xF617F48AL,1L},{0L,(-9L),0L,(-2L),3L,(-2L),0L,(-9L),0L,0x28C49628L},{1L,0x28C49628L,0xF617F48AL,0xEB3E2729L,1L,0L,0xCC8B21E8L,3L,3L,0xCC8B21E8L},{(-9L),1L,0xEB3E2729L,0xEB3E2729L,1L,(-9L),0x2C4D34D6L,0L,0L,0x23423A12L},{0x23423A12L,3L,0x28C49628L,(-2L),0xF617F48AL,0xDF1EA78DL,(-9L),0xDF1EA78DL,0xF617F48AL,(-2L)}},{{0x23423A12L,0xDF1EA78DL,0x23423A12L,0x5EF97BF6L,0xCC8B21E8L,(-9L),(-2L),1L,0x28C49628L,0L},{(-9L),(-2L),1L,0x28C49628L,0L,0L,0x28C49628L,1L,(-2L),(-9L)},{1L,0L,0x23423A12L,3L,0x28C49628L,(-2L),0xF617F48AL,0xDF1EA78DL,(-9L),0xDF1EA78DL},{0L,0x23423A12L,0x28C49628L,0L,0x28C49628L,0x23423A12L,0L,0L,0x2C4D34D6L,(-9L)},{0x28C49628L,0xF617F48AL,0xEB3E2729L,1L,0L,0xCC8B21E8L,3L,3L,0xCC8B21E8L,1L},{0x5EF97BF6L,1L,1L,0x5EF97BF6L,(-2L),0L,0x2C4D34D6L,0x28C49628L,0xEB3E2729L,3L},{0xCC8B21E8L,0xDF1EA78DL,0xEB3E2729L,0x2C4D34D6L,1L,0x23423A12L,1L,0x2C4D34D6L,0xEB3E2729L,0xDF1EA78DL},{1L,0L,(-9L),0x5EF97BF6L,0L,0xF617F48AL,0L,0xEB3E2729L,(-2L),(-2L)},{0L,3L,0xF617F48AL,0x23423A12L,0x23423A12L,0xF617F48AL,3L,0L,0x5EF97BF6L,0L},{1L,(-9L),0x2C4D34D6L,0L,0L,0x23423A12L,0x28C49628L,0L,0x28C49628L,0x23423A12L}}};
                        unsigned short ***l_278 = &l_277;
                        int i, j, k;
                        (*l_206) = (safe_div_func_int32_t_s_s(((((((~(safe_div_func_int16_t_s_s(p_88, ((*l_165) = (*l_206))))) != (g_61 != (safe_sub_func_uint32_t_u_u(((-1L) > g_123), l_273[1][0][5])))) & l_274) & (safe_lshift_func_int8_t_s_s(l_274, 0))) > g_53) & (*g_265)), g_123));
                        (*l_278) = l_277;
                    }
                    (*l_206) = ((l_274 == (((-1L) >= (g_14[3][4] >= l_281)) != g_58[3])) != (safe_div_func_uint16_t_u_u(l_284, (*g_250))));
                    (*l_165) = 0xD1B60426L;
                    for (l_274 = 0; l_274 < 6; l_274 += 1)
                    {
                        l_247[l_274] = &l_274;
                    }

                }


                if (l_274)
                {
                    unsigned short l_285[3];
                    int *l_292 = &g_53;
                    unsigned l_306[7];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_285[i] = 0xBE46L;
                    for (i = 0; i < 7; i++)
                        l_306[i] = 1UL;
                    l_285[2] = p_88;
                    for (g_257 = 10; (g_257 > 24); g_257++)
                    {
                        char l_288 = 0x94L;
                        if ((*l_206))
                            break;
                        if (l_288)
                            continue;
                    }
                    for (l_274 = 2; (l_274 < 2); l_274++)
                    {
                        int **l_291 = &l_215;
                        (*l_291) = l_165;

                        ;
                        (*l_291) = l_292;

                        ;
                        (*l_291) = &l_99;

                        ;
                        l_308[3][2] = (g_293 | (p_86 < ((+(g_307 = ((safe_rshift_func_uint16_t_u_s(((void*)0 == p_85), 7)) & (((*l_259) = (**l_291)) <= ((((safe_sub_func_int32_t_s_s((((*l_206) <= (g_66 = (safe_mod_func_uint16_t_u_u((((*g_250) = ((l_165 = &l_98) != l_292)) == (safe_lshift_func_uint16_t_u_u((0xD1L || (*l_206)), l_274))), 1UL)))) ^ p_86), (*l_215))) & (**l_291)) | l_306[0]) > (*l_292)))))) >= (**l_291))));

                        ;
                    }

                    ;
                    ;
                    for (g_61 = 0; (g_61 <= 13); g_61++)
                    {
                        (*l_131) = p_88;
                    }
                }
                else
                {
                    int **l_312[5][1] = {{&l_165},{&g_57},{&l_165},{&g_57},{&l_165}};
                    int i, j;
                    l_215 = l_311;

                    ;
                    for (g_226 = 0; (g_226 >= 50); g_226 = safe_add_func_int8_t_s_s(g_226, 7))
                    {
                        l_315 = (void*)0;
                        if (l_274)
                            break;
                    }
                    (*l_131) = p_88;
                }

                ;
                ;
                for (g_209 = 0; (g_209 <= 5); g_209 += 1)
                {
                    unsigned short ***l_316 = &l_277;
                    (*l_316) = &p_85;

                    ;
                    return &g_66;


                }
            }


            ;
            ;
            ;

            ;
            ;

            return &g_61;



        }

        ;
        ;
        ;
        (*l_206) = (((*l_317) = 8UL) | (((*l_318) = &l_93) == ((*l_319) = &g_293)));

        ;
        ;
    }
    else
    {
        int * const l_329 = &g_53;
        unsigned short l_340 = 0x0821L;
        int **l_380[5][10][5] = {{{&g_149,(void*)0,&g_52,&l_131,&g_52},{&l_131,&l_131,&l_215,(void*)0,(void*)0},{&l_131,&l_131,&l_215,(void*)0,(void*)0},{(void*)0,(void*)0,&g_57,(void*)0,&g_57},{&g_57,(void*)0,&l_215,(void*)0,&g_52},{(void*)0,&l_215,(void*)0,(void*)0,&l_131},{(void*)0,&g_52,&l_215,&l_131,&l_215},{(void*)0,(void*)0,(void*)0,&g_57,(void*)0},{&g_52,&l_131,&l_215,(void*)0,&g_52},{&g_57,&l_131,&g_149,(void*)0,(void*)0}},{{&g_57,&l_131,(void*)0,(void*)0,&l_215},{&l_131,&g_57,&l_215,&g_57,(void*)0},{&g_57,&l_215,&g_52,&l_215,&g_57},{(void*)0,&l_215,(void*)0,(void*)0,&g_149},{&g_57,&g_52,&l_215,&l_131,&l_215},{&l_131,(void*)0,&g_149,&l_215,&g_149},{&g_52,&l_131,&g_52,&l_131,&g_57},{&g_149,&l_215,&g_149,(void*)0,(void*)0},{&l_131,&g_149,&l_131,&l_131,&l_215},{&g_57,&l_131,&g_57,&l_215,(void*)0}},{{&l_215,&l_215,&g_52,&l_131,&g_52},{&g_57,(void*)0,&g_57,(void*)0,(void*)0},{&g_52,&g_52,&l_131,(void*)0,&g_57},{&l_131,(void*)0,&g_149,&g_57,&g_57},{&g_52,&l_131,&g_52,(void*)0,&g_57},{&l_131,(void*)0,&g_149,(void*)0,(void*)0},{(void*)0,(void*)0,&l_215,&l_215,&l_215},{&l_131,(void*)0,&l_215,&g_57,&l_131},{&g_52,&l_215,&g_149,(void*)0,&l_215},{(void*)0,&g_57,&g_57,(void*)0,&g_57}},{{(void*)0,(void*)0,&g_57,&g_149,&l_215},{&l_131,(void*)0,(void*)0,&l_131,(void*)0},{&g_52,(void*)0,&g_52,&g_149,&g_149},{(void*)0,&l_131,(void*)0,(void*)0,(void*)0},{(void*)0,&l_131,&g_52,(void*)0,&g_52},{&g_57,&l_131,&l_131,&g_57,(void*)0},{&g_57,&l_131,&g_52,&l_131,&g_52},{(void*)0,&g_57,(void*)0,&g_57,(void*)0},{&g_52,&l_131,&g_57,(void*)0,&l_215},{(void*)0,&l_131,&g_149,(void*)0,(void*)0}},{{&g_57,&l_131,&g_149,&l_131,&g_57},{&l_131,&l_131,&l_215,(void*)0,&l_131},{&g_52,(void*)0,&l_215,(void*)0,&l_131},{&g_57,(void*)0,&g_57,&l_131,&l_131},{&g_57,(void*)0,&g_52,&g_52,&g_57},{&l_131,&g_57,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_57},{(void*)0,(void*)0,(void*)0,&l_215,&l_131},{&g_57,&l_131,&g_149,&l_131,&g_149},{(void*)0,&l_131,(void*)0,(void*)0,&l_131}}};
        int **l_381 = &g_149;
        int i, j, k;
        for (p_88 = 4; (p_88 >= 0); p_88 -= 1)
        {
            unsigned char l_323[1][2];
            unsigned short *l_345 = &g_226;
            int *l_353 = (void*)0;
            const unsigned char **l_379 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_323[i][j] = 0x67L;
            }
            if (p_86)
            {
                int *l_320 = &l_99;
                int **l_321 = (void*)0;
                int **l_322 = &l_215;
                int l_326 = 0x9499CC33L;
                unsigned short *l_327 = &g_226;
                int *l_337 = (void*)0;
                int i;
                (*l_322) = l_320;

                ;
                if ((p_86 | ((*l_327) = (p_86 < (((g_58[(p_88 + 1)] = ((0x45112F0BL & (((p_86 <= ((!(l_323[0][1] ^ p_86)) <= p_86)) == (l_323[0][0] == ((safe_lshift_func_uint16_t_u_u(g_226, l_326)) || (**l_322)))) < g_113)) | (*g_250))) || g_113) < p_86)))))
                {
                    short * const l_328 = (void*)0;
                    int *l_330 = &g_53;
                    (*l_131) = (&g_209 == l_328);
                    l_330 = l_329;
                    if ((((*l_215) == 4294967292UL) && (**l_322)))
                    {
                        int l_335[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_335[i] = 0xDBE8BD68L;
                        (*l_215) = ((safe_sub_func_uint8_t_u_u(((*l_259) = 0x28L), (((*l_215) & ((*g_250) = (g_63 < (p_88 | p_86)))) <= (safe_rshift_func_int16_t_s_s(l_335[1], g_293))))) > p_86);
                    }
                    else
                    {
                        unsigned l_336[10][10][2] = {{{0xA915A7FFL,4294967286UL},{4294967286UL,0x345CE31CL},{4294967295UL,4294967295UL},{1UL,0UL},{0x345CE31CL,6UL},{5UL,0x35544086L},{4294967295UL,4294967293UL},{3UL,1UL},{0UL,0x8A9D95EAL},{4UL,0xE4FB6FEAL}},{{6UL,1UL},{4294967295UL,1UL},{6UL,0xE4FB6FEAL},{4UL,0x8A9D95EAL},{0UL,1UL},{3UL,4294967293UL},{4294967295UL,0x35544086L},{5UL,6UL},{0x345CE31CL,0UL},{1UL,4294967295UL}},{{4294967295UL,0x345CE31CL},{4294967286UL,4294967286UL},{0xA915A7FFL,0xBF6379C1L},{0x35544086L,0xB9098913L},{0x47ADFF32L,0xF0B624E7L},{4294967293UL,0x47ADFF32L},{0x1A9024EDL,8UL},{0x1A9024EDL,0x47ADFF32L},{4294967293UL,0xF0B624E7L},{0x47ADFF32L,0xB9098913L}},{{0x35544086L,0xBF6379C1L},{0xA915A7FFL,4294967286UL},{4294967286UL,0x345CE31CL},{4294967295UL,4294967295UL},{1UL,0UL},{0x345CE31CL,6UL},{5UL,0x35544086L},{4294967295UL,0xB9098913L},{0xA915A7FFL,0x47ADFF32L},{1UL,0x1A9024EDL}},{{3UL,4UL},{8UL,1UL},{0x14791079L,1UL},{8UL,4UL},{3UL,0x1A9024EDL},{1UL,0x47ADFF32L},{0xA915A7FFL,0xB9098913L},{0xCD02EC44L,6UL},{0xF0B624E7L,8UL},{0x4BAB456FL,0x8A9D95EAL}},{{0x47ADFF32L,0x14791079L},{4294967295UL,0x4BAB456FL},{4294967295UL,4294967295UL},{0UL,4294967293UL},{6UL,0xDCB38D5CL},{4UL,0xBF6379C1L},{0xB9098913L,4UL},{0x35544086L,4294967295UL},{0x35544086L,4UL},{0xB9098913L,0xBF6379C1L}},{{4UL,0xDCB38D5CL},{6UL,4294967293UL},{0UL,4294967295UL},{4294967295UL,0x4BAB456FL},{4294967295UL,0x14791079L},{0x47ADFF32L,0x8A9D95EAL},{0x4BAB456FL,8UL},{0xF0B624E7L,6UL},{0xCD02EC44L,0xB9098913L},{0xA915A7FFL,0x47ADFF32L}},{{1UL,0x1A9024EDL},{3UL,4UL},{8UL,1UL},{0x14791079L,1UL},{8UL,4UL},{3UL,0x1A9024EDL},{1UL,0x47ADFF32L},{0xA915A7FFL,0xB9098913L},{0xCD02EC44L,6UL},{0xF0B624E7L,8UL}},{{0x4BAB456FL,0x8A9D95EAL},{0x47ADFF32L,0x14791079L},{4294967295UL,0x4BAB456FL},{4294967295UL,4294967295UL},{0UL,4294967293UL},{4294967295UL,1UL},{8UL,3UL},{0UL,8UL},{4294967286UL,0x14791079L},{4294967286UL,8UL}},{{0UL,3UL},{8UL,1UL},{4294967295UL,0xA915A7FFL},{0x8A9D95EAL,0xCD02EC44L},{0xCD02EC44L,0xF0B624E7L},{0x345CE31CL,0x4BAB456FL},{6UL,0x47ADFF32L},{0xF0B624E7L,4294967295UL},{4UL,4294967295UL},{0x1521E2DDL,0UL}}};
                        unsigned **l_338 = &l_104;
                        int **l_339 = &g_52;
                        int i, j, k;
                        l_330 = l_337;

                        ;
                        (*l_322) = l_330;

                        ;
                        if (p_88)
                            break;
                        (*l_339) = l_329;

                        ;
                    }

                    ;
                    ;
                    (*l_131) = l_323[0][1];
                }
                else
                {
                    (**l_322) = ((*l_329) = l_340);
                }

                ;
                (*l_329) = l_323[0][1];
                if ((0L && ((safe_rshift_func_uint16_t_u_u((&g_39 == (l_345 = &g_63)), 13)) > (*l_329))))
                {
                    return &g_61;


                }
                else
                {
                    unsigned l_348 = 1UL;
                    char *l_359 = &g_61;
                    int *l_365 = &g_58[(p_88 + 1)];
                    if ((safe_lshift_func_int16_t_s_u(l_348, 5)))
                    {
                        const unsigned **l_352 = &g_350;
                        const unsigned ***l_351 = &l_352;
                        (*l_351) = g_349;
                        if (p_86)
                            continue;
                        (*l_322) = l_353;

                        ;
                    }
                    else
                    {
                        char l_358[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_358[i] = 0xCFL;
                        if ((*l_131))
                            break;
                        if (p_86)
                            continue;
                        (*g_149) = (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_348, l_348)), l_358[1]));
                    }
                    if (p_86)
                        continue;
                    l_365 = l_353;

                    ;
                    for (g_113 = 0; (g_113 <= 2); g_113 += 1)
                    {
                        unsigned *l_366 = (void*)0;
                        unsigned *l_367 = (void*)0;
                        unsigned *l_368 = &l_364;
                        int **l_369[8][5][6] = {{{&l_215,&g_57,&g_57,(void*)0,&l_215,(void*)0},{(void*)0,&g_149,&l_131,(void*)0,&l_365,&g_57},{&l_365,&l_131,&l_320,&l_215,&l_320,&g_57},{(void*)0,(void*)0,&l_365,&l_365,&l_215,&l_131},{&l_215,&g_57,&l_320,&g_149,&g_57,&l_320}},{{&l_365,(void*)0,&l_320,(void*)0,(void*)0,&l_131},{&g_57,(void*)0,&l_365,&l_320,&g_52,&g_57},{&l_320,&g_57,&l_320,&l_353,&l_320,&g_57},{&l_320,&g_149,&l_131,&l_131,&g_52,(void*)0},{&g_52,(void*)0,&g_57,&g_149,&l_365,&g_52}},{{&l_320,(void*)0,&g_57,&l_353,&g_52,&g_57},{(void*)0,&g_57,&l_365,&g_149,(void*)0,&l_131},{&l_131,&l_365,&l_365,&l_320,&l_320,&g_149},{&l_365,&l_320,(void*)0,&l_365,&l_320,&l_320},{&l_320,&l_320,&l_320,&g_52,&l_365,&g_149}},{{&l_320,&l_353,&g_57,&l_365,&l_365,&g_57},{&l_365,&l_215,&g_57,&l_320,(void*)0,(void*)0},{&l_131,&g_149,&l_320,&g_149,&l_131,&l_131},{(void*)0,&l_320,&l_131,&l_353,&l_320,&l_365},{(void*)0,&g_149,&g_52,&l_320,&l_320,&l_365}},{{&l_320,&l_131,&l_131,(void*)0,&g_52,&l_131},{&l_320,(void*)0,&l_320,(void*)0,&l_365,(void*)0},{&l_353,&l_353,&g_57,&l_353,&g_57,&g_57},{&g_57,(void*)0,&g_57,&l_320,&l_365,&g_149},{&l_215,(void*)0,&l_320,&g_57,&l_365,&l_320}},{{&l_320,(void*)0,(void*)0,&l_131,&g_57,&g_149},{&l_320,&l_353,&l_365,&l_131,&l_365,&l_365},{&l_320,&g_52,&l_320,&l_131,&l_365,&l_365},{&g_57,(void*)0,&l_320,&l_215,&l_131,&l_353},{&l_320,&l_353,(void*)0,&l_215,&l_365,&l_131}},{{&g_57,(void*)0,(void*)0,&l_131,&l_320,(void*)0},{&l_320,&g_57,&l_131,&l_365,&l_365,&g_149},{&l_337,&l_131,&l_365,(void*)0,&l_320,&g_57},{&l_365,&g_149,&l_320,&l_215,&l_353,&g_57},{&g_52,&l_320,&l_320,&l_320,&l_337,&g_57}},{{&l_320,&l_320,&l_365,&g_57,&l_365,&g_149},{&l_320,(void*)0,&l_131,&l_353,&l_131,(void*)0},{&l_131,&l_215,(void*)0,&g_149,&l_215,&l_131},{&l_215,&g_57,(void*)0,(void*)0,&l_365,&l_353},{&l_365,&g_57,&l_320,(void*)0,&l_215,&l_365}}};
                        int **l_370[8] = {&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353};
                        int i, j, k;
                        (*l_329) = ((*g_149) = (p_88 == ((*l_368) = (*g_350))));
                        l_215 = l_329;

                        ;
                        (*l_320) = ((**l_322) = ((((*g_250) = (*g_250)) || (safe_add_func_uint16_t_u_u(((g_39 == 0x4789L) > g_257), ((((safe_div_func_uint16_t_u_u(g_123, (safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(0UL, (p_88 & p_86))) && 0xE6L), 4)))) > (*l_329)) | p_88) >= p_88)))) == p_86));
                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                (*l_329) = 1L;
                (*l_329) = (*l_131);
            }

            ;
            ;
            (*l_329) = (((*l_259) = ((void*)0 != l_379)) < g_39);
            return l_259;


        }

        ;
        (*l_381) = l_329;

        ;
    }

    ;
    ;
    ;
    ;

    ;
    (*l_131) = (0x5CL < ((*g_250) || (p_88 <= (((*g_350) & p_88) || p_86))));
    l_387 = (l_386 = (g_385 = &l_92[5]));

    ;
    ;
    ;
    return p_87;





}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_963, "g_963", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_992[i][j][k], "g_992[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1578[i][j], "g_1578[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
