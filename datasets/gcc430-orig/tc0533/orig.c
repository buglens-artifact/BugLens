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



static unsigned short g_2 = 6UL;
static long long g_18 = 1L;
static unsigned short g_42 = 65529UL;
static int g_44 = 0L;
static int *g_43 = &g_44;
static int g_61[5][2] = {{0xB31915E3L,0xB31915E3L},{0xB31915E3L,0xB31915E3L},{0xB31915E3L,0xB31915E3L},{0xB31915E3L,0xB31915E3L},{0xB31915E3L,0xB31915E3L}};
static int *g_76[2][3] = {{(void*)0,(void*)0,(void*)0},{&g_61[3][0],&g_61[3][0],&g_61[3][0]}};
static int **g_75[5] = {&g_76[0][2],&g_76[0][2],&g_76[0][2],&g_76[0][2],&g_76[0][2]};
static unsigned g_81 = 0x4863FCCFL;
static unsigned short *g_82 = (void*)0;
static unsigned g_98 = 8UL;
static short g_123[10] = {0L,7L,0L,0L,7L,0L,0L,7L,0L,0L};
static short *g_128 = (void*)0;
static short **g_127 = &g_128;
static char g_136[3][4] = {{0x27L,0x31L,0x27L,0x31L},{0x27L,0x31L,0x27L,0x31L},{0x27L,0x31L,0x27L,0x31L}};
static unsigned long long g_155 = 0xAB6C5F39321C9526LL;
static char g_178[6][1][10] = {{{(-6L),(-8L),(-6L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}},{{(-1L),0x60L,(-1L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}},{{(-1L),0x60L,(-1L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}},{{(-1L),0x60L,(-1L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}},{{(-1L),0x60L,(-1L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}},{{(-1L),0x60L,(-1L),0x93L,0x93L,(-1L),0x60L,(-1L),0x93L,0x93L}}};
static long long *g_179 = &g_18;
static unsigned long long g_209 = 18446744073709551615UL;
static const long long **g_214 = (void*)0;
static unsigned char g_216 = 0x47L;
static unsigned short g_226 = 0UL;
static const int g_235 = (-1L);
static const int *g_234 = &g_235;
static unsigned char g_255 = 248UL;
static int *g_296 = &g_44;
static long long *g_305 = &g_18;
static unsigned long long g_375 = 9UL;
static int ***g_421[9][7][4] = {{{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]}},{{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]}},{{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]}},{{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]}},{{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[4]},{&g_75[4],&g_75[0],(void*)0,&g_75[4]},{(void*)0,&g_75[4],(void*)0,&g_75[0]},{&g_75[4],&g_75[4],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]}},{{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]}},{{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]}},{{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]}},{{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]},{(void*)0,&g_75[0],&g_75[4],&g_75[0]},{(void*)0,&g_75[4],&g_75[4],&g_75[0]},{&g_75[4],&g_75[0],&g_75[4],&g_75[4]}}};
static int **g_439[1][5][6] = {{{(void*)0,&g_296,&g_296,&g_296,(void*)0,&g_43},{(void*)0,&g_296,&g_296,&g_296,(void*)0,&g_43},{(void*)0,&g_296,&g_296,&g_296,(void*)0,&g_43},{(void*)0,&g_296,&g_296,&g_296,(void*)0,&g_43},{(void*)0,&g_296,&g_296,&g_296,(void*)0,&g_43}}};
static int ***g_438[10][9] = {{(void*)0,&g_439[0][4][5],&g_439[0][1][0],&g_439[0][4][5],(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][4][5],&g_439[0][1][0]},{&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3]},{(void*)0,&g_439[0][4][5],&g_439[0][1][0],&g_439[0][4][5],(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][4][5],&g_439[0][1][0]},{&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][5],&g_439[0][0][3]},{(void*)0,&g_439[0][4][5],&g_439[0][1][0],&g_439[0][4][5],(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][0][3],(void*)0},{&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5]},{(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][4][5],(void*)0,&g_439[0][0][3],(void*)0},{&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5]},{(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][0][3],(void*)0,&g_439[0][4][5],(void*)0,&g_439[0][0][3],(void*)0},{&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5],&g_439[0][0][3],&g_439[0][0][3],&g_439[0][0][5]}};
static int g_444 = 0L;
static int * const g_443 = &g_444;
static int * const *g_442 = &g_443;
static char g_546[10][5][3] = {{{0x93L,0xBCL,1L},{(-2L),0xFCL,0L},{(-2L),0xB5L,0L},{0x93L,0x22L,(-1L)},{0L,(-1L),0x54L}},{{0x91L,0x8EL,1L},{(-1L),(-4L),(-1L)},{0xEBL,0x84L,0x52L},{9L,(-1L),0x94L},{0x94L,0x04L,0x04L}},{{0x8EL,0x53L,(-2L)},{0x52L,0x91L,0x22L},{(-3L),5L,0L},{(-1L),2L,0xB5L},{(-1L),5L,1L}},{{0xB2L,0x91L,(-7L)},{0L,0x8EL,0x4FL},{0L,2L,0x22L},{1L,0x53L,0xB5L},{0L,0xBDL,0L}},{{9L,0x0AL,0x8EL},{5L,0x94L,0xC3L},{0x20L,0x93L,0xB5L},{(-1L),0xADL,(-7L)},{0xC3L,9L,0L}},{{(-3L),(-2L),0L},{(-7L),0x52L,(-7L)},{(-9L),1L,0xB5L},{3L,0x6AL,0xC3L},{0xEBL,0xBCL,0x8EL}},{{0x3CL,0x35L,0L},{0x93L,0xD1L,0xB5L},{0x54L,(-5L),0x22L},{0x4FL,0x22L,0x4FL},{1L,1L,(-2L)}},{{0x0AL,0L,(-1L)},{(-1L),0x04L,9L},{0x22L,(-2L),(-9L)},{(-1L),0x20L,0xADL},{0x0AL,1L,0x20L}},{{1L,0L,2L},{0x4FL,(-9L),0xB2L},{0x54L,0L,0x6DL},{0x93L,0xB2L,(-3L)},{0x3CL,0xEBL,0L}},{{0xEBL,1L,1L},{3L,(-7L),0x53L},{(-9L),0x91L,0xE5L},{0x62L,(-5L),0x35L},{(-7L),(-5L),0xBDL}}};
static unsigned *g_556 = &g_98;
static unsigned **g_555 = &g_556;
static unsigned *** const g_554 = &g_555;
static const long long g_557 = 0xCAFE624849E12308LL;
static unsigned char *g_629[1] = {&g_255};
static unsigned char **g_628[1] = {&g_629[0]};
static int g_657[2] = {1L,1L};
static short *g_781 = &g_123[8];
static long long **g_842 = &g_179;
static long long ***g_841 = &g_842;
static long long ****g_840 = &g_841;



static const unsigned char func_1(void);
static unsigned short func_5(unsigned p_6, unsigned char p_7, unsigned p_8);
static unsigned char func_11(int p_12, int p_13, long long p_14, const long long p_15);
static long long func_19(unsigned short p_20, short p_21, const long long * p_22);
static int * func_23(int * p_24, long long * const p_25, long long * p_26, int * p_27);
static int * func_28(unsigned long long p_29, long long * p_30, long long * p_31);
static unsigned char func_34(long long * p_35, unsigned short p_36, unsigned short p_37, int * p_38, long long p_39);
static int * func_47(long long p_48, long long * const p_49, int p_50, unsigned short * p_51, unsigned p_52);
static long long * func_53(unsigned long long p_54, unsigned char p_55, int * p_56, unsigned short p_57);
static unsigned long long func_58(int p_59);
static const unsigned char func_1(void)
{
    unsigned short l_16 = 0x33C2L;
    long long *l_17 = &g_18;
    int *l_1048 = (void*)0;
    int *l_1049 = &g_657[1];
    (*l_1049) = ((((g_2 , (safe_sub_func_uint16_t_u_u(func_5(g_2, g_2, ((18446744073709551611UL == (safe_lshift_func_uint8_t_u_u((((func_11(g_2, g_2, (((*l_17) = l_16) , (g_18 , func_19((((l_17 == (void*)0) != l_16) , l_16), l_16, &g_18))), g_557) <= l_16) >= 0x90L) , l_16), 6))) != (-5L))), l_16))) >= g_546[8][1][1]) , l_16) | l_16);
    return (*l_1049);
}







static unsigned short func_5(unsigned p_6, unsigned char p_7, unsigned p_8)
{
    int *l_683 = &g_44;
    long long * const l_684 = &g_18;
    long long *l_685 = &g_18;
    int **l_686 = (void*)0;
    int **l_687 = &l_683;
    char l_807 = 0x6FL;
    unsigned char l_821 = 0xABL;
    short ***l_892 = &g_127;
    short ****l_891 = &l_892;
    char l_929 = 0x85L;
    unsigned ***l_940[10];
    int * const l_941 = &g_61[0][0];
    char l_1015 = 0L;
    int i;
    for (i = 0; i < 10; i++)
        l_940[i] = &g_555;
    l_683 = func_23(l_683, (p_8 , l_684), l_685, l_683);
    (*l_687) = ((*l_683) , l_683);
    for (g_209 = 2; (g_209 != 47); ++g_209)
    {
        long long **l_705 = &g_305;
        short l_708 = 0x08B0L;
        int l_710 = 0xDA35ABDBL;
        int l_829 = 0x8DDA2779L;
        unsigned long long l_861 = 18446744073709551612UL;
        short * const *l_889 = &g_781;
        short * const **l_888 = &l_889;
        short * const ***l_887 = &l_888;
        int l_913 = 0x3374B378L;
        int **l_916 = &g_76[0][2];
        int *l_918 = &l_829;
        char *l_923[4];
        unsigned short *l_981 = &g_226;
        unsigned short *l_982 = &g_42;
        unsigned short *l_983[9] = {&g_2,(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2};
        int **l_1009 = &l_683;
        unsigned ** const l_1024 = &g_556;
        char l_1036 = 0x04L;
        int i;
        for (i = 0; i < 4; i++)
            l_923[i] = &g_136[2][3];
        for (g_44 = 5; (g_44 >= (-10)); g_44 = safe_sub_func_int16_t_s_s(g_44, 5))
        {
            unsigned char l_700 = 250UL;
            long long **l_704[4][9][1] = {{{&g_179},{(void*)0},{&g_305},{(void*)0},{&g_179},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{&g_179},{(void*)0},{&g_305},{(void*)0},{&g_179},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_179},{(void*)0},{&g_305},{(void*)0},{&g_179},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{&g_179},{(void*)0},{&g_305},{(void*)0},{&g_179},{(void*)0}}};
            long long ***l_703 = &l_704[3][0][0];
            int l_709 = (-9L);
            unsigned long long l_719[7][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
            short *l_782 = &g_123[4];
            int l_828 = 0x13A5C345L;
            int i, j, k;
        }
        for (p_8 = (-29); (p_8 == 30); p_8++)
        {
            unsigned short l_874 = 0x7385L;
            int *l_886[6][3] = {{&l_710,&l_710,&l_710},{&l_829,&l_829,&l_829},{&l_710,&l_710,&l_710},{&l_829,&l_829,&l_829},{&l_710,&l_710,&l_710},{&l_829,&l_829,&l_829}};
            long long *l_906 = &g_18;
            int *l_907[7] = {&g_657[1],&g_657[1],(void*)0,&g_657[1],&g_657[1],(void*)0,&g_657[1]};
            unsigned l_966[8] = {0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L,0x7C6DFBE5L};
            int i, j;
        }
        for (g_2 = 0; (g_2 != 27); g_2++)
        {
            int *l_974 = (void*)0;
            for (g_375 = 0; (g_375 < 60); g_375 = safe_add_func_int64_t_s_s(g_375, 6))
            {
                l_918 = l_974;
                return p_8;
            }
        }
    }
    return (**l_687);
}







static unsigned char func_11(int p_12, int p_13, long long p_14, const long long p_15)
{
    unsigned l_679 = 0UL;
    unsigned l_680 = 0x0C7814A9L;
    long long l_681 = 0x9BD78D6FBD9EF453LL;
    int *l_682 = &g_44;
    (*l_682) = (((l_679 >= 0xE26D85EE7B51253ALL) , func_53(p_15, ((g_255 ^ func_34(&g_18, (l_679 != ((l_680 == 0x3DC3L) != l_681)), p_13, l_682, (*g_305))) , (*l_682)), l_682, p_14)) == (void*)0);
    return (*l_682);
}







static long long func_19(unsigned short p_20, short p_21, const long long * p_22)
{
    const unsigned short l_40 = 0xA2C7L;
    unsigned short *l_41[2];
    unsigned char l_45[1][4][3] = {{{0x0FL,0x0FL,0x0FL},{1UL,1UL,1UL},{0x0FL,0x0FL,0x0FL},{1UL,1UL,1UL}}};
    long long *l_567 = (void*)0;
    int **l_655 = &g_296;
    int *l_656 = &g_657[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_41[i] = &g_42;
    (*l_655) = (g_18 , func_23(((*l_655) = func_28((((!0L) , g_18) , ((safe_add_func_int32_t_s_s(g_2, ((**g_555) = ((func_34(&g_18, (g_42 = ((l_40 , (((1UL > (0UL ^ 0x5B48L)) || g_18) , 0x6A69L)) >= p_21)), l_40, g_43, l_45[0][1][2]) & g_81) , 4294967295UL)))) & (*g_234))), l_567, l_567)), &g_18, l_567, l_656));
    (**l_655) = ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_58(p_21), p_21)), (*l_656))) > (*p_22));
    return (**l_655);
}







static int * func_23(int * p_24, long long * const p_25, long long * p_26, int * p_27)
{
    int l_658 = 0x8AA77CB7L;
    int **l_661 = (void*)0;
    const int **l_667 = (void*)0;
    const int ***l_666 = &l_667;
    char l_670 = 0x77L;
    short *l_671 = &g_123[1];
    char l_672[3][5][9] = {{{(-3L),1L,(-3L),0x6BL,0x68L,1L,0x68L,0x6BL,(-3L)},{7L,7L,0L,(-1L),0x81L,4L,(-1L),(-8L),0x37L},{(-8L),7L,0x16L,0x6BL,(-8L),0x6BL,0x16L,7L,(-8L)},{0x81L,(-1L),0L,0x37L,7L,(-8L),(-1L),4L,4L},{0x68L,7L,(-3L),0x71L,(-3L),7L,0x68L,0x71L,0x68L}},{{0x81L,7L,(-1L),(-1L),0x37L,4L,0L,0L,4L},{(-8L),1L,0xC6L,1L,(-8L),0x71L,0xC6L,0x71L,(-8L)},{7L,(-1L),(-1L),0x37L,4L,0L,0L,4L,0x37L},{(-3L),0x71L,(-3L),7L,0x68L,0x71L,0x68L,7L,(-3L)},{0x37L,7L,(-8L),(-1L),4L,4L,(-1L),(-8L),7L}},{{(-8L),0x6BL,0x16L,7L,(-8L),7L,0x16L,0x6BL,(-8L)},{4L,(-1L),(-8L),0x37L,0x37L,(-8L),(-1L),4L,0x81L},{0x68L,0x6BL,(-3L),1L,(-3L),0x6BL,0x68L,1L,0x68L},{4L,7L,(-1L),(-1L),7L,4L,(-8L),0L,0x81L},{(-8L),0x71L,0xC6L,0x71L,(-8L),1L,0xC6L,1L,(-8L)}}};
    unsigned long long l_673[3];
    int **l_674 = &g_43;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_673[i] = 1UL;
    (*l_674) = func_47(((l_658 , (l_658 , (safe_sub_func_uint8_t_u_u(l_658, (((l_661 = (void*)0) != &p_27) && l_658))))) | ((safe_div_func_uint32_t_u_u(l_658, l_672[2][4][0])) < (-1L))), &g_18, l_673[0], &g_2, l_673[1]);
    return (*l_674);
}







static int * func_28(unsigned long long p_29, long long * p_30, long long * p_31)
{
    int l_568 = (-1L);
    unsigned l_570 = 0xF57B1920L;
    long long **l_611 = &g_179;
    long long ***l_610 = &l_611;
    int l_613 = 1L;
    int *l_654 = (void*)0;
    for (g_375 = 0; (g_375 <= 3); g_375 += 1)
    {
        int *l_569 = &g_44;
        unsigned long long *l_587 = &g_155;
        const short **l_643[1][3];
        const short ***l_642 = &l_643[0][1];
        int l_645 = 0x90B05777L;
        int l_647 = 0x8B825727L;
        int *l_649[2];
        int *l_651[4][9] = {{(void*)0,&l_613,&l_613,(void*)0,&l_647,&g_44,&l_647,(void*)0,&l_613},{&l_647,&l_647,&l_645,&g_44,(void*)0,&g_44,&l_645,&l_647,&l_647},{&l_613,(void*)0,&l_647,&g_44,&l_647,(void*)0,&l_613,&l_613,(void*)0},{&g_44,(void*)0,&l_645,(void*)0,&g_44,&l_645,&l_645,&g_44,(void*)0}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_643[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_649[i] = &l_647;
    }
    (*g_43) = (*g_234);
    l_613 = l_570;
    return l_654;
}







static unsigned char func_34(long long * p_35, unsigned short p_36, unsigned short p_37, int * p_38, long long p_39)
{
    int l_46[8][4][3] = {{{(-1L),4L,(-1L)},{6L,0x63780D77L,(-1L)},{1L,(-1L),(-1L)},{(-1L),6L,0x4944C1A1L}},{{8L,1L,0L},{(-1L),(-1L),0xECB5CB1BL},{1L,8L,8L},{6L,(-1L),6L}},{{(-1L),1L,4L},{0x63780D77L,6L,6L},{4L,(-1L),8L},{0L,0x63780D77L,0xECB5CB1BL}},{{4L,4L,0L},{0x63780D77L,0L,0x4944C1A1L},{(-1L),4L,(-1L)},{6L,0x63780D77L,(-1L)}},{{1L,(-1L),(-1L)},{(-1L),6L,0x4944C1A1L},{8L,1L,0L},{(-1L),(-1L),0xECB5CB1BL}},{{1L,8L,8L},{6L,(-1L),6L},{(-1L),1L,4L},{0x63780D77L,6L,6L}},{{4L,(-1L),8L},{0L,0x63780D77L,0xECB5CB1BL},{4L,4L,0L},{0x63780D77L,0L,0x4944C1A1L}},{{(-1L),4L,(-1L)},{6L,0x63780D77L,(-1L)},{1L,(-1L),(-1L)},{(-1L),6L,0x4944C1A1L}}};
    unsigned *l_389 = &g_98;
    unsigned **l_388 = &l_389;
    int ***l_420 = &g_75[4];
    unsigned long long l_481 = 0xB96FF82A614C43F2LL;
    unsigned short **l_485[8][10][2] = {{{&g_82,&g_82},{&g_82,(void*)0},{(void*)0,&g_82},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,&g_82},{(void*)0,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{&g_82,(void*)0},{(void*)0,&g_82}},{{&g_82,&g_82},{(void*)0,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,(void*)0},{&g_82,&g_82}},{{(void*)0,&g_82},{&g_82,&g_82},{(void*)0,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{&g_82,(void*)0},{(void*)0,&g_82},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,(void*)0}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,(void*)0},{&g_82,&g_82}},{{&g_82,(void*)0},{&g_82,(void*)0},{&g_82,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,&g_82},{&g_82,(void*)0},{&g_82,&g_82},{&g_82,(void*)0},{&g_82,(void*)0},{&g_82,&g_82}},{{&g_82,(void*)0},{&g_82,&g_82},{&g_82,&g_82},{(void*)0,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}}};
    short *l_514 = &g_123[2];
    unsigned l_529 = 0x7761EBFBL;
    unsigned char l_537 = 251UL;
    unsigned l_553[1];
    int **l_558[9][8][3] = {{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}},{{&g_296,&g_43,&g_296},{&g_43,&g_296,&g_296},{(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296},{(void*)0,&g_43,&g_43},{&g_43,&g_296,&g_296},{&g_296,(void*)0,&g_43},{&g_296,&g_296,&g_296}}};
    unsigned long long *l_561 = &g_209;
    unsigned long long *l_562 = &g_155;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_553[i] = 0x277BF2F4L;
    for (g_42 = 0; (g_42 <= 2); g_42 += 1)
    {
        int *l_60 = &g_61[2][0];
        int l_353 = 0xBD7BAF9CL;
        int **l_356 = &g_43;
        const short l_361 = 0x5C6CL;
        short *l_372 = &g_123[0];
        unsigned char *l_373 = &g_255;
        int *l_374[3][8] = {{&l_353,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_46[1][0][2],(void*)0},{(void*)0,&l_46[6][2][1],&l_46[2][3][2],&l_353,&l_46[1][0][2],&l_353,&l_46[2][3][2],&l_46[6][2][1]},{&l_46[3][0][0],&l_46[2][3][2],&l_353,&l_353,(void*)0,(void*)0,(void*)0,(void*)0}};
        unsigned short **l_446 = &g_82;
        unsigned short l_513 = 0xA22EL;
        unsigned l_515 = 0x88A38805L;
        int i, j;
    }
    p_38 = (g_123[0] , &l_46[2][1][0]);
    (*p_38) = (safe_sub_func_uint8_t_u_u(((((*l_561) = 0UL) != ((*l_562) = p_39)) && (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(65530UL, 2)), p_37))), g_255));
    return g_375;
}







static int * func_47(long long p_48, long long * const p_49, int p_50, unsigned short * p_51, unsigned p_52)
{
    g_296 = &p_50;
    return &g_44;
}







static long long * func_53(unsigned long long p_54, unsigned char p_55, int * p_56, unsigned short p_57)
{
    unsigned l_354[3];
    long long *l_355 = &g_18;
    int i;
    for (i = 0; i < 3; i++)
        l_354[i] = 0xBC7DE2BDL;
    (*g_43) = (*g_43);
    return l_355;
}







static unsigned long long func_58(int p_59)
{
    int l_66 = 0x98870B37L;
    unsigned short l_67 = 0x221BL;
    int *l_68 = &l_66;
    int *l_72 = &g_61[0][1];
    int **l_71 = &l_72;
    long long *l_79 = (void*)0;
    unsigned *l_80 = &g_81;
    short *l_125[2];
    short **l_124 = &l_125[0];
    int l_180 = (-1L);
    int l_253 = 0x59817176L;
    int i;
    for (i = 0; i < 2; i++)
        l_125[i] = &g_123[4];
    (*l_68) = ((*g_43) = (g_18 , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((l_66 ^ l_67), 0)), 7))));
    if ((g_42 , ((*g_43) = ((safe_mod_func_int32_t_s_s(((((*l_68) != g_42) , ((*l_71) = l_68)) != ((safe_lshift_func_uint16_t_u_u((g_75[4] == l_71), 0)) , &p_59)), (safe_rshift_func_uint8_t_u_s((((*l_80) = ((*g_43) <= ((void*)0 != l_79))) , p_59), 7)))) != p_59))))
    {
        (*l_68) = ((*g_43) = (g_44 >= g_61[2][0]));
    }
    else
    {
        const int *l_105 = &g_44;
        int l_141 = (-4L);
        long long * const l_168 = &g_18;
        int **l_181 = &l_72;
        unsigned l_197[5] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
        int l_217 = 0xA35014F3L;
        long long **l_261[6];
        char *l_284 = &g_136[2][3];
        unsigned l_285 = 18446744073709551615UL;
        const int **l_286 = &g_234;
        unsigned short *l_291 = (void*)0;
        unsigned short *l_292 = &g_226;
        unsigned short l_350[9] = {0xE798L,0UL,0xE798L,0UL,0xE798L,0UL,0xE798L,0UL,0xE798L};
        int i;
        for (i = 0; i < 6; i++)
            l_261[i] = (void*)0;
        if ((((g_82 = &g_2) != (void*)0) && (safe_mod_func_uint8_t_u_u(p_59, g_44))))
        {
            unsigned short l_85 = 0xC668L;
            int *l_102 = &l_66;
            if (p_59)
            {
                l_85 = 3L;
            }
            else
            {
                unsigned short *l_101 = &l_85;
                int **l_103 = &l_102;
                (*l_103) = (((*l_101) = (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((&g_81 != &g_81) != ((safe_sub_func_uint32_t_u_u((g_81 = 1UL), p_59)) != (safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((!(g_44 | ((g_98 = 0xC5L) || g_42))), (safe_rshift_func_int16_t_s_s(g_61[2][0], g_44)))) && 0UL), 18446744073709551615UL)))), 0x3AC0F783L)), 7))) , l_102);
            }
        }
        else
        {
            const int * const l_104 = &g_44;
            long long **l_142[9];
            int *l_145 = (void*)0;
            char l_162 = 0L;
            int **l_165[3];
            unsigned short *l_177[8];
            const long long **l_212 = (void*)0;
            int i;
            for (i = 0; i < 9; i++)
                l_142[i] = &l_79;
            for (i = 0; i < 3; i++)
                l_165[i] = &g_43;
            for (i = 0; i < 8; i++)
                l_177[i] = &l_67;
            l_105 = l_104;
            for (g_81 = 1; (g_81 == 45); ++g_81)
            {
                unsigned l_117[10] = {4294967293UL,4294967293UL,0xDA06E20FL,0x6A2EEAF0L,0xDA06E20FL,4294967293UL,4294967293UL,0xDA06E20FL,0x6A2EEAF0L,0xDA06E20FL};
                int **l_149 = &g_43;
                unsigned long long *l_154 = &g_155;
                unsigned *l_161 = &l_117[0];
                char *l_163 = (void*)0;
                char *l_164 = &g_136[2][3];
                int i;
                for (l_66 = 0; (l_66 <= 1); l_66 += 1)
                {
                    int **l_148 = &l_145;
                }
                (*l_149) = &g_44;
                (*g_43) = (-1L);
                (*l_68) = ((((((*l_164) = (safe_div_func_int16_t_s_s(((safe_div_func_int32_t_s_s((!((((*l_154) = g_61[0][0]) == (*l_104)) , ((*g_43) = (safe_mul_func_int16_t_s_s((l_141 = 2L), (((safe_mod_func_int16_t_s_s((*l_105), p_59)) && 0x0CL) || p_59)))))), (safe_unary_minus_func_int16_t_s((l_145 == (p_59 , l_161)))))) == l_162), (*l_68)))) , (void*)0) != &g_81) && g_123[1]) || p_59);
            }
            l_68 = &g_44;
            if ((safe_rshift_func_uint16_t_u_s((((l_168 == (g_179 = ((g_178[5][0][2] = ((safe_mul_func_uint8_t_u_u(((!p_59) != p_59), ((((p_59 , (safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((*l_68) , (g_18 == (*l_68))), (safe_lshift_func_uint16_t_u_u(0x6EE4L, (g_155 != (*l_105)))))), g_155))) < g_18) <= (*l_68)) > (*g_43)))) ^ 0x287AL)) , l_79))) && l_180) && p_59), 4)))
            {
                const short l_182 = (-10L);
                (*l_68) = (*g_43);
                if (((void*)0 == l_181))
                {
                    (*g_43) = l_182;
                }
                else
                {
                    int ***l_183 = &l_181;
                    (*l_183) = (void*)0;
                }
                return g_123[2];
            }
            else
            {
                int *l_198 = &l_180;
                int **l_227[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_227[i] = &l_145;
                for (p_59 = (-7); (p_59 != 25); ++p_59)
                {
                    const long long l_193 = (-1L);
                    if ((*g_43))
                    {
                        char *l_186 = (void*)0;
                        char *l_187 = (void*)0;
                        char *l_188 = &g_178[5][0][2];
                        int **l_194 = &g_76[0][2];
                        (*g_43) = (((((((*l_188) = (+((-1L) ^ 0x7D1EL))) ^ (safe_lshift_func_int16_t_s_u(p_59, 3))) <= (safe_lshift_func_uint8_t_u_s((((p_59 != (l_193 == (&p_59 != ((*l_194) = ((*l_71) = &p_59))))) <= (g_61[2][0] && (&g_127 == &g_127))) < p_59), 5))) , l_104) != (void*)0) , (*g_43));
                        l_197[4] = (g_136[1][2] , (0UL && ((void*)0 == &g_44)));
                        l_198 = &g_44;
                    }
                    else
                    {
                        unsigned char *l_207 = (void*)0;
                        unsigned char *l_208[7];
                        const long long ***l_213[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int l_215 = (-1L);
                        int i;
                        for (i = 0; i < 7; i++)
                            l_208[i] = (void*)0;
                        (*l_198) = p_59;
                        (*l_68) = ((p_59 && (safe_div_func_uint64_t_u_u(((l_217 = (g_216 = (l_141 = ((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(((g_209 = (g_123[7] == 0x3DL)) < ((safe_rshift_func_int16_t_s_s(l_193, ((g_214 = l_212) != ((p_59 && ((void*)0 == l_168)) , (void*)0)))) <= p_59)), l_215)) ^ 18446744073709551611UL) | p_59), p_59)) || l_193)))) | 0x66A7L), g_2))) , p_59);
                        l_68 = &l_66;
                    }
                    (*l_198) = (*l_198);
                    (*g_43) = (safe_lshift_func_uint16_t_u_s(((0xDC7AL && (p_59 , (safe_rshift_func_int8_t_s_u(g_178[5][0][2], 4)))) || (((*l_68) < (g_61[2][0] || g_42)) , (*l_68))), ((g_226 = ((safe_lshift_func_uint16_t_u_u(((4L && (safe_div_func_uint16_t_u_u((*g_82), (*l_68)))) > p_59), (*l_198))) & (*l_105))) > (*g_43))));
                }
                (*l_198) = (*g_43);
                l_227[0] = &l_198;
                for (g_98 = 0; (g_98 != 19); g_98 = safe_add_func_uint8_t_u_u(g_98, 1))
                {
                    int ***l_230 = &g_75[4];
                    (*l_230) = &g_76[0][2];
                    for (g_44 = 6; (g_44 != (-16)); g_44 = safe_sub_func_int8_t_s_s(g_44, 5))
                    {
                        const int *l_233[9] = {&l_66,&l_66,&l_66,&l_66,&l_66,&l_66,&l_66,&l_66,&l_66};
                        int i;
                        g_234 = l_233[2];
                    }
                }
            }
        }
        for (l_67 = 0; (l_67 > 5); l_67 = safe_add_func_int32_t_s_s(l_67, 1))
        {
            short ** const l_251 = &l_125[0];
            int l_258 = 7L;
            long long **l_263 = (void*)0;
            long long ***l_262 = &l_263;
        }
        (*l_286) = ((safe_add_func_int32_t_s_s((*g_234), ((((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_59, 253UL)), p_59)) | p_59) < ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((6L ^ (((safe_mod_func_uint8_t_u_u(((*g_43) && (((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((void*)0 == l_284), l_285)), 1)) && p_59) , (*l_68))), p_59)) >= p_59) ^ p_59)), g_226)), (*l_68))), 0x05L)), 7)) > (-2L))) <= (*l_68)))) , (void*)0);
        if ((((safe_sub_func_uint16_t_u_u((*g_82), (+((*l_292) = (((**l_124) = (p_59 ^ 0x4C52L)) != (l_141 = p_59)))))) > (g_44 & g_61[2][0])) && ((((((void*)0 != &l_67) && (g_209 = p_59)) > g_18) , (*g_43)) >= 0xFD4F2870L)))
        {
            int *l_295 = &l_66;
            unsigned l_331 = 0xCAADE331L;
            short ***l_347 = (void*)0;
            if ((safe_div_func_uint16_t_u_u(p_59, (*l_68))))
            {
                (*l_68) = p_59;
                (*l_286) = l_295;
            }
            else
            {
                unsigned long long l_299 = 0x0016889F95F825B9LL;
                long long *l_304 = (void*)0;
                int *l_320[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_320[i] = &g_61[2][0];
                (*l_286) = g_296;
                if (((*l_295) , (p_59 , ((*l_295) = (*g_43)))))
                {
                    (*l_295) = p_59;
                    return (**l_286);
                }
                else
                {
                    unsigned short l_314 = 0x2A59L;
                    unsigned char l_342 = 255UL;
                    (*l_286) = (g_178[5][0][2] , (*l_286));
                    for (g_255 = 0; (g_255 == 6); g_255 = safe_add_func_int16_t_s_s(g_255, 5))
                    {
                        (*g_43) = l_299;
                    }
                    for (g_216 = 0; (g_216 <= 1); g_216 += 1)
                    {
                        int *l_319[9][2] = {{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0},{&g_61[2][0],(void*)0}};
                        const int l_321 = (-3L);
                        int ** const l_328 = &l_295;
                        int **l_330 = &g_296;
                        int ***l_329 = &l_330;
                        int i, j;
                        (*l_286) = ((((safe_sub_func_int8_t_s_s((l_299 != 0x5AL), ((*l_284) = (safe_sub_func_uint8_t_u_u(((l_304 != g_305) == (safe_lshift_func_uint8_t_u_u(((!(safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(p_59, (l_314 & (safe_lshift_func_int8_t_s_u(l_299, p_59))))) && (safe_div_func_uint32_t_u_u((l_319[4][1] != l_320[1]), p_59))), p_59)), l_321))) || (*g_82)), (*l_295)))), 250UL))))) , 0x8049F28BL) , p_59) , &g_235);
                        (*l_295) = ((l_314 > (g_226 = (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u(0xE94DL, (p_59 , p_59))) , l_292) != ((*l_124) = (*l_124))), 5)))) , ((~(0x27L | g_18)) | (((safe_mod_func_int64_t_s_s(p_59, 1L)) == (*g_296)) == p_59)));
                        (*l_329) = (l_321 , l_328);
                    }
                    (*g_43) = ((l_331 > 5UL) <= (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((l_342 < (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((l_347 == l_347), ((safe_sub_func_uint64_t_u_u(l_314, (p_59 | ((((**l_124) = (~(l_350[5] = g_2))) > (((*l_68) & (*l_68)) < 18446744073709551615UL)) != 0x0912981AL)))) == g_178[5][0][2]))), (*g_305)))), 0UL)), p_59)), 8UL)) || (*g_82)), p_59)) | 4L), 7)));
                }
                return l_299;
            }
            for (l_217 = (-6); (l_217 != 8); ++l_217)
            {
                (*l_286) = l_295;
                (*g_296) = ((((void*)0 != l_284) , p_59) & 65531UL);
            }
        }
        else
        {
            (*l_286) = &l_180;
            (*g_296) = 0xD4783017L;
        }
    }
    return g_235;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_136[i][j], "g_136[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_178[i][j][k], "g_178[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_546[i][j][k], "g_546[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_557, "g_557", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_657[i], "g_657[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
