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



static unsigned char g_22 = 0x1AL;
static char g_24 = 1L;
static int *g_45 = (void*)0;
static int g_47 = 0x5540FFF0L;
static int g_92 = 0xDBB371DAL;
static short g_109 = 0L;
static short *g_149 = &g_109;
static unsigned short g_156[1][4][6] = {{{0x2BC8L, 0UL, 65531UL, 0UL, 0x2BC8L, 0xFFECL}, {0x2BC8L, 0UL, 65531UL, 0UL, 0x2BC8L, 0xFFECL}, {0x2BC8L, 0UL, 65531UL, 0UL, 0x2BC8L, 0xFFECL}, {0x2BC8L, 0UL, 65531UL, 0UL, 0x2BC8L, 0xFFECL}}};
static int g_168 = 0xA12BE6C4L;
static short **g_174 = (void*)0;
static unsigned char g_179 = 0x47L;
static int *g_225 = &g_47;
static int *g_240 = &g_47;
static int g_248[1][7][7] = {{{5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}, {5L, 0x543B9BA4L, 0x543B9BA4L, 5L, 0x8736EE14L, (-1L), (-4L)}}};
static unsigned g_261[5][10] = {{6UL, 4294967291UL, 4294967295UL, 4294967291UL, 6UL, 0x0ACB09DCL, 4294967288UL, 4294967291UL, 0x3F6F1915L, 4294967291UL}, {6UL, 4294967291UL, 4294967295UL, 4294967291UL, 6UL, 0x0ACB09DCL, 4294967288UL, 4294967291UL, 0x3F6F1915L, 4294967291UL}, {6UL, 4294967291UL, 4294967295UL, 4294967291UL, 6UL, 0x0ACB09DCL, 4294967288UL, 4294967291UL, 0x3F6F1915L, 4294967291UL}, {6UL, 4294967291UL, 4294967295UL, 4294967291UL, 6UL, 0x0ACB09DCL, 4294967288UL, 4294967291UL, 0x3F6F1915L, 4294967291UL}, {6UL, 4294967291UL, 4294967295UL, 4294967291UL, 6UL, 0x0ACB09DCL, 4294967288UL, 4294967291UL, 0x3F6F1915L, 4294967291UL}};
static char g_265 = 4L;
static char *g_264 = &g_265;
static short ***g_310 = &g_174;
static short g_360[5] = {0x4CCCL, 0x420CL, 0x4CCCL, 0x420CL, 0x4CCCL};
static int g_372 = (-1L);
static char *g_384 = &g_265;
static short g_385 = (-1L);
static unsigned short *g_418 = &g_156[0][3][5];
static unsigned short **g_417 = &g_418;
static int g_441[6][1][4] = {{{4L, 6L, (-1L), 6L}}, {{4L, 6L, (-1L), 6L}}, {{4L, 6L, (-1L), 6L}}, {{4L, 6L, (-1L), 6L}}, {{4L, 6L, (-1L), 6L}}, {{4L, 6L, (-1L), 6L}}};
static unsigned char **g_469 = (void*)0;
static int *g_590[7] = {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168};
static int **g_589 = &g_590[4];
static int ***g_588[4] = {&g_589, &g_589, &g_589, &g_589};
static unsigned g_620[10][4][4] = {{{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}, {{0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}, {0x5ED0CD50L, 0x82A8B266L, 0x5ED0CD50L, 4294967294UL}}};
static int g_623 = (-9L);
static unsigned short g_642 = 65535UL;
static unsigned g_691 = 0x8FD75546L;
static unsigned *g_852[7] = {&g_620[0][3][0], (void*)0, &g_620[0][3][0], (void*)0, &g_620[0][3][0], (void*)0, &g_620[0][3][0]};
static unsigned **g_851 = &g_852[3];
static unsigned short ***g_1013 = &g_417;
static unsigned char ***g_1024 = &g_469;
static unsigned char ***g_1025[3] = {&g_469, &g_469, &g_469};
static int g_1026 = 0x70FF3880L;
static char g_1073 = 0x98L;
static int ***g_1178 = (void*)0;
static int *g_1277 = &g_441[2][0][1];
static int g_1338 = 0x5AF43B72L;
static short g_1357 = 2L;
static short g_1390 = 0x6568L;
static int g_1412[4][10] = {{0x8F9D6766L, 0L, 0x777915EFL, 1L, 0x83D06488L, 0x0220AAE9L, 0x83D06488L, 1L, 0x777915EFL, 0L}, {0x8F9D6766L, 0L, 0x777915EFL, 1L, 0x83D06488L, 0x0220AAE9L, 0x83D06488L, 1L, 0x777915EFL, 0L}, {0x8F9D6766L, 0L, 0x777915EFL, 1L, 0x83D06488L, 0x0220AAE9L, 0x83D06488L, 1L, 0x777915EFL, 0L}, {0x8F9D6766L, 0L, 0x777915EFL, 1L, 0x83D06488L, 0x0220AAE9L, 0x83D06488L, 1L, 0x777915EFL, 0L}};



static int func_1(void);
static int func_2(int p_3, unsigned short p_4, short p_5);
static int func_6(unsigned p_7, int p_8, int p_9);
static unsigned char func_12(int p_13, unsigned short p_14);
static short func_18(short p_19);
static unsigned short func_25(char * p_26, char * p_27, unsigned p_28, char * p_29, char p_30);
static char * func_31(unsigned p_32);
static unsigned short func_36(char * p_37);
static char * func_38(char * p_39, char * p_40, unsigned p_41);
static int * func_42(int * p_43, int * p_44);
static int func_1(void)
{
    unsigned l_15 = 0x046B6EB6L;
    char *l_23 = &g_24;
    short l_35 = 0x0CE9L;
    int *l_694 = (void*)0;
    int *l_695 = (void*)0;
    int *l_696 = &g_372;
    int l_697 = 0xF91FE109L;
    int **l_1176 = &l_696;
    int ***l_1175 = &l_1176;
    unsigned short l_1200[1][2][10] = {{{0x94EEL, 0x0A9BL, 0x131EL, 0x0A9BL, 0x94EEL, 0x0A9BL, 0x131EL, 0x0A9BL, 0x94EEL, 0x0A9BL}, {0x94EEL, 0x0A9BL, 0x131EL, 0x0A9BL, 0x94EEL, 0x0A9BL, 0x131EL, 0x0A9BL, 0x94EEL, 0x0A9BL}}};
    char l_1250 = 0x34L;
    unsigned l_1275 = 0xB6FA6E6EL;
    char l_1333 = 0x44L;
    int l_1340 = 0xE94E6BB9L;
    unsigned **l_1350[2][10] = {{(void*)0, &g_852[0], &g_852[2], &g_852[0], (void*)0, &g_852[0], &g_852[2], &g_852[0], (void*)0, &g_852[0]}, {(void*)0, &g_852[0], &g_852[2], &g_852[0], (void*)0, &g_852[0], &g_852[2], &g_852[0], (void*)0, &g_852[0]}};
    int l_1354 = (-1L);
    unsigned char *l_1384 = &g_179;
    unsigned l_1401 = 4294967295UL;
    int i, j, k;
    if (func_2(func_6((safe_sub_func_int8_t_s_s(0x69L, func_12(l_15, (l_697 = (0x9C1464F1L ^ ((*l_696) = (9UL >= (safe_mul_func_int16_t_s_s(func_18(((((((((((*g_418) = ((safe_rshift_func_uint8_t_u_s(l_15, ((*l_23) = g_22))) , func_25(l_23, func_31(((safe_mod_func_int16_t_s_s(l_35, func_36(func_38(&g_24, l_23, g_22)))) , l_35)), l_15, g_264, (*g_264)))) != l_15) , 5UL) && 0x7BAAL) , l_35) != g_385) == l_35) | l_35) , 1L)), l_15))))))))), g_691, g_691), g_691, g_691))
    {
        unsigned char l_1154 = 1UL;
        for (g_372 = 0; (g_372 >= 5); g_372 = safe_add_func_int32_t_s_s(g_372, 8))
        {
            return l_1154;
        }
    }
    else
    {
        return (**g_589);
    }
    (*l_696) = 0L;
    if (((*l_696) = (*l_696)))
    {
        char *l_1159 = &g_1073;
        int l_1168[10][2][3] = {{{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}, {{0x716E960DL, 0xC2C784E2L, 0x716E960DL}, {0x716E960DL, 0xC2C784E2L, 0x716E960DL}}};
        int **l_1171 = &l_696;
        unsigned char l_1201 = 250UL;
        unsigned l_1217[2][7];
        unsigned l_1223 = 4294967290UL;
        char l_1236 = 0xF6L;
        short l_1249[2];
        unsigned short **l_1253 = &g_418;
        unsigned l_1287[8][2][3] = {{{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}, {{0x0665FEECL, 0UL, 0x57339B2AL}, {0x0665FEECL, 0UL, 0x57339B2AL}}};
        unsigned l_1297 = 18446744073709551611UL;
        unsigned char *l_1309 = &g_179;
        char l_1319 = 0x68L;
        unsigned short l_1322[7][3][1] = {{{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}, {{0x0184L}, {0x0184L}, {0x0184L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_1217[i][j] = 7UL;
        }
        for (i = 0; i < 2; i++)
            l_1249[i] = 1L;
        for (g_372 = 0; (g_372 <= 6); g_372 += 1)
        {
            int l_1160 = 0x17ED9178L;
            unsigned char *l_1163 = &g_22;
        }
        for (g_22 = 0; (g_22 <= 3); g_22 += 1)
        {
            unsigned char l_1174 = 254UL;
            int ****l_1177 = &l_1175;
            int ****l_1179 = &g_1178;
            short **l_1185 = &g_149;
            short l_1206 = 0x62EEL;
            unsigned l_1215 = 0UL;
            int l_1239 = 1L;
            char *l_1263[9] = {(void*)0, &g_1073, (void*)0, &g_1073, (void*)0, &g_1073, (void*)0, &g_1073, (void*)0};
            int *l_1278 = (void*)0;
            unsigned short l_1308 = 65535UL;
            short l_1320 = 0x3F87L;
            unsigned short *l_1325 = &l_1200[0][1][4];
            unsigned l_1328 = 4294967295UL;
            int i;
        }
        (*l_1176) = (**l_1175);
    }
    else
    {
        short l_1339 = 0xEA87L;
        unsigned ***l_1349[9][5][5] = {{{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}, {{&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}, {&g_851, &g_851, (void*)0, (void*)0, &g_851}}};
        char *l_1353 = &g_265;
        unsigned char *l_1355 = (void*)0;
        int l_1356 = 0x2F58D196L;
        int l_1370 = 0xBD5E7C50L;
        unsigned char l_1409 = 0xF5L;
        unsigned short l_1410 = 0x0968L;
        int i, j, k;
        if (((*g_1277) = ((-6L) ^ l_1339)))
        {
            unsigned short l_1362 = 0xDE88L;
            char **l_1365 = &g_264;
            int *l_1371 = &g_623;
            (*l_1176) = &l_1356;
            (**l_1176) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_1362, (((safe_mod_func_int16_t_s_s(func_12(l_1362, func_25(((*l_1365) = &g_265), &g_265, (((func_36(l_1355) , ((g_691 = (safe_lshift_func_uint8_t_u_s((0L > ((*g_1277) = func_6((*l_696), ((safe_sub_func_uint16_t_u_u((((l_1356 > (***l_1175)) | l_1362) | l_1339), l_1362)) || 1UL), l_1339))), 6))) , 0xC0L)) , 7UL) , l_1339), &l_1250, l_1362)), (**l_1176))) , l_1362) | l_1370))), 0UL)) , 0x85E67B7BL);
            (**l_1175) = (**l_1175);
        }
        else
        {
            char l_1375 = 0xA8L;
            unsigned char l_1402 = 4UL;
            for (g_372 = 0; (g_372 >= (-9)); g_372 = safe_sub_func_uint16_t_u_u(g_372, 6))
            {
                int l_1374 = 0x2112E418L;
                if ((*g_1277))
                {
                    for (g_168 = 0; (g_168 <= 0); g_168 += 1)
                    {
                        (*l_1176) = &g_248[0][6][4];
                        return (**g_589);
                    }
                    (**l_1175) = &g_441[2][0][0];
                    (*l_1176) = &l_1356;
                }
                else
                {
                    (*l_1176) = (*l_1176);
                }
                if (l_1374)
                    continue;
                (*g_1277) = l_1374;
                for (l_697 = 2; (l_697 >= 0); l_697 -= 1)
                {
                    unsigned l_1380[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1380[i] = 2UL;
                    for (g_92 = 2; (g_92 >= 0); g_92 -= 1)
                    {
                        int l_1385 = 0xACAD40E7L;
                        int i;
                        l_1374 = (l_1385 && (*g_418));
                        g_240 = &g_1338;
                        (**l_1175) = (**l_1175);
                    }
                }
            }
            (***l_1175) = (*g_1277);
            for (l_1370 = 0; (l_1370 != 3); ++l_1370)
            {
                int *l_1393 = &g_47;
                (*l_1176) = l_1393;
            }
            l_1402 = (((*l_696) = (safe_unary_minus_func_int32_t_s((0xA84EL >= (!(~g_642)))))) | (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(func_36(&l_1375), l_1339)), (l_1401 <= (*g_384)))), l_1370)));
        }
        for (l_1354 = 6; (l_1354 >= 2); l_1354 -= 1)
        {
            char l_1411 = 1L;
            (***l_1175) = l_1409;
            (*l_696) = func_36(l_1353);
        }
    }
    return (**g_589);
}







static int func_2(int p_3, unsigned short p_4, short p_5)
{
    char *l_800 = &g_265;
    int l_803 = 0xD638A3FFL;
    short l_810 = 0x5426L;
    int *l_812[7][10] = {{&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}, {&g_248[0][0][2], &g_372, &g_248[0][6][5], &g_623, &g_248[0][6][5], &g_372, &g_248[0][0][2], &g_372, &g_248[0][6][4], &g_47}};
    unsigned short **l_826 = &g_418;
    unsigned l_868 = 18446744073709551615UL;
    int **l_900 = &g_590[6];
    unsigned char l_934 = 255UL;
    short l_936[6] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L};
    unsigned short l_1020 = 0x73BAL;
    unsigned char ***l_1023 = &g_469;
    short **l_1068 = (void*)0;
    unsigned short ****l_1089[1];
    char *l_1098 = &g_24;
    int *l_1123 = &g_248[0][6][0];
    unsigned l_1151[2];
    int i, j;
    for (i = 0; i < 1; i++)
        l_1089[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1151[i] = 18446744073709551608UL;
    if (func_36(l_800))
    {
        char l_811 = 0xBAL;
        int *l_813 = &g_441[2][0][0];
        int l_827[5][2] = {{(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}};
        unsigned **l_853 = &g_852[3];
        int **l_878 = &g_590[4];
        unsigned l_929 = 0UL;
        unsigned l_947 = 0UL;
        int l_950 = (-5L);
        unsigned short *l_969 = &g_642;
        unsigned char *l_971[6][9] = {{(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}, {(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}, {(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}, {(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}, {(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}, {(void*)0, &g_22, &g_179, &g_22, &g_179, &g_22, (void*)0, &l_934, &g_179}};
        unsigned char **l_970 = &l_971[1][3];
        short l_979 = 0L;
        int **l_998 = (void*)0;
        int **l_999 = (void*)0;
        int **l_1000 = &g_225;
        unsigned short ***l_1009 = &l_826;
        int i, j;
        if ((((((safe_lshift_func_uint16_t_u_u(func_12(p_5, (**g_417)), 9)) >= (l_803 , (safe_lshift_func_int16_t_s_s((l_803 , (g_360[3] , (g_360[3] <= ((safe_rshift_func_uint8_t_u_s(l_803, ((((safe_sub_func_int32_t_s_s(l_803, p_5)) != g_691) , l_803) || l_810))) , l_811)))), l_811)))) , (*g_384)) ^ g_360[3]) != (-1L)))
        {
            l_812[2][1] = (void*)0;
        }
        else
        {
            unsigned l_816 = 0x473707DAL;
            int l_845[10][5] = {{1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}, {1L, 0x630D5D67L, 9L, 0xAFECAA13L, (-4L)}};
            int **l_881 = (void*)0;
            unsigned short ***l_893 = &g_417;
            int **l_899 = &g_590[6];
            int *l_906 = &g_372;
            unsigned short l_919 = 65532UL;
            char *l_984 = &l_811;
            char l_987[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_987[i] = 1L;
            l_813 = (g_240 = &l_803);
            for (g_168 = (-24); (g_168 >= 6); ++g_168)
            {
                unsigned short l_850[4] = {0x906CL, 0xF124L, 0x906CL, 0xF124L};
                unsigned ***l_854 = (void*)0;
                unsigned ***l_855 = &l_853;
                int *l_860[9][6][4] = {{{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}, {{&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}, {&g_441[5][0][3], &l_845[7][2], &l_803, (void*)0}}};
                char *l_864 = &g_24;
                unsigned l_867 = 0x22DB10E8L;
                short l_869 = 0L;
                unsigned l_882 = 1UL;
                short *l_894 = (void*)0;
                short *l_895 = &l_869;
                unsigned short *l_896 = (void*)0;
                unsigned short *l_901 = &g_642;
                unsigned short *l_902 = &l_850[3];
                int i, j, k;
            }
            if (((*g_310) != (void*)0))
            {
                for (l_810 = (-5); (l_810 == 20); l_810 = safe_add_func_uint8_t_u_u(l_810, 3))
                {
                    unsigned *l_918 = &g_620[5][2][2];
                    (*l_813) = 0xF66F8731L;
                    if ((((*l_800) = (safe_rshift_func_uint8_t_u_s((p_3 < ((*l_918) = (~(*l_813)))), 0))) != l_919))
                    {
                        (*g_240) = (*g_240);
                    }
                    else
                    {
                        (*l_906) = p_3;
                    }
                }
            }
            else
            {
                int *l_922 = &l_845[7][2];
                int **l_972 = &l_922;
                for (g_691 = (-15); (g_691 == 43); g_691 = safe_add_func_uint16_t_u_u(g_691, 4))
                {
                    int **l_923 = &l_813;
                    int **l_924 = &l_922;
                    unsigned short *l_935[9][9][3] = {{{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}, {{&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}, {&l_919, &l_919, &l_919}}};
                    unsigned *l_953 = &g_620[2][1][3];
                    int l_966[8];
                    short *l_967 = (void*)0;
                    short *l_968 = &l_936[2];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_966[i] = 9L;
                    (*l_924) = ((*l_923) = &l_845[9][0]);
                    if (((safe_mod_func_uint16_t_u_u(0x779EL, (p_4 || (func_18(l_929) ^ (((**l_924) != (((safe_mul_func_int16_t_s_s(0x34A2L, (safe_mod_func_uint16_t_u_u((p_4 = l_934), g_22)))) != ((*l_813) , (-3L))) & p_3)) > g_691))))) >= 0xAAL))
                    {
                        unsigned short l_937 = 0x0171L;
                        (**l_924) = l_936[2];
                        return l_937;
                    }
                    else
                    {
                        int *l_938 = &g_47;
                        int l_949 = 0xF65A26FEL;
                        (*l_924) = ((*l_923) = (func_18(func_36(&g_265)) , &g_623));
                        (*l_923) = &g_372;
                        (*l_924) = &g_372;
                        (**l_924) = func_12(((((***l_893) = (**g_417)) > ((**l_924) <= (((*l_906) , &g_418) != ((safe_mod_func_int32_t_s_s((p_3 | (safe_lshift_func_uint8_t_u_u(p_3, 7))), (safe_mul_func_int16_t_s_s(((l_947 >= ((!((*l_813) > ((safe_unary_minus_func_int32_t_s((*g_240))) | p_5))) | l_949)) < p_4), 0x268AL)))) , (void*)0)))) != 65534UL), l_950);
                    }
                    if (((((safe_add_func_uint32_t_u_u((((*l_953) = p_5) >= p_4), (safe_div_func_int32_t_s_s((*l_906), (safe_mod_func_uint16_t_u_u((((((p_4 > (+((safe_div_func_int16_t_s_s((*l_813), ((*l_968) = (safe_lshift_func_int8_t_s_s((((*l_813) <= ((*g_240) = ((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_922) ^ ((((*g_417) = (**l_893)) == (void*)0) < l_966[4])), 0x8B84L)), (*l_922))) == 0xD4L))) & (*l_813)), 5))))) | p_4))) , (*g_417)) == l_969) , (*l_922)) || (*g_384)), 7L)))))) < p_4) , p_5) < 0x58L))
                    {
                        (*l_922) = 0xABABE1B1L;
                        l_970 = g_469;
                        return p_4;
                    }
                    else
                    {
                        return p_4;
                    }
                }
                (*l_972) = &l_827[4][1];
            }
            for (g_372 = 23; (g_372 == 18); g_372--)
            {
                unsigned l_988 = 0xB995BA9DL;
                unsigned l_989 = 0UL;
                unsigned *l_990 = &l_816;
                int l_991 = 5L;
                l_988 = ((((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_979, ((safe_sub_func_int8_t_s_s((p_3 | (safe_mul_func_int8_t_s_s(func_36(&l_987[3]), p_4))), (*l_906))) == (*g_418)))), p_3)) , p_4) >= (*l_813)) == p_3);
                (*l_813) = ((p_3 , (l_989 = (*l_813))) & (func_6(l_988, ((*g_240) = p_3), ((*l_853) != (((*l_813) , (p_5 || (l_991 = ((*l_990) = 0x8E812126L)))) , ((g_179 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(1UL, p_3)) | (*l_813)), 5)), 1))) , l_812[2][1])))) , 0x09L));
            }
        }
        (*l_1000) = &g_372;
        for (l_934 = 0; (l_934 <= 0); l_934 += 1)
        {
            unsigned l_1002 = 4294967295UL;
            int *l_1005 = &l_827[1][0];
            for (g_24 = 0; (g_24 >= 0); g_24 -= 1)
            {
                int *l_1001 = &l_827[2][0];
                if (((*l_813) = (*g_225)))
                {
                    if ((*g_240))
                        break;
                    (*l_1000) = l_1001;
                }
                else
                {
                    if (l_1002)
                        break;
                }
                (*g_240) = (safe_mod_func_int32_t_s_s((*g_225), p_4));
                for (g_385 = 0; (g_385 <= 0); g_385 += 1)
                {
                    char *l_1006 = &g_24;
                    int l_1015 = 0xEC961640L;
                    l_1005 = &g_623;
                    for (g_92 = 0; (g_92 <= 0); g_92 += 1)
                    {
                        unsigned short ***l_1010 = &l_826;
                        unsigned short ****l_1011 = (void*)0;
                        unsigned short ****l_1012[6][3][10] = {{{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}, {{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}, {{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}, {{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}, {{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}, {{&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}, {&l_1010, &l_1010, (void*)0, &l_1010, &l_1009, &l_1009, &l_1009, &l_1010, &l_1009, &l_1010}}};
                        int l_1014 = 0xEB715216L;
                        int i, j, k;
                        (*l_1000) = l_1001;
                        (*l_1000) = l_1005;
                        (*l_1001) = ((!((func_36(l_1006) <= ((*l_800) = ((safe_mod_func_uint32_t_u_u((*l_1001), 4294967295UL)) > (-6L)))) && ((l_1009 == (g_1013 = l_1010)) >= l_1014))) , (*g_225));
                    }
                    return l_1015;
                }
                for (p_4 = 0; (p_4 <= 0); p_4 += 1)
                {
                    for (l_950 = 0; (l_950 >= 0); l_950 -= 1)
                    {
                        unsigned short l_1016 = 0x183FL;
                        (*l_1005) = l_1016;
                    }
                }
            }
            return p_5;
        }
    }
    else
    {
        int l_1017 = (-1L);
        unsigned char *l_1021 = &g_22;
        int l_1022[8] = {9L, 9L, 0x54AA3042L, 9L, 9L, 0x54AA3042L, 9L, 9L};
        unsigned *l_1027 = &g_620[4][3][1];
        int *l_1091[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1091[i] = &l_1022[5];
        (*g_240) = (((*g_851) = l_812[2][7]) == (g_109 , (void*)0));
        g_441[3][0][3] = ((((((((l_1017 , l_1017) | (safe_add_func_uint8_t_u_u((((*l_1021) = l_1020) > (*g_384)), func_36(&g_24)))) , ((l_1022[6] , l_1023) == (g_1025[1] = (g_1024 = l_1023)))) > 0x479F4613L) || 0x4AABF810L) , g_1026) , l_1027) != l_812[6][0]);
        for (l_810 = 0; (l_810 != 10); l_810++)
        {
            unsigned l_1063 = 0x42009FB4L;
            int ****l_1070 = &g_588[3];
            for (l_1017 = 0; (l_1017 == (-15)); l_1017 = safe_sub_func_uint16_t_u_u(l_1017, 4))
            {
                int **l_1032 = &l_812[5][7];
                unsigned l_1039 = 18446744073709551610UL;
                unsigned l_1042 = 0xE24AD189L;
                (*l_1032) = &l_1022[4];
                for (g_109 = 0; (g_109 > (-16)); g_109 = safe_sub_func_uint32_t_u_u(g_109, 5))
                {
                    unsigned char *l_1040 = &l_934;
                    unsigned char *l_1041 = &g_179;
                    l_1042 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((void*)0 == &g_385), (func_36((g_264 = (void*)0)) , p_5))), (((**g_589) , (g_360[1] = (l_1022[6] = l_1039))) < (((*g_384) = (*g_384)) <= ((*l_1041) = ((*l_1040) = ((*l_1021) = ((*g_1024) != &l_1021))))))));
                    for (p_5 = 18; (p_5 > (-11)); p_5--)
                    {
                        int *l_1045 = (void*)0;
                        (*l_1032) = l_1045;
                    }
                }
            }
            for (g_265 = 14; (g_265 > 6); g_265 = safe_sub_func_uint32_t_u_u(g_265, 1))
            {
                char *l_1048 = &g_265;
                int l_1054[6][4][3] = {{{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}, {{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}, {{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}, {{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}, {{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}, {{0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}, {0L, 0x77AC8304L, 0xC87A94EEL}}};
                int i, j, k;
                (*g_240) = p_3;
                if (l_1017)
                {
                    int l_1052 = (-8L);
                    if (p_4)
                    {
                        char *l_1049[9] = {&g_265, &g_24, &g_265, &g_24, &g_265, &g_24, &g_265, &g_24, &g_265};
                        int i;
                        (*g_240) = (l_1048 == l_1049[0]);
                        (*g_240) = ((safe_mod_func_uint8_t_u_u(l_1052, (*g_384))) <= p_5);
                        (*g_240) = p_3;
                    }
                    else
                    {
                        int **l_1053 = &l_812[2][1];
                        (*l_1053) = (void*)0;
                        if ((*g_240))
                            break;
                        return l_1054[2][1][2];
                    }
                    if ((*g_240))
                        break;
                }
                else
                {
                    short **l_1071 = &g_149;
                    int l_1076 = (-1L);
                    int **l_1077 = (void*)0;
                    int **l_1078 = &g_225;
                    if ((l_1054[2][1][2] & l_1017))
                    {
                        (*g_240) = 7L;
                    }
                    else
                    {
                        int ****l_1069 = &g_588[2];
                        char *l_1072 = &g_1073;
                        int l_1074 = 0L;
                        unsigned short l_1075 = 65535UL;
                        l_1075 = (safe_sub_func_uint8_t_u_u(l_1022[6], ((((safe_mul_func_int8_t_s_s((-10L), ((((safe_mul_func_int8_t_s_s(1L, ((((*g_384) || (((((*l_1021) = (safe_add_func_int8_t_s_s(((*l_1072) = (((l_1063 = ((*g_240) = p_5)) ^ (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_1068 == ((*g_310) = ((g_24 = ((p_3 < (((p_5 , l_1069) != l_1070) , p_3)) != 4294967295UL)) , l_1071))), 15)), 0x354FL))) < l_1022[1])), l_1054[2][2][0]))) == p_3) | l_1074) && l_1074)) & p_3) , p_5))) & l_1054[2][1][2]) & p_3) <= 0x726CL))) , 65527UL) > (*g_418)) && p_5)));
                    }
                    (*g_240) = (l_1076 = 0x945E0E88L);
                    (*l_1078) = &g_441[2][0][0];
                    l_812[2][2] = ((*l_1078) = (void*)0);
                }
                for (g_47 = (-23); (g_47 <= (-4)); ++g_47)
                {
                    int **l_1081[8][1][4] = {{{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}, {{&l_812[0][9], &l_812[6][9], &l_812[0][9], &l_812[6][9]}}};
                    int i, j, k;
                    g_225 = &l_803;
                }
            }
        }
        for (g_265 = 0; (g_265 <= 0); g_265 += 1)
        {
            int **l_1082 = &g_225;
            unsigned short **l_1083 = &g_418;
            char *l_1107[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1107[i] = &g_24;
            (*g_1024) = (*l_1023);
            (*l_1082) = &l_1022[2];
            l_1083 = (*g_1013);
            (*l_1082) = &g_248[0][2][3];
            for (g_47 = 0; (g_47 >= 0); g_47 -= 1)
            {
                char **l_1099 = &g_264;
                int *l_1104 = &g_623;
                short **l_1111 = &g_149;
                for (g_691 = 0; (g_691 <= 3); g_691 += 1)
                {
                    char *l_1084 = &g_265;
                    char **l_1088 = (void*)0;
                    char ***l_1087 = &l_1088;
                    int i, j, k;
                    g_248[g_47][(g_265 + 3)][(g_265 + 6)] = (func_36(l_1084) > (g_248[g_47][(g_265 + 2)][(g_265 + 4)] && (safe_div_func_int16_t_s_s((p_5 = 0x6EB2L), ((((*l_1087) = (void*)0) != (void*)0) && (g_248[g_47][(g_691 + 2)][(g_691 + 3)] , (((***g_1013) || (((void*)0 != l_1089[0]) , (*g_418))) > 0L)))))));
                    for (p_3 = 0; (p_3 >= 0); p_3 -= 1)
                    {
                        int *l_1090 = &l_1022[6];
                        (*l_1082) = l_1090;
                        if ((*g_240))
                            break;
                        return (*g_240);
                    }
                }
                l_1091[0] = ((*l_1082) = (*l_1082));
                if ((((**g_417) = (safe_add_func_int32_t_s_s((**l_1082), ((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((*g_384), (*g_384))), (~func_36(((*l_1099) = l_1098))))) <= (p_3 ^ (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_3, p_4)), 6UL))))))) , p_3))
                {
                    for (l_810 = 0; l_810 < 1; l_810 += 1)
                    {
                        l_1089[l_810] = &g_1013;
                    }
                }
                else
                {
                    (**l_1082) = ((*g_225) & p_4);
                    if ((*g_225))
                        break;
                    (*l_1082) = l_1104;
                }
                for (l_934 = 0; (l_934 <= 0); l_934 += 1)
                {
                    char *l_1116 = &g_1073;
                    unsigned l_1128 = 0x8CDA0690L;
                    int i, j, k;
                    g_248[g_47][g_47][(g_47 + 3)] = p_5;
                    if ((safe_mul_func_int16_t_s_s((**l_1082), (func_36(l_1107[7]) & (*g_225)))))
                    {
                        char *l_1110 = (void*)0;
                        unsigned short ***l_1119 = &g_417;
                        short ***l_1120 = (void*)0;
                        short ***l_1121 = &l_1068;
                        int l_1122 = 1L;
                        g_441[0][0][1] = (safe_add_func_int8_t_s_s((((((*l_1099) = l_1110) == (void*)0) , ((**l_1082) = ((((*g_310) = l_1111) == ((*l_1121) = ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_36(l_1116), ((((safe_sub_func_uint16_t_u_u(((p_4 <= p_4) ^ ((((l_1119 != &g_417) , p_4) , (*g_1013)) == (*l_1119))), p_4)) != 0x09F7L) <= 0xF0E8L) , (**l_1082)))), (*g_384))) , &g_149))) || 65526UL))) && l_1122), 9L));
                        if (p_3)
                            continue;
                    }
                    else
                    {
                        (*l_1082) = &g_248[0][6][4];
                        (*l_1082) = l_1123;
                        (*l_1082) = (((*l_1021) = (safe_mul_func_int16_t_s_s(g_360[3], (*l_1104)))) , &l_803);
                    }
                    (*g_225) = (safe_sub_func_uint16_t_u_u((((func_36(((*g_240) , (*l_1099))) && (((**l_1082) , p_3) == (*g_225))) < l_1128) , (p_4 = (safe_sub_func_uint8_t_u_u((func_36(l_1098) , 255UL), (*g_384))))), (**g_417)));
                    for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
                    {
                        unsigned *l_1133 = &l_868;
                        short *l_1140 = &g_360[3];
                        (*l_1082) = &g_248[0][6][4];
                        (*g_225) = (safe_sub_func_int8_t_s_s(func_36(l_1107[3]), (((*l_1133) = p_5) , (((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((-8L), 5)) , (*g_384)), p_3)) | (~(((void*)0 != &g_174) <= (!((*l_1140) = (safe_lshift_func_int16_t_s_s(0x9387L, 8))))))) & (-1L)))));
                    }
                }
            }
        }
    }
    for (g_1026 = 20; (g_1026 == 1); g_1026 = safe_sub_func_int8_t_s_s(g_1026, 8))
    {
        short *l_1147 = &g_109;
        short *l_1148[8] = {&l_810, &g_360[3], &l_810, &g_360[3], &l_810, &g_360[3], &l_810, &g_360[3]};
        int ****l_1149 = &g_588[2];
        int l_1150 = (-1L);
        int i;
        (*l_1123) = (((func_6(((safe_rshift_func_uint8_t_u_s((((*l_1123) = ((p_5 | p_4) , ((p_5 , p_4) , (safe_lshift_func_uint16_t_u_s(((*g_418) = (((65531UL >= (g_360[4] = ((*l_1147) = (-10L)))) , (((~0x5AD1F86BL) != p_4) > (((void*)0 == l_1149) | p_5))) , l_1150)), l_1150))))) != p_5), p_3)) , 0x1114750AL), p_3, l_1151[0]) | 1L) ^ 0xD5DBL) && p_4);
    }
    return (*l_1123);
}







static int func_6(unsigned p_7, int p_8, int p_9)
{
    unsigned char l_797[3];
    int *l_798 = &g_372;
    int *l_799[9][3] = {{&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}, {&g_623, (void*)0, &g_623}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_797[i] = 252UL;
    for (p_8 = 0; (p_8 > 13); p_8++)
    {
        unsigned char l_796 = 6UL;
        return l_796;
    }
    g_225 = (((func_36(func_31(l_797[0])) < l_797[0]) , p_9) , l_799[7][1]);
    return (*l_798);
}







static unsigned char func_12(int p_13, unsigned short p_14)
{
    unsigned char l_698 = 248UL;
    int l_702 = (-1L);
    int l_728[5];
    char *l_730[3];
    unsigned l_789 = 18446744073709551615UL;
    int *l_790 = &l_728[3];
    int i;
    for (i = 0; i < 5; i++)
        l_728[i] = 5L;
    for (i = 0; i < 3; i++)
        l_730[i] = &g_24;
    if (l_698)
    {
        char *l_699 = &g_265;
        int l_700[5][8] = {{(-1L), 0x174FD189L, (-9L), 0x174FD189L, (-1L), (-5L), (-1L), 0x174FD189L}, {(-1L), 0x174FD189L, (-9L), 0x174FD189L, (-1L), (-5L), (-1L), 0x174FD189L}, {(-1L), 0x174FD189L, (-9L), 0x174FD189L, (-1L), (-5L), (-1L), 0x174FD189L}, {(-1L), 0x174FD189L, (-9L), 0x174FD189L, (-1L), (-5L), (-1L), 0x174FD189L}, {(-1L), 0x174FD189L, (-9L), 0x174FD189L, (-1L), (-5L), (-1L), 0x174FD189L}};
        int *l_701[4] = {&g_248[0][6][4], &g_248[0][6][5], &g_248[0][6][4], &g_248[0][6][5]};
        unsigned char ***l_712 = (void*)0;
        int i, j;
        l_702 = (func_36(&g_24) , (l_700[4][0] = func_18((g_109 >= func_36(l_699)))));
        for (g_265 = 0; (g_265 <= 5); g_265 = safe_add_func_int16_t_s_s(g_265, 5))
        {
            int l_713 = 1L;
            int l_727 = 0x6C6C3EBFL;
            unsigned l_729[9] = {0xC7C04B49L, 0UL, 0xC7C04B49L, 0UL, 0xC7C04B49L, 0UL, 0xC7C04B49L, 0UL, 0xC7C04B49L};
            char l_733 = 0xDAL;
            int i;
            if (func_36(l_699))
            {
                short l_714 = (-6L);
                int ****l_717 = &g_588[3];
                char *l_732[6] = {&g_265, &g_24, &g_265, &g_24, &g_265, &g_24};
                int l_739[7][5] = {{0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}, {0xD5FA9FA1L, 0xE29A704AL, 0x28CCEA7EL, 0xE29A704AL, 0xD5FA9FA1L}};
                unsigned short l_760 = 0UL;
                short **l_762 = &g_149;
                int i, j;
                if (l_714)
                    break;
                for (l_702 = (-28); (l_702 != 11); l_702 = safe_add_func_int32_t_s_s(l_702, 9))
                {
                    char l_736 = (-1L);
                    unsigned l_740 = 8UL;
                    int l_743 = 0xCFB8D659L;
                    (*g_240) = (((~65535UL) , ((*g_240) ^ ((l_717 != (((((p_14 | ((g_248[0][6][2] , p_13) <= (!0xD45C82BCL))) , g_360[3]) | (p_13 == 0xEBB58D08L)) | p_13) , (void*)0)) | l_698))) <= (**g_417));
                    for (p_13 = 0; (p_13 < (-20)); p_13 = safe_sub_func_uint32_t_u_u(p_13, 6))
                    {
                        unsigned *l_723[7];
                        unsigned **l_722 = &l_723[5];
                        unsigned char *l_726 = &g_22;
                        char **l_731 = &g_264;
                        char **l_741 = &l_732[3];
                        int **l_742 = &g_45;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_723[i] = &g_620[2][3][3];
                        l_729[3] = (((safe_rshift_func_int8_t_s_u((((((void*)0 == l_722) > 0xC11DA6B7L) , p_13) > (l_727 = ((*l_726) = (safe_lshift_func_uint16_t_u_u(func_36(&g_265), 15))))), 0)) ^ (0L > ((l_728[3] = 1UL) , l_728[3]))) , 9L);
                        l_739[0][4] = (func_36(&l_736) | p_14);
                        (*l_742) = &l_727;
                    }
                    l_743 = func_36(l_730[1]);
                }
                (*g_240) = 0xD62EECE4L;
                for (g_372 = 8; (g_372 < 18); g_372 = safe_add_func_int8_t_s_s(g_372, 7))
                {
                    unsigned *l_761 = &g_261[0][1];
                    l_728[3] = (safe_mul_func_uint16_t_u_u((func_36(l_730[0]) < 8UL), (safe_add_func_int8_t_s_s(((l_739[0][4] = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x4027L, (safe_sub_func_uint8_t_u_u(p_13, 0x1BL)))), l_729[2]))) == (((*l_761) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((0x28L >= (l_714 , (*g_384))), l_760)), (*g_418)))) <= 7L)), p_14))));
                    (*g_310) = l_762;
                }
            }
            else
            {
                short l_777 = 8L;
                g_45 = &g_441[2][0][0];
                for (g_47 = 0; (g_47 >= (-12)); g_47 = safe_sub_func_uint8_t_u_u(g_47, 1))
                {
                    unsigned l_774[2][3][9] = {{{18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}, {18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}, {18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}}, {{18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}, {18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}, {18446744073709551615UL, 0UL, 0x9CBA1D16L, 0x58BBE7E9L, 0x58BBE7E9L, 0x9CBA1D16L, 0UL, 18446744073709551615UL, 0x9CBA1D16L}}};
                    int i, j, k;
                    for (g_372 = 0; (g_372 < (-2)); --g_372)
                    {
                        char *l_773 = &l_733;
                        unsigned char *l_775 = (void*)0;
                        unsigned char *l_776 = &g_179;
                        int l_778[5][3];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_778[i][j] = (-2L);
                        }
                        (*g_45) = 1L;
                        (*g_45) = p_13;
                        l_778[3][1] = ((l_698 < ((*l_776) = ((safe_mod_func_uint16_t_u_u((((*g_384) & (p_14 | l_698)) , (((((safe_lshift_func_uint8_t_u_u(((g_248[0][6][4] = ((*g_45) = (safe_sub_func_uint8_t_u_u(l_729[0], (func_36(l_773) || ((~l_774[0][1][8]) == (1L != 0x911FL))))))) | p_13), p_13)) , 0L) <= 255UL) , (*g_418)) != p_14)), 0x2FE6L)) || p_13))) , l_777);
                    }
                    for (g_109 = 0; (g_109 >= (-4)); g_109--)
                    {
                        return p_13;
                    }
                }
            }
        }
    }
    else
    {
        short l_783 = 0xACF6L;
        unsigned *l_784 = &g_261[0][1];
        l_789 = (safe_add_func_uint32_t_u_u(((((*l_784) = l_783) , 0xE840L) == (l_728[3] , (((((0x0DL < l_783) , ((l_728[3] = ((safe_mul_func_uint16_t_u_u(0UL, l_698)) > (l_702 || (safe_mul_func_uint16_t_u_u(p_13, (-9L)))))) > 6L)) || l_783) && l_728[0]) , 0x0B73L))), 0xA2899924L));
        l_790 = &l_728[3];
    }
    for (g_24 = 1; (g_24 > 18); ++g_24)
    {
        int l_793 = 0L;
        if (l_793)
            break;
    }
    return p_13;
}







static short func_18(short p_19)
{
    char *l_604 = &g_265;
    int l_607 = 0x216119A9L;
    unsigned **l_628 = (void*)0;
    unsigned short l_679 = 1UL;
    (*g_240) = (!0xCB476DF0L);
    if ((((((*g_418) = (**g_417)) & (-1L)) != (((func_36(&g_24) , func_36(l_604)) && (safe_sub_func_uint32_t_u_u((!0x5EE8B60CL), ((((*g_384) ^ l_607) , p_19) | l_607)))) != 0x7AL)) == l_607))
    {
        short ***l_610 = &g_174;
        int **l_634 = &g_45;
        unsigned *l_644 = (void*)0;
        short l_651 = 1L;
        for (g_92 = 11; (g_92 >= (-10)); g_92 = safe_sub_func_uint16_t_u_u(g_92, 2))
        {
            unsigned char *l_613 = (void*)0;
            int l_614[1];
            unsigned *l_615 = &g_261[4][7];
            int l_616 = 7L;
            unsigned l_617 = 18446744073709551611UL;
            unsigned l_618 = 0x8C7D021EL;
            unsigned *l_619 = &g_620[4][3][1];
            unsigned *l_621 = (void*)0;
            unsigned *l_622[8][3][8] = {{{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}, {{&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}, {&l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618, &l_618}}};
            int l_641 = 0xB45F24A8L;
            int l_646[10][1][6] = {{{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}, {{0xA96D2E60L, 0x99E77497L, 0L, 0x1826C535L, 0x99E77497L, 0xC7BC3D83L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_614[i] = 0x0597E972L;
            if ((((g_623 = ((!func_36(func_31((((*l_619) = ((((void*)0 == l_610) , (3UL ^ ((func_36((((safe_div_func_uint8_t_u_u(0x51L, (l_614[0] = 254UL))) , 0x9A08L) , &g_265)) ^ ((((((*l_615) = g_179) , l_616) != p_19) <= l_616) && l_617)) , l_618))) , g_360[3])) == p_19)))) == 0UL)) , 1L) , l_607))
            {
                int l_631[7][10][3] = {{{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}, {(-5L), (-1L), (-1L)}}};
                int ***l_635 = &l_634;
                char **l_638 = &g_264;
                char **l_639 = &g_264;
                short *l_640 = &g_385;
                int l_643 = 0xF7A29246L;
                unsigned *l_645 = (void*)0;
                int i, j, k;
                g_441[2][0][0] = (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0x85L != ((void*)0 == l_628)), (safe_add_func_int8_t_s_s((((*g_384) = 0xF7L) > l_631[2][1][2]), (safe_add_func_int32_t_s_s((+(((*g_418) = (((((((**g_589) , ((*l_635) = l_634)) == ((g_642 = (safe_lshift_func_uint8_t_u_s((l_607 = ((((*l_640) = ((((func_36((l_604 = func_31(p_19))) == 0xED69FDDEL) , p_19) ^ 1L) < (-5L))) && l_614[0]) <= l_641)), 2))) , &g_240)) && l_643) , l_644) == l_645) == 0UL)) , 0xEBFF00B5L)), l_646[5][0][2])))))), 0x96L));
                if (l_607)
                    continue;
                (*l_634) = ((l_607 ^ (0xB0DEF19AL || ((safe_mul_func_int16_t_s_s(func_36(&g_265), p_19)) >= p_19))) , &g_623);
            }
            else
            {
                (*l_634) = &l_614[0];
            }
            (*l_634) = &g_441[0][0][1];
            for (g_24 = 15; (g_24 <= 25); g_24 = safe_add_func_int32_t_s_s(g_24, 7))
            {
                return l_651;
            }
            if (((**l_634) = (p_19 , l_614[0])))
            {
                unsigned char l_661 = 247UL;
                char **l_670 = &g_264;
                int l_678 = 1L;
                unsigned short *l_686 = &g_642;
                for (g_168 = 0; (g_168 <= 2); g_168 += 1)
                {
                    unsigned char *l_657 = &g_179;
                    int l_660[4][10] = {{(-10L), (-1L), 7L, (-6L), (-1L), 0x47FB7B67L, (-1L), (-6L), 7L, (-1L)}, {(-10L), (-1L), 7L, (-6L), (-1L), 0x47FB7B67L, (-1L), (-6L), 7L, (-1L)}, {(-10L), (-1L), 7L, (-6L), (-1L), 0x47FB7B67L, (-1L), (-6L), 7L, (-1L)}, {(-10L), (-1L), 7L, (-6L), (-1L), 0x47FB7B67L, (-1L), (-6L), 7L, (-1L)}};
                    int i, j;
                    (*g_45) = (safe_unary_minus_func_int32_t_s(((*g_240) = (((((*l_615) = (**l_634)) >= (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((*l_657) = g_441[2][0][0]), 2)) && (((p_19 , p_19) , (p_19 & g_360[1])) != ((((*g_418) != ((safe_mod_func_int16_t_s_s(0L, l_660[3][0])) < p_19)) < g_248[0][2][1]) > l_607))), 6))) != p_19) , (*g_45)))));
                    for (g_109 = 0; (g_109 <= 2); g_109 += 1)
                    {
                        (*g_45) = (**l_634);
                        (**l_634) = (*g_45);
                        if (p_19)
                            break;
                        (*g_45) = p_19;
                    }
                }
                (*l_634) = &l_616;
                if (((l_661 , (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((func_36(((*l_670) = (void*)0)) , ((((((safe_sub_func_int8_t_s_s((func_36((*l_670)) & (0xB9L <= (safe_sub_func_int32_t_s_s((g_168 , (safe_unary_minus_func_int32_t_s(((*g_45) = (safe_lshift_func_uint8_t_u_u(((((*g_384) = p_19) || p_19) && 0xBBL), p_19)))))), p_19)))), l_678)) >= (-1L)) && 0x628B1DB1L) < l_641) , (*g_45)) , 0xC6L)) , 0xDE71F987L), p_19)), p_19)), l_679)), 1L))) , (*g_45)))
                {
                    for (l_618 = 0; (l_618 <= 0); l_618 += 1)
                    {
                        unsigned short l_680 = 65535UL;
                        return l_680;
                    }
                }
                else
                {
                    char *l_681 = &g_24;
                    int *l_682[8][6][5] = {{{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}, {{&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}, {&l_614[0], &l_614[0], &l_614[0], &g_248[0][6][2], &g_441[2][0][0]}}};
                    int i, j, k;
                    (*l_634) = (*l_634);
                    if (func_36(l_681))
                    {
                        (*l_634) = &g_441[2][0][0];
                    }
                    else
                    {
                        int *l_683 = &g_372;
                        l_682[1][5][2] = (g_225 = (*l_634));
                        (*l_634) = l_683;
                        (*g_225) = (*g_240);
                        (*g_45) = ((safe_mod_func_uint32_t_u_u(((l_607 , 0x5AL) != g_92), 0x2F91FCCBL)) == (((((*g_384) = (*g_384)) <= (l_686 == ((safe_rshift_func_int8_t_s_s((func_36(l_613) | (!(safe_lshift_func_uint8_t_u_s(((p_19 | l_607) >= g_691), l_678)))), 2)) , (void*)0))) && 0x2237F6DBL) >= l_614[0]));
                    }
                    if ((**l_634))
                        break;
                    (*l_634) = &l_678;
                }
            }
            else
            {
                (*l_634) = &l_614[0];
            }
        }
        (*l_634) = &g_47;
        (*l_634) = &g_441[0][0][3];
    }
    else
    {
        int *l_692 = &g_248[0][1][1];
        int **l_693 = &l_692;
        (*l_693) = l_692;
    }
    return l_607;
}







static unsigned short func_25(char * p_26, char * p_27, unsigned p_28, char * p_29, char p_30)
{
    int l_276 = (-1L);
    unsigned l_277 = 4UL;
    char **l_339 = &g_264;
    unsigned short **l_386 = (void*)0;
    unsigned char *l_394 = &g_179;
    short **l_405[2];
    int *l_425 = &g_372;
    int l_452 = 0xAC93FF6EL;
    int *l_535 = &g_92;
    int **l_534 = &l_535;
    int ***l_542 = &l_534;
    unsigned char ***l_553 = &g_469;
    char l_564 = 2L;
    unsigned l_567 = 0xD99FF956L;
    int l_574 = (-1L);
    int **l_583 = (void*)0;
    int **l_593 = &l_425;
    char l_602[10] = {0xF8L, 0xF8L, 0xECL, 0xF8L, 0xF8L, 0xECL, 0xF8L, 0xF8L, 0xECL, 0xF8L};
    int *l_603 = &g_372;
    int i;
    for (i = 0; i < 2; i++)
        l_405[i] = &g_149;
    if ((!func_36(&p_30)))
    {
        char l_268 = 0xBBL;
        unsigned short *l_285 = &g_156[0][2][2];
        char **l_296 = &g_264;
        int l_330[10] = {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L};
        short *l_359 = &g_360[3];
        int **l_366 = &g_45;
        char l_373 = 9L;
        unsigned l_404 = 0xD3D46050L;
        unsigned short ***l_412 = (void*)0;
        int l_421[9] = {8L, 0x81BCE8E1L, 8L, 0x81BCE8E1L, 8L, 0x81BCE8E1L, 8L, 0x81BCE8E1L, 8L};
        char *l_424 = &g_24;
        char l_575 = (-1L);
        int i;
        for (g_109 = 1; (g_109 == 4); g_109 = safe_add_func_uint8_t_u_u(g_109, 6))
        {
            unsigned short l_279 = 0UL;
            int *l_282 = &g_248[0][6][4];
            char l_295 = 0L;
            short ***l_309 = (void*)0;
            unsigned short l_329 = 7UL;
            char **l_338 = &g_264;
            int *l_354 = (void*)0;
        }
        if ((safe_mul_func_int16_t_s_s(((*l_359) = (&l_386 != l_412)), g_156[0][3][5])))
        {
            unsigned l_440 = 0xBABF7D19L;
            short **l_449 = &g_149;
            int l_466[6] = {(-4L), (-4L), 1L, (-4L), (-4L), 1L};
            int l_476 = 0x84EBBEE3L;
            int l_477 = 0x56843FF9L;
            short *l_539[9][4] = {{&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}, {&g_360[3], &g_360[3], &g_385, &g_360[3]}};
            char *l_556[6] = {(void*)0, (void*)0, &l_268, (void*)0, (void*)0, &l_268};
            int i, j;
            if (func_36((((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((p_28 != 0UL) , ((g_417 = g_417) != l_386)), ((safe_lshift_func_int16_t_s_u(l_421[6], 10)) , ((safe_add_func_uint32_t_u_u(func_36(((*l_296) = l_424)), g_109)) > ((((*g_384) && l_277) > l_276) , 0xAAL))))) == p_30) >= 0UL), p_30)) , (-1L)) , (void*)0)))
            {
                return p_30;
            }
            else
            {
                char l_432 = 1L;
                int l_442 = 0x98AD1224L;
                short **l_453 = &g_149;
                int *l_465 = &g_168;
                unsigned l_468[3][8] = {{18446744073709551611UL, 0xFA6E5492L, 18446744073709551615UL, 0xC42A9772L, 0x112D747DL, 0UL, 0x112D747DL, 0xC42A9772L}, {18446744073709551611UL, 0xFA6E5492L, 18446744073709551615UL, 0xC42A9772L, 0x112D747DL, 0UL, 0x112D747DL, 0xC42A9772L}, {18446744073709551611UL, 0xFA6E5492L, 18446744073709551615UL, 0xC42A9772L, 0x112D747DL, 0UL, 0x112D747DL, 0xC42A9772L}};
                unsigned *l_473 = (void*)0;
                unsigned *l_474 = &g_261[0][5];
                unsigned char *l_475[4][1][10] = {{{&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}}, {{&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}}, {{&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}}, {{&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}}};
                int *l_478 = &l_421[6];
                unsigned short ***l_479 = &g_417;
                int i, j, k;
                for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
                {
                    (*l_366) = l_425;
                    for (l_276 = 0; (l_276 >= 0); l_276 -= 1)
                    {
                        return p_30;
                    }
                }
                for (g_265 = 0; (g_265 <= 24); g_265 = safe_add_func_uint16_t_u_u(g_265, 2))
                {
                    unsigned l_454 = 4294967295UL;
                    (*l_425) = func_36((*l_296));
                    for (g_22 = 0; (g_22 > 54); ++g_22)
                    {
                        char *l_430 = &l_373;
                        unsigned *l_431[7][2][2];
                        int l_433 = (-1L);
                        int *l_438 = &g_92;
                        unsigned short l_439[4][5] = {{0x31EDL, 0x31EDL, 4UL, 0xCD88L, 0UL}, {0x31EDL, 0x31EDL, 4UL, 0xCD88L, 0UL}, {0x31EDL, 0x31EDL, 4UL, 0xCD88L, 0UL}, {0x31EDL, 0x31EDL, 4UL, 0xCD88L, 0UL}};
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_431[i][j][k] = &l_277;
                            }
                        }
                        l_442 = ((l_276 = ((l_432 = (g_261[0][1] = (((*l_425) = func_36(&g_265)) , func_36(l_430)))) == l_433)) || (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((**l_339) = ((((((g_248[0][6][4] > (*g_384)) , ((*l_438) = p_30)) , 0xEAC9L) > l_439[3][2]) | g_179) != l_432)), l_432)), l_440)) , (**g_417)) && g_441[2][0][0]));
                        l_454 = ((safe_mul_func_int16_t_s_s(p_30, (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_439[1][3] <= (l_449 == (((func_36((*l_296)) <= ((*l_425) = (((*l_425) , g_261[0][1]) , ((safe_div_func_int32_t_s_s(((*g_264) , l_432), l_452)) , p_30)))) , p_30) , l_453))), 0x24E4L)), g_385)))) | 0xFFCFL);
                    }
                    for (l_454 = (-1); (l_454 < 41); l_454++)
                    {
                        char *l_467 = &l_268;
                        unsigned char ***l_470 = &g_469;
                        (*l_366) = ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((*l_467) = ((*l_424) = ((safe_sub_func_uint8_t_u_u(p_30, (((*g_418) = (((safe_rshift_func_int16_t_s_s((((l_454 > (p_28 & ((*l_359) = (l_442 == ((void*)0 == l_465))))) , (l_466[1] , (l_440 < func_36(&g_24)))) && (*g_418)), p_28)) , 0x51D700FCL) != p_30)) >= l_466[4]))) && 1L))), l_468[2][6])) >= (*g_384)) , 1UL), (*l_425))) , (void*)0);
                        (*l_470) = g_469;
                        (*l_425) = (0L == p_30);
                    }
                }
                if ((((*l_394) = 255UL) | ((((*l_359) = 0x2B89L) , (!((*l_478) = ((((**g_417) > ((l_442 = p_30) < (0L > 0x87DEB214L))) > ((*g_240) = ((*l_425) = p_28))) | (safe_mod_func_int32_t_s_s((l_276 = ((l_477 = ((g_22 = (l_476 = ((((*l_474) = ((((*l_359) = (-1L)) , (0x599E3116L == p_28)) | 0xEDE295C5L)) & 0xDA3B71BFL) > 1UL))) , p_30)) > l_440)), 0x391D8773L)))))) , 1L)))
                {
                    char *l_480 = &l_268;
                    int l_504 = (-1L);
                    unsigned *l_505 = &l_277;
                    int l_515 = 0xE9CE8925L;
                    (*l_425) = (((*l_359) = ((((void*)0 == l_479) ^ func_36((p_30 , ((*l_296) = l_480)))) != ((*l_478) || p_28))) >= 4UL);
                    g_45 = &l_476;
                    if (((*l_425) = ((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((func_36(func_31(p_30)) , (safe_sub_func_int8_t_s_s(((*g_384) = (0x671AL & ((*l_425) , (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*l_359) = (safe_mod_func_int16_t_s_s(((((*l_505) = ((safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(0xF89AC356L, ((*l_474) = p_28))) , (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_477 & l_504), p_30)), p_28)), 0xA55BBC4BL))), 4294967295UL)))) | p_28)) , g_156[0][3][5]) <= (*l_478)), 7L))), p_30)), l_466[0]))))), 0L))), (*l_425))) , (*g_264)), 1UL)) , (**l_366))))
                    {
                        return l_440;
                    }
                    else
                    {
                        int *l_506 = (void*)0;
                        unsigned char ****l_511 = (void*)0;
                        unsigned char ***l_513 = &g_469;
                        unsigned char ****l_512 = &l_513;
                        (*l_366) = &g_372;
                        (*l_478) = ((((**l_366) = (((*g_384) == ((((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((~0x9C59L) >= (((*l_512) = &g_469) == (void*)0)), (+(func_36(&p_30) == p_28)))), 6)) == (**l_366)) || l_515) , p_30)) && p_30)) , 246UL) , p_28);
                        (**l_366) = 0xC7A67DB9L;
                    }
                }
                else
                {
                    int l_530 = (-1L);
                    int l_531[2][4];
                    int ****l_543 = &l_542;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_531[i][j] = (-8L);
                    }
                    (*l_478) = ((*l_425) = ((((*l_453) == &g_360[3]) != p_30) ^ ((*l_425) & (safe_div_func_int32_t_s_s(func_36((p_27 = &g_24)), (l_531[1][1] = (l_530 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((**g_417) = ((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(0x0BE6L, (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((((*l_478) == (p_30 || 0xC2B8L)) >= (*l_425)) && 65526UL), 9L)) & (*g_384)), 0x25BEE8C9L)))) , 65529UL), 0xD120L)) && g_441[2][0][2])) <= 0xF742L), (*l_425))), g_372)) <= (*l_425)) , p_28))))))));
                    for (l_268 = 0; (l_268 > (-2)); l_268 = safe_sub_func_uint8_t_u_u(l_268, 4))
                    {
                        int ***l_536 = &l_534;
                        (*l_536) = l_534;
                        (*l_366) = &g_248[0][4][0];
                        (*l_425) = (safe_add_func_int32_t_s_s(p_30, ((l_476 , l_539[3][1]) != &g_360[1])));
                        (*l_366) = (void*)0;
                    }
                    if ((((*g_384) <= ((~((*g_417) == (((-1L) && (*g_418)) , l_539[6][3]))) == func_36((((((safe_sub_func_uint16_t_u_u((((*l_543) = l_542) != (void*)0), p_28)) , (safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((*l_425), 0x8510L)) , l_476) < p_30), 12))) , l_477) , p_28) , &g_265)))) < 0x4E8CL))
                    {
                        short l_552 = 0L;
                        (*l_425) = (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(((l_552 == 0x30L) < ((l_553 == ((p_30 <= 0x436CL) , &g_469)) && p_30)), (safe_rshift_func_uint16_t_u_u((**g_417), (*l_425))))), 1UL));
                        (*l_425) = func_36(l_556[4]);
                    }
                    else
                    {
                        return (**g_417);
                    }
                    (*l_366) = &l_477;
                }
            }
        }
        else
        {
            int l_557[9][10] = {{2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}, {2L, 0xBA1A4B50L, 0x8E56C3C0L, 1L, 0x09EEE428L, 0x86796DD5L, 0x09EEE428L, 1L, 0x8E56C3C0L, 0xBA1A4B50L}};
            int l_560 = 1L;
            int *l_563[7][7] = {{&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}, {&l_560, &l_330[1], &l_421[6], &l_330[1], &l_560, &l_330[1], &l_421[6]}};
            int i, j;
            (*g_240) = l_557[5][7];
            g_441[4][0][0] = ((l_557[5][7] || ((((*l_425) = (safe_mul_func_uint16_t_u_u(func_36((*l_339)), ((*g_418) != (0xFD8FL <= g_248[0][5][0]))))) , g_156[0][3][5]) || p_28)) & l_560);
        }
        (*g_240) = (l_564 <= (safe_mul_func_uint8_t_u_u(((l_567 <= (((**g_417) = 3UL) , (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(p_30, ((((!(p_28 != (safe_add_func_uint8_t_u_u(253UL, l_574)))) >= g_372) ^ (0x2775L > 0x7C70L)) , 65532UL))) | g_168), l_575)))) && (*l_425)), (-1L))));
    }
    else
    {
        char l_580 = 0x9DL;
        short l_582 = 0x02F2L;
        l_582 = (safe_mul_func_int8_t_s_s((((g_248[0][6][4] , ((~1L) != p_30)) && 0x9CEB2EA8L) == (safe_mul_func_uint16_t_u_u(func_36(&p_30), l_580))), ((*l_425) <= (((**l_339) = (((**g_417) = (safe_unary_minus_func_uint16_t_u((p_30 >= p_30)))) != 1UL)) , p_28))));
        return (**g_417);
    }
    l_425 = &g_441[2][0][0];
    (*l_593) = ((safe_div_func_uint32_t_u_u(1UL, (p_28 , ((((safe_add_func_uint16_t_u_u(0xD017L, (*g_418))) > (((void*)0 == g_588[3]) & ((*l_394) = ((*l_425) || (safe_mul_func_uint16_t_u_u((p_30 | (3UL ^ (*g_384))), (*l_425))))))) > (-1L)) , p_28)))) , (void*)0);
    (*l_603) = ((((safe_div_func_uint8_t_u_u(((*p_29) >= (p_28 <= ((g_360[3] = ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x7192AEC6L, ((((p_30 > ((**g_417) == (safe_sub_func_uint8_t_u_u(func_36(func_31(p_30)), (g_156[0][3][5] ^ p_30))))) , 0x96A17B42L) , p_30) & g_156[0][3][1]))), p_28)) , l_602[9])) | p_30))), (*p_29))) , p_28) >= (**g_417)) <= p_28);
    return (**g_417);
}







static char * func_31(unsigned p_32)
{
    int *l_245 = &g_47;
    int l_246 = 0x5B22A6ECL;
    int *l_247[8][7] = {{&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}, {&g_248[0][6][0], &g_248[0][3][3], &g_248[0][6][4], (void*)0, &g_248[0][5][5], (void*)0, &g_248[0][6][4]}};
    int l_253 = (-1L);
    short *l_256 = (void*)0;
    short *l_257 = &g_109;
    unsigned *l_260 = &g_261[0][1];
    unsigned short l_262 = 0xD240L;
    char *l_263 = (void*)0;
    int i, j;
    l_245 = l_245;
    g_248[0][6][4] = (l_246 = ((*l_245) = (*g_240)));
    (*l_245) = (safe_rshift_func_int8_t_s_u((((((safe_div_func_int32_t_s_s(l_253, (-1L))) , ((p_32 == (safe_div_func_int16_t_s_s((((&g_174 != &g_174) , ((*l_257) = (-1L))) > (safe_lshift_func_int16_t_s_u((((*l_260) = 1UL) != ((*l_245) , p_32)), 12))), (*l_245)))) , l_262)) <= p_32) > p_32) >= 0xE09EL), 0));
    return l_263;
}







static unsigned short func_36(char * p_37)
{
    int *l_242 = &g_47;
    int **l_243 = &g_240;
    unsigned char l_244[1][9][4] = {{{0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}, {0x7DL, 0x7DL, 0xD0L, 0x9EL}}};
    int i, j, k;
    (*l_243) = l_242;
    return l_244[0][6][2];
}







static char * func_38(char * p_39, char * p_40, unsigned p_41)
{
    int *l_46 = &g_47;
    int **l_238 = (void*)0;
    int **l_239[5][10] = {{&l_46, (void*)0, &l_46, (void*)0, &l_46, &g_225, &l_46, (void*)0, &l_46, (void*)0}, {&l_46, (void*)0, &l_46, (void*)0, &l_46, &g_225, &l_46, (void*)0, &l_46, (void*)0}, {&l_46, (void*)0, &l_46, (void*)0, &l_46, &g_225, &l_46, (void*)0, &l_46, (void*)0}, {&l_46, (void*)0, &l_46, (void*)0, &l_46, &g_225, &l_46, (void*)0, &l_46, (void*)0}, {&l_46, (void*)0, &l_46, (void*)0, &l_46, &g_225, &l_46, (void*)0, &l_46, (void*)0}};
    char *l_241 = &g_24;
    int i, j;
    g_240 = func_42(g_45, l_46);
    return l_241;
}







static int * func_42(int * p_43, int * p_44)
{
    unsigned l_48 = 1UL;
    char *l_52 = &g_24;
    char *l_53 = (void*)0;
    int l_65 = 0x38D6AEABL;
    char l_118[1];
    short **l_173 = &g_149;
    int i;
    for (i = 0; i < 1; i++)
        l_118[i] = 0L;
    if (l_48)
    {
        char *l_51 = (void*)0;
        char **l_58 = &l_53;
        int l_61 = (-1L);
        short l_98 = 0x39E9L;
        if ((safe_add_func_int16_t_s_s(g_47, (((l_51 != l_51) || ((((l_52 = &g_24) == l_53) || (safe_lshift_func_int8_t_s_s((~(((*p_44) == ((safe_lshift_func_uint8_t_u_s((((&g_24 != ((*l_58) = (void*)0)) & (safe_mul_func_int16_t_s_s(((g_22 | 0x6FL) || l_61), l_48))) >= 0x2D16CF05L), l_48)) , 0x8A9A2627L)) > l_48)), 1))) < 0x3FL)) , l_61))))
        {
            unsigned l_64 = 4294967293UL;
            p_43 = p_44;
            (*p_43) = (l_61 < (-5L));
            (*p_44) = (safe_rshift_func_int8_t_s_s((l_65 = (!l_64)), 6));
        }
        else
        {
            int **l_66 = &g_45;
            unsigned l_67[8];
            unsigned char l_71[3][1];
            int l_94 = 0x96ABB4AAL;
            int *l_95 = &l_94;
            int i, j;
            for (i = 0; i < 8; i++)
                l_67[i] = 0xFD77138BL;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_71[i][j] = 253UL;
            }
            (*l_66) = &g_47;
            for (l_65 = 0; (l_65 <= 7); l_65 += 1)
            {
                unsigned char *l_70[2];
                int l_72 = 0x024BFCC0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_70[i] = &g_22;
                l_72 = (safe_sub_func_uint8_t_u_u((l_61 = (l_67[l_65] , (~l_67[l_65]))), (l_71[1][0] = l_67[l_65])));
                return p_43;
            }
            for (l_65 = 17; (l_65 > (-14)); l_65 = safe_sub_func_int32_t_s_s(l_65, 1))
            {
                char l_89 = 0xD5L;
                int l_93 = 0xFEC725EAL;
                int l_119 = 0xB194A10BL;
                for (g_22 = 0; (g_22 <= 7); g_22 += 1)
                {
                    char **l_81 = (void*)0;
                    int l_88 = 6L;
                    int l_90 = 0x248679C0L;
                    for (g_47 = 0; (g_47 <= 7); g_47 += 1)
                    {
                        int *l_75 = (void*)0;
                        int *l_76 = (void*)0;
                        int *l_77 = &l_61;
                        char **l_80 = &l_53;
                        int *l_91 = &g_92;
                        int i;
                        (*l_77) = l_67[g_47];
                        (*l_77) = (safe_sub_func_uint32_t_u_u(((l_80 = &l_52) == ((l_67[g_47] && l_65) , l_81)), (0xE07D3F14L | (*p_44))));
                        l_94 = ((safe_rshift_func_int16_t_s_s((l_65 > (g_22 | (l_65 != (((*l_91) = (!(safe_sub_func_uint32_t_u_u((((((((l_88 = g_47) ^ l_61) , 0xFD423136L) , (l_89 ^ (l_65 < l_61))) || (-10L)) , 0x10L) & l_90), 0x3A2BBEBCL)))) , l_93)))), l_61)) , 5L);
                    }
                    l_95 = p_44;
                }
                for (g_92 = (-4); (g_92 >= 29); ++g_92)
                {
                    if (l_93)
                        break;
                    (*l_66) = &l_61;
                    for (g_22 = 1; (g_22 <= 7); g_22 += 1)
                    {
                        int i;
                        (*l_66) = &l_61;
                        (*l_66) = (l_67[g_22] , (void*)0);
                        (*l_95) = l_98;
                        (*l_95) = 0x15A5982EL;
                    }
                }
                if (l_98)
                {
                    int l_104 = 6L;
                    short *l_107 = &l_98;
                    short *l_108 = &g_109;
                    for (g_24 = 0; (g_24 > 24); g_24 = safe_add_func_uint8_t_u_u(g_24, 6))
                    {
                        unsigned char *l_103 = &g_22;
                        (*l_66) = p_44;
                        (*g_45) = (safe_rshift_func_uint8_t_u_s(((*l_103) = (*l_95)), (g_47 != l_104)));
                        (*l_66) = (void*)0;
                    }
                    (*l_95) = ((safe_div_func_int16_t_s_s(((*l_108) = ((*l_107) = 0x608AL)), ((l_104 ^ (+(l_65 , (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((-1L), 0x35CAL)), l_104)), ((*p_44) <= (l_119 = l_118[0])))) , (g_47 > 0L)), l_93))))) ^ g_92))) > (*l_95));
                    (*l_95) = (*p_44);
                }
                else
                {
                    if ((*p_44))
                        break;
                    (*p_44) = g_109;
                    for (g_47 = 0; g_47 < 1; g_47 += 1)
                    {
                        l_118[g_47] = 0xD8L;
                    }
                }
                (*l_66) = &l_65;
            }
        }
    }
    else
    {
        int l_122 = 0x233DB8BBL;
        int l_125 = (-6L);
        char **l_137 = &l_52;
        int l_163 = (-10L);
        unsigned char l_169[7];
        short **l_176 = &g_149;
        int i;
        for (i = 0; i < 7; i++)
            l_169[i] = 1UL;
        if ((((g_92 != g_109) > ((((safe_rshift_func_int16_t_s_s(l_65, 2)) > ((l_122 & (safe_lshift_func_uint8_t_u_s(((((l_125 , g_92) , l_122) | 0x8233L) & ((l_122 | (*p_44)) <= 253UL)), 3))) , (*p_44))) , l_118[0]) == g_109)) && l_48))
        {
            unsigned l_136 = 0xD21FDF51L;
            int **l_194 = &g_45;
            l_65 = (safe_mod_func_uint16_t_u_u(5UL, (safe_rshift_func_int16_t_s_u((l_48 , (safe_rshift_func_int8_t_s_u((((((*p_44) = (safe_mod_func_int8_t_s_s(((*l_52) = (safe_rshift_func_uint8_t_u_u(l_136, 7))), (+(l_137 != (void*)0))))) | g_109) < l_122) <= l_122), 3))), 2))));
            (*p_44) = g_24;
            for (g_92 = 0; (g_92 <= 16); g_92++)
            {
                int l_152[4] = {0x9B47A1F1L, 0x0ED46873L, 0x9B47A1F1L, 0x0ED46873L};
                int l_157 = 0x6FE7F9DCL;
                int l_166[9] = {0xAD9904AAL, 0xAD9904AAL, 0x61721145L, 0xAD9904AAL, 0xAD9904AAL, 0x61721145L, 0xAD9904AAL, 0xAD9904AAL, 0x61721145L};
                int i;
                for (l_122 = 0; (l_122 >= (-27)); l_122--)
                {
                    unsigned l_144 = 1UL;
                    short *l_148 = &g_109;
                    short **l_147[6] = {&l_148, &l_148, &l_148, &l_148, &l_148, &l_148};
                    unsigned short *l_155 = &g_156[0][3][5];
                    int *l_171 = &l_166[2];
                    int i;
                    if ((((safe_rshift_func_uint8_t_u_s((6L ^ l_144), 6)) && (safe_div_func_int16_t_s_s(((((g_149 = (void*)0) != &g_109) && (((*l_155) = (((l_122 >= (l_152[1] = 0L)) , l_152[0]) | (0xD419A621L != (safe_rshift_func_uint16_t_u_u(l_118[0], 3))))) , l_122)) == l_157), l_122))) , 0L))
                    {
                        unsigned *l_162 = &l_48;
                        int *l_167 = &g_168;
                        int **l_170 = &g_45;
                        l_166[2] = (((safe_mul_func_int16_t_s_s(l_125, ((((safe_add_func_int16_t_s_s((((*l_148) = (((*l_162) = ((*p_44) , g_109)) & (g_92 == (l_163 = l_152[1])))) , (safe_div_func_uint16_t_u_u(((((*l_167) = (l_136 < ((l_163 = l_166[2]) < 0xD99EL))) , (*p_44)) < 0UL), l_118[0]))), 0x2AADL)) , l_169[6]) || g_156[0][1][2]) < 0xA869A9D9L))) , l_65) , 0xDD50FD98L);
                        (*l_170) = p_43;
                        return p_43;
                    }
                    else
                    {
                        int **l_172[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_172[i] = &g_45;
                        l_171 = l_171;
                    }
                }
                if (l_169[6])
                    break;
                if (((void*)0 == l_173))
                {
                    l_122 = ((l_118[0] , ((*p_44) = 0x33656F6DL)) && g_47);
                    for (g_22 = 0; (g_22 <= 6); g_22 += 1)
                    {
                        int i;
                        (*p_44) = (l_169[g_22] < (l_169[g_22] <= l_136));
                        if ((*p_44))
                            break;
                    }
                }
                else
                {
                    short ***l_175 = &l_173;
                    int l_192 = (-8L);
                    int *l_193[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_193[i][j] = &l_152[1];
                    }
                    for (g_47 = 0; (g_47 <= 6); g_47 += 1)
                    {
                        l_125 = l_48;
                    }
                    l_176 = ((*l_175) = g_174);
                    l_125 = (safe_mod_func_uint32_t_u_u(g_179, (safe_add_func_uint32_t_u_u(0xF9F8B71BL, (safe_add_func_int32_t_s_s((l_152[2] && (safe_lshift_func_int8_t_s_u(((l_48 != l_65) , l_136), 7))), ((*p_44) = (0x4FL || (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((g_156[0][3][5] ^ ((*p_44) != l_163)), 0x8AE19F66L)) >= l_136) ^ 252UL), l_192)), (*p_44)))))))))));
                }
            }
            (*l_194) = (l_122 , &l_163);
        }
        else
        {
            short ***l_195 = &l_173;
            int l_201 = 5L;
            (*l_195) = l_173;
            (*p_44) = ((-8L) | ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(((l_201 & (safe_add_func_int8_t_s_s(g_168, g_156[0][1][2]))) == (safe_rshift_func_uint16_t_u_s((l_122 , l_169[6]), 2))))) | g_92), 0x7BL)), 9)) , (&g_45 != &p_43)));
        }
    }
    if ((safe_lshift_func_uint16_t_u_u(l_65, l_65)))
    {
        return p_44;
    }
    else
    {
        unsigned l_212 = 0x505AA5BBL;
        int **l_213 = &g_45;
        unsigned char *l_214 = (void*)0;
        unsigned char *l_215[9][4][4] = {{{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}, {{(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}, {(void*)0, &g_22, (void*)0, &g_179}}};
        int l_224 = 0x483BAE3DL;
        int i, j, k;
        if ((safe_lshift_func_int16_t_s_u(((g_179 = (safe_mul_func_uint16_t_u_u(((((*l_52) = l_212) , l_65) ^ (l_212 | (&g_45 != l_213))), g_156[0][3][5]))) || (safe_add_func_uint8_t_u_u(l_48, (-1L)))), 0)))
        {
            short l_220 = 0xDB00L;
            short **l_223 = (void*)0;
            g_225 = ((*l_213) = (((safe_mod_func_int16_t_s_s(l_65, l_220)) || (safe_div_func_int8_t_s_s(0x2CL, ((((void*)0 == l_223) , l_220) , (l_224 = l_220))))) , &l_65));
        }
        else
        {
            unsigned l_228[6][3][1] = {{{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}};
            int l_231 = 0x2CC3962BL;
            int l_232 = 0x329542E1L;
            int *l_233 = &l_65;
            int i, j, k;
            (*p_44) = (((*g_225) | (safe_add_func_uint32_t_u_u((l_228[2][1][0] ^ (l_232 = (l_231 = (safe_mul_func_uint16_t_u_u(l_228[3][0][0], l_212))))), ((*l_233) = (!(*p_44)))))) >= (*p_44));
        }
    }
    for (g_92 = 0; (g_92 >= 11); g_92 = safe_add_func_uint8_t_u_u(g_92, 8))
    {
        for (g_109 = 0; (g_109 >= 24); ++g_109)
        {
            return &g_47;
        }
    }
    return p_43;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_156[i][j][k], "g_156[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_248[i][j][k], "g_248[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_261[i][j], "g_261[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_265, "g_265", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_360[i], "g_360[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_441[i][j][k], "g_441[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_620[i][j][k], "g_620[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    transparent_crc(g_1338, "g_1338", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1412[i][j], "g_1412[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
