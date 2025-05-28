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
   unsigned char f1;
};

struct S1 {
   int f0;
   short f1;
   char f2;
   char f3;
   volatile unsigned short f4;
   int f5;
   unsigned short f6;
   unsigned char f7;
   volatile short f8;
};


static struct S0 g_12 = {0x5898F01BL,0x02L};
static char g_20 = 0x17L;
static int g_22 = 0x45BBBDEBL;
static int * volatile g_21 = &g_22;
static unsigned g_47 = 0x3268DD2AL;
static struct S1 g_67 = {-9L,-1L,0xE1L,3L,0x744FL,0x755584E2L,0xBA6DL,0xD3L,1L};
static int * volatile g_69 = &g_67.f5;
static int g_73 = (-1L);
static unsigned g_83 = 18446744073709551614UL;
static unsigned *g_82 = &g_83;
static unsigned ** volatile g_81 = &g_82;
static unsigned **g_89 = &g_82;
static unsigned *** volatile g_88 = &g_89;
static struct S1 *g_91 = &g_67;
static struct S1 ** volatile g_90 = &g_91;
static int *g_93 = (void*)0;
static int **g_92 = &g_93;
static struct S0 g_103 = {-10L,0x00L};
static struct S1 ** volatile g_109 = &g_91;
static struct S1 ** volatile g_111 = &g_91;
static unsigned g_112 = 18446744073709551614UL;
static struct S1 g_113 = {0x02009A6DL,-1L,0x7BL,1L,65535UL,0xCF981355L,1UL,255UL,0L};
static struct S1 ** volatile g_132 = &g_91;
static int * volatile ** volatile g_133 = (void*)0;
static struct S1 g_137 = {0L,1L,0xB0L,0xADL,1UL,-1L,65535UL,254UL,0x4AAFL};
static struct S1 g_148 = {0x34743BD4L,0x6427L,0x37L,0xCBL,0UL,-1L,4UL,0x02L,0x1C81L};
static int * volatile g_150 = &g_103.f0;
static struct S1 ** volatile g_151 = &g_91;
static struct S1 g_160 = {-8L,0x1370L,6L,0x42L,0x7D9CL,-1L,65530UL,2UL,0xC83EL};
static volatile unsigned char g_200 = 0x94L;
static volatile unsigned char * volatile g_199 = &g_200;
static volatile unsigned char g_202 = 0x6AL;
static volatile unsigned char *g_201 = &g_202;
static struct S1 g_208 = {0x04CBFAB0L,0xA586L,0x68L,-1L,3UL,0L,2UL,0x7DL,0x25F7L};
static struct S1 g_209 = {0x4286F750L,-9L,-10L,0x7EL,0x8EC6L,1L,7UL,1UL,0x56B6L};
static struct S0 ** volatile g_213 = (void*)0;
static struct S0 *g_215 = (void*)0;
static struct S0 ** volatile g_214 = &g_215;
static volatile short *g_223 = &g_209.f8;
static struct S0 g_227 = {-9L,255UL};
static int * volatile g_241 = &g_67.f0;
static struct S1 g_245 = {0xF23E8BC3L,0xB2D5L,0x0DL,0x41L,8UL,0xC54B2A35L,0x025DL,0x5FL,1L};
static unsigned g_270 = 0xC7AF0A2BL;
static int * volatile g_304 = &g_103.f0;
static struct S1 ** volatile g_312 = &g_91;
static int * volatile g_327 = &g_245.f5;
static struct S1 g_350 = {8L,-2L,1L,0x5EL,7UL,0x0F04CC2AL,0xA193L,2UL,0xC894L};
static struct S1 *g_349 = &g_350;
static struct S1 g_368 = {-1L,0x55B0L,-2L,-2L,0x0BC7L,-4L,0x262EL,0xCAL,0x2341L};



static char func_1(void);
static struct S1 * func_2(struct S1 * p_3, unsigned p_4, struct S1 * p_5, struct S0 p_6, short p_7);
static struct S1 * func_8(struct S0 p_9, struct S1 * p_10, unsigned char p_11);
static struct S1 * func_13(struct S1 * p_14, struct S1 * p_15, struct S1 * p_16, struct S1 * p_17);
static struct S1 * func_18(char p_19);
static int ** func_23(unsigned p_24, char p_25);
static struct S0 ** func_35(char p_36);
static char func_39(int * p_40, int p_41);
static int * func_42(unsigned p_43, struct S0 * p_44, unsigned char p_45);
static struct S1 func_48(unsigned char p_49, unsigned p_50);
static char func_1(void)
{
    struct S1 *l_244 = &g_245;
    int l_348 = 0x690B895AL;
    struct S0 l_351 = {1L,0x5BL};
    struct S1 **l_369 = (void*)0;
    struct S1 **l_370 = &g_91;
    struct S1 **l_371 = &l_244;
    (*l_371) = ((*l_370) = func_2(func_8(g_12, func_13(func_18(g_20), l_244, g_91, g_91), l_348), l_348, g_349, l_351, l_351.f1));
    return l_351.f1;
}







static struct S1 * func_2(struct S1 * p_3, unsigned p_4, struct S1 * p_5, struct S0 p_6, short p_7)
{
    short l_362 = 1L;
    int ***l_363 = &g_92;
    (*p_5) = ((0xC994EAE7L && ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_4 , (((***l_363) = (safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(l_362, (((void*)0 != l_363) && (((p_7 > ((((safe_sub_func_int32_t_s_s((***l_363), (p_4 != (safe_mod_func_uint32_t_u_u(g_67.f0, 1UL))))) < p_6.f1) , 0xACAF8924L) ^ g_148.f0)) , 6UL) & (***l_363))))) != g_137.f2), g_67.f7))) != 0xCA968577L)), p_7)), g_160.f8)), 11)) != g_113.f6)) , g_368);
    return (*g_151);
}







static struct S1 * func_8(struct S0 p_9, struct S1 * p_10, unsigned char p_11)
{
    return (*g_90);
}







static struct S1 * func_13(struct S1 * p_14, struct S1 * p_15, struct S1 * p_16, struct S1 * p_17)
{
    short l_248 = 0xEDF6L;
    unsigned short *l_255 = &g_160.f6;
    unsigned ***l_260 = &g_89;
    unsigned ****l_261 = &l_260;
    unsigned ***l_262 = &g_89;
    unsigned ****l_263 = &l_262;
    short *l_268 = &g_148.f1;
    unsigned *l_269 = &g_270;
    struct S0 l_279 = {0xF1FB96F8L,3UL};
    unsigned l_288 = 0x25079523L;
    char l_289 = (-8L);
    struct S1 *l_346 = &g_209;
    (*g_21) = 3L;
lbl_347:
    (*g_92) = func_42(((safe_add_func_uint32_t_u_u((l_248 , ((*l_269) = (safe_lshift_func_uint8_t_u_u(l_248, ((safe_add_func_uint8_t_u_u(0xD1L, l_248)) != (safe_mul_func_uint8_t_u_u((((*l_255) = 6UL) ^ (safe_rshift_func_int16_t_s_u(((*l_268) = (safe_add_func_int16_t_s_s((l_248 | (((*l_261) = l_260) != ((*l_263) = l_262))), (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((l_248 | l_248) , (*g_223)), 4)) > l_248), g_208.f0))))), 1))), g_208.f1))))))), l_248)) , 0x0803106AL), &g_103, g_245.f0);
    for (g_208.f0 = 4; (g_208.f0 == (-6)); g_208.f0 = safe_sub_func_int8_t_s_s(g_208.f0, 3))
    {
        struct S1 *l_273 = &g_209;
        int l_278 = 1L;
        struct S0 *l_280 = &g_227;
        char *l_290 = (void*)0;
        char *l_291 = (void*)0;
        char *l_292 = &g_208.f3;
        unsigned char l_307 = 255UL;
        int l_336 = 0xD072FE99L;
        int l_337 = 1L;
        l_273 = (void*)0;
        l_278 = (((*l_292) = (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_248, ((l_278 , ((((*l_280) = l_279) , (safe_unary_minus_func_uint16_t_u(g_160.f6))) || (safe_rshift_func_int8_t_s_u((l_278 == (safe_mul_func_uint8_t_u_u(((l_278 >= g_148.f6) >= (l_279.f0 , l_288)), 0UL))), l_279.f0)))) & g_148.f7))) ^ l_289), (-2L)))) | l_289);
        if (l_278)
        {
            struct S0 l_293 = {0x754541C6L,0UL};
            (*l_280) = l_293;
            l_293.f0 = (l_278 = (((safe_lshift_func_int8_t_s_s((0L && (safe_lshift_func_uint16_t_u_s(((((((func_39(&l_278, (l_289 & g_148.f1)) , ((1UL <= (l_278 <= (~(~(safe_mod_func_uint8_t_u_u((*g_201), l_278)))))) >= 2L)) | g_137.f3) , (*g_21)) || 0xB19FE640L) & g_160.f7) , g_137.f8), g_245.f0))), 3)) == 0x9EL) > 0x6A90L));
        }
        else
        {
            int l_302 = (-1L);
            int *l_303 = (void*)0;
            char *l_333 = &g_209.f2;
            if ((l_302 && (func_39(l_303, l_279.f0) != 0UL)))
            {
                struct S0 *l_305 = &g_12;
                struct S0 **l_306 = &l_305;
                (*g_304) = l_248;
                if (l_278)
                    break;
                (*l_306) = l_305;
                if (l_307)
                    continue;
            }
            else
            {
                int l_325 = 1L;
                char *l_332 = &g_209.f3;
                char **l_334 = &l_291;
                int *l_335 = &l_278;
                unsigned char *l_344 = &g_67.f7;
                struct S0 *l_345 = &l_279;
                for (g_67.f1 = 0; (g_67.f1 >= (-13)); g_67.f1 = safe_sub_func_int8_t_s_s(g_67.f1, 9))
                {
                    unsigned l_326 = 0UL;
                    (*g_92) = (*g_92);
                    for (g_148.f3 = (-25); (g_148.f3 >= (-22)); g_148.f3++)
                    {
                        (*g_312) = p_16;
                        (*g_327) = (safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(0x5240C9C9L, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_288, (!(safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_302, (l_325 & g_67.f4))), ((l_326 , l_325) != (g_137.f0 != l_326))))))), (-1L))))) >= l_325) < g_208.f6), 0x72L));
                    }
                }
                (*g_92) = l_303;
                l_337 = (l_336 = ((*l_335) = ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(0x90L, 0xB2L)), 0x12BCDFAAL)) < (l_332 == ((*l_334) = l_333)))));
                (*g_92) = func_42((((*l_269) = (((-1L) ^ 0x9AL) | (safe_mul_func_uint8_t_u_u(l_278, ((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((*l_268) = (*g_223)), (g_103.f0 & g_20))) | g_209.f6) , 0x26L), ((*l_344) = (!l_279.f1)))) <= g_67.f1))))) , (*l_335)), l_345, l_336);
            }
            if (l_278)
                continue;
            return l_346;
        }
        if (g_148.f1)
            goto lbl_347;
    }
    return l_346;
}







static struct S1 * func_18(char p_19)
{
    short l_26 = 0xF703L;
    int ***l_242 = &g_92;
    struct S1 *l_243 = &g_148;
    (*g_21) = p_19;
    (*l_242) = func_23(l_26, g_12.f1);
    return l_243;
}







static int ** func_23(unsigned p_24, char p_25)
{
    struct S0 **l_27 = (void*)0;
    struct S0 *l_29 = &g_12;
    struct S0 **l_28 = &l_29;
    int l_211 = 0xFC6894C8L;
    unsigned short *l_240 = &g_209.f6;
    (*l_28) = (void*)0;
    for (g_20 = (-6); (g_20 == 0); g_20++)
    {
        struct S0 **l_34 = &l_29;
        unsigned *l_46 = &g_47;
        struct S0 *l_210 = &g_103;
        char *l_228 = &g_160.f2;
        struct S0 ***l_231 = &l_27;
        unsigned char *l_232 = &g_227.f1;
        int l_233 = (-1L);
    }
    (*g_241) = (l_211 && (((l_211 , (l_211 || (safe_add_func_uint16_t_u_u(1UL, ((safe_add_func_int16_t_s_s(p_24, (g_148.f2 , ((*l_240) = (safe_mul_func_int16_t_s_s((func_39((((*g_223) ^ ((p_24 > 1UL) ^ 7L)) , &l_211), g_160.f5) && g_67.f3), p_25)))))) <= g_160.f5))))) && (*g_223)) <= p_25));
    return &g_93;
}







static struct S0 ** func_35(char p_36)
{
    unsigned short l_229 = 1UL;
    int *l_230 = &g_113.f0;
    (*l_230) = (l_229 != 4UL);
    return &g_215;
}







static char func_39(int * p_40, int p_41)
{
    short *l_222 = &g_148.f1;
    struct S0 l_224 = {0xBB4E8893L,0x10L};
    struct S0 *l_225 = &g_103;
    struct S0 *l_226 = &g_227;
    (*l_226) = ((*l_225) = (l_224 = ((l_222 == ((**g_109) , g_223)) , l_224)));
    (*g_91) = (**g_111);
    return l_224.f0;
}







static int * func_42(unsigned p_43, struct S0 * p_44, unsigned char p_45)
{
    struct S0 *l_212 = &g_12;
    int *l_218 = &g_12.f0;
    (*g_214) = (p_45 , l_212);
    for (g_160.f1 = 0; (g_160.f1 == (-24)); g_160.f1 = safe_sub_func_int8_t_s_s(g_160.f1, 9))
    {
        (*g_92) = l_218;
        (*g_150) = (**g_92);
        (*g_92) = l_218;
    }
    for (g_67.f6 = 0; (g_67.f6 < 22); g_67.f6 = safe_add_func_uint32_t_u_u(g_67.f6, 1))
    {
        int *l_221 = &g_208.f5;
        return l_221;
    }
    return l_218;
}







static struct S1 func_48(unsigned char p_49, unsigned p_50)
{
    unsigned l_61 = 0UL;
    struct S1 *l_66 = &g_67;
    int *l_68 = (void*)0;
    int *l_72 = &g_73;
    unsigned **l_87 = &g_82;
    unsigned char l_101 = 0xDAL;
    int l_104 = (-1L);
    int l_145 = (-8L);
    struct S1 **l_158 = &l_66;
    struct S1 *l_159 = &g_160;
    short *l_161 = (void*)0;
    short *l_162 = (void*)0;
    short *l_163 = (void*)0;
    short *l_164 = &g_137.f1;
    struct S0 *l_167 = &g_12;
    (*g_69) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((*g_21), (safe_add_func_uint32_t_u_u(p_49, g_22)))) , (((safe_mul_func_int16_t_s_s(g_22, l_61)) == (-1L)) <= (safe_div_func_int8_t_s_s(p_50, (safe_add_func_uint8_t_u_u((g_12.f1 < (l_66 == l_66)), g_67.f2)))))), l_61)), 7));
    if ((safe_mul_func_int8_t_s_s((((g_67.f1 != (*g_69)) & p_49) >= (((*l_72) = p_49) , ((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s(0xB924E19CL, g_67.f7)) < (l_61 >= (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((p_49 ^ l_61))), g_67.f5)))), 0xB8L)) == 7UL))), p_50)))
    {
        short l_84 = (-3L);
        int l_102 = (-6L);
        struct S1 *l_110 = &g_67;
        unsigned *l_141 = &l_61;
        int *l_152 = &g_137.f0;
        g_81 = g_81;
        if ((l_84 || (safe_div_func_uint16_t_u_u(p_50, (p_50 , p_49)))))
        {
            (*g_88) = l_87;
        }
        else
        {
            int ***l_94 = &g_92;
            struct S0 l_100 = {-10L,0x4AL};
            int *l_108 = &g_12.f0;
            (*g_90) = &g_67;
            if ((l_102 = (+(g_67.f2 ^ (((((*l_94) = g_92) != ((safe_sub_func_uint8_t_u_u(0xCFL, (safe_unary_minus_func_int32_t_s(((safe_div_func_int32_t_s_s(l_84, p_50)) && (l_100 , (g_67.f8 ^ ((l_101 , g_67.f6) == p_50)))))))) , (void*)0)) <= p_50) , p_50)))))
            {
                struct S0 *l_105 = &l_100;
                l_102 = l_101;
                if (l_101)
                {
                    struct S0 **l_106 = (void*)0;
                    struct S0 **l_107 = &l_105;
                    g_103 = g_12;
                    l_104 = (-1L);
                    (*g_92) = (*g_92);
                    (*l_107) = l_105;
                }
                else
                {
                    (*g_92) = l_108;
                    (*g_109) = (*g_90);
                    return (**g_90);
                }
                (*g_111) = l_110;
                l_68 = (p_50 , ((*g_92) = &l_102));
            }
            else
            {
                int l_125 = 8L;
                if (g_112)
                {
                    int *l_136 = (void*)0;
                    if ((*g_69))
                    {
                        return g_113;
                    }
                    else
                    {
                        unsigned short l_124 = 0x885EL;
                        unsigned char *l_126 = (void*)0;
                        char *l_127 = &g_113.f2;
                        char *l_128 = (void*)0;
                        char *l_129 = (void*)0;
                        char *l_130 = &g_67.f2;
                        int *l_131 = &g_103.f0;
                        (*l_131) = ((*g_69) < (safe_sub_func_int8_t_s_s(0x7CL, ((*l_130) = ((*l_127) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(2UL, 2)), (g_103.f0 , (safe_sub_func_uint8_t_u_u(l_124, g_67.f3))))), (p_49 = (l_125 <= (g_113.f1 | g_22))))))))));
                        (*g_132) = (*g_90);
                        (*l_131) = p_49;
                    }
                    if ((*g_21))
                    {
                        int * volatile *l_135 = &l_108;
                        int * volatile **l_134 = &l_135;
                        (*l_134) = &g_69;
                        (*l_135) = ((*l_66) , l_136);
                        return g_137;
                    }
                    else
                    {
                        short *l_146 = &g_137.f1;
                        int *l_147 = &l_100.f0;
                        (*l_147) = (safe_unary_minus_func_uint8_t_u((((g_113.f1 = ((p_49 & (p_50 >= (((safe_add_func_int32_t_s_s(((((*g_81) = (void*)0) == l_141) < (*l_108)), p_49)) , (g_113.f1 && ((*l_146) = ((safe_mod_func_uint16_t_u_u(((*g_21) , ((+(((safe_unary_minus_func_int32_t_s((p_50 >= p_50))) < 0xB8142826L) | l_145)) & 0x16CCE4FAL)), 65535UL)) && g_67.f2)))) != p_50))) <= 5UL)) , p_50) , 0x17L)));
                        return g_148;
                    }
                }
                else
                {
                    unsigned l_149 = 1UL;
                    l_149 = 0xD848C122L;
                }
                (*g_150) = (p_49 | g_67.f3);
            }
        }
        (*g_151) = (*g_111);
        l_152 = (l_68 = l_152);
    }
    else
    {
        (*g_92) = (void*)0;
        return (**g_109);
    }
    if ((((safe_unary_minus_func_int32_t_s((((*g_21) & (*l_68)) >= ((safe_rshift_func_uint8_t_u_s(0x4FL, (safe_add_func_uint16_t_u_u((((void*)0 != &l_68) , p_49), ((*l_164) = (g_67.f1 = (g_160.f1 = (((*l_158) = l_66) == l_159)))))))) & (safe_rshift_func_int16_t_s_u(((void*)0 != &g_91), p_49)))))) , p_50) <= p_50))
    {
        struct S0 *l_168 = &g_103;
        l_168 = l_167;
    }
    else
    {
        unsigned l_181 = 0xDF1B6C9FL;
        if ((*g_150))
        {
            int *l_172 = &g_73;
            int **l_197 = &l_68;
            struct S1 **l_198 = &l_66;
            struct S0 l_204 = {0x8919A246L,1UL};
            for (g_67.f2 = (-9); (g_67.f2 < (-29)); g_67.f2--)
            {
                int *l_171 = (void*)0;
                (*g_69) = ((*l_68) = ((*l_68) & g_67.f8));
                (*g_92) = (void*)0;
            }
            (*g_92) = (((+(g_148.f4 , p_49)) ^ (((l_172 != (g_12 , &g_73)) | g_137.f0) != ((l_167 == l_167) | 0x75A9L))) , &l_104);
            for (g_160.f6 = 8; (g_160.f6 == 34); g_160.f6++)
            {
                char l_194 = (-10L);
                unsigned char *l_203 = &g_148.f7;
                int *l_207 = &g_160.f0;
                (*l_68) = (safe_rshift_func_int16_t_s_u(0x4A4BL, 2));
                (*g_92) = l_172;
                if ((((*g_82) = (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_181 >= (((*l_203) = (safe_mul_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((253UL != (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((l_194 > ((safe_div_func_uint32_t_u_u(p_50, ((&g_150 == l_197) ^ (((*l_164) = 8L) >= ((((g_67.f8 >= l_181) , &l_66) == l_198) , l_194))))) || 0x8BL)), p_50)) , l_181), 0)), (*l_68))) , g_199) != g_201)), (*l_68))), 0L)) > g_137.f3) & p_50) == g_20), g_12.f1))) != 1L)), 1L)), g_12.f1))) , (**l_197)))
                {
                    l_204 = (*l_167);
                    if (p_49)
                        continue;
                    (**g_92) = p_50;
                    (*l_197) = (*g_92);
                }
                else
                {
                    for (l_181 = 16; (l_181 <= 12); l_181 = safe_sub_func_int16_t_s_s(l_181, 2))
                    {
                        (*g_93) = ((*l_167) , p_49);
                        (*l_198) = (*g_109);
                    }
                    g_103 = g_103;
                }
                (*l_197) = ((*g_92) = l_207);
            }
        }
        else
        {
            return g_208;
        }
        return (**g_111);
    }
    return g_209;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_67.f2, "g_67.f2", print_hash_value);
    transparent_crc(g_67.f3, "g_67.f3", print_hash_value);
    transparent_crc(g_67.f4, "g_67.f4", print_hash_value);
    transparent_crc(g_67.f5, "g_67.f5", print_hash_value);
    transparent_crc(g_67.f6, "g_67.f6", print_hash_value);
    transparent_crc(g_67.f7, "g_67.f7", print_hash_value);
    transparent_crc(g_67.f8, "g_67.f8", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_113.f3, "g_113.f3", print_hash_value);
    transparent_crc(g_113.f4, "g_113.f4", print_hash_value);
    transparent_crc(g_113.f5, "g_113.f5", print_hash_value);
    transparent_crc(g_113.f6, "g_113.f6", print_hash_value);
    transparent_crc(g_113.f7, "g_113.f7", print_hash_value);
    transparent_crc(g_113.f8, "g_113.f8", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f1, "g_137.f1", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    transparent_crc(g_137.f3, "g_137.f3", print_hash_value);
    transparent_crc(g_137.f4, "g_137.f4", print_hash_value);
    transparent_crc(g_137.f5, "g_137.f5", print_hash_value);
    transparent_crc(g_137.f6, "g_137.f6", print_hash_value);
    transparent_crc(g_137.f7, "g_137.f7", print_hash_value);
    transparent_crc(g_137.f8, "g_137.f8", print_hash_value);
    transparent_crc(g_148.f0, "g_148.f0", print_hash_value);
    transparent_crc(g_148.f1, "g_148.f1", print_hash_value);
    transparent_crc(g_148.f2, "g_148.f2", print_hash_value);
    transparent_crc(g_148.f3, "g_148.f3", print_hash_value);
    transparent_crc(g_148.f4, "g_148.f4", print_hash_value);
    transparent_crc(g_148.f5, "g_148.f5", print_hash_value);
    transparent_crc(g_148.f6, "g_148.f6", print_hash_value);
    transparent_crc(g_148.f7, "g_148.f7", print_hash_value);
    transparent_crc(g_148.f8, "g_148.f8", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_160.f3, "g_160.f3", print_hash_value);
    transparent_crc(g_160.f4, "g_160.f4", print_hash_value);
    transparent_crc(g_160.f5, "g_160.f5", print_hash_value);
    transparent_crc(g_160.f6, "g_160.f6", print_hash_value);
    transparent_crc(g_160.f7, "g_160.f7", print_hash_value);
    transparent_crc(g_160.f8, "g_160.f8", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_208.f3, "g_208.f3", print_hash_value);
    transparent_crc(g_208.f4, "g_208.f4", print_hash_value);
    transparent_crc(g_208.f5, "g_208.f5", print_hash_value);
    transparent_crc(g_208.f6, "g_208.f6", print_hash_value);
    transparent_crc(g_208.f7, "g_208.f7", print_hash_value);
    transparent_crc(g_208.f8, "g_208.f8", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_209.f5, "g_209.f5", print_hash_value);
    transparent_crc(g_209.f6, "g_209.f6", print_hash_value);
    transparent_crc(g_209.f7, "g_209.f7", print_hash_value);
    transparent_crc(g_209.f8, "g_209.f8", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_245.f2, "g_245.f2", print_hash_value);
    transparent_crc(g_245.f3, "g_245.f3", print_hash_value);
    transparent_crc(g_245.f4, "g_245.f4", print_hash_value);
    transparent_crc(g_245.f5, "g_245.f5", print_hash_value);
    transparent_crc(g_245.f6, "g_245.f6", print_hash_value);
    transparent_crc(g_245.f7, "g_245.f7", print_hash_value);
    transparent_crc(g_245.f8, "g_245.f8", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_350.f3, "g_350.f3", print_hash_value);
    transparent_crc(g_350.f4, "g_350.f4", print_hash_value);
    transparent_crc(g_350.f5, "g_350.f5", print_hash_value);
    transparent_crc(g_350.f6, "g_350.f6", print_hash_value);
    transparent_crc(g_350.f7, "g_350.f7", print_hash_value);
    transparent_crc(g_350.f8, "g_350.f8", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_368.f3, "g_368.f3", print_hash_value);
    transparent_crc(g_368.f4, "g_368.f4", print_hash_value);
    transparent_crc(g_368.f5, "g_368.f5", print_hash_value);
    transparent_crc(g_368.f6, "g_368.f6", print_hash_value);
    transparent_crc(g_368.f7, "g_368.f7", print_hash_value);
    transparent_crc(g_368.f8, "g_368.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
