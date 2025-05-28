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


union U0 {
   volatile char * f0;
   unsigned short f1;
};


static int g_6[3][2][8] = {{{1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}, {1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}}, {{1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}, {1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}}, {{1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}, {1L, (-1L), (-9L), (-1L), 1L, (-1L), 8L, (-1L)}}};
static char g_8[2][3][4] = {{{(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}}, {{(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}}};
static char *g_7 = &g_8[0][0][3];
static int g_19 = 0xE815F842L;
static int *g_18 = &g_19;
static int g_59 = 0x464F6128L;
static int g_76[5][4] = {{0x08677A3BL, 0x08677A3BL, 0x7CBC1764L, 0x2677E161L}, {0x08677A3BL, 0x08677A3BL, 0x7CBC1764L, 0x2677E161L}, {0x08677A3BL, 0x08677A3BL, 0x7CBC1764L, 0x2677E161L}, {0x08677A3BL, 0x08677A3BL, 0x7CBC1764L, 0x2677E161L}, {0x08677A3BL, 0x08677A3BL, 0x7CBC1764L, 0x2677E161L}};
static union U0 g_107[5][1][7] = {{{{0}, {0}, {0}, {0}, {0}, {0}, {0}}}, {{{0}, {0}, {0}, {0}, {0}, {0}, {0}}}, {{{0}, {0}, {0}, {0}, {0}, {0}, {0}}}, {{{0}, {0}, {0}, {0}, {0}, {0}, {0}}}, {{{0}, {0}, {0}, {0}, {0}, {0}, {0}}}};
static const volatile int g_111 = 0x380C2164L;
static const volatile int *g_110 = &g_111;
static const volatile int **g_109 = &g_110;
static const volatile int ***g_108[7][8][4] = {{{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}, {(void*)0, &g_109, &g_109, &g_109}}};
static int **g_142[1] = {&g_18};
static int g_145 = 0x2775F886L;
static int g_201 = 1L;
static const int *g_216 = &g_76[4][1];
static volatile int g_218 = 0L;
static volatile char **g_229 = (void*)0;
static volatile char *** const g_228 = &g_229;
static union U0 *g_245 = (void*)0;
static char g_773 = 0x34L;
static const int **g_796[4][5][4] = {{{(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}}, {{(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}}, {{(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}}, {{(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}, {(void*)0, (void*)0, &g_216, (void*)0}}};
static volatile union U0 g_1021 = {0};
static volatile union U0 *g_1020 = &g_1021;
static volatile union U0 **g_1019 = &g_1020;
static volatile union U0 ***g_1018 = &g_1019;
static int *g_1038 = &g_76[0][1];
static union U0 ***g_1103 = (void*)0;
static char **g_1206[9][3][9] = {{{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7}}};
static const int *g_1253 = &g_19;
static const int *g_1340 = &g_76[4][1];
static volatile union U0 **g_1411 = &g_1020;



static unsigned short func_1(void);
static union U0 func_2(int p_3, char * p_4, const char * p_5);
static const char * func_9(const union U0 p_10, union U0 p_11, char * p_12, int p_13, unsigned p_14);
static const union U0 func_15(const char * p_16);
static const int * func_23(unsigned char p_24, char * p_25, unsigned p_26);
static char * func_28(const unsigned short p_29, int p_30, const int * p_31, const char * p_32, short p_33);
static const unsigned short func_34(unsigned short p_35, char * p_36);
static unsigned func_39(unsigned p_40, int * p_41, int * p_42);
static int * func_43(unsigned p_44, unsigned p_45, int * p_46, unsigned short p_47, char * p_48);
static char func_51(int p_52, unsigned p_53);
static unsigned short func_1(void)
{
    const char *l_17 = &g_8[0][0][3];
    union U0 l_1271 = {0};
    char *l_1272[10][4][6] = {{{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}, {{&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}, {&g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][0][3], &g_8[0][2][1], &g_8[0][0][3]}}};
    int l_1283 = 0x7A62CAA4L;
    char *l_1489 = &g_8[0][0][3];
    int **l_1490 = &g_18;
    int ***l_1491[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1491[i] = &g_142[0];
    l_1283 = (func_2(g_6[1][1][7], g_7, func_9(func_15(l_17), l_1271, l_1272[7][0][4], ((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_201 < 1L), 5)), 0)), (safe_mul_func_uint16_t_u_u((((*g_1038) ^ l_1283) , l_1283), l_1283)))), 0x714F059FL)) && l_1283), g_6[1][0][1])) , 0x1833C07CL);



    ;
    ;
    ;

    l_1283 = (*g_1253);
    (*l_1490) = &l_1283;

    ;
    g_142[0] = l_1490;
    return g_76[0][3];


}







static union U0 func_2(int p_3, char * p_4, const char * p_5)
{
    int *l_1475 = &g_59;
    int **l_1476[6] = {&g_18, &g_18, &g_18, &g_18, &g_18, &g_18};
    int *l_1477 = &g_59;
    union U0 l_1482 = {0};
    int i;
    l_1477 = l_1475;
    for (p_3 = 0; (p_3 > 29); p_3 = safe_add_func_uint32_t_u_u(p_3, 5))
    {
        for (g_145 = 0; (g_145 >= (-18)); --g_145)
        {
            (*l_1477) = 0x61657663L;
        }
    }
    return l_1482;


    }







static const char * func_9(const union U0 p_10, union U0 p_11, char * p_12, int p_13, unsigned p_14)
{
    const int l_1287 = (-1L);
    union U0 **l_1293 = (void*)0;
    union U0 ***l_1292 = &l_1293;
    char *l_1311 = &g_773;
    int *l_1316 = &g_19;
    const int *l_1354 = &g_76[4][1];
    int l_1370 = 0L;
    char ***l_1376 = &g_1206[6][2][4];
    const union U0 *l_1428[2][6][7] = {{{&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[3][0][3], &g_107[3][0][3], &g_107[4][0][4], &g_107[0][0][6], &g_107[4][0][4], &g_107[3][0][3], &g_107[3][0][3]}}};
    int i, j, k;
    if (p_14)
    {
        unsigned l_1284 = 1UL;
        char *l_1294[10] = {&g_8[0][0][3], &g_8[1][0][0], &g_773, &g_773, &g_8[1][0][0], &g_8[0][0][3], &g_8[1][0][0], &g_773, &g_773, &g_8[1][0][0]};
        int l_1308 = (-10L);
        const unsigned char l_1315 = 250UL;
        int l_1328 = 0x20F69E26L;
        int *l_1351 = &g_19;
        int i;
        if ((l_1284 >= ((func_34(((safe_div_func_uint32_t_u_u((g_76[2][2] | g_6[2][0][3]), l_1287)) >= (((l_1284 , l_1284) , (((safe_mod_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(l_1287, l_1284)) , l_1292) == &l_1293) <= l_1284), p_14)) != 65530UL) , l_1287)) ^ g_145)), l_1294[7]) > l_1284) , l_1284)))
        {
            int l_1299[2];
            short l_1305 = (-3L);
            int * const l_1309 = &g_59;
            unsigned short l_1320[5] = {65533UL, 0xFDB6L, 65533UL, 0xFDB6L, 65533UL};
            union U0 **l_1331 = (void*)0;
            int *l_1334 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1299[i] = 0x1EE0315AL;
            for (g_19 = (-27); (g_19 != 22); ++g_19)
            {
                int l_1300 = 0x097A0528L;
                int *l_1310 = &g_19;
                (*g_1038) = (((safe_div_func_uint8_t_u_u(((254UL >= (l_1299[1] || (g_111 < l_1300))) , 0xE0L), (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(0L, 2)) & ((((!l_1305) , (((safe_div_func_uint32_t_u_u(g_8[1][2][2], 0xB1027ADFL)) , l_1284) || l_1300)) & l_1284) || 0x72D7L)), l_1308)))) , l_1309) != l_1310);
            }
            for (g_59 = 0; (g_59 <= 9); g_59 += 1)
            {
                char *l_1312 = &g_8[0][0][3];
                int *l_1317 = &g_6[1][1][7];
                char l_1321 = 1L;
                char **l_1339 = &l_1312;
                (*g_1038) = (l_1311 != (p_13 , l_1312));
                if (((((*g_1018) != (void*)0) , p_14) , (safe_sub_func_uint16_t_u_u((g_8[0][2][0] <= l_1315), (func_39(p_14, l_1316, l_1317) , (*l_1309))))))
                {
                    for (g_145 = 0; (g_145 <= 9); g_145 += 1)
                    {
                        int l_1326 = 1L;
                        int **l_1327 = &l_1317;
                        (*g_1038) = ((*l_1309) < (((safe_lshift_func_int8_t_s_s(((l_1320[1] | l_1321) & g_19), 6)) >= (p_13 >= (*l_1317))) & (((g_773 != (1L && ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_1326, l_1308)), p_13)) ^ 7L))) == (*l_1317)) , (*l_1316))));
                        (*l_1327) = l_1317;
                        if (p_14)
                            continue;
                        l_1328 = p_13;
                    }
                    if ((safe_div_func_uint32_t_u_u((&l_1328 == l_1309), p_13)))
                    {
                        (*g_109) = (*g_109);
                    }
                    else
                    {
                        (*l_1316) = ((l_1331 != (*g_1018)) <= g_218);
                        (*g_109) = (*g_109);
                        if ((*l_1316))
                            continue;
                    }
                    (*l_1292) = l_1331;
                }
                else
                {
                    char **l_1337 = &l_1311;
                    if (p_13)
                    {
                        int **l_1335[10] = {&l_1317, &g_1038, &g_18, &g_18, &g_1038, &l_1317, &g_1038, &g_18, &g_18, &g_1038};
                        int i;
                        if ((*g_18))
                            break;
                        l_1316 = &l_1328;

                        ;
                        (*l_1292) = l_1331;
                    }
                    else
                    {
                        int **l_1336 = &g_18;
                        (*l_1336) = &l_1328;

                        ;
                        if (l_1308)
                            continue;
                    }
                    for (l_1308 = 9; (l_1308 >= 0); l_1308 -= 1)
                    {
                        char ***l_1338[7][8][4] = {{{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}, {{(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}, {(void*)0, &g_1206[6][2][4], (void*)0, &g_1206[6][2][4]}}};
                        int i, j, k;
                        l_1339 = l_1337;

                        ;
                        if ((*g_18))
                            break;
                    }

                    ;
                    g_1340 = &l_1287;

                    ;
                }

                ;
                (*g_1038) = 0xEBF596DDL;
            }

            ;
            ;
            ;
            return p_12;




        }
        else
        {
            unsigned l_1349 = 1UL;
            char *l_1350 = &g_8[0][0][3];
            int **l_1359[2][2][9] = {{{&g_1038, (void*)0, &g_18, &g_18, (void*)0, &g_1038, (void*)0, &g_18, &g_18}, {&g_1038, (void*)0, &g_18, &g_18, (void*)0, &g_1038, (void*)0, &g_18, &g_18}}, {{&g_1038, (void*)0, &g_18, &g_18, (void*)0, &g_1038, (void*)0, &g_18, &g_18}, {&g_1038, (void*)0, &g_18, &g_18, (void*)0, &g_1038, (void*)0, &g_18, &g_18}}};
            int i, j, k;
            l_1351 = &l_1328;

            ;
            (*l_1351) = (safe_rshift_func_int16_t_s_s(0xCB1DL, 0));
            l_1354 = &l_1287;

            ;
            (*g_1038) = ((&g_1019 == &g_1019) , func_34((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((void*)0 != l_1359[0][1][1]), p_14)), ((0x935DL & g_6[1][0][5]) || 65535UL))), l_1311));
        }


        ;
        ;
    }
    else
    {
        unsigned l_1360 = 2UL;
        int *l_1378 = &g_76[4][1];
        int l_1394 = 6L;
        unsigned char l_1418[3];
        const int **l_1429[8] = {&g_1253, (void*)0, &g_1253, (void*)0, &g_1253, (void*)0, &g_1253, (void*)0};
        const char *l_1430 = &g_8[1][0][1];
        int i;
        for (i = 0; i < 3; i++)
            l_1418[i] = 0xC7L;
        for (g_19 = 3; (g_19 >= 0); g_19 -= 1)
        {
            union U0 *l_1366 = &g_107[3][0][3];
            int l_1369 = 5L;
            unsigned short l_1375 = 0xBD46L;
            const volatile int *l_1417 = &g_218;
            if (p_13)
                break;
        }
        l_1354 = &l_1287;

        ;
        return l_1430;


    }


    ;
    (*l_1316) = 0xED0F37F6L;
    if (p_13)
    {
        char l_1433[7][4] = {{0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}, {0xF7L, 0xFBL, 0xF7L, 0xFBL}};
        int *l_1454 = &g_76[0][0];
        const int *l_1460 = &g_76[4][0];
        union U0 ***l_1463 = &l_1293;
        int **l_1474 = &l_1316;
        int i, j;
        if (((*l_1316) < (+((0x4A82L > (safe_sub_func_uint8_t_u_u(((p_13 < 0UL) < l_1433[5][1]), ((safe_mul_func_uint8_t_u_u((*l_1316), (safe_mod_func_uint32_t_u_u(((*l_1316) | ((safe_mod_func_uint32_t_u_u(g_8[0][0][3], (p_11 , 2L))) , 0x4BL)), (*l_1354))))) || 0x3D7FL)))) || (*l_1316)))))
        {
            short l_1440 = 0xF5E0L;
            unsigned l_1447 = 4294967295UL;
            int *l_1448 = &g_59;
            int **l_1449 = &g_1038;
            const char *l_1453[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1453[i] = &g_773;
            (*l_1449) = l_1448;

            ;
            for (l_1440 = 0; (l_1440 >= (-13)); l_1440--)
            {
                unsigned short l_1452 = 8UL;
                if (l_1452)
                    break;
            }
            return l_1453[4];


        }
        else
        {
            int ***l_1459 = &g_142[0];
            l_1460 = &l_1287;

            ;
            for (g_201 = 0; (g_201 == 3); g_201 = safe_add_func_uint8_t_u_u(g_201, 1))
            {
                char l_1468 = 0x58L;
                int l_1469[3][7][9] = {{{(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}}, {{(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}}, {{(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}, {(-8L), 0L, (-5L), 5L, 1L, 0x1B5C5467L, (-2L), 1L, 0x7F3BC813L}}};
                int l_1470 = 0xBF1A4FF4L;
                int i, j, k;
                l_1470 = ((((((l_1463 != (void*)0) , &g_142[0]) != &g_796[0][0][0]) && ((safe_mul_func_uint16_t_u_u(g_6[1][1][7], p_13)) == (***l_1459))) & (safe_mod_func_uint8_t_u_u(((p_13 & (p_13 == p_13)) <= l_1468), l_1469[0][1][7]))) , 0x01BB6AF6L);
            }
            for (g_773 = 6; (g_773 > 14); g_773 = safe_add_func_uint32_t_u_u(g_773, 8))
            {
                char l_1473[4] = {(-1L), (-1L), (-1L), (-1L)};
                int i;
                (*g_1038) = ((0x35DFL == ((~l_1473[0]) , g_773)) == p_14);
                if ((*g_110))
                    continue;
            }
        }

        ;
        (*l_1474) = &l_1370;

        ;
        (*l_1316) = ((p_14 , 1L) > (*l_1454));
    }
    else
    {
        (**g_1018) = (void*)0;

        ;
    }

    ;
    ;
    return p_12;


}







static const union U0 func_15(const char * p_16)
{
    int *l_20 = &g_6[0][1][6];
    char *l_541[10] = {(void*)0, &g_8[0][0][3], (void*)0, &g_8[0][0][3], (void*)0, &g_8[0][0][3], (void*)0, &g_8[0][0][3], (void*)0, &g_8[0][0][3]};
    int i;
    g_18 = &g_6[1][1][7];

    ;
    g_18 = l_20;
    for (g_19 = 0; (g_19 == 14); g_19 = safe_add_func_int16_t_s_s(g_19, 1))
    {
        unsigned short l_27 = 1UL;
        int *l_478[8][3][1] = {{{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}, {{&g_19}, {&g_19}, {&g_19}}};
        const int **l_1270 = &g_216;
        int i, j, k;
    }

    return (**g_1019);


    }







static const int * func_23(unsigned char p_24, char * p_25, unsigned p_26)
{
    unsigned l_1070 = 4294967292UL;
    const int *l_1073 = &g_19;
    int *l_1078 = &g_6[1][0][5];
    char *l_1080 = &g_8[0][0][3];
    unsigned short l_1118 = 0UL;
    int l_1121 = 0xEE4BB062L;
    union U0 **l_1135[9] = {&g_245, &g_245, &g_245, &g_245, &g_245, &g_245, &g_245, &g_245, &g_245};
    int *l_1153 = &l_1121;
    int *l_1154 = &g_19;
    int *l_1211 = (void*)0;
    int l_1243[7][10][3] = {{{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}, {{(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}, {(-1L), 1L, 0xC9893CDEL}}};
    int ***l_1244 = &g_142[0];
    const int *l_1267 = &g_76[4][1];
    const int *l_1269 = &g_19;
    int i, j, k;
    if ((p_26 && (g_6[1][1][7] , (((safe_sub_func_uint8_t_u_u(p_24, ((((safe_sub_func_uint8_t_u_u((((func_34(p_26, func_28((safe_lshift_func_int8_t_s_u(func_34(l_1070, p_25), (g_19 ^ (safe_mod_func_uint8_t_u_u(p_26, l_1070))))), l_1070, l_1073, p_25, p_24)) < p_26) & p_26) & (*g_7)), 0x0CL)) >= (*l_1073)) > 0x21L) == p_24))) < 0xBCL) | 4294967295UL))))
    {
        return l_1073;


    }
    else
    {
        unsigned short l_1079 = 65535UL;
        int *l_1096[8] = {&g_19, &g_19, (void*)0, &g_19, &g_19, (void*)0, &g_19, &g_19};
        char *l_1098 = (void*)0;
        int l_1099 = 0L;
        int l_1100 = 0xAEEA2DA5L;
        unsigned short l_1108 = 0xF79BL;
        union U0 l_1115 = {0};
        int l_1120 = 1L;
        unsigned l_1132 = 0x52020106L;
        unsigned short l_1149 = 0UL;
        unsigned l_1150[5] = {2UL, 0UL, 2UL, 0UL, 2UL};
        int *l_1163 = &g_76[4][1];
        const unsigned short l_1193 = 65535UL;
        int l_1234 = 0x4F40FB55L;
        int l_1263 = 7L;
        int i;
        if ((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 == l_1078), (func_34((func_34((*l_1073), p_25) | p_26), ((((g_19 , (1UL | (*p_25))) , (*l_1073)) | l_1079) , l_1080)) , 0x8600L))), g_6[0][0][3])))
        {
            int *l_1089 = &g_6[1][1][7];
            int *l_1097 = (void*)0;
            if ((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(func_34(g_8[0][0][3], func_28(((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((!(((g_773 , 0x02L) || (*g_7)) , 4294967289UL)), l_1099)) >= (*l_1078)), l_1100)) , 1UL), p_26, &l_1100, &g_8[0][0][3], (*l_1089))), p_24)), 3)))
            {
                unsigned char l_1102 = 0x57L;
                int l_1105 = 0L;
                for (g_145 = 0; (g_145 <= 3); g_145 += 1)
                {
                    const int **l_1101 = &g_216;
                    (*l_1101) = l_1073;

                    ;
                    (*l_1101) = (l_1102 , l_1097);

                    ;
                    if (p_24)
                        continue;
                    if (p_26)
                        break;
                    for (g_773 = 3; (g_773 >= 0); g_773 -= 1)
                    {
                        int **l_1104 = &l_1096[5];
                        l_1105 = (((((((4294967295UL ^ (g_1103 != &g_1019)) <= (((p_26 || ((*p_25) , (((*p_25) != (g_19 ^ (*l_1073))) , p_26))) < p_26) == (*p_25))) , (void*)0) != l_1104) > 0xA075L) && 246UL) < 1UL);
                        return l_1097;


                    }
                }


                l_1105 = (safe_sub_func_uint32_t_u_u((l_1108 , (*l_1073)), l_1105));
                l_1105 = (*l_1073);
            }
            else
            {
                int l_1111[7][2];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1111[i][j] = 0x77B69B37L;
                }
                l_1111[6][0] = ((~((safe_mod_func_uint16_t_u_u(p_26, p_26)) | p_24)) == 2UL);
                return l_1097;


            }


        }
        else
        {
            unsigned l_1114[5][10] = {{18446744073709551611UL, 3UL, 5UL, 5UL, 3UL, 18446744073709551611UL, 18446744073709551615UL, 0x5CF0787AL, 0x5967FFBDL, 18446744073709551615UL}, {18446744073709551611UL, 3UL, 5UL, 5UL, 3UL, 18446744073709551611UL, 18446744073709551615UL, 0x5CF0787AL, 0x5967FFBDL, 18446744073709551615UL}, {18446744073709551611UL, 3UL, 5UL, 5UL, 3UL, 18446744073709551611UL, 18446744073709551615UL, 0x5CF0787AL, 0x5967FFBDL, 18446744073709551615UL}, {18446744073709551611UL, 3UL, 5UL, 5UL, 3UL, 18446744073709551611UL, 18446744073709551615UL, 0x5CF0787AL, 0x5967FFBDL, 18446744073709551615UL}, {18446744073709551611UL, 3UL, 5UL, 5UL, 3UL, 18446744073709551611UL, 18446744073709551615UL, 0x5CF0787AL, 0x5967FFBDL, 18446744073709551615UL}};
            int i, j;
            l_1114[2][1] = (safe_add_func_uint8_t_u_u((((**g_1019) , g_111) , p_24), (*g_7)));
        }


        if ((l_1115 , ((void*)0 == l_1078)))
        {
            int *l_1119 = (void*)0;
            l_1121 = ((safe_sub_func_int32_t_s_s(((!(*l_1073)) | 0x26C0L), 0UL)) >= p_26);
        }
        else
        {
            char *l_1126 = (void*)0;
            int l_1128 = 0xE02A33A0L;
            unsigned short l_1142 = 65527UL;
            int l_1183 = 1L;
            int l_1192 = 4L;
            union U0 *l_1200 = &g_107[1][0][2];
            int *l_1202 = &g_76[4][1];
            if (((safe_add_func_uint16_t_u_u(0xDEC8L, (safe_mul_func_int16_t_s_s(func_34(g_59, l_1126), g_8[0][0][3])))) || p_24))
            {
                unsigned l_1127 = 0x9BF26B8DL;
                int *l_1129 = &g_59;
                l_1128 = l_1127;
                for (p_26 = 0; (p_26 <= 1); p_26 += 1)
                {
                    int *l_1131 = &l_1120;
                    for (g_145 = 0; (g_145 <= 3); g_145 += 1)
                    {
                        int **l_1130 = &g_18;
                        (*l_1130) = l_1129;

                        ;
                    }
                    for (g_773 = 0; (g_773 <= 3); g_773 += 1)
                    {
                        int **l_1133[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1133[i] = &g_18;
                        l_1131 = &l_1128;

                        ;
                        l_1096[0] = l_1131;
                    }


                    ;
                    return l_1129;


                }
            }
            else
            {
                union U0 **l_1134[5][2][6] = {{{&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}, {&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}}, {{&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}, {&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}}, {{&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}, {&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}}, {{&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}, {&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}}, {{&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}, {&g_245, (void*)0, &g_245, &g_245, &g_245, &g_245}}};
                int *l_1147 = (void*)0;
                int l_1148 = 0x8E9AEC7DL;
                int i, j, k;
                l_1135[7] = l_1134[3][1][2];


                l_1128 = p_24;
                l_1150[1] = (((safe_mul_func_uint16_t_u_u(g_59, (((((safe_sub_func_uint16_t_u_u(((*g_1018) == (*g_1018)), (252UL | (~(-8L))))) ^ l_1148) && l_1142) != l_1149) != l_1148))) ^ 0UL) | (*l_1078));
            }


            if (func_39((safe_add_func_uint32_t_u_u(g_76[4][1], 1L)), l_1153, l_1154))
            {
                int *l_1160 = &g_76[2][2];
                for (p_24 = 0; (p_24 != 47); p_24++)
                {
                    int **l_1157 = &l_1078;
                    (*l_1157) = &l_1120;

                    ;
                    for (l_1132 = 27; (l_1132 <= 11); l_1132 = safe_sub_func_uint32_t_u_u(l_1132, 2))
                    {
                        if ((**l_1157))
                            break;
                        g_245 = &l_1115;

                        ;
                        if (p_24)
                            break;
                    }
                }

                ;
                ;
                (*g_109) = (*g_109);
            }
            else
            {
                (*l_1153) = (safe_sub_func_uint16_t_u_u(g_59, (p_24 > (-1L))));
                l_1128 = (0x31236488L && 0x6D3A52A8L);
                l_1163 = l_1163;
                for (p_26 = (-27); (p_26 > 2); p_26++)
                {
                    int *l_1166 = &g_76[3][0];
                    for (l_1100 = 0; (l_1100 <= 8); l_1100 += 1)
                    {
                        if (p_24)
                            break;
                    }
                    l_1166 = l_1166;
                }
            }

            ;
            ;
            for (l_1128 = 0; (l_1128 == (-13)); l_1128 = safe_sub_func_int32_t_s_s(l_1128, 2))
            {
                int * const l_1194 = &l_1120;
                int **l_1203 = &l_1163;
                for (l_1149 = 0; (l_1149 <= 3); l_1149 += 1)
                {
                    (*g_109) = (void*)0;
                }
                if ((safe_mod_func_int32_t_s_s((*l_1078), l_1142)))
                {
                    for (l_1108 = 0; (l_1108 <= 3); l_1108 += 1)
                    {
                        int **l_1195 = &l_1096[0];
                        if (p_26)
                            break;
                        (*l_1195) = l_1194;
                        if (p_26)
                            break;
                        (*l_1153) = ((p_24 , ((((p_26 , (((~((p_26 <= (*l_1073)) <= (safe_sub_func_int32_t_s_s(p_26, (*l_1154))))) | 0UL) != (-10L))) && p_24) > (*p_25)) , 65534UL)) == p_26);
                    }
                    if (p_26)
                        break;
                    (*l_1194) = 0xA2510053L;
                }
                else
                {
                    int *l_1201 = &g_76[2][2];
                    (*l_1163) = (*l_1194);
                    (*l_1153) = p_24;
                    l_1202 = l_1201;
                    if (p_24)
                        break;
                }
                (*l_1203) = l_1194;

                ;
                (*l_1163) = ((safe_mod_func_int16_t_s_s((g_111 ^ p_24), p_26)) < g_6[1][1][7]);
            }


            ;
        }

        ;
        ;

        ;

        ;
        for (g_59 = 4; (g_59 >= 0); g_59 -= 1)
        {
            unsigned short l_1221 = 0x771CL;
            int ** const *l_1237 = &g_142[0];
            int i;
            for (l_1099 = 4; (l_1099 >= 0); l_1099 -= 1)
            {
                g_1206[6][2][4] = &p_25;
            }
            l_1096[5] = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_6[1][1][7], func_39(p_26, &l_1121, ((((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((((((safe_mod_func_int8_t_s_s((*l_1153), ((safe_rshift_func_uint8_t_u_u((*l_1163), (p_24 <= g_19))) , 4UL))) , l_1150[g_59]) && l_1150[g_59]) == p_24) != 0x98E67094L) || l_1221), g_6[1][0][0])) == g_76[4][1]), 0x66L)))) > 0x36L) | 0UL) , &l_1121)))), g_8[0][1][1])) , (void*)0);
            for (l_1099 = 3; (l_1099 >= 0); l_1099 -= 1)
            {
                unsigned short l_1242 = 0UL;
                const int *l_1252 = &l_1120;
                for (l_1100 = 3; (l_1100 >= 0); l_1100 -= 1)
                {
                    int **l_1222 = &l_1163;
                    int **l_1251 = (void*)0;
                    int i, j;
                    (*l_1222) = &l_1121;

                    ;
                    g_76[l_1099][l_1100] = (safe_unary_minus_func_uint32_t_u((0xFF223853L ^ ((((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((((g_8[1][0][0] != ((((((l_1234 == ((((0x7F2CL | (safe_sub_func_int32_t_s_s(((*g_7) , (((void*)0 == l_1237) && ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(p_24, p_24)), 1)) , g_6[1][1][2]))), l_1242))) | (*l_1073)) , (*p_25)) >= 0xC2L)) , p_26) <= p_24) , (*l_1163)) == (*p_25)) >= g_76[4][1])) <= p_24) != l_1242), p_24)) , 1L), (*p_25))), (*p_25))), l_1243[5][6][0])), g_773)) || p_24) ^ g_76[4][1]) > p_24))));
                    for (l_1149 = 0; (l_1149 <= 0); l_1149 += 1)
                    {
                        int i;
                        (*l_1153) = (&g_142[l_1149] != l_1244);
                        (*l_1222) = (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s(g_59, g_111)) , (func_39((&l_1096[0] == l_1251), &l_1234, (*l_1222)) , (!g_8[0][0][3]))), (p_26 , 0x46L))), 8UL)) || l_1242) , (void*)0);

                        ;
                        return g_1253;





                    }
                    (*l_1153) = (*l_1078);
                }
                for (g_218 = 0; g_218 < 7; g_218 += 1)
                {
                    for (l_1079 = 0; l_1079 < 10; l_1079 += 1)
                    {
                        for (p_26 = 0; p_26 < 3; p_26 += 1)
                        {
                            l_1243[g_218][l_1079][p_26] = 1L;
                        }
                    }
                }
            }
        }


        ;

        for (l_1070 = 0; (l_1070 <= 3); l_1070 += 1)
        {
            unsigned char l_1260 = 0x4EL;
            int l_1264 = (-6L);
            unsigned l_1265[3][2] = {{0x10476C3EL, 1UL}, {0x10476C3EL, 1UL}, {0x10476C3EL, 1UL}};
            int i, j;
            for (l_1121 = 3; (l_1121 >= 0); l_1121 -= 1)
            {
                const int *l_1266[8][5][6] = {{{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}, {{(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}, {(void*)0, &g_76[1][3], &l_1264, &g_19, &g_76[4][1], &l_1121}}};
                int i, j, k;
                (*g_109) = (*g_109);
                return l_1267;





            }
            for (l_1132 = 0; (l_1132 <= 3); l_1132 += 1)
            {
                int *l_1268 = &l_1121;
                l_1268 = &l_1264;

                ;
                for (g_145 = 3; (g_145 >= 0); g_145 -= 1)
                {
                    int i, j, k;
                    if ((*l_1163))
                        break;
                }
            }
        }
    }






    return l_1269;




}







static char * func_28(const unsigned short p_29, int p_30, const int * p_31, const char * p_32, short p_33)
{
    int l_1001[9];
    char *l_1002 = &g_8[1][1][1];
    union U0 **l_1009 = &g_245;
    char *l_1063 = &g_8[0][0][3];
    int i;
    for (i = 0; i < 9; i++)
        l_1001[i] = 0x7F3745E8L;
    for (g_59 = 0; (g_59 <= 10); g_59++)
    {
        int *l_1000[8] = {&g_19, &g_76[4][1], &g_19, &g_76[4][1], &g_19, &g_76[4][1], &g_19, &g_76[4][1]};
        int i;
        l_1001[6] = ((~g_218) && (g_145 , p_33));
        return l_1002;


    }
    for (g_773 = 3; (g_773 >= 0); g_773 -= 1)
    {
        unsigned short l_1024 = 0UL;
        int *l_1057 = &l_1001[6];
        union U0 ***l_1061[1][5];
        int *l_1062 = &l_1001[3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1061[i][j] = &l_1009;
        }
        for (g_59 = 0; (g_59 <= 3); g_59 += 1)
        {
            int **l_1010[6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_1010[i] = &g_18;
            for (p_30 = 3; (p_30 >= 0); p_30 -= 1)
            {
                int l_1006 = 1L;
                const int **l_1011 = &g_216;
                int i, j, k;
                for (g_145 = 0; (g_145 <= 0); g_145 += 1)
                {
                    int *l_1005[2][6] = {{(void*)0, &g_6[1][0][1], (void*)0, (void*)0, &g_6[1][0][1], (void*)0}, {(void*)0, &g_6[1][0][1], (void*)0, (void*)0, &g_6[1][0][1], (void*)0}};
                    int i, j, k;
                    l_1006 = (safe_rshift_func_uint8_t_u_s(g_76[(g_145 + 4)][g_773], 6));
                    l_1001[0] = (p_30 <= (((safe_rshift_func_uint16_t_u_u((0x04DEEEC7L <= (l_1009 != l_1009)), (p_29 , (l_1006 , (((l_1010[3] != l_1011) != p_29) < 0L))))) , (-1L)) < 1L));
                }
                (*l_1011) = &g_76[g_773][p_30];

                ;
            }
            p_31 = &g_76[(g_773 + 1)][g_773];

            ;
            for (p_30 = 3; (p_30 >= 0); p_30 -= 1)
            {
                short l_1012 = 0x945CL;
                union U0 ***l_1015[5][7][7] = {{{&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}}, {{&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}}, {{&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}}, {{&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}}, {{&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}, {&l_1009, &l_1009, (void*)0, &l_1009, &l_1009, &l_1009, &l_1009}}};
                int *l_1040 = &g_76[(g_773 + 1)][g_773];
                int i, j, k;
                for (g_145 = 3; (g_145 >= 0); g_145 -= 1)
                {
                    for (g_201 = 3; (g_201 >= 0); g_201 -= 1)
                    {
                        int i, j, k;
                        if ((*p_31))
                            break;
                        p_31 = &p_30;

                        ;
                        l_1012 = (*p_31);
                        l_1024 = (((~l_1001[6]) > (l_1015[1][2][6] != ((safe_lshift_func_int8_t_s_u((*p_32), 2)) , g_1018))) | (safe_lshift_func_uint16_t_u_s(65527UL, 7)));
                    }
                    (*g_109) = (void*)0;
                }
                l_1001[6] = 1L;
                for (p_33 = 0; (p_33 <= 1); p_33 += 1)
                {
                    short l_1037 = 0x7B7EL;
                    int *l_1039[2][5] = {{&l_1001[6], &l_1001[0], &l_1001[6], &l_1001[0], &l_1001[6]}, {&l_1001[6], &l_1001[0], &l_1001[6], &l_1001[0], &l_1001[6]}};
                    int i, j;
                    (*l_1040) = ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((0x4FB6L == 0xB7C2L), 2)) >= (&p_31 == (l_1001[4] , (void*)0))), g_773)) ^ 0x56L);
                }
                p_31 = &p_30;

                ;
            }

            ;
        }
        for (p_33 = 1; (p_33 >= 0); p_33 -= 1)
        {
            int **l_1041 = &g_1038;
            (*l_1041) = &l_1001[2];

            ;
            for (p_30 = 1; (p_30 >= 0); p_30 -= 1)
            {
                int l_1042 = 0xAD3C0283L;
                int *l_1058 = (void*)0;
                (*l_1041) = &l_1001[1];
                l_1042 = (*p_31);
                (*l_1057) = ((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((g_6[2][0][7] , ((p_33 , (((l_1001[6] | (safe_rshift_func_int8_t_s_s(l_1042, (safe_sub_func_int16_t_s_s(0x50A5L, p_30))))) <= (func_39(((safe_lshift_func_uint16_t_u_u(func_39((safe_rshift_func_int8_t_s_s((**l_1041), 6)), &l_1001[6], &l_1001[4]), g_773)) , 1UL), &l_1001[6], l_1057) , 0UL)) < g_6[1][1][1])) & p_33)), l_1001[0])), g_19)), 0x34FDL)) || (**l_1041));
                for (l_1042 = 1; (l_1042 >= 0); l_1042 -= 1)
                {
                    (*g_1038) = (((p_33 , (((((**l_1041) < p_33) && ((safe_lshift_func_int8_t_s_s((*p_32), (*p_32))) , 0xD5L)) >= 0xAC9CF610L) == g_59)) , l_1061[0][2]) != (void*)0);
                    (**l_1041) = 0L;
                }
            }
            (*l_1041) = &p_30;

            ;
            for (p_30 = 1; (p_30 >= 0); p_30 -= 1)
            {
                p_31 = (void*)0;

                ;
                for (g_145 = 0; (g_145 <= 1); g_145 += 1)
                {
                    (*l_1057) = (((*g_1038) , (*p_32)) >= (**l_1041));
                    (*l_1041) = l_1062;

                    ;
                }

                ;
                return &g_8[0][2][3];




            }
        }
    }




    return l_1063;




}







static const unsigned short func_34(unsigned short p_35, char * p_36)
{
    int l_544 = 0x8FDF035FL;
    int l_550[4][6][7] = {{{0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}}, {{0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}}, {{0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}}, {{0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}, {0xD604880CL, 0x92C3D8E2L, 0L, 0x92C3D8E2L, 0xD604880CL, 0xFA31D04DL, 3L}}};
    int *l_551 = (void*)0;
    int l_563 = 0xF4BBF22BL;
    int ***l_626 = &g_142[0];
    union U0 *l_670[10][2][4] = {{{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}, {{&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}, {&g_107[1][0][3], &g_107[3][0][3], &g_107[3][0][3], &g_107[3][0][3]}}};
    int l_691 = (-1L);
    char * const l_718 = (void*)0;
    int l_897 = 0xA1572AFFL;
    char l_957 = 0xE8L;
    int i, j, k;
    if ((p_35 , p_35))
    {
        int *l_560 = (void*)0;
        int l_610 = 0x678B5A45L;
        int * const *l_628 = (void*)0;
        int * const **l_627[3];
        short l_632 = 0xD437L;
        char *l_653 = &g_8[0][0][3];
        short l_674 = 0xFB7FL;
        int i;
        for (i = 0; i < 3; i++)
            l_627[i] = &l_628;
        l_560 = l_560;
        for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
        {
            unsigned l_571 = 0x83225221L;
            union U0 *l_579 = &g_107[3][0][3];
            int * const *l_601[4][5] = {{&l_560, &l_560, &l_560, &l_560, (void*)0}, {&l_560, &l_560, &l_560, &l_560, (void*)0}, {&l_560, &l_560, &l_560, &l_560, (void*)0}, {&l_560, &l_560, &l_560, &l_560, (void*)0}};
            int *l_607 = (void*)0;
            int *l_625 = &l_563;
            char *l_652 = &g_8[1][1][2];
            int i, j;
            if (p_35)
            {
                char l_561 = 0x4AL;
                int *l_606 = &g_6[2][1][0];
                int l_620 = (-1L);
                int **l_621[6][4][6] = {{{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}, {{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}, {{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}, {{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}, {{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}, {{&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}, {&l_607, &l_607, (void*)0, &l_607, &l_606, &l_607}}};
                int i, j, k;
                for (l_544 = 3; (l_544 >= 0); l_544 -= 1)
                {
                    int *l_562[1];
                    char l_583 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_562[i] = (void*)0;
                    l_563 = (p_35 == ((+g_145) & l_561));
                    if ((4294967288UL >= p_35))
                    {
                        unsigned short l_564 = 65531UL;
                        int *l_582 = &g_59;
                        int **l_584 = &l_582;
                        l_564 = 0x64D83B30L;
                        if (p_35)
                            continue;
                        l_583 = (safe_lshift_func_int8_t_s_s(l_561, (safe_mul_func_uint16_t_u_u(((p_35 , (safe_add_func_uint32_t_u_u((!l_571), (((g_145 || (safe_unary_minus_func_int8_t_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((func_39((safe_sub_func_uint32_t_u_u((((((void*)0 == l_579) || (g_59 <= p_35)) , ((safe_add_func_int8_t_s_s((((p_35 > p_35) , g_76[4][1]) , 0x85L), 0x10L)) < p_35)) <= g_19), p_35)), &l_563, l_582) , p_35) != l_571), 15)) , p_35), g_59)) ^ p_35)))) && 4294967287UL) , p_35)))) && 0x6074L), 8UL))));
                        (*l_584) = &l_563;

                        ;
                    }
                    else
                    {
                        return g_218;
                    }
                    if ((((safe_div_func_int16_t_s_s(p_35, p_35)) && 0xF717L) != 1UL))
                    {
                        l_563 = (((g_59 , (safe_div_func_int32_t_s_s((p_35 != 1L), ((0x6AEC2192L || 0x803434B9L) & (g_8[0][1][3] > func_39(g_145, &l_563, &l_563)))))) | g_19) , (*l_606));


                        return p_35;


                    }
                    else
                    {
                        l_610 = 1L;
                    }
                    for (g_201 = 0; (g_201 <= 1); g_201 += 1)
                    {
                        unsigned char l_619 = 0xA4L;
                        int i, j, k;
                        l_620 = ((g_8[g_59][(g_59 + 1)][(g_201 + 1)] ^ ((p_35 ^ (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((~((*g_109) == (void*)0)), ((-1L) == 0x0CBCL))), (safe_rshift_func_int8_t_s_s(p_35, 1)))), ((g_19 != g_8[0][2][3]) , l_619)))) | p_35)) != (*l_606));
                        l_562[0] = &l_610;
                    }


                }
                l_607 = &l_563;

                ;
            }
            else
            {
                int * const l_624[7] = {(void*)0, (void*)0, &g_6[0][1][5], (void*)0, (void*)0, &g_6[0][1][5], (void*)0};
                int ** const *l_629 = (void*)0;
                union U0 l_633 = {0};
                int *l_665 = &g_76[4][1];
                int i;
                (*l_625) = (safe_add_func_uint8_t_u_u((l_624[3] != l_625), (l_626 == l_626)));
                for (g_201 = 0; (g_201 <= 1); g_201 += 1)
                {
                    int *l_630 = &g_76[4][1];
                    l_560 = ((l_627[2] == l_629) , l_630);

                    ;
                    for (l_610 = 1; (l_610 >= 0); l_610 -= 1)
                    {
                        int **l_631[7][5] = {{&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}, {&l_560, &l_560, &l_551, &l_630, &l_551}};
                        int i, j, k;
                        l_551 = l_630;

                        ;
                        if (g_8[g_201][l_610][(l_610 + 2)])
                            break;
                    }
                }

                ;
                ;
                if (func_39(g_218, (l_632 , &l_610), (l_633 , &l_610)))
                {
                    int **l_634 = (void*)0;
                    int **l_635 = &l_551;
                    for (l_632 = 0; (l_632 <= 3); l_632 += 1)
                    {
                        int i, j;
                        g_76[(g_59 + 1)][(g_59 + 1)] = g_76[(l_632 + 1)][l_632];
                        if (p_35)
                            break;
                    }
                    (*l_635) = &l_563;

                    ;
                }
                else
                {
                    short l_656 = 3L;
                    int *l_667 = &g_76[2][3];
                    if (((!(safe_add_func_uint16_t_u_u((((g_201 < (*g_7)) < 0xDCF5L) != g_8[0][0][3]), p_35))) < g_218))
                    {
                        (*l_625) = p_35;
                        (*l_625) = p_35;
                    }
                    else
                    {
                        char l_666 = 1L;
                        (*l_625) = (safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((l_652 == l_653), 7)) == p_35), (safe_add_func_int8_t_s_s((((l_656 == (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((*l_579) , (func_39(g_201, l_665, l_625) , p_35)) | p_35) , g_59), 3)), g_6[0][1][0])), 0x63L)), 4))) , p_35) , 0x63L), 3L)))), 2)), 0xE209L)) , l_666) == (*g_7)), 0x8CEBL));


                    }


                    for (p_35 = 0; (p_35 <= 3); p_35 += 1)
                    {
                        int **l_668 = (void*)0;
                        int **l_669 = (void*)0;
                        union U0 **l_671 = &l_670[1][1][1];
                        l_625 = l_667;

                        ;
                        (*l_625) = p_35;
                        (*l_671) = l_670[1][1][2];
                    }

                    ;
                    (*g_109) = (*g_109);
                }


                ;
                ;
                ;
            }


            ;
            ;
            ;
            ;
            (*g_109) = (*g_109);
            return g_6[0][0][0];


        }
        l_563 = ((safe_add_func_int8_t_s_s((((((p_35 , p_35) , (l_674 && (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((p_35 , &g_107[3][0][3]) == (((0x7FF2BA08L > (g_201 == ((safe_rshift_func_uint8_t_u_s(g_6[1][0][7], 4)) > 0x459CL))) > g_76[4][1]) , (void*)0)), 6)), g_201)))) , g_8[0][0][3]) <= 0xE13EL) , (*g_7)), (*g_7))) || p_35);
        l_563 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_35, 11)), (((safe_sub_func_uint8_t_u_u(p_35, 0xC5L)) == (g_59 | (safe_mod_func_uint8_t_u_u(((p_35 && (func_39(func_39(p_35, &l_610, (((((p_35 , l_691) && p_35) & p_35) && 1L) , &l_610)), &l_610, &l_610) || p_35)) <= g_145), 1UL)))) != p_35))), g_6[2][1][3]));


    }
    else
    {
        union U0 *l_692 = &g_107[3][0][3];
        union U0 **l_693[1];
        int i;
        for (i = 0; i < 1; i++)
            l_693[i] = &l_692;
        l_670[1][1][2] = l_692;
    }
lbl_921:
    for (l_563 = 3; (l_563 >= 0); l_563 -= 1)
    {
        int l_696 = 0xF4CAAC5EL;
        union U0 l_716 = {0};
        char *l_729 = (void*)0;
        int **l_731 = &l_551;
        unsigned char l_740 = 0xD7L;
        if ((safe_mul_func_int8_t_s_s(l_696, (g_76[3][0] != (8UL != 0xF326L)))))
        {
            int l_703[7] = {0x904CDFF6L, (-1L), 0x904CDFF6L, (-1L), 0x904CDFF6L, (-1L), 0x904CDFF6L};
            int l_704 = (-1L);
            unsigned l_717 = 18446744073709551606UL;
            char *l_719[8][5][5] = {{{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}, {{&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}, {&g_8[0][0][3], (void*)0, (void*)0, &g_8[0][0][3], &g_8[1][0][0]}}};
            int **l_720[9] = {&g_18, (void*)0, &g_18, (void*)0, &g_18, (void*)0, &g_18, (void*)0, &g_18};
            int i, j, k;
            for (p_35 = 0; (p_35 <= 3); p_35 += 1)
            {
                union U0 l_707 = {0};
                int l_708 = 0xD2273C6DL;
                int *l_709 = &g_76[4][1];
                (*l_709) = (safe_div_func_uint32_t_u_u(g_59, 4294967295UL));
                for (g_145 = 0; (g_145 <= 3); g_145 += 1)
                {
                    int i, j, k;
                    return l_550[l_563][g_145][p_35];
                }
            }
            l_551 = &l_703[5];

            ;
            return p_35;
        }
        else
        {
            int *l_721[1][1][9];
            const short l_728 = 6L;
            int **l_730 = &l_551;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 9; k++)
                        l_721[i][j][k] = &l_563;
                }
            }
            (*l_730) = &l_696;

            ;
        }

        ;
        (*l_731) = &l_696;
        for (l_691 = 1; (l_691 >= 0); l_691 -= 1)
        {
            unsigned l_742[3];
            const int *l_764[5][2] = {{&l_563, &g_76[3][1]}, {&l_563, &g_76[3][1]}, {&l_563, &g_76[3][1]}, {&l_563, &g_76[3][1]}, {&l_563, &g_76[3][1]}};
            const char *l_772 = &g_8[0][0][3];
            const char **l_771 = &l_772;
            const char ***l_770 = &l_771;
            int *l_847[4][1][6] = {{{&g_59, &g_59, &g_59, &g_59, &g_59, &g_59}}, {{&g_59, &g_59, &g_59, &g_59, &g_59, &g_59}}, {{&g_59, &g_59, &g_59, &g_59, &g_59, &g_59}}, {{&g_59, &g_59, &g_59, &g_59, &g_59, &g_59}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_742[i] = 0UL;
        }
    }
    if (p_35)
    {
        int *l_903 = &l_563;
        for (g_773 = 0; (g_773 != 7); g_773 = safe_add_func_uint16_t_u_u(g_773, 5))
        {
            int *l_904[6][10][2] = {{{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}, {{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}, {{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}, {{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}, {{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}, {{(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}, {(void*)0, &g_76[4][1]}}};
            int **l_922[5][2][2] = {{{&l_904[2][6][1], &l_903}, {&l_904[2][6][1], &l_903}}, {{&l_904[2][6][1], &l_903}, {&l_904[2][6][1], &l_903}}, {{&l_904[2][6][1], &l_903}, {&l_904[2][6][1], &l_903}}, {{&l_904[2][6][1], &l_903}, {&l_904[2][6][1], &l_903}}, {{&l_904[2][6][1], &l_903}, {&l_904[2][6][1], &l_903}}};
            int i, j, k;
            for (l_544 = 0; (l_544 >= 0); l_544 -= 1)
            {
                int *l_905 = &g_59;
            }
            if ((*l_903))
                continue;
            if (l_544)
                goto lbl_921;
            l_551 = l_903;

            ;
        }
    }
    else
    {
        int *l_925[2][4][7] = {{{(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}}, {{(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}, {(void*)0, &l_563, &g_76[4][1], &g_76[4][1], &l_563, (void*)0, &l_563}}};
        const short l_927 = (-1L);
        int i, j, k;
        for (l_544 = 0; (l_544 != (-20)); --l_544)
        {
            int **l_926 = &l_551;
            char l_930[2];
            const char l_935 = (-5L);
            short l_956 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_930[i] = (-7L);
            (*l_926) = l_925[0][2][6];

            ;
            (*l_926) = l_925[0][2][6];
            if (l_927)
                continue;
            if ((safe_lshift_func_int8_t_s_u(l_930[1], 5)))
            {
                (*l_926) = l_925[1][0][3];
            }
            else
            {
                const union U0 * const l_936 = &g_107[3][0][3];
                char *l_937 = &g_8[0][0][3];
                int l_943 = 0x027E7821L;
                union U0 **l_965 = &l_670[4][1][2];
                int **l_967 = &l_925[1][0][3];
                int l_974 = 0xF2030C18L;
                (*l_926) = (void*)0;

                ;
                l_925[1][3][1] = l_925[0][2][6];
                for (l_691 = 20; (l_691 != 24); l_691++)
                {
                    for (g_201 = 17; (g_201 >= (-7)); g_201--)
                    {
                        unsigned l_942 = 3UL;
                        if (l_942)
                            break;
                    }
                    l_563 = l_943;
                }
                for (l_943 = 0; (l_943 >= (-28)); l_943--)
                {
                    char l_958 = 0L;
                    int *l_971 = (void*)0;
                    if ((((p_35 <= (p_35 < (safe_mul_func_uint16_t_u_u(((+g_6[2][0][5]) , (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_6[0][0][3], (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_925[0][2][6] != l_925[0][2][6]), ((((2L ^ ((void*)0 == p_36)) < g_773) >= p_35) ^ 0xF54DA276L))), 0UL)))), l_956))), p_35)))) || l_957) == p_35))
                    {
                        if (p_35)
                            break;
                        (*l_926) = (*l_926);
                        l_897 = ((void*)0 == &l_943);
                        l_958 = p_35;
                    }
                    else
                    {
                        (*g_109) = (*g_109);
                    }
                    if ((((p_35 | (safe_mul_func_uint16_t_u_u(((g_201 < ((safe_sub_func_uint8_t_u_u(1UL, (p_35 , (((*g_7) != g_773) == (((*g_228) != ((g_107[3][0][3] , (safe_rshift_func_uint16_t_u_s(g_8[0][2][3], p_35))) , (*g_228))) , l_958))))) && l_943)) == 0x2A6D0B40L), 4L))) < p_35) < 0x1F3BL))
                    {
                        union U0 ***l_966 = &l_965;
                        (*l_966) = l_965;
                        (*l_926) = l_925[0][2][6];
                        if (l_943)
                            continue;
                    }
                    else
                    {
                        int *l_968 = &l_943;
                        l_974 = ((((l_967 != (void*)0) , (void*)0) == l_968) < ((safe_mul_func_int16_t_s_s(p_35, (((safe_div_func_int8_t_s_s((*g_7), p_35)) , g_201) > 65535UL))) , (-8L)));
                    }
                }

                ;
            }
        }


    }


    for (g_145 = 0; (g_145 == 20); g_145 = safe_add_func_int8_t_s_s(g_145, 4))
    {
        unsigned short l_995 = 8UL;
        int l_997 = 0x80FE3EB0L;
        for (g_773 = 3; (g_773 > (-15)); g_773 = safe_sub_func_uint32_t_u_u(g_773, 1))
        {
            const unsigned l_983 = 0x7BF2DA4FL;
            int *l_988 = &g_6[0][0][4];
            int l_996 = 6L;
            for (g_59 = 20; (g_59 >= (-17)); g_59--)
            {
                return p_35;
            }
            for (l_544 = 0; (l_544 < (-26)); l_544--)
            {
                return l_983;
            }
            l_996 = (safe_div_func_uint32_t_u_u(0xD1F45D24L, (safe_mul_func_uint8_t_u_u((func_39(p_35, l_988, l_988) < (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((p_35 < ((((g_8[0][0][3] >= p_35) != (!g_6[0][1][5])) || p_35) > 252UL)), 0x8484L)), p_35)) & (*g_7)) <= g_8[0][0][0]), p_35))), l_995))));
            l_997 = (g_8[1][1][2] >= p_35);
        }
    }
    return g_218;
}







static unsigned func_39(unsigned p_40, int * p_41, int * p_42)
{
    unsigned short l_488 = 0xBE6EL;
    const int *l_490 = &g_6[1][1][7];
    char *l_498 = (void*)0;
    union U0 l_503 = {0};
    int ***l_506 = &g_142[0];
    unsigned l_536[8] = {0xD736C492L, 2UL, 0xD736C492L, 2UL, 0xD736C492L, 2UL, 0xD736C492L, 2UL};
    const int **l_537 = &g_216;
    int *l_540 = &g_6[0][1][2];
    int i;
    for (g_201 = (-16); (g_201 < (-9)); ++g_201)
    {
        return g_76[3][1];
    }
    for (g_201 = (-2); (g_201 >= 22); g_201 = safe_add_func_uint16_t_u_u(g_201, 3))
    {
        union U0 *l_483 = (void*)0;
        union U0 **l_484 = &l_483;
        int l_489 = 0x42F38CA8L;
        char *l_497 = &g_8[0][2][2];
        unsigned short l_527 = 0x9DA3L;
        (*l_484) = l_483;
        l_488 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(p_40)), 0x8D6F0256L));
        if (((((l_489 <= (p_40 && g_8[0][0][3])) , p_42) == (l_489 , l_490)) , ((*p_42) ^ g_201)))
        {
            char l_491[2];
            int ***l_507 = &g_142[0];
            int i;
            for (i = 0; i < 2; i++)
                l_491[i] = 7L;
            if (l_491[0])
                break;
            for (p_40 = 25; (p_40 != 57); p_40++)
            {
                int *l_494 = &g_76[4][1];
                (*l_494) = (g_201 , l_489);
            }

            ;
        }
        else
        {
            int *l_520 = &g_76[4][1];
            int *l_528[7];
            int i;
            for (i = 0; i < 7; i++)
                l_528[i] = &l_489;
            for (l_489 = 4; (l_489 == 19); l_489 = safe_add_func_int32_t_s_s(l_489, 7))
            {
                int **l_518 = (void*)0;
                int **l_519[5][9] = {{&g_18, (void*)0, &g_18, &g_18, (void*)0, &g_18, (void*)0, &g_18, &g_18}, {&g_18, (void*)0, &g_18, &g_18, (void*)0, &g_18, (void*)0, &g_18, &g_18}, {&g_18, (void*)0, &g_18, &g_18, (void*)0, &g_18, (void*)0, &g_18, &g_18}, {&g_18, (void*)0, &g_18, &g_18, (void*)0, &g_18, (void*)0, &g_18, &g_18}, {&g_18, (void*)0, &g_18, &g_18, (void*)0, &g_18, (void*)0, &g_18, &g_18}};
                int i, j;
                l_520 = p_41;
            }


            if ((*p_42))
                continue;
            l_489 = ((g_76[0][1] > (((g_8[1][2][3] , ((((safe_mod_func_int16_t_s_s((((*g_7) | ((l_489 , l_503) , p_40)) , g_6[1][1][7]), ((safe_sub_func_int16_t_s_s(p_40, ((((safe_mul_func_int8_t_s_s(((void*)0 != (*l_484)), p_40)) < p_40) > (*l_520)) > 255UL))) & p_40))) ^ 0x47L) != 0L) ^ (*l_490))) & l_527) & g_145)) != 0x3D50L);
        }

        ;
    }

    ;
    (*l_537) = (((((l_503 , (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(g_6[1][0][7])) || ((l_503 , (safe_lshift_func_uint16_t_u_s((*l_490), ((&l_498 != (*g_228)) < (*l_490))))) , (((g_218 ^ (safe_mul_func_uint8_t_u_u(g_76[4][1], p_40))) != g_76[0][0]) == (*l_490)))), 0xF9L))) <= l_536[5]) , (void*)0) == l_506) , l_490);

    ;
    (*l_537) = p_42;


    return g_218;
}







static int * func_43(unsigned p_44, unsigned p_45, int * p_46, unsigned short p_47, char * p_48)
{
    int l_204 = 0x2E64E466L;
    int l_213[5][3] = {{4L, 0x9C167B5BL, 4L}, {4L, 0x9C167B5BL, 4L}, {4L, 0x9C167B5BL, 4L}, {4L, 0x9C167B5BL, 4L}, {4L, 0x9C167B5BL, 4L}};
    union U0 *l_239 = (void*)0;
    unsigned short l_246[6][9] = {{0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}, {0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}, {0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}, {0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}, {0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}, {0xE25AL, 0xD856L, 0xC395L, 0x90C9L, 1UL, 0xC361L, 1UL, 0x90C9L, 0xC395L}};
    int *l_292 = &g_59;
    char **l_356 = (void*)0;
    char ***l_355 = &l_356;
    int *l_477 = &l_213[0][0];
    int i, j;
    (*g_109) = (void*)0;

    ;
    if ((*p_46))
    {
        int ***l_214[10][10] = {{&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}, {&g_142[0], (void*)0, &g_142[0], (void*)0, (void*)0, &g_142[0], (void*)0, &g_142[0], &g_142[0], &g_142[0]}};
        union U0 **l_257[7][4][8] = {{{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}, {{&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}, {&g_245, &l_239, &l_239, &g_245, &l_239, (void*)0, &l_239, (void*)0}}};
        short l_278 = 0x794FL;
        char **l_299 = &g_7;
        int i, j, k;
        if ((*p_46))
        {
            const int *l_215 = &g_76[1][1];
            g_216 = l_215;
        }
        else
        {
            const volatile int *l_217 = &g_218;
            l_217 = (*g_109);

            ;
        }
        for (p_47 = 0; (p_47 <= 3); p_47 += 1)
        {
            union U0 *l_219[8];
            union U0 **l_220 = &l_219[6];
            int l_224 = 4L;
            short l_244 = 0L;
            int ***l_259 = &g_142[0];
            unsigned l_279 = 0xE88E8DE1L;
            int i;
            for (i = 0; i < 8; i++)
                l_219[i] = &g_107[3][0][3];
            (*l_220) = l_219[0];
            for (g_59 = 3; (g_59 >= 0); g_59 -= 1)
            {
                unsigned l_223 = 0xC3BF8462L;
                l_223 = (safe_mul_func_uint16_t_u_u(0xFD7EL, 6L));
                for (p_44 = 0; (p_44 <= 3); p_44 += 1)
                {
                    int *l_225 = &g_59;
                    for (l_204 = 3; (l_204 >= 0); l_204 -= 1)
                    {
                        int i, j, k;
                        l_224 = (+(*p_46));
                        p_46 = l_225;

                        ;
                    }
                    l_224 = (*l_225);
                    (*g_109) = (void*)0;
                }
                (*g_109) = (*g_109);
            }
            for (l_204 = 0; (l_204 >= 0); l_204 -= 1)
            {
                int * const l_242 = &l_204;
                union U0 ** const l_258[9][1][1] = {{{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}};
                const int **l_261 = &g_216;
                const int *** const l_260 = &l_261;
                int l_280 = 0xA48598CBL;
                char *l_306 = &g_8[1][1][2];
                int i, j, k;
                if (((*g_7) || (safe_mul_func_uint8_t_u_u(g_145, p_45))))
                {
                    unsigned l_238 = 0x1F67890DL;
                    int i;
                    if ((*p_46))
                    {
                        (*l_220) = l_239;
                        if ((*p_46))
                            continue;
                    }
                    else
                    {
                        l_224 = (*g_216);
                        if (l_213[1][2])
                            break;
                        if (l_224)
                            break;
                        l_213[1][2] = (*p_46);
                    }
                    l_213[3][0] = (-1L);
                    return p_46;



                }
                else
                {
                    for (g_59 = 0; (g_59 >= 6); g_59 = safe_add_func_int32_t_s_s(g_59, 4))
                    {
                        int **l_243 = &g_18;
                        (*l_243) = l_242;

                        ;
                    }
                    if (l_244)
                        continue;
                    g_245 = &g_107[4][0][0];

                    ;
                }

                ;
                l_246[2][3] = (*p_46);
                if ((g_111 > (((-7L) < ((((safe_mul_func_uint8_t_u_u((g_6[1][1][7] , (safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(l_213[0][0], (((((g_76[1][0] , (l_213[1][2] ^ (*g_7))) ^ ((p_45 , l_257[0][2][7]) == l_258[3][0][0])) | 1L) , p_44) ^ g_19))) , l_259) != l_260), 9UL)) , g_19) , 0x8DL) || g_201), 0L))), 250UL)) , 0x90215A8CL) , g_59) <= (-1L))) >= g_76[3][1])))
                {
                    int l_267 = (-8L);
                    int l_274 = 7L;
                    int l_277 = 0x607F5430L;
                    if (((+(*p_46)) && (safe_mod_func_uint32_t_u_u(p_45, (safe_mul_func_uint8_t_u_u((&g_107[3][0][3] == (void*)0), 9UL))))))
                    {
                        int l_266 = 0xFEE72222L;
                        l_266 = l_213[1][2];
                        l_280 = l_279;
                    }
                    else
                    {
                        (**l_259) = p_46;

                        ;
                        (**l_259) = p_46;
                    }
                }
                else
                {
                    unsigned l_307 = 0UL;
                    char *l_308 = (void*)0;
                    for (g_201 = 3; (g_201 >= 0); g_201 -= 1)
                    {
                        (*g_109) = (void*)0;
                    }
                    for (g_59 = (-26); (g_59 > (-26)); g_59++)
                    {
                        int *l_291 = &g_76[4][1];
                        l_213[1][2] = (safe_sub_func_int8_t_s_s((p_45 | (l_213[1][2] == (g_76[4][1] < (safe_mul_func_int8_t_s_s((1UL < (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x0127E57FL, l_204)), (-7L)))), (g_76[2][1] , 0x1BL)))))), g_218));
                        (*l_261) = l_291;

                        ;
                        (*l_261) = l_292;

                        ;
                        (*l_291) = (safe_lshift_func_uint16_t_u_u((((((((&p_48 == (*g_228)) & g_8[1][0][0]) > ((p_47 < (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((g_59 < (((void*)0 != l_299) >= (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_306 != ((!l_307) , l_308)) , (**l_261)), l_279)), (*l_292))), p_45)))), g_59)) >= p_47), (*l_291)))) == (-10L))) | (*l_291)) & g_76[2][2]) < 0x4E01L) , g_8[1][1][1]), 7));
                    }
                }
                (**l_260) = (((safe_lshift_func_uint16_t_u_u(g_111, ((((safe_div_func_int32_t_s_s((*p_46), ((safe_sub_func_int16_t_s_s((((g_201 | 0L) < (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0xA5ECL, p_45)), g_201))) >= (*p_46)), g_145)) , 0x4A77F9E0L))) , 0xA7L) < (*l_242)) | (*p_46)))) ^ 0x9D387A41L) , (*l_261));
            }


        }


        ;
        ;
        ;
        for (l_204 = 0; (l_204 == (-19)); l_204 = safe_sub_func_uint32_t_u_u(l_204, 8))
        {
            for (g_201 = 0; (g_201 != 10); g_201++)
            {
                l_292 = p_46;
            }
        }

        ;
        (*g_109) = (*g_109);
    }
    else
    {
        unsigned short l_351 = 0x893DL;
        for (g_201 = 0; (g_201 >= 0); g_201 -= 1)
        {
            return p_46;


        }
        if (((safe_rshift_func_int8_t_s_u((*p_48), 0)) , (*p_46)))
        {
            unsigned l_338 = 18446744073709551612UL;
            int *l_341 = &g_6[0][0][4];
            for (g_145 = 3; (g_145 >= 0); g_145 -= 1)
            {
                unsigned l_325[10] = {4294967295UL, 1UL, 0UL, 0UL, 1UL, 4294967295UL, 1UL, 0UL, 0UL, 1UL};
                int l_339 = 0xC7358A45L;
                int i;
                if (l_325[3])
                    break;
                for (p_47 = 0; (p_47 <= 2); p_47 += 1)
                {
                    char **l_333 = &g_7;
                    char ***l_332 = &l_333;
                    int l_352 = 0xFEB01F53L;
                    for (g_201 = 2; (g_201 >= 0); g_201 -= 1)
                    {
                        int **l_340 = &l_292;
                        union U0 **l_350[7][2] = {{&g_245, &g_245}, {&g_245, &g_245}, {&g_245, &g_245}, {&g_245, &g_245}, {&g_245, &g_245}, {&g_245, &g_245}, {&g_245, &g_245}};
                        int *l_353 = &l_213[1][2];
                        int i, j;
                        l_339 = (((safe_div_func_int16_t_s_s(l_213[p_47][p_47], (safe_mod_func_uint16_t_u_u(((l_213[p_47][p_47] != (safe_mul_func_uint8_t_u_u((((&g_229 != l_332) == (0L >= (!(*l_292)))) , l_213[p_47][p_47]), (((safe_div_func_uint16_t_u_u((0xF3L <= (safe_mul_func_int16_t_s_s(0L, p_47))), p_47)) , l_325[7]) > g_111)))) , l_338), p_44)))) >= g_201) , (*p_46));
                        (*l_340) = &l_339;

                        ;
                        (*l_340) = l_341;

                        ;
                        (*l_353) = (p_44 , ((*p_48) | (((((safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(0x758ED415L, (safe_sub_func_uint32_t_u_u((((p_47 != (safe_div_func_int32_t_s_s(((((**l_340) , (void*)0) == l_350[5][0]) < l_351), (-1L)))) , p_47) , g_111), (*p_46))))) && l_352) <= (-4L)), 0x71E8F414L)) <= g_76[3][0]) ^ g_76[0][3]) , 0xE8B0L) != g_201)));
                    }
                    for (p_45 = 0; (p_45 <= 3); p_45 += 1)
                    {
                        int *l_354[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_354[i] = &l_339;
                        l_339 = (*l_292);
                    }
                }
            }

            ;
        }
        else
        {
            const char *l_359 = (void*)0;
            const char **l_358[7] = {&l_359, &l_359, (void*)0, &l_359, &l_359, (void*)0, &l_359};
            const char ***l_357 = &l_358[2];
            int l_372[3][5][9] = {{{0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}}, {{0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}}, {{0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}, {0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL, 0x2EEAC100L, 0x2EEAC100L, 0xE34C557EL}}};
            int i, j, k;
            (*l_292) = (g_8[0][0][2] | ((*l_292) >= 0L));
            (*l_292) = ((l_355 == ((*p_48) , l_357)) && (safe_sub_func_int16_t_s_s(((*g_7) || l_351), (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((((((*l_292) < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x68L, 2)), 4294967291UL))) , l_351) ^ (*l_292)) , l_372[0][0][3]) != (*l_292)), p_44)) == 0x3AC845C9L), l_372[2][2][7])) , 0L), 0x24L)))));
        }

        ;
        for (g_201 = 0; (g_201 >= 22); g_201 = safe_add_func_uint16_t_u_u(g_201, 8))
        {
            if (l_351)
                break;
        }
    }


    ;
    ;
    ;
    ;
    for (p_45 = 0; (p_45 != 55); p_45 = safe_add_func_int32_t_s_s(p_45, 6))
    {
        int l_382[7][6][6] = {{{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}, {{0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}, {0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L, 0xBD646E06L, 0x55851CC5L}}};
        char **l_392[1];
        char ***l_418 = &l_392[0];
        int *l_422 = &g_76[4][1];
        union U0 l_433 = {0};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_392[i] = &g_7;
        for (g_145 = (-15); (g_145 >= 26); g_145++)
        {
            int *l_390 = &g_76[4][1];
            union U0 l_411 = {0};
            if ((*l_292))
            {
                int l_381 = 0x6E7AD544L;
                for (g_59 = 0; (g_59 <= (-3)); --g_59)
                {
                    if (((*p_46) , l_381))
                    {
                        unsigned char l_383 = 0x5BL;
                        int * const l_384[10][7] = {{&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}, {&l_204, (void*)0, &g_6[1][1][7], &g_76[4][1], (void*)0, &l_204, (void*)0}};
                        int **l_385[3][9][9] = {{{&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}}, {{&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}}, {{&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}, {&l_292, (void*)0, (void*)0, &g_18, &g_18, &g_18, &g_18, (void*)0, &g_18}}};
                        int **l_386 = &g_18;
                        int i, j, k;
                        if (l_382[4][1][0])
                            break;
                        l_383 = l_381;
                        if ((*p_46))
                            break;
                        (*l_386) = l_384[7][5];

                        ;
                    }
                    else
                    {
                        return p_46;




                    }

                    ;
                    for (p_44 = 0; (p_44 <= 5); p_44 += 1)
                    {
                        unsigned l_389 = 0xE4931B0BL;
                        l_389 = (safe_div_func_int16_t_s_s(p_44, 3UL));
                    }
                }
                if ((*p_46))
                    break;
                l_390 = &l_204;

                ;
                (*l_390) = 1L;
            }
            else
            {
                unsigned char l_391[1][2];
                int *l_419 = &g_76[2][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_391[i][j] = 0UL;
                }
                if ((l_391[0][1] , ((*l_355) != ((0xE7BC1A00L | (l_391[0][1] != (*p_46))) , (((*p_46) < (~p_47)) , l_392[0])))))
                {
                    return p_46;




                }
                else
                {
                    const unsigned short l_400 = 0xFBA8L;
                    for (p_47 = 1; (p_47 != 47); p_47 = safe_add_func_int16_t_s_s(p_47, 8))
                    {
                        int l_395 = 0x741F66E1L;
                        int ***l_405 = (void*)0;
                        int ***l_406 = &g_142[0];
                        (*l_390) = ((l_395 < (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(p_44, l_400)), (safe_add_func_uint16_t_u_u(((((!((safe_add_func_uint32_t_u_u(((*g_216) < ((l_391[0][0] >= l_400) <= (*g_7))), (*l_292))) , l_382[4][1][0])) | p_47) != 65535UL) ^ (*p_48)), p_44))))) , (-7L));
                        (*l_406) = &p_46;
                        if ((*p_46))
                            break;
                        (**l_406) = p_46;
                    }
                }
                if ((*p_46))
                {
                    (*l_390) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(0x4EL, (g_19 | ((l_411 , (safe_add_func_uint8_t_u_u((*l_292), (((safe_mod_func_uint8_t_u_u((g_145 || ((l_382[5][0][3] , (safe_add_func_uint8_t_u_u((p_47 < 247UL), (l_418 != (void*)0)))) && 0x632EL)), (-1L))) , p_48) == p_48)))) >= g_8[0][0][3])))), 13));
                    for (p_47 = 0; (p_47 <= 0); p_47 += 1)
                    {
                        const union U0 *l_420[4] = {&l_411, (void*)0, &l_411, (void*)0};
                        const union U0 **l_421 = &l_420[3];
                        int i;
                        p_46 = l_419;

                        ;
                        (*l_421) = l_420[0];
                    }
                }
                else
                {
                    l_422 = l_422;
                    for (p_44 = 6; (p_44 != 31); p_44 = safe_add_func_int8_t_s_s(p_44, 5))
                    {
                        int *l_425[1];
                        int **l_426 = &l_292;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_425[i] = &l_213[1][2];
                        (*l_426) = l_425[0];

                        ;
                        (*l_292) = (&p_46 == (void*)0);
                    }
                }
            }

            ;
        }
        for (p_47 = 0; (p_47 <= 0); p_47 += 1)
        {
            unsigned char l_475 = 6UL;
            int i, j;
            (*l_422) = 0xD4ACA55BL;
            if ((l_246[(p_47 + 5)][(p_47 + 7)] && ((safe_lshift_func_uint16_t_u_s((*l_292), 1)) , ((safe_mul_func_int8_t_s_s((*l_422), (0xCC75241BL <= (safe_mul_func_uint16_t_u_u((l_433 , (*l_422)), (safe_sub_func_int16_t_s_s((p_45 || (((((safe_div_func_int16_t_s_s(p_45, (((safe_sub_func_uint16_t_u_u(p_44, p_45)) , (*p_48)) | 0L))) != g_145) && 0x62781797L) , (-10L)) && (*g_216))), (-1L)))))))) == 0xBEB1825EL))))
            {
                union U0 **l_440 = &l_239;
                unsigned l_445 = 9UL;
                (*l_440) = (void*)0;
                (*l_422) = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_445, (((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_440) != (void*)0), (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_6[2][1][5] != 5L), ((*g_7) <= (0x72F4L == p_45)))), 0x841FL)), l_445)))), 0xBFL)) == (-1L)) == (*p_48)))), g_8[0][2][3])) <= 0xFA0EL);
                return p_46;




            }
            else
            {
                unsigned l_472 = 2UL;
                int **l_476 = &g_18;
                (*l_422) = ((safe_div_func_uint32_t_u_u(0x667E573DL, (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((g_201 && (((-1L) < 0L) && ((((safe_mod_func_uint16_t_u_u(65535UL, g_76[4][1])) , (((safe_lshift_func_uint16_t_u_s((p_47 , (g_76[4][1] && (*p_46))), (*l_292))) ^ (-4L)) < p_47)) , p_44) > (*g_7)))), p_44)) , 0x4D8FL), (*l_422))), 3)) != 0x99E8L), (*p_46))))) ^ l_475);
                for (l_472 = 0; (l_472 <= 5); l_472 += 1)
                {
                    (*l_422) = 0x6652B3F9L;
                    (*g_109) = (*g_109);
                    (*l_422) = 0x29FB6102L;
                }
                g_142[p_47] = ((p_47 , 1L) , l_476);
            }
        }


    }



    ;
    ;
    (*l_477) = ((*l_292) != (((l_239 != (void*)0) , &l_239) != &l_239));
    return p_46;




}







static char func_51(int p_52, unsigned p_53)
{
    int l_70 = 0xF3F1863DL;
    int **l_78 = (void*)0;
    int *l_87 = &g_76[4][3];
    char l_114 = (-1L);
    const union U0 l_197 = {0};
    short l_200 = 1L;
    for (p_52 = 0; (p_52 > 1); ++p_52)
    {
        int *l_61[2][9] = {{(void*)0, &g_6[1][1][7], &g_59, (void*)0, (void*)0, &g_59, &g_6[1][1][7], (void*)0, &g_59}, {(void*)0, &g_6[1][1][7], &g_59, (void*)0, (void*)0, &g_59, &g_6[1][1][7], (void*)0, &g_59}};
        unsigned char l_94 = 4UL;
        int ***l_112 = (void*)0;
        union U0 *l_118 = (void*)0;
        unsigned short l_143 = 0xDAE4L;
        char **l_173 = &g_7;
        int i, j;
        for (p_53 = 0; (p_53 >= 45); p_53 = safe_add_func_int8_t_s_s(p_53, 8))
        {
            char l_58[7] = {(-1L), 0x71L, (-1L), 0x71L, (-1L), 0x71L, (-1L)};
            int * const l_60 = &g_19;
            int l_100 = 0x4B0E7A36L;
            int i;
            for (g_59 = 0; g_59 < 7; g_59 += 1)
            {
                l_58[g_59] = 0x93L;
            }
            l_61[1][0] = l_60;
            for (g_59 = 7; (g_59 <= 9); g_59 = safe_add_func_int32_t_s_s(g_59, 8))
            {
                unsigned short l_66 = 65535UL;
                int **l_72[6][4];
                const union U0 l_75 = {0};
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_72[i][j] = &l_61[0][7];
                }
                if ((safe_sub_func_int32_t_s_s(p_53, (*g_18))))
                {
                    const unsigned l_99 = 0x7A37A7FFL;
                    if (l_66)
                    {
                        int **l_67 = &l_61[0][1];
                        const int l_71 = 0L;
                        (*l_67) = &g_6[1][1][7];
                        g_18 = &p_52;

                        ;
                        if ((*g_18))
                            break;
                        g_76[4][1] = ((~((p_53 < (safe_div_func_int32_t_s_s(l_70, g_6[1][0][2]))) <= g_8[0][2][2])) || (((((l_71 , l_72[1][0]) == (void*)0) || ((((((safe_mod_func_int32_t_s_s(((void*)0 != &g_18), p_52)) , l_75) , 0x3394L) & 0xAB9CL) || 3UL) , 0xC1L)) || g_6[1][1][7]) > 246UL));
                    }
                    else
                    {
                        int *l_77 = &l_70;
                        short l_83 = 0x7C2AL;
                        l_77 = &p_52;

                        ;
                        g_76[2][1] = ((((p_52 , l_78) != (((safe_div_func_int16_t_s_s(((*g_7) > (p_52 ^ ((p_53 == (safe_mul_func_uint8_t_u_u(p_53, l_83))) , 0xBA1441E2L))), g_8[0][0][0])) , p_53) , &l_60)) & (*l_60)) || g_59);
                    }
                    for (l_70 = 0; (l_70 == 3); l_70 = safe_add_func_int8_t_s_s(l_70, 4))
                    {
                        int *l_86 = &g_76[0][1];
                        l_86 = &g_76[1][0];
                        l_87 = l_61[1][0];

                        ;
                    }


                    l_100 = (((safe_div_func_uint32_t_u_u((p_52 < ((safe_lshift_func_uint8_t_u_s(0UL, 5)) , (((safe_rshift_func_int8_t_s_s((g_8[0][0][3] , l_94), p_53)) | (safe_lshift_func_uint8_t_u_u(1UL, 5))) , ((safe_lshift_func_uint16_t_u_s(p_52, 10)) != ((+((l_99 , &p_52) != l_61[1][0])) >= p_52))))), 0x45391C29L)) || g_59) <= g_19);
                }
                else
                {
                    int * const *l_102[5][5] = {{&g_18, &l_61[0][8], &l_61[1][2], &l_61[0][8], &g_18}, {&g_18, &l_61[0][8], &l_61[1][2], &l_61[0][8], &g_18}, {&g_18, &l_61[0][8], &l_61[1][2], &l_61[0][8], &g_18}, {&g_18, &l_61[0][8], &l_61[1][2], &l_61[0][8], &g_18}, {&g_18, &l_61[0][8], &l_61[1][2], &l_61[0][8], &g_18}};
                    int * const **l_101 = &l_102[4][0];
                    int i, j;
                    (*l_101) = &l_60;
                }


                g_76[4][1] = p_53;
                if ((safe_div_func_int16_t_s_s((*l_60), g_76[4][2])))
                {
                    g_76[1][0] = p_52;
                }
                else
                {
                    union U0 *l_106 = &g_107[3][0][3];
                    union U0 **l_105 = &l_106;
                    (*l_105) = (void*)0;

                    ;
                }
            }
        }
        l_61[1][0] = &g_6[1][1][7];
        for (g_59 = 3; (g_59 >= 0); g_59 -= 1)
        {
            int *l_113[3][1];
            union U0 *l_117 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_113[i][j] = &g_76[g_59][g_59];
            }
            l_113[0][0] = ((g_108[0][3][3] != ((g_76[g_59][g_59] , 252UL) , l_112)) , &g_76[g_59][g_59]);
        }
    }

    ;
    ;
    g_201 = (g_111 < (65535UL | ((safe_lshift_func_uint16_t_u_s((p_52 ^ ((safe_add_func_uint8_t_u_u(g_145, (l_197 , ((p_53 && (safe_sub_func_int32_t_s_s(l_200, (g_6[2][1][2] <= (&l_70 == &p_52))))) && 0x8541L)))) & (*g_7))), 10)) < p_52)));

    ;
    return (*g_7);


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_76[i][j], "g_76[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
