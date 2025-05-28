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
   volatile unsigned long long f0;
   unsigned char f1;
   volatile unsigned char f2;
   volatile long long f3;
};

union U1 {
   const unsigned f0;
   volatile char * f1;
   long long f2;
   unsigned char f3;
   char f4;
};


static union U1 g_8 = {18446744073709551611UL};
static int g_13 = 1L;
static int g_57[7][5][3] = {{{7L,(-2L),0x033E270BL},{0x566E66B6L,5L,0x0B2DE47EL},{(-2L),(-4L),(-1L)},{0L,(-5L),1L},{5L,(-6L),(-4L)}},{{(-1L),0x1DCEDE6AL,(-4L)},{(-1L),0x5555D5DFL,1L},{0L,0L,(-1L)},{0L,1L,0x0B2DE47EL},{0x033E270BL,0x2CF9E8BFL,0x033E270BL}},{{(-1L),0x0B53CF54L,(-2L)},{(-1L),(-2L),0x7DF2DDFDL},{0xE84CBF77L,0x0B2DE47EL,0x5555D5DFL},{0xB4028481L,0x6C49A7E1L,0x2CF9E8BFL},{0xE84CBF77L,0L,0x6C49A7E1L}},{{(-1L),0x0B2DE47EL,(-5L)},{(-1L),1L,(-9L)},{(-1L),1L,0L},{(-6L),0L,1L},{0L,(-2L),1L}},{{3L,0L,(-4L)},{0x52AD14CAL,0L,7L},{(-9L),(-2L),0xD0615A03L},{0xE84CBF77L,0L,(-1L)},{1L,1L,0x25036FFEL}},{{1L,1L,0x1DCEDE6AL},{0xD06DE21EL,0x0B2DE47EL,0L},{0x566E66B6L,(-6L),(-2L)},{1L,5L,(-2L)},{0x033E270BL,0x566E66B6L,(-2L)}},{{(-1L),0x2CF9E8BFL,0L},{1L,(-1L),0x1DCEDE6AL},{(-2L),0x033E270BL,0x25036FFEL},{7L,0L,(-1L)},{1L,7L,0xD0615A03L}}};
static int * volatile g_72 = &g_57[4][2][0];
static struct S0 g_73 = {18446744073709551612UL,0xDBL,1UL,0x9D30CD947E9E582DLL};
static struct S0 * volatile g_74 = (void*)0;
static struct S0 g_75 = {0UL,0xE5L,2UL,0x6C42336F7EBA052CLL};
static int ** volatile g_78 = (void*)0;
static int ** volatile g_83 = (void*)0;
static int ** volatile g_84 = (void*)0;
static int *g_86[6][6] = {{&g_57[5][4][2],&g_57[1][3][1],&g_13,(void*)0,&g_57[6][4][1],&g_57[1][3][1]},{(void*)0,(void*)0,&g_57[0][3][0],&g_57[0][3][0],(void*)0,(void*)0},{&g_57[0][3][0],(void*)0,(void*)0,&g_13,&g_57[6][4][1],&g_13},{&g_13,&g_57[1][3][1],&g_57[5][4][2],&g_57[1][3][1],&g_13,(void*)0},{&g_13,&g_57[0][3][0],&g_57[1][3][1],&g_13,&g_57[1][3][1],&g_57[1][3][1]},{&g_57[0][3][0],&g_57[6][4][1],&g_57[6][4][1],&g_57[0][3][0],&g_57[5][4][2],&g_57[1][3][1]}};
static int ** volatile g_85[10] = {&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5],&g_86[4][5]};
static int ** volatile g_87 = &g_86[5][0];
static struct S0 g_90 = {1UL,7UL,8UL,0L};
static volatile char g_102 = 0x4EL;
static volatile char * volatile g_101[3][2] = {{&g_102,&g_102},{&g_102,&g_102},{&g_102,&g_102}};
static struct S0 g_132 = {18446744073709551615UL,0xE5L,6UL,0x72E7DE2CA422C177LL};
static struct S0 *g_139[5] = {&g_132,&g_132,&g_132,&g_132,&g_132};
static struct S0 **g_138[8] = {&g_139[0],&g_139[3],&g_139[0],&g_139[0],&g_139[3],&g_139[0],&g_139[0],&g_139[3]};
static int g_158 = 0xEE56F2A0L;
static volatile struct S0 g_183 = {0UL,1UL,0x48L,-1L};
static volatile struct S0 g_184[8] = {{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL},{0x56CBF89ECF18C14CLL,0x56L,0x5AL,0x6F4D311D99948144LL}};
static union U1 ** volatile g_186 = (void*)0;
static struct S0 g_198 = {18446744073709551615UL,250UL,0xEEL,-9L};
static struct S0 * volatile g_199 = &g_90;
static int ** volatile g_202 = &g_86[4][5];
static int ** volatile g_238 = &g_86[4][5];
static const struct S0 *g_239 = &g_73;
static int ** volatile g_240 = &g_86[2][2];
static int ** volatile g_258 = &g_86[4][5];
static char *g_263[3] = {&g_8.f4,&g_8.f4,&g_8.f4};
static const int *g_265 = &g_57[1][3][1];
static int * volatile g_267 = (void*)0;
static int * volatile g_268 = &g_57[1][0][1];
static int * volatile g_312 = &g_158;
static struct S0 g_313 = {0x48DE3217AAFA67C6LL,254UL,0xD7L,0x0D0380F5ECD5AB35LL};
static struct S0 g_314[1][7][10] = {{{{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{1UL,255UL,0UL,1L},{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL},{0UL,0xA4L,0x49L,1L},{18446744073709551615UL,253UL,0UL,8L},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{18446744073709551615UL,253UL,0UL,8L},{0UL,0xA4L,0x49L,1L},{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL}},{{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL},{0x1752853B988DA247LL,2UL,0x3AL,0x8E2AD8C169C809A6LL},{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL},{18446744073709551615UL,253UL,0UL,8L},{6UL,0x32L,246UL,0L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{6UL,0x32L,246UL,0L}},{{1UL,255UL,0UL,1L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{1UL,255UL,0UL,1L},{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL},{0UL,0xA4L,0x49L,1L},{18446744073709551615UL,253UL,0UL,8L},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{18446744073709551615UL,253UL,0UL,8L},{0UL,0xA4L,0x49L,1L}},{{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{1UL,0x16L,0UL,0x7E433B8448DE1C55LL},{18446744073709551609UL,0x85L,0xB2L,0x4697E7A68C119686LL},{1UL,0x16L,0UL,0x7E433B8448DE1C55LL},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{1UL,0x4BL,0xAEL,0x0D62FD04E3DF74E8LL},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{18446744073709551615UL,253UL,0UL,8L},{18446744073709551615UL,253UL,0UL,8L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L}},{{0xC5459F6F8027C97BLL,248UL,5UL,0L},{1UL,0x4BL,0xAEL,0x0D62FD04E3DF74E8LL},{1UL,255UL,0UL,1L},{1UL,255UL,0UL,1L},{1UL,0x4BL,0xAEL,0x0D62FD04E3DF74E8LL},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{6UL,0x32L,246UL,0L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{0x51D76652550F3DB0LL,0UL,0xBFL,0L}},{{1UL,0x16L,0UL,0x7E433B8448DE1C55LL},{1UL,255UL,0UL,1L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{18446744073709551615UL,253UL,0UL,8L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{1UL,255UL,0UL,1L},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{1UL,0x16L,0UL,0x7E433B8448DE1C55LL},{0x1752853B988DA247LL,2UL,0x3AL,0x8E2AD8C169C809A6LL},{0x1752853B988DA247LL,2UL,0x3AL,0x8E2AD8C169C809A6LL}},{{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{0x1752853B988DA247LL,2UL,0x3AL,0x8E2AD8C169C809A6LL},{0UL,0xA4L,0x49L,1L},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{0x870D0B17583D3E0ELL,0xD6L,0UL,0xCF40633B5AC01637LL},{0UL,0xA4L,0x49L,1L},{0x1752853B988DA247LL,2UL,0x3AL,0x8E2AD8C169C809A6LL},{0x51D76652550F3DB0LL,0UL,0xBFL,0L},{0xC5459F6F8027C97BLL,248UL,5UL,0L},{1UL,0x16L,0UL,0x7E433B8448DE1C55LL}}}};
static volatile int g_322 = 0x27800E5EL;
static volatile int *g_321 = &g_322;
static volatile int **g_320 = &g_321;
static volatile int ** const *g_319[5] = {&g_320,&g_320,&g_320,&g_320,&g_320};
static const union U1 *g_361 = &g_8;
static const union U1 ** volatile g_360 = &g_361;
static int g_366 = 1L;
static struct S0 g_367 = {0xE3E4D3184476DE8DLL,255UL,4UL,-5L};



static int func_1(void);
static union U1 * func_2(union U1 p_3);
static int func_14(char * p_15, unsigned char p_16, char * p_17, unsigned char p_18);
static char * func_20(int * p_21);
static int * func_22(short p_23, char * p_24, char p_25);
static char * func_27(char p_28, char * p_29, long long p_30, union U1 p_31);
static union U1 func_32(union U1 p_33, char * p_34, unsigned long long p_35);
static union U1 func_36(int p_37);
static short func_47(unsigned char p_48, unsigned p_49, unsigned char p_50, long long p_51);
static struct S0 func_60(unsigned short p_61, union U1 * p_62);
static int func_1(void)
{
    union U1 l_4 = {0x8748AFA2L};
    union U1 *l_370 = (void*)0;
    union U1 **l_369[1];
    int i;
    for (i = 0; i < 1; i++)
        l_369[i] = &l_370;
    (*g_360) = func_2(l_4);
    return l_4.f0;
}







static union U1 * func_2(union U1 p_3)
{
    union U1 *l_7 = &g_8;
    int l_11 = 0x9F8D19C9L;
    int *l_12 = &g_13;
    char *l_19 = &g_8.f4;
    unsigned short l_26 = 0UL;
    struct S0 *l_368 = &g_73;
    (*l_12) &= (safe_div_func_int32_t_s_s((l_7 == (void*)0), (safe_sub_func_uint16_t_u_u(l_11, 0x4A9BL))));
    g_366 &= func_14(l_19, p_3.f4, func_20(func_22(l_26, func_27(g_13, l_19, g_8.f4, func_32(func_36(g_8.f3), l_19, p_3.f4)), (*l_12))), g_13);
    (*l_368) = g_367;
    (*l_368) = (*l_368);
    return &g_8;
}







static int func_14(char * p_15, unsigned char p_16, char * p_17, unsigned char p_18)
{
    char l_365 = 0xC2L;
    return l_365;
}







static char * func_20(int * p_21)
{
    const union U1 * const l_359 = &g_8;
    int l_362[2];
    unsigned short l_363 = 0x6071L;
    char *l_364 = &g_8.f4;
    int i;
    for (i = 0; i < 2; i++)
        l_362[i] = 1L;
    (*g_360) = l_359;
    (*g_321) = func_47(l_362[0], func_47(l_362[0], l_362[1], l_362[1], (l_362[0] || g_322)), l_363, l_362[0]);
    return l_364;
}







static int * func_22(short p_23, char * p_24, char p_25)
{
    const int *l_264 = &g_158;
    struct S0 *l_266 = &g_90;
    int **l_281 = &g_86[4][0];
    int ***l_280 = &l_281;
    unsigned char l_283[7][8] = {{0x80L,246UL,0UL,0xDBL,0xDBL,0UL,246UL,0x80L},{246UL,0xDBL,0x78L,0UL,0xDBL,0UL,0x78L,0xDBL},{0x80L,0x78L,246UL,0x80L,0UL,0UL,0x80L,246UL},{0xDBL,0xDBL,0UL,246UL,0x80L,0UL,0x80L,246UL},{246UL,246UL,246UL,0UL,246UL,0x78L,0x78L,246UL},{246UL,0x78L,0x78L,246UL,0UL,246UL,246UL,246UL},{246UL,0x80L,0UL,0x80L,246UL,0UL,0xDBL,0xDBL}};
    unsigned l_305[7] = {2UL,0x89BF68E0L,2UL,2UL,0x89BF68E0L,2UL,2UL};
    unsigned short l_330 = 0xB9AFL;
    char **l_333[5] = {&g_263[1],&g_263[1],&g_263[1],&g_263[1],&g_263[1]};
    int i, j;
    g_265 = l_264;
    g_265 = l_264;
    (*g_268) &= (l_266 == l_266);
    for (g_198.f1 = (-10); (g_198.f1 <= 51); ++g_198.f1)
    {
        char l_277 = 0x6BL;
        int l_287 = 0xCAE83776L;
        for (g_75.f1 = 15; (g_75.f1 != 3); g_75.f1 = safe_sub_func_uint8_t_u_u(g_75.f1, 7))
        {
            int *l_282[5][6] = {{&g_158,&g_158,&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158,&g_158,&g_158}};
            int i, j;
            l_283[6][4] = (safe_rshift_func_int8_t_s_u(((0UL | (safe_mod_func_int32_t_s_s(p_25, l_277))) && (g_186 != (void*)0)), (p_25 & ((safe_rshift_func_uint8_t_u_s(((void*)0 == l_280), 6)) ^ p_23))));
        }
    }
    return (**l_280);
}







static char * func_27(char p_28, char * p_29, long long p_30, union U1 p_31)
{
    unsigned l_261 = 1UL;
    int l_262[2];
    int i;
    for (i = 0; i < 2; i++)
        l_262[i] = 0x46DCAA26L;
    l_262[0] = l_261;
    return g_263[1];
}







static union U1 func_32(union U1 p_33, char * p_34, unsigned long long p_35)
{
    int *l_244[1];
    union U1 l_260 = {0x69E9B9EEL};
    int i;
    for (i = 0; i < 1; i++)
        l_244[i] = &g_57[1][3][1];
    for (g_73.f1 = (-4); (g_73.f1 < 52); ++g_73.f1)
    {
        int **l_245[3][5][2] = {{{(void*)0,&g_86[5][1]},{&g_86[5][1],(void*)0},{&g_86[5][1],&g_86[5][1]},{(void*)0,&g_86[5][1]},{&g_86[5][1],(void*)0}},{{&g_86[5][1],&g_86[5][1]},{(void*)0,&g_86[5][1]},{&g_86[5][1],(void*)0},{&g_86[5][1],&g_86[5][1]},{(void*)0,&g_86[5][1]}},{{&g_86[5][1],(void*)0},{&g_86[5][1],&g_86[5][1]},{(void*)0,&g_86[5][1]},{&g_86[5][1],(void*)0},{&g_86[5][1],&g_86[5][1]}}};
        int i, j, k;
        l_244[0] = l_244[0];
        l_244[0] = l_244[0];
        if ((*g_72))
        {
            return g_8;
        }
        else
        {
            return g_8;
        }
    }
    for (p_35 = 0; (p_35 < 16); ++p_35)
    {
        int l_248 = 0L;
        l_248 = p_33.f0;
        if (p_33.f0)
            break;
        (*g_72) |= p_33.f0;
    }
    if ((safe_add_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((p_33.f3 < (safe_div_func_int8_t_s_s((1UL == (0x11L < func_47(p_33.f3, p_35, (+g_198.f2), p_35))), g_198.f1))) == g_8.f4), g_8.f4)) | p_33.f4), g_198.f1)))
    {
        int l_257 = 0x8F511497L;
        l_257 = (safe_add_func_int8_t_s_s(1L, p_33.f0));
    }
    else
    {
        unsigned l_259 = 1UL;
        (*g_258) = l_244[0];
        l_259 = p_33.f4;
    }
    return l_260;
}







static union U1 func_36(int p_37)
{
    char l_46 = (-9L);
    int *l_156 = (void*)0;
    int *l_157 = &g_158;
    const struct S0 *l_162 = &g_132;
    const struct S0 **l_161 = &l_162;
    int l_168 = 0x95E2246EL;
    union U1 *l_181[8][8][3] = {{{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,(void*)0},{&g_8,&g_8,&g_8},{&g_8,(void*)0,(void*)0},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,&g_8,(void*)0},{&g_8,&g_8,&g_8},{&g_8,(void*)0,(void*)0},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}},{{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,(void*)0,&g_8}}};
    long long l_224 = 0xBC4476C7899EEED9LL;
    int i, j, k;
    (*l_157) |= (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_46, func_47((&g_8 == (void*)0), g_8.f4, l_46, (l_46 <= (-10L))))), (safe_sub_func_int32_t_s_s(0x71DCDCBBL, 0x0A5B6558L)))) < (-1L)), g_13)), g_8.f0));
    if ((safe_lshift_func_int16_t_s_u(((((void*)0 == l_161) ^ (((((safe_div_func_uint16_t_u_u(p_37, g_90.f1)) <= 0L) == p_37) != p_37) == ((&g_139[0] == &l_162) == p_37))) & 1L), (*l_157))))
    {
        char l_167 = 0x8EL;
        char l_171 = (-1L);
        int l_172 = (-2L);
        l_172 &= (safe_mul_func_int8_t_s_s((((0x8D10L || l_167) < l_168) | (*l_157)), (safe_add_func_int64_t_s_s((func_47((p_37 == (l_171 < l_167)), (*l_157), g_102, (*l_157)) >= 1UL), p_37))));
    }
    else
    {
        unsigned l_200 = 18446744073709551614UL;
        int *l_201 = &g_57[1][3][1];
        union U1 **l_205 = (void*)0;
        struct S0 * const l_214 = &g_198;
        unsigned long long l_226 = 18446744073709551615UL;
        unsigned long long l_227[2];
        union U1 *l_237 = &g_8;
        int i;
        for (i = 0; i < 2; i++)
            l_227[i] = 0xD6F6EEB393109E43LL;
        if ((*l_157))
        {
            union U1 l_173 = {0xBAF8B371L};
            (*l_157) &= p_37;
            for (g_75.f1 = 2; (g_75.f1 <= 7); g_75.f1 += 1)
            {
                return l_173;
            }
            return g_8;
        }
        else
        {
            union U1 *l_180 = &g_8;
            int l_195 = (-1L);
            int l_197 = 0x02B18033L;
            for (g_132.f1 = 0; (g_132.f1 > 60); g_132.f1 = safe_add_func_int32_t_s_s(g_132.f1, 7))
            {
                union U1 *l_185 = &g_8;
            }
            (*g_202) = l_201;
        }
        if (((p_37 & func_47(p_37, (safe_mod_func_int64_t_s_s((p_37 | (g_183.f3 == p_37)), g_75.f1)), p_37, ((void*)0 == l_205))) & 0xC01900FF0B0C09B6LL))
        {
            unsigned l_219 = 0x5B907267L;
            const union U1 *l_223 = &g_8;
            const union U1 **l_222 = &l_223;
            for (g_73.f1 = 0; (g_73.f1 > 48); g_73.f1 = safe_add_func_uint16_t_u_u(g_73.f1, 1))
            {
                unsigned long long l_225 = 0x0A02288577587681LL;
                const int *l_232 = &g_57[1][2][0];
                const int **l_231[8][6] = {{(void*)0,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,(void*)0,(void*)0},{&l_232,&l_232,&l_232,&l_232,(void*)0,&l_232},{(void*)0,&l_232,&l_232,&l_232,&l_232,(void*)0},{(void*)0,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,(void*)0,(void*)0},{&l_232,&l_232,&l_232,&l_232,(void*)0,&l_232},{(void*)0,&l_232,&l_232,&l_232,&l_232,(void*)0}};
                const int ***l_230[9][7][4] = {{{&l_231[0][4],&l_231[0][4],&l_231[0][4],&l_231[0][4]},{&l_231[0][4],&l_231[1][1],(void*)0,&l_231[0][4]},{(void*)0,&l_231[0][2],(void*)0,(void*)0},{&l_231[7][4],(void*)0,&l_231[0][4],&l_231[0][2]},{&l_231[0][4],(void*)0,&l_231[2][5],(void*)0},{(void*)0,&l_231[0][4],&l_231[0][4],&l_231[1][1]},{&l_231[0][4],(void*)0,&l_231[7][4],&l_231[2][5]}},{{&l_231[0][4],(void*)0,&l_231[0][4],&l_231[0][4]},{&l_231[0][4],&l_231[0][2],&l_231[7][4],&l_231[0][4]},{&l_231[0][4],&l_231[0][4],&l_231[0][4],&l_231[7][3]},{(void*)0,(void*)0,&l_231[2][5],&l_231[0][4]},{&l_231[0][4],(void*)0,&l_231[0][4],&l_231[0][4]},{&l_231[7][4],&l_231[1][1],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_231[0][4],&l_231[0][0],&l_231[0][4],&l_231[1][1]},{&l_231[0][4],(void*)0,&l_231[2][5],&l_231[0][4]},{(void*)0,(void*)0,(void*)0,&l_231[1][1]},{(void*)0,&l_231[0][0],&l_231[7][4],(void*)0},{(void*)0,(void*)0,&l_231[0][2],(void*)0},{&l_231[0][4],&l_231[1][1],&l_231[0][2],&l_231[0][4]},{(void*)0,(void*)0,&l_231[0][4],&l_231[0][4]}},{{&l_231[2][5],(void*)0,&l_231[2][5],&l_231[7][3]},{&l_231[0][4],&l_231[0][4],&l_231[0][4],&l_231[0][4]},{&l_231[0][4],&l_231[7][3],&l_231[0][4],(void*)0},{&l_231[2][3],(void*)0,&l_231[0][4],&l_231[0][2]},{&l_231[0][4],(void*)0,&l_231[0][4],&l_231[0][4]},{&l_231[1][1],&l_231[0][0],&l_231[0][2],(void*)0},{&l_231[0][2],(void*)0,&l_231[0][2],&l_231[7][3]}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_231[2][3],&l_231[2][3],(void*)0},{&l_231[0][4],&l_231[0][4],(void*)0,&l_231[7][4]},{(void*)0,(void*)0,&l_231[0][4],&l_231[0][4]},{(void*)0,&l_231[0][4],&l_231[0][2],&l_231[0][4]},{&l_231[0][2],(void*)0,&l_231[0][0],&l_231[7][4]},{&l_231[0][4],&l_231[0][4],&l_231[0][4],(void*)0}},{{(void*)0,&l_231[2][3],&l_231[0][4],(void*)0},{(void*)0,(void*)0,&l_231[0][0],&l_231[7][3]},{&l_231[1][1],(void*)0,&l_231[0][4],(void*)0},{(void*)0,&l_231[0][0],&l_231[0][2],&l_231[0][4]},{&l_231[0][0],(void*)0,(void*)0,&l_231[0][2]},{(void*)0,(void*)0,&l_231[6][5],(void*)0},{(void*)0,&l_231[7][3],(void*)0,&l_231[0][4]}},{{&l_231[0][0],(void*)0,&l_231[0][2],&l_231[0][4]},{(void*)0,&l_231[0][4],&l_231[0][4],&l_231[0][4]},{&l_231[1][1],&l_231[0][4],&l_231[0][0],&l_231[0][4]},{(void*)0,&l_231[0][4],&l_231[0][4],&l_231[0][4]},{(void*)0,&l_231[7][3],(void*)0,&l_231[0][2]},{&l_231[2][5],(void*)0,&l_231[6][5],(void*)0},{&l_231[0][2],&l_231[2][3],&l_231[0][4],&l_231[6][5]}},{{&l_231[0][2],&l_231[2][3],&l_231[0][4],(void*)0},{&l_231[2][3],(void*)0,&l_231[2][5],&l_231[0][2]},{&l_231[0][4],&l_231[7][3],(void*)0,&l_231[0][4]},{&l_231[0][2],(void*)0,(void*)0,&l_231[0][0]},{&l_231[2][3],&l_231[0][4],&l_231[0][2],&l_231[0][4]},{&l_231[0][4],&l_231[0][4],&l_231[0][4],&l_231[0][4]},{&l_231[7][4],&l_231[0][2],(void*)0,&l_231[0][0]}},{{&l_231[2][5],(void*)0,&l_231[0][4],&l_231[0][2]},{(void*)0,&l_231[7][3],&l_231[0][4],&l_231[0][4]},{&l_231[2][5],&l_231[0][4],(void*)0,(void*)0},{&l_231[7][4],&l_231[6][5],&l_231[0][4],&l_231[2][3]},{&l_231[0][4],&l_231[2][3],&l_231[0][2],(void*)0},{&l_231[2][3],&l_231[0][4],(void*)0,&l_231[0][2]},{&l_231[0][2],(void*)0,(void*)0,&l_231[0][2]}}};
                int i, j, k;
                (*l_201) = (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(1L, ((*l_201) != ((void*)0 == l_214)))), p_37)) || (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((l_219 || (((safe_add_func_int16_t_s_s((&l_181[6][6][1] == l_222), g_75.f2)) | l_224) || l_225)), p_37)), l_226))), 0x7A3D568AL)) <= p_37) >= l_227[1]);
                (*l_201) &= (safe_mod_func_int64_t_s_s(((((void*)0 != l_230[4][4][0]) | g_184[5].f0) ^ (p_37 > p_37)), (safe_lshift_func_int16_t_s_u((g_8.f4 != ((l_219 ^ (p_37 < (safe_mul_func_int8_t_s_s(0xC2L, g_8.f4)))) > p_37)), p_37))));
            }
            (*l_214) = func_60((*l_157), l_237);
            for (g_75.f1 = 0; (g_75.f1 <= 1); g_75.f1 += 1)
            {
                return g_8;
            }
        }
        else
        {
            (*l_157) ^= p_37;
            (*g_238) = l_201;
            return g_8;
        }
    }
    for (g_90.f1 = 2; (g_90.f1 <= 9); g_90.f1 += 1)
    {
        union U1 l_241 = {0x5D59E726L};
        int i;
        g_239 = (*l_161);
        (*g_240) = l_156;
        return l_241;
    }
    return g_8;
}







static short func_47(unsigned char p_48, unsigned p_49, unsigned char p_50, long long p_51)
{
    unsigned char l_55 = 0UL;
    char * const l_133 = &g_8.f4;
    int *l_151 = &g_13;
    int *l_152 = &g_57[1][3][1];
    for (p_49 = 24; (p_49 < 26); p_49 = safe_add_func_int8_t_s_s(p_49, 5))
    {
        const char l_54[6] = {(-1L),0x8FL,(-1L),(-1L),0x8FL,(-1L)};
        int *l_82 = &g_57[4][3][2];
        int *l_153 = &g_57[1][3][1];
        int i;
        if (l_54[4])
        {
            int *l_56 = &g_57[1][3][1];
            union U1 *l_64 = (void*)0;
            (*l_56) ^= l_55;
            (*l_56) |= l_54[4];
            for (p_50 = 0; (p_50 <= 42); p_50++)
            {
                g_75 = func_60((((*l_56) > l_54[2]) > (safe_unary_minus_func_int8_t_s(0L))), l_64);
                for (p_51 = 0; (p_51 != 1); p_51++)
                {
                    int **l_79 = &l_56;
                    (*l_79) = l_56;
                }
                for (p_51 = (-6); (p_51 < 0); p_51 = safe_add_func_uint32_t_u_u(p_51, 2))
                {
                    (*g_87) = l_82;
                }
                for (p_48 = 0; (p_48 == 22); p_48 = safe_add_func_uint8_t_u_u(p_48, 9))
                {
                    return p_48;
                }
            }
            g_90 = func_60(g_75.f0, &g_8);
        }
        else
        {
            long long l_103 = 0L;
            int **l_125[7][8][4] = {{{(void*)0,&g_86[4][5],&g_86[4][5],(void*)0},{&g_86[4][5],(void*)0,&g_86[1][5],&l_82},{&g_86[4][5],&g_86[1][5],&g_86[4][5],&l_82},{(void*)0,&l_82,&l_82,&l_82},{&g_86[1][5],&g_86[1][5],&g_86[4][5],&l_82},{&l_82,(void*)0,&l_82,&g_86[4][5]},{&g_86[4][5],(void*)0,&l_82,&l_82},{&g_86[4][5],(void*)0,(void*)0,&g_86[4][5]}},{{(void*)0,&g_86[4][5],&g_86[4][5],&g_86[4][5]},{(void*)0,&g_86[4][5],(void*)0,&l_82},{&g_86[4][5],&g_86[4][5],&l_82,&l_82},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],(void*)0,&l_82,&l_82},{&g_86[4][5],(void*)0,(void*)0,&g_86[4][5]},{(void*)0,&g_86[4][5],&g_86[4][5],&g_86[4][5]}},{{(void*)0,&g_86[4][5],(void*)0,&l_82},{&g_86[4][5],&g_86[4][5],&l_82,&l_82},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],(void*)0,&l_82,&l_82},{&g_86[4][5],(void*)0,(void*)0,&g_86[4][5]},{(void*)0,&g_86[4][5],&g_86[4][5],&g_86[4][5]},{(void*)0,&g_86[4][5],(void*)0,&l_82}},{{&g_86[4][5],&g_86[4][5],&l_82,&l_82},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],(void*)0,&l_82,&l_82},{&g_86[4][5],(void*)0,(void*)0,&g_86[4][5]},{(void*)0,&g_86[4][5],&g_86[4][5],&l_82},{&l_82,&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[4][5]}},{{&g_86[4][5],&g_86[4][5],&g_86[1][5],&l_82},{&l_82,&g_86[4][5],&g_86[1][5],&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[1][5]},{&g_86[4][5],&l_82,&l_82,&g_86[4][5]},{&l_82,&g_86[4][5],&g_86[4][5],&l_82},{&l_82,&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[4][5]},{&g_86[4][5],&g_86[4][5],&g_86[1][5],&l_82}},{{&l_82,&g_86[4][5],&g_86[1][5],&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[1][5]},{&g_86[4][5],&l_82,&l_82,&g_86[4][5]},{&l_82,&g_86[4][5],&g_86[4][5],&l_82},{&l_82,&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[4][5]},{&g_86[4][5],&g_86[4][5],&g_86[1][5],&l_82},{&l_82,&g_86[4][5],&g_86[1][5],&g_86[4][5]}},{{&g_86[4][5],&l_82,&g_86[4][5],&g_86[1][5]},{&g_86[4][5],&l_82,&l_82,&g_86[4][5]},{&l_82,&g_86[4][5],&g_86[4][5],&l_82},{&l_82,&g_86[4][5],&l_82,&g_86[4][5]},{&g_86[4][5],&l_82,&g_86[4][5],&g_86[4][5]},{&g_86[4][5],&g_86[1][5],&g_86[4][5],&l_82},{&l_82,(void*)0,&g_86[4][5],(void*)0},{&g_86[1][5],&g_86[4][5],&l_82,&g_86[4][5]}}};
            char *l_126[9] = {&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4,&g_8.f4};
            union U1 *l_131 = (void*)0;
            struct S0 *l_137[5][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
            struct S0 **l_136 = &l_137[2][0][1];
            int i, j, k;
            if ((g_90.f1 != ((p_49 == (0x2D86EA79F159E9DCLL == (-2L))) != (safe_add_func_uint8_t_u_u(p_50, p_50)))))
            {
                for (p_48 = 0; (p_48 > 25); p_48++)
                {
                    return l_55;
                }
            }
            else
            {
                char l_108 = (-1L);
                int l_117 = 6L;
                short l_122 = 0xD0B7L;
                for (g_75.f1 = 0; (g_75.f1 <= 5); g_75.f1 += 1)
                {
                    int i, j;
                    (*l_82) ^= ((safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((void*)0 != &g_86[g_75.f1][g_75.f1]), (~(g_73.f1 | ((void*)0 == g_101[0][1]))))), (!0xA5L))) && 0xC9E8L);
                    for (g_73.f1 = 0; (g_73.f1 <= 9); g_73.f1 += 1)
                    {
                        int i, j;
                        (*l_82) = p_50;
                        (*l_82) = l_103;
                        l_117 &= (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_108, (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_50, (safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(0xD7C5L, p_48)), g_73.f3)))), 0x86A5L)))), 0x39L));
                        (*l_82) = (((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_122, ((safe_add_func_int8_t_s_s((l_125[4][6][3] == (void*)0), g_90.f3)) < 0x4FD69A81L))), p_51)) == ((l_126[7] != &l_108) || (g_90.f1 || l_55))) <= g_8.f4);
                    }
                    if ((g_8.f0 | g_13))
                    {
                        int ** const l_129[1][7] = {{&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1],&g_86[g_75.f1][g_75.f1]}};
                        int **l_130 = &g_86[4][3];
                        int i, j;
                        if ((*g_72))
                            break;
                        if (p_48)
                            break;
                        g_132 = func_60((safe_rshift_func_uint16_t_u_s((l_129[0][6] == l_130), 0)), l_131);
                    }
                    else
                    {
                        return g_73.f1;
                    }
                }
                if (((void*)0 != l_133))
                {
                    for (g_75.f1 = 18; (g_75.f1 == 47); ++g_75.f1)
                    {
                        if (p_48)
                            break;
                        (*g_72) = (g_8.f3 || 0xF3F9L);
                        if (p_49)
                            break;
                    }
                }
                else
                {
                    unsigned char l_146 = 0xB4L;
                    int *l_149[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_149[i] = &g_13;
                    g_138[1] = l_136;
                    (*l_82) &= (safe_sub_func_uint32_t_u_u(p_50, (((-1L) || (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((p_48 | 0xABCE8417L) > p_51), 6)), p_51))) < ((((0x29L || (((p_49 | p_50) <= g_73.f2) > 0x185DEA65F88FA862LL)) | (-8L)) | l_117) && l_146))));
                    (*l_82) |= 0xC6F3577BL;
                    for (l_108 = 0; (l_108 >= (-28)); l_108 = safe_sub_func_uint8_t_u_u(l_108, 2))
                    {
                        int *l_150[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_150[i] = (void*)0;
                        l_82 = l_149[2];
                        l_150[2] = l_150[1];
                        if ((*g_72))
                            break;
                    }
                }
                l_152 = l_151;
            }
        }
        (*l_153) &= p_50;
    }
    return g_73.f3;
}







static struct S0 func_60(unsigned short p_61, union U1 * p_62)
{
    int *l_65 = (void*)0;
    int **l_66 = &l_65;
    (*l_66) = l_65;
    for (p_61 = 11; (p_61 < 13); p_61 = safe_add_func_uint16_t_u_u(p_61, 7))
    {
        const unsigned l_71[9][5] = {{7UL,3UL,0x06680214L,0xA9E5FAF1L,0xA9E5FAF1L},{0UL,0x632CBEB0L,0UL,0x67586E02L,0UL},{0x06680214L,3UL,7UL,0x859B3460L,0xE11E5463L},{0x1BF33464L,0x5426BEC1L,0x5426BEC1L,0x1BF33464L,0UL},{0xB7F04272L,1UL,7UL,0xE11E5463L,3UL},{0x8019D44EL,0x202D95C7L,0UL,0x202D95C7L,0x8019D44EL},{1UL,0x859B3460L,0x06680214L,0xE11E5463L,0x98B9DB5DL},{18446744073709551615UL,0xCDCE3FF5L,0x1BF33464L,0x1BF33464L,0xCDCE3FF5L},{0xA9E5FAF1L,7UL,0xB7F04272L,0x859B3460L,0x98B9DB5DL}};
        int i, j;
        (*g_72) = (safe_sub_func_uint8_t_u_u(254UL, l_71[3][1]));
    }
    return g_73;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_57[i][j][k], "g_57[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_183.f2, "g_183.f2", print_hash_value);
    transparent_crc(g_183.f3, "g_183.f3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_184[i].f0, "g_184[i].f0", print_hash_value);
        transparent_crc(g_184[i].f1, "g_184[i].f1", print_hash_value);
        transparent_crc(g_184[i].f2, "g_184[i].f2", print_hash_value);
        transparent_crc(g_184[i].f3, "g_184[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_198.f3, "g_198.f3", print_hash_value);
    transparent_crc(g_313.f0, "g_313.f0", print_hash_value);
    transparent_crc(g_313.f1, "g_313.f1", print_hash_value);
    transparent_crc(g_313.f2, "g_313.f2", print_hash_value);
    transparent_crc(g_313.f3, "g_313.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_314[i][j][k].f0, "g_314[i][j][k].f0", print_hash_value);
                transparent_crc(g_314[i][j][k].f1, "g_314[i][j][k].f1", print_hash_value);
                transparent_crc(g_314[i][j][k].f2, "g_314[i][j][k].f2", print_hash_value);
                transparent_crc(g_314[i][j][k].f3, "g_314[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_367.f2, "g_367.f2", print_hash_value);
    transparent_crc(g_367.f3, "g_367.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
