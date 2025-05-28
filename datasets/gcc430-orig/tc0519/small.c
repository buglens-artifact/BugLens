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
   unsigned f0;
   unsigned f1;
   unsigned short f2;
};


static int g_2 = 0x90C4D8E5L;
static int g_23 = 0x1C097BC8L;
static int g_25[1] = {0x30467731L};
static int g_26 = 0L;
static int g_27 = 0x64939E63L;
static int g_29[6][1][4] = {{{(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}}};
static int *g_28 = &g_29[1][0][3];
static unsigned g_58[6][7] = {{4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}, {4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}, {4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}, {4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}, {4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}, {4294967295UL, 0UL, 0x9B1CC8FFL, 4294967286UL, 0x30E5DEFAL, 4294967288UL, 0x30E5DEFAL}};
static struct S0 g_69 = {0UL,8UL,65532UL};
static struct S0 *g_68 = &g_69;
static unsigned *g_76 = (void*)0;
static unsigned **g_75[5][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
static long long g_136 = 7L;
static char g_148 = (-5L);
static short g_155 = 0L;
static int g_194 = 0xE5E31DACL;
static long long *g_263 = (void*)0;
static long long **g_262 = &g_263;
static struct S0 g_274 = {18446744073709551615UL,4294967295UL,0xCCBDL};
static unsigned long long g_281[3] = {18446744073709551608UL, 18446744073709551608UL, 18446744073709551608UL};
static unsigned char g_299 = 0x99L;
static long long **g_318 = &g_263;
static int *g_345 = &g_25[0];
static int *g_346 = (void*)0;
static unsigned char *g_351 = (void*)0;
static unsigned char **g_350 = &g_351;
static unsigned char *g_383 = &g_299;
static int g_406 = 1L;
static int **g_429 = &g_346;
static int ***g_428 = &g_429;
static short *g_451 = &g_155;
static unsigned long long *g_473 = &g_281[1];
static int **g_486 = (void*)0;
static short g_508 = 0xDEFAL;
static unsigned long long g_557 = 2UL;
static unsigned long long g_583 = 1UL;
static char g_616 = 0xF6L;
static short g_656 = 0xC8B9L;
static int *g_684[3][1] = {{&g_29[1][0][3]}, {&g_29[1][0][3]}, {&g_29[1][0][3]}};
static struct S0 g_686 = {0UL,0xAADC4C98L,65530UL};
static unsigned g_701[7] = {0x254C6747L, 0x254C6747L, 0x254C6747L, 0x254C6747L, 0x254C6747L, 0x254C6747L, 0x254C6747L};
static unsigned short g_713 = 0x5367L;
static unsigned char g_747 = 254UL;
static int **g_775 = (void*)0;



static long long func_1(void);
static int * func_5(unsigned long long p_6, char p_7, int p_8);
static unsigned short func_12(unsigned short p_13, unsigned p_14, int * p_15, int * p_16, int * p_17);
static int * func_18(int * p_19);
static int * func_20(int * p_21);
static short func_37(int p_38, int p_39, int p_40, struct S0 * p_41, unsigned short p_42);
static int func_44(int p_45, unsigned p_46, struct S0 * p_47);
static struct S0 * func_49(int * p_50, int ** p_51, long long p_52);
static unsigned char func_64(int ** p_65);
static int ** func_66(int p_67);
static long long func_1(void)
{
    char l_10 = 1L;
    int *l_642 = (void*)0;
    char l_645[2][1];
    long long *l_650 = &g_136;
    unsigned l_651 = 0x66E89504L;
    unsigned *l_652 = (void*)0;
    unsigned *l_653 = (void*)0;
    unsigned *l_654 = &l_651;
    struct S0 *l_655 = &g_69;
    int ***l_661 = &g_486;
    int ****l_662 = (void*)0;
    int ****l_663 = &l_661;
    unsigned short l_667[6][1][3] = {{{0x7109L, 65535UL, 0x7109L}}, {{0x7109L, 65535UL, 0x7109L}}, {{0x7109L, 65535UL, 0x7109L}}, {{0x7109L, 65535UL, 0x7109L}}, {{0x7109L, 65535UL, 0x7109L}}, {{0x7109L, 65535UL, 0x7109L}}};
    int *l_673 = &g_29[3][0][0];
    int *l_700 = (void*)0;
    int *l_715 = &g_23;
    unsigned l_722[2][7][8] = {{{18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}}, {{18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}, {18446744073709551607UL, 1UL, 0UL, 18446744073709551614UL, 0x7DCF1650L, 18446744073709551613UL, 4UL, 0x595D0AD2L}}};
    unsigned char *l_758 = (void*)0;
    unsigned l_759 = 4294967290UL;
    int **l_763[8][2] = {{&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}, {&g_684[0][0], &g_684[1][0]}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_645[i][j] = 1L;
    }
    for (g_2 = (-2); (g_2 != (-30)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 2))
    {
        unsigned char l_9 = 0xD7L;
    }
    (*g_345) = (l_645[0][0] == (safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((l_10 < ((*l_650) = 0xE8090E37DCB13A50LL)), (l_10 & ((((*g_473) = (((*g_473) & (g_656 = (((*g_451) = func_44(l_10, ((*l_654) = func_44(l_651, l_651, &g_274)), l_655)) != g_27))) < (*g_473))) < l_10) || g_58[0][2])))), g_29[4][0][0])));
    if ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0x029BDC366223BFA3LL && 0xD961C911DC618D6DLL), ((*g_451) = ((*g_451) <= (((*l_663) = l_661) == &g_486))))), (func_12(g_274.f0, (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_26)), ((g_58[0][2] > l_667[4][0][1]) || 0x7A4A3D831448AD75LL))), (*g_429), (*g_429), l_653) < l_667[0][0][0]))))
    {
        unsigned short *l_694 = &l_667[4][0][1];
        int *l_695 = &g_26;
        int *l_697 = &g_2;
        int **l_704 = &g_684[0][0];
        int **l_705 = (void*)0;
        struct S0 **l_706 = (void*)0;
        struct S0 **l_707 = &l_655;
        for (g_69.f0 = 0; (g_69.f0 >= 33); g_69.f0 = safe_add_func_uint64_t_u_u(g_69.f0, 6))
        {
            int *l_675 = &g_2;
            struct S0 l_685 = {0x00C141DEL,0xAE285B22L,65526UL};
            for (g_194 = 14; (g_194 > (-5)); g_194 = safe_sub_func_uint64_t_u_u(g_194, 9))
            {
                int ***l_672 = &g_429;
                int **l_674 = &l_642;
                (*l_673) = func_12((l_672 == &g_429), g_194, (**g_428), ((*l_674) = l_673), (l_675 = (void*)0));
            }
            (*g_429) = l_675;
            for (g_274.f1 = 0; (g_274.f1 > 19); g_274.f1++)
            {
                unsigned l_687 = 0xD971FC0CL;
                for (g_299 = (-6); (g_299 == 43); ++g_299)
                {
                    int *l_683 = &g_23;
                    for (g_26 = 0; (g_26 < (-19)); g_26 = safe_sub_func_uint8_t_u_u(g_26, 9))
                    {
                        int *l_682 = &g_23;
                        l_675 = (**g_428);
                        (**g_428) = l_682;
                        (*g_429) = (g_684[0][0] = l_683);
                    }
                    g_686 = (l_685 = (*g_68));
                    (**g_428) = (*g_429);
                }
                return l_687;
            }
            for (l_685.f2 = 0; (l_685.f2 != 48); l_685.f2++)
            {
                unsigned l_696 = 0UL;
                int *l_698 = (void*)0;
                char *l_699[2][7] = {{&l_645[0][0], (void*)0, &l_645[1][0], &l_645[1][0], (void*)0, &l_645[0][0], (void*)0}, {&l_645[0][0], (void*)0, &l_645[1][0], &l_645[1][0], (void*)0, &l_645[0][0], (void*)0}};
                char l_702 = 0x90L;
                int i, j;
                (**g_428) = (void*)0;
                if (((*l_695) = ((((safe_rshift_func_uint16_t_u_s(((((*g_473) & ((18446744073709551615UL > (safe_sub_func_uint16_t_u_u(func_12(((*l_694) = (((l_694 == (void*)0) > ((((g_148 = func_12(((*l_694) = func_12(g_136, g_281[2], (**g_428), (**g_428), l_695)), l_696, l_697, l_697, l_698)) || (-6L)) | 0x57351683L) | 0xD3L)) > (*g_383))), (*l_697), l_700, &g_23, l_695), g_281[1]))) & 0x541CE125L)) & (*g_473)) <= (*l_697)), (*g_451))) | g_701[0]) || 0xE9D5L) & l_702)))
                {
                    int *l_703 = &g_29[2][0][0];
                    l_703 = l_697;
                }
                else
                {
                    g_686 = (*g_68);
                    (*g_429) = (**g_428);
                }
            }
        }
        (*l_695) = 0x29247AABL;
        (*l_707) = l_655;
    }
    else
    {
        int l_708[1];
        int *l_714 = (void*)0;
        int *l_716 = &g_25[0];
        struct S0 l_725 = {0x889E2667L,0UL,0xB880L};
        long long l_735 = 4L;
        unsigned short *l_752 = &l_667[4][0][1];
        int **l_753[7][3] = {{(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}, {(void*)0, &l_714, &g_684[2][0]}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_708[i] = 0L;
        if ((((l_708[0] <= l_708[0]) != (safe_rshift_func_int16_t_s_s((*l_673), 9))) <= ((safe_mul_func_uint8_t_u_u(255UL, g_148)) <= (l_708[0] > func_12(g_686.f2, func_12(g_713, l_708[0], l_714, (**g_428), l_715), l_716, l_716, l_714)))))
        {
            for (g_713 = 10; (g_713 == 5); g_713 = safe_sub_func_int64_t_s_s(g_713, 9))
            {
                int l_719 = (-1L);
                if (l_719)
                    break;
                if ((*g_345))
                    continue;
            }
            (*g_429) = (*g_429);
            for (g_155 = (-5); (g_155 < (-12)); g_155--)
            {
                return l_722[0][3][0];
            }
        }
        else
        {
            struct S0 **l_723 = &g_68;
            int l_726 = 5L;
            (*l_723) = &g_69;
            for (g_136 = 0; (g_136 >= 0); g_136 -= 1)
            {
                char *l_724 = &l_10;
                unsigned l_745[9][3][6] = {{{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}, {{0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}, {0x5DAAD9F2L, 4294967295UL, 0xD2900D85L, 0x0F68C0D9L, 4294967289UL, 4294967295UL}}};
                int i, j, k;
            }
        }
        for (g_274.f2 = 0; (g_274.f2 >= 21); g_274.f2++)
        {
            (*l_715) = (((*l_661) = func_66((safe_lshift_func_int16_t_s_u((2UL <= ((void*)0 != l_752)), 14)))) != ((*g_428) = l_753[2][0]));
        }
    }
    if (((safe_add_func_int8_t_s_s((*l_715), g_274.f0)) != ((safe_sub_func_uint64_t_u_u(((~(*l_673)) <= (((l_758 = l_758) != (*g_350)) != ((*g_451) = (*g_451)))), (*l_673))) <= l_759)))
    {
        unsigned short l_760 = 0x3E80L;
        struct S0 *l_764 = (void*)0;
        int *l_765 = &g_25[0];
        int *l_766 = &g_29[1][0][3];
        short l_767 = 1L;
        (*l_673) = (~((0x2BC4252D789868EBLL & (l_760 >= (l_767 = (safe_add_func_int64_t_s_s(((*l_765) = ((!(*l_766)) && (*g_451))), (-10L)))))) & g_58[3][2]));
    }
    else
    {
        long long l_770 = 0xD62535327FF87045LL;
        int l_771 = 0x5CF9CA61L;
        short *l_772 = &g_656;
        (*g_28) = (0x29B7A1332C76A950LL | (safe_mul_func_uint16_t_u_u((((l_770 = 0x89D2L) != ((*l_772) = ((*g_451) = (((void*)0 != &g_69) ^ l_771)))) < (l_771 <= 4294967287UL)), ((safe_mod_func_int64_t_s_s(l_771, l_771)) | 1L))));
    }
    return g_27;
}







static int * func_5(unsigned long long p_6, char p_7, int p_8)
{
    long long l_11[2][4] = {{1L, 1L, 0x308F4727CAD7D711LL, 1L}, {1L, 1L, 0x308F4727CAD7D711LL, 1L}};
    int *l_640 = &g_29[1][0][3];
    int i, j;
    l_11[1][3] = g_2;
    (*l_640) = (func_12(p_8, l_11[1][2], func_18(func_20(&g_2)), l_640, l_640) & (65533UL <= g_29[5][0][1]));
    return l_640;
}







static unsigned short func_12(unsigned short p_13, unsigned p_14, int * p_15, int * p_16, int * p_17)
{
    for (g_136 = 0; (g_136 <= 5); g_136 += 1)
    {
        return p_13;
    }
    for (g_26 = 2; (g_26 >= 0); g_26 -= 1)
    {
        int *l_641 = &g_25[0];
        (*g_429) = l_641;
    }
    return g_274.f0;
}







static int * func_18(int * p_19)
{
    unsigned l_626 = 4294967295UL;
    char *l_628[3][9] = {{&g_616, (void*)0, &g_148, &g_148, (void*)0, &g_616, (void*)0, &g_148, &g_148}, {&g_616, (void*)0, &g_148, &g_148, (void*)0, &g_616, (void*)0, &g_148, &g_148}, {&g_616, (void*)0, &g_148, &g_148, (void*)0, &g_616, (void*)0, &g_148, &g_148}};
    char **l_627 = &l_628[0][1];
    struct S0 **l_629 = &g_68;
    struct S0 *l_632 = (void*)0;
    unsigned char l_633 = 0x4AL;
    long long l_638 = 1L;
    int *l_639[8];
    int i, j;
    for (i = 0; i < 8; i++)
        l_639[i] = &g_2;
    if ((0UL || l_626))
    {
        return p_19;
    }
    else
    {
        struct S0 ***l_630[9][4][6] = {{{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}, {{&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}, {&l_629, &l_629, &l_629, &l_629, (void*)0, &l_629}}};
        int l_631 = (-10L);
        int **l_637 = &g_346;
        int i, j, k;
        l_633 = ((l_627 == (void*)0) != ((g_27 > l_626) & 18446744073709551615UL));
        (*g_429) = p_19;
        for (l_626 = (-29); (l_626 < 15); ++l_626)
        {
            unsigned long long l_636 = 0xDAFDD0E1D93B7EA6LL;
            (**g_428) = p_19;
            for (g_508 = 0; (g_508 >= 0); g_508 -= 1)
            {
                int i, j;
                g_25[g_508] = g_58[(g_508 + 4)][(g_508 + 2)];
                p_19 = &g_25[g_508];
                l_638 = (l_636 || func_64(l_637));
            }
            (*g_429) = (*g_429);
            if ((*p_19))
                break;
        }
    }
    return l_639[2];
}







static int * func_20(int * p_21)
{
    int *l_22 = &g_23;
    struct S0 l_33 = {0x50E16FFAL,0UL,0x34C9L};
    unsigned long long l_556[9][7] = {{0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}, {0x8C89095398C11CF3LL, 0x3CFD16796F2A707ALL, 18446744073709551606UL, 18446744073709551606UL, 0x3CFD16796F2A707ALL, 0x8C89095398C11CF3LL, 0xC2F96D71C37C3B93LL}};
    int l_601 = 4L;
    int i, j;
    if (((*l_22) = g_2))
    {
        int l_24[7];
        int i;
        for (i = 0; i < 7; i++)
            l_24[i] = 0xB2FC257AL;
        for (g_23 = 5; (g_23 >= 0); g_23 -= 1)
        {
            unsigned l_43[2];
            int i;
            for (i = 0; i < 2; i++)
                l_43[i] = 0xD4E785E8L;
            for (g_25[0] = 1; (g_25[0] <= 6); g_25[0] += 1)
            {
                int *l_31 = &l_24[1];
                int **l_32[4][9] = {{&g_28, &g_28, &l_22, &l_22, &g_28, &g_28, &g_28, &l_22, &l_22}, {&g_28, &g_28, &l_22, &l_22, &g_28, &g_28, &g_28, &l_22, &l_22}, {&g_28, &g_28, &l_22, &l_22, &g_28, &g_28, &g_28, &l_22, &l_22}, {&g_28, &g_28, &l_22, &l_22, &g_28, &g_28, &g_28, &l_22, &l_22}};
                int i, j;
                for (g_26 = 0; (g_26 <= 6); g_26 += 1)
                {
                    for (g_27 = 6; (g_27 >= 0); g_27 -= 1)
                    {
                        int i;
                        if (l_24[g_25[0]])
                            break;
                        g_28 = (void*)0;
                    }
                    for (g_27 = 0; (g_27 >= 0); g_27 -= 1)
                    {
                        int **l_30 = &g_28;
                        int i;
                        (*l_30) = &l_24[g_26];
                        (*l_30) = (void*)0;
                    }
                }
                l_24[g_25[0]] = l_24[g_25[0]];
                p_21 = (l_31 = &g_29[1][0][3]);
            }
            for (g_27 = 6; (g_27 >= 1); g_27 -= 1)
            {
                return p_21;
            }
            for (g_27 = 6; (g_27 >= 0); g_27 -= 1)
            {
                struct S0 *l_34 = &l_33;
                (*l_34) = l_33;
            }
            for (l_33.f2 = 0; (l_33.f2 <= 6); l_33.f2 += 1)
            {
                unsigned short l_48 = 0x5501L;
                int i;
            }
        }
        return p_21;
    }
    else
    {
        short l_531 = 0xDA47L;
        long long ***l_540 = &g_262;
        unsigned l_584 = 4294967289UL;
        int l_585 = 2L;
        struct S0 l_586[3][10][1] = {{{{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}}, {{{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}}, {{{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}, {{6UL,4294967295UL,0x8A73L}}}};
        int **l_599[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_599[i] = &l_22;
        if (((l_531 == (func_37(l_531, (!3L), (*l_22), &l_33, g_274.f0) >= (*l_22))) & (*l_22)))
        {
            (*l_22) = (*p_21);
            (*l_22) = ((*g_451) ^ (safe_mul_func_uint8_t_u_u((*g_383), 0xAFL)));
            (**g_428) = p_21;
            (**g_428) = (**g_428);
        }
        else
        {
            unsigned l_552 = 0x89E33AFFL;
            int *l_561 = &g_25[0];
            int l_623 = 0L;
            for (g_274.f1 = (-10); (g_274.f1 > 58); g_274.f1 = safe_add_func_uint64_t_u_u(g_274.f1, 9))
            {
                char l_559[9] = {0x9AL, 1L, 0x9AL, 1L, 0x9AL, 1L, 0x9AL, 1L, 0x9AL};
                int l_560[6][8][3] = {{{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}, {{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}, {{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}, {{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}, {{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}, {{0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}, {0xFE4BEF92L, 0x582E5053L, 0xEFEDBC47L}}};
                unsigned long long l_575 = 0x9C4ED2A309AAB05FLL;
                unsigned short l_598 = 0x0148L;
                int l_608[7];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_608[i] = 0xE8D3A537L;
            }
            (*g_429) = &l_623;
            (*l_561) = (safe_mod_func_uint32_t_u_u((*l_561), 8L));
            return p_21;
        }
    }
    return p_21;
}







static short func_37(int p_38, int p_39, int p_40, struct S0 * p_41, unsigned short p_42)
{
    int **l_465 = &g_346;
    unsigned long long **l_468 = (void*)0;
    unsigned long long *l_470 = &g_281[1];
    unsigned long long **l_469 = &l_470;
    unsigned long long *l_472 = &g_281[2];
    unsigned long long **l_471[7][9][4] = {{{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}, {{&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}, {&l_472, (void*)0, (void*)0, (void*)0}}};
    unsigned short l_489 = 6UL;
    long long l_496 = (-1L);
    int i, j, k;
    p_39 = (((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((*g_451) = func_64(l_465)), (safe_rshift_func_uint16_t_u_u(((g_473 = ((*l_469) = &g_281[1])) != &g_281[1]), ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(0x3BC8A3F6CF749F89LL, p_42)) <= g_23), p_39)) <= ((*g_345) >= (-4L))))))) | p_42), 0x7038L)) == 65535UL) | p_40);
    if (((safe_add_func_uint64_t_u_u((0xFD0A58B7L ^ ((((*g_383) = (((safe_mul_func_uint8_t_u_u(249UL, (p_40 < 0L))) & (safe_mul_func_int8_t_s_s(((p_42 ^ (safe_mod_func_uint64_t_u_u((~(func_64(l_465) && p_38)), 0x03532235339CCF96LL))) != p_42), p_42))) != l_489)) < 0xB4L) != 0x4F56L)), p_40)) & (*g_473)))
    {
        unsigned l_490[9];
        int l_499 = 1L;
        struct S0 **l_502 = &g_68;
        struct S0 **l_504 = &g_68;
        struct S0 ***l_503 = &l_504;
        unsigned short *l_505 = &g_69.f2;
        int i;
        for (i = 0; i < 9; i++)
            l_490[i] = 0x6162286FL;
        (**g_428) = (void*)0;
        if ((l_490[3] || l_490[5]))
        {
            int *l_491[7][4] = {{&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}, {&g_29[1][0][3], &g_26, &g_25[0], &g_26}};
            int i, j;
            g_345 = ((*g_429) = l_491[3][3]);
            (*g_429) = (**g_428);
        }
        else
        {
            (*g_429) = &p_39;
        }
        if ((safe_sub_func_int32_t_s_s(p_40, (safe_mul_func_int16_t_s_s(l_490[3], ((*g_451) > ((*l_505) = (safe_rshift_func_uint8_t_u_s(p_38, ((p_39 = l_499) > (safe_sub_func_uint64_t_u_u((((*l_503) = (l_502 = &g_68)) != (void*)0), p_42))))))))))))
        {
            int *l_509 = &g_194;
            unsigned long long **l_517 = &g_473;
            struct S0 l_528 = {0x43EBFB46L,0x419F96D5L,0x7C13L};
            (*l_465) = (**g_428);
            for (g_155 = 0; (g_155 >= (-27)); g_155 = safe_sub_func_int32_t_s_s(g_155, 4))
            {
                p_39 = g_508;
            }
            if (((*l_509) = (-8L)))
            {
                long long **l_512[1][3][7] = {{{(void*)0, &g_263, &g_263, &g_263, (void*)0, &g_263, &g_263}, {(void*)0, &g_263, &g_263, &g_263, (void*)0, &g_263, &g_263}, {(void*)0, &g_263, &g_263, &g_263, (void*)0, &g_263, &g_263}}};
                short *l_513 = &g_508;
                int *l_516 = &g_29[1][0][2];
                int i, j, k;
                if ((~((safe_rshift_func_uint8_t_u_u((&g_263 != l_512[0][0][5]), (&g_155 != l_513))) >= ((*l_470) = p_40))))
                {
                    return p_42;
                }
                else
                {
                    (*l_509) = (0xA0L != ((*g_383) = ((safe_lshift_func_uint16_t_u_u(g_26, 1)) & 18446744073709551615UL)));
                    if (p_40)
                    {
                        (*l_465) = l_516;
                        (*l_509) = (l_517 == (void*)0);
                    }
                    else
                    {
                        (**g_428) = &l_499;
                        (*l_465) = &p_39;
                        return (*g_451);
                    }
                }
                l_509 = (**g_428);
                for (g_274.f0 = 0; g_274.f0 < 6; g_274.f0 += 1)
                {
                    for (g_148 = 0; g_148 < 7; g_148 += 1)
                    {
                        g_58[g_274.f0][g_148] = 0x8C69418BL;
                    }
                }
            }
            else
            {
                (**g_428) = (*g_429);
                for (g_274.f1 = 25; (g_274.f1 == 43); g_274.f1 = safe_add_func_uint64_t_u_u(g_274.f1, 1))
                {
                    short l_525 = 1L;
                    for (l_489 = 0; (l_489 <= 21); l_489++)
                    {
                        int *l_522 = &l_499;
                        (*g_429) = l_522;
                        (*l_509) = func_64(&l_522);
                    }
                    for (l_499 = 0; (l_499 >= 14); l_499 = safe_add_func_uint16_t_u_u(l_499, 8))
                    {
                        (*g_429) = (*g_429);
                        (*g_429) = &l_499;
                        (**g_428) = (**g_428);
                        (*l_509) = l_525;
                    }
                    if (p_42)
                        continue;
                    (**g_428) = &p_39;
                }
                for (l_499 = (-2); (l_499 >= 7); ++l_499)
                {
                    (*l_465) = (void*)0;
                    (**l_502) = l_528;
                }
            }
            for (g_27 = 0; (g_27 <= 2); g_27 += 1)
            {
                (**l_504) = (*p_41);
            }
        }
        else
        {
            (*l_465) = (**g_428);
        }
        return (*g_451);
    }
    else
    {
        return p_40;
    }
}







static int func_44(int p_45, unsigned p_46, struct S0 * p_47)
{
    struct S0 l_256 = {0xCA137591L,4294967295UL,0UL};
    int **l_257 = &g_28;
    int *l_259 = (void*)0;
    int **l_258 = &l_259;
    unsigned l_291 = 0UL;
    unsigned char l_324[4] = {0UL, 1UL, 0UL, 1UL};
    unsigned short *l_340 = &l_256.f2;
    unsigned char *l_370 = (void*)0;
    char *l_446 = &g_148;
    char **l_445 = &l_446;
    int i;
    (*p_47) = l_256;
    (*l_258) = ((*l_257) = &g_194);
    for (g_26 = 0; (g_26 < (-15)); --g_26)
    {
        long long l_268 = (-1L);
        int *l_277[1];
        long long l_278 = 0x493BBACFC9BDEF1ELL;
        unsigned l_282 = 7UL;
        short *l_313 = &g_155;
        struct S0 l_343 = {18446744073709551610UL,8UL,65535UL};
        unsigned char l_393 = 2UL;
        unsigned char **l_397 = (void*)0;
        int ***l_431[6][10][4] = {{{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}, {{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}, {{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}, {{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}, {{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}, {{&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}, {&l_257, &l_258, &l_258, (void*)0}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_277[i] = &g_2;
        for (p_46 = 0; (p_46 <= 0); p_46 += 1)
        {
            long long ***l_264 = &g_262;
            int *l_272 = &g_25[p_46];
            int i;
            (*l_264) = g_262;
        }
    }
    return (*g_345);
}







static struct S0 * func_49(int * p_50, int ** p_51, long long p_52)
{
    unsigned char l_153[2][5][6] = {{{0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}}, {{0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}, {0x5EL, 0x5EL, 0xDEL, 1UL, 0x11L, 1UL}}};
    int l_156 = 0L;
    struct S0 *l_214 = &g_69;
    int l_227 = 0x8B875960L;
    int i, j, k;
    for (g_26 = 0; (g_26 >= (-18)); --g_26)
    {
        unsigned *l_57 = &g_58[0][2];
        int l_63[5];
        struct S0 l_209 = {7UL,4294967295UL,1UL};
        int **l_210 = &g_28;
        struct S0 l_213[3] = {{0UL,0xBE601683L,0x2C3CL}, {0UL,0xBE601683L,0x2C3CL}, {0UL,0xBE601683L,0x2C3CL}};
        int *l_217[2];
        struct S0 *l_219 = &g_69;
        struct S0 *l_233 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_63[i] = 0L;
        for (i = 0; i < 2; i++)
            l_217[i] = (void*)0;
        if (((safe_mod_func_int8_t_s_s((2UL & (((*l_57) = 0xEED764E3L) ^ ((safe_mod_func_int32_t_s_s(0x1EAE5249L, (safe_lshift_func_int8_t_s_s(l_63[0], 1)))) >= func_64(func_66((*p_50)))))), g_23)) | 18446744073709551608UL))
        {
            unsigned l_150 = 4294967295UL;
            short *l_154[2][8][5] = {{{&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}}, {{&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155}}};
            int l_191 = 1L;
            int i, j, k;
            (*p_51) = &g_27;
            l_156 = ((l_150 > (-1L)) >= (((safe_sub_func_uint8_t_u_u((0xB322L > p_52), ((l_153[1][4][3] <= ((g_58[0][2] > (g_29[0][0][1] && ((g_29[3][0][3] && ((g_155 = l_150) < p_52)) == g_69.f0))) > 0x5A6C5309L)) & p_52))) <= (-1L)) | g_23));
            if (((**p_51) = (*g_28)))
            {
                unsigned l_165[1][2];
                int *l_186 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_165[i][j] = 2UL;
                }
                for (g_148 = 1; (g_148 >= 0); g_148 -= 1)
                {
                    int i;
                    l_63[(g_148 + 2)] = (~((safe_sub_func_uint8_t_u_u(((l_63[(g_148 + 2)] || ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(p_52, 4)), (g_69.f1 & (safe_lshift_func_uint16_t_u_u(l_63[2], l_165[0][1]))))) || 0x56885D1B0BD1E669LL)) > (safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((0UL > l_63[0]), (safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(g_25[0], p_52)))))) < p_52), 0x3623D71A1B547D56LL))), l_63[3])) != g_136));
                    for (p_52 = 0; (p_52 <= 1); p_52 += 1)
                    {
                        struct S0 **l_181[8] = {&g_68, &g_68, &g_68, &g_68, &g_68, &g_68, &g_68, &g_68};
                        int **l_183 = &g_28;
                        int ***l_182 = &l_183;
                        int **l_184 = &g_28;
                        int *l_185 = &l_63[0];
                        int i, j, k;
                    }
                }
                (**p_51) = ((p_52 == (~6L)) <= g_58[0][2]);
                g_28 = (*p_51);
            }
            else
            {
                char *l_190 = &g_148;
                char **l_189 = &l_190;
                unsigned ***l_203 = &g_75[3][0][0];
                int *l_207 = (void*)0;
                int *l_208 = &g_194;
                l_191 = ((*g_28) = ((&p_51 == &p_51) > (safe_mul_func_int16_t_s_s(p_52, (((*l_189) = &g_148) == (void*)0)))));
                if (((safe_sub_func_uint32_t_u_u(g_194, ((void*)0 != (*l_189)))) && 0x0EA31927L))
                {
                    (*g_28) = l_63[4];
                    (*g_28) = ((0x9D19L & (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((*p_50) && (-7L)), l_63[0])), g_194))) & (g_148 | ((safe_lshift_func_int16_t_s_u(l_63[2], 8)) || (safe_mul_func_int16_t_s_s((g_155 = ((void*)0 != l_203)), p_52)))));
                    (*g_28) = (**p_51);
                    (*p_51) = (void*)0;
                }
                else
                {
                    int *l_206 = &g_26;
                    for (g_148 = 0; g_148 < 5; g_148 += 1)
                    {
                        l_63[g_148] = 0xCB501541L;
                    }
                    for (p_52 = 0; (p_52 <= (-3)); p_52 = safe_sub_func_uint16_t_u_u(p_52, 5))
                    {
                        (*l_203) = &g_76;
                        g_28 = &l_63[0];
                        (*p_51) = l_206;
                    }
                }
                (*l_208) = (*p_50);
            }
            (*g_68) = l_209;
        }
        else
        {
            int *l_211 = (void*)0;
            int *l_212 = &l_156;
            (*l_212) = (func_64(l_210) == g_29[4][0][0]);
            (*g_68) = l_213[2];
        }
        if ((~(*p_50)))
        {
            (*p_51) = (*p_51);
            return l_214;
        }
        else
        {
            (*p_51) = (*p_51);
        }
        for (l_156 = 5; (l_156 >= 0); l_156 -= 1)
        {
            int *l_228 = &g_23;
            struct S0 l_255 = {0x1B415AD8L,0x1F371F93L,4UL};
            g_28 = (void*)0;
            for (g_69.f1 = 0; (g_69.f1 <= 4); g_69.f1 += 1)
            {
                struct S0 *l_215 = &g_69;
                int l_218 = 1L;
                int i, j;
                (*l_210) = (void*)0;
                if (g_58[g_69.f1][l_156])
                {
                    struct S0 **l_216 = &l_214;
                    int i;
                    for (l_209.f0 = 0; (l_209.f0 <= 1); l_209.f0 += 1)
                    {
                        int i;
                        l_63[g_69.f1] = l_63[l_209.f0];
                        (*p_51) = (void*)0;
                        if (l_153[1][0][4])
                            continue;
                    }
                    (*l_216) = l_215;
                    if (l_63[g_69.f1])
                        continue;
                }
                else
                {
                    struct S0 l_220[10] = {{1UL,0xC095C51BL,1UL}, {1UL,0xC095C51BL,1UL}, {0UL,4294967295UL,0x5DE6L}, {1UL,0xC095C51BL,1UL}, {1UL,0xC095C51BL,1UL}, {0UL,4294967295UL,0x5DE6L}, {1UL,0xC095C51BL,1UL}, {1UL,0xC095C51BL,1UL}, {0UL,4294967295UL,0x5DE6L}, {1UL,0xC095C51BL,1UL}};
                    int *l_222 = &l_63[0];
                    int i;
                    g_28 = l_217[1];
                    if (l_218)
                        break;
                    (*l_210) = (*l_210);
                    if ((l_63[g_69.f1] = 0x35C321AEL))
                    {
                        (*l_210) = &l_218;
                        return l_219;
                    }
                    else
                    {
                        struct S0 *l_221 = &l_213[0];
                        (*l_210) = (*p_51);
                        if (l_63[g_69.f1])
                            continue;
                        (*l_221) = l_220[1];
                        l_222 = (*l_210);
                    }
                }
            }
        }
    }
    return &g_69;
}







static unsigned char func_64(int ** p_65)
{
    char l_72[2];
    int l_95 = (-1L);
    int *l_107 = &l_95;
    struct S0 **l_125 = &g_68;
    struct S0 *l_126 = &g_69;
    unsigned char l_130 = 255UL;
    long long *l_134 = (void*)0;
    long long *l_135 = &g_136;
    unsigned char l_145 = 0x71L;
    char *l_146 = &l_72[0];
    char *l_147 = &g_148;
    int *l_149 = &g_27;
    int i;
    for (i = 0; i < 2; i++)
        l_72[i] = 0xE9L;
    if (l_72[0])
    {
        int *l_73 = &g_29[1][0][3];
        (*p_65) = l_73;
    }
    else
    {
        int l_74 = 1L;
        unsigned **l_78 = &g_76;
        unsigned char l_79 = 0x76L;
        unsigned **l_85[7][9][4] = {{{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}, {{(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}, {(void*)0, &g_76, &g_76, &g_76}}};
        int *l_98[10][2] = {{&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}, {&g_23, &g_23}};
        int i, j, k;
        if (l_74)
        {
            unsigned ***l_77[6][7][3] = {{{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}, {{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}, {{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}, {{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}, {{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}, {{(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}, {(void*)0, (void*)0, &g_75[3][0][0]}}};
            int l_80 = (-7L);
            short l_111[6][1][9] = {{{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}, {{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}, {{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}, {{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}, {{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}, {{0x6FF3L, (-1L), 0xB806L, (-1L), 0x6FF3L, 0x0568L, (-5L), (-1L), 0x5CA0L}}};
            int i, j, k;
            l_78 = g_75[3][0][0];
            if ((l_72[1] >= ((&g_76 == l_78) > ((((((g_26 <= l_79) ^ 0x7FL) < (l_74 || (l_80 <= ((safe_mod_func_uint32_t_u_u(l_80, l_72[0])) | l_72[0])))) >= l_80) == 0xCBA9C6CDL) > l_79))))
            {
                unsigned l_86[7][8] = {{0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}, {0xD0477059L, 0xC4E31865L, 0xD0477059L, 6UL, 4294967286UL, 0x42263F48L, 0xA067E36FL, 1UL}};
                unsigned ***l_101 = &g_75[3][4][0];
                int i, j;
                for (g_69.f0 = 0; (g_69.f0 > 24); ++g_69.f0)
                {
                    unsigned l_93[6] = {4294967295UL, 4294967287UL, 4294967295UL, 4294967287UL, 4294967295UL, 4294967287UL};
                    int i;
                    if ((g_27 | ((l_78 = &g_76) == (l_85[4][0][2] = &g_76))))
                    {
                        struct S0 l_87[9][8][3] = {{{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}, {{{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}, {{1UL,0xB249F0F1L,0x2DB6L}, {18446744073709551615UL,0x05350A10L,2UL}, {0x43C861C6L,1UL,0xF034L}}}};
                        struct S0 *l_88 = (void*)0;
                        struct S0 *l_89 = (void*)0;
                        struct S0 *l_90 = (void*)0;
                        struct S0 *l_91 = (void*)0;
                        struct S0 *l_92 = &l_87[8][6][0];
                        int i, j, k;
                        if (l_86[6][5])
                            break;
                        (*l_92) = l_87[2][0][2];
                        g_28 = (*p_65);
                        return l_93[5];
                    }
                    else
                    {
                        unsigned long long l_94 = 18446744073709551615UL;
                        int *l_96 = &l_95;
                        int **l_97[6][7] = {{&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}, {&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}, {&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}, {&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}, {&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}, {&l_96, (void*)0, &l_96, (void*)0, &l_96, (void*)0, &l_96}};
                        int i, j;
                        l_95 = l_94;
                        l_74 = ((*l_96) = l_74);
                        l_98[4][0] = ((*p_65) = &l_95);
                        (*l_96) = l_93[2];
                    }
                    if ((!(((safe_lshift_func_uint16_t_u_s(l_80, 7)) >= (~(((~2L) || (l_101 == l_77[4][4][2])) == (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_95, g_29[1][0][3])), 0xA97DL))))) | l_80)))
                    {
                        int *l_106 = (void*)0;
                        (*p_65) = l_106;
                        g_27 = l_93[5];
                        (*p_65) = (*p_65);
                        l_107 = &g_26;
                    }
                    else
                    {
                        (*p_65) = &g_27;
                    }
                    if (((((*l_107) | (-8L)) ^ ((void*)0 != (*l_78))) == (*l_107)))
                    {
                        (*p_65) = (*p_65);
                        if (l_93[5])
                            continue;
                        if (l_80)
                            continue;
                    }
                    else
                    {
                        int l_108 = 8L;
                        l_108 = 0xDAB3D175L;
                    }
                }
                for (l_79 = 0; (l_79 <= 3); l_79 += 1)
                {
                    int l_112 = 0x7F97FFC2L;
                    if (l_80)
                    {
                        g_28 = (void*)0;
                    }
                    else
                    {
                        (*p_65) = (*p_65);
                    }
                    if (((-9L) && (safe_sub_func_int16_t_s_s(l_86[2][0], l_111[5][0][6]))))
                    {
                        if (l_86[6][5])
                            break;
                    }
                    else
                    {
                        l_112 = (*l_107);
                    }
                    for (l_95 = 3; (l_95 >= 0); l_95 -= 1)
                    {
                        unsigned **l_113 = (void*)0;
                        if ((*l_107))
                            break;
                        l_78 = l_113;
                        (*g_68) = (*g_68);
                        (*p_65) = &g_29[2][0][1];
                    }
                }
            }
            else
            {
                (*p_65) = (*p_65);
                for (g_69.f2 = 25; (g_69.f2 == 12); g_69.f2--)
                {
                    unsigned long long l_116 = 0x5244D6E761F95ED2LL;
                    int **l_119 = &l_98[2][0];
                    (*p_65) = &l_80;
                    if (l_116)
                        break;
                    for (l_80 = (-21); (l_80 > (-24)); l_80 = safe_sub_func_uint8_t_u_u(l_80, 7))
                    {
                        (*l_107) = (**p_65);
                    }
                    (*l_119) = (g_28 = &g_23);
                }
                (*p_65) = &l_95;
            }
            (*p_65) = &l_74;
            (*p_65) = &g_29[1][0][3];
        }
        else
        {
            unsigned **l_120 = &g_76;
            unsigned ***l_121 = (void*)0;
            unsigned ***l_122 = &l_120;
            l_98[9][1] = &g_25[0];
            (*l_122) = l_120;
        }
    }
    (*l_149) = (l_95 = (safe_add_func_int64_t_s_s((((*l_125) = &g_69) != l_126), (((!(safe_unary_minus_func_int8_t_s((*l_107)))) && (~(safe_sub_func_int8_t_s_s(l_130, ((safe_unary_minus_func_uint16_t_u((0xDF2FA25CL & (safe_add_func_int64_t_s_s((*l_107), ((*l_135) = (*l_107))))))) | ((safe_add_func_uint16_t_u_u(9UL, (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(((*l_147) = ((*l_146) = (l_145 <= g_27))), (*l_107))) != (*l_107)) || (*l_107)), (*l_107))) <= (*l_107)), (-1L))))) < g_25[0])))))) <= (*l_107)))));
    return g_69.f0;
}







static int ** func_66(int p_67)
{
    struct S0 **l_70 = &g_68;
    int **l_71 = &g_28;
    (*l_70) = g_68;
    return l_71;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_29[i][j][k], "g_29[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_58[i][j], "g_58[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_281[i], "g_281[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_686.f0, "g_686.f0", print_hash_value);
    transparent_crc(g_686.f1, "g_686.f1", print_hash_value);
    transparent_crc(g_686.f2, "g_686.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_701[i], "g_701[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
