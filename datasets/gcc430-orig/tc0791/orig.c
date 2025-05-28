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
   unsigned f0 : 28;
   char f1;
   signed f2 : 25;
};


static struct S0 g_6 = {15381,0x53L,-3661};
static struct S0 *g_5 = &g_6;
static int g_46 = 0xD8131DDAL;
static int *g_45 = &g_46;
static unsigned g_50 = 1UL;
static unsigned short g_51 = 0xA450L;
static unsigned g_53 = 18446744073709551615UL;
static unsigned g_57 = 1UL;
static int **g_90 = &g_45;
static int ***g_89 = &g_90;
static char g_110[1][5][10] = {{{0L,(-1L),0x4CL,0x4CL,(-1L),0L,(-1L),0x4CL,0x4CL,(-1L)},{0L,(-1L),0x4CL,0x4CL,(-1L),0L,(-1L),0x4CL,0x4CL,(-1L)},{0L,(-1L),0x4CL,0x4CL,(-1L),0L,(-1L),0x4CL,0x4CL,(-1L)},{0L,(-1L),0x4CL,0x4CL,(-1L),0L,(-1L),0x4CL,0x4CL,(-1L)},{0L,(-1L),0x4CL,0x4CL,(-1L),0L,0x4CL,0x9BL,0x9BL,0x4CL}}};
static short g_126 = 0xC439L;
static short g_128 = 0L;
static short *g_127 = &g_128;
static unsigned g_153 = 1UL;
static unsigned **g_174 = (void*)0;
static unsigned char g_250 = 0x63L;
static struct S0 g_255 = {14770,0x86L,-938};
static unsigned g_256 = 18446744073709551607UL;
static int g_293 = 0xDF37CDABL;
static unsigned short g_305 = 7UL;
static unsigned short g_312 = 0xDF44L;
static char ***g_337 = (void*)0;
static struct S0 ***g_367 = (void*)0;
static short g_432 = 0L;
static short g_468 = 0x501AL;
static char *g_574[3] = {&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4]};
static char **g_573[4] = {&g_574[2],&g_574[2],&g_574[2],&g_574[2]};
static int g_666 = 0x8590251DL;
static unsigned g_669[6][9][4] = {{{18446744073709551615UL,18446744073709551607UL,1UL,18446744073709551607UL},{1UL,18446744073709551607UL,18446744073709551615UL,0x00D34078L},{18446744073709551607UL,0x3764281DL,0x61FD382AL,4UL},{0xF307288EL,9UL,18446744073709551609UL,0x6A9CD8B4L},{0xF307288EL,0x00D34078L,0x61FD382AL,0xF9216897L},{18446744073709551607UL,0x6A9CD8B4L,18446744073709551615UL,18446744073709551615UL},{1UL,0x3A60307BL,1UL,18446744073709551615UL},{18446744073709551615UL,0x6A9CD8B4L,18446744073709551607UL,0xF9216897L},{0x61FD382AL,0x00D34078L,0xF307288EL,0x6A9CD8B4L}},{{18446744073709551609UL,9UL,0xF307288EL,4UL},{0x61FD382AL,0x3764281DL,18446744073709551607UL,0x00D34078L},{18446744073709551615UL,18446744073709551607UL,1UL,18446744073709551607UL},{1UL,18446744073709551607UL,18446744073709551615UL,0x00D34078L},{18446744073709551607UL,0x3764281DL,0x61FD382AL,4UL},{0xF307288EL,9UL,18446744073709551609UL,0x6A9CD8B4L},{0xF307288EL,0x00D34078L,0x61FD382AL,0xF9216897L},{18446744073709551607UL,0x6A9CD8B4L,18446744073709551615UL,18446744073709551615UL},{1UL,0x3A60307BL,1UL,18446744073709551615UL}},{{18446744073709551615UL,0x6A9CD8B4L,18446744073709551607UL,0xF9216897L},{0x61FD382AL,0x00D34078L,0xF307288EL,0x6A9CD8B4L},{18446744073709551609UL,9UL,0xF307288EL,4UL},{0xF307288EL,4UL,0xB33D0D5CL,18446744073709551615UL},{0x394C1846L,0x3764281DL,18446744073709551609UL,0x3764281DL},{18446744073709551609UL,0x3764281DL,0x394C1846L,18446744073709551615UL},{0xB33D0D5CL,4UL,0xF307288EL,9UL},{18446744073709551607UL,0x3A60307BL,1UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551615UL,0xF307288EL,1UL}},{{0xB33D0D5CL,18446744073709551607UL,0x394C1846L,0xF9216897L},{18446744073709551609UL,18446744073709551611UL,18446744073709551609UL,0xF9216897L},{0x394C1846L,18446744073709551607UL,0xB33D0D5CL,1UL},{0xF307288EL,18446744073709551615UL,18446744073709551607UL,18446744073709551607UL},{1UL,0x3A60307BL,18446744073709551607UL,9UL},{0xF307288EL,4UL,0xB33D0D5CL,18446744073709551615UL},{0x394C1846L,0x3764281DL,18446744073709551609UL,0x3764281DL},{18446744073709551609UL,0x3764281DL,0x394C1846L,18446744073709551615UL},{0xB33D0D5CL,4UL,0xF307288EL,9UL}},{{18446744073709551607UL,0x3A60307BL,1UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551615UL,0xF307288EL,1UL},{0xB33D0D5CL,18446744073709551607UL,0x394C1846L,0xF9216897L},{18446744073709551609UL,18446744073709551611UL,18446744073709551609UL,0xF9216897L},{0x394C1846L,18446744073709551607UL,0xB33D0D5CL,1UL},{0xF307288EL,18446744073709551615UL,18446744073709551607UL,18446744073709551607UL},{1UL,0x3A60307BL,18446744073709551607UL,9UL},{0xF307288EL,4UL,0xB33D0D5CL,18446744073709551615UL},{0x394C1846L,0x3764281DL,18446744073709551609UL,0x3764281DL}},{{0x394C1846L,0x3A60307BL,0x61FD382AL,0x6A9CD8B4L},{1UL,18446744073709551611UL,1UL,0x00D34078L},{18446744073709551609UL,18446744073709551615UL,0xBC0A6E3EL,9UL},{18446744073709551609UL,0x6A9CD8B4L,1UL,0x3764281DL},{1UL,9UL,0x61FD382AL,18446744073709551607UL},{0x394C1846L,0xF9216897L,0x394C1846L,18446744073709551607UL},{0x61FD382AL,9UL,1UL,0x3764281DL},{1UL,0x6A9CD8B4L,18446744073709551609UL,9UL},{0xBC0A6E3EL,18446744073709551615UL,18446744073709551609UL,0x00D34078L}}};
static unsigned char **g_680 = (void*)0;
static int *g_755[2] = {&g_293,&g_293};
static int *g_783[10][10][2] = {{{&g_293,&g_293},{&g_46,&g_46},{&g_293,&g_293},{&g_293,&g_293},{(void*)0,&g_293},{&g_293,(void*)0},{&g_293,&g_293},{&g_293,(void*)0},{&g_293,&g_293},{(void*)0,&g_293}},{{&g_293,&g_293},{&g_293,&g_46},{&g_46,&g_293},{&g_293,&g_293},{&g_293,&g_293},{&g_293,(void*)0},{&g_293,&g_293},{(void*)0,&g_293},{&g_293,&g_293},{(void*)0,&g_46}},{{(void*)0,&g_293},{(void*)0,&g_293},{&g_293,&g_293},{&g_293,&g_293},{(void*)0,&g_46},{&g_46,&g_293},{&g_293,&g_46},{&g_293,&g_46},{&g_293,(void*)0},{&g_46,&g_293}},{{&g_46,&g_293},{&g_293,&g_293},{&g_293,&g_46},{&g_293,&g_293},{&g_293,&g_293},{&g_46,&g_293},{&g_293,&g_46},{(void*)0,&g_293},{&g_293,&g_293},{&g_293,&g_293}},{{&g_293,&g_293},{&g_293,&g_46},{&g_293,&g_293},{&g_46,&g_293},{&g_293,(void*)0},{&g_293,&g_46},{(void*)0,&g_293},{&g_46,&g_293},{&g_293,&g_293},{&g_293,&g_293}},{{&g_293,&g_46},{&g_293,&g_46},{&g_293,&g_293},{&g_46,&g_46},{&g_46,&g_293},{&g_46,&g_293},{&g_46,&g_46},{&g_46,&g_293},{&g_293,&g_46},{&g_293,&g_46}},{{&g_293,&g_293},{&g_293,&g_293},{&g_293,&g_293},{&g_46,&g_293},{(void*)0,&g_46},{&g_293,(void*)0},{&g_293,&g_293},{&g_46,&g_293},{&g_293,&g_46},{&g_293,&g_293}},{{&g_293,&g_293},{&g_293,&g_293},{&g_293,&g_293},{(void*)0,&g_46},{&g_293,&g_293},{&g_46,&g_293},{&g_46,(void*)0},{&g_46,&g_46},{&g_293,(void*)0},{&g_293,&g_46}},{{&g_293,(void*)0},{(void*)0,&g_293},{&g_293,&g_46},{&g_293,&g_46},{&g_293,&g_293},{&g_293,&g_293},{&g_293,&g_293},{&g_293,&g_293},{(void*)0,&g_293},{&g_46,&g_46}},{{&g_293,&g_46},{&g_46,&g_293},{&g_293,&g_293},{&g_46,&g_293},{&g_46,&g_293},{&g_46,&g_293},{(void*)0,&g_293},{&g_293,&g_293},{&g_293,&g_293},{&g_46,(void*)0}}};
static unsigned g_814 = 4294967290UL;
static char g_816 = 0x31L;
static int *g_886[2][5][5] = {{{&g_293,&g_293,(void*)0,&g_293,&g_293},{&g_293,(void*)0,&g_293,&g_293,(void*)0},{&g_293,&g_46,&g_46,&g_293,&g_46},{(void*)0,(void*)0,&g_46,(void*)0,(void*)0},{&g_46,&g_293,&g_46,&g_46,&g_293}},{{(void*)0,&g_293,&g_293,(void*)0,&g_293},{&g_293,&g_293,(void*)0,&g_293,&g_293},{&g_293,(void*)0,&g_293,&g_293,(void*)0},{&g_293,&g_46,&g_46,&g_293,&g_46},{(void*)0,(void*)0,&g_46,(void*)0,(void*)0}}};
static unsigned short g_971[9][8] = {{0xB2FBL,0xC8D5L,0xA71AL,0xB2FBL,0xDC40L,0xBD5AL,0x95EEL,0xAB5DL},{0xC8D5L,0x95EEL,0xA71AL,65530UL,65532UL,65532UL,65530UL,0xA71AL},{0xDC40L,0xDC40L,0x69D4L,65535UL,65527UL,7UL,0x5B0EL,0xDC40L},{0x95EEL,0xC8D5L,65535UL,65532UL,0x5B0EL,65535UL,0xA71AL,0xDC40L},{0xC8D5L,0xB2FBL,0x95EEL,65535UL,0x95EEL,0xB2FBL,0xC8D5L,0xA71AL},{0xAB5DL,65535UL,1UL,65530UL,65535UL,65529UL,0x5B0EL,0xAB5DL},{0xBD5AL,0xAB5DL,65532UL,0xB2FBL,65535UL,65535UL,65535UL,65535UL},{0xAB5DL,0xA71AL,0xA71AL,0xAB5DL,0x95EEL,0xBD5AL,0xDC40L,0xB2FBL},{0xC8D5L,0xDC40L,0UL,65530UL,0x5B0EL,0x69D4L,65530UL,0xC8D5L}};
static struct S0 *g_980 = &g_255;
static int *g_1002 = &g_293;
static unsigned short g_1050 = 65530UL;
static unsigned short g_1110 = 4UL;
static short g_1291 = (-1L);
static unsigned char g_1293 = 1UL;
static struct S0 g_1296[9] = {{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077},{7008,0xB3L,-4077}};
static struct S0 *g_1295 = &g_1296[4];
static char g_1374 = 0x20L;
static unsigned char g_1483 = 5UL;
static short **g_1489[4] = {&g_127,&g_127,&g_127,&g_127};
static short ***g_1488[1] = {&g_1489[1]};



static struct S0 func_1(void);
static struct S0 * func_2(unsigned p_3, struct S0 * p_4);
static struct S0 func_8(struct S0 * p_9);
static struct S0 * func_10(unsigned p_11, struct S0 * p_12, struct S0 * p_13);
static char func_14(struct S0 * p_15, unsigned short p_16, unsigned p_17);
static struct S0 * func_18(struct S0 * p_19);
static int * func_20(short p_21, struct S0 p_22, int p_23, struct S0 * p_24);
static unsigned func_37(unsigned p_38, unsigned char p_39);
static int * func_60(struct S0 * p_61, int * p_62, int * p_63);
static struct S0 * func_64(short p_65, short p_66, int p_67, struct S0 p_68, unsigned char p_69);
static struct S0 func_1(void)
{
    struct S0 *l_7 = &g_6;
    struct S0 **l_1583[3];
    struct S0 l_1584 = {4634,0x39L,-1203};
    int i;
    for (i = 0; i < 3; i++)
        l_1583[i] = &g_5;
    g_1295 = func_2((((void*)0 == g_5) | (+g_6.f1)), l_7);



    ;



    ;
    ;
    ;
    (*g_90) = (void*)0;

    ;
    return l_1584;
}







static struct S0 * func_2(unsigned p_3, struct S0 * p_4)
{
    unsigned short *l_970 = &g_971[7][4];
    int l_972 = 0x534AD2B0L;
    unsigned char *l_1292 = &g_1293;
    struct S0 *l_1294 = (void*)0;
    struct S0 **l_1580 = &g_980;
    (*p_4) = func_8(func_10((func_14(func_18(&g_6), ((*l_970) = 65535UL), l_972) & (p_3 || ((*l_1292) = ((safe_rshift_func_int16_t_s_s(func_37(func_37((safe_mul_func_uint16_t_u_u(g_816, g_1291)), p_3), p_3), 2)) ^ p_3)))), l_1294, g_1295));



    ;



    ;
    ;
    (*g_1295) = func_8(((*l_1580) = p_4));

    ;
    for (g_50 = 18; (g_50 >= 23); g_50 = safe_add_func_int8_t_s_s(g_50, 4))
    {
        return p_4;


    }
    return (*l_1580);


}







static struct S0 func_8(struct S0 * p_9)
{
    unsigned short l_1569[5][2][2] = {{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}}};
    int l_1570 = 6L;
    struct S0 *l_1574 = (void*)0;
    struct S0 l_1579 = {12261,0x53L,-1012};
    int i, j, k;
    for (g_814 = 0; (g_814 < 32); g_814 = safe_add_func_int32_t_s_s(g_814, 5))
    {
        unsigned l_1565 = 18446744073709551615UL;
        int l_1571 = 0xD333907DL;
        struct S0 l_1573 = {9954,-1L,3794};
        int l_1578 = 3L;
        for (g_312 = 0; (g_312 <= 1); g_312 += 1)
        {
            int l_1566 = 0xC5E3238CL;
            int *l_1575 = &g_46;
            int **l_1576 = (void*)0;
            int **l_1577 = &g_1002;
            for (g_816 = 0; (g_816 <= 3); g_816 += 1)
            {
                int l_1567 = 0xB0B5B0FFL;
                unsigned l_1572 = 4294967291UL;
                int i, j, k;
                for (g_305 = 0; (g_305 <= 3); g_305 += 1)
                {
                    int **l_1558 = &g_886[1][0][3];
                    char *l_1568[7][7][5] = {{{&g_1374,&g_255.f1,(void*)0,&g_255.f1,&g_1374},{&g_6.f1,&g_110[0][1][4],(void*)0,&g_1296[4].f1,(void*)0},{(void*)0,&g_110[0][1][4],&g_1296[(g_312 + 6)].f1,&g_255.f1,&g_816},{(void*)0,(void*)0,&g_816,&g_110[0][1][4],(void*)0},{(void*)0,&g_255.f1,&g_110[0][4][1],&g_110[0][1][4],&g_1374},{(void*)0,&g_255.f1,(void*)0,(void*)0,&g_6.f1},{(void*)0,&g_255.f1,&g_816,&g_255.f1,(void*)0}},{{&g_6.f1,(void*)0,(void*)0,&g_255.f1,(void*)0},{&g_1374,&g_110[0][1][4],&g_110[0][4][1],&g_255.f1,(void*)0},{(void*)0,&g_110[0][1][4],&g_816,(void*)0,(void*)0},{&g_816,&g_255.f1,&g_1296[(g_312 + 6)].f1,&g_110[0][1][4],(void*)0},{(void*)0,&g_1296[4].f1,(void*)0,&g_110[0][1][4],&g_6.f1},{&g_1374,&g_255.f1,(void*)0,&g_255.f1,&g_1374},{&g_6.f1,&g_110[0][1][4],(void*)0,&g_1296[4].f1,(void*)0}},{{(void*)0,&g_110[0][1][4],&g_1296[(g_312 + 6)].f1,&g_255.f1,&g_816},{(void*)0,(void*)0,&g_816,&g_110[0][1][4],(void*)0},{(void*)0,&g_255.f1,&g_110[0][4][1],&g_1374,(void*)0},{&g_816,(void*)0,(void*)0,&g_1296[(g_312 + 6)].f1,&g_6.f1},{&g_1296[4].f1,&g_110[0][2][1],&g_6.f1,&g_110[0][2][1],&g_1296[4].f1},{&g_6.f1,&g_1296[(g_312 + 6)].f1,(void*)0,(void*)0,&g_816},{(void*)0,&g_1374,(void*)0,&g_110[0][2][1],&g_110[0][3][5]}},{{&g_816,&g_110[0][1][4],&g_1296[(g_312 + 6)].f1,&g_1296[(g_312 + 6)].f1,&g_816},{&g_1296[(g_312 + 6)].f1,&g_110[0][2][1],&g_816,&g_1374,&g_1296[4].f1},{&g_816,&g_816,(void*)0,&g_110[0][1][4],&g_6.f1},{(void*)0,&g_110[0][2][1],(void*)0,&g_110[0][2][1],(void*)0},{&g_6.f1,&g_110[0][1][4],(void*)0,&g_816,&g_816},{&g_1296[4].f1,&g_1374,&g_816,&g_110[0][2][1],&g_1296[(g_312 + 6)].f1},{&g_816,&g_1296[(g_312 + 6)].f1,&g_1296[(g_312 + 6)].f1,&g_110[0][1][4],&g_816}},{{&g_110[0][3][5],&g_110[0][2][1],(void*)0,&g_1374,(void*)0},{&g_816,(void*)0,(void*)0,&g_1296[(g_312 + 6)].f1,&g_6.f1},{&g_1296[4].f1,&g_110[0][2][1],&g_6.f1,&g_110[0][2][1],&g_1296[4].f1},{&g_6.f1,&g_1296[(g_312 + 6)].f1,(void*)0,(void*)0,&g_816},{(void*)0,&g_1374,(void*)0,&g_110[0][2][1],&g_110[0][3][5]},{&g_816,&g_110[0][1][4],&g_1296[(g_312 + 6)].f1,&g_1296[(g_312 + 6)].f1,&g_816},{&g_1296[(g_312 + 6)].f1,&g_110[0][2][1],&g_816,&g_1374,&g_1296[4].f1}},{{&g_816,&g_816,(void*)0,&g_110[0][1][4],(void*)0},{&g_255.f1,&g_255.f1,&g_6.f1,&g_255.f1,&g_255.f1},{(void*)0,&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],&g_1296[4].f1},{&g_1374,&g_110[0][1][4],&g_110[0][1][4],&g_255.f1,(void*)0},{&g_1296[4].f1,&g_6.f1,&g_1296[4].f1,&g_110[0][1][4],&g_1296[4].f1},{&g_6.f1,&g_255.f1,(void*)0,&g_110[0][1][4],&g_255.f1},{&g_1296[4].f1,(void*)0,&g_110[0][1][4],&g_6.f1,(void*)0}},{{&g_1374,&g_255.f1,&g_110[0][1][4],&g_255.f1,&g_1374},{(void*)0,&g_6.f1,&g_110[0][1][4],(void*)0,&g_1296[4].f1},{&g_255.f1,&g_110[0][1][4],(void*)0,&g_255.f1,&g_6.f1},{&g_1296[4].f1,&g_110[0][1][4],&g_1296[4].f1,&g_6.f1,&g_1296[4].f1},{(void*)0,&g_255.f1,&g_110[0][1][4],&g_110[0][1][4],&g_1374},{&g_1296[4].f1,&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],(void*)0},{&g_255.f1,&g_255.f1,&g_6.f1,&g_255.f1,&g_255.f1}}};
                    int i, j, k;
                    for (g_1293 = 0; (g_1293 <= 3); g_1293 += 1)
                    {
                        (*g_90) = (void*)0;

                        ;
                    }
                    (*l_1558) = ((**g_89) = &g_293);

                    ;
                    (*g_1002) = (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((g_971[(g_312 + 3)][(g_816 + 3)] = (func_37((g_669[(g_816 + 1)][(g_305 + 5)][g_816] && (safe_mod_func_int32_t_s_s((g_971[(g_305 + 2)][(g_312 + 5)] <= (g_971[(g_816 + 5)][g_816] > (l_1569[0][0][1] = func_37((0xB884L == ((*g_127) = 0L)), ((l_1565 , (+((l_1566 , (g_1296[(g_312 + 6)] , l_1566)) , (***g_89)))) ^ l_1567))))), l_1570))), l_1571) <= l_1570)), l_1570)) , l_1569[3][1][0]) < l_1570) , l_1567), l_1572));
                }
                (*g_90) = &l_1570;

                ;
            }


            (*g_980) = l_1573;
            (*l_1577) = ((*g_90) = l_1575);

            ;
            ;
            if (l_1578)
                break;
            for (g_468 = 0; (g_468 <= 3); g_468 += 1)
            {
                return l_1579;
            }
        }
    }
    return (*g_980);
}







static struct S0 * func_10(unsigned p_11, struct S0 * p_12, struct S0 * p_13)
{
    unsigned *l_1301 = &g_669[3][5][3];
    int l_1328[5];
    char ***l_1355[2];
    unsigned short l_1388 = 0UL;
    short l_1399[7] = {(-8L),0x931EL,(-8L),(-8L),0x931EL,(-8L),(-8L)};
    unsigned short *l_1400 = (void*)0;
    unsigned short *l_1401 = &g_312;
    short l_1402 = 1L;
    int ****l_1422 = &g_89;
    int ****l_1435 = (void*)0;
    char ****l_1517[7];
    unsigned char *l_1518 = (void*)0;
    unsigned char *l_1519 = &g_1483;
    struct S0 *l_1526 = &g_6;
    char l_1533 = 0xC5L;
    unsigned short l_1534 = 0x9ACCL;
    char l_1549 = 0x72L;
    unsigned char l_1552[5][1][10] = {{{3UL,3UL,248UL,0x29L,6UL,248UL,6UL,0x29L,248UL,3UL}},{{6UL,9UL,0x5FL,6UL,0x38L,0x38L,6UL,0x5FL,9UL,6UL}},{{0x5FL,6UL,0x5FL,9UL,6UL,9UL,0x5FL,6UL,0x38L,0x38L}},{{0x29L,3UL,0UL,6UL,6UL,0UL,3UL,0x29L,0UL,0x29L}},{{6UL,0x5FL,9UL,6UL,9UL,0x5FL,6UL,0x38L,0x38L,6UL}}};
    char **l_1554 = &g_574[1];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1328[i] = 4L;
    for (i = 0; i < 2; i++)
        l_1355[i] = &g_573[3];
    for (i = 0; i < 7; i++)
        l_1517[i] = &g_337;
    if (((void*)0 == &g_666))
    {
        unsigned *l_1302 = &g_669[4][8][1];
        int *l_1319 = &g_293;
        struct S0 **l_1330 = (void*)0;
        int l_1335 = 1L;
        unsigned short *l_1354[5][2][7] = {{{&g_1110,(void*)0,&g_1110,&g_971[7][4],&g_971[2][3],&g_1110,(void*)0},{&g_1110,&g_305,&g_51,&g_971[5][5],&g_305,&g_305,&g_305}},{{(void*)0,&g_971[7][4],&g_971[7][4],(void*)0,(void*)0,&g_1110,&g_971[2][3]},{&g_971[4][1],&g_971[8][0],&g_971[7][4],(void*)0,&g_1110,&g_971[4][1],&g_971[4][1]}},{{&g_51,&g_971[2][3],&g_305,&g_971[2][3],&g_51,&g_971[7][4],&g_971[2][3]},{&g_305,&g_305,&g_1110,&g_1110,&g_971[7][4],&g_1110,&g_305}},{{&g_971[7][4],(void*)0,&g_305,&g_305,(void*)0,&g_971[7][4],(void*)0},{&g_305,&g_1110,&g_305,&g_305,&g_305,&g_312,&g_1110}},{{&g_51,&g_971[1][0],&g_971[7][4],&g_1050,&g_971[7][4],&g_971[1][0],&g_51},{&g_971[4][1],&g_1110,(void*)0,&g_971[7][4],&g_305,&g_51,&g_312}}};
        int l_1395[9][9][3] = {{{1L,0L,0xA8B57B49L},{0x18B537CCL,0x7979CDA9L,0xFBBC0654L},{2L,0x9D92C96AL,0xEE1E5064L},{0x67747487L,0x18B537CCL,0xFBBC0654L},{(-1L),1L,0xA8B57B49L},{0x39BFCFA1L,0x8A45D5D5L,0x74D317C3L},{(-1L),(-3L),0L},{0xE1D40E10L,(-1L),0xA1FC860FL},{0x3CE01E4BL,(-1L),1L}},{{0x74D317C3L,0x37637040L,0x0B160AE6L},{0x59A35AA9L,(-10L),(-1L)},{0L,0xC7C246ECL,0L},{(-6L),0L,(-7L)},{0xDE3F155AL,(-1L),0x6358F87DL},{(-1L),0x653DBA44L,0L},{0x6358F87DL,0x39BFCFA1L,0x7B607743L},{0x653DBA44L,1L,1L},{0x326C70D9L,0x95837D40L,(-8L)}},{{1L,(-1L),(-1L)},{0x3DA0150FL,3L,0x39BFCFA1L},{0xA95049C2L,0x4BF82A0DL,0xAA0A6A25L},{0L,0L,0xC7C246ECL},{0xD9F725E4L,0xA8B57B49L,4L},{(-8L),0L,0x67747487L},{0xE9807BD8L,0x4BF82A0DL,1L},{(-1L),3L,0x8A45D5D5L},{0x2498D3DFL,(-1L),0L}},{{(-4L),0x95837D40L,(-1L)},{8L,1L,1L},{0xF5E6C732L,0x39BFCFA1L,(-7L)},{0x4BF82A0DL,0x653DBA44L,(-9L)},{(-8L),(-4L),0L},{1L,0x50B1E54BL,1L},{0x4FAE2C26L,0x18B537CCL,(-7L)},{0x9D92C96AL,0xF71AD75DL,1L},{(-1L),0xCE490722L,0x4F7875DAL}},{{(-1L),1L,(-1L)},{0x18B537CCL,0xDE3F155AL,0x0B160AE6L},{0x2498D3DFL,0xD9F725E4L,0x2498D3DFL},{1L,0L,0x1CE3163DL},{0x50B1E54BL,(-8L),1L},{0xD5650D9FL,0x82EC8A53L,0L},{0L,0xE06A31ECL,0xE9807BD8L},{0xD5650D9FL,(-1L),0xF5E6C732L},{0x50B1E54BL,(-1L),0xD9BDD3B8L}},{{1L,0xB1C136FCL,(-1L)},{0x2498D3DFL,0xA95049C2L,(-3L)},{0x18B537CCL,6L,(-10L)},{(-1L),1L,(-1L)},{(-1L),0x95837D40L,(-4L)},{0x9D92C96AL,1L,(-3L)},{0x4FAE2C26L,(-10L),1L},{1L,(-1L),0L},{(-8L),0xA1FC860FL,0x74D317C3L}},{{1L,0xAA0A6A25L,0xA95049C2L},{0xC3ED888CL,(-1L),0xFC134791L},{(-1L),0x131B08A0L,0xAA0A6A25L},{0L,0x39BFCFA1L,1L},{0x83F5D453L,0x83F5D453L,(-6L)},{0x3DA0150FL,1L,0x4FAE2C26L},{4L,1L,(-1L)},{(-1L),1L,0x5B4501C8L},{1L,1L,4L}},{{(-1L),0xB4B971BBL,(-5L)},{0x4BF82A0DL,1L,(-1L)},{0x39BFCFA1L,0xB44722B9L,(-4L)},{(-7L),(-3L),(-1L)},{0x4F7875DAL,0xC3ED888CL,0L},{(-1L),(-1L),0xA8B57B49L},{0x326C70D9L,1L,0L},{(-6L),(-9L),1L},{0x18B537CCL,0xCE490722L,0x37637040L}},{{0xE9807BD8L,1L,0x3CE01E4BL},{3L,(-10L),0xFC134791L},{0x3CE01E4BL,0x4BF82A0DL,0x83F5D453L},{(-10L),1L,0xF5E6C732L},{0x9407AD57L,0x131B08A0L,0x59A35AA9L},{(-3L),0L,0L},{0xA95049C2L,1L,0x4BF82A0DL},{0x4FAE2C26L,0L,6L},{(-3L),1L,(-9L)}}};
        int i, j, k;
        for (g_468 = 0; (g_468 <= 1); g_468 += 1)
        {
            unsigned *l_1298[7][7] = {{(void*)0,&g_50,&g_256,&g_50,(void*)0,&g_50,&g_256},{&g_256,&g_50,&g_669[3][4][3],&g_256,(void*)0,&g_50,(void*)0},{&g_50,&g_669[4][8][1],(void*)0,&g_669[4][1][2],&g_256,&g_256,&g_669[4][1][2]},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_669[4][8][1],&g_669[4][1][2]},{(void*)0,&g_53,&g_50,&g_50,&g_669[4][1][2],&g_256,(void*)0},{&g_50,&g_256,&g_669[4][8][1],&g_53,&g_53,&g_256,&g_50},{(void*)0,&g_669[3][4][3],&g_53,&g_256,&g_50,&g_669[4][8][1],(void*)0}};
            unsigned **l_1297 = &l_1298[6][0];
            unsigned *l_1300 = &g_256;
            unsigned **l_1299[6] = {&l_1300,&l_1300,&l_1300,&l_1300,&l_1300,&l_1300};
            int l_1303 = 0x4E71DDDFL;
            unsigned l_1304 = 0xE1F8D3AEL;
            struct S0 *l_1316 = &g_6;
            unsigned *l_1357 = &g_57;
            unsigned **l_1356 = &l_1357;
            unsigned short l_1394 = 5UL;
            int i, j;
            if ((((l_1301 = ((*l_1297) = (void*)0)) != l_1302) & l_1303))
            {
                l_1304 = p_11;
            }
            else
            {
                unsigned l_1313 = 4294967295UL;
                unsigned short *l_1314 = (void*)0;
                unsigned short *l_1315 = &g_1110;
                (*g_1002) = 0xE8F22C32L;
                if (p_11)
                    continue;
                (*g_90) = l_1302;

                ;
                (*g_45) = (safe_sub_func_int16_t_s_s(p_11, (safe_rshift_func_uint8_t_u_u(((l_1304 >= ((((((*l_1315) = (((safe_add_func_int16_t_s_s(((!(safe_sub_func_uint32_t_u_u(func_37(p_11, p_11), (((0L > p_11) , 0UL) , (((l_1313 >= p_11) | 0xC788B084L) > (***g_89)))))) , (*g_127)), l_1313)) , l_1304) <= 0x16L)) || g_57) >= 1UL) , p_11) , 0x07L)) < 0x9AL), l_1313))));
            }

            ;
            l_1319 = &l_1303;

            ;
            for (g_814 = 0; (g_814 <= 1); g_814 += 1)
            {
                int *l_1323 = &l_1303;
                char **l_1327 = &g_574[2];
            }
            for (g_128 = 1; (g_128 >= 0); g_128 -= 1)
            {
                int l_1367 = 0xC17D4977L;
                struct S0 *l_1375 = &g_1296[5];
                int *l_1393 = &l_1328[4];
                if (p_11)
                    break;
                if (p_11)
                    break;
                (*l_1319) = ((248UL != p_11) , (safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((*l_1319), (safe_rshift_func_uint16_t_u_u(((!(0UL <= l_1304)) | ((safe_rshift_func_uint8_t_u_u(255UL, (l_1367 & (safe_lshift_func_uint16_t_u_u((func_37((+((safe_mod_func_uint32_t_u_u(func_37(((safe_lshift_func_int16_t_s_s(func_37(g_6.f0, ((((p_11 != l_1367) != p_11) , 0x9DB63785L) , l_1367)), 9)) >= 0x6A0CL), p_11), p_11)) == 0x566BL)), g_1374) | l_1367), 9))))) == p_11)), l_1303)))) , 0xB2L), l_1367)));
                for (l_1335 = 1; (l_1335 >= 0); l_1335 -= 1)
                {
                    int l_1377 = 1L;
                    for (g_256 = 0; (g_256 <= 1); g_256 += 1)
                    {
                        int *l_1376 = &l_1335;
                        int **l_1391 = (void*)0;
                        int **l_1392 = &g_783[(g_256 + 1)][l_1335][g_256];
                        int i, j, k;
                        p_12 = l_1375;

                        ;
                        g_783[l_1335][(l_1335 + 1)][l_1335] = l_1376;
                        l_1328[1] = (l_1377 , (func_37(p_11, (safe_mul_func_uint8_t_u_u(5UL, ((*l_1316) , (l_1395[6][4][0] = ((((l_1377 && func_37((safe_lshift_func_uint16_t_u_u(((((((safe_add_func_int32_t_s_s((((p_11 , &l_1303) == (l_1393 = ((((((*l_1319) = ((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_1388, ((*g_1002) = ((safe_lshift_func_uint16_t_u_s((((0x3C4B0A63L != l_1328[1]) ^ 0xDD36L) && 1UL), p_11)) , l_1377)))), 255UL)) , p_11)) ^ l_1328[0]) && l_1303) , p_11) , (void*)0))) <= g_110[0][1][4]), 0L)) == l_1304) == l_1328[1]) | l_1394) < l_1304) < 0UL), p_11)), p_11)) != p_11) ^ 0xB5L) == l_1377)))))) >= l_1367));
                    }
                    (*g_90) = &l_1335;

                    ;
                }

                ;
            }
        }



        ;
        ;

    }
    else
    {
        struct S0 **l_1396 = &g_1295;
        (**g_89) = &l_1328[3];

        ;
        (**l_1396) = (*p_13);
    }


    ;
    ;
    l_1328[3] = ((l_1328[4] & (((p_11 < 0x98D3L) < p_11) || ((*l_1401) = (l_1328[1] > (((((safe_div_func_int16_t_s_s(((l_1328[1] || p_11) <= l_1328[1]), l_1388)) , 5UL) && l_1399[0]) , g_153) & l_1399[5]))))) & l_1402);
    for (l_1388 = 0; (l_1388 <= 1); l_1388 += 1)
    {
        int *l_1403[7][10][3] = {{{&l_1328[0],&g_293,(void*)0},{&g_46,&l_1328[1],&g_46},{(void*)0,(void*)0,&l_1328[1]},{&l_1328[0],&g_293,&l_1328[1]},{&g_46,&l_1328[1],(void*)0},{(void*)0,&g_46,(void*)0},{&g_46,(void*)0,(void*)0},{&l_1328[0],(void*)0,(void*)0},{(void*)0,&g_293,&l_1328[2]},{&g_46,(void*)0,&l_1328[1]}},{{&l_1328[0],&g_46,&g_293},{(void*)0,&g_293,&l_1328[4]},{&g_46,&g_293,(void*)0},{&g_46,&g_46,&l_1328[4]},{(void*)0,(void*)0,&g_293},{&g_293,&g_293,&g_46},{&l_1328[4],(void*)0,&g_293},{&l_1328[1],(void*)0,&g_293},{(void*)0,&g_46,(void*)0},{&l_1328[2],&l_1328[1],&g_293}},{{&l_1328[4],&g_293,&g_293},{(void*)0,(void*)0,&g_46},{&g_46,&l_1328[1],&g_293},{&g_293,&g_293,&l_1328[4]},{(void*)0,&l_1328[4],(void*)0},{&l_1328[1],&l_1328[1],&l_1328[4]},{&l_1328[1],&l_1328[1],&g_46},{&l_1328[0],(void*)0,&l_1328[0]},{&g_46,&g_293,&g_293},{(void*)0,&g_293,&l_1328[1]}},{{&l_1328[4],&l_1328[2],&g_293},{&l_1328[2],&g_293,&l_1328[1]},{&g_293,&g_46,&g_293},{&g_293,&g_293,(void*)0},{(void*)0,&l_1328[2],(void*)0},{(void*)0,&g_293,&g_46},{&g_293,&g_293,&l_1328[4]},{&l_1328[1],(void*)0,&g_293},{(void*)0,&g_46,&g_46},{&l_1328[4],(void*)0,&g_46}},{{&g_46,(void*)0,&g_293},{&g_293,(void*)0,&l_1328[4]},{&g_46,(void*)0,&g_46},{&l_1328[1],(void*)0,(void*)0},{&g_46,&g_46,(void*)0},{&l_1328[1],(void*)0,&g_293},{(void*)0,(void*)0,&l_1328[1]},{&l_1328[1],&g_46,&g_293},{&g_46,&g_46,&l_1328[1]},{&l_1328[1],&g_293,&g_293}},{{&g_46,&l_1328[1],&l_1328[0]},{&g_293,&l_1328[4],&g_46},{&g_46,&g_293,&l_1328[1]},{&l_1328[4],&g_293,&l_1328[1]},{(void*)0,&l_1328[4],(void*)0},{&l_1328[1],&l_1328[1],&g_46},{&g_293,&g_293,(void*)0},{(void*)0,&g_46,&g_293},{(void*)0,(void*)0,&l_1328[4]},{(void*)0,(void*)0,(void*)0}},{{&g_293,(void*)0,&l_1328[4]},{&l_1328[0],&g_46,&g_46},{&g_293,(void*)0,&g_46},{&g_46,&l_1328[4],(void*)0},{&g_46,&l_1328[4],&g_293},{&g_46,&g_293,(void*)0},{(void*)0,&g_293,(void*)0},{(void*)0,&g_46,&g_46},{&g_46,(void*)0,&g_293},{&g_46,&g_293,&g_293}}};
        char **l_1443 = &g_574[2];
        unsigned char l_1509 = 0x0AL;
        int l_1511 = 0x38E8B865L;
        int i, j, k;
        (**g_89) = l_1403[3][1][2];

        ;
        for (g_293 = 1; (g_293 >= 0); g_293 -= 1)
        {
            unsigned char l_1404 = 0xEDL;
            int l_1415 = 0x1B6B13AAL;
            int l_1434[7] = {0x63A602A7L,3L,3L,0x63A602A7L,3L,3L,0x63A602A7L};
            unsigned short l_1436[1];
            unsigned l_1457 = 0x6950B25FL;
            int i;
            for (i = 0; i < 1; i++)
                l_1436[i] = 0xAF83L;
            l_1404 = l_1388;
            if (l_1404)
                break;
            for (g_312 = 0; (g_312 <= 1); g_312 += 1)
            {
                int *****l_1423 = &l_1422;
                unsigned *l_1437 = (void*)0;
                unsigned *l_1438 = &g_256;
                int l_1439 = 0L;
                struct S0 l_1447 = {6927,3L,1160};
                short l_1512[8][10] = {{0x2F4FL,0x3359L,0x72ECL,0x72ECL,0x3359L,0x2F4FL,3L,0x3359L,3L,0x2F4FL},{0x5036L,0x3359L,0xA49CL,0x3359L,0x5036L,0xA49CL,1L,1L,0xA49CL,0x5036L},{0x5036L,3L,3L,0x5036L,0x72ECL,0x2F4FL,0x5036L,0x2F4FL,0x72ECL,0x5036L},{0x2F4FL,0x5036L,0x2F4FL,0x72ECL,0x5036L,3L,3L,0x5036L,0x72ECL,0x2F4FL},{1L,1L,0xA49CL,0x5036L,0x3359L,0xA49CL,0x3359L,0x5036L,0xA49CL,1L},{0x3359L,3L,0x2F4FL,0x3359L,0xE3DAL,0xE3DAL,0x2F4FL,0xA49CL,0x5AB7L,0x2F4FL},{0xA49CL,3L,0x5AB7L,0xE3DAL,3L,0xE3DAL,0x5AB7L,3L,0xA49CL,0xA49CL},{0x2F4FL,0x72ECL,0x5036L,3L,3L,0x5036L,0x72ECL,0x2F4FL,0x5036L,0x2F4FL}};
                int i, j, k;
                if ((safe_div_func_uint8_t_u_u(255UL, (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((*g_127) = ((g_1050 = func_37((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_1415 = (*g_127)), ((safe_mod_func_uint16_t_u_u(func_37((safe_div_func_int32_t_s_s((func_37(((*l_1438) = func_37((0x36A2L ^ (safe_sub_func_uint8_t_u_u((((((*l_1423) = l_1422) == (p_11 , ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((g_174 != (void*)0), 12)), (((safe_add_func_uint8_t_u_u((l_1434[3] = (safe_mul_func_uint8_t_u_u(247UL, l_1328[2]))), l_1399[0])) == (-1L)) & p_11))), 255UL)) , l_1435))) == l_1404) ^ 0x13CA27D7L), p_11))), l_1436[0])), p_11) <= l_1439), 0xA298A60CL)), p_11), (*g_127))) , 7L))), (-7L))), g_128)) >= g_666)) , p_11), 0x30L)), p_11)))))
                {
                    char **l_1442 = &g_574[2];
                    int l_1444 = 0xA7C08A9BL;
                    unsigned char *l_1445[5][9] = {{(void*)0,&g_250,&l_1404,&g_250,(void*)0,(void*)0,&g_250,&g_250,(void*)0},{&g_1293,&g_250,(void*)0,(void*)0,&l_1404,&g_1293,&g_1293,&g_1293,&l_1404},{&g_250,&l_1404,&l_1404,&g_250,&g_1293,(void*)0,&l_1404,&g_1293,&g_250},{&g_250,&g_250,(void*)0,(void*)0,&g_250,&g_1293,&g_1293,&g_250,(void*)0},{&g_1293,&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0,&g_1293,(void*)0}};
                    short l_1446 = (-4L);
                    int i, j, k;
                    l_1434[3] = (safe_mod_func_uint8_t_u_u((g_250 = (l_1446 = ((l_1442 == l_1443) | l_1444))), p_11));
                    l_1447 = (*p_13);
                    if (p_11)
                        continue;
                    g_783[(g_312 + 2)][(g_293 + 3)][g_312] = (*g_90);


                }
                else
                {
                    int l_1456 = 0L;
                    int *l_1462 = (void*)0;
                    struct S0 *l_1472 = &g_6;
                    l_1447.f2 = (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_11, l_1456)) <= 0x58571882L), ((l_1434[5] = ((g_255.f2 ^ 0x33L) != l_1457)) && func_37(g_1374, l_1415)))) != p_11) < 0x40035C90L) | g_293) && 0x221BL), 252UL)), 1));
                    for (g_1293 = 0; (g_1293 <= 1); g_1293 += 1)
                    {
                        int i;
                        l_1439 = l_1328[(g_1293 + 1)];
                        if ((*g_1002))
                            break;
                        (**g_89) = (void*)0;

                        ;
                        (*g_90) = (void*)0;
                    }
                    for (g_1110 = 6; (g_1110 < 50); g_1110 = safe_add_func_uint8_t_u_u(g_1110, 4))
                    {
                        if (l_1456)
                            break;
                    }
                    if (p_11)
                    {
                        unsigned char l_1460 = 0x23L;
                        struct S0 **l_1461 = &g_980;
                        l_1460 = p_11;
                        (*l_1461) = p_13;

                        ;
                        l_1462 = (*g_90);

                        ;
                        (****l_1423) = (void*)0;

                        ;
                    }
                    else
                    {
                        struct S0 **l_1463 = (void*)0;
                        int l_1464 = 6L;
                        int l_1469[3][10][3] = {{{0xDF06D0F5L,(-1L),0xDF06D0F5L},{(-5L),0xA0B8A969L,0x2B7F2D17L},{0L,1L,0xF57F3377L},{1L,0x8AB63CF5L,4L},{0xED273470L,0xED273470L,5L},{1L,(-5L),0x8AB63CF5L},{0L,5L,0L},{(-5L),0x598291E8L,0x598291E8L},{0xED273470L,1L,(-1L)},{(-5L),4L,0x777599E3L}},{{5L,0x0AFE77F2L,0L},{0x598291E8L,1L,0x598291E8L},{0L,0x0AFE77F2L,5L},{0x777599E3L,4L,(-5L)},{(-1L),1L,0xED273470L},{0xBDF4011EL,0xBDF4011EL,0x8AB63CF5L},{(-1L),0L,1L},{0x777599E3L,0x8AB63CF5L,0xA0B8A969L},{0L,(-1L),(-1L)},{0x598291E8L,0x777599E3L,0xA0B8A969L}},{{5L,0xDF06D0F5L,1L},{(-5L),0xF286BC68L,0x8AB63CF5L},{0xED273470L,0L,0xED273470L},{0x8AB63CF5L,0xF286BC68L,(-5L)},{1L,0xDF06D0F5L,5L},{0xA0B8A969L,0x777599E3L,0x598291E8L},{(-1L),(-1L),0L},{0xA0B8A969L,0x8AB63CF5L,0x777599E3L},{1L,0L,(-1L)},{0x8AB63CF5L,0xBDF4011EL,0xBDF4011EL}}};
                        int l_1470 = (-1L);
                        struct S0 **l_1471[4] = {&g_980,&g_980,&g_980,&g_980};
                        int i, j, k;
                        p_12 = p_12;
                        l_1470 = (g_50 ^ (((func_37(l_1464, (1UL == ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_11, 3)), l_1464)) | func_37((p_11 , p_11), (l_1469[0][7][2] = p_11))))) , 0x8529L) , (*g_127)) & (-3L)));
                        l_1472 = (g_5 = p_13);

                        ;
                        ;
                        (**g_89) = (****l_1423);
                    }


                    ;
                    ;
                    ;
                }



                ;
                for (g_1110 = 0; (g_1110 <= 6); g_1110 += 1)
                {
                    int l_1484 = 1L;
                    unsigned l_1485 = 0xFA98B10EL;
                    short **l_1486 = (void*)0;
                    short ***l_1487 = &l_1486;
                    unsigned *l_1499[4] = {&g_153,&g_153,&g_153,&g_153};
                    unsigned **l_1498 = &l_1499[0];
                    struct S0 l_1508 = {10111,-4L,-1035};
                    int i;
                    l_1328[1] = (safe_rshift_func_int16_t_s_u(((l_1434[g_293] >= g_57) , ((l_1485 = ((l_1434[4] = ((0x95ECL > 0x2EF7L) >= (safe_mul_func_uint8_t_u_u((l_1436[0] , (((safe_add_func_uint32_t_u_u(p_11, l_1434[3])) > ((safe_div_func_int8_t_s_s(l_1436[0], func_37(((safe_div_func_uint32_t_u_u(8UL, p_11)) || g_312), p_11))) != p_11)) & g_1483)), 1L)))) < l_1484)) | g_666)), l_1484));
                    if (l_1415)
                        break;
                    (*l_1487) = l_1486;
                    if (((void*)0 == g_1488[0]))
                    {
                        struct S0 **l_1490 = &g_5;
                        (*g_90) = &l_1434[g_293];

                        ;
                        (**g_90) = p_11;
                        (**g_90) = (**g_90);
                        (*l_1490) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned char *l_1493 = (void*)0;
                        unsigned ***l_1500 = &l_1498;
                        int l_1501[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                        int l_1510 = (-2L);
                        int i;
                        l_1511 = (l_1484 = ((safe_mod_func_uint8_t_u_u(246UL, (g_1293 = l_1434[6]))) == (((safe_div_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((l_1501[4] = (p_11 ^ (((*l_1500) = ((*p_13) , l_1498)) == (void*)0))) == func_37(((safe_div_func_int16_t_s_s(((*g_127) = (safe_div_func_uint8_t_u_u((((0x84E08049L >= (safe_mul_func_int8_t_s_s((((l_1508 , p_11) >= p_11) , 0xFCL), p_11))) , 4L) == l_1436[0]), 0xEDL))), l_1509)) , 7UL), l_1434[g_293])), g_293)) <= l_1510), 0x9C34D183L)) < p_11) == p_11)));
                        (*g_980) = (*p_13);
                        (***l_1422) = (*g_90);
                    }
                }


                ;
                if (l_1512[5][6])
                {
                    return &g_1296[7];




                }
                else
                {
                    (****l_1423) = (**g_89);
                    return &g_255;




                }
            }
        }
    }
    if ((safe_sub_func_uint8_t_u_u((((*g_1002) = (l_1399[3] || (safe_rshift_func_uint16_t_u_s((((g_337 = l_1355[1]) == (void*)0) > ((*l_1519) = l_1399[3])), 12)))) , ((*l_1519) = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(func_14(l_1526, (safe_add_func_int8_t_s_s((func_14(l_1526, g_971[7][4], l_1533) && p_11), p_11)), l_1534), p_11)), 1L)), 7)))), 0x71L)))
    {
        struct S0 l_1535 = {458,0x80L,4570};
        unsigned *l_1542 = &g_814;
        unsigned char l_1550 = 2UL;
        unsigned *l_1551 = &g_153;
        char **l_1553 = &g_574[1];
        (**g_89) = &g_293;

        ;
        l_1554 = l_1553;
    }
    else
    {
        int l_1555 = (-8L);
        l_1555 = p_11;
        (*g_1295) = (*p_13);
    }

    ;
    return l_1526;



}







static char func_14(struct S0 * p_15, unsigned short p_16, unsigned p_17)
{
    int l_975 = (-8L);
    struct S0 *l_976[6];
    struct S0 **l_977 = &g_5;
    struct S0 *l_979 = &g_255;
    struct S0 **l_978[1];
    int *l_998 = &g_293;
    unsigned *l_1001 = &g_57;
    unsigned **l_1000 = &l_1001;
    int *l_1076[7][2] = {{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}};
    unsigned char *l_1086 = &g_250;
    unsigned char **l_1085[9] = {&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086};
    unsigned short l_1149 = 0x07E5L;
    unsigned *l_1247 = &g_256;
    unsigned **l_1246 = &l_1247;
    unsigned char *l_1252 = &g_250;
    unsigned *l_1259 = &g_153;
    int i, j;
    for (i = 0; i < 6; i++)
        l_976[i] = &g_6;
    for (i = 0; i < 1; i++)
        l_978[i] = &l_979;
    if ((safe_mul_func_uint16_t_u_u((((*l_977) = ((l_975 && 0xDA0805F5L) , l_976[5])) == (g_980 = p_15)), g_57)))
    {
        int l_981 = 1L;
        int *l_982 = (void*)0;
        int *l_983 = (void*)0;
        int *l_984 = (void*)0;
        int *l_985[2][1][2];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_985[i][j][k] = &g_46;
            }
        }
        l_975 = ((*p_15) , l_981);
    }
    else
    {
        unsigned l_990 = 0UL;
        struct S0 l_991 = {14224,0L,-3809};
        int *l_1022 = &g_293;
        struct S0 ****l_1025[9][6][4] = {{{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0}},{{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0}},{{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367}},{{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0}},{{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0}},{{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367}},{{&g_367,(void*)0,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,&g_367,(void*)0},{&g_367,&g_367,&g_367,(void*)0},{&g_367,&g_367,&g_367,&g_367}}};
        unsigned char **l_1089 = &l_1086;
        struct S0 *l_1102 = &g_255;
        int **l_1106 = &l_1076[3][0];
        unsigned char ***l_1141 = &l_1089;
        char ***l_1184 = &g_573[3];
        int *l_1199[10][10] = {{&g_46,&g_293,&l_975,&g_46,&l_975,&g_293,&g_293,&g_293,&g_293,&l_975},{&g_46,&l_975,&l_975,&g_46,&l_975,&g_46,&g_293,&l_975,&g_46,&l_975},{&g_46,&g_293,&l_975,&g_46,&l_975,&g_46,&l_975,&g_293,&g_46,&l_975},{&g_46,&g_293,&l_975,&g_46,&l_975,&g_293,&g_293,&g_293,&g_293,&l_975},{&g_46,&l_975,&l_975,&g_46,&l_975,&g_46,&g_293,&l_975,&g_46,&l_975},{&g_46,&g_293,&l_975,&g_46,&l_975,&g_46,&l_975,&g_293,&g_46,&l_975},{&g_46,&g_46,&g_46,&l_975,&g_293,&g_293,&g_46,&g_46,&g_293,&g_293},{&l_975,&g_46,&g_46,&l_975,&l_975,&l_975,&g_46,&g_46,&l_975,&g_293},{&l_975,&g_46,&g_46,&l_975,&g_293,&l_975,&g_46,&g_46,&l_975,&l_975},{&l_975,&g_46,&g_46,&l_975,&g_293,&g_293,&g_46,&g_46,&g_293,&g_293}};
        int l_1230[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1230[i] = 0xF7AFB188L;
        for (g_255.f1 = (-5); (g_255.f1 >= (-28)); g_255.f1 = safe_sub_func_int16_t_s_s(g_255.f1, 1))
        {
            unsigned short l_996 = 0xD78BL;
            int l_999 = 0x5B225697L;
            l_975 = (safe_lshift_func_int16_t_s_s(p_16, (+p_17)));
            if (l_990)
            {
                l_991 = ((*p_15) = (*g_5));
                (*l_977) = p_15;
            }
            else
            {
                unsigned short l_997 = 65530UL;
                for (p_17 = (-25); (p_17 >= 53); p_17++)
                {
                    for (l_975 = 0; (l_975 == (-18)); l_975 = safe_sub_func_int32_t_s_s(l_975, 9))
                    {
                        if (l_996)
                            break;
                        (**g_89) = &l_975;

                        ;
                        l_997 = (**g_90);
                        (*g_90) = func_60(p_15, (*g_90), l_998);
                    }


                    return l_999;


                }
                return l_997;
            }
            (*l_998) = p_17;
        }
        (*l_998) = ((void*)0 != l_1000);
        if ((l_991.f2 = p_17))
        {
            char l_1009 = 0x9EL;
            unsigned short *l_1012[10] = {(void*)0,&g_51,(void*)0,&g_51,(void*)0,&g_51,(void*)0,&g_51,(void*)0,&g_51};
            unsigned *l_1013 = &l_990;
            unsigned char *l_1035 = &g_250;
            int *l_1041[5][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
            struct S0 l_1082 = {16375,0x91L,-4226};
            unsigned char l_1100 = 252UL;
            int i, j, k;
            if (((&l_975 == (p_17 , g_1002)) || (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((*l_998), (safe_div_func_uint32_t_u_u(l_1009, (func_37(((*l_1013) = ((safe_add_func_uint16_t_u_u((l_991.f2 = g_293), (*l_998))) > (((*l_1001) = l_991.f1) == (((g_250 != (*l_998)) >= (*l_998)) != g_53)))), p_17) ^ (-3L)))))), p_17))))
            {
                short l_1016[7][10][3] = {{{0x0A8DL,0xC2D5L,0xC885L},{3L,0x7C69L,0x19A7L},{0xF544L,0x0A8DL,0xC885L},{0x0D40L,0xA85BL,(-1L)},{0xF364L,0x6663L,0L},{0x1B7CL,0x92FAL,(-1L)},{(-1L),(-5L),0L},{0L,(-2L),0x24EAL},{0xB9A7L,0L,0xD57BL},{(-1L),(-1L),0L}},{{0L,(-1L),0x542DL},{(-1L),0x0D40L,3L},{0x542DL,(-8L),0x68DEL},{(-2L),0x5D77L,0x5D77L},{0L,3L,0x3B16L},{3L,0x5FE8L,0x5D77L},{0xDD41L,0xB9A7L,1L},{0xBBC6L,0xD031L,(-1L)},{0xC885L,0xB9A7L,0xD57BL},{0x47E3L,0x5FE8L,0x92FAL}},{{(-1L),3L,0x68DEL},{0x975BL,0x8C6AL,0x47E3L},{3L,(-4L),0L},{0L,0x3E0BL,0L},{0xBDB3L,(-3L),(-4L)},{(-1L),0x2C11L,0xEBE8L},{0L,0x6CB2L,0L},{0x19A7L,1L,0x4EDCL},{(-1L),0L,0xFA39L},{0x0348L,0xBBC6L,0x0348L}},{{0x27F1L,1L,0xF544L},{7L,0x92FAL,0L},{(-8L),0xFA39L,0x6CB2L},{1L,0x5D77L,0xBBC6L},{(-8L),(-1L),1L},{7L,0x0A54L,0x0D40L},{0x27F1L,(-5L),0xBDB3L},{0x0348L,3L,(-3L)},{(-1L),0xC5BEL,0xC885L},{0x19A7L,0x3CE2L,0xD031L}},{{0L,0xC2D5L,(-8L)},{(-1L),0x0298L,1L},{0xBDB3L,0L,(-3L)},{0L,0x19A7L,7L},{3L,0x8125L,0xF364L},{0x975BL,0x975BL,7L},{0x92B5L,(-1L),0x6663L},{1L,0L,0x506FL},{0x702CL,0xFA39L,0xF364L},{0x1B7CL,1L,0x506FL}},{{0x542DL,0x8125L,0x6663L},{(-3L),2L,7L},{(-8L),0xC885L,0x68DEL},{(-1L),0x95ACL,0x24EAL},{0xBDB3L,5L,0xC5BEL},{0x0298L,0xBBC6L,0x4EDCL},{(-1L),0x6663L,0L},{1L,0x19A7L,0x8C6AL},{0xC2D5L,0x542DL,0x702CL},{0x8C6AL,0x0D40L,0x2D24L}},{{5L,(-5L),(-5L)},{0x506FL,0xEBE8L,1L},{1L,0xD57BL,0xFA39L},{0L,0x2C11L,0x1B7CL},{0xC885L,0xBDB3L,1L},{0L,0x2C11L,0x3E0BL},{(-10L),0xD57BL,0x8125L},{0x7C69L,0xEBE8L,0x3CE2L},{0xB9A7L,(-5L),(-10L)},{0xEBE8L,0x0D40L,0xD031L}}};
                int *l_1021 = (void*)0;
                struct S0 l_1032 = {9225,0x8CL,700};
                int i, j, k;
                if (((*g_5) , (safe_div_func_int8_t_s_s(((((*g_5) , func_37(l_991.f0, p_17)) < ((p_16 & p_16) >= l_1016[0][8][0])) != ((safe_sub_func_int16_t_s_s((((l_1021 = (((**l_1000) = (safe_mul_func_int8_t_s_s((l_991.f2 = (l_1016[6][0][1] ^ l_1016[0][8][0])), p_17))) , (void*)0)) != l_1022) , 0x261BL), (*l_1022))) != (*g_127))), l_1009))))
                {
                    return l_1009;
                }
                else
                {
                    char *l_1030[7][6] = {{&l_991.f1,&g_110[0][4][2],&g_110[0][4][2],&l_991.f1,&g_110[0][4][2],&g_110[0][4][2]},{&l_991.f1,&g_110[0][4][2],&g_110[0][4][2],&l_991.f1,&g_110[0][4][2],&g_110[0][4][2]},{&l_991.f1,&g_110[0][4][2],&g_110[0][4][2],&l_991.f1,&g_110[0][4][2],&g_110[0][4][2]},{&l_991.f1,&g_110[0][4][2],&g_110[0][4][2],&l_991.f1,&l_1009,&l_1009},{&g_110[0][4][2],&l_1009,&l_1009,&g_110[0][4][2],&l_1009,&l_1009},{&g_110[0][4][2],&l_1009,&l_1009,&g_110[0][4][2],&l_1009,&l_1009},{&g_110[0][4][2],&l_1009,&l_1009,&g_110[0][4][2],&l_1009,&l_1009}};
                    int l_1031[8] = {0xFAA3E185L,0xFAA3E185L,0xFAA3E185L,0xFAA3E185L,0xFAA3E185L,0xFAA3E185L,0xFAA3E185L,0xFAA3E185L};
                    int l_1036 = (-1L);
                    int *l_1039 = &g_46;
                    int i, j;
                    if ((safe_div_func_int16_t_s_s(((p_16 == p_16) && ((*l_1022) = ((void*)0 == l_1025[7][0][3]))), (((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_17, (l_1031[1] = p_16))), (l_1032 , (safe_rshift_func_int16_t_s_u((p_16 && (func_37((((((!((void*)0 == l_1035)) , l_1036) == l_1009) && p_17) & p_17), p_16) | (-1L))), p_16))))) == p_16) || p_16))))
                    {
                        struct S0 *l_1037 = &l_1032;
                        struct S0 *l_1038 = (void*)0;
                        (*g_90) = (l_1039 = l_1013);

                        ;
                        ;
                    }
                    else
                    {
                        int **l_1040 = (void*)0;
                        g_755[1] = ((**g_89) = (l_1021 = (void*)0));

                        ;
                        l_1041[4][0][0] = &l_975;


                        (**g_89) = (void*)0;
                        (*g_1002) = (&p_17 != &g_153);
                    }

                    ;
                    ;

                    for (g_57 = 8; (g_57 < 39); g_57 = safe_add_func_int32_t_s_s(g_57, 5))
                    {
                        char l_1046 = 0x3DL;
                        int l_1049[1][9][1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1049[i][j][k] = (-5L);
                            }
                        }
                        (**g_89) = l_1041[4][0][0];

                        ;
                        if (p_17)
                            continue;
                        (*l_1022) = (((func_37(((*l_1013) = (p_16 , g_312)), ((safe_rshift_func_int8_t_s_s(p_17, 3)) < ((l_1046 = p_16) < func_37(g_293, (((*g_127) = func_37((0x3622FCBAL > func_37(g_50, (safe_mul_func_uint16_t_u_u(0UL, ((*g_127) = p_16))))), (*l_998))) , g_256))))) | l_1049[0][5][0]) && 0xC925L) > p_16);
                    }

                    ;
                }

                ;

                for (g_128 = 0; g_128 < 6; g_128 += 1)
                {
                    l_976[g_128] = &g_6;
                }
            }
            else
            {
                struct S0 **l_1067[10] = {&l_979,&l_979,&l_979,&l_979,&l_979,&l_979,&l_979,&l_979,&l_979,&l_979};
                int l_1068 = (-1L);
                unsigned char l_1098 = 0UL;
                int **l_1104 = (void*)0;
                int ***l_1105[8][2] = {{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104},{&l_1104,&l_1104}};
                int *l_1113 = &l_975;
                int i, j;
                if (func_37(g_1050, func_37((safe_add_func_int32_t_s_s((func_37((((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_16, (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_1067[4] != (void*)0), (*g_1002))), 0xEFL)), 6)) == (((&p_16 == (((&p_15 != &l_979) < p_16) , &g_51)) <= p_17) != 0L)), 0xE4L)), (*g_127))))), (*l_998))) && 255UL) != (*l_1022)), p_16) != 0x5CFDL), p_17)), p_17)))
                {
                    unsigned char l_1077 = 0x4EL;
                    int *l_1079[4][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int i, j, k;
                    (*l_1022) = l_1068;
                    if ((g_680 != &l_1035))
                    {
                        int **l_1073 = (void*)0;
                        int *l_1075 = &g_666;
                        int **l_1074 = &l_1075;
                        l_991.f2 = ((*l_1022) = (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((*l_1074) = l_1041[4][0][0]) != l_1076[0][1]) == l_1077), p_17)), p_17)));

                        ;
                        (**g_89) = &l_1068;

                        ;
                        return p_16;


                    }
                    else
                    {
                        struct S0 *l_1078[5][1][5] = {{{&g_6,&g_255,&g_255,&l_991,&g_255}},{{&g_255,&l_991,&l_991,&g_255,&l_991}},{{&l_991,&l_991,&g_255,&g_255,&g_6}},{{&l_991,&g_255,&g_255,&l_991,&l_991}},{{&l_991,&g_255,&g_6,&g_6,&g_255}}};
                        int i, j, k;
                        (*l_998) = (*g_1002);
                        (*l_977) = l_1078[0][0][2];

                        ;
                    }

                    ;
                    (*g_1002) = func_37(((l_1079[3][2][1] != ((+0L) , l_1041[4][0][0])) ^ func_37((safe_div_func_int16_t_s_s(((g_305 = 0xB930L) != p_16), g_110[0][3][6])), (*l_1022))), p_16);
                    (*g_980) = (*p_15);
                }
                else
                {
                    int l_1099[5] = {0L,0L,0L,0L,0L};
                    int i;
                    (*g_90) = l_1022;

                    ;
                    for (g_250 = 0; (g_250 <= 0); g_250 += 1)
                    {
                        (*g_5) = (*p_15);
                        (*l_979) = (*g_980);
                        (*l_979) = (l_1082 , (*p_15));
                    }
                    for (g_305 = 0; (g_305 <= 3); g_305 += 1)
                    {
                        unsigned char ***l_1087 = (void*)0;
                        unsigned char ***l_1088 = &l_1085[8];
                        int l_1097 = 0x5FC72D60L;
                        struct S0 **l_1101 = &g_980;
                        struct S0 *l_1103 = &g_255;
                        (*l_977) = (((func_37((&l_1035 == g_680), (((((((*l_1001) = (safe_rshift_func_int8_t_s_s((((*p_15) , ((((*l_1088) = l_1085[8]) != (p_16 , l_1089)) != func_37((safe_sub_func_int8_t_s_s(0x0FL, (*l_998))), (func_37((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(func_37(l_1097, g_255.f1), g_255.f2)), l_1098)) < p_17))), p_17) < (*g_127))))) & p_17), l_1099[1]))) , p_16) < l_1099[4]) || p_16) >= l_1100) ^ g_126)) & 4294967287UL) , l_1097) , p_15);
                        l_1101 = &l_976[2];

                        ;
                        if (p_16)
                            break;
                        l_1103 = l_1102;
                    }
                    (**g_89) = l_1022;
                }

                ;
                l_1106 = l_1104;

                ;
                for (g_57 = 0; (g_57 != 7); g_57 = safe_add_func_uint32_t_u_u(g_57, 2))
                {
                    int *l_1112 = &l_1068;
                    if (p_17)
                    {
                        int *l_1109[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1109[i] = &g_293;
                        l_1109[1] = l_1109[3];
                        (*l_1022) = p_16;
                    }
                    else
                    {
                        unsigned l_1111 = 3UL;
                        (*l_1022) = func_37(p_16, p_16);
                        l_1111 = ((*l_1022) = g_1110);
                        (**g_89) = &l_1068;

                        ;
                    }
                }


            }

            ;


            ;
            (*g_90) = &l_975;

            ;
            (*l_979) = ((*p_15) = (*g_980));
        }
        else
        {
            struct S0 l_1127 = {12405,0x95L,-572};
            int *l_1130 = &g_46;
            struct S0 *l_1167 = &g_6;
            int ***l_1169 = &l_1106;
            for (g_1110 = (-17); (g_1110 != 39); g_1110 = safe_add_func_uint32_t_u_u(g_1110, 9))
            {
                unsigned l_1133 = 4294967295UL;
                char l_1150 = 0x4FL;
                struct S0 *l_1166 = &l_1127;
            }
            (*l_998) = p_17;
            (*l_1169) = (void*)0;

            ;
        }

        ;

        ;
        for (l_1149 = 0; (l_1149 <= 1); l_1149 += 1)
        {
            int l_1170[1][1][9] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
            short l_1188 = 0x2474L;
            short **l_1211 = &g_127;
            int *l_1218 = &l_1170[0][0][1];
            int l_1241 = 0xA16689E4L;
            struct S0 *l_1248 = (void*)0;
            int i, j, k;
            (*l_1022) = 0xF343DC5EL;
            l_1170[0][0][1] = 0L;
        }
    }


    ;
    (*l_998) = ((safe_sub_func_uint16_t_u_u(((((1L >= (*l_998)) , &g_250) == l_1252) != ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_37((g_53 = ((p_17 | (((*p_15) , &l_975) != &l_975)) > (*l_998))), g_57), 0x4D02L)), (*l_998))) < p_17)), 0x0FDEL)) & p_16);
    (*p_15) = (*g_980);
    if ((safe_add_func_int16_t_s_s((((**l_1000) = 0x2CA31F10L) | ((*l_1259) = (*l_998))), g_6.f0)))
    {
        (*g_90) = &l_975;

        ;
        (*g_90) = &l_975;
    }
    else
    {
        int *l_1264 = &g_293;
        struct S0 l_1283 = {15157,0x57L,-5678};
        for (p_17 = 0; (p_17 < 38); p_17 = safe_add_func_int32_t_s_s(p_17, 5))
        {
            short l_1267 = 0xC854L;
            unsigned ***l_1279[3];
            int l_1281 = 0x951E14E1L;
            int i;
            for (i = 0; i < 3; i++)
                l_1279[i] = (void*)0;
            for (g_293 = 0; (g_293 <= 8); g_293 += 1)
            {
                unsigned char l_1266[5];
                struct S0 l_1282 = {11776,-9L,-5404};
                int *l_1284 = &l_1281;
                int i;
                for (i = 0; i < 5; i++)
                    l_1266[i] = 0UL;
                if (p_16)
                {
                    struct S0 l_1265 = {13676,0x6BL,-2824};
                    g_783[8][9][1] = ((*g_90) = ((safe_div_func_uint16_t_u_u(0xD388L, g_971[7][4])) , l_1264));

                    ;
                    (*g_980) = l_1265;
                    if ((*l_998))
                        continue;
                    l_1266[2] = p_16;
                }
                else
                {
                    int l_1270 = 1L;
                    int l_1275[10][8][3] = {{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}},{{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L},{5L,5L,5L},{0x0C3D1DC2L,0x0C3D1DC2L,0x0C3D1DC2L}}};
                    int l_1280 = (-1L);
                    int i, j, k;
                    for (g_1050 = 0; (g_1050 <= 8); g_1050 += 1)
                    {
                        char *l_1276 = &g_6.f1;
                        int i;
                        l_1267 = 1L;
                        l_1281 = (safe_lshift_func_uint8_t_u_s(((((l_1270 = (*l_1264)) , l_1267) != (safe_lshift_func_uint8_t_u_s((l_1275[3][4][1] = (0xFC91B318L || ((safe_lshift_func_int8_t_s_u((*l_1264), 0)) , ((&g_971[7][4] != (void*)0) ^ (l_1275[4][4][1] || ((*l_1086) = ((((*l_1276) = 0xC4L) == (safe_mul_func_int16_t_s_s(((void*)0 == l_1279[2]), p_17))) , 2UL))))))), p_16))) >= l_1280), p_16));
                        (*p_15) = l_1282;
                        if (p_16)
                            break;
                    }
                    (*l_979) = l_1283;
                    (**g_89) = l_1284;

                    ;
                }

                ;
                for (l_975 = 6; (l_975 >= 0); l_975 -= 1)
                {
                    for (g_468 = 0; g_468 < 3; g_468 += 1)
                    {
                        g_574[g_468] = &l_1282.f1;
                    }
                }


            }


            for (g_126 = (-20); (g_126 == 18); g_126++)
            {
                (*g_90) = (void*)0;

                ;
            }
            l_998 = &l_975;

            ;
        }

        ;
    }

    ;
    return p_16;


}







static struct S0 * func_18(struct S0 * p_19)
{
    unsigned *l_49 = &g_50;
    unsigned *l_52[4] = {&g_53,&g_53,&g_53,&g_53};
    int l_54 = (-1L);
    int l_55[3][5][1] = {{{(-5L)},{0x10EF7D59L},{(-5L)},{2L},{1L}},{{0x10EF7D59L},{1L},{0x1563CFEBL},{1L},{0x10EF7D59L}},{{0x9B398EF5L},{0x10EF7D59L},{1L},{0x1563CFEBL},{1L}}};
    unsigned *l_56 = &g_57;
    int l_58[10][7][2] = {{{0xBDC9A81FL,0xEAC691C6L},{0x862EAE26L,(-10L)},{0xB7518DB0L,(-10L)},{0x862EAE26L,0xEAC691C6L},{0xBDC9A81FL,0x04A86D6AL},{0x34E4A53EL,0xEDF2FFA3L},{0xB6F8A3E0L,8L}},{{9L,0x28D0D4A4L},{1L,9L},{0xBDC9A81FL,1L},{(-7L),9L},{1L,(-10L)},{9L,8L},{0x8ECDCC21L,9L}},{{0x34E4A53EL,0xBDC9A81FL},{0x04A86D6AL,0xEAC691C6L},{0xB6F8A3E0L,0x28D0D4A4L},{0xB7518DB0L,0L},{0x8ECDCC21L,0xEAC691C6L},{(-7L),(-7L)},{0x34E4A53EL,9L}},{{0x862EAE26L,8L},{0xEDF2FFA3L,0L},{1L,0xEDF2FFA3L},{0x04A86D6AL,1L},{0x04A86D6AL,0xEDF2FFA3L},{1L,0L},{0xEDF2FFA3L,8L}},{{0x862EAE26L,9L},{0x34E4A53EL,(-7L)},{(-7L),0xEAC691C6L},{0x8ECDCC21L,0L},{0xB7518DB0L,0x28D0D4A4L},{0xB6F8A3E0L,0xEAC691C6L},{0x04A86D6AL,0xBDC9A81FL}},{{0x34E4A53EL,9L},{0x8ECDCC21L,8L},{9L,(-10L)},{1L,9L},{(-7L),1L},{0xBDC9A81FL,9L},{1L,0x28D0D4A4L}},{{9L,0xB7518DB0L},{0x28D0D4A4L,(-3L)},{0x3B6910C3L,0x8ECDCC21L},{0x862EAE26L,0L},{0L,9L},{(-1L),9L},{0L,0L}},{{0x862EAE26L,0x8ECDCC21L},{0x3B6910C3L,(-3L)},{0x28D0D4A4L,0xB7518DB0L},{(-1L),9L},{1L,(-1L)},{0x862EAE26L,1L},{0xB6F8A3E0L,0x490CE61FL}},{{1L,9L},{0x490CE61FL,0xB7518DB0L},{(-10L),(-1L)},{0x3B6910C3L,0x862EAE26L},{0x8ECDCC21L,0L},{0x28D0D4A4L,9L},{(-1L),0xEDF2FFA3L}},{{(-10L),0L},{0xB6F8A3E0L,0xB6F8A3E0L},{0x3B6910C3L,0x490CE61FL},{0L,0xB7518DB0L},{(-3L),0xEDF2FFA3L},{1L,(-3L)},{0x8ECDCC21L,1L}}};
    int l_59 = (-8L);
    int *l_968 = &l_55[2][3][0];
    unsigned ***l_969 = &g_174;
    int i, j, k;
    l_968 = func_20((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((l_55[2][3][0] = (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 15)), (-4L))), (func_37(g_6.f2, g_6.f1) & ((*l_56) = (((safe_add_func_uint8_t_u_u(g_6.f1, (safe_lshift_func_uint8_t_u_s(((void*)0 == g_45), func_37(func_37((l_54 = (g_51 = ((*l_49) = (safe_lshift_func_int8_t_s_s(0L, 7))))), g_53), l_55[2][3][0]))))) , (*p_19)) , 1UL)))))), 7L)), l_58[3][5][1])), l_59)), (*g_5), l_59, &g_6);

    ;



    ;
    l_58[8][5][0] = l_54;
    (*l_969) = g_174;
    return p_19;


}







static int * func_20(short p_21, struct S0 p_22, int p_23, struct S0 * p_24)
{
    short l_70 = 0xA000L;
    struct S0 l_71[7] = {{13748,5L,-4509},{13748,5L,-4509},{6935,1L,2759},{13748,5L,-4509},{13748,5L,-4509},{6935,1L,2759},{13748,5L,-4509}};
    unsigned *l_78 = &g_57;
    int *l_292[5][6] = {{&g_293,&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293,&g_293}};
    int **l_647 = (void*)0;
    unsigned *l_678[2][1];
    unsigned *l_679[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned char *l_705 = (void*)0;
    int *l_719[2];
    unsigned short l_724 = 0x77F5L;
    short l_729 = 0xF519L;
    unsigned **l_784 = &l_78;
    int *l_818[9][7][4] = {{{&g_293,&g_46,&g_46,&g_46},{(void*)0,&g_46,&g_293,&g_46},{&g_293,&g_46,(void*)0,&g_46},{&g_46,&g_46,&g_293,&g_293},{&g_293,&g_46,&g_46,&g_293},{&g_293,&g_46,&g_293,&g_46},{&g_46,&g_293,(void*)0,&g_293}},{{&g_293,(void*)0,&g_293,&g_293},{(void*)0,&g_293,&g_46,&g_46},{&g_293,&g_46,&g_293,&g_293},{&g_46,&g_46,&g_293,&g_293},{&g_293,&g_46,&g_46,&g_46},{(void*)0,&g_46,&g_293,&g_46},{&g_293,&g_46,(void*)0,&g_46}},{{&g_46,&g_46,&g_293,&g_293},{&g_293,&g_46,&g_46,&g_293},{&g_293,&g_46,&g_293,&g_46},{&g_46,&g_293,(void*)0,&g_293},{&g_293,(void*)0,&g_293,&g_293},{(void*)0,&g_293,&g_46,&g_46},{&g_293,&g_46,&g_293,&g_293}},{{&g_46,&g_46,&g_293,&g_293},{&g_293,&g_293,&g_46,&g_293},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_293},{&g_46,&g_293,&g_293,&g_46},{&g_46,(void*)0,(void*)0,&g_46},{&g_46,&g_293,&g_293,&g_293}},{{&g_46,&g_46,&g_46,&g_46},{&g_46,(void*)0,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_293},{&g_293,&g_293,&g_46,&g_46},{(void*)0,(void*)0,&g_46,&g_46},{&g_293,&g_293,&g_46,&g_293},{&g_46,&g_46,&g_46,&g_46}},{{&g_46,&g_46,&g_46,&g_293},{&g_46,&g_293,&g_293,&g_46},{&g_46,(void*)0,(void*)0,&g_46},{&g_46,&g_293,&g_293,&g_293},{&g_46,&g_46,&g_46,&g_46},{&g_46,(void*)0,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_293}},{{&g_293,&g_293,&g_46,&g_46},{(void*)0,(void*)0,&g_46,&g_46},{&g_293,&g_293,&g_46,&g_293},{&g_46,&g_46,&g_46,&g_46},{&g_46,(void*)0,&g_293,&g_293},{(void*)0,(void*)0,&g_293,&g_46},{&g_46,&g_293,&g_293,&g_46}},{{&g_46,&g_293,&g_293,&g_46},{(void*)0,&g_46,&g_293,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_293,&g_46,(void*)0,&g_46},{&g_293,&g_293,&g_46,&g_46},{&g_293,&g_293,&g_46,&g_46},{&g_293,(void*)0,(void*)0,&g_293}},{{&g_293,(void*)0,&g_46,(void*)0},{&g_46,(void*)0,&g_293,&g_293},{(void*)0,(void*)0,&g_293,&g_46},{&g_46,&g_293,&g_293,&g_46},{&g_46,&g_293,&g_293,&g_46},{(void*)0,&g_46,&g_293,&g_46},{&g_46,&g_46,&g_46,&g_46}}};
    char ***l_849[1];
    unsigned short l_862 = 0x6328L;
    unsigned l_871 = 0x17B58314L;
    char l_964 = 1L;
    int *l_967 = &g_46;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_678[i][j] = &g_57;
    }
    for (i = 0; i < 2; i++)
        l_719[i] = &g_46;
    for (i = 0; i < 1; i++)
        l_849[i] = (void*)0;
    l_292[0][4] = ((*g_90) = func_60(func_64(l_70, g_6.f2, (*g_45), l_71[6], ((((*l_78) = (p_23 <= ((((!p_23) ^ ((safe_rshift_func_int16_t_s_u(l_70, (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*g_45), (*g_45))), p_23)) >= g_50) >= p_22.f1))) | g_57)) > p_23) != g_50))) | 5L) >= l_71[6].f1)), l_292[4][2], &g_293));


    for (g_256 = 0; (g_256 > 47); g_256++)
    {
        for (p_21 = (-21); (p_21 < 20); ++p_21)
        {
            int *l_652 = &g_46;
            (**g_89) = l_652;
            if ((!((*l_652) = (*g_45))))
            {
                (*g_5) = (*g_5);
                if (p_23)
                    continue;
                for (g_468 = 0; (g_468 <= 4); g_468 += 1)
                {
                    int i, j;
                    l_292[g_468][(g_468 + 1)] = (void*)0;
                }
            }
            else
            {
                return (*g_90);


            }
            if ((*l_652))
                break;
        }
    }
    for (g_126 = 11; (g_126 != 20); g_126++)
    {
        int *l_665 = &g_666;
        int l_667[7];
        unsigned char *l_668 = &g_250;
        int i;
        for (i = 0; i < 7; i++)
            l_667[i] = 0x26B286A3L;
        if ((***g_89))
            break;
        (**g_90) = (l_667[4] = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((***g_89) || (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_21, (g_669[4][8][1] = ((safe_sub_func_int16_t_s_s((p_23 , (l_665 == (l_667[5] , &g_666))), p_22.f0)) != (((*l_668) = (+0xF5L)) >= (0x6A5273DDL <= 0x6F6BB7FDL)))))), 0))), 10)), (*g_127))));
    }
    if ((65534UL < (((*g_127) = (((safe_mul_func_uint16_t_u_u(0x7ECEL, func_37((g_669[4][8][1] = ((safe_mod_func_uint32_t_u_u((((*g_5) , p_22.f1) == p_21), (safe_div_func_int16_t_s_s((*g_127), p_21)))) && (safe_mod_func_int32_t_s_s(((void*)0 == l_678[0][0]), p_22.f2)))), g_666))) , 1L) , 0L)) != g_6.f1)))
    {
        int *l_690 = &g_46;
        short l_695 = 0L;
        char l_745 = 0x24L;
        short **l_746 = &g_127;
        struct S0 *l_832 = &l_71[6];
        int *l_833 = &g_46;
        for (p_23 = 0; (p_23 >= 0); p_23 -= 1)
        {
            int *l_683 = &g_293;
            (**g_89) = &p_23;

            ;
            for (g_51 = 2; (g_51 <= 6); g_51 += 1)
            {
                unsigned char *l_682 = &g_250;
                unsigned char **l_681[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                l_681[1] = g_680;
                for (g_50 = 0; (g_50 <= 0); g_50 += 1)
                {
                    return l_683;



                }
            }
        }

        ;
        (**g_89) = (**g_89);
        if ((safe_mod_func_uint32_t_u_u(((void*)0 != &g_90), (***g_89))))
        {
            unsigned l_699 = 18446744073709551608UL;
            unsigned l_702 = 0UL;
            struct S0 l_718 = {3281,0x9AL,-4177};
            int *l_757 = &g_293;
            unsigned short l_780 = 65535UL;
            int *l_812 = &g_666;
            for (p_22.f1 = 0; (p_22.f1 != 28); p_22.f1 = safe_add_func_uint8_t_u_u(p_22.f1, 6))
            {
                unsigned l_698 = 0UL;
                int l_700 = 0x9A2413B5L;
                int l_701 = 0xF830F1ECL;
                (**g_89) = (*g_90);
                (*g_90) = (void*)0;

                ;
                if (func_37((g_53 = ((!p_22.f0) | (0x16L > ((func_37((p_22.f0 , (((safe_sub_func_int8_t_s_s(((void*)0 == l_690), (((safe_rshift_func_uint16_t_u_s(65529UL, (safe_mod_func_uint8_t_u_u(func_37(p_21, (g_250 = (((!(l_700 = (l_695 > (((safe_div_func_int16_t_s_s((l_698 = 0L), l_699)) , p_21) | p_22.f2)))) ^ l_701) & p_22.f2))), 6L)))) < g_305) || l_702))) >= g_110[0][1][4]) >= 1UL)), p_22.f2) , 1L) != l_701)))), p_23))
                {
                    return (**g_89);


                }
                else
                {
                    struct S0 *l_715 = &l_71[6];
                    int l_717 = (-1L);
                    for (g_128 = 0; (g_128 < 15); g_128 = safe_add_func_uint16_t_u_u(g_128, 9))
                    {
                        short l_708 = 0x76E6L;
                        char *l_709[8][4][6] = {{{&g_255.f1,&g_110[0][2][0],&g_110[0][4][1],&g_255.f1,(void*)0,&l_71[6].f1},{&l_71[6].f1,&g_110[0][2][0],&g_110[0][1][4],&g_110[0][1][0],&g_110[0][4][1],&g_110[0][4][1]},{(void*)0,&g_110[0][1][4],&g_110[0][1][4],(void*)0,&g_110[0][2][0],&l_71[6].f1},{&g_255.f1,&l_71[6].f1,&l_71[6].f1,&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1}},{{&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1,&g_255.f1,&g_110[0][1][4],(void*)0},{(void*)0,(void*)0,&g_110[0][4][1],&l_71[6].f1,&g_110[0][4][1],(void*)0},{&g_6.f1,&l_71[6].f1,&l_71[6].f1,&g_110[0][1][0],&l_71[6].f1,&l_71[6].f1},{&g_6.f1,&g_110[0][4][1],&l_71[6].f1,&l_71[6].f1,&g_110[0][2][0],&g_110[0][1][4]}},{{(void*)0,&g_110[0][4][1],&l_71[6].f1,&g_255.f1,&l_71[6].f1,&l_71[6].f1},{&g_110[0][1][4],&l_71[6].f1,&l_71[6].f1,&g_110[0][1][4],&g_110[0][4][1],&g_110[0][1][4]},{&l_71[6].f1,(void*)0,&l_71[6].f1,&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1},{&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1,&g_255.f1,&g_110[0][1][4],(void*)0}},{{(void*)0,(void*)0,&g_110[0][4][1],&l_71[6].f1,&g_110[0][4][1],(void*)0},{&g_6.f1,&l_71[6].f1,&l_71[6].f1,&g_110[0][1][0],&l_71[6].f1,&l_71[6].f1},{&g_6.f1,&g_110[0][4][1],&l_71[6].f1,&l_71[6].f1,&g_110[0][2][0],&g_110[0][1][4]},{(void*)0,&g_110[0][4][1],&l_71[6].f1,&g_255.f1,&l_71[6].f1,&l_71[6].f1}},{{&g_110[0][1][4],&l_71[6].f1,&l_71[6].f1,&g_110[0][1][4],&g_110[0][4][1],&g_110[0][1][4]},{&l_71[6].f1,(void*)0,&l_71[6].f1,&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1},{&g_110[0][1][4],&g_110[0][1][4],&l_71[6].f1,&g_255.f1,&g_110[0][1][4],(void*)0},{(void*)0,&g_110[0][1][4],&g_6.f1,&l_71[6].f1,&g_6.f1,&g_110[0][1][4]}},{{(void*)0,&g_110[0][1][4],(void*)0,&g_110[0][2][0],&l_71[6].f1,(void*)0},{(void*)0,&g_6.f1,&l_71[6].f1,&l_71[6].f1,&l_71[6].f1,&l_71[6].f1},{&l_71[6].f1,&g_6.f1,&g_110[0][1][4],&g_110[0][4][1],&l_71[6].f1,&l_71[6].f1},{&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],&g_6.f1,&l_71[6].f1}},{{&l_71[6].f1,&g_110[0][1][4],&l_71[6].f1,&g_110[0][1][4],&l_71[6].f1,(void*)0},{&g_110[0][1][4],&l_71[6].f1,(void*)0,&g_110[0][4][1],&l_71[6].f1,&g_110[0][1][4]},{&l_71[6].f1,&g_110[0][1][4],&g_6.f1,&l_71[6].f1,&g_6.f1,&g_110[0][1][4]},{(void*)0,&g_110[0][1][4],(void*)0,&g_110[0][2][0],&l_71[6].f1,(void*)0}},{{(void*)0,&g_6.f1,&l_71[6].f1,&l_71[6].f1,&l_71[6].f1,&l_71[6].f1},{&l_71[6].f1,&g_6.f1,&g_110[0][1][4],&g_110[0][4][1],&l_71[6].f1,&l_71[6].f1},{&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],&g_110[0][1][4],&g_6.f1,&l_71[6].f1},{&l_71[6].f1,&g_110[0][1][4],&l_71[6].f1,&g_110[0][1][4],&l_71[6].f1,(void*)0}}};
                        int l_710 = 0x1F0CBAB6L;
                        int i, j, k;
                        (*g_90) = &p_23;

                        ;
                        (*l_690) = (0xC7FDL == (((l_705 == (void*)0) >= (safe_lshift_func_int8_t_s_s(l_708, (p_23 | (*g_127))))) >= (l_710 = 0L)));
                        if (p_21)
                            break;
                    }

                    ;
                    (*l_715) = ((safe_add_func_int8_t_s_s(p_22.f0, (safe_rshift_func_uint16_t_u_u(func_37((l_717 = (((void*)0 != l_715) , (safe_unary_minus_func_int8_t_s((&p_22 != (void*)0))))), p_22.f2), 5)))) , l_718);
                    return l_719[1];



                }
            }
            (*p_24) = (*p_24);
            if ((0xE0F96FB9L ^ (safe_rshift_func_int8_t_s_s(l_699, (safe_mod_func_uint16_t_u_u((l_724 && (((void*)0 != l_690) || func_37(p_22.f1, (g_250 = (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_256, (9L >= func_37((l_729 == p_22.f0), l_718.f1)))), g_669[4][8][1])))))), g_432))))))
            {
                unsigned l_740 = 4294967286UL;
                if (((*l_690) = (safe_mul_func_uint16_t_u_u(func_37(g_293, ((+(safe_sub_func_int32_t_s_s((g_6.f2 = ((*g_45) = (***g_89))), l_695))) , ((safe_div_func_uint32_t_u_u(((*l_78) = 4294967291UL), (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_22.f2, (((((p_22.f0 , (l_740 , l_679[2])) != ((safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(p_22.f0, l_740)) & (-8L)) != g_669[4][8][1]) , 9L), (*l_690))) , (*g_90))) , (*g_127)) != (*l_690)) || 0xE0E6CE00L))), p_22.f0)))) ^ 0xAEL))), p_22.f2))))
                {
                    unsigned char l_751 = 0x12L;
                    if (l_745)
                    {
                        (**g_89) = (void*)0;

                        ;
                    }
                    else
                    {
                        short ***l_747 = &l_746;
                        int l_750 = 3L;
                        (*l_747) = l_746;
                        (***g_89) = (safe_lshift_func_int8_t_s_u(p_22.f2, func_37(l_750, l_751)));
                        (*g_89) = (*g_89);
                        return l_690;



                    }

                    ;
                }
                else
                {
                    (**g_89) = (void*)0;

                    ;
                }

                ;
            }
            else
            {
                unsigned short *l_754 = &g_51;
                int **l_756 = (void*)0;
                (**g_90) = ((safe_add_func_int32_t_s_s((*g_45), (p_23 , p_22.f1))) & (((*l_754) = p_21) , g_46));
                l_757 = (g_755[1] = ((**g_89) = (**g_89)));


                ;
            }

            ;

            ;
            if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((func_37((safe_add_func_uint32_t_u_u(1UL, (~(safe_rshift_func_uint16_t_u_s((0x248EL ^ ((*l_757) , (((safe_mod_func_uint32_t_u_u(((*l_78) = (safe_rshift_func_int8_t_s_s(((p_21 & p_23) == (safe_sub_func_int16_t_s_s(((**l_746) = ((safe_add_func_int32_t_s_s((*l_757), g_666)) && (safe_sub_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(((*l_690) = p_22.f1), (((!((safe_mod_func_int8_t_s_s(p_22.f2, 0xD3L)) | 0x98L)) , p_22.f0) , p_21))) <= 0xC5L) ^ (-3L)) && p_23), 4L)))), 0L))), 4))), l_780)) || 0x96L) > p_22.f0))), p_21))))), p_23) | 0xC2ADL), 4294967295UL)), 7)))
            {
                short l_782 = 3L;
                for (g_51 = 0; (g_51 <= 0); g_51 += 1)
                {
                    unsigned short l_781[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_781[i] = 0x1703L;
                    if (p_21)
                        break;
                    if (l_781[0])
                        continue;
                    (**g_89) = &p_23;

                    ;
                    for (g_153 = 0; (g_153 <= 2); g_153 += 1)
                    {
                        (*g_5) = l_718;
                        (***g_89) = p_22.f1;
                        l_782 = (*l_757);
                    }
                }
                (**g_89) = &p_23;

                ;
                l_690 = g_783[8][9][1];

                ;
            }
            else
            {
                unsigned ***l_785 = (void*)0;
                unsigned ***l_786 = &g_174;
                struct S0 *l_790 = &g_6;
                int l_799 = 0x89DD7E4BL;
                int l_815 = 0x5191DA57L;
                if ((l_784 == ((*l_786) = (void*)0)))
                {
                    int *l_787 = &g_46;
                    return l_787;




                }
                else
                {
                    int *l_809 = &g_666;
                    int **l_808 = &l_809;
                    int *l_811 = &g_666;
                    int **l_810[8][2][9] = {{{&l_811,&l_811,&l_811,(void*)0,(void*)0,(void*)0,&l_811,&l_811,&l_811},{(void*)0,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811}},{{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,(void*)0,&l_811},{&l_811,(void*)0,&l_811,&l_811,&l_811,&l_811,(void*)0,&l_811,(void*)0}},{{&l_811,&l_811,&l_811,&l_811,&l_811,(void*)0,(void*)0,&l_811,&l_811},{(void*)0,&l_811,(void*)0,&l_811,(void*)0,&l_811,&l_811,(void*)0,(void*)0}},{{&l_811,&l_811,(void*)0,(void*)0,(void*)0,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,(void*)0,&l_811,(void*)0,&l_811,(void*)0,&l_811,(void*)0}},{{(void*)0,(void*)0,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{(void*)0,&l_811,&l_811,&l_811,&l_811,(void*)0,&l_811,(void*)0,&l_811}},{{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,(void*)0,(void*)0,&l_811,&l_811,&l_811,&l_811,&l_811}},{{(void*)0,&l_811,(void*)0,&l_811,(void*)0,&l_811,(void*)0,(void*)0,&l_811},{(void*)0,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,(void*)0}},{{&l_811,&l_811,(void*)0,&l_811,(void*)0,&l_811,&l_811,&l_811,(void*)0},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,(void*)0,(void*)0}}};
                    int *l_813 = &g_666;
                    struct S0 *l_817[9][3];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_817[i][j] = &g_6;
                    }
                    for (g_128 = 20; (g_128 > (-24)); g_128 = safe_sub_func_uint8_t_u_u(g_128, 2))
                    {
                        (*g_90) = &p_23;

                        ;
                        (**g_89) = func_60(&g_255, (**g_89), l_757);
                    }
                    (**g_89) = l_813;

                    ;
                }

                ;
            }

            ;
            ;
        }
        else
        {
            unsigned char l_841 = 0xEAL;
            char ***l_850 = (void*)0;
            int l_851 = 0xAE8DB492L;
            if ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_22.f2, (safe_sub_func_uint32_t_u_u(p_21, ((!((func_37(g_256, (((p_22.f2 != p_22.f1) < ((*l_690) >= (safe_mul_func_int8_t_s_s((*l_690), (&p_24 == (void*)0))))) | 0x61E96380L)) ^ p_23) & (*l_690))) , p_23))))), p_22.f1)), (-7L))))
            {
                unsigned l_829 = 1UL;
                (*l_690) = ((**g_90) > l_829);
            }
            else
            {
                unsigned char *l_838 = &g_250;
                char *l_848[4][5][2] = {{{(void*)0,(void*)0},{&g_6.f1,(void*)0},{&g_816,(void*)0},{&g_6.f1,(void*)0},{(void*)0,&g_6.f1}},{{(void*)0,&g_816},{(void*)0,&g_6.f1},{(void*)0,(void*)0},{&g_6.f1,(void*)0},{&g_816,(void*)0}},{{&g_6.f1,(void*)0},{(void*)0,&g_6.f1},{(void*)0,&g_816},{(void*)0,&g_6.f1},{(void*)0,(void*)0}},{{&g_6.f1,(void*)0},{&g_816,(void*)0},{&g_6.f1,(void*)0},{(void*)0,&g_6.f1},{(void*)0,&g_816}}};
                char l_852 = 0xEEL;
                int *l_858[8][10][2] = {{{&g_666,&g_666},{(void*)0,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}},{{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666},{&g_666,(void*)0},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}},{{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666},{(void*)0,(void*)0},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}},{{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,(void*)0},{(void*)0,&g_666}},{{(void*)0,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,(void*)0},{&g_666,&g_666},{(void*)0,&g_666}},{{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666},{&g_666,(void*)0},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}},{{(void*)0,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,(void*)0},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666}},{{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666},{(void*)0,&g_666},{&g_666,&g_666},{&g_666,&g_666},{&g_666,&g_666}}};
                int l_859 = 0xF74538BCL;
                int l_860 = 4L;
                unsigned ***l_870 = &g_174;
                int i, j, k;
                for (l_745 = (-5); (l_745 > (-17)); --l_745)
                {
                    (**g_89) = func_60(l_832, (*g_90), l_833);
                    (*g_5) = (*p_24);
                }
                (***g_89) = (safe_add_func_int8_t_s_s(((*l_690) , p_22.f1), ((safe_mod_func_int16_t_s_s(func_37((((*l_838) = (*l_690)) > (safe_mul_func_uint8_t_u_u(g_110[0][4][3], l_841))), p_22.f2), (safe_div_func_uint16_t_u_u(65532UL, 0xDC89L)))) | 4UL)));
                if ((((*g_45) ^ (((g_53 & (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_22.f0, g_50)), (l_851 = (((p_22.f1 = (*l_833)) , l_849[0]) != l_850))))) & (p_23 ^ func_37(g_816, l_852))) ^ l_852)) & 1L))
                {
                    struct S0 **l_853[1][7][9] = {{{(void*)0,(void*)0,&g_5,(void*)0,(void*)0,&l_832,&l_832,(void*)0,(void*)0},{&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,(void*)0,&g_5,(void*)0},{&l_832,(void*)0,&l_832,&g_5,&g_5,&l_832,(void*)0,&l_832,(void*)0},{&g_5,&l_832,(void*)0,(void*)0,&l_832,&g_5,&g_5,&g_5,&l_832},{(void*)0,(void*)0,(void*)0,(void*)0,&l_832,(void*)0,&l_832,(void*)0,(void*)0},{(void*)0,(void*)0,&g_5,&l_832,&l_832,&l_832,&g_5,(void*)0,(void*)0},{(void*)0,(void*)0,&g_5,(void*)0,&g_5,&g_5,(void*)0,(void*)0,&g_5}}};
                    int *l_854 = &g_46;
                    struct S0 l_855 = {14694,-4L,-3829};
                    int i, j, k;
                    (*g_90) = func_60((g_5 = (p_24 = &g_255)), (((*g_45) = p_23) , ((*g_90) = l_854)), l_833);

                    ;
                    ;
                    ;
                    (*l_832) = l_855;
                    for (p_23 = 9; (p_23 > (-3)); --p_23)
                    {
                        l_860 = ((*l_854) = func_37(g_256, (((~((l_859 = ((*g_127) | ((*l_854) = func_37(func_37(p_21, (((*l_833) || (l_852 | 0xD3EC581CL)) == (((l_858[6][4][1] != (void*)0) <= 65527UL) != g_126))), l_852)))) , (*l_854))) <= l_851) != 0xC28D4EDFL)));
                    }
                }
                else
                {
                    struct S0 **l_861 = &l_832;
                    int l_878[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_878[i] = 0L;
                    (*l_861) = l_832;
                    (*l_690) = func_37((+6UL), l_862);
                    if (l_841)
                    {
                        int l_863 = 0L;
                        l_859 = ((l_863 > ((!(l_860 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x42L, func_37(((*l_690) = (g_816 || p_22.f0)), g_669[4][8][1]))), (safe_mod_func_int8_t_s_s((((**l_861) , (l_841 | (+(((func_37((l_863 , l_851), p_22.f2) , l_870) != (void*)0) && l_871)))) <= 3UL), p_22.f0)))))) ^ p_22.f1)) > l_863);
                        (***g_89) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((func_37(l_851, (func_37((p_23 | 0xE5L), p_21) && (&p_21 == &g_128))) <= (p_22.f0 >= l_878[1])), (*l_833))) || 0x0943L), l_863)) , 0xF3A7L), p_22.f1));
                        (**l_861) = ((*p_24) = (*g_5));
                        (*g_5) = (**l_861);
                    }
                    else
                    {
                        (*g_45) = (safe_sub_func_int16_t_s_s(0xB933L, 0x41BFL));
                        (*g_45) = (*g_45);
                        (*g_90) = &p_23;

                        ;
                    }
                    (*g_90) = (**g_89);
                }

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;

    }
    else
    {
        struct S0 *l_881 = &l_71[2];
        int *l_882 = &g_293;
        int l_931 = 0x0A67F686L;
        int ***l_934[7] = {&g_90,&g_90,&l_647,&g_90,&g_90,&l_647,&g_90};
        unsigned l_937 = 0xF0C53E60L;
        unsigned char *l_941[7][2][10] = {{{&g_250,&g_250,&g_250,(void*)0,(void*)0,&g_250,&g_250,&g_250,(void*)0,(void*)0},{&g_250,(void*)0,&g_250,&g_250,(void*)0,&g_250,&g_250,&g_250,&g_250,&g_250}},{{&g_250,&g_250,&g_250,&g_250,&g_250,(void*)0,&g_250,&g_250,&g_250,&g_250},{(void*)0,&g_250,&g_250,(void*)0,&g_250,&g_250,(void*)0,&g_250,&g_250,&g_250}},{{(void*)0,(void*)0,&g_250,&g_250,&g_250,&g_250,&g_250,(void*)0,(void*)0,&g_250},{(void*)0,(void*)0,&g_250,&g_250,(void*)0,(void*)0,(void*)0,&g_250,&g_250,(void*)0}},{{&g_250,&g_250,&g_250,&g_250,(void*)0,&g_250,&g_250,&g_250,(void*)0,&g_250},{&g_250,&g_250,&g_250,&g_250,(void*)0,&g_250,&g_250,(void*)0,&g_250,&g_250}},{{&g_250,&g_250,&g_250,&g_250,(void*)0,(void*)0,&g_250,&g_250,&g_250,&g_250},{&g_250,(void*)0,&g_250,&g_250,&g_250,(void*)0,&g_250,(void*)0,&g_250,&g_250}},{{&g_250,&g_250,&g_250,(void*)0,(void*)0,(void*)0,&g_250,&g_250,&g_250,(void*)0},{&g_250,&g_250,(void*)0,&g_250,&g_250,&g_250,&g_250,&g_250,(void*)0,&g_250}},{{(void*)0,(void*)0,&g_250,&g_250,&g_250,(void*)0,&g_250,(void*)0,&g_250,&g_250},{&g_250,&g_250,&g_250,(void*)0,&g_250,(void*)0,&g_250,&g_250,&g_250,(void*)0}}};
        char ***l_942 = (void*)0;
        int l_965 = 1L;
        int i, j, k;
        for (g_312 = 0; (g_312 <= 1); g_312 += 1)
        {
            unsigned l_885[9] = {0x9B3C2948L,0x9B3C2948L,18446744073709551609UL,0x9B3C2948L,0x9B3C2948L,18446744073709551609UL,0x9B3C2948L,0x9B3C2948L,18446744073709551609UL};
            int *l_898 = &g_293;
            int i;
            (*g_90) = func_60(l_881, l_882, l_882);
            for (g_293 = 4; (g_293 >= 0); g_293 -= 1)
            {
                int *l_884 = (void*)0;
                int l_891 = 1L;
                if ((g_128 , p_23))
                {
                    int i, j;
                    l_292[(g_312 + 1)][(g_293 + 1)] = (void*)0;
                    for (g_250 = 0; (g_250 <= 2); g_250 += 1)
                    {
                        char l_883 = 0x53L;
                        int i, j, k;
                        if (l_883)
                            break;
                        g_783[(g_293 + 1)][(g_312 + 1)][g_312] = &p_23;
                        (*g_90) = (l_884 = (void*)0);

                        ;
                    }
                    for (g_51 = 0; (g_51 <= 3); g_51 += 1)
                    {
                        int i, j, k;
                        g_783[(g_51 + 4)][(g_312 + 6)][g_312] = (void*)0;
                        p_23 = l_885[7];
                        (*p_24) = (*g_5);
                    }
                }
                else
                {
                    (**g_89) = g_886[1][4][3];
                }
                p_22.f2 = (safe_add_func_uint16_t_u_u(p_22.f2, 1L));
                if (func_37(((!(safe_mul_func_int16_t_s_s(func_37(g_57, p_23), 0x6A1EL))) , 18446744073709551609UL), l_891))
                {
                    for (g_666 = 0; (g_666 <= 1); g_666 += 1)
                    {
                        int i, j, k;
                        return (**g_89);



                    }
                }
                else
                {
                    int *l_897 = &g_46;
                    for (g_256 = 0; (g_256 <= 1); g_256 += 1)
                    {
                        unsigned l_894 = 18446744073709551610UL;
                        int i, j, k;
                        p_22.f2 = ((p_22.f2 <= (((safe_lshift_func_uint8_t_u_u(l_894, 3)) > (-9L)) && p_22.f0)) || ((*g_127) = (safe_rshift_func_int8_t_s_s((0x967CL <= (*g_127)), l_894))));
                        g_783[(g_293 + 5)][(g_256 + 1)][g_256] = l_897;
                        g_783[(g_256 + 2)][(g_312 + 2)][g_256] = &p_23;
                    }
                    return l_898;



                }
                for (g_57 = 0; (g_57 <= 1); g_57 += 1)
                {
                    unsigned char *l_916 = &g_250;
                    unsigned **l_917 = (void*)0;
                    unsigned **l_918 = &l_679[2];
                    int l_919 = 0x120B2991L;
                    unsigned short *l_928 = &l_724;
                    unsigned short *l_929 = &g_305;
                    unsigned short *l_930 = &g_51;
                    l_891 = (safe_div_func_uint32_t_u_u((p_22.f0 = func_37((safe_unary_minus_func_uint32_t_u(4294967286UL)), (safe_lshift_func_int8_t_s_u(((0xC2L && (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((0x62L == ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((0x409EL >= (safe_sub_func_uint32_t_u_u(((func_37((safe_mod_func_uint16_t_u_u(65533UL, 0x95BBL)), ((*l_916) = (*l_882))) , ((*l_918) = &g_256)) != (void*)0), p_22.f0))), 4)), 0x2377L)) >= l_891)), 15)), g_50))) == l_919), (*l_898))))), g_814));
                    p_23 = (l_919 > (((safe_div_func_int16_t_s_s((*g_127), 0x9735L)) ^ (func_37((0x5EA8L || (safe_lshift_func_int16_t_s_s((((p_22.f2 = (5L <= (safe_sub_func_uint16_t_u_u(((-1L) | 1UL), ((safe_mod_func_int32_t_s_s(((((*l_928) = g_250) & ((*l_930) = ((*l_929) = ((void*)0 != l_881)))) , 0x3BAE167FL), 0xE15E2E22L)) > l_919))))) == 0xF69D3539L) && (*l_882)), 3))), g_57) , 1L)) == l_919));
                    if (l_931)
                        break;
                    p_22.f2 = (safe_mul_func_uint16_t_u_u(g_305, (l_934[4] != &g_90)));
                }
            }
            for (l_871 = 0; (l_871 <= 1); l_871 += 1)
            {
                int l_940[4] = {0L,0L,0L,0L};
                short l_943 = (-8L);
                int l_950[9] = {0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L,0x0D4AACE6L};
                int *l_966 = &l_931;
                int i;
                for (g_53 = 0; (g_53 <= 1); g_53 += 1)
                {
                    for (g_153 = 0; (g_153 <= 1); g_153 += 1)
                    {
                        return (**g_89);



                    }
                }
                p_22.f2 = ((*l_882) = (safe_add_func_int16_t_s_s(l_937, ((func_37(((1UL == ((g_666 , (safe_add_func_int32_t_s_s(l_940[3], func_37(func_37(p_22.f1, ((void*)0 == l_941[5][0][5])), (((p_23 = (((**l_784) = ((&g_573[2] != l_942) ^ p_22.f2)) & l_943)) ^ 0x89B8294EL) , (*l_898)))))) & p_22.f2)) ^ g_432), g_255.f0) != (*l_898)) < (-1L)))));
                for (g_6.f1 = 0; (g_6.f1 <= 1); g_6.f1 += 1)
                {
                    unsigned char l_944 = 0xE6L;
                    int ***l_949 = &l_647;
                    if (((l_950[2] = func_37((*l_898), ((&g_574[2] != (func_37(g_50, l_944) , (void*)0)) || (safe_lshift_func_uint8_t_u_s((*l_898), (safe_add_func_int32_t_s_s(((l_949 != &g_90) < 5UL), l_940[3]))))))) > (*l_898)))
                    {
                        int i, j, k;
                        g_255 = (*p_24);
                        g_783[(l_871 + 7)][(l_871 + 5)][l_871] = &p_23;
                    }
                    else
                    {
                        unsigned short l_953 = 65527UL;
                        l_966 = ((l_965 = ((safe_rshift_func_uint16_t_u_s(l_953, 7)) == ((func_37(g_255.f1, ((!(safe_sub_func_uint16_t_u_u((func_37((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((func_37(p_22.f0, l_950[8]) <= ((*g_127) == (*g_127))), l_943)), (safe_mod_func_int32_t_s_s(((l_964 >= (*l_882)) & p_22.f1), p_22.f1)))), 0UL)), (*l_898)) , p_23), l_950[2]))) , p_22.f0)) >= 0x5DL) || p_22.f1))) , &p_23);

                        ;
                        if (p_21)
                            break;
                        if ((*l_966))
                            continue;
                    }
                }

                ;
            }
        }

        ;

        for (g_432 = 1; (g_432 >= 0); g_432 -= 1)
        {
            return (**g_89);



        }
    }

    ;
    ;
    ;


    return l_967;





}







static unsigned func_37(unsigned p_38, unsigned char p_39)
{
    unsigned char l_40 = 6UL;
    return l_40;
}







static int * func_60(struct S0 * p_61, int * p_62, int * p_63)
{
    unsigned *l_301 = (void*)0;
    int l_310 = 0x18B3BFD1L;
    int l_313[1][5] = {{0x1A26EF9EL,0x1A26EF9EL,0x1A26EF9EL,0x1A26EF9EL,0x1A26EF9EL}};
    int l_314 = 0x045112F0L;
    int *l_338[7][3] = {{&l_313[0][2],&l_310,(void*)0},{&l_310,&l_313[0][2],(void*)0},{&g_46,&g_46,(void*)0},{&l_310,&g_46,&l_313[0][0]},{&g_46,&l_310,&l_313[0][0]},{&l_313[0][2],&l_313[0][2],&l_313[0][0]},{&l_310,&g_46,&l_313[0][0]}};
    unsigned short l_346 = 1UL;
    struct S0 l_389 = {3168,0x13L,-2101};
    short **l_410[1];
    short ***l_409 = &l_410[0];
    struct S0 *l_452 = &g_6;
    int l_470 = 0xBDDD89E2L;
    int ***l_501 = &g_90;
    int l_522 = 0xDC31E78DL;
    int l_525 = 0xF84AD64EL;
    unsigned char l_535 = 0UL;
    short l_537[7][3] = {{0xA0B9L,0xE91CL,0xA0B9L},{2L,2L,3L},{0L,0xE91CL,0L},{2L,3L,3L},{0xA0B9L,0xE91CL,0xA0B9L},{2L,2L,3L},{0L,0xE91CL,0L}};
    char *l_544 = &g_110[0][0][5];
    char **l_543 = &l_544;
    struct S0 ***l_635 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_410[i] = &g_127;
    for (g_51 = 0; (g_51 <= 0); g_51 += 1)
    {
        unsigned char l_300 = 0UL;
        unsigned short *l_304 = &g_305;
        unsigned short *l_311[8][6] = {{&g_312,&g_51,&g_312,&g_51,&g_51,&g_312},{&g_312,&g_312,&g_51,&g_312,&g_51,&g_312},{&g_51,&g_51,&g_312,&g_312,&g_51,&g_51},{&g_312,&g_51,&g_312,&g_51,&g_312,&g_312},{&g_312,&g_51,&g_51,&g_312,&g_51,&g_312},{&g_312,&g_51,&g_312,&g_51,&g_51,&g_312},{&g_312,&g_312,&g_51,&g_312,&g_51,&g_312},{&g_51,&g_51,&g_312,&g_312,&g_51,&g_51}};
        struct S0 l_316[3] = {{483,0L,3309},{483,0L,3309},{483,0L,3309}};
        int *l_317 = (void*)0;
        char l_348 = 0xF4L;
        unsigned l_368 = 9UL;
        int i, j;
        (*p_63) = ((((~(safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int32_t_s_s((-10L), ((func_37(l_300, l_300) , &g_57) != l_301))), (safe_sub_func_uint16_t_u_u((((*l_304) = g_110[0][1][4]) , 65535UL), (func_37((((safe_sub_func_int32_t_s_s(((l_313[0][2] = (l_310 = (safe_mod_func_int16_t_s_s(((g_255.f0 >= g_6.f0) < l_300), l_310)))) | l_300), l_300)) < l_314) & 0x8734L), l_314) == l_300))))), 0))) <= g_46) <= 1UL) || l_313[0][2]);
    }
    for (g_256 = 3; (g_256 <= 37); ++g_256)
    {
        unsigned l_385[8][8] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0x8251B02FL,0UL,0x8251B02FL,0x8251B02FL,0x8251B02FL,0UL,0UL,0x8251B02FL},{0x8251B02FL,0UL,0UL,0x8251B02FL,0UL,0UL,0x8251B02FL,0UL},{0x8251B02FL,0x8251B02FL,0UL,0x8251B02FL,0x8251B02FL,0UL,0x8251B02FL,0x8251B02FL},{0UL,0x8251B02FL,0UL,0UL,0x8251B02FL,0UL,0UL,0x8251B02FL},{0x8251B02FL,0UL,0UL,0x8251B02FL,0UL,0UL,0x8251B02FL,0UL},{0x8251B02FL,0x8251B02FL,0UL,0x8251B02FL,0x8251B02FL,0UL,0x8251B02FL,0x8251B02FL},{0UL,0x8251B02FL,0UL,0UL,0x8251B02FL,0UL,0UL,0x8251B02FL}};
        struct S0 l_388 = {973,0xC8L,3808};
        short **l_408[4][1];
        short ***l_407[1][10];
        int *l_418 = (void*)0;
        unsigned short l_428 = 0xC8D4L;
        unsigned char *l_532 = &g_250;
        unsigned *l_533 = &g_50;
        char *l_534 = &g_6.f1;
        char l_536 = 0xEAL;
        short l_604 = 0x1CDBL;
        unsigned l_625 = 1UL;
        unsigned short l_631 = 65530UL;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_408[i][j] = &g_127;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_407[i][j] = &l_408[1][0];
        }
    }
    return (*g_90);


}







static struct S0 * func_64(short p_65, short p_66, int p_67, struct S0 p_68, unsigned char p_69)
{
    int *l_79 = &g_46;
    int **l_80 = (void*)0;
    int **l_81 = &l_79;
    int ***l_82 = &l_80;
    int l_103 = 3L;
    struct S0 l_154 = {15470,0x9AL,-210};
    unsigned l_187 = 0x236ECDBEL;
    struct S0 *l_259 = &g_255;
    (*l_81) = l_79;
    (*l_82) = &l_79;

    ;
    if (((((safe_sub_func_uint16_t_u_u(p_69, 0L)) & g_51) , ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((***l_82), ((p_67 | func_37(g_6.f1, g_6.f0)) >= (((*g_45) , 0L) , 1UL)))), 1L)) != g_51)) , 0x95B7CA3BL))
    {
        int ****l_91 = &g_89;
        int ****l_92 = &l_82;
        unsigned char l_93[6] = {0x61L,0x6DL,0x6DL,0x61L,0x6DL,0x6DL};
        struct S0 *l_112 = &g_6;
        int i;
        (*l_81) = &p_67;

        ;
        (*g_45) = (((*l_91) = g_89) != ((*l_92) = &g_90));

        ;
        for (p_67 = 5; (p_67 >= 1); p_67 -= 1)
        {
            char l_96 = 0x13L;
            int ****l_130 = &l_82;
            struct S0 *l_158 = (void*)0;
            struct S0 **l_159[10];
            int i;
            for (i = 0; i < 10; i++)
                l_159[i] = &l_112;
        }
        return &g_6;


    }
    else
    {
        int l_162 = 0xB3D763EEL;
        unsigned *l_167 = &g_57;
        struct S0 *l_168 = &l_154;
        struct S0 ***l_234 = (void*)0;
        char l_248 = 1L;
        short **l_258 = &g_127;
        struct S0 *l_272 = &l_154;
        unsigned short l_279 = 0xB2F9L;
        unsigned short l_290[10];
        int i;
        for (i = 0; i < 10; i++)
            l_290[i] = 5UL;
        (*l_79) = (-6L);
        p_68.f2 = func_37((safe_mul_func_int16_t_s_s(((((l_162 , g_6.f2) && (((g_6.f0 && (((~(((safe_sub_func_int32_t_s_s((**g_90), ((*l_167) = p_65))) , (g_53 , g_110[0][1][4])) == g_6.f2)) < (*g_45)) != p_68.f2)) , l_154) , (***l_82))) || 1L) ^ 0xDC19L), (*g_127))), p_68.f0);
        (*l_168) = ((*g_5) = p_68);
        if (func_37(g_6.f1, func_37(l_162, l_162)))
        {
            struct S0 *l_173 = (void*)0;
            int l_188 = 3L;
            unsigned short *l_220 = &g_51;
            for (g_51 = (-7); (g_51 != 45); g_51++)
            {
                unsigned **l_172[9] = {&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_167,&l_167};
                unsigned ***l_171 = &l_172[5];
                int l_200 = 0L;
                unsigned char l_201 = 0xDBL;
                int i;
                (*l_171) = (void*)0;


                for (g_126 = 0; (g_126 >= 0); g_126 -= 1)
                {
                    unsigned l_176 = 0x4B374F05L;
                    int l_177 = 0L;
                    int ****l_189 = &l_82;
                    struct S0 l_205 = {2977,0x25L,460};
                    if ((~p_68.f2))
                    {
                        return l_173;


                    }
                    else
                    {
                        int *l_175 = &g_46;
                        (*l_171) = g_174;
                        (**g_89) = l_175;
                        (**l_81) = p_65;
                        (**g_90) = (l_176 < (l_177 = g_126));
                    }
                    (**l_80) = (safe_rshift_func_uint16_t_u_s(func_37(p_69, ((((((safe_mod_func_int16_t_s_s(p_69, (((safe_unary_minus_func_uint16_t_u((g_110[0][1][4] > ((safe_mul_func_int16_t_s_s(func_37(g_46, ((p_68.f0 | (p_68.f2 , func_37((safe_mul_func_uint8_t_u_u((**l_81), 0xECL)), ((0L < p_66) , 0xC7L)))) == p_68.f1)), l_187)) < g_128)))) != 5L) , p_65))) ^ 0xEEL) ^ l_188) , (void*)0) == l_189) & p_68.f1)), (*g_127)));
                    (**g_89) = (**g_89);
                    for (p_67 = 0; (p_67 >= 0); p_67 -= 1)
                    {
                        int l_202 = (-1L);
                        struct S0 **l_204 = (void*)0;
                        struct S0 ***l_203 = &l_204;
                        int i, j, k;
                        (*l_203) = (((safe_lshift_func_uint16_t_u_u((((func_37(p_66, func_37(((safe_add_func_int16_t_s_s((((((4UL == ((((-1L) != (((((safe_mod_func_int16_t_s_s(((((***g_89) , func_37(p_67, (****l_189))) <= (safe_div_func_int16_t_s_s((p_68.f1 ^ (g_110[p_67][(g_126 + 4)][p_67] = (!func_37(((g_153 < g_53) || l_200), l_188)))), l_201))) == g_6.f1), p_68.f2)) , l_188) >= 0x1A2F3BF8L) <= g_50) , (-1L))) , (*g_5)) , p_66)) , p_68.f2) >= (*g_127)) <= 0xA8471376L) & (*g_127)), g_51)) ^ l_201), p_68.f2)) || g_57) , l_200) , p_69), 4)) > l_202) , &l_168);

                        ;
                        (****l_189) = (p_68.f2 = ((l_200 && 0x6352L) && l_201));
                        l_205 = p_68;
                        if (p_68.f0)
                            continue;
                    }
                }
            }
            if (func_37((safe_lshift_func_int16_t_s_u(((!g_6.f1) ^ ((((*l_167) = ((safe_mod_func_int32_t_s_s(l_188, (g_153 | ((p_65 > ((safe_rshift_func_uint16_t_u_u(((*l_220) = (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(g_126, (p_66 & ((*g_127) > (safe_rshift_func_int16_t_s_u(func_37((*l_79), (p_69 = ((***l_82) , p_68.f2))), g_6.f0)))))) , p_68.f0) < p_68.f0), 5))), (**l_80))) < g_110[0][1][4])) < 1UL)))) , p_68.f0)) ^ (***g_89)) && (**l_81))), 10)), l_188))
            {
                (**l_82) = &l_162;

                ;
            }
            else
            {
                short **l_222[5];
                short ***l_223 = &l_222[2];
                int i;
                for (i = 0; i < 5; i++)
                    l_222[i] = (void*)0;
                for (l_103 = 0; (l_103 <= 0); l_103 += 1)
                {
                    int *l_221 = &g_46;
                    (*l_80) = &p_67;

                    ;
                    l_221 = (**g_89);
                    for (p_69 = 0; (p_69 <= 0); p_69 += 1)
                    {
                        (*l_168) = p_68;
                    }
                }

                ;
                (*l_223) = l_222[2];
            }

            ;
            for (l_103 = 0; (l_103 >= 0); l_103 -= 1)
            {
                int *l_224 = &g_46;
                char *l_235 = &g_110[0][1][2];
                int l_240 = 0x751552BAL;
                char **l_243 = &l_235;
                l_224 = (void*)0;

                ;
            }
            (*l_79) = 0x085EF97BL;
        }
        else
        {
            struct S0 *l_273 = &g_255;
            int *l_276 = &l_162;
            for (g_6.f1 = 0; (g_6.f1 >= 2); ++g_6.f1)
            {
                for (p_68.f1 = 2; (p_68.f1 == 17); ++p_68.f1)
                {
                    (**l_82) = ((**g_89) = (*g_90));
                    for (g_126 = 0; (g_126 <= 0); g_126 += 1)
                    {
                        int i, j, k;
                        p_68.f2 = g_110[g_126][(g_126 + 3)][(g_126 + 9)];
                        g_255 = ((*l_168) = l_154);
                        return &g_6;


                    }
                }
            }
            if ((*g_45))
            {
                short l_257 = 1L;
                if (func_37(g_256, l_257))
                {
                    l_258 = &g_127;
                }
                else
                {
                    l_259 = &g_255;
                    (**l_80) = (safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((3L >= ((p_66 || func_37(p_68.f0, (***l_82))) & (g_57 = 7UL))), (0x93F3L || (p_67 == (safe_sub_func_uint8_t_u_u(0xACL, 1L)))))) & l_257), p_65)), 0L)) & 0x9495L) , p_65), g_46));
                    (*l_80) = &p_67;

                    ;
                }

                ;
            }
            else
            {
                int l_291 = (-9L);
                for (g_57 = 0; (g_57 <= 0); g_57 += 1)
                {
                    return l_273;


                }
                for (g_126 = 0; (g_126 <= (-17)); g_126--)
                {
                    l_276 = l_276;
                }
                p_68.f2 = ((**l_80) = ((g_51 && ((safe_mod_func_int8_t_s_s(((l_279 , (((*l_167) = 0x79FFB8CEL) >= ((!(safe_div_func_uint16_t_u_u(((((l_162 <= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_37((p_68.f2 >= (&l_167 != (func_37((p_67 < (safe_rshift_func_int16_t_s_u((((*l_276) != (safe_sub_func_int8_t_s_s((~0xC8L), 0xCBL))) ^ (*l_79)), p_69))), l_290[9]) , (void*)0))), l_290[9]), g_153)), p_67))) < 1UL) , 4294967293UL) , l_291), l_291))) , p_69))) , g_255.f1), g_255.f1)) == 65530UL)) <= (***l_82)));
            }

            ;
        }

        ;
    }


    return &g_6;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_669[i][j][k], "g_669[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_971[i][j], "g_971[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1291, "g_1291", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1296[i].f0, "g_1296[i].f0", print_hash_value);
        transparent_crc(g_1296[i].f1, "g_1296[i].f1", print_hash_value);
        transparent_crc(g_1296[i].f2, "g_1296[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1483, "g_1483", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
